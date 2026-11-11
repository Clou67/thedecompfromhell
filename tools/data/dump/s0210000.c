//==== 00210c3c  ns=mobyupdate_helpers  size=0x8c
// sig: undefined M1227_00210c3c(void)
// callers(0): 
// callees(0): 

undefined8 mobyupdate_helpers::M1227_00210c3c(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  if ((*(byte *)(param_1 + 0x21) != 0xff) &&
     (puVar2 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)],
     puVar2 != (ushort *)0x0)) {
    do {
      if ((MobyInstance[*puVar2 & 0x7fff].setByGroup == '\0') &&
         (*(int *)((int)MobyInstance[*puVar2 & 0x7fff].pVar + 0x144) == 0)) {
        return 0;
      }
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return 1;
}



//==== 00210cc8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1227_00210cc8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1227_00210cc8(void)

{
  DAT_0076849c = 0x10000;
  return;
}



//==== 00210ce0  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1227(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1227 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1227(MobyInstance *moby)

{
  return moby;
}



//==== 00210cf0  ns=mobyupdate_helpers  size=0xf4
// sig: undefined M1228_00210cf0(void)
// callers(1): 00210ef8 mobyupdate_unsorted::UpdateMoby_1228
// callees(1): 000f31a8 mobyfunc::UpdateMobyTransform

void mobyupdate_helpers::M1228_00210cf0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = *(float *)(param_1 + 0xd4);
  fVar2 = *(float *)(param_1 + 0xd0);
  fVar3 = *(float *)(param_1 + 0xd8);
  iVar5 = *(int *)(param_1 + 0x78);
  fVar4 = 0.0;
  iVar6 = *(int *)(iVar5 + 0x14);
  fVar10 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  fVar7 = *(float *)(iVar5 + 0x18) / fVar10;
  fVar9 = fVar4;
  if (0.0 - fVar10 < 0.0) {
    fVar9 = fVar2 * fVar7;
  }
  fVar8 = fVar4;
  if (0.0 - fVar10 < 0.0) {
    fVar8 = fVar1 * fVar7;
  }
  if (0.0 - fVar10 < 0.0) {
    fVar4 = fVar3 * fVar7;
  }
  if (fVar10 - 0.0 < 0.0) {
    fVar9 = fVar2 * fVar7;
  }
  if (fVar10 - 0.0 < 0.0) {
    fVar8 = fVar1 * fVar7;
  }
  if (fVar10 - 0.0 < 0.0) {
    fVar4 = fVar3 * fVar7;
  }
  *(float *)(param_1 + 0x10) = *(float *)(iVar5 + 0x20) + fVar9;
  *(float *)(param_1 + 0x14) = *(float *)(iVar5 + 0x24) + fVar8;
  *(float *)(param_1 + 0x18) = *(float *)(iVar5 + 0x28) + fVar4;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar5 + 0x2c);
  *(float *)(iVar6 + 0x10) = *(float *)(iVar5 + 0x20) - fVar9;
  *(float *)(iVar6 + 0x14) = *(float *)(iVar5 + 0x24) - fVar8;
  *(float *)(iVar6 + 0x18) = *(float *)(iVar5 + 0x28) - fVar4;
  *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(iVar5 + 0x2c);
  mobyfunc::UpdateMobyTransform(*(MobyInstance **)(iVar5 + 0x14));
  return;
}



//==== 00210de4  ns=mobyupdate_helpers  size=0x104
// sig: undefined M1228_00210de4(void)
// callers(0): 
// callees(1): 00110b70 mobyutil::MB_IsPntInCuboid

undefined8 mobyupdate_helpers::M1228_00210de4(int param_1)

{
  int *piVar1;
  MobyInstance *pMVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  piVar1 = *(int **)(param_1 + 0x78);
  if (piVar1[4] == -1) {
    uVar3 = 0;
  }
  else {
    iVar4 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[4]);
    if (iVar4 == 0) {
      iVar4 = 0;
      piVar6 = piVar1;
      do {
        if (*piVar6 != -1) {
          pMVar2 = MobyInstance + *piVar6;
          if (((pMVar2 == (MobyInstance *)0x0) || (pMVar2->state == 0xfe)) ||
             (pMVar2->state == 0xfd)) {
            *piVar6 = -1;
          }
          else {
            iVar5 = mobyutil::MB_IsPntInCuboid((Vec4 *)&pMVar2->pos,(longlong)piVar1[4]);
            if (iVar5 != 0) {
              return 1;
            }
          }
        }
        iVar4 = iVar4 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar4 < 3);
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}



//==== 00210ef8  ns=mobyupdate_unsorted  size=0x498
// sig: undefined UpdateMoby_1228(MobyInstance * moby)
// callers(0): 
// callees(5): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 00109c30 mobyutil::OrganicDelt; 00110b70 mobyutil::MB_IsPntInCuboid; 00210cf0 mobyupdate_helpers::M1228_00210cf0

/* Moby 1228 */

void mobyupdate_unsorted::UpdateMoby_1228(MobyInstance *moby)

{
  u8 uVar1;
  int *piVar2;
  uint uVar3;
  MobyInstance *pMVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  float fVar8;
  
  uVar1 = moby->state;
  piVar2 = (int *)moby->pVar;
  if (uVar1 == '\x05') {
                    /* WARNING: Load size is inaccurate */
    piVar2[6] = (int)(*MobyInstance[piVar2[3]].pVar * 4.0);
    mobyupdate_helpers::M1228_00210cf0(moby);
  }
  else if (uVar1 == '\x04') {
    fVar8 = mobyutil::OrganicDelt
                      (0.0,DAT_0071f418 * 10.0,DAT_0071f418 * 10.0,mobyutil::g_FrameTime * 10.0,
                       (float *)(piVar2 + 6),0x720000,(float *)(piVar2 + 7));
    mobyupdate_helpers::M1228_00210cf0((double)fVar8,moby);
    if (piVar2[6] < 1) {
      moby->state = '\x01';
    }
    else {
      piVar2 = (int *)moby->pVar;
      if (piVar2[4] != -1) {
        iVar5 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar2[4]);
        if (iVar5 == 0) {
          iVar5 = 0;
          piVar7 = piVar2;
          do {
            if (*piVar7 != -1) {
              pMVar4 = MobyInstance + *piVar7;
              if (((pMVar4 == (MobyInstance *)0x0) || (pMVar4->state == 0xfe)) ||
                 (pMVar4->state == 0xfd)) {
                *piVar7 = -1;
              }
              else {
                iVar6 = mobyutil::MB_IsPntInCuboid((Vec4 *)&pMVar4->pos,(longlong)piVar2[4]);
                if (iVar6 != 0) goto LAB_00211328;
              }
            }
            iVar5 = iVar5 + 1;
            piVar7 = piVar7 + 1;
          } while (iVar5 < 3);
        }
        else {
LAB_00211328:
          moby->state = '\x02';
        }
      }
    }
  }
  else if (uVar1 == '\x03') {
    if (piVar2[4] != -1) {
      iVar5 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar2[4]);
      if (iVar5 != 0) {
        return;
      }
      iVar5 = 0;
      piVar7 = piVar2;
      do {
        if (*piVar7 != -1) {
          pMVar4 = MobyInstance + *piVar7;
          if (((pMVar4 == (MobyInstance *)0x0) || (pMVar4->state == 0xfe)) ||
             (pMVar4->state == 0xfd)) {
            *piVar7 = -1;
          }
          else {
            iVar6 = mobyutil::MB_IsPntInCuboid((Vec4 *)&pMVar4->pos,(longlong)piVar2[4]);
            if (iVar6 != 0) {
              return;
            }
          }
        }
        iVar5 = iVar5 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar5 < 3);
    }
    moby->state = '\x04';
  }
  else if (uVar1 == '\x02') {
    fVar8 = mobyutil::OrganicDelt
                      (4.0,DAT_0071f418 * 10.0,DAT_0071f418 * 10.0,mobyutil::g_FrameTime * 10.0,
                       (float *)(piVar2 + 6),0x720000,(float *)(piVar2 + 7));
    mobyupdate_helpers::M1228_00210cf0((double)fVar8,moby);
    uVar3 = piVar2[6] >> 0x1f;
    if (0x407fffff < (int)((uVar3 >> 1 ^ piVar2[6]) - uVar3)) {
      moby->state = '\x03';
    }
  }
  else if (uVar1 == '\x01') {
    if (piVar2[4] != -1) {
      iVar5 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar2[4]);
      if (iVar5 == 0) {
        iVar5 = 0;
        piVar7 = piVar2;
        do {
          if (*piVar7 != -1) {
            pMVar4 = MobyInstance + *piVar7;
            if (((pMVar4 == (MobyInstance *)0x0) || (pMVar4->state == 0xfe)) ||
               (pMVar4->state == 0xfd)) {
              *piVar7 = -1;
            }
            else {
              iVar6 = mobyutil::MB_IsPntInCuboid((Vec4 *)&pMVar4->pos,(longlong)piVar2[4]);
              if (iVar6 != 0) goto LAB_002110ec;
            }
          }
          iVar5 = iVar5 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar5 < 3);
      }
      else {
LAB_002110ec:
        moby->state = '\x02';
      }
    }
  }
  else if (uVar1 == '\0') {
    piVar2[8] = (int)(moby->pos).x;
    piVar2[9] = (int)(moby->pos).y;
    piVar2[10] = (int)(moby->pos).z;
    piVar2[0xb] = (int)(moby->pos).w;
    pMVar4 = mobyfunc::CreateMoby(0x4cc);
    piVar2[5] = (int)pMVar4;
    pMVar4->drawDistance = 0x40;
    *(undefined1 *)(piVar2[5] + 0x31) = 1;
    *(undefined8 *)(piVar2[5] + 0x38) = *(undefined8 *)&moby->color;
    *(MobyModeBit *)(piVar2[5] + 0x34) = moby->modeBits | (MIRROR|NO_UPDATE);
    iVar5 = piVar2[5];
    *(f32 *)(iVar5 + 0x10) = (moby->pos).x;
    *(f32 *)(iVar5 + 0x14) = (moby->pos).y;
    *(f32 *)(iVar5 + 0x18) = (moby->pos).z;
    *(f32 *)(iVar5 + 0x1c) = (moby->pos).w;
    iVar5 = piVar2[5];
    *(f32 *)(iVar5 + 0x40) = (moby->rotation).x;
    *(f32 *)(iVar5 + 0x44) = (moby->rotation).y;
    *(f32 *)(iVar5 + 0x48) = (moby->rotation).z;
    *(f32 *)(iVar5 + 0x4c) = (moby->rotation).w;
    mobyfunc::UpdateMobyTransform((MobyInstance *)piVar2[5]);
    moby->state = ((byte)((LZCOUNT(-1 - piVar2[3]) << 0x3a) >> 0x3f) & 0xfc) + 5;
  }
  return;
}



//==== 00211390  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1229_00211390(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1229_00211390(void)

{
  DAT_0076850c = 0x10000;
  return;
}



//==== 002113b8  ns=mobyupdate_helpers  size=0x320
// sig: undefined M1229_002113b8(void)
// callers(1): 00211748 mobyupdate_unsorted::UpdateMoby_1229
// callees(8): 000fddc0 mobyutil::MB_SetAnimation; 00104e44 mobyutil::PointInsideComplexPoly; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00111ba0 mobyutil::MB_getTargetInArea; 00495490 FUN_00495490

void mobyupdate_helpers::M1229_002113b8(MobyInstance *param_1)

{
  void *pvVar1;
  uint uVar2;
  Spline *pSVar3;
  undefined2 uVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int local_40;
  float local_3c;
  longlong local_38;
  
  pvVar1 = param_1->pVar;
  uVar8 = ZEXT48(pvVar1);
  iVar6 = mobyutil::MB_damage(param_1,0x370000,0);
  dVar9 = 0.0;
  local_3c = 0.0;
  iVar7 = mobyutil::MB_HandleDamage(param_1,iVar6,uVar8 + 0x20,5,&local_40,&local_3c,0,4);
  if (((iVar6 == 0) || (local_40 == 1)) || (param_1->state == '\b')) goto LAB_00211584;
  uVar2 = *(uint *)(iVar6 + 0x24);
  fVar5 = *(float *)((int)pvVar1 + 0x20) - local_3c;
  *(float *)((int)pvVar1 + 0x20) = fVar5;
  if ((double)fVar5 <= dVar9) {
    iVar7 = 1;
  }
  if ((uVar2 & 0x40000) == 0) {
    if (iVar7 < 9) {
      if (iVar7 == 1) goto LAB_002114cc;
    }
    else if (iVar7 < 0xd) {
      if (iVar7 != 0xb) {
        *(undefined1 *)((int)pvVar1 + 199) = 0xfa;
        mobyutil::MB_UpdateLightsTransition(param_1,uVar8 + 0xc0);
        goto LAB_00211584;
      }
    }
    else if (iVar7 < 0xe) goto LAB_00211584;
    auVar10 = ZEXT416(0xffffffff);
    auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    *(undefined1 *)((int)pvVar1 + 199) = 0xfa;
    auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
    auVar10 = loadVectorLeftIndexed(4,0x2113a8);
    auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar10 = vectorMultiplyAddFloatingPoint
                        (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                         auVar11);
    auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
    auVar10 = vectorSplatHalfWord(auVar10,1);
    uVar4 = storeVectorElementHalfWordIndexed(auVar10,0x26,uVar8);
    *(undefined2 *)((int)pvVar1 + 0x26) = uVar4;
    mobyutil::MB_UpdateLightsTransition(param_1,uVar8 + 0xc0);
    local_38 = (longlong)(int)(animationSpeed * 6.5);
    mobyutil::MB_SetAnimation(param_1,4,0,(int)(animationSpeed * 6.5));
    param_1->setByGroup = param_1->state;
    param_1->state = '\a';
  }
  else {
LAB_002114cc:
    *(undefined1 *)((int)pvVar1 + 199) = 0xfa;
    mobyutil::MB_UpdateLightsTransition(param_1,uVar8 + 0xc0);
    param_1->state = '\b';
  }
LAB_00211584:
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar8 + 0xc0);
  if (g_heroType == '\x01') {
    FUN_00495490(0x4059400000000000,param_1,uVar8 + 0x110);
    if (*(int *)((int)pvVar1 + 0x110) == 0) {
      *(undefined4 *)((int)pvVar1 + 0x114) = 2;
    }
    else {
      iVar6 = mobyutil::PointInsideComplexPoly
                        ((Vec4 *)(*(int *)((int)pvVar1 + 0x110) + 0x10),
                         (Vec4 *)Splines[*(int *)((int)pvVar1 + 400)]->points,
                         Splines[*(int *)((int)pvVar1 + 400)]->cnt);
      if (iVar6 == 0) {
        *(undefined4 *)((int)pvVar1 + 0x110) = 0;
        *(undefined4 *)((int)pvVar1 + 0x114) = 2;
      }
      else {
        *(undefined4 *)((int)pvVar1 + 0x114) = 0;
      }
    }
  }
  else {
    pSVar3 = Splines[*(int *)((int)pvVar1 + 400)];
    iVar6 = mobyutil::MB_getTargetInArea
                      (0x4059400000000000,param_1,uVar8 + 0xd0,pSVar3,0,0,pSVar3->points,pSVar3->cnt
                      );
    if ((iVar6 != 2) && (param_1->enabled == '\0')) {
      *(undefined4 *)((int)pvVar1 + 0x114) = 2;
    }
  }
  if (*(int *)((int)pvVar1 + 0x110) == 0) {
    *(MobyInstance **)((int)pvVar1 + 0x110) = g_heroMobyPtr;
  }
  return;
}



//==== 00211748  ns=mobyupdate_unsorted  size=0x150c
// sig: undefined UpdateMoby_1229(MobyInstance * moby)
// callers(0): 
// callees(27): 00057820 collproc::CollLine; 0007b310 help::Help_QueueMessage; 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 000fe610 mobyutil::MB_SphericalToVector; 000ff190 mobyutil::MB_DeltAngSpeed; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 000ffb70 mobyutil::GetGroundZ; 00106360 mobyutil::MB_SetZBoundsFromGround; 0010e030 mobyutil::MB_genericExplosion; 00110488 mobyutil::ClampVec3Magnitude; 00110b70 mobyutil::MB_IsPntInCuboid; 00113e88 mobyutil::MB_MayaFrameTrigger; 001162a0 mobyutil::???_MB_SpawnRingPartFx; 00119a18 mobyfunc::DoManipulator; 0011a560 mobyutil::MB_SpawnDebrisMoby; 002113b8 mobyupdate_helpers::M1229_002113b8; 00470690 FUN_00470690; 004fff60 fastfunc::FastDecTimerS32; 005023bc fastfunc::FastVecScale; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt; 00502b08 fastfunc::FastVecAddSelf; 005cd098 libc::printf; 005e8338 FUN_005e8338
// strings: 00654f7c: 'ERROR!! Moby class %d maya instance %d has no path set; deleted\n' | 00a1000c: 'None'

/* Moby 1229 */

void mobyupdate_unsorted::UpdateMoby_1229(MobyInstance *moby)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  void *pvVar6;
  MobyInstance *pMVar7;
  Spline *pSVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  longlong lVar14;
  undefined2 uVar18;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  longlong lVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float local_170;
  float local_16c;
  float local_168;
  f32 local_164;
  Vec4 local_160;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined1 auStack_130 [16];
  float local_120;
  float local_11c;
  float local_118;
  f32 local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_100;
  float local_fc;
  float local_f8;
  f32 local_f4;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  f32 local_d0;
  f32 local_cc;
  float local_c8;
  f32 local_c4;
  Vec4 local_c0;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 auStack_90 [16];
  longlong local_80;
  
  lVar14 = (longlong)(int)moby;
  pvVar6 = moby->pVar;
  uVar20 = ZEXT48(pvVar6);
  mobyfunc::DoManipulator(0x4004000000000000,moby,2,(Manipulator *)((int)pvVar6 + 0x1d0));
  if (*(int *)((int)pvVar6 + 0x140) == -1) {
    libc::printf("ERROR!! Moby class %d maya instance %d has no path set; deleted\n",moby->oClass,
                 (ulonglong)(uint)moby->field71_0xa8 & 0xffff);
    mobyfunc::DeleteMoby(moby);
  }
  else {
    mobyupdate_helpers::M1229_002113b8(lVar14);
    bVar5 = moby->state;
    pMVar7 = *(MobyInstance **)((int)pvVar6 + 0x110);
    if (bVar5 < 4) {
      if (bVar5 == 0) {
        moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
        *(undefined4 *)((int)pvVar6 + 0x20) = 0x41100000;
        uVar18 = fastfunc::FastDoubleToInt(0x4022000000000000);
        iVar15 = *(int *)((int)pvVar6 + 0x140);
        *(undefined2 *)((int)pvVar6 + 0x24) = uVar18;
        *(undefined1 *)((int)pvVar6 + 0x28) = 3;
        *(undefined1 *)((int)pvVar6 + 0x29) = 0;
        *(undefined4 *)((int)pvVar6 + 0x19c) = 0;
        moby->drawDistance = 0x7f;
        auVar30 = ZEXT416(0xffffffff);
        auVar32 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
        pSVar8 = Splines[iVar15];
        auVar30 = loadVectorLeftIndexed(0xffffffffffff8530,0x770000);
        auVar31 = vectorConvertFromSignedFixedPointWord(auVar30,0);
        (moby->pos).x = pSVar8->points[0].x;
        (moby->pos).y = pSVar8->points[0].y;
        (moby->pos).z = pSVar8->points[0].z;
        (moby->pos).w = pSVar8->points[0].w;
        auVar30 = loadVectorLeftIndexed(8,0x2116d8);
        auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar30 = vectorAddFloatingPoint
                            (auVar31,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60);
        auVar31 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        auVar32 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar30 = vectorMultiplyAddFloatingPoint(auVar32,auVar30,auVar31);
        auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
        auVar30 = vectorSplatHalfWord(auVar30,1);
        uVar18 = storeVectorElementHalfWordIndexed(auVar30,0x196,uVar20);
        *(undefined2 *)((int)pvVar6 + 0x196) = uVar18;
        moby->collision = (ushort *)0x0;
        moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
        if (moby->animationId != '\0') {
          mobyutil::MB_SetAnimation(lVar14,0,0,0);
        }
        moby->state = '\x01';
        if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
          mobyfunc::DeleteMoby(moby);
          return;
        }
      }
      else if (bVar5 < 2) {
        iVar15 = mobyutil::MB_IsPntInCuboid
                           ((Vec4 *)&pMVar7->pos,(longlong)*(int *)((int)pvVar6 + 0x148));
        if (iVar15 != 0) {
          moby->state = '\x02';
          if (moby->animationId != '\x01') {
            local_80 = (longlong)(int)(animationSpeed * 20.5);
            mobyutil::MB_SetAnimation(lVar14,1,0,(int)(animationSpeed * 20.5));
          }
          iVar15 = help::g_HelpState;
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
          moby->collision = moby->pClass->collision;
          if ((((iVar15 == 0) && (help::g_HelpCurId == -1)) && (g_heroType == '\0')) &&
             ((CHAR_ARRAY_00a1000c._736_2_ == 0 && (UnlockableItems.devastator == '\0')))) {
            help::Help_QueueMessage(STR_THE_DEVASTATOR_MANUFACTURED_EXCLUSIVELY_0x2715,0x5c);
          }
        }
      }
      else if (bVar5 < 3) {
        uVar21 = FUN_005e8338((double)((pMVar7->pos).x - (moby->pos).x),
                              (double)((pMVar7->pos).y - (moby->pos).y));
        uVar25 = 0x3f947ae140000000;
        uVar24 = 0x3fd3333340000000;
        dVar26 = 3.1415927410125732;
        mobyutil::OrganicDeltAngSpeed
                  (uVar21,0x3f947ae140000000,0x3fd3333340000000,
                   (double)(mobyutil::g_FrameTime * 3.1415927),lVar14);
        fVar2 = (moby->pos).y - (pMVar7->pos).y;
        fVar3 = (moby->pos).x - (pMVar7->pos).x;
        dVar23 = (double)(moby->rotation).y;
        dVar22 = (double)FUN_005e8338((double)SQRT(fVar3 * fVar3 + fVar2 * fVar2),
                                      (double)((pMVar7->pos).z - (moby->pos).z));
        dVar22 = (double)mobyutil::MB_DeltAngSpeed
                                   (dVar23,-dVar22,uVar25,uVar24,
                                    (double)(float)((double)mobyutil::g_FrameTime * dVar26));
        bVar5 = moby->field43_0x70;
        (moby->rotation).y = (float)dVar22;
        if (((bVar5 & 2) != 0) && (moby->animationId == '\x01')) {
          local_80 = (longlong)(int)(animationSpeed * 20.5);
          mobyutil::MB_SetAnimation(lVar14,2,0,(int)(animationSpeed * 20.5));
        }
        fVar2 = mobyutil::g_FrameTime * 4.0 + (moby->pos).z;
        pSVar8 = Splines[*(int *)((int)pvVar6 + 0x140)];
        (moby->pos).z = fVar2;
        fVar3 = (moby->pos).y - pSVar8->points[0].y;
        fVar4 = (moby->pos).x - pSVar8->points[0].x;
        fVar2 = fVar2 - pSVar8->points[0].z;
        if ((SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3) < 0.5) &&
           (moby->state = '\x03', moby->animationId != '\x02')) {
          local_80 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar14,2,0,(int)(animationSpeed * 10.5));
        }
      }
      else {
        iVar15 = *(int *)((int)pvVar6 + 0x158);
        pSVar8 = Splines[*(int *)((int)pvVar6 + 0x140)];
        dVar29 = (double)pSVar8->points[iVar15].x;
        dVar28 = (double)pSVar8->points[iVar15].y;
        dVar27 = (double)pSVar8->points[iVar15].z;
        dVar26 = (double)pSVar8->points[iVar15].w;
        uVar21 = FUN_005e8338((double)(float)(dVar29 - (double)(moby->pos).x),
                              (double)(float)(dVar28 - (double)(moby->pos).y));
        uVar25 = 0x3f947ae140000000;
        uVar24 = 0x3fd3333340000000;
        mobyutil::OrganicDeltAngSpeed
                  (uVar21,0x3f947ae140000000,0x3fd3333340000000,
                   (double)(mobyutil::g_FrameTime * 12.566371),lVar14);
        fVar2 = (moby->pos).y - (pMVar7->pos).y;
        fVar3 = (moby->pos).x - (pMVar7->pos).x;
        dVar23 = (double)(moby->rotation).y;
        dVar22 = (double)FUN_005e8338((double)SQRT(fVar3 * fVar3 + fVar2 * fVar2),
                                      (double)((pMVar7->pos).z - (moby->pos).z));
        dVar22 = (double)mobyutil::MB_DeltAngSpeed
                                   (dVar23,-dVar22,uVar25,uVar24,
                                    (double)(mobyutil::g_FrameTime * 3.1415927));
        fVar2 = (float)(dVar28 - (double)(moby->pos).y);
        fVar3 = (float)(dVar29 - (double)(moby->pos).x);
        fVar4 = (float)(dVar27 - (double)(moby->pos).z);
        (moby->rotation).y = (float)dVar22;
        fVar9 = mobyutil::g_FrameTime * 8.0;
        fVar11 = 0.0;
        *(float *)((int)pvVar6 + 300) = (float)dVar26;
        fVar10 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
        fVar9 = fVar9 / fVar10;
        fVar12 = fVar11;
        if (0.0 - fVar10 < 0.0) {
          fVar12 = fVar2 * fVar9;
        }
        fVar13 = fVar11;
        if (0.0 - fVar10 < 0.0) {
          fVar13 = fVar3 * fVar9;
        }
        if (0.0 - fVar10 < 0.0) {
          fVar11 = fVar4 * fVar9;
        }
        if (fVar10 - 0.0 < 0.0) {
          fVar12 = fVar2 * fVar9;
        }
        if (fVar10 - 0.0 < 0.0) {
          fVar13 = fVar3 * fVar9;
        }
        if (fVar10 - 0.0 < 0.0) {
          fVar11 = fVar4 * fVar9;
        }
        *(float *)((int)pvVar6 + 0x124) = fVar12;
        *(float *)((int)pvVar6 + 0x120) = fVar13;
        *(float *)((int)pvVar6 + 0x128) = fVar11;
        (moby->pos).x = (moby->pos).x + fVar13;
        (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar6 + 0x124);
        (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar6 + 0x128);
        if (fVar10 < 0.5) {
          iVar15 = *(int *)((int)pvVar6 + 0x158) + 1;
          if (iVar15 < Splines[*(int *)((int)pvVar6 + 0x140)]->cnt) {
            *(int *)((int)pvVar6 + 0x158) = iVar15;
          }
          else {
            *(undefined4 *)((int)pvVar6 + 0x158) = 0;
            moby->state = '\x04';
            uVar16 = fastfunc::FastDoubleToInt
                               ((double)(animationSpeed * *(float *)((int)pvVar6 + 0x160) * 60.0));
            *(undefined4 *)((int)pvVar6 + 0x168) = uVar16;
          }
        }
      }
    }
    else if (bVar5 < 7) {
      if (bVar5 < 5) {
        iVar15 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar6 + 0x1b0))
        ;
        if (iVar15 == 0) {
          local_170 = (pMVar7->pos).x;
          local_16c = (pMVar7->pos).y;
          dVar22 = (double)(pMVar7->pos).z;
          local_164 = (pMVar7->pos).w;
          if (g_heroType == '\x01') {
            if (g_heroMobyPtr == pMVar7) {
              fastfunc::FastVecScale
                        ((double)(longlong)(animationSpeed * 20.5),&local_140,&DAT_00969de0);
              local_150 = local_140;
              local_14c = local_13c;
              local_148 = local_138;
              local_144 = local_134;
              fastfunc::FastVecAddSelf(auStack_130,&local_170,&local_150);
              dVar22 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,&local_170,0);
            }
            local_168 = (float)(dVar22 + 0.20000000298023224);
            CollOutput.pMoby = pMVar7;
          }
          else {
            local_170 = *(float *)((int)pvVar6 + 0xf0);
            local_16c = *(float *)((int)pvVar6 + 0xf4);
            local_168 = *(float *)((int)pvVar6 + 0xf8);
            local_164 = *(f32 *)((int)pvVar6 + 0xfc);
            collproc::CollLine(lVar14 + 0x10,&local_170,0,lVar14,0);
          }
          uVar21 = FUN_005e8338((double)((pMVar7->pos).x - (moby->pos).x),
                                (double)((pMVar7->pos).y - (moby->pos).y));
          uVar25 = 0x3f947ae140000000;
          uVar24 = 0x3fd3333340000000;
          mobyutil::OrganicDeltAngSpeed
                    (uVar21,0x3f947ae140000000,0x3fd3333340000000,
                     (double)(mobyutil::g_FrameTime * 12.566371),lVar14);
          fVar2 = (moby->pos).y - local_16c;
          fVar3 = (moby->pos).x - local_170;
          dVar23 = (double)(moby->rotation).y;
          dVar22 = (double)FUN_005e8338((double)SQRT(fVar3 * fVar3 + fVar2 * fVar2),
                                        (double)(local_168 - (moby->pos).z));
          dVar22 = (double)mobyutil::MB_DeltAngSpeed
                                     (dVar23,-dVar22,uVar25,uVar24,
                                      (double)(mobyutil::g_FrameTime * 3.1415927));
          (moby->rotation).y = (float)dVar22;
          dVar23 = (double)(moby->rotation).z;
          dVar22 = (double)FUN_005e8338((double)((pMVar7->pos).x - (moby->pos).x),
                                        (double)((pMVar7->pos).y - (moby->pos).y));
          dVar22 = (double)fastfunc::FastSubRots((float)dVar23,(float)dVar22);
          if (dVar22 < 0.1745329201221466) {
            if (moby->animationId != '\x03') {
              local_80 = (longlong)(int)(animationSpeed * 6.5);
              mobyutil::MB_SetAnimation(lVar14,3,0,(int)(animationSpeed * 6.5));
            }
            moby->unk58 = DAT_00768538;
          }
          bVar1 = moby->updateId != '\x03';
          if (((bVar1) || (*(int *)((int)pvVar6 + 0x114) == 2)) || (CollOutput.pMoby != pMVar7)) {
            if ((!bVar1) && (moby->animationId != '\x02')) {
              local_80 = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar14,2,0,(int)(animationSpeed * 10.5));
            }
          }
          else {
            dVar22 = 1.0;
            iVar15 = mobyutil::MB_MayaFrameTrigger(1.0,moby);
            iVar17 = mobyutil::MB_MayaFrameTrigger(16.0,moby);
            if (iVar15 != 0 || iVar17 != 0) {
              mobyfunc::GetBonePosition
                        (lVar14,(ulonglong)(LZCOUNT(iVar17) << 0x20) >> 0x25,&local_110);
              mobyutil::MB_SphericalToVector
                        ((float)dVar22,(moby->rotation).z,-(moby->rotation).y,&local_120);
              fastfunc::FastVecAddSelf(auStack_f0,&local_110,&local_120);
              local_16c = local_16c - local_10c;
              local_170 = local_170 - local_110;
              local_168 = local_168 - local_108;
              local_114 = local_164;
              local_118 = 0.0;
              fVar2 = SQRT(local_168 * local_168 + local_170 * local_170 + local_16c * local_16c);
              fVar3 = (DAT_00768534 * mobyutil::g_FrameTime) / fVar2;
              local_120 = local_118;
              if (0.0 - fVar2 < 0.0) {
                local_120 = local_170 * fVar3;
              }
              local_11c = local_118;
              if (0.0 - fVar2 < 0.0) {
                local_11c = local_16c * fVar3;
              }
              if (0.0 - fVar2 < 0.0) {
                local_118 = local_168 * fVar3;
              }
              if (fVar2 - 0.0 < 0.0) {
                local_120 = local_170 * fVar3;
              }
              if (fVar2 - 0.0 < 0.0) {
                local_11c = local_16c * fVar3;
              }
              if (fVar2 - 0.0 < 0.0) {
                local_118 = local_168 * fVar3;
              }
              local_f4 = local_164;
              local_f8 = animationSpeed * 3.0;
              local_100 = local_120 * local_f8;
              local_fc = local_11c * local_f8;
              local_f8 = local_118 * local_f8;
              fastfunc::FastVecAddSelf(auStack_e0,&local_100,&local_110);
              mobyutil::____MB_SpawnRingPartFx(lVar14);
              local_80 = (longlong)(int)(animationSpeed * 300.5);
              FUN_00470690(dVar22,&local_120,&local_110,lVar14,pMVar7,(int)(animationSpeed * 300.5))
              ;
            }
          }
          iVar15 = fastfunc::FastDecTimerS32(uVar20 + 0x168);
          if (iVar15 != 0) {
            if (moby->animationId != '\x02') {
              local_80 = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar14,2,0,(int)(animationSpeed * 10.5));
            }
            moby->state = '\x05';
            uVar16 = fastfunc::FastDoubleToInt
                               ((double)(animationSpeed * *(float *)((int)pvVar6 + 0x164) * 60.0));
            *(undefined4 *)((int)pvVar6 + 0x168) = uVar16;
          }
          iVar15 = *(int *)((int)pvVar6 + 0x158);
          pSVar8 = Splines[*(int *)((int)pvVar6 + 0x144)];
          local_160.x = pSVar8->points[iVar15].x - (moby->pos).x;
          local_160.y = pSVar8->points[iVar15].y - (moby->pos).y;
          local_160.w = pSVar8->points[iVar15].w;
          local_160.z = pSVar8->points[iVar15].z - (moby->pos).z;
          mobyutil::ClampVec3Magnitude((double)(mobyutil::g_FrameTime * 8.0),&local_160);
          (moby->pos).x = (moby->pos).x + local_160.x;
          (moby->pos).y = (moby->pos).y + local_160.y;
          (moby->pos).z = (moby->pos).z + local_160.z;
          if ((SQRT(local_160.z * local_160.z +
                    local_160.x * local_160.x + local_160.y * local_160.y) < mobyutil::g_FrameTime)
             && (iVar15 = *(int *)((int)pvVar6 + 0x158) + 1,
                iVar15 < Splines[*(int *)((int)pvVar6 + 0x144)]->cnt)) {
            *(int *)((int)pvVar6 + 0x158) = iVar15;
          }
        }
        else {
          moby->state = '\x06';
        }
      }
      else if (bVar5 < 6) {
        iVar15 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar6 + 0x1b0))
        ;
        if (iVar15 == 0) {
          local_d0 = (pMVar7->pos).x;
          local_cc = (pMVar7->pos).y;
          local_c8 = (pMVar7->pos).z;
          dVar22 = (double)local_c8;
          local_c4 = (pMVar7->pos).w;
          if (g_heroType == '\x01') {
            if (g_heroMobyPtr == pMVar7) {
              fastfunc::FastVecScale
                        ((double)(longlong)(animationSpeed * 20.5),&local_a0,&DAT_00969de0);
              local_b0 = local_a0;
              local_ac = local_9c;
              local_a8 = local_98;
              local_a4 = local_94;
              fastfunc::FastVecAddSelf(auStack_90,&local_d0,&local_b0);
              dVar22 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,&local_d0,0);
            }
            local_c8 = (float)(dVar22 + 0.20000000298023224);
            CollOutput.pMoby = pMVar7;
          }
          else {
            local_d0 = *(f32 *)((int)pvVar6 + 0xf0);
            local_cc = *(f32 *)((int)pvVar6 + 0xf4);
            local_c8 = *(float *)((int)pvVar6 + 0xf8);
            local_c4 = *(f32 *)((int)pvVar6 + 0xfc);
            collproc::CollLine(lVar14 + 0x10,&local_d0,0,lVar14,0);
          }
          uVar21 = FUN_005e8338((double)((pMVar7->pos).x - (moby->pos).x),
                                (double)((pMVar7->pos).y - (moby->pos).y));
          uVar25 = 0x3f947ae140000000;
          uVar24 = 0x3fd3333340000000;
          mobyutil::OrganicDeltAngSpeed
                    (uVar21,0x3f947ae140000000,0x3fd3333340000000,
                     (double)(mobyutil::g_FrameTime * 12.566371),lVar14);
          fVar2 = (moby->pos).y - local_cc;
          fVar3 = (moby->pos).x - local_d0;
          dVar23 = (double)(moby->rotation).y;
          dVar22 = (double)FUN_005e8338((double)SQRT(fVar3 * fVar3 + fVar2 * fVar2),
                                        (double)(local_c8 - (moby->pos).z));
          dVar22 = (double)mobyutil::MB_DeltAngSpeed
                                     (dVar23,-dVar22,uVar25,uVar24,
                                      (double)(mobyutil::g_FrameTime * 3.1415927));
          (moby->rotation).y = (float)dVar22;
          iVar15 = fastfunc::FastDecTimerS32(uVar20 + 0x168);
          if (iVar15 != 0) {
            local_80 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar14,3,0,(int)(animationSpeed * 10.5));
            fVar2 = DAT_00768538;
            moby->state = '\x04';
            moby->unk58 = fVar2;
            uVar16 = fastfunc::FastDoubleToInt
                               ((double)(animationSpeed * *(float *)((int)pvVar6 + 0x160) * 60.0));
            *(undefined4 *)((int)pvVar6 + 0x168) = uVar16;
          }
          iVar15 = *(int *)((int)pvVar6 + 0x158);
          pSVar8 = Splines[*(int *)((int)pvVar6 + 0x144)];
          local_c0.x = pSVar8->points[iVar15].x - (moby->pos).x;
          local_c0.y = pSVar8->points[iVar15].y - (moby->pos).y;
          local_c0.z = pSVar8->points[iVar15].z - (moby->pos).z;
          local_c0.w = pSVar8->points[iVar15].w;
          mobyutil::ClampVec3Magnitude((double)(mobyutil::g_FrameTime * 8.0),&local_c0);
          (moby->pos).x = (moby->pos).x + local_c0.x;
          (moby->pos).y = (moby->pos).y + local_c0.y;
          (moby->pos).z = (moby->pos).z + local_c0.z;
          if ((SQRT(local_c0.z * local_c0.z + local_c0.x * local_c0.x + local_c0.y * local_c0.y) <
               mobyutil::g_FrameTime) &&
             (iVar15 = *(int *)((int)pvVar6 + 0x158) + 1,
             iVar15 < Splines[*(int *)((int)pvVar6 + 0x144)]->cnt)) {
            *(int *)((int)pvVar6 + 0x158) = iVar15;
          }
        }
        else {
          moby->state = '\x06';
        }
      }
      else {
        fVar3 = mobyutil::g_FrameTime * 10.0 + (moby->pos).z;
        fVar2 = moby->scale;
        (moby->pos).z = fVar3;
        fVar2 = fVar2 * (DAT_0071f408 * -0.015299976 + 1.0);
        moby->scale = fVar2;
        if ((250.0 < fVar3) || (fVar2 < 0.01)) {
          mobyfunc::DeleteMoby(moby);
          return;
        }
      }
    }
    else if (bVar5 < 8) {
      if ((moby->updateId == '\x04') && ((moby->field43_0x70 & 2U) != 0)) {
        if (moby->setByGroup == '\x04') {
          local_80 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar14,3,0,(int)(animationSpeed * 10.5));
          fVar2 = DAT_00768538;
          moby->state = '\x04';
          moby->unk58 = fVar2;
          uVar16 = fastfunc::FastDoubleToInt
                             ((double)(animationSpeed * *(float *)((int)pvVar6 + 0x160) * 60.0));
          *(undefined4 *)((int)pvVar6 + 0x168) = uVar16;
        }
        else if (moby->setByGroup == '\x06') {
          local_80 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar14,2,0,(int)(animationSpeed * 10.5));
          moby->state = '\x06';
        }
        else {
          local_80 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar14,2,0,(int)(animationSpeed * 10.5));
          moby->state = '\x05';
          uVar16 = fastfunc::FastDoubleToInt
                             ((double)(animationSpeed * *(float *)((int)pvVar6 + 0x164) * 60.0));
          *(undefined4 *)((int)pvVar6 + 0x168) = uVar16;
        }
      }
    }
    else if (bVar5 < 9) {
      lVar19 = lVar14 + 0x10;
      uVar21 = 0;
      mobyutil::MB_genericExplosion
                (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,lVar14,uVar20 + 0x40,lVar19,5,1,5,2,4);
      mobyutil::MB_SpawnBoltsFromCrate(lVar14,0,0xffffffffffffffff);
      mobyutil::MB_SpawnDebrisMoby(uVar21,lVar14,0x5fd,lVar19,lVar14 + 0x40,0,0);
      mobyutil::MB_SpawnDebrisMoby(uVar21,lVar14,0x5fe,lVar19,lVar14 + 0x40,0,0);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    if ((moby->enabled != '\0') &&
       (fVar2 = (moby->pos).y - GameCamera.posY, fVar3 = (moby->pos).x - GameCamera.posX,
       fVar4 = (moby->pos).z - GameCamera.posZ,
       SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) < 28.0)) {
      mobyutil::MB_SetZBoundsFromGround(lVar14);
      moby->shadow = '\x16';
    }
  }
  return;
}



//==== 00212c54  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1229_00212c54(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1229_00212c54(void)

{
  DAT_00768588 = 0x10000;
  return;
}



//==== 00212cc0  ns=mobyupdate_unsorted  size=0xc50
// sig: undefined UpdateMoby_123(MobyInstance * moby)
// callers(0): 
// callees(19): 00057820 collproc::CollLine; 0006d720 RegisterFuncForMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe610 mobyutil::MB_SphericalToVector; 0010a788 mobyutil::MB_NormalizeMtx3Columns; 001113e0 mobyutil::MB_RotateQuatAxisAngle; 00131100 partupd::SpawnPart_60; 00500ca4 fastfunc::FastEulerToMtx1; 00500fa8 fastfunc::FastApplyTransform; 005023f0 fastfunc::FastVecAdd; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502648 fastfunc::FastAddRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 00502a64 fastfunc::FastVecSub; 00502b08 fastfunc::FastVecAddSelf; 005c8318 rand
// strings: 00212cb0: '?fffA ' (raw)

/* Moby 123 */

void mobyupdate_unsorted::UpdateMoby_123(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  f32 *pfVar5;
  float fVar6;
  float fVar7;
  int iVar9;
  uint uVar10;
  longlong lVar8;
  longlong lVar11;
  double dVar12;
  undefined8 uVar13;
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
  undefined1 local_280 [16];
  undefined1 local_270 [16];
  undefined1 local_260 [16];
  float afStack_250 [4];
  float local_240 [2];
  f32 local_238;
  undefined4 local_234;
  float local_230;
  float local_22c;
  undefined4 local_228;
  undefined4 local_220;
  float local_21c;
  float local_218;
  undefined4 local_214;
  f32 local_210;
  f32 local_20c;
  f32 local_208;
  f32 local_204;
  float afStack_200 [4];
  float local_1f0 [3];
  undefined4 local_1e4;
  float local_1e0;
  float local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d0;
  float local_1cc;
  float local_1c8;
  undefined4 local_1c4;
  f32 local_1c0;
  f32 local_1bc;
  f32 local_1b8;
  f32 local_1b4;
  float afStack_1b0 [4];
  f32 local_1a0;
  f32 local_19c;
  f32 local_198;
  f32 local_194;
  f32 local_190;
  f32 local_18c;
  f32 local_188;
  float local_184;
  undefined1 auStack_180 [16];
  float local_170;
  float local_16c;
  float local_168;
  undefined1 auStack_160 [16];
  float local_150;
  float local_14c;
  undefined4 local_148;
  undefined4 local_144;
  MobyInstance *local_140;
  undefined4 local_13c;
  undefined1 local_138;
  undefined1 local_137;
  MOBY_OCLASSES local_136;
  undefined4 local_134;
  undefined4 local_130;
  Vec4 aVStack_120 [4];
  Vec4 aVStack_e0 [4];
  
  lVar8 = (longlong)(int)moby;
  fVar2 = (moby->pos).x;
  pfVar5 = (f32 *)moby->pVar;
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (pfVar5[9] == 0.0) {
        pfVar5[9] = 4.0;
        fVar2 = (moby->pos).x;
      }
      *pfVar5 = fVar2;
      pfVar5[1] = (moby->pos).y;
      pfVar5[2] = (moby->pos).z;
      pfVar5[3] = (moby->pos).w;
      fVar2 = pfVar5[8];
      moby->unk58 = pfVar5[0xc] * 0.6666667;
      pfVar5[10] = pfVar5[10] * 0.017453292;
      if (fVar2 == 0.0) {
        fVar2 = (moby->rotation).z;
        moby->state = '\x01';
        pfVar5[0xb] = fVar2;
      }
      else if ((int)fVar2 < 3) {
        moby->state = '\x03';
      }
      else {
        fVar2 = (moby->rotation).z;
        moby->state = '\x02';
        pfVar5[0xb] = fVar2;
      }
    }
    else {
      local_240[0] = 0.0;
      local_240[1] = 0.0;
      local_234 = 0;
      local_238 = pfVar5[9];
      local_220 = 0;
      local_21c = 0.0;
      local_218 = 0.0;
      local_214 = 0;
      dVar12 = (double)fastfunc::FastWrapRot
                                 (pfVar5[10],
                                  (360.0 / ((pfVar5[9] * 6.2831855) / pfVar5[0xc])) * 0.017453292 *
                                  mobyutil::g_FrameTime);
      pfVar5[10] = (float)dVar12;
      moby->unk58 = pfVar5[0xc] * 0.6666667;
      fVar3 = pfVar5[0xb] + 1.5707963;
      fVar6 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar6 = fVar3;
      }
      fVar4 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar6 < 0.0) {
        fVar4 = fVar6;
      }
      fVar3 = fVar4 * fVar4;
      fVar6 = fVar3 * fVar3 * fVar4;
      fVar7 = fVar3 * fVar6;
      local_230 = fVar3 * fVar7 * 2.601887e-06 +
                  fVar7 * -0.0001980741 + fVar6 * 0.0083330255 + fVar3 * fVar4 * -0.16666657 + fVar4
      ;
      fVar3 = pfVar5[0xb];
      local_228 = 0;
      fVar6 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar6 = fVar3;
      }
      fVar4 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar6 < 0.0) {
        fVar4 = fVar6;
      }
      fVar3 = fVar4 * fVar4;
      fVar6 = fVar3 * fVar3 * fVar4;
      fVar7 = fVar3 * fVar6;
      local_22c = fVar3 * fVar7 * 2.601887e-06 +
                  fVar7 * -0.0001980741 + fVar6 * 0.0083330255 + fVar3 * fVar4 * -0.16666657 + fVar4
      ;
      mobyutil::MB_RotateQuatAxisAngle(pfVar5[10],afStack_250,local_240);
      fastfunc::FastVecAdd(&local_210,pfVar5,afStack_250);
      (moby->pos).x = local_210;
      (moby->pos).y = local_20c;
      (moby->pos).z = local_208;
      (moby->pos).w = local_204;
      dVar12 = (double)fastfunc::FastWrapRot(pfVar5[0xb],1.5707964);
      local_218 = (float)dVar12;
      dVar12 = (double)fastfunc::FastWrapRot(-pfVar5[10],3.1415927);
      local_21c = (float)dVar12;
      fastfunc::FastEulerToMtx1(aVStack_120,&local_220);
      fastfunc::FastApplyTransform((Vec4 *)(lVar8 + 0xc0),aVStack_120);
      mobyutil::MB_NormalizeMtx3Columns(lVar8 + 0xc0);
      moby->modeBits = moby->modeBits | LOCK_ROTATION;
    }
  }
  else if (bVar1 < 3) {
    dVar12 = 0.0;
    local_1f0[0] = 0.0;
    local_1f0[1] = 0.0;
    local_1e4 = 0;
    local_1d0 = 0;
    local_1f0[2] = -pfVar5[9];
    local_1cc = 0.0;
    local_1c8 = 0.0;
    local_1c4 = 0;
    dVar19 = 1.570796251296997;
    dVar24 = 3.141592502593994;
    fVar3 = pfVar5[10] + 1.5707963;
    dVar25 = -3.141592502593994;
    dVar23 = -0.16666656732559204;
    dVar16 = 0.008333025500178337;
    dVar15 = -0.0001980741071747616;
    dVar22 = 2.601886990305502e-06;
    dVar14 = 1.5707963705062866;
    fVar6 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar6 = fVar3;
    }
    fVar4 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar6 < 0.0) {
      fVar4 = fVar6;
    }
    fVar7 = fVar4 * fVar4;
    fVar3 = fVar7 * fVar7 * fVar4;
    fVar6 = fVar7 * fVar3;
    dVar21 = (double)fastfunc::FastAddRots
                               ((fVar7 * fVar6 * 2.601887e-06 +
                                fVar6 * -0.0001980741 +
                                fVar3 * 0.0083330255 + fVar7 * fVar4 * -0.16666657 + fVar4) *
                                1.5707964);
    dVar18 = dVar12;
    if (pfVar5[8] == 5.60519e-45) {
      dVar18 = dVar14;
    }
    uVar13 = fastfunc::FastWrapRot((float)dVar21,(float)dVar18);
    dVar18 = (double)fastfunc::FastWrapRot
                               (pfVar5[10],
                                (360.0 / ((pfVar5[9] * 6.2831855) / pfVar5[0xc])) * 0.017453292 *
                                mobyutil::g_FrameTime);
    dVar21 = (double)(float)(dVar18 + dVar19);
    pfVar5[10] = (float)dVar18;
    dVar18 = (double)(float)(dVar24 - dVar21);
    if (dVar21 - (double)(float)(dVar24 - dVar21) < 0.0) {
      dVar18 = dVar21;
    }
    dVar17 = (double)(float)(dVar25 - dVar21);
    if ((double)(float)(dVar25 - dVar21) - dVar18 < 0.0) {
      dVar17 = dVar18;
    }
    dVar21 = (double)(float)(dVar17 * dVar17);
    dVar18 = (double)(float)(dVar21 * (double)(float)(dVar21 * dVar17));
    dVar20 = (double)(float)(dVar21 * dVar18);
    dVar21 = (double)fastfunc::FastAddRots
                               ((float)((double)(float)((double)(float)(dVar21 * dVar20) * dVar22 +
                                                       (double)(float)(dVar20 * dVar15 +
                                                                      (double)(float)(dVar18 * 
                                                  dVar16 + (double)(float)((double)(float)(dVar21 * 
                                                  dVar17) * dVar23 + dVar17)))) * dVar14));
    dVar18 = dVar12;
    if (pfVar5[8] == 5.60519e-45) {
      dVar18 = dVar14;
    }
    dVar18 = (double)fastfunc::FastWrapRot((float)dVar21,(float)dVar18);
    dVar21 = (double)fastfunc::FastDiffRots(dVar18,uVar13);
    moby->unk58 = (float)((double)pfVar5[9] * dVar21) / (mobyutil::g_FrameTime * 1.5);
    dVar21 = (double)(float)((double)pfVar5[0xb] + dVar19);
    dVar19 = (double)(float)(dVar24 - dVar21);
    if (dVar21 - (double)(float)(dVar24 - dVar21) < 0.0) {
      dVar19 = dVar21;
    }
    dVar17 = (double)(float)(dVar25 - dVar21);
    if ((double)(float)(dVar25 - dVar21) - dVar19 < 0.0) {
      dVar17 = dVar19;
    }
    dVar19 = (double)(float)(dVar17 * dVar17);
    dVar20 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar17));
    dVar21 = (double)(float)(dVar19 * dVar20);
    local_1e0 = (float)((double)(float)(dVar19 * dVar21) * dVar22 +
                       (double)(float)(dVar21 * dVar15 +
                                      (double)(float)(dVar20 * dVar16 +
                                                     (double)(float)((double)(float)(dVar19 * dVar17
                                                                                    ) * dVar23 +
                                                                    dVar17))));
    dVar21 = (double)pfVar5[0xb];
    local_1d8 = 0;
    dVar19 = (double)(float)(dVar24 - dVar21);
    if (dVar21 - (double)(float)(dVar24 - dVar21) < 0.0) {
      dVar19 = dVar21;
    }
    dVar24 = (double)(float)(dVar25 - dVar21);
    if ((double)(float)(dVar25 - dVar21) - dVar19 < 0.0) {
      dVar24 = dVar19;
    }
    dVar19 = (double)(float)(dVar24 * dVar24);
    dVar21 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar24));
    dVar25 = (double)(float)(dVar19 * dVar21);
    local_1dc = (float)((double)(float)(dVar19 * dVar25) * dVar22 +
                       (double)(float)(dVar25 * dVar15 +
                                      (double)(float)(dVar21 * dVar16 +
                                                     (double)(float)((double)(float)(dVar19 * dVar24
                                                                                    ) * dVar23 +
                                                                    dVar24))));
    mobyutil::MB_RotateQuatAxisAngle((float)dVar18,afStack_200,local_1f0);
    fastfunc::FastVecAdd(&local_1c0,pfVar5,afStack_200);
    (moby->pos).x = local_1c0;
    (moby->pos).y = local_1bc;
    (moby->pos).z = local_1b8;
    (moby->pos).w = local_1b4;
    dVar19 = (double)fastfunc::FastWrapRot(pfVar5[0xb],(float)dVar14);
    local_1c8 = (float)dVar19;
    dVar12 = (double)fastfunc::FastWrapRot((float)-dVar18,(float)dVar12);
    local_1cc = (float)dVar12;
    fastfunc::FastEulerToMtx1(aVStack_e0,&local_1d0);
    fastfunc::FastApplyTransform((Vec4 *)(lVar8 + 0xc0),aVStack_e0);
    mobyutil::MB_NormalizeMtx3Columns(lVar8 + 0xc0);
    moby->modeBits = moby->modeBits | LOCK_ROTATION;
  }
  else if (bVar1 < 4) {
    dVar15 = (double)pfVar5[9];
    dVar16 = 1.570796251296997;
    dVar23 = 3.141592502593994;
    fVar3 = pfVar5[10] + 1.5707963;
    dVar25 = -3.141592502593994;
    dVar24 = -0.16666656732559204;
    dVar19 = 0.008333025500178337;
    dVar12 = -0.0001980741071747616;
    fVar6 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar6 = fVar3;
    }
    dVar22 = 2.601886990305502e-06;
    fVar4 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar6 < 0.0) {
      fVar4 = fVar6;
    }
    fVar7 = fVar4 * fVar4;
    fVar3 = fVar7 * fVar7 * fVar4;
    fVar6 = fVar7 * fVar3;
    dVar21 = (double)(fVar7 * fVar6 * 2.601887e-06 +
                     fVar6 * -0.0001980741 +
                     fVar3 * 0.0083330255 + fVar7 * fVar4 * -0.16666657 + fVar4);
    dVar14 = (double)fastfunc::FastWrapRot
                               (pfVar5[10],
                                (360.0 / ((float)(dVar15 * 6.2831854820251465) / pfVar5[0xc])) *
                                0.017453292 * mobyutil::g_FrameTime);
    dVar18 = (double)(float)(dVar14 + dVar16);
    pfVar5[10] = (float)dVar14;
    dVar16 = (double)(float)(dVar23 - dVar18);
    if (dVar18 - (double)(float)(dVar23 - dVar18) < 0.0) {
      dVar16 = dVar18;
    }
    dVar23 = (double)(float)(dVar25 - dVar18);
    if ((double)(float)(dVar25 - dVar18) - dVar16 < 0.0) {
      dVar23 = dVar16;
    }
    dVar25 = (double)(float)(dVar23 * dVar23);
    dVar14 = (double)(float)(dVar25 * (double)(float)(dVar25 * dVar23));
    dVar16 = (double)(float)(dVar25 * dVar14);
    fVar3 = (moby->rotation).z;
    fVar2 = pfVar5[8];
    fVar6 = (float)((double)(float)(dVar25 * dVar16) * dVar22 +
                   (double)(float)(dVar16 * dVar12 +
                                  (double)(float)(dVar14 * dVar19 +
                                                 (double)(float)((double)(float)(dVar25 * dVar23) *
                                                                 dVar24 + dVar23)))) * pfVar5[9];
    moby->unk58 = -(float)(dVar21 * dVar15 - (double)fVar6) / (mobyutil::g_FrameTime * 1.5);
    if (fVar2 == 2.8026e-45) {
      fVar3 = 0.0;
    }
    fVar4 = 0.0;
    if (fVar2 == 2.8026e-45) {
      fVar4 = 1.5707964;
    }
    mobyutil::MB_SphericalToVector(fVar6,fVar3,fVar4,afStack_1b0);
    fastfunc::FastVecAdd(&local_1a0,pfVar5,afStack_1b0);
    (moby->pos).x = local_1a0;
    (moby->pos).y = local_19c;
    (moby->pos).z = local_198;
    (moby->pos).w = local_194;
  }
  lVar11 = lVar8 + 0x10;
  fVar6 = (moby->transform).v2.x * 12.0;
  fVar4 = (moby->transform).v2.y * 12.0;
  fVar3 = (moby->transform).v2.z * 12.0;
  dVar24 = 0.0;
  fastfunc::FastVecAdd(&local_190,lVar11,local_260);
  fVar3 = fVar3 * fVar3 + fVar6 * fVar6 + fVar4 * fVar4;
  local_13c = 0x10001;
  dVar25 = 1.0;
  local_134 = 0x3f800000;
  local_130 = 1;
  local_136 = moby->oClass;
  dVar12 = dVar24;
  dVar19 = dVar24;
  if ((double)SQRT(fVar3) != dVar24) {
    fVar7 = 1.0 / SQRT(fVar3);
    fVar7 = -(fVar3 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    fVar7 = -(fVar3 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    fVar7 = -(fVar3 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    dVar12 = (double)(fVar6 * fVar7);
    dVar19 = (double)(fVar4 * fVar7);
  }
  local_150 = (float)dVar12;
  local_14c = (float)dVar19;
  local_148 = 0x3f800000;
  local_144 = 0x45afdf66;
  local_138 = 1;
  local_137 = 1;
  local_140 = moby;
  fastfunc::FastVecSub(auStack_180,lVar11,local_280);
  collproc::CollLine(lVar11,local_270,9,lVar8,&local_150);
  iVar9 = collproc::CollLine(lVar11,local_270,2,0,0);
  if (iVar9 == 0) {
    pfVar5[4] = local_190;
    pfVar5[5] = local_18c;
    pfVar5[6] = local_188;
  }
  else {
    pfVar5[4] = CollOutput.ip.x;
    pfVar5[5] = CollOutput.ip.y;
    pfVar5[6] = CollOutput.ip.z;
    local_184 = CollOutput.ip.w;
  }
  pfVar5[7] = local_184;
  iVar9 = 0;
  if (0 < DAT_007685ac) {
    dVar12 = 0.5;
    dVar19 = 0.8999999761581421;
    dVar23 = 10.0;
    do {
      uVar10 = rand();
      dVar16 = -1.0;
      if ((uVar10 & 1) != 0) {
        dVar16 = dVar25;
      }
      dVar15 = (double)mobyutil::MB_randRangeFloat
                                 ((float)((double)DAT_007685b4 * dVar12),DAT_007685b4);
      lVar8 = fastfunc::FastDoubleToInt((double)(float)(dVar15 * (double)animationSpeed));
      fastfunc::FastVecSub(&local_170,pfVar5 + 4,lVar11);
      dVar22 = (double)SQRT((float)((double)local_168 * dVar16) *
                            (float)((double)local_168 * dVar16) +
                            (float)((double)local_170 * dVar16) *
                            (float)((double)local_170 * dVar16) +
                            (float)((double)local_16c * dVar16) *
                            (float)((double)local_16c * dVar16));
      mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar19);
      fastfunc::FastVecAddSelf(auStack_160,local_270,local_260);
      dVar15 = (double)(float)((double)mobyutil::g_FrameTime * dVar23);
      dVar16 = (double)fastfunc::FastIntToDouble((int)(lVar8 << 2));
      mobyutil::MB_randRangeFloat((float)dVar15,(float)(dVar22 / dVar16));
      dVar16 = (double)DAT_007685b0;
      mobyutil::MB_randInt(0xff);
      partupd::SpawnPart_60(dVar16,local_270,local_260,0x604040ff);
      iVar9 = iVar9 + 1;
    } while (iVar9 < DAT_007685ac);
  }
  RegisterFuncForMoby(&PTR_M1230_00213920_007095e0,moby);
  return;
}



//==== 00213920  ns=mobyupdate_helpers  size=0x4ac
// sig: undefined M1230_00213920(void)
// callers(0): 
// callees(8): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 005023f0 fastfunc::FastVecAdd; 00502a64 fastfunc::FastVecSub; 00502b08 fastfunc::FastVecAddSelf; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1230_00213920(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  longlong lVar24;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  int iVar25;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar32;
  
  uVar18 = ZEXT48(&stack0x00000000);
  lVar24 = uVar18 - 0x200;
  puVar8 = (ulonglong *)lVar24;
  *puVar8 = uVar18;
  puVar8[0x42] = in_LR;
  puVar8[0x39] = in_f25;
  puVar8[0x3a] = in_f26;
  puVar8[0x3b] = in_f27;
  puVar8[0x3c] = in_f28;
  puVar8[0x3d] = in_f29;
  puVar8[0x3e] = in_f30;
  puVar8[0x3f] = in_f31;
  puVar8[0x37] = unaff_r30;
  puVar8[0x36] = unaff_r29;
  puVar8[0x35] = unaff_r28;
  puVar8[0x38] = unaff_r31;
  iVar7 = *(int *)(param_1 + 0x78);
  iVar25 = iVar7 + 0x10;
  fastfunc::FastVecSub(uVar18 - 0x150,iVar25,param_1 + 0x10);
  fVar1 = *(float *)((int)puVar8 + 0xb4);
  fVar2 = *(float *)(puVar8 + 0x16);
  fVar3 = *(float *)(puVar8 + 0x17);
  *(undefined4 *)((int)puVar8 + 0x7c) = *(undefined4 *)((int)puVar8 + 0xbc);
  dVar32 = 0.0;
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  uVar5 = *(undefined4 *)(param_1 + 0x18);
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(puVar8 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)puVar8 + 0xa4) = uVar4;
  *(undefined4 *)(puVar8 + 0x15) = uVar5;
  *(undefined4 *)((int)puVar8 + 0xac) = uVar6;
  fVar9 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  fVar10 = 0.5 / fVar9;
  dVar28 = dVar32;
  if (0.0 - fVar9 < 0.0) {
    dVar28 = (double)(fVar2 * fVar10);
  }
  dVar29 = dVar32;
  if (0.0 - fVar9 < 0.0) {
    dVar29 = (double)(fVar1 * fVar10);
  }
  dVar31 = dVar32;
  if (0.0 - fVar9 < 0.0) {
    dVar31 = (double)(fVar3 * fVar10);
  }
  if (fVar9 - 0.0 < 0.0) {
    dVar28 = (double)(fVar2 * fVar10);
  }
  if (fVar9 - 0.0 < 0.0) {
    dVar29 = (double)(fVar1 * fVar10);
  }
  if (fVar9 - 0.0 < 0.0) {
    dVar31 = (double)(fVar3 * fVar10);
  }
  *(float *)(puVar8 + 0xe) = (float)dVar28;
  *(float *)((int)puVar8 + 0x74) = (float)dVar29;
  *(float *)(puVar8 + 0xf) = (float)dVar31;
  fastfunc::FastVecAddSelf(uVar18 - 0x140,uVar18 - 0x160,uVar18 - 400);
  fVar14 = GameCamera.posZ;
  fVar12 = GameCamera.posY;
  fVar9 = GameCamera.posX;
  fVar2 = *(float *)(puVar8 + 0x14) - GameCamera.posX;
  fVar10 = *(float *)((int)puVar8 + 0xa4) - GameCamera.posY;
  fVar1 = *(float *)(iVar7 + 0x18);
  fVar3 = *(float *)(puVar8 + 0x14) - *(float *)(iVar7 + 0x10);
  fVar13 = *(float *)(puVar8 + 0x15) - GameCamera.posZ;
  fVar11 = *(float *)((int)puVar8 + 0xa4) - *(float *)(iVar7 + 0x14);
  *(undefined4 *)((int)puVar8 + 0x8c) = *(undefined4 *)((int)puVar8 + 0xac);
  fVar1 = *(float *)(puVar8 + 0x15) - fVar1;
  *(float *)(puVar8 + 0x10) = fVar2;
  *(float *)((int)puVar8 + 0x84) = fVar10;
  *(float *)(puVar8 + 0x11) = fVar13;
  fVar9 = *(float *)(iVar7 + 0x10) - fVar9;
  fVar17 = fVar1 * fVar2 - fVar3 * fVar13;
  *(float *)(puVar8 + 0x12) = fVar9;
  fVar12 = *(float *)(iVar7 + 0x14) - fVar12;
  fVar15 = fVar3 * fVar10 - fVar11 * fVar2;
  fVar16 = fVar11 * fVar13 - fVar1 * fVar10;
  *(float *)((int)puVar8 + 0x94) = fVar12;
  fVar14 = *(float *)(iVar7 + 0x18) - fVar14;
  fVar13 = fVar3 * fVar12 - fVar11 * fVar9;
  fVar10 = fVar11 * fVar14 - fVar1 * fVar12;
  fVar3 = fVar1 * fVar9 - fVar3 * fVar14;
  *(undefined4 *)((int)puVar8 + 0x9c) = 0;
  *(undefined4 *)((int)puVar8 + 0x8c) = 0;
  dVar29 = (double)SQRT(fVar15 * fVar15 + fVar16 * fVar16 + fVar17 * fVar17);
  dVar31 = (double)SQRT(fVar13 * fVar13 + fVar10 * fVar10 + fVar3 * fVar3);
  fVar1 = (float)(0.10000000149011612 / dVar29);
  fVar2 = (float)(0.10000000149011612 / dVar31);
  dVar28 = dVar32;
  if (dVar32 - dVar29 < 0.0) {
    dVar28 = (double)(fVar16 * fVar1);
  }
  dVar27 = dVar32;
  if (dVar32 - dVar29 < 0.0) {
    dVar27 = (double)(fVar17 * fVar1);
  }
  dVar30 = dVar32;
  if (dVar32 - dVar29 < 0.0) {
    dVar30 = (double)(fVar15 * fVar1);
  }
  if (dVar29 - dVar32 < 0.0) {
    dVar28 = (double)(fVar16 * fVar1);
  }
  if (dVar29 - dVar32 < 0.0) {
    dVar27 = (double)(fVar17 * fVar1);
  }
  if (dVar29 - dVar32 < 0.0) {
    dVar30 = (double)(fVar15 * fVar1);
  }
  *(float *)(puVar8 + 0x10) = (float)dVar28;
  *(float *)((int)puVar8 + 0x84) = (float)dVar27;
  *(float *)(puVar8 + 0x11) = (float)dVar30;
  dVar28 = dVar32;
  if (dVar32 - dVar31 < 0.0) {
    dVar28 = (double)(fVar10 * fVar2);
  }
  dVar29 = dVar32;
  if (dVar32 - dVar31 < 0.0) {
    dVar29 = (double)(fVar3 * fVar2);
  }
  dVar27 = dVar32;
  if (dVar32 - dVar31 < 0.0) {
    dVar27 = (double)(fVar13 * fVar2);
  }
  if (dVar31 - dVar32 < 0.0) {
    dVar28 = (double)(fVar10 * fVar2);
  }
  if (dVar31 - dVar32 < 0.0) {
    dVar29 = (double)(fVar3 * fVar2);
  }
  if (dVar31 - dVar32 < 0.0) {
    dVar27 = (double)(fVar13 * fVar2);
  }
  *(float *)(puVar8 + 0x12) = (float)dVar28;
  *(float *)((int)puVar8 + 0x94) = (float)dVar29;
  *(float *)(puVar8 + 0x13) = (float)dVar27;
  uVar19 = draw::GetEffectTex(0xe);
  puVar8[0x31] = uVar19;
  uVar19 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar8[0x32] = uVar19;
  uVar19 = FUN_00502f08(0,0,0,0,0,0);
  puVar8[0x30] = uVar19;
  uVar19 = idol_draw::PackCmd(0,2,0,1,0x80);
  puVar8[0x33] = uVar19;
  *(undefined4 *)((int)puVar8 + 0x15c) = 0x80243278;
  lVar21 = uVar18 - 0xa0;
  *(undefined4 *)(puVar8 + 0x2b) = 0x80243278;
  lVar20 = uVar18 - 0x9c;
  *(undefined4 *)((int)puVar8 + 0x154) = 0x80243278;
  puVar23 = &DAT_00654fd0;
  puVar22 = &DAT_00654fd4;
  *(undefined4 *)(puVar8 + 0x2a) = 0x80243278;
  lVar26 = 2;
  do {
    uVar4 = *puVar22;
    *(undefined4 *)((int)lVar24 + 0x160) = *puVar23;
    uVar5 = puVar23[2];
    *(undefined4 *)((int)lVar24 + 0x164) = uVar4;
    uVar4 = puVar22[2];
    puVar23 = puVar23 + 4;
    *(undefined4 *)((int)lVar21 + 8) = uVar5;
    puVar22 = puVar22 + 4;
    *(undefined4 *)((int)lVar20 + 8) = uVar4;
    lVar21 = lVar21 + 0x10;
    lVar20 = lVar20 + 0x10;
    lVar24 = lVar24 + 0x10;
    lVar26 = lVar26 + -1;
  } while (lVar26 != 0);
  fastfunc::FastVecSub(uVar18 - 0x130,uVar18 - 0x160,uVar18 - 0x180);
  *(undefined4 *)(puVar8 + 0x22) = *(undefined4 *)(puVar8 + 0x1a);
  *(undefined4 *)((int)puVar8 + 0x114) = *(undefined4 *)((int)puVar8 + 0xd4);
  *(undefined4 *)(puVar8 + 0x23) = *(undefined4 *)(puVar8 + 0x1b);
  *(undefined4 *)((int)puVar8 + 0x11c) = *(undefined4 *)((int)puVar8 + 0xdc);
  fastfunc::FastVecAdd(uVar18 - 0x120,uVar18 - 0x160,uVar18 - 0x180);
  *(undefined4 *)(puVar8 + 0x24) = *(undefined4 *)(puVar8 + 0x1c);
  *(undefined4 *)((int)puVar8 + 0x124) = *(undefined4 *)((int)puVar8 + 0xe4);
  *(undefined4 *)(puVar8 + 0x25) = *(undefined4 *)(puVar8 + 0x1d);
  *(undefined4 *)((int)puVar8 + 300) = *(undefined4 *)((int)puVar8 + 0xec);
  fastfunc::FastVecSub(uVar18 - 0x110,iVar25,uVar18 - 0x170);
  *(undefined4 *)(puVar8 + 0x26) = *(undefined4 *)(puVar8 + 0x1e);
  *(undefined4 *)((int)puVar8 + 0x134) = *(undefined4 *)((int)puVar8 + 0xf4);
  *(undefined4 *)(puVar8 + 0x27) = *(undefined4 *)(puVar8 + 0x1f);
  *(undefined4 *)((int)puVar8 + 0x13c) = *(undefined4 *)((int)puVar8 + 0xfc);
  fastfunc::FastVecAdd(uVar18 - 0x100,iVar25,uVar18 - 0x170);
  *(undefined4 *)(puVar8 + 0x28) = *(undefined4 *)(puVar8 + 0x20);
  *(undefined4 *)((int)puVar8 + 0x144) = *(undefined4 *)((int)puVar8 + 0x104);
  *(undefined4 *)(puVar8 + 0x29) = *(undefined4 *)(puVar8 + 0x21);
  *(undefined4 *)((int)puVar8 + 0x14c) = *(undefined4 *)((int)puVar8 + 0x10c);
  draw::FastDrawQuad(uVar18 - 0xf0,0,0,EffectTexHeaders,9);
  return;
}



//==== 00213dd8  ns=mobyupdate_helpers  size=0x104
// sig: undefined M1230_00213dd8(void)
// callers(3): 0020ebd8 mobyupdate_helpers::M1226_0020ebd8; 0020fda8 mobyupdate_unsorted::UpdateMoby_1226; 00213f08 mobyupdate_unsorted::UpdateMoby_1230
// callees(0): 

void mobyupdate_helpers::M1230_00213dd8(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  ushort *puVar4;
  u8 uVar5;
  MobyInstance *pMVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  auVar8._0_4_ = param_2;
  auVar8._4_4_ = param_2;
  auVar8._8_4_ = param_2;
  auVar8._12_4_ = param_2;
  uVar5 = (char)((LZCOUNT(-param_2) << 0x3a) >> 0x3f) + '\x02';
  if (*(byte *)(param_1 + 0x21) == 0xff) {
    *(u8 *)(param_1 + 0x20) = uVar5;
  }
  else {
    puVar4 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)];
    if (puVar4 != (ushort *)0x0) {
      auVar7 = vectorConvertFromSignedFixedPointWord(auVar8,0);
      auVar8 = loadVectorLeftIndexed(0x30,0x213dd0);
      auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar8 = vectorAddFloatingPoint
                         (auVar7,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60);
      pMVar6 = MobyInstance;
      do {
        uVar3 = *puVar4 & 0x7fff;
        if (pMVar6[uVar3].oClass == 0x4ce) {
          auVar7 = ZEXT416(0xffffffff);
          auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
          pMVar6[uVar3].state = uVar5;
          pMVar6 = MobyInstance;
          auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar7 = vectorShiftLeftIntegerWord(auVar7,auVar7);
          auVar7 = vectorMultiplyAddFloatingPoint(auVar9,auVar8,auVar7);
          auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
          auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar2 = storeVectorElementWordIndexed
                            (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,4,
                             ZEXT48(MobyInstance[uVar3].pVar));
          *(undefined4 *)((int)MobyInstance[uVar3].pVar + 4U & 0xfffffffc) = uVar2;
        }
        uVar1 = *puVar4;
        puVar4 = puVar4 + 1;
      } while (-1 < (short)uVar1);
    }
  }
  return;
}



//==== 00213f08  ns=mobyupdate_unsorted  size=0x1f8
// sig: undefined UpdateMoby_1230(MobyInstance * moby)
// callers(0): 
// callees(4): 00213dd8 mobyupdate_helpers::M1230_00213dd8; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005027bc fastfunc::FastLerpColor

/* Moby 1230 */

void mobyupdate_unsorted::UpdateMoby_1230(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  double dVar9;
  
  bVar1 = moby->state;
  pfVar3 = (float *)moby->pVar;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    fVar2 = *pfVar3;
    fVar4 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar4 = fVar2;
    }
    fVar5 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
      fVar5 = fVar4;
    }
    fVar2 = fVar5 * fVar5;
    fVar4 = fVar2 * fVar2 * fVar5;
    fVar6 = fVar2 * fVar4;
    uVar7 = fastfunc::FastLerpColor
                      ((double)((fVar2 * fVar6 * 2.601887e-06 +
                                 fVar6 * -0.0001980741 +
                                 fVar4 * 0.0083330255 + fVar2 * fVar5 * -0.16666657 + fVar5 + 1.0) *
                               0.5),0xffffffff8020ff20,0xffffffff80208020);
    moby->field60_0x90 = uVar7;
    dVar9 = (double)fastfunc::FastWrapRot(*pfVar3,mobyutil::g_FrameTime * 6.2831855);
    *pfVar3 = (float)dVar9;
  }
  else if (bVar1 < 3) {
    fVar2 = *pfVar3;
    fVar4 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar4 = fVar2;
    }
    fVar5 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
      fVar5 = fVar4;
    }
    fVar2 = fVar5 * fVar5;
    fVar4 = fVar2 * fVar2 * fVar5;
    fVar6 = fVar2 * fVar4;
    uVar7 = fastfunc::FastLerpColor
                      ((double)((fVar2 * fVar6 * 2.601887e-06 +
                                 fVar6 * -0.0001980741 +
                                 fVar4 * 0.0083330255 + fVar2 * fVar5 * -0.16666657 + fVar5 + 1.0) *
                               0.5),0xffffffff802020ff,0xffffffff80202080);
    moby->field60_0x90 = uVar7;
    dVar9 = (double)fastfunc::FastWrapRot(*pfVar3,mobyutil::g_FrameTime * 12.566371);
    *pfVar3 = (float)dVar9;
    iVar8 = fastfunc::FastDecTimerS32(pfVar3 + 1);
    if (iVar8 != 0) {
      mobyupdate_helpers::M1230_00213dd8(moby,0);
    }
  }
  return;
}



//==== 00214100  ns=Global  size=0x6c
// sig: undefined FUN_00214100(void)
// callers(1): 0044f060 mobyupdate_unsorted::UpdateMoby_76
// callees(0): 

undefined8 FUN_00214100(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  if (puVar2 != (ushort *)0x0) {
    do {
      if (MobyInstance[*puVar2 & 0x7fff].state == '\x02') {
        return 1;
      }
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return 0;
}



//==== 0021416c  ns=Global  size=0x14
// sig: undefined FUN_0021416c(void)
// callers(3): 0020ea80 mobyupdate_helpers::M1226_0020ea80; 0020ebd8 mobyupdate_helpers::M1226_0020ebd8; 0020fda8 mobyupdate_unsorted::UpdateMoby_1226
// callees(0): 

ulonglong FUN_0021416c(int param_1)

{
  return (ulonglong)(LZCOUNT(*(byte *)(param_1 + 0x20) - 2) << 0x20) >> 0x25;
}



//==== 00214198  ns=mobyupdate_helpers  size=0x8cc
// sig: undefined M1231_00214198(void)
// callers(1): 00214a98 mobyupdate_unsorted::UpdateMoby_1231
// callees(12): 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00111ba0 mobyutil::MB_getTargetInArea; 00240590 mobyupdate_helpers::M1297_00240590; 00240630 mobyupdate_helpers::M1297_00240630; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M1231_00214198(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  Spline *pSVar9;
  ulonglong *puVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  longlong lVar15;
  longlong lVar16;
  float *pfVar21;
  longlong lVar20;
  ulonglong uVar22;
  longlong lVar23;
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
  ulonglong in_f31;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar16 = uVar14 - 0x110;
  puVar10 = (ulonglong *)lVar16;
  *puVar10 = uVar14;
  puVar10[0x24] = in_LR;
  puVar10[0x21] = in_f31;
  puVar10[0x20] = unaff_r31;
  puVar10[0x1f] = unaff_r30;
  pvVar8 = param_1->pVar;
  uVar24 = ZEXT48(pvVar8);
  puVar10[0x1e] = unaff_r29;
  puVar10[0x1d] = unaff_r28;
  fastfunc::FastDecTimerS32(uVar24 + 0x158);
  iVar17 = *(int *)((int)pvVar8 + 0x160);
  fVar1 = (param_1->pos).x;
  fVar2 = (param_1->pos).y;
  fVar3 = (param_1->pos).z;
  param_1->scale = param_1->pClass->gScale * DAT_007685d0;
  fVar7 = DAT_00768610;
  if (iVar17 != 0) {
    fVar4 = (param_1->transform).v0.y;
    fVar5 = (param_1->transform).v0.x;
    fVar6 = (param_1->transform).v0.z;
    fVar11 = 0.0;
    fVar12 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
    if (fVar12 == 0.0) {
      fVar5 = (param_1->transform).v0.w;
      fVar4 = fVar11;
      fVar6 = fVar11;
    }
    else {
      fVar12 = DAT_0076860c / fVar12;
      fVar11 = fVar5 * fVar12;
      fVar4 = fVar4 * fVar12;
      fVar5 = (param_1->transform).v0.w;
      fVar6 = fVar6 * fVar12;
    }
    fVar6 = fVar6 + fVar3;
    *(float *)((int)puVar10 + 0x7c) = fVar5;
    uVar19 = *(undefined4 *)((int)pvVar8 + 0x160);
    *(float *)(puVar10 + 0xf) = fVar6;
    *(float *)(puVar10 + 0xe) = fVar11 + fVar1;
    *(float *)((int)puVar10 + 0x74) = fVar4 + fVar2;
    *(float *)(puVar10 + 0xf) = fVar6 + fVar7;
    M1297_00240590(uVar19,uVar14 - 0xa0);
  }
  dVar29 = 0.0;
  *(undefined4 *)((int)puVar10 + 0x84) = 0;
  iVar17 = mobyutil::MB_damage(param_1,0x330000,0);
  iVar18 = mobyutil::MB_HandleDamage
                     (param_1,iVar17,uVar24 + 0x20,0,puVar10 + 0x10,(int)puVar10 + 0x84,0,4);
  if ((*(int *)(puVar10 + 0x10) != 1) && (param_1->state != '\b')) {
    fVar1 = *(float *)((int)pvVar8 + 0x20) - *(float *)((int)puVar10 + 0x84);
    *(float *)((int)pvVar8 + 0x20) = fVar1;
    if ((double)fVar1 <= dVar29) {
      iVar18 = 1;
    }
    uVar19 = fastfunc::FastDoubleToInt(0x4080000000000000);
    *(undefined4 *)((int)pvVar8 + 0x98) = 0x3f000000;
    fVar2 = DAT_007685bc;
    fVar1 = DAT_0071f418;
    *(undefined4 *)((int)pvVar8 + 0x90) = uVar19;
    *(undefined4 *)((int)pvVar8 + 0x84) = 0x3a03126f;
    *(undefined1 *)((int)pvVar8 + 0xad) = 0;
    *(undefined4 *)((int)pvVar8 + 0x94) = 9;
    *(float *)((int)pvVar8 + 0x80) = fVar2 * fVar1;
    fVar1 = mobyutil::g_FrameTime;
    if (iVar18 < 3) {
      if ((-1 < iVar18) && (0 < iVar18)) {
        fVar1 = DAT_007685bc * DAT_0071f418;
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)((int)pvVar8 + 0x80) = fVar1;
        fVar1 = mobyutil::g_FrameTime;
        *(float *)((int)pvVar8 + 0x88) = DAT_007685cc * mobyutil::g_FrameTime;
        fVar2 = DAT_007685c8;
        *(undefined4 *)((int)pvVar8 + 0xc0) = 0x40800000;
        *(undefined4 *)((int)pvVar8 + 0xc4) = 0x41200000;
        *(float *)((int)pvVar8 + 0x8c) = fVar2 * fVar1;
        fVar1 = (param_1->pos).x - *(float *)(*(int *)(iVar17 + 0x20) + 0x10);
        fVar2 = (param_1->pos).y - *(float *)(*(int *)(iVar17 + 0x20) + 0x14);
        dVar26 = ABS((double)fVar1);
        dVar27 = ABS((double)fVar2);
        *(float *)(puVar10 + 0x12) = fVar1;
        *(float *)((int)puVar10 + 0x94) = fVar2;
        *(float *)(puVar10 + 0x13) = (float)(dVar26 - dVar27);
        uVar22 = (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar10 + 0x13) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar10 + 0x94) >> 0x1d) & 4;
        dVar28 = ABS((double)*(float *)(puVar10 + 0x12));
        if ((double)*(float *)(puVar10 + 0x13) - dVar29 < 0.0) {
          dVar28 = dVar27;
        }
        fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
        dVar27 = ABS((double)*(float *)((int)puVar10 + 0x94));
        if ((double)*(float *)(puVar10 + 0x13) - dVar29 < 0.0) {
          dVar27 = dVar26;
        }
        fVar2 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
        if (dVar29 < dVar28) {
          lVar15 = uVar14 - 0x100;
          lVar23 = uVar14 - 0x58;
          lVar20 = uVar14 - 0x68;
          lVar25 = 2;
          fVar3 = (float)(dVar27 - dVar28) / (float)(dVar27 + dVar28);
          fVar7 = fVar3 * fVar3;
          *(float *)((int)puVar10 + 0xb4) = fVar3;
          *(float *)((int)puVar10 + 0xac) = fVar3;
          *(float *)(puVar10 + 0x16) = fVar3;
          *(float *)(puVar10 + 0x15) = fVar3;
          fVar3 = fVar7 * fVar7;
          *(float *)((int)puVar10 + 0xac) = *(float *)((int)puVar10 + 0xac) * fVar7;
          *(float *)(puVar10 + 0x16) = *(float *)(puVar10 + 0x16) * fVar3;
          *(float *)((int)puVar10 + 0xb4) = *(float *)((int)puVar10 + 0xb4) * fVar3 * fVar7;
          do {
            *(float *)((int)lVar15 + 0xa8) = *(float *)((int)lVar15 + 0x98) * fVar3 * fVar3;
            iVar18 = (int)lVar20;
            lVar20 = lVar20 + 8;
            lVar15 = lVar15 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)(iVar18 + 4) * fVar3 * fVar3;
            lVar23 = lVar23 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar25 = 4;
          lVar23 = uVar14 - 0x68;
          pfVar21 = (float *)&DAT_007358e0;
          lVar15 = lVar16;
          lVar20 = lVar23;
          do {
            fVar3 = *pfVar21;
            fVar7 = pfVar21[1];
            pfVar21 = pfVar21 + 2;
            *(float *)((int)lVar15 + 0xa8) = *(float *)((int)lVar15 + 0xa8) * fVar3;
            lVar15 = lVar15 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar7;
            lVar20 = lVar20 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar15 = 2;
          do {
            iVar18 = (int)lVar16;
            iVar13 = (int)lVar23;
            lVar16 = lVar16 + 0x10;
            lVar23 = lVar23 + 0x10;
            dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar18 + 0xa8)) +
                              *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                             *(float *)(iVar13 + 0xc));
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar1 + fVar2);
        }
        *(float *)((int)puVar10 + 0x8c) = (float)dVar29;
        uVar19 = *(undefined4 *)(iVar17 + 0x18);
        *(undefined4 *)(puVar10 + 6) = *(undefined4 *)(iVar17 + 0x10);
        *(undefined4 *)(puVar10 + 7) = uVar19;
        uVar19 = *(undefined4 *)(iVar17 + 0x1c);
        *(undefined4 *)((int)puVar10 + 0x34) = *(undefined4 *)(iVar17 + 0x14);
        *(undefined4 *)((int)puVar10 + 0x3c) = uVar19;
        mobyutil::MB_VecAtan2Angles(puVar10[6],puVar10[7],uVar14 - 0x84,uVar24 + 0x88,uVar24 + 0x8c)
        ;
        mobyutil::MB_StartKick((double)*(float *)((int)puVar10 + 0x8c),param_1,uVar24 + 0x70);
        param_1->state = '\b';
        *(undefined1 *)((int)pvVar8 + 0x67) = 0xf0;
        if (*(int *)((int)pvVar8 + 0x160) != 0) {
          M1297_00240630(*(int *)((int)pvVar8 + 0x160));
          *(undefined4 *)((int)pvVar8 + 0x160) = 0;
        }
        mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
      }
    }
    else if (iVar18 < 0xb) {
      if (iVar18 < 9) {
        *(float *)((int)pvVar8 + 0x88) = DAT_007685c4 * mobyutil::g_FrameTime;
        fVar2 = DAT_007685c0;
        *(undefined4 *)((int)pvVar8 + 0xc0) = 0x40400000;
        *(undefined4 *)((int)pvVar8 + 0xc4) = 0x40c00000;
        *(float *)((int)pvVar8 + 0x8c) = fVar2 * fVar1;
        fVar1 = (param_1->pos).x - *(float *)(*(int *)(iVar17 + 0x20) + 0x10);
        fVar2 = (param_1->pos).y - *(float *)(*(int *)(iVar17 + 0x20) + 0x14);
        dVar26 = ABS((double)fVar1);
        dVar27 = ABS((double)fVar2);
        *(float *)((int)puVar10 + 0x9c) = fVar1;
        *(float *)(puVar10 + 0x14) = fVar2;
        *(float *)((int)puVar10 + 0xa4) = (float)(dVar26 - dVar27);
        uVar22 = (ulonglong)(*(uint *)((int)puVar10 + 0x9c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar10 + 0xa4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar10 + 0x14) >> 0x1d) & 4;
        dVar28 = ABS((double)*(float *)((int)puVar10 + 0x9c));
        if ((double)*(float *)((int)puVar10 + 0xa4) - dVar29 < 0.0) {
          dVar28 = dVar27;
        }
        fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
        dVar27 = ABS((double)*(float *)(puVar10 + 0x14));
        if ((double)*(float *)((int)puVar10 + 0xa4) - dVar29 < 0.0) {
          dVar27 = dVar26;
        }
        fVar2 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
        if (dVar29 < dVar28) {
          lVar15 = uVar14 - 0x100;
          lVar23 = uVar14 - 0x38;
          lVar20 = uVar14 - 0x48;
          lVar25 = 2;
          fVar3 = (float)(dVar27 - dVar28) / (float)(dVar27 + dVar28);
          fVar7 = fVar3 * fVar3;
          *(float *)((int)puVar10 + 0xd4) = fVar3;
          *(float *)((int)puVar10 + 0xcc) = fVar3;
          *(float *)(puVar10 + 0x1a) = fVar3;
          *(float *)(puVar10 + 0x19) = fVar3;
          fVar3 = fVar7 * fVar7;
          *(float *)((int)puVar10 + 0xcc) = *(float *)((int)puVar10 + 0xcc) * fVar7;
          *(float *)(puVar10 + 0x1a) = *(float *)(puVar10 + 0x1a) * fVar3;
          *(float *)((int)puVar10 + 0xd4) = *(float *)((int)puVar10 + 0xd4) * fVar3 * fVar7;
          do {
            *(float *)((int)lVar15 + 200) = *(float *)((int)lVar15 + 0xb8) * fVar3 * fVar3;
            iVar18 = (int)lVar20;
            lVar20 = lVar20 + 8;
            lVar15 = lVar15 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)(iVar18 + 4) * fVar3 * fVar3;
            lVar23 = lVar23 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar25 = 4;
          lVar23 = uVar14 - 0x48;
          pfVar21 = (float *)&DAT_007358e0;
          lVar15 = lVar16;
          lVar20 = lVar23;
          do {
            fVar3 = *pfVar21;
            fVar7 = pfVar21[1];
            pfVar21 = pfVar21 + 2;
            *(float *)((int)lVar15 + 200) = *(float *)((int)lVar15 + 200) * fVar3;
            lVar15 = lVar15 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar7;
            lVar20 = lVar20 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar15 = 2;
          do {
            iVar18 = (int)lVar16;
            iVar13 = (int)lVar23;
            lVar16 = lVar16 + 0x10;
            lVar23 = lVar23 + 0x10;
            dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar18 + 200)) +
                              *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                             *(float *)(iVar13 + 0xc));
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar1 + fVar2);
        }
        *(float *)(puVar10 + 0x11) = (float)dVar29;
        uVar19 = *(undefined4 *)(iVar17 + 0x18);
        *(undefined4 *)(puVar10 + 6) = *(undefined4 *)(iVar17 + 0x10);
        *(undefined4 *)(puVar10 + 7) = uVar19;
        uVar19 = *(undefined4 *)(iVar17 + 0x1c);
        *(undefined4 *)((int)puVar10 + 0x34) = *(undefined4 *)(iVar17 + 0x14);
        *(undefined4 *)((int)puVar10 + 0x3c) = uVar19;
        mobyutil::MB_VecAtan2Angles(puVar10[6],puVar10[7],uVar14 - 0x88,uVar24 + 0x88,uVar24 + 0x8c)
        ;
        mobyutil::MB_StartKick((double)*(float *)(puVar10 + 0x11),param_1,uVar24 + 0x70);
        param_1->state = '\a';
        *(undefined1 *)((int)pvVar8 + 0x67) = 0x78;
        if (*(int *)((int)pvVar8 + 0x160) != 0) {
          M1297_00240630(*(int *)((int)pvVar8 + 0x160));
          *(undefined4 *)((int)pvVar8 + 0x160) = 0;
        }
        auVar30 = ZEXT416(0xffffffff);
        auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
        auVar31 = vectorShiftLeftIntegerWord(auVar30,auVar30);
        auVar30 = loadVectorLeftIndexed(0xc,0x214180);
        auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar32 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar30 = vectorMultiplyAddFloatingPoint
                            (auVar32,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,
                             auVar31);
        auVar31 = loadVectorLeftIndexed(0x158,uVar24);
        auVar32 = loadVectorRightIndexed(0x168,uVar24);
        auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
        auVar30 = ZEXT416((auVar31._0_4_ | auVar32._0_4_) + auVar30._0_4_) &
                  (undefined1  [16])0xffffffff;
        uVar19 = storeVectorElementWordIndexed
                           (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0x158,
                            uVar24);
        *(undefined4 *)((int)pvVar8 + 0x158U & 0xfffffffc) = uVar19;
      }
      else {
        *(undefined1 *)((int)pvVar8 + 0x67) = 0xfa;
      }
    }
    mobyutil::MB_UpdateLightsTransition(param_1,uVar24 + 0x60);
  }
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar24 + 0x60);
  *(undefined4 *)((int)pvVar8 + 0x140) = 0x41c00000;
  pSVar9 = Splines[*(int *)((int)pvVar8 + 0x13c)];
  iVar17 = mobyutil::MB_getTargetInArea
                     (0x4038000000000000,param_1,uVar24 + 0xd0,pSVar9,0,0,pSVar9->points,pSVar9->cnt
                     );
  if ((iVar17 != 2) &&
     ((fVar1 = (param_1->pos).y - *(float *)((int)pvVar8 + 0xd4),
      fVar2 = (param_1->pos).x - *(float *)((int)pvVar8 + 0xd0),
      *(float *)((int)pvVar8 + 0x140) < SQRT(fVar2 * fVar2 + fVar1 * fVar1) ||
      (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar8 + 0xd8)))))) {
    *(undefined4 *)((int)pvVar8 + 0x114) = 2;
  }
  if (*(int *)((int)pvVar8 + 0x110) == 0) {
    *(MobyInstance **)((int)pvVar8 + 0x110) = g_heroMobyPtr;
  }
  return;
}



//==== 00214a98  ns=mobyupdate_unsorted  size=0xce0
// sig: undefined UpdateMoby_1231(MobyInstance * moby)
// callers(0): 
// callees(14): 000efb38 mobyfunc::DeleteMoby; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 00104e44 mobyutil::PointInsideComplexPoly; 00106360 mobyutil::MB_SetZBoundsFromGround; 0010a2e0 mobyutil::OrganicDeltAng; 0010b030 mobyutil::MB_UpdateKick; 00110040 mobyutil::MB_SpawnExplosionSparks2; 00113e88 mobyutil::MB_MayaFrameTrigger; 00119a18 mobyfunc::DoManipulator; 00214198 mobyupdate_helpers::M1231_00214198; 002403a8 FUN_002403a8; 002405c8 FUN_002405c8; 00502758 fastfunc::FastDoubleToInt

/* Moby 1231 */

void mobyupdate_unsorted::UpdateMoby_1231(MobyInstance *moby)

{
  float fVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  Spline *pSVar10;
  ulonglong *puVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 uVar18;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  float *pfVar23;
  longlong lVar24;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  ulonglong in_f31;
  undefined8 uVar27;
  double dVar28;
  double dVar29;
  
  lVar14 = (longlong)(int)moby;
  uVar13 = ZEXT48(&stack0x00000000);
  lVar21 = uVar13 - 0x150;
  puVar11 = (ulonglong *)lVar21;
  *puVar11 = uVar13;
  puVar11[0x2c] = in_LR;
  puVar11[0x29] = in_f31;
  puVar11[0x28] = unaff_r31;
  puVar11[0x26] = unaff_r29;
  puVar11[0x27] = unaff_r30;
  pvVar9 = moby->pVar;
  mobyupdate_helpers::M1231_00214198(lVar14);
  iVar15 = *(int *)((int)pvVar9 + 0x110);
  mobyfunc::DoManipulator(0x4004000000000000,moby,0,(Manipulator *)((int)pvVar9 + 0x1e0));
  if ((moby->enabled != '\0') &&
     (fVar3 = (moby->pos).y - GameCamera.posY, fVar5 = (moby->pos).x - GameCamera.posX,
     fVar6 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar3 * fVar3) < 28.0)) {
    mobyutil::MB_SetZBoundsFromGround(lVar14);
    moby->shadow = '\x16';
  }
  uVar2 = moby->state;
  if (uVar2 == '\b') {
    uVar17 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x70));
    if ((uVar17 & 0x160) != 0) {
      mobyutil::MB_SpawnExplosionSparks2
                (0x3ff0000000000000,0x4024000000000000,lVar14,lVar14 + 0x10,&DAT_00214a64,
                 0xffffffffffffffff);
      mobyutil::MB_SpawnBoltsFromCrate(lVar14,0,0xffffffffffffffff);
      mobyfunc::DeleteMoby(moby);
    }
  }
  else if (uVar2 == '\a') {
    uVar17 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x70));
    if ((uVar17 & 0x41) != 0) {
      iVar15 = mobyutil::PointInsideComplexPoly
                         ((Vec4 *)&moby->pos,(Vec4 *)Splines[*(int *)((int)pvVar9 + 0x13c)]->points,
                          Splines[*(int *)((int)pvVar9 + 0x13c)]->cnt);
      if (iVar15 != 0) {
        moby->state = '\x03';
        if (moby->animationId == '\0') {
          return;
        }
        puVar11[0x23] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar14,0,0,*(undefined4 *)((int)puVar11 + 0x11c));
        return;
      }
      uVar17 = 0x100;
    }
    if ((uVar17 & 0x120) != 0) {
      mobyutil::MB_SpawnBoltsFromCrate(lVar14,0,0xffffffffffffffff);
      mobyutil::MB_SpawnExplosionSparks2
                (0x3fe0000000000000,0x4024000000000000,lVar14,lVar14 + 0x10,&DAT_00214a64,
                 0xffffffffffffffff);
      mobyfunc::DeleteMoby(moby);
    }
  }
  else if (uVar2 == '\x06') {
    if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x03', moby->animationId != '\0')) {
      puVar11[0x23] = (longlong)(int)(animationSpeed * 10.5);
      mobyutil::MB_SetAnimation(lVar14,0,0,*(undefined4 *)((int)puVar11 + 0x11c));
    }
  }
  else if (uVar2 == '\x05') {
    fVar3 = *(float *)(iVar15 + 0x10) - (moby->pos).x;
    fVar5 = *(float *)(iVar15 + 0x14) - (moby->pos).y;
    fVar4 = ABS(fVar3);
    fVar6 = ABS(fVar5);
    *(float *)(puVar11 + 0x12) = fVar3;
    *(float *)((int)puVar11 + 0x94) = fVar5;
    *(float *)(puVar11 + 0x13) = fVar4 - fVar6;
    dVar28 = 0.0;
    uVar19 = (ulonglong)(*(uint *)(puVar11 + 0x12) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x13) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0x94) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)(puVar11 + 0x12));
    if (*(float *)(puVar11 + 0x13) - 0.0 < 0.0) {
      fVar3 = fVar6;
    }
    fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
    fVar5 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    fVar8 = ABS(*(float *)((int)puVar11 + 0x94));
    if (*(float *)(puVar11 + 0x13) - 0.0 < 0.0) {
      fVar8 = fVar4;
    }
    dVar26 = dVar28;
    if (0.0 < fVar3) {
      lVar20 = uVar13 - 0x140;
      lVar22 = uVar13 - 0x9c;
      lVar24 = uVar13 - 0x8c;
      lVar25 = 2;
      fVar3 = (fVar8 - fVar3) / (fVar8 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar11 + 0x18) = fVar3;
      *(float *)(puVar11 + 0x17) = fVar3;
      *(float *)((int)puVar11 + 0xbc) = fVar3;
      *(float *)((int)puVar11 + 0xb4) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar11 + 0x17) = *(float *)(puVar11 + 0x17) * fVar4;
      *(float *)((int)puVar11 + 0xbc) = *(float *)((int)puVar11 + 0xbc) * fVar3;
      *(float *)(puVar11 + 0x18) = *(float *)(puVar11 + 0x18) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar20 + 0xb4) = *(float *)((int)lVar20 + 0xa4) * fVar3 * fVar3;
        iVar15 = (int)lVar22;
        lVar20 = lVar20 + 8;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
        lVar24 = lVar24 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar25 = 4;
      lVar24 = uVar13 - 0x9c;
      pfVar23 = (float *)&DAT_007358e0;
      lVar20 = lVar21;
      lVar22 = lVar24;
      do {
        fVar3 = *pfVar23;
        fVar4 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar20 + 0xb4) = *(float *)((int)lVar20 + 0xb4) * fVar3;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar4;
        lVar22 = lVar22 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar20 = 2;
      do {
        iVar15 = (int)lVar21;
        lVar21 = lVar21 + 0x10;
        iVar12 = (int)lVar24;
        lVar24 = lVar24 + 0x10;
        dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar15 + 0xb4)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar6 + fVar5);
    }
    mobyutil::OrganicDeltAng
              ((float)dVar26,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
               mobyutil::g_FrameTime * 6.2831855,&(moby->rotation).z,0x720000,
               (float *)((int)pvVar9 + 0x14c));
    if ((*(int *)((int)pvVar9 + 0x160) != 0) &&
       (iVar15 = mobyutil::MB_MayaFrameTrigger(33.0,moby), iVar15 != 0)) {
      fVar3 = (moby->transform).v0.y;
      fVar5 = (moby->transform).v0.x;
      fVar6 = (moby->transform).v0.z;
      dVar26 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar3 * fVar3);
      if (dVar26 == dVar28) {
        fVar8 = (moby->transform).v0.w;
        dVar26 = dVar28;
        dVar29 = dVar28;
      }
      else {
        fVar4 = (float)((double)(mobyutil::g_FrameTime * 30.0) / dVar26);
        fVar8 = (moby->transform).v0.w;
        dVar26 = (double)(fVar5 * fVar4);
        dVar28 = (double)(fVar3 * fVar4);
        dVar29 = (double)(fVar6 * fVar4);
      }
      *(float *)(puVar11 + 0x10) = (float)dVar26;
      *(float *)((int)puVar11 + 0x84) = (float)dVar28;
      uVar16 = *(undefined4 *)((int)pvVar9 + 0x160);
      *(float *)(puVar11 + 0x11) = (float)dVar29;
      *(float *)((int)puVar11 + 0x8c) = fVar8;
      FUN_002405c8(uVar16,uVar13 - 0xd0);
      *(undefined4 *)((int)pvVar9 + 0x160) = 0;
    }
    if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x06', moby->animationId != '\x04')) {
      puVar11[0x23] = (longlong)(int)(animationSpeed * 10.5);
      mobyutil::MB_SetAnimation(lVar14,4,0,*(undefined4 *)((int)puVar11 + 0x11c));
    }
  }
  else if (uVar2 == '\x04') {
    fVar3 = *(float *)(iVar15 + 0x10) - (moby->pos).x;
    fVar5 = *(float *)(iVar15 + 0x14) - (moby->pos).y;
    fVar4 = ABS(fVar3);
    fVar6 = ABS(fVar5);
    *(float *)((int)puVar11 + 0x9c) = fVar3;
    *(float *)(puVar11 + 0x14) = fVar5;
    *(float *)((int)puVar11 + 0xa4) = fVar4 - fVar6;
    dVar28 = 0.0;
    uVar19 = (ulonglong)(*(uint *)((int)puVar11 + 0x9c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar11 + 0xa4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar11 + 0x14) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)((int)puVar11 + 0x9c));
    if (*(float *)((int)puVar11 + 0xa4) - 0.0 < 0.0) {
      fVar3 = fVar6;
    }
    fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
    fVar5 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    fVar8 = ABS(*(float *)(puVar11 + 0x14));
    if (*(float *)((int)puVar11 + 0xa4) - 0.0 < 0.0) {
      fVar8 = fVar4;
    }
    dVar26 = dVar28;
    if (0.0 < fVar3) {
      lVar20 = uVar13 - 0x140;
      lVar22 = uVar13 - 0x7c;
      lVar24 = uVar13 - 0x6c;
      lVar25 = 2;
      fVar3 = (fVar8 - fVar3) / (fVar8 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar11 + 0x1c) = fVar3;
      *(float *)(puVar11 + 0x1b) = fVar3;
      *(float *)((int)puVar11 + 0xdc) = fVar3;
      *(float *)((int)puVar11 + 0xd4) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar11 + 0x1b) = *(float *)(puVar11 + 0x1b) * fVar4;
      *(float *)((int)puVar11 + 0xdc) = *(float *)((int)puVar11 + 0xdc) * fVar3;
      *(float *)(puVar11 + 0x1c) = *(float *)(puVar11 + 0x1c) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar20 + 0xd4) = *(float *)((int)lVar20 + 0xc4) * fVar3 * fVar3;
        iVar15 = (int)lVar22;
        lVar20 = lVar20 + 8;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
        lVar24 = lVar24 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar25 = 4;
      lVar24 = uVar13 - 0x7c;
      pfVar23 = (float *)&DAT_007358e0;
      lVar20 = lVar21;
      lVar22 = lVar24;
      do {
        fVar3 = *pfVar23;
        fVar4 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar20 + 0xd4) = *(float *)((int)lVar20 + 0xd4) * fVar3;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar4;
        lVar22 = lVar22 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar20 = 2;
      do {
        iVar15 = (int)lVar21;
        lVar21 = lVar21 + 0x10;
        iVar12 = (int)lVar24;
        lVar24 = lVar24 + 0x10;
        dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar15 + 0xd4)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar6 + fVar5);
    }
    mobyutil::OrganicDeltAng
              ((float)dVar26,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
               mobyutil::g_FrameTime * 6.2831855,&(moby->rotation).z,0x720000,
               (float *)((int)pvVar9 + 0x14c));
    iVar15 = mobyutil::MB_MayaFrameTrigger(15.0,moby);
    fVar6 = DAT_00768610;
    fVar3 = (moby->pos).x;
    fVar5 = (moby->pos).y;
    if (iVar15 == 0) {
      if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x05', moby->animationId != '\x03')) {
        puVar11[0x23] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar14,3,0,*(undefined4 *)((int)puVar11 + 0x11c));
      }
    }
    else {
      fVar4 = (moby->transform).v0.y;
      fVar8 = (moby->transform).v0.x;
      fVar7 = (moby->transform).v0.z;
      dVar26 = (double)SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar4 * fVar4);
      if (dVar26 == dVar28) {
        fVar4 = (moby->transform).v0.w;
        dVar26 = dVar28;
        dVar29 = dVar28;
      }
      else {
        fVar1 = (float)((double)DAT_0076860c / dVar26);
        dVar29 = (double)(fVar8 * fVar1);
        dVar28 = (double)(fVar4 * fVar1);
        fVar4 = (moby->transform).v0.w;
        dVar26 = (double)(fVar7 * fVar1);
      }
      fVar8 = (float)(dVar26 + (double)(moby->pos).z);
      *(float *)((int)puVar11 + 0x7c) = fVar4;
      *(float *)(puVar11 + 0xf) = fVar8;
      *(float *)(puVar11 + 0xe) = (float)(dVar29 + (double)fVar3);
      *(float *)((int)puVar11 + 0x74) = (float)(dVar28 + (double)fVar5);
      *(float *)(puVar11 + 0xf) = fVar8 + fVar6;
      uVar16 = FUN_002403a8(lVar14,uVar13 - 0xe0,5);
      *(undefined4 *)((int)pvVar9 + 0x160) = uVar16;
    }
  }
  else if (uVar2 == '\x03') {
    fVar3 = (g_heroMobyPtr->pos).x - (moby->pos).x;
    fVar5 = (g_heroMobyPtr->pos).y - (moby->pos).y;
    fVar6 = ABS(fVar3);
    fVar4 = ABS(fVar5);
    *(float *)(puVar11 + 0x15) = fVar3;
    *(float *)((int)puVar11 + 0xac) = fVar5;
    *(float *)(puVar11 + 0x16) = fVar6 - fVar4;
    fVar3 = 0.0;
    uVar19 = (ulonglong)(*(uint *)(puVar11 + 0x15) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x16) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0xac) >> 0x1d) & 4;
    fVar5 = ABS(*(float *)(puVar11 + 0x15));
    if (*(float *)(puVar11 + 0x16) - 0.0 < 0.0) {
      fVar5 = fVar4;
    }
    fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
    fVar4 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    fVar7 = ABS(*(float *)((int)puVar11 + 0xac));
    if (*(float *)(puVar11 + 0x16) - 0.0 < 0.0) {
      fVar7 = fVar6;
    }
    if (0.0 < fVar5) {
      lVar20 = uVar13 - 0x140;
      lVar24 = uVar13 - 0x4c;
      lVar22 = uVar13 - 0x5c;
      lVar25 = 2;
      fVar5 = (fVar7 - fVar5) / (fVar7 + fVar5);
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
        *(float *)((int)lVar20 + 0xf4) = *(float *)((int)lVar20 + 0xe4) * fVar5 * fVar5;
        iVar15 = (int)lVar22;
        lVar22 = lVar22 + 8;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar15 + 4) * fVar5 * fVar5;
        lVar24 = lVar24 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar25 = 4;
      lVar24 = uVar13 - 0x5c;
      pfVar23 = (float *)&DAT_007358e0;
      lVar20 = lVar21;
      lVar22 = lVar24;
      do {
        fVar5 = *pfVar23;
        fVar6 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar20 + 0xf4) = *(float *)((int)lVar20 + 0xf4) * fVar5;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
        lVar22 = lVar22 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar20 = 2;
      do {
        iVar15 = (int)lVar21;
        lVar21 = lVar21 + 0x10;
        iVar12 = (int)lVar24;
        lVar24 = lVar24 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar15 + 0xf4) + *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8)
                + *(float *)(iVar12 + 0xc);
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar8 + fVar4;
    }
    mobyutil::OrganicDeltAng
              (fVar3,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
               mobyutil::g_FrameTime * 6.2831855,&(moby->rotation).z,0x214a64,
               (float *)((int)pvVar9 + 0x14c));
    if ((*(int *)((int)pvVar9 + 0x114) != 2) && (moby->state = '\x04', moby->animationId != '\x02'))
    {
      puVar11[0x23] = (longlong)(int)(animationSpeed * 10.5);
      mobyutil::MB_SetAnimation(lVar14,2,0,*(undefined4 *)((int)puVar11 + 0x11c));
    }
  }
  else if (uVar2 == '\0') {
    *(undefined4 *)((int)pvVar9 + 0x20) = 0x40400000;
    *(undefined2 *)((int)pvVar9 + 0x24) = 3;
    *(undefined1 *)((int)pvVar9 + 0x28) = 2;
    *(undefined1 *)((int)pvVar9 + 0x2a) = 6;
    uVar27 = 0x4020000000000000;
    uVar18 = fastfunc::FastDoubleToInt(0x4020000000000000);
    *(undefined1 *)((int)pvVar9 + 0x58) = uVar18;
    uVar18 = fastfunc::FastDoubleToInt(uVar27);
    *(undefined1 *)((int)pvVar9 + 0x5a) = uVar18;
    uVar2 = moby->animationId;
    moby->state = '\x03';
    if (uVar2 != '\0') {
      puVar11[0x23] = (longlong)(int)(animationSpeed * 10.5);
      mobyutil::MB_SetAnimation(lVar14,0,0,*(undefined4 *)((int)puVar11 + 0x11c));
      uVar2 = moby->animationId;
    }
    if (*(int *)((int)pvVar9 + 0x130) == 0) {
      moby->state = '\x03';
      if (uVar2 != '\0') {
        puVar11[0x23] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar14,0,0,*(undefined4 *)((int)puVar11 + 0x11c));
      }
    }
    else {
      moby->state = '\x01';
      pSVar10 = Splines[*(int *)((int)pvVar9 + 0x134)];
      (moby->pos).x = pSVar10->points[0].x;
      (moby->pos).y = pSVar10->points[0].y;
      (moby->pos).z = pSVar10->points[0].z;
      (moby->pos).w = pSVar10->points[0].w;
    }
  }
  return;
}



//==== 00215778  ns=mobyupdate_helpers  size=0x4
// sig: undefined M1232_00215778(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1232_00215778(void)

{
  return;
}



//==== 0021577c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1232_0021577c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1232_0021577c(void)

{
  DAT_00768660 = 0x10000;
  return;
}



//==== 002157a0  ns=mobyupdate_helpers  size=0x27c
// sig: undefined M1232_002157a0(void)
// callers(1): 00215a68 mobyupdate_unsorted::UpdateMoby_1232
// callees(6): 00057820 collproc::CollLine; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00111ba0 mobyutil::MB_getTargetInArea

void mobyupdate_helpers::M1232_002157a0(MobyInstance *param_1)

{
  void *pvVar1;
  Spline *pSVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  double dVar8;
  int local_20;
  float local_1c;
  
  pvVar1 = param_1->pVar;
  uVar7 = ZEXT48(pvVar1);
  if (param_1->state == '\0') {
    return;
  }
  param_1->scale = param_1->pClass->gScale * DAT_00768684;
  dVar8 = 0.0;
  local_1c = 0.0;
  uVar5 = mobyutil::MB_damage(param_1,0x330000,0);
  iVar6 = mobyutil::MB_HandleDamage(param_1,uVar5,uVar7 + 0x20,0,&local_20,&local_1c,0,4);
  if (local_20 == 1) goto LAB_002158c0;
  fVar3 = *(float *)((int)pvVar1 + 0x20) - local_1c;
  *(float *)((int)pvVar1 + 0x20) = fVar3;
  if ((double)fVar3 <= dVar8) {
LAB_002158a0:
    param_1->state = '\a';
    *(undefined1 *)((int)pvVar1 + 0x67) = 0xf0;
  }
  else if (iVar6 < 3) {
    if ((-1 < iVar6) && (0 < iVar6)) goto LAB_002158a0;
  }
  else if (iVar6 < 0xb) {
    if (iVar6 < 9) {
      *(undefined1 *)((int)pvVar1 + 0x67) = 0x78;
    }
    else {
      *(undefined1 *)((int)pvVar1 + 0x67) = 0xfa;
    }
  }
  mobyutil::MB_UpdateLightsTransition(param_1,uVar7 + 0x60);
LAB_002158c0:
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar7 + 0x60);
  uVar5 = 0x42200000;
  if (param_1->state == '\x04') {
    uVar5 = 0x42480000;
  }
  *(undefined4 *)((int)pvVar1 + 0xd8) = uVar5;
  pSVar2 = Splines[*(int *)((int)pvVar1 + 0xd0)];
  iVar6 = mobyutil::MB_getTargetInArea(param_1,uVar7 + 0x70,pSVar2,0,0,pSVar2->points,pSVar2->cnt);
  if (iVar6 != 2) {
    fVar3 = (param_1->pos).y - *(float *)((int)pvVar1 + 0x74);
    fVar4 = (param_1->pos).x - *(float *)((int)pvVar1 + 0x70);
    if ((*(float *)((int)pvVar1 + 0xd8) < SQRT(fVar4 * fVar4 + fVar3 * fVar3)) ||
       (8.0 < ABS((param_1->pos).z - *(float *)((int)pvVar1 + 0x78)))) {
      *(undefined4 *)((int)pvVar1 + 0xb4) = 2;
    }
    else if ((param_1->state != '\x05') &&
            (iVar6 = collproc::CollLine(&param_1->pos,&hero::g_heroCGPos,2,param_1,0), iVar6 != 0))
    {
      *(undefined4 *)((int)pvVar1 + 0xb4) = 2;
    }
  }
  if (*(int *)((int)pvVar1 + 0xb0) == 0) {
    *(MobyInstance **)((int)pvVar1 + 0xb0) = g_heroMobyPtr;
  }
  return;
}



//==== 00215a68  ns=mobyupdate_unsorted  size=0x9ac
// sig: undefined UpdateMoby_1232(MobyInstance * moby)
// callers(0): 
// callees(7): 000efb38 mobyfunc::DeleteMoby; 00109c30 mobyutil::OrganicDelt; 0010a2e0 mobyutil::OrganicDeltAng; 0010e030 mobyutil::MB_genericExplosion; 002157a0 mobyupdate_helpers::M1232_002157a0; 00216430 mobyupdate_helpers::M1232_00216430; 004fff60 fastfunc::FastDecTimerS32

/* Moby 1232 */

double mobyupdate_unsorted::UpdateMoby_1232(MobyInstance *moby)

{
  bool bVar1;
  u8 uVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  f32 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  MobyModeBit MVar11;
  void *pvVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  ulonglong *puVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  float *pfVar26;
  longlong lVar27;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double extraout_f1;
  double dVar32;
  double dVar33;
  ulonglong in_f27;
  double dVar34;
  ulonglong in_f28;
  double dVar35;
  ulonglong in_f29;
  double dVar36;
  ulonglong in_f30;
  double dVar37;
  ulonglong in_f31;
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  
  lVar23 = (longlong)(int)moby;
  uVar20 = ZEXT48(&stack0x00000000);
  lVar24 = uVar20 - 400;
  puVar16 = (ulonglong *)lVar24;
  *puVar16 = uVar20;
  puVar16[0x34] = in_LR;
  puVar16[0x2d] = in_f27;
  puVar16[0x2e] = in_f28;
  puVar16[0x2f] = in_f29;
  puVar16[0x30] = in_f30;
  puVar16[0x31] = in_f31;
  puVar16[0x2c] = unaff_r31;
  puVar16[0x2b] = unaff_r30;
  puVar16[0x2a] = unaff_r29;
  pvVar12 = moby->pVar;
  dVar30 = (double)mobyupdate_helpers::M1232_002157a0();
  uVar2 = moby->state;
  iVar13 = *(int *)((int)pvVar12 + 0xb0);
  if (uVar2 == '\a') {
    *(undefined4 *)((int)puVar16 + 0xec) = 0;
    *(undefined4 *)(puVar16 + 0x1d) = 0;
    *(undefined4 *)((int)puVar16 + 0xe4) = 0;
    *(undefined4 *)(puVar16 + 0x1c) = 0;
    puVar16[0x12] = 0xffffffffffffffff;
    puVar16[0x14] = 1;
    puVar16[0x15] = 1;
    puVar16[0x16] = 0xffffffffffffffff;
    puVar16[0x17] = 0;
    mobyutil::MB_genericExplosion
              (0,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,0x3ff0000000000000,
               0x402e000000000000,lVar23,uVar20 - 0xb0,lVar23 + 0x10,0,&DAT_00215a1c,10,3,0x10);
    dVar30 = (double)mobyfunc::DeleteMoby(moby);
  }
  else if (uVar2 == '\x06') {
    dVar38 = 0.0;
    *(undefined4 *)(puVar16 + 0x1e) = 0;
    iVar13 = *(int *)((int)pvVar12 + 0xd4);
    fVar43 = (moby->pos).y;
    fVar5 = (moby->pos).x;
    fVar6 = (moby->pos).z;
    fVar4 = Cuboids[iVar13].pos.y;
    fVar10 = Cuboids[iVar13].pos.x;
    fVar9 = fVar43 - fVar4;
    fVar8 = Cuboids[iVar13].pos.z;
    fVar17 = fVar5 - fVar10;
    fVar18 = fVar6 - fVar8;
    dVar36 = (double)(fVar4 - fVar43);
    dVar35 = (double)(fVar10 - fVar5);
    dVar34 = (double)(fVar8 - fVar6);
    fVar43 = SQRT(fVar18 * fVar18 + fVar17 * fVar17 + fVar9 * fVar9);
    dVar37 = (double)fVar43;
    mobyutil::OrganicDelt
              (fVar43,DAT_0071f418 * 10.0,DAT_0071f418 * 10.0,mobyutil::g_FrameTime * 20.0,
               (float *)(puVar16 + 0x1e),0x720000,(float *)((int)pvVar12 + 0xf0));
    dVar39 = (double)SQRT((float)(dVar34 * dVar34 +
                                 (double)(float)(dVar35 * dVar35 + (double)(float)(dVar36 * dVar36))
                                 ));
    dVar32 = (double)(float)((double)*(float *)((int)pvVar12 + 0xf0) / dVar39);
    dVar30 = dVar38;
    if (dVar38 - dVar39 < 0.0) {
      dVar30 = (double)(float)(dVar32 * dVar34);
    }
    dVar33 = dVar38;
    if (dVar38 - dVar39 < 0.0) {
      dVar33 = (double)(float)(dVar32 * dVar36);
    }
    dVar31 = dVar38;
    if (dVar38 - dVar39 < 0.0) {
      dVar31 = (double)(float)(dVar32 * dVar35);
    }
    if (dVar39 - dVar38 < 0.0) {
      dVar30 = (double)(float)(dVar32 * dVar34);
    }
    if (dVar39 - dVar38 < 0.0) {
      dVar33 = (double)(float)(dVar32 * dVar36);
    }
    if (dVar39 - dVar38 < 0.0) {
      dVar31 = (double)(float)(dVar32 * dVar35);
    }
    (moby->pos).z = (float)((double)(moby->pos).z + dVar30);
    (moby->pos).y = (float)((double)(moby->pos).y + dVar33);
    (moby->pos).x = (float)((double)(moby->pos).x + dVar31);
    dVar30 = 0.10000000149011612;
    if ((dVar37 < 0.10000000149011612) &&
       (uVar14 = (int)*(uint *)((int)pvVar12 + 0xf0) >> 0x1f,
       (int)((uVar14 >> 1 ^ *(uint *)((int)pvVar12 + 0xf0)) - uVar14) < 0x3c23d70a)) {
      moby->state = '\x02';
    }
  }
  else if (uVar2 == '\x05') {
    if (*(int *)((int)pvVar12 + 0xb4) != 2) {
      moby->state = '\x06';
    }
  }
  else if (uVar2 == '\x04') {
    fVar43 = *(float *)(iVar13 + 0x10) - (moby->pos).x;
    fVar5 = *(float *)(iVar13 + 0x14) - (moby->pos).y;
    fVar4 = ABS(fVar43);
    fVar6 = ABS(fVar5);
    *(float *)((int)puVar16 + 0xf4) = fVar43;
    *(float *)(puVar16 + 0x1f) = fVar5;
    *(float *)((int)puVar16 + 0xfc) = fVar4 - fVar6;
    dVar39 = 0.0;
    uVar22 = (ulonglong)(*(uint *)((int)puVar16 + 0xf4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar16 + 0xfc) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar16 + 0x1f) >> 0x1d) & 4;
    fVar43 = ABS(*(float *)((int)puVar16 + 0xf4));
    if (*(float *)((int)puVar16 + 0xfc) - 0.0 < 0.0) {
      fVar43 = fVar6;
    }
    fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
    fVar5 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
    fVar10 = ABS(*(float *)(puVar16 + 0x1f));
    if (*(float *)((int)puVar16 + 0xfc) - 0.0 < 0.0) {
      fVar10 = fVar4;
    }
    dVar30 = dVar39;
    if (0.0 < fVar43) {
      lVar25 = uVar20 - 0x180;
      lVar28 = uVar20 - 0x74;
      lVar27 = uVar20 - 0x84;
      lVar29 = 2;
      fVar43 = (fVar10 - fVar43) / (fVar10 + fVar43);
      fVar4 = fVar43 * fVar43;
      *(float *)(puVar16 + 0x23) = fVar43;
      *(float *)(puVar16 + 0x22) = fVar43;
      *(float *)((int)puVar16 + 0x114) = fVar43;
      *(float *)((int)puVar16 + 0x10c) = fVar43;
      fVar43 = fVar4 * fVar4;
      *(float *)(puVar16 + 0x22) = *(float *)(puVar16 + 0x22) * fVar4;
      *(float *)((int)puVar16 + 0x114) = *(float *)((int)puVar16 + 0x114) * fVar43;
      *(float *)(puVar16 + 0x23) = *(float *)(puVar16 + 0x23) * fVar43 * fVar4;
      do {
        *(float *)((int)lVar25 + 0x10c) = *(float *)((int)lVar25 + 0xfc) * fVar43 * fVar43;
        iVar21 = (int)lVar27;
        lVar27 = lVar27 + 8;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar28 + 4) = *(float *)(iVar21 + 4) * fVar43 * fVar43;
        lVar28 = lVar28 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar29 = 4;
      lVar28 = uVar20 - 0x84;
      pfVar26 = (float *)&DAT_007358e0;
      lVar25 = lVar24;
      lVar27 = lVar28;
      do {
        fVar43 = *pfVar26;
        fVar4 = pfVar26[1];
        pfVar26 = pfVar26 + 2;
        *(float *)((int)lVar25 + 0x10c) = *(float *)((int)lVar25 + 0x10c) * fVar43;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar4;
        lVar27 = lVar27 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar25 = 2;
      do {
        iVar21 = (int)lVar24;
        iVar19 = (int)lVar28;
        lVar24 = lVar24 + 0x10;
        lVar28 = lVar28 + 0x10;
        dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar21 + 0x10c)) +
                          *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) + *(float *)(iVar19 + 0xc)
                         );
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar6 + fVar5);
    }
    fVar43 = mobyutil::OrganicDeltAng
                       ((float)dVar30,DAT_0071f418 * 12.566371,DAT_0071f418 * 25.132742,
                        mobyutil::g_FrameTime * 6.2831855,&(moby->rotation).z,0x215a1c,
                        (float *)((int)pvVar12 + 0xdc));
    iVar21 = fastfunc::FastDecTimerS32((double)fVar43,ZEXT48(pvVar12) + 0xe8);
    dVar30 = extraout_f1;
    if (iVar21 != 0) {
      auVar40 = ZEXT416(0xffffffff);
      auVar40 = auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60;
      auVar41 = vectorShiftLeftIntegerWord(auVar40,auVar40);
      auVar40 = loadVectorLeftIndexed(0x2c,0x215a1c);
      auVar40 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar42 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar40 = vectorMultiplyAddFloatingPoint
                          (auVar42,auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60,
                           auVar41);
      bVar1 = *(int *)((int)pvVar12 + 0xf4) == 0;
      auVar40 = vectorConvertToSignedFixedPointWordSaturate(auVar40,0);
      auVar40 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar15 = storeVectorElementWordIndexed
                         (auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60,0xe8,
                          ZEXT48(pvVar12));
      *(undefined4 *)((int)pvVar12 + 0xe8U & 0xfffffffc) = uVar15;
      fVar3 = (moby->pos).y;
      *(f32 *)(puVar16 + 0x18) = (moby->pos).x;
      fVar7 = (moby->pos).z;
      *(f32 *)((int)puVar16 + 0xc4) = fVar3;
      fVar3 = (moby->pos).w;
      *(f32 *)(puVar16 + 0x19) = fVar7;
      *(f32 *)((int)puVar16 + 0xcc) = fVar3;
      if (bVar1) {
        fVar43 = (moby->transform).v1.x;
        fVar5 = (moby->transform).v1.y;
        fVar6 = (moby->transform).v1.z;
        fVar4 = 2.5;
      }
      else {
        fVar43 = (moby->transform).v1.x;
        fVar5 = (moby->transform).v1.y;
        fVar6 = (moby->transform).v1.z;
        fVar4 = -2.5;
      }
      fVar10 = *(float *)(puVar16 + 0x18);
      fVar8 = *(float *)((int)puVar16 + 0xc4);
      fVar9 = *(float *)(puVar16 + 0x19);
      fVar17 = DAT_00768690 * mobyutil::g_FrameTime;
      *(uint *)((int)pvVar12 + 0xf4) = (uint)bVar1;
      dVar32 = (double)SQRT(fVar6 * fVar6 + fVar43 * fVar43 + fVar5 * fVar5);
      fVar4 = (float)((double)fVar4 / dVar32);
      dVar30 = dVar39;
      if (dVar39 - dVar32 < 0.0) {
        dVar30 = (double)(fVar6 * fVar4);
      }
      dVar34 = dVar39;
      if (dVar39 - dVar32 < 0.0) {
        dVar34 = (double)(fVar5 * fVar4);
      }
      dVar35 = dVar39;
      if (dVar39 - dVar32 < 0.0) {
        dVar35 = (double)(fVar43 * fVar4);
      }
      if (dVar32 - dVar39 < 0.0) {
        dVar30 = (double)(fVar6 * fVar4);
      }
      if (dVar32 - dVar39 < 0.0) {
        dVar34 = (double)(fVar5 * fVar4);
      }
      if (dVar32 - dVar39 < 0.0) {
        dVar35 = (double)(fVar43 * fVar4);
      }
      fVar43 = (float)((double)fVar8 + dVar34);
      *(float *)(puVar16 + 0x19) = (float)((double)fVar9 + dVar30);
      *(float *)((int)puVar16 + 0xc4) = fVar43;
      *(float *)(puVar16 + 0x18) = (float)((double)fVar10 + dVar35);
      fVar4 = *(float *)(iVar13 + 0x10) - (float)((double)fVar10 + dVar35);
      *(float *)(puVar16 + 0x1a) = fVar4;
      fVar43 = *(float *)(iVar13 + 0x14) - fVar43;
      *(float *)((int)puVar16 + 0xd4) = fVar43;
      fVar6 = *(float *)(iVar13 + 0x18) - (float)((double)fVar9 + dVar30);
      *(float *)(puVar16 + 0x1b) = fVar6;
      *(undefined4 *)((int)puVar16 + 0xdc) = *(undefined4 *)(iVar13 + 0x1c);
      dVar32 = (double)SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar43 * fVar43);
      fVar5 = (float)((double)fVar17 / dVar32);
      dVar30 = dVar39;
      if (dVar39 - dVar32 < 0.0) {
        dVar30 = (double)(fVar4 * fVar5);
      }
      dVar34 = dVar39;
      if (dVar39 - dVar32 < 0.0) {
        dVar34 = (double)(fVar43 * fVar5);
      }
      dVar35 = dVar39;
      if (dVar39 - dVar32 < 0.0) {
        dVar35 = (double)(fVar6 * fVar5);
      }
      if (dVar32 - dVar39 < 0.0) {
        dVar30 = (double)(fVar4 * fVar5);
      }
      if (dVar32 - dVar39 < 0.0) {
        dVar34 = (double)(fVar43 * fVar5);
      }
      if (dVar32 - dVar39 < 0.0) {
        dVar35 = (double)(fVar6 * fVar5);
      }
      *(float *)(puVar16 + 0x1a) = (float)dVar30;
      *(float *)((int)puVar16 + 0xd4) = (float)dVar34;
      *(float *)(puVar16 + 0x1b) = (float)dVar35;
      mobyupdate_helpers::M1232_00216430
                ((double)*(float *)((int)pvVar12 + 0xec),uVar20 - 0xd0,uVar20 - 0xc0,lVar23,
                 0xfffffffffffff410,iVar13);
      fVar43 = *(float *)((int)pvVar12 + 0xec) + 5.0;
      dVar30 = (double)fVar43;
      *(float *)((int)pvVar12 + 0xec) = fVar43;
      fVar43 = (moby->pos).y - *(float *)(iVar13 + 0x14);
      fVar5 = (moby->pos).x - *(float *)(iVar13 + 0x10);
      fVar43 = SQRT(fVar5 * fVar5 + fVar43 * fVar43);
      if ((double)fVar43 < dVar30) {
        *(float *)((int)pvVar12 + 0xec) = fVar43;
      }
    }
    if (*(int *)((int)pvVar12 + 0xb4) == 2) {
      moby->state = '\x02';
    }
  }
  else if (uVar2 == '\x02') {
    fVar43 = *(float *)(iVar13 + 0x10) - (moby->pos).x;
    fVar5 = *(float *)(iVar13 + 0x14) - (moby->pos).y;
    fVar6 = ABS(fVar43);
    fVar4 = ABS(fVar5);
    *(float *)(puVar16 + 0x20) = fVar43;
    *(float *)((int)puVar16 + 0x104) = fVar5;
    *(float *)(puVar16 + 0x21) = fVar6 - fVar4;
    fVar43 = 0.0;
    uVar22 = (ulonglong)(*(uint *)(puVar16 + 0x20) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar16 + 0x21) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar16 + 0x104) >> 0x1d) & 4;
    fVar5 = ABS(*(float *)(puVar16 + 0x20));
    if (*(float *)(puVar16 + 0x21) - 0.0 < 0.0) {
      fVar5 = fVar4;
    }
    fVar10 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
    fVar4 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
    fVar8 = ABS(*(float *)((int)puVar16 + 0x104));
    if (*(float *)(puVar16 + 0x21) - 0.0 < 0.0) {
      fVar8 = fVar6;
    }
    if (0.0 < fVar5) {
      lVar23 = uVar20 - 0x180;
      lVar27 = uVar20 - 0x54;
      lVar25 = uVar20 - 100;
      lVar28 = 2;
      fVar5 = (fVar8 - fVar5) / (fVar8 + fVar5);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar16 + 0x27) = fVar5;
      *(float *)(puVar16 + 0x26) = fVar5;
      *(float *)((int)puVar16 + 0x134) = fVar5;
      *(float *)((int)puVar16 + 300) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar16 + 0x26) = *(float *)(puVar16 + 0x26) * fVar6;
      *(float *)((int)puVar16 + 0x134) = *(float *)((int)puVar16 + 0x134) * fVar5;
      *(float *)(puVar16 + 0x27) = *(float *)(puVar16 + 0x27) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar23 + 300) = *(float *)((int)lVar23 + 0x11c) * fVar5 * fVar5;
        iVar13 = (int)lVar25;
        lVar25 = lVar25 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar13 + 4) * fVar5 * fVar5;
        lVar27 = lVar27 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar27 = uVar20 - 100;
      pfVar26 = (float *)&DAT_007358e0;
      lVar23 = lVar24;
      lVar25 = lVar27;
      do {
        fVar5 = *pfVar26;
        fVar6 = pfVar26[1];
        pfVar26 = pfVar26 + 2;
        *(float *)((int)lVar23 + 300) = *(float *)((int)lVar23 + 300) * fVar5;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar6;
        lVar25 = lVar25 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar23 = 2;
      do {
        iVar13 = (int)lVar24;
        lVar24 = lVar24 + 0x10;
        iVar21 = (int)lVar27;
        lVar27 = lVar27 + 0x10;
        fVar43 = fVar43 + *(float *)(iVar13 + 300) + *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8)
                 + *(float *)(iVar21 + 0xc);
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      fVar43 = (fVar43 + 0.7853982) * fVar10 + fVar4;
    }
    fVar43 = mobyutil::OrganicDeltAng
                       (fVar43,DAT_0071f418 * 4.712389,DAT_0071f418 * 4.712389,
                        mobyutil::g_FrameTime * 10.12291,&(moby->rotation).z,0x215a1c,
                        (float *)((int)pvVar12 + 0xdc));
    dVar30 = (double)fVar43;
    if (*(int *)((int)pvVar12 + 0xb4) != 2) {
      *(undefined4 *)((int)pvVar12 + 0xec) = 0x41700000;
      moby->state = '\x04';
    }
  }
  else if (uVar2 == '\0') {
    MVar11 = moby->modeBits;
    *(f32 *)((int)pvVar12 + 0xc0) = (moby->pos).x;
    *(f32 *)((int)pvVar12 + 0xc4) = (moby->pos).y;
    fVar3 = (moby->pos).z;
    moby->modeBits = MVar11 | (CAN_BE_DAMAGED|CAN_BE_AUTO_TARGETED);
    *(f32 *)((int)pvVar12 + 200) = fVar3;
    fVar3 = (moby->pos).w;
    *(undefined4 *)((int)pvVar12 + 0x20) = 0x40800000;
    *(f32 *)((int)pvVar12 + 0xcc) = fVar3;
    *(undefined2 *)((int)pvVar12 + 0x24) = 4;
    *(undefined1 *)((int)pvVar12 + 0x28) = 3;
    moby->drawDistance = 0xff;
    fVar43 = (moby->pos).z + 1.0;
    dVar30 = (double)fVar43;
    moby->state = ((byte)((LZCOUNT(-1 - *(int *)((int)pvVar12 + 0xd4)) << 0x3a) >> 0x3f) & 0xfd) + 5
    ;
    (moby->pos).z = fVar43;
  }
  return dVar30;
}



//==== 00216414  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1233_00216414(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1233_00216414(void)

{
  DAT_007686e0 = 0x10000;
  return;
}



//==== 00216430  ns=mobyupdate_helpers  size=0x468
// sig: undefined M1232_00216430(void)
// callers(1): 00215a68 mobyupdate_unsorted::UpdateMoby_1232
// callees(2): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance *
mobyupdate_helpers::M1232_00216430
          (double param_1,float *param_2,float *param_3,float param_4,undefined8 param_5,
          float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  ulonglong *puVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  MobyInstance *pMVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  float *pfVar18;
  longlong lVar17;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  ulonglong in_f31;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar14 = uVar11 - 0xf0;
  puVar7 = (ulonglong *)lVar14;
  *puVar7 = uVar11;
  puVar7[0x20] = in_LR;
  puVar7[0x1d] = in_f31;
  puVar7[0x1c] = unaff_r31;
  puVar7[0x1a] = unaff_r29;
  puVar7[0x19] = unaff_r28;
  puVar7[0x1b] = unaff_r30;
  puVar7[0x18] = unaff_r27;
  pMVar12 = mobyfunc::CreateMoby(ROCKET_04D1);
  if (pMVar12 != (MobyInstance *)0x0) {
    pMVar12->updateDistance = -1;
    pMVar12->drawDistance = 0x7f;
    pMVar12->enabled = '\x01';
    pMVar12->state = '\0';
    fVar1 = 0.0;
    (pMVar12->rotation).x = 0.0;
    fVar4 = param_3[2];
    pfVar5 = (float *)pMVar12->pVar;
    fVar6 = ABS(param_3[2]);
    fVar3 = SQRT(*param_3 * *param_3 + param_3[1] * param_3[1]);
    fVar2 = ABS(fVar3);
    *(float *)((int)puVar7 + 0x74) = fVar3;
    *(float *)(puVar7 + 0xf) = fVar2 - fVar6;
    uVar15 = (ulonglong)(*(uint *)((int)puVar7 + 0x74) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar7 + 0xf) >> 0x1e) & 2 | (ulonglong)((uint)fVar4 >> 0x1d) & 4
    ;
    fVar4 = ABS(*(float *)((int)puVar7 + 0x74));
    if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
      fVar4 = fVar6;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
    if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
      fVar6 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    fVar8 = fVar1;
    if (0.0 < fVar4) {
      lVar13 = uVar11 - 0xe0;
      lVar16 = uVar11 - 0x54;
      lVar17 = uVar11 - 0x44;
      lVar19 = 2;
      fVar4 = (fVar6 - fVar4) / (fVar6 + fVar4);
      fVar6 = fVar4 * fVar4;
      *(float *)(puVar7 + 0x15) = fVar4;
      *(float *)(puVar7 + 0x14) = fVar4;
      *(float *)((int)puVar7 + 0xa4) = fVar4;
      *(float *)((int)puVar7 + 0x9c) = fVar4;
      fVar4 = fVar6 * fVar6;
      *(float *)(puVar7 + 0x14) = *(float *)(puVar7 + 0x14) * fVar6;
      *(float *)((int)puVar7 + 0xa4) = *(float *)((int)puVar7 + 0xa4) * fVar4;
      *(float *)(puVar7 + 0x15) = *(float *)(puVar7 + 0x15) * fVar4 * fVar6;
      do {
        *(float *)((int)lVar13 + 0x9c) = *(float *)((int)lVar13 + 0x8c) * fVar4 * fVar4;
        iVar9 = (int)lVar16;
        lVar13 = lVar13 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)(iVar9 + 4) * fVar4 * fVar4;
        lVar17 = lVar17 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar17 = uVar11 - 0x54;
      pfVar18 = (float *)&DAT_007358e0;
      lVar19 = 4;
      lVar13 = lVar14;
      lVar16 = lVar17;
      do {
        fVar4 = *pfVar18;
        fVar6 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar13 + 0x9c) = *(float *)((int)lVar13 + 0x9c) * fVar4;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar6;
        lVar16 = lVar16 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar16 = 2;
      lVar13 = lVar14;
      fVar4 = fVar1;
      do {
        iVar9 = (int)lVar13;
        lVar13 = lVar13 + 0x10;
        iVar10 = (int)lVar17;
        lVar17 = lVar17 + 0x10;
        fVar4 = fVar4 + *(float *)(iVar9 + 0x9c) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                *(float *)(iVar10 + 0xc);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      fVar8 = (fVar4 + 0.7853982) * fVar3 + fVar2;
    }
    (pMVar12->rotation).y = -fVar8;
    fVar4 = *param_3;
    fVar6 = param_3[1];
    fVar3 = ABS(*param_3);
    fVar2 = ABS(param_3[1]);
    *(float *)(puVar7 + 0xe) = fVar3 - fVar2;
    uVar15 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1e) & 2 | (ulonglong)((uint)fVar6 >> 0x1d) & 4
    ;
    fVar4 = fVar3;
    if (*(float *)(puVar7 + 0xe) - 0.0 < 0.0) {
      fVar4 = fVar2;
    }
    fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
    if (*(float *)(puVar7 + 0xe) - 0.0 < 0.0) {
      fVar2 = fVar3;
    }
    fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    if (0.0 < fVar4) {
      lVar13 = uVar11 - 0xe0;
      lVar16 = uVar11 - 0x74;
      lVar17 = uVar11 - 100;
      lVar19 = 2;
      fVar4 = (fVar2 - fVar4) / (fVar2 + fVar4);
      fVar2 = fVar4 * fVar4;
      *(float *)(puVar7 + 0x11) = fVar4;
      *(float *)(puVar7 + 0x10) = fVar4;
      *(float *)((int)puVar7 + 0x84) = fVar4;
      *(float *)((int)puVar7 + 0x7c) = fVar4;
      fVar4 = fVar2 * fVar2;
      *(float *)(puVar7 + 0x10) = *(float *)(puVar7 + 0x10) * fVar2;
      *(float *)((int)puVar7 + 0x84) = *(float *)((int)puVar7 + 0x84) * fVar4;
      *(float *)(puVar7 + 0x11) = *(float *)(puVar7 + 0x11) * fVar4 * fVar2;
      do {
        *(float *)((int)lVar13 + 0x7c) = *(float *)((int)lVar13 + 0x6c) * fVar4 * fVar4;
        iVar9 = (int)lVar16;
        lVar13 = lVar13 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)(iVar9 + 4) * fVar4 * fVar4;
        lVar17 = lVar17 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar17 = uVar11 - 0x74;
      pfVar18 = (float *)&DAT_007358e0;
      lVar19 = 4;
      lVar13 = lVar14;
      lVar16 = lVar17;
      do {
        fVar4 = *pfVar18;
        fVar2 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar13 + 0x7c) = *(float *)((int)lVar13 + 0x7c) * fVar4;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar2;
        lVar16 = lVar16 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar13 = 2;
      do {
        iVar9 = (int)lVar14;
        iVar10 = (int)lVar17;
        lVar14 = lVar14 + 0x10;
        lVar17 = lVar17 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar9 + 0x7c) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                *(float *)(iVar10 + 0xc);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar6 + fVar3;
    }
    (pMVar12->rotation).z = fVar1;
    (pMVar12->pos).x = *param_2;
    (pMVar12->pos).y = param_2[1];
    (pMVar12->pos).z = param_2[2];
    (pMVar12->pos).w = param_2[3];
    pfVar5[4] = *param_2;
    pfVar5[5] = param_2[1];
    pfVar5[6] = param_2[2];
    pfVar5[7] = param_2[3];
    *pfVar5 = *param_3;
    pfVar5[1] = param_3[1];
    pfVar5[2] = param_3[2];
    fVar1 = param_3[3];
    pfVar5[8] = param_4;
    pfVar5[3] = fVar1;
    pfVar5[10] = (float)param_1;
    *(undefined2 *)(pfVar5 + 9) = 1;
    pfVar5[0xb] = param_6;
    mobyfunc::UpdateMobyTransform(pMVar12);
  }
  return pMVar12;
}



//==== 00216898  ns=Global  size=0x11c
// sig: undefined FUN_00216898(void)
// callers(1): 00185e70 mobyupdate_unsorted::UpdateMoby_101
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f1114 mobyfunc::GetBonePosition; 000f31a8 mobyfunc::UpdateMobyTransform

longlong FUN_00216898(int param_1,undefined2 param_2)

{
  f32 fVar1;
  f32 fVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  MobyInstance *pMVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  pMVar6 = mobyfunc::CreateMoby(ROCKET_04D1);
  if (pMVar6 != (MobyInstance *)0x0) {
    pvVar3 = pMVar6->pVar;
    pMVar6->updateDistance = -1;
    pMVar6->drawDistance = 0x7f;
    pMVar6->enabled = '\x01';
    pMVar6->state = '\x01';
    *(int *)((int)pvVar3 + 0x20) = param_1;
    *(undefined2 *)((int)pvVar3 + 0x24) = 1;
    *(undefined2 *)((int)pvVar3 + 0x26) = param_2;
    mobyfunc::GetBonePosition(param_1,param_2,(longlong)(int)pMVar6 + 0x10);
    fVar1 = *(f32 *)(param_1 + 0x44);
    (pMVar6->rotation).x = *(f32 *)(param_1 + 0x40);
    fVar2 = *(f32 *)(param_1 + 0x48);
    (pMVar6->rotation).y = fVar1;
    fVar1 = *(f32 *)(param_1 + 0x4c);
    (pMVar6->rotation).z = fVar2;
    (pMVar6->rotation).w = fVar1;
    puVar4 = (undefined4 *)(param_1 + 0xc0U & 0xfffffff0);
    uVar9 = puVar4[2];
    uVar8 = puVar4[1];
    uVar7 = *puVar4;
    puVar5 = (undefined4 *)(param_1 + 0xd0U & 0xfffffff0);
    uVar13 = puVar5[3];
    uVar12 = puVar5[2];
    uVar11 = puVar5[1];
    uVar10 = *puVar5;
    puVar5 = (undefined4 *)(param_1 + 0xe0U & 0xfffffff0);
    uVar17 = puVar5[3];
    uVar16 = puVar5[2];
    uVar15 = puVar5[1];
    uVar14 = *puVar5;
    puVar5 = (undefined4 *)((uint)&pMVar6->transform & 0xfffffff0);
    puVar5[3] = puVar4[3];
    puVar5[2] = uVar9;
    puVar5[1] = uVar8;
    *puVar5 = uVar7;
    puVar4 = (undefined4 *)((uint)&(pMVar6->transform).v1 & 0xfffffff0);
    puVar4[3] = uVar13;
    puVar4[2] = uVar12;
    puVar4[1] = uVar11;
    *puVar4 = uVar10;
    puVar4 = (undefined4 *)((uint)&(pMVar6->transform).v2 & 0xfffffff0);
    puVar4[3] = uVar17;
    puVar4[2] = uVar16;
    puVar4[1] = uVar15;
    *puVar4 = uVar14;
    *(f32 *)((int)pvVar3 + 0x10) = (pMVar6->pos).x;
    *(f32 *)((int)pvVar3 + 0x14) = (pMVar6->pos).y;
    *(f32 *)((int)pvVar3 + 0x18) = (pMVar6->pos).z;
    *(f32 *)((int)pvVar3 + 0x1c) = (pMVar6->pos).w;
    pMVar6->collision = (ushort *)0x0;
    mobyfunc::UpdateMobyTransform(pMVar6);
  }
  return (longlong)(int)pMVar6;
}



//==== 002169b4  ns=Global  size=0x128
// sig: undefined FUN_002169b4(void)
// callers(1): 00185e70 mobyupdate_unsorted::UpdateMoby_101
// callees(2): 000f1114 mobyfunc::GetBonePosition; 000f31a8 mobyfunc::UpdateMobyTransform

void FUN_002169b4(double param_1,MobyInstance *param_2,undefined4 *param_3,undefined8 param_4,
                 undefined4 param_5)

{
  MobyModeBit MVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  puVar2 = (undefined4 *)param_2->pVar;
  iVar3 = puVar2[8];
  puVar2[10] = (float)param_1;
  (param_2->rotation).x = *(f32 *)(iVar3 + 0x40);
  (param_2->rotation).y = *(f32 *)(iVar3 + 0x44);
  (param_2->rotation).z = *(f32 *)(iVar3 + 0x48);
  (param_2->rotation).w = *(f32 *)(iVar3 + 0x4c);
  iVar3 = puVar2[8];
  puVar4 = (undefined4 *)(iVar3 + 0xd0U & 0xfffffff0);
  uVar9 = puVar4[3];
  uVar8 = puVar4[2];
  uVar7 = puVar4[1];
  uVar6 = *puVar4;
  puVar4 = (undefined4 *)(iVar3 + 0xe0U & 0xfffffff0);
  uVar13 = puVar4[3];
  uVar12 = puVar4[2];
  uVar11 = puVar4[1];
  uVar10 = *puVar4;
  puVar4 = (undefined4 *)(iVar3 + 0xc0U & 0xfffffff0);
  uVar16 = puVar4[2];
  uVar15 = puVar4[1];
  uVar14 = *puVar4;
  puVar5 = (undefined4 *)((uint)&param_2->transform & 0xfffffff0);
  puVar5[3] = puVar4[3];
  puVar5[2] = uVar16;
  puVar5[1] = uVar15;
  *puVar5 = uVar14;
  puVar4 = (undefined4 *)((uint)&(param_2->transform).v1 & 0xfffffff0);
  puVar4[3] = uVar9;
  puVar4[2] = uVar8;
  puVar4[1] = uVar7;
  *puVar4 = uVar6;
  puVar4 = (undefined4 *)((uint)&(param_2->transform).v2 & 0xfffffff0);
  puVar4[3] = uVar13;
  puVar4[2] = uVar12;
  puVar4[1] = uVar11;
  *puVar4 = uVar10;
  mobyfunc::GetBonePosition(puVar2[8],*(undefined2 *)((int)puVar2 + 0x26),&param_2->pos);
  puVar2[4] = (param_2->pos).x;
  puVar2[5] = (param_2->pos).y;
  puVar2[6] = (param_2->pos).z;
  puVar2[7] = (param_2->pos).w;
  *puVar2 = *param_3;
  puVar2[1] = param_3[1];
  MVar1 = param_2->modeBits;
  puVar2[2] = param_3[2];
  uVar6 = param_3[3];
  puVar2[0xb] = param_5;
  puVar2[3] = uVar6;
  param_2->state = '\0';
  param_2->modeBits =
       MVar1 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
  param_2->collision = param_2->pClass->collision;
  mobyfunc::UpdateMobyTransform(param_2);
  return;
}



//==== 00216af0  ns=mobyupdate_helpers  size=0x8c
// sig: undefined M1233_00216af0(void)
// callers(0): 
// callees(1): 0010e030 mobyutil::MB_genericExplosion

void mobyupdate_helpers::M1233_00216af0(longlong param_1)

{
  undefined1 local_10 [16];
  
  mobyutil::MB_genericExplosion
            (0x4000000000000000,0x3ff0000000000000,0x4010000000000000,0x4008000000000000,
             0x3ff0000000000000,0x4000000000000000,0x4034000000000000,param_1,local_10,
             param_1 + 0x10,0,&DAT_00216adc,0xc,4,0x12);
  return;
}



//==== 00216b88  ns=mobyupdate_helpers  size=0x8c
// sig: undefined M1233_00216b88(void)
// callers(0): 
// callees(1): 0010e030 mobyutil::MB_genericExplosion

void mobyupdate_helpers::M1233_00216b88(longlong param_1)

{
  undefined1 local_10 [16];
  
  mobyutil::MB_genericExplosion
            (0,0,0,0,0,0x3ff0000000000000,0,param_1,local_10,param_1 + 0x10,&DAT_00216b7c,0,5,1,5);
  return;
}



//==== 00216c60  ns=mobyupdate_unsorted  size=0xb30
// sig: undefined UpdateMoby_1233(MobyInstance * moby)
// callers(0): 
// callees(14): 00057820 collproc::CollLine; 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 0010581c mobyutil::SetCollDamIn; 0010675c mobyutil::MB_damage; 0010e030 mobyutil::MB_genericExplosion; 00128248 partupd::SpawnPart_27; 0012e3e8 partupd::SpawnPart_44; 0012f490 partupd::SpawnPart_51; 00500608 fastfunc::FastVecNormalize; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Moby 1233 */

void mobyupdate_unsorted::UpdateMoby_1233(MobyInstance *moby)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  MobyInstance *pMVar4;
  f32 fVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  MobyModeBit MVar14;
  int iVar12;
  char cVar15;
  int iVar13;
  longlong lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined4 local_120 [4];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 auStack_d0 [64];
  
  lVar11 = (longlong)(int)moby;
  pfVar1 = (float *)moby->pVar;
  if (moby->state == '\x01') {
    fVar2 = pfVar1[8];
    if ((((fVar2 == 0.0) || (*(short *)((int)fVar2 + 0xa6) != 0x65)) ||
        (*(char *)((int)fVar2 + 0x20) == -2)) || (*(char *)((int)fVar2 + 0x20) == -3)) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
    (moby->rotation).x = *(f32 *)((int)fVar2 + 0x40);
    fVar3 = pfVar1[8];
    (moby->rotation).y = *(f32 *)((int)fVar2 + 0x44);
    (moby->rotation).z = *(f32 *)((int)fVar2 + 0x48);
    (moby->rotation).w = *(f32 *)((int)fVar2 + 0x4c);
    puVar7 = (undefined4 *)((int)fVar3 + 0xc0U & 0xfffffff0);
    uVar30 = puVar7[2];
    uVar29 = puVar7[1];
    uVar28 = *puVar7;
    puVar8 = (undefined4 *)((int)fVar3 + 0xd0U & 0xfffffff0);
    uVar34 = puVar8[3];
    uVar33 = puVar8[2];
    uVar32 = puVar8[1];
    uVar31 = *puVar8;
    puVar8 = (undefined4 *)((int)fVar3 + 0xe0U & 0xfffffff0);
    uVar38 = puVar8[3];
    uVar37 = puVar8[2];
    uVar36 = puVar8[1];
    uVar35 = *puVar8;
    puVar8 = (undefined4 *)((uint)&moby->transform & 0xfffffff0);
    puVar8[3] = puVar7[3];
    puVar8[2] = uVar30;
    puVar8[1] = uVar29;
    *puVar8 = uVar28;
    puVar7 = (undefined4 *)((uint)&(moby->transform).v1 & 0xfffffff0);
    puVar7[3] = uVar34;
    puVar7[2] = uVar33;
    puVar7[1] = uVar32;
    *puVar7 = uVar31;
    puVar7 = (undefined4 *)((uint)&(moby->transform).v2 & 0xfffffff0);
    puVar7[3] = uVar38;
    puVar7[2] = uVar37;
    puVar7[1] = uVar36;
    *puVar7 = uVar35;
    mobyfunc::GetBonePosition(pfVar1[8],*(undefined2 *)((int)pfVar1 + 0x26),lVar11 + 0x10);
    pfVar1[4] = (moby->pos).x;
    pfVar1[5] = (moby->pos).y;
    pfVar1[6] = (moby->pos).z;
    MVar14 = moby->modeBits;
    pfVar1[7] = (moby->pos).w;
    fVar2 = pfVar1[8];
    if (((fVar2 == 0.0) ||
        (*(char *)((int)fVar2 + 0x20) == -3 || *(char *)((int)fVar2 + 0x20) == -2)) ||
       ((*(ushort *)((int)fVar2 + 0x34) & 1) == 0)) {
      MVar14 = MVar14 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                         DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|
                         HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
    }
    else {
      MVar14 = MVar14 | DISABLED;
    }
    moby->modeBits = MVar14;
  }
  else {
    iVar13 = mobyutil::MB_damage(lVar11,0x230000,0);
    if (((iVar13 != 0) && (*(int *)(iVar13 + 0x20) != 0)) &&
       (*(short *)(*(int *)(iVar13 + 0x20) + 0xa6) == 0x1df)) {
      mobyutil::MB_genericExplosion
                (0,0,0,0,0,0x3ff0000000000000,0,lVar11,local_e0,lVar11 + 0x10,&DAT_00216c14,0,5,1,5)
      ;
      mobyfunc::DeleteMoby(moby);
      return;
    }
    iVar13 = 0;
    (moby->pos).x = (moby->pos).x + *pfVar1;
    (moby->pos).y = (moby->pos).y + pfVar1[1];
    (moby->pos).z = (moby->pos).z + pfVar1[2];
    dVar22 = 25000.0;
    dVar20 = 35000.0;
    dVar27 = 15.5;
    uVar19 = 0x407f400000000000;
    dVar26 = 1.0;
    uVar18 = 0xbf3a36e2e0000000;
    uVar25 = 0;
    dVar24 = 4.0;
    do {
      fastfunc::FastIntToDouble(iVar13);
      uVar17 = mobyutil::MB_randRangeFloat((float)dVar22,(float)dVar20);
      iVar12 = partupd::SpawnPart_44
                         (uVar17,uVar19,dVar26,uVar18,uVar25,local_160,&DAT_00a15d30,
                          (int)((double)animationSpeed * dVar27),0x60,0x4040ff,3);
      if (iVar12 != 0) {
        cVar15 = fastfunc::FastDoubleToInt(dVar24);
        *(char *)(iVar12 + 9) = cVar15 + -0x80;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < 4);
    mobyutil::SetCollDamIn(dVar26,auStack_d0,lVar11,0x10001,0x3f800000,local_150);
    fVar2 = (moby->pos).y - pfVar1[5];
    fVar9 = (moby->pos).x - pfVar1[4];
    fVar3 = *(float *)((int)pfVar1[0xb] + 0x14) - pfVar1[5];
    fVar10 = *(float *)((int)pfVar1[0xb] + 0x10) - pfVar1[4];
    fVar2 = SQRT(fVar9 * fVar9 + fVar2 * fVar2);
    if ((pfVar1[10] < fVar2) || (SQRT(fVar10 * fVar10 + fVar3 * fVar3) < fVar2)) {
      if (moby->enabled != '\0') {
        iVar13 = 0;
        dVar22 = -1.0;
        dVar20 = 2.0;
        do {
          mobyutil::MB_randRangeFloat((float)dVar22,(float)dVar26);
          mobyutil::MB_randRangeFloat((float)dVar22,(float)dVar26);
          mobyutil::MB_randRangeFloat((float)dVar22,(float)dVar26);
          mobyutil::MB_randRangeFloat
                    ((float)((double)mobyutil::g_FrameTime * dVar20),
                     (float)((double)mobyutil::g_FrameTime * dVar24));
          partupd::SpawnPart_51(lVar11 + 0x10,local_140);
          iVar13 = iVar13 + 1;
        } while (iVar13 < 3);
      }
      mobyutil::MB_genericExplosion
                (0x4000000000000000,dVar26,dVar24,0x4008000000000000,dVar26,0x4000000000000000,
                 0x4034000000000000,lVar11,local_f0,lVar11 + 0x10,0xffffffffffffffff,1,0xc,4,0x12);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    lVar16 = lVar11 + 0x10;
    iVar13 = collproc::CollLine(local_170,lVar16,
                                (ulonglong)(LZCOUNT((uint)*(ushort *)(pfVar1 + 9)) << 0x20) >> 0x25,
                                lVar11,auStack_d0);
    pMVar4 = CollOutput.pMoby;
    cVar15 = moby->enabled;
    if ((iVar13 != 0) &&
       ((CollOutput.pMoby == (MobyInstance *)0x0 || (CollOutput.pMoby != (MobyInstance *)pfVar1[8]))
       )) {
      (moby->pos).x = CollOutput.ip.x;
      (moby->pos).y = CollOutput.ip.y;
      (moby->pos).z = CollOutput.ip.z;
      (moby->pos).w = CollOutput.ip.w;
      if (cVar15 != '\0') {
        iVar13 = 0;
        dVar23 = -1.0;
        dVar21 = 3.0;
        dVar22 = 6.0;
        dVar20 = 10.5;
        uVar18 = 0x40dd4c0000000000;
        do {
          mobyutil::MB_randRangeFloat((float)dVar23,(float)dVar26);
          mobyutil::MB_randRangeFloat((float)dVar23,(float)dVar26);
          mobyutil::MB_randRangeFloat((float)dVar23,(float)dVar26);
          fastfunc::FastVecNormalize(local_120,pfVar1,0xa10980);
          mobyutil::MB_randRangeFloat
                    ((float)((double)mobyutil::g_FrameTime * dVar21),
                     (float)((double)mobyutil::g_FrameTime * dVar22));
          uVar19 = mobyutil::MB_randRange
                             ((int)((double)animationSpeed * dVar20),
                              (int)((double)animationSpeed * dVar27));
          partupd::SpawnPart_27(uVar18,lVar16,local_130,0x7f2f4f6f,uVar19);
          iVar13 = iVar13 + 1;
          pMVar4 = CollOutput.pMoby;
        } while (iVar13 < 5);
      }
      if ((pMVar4 == (MobyInstance *)0x0) || (pMVar4->oClass != DRONE)) {
        mobyutil::MB_genericExplosion
                  (0x4000000000000000,dVar26,dVar24,0x4008000000000000,dVar26,0x4000000000000000,
                   0x4034000000000000,lVar11,local_110,lVar16,1,0xffffffffffffffff,0xc,4,0x12);
      }
      else {
        mobyutil::MB_genericExplosion
                  (uVar25,uVar25,uVar25,uVar25,uVar25,dVar26,uVar25,lVar11,local_100,lVar16,1,
                   0xffffffffffffffff,5,1,5);
      }
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  fVar5 = (moby->pos).x;
  uVar6 = (int)fVar5 >> 0x1f;
  iVar13 = (uVar6 >> 1 ^ (uint)fVar5) - uVar6;
  if (((iVar13 < 0x40000000) || (0x447f4000 < iVar13)) ||
     ((fVar5 = (moby->pos).y, uVar6 = (int)fVar5 >> 0x1f,
      iVar13 = (uVar6 >> 1 ^ (uint)fVar5) - uVar6, 0x447f4000 < iVar13 || iVar13 < 0x40000000 ||
      ((fVar5 = (moby->pos).z, uVar6 = (int)fVar5 >> 0x1f,
       iVar13 = (uVar6 >> 1 ^ (uint)fVar5) - uVar6, iVar13 < 0x40000000 || (0x447f4000 < iVar13)))))
     ) {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 00217798  ns=mobyupdate_helpers  size=0x70
// sig: undefined M1234_00217798(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1234_00217798(int param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined8 in_r0;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x78) + 0xd4);
  if (iVar1 != -1) {
    pvVar2 = MobyInstance[iVar1].pVar;
    if (*(int *)((int)pvVar2 + 0xe8) == 0) {
      auVar4 = ZEXT416(0xffffffff);
      auVar4 = auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60;
      auVar5 = vectorShiftLeftIntegerWord(auVar4,auVar4);
      auVar4 = loadVectorLeftIndexed(in_r0,0x217790);
      auVar6 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar4 = auVar4 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar4 = vectorMultiplyAddFloatingPoint
                         (auVar6,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,auVar5);
      auVar4 = vectorConvertToSignedFixedPointWordSaturate(auVar4,0);
      auVar4 = auVar4 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar3 = storeVectorElementWordIndexed
                        (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,0xe8,
                         ZEXT48(pvVar2));
      *(undefined4 *)((int)pvVar2 + 0xe8U & 0xfffffffc) = uVar3;
    }
  }
  return;
}



//==== 00217820  ns=mobyupdate_helpers  size=0x270
// sig: undefined M1234_00217820(void)
// callers(1): 00217af8 mobyupdate_unsorted::UpdateMoby_1234
// callees(5): 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00111ba0 mobyutil::MB_getTargetInArea

void mobyupdate_helpers::M1234_00217820(MobyInstance *param_1)

{
  void *pvVar1;
  Spline *pSVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  double dVar8;
  int local_20;
  float local_1c;
  
  pvVar1 = param_1->pVar;
  uVar7 = ZEXT48(pvVar1);
  if (param_1->state == '\0') {
    return;
  }
  param_1->scale = param_1->pClass->gScale * DAT_00768708;
  dVar8 = 0.0;
  local_1c = 0.0;
  uVar5 = mobyutil::MB_damage(param_1,0x330000,0);
  iVar6 = mobyutil::MB_HandleDamage(param_1,uVar5,uVar7 + 0x20,0,&local_20,&local_1c,0,4);
  if (local_20 == 1) goto LAB_00217940;
  fVar3 = *(float *)((int)pvVar1 + 0x20) - local_1c;
  *(float *)((int)pvVar1 + 0x20) = fVar3;
  if ((double)fVar3 <= dVar8) {
LAB_00217920:
    param_1->state = '\x06';
    *(undefined1 *)((int)pvVar1 + 0x67) = 0xf0;
  }
  else if (iVar6 < 3) {
    if ((-1 < iVar6) && (0 < iVar6)) goto LAB_00217920;
  }
  else if (iVar6 < 0xb) {
    if (iVar6 < 9) {
      *(undefined1 *)((int)pvVar1 + 0x67) = 0x78;
    }
    else {
      *(undefined1 *)((int)pvVar1 + 0x67) = 0xfa;
    }
  }
  mobyutil::MB_UpdateLightsTransition(param_1,uVar7 + 0x60);
LAB_00217940:
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar7 + 0x60);
  if (*(int *)((int)pvVar1 + 0xdc) == 0) {
    if (param_1->state == '\x01') {
      uVar5 = 0x40c00000;
    }
    else {
      uVar5 = 0x41a00000;
      if (param_1->state == '\x02') {
        uVar5 = 0x41000000;
      }
    }
  }
  else {
    uVar5 = 0x42200000;
  }
  *(undefined4 *)((int)pvVar1 + 0xe0) = uVar5;
  pSVar2 = Splines[*(int *)((int)pvVar1 + 0xd0)];
  iVar6 = mobyutil::MB_getTargetInArea(param_1,uVar7 + 0x70,pSVar2,0,0,pSVar2->points,pSVar2->cnt);
  if ((iVar6 != 2) &&
     ((fVar3 = (param_1->pos).y - *(float *)((int)pvVar1 + 0x74),
      fVar4 = (param_1->pos).x - *(float *)((int)pvVar1 + 0x70),
      *(float *)((int)pvVar1 + 0xe0) < SQRT(fVar4 * fVar4 + fVar3 * fVar3) ||
      (4.0 < ABS((param_1->pos).z - *(float *)((int)pvVar1 + 0x78)))))) {
    *(undefined4 *)((int)pvVar1 + 0xb4) = 2;
  }
  if (*(int *)((int)pvVar1 + 0xb0) == 0) {
    *(MobyInstance **)((int)pvVar1 + 0xb0) = g_heroMobyPtr;
  }
  return;
}



//==== 00217af8  ns=mobyupdate_unsorted  size=0x990
// sig: undefined UpdateMoby_1234(MobyInstance * moby)
// callers(0): 
// callees(8): 000efb38 mobyfunc::DeleteMoby; 001009b0 mobyutil::MB_MoveAndCollide; 0010a2e0 mobyutil::OrganicDeltAng; 0010e030 mobyutil::MB_genericExplosion; 00217820 mobyupdate_helpers::M1234_00217820; 0021a098 FUN_0021a098; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot

/* Moby 1234 */

double mobyupdate_unsorted::UpdateMoby_1234(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  f32 fVar4;
  f32 fVar5;
  float fVar6;
  float fVar7;
  MobyModeBit MVar8;
  void *pvVar9;
  undefined4 uVar10;
  ulonglong *puVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  float *pfVar24;
  longlong lVar25;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar26;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double extraout_f1;
  double extraout_f1_00;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f31;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  
  lVar19 = (longlong)(int)moby;
  uVar18 = ZEXT48(&stack0x00000000);
  lVar22 = uVar18 - 0x180;
  puVar11 = (ulonglong *)lVar22;
  *puVar11 = uVar18;
  puVar11[0x32] = in_LR;
  puVar11[0x2f] = in_f31;
  puVar11[0x2e] = unaff_r31;
  puVar11[0x2c] = unaff_r29;
  puVar11[0x2d] = unaff_r30;
  puVar11[0x2b] = unaff_r28;
  pvVar9 = moby->pVar;
  uVar26 = ZEXT48(pvVar9);
  dVar28 = (double)mobyupdate_helpers::M1234_00217820();
  uVar1 = moby->state;
  iVar20 = *(int *)((int)pvVar9 + 0xb0);
  if (uVar1 == '\x06') {
    *(undefined4 *)((int)puVar11 + 0xfc) = 0;
    *(undefined4 *)(puVar11 + 0x1f) = 0;
    *(undefined4 *)((int)puVar11 + 0xf4) = 0;
    *(undefined4 *)(puVar11 + 0x1e) = 0;
    puVar11[0x12] = 0xffffffffffffffff;
    puVar11[0x14] = 1;
    puVar11[0x15] = 1;
    puVar11[0x16] = 0xffffffffffffffff;
    puVar11[0x17] = 0;
    mobyutil::MB_genericExplosion
              (0,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,0x3ff0000000000000,
               0x402e000000000000,lVar19,uVar18 - 0x90,lVar19 + 0x10,&DAT_00217a90,0,10,3,0x10);
    dVar28 = (double)mobyfunc::DeleteMoby(moby);
  }
  else if (uVar1 == '\x05') {
    if (*(int *)((int)pvVar9 + 0xb4) != 2) {
      moby->state = '\x04';
    }
  }
  else if (uVar1 == '\x04') {
    dVar29 = (double)fastfunc::FastWrapRot
                               (*(float *)((int)pvVar9 + 0xf0),mobyutil::g_FrameTime * 3.1415927);
    *(float *)((int)pvVar9 + 0xf0) = (float)dVar29;
    fVar37 = *(float *)(iVar20 + 0x10) - (moby->pos).x;
    fVar2 = *(float *)(iVar20 + 0x14) - (moby->pos).y;
    fVar3 = ABS(fVar37);
    fVar7 = ABS(fVar2);
    dVar28 = (double)(float)(3.141592502593994 - dVar29);
    if (dVar29 - (double)(float)(3.141592502593994 - dVar29) < 0.0) {
      dVar28 = dVar29;
    }
    dVar33 = (double)(float)(-3.141592502593994 - dVar29);
    if ((double)(float)(-3.141592502593994 - dVar29) - dVar28 < 0.0) {
      dVar33 = dVar28;
    }
    *(float *)(puVar11 + 0x20) = fVar37;
    *(float *)((int)puVar11 + 0x104) = fVar2;
    *(float *)(puVar11 + 0x21) = fVar3 - fVar7;
    dVar29 = 0.0;
    dVar28 = (double)(float)(dVar33 * dVar33);
    uVar26 = (ulonglong)(*(uint *)(puVar11 + 0x20) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x21) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0x104) >> 0x1d) & 4;
    dVar32 = (double)(float)(dVar28 * (double)(float)(dVar28 * dVar33));
    dVar31 = (double)(float)(dVar28 * dVar32);
    fVar37 = ABS(*(float *)(puVar11 + 0x20));
    if (*(float *)(puVar11 + 0x21) - 0.0 < 0.0) {
      fVar37 = fVar7;
    }
    fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
    fVar2 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
    fVar6 = ABS(*(float *)((int)puVar11 + 0x104));
    if (*(float *)(puVar11 + 0x21) - 0.0 < 0.0) {
      fVar6 = fVar3;
    }
    dVar30 = dVar29;
    if (0.0 < fVar37) {
      lVar21 = uVar18 - 0x170;
      lVar25 = uVar18 - 0x58;
      lVar23 = uVar18 - 0x68;
      lVar27 = 2;
      fVar37 = (fVar6 - fVar37) / (fVar6 + fVar37);
      fVar3 = fVar37 * fVar37;
      *(float *)((int)puVar11 + 0x124) = fVar37;
      *(float *)((int)puVar11 + 0x11c) = fVar37;
      *(float *)(puVar11 + 0x24) = fVar37;
      *(float *)(puVar11 + 0x23) = fVar37;
      fVar37 = fVar3 * fVar3;
      *(float *)((int)puVar11 + 0x11c) = *(float *)((int)puVar11 + 0x11c) * fVar3;
      *(float *)(puVar11 + 0x24) = *(float *)(puVar11 + 0x24) * fVar37;
      *(float *)((int)puVar11 + 0x124) = *(float *)((int)puVar11 + 0x124) * fVar37 * fVar3;
      do {
        *(float *)((int)lVar21 + 0x118) = *(float *)((int)lVar21 + 0x108) * fVar37 * fVar37;
        iVar20 = (int)lVar23;
        lVar23 = lVar23 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar37 * fVar37;
        lVar25 = lVar25 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar25 = uVar18 - 0x68;
      pfVar24 = (float *)&DAT_007358e0;
      lVar21 = lVar22;
      lVar23 = lVar25;
      do {
        fVar37 = *pfVar24;
        fVar3 = pfVar24[1];
        pfVar24 = pfVar24 + 2;
        *(float *)((int)lVar21 + 0x118) = *(float *)((int)lVar21 + 0x118) * fVar37;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar3;
        lVar23 = lVar23 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar21 = 2;
      do {
        iVar20 = (int)lVar22;
        iVar12 = (int)lVar25;
        lVar22 = lVar22 + 0x10;
        lVar25 = lVar25 + 0x10;
        dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar20 + 0x118)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar7 + fVar2);
    }
    dVar28 = (double)fastfunc::FastWrapRot
                               (((float)(dVar28 * dVar31) * 2.601887e-06 +
                                (float)(dVar31 * -0.0001980741071747616 +
                                       (double)(float)(dVar32 * 0.008333025500178337 +
                                                      (double)(float)((double)(float)(dVar28 * 
                                                  dVar33) * -0.16666656732559204 + dVar33)))) *
                                0.17453292,(float)dVar30);
    fVar37 = mobyutil::OrganicDeltAng
                       ((float)dVar28,DAT_0071f418 * 12.566371,DAT_0071f418 * 25.132742,
                        mobyutil::g_FrameTime * 6.2831855,&(moby->rotation).z,0x217a90,
                        (float *)((int)pvVar9 + 0xe4));
    dVar28 = (double)fVar37;
    if (worldUpdateTime == (worldUpdateTime / DAT_00768710) * DAT_00768710) {
      fVar37 = (moby->transform).v0.y;
      fVar2 = (moby->transform).v0.x;
      fVar7 = (moby->transform).v0.z;
      fVar4 = (moby->pos).y;
      *(f32 *)(puVar11 + 0x1a) = (moby->pos).x;
      fVar5 = (moby->pos).w;
      *(f32 *)((int)puVar11 + 0xd4) = fVar4;
      *(f32 *)((int)puVar11 + 0xdc) = fVar5;
      fVar3 = DAT_00768714 * mobyutil::g_FrameTime;
      dVar28 = (double)SQRT(fVar7 * fVar7 + fVar2 * fVar2 + fVar37 * fVar37);
      *(float *)(puVar11 + 0x1b) = (moby->pos).z - 0.5;
      if (dVar28 == dVar29) {
        fVar6 = (moby->transform).v0.w;
        dVar28 = dVar29;
        dVar33 = dVar29;
      }
      else {
        fVar3 = (float)((double)fVar3 / dVar28);
        fVar6 = (moby->transform).v0.w;
        dVar28 = (double)(fVar2 * fVar3);
        dVar29 = (double)(fVar37 * fVar3);
        dVar33 = (double)(fVar7 * fVar3);
      }
      *(float *)(puVar11 + 0x1c) = (float)dVar28;
      *(float *)((int)puVar11 + 0xe4) = (float)dVar29;
      *(float *)(puVar11 + 0x1d) = (float)dVar33;
      *(float *)((int)puVar11 + 0xec) = fVar6;
      *(float *)(puVar11 + 0x1d) = -0.5 / (8.0 / (DAT_00768714 * mobyutil::g_FrameTime));
      dVar28 = (double)FUN_0021a098(uVar18 - 0xb0,uVar18 - 0xa0,lVar19);
    }
    if (*(int *)((int)pvVar9 + 0xb4) == 2) {
      moby->state = '\x05';
    }
  }
  else if (uVar1 == '\x03') {
    (moby->pos).z = mobyutil::g_FrameTime * 0.5 + (moby->pos).z;
    dVar29 = 6.2831854820251465;
    dVar28 = (double)fastfunc::FastWrapRot((moby->rotation).z,mobyutil::g_FrameTime * 6.2831855);
    (moby->rotation).z = (float)dVar28;
    *(float *)((int)pvVar9 + 0xe4) = (float)((double)mobyutil::g_FrameTime * dVar29);
    iVar20 = fastfunc::FastDecTimerS32(uVar26 + 0xec);
    dVar28 = extraout_f1_00;
    if (iVar20 != 0) {
      moby->state = '\x04';
    }
  }
  else if (uVar1 == '\x02') {
    fVar37 = *(float *)((int)pvVar9 + 0xc0) - (moby->pos).x;
    fVar2 = *(float *)((int)pvVar9 + 0xc4) - (moby->pos).y;
    fVar3 = ABS(fVar37);
    fVar7 = ABS(fVar2);
    *(float *)((int)puVar11 + 0x10c) = fVar37;
    *(float *)(puVar11 + 0x22) = fVar2;
    *(float *)((int)puVar11 + 0x114) = fVar3 - fVar7;
    dVar28 = 0.0;
    uVar26 = (ulonglong)(*(uint *)((int)puVar11 + 0x10c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar11 + 0x114) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar11 + 0x22) >> 0x1d) & 4;
    fVar37 = ABS(*(float *)((int)puVar11 + 0x10c));
    if (*(float *)((int)puVar11 + 0x114) - 0.0 < 0.0) {
      fVar37 = fVar7;
    }
    fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
    fVar2 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
    fVar6 = ABS(*(float *)(puVar11 + 0x22));
    if (*(float *)((int)puVar11 + 0x114) - 0.0 < 0.0) {
      fVar6 = fVar3;
    }
    dVar29 = dVar28;
    if (0.0 < fVar37) {
      lVar21 = uVar18 - 0x170;
      lVar23 = uVar18 - 0x48;
      lVar25 = uVar18 - 0x38;
      lVar27 = 2;
      fVar37 = (fVar6 - fVar37) / (fVar6 + fVar37);
      fVar3 = fVar37 * fVar37;
      *(float *)((int)puVar11 + 0x144) = fVar37;
      *(float *)((int)puVar11 + 0x13c) = fVar37;
      *(float *)(puVar11 + 0x28) = fVar37;
      *(float *)(puVar11 + 0x27) = fVar37;
      fVar37 = fVar3 * fVar3;
      *(float *)((int)puVar11 + 0x13c) = *(float *)((int)puVar11 + 0x13c) * fVar3;
      *(float *)(puVar11 + 0x28) = *(float *)(puVar11 + 0x28) * fVar37;
      *(float *)((int)puVar11 + 0x144) = *(float *)((int)puVar11 + 0x144) * fVar37 * fVar3;
      do {
        *(float *)((int)lVar21 + 0x138) = *(float *)((int)lVar21 + 0x128) * fVar37 * fVar37;
        iVar20 = (int)lVar23;
        lVar21 = lVar21 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar37 * fVar37;
        lVar25 = lVar25 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar25 = uVar18 - 0x48;
      pfVar24 = (float *)&DAT_007358e0;
      lVar21 = lVar22;
      lVar23 = lVar25;
      do {
        fVar37 = *pfVar24;
        fVar3 = pfVar24[1];
        pfVar24 = pfVar24 + 2;
        *(float *)((int)lVar21 + 0x138) = *(float *)((int)lVar21 + 0x138) * fVar37;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar3;
        lVar23 = lVar23 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar21 = 2;
      do {
        iVar20 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        iVar12 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar20 + 0x138)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar7 + fVar2);
    }
    mobyutil::OrganicDeltAng
              ((float)dVar29,DAT_0071f418 * 4.712389,DAT_0071f418 * 4.712389,
               mobyutil::g_FrameTime * 10.12291,&(moby->rotation).z,0x720000,
               (float *)((int)pvVar9 + 0xe4));
    fVar37 = (moby->rotation).z;
    fVar2 = fVar37 + 1.5707963;
    fVar7 = 3.1415925 - fVar37;
    if (fVar37 - (3.1415925 - fVar37) < 0.0) {
      fVar7 = fVar37;
    }
    fVar3 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar3 = fVar2;
    }
    fVar6 = -3.1415925 - fVar37;
    if ((-3.1415925 - fVar37) - fVar7 < 0.0) {
      fVar6 = fVar7;
    }
    fVar37 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
      fVar37 = fVar3;
    }
    fVar2 = fVar6 * fVar6;
    fVar7 = fVar37 * fVar37;
    fVar14 = fVar2 * fVar2 * fVar6;
    fVar3 = fVar7 * fVar7 * fVar37;
    fVar15 = fVar2 * fVar14;
    fVar16 = DAT_0076870c * mobyutil::g_FrameTime;
    fVar17 = DAT_0076870c * mobyutil::g_FrameTime;
    *(undefined4 *)(puVar11 + 0x19) = 0;
    fVar13 = fVar7 * fVar3;
    *(float *)((int)puVar11 + 0xc4) =
         fVar17 * (fVar2 * fVar15 * 2.601887e-06 +
                  fVar15 * -0.0001980741 +
                  fVar14 * 0.0083330255 + fVar2 * fVar6 * -0.16666657 + fVar6);
    *(float *)(puVar11 + 0x18) =
         fVar16 * (fVar7 * fVar13 * 2.601887e-06 +
                  fVar13 * -0.0001980741 +
                  fVar3 * 0.0083330255 + fVar7 * fVar37 * -0.16666657 + fVar37);
    dVar28 = (double)mobyutil::MB_MoveAndCollide
                               (dVar28,0x3fe0000000000000,dVar28,lVar19,uVar18 - 0xc0);
    if (*(int *)((int)pvVar9 + 0xb4) != 2) {
      moby->state = '\x04';
    }
  }
  else if (uVar1 == '\x01') {
    if ((*(int *)((int)pvVar9 + 0xb4) != 2) ||
       (iVar20 = fastfunc::FastDecTimerS32(uVar26 + 0xe8), dVar28 = extraout_f1, iVar20 == 2)) {
      auVar35 = ZEXT416(0xffffffff);
      auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
      auVar35 = loadVectorLeftIndexed(0x34,0x217a90);
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar34 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar35,auVar34,auVar36);
      auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar10 = storeVectorElementWordIndexed
                         (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0xec,uVar26)
      ;
      *(undefined4 *)((int)pvVar9 + 0xecU & 0xfffffffc) = uVar10;
      moby->state = '\x03';
      iVar20 = *(int *)((int)moby->pVar + 0xd4);
      if (iVar20 != -1) {
        pvVar9 = MobyInstance[iVar20].pVar;
        if (*(int *)((int)pvVar9 + 0xe8) == 0) {
          auVar35 = ZEXT416(0xffffffff);
          auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
          auVar35 = vectorShiftLeftIntegerWord(auVar35,auVar35);
          auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar35 = vectorMultiplyAddFloatingPoint(auVar36,auVar34,auVar35);
          auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
          auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar10 = storeVectorElementWordIndexed
                             (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0xe8,
                              ZEXT48(pvVar9));
          *(undefined4 *)((int)pvVar9 + 0xe8U & 0xfffffffc) = uVar10;
        }
      }
    }
  }
  else if (uVar1 == '\0') {
    *(f32 *)((int)pvVar9 + 0xc0) = (moby->pos).x;
    MVar8 = moby->modeBits;
    *(f32 *)((int)pvVar9 + 0xc4) = (moby->pos).y;
    *(f32 *)((int)pvVar9 + 200) = (moby->pos).z;
    fVar37 = (moby->pos).w;
    dVar28 = (double)fVar37;
    *(undefined4 *)((int)pvVar9 + 0x20) = 0x40000000;
    *(float *)((int)pvVar9 + 0xcc) = fVar37;
    moby->modeBits = MVar8 | (CAN_BE_DAMAGED|CAN_BE_AUTO_TARGETED);
    *(undefined2 *)((int)pvVar9 + 0x24) = 2;
    *(undefined1 *)((int)pvVar9 + 0x28) = 1;
    if (*(int *)((int)pvVar9 + 0xd8) == 0) {
      moby->state = '\x01';
    }
    else {
      fVar37 = (moby->pos).z;
      moby->state = '\x02';
      fVar37 = fVar37 + 1.0;
      dVar28 = (double)fVar37;
      (moby->pos).z = fVar37;
    }
  }
  return dVar28;
}



//==== 00218488  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1235_00218488(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1235_00218488(void)

{
  DAT_00768764 = 0x10000;
  return;
}



//==== 002184d8  ns=mobyupdate_helpers  size=0x468
// sig: undefined M1235_002184d8(void)
// callers(1): 00218d78 mobyupdate_unsorted::UpdateMoby_1235
// callees(5): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 0015d12c sound::PlayMobySound; 0021a098 FUN_0021a098; 00502578 fastfunc::FastWrapRot

MobyInstance * mobyupdate_helpers::M1235_002184d8(MobyInstance *param_1)

{
  void *pvVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  undefined1 local_40 [16];
  undefined1 local_30 [24];
  
  pvVar1 = param_1->pVar;
  if (worldUpdateTime == (worldUpdateTime / DAT_0076879c) * DAT_0076879c) {
    mobyutil::MB_randInt(3);
    iVar2 = *(int *)((int)pvVar1 + 0xb0);
    fVar3 = (param_1->pos).y - *(float *)(iVar2 + 0x14);
    fVar4 = (param_1->pos).x - *(float *)(iVar2 + 0x10);
    fVar3 = (20.0 - SQRT(fVar4 * fVar4 + fVar3 * fVar3)) * 0.05;
    dVar5 = (double)mobyutil::MB_randRangeFloat(-(fVar3 * 5.0 + 2.5),fVar3 * 5.0 + 2.5);
    fastfunc::FastWrapRot((float)(dVar5 * 0.01745329238474369),(param_1->rotation).z);
    FUN_0021a098((double)*(float *)((int)pvVar1 + 0xd8),local_40,local_30,param_1);
    param_1 = (MobyInstance *)sound::PlayMobySound(0,0,param_1);
  }
  return param_1;
}



//==== 00218958  ns=mobyupdate_helpers  size=0x3f0
// sig: undefined M1235_00218958(void)
// callers(1): 00218d78 mobyupdate_unsorted::UpdateMoby_1235
// callees(7): 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 001118d8 mobyutil::MB_getTarget; 005026a0 fastfunc::FastSubRots

void mobyupdate_helpers::M1235_00218958(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  MOBY_OCLASSES MVar5;
  MobyModeBit MVar6;
  void *pvVar7;
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
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar12 = uVar11 - 0xd0;
  puVar8 = (ulonglong *)lVar12;
  *puVar8 = uVar11;
  puVar8[0x1c] = in_LR;
  puVar8[0x19] = in_f31;
  puVar8[0x18] = unaff_r31;
  puVar8[0x17] = unaff_r30;
  pvVar7 = param_1->pVar;
  uVar19 = ZEXT48(pvVar7);
  dVar24 = 0.0;
  puVar8[0x16] = unaff_r29;
  *(undefined4 *)((int)puVar8 + 0x74) = 0;
  iVar13 = mobyutil::MB_damage(param_1,0x330000,0);
  if (iVar13 != 0) {
    if ((*(int *)(iVar13 + 0x20) == 0) ||
       ((MVar5 = *(MOBY_OCLASSES *)(*(int *)(iVar13 + 0x20) + 0xa6), MVar5 != param_1->oClass &&
        (MVar5 != 0x4d6)))) {
      fVar4 = *(float *)(*(int *)(iVar13 + 0x20) + 0x10) - (param_1->pos).x;
      fVar1 = *(float *)(*(int *)(iVar13 + 0x20) + 0x14) - (param_1->pos).y;
      dVar23 = ABS((double)fVar4);
      dVar22 = ABS((double)fVar1);
      *(float *)(puVar8 + 0xf) = fVar4;
      *(float *)((int)puVar8 + 0x7c) = fVar1;
      *(float *)(puVar8 + 0x10) = (float)(dVar23 - dVar22);
      uVar15 = (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar8 + 0x7c) >> 0x1d) & 4;
      dVar21 = ABS((double)*(float *)(puVar8 + 0xf));
      if ((double)*(float *)(puVar8 + 0x10) - dVar24 < 0.0) {
        dVar21 = dVar22;
      }
      fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
      dVar22 = ABS((double)*(float *)((int)puVar8 + 0x7c));
      if ((double)*(float *)(puVar8 + 0x10) - dVar24 < 0.0) {
        dVar22 = dVar23;
      }
      fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      dVar23 = dVar24;
      if (dVar24 < dVar21) {
        lVar17 = uVar11 - 0xc0;
        lVar16 = uVar11 - 0x4c;
        lVar14 = uVar11 - 0x3c;
        lVar20 = 2;
        fVar2 = (float)(dVar22 - dVar21) / (float)(dVar22 + dVar21);
        fVar3 = fVar2 * fVar2;
        *(float *)(puVar8 + 0x12) = fVar2;
        *(float *)(puVar8 + 0x11) = fVar2;
        *(float *)((int)puVar8 + 0x8c) = fVar2;
        *(float *)((int)puVar8 + 0x84) = fVar2;
        fVar2 = fVar3 * fVar3;
        *(float *)(puVar8 + 0x11) = *(float *)(puVar8 + 0x11) * fVar3;
        *(float *)((int)puVar8 + 0x8c) = *(float *)((int)puVar8 + 0x8c) * fVar2;
        *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) * fVar2 * fVar3;
        do {
          *(float *)((int)lVar17 + 0x84) = *(float *)((int)lVar17 + 0x74) * fVar2 * fVar2;
          iVar9 = (int)lVar16;
          lVar17 = lVar17 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar14 + 4) = *(float *)(iVar9 + 4) * fVar2 * fVar2;
          lVar14 = lVar14 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar17 = uVar11 - 0x4c;
        pfVar18 = (float *)&DAT_007358e0;
        lVar20 = 4;
        lVar14 = lVar17;
        lVar16 = lVar12;
        do {
          fVar2 = *pfVar18;
          fVar3 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar16 + 0x84) = *(float *)((int)lVar16 + 0x84) * fVar2;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar3;
          lVar14 = lVar14 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar14 = 2;
        dVar21 = dVar24;
        do {
          iVar9 = (int)lVar12;
          iVar10 = (int)lVar17;
          lVar12 = lVar12 + 0x10;
          lVar17 = lVar17 + 0x10;
          dVar21 = (double)((float)(dVar21 + (double)*(float *)(iVar9 + 0x84)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        dVar23 = (double)((float)(dVar21 + 0.7853981852531433) * fVar4 + fVar1);
      }
      dVar21 = (double)fastfunc::FastSubRots((float)dVar23,*(float *)((int)pvVar7 + 0xc4));
      if (dVar21 < 1.5707963705062866) {
        iVar13 = 0;
      }
    }
    else {
      iVar13 = 0;
    }
  }
  iVar13 = mobyutil::MB_HandleDamage
                     (param_1,iVar13,uVar19 + 0x20,0,puVar8 + 0xe,(int)puVar8 + 0x74,0,4);
  if ((*(int *)(puVar8 + 0xe) == 1) || (param_1->state == '\x04')) goto LAB_00218cc0;
  MVar6 = param_1->modeBits;
  fVar4 = *(float *)((int)pvVar7 + 0x20) - *(float *)((int)puVar8 + 0x74);
  *(float *)((int)pvVar7 + 0x20) = fVar4;
  if ((double)fVar4 <= dVar24) {
LAB_00218c7c:
    param_1->state = '\x04';
    param_1->modeBits =
         MVar6 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
    *(undefined1 *)((int)pvVar7 + 0x67) = 0xf0;
    mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
  }
  else if (iVar13 < 3) {
    if ((-1 < iVar13) && (0 < iVar13)) goto LAB_00218c7c;
  }
  else if (iVar13 < 0xb) {
    if (iVar13 < 9) {
      *(undefined1 *)((int)pvVar7 + 0x67) = 200;
    }
    else {
      *(undefined1 *)((int)pvVar7 + 0x67) = 100;
    }
  }
  mobyutil::MB_UpdateLightsTransition(param_1,uVar19 + 0x60);
LAB_00218cc0:
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar19 + 0x60);
  fVar4 = 20.0;
  if (param_1->state == '\x03') {
    fVar4 = 22.0;
  }
  mobyutil::MB_getTarget((double)fVar4,param_1,param_1->state,uVar19 + 0x70);
  if (*(int *)((int)pvVar7 + 0xb0) == 0) {
    *(MobyInstance **)((int)pvVar7 + 0xb0) = g_heroMobyPtr;
  }
  return;
}



//==== 00218d78  ns=mobyupdate_unsorted  size=0x4ec
// sig: undefined UpdateMoby_1235(MobyInstance * moby)
// callers(0): 
// callees(10): 000efa28 mobyfunc::CreateMoby; 000efb38 mobyfunc::DeleteMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 00109af0 mobyutil::Delt; 0010a2e0 mobyutil::OrganicDeltAng; 0010e030 mobyutil::MB_genericExplosion; 002184d8 mobyupdate_helpers::M1235_002184d8; 00218958 mobyupdate_helpers::M1235_00218958; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

/* Moby 1235 */

double mobyupdate_unsorted::UpdateMoby_1235(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  MobyModeBit MVar6;
  void *pvVar7;
  int iVar8;
  ulonglong *puVar9;
  int iVar10;
  float fVar11;
  ulonglong uVar12;
  longlong lVar13;
  MobyInstance *pMVar15;
  longlong lVar14;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  float *pfVar20;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  
  lVar13 = (longlong)(int)moby;
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0x110;
  puVar9 = (ulonglong *)lVar14;
  *puVar9 = uVar12;
  puVar9[0x24] = in_LR;
  puVar9[0x21] = unaff_r31;
  puVar9[0x20] = unaff_r30;
  puVar9[0x1f] = unaff_r29;
  puVar9[0x1e] = unaff_r28;
  pvVar7 = moby->pVar;
  dVar22 = (double)mobyupdate_helpers::M1235_00218958();
  uVar1 = moby->state;
  iVar8 = *(int *)((int)pvVar7 + 0xb0);
  if (uVar1 == '\x04') {
    puVar9[0x12] = 0xffffffffffffffff;
    puVar9[0x14] = 1;
    puVar9[0x15] = 1;
    puVar9[0x16] = 0xffffffffffffffff;
    puVar9[0x17] = 0;
    mobyutil::MB_genericExplosion
              (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
               0x402e000000000000,lVar13,(int)pvVar7 + 0x40,lVar13 + 0x10,1,0xffffffffffffffff,5,2,4
              );
    dVar22 = (double)mobyfunc::DeleteMoby(moby);
  }
  else if (uVar1 == '\x03') {
    fVar24 = (moby->pos).y - *(float *)(iVar8 + 0x14);
    fVar3 = (moby->pos).x - *(float *)(iVar8 + 0x10);
    dVar22 = (double)SQRT(fVar3 * fVar3 + fVar24 * fVar24);
    if (dVar22 <= 22.0) {
      mobyutil::Delt(20.0,mobyutil::g_FrameTime * 6.0,(float *)((int)pvVar7 + 0xd8));
      fVar24 = *(float *)(iVar8 + 0x10) - (moby->pos).x;
      fVar3 = *(float *)(iVar8 + 0x14) - (moby->pos).y;
      fVar4 = ABS(fVar24);
      fVar2 = ABS(fVar3);
      *(float *)(puVar9 + 0x18) = fVar24;
      *(float *)((int)puVar9 + 0xc4) = fVar3;
      *(float *)(puVar9 + 0x19) = fVar4 - fVar2;
      dVar22 = 0.0;
      uVar17 = (ulonglong)(*(uint *)(puVar9 + 0x18) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x19) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0xc4) >> 0x1d) & 4;
      fVar24 = *(float *)((int)pvVar7 + 0xc4);
      fVar3 = ABS(*(float *)(puVar9 + 0x18));
      if (*(float *)(puVar9 + 0x19) - 0.0 < 0.0) {
        fVar3 = fVar2;
      }
      fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
      fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      fVar11 = ABS(*(float *)((int)puVar9 + 0xc4));
      if (*(float *)(puVar9 + 0x19) - 0.0 < 0.0) {
        fVar11 = fVar4;
      }
      if (0.0 < fVar3) {
        lVar19 = uVar12 - 0x100;
        lVar16 = uVar12 - 0x34;
        lVar18 = uVar12 - 0x44;
        lVar21 = 2;
        fVar3 = (fVar11 - fVar3) / (fVar11 + fVar3);
        fVar4 = fVar3 * fVar3;
        *(float *)(puVar9 + 0x1b) = fVar3;
        *(float *)(puVar9 + 0x1a) = fVar3;
        *(float *)((int)puVar9 + 0xd4) = fVar3;
        *(float *)((int)puVar9 + 0xcc) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)(puVar9 + 0x1a) = *(float *)(puVar9 + 0x1a) * fVar4;
        *(float *)((int)puVar9 + 0xd4) = *(float *)((int)puVar9 + 0xd4) * fVar3;
        *(float *)(puVar9 + 0x1b) = *(float *)(puVar9 + 0x1b) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar19 + 0xcc) = *(float *)((int)lVar19 + 0xbc) * fVar3 * fVar3;
          iVar8 = (int)lVar18;
          lVar18 = lVar18 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)(iVar8 + 4) * fVar3 * fVar3;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar19 = uVar12 - 0x44;
        lVar21 = 4;
        pfVar20 = (float *)&DAT_007358e0;
        lVar16 = lVar19;
        lVar18 = lVar14;
        do {
          fVar3 = *pfVar20;
          fVar4 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar18 + 0xcc) = *(float *)((int)lVar18 + 0xcc) * fVar3;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar16 = 2;
        do {
          iVar8 = (int)lVar14;
          iVar10 = (int)lVar19;
          lVar14 = lVar14 + 0x10;
          lVar19 = lVar19 + 0x10;
          dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar8 + 0xcc)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar5 + fVar2);
      }
      dVar23 = (double)fastfunc::FastDiffRots(dVar22,(double)fVar24);
      dVar22 = 1.3089969158172607;
      if ((dVar23 <= 1.3089969158172607) && (dVar22 = dVar23, dVar23 < -1.3089969158172607)) {
        dVar22 = -1.3089969158172607;
      }
      dVar22 = (double)fastfunc::FastWrapRot((float)dVar22,*(float *)((int)pvVar7 + 0xc4));
      fVar24 = mobyutil::OrganicDeltAng
                         ((float)dVar22,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                          mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar7 + 0xd0));
      dVar22 = (double)mobyupdate_helpers::M1235_002184d8((double)fVar24,lVar13);
    }
    else {
      moby->state = '\x01';
    }
  }
  else if (uVar1 == '\x01') {
    fVar24 = (moby->pos).y - *(float *)(iVar8 + 0x14);
    fVar3 = (moby->pos).x - *(float *)(iVar8 + 0x10);
    if (SQRT(fVar3 * fVar3 + fVar24 * fVar24) < 20.0) {
      *(undefined4 *)((int)pvVar7 + 0xd8) = 0x41000000;
      moby->state = '\x03';
    }
    fVar24 = mobyutil::OrganicDeltAng
                       (*(float *)((int)pvVar7 + 0xc4),DAT_0071f418 * 12.566371,
                        DAT_0071f418 * 12.566371,mobyutil::g_FrameTime * 12.566371,
                        &(moby->rotation).z,0x720000,(float *)((int)pvVar7 + 0xd0));
    dVar22 = (double)fVar24;
  }
  else if (uVar1 == '\0') {
    pMVar15 = mobyfunc::CreateMoby(0x4d5);
    *(MobyInstance **)((int)pvVar7 + 0xcc) = pMVar15;
    pMVar15->drawDistance = 0x40;
    *(undefined1 *)(*(int *)((int)pvVar7 + 0xcc) + 0x31) = 1;
    *(undefined8 *)(*(int *)((int)pvVar7 + 0xcc) + 0x38) = *(undefined8 *)&moby->color;
    *(MobyModeBit *)(*(int *)((int)pvVar7 + 0xcc) + 0x34) = moby->modeBits;
    iVar8 = *(int *)((int)pvVar7 + 0xcc);
    *(f32 *)(iVar8 + 0x10) = (moby->pos).x;
    *(f32 *)(iVar8 + 0x14) = (moby->pos).y;
    *(f32 *)(iVar8 + 0x18) = (moby->pos).z;
    *(f32 *)(iVar8 + 0x1c) = (moby->pos).w;
    iVar8 = *(int *)((int)pvVar7 + 0xcc);
    *(f32 *)(iVar8 + 0x40) = (moby->rotation).x;
    *(f32 *)(iVar8 + 0x44) = (moby->rotation).y;
    *(f32 *)(iVar8 + 0x48) = (moby->rotation).z;
    *(f32 *)(iVar8 + 0x4c) = (moby->rotation).w;
    mobyfunc::UpdateMobyTransform(*(MobyInstance **)((int)pvVar7 + 0xcc));
    MVar6 = moby->modeBits;
    fVar24 = (moby->rotation).z;
    dVar22 = (double)fVar24;
    *(float *)((int)pvVar7 + 0xc4) = fVar24;
    moby->state = '\x01';
    moby->modeBits = MVar6 | (CAN_BE_DAMAGED|CAN_BE_AUTO_TARGETED);
  }
  return dVar22;
}



//==== 00219264  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1236_00219264(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1236_00219264(void)

{
  DAT_007687ec = 0x10000;
  return;
}



//==== 00219280  ns=mobyupdate_helpers  size=0xc8
// sig: undefined M1236_00219280(void)
// callers(1): 00219780 mobyupdate_unsorted::UpdateMoby_1236
// callees(0): 

void mobyupdate_helpers::M1236_00219280(int param_1,longlong param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  MobyInstance *pMVar4;
  undefined8 in_r0;
  ushort *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  auVar7 = ZEXT416(0xffffffff);
  auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
  auVar8 = vectorShiftLeftIntegerWord(auVar7,auVar7);
  auVar7 = loadVectorLeftIndexed(in_r0,0x219278);
  auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar6 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
  auVar7 = vectorMultiplyAddFloatingPoint(auVar9,auVar6,auVar8);
  auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
  auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar2 = storeVectorElementWordIndexed
                    (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,0x128,
                     (ulonglong)*(uint *)(param_1 + 0x78));
  *(undefined4 *)(*(uint *)(param_1 + 0x78) + 0x128 & 0xfffffffc) = uVar2;
  if ((int)param_2 != 0xff) {
    puVar5 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_2 << 2));
    do {
      pMVar4 = MobyInstance;
      uVar3 = *puVar5 & 0x7fff;
      if ((MobyInstance[uVar3].state == '\x01') || (MobyInstance[uVar3].state == '\x02')) {
        auVar7 = ZEXT416(0xffffffff);
        auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
        auVar8 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar7 = vectorShiftLeftIntegerWord(auVar7,auVar7);
        auVar7 = vectorMultiplyAddFloatingPoint(auVar8,auVar6,auVar7);
        auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
        auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar2 = storeVectorElementWordIndexed
                          (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,0x128,
                           ZEXT48(MobyInstance[uVar3].pVar));
        *(undefined4 *)((int)MobyInstance[uVar3].pVar + 0x128U & 0xfffffffc) = uVar2;
        pMVar4[uVar3].state = '\x03';
      }
      uVar1 = *puVar5;
      puVar5 = puVar5 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}



//==== 00219370  ns=mobyupdate_helpers  size=0x3ac
// sig: undefined M1236_00219370(void)
// callers(1): 00219780 mobyupdate_unsorted::UpdateMoby_1236
// callees(6): 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00111ba0 mobyutil::MB_getTargetInArea; 004fff60 fastfunc::FastDecTimerS32

void mobyupdate_helpers::M1236_00219370(MobyInstance *param_1)

{
  void *pvVar1;
  Spline *pSVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined8 in_LR;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int local_40;
  float local_3c;
  longlong local_38;
  
  pvVar1 = param_1->pVar;
  uVar7 = ZEXT48(pvVar1);
  if (param_1->state == '\0') {
    return;
  }
  param_1->scale = param_1->pClass->gScale * DAT_00768814;
  iVar5 = fastfunc::FastDecTimerS32(uVar7 + 0x128);
  if (iVar5 == 2) {
    param_1->state = '\x06';
    return;
  }
  dVar9 = 10.5;
  iVar5 = *(int *)((int)pvVar1 + 0x128);
  local_38 = (longlong)(int)(animationSpeed * 10.5);
  if (((((iVar5 == (int)(animationSpeed * 10.5)) ||
        (local_38 = (longlong)(int)(animationSpeed * 20.5), iVar5 == (int)(animationSpeed * 20.5)))
       || (local_38 = (longlong)(int)(animationSpeed * 40.5), iVar5 == (int)(animationSpeed * 40.5))
       ) || ((local_38 = (longlong)(int)(animationSpeed * 60.5),
             iVar5 == (int)(animationSpeed * 60.5) ||
             (local_38 = (longlong)(int)(animationSpeed * 120.5),
             iVar5 == (int)(animationSpeed * 120.5))))) ||
     (local_38 = (longlong)(int)(animationSpeed * 179.5), iVar5 == (int)(animationSpeed * 179.5))) {
    *(undefined1 *)((int)pvVar1 + 0x67) = 0xf0;
    mobyutil::MB_UpdateLightsTransition(param_1,uVar7 + 0x60);
  }
  dVar8 = 0.0;
  local_3c = 0.0;
  uVar6 = mobyutil::MB_damage(param_1,0x330000,0);
  iVar5 = mobyutil::MB_HandleDamage(param_1,uVar6,uVar7 + 0x20,0,&local_40,&local_3c,0,4);
  if (local_40 == 1) goto LAB_00219610;
  fVar3 = *(float *)((int)pvVar1 + 0x20) - local_3c;
  *(float *)((int)pvVar1 + 0x20) = fVar3;
  if ((double)fVar3 <= dVar8) {
LAB_00219590:
    auVar10 = ZEXT416(0xffffffff);
    auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    param_1->state = '\x05';
    auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
    auVar10 = loadVectorLeftIndexed(in_LR,0x219348);
    auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar10 = vectorMultiplyAddFloatingPoint
                        (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                         auVar11);
    local_38 = (longlong)(int)((double)animationSpeed * dVar9);
    auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
    if (((int)((double)animationSpeed * dVar9) < *(int *)((int)pvVar1 + 0x128)) ||
       (*(int *)((int)pvVar1 + 0x128) == 0)) {
      auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar6 = storeVectorElementWordIndexed
                        (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0x128,uVar7);
      *(undefined4 *)((int)pvVar1 + 0x128U & 0xfffffffc) = uVar6;
    }
    *(undefined1 *)((int)pvVar1 + 0x67) = 0xf0;
  }
  else if (iVar5 < 3) {
    if ((-1 < iVar5) && (0 < iVar5)) goto LAB_00219590;
  }
  else if (iVar5 < 0xb) {
    if (iVar5 < 9) {
      *(undefined1 *)((int)pvVar1 + 0x67) = 0x78;
    }
    else {
      *(undefined1 *)((int)pvVar1 + 0x67) = 0xfa;
    }
  }
  mobyutil::MB_UpdateLightsTransition(param_1,uVar7 + 0x60);
LAB_00219610:
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar7 + 0x60);
  *(undefined4 *)((int)pvVar1 + 300) = 0x41400000;
  pSVar2 = Splines[*(int *)((int)pvVar1 + 0x120)];
  iVar5 = mobyutil::MB_getTargetInArea
                    (0x4028000000000000,param_1,uVar7 + 0xc0,pSVar2,0,0,pSVar2->points,pSVar2->cnt);
  if ((iVar5 != 2) &&
     ((fVar3 = (param_1->pos).y - *(float *)((int)pvVar1 + 0xc4),
      fVar4 = (param_1->pos).x - *(float *)((int)pvVar1 + 0xc0),
      *(float *)((int)pvVar1 + 300) < SQRT(fVar4 * fVar4 + fVar3 * fVar3) ||
      (4.0 < ABS((param_1->pos).z - *(float *)((int)pvVar1 + 200)))))) {
    *(undefined4 *)((int)pvVar1 + 0x104) = 2;
  }
  if (*(int *)((int)pvVar1 + 0x100) == 0) {
    *(MobyInstance **)((int)pvVar1 + 0x100) = g_heroMobyPtr;
  }
  return;
}



//==== 00219780  ns=mobyupdate_unsorted  size=0x8f4
// sig: undefined UpdateMoby_1236(MobyInstance * moby)
// callers(0): 
// callees(7): 000efb38 mobyfunc::DeleteMoby; 000fddc0 mobyutil::MB_SetAnimation; 001009b0 mobyutil::MB_MoveAndCollide; 0010a2e0 mobyutil::OrganicDeltAng; 0010e030 mobyutil::MB_genericExplosion; 00219280 mobyupdate_helpers::M1236_00219280; 00219370 mobyupdate_helpers::M1236_00219370

/* Moby 1236 */

void mobyupdate_unsorted::UpdateMoby_1236(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  float *pfVar24;
  longlong lVar25;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  ulonglong in_f31;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  lVar19 = (longlong)(int)moby;
  uVar18 = ZEXT48(&stack0x00000000);
  lVar22 = uVar18 - 400;
  puVar9 = (ulonglong *)lVar22;
  *puVar9 = uVar18;
  puVar9[0x34] = in_LR;
  puVar9[0x31] = in_f31;
  puVar9[0x30] = unaff_r31;
  puVar9[0x2f] = unaff_r30;
  puVar9[0x2e] = unaff_r29;
  puVar9[0x2d] = unaff_r28;
  puVar9[0x2c] = unaff_r27;
  pvVar6 = moby->pVar;
  mobyupdate_helpers::M1236_00219370();
  uVar1 = moby->state;
  iVar7 = *(int *)((int)pvVar6 + 0x100);
  if (uVar1 == '\x06') {
    *(undefined4 *)((int)puVar9 + 0xec) = 0;
    *(undefined4 *)(puVar9 + 0x1d) = 0;
    *(undefined4 *)((int)puVar9 + 0xe4) = 0;
    *(undefined4 *)(puVar9 + 0x1c) = 0;
    puVar9[0x12] = 0xffffffffffffffff;
    puVar9[0x14] = 1;
    puVar9[0x15] = 1;
    puVar9[0x16] = 0xffffffffffffffff;
    puVar9[0x17] = 0;
    mobyutil::MB_genericExplosion
              (0x4010000000000000,0x3ff0000000000000,0x4010000000000000,0x4000000000000000,
               0x4022000000000000,0x3ff0000000000000,0x402e000000000000,lVar19,uVar18 - 0xb0,
               lVar19 + 0x10,0,1,10,3,0x10);
    mobyfunc::DeleteMoby(moby);
  }
  else if (uVar1 != '\x05') {
    if (uVar1 == '\x03') {
      fVar2 = *(float *)(iVar7 + 0x10) - (moby->pos).x;
      fVar3 = *(float *)(iVar7 + 0x14) - (moby->pos).y;
      fVar4 = ABS(fVar2);
      fVar5 = ABS(fVar3);
      *(float *)(puVar9 + 0x1e) = fVar2;
      *(float *)((int)puVar9 + 0xf4) = fVar3;
      *(float *)(puVar9 + 0x1f) = fVar4 - fVar5;
      dVar28 = 0.0;
      uVar20 = (ulonglong)(*(uint *)(puVar9 + 0x1e) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x1f) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0xf4) >> 0x1d) & 4;
      fVar2 = ABS(*(float *)(puVar9 + 0x1e));
      if (*(float *)(puVar9 + 0x1f) - 0.0 < 0.0) {
        fVar2 = fVar5;
      }
      fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
      fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
      fVar17 = ABS(*(float *)((int)puVar9 + 0xf4));
      if (*(float *)(puVar9 + 0x1f) - 0.0 < 0.0) {
        fVar17 = fVar4;
      }
      dVar27 = dVar28;
      if (0.0 < fVar2) {
        lVar21 = uVar18 - 0x180;
        lVar25 = uVar18 - 0x78;
        lVar23 = uVar18 - 0x88;
        lVar26 = 2;
        fVar2 = (fVar17 - fVar2) / (fVar17 + fVar2);
        fVar4 = fVar2 * fVar2;
        *(float *)((int)puVar9 + 0x114) = fVar2;
        *(float *)((int)puVar9 + 0x10c) = fVar2;
        *(float *)(puVar9 + 0x22) = fVar2;
        *(float *)(puVar9 + 0x21) = fVar2;
        fVar2 = fVar4 * fVar4;
        *(float *)((int)puVar9 + 0x10c) = *(float *)((int)puVar9 + 0x10c) * fVar4;
        *(float *)(puVar9 + 0x22) = *(float *)(puVar9 + 0x22) * fVar2;
        *(float *)((int)puVar9 + 0x114) = *(float *)((int)puVar9 + 0x114) * fVar2 * fVar4;
        do {
          *(float *)((int)lVar21 + 0x108) = *(float *)((int)lVar21 + 0xf8) * fVar2 * fVar2;
          iVar10 = (int)lVar23;
          lVar23 = lVar23 + 8;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)(iVar10 + 4) * fVar2 * fVar2;
          lVar25 = lVar25 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar26 = 4;
        lVar25 = uVar18 - 0x88;
        pfVar24 = (float *)&DAT_007358e0;
        lVar21 = lVar22;
        lVar23 = lVar25;
        do {
          fVar2 = *pfVar24;
          fVar4 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar21 + 0x108) = *(float *)((int)lVar21 + 0x108) * fVar2;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar4;
          lVar23 = lVar23 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar21 = 2;
        do {
          iVar10 = (int)lVar22;
          iVar11 = (int)lVar25;
          lVar22 = lVar22 + 0x10;
          lVar25 = lVar25 + 0x10;
          dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar10 + 0x108)) +
                            *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                           *(float *)(iVar11 + 0xc));
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar5 + fVar3);
      }
      mobyutil::OrganicDeltAng
                ((float)dVar27,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                 mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar6 + 0x130));
      fVar2 = (moby->pos).y;
      fVar3 = (moby->pos).x;
      fVar5 = fVar2 - *(float *)((int)pvVar6 + 0x114);
      fVar4 = fVar3 - *(float *)((int)pvVar6 + 0x110);
      fVar2 = fVar2 - *(float *)(iVar7 + 0x14);
      fVar3 = fVar3 - *(float *)(iVar7 + 0x10);
      if ((20.0 < SQRT(fVar4 * fVar4 + fVar5 * fVar5)) ||
         (SQRT(fVar3 * fVar3 + fVar2 * fVar2) < 3.0)) {
        auVar29 = ZEXT416(0xffffffff);
        auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        auVar30 = vectorShiftLeftIntegerWord(auVar29,auVar29);
        auVar29 = loadVectorLeftIndexed(0x44,0x21971c);
        auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar31 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar29 = vectorMultiplyAddFloatingPoint
                            (auVar31,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,
                             auVar30);
        auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
        auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar8 = storeVectorElementWordIndexed
                          (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0x128,
                           ZEXT48(pvVar6));
        *(undefined4 *)((int)pvVar6 + 0x128U & 0xfffffffc) = uVar8;
        moby->state = '\x05';
        if (moby->animationId != '\x04') {
          puVar9[0x29] = (longlong)(int)(animationSpeed * 20.5);
          mobyutil::MB_SetAnimation(lVar19,4,0,*(undefined4 *)((int)puVar9 + 0x14c));
        }
      }
      else {
        fVar2 = (moby->rotation).z;
        fVar3 = fVar2 + 1.5707963;
        fVar5 = 3.1415925 - fVar2;
        if (fVar2 - (3.1415925 - fVar2) < 0.0) {
          fVar5 = fVar2;
        }
        fVar4 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar4 = fVar3;
        }
        fVar17 = -3.1415925 - fVar2;
        if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
          fVar17 = fVar5;
        }
        fVar2 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
          fVar2 = fVar4;
        }
        fVar4 = fVar17 * fVar17;
        fVar13 = fVar2 * fVar2;
        fVar15 = fVar4 * fVar4 * fVar17;
        fVar12 = fVar13 * fVar13 * fVar2;
        fVar16 = fVar4 * fVar15;
        fVar3 = DAT_00768810 * mobyutil::g_FrameTime;
        fVar14 = fVar13 * fVar12;
        fVar5 = DAT_00768810 * mobyutil::g_FrameTime;
        *(undefined4 *)(puVar9 + 0x1b) = 0;
        *(float *)((int)puVar9 + 0xd4) =
             fVar5 * (fVar4 * fVar16 * 2.601887e-06 +
                     fVar16 * -0.0001980741 +
                     fVar15 * 0.0083330255 + fVar4 * fVar17 * -0.16666657 + fVar17);
        *(float *)(puVar9 + 0x1a) =
             fVar3 * (fVar13 * fVar14 * 2.601887e-06 +
                     fVar14 * -0.0001980741 +
                     fVar12 * 0.0083330255 + fVar13 * fVar2 * -0.16666657 + fVar2);
        mobyutil::MB_MoveAndCollide(dVar28,0x3fe0000000000000,dVar28,lVar19,uVar18 - 0xc0);
      }
    }
    else if (uVar1 == '\x02') {
      fVar2 = *(float *)((int)pvVar6 + 0x110) - (moby->pos).x;
      fVar3 = *(float *)((int)pvVar6 + 0x114) - (moby->pos).y;
      fVar4 = ABS(fVar2);
      fVar5 = ABS(fVar3);
      *(float *)((int)puVar9 + 0xfc) = fVar2;
      *(float *)(puVar9 + 0x20) = fVar3;
      *(float *)((int)puVar9 + 0x104) = fVar4 - fVar5;
      dVar28 = 0.0;
      uVar20 = (ulonglong)(*(uint *)((int)puVar9 + 0xfc) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x104) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar9 + 0x20) >> 0x1d) & 4;
      fVar2 = ABS(*(float *)((int)puVar9 + 0xfc));
      if (*(float *)((int)puVar9 + 0x104) - 0.0 < 0.0) {
        fVar2 = fVar5;
      }
      fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
      fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
      fVar17 = ABS(*(float *)(puVar9 + 0x20));
      if (*(float *)((int)puVar9 + 0x104) - 0.0 < 0.0) {
        fVar17 = fVar4;
      }
      dVar27 = dVar28;
      if (0.0 < fVar2) {
        lVar21 = uVar18 - 0x180;
        lVar25 = uVar18 - 0x58;
        lVar23 = uVar18 - 0x68;
        lVar26 = 2;
        fVar2 = (fVar17 - fVar2) / (fVar17 + fVar2);
        fVar4 = fVar2 * fVar2;
        *(float *)((int)puVar9 + 0x134) = fVar2;
        *(float *)((int)puVar9 + 300) = fVar2;
        *(float *)(puVar9 + 0x26) = fVar2;
        *(float *)(puVar9 + 0x25) = fVar2;
        fVar2 = fVar4 * fVar4;
        *(float *)((int)puVar9 + 300) = *(float *)((int)puVar9 + 300) * fVar4;
        *(float *)(puVar9 + 0x26) = *(float *)(puVar9 + 0x26) * fVar2;
        *(float *)((int)puVar9 + 0x134) = *(float *)((int)puVar9 + 0x134) * fVar2 * fVar4;
        do {
          *(float *)((int)lVar21 + 0x128) = *(float *)((int)lVar21 + 0x118) * fVar2 * fVar2;
          iVar7 = (int)lVar23;
          lVar23 = lVar23 + 8;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)(iVar7 + 4) * fVar2 * fVar2;
          lVar25 = lVar25 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar26 = 4;
        lVar25 = uVar18 - 0x68;
        pfVar24 = (float *)&DAT_007358e0;
        lVar21 = lVar22;
        lVar23 = lVar25;
        do {
          fVar2 = *pfVar24;
          fVar4 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar21 + 0x128) = *(float *)((int)lVar21 + 0x128) * fVar2;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar4;
          lVar23 = lVar23 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar21 = 2;
        do {
          iVar7 = (int)lVar22;
          iVar10 = (int)lVar25;
          lVar22 = lVar22 + 0x10;
          lVar25 = lVar25 + 0x10;
          dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar7 + 0x128)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar5 + fVar3);
      }
      mobyutil::OrganicDeltAng
                ((float)dVar27,DAT_0071f418 * 3.1415927,DAT_0071f418 * 3.1415927,
                 mobyutil::g_FrameTime * 6.2831855,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar6 + 0x130));
      fVar17 = DAT_00768810;
      fVar4 = mobyutil::g_FrameTime;
      fVar2 = (moby->rotation).z;
      fVar3 = fVar2 + 1.5707963;
      fVar5 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar5 = fVar2;
      }
      fVar13 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar13 = fVar3;
      }
      fVar12 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
        fVar12 = fVar5;
      }
      fVar2 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar13 < 0.0) {
        fVar2 = fVar13;
      }
      fVar3 = fVar12 * fVar12;
      fVar5 = fVar2 * fVar2;
      fVar15 = fVar3 * fVar3 * fVar12;
      fVar13 = fVar5 * fVar5 * fVar2;
      fVar16 = fVar3 * fVar15;
      *(undefined4 *)(puVar9 + 0x19) = 0;
      fVar14 = fVar5 * fVar13;
      *(float *)((int)puVar9 + 0xc4) =
           fVar17 * fVar4 *
           (fVar3 * fVar16 * 2.601887e-06 +
           fVar16 * -0.0001980741 + fVar15 * 0.0083330255 + fVar3 * fVar12 * -0.16666657 + fVar12);
      *(float *)(puVar9 + 0x18) =
           fVar17 * fVar4 *
           (fVar5 * fVar14 * 2.601887e-06 +
           fVar14 * -0.0001980741 + fVar13 * 0.0083330255 + fVar5 * fVar2 * -0.16666657 + fVar2);
      mobyutil::MB_MoveAndCollide(dVar28,0x3fe0000000000000,dVar28,lVar19,uVar18 - 0xd0);
      if (*(int *)((int)pvVar6 + 0x104) != 2) {
        mobyupdate_helpers::M1236_00219280(lVar19,moby->group);
        moby->state = '\x03';
      }
    }
    else if (uVar1 == '\x01') {
      if (*(int *)((int)pvVar6 + 0x104) != 2) {
        mobyupdate_helpers::M1236_00219280(lVar19,moby->group);
        moby->state = '\x03';
      }
    }
    else if (uVar1 == '\0') {
      *(f32 *)((int)pvVar6 + 0x110) = (moby->pos).x;
      *(f32 *)((int)pvVar6 + 0x114) = (moby->pos).y;
      *(f32 *)((int)pvVar6 + 0x118) = (moby->pos).z;
      *(f32 *)((int)pvVar6 + 0x11c) = (moby->pos).w;
      fVar2 = (moby->pos).z;
      uVar1 = moby->animationId;
      moby->state = (char)((LZCOUNT(-*(int *)((int)pvVar6 + 0x124)) << 0x3a) >> 0x3f) + '\x02';
      (moby->pos).z = fVar2 + 0.5;
      if (uVar1 != '\x01') {
        puVar9[0x29] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar19,1,0,*(undefined4 *)((int)puVar9 + 0x14c));
      }
    }
  }
  return;
}



//==== 0021a074  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1238_0021a074(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1238_0021a074(void)

{
  DAT_00768864 = 0x10000;
  return;
}



//==== 0021a098  ns=Global  size=0x4d8
// sig: undefined FUN_0021a098(void)
// callers(3): 00217af8 mobyupdate_unsorted::UpdateMoby_1234; 002184d8 mobyupdate_helpers::M1235_002184d8; 0032e710 mobyupdate_helpers::M29_0032e710
// callees(4): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fddc0 mobyutil::MB_SetAnimation; 00502758 fastfunc::FastDoubleToInt

MobyInstance * FUN_0021a098(double param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  ulonglong *puVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  ulonglong uVar10;
  MobyInstance *pMVar13;
  longlong lVar11;
  longlong lVar12;
  float fVar14;
  ulonglong uVar15;
  longlong lVar16;
  float *pfVar18;
  longlong lVar17;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  ulonglong in_f31;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0x100;
  puVar5 = (ulonglong *)lVar12;
  *puVar5 = uVar10;
  puVar5[0x22] = in_LR;
  puVar5[0x1f] = in_f31;
  puVar5[0x1e] = unaff_r31;
  puVar5[0x1c] = unaff_r29;
  puVar5[0x1d] = unaff_r30;
  puVar5[0x1b] = unaff_r28;
  puVar5[0x1a] = unaff_r27;
  pMVar13 = mobyfunc::CreateMoby(0x4d6);
  if (pMVar13 != (MobyInstance *)0x0) {
    pMVar13->updateDistance = -1;
    pMVar13->drawDistance = 0x7f;
    pMVar13->enabled = '\x01';
    fVar8 = 0.0;
    (pMVar13->rotation).x = 0.0;
    fVar14 = param_3[2];
    pfVar4 = (float *)pMVar13->pVar;
    fVar2 = ABS(param_3[2]);
    fVar3 = SQRT(*param_3 * *param_3 + param_3[1] * param_3[1]);
    fVar1 = ABS(fVar3);
    *(float *)((int)puVar5 + 0x74) = fVar3;
    *(float *)(puVar5 + 0xf) = fVar1 - fVar2;
    uVar15 = (ulonglong)(*(uint *)((int)puVar5 + 0x74) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar5 + 0xf) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar14 >> 0x1d) & 4;
    fVar14 = ABS(*(float *)((int)puVar5 + 0x74));
    if (*(float *)(puVar5 + 0xf) - 0.0 < 0.0) {
      fVar14 = fVar2;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
    if (*(float *)(puVar5 + 0xf) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    fVar9 = fVar8;
    if (0.0 < fVar14) {
      lVar11 = uVar10 - 0xf0;
      lVar16 = uVar10 - 100;
      lVar17 = uVar10 - 0x54;
      lVar19 = 2;
      fVar14 = (fVar2 - fVar14) / (fVar2 + fVar14);
      fVar2 = fVar14 * fVar14;
      *(float *)(puVar5 + 0x15) = fVar14;
      *(float *)(puVar5 + 0x14) = fVar14;
      *(float *)((int)puVar5 + 0xa4) = fVar14;
      *(float *)((int)puVar5 + 0x9c) = fVar14;
      fVar14 = fVar2 * fVar2;
      *(float *)(puVar5 + 0x14) = *(float *)(puVar5 + 0x14) * fVar2;
      *(float *)((int)puVar5 + 0xa4) = *(float *)((int)puVar5 + 0xa4) * fVar14;
      *(float *)(puVar5 + 0x15) = *(float *)(puVar5 + 0x15) * fVar14 * fVar2;
      do {
        *(float *)((int)lVar11 + 0x9c) = *(float *)((int)lVar11 + 0x8c) * fVar14 * fVar14;
        iVar6 = (int)lVar16;
        lVar11 = lVar11 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)(iVar6 + 4) * fVar14 * fVar14;
        lVar17 = lVar17 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar17 = uVar10 - 100;
      pfVar18 = (float *)&DAT_007358e0;
      lVar19 = 4;
      lVar11 = lVar12;
      lVar16 = lVar17;
      do {
        fVar14 = *pfVar18;
        fVar2 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar11 + 0x9c) = *(float *)((int)lVar11 + 0x9c) * fVar14;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar2;
        lVar16 = lVar16 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar16 = 2;
      lVar11 = lVar12;
      fVar14 = fVar8;
      do {
        iVar6 = (int)lVar11;
        lVar11 = lVar11 + 0x10;
        iVar7 = (int)lVar17;
        lVar17 = lVar17 + 0x10;
        fVar14 = fVar14 + *(float *)(iVar6 + 0x9c) + *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) +
                 *(float *)(iVar7 + 0xc);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      fVar9 = (fVar14 + 0.7853982) * fVar3 + fVar1;
    }
    (pMVar13->rotation).y = -fVar9;
    fVar14 = *param_3;
    fVar3 = param_3[1];
    fVar1 = ABS(*param_3);
    fVar2 = ABS(param_3[1]);
    *(float *)(puVar5 + 0xe) = fVar1 - fVar2;
    uVar15 = (ulonglong)((uint)fVar14 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar5 + 0xe) >> 0x1e) & 2 | (ulonglong)((uint)fVar3 >> 0x1d) & 4
    ;
    fVar14 = fVar1;
    if (*(float *)(puVar5 + 0xe) - 0.0 < 0.0) {
      fVar14 = fVar2;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
    if (*(float *)(puVar5 + 0xe) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    if (0.0 < fVar14) {
      lVar11 = uVar10 - 0xf0;
      lVar16 = uVar10 - 0x84;
      lVar17 = uVar10 - 0x74;
      lVar19 = 2;
      fVar14 = (fVar2 - fVar14) / (fVar2 + fVar14);
      fVar2 = fVar14 * fVar14;
      *(float *)(puVar5 + 0x11) = fVar14;
      *(float *)(puVar5 + 0x10) = fVar14;
      *(float *)((int)puVar5 + 0x84) = fVar14;
      *(float *)((int)puVar5 + 0x7c) = fVar14;
      fVar14 = fVar2 * fVar2;
      *(float *)(puVar5 + 0x10) = *(float *)(puVar5 + 0x10) * fVar2;
      *(float *)((int)puVar5 + 0x84) = *(float *)((int)puVar5 + 0x84) * fVar14;
      *(float *)(puVar5 + 0x11) = *(float *)(puVar5 + 0x11) * fVar14 * fVar2;
      do {
        *(float *)((int)lVar11 + 0x7c) = *(float *)((int)lVar11 + 0x6c) * fVar14 * fVar14;
        iVar6 = (int)lVar16;
        lVar11 = lVar11 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)(iVar6 + 4) * fVar14 * fVar14;
        lVar17 = lVar17 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar17 = uVar10 - 0x84;
      pfVar18 = (float *)&DAT_007358e0;
      lVar19 = 4;
      lVar11 = lVar12;
      lVar16 = lVar17;
      do {
        fVar14 = *pfVar18;
        fVar2 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar11 + 0x7c) = *(float *)((int)lVar11 + 0x7c) * fVar14;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar2;
        lVar16 = lVar16 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar11 = 2;
      do {
        iVar6 = (int)lVar12;
        iVar7 = (int)lVar17;
        lVar12 = lVar12 + 0x10;
        lVar17 = lVar17 + 0x10;
        fVar8 = fVar8 + *(float *)(iVar6 + 0x7c) + *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) +
                *(float *)(iVar7 + 0xc);
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      fVar8 = (fVar8 + 0.7853982) * fVar3 + fVar1;
    }
    (pMVar13->rotation).z = fVar8;
    (pMVar13->pos).x = *param_2;
    (pMVar13->pos).y = param_2[1];
    (pMVar13->pos).z = param_2[2];
    (pMVar13->pos).w = param_2[3];
    pfVar4[4] = *param_2;
    pfVar4[5] = param_2[1];
    pfVar4[6] = param_2[2];
    pfVar4[7] = param_2[3];
    *pfVar4 = *param_3;
    pfVar4[1] = param_3[1];
    pfVar4[2] = param_3[2];
    pfVar4[3] = param_3[3];
    puVar5[0x18] = (longlong)(int)(animationSpeed * 5.5);
    mobyutil::MB_SetAnimation(pMVar13,1,0,*(undefined4 *)((int)puVar5 + 0xc4));
    pMVar13->modeBits = DRAW_TRANSPARENT_WEIRD|TRANSPARENT;
    pfVar4[8] = param_4;
    pfVar4[10] = (float)param_1;
    pfVar4[9] = 1.4013e-45;
    pMVar13->alpha = '\x10';
    fVar14 = (float)fastfunc::FastDoubleToInt
                              ((double)((float)(param_1 /
                                               (double)SQRT(pfVar4[2] * pfVar4[2] +
                                                            *pfVar4 * *pfVar4 +
                                                            pfVar4[1] * pfVar4[1])) + 1.0));
    pfVar4[0xb] = fVar14;
    mobyfunc::UpdateMobyTransform(pMVar13);
  }
  return pMVar13;
}



//==== 0021a5a0  ns=mobyupdate_unsorted  size=0x9a4
// sig: undefined UpdateMoby_1238(MobyInstance * moby)
// callers(0): 
// callees(11): 00057820 collproc::CollLine; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 0010581c mobyutil::SetCollDamIn; 00105ab4 mobyutil::CollDamageMobyDirect; 00128248 partupd::SpawnPart_27; 0012f490 partupd::SpawnPart_51; 0015d12c sound::PlayMobySound; 004fff60 fastfunc::FastDecTimerS32; 00500608 fastfunc::FastVecNormalize

/* Moby 1238 */

void mobyupdate_unsorted::UpdateMoby_1238(MobyInstance *moby)

{
  byte bVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  MobyInstance *pMVar7;
  f32 fVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  longlong lVar15;
  int iVar17;
  undefined8 uVar16;
  undefined4 *puVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined4 local_e0 [4];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  
  lVar15 = (longlong)(int)moby;
  pfVar6 = (float *)moby->pVar;
  fVar3 = (moby->pos).x + *pfVar6;
  (moby->pos).x = fVar3;
  fVar4 = (moby->pos).y + pfVar6[1];
  (moby->pos).y = fVar4;
  fVar5 = (moby->pos).z + pfVar6[2];
  (moby->pos).z = fVar5;
  fVar13 = 0.0;
  puVar18 = &hero::g_heroMtx;
  dVar25 = 1.0;
  if (((DAT_0096bcd6 != '\0') && (pfVar6[3] != 31337.602)) &&
     (fVar4 = fVar4 - g_heroPosition.y, fVar3 = fVar3 - g_heroPosition.x,
     fVar5 = fVar5 - g_heroPosition.z, SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4) < 2.0)) {
    fVar3 = pfVar6[1];
    fVar4 = *pfVar6;
    fVar5 = pfVar6[2];
    iVar17 = 0;
    fVar10 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
    fVar11 = 0.5 / fVar10;
    fVar12 = fVar13;
    if (0.0 - fVar10 < 0.0) {
      fVar12 = fVar3 * fVar11;
    }
    fVar14 = fVar13;
    if (0.0 - fVar10 < 0.0) {
      fVar14 = fVar4 * fVar11;
    }
    if (0.0 - fVar10 < 0.0) {
      fVar13 = fVar5 * fVar11;
    }
    if (fVar10 - 0.0 < 0.0) {
      fVar12 = fVar3 * fVar11;
    }
    if (fVar10 - 0.0 < 0.0) {
      fVar14 = fVar4 * fVar11;
    }
    if (fVar10 - 0.0 < 0.0) {
      fVar13 = fVar5 * fVar11;
    }
    pfVar6[1] = fVar12;
    *pfVar6 = fVar14;
    pfVar6[2] = fVar13;
    (moby->pos).x = (moby->pos).x - fVar14;
    (moby->pos).y = (moby->pos).y - pfVar6[1];
    (moby->pos).z = (moby->pos).z - pfVar6[2];
    *(undefined1 *)pfVar6 = 0;
    *(undefined1 *)((int)pfVar6 + 1) = 0;
    *(undefined1 *)((int)pfVar6 + 2) = 0;
    *(undefined1 *)((int)pfVar6 + 3) = 0;
    *(undefined1 *)(pfVar6 + 1) = 0;
    *(undefined1 *)((int)pfVar6 + 5) = 0;
    *(undefined1 *)((int)pfVar6 + 6) = 0;
    *(undefined1 *)((int)pfVar6 + 7) = 0;
    *(undefined1 *)(pfVar6 + 2) = 0;
    *(undefined1 *)((int)pfVar6 + 9) = 0;
    *(undefined1 *)((int)pfVar6 + 10) = 0;
    *(undefined1 *)(pfVar6 + 3) = 0;
    *(undefined1 *)((int)pfVar6 + 0xb) = 0;
    *(undefined1 *)((int)pfVar6 + 0xd) = 0;
    *(undefined1 *)((int)pfVar6 + 0xe) = 0;
    *(undefined1 *)((int)pfVar6 + 0xf) = 0;
    pfVar6[3] = 31337.602;
    pfVar6[0xb] = 7.00649e-45;
    do {
      pMVar7 = (MobyInstance *)puVar18[0x808];
      if (pMVar7 != (MobyInstance *)0x0) {
        mobyutil::SetCollDamIn(0x3ff0000000000000,&uStack_d0,lVar15,0x10001,0x46f4d334,local_110);
        local_b8 = CONCAT13(1,CONCAT12(1,moby->oClass));
        bVar1 = pMVar7->damage;
        if ((bVar1 == 0xff) || (CollDamage[bVar1].pVictimMoby != pMVar7)) {
          mobyutil::CollDamageMobyDirect
                    (pMVar7,0x40,CONCAT44(uStack_d0,uStack_cc),CONCAT44(uStack_c8,uStack_c4),
                     CONCAT44(uStack_c0,uStack_bc),CONCAT44(local_b8,uStack_b4),
                     CONCAT44(uStack_b0,uStack_ac),CONCAT44(uStack_a8,uStack_a4));
        }
        else {
          CollDamage[bVar1].damageHp = (float)((double)CollDamage[bVar1].damageHp + dVar25);
          CollDamage[(byte)pMVar7->damage].damageClass = '\x01';
          CollDamage[(byte)pMVar7->damage].damageStrength = '\x01';
          CollDamage[(byte)pMVar7->damage].damageIndex = moby->oClass;
          CollDamage[(byte)pMVar7->damage].damageFlags = 0x10001;
        }
        break;
      }
      iVar17 = iVar17 + 1;
      puVar18 = puVar18 + 1;
    } while (iVar17 < 6);
  }
  mobyutil::SetCollDamIn(dVar25,&uStack_d0,lVar15,0x10001);
  fVar4 = (moby->pos).y - pfVar6[5];
  fVar5 = (moby->pos).x - pfVar6[4];
  fVar3 = pfVar6[9];
  if ((pfVar6[10] < SQRT(fVar5 * fVar5 + fVar4 * fVar4)) ||
     (iVar17 = fastfunc::FastDecTimerS32(pfVar6 + 0xb), iVar17 != 0)) {
    if (moby->enabled != '\0') {
      iVar17 = 0;
      dVar23 = -1.0;
      dVar21 = 2.0;
      dVar20 = 4.0;
      do {
        mobyutil::MB_randRangeFloat((float)dVar23,(float)dVar25);
        mobyutil::MB_randRangeFloat((float)dVar23,(float)dVar25);
        mobyutil::MB_randRangeFloat((float)dVar23,(float)dVar25);
        mobyutil::MB_randRangeFloat
                  ((float)((double)mobyutil::g_FrameTime * dVar21),
                   (float)((double)mobyutil::g_FrameTime * dVar20));
        partupd::SpawnPart_51(lVar15 + 0x10,local_100);
        iVar17 = iVar17 + 1;
      } while (iVar17 < 3);
    }
    mobyfunc::DeleteMoby(moby);
  }
  else {
    iVar17 = collproc::CollLine(local_120,lVar15 + 0x10,(ulonglong)(LZCOUNT(fVar3) << 0x20) >> 0x25,
                                pfVar6[8],&uStack_d0);
    if (iVar17 == 0) {
      fVar8 = (moby->pos).x;
      uVar9 = (int)fVar8 >> 0x1f;
      iVar17 = (uVar9 >> 1 ^ (uint)fVar8) - uVar9;
      if ((((iVar17 < 0x40000000) || (0x447f4000 < iVar17)) ||
          (fVar8 = (moby->pos).y, uVar9 = (int)fVar8 >> 0x1f,
          iVar17 = (uVar9 >> 1 ^ (uint)fVar8) - uVar9, 0x447f4000 < iVar17 || iVar17 < 0x40000000))
         || ((fVar8 = (moby->pos).z, uVar9 = (int)fVar8 >> 0x1f,
             iVar17 = (uVar9 >> 1 ^ (uint)fVar8) - uVar9, iVar17 < 0x40000000 ||
             (0x447f4000 < iVar17)))) {
        mobyfunc::DeleteMoby(moby);
      }
    }
    else {
      (moby->pos).x = CollOutput.ip.x;
      cVar2 = moby->enabled;
      (moby->pos).y = CollOutput.ip.y;
      (moby->pos).z = CollOutput.ip.z;
      (moby->pos).w = CollOutput.ip.w;
      if (cVar2 != '\0') {
        iVar17 = 0;
        dVar24 = -1.0;
        dVar22 = 3.0;
        dVar23 = 6.0;
        dVar21 = 10.5;
        dVar20 = 15.5;
        uVar19 = 0x40dd4c0000000000;
        do {
          mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar25);
          mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar25);
          mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar25);
          fastfunc::FastVecNormalize(local_e0,pfVar6,0xa10980);
          mobyutil::MB_randRangeFloat
                    ((float)((double)mobyutil::g_FrameTime * dVar22),
                     (float)((double)mobyutil::g_FrameTime * dVar23));
          uVar16 = mobyutil::MB_randRange
                             ((int)((double)animationSpeed * dVar21),
                              (int)((double)animationSpeed * dVar20));
          partupd::SpawnPart_27(uVar19,lVar15 + 0x10,local_f0,0x7f2f4f6f,uVar16);
          iVar17 = iVar17 + 1;
        } while (iVar17 < 5);
      }
      if ((CollOutput.pMoby != (MobyInstance *)0x0) && ((CollOutput.pMoby)->oClass == RATCHET)) {
        sound::PlayMobySound(0,0,moby);
      }
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 0021af44  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1238_0021af44(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1238_0021af44(void)

{
  DAT_007688d8 = 0x10000;
  return;
}



//==== 0021af58  ns=mobyupdate_helpers  size=0x10
// sig: undefined M1238_0021af58(void)
// callers(0): 
// callees(0): 

double mobyupdate_helpers::M1238_0021af58(void)

{
  return (double)DAT_0076c528;
}



//==== 0021af68  ns=mobyupdate_helpers  size=0x2c
// sig: undefined M1238_0021af68(void)
// callers(0): 
// callees(1): 0017e558 water::SubmitZone

void mobyupdate_helpers::M1238_0021af68(void)

{
  water::SubmitZone((OceanPlane *)&DAT_0076c520);
  return;
}



//==== 0021afc0  ns=mobyupdate_unsorted  size=0x154
// sig: undefined UpdateMoby_124(MobyInstance * moby)
// callers(0): 
// callees(2): 0006d720 RegisterFuncForMoby; 0017e31c water::OceanPlane_SetDepth

/* Moby 124 */

void mobyupdate_unsorted::UpdateMoby_124(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (moby->state == '\0') {
    moby->state = '\x01';
    water::OceanPlane_SetDepth(0.6666667,(OceanPlane *)&DAT_0076c520,ZEXT48(&DAT_0021af94),0x60);
    moby->updateDistance = -1;
  }
  WaterFogFarIntensity = 0x43440000;
  fVar1 = (float)(longlong)(worldUpdateTime % 0x168) * 0.017444445 - 3.14;
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
  DAT_0076c528 = (fVar1 * fVar4 * 2.601887e-06 +
                 fVar4 * -0.0001980741 + fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3)
                 * 0.25 + (moby->pos).z;
  RegisterFuncForMoby(&PTR_M1238_0021af68_007096f0,moby);
  return;
}



//==== 0021b114  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1240_0021b114(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1240_0021b114(void)

{
  DAT_0076c5ac = 0x10000;
  return;
}



//==== 0021b170  ns=mobyupdate_unsorted  size=0x474
// sig: undefined UpdateMoby_1240(MobyInstance * moby)
// callers(0): 
// callees(7): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe610 mobyutil::MB_SphericalToVector; 00131e50 partupd::SpawnPart_64; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

/* Moby 1240 */

void mobyupdate_unsorted::UpdateMoby_1240(MobyInstance *moby)

{
  float fVar1;
  float *pfVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
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
  undefined1 local_100 [16];
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  
  pfVar2 = (float *)moby->pVar;
  iVar12 = 0;
  moby->updateDistance = -0x80;
  if (0 < (int)pfVar2[3]) {
    dVar23 = 1.5707963705062866;
    dVar22 = 0.5;
    dVar21 = 1.5;
    dVar20 = 0.23999999463558197;
    dVar19 = 0.36000001430511475;
    dVar18 = 0.800000011920929;
    dVar17 = 1.2000000476837158;
    dVar16 = 1.0;
    dVar15 = 0.25;
    dVar14 = 60.0;
    do {
      local_d8 = (float)dVar16;
      local_dc = (float)dVar15;
      local_e0 = (float)dVar14;
      lVar7 = mobyutil::MB_randInt(100);
      iVar6 = DAT_0076c5f4;
      lVar11 = (longlong)DAT_0076c5f4;
      fastfunc::FastWrapRot((moby->rotation).z,(float)dVar23);
      mobyutil::MB_randRangeFloat(-pfVar2[4],pfVar2[4]);
      fastfunc::FastWrapRot((moby->rotation).z,(float)dVar23);
      mobyutil::MB_randRangeFloat(-pfVar2[4],pfVar2[4]);
      mobyutil::MB_randRangeFloat(-pfVar2[5],pfVar2[5]);
      dVar14 = (double)mobyutil::MB_randRangeFloat(DAT_0076c5ec,DAT_0076c5e8);
      dVar15 = (double)mobyutil::MB_randRangeFloat(DAT_0076c5ec,DAT_0076c5e8);
      dVar16 = (double)mobyutil::MB_randRangeFloat(DAT_0076c5ec,DAT_0076c5e8);
      if (dVar14 - dVar15 < 0.0) {
        dVar14 = dVar15;
      }
      if (dVar14 - dVar16 < 0.0) {
        dVar14 = dVar16;
      }
      mobyutil::MB_SphericalToVector
                ((float)((double)mobyutil::g_FrameTime * dVar14),(moby->rotation).z,
                 -(moby->rotation).y,&local_f0);
      dVar14 = (double)local_e0;
      dVar15 = (double)local_dc;
      dVar16 = (double)local_d8;
      if ((int)lVar7 < iVar6) {
        dVar13 = (double)mobyutil::MB_randRangeFloat((float)dVar22,(float)dVar21);
        local_f0 = (float)((double)local_f0 * dVar13);
        local_ec = (float)((double)local_ec * dVar13);
        local_e8 = (float)((double)local_e8 * dVar13);
        dVar13 = (double)mobyutil::MB_randRangeFloat((float)dVar20,(float)dVar19);
        fVar1 = pfVar2[1];
      }
      else {
        dVar13 = (double)mobyutil::MB_randRangeFloat((float)dVar18,(float)dVar17);
        fVar1 = pfVar2[1];
      }
      uVar3 = DAT_0076c5e4;
      uVar4 = DAT_0076c5e0;
      dVar13 = (double)(float)((double)fVar1 * dVar13);
      mobyutil::MB_randRangeFloat((float)dVar22,(float)dVar16);
      uVar8 = fastfunc::FastLerpColor(uVar4,uVar3);
      uVar5 = DAT_0076c5e4;
      uVar3 = DAT_0076c5e4 & 0xff000000;
      mobyutil::MB_randRangeFloat((float)dVar15,(float)dVar22);
      uVar9 = fastfunc::FastLerpColor(uVar5,uVar3);
      uVar10 = fastfunc::FastDoubleToInt
                         ((double)(animationSpeed * (float)((double)pfVar2[2] * dVar14)));
      partupd::SpawnPart_64
                (dVar13,(double)*pfVar2,(double)(DAT_0076c5f0 * DAT_0071f418),local_100,&local_f0,
                 uVar10,&PTR_DAT_00770000,&DAT_00720000,uVar8,uVar9,
                 (ulonglong)(lVar7 - lVar11) >> 0x3f);
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)pfVar2[3]);
  }
  return;
}



//==== 0021b5e8  ns=Global  size=0x108
// sig: undefined FUN_0021b5e8(void)
// callers(3): 00182998 mobyupdate_unsorted::UpdateMoby_1004; 00206cd8 mobyupdate_unsorted::UpdateMoby_1214; 00209508 mobyupdate_unsorted::UpdateMoby_1215
// callees(4): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcc68 mobyutil::MB_randRot; 0010c000 mobyutil::MB_CopyHeroLights

MobyInstance * FUN_0021b5e8(f32 *param_1,undefined4 *param_2,MOBY_OCLASSES param_3)

{
  f32 fVar1;
  void *pvVar2;
  MobyInstance *pMVar3;
  double dVar4;
  
  pMVar3 = mobyfunc::CreateMoby(param_3);
  if (pMVar3 != (MobyInstance *)0x0) {
    pMVar3->updateDistance = -1;
    pMVar3->enabled = '\x01';
    pMVar3->state = '\0';
    pMVar3->setByGroup = '\0';
    pvVar2 = pMVar3->pVar;
    (pMVar3->pos).x = *param_1;
    (pMVar3->pos).y = param_1[1];
    (pMVar3->pos).z = param_1[2];
    fVar1 = param_1[3];
    pMVar3->drawDistance = 0xff;
    (pMVar3->pos).w = fVar1;
    *(undefined4 *)((int)pvVar2 + 0x10) = *param_2;
    *(undefined4 *)((int)pvVar2 + 0x14) = param_2[1];
    *(undefined4 *)((int)pvVar2 + 0x18) = param_2[2];
    *(undefined4 *)((int)pvVar2 + 0x1c) = param_2[3];
    dVar4 = (double)mobyutil::MB_randRot();
    (pMVar3->rotation).z = (float)dVar4;
    (pMVar3->rotation).x = 0.0;
    (pMVar3->rotation).y = 0.7853982;
    *(undefined4 *)((int)pvVar2 + 0x4c) = 0x3f800000;
    mobyfunc::UpdateMobyTransform(pMVar3);
    mobyutil::MB_CopyHeroLights(pMVar3);
  }
  return pMVar3;
}



//==== 0021b6f0  ns=mobyupdate_helpers  size=0x134
// sig: undefined M1241_0021b6f0(void)
// callers(1): 0021b8c0 mobyupdate_unsorted::UpdateMoby_1241
// callees(3): 000f1114 mobyfunc::GetBonePosition; 000f31a8 mobyfunc::UpdateMobyTransform; 0020b6b0 mobyupdate_helpers::M1220_0020b6b0

undefined8 mobyupdate_helpers::M1241_0021b6f0(int param_1,float *param_2)

{
  MobyInstance *pMVar1;
  undefined4 *puVar2;
  float fVar4;
  undefined8 uVar3;
  
  fVar4 = param_2[0xd];
  if (fVar4 == 0.0) {
    fVar4 = (float)M1220_0020b6b0(param_1);
    param_2[0xd] = fVar4;
  }
  if ((fVar4 == 0.0) || (*(char *)((int)fVar4 + 0x20) == -3 || *(char *)((int)fVar4 + 0x20) == -2))
  {
    uVar3 = 0;
    *param_2 = *(float *)(param_1 + 0x10);
    param_2[1] = *(float *)(param_1 + 0x14);
    param_2[2] = *(float *)(param_1 + 0x18);
    param_2[3] = *(float *)(param_1 + 0x1c);
    puVar2 = (undefined4 *)((uint)(param_2 + 8) & 0xfffffff0);
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  else {
    mobyfunc::GetBonePosition(param_1,6,(int)fVar4 + 0x10);
    pMVar1 = (MobyInstance *)param_2[0xd];
    (pMVar1->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar1->rotation).y = *(f32 *)(param_1 + 0x44);
    (pMVar1->rotation).z = *(f32 *)(param_1 + 0x48);
    (pMVar1->rotation).w = *(f32 *)(param_1 + 0x4c);
    mobyfunc::UpdateMobyTransform(pMVar1);
    mobyfunc::GetBonePosition(param_2[0xd],0,param_2);
    uVar3 = 1;
    param_2[8] = *(float *)(param_1 + 0x10) - *param_2;
    param_2[9] = *(float *)(param_1 + 0x14) - param_2[1];
    param_2[10] = *(float *)(param_1 + 0x18) - param_2[2];
    param_2[0xb] = *(float *)(param_1 + 0x1c);
  }
  return uVar3;
}



//==== 0021b8c0  ns=mobyupdate_unsorted  size=0x13fc
// sig: undefined UpdateMoby_1241(MobyInstance * moby)
// callers(0): 
// callees(19): 00059e20 collproc::CollSphere; 000efa28 mobyfunc::CreateMoby; 000efb38 mobyfunc::DeleteMoby; 000f1038 mobyfunc::GetBoneTransformations; 000f1114 mobyfunc::GetBonePosition; 000f31a8 mobyfunc::UpdateMobyTransform; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00106150 mobyutil::MB_RegisterLameShadow; 0010675c mobyutil::MB_damage; 0010e030 mobyutil::MB_genericExplosion; 00110950 mobyutil::MB_RandomizeVector; 00187e00 FUN_00187e00; 0021b6f0 mobyupdate_helpers::M1241_0021b6f0; 004fff60 fastfunc::FastDecTimerS32; 00500fa8 fastfunc::FastApplyTransform; 00502578 fastfunc::FastWrapRot; 005026a0 fastfunc::FastSubRots; 005c8318 rand

/* Moby 1241 */

void mobyupdate_unsorted::UpdateMoby_1241(MobyInstance *moby)

{
  bool bVar1;
  float fVar2;
  u8 uVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  float fVar12;
  f32 fVar13;
  uint uVar14;
  undefined4 uVar15;
  ulonglong *puVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulonglong uVar21;
  int iVar24;
  int iVar25;
  MobyInstance *pMVar26;
  int iVar27;
  longlong lVar22;
  longlong lVar23;
  uint uVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  float *pfVar32;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar33;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  ulonglong in_f16;
  ulonglong in_f17;
  double dVar41;
  ulonglong in_f18;
  double dVar42;
  ulonglong in_f19;
  double dVar43;
  ulonglong in_f20;
  double dVar44;
  ulonglong in_f21;
  double dVar45;
  ulonglong in_f22;
  double dVar46;
  ulonglong in_f23;
  double dVar47;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar48;
  ulonglong in_f31;
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  
  uVar21 = ZEXT48(&stack0x00000000);
  lVar23 = uVar21 - 0x260;
  puVar16 = (ulonglong *)lVar23;
  *puVar16 = uVar21;
  puVar16[0x4e] = in_LR;
  puVar16[0x3c] = in_f16;
  puVar16[0x3d] = in_f17;
  puVar16[0x3e] = in_f18;
  puVar16[0x3f] = in_f19;
  puVar16[0x40] = in_f20;
  puVar16[0x41] = in_f21;
  puVar16[0x42] = in_f22;
  puVar16[0x43] = in_f23;
  puVar16[0x44] = in_f24;
  puVar16[0x45] = in_f25;
  puVar16[0x46] = in_f26;
  puVar16[0x47] = in_f27;
  puVar16[0x48] = in_f28;
  puVar16[0x49] = in_f29;
  puVar16[0x4a] = in_f30;
  puVar16[0x4b] = in_f31;
  puVar16[0x37] = unaff_r27;
  puVar16[0x34] = unaff_r24;
  puVar16[0x3b] = unaff_r31;
  puVar16[0x39] = unaff_r29;
  bVar1 = false;
  puVar16[0x35] = unaff_r25;
  dVar49 = 100000.0;
  puVar16[0x3a] = unaff_r30;
  pfVar11 = (float *)moby->pVar;
  uVar33 = ZEXT48(pfVar11);
  puVar16[0x36] = unaff_r26;
  iVar27 = DAT_0096b2d0;
  puVar16[0x38] = unaff_r28;
  puVar16[0x33] = unaff_r23;
  dVar50 = dVar49;
  iVar24 = mobyutil::MB_damage(moby,0x330000,0);
  mobyfunc::GetBonePosition(moby,0,uVar21 - 0x1a0);
  iVar25 = collproc::CollSphere(0x3fe19999a0000000,uVar21 - 0x1a0);
  if (iVar25 != 0) {
    if (CollOutput.pMoby == (MobyInstance *)0x0) {
      puVar16[0x12] = 0xffffffffffffffff;
      puVar16[0x14] = 0;
      puVar16[0x15] = 1;
      puVar16[0x16] = 0xffffffffffffffff;
      puVar16[0x17] = 0;
      mobyutil::MB_genericExplosion
                (0x4000000000000000,0x3ff0000000000000,0,0,0x4022000000000000,0x3ff0000000000000,0,
                 moby,uVar33 + 0x10,uVar21 - 0x1a0,1,0xffffffffffffffff,3,2,5);
      moby->state = '\x04';
    }
    else if (((CollOutput.pMoby)->oClass == JET_FIGHTER) ||
            ((CollOutput.pMoby)->oClass == FIGHTER_JET_0045)) {
      bVar1 = true;
    }
    else {
      puVar16[0x12] = 0xffffffffffffffff;
      puVar16[0x14] = 0;
      puVar16[0x15] = 1;
      puVar16[0x16] = 0xffffffffffffffff;
      puVar16[0x17] = 0;
      mobyutil::MB_genericExplosion
                (0x4000000000000000,0x3ff0000000000000,0,0,0x4022000000000000,0x3ff0000000000000,0,
                 moby,uVar33 + 0x10,uVar21 - 0x1a0,1,0xffffffffffffffff,3,2,5);
      moby->state = '\x04';
    }
  }
  if (moby->state < 4) {
    pMVar26 = (MobyInstance *)pfVar11[0xe];
    if (pMVar26 == (MobyInstance *)0x0) {
      pMVar26 = mobyfunc::CreateMoby(BLARG_GUN_0158);
      pfVar11[0xe] = (float)pMVar26;
      if (pMVar26 != (MobyInstance *)0x0) {
        pMVar26->drawDistance = 0x40;
        *(undefined1 *)((int)pfVar11[0xe] + 0x30) = 0x40;
        *(undefined1 *)((int)pfVar11[0xe] + 0x31) = 1;
        *(ushort *)((int)pfVar11[0xe] + 0x34) = *(ushort *)((int)pfVar11[0xe] + 0x34) | 0x100;
        pMVar26 = (MobyInstance *)pfVar11[0xe];
      }
    }
    if (pMVar26 != (MobyInstance *)0x0) {
      mobyfunc::GetBonePosition(moby,4,uVar21 - 400);
      mobyfunc::GetBoneTransformations(moby,4,uVar21 - 0x160);
      fastfunc::FastApplyTransform((Vec4 *)((int)pfVar11[0xe] + 0xc0),(Vec4 *)(uVar21 - 0x160));
      fVar12 = pfVar11[0xe];
      *(undefined4 *)((int)fVar12 + 0x10) = *(undefined4 *)(puVar16 + 0x1a);
      *(undefined4 *)((int)fVar12 + 0x14) = *(undefined4 *)((int)puVar16 + 0xd4);
      *(undefined4 *)((int)fVar12 + 0x18) = *(undefined4 *)(puVar16 + 0x1b);
      *(undefined4 *)((int)fVar12 + 0x1c) = *(undefined4 *)((int)puVar16 + 0xdc);
      mobyfunc::UpdateMobyTransform((MobyInstance *)pfVar11[0xe]);
    }
    if ((((g_heroState == TURRET_PLANE_UI) && (iVar27 != 0)) &&
        (*(char *)(iVar27 + 0x20) != -3 && *(char *)(iVar27 + 0x20) != -2)) &&
       ((*(short *)(iVar27 + 0xa6) == 0x4da || (*(short *)(iVar27 + 0xa6) == 0x45)))) {
      fVar12 = (moby->pos).y;
      fVar6 = *(float *)(iVar27 + 0x14) - fVar12;
      fVar5 = (moby->pos).x;
      fVar7 = *(float *)(iVar27 + 0x10) - fVar5;
      fVar2 = -((fVar12 + pfVar11[1]) * 0.5 - *(float *)(iVar27 + 0x14));
      fVar12 = *(float *)(iVar27 + 0x18) - (moby->pos).z;
      fVar5 = -((fVar5 + *pfVar11) * 0.5 - *(float *)(iVar27 + 0x10));
      dVar50 = (double)SQRT(fVar12 * fVar12 + fVar7 * fVar7 + fVar6 * fVar6);
      dVar49 = (double)SQRT(fVar5 * fVar5 + fVar2 * fVar2);
    }
    if (((bVar1) || (dVar50 < 4.0)) || (dVar49 < 4.0)) {
      moby->collision = (ushort *)0x0;
      if (pfVar11[0xd] != 0.0) {
        *(undefined4 *)((int)pfVar11[0xd] + 0x94) = 0;
      }
      moby->state = '\x04';
    }
  }
  if (iVar24 != 0) {
    uVar28 = (int)pfVar11[0x13] >> 0x1f;
    uVar14 = (int)*(uint *)(iVar24 + 0x2c) >> 0x1f;
    if ((int)((uVar14 >> 1 ^ *(uint *)(iVar24 + 0x2c)) - uVar14) <
        (int)((uVar28 >> 1 ^ (uint)pfVar11[0x13]) - uVar28)) {
      pfVar11[0x13] = pfVar11[0x13] - *(float *)(iVar24 + 0x2c);
    }
    else {
      pfVar11[0x13] = 0.0;
      puVar16[0x12] = 0xffffffffffffffff;
      puVar16[0x14] = 1;
      puVar16[0x15] = 1;
      puVar16[0x16] = 0xffffffffffffffff;
      puVar16[0x17] = 0;
      mobyutil::MB_genericExplosion
                (0,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,moby,iVar24 + 0x10,0,&DAT_0021b824,1,10,3,0x10);
      if (pfVar11[0xd] != 0.0) {
        *(undefined1 *)((int)pfVar11[0xd] + 0x20) = 3;
      }
      moby->state = '\x04';
    }
    moby->damage = -1;
  }
  uVar3 = moby->state;
  if (uVar3 == '\x04') {
    if ((MobyInstance *)pfVar11[0xe] != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby((MobyInstance *)pfVar11[0xe]);
      pfVar11[0xe] = 0.0;
    }
    mobyfunc::DeleteMoby(moby);
    return;
  }
  if (uVar3 == '\x03') {
    bVar1 = moby->animationId != '\x03';
    if ((bVar1) && (bVar1)) {
      mobyutil::MB_SetAnimation(moby,3,0,6);
    }
    pfVar11[6] = -(DAT_0071f418 * 9.8 - pfVar11[6]);
    (moby->pos).x = (moby->pos).x + pfVar11[4];
    (moby->pos).y = (moby->pos).y + pfVar11[5];
    (moby->pos).z = (moby->pos).z + pfVar11[6];
    goto LAB_0021cb3c;
  }
  if (uVar3 != '\x02') {
    if (uVar3 == '\x01') {
      fVar12 = pfVar11[4];
      fVar5 = pfVar11[5];
      pfVar11[4] = fVar12 * 0.9;
      pfVar11[5] = fVar5 * 0.9;
      fVar6 = *pfVar11 + fVar12 * 0.9;
      fVar12 = DAT_0071f418 * 9.8;
      pfVar11[1] = pfVar11[1] + fVar5 * 0.9;
      *pfVar11 = fVar6;
      fVar12 = pfVar11[6] * 0.9 - fVar12;
      pfVar11[6] = fVar12;
      pfVar11[2] = pfVar11[2] + fVar12;
      (moby->pos).x = fVar6 + pfVar11[8];
      (moby->pos).y = pfVar11[1] + pfVar11[9];
      (moby->pos).z = pfVar11[2] + pfVar11[10];
      (moby->pos).w = pfVar11[3];
      iVar27 = mobyupdate_helpers::M1241_0021b6f0(moby,uVar33);
      if ((iVar27 != 0) && (*(char *)((int)pfVar11[0xd] + 0x52) == '\x01')) {
        pfVar11[4] = pfVar11[4] * 0.8;
        pfVar11[5] = pfVar11[5] * 0.8;
        pfVar11[6] = pfVar11[6] * 0.8;
        moby->state = '\x02';
      }
    }
    else if (uVar3 == '\0') {
      pfVar11[0xd] = 0.0;
      mobyupdate_helpers::M1241_0021b6f0(moby,uVar33);
      pfVar11[0xc] = 0.0;
      moby->setByGroup = '\0';
      moby->state = '\x01';
      pfVar11[0x11] = 1.0;
    }
    goto LAB_0021cb3c;
  }
  dVar49 = (double)fastfunc::FastWrapRot((moby->rotation).z,mobyutil::g_FrameTime * 0.034906585);
  (moby->rotation).z = (float)dVar49;
  dVar49 = (double)fastfunc::FastWrapRot(pfVar11[0xc],mobyutil::g_FrameTime * 1.5707964);
  dVar47 = 1.570796251296997;
  dVar46 = 3.141592502593994;
  fVar12 = (float)(dVar49 + 1.570796251296997);
  dVar45 = -3.141592502593994;
  dVar44 = -0.16666656732559204;
  dVar43 = 0.008333025500178337;
  dVar42 = -0.0001980741071747616;
  dVar41 = 2.601886990305502e-06;
  dVar48 = 0.7853981852531433;
  pfVar11[0xc] = (float)dVar49;
  fVar5 = 3.1415925 - fVar12;
  if (fVar12 - (3.1415925 - fVar12) < 0.0) {
    fVar5 = fVar12;
  }
  fVar6 = -3.1415925 - fVar12;
  if ((-3.1415925 - fVar12) - fVar5 < 0.0) {
    fVar6 = fVar5;
  }
  fVar7 = fVar6 * fVar6;
  fVar12 = fVar7 * fVar7 * fVar6;
  fVar5 = fVar7 * fVar12;
  (moby->rotation).y =
       (fVar7 * fVar5 * 2.601887e-06 +
       fVar5 * -0.0001980741 + fVar12 * 0.0083330255 + fVar7 * fVar6 * -0.16666657 + fVar6) *
       0.7853982;
  fVar5 = pfVar11[4] * 0.6;
  fVar6 = pfVar11[5] * 0.6;
  fVar12 = *pfVar11;
  pfVar11[4] = fVar5;
  pfVar11[5] = fVar6;
  fVar7 = DAT_0071f418 * 9.8;
  *pfVar11 = fVar12 + fVar5;
  pfVar11[1] = pfVar11[1] + fVar6;
  fVar7 = pfVar11[6] * 0.6 - fVar7;
  pfVar11[6] = fVar7;
  pfVar11[2] = pfVar11[2] + fVar7;
  if ((dVar50 < 40.0) && (moby->enabled != '\0')) {
    fVar2 = (moby->pos).y - *(float *)(iVar27 + 0x14);
    fVar8 = (moby->pos).x - *(float *)(iVar27 + 0x10);
    fVar10 = (moby->pos).z - *(float *)(iVar27 + 0x18);
    fVar9 = SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar2 * fVar2);
    fVar17 = 0.0;
    fVar20 = (0.8 / (float)SQRT(dVar50)) / fVar9;
    fVar18 = fVar17;
    if (0.0 - fVar9 < 0.0) {
      fVar18 = fVar20 * fVar10;
    }
    fVar19 = fVar17;
    if (0.0 - fVar9 < 0.0) {
      fVar19 = fVar20 * fVar2;
    }
    if (0.0 - fVar9 < 0.0) {
      fVar17 = fVar20 * fVar8;
    }
    if (fVar9 - 0.0 < 0.0) {
      fVar18 = fVar20 * fVar10;
    }
    if (fVar9 - 0.0 < 0.0) {
      fVar19 = fVar20 * fVar2;
    }
    if (fVar9 - 0.0 < 0.0) {
      fVar17 = fVar20 * fVar8;
    }
    pfVar11[6] = fVar7 + fVar18;
    pfVar11[5] = fVar6 + fVar19;
    pfVar11[4] = fVar5 + fVar17;
  }
  (moby->pos).x = fVar12 + fVar5 + pfVar11[8];
  (moby->pos).y = pfVar11[1] + pfVar11[9];
  (moby->pos).z = pfVar11[2] + pfVar11[10];
  (moby->pos).w = pfVar11[3];
  if ((int)pfVar11[0xf] < 0) {
LAB_0021c0d8:
    iVar27 = DAT_0096b2d0;
    if (moby->enabled == '\0') {
      if (moby->animationId != '\x01') {
        mobyutil::MB_SetAnimation(moby,1,0,6);
      }
      auVar51 = ZEXT416(0xffffffff);
      auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
      auVar52 = vectorShiftLeftIntegerWord(auVar51,auVar51);
      auVar51 = loadVectorLeftIndexed(0x8c,0x21b824);
      auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar53 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar51 = vectorMultiplyAddFloatingPoint
                          (auVar53,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,
                           auVar52);
      auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar51,0);
      auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar15 = storeVectorElementWordIndexed
                         (auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,0x3c,uVar33)
      ;
      *(undefined4 *)((uint)(pfVar11 + 0xf) & 0xfffffffc) = uVar15;
      moby->unk58 = 1.0;
      moby->setByGroup = '\0';
    }
    else {
      fVar12 = (moby->pos).x;
      fVar5 = (moby->pos).y;
      fVar6 = *(float *)(DAT_0096b2d0 + 0x10);
      fVar7 = *(float *)(DAT_0096b2d0 + 0x14);
      fVar2 = fVar6 - fVar12;
      fVar8 = fVar7 - fVar5;
      fVar9 = ABS(fVar2);
      fVar10 = ABS(fVar8);
      *(float *)((int)puVar16 + 0x14c) = fVar2;
      *(float *)(puVar16 + 0x2a) = fVar8;
      *(float *)((int)puVar16 + 0x154) = fVar9 - fVar10;
      dVar50 = 0.0;
      uVar30 = (ulonglong)(*(uint *)((int)puVar16 + 0x14c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar16 + 0x154) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar16 + 0x2a) >> 0x1d) & 4;
      fVar2 = ABS(*(float *)((int)puVar16 + 0x14c));
      if (*(float *)((int)puVar16 + 0x154) - 0.0 < 0.0) {
        fVar2 = fVar10;
      }
      fVar10 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar30 << 2));
      fVar8 = *(float *)(((uint)(uVar30 << 2) | 0x735900) + 4);
      fVar17 = ABS(*(float *)(puVar16 + 0x2a));
      if (*(float *)((int)puVar16 + 0x154) - 0.0 < 0.0) {
        fVar17 = fVar9;
      }
      dVar49 = dVar50;
      if (0.0 < fVar2) {
        lVar22 = uVar21 - 0x250;
        lVar31 = uVar21 - 0xd8;
        lVar29 = uVar21 - 0xe8;
        lVar34 = 2;
        fVar2 = (fVar17 - fVar2) / (fVar17 + fVar2);
        fVar9 = fVar2 * fVar2;
        *(float *)((int)puVar16 + 0x184) = fVar2;
        *(float *)((int)puVar16 + 0x17c) = fVar2;
        *(float *)(puVar16 + 0x30) = fVar2;
        *(float *)(puVar16 + 0x2f) = fVar2;
        fVar2 = fVar9 * fVar9;
        *(float *)((int)puVar16 + 0x17c) = *(float *)((int)puVar16 + 0x17c) * fVar9;
        *(float *)(puVar16 + 0x30) = *(float *)(puVar16 + 0x30) * fVar2;
        *(float *)((int)puVar16 + 0x184) = *(float *)((int)puVar16 + 0x184) * fVar2 * fVar9;
        do {
          *(float *)((int)lVar22 + 0x178) = *(float *)((int)lVar22 + 0x168) * fVar2 * fVar2;
          iVar24 = (int)lVar29;
          lVar29 = lVar29 + 8;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar31 + 4) = *(float *)(iVar24 + 4) * fVar2 * fVar2;
          lVar31 = lVar31 + 8;
          lVar34 = lVar34 + -1;
        } while (lVar34 != 0);
        lVar34 = 4;
        lVar31 = uVar21 - 0xe8;
        pfVar32 = (float *)&DAT_007358e0;
        lVar22 = lVar23;
        lVar29 = lVar31;
        do {
          fVar2 = *pfVar32;
          fVar9 = pfVar32[1];
          pfVar32 = pfVar32 + 2;
          *(float *)((int)lVar22 + 0x178) = *(float *)((int)lVar22 + 0x178) * fVar2;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar9;
          lVar29 = lVar29 + 8;
          lVar34 = lVar34 + -1;
        } while (lVar34 != 0);
        lVar29 = 2;
        lVar22 = lVar23;
        do {
          iVar24 = (int)lVar22;
          iVar25 = (int)lVar31;
          lVar22 = lVar22 + 0x10;
          lVar31 = lVar31 + 0x10;
          dVar49 = (double)((float)(dVar49 + (double)*(float *)(iVar24 + 0x178)) +
                            *(float *)(iVar25 + 4) + *(float *)(iVar25 + 8) +
                           *(float *)(iVar25 + 0xc));
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        dVar49 = (double)((float)(dVar49 + dVar48) * fVar10 + fVar8);
      }
      fVar5 = fVar5 - fVar7;
      fVar12 = fVar12 - fVar6;
      fVar6 = *(float *)(iVar27 + 0x18) - (moby->pos).z;
      fVar12 = SQRT(fVar12 * fVar12 + fVar5 * fVar5);
      *(float *)((int)puVar16 + 0x144) = fVar6;
      fVar6 = ABS(fVar6);
      fVar5 = ABS(fVar12);
      *(float *)(puVar16 + 0x28) = fVar12;
      *(float *)(puVar16 + 0x29) = fVar5 - fVar6;
      uVar30 = (ulonglong)(*(uint *)(puVar16 + 0x28) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar16 + 0x29) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar16 + 0x144) >> 0x1d) & 4;
      fVar12 = ABS(*(float *)(puVar16 + 0x28));
      if (*(float *)(puVar16 + 0x29) - 0.0 < 0.0) {
        fVar12 = fVar6;
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar30 << 2));
      fVar7 = ABS(*(float *)((int)puVar16 + 0x144));
      if (*(float *)(puVar16 + 0x29) - 0.0 < 0.0) {
        fVar7 = fVar5;
      }
      fVar5 = *(float *)(((uint)(uVar30 << 2) | 0x735900) + 4);
      dVar35 = dVar50;
      if (0.0 < fVar12) {
        lVar22 = uVar21 - 0x250;
        lVar29 = uVar21 - 0x108;
        lVar31 = uVar21 - 0xf8;
        lVar34 = 2;
        fVar12 = (fVar7 - fVar12) / (fVar7 + fVar12);
        fVar7 = fVar12 * fVar12;
        *(float *)((int)puVar16 + 0x164) = fVar12;
        *(float *)((int)puVar16 + 0x15c) = fVar12;
        *(float *)(puVar16 + 0x2c) = fVar12;
        *(float *)(puVar16 + 0x2b) = fVar12;
        fVar12 = fVar7 * fVar7;
        *(float *)((int)puVar16 + 0x15c) = *(float *)((int)puVar16 + 0x15c) * fVar7;
        *(float *)(puVar16 + 0x2c) = *(float *)(puVar16 + 0x2c) * fVar12;
        *(float *)((int)puVar16 + 0x164) = *(float *)((int)puVar16 + 0x164) * fVar12 * fVar7;
        do {
          *(float *)((int)lVar22 + 0x158) = *(float *)((int)lVar22 + 0x148) * fVar12 * fVar12;
          iVar27 = (int)lVar29;
          lVar22 = lVar22 + 8;
          lVar29 = lVar29 + 8;
          *(float *)((int)lVar31 + 4) = *(float *)(iVar27 + 4) * fVar12 * fVar12;
          lVar31 = lVar31 + 8;
          lVar34 = lVar34 + -1;
        } while (lVar34 != 0);
        lVar34 = 4;
        lVar31 = uVar21 - 0x108;
        pfVar32 = (float *)&DAT_007358e0;
        lVar22 = lVar23;
        lVar29 = lVar31;
        do {
          fVar12 = *pfVar32;
          fVar7 = pfVar32[1];
          pfVar32 = pfVar32 + 2;
          *(float *)((int)lVar22 + 0x158) = *(float *)((int)lVar22 + 0x158) * fVar12;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar7;
          lVar29 = lVar29 + 8;
          lVar34 = lVar34 + -1;
        } while (lVar34 != 0);
        lVar22 = 2;
        do {
          iVar27 = (int)lVar23;
          lVar23 = lVar23 + 0x10;
          iVar24 = (int)lVar31;
          lVar31 = lVar31 + 0x10;
          dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar27 + 0x158)) +
                            *(float *)(iVar24 + 4) + *(float *)(iVar24 + 8) +
                           *(float *)(iVar24 + 0xc));
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        dVar35 = (double)((float)(dVar35 + dVar48) * fVar6 + fVar5);
      }
      dVar48 = (double)fastfunc::FastSubRots((moby->rotation).z,(float)dVar49);
      fastfunc::FastSubRots((moby->rotation).y,(float)dVar35);
      mobyutil::OrganicDeltAngSpeed
                (dVar49,(double)(DAT_0071f40c * 0.005),(double)(DAT_0071f40c * 0.5),
                 (double)(DAT_0071f408 * 0.05),moby,&DAT_00720000,uVar33 + 0x40);
      bVar4 = moby->setByGroup;
      if (bVar4 == 0) {
        if (dVar48 < 1.0471975803375244) {
          if (moby->animationId != '\x02') {
            mobyutil::MB_SetAnimation(moby,2,0,6);
          }
          moby->unk58 = 3.0;
          moby->setByGroup = '\x01';
        }
      }
      else if (bVar4 < 2) {
        dVar48 = 1.0;
        iVar27 = *(int *)(DAT_0096b2d0 + 0x78);
        mobyfunc::GetBonePosition(pfVar11[0xe],0,uVar21 - 0x170);
        iVar24 = DAT_0096b2d0;
        fVar12 = *(float *)(iVar27 + 0x10);
        dVar35 = (double)pfVar11[0x12];
        fVar6 = *(float *)(iVar27 + 0x18) * fVar12;
        fVar5 = *(float *)(iVar27 + 0x14);
        fVar7 = fVar5 * *(float *)(iVar27 + 0x18);
        dVar47 = (double)(float)(dVar35 + dVar47);
        fVar2 = -fVar7;
        dVar49 = (double)(float)(dVar46 - dVar35);
        if (dVar35 - (double)(float)(dVar46 - dVar35) < 0.0) {
          dVar49 = dVar35;
        }
        fVar8 = fVar12 * fVar12 - -(fVar5 * fVar5);
        dVar36 = (double)(float)(dVar45 - dVar35);
        if ((double)(float)(dVar45 - dVar35) - dVar49 < 0.0) {
          dVar36 = dVar49;
        }
        dVar49 = (double)(float)(dVar46 - dVar47);
        if (dVar47 - (double)(float)(dVar46 - dVar47) < 0.0) {
          dVar49 = dVar47;
        }
        dVar35 = (double)SQRT(fVar12 * fVar12 + --(fVar5 * fVar5));
        dVar38 = (double)(float)(dVar36 * dVar36);
        dVar37 = (double)SQRT(fVar8 * fVar8 + fVar2 * fVar2 + --(fVar6 * fVar6));
        dVar46 = (double)(float)(dVar45 - dVar47);
        if ((double)(float)(dVar45 - dVar47) - dVar49 < 0.0) {
          dVar46 = dVar49;
        }
        dVar40 = (double)(float)(dVar38 * (double)(float)(dVar38 * dVar36));
        dVar39 = (double)(float)(dVar46 * dVar46);
        dVar49 = (double)(float)(dVar38 * dVar40);
        dVar45 = (double)(float)(dVar39 * (double)(float)(dVar39 * dVar46));
        dVar47 = (double)(float)(dVar39 * dVar45);
        fVar2 = (float)((double)(pfVar11[0x11] * 5.0 *
                                (float)((double)(float)(dVar38 * dVar49) * dVar41 +
                                       (double)(float)(dVar49 * dVar42 +
                                                      (double)(float)(dVar40 * dVar43 +
                                                                     (double)(float)((double)(float)
                                                  (dVar38 * dVar36) * dVar44 + dVar36))))) / dVar37)
        ;
        fVar10 = (float)((double)(pfVar11[0x11] * 5.0 *
                                 (float)((double)(float)(dVar39 * dVar47) * dVar41 +
                                        (double)(float)(dVar47 * dVar42 +
                                                       (double)(float)(dVar45 * dVar43 +
                                                                      (double)(float)((double)(float
                                                  )(dVar39 * dVar46) * dVar44 + dVar46))))) / dVar35
                        );
        dVar41 = -(double)(fVar7 * fVar2);
        dVar49 = dVar50;
        if (dVar50 - dVar37 < 0.0) {
          dVar49 = (double)(fVar8 * fVar2);
        }
        dVar42 = dVar50;
        if (dVar50 - dVar37 < 0.0) {
          dVar42 = -(double)(fVar6 * fVar2);
        }
        dVar43 = dVar50;
        if (dVar50 - dVar37 < 0.0) {
          dVar43 = dVar41;
        }
        if (dVar37 - dVar50 < 0.0) {
          dVar49 = (double)(fVar8 * fVar2);
        }
        if (dVar37 - dVar50 < 0.0) {
          dVar42 = -(double)(fVar6 * fVar2);
        }
        if (dVar37 - dVar50 < 0.0) {
          dVar43 = dVar41;
        }
        dVar44 = (double)(fVar12 * fVar10);
        fVar12 = (float)((double)*(float *)(DAT_0096b2d0 + 0x10) + dVar42);
        dVar42 = -(double)(fVar5 * fVar10);
        dVar41 = dVar50;
        if (dVar50 - dVar35 < 0.0) {
          dVar41 = dVar44;
        }
        *(float *)(puVar16 + 0x1c) = fVar12;
        fVar5 = (float)((double)*(float *)(iVar24 + 0x14) + dVar43);
        dVar43 = dVar50;
        if (dVar50 - dVar35 < 0.0) {
          dVar43 = dVar42;
        }
        if (dVar35 - dVar50 < 0.0) {
          dVar41 = dVar44;
        }
        if (dVar35 - dVar50 < 0.0) {
          dVar43 = dVar42;
        }
        *(float *)((int)puVar16 + 0xe4) = fVar5;
        fVar6 = (float)((double)*(float *)(iVar24 + 0x18) + dVar49);
        *(float *)(puVar16 + 0x1d) = fVar6;
        uVar15 = *(undefined4 *)(iVar24 + 0x1c);
        *(float *)((int)puVar16 + 0xe4) = (float)((double)fVar5 + dVar41);
        *(undefined4 *)((int)puVar16 + 0xec) = uVar15;
        *(float *)(puVar16 + 0x1d) = fVar6;
        *(float *)(puVar16 + 0x1c) = (float)((double)fVar12 + dVar43);
        mobyutil::MB_RandomizeVector(0.3,(float *)(uVar21 - 0x180));
        fVar12 = *(float *)((int)puVar16 + 0xf4) - g_heroPosition.y;
        fVar2 = *(float *)(puVar16 + 0x1e) - g_heroPosition.x;
        fVar5 = *(float *)(iVar27 + 0x14);
        fVar6 = *(float *)(iVar27 + 0x10);
        fVar7 = *(float *)(iVar27 + 0x18);
        dVar41 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
        fVar8 = mobyutil::g_FrameTime * 30.0;
        fVar12 = (float)((double)(*(float *)(iVar27 + 100) *
                                 (SQRT(fVar2 * fVar2 + fVar12 * fVar12) /
                                 (mobyutil::g_FrameTime * 30.0 + *(float *)(iVar27 + 100)))) /
                        dVar41);
        dVar49 = dVar50;
        if (dVar50 - dVar41 < 0.0) {
          dVar49 = (double)(fVar7 * fVar12);
        }
        dVar42 = dVar50;
        if (dVar50 - dVar41 < 0.0) {
          dVar42 = (double)(fVar5 * fVar12);
        }
        dVar43 = dVar50;
        if (dVar50 - dVar41 < 0.0) {
          dVar43 = (double)(fVar6 * fVar12);
        }
        if (dVar41 - dVar50 < 0.0) {
          dVar49 = (double)(fVar7 * fVar12);
        }
        if (dVar41 - dVar50 < 0.0) {
          dVar42 = (double)(fVar5 * fVar12);
        }
        if (dVar41 - dVar50 < 0.0) {
          dVar43 = (double)(fVar6 * fVar12);
        }
        *(float *)(puVar16 + 0x1d) =
             (float)((double)*(float *)(puVar16 + 0x1d) + dVar49) - *(float *)(puVar16 + 0x1f);
        *(float *)((int)puVar16 + 0xe4) =
             (float)((double)*(float *)((int)puVar16 + 0xe4) + dVar42) -
             *(float *)((int)puVar16 + 0xf4);
        *(float *)(puVar16 + 0x1c) =
             (float)((double)*(float *)(puVar16 + 0x1c) + dVar43) - *(float *)(puVar16 + 0x1e);
        FUN_00187e00(0x4051800000000000,(double)fVar8,0x4024000000000000,moby,uVar21 - 0x180,
                     uVar21 - 0x170);
        uVar28 = (int)pfVar11[0x12] >> 0x1f;
        fVar12 = pfVar11[0xf];
        pfVar11[0x11] =
             pfVar11[0x11] * (float)((double)DAT_0071f408 * -0.10000002384185791 + dVar48);
        if ((int)((uVar28 >> 1 ^ (uint)pfVar11[0x12]) - uVar28) < 0x3fc90fdc) {
          fVar5 = mobyutil::g_FrameTime * 0.87266463 + pfVar11[0x12];
        }
        else {
          fVar5 = -(mobyutil::g_FrameTime * 0.87266463 - pfVar11[0x12]);
        }
        pfVar11[0x12] = fVar5;
        pfVar11[0xf] = (float)((int)fVar12 + -1);
        if ((int)fVar12 + -1 < -100) {
          if (moby->animationId != '\x01') {
            mobyutil::MB_SetAnimation(moby,1,0,6);
          }
          auVar51 = ZEXT416(0xffffffff);
          auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
          auVar52 = vectorShiftLeftIntegerWord(auVar51,auVar51);
          auVar51 = loadVectorLeftIndexed(0x88,0x21b824);
          auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar53 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar51 = vectorMultiplyAddFloatingPoint
                              (auVar53,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60
                               ,auVar52);
          auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar51,0);
          auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar15 = storeVectorElementWordIndexed
                             (auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,0x3c,
                              uVar33);
          *(undefined4 *)((uint)(pfVar11 + 0xf) & 0xfffffffc) = uVar15;
          moby->unk58 = 1.0;
          pfVar11[0x11] = 1.0;
          moby->setByGroup = '\0';
        }
        else {
          moby->setByGroup = '\x02';
        }
      }
      else if (bVar4 < 3) {
        if (dVar48 <= 1.0471975803375244) {
          if ((moby->field43_0x70 & 2U) != 0) {
            moby->setByGroup = '\x01';
          }
        }
        else {
          if (moby->animationId != '\x01') {
            mobyutil::MB_SetAnimation(moby,1,0,6);
          }
          auVar51 = ZEXT416(0xffffffff);
          auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
          auVar52 = vectorShiftLeftIntegerWord(auVar51,auVar51);
          auVar51 = loadVectorLeftIndexed(0x8c,0x21b824);
          auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar53 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar51 = vectorMultiplyAddFloatingPoint
                              (auVar53,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60
                               ,auVar52);
          auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar51,0);
          auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar15 = storeVectorElementWordIndexed
                             (auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,0x3c,
                              uVar33);
          *(undefined4 *)((uint)(pfVar11 + 0xf) & 0xfffffffc) = uVar15;
          moby->unk58 = 1.0;
          pfVar11[0x11] = 1.0;
          moby->setByGroup = '\0';
        }
      }
    }
  }
  else {
    iVar27 = fastfunc::FastDecTimerS32(uVar33 + 0x3c);
    bVar4 = moby->animationId;
    if (((iVar27 != 0) && (g_heroState == TURRET_PLANE_UI)) &&
       ((*(short *)(DAT_0096b2d0 + 0xa6) == 0x4da || (*(short *)(DAT_0096b2d0 + 0xa6) == 0x45))))
    goto LAB_0021c0d8;
    if (((moby->field43_0x70 & 2U) != 0) && (uVar28 = rand(), (uint)bVar4 != (uVar28 & 1))) {
      uVar28 = rand();
      mobyutil::MB_SetAnimation(moby,uVar28 & 1,0,6);
    }
  }
  iVar27 = mobyupdate_helpers::M1241_0021b6f0(moby,uVar33);
  if ((iVar27 != 0) && (*(char *)((int)pfVar11[0xd] + 0x20) == '\x02')) {
    moby->state = '\x02';
  }
LAB_0021cb3c:
  fVar13 = (moby->pos).z;
  uVar28 = (int)fVar13 >> 0x1f;
  fVar12 = 20.0;
  bVar1 = (int)((uVar28 >> 1 ^ (uint)fVar13) - uVar28) < 0x41a00000;
  if (bVar1) {
    mobyfunc::DeleteMoby(moby);
  }
  else {
    fVar13 = (moby->pos).x;
    uVar28 = (int)fVar13 >> 0x1f;
    fVar5 = (moby->pos).x;
    if ((int)((uVar28 >> 1 ^ (uint)fVar13) - uVar28) < 0x41a00000) {
      (moby->pos).x = 20.0;
      fVar5 = fVar12;
    }
    if (1003.0 < fVar5) {
      (moby->pos).x = 1003.0;
    }
    fVar13 = (moby->pos).y;
    uVar28 = (int)fVar13 >> 0x1f;
    fVar5 = (moby->pos).y;
    if ((int)((uVar28 >> 1 ^ (uint)fVar13) - uVar28) < 0x41a00000) {
      (moby->pos).y = 20.0;
      fVar5 = fVar12;
    }
    if (1003.0 < fVar5) {
      (moby->pos).y = 1003.0;
    }
    fVar5 = (moby->pos).z;
    if (bVar1) {
      (moby->pos).z = 20.0;
      fVar5 = fVar12;
    }
    if (1003.0 < fVar5) {
      (moby->pos).z = 1003.0;
    }
    mobyutil::MB_RegisterLameShadow(0.5,moby);
  }
  return;
}



//==== 0021ccbc  ns=mobyupd::update1242  size=0x14
// sig: undefined M1242_0021ccbc(void)
// callers(0): 
// callees(0): 

void mobyupd::update1242::M1242_0021ccbc(void)

{
  DAT_0076c644 = 0x10000;
  return;
}



//==== 0021ccd0  ns=mobyupd::update1242  size=0x8
// sig: undefined M1242_0021ccd0(void)
// callers(0): 
// callees(0): 

void mobyupd::update1242::M1242_0021ccd0(void)

{
  trapWord(0x1f,ZEXT48(&stack0x00000000),ZEXT48(&stack0x00000000));
  return;
}



//==== 0021ccd8  ns=mobyupd::update1242  size=0x2a8
// sig: undefined M1242_0021ccd8(void)
// callers(1): 0021e750 mobyupd::update1242::M1242_Hud_Draw
// callees(3): 000685c4 draw::GetEffectTex; 004d6948 idol_draw::ResetPassState; 004d6d00 idol_draw::SetTextureUnitRegs

void mobyupd::update1242::M1242_0021ccd8
               (double param_1,double param_2,double param_3,longlong param_4,int param_5)

{
  undefined4 uVar1;
  RenderingStep *pRVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong in_r8;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  iVar3 = EffectTexHeaders;
  auVar12._0_4_ = (float)param_2;
  auVar12._4_4_ = (float)param_2;
  auVar12._8_4_ = (float)param_2;
  auVar12._12_4_ = (float)param_2;
  auVar11._0_4_ = (float)param_1;
  auVar11._4_4_ = (float)param_1;
  auVar11._8_4_ = (float)param_1;
  auVar11._12_4_ = (float)param_1;
  uVar4 = 0x70;
  auVar10._0_4_ = (float)param_3;
  auVar10._4_4_ = (float)param_3;
  auVar10._8_4_ = (float)param_3;
  auVar10._12_4_ = (float)param_3;
  iVar5 = draw::GetEffectTex(0x16);
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,iVar3 + iVar5 * 0x24);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = 0x41948;
  pRVar2->command[1] =
       (RsxCmd)((in_r8 >> 8 & 0xff) << 8) |
       (RsxCmd)((in_r8 >> 0x18 & 0xff) << 0x18) | (RsxCmd)((in_r8 >> 0x10 & 0xff) << 0x10) |
       (RsxCmd)in_r8 & 0xff;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar2->command[1] = 0;
  pRVar2->command[2] = 0;
  pRVar2->command[3] = 0;
  pRVar2->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar2->command[5] = 6;
  pRVar2->command = pRVar2->command + 6;
  if (0 < param_5) {
    auVar7 = ZEXT416(0xfffffff0);
    auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    lVar6 = param_4 + 2;
    do {
      pRVar2 = HUD_Pass;
      auVar8 = loadVectorLeftIndexed(uVar4,param_4);
      auVar9 = loadVectorLeftIndexed(uVar4,lVar6);
      auVar8 = vectorShiftRightAlgebraicWord(auVar8,auVar7);
      auVar9 = vectorShiftRightAlgebraicWord(auVar9,auVar7);
      auVar8 = vectorConvertFromSignedFixedPointWord(auVar8,0);
      auVar9 = vectorConvertFromSignedFixedPointWord(auVar9,0);
      param_5 = param_5 + -1;
      lVar6 = lVar6 + 4;
      *HUD_Pass->command = 0x41904;
      param_4 = param_4 + 4;
      pRVar2->command[1] = 0;
      auVar8 = vectorMultiplyAddFloatingPoint(auVar8,auVar10,auVar11);
      auVar9 = vectorMultiplyAddFloatingPoint(auVar9,auVar10,auVar12);
      pRVar2->command = pRVar2->command + 2;
      pRVar2 = HUD_Pass;
      auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
      *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
      uVar1 = storeVectorElementWordIndexed
                        (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,4,
                         ZEXT48(pRVar2->command));
      *(undefined4 *)((uint)(pRVar2->command + 1) & 0xfffffffc) = uVar1;
      uVar1 = storeVectorElementWordIndexed
                        (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,8,
                         ZEXT48(pRVar2->command));
      *(undefined4 *)((uint)(pRVar2->command + 2) & 0xfffffffc) = uVar1;
      pRVar2->command = pRVar2->command + 3;
    } while (0 < param_5);
  }
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar2->command[1] = 0;
  pRVar2->command = pRVar2->command + 2;
  return;
}



//==== 0021cf80  ns=mobyupd::update1242  size=0x314
// sig: undefined M1242_0021cf80(void)
// callers(1): 0021d650 mobyupd::update1242::M1242_0021d650
// callees(4): 000685c4 draw::GetEffectTex; 004d6948 idol_draw::ResetPassState; 004d6d00 idol_draw::SetTextureUnitRegs; 00500ca4 fastfunc::FastEulerToMtx1

void mobyupd::update1242::M1242_0021cf80
               (double param_1,double param_2,double param_3,double param_4,longlong param_5,
               int param_6)

{
  longlong lVar1;
  RsxCmd *pRVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  RenderingStep *pRVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong in_r8;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  longlong lVar10;
  ulonglong unaff_r31;
  ulonglong in_LR;
  ulonglong in_f31;
  undefined1 auVar11 [16];
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
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar1 = uVar8 - 0x150;
  puVar4 = (ulonglong *)lVar1;
  *puVar4 = uVar8;
  puVar4[0x2c] = in_LR;
  puVar4[0x29] = in_f31;
  puVar4[0x28] = unaff_r31;
  puVar4[0x27] = unaff_r30;
  *(float *)(puVar4 + 0x18) = (float)param_2;
  *(float *)((int)puVar4 + 0xc4) = (float)param_2;
  *(float *)(puVar4 + 0x19) = (float)param_2;
  *(float *)((int)puVar4 + 0xcc) = (float)param_2;
  puVar4[0x25] = unaff_r28;
  puVar4[0x24] = unaff_r27;
  puVar4[0x23] = unaff_r26;
  puVar4[0x21] = unaff_r24;
  iVar6 = EffectTexHeaders;
  puVar4[0x22] = unaff_r25;
  auVar23 = *(undefined1 (*) [16])(puVar4 + 0x18);
  *(float *)(puVar4 + 0x18) = (float)param_1;
  *(float *)((int)puVar4 + 0xc4) = (float)param_1;
  *(float *)(puVar4 + 0x19) = (float)param_1;
  *(float *)((int)puVar4 + 0xcc) = (float)param_1;
  auVar22 = *(undefined1 (*) [16])(puVar4 + 0x18);
  uVar7 = 0xc0;
  *(float *)(puVar4 + 0x18) = (float)param_3;
  *(float *)((int)puVar4 + 0xc4) = (float)param_3;
  *(float *)(puVar4 + 0x19) = (float)param_3;
  *(float *)((int)puVar4 + 0xcc) = (float)param_3;
  puVar4[0x26] = unaff_r29;
  auVar21 = *(undefined1 (*) [16])(puVar4 + 0x18);
  iVar9 = draw::GetEffectTex(0x16);
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,iVar6 + iVar9 * 0x24);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar5 = HUD_Pass;
  *HUD_Pass->command = 0x41948;
  pRVar5->command[1] =
       (RsxCmd)((in_r8 >> 8 & 0xff) << 8) |
       (RsxCmd)((in_r8 >> 0x18 & 0xff) << 0x18) | (RsxCmd)((in_r8 >> 0x10 & 0xff) << 0x10) |
       (RsxCmd)in_r8 & 0xff;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar5->command[1] = 0;
  pRVar5->command[2] = 0;
  pRVar5->command[3] = 0;
  pRVar5->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar5->command[5] = 6;
  pRVar2 = pRVar5->command;
  *(undefined4 *)(puVar4 + 0xe) = 0;
  *(undefined4 *)((int)puVar4 + 0x74) = 0;
  *(undefined4 *)((int)puVar4 + 0x7c) = 0;
  pRVar5->command = pRVar2 + 6;
  *(float *)(puVar4 + 0xf) = (float)param_4;
  fastfunc::FastEulerToMtx1(uVar8 - 0xd0,uVar8 - 0xe0);
  if (0 < param_6) {
    auVar11 = ZEXT416(0xfffffff0);
    auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    auVar15 = loadVectorLeftIndexed(0x80,lVar1);
    auVar14 = loadVectorLeftIndexed(0x90,lVar1);
    auVar13 = loadVectorLeftIndexed(0x84,lVar1);
    lVar10 = param_5 + 2;
    auVar12 = loadVectorLeftIndexed(0x94,lVar1);
    do {
      pRVar5 = HUD_Pass;
      auVar18 = loadVectorLeftIndexed(uVar7,lVar10);
      auVar17 = ZEXT416(0xffffffff);
      auVar16 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      auVar18 = vectorShiftRightAlgebraicWord(auVar18,auVar11);
      auVar19 = loadVectorLeftIndexed(uVar7,param_5);
      auVar17 = ZEXT416(0xffffffff);
      auVar20 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      auVar17 = vectorShiftLeftIntegerWord(auVar16,auVar16);
      auVar16 = vectorConvertFromSignedFixedPointWord(auVar18,0);
      auVar18 = vectorShiftRightAlgebraicWord(auVar19,auVar11);
      auVar19 = vectorShiftLeftIntegerWord(auVar20,auVar20);
      auVar18 = vectorConvertFromSignedFixedPointWord(auVar18,0);
      param_6 = param_6 + -1;
      lVar10 = lVar10 + 4;
      param_5 = param_5 + 4;
      *HUD_Pass->command = 0x41904;
      auVar17 = vectorMultiplyAddFloatingPoint(auVar16,auVar14,auVar17);
      auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar12,auVar19);
      pRVar5->command[1] = 0;
      auVar17 = vectorMultiplyAddFloatingPoint(auVar18,auVar15,auVar17);
      auVar16 = vectorMultiplyAddFloatingPoint(auVar18,auVar13,auVar16);
      pRVar5->command = pRVar5->command + 2;
      pRVar5 = HUD_Pass;
      auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar21,auVar22);
      auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar21,auVar23);
      *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
      auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar3 = storeVectorElementWordIndexed
                        (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,4,
                         ZEXT48(pRVar5->command));
      *(undefined4 *)((uint)(pRVar5->command + 1) & 0xfffffffc) = uVar3;
      uVar3 = storeVectorElementWordIndexed
                        (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,8,
                         ZEXT48(pRVar5->command));
      *(undefined4 *)((uint)(pRVar5->command + 2) & 0xfffffffc) = uVar3;
      pRVar5->command = pRVar5->command + 3;
    } while (0 < param_6);
  }
  pRVar5 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar5->command[1] = 0;
  pRVar5->command = pRVar5->command + 2;
  return;
}



//==== 0021d298  ns=mobyupd::update1242  size=0x84
// sig: undefined M1242_0021d298(void)
// callers(0): 
// callees(1): 0006e740 draw::Sprite_DrawRotated

void mobyupd::update1242::M1242_0021d298
               (double param_1,double param_2,double param_3,double param_4,double param_5)

{
  draw::Sprite_DrawRotated((float)param_1,(float)param_2,param_3,param_4,param_5,0.0,0.0);
  return;
}



//==== 0021d328  ns=mobyupd::update1242  size=0x228
// sig: undefined M1242_0021d328(void)
// callers(1): 0021e750 mobyupd::update1242::M1242_Hud_Draw
// callees(3): 000685c4 draw::GetEffectTex; 0006e740 draw::Sprite_DrawRotated; 00502578 fastfunc::FastWrapRot

void mobyupd::update1242::M1242_0021d328
               (double param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  draw::GetEffectTex(0x42);
  dVar2 = 0.0;
  dVar4 = (double)(float)(param_3 * 20.0);
  draw::Sprite_DrawRotated((float)param_1,(float)param_2,dVar4,dVar4,param_4,0.0,0.0);
  dVar3 = 1.5707963705062866;
  dVar1 = (double)fastfunc::FastWrapRot((float)param_4,1.5707964);
  draw::Sprite_DrawRotated((float)param_1,(float)param_2,dVar4,dVar4,dVar1,dVar2,dVar2);
  dVar1 = (double)fastfunc::FastWrapRot((float)dVar1,(float)dVar3);
  draw::Sprite_DrawRotated((float)param_1,(float)param_2,dVar4,dVar4,dVar1,dVar2,dVar2);
  dVar1 = (double)fastfunc::FastWrapRot((float)dVar1,(float)dVar3);
  draw::Sprite_DrawRotated((float)param_1,(float)param_2,dVar4,dVar4,dVar1,dVar2,dVar2);
  return;
}



//==== 0021d558  ns=mobyupd::update1242  size=0xe0
// sig: undefined M1242_0021d558(void)
// callers(0): 
// callees(2): 00065490 draw::ScreenPosFromWorldSpace; 00502758 fastfunc::FastDoubleToInt

void mobyupd::update1242::M1242_0021d558
               (undefined8 param_1,undefined4 *param_2,int *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  double dVar3;
  float local_50;
  float local_4c;
  
  draw::ScreenPosFromWorldSpace(&local_50,param_1);
  dVar3 = 0.0625;
  uVar1 = fastfunc::FastDoubleToInt
                    ((double)((local_50 - (float)(longlong)SCREEN_PROJECTION_MAP_X) * 0.0625));
  *param_2 = uVar1;
  iVar2 = fastfunc::FastDoubleToInt
                    ((double)(float)((double)(local_4c - (float)(longlong)SCREEN_PROJECTION_MAP_Y) *
                                    dVar3));
  *param_3 = iVar2 + param_4;
  return;
}



//==== 0021d650  ns=mobyupd::update1242  size=0x284
// sig: undefined M1242_0021d650(void)
// callers(0): 
// callees(5): 0021cf80 mobyupd::update1242::M1242_0021cf80; 00500ca4 fastfunc::FastEulerToMtx1; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

void mobyupd::update1242::M1242_0021d650
               (undefined8 param_1,int param_2,float *param_3,int param_4,undefined8 param_5,
               undefined8 param_6,ulonglong param_7)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_b0 [16];
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_70;
  float local_6c;
  float local_68;
  
  dVar8 = (double)*(float *)(param_2 + 8);
  uVar2 = (int)*(uint *)(param_2 + 4) >> 0x1f;
  iVar6 = (uVar2 >> 1 ^ *(uint *)(param_2 + 4)) - uVar2;
  if ((0x3fc90fdb < iVar6) || (iVar6 < -0x3fc90fdb)) {
    dVar8 = -dVar8;
  }
  fastfunc::FastDiffRots(0x3ff921fb60000000,dVar8);
  fastfunc::FastEulerToMtx1(&local_a0,auStack_b0);
  fVar3 = *(float *)(param_4 + 0x14) - param_3[1];
  fVar4 = *(float *)(param_4 + 0x10) - *param_3;
  fVar1 = *(float *)(param_4 + 0x1c);
  dVar8 = (double)((local_6c * fVar1 + local_9c * fVar4 + local_8c * fVar3) * 0.14285715);
  fVar5 = (local_70 * fVar1 + local_a0 * fVar4 + local_90 * fVar3) * 0.14285715;
  fVar1 = (local_68 * fVar1 + local_98 * fVar4 + local_88 * fVar3) * 0.14285715;
  dVar9 = (double)SQRT(fVar1 * fVar1 + fVar5 * fVar5 + (float)(dVar8 * dVar8));
  iVar6 = fastfunc::FastDoubleToInt();
  iVar7 = fastfunc::FastDoubleToInt(-dVar8);
  if (dVar9 < 46.0) {
    if (38.0 < dVar9) {
      dVar9 = (double)(float)(46.0 - dVar9);
      dVar8 = (double)fastfunc::FastIntToDouble(param_7 >> 0x18 & 0xff);
      fastfunc::FastDoubleToInt((double)((float)(dVar8 * dVar9) * 0.125));
    }
    dVar8 = (double)fastfunc::FastDiffRots
                              ((double)*(float *)(param_4 + 0x48),(double)*(float *)(param_2 + 8));
    M1242_0021cf80((double)(longlong)(iVar6 + 0x1b0),
                   (double)(longlong)(iVar7 + draw::g_ScreenHeight + -0x50),param_1,-dVar8,param_5,
                   param_6);
  }
  return;
}



//==== 0021d8f8  ns=mobyupd::update1242  size=0x4e0
// sig: undefined M1242_0021d8f8(void)
// callers(1): 00221048 mobyupd::update1242::UpdateMoby_1242_JetFighterPoki
// callees(4): 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 00110950 mobyutil::MB_RandomizeVector; 001349f0 partupd::SpawnPart_74

void mobyupd::update1242::M1242_0021d8f8(undefined8 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  float local_f0 [4];
  float local_e0 [4];
  float local_d0 [6];
  
  iVar2 = 1;
  dVar3 = 0.019999999552965164;
  dVar4 = 0.009999999776482582;
  dVar5 = 6.0;
  dVar6 = 7.0;
  do {
    mobyfunc::GetBonePosition(param_1,iVar2,local_100);
    mobyutil::MB_RandomizeVector
              ((float)((double)*(float *)(param_2 + 0xc4) * dVar3 + dVar3),local_f0);
    mobyutil::MB_RandomizeVector
              ((float)((double)*(float *)(param_2 + 0xc4) * dVar3 + dVar3),local_e0);
    mobyutil::MB_RandomizeVector
              ((float)((double)*(float *)(param_2 + 0xc4) * dVar4 + dVar3),local_d0);
    mobyutil::MB_randRangeFloat((float)dVar5,(float)dVar6);
    partupd::SpawnPart_74(param_1,local_f0,local_110,&DAT_0076d078,1);
    mobyutil::MB_randRangeFloat((float)dVar5,(float)dVar6);
    partupd::SpawnPart_74(param_1,local_e0,local_110,&DAT_0076d088,1);
    mobyutil::MB_randRangeFloat((float)dVar5,(float)dVar6);
    partupd::SpawnPart_74(param_1,local_d0,local_110,&DAT_0076d098,1);
    uVar1 = (int)*(uint *)(param_2 + 0xc4) >> 0x1f;
    if (0x3f000000 < (int)((uVar1 >> 1 ^ *(uint *)(param_2 + 0xc4)) - uVar1)) {
      mobyutil::MB_RandomizeVector
                ((float)((double)*(float *)(param_2 + 0xc4) * dVar3 + dVar4),local_f0);
      mobyutil::MB_RandomizeVector
                ((float)((double)*(float *)(param_2 + 0xc4) * dVar3 + dVar4),local_e0);
      mobyutil::MB_RandomizeVector
                ((float)((double)*(float *)(param_2 + 0xc4) * dVar4 + dVar4),local_d0);
      mobyutil::MB_randRangeFloat((float)dVar5,(float)dVar6);
      partupd::SpawnPart_74(param_1,local_f0,local_110,&DAT_0076d078,1);
      mobyutil::MB_randRangeFloat((float)dVar5,(float)dVar6);
      partupd::SpawnPart_74(param_1,local_e0,local_110,&DAT_0076d088,1);
      mobyutil::MB_randRangeFloat((float)dVar5,(float)dVar6);
      partupd::SpawnPart_74(param_1,local_d0,local_110,&DAT_0076d098,1);
      mobyutil::MB_randRangeFloat((float)dVar5,(float)dVar6);
      partupd::SpawnPart_74(param_1,local_f0,local_110,&DAT_0076d0a8,1);
      mobyutil::MB_randRangeFloat((float)dVar5,(float)dVar6);
      partupd::SpawnPart_74(param_1,local_100,local_110,&DAT_0076d0b8,1);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return;
}



//==== 0021ddf0  ns=mobyupd::update1242  size=0x2d4
// sig: undefined M1242_0021ddf0(void)
// callers(1): 0021e750 mobyupd::update1242::M1242_Hud_Draw
// callees(6): 000685c4 draw::GetEffectTex; 0006a5c4 draw::Sprite_DrawShapeWrapper; 00500ca4 fastfunc::FastEulerToMtx1; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt
// strings: 0096c074: 'None'

void mobyupd::update1242::M1242_0021ddf0
               (int param_1,float *param_2,int param_3,longlong param_4,ulonglong param_5)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_a0 [16];
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_60;
  float local_5c;
  float local_58;
  
  dVar9 = (double)*(float *)(param_1 + 8);
  uVar2 = (int)*(uint *)(param_1 + 4) >> 0x1f;
  iVar8 = (uVar2 >> 1 ^ *(uint *)(param_1 + 4)) - uVar2;
  if ((0x3fc90fdb < iVar8) || (iVar8 < -0x3fc90fdb)) {
    dVar9 = -dVar9;
  }
  fastfunc::FastDiffRots(0x3ff921fb60000000,dVar9);
  fastfunc::FastEulerToMtx1(&local_90,auStack_a0);
  fVar3 = *(float *)(param_3 + 0x14) - param_2[1];
  fVar4 = *(float *)(param_3 + 0x10) - *param_2;
  fVar1 = *(float *)(param_3 + 0x1c);
  dVar9 = (double)((local_5c * fVar1 + local_8c * fVar4 + local_7c * fVar3) * 0.14285715);
  fVar5 = (local_60 * fVar1 + local_90 * fVar4 + local_80 * fVar3) * 0.14285715;
  fVar1 = (local_58 * fVar1 + local_88 * fVar4 + local_78 * fVar3) * 0.14285715;
  dVar10 = (double)SQRT(fVar1 * fVar1 + fVar5 * fVar5 + (float)(dVar9 * dVar9));
  iVar7 = fastfunc::FastDoubleToInt
                    ((double)((float)(longlong)
                                     (int)(((uint)((LZCOUNT(-(uint)(byte)Cheats[4]) << 0x3a) >> 0x3f
                                                  ) & 2) - 1) * fVar5));
  iVar8 = fastfunc::FastDoubleToInt(-dVar9);
  if (dVar10 < 46.0) {
    if (38.0 < dVar10) {
      dVar10 = (double)(float)(46.0 - dVar10);
      dVar9 = (double)fastfunc::FastIntToDouble(param_5 >> 0x18 & 0xff);
      fastfunc::FastDoubleToInt((double)((float)(dVar9 * dVar10) * 0.125));
    }
    iVar6 = (int)(param_4 << 4);
    iVar8 = iVar8 + draw::g_ScreenHeight;
    draw::GetEffectTex(*(undefined2 *)(iVar6 + 0x76d0c8));
    draw::Sprite_DrawShapeWrapper
              ((iVar7 - *(short *)(iVar6 + 0x76d0d4)) + 0x1b0,
               (iVar8 - *(short *)(iVar6 + 0x76d0d6)) + -0x50,*(undefined2 *)(iVar6 + 0x76d0ce),
               *(undefined2 *)(iVar6 + 0x76d0d0),*(undefined2 *)(iVar6 + 0x76d0ca),
               *(undefined2 *)(iVar6 + 0x76d0cc),*(undefined2 *)(iVar6 + 0x76d0ce),
               *(undefined2 *)(iVar6 + 0x76d0d0));
  }
  return;
}



//==== 0021e0d0  ns=mobyupd::update1242  size=0x2ac
// sig: undefined M1242_0021e0d0(void)
// callers(1): 0021e410 mobyupd::update1242::M1242_0021e410
// callees(3): 00065490 draw::ScreenPosFromWorldSpace; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

double mobyupd::update1242::M1242_0021e0d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  undefined1 local_80 [16];
  float local_70;
  float local_6c;
  float local_60;
  float local_5c;
  
  iVar3 = *(int *)(param_1 + 0x78);
  if (*(char *)(param_2 + 0x31) == '\0') {
    dVar7 = 10000.0;
  }
  else {
    draw::ScreenPosFromWorldSpace(&local_60,param_2 + 0x10);
    dVar7 = 0.0625;
    iVar1 = fastfunc::FastDoubleToInt
                      ((double)((local_60 - (float)(longlong)SCREEN_PROJECTION_MAP_X) * 0.0625));
    iVar2 = fastfunc::FastDoubleToInt
                      ((double)(float)((double)(local_5c - (float)(longlong)SCREEN_PROJECTION_MAP_Y)
                                      * dVar7));
    iVar5 = iVar1 - *(int *)(iVar3 + 0xe0);
    iVar6 = iVar2 - *(int *)(iVar3 + 0xe4);
    iVar5 = iVar5 * ((iVar5 >> 0x1f & 0xfffffffeU) + 1);
    iVar6 = iVar6 * ((iVar6 >> 0x1f & 0xfffffffeU) + 1);
    draw::ScreenPosFromWorldSpace(&local_70,local_80);
    iVar3 = fastfunc::FastDoubleToInt
                      ((double)(float)((double)(local_70 - (float)(longlong)SCREEN_PROJECTION_MAP_X)
                                      * dVar7));
    iVar4 = fastfunc::FastDoubleToInt
                      ((double)(float)((double)(local_6c - (float)(longlong)SCREEN_PROJECTION_MAP_Y)
                                      * dVar7));
    dVar7 = (double)fastfunc::FastIntToDouble
                              ((iVar3 - iVar1) * (iVar3 - iVar1) + (iVar4 - iVar2) * (iVar4 - iVar2)
                              );
    iVar3 = fastfunc::FastDoubleToInt((double)(float)SQRT(dVar7));
    if ((iVar5 < iVar3 + 0x1c) && (iVar6 < iVar3 + 0x1c)) {
      dVar7 = (double)(longlong)(iVar5 * iVar5 + iVar6 * iVar6);
    }
    else {
      dVar7 = 10000.0;
    }
  }
  return dVar7;
}



//==== 0021e37c  ns=mobyupd::update1242  size=0x90
// sig: undefined M1242_0021e37c(void)
// callers(0): 
// callees(0): 

void mobyupd::update1242::M1242_0021e37c(int param_1,short *param_2,short *param_3)

{
  ushort uVar1;
  int iVar2;
  MobyInstance *pMVar3;
  ushort *puVar4;
  
  iVar2 = *(int *)(param_1 + 0x78);
  *param_2 = 0;
  *param_3 = 0;
  pMVar3 = MobyInstance;
  puVar4 = *(ushort **)
            ((int)&mobyutil::g_MobyGroups +
            (int)((longlong)(short)*(undefined4 *)(iVar2 + 0x108) << 2));
  if (puVar4 != (ushort *)0x0) {
    do {
      uVar1 = *puVar4;
      if ((pMVar3[uVar1 & 0x7fff].state < 0x80) &&
         (*param_2 = *param_2 + 1, pMVar3[uVar1 & 0x7fff].enabled != '\0')) {
        *param_3 = *param_3 + 1;
      }
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}



//==== 0021e410  ns=mobyupd::update1242  size=0x1dc
// sig: undefined M1242_0021e410(void)
// callers(1): 0021e5f8 mobyupd::update1242::M1242_0021e5f8
// callees(2): 0021e0d0 mobyupd::update1242::M1242_0021e0d0; 00232a80 mobyupdate_helpers::M1266_00232a80

ulonglong mobyupd::update1242::M1242_0021e410(int param_1,int param_2)

{
  longlong lVar1;
  ushort uVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  short sVar7;
  int iVar6;
  short sVar8;
  ulonglong in_r10;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar9;
  ulonglong unaff_r30;
  ushort *puVar10;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar11;
  ulonglong in_f31;
  double dVar12;
  
  lVar1 = ZEXT48(&stack0x00000000) - 0xd0;
  puVar4 = (ulonglong *)lVar1;
  *puVar4 = ZEXT48(&stack0x00000000);
  puVar4[0x1c] = in_LR;
  puVar4[0x19] = in_f31;
  puVar4[0x18] = unaff_r31;
  puVar4[0x17] = unaff_r30;
  puVar4[0x16] = unaff_r29;
  iVar6 = *(int *)(param_1 + 0x78);
  sVar8 = 0;
  puVar4[0x15] = unaff_r28;
  dVar12 = 1000.0;
  uVar3 = *(undefined4 *)(iVar6 + 0x108);
  *(undefined2 *)(param_2 + 0xe8) = 0;
  *(undefined2 *)(param_2 + 0xea) = 0;
  sVar7 = 0;
  puVar10 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)((longlong)(short)uVar3 << 2));
  puVar4[0x14] = unaff_r27;
  puVar4[0x13] = unaff_r26;
  if (puVar10 != (ushort *)0x0) {
    do {
      iVar6 = (int)(((ulonglong)*puVar10 & 0x7fff) << 8);
      if ((&MobyInstance->state)[iVar6] < 0x80) {
        sVar8 = sVar8 + 1;
        *(short *)(param_2 + 0xe8) = sVar8;
        if ((&MobyInstance->enabled)[iVar6] != '\0') {
          sVar7 = sVar7 + 1;
          *(short *)(param_2 + 0xea) = sVar7;
        }
      }
      uVar2 = *puVar10;
      puVar10 = puVar10 + 1;
    } while (-1 < (short)uVar2);
  }
  if (((int)in_r10 == 0) || (dVar11 = (double)M1242_0021e0d0(param_1,in_r10), dVar12 <= dVar11)) {
    puVar10 = *(ushort **)
               ((int)&mobyutil::g_MobyGroups +
               (int)((longlong)(short)*(undefined4 *)(param_2 + 0x108) << 2));
    if (puVar10 == (ushort *)0x0) {
      in_r10 = 0;
    }
    else {
      in_r10 = 0;
      do {
        if (MobyInstance[*puVar10 & 0x7fff].state < 0x80) {
          iVar6 = mobyupdate_helpers::M1266_00232a80
                            (MobyInstance + (*puVar10 & 0x7fff),puVar4 + 0xe);
          iVar9 = 1;
          lVar5 = lVar1;
          if (1 < iVar6) {
            do {
              dVar11 = (double)M1242_0021e0d0(param_1,*(undefined4 *)((int)lVar5 + 0x74));
              if (dVar11 < dVar12) {
                in_r10 = (ulonglong)*(uint *)((int)lVar5 + 0x74);
                dVar12 = dVar11;
              }
              iVar9 = iVar9 + 1;
              lVar5 = lVar5 + 4;
            } while (iVar9 < iVar6);
          }
        }
        uVar2 = *puVar10;
        puVar10 = puVar10 + 1;
      } while (-1 < (short)uVar2);
    }
  }
  return in_r10;
}



//==== 0021e5f8  ns=mobyupd::update1242  size=0x10c
// sig: undefined M1242_0021e5f8(void)
// callers(1): 0021e750 mobyupd::update1242::M1242_Hud_Draw
// callees(2): 0021e410 mobyupd::update1242::M1242_0021e410; 004fff60 fastfunc::FastDecTimerS32

void mobyupd::update1242::M1242_0021e5f8(undefined8 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_20 [24];
  
  if (DAT_0096b2d6 == '\0') {
    *(undefined4 *)(param_2 + 0x88) = 0;
  }
  else {
    if ((*(int *)(param_2 + 0x88) != 0) &&
       ((cVar1 = *(char *)(*(int *)(param_2 + 0x88) + 0x20), cVar1 == -2 || (cVar1 == -3)))) {
      *(undefined4 *)(param_2 + 0x88) = 0;
    }
    iVar4 = M1242_0021e410(0x3fc921fb60000000,0x3fc921fb60000000,0x406fe00000000000,param_1,param_2,
                           0x951500,local_20);
    iVar3 = DAT_0076c7fc;
    iVar2 = DAT_0076c7f8;
    if (iVar4 == *(int *)(param_2 + 0x88)) {
      if (*(int *)(param_2 + 0x88) != 0) {
        fastfunc::FastDecTimerS32(param_2 + 0x8c);
      }
    }
    else {
      *(int *)(param_2 + 0x88) = iVar4;
      *(int *)(param_2 + 0x8c) = iVar2 + iVar3;
    }
  }
  return;
}



//==== 0021e750  ns=mobyupd::update1242  size=0xb48
// sig: undefined M1242_Hud_Draw(void)
// callers(0): 
// callees(21): 00065490 draw::ScreenPosFromWorldSpace; 000685c4 draw::GetEffectTex; 0006a5c4 draw::Sprite_DrawShapeWrapper; 0006e740 draw::Sprite_DrawRotated; 00070998 draw::FontPrintLargeCenter; 0007b310 help::Help_QueueMessage; 0007b740 help::help_msg_string_by_index; 0010de78 mobyutil::MB_WrapRot; 00174f80 vuchain::SetGSReg; 0021ccd8 mobyupd::update1242::M1242_0021ccd8; 0021d328 mobyupd::update1242::M1242_0021d328; 0021ddf0 mobyupd::update1242::M1242_0021ddf0; 0021e5f8 mobyupd::update1242::M1242_0021e5f8; 00232a80 mobyupdate_helpers::M1266_00232a80; 004d82b8 idol_draw::BindFragmentProgram; 004dd6f0 idol_draw::Gfx_SubmitHudDrawCommands; 004de9c4 FUN_004de9c4; 004fff60 fastfunc::FastDecTimerS32; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 00502ea8 idol_draw::PackCmd
// strings: 00655038: 'minHealth' | 00a1000c: 'None'

void mobyupd::update1242::M1242_Hud_Draw(int param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  short sVar5;
  byte bVar6;
  undefined2 uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  int iVar12;
  int iVar13;
  undefined8 uVar11;
  byte bVar14;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  int iVar15;
  ulonglong unaff_r27;
  longlong lVar16;
  ulonglong unaff_r28;
  ushort *puVar18;
  longlong lVar17;
  ulonglong unaff_r29;
  int iVar19;
  ulonglong unaff_r30;
  ulonglong uVar20;
  ulonglong unaff_r31;
  ulonglong in_LR;
  ulonglong uVar21;
  ulonglong in_f27;
  double dVar22;
  ulonglong in_f28;
  double dVar23;
  ulonglong in_f29;
  double dVar24;
  ulonglong in_f30;
  double dVar25;
  ulonglong in_f31;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar16 = uVar8 - 0x180;
  puVar4 = (ulonglong *)lVar16;
  *puVar4 = uVar8;
  puVar4[0x32] = in_LR;
  puVar4[0x2b] = in_f27;
  puVar4[0x2c] = in_f28;
  puVar4[0x2d] = in_f29;
  puVar4[0x2e] = in_f30;
  puVar4[0x2f] = in_f31;
  puVar4[0x27] = unaff_r28;
  puVar4[0x2a] = unaff_r31;
  puVar4[0x28] = unaff_r29;
  puVar4[0x22] = unaff_r23;
  iVar19 = 0;
  puVar4[0x29] = unaff_r30;
  iVar15 = g_viewMtxPtr;
  uVar2 = *(uint *)(param_1 + 0x78);
  uVar20 = (ulonglong)uVar2;
  iVar13 = *(int *)(g_viewMtxPtr + 0xc);
  puVar4[0x26] = unaff_r27;
  puVar4[0x25] = unaff_r26;
  puVar4[0x24] = unaff_r25;
  puVar4[0x23] = unaff_r24;
  puVar4[0x21] = unaff_r22;
  puVar4[0x20] = unaff_r21;
  if (((iVar13 == 0) || (*(char *)(iVar15 + 0x11) == '\x04')) ||
     (*(char *)(iVar15 + 0x11) == '\x05')) {
    iVar19 = 1;
  }
  idol_draw::BindFragmentProgram(iVar15,HUD_Pass,0xd);
  auVar27 = loadVectorLeftIndexed(0xf4,uVar20);
  auVar28 = loadVectorRightIndexed(0x104,uVar20);
  auVar29 = ZEXT416(0xffffffff);
  auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
  auVar30 = loadVectorLeftIndexed(in_LR,0x21e708);
  auVar27 = vectorConvertFromSignedFixedPointWord(auVar27 | auVar28,0);
  auVar28 = vectorShiftLeftIntegerWord(auVar29,auVar29);
  auVar29 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar29 = vectorMultiplyAddFloatingPoint
                      (auVar27,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,auVar28
                      );
  auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar3 = storeVectorElementWordIndexed
                    (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0xc0,lVar16);
  *(undefined4 *)(puVar4 + 0x18) = uVar3;
  uVar9 = FUN_004de9c4(iVar15,0xd,"minHealth");
  idol_draw::Gfx_SubmitHudDrawCommands(iVar15,HUD_Pass,0xd,uVar9,uVar8 - 0xc0,1);
  uVar9 = idol_draw::PackCmd(0,1,0,1,0x80);
  vuchain::SetGSReg(3,uVar9);
  uVar10 = draw::GetEffectTex(0x3c);
  iVar12 = 0x170 - (((uint)((LZCOUNT(-iVar19) << 0x3a) >> 0x3f) & 0xffffffec) + 0x14);
  iVar13 = draw::g_ScreenHeight + -0x90;
  puVar4[0xe] = 0x70808080;
  puVar4[0xf] = uVar10;
  draw::Sprite_DrawShapeWrapper(iVar12,iVar13,0x80,0x80,0,0,0x80,0x80);
  idol_draw::BindFragmentProgram(iVar15,HUD_Pass,0xc);
  uVar10 = draw::GetEffectTex(0x3d);
  iVar13 = draw::g_ScreenHeight;
  puVar4[0xe] = 0x70808080;
  puVar4[0xf] = uVar10;
  draw::Sprite_DrawShapeWrapper(iVar12,iVar13 + -0x90,0x80,0x80,0,0,0x80,0x80);
  uVar9 = idol_draw::PackCmd(0,2,0,1,0x80);
  vuchain::SetGSReg(3,uVar9);
  draw::GetEffectTex(0x3e);
  puVar18 = *(ushort **)
             ((int)&mobyutil::g_MobyGroups +
             (int)((longlong)(short)*(undefined4 *)(uVar2 + 0x108) << 2));
  if (puVar18 != (ushort *)0x0) {
    do {
      if (MobyInstance[*puVar18 & 0x7fff].state < 0x80) {
        iVar13 = mobyupdate_helpers::M1266_00232a80
                           (MobyInstance + (*puVar18 & 0x7fff),(int)puVar4 + 0xc4);
        iVar15 = 0;
        lVar17 = lVar16;
        if (0 < iVar13) {
          do {
            M1242_0021ddf0(0x951510,0x951500,*(undefined4 *)((int)lVar17 + 0xc4),0,0x75808080);
            iVar15 = iVar15 + 1;
            lVar17 = lVar17 + 4;
          } while (iVar15 < iVar13);
        }
      }
      uVar1 = *puVar18;
      puVar18 = puVar18 + 1;
    } while (-1 < (short)uVar1);
  }
  uVar10 = (ulonglong)DAT_0096b2d7;
  lVar17 = 0x40;
  iVar13 = 0;
  lVar16 = ((LZCOUNT(-iVar19) << 0x3a) >> 0x3f & 0xfffffffffffffff0U) + 0x28;
  if (DAT_0096b2d7 != 0) {
    uVar9 = 0x3fe0000000000000;
    bVar14 = 0x10;
    do {
      puVar4[0x1d] = (longlong)(int)lVar17;
      bVar6 = DAT_0096b2d6;
      uVar21 = puVar4[0x1d];
      puVar4[0x1d] = (longlong)(int)lVar16;
      if (iVar13 < (int)(uint)bVar6) {
        M1242_0021ccd8((double)(longlong)puVar4[0x1d],(double)(longlong)uVar21,uVar9,&DAT_0076cd1c,
                       0x19,bVar14,uVar10,&DAT_00fffff3,0x50008f00);
      }
      else {
        M1242_0021ccd8((double)(longlong)puVar4[0x1d],(double)(longlong)uVar21,uVar9,&DAT_0076cd1c,
                       0x19,bVar14,uVar10,&DAT_00fffff3,0x20004f00);
      }
      uVar10 = (LZCOUNT(((int)(uint)DAT_0096b2d7 >> 1) - iVar13) << 0x3a) >> 0x3f;
      lVar16 = lVar16 + ((LZCOUNT(((int)(uint)DAT_0096b2d7 >> 1) - iVar13) << 0x3a) >> 0x3f & 0x1eU)
      ;
      iVar13 = iVar13 + 1;
      lVar17 = lVar17 + (uVar10 & 0x2eU - lVar17) + 0x12;
      bVar14 = DAT_0096b2d7;
    } while (iVar13 < (int)(uint)DAT_0096b2d7);
  }
  iVar13 = *(int *)(uVar2 + 0xe0);
  iVar15 = *(int *)(uVar2 + 0xe4);
  draw::GetEffectTex(0x11);
  puVar4[0x1d] = (longlong)iVar13;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0xe] = ZEXT48(&DAT_00fffff3);
  puVar4[0xf] = 0xffffffffff20ff20;
  uVar10 = puVar4[0x1d];
  puVar4[0x1d] = (longlong)iVar15;
  dVar24 = 40.0;
  dVar26 = 0.0;
  dVar25 = 0.5;
  puVar4[0x14] = 0;
  dVar23 = (double)(longlong)uVar10;
  dVar22 = (double)(longlong)puVar4[0x1d];
  draw::Sprite_DrawRotated
            ((float)(longlong)uVar10,(float)(longlong)puVar4[0x1d],40.0,40.0,0.0,0.5,0.5);
  draw::GetEffectTex(0x12);
  puVar4[0xe] = ZEXT48(&DAT_00fffff3);
  puVar4[0xf] = 0xffffffffff20ff20;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0x14] = 0;
  draw::Sprite_DrawRotated((float)dVar23,(float)dVar22,dVar24,dVar24,dVar26,dVar25,dVar25);
  draw::GetEffectTex(8);
  puVar4[0xe] = ZEXT48(&DAT_00fffff3);
  puVar4[0xf] = 0xffffffffff20ff20;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0x14] = 0;
  draw::Sprite_DrawRotated((float)dVar23,(float)dVar22,10.0,10.0,dVar26,dVar25,dVar25);
  M1242_0021e5f8(param_1,uVar20);
  if (*(uint *)(uVar2 + 0x88) != 0) {
    draw::ScreenPosFromWorldSpace(uVar8 - 0xd0,(ulonglong)*(uint *)(uVar2 + 0x88) + 0x10);
    puVar4[0x1d] = (longlong)SCREEN_PROJECTION_MAP_X;
    dVar22 = 0.0625;
    uVar9 = fastfunc::FastDoubleToInt
                      ((double)((*(float *)(puVar4 + 0x16) - (float)(longlong)puVar4[0x1d]) * 0.0625
                               ));
    puVar4[0x1d] = (longlong)SCREEN_PROJECTION_MAP_Y;
    uVar11 = fastfunc::FastDoubleToInt
                       ((double)(float)((double)(*(float *)((int)puVar4 + 0xb4) -
                                                (float)(longlong)puVar4[0x1d]) * dVar22));
    if (DAT_0076c7f8 < *(int *)(uVar2 + 0x8c)) {
      dVar22 = (double)fastfunc::FastIntToDouble(*(int *)(uVar2 + 0x8c) - DAT_0076c7f8);
      dVar23 = (double)fastfunc::FastIntToDouble(DAT_0076c7fc);
      dVar24 = (double)((float)(dVar22 / dVar23) * 5.0 + 1.0);
      dVar22 = (double)((1.0 - (float)(dVar22 / dVar23)) * 2.0);
      dVar23 = 1.0 - dVar22;
      if (dVar23 < 0.0) {
        dVar22 = 1.0;
      }
      fastfunc::FastDoubleToInt
                ((double)(float)(dVar22 * 96.0),0x3ff0000000000000,dVar23,0x4014000000000000);
      uVar9 = fastfunc::FastIntToDouble(uVar9);
      uVar11 = fastfunc::FastIntToDouble(uVar11);
      dVar22 = (double)fastfunc::FastIntToDouble(worldUpdateTime);
      fVar31 = mobyutil::MB_WrapRot((float)(dVar22 * 0.03333333507180214));
      M1242_0021d328(uVar9,uVar11,dVar24,(double)fVar31);
      *(undefined4 *)(uVar2 + 0xec) = 0;
    }
    else {
      puVar4[0x1d] = (longlong)(int)(animationSpeed * 20.5);
      uVar9 = fastfunc::FastIntToDouble(uVar9);
      uVar11 = fastfunc::FastIntToDouble(uVar11);
      M1242_0021d328(uVar9,uVar11,0x3ff0000000000000,dVar26);
      *(undefined4 *)(uVar2 + 0xec) = *(undefined4 *)(uVar2 + 0x88);
    }
  }
  if (DAT_0096b2e0 * 0.25 <= DAT_0096b2dc) {
    if (*(int *)(uVar2 + 0x11c) != 0) {
      if (CHAR_ARRAY_00a1000c._704_2_ != -1) {
        CHAR_ARRAY_00a1000c._704_2_ = CHAR_ARRAY_00a1000c._704_2_ + 1;
      }
      puVar4[0x1d] = (longlong)update::g_GameFrameCount;
      uVar7 = CHAR_ARRAY_00a1000c._706_2_;
      puVar4[0x1d] = (longlong)
                     (int)(animationSpeed * (float)((double)(longlong)puVar4[0x1d] + dVar25));
      iVar13 = *(int *)((int)puVar4 + 0xec);
      if ((int)(uint)(ushort)uVar7 < iVar13 / 600) {
        sVar5 = (short)(iVar13 >> 0x1f);
        CHAR_ARRAY_00a1000c._706_2_ =
             ((short)(iVar13 / 600) + sVar5) - ((short)((short)(iVar13 / 0x2580000) + sVar5) >> 0xf)
        ;
      }
      CHAR_ARRAY_00a1000c._708_4_ = CHAR_ARRAY_00a1000c._708_4_ | 1 << (Level & 0x3f) | 0x80000000;
      *(undefined4 *)(uVar2 + 0x11c) = 0;
    }
  }
  else if (CHAR_ARRAY_00a1000c._704_2_ == 0) {
    help::Help_QueueMessage(STR_SHOOT_DOWN_THOSE_SMALL_0x2AFF,0x58);
  }
  else if ((ushort)CHAR_ARRAY_00a1000c._704_2_ < 2) {
    iVar13 = *(int *)(uVar2 + 0x11c) + 1;
    *(int *)(uVar2 + 0x11c) = iVar13;
    puVar4[0x1d] = (longlong)(int)(animationSpeed * 1800.5);
    if (*(int *)((int)puVar4 + 0xec) < iVar13) {
      help::Help_QueueMessage(STR_SHOOT_DOWN_THOSE_SMALL_0x2AFF,0x58);
    }
  }
  fastfunc::FastDecTimerS32(uVar20 + 0x120);
  if (((DAT_0096b2d6 < 5) && (CHAR_ARRAY_00a1000c._696_2_ == 0)) ||
     ((DAT_0096b2d6 == 0 &&
      (((ushort)CHAR_ARRAY_00a1000c._696_2_ < 2 && (*(int *)(uVar2 + 0x120) == 0)))))) {
    help::Help_QueueMessage(STR_SHOOT_DOWN_THOSE_SMALL_0x2AFE,0x57);
    auVar29 = ZEXT416(0xffffffff);
    auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
    auVar27 = vectorShiftLeftIntegerWord(auVar29,auVar29);
    auVar29 = loadVectorLeftIndexed(0x38,0x21e708);
    auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar28 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar29 = vectorMultiplyAddFloatingPoint
                        (auVar28,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,
                         auVar27);
    auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
    auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar3 = storeVectorElementWordIndexed
                      (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0x120,uVar20);
    *(undefined4 *)(uVar2 + 0x120 & 0xfffffffc) = uVar3;
  }
  if (CHAR_ARRAY_00a1000c._688_2_ == 0) {
    iVar13 = *(int *)(uVar2 + 0x128);
    *(int *)(uVar2 + 0x128) = iVar13 + 1;
    puVar4[0x1d] = (longlong)(int)(animationSpeed * 3600.5);
    if (*(int *)((int)puVar4 + 0xec) < iVar13) {
      help::Help_QueueMessage(STR_POSITION_THE_TARGETING_RETICULE_0x2AFD,0x56);
    }
  }
  if (*(char *)(param_1 + 0x20) == '\b') {
    uVar9 = help::help_msg_string_by_index(STR_MISSION_COMPLETED);
    draw::FontPrintLargeCenter(0x100,200,0x80005080,uVar9,0x11);
  }
  fVar31 = (DAT_0096b2dc - *(float *)(uVar2 + 0xf0)) * 0.2;
  if (1.0 - ABS(fVar31) < 0.0) {
    fVar31 = fVar31 / ABS(fVar31);
  }
  fVar31 = *(float *)(uVar2 + 0xf0) + fVar31;
  *(float *)(uVar2 + 0xf0) = fVar31;
  iVar13 = fastfunc::FastDoubleToInt((double)((fVar31 * 251.0) / DAT_0096b2e0));
  iVar13 = iVar13 + 2;
  iVar13 = iVar13 + ((uint)(0xfd - (longlong)iVar13 >> 0x3f) & 0xfdU - iVar13);
  *(uint *)(uVar2 + 0xf4) = iVar13 + ((uint)((longlong)iVar13 + -2 >> 0x3f) & 2U - iVar13);
  return;
}



//==== 0021f2b0  ns=mobyupd::update1242  size=0x2fc
// sig: undefined M1242_0021f2b0(void)
// callers(1): 0021ff90 mobyupd::update1242::M1242_0021ff90
// callees(7): 00065490 draw::ScreenPosFromWorldSpace; 000f1114 mobyfunc::GetBonePosition; 000fe610 mobyutil::MB_SphericalToVector; 0015d12c sound::PlayMobySound; 00184670 mobyupdate_helpers::M1009_00184670; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

void mobyupd::update1242::M1242_0021f2b0
               (double param_1,double param_2,MobyInstance *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  longlong local_50;
  
  mobyutil::MB_SphericalToVector
            (DAT_0076c6f8 * DAT_0076c72c,(float)param_1,(float)param_2,&local_90);
  local_90 = local_90 + *param_4;
  local_8c = local_8c + param_4[1];
  local_88 = local_88 + param_4[2];
  iVar5 = fastfunc::FastDecTimerS32(param_4 + 0x20);
  if ((iVar5 != 0) && ((pad_DownButtons & 0x84) != 0)) {
    dVar7 = 0.0;
    fVar6 = SQRT(local_88 * local_88 + local_90 * local_90 + local_8c * local_8c);
    fVar1 = 2.2 / fVar6;
    dVar9 = dVar7;
    if (0.0 - fVar6 < 0.0) {
      dVar9 = (double)(local_88 * fVar1);
    }
    dVar8 = dVar7;
    if (0.0 - fVar6 < 0.0) {
      dVar8 = (double)(local_8c * fVar1);
    }
    if (0.0 - fVar6 < 0.0) {
      dVar7 = (double)(local_90 * fVar1);
    }
    if (fVar6 - 0.0 < 0.0) {
      dVar9 = (double)(local_88 * fVar1);
    }
    if (fVar6 - 0.0 < 0.0) {
      dVar8 = (double)(local_8c * fVar1);
    }
    if (fVar6 - 0.0 < 0.0) {
      dVar7 = (double)(local_90 * fVar1);
    }
    mobyfunc::GetBonePosition(param_3,(*(byte *)((int)param_4 + 0x61) & 1) + 3,&local_80);
    local_80 = (float)((double)local_80 + dVar7);
    local_7c = (float)((double)local_7c + dVar8);
    local_78 = (float)((double)local_78 + dVar9);
    mobyupdate_helpers::M1009_00184670
              (0x4069000000000000,0xbff0000000000000,param_3,&local_90,&local_80);
    fVar6 = DAT_0076c6fc;
    *(byte *)((int)param_4 + 0x61) = *(byte *)((int)param_4 + 0x61) ^ 1;
    param_4[0x20] = fVar6;
    sound::PlayMobySound(3,0,param_3);
  }
  fVar4 = 0.0;
  local_64 = local_84;
  fVar3 = SQRT(local_88 * local_88 + local_90 * local_90 + local_8c * local_8c);
  fVar2 = 23.0 / fVar3;
  fVar1 = local_90 * fVar2;
  fVar6 = local_8c * fVar2;
  fVar2 = local_88 * fVar2;
  local_90 = fVar4;
  if (0.0 - fVar3 < 0.0) {
    local_90 = fVar1;
  }
  local_8c = fVar4;
  if (0.0 - fVar3 < 0.0) {
    local_8c = fVar6;
  }
  if (0.0 - fVar3 < 0.0) {
    fVar4 = fVar2;
  }
  if (fVar3 - 0.0 < 0.0) {
    local_90 = fVar1;
  }
  if (fVar3 - 0.0 < 0.0) {
    local_8c = fVar6;
  }
  local_88 = fVar4;
  if (fVar3 - 0.0 < 0.0) {
    local_88 = fVar2;
  }
  local_70 = local_90 + (param_3->pos).x;
  local_6c = local_8c + (param_3->pos).y;
  local_68 = local_88 + (param_3->pos).z;
  draw::ScreenPosFromWorldSpace(&local_60,&local_70);
  local_50 = (longlong)SCREEN_PROJECTION_MAP_X;
  dVar9 = 0.0625;
  fVar6 = (float)fastfunc::FastDoubleToInt((double)((local_60 - (float)local_50) * 0.0625));
  param_4[0x38] = fVar6;
  local_50 = (longlong)SCREEN_PROJECTION_MAP_Y;
  fVar6 = (float)fastfunc::FastDoubleToInt
                           ((double)(float)((double)(local_5c - (float)local_50) * dVar9));
  param_4[0x39] = fVar6;
  return;
}



//==== 0021f5b8  ns=mobyupd::update1242  size=0x1e0
// sig: undefined M1242_0021f5b8(void)
// callers(1): 0021ff90 mobyupd::update1242::M1242_0021ff90
// callees(4): 000f1114 mobyfunc::GetBonePosition; 0015d12c sound::PlayMobySound; 00192330 mobyupdate_helpers::Spawn_Moby1034; 004fff60 fastfunc::FastDecTimerS32

void mobyupd::update1242::M1242_0021f5b8(longlong param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined1 local_40 [40];
  
  iVar2 = fastfunc::FastDecTimerS32(param_2 + 0x84);
  if (((iVar2 != 0) && ((pad_DownButtons & 0x28) != 0)) && (DAT_0096b2d6 != '\0')) {
    uVar1 = *(short *)(param_2 + 0x6a) + 1U & 3;
    *(ushort *)(param_2 + 0x6a) = uVar1;
    mobyfunc::GetBonePosition(param_1,(longlong)(short)uVar1 + 7,local_40);
    iVar2 = 0;
    if ((*(int *)(param_2 + 0x88) != 0) && (*(int *)(param_2 + 0x8c) < 0x1f5)) {
      iVar2 = *(int *)(param_2 + 0x88);
    }
    iVar2 = mobyupdate_helpers::Spawn_Moby1034
                      ((double)(DAT_0076c700 * DAT_0076c72c),param_1,local_40,iVar2,param_1 + 0x40,
                       &PTR_DAT_00770000,(int)(animationSpeed * 300.5));
    if (iVar2 != 0) {
      sound::PlayMobySound(2,0,(MobyInstance *)param_1);
      DAT_0096b2d6 = DAT_0096b2d6 + -1;
      *(undefined4 *)(param_2 + 0x84) = DAT_0076c704;
    }
  }
  return;
}



//==== 0021f7a8  ns=mobyupd::update1242  size=0x98
// sig: undefined M1242_0021f7a8(void)
// callers(0): 
// callees(0): 

double mobyupd::update1242::M1242_0021f7a8(double param_1,double param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  
  fVar1 = *(float *)(param_3 + 0x14) - DAT_0076d184;
  fVar2 = *(float *)(param_3 + 0x10) - DAT_0076d180;
  fVar3 = *(float *)(param_3 + 0x18) - DAT_0076d188;
  fVar1 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (220.0 < fVar1) {
    dVar4 = (double)((fVar1 - 220.0) * 0.0055555557);
    if (dVar4 - 0.0 < 0.0) {
      dVar4 = 0.0;
    }
    if (1.0 - dVar4 < 0.0) {
      dVar4 = 1.0;
    }
    param_1 = (double)(float)((double)(float)(1.0 - dVar4) * param_1 +
                             (double)(float)(dVar4 * param_2));
  }
  return param_1;
}



//==== 0021f870  ns=mobyupd::update1242  size=0x6c0
// sig: undefined M1242_0021f870(void)
// callers(1): 0021ff90 mobyupd::update1242::M1242_0021ff90
// callees(2): 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

undefined4 *
mobyupd::update1242::M1242_0021f870(undefined8 param_1,float *param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  float fVar8;
  int iVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  longlong lVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  float *pfVar21;
  Cuboid *pCVar22;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar23;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  byte in_cr6;
  ulonglong in_LR;
  longlong lVar24;
  undefined8 uVar25;
  double dVar26;
  ulonglong in_f29;
  double dVar27;
  double dVar28;
  ulonglong in_f30;
  double dVar29;
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
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar17 = uVar15 - 0x110;
  puVar7 = (ulonglong *)lVar17;
  *puVar7 = uVar15;
  puVar7[0x24] = in_LR;
  puVar7[0x1f] = in_f29;
  puVar7[0x20] = in_f30;
  puVar7[0x21] = in_f31;
  lVar13 = uVar15 - 0x50;
  puVar14 = (undefined4 *)lVar13;
  puVar14[3] = in_vr31_32_3;
  puVar14[2] = in_vr31_32_2;
  puVar14[1] = in_vr31_32_1;
  *puVar14 = in_vr31_32_0;
  auVar31 = ZEXT416(0xffffffff);
  auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
  auVar31 = loadVectorLeftIndexed(lVar13,0x21f840);
  fVar8 = animationSpeed * 60.5;
  auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
  puVar7[0x1c] = unaff_r29;
  auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  iVar9 = (int)param_1;
  uVar5 = *(uint *)(iVar9 + 0x78);
  uVar23 = (ulonglong)uVar5;
  auVar32 = vectorMultiplyAddFloatingPoint
                      (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,auVar32
                      );
  fVar1 = *(float *)(uVar5 + 100);
  auVar33 = loadVectorLeftIndexed(100,uVar23);
  auVar34 = loadVectorRightIndexed(0x74,uVar23);
  auVar31 = ZEXT416(0xffffffff);
  auVar35 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  fVar2 = *(float *)(uVar5 + 0x10);
  auVar36 = loadVectorLeftIndexed(0x10,uVar23);
  auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
  fVar3 = *(float *)(uVar5 + 0x14);
  auVar32 = vectorShiftLeftIntegerWord(auVar35,auVar35);
  auVar35 = loadVectorRightIndexed(0x20,uVar23);
  puVar7[0x1d] = unaff_r30;
  fVar4 = *(float *)(iVar9 + 0x10);
  puVar7[0x1e] = unaff_r31;
  auVar31 = vectorConvertFromSignedFixedPointWord(auVar31,0);
  fVar1 = fVar1 * (float)(longlong)fVar8;
  auVar40 = vectorMultiplyAddFloatingPoint(auVar33 | auVar34,auVar31,auVar32);
  auVar31 = loadVectorLeftIndexed(0x14,uVar23);
  auVar32 = loadVectorRightIndexed(0x24,uVar23);
  auVar33 = loadVectorLeftIndexed(0x10,param_1);
  pCVar22 = Cuboids + *(int *)(uVar5 + 0x104);
  uVar16 = ZEXT48(pCVar22);
  auVar34 = loadVectorLeftIndexed(0x14,param_1);
  auVar33 = vectorMultiplyAddFloatingPoint(auVar36 | auVar35,auVar40,auVar33);
  auVar31 = vectorMultiplyAddFloatingPoint(auVar31 | auVar32,auVar40,auVar34);
  auVar32 = loadVectorLeftIndexed(0x30,uVar16);
  fVar8 = (fVar2 * fVar1 + fVar4) - (pCVar22->pos).x;
  fVar10 = (fVar3 * fVar1 + *(float *)(iVar9 + 0x14)) - (pCVar22->pos).y;
  auVar33 = vectorSubtractFloatingPoint(auVar33,auVar32);
  auVar32 = loadVectorLeftIndexed(0x34,uVar16);
  auVar35 = loadVectorLeftIndexed(0x18,uVar23);
  auVar32 = vectorSubtractFloatingPoint(auVar31,auVar32);
  auVar36 = loadVectorRightIndexed(0x28,uVar23);
  fVar1 = (pCVar22->matrix).v0.x;
  fVar2 = (pCVar22->matrix).v0.y;
  auVar39 = loadVectorLeftIndexed(0x28,uVar16);
  auVar34 = loadVectorLeftIndexed(0x38,uVar16);
  auVar31 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar6 = storeVectorElementWordIndexed
                    (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x70,lVar17);
  *(undefined4 *)(puVar7 + 0xe) = uVar6;
  auVar33 = vectorAddFloatingPoint(auVar39,auVar34);
  uVar6 = storeVectorElementWordIndexed
                    (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x74,lVar17);
  *(undefined4 *)((int)puVar7 + 0x74) = uVar6;
  auVar31 = loadVectorLeftIndexed(0x18,param_1);
  *(float *)(puVar7 + 0xf) = ABS(fVar8) - ABS(fVar10);
  dVar30 = 0.0;
  uVar16 = (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar7 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x74) >> 0x1d) & 4;
  auVar31 = vectorMultiplyAddFloatingPoint(auVar35 | auVar36,auVar40,auVar31);
  dVar27 = (double)SQRT(fVar8 * fVar8 + fVar10 * fVar10);
  fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
  fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  fVar12 = ABS(*(float *)(puVar7 + 0xe));
  if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
    fVar12 = ABS(fVar10);
  }
  dVar29 = (double)SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  puVar7[0x1b] = unaff_r28;
  fVar1 = ABS(*(float *)((int)puVar7 + 0x74));
  if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
    fVar1 = ABS(fVar8);
  }
  dVar26 = dVar30;
  if (0.0 < fVar12) {
    lVar20 = uVar15 - 0x100;
    lVar19 = uVar15 - 0x94;
    lVar18 = uVar15 - 0x84;
    lVar24 = 2;
    fVar1 = (fVar1 - fVar12) / (fVar1 + fVar12);
    fVar2 = fVar1 * fVar1;
    *(float *)(puVar7 + 0x11) = fVar1;
    *(float *)(puVar7 + 0x10) = fVar1;
    *(float *)((int)puVar7 + 0x84) = fVar1;
    *(float *)((int)puVar7 + 0x7c) = fVar1;
    fVar1 = fVar2 * fVar2;
    *(float *)(puVar7 + 0x10) = *(float *)(puVar7 + 0x10) * fVar2;
    *(float *)((int)puVar7 + 0x84) = *(float *)((int)puVar7 + 0x84) * fVar1;
    *(float *)(puVar7 + 0x11) = *(float *)(puVar7 + 0x11) * fVar1 * fVar2;
    do {
      *(float *)((int)lVar20 + 0x7c) = *(float *)((int)lVar20 + 0x6c) * fVar1 * fVar1;
      iVar9 = (int)lVar19;
      lVar20 = lVar20 + 8;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)(iVar9 + 4) * fVar1 * fVar1;
      lVar18 = lVar18 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar20 = uVar15 - 0x94;
    pfVar21 = (float *)&DAT_007358e0;
    lVar24 = 4;
    lVar18 = lVar20;
    lVar19 = lVar17;
    do {
      fVar1 = *pfVar21;
      fVar2 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar19 + 0x7c) = *(float *)((int)lVar19 + 0x7c) * fVar1;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar2;
      lVar18 = lVar18 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar18 = 2;
    do {
      iVar9 = (int)lVar17;
      iVar11 = (int)lVar20;
      lVar17 = lVar17 + 0x10;
      lVar20 = lVar20 + 0x10;
      dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar9 + 0x7c)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar4 + fVar3);
  }
  uVar25 = fastfunc::FastWrapRot((float)dVar26,3.14159);
  auVar32 = loadVectorLeftIndexed(0x10,0x21f840);
  auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  if ((double)(float)(dVar29 - 10.0) < dVar27) {
    dVar28 = (double)(((float)(dVar27 - dVar29) + 10.0) * 0.1);
    dVar29 = (double)fastfunc::FastDiffRots(uVar25,(double)*(float *)(uVar5 + 0x38));
    dVar26 = 1.0;
    dVar27 = dVar26;
    if ((dVar28 <= 1.0) && (dVar27 = dVar28, dVar28 < dVar30)) {
      dVar27 = dVar30;
    }
    if (dVar29 <= dVar30) {
      fVar1 = *param_2;
    }
    else {
      fVar1 = *param_2;
      dVar26 = -1.0;
    }
    *param_2 = (float)((double)(float)(dVar26 - (double)fVar1) * dVar27 + (double)fVar1);
    DAT_0096b2ef = DAT_0096b2ef | 2;
  }
  auVar36 = vectorSubtractFloatingPoint(auVar33,auVar32);
  auVar34 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar35 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
  auVar34 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
  vectorCompareGreaterThanFloatingPoint
            (auVar35,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60);
  if ((bool)(in_cr6 >> 1 & 1)) {
    puVar14 = &DAT_0021f840;
    auVar33 = loadVectorLeftIndexed(0x28,0x21f840);
    auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
    vectorCompareGreaterThanOrEqualToFloatingPoint
              (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60);
    if ((bool)(in_cr6 >> 1 & 1)) {
      auVar33 = ZEXT416(0xffffffff);
      auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
      auVar35 = vectorShiftLeftIntegerWord(auVar33,auVar33);
      auVar33 = loadVectorLeftIndexed(0x2c,0x21f840);
      auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar34 = loadVectorLeftIndexed(0x14,0x21f840);
      auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar31 = vectorSubtractFloatingPoint
                          (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,auVar31);
      auVar36 = vectorAddFloatingPoint(auVar31,auVar32);
      auVar33 = loadVectorLeftIndexed(0x34,uVar23);
      auVar39 = loadVectorRightIndexed(0x44,uVar23);
      auVar31 = loadVectorLeftIndexed(0x20,0x21f840);
      auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar32 = loadVectorLeftIndexed(0x18,0x21f840);
      auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar39 = vectorAddFloatingPoint
                          (auVar33 | auVar39,
                           auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60);
      auVar34 = vectorMultiplyAddFloatingPoint
                          (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,
                           auVar35);
      auVar31 = ZEXT416(0xffffffff);
      auVar33 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      auVar31 = loadVectorLeftIndexed(0x24,0x21f840);
      auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar33 = vectorShiftLeftIntegerWord(auVar33,auVar33);
      auVar35 = vectorMultiplyAddFloatingPoint
                          (auVar39,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                           auVar33);
      auVar31 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar33 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      vectorCompareGreaterThanFloatingPoint(auVar33,auVar32);
      auVar31 = auVar32;
      if ((bool)(in_cr6 >> 1 & 1)) {
        auVar31 = ZEXT416(0);
        vectorCompareGreaterThanOrEqualToFloatingPoint
                  (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60);
        auVar31 = auVar34;
        if ((bool)(in_cr6 >> 1 & 1)) {
          auVar31 = ZEXT416(0);
          auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
        }
      }
      auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar33 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar34 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
      vectorCompareGreaterThanFloatingPoint(auVar34,auVar32);
      auVar33 = auVar32;
      if ((bool)(in_cr6 >> 1 & 1)) {
        auVar33 = ZEXT416(0);
        vectorCompareGreaterThanOrEqualToFloatingPoint
                  (auVar34,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60);
        auVar33 = auVar35;
        if ((bool)(in_cr6 >> 1 & 1)) {
          auVar33 = ZEXT416(0);
          auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
        }
      }
      auVar34 = ZEXT416(0xffffffff);
      auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
      auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar35 = loadVectorLeftIndexed(lVar13,param_3);
      auVar34 = vectorShiftLeftIntegerWord(auVar34,auVar34);
      auVar32 = vectorSubtractFloatingPoint(auVar32,auVar35);
      puVar14 = &hero::g_heroMtx;
      auVar31 = vectorMultiplyAddFloatingPoint
                          (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                           auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,auVar34);
      auVar31 = vectorMultiplyAddFloatingPoint(auVar32,auVar31,auVar35);
      auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar6 = storeVectorElementWordIndexed
                        (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0,param_3);
      *(undefined4 *)((uint)param_3 & 0xfffffffc) = uVar6;
      DAT_0096b2ef = DAT_0096b2ef | 2;
    }
  }
  else {
    auVar34 = vectorSubtractFloatingPoint(auVar31,auVar33);
    auVar31 = ZEXT416(0xffffffff);
    auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
    auVar35 = vectorShiftLeftIntegerWord(auVar31,auVar31);
    auVar31 = loadVectorLeftIndexed(0x14,0x21f840);
    auVar39 = loadVectorLeftIndexed(0x34,uVar23);
    auVar33 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar31 = loadVectorLeftIndexed(0x18,0x21f840);
    auVar32 = vectorAddFloatingPoint(auVar34,auVar32);
    auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar34 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
    auVar40 = loadVectorRightIndexed(0x44,uVar23);
    auVar38 = loadVectorLeftIndexed(0x20,0x21f840);
    auVar31 = ZEXT416(0xffffffff);
    auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
    auVar37 = vectorShiftLeftIntegerWord(auVar31,auVar31);
    auVar36 = vectorMultiplyAddFloatingPoint
                        (auVar32,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,
                         auVar35);
    auVar31 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar32 = loadVectorLeftIndexed(0x24,0x21f840);
    auVar33 = vectorSubtractFloatingPoint
                        (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                         auVar39 | auVar40);
    auVar31 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar32 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar35 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
    vectorCompareGreaterThanFloatingPoint(auVar35,auVar34);
    auVar32 = vectorMultiplyAddFloatingPoint
                        (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                         auVar37);
    auVar31 = auVar34;
    if ((bool)(in_cr6 >> 1 & 1)) {
      auVar31 = ZEXT416(0);
      vectorCompareGreaterThanOrEqualToFloatingPoint
                (auVar35,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60);
      auVar31 = auVar36;
      if ((bool)(in_cr6 >> 1 & 1)) {
        auVar31 = ZEXT416(0);
        auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      }
    }
    auVar33 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
    vectorCompareGreaterThanFloatingPoint(auVar33,auVar34);
    if ((bool)(in_cr6 >> 1 & 1)) {
      auVar34 = ZEXT416(0);
      vectorCompareGreaterThanOrEqualToFloatingPoint
                (auVar33,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60);
      auVar34 = auVar32;
      if ((bool)(in_cr6 >> 1 & 1)) {
        auVar32 = ZEXT416(0);
        auVar34 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      }
    }
    auVar32 = ZEXT416(0xffffffff);
    auVar33 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
    auVar32 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar34 = loadVectorLeftIndexed(lVar13,param_3);
    auVar33 = vectorShiftLeftIntegerWord(auVar33,auVar33);
    auVar35 = loadVectorLeftIndexed(0x1c,0x21f840);
    auVar32 = vectorMultiplyAddFloatingPoint
                        (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                         auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,auVar33);
    auVar31 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
    puVar14 = &hero::g_heroMtx;
    auVar31 = vectorSubtractFloatingPoint
                        (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,auVar34);
    auVar31 = vectorMultiplyAddFloatingPoint(auVar31,auVar32,auVar34);
    auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar6 = storeVectorElementWordIndexed
                      (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0,param_3);
    *(undefined4 *)((uint)param_3 & 0xfffffffc) = uVar6;
    DAT_0096b2ef = DAT_0096b2ef | 2;
  }
  return puVar14;
}



//==== 0021ff90  ns=mobyupd::update1242  size=0x1078
// sig: undefined M1242_0021ff90(void)
// callers(1): 00221048 mobyupd::update1242::UpdateMoby_1242_JetFighterPoki
// callees(18): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00059e20 collproc::CollSphere; 000668d0 draw::UpdateViewContext; 0006d720 RegisterFuncForMoby; 0007b310 help::Help_QueueMessage; 000fe610 mobyutil::MB_SphericalToVector; 00109b40 mobyutil::AccelDelt; 00109c30 mobyutil::OrganicDelt; 0010a050 mobyutil::AccelDeltAng; 0010e030 mobyutil::MB_genericExplosion; 0021f2b0 mobyupd::update1242::M1242_0021f2b0; 0021f5b8 mobyupd::update1242::M1242_0021f5b8; 0021f870 mobyupd::update1242::M1242_0021f870; 00500608 fastfunc::FastVecNormalize; 00500b64 fastfunc::FastEulerToMtx; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots
// strings: 00a0feec: 'None'

void mobyupd::update1242::M1242_0021ff90(MobyInstance *param_1,longlong param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  short sVar11;
  MOBY_OCLASSES MVar12;
  ulonglong *puVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  CONTROLLER_INPUT CVar18;
  undefined2 uVar19;
  ulonglong uVar20;
  int iVar23;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar24;
  float *pfVar26;
  longlong lVar25;
  longlong lVar27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  double dVar31;
  ulonglong in_f27;
  ulonglong in_f28;
  undefined8 uVar32;
  ulonglong in_f29;
  double dVar33;
  ulonglong in_f30;
  double dVar34;
  double dVar35;
  ulonglong in_f31;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  
  uVar20 = ZEXT48(&stack0x00000000);
  lVar22 = uVar20 - 0x1e0;
  puVar13 = (ulonglong *)lVar22;
  *puVar13 = uVar20;
  puVar13[0x3e] = in_LR;
  puVar13[0x37] = in_f27;
  puVar13[0x38] = in_f28;
  puVar13[0x39] = in_f29;
  puVar13[0x3a] = in_f30;
  puVar13[0x3b] = in_f31;
  puVar13[0x36] = unaff_r31;
  puVar13[0x35] = unaff_r30;
  dVar33 = 0.0;
  *(undefined4 *)(puVar13 + 0x18) = 0;
  *(undefined4 *)((int)puVar13 + 0xc4) = 0;
  *(undefined4 *)(puVar13 + 0x19) = 0;
  *(undefined4 *)((int)puVar13 + 0xcc) = 0;
  fVar2 = DAT_0076c72c;
  uVar32 = 0x4020000000000000;
  fVar42 = mobyutil::g_FrameTime * 8.0;
  param_1->modeBits =
       param_1->modeBits &
       (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
        DRAW_TRANSPARENT_WEIRD|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
        NO_UPDATE|DISABLED);
  fVar3 = DAT_0076c72c;
  iVar14 = (int)param_2;
  sVar11 = *(short *)(iVar14 + 0x68);
  bVar1 = DAT_0076c68c < sVar11;
  puVar13[0x34] = unaff_r29;
  puVar13[0x33] = unaff_r28;
  *(float *)(puVar13 + 0x19) = fVar42 * fVar2;
  fVar2 = DAT_0076c72c;
  fVar42 = DAT_0076c684;
  if (bVar1) {
    if ((pad_DownButtons & 0x40) == 0) {
      fVar2 = *(float *)(iVar14 + 100);
      if (DAT_0076c690 * fVar3 - DAT_0076c688 * fVar3 <= fVar2) {
        fVar42 = DAT_0076c690 * fVar3;
        if (fVar42 < fVar2) {
          fVar42 = (DAT_0076c690 * fVar3 - fVar2) * DAT_0076c69c + fVar2;
        }
      }
      else {
        fVar42 = DAT_0076c688 * fVar3 + fVar2;
      }
      *(float *)(iVar14 + 100) = fVar42;
    }
    else {
      if (CHAR_ARRAY_00a0feec._224_2_ != -1) {
        CHAR_ARRAY_00a0feec._224_2_ = CHAR_ARRAY_00a0feec._224_2_ + 1;
      }
      puVar13[0x31] = (longlong)update::g_GameFrameCount;
      uVar19 = CHAR_ARRAY_00a0feec._226_2_;
      puVar13[0x31] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar13[0x31] + 0.5));
      iVar23 = *(int *)((int)puVar13 + 0x18c);
      if ((int)(uint)(ushort)uVar19 < iVar23 / 600) {
        sVar11 = (short)(iVar23 >> 0x1f);
        CHAR_ARRAY_00a0feec._226_2_ =
             ((short)(iVar23 / 600) + sVar11) -
             ((short)((short)(iVar23 / 0x2580000) + sVar11) >> 0xf);
      }
      fVar42 = DAT_0076c698 * fVar3 + *(float *)(iVar14 + 100);
      CHAR_ARRAY_00a0feec._228_4_ = CHAR_ARRAY_00a0feec._228_4_ | 1 << (Level & 0x3f) | 0x80000000;
      *(float *)(iVar14 + 100) = fVar42;
      fVar2 = DAT_0076c694 * DAT_0076c72c;
      if (fVar2 < fVar42) {
        *(float *)(iVar14 + 100) = fVar2;
        fVar42 = fVar2;
      }
    }
  }
  else {
    *(short *)(iVar14 + 0x68) = sVar11 + 1;
    fVar42 = fVar42 * fVar2 + *(float *)(iVar14 + 100);
    *(float *)(iVar14 + 100) = fVar42;
  }
  fVar4 = DAT_0096ba04;
  fVar5 = hero::g_heroPadStick;
  fVar3 = DAT_0076c750;
  fVar2 = DAT_0076c740;
  if (DAT_0076c6a0 < *(short *)(iVar14 + 0x68)) {
    CVar18 = g_downButtons & L3;
    *(float *)(puVar13 + 0x26) = hero::g_heroPadStick;
    *(float *)((int)puVar13 + 0x134) = fVar4;
    fVar7 = DAT_0076c754;
    fVar6 = DAT_0076c744;
    fVar42 = DAT_0076c6b8;
    if (CVar18 != 0) {
      fVar4 = fVar4 / DAT_0076c6b0;
      fVar2 = DAT_0076c6bc * (fVar5 / DAT_0076c6b4);
      *(float *)(puVar13 + 0x26) = fVar5 / DAT_0076c6b4;
      *(float *)(puVar13 + 0x26) = fVar2;
      *(float *)((int)puVar13 + 0x134) = fVar4;
      *(float *)((int)puVar13 + 0x134) = fVar42 * fVar4;
      fVar3 = fVar7;
      fVar2 = fVar6;
    }
    dVar36 = (double)fVar2;
    dVar34 = (double)fVar3;
    M1242_0021f870(param_1,uVar20 - 0xb0,uVar20 - 0xac);
    mobyutil::AccelDelt(*(float *)(puVar13 + 0x26),DAT_0076c738,DAT_0076c73c,(float)dVar36,
                        (float *)(iVar14 + 0x6c),0x770000,(float *)(iVar14 + 0x90));
    mobyutil::AccelDelt(*(float *)((int)puVar13 + 0x134),DAT_0076c748,DAT_0076c74c,(float)dVar34,
                        (float *)(iVar14 + 0x70),0x770000,(float *)(iVar14 + 0x94));
    mobyutil::AccelDeltAng
              ((double)(*(float *)(iVar14 + 0x6c) * DAT_0076c718),(double)DAT_0076c758,
               (double)DAT_0076c75c,(double)DAT_0076c760,param_2 + 0x30,&PTR_DAT_00770000,
               param_2 + 0x98);
    dVar34 = (double)fastfunc::FastDiffRots
                               ((double)*(float *)(iVar14 + 0x34),
                                (double)(*(float *)(iVar14 + 0x70) * DAT_0076c6b0));
    *(float *)(iVar14 + 0x34) = (float)dVar34;
    if (dVar34 <= 1.3962633609771729) {
      if (dVar34 < -1.3962633609771729) {
        *(undefined4 *)(iVar14 + 0x34) = 0xbfb2b8c2;
      }
    }
    else {
      *(undefined4 *)(iVar14 + 0x34) = 0x3fb2b8c2;
    }
    dVar34 = (double)fastfunc::FastDiffRots
                               ((double)*(float *)(iVar14 + 0x38),
                                (double)(*(float *)(iVar14 + 0x6c) * DAT_0076c6b4));
    *(float *)(iVar14 + 0x38) = (float)dVar34;
    fVar42 = *(float *)(iVar14 + 100);
  }
  mobyutil::MB_SphericalToVector
            (fVar42,*(float *)(iVar14 + 0x38),-*(float *)(iVar14 + 0x34),(float *)(puVar13 + 0x1a));
  fVar42 = *(float *)((int)puVar13 + 0xd4);
  fVar2 = *(float *)(puVar13 + 0x1a);
  fVar3 = *(float *)(puVar13 + 0x1b);
  fVar4 = *(float *)(iVar14 + 100);
  fVar5 = *(float *)(iVar14 + 0x70);
  fVar6 = *(float *)(iVar14 + 0x6c);
  fVar7 = (param_1->pos).x;
  fVar8 = (param_1->pos).y;
  fVar9 = (param_1->pos).z;
  fVar15 = fVar3 * fVar3 + fVar2 * fVar2 + fVar42 * fVar42;
  if ((double)SQRT(fVar15) == dVar33) {
    uVar10 = *(undefined4 *)((int)puVar13 + 0xdc);
    dVar34 = dVar33;
    dVar36 = dVar33;
    dVar37 = dVar33;
  }
  else {
    fVar16 = 1.0 / SQRT(fVar15);
    uVar10 = *(undefined4 *)((int)puVar13 + 0xdc);
    fVar16 = -(fVar15 * fVar16 * fVar16 - 1.0) * fVar16 * 0.5 + fVar16;
    fVar16 = -(fVar15 * fVar16 * fVar16 - 1.0) * fVar16 * 0.5 + fVar16;
    fVar16 = -(fVar15 * fVar16 * fVar16 - 1.0) * fVar16 * 0.5 + fVar16;
    dVar37 = (double)(fVar2 * fVar16);
    dVar36 = (double)(fVar42 * fVar16);
    dVar34 = (double)(fVar3 * fVar16);
  }
  *(float *)(iVar14 + 0x10) = (float)dVar37;
  *(float *)(iVar14 + 0x14) = (float)dVar36;
  *(float *)(iVar14 + 0x18) = (float)dVar34;
  *(undefined4 *)(iVar14 + 0x1c) = uVar10;
  (param_1->pos).x = fVar7 + fVar2;
  (param_1->pos).y = fVar8 + fVar42;
  (param_1->pos).z = fVar9 + fVar3;
  dVar34 = (double)(fVar4 - DAT_0076c690);
  if (dVar34 - dVar33 < 0.0) {
    dVar34 = dVar33;
  }
  fVar42 = (float)(dVar34 / (double)(DAT_0076c694 - DAT_0076c690));
  *(float *)(iVar14 + 0xc4) = fVar42;
  dVar36 = (double)(fVar6 * DAT_0076c71c * DAT_0076c728);
  dVar34 = (double)((fVar5 * DAT_0076c7c8 + DAT_0076c6c4) * DAT_0076c728);
  mobyutil::AccelDelt(-(DAT_0076c7cc * fVar42 - -(fVar5 * DAT_0076c7c4 - DAT_0076c6c0)) *
                      DAT_0076c728,DAT_0076c7a0,DAT_0076c7a4,DAT_0076c7a8,(float *)(iVar14 + 0xb4),
                      0x770000,(float *)(iVar14 + 200));
  mobyutil::AccelDelt((float)dVar36,DAT_0076c7ac,DAT_0076c7b0,DAT_0076c7b4,(float *)(iVar14 + 0xb8),
                      0x770000,(float *)(iVar14 + 0xcc));
  fVar42 = mobyutil::AccelDelt((float)dVar34,DAT_0076c7b8,DAT_0076c7bc,DAT_0076c7c0,
                               (float *)(iVar14 + 0xbc),0x770000,(float *)(iVar14 + 0xd0));
  dVar37 = (double)*(float *)(iVar14 + 0xb4);
  dVar36 = (double)*(float *)(iVar14 + 0xb8);
  dVar34 = (double)*(float *)(iVar14 + 0xbc);
  fastfunc::FastEulerToMtx((double)fVar42,uVar20 - 0xe0,param_2 + 0x30);
  fVar42 = (param_1->pos).x;
  fVar2 = (param_1->pos).y;
  fVar3 = (param_1->pos).z;
  *(f32 *)((int)puVar13 + 0xfc) = (param_1->pos).w;
  *(float *)(puVar13 + 0x1e) =
       fVar42 + (float)((double)*(float *)(puVar13 + 0x24) * dVar34 +
                       (double)(float)((double)*(float *)(puVar13 + 0x20) * dVar37 +
                                      (double)(float)((double)*(float *)(puVar13 + 0x22) * dVar36)))
  ;
  *(float *)((int)puVar13 + 0xf4) =
       fVar2 + (float)((double)*(float *)((int)puVar13 + 0x124) * dVar34 +
                      (double)(float)((double)*(float *)((int)puVar13 + 0x104) * dVar37 +
                                     (double)(float)((double)*(float *)((int)puVar13 + 0x114) *
                                                    dVar36)));
  *(float *)(puVar13 + 0x1f) =
       fVar3 + (float)((double)*(float *)(puVar13 + 0x25) * dVar34 +
                      (double)(float)((double)*(float *)(puVar13 + 0x21) * dVar37 +
                                     (double)(float)((double)*(float *)(puVar13 + 0x23) * dVar36)));
  camera::camera5::Camera_SetMobyDrivenTargetPos((float *)(puVar13 + 0x1e));
  uVar29 = fastfunc::FastWrapRot
                     (*(float *)(iVar14 + 0x30) * DAT_0076c6d4,
                      *(float *)(iVar14 + 0x6c) * DAT_0076c6d0);
  uVar30 = fastfunc::FastWrapRot(*(float *)(iVar14 + 0x34),DAT_0076c6d8);
  uVar30 = fastfunc::FastDiffRots(uVar30,(double)(*(float *)(iVar14 + 0x70) * DAT_0076c6b0));
  dVar34 = (double)*(float *)(iVar14 + 0x38);
  mobyutil::AccelDeltAng
            (uVar29,(double)DAT_0076c77c,(double)DAT_0076c780,(double)DAT_0076c784,param_2 + 0x20,
             &PTR_DAT_00770000,param_2 + 0xa0);
  mobyutil::AccelDeltAng
            (uVar30,(double)DAT_0076c788,(double)DAT_0076c78c,(double)DAT_0076c790,param_2 + 0x24,
             &PTR_DAT_00770000,param_2 + 0xa4);
  mobyutil::AccelDeltAng
            (dVar34,(double)DAT_0076c794,(double)DAT_0076c798,(double)DAT_0076c79c,param_2 + 0x28,
             &PTR_DAT_00770000,param_2 + 0xa8);
  fVar42 = *(float *)(iVar14 + 0x28);
  fVar2 = *(float *)(iVar14 + 0xd4);
  *(undefined4 *)(puVar13 + 0x1c) = *(undefined4 *)(iVar14 + 0x20);
  dVar34 = (double)fastfunc::FastDiffRots((double)fVar42,(double)fVar2);
  fVar42 = *(float *)(iVar14 + 0x24);
  *(float *)(puVar13 + 0x1d) = (float)dVar34;
  dVar34 = (double)fastfunc::FastDiffRots((double)fVar42,(double)*(float *)(iVar14 + 0xd8));
  *(float *)((int)puVar13 + 0xe4) = (float)dVar34;
  camera::camera5::Camera_SetMobyDrivenTargetRot((float *)(puVar13 + 0x1c));
  fVar42 = DAT_0076c7d0;
  if ((pad_DownButtons & 0x40) != 0) {
    fVar42 = DAT_0076c7d4;
  }
  dVar34 = 2.0;
  mobyutil::OrganicDelt
            (fVar42,DAT_0071f418 * 2.0,DAT_0071f418 * 2.0,mobyutil::g_FrameTime * 2.0,
             (float *)(iVar14 + 0xb0),0x720000,(float *)(iVar14 + 0xc0));
  fVar42 = *(float *)(iVar14 + 0xb0) * 0.5;
  fVar3 = fVar42 + 1.5707963;
  fVar2 = 3.1415925 - fVar42;
  if (fVar42 - (3.1415925 - fVar42) < 0.0) {
    fVar2 = fVar42;
  }
  fVar4 = 3.1415925 - fVar3;
  if (fVar3 - (3.1415925 - fVar3) < 0.0) {
    fVar4 = fVar3;
  }
  fVar5 = -3.1415925 - fVar42;
  if ((-3.1415925 - fVar42) - fVar2 < 0.0) {
    fVar5 = fVar2;
  }
  fVar2 = fVar5 * fVar5;
  fVar42 = -3.1415925 - fVar3;
  if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
    fVar42 = fVar4;
  }
  fVar3 = fVar42 * fVar42;
  fVar4 = fVar2 * fVar2 * fVar5;
  fVar6 = fVar2 * fVar4;
  fVar7 = fVar3 * fVar3 * fVar42;
  fVar8 = fVar3 * fVar7;
  ViewContext.xratio =
       (fVar2 * fVar6 * 2.601887e-06 +
       fVar6 * -0.0001980741 + fVar4 * 0.0083330255 + fVar2 * fVar5 * -0.16666657 + fVar5) /
       (fVar3 * fVar8 * 2.601887e-06 +
       fVar8 * -0.0001980741 + fVar7 * 0.0083330255 + fVar3 * fVar42 * -0.16666657 + fVar42);
  draw::UpdateViewContext();
  dVar36 = (double)fastfunc::FastWrapRot
                             (*(float *)(iVar14 + 0x30),*(float *)(iVar14 + 0x6c) * DAT_0076c7ec);
  (param_1->rotation).x = (float)dVar36;
  dVar36 = (double)fastfunc::FastWrapRot
                             (*(float *)(iVar14 + 0x34),-(*(float *)(iVar14 + 0x70) * DAT_0076c7f0))
  ;
  (param_1->rotation).y = (float)dVar36;
  dVar36 = (double)fastfunc::FastWrapRot
                             (*(float *)(iVar14 + 0x38),-(*(float *)(iVar14 + 0x6c) * DAT_00f0cec4))
  ;
  (param_1->rotation).z = (float)dVar36;
  iVar23 = collproc::CollSphere(dVar34,&param_1->pos);
  if (iVar23 != 0) {
    if (CollOutput.pMoby == (MobyInstance *)0x0) {
      puVar13[0x12] = 0xffffffffffffffff;
      puVar13[0x14] = 1;
      puVar13[0x15] = 1;
      puVar13[0x16] = 0xffffffffffffffff;
      puVar13[0x17] = 0;
      mobyutil::MB_genericExplosion
                (uVar32,0x4059000000000000,0x4030000000000000,uVar32,0x4022000000000000,
                 0x3ff0000000000000,0x4049000000000000,param_1,&DAT_00a15d30,0,1,0xffffffffffffffff,
                 0x1e,10,0x18);
      param_1->enabled = '\0';
      auVar39 = ZEXT416(0xffffffff);
      auVar40 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
      param_1->state = '\a';
      param_1->modeBits = param_1->modeBits | DISABLED;
      auVar39 = loadVectorLeftIndexed(0x48,0x21ff30);
      auVar40 = vectorShiftLeftIntegerWord(auVar40,auVar40);
      auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar39 = vectorMultiplyAddFloatingPoint
                          (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                           auVar40);
      auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
      auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar10 = storeVectorElementWordIndexed
                         (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0xf8,param_2
                         );
      *(undefined4 *)(iVar14 + 0xf8U & 0xfffffffc) = uVar10;
    }
    else {
      MVar12 = (CollOutput.pMoby)->oClass;
      if (((MVar12 != 0x192 && MVar12 != RATCHET) && (MVar12 != AMMOCRATE_04C2)) &&
         (MVar12 != 0x4c3)) {
        (param_1->pos).x = CollOutput.push.x;
        (param_1->pos).y = CollOutput.push.y;
        (param_1->pos).z = CollOutput.push.z;
        (param_1->pos).w = CollOutput.push.w;
        fastfunc::FastVecNormalize(uVar20 - 0x110,uVar20 - 0x110,0xa10980);
        dVar31 = ABS((double)*(float *)(puVar13 + 0x1a));
        dVar38 = (double)*(float *)(iVar14 + 0x38);
        dVar36 = ABS((double)*(float *)((int)puVar13 + 0xd4));
        *(float *)(puVar13 + 0x28) = (float)(dVar31 - dVar36);
        dVar35 = 0.7853981852531433;
        uVar24 = (ulonglong)(*(uint *)(puVar13 + 0x1a) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar13 + 0x28) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0xd4) >> 0x1d) & 4;
        dVar37 = dVar31;
        if ((double)*(float *)(puVar13 + 0x28) - dVar33 < 0.0) {
          dVar37 = dVar36;
        }
        fVar42 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
        if ((double)*(float *)(puVar13 + 0x28) - dVar33 < 0.0) {
          dVar36 = dVar31;
        }
        fVar2 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
        dVar31 = dVar33;
        if (dVar33 < dVar37) {
          lVar21 = uVar20 - 0x1d0;
          lVar27 = uVar20 - 0x6c;
          lVar25 = uVar20 - 0x7c;
          lVar28 = 2;
          fVar3 = (float)(dVar36 - dVar37) / (float)(dVar36 + dVar37);
          fVar4 = fVar3 * fVar3;
          *(float *)(puVar13 + 0x2e) = fVar3;
          *(float *)(puVar13 + 0x2d) = fVar3;
          *(float *)((int)puVar13 + 0x16c) = fVar3;
          *(float *)((int)puVar13 + 0x164) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)(puVar13 + 0x2d) = *(float *)(puVar13 + 0x2d) * fVar4;
          *(float *)((int)puVar13 + 0x16c) = *(float *)((int)puVar13 + 0x16c) * fVar3;
          *(float *)(puVar13 + 0x2e) = *(float *)(puVar13 + 0x2e) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar21 + 0x164) = *(float *)((int)lVar21 + 0x154) * fVar3 * fVar3;
            iVar23 = (int)lVar25;
            lVar25 = lVar25 + 8;
            lVar21 = lVar21 + 8;
            *(float *)((int)lVar27 + 4) = *(float *)(iVar23 + 4) * fVar3 * fVar3;
            lVar27 = lVar27 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar28 = 4;
          lVar27 = uVar20 - 0x7c;
          pfVar26 = (float *)&DAT_007358e0;
          lVar21 = lVar22;
          lVar25 = lVar27;
          do {
            fVar3 = *pfVar26;
            fVar4 = pfVar26[1];
            pfVar26 = pfVar26 + 2;
            *(float *)((int)lVar21 + 0x164) = *(float *)((int)lVar21 + 0x164) * fVar3;
            lVar21 = lVar21 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar4;
            lVar25 = lVar25 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar25 = 2;
          lVar21 = lVar22;
          dVar36 = dVar33;
          do {
            iVar23 = (int)lVar21;
            iVar17 = (int)lVar27;
            lVar21 = lVar21 + 0x10;
            lVar27 = lVar27 + 0x10;
            dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar23 + 0x164)) +
                              *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                             *(float *)(iVar17 + 0xc));
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          dVar31 = (double)((float)(dVar36 + 0.7853981852531433) * fVar42 + fVar2);
        }
        dVar36 = (double)fastfunc::FastDiffRots(dVar31,dVar38);
        dVar36 = (double)fastfunc::FastWrapRot((float)dVar38,(float)(dVar36 * (double)DAT_0076c6a4))
        ;
        fVar42 = *(float *)((int)puVar13 + 0xd4);
        fVar2 = *(float *)(puVar13 + 0x1a);
        *(float *)(iVar14 + 0x38) = (float)dVar36;
        dVar38 = (double)*(float *)(iVar14 + 0x34);
        dVar36 = ABS((double)*(float *)(puVar13 + 0x1b));
        fVar42 = SQRT(fVar2 * fVar2 + fVar42 * fVar42);
        dVar31 = ABS((double)fVar42);
        *(float *)(puVar13 + 0x27) = fVar42;
        *(float *)((int)puVar13 + 0x13c) = (float)(dVar31 - dVar36);
        uVar24 = (ulonglong)(*(uint *)(puVar13 + 0x27) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0x13c) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar13 + 0x1b) >> 0x1d) & 4;
        dVar37 = ABS((double)*(float *)(puVar13 + 0x27));
        if ((double)*(float *)((int)puVar13 + 0x13c) - dVar33 < 0.0) {
          dVar37 = dVar36;
        }
        fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
        fVar42 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
        if ((double)*(float *)((int)puVar13 + 0x13c) - dVar33 < 0.0) {
          dVar36 = dVar31;
        }
        dVar31 = dVar33;
        if (dVar33 < dVar37) {
          lVar21 = uVar20 - 0x1d0;
          lVar25 = uVar20 - 0x9c;
          lVar27 = uVar20 - 0x8c;
          lVar28 = 2;
          fVar3 = (float)(dVar36 - dVar37) / (float)(dVar36 + dVar37);
          fVar4 = fVar3 * fVar3;
          *(float *)(puVar13 + 0x2a) = fVar3;
          *(float *)(puVar13 + 0x29) = fVar3;
          *(float *)((int)puVar13 + 0x14c) = fVar3;
          *(float *)((int)puVar13 + 0x144) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)(puVar13 + 0x29) = *(float *)(puVar13 + 0x29) * fVar4;
          *(float *)((int)puVar13 + 0x14c) = *(float *)((int)puVar13 + 0x14c) * fVar3;
          *(float *)(puVar13 + 0x2a) = *(float *)(puVar13 + 0x2a) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar21 + 0x144) = *(float *)((int)lVar21 + 0x134) * fVar3 * fVar3;
            iVar23 = (int)lVar25;
            lVar21 = lVar21 + 8;
            lVar25 = lVar25 + 8;
            *(float *)((int)lVar27 + 4) = *(float *)(iVar23 + 4) * fVar3 * fVar3;
            lVar27 = lVar27 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar28 = 4;
          lVar27 = uVar20 - 0x9c;
          pfVar26 = (float *)&DAT_007358e0;
          lVar21 = lVar22;
          lVar25 = lVar27;
          do {
            fVar3 = *pfVar26;
            fVar4 = pfVar26[1];
            pfVar26 = pfVar26 + 2;
            *(float *)((int)lVar21 + 0x144) = *(float *)((int)lVar21 + 0x144) * fVar3;
            lVar21 = lVar21 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar4;
            lVar25 = lVar25 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar21 = 2;
          dVar36 = dVar33;
          do {
            iVar23 = (int)lVar22;
            lVar22 = lVar22 + 0x10;
            iVar17 = (int)lVar27;
            lVar27 = lVar27 + 0x10;
            dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar23 + 0x144)) +
                              *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                             *(float *)(iVar17 + 0xc));
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          dVar31 = (double)((float)(dVar36 + dVar35) * fVar2 + fVar42);
        }
        dVar36 = (double)fastfunc::FastDiffRots(-dVar31,dVar38);
        dVar36 = (double)fastfunc::FastWrapRot((float)dVar38,(float)(dVar36 * (double)DAT_0076c6a8))
        ;
        *(float *)(iVar14 + 0x34) = (float)dVar36;
        *(float *)(iVar14 + 100) = *(float *)(iVar14 + 100) * DAT_0076c6e8;
        if (*(int *)(iVar14 + 0xdc) == 0) {
          DAT_0096b2dc = DAT_0096b2dc - DAT_0076c6ec;
          if ((double)DAT_0096b2dc < dVar33) {
            fastfunc::FastVecNormalize(uVar20 - 0x120,uVar20 - 0x110,0xa10980);
            fVar2 = *(float *)((int)puVar13 + 0xc4);
            fVar3 = *(float *)(puVar13 + 0x18);
            fVar4 = *(float *)(puVar13 + 0x19);
            dVar37 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
            dVar36 = (double)mobyutil::g_FrameTime;
            puVar13[0x12] = 0xffffffffffffffff;
            puVar13[0x14] = 1;
            puVar13[0x15] = 1;
            puVar13[0x16] = 0xffffffffffffffff;
            puVar13[0x17] = 0;
            fVar42 = (float)((double)(float)(dVar36 * dVar34) / dVar37);
            dVar34 = dVar33;
            if (dVar33 - dVar37 < 0.0) {
              dVar34 = (double)(fVar3 * fVar42);
            }
            dVar36 = dVar33;
            if (dVar33 - dVar37 < 0.0) {
              dVar36 = (double)(fVar2 * fVar42);
            }
            dVar31 = dVar33;
            if (dVar33 - dVar37 < 0.0) {
              dVar31 = (double)(fVar4 * fVar42);
            }
            if (dVar37 - dVar33 < 0.0) {
              dVar34 = (double)(fVar3 * fVar42);
            }
            if (dVar37 - dVar33 < 0.0) {
              dVar36 = (double)(fVar2 * fVar42);
            }
            if (dVar37 - dVar33 < 0.0) {
              dVar31 = (double)(fVar4 * fVar42);
            }
            *(float *)(puVar13 + 0x18) = (float)dVar34;
            *(float *)((int)puVar13 + 0xc4) = (float)dVar36;
            *(float *)(puVar13 + 0x19) = (float)dVar31;
            mobyutil::MB_genericExplosion
                      (uVar32,0x4059000000000000,0x4030000000000000,uVar32,0x4022000000000000,
                       0x3ff0000000000000,0x4049000000000000,param_1,uVar20 - 0x120,0,1,
                       &DAT_0021ff30,0x1e,10,0x18);
            param_1->state = '\a';
          }
          *(undefined4 *)(iVar14 + 0xdc) = DAT_0076c7e8;
        }
      }
    }
  }
  if (CHAR_ARRAY_00a1000c._680_2_ == 0) {
    help::Help_QueueMessage(STR_PRESS__TO_FIRE_0x2AFC,0x55);
  }
  RegisterFuncForMoby(&PTR_M1242_Hud_Draw_00709798,param_1);
  M1242_0021f5b8(param_1,param_2);
  uVar32 = fastfunc::FastWrapRot
                     (*(float *)(iVar14 + 0x28),-(*(float *)(iVar14 + 0x6c) * 0.14285715));
  dVar33 = (double)fastfunc::FastWrapRot
                             (*(float *)(iVar14 + 0x24),
                              *(float *)(iVar14 + 0x70) * -0.14285715 - 0.1);
  M1242_0021f2b0(uVar32,-dVar33,param_1,param_2);
  return;
}



