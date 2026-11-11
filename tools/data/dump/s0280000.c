//==== 00280018  ns=mobyupdate_helpers  size=0x3c0
// sig: undefined M1445_00280018(void)
// callers(1): 002806b0 mobyupdate_unsorted::UpdateMoby_1445
// callees(5): 001009b0 mobyutil::MB_MoveAndCollide; 00109c30 mobyutil::OrganicDelt; 0010a2e0 mobyutil::OrganicDeltAng; 001145d8 mobyutil::MB_PushOutOfSplineWalls; 00502578 fastfunc::FastWrapRot

double mobyupdate_helpers::M1445_00280018(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  int iVar7;
  ulonglong *puVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  undefined4 *unused;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  ulonglong in_f29;
  double dVar22;
  ulonglong in_f30;
  double dVar23;
  ulonglong in_f31;
  double dVar24;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0xf0;
  puVar8 = (ulonglong *)lVar13;
  *puVar8 = uVar11;
  puVar8[0x20] = in_LR;
  puVar8[0x1b] = in_f29;
  puVar8[0x1c] = in_f30;
  puVar8[0x1d] = in_f31;
  fVar1 = *param_2 - *(float *)(param_1 + 0x10);
  fVar4 = param_2[1] - *(float *)(param_1 + 0x14);
  puVar8[0x1a] = unaff_r31;
  puVar8[0x19] = unaff_r30;
  fVar2 = ABS(fVar1);
  fVar6 = ABS(fVar4);
  *(float *)((int)puVar8 + 0x84) = fVar1;
  puVar8[0x18] = unaff_r29;
  *(float *)(puVar8 + 0x11) = fVar4;
  iVar7 = *(int *)(param_1 + 0x78);
  *(float *)((int)puVar8 + 0x8c) = fVar2 - fVar6;
  dVar23 = 0.0;
  fVar1 = *(float *)(iVar7 + 0x1f8);
  uVar16 = (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x8c) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar8 + 0x11) >> 0x1d) & 4;
  fVar4 = ABS(*(float *)((int)puVar8 + 0x84));
  if (*(float *)((int)puVar8 + 0x8c) - 0.0 < 0.0) {
    fVar4 = fVar6;
  }
  fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
  fVar3 = ABS(*(float *)(puVar8 + 0x11));
  if (*(float *)((int)puVar8 + 0x8c) - 0.0 < 0.0) {
    fVar3 = fVar2;
  }
  fVar2 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  puVar8[0x17] = unaff_r28;
  puVar8[0x16] = unaff_r27;
  dVar19 = dVar23;
  if (0.0 < fVar4) {
    lVar12 = uVar11 - 0xe0;
    lVar17 = uVar11 - 0x50;
    lVar14 = uVar11 - 0x60;
    lVar18 = 2;
    fVar4 = (fVar3 - fVar4) / (fVar3 + fVar4);
    fVar3 = fVar4 * fVar4;
    *(float *)((int)puVar8 + 0x9c) = fVar4;
    *(float *)((int)puVar8 + 0x94) = fVar4;
    *(float *)(puVar8 + 0x13) = fVar4;
    *(float *)(puVar8 + 0x12) = fVar4;
    fVar4 = fVar3 * fVar3;
    *(float *)((int)puVar8 + 0x94) = *(float *)((int)puVar8 + 0x94) * fVar3;
    *(float *)(puVar8 + 0x13) = *(float *)(puVar8 + 0x13) * fVar4;
    *(float *)((int)puVar8 + 0x9c) = *(float *)((int)puVar8 + 0x9c) * fVar4 * fVar3;
    do {
      *(float *)((int)lVar12 + 0x90) = *(float *)((int)lVar12 + 0x80) * fVar4 * fVar4;
      iVar9 = (int)lVar14;
      lVar14 = lVar14 + 8;
      lVar12 = lVar12 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar9 + 4) * fVar4 * fVar4;
      lVar17 = lVar17 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar18 = 4;
    lVar17 = uVar11 - 0x60;
    pfVar15 = (float *)&DAT_007358e0;
    lVar12 = lVar13;
    lVar14 = lVar17;
    do {
      fVar4 = *pfVar15;
      fVar3 = pfVar15[1];
      pfVar15 = pfVar15 + 2;
      *(float *)((int)lVar12 + 0x90) = *(float *)((int)lVar12 + 0x90) * fVar4;
      lVar12 = lVar12 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar3;
      lVar14 = lVar14 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar12 = 2;
    do {
      iVar9 = (int)lVar13;
      iVar10 = (int)lVar17;
      lVar13 = lVar13 + 0x10;
      lVar17 = lVar17 + 0x10;
      dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar9 + 0x90)) + *(float *)(iVar10 + 4)
                        + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc));
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    dVar19 = (double)((float)(dVar19 + 0.7853981852531433) * fVar6 + fVar2);
  }
  dVar19 = (double)fastfunc::FastWrapRot((float)dVar19,fVar1);
  fVar4 = *(float *)(param_1 + 0x14) - param_2[1];
  dVar22 = (double)*(float *)(param_1 + 0x18);
  fVar6 = *(float *)(param_1 + 0x10) - *param_2;
  fVar1 = param_2[2];
  unused = &DAT_00280000;
  *(undefined4 *)(puVar8 + 0x10) = 0;
  dVar24 = (double)SQRT((float)(dVar22 - (double)fVar1) * (float)(dVar22 - (double)fVar1) +
                        fVar6 * fVar6 + fVar4 * fVar4);
  mobyutil::OrganicDeltAng
            ((float)dVar19,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
             mobyutil::g_FrameTime * 12.566371,(float *)(param_1 + 0x48),0x280000,
             (float *)(iVar7 + 500));
  mobyutil::OrganicDelt
            ((float)dVar24,DAT_0071f418 * 8.0,DAT_0071f418 * 12.0,mobyutil::g_FrameTime * 4.0,
             (float *)(puVar8 + 0x10),(int)unused,(float *)(iVar7 + 0x204));
  fVar1 = *(float *)(param_1 + 0xc4);
  fVar4 = *(float *)(param_1 + 0xc0);
  fVar6 = *(float *)(param_1 + 200);
  dVar19 = (double)SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar1 * fVar1);
  if (dVar19 == dVar23) {
    uVar5 = *(undefined4 *)(param_1 + 0xcc);
    dVar19 = dVar23;
    dVar20 = dVar23;
    dVar21 = dVar23;
  }
  else {
    fVar2 = (float)((double)*(float *)(iVar7 + 0x204) / dVar19);
    uVar5 = *(undefined4 *)(param_1 + 0xcc);
    dVar21 = (double)(fVar4 * fVar2);
    dVar20 = (double)(fVar1 * fVar2);
    dVar19 = (double)(fVar6 * fVar2);
  }
  *(float *)(puVar8 + 0xe) = (float)dVar21;
  *(float *)((int)puVar8 + 0x74) = (float)dVar20;
  *(float *)(puVar8 + 0xf) = (float)dVar19;
  *(undefined4 *)((int)puVar8 + 0x7c) = uVar5;
  *(float *)(puVar8 + 0xf) = -(DAT_0071f418 * 10.0 - *(float *)(iVar7 + 0x208));
  mobyutil::MB_MoveAndCollide(0x3fe0000000000000,0x3fe0000000000000,dVar23,param_1,uVar11 - 0x80);
  mobyutil::MB_PushOutOfSplineWalls(0x3fd54fdf40000000,*(undefined4 *)(iVar7 + 0x1f0));
  *(float *)(iVar7 + 0x208) = (float)(dVar22 - (double)*(float *)(param_1 + 0x18));
  return dVar24;
}



//==== 002803e8  ns=mobyupdate_helpers  size=0x290
// sig: undefined M1445_002803e8(void)
// callers(1): 002806b0 mobyupdate_unsorted::UpdateMoby_1445
// callees(6): 0010675c mobyutil::MB_damage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00111ba0 mobyutil::MB_getTargetInArea

void mobyupdate_helpers::M1445_002803e8(int param_1)

{
  int iVar1;
  Spline *pSVar2;
  float fVar3;
  float fVar4;
  MobyInstance *pMVar5;
  int iVar6;
  double dVar7;
  float local_30 [4];
  
  iVar1 = *(int *)(param_1 + 0x78);
  if (*(char *)(param_1 + 0x20) != '\0') {
    iVar6 = mobyutil::MB_damage(param_1,0x330000,0);
    if (iVar6 != 0) {
      *(undefined4 *)(iVar1 + 0x140) = 0x200;
      *(undefined4 *)(iVar1 + 0x148) = 0x3f000000;
      fVar3 = DAT_0071f418;
      *(float *)(iVar1 + 0x130) = DAT_007aab3c * DAT_0071f418;
      *(float *)(iVar1 + 0x134) = DAT_007aab40 * fVar3;
      fVar3 = mobyutil::g_FrameTime;
      *(float *)(iVar1 + 0x138) = DAT_007aab48 * mobyutil::g_FrameTime;
      fVar4 = DAT_007aab44;
      *(undefined1 *)(iVar1 + 0x15d) = 0;
      *(float *)(iVar1 + 0x13c) = fVar4 * fVar3;
      *(undefined4 *)(iVar1 + 0x144) = 0x29;
      *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xefff;
      *(float *)(iVar1 + 0x16c) = fVar3 * 2.0;
      mobyutil::MB_VecAtan2Angles
                (*(undefined8 *)(iVar6 + 0x10),*(undefined8 *)(iVar6 + 0x18),local_30,iVar1 + 0x138,
                 iVar1 + 0x13c);
      mobyutil::MB_StartKick((double)local_30[0],param_1,iVar1 + 0x120);
      *(undefined4 *)(iVar1 + 0x170) = 0x41000000;
      *(undefined4 *)(param_1 + 0x94) = 0;
      *(undefined4 *)(iVar1 + 0x174) = 0x41800000;
      *(undefined1 *)(param_1 + 0x20) = 8;
      *(undefined1 *)(iVar1 + 0x117) = 0x78;
      mobyutil::MB_UpdateLightsTransition(param_1,iVar1 + 0x110);
    }
    *(undefined1 *)(param_1 + 0xa4) = 0xff;
    mobyutil::MB_ColorDyingMoby(param_1,iVar1 + 0x110);
    dVar7 = 16.0;
    pSVar2 = Splines[*(int *)(iVar1 + 0x1f0)];
    iVar6 = mobyutil::MB_getTargetInArea
                      (0x4030000000000000,param_1,iVar1 + 0x180,pSVar2,0,0,pSVar2->points,
                       pSVar2->cnt);
    if ((iVar6 != 2) &&
       ((fVar3 = *(float *)(iVar1 + 0x1d4) - *(float *)(iVar1 + 0x184),
        fVar4 = *(float *)(iVar1 + 0x1d0) - *(float *)(iVar1 + 0x180),
        dVar7 < (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3) ||
        (3.0 < ABS(*(float *)(param_1 + 0x18) - *(float *)(iVar1 + 0x188)))))) {
      *(undefined4 *)(iVar1 + 0x1c4) = 2;
    }
    pMVar5 = g_heroMobyPtr;
    if (*(int *)(iVar1 + 0x1c0) == 0) {
      *(float *)(iVar1 + 0x180) = g_heroPosition.x;
      fVar3 = g_heroPosition.y;
      *(MobyInstance **)(iVar1 + 0x1c0) = pMVar5;
      *(float *)(iVar1 + 0x184) = fVar3;
      *(float *)(iVar1 + 0x188) = g_heroPosition.z;
      *(float *)(iVar1 + 0x18c) = g_heroPosition.w;
    }
  }
  return;
}



//==== 002806b0  ns=mobyupdate_unsorted  size=0x730
// sig: undefined UpdateMoby_1445(MobyInstance * moby)
// callers(0): 
// callees(15): 000efb38 mobyfunc::DeleteMoby; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 001059f0 mobyutil::DamageSphereAtBone; 00106360 mobyutil::MB_SetZBoundsFromGround; 0010a2e0 mobyutil::OrganicDeltAng; 0010b030 mobyutil::MB_UpdateKick; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00113e88 mobyutil::MB_MayaFrameTrigger; 00119a18 mobyfunc::DoManipulator; 00280018 mobyupdate_helpers::M1445_00280018; 002803e8 mobyupdate_helpers::M1445_002803e8; 0048c188 FUN_0048c188; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand

/* Moby 1445 */

void mobyupdate_unsorted::UpdateMoby_1445(MobyInstance *moby)

{
  u8 uVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  ulonglong *puVar9;
  float fVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar16;
  undefined1 uVar18;
  f32 *val;
  ulonglong uVar14;
  longlong lVar15;
  int iVar17;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  float *pfVar22;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  
  lVar13 = (longlong)(int)moby;
  uVar12 = ZEXT48(&stack0x00000000);
  lVar15 = uVar12 - 0xe0;
  puVar9 = (ulonglong *)lVar15;
  *puVar9 = uVar12;
  puVar9[0x1e] = in_LR;
  puVar9[0x1b] = unaff_r31;
  puVar9[0x19] = unaff_r29;
  puVar9[0x1a] = unaff_r30;
  pvVar8 = moby->pVar;
  mobyupdate_helpers::M1445_002803e8();
  mobyfunc::DoManipulator(0x4000ccccc0000000,moby,1,(Manipulator *)((int)pvVar8 + 0x220));
  if ((moby->enabled != '\0') &&
     (fVar3 = (moby->pos).y - GameCamera.posY, fVar5 = (moby->pos).x - GameCamera.posX,
     fVar6 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar3 * fVar3) < 29.0)) {
    mobyutil::MB_SetZBoundsFromGround(lVar13);
    moby->shadow = '\x17';
  }
  uVar1 = moby->state;
  if (uVar1 == '\b') {
    uVar16 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x120));
    if ((uVar16 & 0x140) != 0) {
      mobyutil::MB_SpawnExplosionSparks
                (0x3fe0000000000000,0x402a000000000000,lVar13,lVar13 + 0x10,&DAT_00280678,6);
      mobyutil::MB_SpawnBoltsFromCrate(lVar13,0,0xffffffffffffffff);
      mobyfunc::DeleteMoby(moby);
    }
  }
  else if (uVar1 == '\a') {
    iVar17 = FUN_0048c188(lVar13,(int)pvVar8 + 0x120);
    if (iVar17 != 0) {
      moby->state = '\x01';
      *(undefined2 *)((int)pvVar8 + 200) = 0;
    }
  }
  else if (uVar1 == '\x06') {
    dVar24 = (double)mobyupdate_helpers::M1445_00280018(lVar13,(int)pvVar8 + 0x1d0);
    if (1.0 <= dVar24) {
      if (*(int *)((int)pvVar8 + 0x1c4) != 2) {
        moby->state = '\x04';
      }
    }
    else {
      moby->state = '\x01';
      if (moby->animationId != '\x02') {
        puVar9[0x16] = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(lVar13,2,0,*(undefined4 *)((int)puVar9 + 0xb4));
      }
    }
  }
  else if (uVar1 == '\x05') {
    fVar3 = *(float *)((int)pvVar8 + 0x180) - (moby->pos).x;
    fVar5 = *(float *)((int)pvVar8 + 0x184) - (moby->pos).y;
    val = &(moby->rotation).z;
    fVar6 = ABS(fVar3);
    fVar4 = ABS(fVar5);
    *(float *)(puVar9 + 0x10) = fVar3;
    *(float *)((int)puVar9 + 0x84) = fVar5;
    *(float *)(puVar9 + 0x11) = fVar6 - fVar4;
    fVar3 = 0.0;
    uVar14 = (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1d) & 4;
    fVar5 = ABS(*(float *)(puVar9 + 0x10));
    if (*(float *)(puVar9 + 0x11) - 0.0 < 0.0) {
      fVar5 = fVar4;
    }
    fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
    fVar4 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
    fVar10 = ABS(*(float *)((int)puVar9 + 0x84));
    if (*(float *)(puVar9 + 0x11) - 0.0 < 0.0) {
      fVar10 = fVar6;
    }
    if (0.0 < fVar5) {
      lVar21 = uVar12 - 0xd0;
      lVar19 = uVar12 - 0x44;
      lVar20 = uVar12 - 0x54;
      lVar23 = 2;
      fVar5 = (fVar10 - fVar5) / (fVar10 + fVar5);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar9 + 0x13) = fVar5;
      *(float *)(puVar9 + 0x12) = fVar5;
      *(float *)((int)puVar9 + 0x94) = fVar5;
      *(float *)((int)puVar9 + 0x8c) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar9 + 0x12) = *(float *)(puVar9 + 0x12) * fVar6;
      *(float *)((int)puVar9 + 0x94) = *(float *)((int)puVar9 + 0x94) * fVar5;
      *(float *)(puVar9 + 0x13) = *(float *)(puVar9 + 0x13) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar21 + 0x8c) = *(float *)((int)lVar21 + 0x7c) * fVar5 * fVar5;
        iVar17 = (int)lVar20;
        lVar20 = lVar20 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar17 + 4) * fVar5 * fVar5;
        lVar19 = lVar19 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar21 = uVar12 - 0x54;
      lVar23 = 4;
      pfVar22 = (float *)&DAT_007358e0;
      lVar19 = lVar21;
      lVar20 = lVar15;
      do {
        fVar5 = *pfVar22;
        fVar6 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar20 + 0x8c) = *(float *)((int)lVar20 + 0x8c) * fVar5;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar6;
        lVar19 = lVar19 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar19 = 2;
      do {
        iVar17 = (int)lVar15;
        iVar11 = (int)lVar21;
        lVar15 = lVar15 + 0x10;
        lVar21 = lVar21 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar17 + 0x8c) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar7 + fVar4;
    }
    mobyutil::OrganicDeltAng
              (fVar3,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
               mobyutil::g_FrameTime * 12.566371,val,(int)val,(float *)((int)pvVar8 + 500));
    iVar17 = mobyutil::MB_MayaFrameTrigger(13.0,moby);
    if (iVar17 == 0) {
      if ((((moby->field43_0x70 & 2U) != 0) &&
          (fVar3 = (moby->pos).y - *(float *)((int)pvVar8 + 0x184),
          fVar5 = (moby->pos).x - *(float *)((int)pvVar8 + 0x180),
          fVar6 = (moby->pos).z - *(float *)((int)pvVar8 + 0x188),
          1.5 < SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar3 * fVar3))) &&
         (moby->state = '\x04', moby->animationId != '\0')) {
        puVar9[0x16] = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(lVar13,0,0,*(undefined4 *)((int)puVar9 + 0xb4));
      }
    }
    else {
      puVar9[0xe] = 0;
      mobyutil::DamageSphereAtBone
                (0x3fd54fdf40000000,0x3ff0000000000000,0x3ff0000000000000,lVar13,0,0,1);
    }
  }
  else if (uVar1 == '\x04') {
    dVar24 = (double)mobyupdate_helpers::M1445_00280018(lVar13,(int)pvVar8 + 0x180);
    if (1.25 <= dVar24) {
      if (*(int *)((int)pvVar8 + 0x1c4) == 2) {
        moby->state = '\x06';
      }
    }
    else {
      moby->state = '\x05';
      if (moby->animationId != '\x01') {
        puVar9[0x16] = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(lVar13,1,0,*(undefined4 *)((int)puVar9 + 0xb4));
      }
    }
  }
  else if (uVar1 == '\x01') {
    if ((*(int *)((int)pvVar8 + 0x1c4) != 2) && (moby->state = '\x04', moby->animationId != '\0')) {
      puVar9[0x16] = (longlong)(int)(animationSpeed * 20.5);
      mobyutil::MB_SetAnimation(lVar13,0,0,*(undefined4 *)((int)puVar9 + 0xb4));
    }
  }
  else if (uVar1 == '\0') {
    if (*(int *)((int)pvVar8 + 0x1f0) == -1) {
      mobyfunc::DeleteMoby(moby);
    }
    else {
      *(undefined4 *)((int)pvVar8 + 0x20) = 0x3f800000;
      *(undefined2 *)((int)pvVar8 + 0x24) = 1;
      *(undefined1 *)((int)pvVar8 + 0x28) = 0;
      *(undefined **)((int)pvVar8 + 0xd0) = &DAT_007aab30;
      uVar16 = rand();
      fVar2 = (moby->pos).x;
      if ((uVar16 & 1) != 0) {
        moby->modeBits = moby->modeBits | MIRROR;
      }
      *(f32 *)((int)pvVar8 + 0x1d0) = fVar2;
      *(f32 *)((int)pvVar8 + 0x1d4) = (moby->pos).y;
      *(f32 *)((int)pvVar8 + 0x1d8) = (moby->pos).z;
      *(f32 *)((int)pvVar8 + 0x1dc) = (moby->pos).w;
      moby->state = '\x01';
      if (moby->animationId != '\x02') {
        puVar9[0x16] = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(lVar13,2,0,*(undefined4 *)((int)puVar9 + 0xb4));
      }
      uVar18 = fastfunc::FastDoubleToInt(0x4020000000000000);
      *(undefined1 *)((int)pvVar8 + 0x58) = uVar18;
      uVar18 = fastfunc::FastDoubleToInt(0x40099999a0000000);
      *(undefined1 *)((int)pvVar8 + 0x5a) = uVar18;
    }
  }
  return;
}



//==== 00280de0  ns=mobyupdate_helpers  size=0x58
// sig: undefined M1448_00280de0(void)
// callers(0): 
// callees(1): 0048a718 mobyupdate_helpers::M849_MB_Sucking

void mobyupdate_helpers::M1448_00280de0(MobyInstance *param_1)

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



//==== 00280e38  ns=mobyupdate_helpers  size=0x58
// sig: undefined M1448_00280e38(void)
// callers(0): 
// callees(1): 0048aa70 mobyupdate_helpers::M849_0048aa70

void mobyupdate_helpers::M1448_00280e38(int param_1)

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



//==== 00280e90  ns=mobyupdate_helpers  size=0x58
// sig: undefined M1448_00280e90(void)
// callers(0): 
// callees(1): 0048acb8 mobyupdate_helpers::M849_0048acb8

void mobyupdate_helpers::M1448_00280e90(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048acb8();
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



//==== 00280ee8  ns=mobyupdate_helpers  size=0x38
// sig: undefined M1448_00280ee8(void)
// callers(0): 
// callees(1): 0048afe8 mobyupdate_helpers::M849_0048afe8

void mobyupdate_helpers::M1448_00280ee8(int param_1)

{
  M849_0048afe8();
  *(undefined1 *)(param_1 + 0x20) = 7;
  return;
}



//==== 00280f20  ns=mobyupdate_helpers  size=0x40
// sig: undefined M1448_00280f20(void)
// callers(0): 
// callees(0): 

longlong mobyupdate_helpers::M1448_00280f20(int param_1)

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



//==== 00280f60  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1448_00280f60(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1448_00280f60(void)

{
  DAT_007aab98 = 0x10000;
  return;
}



//==== 00280fb8  ns=mobyupdate_helpers  size=0x161c
// sig: undefined M1448_00280fb8(void)
// callers(1): 002826c8 mobyupdate_unsorted::UpdateMoby_1448
// callees(8): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 000a0c38 hero::Hero_Warp; 00109af0 mobyutil::Delt; 0010a2e0 mobyutil::OrganicDeltAng; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502758 fastfunc::FastDoubleToInt

bool mobyupdate_helpers::M1448_00280fb8(int param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  Spline *pSVar16;
  Spline *pSVar17;
  Spline *pSVar18;
  uint uVar19;
  ulonglong *puVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  float *pfVar27;
  float *pfVar28;
  longlong lVar29;
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
  longlong lVar30;
  longlong lVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  ulonglong uVar35;
  double dVar36;
  double dVar37;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar38;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar39;
  ulonglong in_f30;
  double dVar40;
  ulonglong in_f31;
  double dVar41;
  
  uVar22 = ZEXT48(&stack0x00000000);
  lVar26 = uVar22 - 0x2e0;
  puVar20 = (ulonglong *)lVar26;
  *puVar20 = uVar22;
  puVar20[0x5e] = in_LR;
  puVar20[0x56] = in_f26;
  puVar20[0x57] = in_f27;
  puVar20[0x58] = in_f28;
  puVar20[0x59] = in_f29;
  puVar20[0x5a] = in_f30;
  puVar20[0x5b] = in_f31;
  puVar20[0x55] = unaff_r31;
  puVar20[0x4d] = unaff_r23;
  puVar20[0x52] = unaff_r28;
  fVar1 = animationSpeed;
  puVar20[0x54] = unaff_r30;
  iVar12 = *(int *)(param_1 + 0x78);
  iVar21 = iVar12 + (int)(param_2 << 2);
  dVar38 = 1.0;
  iVar13 = *(int *)(iVar21 + 0x60);
  iVar14 = *(int *)(iVar21 + 0x68);
  iVar21 = *(int *)(iVar21 + 0x70);
  puVar20[0x53] = unaff_r29;
  puVar20[0x4f] = unaff_r25;
  pSVar16 = Splines[iVar13];
  pSVar17 = Splines[iVar14];
  pSVar18 = Splines[iVar21];
  puVar20[0x51] = unaff_r27;
  puVar20[0x50] = unaff_r26;
  puVar20[0x4e] = unaff_r24;
  puVar20[0x4c] = unaff_r22;
  mobyutil::Delt(1.0,(float)(1.0 / (double)(longlong)(fVar1 * 900.5)),(float *)(iVar12 + 0xa4));
  puVar20[0x49] = (longlong)(pSVar16->cnt + -1);
  dVar41 = (double)(*(float *)(iVar12 + 0xa4) * (float)(longlong)puVar20[0x49]);
  lVar23 = fastfunc::FastDoubleToInt(dVar41);
  puVar20[0x49] = (longlong)(int)lVar23;
  dVar32 = (double)(*(float *)(iVar12 + 0xa4) * 1.02);
  uVar35 = puVar20[0x49];
  puVar20[0x49] = (longlong)(pSVar17->cnt + -1);
  dVar39 = (double)(longlong)uVar35;
  if (dVar38 - dVar32 < 0.0) {
    dVar32 = dVar38;
  }
  dVar41 = (double)(float)(dVar41 - dVar39);
  dVar32 = (double)(float)(dVar32 * (double)(longlong)puVar20[0x49]);
  lVar24 = fastfunc::FastDoubleToInt(dVar32);
  iVar13 = pSVar18->cnt;
  puVar20[0x49] = (longlong)(int)lVar24;
  fVar1 = *(float *)(iVar12 + 0xa4);
  uVar35 = puVar20[0x49];
  puVar20[0x49] = (longlong)(iVar13 + -1);
  dVar40 = (double)(float)(dVar32 - (double)(longlong)uVar35);
  dVar32 = (double)(fVar1 * (float)(longlong)puVar20[0x49]);
  lVar25 = fastfunc::FastDoubleToInt(dVar32);
  iVar13 = (int)(lVar23 << 4);
  dVar39 = (double)(float)(dVar32 - dVar39);
  dVar32 = (double)*(float *)((int)&pSVar16->points[0].x + iVar13);
  fVar1 = *(float *)((int)&pSVar16->points[1].y + iVar13);
  fVar2 = *(float *)((int)&pSVar16->points[0].y + iVar13);
  iVar14 = (int)(lVar25 << 4);
  pfVar28 = (float *)((int)&((Spline *)(pSVar18->points + -1))->cnt + iVar14);
  fVar3 = *(float *)((int)&pSVar16->points[1].z + iVar13);
  fVar4 = *(float *)((int)&pSVar16->points[0].z + iVar13);
  uVar5 = *(undefined4 *)((int)&pSVar16->points[1].w + iVar13);
  *(float *)(puVar20 + 0x10) =
       (float)(dVar41 * (double)(float)((double)*(float *)((int)&pSVar16->points[1].x + iVar13) -
                                       dVar32) + dVar32);
  *(float *)((int)puVar20 + 0x84) =
       (float)(dVar41 * (double)(fVar1 - fVar2) +
              (double)*(float *)((int)&pSVar16->points[0].y + iVar13));
  fVar1 = *(float *)((int)&pSVar16->points[0].z + iVar13);
  *(undefined4 *)((int)puVar20 + 0x8c) = uVar5;
  *(float *)(puVar20 + 0x11) = (float)(dVar41 * (double)(fVar3 - fVar4) + (double)fVar1);
  fVar1 = pfVar28[8];
  fVar2 = pfVar28[4];
  fVar3 = pfVar28[9];
  fVar4 = pfVar28[5];
  fVar6 = pfVar28[10];
  fVar7 = pfVar28[6];
  *(float *)(param_1 + 0x1c) = pfVar28[0xb];
  *(float *)(param_1 + 0x10) =
       (float)(dVar39 * (double)(float)((double)fVar1 - (double)fVar2) + (double)fVar2);
  *(float *)(param_1 + 0x14) =
       (float)(dVar39 * (double)(float)((double)fVar3 - (double)fVar4) + (double)fVar4);
  *(float *)(param_1 + 0x18) =
       (float)(dVar39 * (double)(float)((double)fVar6 - (double)fVar7) + (double)fVar7);
  camera::camera5::Camera_SetMobyDrivenTargetPos((float *)(puVar20 + 0x10));
  hero::Hero_Warp(&Cuboids[*(int *)(iVar12 + 0x84)].pos.x,&Cuboids[*(int *)(iVar12 + 0x84)].rot.x,
                  0x72,0);
  dVar32 = 0.7853981852531433;
  if ((int)lVar25 < 1) {
    fVar1 = pSVar18->points[0].y;
    fVar2 = pSVar18->points[1].y;
    fVar3 = pSVar18->points[0].x;
    fVar6 = fVar1 - fVar2;
    fVar4 = pSVar18->points[1].x;
    fVar7 = fVar3 - fVar4;
    fVar8 = pSVar18->points[1].z - pSVar18->points[0].z;
    fVar6 = SQRT(fVar7 * fVar7 + fVar6 * fVar6);
    *(float *)(puVar20 + 0x1a) = fVar8;
    fVar8 = ABS(fVar8);
    fVar7 = ABS(fVar6);
    *(float *)((int)puVar20 + 0xcc) = fVar6;
    *(float *)((int)puVar20 + 0xd4) = fVar7 - fVar8;
    dVar39 = 0.0;
    uVar35 = (ulonglong)(*(uint *)((int)puVar20 + 0xcc) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar20 + 0xd4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar20 + 0x1a) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)((int)puVar20 + 0xcc));
    if (*(float *)((int)puVar20 + 0xd4) - 0.0 < 0.0) {
      fVar6 = fVar8;
    }
    fVar11 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar35 << 2));
    fVar8 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    fVar9 = ABS(*(float *)(puVar20 + 0x1a));
    if (*(float *)((int)puVar20 + 0xd4) - 0.0 < 0.0) {
      fVar9 = fVar7;
    }
    dVar41 = dVar39;
    if (0.0 < fVar6) {
      lVar25 = uVar22 - 0x2d0;
      lVar31 = uVar22 - 0x138;
      lVar29 = uVar22 - 0x128;
      lVar30 = 2;
      fVar6 = (fVar9 - fVar6) / (fVar9 + fVar6);
      fVar7 = fVar6 * fVar6;
      *(float *)((int)puVar20 + 0x1b4) = fVar6;
      *(float *)((int)puVar20 + 0x1ac) = fVar6;
      *(float *)(puVar20 + 0x36) = fVar6;
      *(float *)(puVar20 + 0x35) = fVar6;
      fVar6 = fVar7 * fVar7;
      *(float *)((int)puVar20 + 0x1ac) = *(float *)((int)puVar20 + 0x1ac) * fVar7;
      *(float *)(puVar20 + 0x36) = *(float *)(puVar20 + 0x36) * fVar6;
      *(float *)((int)puVar20 + 0x1b4) = *(float *)((int)puVar20 + 0x1b4) * fVar6 * fVar7;
      do {
        *(float *)((int)lVar25 + 0x1a8) = *(float *)((int)lVar25 + 0x198) * fVar6 * fVar6;
        iVar13 = (int)lVar31;
        lVar25 = lVar25 + 8;
        lVar31 = lVar31 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar13 + 4) * fVar6 * fVar6;
        lVar29 = lVar29 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar30 = 4;
      lVar29 = uVar22 - 0x138;
      pfVar28 = (float *)&DAT_007358e0;
      lVar25 = lVar26;
      lVar31 = lVar29;
      do {
        fVar6 = *pfVar28;
        fVar7 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar25 + 0x1a8) = *(float *)((int)lVar25 + 0x1a8) * fVar6;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar31 + 4) = *(float *)((int)lVar31 + 4) * fVar7;
        lVar31 = lVar31 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar31 = 2;
      lVar25 = lVar26;
      do {
        iVar13 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        iVar14 = (int)lVar29;
        lVar29 = lVar29 + 0x10;
        dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar13 + 0x1a8)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      dVar41 = (double)((float)(dVar41 + 0.7853981852531433) * fVar11 + fVar8);
    }
    fVar4 = fVar4 - fVar3;
    fVar2 = fVar2 - fVar1;
    fVar6 = ABS(fVar4);
    fVar3 = ABS(fVar2);
    *(float *)(puVar20 + 0x18) = fVar4;
    *(float *)((int)puVar20 + 0xc4) = fVar2;
    *(float *)(puVar20 + 0x19) = fVar6 - fVar3;
    uVar19 = *(uint *)(puVar20 + 0x18);
    fVar1 = *(float *)(puVar20 + 0x18);
    uVar15 = *(uint *)((int)puVar20 + 0xc4);
    *(float *)(param_1 + 0x44) = (float)-dVar41;
    uVar35 = (ulonglong)(uVar19 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar20 + 0x19) >> 0x1e) & 2 | (ulonglong)(uVar15 >> 0x1d) & 4;
    fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar35 << 2));
    fVar1 = ABS(fVar1);
    if (*(float *)(puVar20 + 0x19) - 0.0 < 0.0) {
      fVar1 = fVar3;
    }
    fVar3 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    fVar4 = ABS(*(float *)((int)puVar20 + 0xc4));
    if (*(float *)(puVar20 + 0x19) - 0.0 < 0.0) {
      fVar4 = fVar6;
    }
    if (0.0 < fVar1) {
      lVar25 = uVar22 - 0x2d0;
      lVar31 = uVar22 - 0x158;
      lVar29 = uVar22 - 0x148;
      lVar30 = 2;
      fVar1 = (fVar4 - fVar1) / (fVar4 + fVar1);
      fVar4 = fVar1 * fVar1;
      *(float *)((int)puVar20 + 0x194) = fVar1;
      *(float *)((int)puVar20 + 0x18c) = fVar1;
      *(float *)(puVar20 + 0x32) = fVar1;
      *(float *)(puVar20 + 0x31) = fVar1;
      fVar1 = fVar4 * fVar4;
      *(float *)((int)puVar20 + 0x18c) = *(float *)((int)puVar20 + 0x18c) * fVar4;
      *(float *)(puVar20 + 0x32) = *(float *)(puVar20 + 0x32) * fVar1;
      *(float *)((int)puVar20 + 0x194) = *(float *)((int)puVar20 + 0x194) * fVar1 * fVar4;
      do {
        *(float *)((int)lVar25 + 0x188) = *(float *)((int)lVar25 + 0x178) * fVar1 * fVar1;
        iVar13 = (int)lVar31;
        lVar25 = lVar25 + 8;
        lVar31 = lVar31 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar13 + 4) * fVar1 * fVar1;
        lVar29 = lVar29 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar30 = 4;
      lVar29 = uVar22 - 0x158;
      pfVar28 = (float *)&DAT_007358e0;
      lVar25 = lVar26;
      lVar31 = lVar29;
      do {
        fVar1 = *pfVar28;
        fVar4 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar25 + 0x188) = *(float *)((int)lVar25 + 0x188) * fVar1;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar31 + 4) = *(float *)((int)lVar31 + 4) * fVar4;
        lVar31 = lVar31 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar31 = 2;
      lVar25 = lVar26;
      do {
        iVar13 = (int)lVar25;
        iVar14 = (int)lVar29;
        lVar25 = lVar25 + 0x10;
        lVar29 = lVar29 + 0x10;
        dVar39 = (double)((float)(dVar39 + (double)*(float *)(iVar13 + 0x188)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      dVar39 = (double)((float)(dVar39 + 0.7853981852531433) * fVar2 + fVar3);
    }
  }
  else {
    fVar1 = pfVar28[4];
    fVar2 = pfVar28[5];
    fVar3 = fVar1 - *(float *)((int)&((Spline *)(pSVar18->points + -1))->cnt + iVar14);
    fVar4 = fVar2 - pfVar28[1];
    fVar7 = ABS(fVar3);
    fVar6 = ABS(fVar4);
    *(float *)((int)puVar20 + 0xfc) = fVar3;
    *(float *)(puVar20 + 0x20) = fVar4;
    *(float *)((int)puVar20 + 0x104) = fVar7 - fVar6;
    dVar41 = 0.0;
    uVar35 = (ulonglong)(*(uint *)((int)puVar20 + 0xfc) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar20 + 0x104) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar20 + 0x20) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)((int)puVar20 + 0xfc));
    if (*(float *)((int)puVar20 + 0x104) - 0.0 < 0.0) {
      fVar3 = fVar6;
    }
    fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar35 << 2));
    fVar4 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    fVar8 = ABS(*(float *)(puVar20 + 0x20));
    if (*(float *)((int)puVar20 + 0x104) - 0.0 < 0.0) {
      fVar8 = fVar7;
    }
    dVar34 = dVar41;
    if (0.0 < fVar3) {
      lVar25 = uVar22 - 0x2d0;
      lVar29 = uVar22 - 0xa8;
      lVar31 = uVar22 - 0xb8;
      lVar30 = 2;
      fVar3 = (fVar8 - fVar3) / (fVar8 + fVar3);
      fVar7 = fVar3 * fVar3;
      *(float *)((int)puVar20 + 0x234) = fVar3;
      *(float *)((int)puVar20 + 0x22c) = fVar3;
      *(float *)(puVar20 + 0x46) = fVar3;
      *(float *)(puVar20 + 0x45) = fVar3;
      fVar3 = fVar7 * fVar7;
      *(float *)((int)puVar20 + 0x22c) = *(float *)((int)puVar20 + 0x22c) * fVar7;
      *(float *)(puVar20 + 0x46) = *(float *)(puVar20 + 0x46) * fVar3;
      *(float *)((int)puVar20 + 0x234) = *(float *)((int)puVar20 + 0x234) * fVar3 * fVar7;
      do {
        *(float *)((int)lVar25 + 0x228) = *(float *)((int)lVar25 + 0x218) * fVar3 * fVar3;
        iVar13 = (int)lVar31;
        lVar31 = lVar31 + 8;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar13 + 4) * fVar3 * fVar3;
        lVar29 = lVar29 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar30 = 4;
      lVar29 = uVar22 - 0xb8;
      pfVar27 = (float *)&DAT_007358e0;
      lVar25 = lVar26;
      lVar31 = lVar29;
      do {
        fVar3 = *pfVar27;
        fVar7 = pfVar27[1];
        pfVar27 = pfVar27 + 2;
        *(float *)((int)lVar25 + 0x228) = *(float *)((int)lVar25 + 0x228) * fVar3;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar31 + 4) = *(float *)((int)lVar31 + 4) * fVar7;
        lVar31 = lVar31 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar31 = 2;
      lVar25 = lVar26;
      do {
        iVar13 = (int)lVar25;
        iVar14 = (int)lVar29;
        lVar25 = lVar25 + 0x10;
        lVar29 = lVar29 + 0x10;
        dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar13 + 0x228)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar6 + fVar4);
    }
    fVar1 = pfVar28[8] - fVar1;
    fVar2 = pfVar28[9] - fVar2;
    fVar4 = ABS(fVar1);
    fVar3 = ABS(fVar2);
    *(float *)(puVar20 + 0x1e) = fVar1;
    *(float *)((int)puVar20 + 0xf4) = fVar2;
    *(float *)(puVar20 + 0x1f) = fVar4 - fVar3;
    uVar35 = (ulonglong)(*(uint *)(puVar20 + 0x1e) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar20 + 0x1f) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar20 + 0xf4) >> 0x1d) & 4;
    fVar1 = ABS(*(float *)(puVar20 + 0x1e));
    if (*(float *)(puVar20 + 0x1f) - 0.0 < 0.0) {
      fVar1 = fVar3;
    }
    fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar35 << 2));
    fVar3 = ABS(*(float *)((int)puVar20 + 0xf4));
    if (*(float *)(puVar20 + 0x1f) - 0.0 < 0.0) {
      fVar3 = fVar4;
    }
    fVar4 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    dVar33 = dVar41;
    if (0.0 < fVar1) {
      lVar25 = uVar22 - 0x2d0;
      lVar31 = uVar22 - 0xd8;
      lVar29 = uVar22 - 200;
      lVar30 = 2;
      fVar1 = (fVar3 - fVar1) / (fVar3 + fVar1);
      fVar3 = fVar1 * fVar1;
      *(float *)((int)puVar20 + 0x214) = fVar1;
      *(float *)((int)puVar20 + 0x20c) = fVar1;
      *(float *)(puVar20 + 0x42) = fVar1;
      *(float *)(puVar20 + 0x41) = fVar1;
      fVar1 = fVar3 * fVar3;
      *(float *)((int)puVar20 + 0x20c) = *(float *)((int)puVar20 + 0x20c) * fVar3;
      *(float *)(puVar20 + 0x42) = *(float *)(puVar20 + 0x42) * fVar1;
      *(float *)((int)puVar20 + 0x214) = *(float *)((int)puVar20 + 0x214) * fVar1 * fVar3;
      do {
        *(float *)((int)lVar25 + 0x208) = *(float *)((int)lVar25 + 0x1f8) * fVar1 * fVar1;
        iVar13 = (int)lVar31;
        lVar25 = lVar25 + 8;
        lVar31 = lVar31 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar13 + 4) * fVar1 * fVar1;
        lVar29 = lVar29 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar30 = 4;
      lVar29 = uVar22 - 0xd8;
      pfVar27 = (float *)&DAT_007358e0;
      lVar25 = lVar26;
      lVar31 = lVar29;
      do {
        fVar1 = *pfVar27;
        fVar3 = pfVar27[1];
        pfVar27 = pfVar27 + 2;
        *(float *)((int)lVar25 + 0x208) = *(float *)((int)lVar25 + 0x208) * fVar1;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar31 + 4) = *(float *)((int)lVar31 + 4) * fVar3;
        lVar31 = lVar31 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar31 = 2;
      lVar25 = lVar26;
      do {
        iVar13 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        iVar14 = (int)lVar29;
        lVar29 = lVar29 + 0x10;
        dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar13 + 0x208)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar2 + fVar4);
    }
    dVar33 = (double)fastfunc::FastDiffRots(dVar33,dVar34);
    dVar34 = (double)fastfunc::FastWrapRot((float)(dVar39 * dVar33),(float)dVar34);
    *(float *)(param_1 + 0x48) = (float)dVar34;
    fVar1 = pfVar28[5];
    fVar4 = pfVar28[1] - fVar1;
    fVar2 = pfVar28[4];
    fVar6 = *pfVar28 - fVar2;
    fVar3 = pfVar28[6];
    fVar7 = fVar3 - pfVar28[2];
    fVar4 = SQRT(fVar6 * fVar6 + fVar4 * fVar4);
    *(float *)(puVar20 + 0x1d) = fVar7;
    dVar37 = ABS((double)fVar7);
    dVar33 = ABS((double)fVar4);
    *(float *)((int)puVar20 + 0xe4) = fVar4;
    *(float *)((int)puVar20 + 0xec) = (float)(dVar33 - dVar37);
    fVar4 = pfVar28[8];
    fVar6 = pfVar28[9];
    fVar7 = pfVar28[10];
    uVar35 = (ulonglong)(*(uint *)((int)puVar20 + 0xe4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar20 + 0xec) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar20 + 0x1d) >> 0x1d) & 4;
    dVar34 = ABS((double)*(float *)((int)puVar20 + 0xe4));
    if ((double)*(float *)((int)puVar20 + 0xec) - dVar41 < 0.0) {
      dVar34 = dVar37;
    }
    fVar11 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar35 << 2));
    fVar8 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    dVar37 = ABS((double)*(float *)(puVar20 + 0x1d));
    if ((double)*(float *)((int)puVar20 + 0xec) - dVar41 < 0.0) {
      dVar37 = dVar33;
    }
    dVar33 = dVar41;
    if (dVar41 < dVar34) {
      lVar25 = uVar22 - 0x2d0;
      lVar31 = uVar22 - 0xf8;
      lVar29 = uVar22 - 0xe8;
      lVar30 = 2;
      fVar9 = (float)(dVar37 - dVar34) / (float)(dVar37 + dVar34);
      fVar10 = fVar9 * fVar9;
      *(float *)((int)puVar20 + 500) = fVar9;
      *(float *)((int)puVar20 + 0x1ec) = fVar9;
      *(float *)(puVar20 + 0x3e) = fVar9;
      *(float *)(puVar20 + 0x3d) = fVar9;
      fVar9 = fVar10 * fVar10;
      *(float *)((int)puVar20 + 0x1ec) = *(float *)((int)puVar20 + 0x1ec) * fVar10;
      *(float *)(puVar20 + 0x3e) = *(float *)(puVar20 + 0x3e) * fVar9;
      *(float *)((int)puVar20 + 500) = *(float *)((int)puVar20 + 500) * fVar9 * fVar10;
      do {
        *(float *)((int)lVar25 + 0x1e8) = *(float *)((int)lVar25 + 0x1d8) * fVar9 * fVar9;
        iVar13 = (int)lVar31;
        lVar25 = lVar25 + 8;
        lVar31 = lVar31 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar13 + 4) * fVar9 * fVar9;
        lVar29 = lVar29 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar30 = 4;
      lVar29 = uVar22 - 0xf8;
      pfVar28 = (float *)&DAT_007358e0;
      lVar25 = lVar26;
      lVar31 = lVar29;
      do {
        fVar9 = *pfVar28;
        fVar10 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar25 + 0x1e8) = *(float *)((int)lVar25 + 0x1e8) * fVar9;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar31 + 4) = *(float *)((int)lVar31 + 4) * fVar10;
        lVar31 = lVar31 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar31 = 2;
      lVar25 = lVar26;
      dVar34 = dVar41;
      do {
        iVar13 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        iVar14 = (int)lVar29;
        lVar29 = lVar29 + 0x10;
        dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar13 + 0x1e8)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      dVar33 = (double)((float)(dVar34 + dVar32) * fVar11 + fVar8);
    }
    fVar1 = fVar1 - fVar6;
    fVar2 = fVar2 - fVar4;
    fVar7 = fVar7 - fVar3;
    fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
    *(float *)((int)puVar20 + 0xdc) = fVar7;
    dVar36 = ABS((double)fVar7);
    dVar37 = ABS((double)fVar1);
    *(float *)(puVar20 + 0x1b) = fVar1;
    *(float *)(puVar20 + 0x1c) = (float)(dVar37 - dVar36);
    uVar35 = (ulonglong)(*(uint *)(puVar20 + 0x1b) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar20 + 0x1c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar20 + 0xdc) >> 0x1d) & 4;
    dVar34 = ABS((double)*(float *)(puVar20 + 0x1b));
    if ((double)*(float *)(puVar20 + 0x1c) - dVar41 < 0.0) {
      dVar34 = dVar36;
    }
    fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar35 << 2));
    dVar36 = ABS((double)*(float *)((int)puVar20 + 0xdc));
    if ((double)*(float *)(puVar20 + 0x1c) - dVar41 < 0.0) {
      dVar36 = dVar37;
    }
    fVar2 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    if (dVar41 < dVar34) {
      lVar25 = uVar22 - 0x2d0;
      lVar31 = uVar22 - 0x118;
      lVar29 = uVar22 - 0x108;
      lVar30 = 2;
      fVar3 = (float)(dVar36 - dVar34) / (float)(dVar36 + dVar34);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar20 + 0x1d4) = fVar3;
      *(float *)((int)puVar20 + 0x1cc) = fVar3;
      *(float *)(puVar20 + 0x3a) = fVar3;
      *(float *)(puVar20 + 0x39) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar20 + 0x1cc) = *(float *)((int)puVar20 + 0x1cc) * fVar4;
      *(float *)(puVar20 + 0x3a) = *(float *)(puVar20 + 0x3a) * fVar3;
      *(float *)((int)puVar20 + 0x1d4) = *(float *)((int)puVar20 + 0x1d4) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar25 + 0x1c8) = *(float *)((int)lVar25 + 0x1b8) * fVar3 * fVar3;
        iVar13 = (int)lVar31;
        lVar25 = lVar25 + 8;
        lVar31 = lVar31 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar13 + 4) * fVar3 * fVar3;
        lVar29 = lVar29 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar30 = 4;
      lVar29 = uVar22 - 0x118;
      pfVar28 = (float *)&DAT_007358e0;
      lVar25 = lVar26;
      lVar31 = lVar29;
      do {
        fVar3 = *pfVar28;
        fVar4 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar25 + 0x1c8) = *(float *)((int)lVar25 + 0x1c8) * fVar3;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar31 + 4) = *(float *)((int)lVar31 + 4) * fVar4;
        lVar31 = lVar31 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar31 = 2;
      lVar25 = lVar26;
      do {
        iVar13 = (int)lVar25;
        iVar14 = (int)lVar29;
        lVar25 = lVar25 + 0x10;
        lVar29 = lVar29 + 0x10;
        dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar13 + 0x1c8)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      dVar41 = (double)((float)(dVar41 + dVar32) * fVar1 + fVar2);
    }
    dVar33 = -dVar33;
    dVar41 = (double)fastfunc::FastDiffRots(-dVar41,dVar33);
    dVar39 = (double)fastfunc::FastWrapRot((float)(dVar39 * dVar41),(float)dVar33);
    *(float *)(param_1 + 0x44) = (float)dVar39;
    fVar1 = *(float *)(iVar12 + 0x88) + 1.5707963;
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
    *(float *)(param_1 + 0x44) =
         (float)(dVar39 * (double)(fVar1 * fVar4 * 2.601887e-06 +
                                  fVar4 * -0.0001980741 +
                                  fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3));
    dVar39 = (double)fastfunc::FastWrapRot(*(float *)(param_1 + 0x48),*(float *)(iVar12 + 0x88));
  }
  *(float *)(param_1 + 0x48) = (float)dVar39;
  if ((0 < (int)lVar23) && (0 < (int)lVar24)) {
    iVar13 = (int)(lVar24 << 4);
    fVar1 = *(float *)(puVar20 + 0x10);
    dVar39 = 0.0;
    *(undefined4 *)((int)puVar20 + 0x7c) = 0;
    *(undefined4 *)(puVar20 + 0xf) = 0;
    *(undefined4 *)((int)puVar20 + 0x74) = 0;
    *(undefined4 *)(puVar20 + 0xe) = 0;
    fVar2 = *(float *)((int)puVar20 + 0x84);
    fVar3 = *(float *)((int)&pSVar17->points[0].x + iVar13) - fVar1;
    fVar4 = *(float *)((int)&pSVar17->points[0].y + iVar13) - fVar2;
    fVar8 = ABS(fVar3);
    fVar7 = ABS(fVar4);
    *(float *)((int)puVar20 + 0xb4) = fVar3;
    *(float *)(puVar20 + 0x17) = fVar4;
    *(float *)((int)puVar20 + 0xbc) = fVar8 - fVar7;
    fVar3 = *(float *)((int)&pSVar17->points[1].x + iVar13);
    fVar4 = *(float *)((int)&pSVar17->points[1].y + iVar13);
    uVar35 = (ulonglong)(*(uint *)((int)puVar20 + 0xb4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar20 + 0xbc) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar20 + 0x17) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)((int)puVar20 + 0xb4));
    if (*(float *)((int)puVar20 + 0xbc) - 0.0 < 0.0) {
      fVar6 = fVar7;
    }
    fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar35 << 2));
    fVar11 = ABS(*(float *)(puVar20 + 0x17));
    if (*(float *)((int)puVar20 + 0xbc) - 0.0 < 0.0) {
      fVar11 = fVar8;
    }
    fVar8 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    dVar41 = dVar39;
    if (0.0 < fVar6) {
      lVar23 = uVar22 - 0x2d0;
      lVar25 = uVar22 - 0x168;
      lVar24 = uVar22 - 0x178;
      lVar31 = 2;
      fVar6 = (fVar11 - fVar6) / (fVar11 + fVar6);
      fVar11 = fVar6 * fVar6;
      *(float *)((int)puVar20 + 0x174) = fVar6;
      *(float *)((int)puVar20 + 0x16c) = fVar6;
      *(float *)(puVar20 + 0x2e) = fVar6;
      *(float *)(puVar20 + 0x2d) = fVar6;
      fVar6 = fVar11 * fVar11;
      *(float *)((int)puVar20 + 0x16c) = *(float *)((int)puVar20 + 0x16c) * fVar11;
      *(float *)(puVar20 + 0x2e) = *(float *)(puVar20 + 0x2e) * fVar6;
      *(float *)((int)puVar20 + 0x174) = *(float *)((int)puVar20 + 0x174) * fVar6 * fVar11;
      do {
        *(float *)((int)lVar23 + 0x168) = *(float *)((int)lVar23 + 0x158) * fVar6 * fVar6;
        iVar14 = (int)lVar24;
        lVar24 = lVar24 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar14 + 4) * fVar6 * fVar6;
        lVar25 = lVar25 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar25 = uVar22 - 0x178;
      pfVar28 = (float *)&DAT_007358e0;
      lVar23 = lVar26;
      lVar24 = lVar25;
      do {
        fVar6 = *pfVar28;
        fVar11 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar23 + 0x168) = *(float *)((int)lVar23 + 0x168) * fVar6;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar11;
        lVar24 = lVar24 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar24 = 2;
      lVar23 = lVar26;
      do {
        iVar14 = (int)lVar23;
        iVar21 = (int)lVar25;
        lVar23 = lVar23 + 0x10;
        lVar25 = lVar25 + 0x10;
        dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar14 + 0x168)) +
                          *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) + *(float *)(iVar21 + 0xc)
                         );
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      dVar41 = (double)((float)(dVar41 + dVar32) * fVar7 + fVar8);
    }
    fVar3 = fVar3 - fVar1;
    fVar4 = fVar4 - fVar2;
    fVar6 = ABS(fVar3);
    fVar2 = ABS(fVar4);
    *(float *)(puVar20 + 0x15) = fVar3;
    *(float *)((int)puVar20 + 0xac) = fVar4;
    *(float *)(puVar20 + 0x16) = fVar6 - fVar2;
    uVar35 = (ulonglong)(*(uint *)(puVar20 + 0x15) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar20 + 0x16) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar20 + 0xac) >> 0x1d) & 4;
    fVar1 = ABS(*(float *)(puVar20 + 0x15));
    if (*(float *)(puVar20 + 0x16) - 0.0 < 0.0) {
      fVar1 = fVar2;
    }
    fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar35 << 2));
    fVar3 = ABS(*(float *)((int)puVar20 + 0xac));
    if (*(float *)(puVar20 + 0x16) - 0.0 < 0.0) {
      fVar3 = fVar6;
    }
    fVar4 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    dVar34 = dVar39;
    if (0.0 < fVar1) {
      lVar23 = uVar22 - 0x2d0;
      lVar24 = uVar22 - 0x198;
      lVar25 = uVar22 - 0x188;
      lVar31 = 2;
      fVar1 = (fVar3 - fVar1) / (fVar3 + fVar1);
      fVar3 = fVar1 * fVar1;
      *(float *)((int)puVar20 + 0x154) = fVar1;
      *(float *)((int)puVar20 + 0x14c) = fVar1;
      *(float *)(puVar20 + 0x2a) = fVar1;
      *(float *)(puVar20 + 0x29) = fVar1;
      fVar1 = fVar3 * fVar3;
      *(float *)((int)puVar20 + 0x14c) = *(float *)((int)puVar20 + 0x14c) * fVar3;
      *(float *)(puVar20 + 0x2a) = *(float *)(puVar20 + 0x2a) * fVar1;
      *(float *)((int)puVar20 + 0x154) = *(float *)((int)puVar20 + 0x154) * fVar1 * fVar3;
      do {
        *(float *)((int)lVar23 + 0x148) = *(float *)((int)lVar23 + 0x138) * fVar1 * fVar1;
        iVar14 = (int)lVar24;
        lVar23 = lVar23 + 8;
        lVar24 = lVar24 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar14 + 4) * fVar1 * fVar1;
        lVar25 = lVar25 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar25 = uVar22 - 0x198;
      pfVar28 = (float *)&DAT_007358e0;
      lVar23 = lVar26;
      lVar24 = lVar25;
      do {
        fVar1 = *pfVar28;
        fVar3 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar23 + 0x148) = *(float *)((int)lVar23 + 0x148) * fVar1;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar3;
        lVar24 = lVar24 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar24 = 2;
      lVar23 = lVar26;
      do {
        iVar14 = (int)lVar23;
        lVar23 = lVar23 + 0x10;
        iVar21 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar14 + 0x148)) +
                          *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) + *(float *)(iVar21 + 0xc)
                         );
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      dVar34 = (double)((float)(dVar34 + dVar32) * fVar2 + fVar4);
    }
    dVar34 = (double)fastfunc::FastDiffRots(dVar34,dVar41);
    dVar41 = (double)fastfunc::FastWrapRot((float)(dVar40 * dVar34),(float)dVar41);
    *(float *)(puVar20 + 0xf) = (float)dVar41;
    fVar1 = *(float *)((int)puVar20 + 0x84);
    fVar2 = *(float *)(puVar20 + 0x10);
    fVar4 = fVar1 - *(float *)((int)&pSVar17->points[0].y + iVar13);
    fVar6 = fVar2 - *(float *)((int)&pSVar17->points[0].x + iVar13);
    fVar3 = *(float *)(puVar20 + 0x11);
    fVar7 = *(float *)((int)&pSVar17->points[0].z + iVar13) - fVar3;
    fVar4 = SQRT(fVar6 * fVar6 + fVar4 * fVar4);
    *(float *)(puVar20 + 0x14) = fVar7;
    dVar33 = ABS((double)fVar7);
    dVar34 = ABS((double)fVar4);
    *(float *)((int)puVar20 + 0x9c) = fVar4;
    *(float *)((int)puVar20 + 0xa4) = (float)(dVar34 - dVar33);
    fVar4 = *(float *)((int)&pSVar17->points[1].x + iVar13);
    fVar6 = *(float *)((int)&pSVar17->points[1].y + iVar13);
    fVar7 = *(float *)((int)&pSVar17->points[1].z + iVar13);
    uVar35 = (ulonglong)(*(uint *)((int)puVar20 + 0x9c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar20 + 0xa4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar20 + 0x14) >> 0x1d) & 4;
    dVar41 = ABS((double)*(float *)((int)puVar20 + 0x9c));
    if ((double)*(float *)((int)puVar20 + 0xa4) - dVar39 < 0.0) {
      dVar41 = dVar33;
    }
    fVar11 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar35 << 2));
    fVar8 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    dVar33 = ABS((double)*(float *)(puVar20 + 0x14));
    if ((double)*(float *)((int)puVar20 + 0xa4) - dVar39 < 0.0) {
      dVar33 = dVar34;
    }
    dVar34 = dVar39;
    if (dVar39 < dVar41) {
      lVar23 = uVar22 - 0x2d0;
      lVar24 = uVar22 - 0x1b8;
      lVar25 = uVar22 - 0x1a8;
      lVar31 = 2;
      fVar9 = (float)(dVar33 - dVar41) / (float)(dVar33 + dVar41);
      fVar10 = fVar9 * fVar9;
      *(float *)((int)puVar20 + 0x134) = fVar9;
      *(float *)((int)puVar20 + 300) = fVar9;
      *(float *)(puVar20 + 0x26) = fVar9;
      *(float *)(puVar20 + 0x25) = fVar9;
      fVar9 = fVar10 * fVar10;
      *(float *)((int)puVar20 + 300) = *(float *)((int)puVar20 + 300) * fVar10;
      *(float *)(puVar20 + 0x26) = *(float *)(puVar20 + 0x26) * fVar9;
      *(float *)((int)puVar20 + 0x134) = *(float *)((int)puVar20 + 0x134) * fVar9 * fVar10;
      do {
        *(float *)((int)lVar23 + 0x128) = *(float *)((int)lVar23 + 0x118) * fVar9 * fVar9;
        iVar13 = (int)lVar24;
        lVar23 = lVar23 + 8;
        lVar24 = lVar24 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar13 + 4) * fVar9 * fVar9;
        lVar25 = lVar25 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar25 = uVar22 - 0x1b8;
      pfVar28 = (float *)&DAT_007358e0;
      lVar23 = lVar26;
      lVar24 = lVar25;
      do {
        fVar9 = *pfVar28;
        fVar10 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar23 + 0x128) = *(float *)((int)lVar23 + 0x128) * fVar9;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar10;
        lVar24 = lVar24 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar24 = 2;
      lVar23 = lVar26;
      dVar41 = dVar39;
      do {
        iVar13 = (int)lVar23;
        lVar23 = lVar23 + 0x10;
        iVar14 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar13 + 0x128)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      dVar34 = (double)((float)(dVar41 + dVar32) * fVar11 + fVar8);
    }
    fVar1 = fVar1 - fVar6;
    fVar2 = fVar2 - fVar4;
    fVar7 = fVar7 - fVar3;
    fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
    *(float *)((int)puVar20 + 0x94) = fVar7;
    dVar37 = ABS((double)fVar7);
    dVar33 = ABS((double)fVar1);
    *(float *)(puVar20 + 0x12) = fVar1;
    *(float *)(puVar20 + 0x13) = (float)(dVar33 - dVar37);
    uVar35 = (ulonglong)(*(uint *)(puVar20 + 0x12) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar20 + 0x13) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar20 + 0x94) >> 0x1d) & 4;
    dVar41 = ABS((double)*(float *)(puVar20 + 0x12));
    if ((double)*(float *)(puVar20 + 0x13) - dVar39 < 0.0) {
      dVar41 = dVar37;
    }
    fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar35 << 2));
    dVar37 = ABS((double)*(float *)((int)puVar20 + 0x94));
    if ((double)*(float *)(puVar20 + 0x13) - dVar39 < 0.0) {
      dVar37 = dVar33;
    }
    fVar2 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    if (dVar39 < dVar41) {
      lVar23 = uVar22 - 0x2d0;
      lVar24 = uVar22 - 0x1d8;
      lVar25 = uVar22 - 0x1c8;
      lVar31 = 2;
      fVar3 = (float)(dVar37 - dVar41) / (float)(dVar37 + dVar41);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar20 + 0x114) = fVar3;
      *(float *)((int)puVar20 + 0x10c) = fVar3;
      *(float *)(puVar20 + 0x22) = fVar3;
      *(float *)(puVar20 + 0x21) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar20 + 0x10c) = *(float *)((int)puVar20 + 0x10c) * fVar4;
      *(float *)(puVar20 + 0x22) = *(float *)(puVar20 + 0x22) * fVar3;
      *(float *)((int)puVar20 + 0x114) = *(float *)((int)puVar20 + 0x114) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar23 + 0x108) = *(float *)((int)lVar23 + 0xf8) * fVar3 * fVar3;
        iVar13 = (int)lVar24;
        lVar23 = lVar23 + 8;
        lVar24 = lVar24 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar13 + 4) * fVar3 * fVar3;
        lVar25 = lVar25 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar25 = uVar22 - 0x1d8;
      pfVar28 = (float *)&DAT_007358e0;
      lVar23 = lVar26;
      lVar24 = lVar25;
      do {
        fVar3 = *pfVar28;
        fVar4 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar23 + 0x108) = *(float *)((int)lVar23 + 0x108) * fVar3;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar4;
        lVar24 = lVar24 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar23 = 2;
      do {
        iVar13 = (int)lVar26;
        iVar14 = (int)lVar25;
        lVar26 = lVar26 + 0x10;
        lVar25 = lVar25 + 0x10;
        dVar39 = (double)((float)(dVar39 + (double)*(float *)(iVar13 + 0x108)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      dVar39 = (double)((float)(dVar39 + dVar32) * fVar1 + fVar2);
    }
    dVar34 = -dVar34;
    dVar32 = (double)fastfunc::FastDiffRots(-dVar39,dVar34);
    dVar32 = (double)fastfunc::FastWrapRot((float)(dVar40 * dVar32),(float)dVar34);
    *(float *)((int)puVar20 + 0x74) = (float)dVar32;
    camera::camera5::Camera_SetMobyDrivenTargetRot((float *)(puVar20 + 0xe));
  }
  *(float *)(param_1 + 0x2c) =
       *(float *)(*(int *)(param_1 + 0x24) + 0x24) *
       -((*(float *)(iVar12 + 0x9c) - *(float *)(iVar12 + 0xa0)) * *(float *)(iVar12 + 0xa4) -
        *(float *)(iVar12 + 0x9c));
  fVar1 = *(float *)(iVar12 + 0xa4);
  uVar19 = (int)*(uint *)(iVar12 + 0xa4) >> 0x1f;
  if (0x3f4ccccd < (int)((uVar19 >> 1 ^ *(uint *)(iVar12 + 0xa4)) - uVar19)) {
    mobyutil::OrganicDeltAng
              (3.1415927,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
               mobyutil::g_FrameTime * 6.2831855,(float *)(iVar12 + 0x88),0x280f78,
               (float *)(iVar12 + 0x8c));
    fVar1 = *(float *)(iVar12 + 0xa4);
  }
  return (double)fVar1 == dVar38;
}



//==== 002825d4  ns=mobyupdate_helpers  size=0xd0
// sig: undefined M1448_002825d4(void)
// callers(1): 002826c8 mobyupdate_unsorted::UpdateMoby_1448
// callees(1): 0011aeec mobyutil::MB_ShowPersistentMessage

void mobyupdate_helpers::M1448_002825d4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x78);
  iVar2 = *(int *)(iVar1 + 0x94);
  if (iVar2 < 1) {
    if (-1 < iVar2) {
      *(undefined4 *)(iVar1 + 0x80) = 0;
    }
  }
  else if (iVar2 < 2) {
    *(undefined4 *)(iVar1 + 0x80) = 1;
  }
  iVar1 = *(int *)(iVar1 + 0x80);
  if (iVar1 != 4) {
    if (iVar1 == 3) {
      mobyutil::MB_ShowPersistentMessage(10,0x1784);
      return;
    }
    if (iVar1 == 2) {
      mobyutil::MB_ShowPersistentMessage(10,0x1786);
      return;
    }
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        return;
      }
      mobyutil::MB_ShowPersistentMessage(10,0x426c);
      return;
    }
  }
  mobyutil::MB_ShowPersistentMessage(10,0x426b);
  return;
}



//==== 002826c8  ns=mobyupdate_unsorted  size=0xd60
// sig: undefined UpdateMoby_1448(MobyInstance * moby)
// callers(0): 
// callees(15): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00047f48 camera::camera5::Camera_SetCurrentAccel; 00047f74 camera::SetCameraPosition; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 0006dad0 draw::FadeToBlack; 000a0c38 hero::Hero_Warp; 000fddc0 mobyutil::MB_SetAnimation; 00112900 mobyutil::MB_GetOrientation; 0011b0b0 mobyutil::MB_ClearHelpMessage; 0015d12c sound::PlayMobySound; 00280fb8 mobyupdate_helpers::M1448_00280fb8; 002825d4 mobyupdate_helpers::M1448_002825d4; 00500b64 fastfunc::FastEulerToMtx; 00502578 fastfunc::FastWrapRot

/* Moby 1448 */

void mobyupdate_unsorted::UpdateMoby_1448(MobyInstance *moby)

{
  byte bVar1;
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
  ushort uVar15;
  void *pvVar16;
  MobyClass *pMVar17;
  int iVar18;
  Spline *pSVar19;
  Spline *pSVar20;
  ulonglong *puVar21;
  float fVar22;
  uint uVar23;
  undefined4 uVar24;
  Cuboid *pCVar25;
  Cuboid *pCVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  int iVar31;
  longlong lVar32;
  ulonglong uVar33;
  float *pfVar35;
  longlong lVar34;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  uint uVar36;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar42;
  ulonglong in_f29;
  double dVar43;
  ulonglong in_f30;
  double dVar44;
  ulonglong in_f31;
  double dVar45;
  
  lVar28 = (longlong)(int)moby;
  uVar27 = ZEXT48(&stack0x00000000);
  lVar30 = uVar27 - 0x1a0;
  puVar21 = (ulonglong *)lVar30;
  *puVar21 = uVar27;
  puVar21[0x36] = in_LR;
  puVar21[0x2d] = in_f25;
  puVar21[0x2e] = in_f26;
  puVar21[0x2f] = in_f27;
  puVar21[0x30] = in_f28;
  puVar21[0x31] = in_f29;
  puVar21[0x32] = in_f30;
  puVar21[0x33] = in_f31;
  puVar21[0x2c] = unaff_r31;
  puVar21[0x2b] = unaff_r30;
  pvVar16 = moby->pVar;
  fVar2 = (moby->rotation).y;
  *(f32 *)(puVar21 + 0xe) = (moby->rotation).x;
  fVar3 = (moby->rotation).z;
  pMVar17 = moby->pClass;
  *(f32 *)((int)puVar21 + 0x74) = fVar2;
  fVar2 = (moby->rotation).w;
  *(f32 *)(puVar21 + 0xf) = fVar3;
  *(f32 *)((int)puVar21 + 0x7c) = fVar2;
  dVar45 = (double)(moby->pos).x;
  fVar4 = pMVar17->gScale * DAT_007aabc0;
  dVar44 = (double)(moby->pos).y;
  dVar43 = (double)(moby->pos).z;
  *(int *)((int)pvVar16 + 0xb0) = *(int *)((int)pvVar16 + 0xb0) + 1;
  bVar1 = moby->state;
  moby->scale = fVar4;
  puVar21[0x2a] = unaff_r29;
  puVar21[0x29] = unaff_r28;
  puVar21[0x28] = unaff_r27;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      uVar15 = moby->uid;
      if (((&DAT_00a545c4)[(short)uVar15] != '\0') ||
         ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar15 >> 5) << 2)
                    ) & 1 << (uVar15 & 0x1f)) != 0)) {
        *(undefined4 *)((int)pvVar16 + 0x94) = 0;
        *(undefined4 *)((int)pvVar16 + 0x80) = 0;
        *(undefined4 *)((int)pvVar16 + 0x98) = 0;
      }
      moby->updateDistance = -1;
      moby->drawDistance = 0x80;
      uVar36 = g_heroMobyPtr->color;
      uVar23 = g_heroMobyPtr->light;
      moby->state = '\x01';
      *(undefined4 *)((int)pvVar16 + 0xb0) = 0;
      moby->color = uVar36;
      moby->light = uVar23;
      if (moby->animationId != '\x02') {
        mobyutil::MB_SetAnimation(lVar28,2,0,0);
      }
      pCVar25 = Cuboids;
      iVar31 = *(int *)((int)pvVar16 + 0x7c);
      *(undefined4 *)((int)pvVar16 + 0x94) = 1;
      *(undefined4 *)((int)pvVar16 + 0x98) = 1;
      *(undefined4 *)((int)pvVar16 + 0x80) = 1;
      (moby->pos).x = pCVar25[iVar31].pos.x;
      (moby->pos).y = pCVar25[iVar31].pos.y;
      (moby->pos).z = pCVar25[iVar31].pos.z;
      (moby->pos).w = pCVar25[iVar31].pos.w;
      pCVar25 = Cuboids;
      iVar31 = *(int *)((int)pvVar16 + 0x7c);
      (moby->rotation).x = Cuboids[iVar31].rot.x;
      (moby->rotation).y = pCVar25[iVar31].rot.y;
      (moby->rotation).z = pCVar25[iVar31].rot.z;
      (moby->rotation).w = pCVar25[iVar31].rot.w;
    }
    else {
      if (((moby->animationId == '\x02') && ((moby->field43_0x70 & 2U) != 0)) &&
         (*(int *)((int)pvVar16 + 0xac) == 0)) {
        sound::PlayMobySound(1,0,moby);
        *(undefined4 *)((int)pvVar16 + 0xac) = 0;
      }
      if (((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) &&
         ((iVar31 = *(int *)((int)pvVar16 + 0xb0),
          puVar21[0x25] = (longlong)(int)(animationSpeed * 30.5),
          *(int *)((int)puVar21 + 300) < iVar31 &&
          ((mobyupdate_helpers::M1448_002825d4(lVar28), (g_buttonsPressedThisFrame & TRIANGLE) != 0
           && (mobyutil::g_HelpMsgOwner == 10)))))) {
        iVar31 = *(int *)((int)pvVar16 + 0x80);
        if (-1 < iVar31) {
          *(undefined4 *)((int)pvVar16 + 0xa8) = 1;
          fVar4 = DAT_007aabc0;
          uVar24 = DAT_007aabbc;
          if (iVar31 < 1) {
            if (-1 < iVar31) {
              *(undefined4 *)((int)pvVar16 + 0x98) = 0;
              *(float *)((int)pvVar16 + 0x9c) = fVar4;
              *(undefined4 *)((int)pvVar16 + 0x94) = 1;
              *(undefined4 *)((int)pvVar16 + 0xa0) = DAT_007aabbc;
            }
          }
          else if (iVar31 < 2) {
            *(undefined4 *)((int)pvVar16 + 0x98) = 1;
            *(undefined4 *)((int)pvVar16 + 0x9c) = uVar24;
            *(undefined4 *)((int)pvVar16 + 0x94) = 0;
            *(float *)((int)pvVar16 + 0xa0) = DAT_007aabc0;
          }
        }
      }
      pCVar25 = Cuboids;
      if (*(int *)((int)pvVar16 + 0xa8) == 0) {
        uVar15 = moby->uid;
        if (((&DAT_00a545c4)[(short)uVar15] != '\0') ||
           ((*(uint *)(&DAT_00a0cd1c +
                      Level * 0x100 + (int)((longlong)((int)(short)uVar15 >> 5) << 2)) &
            1 << (uVar15 & 0x1f)) != 0)) {
          uVar36 = *(uint *)((int)pvVar16 + 0x94) ^ 1;
          iVar31 = *(int *)((int)pvVar16 + *(uint *)((int)pvVar16 + 0x94) * 4 + 0x78);
          iVar18 = *(int *)((int)pvVar16 + uVar36 * 4 + 0x78);
          fVar6 = g_heroPosition.y - Cuboids[iVar31].pos.y;
          fVar4 = g_heroPosition.x - Cuboids[iVar31].pos.x;
          fVar7 = g_heroPosition.y - Cuboids[iVar18].pos.y;
          fVar5 = g_heroPosition.x - Cuboids[iVar18].pos.x;
          if (SQRT(fVar5 * fVar5 + fVar7 * fVar7) < SQRT(fVar4 * fVar4 + fVar6 * fVar6)) {
            *(uint *)((int)pvVar16 + 0x94) = uVar36;
            iVar31 = *(int *)((int)pvVar16 + uVar36 * 4 + 0x78);
            *(uint *)((int)pvVar16 + 0x80) = *(uint *)((int)pvVar16 + 0x80) ^ 1;
            *(uint *)((int)pvVar16 + 0x98) = *(uint *)((int)pvVar16 + 0x98) ^ 1;
            pCVar26 = Cuboids;
            (moby->pos).x = pCVar25[iVar31].pos.x;
            (moby->pos).y = pCVar25[iVar31].pos.y;
            iVar18 = *(int *)((int)pvVar16 + 0x94);
            (moby->pos).z = pCVar25[iVar31].pos.z;
            (moby->pos).w = pCVar25[iVar31].pos.w;
            iVar31 = *(int *)((int)pvVar16 + iVar18 * 4 + 0x78);
            (moby->rotation).x = pCVar26[iVar31].rot.x;
            (moby->rotation).y = pCVar26[iVar31].rot.y;
            (moby->rotation).z = pCVar26[iVar31].rot.z;
            (moby->rotation).w = pCVar26[iVar31].rot.w;
            fastfunc::FastEulerToMtx(lVar28 + 0xc0,lVar28 + 0x40);
            moby->scale = moby->pClass->gScale;
          }
        }
      }
      else {
        *(undefined4 *)((int)pvVar16 + 0xa8) = 0;
        mobyutil::MB_ClearHelpMessage((MobyInstance *)0xa);
        moby->state = '\x02';
        sound::PlayMobySound(2,0,moby);
        if (moby->animationId != '\0') {
          mobyutil::MB_SetAnimation(lVar28,0,0,0);
        }
        puVar21[0x25] = (longlong)(int)(animationSpeed * 10.5);
        draw::FadeToBlack(*(undefined4 *)((int)puVar21 + 300));
        fVar13 = 0.0;
        iVar31 = *(int *)((int)pvVar16 + *(int *)((int)pvVar16 + 0x98) * 4 + 0x60);
        *(undefined4 *)((int)pvVar16 + 0x88) = 0;
        pSVar19 = Splines[iVar31];
        iVar31 = *(int *)((int)pvVar16 + *(int *)((int)pvVar16 + 0x98) * 4 + 0x68);
        fVar4 = pSVar19->points[0].x;
        *(float *)(puVar21 + 0x14) = fVar4;
        fVar5 = pSVar19->points[0].y;
        *(float *)((int)puVar21 + 0xa4) = fVar5;
        fVar6 = pSVar19->points[0].z;
        *(float *)(puVar21 + 0x15) = fVar6;
        pSVar20 = Splines[iVar31];
        *(float *)((int)puVar21 + 0xac) = pSVar19->points[0].w;
        fVar7 = pSVar20->points[0].x;
        fVar8 = pSVar20->points[0].y;
        fVar11 = fVar7 - fVar4;
        fVar10 = fVar8 - fVar5;
        fVar9 = pSVar20->points[0].z;
        fVar12 = ABS(fVar11);
        fVar14 = ABS(fVar10);
        *(float *)((int)puVar21 + 0xdc) = fVar11;
        *(float *)(puVar21 + 0x1c) = fVar10;
        *(undefined4 *)((int)puVar21 + 0x9c) = 0;
        *(undefined4 *)(puVar21 + 0x13) = 0;
        *(undefined4 *)((int)puVar21 + 0x94) = 0;
        *(undefined4 *)(puVar21 + 0x12) = 0;
        *(float *)((int)puVar21 + 0xe4) = fVar12 - fVar14;
        uVar33 = (ulonglong)(*(uint *)((int)puVar21 + 0xdc) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar21 + 0xe4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar21 + 0x1c) >> 0x1d) & 4;
        fVar11 = ABS(*(float *)((int)puVar21 + 0xdc));
        if (*(float *)((int)puVar21 + 0xe4) - 0.0 < 0.0) {
          fVar11 = fVar14;
        }
        fVar14 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar33 << 2));
        fVar10 = *(float *)(((uint)(uVar33 << 2) | 0x735900) + 4);
        fVar22 = ABS(*(float *)(puVar21 + 0x1c));
        if (*(float *)((int)puVar21 + 0xe4) - 0.0 < 0.0) {
          fVar22 = fVar12;
        }
        fVar12 = fVar13;
        if (0.0 < fVar11) {
          lVar29 = uVar27 - 400;
          lVar32 = uVar27 - 0x98;
          lVar34 = uVar27 - 0x88;
          lVar37 = 2;
          fVar11 = (fVar22 - fVar11) / (fVar22 + fVar11);
          fVar12 = fVar11 * fVar11;
          *(float *)((int)puVar21 + 0x114) = fVar11;
          *(float *)((int)puVar21 + 0x10c) = fVar11;
          *(float *)(puVar21 + 0x22) = fVar11;
          *(float *)(puVar21 + 0x21) = fVar11;
          fVar11 = fVar12 * fVar12;
          *(float *)((int)puVar21 + 0x10c) = *(float *)((int)puVar21 + 0x10c) * fVar12;
          *(float *)(puVar21 + 0x22) = *(float *)(puVar21 + 0x22) * fVar11;
          *(float *)((int)puVar21 + 0x114) = *(float *)((int)puVar21 + 0x114) * fVar11 * fVar12;
          do {
            *(float *)((int)lVar29 + 0x108) = *(float *)((int)lVar29 + 0xf8) * fVar11 * fVar11;
            iVar31 = (int)lVar32;
            lVar29 = lVar29 + 8;
            lVar32 = lVar32 + 8;
            *(float *)((int)lVar34 + 4) = *(float *)(iVar31 + 4) * fVar11 * fVar11;
            lVar34 = lVar34 + 8;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          lVar37 = 4;
          lVar34 = uVar27 - 0x98;
          pfVar35 = (float *)&DAT_007358e0;
          lVar29 = lVar30;
          lVar32 = lVar34;
          do {
            fVar11 = *pfVar35;
            fVar12 = pfVar35[1];
            pfVar35 = pfVar35 + 2;
            *(float *)((int)lVar29 + 0x108) = *(float *)((int)lVar29 + 0x108) * fVar11;
            lVar29 = lVar29 + 8;
            *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar12;
            lVar32 = lVar32 + 8;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          lVar32 = 2;
          lVar29 = lVar30;
          fVar11 = fVar13;
          do {
            iVar31 = (int)lVar29;
            iVar18 = (int)lVar34;
            lVar29 = lVar29 + 0x10;
            lVar34 = lVar34 + 0x10;
            fVar11 = fVar11 + *(float *)(iVar31 + 0x108) + *(float *)(iVar18 + 4) +
                     *(float *)(iVar18 + 8) + *(float *)(iVar18 + 0xc);
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
          fVar12 = (fVar11 + 0.7853982) * fVar14 + fVar10;
        }
        fVar5 = fVar5 - fVar8;
        fVar4 = fVar4 - fVar7;
        *(float *)(puVar21 + 0x13) = fVar12;
        fVar9 = fVar9 - fVar6;
        fVar4 = SQRT(fVar4 * fVar4 + fVar5 * fVar5);
        *(float *)((int)puVar21 + 0xd4) = fVar9;
        fVar9 = ABS(fVar9);
        fVar5 = ABS(fVar4);
        *(float *)(puVar21 + 0x1a) = fVar4;
        *(float *)(puVar21 + 0x1b) = fVar5 - fVar9;
        uVar33 = (ulonglong)(*(uint *)(puVar21 + 0x1a) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar21 + 0x1b) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar21 + 0xd4) >> 0x1d) & 4;
        fVar4 = ABS(*(float *)(puVar21 + 0x1a));
        if (*(float *)(puVar21 + 0x1b) - 0.0 < 0.0) {
          fVar4 = fVar9;
        }
        fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar33 << 2));
        fVar7 = ABS(*(float *)((int)puVar21 + 0xd4));
        if (*(float *)(puVar21 + 0x1b) - 0.0 < 0.0) {
          fVar7 = fVar5;
        }
        fVar5 = *(float *)(((uint)(uVar33 << 2) | 0x735900) + 4);
        if (0.0 < fVar4) {
          lVar29 = uVar27 - 400;
          lVar32 = uVar27 - 0xb8;
          lVar34 = uVar27 - 0xa8;
          lVar37 = 2;
          fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
          fVar7 = fVar4 * fVar4;
          *(float *)((int)puVar21 + 0xf4) = fVar4;
          *(float *)((int)puVar21 + 0xec) = fVar4;
          *(float *)(puVar21 + 0x1e) = fVar4;
          *(float *)(puVar21 + 0x1d) = fVar4;
          fVar4 = fVar7 * fVar7;
          *(float *)((int)puVar21 + 0xec) = *(float *)((int)puVar21 + 0xec) * fVar7;
          *(float *)(puVar21 + 0x1e) = *(float *)(puVar21 + 0x1e) * fVar4;
          *(float *)((int)puVar21 + 0xf4) = *(float *)((int)puVar21 + 0xf4) * fVar4 * fVar7;
          do {
            *(float *)((int)lVar29 + 0xe8) = *(float *)((int)lVar29 + 0xd8) * fVar4 * fVar4;
            iVar31 = (int)lVar32;
            lVar29 = lVar29 + 8;
            lVar32 = lVar32 + 8;
            *(float *)((int)lVar34 + 4) = *(float *)(iVar31 + 4) * fVar4 * fVar4;
            lVar34 = lVar34 + 8;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          lVar37 = 4;
          lVar34 = uVar27 - 0xb8;
          pfVar35 = (float *)&DAT_007358e0;
          lVar29 = lVar30;
          lVar32 = lVar34;
          do {
            fVar4 = *pfVar35;
            fVar7 = pfVar35[1];
            pfVar35 = pfVar35 + 2;
            *(float *)((int)lVar29 + 0xe8) = *(float *)((int)lVar29 + 0xe8) * fVar4;
            lVar29 = lVar29 + 8;
            *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar7;
            lVar32 = lVar32 + 8;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          lVar29 = 2;
          do {
            iVar31 = (int)lVar30;
            iVar18 = (int)lVar34;
            lVar30 = lVar30 + 0x10;
            lVar34 = lVar34 + 0x10;
            fVar13 = fVar13 + *(float *)(iVar31 + 0xe8) + *(float *)(iVar18 + 4) +
                     *(float *)(iVar18 + 8) + *(float *)(iVar18 + 0xc);
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          fVar13 = (fVar13 + 0.7853982) * fVar6 + fVar5;
        }
        fVar4 = animationSpeed;
        *(float *)((int)puVar21 + 0x94) = -fVar13;
        puVar21[0x25] = (longlong)(int)(fVar4 * 300.5);
        camera::SetCameraPosition
                  (uVar27 - 0x100,uVar27 - 0x110,2,*(undefined4 *)((int)puVar21 + 300),0);
        camera::camera5::Camera_SetCurrentAccel(0.001,1.0,1.0,0.001,1.0,1.0);
        camera::camera5::Camera_SetMobyDrivenTargetPos((float *)(uVar27 - 0x100));
        camera::camera5::Camera_SetMobyDrivenTargetRot((float *)(uVar27 - 0x110));
        hero::Hero_Warp(&Cuboids[*(int *)((int)pvVar16 + 0x84)].pos.x,
                        &Cuboids[*(int *)((int)pvVar16 + 0x84)].rot.x,0x72,0);
      }
    }
  }
  else if (bVar1 < 3) {
    iVar31 = mobyupdate_helpers::M1448_00280fb8(lVar28,*(undefined4 *)((int)pvVar16 + 0x98));
    if (iVar31 != 0) {
      moby->state = '\x03';
      pCVar25 = Cuboids;
      dVar42 = 0.0;
      *(undefined4 *)((int)pvVar16 + 0xa4) = 0;
      iVar31 = *(int *)((int)pvVar16 + *(int *)((int)pvVar16 + 0x94) * 4 + 0x78);
      iVar18 = *(int *)((int)pvVar16 + *(int *)((int)pvVar16 + 0x94) * 4 + 0x78);
      (moby->pos).x = pCVar25[iVar31].pos.x;
      (moby->pos).y = pCVar25[iVar31].pos.y;
      (moby->pos).z = pCVar25[iVar31].pos.z;
      (moby->pos).w = pCVar25[iVar31].pos.w;
      (moby->rotation).x = pCVar25[iVar18].rot.x;
      (moby->rotation).y = pCVar25[iVar18].rot.y;
      (moby->rotation).z = pCVar25[iVar18].rot.z;
      (moby->rotation).w = pCVar25[iVar18].rot.w;
      fastfunc::FastEulerToMtx(lVar28 + 0xc0,lVar28 + 0x40);
      fVar5 = (moby->transform).v0.y;
      fVar6 = (moby->transform).v0.x;
      fVar7 = (moby->transform).v0.z;
      fVar2 = (moby->pos).w;
      moby->scale = moby->pClass->gScale;
      *(f32 *)((int)puVar21 + 0xbc) = fVar2;
      fVar8 = (moby->transform).v2.x;
      fVar9 = (moby->transform).v2.y;
      fVar11 = (moby->transform).v2.z;
      fVar10 = (moby->pos).x;
      dVar41 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
      fVar13 = (moby->pos).y;
      fVar12 = (moby->pos).z;
      fVar14 = (moby->rotation).z;
      *(undefined4 *)((int)puVar21 + 0xcc) = 0;
      *(undefined4 *)(puVar21 + 0x19) = 0;
      *(undefined4 *)((int)puVar21 + 0xc4) = 0;
      *(undefined4 *)(puVar21 + 0x18) = 0;
      fVar4 = (float)(-2.0 / dVar41);
      dVar39 = dVar42;
      if (dVar42 - dVar41 < 0.0) {
        dVar39 = (double)(fVar7 * fVar4);
      }
      dVar40 = dVar42;
      if (dVar42 - dVar41 < 0.0) {
        dVar40 = (double)(fVar5 * fVar4);
      }
      dVar38 = dVar42;
      if (dVar42 - dVar41 < 0.0) {
        dVar38 = (double)(fVar6 * fVar4);
      }
      if (dVar41 - dVar42 < 0.0) {
        dVar39 = (double)(fVar7 * fVar4);
      }
      if (dVar41 - dVar42 < 0.0) {
        dVar40 = (double)(fVar5 * fVar4);
      }
      if (dVar41 - dVar42 < 0.0) {
        dVar38 = (double)(fVar6 * fVar4);
      }
      *(float *)(puVar21 + 0x17) = fVar12 + (float)(dVar39 + (double)fVar11);
      *(float *)((int)puVar21 + 0xb4) = fVar13 + (float)(dVar40 + (double)fVar9);
      *(float *)(puVar21 + 0x16) = fVar10 + (float)(dVar38 + (double)fVar8);
      dVar39 = (double)fastfunc::FastWrapRot(fVar14,3.1415927);
      *(float *)(puVar21 + 0x19) = (float)dVar39;
      hero::Hero_Warp((float *)(puVar21 + 0x16),(float *)(puVar21 + 0x18),0,0);
      camera::camera5::Camera_DeactivateMobyDrivenCam(0);
      uVar15 = moby->uid;
      iVar18 = (int)((longlong)((int)(short)uVar15 >> 5) << 2);
      iVar31 = (int)((longlong)((int)(short)uVar15 >> 5) << 2);
      uVar36 = *(uint *)(&DAT_00a54dd0 + iVar31);
      *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar18) =
           *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar18) | 1 << (uVar15 & 0x1f);
      *(uint *)(&DAT_00a54dd0 + iVar31) = uVar36 | 1 << (uVar15 & 0x1f);
    }
  }
  else if (bVar1 < 4) {
    moby->state = '\x01';
    *(undefined4 *)((int)pvVar16 + 0xb0) = 0;
    if (moby->animationId != '\x02') {
      puVar21[0x25] = (longlong)(int)(animationSpeed * 30.5);
      mobyutil::MB_SetAnimation(lVar28,2,0,*(undefined4 *)((int)puVar21 + 300));
    }
    sound::PlayMobySound(0,0,moby);
    *(undefined4 *)((int)pvVar16 + 0xac) = 1;
  }
  fVar4 = (moby->pos).x;
  fVar5 = (moby->pos).y;
  fVar6 = (moby->pos).z;
  *(f32 *)((int)puVar21 + 0x8c) = (moby->pos).w;
  *(float *)(puVar21 + 0x10) = (float)((double)fVar4 - dVar45);
  *(float *)((int)puVar21 + 0x84) = (float)((double)fVar5 - dVar44);
  *(float *)(puVar21 + 0x11) = (float)((double)fVar6 - dVar43);
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar16 + 0x20),(Vec4 *)(puVar21 + 0x10),uVar27 - 0x130,
             lVar28 + 0x40);
  return;
}



//==== 00283428  ns=mobyupdate_helpers  size=0xc
// sig: undefined M1454_00283428(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1454_00283428(int param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 4;
  return;
}



//==== 00283434  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1454_00283434(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1454_00283434(void)

{
  DAT_007aac14 = 0x10000;
  return;
}



//==== 00283468  ns=mobyupdate_helpers  size=0x518
// sig: undefined M1454_00283468(void)
// callers(1): 00284460 mobyupdate_unsorted::UpdateMoby_1454
// callees(5): 000fc620 mobyutil::MB_randInt; 001009b0 mobyutil::MB_MoveAndCollide; 00109af0 mobyutil::Delt; 0010a2e0 mobyutil::OrganicDeltAng; 005026a0 fastfunc::FastSubRots

void mobyupdate_helpers::M1454_00283468(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  Spline *pSVar8;
  ulonglong *puVar9;
  float fVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  float *unused;
  longlong lVar17;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  double dVar20;
  ulonglong in_f27;
  double dVar21;
  ulonglong in_f28;
  double dVar22;
  ulonglong in_f29;
  double dVar23;
  ulonglong in_f30;
  double dVar24;
  ulonglong in_f31;
  double dVar25;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0x110;
  puVar9 = (ulonglong *)lVar13;
  *puVar9 = uVar11;
  puVar9[0x24] = in_LR;
  puVar9[0x1d] = in_f27;
  puVar9[0x1e] = in_f28;
  puVar9[0x1f] = in_f29;
  puVar9[0x20] = in_f30;
  puVar9[0x21] = in_f31;
  puVar9[0x1b] = unaff_r30;
  iVar6 = *(int *)(param_1 + 0x78);
  puVar9[0x1a] = unaff_r29;
  fVar2 = *(float *)(param_1 + 0x10);
  iVar14 = *(int *)(iVar6 + 0x100);
  iVar7 = *(int *)(iVar6 + 0x120);
  fVar3 = *(float *)(param_1 + 0x14);
  puVar9[0x1c] = unaff_r31;
  pSVar8 = Splines[iVar14];
  dVar25 = (double)pSVar8->points[iVar7].x;
  dVar24 = (double)pSVar8->points[iVar7].y;
  fVar2 = (float)(dVar25 - (double)fVar2);
  dVar23 = (double)pSVar8->points[iVar7].z;
  fVar3 = (float)(dVar24 - (double)fVar3);
  fVar1 = ABS(fVar2);
  fVar5 = ABS(fVar3);
  *(float *)(puVar9 + 0x10) = fVar2;
  *(float *)((int)puVar9 + 0x84) = fVar3;
  *(float *)(puVar9 + 0x11) = fVar1 - fVar5;
  dVar21 = 0.0;
  uVar15 = (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1d) & 4;
  unused = (float *)(uVar15 << 2);
  fVar2 = ABS(*(float *)(puVar9 + 0x10));
  if (*(float *)(puVar9 + 0x11) - 0.0 < 0.0) {
    fVar2 = fVar5;
  }
  fVar5 = unused[0x1cd640];
  fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  fVar10 = ABS(*(float *)((int)puVar9 + 0x84));
  if (*(float *)(puVar9 + 0x11) - 0.0 < 0.0) {
    fVar10 = fVar1;
  }
  puVar9[0x19] = unaff_r28;
  puVar9[0x18] = unaff_r27;
  puVar9[0x17] = unaff_r26;
  dVar19 = dVar21;
  if (0.0 < fVar2) {
    lVar12 = uVar11 - 0x100;
    lVar16 = uVar11 - 0x84;
    lVar17 = uVar11 - 0x74;
    lVar18 = 2;
    fVar2 = (fVar10 - fVar2) / (fVar10 + fVar2);
    fVar1 = fVar2 * fVar2;
    *(float *)(puVar9 + 0x13) = fVar2;
    *(float *)(puVar9 + 0x12) = fVar2;
    *(float *)((int)puVar9 + 0x94) = fVar2;
    *(float *)((int)puVar9 + 0x8c) = fVar2;
    fVar2 = fVar1 * fVar1;
    *(float *)(puVar9 + 0x12) = *(float *)(puVar9 + 0x12) * fVar1;
    *(float *)((int)puVar9 + 0x94) = *(float *)((int)puVar9 + 0x94) * fVar2;
    *(float *)(puVar9 + 0x13) = *(float *)(puVar9 + 0x13) * fVar2 * fVar1;
    do {
      *(float *)((int)lVar12 + 0x8c) = *(float *)((int)lVar12 + 0x7c) * fVar2 * fVar2;
      iVar14 = (int)lVar16;
      lVar12 = lVar12 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar14 + 4) * fVar2 * fVar2;
      lVar17 = lVar17 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar17 = uVar11 - 0x84;
    unused = (float *)&DAT_007358e0;
    lVar18 = 4;
    lVar12 = lVar13;
    lVar16 = lVar17;
    do {
      fVar2 = *unused;
      fVar1 = unused[1];
      unused = unused + 2;
      *(float *)((int)lVar12 + 0x8c) = *(float *)((int)lVar12 + 0x8c) * fVar2;
      lVar12 = lVar12 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar1;
      lVar16 = lVar16 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar12 = 2;
    do {
      iVar14 = (int)lVar13;
      lVar13 = lVar13 + 0x10;
      iVar7 = (int)lVar17;
      lVar17 = lVar17 + 0x10;
      dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar14 + 0x8c)) + *(float *)(iVar7 + 4)
                        + *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    dVar19 = (double)((float)(dVar19 + 0.7853981852531433) * fVar5 + fVar3);
  }
  mobyutil::OrganicDeltAng
            ((float)dVar19,DAT_0071f418 * 3.1415927,DAT_0071f418 * 3.1415927,
             mobyutil::g_FrameTime * 6.2831855,(float *)(param_1 + 0x48),(int)unused,
             (float *)(iVar6 + 0x128));
  dVar22 = (double)(DAT_007aac38 * mobyutil::g_FrameTime);
  dVar19 = (double)fastfunc::FastSubRots((float)dVar19,*(float *)(param_1 + 0x48));
  if (0.2617993950843811 < dVar19) {
    dVar22 = (double)mobyutil::g_FrameTime;
  }
  mobyutil::Delt((float)dVar22,DAT_0071f418,(float *)(iVar6 + 300));
  fVar2 = *(float *)(param_1 + 0xc4);
  fVar3 = *(float *)(param_1 + 0xc0);
  fVar5 = *(float *)(param_1 + 200);
  dVar19 = (double)SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2);
  if (dVar19 == dVar21) {
    uVar4 = *(undefined4 *)(param_1 + 0xcc);
    dVar19 = dVar21;
    dVar22 = dVar21;
    dVar20 = dVar21;
  }
  else {
    fVar1 = (float)((double)*(float *)(iVar6 + 300) / dVar19);
    uVar4 = *(undefined4 *)(param_1 + 0xcc);
    dVar20 = (double)(fVar3 * fVar1);
    dVar22 = (double)(fVar2 * fVar1);
    dVar19 = (double)(fVar5 * fVar1);
  }
  *(float *)(puVar9 + 0xe) = (float)dVar20;
  *(float *)((int)puVar9 + 0x74) = (float)dVar22;
  *(float *)(puVar9 + 0xf) = (float)dVar19;
  *(undefined4 *)((int)puVar9 + 0x7c) = uVar4;
  mobyutil::MB_MoveAndCollide(0x3fe0000000000000,0x3fe0000000000000,dVar21,param_1,uVar11 - 0xa0);
  fVar2 = (float)((double)*(float *)(param_1 + 0x14) - dVar24);
  fVar3 = (float)((double)*(float *)(param_1 + 0x10) - dVar25);
  fVar5 = (float)((double)*(float *)(param_1 + 0x18) - dVar23);
  if (SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2) < 1.0) {
    iVar14 = mobyutil::MB_randInt(Splines[*(int *)(iVar6 + 0x100)]->cnt + -1);
    iVar14 = *(int *)(iVar6 + 0x120) + iVar14 + 1;
    *(int *)(iVar6 + 0x120) =
         iVar14 - (iVar14 / Splines[*(int *)(iVar6 + 0x100)]->cnt) *
                  Splines[*(int *)(iVar6 + 0x100)]->cnt;
  }
  dVar24 = (double)(*(float *)(iVar6 + 300) / (DAT_007aac40 * mobyutil::g_FrameTime));
  dVar23 = 2.0;
  if ((dVar24 <= 2.0) && (dVar23 = dVar24, dVar24 < dVar21)) {
    dVar23 = dVar21;
  }
  if (*(int *)(iVar6 + 0x138) != 0) {
    *(float *)(*(int *)(iVar6 + 0x138) + 0x58) = (float)dVar23;
    iVar14 = *(int *)(iVar6 + 0x138);
    *(undefined4 *)(iVar14 + 0x40) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(iVar14 + 0x44) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(iVar14 + 0x48) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(iVar14 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    iVar14 = *(int *)(iVar6 + 0x138);
    *(undefined4 *)(iVar14 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(iVar14 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(iVar14 + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar14 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  }
  if (*(int *)(iVar6 + 0x13c) != 0) {
    *(float *)(*(int *)(iVar6 + 0x13c) + 0x58) = (float)dVar23;
    iVar14 = *(int *)(iVar6 + 0x13c);
    *(undefined4 *)(iVar14 + 0x40) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(iVar14 + 0x44) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(iVar14 + 0x48) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(iVar14 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    iVar6 = *(int *)(iVar6 + 0x13c);
    *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(iVar6 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  }
  return;
}



//==== 002839d8  ns=mobyupdate_helpers  size=0xa44
// sig: undefined M1454_002839d8(void)
// callers(1): 00284460 mobyupdate_unsorted::UpdateMoby_1454
// callees(14): 000efb38 mobyfunc::DeleteMoby; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010a2e0 mobyutil::OrganicDeltAng; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0010e030 mobyutil::MB_genericExplosion; 001118d8 mobyutil::MB_getTarget; 0011a560 mobyutil::MB_SpawnDebrisMoby; 005017c4 fastfunc::FastQuaternionMult; 00501980 fastfunc::FastQuaternionToEuler; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

void mobyupdate_helpers::M1454_002839d8(MobyInstance *param_1)

{
  f32 fVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  ulonglong *puVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  MobyInstance *pMVar14;
  ulonglong uVar15;
  undefined4 uVar17;
  int iVar18;
  longlong lVar16;
  longlong lVar19;
  float *pfVar20;
  MobyInstance *pMVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong unaff_r27;
  vec4 *pvVar24;
  ulonglong unaff_r28;
  longlong lVar25;
  ulonglong unaff_r29;
  vec4 *pvVar26;
  ulonglong unaff_r30;
  ulonglong uVar27;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar32;
  ulonglong in_f29;
  double dVar33;
  ulonglong in_f30;
  double dVar34;
  ulonglong in_f31;
  undefined8 uVar35;
  double dVar36;
  double dVar37;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar25 = uVar15 - 400;
  puVar10 = (ulonglong *)lVar25;
  *puVar10 = uVar15;
  puVar10[0x34] = in_LR;
  puVar10[0x2d] = in_f27;
  puVar10[0x2e] = in_f28;
  puVar10[0x2f] = in_f29;
  puVar10[0x30] = in_f30;
  puVar10[0x31] = in_f31;
  puVar10[0x2c] = unaff_r31;
  puVar10[0x2b] = unaff_r30;
  puVar10[0x2a] = unaff_r29;
  puVar10[0x29] = unaff_r28;
  puVar10[0x28] = unaff_r27;
  pvVar9 = param_1->pVar;
  uVar27 = ZEXT48(pvVar9);
  uVar17 = mobyutil::MB_damage(param_1,0x330000,0);
  mobyutil::MB_HandleDamage(param_1,uVar17,uVar27 + 0x20,0,puVar10 + 0x1c,(int)puVar10 + 0xe4,0,4);
  if ((*(int *)(puVar10 + 0x1c) != 1) && (param_1->state != '\0')) {
    fVar3 = *(float *)((int)pvVar9 + 0x20) - *(float *)((int)puVar10 + 0xe4);
    *(float *)((int)pvVar9 + 0x20) = fVar3;
    uVar35 = 0;
    if (fVar3 <= 0.0) {
      fVar1 = (param_1->pos).y;
      *(f32 *)(puVar10 + 0x1a) = (param_1->pos).x;
      fVar2 = (param_1->pos).w;
      *(f32 *)((int)puVar10 + 0xd4) = fVar1;
      *(f32 *)((int)puVar10 + 0xdc) = fVar2;
      fVar3 = (param_1->pos).z;
      puVar10[0x12] = 0xffffffffffffffff;
      puVar10[0x14] = 1;
      puVar10[0x15] = 1;
      puVar10[0x16] = 0xffffffffffffffff;
      puVar10[0x17] = 0;
      *(float *)(puVar10 + 0x1b) = fVar3 + 1.0;
      mobyutil::MB_genericExplosion
                (0,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,param_1,uVar27 + 0x40,uVar15 - 0xc0,&DAT_00283980,1,0x14,8,0x14)
      ;
      pvVar26 = &param_1->pos;
      pvVar24 = &param_1->rotation;
      puVar10[0xe] = ZEXT48(&DAT_00a15d30);
      puVar10[0xf] = ZEXT48(&DAT_00a15d30);
      mobyutil::MB_SpawnDebrisMoby(uVar35,param_1,0x700,pvVar26,pvVar24,0,0);
      puVar10[0xe] = ZEXT48(&DAT_00a15d30);
      puVar10[0xf] = ZEXT48(&DAT_00a15d30);
      mobyutil::MB_SpawnDebrisMoby(uVar35,param_1,0x701,pvVar26,pvVar24,0,0);
      puVar10[0xe] = ZEXT48(&DAT_00a15d30);
      puVar10[0xf] = ZEXT48(&DAT_00a15d30);
      mobyutil::MB_SpawnDebrisMoby(uVar35,param_1,0x702,pvVar26,pvVar24,0,0);
      puVar10[0xe] = ZEXT48(&DAT_00a15d30);
      puVar10[0xf] = ZEXT48(&DAT_00a15d30);
      mobyutil::MB_SpawnDebrisMoby(uVar35,param_1,0x704,pvVar26,pvVar24,0,0);
      puVar10[0xe] = ZEXT48(&DAT_00a15d30);
      puVar10[0xf] = ZEXT48(&DAT_00a15d30);
      mobyutil::MB_SpawnDebrisMoby(uVar35,param_1,0x6fe,pvVar26,pvVar24,0,0);
      puVar10[0xe] = ZEXT48(&DAT_00a15d30);
      puVar10[0xf] = ZEXT48(&DAT_00a15d30);
      mobyutil::MB_SpawnDebrisMoby(uVar35,param_1,0x6fe,pvVar26,pvVar24,0,0);
      puVar10[0xe] = ZEXT48(&DAT_00a15d30);
      puVar10[0xf] = ZEXT48(&DAT_00a15d30);
      mobyutil::MB_SpawnDebrisMoby(uVar35,param_1,0x6ff,pvVar26,pvVar24,0,0);
      puVar10[0xe] = ZEXT48(&DAT_00a15d30);
      puVar10[0xf] = ZEXT48(&DAT_00a15d30);
      mobyutil::MB_SpawnDebrisMoby(uVar35,param_1,0x6ff,pvVar26,pvVar24,0,0);
      puVar10[0xe] = ZEXT48(&DAT_00a15d30);
      puVar10[0xf] = ZEXT48(&DAT_00a15d30);
      mobyutil::MB_SpawnDebrisMoby(uVar35,param_1,0x6ff,pvVar26,pvVar24,0,0);
      mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
      mobyfunc::DeleteMoby(param_1);
      if (*(MobyInstance **)((int)pvVar9 + 0x138) != (MobyInstance *)0x0) {
        mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar9 + 0x138));
      }
      if (*(MobyInstance **)((int)pvVar9 + 0x13c) == (MobyInstance *)0x0) {
        return;
      }
      mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar9 + 0x13c));
      return;
    }
    *(undefined1 *)((int)pvVar9 + 0x67) = 0x78;
    mobyutil::MB_UpdateLightsTransition(param_1,uVar27 + 0x60);
  }
  pMVar21 = (MobyInstance *)0xff;
  param_1->damage = -1;
  dVar36 = 30.0;
  iVar18 = mobyutil::MB_getTarget(0x403e000000000000,param_1,0xff,uVar27 + 0x70);
  pMVar14 = g_heroMobyPtr;
  if (iVar18 != 2) {
    fVar3 = (param_1->pos).y;
    fVar4 = (param_1->pos).x;
    fVar7 = fVar3 - g_heroPosition.y;
    fVar8 = fVar4 - g_heroPosition.x;
    pMVar21 = (MobyInstance *)&DAT_00283980;
    if (10.0 <= SQRT(fVar8 * fVar8 + fVar7 * fVar7)) {
      iVar18 = *(int *)((int)pvVar9 + 0xb0);
      if ((iVar18 != 0) &&
         (fVar3 = fVar3 - *(float *)(iVar18 + 0x14), fVar4 = fVar4 - *(float *)(iVar18 + 0x10),
         dVar36 < (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3))) {
        *(undefined4 *)((int)pvVar9 + 0xb4) = 2;
      }
    }
    else {
      *(MobyInstance **)((int)pvVar9 + 0xb0) = g_heroMobyPtr;
      pMVar21 = g_heroMobyPtr;
      *(f32 *)((int)pvVar9 + 0x70) = (g_heroMobyPtr->pos).x;
      *(f32 *)((int)pvVar9 + 0x74) = (pMVar21->pos).y;
      *(f32 *)((int)pvVar9 + 0x78) = (pMVar21->pos).z;
      *(f32 *)((int)pvVar9 + 0x7c) = (pMVar21->pos).w;
      pMVar21 = pMVar14;
    }
  }
  if (*(int *)((int)pvVar9 + 0xb4) == 2) {
    dVar31 = 12.566370964050293;
    dVar36 = 9.42477798461914;
    mobyutil::OrganicDeltAng
              ((param_1->rotation).z,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
               mobyutil::g_FrameTime * 9.424778,(float *)((int)pvVar9 + 0x110),(int)pMVar21,
               (float *)((int)pvVar9 + 0x114));
    mobyutil::OrganicDeltAng
              (0.0,(float)((double)DAT_0071f418 * dVar31),(float)((double)DAT_0071f418 * dVar31),
               (float)((double)mobyutil::g_FrameTime * dVar36),(float *)((int)pvVar9 + 0x118),
               (int)pMVar21,(float *)((int)pvVar9 + 0x11c));
  }
  else {
    dVar34 = (double)(*(float *)((int)pvVar9 + 0x74) - (param_1->pos).y);
    dVar37 = (double)(*(float *)((int)pvVar9 + 0x70) - (param_1->pos).x);
    dVar33 = (double)((*(float *)((int)pvVar9 + 0x78) - (param_1->pos).z) - 3.0);
    dVar29 = (double)(float)(dVar37 * dVar37 + (double)(float)(dVar34 * dVar34));
    dVar36 = dVar34;
    dVar31 = dVar37;
    if (*(float *)((int)pvVar9 + 0x130) < SQRT((float)(dVar33 * dVar33 + dVar29))) {
      fVar3 = (float)SQRT(dVar29);
      dVar36 = 0.0;
      dVar31 = dVar36;
      if (fVar3 != 0.0) {
        dVar31 = (double)(*(float *)((int)pvVar9 + 0x130) / fVar3);
        dVar36 = (double)(float)(dVar31 * dVar34);
        dVar31 = (double)(float)(dVar31 * dVar37);
      }
    }
    fVar3 = *(float *)((int)pvVar9 + 0x134);
    fVar4 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar4 = fVar3;
    }
    *(float *)((int)puVar10 + 0xf4) = (float)dVar31;
    *(float *)(puVar10 + 0x1f) = (float)dVar36;
    *(float *)((int)puVar10 + 0xfc) = (float)(ABS(dVar31) - ABS(dVar36));
    dVar29 = 0.0;
    fVar7 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
      fVar7 = fVar4;
    }
    fVar3 = fVar7 * fVar7;
    uVar23 = (ulonglong)(*(uint *)((int)puVar10 + 0xf4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar10 + 0xfc) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar10 + 0x1f) >> 0x1d) & 4;
    dVar34 = ABS((double)*(float *)((int)puVar10 + 0xf4));
    if (*(float *)((int)puVar10 + 0xfc) - 0.0 < 0.0) {
      dVar34 = ABS(dVar36);
    }
    fVar11 = fVar3 * fVar3 * fVar7;
    fVar12 = fVar3 * fVar11;
    dVar32 = 0.7853981852531433;
    fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
    fVar4 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
    dVar37 = ABS((double)*(float *)(puVar10 + 0x1f));
    if (*(float *)((int)puVar10 + 0xfc) - 0.0 < 0.0) {
      dVar37 = ABS(dVar31);
    }
    dVar30 = dVar29;
    if (0.0 < dVar34) {
      lVar16 = uVar15 - 0x180;
      lVar19 = uVar15 - 0x70;
      lVar22 = uVar15 - 0x60;
      lVar28 = 2;
      fVar5 = (float)(dVar37 - dVar34) / (float)(dVar37 + dVar34);
      fVar6 = fVar5 * fVar5;
      *(float *)((int)puVar10 + 300) = fVar5;
      *(float *)((int)puVar10 + 0x124) = fVar5;
      *(float *)(puVar10 + 0x25) = fVar5;
      *(float *)(puVar10 + 0x24) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)((int)puVar10 + 0x124) = *(float *)((int)puVar10 + 0x124) * fVar6;
      *(float *)(puVar10 + 0x25) = *(float *)(puVar10 + 0x25) * fVar5;
      *(float *)((int)puVar10 + 300) = *(float *)((int)puVar10 + 300) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar16 + 0x120) = *(float *)((int)lVar16 + 0x110) * fVar5 * fVar5;
        iVar18 = (int)lVar19;
        lVar16 = lVar16 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
        lVar22 = lVar22 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar22 = uVar15 - 0x70;
      pfVar20 = (float *)&DAT_007358e0;
      lVar16 = lVar25;
      lVar19 = lVar22;
      do {
        fVar5 = *pfVar20;
        fVar6 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar16 + 0x120) = *(float *)((int)lVar16 + 0x120) * fVar5;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar6;
        lVar19 = lVar19 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar19 = 2;
      lVar16 = lVar25;
      dVar34 = dVar29;
      do {
        iVar18 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        iVar13 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar18 + 0x120)) +
                          *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc)
                         );
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      dVar30 = (double)((float)(dVar34 + 0.7853981852531433) * fVar8 + fVar4);
    }
    dVar34 = (double)fastfunc::FastWrapRot
                               ((float)dVar30,
                                (fVar3 * fVar12 * 2.601887e-06 +
                                fVar12 * -0.0001980741 +
                                fVar11 * 0.0083330255 + fVar3 * fVar7 * -0.16666657 + fVar7) *
                                0.08726646);
    *(float *)((int)puVar10 + 0xec) = (float)dVar33;
    fVar3 = SQRT((float)(dVar31 * dVar31 + (double)(float)(dVar36 * dVar36)));
    dVar31 = ABS((double)fVar3);
    *(float *)(puVar10 + 0x1d) = fVar3;
    *(float *)(puVar10 + 0x1e) = (float)(dVar31 - ABS(dVar33));
    uVar23 = (ulonglong)(*(uint *)(puVar10 + 0x1d) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0x1e) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar10 + 0xec) >> 0x1d) & 4;
    pfVar20 = (float *)((uint)(uVar23 << 2) | 0x735900);
    dVar36 = ABS((double)*(float *)(puVar10 + 0x1d));
    if ((double)*(float *)(puVar10 + 0x1e) - dVar29 < 0.0) {
      dVar36 = ABS(dVar33);
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
    dVar33 = ABS((double)*(float *)((int)puVar10 + 0xec));
    if ((double)*(float *)(puVar10 + 0x1e) - dVar29 < 0.0) {
      dVar33 = dVar31;
    }
    fVar4 = pfVar20[1];
    if (dVar29 < dVar36) {
      lVar16 = uVar15 - 0x180;
      lVar19 = uVar15 - 0x90;
      lVar22 = uVar15 - 0x80;
      lVar28 = 2;
      fVar7 = (float)(dVar33 - dVar36) / (float)(dVar33 + dVar36);
      fVar8 = fVar7 * fVar7;
      *(float *)((int)puVar10 + 0x10c) = fVar7;
      *(float *)((int)puVar10 + 0x104) = fVar7;
      *(float *)(puVar10 + 0x21) = fVar7;
      *(float *)(puVar10 + 0x20) = fVar7;
      fVar7 = fVar8 * fVar8;
      *(float *)((int)puVar10 + 0x104) = *(float *)((int)puVar10 + 0x104) * fVar8;
      *(float *)(puVar10 + 0x21) = *(float *)(puVar10 + 0x21) * fVar7;
      *(float *)((int)puVar10 + 0x10c) = *(float *)((int)puVar10 + 0x10c) * fVar7 * fVar8;
      do {
        *(float *)((int)lVar16 + 0x100) = *(float *)((int)lVar16 + 0xf0) * fVar7 * fVar7;
        iVar18 = (int)lVar19;
        lVar16 = lVar16 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar7 * fVar7;
        lVar22 = lVar22 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar22 = uVar15 - 0x90;
      pfVar20 = (float *)&DAT_007358e0;
      lVar16 = lVar25;
      lVar19 = lVar22;
      do {
        fVar7 = *pfVar20;
        fVar8 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar16 + 0x100) = *(float *)((int)lVar16 + 0x100) * fVar7;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar8;
        lVar19 = lVar19 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar16 = 2;
      do {
        iVar18 = (int)lVar25;
        iVar13 = (int)lVar22;
        lVar25 = lVar25 + 0x10;
        lVar22 = lVar22 + 0x10;
        dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar18 + 0x100)) +
                          *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc)
                         );
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      dVar29 = (double)((float)(dVar29 + dVar32) * fVar3 + fVar4);
    }
    dVar29 = -dVar29;
    dVar36 = 0.3490658402442932;
    if ((dVar29 <= 0.3490658402442932) && (dVar36 = dVar29, dVar29 < -0.7853981852531433)) {
      dVar36 = -0.7853981852531433;
    }
    dVar29 = 12.566370964050293;
    dVar31 = 9.42477798461914;
    mobyutil::OrganicDeltAng
              ((float)dVar34,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
               mobyutil::g_FrameTime * 9.424778,(float *)((int)pvVar9 + 0x110),(int)pfVar20,
               (float *)((int)pvVar9 + 0x114));
    mobyutil::OrganicDeltAng
              ((float)dVar36,(float)((double)DAT_0071f418 * dVar29),
               (float)((double)DAT_0071f418 * dVar29),
               (float)((double)mobyutil::g_FrameTime * dVar31),(float *)((int)pvVar9 + 0x118),
               (int)pfVar20,(float *)((int)pvVar9 + 0x11c));
  }
  fastfunc::FastQuaternionToEuler((double)*(float *)((int)pvVar9 + 0x118),uVar15 - 0xd0,1);
  lVar25 = uVar27 + 0xd0;
  fastfunc::FastDiffRots((double)*(float *)((int)pvVar9 + 0x110),(double)(param_1->rotation).z);
  fastfunc::FastQuaternionToEuler(lVar25,2);
  fastfunc::FastQuaternionMult(lVar25,uVar15 - 0xd0,lVar25);
  mobyutil::MB_ColorDyingMoby(param_1,uVar27 + 0x60);
  return;
}



//==== 00284460  ns=mobyupdate_unsorted  size=0x6b4
// sig: undefined UpdateMoby_1454(MobyInstance * moby)
// callers(0): 
// callees(14): 000efa28 mobyfunc::CreateMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f0ea8 mobyfunc::AttachManipulator; 000f1114 mobyfunc::GetBonePosition; 000f31a8 mobyfunc::UpdateMobyTransform; 000fddc0 mobyutil::MB_SetAnimation; 00109af0 mobyutil::Delt; 00113e88 mobyutil::MB_MayaFrameTrigger; 001162a0 mobyutil::???_MB_SpawnRingPartFx; 0015d12c sound::PlayMobySound; 00283468 mobyupdate_helpers::M1454_00283468; 002839d8 mobyupdate_helpers::M1454_002839d8; 00366190 FUN_00366190; 00502578 fastfunc::FastWrapRot

/* Moby 1454 */

void mobyupdate_unsorted::UpdateMoby_1454(MobyInstance *moby)

{
  byte bVar1;
  void *pvVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  MobyInstance *pMVar6;
  int iVar7;
  undefined8 in_LR;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [40];
  
  pvVar2 = moby->pVar;
  mobyupdate_helpers::M1454_002839d8();
  bVar1 = moby->state;
  if (bVar1 == 0) {
    mobyfunc::AttachManipulator(moby,0,(int)pvVar2 + 0xc0);
    auVar9 = ZEXT416(0xffffffff);
    auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    *(undefined4 *)((int)pvVar2 + 0x20) = 0x40c00000;
    auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
    *(undefined2 *)((int)pvVar2 + 0x24) = 6;
    *(undefined1 *)((int)pvVar2 + 0x28) = 3;
    auVar9 = loadVectorLeftIndexed(in_LR,0x28441c);
    auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    iVar7 = *(int *)((int)pvVar2 + 0x138);
    auVar9 = vectorMultiplyAddFloatingPoint
                       (auVar11,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar10);
    auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
    auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar3 = storeVectorElementWordIndexed
                      (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x124,
                       ZEXT48(pvVar2));
    *(undefined4 *)((int)pvVar2 + 0x124U & 0xfffffffc) = uVar3;
    *(undefined4 *)((int)pvVar2 + 0x120) = 0;
    if (iVar7 == 0) {
      pMVar6 = mobyfunc::CreateMoby(TRACKDRIVE_LEFT);
      *(MobyInstance **)((int)pvVar2 + 0x138) = pMVar6;
      pMVar6->updateDistance = '@';
      *(undefined2 *)(*(int *)((int)pvVar2 + 0x138) + 0x32) = 0x40;
      *(undefined1 *)(*(int *)((int)pvVar2 + 0x138) + 0x31) = 1;
      *(undefined8 *)(*(int *)((int)pvVar2 + 0x138) + 0x38) = *(undefined8 *)&g_heroMobyPtr->color;
      *(undefined2 *)(*(int *)((int)pvVar2 + 0x138) + 0x34) = 0x4000;
      iVar7 = *(int *)((int)pvVar2 + 0x138);
      *(f32 *)(iVar7 + 0x10) = (moby->pos).x;
      *(f32 *)(iVar7 + 0x14) = (moby->pos).y;
      *(f32 *)(iVar7 + 0x18) = (moby->pos).z;
      *(f32 *)(iVar7 + 0x1c) = (moby->pos).w;
      *(undefined4 *)(*(int *)((int)pvVar2 + 0x138) + 0x94) = 0;
      mobyutil::MB_SetAnimation(*(undefined4 *)((int)pvVar2 + 0x138),0,0,0);
      mobyfunc::UpdateMobyTransform(*(MobyInstance **)((int)pvVar2 + 0x138));
    }
    if (*(int *)((int)pvVar2 + 0x13c) == 0) {
      pMVar6 = mobyfunc::CreateMoby(TRACKDRIVE_LEFT);
      *(MobyInstance **)((int)pvVar2 + 0x13c) = pMVar6;
      pMVar6->updateDistance = '@';
      *(undefined2 *)(*(int *)((int)pvVar2 + 0x13c) + 0x32) = 0x40;
      *(undefined1 *)(*(int *)((int)pvVar2 + 0x13c) + 0x31) = 1;
      *(undefined8 *)(*(int *)((int)pvVar2 + 0x13c) + 0x38) = *(undefined8 *)&g_heroMobyPtr->color;
      *(undefined2 *)(*(int *)((int)pvVar2 + 0x13c) + 0x34) = 0x8000;
      iVar7 = *(int *)((int)pvVar2 + 0x13c);
      *(f32 *)(iVar7 + 0x10) = (moby->pos).x;
      *(f32 *)(iVar7 + 0x14) = (moby->pos).y;
      *(f32 *)(iVar7 + 0x18) = (moby->pos).z;
      *(f32 *)(iVar7 + 0x1c) = (moby->pos).w;
      *(undefined4 *)(*(int *)((int)pvVar2 + 0x13c) + 0x94) = 0;
      mobyutil::MB_SetAnimation(*(undefined4 *)((int)pvVar2 + 0x13c),0,0,0);
      mobyfunc::UpdateMobyTransform(*(MobyInstance **)((int)pvVar2 + 0x13c));
    }
    if (moby->animationId != '\x01') {
      mobyutil::MB_SetAnimation(moby,1,0,(int)(animationSpeed * 10.5));
    }
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    mobyupdate_helpers::M1454_00283468(moby);
    if (*(int *)((int)pvVar2 + 0xb4) != 2) {
      *(undefined4 *)((int)pvVar2 + 0x130) = 0x41200000;
      *(undefined4 *)((int)pvVar2 + 0x134) = 0;
      if (moby->animationId != '\x02') {
        mobyutil::MB_SetAnimation(moby,2,0,(int)(animationSpeed * 20.5));
      }
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    mobyupdate_helpers::M1454_00283468(moby);
    mobyutil::Delt(30.0,mobyutil::g_FrameTime * 6.0,(float *)((int)pvVar2 + 0x130));
    dVar8 = (double)fastfunc::FastWrapRot
                              (*(float *)((int)pvVar2 + 0x134),mobyutil::g_FrameTime * 6.2831855);
    *(float *)((int)pvVar2 + 0x134) = (float)dVar8;
    iVar7 = mobyutil::MB_MayaFrameTrigger(4.0,moby);
    if ((iVar7 != 0) || (iVar7 = mobyutil::MB_MayaFrameTrigger(10.0,moby), iVar7 != 0)) {
      dVar8 = (double)mobyfunc::BlendAnimFrame(moby);
      if (7.0 <= dVar8) {
        mobyfunc::GetBonePosition(moby,2,local_50);
      }
      else {
        mobyfunc::GetBonePosition(moby,1,local_50);
      }
      sound::PlayMobySound(0,0,moby);
      mobyutil::____MB_SpawnRingPartFx(moby);
      fVar4 = (moby->pos).y - g_heroPosition.y;
      fVar5 = (moby->pos).x - g_heroPosition.x;
      if (SQRT(fVar5 * fVar5 + fVar4 * fVar4) <= 10.0) {
        FUN_00366190(moby,local_50,local_60,1);
      }
      else {
        FUN_00366190(moby,local_50,local_60,0);
      }
    }
    if (*(int *)((int)pvVar2 + 0xb4) == 2) {
      if (moby->animationId != '\x01') {
        mobyutil::MB_SetAnimation(moby,1,0,(int)(animationSpeed * 20.5));
      }
      moby->state = '\x01';
    }
  }
  return;
}



//==== 00284b14  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1455_00284b14(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1455_00284b14(void)

{
  DAT_007aac90 = 0x10000;
  return;
}



//==== 00284b28  ns=mobyupdate_helpers  size=0xf4
// sig: undefined M1455_00284b28(void)
// callers(0): 
// callees(1): 000f0ea8 mobyfunc::AttachManipulator
// strings: 0096c074: 'None'

void mobyupdate_helpers::M1455_00284b28(int param_1)

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



//==== 00284c20  ns=mobyupdate_helpers  size=0xd8
// sig: undefined M1455_00284c20(MobyInstance * param_1)
// callers(0): 
// callees(3): 0010434c mobyutil::MB_SetGroupActive; 0011ccc8 music::music_SetTransition; 001d0f24 FUN_001d0f24

void mobyupdate_helpers::M1455_00284c20(MobyInstance *param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvars;
  int iVar3;
  
  iVar1 = 0;
  pvars = param_1->pVar;
  iVar3 = 0;
  pvVar2 = pvars;
  do {
    if (*(int *)((int)pvVar2 + 0x60) != -1) {
      mobyutil::MB_SetGroupActive(*(int *)((int)pvVar2 + 0x60),0,0,0);
    }
    iVar1 = iVar1 + 1;
    pvVar2 = (void *)((int)pvVar2 + 4);
  } while (iVar1 < 0x10);
  do {
    if (*(int *)((int)pvars + 0xa0) != -1) {
      mobyutil::MB_SetGroupActive(*(int *)((int)pvars + 0xa0),1,1,0);
    }
    iVar3 = iVar3 + 1;
    pvars = (void *)((int)pvars + 4);
  } while (iVar3 < 8);
  FUN_001d0f24(0x4059000000000000);
  music::music_SetTransition(0,8);
  return;
}



//==== 00284d00  ns=mobyupdate_helpers  size=0xe4
// sig: undefined M1455_00284d00(void)
// callers(0): 
// callees(3): 0010434c mobyutil::MB_SetGroupActive; 0011ccc8 music::music_SetTransition; 001d0f24 FUN_001d0f24

void mobyupdate_helpers::M1455_00284d00(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  iVar3 = *(int *)(param_1 + 0x78);
  iVar4 = 0;
  iVar2 = iVar3;
  do {
    if (*(int *)(iVar2 + 0x60) != -1) {
      mobyutil::MB_SetGroupActive(*(int *)(iVar2 + 0x60),1,1,1);
    }
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar1 < 0x10);
  do {
    if (*(int *)(iVar3 + 0xa0) != -1) {
      mobyutil::MB_SetGroupActive(*(int *)(iVar3 + 0xa0),0,0,0);
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar4 < 8);
  HeroDeathHeight = 0x42940000;
  FUN_001d0f24(0x4053000000000000);
  music::music_SetTransition(2,6);
  return;
}



//==== 00284e60  ns=mobyupdate_unsorted  size=0x12c8
// sig: undefined UpdateMoby_1455(MobyInstance * moby)
// callers(0): 
// callees(22): 0007b310 help::Help_QueueMessage; 000a0c38 hero::Hero_Warp; 000e8aa4 memcard::memcard_Save; 000f0ea8 mobyfunc::AttachManipulator; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe610 mobyutil::MB_SphericalToVector; 0010434c mobyutil::MB_SetGroupActive; 00106360 mobyutil::MB_SetZBoundsFromGround; 00112e18 mobyutil::MB_UnlockItem; 001167c8 mobyutil::MB_UpdateManipulatorRot; 00119488 mobyutil::MB_SetPointAheadOfMoby; 0011b728 mobyutil::MB_UnlockSkillPoint; 0011ccc8 music::music_SetTransition; 00168f7c update::PlayHelpMovie; 001d0f24 FUN_001d0f24; 004d3720 FUN_004d3720; 004d3870 FUN_004d3870; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt
// strings: 0096c074: 'None'

/* Moby 1455 */

void mobyupdate_unsorted::UpdateMoby_1455(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  ulonglong *puVar9;
  uint uVar10;
  float fVar11;
  uint uVar12;
  undefined2 uVar13;
  ulonglong uVar14;
  char cVar20;
  ulonglong uVar15;
  int iVar18;
  undefined4 uVar19;
  longlong lVar16;
  longlong lVar17;
  short sVar23;
  float *pfVar22;
  longlong lVar21;
  longlong lVar24;
  ulonglong unaff_r25;
  undefined4 *puVar25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  void *pvVar26;
  ulonglong unaff_r28;
  void *pvVar27;
  ulonglong unaff_r29;
  ulonglong uVar28;
  ulonglong unaff_r30;
  int iVar29;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar35;
  double dVar36;
  ulonglong in_f30;
  double dVar37;
  double dVar38;
  ulonglong in_f31;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar17 = uVar14 - 0x170;
  puVar9 = (ulonglong *)lVar17;
  *puVar9 = uVar14;
  puVar9[0x30] = in_LR;
  puVar9[0x29] = in_f27;
  puVar9[0x2a] = in_f28;
  puVar9[0x2b] = in_f29;
  puVar9[0x2c] = in_f30;
  puVar9[0x2d] = in_f31;
  puVar9[0x28] = unaff_r31;
  puVar9[0x26] = unaff_r29;
  pvVar8 = moby->pVar;
  uVar28 = ZEXT48(pvVar8);
  puVar9[0x25] = unaff_r28;
  cVar20 = moby->enabled;
  puVar9[0x27] = unaff_r30;
  puVar9[0x24] = unaff_r27;
  puVar9[0x23] = unaff_r26;
  puVar9[0x22] = unaff_r25;
  if ((cVar20 != '\0') &&
     (fVar2 = (moby->pos).y - GameCamera.posY, fVar3 = (moby->pos).x - GameCamera.posX,
     fVar5 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2) < 28.0)) {
    mobyutil::MB_SetZBoundsFromGround(moby);
    moby->shadow = '\x16';
  }
  if ((g_gameMode == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar18 = 0;
    puVar25 = &DAT_0095cd50;
    sVar23 = boot::g_SpaceSceneMobyCnt._0_2_;
    if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
      do {
        if ((((MobyInstance *)puVar25[0x5e])->oClass == moby->oClass) && (DAT_00a1bf81 == '\0')) {
          mobyfunc::AttachManipulator((MobyInstance *)puVar25[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = 0x40300000;
          DAT_00a1bfa4 = 0x40300000;
          DAT_00a1bfa8 = 0x40300000;
          sVar23 = boot::g_SpaceSceneMobyCnt._0_2_;
        }
        iVar18 = iVar18 + 1;
        puVar25 = puVar25 + 1;
      } while (iVar18 < sVar23);
    }
  }
  uVar1 = moby->state;
  if (uVar1 == '\x04') {
    if (g_gameMode == GAME_MODE_NORMAL) {
      moby->state = '\x01';
      mobyutil::MB_UnlockItem(0x1f,1);
      memcard::memcard_Save(0,-1);
    }
  }
  else if (uVar1 == '\x02') {
    if ((g_gameMode != GAME_MODE_SCENE) &&
       (moby->state = '\x01', *(short *)((int)pvVar8 + 0x24) == 4)) {
      update::PlayHelpMovie(0);
      moby->state = '\x04';
    }
  }
  else if (uVar1 == '\x01') {
    HeroDeathHeight = 0x42c80000;
    if (hero::g_heroStateType != 0xf) {
      HeroDeathHeight = 0x42e60000;
    }
    if ((g_heroState != VISIBOMB_CONTROL) &&
       (iVar18 = FUN_004d3870(moby,uVar28 + 0x20), iVar18 != 0)) {
      (moby->rotation).z = *(f32 *)((int)pvVar8 + 0xc4);
      mobyutil::MB_SetPointAheadOfMoby(0x400c000000000000,moby);
      moby->state = '\x02';
    }
    if ((UnlockableItems.hoverboard == '\0') &&
       (fVar2 = g_heroPosition.y - (moby->pos).y, fVar3 = g_heroPosition.x - (moby->pos).x,
       SQRT(fVar3 * fVar3 + fVar2 * fVar2) < 3.5)) {
      puVar9[0x1f] = (longlong)update::g_GameFrameCount;
      fVar2 = animationSpeed;
      puVar9[0x1f] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar9[0x1f] + 0.5));
      uVar13 = CHAR_ARRAY_00a1000c._1082_2_;
      uVar12 = (uint)(ushort)CHAR_ARRAY_00a1000c._1082_2_;
      iVar18 = *(int *)((int)puVar9 + 0xfc);
      uVar10 = (uint)(ushort)CHAR_ARRAY_00a1000c._1082_2_;
      puVar9[0x1f] = (longlong)(int)((float)(longlong)(fVar2 * 18.5) * 60.0);
      if ((*(int *)((int)puVar9 + 0xfc) < (int)(iVar18 + uVar10 * -600)) || (uVar12 * 600 == 0)) {
        help::Help_QueueMessage(STR_IF_YOU_WANT_TO_0x3E83,0x87);
      }
      else if ((int)(uint)(ushort)uVar13 < iVar18 / 600) {
        sVar23 = (short)(iVar18 >> 0x1f);
        CHAR_ARRAY_00a1000c._1082_2_ =
             ((short)(iVar18 / 600) + sVar23) -
             ((short)((short)(iVar18 / 0x2580000) + sVar23) >> 0xf);
      }
    }
    if (*(short *)((int)pvVar8 + 0x56) == 3) {
      *(undefined2 *)((int)pvVar8 + 0x24) = 3;
      uVar19 = worldUpdateTime;
      iVar18 = 0;
      *(undefined2 *)((int)pvVar8 + 0x56) = 2;
      *(undefined4 *)((int)pvVar8 + 0x58) = uVar19;
      moby->setByGroup = '\0';
      hero::Hero_Warp((float *)&DAT_007aacc0,(float *)&DAT_007aacd0,0,1);
      DAT_0096b9e0 = DAT_007aace0;
      DAT_0096b9e4 = DAT_007aace4;
      DAT_0096b9e8 = DAT_007aace8;
      DAT_0096b9ec = DAT_007aacec;
      DAT_0096b9f0 = DAT_007aacf0;
      DAT_0096b9f4 = DAT_007aacf4;
      DAT_0096b9f8 = DAT_007aacf8;
      DAT_0096bd8c = 1;
      DAT_0096b9fc = DAT_007aacfc;
      pvVar27 = moby->pVar;
      moby->state = '\x03';
      pvVar26 = pvVar27;
      do {
        if (*(int *)((int)pvVar26 + 0x60) != -1) {
          mobyutil::MB_SetGroupActive(*(int *)((int)pvVar26 + 0x60),1,1,1);
        }
        iVar18 = iVar18 + 1;
        pvVar26 = (void *)((int)pvVar26 + 4);
      } while (iVar18 < 0x10);
      iVar18 = 0;
      do {
        if (*(int *)((int)pvVar27 + 0xa0) != -1) {
          mobyutil::MB_SetGroupActive(*(int *)((int)pvVar27 + 0xa0),0,0,0);
        }
        iVar18 = iVar18 + 1;
        pvVar27 = (void *)((int)pvVar27 + 4);
      } while (iVar18 < 8);
      HeroDeathHeight = 0x42940000;
      FUN_001d0f24(0x4053000000000000);
      music::music_SetTransition(2,6);
    }
    if (hero::g_heroStateType == 0x16) {
      iVar29 = 0;
      pvVar27 = moby->pVar;
      iVar18 = 0;
      moby->state = '\x03';
      pvVar26 = pvVar27;
      do {
        if (*(int *)((int)pvVar26 + 0x60) != -1) {
          mobyutil::MB_SetGroupActive(*(int *)((int)pvVar26 + 0x60),1,1,1);
        }
        iVar29 = iVar29 + 1;
        pvVar26 = (void *)((int)pvVar26 + 4);
      } while (iVar29 < 0x10);
      do {
        if (*(int *)((int)pvVar27 + 0xa0) != -1) {
          mobyutil::MB_SetGroupActive(*(int *)((int)pvVar27 + 0xa0),0,0,0);
        }
        iVar18 = iVar18 + 1;
        pvVar27 = (void *)((int)pvVar27 + 4);
      } while (iVar18 < 8);
      HeroDeathHeight = 0x42940000;
      FUN_001d0f24(0x4053000000000000);
      music::music_SetTransition(2,6);
    }
  }
  else if (uVar1 == '\0') {
    moby->updateDistance = -1;
    moby->state = '\x01';
    FUN_004d3720(moby,uVar28 + 0x20);
    *(undefined4 *)((int)pvVar8 + 0x2c) = 0x406ccccd;
    uVar19 = g_KeyLevelFlags._1644_4_;
    *(f32 *)((int)pvVar8 + 0xc4) = (moby->rotation).z;
    if (uVar19 == 0) {
      dVar31 = (double)fastfunc::FastWrapRot((moby->rotation).z,3.1415927);
      (moby->rotation).z = (float)dVar31;
    }
    iVar29 = 0;
    pvVar27 = moby->pVar;
    iVar18 = 0;
    pvVar26 = pvVar27;
    do {
      if (*(int *)((int)pvVar26 + 0x60) != -1) {
        mobyutil::MB_SetGroupActive(*(int *)((int)pvVar26 + 0x60),0,0,0);
      }
      iVar29 = iVar29 + 1;
      pvVar26 = (void *)((int)pvVar26 + 4);
    } while (iVar29 < 0x10);
    do {
      if (*(int *)((int)pvVar27 + 0xa0) != -1) {
        mobyutil::MB_SetGroupActive(*(int *)((int)pvVar27 + 0xa0),1,1,0);
      }
      iVar18 = iVar18 + 1;
      pvVar27 = (void *)((int)pvVar27 + 4);
    } while (iVar18 < 8);
    FUN_001d0f24(0x4059000000000000);
    music::music_SetTransition(0,8);
  }
  else {
    if ((0x1193 < g_RaceScore) && (mobyutil::MB_UnlockSkillPoint(0x1a), DAT_00a0cd14 < 0x1194)) {
      DAT_00a0cd14 = g_RaceScore;
    }
    if (hero::g_heroStateType == 0) {
      pvVar27 = moby->pVar;
      iVar29 = 0;
      iVar18 = 0;
      moby->state = '\x01';
      pvVar26 = pvVar27;
      do {
        if (*(int *)((int)pvVar26 + 0x60) != -1) {
          mobyutil::MB_SetGroupActive(*(int *)((int)pvVar26 + 0x60),0,0,0);
        }
        iVar29 = iVar29 + 1;
        pvVar26 = (void *)((int)pvVar26 + 4);
      } while (iVar29 < 0x10);
      do {
        if (*(int *)((int)pvVar27 + 0xa0) != -1) {
          mobyutil::MB_SetGroupActive(*(int *)((int)pvVar27 + 0xa0),1,1,0);
        }
        iVar18 = iVar18 + 1;
        pvVar27 = (void *)((int)pvVar27 + 4);
      } while (iVar18 < 8);
      FUN_001d0f24(0x4059000000000000);
      music::music_SetTransition(0,8);
    }
    cVar20 = moby->setByGroup;
    if (cVar20 == '\x01') {
      moby->state = '\x01';
      hero::Hero_Warp((float *)&DAT_007aace0,(float *)&DAT_007aacf0,0,1);
      moby->setByGroup = '\0';
      uVar19 = worldUpdateTime;
      if (CHAR_ARRAY_0096c165[0x1f] == '\0') {
        *(undefined2 *)((int)pvVar8 + 0x24) = *(undefined2 *)((int)pvVar8 + 0x56);
        *(undefined2 *)((int)pvVar8 + 0x56) = 4;
        *(undefined4 *)((int)pvVar8 + 0x58) = uVar19;
        *(undefined1 *)((int)pvVar8 + 0x28) = 1;
      }
      pvVar27 = moby->pVar;
      iVar18 = 0;
      pvVar26 = pvVar27;
      do {
        if (*(int *)((int)pvVar26 + 0x60) != -1) {
          mobyutil::MB_SetGroupActive(*(int *)((int)pvVar26 + 0x60),0,0,0);
        }
        iVar18 = iVar18 + 1;
        pvVar26 = (void *)((int)pvVar26 + 4);
      } while (iVar18 < 0x10);
      iVar18 = 0;
      do {
        if (*(int *)((int)pvVar27 + 0xa0) != -1) {
          mobyutil::MB_SetGroupActive(*(int *)((int)pvVar27 + 0xa0),1,1,0);
        }
        iVar18 = iVar18 + 1;
        pvVar27 = (void *)((int)pvVar27 + 4);
      } while (iVar18 < 8);
      FUN_001d0f24(0x4059000000000000);
      music::music_SetTransition(0,8);
      cVar20 = moby->setByGroup;
    }
    if (cVar20 == '\x02') {
      moby->state = '\x01';
      hero::Hero_Warp((float *)&DAT_007aace0,(float *)&DAT_007aacf0,0,1);
      iVar18 = 0;
      pvVar27 = moby->pVar;
      moby->setByGroup = '\0';
      pvVar26 = pvVar27;
      do {
        if (*(int *)((int)pvVar26 + 0x60) != -1) {
          mobyutil::MB_SetGroupActive(*(int *)((int)pvVar26 + 0x60),0,0,0);
        }
        iVar18 = iVar18 + 1;
        pvVar26 = (void *)((int)pvVar26 + 4);
      } while (iVar18 < 0x10);
      iVar18 = 0;
      do {
        if (*(int *)((int)pvVar27 + 0xa0) != -1) {
          mobyutil::MB_SetGroupActive(*(int *)((int)pvVar27 + 0xa0),1,1,0);
        }
        iVar18 = iVar18 + 1;
        pvVar27 = (void *)((int)pvVar27 + 4);
      } while (iVar18 < 8);
      FUN_001d0f24(0x4059000000000000);
      music::music_SetTransition(0,8);
      cVar20 = moby->setByGroup;
    }
    if (cVar20 == '\x03') {
      moby->setByGroup = '\0';
      hero::Hero_Warp((float *)&DAT_007aacc0,(float *)&DAT_007aacd0,0,1);
      DAT_0096b9e0 = DAT_007aace0;
      DAT_0096b9e4 = DAT_007aace4;
      DAT_0096b9e8 = DAT_007aace8;
      DAT_0096b9ec = DAT_007aacec;
      DAT_0096b9f0 = DAT_007aacf0;
      DAT_0096b9f4 = DAT_007aacf4;
      DAT_0096b9f8 = DAT_007aacf8;
      DAT_0096b9fc = DAT_007aacfc;
    }
  }
  dVar31 = 0.019999999552965164;
  if (moby->animationId != '\0') goto LAB_00286080;
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).x;
  fVar5 = fVar2 - g_heroPosition.y;
  fVar6 = fVar3 - g_heroPosition.x;
  if (8.0 <= SQRT(fVar6 * fVar6 + fVar5 * fVar5)) {
LAB_00285b2c:
    if (*(int *)((int)pvVar8 + 200) != 0) {
      *(undefined4 *)((int)pvVar8 + 200) = 0;
      *(float *)((int)pvVar8 + 0xd0) = hero::g_heroCGPos;
      *(float *)((int)pvVar8 + 0xd4) = DAT_00969db4;
      *(float *)((int)pvVar8 + 0xd8) = DAT_00969db8;
      *(undefined4 *)((int)pvVar8 + 0xdc) = DAT_00969dbc;
    }
  }
  else {
    fVar3 = hero::g_heroCGPos - fVar3;
    fVar2 = DAT_00969db4 - fVar2;
    fVar5 = ABS(fVar3);
    fVar4 = ABS(fVar2);
    *(float *)(puVar9 + 0x11) = fVar3;
    *(float *)((int)puVar9 + 0x8c) = fVar2;
    fVar2 = (moby->rotation).z;
    *(float *)(puVar9 + 0x12) = fVar5 - fVar4;
    fVar3 = 0.0;
    uVar15 = (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)(puVar9 + 0x11));
    if (*(float *)(puVar9 + 0x12) - 0.0 < 0.0) {
      fVar6 = fVar4;
    }
    fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
    fVar4 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    fVar11 = ABS(*(float *)((int)puVar9 + 0x8c));
    if (*(float *)(puVar9 + 0x12) - 0.0 < 0.0) {
      fVar11 = fVar5;
    }
    if (0.0 < fVar6) {
      lVar16 = uVar14 - 0x160;
      lVar21 = uVar14 - 0x9c;
      lVar24 = uVar14 - 0x8c;
      lVar30 = 2;
      fVar5 = (fVar11 - fVar6) / (fVar11 + fVar6);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar9 + 0x1c) = fVar5;
      *(float *)(puVar9 + 0x1b) = fVar5;
      *(float *)((int)puVar9 + 0xdc) = fVar5;
      *(float *)((int)puVar9 + 0xd4) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar9 + 0x1b) = *(float *)(puVar9 + 0x1b) * fVar6;
      *(float *)((int)puVar9 + 0xdc) = *(float *)((int)puVar9 + 0xdc) * fVar5;
      *(float *)(puVar9 + 0x1c) = *(float *)(puVar9 + 0x1c) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar16 + 0xd4) = *(float *)((int)lVar16 + 0xc4) * fVar5 * fVar5;
        iVar18 = (int)lVar21;
        lVar16 = lVar16 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
        lVar24 = lVar24 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar30 = 4;
      lVar24 = uVar14 - 0x9c;
      pfVar22 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar21 = lVar24;
      do {
        fVar5 = *pfVar22;
        fVar6 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar16 + 0xd4) = *(float *)((int)lVar16 + 0xd4) * fVar5;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
        lVar21 = lVar21 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar21 = 2;
      lVar16 = lVar17;
      do {
        iVar18 = (int)lVar16;
        iVar29 = (int)lVar24;
        lVar16 = lVar16 + 0x10;
        lVar24 = lVar24 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar18 + 0xd4) + *(float *)(iVar29 + 4) + *(float *)(iVar29 + 8)
                + *(float *)(iVar29 + 0xc);
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar7 + fVar4;
    }
    dVar32 = (double)fastfunc::FastSubRots(fVar2,fVar3);
    if (1.5707963705062866 <= dVar32) goto LAB_00285b2c;
    if (SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) <= 0.01) {
      fastfunc::FastDecTimerS32(uVar28 + 200);
    }
    else {
      auVar39 = ZEXT416(0xffffffff);
      auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
      auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
      auVar39 = loadVectorLeftIndexed(0x3c,0x284de4);
      auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar39 = vectorMultiplyAddFloatingPoint
                          (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                           auVar40);
      auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
      auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar19 = storeVectorElementWordIndexed
                         (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,200,uVar28);
      *(undefined4 *)((int)pvVar8 + 200U & 0xfffffffc) = uVar19;
    }
  }
  iVar18 = fastfunc::FastDecTimerS32(uVar28 + 0xcc);
  if (iVar18 != 0) {
    dVar32 = (double)mobyutil::MB_randRangeFloat(180.0,300.0);
    uVar19 = fastfunc::FastDoubleToInt((double)(float)(dVar32 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar8 + 0xcc) = uVar19;
    dVar37 = (double)(moby->rotation).z;
    dVar32 = (double)mobyutil::MB_randRangeFloat(-90.0,90.0);
    dVar35 = 0.01745329238474369;
    dVar32 = (double)fastfunc::FastWrapRot((float)dVar37,(float)(dVar32 * 0.01745329238474369));
    dVar37 = (double)mobyutil::MB_randRangeFloat(0.0,30.0);
    mobyutil::MB_SphericalToVector
              (6.0,(float)dVar32,(float)(dVar37 * dVar35),(float *)((int)pvVar8 + 0xd0));
    *(float *)((int)pvVar8 + 0xd0) = *(float *)((int)pvVar8 + 0xd0) + (moby->pos).x;
    *(float *)((int)pvVar8 + 0xd4) = *(float *)((int)pvVar8 + 0xd4) + (moby->pos).y;
    *(float *)((int)pvVar8 + 0xd8) = *(float *)((int)pvVar8 + 0xd8) + (moby->pos).z;
  }
  if (*(int *)((int)pvVar8 + 200) == 0) {
    fVar2 = *(float *)((int)pvVar8 + 0xd0);
    fVar3 = *(float *)((int)pvVar8 + 0xd4);
    fVar5 = *(float *)((int)pvVar8 + 0xd8);
  }
  else {
    dVar31 = 0.03999999910593033;
    fVar2 = hero::g_heroCGPos;
    fVar3 = DAT_00969db4;
    fVar5 = DAT_00969db8;
  }
  fVar2 = fVar2 - (moby->pos).x;
  dVar38 = (double)fVar2;
  fVar3 = fVar3 - (moby->pos).y;
  dVar36 = (double)fVar3;
  *(float *)((int)puVar9 + 0x7c) = fVar2;
  *(float *)(puVar9 + 0x10) = fVar3;
  dVar35 = (double)(fVar5 - ((moby->pos).z + 1.0));
  *(float *)((int)puVar9 + 0x84) = (float)(ABS(dVar38) - ABS(dVar36));
  dVar37 = 0.0;
  uVar15 = (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1d) & 4;
  dVar32 = ABS((double)*(float *)((int)puVar9 + 0x7c));
  if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
    dVar32 = ABS(dVar36);
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
  dVar34 = ABS((double)*(float *)(puVar9 + 0x10));
  if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
    dVar34 = ABS(dVar38);
  }
  fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  dVar33 = dVar37;
  if (0.0 < dVar32) {
    lVar16 = uVar14 - 0x160;
    lVar24 = uVar14 - 0xac;
    lVar21 = uVar14 - 0xbc;
    lVar30 = 2;
    fVar5 = (float)(dVar34 - dVar32) / (float)(dVar34 + dVar32);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar9 + 0x18) = fVar5;
    *(float *)(puVar9 + 0x17) = fVar5;
    *(float *)((int)puVar9 + 0xbc) = fVar5;
    *(float *)((int)puVar9 + 0xb4) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar9 + 0x17) = *(float *)(puVar9 + 0x17) * fVar6;
    *(float *)((int)puVar9 + 0xbc) = *(float *)((int)puVar9 + 0xbc) * fVar5;
    *(float *)(puVar9 + 0x18) = *(float *)(puVar9 + 0x18) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar16 + 0xb4) = *(float *)((int)lVar16 + 0xa4) * fVar5 * fVar5;
      iVar18 = (int)lVar21;
      lVar21 = lVar21 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
      lVar24 = lVar24 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar30 = 4;
    lVar24 = uVar14 - 0xbc;
    pfVar22 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar21 = lVar24;
    do {
      fVar5 = *pfVar22;
      fVar6 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar16 + 0xb4) = *(float *)((int)lVar16 + 0xb4) * fVar5;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
      lVar21 = lVar21 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar21 = 2;
    lVar16 = lVar17;
    dVar32 = dVar37;
    do {
      iVar18 = (int)lVar16;
      iVar29 = (int)lVar24;
      lVar16 = lVar16 + 0x10;
      lVar24 = lVar24 + 0x10;
      dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar18 + 0xb4)) + *(float *)(iVar29 + 4)
                        + *(float *)(iVar29 + 8) + *(float *)(iVar29 + 0xc));
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    dVar33 = (double)((float)(dVar32 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar34 = (double)fastfunc::FastDiffRots(dVar33,(double)(moby->rotation).z);
  *(float *)((int)puVar9 + 0x74) = (float)dVar35;
  fVar2 = SQRT((float)(dVar38 * dVar38 + (double)(float)(dVar36 * dVar36)));
  dVar36 = ABS((double)fVar2);
  *(float *)(puVar9 + 0xe) = fVar2;
  *(float *)(puVar9 + 0xf) = (float)(dVar36 - ABS(dVar35));
  uVar15 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
  dVar32 = ABS((double)*(float *)(puVar9 + 0xe));
  if ((double)*(float *)(puVar9 + 0xf) - dVar37 < 0.0) {
    dVar32 = ABS(dVar35);
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
  dVar35 = ABS((double)*(float *)((int)puVar9 + 0x74));
  if ((double)*(float *)(puVar9 + 0xf) - dVar37 < 0.0) {
    dVar35 = dVar36;
  }
  fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  if (dVar37 < dVar32) {
    lVar16 = uVar14 - 0x160;
    lVar21 = uVar14 - 0xdc;
    lVar24 = uVar14 - 0xcc;
    lVar30 = 2;
    fVar5 = (float)(dVar35 - dVar32) / (float)(dVar35 + dVar32);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar9 + 0x14) = fVar5;
    *(float *)(puVar9 + 0x13) = fVar5;
    *(float *)((int)puVar9 + 0x9c) = fVar5;
    *(float *)((int)puVar9 + 0x94) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar9 + 0x13) = *(float *)(puVar9 + 0x13) * fVar6;
    *(float *)((int)puVar9 + 0x9c) = *(float *)((int)puVar9 + 0x9c) * fVar5;
    *(float *)(puVar9 + 0x14) = *(float *)(puVar9 + 0x14) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar16 + 0x94) = *(float *)((int)lVar16 + 0x84) * fVar5 * fVar5;
      iVar18 = (int)lVar21;
      lVar16 = lVar16 + 8;
      lVar21 = lVar21 + 8;
      *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
      lVar24 = lVar24 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar30 = 4;
    lVar24 = uVar14 - 0xdc;
    pfVar22 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar21 = lVar24;
    do {
      fVar5 = *pfVar22;
      fVar6 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar16 + 0x94) = *(float *)((int)lVar16 + 0x94) * fVar5;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
      lVar21 = lVar21 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar16 = 2;
    do {
      iVar18 = (int)lVar17;
      iVar29 = (int)lVar24;
      lVar17 = lVar17 + 0x10;
      lVar24 = lVar24 + 0x10;
      dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar18 + 0x94)) + *(float *)(iVar29 + 4)
                        + *(float *)(iVar29 + 8) + *(float *)(iVar29 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar37 = (double)((float)(dVar37 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar37 = -dVar37;
  dVar32 = 1.5707963705062866;
  if ((dVar34 <= 1.5707963705062866) && (dVar32 = dVar34, dVar34 < -1.5707963705062866)) {
    dVar32 = -1.5707963705062866;
  }
  dVar35 = 0.5235987901687622;
  if ((dVar37 <= 0.5235987901687622) && (dVar35 = dVar37, dVar37 < -0.5235987901687622)) {
    dVar35 = -0.5235987901687622;
  }
  *(float *)((int)pvVar8 + 0x148) = (float)(dVar32 * 0.699999988079071);
  *(float *)((int)pvVar8 + 0x144) = (float)dVar35;
  *(float *)((int)pvVar8 + 0x1c8) = (float)(dVar32 * 0.30000001192092896);
LAB_00286080:
  if (Cheats[0] != '\0') {
    *(undefined4 *)((int)pvVar8 + 0x150) = 0x40300000;
  }
  dVar32 = 0.30000001192092896;
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar31),
             (double)(float)((double)DAT_0071f40c * 0.30000001192092896),moby,uVar28 + 0xe0,0);
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar31),
             (double)(float)((double)DAT_0071f40c * dVar32),moby,uVar28 + 0x160,1);
  return;
}



//==== 00286128  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1469_00286128(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1469_00286128(void)

{
  DAT_007aad4c = 0x10000;
  return;
}



//==== 00286158  ns=mobyupdate_unsorted  size=0x948
// sig: undefined UpdateMoby_1469(MobyInstance * moby)
// callers(0): 
// callees(3): 0007b310 help::Help_QueueMessage; 0007d118 hero::Hero_IsSwimming; 00110b70 mobyutil::MB_IsPntInCuboid
// strings: 00a1000c: 'None'

/* Moby 1469 */

void mobyupdate_unsorted::UpdateMoby_1469(MobyInstance *moby)

{
  u8 uVar1;
  char cVar2;
  void *pvVar3;
  undefined4 uVar4;
  short sVar5;
  MobyInstance *pMVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 in_LR;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  pvVar3 = moby->pVar;
  uVar12 = ZEXT48(pvVar3);
  if (moby->state == 0) {
    auVar13 = ZEXT416(0xffffffff);
    auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
    moby->updateDistance = -1;
    auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
    auVar13 = loadVectorLeftIndexed(in_LR,0x286140);
    auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar13 = vectorMultiplyAddFloatingPoint
                        (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,
                         auVar14);
    auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
    auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar4 = storeVectorElementWordIndexed
                      (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0x34,uVar12);
    *(undefined4 *)((int)pvVar3 + 0x34U & 0xfffffffc) = uVar4;
    moby->state = '\x01';
  }
  else if (moby->state < 2) {
    if (((((((*(int *)((int)pvVar3 + 0x10) != -1) &&
            (pMVar6 = MobyInstance + *(int *)((int)pvVar3 + 0x10), pMVar6 != (MobyInstance *)0x0))
           && (pMVar6->oClass == SPIKEBALL)) &&
          ((uVar1 = pMVar6->state, uVar1 != 0xfd && uVar1 != 0xfe && (uVar1 != '\x03')))) &&
         ((iVar7 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0xc))
          , iVar7 != 0 && ((hero::g_heroStateType < 2 || (hero::g_heroStateType == 9)))))) &&
        (help::g_HelpState == 0)) && (help::g_HelpCurId == -1)) {
      if (UnlockableItems.hologuise == '\0') {
        iVar7 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
        if (((int)((float)(longlong)(animationSpeed * 18.5) * 60.0) <
             (int)(iVar7 + (uint)(ushort)CHAR_ARRAY_00a1000c._986_2_ * -600)) ||
           ((uint)(ushort)CHAR_ARRAY_00a1000c._986_2_ * 600 == 0)) {
          help::Help_QueueMessage(STR_YOULL_NEED_THE_GADGETRON_0x3A98,0x7b);
        }
        else if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c._986_2_ < iVar7 / 600) {
          sVar5 = (short)(iVar7 >> 0x1f);
          CHAR_ARRAY_00a1000c._986_2_ =
               ((short)(iVar7 / 600) + sVar5) - ((short)((short)(iVar7 / 0x2580000) + sVar5) >> 0xf)
          ;
        }
      }
      else if (CHAR_ARRAY_00a1000c._992_2_ == 0) {
        CHAR_ARRAY_00a1000c[0x3e0] = '\0';
        CHAR_ARRAY_00a1000c[0x3e1] = '\x01';
        iVar7 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
        if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c._994_2_ < iVar7 / 600) {
          sVar5 = (short)(iVar7 >> 0x1f);
          CHAR_ARRAY_00a1000c._994_2_ =
               ((short)(iVar7 / 600) + sVar5) - ((short)((short)(iVar7 / 0x2580000) + sVar5) >> 0xf)
          ;
        }
        CHAR_ARRAY_00a1000c._996_4_ = CHAR_ARRAY_00a1000c._996_4_ | 1 << (Level & 0x3f) | 0x80000000
        ;
      }
      else {
        iVar7 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
        if (((int)((float)(longlong)(animationSpeed * 18.5) * 60.0) <
             (int)(iVar7 + (uint)(ushort)CHAR_ARRAY_00a1000c._994_2_ * -600)) ||
           ((uint)(ushort)CHAR_ARRAY_00a1000c._994_2_ * 600 == 0)) {
          help::Help_QueueMessage(STR_TIME_TO_USE_THE_0x3A99,0x7c);
        }
        else if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c._994_2_ < iVar7 / 600) {
          sVar5 = (short)(iVar7 >> 0x1f);
          CHAR_ARRAY_00a1000c._994_2_ =
               ((short)(iVar7 / 600) + sVar5) - ((short)((short)(iVar7 / 0x2580000) + sVar5) >> 0xf)
          ;
        }
      }
    }
    if ((((DAT_00a15f34 != 0) && (help::g_HelpState == 0)) && (help::g_HelpCurId == -1)) &&
       (CHAR_ARRAY_00a1000c._1096_2_ == 0)) {
      help::Help_QueueMessage(STR_IF_A_SENTRY_BOT_PRESSES_0x3A9F,0x89);
      DAT_00a15f34 = 0;
    }
    iVar7 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0x54));
    if (((iVar7 != 0) && (g_heroType == '\x03')) &&
       ((DAT_0096bfc0 == 0 && ((DAT_010c512c == 0 && (CHAR_ARRAY_00a1000c._1088_2_ == 0)))))) {
      help::Help_QueueMessage(STR_YOU_WILL_HAVE_TO_0x3A9E,0x88);
    }
    uVar11 = 0xffffffffffffffff;
    iVar9 = 0;
    iVar7 = -1;
    uVar10 = uVar12;
    do {
      iVar8 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)uVar10);
      if (iVar8 != 0) {
        iVar8 = *(int *)((int)pvVar3 + 0x3c) + 1;
        iVar7 = *(int *)((int)pvVar3 + iVar9 * 4);
        uVar11 = (ulonglong)*(uint *)((int)pvVar3 + iVar9 * 4 + 0x10);
        goto LAB_00286698;
      }
      iVar9 = iVar9 + 1;
      uVar10 = uVar10 + 4;
    } while (iVar9 < 1);
    iVar8 = 0;
    *(undefined4 *)((int)pvVar3 + 0x40) = 0xffffffff;
LAB_00286698:
    *(int *)((int)pvVar3 + 0x3c) = iVar8;
    if ((((((int)uVar11 != -1) &&
          (iVar9 = (int)&(MobyInstance->bSphere).x + (int)(uVar11 << 8), iVar9 != 0)) &&
         (*(short *)(iVar9 + 0xa6) == 0x4e)) &&
        (((cVar2 = *(char *)(iVar9 + 0x20), cVar2 != -3 && cVar2 != -2 && (cVar2 != '\x03')) &&
         (((*(int *)((int)pvVar3 + 0x34) < iVar8 && iVar7 != -1 &&
           (iVar7 != *(int *)((int)pvVar3 + 0x40))) &&
          (((hero::g_heroStateType < 2 || (hero::g_heroStateType == 9)) && (help::g_HelpState == 0))
          )))))) && ((help::g_HelpCurId == -1 && (UnlockableItems.hologuise != '\0')))) {
      auVar13 = ZEXT416(0xffffffff);
      auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
      auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
      auVar13 = loadVectorLeftIndexed(0x10,0x286140);
      auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar13 = vectorMultiplyAddFloatingPoint
                          (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,
                           auVar14);
      auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
      auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar4 = storeVectorElementWordIndexed
                        (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0x34,uVar12);
      *(undefined4 *)((int)pvVar3 + 0x34U & 0xfffffffc) = uVar4;
      if ((CHAR_ARRAY_00a1000c._1004_4_ & 0x80000000) == 0) {
        help::Help_QueueMessage(STR_WHILE_WEARING_THE_HOLOGUISE_0x3A9A,0x7d);
      }
      *(undefined4 *)((int)pvVar3 + 0x3c) = 0;
      *(int *)((int)pvVar3 + 0x40) = iVar7;
    }
    if ((g_heroMobyPtr->updateId == '\f') && (g_heroType == '\x02')) {
      MiscLevelFlags.field111_0x6f = 1;
    }
    iVar7 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0x1c));
    if (((((iVar7 != 0) && (g_heroType == '\x02')) && (MiscLevelFlags.field111_0x6f == 0)) &&
        ((help::g_HelpState == 0 && (help::g_HelpCurId == -1)))) &&
       ((CHAR_ARRAY_00a1000c._1028_4_ & 0x80000000) == 0)) {
      help::Help_QueueMessage(STR_WHEN_YOUR_ENERGY_BAR_0x3A9C,0x80);
    }
    iVar7 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0x20));
    if (((iVar7 != 0) && (help::g_HelpState == 0)) &&
       ((help::g_HelpCurId == -1 &&
        ((UnlockableItems.hydroPack == '\0' &&
         ((CHAR_ARRAY_00a1000c._1044_4_ & 1 << (Level & 0x3f)) == 0)))))) {
      help::Help_QueueMessage(STR_YOU_WILL_NEED_A_0x3A9D,0x82);
    }
    iVar9 = 0;
    iVar7 = -1;
    do {
      iVar8 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)uVar12 + 0x20));
      if (iVar8 != 0) {
        iVar8 = *(int *)((int)pvVar3 + 0x38) + 1;
        iVar7 = *(int *)((int)pvVar3 + iVar9 * 4 + 0x20);
        *(int *)((int)pvVar3 + 0x38) = iVar8;
        iVar7 = iVar7 + ((uint)((LZCOUNT(iVar7 - *(int *)((int)pvVar3 + 0x40)) << 0x3a) >> 0x3f) &
                        -iVar7 - 1U);
        if (g_heroState != HYDRO_PACK_MOVING) goto LAB_002869a0;
        break;
      }
      iVar9 = iVar9 + 1;
      uVar12 = uVar12 + 4;
    } while (iVar9 < 3);
    iVar8 = 0;
    *(undefined4 *)((int)pvVar3 + 0x38) = 0;
    *(undefined4 *)((int)pvVar3 + 0x40) = 0xffffffff;
LAB_002869a0:
    if (((((int)(animationSpeed * 3600.5) < iVar8 && iVar7 != -1) &&
         (iVar9 = hero::Hero_IsSwimming(), iVar9 != 0)) && (help::g_HelpState == 0)) &&
       ((help::g_HelpCurId == -1 && (UnlockableItems.hydroPack != '\0')))) {
      help::Help_QueueMessage(STR_NOW_THAT_YOU_HAVE_0x4E2E,0x78);
      *(int *)((int)pvVar3 + 0x40) = iVar7;
      *(undefined4 *)((int)pvVar3 + 0x38) = 0;
    }
    if ((MiscLevelFlags.field110_0x6e == 0) &&
       (iVar7 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0x2c)),
       iVar7 != 0)) {
      MiscLevelFlags.field110_0x6e = 1;
    }
  }
  return;
}



//==== 00286aa0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1470_00286aa0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1470_00286aa0(void)

{
  DAT_007aadbc = 0x10000;
  return;
}



//==== 00286ae0  ns=mobyupdate_unsorted  size=0xc84
// sig: undefined UpdateMoby_1470(MobyInstance * moby)
// callers(0): 
// callees(12): 0002f31c camera0::Cam0_ForceLookAtPos; 00032dd0 camera0::Cam0_DisableUserCam; 0007b310 help::Help_QueueMessage; 0007b458 help::Help_Kill; 0007d118 hero::Hero_IsSwimming; 000a2560 hero::Hero_TransitionToDefault; 000b72b0 hero::TransitionMovement; 00110b70 mobyutil::MB_IsPntInCuboid; 0011b728 mobyutil::MB_UnlockSkillPoint; 004fff60 fastfunc::FastDecTimerS32; 005026a0 fastfunc::FastSubRots; 005cd098 libc::printf
// strings: 0096c08c: 'None' | 006558ac: 'magnacut cuboid error: detect:%d hero:%d init:%d end:%d \n'

/* Moby 1470 */

undefined4 * mobyupdate_unsorted::UpdateMoby_1470(MobyInstance *moby)

{
  byte bVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  float fVar10;
  MobyInstance *pMVar11;
  MobyInstance *pMVar12;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  int iVar18;
  longlong lVar13;
  longlong lVar14;
  float *pfVar20;
  longlong lVar19;
  longlong lVar21;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong uVar22;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar23;
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
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  
  uVar22 = ZEXT48(&stack0x00000000);
  lVar14 = uVar22 - 0x130;
  puVar9 = (ulonglong *)lVar14;
  *puVar9 = uVar22;
  puVar9[0x28] = in_LR;
  puVar9[0x24] = in_f30;
  puVar9[0x25] = in_f31;
  puVar9[0x22] = unaff_r30;
  puVar9[0x23] = unaff_r31;
  pvVar7 = moby->pVar;
  uVar24 = ZEXT48(pvVar7);
  iVar15 = *(int *)((int)pvVar7 + 0x6c);
  puVar9[0x21] = unaff_r29;
  puVar9[0x20] = unaff_r28;
  puVar9[0x1f] = unaff_r27;
  puVar9[0x1e] = unaff_r26;
  puVar9[0x1d] = unaff_r25;
  puVar9[0x1c] = unaff_r24;
  puVar9[0x1b] = unaff_r23;
  if (iVar15 < 1) {
    if (((-1 < iVar15) &&
        (iVar15 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar7 + 0x60))
        , iVar15 != 0)) && (hero::g_heroStateType == 0x11)) {
      *(undefined4 *)((int)pvVar7 + 0x6c) = 1;
    }
  }
  else if (iVar15 < 2) {
    if (g_heroState == UNDERWATER_DAMAGE) {
      *(undefined4 *)((int)pvVar7 + 0x6c) = 0;
    }
    else if (g_heroState == TURRET_PLANE_UI) {
      *(undefined4 *)((int)pvVar7 + 0x6c) = 0;
    }
    else {
      iVar15 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar7 + 100));
      if ((iVar15 != 0) ||
         (iVar15 = mobyutil::MB_IsPntInCuboid
                             (&g_heroPosition,(longlong)*(int *)((int)pvVar7 + 0x68)), iVar15 != 0))
      {
        mobyutil::MB_UnlockSkillPoint(0x1c);
      }
    }
  }
  if (g_SkillPoints[0x1b] == '\0') {
    iVar15 = 0;
    do {
      iVar16 = *(int *)((int)pvVar7 + 0x70);
      if (((MobyInstance[iVar16].oClass == SENTRY_BOT) ||
          (MobyInstance[iVar16].oClass == ROBOT_DOG_0566)) &&
         ((MobyInstance[iVar16].state < 0x80 &&
          (iVar16 = mobyutil::MB_IsPntInCuboid
                              ((Vec4 *)&MobyInstance[iVar16].pos,
                               (longlong)*(int *)((int)pvVar7 + 0x78)), iVar16 == 0)))) {
        *(int *)((int)pvVar7 + 0x74) = *(int *)((int)pvVar7 + 0x74) + 1;
      }
      pMVar12 = MobyInstancePermEnd;
      pMVar11 = MobyInstance;
      iVar16 = *(int *)((int)pvVar7 + 0x70) + 1;
      *(int *)((int)pvVar7 + 0x70) = iVar16;
      if (pMVar12 <= pMVar11 + iVar16) {
        if (*(int *)((int)pvVar7 + 0x74) == 0) {
          mobyutil::MB_UnlockSkillPoint(0x1b);
        }
        *(undefined4 *)((int)pvVar7 + 0x70) = 0;
        *(undefined4 *)((int)pvVar7 + 0x74) = 0;
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < 0x1e);
  }
  bVar1 = moby->state;
  puVar17 = (undefined4 *)(uint)bVar1;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      auVar31 = ZEXT416(0xffffffff);
      auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      moby->updateDistance = -1;
      auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
      auVar31 = loadVectorLeftIndexed(4,0x286ab8);
      auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      iVar15 = *(int *)((int)pvVar7 + 0x44);
      auVar31 = vectorMultiplyAddFloatingPoint
                          (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                           auVar32);
      auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
      auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x38,uVar24);
      *(undefined4 *)((int)pvVar7 + 0x38U & 0xfffffffc) = uVar8;
      *(undefined1 *)((int)pvVar7 + 0x4c) = 0;
      if (((iVar15 == -1) || (*(int *)((int)pvVar7 + 0x40) == -1)) ||
         ((*(int *)((int)pvVar7 + 0x3c) == -1 || (*(int *)((int)pvVar7 + 0x48) == -1)))) {
        libc::printf("magnacut cuboid error: detect:%d hero:%d init:%d end:%d \n",
                     *(undefined4 *)((int)pvVar7 + 0x3c),*(undefined4 *)((int)pvVar7 + 0x48),
                     *(undefined4 *)((int)pvVar7 + 0x40),iVar15);
        *(undefined1 *)((int)pvVar7 + 0x4c) = 1;
      }
      puVar17 = (undefined4 *)0x1;
      moby->state = '\x01';
    }
    else {
      uVar23 = 0xffffffffffffffff;
      iVar16 = 0;
      iVar15 = -1;
      uVar22 = uVar24;
      do {
        iVar18 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)uVar22);
        if (iVar18 != 0) {
          iVar18 = *(int *)((int)pvVar7 + iVar16 * 4);
          if (*(int *)((int)pvVar7 + 0x30) != iVar18) {
            uVar23 = (ulonglong)*(uint *)((int)pvVar7 + iVar16 * 4 + 0x10);
            iVar15 = iVar18;
          }
          iVar16 = *(int *)((int)pvVar7 + 0xc) + 1;
          goto LAB_00286e58;
        }
        iVar16 = iVar16 + 1;
        uVar22 = uVar22 + 4;
      } while (iVar16 < 1);
      iVar16 = 0;
      *(undefined4 *)((int)pvVar7 + 0x30) = 0xffffffff;
LAB_00286e58:
      *(int *)((int)pvVar7 + 0xc) = iVar16;
      if ((((int)uVar23 == -1) ||
          ((((iVar18 = (int)&(MobyInstance->bSphere).x + (int)(uVar23 << 8), iVar18 != 0 &&
             (*(short *)(iVar18 + 0xa6) == 0x4e)) &&
            (cVar2 = *(char *)(iVar18 + 0x20), cVar2 != -3 && cVar2 != -2)) && (cVar2 != '\x03'))))
         && ((*(int *)((int)pvVar7 + 0x38) < iVar16 && iVar15 != -1 &&
             (((((hero::g_heroStateType == 0 || (hero::g_heroStateType == 1)) ||
                (hero::g_heroStateType == 9)) &&
               ((help::g_HelpState == 0 && (help::g_HelpCurId == -1)))) &&
              (UnlockableItems.hologuise != '\0')))))) {
        auVar31 = ZEXT416(0xffffffff);
        auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
        auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
        auVar31 = loadVectorLeftIndexed(8,0x286ab8);
        auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar31 = vectorMultiplyAddFloatingPoint
                            (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                             auVar32);
        auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
        auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar8 = storeVectorElementWordIndexed
                          (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x38,uVar24
                          );
        *(undefined4 *)((int)pvVar7 + 0x38U & 0xfffffffc) = uVar8;
        if ((CHAR_ARRAY_00a1000c._1004_4_ & 0x80000000) == 0) {
          help::Help_QueueMessage(STR_WHILE_WEARING_THE_HOLOGUISE_0x3A9A,0x7d);
        }
        *(undefined4 *)((int)pvVar7 + 0xc) = 0;
        *(int *)((int)pvVar7 + 0x30) = iVar15;
      }
      iVar15 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar7 + 0x20));
      if ((((iVar15 != 0) && (help::g_HelpState == 0)) && (help::g_HelpCurId == -1)) &&
         ((UnlockableItems.hydroPack == '\0' &&
          ((CHAR_ARRAY_00a1000c._1044_4_ & 1 << (Level & 0x3f)) == 0)))) {
        help::Help_QueueMessage(STR_YOU_WILL_NEED_A_0x3A9D,0x82);
      }
      iVar16 = 0;
      iVar15 = -1;
      uVar22 = uVar24;
      do {
        iVar18 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)uVar22 + 0x20));
        if (iVar18 != 0) {
          iVar18 = *(int *)((int)pvVar7 + 0x2c) + 1;
          iVar15 = *(int *)((int)pvVar7 + iVar16 * 4 + 0x20);
          *(int *)((int)pvVar7 + 0x2c) = iVar18;
          iVar15 = iVar15 + ((uint)((LZCOUNT(iVar15 - *(int *)((int)pvVar7 + 0x30)) << 0x3a) >> 0x3f
                                   ) & -iVar15 - 1U);
          if (g_heroState != HYDRO_PACK_MOVING) goto LAB_002870a0;
          break;
        }
        iVar16 = iVar16 + 1;
        uVar22 = uVar22 + 4;
      } while (iVar16 < 3);
      iVar18 = 0;
      *(undefined4 *)((int)pvVar7 + 0x2c) = 0;
      *(undefined4 *)((int)pvVar7 + 0x30) = 0xffffffff;
LAB_002870a0:
      puVar9[0x19] = (longlong)(int)(animationSpeed * 3600.5);
      if (((*(int *)((int)puVar9 + 0xcc) < iVar18 && iVar15 != -1) &&
          (iVar16 = hero::Hero_IsSwimming(), iVar16 != 0)) &&
         ((help::g_HelpState == 0 &&
          ((help::g_HelpCurId == -1 && (UnlockableItems.hydroPack != '\0')))))) {
        help::Help_QueueMessage(STR_NOW_THAT_YOU_HAVE_0x4E2E,0x78);
        *(int *)((int)pvVar7 + 0x30) = iVar15;
        *(undefined4 *)((int)pvVar7 + 0x2c) = 0;
      }
      if ((*(int *)((int)pvVar7 + 0x58) != 0xff) &&
         (g_LevelFlags[Level][*(int *)((int)pvVar7 + 0x58)] == -1)) {
        *(undefined1 *)((int)pvVar7 + 0x4c) = 1;
      }
      puVar17 = (undefined4 *)(uint)*(byte *)((int)pvVar7 + 0x4c);
      if (*(byte *)((int)pvVar7 + 0x4c) == 0) {
        puVar17 = (undefined4 *)
                  mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar7 + 0x3c))
        ;
        if (puVar17 != (undefined4 *)0x0) {
          help::Help_Kill();
          if ((CHAR_ARRAY_00a1000c._1116_4_ & 0x80000000) == 0) {
            help::Help_QueueMessage(STR_THE_GUNFIRE_FROM_THOSE_0x4268,0x8b);
          }
          if ((help::g_HelpState != 0) ||
             (puVar17 = (undefined4 *)help::g_HelpCurId, help::g_HelpCurId != -1)) {
            auVar31 = ZEXT416(0xffffffff);
            auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
            *(undefined4 *)((int)pvVar7 + 0x50) = 0;
            auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
            moby->state = '\x02';
            auVar31 = loadVectorLeftIndexed(0x10,0x286ab8);
            auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar31 = vectorMultiplyAddFloatingPoint
                                (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 |
                                         auVar31 << 0x60,auVar32);
            auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
            auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar8 = storeVectorElementWordIndexed
                              (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x5c,
                               uVar24);
            *(undefined4 *)((int)pvVar7 + 0x5cU & 0xfffffffc) = uVar8;
            puVar17 = (undefined4 *)hero::TransitionMovement(0x72,0);
          }
        }
      }
    }
  }
  else {
    dVar30 = 0.7853981852531433;
    if (bVar1 < 3) {
      camera0::Cam0_DisableUserCam();
      dVar29 = 0.0;
      camera0::Cam0_ForceLookAtPos(0x3f9aceea00000000,0,&Cuboids[*(int *)((int)pvVar7 + 0x44)].pos);
      fVar10 = Cuboids[*(int *)((int)pvVar7 + 0x44)].pos.x - GameCamera.posX;
      fVar6 = Cuboids[*(int *)((int)pvVar7 + 0x44)].pos.y - GameCamera.posY;
      dVar26 = ABS((double)fVar10);
      dVar27 = ABS((double)fVar6);
      *(float *)((int)puVar9 + 0x7c) = fVar10;
      *(float *)(puVar9 + 0x10) = fVar6;
      fVar10 = GameCamera.rot.radius;
      *(float *)((int)puVar9 + 0x84) = (float)(dVar26 - dVar27);
      uVar23 = (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1d) & 4;
      dVar28 = ABS((double)*(float *)((int)puVar9 + 0x7c));
      if ((double)*(float *)((int)puVar9 + 0x84) - dVar29 < 0.0) {
        dVar28 = dVar27;
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
      dVar27 = ABS((double)*(float *)(puVar9 + 0x10));
      if ((double)*(float *)((int)puVar9 + 0x84) - dVar29 < 0.0) {
        dVar27 = dVar26;
      }
      fVar3 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
      if (dVar29 < dVar28) {
        lVar13 = uVar22 - 0x120;
        lVar19 = uVar22 - 0x88;
        lVar21 = uVar22 - 0x78;
        lVar25 = 2;
        fVar4 = (float)(dVar27 - dVar28) / (float)(dVar27 + dVar28);
        fVar5 = fVar4 * fVar4;
        *(float *)((int)puVar9 + 0xb4) = fVar4;
        *(float *)((int)puVar9 + 0xac) = fVar4;
        *(float *)(puVar9 + 0x16) = fVar4;
        *(float *)(puVar9 + 0x15) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)((int)puVar9 + 0xac) = *(float *)((int)puVar9 + 0xac) * fVar5;
        *(float *)(puVar9 + 0x16) = *(float *)(puVar9 + 0x16) * fVar4;
        *(float *)((int)puVar9 + 0xb4) = *(float *)((int)puVar9 + 0xb4) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar13 + 0xa8) = *(float *)((int)lVar13 + 0x98) * fVar4 * fVar4;
          iVar15 = (int)lVar19;
          lVar13 = lVar13 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar15 + 4) * fVar4 * fVar4;
          lVar21 = lVar21 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar21 = uVar22 - 0x88;
        pfVar20 = (float *)&DAT_007358e0;
        lVar13 = lVar14;
        lVar19 = lVar21;
        do {
          fVar4 = *pfVar20;
          fVar5 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar13 + 0xa8) = *(float *)((int)lVar13 + 0xa8) * fVar4;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
          lVar19 = lVar19 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar13 = 2;
        do {
          iVar15 = (int)lVar14;
          iVar16 = (int)lVar21;
          lVar14 = lVar14 + 0x10;
          lVar21 = lVar21 + 0x10;
          dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar15 + 0xa8)) +
                            *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                           *(float *)(iVar16 + 0xc));
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        dVar29 = (double)((float)(dVar29 + dVar30) * fVar6 + fVar3);
      }
      dVar30 = (double)fastfunc::FastSubRots(fVar10,(float)dVar29);
      puVar17 = &DAT_00286ab8;
      if (dVar30 < 0.03490658476948738) {
        auVar31 = ZEXT416(0xffffffff);
        auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
        moby->state = '\x03';
        auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
        auVar31 = loadVectorLeftIndexed(0x20,0x286ab8);
        puVar17 = (undefined4 *)0x5c;
        auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar31 = vectorMultiplyAddFloatingPoint
                            (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                             auVar32);
        auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
        auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar8 = storeVectorElementWordIndexed
                          (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x5c,uVar24
                          );
        *(undefined4 *)((int)pvVar7 + 0x5cU & 0xfffffffc) = uVar8;
      }
    }
    else if (bVar1 < 4) {
      camera0::Cam0_DisableUserCam();
      puVar17 = (undefined4 *)fastfunc::FastDecTimerS32(uVar24 + 0x5c);
      if (puVar17 != (undefined4 *)0x0) {
        dVar29 = 0.0;
        camera0::Cam0_ForceLookAtPos
                  (0x3f9aceea00000000,0,&Cuboids[*(int *)((int)pvVar7 + 0x40)].pos);
        fVar10 = Cuboids[*(int *)((int)pvVar7 + 0x40)].pos.x - GameCamera.posX;
        fVar6 = Cuboids[*(int *)((int)pvVar7 + 0x40)].pos.y - GameCamera.posY;
        dVar26 = ABS((double)fVar10);
        dVar27 = ABS((double)fVar6);
        *(float *)(puVar9 + 0xe) = fVar10;
        *(float *)((int)puVar9 + 0x74) = fVar6;
        fVar10 = GameCamera.rot.radius;
        *(float *)(puVar9 + 0xf) = (float)(dVar26 - dVar27);
        uVar24 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
        dVar28 = ABS((double)*(float *)(puVar9 + 0xe));
        if ((double)*(float *)(puVar9 + 0xf) - dVar29 < 0.0) {
          dVar28 = dVar27;
        }
        fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
        dVar27 = ABS((double)*(float *)((int)puVar9 + 0x74));
        if ((double)*(float *)(puVar9 + 0xf) - dVar29 < 0.0) {
          dVar27 = dVar26;
        }
        fVar3 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
        if (dVar29 < dVar28) {
          lVar13 = uVar22 - 0x120;
          lVar19 = uVar22 - 0xa8;
          lVar21 = uVar22 - 0x98;
          lVar25 = 2;
          fVar4 = (float)(dVar27 - dVar28) / (float)(dVar27 + dVar28);
          fVar5 = fVar4 * fVar4;
          *(float *)((int)puVar9 + 0x94) = fVar4;
          *(float *)((int)puVar9 + 0x8c) = fVar4;
          *(float *)(puVar9 + 0x12) = fVar4;
          *(float *)(puVar9 + 0x11) = fVar4;
          fVar4 = fVar5 * fVar5;
          *(float *)((int)puVar9 + 0x8c) = *(float *)((int)puVar9 + 0x8c) * fVar5;
          *(float *)(puVar9 + 0x12) = *(float *)(puVar9 + 0x12) * fVar4;
          *(float *)((int)puVar9 + 0x94) = *(float *)((int)puVar9 + 0x94) * fVar4 * fVar5;
          do {
            *(float *)((int)lVar13 + 0x88) = *(float *)((int)lVar13 + 0x78) * fVar4 * fVar4;
            iVar15 = (int)lVar19;
            lVar13 = lVar13 + 8;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar21 + 4) = *(float *)(iVar15 + 4) * fVar4 * fVar4;
            lVar21 = lVar21 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar25 = 4;
          lVar21 = uVar22 - 0xa8;
          pfVar20 = (float *)&DAT_007358e0;
          lVar13 = lVar14;
          lVar19 = lVar21;
          do {
            fVar4 = *pfVar20;
            fVar5 = pfVar20[1];
            pfVar20 = pfVar20 + 2;
            *(float *)((int)lVar13 + 0x88) = *(float *)((int)lVar13 + 0x88) * fVar4;
            lVar13 = lVar13 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
            lVar19 = lVar19 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar13 = 2;
          do {
            iVar15 = (int)lVar14;
            iVar16 = (int)lVar21;
            lVar14 = lVar14 + 0x10;
            lVar21 = lVar21 + 0x10;
            dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar15 + 0x88)) +
                              *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                             *(float *)(iVar16 + 0xc));
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          dVar29 = (double)((float)(dVar29 + dVar30) * fVar6 + fVar3);
        }
        dVar30 = (double)fastfunc::FastSubRots(fVar10,(float)dVar29);
        puVar17 = &DAT_00286ab8;
        if (dVar30 < 0.03490658476948738) {
          hero::Hero_TransitionToDefault();
          puVar17 = (undefined4 *)0x1;
          *(undefined1 *)((int)pvVar7 + 0x4c) = 1;
          moby->state = '\x01';
        }
      }
    }
  }
  return puVar17;
}



//==== 00287764  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1471_00287764(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1471_00287764(void)

{
  DAT_007aae2c = 0x10000;
  return;
}



//==== 002877e8  ns=mobyupdate_helpers  size=0xcfc
// sig: undefined M1471_002877e8(void)
// callers(1): 00288584 mobyupdate_unsorted::UpdateMoby_1471
// callees(10): 000da4ac lights::CreatePointLight2; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe4f0 mobyutil::MB_randRangeSigned; 000fe788 mobyutil::MB_randVector; 0010de78 mobyutil::MB_WrapRot; 00133580 partupd::SpawnPart_69; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble
// strings: 00287784: '=Vwp?' (raw)

void mobyupdate_helpers::M1471_002877e8(undefined8 param_1,ulonglong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  longlong lVar25;
  ulonglong uVar26;
  int iVar27;
  float *pfVar28;
  longlong lVar29;
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
  undefined8 uVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar65 [16];
  float fVar66;
  Vec4 local_1b0;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  undefined4 local_184;
  Vec4 local_180;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  longlong local_160;
  undefined1 auVar57 [16];
  undefined1 auVar61 [16];
  undefined1 auVar64 [16];
  
  uVar13 = ZEXT48(&stack0x00000000);
  puVar12 = (undefined4 *)(uVar13 - 0x130);
  puVar12[3] = in_vr31_32_3;
  puVar12[2] = in_vr31_32_2;
  puVar12[1] = in_vr31_32_1;
  *puVar12 = in_vr31_32_0;
  iVar10 = (int)(param_2 << 4);
  iVar11 = (int)(param_2 * 0x40);
  fVar66 = *(float *)((int)&DAT_00fad224 + iVar10) - *(float *)(iVar11 + 0xfad194);
  fVar2 = *(float *)((int)&DAT_00fad220 + iVar10) - *(float *)(iVar11 + 0xfad190);
  fVar3 = *(float *)((int)&DAT_00fad228 + iVar10) - *(float *)(iVar11 + 0xfad198);
  auVar55 = ZEXT416(0xffffffff);
  auVar55 = auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60;
  iVar8 = (int)(param_2 << 2);
  auVar65 = vectorShiftLeftIntegerWord(auVar55,auVar55);
  uVar16 = param_2 & 0x7fffffff;
  iVar14 = (int)uVar16 * 2 + 1;
  local_170 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar66 * fVar66);
  auVar55 = loadVectorLeftIndexed(uVar13 - 0x130,0x287778);
  auVar55 = auVar55 >> 0x60 & (undefined1  [16])0xffffffff;
  dVar53 = 0.05000000074505806;
  auVar59._0_4_ = local_170;
  auVar59._4_4_ = local_170;
  auVar59._8_4_ = local_170;
  auVar59._12_4_ = local_170;
  auVar55 = vectorMultiplyAddFloatingPoint
                      (auVar59,auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60,auVar65
                      );
  if (*(int *)((int)&DAT_00fad0e0 + iVar8) == 2) {
    auVar59 = ZEXT416(0);
    auVar65 = auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60;
    *(undefined4 *)((int)&DAT_00fad0e0 + iVar8) = 3;
    lVar20 = (longlong)((int)(uVar16 << 9) + (int)(uVar16 << 7));
    lVar25 = (longlong)(iVar14 * 0x140);
    lVar15 = ZEXT48(&DAT_00fad280) + lVar20;
    lVar21 = ZEXT48(&DAT_00fad280) + lVar25;
    lVar18 = ZEXT48(&DAT_00fad288) + lVar20;
    lVar22 = ZEXT48(&DAT_00fad288) + lVar25;
    lVar19 = ZEXT48(&DAT_00fad284) + lVar20;
    lVar23 = ZEXT48(&DAT_00fad284) + lVar25;
    lVar20 = ZEXT48(&DAT_00fad28c) + lVar20;
    lVar29 = 0x14;
    lVar25 = ZEXT48(&DAT_00fad28c) + lVar25;
    do {
      auVar58 = vectorConvertFromSignedFixedPointWord(auVar65,0);
      auVar59 = ZEXT416(0xffffffff);
      auVar59 = auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60;
      auVar56._0_4_ = auVar65._0_4_ + 1;
      auVar56._8_8_ = auVar65._8_8_;
      auVar56._4_4_ = auVar65._4_4_ + 1;
      auVar57._0_8_ = auVar56._0_8_;
      auVar57._12_4_ = auVar65._12_4_;
      auVar57._8_4_ = auVar65._8_4_ + 1;
      auVar65._0_12_ = auVar57._0_12_;
      auVar65._12_4_ = auVar57._12_4_ + 1;
      auVar59 = vectorShiftLeftIntegerWord(auVar59,auVar59);
      auVar59 = vectorMultiplyAddFloatingPoint(auVar58,auVar55,auVar59);
      uVar7 = storeVectorElementWordIndexed(auVar59,0,lVar15);
      *(undefined4 *)lVar15 = uVar7;
      *(undefined4 *)lVar18 = 0;
      lVar15 = lVar15 + 0x10;
      *(undefined4 *)lVar19 = 0;
      lVar18 = lVar18 + 0x10;
      *(undefined4 *)lVar20 = 0x3f800000;
      lVar19 = lVar19 + 0x10;
      uVar7 = storeVectorElementWordIndexed(auVar59,0,lVar21);
      *(undefined4 *)lVar21 = uVar7;
      lVar20 = lVar20 + 0x10;
      *(undefined4 *)lVar22 = 0;
      lVar21 = lVar21 + 0x10;
      *(undefined4 *)lVar23 = 0;
      lVar22 = lVar22 + 0x10;
      *(undefined4 *)lVar25 = 0x3f800000;
      lVar23 = lVar23 + 0x10;
      lVar25 = lVar25 + 0x10;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
  }
  local_16c = local_170;
  local_168 = local_170;
  local_164 = local_170;
  dVar30 = (double)fastfunc::FastWrapRot(*(float *)(&DAT_00fad0ec + iVar8),0.17453292);
  *(float *)(&DAT_00fad0ec + iVar8) = (float)dVar30;
  dVar30 = (double)fastfunc::FastDiffRots
                             ((double)*(float *)(&DAT_00fad0f8 + iVar8),0x3fe9b0f580000000);
  *(float *)(&DAT_00fad0f8 + iVar8) = (float)dVar30;
  dVar30 = (double)fastfunc::FastWrapRot(*(float *)(&DAT_00fad104 + iVar8),0.05236);
  *(float *)(&DAT_00fad104 + iVar8) = (float)dVar30;
  dVar30 = (double)fastfunc::FastIntToDouble(0x14);
  dVar54 = 0.5;
  dVar52 = 0.30000001192092896;
  dVar43 = 0.10000000149011612;
  dVar51 = 3.141592502593994;
  dVar50 = -3.141592502593994;
  uVar26 = 0;
  dVar49 = -0.16666656732559204;
  dVar48 = 0.008333025500178337;
  iVar24 = (int)uVar16 * 0x280;
  dVar47 = -0.0001980741071747616;
  dVar46 = 2.601886990305502e-06;
  dVar45 = 0.0;
  dVar44 = 1.0;
  auVar59 = ZEXT416(0);
  auVar58 = auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60;
  dVar30 = (double)((360.0 / (float)(dVar30 * 0.5)) * 0.017453292);
  do {
    dVar31 = (double)fastfunc::FastIntToDouble(uVar26);
    dVar32 = (double)fastfunc::FastIntToDouble(0x14);
    local_160 = (longlong)(int)uVar26;
    auVar65 = vectorConvertFromSignedFixedPointWord(auVar58,0);
    dVar41 = (double)(float)((double)(float)(dVar31 / dVar32) * dVar52 + dVar43);
    fVar66 = mobyutil::MB_WrapRot
                       ((float)((double)local_160 * dVar30 +
                               (double)*(float *)(&DAT_00fad0ec + iVar8)));
    dVar32 = (double)fVar66;
    auVar59 = ZEXT416(0xffffffff);
    auVar59 = auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60;
    lVar15 = (uVar26 & 0xfffffff) * 0x10;
    iVar27 = (int)uVar26 + 1;
    uVar16 = ZEXT48(&DAT_00fad280) + lVar15;
    auVar59 = vectorShiftLeftIntegerWord(auVar59,auVar59);
    auVar59 = vectorMultiplyAddFloatingPoint(auVar65,auVar55,auVar59);
    iVar9 = (int)lVar15;
    dVar31 = (double)(float)(dVar51 - dVar32);
    if (dVar32 - (double)(float)(dVar51 - dVar32) < 0.0) {
      dVar31 = dVar32;
    }
    uVar26 = (ulonglong)iVar27;
    uVar7 = storeVectorElementWordIndexed(auVar59,(longlong)iVar24,uVar16 & 0xffffffff);
    *(undefined4 *)(iVar24 + (int)uVar16) = uVar7;
    *(undefined4 *)(&DAT_00fad284 + iVar24 + iVar9) = 0;
    *(undefined4 *)(&DAT_00fad28c + iVar24 + iVar9) = 0x3f800000;
    auVar60._0_4_ = auVar58._0_4_ + 1;
    auVar60._8_8_ = auVar58._8_8_;
    auVar60._4_4_ = auVar58._4_4_ + 1;
    auVar61._0_8_ = auVar60._0_8_;
    auVar61._12_4_ = auVar58._12_4_;
    auVar61._8_4_ = auVar58._8_4_ + 1;
    auVar58._0_12_ = auVar61._0_12_;
    auVar58._12_4_ = auVar61._12_4_ + 1;
    dVar35 = (double)(float)(dVar50 - dVar32);
    if ((double)(float)(dVar50 - dVar32) - dVar31 < 0.0) {
      dVar35 = dVar31;
    }
    dVar31 = (double)(float)(dVar35 * dVar35);
    dVar34 = (double)(float)(dVar31 * (double)(float)(dVar31 * dVar35));
    dVar32 = (double)(float)(dVar31 * dVar34);
    *(float *)(&DAT_00fad288 + iVar24 + iVar9) =
         (float)(dVar41 * (double)(float)((double)(float)(dVar31 * dVar32) * dVar46 +
                                         (double)(float)(dVar32 * dVar47 +
                                                        (double)(float)(dVar34 * dVar48 +
                                                                       (double)(float)((double)(
                                                  float)(dVar31 * dVar35) * dVar49 + dVar35)))));
  } while (iVar27 < 0x13);
  fVar66 = *(float *)((int)&DAT_00fad224 + iVar10) - *(float *)(iVar11 + 0xfad194);
  fVar2 = *(float *)((int)&DAT_00fad220 + iVar10) - *(float *)(iVar11 + 0xfad190);
  fVar3 = *(float *)((int)&DAT_00fad228 + iVar10) - *(float *)(iVar11 + 0xfad198);
  dVar32 = (double)(fVar3 * fVar3 + fVar2 * fVar2 + fVar66 * fVar66);
  dVar30 = dVar45;
  dVar43 = dVar45;
  dVar31 = dVar45;
  if ((double)(float)SQRT(dVar32) != dVar45) {
    dVar30 = 1.0 / SQRT(dVar32);
    dVar30 = (double)(float)(-(double)(float)((double)(float)(dVar32 * dVar30) * dVar30 - dVar44) *
                             (double)(float)(dVar54 * dVar30) + dVar30);
    dVar30 = (double)(float)(-(double)(float)((double)(float)(dVar32 * dVar30) * dVar30 - dVar44) *
                             (double)(float)(dVar54 * dVar30) + dVar30);
    fVar1 = (float)(-(double)(float)((double)(float)(dVar32 * dVar30) * dVar30 - dVar44) *
                    (double)(float)(dVar54 * dVar30) + dVar30);
    dVar31 = (double)(fVar2 * fVar1);
    dVar30 = (double)(fVar66 * fVar1);
    dVar43 = (double)(fVar3 * fVar1);
  }
  fVar2 = (float)((double)DAT_00969f78 * dVar31 -
                 (double)(float)((double)hero::g_heroGravityDir * dVar43));
  fVar3 = (float)((double)DAT_00969f74 * dVar43 - (double)(float)((double)DAT_00969f78 * dVar30));
  fVar1 = (float)((double)hero::g_heroGravityDir * dVar30 -
                 (double)(float)((double)DAT_00969f74 * dVar31));
  auVar59 = ZEXT416(0);
  auVar62 = auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60;
  dVar35 = (double)*(float *)(iVar24 + 0xfad3a4);
  dVar34 = (double)*(float *)(iVar24 + 0xfad3a0);
  fVar4 = *(float *)(iVar24 + 0xfad3a8);
  fVar5 = *(float *)(iVar24 + 0xfad3ac);
  local_1b0.w = *(float *)(iVar11 + 0xfad19c) * fVar5 +
                (float)((double)*(float *)((int)&DAT_00fad22c + iVar10) * dVar34);
  dVar41 = (double)SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
  lVar15 = (longlong)(iVar14 * 0x140);
  iVar14 = 0;
  lVar20 = ZEXT48(&DAT_00fad288) + lVar15;
  lVar18 = ZEXT48(&DAT_00fad284) + lVar15;
  lVar19 = ZEXT48(&DAT_00fad280) + lVar15;
  lVar15 = ZEXT48(&DAT_00fad28c) + lVar15;
  fVar66 = (float)(-1.0 / dVar41);
  dVar32 = dVar45;
  if (dVar45 - dVar41 < 0.0) {
    dVar32 = (double)(fVar2 * fVar66);
  }
  dVar36 = dVar45;
  if (dVar45 - dVar41 < 0.0) {
    dVar36 = (double)(fVar1 * fVar66);
  }
  dVar37 = dVar45;
  if (dVar45 - dVar41 < 0.0) {
    dVar37 = (double)(fVar3 * fVar66);
  }
  if (dVar41 - dVar45 < 0.0) {
    dVar32 = (double)(fVar2 * fVar66);
  }
  if (dVar41 - dVar45 < 0.0) {
    dVar36 = (double)(fVar1 * fVar66);
  }
  if (dVar41 - dVar45 < 0.0) {
    dVar37 = (double)(fVar3 * fVar66);
  }
  local_1b0.y = *(float *)(iVar11 + 0xfad194) * fVar5 +
                (float)(dVar43 * dVar37 - (double)(float)(dVar31 * dVar36)) * fVar4 +
                (float)(dVar30 * dVar34 + (double)(float)(dVar32 * dVar35));
  local_1b0.z = *(float *)(iVar11 + 0xfad198) * fVar5 +
                (float)(dVar31 * dVar32 - (double)(float)(dVar30 * dVar37)) * fVar4 +
                (float)(dVar43 * dVar34 + (double)(float)(dVar36 * dVar35));
  local_1b0.x = *(float *)(iVar11 + 0xfad190) * fVar5 +
                (float)(dVar30 * dVar36 - (double)(float)(dVar43 * dVar32)) * fVar4 +
                (float)(dVar31 * dVar34 + (double)(float)(dVar37 * dVar35));
  *(float *)(iVar10 + 0xfad250) = local_1b0.x;
  *(float *)(iVar10 + 0xfad254) = local_1b0.y;
  *(float *)(iVar10 + 0xfad258) = local_1b0.z;
  *(float *)(iVar10 + 0xfad25c) = local_1b0.w;
  dVar31 = 0.9948376417160034;
  dVar43 = 0.20943999290466309;
  uVar42 = 0x3fc99999a0000000;
  dVar30 = 1.570796251296997;
  do {
    local_160 = (longlong)iVar14;
    auVar59 = vectorConvertFromSignedFixedPointWord(auVar62,0);
    pfVar28 = (float *)lVar20;
    *pfVar28 = 0.0;
    dVar32 = (double)local_160;
    fVar66 = mobyutil::MB_WrapRot
                       ((float)(dVar32 * dVar31 + (double)*(float *)(&DAT_00fad0f8 + iVar8)));
    dVar41 = (double)fVar66;
    fVar66 = mobyutil::MB_WrapRot
                       ((float)(dVar32 * dVar43 + (double)*(float *)(&DAT_00fad104 + iVar8)));
    dVar35 = (double)fVar66;
    dVar32 = (double)(float)(dVar51 - dVar35);
    if (dVar35 - (double)(float)(dVar51 - dVar35) < 0.0) {
      dVar32 = dVar35;
    }
    dVar34 = (double)(float)(dVar50 - dVar35);
    if ((double)(float)(dVar50 - dVar35) - dVar32 < 0.0) {
      dVar34 = dVar32;
    }
    dVar32 = (double)(float)(dVar34 * dVar34);
    dVar36 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar34));
    dVar35 = (double)(float)(dVar32 * dVar36);
    dVar36 = (double)(float)((double)(float)((double)(float)(dVar32 * dVar35) * dVar46 +
                                            (double)(float)(dVar35 * dVar47 +
                                                           (double)(float)(dVar36 * dVar48 +
                                                                          (double)(float)((double)(
                                                  float)(dVar32 * dVar34) * dVar49 + dVar34)))) *
                            dVar54);
    dVar35 = (double)mobyutil::MB_randRangeSigned(dVar45,uVar42);
    dVar34 = (double)(float)(dVar41 + dVar30);
    auVar65 = ZEXT416(0xffffffff);
    auVar65 = auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60;
    iVar14 = iVar14 + 1;
    auVar65 = vectorShiftLeftIntegerWord(auVar65,auVar65);
    auVar63._0_4_ = auVar62._0_4_ + 1;
    auVar63._8_8_ = auVar62._8_8_;
    auVar63._4_4_ = auVar62._4_4_ + 1;
    auVar64._0_8_ = auVar63._0_8_;
    auVar64._12_4_ = auVar62._12_4_;
    auVar64._8_4_ = auVar62._8_4_ + 1;
    auVar62._0_12_ = auVar64._0_12_;
    auVar62._12_4_ = auVar64._12_4_ + 1;
    auVar59 = vectorMultiplyAddFloatingPoint(auVar59,auVar55,auVar65);
    dVar32 = (double)(float)(dVar51 - dVar41);
    if (dVar41 - (double)(float)(dVar51 - dVar41) < 0.0) {
      dVar32 = dVar41;
    }
    dVar37 = (double)(float)(dVar51 - dVar34);
    if (dVar34 - (double)(float)(dVar51 - dVar34) < 0.0) {
      dVar37 = dVar34;
    }
    dVar33 = (double)(float)(dVar50 - dVar41);
    if ((double)(float)(dVar50 - dVar41) - dVar32 < 0.0) {
      dVar33 = dVar32;
    }
    dVar41 = (double)(float)(dVar33 * dVar33);
    dVar32 = (double)(float)(dVar50 - dVar34);
    if ((double)(float)(dVar50 - dVar34) - dVar37 < 0.0) {
      dVar32 = dVar37;
    }
    fVar66 = *pfVar28;
    uVar7 = storeVectorElementWordIndexed(auVar59,0,lVar19);
    *(undefined4 *)lVar19 = uVar7;
    *(undefined4 *)lVar15 = 0x3f800000;
    lVar19 = lVar19 + 0x10;
    lVar15 = lVar15 + 0x10;
    dVar37 = (double)(float)(dVar32 * dVar32);
    dVar38 = (double)(float)(dVar41 * (double)(float)(dVar41 * dVar33));
    dVar40 = (double)(float)(dVar41 * dVar38);
    dVar39 = (double)(float)(dVar37 * (double)(float)(dVar37 * dVar32));
    dVar34 = (double)(float)(dVar37 * dVar39);
    *pfVar28 = (float)(dVar36 * (double)(float)((double)(float)(dVar41 * dVar40) * dVar46 +
                                               (double)(float)(dVar40 * dVar47 +
                                                              (double)(float)(dVar38 * dVar48 +
                                                                             (double)(float)((double
                                                  )(float)(dVar41 * dVar33) * dVar49 + dVar33)))) +
                      dVar35) + fVar66;
    lVar20 = lVar20 + 0x10;
    *(float *)lVar18 =
         (float)((double)(float)((double)(float)(dVar37 * dVar34) * dVar46 +
                                (double)(float)(dVar34 * dVar47 +
                                               (double)(float)(dVar39 * dVar48 +
                                                              (double)(float)((double)(float)(dVar37
                                                                                             * 
                                                  dVar32) * dVar49 + dVar32)))) * dVar52);
    lVar18 = lVar18 + 0x10;
  } while (iVar14 < 0x13);
  dVar41 = 0.009999999776482582;
  dVar43 = (double)mobyutil::MB_randRangeFloat(0.01,(float)dVar53);
  dVar31 = (double)mobyutil::MB_randRangeSigned(0x3fd6571840000000,0x3fe6571840000000);
  dVar32 = (double)(float)(dVar31 + dVar30);
  dVar30 = (double)(float)(dVar51 - dVar31);
  if (dVar31 - (double)(float)(dVar51 - dVar31) < 0.0) {
    dVar30 = dVar31;
  }
  dVar35 = (double)(float)(dVar51 - dVar32);
  if (dVar32 - (double)(float)(dVar51 - dVar32) < 0.0) {
    dVar35 = dVar32;
  }
  dVar51 = (double)(float)(dVar50 - dVar31);
  if ((double)(float)(dVar50 - dVar31) - dVar30 < 0.0) {
    dVar51 = dVar30;
  }
  dVar30 = (double)(float)(dVar50 - dVar32);
  if ((double)(float)(dVar50 - dVar32) - dVar35 < 0.0) {
    dVar30 = dVar35;
  }
  dVar50 = (double)(float)(dVar51 * dVar51);
  dVar31 = (double)(float)(dVar30 * dVar30);
  dVar34 = (double)(float)(dVar50 * (double)(float)(dVar50 * dVar51));
  dVar32 = (double)(float)(dVar31 * (double)(float)(dVar31 * dVar30));
  dVar35 = (double)(float)(dVar50 * dVar34);
  dVar36 = (double)(float)(dVar31 * dVar32);
  fVar66 = (float)(dVar43 * (double)(float)((double)(float)(dVar50 * dVar35) * dVar46 +
                                           (double)(float)(dVar35 * dVar47 +
                                                          (double)(float)(dVar34 * dVar48 +
                                                                         (double)(float)((double)(
                                                  float)(dVar50 * dVar51) * dVar49 + dVar51)))));
  dVar30 = (double)(float)(dVar43 * (double)(float)((double)(float)(dVar31 * dVar36) * dVar46 +
                                                   (double)(float)(dVar36 * dVar47 +
                                                                  (double)(float)(dVar32 * dVar48 +
                                                                                 (double)(float)((
                                                  double)(float)(dVar31 * dVar30) * dVar49 + dVar30)
                                                  ))));
  local_1a0 = (float)((double)*(float *)(&DAT_00fad160 + iVar11) * dVar30 +
                     (double)(*(float *)(iVar11 + 0xfad170) * fVar66));
  local_19c = (float)((double)*(float *)(iVar11 + 0xfad164) * dVar30 +
                     (double)(*(float *)(iVar11 + 0xfad174) * fVar66));
  local_198 = (float)((double)*(float *)(iVar11 + 0xfad168) * dVar30 +
                     (double)(*(float *)(iVar11 + 0xfad178) * fVar66));
  local_194 = *(float *)(iVar11 + 0xfad17c) * fVar66 +
              (float)((double)*(float *)(iVar11 + 0xfad16c) * dVar30 + dVar44);
  partupd::SpawnPart_69
            (param_2 * 0x40 + 0xfad190 & 0xffffffff,uVar13 - 0x1a0,0x7f,
             *(undefined4 *)((int)&DAT_00fad14c + iVar8));
  iVar14 = mobyutil::MB_randInt(3);
  if (iVar14 == 0) {
    local_184 = *(undefined4 *)(iVar11 + 0xfad16c);
    local_190 = (float)((double)*(float *)(&DAT_00fad160 + iVar11) * dVar52) +
                *(float *)(iVar11 + 0xfad190);
    local_18c = (float)((double)*(float *)(iVar11 + 0xfad164) * dVar52) +
                *(float *)(iVar11 + 0xfad194);
    local_188 = (float)((double)*(float *)(iVar11 + 0xfad168) * dVar52) +
                *(float *)(iVar11 + 0xfad198);
    uVar42 = partupd::SpawnPart_69
                       (uVar13 - 400,&DAT_00a15d30,0x7f,*(undefined4 *)((int)&DAT_00fad14c + iVar8))
    ;
    iVar14 = (int)uVar42;
    if (iVar14 != 0) {
      auVar55 = ZEXT416(0xffffffff);
      auVar55 = auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60;
      auVar59 = vectorShiftLeftIntegerWord(auVar55,auVar55);
      *(undefined4 *)(iVar14 + 0xc) = 0x47ea6000;
      auVar55 = loadVectorLeftIndexed(100,0x287778);
      auVar55 = auVar55 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar65 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar55 = vectorMultiplyAddFloatingPoint
                          (auVar65,auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60,
                           auVar59);
      fVar66 = animationSpeed * 4.5;
      local_160 = (longlong)(int)fVar66;
      auVar55 = vectorConvertToSignedFixedPointWordSaturate(auVar55,0);
      auVar55 = vectorSplatHalfWord(auVar55,1);
      uVar6 = storeVectorElementHalfWordIndexed(auVar55,10,uVar42);
      *(undefined2 *)(iVar14 + 10) = uVar6;
      dVar30 = (double)fastfunc::FastIntToDouble((short)(int)fVar66);
      *(undefined **)(iVar14 + 0x38) = &DAT_007f7f7f;
      *(float *)(iVar14 + 0x30) = (float)(dVar44 / dVar30);
      if (*(int *)(&DAT_00fad134 + iVar8) == 1) {
        *(undefined2 *)(iVar14 + 0x36) = 1;
      }
    }
  }
  mobyutil::MB_randRangeFloat((float)dVar41,(float)dVar53);
  mobyutil::MB_randVector(dVar41,dVar53,(Vec4 *)(uVar13 - 0x1a0));
  partupd::SpawnPart_69
            (uVar13 - 0x1b0,uVar13 - 0x1a0,0x7f,*(undefined4 *)((int)&DAT_00fad14c + iVar8));
  iVar14 = mobyutil::MB_randInt(3);
  if ((iVar14 == 0) &&
     (uVar42 = partupd::SpawnPart_69
                         (uVar13 - 0x1b0,&DAT_00a15d30,0x7f,
                          *(undefined4 *)((int)&DAT_00fad14c + iVar8)), iVar14 = (int)uVar42,
     iVar14 != 0)) {
    auVar55 = ZEXT416(0xffffffff);
    auVar55 = auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60;
    auVar59 = vectorShiftLeftIntegerWord(auVar55,auVar55);
    *(undefined4 *)(iVar14 + 0xc) = 0x47ea6000;
    auVar55 = loadVectorLeftIndexed(100,0x287778);
    auVar55 = auVar55 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar65 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar55 = vectorMultiplyAddFloatingPoint
                        (auVar65,auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60,
                         auVar59);
    fVar66 = animationSpeed * 4.5;
    local_160 = (longlong)(int)fVar66;
    auVar55 = vectorConvertToSignedFixedPointWordSaturate(auVar55,0);
    auVar55 = vectorSplatHalfWord(auVar55,1);
    uVar6 = storeVectorElementHalfWordIndexed(auVar55,10,uVar42);
    *(undefined2 *)(iVar14 + 10) = uVar6;
    dVar53 = (double)fastfunc::FastIntToDouble((short)(int)fVar66);
    *(undefined **)(iVar14 + 0x38) = &DAT_007f7f7f;
    *(float *)(iVar14 + 0x30) = (float)(dVar44 / dVar53);
    if (*(int *)(&DAT_00fad134 + iVar8) == 1) {
      *(undefined2 *)(iVar14 + 0x36) = 2;
    }
  }
  uVar17 = *(uint *)(&DAT_00fad128 + iVar8);
  if (uVar17 != 0) {
    if ((uVar17 & 1) != 0) {
      local_180.x = *(float *)(iVar11 + 0xfad190);
      local_180.y = *(float *)(iVar11 + 0xfad194);
      local_180.w = *(float *)(iVar11 + 0xfad19c);
      local_180.z = *(float *)(iVar11 + 0xfad198) - 0.25;
      uVar16 = (ulonglong)*(uint *)(&DAT_00fad110 + iVar8);
      if (*(uint *)(&DAT_00fad110 + iVar8) == 0xffffffff) {
        uVar16 = lights::CreatePointLight2
                           (DAT_007aae90,dVar45,dVar44,dVar44,0x4000000000000000,&local_180);
        uVar17 = *(uint *)(&DAT_00fad128 + iVar8);
        *(int *)(&DAT_00fad110 + iVar8) = (int)uVar16;
      }
      if (-1 < (int)uVar16) {
        iVar14 = (int)((uVar16 & 0xffffffff) << 5);
        *(float *)((int)&PointLights[0].pos.x + iVar14) = local_180.x;
        *(float *)((int)&PointLights[0].pos.y + iVar14) = local_180.y;
        *(float *)((int)&PointLights[0].pos.z + iVar14) = local_180.z;
        *(float *)((int)&PointLights[0].pos.w + iVar14) = DAT_007aae90;
      }
    }
    if ((uVar17 & 2) != 0) {
      local_1b0.z = (float)((double)local_1b0.z + dVar54);
      uVar16 = (ulonglong)*(uint *)(&DAT_00fad11c + iVar8);
      if (*(uint *)(&DAT_00fad11c + iVar8) == 0xffffffff) {
        uVar16 = lights::CreatePointLight2
                           (DAT_007aae90,dVar45,dVar44,dVar44,0x4000000000000000,&local_1b0);
        *(int *)(&DAT_00fad11c + iVar8) = (int)uVar16;
      }
      if (-1 < (int)uVar16) {
        iVar8 = (int)((uVar16 & 0xffffffff) << 5);
        *(float *)((int)&PointLights[0].pos.x + iVar8) = local_1b0.x;
        *(float *)((int)&PointLights[0].pos.y + iVar8) = local_1b0.y;
        *(float *)((int)&PointLights[0].pos.z + iVar8) = local_1b0.z;
        *(float *)((int)&PointLights[0].pos.w + iVar8) = DAT_007aae90;
      }
    }
  }
  return;
}



//==== 002884e4  ns=mobyupdate_helpers  size=0xa0
// sig: undefined M1471_002884e4(void)
// callers(0): 
// callees(1): 000da9e8 lights::DeletePointLight

void mobyupdate_helpers::M1471_002884e4(longlong param_1)

{
  int iVar1;
  
  iVar1 = (int)(param_1 << 2);
  *(undefined4 *)((int)&DAT_00fad0e0 + iVar1) = 0;
  *(undefined4 *)((int)&DAT_00fad14c + iVar1) = 0;
  if (*(int *)(&DAT_00fad110 + iVar1) != -1) {
    lights::DeletePointLight(*(int *)(&DAT_00fad110 + iVar1));
    *(undefined4 *)(&DAT_00fad110 + iVar1) = 0xffffffff;
  }
  if (*(int *)(&DAT_00fad11c + iVar1) != -1) {
    lights::DeletePointLight(*(int *)(&DAT_00fad11c + iVar1));
    *(undefined4 *)(&DAT_00fad11c + iVar1) = 0xffffffff;
  }
  return;
}



//==== 00288584  ns=mobyupdate_unsorted  size=0x1ac
// sig: undefined UpdateMoby_1471(MobyInstance * moby)
// callers(0): 
// callees(3): 0006d7e0 draw::RegisterPostDraw; 000da9e8 lights::DeletePointLight; 002877e8 mobyupdate_helpers::M1471_002877e8

/* Moby 1471 */

void mobyupdate_unsorted::UpdateMoby_1471(MobyInstance *moby)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (moby->state == 0) {
    DAT_00fad0e8 = 0;
    DAT_00fad154 = 0;
    DAT_00fad150 = 0;
    DAT_00fad0e4 = 0;
    DAT_00fad14c = 0;
    DAT_00fad0e0 = 0;
    moby->state = '\x01';
    moby->updateDistance = -1;
  }
  else if (moby->state < 2) {
    uVar3 = 0;
    iVar2 = 0;
    do {
      iVar1 = (int)((uVar3 & 0xffffffff) << 2);
      iVar4 = *(int *)((int)&DAT_00fad0e0 + iVar1);
      if (iVar4 != 1) {
        if (iVar4 == 4) {
          *(undefined4 *)((int)&DAT_00fad14c + iVar1) = 0;
          *(undefined4 *)((int)&DAT_00fad0e0 + iVar1) = 0;
          if (*(int *)(&DAT_00fad110 + iVar1) != -1) {
            lights::DeletePointLight(*(int *)(&DAT_00fad110 + iVar1));
            *(undefined4 *)(&DAT_00fad110 + iVar1) = 0xffffffff;
          }
          if (*(int *)(&DAT_00fad11c + iVar1) != -1) {
            lights::DeletePointLight(*(int *)(&DAT_00fad11c + iVar1));
            *(undefined4 *)(&DAT_00fad11c + iVar1) = 0xffffffff;
          }
        }
        else if (iVar4 != 0) {
          iVar2 = iVar2 + 1;
          mobyupdate_helpers::M1471_002877e8(*(undefined4 *)((int)&DAT_00fad14c + iVar1),uVar3);
          *(undefined4 *)((int)&DAT_00fad0e0 + iVar1) = 4;
        }
      }
      iVar4 = (int)uVar3 + 1;
      uVar3 = (ulonglong)iVar4;
    } while (iVar4 < 3);
    if (iVar2 != 0) {
      draw::RegisterPostDraw(&PTR_M1474_00289ee0_0070a7f8,moby);
    }
  }
  return;
}



//==== 00288730  ns=Global  size=0xf8
// sig: undefined FUN_00288730(void)
// callers(1): 0027d4c8 mobyupdate_unsorted::UpdateMoby_1440
// callees(0): 

undefined8 FUN_00288730(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar2 = &DAT_00fad14c;
  piVar3 = piVar2;
  do {
    if (*piVar3 == param_1) {
      return 1;
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar4 < 3);
  iVar4 = 0;
  do {
    if (*piVar2 == 0) {
      iVar1 = iVar4 * 4;
      (&DAT_00fad14c)[iVar4] = param_1;
      *(undefined4 *)(&DAT_00fad0ec + iVar1) = 0;
      *(undefined4 *)(&DAT_00fad104 + iVar1) = 0;
      *(undefined4 *)(&DAT_00fad0f8 + iVar1) = 0;
      *(undefined4 *)(&DAT_00fad110 + iVar1) = 0xffffffff;
      *(undefined4 *)(&DAT_00fad11c + iVar1) = 0xffffffff;
      *(undefined4 *)(&DAT_00fad128 + iVar1) = param_2;
      *(undefined4 *)(&DAT_00fad134 + iVar1) = param_3;
      *(undefined4 *)(&DAT_00fad140 + iVar1) = 0;
      (&DAT_00fad0e0)[iVar4] = 1;
      return 1;
    }
    iVar4 = iVar4 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar4 < 3);
  return 0;
}



//==== 00288828  ns=mobyupdate_helpers  size=0x60
// sig: undefined M1474_00288828(void)
// callers(0): 
// callees(0): 

undefined8 mobyupdate_helpers::M1474_00288828(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  int *piVar3;
  
  uVar2 = 0;
  piVar3 = &DAT_00fad14c;
  do {
    if (*piVar3 == param_1) {
      iVar1 = (int)((uVar2 & 0xffffffff) << 2);
      if (*(int *)((int)&DAT_00fad0e0 + iVar1) == 1) {
        *(undefined4 *)((int)&DAT_00fad0e0 + iVar1) = 2;
      }
      return 1;
    }
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 1;
  } while ((int)uVar2 < 3);
  return 0;
}



//==== 00288888  ns=Global  size=0xd0
// sig: undefined FUN_00288888(void)
// callers(2): 0027cd50 mobyupdate_helpers::M1440_0027cd50; 0027d4c8 mobyupdate_unsorted::UpdateMoby_1440
// callees(1): 000da9e8 lights::DeletePointLight

undefined8 FUN_00288888(int param_1)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  piVar2 = &DAT_00fad14c;
  do {
    if (*piVar2 == param_1) {
      iVar1 = (int)((uVar3 & 0xffffffff) << 2);
      *(undefined4 *)((int)&DAT_00fad14c + iVar1) = 0;
      *(undefined4 *)((int)&DAT_00fad0e0 + iVar1) = 0;
      if (*(int *)(&DAT_00fad110 + iVar1) != -1) {
        lights::DeletePointLight(*(int *)(&DAT_00fad110 + iVar1));
        *(undefined4 *)(&DAT_00fad110 + iVar1) = 0xffffffff;
      }
      if (*(int *)(&DAT_00fad11c + iVar1) != -1) {
        lights::DeletePointLight(*(int *)(&DAT_00fad11c + iVar1));
        *(undefined4 *)(&DAT_00fad11c + iVar1) = 0xffffffff;
      }
      return 1;
    }
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 1;
  } while ((int)uVar3 < 3);
  return 0;
}



//==== 00288958  ns=Global  size=0xf4
// sig: undefined FUN_00288958(void)
// callers(1): 0027d4c8 mobyupdate_unsorted::UpdateMoby_1440
// callees(1): 005002cc fastfunc::FastMemCopy

undefined8 FUN_00288958(int param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  piVar2 = &DAT_00fad14c;
  do {
    if (param_1 == *piVar2) {
      iVar1 = (int)((uVar3 & 0xffffffff) << 2);
      if (*(int *)((int)&DAT_00fad0e0 + iVar1) == 1) {
        *(undefined4 *)((int)&DAT_00fad0e0 + iVar1) = 2;
      }
      else if (*(int *)((int)&DAT_00fad0e0 + iVar1) == 4) {
        *(undefined4 *)((int)&DAT_00fad0e0 + iVar1) = 3;
      }
      fastfunc::FastMemCopy
                (ZEXT48(&DAT_00fad160) + (uVar3 & 0x3ffffff) * 0x40 & 0xffffffff,param_2,0x40);
      iVar1 = (int)uVar3;
      (&DAT_00fad220)[iVar1 * 4] = *param_3;
      (&DAT_00fad224)[iVar1 * 4] = param_3[1];
      (&DAT_00fad228)[iVar1 * 4] = param_3[2];
      (&DAT_00fad22c)[iVar1 * 4] = param_3[3];
      return 1;
    }
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 1;
  } while ((int)uVar3 < 3);
  return 0;
}



//==== 00288a70  ns=mobyupdate_helpers  size=0xbe0
// sig: undefined M1474_00288a70(void)
// callers(1): 00289ee0 mobyupdate_helpers::M1474_00289ee0
// callees(8): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 000fec94 mobyutil::MB_catmullRom; 00502730 fastfunc::FastIntToDouble; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0; 005e825c FUN_005e825c

void mobyupdate_helpers::M1474_00288a70(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float local_260 [4];
  float local_250 [4];
  undefined1 local_240 [64];
  undefined1 local_200 [64];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  undefined1 local_190 [96];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [96];
  
  draw::GetEffectTex();
  idol_draw::PackCmd(0,2,0,1,0x80);
  stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(0,0,0,0,0,0);
  draw::GetEffectTex(param_2);
  uVar8 = 0x3ff0000000000000;
  uVar7 = 0;
  uVar6 = 0xbff0000000000000;
  FUN_005e825c(local_260,param_3,local_200);
  FUN_005e825c(local_250,param_3 + 0x10,local_200);
  FUN_005e825c(local_1c0,local_1c0,local_240);
  FUN_005e825c(local_1b0,local_1b0,local_240);
  FUN_005e825c(local_130,local_130,local_240);
  FUN_005e825c(local_120,local_120,local_240);
  uVar2 = 1;
  do {
    lVar1 = (uVar2 & 0xfffffff) * 0x10;
    FUN_005e825c(local_260,lVar1 + param_3 & 0xffffffff,local_200);
    FUN_005e825c(local_250,lVar1 + param_3 + 0x10 & 0xffffffff,local_200);
    FUN_005e825c(local_1a0,local_1a0,local_240);
    FUN_005e825c(local_190,local_190,local_240);
    FUN_005e825c(local_110,local_110,local_240);
    FUN_005e825c(local_100,local_100,local_240);
    if ((int)uVar2 == 1) {
      draw::FastDrawQuad(local_1c0,0,0,EffectTexHeaders,9);
      draw::FastDrawQuad(local_130,0,0,EffectTexHeaders,9);
    }
    else {
      draw::FastDrawQuad(local_1c0,0,0,EffectTexHeaders,9);
      draw::FastDrawQuad(local_130,0,0,EffectTexHeaders,9);
    }
    dVar4 = (double)fastfunc::FastIntToDouble(uVar2);
    dVar5 = (double)fastfunc::FastIntToDouble(0x14);
    mobyutil::MB_catmullRom(uVar6,uVar7,uVar8,uVar7,(double)(float)(dVar4 / dVar5));
    iVar3 = (int)uVar2 + 1;
    uVar2 = (ulonglong)iVar3;
  } while (iVar3 < 0x13);
  return;
}



//==== 00289678  ns=mobyupdate_helpers  size=0x85c
// sig: undefined M1474_00289678(void)
// callers(1): 00289ee0 mobyupdate_helpers::M1474_00289ee0
// callees(7): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe4f0 mobyutil::MB_randRangeSigned; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1474_00289678(undefined8 param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  undefined4 uVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  longlong lVar12;
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
  undefined8 uVar24;
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
  float local_180 [46];
  
  iVar5 = (int)(param_2 << 6);
  dVar27 = (double)*(float *)(iVar5 + 0xfad194);
  dVar26 = (double)*(float *)(iVar5 + 0xfad190);
  fVar2 = (float)((double)GameCamera.posY - dVar27);
  dVar28 = (double)*(float *)(iVar5 + 0xfad198);
  fVar3 = (float)((double)GameCamera.posX - dVar26);
  fVar4 = (float)((double)GameCamera.posZ - dVar28);
  dVar23 = 0.0;
  dVar25 = (double)(float)GameCamera.field8_0x14c;
  fVar1 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
  dVar30 = dVar23;
  dVar31 = dVar23;
  dVar32 = dVar23;
  if (SQRT(fVar1) != 0.0) {
    fVar6 = 1.0 / SQRT(fVar1);
    fVar6 = -(fVar1 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar1 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar1 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    dVar32 = (double)(fVar3 * fVar6);
    dVar31 = (double)(fVar2 * fVar6);
    dVar30 = (double)(fVar4 * fVar6);
  }
  fVar2 = (float)((double)DAT_00969f78 * dVar32 -
                 (double)(float)((double)hero::g_heroGravityDir * dVar30));
  fVar3 = (float)((double)DAT_00969f74 * dVar30 - (double)(float)((double)DAT_00969f78 * dVar31));
  fVar4 = (float)((double)hero::g_heroGravityDir * dVar31 -
                 (double)(float)((double)DAT_00969f74 * dVar32));
  fVar1 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  fVar6 = -1.0 / fVar1;
  dVar29 = dVar23;
  if (0.0 - fVar1 < 0.0) {
    dVar29 = (double)(fVar3 * fVar6);
  }
  dVar19 = dVar23;
  if (0.0 - fVar1 < 0.0) {
    dVar19 = (double)(fVar2 * fVar6);
  }
  dVar20 = dVar23;
  if (0.0 - fVar1 < 0.0) {
    dVar20 = (double)(fVar4 * fVar6);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar29 = (double)(fVar3 * fVar6);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar19 = (double)(fVar2 * fVar6);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar20 = (double)(fVar4 * fVar6);
  }
  dVar35 = (double)(float)(dVar32 * dVar19 - (double)(float)(dVar31 * dVar29));
  dVar33 = (double)(float)(dVar31 * dVar20 - (double)(float)(dVar30 * dVar19));
  dVar34 = (double)(float)(dVar30 * dVar29 - (double)(float)(dVar32 * dVar20));
  draw::GetEffectTex(0xb);
  idol_draw::PackCmd(0,1,0,1,0xff);
  stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(1,1,0,0,0,0);
  dVar13 = (double)mobyutil::MB_randRangeFloat(0.3,0.325);
  uVar24 = 0x3fa99999a0000000;
  dVar14 = (double)mobyutil::MB_randRangeSigned(dVar23,0x3fa99999a0000000);
  dVar15 = (double)mobyutil::MB_randRangeSigned(dVar23,uVar24);
  dVar16 = (double)mobyutil::MB_randRangeSigned(dVar23,uVar24);
  pfVar11 = local_180;
  pfVar10 = (float *)&DAT_007aae50;
  lVar12 = 4;
  pfVar9 = pfVar10;
  pfVar8 = pfVar11;
  do {
    fVar3 = *pfVar9;
    fVar2 = (float)((double)fVar3 * dVar13);
    dVar17 = (double)fVar2;
    *pfVar8 = fVar2;
    dVar18 = (double)(float)((double)pfVar9[1] * dVar13);
    pfVar8[1] = (float)((double)pfVar9[1] * dVar13);
    dVar21 = (double)(float)((double)pfVar9[2] * dVar13);
    pfVar8[2] = (float)((double)pfVar9[2] * dVar13);
    dVar22 = (double)pfVar9[3];
    pfVar9 = pfVar9 + 4;
    pfVar8[3] = (float)((double)fVar3 * (double)(float)(dVar13 * dVar25) + dVar22);
    *pfVar8 = (float)(dVar18 * dVar29 +
                     (double)(float)(dVar22 * dVar26 +
                                    (double)(float)(dVar21 * dVar33 +
                                                   (double)(float)(dVar17 * dVar32 + dVar14))));
    pfVar8[1] = (float)(dVar18 * dVar19 +
                       (double)(float)(dVar22 * dVar27 +
                                      (double)(float)(dVar21 * dVar34 +
                                                     (double)(float)(dVar17 * dVar31 + dVar15))));
    pfVar8[2] = (float)(dVar18 * dVar20 +
                       (double)(float)(dVar22 * dVar28 +
                                      (double)(float)(dVar21 * dVar35 +
                                                     (double)(float)(dVar17 * dVar30 + dVar16))));
    pfVar8 = pfVar8 + 4;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  draw::FastDrawQuad(local_180,0,0,EffectTexHeaders,9);
  idol_draw::PackCmd(0,2,0,1,0xff);
  uVar7 = EffectTexHeaders;
  lVar12 = 4;
  dVar13 = (double)(float)(dVar13 * 3.0);
  pfVar9 = pfVar10;
  pfVar8 = pfVar11;
  do {
    fVar3 = *pfVar9;
    fVar2 = (float)((double)fVar3 * dVar13);
    dVar17 = (double)fVar2;
    *pfVar8 = fVar2;
    dVar18 = (double)pfVar9[1];
    pfVar8[1] = (float)(dVar18 * dVar13);
    dVar21 = (double)(float)((double)pfVar9[2] * dVar13);
    pfVar8[2] = (float)((double)pfVar9[2] * dVar13);
    dVar22 = (double)pfVar9[3];
    pfVar9 = pfVar9 + 4;
    pfVar8[3] = (float)((double)fVar3 * (double)(float)(dVar13 * dVar25) + dVar22);
    *pfVar8 = (float)(dVar22 * dVar26 +
                     (double)(float)(dVar21 * dVar33 +
                                    (double)(float)(dVar17 * dVar32 +
                                                   (double)(float)(dVar18 * (double)(float)(dVar13 *
                                                                                           dVar29)))
                                    ));
    pfVar8[1] = (float)(dVar22 * dVar27 +
                       (double)(float)(dVar21 * dVar34 +
                                      (double)(float)(dVar17 * dVar31 +
                                                     (double)(float)(dVar18 * (double)(float)(dVar13
                                                                                             * 
                                                  dVar19)))));
    pfVar8[2] = (float)(dVar22 * dVar28 +
                       (double)(float)(dVar21 * dVar35 +
                                      (double)(float)(dVar17 * dVar30 +
                                                     (double)(float)(dVar18 * (double)(float)(dVar13
                                                                                             * 
                                                  dVar20)))));
    pfVar8 = pfVar8 + 4;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  draw::FastDrawQuad(local_180,0,0,uVar7,9);
  iVar5 = (int)(param_2 << 4);
  dVar28 = (double)*(float *)(iVar5 + 0xfad254);
  dVar27 = (double)*(float *)(iVar5 + 0xfad250);
  fVar2 = (float)((double)GameCamera.posY - dVar28);
  dVar29 = (double)*(float *)(iVar5 + 0xfad258);
  fVar3 = (float)((double)GameCamera.posX - dVar27);
  fVar4 = (float)((double)GameCamera.posZ - dVar29);
  dVar26 = (double)*(float *)(iVar5 + 0xfad25c);
  dVar25 = (double)(float)GameCamera.field8_0x14c;
  fVar1 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
  dVar30 = dVar23;
  dVar31 = dVar23;
  dVar32 = dVar23;
  if ((double)SQRT(fVar1) != dVar23) {
    fVar6 = 1.0 / SQRT(fVar1);
    fVar6 = -(fVar1 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar1 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar1 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    dVar32 = (double)(fVar3 * fVar6);
    dVar31 = (double)(fVar2 * fVar6);
    dVar30 = (double)(fVar4 * fVar6);
  }
  fVar3 = (float)((double)DAT_00969f78 * dVar32 -
                 (double)(float)((double)hero::g_heroGravityDir * dVar30));
  fVar4 = (float)((double)DAT_00969f74 * dVar30 - (double)(float)((double)DAT_00969f78 * dVar31));
  fVar1 = (float)((double)hero::g_heroGravityDir * dVar31 -
                 (double)(float)((double)DAT_00969f74 * dVar32));
  dVar20 = (double)SQRT(fVar1 * fVar1 + fVar4 * fVar4 + fVar3 * fVar3);
  fVar2 = (float)(-1.0 / dVar20);
  dVar19 = dVar23;
  if (dVar23 - dVar20 < 0.0) {
    dVar19 = (double)(fVar4 * fVar2);
  }
  dVar13 = dVar23;
  if (dVar23 - dVar20 < 0.0) {
    dVar13 = (double)(fVar3 * fVar2);
  }
  dVar33 = dVar23;
  if (dVar23 - dVar20 < 0.0) {
    dVar33 = (double)(fVar1 * fVar2);
  }
  if (dVar20 - dVar23 < 0.0) {
    dVar19 = (double)(fVar4 * fVar2);
  }
  if (dVar20 - dVar23 < 0.0) {
    dVar13 = (double)(fVar3 * fVar2);
  }
  if (dVar20 - dVar23 < 0.0) {
    dVar33 = (double)(fVar1 * fVar2);
  }
  dVar35 = (double)(float)(dVar32 * dVar13 - (double)(float)(dVar31 * dVar19));
  dVar20 = (double)(float)(dVar31 * dVar33 - (double)(float)(dVar30 * dVar13));
  dVar34 = (double)(float)(dVar30 * dVar19 - (double)(float)(dVar32 * dVar33));
  dVar23 = (double)mobyutil::MB_randRangeFloat(0.2,0.225);
  idol_draw::PackCmd(0,1,0,1,0xff);
  uVar7 = EffectTexHeaders;
  lVar12 = 4;
  pfVar9 = pfVar10;
  pfVar8 = pfVar11;
  do {
    fVar3 = *pfVar9;
    fVar2 = (float)((double)fVar3 * dVar23);
    dVar17 = (double)fVar2;
    *pfVar8 = fVar2;
    dVar18 = (double)(float)((double)pfVar9[1] * dVar23);
    pfVar8[1] = (float)((double)pfVar9[1] * dVar23);
    dVar21 = (double)(float)((double)pfVar9[2] * dVar23);
    pfVar8[2] = (float)((double)pfVar9[2] * dVar23);
    dVar22 = (double)pfVar9[3];
    pfVar9 = pfVar9 + 4;
    pfVar8[3] = (float)(dVar22 * dVar26 +
                       (double)(float)((double)fVar3 * (double)(float)(dVar23 * dVar25)));
    *pfVar8 = (float)(dVar18 * dVar19 +
                     (double)(float)(dVar22 * dVar27 +
                                    (double)(float)(dVar21 * dVar20 +
                                                   (double)(float)(dVar17 * dVar32 + dVar14))));
    pfVar8[1] = (float)(dVar18 * dVar13 +
                       (double)(float)(dVar22 * dVar28 +
                                      (double)(float)(dVar21 * dVar34 +
                                                     (double)(float)(dVar17 * dVar31 + dVar15))));
    pfVar8[2] = (float)(dVar18 * dVar33 +
                       (double)(float)(dVar22 * dVar29 +
                                      (double)(float)(dVar21 * dVar35 +
                                                     (double)(float)(dVar17 * dVar30 + dVar16))));
    pfVar8 = pfVar8 + 4;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  draw::FastDrawQuad(local_180,0,0,uVar7,9);
  idol_draw::PackCmd(0,2,0,1,0xff);
  uVar7 = EffectTexHeaders;
  dVar23 = (double)(float)(dVar23 * 3.0);
  lVar12 = 4;
  do {
    fVar3 = *pfVar10;
    fVar2 = (float)((double)fVar3 * dVar23);
    dVar14 = (double)fVar2;
    *pfVar11 = fVar2;
    dVar15 = (double)pfVar10[1];
    pfVar11[1] = (float)(dVar15 * dVar23);
    dVar16 = (double)(float)((double)pfVar10[2] * dVar23);
    pfVar11[2] = (float)((double)pfVar10[2] * dVar23);
    dVar17 = (double)pfVar10[3];
    pfVar10 = pfVar10 + 4;
    pfVar11[3] = (float)(dVar17 * dVar26 +
                        (double)(float)((double)fVar3 * (double)(float)(dVar23 * dVar25)));
    *pfVar11 = (float)(dVar17 * dVar27 +
                      (double)(float)(dVar16 * dVar20 +
                                     (double)(float)(dVar14 * dVar32 +
                                                    (double)(float)(dVar15 * (double)(float)(dVar23 
                                                  * dVar19)))));
    pfVar11[1] = (float)(dVar17 * dVar28 +
                        (double)(float)(dVar16 * dVar34 +
                                       (double)(float)(dVar14 * dVar31 +
                                                      (double)(float)(dVar15 * (double)(float)(
                                                  dVar23 * dVar13)))));
    pfVar11[2] = (float)(dVar17 * dVar29 +
                        (double)(float)(dVar16 * dVar35 +
                                       (double)(float)(dVar14 * dVar30 +
                                                      (double)(float)(dVar15 * (double)(float)(
                                                  dVar23 * dVar33)))));
    pfVar11 = pfVar11 + 4;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  draw::FastDrawQuad(local_180,0,0,uVar7,9);
  return;
}



//==== 00289ee0  ns=mobyupdate_helpers  size=0x1c4
// sig: undefined M1474_00289ee0(void)
// callers(0): 
// callees(4): 00174f80 vuchain::SetGSReg; 00288a70 mobyupdate_helpers::M1474_00288a70; 00289678 mobyupdate_helpers::M1474_00289678; 00502f98 FUN_00502f98

void mobyupdate_helpers::M1474_00289ee0(int param_1)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  piVar1 = *(int **)(param_1 + 0x78);
  uVar2 = FUN_00502f98(1,0,0,1,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar2);
  dVar7 = 0.20000000298023224;
  dVar8 = -8.0;
  dVar9 = 8.0;
  uVar4 = 0;
  do {
    iVar5 = (int)((uVar4 & 0xffffffff) << 2);
    if ((*(int *)((int)&DAT_00fad14c + iVar5) != 0) && (1 < *(int *)((int)&DAT_00fad0e0 + iVar5))) {
      dVar6 = -(double)(float)((double)DAT_0071f408 * dVar7 -
                              (double)*(float *)(&DAT_00fad140 + iVar5));
      *(float *)(&DAT_00fad140 + iVar5) = (float)dVar6;
      if (dVar6 <= dVar8) {
        *(float *)(&DAT_00fad140 + iVar5) = (float)(dVar6 + dVar9);
      }
      M1474_00289678(*(int *)((int)&DAT_00fad14c + iVar5),uVar4);
      iVar5 = piVar1[1] + 0x28;
      iVar3 = *piVar1 + 0x28;
      M1474_00288a70(iVar5,iVar3,ZEXT48(&DAT_00fad280) + (uVar4 & 0x7fffffff) * 0x280 & 0xffffffff,
                     0x80,0x40,uVar4);
      M1474_00288a70(iVar5,iVar3,
                     ZEXT48(&DAT_00fad280) + ((uVar4 & 0x7fffffff) * 2 + 1) * 0x140 & 0xffffffff,
                     0x30,0x10,uVar4);
    }
    iVar5 = (int)uVar4 + 1;
    uVar4 = (ulonglong)iVar5;
  } while (iVar5 < 3);
  return;
}



//==== 0028a0a4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1474_0028a0a4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1474_0028a0a4(void)

{
  DAT_007aaee0 = 0x10000;
  return;
}



//==== 0028a0b8  ns=mobyupdate_helpers  size=0x58
// sig: undefined M1474_0028a0b8(void)
// callers(0): 
// callees(0): 

undefined8 mobyupdate_helpers::M1474_0028a0b8(int param_1)

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



//==== 0028a138  ns=mobyupdate_unsorted  size=0x850
// sig: undefined UpdateMoby_1474(MobyInstance * moby)
// callers(0): 
// callees(9): 000a2560 hero::Hero_TransitionToDefault; 000b72b0 hero::TransitionMovement; 00112900 mobyutil::MB_GetOrientation; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Moby 1474 */

void mobyupdate_unsorted::UpdateMoby_1474(MobyInstance *moby)

{
  byte bVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  f32 fVar7;
  MobyModeBit MVar8;
  void *pvVar9;
  uint uVar10;
  Spline *pSVar11;
  undefined2 uVar12;
  MobyInstance *pMVar13;
  int iVar15;
  longlong lVar14;
  MobyClass *pMVar16;
  ulonglong uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  Vec4 local_50;
  
  pvVar9 = moby->pVar;
  uVar17 = ZEXT48(pvVar9);
  if ((&DAT_00a202c0)[(byte)moby->levelFlagIdx] != -1) {
    moby->collision = (ushort *)0x0;
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    return;
  }
  if (*(int *)((int)pvVar9 + 0xb4) == -1) {
    return;
  }
  dVar21 = (double)(moby->pos).x;
  dVar22 = (double)(moby->pos).y;
  dVar23 = (double)(moby->pos).z;
  pSVar11 = Splines[*(int *)((int)pvVar9 + 0xb4)];
  fastfunc::FastDecTimerS16(uVar17 + 0xba);
  pMVar16 = moby->pClass;
  if (moby->state == '\0') {
    *(undefined4 *)((int)pvVar9 + 0x20) = 0;
    *(undefined2 *)((int)pvVar9 + 0x24) = 0;
    *(undefined1 *)((int)pvVar9 + 0x28) = 4;
    uVar10 = *(uint *)((int)pvVar9 + 0xa0);
    *(undefined2 *)((int)pvVar9 + 0x3e) = 5;
    moby->setByGroup = (char)uVar10;
    uVar2 = 0;
    if ((uVar10 & 0xff) == 0) {
      uVar2 = 0x3f800000;
    }
    *(undefined4 *)((int)pvVar9 + 0xa4) = uVar2;
    iVar15 = fastfunc::FastDoubleToInt();
    lVar14 = 0;
    if (iVar15 != 0) {
      lVar14 = (ulonglong)(uint)pSVar11->cnt - 1;
    }
    iVar15 = (int)(lVar14 << 4);
    (moby->pos).x = *(f32 *)((int)&pSVar11->points[0].x + iVar15);
    (moby->pos).y = *(f32 *)((int)&pSVar11->points[0].y + iVar15);
    (moby->pos).z = *(f32 *)((int)&pSVar11->points[0].z + iVar15);
    (moby->pos).w = *(f32 *)((int)&pSVar11->points[0].w + iVar15);
    *(undefined2 *)((int)pvVar9 + 0xba) = 0;
    *(undefined4 *)((int)pvVar9 + 0xa8) = 0;
    *(undefined4 *)((int)pvVar9 + 0xbc) = 0;
    MVar8 = moby->modeBits;
    moby->state = '\x01';
    moby->updateDistance = -1;
    pMVar16 = moby->pClass;
    moby->drawDistance = 0xff;
    *(undefined4 *)((int)pvVar9 + 0xc4) = 0xffffffff;
    moby->modeBits =
         MVar8 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                  DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW
                  |TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
    moby->collision = pMVar16->collision;
  }
  bVar1 = moby->setByGroup;
  if (bVar1 < 2) {
    if (-1 < (int)(uint)bVar1) {
      if (bVar1 == 0) {
        fVar3 = pMVar16->gScale;
        fVar4 = -(fVar3 * 0.016666668 - moby->scale);
        moby->scale = fVar4;
        if (fVar4 < 0.0) {
          moby->scale = fVar3;
          (moby->pos).x = pSVar11->points[0].x;
          (moby->pos).y = pSVar11->points[0].y;
          (moby->pos).z = pSVar11->points[0].z;
          fVar3 = pSVar11->points[0].w;
          moby->setByGroup = '\x01';
          (moby->pos).w = fVar3;
          *(undefined4 *)((int)pvVar9 + 0xa4) = 0;
        }
      }
      else if (((*(short *)((int)pvVar9 + 0xb8) != 0) &&
               (((pMVar13 = DAT_0096a1d8, hero::g_heroStateType == 3 || (g_heroState == EDGE_JUMP))
                || (pMVar13 = g_standingOnMoby, g_framesNotGrounded == 0)))) && (pMVar13 == moby)) {
        if (((*(int *)((int)pvVar9 + 200) == 0) &&
            (((pMVar13 = DAT_0096a1d8, hero::g_heroStateType == 3 || (g_heroState == EDGE_JUMP)) ||
             (pMVar13 = g_standingOnMoby, g_framesNotGrounded == 0)))) && (pMVar13 == moby)) {
          hero::TransitionMovement(0x72,1);
        }
        moby->setByGroup = '\x02';
        fVar3 = animationSpeed;
        *(undefined2 *)((int)pvVar9 + 0xb8) = 0;
        *(float *)((int)pvVar9 + 0xac) = 1.0 / (fVar3 * *(float *)((int)pvVar9 + 0xb0) * 60.0);
      }
    }
  }
  else if (bVar1 < 3) {
    if (*(short *)((int)pvVar9 + 0xba) == 0) {
      dVar20 = 0.0;
      if ((((-1 < *(int *)((int)pvVar9 + 0xbc)) ||
           (fVar3 = (moby->pos).y - g_heroPosition.y, fVar4 = (moby->pos).x - g_heroPosition.x,
           2.0 <= SQRT(fVar4 * fVar4 + fVar3 * fVar3))) ||
          (fVar3 = (moby->pos).z, 4.0 <= ABS(g_heroPosition.z - fVar3))) ||
         (fVar3 - g_heroPosition.z <= 1.0)) {
        iVar15 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar9 + 0xc4));
        if (iVar15 == 0) {
          iVar15 = sound::PlayMobySound(0,4,moby);
          *(int *)((int)pvVar9 + 0xc4) = iVar15;
        }
        dVar18 = (double)*(float *)((int)pvVar9 + 0xac);
        fVar3 = (float)(dVar18 * (double)mobyutil::g_FrameTime +
                       (double)*(float *)((int)pvVar9 + 0xa8));
        dVar19 = (double)fVar3;
        *(float *)((int)pvVar9 + 0xa8) = fVar3;
        if (ABS(dVar18) < ABS(dVar19)) {
          *(float *)((int)pvVar9 + 0xa8) = *(float *)((int)pvVar9 + 0xac);
          dVar19 = dVar18;
        }
        fVar3 = (float)((double)*(float *)((int)pvVar9 + 0xa4) + dVar19);
        *(float *)((int)pvVar9 + 0xa4) = fVar3;
        if (0.5 < ABS(fVar3 - 0.5)) {
          if (((*(int *)((int)pvVar9 + 200) == 0) &&
              (((pMVar13 = DAT_0096a1d8, hero::g_heroStateType == 3 || (g_heroState == EDGE_JUMP))
               || (pMVar13 = g_standingOnMoby, g_framesNotGrounded == 0)))) && (pMVar13 == moby)) {
            hero::Hero_TransitionToDefault();
            dVar18 = (double)*(float *)((int)pvVar9 + 0xac);
          }
          if (dVar18 <= dVar20) {
            moby->setByGroup = '\x01';
          }
          else {
            moby->setByGroup = '\x03';
            dVar20 = 1.0;
          }
          *(float *)((int)pvVar9 + 0xa4) = (float)dVar20;
          auVar24 = ZEXT416(0xffffffff);
          auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
          *(undefined4 *)((int)pvVar9 + 0xa8) = 0;
          auVar25 = vectorShiftLeftIntegerWord(auVar24,auVar24);
          auVar24 = loadVectorLeftIndexed(0x20,0x28a110);
          auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          iVar15 = *(int *)((int)pvVar9 + 0xc4);
          auVar24 = vectorMultiplyAddFloatingPoint
                              (auVar26,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60
                               ,auVar25);
          auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
          auVar24 = vectorSplatHalfWord(auVar24,1);
          uVar12 = storeVectorElementHalfWordIndexed(auVar24,0xba,uVar17);
          *(undefined2 *)((int)pvVar9 + 0xba) = uVar12;
          if (((iVar15 != -1) && (sound::g_SoundChannels[iVar15].pMoby == moby)) &&
             (sound::g_SoundChannels[iVar15].state != '\0')) {
            sound::sound_Kill(iVar15);
          }
          *(undefined4 *)((int)pvVar9 + 0xc4) = 0xffffffff;
        }
        dVar20 = (double)fastfunc::FastIntToDouble(pSVar11->cnt + -1);
        lVar14 = fastfunc::FastDoubleToInt
                           ((double)(float)(dVar20 * (double)*(float *)((int)pvVar9 + 0xa4)));
        dVar20 = (double)fastfunc::FastIntToDouble();
        dVar19 = (double)fastfunc::FastIntToDouble(pSVar11->cnt + -1);
        fVar3 = (float)(dVar19 * (double)*(float *)((int)pvVar9 + 0xa4) - dVar20);
        iVar15 = (int)(lVar14 << 4);
        if ((int)lVar14 == pSVar11->cnt + -1) {
          fVar4 = *(float *)((int)&pSVar11->points[0].x + iVar15);
          fVar5 = *(float *)((int)&pSVar11->points[0].y + iVar15);
          fVar6 = *(float *)((int)&pSVar11->points[0].z + iVar15);
          fVar7 = *(f32 *)((int)&pSVar11->points[0].w + iVar15);
        }
        else {
          fVar4 = *(float *)((int)&pSVar11->points[0].x + iVar15);
          fVar5 = *(float *)((int)&pSVar11->points[0].y + iVar15);
          fVar6 = *(float *)((int)&pSVar11->points[0].z + iVar15);
          fVar7 = *(f32 *)((int)&pSVar11->points[1].w + iVar15);
          fVar4 = fVar3 * (*(float *)((int)&pSVar11->points[1].x + iVar15) - fVar4) + fVar4;
          fVar5 = fVar3 * (*(float *)((int)&pSVar11->points[1].y + iVar15) - fVar5) + fVar5;
          fVar6 = fVar3 * (*(float *)((int)&pSVar11->points[1].z + iVar15) - fVar6) + fVar6;
        }
        (moby->pos).x = fVar4;
        (moby->pos).y = fVar5;
        (moby->pos).z = fVar6;
        (moby->pos).w = fVar7;
        *(float *)((int)pvVar9 + 0xbc) = (float)((double)fVar6 - dVar23);
        goto LAB_0028a87c;
      }
      auVar24 = ZEXT416(0xffffffff);
      auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
      auVar25 = vectorShiftLeftIntegerWord(auVar24,auVar24);
      auVar24 = loadVectorLeftIndexed(0x18,0x28a110);
      auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar24 = vectorMultiplyAddFloatingPoint
                          (auVar26,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,
                           auVar25);
      auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
      auVar24 = vectorSplatHalfWord(auVar24,1);
      uVar12 = storeVectorElementHalfWordIndexed(auVar24,0xba,uVar17);
      *(undefined2 *)((int)pvVar9 + 0xba) = uVar12;
    }
    iVar15 = *(int *)((int)pvVar9 + 0xc4);
    *(undefined4 *)((int)pvVar9 + 0xa8) = 0;
    if (((iVar15 != -1) && (sound::g_SoundChannels[iVar15].pMoby == moby)) &&
       (sound::g_SoundChannels[iVar15].state != '\0')) {
      sound::sound_Kill(iVar15);
    }
    *(undefined4 *)((int)pvVar9 + 0xc4) = 0xffffffff;
  }
  else if ((bVar1 < 4) &&
          ((((pMVar13 = DAT_0096a1d8, hero::g_heroStateType != 3 && (g_heroState != EDGE_JUMP)) &&
            (pMVar13 = g_standingOnMoby, g_framesNotGrounded != 0)) || (pMVar13 != moby)))) {
    moby->setByGroup = '\0';
  }
LAB_0028a87c:
  local_50.x = (float)((double)(moby->pos).x - dVar21);
  local_50.y = (float)((double)(moby->pos).y - dVar22);
  local_50.w = (moby->pos).w;
  local_50.z = (float)((double)(moby->pos).z - dVar23);
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar9 + 0x60),&local_50,(longlong)(int)moby + 0x40,
             (longlong)(int)moby + 0x40);
  pMVar13 = DAT_0096a1d8;
  if (((((hero::g_heroStateType != 3) && (g_heroState != EDGE_JUMP)) &&
       (pMVar13 = g_standingOnMoby, g_framesNotGrounded != 0)) || (pMVar13 != moby)) &&
     ((fVar3 = (moby->pos).y - g_heroPosition.y, fVar4 = (moby->pos).x - g_heroPosition.x,
      2.0 < SQRT(fVar4 * fVar4 + fVar3 * fVar3) && (*(short *)((int)pvVar9 + 0xba) == 0)))) {
    *(undefined2 *)((int)pvVar9 + 0xb8) = 1;
  }
  return;
}



//==== 0028a988  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1476_0028a988(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1476_0028a988(void)

{
  DAT_007aaf5c = 0x10000;
  return;
}



//==== 0028a9a0  ns=mobyupdate_unsorted  size=0x40
// sig: undefined UpdateMoby_1476(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1476 */

void mobyupdate_unsorted::UpdateMoby_1476(MobyInstance *moby)

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



//==== 0028a9f0  ns=mobyupdate_unsorted  size=0x10c0
// sig: undefined UpdateMoby_1479(MobyInstance * moby)
// callers(0): 
// callees(10): 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fea60 mobyutil::MB_randSphere; 001206e8 partupd::SpawnPart_2; 004fff60 fastfunc::FastDecTimerS32; 00500b64 fastfunc::FastEulerToMtx; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor; 00502910 fastfunc::FastCheckBsphereInView

/* Moby 1479 */

void mobyupdate_unsorted::UpdateMoby_1479(MobyInstance *moby)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined4 local_110 [4];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined4 local_90 [8];
  
  lVar4 = (longlong)(int)moby;
  bVar1 = moby->state;
  puVar2 = (undefined4 *)moby->pVar;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      moby->state = (char)*puVar2 + '\x01';
      fastfunc::FastEulerToMtx(lVar4 + 0xc0,lVar4 + 0x40);
    }
    else {
      iVar10 = fastfunc::FastCheckBsphereInView(0x405e000000000000,local_140);
      if (iVar10 != -1) {
        iVar10 = fastfunc::FastDecTimerS32(puVar2 + 0x30);
        if (iVar10 != 0) {
          dVar13 = (double)mobyutil::MB_randRangeFloat
                                     ((float)(longlong)DAT_007ab040,(float)(longlong)DAT_007ab044);
          uVar11 = fastfunc::FastDoubleToInt((double)(float)(dVar13 * (double)animationSpeed));
          puVar2[0x30] = uVar11;
          iVar12 = 1;
          iVar10 = mobyutil::MB_randInt(7);
          if (iVar10 == 0) {
            iVar12 = mobyutil::MB_randInt(5);
            iVar12 = iVar12 + 5;
          }
          iVar10 = 0;
          if (0 < iVar12) {
            dVar13 = 0.0;
            dVar16 = 1.0;
            do {
              mobyutil::MB_randSphere
                        (dVar13,(double)(DAT_007ab010 * mobyutil::g_FrameTime),local_110);
              mobyutil::MB_randRangeFloat(-DAT_007ab00c,DAT_007ab00c);
              mobyutil::MB_randRangeFloat(-DAT_007ab00c,DAT_007ab00c);
              mobyutil::MB_randRangeFloat(DAT_007ab020,DAT_007ab024);
              mobyutil::MB_randRangeFloat(DAT_007ab028,DAT_007ab02c);
              uVar3 = DAT_007ab034;
              uVar11 = DAT_007ab030;
              mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar16);
              uVar5 = fastfunc::FastLerpColor(uVar11,uVar3);
              uVar3 = DAT_007ab03c;
              uVar11 = DAT_007ab038;
              mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar16);
              uVar6 = fastfunc::FastLerpColor(uVar11,uVar3);
              dVar14 = (double)mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar16);
              uVar7 = fastfunc::FastDoubleToInt
                                ((double)(animationSpeed *
                                         (float)((double)(longlong)DAT_00fada00 * dVar14 + dVar16)))
              ;
              dVar15 = (double)(longlong)DAT_007ab014;
              dVar14 = (double)mobyutil::MB_randRangeFloat(-DAT_007ab01c,DAT_007ab01c);
              uVar8 = fastfunc::FastDoubleToInt
                                ((double)(animationSpeed *
                                         (float)(dVar15 * (double)(float)(dVar14 + dVar16))));
              dVar15 = (double)(longlong)DAT_007ab018;
              dVar14 = (double)mobyutil::MB_randRangeFloat(-DAT_007ab01c,DAT_007ab01c);
              uVar9 = fastfunc::FastDoubleToInt
                                ((double)(animationSpeed *
                                         (float)(dVar15 * (double)(float)(dVar14 + dVar16))));
              partupd::SpawnPart_2(lVar4 + 0x10,local_130,local_120,uVar5,uVar6,uVar7,uVar8,uVar9);
              iVar10 = iVar10 + 1;
            } while (iVar10 < iVar12);
          }
        }
        iVar10 = mobyutil::MB_randInt(4);
        if (iVar10 == 0) {
          mobyutil::MB_randRangeFloat(-DAT_007aafcc,DAT_007aafcc);
          dVar16 = 1.0;
          dVar13 = 0.0;
          mobyutil::MB_randRangeFloat(-DAT_007aafcc,DAT_007aafcc);
          mobyutil::MB_randRangeFloat(-DAT_007aafc8,DAT_007aafc8);
          mobyutil::MB_randRangeFloat(DAT_007aafe0,DAT_007aafe4);
          mobyutil::MB_randRangeFloat(DAT_007aafe8,DAT_007aafec);
          uVar3 = DAT_007aaff4;
          uVar11 = DAT_007aaff0;
          mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar16);
          uVar5 = fastfunc::FastLerpColor(uVar11,uVar3);
          uVar3 = DAT_007aaffc;
          uVar11 = DAT_007aaff8;
          mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar16);
          uVar6 = fastfunc::FastLerpColor(uVar11,uVar3);
          dVar13 = (double)mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar16);
          uVar7 = fastfunc::FastDoubleToInt
                            ((double)(animationSpeed *
                                     (float)((double)(longlong)DAT_007aafd0 * dVar13 + dVar16)));
          dVar14 = (double)(longlong)DAT_007aafd4;
          dVar13 = (double)mobyutil::MB_randRangeFloat(-DAT_007aafdc,DAT_007aafdc);
          uVar8 = fastfunc::FastDoubleToInt
                            ((double)(animationSpeed *
                                     (float)(dVar14 * (double)(float)(dVar13 + dVar16))));
          dVar14 = (double)(longlong)DAT_007aafd8;
          dVar13 = (double)mobyutil::MB_randRangeFloat(-DAT_007aafdc,DAT_007aafdc);
          uVar9 = fastfunc::FastDoubleToInt
                            ((double)(animationSpeed *
                                     (float)(dVar14 * (double)(float)(dVar13 + dVar16))));
          partupd::SpawnPart_2(lVar4 + 0x10,local_100,local_f0,uVar5,uVar6,uVar7,uVar8,uVar9);
        }
      }
    }
  }
  else if (bVar1 < 3) {
    iVar10 = fastfunc::FastDecTimerS32(puVar2 + 0x31);
    if (iVar10 != 0) {
      if ((int)puVar2[0x32] < 0x15) {
        puVar2[0x32] = 0x1e;
        dVar13 = (double)mobyutil::MB_randRangeFloat(120.0,180.0);
        uVar11 = fastfunc::FastDoubleToInt((double)(float)(dVar13 * (double)animationSpeed));
        puVar2[0x31] = uVar11;
      }
      else {
        puVar2[0x32] = 10;
        dVar13 = (double)mobyutil::MB_randRangeFloat(120.0,180.0);
        uVar11 = fastfunc::FastDoubleToInt((double)(float)(dVar13 * (double)animationSpeed));
        puVar2[0x31] = uVar11;
      }
    }
    iVar10 = fastfunc::FastCheckBsphereInView(0x405e000000000000,local_e0);
    if ((iVar10 != -1) || (iVar10 = mobyutil::MB_randInt(4), iVar10 == 0)) {
      iVar10 = fastfunc::FastDecTimerS32(puVar2 + 0x30);
      if (iVar10 != 0) {
        dVar13 = (double)mobyutil::MB_randRangeFloat
                                   ((float)(longlong)DAT_007ab090,(float)(longlong)DAT_007ab094);
        uVar11 = fastfunc::FastDoubleToInt((double)(float)(dVar13 * (double)animationSpeed));
        puVar2[0x30] = uVar11;
        iVar12 = 1;
        iVar10 = mobyutil::MB_randInt(7);
        if (iVar10 == 0) {
          iVar12 = mobyutil::MB_randInt(5);
          iVar12 = iVar12 + 5;
        }
        iVar10 = 0;
        if (0 < iVar12) {
          dVar13 = 0.0;
          dVar16 = 1.0;
          do {
            mobyutil::MB_randSphere(dVar13,(double)(DAT_007ab05c * mobyutil::g_FrameTime),local_90);
            mobyutil::MB_randRangeFloat(-DAT_007ab058,DAT_007ab058);
            mobyutil::MB_randRangeFloat(-DAT_007ab058,DAT_007ab058);
            mobyutil::MB_randRangeFloat(DAT_007ab070,DAT_007ab074);
            mobyutil::MB_randRangeFloat(DAT_007ab078,DAT_007ab07c);
            uVar3 = DAT_007ab084;
            uVar11 = DAT_007ab080;
            mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar16);
            uVar5 = fastfunc::FastLerpColor(uVar11,uVar3);
            uVar3 = DAT_007ab08c;
            uVar11 = DAT_007ab088;
            mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar16);
            uVar6 = fastfunc::FastLerpColor(uVar11,uVar3);
            dVar14 = (double)mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar16);
            uVar7 = fastfunc::FastDoubleToInt
                              ((double)(animationSpeed *
                                       (float)((double)(longlong)DAT_007ab060 * dVar14 + dVar16)));
            dVar15 = (double)(longlong)DAT_007ab064;
            dVar14 = (double)mobyutil::MB_randRangeFloat(-DAT_007ab06c,DAT_007ab06c);
            uVar8 = fastfunc::FastDoubleToInt
                              ((double)(animationSpeed *
                                       (float)(dVar15 * (double)(float)(dVar14 + dVar16))));
            dVar15 = (double)(longlong)DAT_007ab068;
            dVar14 = (double)mobyutil::MB_randRangeFloat(-DAT_007ab06c,DAT_007ab06c);
            uVar9 = fastfunc::FastDoubleToInt
                              ((double)(animationSpeed *
                                       (float)(dVar15 * (double)(float)(dVar14 + dVar16))));
            partupd::SpawnPart_2(lVar4 + 0x10,local_b0,local_a0,uVar5,uVar6,uVar7,uVar8,uVar9);
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar12);
        }
      }
      mobyutil::MB_randRangeFloat(-DAT_007aaf8c,DAT_007aaf8c);
      dVar16 = 1.0;
      dVar13 = 0.0;
      mobyutil::MB_randRangeFloat(-DAT_007aaf8c,DAT_007aaf8c);
      mobyutil::MB_randRangeFloat(-DAT_007aaf88,DAT_007aaf88);
      mobyutil::MB_randRangeFloat(DAT_007aafa0,DAT_007aafa4);
      mobyutil::MB_randRangeFloat(DAT_007aafa8,DAT_007aafac);
      uVar3 = DAT_007aafb4;
      uVar11 = DAT_007aafb0;
      mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar16);
      uVar5 = fastfunc::FastLerpColor(uVar11,uVar3);
      uVar3 = DAT_007aafbc;
      uVar11 = DAT_007aafb8;
      mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar16);
      uVar6 = fastfunc::FastLerpColor(uVar11,uVar3);
      dVar13 = (double)mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar16);
      uVar7 = fastfunc::FastDoubleToInt
                        ((double)(animationSpeed *
                                 (float)((double)(longlong)(int)puVar2[0x32] * dVar13 + dVar16)));
      dVar14 = (double)(longlong)DAT_007aaf94;
      dVar13 = (double)mobyutil::MB_randRangeFloat(-DAT_007aaf9c,DAT_007aaf9c);
      uVar8 = fastfunc::FastDoubleToInt
                        ((double)(animationSpeed *
                                 (float)(dVar14 * (double)(float)(dVar13 + dVar16))));
      dVar14 = (double)(longlong)DAT_007aaf98;
      dVar13 = (double)mobyutil::MB_randRangeFloat(-DAT_007aaf9c,DAT_007aaf9c);
      uVar9 = fastfunc::FastDoubleToInt
                        ((double)(animationSpeed *
                                 (float)(dVar14 * (double)(float)(dVar13 + dVar16))));
      partupd::SpawnPart_2(lVar4 + 0x10,local_d0,local_c0,uVar5,uVar6,uVar7,uVar8,uVar9);
    }
  }
  else if (bVar1 < 4) {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 0028bac0  ns=mobyupdate_helpers  size=0x448
// sig: undefined M1479_0028bac0(void)
// callers(0): 
// callees(7): 000fcbe8 mobyutil::MB_randRangeFloat; 000fea60 mobyutil::MB_randSphere; 001206e8 partupd::SpawnPart_2; 004fffb4 fastfunc::FastDecTimerS16; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor; 00502910 fastfunc::FastCheckBsphereInView

void mobyupdate_helpers::M1479_0028bac0
               (int param_1,undefined8 param_2,undefined8 param_3,undefined2 *param_4,short *param_5
               )

{
  undefined4 uVar1;
  undefined4 uVar2;
  short sVar9;
  int iVar8;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined2 uVar10;
  double dVar11;
  double dVar12;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 auStack_70 [32];
  
  if (*param_5 < 0) {
    sVar9 = *param_5 + 1;
    *param_5 = sVar9;
    if (sVar9 != 0) {
      return;
    }
    mobyutil::MB_randRangeFloat((float)(longlong)DAT_007ab0e0,(float)(longlong)DAT_007ab0e4);
    sVar9 = fastfunc::FastDoubleToInt();
    *param_5 = sVar9;
    dVar11 = (double)mobyutil::MB_randRangeFloat(0.0,1.0);
    *(float *)(param_1 + 0xc) = (float)dVar11;
  }
  else {
    iVar8 = fastfunc::FastDecTimerS16(param_5);
    if (iVar8 != 0) {
      mobyutil::MB_randRangeFloat((float)(longlong)DAT_007ab0e8,(float)(longlong)DAT_007ab0ec);
      sVar9 = fastfunc::FastDoubleToInt();
      *param_5 = -sVar9;
      return;
    }
  }
  iVar8 = fastfunc::FastCheckBsphereInView(0x4040000000000000,local_90);
  if ((iVar8 != -1) && (iVar8 = fastfunc::FastDecTimerS16(param_4), iVar8 != 0)) {
    dVar12 = 1.0;
    dVar11 = (double)mobyutil::MB_randRangeFloat(1.0 - DAT_007ab0c4,DAT_007ab0c4 + 1.0);
    uVar3 = fastfunc::FastDoubleToInt((double)(float)((double)(longlong)DAT_007ab0b8 * dVar11));
    uVar4 = fastfunc::FastDoubleToInt((double)(float)((double)(longlong)DAT_007ab0bc * dVar11));
    uVar5 = fastfunc::FastDoubleToInt((double)(float)((double)(longlong)DAT_007ab0c0 * dVar11));
    dVar11 = 0.0;
    mobyutil::MB_randSphere(0,(double)(DAT_007ab0a4 * mobyutil::g_FrameTime),auStack_70);
    mobyutil::MB_randRangeFloat(DAT_007ab0a8,DAT_007ab0ac);
    mobyutil::MB_randRangeFloat(DAT_007ab0b0,DAT_007ab0b4);
    uVar2 = DAT_007ab0cc;
    uVar1 = DAT_007ab0c8;
    mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar12);
    uVar6 = fastfunc::FastLerpColor(uVar1,uVar2);
    uVar2 = DAT_007ab0d4;
    uVar1 = DAT_007ab0d0;
    mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar12);
    uVar7 = fastfunc::FastLerpColor(uVar1,uVar2);
    partupd::SpawnPart_2(local_a0,local_80,auStack_70,uVar6,uVar7,uVar3,uVar4,uVar5);
    mobyutil::MB_randRangeFloat((float)(longlong)DAT_007ab0d8,(float)(longlong)DAT_007ab0dc);
    uVar10 = fastfunc::FastDoubleToInt();
    *param_4 = uVar10;
  }
  return;
}



//==== 0028bf80  ns=mobyupdate_unsorted  size=0xc00
// sig: undefined UpdateMoby_{148_255}(MobyInstance * moby)
// callers(0): 
// callees(12): 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fe484 mobyutil::MB_randRange; 00106738 mobyutil::TweenColor; 0010e030 mobyutil::MB_genericExplosion; 00125350 partupd::SpawnPart_16; 00425540 FUN_00425540; 00502a64 fastfunc::FastVecSub; 00502b08 fastfunc::FastVecAddSelf

/* Moby 148
   Moby 255 */

void mobyupdate_unsorted::UpdateMoby__148_255_(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  f32 fVar4;
  float fVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  char cVar8;
  ulonglong uVar9;
  longlong lVar10;
  CollDamageOut *pCVar12;
  longlong lVar11;
  int iVar13;
  int iVar14;
  CollDamageOut *pCVar16;
  ulonglong uVar15;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  longlong lVar17;
  ulonglong unaff_r25;
  longlong lVar18;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  longlong lVar19;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  ulonglong in_f14;
  double dVar32;
  ulonglong in_f15;
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
  undefined8 uVar38;
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
  
  lVar10 = (longlong)(int)moby;
  uVar9 = ZEXT48(&stack0x00000000);
  puVar7 = (ulonglong *)(uVar9 - 0x2b0);
  *puVar7 = uVar9;
  puVar7[0x58] = in_LR;
  puVar7[0x44] = in_f14;
  puVar7[0x45] = in_f15;
  puVar7[0x46] = in_f16;
  puVar7[0x47] = in_f17;
  puVar7[0x48] = in_f18;
  puVar7[0x49] = in_f19;
  puVar7[0x4a] = in_f20;
  puVar7[0x4b] = in_f21;
  puVar7[0x4c] = in_f22;
  puVar7[0x4d] = in_f23;
  puVar7[0x4e] = in_f24;
  puVar7[0x4f] = in_f25;
  puVar7[0x50] = in_f26;
  puVar7[0x51] = in_f27;
  puVar7[0x52] = in_f28;
  puVar7[0x53] = in_f29;
  puVar7[0x54] = in_f30;
  puVar7[0x55] = in_f31;
  puVar7[0x43] = unaff_r31;
  cVar8 = g_heroType;
  puVar7[0x42] = unaff_r30;
  puVar7[0x41] = unaff_r29;
  puVar7[0x40] = unaff_r28;
  puVar7[0x3f] = unaff_r27;
  puVar7[0x3e] = unaff_r26;
  puVar7[0x3d] = unaff_r25;
  puVar7[0x3c] = unaff_r24;
  puVar7[0x3b] = unaff_r23;
  puVar7[0x3a] = unaff_r22;
  puVar7[0x39] = unaff_r21;
  puVar7[0x38] = unaff_r20;
  if ((cVar8 == '\x02') || (moby->state != '\x01')) {
    iVar13 = 0;
    pCVar16 = CollDamage;
    do {
      pCVar12 = pCVar16;
      if ((pCVar12->pVictimMoby == moby) && ((pCVar12->damageFlags & 0x80000) != 0)) break;
      iVar13 = iVar13 + 1;
      pCVar16 = pCVar12 + 1;
      pCVar12 = (CollDamageOut *)0x0;
    } while (iVar13 < 0x40);
    if (pCVar12 == (CollDamageOut *)0x0) {
      moby->damage = -1;
      if (moby->state == '\0') {
        moby->drawDistance = 0x80;
        moby->updateDistance = -1;
        moby->state = '\x01';
        iVar13 = Level * 0x100;
        moby->scale = moby->scale * 2.0;
        if ((*(uint *)(&DAT_00a0cd1c + iVar13 + (int)((longlong)((int)(short)moby->uid >> 5) << 2))
            & 1 << (moby->uid & 0x1f)) != 0 && g_SeenPlanets.Kalebo != 0) {
          mobyfunc::DeleteMoby(moby);
        }
      }
    }
    else {
      *(undefined4 *)((int)puVar7 + 0x18c) = 200;
      *(undefined4 *)(puVar7 + 0x32) = 0xcd;
      *(undefined4 *)((int)puVar7 + 0x194) = 0xce;
      *(undefined4 *)(puVar7 + 0x33) = 0xd2;
      moby->damage = -1;
      fVar1 = (pCVar12->impact).y;
      fVar2 = (pCVar12->impact).x;
      fVar3 = (pCVar12->impact).z;
      dVar48 = 0.0;
      fVar5 = mobyutil::g_FrameTime * 10.0;
      *(undefined4 *)((int)puVar7 + 0x1ac) = 0x41200000;
      fVar1 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      if (fVar1 == 0.0) {
        *(float *)(puVar7 + 0x1a) = fVar2;
        *(float *)((int)puVar7 + 0xd4) = (pCVar12->impact).y;
        *(float *)(puVar7 + 0x1b) = (pCVar12->impact).z;
        fVar1 = (pCVar12->impact).w;
        *(undefined4 *)(puVar7 + 0x1b) = 0;
        *(undefined4 *)((int)puVar7 + 0xd4) = 0;
        *(undefined4 *)(puVar7 + 0x1a) = 0;
        dVar32 = dVar48;
        dVar33 = dVar48;
        dVar34 = dVar48;
      }
      else {
        fVar5 = fVar5 / fVar1;
        dVar32 = (double)(fVar2 * fVar5);
        *(float *)(puVar7 + 0x1a) = fVar2 * fVar5;
        fVar1 = (pCVar12->impact).y * fVar5;
        dVar33 = (double)fVar1;
        *(float *)((int)puVar7 + 0xd4) = fVar1;
        fVar5 = (pCVar12->impact).z * fVar5;
        dVar34 = (double)fVar5;
        *(float *)(puVar7 + 0x1b) = fVar5;
        fVar1 = (pCVar12->impact).w;
      }
      *(float *)((int)puVar7 + 0xdc) = fVar1;
      *(float *)((int)puVar7 + 0xec) = fVar1;
      *(float *)(puVar7 + 0x1c) = (float)(dVar32 * 2.0);
      *(float *)((int)puVar7 + 0xe4) = (float)(dVar33 * 2.0);
      *(float *)(puVar7 + 0x1d) = (float)(dVar34 * 2.0);
      fVar1 = (pCVar12->ip_).y;
      fVar2 = (pCVar12->ip_).x;
      fVar3 = (pCVar12->ip_).z;
      *(undefined4 *)((int)puVar7 + 0x19c) = 0x40000000;
      if (SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) == 0.0) {
        *(f32 *)(puVar7 + 0x20) = (moby->pos).x;
        *(f32 *)((int)puVar7 + 0x104) = (moby->pos).y;
        fVar4 = (moby->pos).w;
        *(float *)(puVar7 + 0x21) = (moby->pos).z + 6.0;
      }
      else {
        *(float *)(puVar7 + 0x20) = fVar2;
        *(float *)((int)puVar7 + 0x104) = (pCVar12->ip_).y;
        *(float *)(puVar7 + 0x21) = (pCVar12->ip_).z;
        fVar4 = (pCVar12->ip_).w;
      }
      *(f32 *)((int)puVar7 + 0x10c) = fVar4;
      iVar13 = 0;
      lVar19 = uVar9 - 0x1c0;
      lVar18 = uVar9 - 0x1b0;
      lVar17 = uVar9 - 0x1f0;
      dVar35 = 0.5;
      dVar45 = 3.0;
      dVar39 = 3.141592502593994;
      dVar40 = -3.141592502593994;
      dVar41 = -0.16666656732559204;
      dVar42 = 0.008333025500178337;
      dVar43 = -0.0001980741071747616;
      dVar44 = 2.601886990305502e-06;
      dVar46 = 1.0;
      *(undefined4 *)(puVar7 + 0x35) = 0x3fc00000;
      puVar7[0x34] = 0x3ff921fb40000000;
      dVar47 = 7.0;
      dVar34 = 5.0;
      dVar32 = 0.75;
      dVar33 = 1.25;
      dVar36 = 0.10000000149011612;
      dVar37 = 0.30000001192092896;
      uVar38 = 0x3fc3333340000000;
      do {
        dVar20 = (double)mobyutil::MB_randRangeFloat((float)dVar35,*(float *)(puVar7 + 0x35));
        dVar21 = (double)mobyutil::MB_randRot();
        if (moby->oClass == 0x94) {
          dVar20 = (double)(float)(dVar20 * dVar45);
        }
        dVar24 = (double)(float)(dVar21 + (double)puVar7[0x34]);
        *(undefined4 *)(puVar7 + 0x1f) = 0;
        dVar25 = (double)(float)(dVar39 - dVar21);
        if (dVar21 - (double)(float)(dVar39 - dVar21) < 0.0) {
          dVar25 = dVar21;
        }
        dVar26 = (double)(float)(dVar39 - dVar24);
        if (dVar24 - (double)(float)(dVar39 - dVar24) < 0.0) {
          dVar26 = dVar24;
        }
        dVar27 = (double)(float)(dVar40 - dVar21);
        if ((double)(float)(dVar40 - dVar21) - dVar25 < 0.0) {
          dVar27 = dVar25;
        }
        dVar25 = (double)(float)(dVar27 * dVar27);
        dVar21 = (double)(float)(dVar40 - dVar24);
        if ((double)(float)(dVar40 - dVar24) - dVar26 < 0.0) {
          dVar21 = dVar26;
        }
        dVar26 = (double)(float)(dVar21 * dVar21);
        dVar28 = (double)(float)(dVar25 * (double)(float)(dVar25 * dVar27));
        dVar30 = (double)(float)(dVar25 * dVar28);
        dVar29 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar21));
        dVar24 = (double)(float)(dVar26 * dVar29);
        *(float *)((int)puVar7 + 0xf4) =
             (float)((double)(float)((double)(float)(dVar25 * dVar30) * dVar44 +
                                    (double)(float)(dVar30 * dVar43 +
                                                   (double)(float)(dVar28 * dVar42 +
                                                                  (double)(float)((double)(float)(
                                                  dVar25 * dVar27) * dVar41 + dVar27)))) * dVar20);
        *(float *)(puVar7 + 0x1e) =
             (float)((double)(float)((double)(float)(dVar26 * dVar24) * dVar44 +
                                    (double)(float)(dVar24 * dVar43 +
                                                   (double)(float)(dVar29 * dVar42 +
                                                                  (double)(float)((double)(float)(
                                                  dVar26 * dVar21) * dVar41 + dVar21)))) * dVar20);
        dVar20 = (double)mobyutil::MB_randRangeFloat((float)dVar46,(float)dVar47);
        *(float *)(puVar7 + 0x1f) = (float)dVar20;
        fastfunc::FastVecAddSelf(uVar9 - 0x1a0,lVar19,lVar10 + 0x10);
        fastfunc::FastVecSub(uVar9 - 400,lVar18,lVar19);
        fVar2 = *(float *)((int)puVar7 + 0x124);
        fVar3 = *(float *)(puVar7 + 0x24);
        fVar5 = *(float *)(puVar7 + 0x25);
        dVar20 = (double)mobyutil::g_FrameTime;
        *(float *)(puVar7 + 0x18) = fVar3;
        *(float *)((int)puVar7 + 0xc4) = fVar2;
        *(float *)(puVar7 + 0x19) = fVar5;
        *(undefined4 *)((int)puVar7 + 0xcc) = *(undefined4 *)((int)puVar7 + 300);
        dVar21 = (double)SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2);
        fVar1 = (float)((double)(float)(dVar20 * dVar34) / dVar21);
        dVar20 = dVar48;
        if (dVar48 - dVar21 < 0.0) {
          dVar20 = (double)(fVar3 * fVar1);
        }
        dVar25 = dVar48;
        if (dVar48 - dVar21 < 0.0) {
          dVar25 = (double)(fVar2 * fVar1);
        }
        dVar24 = dVar48;
        if (dVar48 - dVar21 < 0.0) {
          dVar24 = (double)(fVar5 * fVar1);
        }
        if (dVar21 - dVar48 < 0.0) {
          dVar20 = (double)(fVar3 * fVar1);
        }
        if (dVar21 - dVar48 < 0.0) {
          dVar25 = (double)(fVar2 * fVar1);
        }
        if (dVar21 - dVar48 < 0.0) {
          dVar24 = (double)(fVar5 * fVar1);
        }
        *(float *)(puVar7 + 0x18) = (float)dVar20;
        *(float *)((int)puVar7 + 0xc4) = (float)dVar25;
        *(float *)(puVar7 + 0x19) = (float)dVar24;
        fastfunc::FastVecAddSelf(uVar9 - 0x180,lVar17,uVar9 - 0x1d0);
        *(float *)(puVar7 + 0x19) =
             (float)((double)mobyutil::g_FrameTime * dVar45 + (double)*(float *)(puVar7 + 0x19));
        dVar20 = (double)mobyutil::MB_randRangeFloat((float)dVar32,(float)dVar33);
        *(float *)(puVar7 + 0x18) = (float)((double)*(float *)(puVar7 + 0x18) * dVar20);
        *(float *)((int)puVar7 + 0xc4) = (float)((double)*(float *)((int)puVar7 + 0xc4) * dVar20);
        *(float *)(puVar7 + 0x19) = (float)((double)*(float *)(puVar7 + 0x19) * dVar20);
        lVar11 = mobyutil::MB_randInt(4);
        uVar6 = *(undefined4 *)((int)puVar7 + (int)(lVar11 << 2) + 0x18c);
        uVar22 = mobyutil::MB_randRangeFloat((float)dVar36,(float)dVar37);
        mobyutil::MB_randRange(0x3c,100);
        uVar23 = mobyutil::MB_randRangeFloat((float)dVar45,(float)dVar47);
        *(undefined4 *)(puVar7 + 6) = *(undefined4 *)(puVar7 + 0x1e);
        *(undefined4 *)(puVar7 + 7) = *(undefined4 *)(puVar7 + 0x1f);
        *(undefined4 *)(puVar7 + 8) = *(undefined4 *)(puVar7 + 0x18);
        *(undefined4 *)(puVar7 + 9) = *(undefined4 *)(puVar7 + 0x19);
        *(undefined4 *)((int)puVar7 + 0x34) = *(undefined4 *)((int)puVar7 + 0xf4);
        *(undefined4 *)((int)puVar7 + 0x3c) = *(undefined4 *)((int)puVar7 + 0xfc);
        *(undefined4 *)((int)puVar7 + 0x44) = *(undefined4 *)((int)puVar7 + 0xc4);
        *(undefined4 *)((int)puVar7 + 0x4c) = *(undefined4 *)((int)puVar7 + 0xcc);
        puVar7[0x10] = 1;
        FUN_00425540(uVar22,uVar23,uVar38,(double)*(float *)((int)puVar7 + 0x19c),puVar7[6],
                     puVar7[7],puVar7[8],puVar7[9],uVar6);
        iVar13 = iVar13 + 1;
      } while (iVar13 < 0x19);
      dVar36 = (double)*(float *)((int)puVar7 + 0x1ac);
      if (moby->oClass == 0x94) {
        *(f32 *)(puVar7 + 0x1e) = (moby->pos).x;
        *(f32 *)((int)puVar7 + 0xf4) = (moby->pos).y;
        fVar1 = (moby->pos).z;
        dVar20 = (double)*(float *)((int)puVar7 + 0x19c);
        *(f32 *)((int)puVar7 + 0xfc) = (moby->pos).w;
        *(float *)(puVar7 + 0x1f) = (float)((double)fVar1 + dVar36);
        fastfunc::FastVecSub(uVar9 - 0x170,lVar18,lVar19);
        fVar2 = *(float *)((int)puVar7 + 0x144);
        fVar3 = *(float *)(puVar7 + 0x28);
        fVar5 = *(float *)(puVar7 + 0x29);
        dVar37 = (double)mobyutil::g_FrameTime;
        *(float *)(puVar7 + 0x18) = fVar3;
        *(float *)((int)puVar7 + 0xc4) = fVar2;
        *(float *)(puVar7 + 0x19) = fVar5;
        *(undefined4 *)((int)puVar7 + 0xcc) = *(undefined4 *)((int)puVar7 + 0x14c);
        dVar47 = (double)SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2);
        fVar1 = (float)((double)(float)(dVar37 * dVar34) / dVar47);
        dVar37 = dVar48;
        if (dVar48 - dVar47 < 0.0) {
          dVar37 = (double)(fVar3 * fVar1);
        }
        dVar21 = dVar48;
        if (dVar48 - dVar47 < 0.0) {
          dVar21 = (double)(fVar2 * fVar1);
        }
        dVar25 = dVar48;
        if (dVar48 - dVar47 < 0.0) {
          dVar25 = (double)(fVar5 * fVar1);
        }
        if (dVar47 - dVar48 < 0.0) {
          dVar37 = (double)(fVar3 * fVar1);
        }
        if (dVar47 - dVar48 < 0.0) {
          dVar21 = (double)(fVar2 * fVar1);
        }
        if (dVar47 - dVar48 < 0.0) {
          dVar25 = (double)(fVar5 * fVar1);
        }
        *(float *)(puVar7 + 0x18) = (float)dVar37;
        *(float *)((int)puVar7 + 0xc4) = (float)dVar21;
        *(float *)(puVar7 + 0x19) = (float)dVar25;
        fastfunc::FastVecAddSelf(uVar9 - 0x160,lVar17,uVar9 - 0x1d0);
        *(float *)(puVar7 + 0x19) =
             (float)((double)mobyutil::g_FrameTime * dVar45 + (double)*(float *)(puVar7 + 0x19));
        dVar37 = (double)mobyutil::MB_randRangeFloat((float)dVar32,(float)dVar33);
        *(float *)(puVar7 + 0x18) = (float)((double)*(float *)(puVar7 + 0x18) * dVar37);
        *(float *)((int)puVar7 + 0xc4) = (float)((double)*(float *)((int)puVar7 + 0xc4) * dVar37);
        *(float *)(puVar7 + 0x19) = (float)((double)*(float *)(puVar7 + 0x19) * dVar37);
        mobyutil::MB_randRange(0x3c,100);
        *(undefined4 *)(puVar7 + 6) = *(undefined4 *)(puVar7 + 0x1e);
        *(undefined4 *)(puVar7 + 7) = *(undefined4 *)(puVar7 + 0x1f);
        *(undefined4 *)(puVar7 + 8) = *(undefined4 *)(puVar7 + 0x18);
        *(undefined4 *)(puVar7 + 9) = *(undefined4 *)(puVar7 + 0x19);
        *(undefined4 *)((int)puVar7 + 0x34) = *(undefined4 *)((int)puVar7 + 0xf4);
        *(undefined4 *)((int)puVar7 + 0x3c) = *(undefined4 *)((int)puVar7 + 0xfc);
        *(undefined4 *)((int)puVar7 + 0x44) = *(undefined4 *)((int)puVar7 + 0xc4);
        *(undefined4 *)((int)puVar7 + 0x4c) = *(undefined4 *)((int)puVar7 + 0xcc);
        puVar7[0x10] = 1;
        iVar13 = FUN_00425540(dVar46,dVar34,dVar46,dVar20,puVar7[6],puVar7[7],puVar7[8],puVar7[9],
                              0xc9);
        if (iVar13 != 0) {
          *(float *)(iVar13 + 0x40) = *(float *)(iVar13 + 0x40) * 0.35;
          *(float *)(iVar13 + 0x44) = *(float *)(iVar13 + 0x44) * 0.35;
          *(float *)(iVar13 + 0x48) = *(float *)(iVar13 + 0x48) * 0.35;
        }
      }
      *(undefined4 *)((int)puVar7 + 0xcc) = 0;
      *(undefined4 *)(puVar7 + 0x19) = 0;
      *(undefined4 *)((int)puVar7 + 0xc4) = 0;
      *(undefined4 *)(puVar7 + 0x18) = 0;
      puVar7[0x12] = 0;
      puVar7[0x14] = 1;
      puVar7[0x15] = 1;
      puVar7[0x16] = 0xffffffffffffffff;
      puVar7[0x17] = 0;
      mobyutil::MB_genericExplosion
                (dVar48,dVar48,dVar36,dVar34,0x40f86a0000000000,dVar45,0x402e000000000000,lVar10,
                 lVar17,lVar18);
      dVar36 = 5.5;
      iVar13 = 0;
      dVar37 = 0.25;
      dVar47 = 210000.0;
      dVar20 = 180.5;
      do {
        *(undefined4 *)(puVar7 + 0x30) = 0;
        *(undefined4 *)((int)puVar7 + 0x184) = 1;
        *(undefined4 *)(puVar7 + 0x31) = 2;
        dVar21 = (double)mobyutil::MB_randRangeFloat((float)dVar48,*(float *)(puVar7 + 0x35));
        dVar25 = (double)mobyutil::MB_randRot();
        fVar1 = (moby->pos).x;
        fVar2 = (moby->pos).y;
        if (moby->oClass == 0x94) {
          dVar21 = (double)(float)(dVar21 * dVar45);
        }
        dVar26 = (double)(float)(dVar25 + (double)puVar7[0x34]);
        *(f32 *)(puVar7 + 0x1f) = (moby->pos).z;
        dVar24 = (double)(float)(dVar39 - dVar25);
        if (dVar25 - (double)(float)(dVar39 - dVar25) < 0.0) {
          dVar24 = dVar25;
        }
        dVar27 = (double)(float)(dVar39 - dVar26);
        if (dVar26 - (double)(float)(dVar39 - dVar26) < 0.0) {
          dVar27 = dVar26;
        }
        dVar28 = (double)(float)(dVar40 - dVar25);
        if ((double)(float)(dVar40 - dVar25) - dVar24 < 0.0) {
          dVar28 = dVar24;
        }
        dVar24 = (double)(float)(dVar28 * dVar28);
        dVar25 = (double)(float)(dVar40 - dVar26);
        if ((double)(float)(dVar40 - dVar26) - dVar27 < 0.0) {
          dVar25 = dVar27;
        }
        dVar27 = (double)(float)(dVar25 * dVar25);
        dVar29 = (double)(float)(dVar24 * (double)(float)(dVar24 * dVar28));
        dVar31 = (double)(float)(dVar24 * dVar29);
        dVar30 = (double)(float)(dVar27 * (double)(float)(dVar27 * dVar25));
        dVar26 = (double)(float)(dVar27 * dVar30);
        *(float *)((int)puVar7 + 0xf4) =
             (float)((double)(float)((double)(float)(dVar24 * dVar31) * dVar44 +
                                    (double)(float)(dVar31 * dVar43 +
                                                   (double)(float)(dVar29 * dVar42 +
                                                                  (double)(float)((double)(float)(
                                                  dVar24 * dVar28) * dVar41 + dVar28)))) * dVar21 +
                    (double)fVar2);
        *(float *)(puVar7 + 0x1e) =
             (float)((double)(float)((double)(float)(dVar27 * dVar26) * dVar44 +
                                    (double)(float)(dVar26 * dVar43 +
                                                   (double)(float)(dVar30 * dVar42 +
                                                                  (double)(float)((double)(float)(
                                                  dVar27 * dVar25) * dVar41 + dVar25)))) * dVar21 +
                    (double)fVar1);
        dVar21 = (double)mobyutil::MB_randRangeFloat((float)dVar46,(float)dVar36);
        *(float *)(puVar7 + 0x1f) = (float)((double)*(float *)(puVar7 + 0x1f) + dVar21);
        fastfunc::FastVecSub(uVar9 - 0x150,lVar18,lVar19);
        fVar2 = *(float *)((int)puVar7 + 0x164);
        fVar3 = *(float *)(puVar7 + 0x2c);
        fVar5 = *(float *)(puVar7 + 0x2d);
        dVar21 = (double)mobyutil::g_FrameTime;
        *(float *)(puVar7 + 0x18) = fVar3;
        *(float *)((int)puVar7 + 0xc4) = fVar2;
        *(float *)(puVar7 + 0x19) = fVar5;
        *(undefined4 *)((int)puVar7 + 0xcc) = *(undefined4 *)((int)puVar7 + 0x16c);
        dVar25 = (double)SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2);
        fVar1 = (float)((double)(float)(dVar21 * dVar34) / dVar25);
        dVar21 = dVar48;
        if (dVar48 - dVar25 < 0.0) {
          dVar21 = (double)(fVar3 * fVar1);
        }
        dVar24 = dVar48;
        if (dVar48 - dVar25 < 0.0) {
          dVar24 = (double)(fVar2 * fVar1);
        }
        dVar26 = dVar48;
        if (dVar48 - dVar25 < 0.0) {
          dVar26 = (double)(fVar5 * fVar1);
        }
        if (dVar25 - dVar48 < 0.0) {
          dVar21 = (double)(fVar3 * fVar1);
        }
        if (dVar25 - dVar48 < 0.0) {
          dVar24 = (double)(fVar2 * fVar1);
        }
        if (dVar25 - dVar48 < 0.0) {
          dVar26 = (double)(fVar5 * fVar1);
        }
        *(float *)(puVar7 + 0x18) = (float)dVar21;
        *(float *)((int)puVar7 + 0xc4) = (float)dVar24;
        *(float *)(puVar7 + 0x19) = (float)dVar26;
        fastfunc::FastVecAddSelf(uVar9 - 0x140,lVar17,uVar9 - 0x1e0);
        dVar21 = (double)mobyutil::MB_randRangeFloat((float)dVar32,(float)dVar33);
        *(float *)(puVar7 + 0x18) = (float)((double)*(float *)(puVar7 + 0x18) * dVar21);
        *(float *)((int)puVar7 + 0xc4) = (float)((double)*(float *)((int)puVar7 + 0xc4) * dVar21);
        *(float *)(puVar7 + 0x19) = (float)((double)*(float *)(puVar7 + 0x19) * dVar21);
        dVar21 = (double)mobyutil::MB_randRangeFloat((float)dVar37,(float)dVar46);
        uVar38 = 0x7f000000;
        mobyutil::TweenColor((float)dVar21,0x7f000000,0x7f182030);
        dVar21 = (double)mobyutil::MB_randRangeFloat((float)dVar35,(float)dVar46);
        uVar22 = 0;
        mobyutil::TweenColor((float)dVar21,0,0x5f5f5f);
        dVar21 = (double)mobyutil::MB_randRangeFloat((float)dVar46,(float)dVar45);
        dVar21 = (double)(float)(dVar21 * dVar47);
        puVar7[0x36] = (longlong)(int)((double)animationSpeed * dVar20);
        uVar6 = *(undefined4 *)((int)puVar7 + 0x1b4);
        lVar11 = mobyutil::MB_randInt(3);
        uVar15 = lVar11 * 4 + (uVar9 - 0x2b0);
        iVar14 = partupd::SpawnPart_16
                           (dVar21,lVar19,lVar17,uVar38,uVar22,uVar15 & 0xffffffff,uVar6,
                            *(undefined4 *)((int)uVar15 + 0x180));
        if (iVar14 != 0) {
          *(float *)(iVar14 + 0x2c) = (float)((double)(moby->pos).z - dVar35);
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < 0x14);
      mobyutil::MB_SpawnBoltsFromCrate(lVar10,0,0xffffffffffffffff);
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 0028cb80  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1481_0028cb80(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1481_0028cb80(void)

{
  DAT_007ab13c = 0x10000;
  return;
}



//==== 0028cb98  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1481(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1481 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1481(MobyInstance *moby)

{
  return moby;
}



//==== 0028cba8  ns=mobyupdate_unsorted  size=0x128
// sig: undefined UpdateMoby_1488(MobyInstance * moby)
// callers(0): 
// callees(2): 0011a560 mobyutil::MB_SpawnDebrisMoby; 00500b64 fastfunc::FastEulerToMtx

/* Moby 1488 */

void mobyupdate_unsorted::UpdateMoby_1488(MobyInstance *moby)

{
  longlong lVar1;
  undefined8 in_r9;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar1 = (longlong)(int)moby;
  if (moby->state == 0) {
    if (DAT_00fada10 != 0) {
      fastfunc::FastEulerToMtx(lVar1 + 0xc0,lVar1 + 0x40);
      moby->state = '\x01';
      DAT_00fada10 = 0;
    }
  }
  else if (moby->state < 2) {
    iVar2 = 0;
    uVar5 = 0;
    puVar3 = &DAT_007ab170;
    puVar4 = &DAT_00fada20;
    do {
      mobyutil::MB_SpawnDebrisMoby(uVar5,lVar1,0x5df,puVar3,puVar4,0,0,in_r9,&DAT_00a15d30);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 0x10;
      puVar4 = puVar4 + 0x10;
    } while (iVar2 < 4);
    moby->state = '\0';
  }
  return;
}



//==== 0028cce0  ns=mobyupdate_helpers  size=0x22c
// sig: undefined M1488_0028cce0(void)
// callers(5): 002a0108 mobyupdate_helpers::M158_002a0108; 002ad118 mobyupdate_helpers::M170_002ad118; 003a5468 mobyupdate_helpers::M511_003a5468; 003ab4e8 mobyupdate_helpers::M520_003ab4e8; 00479fa8 mobyupdate_helpers::M827_00479fa8
// callees(5): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe4f0 mobyutil::MB_randRangeSigned

MobyInstance *
mobyupdate_helpers::M1488_0028cce0
          (double param_1,double param_2,int param_3,int *param_4,f32 *param_5,f32 *param_6,
          MOBY_OCLASSES param_7,undefined8 param_8,undefined8 param_9,undefined2 param_10)

{
  int *piVar1;
  undefined2 uVar2;
  MobyInstance *pMVar4;
  undefined8 uVar3;
  undefined8 in_LR;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  pMVar4 = mobyfunc::CreateMoby(param_7);
  if (pMVar4 != (MobyInstance *)0x0) {
    piVar1 = (int *)pMVar4->pVar;
    *piVar1 = param_3;
    pMVar4->updateDistance = -1;
    pMVar4->drawDistance = 0x7e;
    uVar3 = *(undefined8 *)(param_3 + 0x38);
    pMVar4->enabled = '\x01';
    pMVar4->color = (int)((ulonglong)uVar3 >> 0x20);
    pMVar4->light = (int)uVar3;
    pMVar4->state = '\0';
    dVar5 = (double)mobyutil::MB_randRot();
    (pMVar4->rotation).x = (float)dVar5;
    dVar5 = (double)mobyutil::MB_randRot();
    (pMVar4->rotation).y = (float)dVar5;
    dVar5 = (double)mobyutil::MB_randRot();
    (pMVar4->rotation).z = (float)dVar5;
    (pMVar4->pos).x = *param_5;
    (pMVar4->pos).y = param_5[1];
    auVar7 = ZEXT416(0xffffffff);
    auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    (pMVar4->pos).z = param_5[2];
    (pMVar4->pos).w = param_5[3];
    auVar8 = vectorShiftLeftIntegerWord(auVar7,auVar7);
    (pMVar4->rotation).x = *param_6;
    (pMVar4->rotation).y = param_6[1];
    (pMVar4->rotation).z = param_6[2];
    (pMVar4->rotation).w = param_6[3];
    piVar1[4] = *param_4;
    piVar1[5] = param_4[1];
    piVar1[6] = param_4[2];
    piVar1[7] = param_4[3];
    piVar1[1] = (int)(pMVar4->pos).z;
    auVar7 = loadVectorLeftIndexed(in_LR,0x28ccd0);
    auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar7 = vectorMultiplyAddFloatingPoint
                       (auVar9,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,auVar8);
    auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
    auVar7 = vectorSplatHalfWord(auVar7,1);
    uVar2 = storeVectorElementHalfWordIndexed(auVar7,0xe,ZEXT48(piVar1));
    *(undefined2 *)((int)piVar1 + 0xe) = uVar2;
    piVar1[8] = 0;
    dVar5 = (double)mobyutil::MB_randRangeSigned((double)DAT_00fada60,(double)DAT_007ab1b0);
    dVar6 = 0.01745329238474369;
    piVar1[9] = (int)((float)(dVar5 * 0.01745329238474369) * mobyutil::g_FrameTime);
    dVar5 = (double)mobyutil::MB_randRangeSigned((double)DAT_00fada60,(double)DAT_007ab1b0);
    piVar1[10] = (int)((float)(dVar5 * dVar6) * mobyutil::g_FrameTime);
    dVar5 = (double)mobyutil::MB_randRangeFloat((float)param_1,(float)param_2);
    pMVar4->scale = (float)((double)pMVar4->scale * dVar5);
    *(undefined2 *)(piVar1 + 3) = param_10;
    piVar1[2] = (int)(float)(dVar5 * 0.25);
    mobyfunc::UpdateMobyTransform(pMVar4);
  }
  return pMVar4;
}



//==== 0028cf20  ns=mobyupdate_unsorted  size=0x2c0
// sig: undefined UpdateMoby_a_lot_21(MobyInstance * moby)
// callers(0): 
// callees(6): 00059e20 collproc::CollSphere; 000efb38 mobyfunc::DeleteMoby; 000fe4f0 mobyutil::MB_randRangeSigned; 004fffb4 fastfunc::FastDecTimerS16; 00500608 fastfunc::FastVecNormalize; 00502578 fastfunc::FastWrapRot
// strings: 007ab1d0: '?fff' (raw)

/* Moby 149
   Moby 348
   Moby 349
   Moby 350
   Moby 354
   Moby 355
   Moby 356
   Moby 357
   Moby 358
   Moby 359
   Moby 363
   Moby 364
   Moby 365
   Moby 369
   Moby 370
   Moby 371 */

void mobyupdate_unsorted::UpdateMoby_a_lot_21(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  float fVar3;
  short sVar4;
  void *pvVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  
  pvVar5 = moby->pVar;
  *(float *)((int)pvVar5 + 0x18) = -(DAT_0071f418 * 20.0 - *(float *)((int)pvVar5 + 0x18));
  fVar3 = (moby->rotation).x;
  (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar5 + 0x10);
  (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar5 + 0x14);
  (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar5 + 0x18);
  dVar7 = (double)fastfunc::FastWrapRot(fVar3,*(float *)((int)pvVar5 + 0x20));
  (moby->rotation).x = (float)dVar7;
  dVar7 = (double)fastfunc::FastWrapRot((moby->rotation).y,*(float *)((int)pvVar5 + 0x24));
  (moby->rotation).y = (float)dVar7;
  dVar7 = (double)fastfunc::FastWrapRot((moby->rotation).z,*(float *)((int)pvVar5 + 0x28));
  bVar2 = moby->state;
  (moby->rotation).z = (float)dVar7;
  iVar6 = DAT_007ab1d4;
  if (bVar2 == 0) {
    if (*(float *)((int)pvVar5 + 4) - 3.0 <= (moby->pos).z) {
      iVar6 = fastfunc::FastDecTimerS16((int)pvVar5 + 0xe);
      if ((((iVar6 != 0) && (*(short *)((int)pvVar5 + 0xc) != 0)) &&
          (iVar6 = collproc::CollSphere
                             ((double)*(float *)((int)pvVar5 + 8),(longlong)(int)moby + 0x10),
          iVar6 != 0)) &&
         (*(float *)((int)pvVar5 + 0x18) * CollOutput.normal.z +
          *(float *)((int)pvVar5 + 0x10) * CollOutput.normal.x +
          *(float *)((int)pvVar5 + 0x14) * CollOutput.normal.y < 0.0)) {
        (moby->pos).x = CollOutput.push.x;
        sVar4 = *(short *)((int)pvVar5 + 0xc);
        (moby->pos).y = CollOutput.push.y;
        (moby->pos).z = CollOutput.push.z;
        fVar3 = CollOutput.push.w;
        *(short *)((int)pvVar5 + 0xc) = sVar4 + -1;
        (moby->pos).w = fVar3;
        fastfunc::FastVecNormalize((int)pvVar5 + 0x10,(int)pvVar5 + 0x10,0xa10980);
        *(undefined4 *)((int)pvVar5 + 0x20) = 0;
        *(float *)((int)pvVar5 + 0x10) = *(float *)((int)pvVar5 + 0x10) * 0.75;
        *(float *)((int)pvVar5 + 0x14) = *(float *)((int)pvVar5 + 0x14) * 0.75;
        *(float *)((int)pvVar5 + 0x18) = *(float *)((int)pvVar5 + 0x18) * 0.75;
        dVar7 = (double)mobyutil::MB_randRangeSigned((double)DAT_00fada60,(double)DAT_007ab1b0);
        dVar8 = 0.01745329238474369;
        *(float *)((int)pvVar5 + 0x24) =
             (float)(dVar7 * 0.01745329238474369) * mobyutil::g_FrameTime;
        dVar7 = (double)mobyutil::MB_randRangeSigned((double)DAT_00fada60,(double)DAT_007ab1b0);
        *(float *)((int)pvVar5 + 0x28) = (float)(dVar7 * dVar8) * mobyutil::g_FrameTime;
      }
    }
    else {
      moby->state = '\x01';
    }
  }
  else if (bVar2 < 2) {
    bVar1 = (int)(uint)(byte)moby->alpha < DAT_007ab1d4;
    moby->scale = moby->scale * DAT_007ab1d0;
    if (bVar1) {
      mobyfunc::DeleteMoby(moby);
    }
    else {
      moby->alpha = moby->alpha - (char)iVar6;
    }
  }
  return;
}



//==== 0028d1f8  ns=mobyupdate_unsorted  size=0x784
// sig: undefined UpdateMoby_a_lot_8(MobyInstance * moby)
// callers(0): 
// callees(12): 00059e20 collproc::CollSphere; 000efb38 mobyfunc::DeleteMoby; 0010c038 mobyutil::MB_AxisAngleToQuat; 0010c1e8 mobyutil::MB_MtxToEuler; 0010e030 mobyutil::MB_genericExplosion; 00110040 mobyutil::MB_SpawnExplosionSparks2; 004fff60 fastfunc::FastDecTimerS32; 00500608 fastfunc::FastVecNormalize; 00500b64 fastfunc::FastEulerToMtx; 005014d4 fastfunc::FastVecMtx4MultBatch3; 00501e18 fastfunc::FastQuaternionToMtx4Identity; 00502758 fastfunc::FastDoubleToInt

/* Moby 1503
   Moby 1505
   Moby 1506
   Moby 1507
   Moby 1508
   Moby 1517
   Moby 1518
   Moby 1522
   Moby 1525
   Moby 1526
   Moby 1528
   Moby 1529
   Moby 1533
   Moby 1534
   Moby 1537
   Moby 1538
   Moby 1539
   Moby 1569
   Moby 1570
   Moby 1571
   Moby 1572
   Moby 1588
   Moby 1589
   Moby 1590
   Moby 1591
   Moby 1592
   Moby 1593
   Moby 1594
   Moby 1595
   Moby 1596
   Moby 1597
   Moby 1598
   Moby 1599
   Moby 1601
   Moby 1602
   Moby 1603
   Moby 1604
   Moby 1605
   Moby 1606
   Moby 1607
   Moby 1608
   Moby 1609
   Moby 1610
   Moby 1611
   Moby 1612
   Moby 1613
   Moby 1614
   Moby 1615
   Moby 1616
   Moby 1617
   Moby 1618
   Moby 1619
   Moby 1620
   Moby 1621
   Moby 1622
   Moby 1623
   Moby 1624
   Moby 1652
   Moby 1653
   Moby 1654
   Moby 1656
   Moby 1657
   Moby 1658
   Moby 1659
   Moby 1661
   Moby 1662
   Moby 1665
   Moby 1666
   Moby 1673
   Moby 1674
   Moby 1675
   Moby 1676
   Moby 1678
   Moby 1679
   Moby 1680
   Moby 1688
   Moby 1689
   Moby 1690
   Moby 1692
   Moby 1693
   Moby 1694
   Moby 1695
   Moby 1696
   Moby 1697
   Moby 1698
   Moby 1699
   Moby 1700
   Moby 1701
   Moby 1702
   Moby 1703
   Moby 1704
   Moby 1705
   Moby 1706
   Moby 1707
   Moby 1708
   Moby 1709
   Moby 1710
   Moby 1711
   Moby 1712
   Moby 1713
   Moby 1714
   Moby 1715
   Moby 1716
   Moby 1717
   Moby 1718
   Moby 1719
   Moby 1720
   Moby 1721
   Moby 1722
   Moby 1724
   Moby 1726
   Moby 1727
   Moby 1728
   Moby 1729
   Moby 1730
   Moby 1731
   Moby 1732
   Moby 1733
   Moby 1734
   Moby 1735
   Moby 1736
   Moby 1737
   Moby 1738
   Moby 1739
   Moby 1740
   Moby 1741
   Moby 1742
   Moby 1743
   Moby 1744
   Moby 1745
   Moby 1746
   Moby 1747
   Moby 1748
   Moby 1749
   Moby 1751
   Moby 1752
   Moby 1753
   Moby 1754
   Moby 1755
   Moby 1756
   Moby 1757
   Moby 1759
   Moby 1760
   Moby 1761
   Moby 1762
   Moby 1763
   Moby 1764
   Moby 1765
   Moby 1769
   Moby 1770
   Moby 1786
   Moby 1787
   Moby 1790
   Moby 1791
   Moby 1792
   Moby 1793
   Moby 1794
   Moby 1796
   Moby 1801
   Moby 1802
   Moby 1803
   Moby 1804
   Moby 1814
   Moby 1815
   Moby 1817
   Moby 1821
   Moby 1822
   Moby 1823
   Moby 1824
   Moby 1829
   Moby 1830
   Moby 1831
   Moby 1832
   Moby 1833
   Moby 1836
   Moby 1837
   Moby 1838
   Moby 1839
   Moby 1846
   Moby 1847
   Moby 1851
   Moby 1858
   Moby 1861
   Moby 1864
   Moby 1867
   Moby 1868
   Moby 1869
   Moby 1870
   Moby 1875
   Moby 1878
   Moby 1881
   Moby 1883
   Moby 1889
   Moby 1909
   Moby 1914
   Moby 1915
   Moby 1916
   Moby 1917
   Moby 1922
   Moby 1924
   Moby 1925
   Moby 1926
   Moby 1927
   Moby 1933
   Moby 1934
   Moby 1935
   Moby 1936
   Moby 1939
   Moby 1940
   Moby 1941
   Moby 1942
   Moby 1944
   Moby 1945
   Moby 1946
   Moby 1961
   Moby 1962
   Moby 1963 */

void mobyupdate_unsorted::UpdateMoby_a_lot_8(MobyInstance *moby)

{
  float fVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  longlong lVar7;
  int iVar8;
  float fVar9;
  s8 sVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  float local_d0 [4];
  undefined1 auStack_c0 [48];
  undefined1 auStack_90 [88];
  
  lVar7 = (longlong)(int)moby;
  bVar2 = moby->state;
  pfVar5 = (float *)moby->pVar;
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
    iVar8 = fastfunc::FastDecTimerS32(pfVar5 + 0xc);
    if (iVar8 != 0) {
      moby->state = (char)((LZCOUNT(-((uint)pfVar5[0xd] & 1)) << 0x3a) >> 0x3f) + '\x03';
      fVar9 = (float)fastfunc::FastDoubleToInt((double)(animationSpeed * 10.0));
      pfVar5[0xc] = fVar9;
      return;
    }
  }
  else {
    if (bVar2 < 3) {
      if (((uint)pfVar5[0xd] & 2) == 0) {
        dVar14 = (double)(float)((double)pfVar5[0xb] * 0.5);
        mobyutil::MB_genericExplosion
                  (0,0,(double)pfVar5[0xb],dVar14,0x4022000000000000,dVar14,0,lVar7,&DAT_00a15d30,
                   local_e0,0,0xffffffffffffffff,5,3,5);
      }
      else {
        mobyutil::MB_SpawnExplosionSparks2
                  ((double)(pfVar5[0xb] * 0.5),0,lVar7,local_e0,&DAT_0028d1e0,0xffffffffffffffff);
      }
      mobyfunc::DeleteMoby(moby);
      return;
    }
    if (bVar2 < 4) {
      iVar8 = fastfunc::FastDecTimerS32(pfVar5 + 0xc);
      if (iVar8 != 0) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      sVar10 = fastfunc::FastDoubleToInt
                         ((double)(((float)(longlong)(int)pfVar5[0xc] / (animationSpeed * 10.0)) *
                                  128.0));
      moby->alpha = sVar10;
    }
  }
  fastfunc::FastEulerToMtx(auStack_c0,(MobyInstance *)(pfVar5 + 4));
  fVar9 = pfVar5[9];
  fVar3 = pfVar5[8];
  fVar4 = pfVar5[10];
  dVar16 = (double)((moby->transform).v2.x * fVar4 +
                   (moby->transform).v0.x * fVar3 + (moby->transform).v1.x * fVar9);
  dVar15 = (double)((moby->transform).v2.y * fVar4 +
                   (moby->transform).v0.y * fVar3 + (moby->transform).v1.y * fVar9);
  dVar14 = (double)((moby->transform).v2.z * fVar4 +
                   (moby->transform).v0.z * fVar3 + (moby->transform).v1.z * fVar9);
  fastfunc::FastVecMtx4MultBatch3(lVar7 + 0xc0,auStack_c0,lVar7 + 0xc0);
  fVar9 = pfVar5[9];
  fVar3 = pfVar5[8];
  fVar4 = pfVar5[10];
  fVar1 = (moby->pos).x -
          (float)((double)((moby->transform).v2.x * fVar4 +
                          (moby->transform).v0.x * fVar3 + (moby->transform).v1.x * fVar9) - dVar16)
  ;
  fVar6 = (moby->pos).y -
          (float)((double)((moby->transform).v2.y * fVar4 +
                          (moby->transform).v0.y * fVar3 + (moby->transform).v1.y * fVar9) - dVar15)
  ;
  fVar9 = (moby->pos).z -
          (float)((double)((moby->transform).v2.z * fVar4 +
                          (moby->transform).v0.z * fVar3 + (moby->transform).v1.z * fVar9) - dVar14)
  ;
  (moby->pos).x = fVar1;
  (moby->pos).y = fVar6;
  (moby->pos).z = fVar9;
  (moby->pos).x = fVar1 + *pfVar5;
  (moby->pos).y = fVar6 + pfVar5[1];
  (moby->pos).z = fVar9 + pfVar5[2];
  pfVar5[2] = pfVar5[2] - pfVar5[0xe];
  iVar8 = collproc::CollSphere((double)pfVar5[0xb],local_f0);
  if (iVar8 != 0) {
    dVar17 = 0.0;
    fVar9 = CollOutput.normal.z * CollOutput.normal.z +
            CollOutput.normal.x * CollOutput.normal.x + CollOutput.normal.y * CollOutput.normal.y;
    dVar14 = dVar17;
    dVar15 = dVar17;
    dVar16 = dVar17;
    if (SQRT(fVar9) != 0.0) {
      fVar3 = 1.0 / SQRT(fVar9);
      fVar3 = -(fVar9 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
      fVar3 = -(fVar9 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
      fVar3 = -(fVar9 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
      dVar16 = (double)(CollOutput.normal.x * fVar3);
      dVar14 = (double)(CollOutput.normal.y * fVar3);
      dVar15 = (double)(CollOutput.normal.z * fVar3);
    }
    CollOutput.normal.x = (float)dVar16;
    CollOutput.normal.y = (float)dVar14;
    CollOutput.normal.z = (float)dVar15;
    dVar11 = (double)pfVar5[1];
    dVar12 = (double)*pfVar5;
    dVar13 = (double)pfVar5[2];
    dVar15 = (double)(float)(dVar13 * dVar15 +
                            (double)(float)(dVar12 * dVar16 + (double)(float)(dVar11 * dVar14)));
    dVar14 = (double)SQRT((float)(dVar13 * dVar13 +
                                 (double)(float)(dVar12 * dVar12 + (double)(float)(dVar11 * dVar11))
                                 ));
    if (dVar15 < 0.0) {
      fastfunc::FastVecNormalize(pfVar5,pfVar5,0xa10980);
      dVar16 = (double)SQRT(CollOutput.normal.z * CollOutput.normal.z +
                            CollOutput.normal.x * CollOutput.normal.x +
                            CollOutput.normal.y * CollOutput.normal.y);
      fVar9 = (float)((double)(float)(dVar15 * 0.5) / dVar16);
      dVar15 = dVar17;
      if (dVar17 - dVar16 < 0.0) {
        dVar15 = (double)(CollOutput.normal.y * fVar9);
      }
      dVar11 = dVar17;
      if (dVar17 - dVar16 < 0.0) {
        dVar11 = (double)(CollOutput.normal.x * fVar9);
      }
      dVar12 = dVar17;
      if (dVar17 - dVar16 < 0.0) {
        dVar12 = (double)(CollOutput.normal.z * fVar9);
      }
      if (dVar16 - dVar17 < 0.0) {
        dVar15 = (double)(CollOutput.normal.y * fVar9);
      }
      if (dVar16 - dVar17 < 0.0) {
        dVar11 = (double)(CollOutput.normal.x * fVar9);
      }
      if (dVar16 - dVar17 < 0.0) {
        dVar12 = (double)(CollOutput.normal.z * fVar9);
      }
      fVar9 = (float)((double)pfVar5[1] + dVar15);
      fVar3 = (float)((double)*pfVar5 + dVar11);
      fVar4 = (float)((double)pfVar5[2] + dVar12);
      dVar15 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar9 * fVar9);
      fVar1 = (float)(dVar14 / dVar15);
      dVar14 = dVar17;
      if (dVar17 - dVar15 < 0.0) {
        dVar14 = (double)(fVar3 * fVar1);
      }
      dVar16 = dVar17;
      if (dVar17 - dVar15 < 0.0) {
        dVar16 = (double)(fVar9 * fVar1);
      }
      dVar11 = dVar17;
      if (dVar17 - dVar15 < 0.0) {
        dVar11 = (double)(fVar4 * fVar1);
      }
      if (dVar15 - dVar17 < 0.0) {
        dVar14 = (double)(fVar3 * fVar1);
      }
      if (dVar15 - dVar17 < 0.0) {
        dVar16 = (double)(fVar9 * fVar1);
      }
      if (dVar15 - dVar17 < 0.0) {
        dVar11 = (double)(fVar4 * fVar1);
      }
      *pfVar5 = (float)dVar14;
      pfVar5[1] = (float)dVar16;
      pfVar5[2] = (float)dVar11;
      mobyutil::MB_AxisAngleToQuat
                (SQRT(pfVar5[6] * pfVar5[6] + pfVar5[4] * pfVar5[4] + pfVar5[5] * pfVar5[5]),
                 local_d0,local_d0);
      fastfunc::FastQuaternionToMtx4Identity(local_d0,auStack_90);
      mobyutil::MB_MtxToEuler((int)auStack_90,(MobyInstance *)(pfVar5 + 4));
    }
  }
  return;
}



//==== 0028d9b0  ns=mobyupdate_unsorted  size=0x5b8
// sig: undefined UpdateMoby_1504(MobyInstance * moby)
// callers(0): 
// callees(9): 000da4ac lights::CreatePointLight2; 000da9e8 lights::DeletePointLight; 000efb38 mobyfunc::DeleteMoby; 000fe484 mobyutil::MB_randRange; 001099f8 mobyutil::Lerp_vec4; 00110b70 mobyutil::MB_IsPntInCuboid; 004fff60 fastfunc::FastDecTimerS32; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Moby 1504 */

void mobyupdate_unsorted::UpdateMoby_1504(MobyInstance *moby)

{
  byte bVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  char cVar9;
  float fVar8;
  uint uVar10;
  byte bVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  bVar1 = moby->state;
  pfVar2 = (float *)moby->pVar;
  uVar10 = (uint)bVar1;
  bVar11 = (uVar10 == 0xffffffff) << 1;
  if (bVar1 == 0) {
    if (-1 < (int)uVar10) {
      if ((int)pfVar2[0x16] < 2) {
        mobyfunc::DeleteMoby(moby);
      }
      else {
        iVar7 = 0;
        pfVar6 = pfVar2;
        if (0 < (int)pfVar2[0x16]) {
          do {
            iVar7 = iVar7 + 1;
            fVar8 = pfVar2[0x16];
            *pfVar6 = *pfVar6 * 0.00390625;
            pfVar6[1] = pfVar6[1] * 0.00390625;
            pfVar6[2] = pfVar6[2] * 0.00390625;
            pfVar6[3] = pfVar6[3] * 0.00390625;
            pfVar6 = pfVar6 + 4;
          } while (iVar7 < (int)fVar8);
        }
        pfVar2[0x1a] = -NAN;
        bVar11 = moby->updateDistance;
        iVar7 = fastfunc::FastDoubleToInt((double)pfVar2[0x17]);
        if ((int)(uint)bVar11 < iVar7 + 4) {
          cVar9 = fastfunc::FastDoubleToInt((double)pfVar2[0x17]);
          moby->updateDistance = cVar9 + '\x04';
        }
        moby->state = '\x01';
      }
    }
  }
  else if (bVar1 < 2) {
    auVar16 = ZEXT416(0);
    auVar15 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
    fVar8 = (moby->pos).y - GameCamera.posY;
    fVar3 = (moby->pos).x - GameCamera.posX;
    dVar14 = (double)SQRT(fVar3 * fVar3 + fVar8 * fVar8);
    auVar16 = auVar15;
    if (dVar14 < (double)pfVar2[0x17]) {
      auVar16 = ZEXT416(1);
      auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
    }
    auVar16 = vectorConvertFromSignedFixedPointWord(auVar16,0);
    vectorCompareEqualToFloatingPoint(auVar16,auVar15);
    if (((uVar10 == 0xffffffff) && (pfVar2[0x20] != -NAN)) &&
       (iVar7 = mobyutil::MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)(int)pfVar2[0x20]),
       iVar7 == 0)) {
      auVar16 = auVar15;
    }
    if ((pfVar2[0x21] == -NAN) || (MobyInstance[(int)pfVar2[0x21]].state < 0x80)) {
      vectorCompareEqualToFloatingPoint(auVar16,auVar15);
      if ((bool)(bVar11 >> 1 & 1)) {
        iVar7 = fastfunc::FastDecTimerS32(pfVar2 + 0x1b);
        if (iVar7 != 0) {
          fVar8 = (float)mobyutil::MB_randRange(pfVar2[0x14],pfVar2[0x15]);
          pfVar2[0x1c] = fVar8;
          pfVar2[0x1b] = fVar8;
          pfVar2[0x1d] = pfVar2[0x1e];
          iVar7 = mobyutil::MB_randRange(1,(int)pfVar2[0x16] + -1);
          pfVar2[0x1e] = (float)(((int)pfVar2[0x1e] + iVar7) -
                                (((int)pfVar2[0x1e] + iVar7) / (int)pfVar2[0x16]) *
                                (int)pfVar2[0x16]);
          pfVar2[0x1f] = (float)((uint)LZCOUNT(pfVar2[0x1f]) >> 5);
        }
        dVar12 = (double)fastfunc::FastIntToDouble((int)pfVar2[0x1c] - (int)pfVar2[0x1b]);
        dVar13 = (double)fastfunc::FastIntToDouble(pfVar2[0x1c]);
        fVar8 = (float)(dVar12 / dVar13) * 3.1415927 * 0.5;
        if (pfVar2[0x1f] != 0.0) {
          fVar8 = fVar8 + 1.5707964;
        }
        pfVar6 = pfVar2 + 0x10;
        fVar3 = 3.1415925 - fVar8;
        if (fVar8 - (3.1415925 - fVar8) < 0.0) {
          fVar3 = fVar8;
        }
        fVar4 = -3.1415925 - fVar8;
        if ((-3.1415925 - fVar8) - fVar3 < 0.0) {
          fVar4 = fVar3;
        }
        fVar8 = fVar4 * fVar4;
        fVar3 = fVar8 * fVar8 * fVar4;
        fVar5 = fVar8 * fVar3;
        fVar8 = fVar8 * fVar5 * 2.601887e-06 +
                fVar5 * -0.0001980741 + fVar3 * 0.0083330255 + fVar8 * fVar4 * -0.16666657 + fVar4;
        if (pfVar2[0x1f] == 0.0) {
          mobyutil::Lerp_vec4(fVar8,pfVar6);
        }
        else {
          mobyutil::Lerp_vec4(fVar8,pfVar6);
        }
        dVar12 = (double)(float)((double)pfVar2[0x17] * 0.75);
        if (dVar12 < dVar14) {
          mobyutil::Lerp_vec4((float)(dVar14 - dVar12) / (float)((double)pfVar2[0x17] - dVar12),
                              pfVar6);
        }
        fVar8 = pfVar2[0x1a];
        if (fVar8 == -NAN) {
          fVar8 = (float)lights::CreatePointLight2
                                   (pfVar2[0x18],(double)pfVar2[0x13],(double)pfVar2[0x10],
                                    (double)pfVar2[0x11],(double)pfVar2[0x12],(Vec4 *)&moby->pos);
          pfVar2[0x1a] = fVar8;
        }
        else {
          PointLights[(int)fVar8].pos.x = (moby->pos).x;
          PointLights[(int)fVar8].pos.y = (moby->pos).y;
          PointLights[(int)fVar8].pos.z = (moby->pos).z;
          PointLights[(int)fVar8].pos.w = (moby->pos).w;
          PointLights[(int)fVar8].pos.w = pfVar2[0x18];
          PointLights[(int)fVar8].color.x = pfVar2[0x10];
          PointLights[(int)fVar8].color.y = pfVar2[0x11];
          PointLights[(int)fVar8].color.z = pfVar2[0x12];
          PointLights[(int)fVar8].color.w = pfVar2[0x13];
        }
      }
      else if (pfVar2[0x1a] != -NAN) {
        lights::DeletePointLight(pfVar2[0x1a]);
        pfVar2[0x1a] = -NAN;
      }
    }
    else {
      if (pfVar2[0x1a] != -NAN) {
        lights::DeletePointLight(pfVar2[0x1a]);
      }
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 0028dfa8  ns=mobyupdate_unsorted  size=0x544
// sig: undefined UpdateMoby_1510(MobyInstance * moby)
// callers(0): 
// callees(12): 00059e20 collproc::CollSphere; 0006d7e0 draw::RegisterPostDraw; 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 0010e030 mobyutil::MB_genericExplosion; 001268f8 partupd::SpawnPart_21; 00126f50 partupd::SpawnPart_23; 004fff60 fastfunc::FastDecTimerS32; 00500608 fastfunc::FastVecNormalize; 00502578 fastfunc::FastWrapRot

/* Moby 1510 */

void mobyupdate_unsorted::UpdateMoby_1510(MobyInstance *moby)

{
  float fVar1;
  float *pfVar2;
  f32 fVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  pfVar2 = (float *)moby->pVar;
  iVar9 = mobyutil::MB_randInt(2);
  if (iVar9 != 0) {
    draw::RegisterPostDraw(&PTR_M1511_0028e730_0070a888,moby);
  }
  (moby->pos).x = (moby->pos).x + *pfVar2;
  (moby->pos).y = (moby->pos).y + pfVar2[1];
  (moby->pos).z = (moby->pos).z + pfVar2[2];
  fVar8 = DAT_0071f408;
  fVar7 = DAT_0071f408 * DAT_00fada68;
  fVar1 = pfVar2[2];
  if (fVar7 < ABS(*pfVar2)) {
    *pfVar2 = *pfVar2 * ((DAT_007ab1e4 - 1.0) * DAT_0071f408 + 1.0);
  }
  if (fVar7 < ABS(pfVar2[1])) {
    pfVar2[1] = pfVar2[1] * ((DAT_007ab1e4 - 1.0) * fVar8 + 1.0);
  }
  uVar16 = 0;
  if (0 < (int)pfVar2[2]) {
    fVar1 = fVar1 * ((DAT_007ab1e4 - 1.0) * fVar8 + 1.0);
  }
  pfVar2[2] = -(DAT_0071f418 * DAT_007ab1e0 - fVar1);
  dVar12 = (double)fastfunc::FastWrapRot((moby->rotation).x,pfVar2[4]);
  (moby->rotation).x = (float)dVar12;
  dVar12 = (double)fastfunc::FastWrapRot((moby->rotation).y,pfVar2[5]);
  (moby->rotation).y = (float)dVar12;
  dVar12 = (double)fastfunc::FastWrapRot((moby->rotation).z,pfVar2[6]);
  fVar3 = (moby->pos).x;
  (moby->rotation).z = (float)dVar12;
  uVar4 = (int)fVar3 >> 0x1f;
  iVar9 = (uVar4 >> 1 ^ (uint)fVar3) - uVar4;
  uVar15 = 0x4000000000000000;
  if ((((0x3fffffff < iVar9) && (iVar9 < 0x447f4001)) &&
      (fVar3 = (moby->pos).y, uVar4 = (int)fVar3 >> 0x1f, iVar9 = (uVar4 >> 1 ^ (uint)fVar3) - uVar4
      , iVar9 < 0x447f4001 && 0x3fffffff < iVar9)) &&
     ((fVar3 = (moby->pos).z, uVar4 = (int)fVar3 >> 0x1f, iVar9 = (uVar4 >> 1 ^ (uint)fVar3) - uVar4
      , 0x3fffffff < iVar9 && (iVar9 < 0x447f4001)))) {
    lVar11 = (longlong)(int)moby + 0x10;
    iVar9 = collproc::CollSphere(0x4000000000000000,lVar11,0x40000000,0,pfVar2[9]);
    iVar10 = fastfunc::FastDecTimerS32(pfVar2 + 8);
    if (iVar10 != 0 || iVar9 != 0) {
      if (iVar9 != 0) {
        if (CollOutput.poly == 0) {
          pfVar2[3] = 0.0;
          pfVar2[2] = 0.0;
          pfVar2[1] = 0.0;
          *pfVar2 = 0.0;
        }
        else {
          fastfunc::FastVecNormalize(pfVar2,pfVar2,0xa10980);
        }
      }
      mobyutil::MB_genericExplosion
                (uVar16,uVar16,0x4010000000000000,uVar15,0x40f86a0000000000,0x4008000000000000,
                 0x402e000000000000,(longlong)(int)moby,pfVar2,lVar11,1,0xffffffffffffffff,0x14,3,4)
      ;
      mobyfunc::DeleteMoby(moby);
      return;
    }
    dVar12 = (double)mobyutil::MB_randRangeFloat(0.5,1.5);
    dVar12 = (double)(float)(dVar12 * 210000.0);
    mobyutil::MB_randRange((int)(animationSpeed * 10.5),(int)(animationSpeed * 20.5));
    partupd::SpawnPart_21(dVar12,lVar11,&DAT_00a15d30,0x4f007fff,0x1fffffff);
    dVar12 = 40000.0;
    dVar14 = 100000.0;
    iVar9 = 0;
    uVar16 = 0x3f999999a0000000;
    uVar15 = 0x3ff0000000000000;
    auVar19 = loadVectorLeftIndexed(0x38,0x28df68);
    auVar19 = auVar19 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar19 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
    do {
      mobyutil::MB_randInt(6);
      mobyutil::MB_randInt(2);
      uVar13 = mobyutil::MB_randRangeFloat((float)dVar12,(float)dVar14);
      mobyutil::MB_randRange(0x30,0xff);
      uVar13 = partupd::SpawnPart_23(uVar16,uVar15,uVar15,uVar13,lVar11);
      iVar10 = (int)uVar13;
      if (iVar10 != 0) {
        auVar17 = ZEXT416(0xffffffff);
        auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
        auVar17 = vectorShiftLeftIntegerWord(auVar17,auVar17);
        *(undefined1 *)(iVar10 + 3) = 0x44;
        auVar18 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar17 = vectorMultiplyAddFloatingPoint(auVar18,auVar19,auVar17);
        auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
        auVar18 = vectorSplatHalfWord(auVar17,1);
        auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xff;
        uVar6 = storeVectorElementHalfWordIndexed(auVar18,10,uVar13);
        *(undefined2 *)(iVar10 + 10) = uVar6;
        *(undefined4 *)(iVar10 + 0x24) = 2;
        *(undefined1 *)(iVar10 + 0x2a) = 0x60;
        uVar5 = storeVectorElementByteIndexed
                          (auVar17 | auVar17 << 8 | auVar17 << 0x10 | auVar17 << 0x18 |
                           auVar17 << 0x20 | auVar17 << 0x28 | auVar17 << 0x30 | auVar17 << 0x38 |
                           auVar17 << 0x40 | auVar17 << 0x48 | auVar17 << 0x50 | auVar17 << 0x58 |
                           auVar17 << 0x60 | auVar17 << 0x68 | auVar17 << 0x70 | auVar17 << 0x78,
                           0x2b,uVar13);
        *(undefined1 *)(iVar10 + 0x2b) = uVar5;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 2);
    return;
  }
  mobyfunc::DeleteMoby(moby);
  return;
}



//==== 0028e510  ns=Global  size=0x208
// sig: undefined FUN_0028e510(void)
// callers(2): 00407f28 mobyupdate_unsorted::UpdateMoby_660; 00415f18 mobyupdate_helpers::M688_00415f18
// callees(4): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe4f0 mobyutil::MB_randRangeSigned

MobyInstance * FUN_0028e510(double param_1,float param_2,float *param_3)

{
  float fVar1;
  f32 fVar2;
  float *pfVar3;
  undefined4 uVar4;
  MobyInstance *pMVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  pMVar5 = mobyfunc::CreateMoby(PLANETBUSTER_MAXIMUS_PART_0500|BOMB_00E6);
  if (pMVar5 != (MobyInstance *)0x0) {
    pfVar3 = (float *)pMVar5->pVar;
    pfVar3[9] = param_2;
    (pMVar5->pos).x = *(f32 *)((int)param_2 + 0x10);
    (pMVar5->pos).y = *(f32 *)((int)param_2 + 0x14);
    (pMVar5->pos).z = *(f32 *)((int)param_2 + 0x18);
    (pMVar5->pos).w = *(f32 *)((int)param_2 + 0x1c);
    fVar1 = pMVar5->scale;
    (pMVar5->rotation).x = *(f32 *)((int)param_2 + 0x40);
    (pMVar5->rotation).y = *(f32 *)((int)param_2 + 0x44);
    (pMVar5->rotation).z = *(f32 *)((int)param_2 + 0x48);
    fVar2 = *(f32 *)((int)param_2 + 0x4c);
    pMVar5->updateDistance = -1;
    (pMVar5->rotation).w = fVar2;
    pMVar5->drawDistance = 0xff;
    pMVar5->enabled = '\x01';
    pMVar5->state = '\0';
    pMVar5->scale = (float)((double)fVar1 * param_1);
    dVar6 = (double)mobyutil::MB_randRangeFloat(0.8,1.2);
    uVar8 = 0;
    dVar7 = (double)SQRT(param_3[2] * param_3[2] + *param_3 * *param_3 + param_3[1] * param_3[1]);
    if (dVar7 == 0.0) {
      *pfVar3 = *param_3;
      pfVar3[1] = param_3[1];
      pfVar3[2] = param_3[2];
      fVar1 = param_3[3];
      pfVar3[2] = 0.0;
      pfVar3[1] = 0.0;
      *pfVar3 = 0.0;
    }
    else {
      fVar1 = (float)(dVar6 / dVar7);
      *pfVar3 = *param_3 * fVar1;
      pfVar3[1] = param_3[1] * fVar1;
      pfVar3[2] = param_3[2] * fVar1;
      fVar1 = param_3[3];
    }
    pfVar3[3] = fVar1;
    dVar6 = (double)mobyutil::MB_randRangeSigned(0,0x3f81df46a0000000);
    pfVar3[4] = (float)dVar6;
    dVar6 = (double)mobyutil::MB_randRangeSigned(0x3faaceea00000000,0x3fc1df46a0000000);
    pfVar3[5] = (float)dVar6;
    dVar6 = (double)mobyutil::MB_randRangeSigned(uVar8,0x3f91df46a0000000);
    auVar9 = ZEXT416(0xffffffff);
    auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    pfVar3[6] = (float)dVar6;
    auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
    auVar9 = loadVectorLeftIndexed(0x1c,0x28e4ec);
    auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar9 = vectorMultiplyAddFloatingPoint
                       (auVar11,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar10);
    auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
    auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar4 = storeVectorElementWordIndexed
                      (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x20,ZEXT48(pfVar3)
                      );
    *(undefined4 *)((uint)(pfVar3 + 8) & 0xfffffffc) = uVar4;
    mobyfunc::UpdateMobyTransform(pMVar5);
  }
  return pMVar5;
}



//==== 0028e730  ns=mobyupdate_helpers  size=0x3d4
// sig: undefined M1511_0028e730(void)
// callers(0): 
// callees(5): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mobyupdate_helpers::M1511_0028e730(int param_1)

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
  float *pfVar17;
  float *pfVar18;
  longlong lVar19;
  float local_130 [16];
  float local_f0 [38];
  
  draw::GetEffectTex(0xb);
  idol_draw::PackCmd(0,2,0,1,0x80);
  stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(1,1,0,0,0,0);
  fVar5 = *(float *)(param_1 + 0xc4) * DAT_007ab1e8 + *(float *)(param_1 + 0xe4) * DAT_007ab1ec +
          *(float *)(param_1 + 0x14);
  fVar6 = *(float *)(param_1 + 0xc0) * DAT_007ab1e8 + *(float *)(param_1 + 0xe0) * DAT_007ab1ec +
          *(float *)(param_1 + 0x10);
  fVar7 = *(float *)(param_1 + 200) * DAT_007ab1e8 + *(float *)(param_1 + 0xe8) * DAT_007ab1ec +
          *(float *)(param_1 + 0x18);
  fVar13 = 0.0;
  fVar11 = GameCamera.posY - fVar5;
  fVar3 = GameCamera.posX - fVar6;
  fVar12 = GameCamera.posZ - fVar7;
  fVar1 = *(float *)(param_1 + 0xcc);
  fVar2 = fVar12 * fVar12 + fVar3 * fVar3 + fVar11 * fVar11;
  fVar9 = fVar13;
  fVar8 = fVar13;
  fVar10 = fVar13;
  if (SQRT(fVar2) != 0.0) {
    fVar10 = 1.0 / SQRT(fVar2);
    fVar10 = -(fVar2 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar10 = -(fVar2 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar10 = -(fVar2 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar9 = fVar3 * fVar10;
    fVar8 = fVar11 * fVar10;
    fVar10 = fVar12 * fVar10;
  }
  fVar15 = DAT_00969f78 * fVar9 - hero::g_heroGravityDir * fVar10;
  fVar3 = DAT_00969f74 * fVar10 - DAT_00969f78 * fVar8;
  fVar4 = hero::g_heroGravityDir * fVar8 - DAT_00969f74 * fVar9;
  pfVar18 = local_f0;
  lVar19 = 4;
  pfVar17 = local_130;
  fVar2 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar15 * fVar15);
  fVar12 = (float)GameCamera.field8_0x14c * 0.4;
  fVar16 = -1.0 / fVar2;
  fVar11 = fVar13;
  if (0.0 - fVar2 < 0.0) {
    fVar11 = fVar3 * fVar16;
  }
  fVar14 = fVar13;
  if (0.0 - fVar2 < 0.0) {
    fVar14 = fVar15 * fVar16;
  }
  if (0.0 - fVar2 < 0.0) {
    fVar13 = fVar4 * fVar16;
  }
  if (fVar2 - 0.0 < 0.0) {
    fVar11 = fVar3 * fVar16;
  }
  if (fVar2 - 0.0 < 0.0) {
    fVar14 = fVar15 * fVar16;
  }
  if (fVar2 - 0.0 < 0.0) {
    fVar13 = fVar4 * fVar16;
  }
  do {
    fVar2 = *pfVar17;
    fVar3 = pfVar17[1];
    fVar15 = fVar2 * 0.4;
    fVar4 = pfVar17[3];
    fVar16 = pfVar17[2] * 0.4;
    pfVar17 = pfVar17 + 4;
    pfVar18[3] = fVar4 * fVar1 + fVar2 * fVar12;
    *pfVar18 = fVar4 * fVar6 +
               (fVar8 * fVar13 - fVar10 * fVar14) * fVar16 + fVar15 * fVar9 + fVar3 * fVar11 * 0.4;
    pfVar18[1] = fVar4 * fVar5 +
                 (fVar10 * fVar11 - fVar9 * fVar13) * fVar16 + fVar15 * fVar8 + fVar3 * fVar14 * 0.4
    ;
    pfVar18[2] = fVar4 * fVar7 +
                 (fVar9 * fVar14 - fVar8 * fVar11) * fVar16 + fVar15 * fVar10 + fVar3 * fVar13 * 0.4
    ;
    pfVar18 = pfVar18 + 4;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  draw::FastDrawQuad(local_f0,0,0,EffectTexHeaders,9);
  return;
}



//==== 0028eb08  ns=mobyupdate_helpers  size=0x34
// sig: undefined M1511_0028eb08(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1511_0028eb08(void)

{
  DAT_007ab23c = 0x10000;
  DAT_00fada68 = mobyutil::g_FrameTime * 20.0;
  return;
}



//==== 0028eba8  ns=mobyupdate_unsorted  size=0x83c
// sig: undefined UpdateMoby_1511(MobyInstance * moby)
// callers(0): 
// callees(18): 0006d720 RegisterFuncForMoby; 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 000fe4f0 mobyutil::MB_randRangeSigned; 000fe610 mobyutil::MB_SphericalToVector; 0010675c mobyutil::MB_damage; 0011a100 mobyutil::MB_DistributeBoltsNearHero; 0011a560 mobyutil::MB_SpawnDebrisMoby; 00126f50 partupd::SpawnPart_23; 0012f8c0 partupd::SpawnPart_53; 0015d12c sound::PlayMobySound; 0029125c FUN_0029125c; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Moby 1511 */

void mobyupdate_unsorted::UpdateMoby_1511(MobyInstance *moby)

{
  f32 fVar1;
  void *pvVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  uint uVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 uVar15;
  longlong lVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  double dVar27;
  undefined8 uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  double dVar36;
  double dVar37;
  undefined1 local_140 [32];
  float local_120 [4];
  float local_110;
  float local_10c;
  float local_108;
  f32 local_104;
  longlong local_100;
  float local_f0;
  float local_ec;
  float local_e8;
  
  lVar9 = (longlong)(int)moby;
  pvVar2 = moby->pVar;
  if (moby->state == '\0') {
    moby->state = '\x01';
    moby->field60_0x90 =
         CONCAT12(*(undefined1 *)((int)pvVar2 + 0x66),
                  CONCAT11(*(undefined1 *)((int)pvVar2 + 0x65),*(undefined1 *)((int)pvVar2 + 100)))
         | 0x7f000000;
    *(uint *)((int)pvVar2 + 0x68) =
         (uint)*(byte *)((int)pvVar2 + 0x6e) << 0x10 | (uint)*(byte *)((int)pvVar2 + 0x6d) << 8 |
         (uint)*(byte *)((int)pvVar2 + 0x6c);
  }
  fVar4 = GameCamera.posY - (moby->pos).y;
  fVar5 = GameCamera.posX - (moby->pos).x;
  fVar4 = SQRT(fVar5 * fVar5 + fVar4 * fVar4);
  if (fVar4 < 48.0) {
    if (fVar4 < 32.0) {
      uVar10 = (uint)*(byte *)((int)pvVar2 + 0x6f);
    }
    else {
      dVar36 = (double)(fVar4 - 32.0);
      dVar18 = 0.0625;
      dVar19 = (double)fastfunc::FastIntToDouble
                                 (0x3fb0000000000000,*(undefined1 *)((int)pvVar2 + 0x6f));
      uVar10 = fastfunc::FastDoubleToInt
                         ((double)(float)(dVar19 * -(double)(float)(dVar36 * dVar18 - 1.0)));
    }
    *(uint *)((int)pvVar2 + 0x60) = uVar10;
    RegisterFuncForMoby(&PTR_M1512_0028f3f0_0070a8a0,moby);
    pfVar11 = (float *)mobyutil::MB_damage(lVar9,&DAT_00810000,0);
    moby->damage = -1;
    if (pfVar11 != (float *)0x0) {
      fVar4 = (moby->transform).v2.z * DAT_007ab2a0 + (moby->pos).z;
      fVar1 = (moby->pos).w;
      fVar5 = (moby->pos).x + (moby->transform).v2.x * DAT_007ab2a0;
      fVar6 = (moby->pos).y + (moby->transform).v2.y * DAT_007ab2a0;
      if (((((uint)pfVar11[9] & 0x800000) != 0) ||
          (SQRT((fVar4 - pfVar11[2]) * (fVar4 - pfVar11[2]) +
                (fVar5 - *pfVar11) * (fVar5 - *pfVar11) +
                (fVar6 - pfVar11[1]) * (fVar6 - pfVar11[1])) <= 0.8)) ||
         ((fVar3 = pfVar11[8], *(short *)((int)fVar3 + 0xa6) == 0x47 &&
          (fVar8 = fVar6 - *(float *)((int)fVar3 + 0x14),
          fVar7 = fVar5 - *(float *)((int)fVar3 + 0x10),
          fVar3 = fVar4 - *(float *)((int)fVar3 + 0x18),
          SQRT(fVar3 * fVar3 + fVar7 * fVar7 + fVar8 * fVar8) <= 0.8)))) {
        sound::PlayMobySound(0,0,moby);
        FUN_0029125c(lVar9);
        lVar16 = lVar9 + 0x10;
        dVar18 = 90.5;
        lVar17 = lVar9 + 0x40;
        local_100 = (longlong)(int)(animationSpeed * 90.5);
        dVar19 = 12.0;
        iVar12 = mobyutil::MB_SpawnDebrisMoby
                           ((double)(DAT_0071f418 * 12.0),lVar9,0x5ed,lVar16,lVar17,
                            (int)(animationSpeed * 90.5),0);
        if (iVar12 != 0) {
          *(undefined8 *)(iVar12 + 0x38) = *(undefined8 *)&moby->color;
        }
        mobyutil::MB_DistributeBoltsNearHero(lVar9);
        local_100 = (longlong)(int)((double)animationSpeed * dVar18);
        iVar12 = mobyutil::MB_SpawnDebrisMoby
                           ((double)(float)((double)DAT_0071f418 * dVar19),lVar9,0x5ee,lVar16,lVar17
                            ,(int)((double)animationSpeed * dVar18),0);
        if (iVar12 != 0) {
          *(undefined8 *)(iVar12 + 0x38) = *(undefined8 *)&moby->color;
        }
        dVar36 = (double)fastfunc::FastWrapRot((moby->rotation).z,3.1415927);
        (moby->rotation).z = (float)dVar36;
        local_100 = (longlong)(int)((double)animationSpeed * dVar18);
        iVar12 = mobyutil::MB_SpawnDebrisMoby
                           ((double)(float)((double)DAT_0071f418 * dVar19),lVar9,0x5ee,lVar16,lVar17
                            ,(int)((double)animationSpeed * dVar18),0);
        if (iVar12 != 0) {
          *(undefined8 *)(iVar12 + 0x38) = *(undefined8 *)&moby->color;
        }
        iVar12 = 0;
        dVar18 = 0.30000001192092896;
        dVar19 = 4.0;
        dVar36 = 0.3490658402442932;
        dVar22 = 1.535889744758606;
        dVar23 = 0.05000000074505806;
        dVar24 = 0.10000000149011612;
        uVar25 = 0;
        uVar26 = 0x3fc3333340000000;
        dVar27 = 60.5;
        uVar28 = 0x3f689374c0000000;
        dVar29 = 0.07000000029802322;
        dVar30 = 0.699999988079071;
        dVar31 = 0.009999999776482582;
        dVar32 = 60000.0;
        dVar33 = 200000.0;
        uVar34 = 0x3ff0000000000000;
        uVar35 = 0x3ff051eb80000000;
        dVar37 = 0.5;
        do {
          local_f0 = (float)dVar37;
          local_ec = (float)dVar19;
          dVar19 = (double)mobyutil::MB_randRangeFloat((float)dVar18,(float)dVar19);
          mobyutil::MB_randInt(2);
          dVar37 = (double)mobyutil::MB_randRot();
          local_e8 = (float)dVar22;
          dVar22 = (double)mobyutil::MB_randRangeFloat((float)dVar36,(float)dVar22);
          dVar20 = (double)mobyutil::MB_randRangeFloat((float)dVar23,(float)dVar24);
          mobyutil::MB_SphericalToVector
                    ((float)(dVar20 * (double)DAT_0071f408),(float)dVar37,(float)dVar22,local_120);
          local_110 = fVar5;
          local_10c = fVar6;
          local_108 = fVar4;
          local_104 = fVar1;
          dVar22 = (double)mobyutil::MB_randRangeSigned(uVar25,uVar26);
          local_110 = (float)((double)local_110 + dVar22);
          dVar22 = (double)mobyutil::MB_randRangeSigned(uVar25,uVar26);
          local_10c = (float)((double)local_10c + dVar22);
          dVar22 = (double)mobyutil::MB_randRangeSigned(uVar25,uVar26);
          local_108 = (float)((double)local_108 + dVar22);
          local_100 = (longlong)(int)((double)animationSpeed * dVar27);
          partupd::SpawnPart_53
                    ((double)(float)(dVar19 * dVar24),dVar19,uVar28,&local_110,
                     (int)((double)animationSpeed * dVar27));
          local_100 = (longlong)(int)((double)animationSpeed * dVar27);
          partupd::SpawnPart_53
                    ((double)(float)(dVar19 * dVar29),(double)(float)(dVar19 * dVar30),uVar28,
                     &local_110,(int)((double)animationSpeed * dVar27));
          local_120[1] = 0.0;
          local_120[0] = 0.0;
          dVar19 = (double)mobyutil::MB_randRangeFloat((float)dVar31,(float)dVar23);
          local_120[2] = (float)(dVar19 * (double)DAT_0071f408);
          uVar21 = mobyutil::MB_randRangeFloat((float)dVar32,(float)dVar33);
          mobyutil::MB_randInt(2);
          mobyutil::MB_randInt(2);
          iVar13 = partupd::SpawnPart_23(dVar18,uVar34,uVar35,uVar21,local_140);
          dVar37 = (double)local_f0;
          dVar19 = (double)local_ec;
          dVar22 = (double)local_e8;
          if (iVar13 != 0) {
            iVar14 = mobyutil::MB_randRange(0x5a,0x78);
            iVar14 = (int)(animationSpeed * (float)((double)(longlong)iVar14 + dVar37));
            local_100 = (longlong)iVar14;
            *(undefined4 *)(iVar13 + 0x24) = 2;
            *(short *)(iVar13 + 10) = (short)iVar14;
            uVar15 = mobyutil::MB_randRange(0x40,0x60);
            *(undefined1 *)(iVar13 + 0x2a) = uVar15;
            *(char *)(iVar13 + 0x2b) = (char)*(undefined2 *)(iVar13 + 10);
            iVar14 = mobyutil::MB_randInt(2);
            if (iVar14 != 0) {
              *(undefined1 *)(iVar13 + 3) = 0x44;
            }
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < 0x18);
        mobyfunc::DeleteMoby(moby);
      }
    }
  }
  return;
}



//==== 0028f3f0  ns=mobyupdate_helpers  size=0x3c0
// sig: undefined M1512_0028f3f0(void)
// callers(0): 
// callees(6): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 000fc620 mobyutil::MB_randInt; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1512_0028f3f0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  longlong lVar10;
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
  double dVar25;
  double dVar26;
  double dVar27;
  float local_120 [38];
  
  iVar4 = *(int *)(param_1 + 0x78);
  draw::GetEffectTex(0xb);
  idol_draw::PackCmd(0,2,0,1,0x80);
  stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(1,1,0,0,0,0);
  dVar15 = (double)(*(float *)(param_1 + 0xe4) * DAT_007ab2a0 + *(float *)(param_1 + 0x14));
  dVar16 = (double)(*(float *)(param_1 + 0xe0) * DAT_007ab2a0 + *(float *)(param_1 + 0x10));
  dVar14 = (double)(*(float *)(param_1 + 0xe8) * DAT_007ab2a0 + *(float *)(param_1 + 0x18));
  dVar23 = 0.0;
  fVar1 = (float)((double)GameCamera.posY - dVar15);
  fVar2 = (float)((double)GameCamera.posX - dVar16);
  fVar3 = (float)((double)GameCamera.posZ - dVar14);
  dVar27 = (double)*(float *)(param_1 + 0x1c);
  fVar5 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  dVar26 = (double)(float)GameCamera.field8_0x14c;
  dVar17 = dVar23;
  dVar18 = dVar23;
  dVar19 = dVar23;
  if (SQRT(fVar5) != 0.0) {
    fVar6 = 1.0 / SQRT(fVar5);
    fVar6 = -(fVar5 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar5 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar5 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    dVar17 = (double)(fVar2 * fVar6);
    dVar18 = (double)(fVar1 * fVar6);
    dVar19 = (double)(fVar3 * fVar6);
  }
  fVar1 = (float)(dVar17 * dVar17 + --(double)(float)(dVar18 * dVar18));
  dVar20 = dVar23;
  dVar21 = dVar23;
  if (SQRT(fVar1) != 0.0) {
    fVar2 = 1.0 / SQRT(fVar1);
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    dVar20 = (double)(-(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2);
    dVar21 = (double)(float)(dVar17 * dVar20);
    dVar20 = -(double)(float)(dVar18 * dVar20);
  }
  dVar25 = (double)(float)(dVar19 * dVar21);
  dVar24 = (double)(float)(dVar18 * dVar20);
  dVar22 = (double)DAT_007ab2a4;
  if ((*(char *)(iVar4 + 0x67) != '\0') && (iVar7 = mobyutil::MB_randInt(8), iVar7 == 0)) {
    *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) >> 1;
  }
  pfVar8 = local_120;
  pfVar9 = (float *)&DAT_007ab2b0;
  lVar10 = 4;
  do {
    fVar1 = *(float *)(iVar4 + 0x70);
    dVar11 = (double)(*pfVar9 * fVar1);
    *pfVar8 = *pfVar9 * fVar1;
    dVar12 = (double)(pfVar9[1] * fVar1);
    pfVar8[1] = pfVar9[1] * fVar1;
    fVar1 = pfVar9[2] * fVar1;
    pfVar8[2] = fVar1;
    dVar13 = (double)pfVar9[3];
    pfVar9 = pfVar9 + 4;
    pfVar8[3] = (float)(dVar13 * dVar27 + (double)(float)(dVar11 * dVar26));
    pfVar8[2] = (float)((double)(float)(dVar19 * dVar22 + dVar14) * dVar13 +
                       (double)((float)(dVar17 * dVar21 - dVar24) * fVar1 +
                               (float)(dVar11 * dVar19 + dVar23)));
    *pfVar8 = (float)((double)(float)(dVar17 * dVar22 + dVar16) * dVar13 +
                     (double)((float)(dVar18 * dVar23 - dVar25) * fVar1 +
                             (float)(dVar11 * dVar17 + (double)(float)(dVar12 * dVar20))));
    pfVar8[1] = (float)((double)(float)(dVar18 * dVar22 + dVar15) * dVar13 +
                       (double)((float)(dVar19 * dVar20 - dVar23) * fVar1 +
                               (float)(dVar11 * dVar18 + (double)(float)(dVar12 * dVar21))));
    pfVar8 = pfVar8 + 4;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  draw::FastDrawQuad(local_120,0,0,EffectTexHeaders,9);
  return;
}



//==== 0028f7d0  ns=mobyupdate_unsorted  size=0x97c
// sig: undefined UpdateMoby_1512(MobyInstance * moby)
// callers(0): 
// callees(10): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fea60 mobyutil::MB_randSphere; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 001206e8 partupd::SpawnPart_2; 004fff60 fastfunc::FastDecTimerS32; 00500b64 fastfunc::FastEulerToMtx; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor; 00502910 fastfunc::FastCheckBsphereInView

/* Moby 1512 */

void mobyupdate_unsorted::UpdateMoby_1512(MobyInstance *moby)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar10;
  u8 uVar12;
  int iVar11;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined4 local_90 [8];
  
  lVar4 = (longlong)(int)moby;
  piVar1 = (int *)moby->pVar;
  iVar10 = fastfunc::FastCheckBsphereInView(0x4050000000000000,local_e0);
  if (iVar10 != -1) {
    uVar12 = moby->state;
    if (uVar12 == '\x04') {
      uVar13 = 1;
      iVar10 = fastfunc::FastDecTimerS32(piVar1 + 9);
      if (iVar10 != 0) {
        dVar14 = (double)mobyutil::MB_randRangeFloat(60.0,120.0);
        iVar10 = fastfunc::FastDoubleToInt((double)(float)(dVar14 * (double)animationSpeed));
        uVar13 = 5;
        piVar1[9] = iVar10;
      }
      iVar10 = mobyutil::MB_randInt(4);
      if (((iVar10 == 0) || (1 < uVar13)) && (iVar10 = 0, uVar13 != 0)) {
        dVar14 = 1.0;
        dVar17 = 0.0;
        do {
          mobyutil::MB_randRangeFloat(-DAT_007ab2fc,DAT_007ab2fc);
          mobyutil::MB_randRangeFloat(-DAT_007ab2fc,DAT_007ab2fc);
          mobyutil::MB_randRangeFloat(-DAT_007ab2f8,DAT_007ab2f8);
          mobyutil::MB_randRangeFloat(DAT_007ab310,DAT_007ab314);
          mobyutil::MB_randRangeFloat(DAT_007ab318,DAT_007ab31c);
          uVar3 = DAT_007ab324;
          uVar2 = DAT_007ab320;
          mobyutil::MB_randRangeFloat((float)dVar17,(float)dVar14);
          uVar5 = fastfunc::FastLerpColor(uVar2,uVar3);
          uVar3 = DAT_007ab32c;
          uVar2 = DAT_007ab328;
          mobyutil::MB_randRangeFloat((float)dVar17,(float)dVar14);
          uVar6 = fastfunc::FastLerpColor(uVar2,uVar3);
          dVar15 = (double)mobyutil::MB_randRangeFloat((float)dVar17,(float)dVar14);
          uVar7 = fastfunc::FastDoubleToInt
                            ((double)(animationSpeed *
                                     (float)((double)(longlong)DAT_007ab300 * dVar15 + dVar14)));
          dVar16 = (double)(longlong)DAT_007ab304;
          dVar15 = (double)mobyutil::MB_randRangeFloat(-DAT_007ab30c,DAT_007ab30c);
          uVar8 = fastfunc::FastDoubleToInt
                            ((double)(animationSpeed *
                                     (float)(dVar16 * (double)(float)(dVar15 + dVar14))));
          dVar16 = (double)(longlong)DAT_007ab308;
          dVar15 = (double)mobyutil::MB_randRangeFloat(-DAT_007ab30c,DAT_007ab30c);
          uVar9 = fastfunc::FastDoubleToInt
                            ((double)(animationSpeed *
                                     (float)(dVar16 * (double)(float)(dVar15 + dVar14))));
          partupd::SpawnPart_2(lVar4 + 0x10,local_d0,local_c0,uVar5,uVar6,uVar7,uVar8,uVar9);
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)uVar13);
      }
    }
    else if (uVar12 == '\x03') {
      iVar10 = fastfunc::FastDecTimerS32(piVar1 + 8);
      if (iVar10 != 0) {
        dVar14 = (double)mobyutil::MB_randRangeFloat
                                   ((float)(longlong)DAT_007ab370,(float)(longlong)DAT_007ab374);
        iVar10 = fastfunc::FastDoubleToInt((double)(float)(dVar14 * (double)animationSpeed));
        piVar1[8] = iVar10;
        iVar11 = 1;
        iVar10 = mobyutil::MB_randInt(7);
        if (iVar10 == 0) {
          iVar11 = mobyutil::MB_randInt(5);
          iVar11 = iVar11 + 5;
        }
        iVar10 = 0;
        if (0 < iVar11) {
          dVar14 = 0.0;
          dVar17 = 1.0;
          do {
            mobyutil::MB_randSphere(dVar14,(double)(DAT_007ab340 * mobyutil::g_FrameTime),local_90);
            mobyutil::MB_randRangeFloat(-DAT_007ab33c,DAT_007ab33c);
            mobyutil::MB_randRangeFloat(-DAT_007ab33c,DAT_007ab33c);
            mobyutil::MB_randRangeFloat(DAT_007ab350,DAT_007ab354);
            mobyutil::MB_randRangeFloat(DAT_007ab358,DAT_007ab35c);
            uVar3 = DAT_007ab364;
            uVar2 = DAT_007ab360;
            mobyutil::MB_randRangeFloat((float)dVar14,(float)dVar17);
            uVar5 = fastfunc::FastLerpColor(uVar2,uVar3);
            uVar3 = DAT_007ab36c;
            uVar2 = DAT_007ab368;
            mobyutil::MB_randRangeFloat((float)dVar14,(float)dVar17);
            uVar6 = fastfunc::FastLerpColor(uVar2,uVar3);
            dVar15 = (double)mobyutil::MB_randRangeFloat((float)dVar14,(float)dVar17);
            uVar7 = fastfunc::FastDoubleToInt
                              ((double)(animationSpeed *
                                       (float)((double)(longlong)DAT_00fada70 * dVar15 + dVar17)));
            dVar16 = (double)(longlong)DAT_007ab344;
            dVar15 = (double)mobyutil::MB_randRangeFloat(-DAT_007ab34c,DAT_007ab34c);
            uVar8 = fastfunc::FastDoubleToInt
                              ((double)(animationSpeed *
                                       (float)(dVar16 * (double)(float)(dVar15 + dVar17))));
            dVar16 = (double)(longlong)DAT_007ab348;
            dVar15 = (double)mobyutil::MB_randRangeFloat(-DAT_007ab34c,DAT_007ab34c);
            uVar9 = fastfunc::FastDoubleToInt
                              ((double)(animationSpeed *
                                       (float)(dVar16 * (double)(float)(dVar15 + dVar17))));
            partupd::SpawnPart_2(lVar4 + 0x10,local_b0,local_a0,uVar5,uVar6,uVar7,uVar8,uVar9);
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar11);
        }
      }
    }
    else if (uVar12 == '\x02') {
      iVar10 = fastfunc::FastDecTimerS32(piVar1 + 10);
      if (iVar10 != 0) {
        mobyutil::MB_SpawnExplosionSparks
                  (0x3fd54fdf40000000,0x402a000000000000,lVar4,lVar4 + 0x10,&DAT_0028f7b0,
                   0xffffffffffffffff);
        moby->state = (char)((LZCOUNT(-*piVar1) << 0x3a) >> 0x3f) + '\x04';
      }
    }
    else if (uVar12 == '\0') {
      fastfunc::FastEulerToMtx(lVar4 + 0xc0,lVar4 + 0x40);
      uVar12 = '\x01';
      if (piVar1[1] == 0) {
        uVar12 = (char)((LZCOUNT(-*piVar1) << 0x3a) >> 0x3f) + '\x04';
      }
      moby->state = uVar12;
    }
  }
  return;
}



