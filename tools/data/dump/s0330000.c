//==== 00331450  ns=mobyupdate_helpers  size=0x14
// sig: undefined M293_00331450(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M293_00331450(void)

{
  DAT_00800934 = 0x10000;
  return;
}



//==== 00331468  ns=mobyupdate_helpers  size=0x38
// sig: undefined M293_00331468(void)
// callers(0): 
// callees(1): 0017ec40 water::IcePass

void mobyupdate_helpers::M293_00331468(void)

{
  water::IcePass(&DAT_00810240,0x2f,0x2c,0x2d);
  return;
}



//==== 003314a0  ns=mobyupdate_unsorted  size=0xa0
// sig: undefined UpdateMoby_293(MobyInstance * moby)
// callers(0): 
// callees(2): 0006d760 draw::RegisterOceanUpdate; 00110b70 mobyutil::MB_IsPntInCuboid

/* Moby 293 */

void mobyupdate_unsorted::UpdateMoby_293(MobyInstance *moby)

{
  int iVar1;
  
  if (moby->state == 0) {
    moby->state = '\x01';
    moby->updateDistance = -1;
  }
  else if ((moby->state < 2) &&
          ((iVar1 = *(int *)((int)moby->pVar + 0xc), iVar1 == -1 ||
           (iVar1 = mobyutil::MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)iVar1), iVar1 != 0
           )))) {
    draw::RegisterOceanUpdate(&PTR_M293_00331468_0070c028,moby);
  }
  return;
}



//==== 00331540  ns=mobyupdate_helpers  size=0x14
// sig: undefined M294_00331540(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M294_00331540(void)

{
  DAT_0081086c = 0x10000;
  return;
}



//==== 00331560  ns=mobyupdate_helpers  size=0x38
// sig: undefined M294_00331560(void)
// callers(0): 
// callees(1): 00110040 mobyutil::MB_SpawnExplosionSparks2

void mobyupdate_helpers::M294_00331560(void)

{
  mobyutil::MB_SpawnExplosionSparks2(0x3ff0000000000000,0x4024000000000000);
  return;
}



//==== 00331598  ns=mobyupdate_helpers  size=0xd8
// sig: undefined M294_00331598(void)
// callers(0): 
// callees(3): 000f1114 mobyfunc::GetBonePosition; 00117f38 mobyutil::MB_AttachMobyToJoint; 003a38c8 FUN_003a38c8

void mobyupdate_helpers::M294_00331598(MobyInstance *param_1)

{
  void *pvVar1;
  int iVar2;
  ushort uVar4;
  undefined4 uVar3;
  undefined1 local_20 [16];
  
  pvVar1 = param_1->pVar;
  if (*(MobyInstance **)((int)pvVar1 + 0x248) == (MobyInstance *)0x0) {
    mobyfunc::GetBonePosition(param_1,1,local_20);
    uVar3 = FUN_003a38c8(param_1);
    *(undefined4 *)((int)pvVar1 + 0x248) = uVar3;
  }
  else {
    mobyutil::MB_AttachMobyToJoint(param_1,*(MobyInstance **)((int)pvVar1 + 0x248),1);
    if ((param_1->modeBits & DISABLED) == NONE) {
      iVar2 = *(int *)((int)pvVar1 + 0x248);
      uVar4 = *(ushort *)(iVar2 + 0x34) & 0xffbe;
    }
    else {
      iVar2 = *(int *)((int)pvVar1 + 0x248);
      uVar4 = *(ushort *)(iVar2 + 0x34) | 0x41;
    }
    *(ushort *)(iVar2 + 0x34) = uVar4;
  }
  return;
}



//==== 00331670  ns=mobyupdate_helpers  size=0x64
// sig: undefined M294_00331670(void)
// callers(1): 00332c38 mobyupdate_unsorted::UpdateMoby_294
// callees(2): 000efb38 mobyfunc::DeleteMoby; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate

void mobyupdate_helpers::M294_00331670(MobyInstance *param_1)

{
  MobyInstance *moby;
  
  param_1->field76_0xb4 = '\0';
  param_1->field77_0xb5 = '\0';
  mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
  moby = *(MobyInstance **)((int)param_1->pVar + 0x248);
  if (moby != (MobyInstance *)0x0) {
    mobyfunc::DeleteMoby(moby);
  }
  mobyfunc::DeleteMoby(param_1);
  return;
}



//==== 00331708  ns=mobyupdate_helpers  size=0xb20
// sig: undefined M294_00331708(void)
// callers(1): 00332c38 mobyupdate_unsorted::UpdateMoby_294
// callees(7): 000fc948 mobyutil::MB_SplineIntersect; 00101ba8 mobyutil::MB_MoveForward100; 00104e44 mobyutil::PointInsideComplexPoly; 00109af0 mobyutil::Delt; 0010a2e0 mobyutil::OrganicDeltAng; 00502578 fastfunc::FastWrapRot; 005026a0 fastfunc::FastSubRots

double mobyupdate_helpers::M294_00331708(double param_1,double param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  byte bVar16;
  longlong lVar17;
  float *pfVar18;
  longlong lVar19;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double extraout_f1;
  double dVar23;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar24;
  double dVar25;
  ulonglong in_f30;
  double dVar26;
  double dVar27;
  ulonglong in_f31;
  double dVar28;
  float fVar29;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar15 = uVar11 - 400;
  puVar7 = (ulonglong *)lVar15;
  *puVar7 = uVar11;
  puVar7[0x34] = in_LR;
  puVar7[0x2d] = in_f27;
  puVar7[0x2e] = in_f28;
  puVar7[0x2f] = in_f29;
  puVar7[0x30] = in_f30;
  puVar7[0x31] = in_f31;
  puVar7[0x2a] = unaff_r29;
  puVar7[0x2c] = unaff_r31;
  iVar5 = *(int *)(param_3 + 0x78);
  puVar7[0x2b] = unaff_r30;
  dVar26 = 0.7853981852531433;
  if (*(char *)(iVar5 + 0x242) == '\0') {
    fVar29 = *(float *)(param_3 + 0x14);
    fVar2 = param_4[1];
    fVar1 = *(float *)(param_3 + 0x10);
    fVar3 = *param_4;
    dVar24 = (double)SQRT((fVar1 - fVar3) * (fVar1 - fVar3) + (fVar29 - fVar2) * (fVar29 - fVar2));
    if ((dVar24 <= 6.5) || (fVar4 = 0.0, param_1 == 0.0)) {
      fVar9 = ABS(fVar3 - fVar1);
      fVar4 = ABS(fVar2 - fVar29);
      *(float *)((int)puVar7 + 0x9c) = fVar3 - fVar1;
      *(float *)(puVar7 + 0x14) = fVar2 - fVar29;
      *(float *)((int)puVar7 + 0xa4) = fVar9 - fVar4;
      fVar29 = 0.0;
      uVar13 = (ulonglong)(*(uint *)((int)puVar7 + 0x9c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar7 + 0xa4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar7 + 0x14) >> 0x1d) & 4;
      fVar2 = ABS(*(float *)((int)puVar7 + 0x9c));
      if (*(float *)((int)puVar7 + 0xa4) - 0.0 < 0.0) {
        fVar2 = fVar4;
      }
      fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar13 << 2));
      fVar1 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
      fVar4 = ABS(*(float *)(puVar7 + 0x14));
      if (*(float *)((int)puVar7 + 0xa4) - 0.0 < 0.0) {
        fVar4 = fVar9;
      }
      if (0.0 < fVar2) {
        lVar14 = uVar11 - 0x180;
        lVar17 = uVar11 - 0xb0;
        lVar19 = uVar11 - 0xa0;
        lVar20 = 2;
        fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
        fVar4 = fVar2 * fVar2;
        *(float *)((int)puVar7 + 0xec) = fVar2;
        *(float *)((int)puVar7 + 0xe4) = fVar2;
        *(float *)(puVar7 + 0x1d) = fVar2;
        *(float *)(puVar7 + 0x1c) = fVar2;
        fVar2 = fVar4 * fVar4;
        *(float *)((int)puVar7 + 0xe4) = *(float *)((int)puVar7 + 0xe4) * fVar4;
        *(float *)(puVar7 + 0x1d) = *(float *)(puVar7 + 0x1d) * fVar2;
        *(float *)((int)puVar7 + 0xec) = *(float *)((int)puVar7 + 0xec) * fVar2 * fVar4;
        do {
          *(float *)((int)lVar14 + 0xe0) = *(float *)((int)lVar14 + 0xd0) * fVar2 * fVar2;
          iVar12 = (int)lVar17;
          lVar14 = lVar14 + 8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar12 + 4) * fVar2 * fVar2;
          lVar19 = lVar19 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar20 = 4;
        lVar19 = uVar11 - 0xb0;
        pfVar18 = (float *)&DAT_007358e0;
        lVar14 = lVar15;
        lVar17 = lVar19;
        do {
          fVar2 = *pfVar18;
          fVar4 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar14 + 0xe0) = *(float *)((int)lVar14 + 0xe0) * fVar2;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
          lVar17 = lVar17 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar17 = 2;
        lVar14 = lVar15;
        do {
          iVar12 = (int)lVar14;
          iVar8 = (int)lVar19;
          lVar14 = lVar14 + 0x10;
          lVar19 = lVar19 + 0x10;
          fVar29 = fVar29 + *(float *)(iVar12 + 0xe0) + *(float *)(iVar8 + 4) +
                   *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc);
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        fVar29 = (fVar29 + 0.7853982) * fVar3 + fVar1;
      }
      mobyutil::OrganicDeltAng
                (fVar29,DAT_0071f418 * 15.707963,DAT_0071f418 * 12.566371,
                 mobyutil::g_FrameTime * 25.132742,(float *)(param_3 + 0x48),0x3316d4,
                 (float *)(iVar5 + 0x23c));
    }
    else {
      fVar10 = ABS(fVar3 - fVar1);
      fVar9 = ABS(fVar2 - fVar29);
      *(float *)(puVar7 + 0x15) = fVar3 - fVar1;
      *(float *)((int)puVar7 + 0xac) = fVar2 - fVar29;
      *(float *)(puVar7 + 0x16) = fVar10 - fVar9;
      uVar13 = (ulonglong)(*(uint *)(puVar7 + 0x15) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar7 + 0x16) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar7 + 0xac) >> 0x1d) & 4;
      fVar29 = ABS(*(float *)(puVar7 + 0x15));
      if (*(float *)(puVar7 + 0x16) - 0.0 < 0.0) {
        fVar29 = fVar9;
      }
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar13 << 2));
      fVar1 = ABS(*(float *)((int)puVar7 + 0xac));
      if (*(float *)(puVar7 + 0x16) - 0.0 < 0.0) {
        fVar1 = fVar10;
      }
      fVar3 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
      if (0.0 < fVar29) {
        lVar14 = uVar11 - 0x180;
        lVar17 = uVar11 - 0x90;
        lVar19 = uVar11 - 0x80;
        lVar20 = 2;
        fVar29 = (fVar1 - fVar29) / (fVar1 + fVar29);
        fVar1 = fVar29 * fVar29;
        *(float *)((int)puVar7 + 0x10c) = fVar29;
        *(float *)((int)puVar7 + 0x104) = fVar29;
        *(float *)(puVar7 + 0x21) = fVar29;
        *(float *)(puVar7 + 0x20) = fVar29;
        fVar29 = fVar1 * fVar1;
        *(float *)((int)puVar7 + 0x104) = *(float *)((int)puVar7 + 0x104) * fVar1;
        *(float *)(puVar7 + 0x21) = *(float *)(puVar7 + 0x21) * fVar29;
        *(float *)((int)puVar7 + 0x10c) = *(float *)((int)puVar7 + 0x10c) * fVar29 * fVar1;
        do {
          *(float *)((int)lVar14 + 0x100) = *(float *)((int)lVar14 + 0xf0) * fVar29 * fVar29;
          iVar12 = (int)lVar17;
          lVar14 = lVar14 + 8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar12 + 4) * fVar29 * fVar29;
          lVar19 = lVar19 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar20 = 4;
        lVar19 = uVar11 - 0x90;
        pfVar18 = (float *)&DAT_007358e0;
        lVar14 = lVar15;
        lVar17 = lVar19;
        do {
          fVar29 = *pfVar18;
          fVar1 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar14 + 0x100) = *(float *)((int)lVar14 + 0x100) * fVar29;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar1;
          lVar17 = lVar17 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar17 = 2;
        lVar14 = lVar15;
        do {
          iVar12 = (int)lVar14;
          iVar8 = (int)lVar19;
          lVar14 = lVar14 + 0x10;
          lVar19 = lVar19 + 0x10;
          fVar4 = fVar4 + *(float *)(iVar12 + 0x100) + *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8)
                  + *(float *)(iVar8 + 0xc);
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        fVar4 = (fVar4 + 0.7853982) * fVar2 + fVar3;
      }
      dVar21 = (double)fastfunc::FastWrapRot(fVar4,(float)param_1);
      mobyutil::OrganicDeltAng
                ((float)dVar21,DAT_0071f418 * 15.707963,DAT_0071f418 * 12.566371,
                 mobyutil::g_FrameTime * 25.132742,(float *)(param_3 + 0x48),0x3316d4,
                 (float *)(iVar5 + 0x23c));
    }
    dVar21 = 0.0;
    if (param_2 == 0.0) {
      fVar29 = *param_4 - *(float *)(param_3 + 0x10);
      fVar2 = param_4[1] - *(float *)(param_3 + 0x14);
      fVar3 = ABS(fVar29);
      fVar1 = ABS(fVar2);
      *(float *)(puVar7 + 0x12) = fVar29;
      *(float *)((int)puVar7 + 0x94) = fVar2;
      fVar29 = *(float *)(param_3 + 0x48);
      *(float *)(puVar7 + 0x13) = fVar3 - fVar1;
      uVar13 = (ulonglong)(*(uint *)(puVar7 + 0x12) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar7 + 0x13) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar7 + 0x94) >> 0x1d) & 4;
      fVar2 = ABS(*(float *)(puVar7 + 0x12));
      if (*(float *)(puVar7 + 0x13) - 0.0 < 0.0) {
        fVar2 = fVar1;
      }
      fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar13 << 2));
      fVar4 = ABS(*(float *)((int)puVar7 + 0x94));
      if (*(float *)(puVar7 + 0x13) - 0.0 < 0.0) {
        fVar4 = fVar3;
      }
      fVar3 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
      dVar25 = dVar21;
      if (0.0 < fVar2) {
        lVar14 = uVar11 - 0x180;
        lVar17 = uVar11 - 0xd0;
        lVar19 = uVar11 - 0xc0;
        lVar20 = 2;
        fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
        fVar4 = fVar2 * fVar2;
        *(float *)((int)puVar7 + 0xcc) = fVar2;
        *(float *)((int)puVar7 + 0xc4) = fVar2;
        *(float *)(puVar7 + 0x19) = fVar2;
        *(float *)(puVar7 + 0x18) = fVar2;
        fVar2 = fVar4 * fVar4;
        *(float *)((int)puVar7 + 0xc4) = *(float *)((int)puVar7 + 0xc4) * fVar4;
        *(float *)(puVar7 + 0x19) = *(float *)(puVar7 + 0x19) * fVar2;
        *(float *)((int)puVar7 + 0xcc) = *(float *)((int)puVar7 + 0xcc) * fVar2 * fVar4;
        do {
          *(float *)((int)lVar14 + 0xc0) = *(float *)((int)lVar14 + 0xb0) * fVar2 * fVar2;
          iVar12 = (int)lVar17;
          lVar14 = lVar14 + 8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar12 + 4) * fVar2 * fVar2;
          lVar19 = lVar19 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar20 = 4;
        lVar19 = uVar11 - 0xd0;
        pfVar18 = (float *)&DAT_007358e0;
        lVar14 = lVar15;
        lVar17 = lVar19;
        do {
          fVar2 = *pfVar18;
          fVar4 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar14 + 0xc0) = *(float *)((int)lVar14 + 0xc0) * fVar2;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
          lVar17 = lVar17 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar14 = 2;
        do {
          iVar12 = (int)lVar15;
          lVar15 = lVar15 + 0x10;
          iVar8 = (int)lVar19;
          lVar19 = lVar19 + 0x10;
          dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar12 + 0xc0)) +
                            *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc))
          ;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        dVar25 = (double)((float)(dVar25 + dVar26) * fVar1 + fVar3);
      }
      dVar26 = (double)fastfunc::FastSubRots(fVar29,(float)dVar25);
      if ((1.5707963705062866 <= dVar26) || (dVar24 <= 6.0)) {
        fVar29 = mobyutil::Delt(mobyutil::g_FrameTime,DAT_0071f418 * 7.0,(float *)(iVar5 + 0xf4));
        dVar26 = (double)fVar29;
      }
      else {
        fVar29 = mobyutil::Delt(mobyutil::g_FrameTime * 7.0,DAT_0071f418 * 7.0,
                                (float *)(iVar5 + 0xf4));
        dVar26 = (double)fVar29;
      }
    }
    else {
      fVar29 = mobyutil::Delt((float)param_2,DAT_0071f418 * 7.0,(float *)(iVar5 + 0xf4));
      dVar26 = (double)fVar29;
    }
    dVar28 = (double)*(float *)(param_3 + 0x10);
    dVar27 = (double)*(float *)(param_3 + 0x14);
    dVar25 = (double)*(float *)(param_3 + 0x18);
    dVar24 = (double)*(float *)(param_3 + 0x1c);
    dVar26 = (double)mobyutil::MB_MoveForward100(dVar26,param_3,iVar5 + 0xd0);
    if (*(int *)(iVar5 + 0x26c) != -1) {
      fVar2 = (float)(dVar27 - (double)*(float *)(param_3 + 0x14));
      fVar1 = (float)(dVar28 - (double)*(float *)(param_3 + 0x10));
      fVar3 = (float)(dVar25 - (double)*(float *)(param_3 + 0x18));
      *(float *)((int)puVar7 + 0x8c) = (float)dVar24;
      uVar6 = *(undefined4 *)(iVar5 + 0x26c);
      dVar24 = (double)SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
      fVar29 = (float)(0.05000000074505806 / dVar24);
      dVar26 = dVar21;
      if (dVar21 - dVar24 < 0.0) {
        dVar26 = (double)(fVar29 * fVar3);
      }
      dVar22 = dVar21;
      if (dVar21 - dVar24 < 0.0) {
        dVar22 = (double)(fVar29 * fVar2);
      }
      dVar23 = dVar21;
      if (dVar21 - dVar24 < 0.0) {
        dVar23 = (double)(fVar29 * fVar1);
      }
      if (dVar24 - dVar21 < 0.0) {
        dVar26 = (double)(fVar29 * fVar3);
      }
      if (dVar24 - dVar21 < 0.0) {
        dVar22 = (double)(fVar29 * fVar2);
      }
      if (dVar24 - dVar21 < 0.0) {
        dVar23 = (double)(fVar29 * fVar1);
      }
      *(float *)(puVar7 + 0x11) = (float)(dVar25 + dVar26);
      *(float *)((int)puVar7 + 0x84) = (float)(dVar27 + dVar22);
      *(float *)(puVar7 + 0x10) = (float)(dVar28 + dVar23);
      iVar12 = mobyutil::MB_SplineIntersect
                         (uVar6,(Vec4 *)(param_3 + 0x10),uVar11 - 0x110,uVar11 - 0x120);
      dVar26 = extraout_f1;
      if (iVar12 != 0) {
        iVar12 = mobyutil::PointInsideComplexPoly
                           ((Vec4 *)(param_3 + 0x10),
                            (Vec4 *)Splines[*(int *)(iVar5 + 0x26c)]->points,
                            Splines[*(int *)(iVar5 + 0x26c)]->cnt);
        fVar2 = *(float *)(param_3 + 0x10);
        fVar29 = *(float *)(param_3 + 0x14);
        fVar1 = *(float *)(param_3 + 0x18);
        if (iVar12 == 0) {
          fVar2 = *(float *)(puVar7 + 0xe);
          *(float *)(param_3 + 0x10) = fVar2;
          fVar29 = *(float *)((int)puVar7 + 0x74);
          *(float *)(param_3 + 0x14) = fVar29;
          fVar1 = *(float *)(puVar7 + 0xf);
          *(float *)(param_3 + 0x18) = fVar1;
          *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)((int)puVar7 + 0x7c);
        }
        dVar26 = (double)SQRT((float)((double)fVar1 - dVar25) * (float)((double)fVar1 - dVar25) +
                              (float)((double)fVar2 - dVar28) * (float)((double)fVar2 - dVar28) +
                              (float)((double)fVar29 - dVar27) * (float)((double)fVar29 - dVar27));
        if ((double)(mobyutil::g_FrameTime * 0.5) <= dVar26) {
          *(undefined1 *)(iVar5 + 0x243) = 0;
        }
        else {
          bVar16 = *(char *)(iVar5 + 0x243) + 1;
          *(byte *)(iVar5 + 0x243) = bVar16;
          dVar26 = (double)(longlong)(int)(animationSpeed * 15.5);
          puVar7[0x28] = (ulonglong)dVar26;
          if (*(int *)((int)puVar7 + 0x144) < (int)(uint)bVar16) {
            *(undefined1 *)(iVar5 + 0x242) = 1;
          }
        }
      }
    }
  }
  else {
    fVar29 = *param_4 - *(float *)(param_3 + 0x10);
    fVar2 = param_4[1] - *(float *)(param_3 + 0x14);
    fVar3 = ABS(fVar29);
    fVar1 = ABS(fVar2);
    *(float *)((int)puVar7 + 0xb4) = fVar29;
    *(float *)(puVar7 + 0x17) = fVar2;
    *(float *)((int)puVar7 + 0xbc) = fVar3 - fVar1;
    fVar29 = 0.0;
    uVar13 = (ulonglong)(*(uint *)((int)puVar7 + 0xb4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar7 + 0xbc) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar7 + 0x17) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)((int)puVar7 + 0xb4));
    if (*(float *)((int)puVar7 + 0xbc) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar13 << 2));
    fVar1 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
    fVar9 = ABS(*(float *)(puVar7 + 0x17));
    if (*(float *)((int)puVar7 + 0xbc) - 0.0 < 0.0) {
      fVar9 = fVar3;
    }
    if (0.0 < fVar2) {
      lVar14 = uVar11 - 0x180;
      lVar19 = uVar11 - 0x60;
      lVar17 = uVar11 - 0x70;
      lVar20 = 2;
      fVar2 = (fVar9 - fVar2) / (fVar9 + fVar2);
      fVar3 = fVar2 * fVar2;
      *(float *)((int)puVar7 + 300) = fVar2;
      *(float *)((int)puVar7 + 0x124) = fVar2;
      *(float *)(puVar7 + 0x25) = fVar2;
      *(float *)(puVar7 + 0x24) = fVar2;
      fVar2 = fVar3 * fVar3;
      *(float *)((int)puVar7 + 0x124) = *(float *)((int)puVar7 + 0x124) * fVar3;
      *(float *)(puVar7 + 0x25) = *(float *)(puVar7 + 0x25) * fVar2;
      *(float *)((int)puVar7 + 300) = *(float *)((int)puVar7 + 300) * fVar2 * fVar3;
      do {
        *(float *)((int)lVar14 + 0x120) = *(float *)((int)lVar14 + 0x110) * fVar2 * fVar2;
        iVar12 = (int)lVar17;
        lVar17 = lVar17 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar12 + 4) * fVar2 * fVar2;
        lVar19 = lVar19 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar20 = 4;
      lVar19 = uVar11 - 0x70;
      pfVar18 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar17 = lVar19;
      do {
        fVar2 = *pfVar18;
        fVar3 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar14 + 0x120) = *(float *)((int)lVar14 + 0x120) * fVar2;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar3;
        lVar17 = lVar17 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar14 = 2;
      do {
        iVar12 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar8 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        fVar29 = fVar29 + *(float *)(iVar12 + 0x120) + *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8)
                 + *(float *)(iVar8 + 0xc);
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      fVar29 = (fVar29 + 0.7853982) * fVar4 + fVar1;
    }
    fVar29 = mobyutil::OrganicDeltAng
                       (fVar29,DAT_0071f418 * 15.707963,DAT_0071f418 * 12.566371,
                        mobyutil::g_FrameTime * 25.132742,(float *)(param_3 + 0x48),0x3316d4,
                        (float *)(iVar5 + 0x23c));
    dVar26 = (double)fVar29;
  }
  return dVar26;
}



//==== 00332230  ns=mobyupdate_helpers  size=0x68
// sig: undefined M294_00332230(void)
// callers(0): 
// callees(2): 000ffb70 mobyutil::GetGroundZ; 00109af0 mobyutil::Delt

double mobyupdate_helpers::M294_00332230(longlong param_1)

{
  double dVar1;
  float fVar2;
  
  dVar1 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,param_1 + 0x10,0);
  fVar2 = mobyutil::Delt((float)dVar1,DAT_0071f418 * 27.0,(float *)((int)param_1 + 0x18));
  return (double)fVar2;
}



//==== 003322b0  ns=mobyupdate_helpers  size=0x268
// sig: undefined M294_003322b0(void)
// callers(1): 00332c38 mobyupdate_unsorted::UpdateMoby_294
// callees(1): 005025e0 fastfunc::FastDiffRots

void mobyupdate_helpers::M294_003322b0(int param_1,float *param_2)

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
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  double dVar20;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar12 = uVar11 - 0xb0;
  puVar7 = (ulonglong *)lVar12;
  *puVar7 = uVar11;
  puVar7[0x18] = in_LR;
  fVar1 = *param_2 - *(float *)(param_1 + 0x10);
  fVar5 = param_2[1] - *(float *)(param_1 + 0x14);
  fVar4 = ABS(fVar1);
  fVar2 = ABS(fVar5);
  *(float *)(puVar7 + 0xe) = fVar1;
  puVar7[0x15] = unaff_r31;
  *(float *)((int)puVar7 + 0x74) = fVar5;
  iVar6 = *(int *)(param_1 + 0x78);
  *(float *)(puVar7 + 0xf) = fVar4 - fVar2;
  dVar20 = 0.0;
  fVar1 = *(float *)(param_1 + 0x48);
  uVar13 = (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar7 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x74) >> 0x1d) & 4;
  fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar13 << 2));
  fVar3 = ABS(*(float *)(puVar7 + 0xe));
  if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
    fVar3 = fVar2;
  }
  fVar2 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
  fVar10 = ABS(*(float *)((int)puVar7 + 0x74));
  if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
    fVar10 = fVar4;
  }
  if (0.0 < fVar3) {
    lVar16 = uVar11 - 0xa0;
    lVar15 = uVar11 - 0x34;
    lVar14 = uVar11 - 0x24;
    lVar18 = 2;
    fVar3 = (fVar10 - fVar3) / (fVar10 + fVar3);
    fVar4 = fVar3 * fVar3;
    *(float *)(puVar7 + 0x11) = fVar3;
    *(float *)(puVar7 + 0x10) = fVar3;
    *(float *)((int)puVar7 + 0x84) = fVar3;
    *(float *)((int)puVar7 + 0x7c) = fVar3;
    fVar3 = fVar4 * fVar4;
    *(float *)(puVar7 + 0x10) = *(float *)(puVar7 + 0x10) * fVar4;
    *(float *)((int)puVar7 + 0x84) = *(float *)((int)puVar7 + 0x84) * fVar3;
    *(float *)(puVar7 + 0x11) = *(float *)(puVar7 + 0x11) * fVar3 * fVar4;
    do {
      *(float *)((int)lVar16 + 0x7c) = *(float *)((int)lVar16 + 0x6c) * fVar3 * fVar3;
      iVar8 = (int)lVar15;
      lVar16 = lVar16 + 8;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)(iVar8 + 4) * fVar3 * fVar3;
      lVar14 = lVar14 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar16 = uVar11 - 0x34;
    pfVar17 = (float *)&DAT_007358e0;
    lVar18 = 4;
    lVar14 = lVar16;
    lVar15 = lVar12;
    do {
      fVar3 = *pfVar17;
      fVar4 = pfVar17[1];
      pfVar17 = pfVar17 + 2;
      *(float *)((int)lVar15 + 0x7c) = *(float *)((int)lVar15 + 0x7c) * fVar3;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar4;
      lVar14 = lVar14 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar14 = 2;
    do {
      iVar8 = (int)lVar12;
      lVar12 = lVar12 + 0x10;
      iVar9 = (int)lVar16;
      lVar16 = lVar16 + 0x10;
      dVar20 = (double)((float)(dVar20 + (double)*(float *)(iVar8 + 0x7c)) + *(float *)(iVar9 + 4) +
                        *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    dVar20 = (double)((float)(dVar20 + 0.7853981852531433) * fVar5 + fVar2);
  }
  dVar19 = (double)fastfunc::FastDiffRots(dVar20,(double)fVar1);
  dVar20 = 1.2217304706573486;
  if ((dVar19 <= 1.2217304706573486) && (dVar20 = dVar19, dVar19 < -1.2217304706573486)) {
    dVar20 = -1.2217304706573486;
  }
  *(float *)(iVar6 + 0x188) = (float)(dVar20 * 0.3499999940395355);
  *(float *)(iVar6 + 0x208) = (float)(dVar20 * 0.800000011920929);
  return;
}



//==== 00332560  ns=mobyupdate_helpers  size=0x640
// sig: undefined M294_00332560(void)
// callers(1): 00332c38 mobyupdate_unsorted::UpdateMoby_294
// callees(15): 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 00104214 mobyutil::MB_CountActiveMobysByGroup; 00104298 mobyutil::MB_SetGroupField; 00105c08 mobyutil::CollDamageMobyDirect; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00110b70 mobyutil::MB_IsPntInCuboid; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M294_00332560
               (MobyInstance *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  float fVar1;
  u8 uVar2;
  undefined4 uVar3;
  MOBY_OCLASSES MVar4;
  void *pvVar5;
  MobyInstance *moby;
  undefined2 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  undefined8 in_LR;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float local_90;
  float local_8c;
  undefined4 local_88;
  undefined1 auStack_80 [4];
  float local_7c;
  float local_78;
  float local_74;
  longlong local_70;
  
  pvVar5 = param_1->pVar;
  uVar12 = ZEXT48(pvVar5);
  if (*(int *)((int)pvVar5 + 0x38) != 0) {
    auVar21 = ZEXT416(0xffffffff);
    auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
    auVar22 = vectorShiftLeftIntegerWord(auVar21,auVar21);
    *(undefined4 *)((int)pvVar5 + 0x38) = 0;
    auVar21 = loadVectorLeftIndexed(in_LR,0x332518);
    auVar21 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar21 = vectorMultiplyAddFloatingPoint
                        (auVar23,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,
                         auVar22);
    auVar21 = vectorConvertToSignedFixedPointWordSaturate(auVar21,0);
    auVar21 = vectorSplatHalfWord(auVar21,1);
    uVar6 = storeVectorElementHalfWordIndexed(auVar21,0x240,uVar12);
    *(undefined2 *)((int)pvVar5 + 0x240) = uVar6;
  }
  uVar2 = param_1->state;
  if (uVar2 != '\0') {
    iVar10 = fastfunc::FastDecTimerS16(uVar12 + 0x240);
    uVar3 = 0x41a00000;
    if (iVar10 != 0) {
      uVar3 = *(undefined4 *)((int)pvVar5 + 0x28c);
    }
    *(undefined4 *)((int)pvVar5 + 0x230) = uVar3;
    uVar2 = param_1->state;
  }
  if (uVar2 != '\x02' && *(int *)((int)pvVar5 + 0x274) != 0) {
    iVar10 = *(int *)((int)pvVar5 + 0x288) + 1;
    *(int *)((int)pvVar5 + 0x288) = iVar10;
    local_70 = (longlong)(int)(animationSpeed * 60.5);
    if ((int)(animationSpeed * 60.5) * 0x11 < iVar10) {
      iVar10 = 0;
      if (*(int *)((int)pvVar5 + 0x278) != -1) {
        iVar10 = mobyutil::MB_CountActiveMobysByGroup(*(int *)((int)pvVar5 + 0x278),2);
      }
      if (*(int *)((int)pvVar5 + 0x27c) != -1) {
        iVar11 = mobyutil::MB_CountActiveMobysByGroup(*(int *)((int)pvVar5 + 0x27c),2);
        iVar10 = iVar10 + iVar11;
      }
      if (*(int *)((int)pvVar5 + 0x280) != -1) {
        iVar11 = mobyutil::MB_CountActiveMobysByGroup(*(int *)((int)pvVar5 + 0x280),2);
        iVar10 = iVar10 + iVar11;
      }
      if (*(int *)((int)pvVar5 + 0x284) != -1) {
        iVar11 = mobyutil::MB_CountActiveMobysByGroup(*(int *)((int)pvVar5 + 0x284),2);
        iVar10 = iVar10 + iVar11;
      }
      if ((8 < iVar10) && (iVar10 = mobyutil::MB_randInt(0x27), iVar10 == 0)) {
        dVar20 = 3.1415927410125732;
        dVar13 = (double)fastfunc::FastWrapRot((param_1->rotation).z,3.1415927);
        dVar19 = 3.141592502593994;
        fVar1 = (float)(dVar13 + 1.570796251296997);
        dVar18 = -3.141592502593994;
        dVar17 = -0.16666656732559204;
        dVar16 = 0.008333025500178337;
        dVar15 = -0.0001980741071747616;
        dVar13 = 2.601886990305502e-06;
        fVar7 = 3.1415925 - fVar1;
        if (fVar1 - (3.1415925 - fVar1) < 0.0) {
          fVar7 = fVar1;
        }
        fVar8 = -3.1415925 - fVar1;
        if ((-3.1415925 - fVar1) - fVar7 < 0.0) {
          fVar8 = fVar7;
        }
        fVar9 = fVar8 * fVar8;
        fVar1 = fVar9 * fVar9 * fVar8;
        fVar7 = fVar9 * fVar1;
        local_90 = fVar9 * fVar7 * 2.601887e-06 +
                   fVar7 * -0.0001980741 +
                   fVar1 * 0.0083330255 + fVar9 * fVar8 * -0.16666657 + fVar8;
        dVar14 = (double)fastfunc::FastWrapRot((param_1->rotation).z,(float)dVar20);
        local_88 = 0;
        dVar20 = (double)(float)(dVar19 - dVar14);
        if (dVar14 - (double)(float)(dVar19 - dVar14) < 0.0) {
          dVar20 = dVar14;
        }
        dVar19 = (double)(float)(dVar18 - dVar14);
        if ((double)(float)(dVar18 - dVar14) - dVar20 < 0.0) {
          dVar19 = dVar20;
        }
        dVar18 = (double)(float)(dVar19 * dVar19);
        dVar14 = (double)(float)(dVar18 * (double)(float)(dVar18 * dVar19));
        dVar20 = (double)(float)(dVar18 * dVar14);
        local_8c = (float)((double)(float)(dVar18 * dVar20) * dVar13 +
                          (double)(float)(dVar20 * dVar15 +
                                         (double)(float)(dVar14 * dVar16 +
                                                        (double)(float)((double)(float)(dVar18 * 
                                                  dVar19) * dVar17 + dVar19))));
        mobyutil::CollDamageMobyDirect
                  (1.0,param_1,g_heroMobyPtr,0x10000,param_4,&(param_1->pos).x,&local_90);
      }
    }
  }
  if ((*(int *)((int)pvVar5 + 0x290) == -1) ||
     (iVar10 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar5 + 0x290)),
     iVar10 == 0)) {
    iVar10 = mobyutil::MB_damage(param_1,0x330000,0);
    dVar13 = 0.0;
    local_7c = 0.0;
    mobyutil::MB_HandleDamage(param_1,iVar10,uVar12 + 0x20,0,auStack_80,&local_7c,0,4);
    if (iVar10 != 0) {
      MVar4 = *(MOBY_OCLASSES *)(*(int *)(iVar10 + 0x20) + 0xa6);
      if (((MVar4 != (PYROCITOR|BLARG_HEAVY_INTERCEPTOR_0008) && MVar4 != param_1->oClass) &&
          (param_1->state != '\t')) && (local_7c != 0.0)) {
        if (param_1->group != -1) {
          mobyutil::MB_SetGroupField(param_1->group,1);
        }
        fVar1 = *(float *)((int)pvVar5 + 0x20) - local_7c;
        *(float *)((int)pvVar5 + 0x20) = fVar1;
        fVar7 = DAT_0071f418;
        *(undefined1 *)((int)pvVar5 + 0xad) = 0;
        *(undefined4 *)((int)pvVar5 + 0x94) = 9;
        *(undefined4 *)((int)pvVar5 + 0xa0) = 0x3f800000;
        *(undefined4 *)((int)pvVar5 + 0xa4) = 0x3f800000;
        *(undefined4 *)((int)pvVar5 + 0xa8) = 0x3f800000;
        *(float *)((int)pvVar5 + 0x80) = fVar7 * 30.0;
        fVar7 = mobyutil::g_FrameTime;
        if (dVar13 < (double)fVar1) {
          *(float *)((int)pvVar5 + 0x88) = mobyutil::g_FrameTime * 4.7;
          *(float *)((int)pvVar5 + 0x8c) = fVar7 * 7.7;
          mobyutil::MB_VecAtan2Angles
                    (*(undefined8 *)(iVar10 + 0x10),*(undefined8 *)(iVar10 + 0x18),&local_74,
                     uVar12 + 0x88,uVar12 + 0x8c);
          mobyutil::MB_StartKick((double)local_74,param_1,uVar12 + 0x70);
          auVar21 = ZEXT416(0xffffffff);
          auVar22 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
          *(undefined4 *)((int)pvVar5 + 0xc0) = 0x40800000;
          *(undefined4 *)((int)pvVar5 + 0xc4) = 0x41000000;
          param_1->state = '\x04';
          *(undefined1 *)((int)pvVar5 + 0x67) = 0xfa;
          auVar21 = loadVectorLeftIndexed(8,0x332518);
          auVar22 = vectorShiftLeftIntegerWord(auVar22,auVar22);
          auVar21 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar21 = vectorMultiplyAddFloatingPoint
                              (auVar23,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60
                               ,auVar22);
          auVar21 = vectorConvertToSignedFixedPointWordSaturate(auVar21,0);
          auVar21 = vectorSplatHalfWord(auVar21,1);
          uVar6 = storeVectorElementHalfWordIndexed(auVar21,0x26,uVar12);
          *(undefined2 *)((int)pvVar5 + 0x26) = uVar6;
          mobyutil::MB_UpdateLightsTransition(param_1,uVar12 + 0x60);
        }
        else {
          param_1->modeBits =
               param_1->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
          fVar1 = mobyutil::g_FrameTime;
          *(float *)((int)pvVar5 + 0x88) = mobyutil::g_FrameTime * 12.0;
          *(float *)((int)pvVar5 + 0x8c) = fVar1 * 9.0;
          mobyutil::MB_VecAtan2Angles
                    (*(undefined8 *)(iVar10 + 0x10),*(undefined8 *)(iVar10 + 0x18),&local_78,
                     uVar12 + 0x88,uVar12 + 0x8c);
          mobyutil::MB_StartKick((double)local_78,param_1,uVar12 + 0x70);
          *(undefined4 *)((int)pvVar5 + 0xc0) = 0x41200000;
          *(undefined4 *)((int)pvVar5 + 0xc4) = 0x41980000;
          param_1->state = '\t';
          *(undefined1 *)((int)pvVar5 + 0x67) = 0x78;
          mobyutil::MB_UpdateLightsTransition(param_1,uVar12 + 0x60);
        }
      }
    }
    param_1->damage = -1;
    mobyutil::MB_ColorDyingMoby(param_1,uVar12 + 0x60);
  }
  else {
    param_1->field76_0xb4 = '\0';
    param_1->field77_0xb5 = '\0';
    mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
    moby = *(MobyInstance **)((int)param_1->pVar + 0x248);
    if (moby != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby(moby);
    }
    mobyfunc::DeleteMoby(param_1);
  }
  return;
}



//==== 00332c38  ns=mobyupdate_unsorted  size=0x1e54
// sig: undefined UpdateMoby_294(MobyInstance * moby)
// callers(0): 
// callees(42): 0001b100 mobyupdate_helpers::M184_0001b100; 00057820 collproc::CollLine; 0005e598 collproc::CollMobySphere; 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fdf80 mobyutil::MB_SetAnimationFrame; 000fe484 mobyutil::MB_randRange; 000fe4f0 mobyutil::MB_randRangeSigned; 000fe610 mobyutil::MB_SphericalToVector; 000ffb70 mobyutil::GetGroundZ; 00100f8c mobyutil::MB_InitDefaultParams; 00104298 mobyutil::MB_SetGroupField; 00105c08 mobyutil::CollDamageMobyDirect; 00109af0 mobyutil::Delt; 0010af88 mobyutil::MB_isCrate; 0010b030 mobyutil::MB_UpdateKick; 00110040 mobyutil::MB_SpawnExplosionSparks2; 00110b70 mobyutil::MB_IsPntInCuboid; 001118d8 mobyutil::MB_getTarget; 00113e88 mobyutil::MB_MayaFrameTrigger; 001167c8 mobyutil::MB_UpdateManipulatorRot; 00117cc0 mobyutil::MB_IsPntInRangeAndArc; 00117f38 mobyutil::MB_AttachMobyToJoint; 001367d0 path::PathFindClosestPnt; 0015d12c sound::PlayMobySound; 00331670 mobyupdate_helpers::M294_00331670; 00331708 mobyupdate_helpers::M294_00331708; 003322b0 mobyupdate_helpers::M294_003322b0; 00332560 mobyupdate_helpers::M294_00332560; 003a38c8 FUN_003a38c8; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand; 005e7e98 FUN_005e7e98; 005e8078 mathfunc::cosf

/* Moby 294 */

void mobyupdate_unsorted::UpdateMoby_294(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  uint *puVar10;
  int *piVar11;
  f32 fVar12;
  MobyInstance *pMVar13;
  void *pvVar14;
  Spline *pSVar15;
  ulonglong *puVar16;
  float fVar17;
  MobyInstance *pMVar18;
  gameMode_t gVar19;
  undefined4 uVar20;
  ulonglong uVar21;
  longlong lVar22;
  int iVar25;
  uint uVar26;
  ulonglong uVar23;
  bool bVar28;
  longlong lVar24;
  undefined4 uVar27;
  float *pfVar30;
  longlong lVar29;
  longlong lVar31;
  longlong lVar32;
  ulonglong unaff_r24;
  undefined4 *puVar33;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int iVar34;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  u8 uVar36;
  ushort uVar35;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  lVar22 = (longlong)(int)moby;
  uVar21 = ZEXT48(&stack0x00000000);
  lVar32 = uVar21 - 0x290;
  puVar16 = (ulonglong *)lVar32;
  *puVar16 = uVar21;
  puVar16[0x54] = in_LR;
  puVar16[0x4f] = in_f29;
  puVar16[0x50] = in_f30;
  puVar16[0x51] = in_f31;
  puVar16[0x4e] = unaff_r31;
  puVar16[0x4a] = unaff_r27;
  gVar19 = g_gameMode;
  pvVar9 = moby->pVar;
  puVar16[0x4d] = unaff_r30;
  puVar16[0x4c] = unaff_r29;
  puVar16[0x4b] = unaff_r28;
  puVar16[0x49] = unaff_r26;
  puVar16[0x48] = unaff_r25;
  puVar16[0x47] = unaff_r24;
  if (gVar19 == GAME_MODE_SCENE) {
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    iVar25 = *(int *)((int)pvVar9 + 0x248);
    if (iVar25 == 0) {
      return;
    }
    *(ushort *)(iVar25 + 0x34) = *(ushort *)(iVar25 + 0x34) | 0x41;
    return;
  }
  if (2 < moby->state) {
    iVar25 = *(int *)((int)pvVar9 + 0x248);
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
    if (iVar25 != 0) {
      *(ushort *)(iVar25 + 0x34) = *(ushort *)(iVar25 + 0x34) & 0xffbe;
    }
  }
  if ((((*(char *)((int)pvVar9 + 0x269) != '\0') && (g_heroState == STANDING)) &&
      (DAT_0096bd70 == 0x67)) &&
     (dVar38 = (double)FUN_005e8588(lVar22 + 0x10,&g_heroPosition), dVar38 < 30.0)) {
    mobyupdate_helpers::M294_00331670(lVar22);
    return;
  }
  if (*(int *)((int)pvVar9 + 0x270) != -1) {
    iVar25 = mobyutil::MB_IsPntInCuboid
                       ((Vec4 *)&GameCamera.posX,(longlong)*(int *)((int)pvVar9 + 0x270));
    if (iVar25 == 0) {
      moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
      iVar25 = *(int *)((int)pvVar9 + 0x248);
      if (iVar25 == 0) {
        return;
      }
      *(ushort *)(iVar25 + 0x34) = *(ushort *)(iVar25 + 0x34) | 0x41;
      return;
    }
    iVar25 = *(int *)((int)pvVar9 + 0x248);
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
    if (iVar25 != 0) {
      *(ushort *)(iVar25 + 0x34) = *(ushort *)(iVar25 + 0x34) & 0xffbe;
    }
  }
  if (*(char *)((int)pvVar9 + 0x2e) == '\x02') {
    mobyupdate_helpers::M294_00331670(lVar22);
    return;
  }
  mobyupdate_helpers::M294_00332560(lVar22);
  mobyutil::MB_getTarget((double)*(float *)((int)pvVar9 + 0x230),lVar22);
  pMVar18 = g_heroMobyPtr;
  pMVar13 = *(MobyInstance **)(puVar16 + 0x22);
  if (*(MobyInstance **)(puVar16 + 0x22) == (MobyInstance *)0x0) {
    FUN_005e7e98(uVar21 - 0x1a0,&hero::g_heroCGPos);
    pMVar13 = pMVar18;
  }
  bVar1 = moby->state;
  if (bVar1 < 5) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        *(undefined4 *)((int)pvVar9 + 0x20) = 0x40000000;
        *(undefined2 *)((int)pvVar9 + 0x24) = 2;
        *(undefined1 *)((int)pvVar9 + 0x58) = 8;
        *(undefined1 *)((int)pvVar9 + 0x5a) = 8;
        *(undefined1 *)((int)pvVar9 + 0x29) = 1;
        *(undefined4 *)((int)pvVar9 + 0x28c) = *(undefined4 *)((int)pvVar9 + 0x230);
        *(undefined1 *)((int)pvVar9 + 0x2e) = 1;
        *(undefined4 *)((int)pvVar9 + 0x90) = 0x200;
        dVar38 = 0.5;
        *(undefined4 *)((int)pvVar9 + 0x98) = 0x3f000000;
        mobyutil::MB_InitDefaultParams((float *)((int)pvVar9 + 0xd0));
        *(undefined4 *)((int)pvVar9 + 0xdc) = 0x3f800000;
        *(undefined4 *)((int)pvVar9 + 0xd8) = 0x3f800000;
        *(undefined4 *)((int)pvVar9 + 0xd0) = 0x38d;
        fVar3 = mobyutil::g_FrameTime * 5.5;
        *(undefined4 *)((int)pvVar9 + 0x108) = 0x18;
        *(float *)((int)pvVar9 + 0xf4) = fVar3;
        FUN_005e7e98((int)pvVar9 + 0x220,lVar22 + 0x10);
        if (moby->group == -1) {
          uVar26 = rand();
          if ((uVar26 & 1) != 0) {
            moby->modeBits = moby->modeBits | MIRROR;
          }
        }
        else {
          puVar10 = *(uint **)((int)pvVar9 + 0x24c);
          if (*puVar10 == 1) {
            puVar10 = *(uint **)((int)pvVar9 + 0x24c);
            moby->modeBits = moby->modeBits | MIRROR;
          }
          *puVar10 = (uint)LZCOUNT(*puVar10) >> 5;
        }
        if (*(int *)((int)pvVar9 + 0x274) != 0) {
          iVar25 = mobyutil::MB_randRange(0,300);
          puVar16[0x45] = (longlong)iVar25;
          *(int *)((int)pvVar9 + 0x288) =
               (int)(animationSpeed * (float)((double)(longlong)puVar16[0x45] + dVar38));
        }
        (moby->rotation).x = 0.0;
        (moby->rotation).y = 0.0;
        dVar39 = (double)*(float *)((int)pvVar9 + 0x244);
        if (*(int *)((int)pvVar9 + 0x244) == 0) {
          if (moby->group == -1) {
            dVar39 = (double)mobyutil::MB_randRangeSigned(0x402e000000000000,0x4041800000000000);
          }
          else {
            piVar11 = *(int **)((int)pvVar9 + 0x250);
            iVar25 = *piVar11;
            puVar16[0x45] = (longlong)iVar25;
            uVar23 = puVar16[0x45];
            *piVar11 = iVar25 + 0x14 +
                       ((uint)(-(longlong)iVar25 >> 0x3f) & -(iVar25 + 0x14) - iVar25);
            dVar39 = (double)(longlong)uVar23;
          }
        }
        *(float *)((int)pvVar9 + 0x244) = (float)(dVar39 * 0.01745329238474369);
        dVar38 = (double)mobyutil::GetGroundZ(dVar38,lVar22 + 0x10,0);
        (moby->pos).z = (float)dVar38;
        if (*(char *)((int)pvVar9 + 0x268) != '\0') {
          iVar25 = *(int *)((int)pvVar9 + 0x248);
          moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
          if (iVar25 != 0) {
            *(ushort *)(iVar25 + 0x34) = *(ushort *)(iVar25 + 0x34) | 0x41;
          }
        }
        moby->state = '\x02';
      }
      else {
        iVar25 = fastfunc::FastDecTimerS32((int)pvVar9 + 600);
        if (iVar25 != 0) {
          if ((moby->animationId != '\b') && (moby->updateId == moby->animationId)) {
            puVar16[0x45] = (longlong)(int)(animationSpeed * 11.5);
            mobyutil::MB_SetAnimationFrame(moby,8,0,*(int *)((int)puVar16 + 0x22c),5);
          }
          pSVar15 = Splines[*(int *)((int)pvVar9 + 0x254)];
          dVar38 = (double)FUN_005e8588(lVar22 + 0x10,
                                        ZEXT48(pSVar15) +
                                        ((ulonglong)*(uint *)((int)pvVar9 + 0x260) & 0xfffffff) *
                                        0x10 + 0x10 & 0xffffffff);
          uVar23 = (ulonglong)*(uint *)((int)pvVar9 + 0x260);
          if (dVar38 < 3.0) {
            uVar23 = uVar23 + 1;
            *(int *)((int)pvVar9 + 0x260) = (int)uVar23;
          }
          lVar32 = (ulonglong)(uint)pSVar15->cnt - 1;
          lVar32 = uVar23 + ((longlong)(int)lVar32 - (longlong)(int)uVar23 >> 0x3f & lVar32 - uVar23
                            );
          *(int *)((int)pvVar9 + 0x260) = (int)lVar32;
          mobyupdate_helpers::M294_00331708
                    (0,(double)(mobyutil::g_FrameTime * 8.0),lVar22,
                     ZEXT48(pSVar15) + lVar32 * 0x10 + 0x10 & 0xffffffff);
          if (*(int *)((int)pvVar9 + 0x260) == pSVar15->cnt + -1) {
            moby->state = '\x03';
          }
          else {
            fVar3 = (moby->pos).y - (pMVar13->pos).y;
            fVar4 = (moby->pos).x - (pMVar13->pos).x;
            if (SQRT(fVar4 * fVar4 + fVar3 * fVar3) < *(float *)((int)pvVar9 + 0x264)) {
              moby->state = '\x03';
            }
          }
        }
      }
    }
    else if (bVar1 < 3) {
      dVar38 = (double)FUN_005e8548(lVar22 + 0x10,&g_heroPosition);
      if (64.0 < dVar38) {
        return;
      }
      if ((moby->animationId != '\0') && (moby->updateId == moby->animationId)) {
        puVar16[0x45] = (longlong)(int)(animationSpeed * 8.5);
        mobyutil::MB_SetAnimationFrame(moby,0,0,*(int *)((int)puVar16 + 0x22c),5);
      }
      dVar38 = 0.0;
      iVar25 = mobyutil::MB_IsPntInRangeAndArc
                         ((double)*(float *)((int)pvVar9 + 0x230),0x4008000000000000,0,lVar22,
                          &pMVar13->pos);
      if ((iVar25 != 0) ||
         (((*(int *)((int)pvVar9 + 0x25c) != -1 &&
           (iVar25 = mobyutil::MB_IsPntInCuboid
                               ((Vec4 *)&pMVar13->pos,(longlong)*(int *)((int)pvVar9 + 0x25c)),
           iVar25 != 0)) || (moby->setByGroup != '\0')))) {
        if ((moby->modeBits & DISABLED) != NONE) {
          fVar12 = (moby->pos).y;
          *(f32 *)(puVar16 + 0xe) = (moby->pos).x;
          fVar2 = (moby->pos).w;
          *(f32 *)((int)puVar16 + 0x74) = fVar12;
          *(f32 *)((int)puVar16 + 0x7c) = fVar2;
          *(float *)(puVar16 + 0xf) = (moby->pos).z + 0.5;
          iVar25 = collproc::CollLine(uVar21 - 0x220,0x951500,2,lVar22,0);
          if (iVar25 == 0) {
            if (*(MobyInstance **)((int)pvVar9 + 0x248) != (MobyInstance *)0x0) {
              mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar9 + 0x248));
            }
            mobyfunc::DeleteMoby(moby);
            return;
          }
          iVar25 = *(int *)((int)pvVar9 + 0x248);
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
          if (iVar25 != 0) {
            *(ushort *)(iVar25 + 0x34) = *(ushort *)(iVar25 + 0x34) & 0xffbe;
          }
        }
        if (moby->group != -1) {
          mobyutil::MB_SetGroupField(moby->group,1);
        }
        if (*(int *)((int)pvVar9 + 0x254) == -1) {
          moby->state = '\x03';
        }
        else {
          iVar25 = path::PathFindClosestPnt
                             ((float)dVar38,(Vec4 *)(lVar22 + 0x10),
                              Splines[*(int *)((int)pvVar9 + 0x254)]);
          *(int *)((int)pvVar9 + 0x260) = iVar25;
          moby->state = '\x01';
        }
      }
    }
    else if (bVar1 < 4) {
      if (*(char *)((int)pvVar9 + 0x268) == '\x01') {
        fVar12 = (moby->pos).y;
        *(f32 *)(puVar16 + 0x10) = (moby->pos).x;
        fVar2 = (moby->pos).z;
        *(f32 *)((int)puVar16 + 0x84) = fVar12;
        fVar12 = (moby->pos).w;
        *(f32 *)(puVar16 + 0x11) = fVar2;
        fVar3 = (moby->rotation).z;
        *(f32 *)((int)puVar16 + 0x8c) = fVar12;
        dVar38 = (double)mathfunc::cosf(fVar3);
        fVar3 = (moby->rotation).z;
        fVar4 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar4 = fVar3;
        }
        fVar5 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
          fVar5 = fVar4;
        }
        fVar3 = fVar5 * fVar5;
        fVar4 = fVar3 * fVar3 * fVar5;
        fVar6 = fVar3 * fVar4;
        *(float *)((int)puVar16 + 0x84) =
             *(float *)((int)puVar16 + 0x84) +
             fVar3 * fVar6 * 2.601887e-06 +
             fVar6 * -0.0001980741 + fVar4 * 0.0083330255 + fVar3 * fVar5 * -0.16666657 + fVar5;
        *(float *)(puVar16 + 0x10) = (float)((double)*(float *)(puVar16 + 0x10) + dVar38);
        lVar24 = lVar22;
        iVar25 = collproc::CollMobySphere
                           (0x3ff8000000000000,uVar21 - 0x210,&DAT_00332ba0,0,lVar22,0);
        uVar27 = DAT_00a15d34;
        if (iVar25 != 0) {
          iVar34 = 0;
          *(undefined4 *)(puVar16 + 0x12) = DAT_00a15d30;
          uVar20 = DAT_00a15d38;
          *(undefined4 *)((int)puVar16 + 0x94) = uVar27;
          uVar27 = DAT_00a15d3c;
          *(undefined4 *)(puVar16 + 0x13) = uVar20;
          *(undefined4 *)((int)puVar16 + 0x9c) = uVar27;
          if (0 < iVar25) {
            puVar33 = &DAT_00a14a00;
            dVar39 = 0.699999988079071;
            dVar38 = 1.0;
            do {
              bVar28 = mobyutil::MB_isCrate(*puVar33);
              if ((bVar28) &&
                 (ABS((double)((moby->pos).z - (((MobyInstance *)*puVar33)->pos).z)) < dVar39)) {
                mobyutil::CollDamageMobyDirect
                          ((float)dVar38,(MobyInstance *)*puVar33,g_heroMobyPtr,0x10000,(int)lVar24,
                           &(moby->pos).x,(float *)(puVar16 + 0x12));
              }
              iVar34 = iVar34 + 1;
              puVar33 = puVar33 + 1;
            } while (iVar34 < iVar25);
          }
        }
      }
      fVar3 = (pMVar13->pos).x - (moby->pos).x;
      fVar4 = (pMVar13->pos).y - (moby->pos).y;
      fVar6 = ABS(fVar3);
      fVar5 = ABS(fVar4);
      *(float *)(puVar16 + 0x2b) = fVar3;
      *(float *)((int)puVar16 + 0x15c) = fVar4;
      *(float *)(puVar16 + 0x2c) = fVar6 - fVar5;
      dVar38 = 0.0;
      uVar23 = (ulonglong)(*(uint *)(puVar16 + 0x2b) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar16 + 0x2c) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar16 + 0x15c) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)(puVar16 + 0x2b));
      if (*(float *)(puVar16 + 0x2c) - 0.0 < 0.0) {
        fVar3 = fVar5;
      }
      fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
      fVar4 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
      fVar7 = ABS(*(float *)((int)puVar16 + 0x15c));
      if (*(float *)(puVar16 + 0x2c) - 0.0 < 0.0) {
        fVar7 = fVar6;
      }
      dVar39 = dVar38;
      if (0.0 < fVar3) {
        lVar24 = uVar21 - 0x280;
        lVar29 = uVar21 - 0x8c;
        lVar31 = uVar21 - 0x7c;
        lVar37 = 2;
        fVar3 = (fVar7 - fVar3) / (fVar7 + fVar3);
        fVar6 = fVar3 * fVar3;
        *(float *)(puVar16 + 0x42) = fVar3;
        *(float *)(puVar16 + 0x41) = fVar3;
        *(float *)((int)puVar16 + 0x20c) = fVar3;
        *(float *)((int)puVar16 + 0x204) = fVar3;
        fVar3 = fVar6 * fVar6;
        *(float *)(puVar16 + 0x41) = *(float *)(puVar16 + 0x41) * fVar6;
        *(float *)((int)puVar16 + 0x20c) = *(float *)((int)puVar16 + 0x20c) * fVar3;
        *(float *)(puVar16 + 0x42) = *(float *)(puVar16 + 0x42) * fVar3 * fVar6;
        do {
          *(float *)((int)lVar24 + 0x204) = *(float *)((int)lVar24 + 500) * fVar3 * fVar3;
          iVar25 = (int)lVar29;
          lVar24 = lVar24 + 8;
          lVar29 = lVar29 + 8;
          *(float *)((int)lVar31 + 4) = *(float *)(iVar25 + 4) * fVar3 * fVar3;
          lVar31 = lVar31 + 8;
          lVar37 = lVar37 + -1;
        } while (lVar37 != 0);
        lVar37 = 4;
        lVar31 = uVar21 - 0x8c;
        pfVar30 = (float *)&DAT_007358e0;
        lVar24 = lVar32;
        lVar29 = lVar31;
        do {
          fVar3 = *pfVar30;
          fVar6 = pfVar30[1];
          pfVar30 = pfVar30 + 2;
          *(float *)((int)lVar24 + 0x204) = *(float *)((int)lVar24 + 0x204) * fVar3;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar6;
          lVar29 = lVar29 + 8;
          lVar37 = lVar37 + -1;
        } while (lVar37 != 0);
        lVar29 = 2;
        lVar24 = lVar32;
        do {
          iVar25 = (int)lVar24;
          lVar24 = lVar24 + 0x10;
          iVar34 = (int)lVar31;
          lVar31 = lVar31 + 0x10;
          dVar39 = (double)((float)(dVar39 + (double)*(float *)(iVar25 + 0x204)) +
                            *(float *)(iVar34 + 4) + *(float *)(iVar34 + 8) +
                           *(float *)(iVar34 + 0xc));
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        dVar39 = (double)((float)(dVar39 + 0.7853981852531433) * fVar5 + fVar4);
      }
      dVar40 = (double)fastfunc::FastDiffRots(dVar39,(double)(moby->rotation).z);
      dVar39 = 0.9599310755729675;
      if ((dVar40 <= 0.9599310755729675) && (dVar39 = dVar40, dVar40 < -0.9599310755729675)) {
        dVar39 = -0.9599310755729675;
      }
      *(float *)((int)pvVar9 + 0x188) = (float)(dVar39 * 0.5);
      *(float *)((int)pvVar9 + 0x208) = (float)(dVar39 * 0.5);
      mobyupdate_helpers::M294_00331708
                ((double)*(float *)((int)pvVar9 + 0x244),dVar38,lVar22,&pMVar13->pos);
      fVar3 = (moby->pos).y;
      fVar4 = (pMVar13->pos).y;
      fVar5 = (moby->pos).x;
      fVar8 = fVar3 - fVar4;
      fVar6 = (pMVar13->pos).x;
      fVar17 = fVar5 - fVar6;
      fVar7 = (moby->rotation).z;
      if ((SQRT(fVar17 * fVar17 + fVar8 * fVar8) < 5.5) || (*(char *)((int)pvVar9 + 0x242) != '\0'))
      {
        fVar6 = fVar6 - fVar5;
        fVar4 = fVar4 - fVar3;
        dVar40 = ABS((double)fVar6);
        dVar42 = ABS((double)fVar4);
        *(float *)((int)puVar16 + 0x14c) = fVar6;
        *(float *)(puVar16 + 0x2a) = fVar4;
        *(float *)((int)puVar16 + 0x154) = (float)(dVar40 - dVar42);
        uVar23 = (ulonglong)(*(uint *)((int)puVar16 + 0x14c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar16 + 0x154) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar16 + 0x2a) >> 0x1d) & 4;
        dVar39 = ABS((double)*(float *)((int)puVar16 + 0x14c));
        if ((double)*(float *)((int)puVar16 + 0x154) - dVar38 < 0.0) {
          dVar39 = dVar42;
        }
        fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
        dVar42 = ABS((double)*(float *)(puVar16 + 0x2a));
        if ((double)*(float *)((int)puVar16 + 0x154) - dVar38 < 0.0) {
          dVar42 = dVar40;
        }
        fVar4 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
        if (dVar38 < dVar39) {
          lVar24 = uVar21 - 0x280;
          lVar31 = uVar21 - 0x9c;
          lVar29 = uVar21 - 0xac;
          lVar37 = 2;
          fVar5 = (float)(dVar42 - dVar39) / (float)(dVar42 + dVar39);
          fVar6 = fVar5 * fVar5;
          *(float *)(puVar16 + 0x3e) = fVar5;
          *(float *)(puVar16 + 0x3d) = fVar5;
          *(float *)((int)puVar16 + 0x1ec) = fVar5;
          *(float *)((int)puVar16 + 0x1e4) = fVar5;
          fVar5 = fVar6 * fVar6;
          *(float *)(puVar16 + 0x3d) = *(float *)(puVar16 + 0x3d) * fVar6;
          *(float *)((int)puVar16 + 0x1ec) = *(float *)((int)puVar16 + 0x1ec) * fVar5;
          *(float *)(puVar16 + 0x3e) = *(float *)(puVar16 + 0x3e) * fVar5 * fVar6;
          do {
            *(float *)((int)lVar24 + 0x1e4) = *(float *)((int)lVar24 + 0x1d4) * fVar5 * fVar5;
            iVar25 = (int)lVar29;
            lVar29 = lVar29 + 8;
            lVar24 = lVar24 + 8;
            *(float *)((int)lVar31 + 4) = *(float *)(iVar25 + 4) * fVar5 * fVar5;
            lVar31 = lVar31 + 8;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          lVar37 = 4;
          lVar31 = uVar21 - 0xac;
          pfVar30 = (float *)&DAT_007358e0;
          lVar24 = lVar32;
          lVar29 = lVar31;
          do {
            fVar5 = *pfVar30;
            fVar6 = pfVar30[1];
            pfVar30 = pfVar30 + 2;
            *(float *)((int)lVar24 + 0x1e4) = *(float *)((int)lVar24 + 0x1e4) * fVar5;
            lVar24 = lVar24 + 8;
            *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar6;
            lVar29 = lVar29 + 8;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          lVar24 = 2;
          do {
            iVar25 = (int)lVar32;
            iVar34 = (int)lVar31;
            lVar32 = lVar32 + 0x10;
            lVar31 = lVar31 + 0x10;
            dVar38 = (double)((float)(dVar38 + (double)*(float *)(iVar25 + 0x1e4)) +
                              *(float *)(iVar34 + 4) + *(float *)(iVar34 + 8) +
                             *(float *)(iVar34 + 0xc));
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          dVar38 = (double)((float)(dVar38 + 0.7853981852531433) * fVar3 + fVar4);
        }
        dVar38 = (double)fastfunc::FastSubRots(fVar7,(float)dVar38);
        if (dVar38 < 0.0872664600610733) {
          moby->state = '\x05';
          goto LAB_00334904;
        }
      }
      if ((moby->animationId != '\b') && (moby->updateId == moby->animationId)) {
        puVar16[0x45] = (longlong)(int)(animationSpeed * 11.5);
        mobyutil::MB_SetAnimationFrame(moby,8,0,*(int *)((int)puVar16 + 0x22c),5);
      }
    }
    else {
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE);
      uVar26 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x70));
      fVar3 = (moby->rotation).z;
      if ((uVar26 & 0x60) == 0) {
        fVar12 = (moby->pos).z;
        uVar26 = (int)fVar12 >> 0x1f;
        if ((int)((uVar26 >> 1 ^ (uint)fVar12) - uVar26) < 0x40000000) {
          moby->field76_0xb4 = '\0';
          moby->field77_0xb5 = '\0';
          mobyutil::MB_SpawnBoltsFromCrate(lVar22,0,0xffffffffffffffff);
          pMVar13 = *(MobyInstance **)((int)moby->pVar + 0x248);
          if (pMVar13 != (MobyInstance *)0x0) {
            mobyfunc::DeleteMoby(pMVar13);
          }
          mobyfunc::DeleteMoby(moby);
          return;
        }
      }
      else {
        fVar4 = (moby->pos).y;
        fVar5 = (pMVar13->pos).y;
        fVar6 = (moby->pos).x;
        fVar8 = fVar4 - fVar5;
        fVar7 = (pMVar13->pos).x;
        fVar17 = fVar6 - fVar7;
        if ((SQRT(fVar17 * fVar17 + fVar8 * fVar8) < 6.0) ||
           (*(char *)((int)pvVar9 + 0x242) != '\0')) {
          fVar7 = fVar7 - fVar6;
          fVar5 = fVar5 - fVar4;
          fVar6 = ABS(fVar7);
          fVar8 = ABS(fVar5);
          *(float *)(puVar16 + 0x24) = fVar7;
          *(float *)((int)puVar16 + 0x124) = fVar5;
          *(float *)(puVar16 + 0x25) = fVar6 - fVar8;
          fVar4 = 0.0;
          uVar23 = (ulonglong)(*(uint *)(puVar16 + 0x24) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar16 + 0x25) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar16 + 0x124) >> 0x1d) & 4;
          fVar5 = ABS(*(float *)(puVar16 + 0x24));
          if (*(float *)(puVar16 + 0x25) - 0.0 < 0.0) {
            fVar5 = fVar8;
          }
          fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
          fVar7 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          fVar17 = ABS(*(float *)((int)puVar16 + 0x124));
          if (*(float *)(puVar16 + 0x25) - 0.0 < 0.0) {
            fVar17 = fVar6;
          }
          if (0.0 < fVar5) {
            lVar24 = uVar21 - 0x280;
            lVar29 = uVar21 - 300;
            lVar31 = uVar21 - 0x11c;
            lVar37 = 2;
            fVar5 = (fVar17 - fVar5) / (fVar17 + fVar5);
            fVar6 = fVar5 * fVar5;
            *(float *)(puVar16 + 0x2e) = fVar5;
            *(float *)(puVar16 + 0x2d) = fVar5;
            *(float *)((int)puVar16 + 0x16c) = fVar5;
            *(float *)((int)puVar16 + 0x164) = fVar5;
            fVar5 = fVar6 * fVar6;
            *(float *)(puVar16 + 0x2d) = *(float *)(puVar16 + 0x2d) * fVar6;
            *(float *)((int)puVar16 + 0x16c) = *(float *)((int)puVar16 + 0x16c) * fVar5;
            *(float *)(puVar16 + 0x2e) = *(float *)(puVar16 + 0x2e) * fVar5 * fVar6;
            do {
              *(float *)((int)lVar24 + 0x164) = *(float *)((int)lVar24 + 0x154) * fVar5 * fVar5;
              iVar25 = (int)lVar29;
              lVar24 = lVar24 + 8;
              lVar29 = lVar29 + 8;
              *(float *)((int)lVar31 + 4) = *(float *)(iVar25 + 4) * fVar5 * fVar5;
              lVar31 = lVar31 + 8;
              lVar37 = lVar37 + -1;
            } while (lVar37 != 0);
            lVar37 = 4;
            lVar31 = uVar21 - 300;
            pfVar30 = (float *)&DAT_007358e0;
            lVar24 = lVar32;
            lVar29 = lVar31;
            do {
              fVar5 = *pfVar30;
              fVar6 = pfVar30[1];
              pfVar30 = pfVar30 + 2;
              *(float *)((int)lVar24 + 0x164) = *(float *)((int)lVar24 + 0x164) * fVar5;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar6;
              lVar29 = lVar29 + 8;
              lVar37 = lVar37 + -1;
            } while (lVar37 != 0);
            lVar24 = 2;
            do {
              iVar25 = (int)lVar32;
              iVar34 = (int)lVar31;
              lVar32 = lVar32 + 0x10;
              lVar31 = lVar31 + 0x10;
              fVar4 = fVar4 + *(float *)(iVar25 + 0x164) + *(float *)(iVar34 + 4) +
                      *(float *)(iVar34 + 8) + *(float *)(iVar34 + 0xc);
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            fVar4 = (fVar4 + 0.7853982) * fVar8 + fVar7;
          }
          dVar38 = (double)fastfunc::FastSubRots(fVar3,fVar4);
          if (dVar38 < 0.12217304855585098) {
            moby->state = '\x05';
            goto LAB_00334904;
          }
        }
        moby->state = '\x03';
      }
    }
  }
  else if (bVar1 < 8) {
    if (bVar1 < 6) {
      uVar26 = (int)*(uint *)((int)pvVar9 + 0x28c) >> 0x1f;
      if ((int)((uVar26 >> 1 ^ *(uint *)((int)pvVar9 + 0x28c)) - uVar26) < 0x41000000) {
        *(undefined4 *)((int)pvVar9 + 0x28c) = 0x41000000;
      }
      mobyupdate_helpers::M294_003322b0(lVar22,&pMVar13->pos);
      dVar38 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar22 + 0x10,0);
      mobyutil::Delt((float)dVar38,DAT_0071f418 * 27.0,&(moby->pos).z);
      uVar36 = moby->animationId;
      if ((uVar36 != '\x02') && (moby->updateId == uVar36)) {
        puVar16[0x45] = (longlong)(int)(animationSpeed * 8.5);
        mobyutil::MB_SetAnimationFrame(moby,2,0,*(int *)((int)puVar16 + 0x22c),5);
        uVar36 = moby->animationId;
      }
      if ((moby->field43_0x70 & 2U) != 0) {
        if ((uVar36 != '\n') && (moby->updateId == uVar36)) {
          puVar16[0x45] = (longlong)(int)(animationSpeed * 5.5);
          mobyutil::MB_SetAnimationFrame(moby,10,0,*(int *)((int)puVar16 + 0x22c),5);
        }
        moby->state = '\x06';
      }
    }
    else if (bVar1 < 7) {
      mobyupdate_helpers::M294_003322b0(lVar22,&pMVar13->pos);
      dVar38 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar22 + 0x10,0);
      mobyutil::Delt((float)dVar38,DAT_0071f418 * 27.0,&(moby->pos).z);
      if (*(int *)((int)pvVar9 + 0x248) != 0) {
        dVar38 = 0.0;
        iVar25 = mobyutil::MB_MayaFrameTrigger(0.0,moby);
        if (iVar25 != 0) {
          mobyfunc::GetBonePosition(*(undefined4 *)((int)pvVar9 + 0x248),0,uVar21 - 0x1f0);
          fVar5 = *(float *)(puVar16 + 0x1e) - *(float *)(puVar16 + 0x14);
          fVar6 = *(float *)((int)puVar16 + 0xf4) - *(float *)((int)puVar16 + 0xa4);
          *(float *)(puVar16 + 0x28) = fVar5;
          *(float *)((int)puVar16 + 0x144) = fVar6;
          *(float *)(puVar16 + 0x16) = fVar5;
          *(float *)((int)puVar16 + 0xb4) = fVar6;
          *(float *)(puVar16 + 0x29) = (float)(ABS((double)fVar5) - ABS((double)fVar6));
          *(float *)(puVar16 + 0x17) = *(float *)(puVar16 + 0x1f) - *(float *)(puVar16 + 0x15);
          *(undefined4 *)((int)puVar16 + 0xbc) = *(undefined4 *)((int)puVar16 + 0xfc);
          fVar3 = (moby->rotation).z;
          fVar4 = *(float *)((int)pvVar9 + 0x208);
          uVar23 = (ulonglong)(*(uint *)(puVar16 + 0x28) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar16 + 0x29) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar16 + 0x144) >> 0x1d) & 4;
          dVar39 = ABS((double)*(float *)(puVar16 + 0x28));
          if ((double)*(float *)(puVar16 + 0x29) - dVar38 < 0.0) {
            dVar39 = ABS((double)fVar6);
          }
          fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
          fVar6 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          dVar40 = ABS((double)*(float *)((int)puVar16 + 0x144));
          if ((double)*(float *)(puVar16 + 0x29) - dVar38 < 0.0) {
            dVar40 = ABS((double)fVar5);
          }
          dVar42 = dVar38;
          if (dVar38 < dVar39) {
            lVar24 = uVar21 - 0x280;
            lVar29 = uVar21 - 0xcc;
            lVar31 = uVar21 - 0xbc;
            lVar37 = 2;
            fVar5 = (float)(dVar40 - dVar39) / (float)(dVar40 + dVar39);
            fVar8 = fVar5 * fVar5;
            *(float *)(puVar16 + 0x3a) = fVar5;
            *(float *)(puVar16 + 0x39) = fVar5;
            *(float *)((int)puVar16 + 0x1cc) = fVar5;
            *(float *)((int)puVar16 + 0x1c4) = fVar5;
            fVar5 = fVar8 * fVar8;
            *(float *)(puVar16 + 0x39) = *(float *)(puVar16 + 0x39) * fVar8;
            *(float *)((int)puVar16 + 0x1cc) = *(float *)((int)puVar16 + 0x1cc) * fVar5;
            *(float *)(puVar16 + 0x3a) = *(float *)(puVar16 + 0x3a) * fVar5 * fVar8;
            do {
              *(float *)((int)lVar24 + 0x1c4) = *(float *)((int)lVar24 + 0x1b4) * fVar5 * fVar5;
              iVar25 = (int)lVar29;
              lVar24 = lVar24 + 8;
              lVar29 = lVar29 + 8;
              *(float *)((int)lVar31 + 4) = *(float *)(iVar25 + 4) * fVar5 * fVar5;
              lVar31 = lVar31 + 8;
              lVar37 = lVar37 + -1;
            } while (lVar37 != 0);
            lVar37 = 4;
            lVar31 = uVar21 - 0xcc;
            pfVar30 = (float *)&DAT_007358e0;
            lVar24 = lVar32;
            lVar29 = lVar31;
            do {
              fVar5 = *pfVar30;
              fVar8 = pfVar30[1];
              pfVar30 = pfVar30 + 2;
              *(float *)((int)lVar24 + 0x1c4) = *(float *)((int)lVar24 + 0x1c4) * fVar5;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar8;
              lVar29 = lVar29 + 8;
              lVar37 = lVar37 + -1;
            } while (lVar37 != 0);
            lVar29 = 2;
            lVar24 = lVar32;
            dVar39 = dVar38;
            do {
              iVar25 = (int)lVar24;
              lVar24 = lVar24 + 0x10;
              iVar34 = (int)lVar31;
              lVar31 = lVar31 + 0x10;
              dVar39 = (double)((float)(dVar39 + (double)*(float *)(iVar25 + 0x1c4)) +
                                *(float *)(iVar34 + 4) + *(float *)(iVar34 + 8) +
                               *(float *)(iVar34 + 0xc));
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            dVar42 = (double)((float)(dVar39 + 0.7853981852531433) * fVar7 + fVar6);
          }
          dVar40 = (double)fastfunc::FastWrapRot(fVar3,fVar4);
          dVar41 = (double)fastfunc::FastSubRots((float)dVar42,(float)dVar40);
          fVar3 = SQRT(*(float *)(puVar16 + 0x16) * *(float *)(puVar16 + 0x16) +
                       *(float *)((int)puVar16 + 0xb4) * *(float *)((int)puVar16 + 0xb4));
          dVar39 = ABS((double)*(float *)(puVar16 + 0x17));
          if (0.22689279913902283 - dVar41 < 0.0) {
            dVar42 = dVar40;
          }
          dVar41 = ABS((double)fVar3);
          *(float *)(puVar16 + 0x27) = fVar3;
          *(float *)((int)puVar16 + 0x13c) = (float)(dVar41 - dVar39);
          uVar23 = (ulonglong)(*(uint *)(puVar16 + 0x27) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar16 + 0x13c) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar16 + 0x17) >> 0x1d) & 4;
          fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
          dVar40 = ABS((double)*(float *)(puVar16 + 0x27));
          if ((double)*(float *)((int)puVar16 + 0x13c) - dVar38 < 0.0) {
            dVar40 = dVar39;
          }
          if ((double)*(float *)((int)puVar16 + 0x13c) - dVar38 < 0.0) {
            dVar39 = dVar41;
          }
          fVar4 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          if (dVar38 < dVar40) {
            lVar24 = uVar21 - 0x280;
            lVar29 = uVar21 - 0xec;
            lVar31 = uVar21 - 0xdc;
            lVar37 = 2;
            fVar5 = (float)(dVar39 - dVar40) / (float)(dVar39 + dVar40);
            fVar6 = fVar5 * fVar5;
            *(float *)(puVar16 + 0x36) = fVar5;
            *(float *)(puVar16 + 0x35) = fVar5;
            *(float *)((int)puVar16 + 0x1ac) = fVar5;
            *(float *)((int)puVar16 + 0x1a4) = fVar5;
            fVar5 = fVar6 * fVar6;
            *(float *)(puVar16 + 0x35) = *(float *)(puVar16 + 0x35) * fVar6;
            *(float *)((int)puVar16 + 0x1ac) = *(float *)((int)puVar16 + 0x1ac) * fVar5;
            *(float *)(puVar16 + 0x36) = *(float *)(puVar16 + 0x36) * fVar5 * fVar6;
            do {
              *(float *)((int)lVar24 + 0x1a4) = *(float *)((int)lVar24 + 0x194) * fVar5 * fVar5;
              iVar25 = (int)lVar29;
              lVar24 = lVar24 + 8;
              lVar29 = lVar29 + 8;
              *(float *)((int)lVar31 + 4) = *(float *)(iVar25 + 4) * fVar5 * fVar5;
              lVar31 = lVar31 + 8;
              lVar37 = lVar37 + -1;
            } while (lVar37 != 0);
            lVar37 = 4;
            lVar31 = uVar21 - 0xec;
            pfVar30 = (float *)&DAT_007358e0;
            lVar24 = lVar32;
            lVar29 = lVar31;
            do {
              fVar5 = *pfVar30;
              fVar6 = pfVar30[1];
              pfVar30 = pfVar30 + 2;
              *(float *)((int)lVar24 + 0x1a4) = *(float *)((int)lVar24 + 0x1a4) * fVar5;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar6;
              lVar29 = lVar29 + 8;
              lVar37 = lVar37 + -1;
            } while (lVar37 != 0);
            lVar24 = 2;
            do {
              iVar25 = (int)lVar32;
              iVar34 = (int)lVar31;
              lVar32 = lVar32 + 0x10;
              lVar31 = lVar31 + 0x10;
              dVar38 = (double)((float)(dVar38 + (double)*(float *)(iVar25 + 0x1a4)) +
                                *(float *)(iVar34 + 4) + *(float *)(iVar34 + 8) +
                               *(float *)(iVar34 + 0xc));
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            dVar38 = (double)((float)(dVar38 + 0.7853981852531433) * fVar3 + fVar4);
          }
          dVar39 = 15.0;
          mobyutil::MB_SphericalToVector
                    (mobyutil::g_FrameTime * 15.0,(float)dVar42,(float)dVar38,
                     (float *)(puVar16 + 0x16));
          iVar25 = sound::PlayMobySound(0,0,moby);
          fastfunc::FastDoubleToInt
                    ((double)(18.0 / (float)((double)mobyutil::g_FrameTime * dVar39)),iVar25);
          *(undefined4 *)(puVar16 + 8) = *(undefined4 *)(puVar16 + 0x14);
          *(undefined4 *)(puVar16 + 9) = *(undefined4 *)(puVar16 + 0x15);
          *(undefined4 *)(puVar16 + 10) = *(undefined4 *)(puVar16 + 0x16);
          *(undefined4 *)(puVar16 + 0xb) = *(undefined4 *)(puVar16 + 0x17);
          *(undefined4 *)((int)puVar16 + 0x44) = *(undefined4 *)((int)puVar16 + 0xa4);
          *(undefined4 *)((int)puVar16 + 0x4c) = *(undefined4 *)((int)puVar16 + 0xac);
          *(undefined4 *)((int)puVar16 + 0x54) = *(undefined4 *)((int)puVar16 + 0xb4);
          *(undefined4 *)((int)puVar16 + 0x5c) = *(undefined4 *)((int)puVar16 + 0xbc);
          mobyupdate_helpers::M184_0001b100(lVar22);
        }
      }
      if ((moby->field43_0x70 & 2U) != 0) {
        if ((moby->animationId != '\x05') && (moby->updateId == moby->animationId)) {
          puVar16[0x45] = (longlong)(int)(animationSpeed * 8.5);
          mobyutil::MB_SetAnimationFrame(moby,5,0,*(int *)((int)puVar16 + 0x22c),5);
        }
        moby->state = '\a';
      }
    }
    else {
      mobyupdate_helpers::M294_003322b0(lVar22,&pMVar13->pos);
      dVar38 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar22 + 0x10,0);
      mobyutil::Delt((float)dVar38,DAT_0071f418 * 27.0,&(moby->pos).z);
      uVar36 = moby->animationId;
      if ((((uVar36 != '\x05') || ((moby->field43_0x70 & 2U) != 0)) && (uVar36 != '\0')) &&
         (moby->updateId == uVar36)) {
        puVar16[0x45] = (longlong)(int)(animationSpeed * 8.5);
        mobyutil::MB_SetAnimationFrame(moby,0,0,*(int *)((int)puVar16 + 0x22c),5);
      }
      iVar25 = mobyutil::MB_randInt(9);
      fVar3 = (moby->rotation).z;
      if (iVar25 == 0) {
        moby->state = '\x05';
      }
      else {
        fVar4 = (moby->pos).y;
        fVar5 = (pMVar13->pos).y;
        fVar6 = (moby->pos).x;
        fVar8 = fVar4 - fVar5;
        fVar7 = (pMVar13->pos).x;
        fVar17 = fVar6 - fVar7;
        if ((SQRT(fVar17 * fVar17 + fVar8 * fVar8) <= 10.5) ||
           (*(char *)((int)pvVar9 + 0x242) != '\0')) {
          fVar7 = fVar7 - fVar6;
          fVar5 = fVar5 - fVar4;
          fVar6 = ABS(fVar7);
          fVar8 = ABS(fVar5);
          *(float *)((int)puVar16 + 300) = fVar7;
          *(float *)(puVar16 + 0x26) = fVar5;
          *(float *)((int)puVar16 + 0x134) = fVar6 - fVar8;
          fVar4 = 0.0;
          uVar23 = (ulonglong)(*(uint *)((int)puVar16 + 300) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar16 + 0x134) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar16 + 0x26) >> 0x1d) & 4;
          fVar5 = ABS(*(float *)((int)puVar16 + 300));
          if (*(float *)((int)puVar16 + 0x134) - 0.0 < 0.0) {
            fVar5 = fVar8;
          }
          fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
          fVar7 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          fVar17 = ABS(*(float *)(puVar16 + 0x26));
          if (*(float *)((int)puVar16 + 0x134) - 0.0 < 0.0) {
            fVar17 = fVar6;
          }
          if (0.0 < fVar5) {
            lVar24 = uVar21 - 0x280;
            lVar31 = uVar21 - 0xfc;
            lVar29 = uVar21 - 0x10c;
            lVar37 = 2;
            fVar5 = (fVar17 - fVar5) / (fVar17 + fVar5);
            fVar6 = fVar5 * fVar5;
            *(float *)(puVar16 + 0x32) = fVar5;
            *(float *)(puVar16 + 0x31) = fVar5;
            *(float *)((int)puVar16 + 0x18c) = fVar5;
            *(float *)((int)puVar16 + 0x184) = fVar5;
            fVar5 = fVar6 * fVar6;
            *(float *)(puVar16 + 0x31) = *(float *)(puVar16 + 0x31) * fVar6;
            *(float *)((int)puVar16 + 0x18c) = *(float *)((int)puVar16 + 0x18c) * fVar5;
            *(float *)(puVar16 + 0x32) = *(float *)(puVar16 + 0x32) * fVar5 * fVar6;
            do {
              *(float *)((int)lVar24 + 0x184) = *(float *)((int)lVar24 + 0x174) * fVar5 * fVar5;
              iVar25 = (int)lVar29;
              lVar29 = lVar29 + 8;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar31 + 4) = *(float *)(iVar25 + 4) * fVar5 * fVar5;
              lVar31 = lVar31 + 8;
              lVar37 = lVar37 + -1;
            } while (lVar37 != 0);
            lVar37 = 4;
            lVar31 = uVar21 - 0x10c;
            pfVar30 = (float *)&DAT_007358e0;
            lVar24 = lVar32;
            lVar29 = lVar31;
            do {
              fVar5 = *pfVar30;
              fVar6 = pfVar30[1];
              pfVar30 = pfVar30 + 2;
              *(float *)((int)lVar24 + 0x184) = *(float *)((int)lVar24 + 0x184) * fVar5;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar6;
              lVar29 = lVar29 + 8;
              lVar37 = lVar37 + -1;
            } while (lVar37 != 0);
            lVar24 = 2;
            do {
              iVar25 = (int)lVar32;
              lVar32 = lVar32 + 0x10;
              iVar34 = (int)lVar31;
              lVar31 = lVar31 + 0x10;
              fVar4 = fVar4 + *(float *)(iVar25 + 0x184) + *(float *)(iVar34 + 4) +
                      *(float *)(iVar34 + 8) + *(float *)(iVar34 + 0xc);
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            fVar4 = (fVar4 + 0.7853982) * fVar8 + fVar7;
          }
          dVar38 = (double)fastfunc::FastSubRots(fVar3,fVar4);
          if (dVar38 <= 0.48869219422340393) goto LAB_00334904;
        }
        moby->state = '\x03';
      }
    }
  }
  else if (bVar1 < 9) {
    mobyupdate_helpers::M294_00331708(0,0,lVar22,(int)pvVar9 + 0x220);
    fVar3 = 0.7853982;
    fVar4 = *(float *)((int)pvVar9 + 0x23c) * 30.0;
    if ((fVar4 <= 0.7853982) && (fVar3 = fVar4, fVar4 < -0.7853982)) {
      fVar3 = -0.7853982;
    }
    *(float *)((int)pvVar9 + 0x188) = fVar3 * 0.7;
    *(float *)((int)pvVar9 + 0x208) = fVar3 * 0.4;
    fVar4 = (moby->pos).y - *(float *)((int)pvVar9 + 0x224);
    fVar3 = (moby->pos).x - *(float *)((int)pvVar9 + 0x220);
    if (SQRT(fVar3 * fVar3 + fVar4 * fVar4) < 1.0) {
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 10) {
    uVar26 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x70));
    if ((uVar26 & 0x60) != 0) {
      mobyutil::MB_SpawnBoltsFromCrate(lVar22,0,0xffffffffffffffff);
      mobyutil::MB_SpawnExplosionSparks2
                (0x3ff0000000000000,0x4024000000000000,lVar22,lVar22 + 0x10,&DAT_00332ba0,
                 0xffffffffffffffff);
      moby->field76_0xb4 = '\0';
      moby->field77_0xb5 = '\0';
      mobyutil::MB_SpawnBoltsFromCrate(lVar22,0,0xffffffffffffffff);
      pMVar13 = *(MobyInstance **)((int)moby->pVar + 0x248);
      if (pMVar13 != (MobyInstance *)0x0) {
        mobyfunc::DeleteMoby(pMVar13);
      }
      mobyfunc::DeleteMoby(moby);
      return;
    }
    fVar12 = (moby->pos).z;
    uVar26 = (int)fVar12 >> 0x1f;
    if ((int)((uVar26 >> 1 ^ (uint)fVar12) - uVar26) < 0x40000000) {
      mobyutil::MB_SpawnBoltsFromCrate(lVar22,0,0xffffffffffffffff);
      moby->field76_0xb4 = '\0';
      moby->field77_0xb5 = '\0';
      mobyutil::MB_SpawnBoltsFromCrate(lVar22,0,0xffffffffffffffff);
      pMVar13 = *(MobyInstance **)((int)moby->pVar + 0x248);
      if (pMVar13 != (MobyInstance *)0x0) {
        mobyfunc::DeleteMoby(pMVar13);
      }
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
LAB_00334904:
  if ((moby->enabled != '\0') ||
     ((*(int *)((int)pvVar9 + 0x248) != 0 &&
      (*(char *)(*(int *)((int)pvVar9 + 0x248) + 0x31) != '\0')))) {
    pvVar14 = moby->pVar;
    if (*(MobyInstance **)((int)pvVar14 + 0x248) == (MobyInstance *)0x0) {
      mobyfunc::GetBonePosition(lVar22,1,uVar21 - 0x1d0);
      *(undefined4 *)(puVar16 + 8) = *(undefined4 *)(puVar16 + 0x18);
      *(undefined4 *)(puVar16 + 9) = *(undefined4 *)(puVar16 + 0x19);
      *(undefined4 *)((int)puVar16 + 0x44) = *(undefined4 *)((int)puVar16 + 0xc4);
      *(undefined4 *)((int)puVar16 + 0x4c) = *(undefined4 *)((int)puVar16 + 0xcc);
      uVar27 = FUN_003a38c8(lVar22);
      *(undefined4 *)((int)pvVar14 + 0x248) = uVar27;
    }
    else {
      mobyutil::MB_AttachMobyToJoint(moby,*(MobyInstance **)((int)pvVar14 + 0x248),1);
      if ((moby->modeBits & DISABLED) == NONE) {
        iVar25 = *(int *)((int)pvVar14 + 0x248);
        uVar35 = *(ushort *)(iVar25 + 0x34) & 0xffbe;
      }
      else {
        iVar25 = *(int *)((int)pvVar14 + 0x248);
        uVar35 = *(ushort *)(iVar25 + 0x34) | 0x41;
      }
      *(ushort *)(iVar25 + 0x34) = uVar35;
    }
    if ((moby->modeBits & MIRROR) != NONE) {
      *(float *)((int)pvVar9 + 0x188) = -*(float *)((int)pvVar9 + 0x188);
      *(float *)((int)pvVar9 + 0x208) = -*(float *)((int)pvVar9 + 0x208);
    }
    dVar38 = 0.30000001192092896;
    mobyutil::MB_UpdateManipulatorRot
              ((double)(DAT_0071f40c * 0.018),(double)(DAT_0071f40c * 0.3),lVar22,
               (int)pvVar9 + 0x120,5);
    mobyutil::MB_UpdateManipulatorRot
              ((double)(float)((double)DAT_0071f40c * 0.024000000208616257),
               (double)(float)((double)DAT_0071f40c * dVar38),lVar22,(int)pvVar9 + 0x1a0,6);
  }
  return;
}



//==== 00334a8c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M295_00334a8c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M295_00334a8c(void)

{
  DAT_0081090c = 0x10000;
  return;
}



//==== 00334aa8  ns=mobyupdate_helpers  size=0x230
// sig: undefined Spawn_Moby295(void)
// callers(2): 00261ce8 mobyupd::update1379::M1379_UpdateMissiles; 0041bb00 mobyupdate_helpers::M688_0041bb00
// callees(6): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 000fddc0 mobyutil::MB_SetAnimation; 000fe610 mobyutil::MB_SphericalToVector; 00127ea8 partupd::SpawnPart_26

MobyInstance *
mobyupdate_helpers::Spawn_Moby295
          (double param_1,float param_2,f32 *param_3,MobyInstance *param_4,f32 *param_5,
          undefined8 param_6,undefined8 param_7)

{
  float *out;
  float fVar1;
  MobyInstance *pMVar2;
  int iVar3;
  
  pMVar2 = mobyfunc::CreateMoby(ROCKET_0127);
  if (pMVar2 != (MobyInstance *)0x0) {
    out = (float *)pMVar2->pVar;
    pMVar2->updateDistance = -1;
    pMVar2->drawDistance = 0xff;
    pMVar2->enabled = '\x01';
    pMVar2->state = '\0';
    out[8] = param_2;
    out[9] = (float)param_4;
    (pMVar2->pos).x = *param_3;
    (pMVar2->pos).y = param_3[1];
    (pMVar2->pos).z = param_3[2];
    (pMVar2->pos).w = param_3[3];
    (pMVar2->rotation).x = *param_5;
    (pMVar2->rotation).y = param_5[1];
    (pMVar2->rotation).z = param_5[2];
    (pMVar2->rotation).w = param_5[3];
    if (param_4 != (MobyInstance *)0x0) {
      out[0xf] = (float)(int)(short)param_4->oClass;
      iVar3 = mobyutil::MB_GetPvarsIfMobyHasThem(param_4);
      if (iVar3 != 0) {
        *(ushort *)(iVar3 + 0x1e) = *(ushort *)(iVar3 + 0x1e) | 0x80;
      }
    }
    out[10] = (float)param_7;
    out[0xb] = (float)param_1;
    out[0xc] = 0.0;
    out[0xd] = 0.0;
    mobyutil::MB_SphericalToVector((float)param_1,param_5[2],-param_5[1],out);
    if (pMVar2->animationId != '\x01') {
      mobyutil::MB_SetAnimation(pMVar2,1,0,10);
    }
    (pMVar2->pos).x = (pMVar2->pos).x + *out;
    (pMVar2->pos).y = (pMVar2->pos).y + out[1];
    (pMVar2->pos).z = (pMVar2->pos).z + out[2];
    fVar1 = out[9];
    if (fVar1 != 0.0) {
      out[4] = *(float *)((int)fVar1 + 0x10);
      out[5] = *(float *)((int)fVar1 + 0x14);
      out[6] = *(float *)((int)fVar1 + 0x18);
      out[7] = *(float *)((int)fVar1 + 0x1c);
    }
    pMVar2->scale =
         pMVar2->pClass->gScale *
         (*(float *)((int)param_2 + 0x2c) / *(float *)(*(int *)((int)param_2 + 0x24) + 0x24));
    mobyfunc::UpdateMobyTransform(pMVar2);
    partupd::SpawnPart_26(0x411e848000000000,pMVar2,&DAT_00334aa0,0x60808080,param_7,0);
  }
  return pMVar2;
}



//==== 00334d40  ns=mobyupdate_unsorted  size=0xb5c
// sig: undefined UpdateMoby_295(MobyInstance * moby)
// callers(0): 
// callees(12): 00057820 collproc::CollLine; 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe610 mobyutil::MB_SphericalToVector; 0010a2e0 mobyutil::OrganicDeltAng; 0010e030 mobyutil::MB_genericExplosion; 001113e0 mobyutil::MB_RotateQuatAxisAngle; 001268f8 partupd::SpawnPart_21; 0012e3e8 partupd::SpawnPart_44; 004fff60 fastfunc::FastDecTimerS32

/* Moby 295 */

void mobyupdate_unsorted::UpdateMoby_295(MobyInstance *moby)

{
  undefined1 uVar1;
  f32 fVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  MobyClass *pMVar10;
  float *out;
  ulonglong *puVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar17;
  float *pfVar18;
  longlong lVar15;
  longlong lVar16;
  longlong lVar19;
  undefined4 *unused;
  longlong lVar20;
  ulonglong uVar21;
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
  double dVar26;
  double dVar27;
  ulonglong in_f21;
  ulonglong in_f22;
  undefined8 uVar28;
  ulonglong in_f23;
  ulonglong in_f24;
  undefined8 uVar29;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar30;
  ulonglong in_f27;
  double dVar31;
  ulonglong in_f28;
  double dVar32;
  undefined8 uVar33;
  ulonglong in_f29;
  double dVar34;
  undefined8 uVar35;
  ulonglong in_f30;
  double dVar36;
  ulonglong in_f31;
  double dVar37;
  
  lVar14 = (longlong)(int)moby;
  uVar13 = ZEXT48(&stack0x00000000);
  lVar16 = uVar13 - 0x210;
  puVar11 = (ulonglong *)lVar16;
  *puVar11 = uVar13;
  puVar11[0x44] = in_LR;
  puVar11[0x37] = in_f21;
  puVar11[0x38] = in_f22;
  puVar11[0x39] = in_f23;
  puVar11[0x3a] = in_f24;
  puVar11[0x3b] = in_f25;
  puVar11[0x3c] = in_f26;
  puVar11[0x3d] = in_f27;
  puVar11[0x3e] = in_f28;
  puVar11[0x3f] = in_f29;
  puVar11[0x40] = in_f30;
  puVar11[0x41] = in_f31;
  puVar11[0x36] = unaff_r31;
  puVar11[0x34] = unaff_r29;
  fVar2 = (moby->pos).y;
  *(f32 *)(puVar11 + 0x18) = (moby->pos).x;
  fVar3 = (moby->pos).z;
  *(f32 *)((int)puVar11 + 0xc4) = fVar2;
  fVar2 = (moby->pos).w;
  pMVar10 = moby->pClass;
  *(f32 *)(puVar11 + 0x19) = fVar3;
  *(f32 *)((int)puVar11 + 0xcc) = fVar2;
  fVar4 = moby->scale;
  dVar34 = 0.10000000149011612;
  fVar5 = pMVar10->gScale;
  puVar11[0x35] = unaff_r30;
  out = (float *)moby->pVar;
  moby->scale = (fVar5 - fVar4) * 0.1 + fVar4;
  dVar37 = 0.0;
  *(undefined4 *)(puVar11 + 0x1e) = 0;
  *(undefined4 *)((int)puVar11 + 0xf4) = 0;
  *(undefined4 *)(puVar11 + 0x1f) = 0;
  *(undefined4 *)((int)puVar11 + 0xfc) = 0;
  dVar32 = -1.0;
  dVar36 = 1.0;
  puVar11[0x33] = unaff_r28;
  puVar11[0x32] = unaff_r27;
  dVar23 = (double)mobyutil::MB_randRangeFloat(-1.0,1.0);
  *(float *)(puVar11 + 0x1e) = (float)dVar23;
  dVar23 = (double)mobyutil::MB_randRangeFloat((float)dVar32,(float)dVar36);
  *(float *)((int)puVar11 + 0xf4) = (float)dVar23;
  dVar23 = (double)mobyutil::MB_randRangeFloat((float)dVar32,(float)dVar36);
  *(float *)(puVar11 + 0x1f) = (float)dVar23;
  dVar23 = (double)mobyutil::MB_randRangeFloat((float)dVar34,0.2);
  fVar8 = mobyutil::g_FrameTime;
  fVar5 = *(float *)((int)puVar11 + 0xf4);
  fVar6 = *(float *)(puVar11 + 0x1e);
  fVar7 = *(float *)(puVar11 + 0x1f);
  dVar27 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
  dVar32 = (double)mobyutil::g_FrameTime;
  fVar4 = (float)((double)(float)(dVar23 * dVar32) / dVar27);
  dVar23 = dVar37;
  if (dVar37 - dVar27 < 0.0) {
    dVar23 = (double)(fVar6 * fVar4);
  }
  dVar30 = dVar37;
  if (dVar37 - dVar27 < 0.0) {
    dVar30 = (double)(fVar5 * fVar4);
  }
  dVar24 = dVar37;
  if (dVar37 - dVar27 < 0.0) {
    dVar24 = (double)(fVar7 * fVar4);
  }
  if (dVar27 - dVar37 < 0.0) {
    dVar23 = (double)(fVar6 * fVar4);
  }
  if (dVar27 - dVar37 < 0.0) {
    dVar30 = (double)(fVar5 * fVar4);
  }
  if (dVar27 - dVar37 < 0.0) {
    dVar24 = (double)(fVar7 * fVar4);
  }
  *(float *)(puVar11 + 0x1e) = (float)dVar23;
  *(float *)((int)puVar11 + 0xf4) = (float)dVar30;
  *(float *)(puVar11 + 0x1f) = (float)dVar24;
  dVar23 = (double)mobyutil::MB_randRangeFloat((float)(dVar32 * dVar34),fVar8);
  fVar4 = *out;
  dVar32 = (double)SQRT(out[2] * out[2] + fVar4 * fVar4 + out[1] * out[1]);
  if (dVar32 == dVar37) {
    *(float *)(puVar11 + 0x1c) = fVar4;
    *(float *)((int)puVar11 + 0xe4) = out[1];
    *(float *)(puVar11 + 0x1d) = out[2];
    fVar4 = out[3];
    *(undefined4 *)(puVar11 + 0x1d) = 0;
    *(undefined4 *)((int)puVar11 + 0xe4) = 0;
    *(undefined4 *)(puVar11 + 0x1c) = 0;
    dVar23 = dVar37;
    dVar32 = dVar37;
    dVar27 = dVar37;
  }
  else {
    fVar5 = (float)(-dVar23 / dVar32);
    dVar23 = (double)(fVar4 * fVar5);
    *(float *)(puVar11 + 0x1c) = fVar4 * fVar5;
    dVar32 = (double)(out[1] * fVar5);
    *(float *)((int)puVar11 + 0xe4) = out[1] * fVar5;
    dVar27 = (double)(out[2] * fVar5);
    *(float *)(puVar11 + 0x1d) = out[2] * fVar5;
    fVar4 = out[3];
  }
  *(float *)((int)puVar11 + 0xec) = fVar4;
  *(float *)(puVar11 + 0x1e) = (float)((double)*(float *)(puVar11 + 0x1e) + dVar23);
  *(float *)((int)puVar11 + 0xf4) = (float)((double)*(float *)((int)puVar11 + 0xf4) + dVar32);
  *(float *)(puVar11 + 0x1f) = (float)((double)*(float *)(puVar11 + 0x1f) + dVar27);
  puVar11[0x2f] = (longlong)(int)(animationSpeed * 6.5);
  uVar35 = 0x40e3880000000000;
  uVar33 = 0x408f400000000000;
  iVar17 = partupd::SpawnPart_44
                     (0x40e3880000000000,0x408f400000000000,dVar36,0xbf3a36e2e0000000,dVar37,
                      lVar14 + 0x10,uVar13 - 0x120,*(undefined4 *)((int)puVar11 + 0x17c),0x7f,
                      &DAT_00b0b0b0,3);
  if (iVar17 != 0) {
    *(undefined1 *)(iVar17 + 3) = 0x48;
  }
  dVar30 = 0.3333333432674408;
  dVar34 = 60.5;
  uVar29 = 0xbf2a36e2e0000000;
  dVar27 = 0.019999999552965164;
  uVar28 = 0x40d3880000000000;
  dVar32 = 5.5;
  dVar23 = dVar37;
  do {
    dVar31 = (double)(float)(dVar23 + dVar30);
    dVar23 = (double)mobyutil::MB_randRangeFloat((float)dVar23,(float)(dVar23 + dVar30));
    fVar4 = *out;
    fVar5 = (moby->pos).x;
    fVar6 = (moby->pos).y;
    fVar7 = (moby->pos).z;
    dVar24 = (double)SQRT(out[2] * out[2] + fVar4 * fVar4 + out[1] * out[1]);
    if (dVar24 == dVar37) {
      *(float *)(puVar11 + 0x1c) = fVar4;
      *(float *)((int)puVar11 + 0xe4) = out[1];
      *(float *)(puVar11 + 0x1d) = out[2];
      fVar4 = out[3];
      dVar23 = dVar37;
      dVar24 = dVar37;
      dVar26 = dVar37;
    }
    else {
      fVar8 = (float)((double)(float)(dVar23 * (double)out[0xb]) / dVar24);
      dVar23 = (double)(fVar4 * fVar8);
      *(float *)(puVar11 + 0x1c) = fVar4 * fVar8;
      dVar24 = (double)(out[1] * fVar8);
      *(float *)((int)puVar11 + 0xe4) = out[1] * fVar8;
      dVar26 = (double)(out[2] * fVar8);
      *(float *)(puVar11 + 0x1d) = out[2] * fVar8;
      fVar4 = out[3];
    }
    dVar25 = (double)animationSpeed;
    *(float *)((int)puVar11 + 0xec) = fVar4;
    *(float *)(puVar11 + 0x1c) = (float)(dVar23 + (double)fVar5);
    *(float *)((int)puVar11 + 0xe4) = (float)(dVar24 + (double)fVar6);
    *(float *)(puVar11 + 0x1d) = (float)(dVar26 + (double)fVar7);
    puVar11[0x2f] = (longlong)(int)(dVar25 * dVar34);
    iVar17 = partupd::SpawnPart_44
                       (uVar35,uVar33,dVar36,uVar29,dVar37,uVar13 - 0x130,uVar13 - 0x120,
                        *(undefined4 *)((int)puVar11 + 0x17c),0x7f,FUN_00606060,3);
    fVar4 = (moby->transform).v2.x;
    fVar5 = (moby->transform).v2.y;
    fVar6 = (moby->transform).v2.z;
    fVar7 = (moby->transform).v2.w;
    if (iVar17 != 0) {
      uVar1 = *DAT_00a52860;
      *(undefined1 *)(iVar17 + 3) = 0x48;
      *(undefined1 *)(iVar17 + 2) = uVar1;
    }
    *(float *)(puVar11 + 0x20) = (float)((double)fVar4 * dVar27);
    *(float *)((int)puVar11 + 0x104) = (float)((double)fVar5 * dVar27);
    *(float *)(puVar11 + 0x21) = (float)((double)fVar6 * dVar27);
    *(float *)((int)puVar11 + 0x10c) = (float)((double)fVar7 * dVar27);
    dVar23 = (double)mobyutil::MB_randRot();
    pfVar18 = (float *)(uVar13 - 0x110);
    mobyutil::MB_RotateQuatAxisAngle((float)dVar23,pfVar18,pfVar18);
    puVar11[0x2f] = (longlong)(int)((double)animationSpeed * dVar32);
    iVar17 = partupd::SpawnPart_21(uVar28,uVar13 - 0x130,uVar13 - 0x110,0x4f007fff,0x1fffffff);
    if (iVar17 != 0) {
      *(undefined1 *)(iVar17 + 3) = 0x48;
    }
    dVar23 = dVar31;
  } while (dVar31 < dVar36);
  fVar4 = out[9];
  if (fVar4 != 0.0) {
    if ((((*(ushort *)((int)fVar4 + 0x34) & 0x1000) == 0) &&
        ((*(ushort *)((int)fVar4 + 0x34) & 1) != 0)) && (*(int *)((int)fVar4 + 0x94) == 0)) {
      out[9] = 0.0;
    }
    else if (((float)(int)*(short *)((int)fVar4 + 0xa6) == out[0xf]) &&
            (*(char *)((int)fVar4 + 0x20) != -3 && *(char *)((int)fVar4 + 0x20) != -2)) {
      fVar5 = out[5] - *(float *)((int)fVar4 + 0x14);
      fVar6 = out[4] - *(float *)((int)fVar4 + 0x10);
      fVar7 = out[6] - *(float *)((int)fVar4 + 0x18);
      if (SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5) < 3.0) {
        fVar5 = (moby->pos).x;
        fVar6 = (moby->pos).y;
        fVar7 = *(float *)((int)fVar4 + 0x10) - fVar5;
        fVar4 = *(float *)((int)fVar4 + 0x14) - fVar6;
        dVar32 = ABS((double)fVar7);
        dVar27 = ABS((double)fVar4);
        *(float *)((int)puVar11 + 300) = fVar7;
        *(float *)(puVar11 + 0x26) = fVar4;
        *(float *)((int)puVar11 + 0x134) = (float)(dVar32 - dVar27);
        uVar21 = (ulonglong)(*(uint *)((int)puVar11 + 300) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar11 + 0x134) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar11 + 0x26) >> 0x1d) & 4;
        dVar23 = ABS((double)*(float *)((int)puVar11 + 300));
        if ((double)*(float *)((int)puVar11 + 0x134) - dVar37 < 0.0) {
          dVar23 = dVar27;
        }
        fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
        dVar27 = ABS((double)*(float *)(puVar11 + 0x26));
        if ((double)*(float *)((int)puVar11 + 0x134) - dVar37 < 0.0) {
          dVar27 = dVar32;
        }
        fVar7 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
        dVar32 = dVar37;
        if (dVar37 < dVar23) {
          lVar15 = uVar13 - 0x200;
          lVar20 = uVar13 - 0xa8;
          lVar19 = uVar13 - 0xb8;
          lVar22 = 2;
          fVar8 = (float)(dVar27 - dVar23) / (float)(dVar27 + dVar23);
          fVar9 = fVar8 * fVar8;
          *(float *)((int)puVar11 + 0x164) = fVar8;
          *(float *)((int)puVar11 + 0x15c) = fVar8;
          *(float *)(puVar11 + 0x2c) = fVar8;
          *(float *)(puVar11 + 0x2b) = fVar8;
          fVar8 = fVar9 * fVar9;
          *(float *)((int)puVar11 + 0x15c) = *(float *)((int)puVar11 + 0x15c) * fVar9;
          *(float *)(puVar11 + 0x2c) = *(float *)(puVar11 + 0x2c) * fVar8;
          *(float *)((int)puVar11 + 0x164) = *(float *)((int)puVar11 + 0x164) * fVar8 * fVar9;
          do {
            *(float *)((int)lVar15 + 0x158) = *(float *)((int)lVar15 + 0x148) * fVar8 * fVar8;
            iVar17 = (int)lVar19;
            lVar19 = lVar19 + 8;
            lVar15 = lVar15 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)(iVar17 + 4) * fVar8 * fVar8;
            lVar20 = lVar20 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar22 = 4;
          lVar20 = uVar13 - 0xb8;
          pfVar18 = (float *)&DAT_007358e0;
          lVar15 = lVar16;
          lVar19 = lVar20;
          do {
            fVar8 = *pfVar18;
            fVar9 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar15 + 0x158) = *(float *)((int)lVar15 + 0x158) * fVar8;
            lVar15 = lVar15 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar9;
            lVar19 = lVar19 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar19 = 2;
          lVar15 = lVar16;
          dVar23 = dVar37;
          do {
            iVar17 = (int)lVar15;
            iVar12 = (int)lVar20;
            lVar15 = lVar15 + 0x10;
            lVar20 = lVar20 + 0x10;
            dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar17 + 0x158)) +
                              *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                             *(float *)(iVar12 + 0xc));
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          dVar32 = (double)((float)(dVar23 + 0.7853981852531433) * fVar4 + fVar7);
        }
        (moby->rotation).z = (float)dVar32;
        fVar4 = out[9];
        fVar6 = fVar6 - *(float *)((int)fVar4 + 0x14);
        fVar5 = fVar5 - *(float *)((int)fVar4 + 0x10);
        fVar7 = *(float *)((int)fVar4 + 0x18) - (moby->pos).z;
        fVar4 = SQRT(fVar5 * fVar5 + fVar6 * fVar6);
        *(float *)((int)puVar11 + 0x124) = fVar7;
        dVar27 = ABS((double)fVar7);
        dVar32 = ABS((double)fVar4);
        *(float *)(puVar11 + 0x24) = fVar4;
        *(float *)(puVar11 + 0x25) = (float)(dVar32 - dVar27);
        uVar21 = (ulonglong)(*(uint *)(puVar11 + 0x24) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar11 + 0x25) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar11 + 0x124) >> 0x1d) & 4;
        dVar23 = ABS((double)*(float *)(puVar11 + 0x24));
        if ((double)*(float *)(puVar11 + 0x25) - dVar37 < 0.0) {
          dVar23 = dVar27;
        }
        fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
        dVar27 = ABS((double)*(float *)((int)puVar11 + 0x124));
        if ((double)*(float *)(puVar11 + 0x25) - dVar37 < 0.0) {
          dVar27 = dVar32;
        }
        fVar5 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
        if (dVar37 < dVar23) {
          lVar15 = uVar13 - 0x200;
          lVar20 = uVar13 - 200;
          lVar19 = uVar13 - 0xd8;
          lVar22 = 2;
          fVar6 = (float)(dVar27 - dVar23) / (float)(dVar27 + dVar23);
          fVar7 = fVar6 * fVar6;
          *(float *)((int)puVar11 + 0x144) = fVar6;
          *(float *)((int)puVar11 + 0x13c) = fVar6;
          *(float *)(puVar11 + 0x28) = fVar6;
          *(float *)(puVar11 + 0x27) = fVar6;
          fVar6 = fVar7 * fVar7;
          *(float *)((int)puVar11 + 0x13c) = *(float *)((int)puVar11 + 0x13c) * fVar7;
          *(float *)(puVar11 + 0x28) = *(float *)(puVar11 + 0x28) * fVar6;
          *(float *)((int)puVar11 + 0x144) = *(float *)((int)puVar11 + 0x144) * fVar6 * fVar7;
          do {
            *(float *)((int)lVar15 + 0x138) = *(float *)((int)lVar15 + 0x128) * fVar6 * fVar6;
            iVar17 = (int)lVar19;
            lVar19 = lVar19 + 8;
            lVar15 = lVar15 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)(iVar17 + 4) * fVar6 * fVar6;
            lVar20 = lVar20 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar22 = 4;
          lVar20 = uVar13 - 0xd8;
          pfVar18 = (float *)&DAT_007358e0;
          lVar15 = lVar16;
          lVar19 = lVar20;
          do {
            fVar6 = *pfVar18;
            fVar7 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar15 + 0x138) = *(float *)((int)lVar15 + 0x138) * fVar6;
            lVar15 = lVar15 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar7;
            lVar19 = lVar19 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar15 = 2;
          do {
            iVar17 = (int)lVar16;
            iVar12 = (int)lVar20;
            lVar16 = lVar16 + 0x10;
            lVar20 = lVar20 + 0x10;
            dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar17 + 0x138)) +
                              *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                             *(float *)(iVar12 + 0xc));
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          dVar37 = (double)((float)(dVar37 + 0.7853981852531433) * fVar4 + fVar5);
        }
        (moby->rotation).y = (float)-dVar37;
        fVar4 = out[9];
        out[4] = *(float *)((int)fVar4 + 0x10);
        out[5] = *(float *)((int)fVar4 + 0x14);
        out[6] = *(float *)((int)fVar4 + 0x18);
        out[7] = *(float *)((int)fVar4 + 0x1c);
        goto LAB_003356b0;
      }
    }
  }
  unused = &DAT_00334cd8;
  dVar32 = 251.32740783691406;
  dVar23 = 2513.274169921875;
  mobyutil::OrganicDeltAng
            ((moby->rotation).z,DAT_0071f418 * 251.32741,DAT_0071f418 * 251.32741,
             mobyutil::g_FrameTime * 2513.2742,&(moby->rotation).z,0x334cd8,out + 0xc);
  mobyutil::OrganicDeltAng
            ((moby->rotation).y,(float)((double)DAT_0071f418 * dVar32),
             (float)((double)DAT_0071f418 * dVar32),(float)((double)mobyutil::g_FrameTime * dVar23),
             &(moby->rotation).y,(int)unused,out + 0xd);
  out[9] = 0.0;
LAB_003356b0:
  mobyutil::MB_SphericalToVector(out[0xb],(moby->rotation).z,-(moby->rotation).y,out);
  fVar4 = (moby->pos).x + *out;
  (moby->pos).x = fVar4;
  fVar5 = (moby->pos).y + out[1];
  (moby->pos).y = fVar5;
  fVar6 = (moby->pos).z + out[2];
  (moby->pos).z = fVar6;
  uVar33 = 0x4000000000000000;
  if (2.0 <= fVar4) {
    if (((fVar4 <= 1021.0) && (2.0 <= fVar5)) &&
       ((fVar5 <= 1021.0 && ((2.0 <= fVar6 && (fVar6 <= 1021.0)))))) {
      mobyfunc::GetBonePosition(lVar14,1,uVar13 - 0x140);
      iVar17 = collproc::CollLine(uVar13 - 0x150,uVar13 - 0x140,0,out[8],0);
      fVar4 = CollOutput.ip.y;
      if (iVar17 != 0) {
        *(float *)(puVar11 + 0x22) = CollOutput.ip.x;
        fVar5 = CollOutput.ip.z;
        *(float *)((int)puVar11 + 0x114) = fVar4;
        fVar4 = CollOutput.ip.w;
        *(float *)(puVar11 + 0x23) = fVar5;
        *(float *)((int)puVar11 + 0x11c) = fVar4;
        puVar11[0x12] = 0;
        puVar11[0x14] = 0;
        puVar11[0x15] = 1;
        puVar11[0x16] = 0xffffffffffffffff;
        puVar11[0x17] = 0;
        mobyutil::MB_genericExplosion
                  (uVar33,0x4024000000000000,0x4010000000000000,uVar33,0x4022000000000000,dVar36,
                   0x4034000000000000,lVar14,out,uVar13 - 0x100,1,0xffffffffffffffff,10,3,0x10);
        mobyfunc::DeleteMoby(moby);
        return;
      }
      iVar17 = fastfunc::FastDecTimerS32(out + 10);
      if (iVar17 == 0) {
        return;
      }
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  mobyfunc::DeleteMoby(moby);
  return;
}



//==== 003358c8  ns=mobyupdate_unsorted  size=0x770
// sig: undefined UpdateMoby_{296_297_652_653}(MobyInstance * moby)
// callers(0): 
// callees(2): 00112900 mobyutil::MB_GetOrientation; 004fff60 fastfunc::FastDecTimerS32

/* Moby 296
   Moby 297
   Moby 652
   Moby 653 */

void mobyupdate_unsorted::UpdateMoby__296_297_652_653_(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  void *pvVar3;
  uint uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 in_LR;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  pvVar3 = moby->pVar;
  uVar11 = ZEXT48(pvVar3);
  if (pvVar3 != (void *)0x0) {
    bVar1 = moby->state;
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        auVar13 = ZEXT416(0xffffffff);
        auVar14 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
        auVar13 = loadVectorLeftIndexed(0x934,0x810000);
        auVar12 = vectorConvertFromSignedFixedPointWord(auVar13,0);
        *(undefined4 *)((int)pvVar3 + 0x4c) = 0;
        *(undefined4 *)((int)pvVar3 + 0x48) = 0;
        *(undefined4 *)((int)pvVar3 + 0x44) = 0;
        *(undefined4 *)((int)pvVar3 + 0x40) = 0;
        auVar13 = loadVectorLeftIndexed(in_LR,0x3358a0);
        auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar13 = vectorAddFloatingPoint
                            (auVar12,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60);
        auVar12 = vectorShiftLeftIntegerWord(auVar14,auVar14);
        auVar14 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        iVar10 = *(int *)((int)pvVar3 + 0xa4);
        uVar4 = *(uint *)((int)pvVar3 + 0x9c);
        auVar13 = vectorMultiplyAddFloatingPoint(auVar14,auVar13,auVar12);
        auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
        auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar5 = storeVectorElementWordIndexed
                          (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0xa0,uVar11
                          );
        *(undefined4 *)((int)pvVar3 + 0xa0U & 0xfffffffc) = uVar5;
        *(uint *)((int)pvVar3 + 0x9c) = uVar4 | 4;
        moby->state = ((byte)((LZCOUNT(-iVar10) << 0x3a) >> 0x3f) & 0xfe) + 3;
      }
      else {
        moby->unk58 = 1.0;
        iVar10 = fastfunc::FastDecTimerS32(uVar11 + 0xa0);
        fVar2 = (moby->rotation).z;
        if (iVar10 == 0) {
          fVar6 = SQRT(*(float *)((int)pvVar3 + 0x48) * *(float *)((int)pvVar3 + 0x48) +
                       *(float *)((int)pvVar3 + 0x40) * *(float *)((int)pvVar3 + 0x40) +
                       *(float *)((int)pvVar3 + 0x44) * *(float *)((int)pvVar3 + 0x44));
          if (fVar6 < ABS(DAT_00810930 * mobyutil::g_FrameTime)) {
            fVar6 = DAT_00810938 * DAT_0071f418 + fVar6;
          }
          fVar2 = fVar2 + 1.5707963;
          fVar7 = 3.1415925 - fVar2;
          if (fVar2 - (3.1415925 - fVar2) < 0.0) {
            fVar7 = fVar2;
          }
          fVar8 = -3.1415925 - fVar2;
          if ((-3.1415925 - fVar2) - fVar7 < 0.0) {
            fVar8 = fVar7;
          }
          fVar2 = fVar8 * fVar8;
          fVar7 = fVar2 * fVar2 * fVar8;
          fVar9 = fVar2 * fVar7;
          *(float *)((int)pvVar3 + 0x40) =
               -((fVar2 * fVar9 * 2.601887e-06 +
                 fVar9 * -0.0001980741 + fVar7 * 0.0083330255 + fVar2 * fVar8 * -0.16666657 + fVar8)
                * fVar6);
          fVar2 = (moby->rotation).z;
          *(undefined4 *)((int)pvVar3 + 0x48) = 0;
          fVar7 = 3.1415925 - fVar2;
          if (fVar2 - (3.1415925 - fVar2) < 0.0) {
            fVar7 = fVar2;
          }
          fVar8 = -3.1415925 - fVar2;
          if ((-3.1415925 - fVar2) - fVar7 < 0.0) {
            fVar8 = fVar7;
          }
          fVar2 = fVar8 * fVar8;
          fVar7 = fVar2 * fVar2 * fVar8;
          fVar9 = fVar2 * fVar7;
          *(float *)((int)pvVar3 + 0x44) =
               -((fVar2 * fVar9 * 2.601887e-06 +
                 fVar9 * -0.0001980741 + fVar7 * 0.0083330255 + fVar2 * fVar8 * -0.16666657 + fVar8)
                * fVar6);
        }
        else {
          fVar6 = -(DAT_00810938 * DAT_0071f418 -
                   SQRT(*(float *)((int)pvVar3 + 0x48) * *(float *)((int)pvVar3 + 0x48) +
                        *(float *)((int)pvVar3 + 0x40) * *(float *)((int)pvVar3 + 0x40) +
                        *(float *)((int)pvVar3 + 0x44) * *(float *)((int)pvVar3 + 0x44)));
          if (0.0 < fVar6) {
            fVar2 = fVar2 + 1.5707963;
            fVar7 = 3.1415925 - fVar2;
            if (fVar2 - (3.1415925 - fVar2) < 0.0) {
              fVar7 = fVar2;
            }
            fVar8 = -3.1415925 - fVar2;
            if ((-3.1415925 - fVar2) - fVar7 < 0.0) {
              fVar8 = fVar7;
            }
            fVar2 = fVar8 * fVar8;
            fVar7 = fVar2 * fVar2 * fVar8;
            fVar9 = fVar2 * fVar7;
            *(float *)((int)pvVar3 + 0x40) =
                 -((fVar2 * fVar9 * 2.601887e-06 +
                   fVar9 * -0.0001980741 +
                   fVar7 * 0.0083330255 + fVar2 * fVar8 * -0.16666657 + fVar8) * fVar6);
            fVar2 = (moby->rotation).z;
            *(undefined4 *)((int)pvVar3 + 0x48) = 0;
            fVar7 = 3.1415925 - fVar2;
            if (fVar2 - (3.1415925 - fVar2) < 0.0) {
              fVar7 = fVar2;
            }
            fVar8 = -3.1415925 - fVar2;
            if ((-3.1415925 - fVar2) - fVar7 < 0.0) {
              fVar8 = fVar7;
            }
            fVar2 = fVar8 * fVar8;
            fVar7 = fVar2 * fVar2 * fVar8;
            fVar9 = fVar2 * fVar7;
            *(float *)((int)pvVar3 + 0x44) =
                 -((fVar2 * fVar9 * 2.601887e-06 +
                   fVar9 * -0.0001980741 +
                   fVar7 * 0.0083330255 + fVar2 * fVar8 * -0.16666657 + fVar8) * fVar6);
          }
          else {
            auVar13 = ZEXT416(0xffffffff);
            auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
            auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
            auVar13 = loadVectorLeftIndexed(0x934,0x810000);
            auVar12 = vectorConvertFromSignedFixedPointWord(auVar13,0);
            auVar13 = loadVectorLeftIndexed(in_LR,0x3358a0);
            auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar13 = vectorAddFloatingPoint
                                (auVar12,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 |
                                         auVar13 << 0x60);
            auVar13 = vectorMultiplyAddFloatingPoint(auVar15,auVar13,auVar14);
            auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
            auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar5 = storeVectorElementWordIndexed
                              (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0xa0,
                               uVar11);
            *(undefined4 *)((int)pvVar3 + 0xa0U & 0xfffffffc) = uVar5;
            moby->state = '\x02';
          }
        }
        moby->unk58 = fVar6 / (DAT_00810930 * mobyutil::g_FrameTime);
      }
    }
    else if (bVar1 < 3) {
      moby->unk58 = -1.0;
      iVar10 = fastfunc::FastDecTimerS32(uVar11 + 0xa0);
      fVar2 = (moby->rotation).z;
      if (iVar10 == 0) {
        fVar6 = SQRT(*(float *)((int)pvVar3 + 0x48) * *(float *)((int)pvVar3 + 0x48) +
                     *(float *)((int)pvVar3 + 0x40) * *(float *)((int)pvVar3 + 0x40) +
                     *(float *)((int)pvVar3 + 0x44) * *(float *)((int)pvVar3 + 0x44));
        if (fVar6 < ABS(DAT_00810930 * mobyutil::g_FrameTime)) {
          fVar6 = DAT_00810938 * DAT_0071f418 + fVar6;
        }
        fVar2 = fVar2 + 1.5707963;
        fVar7 = 3.1415925 - fVar2;
        if (fVar2 - (3.1415925 - fVar2) < 0.0) {
          fVar7 = fVar2;
        }
        fVar8 = -3.1415925 - fVar2;
        if ((-3.1415925 - fVar2) - fVar7 < 0.0) {
          fVar8 = fVar7;
        }
        fVar2 = fVar8 * fVar8;
        fVar7 = fVar2 * fVar2 * fVar8;
        fVar9 = fVar2 * fVar7;
        *(float *)((int)pvVar3 + 0x40) =
             (fVar2 * fVar9 * 2.601887e-06 +
             fVar9 * -0.0001980741 + fVar7 * 0.0083330255 + fVar2 * fVar8 * -0.16666657 + fVar8) *
             fVar6;
        fVar2 = (moby->rotation).z;
        *(undefined4 *)((int)pvVar3 + 0x48) = 0;
        fVar7 = 3.1415925 - fVar2;
        if (fVar2 - (3.1415925 - fVar2) < 0.0) {
          fVar7 = fVar2;
        }
        fVar8 = -3.1415925 - fVar2;
        if ((-3.1415925 - fVar2) - fVar7 < 0.0) {
          fVar8 = fVar7;
        }
        fVar2 = fVar8 * fVar8;
        fVar7 = fVar2 * fVar2 * fVar8;
        fVar9 = fVar2 * fVar7;
        *(float *)((int)pvVar3 + 0x44) =
             (fVar2 * fVar9 * 2.601887e-06 +
             fVar9 * -0.0001980741 + fVar7 * 0.0083330255 + fVar2 * fVar8 * -0.16666657 + fVar8) *
             fVar6;
      }
      else {
        fVar6 = -(DAT_00810938 * DAT_0071f418 -
                 SQRT(*(float *)((int)pvVar3 + 0x48) * *(float *)((int)pvVar3 + 0x48) +
                      *(float *)((int)pvVar3 + 0x40) * *(float *)((int)pvVar3 + 0x40) +
                      *(float *)((int)pvVar3 + 0x44) * *(float *)((int)pvVar3 + 0x44)));
        if (0.0 < fVar6) {
          fVar2 = fVar2 + 1.5707963;
          fVar7 = 3.1415925 - fVar2;
          if (fVar2 - (3.1415925 - fVar2) < 0.0) {
            fVar7 = fVar2;
          }
          fVar8 = -3.1415925 - fVar2;
          if ((-3.1415925 - fVar2) - fVar7 < 0.0) {
            fVar8 = fVar7;
          }
          fVar2 = fVar8 * fVar8;
          fVar7 = fVar2 * fVar2 * fVar8;
          fVar9 = fVar2 * fVar7;
          *(float *)((int)pvVar3 + 0x40) =
               (fVar2 * fVar9 * 2.601887e-06 +
               fVar9 * -0.0001980741 + fVar7 * 0.0083330255 + fVar2 * fVar8 * -0.16666657 + fVar8) *
               fVar6;
          fVar2 = (moby->rotation).z;
          *(undefined4 *)((int)pvVar3 + 0x48) = 0;
          fVar7 = 3.1415925 - fVar2;
          if (fVar2 - (3.1415925 - fVar2) < 0.0) {
            fVar7 = fVar2;
          }
          fVar8 = -3.1415925 - fVar2;
          if ((-3.1415925 - fVar2) - fVar7 < 0.0) {
            fVar8 = fVar7;
          }
          fVar2 = fVar8 * fVar8;
          fVar7 = fVar2 * fVar2 * fVar8;
          fVar9 = fVar2 * fVar7;
          *(float *)((int)pvVar3 + 0x44) =
               (fVar2 * fVar9 * 2.601887e-06 +
               fVar9 * -0.0001980741 + fVar7 * 0.0083330255 + fVar2 * fVar8 * -0.16666657 + fVar8) *
               fVar6;
        }
        else {
          auVar13 = ZEXT416(0xffffffff);
          auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
          auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
          auVar13 = loadVectorLeftIndexed(0x934,0x810000);
          auVar12 = vectorConvertFromSignedFixedPointWord(auVar13,0);
          auVar13 = loadVectorLeftIndexed(in_LR,0x3358a0);
          auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar13 = vectorAddFloatingPoint
                              (auVar12,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60
                              );
          auVar13 = vectorMultiplyAddFloatingPoint(auVar15,auVar13,auVar14);
          auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
          auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar5 = storeVectorElementWordIndexed
                            (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0xa0,
                             uVar11);
          *(undefined4 *)((int)pvVar3 + 0xa0U & 0xfffffffc) = uVar5;
          moby->state = '\x01';
        }
      }
      moby->unk58 = fVar6 / -(DAT_00810930 * mobyutil::g_FrameTime);
    }
    else if (bVar1 < 4) {
      fVar2 = (moby->rotation).z + 1.5707963;
      fVar6 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar6 = fVar2;
      }
      fVar7 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar6 < 0.0) {
        fVar7 = fVar6;
      }
      fVar2 = fVar7 * fVar7;
      fVar9 = DAT_00810930 * mobyutil::g_FrameTime;
      fVar6 = fVar2 * fVar2 * fVar7;
      fVar8 = fVar2 * fVar6;
      *(float *)((int)pvVar3 + 0x40) =
           -(fVar9 * (fVar2 * fVar8 * 2.601887e-06 +
                     fVar8 * -0.0001980741 +
                     fVar6 * 0.0083330255 + fVar2 * fVar7 * -0.16666657 + fVar7));
      fVar2 = (moby->rotation).z;
      *(undefined4 *)((int)pvVar3 + 0x48) = 0;
      fVar6 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar6 = fVar2;
      }
      fVar7 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar6 < 0.0) {
        fVar7 = fVar6;
      }
      fVar2 = fVar7 * fVar7;
      fVar6 = fVar2 * fVar2 * fVar7;
      fVar8 = fVar2 * fVar6;
      *(float *)((int)pvVar3 + 0x44) =
           -(fVar9 * (fVar2 * fVar8 * 2.601887e-06 +
                     fVar8 * -0.0001980741 +
                     fVar6 * 0.0083330255 + fVar2 * fVar7 * -0.16666657 + fVar7));
    }
    mobyutil::MB_GetOrientation
              ((MobyInstance *)((int)pvVar3 + 0x60),(Vec4 *)((int)pvVar3 + 0x40),
               (longlong)(int)moby + 0x40,(longlong)(int)moby + 0x40);
  }
  return;
}



//==== 00336038  ns=mobyupdate_helpers  size=0x14
// sig: undefined M653_00336038(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M653_00336038(void)

{
  DAT_00810988 = 0x10000;
  return;
}



//==== 00336050  ns=mobyupdate_helpers  size=0xf4
// sig: undefined M653_00336050(void)
// callers(0): 
// callees(1): 000f0ea8 mobyfunc::AttachManipulator
// strings: 0096c074: 'None'

void mobyupdate_helpers::M653_00336050(int param_1)

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



//==== 003361b0  ns=mobyupdate_unsorted  size=0xde0
// sig: undefined UpdateMoby_298(MobyInstance * moby)
// callers(0): 
// callees(21): 0007b310 help::Help_QueueMessage; 000e8aa4 memcard::memcard_Save; 000efb38 mobyfunc::DeleteMoby; 000f0ea8 mobyfunc::AttachManipulator; 000f1e50 mobyfunc::SetLevelFlag; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 000fe610 mobyutil::MB_SphericalToVector; 00106360 mobyutil::MB_SetZBoundsFromGround; 00112a38 mobyutil::MB_ToastMessage; 00112dc0 mobyutil::MB_UnlockTrophy; 001167c8 mobyutil::MB_UpdateManipulatorRot; 00119488 mobyutil::MB_SetPointAheadOfMoby; 00151e70 respawn::SetSpawnPoint; 004d3720 FUN_004d3720; 004d3870 FUN_004d3870; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt
// strings: 0096c074: 'None'

/* Moby 298 */

void mobyupdate_unsorted::UpdateMoby_298(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  ulonglong *puVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  int iVar13;
  undefined2 uVar14;
  gameMode_t gVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar20;
  undefined4 uVar21;
  longlong lVar18;
  longlong lVar19;
  short sVar24;
  float *pfVar23;
  longlong lVar22;
  longlong lVar25;
  ulonglong unaff_r26;
  undefined4 *puVar26;
  ulonglong unaff_r27;
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
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar32;
  double dVar33;
  ulonglong in_f30;
  double dVar34;
  double dVar35;
  ulonglong in_f31;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar19 = uVar16 - 0x160;
  puVar9 = (ulonglong *)lVar19;
  *puVar9 = uVar16;
  puVar9[0x2e] = in_LR;
  puVar9[0x27] = in_f27;
  puVar9[0x28] = in_f28;
  puVar9[0x29] = in_f29;
  puVar9[0x2a] = in_f30;
  puVar9[0x2b] = in_f31;
  puVar9[0x26] = unaff_r31;
  puVar9[0x25] = unaff_r30;
  gVar15 = g_gameMode;
  pvVar8 = moby->pVar;
  uVar27 = ZEXT48(pvVar8);
  puVar9[0x24] = unaff_r29;
  puVar9[0x23] = unaff_r28;
  puVar9[0x22] = unaff_r27;
  puVar9[0x21] = unaff_r26;
  if ((gVar15 == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar20 = 0;
    puVar26 = &DAT_0095cd50;
    sVar24 = boot::g_SpaceSceneMobyCnt._0_2_;
    if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
      do {
        if ((((MobyInstance *)puVar26[0x5e])->oClass == moby->oClass) && (DAT_00a1bf81 == '\0')) {
          mobyfunc::AttachManipulator((MobyInstance *)puVar26[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = 0x40300000;
          DAT_00a1bfa4 = 0x40300000;
          DAT_00a1bfa8 = 0x40300000;
          sVar24 = boot::g_SpaceSceneMobyCnt._0_2_;
        }
        iVar20 = iVar20 + 1;
        puVar26 = puVar26 + 1;
      } while (iVar20 < sVar24);
    }
  }
  if ((moby->enabled != '\0') &&
     (fVar2 = (moby->pos).y - GameCamera.posY, fVar3 = (moby->pos).x - GameCamera.posX,
     fVar5 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2) < 30.0)) {
    mobyutil::MB_SetZBoundsFromGround(moby);
    moby->shadow = '\x18';
  }
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
    if (moby->animationId != '\x01') {
      puVar9[0x1f] = (longlong)(int)(animationSpeed * 20.5);
      mobyutil::MB_SetAnimation(moby,1,0,*(undefined4 *)((int)puVar9 + 0xfc));
    }
    if (CHAR_ARRAY_0096c165[0x23] != '\0') {
      mobyfunc::DeleteMoby(moby);
      return;
    }
    FUN_004d3720(moby,uVar27);
    *(undefined4 *)((int)pvVar8 + 0xc) = 0x40800000;
  }
  else if (bVar1 < 2) {
    iVar20 = FUN_004d3870(moby,uVar27);
    if (iVar20 != 0) {
      mobyutil::MB_SetPointAheadOfMoby(0x4008000000000000,moby);
      moby->state = '\x02';
    }
    if (((MiscLevelFlags.Raritanium == false) && (UnlockableItems.persuader == '\0')) &&
       (fVar2 = (moby->pos).y - g_heroPosition.y, fVar3 = (moby->pos).x - g_heroPosition.x,
       fVar5 = (moby->pos).z - g_heroPosition.z,
       SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2) < 4.0)) {
      puVar9[0x1f] = (longlong)update::g_GameFrameCount;
      fVar2 = animationSpeed;
      puVar9[0x1f] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar9[0x1f] + 0.5));
      uVar14 = CHAR_ARRAY_00a1000c._1074_2_;
      iVar20 = *(int *)((int)puVar9 + 0xfc);
      uVar10 = (uint)(ushort)CHAR_ARRAY_00a1000c._1074_2_;
      uVar11 = (uint)(ushort)CHAR_ARRAY_00a1000c._1074_2_;
      puVar9[0x1f] = (longlong)(int)((float)(longlong)(fVar2 * 18.5) * 60.0);
      if ((*(int *)((int)puVar9 + 0xfc) < (int)(iVar20 + uVar11 * -600)) || (uVar10 * 600 == 0)) {
        help::Help_QueueMessage(STR_OUR_LONG_RANGE_SENSORS_DO_0x2B03,0x86);
      }
      else if ((int)(uint)(ushort)uVar14 < iVar20 / 600) {
        sVar24 = (short)(iVar20 >> 0x1f);
        CHAR_ARRAY_00a1000c._1074_2_ =
             ((short)(iVar20 / 600) + sVar24) -
             ((short)((short)(iVar20 / 0x2580000) + sVar24) >> 0xf);
      }
    }
    if (((g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1) &&
        (fVar2 = g_heroPosition.y - (moby->pos).y, fVar3 = g_heroPosition.x - (moby->pos).x,
        fVar5 = g_heroPosition.z - (moby->pos).z,
        SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2) < 4.0)) && (ABS(fVar5) < 4.0)) {
      mobyfunc::SetLevelFlag();
      respawn::SetSpawnPoint
                ((Vec4 *)&Cuboids[*(int *)((int)pvVar8 + 0x48)].pos,
                 (Vec4 *)&Cuboids[*(int *)((int)pvVar8 + 0x48)].rot);
    }
  }
  else if (((bVar1 < 3) && (g_gameMode != GAME_MODE_SCENE)) &&
          (moby->state = '\x01', *(short *)((int)pvVar8 + 4) == 2)) {
    CHAR_ARRAY_0096c165[0x23] = '\x01';
    MiscLevelFlags.Raritanium = false;
    UnlockableItems.persuader = '\x01';
    mobyutil::MB_UnlockTrophy(THESE_ARE_NOT_THE_DROIDS);
    puVar9[0x1f] = (longlong)(int)(animationSpeed * 300.5);
    mobyutil::MB_ToastMessage(0x2b06,*(undefined4 *)((int)puVar9 + 0xfc));
    memcard::memcard_Save(0,-1);
    help::Help_QueueMessage(STR_THE_PERSUADER_IS_AN_0x2AF9,0x3b);
  }
  dVar36 = 0.019999999552965164;
  if (moby->animationId != '\x01') goto LAB_00336eec;
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).x;
  fVar5 = fVar2 - g_heroPosition.y;
  fVar6 = fVar3 - g_heroPosition.x;
  if (8.0 <= SQRT(fVar6 * fVar6 + fVar5 * fVar5)) {
LAB_003369a0:
    if (*(int *)((int)pvVar8 + 0x160) != 0) {
      *(undefined4 *)((int)pvVar8 + 0x160) = 0;
      *(float *)((int)pvVar8 + 0x150) = hero::g_heroCGPos;
      *(float *)((int)pvVar8 + 0x154) = DAT_00969db4;
      *(float *)((int)pvVar8 + 0x158) = DAT_00969db8;
      *(undefined4 *)((int)pvVar8 + 0x15c) = DAT_00969dbc;
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
    uVar17 = (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)(puVar9 + 0x11));
    if (*(float *)(puVar9 + 0x12) - 0.0 < 0.0) {
      fVar6 = fVar4;
    }
    fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
    fVar4 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    fVar12 = ABS(*(float *)((int)puVar9 + 0x8c));
    if (*(float *)(puVar9 + 0x12) - 0.0 < 0.0) {
      fVar12 = fVar5;
    }
    if (0.0 < fVar6) {
      lVar18 = uVar16 - 0x150;
      lVar22 = uVar16 - 0x8c;
      lVar25 = uVar16 - 0x7c;
      lVar28 = 2;
      fVar5 = (fVar12 - fVar6) / (fVar12 + fVar6);
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
        *(float *)((int)lVar18 + 0xd4) = *(float *)((int)lVar18 + 0xc4) * fVar5 * fVar5;
        iVar20 = (int)lVar22;
        lVar18 = lVar18 + 8;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar5 * fVar5;
        lVar25 = lVar25 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar25 = uVar16 - 0x8c;
      pfVar23 = (float *)&DAT_007358e0;
      lVar18 = lVar19;
      lVar22 = lVar25;
      do {
        fVar5 = *pfVar23;
        fVar6 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar18 + 0xd4) = *(float *)((int)lVar18 + 0xd4) * fVar5;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
        lVar22 = lVar22 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar22 = 2;
      lVar18 = lVar19;
      do {
        iVar20 = (int)lVar18;
        iVar13 = (int)lVar25;
        lVar18 = lVar18 + 0x10;
        lVar25 = lVar25 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar20 + 0xd4) + *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8)
                + *(float *)(iVar13 + 0xc);
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar7 + fVar4;
    }
    dVar29 = (double)fastfunc::FastSubRots(fVar2,fVar3);
    if (1.5707963705062866 <= dVar29) goto LAB_003369a0;
    if (SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) <= 0.01) {
      fastfunc::FastDecTimerS32(uVar27 + 0x160);
    }
    else {
      auVar37 = ZEXT416(0xffffffff);
      auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
      auVar38 = vectorShiftLeftIntegerWord(auVar37,auVar37);
      auVar37 = loadVectorLeftIndexed(0x38,0x336144);
      auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar39 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar37 = vectorMultiplyAddFloatingPoint
                          (auVar39,auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,
                           auVar38);
      auVar37 = vectorConvertToSignedFixedPointWordSaturate(auVar37,0);
      auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar21 = storeVectorElementWordIndexed
                         (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0x160,uVar27
                         );
      *(undefined4 *)((int)pvVar8 + 0x160U & 0xfffffffc) = uVar21;
    }
  }
  iVar20 = fastfunc::FastDecTimerS32(uVar27 + 0x164);
  if (iVar20 != 0) {
    dVar29 = (double)mobyutil::MB_randRangeFloat(180.0,300.0);
    uVar21 = fastfunc::FastDoubleToInt((double)(float)(dVar29 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar8 + 0x164) = uVar21;
    dVar34 = (double)(moby->rotation).z;
    dVar29 = (double)mobyutil::MB_randRangeFloat(-90.0,90.0);
    dVar32 = 0.01745329238474369;
    dVar29 = (double)fastfunc::FastWrapRot((float)dVar34,(float)(dVar29 * 0.01745329238474369));
    dVar34 = (double)mobyutil::MB_randRangeFloat(0.0,30.0);
    mobyutil::MB_SphericalToVector
              (6.0,(float)dVar29,(float)(dVar34 * dVar32),(float *)((int)pvVar8 + 0x150));
    *(float *)((int)pvVar8 + 0x150) = *(float *)((int)pvVar8 + 0x150) + (moby->pos).x;
    *(float *)((int)pvVar8 + 0x154) = *(float *)((int)pvVar8 + 0x154) + (moby->pos).y;
    *(float *)((int)pvVar8 + 0x158) = *(float *)((int)pvVar8 + 0x158) + (moby->pos).z;
  }
  if (*(int *)((int)pvVar8 + 0x160) == 0) {
    fVar2 = *(float *)((int)pvVar8 + 0x150);
    fVar3 = *(float *)((int)pvVar8 + 0x154);
    fVar5 = *(float *)((int)pvVar8 + 0x158);
  }
  else {
    dVar36 = 0.03999999910593033;
    fVar2 = hero::g_heroCGPos;
    fVar3 = DAT_00969db4;
    fVar5 = DAT_00969db8;
  }
  fVar2 = fVar2 - (moby->pos).x;
  dVar35 = (double)fVar2;
  fVar3 = fVar3 - (moby->pos).y;
  dVar33 = (double)fVar3;
  *(float *)((int)puVar9 + 0x7c) = fVar2;
  *(float *)(puVar9 + 0x10) = fVar3;
  dVar32 = (double)(fVar5 - ((moby->pos).z + 1.0));
  *(float *)((int)puVar9 + 0x84) = (float)(ABS(dVar35) - ABS(dVar33));
  dVar34 = 0.0;
  uVar17 = (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1d) & 4;
  dVar29 = ABS((double)*(float *)((int)puVar9 + 0x7c));
  if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
    dVar29 = ABS(dVar33);
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
  dVar31 = ABS((double)*(float *)(puVar9 + 0x10));
  if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
    dVar31 = ABS(dVar35);
  }
  fVar3 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
  dVar30 = dVar34;
  if (0.0 < dVar29) {
    lVar18 = uVar16 - 0x150;
    lVar25 = uVar16 - 0x9c;
    lVar22 = uVar16 - 0xac;
    lVar28 = 2;
    fVar5 = (float)(dVar31 - dVar29) / (float)(dVar31 + dVar29);
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
      *(float *)((int)lVar18 + 0xb4) = *(float *)((int)lVar18 + 0xa4) * fVar5 * fVar5;
      iVar20 = (int)lVar22;
      lVar22 = lVar22 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar5 * fVar5;
      lVar25 = lVar25 + 8;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    lVar28 = 4;
    lVar25 = uVar16 - 0xac;
    pfVar23 = (float *)&DAT_007358e0;
    lVar18 = lVar19;
    lVar22 = lVar25;
    do {
      fVar5 = *pfVar23;
      fVar6 = pfVar23[1];
      pfVar23 = pfVar23 + 2;
      *(float *)((int)lVar18 + 0xb4) = *(float *)((int)lVar18 + 0xb4) * fVar5;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
      lVar22 = lVar22 + 8;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    lVar22 = 2;
    lVar18 = lVar19;
    dVar29 = dVar34;
    do {
      iVar20 = (int)lVar18;
      iVar13 = (int)lVar25;
      lVar18 = lVar18 + 0x10;
      lVar25 = lVar25 + 0x10;
      dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar20 + 0xb4)) + *(float *)(iVar13 + 4)
                        + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    dVar30 = (double)((float)(dVar29 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar31 = (double)fastfunc::FastDiffRots(dVar30,(double)(moby->rotation).z);
  *(float *)((int)puVar9 + 0x74) = (float)dVar32;
  fVar2 = SQRT((float)(dVar35 * dVar35 + (double)(float)(dVar33 * dVar33)));
  dVar33 = ABS((double)fVar2);
  *(float *)(puVar9 + 0xe) = fVar2;
  *(float *)(puVar9 + 0xf) = (float)(dVar33 - ABS(dVar32));
  uVar17 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
  dVar29 = ABS((double)*(float *)(puVar9 + 0xe));
  if ((double)*(float *)(puVar9 + 0xf) - dVar34 < 0.0) {
    dVar29 = ABS(dVar32);
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
  dVar32 = ABS((double)*(float *)((int)puVar9 + 0x74));
  if ((double)*(float *)(puVar9 + 0xf) - dVar34 < 0.0) {
    dVar32 = dVar33;
  }
  fVar3 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
  if (dVar34 < dVar29) {
    lVar18 = uVar16 - 0x150;
    lVar22 = uVar16 - 0xcc;
    lVar25 = uVar16 - 0xbc;
    lVar28 = 2;
    fVar5 = (float)(dVar32 - dVar29) / (float)(dVar32 + dVar29);
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
      *(float *)((int)lVar18 + 0x94) = *(float *)((int)lVar18 + 0x84) * fVar5 * fVar5;
      iVar20 = (int)lVar22;
      lVar18 = lVar18 + 8;
      lVar22 = lVar22 + 8;
      *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar5 * fVar5;
      lVar25 = lVar25 + 8;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    lVar28 = 4;
    lVar25 = uVar16 - 0xcc;
    pfVar23 = (float *)&DAT_007358e0;
    lVar18 = lVar19;
    lVar22 = lVar25;
    do {
      fVar5 = *pfVar23;
      fVar6 = pfVar23[1];
      pfVar23 = pfVar23 + 2;
      *(float *)((int)lVar18 + 0x94) = *(float *)((int)lVar18 + 0x94) * fVar5;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
      lVar22 = lVar22 + 8;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    lVar18 = 2;
    do {
      iVar20 = (int)lVar19;
      iVar13 = (int)lVar25;
      lVar19 = lVar19 + 0x10;
      lVar25 = lVar25 + 0x10;
      dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar20 + 0x94)) + *(float *)(iVar13 + 4)
                        + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar34 = -dVar34;
  dVar29 = 1.5707963705062866;
  if ((dVar31 <= 1.5707963705062866) && (dVar29 = dVar31, dVar31 < -1.5707963705062866)) {
    dVar29 = -1.5707963705062866;
  }
  dVar32 = 0.5235987901687622;
  if ((dVar34 <= 0.5235987901687622) && (dVar32 = dVar34, dVar34 < -0.5235987901687622)) {
    dVar32 = -0.5235987901687622;
  }
  *(float *)((int)pvVar8 + 0xb4) = (float)dVar32;
  *(float *)((int)pvVar8 + 0xb8) = (float)(dVar29 * 0.5);
  *(float *)((int)pvVar8 + 0x138) = (float)(dVar29 * 0.5);
LAB_00336eec:
  if (Cheats[0] != '\0') {
    *(undefined4 *)((int)pvVar8 + 0xc0) = 0x40300000;
  }
  dVar29 = 0.30000001192092896;
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar36),
             (double)(float)((double)DAT_0071f40c * 0.30000001192092896),moby,uVar27 + 0x50,0);
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar36),
             (double)(float)((double)DAT_0071f40c * dVar29),moby,uVar27 + 0xd0,1);
  return;
}



//==== 00336f90  ns=mobyupdate_helpers  size=0x14
// sig: undefined M298_00336f90(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M298_00336f90(void)

{
  DAT_00810a1c = 0x10000;
  return;
}



//==== 00336fa8  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_3(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 3 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_3(MobyInstance *moby)

{
  return moby;
}



//==== 00336fb8  ns=mobyupdate_helpers  size=0x198
// sig: undefined M30_00336fb8(void)
// callers(1): 003371a0 mobyupdate_unsorted::UpdateMoby_30
// callees(5): 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby

void mobyupdate_helpers::M30_00336fb8(MobyInstance *param_1)

{
  MOBY_OCLASSES MVar1;
  MobyModeBit MVar2;
  void *pvVar3;
  float fVar4;
  int iVar5;
  ulonglong uVar6;
  double dVar7;
  int local_20;
  float local_1c;
  
  pvVar3 = param_1->pVar;
  uVar6 = ZEXT48(pvVar3);
  dVar7 = 0.0;
  local_1c = 0.0;
  iVar5 = mobyutil::MB_damage(param_1,0x330000,0);
  if (((iVar5 != 0) && (*(int *)(iVar5 + 0x20) != 0)) &&
     ((MVar1 = *(MOBY_OCLASSES *)(*(int *)(iVar5 + 0x20) + 0xa6), MVar1 == param_1->oClass ||
      (MVar1 == 0x2a9)))) {
    iVar5 = 0;
  }
  iVar5 = mobyutil::MB_HandleDamage(param_1,iVar5,uVar6 + 0x20,0,&local_20,&local_1c,0,4);
  if ((local_20 == 1) || (param_1->state == '\x06')) goto LAB_0033711c;
  MVar2 = param_1->modeBits;
  fVar4 = *(float *)((int)pvVar3 + 0x20) - local_1c;
  *(float *)((int)pvVar3 + 0x20) = fVar4;
  if ((double)fVar4 <= dVar7) {
LAB_003370d8:
    param_1->state = '\x06';
    param_1->modeBits =
         MVar2 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
    *(undefined1 *)((int)pvVar3 + 0x67) = 0xf0;
    mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
  }
  else if (iVar5 < 3) {
    if ((-1 < iVar5) && (0 < iVar5)) goto LAB_003370d8;
  }
  else if (iVar5 < 0xb) {
    if (iVar5 < 9) {
      *(undefined1 *)((int)pvVar3 + 0x67) = 200;
    }
    else {
      *(undefined1 *)((int)pvVar3 + 0x67) = 100;
    }
  }
  mobyutil::MB_UpdateLightsTransition(param_1,uVar6 + 0x60);
LAB_0033711c:
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar6 + 0x60);
  return;
}



//==== 003371a0  ns=mobyupdate_unsorted  size=0xfb0
// sig: undefined UpdateMoby_30(MobyInstance * moby)
// callers(0): 
// callees(14): 000efb38 mobyfunc::DeleteMoby; 000f1ec8 mobyfunc::SetColorOfMoby; 000fc620 mobyutil::MB_randInt; 000fdcf0 mobyutil::MB_SetAnimationNoBlend; 0010e030 mobyutil::MB_genericExplosion; 00110b70 mobyutil::MB_IsPntInCuboid; 001118d8 mobyutil::MB_getTarget; 00336fb8 mobyupdate_helpers::M30_00336fb8; 00410528 FUN_00410528; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble; 005cd098 libc::printf
// strings: 006561bc: 'Turret with no aiming cuboid. UID: %d\n' | 006561e4: 'Turret with no waking cuboid. UID: %d\n' | 00810a40: '?333' (raw)

/* Moby 30 */

void mobyupdate_unsorted::UpdateMoby_30(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  short sVar12;
  void *pvVar13;
  undefined2 uVar14;
  undefined4 uVar15;
  ulonglong *puVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar22;
  longlong lVar20;
  longlong lVar21;
  MobyInstance *pMVar23;
  longlong lVar24;
  float *pfVar25;
  ulonglong uVar26;
  longlong lVar27;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar28;
  ulonglong unaff_r31;
  ulonglong in_LR;
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
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  
  lVar19 = (longlong)(int)moby;
  uVar18 = ZEXT48(&stack0x00000000);
  lVar21 = uVar18 - 0x1f0;
  puVar16 = (ulonglong *)lVar21;
  *puVar16 = uVar18;
  puVar16[0x40] = in_LR;
  puVar16[0x3b] = in_f29;
  puVar16[0x3c] = in_f30;
  puVar16[0x3d] = in_f31;
  puVar16[0x3a] = unaff_r31;
  puVar16[0x39] = unaff_r30;
  puVar16[0x38] = unaff_r29;
  pvVar13 = moby->pVar;
  uVar28 = ZEXT48(pvVar13);
  mobyupdate_helpers::M30_00336fb8();
  uVar1 = moby->state;
  if (uVar1 == '\x06') {
    puVar16[0x12] = 0;
    puVar16[0x14] = 1;
    puVar16[0x15] = 1;
    puVar16[0x16] = 0xffffffffffffffff;
    puVar16[0x17] = 0;
    mobyutil::MB_genericExplosion
              (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
               0x402e000000000000,lVar19,uVar28 + 0x40,lVar19 + 0x10,0,1,5,2,4);
    mobyfunc::DeleteMoby(moby);
    return;
  }
  if (uVar1 == '\x05') {
    auVar41 = ZEXT416(0xffffffff);
    auVar43 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    auVar40 = loadVectorLeftIndexed(0x74,uVar28);
    auVar42 = loadVectorRightIndexed(0x84,uVar28);
    auVar44 = loadVectorLeftIndexed(0x78,uVar28);
    auVar41 = ZEXT416(0xfffffff0);
    auVar41 = vectorShiftRightAlgebraicWord
                        (auVar40 | auVar42,
                         auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60);
    auVar42 = loadVectorRightIndexed(0x88,uVar28);
    auVar40 = vectorConvertFromSignedFixedPointWord(auVar41,0);
    auVar43 = vectorShiftLeftIntegerWord(auVar43,auVar43);
    auVar41 = ZEXT416(0xffffffff);
    auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    auVar46 = loadVectorLeftIndexed(0xa40,0x810000);
    auVar45 = vectorShiftLeftIntegerWord(auVar41,auVar41);
    auVar40 = vectorMultiplyAddFloatingPoint(auVar40,auVar44 | auVar42,auVar43);
    auVar41 = loadVectorLeftIndexed(0x3c,0x337150);
    auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar42 = vectorMultiplyAddFloatingPoint(auVar46,auVar40,auVar45);
    auVar44 = loadVectorLeftIndexed(0x70,uVar28);
    auVar43 = loadVectorRightIndexed(0x80,uVar28);
    bVar2 = moby->field43_0x70;
    auVar41 = vectorAddFloatingPoint
                        (auVar46,(auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60) ^
                                 auVar42);
    auVar41 = vectorSubtractFloatingPoint(auVar44 | auVar43,auVar41);
    auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar15 = storeVectorElementWordIndexed
                       (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,0x18,lVar19);
    *(undefined4 *)((uint)&(moby->pos).z & 0xfffffffc) = uVar15;
    auVar41 = loadVectorLeftIndexed(0x84,uVar28);
    auVar42 = loadVectorRightIndexed(0x94,uVar28);
    auVar43 = loadVectorLeftIndexed(0x8c,uVar28);
    auVar44 = loadVectorRightIndexed(0x9c,uVar28);
    auVar44 = vectorSubtractFloatingPoint(auVar43 | auVar44,auVar41 | auVar42);
    auVar41 = vectorMultiplyAddFloatingPoint(auVar44,auVar40,auVar41 | auVar42);
    auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar15 = storeVectorElementWordIndexed
                       (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,0x48,lVar19);
    *(undefined4 *)((uint)&(moby->rotation).z & 0xfffffffc) = uVar15;
    if (((bVar2 & 2) != 0) && (moby->updateId == '\x04')) {
      mobyutil::MB_SetAnimationNoBlend(lVar19,0,0);
      moby->unk58 = 1.0;
    }
    puVar16[0x36] = (longlong)(DAT_00810a44 >> 1);
    sVar12 = *(short *)((int)pvVar13 + 0x74);
    puVar16[0x36] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar16[0x36] + 0.5));
    if ((int)sVar12 < *(int *)((int)puVar16 + 0x1b4)) {
      moby->collision = (ushort *)0x0;
    }
    iVar22 = fastfunc::FastDecTimerS16(uVar28 + 0x74);
    if (iVar22 == 0) {
      return;
    }
    fVar3 = *(f32 *)((int)pvVar13 + 0x84);
    auVar41 = ZEXT416(0xffffffff);
    auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    moby->state = '\x01';
    (moby->rotation).z = fVar3;
    auVar40 = vectorShiftLeftIntegerWord(auVar41,auVar41);
    auVar41 = loadVectorLeftIndexed(8,0x337150);
    auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar40 = vectorMultiplyAddFloatingPoint
                        (auVar44,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                         auVar40);
    auVar42 = loadVectorLeftIndexed(0x94,uVar28);
    auVar43 = loadVectorRightIndexed(0xa4,uVar28);
    auVar41 = ZEXT416(0xffffffff);
    auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    auVar42 = vectorConvertFromSignedFixedPointWord(auVar42 | auVar43,0);
    auVar43 = vectorShiftLeftIntegerWord(auVar41,auVar41);
    auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar40,0);
    auVar41 = vectorSplatHalfWord(auVar41,1);
    uVar14 = storeVectorElementHalfWordIndexed(auVar41,0x74,uVar28);
    *(undefined2 *)((int)pvVar13 + 0x74) = uVar14;
    *(undefined2 *)((int)pvVar13 + 0x88) = 0;
    auVar41 = loadVectorLeftIndexed(in_LR,0x337150);
    auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
    fVar4 = *(float *)((int)pvVar13 + 0x70);
    auVar41 = vectorAddFloatingPoint
                        (auVar42,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60);
    auVar41 = vectorMultiplyAddFloatingPoint(auVar44,auVar41,auVar43);
    auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
    auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar15 = storeVectorElementWordIndexed
                       (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,0x98,uVar28);
    *(undefined4 *)((int)pvVar13 + 0x98U & 0xfffffffc) = uVar15;
    fVar4 = fVar4 - DAT_00810a40;
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
          LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
          NO_UPDATE|DISABLED);
    (moby->pos).z = fVar4;
    return;
  }
  if (uVar1 != '\x04') {
    if (uVar1 == '\x03') {
      iVar22 = mobyutil::MB_getTarget(0x4041000000000000,lVar19,&DAT_00337150,uVar18 - 0x110);
      if ((iVar22 != 2) &&
         (iVar22 = mobyutil::MB_IsPntInCuboid
                             ((Vec4 *)(puVar16 + 0x1c),(longlong)*(int *)((int)pvVar13 + 0x90)),
         iVar22 != 0)) {
        moby->state = '\x04';
        mobyutil::MB_SetAnimationNoBlend(lVar19,3,0);
        auVar41 = ZEXT416(0xffffffff);
        auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar40 = vectorShiftLeftIntegerWord(auVar41,auVar41);
        auVar41 = loadVectorLeftIndexed(0x10,0x337150);
        auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar40 = vectorMultiplyAddFloatingPoint
                            (auVar44,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                             auVar40);
        auVar41 = ZEXT416(0xffffffff);
        auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar42 = vectorShiftLeftIntegerWord(auVar41,auVar41);
        auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar40,0);
        auVar41 = vectorSplatHalfWord(auVar41,1);
        uVar14 = storeVectorElementHalfWordIndexed(auVar41,0x74,uVar28);
        *(undefined2 *)((int)pvVar13 + 0x74) = uVar14;
        auVar41 = loadVectorLeftIndexed(0x14,0x337150);
        auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar41 = vectorMultiplyAddFloatingPoint
                            (auVar44,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                             auVar42);
        auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
        auVar41 = vectorSplatHalfWord(auVar41,1);
        uVar14 = storeVectorElementHalfWordIndexed(auVar41,0x9c,uVar28);
        *(undefined2 *)((int)pvVar13 + 0x9c) = uVar14;
        return;
      }
      if (*(char *)((int)pvVar13 + 0x8a) != '\0') {
        return;
      }
      iVar22 = fastfunc::FastDecTimerS16(uVar28 + 0x76);
      if (iVar22 == 0) {
        return;
      }
      *(undefined1 *)((int)pvVar13 + 0x8b) = 1;
      return;
    }
    if (uVar1 == '\x02') {
      auVar41 = ZEXT416(0xffffffff);
      auVar43 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar40 = loadVectorLeftIndexed(0x74,uVar28);
      auVar42 = loadVectorRightIndexed(0x84,uVar28);
      auVar44 = loadVectorLeftIndexed(0x78,uVar28);
      auVar41 = ZEXT416(0xfffffff0);
      auVar41 = vectorShiftRightAlgebraicWord
                          (auVar40 | auVar42,
                           auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60);
      auVar40 = loadVectorRightIndexed(0x88,uVar28);
      auVar41 = vectorConvertFromSignedFixedPointWord(auVar41,0);
      auVar42 = vectorShiftLeftIntegerWord(auVar43,auVar43);
      auVar43 = loadVectorLeftIndexed(0x70,uVar28);
      auVar45 = loadVectorRightIndexed(0x80,uVar28);
      auVar41 = vectorMultiplyAddFloatingPoint(auVar41,auVar44 | auVar40,auVar42);
      auVar40 = loadVectorLeftIndexed(0xa40,0x810000);
      bVar2 = moby->field43_0x70;
      auVar41 = vectorNegativeMultiplySubtractFloatingPoint(auVar40,auVar41,auVar43 | auVar45);
      auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar15 = storeVectorElementWordIndexed
                         (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,0x18,lVar19)
      ;
      *(undefined4 *)((uint)&(moby->pos).z & 0xfffffffc) = uVar15;
      if (((bVar2 & 2) != 0) && (moby->updateId == '\x01')) {
        mobyutil::MB_SetAnimationNoBlend(lVar19,2,0);
        moby->unk58 = 1.0;
      }
      puVar16[0x36] = (longlong)(DAT_00810a44 >> 1);
      sVar12 = *(short *)((int)pvVar13 + 0x74);
      puVar16[0x36] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar16[0x36] + 0.5));
      if ((int)sVar12 < *(int *)((int)puVar16 + 0x1b4)) {
        moby->collision = moby->pClass->collision;
        moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
      }
      iVar22 = fastfunc::FastDecTimerS16(uVar28 + 0x74);
      if (iVar22 == 0) {
        return;
      }
      auVar41 = ZEXT416(0xffffffff);
      auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar44 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar41 = loadVectorLeftIndexed(0xa6c,0x810000);
      auVar40 = vectorConvertFromSignedFixedPointWord(auVar41,0);
      auVar41 = loadVectorLeftIndexed(in_LR,0x337150);
      auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar40 = vectorAddFloatingPoint
                          (auVar40,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60);
      auVar41 = ZEXT416(0xffffffff);
      auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar42 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar41 = vectorMultiplyAddFloatingPoint(auVar43,auVar40,auVar44);
      auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
      auVar41 = vectorSplatHalfWord(auVar41,1);
      uVar14 = storeVectorElementHalfWordIndexed(auVar41,0x76,uVar28);
      *(undefined2 *)((int)pvVar13 + 0x76) = uVar14;
      moby->state = '\x03';
      auVar41 = loadVectorLeftIndexed(8,0x337150);
      auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar41 = vectorMultiplyAddFloatingPoint
                          (auVar40,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                           auVar42);
      auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
      auVar41 = vectorSplatHalfWord(auVar41,1);
      uVar14 = storeVectorElementHalfWordIndexed(auVar41,0x74,uVar28);
      *(undefined2 *)((int)pvVar13 + 0x74) = uVar14;
      (moby->pos).z = *(f32 *)((int)pvVar13 + 0x70);
      *(undefined4 *)((int)pvVar13 + 0x8c) = 0;
      return;
    }
    if (uVar1 != '\x01') {
      if (uVar1 != '\0') {
        return;
      }
      *(f32 *)((int)pvVar13 + 0x70) = (moby->pos).z;
      fVar3 = (moby->rotation).z;
      *(undefined4 *)((int)pvVar13 + 0x8c) = 0;
      *(f32 *)((int)pvVar13 + 0x84) = fVar3;
      *(undefined2 *)((int)pvVar13 + 0x74) = 0;
      if (*(int *)((int)pvVar13 + 0x80) == -1) {
        libc::printf("Turret with no aiming cuboid. UID: %d\n",moby->uid);
        mobyfunc::DeleteMoby(moby);
        return;
      }
      if (*(int *)((int)pvVar13 + 0x90) == -1) {
        libc::printf("Turret with no waking cuboid. UID: %d\n",moby->uid);
        mobyfunc::DeleteMoby(moby);
        return;
      }
      auVar41 = ZEXT416(0xffffffff);
      auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar42 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar41 = loadVectorLeftIndexed(0xa6c,0x810000);
      auVar40 = vectorConvertFromSignedFixedPointWord(auVar41,0);
      auVar41 = loadVectorLeftIndexed(in_LR,0x337150);
      auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar40 = vectorAddFloatingPoint(auVar40,auVar41);
      auVar40 = vectorMultiplyAddFloatingPoint(auVar44,auVar40,auVar42);
      auVar40 = vectorConvertToSignedFixedPointWordSaturate(auVar40,0);
      auVar40 = vectorSplatHalfWord(auVar40,1);
      uVar14 = storeVectorElementHalfWordIndexed(auVar40,0x76,uVar28);
      *(undefined2 *)((int)pvVar13 + 0x76) = uVar14;
      *(undefined1 *)((int)pvVar13 + 0x8b) = 0;
      if (*(short *)((int)pvVar13 + 0x88) == 0) {
        moby->state = '\x01';
        fVar11 = DAT_00810a40;
        fVar4 = (moby->pos).z;
        moby->collision = (ushort *)0x0;
        (moby->pos).z = fVar4 - fVar11;
        *(undefined1 *)((int)pvVar13 + 0x8a) = 0;
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
      }
      else {
        moby->state = '\x03';
        *(undefined1 *)((int)pvVar13 + 0x8a) = 1;
      }
      auVar42 = loadVectorLeftIndexed(0x94,uVar28);
      auVar44 = loadVectorRightIndexed(0xa4,uVar28);
      auVar40 = ZEXT416(0xffffffff);
      auVar43 = auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60;
      auVar40 = vectorConvertFromSignedFixedPointWord(auVar42 | auVar44,0);
      auVar42 = vectorShiftLeftIntegerWord(auVar43,auVar43);
      auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar41 = vectorAddFloatingPoint(auVar40,auVar41);
      auVar41 = vectorMultiplyAddFloatingPoint(auVar44,auVar41,auVar42);
      auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
      auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar15 = storeVectorElementWordIndexed
                         (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,0x98,uVar28)
      ;
      *(undefined4 *)((int)pvVar13 + 0x98U & 0xfffffffc) = uVar15;
      return;
    }
    if (*(short *)((int)pvVar13 + 0x88) == 0) {
      return;
    }
    iVar22 = fastfunc::FastDecTimerS32(uVar28 + 0x98);
    if (iVar22 == 0) {
      return;
    }
    moby->state = '\x02';
    auVar41 = ZEXT416(0xffffffff);
    auVar44 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    puVar16[0x36] = (longlong)DAT_00810a44;
    auVar41 = loadVectorLeftIndexed(0xa44,0x810000);
    auVar40 = vectorConvertFromSignedFixedPointWord(auVar41,0);
    auVar41 = loadVectorLeftIndexed(in_LR,0x337150);
    auVar42 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar41 = vectorAddFloatingPoint
                        (auVar40,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60);
    auVar40 = vectorShiftLeftIntegerWord(auVar44,auVar44);
    auVar41 = vectorMultiplyAddFloatingPoint(auVar42,auVar41,auVar40);
    auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
    auVar41 = vectorSplatHalfWord(auVar41,1);
    puVar16[0x36] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar16[0x36] + 0.5));
    uVar15 = *(undefined4 *)((int)puVar16 + 0x1b4);
    uVar14 = storeVectorElementHalfWordIndexed(auVar41,0x74,uVar28);
    *(undefined2 *)((int)pvVar13 + 0x74) = uVar14;
    dVar30 = (double)fastfunc::FastIntToDouble((short)uVar15);
    dVar32 = 1.0;
    *(float *)((int)pvVar13 + 0x78) = (float)(1.0 / dVar30);
    mobyutil::MB_SetAnimationNoBlend(lVar19,1,0);
    dVar30 = (double)fastfunc::FastIntToDouble(*(undefined2 *)((int)pvVar13 + 0x74));
    moby->unk58 = (float)(dVar32 / (double)(float)(dVar30 * (double)DAT_00810a48));
    return;
  }
  fVar4 = DAT_00810a4c;
  if (*(short *)((int)pvVar13 + 0x9e) != 0) {
    fVar4 = -DAT_00810a4c;
  }
  dVar30 = (double)fastfunc::FastWrapRot(*(float *)((int)pvVar13 + 0x8c),fVar4);
  *(float *)((int)pvVar13 + 0x8c) = (float)dVar30;
  dVar32 = (double)fastfunc::FastWrapRot
                             ((float)dVar30,*(float *)((int)pvVar13 + 0x84) * 0.017453292);
  dVar30 = (double)(float)(3.141592502593994 - dVar32);
  if (dVar32 - (double)(float)(3.141592502593994 - dVar32) < 0.0) {
    dVar30 = dVar32;
  }
  dVar37 = (double)(float)(-3.141592502593994 - dVar32);
  if ((double)(float)(-3.141592502593994 - dVar32) - dVar30 < 0.0) {
    dVar37 = dVar30;
  }
  iVar22 = *(int *)((int)pvVar13 + 0x80);
  dVar30 = (double)(float)(dVar37 * dVar37);
  dVar32 = (double)(float)(dVar30 * (double)(float)(dVar30 * dVar37));
  dVar39 = (double)(float)(dVar30 * dVar32);
  fVar4 = (float)(dVar30 * dVar39) * 2.601887e-06 +
          (float)(dVar39 * -0.0001980741071747616 +
                 (double)(float)(dVar32 * 0.008333025500178337 +
                                (double)(float)((double)(float)(dVar30 * dVar37) *
                                                -0.16666656732559204 + dVar37)));
  fVar11 = (Cuboids[iVar22].matrix.v1.x * fVar4 + Cuboids[iVar22].pos.x) - (moby->pos).x;
  fVar4 = (Cuboids[iVar22].matrix.v1.y * fVar4 + Cuboids[iVar22].pos.y) - (moby->pos).y;
  fVar5 = ABS(fVar11);
  fVar6 = ABS(fVar4);
  *(float *)(puVar16 + 0x30) = fVar11;
  *(float *)((int)puVar16 + 0x184) = fVar4;
  *(float *)(puVar16 + 0x31) = fVar5 - fVar6;
  dVar30 = 0.0;
  uVar26 = (ulonglong)(*(uint *)(puVar16 + 0x30) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar16 + 0x31) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar16 + 0x184) >> 0x1d) & 4;
  fVar4 = ABS(*(float *)(puVar16 + 0x30));
  if (*(float *)(puVar16 + 0x31) - 0.0 < 0.0) {
    fVar4 = fVar6;
  }
  fVar11 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
  fVar6 = ABS(*(float *)((int)puVar16 + 0x184));
  if (*(float *)(puVar16 + 0x31) - 0.0 < 0.0) {
    fVar6 = fVar5;
  }
  fVar5 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
  dVar32 = dVar30;
  if (0.0 < fVar4) {
    lVar20 = uVar18 - 0x1e0;
    lVar27 = uVar18 - 0x54;
    lVar24 = uVar18 - 100;
    lVar29 = 2;
    fVar4 = (fVar6 - fVar4) / (fVar6 + fVar4);
    fVar6 = fVar4 * fVar4;
    *(float *)(puVar16 + 0x33) = fVar4;
    *(float *)(puVar16 + 0x32) = fVar4;
    *(float *)((int)puVar16 + 0x194) = fVar4;
    *(float *)((int)puVar16 + 0x18c) = fVar4;
    fVar4 = fVar6 * fVar6;
    *(float *)(puVar16 + 0x32) = *(float *)(puVar16 + 0x32) * fVar6;
    *(float *)((int)puVar16 + 0x194) = *(float *)((int)puVar16 + 0x194) * fVar4;
    *(float *)(puVar16 + 0x33) = *(float *)(puVar16 + 0x33) * fVar4 * fVar6;
    do {
      *(float *)((int)lVar20 + 0x18c) = *(float *)((int)lVar20 + 0x17c) * fVar4 * fVar4;
      iVar22 = (int)lVar24;
      lVar24 = lVar24 + 8;
      lVar20 = lVar20 + 8;
      *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar4 * fVar4;
      lVar27 = lVar27 + 8;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
    lVar29 = 4;
    lVar27 = uVar18 - 100;
    pfVar25 = (float *)&DAT_007358e0;
    lVar20 = lVar21;
    lVar24 = lVar27;
    do {
      fVar4 = *pfVar25;
      fVar6 = pfVar25[1];
      pfVar25 = pfVar25 + 2;
      *(float *)((int)lVar20 + 0x18c) = *(float *)((int)lVar20 + 0x18c) * fVar4;
      lVar20 = lVar20 + 8;
      *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
      lVar24 = lVar24 + 8;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
    lVar20 = 2;
    do {
      iVar22 = (int)lVar21;
      iVar17 = (int)lVar27;
      lVar21 = lVar21 + 0x10;
      lVar27 = lVar27 + 0x10;
      dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar22 + 0x18c)) +
                        *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc));
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar11 + fVar5);
  }
  (moby->rotation).z = (float)dVar32;
  fastfunc::FastDecTimerS16(uVar28 + 0x9c);
  if (worldUpdateTime != (worldUpdateTime / DAT_00810a68) * DAT_00810a68) goto LAB_00337d9c;
  iVar22 = mobyutil::MB_randInt(3);
  if (iVar22 < 1) {
    if (iVar22 < 0) {
LAB_00337b80:
      fVar4 = (moby->transform).v2.y;
      fVar11 = (moby->transform).v2.x;
      fVar6 = (moby->transform).v2.z;
      dVar32 = (double)SQRT(fVar6 * fVar6 + fVar11 * fVar11 + fVar4 * fVar4);
      if (dVar32 == dVar30) {
        fVar7 = (moby->transform).v2.w;
        dVar32 = dVar30;
        dVar37 = dVar30;
        dVar39 = dVar30;
      }
      else {
        fVar5 = (float)((double)DAT_00810a5c / dVar32);
        fVar7 = (moby->transform).v2.w;
        dVar32 = (double)(fVar11 * fVar5);
        dVar37 = (double)(fVar4 * fVar5);
        dVar39 = (double)(fVar6 * fVar5);
      }
      fVar11 = (moby->transform).v1.y;
      fVar6 = (moby->transform).v1.x;
      fVar5 = (moby->transform).v1.z;
      dVar38 = (double)DAT_00810a64;
      *(float *)((int)puVar16 + 0xc4) = (float)dVar37;
      *(float *)(puVar16 + 0x19) = (float)dVar39;
      *(float *)((int)puVar16 + 0xcc) = fVar7;
      *(float *)(puVar16 + 0x18) = (float)dVar32;
      dVar31 = (double)SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar11 * fVar11);
      fVar4 = (float)(-dVar38 / dVar31);
      dVar38 = dVar30;
      if (dVar30 - dVar31 < 0.0) {
        dVar38 = (double)(fVar5 * fVar4);
      }
      dVar34 = dVar30;
      if (dVar30 - dVar31 < 0.0) {
        dVar34 = (double)(fVar11 * fVar4);
      }
      dVar36 = dVar30;
      if (dVar30 - dVar31 < 0.0) {
        dVar36 = (double)(fVar6 * fVar4);
      }
      if (dVar31 - dVar30 < 0.0) {
        dVar38 = (double)(fVar5 * fVar4);
      }
      if (dVar31 - dVar30 < 0.0) {
        dVar34 = (double)(fVar11 * fVar4);
      }
      if (dVar31 - dVar30 < 0.0) {
        dVar36 = (double)(fVar6 * fVar4);
      }
      dVar31 = (double)(float)(dVar39 + dVar38);
      dVar33 = (double)(float)(dVar37 + dVar34);
      dVar35 = (double)(float)(dVar32 + dVar36);
      *(float *)(puVar16 + 0x19) = (float)(dVar39 + dVar38);
      *(float *)((int)puVar16 + 0xc4) = (float)(dVar37 + dVar34);
      *(float *)(puVar16 + 0x18) = (float)(dVar32 + dVar36);
    }
    else {
      fVar4 = (moby->transform).v2.y;
      fVar11 = (moby->transform).v2.x;
      fVar6 = (moby->transform).v2.z;
      dVar32 = (double)SQRT(fVar6 * fVar6 + fVar11 * fVar11 + fVar4 * fVar4);
      if (dVar32 == dVar30) {
        fVar7 = (moby->transform).v2.w;
        dVar31 = dVar30;
        dVar33 = dVar30;
        dVar35 = dVar30;
      }
      else {
        fVar5 = (float)((double)DAT_00810a58 / dVar32);
        fVar7 = (moby->transform).v2.w;
        dVar35 = (double)(fVar11 * fVar5);
        dVar33 = (double)(fVar4 * fVar5);
        dVar31 = (double)(fVar6 * fVar5);
      }
      *(float *)(puVar16 + 0x18) = (float)dVar35;
      *(float *)((int)puVar16 + 0xc4) = (float)dVar33;
      *(float *)((int)puVar16 + 0xcc) = fVar7;
      *(float *)(puVar16 + 0x19) = (float)dVar31;
    }
  }
  else {
    if (1 < iVar22) goto LAB_00337b80;
    fVar4 = (moby->transform).v2.y;
    fVar11 = (moby->transform).v2.x;
    fVar6 = (moby->transform).v2.z;
    dVar32 = (double)SQRT(fVar6 * fVar6 + fVar11 * fVar11 + fVar4 * fVar4);
    if (dVar32 == dVar30) {
      fVar7 = (moby->transform).v2.w;
      dVar32 = dVar30;
      dVar37 = dVar30;
      dVar39 = dVar30;
    }
    else {
      fVar5 = (float)((double)DAT_00810a5c / dVar32);
      fVar7 = (moby->transform).v2.w;
      dVar32 = (double)(fVar11 * fVar5);
      dVar37 = (double)(fVar4 * fVar5);
      dVar39 = (double)(fVar6 * fVar5);
    }
    fVar11 = (moby->transform).v1.y;
    fVar6 = (moby->transform).v1.x;
    fVar5 = (moby->transform).v1.z;
    dVar38 = (double)DAT_00810a64;
    *(float *)((int)puVar16 + 0xc4) = (float)dVar37;
    *(float *)(puVar16 + 0x19) = (float)dVar39;
    *(float *)((int)puVar16 + 0xcc) = fVar7;
    *(float *)(puVar16 + 0x18) = (float)dVar32;
    dVar31 = (double)SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar11 * fVar11);
    fVar4 = (float)(dVar38 / dVar31);
    dVar38 = dVar30;
    if (dVar30 - dVar31 < 0.0) {
      dVar38 = (double)(fVar5 * fVar4);
    }
    dVar34 = dVar30;
    if (dVar30 - dVar31 < 0.0) {
      dVar34 = (double)(fVar11 * fVar4);
    }
    dVar36 = dVar30;
    if (dVar30 - dVar31 < 0.0) {
      dVar36 = (double)(fVar6 * fVar4);
    }
    if (dVar31 - dVar30 < 0.0) {
      dVar38 = (double)(fVar5 * fVar4);
    }
    if (dVar31 - dVar30 < 0.0) {
      dVar34 = (double)(fVar11 * fVar4);
    }
    if (dVar31 - dVar30 < 0.0) {
      dVar36 = (double)(fVar6 * fVar4);
    }
    dVar31 = (double)(float)(dVar39 + dVar38);
    dVar33 = (double)(float)(dVar37 + dVar34);
    dVar35 = (double)(float)(dVar32 + dVar36);
    *(float *)(puVar16 + 0x19) = (float)(dVar39 + dVar38);
    *(float *)((int)puVar16 + 0xc4) = (float)(dVar37 + dVar34);
    *(float *)(puVar16 + 0x18) = (float)(dVar32 + dVar36);
  }
  fVar4 = (moby->transform).v0.y;
  fVar11 = (moby->transform).v0.x;
  fVar6 = (moby->transform).v0.z;
  dVar32 = (double)SQRT(fVar6 * fVar6 + fVar11 * fVar11 + fVar4 * fVar4);
  if (dVar32 == dVar30) {
    fVar7 = (moby->transform).v0.w;
    dVar37 = dVar30;
    dVar39 = dVar30;
    dVar38 = dVar30;
  }
  else {
    fVar5 = (float)((double)DAT_00810a60 / dVar32);
    fVar7 = (moby->transform).v0.w;
    dVar38 = (double)(fVar11 * fVar5);
    dVar39 = (double)(fVar4 * fVar5);
    dVar37 = (double)(fVar6 * fVar5);
  }
  fVar5 = mobyutil::g_FrameTime * DAT_00810a54;
  fVar8 = (moby->pos).x;
  fVar9 = (moby->pos).y;
  fVar10 = (moby->pos).z;
  *(float *)(puVar16 + 0x1a) = (float)dVar38;
  *(float *)((int)puVar16 + 0xd4) = (float)dVar39;
  *(float *)(puVar16 + 0x1b) = (float)dVar37;
  *(float *)((int)puVar16 + 0xdc) = fVar7;
  *(float *)((int)puVar16 + 0xdc) = fVar7;
  fVar5 = (float)((double)fVar5 / dVar32);
  *(float *)(puVar16 + 0x18) = (float)(dVar35 + dVar38) + fVar8;
  *(float *)((int)puVar16 + 0xc4) = (float)(dVar33 + dVar39) + fVar9;
  *(float *)(puVar16 + 0x19) = (float)(dVar31 + dVar37) + fVar10;
  dVar37 = dVar30;
  if (dVar30 - dVar32 < 0.0) {
    dVar37 = (double)(fVar11 * fVar5);
  }
  dVar39 = dVar30;
  if (dVar30 - dVar32 < 0.0) {
    dVar39 = (double)(fVar4 * fVar5);
  }
  dVar38 = dVar30;
  if (dVar30 - dVar32 < 0.0) {
    dVar38 = (double)(fVar6 * fVar5);
  }
  if (dVar32 - dVar30 < 0.0) {
    dVar37 = (double)(fVar11 * fVar5);
  }
  if (dVar32 - dVar30 < 0.0) {
    dVar39 = (double)(fVar4 * fVar5);
  }
  if (dVar32 - dVar30 < 0.0) {
    dVar38 = (double)(fVar6 * fVar5);
  }
  *(float *)(puVar16 + 0x1a) = (float)dVar37;
  *(float *)((int)puVar16 + 0xd4) = (float)dVar39;
  *(float *)(puVar16 + 0x1b) = (float)dVar38;
  if ((*(short *)((int)pvVar13 + 0x9c) == 0) &&
     (pMVar23 = (MobyInstance *)FUN_00410528(uVar18 - 0x130,uVar18 - 0x120,lVar19,1),
     pMVar23 != (MobyInstance *)0x0)) {
    mobyfunc::SetColorOfMoby(pMVar23,0xe0,0xe0,0xe0);
  }
LAB_00337d9c:
  iVar22 = mobyutil::MB_getTarget(0x4041000000000000,lVar19,&DAT_00337150,uVar18 - 0xc0);
  if ((((iVar22 == 2) ||
       (iVar22 = mobyutil::MB_IsPntInCuboid
                           ((Vec4 *)(puVar16 + 0x26),(longlong)*(int *)((int)pvVar13 + 0x90)),
       iVar22 == 0)) && (iVar22 = fastfunc::FastDecTimerS16(uVar28 + 0x74), iVar22 != 0)) &&
     (((moby->field43_0x70 & 2U) != 0 && (moby->updateId == '\x03')))) {
    auVar41 = ZEXT416(0xffffffff);
    auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    auVar42 = vectorShiftLeftIntegerWord(auVar41,auVar41);
    auVar41 = loadVectorLeftIndexed(0xa6c,0x810000);
    auVar40 = vectorConvertFromSignedFixedPointWord(auVar41,0);
    auVar41 = loadVectorLeftIndexed(in_LR,0x337150);
    auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar41 = vectorAddFloatingPoint
                        (auVar40,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60);
    auVar41 = vectorMultiplyAddFloatingPoint(auVar44,auVar41,auVar42);
    auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
    auVar41 = vectorSplatHalfWord(auVar41,1);
    uVar14 = storeVectorElementHalfWordIndexed(auVar41,0x76,uVar28);
    *(undefined2 *)((int)pvVar13 + 0x76) = uVar14;
    moby->state = '\x03';
    mobyutil::MB_SetAnimationNoBlend(lVar19,2,0);
    moby->unk58 = 1.0;
  }
  return;
}



//==== 00338150  ns=Global  size=0x64
// sig: undefined FUN_00338150(void)
// callers(1): 00462258 mobyupdate_unsorted::UpdateMoby_8
// callees(0): 

void FUN_00338150(longlong param_1)

{
  ushort uVar1;
  MobyInstance *pMVar2;
  ushort *puVar3;
  
  pMVar2 = MobyInstance;
  puVar3 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  if (puVar3 != (ushort *)0x0) {
    do {
      if (pMVar2[*puVar3 & 0x7fff].state == '\x01') {
        *(undefined2 *)((int)pMVar2[*puVar3 & 0x7fff].pVar + 0x88) = 1;
      }
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}



//==== 003381c0  ns=Global  size=0x278
// sig: undefined FUN_003381c0(void)
// callers(1): 00462258 mobyupdate_unsorted::UpdateMoby_8
// callees(2): 000fdcf0 mobyutil::MB_SetAnimationNoBlend; 00502730 fastfunc::FastIntToDouble

undefined8 FUN_003381c0(longlong param_1)

{
  f32 fVar1;
  ushort uVar2;
  void *pvVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  MobyInstance *pMVar9;
  ulonglong uVar10;
  MobyInstance *pMVar11;
  ushort *puVar12;
  ushort *puVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar24 [16];
  
  puVar7 = (undefined4 *)(ZEXT48(&stack0x00000000) - 0x40);
  puVar7[3] = in_vr31_32_3;
  puVar7[2] = in_vr31_32_2;
  puVar7[1] = in_vr31_32_1;
  *puVar7 = in_vr31_32_0;
  puVar13 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  puVar12 = puVar13;
  if (puVar13 == (ushort *)0x0) {
    uVar8 = 0;
  }
  else {
    do {
      if ((*(char *)((int)MobyInstance[*puVar12 & 0x7fff].pVar + 0x8b) == '\0') &&
         (MobyInstance[*puVar12 & 0x7fff].state != '\x01' &&
          MobyInstance[*puVar12 & 0x7fff].state != '\x05')) {
        return 0;
      }
      uVar2 = *puVar12;
      puVar12 = puVar12 + 1;
    } while (-1 < (short)uVar2);
    auVar22 = loadVectorLeftIndexed(ZEXT48(&stack0x00000000) - 0x40,0x3381b4);
    dVar15 = 0.5;
    dVar16 = 1.0;
    auVar24 = loadVectorLeftIndexed(8,0x3381b4);
    auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar23 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    auVar22 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    pMVar9 = MobyInstance;
    do {
      pMVar11 = pMVar9 + (*puVar13 & 0x7fff);
      if (pMVar11->state == '\x03') {
        pvVar3 = pMVar11->pVar;
        uVar10 = ZEXT48(pvVar3);
        mobyutil::MB_SetAnimationNoBlend(ZEXT48(pMVar11),4,0);
        auVar24 = ZEXT416(0xffffffff);
        auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
        pMVar11->state = '\x05';
        auVar17 = vectorShiftLeftIntegerWord(auVar24,auVar24);
        auVar24 = loadVectorLeftIndexed(0xa44,0x810000);
        auVar24 = vectorConvertFromSignedFixedPointWord(auVar24,0);
        auVar18 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar24 = vectorAddFloatingPoint(auVar24,auVar23);
        auVar24 = vectorMultiplyAddFloatingPoint(auVar18,auVar24,auVar17);
        auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
        fVar6 = animationSpeed * (float)((double)(longlong)DAT_00810a44 + dVar15);
        auVar24 = vectorSplatHalfWord(auVar24,1);
        uVar4 = storeVectorElementHalfWordIndexed(auVar24,0x74,uVar10);
        *(undefined2 *)((int)pvVar3 + 0x74) = uVar4;
        dVar14 = (double)fastfunc::FastIntToDouble((short)(int)fVar6);
        auVar24 = ZEXT416(0xfffffff0);
        auVar17 = ZEXT416(0xffffffff);
        auVar18 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
        auVar17 = ZEXT416(0xffffffff);
        auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
        auVar18 = vectorShiftLeftIntegerWord(auVar18,auVar18);
        auVar19 = vectorShiftLeftIntegerWord(auVar17,auVar17);
        auVar17 = loadVectorLeftIndexed(0x74,uVar10);
        auVar20 = loadVectorRightIndexed(0x84,uVar10);
        auVar17 = vectorShiftRightAlgebraicWord
                            (auVar17 | auVar20,
                             auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60);
        auVar24 = ZEXT416(0xffffffff);
        auVar20 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
        auVar17 = vectorConvertFromSignedFixedPointWord(auVar17,0);
        auVar24 = ZEXT416(0xffffffff);
        auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
        auVar20 = vectorShiftLeftIntegerWord(auVar20,auVar20);
        auVar21 = vectorShiftLeftIntegerWord(auVar24,auVar24);
        *(float *)((int)pvVar3 + 0x78) = (float)(dVar16 / dVar14);
        auVar24 = loadVectorLeftIndexed(0xa48,0x810000);
        auVar24 = vectorMultiplyAddFloatingPoint(auVar17,auVar24,auVar18);
        auVar17 = vectorReciprocalEstimateFloatingPoint(auVar24);
        auVar18 = vectorNegativeMultiplySubtractFloatingPoint(auVar17,auVar24,auVar22);
        auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar18,auVar19);
        auVar18 = vectorNegativeMultiplySubtractFloatingPoint(auVar17,auVar24,auVar22);
        auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar18,auVar20);
        auVar24 = vectorNegativeMultiplySubtractFloatingPoint(auVar17,auVar24,auVar22);
        auVar24 = vectorMultiplyAddFloatingPoint(auVar17,auVar24,auVar21);
        auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar5 = storeVectorElementWordIndexed
                          (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x58,
                           ZEXT48(pMVar11));
        *(undefined4 *)((uint)&pMVar11->unk58 & 0xfffffffc) = uVar5;
        fVar1 = (pMVar11->rotation).z;
        *(undefined1 *)((int)pvVar3 + 0x8b) = 0;
        *(f32 *)((int)pvVar3 + 0x8c) = fVar1;
        *(undefined2 *)((int)pvVar3 + 0x88) = 0;
        pMVar9 = MobyInstance;
      }
      uVar2 = *puVar13;
      puVar13 = puVar13 + 1;
    } while (-1 < (short)uVar2);
    uVar8 = 1;
  }
  return uVar8;
}



//==== 00338438  ns=Global  size=0xb8
// sig: undefined FUN_00338438(void)
// callers(1): 00462258 mobyupdate_unsorted::UpdateMoby_8
// callees(0): 

undefined8 FUN_00338438(longlong param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  ushort *puVar3;
  longlong lVar4;
  
  puVar3 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  if (puVar3 == (ushort *)0x0) {
    uVar2 = 1;
  }
  else {
    lVar4 = 0;
    do {
      lVar4 = lVar4 + ((longlong)((ulonglong)MobyInstance[*puVar3 & 0x7fff].state - 0x80) >> 0x3f &
                      1U);
      if ((MobyInstance[*puVar3 & 0x7fff].state < 0x80) &&
         (*(short *)((int)MobyInstance[*puVar3 & 0x7fff].pVar + 0x88) != 0)) {
        return 1;
      }
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
    } while (-1 < (short)uVar1);
    if ((int)lVar4 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



//==== 003384f0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M303_003384f0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M303_003384f0(void)

{
  DAT_00810abc = 0x10000;
  return;
}



//==== 00338568  ns=mobyupdate_helpers  size=0x940
// sig: undefined M303_00338568(void)
// callers(1): 00338f90 mobyupdate_helpers::M303_00338f90
// callees(6): 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe4f0 mobyutil::MB_randRangeSigned; 001246b8 partupd::SpawnPart_13; 0015d12c sound::PlayMobySound; 001bb4e0 mobyupdate_helpers::M1089_001bb4e0

void mobyupdate_helpers::M303_00338568(undefined8 param_1,int param_2)

{
  longlong lVar1;
  float fVar2;
  f32 fVar3;
  f32 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  char cVar9;
  ulonglong *puVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  MobyInstance *pMoby;
  longlong lVar17;
  ulonglong uVar18;
  float *pfVar19;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar20;
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
  ulonglong in_f15;
  double dVar28;
  ulonglong in_f16;
  double dVar29;
  ulonglong in_f17;
  double dVar30;
  double dVar31;
  ulonglong in_f18;
  double dVar32;
  double dVar33;
  ulonglong in_f19;
  double dVar34;
  ulonglong in_f20;
  ulonglong in_f21;
  double dVar35;
  ulonglong in_f22;
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
  undefined8 uVar41;
  double dVar42;
  ulonglong in_f29;
  undefined8 uVar43;
  double dVar44;
  ulonglong in_f30;
  undefined8 uVar45;
  double dVar46;
  ulonglong in_f31;
  undefined8 uVar47;
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar1 = uVar12 - 0x1b0;
  puVar10 = (ulonglong *)lVar1;
  *puVar10 = uVar12;
  puVar10[0x38] = in_LR;
  puVar10[0x25] = in_f15;
  puVar10[0x26] = in_f16;
  puVar10[0x27] = in_f17;
  puVar10[0x28] = in_f18;
  puVar10[0x29] = in_f19;
  puVar10[0x2a] = in_f20;
  puVar10[0x2b] = in_f21;
  puVar10[0x2c] = in_f22;
  puVar10[0x2d] = in_f23;
  puVar10[0x2e] = in_f24;
  puVar10[0x2f] = in_f25;
  puVar10[0x30] = in_f26;
  puVar10[0x31] = in_f27;
  puVar10[0x32] = in_f28;
  puVar10[0x33] = in_f29;
  puVar10[0x34] = in_f30;
  puVar10[0x35] = in_f31;
  puVar10[0x24] = unaff_r31;
  puVar10[0x21] = unaff_r28;
  puVar10[0x23] = unaff_r30;
  puVar10[0x22] = unaff_r29;
  puVar10[0x20] = unaff_r27;
  pMoby = (MobyInstance *)param_1;
  sound::PlayMobySound(0,0,pMoby);
  fVar3 = (pMoby->pos).y;
  *(f32 *)(puVar10 + 0xe) = (pMoby->pos).x;
  fVar4 = (pMoby->pos).w;
  *(f32 *)((int)puVar10 + 0x74) = fVar3;
  *(f32 *)((int)puVar10 + 0x7c) = fVar4;
  dVar28 = 0.30000001192092896;
  *(float *)(puVar10 + 0xf) = (pMoby->pos).z + 0.3;
  uVar47 = 0x3ff028f5c0000000;
  uVar45 = 0x3fa99999a0000000;
  uVar43 = 0x40e86a0000000000;
  partupd::SpawnPart_13
            (0x3fd3333340000000,0x3ff028f5c0000000,0x3ff1333340000000,0x3fa99999a0000000,
             0x40e86a0000000000,uVar12 - 0x140);
  iVar20 = 0;
  uVar41 = 0x3ff11eb860000000;
  do {
    partupd::SpawnPart_13(dVar28,uVar47,uVar41,uVar45,uVar43,uVar12 - 0x140);
    iVar20 = iVar20 + 1;
  } while (iVar20 < 5);
  iVar20 = 0;
  do {
    dVar48 = 0.0;
    uVar41 = 0x3fc99999a0000000;
    dVar30 = (double)(pMoby->pos).x;
    dVar32 = (double)(pMoby->pos).y;
    dVar34 = (double)(pMoby->pos).z;
    dVar29 = (double)(pMoby->pos).w;
    dVar22 = (double)mobyutil::MB_randRangeSigned(0,0x3fc99999a0000000);
    dVar31 = (double)(float)(dVar30 + dVar22);
    dVar22 = (double)mobyutil::MB_randRangeSigned(dVar48,uVar41);
    dVar33 = (double)(float)(dVar32 + dVar22);
    dVar22 = (double)mobyutil::MB_randRangeFloat(0.15,0.55);
    dVar34 = (double)(float)(dVar34 + dVar22);
    dVar30 = (double)mobyutil::MB_randRot();
    dVar36 = 2.0;
    dVar32 = (double)mobyutil::MB_randRangeFloat(2.0,4.5);
    dVar37 = 1.570796251296997;
    dVar44 = 3.141592502593994;
    fVar2 = (float)(dVar30 + 1.570796251296997);
    dVar46 = -3.141592502593994;
    dVar38 = -0.16666656732559204;
    dVar39 = 0.008333025500178337;
    dVar40 = -0.0001980741071747616;
    dVar22 = (double)(float)(3.141592502593994 - dVar30);
    if (dVar30 - (double)(float)(3.141592502593994 - dVar30) < 0.0) {
      dVar22 = dVar30;
    }
    fVar7 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar7 = fVar2;
    }
    dVar35 = (double)(float)(-3.141592502593994 - dVar30);
    if ((double)(float)(-3.141592502593994 - dVar30) - dVar22 < 0.0) {
      dVar35 = dVar22;
    }
    dVar22 = (double)mobyutil::g_FrameTime;
    dVar42 = 2.601886990305502e-06;
    dVar30 = (double)(float)(dVar32 * dVar22);
    fVar5 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar7 < 0.0) {
      fVar5 = fVar7;
    }
    dVar25 = (double)(float)(dVar35 * dVar35);
    fVar6 = fVar5 * fVar5;
    dVar27 = (double)(float)(dVar25 * (double)(float)(dVar25 * dVar35));
    fVar2 = fVar6 * fVar6 * fVar5;
    dVar32 = (double)(float)(dVar25 * dVar27);
    fVar7 = fVar6 * fVar2;
    dVar35 = (double)((float)(dVar25 * dVar32) * 2.601887e-06 +
                     (float)(dVar32 * -0.0001980741071747616 +
                            (double)(float)(dVar27 * 0.008333025500178337 +
                                           (double)(float)((double)(float)(dVar25 * dVar35) *
                                                           -0.16666656732559204 + dVar35))));
    dVar32 = (double)(fVar6 * fVar7 * 2.601887e-06 +
                     fVar7 * -0.0001980741 +
                     fVar2 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5);
    dVar22 = (double)mobyutil::MB_randRangeFloat
                               ((float)(dVar22 * 0.699999988079071),(float)(dVar22 * 1.5));
    if (param_2 == 0) {
      fVar2 = (pMoby->pos).x - g_heroPosition.x;
      fVar7 = (pMoby->pos).y - g_heroPosition.y;
      dVar27 = ABS((double)fVar2);
      dVar26 = ABS((double)fVar7);
      *(float *)(puVar10 + 0x10) = fVar2;
      *(float *)((int)puVar10 + 0x84) = fVar7;
      *(float *)(puVar10 + 0x11) = (float)(dVar27 - dVar26);
      uVar15 = (ulonglong)(*(uint *)(puVar10 + 0x10) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar10 + 0x11) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar10 + 0x84) >> 0x1d) & 4;
      dVar25 = ABS((double)*(float *)(puVar10 + 0x10));
      if ((double)*(float *)(puVar10 + 0x11) - dVar48 < 0.0) {
        dVar25 = dVar26;
      }
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
      dVar26 = ABS((double)*(float *)((int)puVar10 + 0x84));
      if ((double)*(float *)(puVar10 + 0x11) - dVar48 < 0.0) {
        dVar26 = dVar27;
      }
      fVar7 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      if (dVar48 < dVar25) {
        lVar13 = uVar12 - 0x1a0;
        lVar17 = uVar12 - 0x10c;
        lVar16 = uVar12 - 0x11c;
        lVar21 = 2;
        fVar5 = (float)(dVar26 - dVar25) / (float)(dVar26 + dVar25);
        fVar6 = fVar5 * fVar5;
        *(float *)(puVar10 + 0x14) = fVar5;
        *(float *)(puVar10 + 0x13) = fVar5;
        *(float *)((int)puVar10 + 0x9c) = fVar5;
        *(float *)((int)puVar10 + 0x94) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)(puVar10 + 0x13) = *(float *)(puVar10 + 0x13) * fVar6;
        *(float *)((int)puVar10 + 0x9c) = *(float *)((int)puVar10 + 0x9c) * fVar5;
        *(float *)(puVar10 + 0x14) = *(float *)(puVar10 + 0x14) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar13 + 0x94) = *(float *)((int)lVar13 + 0x84) * fVar5 * fVar5;
          iVar14 = (int)lVar16;
          lVar16 = lVar16 + 8;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)(iVar14 + 4) * fVar5 * fVar5;
          lVar17 = lVar17 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar17 = uVar12 - 0x11c;
        pfVar19 = (float *)&DAT_007358e0;
        lVar13 = lVar1;
        lVar16 = lVar17;
        do {
          fVar5 = *pfVar19;
          fVar6 = pfVar19[1];
          pfVar19 = pfVar19 + 2;
          *(float *)((int)lVar13 + 0x94) = *(float *)((int)lVar13 + 0x94) * fVar5;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar6;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar16 = 2;
        lVar13 = lVar1;
        do {
          iVar14 = (int)lVar13;
          iVar11 = (int)lVar17;
          lVar13 = lVar13 + 0x10;
          lVar17 = lVar17 + 0x10;
          dVar48 = (double)((float)(dVar48 + (double)*(float *)(iVar14 + 0x94)) +
                            *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                           *(float *)(iVar11 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar48 = (double)((float)(dVar48 + 0.7853981852531433) * fVar2 + fVar7);
      }
      dVar25 = (double)(float)(dVar48 + dVar37);
      dVar37 = (double)(float)(dVar44 - dVar25);
      if (dVar25 - (double)(float)(dVar44 - dVar25) < 0.0) {
        dVar37 = dVar25;
      }
      dVar27 = (double)(float)(dVar44 - dVar48);
      if (dVar48 - (double)(float)(dVar44 - dVar48) < 0.0) {
        dVar27 = dVar48;
      }
      dVar44 = (double)(float)(dVar46 - dVar25);
      if ((double)(float)(dVar46 - dVar25) - dVar37 < 0.0) {
        dVar44 = dVar37;
      }
      dVar37 = (double)(float)(dVar46 - dVar48);
      if ((double)(float)(dVar46 - dVar48) - dVar27 < 0.0) {
        dVar37 = dVar27;
      }
      dVar46 = (double)(float)(dVar44 * dVar44);
      dVar25 = (double)(float)(dVar46 * (double)(float)(dVar46 * dVar44));
      dVar48 = (double)(float)(dVar46 * dVar25);
      dVar25 = (double)(float)(dVar46 * dVar48) * dVar42 +
               (double)(float)(dVar48 * dVar40 +
                              (double)(float)(dVar25 * dVar39 +
                                             (double)(float)((double)(float)(dVar46 * dVar44) *
                                                             dVar38 + dVar44)));
    }
    else {
      uVar8 = *(uint *)(param_2 + 0x10);
      dVar27 = ABS((double)*(float *)(param_2 + 0x10));
      dVar26 = ABS((double)*(float *)(param_2 + 0x14));
      uVar15 = (ulonglong)(*(uint *)(param_2 + 0x14) >> 0x1d) & 4;
      *(float *)(puVar10 + 0x12) = (float)(dVar27 - dVar26);
      uVar18 = (ulonglong)(uVar8 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1e) & 2 | uVar15;
      dVar25 = dVar27;
      if ((double)*(float *)(puVar10 + 0x12) - dVar48 < 0.0) {
        dVar25 = dVar26;
      }
      fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      dVar24 = dVar26;
      if ((double)*(float *)(puVar10 + 0x12) - dVar48 < 0.0) {
        dVar24 = dVar27;
      }
      dVar23 = dVar48;
      if (dVar48 < dVar25) {
        lVar13 = uVar12 - 0x1a0;
        lVar16 = uVar12 - 0xdc;
        lVar17 = uVar12 - 0xcc;
        lVar21 = 2;
        fVar5 = (float)(dVar24 - dVar25) / (float)(dVar24 + dVar25);
        fVar6 = fVar5 * fVar5;
        *(float *)(puVar10 + 0x1c) = fVar5;
        *(float *)(puVar10 + 0x1b) = fVar5;
        *(float *)((int)puVar10 + 0xdc) = fVar5;
        *(float *)((int)puVar10 + 0xd4) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)(puVar10 + 0x1b) = *(float *)(puVar10 + 0x1b) * fVar6;
        *(float *)((int)puVar10 + 0xdc) = *(float *)((int)puVar10 + 0xdc) * fVar5;
        *(float *)(puVar10 + 0x1c) = *(float *)(puVar10 + 0x1c) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar13 + 0xd4) = *(float *)((int)lVar13 + 0xc4) * fVar5 * fVar5;
          iVar14 = (int)lVar16;
          lVar13 = lVar13 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)(iVar14 + 4) * fVar5 * fVar5;
          lVar17 = lVar17 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar17 = uVar12 - 0xdc;
        pfVar19 = (float *)&DAT_007358e0;
        lVar13 = lVar1;
        lVar16 = lVar17;
        do {
          fVar5 = *pfVar19;
          fVar6 = pfVar19[1];
          pfVar19 = pfVar19 + 2;
          *(float *)((int)lVar13 + 0xd4) = *(float *)((int)lVar13 + 0xd4) * fVar5;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar6;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar16 = 2;
        lVar13 = lVar1;
        dVar25 = dVar48;
        do {
          iVar14 = (int)lVar13;
          lVar13 = lVar13 + 0x10;
          iVar11 = (int)lVar17;
          lVar17 = lVar17 + 0x10;
          dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar14 + 0xd4)) +
                            *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                           *(float *)(iVar11 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar23 = (double)((float)(dVar25 + 0.7853981852531433) * fVar7 + fVar2);
      }
      dVar25 = (double)(float)(dVar23 + dVar37);
      *(float *)((int)puVar10 + 0x8c) = (float)(dVar27 - dVar26);
      uVar15 = (ulonglong)(uVar8 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar10 + 0x8c) >> 0x1e) & 2 | uVar15;
      dVar37 = (double)(float)(dVar44 - dVar25);
      if (dVar25 - (double)(float)(dVar44 - dVar25) < 0.0) {
        dVar37 = dVar25;
      }
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
      dVar24 = dVar26;
      if ((double)*(float *)((int)puVar10 + 0x8c) - dVar48 < 0.0) {
        dVar24 = dVar27;
      }
      dVar23 = (double)(float)(dVar46 - dVar25);
      if ((double)(float)(dVar46 - dVar25) - dVar37 < 0.0) {
        dVar23 = dVar37;
      }
      dVar37 = (double)(float)(dVar23 * dVar23);
      if ((double)*(float *)((int)puVar10 + 0x8c) - dVar48 < 0.0) {
        dVar27 = dVar26;
      }
      fVar7 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      dVar26 = (double)(float)(dVar37 * (double)(float)(dVar37 * dVar23));
      dVar25 = (double)(float)(dVar37 * dVar26);
      dVar25 = (double)(float)(dVar37 * dVar25) * dVar42 +
               (double)(float)(dVar25 * dVar40 +
                              (double)(float)(dVar26 * dVar39 +
                                             (double)(float)((double)(float)(dVar37 * dVar23) *
                                                             dVar38 + dVar23)));
      if (dVar48 < dVar27) {
        lVar13 = uVar12 - 0x1a0;
        lVar17 = uVar12 - 0xec;
        lVar16 = uVar12 - 0xfc;
        lVar21 = 2;
        fVar5 = (float)(dVar24 - dVar27) / (float)(dVar24 + dVar27);
        fVar6 = fVar5 * fVar5;
        *(float *)(puVar10 + 0x18) = fVar5;
        *(float *)(puVar10 + 0x17) = fVar5;
        *(float *)((int)puVar10 + 0xbc) = fVar5;
        *(float *)((int)puVar10 + 0xb4) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)(puVar10 + 0x17) = *(float *)(puVar10 + 0x17) * fVar6;
        *(float *)((int)puVar10 + 0xbc) = *(float *)((int)puVar10 + 0xbc) * fVar5;
        *(float *)(puVar10 + 0x18) = *(float *)(puVar10 + 0x18) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar13 + 0xb4) = *(float *)((int)lVar13 + 0xa4) * fVar5 * fVar5;
          iVar14 = (int)lVar16;
          lVar16 = lVar16 + 8;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)(iVar14 + 4) * fVar5 * fVar5;
          lVar17 = lVar17 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar17 = uVar12 - 0xfc;
        pfVar19 = (float *)&DAT_007358e0;
        lVar13 = lVar1;
        lVar16 = lVar17;
        do {
          fVar5 = *pfVar19;
          fVar6 = pfVar19[1];
          pfVar19 = pfVar19 + 2;
          *(float *)((int)lVar13 + 0xb4) = *(float *)((int)lVar13 + 0xb4) * fVar5;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar6;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar16 = 2;
        lVar13 = lVar1;
        do {
          iVar14 = (int)lVar13;
          iVar11 = (int)lVar17;
          lVar13 = lVar13 + 0x10;
          lVar17 = lVar17 + 0x10;
          dVar48 = (double)((float)(dVar48 + (double)*(float *)(iVar14 + 0xb4)) +
                            *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                           *(float *)(iVar11 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar48 = (double)((float)(dVar48 + 0.7853981852531433) * fVar2 + fVar7);
      }
      dVar27 = (double)(float)(dVar44 - dVar48);
      if (dVar48 - (double)(float)(dVar44 - dVar48) < 0.0) {
        dVar27 = dVar48;
      }
      dVar37 = (double)(float)(dVar46 - dVar48);
      if ((double)(float)(dVar46 - dVar48) - dVar27 < 0.0) {
        dVar37 = dVar27;
      }
    }
    dVar44 = (double)(float)(dVar37 * dVar37);
    dVar48 = (double)(float)(dVar32 * dVar30 + (double)(float)((double)(float)dVar25 * dVar22));
    dVar32 = (double)(float)(dVar44 * (double)(float)(dVar44 * dVar37));
    dVar46 = (double)(float)(dVar44 * dVar32);
    dVar32 = (double)(float)(dVar35 * dVar30 +
                            (double)(float)((double)(float)((double)(float)(dVar44 * dVar46) *
                                                            dVar42 + (double)(float)(dVar46 * dVar40
                                                                                    + (double)(float
                                                  )(dVar32 * dVar39 +
                                                   (double)(float)((double)(float)(dVar44 * dVar37)
                                                                   * dVar38 + dVar37)))) * dVar22));
    dVar22 = (double)mobyutil::MB_randRangeFloat((float)dVar36,7.0);
    *(float *)(puVar10 + 8) = (float)dVar31;
    *(float *)(puVar10 + 9) = (float)dVar34;
    *(float *)(puVar10 + 10) = (float)dVar48;
    dVar30 = (double)mobyutil::g_FrameTime;
    *(float *)((int)puVar10 + 0x44) = (float)dVar33;
    *(float *)((int)puVar10 + 0x4c) = (float)dVar29;
    *(float *)((int)puVar10 + 0x54) = (float)dVar32;
    *(float *)(puVar10 + 0xb) = (float)(dVar22 * dVar30);
    *(float *)((int)puVar10 + 0x5c) = (float)(dVar22 * dVar30);
    iVar14 = M1089_001bb4e0(param_1);
    if (iVar14 != 0) {
      *(float *)(iVar14 + 0x2c) = (float)((double)*(float *)(iVar14 + 0x2c) * dVar28);
    }
    iVar20 = iVar20 + 1;
  } while (iVar20 < 10);
  auVar49 = ZEXT416(0xffffffff);
  auVar50 = auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60;
  pMoby->state = '\x02';
  pMoby->collision = (ushort *)0x0;
  pMoby->modeBits = pMoby->modeBits | DISABLED;
  auVar49 = loadVectorLeftIndexed(0x5c,0x338508);
  auVar50 = vectorShiftLeftIntegerWord(auVar50,auVar50);
  auVar49 = auVar49 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar51 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar49 = vectorMultiplyAddFloatingPoint
                      (auVar51,auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60,auVar50
                      );
  auVar49 = vectorConvertToSignedFixedPointWordSaturate(auVar49,0);
  auVar49 = auVar49 >> 0x60 & (undefined1  [16])0xff;
  cVar9 = storeVectorElementByteIndexed
                    (auVar49 | auVar49 << 8 | auVar49 << 0x10 | auVar49 << 0x18 | auVar49 << 0x20 |
                     auVar49 << 0x28 | auVar49 << 0x30 | auVar49 << 0x38 | auVar49 << 0x40 |
                     auVar49 << 0x48 | auVar49 << 0x50 | auVar49 << 0x58 | auVar49 << 0x60 |
                     auVar49 << 0x68 | auVar49 << 0x70 | auVar49 << 0x78,0xbc,param_1);
  pMoby->setByGroup = cVar9;
  return;
}



//==== 00338ea8  ns=Global  size=0xb4
// sig: undefined FUN_00338ea8(void)
// callers(1): 00492d98 mobyupdate_unsorted::UpdateMoby_857
// callees(2): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance * FUN_00338ea8(int param_1)

{
  f32 fVar1;
  f32 fVar2;
  MobyModeBit MVar3;
  MobyInstance *pMVar4;
  undefined8 uVar5;
  
  pMVar4 = mobyfunc::CreateMoby(GADGEBOT_SPAWN_CONTAINER);
  if (pMVar4 != (MobyInstance *)0x0) {
    pMVar4->updateDistance = '`';
    pMVar4->drawDistance = 0x60;
    MVar3 = pMVar4->modeBits;
    pMVar4->enabled = '\x01';
    fVar1 = *(f32 *)(param_1 + 0x48);
    (pMVar4->rotation).x = 0.0;
    (pMVar4->rotation).y = 0.0;
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    (pMVar4->rotation).z = fVar1;
    pMVar4->color = (int)((ulonglong)uVar5 >> 0x20);
    pMVar4->light = (int)uVar5;
    fVar1 = *(f32 *)(param_1 + 0x10);
    pMVar4->modeBits = MVar3 | CAN_BE_AUTO_TARGETED;
    fVar2 = *(f32 *)(param_1 + 0x14);
    (pMVar4->pos).x = fVar1;
    fVar1 = *(f32 *)(param_1 + 0x18);
    (pMVar4->pos).y = fVar2;
    fVar2 = *(f32 *)(param_1 + 0x1c);
    (pMVar4->pos).z = fVar1;
    (pMVar4->pos).w = fVar2;
    mobyfunc::UpdateMobyTransform(pMVar4);
  }
  return pMVar4;
}



//==== 00338f90  ns=mobyupdate_helpers  size=0x1e0
// sig: undefined M303_00338f90(MobyInstance * moby)
// callers(0): 
// callees(6): 0006d7e0 draw::RegisterPostDraw; 000efb38 mobyfunc::DeleteMoby; 0010675c mobyutil::MB_damage; 00338568 mobyupdate_helpers::M303_00338568; 00500060 fastfunc::FastDecTimerS8; 005027bc fastfunc::FastLerpColor

/* Moby 302 */

void mobyupdate_helpers::M303_00338f90(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  
  lVar6 = (longlong)(int)moby;
  uVar7 = mobyutil::MB_damage(lVar6,0x10000,0);
  bVar1 = moby->state;
  moby->damage = -1;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    fVar2 = (float)(longlong)(worldUpdateTime % 0x96) * 0.006666667 * 2.0 * 3.1415927;
    if (3.1415927 - fVar2 < 0.0) {
      fVar2 = fVar2 - 6.2831855;
    }
    fVar3 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar3 = fVar2;
    }
    fVar4 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
      fVar4 = fVar3;
    }
    fVar2 = fVar4 * fVar4;
    fVar3 = fVar2 * fVar2 * fVar4;
    fVar5 = fVar2 * fVar3;
    uVar8 = fastfunc::FastLerpColor
                      ((double)((fVar2 * fVar5 * 2.601887e-06 +
                                 fVar5 * -0.0001980741 +
                                 fVar3 * 0.0083330255 + fVar2 * fVar4 * -0.16666657 + fVar4 + 1.0) *
                               0.5),0xffffffff80464646,0xffffffff80828282);
    moby->field60_0x90 = uVar8;
    if ((int)uVar7 != 0) {
      M303_00338568(lVar6,uVar7);
    }
    if (moby->enabled != '\0') {
      draw::RegisterPostDraw(&PTR_M303_00339188_0070c130,moby);
    }
  }
  else if ((bVar1 < 3) && (iVar9 = fastfunc::FastDecTimerS8(lVar6 + 0xbc), iVar9 != 0)) {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 00339188  ns=mobyupdate_helpers  size=0x770
// sig: undefined M303_00339188(void)
// callers(0): 
// callees(5): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M303_00339188(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  short sVar10;
  ulonglong *puVar11;
  bool bVar12;
  int iVar13;
  float fVar14;
  ulonglong uVar15;
  float *pfVar17;
  ulonglong uVar16;
  int iVar18;
  float *pfVar19;
  float *pfVar21;
  longlong lVar20;
  float *pfVar22;
  float *pfVar23;
  longlong lVar24;
  undefined4 *puVar25;
  short *psVar26;
  short *psVar27;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  int iVar28;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  int iVar29;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  ulonglong in_f14;
  double dVar38;
  ulonglong in_f15;
  double dVar39;
  ulonglong in_f16;
  double dVar40;
  ulonglong in_f17;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  double dVar41;
  ulonglong in_f21;
  double dVar42;
  ulonglong in_f22;
  double dVar43;
  ulonglong in_f23;
  double dVar44;
  ulonglong in_f24;
  double dVar45;
  ulonglong in_f25;
  double dVar46;
  ulonglong in_f26;
  double dVar47;
  ulonglong in_f27;
  double dVar48;
  ulonglong in_f28;
  double dVar49;
  ulonglong in_f29;
  double dVar50;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar15 = ZEXT48(&stack0x00000000);
  puVar11 = (ulonglong *)(uVar15 - 0x1f0);
  *puVar11 = uVar15;
  puVar11[0x40] = in_LR;
  puVar11[0x2c] = in_f14;
  puVar11[0x2d] = in_f15;
  puVar11[0x2e] = in_f16;
  puVar11[0x2f] = in_f17;
  puVar11[0x30] = in_f18;
  puVar11[0x31] = in_f19;
  puVar11[0x32] = in_f20;
  puVar11[0x33] = in_f21;
  puVar11[0x34] = in_f22;
  puVar11[0x35] = in_f23;
  puVar11[0x36] = in_f24;
  puVar11[0x37] = in_f25;
  puVar11[0x38] = in_f26;
  puVar11[0x39] = in_f27;
  puVar11[0x3a] = in_f28;
  puVar11[0x3b] = in_f29;
  puVar11[0x3c] = in_f30;
  puVar11[0x3d] = in_f31;
  puVar11[0x29] = unaff_r29;
  puVar11[0x28] = unaff_r28;
  dVar39 = (double)*(float *)(param_1 + 0x10);
  puVar11[0x2b] = unaff_r31;
  bVar12 = false;
  dVar30 = (double)GameCamera.posX;
  puVar11[0x27] = unaff_r27;
  dVar41 = (double)*(float *)(param_1 + 0xc0);
  dVar42 = (double)*(float *)(param_1 + 0xc4);
  dVar43 = (double)*(float *)(param_1 + 200);
  fVar5 = *(float *)(param_1 + 0xcc);
  dVar44 = (double)*(float *)(param_1 + 0xd0);
  dVar45 = (double)*(float *)(param_1 + 0xd4);
  dVar46 = (double)*(float *)(param_1 + 0xd8);
  fVar6 = *(float *)(param_1 + 0xdc);
  dVar47 = (double)*(float *)(param_1 + 0xe0);
  dVar48 = (double)*(float *)(param_1 + 0xe4);
  dVar49 = (double)*(float *)(param_1 + 0xe8);
  fVar7 = *(float *)(param_1 + 0xec);
  dVar40 = (double)*(float *)(param_1 + 0x14);
  dVar38 = (double)*(float *)(param_1 + 0x18);
  dVar50 = 1.0;
  puVar11[0x22] = (ulonglong)dVar30;
  dVar31 = (double)GameCamera.posY;
  puVar11[0x23] = (ulonglong)(double)GameCamera.posZ;
  puVar11[0x2a] = unaff_r30;
  puVar11[0x26] = unaff_r26;
  puVar11[0x25] = unaff_r25;
  if ((16.0 <= ABS((float)(dVar30 - dVar39))) ||
     (puVar11[0x21] = (ulonglong)dVar31, 16.0 <= ABS((float)(dVar31 - dVar40)))) {
    pfVar17 = (float *)&DAT_010bcc80;
    pfVar19 = (float *)&DAT_00810ae0;
    lVar20 = 0x39;
    do {
      dVar30 = (double)pfVar19[1];
      dVar31 = (double)*pfVar19;
      dVar32 = (double)pfVar19[3];
      dVar33 = (double)pfVar19[2];
      pfVar19 = pfVar19 + 4;
      pfVar17[3] = (float)(dVar30 * (double)fVar6 +
                          (double)(float)(dVar33 * (double)fVar7 +
                                         (double)(float)(dVar31 * (double)fVar5 + dVar32)));
      *pfVar17 = (float)(dVar32 * dVar39 +
                        (double)(float)(dVar33 * dVar47 +
                                       (double)(float)(dVar31 * dVar41 +
                                                      (double)(float)(dVar30 * dVar44))));
      pfVar17[1] = (float)(dVar32 * dVar40 +
                          (double)(float)(dVar33 * dVar48 +
                                         (double)(float)(dVar31 * dVar42 +
                                                        (double)(float)(dVar30 * dVar45))));
      pfVar17[2] = (float)(dVar32 * dVar38 +
                          (double)(float)(dVar33 * dVar49 +
                                         (double)(float)(dVar31 * dVar43 +
                                                        (double)(float)(dVar30 * dVar46))));
      pfVar17 = pfVar17 + 4;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
  }
  else {
    dVar30 = 0.0;
    pfVar17 = (float *)&DAT_010bcab0;
    bVar12 = true;
    iVar28 = 0;
    pfVar21 = (float *)&DAT_010bcc80;
    puVar11[0x20] = (ulonglong)(double)DAT_00811bc8;
    pfVar22 = (float *)&DAT_00810ae0;
    pfVar23 = (float *)&DAT_00811580;
    pfVar19 = (float *)&DAT_010bcab4;
    do {
      dVar31 = (double)pfVar22[1];
      dVar32 = (double)*pfVar22;
      dVar33 = (double)pfVar22[2];
      dVar35 = (double)pfVar22[3];
      fVar1 = (float)(dVar39 * dVar35 +
                     (double)(float)(dVar47 * dVar33 +
                                    (double)(float)(dVar41 * dVar32 +
                                                   (double)(float)(dVar44 * dVar31))));
      fVar2 = (float)(dVar40 * dVar35 +
                     (double)(float)(dVar48 * dVar33 +
                                    (double)(float)(dVar42 * dVar32 +
                                                   (double)(float)(dVar45 * dVar31))));
      fVar3 = (float)(dVar38 * dVar35 +
                     (double)(float)(dVar49 * dVar33 +
                                    (double)(float)(dVar43 * dVar32 +
                                                   (double)(float)(dVar46 * dVar31))));
      *pfVar21 = fVar1;
      dVar37 = (double)puVar11[0x22];
      fVar4 = (float)((double)fVar2 - (double)puVar11[0x21]);
      pfVar21[1] = fVar2;
      fVar1 = (float)((double)fVar1 - dVar37);
      fVar2 = (float)((double)fVar3 - (double)puVar11[0x23]);
      pfVar21[2] = fVar3;
      pfVar21[3] = (float)((double)fVar6 * dVar31 +
                          (double)(float)((double)fVar7 * dVar33 +
                                         (double)(float)((double)fVar5 * dVar32 + dVar35)));
      fVar3 = fVar2 * fVar2 + fVar1 * fVar1 + fVar4 * fVar4;
      dVar31 = dVar30;
      dVar32 = dVar30;
      dVar33 = dVar30;
      if (SQRT(fVar3) != 0.0) {
        fVar14 = 1.0 / SQRT(fVar3);
        fVar14 = -(fVar3 * fVar14 * fVar14 - 1.0) * fVar14 * 0.5 + fVar14;
        fVar14 = -(fVar3 * fVar14 * fVar14 - 1.0) * fVar14 * 0.5 + fVar14;
        fVar14 = -(fVar3 * fVar14 * fVar14 - 1.0) * fVar14 * 0.5 + fVar14;
        dVar33 = (double)(fVar1 * fVar14);
        dVar32 = (double)(fVar4 * fVar14);
        dVar31 = (double)(fVar2 * fVar14);
      }
      dVar35 = (double)pfVar23[1];
      dVar37 = (double)*pfVar23;
      dVar34 = (double)pfVar23[2];
      dVar36 = (double)pfVar23[3];
      fVar2 = (float)(dVar40 * dVar36 +
                     (double)(float)(dVar48 * dVar34 +
                                    (double)(float)(dVar42 * dVar37 +
                                                   (double)(float)(dVar45 * dVar35))));
      fVar3 = (float)(dVar39 * dVar36 +
                     (double)(float)(dVar47 * dVar34 +
                                    (double)(float)(dVar41 * dVar37 +
                                                   (double)(float)(dVar44 * dVar35))));
      fVar4 = (float)(dVar38 * dVar36 +
                     (double)(float)(dVar49 * dVar34 +
                                    (double)(float)(dVar43 * dVar37 +
                                                   (double)(float)(dVar46 * dVar35))));
      dVar37 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      fVar1 = (float)((double)puVar11[0x20] / dVar37);
      dVar35 = dVar30;
      if (0.0 - dVar37 < 0.0) {
        dVar35 = (double)(fVar2 * fVar1);
      }
      dVar34 = dVar30;
      if (0.0 - dVar37 < 0.0) {
        dVar34 = (double)(fVar3 * fVar1);
      }
      dVar36 = dVar30;
      if (0.0 - dVar37 < 0.0) {
        dVar36 = (double)(fVar4 * fVar1);
      }
      if (dVar37 - 0.0 < 0.0) {
        dVar35 = (double)(fVar2 * fVar1);
      }
      if (dVar37 - 0.0 < 0.0) {
        dVar34 = (double)(fVar3 * fVar1);
      }
      if (dVar37 - 0.0 < 0.0) {
        dVar36 = (double)(fVar4 * fVar1);
      }
      dVar37 = (double)((float)(dVar36 * dVar31 +
                               (double)(float)(dVar34 * dVar33 + (double)(float)(dVar35 * dVar32)))
                       * 2.0);
      fVar1 = -(float)(dVar35 * dVar37 - dVar32);
      fVar4 = -(float)(dVar34 * dVar37 - dVar33);
      fVar2 = -(float)(dVar36 * dVar37 - dVar31);
      fVar3 = fVar2 * fVar2 + fVar4 * fVar4 + fVar1 * fVar1;
      dVar31 = dVar30;
      dVar32 = dVar30;
      dVar33 = dVar30;
      if (SQRT(fVar3) != 0.0) {
        fVar14 = 1.0 / SQRT(fVar3);
        fVar14 = -(fVar3 * fVar14 * fVar14 - 1.0) * fVar14 * 0.5 + fVar14;
        fVar14 = -(fVar3 * fVar14 * fVar14 - 1.0) * fVar14 * 0.5 + fVar14;
        fVar14 = -(fVar3 * fVar14 * fVar14 - 1.0) * fVar14 * 0.5 + fVar14;
        dVar33 = (double)(fVar14 * fVar4);
        dVar32 = (double)(fVar14 * fVar1);
        dVar31 = (double)(fVar14 * fVar2);
      }
      iVar28 = iVar28 + 1;
      pfVar21 = pfVar21 + 4;
      pfVar22 = pfVar22 + 4;
      pfVar23 = pfVar23 + 4;
      dVar31 = (double)(SQRT((float)(dVar31 + 1.0) * 2.0) * 2.0);
      *pfVar17 = (float)(dVar33 / dVar31) + 0.5;
      pfVar17 = pfVar17 + 2;
      *pfVar19 = (float)(dVar32 / dVar31) + 0.5;
      pfVar19 = pfVar19 + 2;
    } while (iVar28 < 0x39);
  }
  uVar16 = draw::GetEffectTex(DAT_00811bc0);
  puVar11[0x1d] = uVar16;
  uVar16 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar11[0x1e] = uVar16;
  uVar16 = FUN_00502f08(0,0,0,0,0,0);
  puVar11[0x1c] = uVar16;
  uVar16 = idol_draw::PackCmd(DAT_010bd010,DAT_00811bb0,DAT_00811bb4,DAT_00811bb8,DAT_00811bbc);
  puVar11[0x1f] = uVar16;
  uVar8 = DAT_00811bc4;
  iVar29 = 0;
  iVar28 = 0;
  *(undefined4 *)((int)puVar11 + 0xbc) = DAT_00811bc4;
  *(undefined4 *)(puVar11 + 0x17) = uVar8;
  *(undefined4 *)((int)puVar11 + 0xb4) = uVar8;
  *(undefined4 *)(puVar11 + 0x16) = uVar8;
  do {
    dVar30 = (double)*(float *)((int)&DAT_00811914 + iVar28);
    dVar31 = (double)*(float *)((int)&DAT_00811910 + iVar28);
    dVar32 = (double)*(float *)((int)&DAT_00811918 + iVar28);
    dVar33 = (double)*(float *)((int)&DAT_0081191c + iVar28);
    fVar6 = (float)(dVar33 * dVar40 +
                   (double)(float)(dVar32 * dVar48 +
                                  (double)(float)(dVar31 * dVar42 + (double)(float)(dVar30 * dVar45)
                                                 ))) - GameCamera.posY;
    fVar7 = (float)(dVar33 * dVar39 +
                   (double)(float)(dVar32 * dVar47 +
                                  (double)(float)(dVar31 * dVar41 + (double)(float)(dVar30 * dVar44)
                                                 ))) - GameCamera.posX;
    fVar1 = (float)(dVar33 * dVar38 +
                   (double)(float)(dVar32 * dVar49 +
                                  (double)(float)(dVar31 * dVar43 + (double)(float)(dVar30 * dVar46)
                                                 ))) - GameCamera.posZ;
    fVar3 = 0.0;
    dVar30 = (double)(fVar1 * fVar1 + fVar7 * fVar7 + fVar6 * fVar6);
    fVar2 = fVar3;
    fVar5 = fVar3;
    if ((float)SQRT(dVar30) != 0.0) {
      dVar31 = 1.0 / SQRT(dVar30);
      dVar31 = (double)(float)(-(double)(float)((double)(float)(dVar30 * dVar31) * dVar31 - dVar50)
                               * (double)(float)(dVar31 * 0.5) + dVar31);
      dVar31 = (double)(float)(-(double)(float)((double)(float)(dVar30 * dVar31) * dVar31 - dVar50)
                               * (double)(float)(dVar31 * 0.5) + dVar31);
      fVar5 = (float)(-(double)(float)((double)(float)(dVar30 * dVar31) * dVar31 - dVar50) *
                      (double)(float)(dVar31 * 0.5) + dVar31);
      fVar3 = fVar7 * fVar5;
      fVar2 = fVar6 * fVar5;
      fVar5 = fVar1 * fVar5;
    }
    dVar30 = (double)*(float *)((int)&DAT_008112e4 + iVar28);
    dVar31 = (double)*(float *)((int)&DAT_008112e0 + iVar28);
    dVar32 = (double)*(float *)((int)&DAT_008112e8 + iVar28);
    if (fVar5 * (float)(dVar32 * dVar49 +
                       (double)(float)(dVar31 * dVar43 + (double)(float)(dVar30 * dVar46))) +
        fVar3 * (float)(dVar32 * dVar47 +
                       (double)(float)(dVar31 * dVar41 + (double)(float)(dVar30 * dVar44))) +
        fVar2 * (float)(dVar32 * dVar48 +
                       (double)(float)(dVar31 * dVar42 + (double)(float)(dVar30 * dVar45))) <= 0.0)
    {
      iVar18 = 0;
      lVar24 = uVar15 - 0x180;
      psVar26 = (short *)((int)&DAT_00810e70 + iVar28);
      psVar27 = (short *)(iVar28 + 0x810e72);
      lVar20 = uVar15 - 0x1f0;
      do {
        sVar10 = *psVar26;
        iVar13 = (int)((longlong)sVar10 << 4);
        puVar25 = (undefined4 *)lVar24;
        *puVar25 = *(undefined4 *)((int)&DAT_010bcc80 + iVar13);
        puVar25[1] = *(undefined4 *)((int)&DAT_010bcc84 + iVar13);
        puVar25[2] = *(undefined4 *)((int)&DAT_010bcc88 + iVar13);
        puVar25[3] = *(undefined4 *)((int)&DAT_010bcc8c + iVar13);
        if (bVar12) {
          iVar13 = (int)((longlong)sVar10 << 3);
          uVar9 = *(undefined4 *)((int)&DAT_010bcab0 + iVar13);
          uVar8 = *(undefined4 *)((int)&DAT_010bcab4 + iVar13);
        }
        else {
          iVar13 = (int)((longlong)*psVar27 << 3);
          uVar9 = *(undefined4 *)(&DAT_00811110 + iVar13);
          uVar8 = *(undefined4 *)(&DAT_00811114 + iVar13);
        }
        iVar18 = iVar18 + 1;
        *(undefined4 *)((int)lVar20 + 0xc0) = uVar9;
        *(undefined4 *)((int)lVar20 + 0xc4) = uVar8;
        lVar24 = lVar24 + 0x10;
        psVar26 = psVar26 + 2;
        psVar27 = psVar27 + 2;
        lVar20 = lVar20 + 8;
      } while (iVar18 < 4);
      draw::FastDrawQuad(uVar15 - 0x180,0,0,EffectTexHeaders,9);
    }
    iVar29 = iVar29 + 1;
    iVar28 = iVar28 + 0x10;
  } while (iVar29 < 0x2a);
  return;
}



//==== 003398f8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M303_003398f8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M303_003398f8(void)

{
  DAT_00811c18 = 0x10000;
  return;
}



//==== 00339910  ns=Global  size=0xac
// sig: undefined FUN_00339910(void)
// callers(1): 00492d98 mobyupdate_unsorted::UpdateMoby_857
// callees(2): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance * FUN_00339910(MobyInstance *param_1)

{
  f32 fVar1;
  f32 fVar2;
  uint uVar3;
  uint uVar4;
  MobyInstance *pMVar5;
  
  pMVar5 = mobyfunc::CreateMoby(GADGEBOT_SPAWN_PAD);
  if (pMVar5 != (MobyInstance *)0x0) {
    pMVar5->updateDistance = '\0';
    pMVar5->drawDistance = 0x60;
    pMVar5->enabled = '\x01';
    fVar1 = (param_1->rotation).z;
    (pMVar5->rotation).x = 0.0;
    (pMVar5->rotation).y = 0.0;
    uVar3 = param_1->color;
    uVar4 = param_1->light;
    (pMVar5->rotation).z = fVar1;
    fVar1 = (param_1->pos).x;
    pMVar5->color = uVar3;
    pMVar5->light = uVar4;
    pMVar5->field80_0xb8 = param_1;
    fVar2 = (param_1->pos).y;
    (pMVar5->pos).x = fVar1;
    fVar1 = (param_1->pos).z;
    (pMVar5->pos).y = fVar2;
    fVar2 = (param_1->pos).w;
    (pMVar5->pos).z = fVar1;
    (pMVar5->pos).w = fVar2;
    mobyfunc::UpdateMobyTransform(pMVar5);
  }
  return pMVar5;
}



//==== 003399f0  ns=mobyupdate_unsorted  size=0x168
// sig: undefined UpdateMoby_303(MobyInstance * moby)
// callers(0): 
// callees(1): 005027bc fastfunc::FastLerpColor

/* Moby 303 */

void mobyupdate_unsorted::UpdateMoby_303(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  
  if ((moby->field80_0xb8 == (MobyInstance *)0x0) || (1 < moby->field80_0xb8->state)) {
    uVar5 = fastfunc::FastLerpColor(0x3fb99999a0000000,moby->field60_0x90,0xffffffff80464646);
  }
  else {
    fVar1 = (float)(longlong)(worldUpdateTime % 0x96) * 0.006666667 * 2.0 * 3.1415927;
    if (3.1415927 - fVar1 < 0.0) {
      fVar1 = fVar1 - 6.2831855;
    }
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
    uVar5 = fastfunc::FastLerpColor
                      ((double)((fVar1 * fVar4 * 2.601887e-06 +
                                 fVar4 * -0.0001980741 +
                                 fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3 + 1.0) *
                               0.5),0xffffffff80464646,0xffffffff80828282);
  }
  moby->field60_0x90 = uVar5;
  return;
}



//==== 00339b58  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1463_00339b58(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1463_00339b58(void)

{
  DAT_00811c8c = 0x10000;
  return;
}



//==== 00339b70  ns=mobyupdate_unsorted  size=0x244
// sig: undefined UpdateMoby_a_lot_15(MobyInstance * moby)
// callers(0): 
// callees(5): 000e8aa4 memcard::memcard_Save; 000efb38 mobyfunc::DeleteMoby; 0016b650 vendor::StartGadgetPickupCutscene; 004d3720 FUN_004d3720; 004d3870 FUN_004d3870

/* Moby 304
   Moby 1456
   Moby 1457
   Moby 1458
   Moby 1459
   Moby 1460
   Moby 1461
   Moby 1462
   Moby 1463
   Moby 1464
   Moby 1465 */

void mobyupdate_unsorted::UpdateMoby_a_lot_15(MobyInstance *moby)

{
  u8 uVar1;
  void *pvVar2;
  int iVar3;
  
  pvVar2 = moby->pVar;
  uVar1 = moby->state;
  if ((((pvVar2 == (void *)0x0) || (*(uint *)((int)pvVar2 + 0x40) == 0xffffffff)) ||
      ((*(uint *)((int)pvVar2 + 0x40) & 1) != 0)) || (g_ChallengeMode != 0)) {
    if (uVar1 == '\x04') {
      if (g_gameMode == GAME_MODE_NORMAL) {
        memcard::memcard_Save(0,-1);
        moby->state = '\x03';
      }
    }
    else if (uVar1 == '\x02') {
      if ((&g_goldWeaponsArray.field0_0x0)
          [*(int *)(&DAT_00811cb0 + *(int *)((int)pvVar2 + 0x40) * 4)] != '\0') {
        mobyfunc::DeleteMoby(moby);
      }
    }
    else if (uVar1 == '\x01') {
      *(undefined4 *)((int)pvVar2 + 0xc) = 0x3ff33333;
      FUN_004d3870(moby,pvVar2);
      if (*(short *)((int)pvVar2 + 4) == 2) {
        (&g_goldWeaponsArray.field0_0x0)[*(int *)(&DAT_00811cb0 + *(int *)((int)pvVar2 + 0x40) * 4)]
             = '\x01';
        moby->state = '\x04';
        g_boltCount = g_boltCount -
                      (uint)*(ushort *)
                             (&DAT_00737d44 +
                             *(int *)(&DAT_00811cb0 + *(int *)((int)pvVar2 + 0x40) * 4) * 0x18);
        vendor::StartGadgetPickupCutscene
                  (moby,*(int *)(&DAT_00811cb0 + *(int *)((int)pvVar2 + 0x40) * 4));
      }
    }
    else if (uVar1 == '\0') {
      if (moby->oClass == GOLD_WEAPON_CASE) {
        if ((&g_goldWeaponsArray.field0_0x0)
            [*(int *)(&DAT_00811cb0 + *(int *)((int)pvVar2 + 0x40) * 4)] == '\0') {
          iVar3 = FUN_004d3720(moby,pvVar2);
          moby->state = ((byte)((LZCOUNT(-1 - iVar3) << 0x3a) >> 0x3f) & 2) + 1;
        }
        else {
          moby->state = '\x03';
        }
      }
      else {
        moby->state = '\x02';
      }
    }
  }
  else {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 00339db4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1463_00339db4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1463_00339db4(void)

{
  DAT_00811d24 = 0x10000;
  return;
}



//==== 00339e00  ns=mobyupdate_helpers  size=0x390
// sig: undefined M305_00339e00(void)
// callers(2): 0033a1d0 FUN_0033a1d0; 0033ac30 mobyupdate_unsorted::UpdateMoby_305
// callees(6): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 0011e6ec partproc::DeletePart; 00126f50 partupd::SpawnPart_23; 00128248 partupd::SpawnPart_27

void mobyupdate_helpers::M305_00339e00(int param_1,int param_2)

{
  undefined8 uVar1;
  undefined1 uVar4;
  int iVar2;
  int iVar3;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 local_b0 [48];
  
  iVar2 = 0;
  iVar5 = *(int *)(param_1 + 0x78);
  do {
    if (*(int *)(iVar5 + 0x2c) != 0) {
      partproc::DeletePart();
    }
    iVar2 = iVar2 + 1;
    *(undefined4 *)(iVar5 + 0x2c) = 0;
    iVar5 = iVar5 + 4;
  } while (iVar2 < 0x11);
  if (param_2 != 0) {
    iVar5 = 0;
    dVar6 = -1.0;
    dVar7 = 1.0;
    dVar8 = 3.0;
    dVar9 = 6.0;
    dVar10 = 10.5;
    dVar12 = 15.5;
    uVar14 = 0x40e1170000000000;
    do {
      mobyutil::MB_randRangeFloat((float)dVar6,(float)dVar7);
      mobyutil::MB_randRangeFloat((float)dVar6,(float)dVar7);
      mobyutil::MB_randRangeFloat((float)dVar6,(float)dVar7);
      mobyutil::MB_randRangeFloat
                ((float)((double)mobyutil::g_FrameTime * dVar8),
                 (float)((double)mobyutil::g_FrameTime * dVar9));
      uVar1 = mobyutil::MB_randRange
                        ((int)((double)animationSpeed * dVar10),
                         (int)((double)animationSpeed * dVar12));
      partupd::SpawnPart_27(uVar14,param_1 + 0x10,local_b0,0x7f2f4f6f,uVar1);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 5);
  }
  iVar5 = 0;
  uVar14 = 0x3ff0000000000000;
  dVar6 = 0.009999999776482582;
  dVar7 = 0.02500000037252903;
  uVar1 = 0x3fc99999a0000000;
  uVar11 = 0x3ff051eb80000000;
  uVar13 = 0x4101170000000000;
  dVar8 = 0.5;
  do {
    uVar4 = mobyutil::MB_randRange(0x20,0x80);
    mobyutil::MB_randInt(2);
    mobyutil::MB_randRangeFloat((float)dVar6,(float)dVar7);
    iVar2 = partupd::SpawnPart_23(uVar1,uVar14,uVar11,uVar13,param_1 + 0x10);
    if (iVar2 != 0) {
      iVar3 = mobyutil::MB_randRange(0x32,0x50);
      iVar3 = (int)(animationSpeed * (float)((double)(longlong)iVar3 + dVar8));
      *(undefined4 *)(iVar2 + 0x24) = 2;
      *(short *)(iVar2 + 10) = (short)iVar3;
      *(undefined1 *)(iVar2 + 0x2a) = uVar4;
      *(char *)(iVar2 + 0x2b) = (char)iVar3;
      iVar3 = mobyutil::MB_randInt(2);
      if (iVar3 != 0) {
        *(undefined1 *)(iVar2 + 3) = 0x44;
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 3);
  return;
}



//==== 0033a1d0  ns=Global  size=0xa04
// sig: undefined FUN_0033a1d0(void)
// callers(1): 002ab988 mobyupdate_unsorted::UpdateMoby_168
// callees(16): 00057820 collproc::CollLine; 000efa28 mobyfunc::CreateMoby; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 000fe484 mobyutil::MB_randRange; 000fe610 mobyutil::MB_SphericalToVector; 000fec94 mobyutil::MB_catmullRom; 00127ea8 partupd::SpawnPart_26; 00128248 partupd::SpawnPart_27; 001342c8 partupd::SpawnPart_72; 00339e00 mobyupdate_helpers::M305_00339e00; 00500608 fastfunc::FastVecNormalize; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

longlong FUN_0033a1d0(double param_1,double param_2,double param_3,double param_4,f32 param_5,
                     undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  f32 *pfVar6;
  f32 fVar7;
  undefined2 uVar8;
  ulonglong *puVar9;
  MobyInstance *moby;
  undefined8 uVar10;
  int iVar14;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar15;
  ulonglong uVar16;
  float *pfVar18;
  longlong lVar17;
  longlong lVar19;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  longlong lVar20;
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
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
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
  double dVar41;
  ulonglong in_f30;
  double dVar42;
  ulonglong in_f31;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  MobyInstance *in_stack_00000074;
  
  uVar21 = ZEXT48(&stack0x00000000);
  lVar13 = uVar21 - 0x1b0;
  puVar9 = (ulonglong *)lVar13;
  *puVar9 = uVar21;
  puVar9[0x38] = in_LR;
  puVar9[0x2a] = in_f20;
  puVar9[0x2b] = in_f21;
  puVar9[0x2c] = in_f22;
  puVar9[0x2d] = in_f23;
  puVar9[0x2e] = in_f24;
  puVar9[0x2f] = in_f25;
  puVar9[0x30] = in_f26;
  puVar9[0x31] = in_f27;
  puVar9[0x32] = in_f28;
  puVar9[0x33] = in_f29;
  puVar9[0x34] = in_f30;
  puVar9[0x35] = in_f31;
  puVar9[0x28] = unaff_r30;
  puVar9[0x27] = unaff_r29;
  puVar9[0x26] = unaff_r28;
  puVar9[0x25] = unaff_r27;
  puVar9[0x29] = unaff_r31;
  puVar9[0x24] = unaff_r26;
  puVar9[0x23] = unaff_r25;
  puVar9[0x22] = unaff_r24;
  puVar9[0x21] = unaff_r23;
  _fStack00000040 = param_7;
  _fStack00000048 = param_8;
  moby = mobyfunc::CreateMoby(0x131);
  lVar12 = (longlong)(int)moby;
  if (moby != (MobyInstance *)0x0) {
    pfVar6 = (f32 *)moby->pVar;
    pfVar6[8] = param_5;
    moby->updateDistance = '\x7f';
    moby->enabled = '\x01';
    fVar7 = DAT_00811d64;
    moby->drawDistance = 0x7f;
    uVar10 = *(undefined8 *)((int)param_5 + 0x38);
    (moby->rotation).x = fVar7;
    moby->color = (int)((ulonglong)uVar10 >> 0x20);
    moby->light = (int)uVar10;
    dVar23 = (double)fastfunc::FastWrapRot((float)param_4,DAT_00811d68);
    (moby->rotation).y = (float)dVar23;
    (moby->rotation).z = (float)param_3;
    (moby->pos).x = fStack00000040;
    (moby->pos).y = fStack00000044;
    (moby->pos).z = fStack00000048;
    (moby->pos).w = fStack0000004c;
    if (in_stack_00000074 == (MobyInstance *)0x0) {
      fVar1 = 0.0;
      pfVar6[3] = 0.0;
      pfVar6[1] = 0.0;
      *pfVar6 = 0.0;
    }
    else {
      *pfVar6 = (in_stack_00000074->pos).x;
      pfVar6[1] = (in_stack_00000074->pos).y;
      pfVar6[2] = (in_stack_00000074->pos).z;
      pfVar6[3] = (in_stack_00000074->pos).w;
      iVar14 = mobyutil::MB_GetPvarsIfMobyHasThem(in_stack_00000074);
      if (iVar14 == 0) {
        fVar1 = pfVar6[2];
        fVar2 = 0.5;
      }
      else {
        fVar1 = pfVar6[2];
        fVar2 = *(float *)(iVar14 + 0x10);
      }
      fVar1 = fVar1 + fVar2;
    }
    pfVar6[2] = fVar1;
    auVar46 = ZEXT416(0xffffffff);
    auVar44 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
    auVar46 = ZEXT416(0xfffffff8);
    auVar45 = vectorShiftLeftIntegerWord(auVar44,auVar44);
    dVar23 = 0.0;
    pfVar6[4] = 0.0;
    pfVar6[5] = 0.0;
    pfVar6[7] = (float)param_2;
    pfVar6[6] = (float)param_1;
    auVar44 = loadVectorLeftIndexed(8,0x33a190);
    auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar44 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar43 = vectorMultiplyAddFloatingPoint
                        (auVar43,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,
                         auVar45);
    auVar45 = loadVectorLeftIndexed(0xf,0x969ca8);
    auVar44 = ZEXT416(10);
    auVar46 = vectorShiftRightWord
                        (auVar45,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60);
    auVar45 = vectorMultiplyOddSignedHalfWord
                        (auVar46,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60);
    auVar46 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
    auVar43._0_4_ = auVar46._0_4_ + auVar45._0_4_;
    auVar43._8_8_ = auVar46._8_8_;
    auVar43._4_4_ = auVar46._4_4_ + auVar45._4_4_;
    auVar44._0_8_ = auVar43._0_8_;
    auVar44._12_4_ = auVar46._12_4_;
    auVar44._8_4_ = auVar46._8_4_ + auVar45._8_4_;
    auVar46._0_12_ = auVar44._0_12_;
    auVar46._12_4_ = auVar44._12_4_ + auVar45._12_4_;
    auVar46 = vectorSplatHalfWord(auVar46,1);
    uVar8 = storeVectorElementHalfWordIndexed(auVar46,0x24,ZEXT48(pfVar6));
    *(undefined2 *)(pfVar6 + 9) = uVar8;
    uVar8 = storeVectorElementHalfWordIndexed(auVar46,0x26,ZEXT48(pfVar6));
    *(undefined2 *)((int)pfVar6 + 0x26) = uVar8;
    pfVar6[10] = 0.0;
    *(undefined4 *)(puVar9 + 0xe) = *(undefined4 *)((int)param_5 + 0x10);
    *(undefined4 *)((int)puVar9 + 0x74) = *(undefined4 *)((int)param_5 + 0x14);
    uVar3 = *(undefined4 *)((int)param_5 + 0x1c);
    *(f32 *)(puVar9 + 0xf) = fStack00000048;
    *(undefined4 *)((int)puVar9 + 0x7c) = uVar3;
    iVar14 = collproc::CollLine(uVar21 - 0x140,uVar21 + 0x40 & 0xffffffff,0,param_5,0);
    if (iVar14 == 0) {
      partupd::SpawnPart_26
                ((double)DAT_00811d60,lVar12,&DAT_00810000,0x2f4f7f7f,*(undefined2 *)(pfVar6 + 9),
                 0xffffffffffffffff);
      uVar21 = 0;
      uVar11 = 0xbff8000000000000;
      uVar10 = 0x3ff0000000000000;
      dVar37 = -64.0;
      dVar36 = 128.0;
      do {
        iVar15 = partupd::SpawnPart_72(dVar23,lVar12 + 0x10,&DAT_00a15d30,1);
        iVar14 = 0;
        if (iVar15 != 0) {
          dVar38 = (double)mobyutil::MB_randRangeFloat(DAT_00811d48,DAT_00811d4c);
          *(float *)(iVar15 + 0xc) = (float)dVar38;
          dVar38 = (double)fastfunc::FastIntToDouble(uVar21);
          dVar39 = (double)fastfunc::FastIntToDouble(0x10);
          dVar38 = (double)mobyutil::MB_catmullRom
                                     (uVar11,dVar23,uVar10,dVar23,(double)(float)(dVar38 / dVar39));
          *(float *)(iVar15 + 0xc) =
               (float)((double)(float)((double)DAT_00811d50 - (double)*(float *)(iVar15 + 0xc)) *
                       dVar38 + (double)*(float *)(iVar15 + 0xc));
          uVar16 = fastfunc::FastDoubleToInt((double)(float)(dVar38 * dVar37 + dVar36));
          *(uint *)(iVar15 + 4) = (uint)((uVar16 & 0xffffffff) << 0x18) | 0xffffff;
          iVar14 = iVar15;
        }
        iVar15 = (int)uVar21 + 1;
        *(int *)((int)pfVar6 + (int)((uVar21 & 0xffffffff) << 2) + 0x2c) = iVar14;
        uVar21 = (ulonglong)iVar15;
      } while (iVar15 < 0x11);
    }
    else {
      lVar20 = uVar21 - 0x130;
      mobyutil::MB_SphericalToVector
                (mobyutil::g_FrameTime * 40.0,(moby->rotation).z,-(moby->rotation).y,(float *)lVar20
                );
      iVar14 = 0;
      (moby->pos).x = CollOutput.ip.x;
      (moby->pos).y = CollOutput.ip.y;
      (moby->pos).z = CollOutput.ip.z;
      (moby->pos).w = CollOutput.ip.w;
      dVar42 = -1.0;
      dVar41 = 1.0;
      dVar40 = 0.5;
      dVar39 = 3.0;
      dVar38 = 6.0;
      dVar37 = 10.5;
      dVar36 = 15.5;
      uVar10 = 0x40dd4c0000000000;
      do {
        dVar24 = (double)mobyutil::MB_randRangeFloat((float)dVar42,(float)dVar41);
        dVar25 = (double)mobyutil::MB_randRangeFloat((float)dVar42,(float)dVar41);
        dVar26 = (double)mobyutil::MB_randRangeFloat((float)dVar42,(float)dVar41);
        fastfunc::FastVecNormalize(uVar21 - 0x120,lVar20,0xa10980);
        dVar29 = (double)*(float *)((int)puVar9 + 0x94);
        dVar30 = (double)*(float *)(puVar9 + 0x12);
        dVar31 = (double)*(float *)(puVar9 + 0x13);
        dVar32 = (double)SQRT((float)(dVar26 * dVar26 +
                                     (double)(float)(dVar24 * dVar24 +
                                                    (double)(float)(dVar25 * dVar25))));
        dVar28 = (double)mobyutil::g_FrameTime;
        dVar34 = (double)(float)((double)(float)((double)SQRT((float)(dVar31 * dVar31 +
                                                                     (double)(float)(dVar30 * dVar30
                                                                                    + (double)(float
                                                  )(dVar29 * dVar29)))) * dVar40) / dVar32);
        dVar27 = dVar23;
        if (dVar23 - dVar32 < 0.0) {
          dVar27 = (double)(float)(dVar26 * dVar34);
        }
        dVar35 = dVar23;
        if (dVar23 - dVar32 < 0.0) {
          dVar35 = (double)(float)(dVar25 * dVar34);
        }
        dVar33 = dVar23;
        if (dVar23 - dVar32 < 0.0) {
          dVar33 = (double)(float)(dVar24 * dVar34);
        }
        if (dVar32 - dVar23 < 0.0) {
          dVar27 = (double)(float)(dVar26 * dVar34);
        }
        if (dVar32 - dVar23 < 0.0) {
          dVar35 = (double)(float)(dVar25 * dVar34);
        }
        if (dVar32 - dVar23 < 0.0) {
          dVar33 = (double)(float)(dVar24 * dVar34);
        }
        *(float *)(puVar9 + 0x13) = (float)(dVar31 + dVar27);
        *(float *)((int)puVar9 + 0x94) = (float)(dVar29 + dVar35);
        *(float *)(puVar9 + 0x12) = (float)(dVar30 + dVar33);
        dVar27 = (double)mobyutil::MB_randRangeFloat
                                   ((float)(dVar28 * dVar39),(float)(dVar28 * dVar38));
        fVar2 = *(float *)((int)puVar9 + 0x94);
        fVar4 = *(float *)(puVar9 + 0x12);
        fVar5 = *(float *)(puVar9 + 0x13);
        dVar25 = (double)animationSpeed;
        dVar24 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar2 * fVar2);
        puVar9[0x1e] = (longlong)(int)(dVar25 * dVar37);
        puVar9[0x1e] = (longlong)(int)(dVar25 * dVar36);
        fVar1 = (float)(dVar27 / dVar24);
        dVar27 = dVar23;
        if (dVar23 - dVar24 < 0.0) {
          dVar27 = (double)(fVar4 * fVar1);
        }
        dVar25 = dVar23;
        if (dVar23 - dVar24 < 0.0) {
          dVar25 = (double)(fVar2 * fVar1);
        }
        dVar26 = dVar23;
        if (dVar23 - dVar24 < 0.0) {
          dVar26 = (double)(fVar5 * fVar1);
        }
        if (dVar24 - dVar23 < 0.0) {
          dVar27 = (double)(fVar4 * fVar1);
        }
        if (dVar24 - dVar23 < 0.0) {
          dVar25 = (double)(fVar2 * fVar1);
        }
        if (dVar24 - dVar23 < 0.0) {
          dVar26 = (double)(fVar5 * fVar1);
        }
        *(float *)(puVar9 + 0x12) = (float)dVar27;
        *(float *)((int)puVar9 + 0x94) = (float)dVar25;
        *(float *)(puVar9 + 0x13) = (float)dVar26;
        uVar11 = mobyutil::MB_randRange
                           (*(undefined4 *)((int)puVar9 + 0xf4),*(undefined4 *)((int)puVar9 + 0xf4))
        ;
        partupd::SpawnPart_27(uVar10,lVar12 + 0x10,uVar21 - 0x120,0x7f2f4f6f,uVar11);
        iVar14 = iVar14 + 1;
      } while (iVar14 < 5);
      if (g_goldWeaponsArray.blaster == '\0') {
        mobyupdate_helpers::M305_00339e00(lVar12,0);
        mobyfunc::DeleteMoby(moby);
        lVar12 = 0;
      }
      else {
        fVar7 = pfVar6[10];
        pfVar6[10] = (f32)((int)fVar7 + 1);
        if ((int)(g_goldWeaponsArray.blaster + 5) < (int)fVar7 + 1) {
          mobyupdate_helpers::M305_00339e00(lVar12,1);
          mobyfunc::DeleteMoby(moby);
          lVar12 = 0;
        }
        else {
          fastfunc::FastVecNormalize(lVar20,lVar20,0xa10980);
          dVar38 = ABS((double)*(float *)(puVar9 + 0x10));
          dVar36 = ABS((double)*(float *)((int)puVar9 + 0x84));
          *(float *)(puVar9 + 0x15) = (float)(dVar38 - dVar36);
          uVar16 = (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar9 + 0x15) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1d) & 4;
          dVar37 = dVar38;
          if ((double)*(float *)(puVar9 + 0x15) - dVar23 < 0.0) {
            dVar37 = dVar36;
          }
          fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
          if ((double)*(float *)(puVar9 + 0x15) - dVar23 < 0.0) {
            dVar36 = dVar38;
          }
          fVar2 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
          dVar38 = dVar23;
          if (dVar23 < dVar37) {
            lVar20 = uVar21 - 0x1a0;
            lVar19 = uVar21 - 0xd4;
            lVar17 = uVar21 - 0xe4;
            lVar22 = 2;
            fVar4 = (float)(dVar36 - dVar37) / (float)(dVar36 + dVar37);
            fVar5 = fVar4 * fVar4;
            *(float *)(puVar9 + 0x1b) = fVar4;
            *(float *)(puVar9 + 0x1a) = fVar4;
            *(float *)((int)puVar9 + 0xd4) = fVar4;
            *(float *)((int)puVar9 + 0xcc) = fVar4;
            fVar4 = fVar5 * fVar5;
            *(float *)(puVar9 + 0x1a) = *(float *)(puVar9 + 0x1a) * fVar5;
            *(float *)((int)puVar9 + 0xd4) = *(float *)((int)puVar9 + 0xd4) * fVar4;
            *(float *)(puVar9 + 0x1b) = *(float *)(puVar9 + 0x1b) * fVar4 * fVar5;
            do {
              *(float *)((int)lVar20 + 0xcc) = *(float *)((int)lVar20 + 0xbc) * fVar4 * fVar4;
              iVar14 = (int)lVar17;
              lVar17 = lVar17 + 8;
              lVar20 = lVar20 + 8;
              *(float *)((int)lVar19 + 4) = *(float *)(iVar14 + 4) * fVar4 * fVar4;
              lVar19 = lVar19 + 8;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            lVar22 = 4;
            lVar19 = uVar21 - 0xe4;
            pfVar18 = (float *)&DAT_007358e0;
            lVar20 = lVar13;
            lVar17 = lVar19;
            do {
              fVar4 = *pfVar18;
              fVar5 = pfVar18[1];
              pfVar18 = pfVar18 + 2;
              *(float *)((int)lVar20 + 0xcc) = *(float *)((int)lVar20 + 0xcc) * fVar4;
              lVar20 = lVar20 + 8;
              *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar5;
              lVar17 = lVar17 + 8;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            lVar17 = 2;
            lVar20 = lVar13;
            dVar36 = dVar23;
            do {
              iVar14 = (int)lVar20;
              iVar15 = (int)lVar19;
              lVar20 = lVar20 + 0x10;
              lVar19 = lVar19 + 0x10;
              dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar14 + 0xcc)) +
                                *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                               *(float *)(iVar15 + 0xc));
              lVar17 = lVar17 + -1;
            } while (lVar17 != 0);
            dVar38 = (double)((float)(dVar36 + 0.7853981852531433) * fVar1 + fVar2);
          }
          (moby->rotation).z = (float)dVar38;
          dVar36 = ABS((double)*(float *)(puVar9 + 0x11));
          fVar1 = SQRT(*(float *)(puVar9 + 0x10) * *(float *)(puVar9 + 0x10) +
                       *(float *)((int)puVar9 + 0x84) * *(float *)((int)puVar9 + 0x84));
          dVar38 = ABS((double)fVar1);
          *(float *)(puVar9 + 0x14) = fVar1;
          *(float *)((int)puVar9 + 0xa4) = (float)(dVar38 - dVar36);
          uVar16 = (ulonglong)(*(uint *)(puVar9 + 0x14) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar9 + 0xa4) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1d) & 4;
          dVar37 = ABS((double)*(float *)(puVar9 + 0x14));
          if ((double)*(float *)((int)puVar9 + 0xa4) - dVar23 < 0.0) {
            dVar37 = dVar36;
          }
          fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
          if ((double)*(float *)((int)puVar9 + 0xa4) - dVar23 < 0.0) {
            dVar36 = dVar38;
          }
          fVar2 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
          if (dVar23 < dVar37) {
            lVar20 = uVar21 - 0x1a0;
            lVar19 = uVar21 - 0xf4;
            lVar17 = uVar21 - 0x104;
            lVar22 = 2;
            fVar4 = (float)(dVar36 - dVar37) / (float)(dVar36 + dVar37);
            fVar5 = fVar4 * fVar4;
            *(float *)(puVar9 + 0x17) = fVar4;
            *(float *)(puVar9 + 0x16) = fVar4;
            *(float *)((int)puVar9 + 0xb4) = fVar4;
            *(float *)((int)puVar9 + 0xac) = fVar4;
            fVar4 = fVar5 * fVar5;
            *(float *)(puVar9 + 0x16) = *(float *)(puVar9 + 0x16) * fVar5;
            *(float *)((int)puVar9 + 0xb4) = *(float *)((int)puVar9 + 0xb4) * fVar4;
            *(float *)(puVar9 + 0x17) = *(float *)(puVar9 + 0x17) * fVar4 * fVar5;
            do {
              *(float *)((int)lVar20 + 0xac) = *(float *)((int)lVar20 + 0x9c) * fVar4 * fVar4;
              iVar14 = (int)lVar17;
              lVar17 = lVar17 + 8;
              lVar20 = lVar20 + 8;
              *(float *)((int)lVar19 + 4) = *(float *)(iVar14 + 4) * fVar4 * fVar4;
              lVar19 = lVar19 + 8;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            lVar22 = 4;
            lVar19 = uVar21 - 0x104;
            pfVar18 = (float *)&DAT_007358e0;
            lVar20 = lVar13;
            lVar17 = lVar19;
            do {
              fVar4 = *pfVar18;
              fVar5 = pfVar18[1];
              pfVar18 = pfVar18 + 2;
              *(float *)((int)lVar20 + 0xac) = *(float *)((int)lVar20 + 0xac) * fVar4;
              lVar20 = lVar20 + 8;
              *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar5;
              lVar17 = lVar17 + 8;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            lVar20 = 2;
            do {
              iVar14 = (int)lVar13;
              iVar15 = (int)lVar19;
              lVar13 = lVar13 + 0x10;
              lVar19 = lVar19 + 0x10;
              dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar14 + 0xac)) +
                                *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                               *(float *)(iVar15 + 0xc));
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
            dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar1 + fVar2);
          }
          (moby->rotation).y = (float)-dVar23;
        }
      }
    }
  }
  return lVar12;
}



//==== 0033ac30  ns=mobyupdate_unsorted  size=0x1340
// sig: undefined UpdateMoby_305(MobyInstance * moby)
// callers(0): 
// callees(17): 00057820 collproc::CollLine; 00060780 collproc::CollHotspot; 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 000fe4f0 mobyutil::MB_randRangeSigned; 000fe610 mobyutil::MB_SphericalToVector; 000ff190 mobyutil::MB_DeltAngSpeed; 001113e0 mobyutil::MB_RotateQuatAxisAngle; 00128248 partupd::SpawnPart_27; 0015d12c sound::PlayMobySound; 00339e00 mobyupdate_helpers::M305_00339e00; 004fffb4 fastfunc::FastDecTimerS16; 00500608 fastfunc::FastVecNormalize; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble

/* Moby 305 */

void mobyupdate_unsorted::UpdateMoby_305(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  f32 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  short sVar12;
  MOBY_OCLASSES MVar13;
  float *pfVar14;
  uint uVar15;
  float fVar16;
  int iVar17;
  undefined2 uVar18;
  ulonglong *puVar19;
  float fVar20;
  MobyInstance *pMoby;
  ulonglong uVar21;
  longlong lVar22;
  int iVar26;
  undefined8 uVar23;
  longlong lVar24;
  undefined8 uVar25;
  float *pfVar29;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  longlong lVar30;
  ulonglong unaff_r26;
  longlong lVar31;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar32;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar33;
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
  double dVar45;
  double dVar46;
  double dVar47;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar48;
  ulonglong in_f28;
  double dVar49;
  double dVar50;
  ulonglong in_f29;
  double dVar51;
  double dVar52;
  double dVar53;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float local_1e0 [120];
  
  lVar24 = (longlong)(int)moby;
  uVar21 = ZEXT48(&stack0x00000000);
  lVar30 = uVar21 - 0x290;
  puVar19 = (ulonglong *)lVar30;
  *puVar19 = uVar21;
  puVar19[0x54] = in_LR;
  puVar19[0x45] = in_f19;
  puVar19[0x46] = in_f20;
  puVar19[0x47] = in_f21;
  puVar19[0x48] = in_f22;
  puVar19[0x49] = in_f23;
  puVar19[0x4a] = in_f24;
  puVar19[0x4b] = in_f25;
  puVar19[0x4c] = in_f26;
  puVar19[0x4d] = in_f27;
  puVar19[0x4e] = in_f28;
  puVar19[0x4f] = in_f29;
  puVar19[0x50] = in_f30;
  puVar19[0x51] = in_f31;
  puVar19[0x44] = unaff_r31;
  puVar19[0x3e] = unaff_r25;
  puVar19[0x42] = unaff_r29;
  puVar19[0x43] = unaff_r30;
  fVar2 = DAT_00811d68;
  fVar1 = (moby->rotation).y;
  pfVar14 = (float *)moby->pVar;
  uVar32 = ZEXT48(pfVar14);
  puVar19[0x41] = unaff_r28;
  puVar19[0x40] = unaff_r27;
  puVar19[0x3f] = unaff_r26;
  puVar19[0x3d] = unaff_r24;
  puVar19[0x3c] = unaff_r23;
  puVar19[0x3b] = unaff_r22;
  puVar19[0x3a] = unaff_r21;
  puVar19[0x39] = unaff_r20;
  puVar19[0x38] = unaff_r19;
  dVar34 = (double)fastfunc::FastWrapRot(fVar1,-fVar2);
  (moby->rotation).y = (float)dVar34;
  fVar8 = animationSpeed;
  fVar1 = pfVar14[1];
  fVar2 = *pfVar14;
  fVar3 = pfVar14[2];
  dVar40 = (double)(moby->rotation).z;
  fVar4 = (moby->pos).z;
  fVar7 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (0.1 <= fVar7) {
    fVar8 = (moby->pos).x;
    fVar9 = (moby->pos).y;
    fVar10 = fVar2 - fVar8;
    fVar16 = fVar1 - fVar9;
    fVar5 = ABS(fVar10);
    fVar11 = ABS(fVar16);
    *(float *)(puVar19 + 0x23) = fVar10;
    *(float *)((int)puVar19 + 0x11c) = fVar16;
    *(float *)(puVar19 + 0x24) = fVar5 - fVar11;
    dVar34 = 0.0;
    uVar27 = (ulonglong)(*(uint *)(puVar19 + 0x23) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar19 + 0x24) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar19 + 0x11c) >> 0x1d) & 4;
    fVar10 = ABS(*(float *)(puVar19 + 0x23));
    if (*(float *)(puVar19 + 0x24) - 0.0 < 0.0) {
      fVar10 = fVar11;
    }
    fVar11 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar27 << 2));
    fVar16 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
    fVar20 = ABS(*(float *)((int)puVar19 + 0x11c));
    if (*(float *)(puVar19 + 0x24) - 0.0 < 0.0) {
      fVar20 = fVar5;
    }
    dVar52 = dVar34;
    if (0.0 < fVar10) {
      lVar22 = uVar21 - 0x280;
      lVar31 = uVar21 - 0x10c;
      lVar28 = uVar21 - 0xfc;
      lVar33 = 2;
      fVar10 = (fVar20 - fVar10) / (fVar20 + fVar10);
      fVar5 = fVar10 * fVar10;
      *(float *)(puVar19 + 0x32) = fVar10;
      *(float *)(puVar19 + 0x31) = fVar10;
      *(float *)((int)puVar19 + 0x18c) = fVar10;
      *(float *)((int)puVar19 + 0x184) = fVar10;
      fVar10 = fVar5 * fVar5;
      *(float *)(puVar19 + 0x31) = *(float *)(puVar19 + 0x31) * fVar5;
      *(float *)((int)puVar19 + 0x18c) = *(float *)((int)puVar19 + 0x18c) * fVar10;
      *(float *)(puVar19 + 0x32) = *(float *)(puVar19 + 0x32) * fVar10 * fVar5;
      do {
        *(float *)((int)lVar22 + 0x184) = *(float *)((int)lVar22 + 0x174) * fVar10 * fVar10;
        iVar26 = (int)lVar31;
        lVar22 = lVar22 + 8;
        lVar31 = lVar31 + 8;
        *(float *)((int)lVar28 + 4) = *(float *)(iVar26 + 4) * fVar10 * fVar10;
        lVar28 = lVar28 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar33 = 4;
      lVar28 = uVar21 - 0x10c;
      pfVar29 = (float *)&DAT_007358e0;
      lVar22 = lVar30;
      lVar31 = lVar28;
      do {
        fVar10 = *pfVar29;
        fVar5 = pfVar29[1];
        pfVar29 = pfVar29 + 2;
        *(float *)((int)lVar22 + 0x184) = *(float *)((int)lVar22 + 0x184) * fVar10;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar31 + 4) = *(float *)((int)lVar31 + 4) * fVar5;
        lVar31 = lVar31 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar31 = 2;
      lVar22 = lVar30;
      do {
        iVar26 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        iVar17 = (int)lVar28;
        lVar28 = lVar28 + 0x10;
        dVar52 = (double)((float)(dVar52 + (double)*(float *)(iVar26 + 0x184)) +
                          *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc)
                         );
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      dVar52 = (double)((float)(dVar52 + 0.7853981852531433) * fVar11 + fVar16);
    }
    fVar9 = fVar9 - fVar1;
    fVar8 = fVar8 - fVar2;
    fVar3 = fVar3 - fVar4;
    fVar1 = SQRT(fVar8 * fVar8 + fVar9 * fVar9);
    *(float *)(puVar19 + 0x22) = fVar3;
    fVar3 = ABS(fVar3);
    fVar2 = ABS(fVar1);
    *(float *)((int)puVar19 + 0x10c) = fVar1;
    *(float *)((int)puVar19 + 0x114) = fVar2 - fVar3;
    uVar27 = (ulonglong)(*(uint *)((int)puVar19 + 0x10c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar19 + 0x114) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar19 + 0x22) >> 0x1d) & 4;
    fVar1 = ABS(*(float *)((int)puVar19 + 0x10c));
    if (*(float *)((int)puVar19 + 0x114) - 0.0 < 0.0) {
      fVar1 = fVar3;
    }
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar27 << 2));
    fVar3 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
    fVar8 = ABS(*(float *)(puVar19 + 0x22));
    if (*(float *)((int)puVar19 + 0x114) - 0.0 < 0.0) {
      fVar8 = fVar2;
    }
    if (0.0 < fVar1) {
      lVar22 = uVar21 - 0x280;
      lVar28 = uVar21 - 0x11c;
      lVar31 = uVar21 - 300;
      lVar33 = 2;
      fVar1 = (fVar8 - fVar1) / (fVar8 + fVar1);
      fVar2 = fVar1 * fVar1;
      *(float *)(puVar19 + 0x2e) = fVar1;
      *(float *)(puVar19 + 0x2d) = fVar1;
      *(float *)((int)puVar19 + 0x16c) = fVar1;
      *(float *)((int)puVar19 + 0x164) = fVar1;
      fVar1 = fVar2 * fVar2;
      *(float *)(puVar19 + 0x2d) = *(float *)(puVar19 + 0x2d) * fVar2;
      *(float *)((int)puVar19 + 0x16c) = *(float *)((int)puVar19 + 0x16c) * fVar1;
      *(float *)(puVar19 + 0x2e) = *(float *)(puVar19 + 0x2e) * fVar1 * fVar2;
      do {
        *(float *)((int)lVar22 + 0x164) = *(float *)((int)lVar22 + 0x154) * fVar1 * fVar1;
        iVar26 = (int)lVar31;
        lVar31 = lVar31 + 8;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar28 + 4) = *(float *)(iVar26 + 4) * fVar1 * fVar1;
        lVar28 = lVar28 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar33 = 4;
      lVar28 = uVar21 - 300;
      pfVar29 = (float *)&DAT_007358e0;
      lVar22 = lVar30;
      lVar31 = lVar28;
      do {
        fVar1 = *pfVar29;
        fVar2 = pfVar29[1];
        pfVar29 = pfVar29 + 2;
        *(float *)((int)lVar22 + 0x164) = *(float *)((int)lVar22 + 0x164) * fVar1;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar31 + 4) = *(float *)((int)lVar31 + 4) * fVar2;
        lVar31 = lVar31 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar31 = 2;
      lVar22 = lVar30;
      do {
        iVar26 = (int)lVar22;
        iVar17 = (int)lVar28;
        lVar22 = lVar22 + 0x10;
        lVar28 = lVar28 + 0x10;
        dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar26 + 0x164)) +
                          *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc)
                         );
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar4 + fVar3);
    }
    dVar34 = -dVar34;
  }
  else {
    sVar12 = *(short *)(pfVar14 + 9);
    puVar19[0x35] = (longlong)(int)(animationSpeed * 35.5);
    puVar19[0x35] = (longlong)(int)(fVar8 * 1.5);
    dVar52 = dVar40;
    if (((int)sVar12 < *(int *)((int)puVar19 + 0x1ac) - *(int *)((int)puVar19 + 0x1ac)) &&
       (pfVar14[10] == 0.0)) {
      dVar34 = (double)pfVar14[7];
      dVar52 = (double)pfVar14[6];
    }
  }
  lVar22 = uVar32 + 0x10;
  dVar54 = 3.1415927410125732;
  dVar51 = 6.2831854820251465;
  if (0.1 <= fVar7) {
    dVar48 = 4.71238899230957;
    dVar40 = (double)mobyutil::MB_DeltAngSpeed
                               (dVar40,dVar52,(double)(DAT_0071f418 * 6.2831855),
                                (double)(DAT_0071f418 * 3.1415927),
                                (double)(mobyutil::g_FrameTime * 4.712389),lVar22,&DAT_0033abd4,
                                lVar22);
    (moby->rotation).z = (float)dVar40;
    dVar34 = (double)mobyutil::MB_DeltAngSpeed
                               ((double)(moby->rotation).y,dVar34,
                                (double)(float)((double)DAT_0071f418 * dVar51),
                                (double)(float)((double)DAT_0071f418 * dVar54),
                                (double)(float)((double)mobyutil::g_FrameTime * dVar48));
  }
  else {
    dVar40 = (double)mobyutil::MB_DeltAngSpeed
                               (dVar40,dVar52,(double)(DAT_0071f418 * 6.2831855),
                                (double)(DAT_0071f418 * 3.1415927),
                                (double)(mobyutil::g_FrameTime * 6.2831855),lVar22,&DAT_0033abd4,
                                lVar22);
    (moby->rotation).z = (float)dVar40;
    dVar34 = (double)mobyutil::MB_DeltAngSpeed
                               ((double)(moby->rotation).y,dVar34,
                                (double)(float)((double)DAT_0071f418 * dVar51),
                                (double)(float)((double)DAT_0071f418 * dVar54),
                                (double)(float)((double)mobyutil::g_FrameTime * dVar51));
  }
  (moby->rotation).y = (float)dVar34;
  lVar22 = uVar21 - 0x210;
  mobyutil::MB_SphericalToVector
            (mobyutil::g_FrameTime * 40.0,(moby->rotation).z,(float)-dVar34,(float *)lVar22);
  fVar1 = (moby->pos).x;
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).z;
  fVar4 = fVar1 + *(float *)(puVar19 + 0x10);
  fVar7 = fVar2 + *(float *)((int)puVar19 + 0x84);
  *(float *)(puVar19 + 0xe) = fVar1;
  fVar1 = fVar3 + *(float *)(puVar19 + 0x11);
  *(float *)((int)puVar19 + 0x74) = fVar2;
  fVar6 = (moby->pos).w;
  *(float *)(puVar19 + 0xf) = fVar3;
  *(f32 *)((int)puVar19 + 0x7c) = fVar6;
  (moby->pos).x = fVar4;
  (moby->pos).y = fVar7;
  (moby->pos).z = fVar1;
  dVar34 = 0.0;
  if ((((fVar4 < 0.0) || (fVar7 < 0.0)) || (fVar1 < 0.0)) ||
     (64.0 < SQRT((fVar4 - GameCamera.posX) * (fVar4 - GameCamera.posX) +
                  (fVar7 - GameCamera.posY) * (fVar7 - GameCamera.posY)))) {
    mobyupdate_helpers::M305_00339e00(lVar24,0);
    mobyfunc::DeleteMoby(moby);
    return;
  }
  fVar7 = fVar7 - g_heroPosition.y;
  fVar4 = fVar4 - g_heroPosition.x;
  *(MobyInstance **)(puVar19 + 0x1c) = moby;
  *(float *)(puVar19 + 0x1a) = fVar4;
  *(undefined4 *)((int)puVar19 + 0xec) = 0x3e800000;
  *(undefined4 *)((int)puVar19 + 0xe4) = 0x10001;
  *(undefined4 *)(puVar19 + 0x1e) = 1;
  fVar1 = fVar4 * fVar4 + fVar7 * fVar7;
  dVar40 = dVar34;
  dVar52 = dVar34;
  if (SQRT(fVar1) != 0.0) {
    fVar2 = 1.0 / SQRT(fVar1);
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    dVar40 = (double)(fVar4 * fVar2);
    dVar52 = (double)(fVar7 * fVar2);
  }
  *(float *)(puVar19 + 0x1a) = (float)dVar40;
  *(float *)((int)puVar19 + 0xd4) = (float)dVar52;
  dVar40 = 1.0;
  *(undefined4 *)(puVar19 + 0x1b) = 0x3f800000;
  *(undefined4 *)((int)puVar19 + 0xdc) = 0x45afdf66;
  MVar13 = moby->oClass;
  *(undefined1 *)(puVar19 + 0x1d) = 1;
  *(undefined1 *)((int)puVar19 + 0xe9) = 1;
  *(MOBY_OCLASSES *)((int)puVar19 + 0xea) = MVar13;
  iVar26 = fastfunc::FastDecTimerS16(uVar32 + 0x24);
  if (iVar26 != 0) {
    mobyupdate_helpers::M305_00339e00(lVar24,0);
    mobyfunc::DeleteMoby(moby);
    return;
  }
  lVar31 = lVar24 + 0x10;
  iVar26 = collproc::CollLine(uVar21 - 0x220,lVar31,0,pfVar14[8],uVar21 - 0x1c0);
  if (iVar26 == 0) goto LAB_0033bb88;
  iVar26 = collproc::CollHotspot();
  if (iVar26 == 0) {
    auVar55 = ZEXT416(0xffffffff);
    auVar55 = auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60;
    auVar56 = vectorShiftLeftIntegerWord(auVar55,auVar55);
    auVar55 = loadVectorLeftIndexed(0x30,0x33abd4);
    auVar55 = auVar55 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar57 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    sVar12 = *(short *)(pfVar14 + 9);
    auVar55 = vectorMultiplyAddFloatingPoint
                        (auVar57,auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60,
                         auVar56);
    auVar55 = vectorConvertToSignedFixedPointWordSaturate(auVar55,0);
    puVar19[0x35] = (longlong)(int)(animationSpeed * 3.5);
    if (*(int *)((int)puVar19 + 0x1ac) < (int)sVar12) {
      auVar55 = vectorSplatHalfWord(auVar55,1);
      uVar18 = storeVectorElementHalfWordIndexed(auVar55,0x24,uVar32);
      *(undefined2 *)(pfVar14 + 9) = uVar18;
    }
    goto LAB_0033bb88;
  }
  iVar26 = 0;
  (moby->pos).x = CollOutput.ip.x;
  (moby->pos).y = CollOutput.ip.y;
  (moby->pos).z = CollOutput.ip.z;
  (moby->pos).w = CollOutput.ip.w;
  dVar49 = -1.0;
  dVar53 = 0.5;
  dVar50 = 3.0;
  dVar48 = 6.0;
  dVar51 = 10.5;
  dVar52 = 15.5;
  uVar25 = 0x40dd4c0000000000;
  do {
    dVar35 = (double)mobyutil::MB_randRangeFloat((float)dVar49,(float)dVar40);
    dVar36 = (double)mobyutil::MB_randRangeFloat((float)dVar49,(float)dVar40);
    dVar37 = (double)mobyutil::MB_randRangeFloat((float)dVar49,(float)dVar40);
    fastfunc::FastVecNormalize(uVar21 - 0x200,lVar22,0xa10980);
    dVar39 = (double)*(float *)((int)puVar19 + 0x94);
    dVar41 = (double)*(float *)(puVar19 + 0x12);
    dVar42 = (double)*(float *)(puVar19 + 0x13);
    dVar43 = (double)mobyutil::g_FrameTime;
    dVar46 = (double)SQRT((float)(dVar37 * dVar37 +
                                 (double)(float)(dVar35 * dVar35 + (double)(float)(dVar36 * dVar36))
                                 ));
    dVar44 = (double)(float)((double)(float)((double)SQRT((float)(dVar42 * dVar42 +
                                                                 (double)(float)(dVar41 * dVar41 +
                                                                                (double)(float)(
                                                  dVar39 * dVar39)))) * dVar53) / dVar46);
    dVar38 = dVar34;
    if (dVar34 - dVar46 < 0.0) {
      dVar38 = (double)(float)(dVar37 * dVar44);
    }
    dVar47 = dVar34;
    if (dVar34 - dVar46 < 0.0) {
      dVar47 = (double)(float)(dVar36 * dVar44);
    }
    dVar45 = dVar34;
    if (dVar34 - dVar46 < 0.0) {
      dVar45 = (double)(float)(dVar35 * dVar44);
    }
    if (dVar46 - dVar34 < 0.0) {
      dVar38 = (double)(float)(dVar37 * dVar44);
    }
    if (dVar46 - dVar34 < 0.0) {
      dVar47 = (double)(float)(dVar36 * dVar44);
    }
    if (dVar46 - dVar34 < 0.0) {
      dVar45 = (double)(float)(dVar35 * dVar44);
    }
    *(float *)(puVar19 + 0x13) = (float)(dVar42 + dVar38);
    *(float *)((int)puVar19 + 0x94) = (float)(dVar39 + dVar47);
    *(float *)(puVar19 + 0x12) = (float)(dVar41 + dVar45);
    dVar38 = (double)mobyutil::MB_randRangeFloat((float)(dVar43 * dVar50),(float)(dVar43 * dVar48));
    fVar2 = *(float *)((int)puVar19 + 0x94);
    fVar3 = *(float *)(puVar19 + 0x12);
    fVar4 = *(float *)(puVar19 + 0x13);
    dVar36 = (double)animationSpeed;
    dVar35 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    puVar19[0x35] = (longlong)(int)(dVar36 * dVar51);
    puVar19[0x35] = (longlong)(int)(dVar36 * dVar52);
    fVar1 = (float)(dVar38 / dVar35);
    dVar38 = dVar34;
    if (dVar34 - dVar35 < 0.0) {
      dVar38 = (double)(fVar3 * fVar1);
    }
    dVar36 = dVar34;
    if (dVar34 - dVar35 < 0.0) {
      dVar36 = (double)(fVar2 * fVar1);
    }
    dVar37 = dVar34;
    if (dVar34 - dVar35 < 0.0) {
      dVar37 = (double)(fVar4 * fVar1);
    }
    if (dVar35 - dVar34 < 0.0) {
      dVar38 = (double)(fVar3 * fVar1);
    }
    if (dVar35 - dVar34 < 0.0) {
      dVar36 = (double)(fVar2 * fVar1);
    }
    if (dVar35 - dVar34 < 0.0) {
      dVar37 = (double)(fVar4 * fVar1);
    }
    *(float *)(puVar19 + 0x12) = (float)dVar38;
    *(float *)((int)puVar19 + 0x94) = (float)dVar36;
    *(float *)(puVar19 + 0x13) = (float)dVar37;
    uVar23 = mobyutil::MB_randRange
                       (*(undefined4 *)((int)puVar19 + 0x1ac),*(undefined4 *)((int)puVar19 + 0x1ac))
    ;
    partupd::SpawnPart_27(uVar25,lVar31,uVar21 - 0x200,0x7f2f4f6f,uVar23);
    iVar26 = iVar26 + 1;
  } while (iVar26 < 5);
  if (g_goldWeaponsArray.blaster == '\0') {
    mobyupdate_helpers::M305_00339e00(lVar24,0);
    mobyfunc::DeleteMoby(moby);
    return;
  }
  pfVar14[10] = (float)((int)pfVar14[10] + 1);
  iVar26 = collproc::CollHotspot();
  if (iVar26 < 5) {
    if (iVar26 < 2) {
      if (-1 < iVar26) {
LAB_0033b718:
        pfVar14[10] = 1.4013e-42;
      }
    }
    else if (2 < iVar26) goto LAB_0033b718;
  }
  else if (iVar26 < 0xe) {
    if (iVar26 < 0xb) {
      if (iVar26 == 7) goto LAB_0033b718;
    }
    else if (iVar26 != 0xc) goto LAB_0033b718;
  }
  if ((int)(g_goldWeaponsArray.blaster + 5) < (int)pfVar14[10]) {
    mobyupdate_helpers::M305_00339e00(lVar24,1);
    mobyfunc::DeleteMoby(moby);
    return;
  }
  fastfunc::FastVecNormalize(uVar21 - 0x1f0,lVar22,0xa10980);
  dVar48 = (double)*(float *)(puVar19 + 0x14);
  dVar50 = (double)*(float *)((int)puVar19 + 0xa4);
  dVar51 = ABS(dVar48);
  dVar40 = ABS(dVar50);
  *(float *)(puVar19 + 0x21) = (float)(dVar51 - dVar40);
  uVar15 = *(uint *)(puVar19 + 0x15);
  fVar1 = *(float *)(puVar19 + 0x15);
  uVar27 = (ulonglong)(*(uint *)(puVar19 + 0x14) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar19 + 0x21) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar19 + 0xa4) >> 0x1d) & 4;
  dVar52 = dVar51;
  if ((double)*(float *)(puVar19 + 0x21) - dVar34 < 0.0) {
    dVar52 = dVar40;
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar27 << 2));
  if ((double)*(float *)(puVar19 + 0x21) - dVar34 < 0.0) {
    dVar40 = dVar51;
  }
  fVar3 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
  dVar51 = dVar34;
  if (dVar34 < dVar52) {
    lVar24 = uVar21 - 0x280;
    lVar22 = uVar21 - 0x14c;
    lVar28 = uVar21 - 0x13c;
    lVar33 = 2;
    fVar4 = (float)(dVar40 - dVar52) / (float)(dVar40 + dVar52);
    fVar7 = fVar4 * fVar4;
    *(float *)(puVar19 + 0x2a) = fVar4;
    *(float *)(puVar19 + 0x29) = fVar4;
    *(float *)((int)puVar19 + 0x14c) = fVar4;
    *(float *)((int)puVar19 + 0x144) = fVar4;
    fVar4 = fVar7 * fVar7;
    *(float *)(puVar19 + 0x29) = *(float *)(puVar19 + 0x29) * fVar7;
    *(float *)((int)puVar19 + 0x14c) = *(float *)((int)puVar19 + 0x14c) * fVar4;
    *(float *)(puVar19 + 0x2a) = *(float *)(puVar19 + 0x2a) * fVar4 * fVar7;
    do {
      *(float *)((int)lVar24 + 0x144) = *(float *)((int)lVar24 + 0x134) * fVar4 * fVar4;
      iVar26 = (int)lVar22;
      lVar24 = lVar24 + 8;
      lVar22 = lVar22 + 8;
      *(float *)((int)lVar28 + 4) = *(float *)(iVar26 + 4) * fVar4 * fVar4;
      lVar28 = lVar28 + 8;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    lVar33 = 4;
    lVar28 = uVar21 - 0x14c;
    pfVar29 = (float *)&DAT_007358e0;
    lVar24 = lVar30;
    lVar22 = lVar28;
    do {
      fVar4 = *pfVar29;
      fVar7 = pfVar29[1];
      pfVar29 = pfVar29 + 2;
      *(float *)((int)lVar24 + 0x144) = *(float *)((int)lVar24 + 0x144) * fVar4;
      lVar24 = lVar24 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar7;
      lVar22 = lVar22 + 8;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    lVar22 = 2;
    lVar24 = lVar30;
    dVar40 = dVar34;
    do {
      iVar26 = (int)lVar24;
      lVar24 = lVar24 + 0x10;
      iVar17 = (int)lVar28;
      lVar28 = lVar28 + 0x10;
      dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar26 + 0x144)) +
                        *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc));
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    dVar51 = (double)((float)(dVar40 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar40 = ABS((double)fVar1);
  (moby->rotation).z = (float)dVar51;
  fVar1 = SQRT((float)(dVar48 * dVar48 + (double)(float)(dVar50 * dVar50)));
  dVar51 = ABS((double)fVar1);
  *(float *)(puVar19 + 0x20) = fVar1;
  *(float *)((int)puVar19 + 0x104) = (float)(dVar51 - dVar40);
  uVar27 = (ulonglong)(*(uint *)(puVar19 + 0x20) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar19 + 0x104) >> 0x1e) & 2 |
           (ulonglong)(uVar15 >> 0x1d) & 4;
  dVar52 = ABS((double)*(float *)(puVar19 + 0x20));
  if ((double)*(float *)((int)puVar19 + 0x104) - dVar34 < 0.0) {
    dVar52 = dVar40;
  }
  fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar27 << 2));
  if ((double)*(float *)((int)puVar19 + 0x104) - dVar34 < 0.0) {
    dVar40 = dVar51;
  }
  fVar2 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
  dVar51 = dVar34;
  if (dVar34 < dVar52) {
    lVar24 = uVar21 - 0x280;
    lVar22 = uVar21 - 0x16c;
    lVar28 = uVar21 - 0x15c;
    lVar33 = 2;
    fVar3 = (float)(dVar40 - dVar52) / (float)(dVar40 + dVar52);
    fVar4 = fVar3 * fVar3;
    *(float *)(puVar19 + 0x26) = fVar3;
    *(float *)(puVar19 + 0x25) = fVar3;
    *(float *)((int)puVar19 + 300) = fVar3;
    *(float *)((int)puVar19 + 0x124) = fVar3;
    fVar3 = fVar4 * fVar4;
    *(float *)(puVar19 + 0x25) = *(float *)(puVar19 + 0x25) * fVar4;
    *(float *)((int)puVar19 + 300) = *(float *)((int)puVar19 + 300) * fVar3;
    *(float *)(puVar19 + 0x26) = *(float *)(puVar19 + 0x26) * fVar3 * fVar4;
    do {
      *(float *)((int)lVar24 + 0x124) = *(float *)((int)lVar24 + 0x114) * fVar3 * fVar3;
      iVar26 = (int)lVar22;
      lVar24 = lVar24 + 8;
      lVar22 = lVar22 + 8;
      *(float *)((int)lVar28 + 4) = *(float *)(iVar26 + 4) * fVar3 * fVar3;
      lVar28 = lVar28 + 8;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    lVar33 = 4;
    lVar28 = uVar21 - 0x16c;
    pfVar29 = (float *)&DAT_007358e0;
    lVar24 = lVar30;
    lVar22 = lVar28;
    do {
      fVar3 = *pfVar29;
      fVar4 = pfVar29[1];
      pfVar29 = pfVar29 + 2;
      *(float *)((int)lVar24 + 0x124) = *(float *)((int)lVar24 + 0x124) * fVar3;
      lVar24 = lVar24 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar4;
      lVar22 = lVar22 + 8;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    lVar24 = 2;
    dVar40 = dVar34;
    do {
      iVar26 = (int)lVar30;
      lVar30 = lVar30 + 0x10;
      iVar17 = (int)lVar28;
      lVar28 = lVar28 + 0x10;
      dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar26 + 0x124)) +
                        *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc));
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    dVar51 = (double)((float)(dVar40 + 0.7853981852531433) * fVar1 + fVar2);
  }
  (moby->rotation).y = (float)-dVar51;
  pfVar14[4] = 0.0;
  pfVar14[5] = 0.0;
  fVar7 = CollOutput.normal.z;
  fVar4 = CollOutput.normal.y;
  fVar3 = CollOutput.normal.x;
  pMoby = g_currentWeaponMoby;
  fVar1 = CollOutput.normal.y * CollOutput.normal.y;
  dVar51 = (double)CollOutput.ip.x;
  dVar48 = (double)CollOutput.ip.y;
  fVar2 = CollOutput.normal.x * CollOutput.normal.x;
  dVar50 = (double)CollOutput.ip.z;
  (moby->pos).w = CollOutput.ip.w;
  dVar52 = (double)SQRT(fVar7 * fVar7 + fVar2 + fVar1);
  fVar1 = (float)(0.05000000074505806 / dVar52);
  dVar40 = dVar34;
  if (dVar34 - dVar52 < 0.0) {
    dVar40 = (double)(fVar7 * fVar1);
  }
  dVar53 = dVar34;
  if (dVar34 - dVar52 < 0.0) {
    dVar53 = (double)(fVar4 * fVar1);
  }
  dVar49 = dVar34;
  if (dVar34 - dVar52 < 0.0) {
    dVar49 = (double)(fVar3 * fVar1);
  }
  if (dVar52 - dVar34 < 0.0) {
    dVar40 = (double)(fVar7 * fVar1);
  }
  if (dVar52 - dVar34 < 0.0) {
    dVar53 = (double)(fVar4 * fVar1);
  }
  if (dVar52 - dVar34 < 0.0) {
    dVar49 = (double)(fVar3 * fVar1);
  }
  (moby->pos).z = (float)(dVar50 + dVar40);
  (moby->pos).y = (float)(dVar48 + dVar53);
  (moby->pos).x = (float)(dVar51 + dVar49);
  if (((pMoby != (MobyInstance *)0x0) && (pMoby->oClass == BLASTER)) &&
     (pMoby->state != 0xfd && pMoby->state != 0xfe)) {
    sound::PlayMobySound(4,0,pMoby);
  }
LAB_0033bb88:
  dVar40 = (double)fastfunc::FastWrapRot((moby->rotation).y,DAT_00811d68);
  (moby->rotation).y = (float)dVar40;
  dVar40 = 13.5;
  lVar30 = (longlong)*(short *)((int)pfVar14 + 0x26) - (longlong)*(short *)(pfVar14 + 9);
  puVar19[0x35] = (longlong)(int)(animationSpeed * 13.5);
  fVar1 = DAT_00811d58;
  if ((int)lVar30 < *(int *)((int)puVar19 + 0x1ac)) {
    dVar52 = (double)fastfunc::FastIntToDouble(lVar30);
    puVar19[0x35] = (longlong)(int)((double)animationSpeed * dVar40);
    dVar40 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)puVar19 + 0x1ac));
    fVar1 = DAT_00811d58 * (float)(dVar52 / dVar40);
  }
  fVar7 = (moby->pos).y;
  dVar48 = (double)fVar7;
  fVar2 = (float)((double)*(float *)((int)puVar19 + 0x74) - dVar48);
  fVar8 = (moby->pos).x;
  dVar50 = (double)fVar8;
  fVar3 = (float)((double)*(float *)(puVar19 + 0xe) - dVar50);
  fVar9 = (moby->pos).z;
  dVar51 = (double)fVar9;
  fVar4 = (float)((double)*(float *)(puVar19 + 0xf) - dVar51);
  *(undefined4 *)((int)puVar19 + 0x8c) = *(undefined4 *)((int)puVar19 + 0x7c);
  dVar52 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  fVar1 = (float)((double)fVar1 / dVar52);
  fVar10 = (moby->pos).w;
  dVar53 = (double)fVar10;
  fVar16 = pfVar14[0xb];
  dVar40 = dVar34;
  if (dVar34 - dVar52 < 0.0) {
    dVar40 = (double)(fVar3 * fVar1);
  }
  dVar49 = dVar34;
  if (dVar34 - dVar52 < 0.0) {
    dVar49 = (double)(fVar2 * fVar1);
  }
  dVar38 = dVar34;
  if (dVar34 - dVar52 < 0.0) {
    dVar38 = (double)(fVar4 * fVar1);
  }
  if (dVar52 - dVar34 < 0.0) {
    dVar40 = (double)(fVar3 * fVar1);
  }
  if (dVar52 - dVar34 < 0.0) {
    dVar49 = (double)(fVar2 * fVar1);
  }
  if (dVar52 - dVar34 < 0.0) {
    dVar38 = (double)(fVar4 * fVar1);
  }
  *(float *)(puVar19 + 0x10) = (float)dVar40;
  *(float *)((int)puVar19 + 0x84) = (float)dVar49;
  *(float *)(puVar19 + 0x11) = (float)dVar38;
  if (fVar16 != 0.0) {
    *(float *)((int)fVar16 + 0x10) = fVar8;
    *(float *)((int)fVar16 + 0x14) = fVar7;
    *(float *)((int)fVar16 + 0x18) = fVar9;
    *(float *)((int)fVar16 + 0x1c) = fVar10;
    dVar40 = (double)*(float *)(puVar19 + 0x10);
  }
  iVar26 = 1;
  do {
    uVar32 = uVar32 + 4;
    iVar17 = *(int *)((int)uVar32 + 0x2c);
    if (iVar17 != 0) {
      dVar40 = dVar50 + dVar40;
      dVar50 = (double)(float)dVar40;
      *(float *)(iVar17 + 0x10) = (float)dVar40;
      fVar1 = (float)(dVar48 + (double)*(float *)((int)puVar19 + 0x84));
      dVar48 = (double)fVar1;
      *(float *)(iVar17 + 0x14) = fVar1;
      fVar1 = *(float *)(puVar19 + 0x11);
      *(float *)(iVar17 + 0x1c) = (float)dVar53;
      dVar40 = dVar51 + (double)fVar1;
      dVar51 = (double)(float)dVar40;
      *(float *)(iVar17 + 0x18) = (float)dVar40;
      dVar40 = (double)mobyutil::MB_randRangeSigned(dVar34,(double)DAT_00811d54);
      *(float *)(iVar17 + 0x10) = (float)((double)*(float *)(iVar17 + 0x10) + dVar40);
      dVar40 = (double)mobyutil::MB_randRangeSigned(dVar34,(double)DAT_00811d54);
      *(float *)(iVar17 + 0x14) = (float)((double)*(float *)(iVar17 + 0x14) + dVar40);
      dVar40 = (double)mobyutil::MB_randRangeSigned(dVar34,(double)DAT_00811d54);
      *(float *)(iVar17 + 0x18) = (float)((double)*(float *)(iVar17 + 0x18) + dVar40);
      dVar40 = (double)(*(float *)(puVar19 + 0x10) * DAT_00811d5c);
      fVar1 = *(float *)((int)puVar19 + 0x84) * DAT_00811d5c;
      fVar2 = *(float *)(puVar19 + 0x11) * DAT_00811d5c;
      *(float *)(puVar19 + 0x10) = *(float *)(puVar19 + 0x10) * DAT_00811d5c;
      *(float *)((int)puVar19 + 0x84) = fVar1;
      *(float *)(puVar19 + 0x11) = fVar2;
    }
    iVar26 = iVar26 + 1;
  } while (iVar26 < 0x11);
  iVar26 = mobyutil::MB_randInt(5);
  fVar3 = GameCamera.orientMtx.up.z;
  fVar2 = GameCamera.orientMtx.up.y;
  fVar1 = GameCamera.orientMtx.up.x;
  if (iVar26 == 0) {
    fVar7 = GameCamera.orientMtx.up.z * *(float *)((int)puVar19 + 0x84);
    fVar4 = GameCamera.orientMtx.up.y * *(float *)(puVar19 + 0x10);
    *(undefined4 *)((int)puVar19 + 0xbc) = 0;
    *(float *)(puVar19 + 0x16) = fVar2 * *(float *)(puVar19 + 0x11) - fVar7;
    *(float *)(puVar19 + 0x17) = fVar1 * *(float *)((int)puVar19 + 0x84) - fVar4;
    *(float *)((int)puVar19 + 0xb4) =
         fVar3 * *(float *)(puVar19 + 0x10) - fVar1 * *(float *)(puVar19 + 0x11);
    dVar40 = (double)mobyutil::MB_randRangeSigned(dVar34,dVar54);
    mobyutil::MB_RotateQuatAxisAngle((float)dVar40,local_1e0,local_1e0);
    dVar40 = (double)SQRT(*(float *)(puVar19 + 0x17) * *(float *)(puVar19 + 0x17) +
                          *(float *)(puVar19 + 0x16) * *(float *)(puVar19 + 0x16) +
                          *(float *)((int)puVar19 + 0xb4) * *(float *)((int)puVar19 + 0xb4));
    if (dVar40 != dVar34) {
      dVar34 = (double)mobyutil::MB_randRangeFloat
                                 (mobyutil::g_FrameTime * 0.5,mobyutil::g_FrameTime * 2.0);
      fVar1 = (float)(dVar34 / dVar40);
      *(undefined4 *)((int)puVar19 + 0xcc) = *(undefined4 *)((int)puVar19 + 0xbc);
      fVar2 = animationSpeed;
      *(float *)(puVar19 + 0x18) = *(float *)(puVar19 + 0x16) * fVar1;
      *(float *)((int)puVar19 + 0xc4) = *(float *)((int)puVar19 + 0xb4) * fVar1;
      *(float *)(puVar19 + 0x19) = *(float *)(puVar19 + 0x17) * fVar1;
      puVar19[0x35] = (longlong)(int)(fVar2 * 10.5);
      puVar19[0x35] = (longlong)(int)(fVar2 * 15.5);
      uVar25 = mobyutil::MB_randRange
                         (*(undefined4 *)((int)puVar19 + 0x1ac),
                          *(undefined4 *)((int)puVar19 + 0x1ac));
      partupd::SpawnPart_27(0x40dd4c0000000000,lVar31,uVar21 - 0x1d0,0x7f2f4f6f,uVar25);
    }
  }
  return;
}



//==== 0033bf70  ns=mobyupdate_helpers  size=0x14
// sig: undefined M306_0033bf70(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M306_0033bf70(void)

{
  DAT_00811dbc = 0x10000;
  return;
}



//==== 0033bf88  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_306(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 306 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_306(MobyInstance *moby)

{
  return moby;
}



//==== 0033bf8c  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_308(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 308 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_308(MobyInstance *moby)

{
  return moby;
}



//==== 0033bfc0  ns=mobyupdate_helpers  size=0x548
// sig: undefined M309_0033bfc0(void)
// callers(1): 0033c510 mobyupdate_unsorted::UpdateMoby_309
// callees(4): 00109b40 mobyutil::AccelDelt; 001113e0 mobyutil::MB_RotateQuatAxisAngle; 0015ce18 sound::sound_Play; 004fff60 fastfunc::FastDecTimerS32

void mobyupdate_helpers::M309_0033bfc0(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  MobyClass *pMVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *unused;
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
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50 [5];
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  pvVar5 = param_1->pVar;
  dVar16 = 0.0;
  local_50[0] = 0.0;
  local_50[1] = 0.0;
  dVar15 = 1.0;
  local_50[2] = 1.0;
  local_50[3] = 1.0;
  if (((g_standingOnMoby == param_1) && (g_framesNotGrounded == 0)) ||
     ((DAT_0096a1d8 == param_1 && (hero::g_heroStateType == 3)))) {
    param_1->setByGroup = '\x01';
    fVar2 = g_heroPosition.x - (param_1->pos).x;
    if (ABS(fVar2) < 0.1) {
      if (ABS(g_heroPosition.y - (param_1->pos).y) < 0.1) {
        local_60 = 0.0;
        local_5c = 0.0;
        local_58 = 1.0;
        local_54 = 0x3f800000;
        goto LAB_0033c258;
      }
    }
    fVar3 = g_heroPosition.y - (param_1->pos).y;
    fVar4 = DAT_00811df4 + (g_heroPosition.z - (param_1->pos).z);
    fVar1 = SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3);
    if (fVar1 == 0.0) {
      local_60 = 0.0;
      local_5c = 0.0;
      local_58 = 1.0;
      local_54 = 0x3f800000;
    }
    else {
      fVar4 = fVar4 / fVar1;
      local_50[4] = -fVar3;
      local_38 = 0;
      local_34 = 0;
      fVar3 = fVar4;
      if (fVar4 - 0.0 < 0.0) {
        fVar3 = ABS(fVar4);
      }
      dVar13 = dVar15;
      if (fVar4 - 0.0 < 0.0) {
        dVar13 = -1.0;
      }
      dVar14 = (double)(1.0 - fVar3);
      if ((double)(1.0 - fVar3) - 0.0 < 0.0) {
        dVar14 = dVar16;
      }
      fVar3 = -(float)(-(double)((fVar3 * fVar3 * fVar3 * DAT_007358cc +
                                 fVar3 * fVar3 * DAT_007358c8 + fVar3 * DAT_007358c4 + DAT_007358c0)
                                 * (float)SQRT(dVar14) - 1.5707964) * dVar13 - 1.5707963705062866);
      if (DAT_00811df0 * 0.017453292 - fVar3 < 0.0) {
        fVar3 = DAT_00811df0 * 0.017453292;
      }
      local_3c = fVar2;
      mobyutil::MB_RotateQuatAxisAngle(fVar3,&local_60,local_50);
      dVar9 = (double)(local_58 * local_58 + local_60 * local_60 + local_5c * local_5c);
      dVar13 = dVar16;
      dVar14 = dVar16;
      dVar12 = dVar16;
      if ((double)(float)SQRT(dVar9) != dVar16) {
        dVar13 = 1.0 / SQRT(dVar9);
        dVar13 = (double)(float)(-(double)(float)((double)(float)(dVar9 * dVar13) * dVar13 - dVar15)
                                 * (double)(float)(dVar13 * 0.5) + dVar13);
        dVar13 = (double)(float)(-(double)(float)((double)(float)(dVar9 * dVar13) * dVar13 - dVar15)
                                 * (double)(float)(dVar13 * 0.5) + dVar13);
        fVar2 = (float)(-(double)(float)((double)(float)(dVar9 * dVar13) * dVar13 - dVar15) *
                        (double)(float)(dVar13 * 0.5) + dVar13);
        dVar12 = (double)(local_60 * fVar2);
        dVar14 = (double)(local_5c * fVar2);
        dVar13 = (double)(local_58 * fVar2);
      }
      local_60 = (float)dVar12;
      local_5c = (float)dVar14;
      local_58 = (float)dVar13;
    }
  }
  else {
    local_60 = 0.0;
    local_5c = 0.0;
    local_58 = 1.0;
    local_54 = 0x3f800000;
    param_1->setByGroup = '\0';
  }
LAB_0033c258:
  iVar8 = fastfunc::FastDecTimerS32(ZEXT48(pvVar5) + 0x70);
  if ((iVar8 != 0) &&
     (((0.1 < ABS((param_1->transform).v2.x - local_60) ||
       (0.1 < ABS((param_1->transform).v2.y - local_5c))) ||
      (0.1 < ABS((param_1->transform).v2.z - local_58))))) {
    auVar17 = ZEXT416(0xffffffff);
    auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
    auVar18 = vectorShiftLeftIntegerWord(auVar17,auVar17);
    auVar17 = loadVectorLeftIndexed(0x1c,0x33bf90);
    auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar17 = vectorMultiplyAddFloatingPoint
                        (auVar19,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,
                         auVar18);
    auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
    auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0x70,
                       ZEXT48(pvVar5));
    *(undefined4 *)((int)pvVar5 + 0x70U & 0xfffffffc) = uVar7;
    dVar13 = 2.0;
    pMVar6 = param_1->pClass;
    (param_1->pos).z = (param_1->pos).z + 2.0;
    sound::sound_Play(pMVar6->SoundDefs,8,param_1,&(param_1->pos).x,0x400);
    (param_1->pos).z = (float)((double)(param_1->pos).z - dVar13);
  }
  unused = &DAT_0033bf90;
  dVar14 = 0.004999999888241291;
  dVar13 = 0.20000000298023224;
  mobyutil::AccelDelt(local_60,0.005,0.2,(float)dVar16,&(param_1->transform).v2.x,0x33bf90,
                      (float *)((int)pvVar5 + 0x60));
  mobyutil::AccelDelt(local_5c,(float)dVar14,(float)dVar13,(float)dVar16,&(param_1->transform).v2.y,
                      (int)unused,(float *)((int)pvVar5 + 100));
  mobyutil::AccelDelt(local_58,(float)dVar14,(float)dVar13,(float)dVar16,&(param_1->transform).v2.z,
                      (int)unused,(float *)((int)pvVar5 + 0x68));
  fVar2 = (param_1->transform).v2.y;
  fVar3 = (param_1->transform).v2.x;
  fVar4 = (param_1->transform).v2.z;
  dVar9 = (double)(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  dVar13 = dVar16;
  dVar14 = dVar16;
  dVar12 = dVar16;
  if ((double)(float)SQRT(dVar9) != dVar16) {
    dVar13 = 1.0 / SQRT(dVar9);
    dVar13 = (double)(float)(-(double)(float)((double)(float)(dVar9 * dVar13) * dVar13 - dVar15) *
                             (double)(float)(dVar13 * 0.5) + dVar13);
    dVar13 = (double)(float)(-(double)(float)((double)(float)(dVar9 * dVar13) * dVar13 - dVar15) *
                             (double)(float)(dVar13 * 0.5) + dVar13);
    fVar1 = (float)(-(double)(float)((double)(float)(dVar9 * dVar13) * dVar13 - dVar15) *
                    (double)(float)(dVar13 * 0.5) + dVar13);
    dVar12 = (double)(fVar3 * fVar1);
    dVar14 = (double)(fVar2 * fVar1);
    dVar13 = (double)(fVar4 * fVar1);
  }
  (param_1->transform).v2.x = (float)dVar12;
  (param_1->transform).v2.y = (float)dVar14;
  (param_1->transform).v2.z = (float)dVar13;
  dVar10 = (double)(float)(dVar13 * dVar13 + --(double)(float)(dVar14 * dVar14));
  dVar9 = dVar16;
  dVar11 = dVar16;
  if ((double)(float)SQRT(dVar10) != dVar16) {
    dVar9 = 1.0 / SQRT(dVar10);
    dVar9 = (double)(float)(-(double)(float)((double)(float)(dVar10 * dVar9) * dVar9 - dVar15) *
                            (double)(float)(dVar9 * 0.5) + dVar9);
    dVar9 = (double)(float)(-(double)(float)((double)(float)(dVar10 * dVar9) * dVar9 - dVar15) *
                            (double)(float)(dVar9 * 0.5) + dVar9);
    dVar15 = (double)(float)(-(double)(float)((double)(float)(dVar10 * dVar9) * dVar9 - dVar15) *
                             (double)(float)(dVar9 * 0.5) + dVar9);
    dVar11 = (double)(float)(dVar13 * dVar15);
    dVar9 = -(double)(float)(dVar14 * dVar15);
  }
  (param_1->transform).v1.x = 0.0;
  (param_1->transform).v1.y = (float)dVar11;
  (param_1->transform).v1.z = (float)dVar9;
  (param_1->transform).v0.w = 0.0;
  (param_1->transform).v1.w = 0.0;
  (param_1->transform).v0.y = (float)(dVar9 * dVar12 - dVar16);
  (param_1->transform).v2.w = 0.0;
  (param_1->transform).v0.x = (float)(dVar11 * dVar13 - (double)(float)(dVar9 * dVar14));
  (param_1->transform).v0.z = (float)(dVar16 * dVar14 - (double)(float)(dVar11 * dVar12));
  return;
}



//==== 0033c510  ns=mobyupdate_unsorted  size=0x168
// sig: undefined UpdateMoby_309(MobyInstance * moby)
// callers(0): 
// callees(2): 00112900 mobyutil::MB_GetOrientation; 0033bfc0 mobyupdate_helpers::M309_0033bfc0

/* Moby 309 */

void mobyupdate_unsorted::UpdateMoby_309(MobyInstance *moby)

{
  float fVar1;
  void *pvVar2;
  undefined4 *puVar3;
  
  pvVar2 = moby->pVar;
  if (moby->state == '\0') {
    fVar1 = (moby->pos).z;
    moby->modeBits = moby->modeBits | LOCK_ROTATION;
    moby->state = '\x01';
    moby->setByGroup = '\0';
    *(undefined4 *)((int)pvVar2 + 0x5c) = 1;
    *(undefined4 *)((int)pvVar2 + 0x70) = 0;
    (moby->pos).z = fVar1 + 0.35;
    *(undefined1 *)((int)pvVar2 + 0x60) = 0;
    *(undefined1 *)((int)pvVar2 + 0x61) = 0;
    *(undefined1 *)((int)pvVar2 + 0x62) = 0;
    *(undefined1 *)((int)pvVar2 + 99) = 0;
    *(undefined1 *)((int)pvVar2 + 100) = 0;
    *(undefined1 *)((int)pvVar2 + 0x65) = 0;
    *(undefined1 *)((int)pvVar2 + 0x66) = 0;
    *(undefined1 *)((int)pvVar2 + 0x67) = 0;
    *(undefined1 *)((int)pvVar2 + 0x68) = 0;
    *(undefined1 *)((int)pvVar2 + 0x69) = 0;
    *(undefined1 *)((int)pvVar2 + 0x6a) = 0;
    *(undefined1 *)((int)pvVar2 + 0x6b) = 0;
    *(undefined1 *)((int)pvVar2 + 0x6c) = 0;
    *(undefined1 *)((int)pvVar2 + 0x6d) = 0;
    *(undefined1 *)((int)pvVar2 + 0x6e) = 0;
    *(undefined1 *)((int)pvVar2 + 0x6f) = 0;
    puVar3 = (undefined4 *)((uint)&moby->rotation & 0xfffffff0);
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
  }
  mobyupdate_helpers::M309_0033bfc0((double)DAT_00811dec,0x4020000000000000,(longlong)(int)moby);
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar2 + 0x20),(Vec4 *)&DAT_00a15d30,
             ZEXT48(&stack0x00000000) - 0x30,(longlong)(int)moby + 0x40);
  return;
}



//==== 0033c678  ns=mobyupdate_helpers  size=0x14
// sig: undefined M309_0033c678(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M309_0033c678(void)

{
  DAT_00811e44 = 0x10000;
  return;
}



//==== 0033c6e0  ns=mobyupdate_helpers  size=0x3e4
// sig: undefined M31_0033c6e0(void)
// callers(1): 0033dad8 mobyupdate_unsorted::UpdateMoby_31
// callees(9): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 000fe4f0 mobyutil::MB_randRangeSigned; 001113e0 mobyutil::MB_RotateQuatAxisAngle; 00125e08 partupd::SpawnPart_19; 00126f50 partupd::SpawnPart_23; 003fda38 FUN_003fda38; 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M31_0033c6e0(double param_1,int param_2,float *param_3)

{
  float fVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  float afStack_90 [4];
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  longlong local_70;
  
  dVar9 = (double)fastfunc::FastWrapRot((float)param_1,*(float *)(param_2 + 0x48));
  fVar1 = (float)(dVar9 + 1.570796251296997);
  iVar8 = 0;
  dVar12 = (double)(float)(3.141592502593994 - dVar9);
  if (dVar9 - (double)(float)(3.141592502593994 - dVar9) < 0.0) {
    dVar12 = dVar9;
  }
  fVar4 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar4 = fVar1;
  }
  dVar10 = (double)(float)(-3.141592502593994 - dVar9);
  if ((double)(float)(-3.141592502593994 - dVar9) - dVar12 < 0.0) {
    dVar10 = dVar12;
  }
  fVar5 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
    fVar5 = fVar4;
  }
  dVar9 = (double)(float)(dVar10 * dVar10);
  fVar6 = fVar5 * fVar5;
  dVar13 = (double)(float)(dVar9 * (double)(float)(dVar9 * dVar10));
  fVar1 = fVar6 * fVar6 * fVar5;
  dVar12 = (double)(float)(dVar9 * dVar13);
  fVar4 = fVar6 * fVar1;
  local_a8 = param_3[2];
  local_a4 = param_3[3];
  local_bc = ((float)(dVar9 * dVar12) * 2.601887e-06 +
             (float)(dVar12 * -0.0001980741071747616 +
                    (double)(float)(dVar13 * 0.008333025500178337 +
                                   (double)(float)((double)(float)(dVar9 * dVar10) *
                                                   -0.16666656732559204 + dVar10)))) * 0.8;
  local_c0 = (fVar6 * fVar4 * 2.601887e-06 +
             fVar4 * -0.0001980741 + fVar1 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5) *
             0.8;
  local_ac = param_3[1] + local_bc;
  local_b0 = *param_3 + local_c0;
  uVar16 = 0;
  local_b8 = 0.0;
  dVar12 = 40000.0;
  dVar9 = 150000.0;
  uVar17 = 0x3fc99999a0000000;
  uVar14 = 0x3ff0000000000000;
  uVar15 = 0x3ff028f5c0000000;
  auVar20 = loadVectorLeftIndexed(0x38,0x33c690);
  auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
  do {
    mobyutil::MB_randInt(2);
    mobyutil::MB_randInt(2);
    uVar11 = mobyutil::MB_randRangeFloat((float)dVar12,(float)dVar9);
    mobyutil::MB_randRange(10,0x7f);
    uVar11 = partupd::SpawnPart_23(uVar17,uVar14,uVar15,uVar11,&local_b0);
    iVar7 = (int)uVar11;
    if (iVar7 != 0) {
      auVar18 = ZEXT416(0xffffffff);
      auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
      auVar18 = vectorShiftLeftIntegerWord(auVar18,auVar18);
      auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar18 = vectorMultiplyAddFloatingPoint(auVar19,auVar20,auVar18);
      auVar18 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
      auVar19 = vectorSplatHalfWord(auVar18,1);
      auVar18 = auVar18 >> 0x60 & (undefined1  [16])0xff;
      uVar3 = storeVectorElementHalfWordIndexed(auVar19,10,uVar11);
      *(undefined2 *)(iVar7 + 10) = uVar3;
      *(undefined4 *)(iVar7 + 0x24) = 2;
      *(undefined1 *)(iVar7 + 0x2a) = 0x7f;
      uVar2 = storeVectorElementByteIndexed
                        (auVar18 | auVar18 << 8 | auVar18 << 0x10 | auVar18 << 0x18 |
                         auVar18 << 0x20 | auVar18 << 0x28 | auVar18 << 0x30 | auVar18 << 0x38 |
                         auVar18 << 0x40 | auVar18 << 0x48 | auVar18 << 0x50 | auVar18 << 0x58 |
                         auVar18 << 0x60 | auVar18 << 0x68 | auVar18 << 0x70 | auVar18 << 0x78,0x2b,
                         uVar11);
      *(undefined1 *)(iVar7 + 0x2b) = uVar2;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 6);
  local_a0 = local_c0;
  local_9c = local_bc;
  local_98 = local_b8;
  local_94 = local_b4;
  local_c0 = local_c0 * 0.0625;
  local_bc = local_bc * 0.0625;
  local_b8 = local_b8 * 0.0625;
  dVar12 = (double)mobyutil::MB_randRangeFloat(0.025,0.06);
  iVar8 = 0;
  local_b8 = (float)dVar12;
  local_80 = local_b0;
  local_7c = local_ac;
  local_78 = local_a8;
  local_74 = local_a4;
  uVar14 = 0x3fe0000000000000;
  dVar12 = 0.6283000111579895;
  do {
    dVar9 = (double)mobyutil::MB_randRangeSigned(uVar16,uVar14);
    local_70 = (longlong)iVar8;
    mobyutil::MB_RotateQuatAxisAngle
              ((float)((double)local_70 * dVar12 + dVar9),afStack_90,&local_c0);
    dVar9 = (double)mobyutil::MB_randRangeSigned(uVar16,uVar17);
    local_b0 = (float)((double)local_80 + dVar9);
    dVar9 = (double)mobyutil::MB_randRangeSigned(uVar16,uVar17);
    local_ac = (float)((double)local_7c + dVar9);
    dVar9 = (double)mobyutil::MB_randRangeSigned(uVar16,uVar17);
    local_a8 = (float)((double)local_78 + dVar9);
    partupd::SpawnPart_19(&local_b0,afStack_90);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x10);
  FUN_003fda38(&DAT_00811ed0,&local_80,0,0);
  return;
}



//==== 0033cad0  ns=mobyupdate_helpers  size=0x2e4
// sig: undefined M31_0033cad0(void)
// callers(1): 0033dad8 mobyupdate_unsorted::UpdateMoby_31
// callees(3): 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00109b40 mobyutil::AccelDelt; 0010ce18 mobyutil::MB_PathMoveDist

bool mobyupdate_helpers::M31_0033cad0
               (undefined8 param_1,double param_2,double param_3,double param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong *puVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar10;
  longlong lVar9;
  undefined1 *unused;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  float *in_r8;
  undefined8 in_r9;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar16;
  double dVar17;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  undefined1 local_90 [144];
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar9 = uVar8 - 0x100;
  puVar5 = (ulonglong *)lVar9;
  *puVar5 = uVar8;
  puVar5[0x22] = in_LR;
  puVar5[0x1a] = in_f26;
  puVar5[0x1b] = in_f27;
  puVar5[0x1c] = in_f28;
  puVar5[0x1d] = in_f29;
  puVar5[0x1e] = in_f30;
  puVar5[0x1f] = in_f31;
  puVar5[0x18] = unaff_r30;
  unused = local_90;
  puVar5[0x15] = unaff_r27;
  puVar5[0x16] = unaff_r28;
  puVar5[0x19] = unaff_r31;
  puVar5[0x17] = unaff_r29;
  iVar10 = mobyutil::MB_PathMoveDist(param_9);
  iVar6 = (int)param_8;
  mobyutil::AccelDelt(*(float *)(puVar5 + 0xe),(float)param_2,(float)param_3,(float)param_4,
                      (float *)(iVar6 + 0x10),(int)unused,in_r8);
  mobyutil::AccelDelt(*(float *)((int)puVar5 + 0x74),(float)param_2,(float)param_3,(float)param_4,
                      (float *)(iVar6 + 0x14),(int)unused,in_r8 + 1);
  mobyutil::AccelDelt(*(float *)(puVar5 + 0xf),(float)param_2,(float)param_3,(float)param_4,
                      (float *)(iVar6 + 0x18),(int)unused,in_r8 + 2);
  fVar3 = *in_r8;
  fVar4 = in_r8[1];
  fVar1 = ABS(*in_r8);
  fVar2 = ABS(in_r8[1]);
  *(float *)(puVar5 + 0x10) = fVar1 - fVar2;
  dVar17 = 0.0;
  uVar11 = (ulonglong)((uint)fVar3 >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar5 + 0x10) >> 0x1e) & 2 | (ulonglong)((uint)fVar4 >> 0x1d) & 4;
  lVar12 = uVar11 << 2;
  fVar3 = fVar1;
  if (*(float *)(puVar5 + 0x10) - 0.0 < 0.0) {
    fVar3 = fVar2;
  }
  fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)lVar12);
  if (*(float *)(puVar5 + 0x10) - 0.0 < 0.0) {
    fVar2 = fVar1;
  }
  fVar1 = *(float *)(((uint)(uVar11 << 2) | 0x735900) + 4);
  if (0.0 < fVar3) {
    lVar14 = uVar8 - 0xf0;
    lVar13 = uVar8 - 0x7c;
    lVar12 = uVar8 - 0x6c;
    lVar16 = 2;
    fVar3 = (fVar2 - fVar3) / (fVar2 + fVar3);
    fVar2 = fVar3 * fVar3;
    *(float *)(puVar5 + 0x12) = fVar3;
    *(float *)(puVar5 + 0x11) = fVar3;
    *(float *)((int)puVar5 + 0x8c) = fVar3;
    *(float *)((int)puVar5 + 0x84) = fVar3;
    fVar3 = fVar2 * fVar2;
    *(float *)(puVar5 + 0x11) = *(float *)(puVar5 + 0x11) * fVar2;
    *(float *)((int)puVar5 + 0x8c) = *(float *)((int)puVar5 + 0x8c) * fVar3;
    *(float *)(puVar5 + 0x12) = *(float *)(puVar5 + 0x12) * fVar3 * fVar2;
    do {
      *(float *)((int)lVar14 + 0x84) = *(float *)((int)lVar14 + 0x74) * fVar3 * fVar3;
      iVar6 = (int)lVar13;
      lVar14 = lVar14 + 8;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar12 + 4) = *(float *)(iVar6 + 4) * fVar3 * fVar3;
      lVar12 = lVar12 + 8;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    lVar12 = uVar8 - 0x7c;
    pfVar15 = (float *)&DAT_007358e0;
    lVar16 = 4;
    lVar13 = lVar12;
    lVar14 = lVar9;
    do {
      fVar3 = *pfVar15;
      fVar2 = pfVar15[1];
      pfVar15 = pfVar15 + 2;
      *(float *)((int)lVar14 + 0x84) = *(float *)((int)lVar14 + 0x84) * fVar3;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar2;
      lVar13 = lVar13 + 8;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    lVar13 = 2;
    do {
      iVar6 = (int)lVar9;
      lVar9 = lVar9 + 0x10;
      iVar7 = (int)lVar12;
      lVar12 = lVar12 + 0x10;
      dVar17 = (double)((float)(dVar17 + (double)*(float *)(iVar6 + 0x84)) + *(float *)(iVar7 + 4) +
                        *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    dVar17 = (double)((float)(dVar17 + 0.7853981852531433) * fVar4 + fVar1);
  }
  mobyutil::OrganicDeltAngSpeed(dVar17,param_5,param_6,param_7,param_8,lVar12,in_r9);
  return iVar10 != 0;
}



//==== 0033cdb4  ns=mobyupdate_helpers  size=0x7c
// sig: undefined M309_0033cdb4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M309_0033cdb4(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  Spline *pSVar4;
  
  iVar2 = *(int *)(param_1 + 0x78);
  if (*(int *)(iVar2 + 0x10c) == 0) {
    pSVar4 = Splines[*(int *)(iVar2 + 0xd0)];
  }
  else {
    pSVar4 = Splines[*(int *)(iVar2 + 0x150)];
  }
  iVar3 = pSVar4->cnt;
  *(int *)(iVar2 + 0xe8) = iVar3 + -2;
  fVar1 = pSVar4->points[iVar3 + -2].w;
  *(undefined4 *)(iVar2 + 0xe4) = 0;
  *(float *)(iVar2 + 0xec) = fVar1;
  *(undefined4 *)(iVar2 + 0xfc) = 0;
  *(undefined4 *)(iVar2 + 0xf8) = 0;
  *(undefined4 *)(iVar2 + 0xf4) = 0;
  *(undefined4 *)(iVar2 + 0xf0) = 0;
  return;
}



//==== 0033ce30  ns=mobyupdate_helpers  size=0x98
// sig: undefined M309_0033ce30(void)
// callers(0): 
// callees(1): 0015cdb0 sound::sound_Kill

void mobyupdate_helpers::M309_0033ce30(MobyInstance *param_1)

{
  void *pvVar1;
  int handle;
  
  pvVar1 = param_1->pVar;
  param_1->collision = (ushort *)0x0;
  param_1->modeBits = param_1->modeBits | (UNK_40|DISABLED);
  handle = *(int *)((int)pvVar1 + 0x108);
  if (((handle != -1) && (sound::g_SoundChannels[handle].pMoby == param_1)) &&
     (sound::g_SoundChannels[handle].state != '\0')) {
    sound::sound_Kill(handle);
  }
  *(undefined4 *)((int)pvVar1 + 0x108) = 0xffffffff;
  return;
}



//==== 0033ced8  ns=mobyupdate_helpers  size=0x278
// sig: undefined M31_0033ced8(void)
// callers(1): 0033dad8 mobyupdate_unsorted::UpdateMoby_31
// callees(0): 

void mobyupdate_helpers::M31_0033ced8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  Spline *pSVar7;
  ulonglong *puVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  longlong lVar18;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar12 = uVar11 - 0x60;
  puVar8 = (ulonglong *)lVar12;
  *puVar8 = uVar11;
  iVar6 = *(int *)(param_1 + 0x78);
  *(undefined4 *)(iVar6 + 0xe8) = 0;
  fVar1 = 0.0;
  *(undefined4 *)(iVar6 + 0xec) = 0;
  fVar2 = DAT_00811e78;
  *(undefined4 *)(iVar6 + 0x164) = 0;
  *(undefined4 *)(iVar6 + 0x168) = 0;
  *(undefined4 *)(iVar6 + 0x16c) = 0;
  *(undefined4 *)(iVar6 + 0xc0) = 0;
  *(undefined4 *)(iVar6 + 0xc4) = 0;
  *(float *)(iVar6 + 0x160) = fVar2 * 1.5;
  if (*(int *)(iVar6 + 0x10c) == 0) {
    pSVar7 = Splines[*(int *)(iVar6 + 0xd0)];
  }
  else {
    pSVar7 = Splines[*(int *)(iVar6 + 0x150)];
  }
  fVar2 = pSVar7->points[0].x;
  *(float *)(param_1 + 0x10) = fVar2;
  fVar3 = pSVar7->points[0].y;
  *(float *)(param_1 + 0x14) = fVar3;
  *(float *)(param_1 + 0x18) = pSVar7->points[0].z;
  *(float *)(param_1 + 0x1c) = pSVar7->points[0].w;
  fVar2 = pSVar7->points[1].x - fVar2;
  fVar3 = pSVar7->points[1].y - fVar3;
  fVar4 = ABS(fVar2);
  fVar5 = ABS(fVar3);
  *(float *)(puVar8 + 6) = fVar2;
  *(float *)((int)puVar8 + 0x34) = fVar3;
  *(float *)(puVar8 + 7) = fVar4 - fVar5;
  uVar14 = (ulonglong)(*(uint *)(puVar8 + 6) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 7) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x34) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)(puVar8 + 6));
  if (*(float *)(puVar8 + 7) - 0.0 < 0.0) {
    fVar2 = fVar5;
  }
  fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
  fVar5 = ABS(*(float *)((int)puVar8 + 0x34));
  if (*(float *)(puVar8 + 7) - 0.0 < 0.0) {
    fVar5 = fVar4;
  }
  fVar4 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  if (0.0 < fVar2) {
    lVar16 = uVar11 - 0x50;
    lVar13 = uVar11 - 0x14;
    lVar15 = uVar11 - 0x24;
    lVar18 = 2;
    fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
    fVar5 = fVar2 * fVar2;
    *(float *)(puVar8 + 9) = fVar2;
    *(float *)(puVar8 + 8) = fVar2;
    *(float *)((int)puVar8 + 0x44) = fVar2;
    *(float *)((int)puVar8 + 0x3c) = fVar2;
    fVar2 = fVar5 * fVar5;
    *(float *)(puVar8 + 8) = *(float *)(puVar8 + 8) * fVar5;
    *(float *)((int)puVar8 + 0x44) = *(float *)((int)puVar8 + 0x44) * fVar2;
    *(float *)(puVar8 + 9) = *(float *)(puVar8 + 9) * fVar2 * fVar5;
    do {
      *(float *)((int)lVar16 + 0x3c) = *(float *)((int)lVar16 + 0x2c) * fVar2 * fVar2;
      iVar9 = (int)lVar15;
      lVar15 = lVar15 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar13 + 4) = *(float *)(iVar9 + 4) * fVar2 * fVar2;
      lVar13 = lVar13 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar16 = uVar11 - 0x24;
    lVar18 = 4;
    pfVar17 = (float *)&DAT_007358e0;
    lVar13 = lVar16;
    lVar15 = lVar12;
    do {
      fVar2 = *pfVar17;
      fVar5 = pfVar17[1];
      pfVar17 = pfVar17 + 2;
      *(float *)((int)lVar15 + 0x3c) = *(float *)((int)lVar15 + 0x3c) * fVar2;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar5;
      lVar13 = lVar13 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar13 = 2;
    do {
      iVar9 = (int)lVar12;
      iVar10 = (int)lVar16;
      lVar12 = lVar12 + 0x10;
      lVar16 = lVar16 + 0x10;
      fVar1 = fVar1 + *(float *)(iVar9 + 0x3c) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
              *(float *)(iVar10 + 0xc);
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    fVar1 = (fVar1 + 0.7853982) * fVar3 + fVar4;
  }
  *(float *)(param_1 + 0x48) = fVar1;
  *(undefined4 *)(iVar6 + 0xe4) = 0;
  *(undefined4 *)(iVar6 + 0xfc) = 0;
  *(undefined4 *)(iVar6 + 0xf8) = 0;
  *(undefined4 *)(iVar6 + 0xf4) = 0;
  *(undefined4 *)(iVar6 + 0xf0) = 0;
  return;
}



//==== 0033d150  ns=mobyupdate_helpers  size=0x180
// sig: undefined M31_0033d150(void)
// callers(1): 0033dad8 mobyupdate_unsorted::UpdateMoby_31
// callees(0): 

void mobyupdate_helpers::M31_0033d150(int param_1)

{
  int iVar1;
  Spline *pSVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  Spline *pSVar7;
  
  iVar1 = *(int *)(param_1 + 0x78);
  iVar6 = 0;
  pSVar2 = Splines[*(int *)(iVar1 + 0xd0)];
  pSVar7 = pSVar2;
  if (0 < pSVar2->cnt + -1) {
    do {
      fVar3 = pSVar7->points[0].y - pSVar7->points[1].y;
      fVar4 = pSVar7->points[0].x - pSVar7->points[1].x;
      fVar5 = pSVar7->points[0].z - pSVar7->points[1].z;
      iVar6 = iVar6 + 1;
      pSVar7->points[0].w = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      pSVar7 = (Spline *)pSVar7->points;
    } while (iVar6 < pSVar2->cnt + -1);
  }
  iVar6 = 0;
  pSVar2 = Splines[*(int *)(iVar1 + 0x150)];
  pSVar7 = pSVar2;
  if (0 < pSVar2->cnt + -1) {
    do {
      fVar3 = pSVar7->points[0].y - pSVar7->points[1].y;
      fVar4 = pSVar7->points[0].x - pSVar7->points[1].x;
      fVar5 = pSVar7->points[0].z - pSVar7->points[1].z;
      iVar6 = iVar6 + 1;
      pSVar7->points[0].w = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      pSVar7 = (Spline *)pSVar7->points;
    } while (iVar6 < pSVar2->cnt + -1);
  }
  iVar6 = 0;
  pSVar2 = Splines[*(int *)(iVar1 + 0xdc)];
  pSVar7 = pSVar2;
  if (0 < pSVar2->cnt + -1) {
    do {
      fVar3 = pSVar7->points[0].y - pSVar7->points[1].y;
      fVar4 = pSVar7->points[0].x - pSVar7->points[1].x;
      fVar5 = pSVar7->points[0].z - pSVar7->points[1].z;
      iVar6 = iVar6 + 1;
      pSVar7->points[0].w = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      pSVar7 = (Spline *)pSVar7->points;
    } while (iVar6 < pSVar2->cnt + -1);
  }
  *(undefined4 *)(iVar1 + 0x10c) = 0;
  return;
}



//==== 0033d2f8  ns=mobyupdate_helpers  size=0x2bc
// sig: undefined M31_0033d2f8(void)
// callers(1): 0033dad8 mobyupdate_unsorted::UpdateMoby_31
// callees(2): 000fc620 mobyutil::MB_randInt; 00126f50 partupd::SpawnPart_23

void mobyupdate_helpers::M31_0033d2f8(int param_1)

{
  float fVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 local_80 [48];
  
  if ((1 < *(byte *)(param_1 + 0x20)) && (*(byte *)(param_1 + 0x20) != 9)) {
    iVar5 = 0;
    iVar7 = 0;
    uVar9 = 0x3fc99999a0000000;
    uVar14 = 0x3ff0000000000000;
    uVar11 = 0x3fe8000000000000;
    uVar12 = 0x4103880000000000;
    auVar17 = loadVectorLeftIndexed(0x14,0x33d2d0);
    auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
    do {
      mobyutil::MB_randInt(0x10);
      mobyutil::MB_randInt(2);
      uVar3 = partupd::SpawnPart_23(uVar9,uVar14,uVar11,uVar12,local_80);
      iVar4 = (int)uVar3;
      if (iVar4 != 0) {
        auVar15 = ZEXT416(0xffffffff);
        auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
        auVar15 = vectorShiftLeftIntegerWord(auVar15,auVar15);
        auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar15 = vectorMultiplyAddFloatingPoint(auVar16,auVar17,auVar15);
        auVar15 = vectorConvertToSignedFixedPointWordSaturate(auVar15,0);
        auVar16 = vectorSplatHalfWord(auVar15,1);
        auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xff;
        uVar2 = storeVectorElementHalfWordIndexed(auVar16,10,uVar3);
        *(undefined2 *)(iVar4 + 10) = uVar2;
        *(undefined4 *)(iVar4 + 0x24) = 2;
        *(undefined1 *)(iVar4 + 0x2a) = 0x7f;
        uVar6 = storeVectorElementByteIndexed
                          (auVar15 | auVar15 << 8 | auVar15 << 0x10 | auVar15 << 0x18 |
                           auVar15 << 0x20 | auVar15 << 0x28 | auVar15 << 0x30 | auVar15 << 0x38 |
                           auVar15 << 0x40 | auVar15 << 0x48 | auVar15 << 0x50 | auVar15 << 0x58 |
                           auVar15 << 0x60 | auVar15 << 0x68 | auVar15 << 0x70 | auVar15 << 0x78,
                           0x2b,uVar3);
        *(undefined1 *)(iVar4 + 0x2b) = uVar6;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
    uVar8 = (ulonglong)(uint)(int)(animationSpeed * 2.5);
    fVar1 = 100000.0;
    uVar9 = 0x3fa99999a0000000;
    dVar13 = 20000.0;
    do {
      dVar10 = (double)fVar1;
      iVar5 = partupd::SpawnPart_23(uVar9,uVar14,uVar14,dVar10,local_80);
      if (iVar5 != 0) {
        *(short *)(iVar5 + 10) = (short)uVar8;
        uVar6 = mobyutil::MB_randInt(0xff);
        *(undefined1 *)(iVar5 + 8) = uVar6;
        *(char *)(iVar5 + 0x2b) = (char)*(undefined2 *)(iVar5 + 10);
        *(undefined4 *)(iVar5 + 0x24) = 2;
        *(undefined1 *)(iVar5 + 0x2a) = 0x7f;
      }
      iVar7 = iVar7 + 1;
      fVar1 = (float)(dVar10 - dVar13);
      uVar8 = uVar8 << 1;
    } while (iVar7 < 3);
  }
  return;
}



//==== 0033d5c8  ns=mobyupdate_helpers  size=0x128
// sig: undefined M31_0033d5c8(void)
// callers(1): 0033dad8 mobyupdate_unsorted::UpdateMoby_31
// callees(3): 00109b40 mobyutil::AccelDelt; 00116a68 mobyutil::MB_BobMotion; 00116b70 mobyutil::MB_SwingMotion

void mobyupdate_helpers::M31_0033d5c8(MobyInstance *param_1)

{
  u8 uVar1;
  void *pvVar2;
  double dVar3;
  
  uVar1 = param_1->state;
  pvVar2 = param_1->pVar;
  if ((uVar1 != '\t' && uVar1 != '\0') && (uVar1 != '\x01')) {
    dVar3 = (double)DAT_00811e78;
    if ((uVar1 == '\x02') || ((uVar1 == '\x03' || (uVar1 == '\a')))) {
      dVar3 = (double)(float)(dVar3 * 1.5);
    }
    else {
      mobyutil::AccelDelt(DAT_00811e74,0.002,0.2,0.0,(float *)((int)pvVar2 + 0x168),0x810000,
                          (float *)((int)pvVar2 + 0x16c));
      mobyutil::MB_BobMotion
                (DAT_00811e70,*(float *)((int)pvVar2 + 0x168),param_1,(float *)((int)pvVar2 + 0xc0),
                 (float *)((int)pvVar2 + 0xc4));
    }
    mobyutil::AccelDelt((float)dVar3,0.003,0.2,0.0,(float *)((int)pvVar2 + 0x160),0x33d5b4,
                        (float *)((int)pvVar2 + 0x164));
    mobyutil::MB_SwingMotion
              ((double)*(float *)((int)pvVar2 + 0x160),(double)DAT_00811e7c,(double)DAT_00811e80,
               param_1,(int)pvVar2 + 200,(int)pvVar2 + 0xcc);
  }
  return;
}



//==== 0033d6f0  ns=mobyupdate_helpers  size=0x138
// sig: undefined M309_0033d6f0(void)
// callers(0): 
// callees(2): 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00109b40 mobyutil::AccelDelt

void mobyupdate_helpers::M309_0033d6f0
               (undefined8 param_1,double param_2,double param_3,double param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,int param_8,float *param_9)

{
  char cVar1;
  int iVar2;
  float *unused;
  
  cVar1 = *(char *)(param_8 + 0x20);
  if (((cVar1 == '\x05' || cVar1 == '\x04') || (cVar1 == '\x06')) || (cVar1 == '\b')) {
    iVar2 = *(int *)(param_8 + 0x78);
    unused = param_9;
    mobyutil::AccelDelt(*param_9,(float)param_2,(float)param_3,(float)param_4,
                        (float *)(param_8 + 0x10),(int)param_9,(float *)(iVar2 + 0xf0));
    mobyutil::AccelDelt(param_9[1],(float)param_2,(float)param_3,(float)param_4,
                        (float *)(param_8 + 0x14),(int)unused,(float *)(iVar2 + 0xf4));
    mobyutil::AccelDelt(param_9[2],(float)param_2,(float)param_3,(float)param_4,
                        (float *)(param_8 + 0x18),(int)unused,(float *)(iVar2 + 0xf8));
    mobyutil::OrganicDeltAngSpeed(param_1,param_5,param_6,param_7,param_8);
  }
  return;
}



//==== 0033d830  ns=mobyupdate_helpers  size=0x9c
// sig: undefined M309_0033d830(void)
// callers(0): 
// callees(1): 00111ba0 mobyutil::MB_getTargetInArea

void mobyupdate_helpers::M309_0033d830(int param_1)

{
  int iVar1;
  Spline *pSVar2;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if ((*(char *)(param_1 + 0x20) != '\t' && *(char *)(param_1 + 0x20) != '\0') &&
     (pSVar2 = Splines[*(int *)(iVar1 + 0xd4)],
     mobyutil::MB_getTargetInArea
               (0x406fe00000000000,param_1,iVar1 + 0x70,pSVar2,0,0,pSVar2->points,pSVar2->cnt),
     *(int *)(iVar1 + 0xb0) == 0)) {
    *(MobyInstance **)(iVar1 + 0xb0) = g_heroMobyPtr;
  }
  return;
}



//==== 0033d8d0  ns=mobyupdate_helpers  size=0x1d0
// sig: undefined M31_0033d8d0(void)
// callers(1): 0033dad8 mobyupdate_unsorted::UpdateMoby_31
// callees(6): 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby

void mobyupdate_helpers::M31_0033d8d0(MobyInstance *param_1)

{
  MOBY_OCLASSES MVar1;
  MobyModeBit MVar2;
  void *pvVar3;
  float fVar4;
  int iVar5;
  ulonglong uVar6;
  double dVar7;
  int local_20;
  float local_1c;
  
  pvVar3 = param_1->pVar;
  uVar6 = ZEXT48(pvVar3);
  if (param_1->state == '\t' || param_1->state == '\0') {
    return;
  }
  param_1->scale = param_1->pClass->gScale;
  dVar7 = 0.0;
  local_1c = 0.0;
  iVar5 = mobyutil::MB_damage(param_1,0x330000,0);
  if (((iVar5 != 0) && (*(int *)(iVar5 + 0x20) != 0)) &&
     ((MVar1 = *(MOBY_OCLASSES *)(*(int *)(iVar5 + 0x20) + 0xa6), MVar1 == param_1->oClass ||
      (MVar1 == (DOOR_LEFT|EXPLOSION_0070))))) {
    iVar5 = 0;
  }
  iVar5 = mobyutil::MB_HandleDamage(param_1,iVar5,uVar6 + 0x20,0,&local_20,&local_1c,0,4);
  if ((local_20 == 1) || (param_1->state == '\t')) goto LAB_0033da6c;
  MVar2 = param_1->modeBits;
  fVar4 = *(float *)((int)pvVar3 + 0x20) - local_1c;
  *(float *)((int)pvVar3 + 0x20) = fVar4;
  if ((double)fVar4 <= dVar7) {
LAB_0033da28:
    param_1->state = '\t';
    param_1->modeBits =
         MVar2 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
    *(undefined1 *)((int)pvVar3 + 0x67) = 0xfa;
    mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
  }
  else if (iVar5 < 3) {
    if ((-1 < iVar5) && (0 < iVar5)) goto LAB_0033da28;
  }
  else if (iVar5 < 0xb) {
    if (iVar5 < 9) {
      mobyutil::MB_SetAnimation(param_1,2,0,5);
      param_1->unk58 = 1.75;
    }
    *(undefined1 *)((int)pvVar3 + 0x67) = 0xfa;
  }
  mobyutil::MB_UpdateLightsTransition(param_1,uVar6 + 0x60);
LAB_0033da6c:
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar6 + 0x60);
  return;
}



//==== 0033dad8  ns=mobyupdate_unsorted  size=0x1abc
// sig: undefined UpdateMoby_31(MobyInstance * moby)
// callers(0): 
// callees(31): 000efb38 mobyfunc::DeleteMoby; 000f0ea8 mobyfunc::AttachManipulator; 000f1114 mobyfunc::GetBonePosition; 000fdcf0 mobyutil::MB_SetAnimationNoBlend; 000fddc0 mobyutil::MB_SetAnimation; 000fecf0 mobyutil::MB_CosineInterpolate; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00106360 mobyutil::MB_SetZBoundsFromGround; 00109b40 mobyutil::AccelDelt; 0010e030 mobyutil::MB_genericExplosion; 00111ba0 mobyutil::MB_getTargetInArea; 00113e88 mobyutil::MB_MayaFrameTrigger; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 001f29e8 FUN_001f29e8; 0033c6e0 mobyupdate_helpers::M31_0033c6e0; 0033cad0 mobyupdate_helpers::M31_0033cad0; 0033ced8 mobyupdate_helpers::M31_0033ced8; 0033d150 mobyupdate_helpers::M31_0033d150; 0033d2f8 mobyupdate_helpers::M31_0033d2f8; 0033d5c8 mobyupdate_helpers::M31_0033d5c8; 0033d8d0 mobyupdate_helpers::M31_0033d8d0; 0046cf30 FUN_0046cf30; 004fffb4 fastfunc::FastDecTimerS16; 005001fc fastfunc::FastMemSet; 00501980 fastfunc::FastQuaternionToEuler; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble; 005cd098 libc::printf
// strings: 0065623c: 'Hovertank with no introPath. UID: %d\n' | 00656264: 'Hovertank with a intro path that has no points. UID: %d\n' | 006562a4: 'Hovertank with no boundPath. UID: %d\n' | 006562cc: 'Hovertank with a bound path that has no points. UID: %d\n' | 0065630c: 'Hovertank with no bombPath. UID: %d\n' | 00656334: 'Hovertank with a bomb path that has no points. UID: %d\n' | 0065636c: 'Hovertank with no exit Path. UID: %d\n' | 00656394: 'Hovertank with a exit path that has no points. UID: %d\n'

/* Moby 31 */

void mobyupdate_unsorted::UpdateMoby_31(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
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
  MobyModeBit MVar14;
  void *pvVar15;
  void *pvVar16;
  Spline *pSVar17;
  undefined2 uVar18;
  undefined4 uVar19;
  ulonglong *puVar20;
  int iVar21;
  float fVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  int iVar27;
  longlong lVar28;
  uint unused;
  longlong lVar29;
  float *pfVar30;
  Vec4 *pVVar31;
  short sVar32;
  longlong lVar33;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar34;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar35;
  undefined8 uVar36;
  ulonglong in_f25;
  double dVar37;
  ulonglong in_f26;
  double dVar38;
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
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  
  lVar26 = (longlong)(int)moby;
  uVar23 = ZEXT48(&stack0x00000000);
  lVar25 = uVar23 - 0x250;
  puVar20 = (ulonglong *)lVar25;
  *puVar20 = uVar23;
  puVar20[0x4c] = in_LR;
  puVar20[0x43] = in_f25;
  puVar20[0x44] = in_f26;
  puVar20[0x45] = in_f27;
  puVar20[0x46] = in_f28;
  puVar20[0x47] = in_f29;
  puVar20[0x48] = in_f30;
  puVar20[0x49] = in_f31;
  puVar20[0x42] = unaff_r31;
  bVar1 = moby->field43_0x70;
  unused = (uint)bVar1;
  puVar20[0x40] = unaff_r29;
  pvVar15 = moby->pVar;
  uVar34 = ZEXT48(pvVar15);
  puVar20[0x41] = unaff_r30;
  puVar20[0x3f] = unaff_r28;
  puVar20[0x3e] = unaff_r27;
  puVar20[0x3d] = unaff_r26;
  puVar20[0x3c] = unaff_r25;
  puVar20[0x3b] = unaff_r24;
  puVar20[0x3a] = unaff_r23;
  if ((bVar1 & 2) != 0) {
    bVar1 = moby->updateId;
    unused = (uint)moby->animationId;
    if (bVar1 == moby->animationId && bVar1 != 0) {
      if (bVar1 == 2) {
        unused = 0;
        mobyutil::MB_SetAnimation(lVar26,0,0,10);
      }
      else {
        unused = 0;
        mobyutil::MB_SetAnimationNoBlend(lVar26,0,0);
      }
    }
  }
  mobyupdate_helpers::M31_0033d8d0(lVar26);
  pvVar16 = moby->pVar;
  if ((moby->state != '\0') && (moby->state != '\t')) {
    lVar28 = ZEXT48(pvVar16) + 0x70;
    pSVar17 = Splines[*(int *)((int)pvVar16 + 0xd4)];
    mobyutil::MB_getTargetInArea
              (0x406fe00000000000,lVar26,lVar28,pSVar17,0,0,pSVar17->points,pSVar17->cnt);
    unused = (uint)lVar28;
    if (*(int *)((int)pvVar16 + 0xb0) == 0) {
      *(MobyInstance **)((int)pvVar16 + 0xb0) = g_heroMobyPtr;
    }
  }
  uVar2 = moby->state;
  dVar43 = (double)*(float *)((int)pvVar15 + 0x17c);
  dVar42 = (double)*(float *)((int)pvVar15 + 0x170);
  dVar41 = (double)*(float *)((int)pvVar15 + 0x174);
  dVar40 = (double)*(float *)((int)pvVar15 + 0x178);
  dVar39 = (double)*(float *)((int)pvVar15 + 0x154);
  dVar38 = (double)*(float *)((int)pvVar15 + 0x158);
  dVar37 = (double)*(float *)((int)pvVar15 + 0x15c);
  if (((uVar2 == '\x05' || uVar2 == '\x04') || (uVar2 == '\x06')) || (uVar2 == '\b')) {
    pvVar16 = moby->pVar;
    mobyutil::AccelDelt(*(float *)((int)pvVar15 + 0x180),*(float *)((int)pvVar15 + 0x170),
                        *(float *)((int)pvVar15 + 0x174),*(float *)((int)pvVar15 + 0x178),
                        &(moby->pos).x,unused,(float *)((int)pvVar16 + 0xf0));
    mobyutil::AccelDelt(*(float *)((int)pvVar15 + 0x184),(float)dVar42,(float)dVar41,(float)dVar40,
                        &(moby->pos).y,unused,(float *)((int)pvVar16 + 0xf4));
    mobyutil::AccelDelt(*(float *)((int)pvVar15 + 0x188),(float)dVar42,(float)dVar41,(float)dVar40,
                        &(moby->pos).z,unused,(float *)((int)pvVar16 + 0xf8));
    mobyutil::OrganicDeltAngSpeed(dVar43,dVar39,dVar38,dVar37,lVar26);
  }
  mobyupdate_helpers::M31_0033d5c8(lVar26);
  mobyupdate_helpers::M31_0033d2f8(lVar26);
  if (((moby->enabled != '\0') &&
      (fVar3 = (moby->pos).y - GameCamera.posY, fVar4 = (moby->pos).x - GameCamera.posX,
      fVar6 = (moby->pos).z - GameCamera.posZ,
      SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar3 * fVar3) < 40.0)) &&
     ((1 < moby->state && (moby->state != 9)))) {
    mobyutil::MB_SetZBoundsFromGround(lVar26);
  }
  bVar1 = moby->state;
  if (bVar1 < 5) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (*(int *)((int)pvVar15 + 0xd0) == -1) {
          libc::printf("Hovertank with no introPath. UID: %d\n",moby->uid);
          mobyfunc::DeleteMoby(moby);
          return;
        }
        pSVar17 = Splines[*(int *)((int)pvVar15 + 0xd0)];
        if (pSVar17->cnt == 0) {
          libc::printf("Hovertank with a intro path that has no points. UID: %d\n",moby->uid);
          mobyfunc::DeleteMoby(moby);
          return;
        }
        if (*(int *)((int)pvVar15 + 0xd4) == -1) {
          libc::printf("Hovertank with no boundPath. UID: %d\n",moby->uid);
          mobyfunc::DeleteMoby(moby);
          return;
        }
        if (Splines[*(int *)((int)pvVar15 + 0xd4)]->cnt == 0) {
          libc::printf("Hovertank with a bound path that has no points. UID: %d\n",moby->uid);
          mobyfunc::DeleteMoby(moby);
          return;
        }
        if (*(int *)((int)pvVar15 + 0xd8) == -1) {
          libc::printf("Hovertank with no bombPath. UID: %d\n",moby->uid);
          mobyfunc::DeleteMoby(moby);
          return;
        }
        if (Splines[*(int *)((int)pvVar15 + 0xd8)]->cnt == 0) {
          libc::printf("Hovertank with a bomb path that has no points. UID: %d\n",moby->uid);
          mobyfunc::DeleteMoby(moby);
          return;
        }
        if (*(int *)((int)pvVar15 + 0x150) == -1) {
          libc::printf("Hovertank with no exit Path. UID: %d\n",moby->uid);
          mobyfunc::DeleteMoby(moby);
          return;
        }
        if (Splines[*(int *)((int)pvVar15 + 0x150)]->cnt == 0) {
          libc::printf("Hovertank with a exit path that has no points. UID: %d\n",moby->uid);
          mobyfunc::DeleteMoby(moby);
          return;
        }
        fVar3 = pSVar17->points[0].x;
        (moby->pos).x = fVar3;
        fVar4 = pSVar17->points[0].y;
        (moby->pos).y = fVar4;
        (moby->pos).z = pSVar17->points[0].z;
        iVar27 = *(int *)((int)pvVar15 + 0xd0);
        (moby->pos).w = pSVar17->points[0].w;
        fVar3 = Splines[iVar27]->points[1].x - fVar3;
        fVar4 = Splines[iVar27]->points[1].y - fVar4;
        fVar6 = ABS(fVar3);
        fVar5 = ABS(fVar4);
        *(float *)((int)puVar20 + 0x114) = fVar3;
        *(float *)(puVar20 + 0x23) = fVar4;
        *(float *)((int)puVar20 + 0x11c) = fVar6 - fVar5;
        fVar4 = 0.0;
        uVar24 = (ulonglong)(*(uint *)((int)puVar20 + 0x114) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar20 + 0x11c) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar20 + 0x23) >> 0x1d) & 4;
        fVar3 = ABS(*(float *)((int)puVar20 + 0x114));
        if (*(float *)((int)puVar20 + 0x11c) - 0.0 < 0.0) {
          fVar3 = fVar5;
        }
        fVar13 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
        fVar5 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
        fVar22 = ABS(*(float *)(puVar20 + 0x23));
        if (*(float *)((int)puVar20 + 0x11c) - 0.0 < 0.0) {
          fVar22 = fVar6;
        }
        if (0.0 < fVar3) {
          lVar28 = uVar23 - 0x240;
          lVar29 = uVar23 - 0xd0;
          lVar33 = uVar23 - 0xc0;
          lVar35 = 2;
          fVar3 = (fVar22 - fVar3) / (fVar22 + fVar3);
          fVar6 = fVar3 * fVar3;
          *(float *)((int)puVar20 + 0x18c) = fVar3;
          *(float *)((int)puVar20 + 0x184) = fVar3;
          *(float *)(puVar20 + 0x31) = fVar3;
          *(float *)(puVar20 + 0x30) = fVar3;
          fVar3 = fVar6 * fVar6;
          *(float *)((int)puVar20 + 0x184) = *(float *)((int)puVar20 + 0x184) * fVar6;
          *(float *)(puVar20 + 0x31) = *(float *)(puVar20 + 0x31) * fVar3;
          *(float *)((int)puVar20 + 0x18c) = *(float *)((int)puVar20 + 0x18c) * fVar3 * fVar6;
          do {
            *(float *)((int)lVar28 + 0x180) = *(float *)((int)lVar28 + 0x170) * fVar3 * fVar3;
            iVar27 = (int)lVar29;
            lVar28 = lVar28 + 8;
            lVar29 = lVar29 + 8;
            *(float *)((int)lVar33 + 4) = *(float *)(iVar27 + 4) * fVar3 * fVar3;
            lVar33 = lVar33 + 8;
            lVar35 = lVar35 + -1;
          } while (lVar35 != 0);
          lVar35 = 4;
          lVar33 = uVar23 - 0xd0;
          pfVar30 = (float *)&DAT_007358e0;
          lVar28 = lVar25;
          lVar29 = lVar33;
          do {
            fVar3 = *pfVar30;
            fVar6 = pfVar30[1];
            pfVar30 = pfVar30 + 2;
            *(float *)((int)lVar28 + 0x180) = *(float *)((int)lVar28 + 0x180) * fVar3;
            lVar28 = lVar28 + 8;
            *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar6;
            lVar29 = lVar29 + 8;
            lVar35 = lVar35 + -1;
          } while (lVar35 != 0);
          lVar28 = 2;
          do {
            iVar27 = (int)lVar25;
            iVar21 = (int)lVar33;
            lVar25 = lVar25 + 0x10;
            lVar33 = lVar33 + 0x10;
            fVar4 = fVar4 + *(float *)(iVar27 + 0x180) + *(float *)(iVar21 + 4) +
                    *(float *)(iVar21 + 8) + *(float *)(iVar21 + 0xc);
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          fVar4 = (fVar4 + 0.7853982) * fVar13 + fVar5;
        }
        (moby->rotation).z = fVar4;
        uVar19 = DAT_00811e78;
        *(undefined4 *)((int)pvVar15 + 0x164) = 0;
        *(undefined4 *)((int)pvVar15 + 0x160) = uVar19;
        *(undefined4 *)((int)pvVar15 + 0x168) = 0;
        *(undefined4 *)((int)pvVar15 + 0x16c) = 0;
        mobyupdate_helpers::M31_0033d150(lVar26);
        MVar14 = moby->modeBits;
        pvVar16 = moby->pVar;
        *(undefined4 *)((int)pvVar15 + 0x108) = 0xffffffff;
        moby->updateDistance = -0x80;
        moby->state = '\x01';
        moby->modeBits = MVar14 | (UNK_40|DISABLED);
        moby->collision = (ushort *)0x0;
        iVar27 = *(int *)((int)pvVar16 + 0x108);
        if (((iVar27 != -1) && (sound::g_SoundChannels[iVar27].pMoby == moby)) &&
           (sound::g_SoundChannels[iVar27].state != '\0')) {
          sound::sound_Kill(iVar27);
        }
        *(undefined4 *)((int)pvVar16 + 0x108) = 0xffffffff;
        fastfunc::FastMemSet(uVar34 + 0x110,0,0x40);
        mobyfunc::AttachManipulator(moby,0,(int)(uVar34 + 0x110));
        moby->shadow = ' ';
      }
      else if (*(int *)((int)pvVar15 + 0xb4) != 2) {
        moby->state = '\x02';
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
        moby->collision = moby->pClass->collision;
        mobyupdate_helpers::M31_0033ced8(lVar26);
      }
    }
    else if (bVar1 < 3) {
      if (*(int *)((int)pvVar15 + 0x10c) == 0) {
        pSVar17 = Splines[*(int *)((int)pvVar15 + 0xd0)];
      }
      else {
        pSVar17 = Splines[*(int *)((int)pvVar15 + 0x150)];
      }
      if (*(int *)((int)pvVar15 + 0xb4) == 2) {
        moby->state = '\x03';
      }
      else {
        iVar27 = mobyupdate_helpers::M31_0033cad0
                           ((double)(DAT_0071f408 * DAT_00811e84),(double)DAT_00811eac,
                            (double)DAT_00811eb0,(double)DAT_010bd020,(double)DAT_00811eb4,
                            (double)DAT_00811eb8,(double)DAT_010bd024,lVar26,pSVar17,uVar34 + 0xe8,
                            uVar34 + 0xec);
        fVar22 = DAT_010bd024;
        fVar13 = DAT_010bd020;
        fVar5 = DAT_00811eb8;
        fVar6 = DAT_00811eb4;
        fVar4 = DAT_00811eb0;
        fVar3 = DAT_00811eac;
        if (iVar27 != 0) {
          pVVar31 = pSVar17->points + pSVar17->cnt + -1;
          *(float *)((int)pvVar15 + 0x180) = pVVar31->x;
          *(float *)((int)pvVar15 + 0x184) = pVVar31->y;
          *(float *)((int)pvVar15 + 0x188) = pVVar31->z;
          pSVar17 = Splines[*(int *)((int)pvVar15 + 0xdc)];
          *(float *)((int)pvVar15 + 0x18c) = pVVar31->w;
          if (*(int *)((int)pvVar15 + 0x10c) == 0) {
            fVar7 = pSVar17->points[0].x;
            fVar8 = pSVar17->points[0].y;
            fVar9 = pSVar17->points[pSVar17->cnt + -1].x;
            fVar10 = pSVar17->points[pSVar17->cnt + -1].y;
          }
          else {
            fVar9 = pSVar17->points[0].x;
            fVar10 = pSVar17->points[0].y;
            fVar7 = pSVar17->points[pSVar17->cnt + -1].x;
            fVar8 = pSVar17->points[pSVar17->cnt + -1].y;
          }
          fVar11 = ABS(fVar9 - fVar7);
          fVar12 = ABS(fVar10 - fVar8);
          *(float *)(puVar20 + 0x21) = fVar9 - fVar7;
          *(float *)((int)puVar20 + 0x10c) = fVar10 - fVar8;
          *(float *)(puVar20 + 0x22) = fVar11 - fVar12;
          fVar7 = 0.0;
          uVar34 = (ulonglong)(*(uint *)(puVar20 + 0x21) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar20 + 0x22) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar20 + 0x10c) >> 0x1d) & 4;
          fVar8 = ABS(*(float *)(puVar20 + 0x21));
          if (*(float *)(puVar20 + 0x22) - 0.0 < 0.0) {
            fVar8 = fVar12;
          }
          fVar10 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar34 << 2));
          fVar9 = *(float *)(((uint)(uVar34 << 2) | 0x735900) + 4);
          fVar12 = ABS(*(float *)((int)puVar20 + 0x10c));
          if (*(float *)(puVar20 + 0x22) - 0.0 < 0.0) {
            fVar12 = fVar11;
          }
          if (0.0 < fVar8) {
            lVar26 = uVar23 - 0x240;
            lVar29 = uVar23 - 0xe0;
            lVar28 = uVar23 - 0xf0;
            lVar33 = 2;
            fVar8 = (fVar12 - fVar8) / (fVar12 + fVar8);
            fVar11 = fVar8 * fVar8;
            *(float *)((int)puVar20 + 0x16c) = fVar8;
            *(float *)((int)puVar20 + 0x164) = fVar8;
            *(float *)(puVar20 + 0x2d) = fVar8;
            *(float *)(puVar20 + 0x2c) = fVar8;
            fVar8 = fVar11 * fVar11;
            *(float *)((int)puVar20 + 0x164) = *(float *)((int)puVar20 + 0x164) * fVar11;
            *(float *)(puVar20 + 0x2d) = *(float *)(puVar20 + 0x2d) * fVar8;
            *(float *)((int)puVar20 + 0x16c) = *(float *)((int)puVar20 + 0x16c) * fVar8 * fVar11;
            do {
              *(float *)((int)lVar26 + 0x160) = *(float *)((int)lVar26 + 0x150) * fVar8 * fVar8;
              iVar27 = (int)lVar28;
              lVar28 = lVar28 + 8;
              lVar26 = lVar26 + 8;
              *(float *)((int)lVar29 + 4) = *(float *)(iVar27 + 4) * fVar8 * fVar8;
              lVar29 = lVar29 + 8;
              lVar33 = lVar33 + -1;
            } while (lVar33 != 0);
            lVar33 = 4;
            lVar29 = uVar23 - 0xf0;
            pfVar30 = (float *)&DAT_007358e0;
            lVar26 = lVar25;
            lVar28 = lVar29;
            do {
              fVar8 = *pfVar30;
              fVar11 = pfVar30[1];
              pfVar30 = pfVar30 + 2;
              *(float *)((int)lVar26 + 0x160) = *(float *)((int)lVar26 + 0x160) * fVar8;
              lVar26 = lVar26 + 8;
              *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar11;
              lVar28 = lVar28 + 8;
              lVar33 = lVar33 + -1;
            } while (lVar33 != 0);
            lVar26 = 2;
            do {
              iVar27 = (int)lVar25;
              lVar25 = lVar25 + 0x10;
              iVar21 = (int)lVar29;
              lVar29 = lVar29 + 0x10;
              fVar7 = fVar7 + *(float *)(iVar27 + 0x160) + *(float *)(iVar21 + 4) +
                      *(float *)(iVar21 + 8) + *(float *)(iVar21 + 0xc);
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            fVar7 = (fVar7 + 0.7853982) * fVar10 + fVar9;
          }
          *(float *)((int)pvVar15 + 0x17c) = fVar7;
          *(float *)((int)pvVar15 + 0x170) = fVar3;
          *(float *)((int)pvVar15 + 0x174) = fVar4;
          *(float *)((int)pvVar15 + 0x178) = fVar13;
          *(float *)((int)pvVar15 + 0x154) = fVar6;
          *(float *)((int)pvVar15 + 0x158) = fVar5;
          *(float *)((int)pvVar15 + 0x15c) = fVar22;
          moby->state = '\x04';
          *(undefined4 *)((int)pvVar15 + 0x104) = 0;
          *(undefined2 *)((int)pvVar15 + 0x102) = 0;
        }
      }
    }
    else if (bVar1 < 4) {
      if (*(int *)((int)pvVar15 + 0x10c) == 0) {
        pSVar17 = Splines[*(int *)((int)pvVar15 + 0xd0)];
      }
      else {
        pSVar17 = Splines[*(int *)((int)pvVar15 + 0x150)];
      }
      if (*(int *)((int)pvVar15 + 0xb4) == 2) {
        iVar27 = mobyupdate_helpers::M31_0033cad0
                           (-(double)(DAT_0071f408 * DAT_00811e8c),(double)DAT_00811ebc,
                            (double)DAT_00811eb0,(double)DAT_010bd020,(double)DAT_00811ec0,
                            (double)DAT_00811eb8,(double)DAT_010bd024,lVar26,pSVar17,uVar34 + 0xe8,
                            uVar34 + 0xec,&DAT_00810000,uVar34 + 0xf0,uVar34 + 0xe4);
        if (iVar27 != 0) {
          pvVar16 = moby->pVar;
          moby->state = '\x01';
          moby->collision = (ushort *)0x0;
          moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
          iVar27 = *(int *)((int)pvVar16 + 0x108);
          if (((iVar27 != -1) && (sound::g_SoundChannels[iVar27].pMoby == moby)) &&
             (sound::g_SoundChannels[iVar27].state != '\0')) {
            sound::sound_Kill(iVar27);
          }
          *(undefined4 *)((int)pvVar16 + 0x108) = 0xffffffff;
        }
      }
      else {
        moby->state = '\x02';
      }
    }
    else {
      puVar20[0x34] = (longlong)DAT_00811e98;
      puVar20[0x34] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar20[0x34] + 0.5));
      dVar37 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)puVar20 + 0x1a4));
      puVar20[0x34] = (longlong)(int)*(short *)((int)pvVar15 + 0x102);
      dVar38 = 0.0;
      mobyutil::MB_CosineInterpolate
                (0,(double)*(float *)((int)pvVar15 + 0x104),
                 (double)(float)((double)(longlong)puVar20[0x34] / dVar37));
      fastfunc::FastQuaternionToEuler(uVar34 + 0x120,2);
      fVar3 = (moby->pos).y - *(float *)(*(int *)((int)pvVar15 + 0xb0) + 0x14);
      fVar4 = (moby->pos).x - *(float *)(*(int *)((int)pvVar15 + 0xb0) + 0x10);
      if (DAT_00811ea8 <= SQRT(fVar4 * fVar4 + fVar3 * fVar3)) {
        if (*(int *)((int)pvVar15 + 0xb4) == 2) {
          pvVar16 = moby->pVar;
          moby->state = '\x03';
          if (*(int *)((int)pvVar16 + 0x10c) == 0) {
            pSVar17 = Splines[*(int *)((int)pvVar16 + 0xd0)];
          }
          else {
            pSVar17 = Splines[*(int *)((int)pvVar16 + 0x150)];
          }
          iVar27 = pSVar17->cnt;
          *(int *)((int)pvVar16 + 0xe8) = iVar27 + -2;
          fVar3 = pSVar17->points[iVar27 + -2].w;
          *(undefined4 *)((int)pvVar16 + 0xe4) = 0;
          *(float *)((int)pvVar16 + 0xec) = fVar3;
          *(undefined4 *)((int)pvVar16 + 0xfc) = 0;
          *(undefined4 *)((int)pvVar16 + 0xf8) = 0;
          *(undefined4 *)((int)pvVar16 + 0xf4) = 0;
          *(undefined4 *)((int)pvVar16 + 0xf0) = 0;
        }
        else {
          iVar27 = fastfunc::FastDecTimerS16(uVar34 + 0x102);
          if ((iVar27 != 0) && (moby->animationId != '\x02')) {
            auVar45 = ZEXT416(0xffffffff);
            auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
            moby->state = '\x05';
            auVar46 = vectorShiftLeftIntegerWord(auVar45,auVar45);
            auVar45 = loadVectorLeftIndexed(0x1e94,0x810000);
            auVar44 = vectorConvertFromSignedFixedPointWord(auVar45,0);
            auVar45 = loadVectorLeftIndexed(0x10,0x33daa0);
            auVar45 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar47 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar45 = vectorAddFloatingPoint
                                (auVar44,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 |
                                         auVar45 << 0x60);
            auVar45 = vectorMultiplyAddFloatingPoint(auVar47,auVar45,auVar46);
            auVar45 = vectorConvertToSignedFixedPointWordSaturate(auVar45,0);
            auVar45 = vectorSplatHalfWord(auVar45,1);
            uVar18 = storeVectorElementHalfWordIndexed(auVar45,0x102,uVar34);
            *(undefined2 *)((int)pvVar15 + 0x102) = uVar18;
            *(undefined2 *)((int)pvVar15 + 0x100) = 0;
            *(undefined4 *)((int)pvVar15 + 0x104) = 0;
          }
        }
      }
      else {
        if (*(int *)((int)pvVar15 + 0x10c) == 0) {
          *(undefined4 *)((int)pvVar15 + 0xe8) = 0;
        }
        else {
          iVar27 = Splines[*(int *)((int)pvVar15 + 0xdc)]->cnt;
          *(int *)((int)pvVar15 + 0xe8) = iVar27 + -2;
          dVar38 = (double)Splines[*(int *)((int)pvVar15 + 0xdc)]->points[iVar27 + -2].w;
        }
        *(float *)((int)pvVar15 + 0xec) = (float)dVar38;
        moby->state = '\a';
        *(undefined4 *)((int)pvVar15 + 0xe4) = 0;
        *(undefined4 *)((int)pvVar15 + 0xfc) = 0;
        *(undefined4 *)((int)pvVar15 + 0xf8) = 0;
        *(undefined4 *)((int)pvVar15 + 0xf4) = 0;
        *(undefined4 *)((int)pvVar15 + 0xf0) = 0;
      }
    }
  }
  else if (bVar1 < 8) {
    if (bVar1 < 6) {
      iVar27 = (int)((longlong)*(short *)((int)pvVar15 + 0x100) << 4);
      fVar3 = *(float *)((int)&Splines[*(int *)((int)pvVar15 + 0xd8)]->points[0].x + iVar27) -
              (moby->pos).x;
      fVar4 = *(float *)((int)&Splines[*(int *)((int)pvVar15 + 0xd8)]->points[0].y + iVar27) -
              (moby->pos).y;
      fVar5 = ABS(fVar3);
      fVar6 = ABS(fVar4);
      *(float *)(puVar20 + 0x1e) = fVar3;
      *(float *)((int)puVar20 + 0xf4) = fVar4;
      *(float *)(puVar20 + 0x1f) = fVar5 - fVar6;
      dVar37 = 0.0;
      uVar24 = (ulonglong)(*(uint *)(puVar20 + 0x1e) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar20 + 0x1f) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar20 + 0xf4) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)(puVar20 + 0x1e));
      if (*(float *)(puVar20 + 0x1f) - 0.0 < 0.0) {
        fVar3 = fVar6;
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
      fVar4 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
      fVar13 = ABS(*(float *)((int)puVar20 + 0xf4));
      if (*(float *)(puVar20 + 0x1f) - 0.0 < 0.0) {
        fVar13 = fVar5;
      }
      if (0.0 < fVar3) {
        lVar28 = uVar23 - 0x240;
        lVar33 = uVar23 - 0x120;
        lVar29 = uVar23 - 0x130;
        lVar35 = 2;
        fVar3 = (fVar13 - fVar3) / (fVar13 + fVar3);
        fVar5 = fVar3 * fVar3;
        *(float *)((int)puVar20 + 300) = fVar3;
        *(float *)((int)puVar20 + 0x124) = fVar3;
        *(float *)(puVar20 + 0x25) = fVar3;
        *(float *)(puVar20 + 0x24) = fVar3;
        fVar3 = fVar5 * fVar5;
        *(float *)((int)puVar20 + 0x124) = *(float *)((int)puVar20 + 0x124) * fVar5;
        *(float *)(puVar20 + 0x25) = *(float *)(puVar20 + 0x25) * fVar3;
        *(float *)((int)puVar20 + 300) = *(float *)((int)puVar20 + 300) * fVar3 * fVar5;
        do {
          *(float *)((int)lVar28 + 0x120) = *(float *)((int)lVar28 + 0x110) * fVar3 * fVar3;
          iVar27 = (int)lVar29;
          lVar29 = lVar29 + 8;
          lVar28 = lVar28 + 8;
          *(float *)((int)lVar33 + 4) = *(float *)(iVar27 + 4) * fVar3 * fVar3;
          lVar33 = lVar33 + 8;
          lVar35 = lVar35 + -1;
        } while (lVar35 != 0);
        lVar35 = 4;
        lVar33 = uVar23 - 0x130;
        pfVar30 = (float *)&DAT_007358e0;
        lVar28 = lVar25;
        lVar29 = lVar33;
        do {
          fVar3 = *pfVar30;
          fVar5 = pfVar30[1];
          pfVar30 = pfVar30 + 2;
          *(float *)((int)lVar28 + 0x120) = *(float *)((int)lVar28 + 0x120) * fVar3;
          lVar28 = lVar28 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar5;
          lVar29 = lVar29 + 8;
          lVar35 = lVar35 + -1;
        } while (lVar35 != 0);
        lVar28 = 2;
        do {
          iVar27 = (int)lVar25;
          lVar25 = lVar25 + 0x10;
          iVar21 = (int)lVar33;
          lVar33 = lVar33 + 0x10;
          dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar27 + 0x120)) +
                            *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) +
                           *(float *)(iVar21 + 0xc));
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        dVar37 = (double)((float)(dVar37 + 0.7853981852531433) * fVar6 + fVar4);
      }
      uVar36 = fastfunc::FastDiffRots(dVar37,(double)(moby->rotation).z);
      puVar20[0x34] = (longlong)DAT_00811e94;
      puVar20[0x34] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar20[0x34] + 0.5));
      dVar37 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)puVar20 + 0x1a4));
      puVar20[0x34] = (longlong)(int)*(short *)((int)pvVar15 + 0x102);
      dVar37 = (double)mobyutil::MB_CosineInterpolate
                                 (uVar36,(double)*(float *)((int)pvVar15 + 0x104),
                                  (double)(float)((double)(longlong)puVar20[0x34] / dVar37));
      fastfunc::FastQuaternionToEuler(uVar34 + 0x120,2);
      if (moby->animationId == '\x02') {
        auVar45 = ZEXT416(0xffffffff);
        auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
        moby->state = '\x04';
        auVar46 = vectorShiftLeftIntegerWord(auVar45,auVar45);
        auVar45 = loadVectorLeftIndexed(0x1e98,0x810000);
        auVar44 = vectorConvertFromSignedFixedPointWord(auVar45,0);
        auVar45 = loadVectorLeftIndexed(0x10,0x33daa0);
        auVar45 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar47 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar45 = vectorAddFloatingPoint
                            (auVar44,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60);
        auVar45 = vectorMultiplyAddFloatingPoint(auVar47,auVar45,auVar46);
        auVar45 = vectorConvertToSignedFixedPointWordSaturate(auVar45,0);
        auVar45 = vectorSplatHalfWord(auVar45,1);
        uVar18 = storeVectorElementHalfWordIndexed(auVar45,0x102,uVar34);
        *(undefined2 *)((int)pvVar15 + 0x102) = uVar18;
      }
      else {
        iVar27 = fastfunc::FastDecTimerS16(uVar34 + 0x102);
        if (iVar27 != 0) {
          *(float *)((int)pvVar15 + 0x104) = (float)dVar37;
          moby->state = '\x06';
          mobyutil::MB_SetAnimationNoBlend(lVar26,1,0);
        }
      }
    }
    else if (bVar1 < 7) {
      iVar27 = mobyutil::MB_MayaFrameTrigger(3.0,moby);
      if (iVar27 != 0) {
        auVar45 = ZEXT416(0xffffffff);
        auVar46 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
        auVar45 = loadVectorLeftIndexed(0x1e9c,0x810000);
        auVar44 = vectorConvertFromSignedFixedPointWord(auVar45,0);
        auVar46 = vectorShiftLeftIntegerWord(auVar46,auVar46);
        auVar45 = loadVectorLeftIndexed(0x10,0x33daa0);
        auVar45 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar58 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
        auVar47 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        dVar37 = 0.5;
        auVar45 = vectorAddFloatingPoint(auVar44,auVar58);
        auVar45 = vectorMultiplyAddFloatingPoint(auVar47,auVar45,auVar46);
        auVar45 = vectorConvertToSignedFixedPointWordSaturate(auVar45,0);
        auVar57 = vectorConvertFromSignedFixedPointWord(auVar45,0);
        fastfunc::FastQuaternionToEuler((double)*(float *)((int)pvVar15 + 0x104),uVar34 + 0x120,2);
        lVar28 = uVar23 - 400;
        mobyfunc::GetBonePosition(lVar26,1,lVar28);
        iVar27 = *(int *)((int)pvVar15 + 0xd8);
        sVar32 = *(short *)((int)pvVar15 + 0x100);
        pSVar17 = Splines[iVar27];
        auVar45 = loadVectorLeftIndexed(0xc0,lVar25);
        uVar24 = ZEXT48(pSVar17->points + sVar32 + -1);
        auVar44 = loadVectorLeftIndexed(0x10,uVar24);
        auVar46 = vectorSubtractFloatingPoint(auVar44,auVar45);
        auVar47 = loadVectorLeftIndexed(0xc4,lVar25);
        auVar45 = ZEXT416(0xffffffff);
        auVar44 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
        auVar45 = ZEXT416(0xffffffff);
        auVar53 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
        auVar45 = ZEXT416(0xffffffff);
        auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
        auVar48 = loadVectorLeftIndexed(200,lVar25);
        auVar49 = vectorShiftLeftIntegerWord(auVar44,auVar44);
        auVar44 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar51 = vectorShiftLeftIntegerWord(auVar45,auVar45);
        auVar45 = ZEXT416(0xffffffff);
        auVar52 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
        uVar19 = storeVectorElementWordIndexed
                           (auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,0xd0,
                            lVar25);
        *(undefined4 *)(puVar20 + 0x1a) = uVar19;
        auVar45 = loadVectorLeftIndexed(0x14,uVar24);
        auVar47 = vectorSubtractFloatingPoint(auVar45,auVar47);
        auVar44 = vectorReciprocalEstimateFloatingPoint(auVar57);
        auVar45 = ZEXT416(0xffffffff);
        auVar54 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
        auVar45 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar19 = storeVectorElementWordIndexed
                           (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,0xd4,
                            lVar25);
        *(undefined4 *)((int)puVar20 + 0xd4) = uVar19;
        auVar45 = loadVectorLeftIndexed(0x18,uVar24);
        auVar45 = vectorSubtractFloatingPoint(auVar45,auVar48);
        auVar45 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar19 = storeVectorElementWordIndexed
                           (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,0xd8,
                            lVar25);
        *(undefined4 *)(puVar20 + 0x1b) = uVar19;
        *(float *)((int)puVar20 + 0xdc) = (pSVar17->points + sVar32 + -1)[1].w;
        auVar45 = loadVectorLeftIndexed(0x18,0x33daa0);
        auVar45 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar50 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
        auVar45 = vectorNegativeMultiplySubtractFloatingPoint(auVar44,auVar57,auVar50);
        pSVar17 = Splines[iVar27];
        auVar44 = vectorMultiplyAddFloatingPoint(auVar44,auVar45,auVar49);
        auVar53 = vectorShiftLeftIntegerWord(auVar53,auVar53);
        auVar49 = vectorShiftLeftIntegerWord(auVar52,auVar52);
        auVar45 = ZEXT416(0xffffffff);
        auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
        auVar52 = vectorShiftLeftIntegerWord(auVar45,auVar45);
        auVar45 = vectorNegativeMultiplySubtractFloatingPoint(auVar44,auVar57,auVar50);
        auVar44 = vectorMultiplyAddFloatingPoint(auVar44,auVar45,auVar51);
        auVar45 = ZEXT416(0xffffffff);
        auVar51 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
        auVar45 = vectorShiftLeftIntegerWord(auVar54,auVar54);
        auVar55 = loadVectorLeftIndexed(0xfffffffffffff418,0x720000);
        auVar56 = loadVectorLeftIndexed(0x1ea0,0x810000);
        auVar54 = vectorShiftLeftIntegerWord(auVar51,auVar51);
        auVar51 = vectorMultiplyAddFloatingPoint(auVar57,auVar57,auVar45);
        auVar45 = vectorNegativeMultiplySubtractFloatingPoint(auVar44,auVar57,auVar50);
        auVar49 = vectorMultiplyAddFloatingPoint(auVar44,auVar45,auVar49);
        auVar50 = vectorMultiplyAddFloatingPoint(auVar55,auVar56,auVar54);
        auVar45 = ZEXT416(0xffffffff);
        auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
        auVar45 = vectorShiftLeftIntegerWord(auVar45,auVar45);
        auVar44 = vectorMultiplyAddFloatingPoint(auVar46,auVar49,auVar53);
        auVar46 = vectorMultiplyAddFloatingPoint(auVar47,auVar49,auVar52);
        auVar47 = vectorMultiplyAddFloatingPoint(auVar51,auVar50,auVar45);
        auVar45 = ZEXT416(0xffffffff);
        auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
        auVar50 = vectorShiftLeftIntegerWord(auVar45,auVar45);
        auVar45 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar44 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar19 = storeVectorElementWordIndexed
                           (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,0xd0,
                            lVar25);
        *(undefined4 *)(puVar20 + 0x1a) = uVar19;
        uVar19 = storeVectorElementWordIndexed
                           (auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,0xd4,
                            lVar25);
        *(undefined4 *)((int)puVar20 + 0xd4) = uVar19;
        *(undefined4 *)(puVar20 + 0x1b) = 0;
        auVar45 = loadVectorLeftIndexed(0x18,ZEXT48(pSVar17) + (longlong)sVar32 * 0x10 & 0xffffffff)
        ;
        auVar44 = loadVectorLeftIndexed(0x1c,0x33daa0);
        auVar46 = vectorSubtractFloatingPoint(auVar48,auVar45);
        auVar45 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar44 = loadVectorLeftIndexed(0x20,0x33daa0);
        auVar44 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
        fVar3 = DAT_0071f418 * DAT_00811ea0;
        uVar24 = (ulonglong)DAT_00811ea4;
        auVar45 = vectorMultiplyAddFloatingPoint
                            (auVar47,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,
                             auVar46);
        auVar45 = vectorMultiplyAddFloatingPoint
                            (auVar49,auVar45 ^ (auVar44 | auVar44 << 0x20 | auVar44 << 0x40 |
                                               auVar44 << 0x60),auVar50);
        auVar45 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar19 = storeVectorElementWordIndexed
                           (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,0x48,
                            uVar34);
        *(undefined4 *)((int)pvVar15 + 0x48U & 0xfffffffc) = uVar19;
        puVar20[0x34] = uVar24;
        puVar20[0x34] =
             (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar20[0x34] + dVar37));
        FUN_001f29e8((double)fVar3,lVar26,lVar28,uVar23 - 0x180,0xd0,
                     *(undefined4 *)((int)puVar20 + 0x1a4));
        mobyupdate_helpers::M31_0033c6e0((double)*(float *)((int)pvVar15 + 0x104),lVar26,lVar28);
        sVar32 = *(short *)((int)pvVar15 + 0x100) + 1;
        *(short *)((int)pvVar15 + 0x100) = sVar32;
        if ((int)sVar32 < Splines[*(int *)((int)pvVar15 + 0xd8)]->cnt) {
          auVar45 = ZEXT416(0xffffffff);
          auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
          auVar44 = vectorShiftLeftIntegerWord(auVar45,auVar45);
          auVar45 = loadVectorLeftIndexed(0x1e94,0x810000);
          auVar45 = vectorConvertFromSignedFixedPointWord(auVar45,0);
          auVar46 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar45 = vectorAddFloatingPoint(auVar45,auVar58);
          auVar45 = vectorMultiplyAddFloatingPoint(auVar46,auVar45,auVar44);
          auVar45 = vectorConvertToSignedFixedPointWordSaturate(auVar45,0);
          auVar45 = vectorSplatHalfWord(auVar45,1);
          uVar18 = storeVectorElementHalfWordIndexed(auVar45,0x102,uVar34);
          *(undefined2 *)((int)pvVar15 + 0x102) = uVar18;
          moby->state = '\x05';
        }
        else {
          auVar45 = ZEXT416(0xffffffff);
          auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
          moby->state = '\x04';
          auVar44 = vectorShiftLeftIntegerWord(auVar45,auVar45);
          auVar45 = loadVectorLeftIndexed(0x1e98,0x810000);
          auVar45 = vectorConvertFromSignedFixedPointWord(auVar45,0);
          auVar46 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar45 = vectorAddFloatingPoint(auVar45,auVar58);
          auVar45 = vectorMultiplyAddFloatingPoint(auVar46,auVar45,auVar44);
          auVar45 = vectorConvertToSignedFixedPointWordSaturate(auVar45,0);
          auVar45 = vectorSplatHalfWord(auVar45,1);
          uVar18 = storeVectorElementHalfWordIndexed(auVar45,0x102,uVar34);
          *(undefined2 *)((int)pvVar15 + 0x102) = uVar18;
        }
      }
    }
    else {
      dVar37 = (double)(DAT_0071f408 * DAT_00811e88);
      if (*(int *)((int)pvVar15 + 0x10c) == 1) {
        dVar37 = -dVar37;
      }
      iVar27 = mobyupdate_helpers::M31_0033cad0
                         (dVar37,(double)DAT_00811ebc,(double)DAT_00811eb0,(double)DAT_010bd020,
                          (double)DAT_00811ec0,(double)DAT_00811eb8,(double)DAT_010bd024,lVar26,
                          Splines[*(int *)((int)pvVar15 + 0xdc)],uVar34 + 0xe8,uVar34 + 0xec,
                          &DAT_00810000,uVar34 + 0xf0,uVar34 + 0xe4);
      if (iVar27 != 0) {
        moby->state = '\x04';
        fVar6 = DAT_00811ebc;
        iVar27 = *(int *)((int)pvVar15 + 0x10c);
        *(uint *)((int)pvVar15 + 0x10c) = (uint)LZCOUNT(iVar27) >> 5;
        fVar22 = DAT_010bd024;
        fVar13 = DAT_010bd020;
        fVar5 = DAT_00811ec0;
        fVar4 = DAT_00811eb8;
        fVar3 = DAT_00811eb0;
        pSVar17 = Splines[*(int *)((int)pvVar15 + 0xdc)];
        if (iVar27 == 0) {
          fVar11 = pSVar17->points[0].x;
          fVar12 = pSVar17->points[0].y;
          pVVar31 = pSVar17->points + pSVar17->cnt + -1;
          fVar7 = pVVar31->x;
          fVar8 = pVVar31->y;
          fVar9 = pVVar31->z;
          fVar10 = pVVar31->w;
        }
        else {
          fVar7 = pSVar17->points[0].x;
          fVar8 = pSVar17->points[0].y;
          fVar9 = pSVar17->points[0].z;
          fVar10 = pSVar17->points[0].w;
          fVar11 = pSVar17->points[pSVar17->cnt + -1].x;
          fVar12 = pSVar17->points[pSVar17->cnt + -1].y;
        }
        *(float *)((int)pvVar15 + 0x170) = fVar6;
        *(float *)((int)pvVar15 + 0x174) = fVar3;
        *(float *)((int)pvVar15 + 0x178) = fVar13;
        *(float *)((int)pvVar15 + 0x154) = fVar5;
        *(float *)((int)pvVar15 + 0x158) = fVar4;
        *(float *)((int)pvVar15 + 0x15c) = fVar22;
        fVar4 = ABS(fVar11 - fVar7);
        fVar5 = ABS(fVar12 - fVar8);
        *(float *)((int)puVar20 + 0xfc) = fVar11 - fVar7;
        *(float *)(puVar20 + 0x20) = fVar12 - fVar8;
        *(float *)((int)puVar20 + 0x104) = fVar4 - fVar5;
        fVar3 = 0.0;
        uVar34 = (ulonglong)(*(uint *)((int)puVar20 + 0xfc) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar20 + 0x104) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar20 + 0x20) >> 0x1d) & 4;
        fVar6 = ABS(*(float *)((int)puVar20 + 0xfc));
        if (*(float *)((int)puVar20 + 0x104) - 0.0 < 0.0) {
          fVar6 = fVar5;
        }
        fVar13 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar34 << 2));
        fVar5 = *(float *)(((uint)(uVar34 << 2) | 0x735900) + 4);
        fVar22 = ABS(*(float *)(puVar20 + 0x20));
        if (*(float *)((int)puVar20 + 0x104) - 0.0 < 0.0) {
          fVar22 = fVar4;
        }
        if (0.0 < fVar6) {
          lVar26 = uVar23 - 0x240;
          lVar29 = uVar23 - 0x100;
          lVar28 = uVar23 - 0x110;
          lVar33 = 2;
          fVar4 = (fVar22 - fVar6) / (fVar22 + fVar6);
          fVar6 = fVar4 * fVar4;
          *(float *)((int)puVar20 + 0x14c) = fVar4;
          *(float *)((int)puVar20 + 0x144) = fVar4;
          *(float *)(puVar20 + 0x29) = fVar4;
          *(float *)(puVar20 + 0x28) = fVar4;
          fVar4 = fVar6 * fVar6;
          *(float *)((int)puVar20 + 0x144) = *(float *)((int)puVar20 + 0x144) * fVar6;
          *(float *)(puVar20 + 0x29) = *(float *)(puVar20 + 0x29) * fVar4;
          *(float *)((int)puVar20 + 0x14c) = *(float *)((int)puVar20 + 0x14c) * fVar4 * fVar6;
          do {
            *(float *)((int)lVar26 + 0x140) = *(float *)((int)lVar26 + 0x130) * fVar4 * fVar4;
            iVar27 = (int)lVar28;
            lVar28 = lVar28 + 8;
            lVar26 = lVar26 + 8;
            *(float *)((int)lVar29 + 4) = *(float *)(iVar27 + 4) * fVar4 * fVar4;
            lVar29 = lVar29 + 8;
            lVar33 = lVar33 + -1;
          } while (lVar33 != 0);
          lVar33 = 4;
          lVar29 = uVar23 - 0x110;
          pfVar30 = (float *)&DAT_007358e0;
          lVar26 = lVar25;
          lVar28 = lVar29;
          do {
            fVar4 = *pfVar30;
            fVar6 = pfVar30[1];
            pfVar30 = pfVar30 + 2;
            *(float *)((int)lVar26 + 0x140) = *(float *)((int)lVar26 + 0x140) * fVar4;
            lVar26 = lVar26 + 8;
            *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar6;
            lVar28 = lVar28 + 8;
            lVar33 = lVar33 + -1;
          } while (lVar33 != 0);
          lVar26 = 2;
          do {
            iVar27 = (int)lVar25;
            lVar25 = lVar25 + 0x10;
            iVar21 = (int)lVar29;
            lVar29 = lVar29 + 0x10;
            fVar3 = fVar3 + *(float *)(iVar27 + 0x140) + *(float *)(iVar21 + 4) +
                    *(float *)(iVar21 + 8) + *(float *)(iVar21 + 0xc);
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          fVar3 = (fVar3 + 0.7853982) * fVar13 + fVar5;
        }
        *(float *)((int)pvVar15 + 0x17c) = fVar3;
        *(float *)((int)pvVar15 + 0x180) = fVar7;
        *(float *)((int)pvVar15 + 0x184) = fVar8;
        *(float *)((int)pvVar15 + 0x188) = fVar9;
        *(float *)((int)pvVar15 + 0x18c) = fVar10;
      }
    }
  }
  else if (bVar1 == 9) {
    mobyfunc::GetBonePosition(lVar26,2,uVar23 - 0x170);
    *(undefined4 *)(puVar20 + 8) = *(undefined4 *)(puVar20 + 0x1c);
    *(undefined4 *)(puVar20 + 9) = *(undefined4 *)(puVar20 + 0x1d);
    fVar3 = (moby->rotation).z;
    *(undefined4 *)((int)puVar20 + 0x44) = *(undefined4 *)((int)puVar20 + 0xe4);
    *(undefined4 *)((int)puVar20 + 0x4c) = *(undefined4 *)((int)puVar20 + 0xec);
    FUN_0046cf30((double)fVar3,lVar26);
    mobyfunc::GetBonePosition(lVar26,3,uVar23 - 0x170);
    fastfunc::FastWrapRot((moby->rotation).z,3.1415927);
    *(undefined4 *)(puVar20 + 8) = *(undefined4 *)(puVar20 + 0x1c);
    *(undefined4 *)(puVar20 + 9) = *(undefined4 *)(puVar20 + 0x1d);
    *(undefined4 *)((int)puVar20 + 0x44) = *(undefined4 *)((int)puVar20 + 0xe4);
    *(undefined4 *)((int)puVar20 + 0x4c) = *(undefined4 *)((int)puVar20 + 0xec);
    FUN_0046cf30(lVar26);
    puVar20[0x12] = 1;
    puVar20[0x14] = 1;
    puVar20[0x15] = 1;
    puVar20[0x16] = 0xffffffffffffffff;
    puVar20[0x17] = 0;
    mobyutil::MB_genericExplosion
              (0,0,0x4010000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
               0x402e000000000000,lVar26,uVar34 + 0x40,lVar26 + 0x10,1,0xffffffffffffffff,5,2,6);
    iVar27 = *(int *)((int)pvVar15 + 0x108);
    if (((iVar27 != -1) && (sound::g_SoundChannels[iVar27].pMoby == moby)) &&
       (sound::g_SoundChannels[iVar27].state != '\0')) {
      sound::sound_Kill(iVar27);
    }
    *(undefined4 *)((int)pvVar15 + 0x108) = 0xffffffff;
    mobyfunc::DeleteMoby(moby);
    return;
  }
  if (((1 < moby->state) && (moby->state != 9)) &&
     (iVar27 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar15 + 0x108)), iVar27 == 0)) {
    iVar27 = sound::PlayMobySound(0,4,moby);
    *(int *)((int)pvVar15 + 0x108) = iVar27;
  }
  return;
}



//==== 0033f594  ns=mobyupdate_helpers  size=0x14
// sig: undefined M313_0033f594(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M313_0033f594(void)

{
  DAT_00811f6c = 0x10000;
  return;
}



//==== 0033f5c0  ns=Global  size=0x1c8
// sig: undefined FUN_0033f5c0(void)
// callers(1): 00341da8 mobyupdate_unsorted::UpdateMoby_322
// callees(5): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange

MobyInstance *
FUN_0033f5c0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
            ,undefined8 param_6)

{
  undefined4 *puVar1;
  MobyInstance *pMVar3;
  undefined8 uVar2;
  int iVar4;
  double dVar5;
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  undefined4 uStack00000050;
  undefined4 uStack00000054;
  undefined4 uStack00000058;
  undefined4 uStack0000005c;
  
  pMVar3 = mobyfunc::CreateMoby(0x139);
  if (pMVar3 != (MobyInstance *)0x0) {
    puVar1 = (undefined4 *)pMVar3->pVar;
    puVar1[6] = param_1;
    pMVar3->updateDistance = '\x7f';
    pMVar3->drawDistance = 0x7f;
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    pMVar3->enabled = '\x01';
    pMVar3->color = (int)((ulonglong)uVar2 >> 0x20);
    pMVar3->light = (int)uVar2;
    dVar5 = (double)mobyutil::MB_randRot();
    (pMVar3->rotation).x = (float)dVar5;
    dVar5 = (double)mobyutil::MB_randRot();
    (pMVar3->rotation).y = (float)dVar5;
    dVar5 = (double)mobyutil::MB_randRot();
    (pMVar3->rotation).z = (float)dVar5;
    fStack00000044 = (f32)param_3;
    (pMVar3->pos).y = fStack00000044;
    fStack0000004c = (f32)param_4;
    uStack00000054 = (undefined4)param_5;
    (pMVar3->pos).w = fStack0000004c;
    uStack0000005c = (undefined4)param_6;
    fStack00000040 = (f32)((ulonglong)param_3 >> 0x20);
    fStack00000048 = (f32)((ulonglong)param_4 >> 0x20);
    (pMVar3->pos).x = fStack00000040;
    (pMVar3->pos).z = fStack00000048;
    uStack00000050 = (undefined4)((ulonglong)param_5 >> 0x20);
    uStack00000058 = (undefined4)((ulonglong)param_6 >> 0x20);
    *puVar1 = uStack00000050;
    puVar1[1] = uStack00000054;
    puVar1[2] = uStack00000058;
    puVar1[3] = uStack0000005c;
    dVar5 = (double)mobyutil::MB_randRangeFloat
                              (mobyutil::g_FrameTime * -12.566371,mobyutil::g_FrameTime * 12.566371)
    ;
    puVar1[4] = (float)dVar5;
    dVar5 = (double)mobyutil::MB_randRangeFloat
                              (mobyutil::g_FrameTime * -6.2831855,mobyutil::g_FrameTime * 6.2831855)
    ;
    puVar1[5] = (float)dVar5;
    iVar4 = mobyutil::MB_randRange(0x1e,0x2d);
    puVar1[7] = (int)(animationSpeed * ((float)(longlong)iVar4 + 0.5));
    mobyfunc::UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}



//==== 0033f7c8  ns=mobyupdate_unsorted  size=0x4f8
// sig: undefined UpdateMoby_313(MobyInstance * moby)
// callers(0): 
// callees(8): 00057820 collproc::CollLine; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 00128248 partupd::SpawnPart_27; 004fff60 fastfunc::FastDecTimerS32; 00500608 fastfunc::FastVecNormalize; 00502578 fastfunc::FastWrapRot

/* Moby 313 */

void mobyupdate_unsorted::UpdateMoby_313(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  longlong lVar5;
  int iVar7;
  undefined8 uVar6;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  undefined1 local_a0 [16];
  undefined1 local_90 [32];
  
  lVar5 = (longlong)(int)moby;
  pfVar4 = (float *)moby->pVar;
  fVar1 = (moby->pos).x + *pfVar4;
  (moby->pos).x = fVar1;
  fVar2 = (moby->pos).y + pfVar4[1];
  (moby->pos).y = fVar2;
  fVar3 = (moby->pos).z + pfVar4[2];
  (moby->pos).z = fVar3;
  dVar14 = 0.0;
  if (((fVar2 < 0.0 || fVar1 < 0.0) || (fVar3 < 0.0)) ||
     (64.0 < SQRT((fVar1 - GameCamera.posX) * (fVar1 - GameCamera.posX) +
                  (fVar2 - GameCamera.posY) * (fVar2 - GameCamera.posY)))) {
    mobyfunc::DeleteMoby(moby);
  }
  else {
    dVar8 = (double)fastfunc::FastWrapRot((moby->rotation).z,pfVar4[4]);
    (moby->rotation).z = (float)dVar8;
    dVar8 = (double)fastfunc::FastWrapRot((moby->rotation).y,pfVar4[5]);
    (moby->rotation).y = (float)dVar8;
    pfVar4[2] = -(DAT_0071f418 * 9.8 - pfVar4[2]);
    iVar7 = fastfunc::FastDecTimerS32(pfVar4 + 7);
    if (iVar7 == 0) {
      iVar7 = collproc::CollLine(local_a0,lVar5 + 0x10,2,lVar5,0);
      if (iVar7 != 0) {
        fastfunc::FastVecNormalize(pfVar4,pfVar4,0xa10980);
        dVar8 = (double)mobyutil::MB_randRangeFloat(0.45,0.75);
        fVar1 = (float)((double)pfVar4[1] * dVar8);
        fVar2 = (float)((double)*pfVar4 * dVar8);
        fVar3 = (float)((double)pfVar4[2] * dVar8);
        *pfVar4 = fVar2;
        pfVar4[1] = fVar1;
        pfVar4[2] = fVar3;
        if (SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < DAT_0071f418 * 10.0) {
          pfVar4[3] = 0.0;
          pfVar4[2] = 0.0;
          pfVar4[1] = 0.0;
          *pfVar4 = 0.0;
        }
        dVar9 = (double)SQRT(CollOutput.normal.z * CollOutput.normal.z +
                             CollOutput.normal.x * CollOutput.normal.x +
                             CollOutput.normal.y * CollOutput.normal.y);
        fVar1 = (float)(0.05000000074505806 / dVar9);
        dVar8 = dVar14;
        if (dVar14 - dVar9 < 0.0) {
          dVar8 = (double)(CollOutput.normal.x * fVar1);
        }
        dVar10 = dVar14;
        if (dVar14 - dVar9 < 0.0) {
          dVar10 = (double)(CollOutput.normal.y * fVar1);
        }
        dVar11 = dVar14;
        if (dVar14 - dVar9 < 0.0) {
          dVar11 = (double)(CollOutput.normal.z * fVar1);
        }
        if (dVar9 - dVar14 < 0.0) {
          dVar8 = (double)(CollOutput.normal.x * fVar1);
        }
        if (dVar9 - dVar14 < 0.0) {
          dVar10 = (double)(CollOutput.normal.y * fVar1);
        }
        if (dVar9 - dVar14 < 0.0) {
          dVar11 = (double)(CollOutput.normal.z * fVar1);
        }
        CollOutput.normal.x = (float)dVar8;
        CollOutput.normal.y = (float)dVar10;
        CollOutput.normal.z = (float)dVar11;
        (moby->pos).x = (float)((double)CollOutput.ip.x + dVar8);
        (moby->pos).y = (float)((double)CollOutput.ip.y + dVar10);
        (moby->pos).z = (float)((double)CollOutput.ip.z + dVar11);
        (moby->pos).w = CollOutput.ip.w;
      }
    }
    else {
      iVar7 = 0;
      dVar14 = -1.0;
      dVar8 = 1.0;
      dVar9 = 3.0;
      dVar10 = 6.0;
      dVar11 = 10.5;
      dVar12 = 15.5;
      uVar13 = 0x40dd4c0000000000;
      do {
        mobyutil::MB_randRangeFloat((float)dVar14,(float)dVar8);
        mobyutil::MB_randRangeFloat((float)dVar14,(float)dVar8);
        mobyutil::MB_randRangeFloat((float)dVar14,(float)dVar8);
        mobyutil::MB_randRangeFloat
                  ((float)((double)mobyutil::g_FrameTime * dVar9),
                   (float)((double)mobyutil::g_FrameTime * dVar10));
        uVar6 = mobyutil::MB_randRange
                          ((int)((double)animationSpeed * dVar11),
                           (int)((double)animationSpeed * dVar12));
        partupd::SpawnPart_27(uVar13,lVar5 + 0x10,local_90,0x7f2f4f6f,uVar6);
        iVar7 = iVar7 + 1;
      } while (iVar7 < 2);
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 0033fcc0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M316_0033fcc0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M316_0033fcc0(void)

{
  DAT_00811fdc = 0x10000;
  return;
}



//==== 0033fd00  ns=mobyupdate_unsorted  size=0x468
// sig: undefined UpdateMoby_316(MobyInstance * moby)
// callers(0): 
// callees(6): 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 0010675c mobyutil::MB_damage; 0010e030 mobyutil::MB_genericExplosion; 0030b568 FUN_0030b568; 00502758 fastfunc::FastDoubleToInt

/* Moby 316 */

void mobyupdate_unsorted::UpdateMoby_316(MobyInstance *moby)

{
  float fVar1;
  Spline *pSVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  double dVar22;
  undefined1 local_b0 [16];
  undefined1 local_a0 [32];
  
  iVar6 = 0;
  piVar8 = (int *)moby->pVar;
  iVar5 = mobyutil::MB_damage(moby,0x30000,0);
  if (iVar5 == 0) {
    if (piVar8[0xc] == -1) {
      if (piVar8[0xd] == -1) {
        if (piVar8[0xe] == -1) {
          if ((piVar8[0xf] != -1) && (0x7f < MobyInstance[piVar8[0xf]].state)) {
            iVar6 = 2;
          }
        }
        else if (0x7f < MobyInstance[piVar8[0xe]].state) {
          iVar6 = 2;
        }
      }
      else if (0x7f < MobyInstance[piVar8[0xd]].state) {
        iVar6 = 2;
      }
    }
    else if (0x7f < MobyInstance[piVar8[0xc]].state) {
      iVar6 = 2;
    }
  }
  else {
    iVar6 = fastfunc::FastDoubleToInt((double)*(float *)(iVar5 + 0x2c));
  }
  uVar14 = 0x4000000000000000;
  if (2.0 <= (double)(longlong)iVar6) {
    moby->state = '\x01';
    dVar15 = -8.0;
    dVar16 = 8.0;
    uVar7 = 0;
    dVar17 = 10.0;
    uVar18 = 0x4010000000000000;
    uVar19 = 0x4022000000000000;
    uVar20 = 0x3ff0000000000000;
    uVar21 = 0x402e000000000000;
    dVar22 = 0.0;
    do {
      mobyutil::MB_randRangeFloat
                ((float)((double)mobyutil::g_FrameTime * dVar15),
                 (float)((double)mobyutil::g_FrameTime * dVar16));
      mobyutil::MB_randRangeFloat
                ((float)((double)mobyutil::g_FrameTime * dVar15),
                 (float)((double)mobyutil::g_FrameTime * dVar16));
      iVar5 = FUN_0030b568(local_a0,local_b0,8,0);
      *(undefined4 *)(iVar5 + 0x94) = 0;
      if ((uVar7 & 1) != 0) {
        mobyutil::MB_genericExplosion
                  (uVar14,uVar18,uVar18,uVar14,uVar19,uVar20,uVar21,iVar5,local_b0,0,1,
                   0xffffffffffffffff,10,3,0x10);
      }
      if (-1 < *piVar8) {
        iVar6 = *(int *)(iVar5 + 0x78);
        *(int *)(iVar6 + 0xb4) = *piVar8;
        *(Spline **)(iVar6 + 0xb0) = Splines[*piVar8];
        *(int *)(iVar6 + 0xe4) = piVar8[6];
        pSVar2 = Splines[*piVar8];
        fVar3 = pSVar2->points[0].x - *(float *)(iVar5 + 0x10);
        *(float *)(iVar6 + 0x40) = fVar3;
        fVar4 = pSVar2->points[0].y - *(float *)(iVar5 + 0x14);
        *(float *)(iVar6 + 0x44) = fVar4;
        *(float *)(iVar6 + 0x48) = pSVar2->points[0].z - *(float *)(iVar5 + 0x18);
        dVar12 = (double)SQRT(fVar3 * fVar3 + fVar4 * fVar4);
        *(float *)(iVar6 + 0x4c) = pSVar2->points[0].w;
        dVar13 = (double)mobyutil::g_FrameTime;
        *(float *)(iVar6 + 0x48) = (float)(dVar13 * dVar17);
        fVar1 = (float)((double)(float)(dVar13 * dVar17) / dVar12);
        dVar9 = (double)(fVar3 * fVar1);
        dVar10 = (double)(fVar4 * fVar1);
        dVar13 = dVar22;
        if (dVar22 - dVar12 < 0.0) {
          dVar13 = dVar9;
        }
        dVar11 = dVar22;
        if (dVar22 - dVar12 < 0.0) {
          dVar11 = dVar10;
        }
        if (dVar12 - dVar22 < 0.0) {
          dVar13 = dVar9;
        }
        if (dVar12 - dVar22 < 0.0) {
          dVar11 = dVar10;
        }
        *(float *)(iVar6 + 0x40) = (float)dVar13;
        *(float *)(iVar6 + 0x44) = (float)dVar11;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 1;
    } while ((int)uVar7 < 6);
    mobyfunc::DeleteMoby(moby);
  }
  moby->damage = -1;
  return;
}



