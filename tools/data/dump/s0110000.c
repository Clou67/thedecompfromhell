//==== 00110040  ns=mobyutil  size=0x444
// sig: undefined MB_SpawnExplosionSparks2(void)
// callers(13): 001a02d8 mobyupdate_unsorted::UpdateMoby_1048; 001a5f50 mobyupdate_unsorted::UpdateMoby_1051; 001f3688 mobyupdate_unsorted::UpdateMoby_1196; 001f7980 mobyupdate_unsorted::UpdateMoby_1199; 001fcd60 mobyupdate_unsorted::UpdateMoby_1202; 00214a98 mobyupdate_unsorted::UpdateMoby_1231; 00225048 mobyupdate_helpers::M1246_00225048; 00225b48 mobyupdate_unsorted::UpdateMoby_1246; 0028d1f8 mobyupdate_unsorted::UpdateMoby_a_lot_8; 00331560 mobyupdate_helpers::M294_00331560; 00332c38 mobyupdate_unsorted::UpdateMoby_294; 003ce680 mobyupdate_unsorted::UpdateMoby_580; 00446088 mobyupdate_unsorted::UpdateMoby_749
// callees(4): 00123390 partupd::SpawnPart_11; 001d4d88 FUN_001d4d88; 003fda38 FUN_003fda38; 005c8318 rand

void mobyutil::MB_SpawnExplosionSparks2
               (double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
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
  undefined1 local_100 [16];
  uint local_f0 [12];
  longlong local_c0;
  
  iVar12 = 0;
  dVar14 = 0.0;
  dVar15 = 8.0;
  dVar17 = 15.5;
  dVar18 = 20.5;
  dVar16 = (double)(float)(param_1 * 500000.0);
  dVar19 = 25.5;
  dVar20 = 30.5;
  dVar21 = 6.103515625e-05;
  do {
    iVar8 = rand();
    local_c0 = (longlong)(int)(iVar8 >> 0xf & 0x7fff);
    local_f0[0] = 0x4f008fff;
    local_f0[1] = 0x4f008fff;
    local_f0[2] = 0x4f007fff;
    local_f0[3] = 0x4f006fff;
    local_f0[4] = 0x2fffffff;
    local_f0[5] = 0x2fffffff;
    local_f0[6] = 0x2f005f7f;
    local_f0[7] = 0x2f004f7f;
    local_f0[8] = 0x2f003f7f;
    local_f0[9] = 0x2f00004f;
    local_f0[10] = 0x2f000000;
    local_f0[0xb] = 0x3f000000;
    dVar13 = (double)((float)((double)local_c0 * dVar21 + dVar15) * g_FrameTime);
    iVar8 = rand();
    uVar5 = (ulonglong)(uint)(iVar8 >> 0xf) & 0x7fff;
    uVar3 = local_f0[(int)(uVar5 + (((uVar5 + 1) * 0x5555 << 0x20) >> 0x31) * -6)];
    iVar8 = rand();
    uVar5 = (ulonglong)(uint)(iVar8 >> 0xf) & 0x7fff;
    iVar1 = (int)((double)animationSpeed * dVar17);
    iVar10 = (int)((double)animationSpeed * dVar18);
    local_c0 = (longlong)iVar10;
    uVar4 = local_f0[(int)(uVar5 + (((uVar5 + 1) * 0x5555 << 0x20) >> 0x31) * -6) + 6];
    iVar8 = rand();
    iVar10 = iVar10 - iVar1;
    uVar6 = iVar8 >> 0xf & 0x7fff;
    iVar8 = (int)uVar6 / (iVar10 + 1);
    iVar2 = (int)((double)animationSpeed * dVar19);
    iVar11 = (int)((double)animationSpeed * dVar20);
    local_c0 = (longlong)iVar11;
    iVar9 = rand();
    iVar11 = iVar11 - iVar2;
    uVar7 = iVar9 >> 0xf & 0x7fff;
    iVar9 = (int)uVar7 / (iVar11 + 1);
    partupd::SpawnPart_11
              (dVar16,(double)(float)(dVar13 * param_1),param_4,local_100,
               (uVar3 & 0xff) << 8 | uVar3 >> 8 & 0xff | uVar3 & 0xff000000 | uVar3 & 0xff0000,
               (uVar4 & 0xff) << 8 | uVar4 >> 8 & 0xff | uVar4 & 0xff000000 | uVar4 & 0xff0000,0,
               (uVar6 - (iVar8 * iVar10 + iVar8)) + iVar1,(uVar7 - (iVar9 * iVar11 + iVar9)) + iVar2
              );
    iVar12 = iVar12 + 1;
  } while (iVar12 < 3);
  if ((int)param_3 != 0) {
    local_c0 = (longlong)(int)((double)animationSpeed * dVar18);
    FUN_001d4d88((double)(float)(param_1 * 4.0),param_3,param_4,local_100,0x30,
                 (int)((double)animationSpeed * dVar18),0x40,0x7f,0);
    local_c0 = (longlong)(int)(animationSpeed * 29.5);
    FUN_001d4d88((double)(float)(param_1 * 3.0),param_3,param_4,local_100);
  }
  if (param_2 != dVar14) {
    dVar15 = 13.0;
    if (dVar14 - param_2 < 0.0) {
      dVar15 = param_2;
    }
    DAT_00729354 = (float)dVar15;
    DAT_00729358 = (float)dVar15;
    DAT_00729350 = (float)dVar15;
    FUN_003fda38(&DAT_00729330,param_4,0,0);
  }
  return;
}



//==== 00110488  ns=mobyutil  size=0x84
// sig: undefined ClampVec3Magnitude(undefined8 param_1, Vec4 * param_2)
// callers(44): 00020a80 mobyupdate_unsorted::UpdateMoby_458; 0009c0d0 hero::Hero_ThrustToMotionFwd; 000a5310 hero::Hero_JumpLandTransitions; 000aaec0 hero::HandleHeroMovement; 000b72b0 hero::TransitionMovement; 000be228 hero::HeroMovement; 00112678 mobyutil::MB_PlatformGetDelta; 0018b2f8 mobyupdate_unsorted::UpdateMoby_1023; 00190d60 mobyupdate_unsorted::UpdateMoby_1032; 001b5860 mobyupdate_unsorted::UpdateMoby_1075; 001ecb08 mobyupdate_unsorted::UpdateMoby_1170; 001f3688 mobyupdate_unsorted::UpdateMoby_1196; 001f7980 mobyupdate_unsorted::UpdateMoby_1199; 00211748 mobyupdate_unsorted::UpdateMoby_1229; 00222c50 mobyupdate_helpers::M1243_00222c50; 00222fe0 mobyupdate_unsorted::UpdateMoby_1243; 00233180 mobyupdate_unsorted::UpdateMoby_1266; 00241320 mobyupdate_unsorted::UpdateMoby_{13_14_15_16}; 002476e8 mobyupdate_unsorted::UpdateMoby_1319; 00268ba0 mobyupdate_helpers::M1392_00268ba0; 002744f8 mobyupdate_helpers::M1422_002744f8; 002c3118 mobyupdate_unsorted::UpdateMoby_1843; 00304418 mobyupdate_unsorted::UpdateMoby_234; 00318b50 mobyupdate_helpers::M253_00318b50; 00346610 mobyupdate_unsorted::UpdateMoby_333
// callees(0): 

void mobyutil::ClampVec3Magnitude(double param_1,Vec4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  
  fVar2 = param_2->y;
  fVar3 = param_2->x;
  fVar4 = param_2->z;
  dVar8 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  if (param_1 < dVar8) {
    fVar1 = (float)(param_1 / dVar8);
    fVar6 = 0.0;
    fVar5 = fVar6;
    if (0.0 - dVar8 < 0.0) {
      fVar5 = fVar3 * fVar1;
    }
    fVar7 = fVar6;
    if (0.0 - dVar8 < 0.0) {
      fVar7 = fVar2 * fVar1;
    }
    if (0.0 - dVar8 < 0.0) {
      fVar6 = fVar4 * fVar1;
    }
    if (dVar8 - 0.0 < 0.0) {
      fVar5 = fVar3 * fVar1;
    }
    if (dVar8 - 0.0 < 0.0) {
      fVar7 = fVar2 * fVar1;
    }
    if (dVar8 - 0.0 < 0.0) {
      fVar6 = fVar4 * fVar1;
    }
    param_2->x = fVar5;
    param_2->y = fVar7;
    param_2->z = fVar6;
  }
  return;
}



//==== 0011050c  ns=mobyutil  size=0x1b0
// sig: undefined ???_MB_PickMinAbsField2c_Of4(void)
// callers(2): 0031b438 mobyupdate_helpers::M253_0031b438; 003e8a88 mobyupdate_helpers::M625_003e8a88
// callees(0): 

int mobyutil::____MB_PickMinAbsField2c_Of4(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    if (param_2 == 0) {
      if (param_3 == 0) {
        param_3 = 0;
        if (param_4 != 0) {
          param_3 = param_4;
        }
      }
      else if (param_4 != 0) {
        uVar1 = (int)*(uint *)(param_3 + 0x2c) >> 0x1f;
        uVar2 = (int)*(uint *)(param_4 + 0x2c) >> 0x1f;
        if ((int)((uVar1 >> 1 ^ *(uint *)(param_3 + 0x2c)) - uVar1) <=
            (int)((uVar2 >> 1 ^ *(uint *)(param_4 + 0x2c)) - uVar2)) {
          param_3 = param_4;
        }
      }
    }
    else {
      if (param_3 != 0) {
        uVar1 = (int)*(uint *)(param_2 + 0x2c) >> 0x1f;
        uVar2 = (int)*(uint *)(param_3 + 0x2c) >> 0x1f;
        if ((int)((uVar1 >> 1 ^ *(uint *)(param_2 + 0x2c)) - uVar1) <=
            (int)((uVar2 >> 1 ^ *(uint *)(param_3 + 0x2c)) - uVar2)) {
          param_2 = param_3;
        }
      }
      param_3 = param_2;
      if (param_4 != 0) {
        uVar1 = (int)*(uint *)(param_2 + 0x2c) >> 0x1f;
        uVar2 = (int)*(uint *)(param_4 + 0x2c) >> 0x1f;
        if ((int)((uVar1 >> 1 ^ *(uint *)(param_2 + 0x2c)) - uVar1) <=
            (int)((uVar2 >> 1 ^ *(uint *)(param_4 + 0x2c)) - uVar2)) {
          param_3 = param_4;
        }
      }
    }
  }
  else {
    if (param_2 != 0) {
      uVar1 = (int)*(uint *)(param_1 + 0x2c) >> 0x1f;
      uVar2 = (int)*(uint *)(param_2 + 0x2c) >> 0x1f;
      if ((int)((uVar1 >> 1 ^ *(uint *)(param_1 + 0x2c)) - uVar1) <=
          (int)((uVar2 >> 1 ^ *(uint *)(param_2 + 0x2c)) - uVar2)) {
        param_1 = param_2;
      }
    }
    if (param_3 != 0) {
      uVar1 = (int)*(uint *)(param_1 + 0x2c) >> 0x1f;
      uVar2 = (int)*(uint *)(param_3 + 0x2c) >> 0x1f;
      if ((int)((uVar1 >> 1 ^ *(uint *)(param_1 + 0x2c)) - uVar1) <=
          (int)((uVar2 >> 1 ^ *(uint *)(param_3 + 0x2c)) - uVar2)) {
        param_1 = param_3;
      }
    }
    param_3 = param_1;
    if (param_4 != 0) {
      uVar1 = (int)*(uint *)(param_1 + 0x2c) >> 0x1f;
      uVar2 = (int)*(uint *)(param_4 + 0x2c) >> 0x1f;
      if ((int)((uVar1 >> 1 ^ *(uint *)(param_1 + 0x2c)) - uVar1) <=
          (int)((uVar2 >> 1 ^ *(uint *)(param_4 + 0x2c)) - uVar2)) {
        param_3 = param_4;
      }
    }
  }
  return param_3;
}



//==== 001106c0  ns=mobyutil  size=0x64
// sig: undefined MB_computeLobVelocityClamped(void)
// callers(0): 
// callees(0): 

double mobyutil::MB_computeLobVelocityClamped
                 (double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                 float *param_6,float *param_7)

{
  double dVar1;
  
  dVar1 = (double)(float)((double)SQRT((*param_6 - *param_7) * (*param_6 - *param_7) +
                                       (param_6[1] - param_7[1]) * (param_6[1] - param_7[1])) /
                         param_1);
  dVar1 = (double)(float)((double)((float)((double)(float)(param_4 * dVar1) * dVar1) * 0.5 +
                                  (param_7[2] - param_6[2])) / dVar1);
  if (param_3 - dVar1 < 0.0) {
    dVar1 = param_3;
  }
  if (dVar1 - param_2 < 0.0) {
    dVar1 = param_2;
  }
  return dVar1;
}



//==== 00110724  ns=mobyutil  size=0x74
// sig: void MB_AddMobyToDynamicGroup(MobyInstance * pMoby, short * group, short maxSize)
// callers(4): 000ed3e0 mobyattack::Spawn_Moby256_Rocket; 00292d88 FUN_00292d88; 002d2780 mobyupdate_unsorted::UpdateMoby_190; 002e7140 FUN_002e7140
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void mobyutil::MB_AddMobyToDynamicGroup(MobyInstance *pMoby,short *group,short maxSize)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  
  iVar5 = 1;
  sVar1 = *group;
  uVar3 = (int)pMoby - (int)MobyInstance;
  sVar4 = (short)(uVar3 >> 8) + (ushort)((int)uVar3 < 0 && (uVar3 & 0xff) != 0);
  psVar2 = group;
  if (0 < sVar1) {
    do {
      if (psVar2[1] == sVar4) {
        return;
      }
      iVar5 = iVar5 + 1;
      psVar2 = psVar2 + 1;
    } while (iVar5 <= sVar1);
  }
  if (sVar1 < maxSize) {
    *group = sVar1 + 1;
    *(short *)((int)group + (int)((longlong)(short)(sVar1 + 1) << 1)) = sVar4;
  }
  return;
}



//==== 00110798  ns=mobyutil  size=0x70
// sig: void MB_DeleteMobyFromDynamicGroup(MobyInstance * pMoby, short * group)
// callers(9): 000ed970 mobyattack::UpdateMoby_256_GC_Rocket; 00293c48 mobyupdate_unsorted::UpdateMoby_153; 002a2438 mobyupdate_unsorted::UpdateMoby_160; 002e6f18 mobyupdate_helpers::M1900_002e6f18; 002e7140 FUN_002e7140; 002e8af8 mobyupdate_unsorted::UpdateMoby_{203_1900}; 003b7c48 mobyupdate_unsorted::UpdateMoby_562; 003ead68 mobyupdate_unsorted::UpdateMoby_627; 0043dc00 mobyupdate_unsorted::UpdateMoby_74
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void mobyutil::MB_DeleteMobyFromDynamicGroup(MobyInstance *pMoby,short *group)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  
  sVar1 = *group;
  iVar3 = 1;
  psVar2 = group;
  if (0 < sVar1) {
    do {
      if ((MobyInstance *)((int)&(MobyInstance->bSphere).x + (int)((longlong)psVar2[1] << 8)) ==
          pMoby) {
        group[iVar3] = *(short *)((int)group + (int)((longlong)sVar1 << 1));
        *group = *group + -1;
        return;
      }
      iVar3 = iVar3 + 1;
      psVar2 = psVar2 + 1;
    } while (iVar3 <= sVar1);
  }
  return;
}



//==== 00110808  ns=mobyutil  size=0x88
// sig: undefined MB_FindMobyByVarId(void)
// callers(4): 00293248 mobyupdate_helpers::M153_00293248; 0029ead8 mobyupdate_unsorted::UpdateMoby_157; 0034ec58 mobyupdate_unsorted::UpdateMoby_342; 00387588 mobyupdate_unsorted::UpdateMoby_452
// callees(0): 

MobyInstance * mobyutil::MB_FindMobyByVarId(int param_1)

{
  short *psVar1;
  int iVar2;
  
  iVar2 = 1;
  if (0 < g_mobyIdListCount) {
    psVar1 = &g_mobyIdListCount;
    do {
      psVar1 = psVar1 + 1;
      if (*(int *)(*(int *)((int)&MobyInstance->pVar + (int)((longlong)*psVar1 << 8)) + 0x18) ==
          param_1) {
        return MobyInstance + (&g_mobyIdListCount)[iVar2];
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= g_mobyIdListCount);
  }
  return (MobyInstance *)0x0;
}



//==== 00110898  ns=mobyutil  size=0xb4
// sig: undefined MB_FindNearestMobyInList(void)
// callers(0): 
// callees(0): 

MobyInstance * mobyutil::MB_FindNearestMobyInList(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short *psVar5;
  int iVar6;
  MobyInstance *pMVar7;
  MobyInstance *pMVar8;
  
  pMVar7 = (MobyInstance *)0x0;
  iVar6 = 1;
  fVar1 = 1024.0;
  if (0 < DAT_00a51ee8) {
    psVar5 = &DAT_00a51eea;
    do {
      pMVar8 = MobyInstance + *psVar5;
      fVar3 = *(float *)(param_1 + 0x14) - (pMVar8->pos).y;
      fVar2 = *(float *)(param_1 + 0x10) - (pMVar8->pos).x;
      fVar4 = *(float *)(param_1 + 0x18) - (pMVar8->pos).z;
      fVar2 = SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3);
      if (fVar2 < fVar1) {
        fVar1 = fVar2;
        pMVar7 = pMVar8;
      }
      iVar6 = iVar6 + 1;
      psVar5 = psVar5 + 1;
    } while (iVar6 <= DAT_00a51ee8);
  }
  return pMVar7;
}



//==== 00110950  ns=mobyutil  size=0x108
// sig: void MB_RandomizeVector(float range, float * v)
// callers(27): 00130a78 partupd::UpdatePart_58; 001cf4f0 mobyupdate_unsorted::UpdateMoby_111; 001fade0 mobyupdate_helpers::M1202_001fade0; 00206cd8 mobyupdate_unsorted::UpdateMoby_1214; 00209508 mobyupdate_unsorted::UpdateMoby_1215; 0021b8c0 mobyupdate_unsorted::UpdateMoby_1241; 0021d8f8 mobyupd::update1242::M1242_0021d8f8; 0024b718 mobyupdate_helpers::M133_0024b718; 0025f3c8 mobyupd::update1379::M1379_0025f3c8; 002a0a10 mobyupdate_unsorted::UpdateMoby_158; 002af360 mobyupdate_unsorted::UpdateMoby_172; 002b3778 mobyupdate_helpers::M1766_002b3778; 002bb840 mobyupdate_unsorted::UpdateMoby_1805; 002beb68 mobyupdate_unsorted::UpdateMoby_1818; 002ce590 mobyupdate_unsorted::UpdateMoby_1885; 002e8af8 mobyupdate_unsorted::UpdateMoby_{203_1900}; 00306148 mobyupdate_helpers::M238_00306148; 00325a50 mobyupdate_unsorted::UpdateMoby_{276_1298_1299}; 0035bcf0 mobyupdate_helpers::M388_0035bcf0; 0035d190 mobyupdate_helpers::M388_0035d190; 00378778 mobyupdate_unsorted::UpdateMoby_437; 0038a628 mobyupdate_unsorted::UpdateMoby_455; 003bd6c0 mobyupdate_helpers::M866_003bd6c0; 003d2c48 mobyupdate_unsorted::UpdateMoby_585; 003da868 mobyupdate_unsorted::UpdateMoby_611
// callees(1): 005c8318 rand

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void mobyutil::MB_RandomizeVector(float range,float *v)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = (double)range;
  dVar3 = -dVar2;
  iVar1 = rand();
  dVar4 = (double)(float)(dVar2 - dVar3);
  dVar2 = 3.0517578125e-05;
  *v = *v + (float)((double)(float)((double)(longlong)(int)(iVar1 >> 0xf & 0x7fff) * dVar4) *
                    3.0517578125e-05 + dVar3);
  iVar1 = rand();
  v[1] = v[1] + (float)((double)(float)((double)(longlong)(int)(iVar1 >> 0xf & 0x7fff) * dVar4) *
                        dVar2 + dVar3);
  iVar1 = rand();
  v[2] = v[2] + (float)((double)(float)((double)(longlong)(int)(iVar1 >> 0xf & 0x7fff) * dVar4) *
                        dVar2 + dVar3);
  return;
}



//==== 00110a60  ns=mobyutil  size=0x108
// sig: void MB_RandomizeVector(float range, float * v)
// callers(0): 
// callees(1): 005c8318 rand

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void mobyutil::MB_RandomizeVector(float range,float *v)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = (double)range;
  dVar3 = -dVar2;
  iVar1 = rand();
  dVar4 = (double)(float)(dVar2 - dVar3);
  dVar2 = 3.0517578125e-05;
  *v = *v + (float)((double)(float)((double)(longlong)(int)(iVar1 >> 0xf & 0x7fff) * dVar4) *
                    3.0517578125e-05 + dVar3);
  iVar1 = rand();
  v[1] = v[1] + (float)((double)(float)((double)(longlong)(int)(iVar1 >> 0xf & 0x7fff) * dVar4) *
                        dVar2 + dVar3);
  iVar1 = rand();
  v[2] = v[2] + (float)((double)(float)((double)(longlong)(int)(iVar1 >> 0xf & 0x7fff) * dVar4) *
                        dVar2 + dVar3);
  return;
}



//==== 00110b70  ns=mobyutil  size=0xe8
// sig: int MB_IsPntInCuboid(Vec4 * point, undefined8 cuboidLink)
// callers(174): 00019cb8 mobyupdate_unsorted::UpdateMoby_1274; 0001cb80 mobyupdate_unsorted::UpdateMoby_326; 000351d0 camera::camera1::ActivateCamera_1; 00035304 camera::camera1::ExitCamera_1; 00035398 camera::camera10::Cam10_IsHeroInVolume; 00037520 camera::camera10::ActivateCamera_10; 000376e0 camera::camera10::ExitCamera_10; 00038658 camera::camera12::Cam12_IsHeroInVolume; 0003911c camera::camera12::ActivateCamera_12; 000391e4 camera::camera12::ExitCamera_12; 0003b8c4 camera::camera14::ExitCamera_14; 0003c53c camera::camera15::ActivateCamera_15; 0003c700 camera::camera15::ExitCamera_15; 0003c95c camera::camera16::Cam16_IsHeroInVolume; 0003ca68 camera::camera16::Cam16_ModifyFollowCam; 0003d330 camera::camera17::Cam17_IsHeroInVolume; 0003e288 camera::camera18::Cam18_IsTriggered; 0003fc8c camera::camera19::Cam19_IsHeroInVolume; 000410bc camera::camera20::Cam20_IsHeroInVolume; 00043e48 camera::camera22::Cam22_IsHeroInVolume; 00044a38 camera::camera23::Cam23_IsTriggered; 0005082c camera::Camera_ActivationCheckPriority; 000a1ff0 hero::Hero_FindSwingshotTarget; 000a2298 hero::Hero_FindPullTarget; 00111ba0 mobyutil::MB_getTargetInArea
// callees(0): 

int mobyutil::MB_IsPntInCuboid(Vec4 *point,longlong cuboidLink)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  
  if ((int)cuboidLink != -1) {
    iVar6 = (int)(cuboidLink << 7);
    fVar1 = point->y - *(float *)((int)&(Cuboids->pos).y + iVar6);
    fVar2 = point->x - *(float *)((int)&(Cuboids->pos).x + iVar6);
    fVar3 = point->z - *(float *)((int)&(Cuboids->pos).z + iVar6);
    fVar5 = *(float *)((int)&(Cuboids->imatrix).v2.x + iVar6) * fVar3 +
            *(float *)((int)&(Cuboids->imatrix).v0.x + iVar6) * fVar2 +
            *(float *)((int)&(Cuboids->imatrix).v1.x + iVar6) * fVar1;
    fVar4 = *(float *)((int)&(Cuboids->imatrix).v2.z + iVar6) * fVar3 +
            *(float *)((int)&(Cuboids->imatrix).v0.z + iVar6) * fVar2 +
            *(float *)((int)&(Cuboids->imatrix).v1.z + iVar6) * fVar1;
    fVar1 = *(float *)((int)&(Cuboids->imatrix).v2.y + iVar6) * fVar3 +
            *(float *)((int)&(Cuboids->imatrix).v0.y + iVar6) * fVar2 +
            *(float *)((int)&(Cuboids->imatrix).v1.y + iVar6) * fVar1;
    if (-1.0 <= fVar5) {
      if ((((fVar5 <= 1.0) && (-1.0 <= fVar1)) && (fVar1 <= 1.0)) &&
         ((-1.0 <= fVar4 && (fVar4 <= 1.0)))) {
        return 1;
      }
    }
  }
  return 0;
}



//==== 00110c60  ns=mobyutil  size=0xe0
// sig: int MB_IsPntInCylinder(Vec4 * point, undefined8 cylinderLink)
// callers(12): 0003c53c camera::camera15::ActivateCamera_15; 0003c700 camera::camera15::ExitCamera_15; 0003c95c camera::camera16::Cam16_IsHeroInVolume; 0003ca68 camera::camera16::Cam16_ModifyFollowCam; 0003d330 camera::camera17::Cam17_IsHeroInVolume; 0003e288 camera::camera18::Cam18_IsTriggered; 0003fc8c camera::camera19::Cam19_IsHeroInVolume; 000410bc camera::camera20::Cam20_IsHeroInVolume; 00043e48 camera::camera22::Cam22_IsHeroInVolume; 00044a38 camera::camera23::Cam23_IsTriggered; 003d7240 mobyupdate_unsorted::UpdateMoby_602; 00402130 mobyupdate_unsorted::UpdateMoby_651
// callees(0): 

int mobyutil::MB_IsPntInCylinder(Vec4 *point,longlong cylinderLink)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  
  if ((int)cylinderLink < 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (int)(cylinderLink << 7);
    fVar1 = point->y - *(float *)((int)&(Cylinders->pos).y + iVar6);
    fVar2 = point->x - *(float *)((int)&(Cylinders->pos).x + iVar6);
    fVar3 = point->z - *(float *)((int)&(Cylinders->pos).z + iVar6);
    fVar5 = *(float *)((int)&(Cylinders->imatrix).v2.y + iVar6) * fVar3 +
            *(float *)((int)&(Cylinders->imatrix).v0.y + iVar6) * fVar2 +
            *(float *)((int)&(Cylinders->imatrix).v1.y + iVar6) * fVar1;
    fVar4 = *(float *)((int)&(Cylinders->imatrix).v2.x + iVar6) * fVar3 +
            *(float *)((int)&(Cylinders->imatrix).v0.x + iVar6) * fVar2 +
            *(float *)((int)&(Cylinders->imatrix).v1.x + iVar6) * fVar1;
    fVar1 = *(float *)((int)&(Cylinders->imatrix).v2.z + iVar6) * fVar3 +
            *(float *)((int)&(Cylinders->imatrix).v0.z + iVar6) * fVar2 +
            *(float *)((int)&(Cylinders->imatrix).v1.z + iVar6) * fVar1;
    if (((1.0 <= SQRT(fVar4 * fVar4 + fVar5 * fVar5)) || (fVar1 < -1.0)) || (1.0 < fVar1)) {
      iVar6 = 0;
    }
    else {
      iVar6 = 1;
    }
  }
  return iVar6;
}



//==== 00110d48  ns=mobyutil  size=0xc8
// sig: undefined MB_IsPntInSphere(Vec4 * point, undefined8 sphereLink)
// callers(10): 0003c53c camera::camera15::ActivateCamera_15; 0003c700 camera::camera15::ExitCamera_15; 0003c95c camera::camera16::Cam16_IsHeroInVolume; 0003ca68 camera::camera16::Cam16_ModifyFollowCam; 0003d330 camera::camera17::Cam17_IsHeroInVolume; 0003e288 camera::camera18::Cam18_IsTriggered; 0003fc8c camera::camera19::Cam19_IsHeroInVolume; 000410bc camera::camera20::Cam20_IsHeroInVolume; 00043e48 camera::camera22::Cam22_IsHeroInVolume; 00044a38 camera::camera23::Cam23_IsTriggered
// callees(0): 

undefined8 mobyutil::MB_IsPntInSphere(Vec4 *point,longlong sphereLink)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined8 uVar7;
  
  if ((int)sphereLink < 0) {
    uVar7 = 0;
  }
  else {
    iVar6 = (int)(sphereLink << 7);
    fVar1 = point->y - *(float *)((int)&(Spheres->pos).y + iVar6);
    fVar2 = point->x - *(float *)((int)&(Spheres->pos).x + iVar6);
    fVar3 = point->z - *(float *)((int)&(Spheres->pos).z + iVar6);
    fVar5 = *(float *)((int)&(Spheres->imatrix).v2.y + iVar6) * fVar3 +
            *(float *)((int)&(Spheres->imatrix).v0.y + iVar6) * fVar2 +
            *(float *)((int)&(Spheres->imatrix).v1.y + iVar6) * fVar1;
    fVar4 = *(float *)((int)&(Spheres->imatrix).v2.x + iVar6) * fVar3 +
            *(float *)((int)&(Spheres->imatrix).v0.x + iVar6) * fVar2 +
            *(float *)((int)&(Spheres->imatrix).v1.x + iVar6) * fVar1;
    fVar1 = *(float *)((int)&(Spheres->imatrix).v2.z + iVar6) * fVar3 +
            *(float *)((int)&(Spheres->imatrix).v0.z + iVar6) * fVar2 +
            *(float *)((int)&(Spheres->imatrix).v1.z + iVar6) * fVar1;
    if (1.0 <= SQRT(fVar1 * fVar1 + fVar4 * fVar4 + fVar5 * fVar5)) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
  }
  return uVar7;
}



//==== 00110e18  ns=mobyutil  size=0x50c
// sig: undefined MB_MtxFromDir(void)
// callers(3): 003f3e00 mobyupdate_unsorted::UpdateMoby_{633_773_988_989}; 003f5b10 mobyupdate_helpers::M1382_003f5b10; 003f65a0 mobyupdate_helpers::M1382_003f65a0
// callees(6): 00500af8 fastfunc::FastMtx4Identity; 00500ca4 fastfunc::FastEulerToMtx1; 00500e08 fastfunc::FastEulerToMtx2; 00500fa8 fastfunc::FastApplyTransform; 005010c0 fastfunc::FastNormalizeRMtx4; 0050162c fastfunc::FastVecMtx4Mul

void mobyutil::MB_MtxFromDir(double param_1,Vec4 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong *puVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float *pfVar10;
  longlong lVar11;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  longlong lVar12;
  ulonglong unaff_r29;
  longlong lVar13;
  ulonglong unaff_r30;
  longlong lVar14;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  ulonglong in_f25;
  double dVar19;
  ulonglong in_f26;
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
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar12 = uVar8 - 0x230;
  puVar5 = (ulonglong *)lVar12;
  *puVar5 = uVar8;
  puVar5[0x48] = in_LR;
  puVar5[0x3f] = in_f25;
  puVar5[0x40] = in_f26;
  puVar5[0x41] = in_f27;
  puVar5[0x42] = in_f28;
  puVar5[0x43] = in_f29;
  puVar5[0x44] = in_f30;
  puVar5[0x45] = in_f31;
  puVar5[0x3b] = unaff_r28;
  puVar5[0x3d] = unaff_r30;
  fVar3 = *param_3;
  fVar4 = param_3[1];
  puVar5[0x3e] = unaff_r31;
  dVar23 = (double)*param_3;
  dVar22 = (double)param_3[1];
  puVar5[0x3c] = unaff_r29;
  dVar21 = (double)param_3[2];
  puVar5[0x3a] = unaff_r27;
  dVar20 = (double)param_3[3];
  fastfunc::FastMtx4Identity((float *)(puVar5 + 0x10));
  dVar16 = ABS(dVar23);
  dVar18 = ABS(dVar22);
  *(float *)((int)puVar5 + 0x18c) = (float)(dVar16 - dVar18);
  dVar19 = 0.0;
  dVar24 = 0.7853981852531433;
  uVar9 = (ulonglong)((uint)fVar3 >> 0x1c) & 8 |
          (ulonglong)(*(uint *)((int)puVar5 + 0x18c) >> 0x1e) & 2 |
          (ulonglong)((uint)fVar4 >> 0x1d) & 4;
  fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar9 << 2));
  dVar17 = dVar16;
  if (*(float *)((int)puVar5 + 0x18c) - 0.0 < 0.0) {
    dVar17 = dVar18;
  }
  fVar4 = *(float *)(((uint)(uVar9 << 2) | 0x735900) + 4);
  if (*(float *)((int)puVar5 + 0x18c) - 0.0 < 0.0) {
    dVar18 = dVar16;
  }
  dVar16 = dVar19;
  if (0.0 < dVar17) {
    lVar13 = uVar8 - 0x220;
    lVar11 = uVar8 - 0x70;
    lVar14 = uVar8 - 0x80;
    lVar15 = 2;
    fVar1 = (float)(dVar18 - dVar17) / (float)(dVar18 + dVar17);
    fVar2 = fVar1 * fVar1;
    *(float *)((int)puVar5 + 0x1bc) = fVar1;
    *(float *)((int)puVar5 + 0x1b4) = fVar1;
    *(float *)(puVar5 + 0x37) = fVar1;
    *(float *)(puVar5 + 0x36) = fVar1;
    fVar1 = fVar2 * fVar2;
    *(float *)((int)puVar5 + 0x1b4) = *(float *)((int)puVar5 + 0x1b4) * fVar2;
    *(float *)(puVar5 + 0x37) = *(float *)(puVar5 + 0x37) * fVar1;
    *(float *)((int)puVar5 + 0x1bc) = *(float *)((int)puVar5 + 0x1bc) * fVar1 * fVar2;
    do {
      *(float *)((int)lVar13 + 0x1b0) = *(float *)((int)lVar13 + 0x1a0) * fVar1 * fVar1;
      iVar6 = (int)lVar14;
      lVar14 = lVar14 + 8;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar11 + 4) = *(float *)(iVar6 + 4) * fVar1 * fVar1;
      lVar11 = lVar11 + 8;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    lVar15 = 4;
    lVar11 = uVar8 - 0x80;
    pfVar10 = (float *)&DAT_007358e0;
    lVar13 = lVar12;
    lVar14 = lVar11;
    do {
      fVar1 = *pfVar10;
      fVar2 = pfVar10[1];
      pfVar10 = pfVar10 + 2;
      *(float *)((int)lVar13 + 0x1b0) = *(float *)((int)lVar13 + 0x1b0) * fVar1;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar2;
      lVar14 = lVar14 + 8;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    lVar14 = 2;
    lVar13 = lVar12;
    dVar18 = dVar19;
    do {
      iVar6 = (int)lVar13;
      iVar7 = (int)lVar11;
      lVar13 = lVar13 + 0x10;
      lVar11 = lVar11 + 0x10;
      dVar18 = (double)((float)(dVar18 + (double)*(float *)(iVar6 + 0x1b0)) + *(float *)(iVar7 + 4)
                        + *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    dVar16 = (double)((float)(dVar18 + 0.7853981852531433) * fVar3 + fVar4);
  }
  *(undefined4 *)(puVar5 + 0xe) = 0;
  *(undefined4 *)((int)puVar5 + 0x74) = 0;
  *(float *)(puVar5 + 0xf) = (float)-dVar16;
  fastfunc::FastEulerToMtx1(uVar8 - 0x170,uVar8 - 0x1c0);
  fVar3 = (float)((double)*(float *)(puVar5 + 0x1e) * dVar20 +
                 (double)(float)((double)*(float *)(puVar5 + 0x1c) * dVar21 +
                                (double)(float)((double)*(float *)(puVar5 + 0x18) * dVar23 +
                                               (double)(float)((double)*(float *)(puVar5 + 0x1a) *
                                                              dVar22))));
  fVar4 = (float)((double)*(float *)(puVar5 + 0x1f) * dVar20 +
                 (double)(float)((double)*(float *)(puVar5 + 0x1d) * dVar21 +
                                (double)(float)((double)*(float *)(puVar5 + 0x19) * dVar23 +
                                               (double)(float)((double)*(float *)(puVar5 + 0x1b) *
                                                              dVar22))));
  dVar16 = ABS((double)fVar3);
  dVar17 = ABS((double)fVar4);
  *(float *)(puVar5 + 0x30) = fVar4;
  *(float *)((int)puVar5 + 0x184) = fVar3;
  *(float *)(puVar5 + 0x31) = (float)(dVar17 - dVar16);
  uVar9 = (ulonglong)(*(uint *)(puVar5 + 0x30) >> 0x1c) & 8 |
          (ulonglong)(*(uint *)(puVar5 + 0x31) >> 0x1e) & 2 |
          (ulonglong)(*(uint *)((int)puVar5 + 0x184) >> 0x1d) & 4;
  dVar18 = ABS((double)*(float *)(puVar5 + 0x30));
  if ((double)*(float *)(puVar5 + 0x31) - dVar19 < 0.0) {
    dVar18 = dVar16;
  }
  fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar9 << 2));
  dVar16 = ABS((double)*(float *)((int)puVar5 + 0x184));
  if ((double)*(float *)(puVar5 + 0x31) - dVar19 < 0.0) {
    dVar16 = dVar17;
  }
  fVar4 = *(float *)(((uint)(uVar9 << 2) | 0x735900) + 4);
  if (dVar19 < dVar18) {
    lVar13 = uVar8 - 0x220;
    lVar14 = uVar8 - 0xa0;
    lVar11 = uVar8 - 0x90;
    lVar15 = 2;
    fVar1 = (float)(dVar16 - dVar18) / (float)(dVar16 + dVar18);
    fVar2 = fVar1 * fVar1;
    *(float *)((int)puVar5 + 0x19c) = fVar1;
    *(float *)((int)puVar5 + 0x194) = fVar1;
    *(float *)(puVar5 + 0x33) = fVar1;
    *(float *)(puVar5 + 0x32) = fVar1;
    fVar1 = fVar2 * fVar2;
    *(float *)((int)puVar5 + 0x194) = *(float *)((int)puVar5 + 0x194) * fVar2;
    *(float *)(puVar5 + 0x33) = *(float *)(puVar5 + 0x33) * fVar1;
    *(float *)((int)puVar5 + 0x19c) = *(float *)((int)puVar5 + 0x19c) * fVar1 * fVar2;
    do {
      *(float *)((int)lVar13 + 400) = *(float *)((int)lVar13 + 0x180) * fVar1 * fVar1;
      iVar6 = (int)lVar14;
      lVar13 = lVar13 + 8;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar11 + 4) = *(float *)(iVar6 + 4) * fVar1 * fVar1;
      lVar11 = lVar11 + 8;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    lVar15 = 4;
    lVar11 = uVar8 - 0xa0;
    pfVar10 = (float *)&DAT_007358e0;
    lVar13 = lVar12;
    lVar14 = lVar11;
    do {
      fVar1 = *pfVar10;
      fVar2 = pfVar10[1];
      pfVar10 = pfVar10 + 2;
      *(float *)((int)lVar13 + 400) = *(float *)((int)lVar13 + 400) * fVar1;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar2;
      lVar14 = lVar14 + 8;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    lVar13 = 2;
    do {
      iVar6 = (int)lVar12;
      iVar7 = (int)lVar11;
      lVar12 = lVar12 + 0x10;
      lVar11 = lVar11 + 0x10;
      dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar6 + 400)) + *(float *)(iVar7 + 4) +
                        *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    dVar19 = (double)((float)(dVar19 + dVar24) * fVar3 + fVar4);
  }
  lVar13 = uVar8 - 0x130;
  *(undefined4 *)(puVar5 + 0xe) = 0;
  *(undefined4 *)(puVar5 + 0xf) = 0;
  *(float *)((int)puVar5 + 0x74) = (float)-dVar19;
  fastfunc::FastEulerToMtx2(lVar13,uVar8 - 0x1c0);
  *(undefined4 *)(puVar5 + 0xe) = 0;
  *(undefined4 *)((int)puVar5 + 0x74) = 0;
  *(float *)(puVar5 + 0xf) = (float)param_1;
  fastfunc::FastEulerToMtx2(uVar8 - 0xf0,uVar8 - 0x1c0);
  lVar14 = uVar8 - 0x1b0;
  lVar12 = uVar8 - 0x170;
  fastfunc::FastVecMtx4Mul(lVar14,lVar12,lVar14);
  fastfunc::FastVecMtx4Mul(lVar14,lVar13,lVar14);
  fastfunc::FastVecMtx4Mul(lVar14,uVar8 - 0xf0,lVar14);
  fastfunc::FastNormalizeRMtx4(lVar13,lVar13);
  fastfunc::FastVecMtx4Mul(lVar14,lVar13,lVar14);
  fastfunc::FastNormalizeRMtx4(lVar12,lVar12);
  fastfunc::FastVecMtx4Mul(lVar14,lVar12,lVar14);
  fastfunc::FastApplyTransform(param_2,(Vec4 *)lVar14);
  return;
}



//==== 00111324  ns=mobyutil  size=0xac
// sig: undefined MB_QuatRotate(void)
// callers(1): 00051d40 camera::Camera_BlendCamsPolQuat
// callees(1): 005017c4 fastfunc::FastQuaternionMult

void mobyutil::MB_QuatRotate(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 auStack_20 [16];
  
  fastfunc::FastQuaternionMult(auStack_20,param_3,local_30);
  fastfunc::FastQuaternionMult(param_1,auStack_20,local_40);
  return;
}



//==== 001113e0  ns=mobyutil  size=0x1b4
// sig: void MB_RotateQuatAxisAngle(float angle, float * outQuat, float * inQuat)
// callers(54): 00032100 camera0::UpdateCamCollisions_0; 00033068 camera0::UpdateUserCam_0; 000337a0 camera0::UpdateCamRotation_0; 000343f8 camera0::UpdateCamPosition_0; 00035560 camera::camera10::Cam10_00035560; 00035d68 camera::camera10::Cam10_00035d68; 00037d68 camera::camera11::Cam11_00037d68; 000395c0 camera::camera13::Cam13_000395c0; 0003aeb8 camera::camera14::???_Cam14_RotateByStick; 0003bef0 camera::camera15::Cam15_0003bef0; 00042b48 camera::camera21::UpdateCamera_21; 00045728 camera::camera3::UpdateCamera_3; 00046c58 camera::camera4::UpdateCamera_4; 0004ab98 camera::camera7::Cam7_UpdateRot; 0004bf90 camera::camera8::Cam8_UpdateRot; 0004e058 camera::camera9::Cam9_UpdateRot; 00050d20 camera::Camera_Pos2Polar3d; 00051d40 camera::Camera_BlendCamsPolQuat; 000d9668 initsky::DrawSceneShipEffect; 000eb6c0 mobyattack::UpdateMoby_1475_KaleboRace_Rocket; 000ed970 mobyattack::UpdateMoby_256_GC_Rocket; 001162a0 mobyutil::???_MB_SpawnRingPartFx; 00180408 UpdateSound_4; 00192590 mobyupdate_unsorted::UpdateMoby_1034; 001995e0 mobyupdate_helpers::M1045_001995e0
// callees(2): 0010c038 mobyutil::MB_AxisAngleToQuat; 005017c4 fastfunc::FastQuaternionMult

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void mobyutil::MB_RotateQuatAxisAngle(float angle,float *outQuat,float *inQuat)

{
  float local_60 [4];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 auStack_30 [16];
  
  if (1e-05 <= ABS(angle)) {
    MB_AxisAngleToQuat(angle,local_60,local_60);
    fastfunc::FastQuaternionMult(auStack_30,local_60,local_40);
    fastfunc::FastQuaternionMult(outQuat,auStack_30,local_50);
  }
  else {
    *outQuat = *inQuat;
    outQuat[1] = inQuat[1];
    outQuat[2] = inQuat[2];
    outQuat[3] = inQuat[3];
  }
  return;
}



//==== 001115c8  ns=mobyutil  size=0x30c
// sig: undefined MB_QuatBetweenVecs(void)
// callers(3): 00034e68 camera::camera1::Cam1_UpdateCam; 000371e0 camera::camera10::Cam10_000371e0; 000395c0 camera::camera13::Cam13_000395c0
// callees(1): 005017c4 fastfunc::FastQuaternionMult

void mobyutil::MB_QuatBetweenVecs
               (float *param_1,float *param_2,float *param_3,undefined8 param_4,int param_5)

{
  float fVar1;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 auStack_50 [24];
  
  fVar1 = *param_2;
  if ((param_5 == 0) &&
     (SQRT(param_2[2] * param_2[2] + fVar1 * fVar1 + param_2[1] * param_2[1]) *
      SQRT(param_3[2] * param_3[2] + *param_3 * *param_3 + param_3[1] * param_3[1]) == 0.0)) {
    *param_1 = fVar1;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  else {
    fastfunc::FastQuaternionMult(auStack_50,local_80,local_60);
    fastfunc::FastQuaternionMult(param_1,auStack_50,local_70);
  }
  return;
}



//==== 001118d8  ns=mobyutil  size=0x2c4
// sig: undefined MB_getTarget(void)
// callers(68): 0001bf50 mobyupdate_helpers::M326_0001bf50; 0001cb80 mobyupdate_unsorted::UpdateMoby_326; 00195e08 mobyupdate_unsorted::UpdateMoby_1041; 0019aea0 mobyupdate_unsorted::UpdateMoby_1045; 001aa078 mobyupdate_unsorted::UpdateMoby_1059; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 001d05f0 mobyupdate_unsorted::UpdateMoby_1110; 001d2258 mobyupdate_unsorted::UpdateMoby_1112; 001f2d58 mobyupdate_helpers::M1196_001f2d58; 001f6fe0 mobyupdate_helpers::M1199_001f6fe0; 001fbc78 mobyupdate_helpers::M1202_001fbc78; 00218958 mobyupdate_helpers::M1235_00218958; 00233180 mobyupdate_unsorted::UpdateMoby_1266; 00235aa0 mobyupdate_unsorted::UpdateMoby_1269; 00237808 mobyupdate_helpers::M1281_00237808; 0027cd50 mobyupdate_helpers::M1440_0027cd50; 002839d8 mobyupdate_helpers::M1454_002839d8; 002dc568 mobyupdate_unsorted::UpdateMoby_193; 002f20a0 mobyupdate_unsorted::UpdateMoby_217; 00301d00 mobyupdate_unsorted::UpdateMoby_233; 00307270 mobyupdate_unsorted::UpdateMoby_238; 0032e908 mobyupdate_helpers::M289_0032e908; 0032e9e0 mobyupdate_unsorted::UpdateMoby_29; 00332c38 mobyupdate_unsorted::UpdateMoby_294; 003371a0 mobyupdate_unsorted::UpdateMoby_30
// callees(0): 

f32 mobyutil::MB_getTarget(double param_1,int param_2,undefined8 param_3,f32 *param_4)

{
  u8 uVar1;
  f32 fVar2;
  f32 fVar3;
  float fVar4;
  f32 fVar5;
  float fVar6;
  undefined4 *puVar7;
  f32 fVar8;
  MobyInstance *pMVar9;
  short *psVar10;
  int *piVar11;
  int iVar12;
  MobyInstance *pMVar13;
  double dVar14;
  
  fVar8 = 0.0;
  if ((hero::g_heroStateType == 0x18) || (pMVar9 = g_heroMobyPtr, g_heroState == MOVEMENT_LOCKED)) {
    pMVar9 = (MobyInstance *)0x0;
    fVar8 = 2.8026e-45;
  }
  iVar12 = 1;
  if (0 < DAT_00a51f68) {
    psVar10 = &DAT_00a51f6a;
    do {
      pMVar13 = MobyInstance + *psVar10;
      if (pMVar13 != (MobyInstance *)0x0) {
        if (pMVar13->oClass == DECOY) {
          uVar1 = pMVar13->state;
          if ((uVar1 == 0xfe) || (uVar1 == 0xfd)) goto LAB_00111988;
LAB_001119a8:
          if ((uVar1 == '\x03') &&
             (fVar4 = *(float *)(param_2 + 0x14) - (pMVar13->pos).y,
             fVar6 = *(float *)(param_2 + 0x10) - (pMVar13->pos).x,
             dVar14 = (double)SQRT(fVar6 * fVar6 + fVar4 * fVar4), dVar14 < param_1)) {
            fVar8 = 1.4013e-45;
            param_1 = dVar14;
            pMVar9 = pMVar13;
          }
        }
        else {
LAB_00111988:
          if (pMVar13->oClass == GOLD_DECOY) {
            uVar1 = pMVar13->state;
            if ((uVar1 != 0xfe) && (uVar1 != 0xfd)) goto LAB_001119a8;
          }
        }
      }
      iVar12 = iVar12 + 1;
      psVar10 = psVar10 + 1;
    } while (iVar12 <= DAT_00a51f68);
  }
  iVar12 = 0;
  piVar11 = &DAT_010bb494;
  do {
    pMVar13 = (MobyInstance *)*piVar11;
    if ((pMVar13 != (MobyInstance *)0x0) && (pMVar13->oClass == MORPH_O_RAY_CHICKEN)) {
      if ((pMVar13->state != 0xfd && pMVar13->state != 0xfe) &&
         ((pMVar13->setByGroup != '\0' &&
          (fVar4 = *(float *)(param_2 + 0x14) - (pMVar13->pos).y,
          fVar6 = *(float *)(param_2 + 0x10) - (pMVar13->pos).x,
          dVar14 = (double)SQRT(fVar6 * fVar6 + fVar4 * fVar4), dVar14 < param_1)))) {
        fVar8 = 1.4013e-45;
        param_1 = dVar14;
        pMVar9 = pMVar13;
      }
    }
    iVar12 = iVar12 + 1;
    piVar11 = piVar11 + 1;
  } while (iVar12 < 0x14);
  if (pMVar9 == (MobyInstance *)0x0) {
    param_4[0x10] = 0.0;
    puVar7 = (undefined4 *)((uint)param_4 & 0xfffffff0);
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
    puVar7 = (undefined4 *)((uint)(param_4 + 4) & 0xfffffff0);
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
    puVar7 = (undefined4 *)((uint)(param_4 + 0xc) & 0xfffffff0);
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
    puVar7 = (undefined4 *)((uint)(param_4 + 8) & 0xfffffff0);
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
  }
  else {
    param_4[0x10] = (f32)pMVar9;
    fVar2 = (pMVar9->pos).x;
    *param_4 = fVar2;
    fVar3 = (pMVar9->pos).y;
    param_4[1] = fVar3;
    fVar4 = (pMVar9->pos).z;
    param_4[2] = fVar4;
    fVar5 = (pMVar9->pos).w;
    param_4[3] = fVar5;
    param_4[4] = (pMVar9->rotation).x;
    pMVar13 = g_heroMobyPtr;
    param_4[5] = (pMVar9->rotation).y;
    param_4[6] = (pMVar9->rotation).z;
    param_4[7] = (pMVar9->rotation).w;
    if (pMVar9 == pMVar13) {
      param_4[8] = DAT_00969da0;
      param_4[9] = DAT_00969da4;
      param_4[10] = DAT_00969da8;
      param_4[0xb] = DAT_00969dac;
      param_4[0xc] = hero::g_heroCGPos;
      param_4[0xd] = DAT_00969db4;
      param_4[0xe] = DAT_00969db8;
      param_4[0xf] = DAT_00969dbc;
    }
    else {
      param_4[0xc] = fVar2;
      param_4[0xd] = fVar3;
      param_4[0xf] = fVar5;
      param_4[8] = fVar2;
      param_4[9] = fVar3;
      param_4[0xb] = fVar5;
      fVar4 = fVar4 + 0.6;
      param_4[0xe] = fVar4;
      param_4[10] = fVar4;
    }
  }
  param_4[0x11] = fVar8;
  return fVar8;
}



//==== 00111ba0  ns=mobyutil  size=0x510
// sig: undefined MB_getTargetInArea(void)
// callers(61): 001856a0 mobyupdate_helpers::M101_001856a0; 001892a8 mobyupdate_helpers::M1022_001892a8; 0018a840 mobyupdate_helpers::M1023_0018a840; 0018e048 mobyupdate_helpers::M1027_0018e048; 00190c70 mobyupdate_helpers::M1032_00190c70; 00190d60 mobyupdate_unsorted::UpdateMoby_1032; 0019f9b0 mobyupdate_helpers::M1048_0019f9b0; 001a5360 mobyupdate_helpers::M1051_001a5360; 001afa30 mobyupdate_helpers::M1068_001afa30; 001ead68 mobyupdate_helpers::M1169_001ead68; 001ec8c8 mobyupdate_helpers::M1170_001ec8c8; 001f2d58 mobyupdate_helpers::M1196_001f2d58; 001f6fe0 mobyupdate_helpers::M1199_001f6fe0; 001fbc78 mobyupdate_helpers::M1202_001fbc78; 0020f330 mobyupdate_helpers::M1226_0020f330; 002113b8 mobyupdate_helpers::M1229_002113b8; 00214198 mobyupdate_helpers::M1231_00214198; 002157a0 mobyupdate_helpers::M1232_002157a0; 00217820 mobyupdate_helpers::M1234_00217820; 00219370 mobyupdate_helpers::M1236_00219370; 00225048 mobyupdate_helpers::M1246_00225048; 0022d900 mobyupdate_helpers::M1262_0022d900; 0023e5e8 mobyupdate_helpers::M1291_0023e5e8; 002587f8 mobyupdate_helpers::M1356_002587f8; 00275240 mobyupdate_helpers::M1422_00275240
// callees(2): 00104e44 mobyutil::PointInsideComplexPoly; 00110b70 mobyutil::MB_IsPntInCuboid

f32 mobyutil::MB_getTargetInArea
              (double param_1,int param_2,f32 *param_3,undefined8 param_4,int *param_5,int param_6,
              Vec4 *param_7,int param_8)

{
  u8 uVar1;
  f32 fVar2;
  f32 fVar3;
  float fVar4;
  f32 fVar5;
  float fVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  f32 fVar11;
  MobyInstance *pMVar12;
  int *piVar13;
  short *psVar14;
  int *piVar15;
  MobyInstance *pMVar16;
  double dVar17;
  
  pMVar12 = g_heroMobyPtr;
  fVar11 = 0.0;
  if ((hero::g_heroStateType == 0x18) || (g_heroState == MOVEMENT_LOCKED)) {
    pMVar12 = (MobyInstance *)0x0;
    fVar11 = 2.8026e-45;
  }
  else if (param_6 < 1) {
    if (((param_7 != (Vec4 *)0x0) && (0 < param_8)) &&
       (iVar8 = PointInsideComplexPoly(&g_heroPosition,param_7,param_8), iVar8 == 0)) {
      pMVar12 = (MobyInstance *)0x0;
      fVar11 = 2.8026e-45;
    }
  }
  else {
    iVar8 = 0;
    piVar15 = param_5;
    if (0 < param_6 + -1) {
      do {
        iVar10 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar15);
        if (iVar10 != 0) {
          pMVar12 = (MobyInstance *)0x0;
          fVar11 = 2.8026e-45;
          break;
        }
        iVar8 = iVar8 + 1;
        piVar15 = piVar15 + 1;
      } while (iVar8 < param_6 + -1);
    }
  }
  iVar8 = 1;
  if (0 < DAT_00a51f68) {
    psVar14 = &DAT_00a51f6a;
    do {
      pMVar16 = MobyInstance + *psVar14;
      if (pMVar16 != (MobyInstance *)0x0) {
        if (pMVar16->oClass == DECOY) {
          uVar1 = pMVar16->state;
          if ((uVar1 == 0xfe) || (uVar1 == 0xfd)) goto LAB_00111d60;
LAB_00111d80:
          if ((uVar1 == '\x03') &&
             (fVar4 = *(float *)(param_2 + 0x14) - (pMVar16->pos).y,
             fVar6 = *(float *)(param_2 + 0x10) - (pMVar16->pos).x,
             dVar17 = (double)SQRT(fVar6 * fVar6 + fVar4 * fVar4), dVar17 < param_1)) {
            if (param_6 < 1) {
              if (((param_7 != (Vec4 *)0x0) && (0 < param_8)) &&
                 (iVar10 = PointInsideComplexPoly((Vec4 *)&pMVar16->pos,param_7,param_8),
                 iVar10 == 0)) goto LAB_00111e34;
            }
            else {
              iVar10 = 0;
              if (0 < param_6 + -1) {
                piVar15 = param_5;
                do {
                  iVar9 = MB_IsPntInCuboid((Vec4 *)&pMVar16->pos,(longlong)*piVar15);
                  if (iVar9 != 0) goto LAB_00111e34;
                  iVar10 = iVar10 + 1;
                  piVar15 = piVar15 + 1;
                } while (iVar10 < param_6 + -1);
              }
            }
            fVar11 = 1.4013e-45;
            param_1 = dVar17;
            pMVar12 = pMVar16;
          }
        }
        else {
LAB_00111d60:
          if (pMVar16->oClass == GOLD_DECOY) {
            uVar1 = pMVar16->state;
            if ((uVar1 != 0xfe) && (uVar1 != 0xfd)) goto LAB_00111d80;
          }
        }
      }
LAB_00111e34:
      iVar8 = iVar8 + 1;
      psVar14 = psVar14 + 1;
    } while (iVar8 <= DAT_00a51f68);
  }
  iVar8 = 0;
  piVar15 = &DAT_010bb494;
  do {
    pMVar16 = (MobyInstance *)*piVar15;
    if (((pMVar16 != (MobyInstance *)0x0) && (pMVar16->oClass == MORPH_O_RAY_CHICKEN)) &&
       ((pMVar16->state != 0xfd && pMVar16->state != 0xfe &&
        ((pMVar16->setByGroup != '\0' &&
         (fVar4 = *(float *)(param_2 + 0x14) - (pMVar16->pos).y,
         fVar6 = *(float *)(param_2 + 0x10) - (pMVar16->pos).x,
         dVar17 = (double)SQRT(fVar6 * fVar6 + fVar4 * fVar4), dVar17 < param_1)))))) {
      if (param_6 < 1) {
        if (((param_7 != (Vec4 *)0x0) && (0 < param_8)) &&
           (iVar10 = PointInsideComplexPoly((Vec4 *)&pMVar16->pos,param_7,param_8), iVar10 == 0))
        goto LAB_00111f40;
      }
      else {
        iVar10 = 0;
        if (0 < param_6 + -1) {
          piVar13 = param_5;
          do {
            iVar9 = MB_IsPntInCuboid((Vec4 *)&pMVar16->pos,(longlong)*piVar13);
            if (iVar9 != 0) goto LAB_00111f40;
            iVar10 = iVar10 + 1;
            piVar13 = piVar13 + 1;
          } while (iVar10 < param_6 + -1);
        }
      }
      fVar11 = 1.4013e-45;
      param_1 = dVar17;
      pMVar12 = pMVar16;
    }
LAB_00111f40:
    iVar8 = iVar8 + 1;
    piVar15 = piVar15 + 1;
    if (0x13 < iVar8) {
      if (pMVar12 == (MobyInstance *)0x0) {
        param_3[0x10] = 0.0;
        puVar7 = (undefined4 *)((uint)param_3 & 0xfffffff0);
        puVar7[3] = 0;
        puVar7[2] = 0;
        puVar7[1] = 0;
        *puVar7 = 0;
        puVar7 = (undefined4 *)((uint)(param_3 + 4) & 0xfffffff0);
        puVar7[3] = 0;
        puVar7[2] = 0;
        puVar7[1] = 0;
        *puVar7 = 0;
        puVar7 = (undefined4 *)((uint)(param_3 + 0xc) & 0xfffffff0);
        puVar7[3] = 0;
        puVar7[2] = 0;
        puVar7[1] = 0;
        *puVar7 = 0;
        puVar7 = (undefined4 *)((uint)(param_3 + 8) & 0xfffffff0);
        puVar7[3] = 0;
        puVar7[2] = 0;
        puVar7[1] = 0;
        *puVar7 = 0;
      }
      else {
        param_3[0x10] = (f32)pMVar12;
        fVar2 = (pMVar12->pos).x;
        *param_3 = fVar2;
        fVar3 = (pMVar12->pos).y;
        param_3[1] = fVar3;
        fVar4 = (pMVar12->pos).z;
        param_3[2] = fVar4;
        fVar5 = (pMVar12->pos).w;
        param_3[3] = fVar5;
        param_3[4] = (pMVar12->rotation).x;
        param_3[5] = (pMVar12->rotation).y;
        pMVar16 = g_heroMobyPtr;
        param_3[6] = (pMVar12->rotation).z;
        param_3[7] = (pMVar12->rotation).w;
        if (pMVar12 == pMVar16) {
          param_3[8] = DAT_00969da0;
          param_3[9] = DAT_00969da4;
          param_3[10] = DAT_00969da8;
          param_3[0xb] = DAT_00969dac;
          param_3[0xc] = hero::g_heroCGPos;
          param_3[0xd] = DAT_00969db4;
          param_3[0xe] = DAT_00969db8;
          param_3[0xf] = DAT_00969dbc;
        }
        else {
          param_3[0xc] = fVar2;
          param_3[0xd] = fVar3;
          param_3[0xf] = fVar5;
          param_3[8] = fVar2;
          fVar4 = fVar4 + 0.6;
          param_3[9] = fVar3;
          param_3[0xb] = fVar5;
          param_3[0xe] = fVar4;
          param_3[10] = fVar4;
        }
      }
      param_3[0x11] = fVar11;
      return fVar11;
    }
  } while( true );
}



//==== 001120b0  ns=mobyutil  size=0x24
// sig: undefined MB_CollLineWrapper(void)
// callers(0): 
// callees(1): 00057820 collproc::CollLine

void mobyutil::MB_CollLineWrapper(void)

{
  collproc::CollLine();
  return;
}



//==== 001120d4  ns=mobyutil  size=0x1d8
// sig: undefined MB_TransformBetweenFrames(void)
// callers(3): 001b2480 mobyupdate_unsorted::UpdateMoby_1069; 0023f010 mobyupdate_unsorted::UpdateMoby_{1293_1320}; 004088d0 mobyupdate_unsorted::UpdateMoby_664
// callees(2): 00500ca4 fastfunc::FastEulerToMtx1; 005010c0 fastfunc::FastNormalizeRMtx4

void mobyutil::MB_TransformBetweenFrames
               (float *param_1,float *param_2,float *param_3,undefined8 param_4,undefined8 param_5)

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
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  
  fastfunc::FastEulerToMtx1(&local_c0,param_4);
  fastfunc::FastNormalizeRMtx4(&local_c0,&local_c0);
  fastfunc::FastEulerToMtx1(&local_80,param_5);
  fVar1 = param_3[1];
  fVar4 = param_1[1] - fVar1;
  fVar5 = *param_1 - *param_3;
  fVar2 = param_3[2];
  fVar6 = param_1[2] - fVar2;
  fVar3 = param_1[3];
  fVar9 = local_8c * fVar3 + local_9c * fVar6 + local_bc * fVar5 + local_ac * fVar4;
  fVar8 = local_90 * fVar3 + local_a0 * fVar6 + local_c0 * fVar5 + local_b0 * fVar4;
  fVar7 = local_88 * fVar3 + local_98 * fVar6 + local_b8 * fVar5 + local_a8 * fVar4;
  fVar3 = local_84 * fVar3 + local_94 * fVar6 + local_b4 * fVar5 + local_a4 * fVar4;
  *param_2 = local_70 * fVar9 + local_50 * fVar3 + local_60 * fVar7 + local_80 * fVar8 + *param_3;
  param_2[3] = local_44 * fVar3 + local_54 * fVar7 + local_74 * fVar8 + local_64 * fVar9;
  param_2[1] = local_4c * fVar3 + local_5c * fVar7 + local_7c * fVar8 + local_6c * fVar9 + fVar1;
  param_2[2] = local_48 * fVar3 + local_58 * fVar7 + local_78 * fVar8 + local_68 * fVar9 + fVar2;
  return;
}



//==== 001122ac  ns=mobyutil  size=0x34
// sig: undefined MB_GetPlatformParent(void)
// callers(25): 000824b0 hero::Hero_CheckLedgeGrab; 000895f0 hero::Hero_MoveWithPlatform; 00200fd0 FUN_00200fd0; 00201da8 mobyupdate_helpers::M121_00201da8; 00202b98 mobyupdate_unsorted::UpdateMoby_121; 00229518 mobyupdate_unsorted::UpdateMoby_1257; 002409e0 mobyupdate_helpers::M16_002409e0; 00241320 mobyupdate_unsorted::UpdateMoby_{13_14_15_16}; 002a1698 mobyupdate_helpers::M169_002a1698; 002a1a48 mobyupdate_helpers::M160_002a1a48; 002a2438 mobyupdate_unsorted::UpdateMoby_160; 002ae5d8 FUN_002ae5d8; 002e74a8 FUN_002e74a8; 002e7c08 mobyupdate_helpers::M1900_002e7c08; 002e8af8 mobyupdate_unsorted::UpdateMoby_{203_1900}; 002fe4e8 FUN_002fe4e8; 002fe758 mobyupdate_helpers::M230_002fe758; 002ff240 mobyupdate_unsorted::UpdateMoby_230; 003a6388 mobyupdate_helpers::M511_003a6388; 003a6d40 mobyupdate_helpers::M511_003a6d40; 003c3730 mobyupdate_unsorted::UpdateMoby_574; 003f3e00 mobyupdate_unsorted::UpdateMoby_{633_773_988_989}; 0043ce28 FUN_0043ce28; 0043d268 mobyupdate_helpers::M74_0043d268; 0043dc00 mobyupdate_unsorted::UpdateMoby_74
// callees(0): 

/* [p2_mobyutil] if modeBits&0x20 returns pVar[2] (moby being stood on/attached)
   [p2_mobyutil] if modeBits&0x20 returns pVar[2] (moby being stood on/attached) */

undefined4 mobyutil::MB_GetPlatformParent(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else if ((*(ushort *)(param_1 + 0x34) & 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x78) + 8);
  }
  return uVar1;
}



//==== 001122e0  ns=mobyutil  size=0x1e0
// sig: undefined MB_PlatformLocalToWorld(void)
// callers(11): 000895f0 hero::Hero_MoveWithPlatform; 00225b48 mobyupdate_unsorted::UpdateMoby_1246; 00229518 mobyupdate_unsorted::UpdateMoby_1257; 002cbaf8 mobyupdate_unsorted::UpdateMoby_186; 002e8af8 mobyupdate_unsorted::UpdateMoby_{203_1900}; 002ff240 mobyupdate_unsorted::UpdateMoby_230; 003a4da0 mobyupdate_helpers::M511_003a4da0; 003c3730 mobyupdate_unsorted::UpdateMoby_574; 0043dc00 mobyupdate_unsorted::UpdateMoby_74; 0044b5f0 mobyupdate_unsorted::UpdateMoby_750; 004c0fd8 mobyupdate_unsorted::UpdateMoby_935
// callees(3): 0010c1e8 mobyutil::MB_MtxToEuler; 00500ca4 fastfunc::FastEulerToMtx1; 0050162c fastfunc::FastVecMtx4Mul

undefined8
mobyutil::MB_PlatformLocalToWorld
          (undefined8 param_1,int param_2,float *param_3,undefined8 param_4,float *param_5,
          MobyInstance *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined1 auStack_80 [72];
  
  if (((param_2 != 0) && ((*(ushort *)(param_2 + 0x34) & 0x20) != 0)) &&
     (iVar5 = *(int *)(*(int *)(param_2 + 0x78) + 8), iVar5 != 0)) {
    fastfunc::FastEulerToMtx1(&local_c0,iVar5);
    fVar6 = *param_3 + *(float *)(iVar5 + 0x10);
    fVar1 = param_3[1];
    fVar2 = param_3[2];
    fVar3 = param_3[3];
    *param_5 = fVar6;
    fVar1 = fVar1 + *(float *)(iVar5 + 0x14);
    param_5[1] = fVar1;
    fVar4 = *(float *)(iVar5 + 0x18);
    param_5[3] = fVar3;
    fVar2 = fVar2 + fVar4;
    param_5[2] = fVar2;
    fVar6 = fVar6 - *(float *)(param_2 + 0x10);
    *param_5 = fVar6;
    fVar1 = fVar1 - *(float *)(param_2 + 0x14);
    param_5[1] = fVar1;
    fVar2 = fVar2 - *(float *)(param_2 + 0x18);
    param_5[2] = fVar2;
    *param_5 = local_a0 * fVar2 + local_c0 * fVar6 + local_b0 * fVar1;
    param_5[1] = local_9c * fVar2 + local_bc * fVar6 + local_ac * fVar1;
    param_5[2] = local_98 * fVar2 + local_b8 * fVar6 + local_a8 * fVar1;
    param_5[3] = local_a4 * fVar1 + local_94 * fVar2 + local_b4 * fVar6 + fVar3;
    *param_5 = *param_5 + *(float *)(param_2 + 0x10);
    param_5[1] = param_5[1] + *(float *)(param_2 + 0x14);
    param_5[2] = param_5[2] + *(float *)(param_2 + 0x18);
    fastfunc::FastEulerToMtx1(auStack_80,param_4);
    fastfunc::FastVecMtx4Mul(auStack_80,&local_c0,auStack_80);
    MB_MtxToEuler((int)auStack_80,param_6);
    return 1;
  }
  return 0;
}



//==== 001124c0  ns=mobyutil  size=0x1b4
// sig: undefined MB_PlatformWorldToLocal(void)
// callers(9): 000895f0 hero::Hero_MoveWithPlatform; 00112678 mobyutil::MB_PlatformGetDelta; 00222fe0 mobyupdate_unsorted::UpdateMoby_1243; 00241320 mobyupdate_unsorted::UpdateMoby_{13_14_15_16}; 002a2438 mobyupdate_unsorted::UpdateMoby_160; 003a6388 mobyupdate_helpers::M511_003a6388; 003f3e00 mobyupdate_unsorted::UpdateMoby_{633_773_988_989}; 00408328 mobyupdate_unsorted::UpdateMoby_661; 0046d4e0 mobyupdate_unsorted::UpdateMoby_812
// callees(4): 0010c1e8 mobyutil::MB_MtxToEuler; 00500ca4 fastfunc::FastEulerToMtx1; 005010c0 fastfunc::FastNormalizeRMtx4; 0050162c fastfunc::FastVecMtx4Mul

undefined8
mobyutil::MB_PlatformWorldToLocal
          (undefined8 param_1,int param_2,float *param_3,undefined8 param_4,float *param_5,
          MobyInstance *param_6)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined1 auStack_90 [72];
  
  if (((param_2 == 0) || ((*(ushort *)(param_2 + 0x34) & 0x20) == 0)) ||
     (*(int *)(*(int *)(param_2 + 0x78) + 8) == 0)) {
    uVar1 = 0;
  }
  else {
    dVar5 = (double)(param_3[1] - *(float *)(param_2 + 0x14));
    dVar4 = (double)(*param_3 - *(float *)(param_2 + 0x10));
    dVar3 = (double)param_3[3];
    dVar2 = (double)(param_3[2] - *(float *)(param_2 + 0x18));
    fastfunc::FastNormalizeRMtx4(&local_d0,param_2 + 0xc0);
    *param_5 = (float)((double)local_a0 * dVar3 +
                      (double)(float)((double)local_b0 * dVar2 +
                                     (double)(float)((double)local_d0 * dVar4 +
                                                    (double)(float)((double)local_c0 * dVar5))));
    param_5[1] = (float)((double)local_9c * dVar3 +
                        (double)(float)((double)local_ac * dVar2 +
                                       (double)(float)((double)local_cc * dVar4 +
                                                      (double)(float)((double)local_bc * dVar5))));
    param_5[2] = (float)((double)local_98 * dVar3 +
                        (double)(float)((double)local_a8 * dVar2 +
                                       (double)(float)((double)local_c8 * dVar4 +
                                                      (double)(float)((double)local_b8 * dVar5))));
    param_5[3] = (float)((double)local_94 * dVar3 +
                        (double)(float)((double)local_a4 * dVar2 +
                                       (double)(float)((double)local_c4 * dVar4 +
                                                      (double)(float)((double)local_b4 * dVar5))));
    fastfunc::FastEulerToMtx1(auStack_90,param_4);
    fastfunc::FastVecMtx4Mul(auStack_90,&local_d0,auStack_90);
    MB_MtxToEuler((int)auStack_90,param_6);
    uVar1 = 1;
  }
  return uVar1;
}



//==== 00112678  ns=mobyutil  size=0x288
// sig: undefined MB_PlatformGetDelta(void)
// callers(9): 000895f0 hero::Hero_MoveWithPlatform; 001de6a0 mobyupdate_helpers::M1140_001de6a0; 00222fe0 mobyupdate_unsorted::UpdateMoby_1243; 002409e0 mobyupdate_helpers::M16_002409e0; 002a2438 mobyupdate_unsorted::UpdateMoby_160; 003a6d40 mobyupdate_helpers::M511_003a6d40; 003f3e00 mobyupdate_unsorted::UpdateMoby_{633_773_988_989}; 00408328 mobyupdate_unsorted::UpdateMoby_661; 0046d4e0 mobyupdate_unsorted::UpdateMoby_812
// callees(6): 0010c1e8 mobyutil::MB_MtxToEuler; 00110488 mobyutil::ClampVec3Magnitude; 001124c0 mobyutil::MB_PlatformWorldToLocal; 00500ca4 fastfunc::FastEulerToMtx1; 00500f6c fastfunc::FastMtxCopyNoTranslate; 0050162c fastfunc::FastVecMtx4Mul

undefined8
mobyutil::MB_PlatformGetDelta
          (int param_1,int param_2,float *param_3,undefined8 param_4,float *param_5,
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
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  undefined8 uVar15;
  Vec4 local_e0;
  undefined1 auStack_d0 [64];
  undefined1 auStack_90 [72];
  
  if (((param_2 == 0) || ((*(ushort *)(param_2 + 0x34) & 0x20) == 0)) ||
     (iVar14 = *(int *)(*(int *)(param_2 + 0x78) + 8), iVar14 == 0)) {
    uVar15 = 0;
  }
  else {
    fVar1 = param_3[1];
    fVar2 = *param_3;
    fVar3 = *(float *)(param_2 + 0xd4);
    fVar4 = param_3[2];
    fVar5 = *(float *)(param_2 + 0xdc);
    fVar6 = *(float *)(param_2 + 0xd8);
    fVar7 = *(float *)(param_2 + 0xc4);
    fVar8 = *(float *)(param_2 + 0xcc);
    fVar9 = *(float *)(param_2 + 200);
    fVar10 = *(float *)(param_2 + 0xe4);
    fVar11 = *(float *)(param_2 + 0xe8);
    fVar12 = *(float *)(param_2 + 0xec);
    fVar13 = param_3[3];
    *param_5 = *(float *)(param_2 + 0xe0) * fVar4 +
               *(float *)(param_2 + 0xc0) * fVar2 + *(float *)(param_2 + 0xd0) * fVar1;
    param_5[1] = fVar10 * fVar4 + fVar7 * fVar2 + fVar3 * fVar1;
    param_5[2] = fVar11 * fVar4 + fVar9 * fVar2 + fVar6 * fVar1;
    param_5[3] = fVar12 * fVar4 + fVar8 * fVar2 + fVar5 * fVar1 + fVar13;
    *param_5 = *param_5 + *(float *)(param_2 + 0x10);
    param_5[1] = param_5[1] + *(float *)(param_2 + 0x14);
    param_5[2] = param_5[2] + *(float *)(param_2 + 0x18);
    fastfunc::FastEulerToMtx1(auStack_90,param_4);
    fastfunc::FastMtxCopyNoTranslate(auStack_d0,param_2 + 0xc0);
    fastfunc::FastVecMtx4Mul(auStack_90,auStack_d0,auStack_90);
    MB_MtxToEuler((int)auStack_90,(MobyInstance *)param_6);
    if ((*(uint *)(iVar14 + 0x3c) & 4) == 0) {
      if ((*(byte *)(param_1 + 0x22) != 0) &&
         (*(byte *)(param_1 + 0x22) < *(byte *)(param_2 + 0x22))) {
        local_e0.x = *(float *)(iVar14 + 0x10);
        local_e0.y = *(float *)(iVar14 + 0x14);
        local_e0.z = *(float *)(iVar14 + 0x18);
        local_e0.w = *(float *)(iVar14 + 0x1c);
        ClampVec3Magnitude(0x3ff0000000000000,&local_e0);
        *param_5 = *param_5 + local_e0.x;
        param_5[1] = param_5[1] + local_e0.y;
        param_5[2] = param_5[2] + local_e0.z;
      }
    }
    else {
      *param_5 = *param_5 + *(float *)(iVar14 + 0x10);
      param_5[1] = param_5[1] + *(float *)(iVar14 + 0x14);
      param_5[2] = param_5[2] + *(float *)(iVar14 + 0x18);
      MB_PlatformWorldToLocal(param_1,param_2,param_5,param_6,param_3,param_4);
    }
    uVar15 = 1;
  }
  return uVar15;
}



//==== 00112900  ns=mobyutil  size=0xcc
// sig: undefined MB_GetOrientation(MobyInstance * param_1, Vec4 * param_2, undefined8 param_3, undefined8 param_4)
// callers(62): 00186e60 mobyupdate_unsorted::UpdateMoby_1012; 001951e0 mobyupdate_unsorted::UpdateMoby_{104_106_1129}; 001ac298 mobyupdate_unsorted::UpdateMoby_1061; 001b2480 mobyupdate_unsorted::UpdateMoby_1069; 001b3e18 mobyupdate_unsorted::UpdateMoby_1070; 001b5860 mobyupdate_unsorted::UpdateMoby_1075; 001ccf10 mobyupdate_unsorted::UpdateMoby_1109; 001d3c28 mobyupdate_unsorted::UpdateMoby_1117; 001e0638 mobyupdate_unsorted::UpdateMoby_{1150_1151}; 001ed7a8 mobyupdate_unsorted::UpdateMoby_1174; 001ee3a8 mobyupdate_unsorted::UpdateMoby_1178; 002283e8 mobyupdate_unsorted::UpdateMoby_1250; 00236ba0 mobyupdate_unsorted::UpdateMoby_1270; 0023f010 mobyupdate_unsorted::UpdateMoby_{1293_1320}; 00265e20 mobyupdate_unsorted::UpdateMoby_1380; 002708f0 mobyupdate_unsorted::UpdateMoby_1410; 002826c8 mobyupdate_unsorted::UpdateMoby_1448; 0028a138 mobyupdate_unsorted::UpdateMoby_1474; 002a0bc0 mobyupdate_unsorted::UpdateMoby_1584; 002b3ec8 mobyupdate_unsorted::UpdateMoby_1766; 002c0c60 mobyupdate_unsorted::UpdateMoby_1826; 0030c010 mobyupdate_unsorted::UpdateMoby_240; 00310d18 mobyupdate_unsorted::UpdateMoby_{21_244}; 0031c218 mobyupdate_unsorted::UpdateMoby_253; 003358c8 mobyupdate_unsorted::UpdateMoby_{296_297_652_653}
// callees(4): 0010c1e8 mobyutil::MB_MtxToEuler; 00500ca4 fastfunc::FastEulerToMtx1; 005010c0 fastfunc::FastNormalizeRMtx4; 0050162c fastfunc::FastVecMtx4Mul

void mobyutil::MB_GetOrientation
               (MobyInstance *param_1,Vec4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_f0 [64];
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [72];
  
  fastfunc::FastEulerToMtx1(auStack_f0,param_3);
  fastfunc::FastNormalizeRMtx4(auStack_f0,auStack_f0);
  fastfunc::FastEulerToMtx1(auStack_b0,param_4);
  fastfunc::FastVecMtx4Mul(auStack_70,auStack_f0,auStack_b0);
  MB_MtxToEuler((int)auStack_70,param_1);
  (param_1->pos).x = param_2->x;
  (param_1->pos).y = param_2->y;
  (param_1->pos).z = param_2->z;
  (param_1->pos).w = param_2->w;
  return;
}



//==== 001129d0  ns=mobyutil  size=0x64
// sig: undefined MB_ScaledVecWrapper(void)
// callers(12): 0001e958 mobyupdate_unsorted::UpdateMoby_{336_415}; 001b4378 mobyupdate_unsorted::UpdateMoby_1072; 001e3720 mobyupdate_unsorted::UpdateMoby_1158; 00230308 mobyupdate_unsorted::UpdateMoby_{1263_1393}; 00249498 mobyupdate_unsorted::UpdateMoby_1323; 0024f118 mobyupdate_unsorted::UpdateMoby_1341; 00252140 mobyupdate_unsorted::UpdateMoby_1345; 002d1a58 mobyupdate_unsorted::UpdateMoby_19; 003a82b8 mobyupdate_unsorted::UpdateMoby_a_lot_10; 004495b8 mobyupdate_unsorted::UpdateMoby_a_lot_20; 0047efa0 mobyupdate_unsorted::UpdateMoby_831; 004a58e8 mobyupdate_unsorted::UpdateMoby_a_lot_2
// callees(1): 00502910 fastfunc::FastCheckBsphereInView

/* [p2_mobyutil] scales vec4 arg by constant at 0x1129cc and passes to 0x502910 */

void mobyutil::MB_ScaledVecWrapper(void)

{
  undefined1 local_10 [16];
  
  fastfunc::FastCheckBsphereInView(local_10);
  return;
}



//==== 00112a38  ns=mobyutil  size=0xb0
// sig: undefined MB_ToastMessage(void)
// callers(19): 0008d4b8 hero::Hero_CheckCheatSequences; 00183880 mobyupdate_unsorted::UpdateMoby_{1005_1016}; 0018fdc8 mobyupdate_unsorted::UpdateMoby_1028_BlargPlatform; 001d55c8 mobyupdate_unsorted::UpdateMoby_1120; 001d9d48 mobyupdate_unsorted::UpdateMoby_1134; 0023e140 mobyupdate_unsorted::UpdateMoby_1290; 0024a600 mobyupdate_unsorted::UpdateMoby_1326; 002563b0 mobyupdate_unsorted::UpdateMoby_1354; 00267798 mobyupdate_unsorted::UpdateMoby_1388; 0027b6d8 mobyupdate_unsorted::UpdateMoby_1428; 002ba158 mobyupdate_unsorted::UpdateMoby_18; 0032cef0 mobyupdate_unsorted::UpdateMoby_282; 003361b0 mobyupdate_unsorted::UpdateMoby_298; 00343330 mobyupdate_unsorted::UpdateMoby_328; 0048d9d8 mobyupdate_unsorted::UpdateMoby_851; 004a2d38 mobyupdate_unsorted::UpdateMoby_890; 004a8ec0 mobyupdate_unsorted::UpdateMoby_909; 004b0698 mobyupdate_unsorted::UpdateMoby_918; 004b8b48 mobyupdate_unsorted::UpdateMoby_925
// callees(2): 0007b740 help::help_msg_string_by_index; 005cc8d8 libc::strcpy

void mobyutil::MB_ToastMessage(StringId param_1,int param_2)

{
  char *__src;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar1 = auRam00000000;
  if (param_2 == -1) {
    auVar1 = ZEXT416(0xffffffff);
    auVar1 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
    auVar2 = vectorShiftLeftIntegerWord(auVar1,auVar1);
    auVar1 = loadVectorLeftIndexed(0x70,0x112a34);
    auVar3 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar1 = vectorMultiplyAddFloatingPoint
                       (auVar3,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar2);
    auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar1,0);
  }
  __src = (char *)help::help_msg_string_by_index(param_1);
  libc::strcpy(&g_toastMsgBuff,__src);
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  g_toastMsgTimer =
       storeVectorElementWordIndexed
                 (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,0x5c80,0xa10000);
  return;
}



//==== 00112af0  ns=mobyutil  size=0x128
// sig: void MB_ToastMessageByIndex(int idx)
// callers(8): 001ccf10 mobyupdate_unsorted::UpdateMoby_1109; 001d8090 mobyupdate_unsorted::UpdateMoby_1130; 00267af8 mobyupdate_unsorted::UpdateMoby_{1389_1446}; 00272cd0 mobyupdate_unsorted::UpdateMoby_1419; 004363f0 mobyupdate_unsorted::UpdateMoby_{730_731_790}; 0044b5f0 mobyupdate_unsorted::UpdateMoby_750; 004556e0 mobyupdate_unsorted::UpdateMoby_774; 004b7ce0 mobyupdate_unsorted::UpdateMoby_924
// callees(3): 0007b740 help::help_msg_string_by_index; 005c5ad0 libc::memcpy; 005cc8d8 libc::strcpy

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void mobyutil::MB_ToastMessageByIndex(int idx)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  char *__src;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  StringId aSStack_70 [24];
  
  lVar3 = (longlong)idx;
  lVar1 = ZEXT48(&stack0x00000000) - 0x20;
  puVar2 = (undefined4 *)lVar1;
  puVar2[3] = in_vr31_32_3;
  puVar2[2] = in_vr31_32_2;
  puVar2[1] = in_vr31_32_1;
  *puVar2 = in_vr31_32_0;
  libc::memcpy(aSStack_70,&DAT_00729578,0x4c);
  auVar7 = ZEXT416(0xffffffff);
  auVar5 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
  auVar4 = loadVectorLeftIndexed(lVar1,0x112ae8);
  auVar7 = ZEXT416(0xffffffff);
  auVar8 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
  auVar7 = auVar4 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar4 = vectorShiftLeftIntegerWord(auVar5,auVar5);
  auVar6 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar5 = loadVectorLeftIndexed(4,0x112ae8);
  auVar4 = vectorMultiplyAddFloatingPoint
                     (auVar6,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,auVar4);
  auVar7 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar5 = vectorShiftLeftIntegerWord(auVar8,auVar8);
  lVar3 = lVar3 + (lVar3 >> 0x3f & -lVar3);
  auVar5 = vectorMultiplyAddFloatingPoint
                     (auVar6,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,auVar5);
  auVar7 = ZEXT416(0xffffffff);
  auVar4 = vectorConvertToSignedFixedPointWordSaturate(auVar4,0);
  auVar5 = vectorConvertToSignedFixedPointWordSaturate(auVar5,0);
  auVar7 = vectorCompareEqualToUnsignedWord
                     (auVar4,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60);
  auVar7 = vectorConditionalSelect(auVar4,auVar5,auVar7);
  __src = (char *)help::help_msg_string_by_index
                            (aSStack_70[(int)(lVar3 + (0x12 - lVar3 >> 0x3f & 0x12U - lVar3))]);
  libc::strcpy(&g_toastMsgBuff,__src);
  auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
  g_toastMsgTimer =
       storeVectorElementWordIndexed
                 (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,0x5c80,0xa10000);
  return;
}



//==== 00112c20  ns=mobyutil  size=0x1a0
// sig: undefined MB_UnlockLevel(LevelId param_1)
// callers(16): 000156a8 mobyupdate_unsorted::UpdateMoby_1267; 0013b838 pause::UpdatePause; 001ccf10 mobyupdate_unsorted::UpdateMoby_1109; 001d8090 mobyupdate_unsorted::UpdateMoby_1130; 001df770 mobyupdate_unsorted::UpdateMoby_1144; 001f1b50 mobyupdate_unsorted::UpdateMoby_1190; 00255868 mobyupdate_unsorted::UpdateMoby_1353_GemlikManager; 00267af8 mobyupdate_unsorted::UpdateMoby_{1389_1446}; 00272cd0 mobyupdate_unsorted::UpdateMoby_1419; 00375900 mobyupdate_unsorted::UpdateMoby_436_UmbrisInfobot???; 004363f0 mobyupdate_unsorted::UpdateMoby_{730_731_790}; 0044b5f0 mobyupdate_unsorted::UpdateMoby_750; 004556e0 mobyupdate_unsorted::UpdateMoby_774; 004b1a88 mobyupdate_unsorted::UpdateMoby_919; 004b7ce0 mobyupdate_unsorted::UpdateMoby_924; 004d3044 FUN_004d3044
// callees(3): 0007b740 help::help_msg_string_by_index; 005c5ad0 libc::memcpy; 005cc8d8 libc::strcpy

void mobyutil::MB_UnlockLevel(LevelId param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  StringId aSStack_70 [26];
  
  lVar5 = (longlong)(int)param_1;
  lVar2 = ZEXT48(&stack0x00000000) - 0x20;
  puVar3 = (undefined4 *)lVar2;
  puVar3[3] = in_vr31_32_3;
  puVar3[2] = in_vr31_32_2;
  puVar3[1] = in_vr31_32_1;
  *puVar3 = in_vr31_32_0;
  if ((&g_SeenPlanets.Veldin)[param_1] == '\0') {
    iVar7 = 0;
    lVar6 = 0;
    do {
      pcVar4 = &g_SeenPlanets.Veldin + iVar7;
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 1 + ((LZCOUNT(-(uint)(byte)*pcVar4) << 0x3a) >> 0x3f & lVar6 - (lVar6 + 1));
    } while (iVar7 < 0x14);
    (&g_SeenPlanets.Veldin)[param_1] = '\x01';
    bVar1 = Level != param_1;
    GalacticMap[(int)lVar6] = param_1;
    if (bVar1) {
      libc::memcpy(aSStack_70,&DAT_00729578,0x4c);
      auVar8 = ZEXT416(0xffffffff);
      auVar9 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar8 = ZEXT416(0xffffffff);
      auVar12 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
      auVar8 = loadVectorLeftIndexed(lVar2,0x112c18);
      auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar9 = loadVectorLeftIndexed(4,0x112c18);
      auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar10 = vectorMultiplyAddFloatingPoint
                          (auVar11,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar10
                          );
      auVar8 = vectorShiftLeftIntegerWord(auVar12,auVar12);
      lVar5 = lVar5 + (lVar5 >> 0x3f & -lVar5);
      auVar11 = vectorMultiplyAddFloatingPoint
                          (auVar11,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar8)
      ;
      auVar8 = ZEXT416(0xffffffff);
      auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
      auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
      auVar8 = vectorCompareEqualToUnsignedWord
                         (auVar9,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60);
      auVar8 = vectorConditionalSelect(auVar9,auVar10,auVar8);
      pcVar4 = (char *)help::help_msg_string_by_index
                                 (aSStack_70[(int)(lVar5 + (0x12 - lVar5 >> 0x3f & 0x12U - lVar5))])
      ;
      libc::strcpy(&g_toastMsgBuff,pcVar4);
      auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
      g_toastMsgTimer =
           storeVectorElementWordIndexed
                     (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0x5c80,0xa10000);
    }
  }
  return;
}



//==== 00112dc0  ns=mobyutil  size=0x50
// sig: undefined MB_UnlockTrophy(TROPHIES_ENUM trophy)
// callers(11): 000e76cc memcard::memcard_Update; 0014c370 pause::ShowScreenAfterDrekDefeat; 001d55c8 mobyupdate_unsorted::UpdateMoby_1120; 001d9d48 mobyupdate_unsorted::UpdateMoby_1134; 00245840 mobyupdate_unsorted::UpdateMoby_1316; 0024a600 mobyupdate_unsorted::UpdateMoby_1326; 00255868 mobyupdate_unsorted::UpdateMoby_1353_GemlikManager; 002ba158 mobyupdate_unsorted::UpdateMoby_18; 003361b0 mobyupdate_unsorted::UpdateMoby_298; 003f3e00 mobyupdate_unsorted::UpdateMoby_{633_773_988_989}; 004b8b48 mobyupdate_unsorted::UpdateMoby_925
// callees(1): 004f0310 idol::NPTrophyUnlock

void mobyutil::MB_UnlockTrophy(TROPHIES_ENUM trophy)

{
  if (*(int *)(TrophyMgr + (int)((longlong)(char)trophy << 3) + 0xc) == 0) {
    idol::NPTrophyUnlock(TrophyMgr,trophy);
  }
  return;
}



//==== 00112e18  ns=mobyutil  size=0x360
// sig: undefined MB_UnlockItem(void)
// callers(26): 0016cc50 vendor::PurchaseHandler; 00183880 mobyupdate_unsorted::UpdateMoby_{1005_1016}; 001be558 mobyupdate_unsorted::UpdateMoby_1105; 001d55c8 mobyupdate_unsorted::UpdateMoby_1120; 001dd210 mobyupdate_helpers::M1140_001dd210; 00237e98 mobyupdate_unsorted::UpdateMoby_1283; 0023e140 mobyupdate_unsorted::UpdateMoby_1290; 00245840 mobyupdate_unsorted::UpdateMoby_1316; 002563b0 mobyupdate_unsorted::UpdateMoby_1354; 0025d3a8 mobyupdate_unsorted::UpdateMoby_1377; 00267798 mobyupdate_unsorted::UpdateMoby_1388; 00284e60 mobyupdate_unsorted::UpdateMoby_1455; 002acf90 mobyupdate_unsorted::UpdateMoby_17; 002ba158 mobyupdate_unsorted::UpdateMoby_18; 002cdd18 mobyupdate_helpers::M188_002cdd18; 002e6768 mobyupdate_unsorted::UpdateMoby_20; 00343330 mobyupdate_unsorted::UpdateMoby_328; 004563a4 mobyupdate_helpers::M775_004563a4; 0045b190 mobyupdate_unsorted::UpdateMoby_786; 0045d0f8 mobyupdate_unsorted::UpdateMoby_788; 0048d9d8 mobyupdate_unsorted::UpdateMoby_851; 004a2d38 mobyupdate_unsorted::UpdateMoby_890; 004a4bd0 mobyupdate_unsorted::UpdateMoby_90; 004a8ec0 mobyupdate_unsorted::UpdateMoby_909; 004b8b48 mobyupdate_unsorted::UpdateMoby_925
// callees(3): 0007b740 help::help_msg_string_by_index; 004f0310 idol::NPTrophyUnlock; 005cc8d8 libc::strcpy
// strings: 0096c165: 'None' | 0071fb2c: '������������'

void mobyutil::MB_UnlockItem(longlong param_1,char param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *__src;
  longlong lVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  
  puVar7 = (undefined4 *)(ZEXT48(&stack0x00000000) - 0x40);
  puVar7[3] = in_vr31_32_3;
  puVar7[2] = in_vr31_32_2;
  puVar7[1] = in_vr31_32_1;
  *puVar7 = in_vr31_32_0;
  uVar3 = (uint)param_1;
  CHAR_ARRAY_0096c165[uVar3] = '\x01';
  bVar1 = (&UnlockableItems.field0_0x0)[uVar3];
  if (*(StringId *)
       (&DAT_00729380 +
       (int)(param_1 + 0x25 + ((LZCOUNT(-(uint)bVar1) << 0x3a) >> 0x3f & param_1 - (param_1 + 0x25))
            ) * 4) != ~STR_TO_USE_YOUR_BOMB_0x0000) {
    auVar13 = ZEXT416(0xffffffff);
    auVar12 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
    auVar13 = ZEXT416(0xffffffff);
    auVar16 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
    auVar12 = vectorShiftLeftIntegerWord(auVar12,auVar12);
    auVar13 = loadVectorLeftIndexed(ZEXT48(&stack0x00000000) - 0x40,0x112e10);
    auVar14 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar15 = loadVectorLeftIndexed(4,0x112e10);
    auVar12 = vectorMultiplyAddFloatingPoint
                        (auVar14,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,
                         auVar12);
    auVar13 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar15 = vectorShiftLeftIntegerWord(auVar16,auVar16);
    auVar14 = vectorMultiplyAddFloatingPoint
                        (auVar14,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,
                         auVar15);
    auVar13 = ZEXT416(0xffffffff);
    auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar12,0);
    auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
    auVar13 = vectorCompareEqualToUnsignedWord
                        (auVar12,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60);
    auVar13 = vectorConditionalSelect(auVar12,auVar14,auVar13);
    __src = (char *)help::help_msg_string_by_index
                              (*(StringId *)
                                (&DAT_00729380 +
                                (int)(param_1 + 0x25 +
                                     ((LZCOUNT(-(uint)bVar1) << 0x3a) >> 0x3f &
                                     param_1 - (param_1 + 0x25))) * 4));
    libc::strcpy(&g_toastMsgBuff,__src);
    auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
    bVar1 = (&UnlockableItems.field0_0x0)[uVar3];
    g_toastMsgTimer =
         storeVectorElementWordIndexed
                   (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0x5c80,0xa10000);
  }
  if (bVar1 != 0) {
    return;
  }
  lVar8 = 0;
  iVar9 = 9;
  CHAR_ARRAY_0096c165[uVar3] = '\x01';
  uVar11 = 0;
  (&UnlockableItems.field0_0x0)[uVar3] = '\x01';
  do {
    if (iVar9 != 0x16 && iVar9 != 0xc) {
      lVar8 = lVar8 + ((ulonglong)
                       (LZCOUNT((uint)LZCOUNT((uint)(&UnlockableItems.field0_0x0)[iVar9]) >> 5 ^ 1)
                       << 0x20) >> 0x25 ^ 1);
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x1a);
  if ((0xe < (int)lVar8) && (*(int *)(TrophyMgr + 100) == 0)) {
    idol::NPTrophyUnlock(TrophyMgr,GADGETEER);
  }
  iVar9 = (int)(param_1 << 3) * 3;
  if (*(short *)((int)&DAT_00737d38 + iVar9) != 0) {
    iVar4 = (int)(param_1 << 2);
    uVar2 = *(ushort *)(&DAT_00737d42 + iVar9);
    iVar9 = *(int *)((int)&currentAmmoArray.field0_0x0 + iVar4);
    *(uint *)((int)&currentAmmoArray.field0_0x0 + iVar4) =
         (uint)uVar2 +
         ((uint)((longlong)((ulonglong)uVar2 - (longlong)iVar9) >> 0x3f) & iVar9 - (uint)uVar2);
  }
  iVar9 = 0;
  puVar10 = &DAT_00737bf0;
  while ((uVar3 == 0 || (*puVar10 != uVar3))) {
    iVar9 = iVar9 + 1;
    puVar10 = puVar10 + 1;
    if (0x13 < iVar9) goto LAB_00113080;
  }
  for (iVar9 = 0;
      g_purchasableVendorItems[iVar9] != 0xff &&
      ((byte)g_purchasableVendorItems[iVar9] & 0x3f) != uVar3; iVar9 = iVar9 + 1) {
  }
  g_purchasableVendorItems[iVar9] = (byte)param_1 | 0x40;
LAB_00113080:
  uVar5 = DAT_0096bd98;
  uVar6 = DAT_0096bda4;
  if (param_2 != '\0') {
    iVar9 = (&DAT_00721008)[uVar3 * 4 - (int)(param_1 * -0xf)];
    uVar5 = uVar3;
    if (((iVar9 != 0) && (uVar5 = DAT_0096bd98, uVar6 = uVar3, iVar9 != 3)) &&
       (uVar6 = DAT_0096bda4, iVar9 == 2)) {
      DAT_0096bda0 = uVar3;
    }
  }
  DAT_0096bda4 = uVar6;
  DAT_0096bd98 = uVar5;
  if ((&DAT_00721008)[uVar3 * 4 - (int)(param_1 * -0xf)] != 0) {
    return;
  }
  puVar10 = UINT_ARRAY_0096c1dc;
  do {
    if (*puVar10 == 0) break;
    uVar11 = uVar11 + 1;
    puVar10 = puVar10 + 1;
  } while ((int)uVar11 < 8);
  if (7 < (int)uVar11) {
    return;
  }
  *(uint *)((int)UINT_ARRAY_0096c1dc + (int)((uVar11 & 0xffffffff) << 2)) = uVar3;
  return;
}



//==== 001131a8  ns=mobyutil  size=0xbc
// sig: void SetNtscPalTiming(void)
// callers(2): 0001401c boot::boot; 000dcf58 loaders::NAVG_LoadFile
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void mobyutil::SetNtscPalTiming(void)

{
  bool bVar1;
  
  bVar1 = *(int *)(g_viewMtxPtr + 0x18) != 0x3c;
  if (bVar1) {
    DAT_0071f420 = 6;
    DAT_0071f408 = 1.2;
    DAT_0071f40c = 1.44;
    animationSpeed = 0.8333333;
    g_FrameTime = 0.020000001;
    DAT_0071f418 = 0x39d1b718;
    DAT_0071f41c = 0x370637bd;
    DAT_0071f424 = 0.02;
  }
  else {
    DAT_0071f420 = 5;
    animationSpeed = 1.0;
    DAT_0071f424 = 0.016666668;
    DAT_0071f418 = 0x3991a2b4;
    DAT_0071f41c = 0x369b5837;
    DAT_0071f408 = animationSpeed;
    DAT_0071f40c = animationSpeed;
    g_FrameTime = DAT_0071f424;
  }
  g_IsPal = (uint)bVar1;
  return;
}



//==== 00113288  ns=mobyutil  size=0x22c
// sig: undefined ???_MB_BuildScaledRotMtx(void)
// callers(1): 003c3730 mobyupdate_unsorted::UpdateMoby_574
// callees(5): 0010c1e8 mobyutil::MB_MtxToEuler; 00500af8 fastfunc::FastMtx4Identity; 00501188 fastfunc::FastMtxScale; 0050162c fastfunc::FastVecMtx4Mul; 005016e0 fastfunc::FastVecAdd

void mobyutil::____MB_BuildScaledRotMtx
               (double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined1 local_1a0 [64];
  undefined1 auStack_160 [64];
  undefined1 auStack_120 [64];
  float afStack_e0 [16];
  undefined1 auStack_a0 [64];
  
  uStack00000030 = param_2;
  uStack00000038 = param_3;
  uStack00000050 = param_6;
  uStack00000058 = param_7;
  fastfunc::FastVecMtx4Mul(auStack_160,local_1a0,local_1a0);
  dVar12 = 3.141592502593994;
  fVar1 = (float)(param_1 + 1.570796251296997);
  dVar11 = -3.141592502593994;
  dVar10 = -0.16666656732559204;
  dVar9 = 0.008333025500178337;
  dVar8 = -0.0001980741071747616;
  dVar7 = 2.601886990305502e-06;
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar4 = fVar3 * fVar3;
  fVar1 = fVar4 * fVar4 * fVar3;
  fVar2 = fVar4 * fVar1;
  fastfunc::FastMtxScale
            ((double)(1.0 - (fVar4 * fVar2 * 2.601887e-06 +
                            fVar2 * -0.0001980741 +
                            fVar1 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3)),afStack_e0,
             auStack_160);
  dVar5 = (double)(float)(dVar12 - param_1);
  if (param_1 - (double)(float)(dVar12 - param_1) < 0.0) {
    dVar5 = param_1;
  }
  dVar12 = (double)(float)(dVar11 - param_1);
  if ((double)(float)(dVar11 - param_1) - dVar5 < 0.0) {
    dVar12 = dVar5;
  }
  dVar11 = (double)(float)(dVar12 * dVar12);
  dVar6 = (double)(float)(dVar11 * (double)(float)(dVar11 * dVar12));
  dVar5 = (double)(float)(dVar11 * dVar6);
  fastfunc::FastMtxScale
            ((double)(float)((double)(float)(dVar11 * dVar5) * dVar7 +
                            (double)(float)(dVar5 * dVar8 +
                                           (double)(float)(dVar6 * dVar9 +
                                                          (double)(float)((double)(float)(dVar11 * 
                                                  dVar12) * dVar10 + dVar12)))),auStack_120,
             local_1a0);
  fastfunc::FastVecAdd(auStack_120,auStack_120,afStack_e0);
  fastfunc::FastMtx4Identity(afStack_e0);
  fastfunc::FastVecAdd(auStack_a0,auStack_120,afStack_e0);
  MB_MtxToEuler((int)auStack_a0,(MobyInstance *)&stack0x00000050);
  return;
}



//==== 001134c8  ns=mobyutil  size=0x120
// sig: void MB_compressVector(float * v, int * out)
// callers(4): 001206e8 partupd::SpawnPart_2; 00133bf8 partupd::SpawnPart_71; 00133dd8 partupd::UpdatePart_71; 00180998 mobyupdate_helpers::M100_00180998
// callees(2): 005007d8 fastfunc::FastVecToPackedChars; 00502758 fastfunc::FastDoubleToInt

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void mobyutil::MB_compressVector(float *v,int *out)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  int iVar4;
  Vec4 local_40;
  longlong local_30;
  
  fVar1 = ABS(v[1]);
  if (ABS(v[1]) - ABS(*v) < 0.0) {
    fVar1 = ABS(*v);
  }
  fVar2 = ABS(v[2]);
  if (ABS(v[2]) - fVar1 < 0.0) {
    fVar2 = fVar1;
  }
  lVar3 = fastfunc::FastDoubleToInt((double)(fVar2 * 10000.0 * 0.015873017));
  lVar3 = lVar3 + (0xff - lVar3 >> 0x3f & 0xffU - lVar3);
  iVar4 = (int)lVar3;
  local_30 = (longlong)(int)(iVar4 + ((uint)(lVar3 + -1 >> 0x3f) & 1U - iVar4));
  local_40.w = (float)local_30;
  fVar1 = 1.0 / (local_40.w * 0.0001);
  local_40.x = *v * fVar1 + 127.0;
  local_40.y = v[1] * fVar1 + 127.0;
  local_40.z = v[2] * fVar1 + 127.0;
  iVar4 = fastfunc::FastVecToPackedChars(&local_40);
  *out = iVar4;
  return;
}



//==== 001135f0  ns=mobyutil  size=0x9c
// sig: void MB_decompressVector(float * out, int * in)
// callers(5): 001206e8 partupd::SpawnPart_2; 00120918 partupd::UpdatePart_2; 00133bf8 partupd::SpawnPart_71; 00133dd8 partupd::UpdatePart_71; 0018150c mobyupdate_helpers::M1000_0018150c
// callees(1): 00500720 fastfunc::FastVecFromPackedBits

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void mobyutil::MB_decompressVector(float *out,int *in)

{
  float fVar1;
  double dVar2;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  dVar2 = 127.0;
  fastfunc::FastVecFromPackedBits(&local_30,*in);
  fVar1 = local_24 * 0.0001;
  out[3] = local_24;
  *out = (float)((double)local_30 - dVar2) * fVar1;
  out[1] = (float)((double)local_2c - dVar2) * fVar1;
  out[2] = (float)((double)local_28 - dVar2) * fVar1;
  return;
}



//==== 001136c8  ns=mobyutil  size=0x710
// sig: undefined DoMeander(void)
// callers(6): 00307270 mobyupdate_unsorted::UpdateMoby_238; 0034b2e8 mobyupdate_unsorted::UpdateMoby_340; 00446088 mobyupdate_unsorted::UpdateMoby_749; 00451bc8 mobyupdate_unsorted::UpdateMoby_763; 00492d98 mobyupdate_unsorted::UpdateMoby_857; 004993b0 mobyupdate_unsorted::UpdateMoby_862
// callees(7): 00057820 collproc::CollLine; 000ffcd0 mobyutil::CollMovingSphere; 00109ec0 mobyutil::DeltAng; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005c8318 rand

/* [p2_mobyutil] random wander within MeanderVars (ang 0x24, timer 0x28, min/maxTimer 0x2c/0x2e),
   CollMovingSphere
   [p2_mobyutil] random wander within MeanderVars (ang 0x24, timer 0x28, min/maxTimer 0x2c/0x2e),
   CollMovingSphere */

void mobyutil::DoMeander(undefined8 param_1,undefined8 param_2,int param_3,float *param_4,
                        int param_5)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  short sVar9;
  short sVar10;
  ulonglong *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  uint uVar20;
  int iVar21;
  int iVar22;
  longlong lVar18;
  longlong lVar19;
  int iVar23;
  longlong lVar24;
  float *pfVar25;
  ulonglong uVar26;
  longlong lVar27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar31;
  float fVar32;
  
  uVar17 = ZEXT48(&stack0x00000000);
  lVar19 = uVar17 - 0x140;
  puVar11 = (ulonglong *)lVar19;
  *puVar11 = uVar17;
  puVar11[0x2a] = in_LR;
  puVar11[0x26] = in_f30;
  puVar11[0x27] = in_f31;
  puVar11[0x25] = unaff_r31;
  puVar11[0x24] = unaff_r30;
  sVar9 = *(short *)(param_4 + 10);
  puVar11[0x23] = unaff_r29;
  puVar11[0x22] = unaff_r28;
  if (sVar9 == 0) {
    uVar20 = rand();
    puVar11[0x1f] = (longlong)(int)((int)uVar20 >> 0xf & 0xfff);
    sVar9 = *(short *)(param_4 + 0xb);
    sVar10 = *(short *)((int)param_4 + 0x2e);
    fVar32 = (float)(longlong)puVar11[0x1f] * 1.8325956 * 0.00024414062 + 0.7853982;
    if ((uVar20 >> 0xf & 1) != 0) {
      fVar32 = -((float)(longlong)puVar11[0x1f] * 1.8325956 * 0.00024414062 + 0.7853982);
    }
    param_4[9] = param_4[9] + fVar32;
    iVar21 = rand();
    iVar22 = (int)sVar10 - (int)sVar9;
    uVar20 = iVar21 >> 0xf & 0x7fff;
    sVar10 = (short)((int)uVar20 / (iVar22 + 1));
    *(undefined2 *)(param_4 + 10) = 1;
    *(short *)((int)param_4 + 0x2a) = ((short)uVar20 - (sVar10 * (short)iVar22 + sVar10)) + sVar9;
  }
  else {
    fVar32 = DeltAng(param_4[9],param_4[6],(float *)(param_3 + 0x48),(int)param_4,param_5,0);
    iVar21 = fastfunc::FastDecTimerS16((double)fVar32,(int)param_4 + 0x2a);
    if (iVar21 != 0) {
      *(undefined2 *)(param_4 + 10) = 0;
    }
  }
  fVar32 = *(float *)(param_3 + 0x48);
  fVar1 = fVar32 + 1.5707963;
  fVar4 = 3.1415925 - fVar32;
  if (fVar32 - (3.1415925 - fVar32) < 0.0) {
    fVar4 = fVar32;
  }
  fVar5 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar5 = fVar1;
  }
  fVar7 = -3.1415925 - fVar32;
  if ((-3.1415925 - fVar32) - fVar4 < 0.0) {
    fVar7 = fVar4;
  }
  fVar32 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
    fVar32 = fVar5;
  }
  fVar8 = fVar7 * fVar7;
  fVar12 = fVar32 * fVar32;
  fVar15 = fVar8 * fVar8 * fVar7;
  fVar1 = *(float *)(param_3 + 0x10);
  fVar13 = fVar12 * fVar12 * fVar32;
  fVar16 = fVar8 * fVar15;
  uVar2 = *(undefined4 *)(param_3 + 0x18);
  uVar3 = *(undefined4 *)(param_3 + 0x1c);
  fVar14 = fVar12 * fVar13;
  fVar4 = param_4[5];
  fVar5 = param_4[4];
  *(float *)((int)puVar11 + 0x74) =
       (fVar8 * fVar16 * 2.601887e-06 +
       fVar16 * -0.0001980741 + fVar15 * 0.0083330255 + fVar8 * fVar7 * -0.16666657 + fVar7) * fVar4
       + *(float *)(param_3 + 0x14);
  *(undefined4 *)((int)puVar11 + 0x7c) = uVar3;
  *(undefined4 *)(puVar11 + 0xf) = uVar2;
  *(float *)(puVar11 + 0xe) =
       (fVar12 * fVar14 * 2.601887e-06 +
       fVar14 * -0.0001980741 + fVar13 * 0.0083330255 + fVar12 * fVar32 * -0.16666657 + fVar32) *
       fVar4 + fVar1;
  iVar21 = CollMovingSphere(param_1,(double)fVar5,param_2,0x3fe0c15240000000,param_3,param_3 + 0x10,
                            uVar17 - 0xd0);
  uVar2 = *(undefined4 *)(param_3 + 0x10);
  uVar3 = *(undefined4 *)(param_3 + 0x14);
  *(undefined4 *)(puVar11 + 0x10) = uVar2;
  uVar6 = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)((int)puVar11 + 0x84) = uVar3;
  *(undefined4 *)((int)puVar11 + 0x8c) = uVar6;
  *(undefined4 *)(puVar11 + 0x11) = 0x3c23d70a;
  *(undefined4 *)(puVar11 + 0x12) = uVar2;
  *(undefined4 *)((int)puVar11 + 0x94) = uVar3;
  *(undefined4 *)((int)puVar11 + 0x9c) = uVar6;
  *(float *)(puVar11 + 0x13) = *(float *)(param_3 + 0x18) + 0.5;
  iVar22 = collproc::CollLine(uVar17 - 0xb0,uVar17 - 0xc0,2,0,0);
  dVar29 = 0.0;
  fVar32 = *(float *)(param_3 + 0x10);
  fVar1 = *param_4;
  fVar4 = *(float *)(param_3 + 0x14);
  fVar5 = param_4[1];
  fVar7 = param_4[7];
  fVar8 = param_4[8];
  dVar31 = (double)param_4[9];
  dVar30 = dVar29;
  if (iVar22 != 0) {
    dVar30 = (double)CollOutput.ip.z;
  }
  fVar13 = fVar4 - fVar5;
  fVar12 = fVar32 - fVar1;
  *(float *)(param_3 + 0x18) = (float)dVar30;
  if ((iVar21 == 0) || (fVar7 < SQRT(fVar12 * fVar12 + fVar13 * fVar13))) {
    fVar1 = fVar1 - fVar32;
    fVar5 = fVar5 - fVar4;
    fVar7 = ABS(fVar1);
    fVar4 = ABS(fVar5);
    *(float *)((int)puVar11 + 0xac) = fVar1;
    *(float *)(puVar11 + 0x16) = fVar5;
    *(float *)((int)puVar11 + 0xb4) = fVar7 - fVar4;
    uVar26 = (ulonglong)(*(uint *)((int)puVar11 + 0xac) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar11 + 0xb4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar11 + 0x16) >> 0x1d) & 4;
    fVar32 = ABS(*(float *)((int)puVar11 + 0xac));
    if (*(float *)((int)puVar11 + 0xb4) - 0.0 < 0.0) {
      fVar32 = fVar4;
    }
    fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
    fVar4 = ABS(*(float *)(puVar11 + 0x16));
    if (*(float *)((int)puVar11 + 0xb4) - 0.0 < 0.0) {
      fVar4 = fVar7;
    }
    fVar5 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
    if (0.0 < fVar32) {
      lVar18 = uVar17 - 0x130;
      lVar24 = uVar17 - 0x68;
      lVar27 = uVar17 - 0x58;
      lVar28 = 2;
      fVar32 = (fVar4 - fVar32) / (fVar4 + fVar32);
      fVar4 = fVar32 * fVar32;
      *(float *)((int)puVar11 + 0xe4) = fVar32;
      *(float *)((int)puVar11 + 0xdc) = fVar32;
      *(float *)(puVar11 + 0x1c) = fVar32;
      *(float *)(puVar11 + 0x1b) = fVar32;
      fVar32 = fVar4 * fVar4;
      *(float *)((int)puVar11 + 0xdc) = *(float *)((int)puVar11 + 0xdc) * fVar4;
      *(float *)(puVar11 + 0x1c) = *(float *)(puVar11 + 0x1c) * fVar32;
      *(float *)((int)puVar11 + 0xe4) = *(float *)((int)puVar11 + 0xe4) * fVar32 * fVar4;
      do {
        *(float *)((int)lVar18 + 0xd8) = *(float *)((int)lVar18 + 200) * fVar32 * fVar32;
        iVar21 = (int)lVar24;
        lVar18 = lVar18 + 8;
        lVar24 = lVar24 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar21 + 4) * fVar32 * fVar32;
        lVar27 = lVar27 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar27 = uVar17 - 0x68;
      pfVar25 = (float *)&DAT_007358e0;
      lVar18 = lVar19;
      lVar24 = lVar27;
      do {
        fVar32 = *pfVar25;
        fVar4 = pfVar25[1];
        pfVar25 = pfVar25 + 2;
        *(float *)((int)lVar18 + 0xd8) = *(float *)((int)lVar18 + 0xd8) * fVar32;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar4;
        lVar24 = lVar24 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar18 = 2;
      do {
        iVar21 = (int)lVar19;
        iVar22 = (int)lVar27;
        lVar19 = lVar19 + 0x10;
        lVar27 = lVar27 + 0x10;
        dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar21 + 0xd8)) +
                          *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) + *(float *)(iVar22 + 0xc)
                         );
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar1 + fVar5);
    }
    param_4[9] = (float)dVar29;
    fVar32 = animationSpeed;
    puVar11[0x1f] = (longlong)(int)(animationSpeed * 30.5);
    iVar21 = *(int *)((int)puVar11 + 0xfc);
    puVar11[0x1f] = (longlong)(int)(fVar32 * 90.5);
    iVar22 = *(int *)((int)puVar11 + 0xfc);
    iVar23 = rand();
    iVar22 = iVar22 - iVar21;
    uVar20 = iVar23 >> 0xf & 0x7fff;
    sVar9 = (short)((int)uVar20 / (iVar22 + 1));
    *(undefined2 *)(param_4 + 10) = 1;
    *(short *)((int)param_4 + 0x2a) =
         ((short)uVar20 - (sVar9 * (short)iVar22 + sVar9)) + (short)iVar21;
  }
  else {
    fVar4 = fVar4 - g_heroPosition.y;
    fVar32 = fVar32 - g_heroPosition.x;
    fVar1 = SQRT(fVar32 * fVar32 + fVar4 * fVar4);
    if (fVar1 < fVar8) {
      *(float *)(puVar11 + 0x14) = fVar32;
      *(float *)((int)puVar11 + 0xa4) = fVar4;
      dVar30 = (double)(fVar1 / fVar8);
      *(float *)(puVar11 + 0x15) = ABS(fVar32) - ABS(fVar4);
      uVar26 = (ulonglong)(*(uint *)(puVar11 + 0x14) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar11 + 0x15) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar11 + 0xa4) >> 0x1d) & 4;
      fVar1 = ABS(*(float *)(puVar11 + 0x14));
      if (*(float *)(puVar11 + 0x15) - 0.0 < 0.0) {
        fVar1 = ABS(fVar4);
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
      fVar4 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
      fVar7 = ABS(*(float *)((int)puVar11 + 0xa4));
      if (*(float *)(puVar11 + 0x15) - 0.0 < 0.0) {
        fVar7 = ABS(fVar32);
      }
      if (0.0 < fVar1) {
        lVar18 = uVar17 - 0x130;
        lVar27 = uVar17 - 0x78;
        lVar24 = uVar17 - 0x88;
        lVar28 = 2;
        fVar32 = (fVar7 - fVar1) / (fVar7 + fVar1);
        fVar1 = fVar32 * fVar32;
        *(float *)((int)puVar11 + 0xc4) = fVar32;
        *(float *)((int)puVar11 + 0xbc) = fVar32;
        *(float *)(puVar11 + 0x18) = fVar32;
        *(float *)(puVar11 + 0x17) = fVar32;
        fVar32 = fVar1 * fVar1;
        *(float *)((int)puVar11 + 0xbc) = *(float *)((int)puVar11 + 0xbc) * fVar1;
        *(float *)(puVar11 + 0x18) = *(float *)(puVar11 + 0x18) * fVar32;
        *(float *)((int)puVar11 + 0xc4) = *(float *)((int)puVar11 + 0xc4) * fVar32 * fVar1;
        do {
          *(float *)((int)lVar18 + 0xb8) = *(float *)((int)lVar18 + 0xa8) * fVar32 * fVar32;
          iVar21 = (int)lVar24;
          lVar24 = lVar24 + 8;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar21 + 4) * fVar32 * fVar32;
          lVar27 = lVar27 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar27 = uVar17 - 0x88;
        pfVar25 = (float *)&DAT_007358e0;
        lVar18 = lVar19;
        lVar24 = lVar27;
        do {
          fVar32 = *pfVar25;
          fVar1 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar18 + 0xb8) = *(float *)((int)lVar18 + 0xb8) * fVar32;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar1;
          lVar24 = lVar24 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar18 = 2;
        do {
          iVar21 = (int)lVar19;
          lVar19 = lVar19 + 0x10;
          iVar22 = (int)lVar27;
          lVar27 = lVar27 + 0x10;
          dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar21 + 0xb8)) +
                            *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) +
                           *(float *)(iVar22 + 0xc));
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar5 + fVar4);
      }
      dVar29 = (double)fastfunc::FastDiffRots(dVar29,dVar31);
      dVar30 = (double)fastfunc::FastWrapRot((float)dVar31,(float)(dVar30 * dVar29));
      param_4[9] = (float)dVar30;
    }
  }
  return;
}



//==== 00113de0  ns=mobyutil  size=0xa0
// sig: float MB_RoundToDecimals(float val, int unused, int nDigits)
// callers(0): 
// callees(1): 00502758 fastfunc::FastDoubleToInt

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float mobyutil::MB_RoundToDecimals(float val,int unused,int nDigits)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  iVar2 = 1;
  iVar1 = 1;
  if (0 < nDigits) {
    do {
      nDigits = nDigits + -1;
      iVar1 = iVar2 * 10;
      iVar2 = iVar1;
    } while (0 < nDigits);
  }
  dVar3 = (double)(longlong)iVar1;
  iVar1 = fastfunc::FastDoubleToInt
                    ((double)(float)((double)(1.0 / (float)(dVar3 * 2.0) + val) * dVar3));
  return (float)((double)(longlong)iVar1 / dVar3);
}



//==== 00113e88  ns=mobyutil  size=0x108
// sig: int MB_MayaFrameTrigger(float frame, MobyInstance * pMoby)
// callers(35): 0016bd58 vendor::Vendor_UpdateDude; 00189bd8 mobyupdate_unsorted::UpdateMoby_1022; 00190d60 mobyupdate_unsorted::UpdateMoby_1032; 0019aea0 mobyupdate_unsorted::UpdateMoby_1045; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 001de6a0 mobyupdate_helpers::M1140_001de6a0; 001f6028 mobyupdate_unsorted::UpdateMoby_1197; 001f7980 mobyupdate_unsorted::UpdateMoby_1199; 00211748 mobyupdate_unsorted::UpdateMoby_1229; 00214a98 mobyupdate_unsorted::UpdateMoby_1231; 002766e0 mobyupdate_unsorted::UpdateMoby_1422; 002806b0 mobyupdate_unsorted::UpdateMoby_1445; 00284460 mobyupdate_unsorted::UpdateMoby_1454; 002add88 mobyupdate_unsorted::UpdateMoby_170; 002d6498 mobyupdate_unsorted::UpdateMoby_1906; 00304418 mobyupdate_unsorted::UpdateMoby_234; 00307270 mobyupdate_unsorted::UpdateMoby_238; 00317338 mobyupdate_unsorted::UpdateMoby_252; 0031c218 mobyupdate_unsorted::UpdateMoby_253; 00332c38 mobyupdate_unsorted::UpdateMoby_294; 0033dad8 mobyupdate_unsorted::UpdateMoby_31; 00392910 mobyupdate_unsorted::UpdateMoby_46; 0039dbd0 mobyupdate_unsorted::UpdateMoby_48; 003a14a8 mobyupdate_unsorted::UpdateMoby_491; 003ad150 mobyupdate_unsorted::UpdateMoby_541
// callees(2): 000efe40 mobyfunc::BlendAnimFrame; 00502758 fastfunc::FastDoubleToInt

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mobyutil::MB_MayaFrameTrigger(float frame,MobyInstance *pMoby)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar3 = (double)frame;
  dVar4 = (double)mobyfunc::BlendAnimFrame(pMoby);
  dVar5 = 10000.0;
  dVar6 = 4.999999873689376e-05;
  iVar1 = fastfunc::FastDoubleToInt((double)(((float)(dVar4 - dVar3) + 5e-05) * 10000.0));
  dVar7 = (double)(float)((double)(longlong)iVar1 / dVar5);
  iVar1 = fastfunc::FastDoubleToInt
                    ((double)(float)((double)(float)((double)pMoby->unk58 *
                                                     (double)pMoby->frameSpeed + dVar6) * dVar5));
  iVar2 = 0;
  if ((dVar3 <= dVar4) && (dVar7 < (double)(float)((double)(longlong)iVar1 / dVar5))) {
    iVar2 = 1;
  }
  return iVar2;
}



//==== 00113fa0  ns=mobyutil  size=0x1a0
// sig: undefined MB_LineCrossesSpline(void)
// callers(9): 00114148 mobyutil::MB_SplineCrossCheck; 0011440c mobyutil::MB_SplineMarkCrossings; 00114d58 mobyutil::MB_SplineFindRouteNode; 001eb4f8 mobyupdate_unsorted::UpdateMoby_1169; 00225b48 mobyupdate_unsorted::UpdateMoby_1246; 00327f50 mobyupdate_unsorted::UpdateMoby_28; 003e3378 mobyupdate_helpers::M623_003e3378; 00446088 mobyupdate_unsorted::UpdateMoby_749; 00492d98 mobyupdate_unsorted::UpdateMoby_857
// callees(0): 

undefined8 mobyutil::MB_LineCrossesSpline(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int *piVar11;
  int iVar12;
  bool bVar13;
  
  fVar1 = param_2[1];
  fVar4 = param_3[1] - fVar1;
  fVar2 = *param_2;
  fVar5 = *param_3 - fVar2;
  fVar6 = fVar5 * fVar5 + fVar4 * fVar4;
  fVar7 = 1.0 / SQRT(fVar6);
  fVar10 = SQRT(fVar6);
  iVar12 = 1;
  fVar7 = -(fVar6 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
  fVar7 = -(fVar6 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
  piVar11 = *(int **)((int)Splines + (int)(param_1 << 2));
  fVar7 = (-(fVar6 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7) / fVar10;
  fVar6 = (float)piVar11[4] - fVar2;
  iVar3 = *piVar11;
  fVar8 = param_3[3] * fVar6 + (float)piVar11[7];
  fVar5 = fVar7 * fVar5;
  fVar7 = fVar7 * fVar4;
  fVar4 = 0.0;
  if (0.0 - fVar10 < 0.0) {
    fVar4 = fVar5;
  }
  fVar9 = 0.0;
  if (0.0 - fVar10 < 0.0) {
    fVar9 = fVar7;
  }
  if (fVar10 - 0.0 < 0.0) {
    fVar4 = fVar5;
  }
  if (fVar10 - 0.0 < 0.0) {
    fVar9 = fVar7;
  }
  fVar5 = fVar4 * fVar6 + fVar9 * ((float)piVar11[5] - fVar1);
  fVar6 = fVar9 * fVar6 + -(fVar4 * ((float)piVar11[5] - fVar1));
  if (1 < iVar3) {
    do {
      bVar13 = fVar8 != 0.0;
      fVar7 = (float)piVar11[8] - fVar2;
      fVar8 = param_3[3] * fVar7 + (float)piVar11[0xb];
      fVar10 = fVar4 * fVar7 + fVar9 * ((float)piVar11[9] - fVar1);
      fVar7 = fVar9 * fVar7 + -(fVar4 * ((float)piVar11[9] - fVar1));
      if ((((bVar13) || (fVar8 != 0.0)) && (fVar7 * fVar6 < 0.0)) &&
         (fVar5 = -(((fVar5 - fVar10) / (fVar6 - fVar7)) * fVar7) + fVar10,
         fVar5 < 1.0 && 0.0 < fVar5)) {
        return 1;
      }
      iVar12 = iVar12 + 1;
      fVar5 = fVar10;
      fVar6 = fVar7;
      piVar11 = piVar11 + 4;
    } while (iVar12 < iVar3);
  }
  return 0;
}



//==== 00114148  ns=mobyutil  size=0x240
// sig: undefined MB_SplineCrossCheck(void)
// callers(3): 00114d58 mobyutil::MB_SplineFindRouteNode; 00490fb0 mobyupdate_helpers::M857_00490fb0; 00492d98 mobyupdate_unsorted::UpdateMoby_857
// callees(1): 00113fa0 mobyutil::MB_LineCrossesSpline

uint mobyutil::MB_SplineCrossCheck
               (double param_1,undefined4 *param_2,int param_3,undefined8 param_4,longlong param_5,
               undefined4 param_6)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  double dVar9;
  undefined1 local_a0 [16];
  undefined1 local_90 [24];
  
  uVar5 = 0;
  piVar1 = *(int **)((int)Splines + (int)(param_5 << 2));
  uVar4 = 0;
  if (0 < *piVar1) {
    dVar9 = 0.0;
    piVar8 = piVar1;
    do {
      piVar8 = piVar8 + 4;
      iVar6 = 0;
      bVar2 = false;
      puVar7 = param_2;
      if (0 < param_3) {
        do {
          if (param_1 == dVar9) {
            iVar3 = MB_LineCrossesSpline(*puVar7,param_6,piVar8);
            if (iVar3 != 0) {
              bVar2 = true;
            }
          }
          else {
            iVar3 = MB_LineCrossesSpline(*puVar7,local_a0,piVar8);
            if (iVar3 == 0) {
              iVar3 = MB_LineCrossesSpline(*puVar7,local_90,piVar8);
              if (iVar3 != 0) {
                bVar2 = true;
              }
            }
            else {
              bVar2 = true;
            }
          }
          if (bVar2) goto LAB_00114320;
          iVar6 = iVar6 + 1;
          puVar7 = puVar7 + 1;
        } while (iVar6 < param_3);
      }
      uVar4 = uVar4 | 1 << (uVar5 & 0x3f);
LAB_00114320:
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < *piVar1);
  }
  return uVar4;
}



//==== 00114388  ns=mobyutil  size=0x84
// sig: undefined MB_SplineSegmentsReachable(void)
// callers(0): 
// callees(0): 

uint mobyutil::MB_SplineSegmentsReachable(longlong param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = 0;
  do {
    if ((param_3 & param_2) != 0) {
      return param_3 & param_2;
    }
    uVar3 = 0;
    uVar4 = param_3;
    iVar2 = *(int *)((int)Splines + (int)(param_1 << 2));
    do {
      if ((1 << (uVar3 & 0x3f) & param_3) != 0) {
        uVar4 = uVar4 | *(uint *)(iVar2 + 0x1c);
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x10;
    } while ((int)uVar3 < 0x20);
    iVar1 = iVar1 + 1;
    param_3 = uVar4;
  } while (iVar1 < 0x20);
  return 0;
}



//==== 0011440c  ns=mobyutil  size=0x1c0
// sig: undefined MB_SplineMarkCrossings(void)
// callers(7): 0019aea0 mobyupdate_unsorted::UpdateMoby_1045; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 001dd210 mobyupdate_helpers::M1140_001dd210; 00222fe0 mobyupdate_unsorted::UpdateMoby_1243; 003e5228 mobyupdate_unsorted::UpdateMoby_623; 0048f650 mobyupdate_unsorted::UpdateMoby_856; 00492d98 mobyupdate_unsorted::UpdateMoby_857
// callees(1): 00113fa0 mobyutil::MB_LineCrossesSpline

void mobyutil::MB_SplineMarkCrossings(undefined4 *param_1,int param_2,longlong param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  uint *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  
  iVar4 = 0;
  piVar1 = *(int **)((int)Splines + (int)(param_3 << 2));
  iVar6 = *piVar1;
  piVar5 = piVar1;
  if (0 < iVar6) {
    do {
      iVar4 = iVar4 + 1;
      iVar6 = *piVar1;
      piVar5[7] = 0;
      piVar5 = piVar5 + 4;
    } while (iVar4 < iVar6);
  }
  if (0 < iVar6) {
    piVar7 = piVar1 + 4;
    puVar10 = (uint *)(piVar1 + 7);
    uVar3 = 0;
    piVar5 = piVar1;
    piVar8 = piVar7;
    do {
      uVar12 = uVar3 + 1;
      piVar8 = piVar8 + 4;
      if ((int)uVar12 < iVar6) {
        uVar13 = uVar12;
        piVar2 = piVar5;
        piVar9 = piVar8;
        do {
          iVar6 = 0;
          puVar11 = param_1;
          if (0 < param_2) {
            do {
              iVar4 = MB_LineCrossesSpline(*puVar11,piVar7,piVar9);
              if (iVar4 != 0) goto LAB_00114548;
              iVar6 = iVar6 + 1;
              puVar11 = puVar11 + 1;
            } while (iVar6 < param_2);
          }
          *puVar10 = *puVar10 | 1 << (uVar13 & 0x3f);
          piVar2[0xb] = piVar2[0xb] | 1 << (uVar3 & 0x3f);
LAB_00114548:
          iVar6 = *piVar1;
          uVar13 = uVar13 + 1;
          piVar9 = piVar9 + 4;
          piVar2 = piVar2 + 4;
        } while ((int)uVar13 < iVar6);
      }
      puVar10 = puVar10 + 4;
      piVar5 = piVar5 + 4;
      piVar7 = piVar7 + 4;
      uVar3 = uVar12;
    } while ((int)uVar12 < iVar6);
  }
  return;
}



//==== 001145d8  ns=mobyutil  size=0x274
// sig: undefined MB_PushOutOfSplineWalls(void)
// callers(15): 001a02d8 mobyupdate_unsorted::UpdateMoby_1048; 001a2558 mobyupdate_helpers::M1051_001a2558; 001a5f50 mobyupdate_unsorted::UpdateMoby_1051; 001b07a8 mobyupdate_unsorted::UpdateMoby_1068; 001de458 mobyupdate_helpers::M1140_001de458; 00222c50 mobyupdate_helpers::M1243_00222c50; 0022e580 mobyupdate_unsorted::UpdateMoby_1262; 00280018 mobyupdate_helpers::M1445_00280018; 002d5b20 mobyupdate_helpers::M1906_002d5b20; 00369d38 mobyupdate_unsorted::UpdateMoby_424; 003c70d8 mobyupdate_helpers::M576_003c70d8; 003e5228 mobyupdate_unsorted::UpdateMoby_623; 00446088 mobyupdate_unsorted::UpdateMoby_749; 00479880 mobyupdate_helpers::M827_00479880; 00492d98 mobyupdate_unsorted::UpdateMoby_857
// callees(0): 

int mobyutil::MB_PushOutOfSplineWalls
              (double param_1,longlong param_2,undefined8 param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
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
  
  dVar19 = (double)*param_4;
  dVar18 = (double)param_4[1];
  iVar8 = 0;
  iVar9 = 0;
  piVar5 = *(int **)((int)Splines + (int)(param_2 << 2));
  fVar3 = param_4[2];
  fVar4 = param_4[3];
  if (0 < *piVar5 + -1) {
    iVar10 = 0;
    dVar12 = 0.0;
    do {
      if ((*(int *)((int)piVar5 + iVar10 + 0x1c) != 0) ||
         (*(int *)((int)piVar5 + iVar10 + 0x2c) != 0)) {
        dVar14 = (double)*(float *)((int)piVar5 + iVar10 + 0x14);
        dVar17 = (double)*(float *)((int)piVar5 + iVar10 + 0x10);
        fVar1 = (float)((double)*(float *)((int)piVar5 + iVar10 + 0x24) - dVar14);
        fVar2 = (float)((double)*(float *)((int)piVar5 + iVar10 + 0x20) - dVar17);
        dVar15 = (double)(float)(dVar19 - dVar17);
        dVar13 = (double)(float)(dVar18 - dVar14);
        fVar7 = fVar2 * fVar2 + fVar1 * fVar1;
        dVar11 = dVar12;
        dVar20 = dVar12;
        if (SQRT(fVar7) != 0.0) {
          fVar6 = 1.0 / SQRT(fVar7);
          fVar6 = -(fVar7 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
          fVar6 = -(fVar7 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
          fVar6 = -(fVar7 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
          dVar11 = (double)(fVar6 * fVar2);
          dVar20 = (double)(fVar6 * fVar1);
        }
        if (ABS((double)(float)(dVar13 * dVar11 - (double)(float)(dVar15 * dVar20))) <= param_1) {
          fVar1 = (float)(dVar15 * dVar11 + (double)(float)(dVar13 * dVar20));
          if ((SQRT(fVar7) < fVar1) || (fVar1 < 0.0)) {
            dVar11 = (double)SQRT((float)(dVar15 * dVar15 + (double)(float)(dVar13 * dVar13)));
            if (dVar11 < param_1) {
              iVar9 = 1;
              dVar19 = (double)(float)(dVar13 * (double)(float)(param_1 / dVar11));
              dVar20 = (double)(float)(dVar15 * (double)(float)(param_1 / dVar11));
              dVar18 = dVar12;
              if (0.0 - dVar11 < 0.0) {
                dVar18 = dVar19;
              }
              dVar13 = dVar12;
              if (0.0 - dVar11 < 0.0) {
                dVar13 = dVar20;
              }
              if (dVar11 - 0.0 < 0.0) {
                dVar18 = dVar19;
              }
              if (dVar11 - 0.0 < 0.0) {
                dVar13 = dVar20;
              }
              dVar18 = (double)(float)(dVar18 + dVar14);
              dVar19 = (double)(float)(dVar13 + dVar17);
            }
          }
          else {
            fVar2 = SQRT((float)(dVar11 * dVar11 + (double)(float)(dVar20 * dVar20)));
            iVar9 = 1;
            dVar20 = (double)(float)((double)(fVar1 / fVar2) * dVar20);
            dVar19 = (double)(float)((double)(fVar1 / fVar2) * dVar11);
            dVar18 = dVar12;
            if (0.0 - fVar2 < 0.0) {
              dVar18 = dVar20;
            }
            dVar11 = dVar12;
            if (0.0 - fVar2 < 0.0) {
              dVar11 = dVar19;
            }
            if (fVar2 - 0.0 < 0.0) {
              dVar18 = dVar20;
            }
            if (fVar2 - 0.0 < 0.0) {
              dVar11 = dVar19;
            }
            fVar1 = (float)(dVar13 - dVar18);
            fVar2 = (float)(dVar15 - dVar11);
            dVar15 = (double)SQRT(fVar2 * fVar2 + fVar1 * fVar1);
            dVar20 = (double)((float)(param_1 / dVar15) * fVar1);
            dVar13 = (double)((float)(param_1 / dVar15) * fVar2);
            dVar19 = dVar12;
            if (0.0 - dVar15 < 0.0) {
              dVar19 = dVar20;
            }
            dVar16 = dVar12;
            if (0.0 - dVar15 < 0.0) {
              dVar16 = dVar13;
            }
            if (dVar15 - 0.0 < 0.0) {
              dVar19 = dVar20;
            }
            if (dVar15 - 0.0 < 0.0) {
              dVar16 = dVar13;
            }
            dVar18 = (double)(float)((double)(float)(dVar18 + dVar19) + dVar14);
            dVar19 = (double)(float)((double)(float)(dVar11 + dVar16) + dVar17);
          }
        }
      }
      iVar8 = iVar8 + 1;
      iVar10 = iVar10 + 0x10;
    } while (iVar8 < *piVar5 + -1);
    if (iVar9 != 0) {
      *param_5 = (float)dVar19;
      param_5[1] = (float)dVar18;
      param_5[2] = fVar3;
      param_5[3] = fVar4;
    }
  }
  return iVar9;
}



//==== 00114858  ns=mobyutil  size=0x4f8
// sig: undefined MB_CollideSplineWall(void)
// callers(2): 00088848 hero::Hero_CollideSplineWall; 000888c8 hero::Hero_ResolveCollision
// callees(0): 

void mobyutil::MB_CollideSplineWall
               (double param_1,longlong param_2,undefined8 param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  int *piVar10;
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
  double dVar31;
  double dVar32;
  float local_c0;
  
  dVar26 = (double)param_4[1];
  local_c0 = *param_4;
  dVar14 = (double)local_c0;
  dVar27 = (double)param_4[2];
  fVar5 = param_4[3];
  dVar29 = (double)DAT_00969f74;
  dVar28 = (double)hero::g_heroGravityDir;
  dVar13 = dVar26 * dVar29;
  dVar30 = (double)DAT_00969f78;
  piVar10 = *(int **)((int)Splines + (int)(param_2 << 2));
  iVar11 = 0;
  bVar9 = false;
  iVar6 = *piVar10;
  dVar19 = dVar27 * dVar30;
  if (0 < iVar6 + -1) {
    fVar1 = (float)(dVar30 * dVar30 +
                   (double)(float)(dVar28 * dVar28 + (double)(float)(dVar29 * dVar29)));
    fVar2 = 1.0 / SQRT(fVar1);
    fVar8 = SQRT(fVar1);
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    dVar18 = 0.0;
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    dVar15 = (double)(-(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2);
    do {
      if ((piVar10[7] != 0) || (piVar10[0xb] != 0)) {
        dVar32 = (double)(float)piVar10[5];
        dVar31 = (double)(float)piVar10[4];
        dVar12 = (double)(float)piVar10[6];
        fVar1 = (float)((double)(float)((double)(float)piVar10[10] - dVar12) * dVar30 +
                       (double)(float)((double)(float)((double)(float)piVar10[8] - dVar31) * dVar28
                                      + (double)(float)((double)(float)((double)(float)piVar10[9] -
                                                                       dVar32) * dVar29)));
        dVar25 = (double)(fVar1 * (float)(dVar15 * dVar29));
        dVar24 = (double)(fVar1 * (float)(dVar15 * dVar28));
        dVar16 = (double)(fVar1 * (float)(dVar15 * dVar30));
        dVar21 = dVar18;
        if (0.0 - fVar8 < 0.0) {
          dVar21 = dVar25;
        }
        dVar22 = dVar18;
        if (0.0 - fVar8 < 0.0) {
          dVar22 = dVar24;
        }
        dVar23 = dVar18;
        if (0.0 - fVar8 < 0.0) {
          dVar23 = dVar16;
        }
        if (fVar8 - 0.0 < 0.0) {
          dVar21 = dVar25;
        }
        if (fVar8 - 0.0 < 0.0) {
          dVar22 = dVar24;
        }
        if (fVar8 - 0.0 < 0.0) {
          dVar23 = dVar16;
        }
        fVar2 = (float)((double)(float)((double)(float)piVar10[9] - dVar32) - dVar21);
        fVar3 = (float)((double)(float)((double)(float)piVar10[8] - dVar31) - dVar22);
        fVar4 = (float)((double)(float)((double)(float)piVar10[10] - dVar12) - dVar23);
        fVar1 = (float)((double)(float)(dVar27 - dVar12) * dVar30 +
                       (double)(float)((double)(float)((double)local_c0 - dVar31) * dVar28 +
                                      (double)(float)((double)(float)(dVar26 - dVar32) * dVar29)));
        dVar24 = (double)(fVar1 * (float)(dVar15 * dVar30));
        dVar25 = (double)(fVar1 * (float)(dVar15 * dVar28));
        dVar16 = (double)(fVar1 * (float)(dVar15 * dVar29));
        fVar1 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
        dVar21 = dVar18;
        if (0.0 - fVar8 < 0.0) {
          dVar21 = dVar24;
        }
        dVar22 = dVar18;
        if (0.0 - fVar8 < 0.0) {
          dVar22 = dVar16;
        }
        dVar23 = dVar18;
        if (0.0 - fVar8 < 0.0) {
          dVar23 = dVar25;
        }
        if (fVar8 - 0.0 < 0.0) {
          dVar21 = dVar24;
        }
        if (fVar8 - 0.0 < 0.0) {
          dVar22 = dVar16;
        }
        if (fVar8 - 0.0 < 0.0) {
          dVar23 = dVar25;
        }
        dVar25 = (double)(float)((double)(float)(dVar27 - dVar12) - dVar21);
        dVar22 = (double)(float)((double)(float)(dVar26 - dVar32) - dVar22);
        dVar23 = (double)(float)((double)(float)((double)local_c0 - dVar31) - dVar23);
        dVar21 = dVar18;
        dVar16 = dVar18;
        dVar24 = dVar18;
        if (SQRT(fVar1) != 0.0) {
          fVar7 = 1.0 / SQRT(fVar1);
          fVar7 = -(fVar1 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
          fVar7 = -(fVar1 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
          fVar7 = -(fVar1 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
          dVar24 = (double)(fVar7 * fVar3);
          dVar16 = (double)(fVar7 * fVar2);
          dVar21 = (double)(fVar7 * fVar4);
        }
        if (ABS((double)(float)((double)(float)(dVar22 * dVar24 - (double)(float)(dVar23 * dVar16))
                                * dVar30 +
                               (double)(float)((double)(float)(dVar25 * dVar16 -
                                                              (double)(float)(dVar22 * dVar21)) *
                                               dVar28 + (double)(float)((double)(float)(dVar23 * 
                                                  dVar21 - (double)(float)(dVar25 * dVar24)) *
                                                  dVar29)))) <= param_1) {
          fVar2 = (float)(dVar25 * dVar21 +
                         (double)(float)(dVar23 * dVar24 + (double)(float)(dVar22 * dVar16)));
          if ((SQRT(fVar1) < fVar2) || (fVar2 < 0.0)) {
            dVar21 = (double)SQRT((float)(dVar25 * dVar25 +
                                         (double)(float)(dVar23 * dVar23 +
                                                        (double)(float)(dVar22 * dVar22))));
            if (dVar21 < param_1) {
              dVar27 = (double)(float)(param_1 / dVar21);
              bVar9 = true;
              dVar26 = dVar18;
              if (0.0 - dVar21 < 0.0) {
                dVar26 = (double)(float)(dVar23 * dVar27);
              }
              dVar16 = dVar18;
              if (0.0 - dVar21 < 0.0) {
                dVar16 = (double)(float)(dVar25 * dVar27);
              }
              dVar24 = dVar18;
              if (0.0 - dVar21 < 0.0) {
                dVar24 = (double)(float)(dVar22 * dVar27);
              }
              if (dVar21 - 0.0 < 0.0) {
                dVar26 = (double)(float)(dVar23 * dVar27);
              }
              if (dVar21 - 0.0 < 0.0) {
                dVar16 = (double)(float)(dVar25 * dVar27);
              }
              if (dVar21 - 0.0 < 0.0) {
                dVar24 = (double)(float)(dVar22 * dVar27);
              }
              local_c0 = (float)(dVar26 + dVar31);
              dVar27 = (double)(float)(dVar16 + dVar12);
              dVar26 = (double)(float)(dVar24 + dVar32);
            }
          }
          else {
            fVar1 = SQRT((float)(dVar21 * dVar21 +
                                (double)(float)(dVar24 * dVar24 + (double)(float)(dVar16 * dVar16)))
                        );
            bVar9 = true;
            dVar27 = (double)(fVar2 / fVar1);
            dVar26 = dVar18;
            if (0.0 - fVar1 < 0.0) {
              dVar26 = (double)(float)(dVar27 * dVar16);
            }
            dVar20 = dVar18;
            if (0.0 - fVar1 < 0.0) {
              dVar20 = (double)(float)(dVar27 * dVar24);
            }
            dVar17 = dVar18;
            if (0.0 - fVar1 < 0.0) {
              dVar17 = (double)(float)(dVar27 * dVar21);
            }
            if (fVar1 - 0.0 < 0.0) {
              dVar26 = (double)(float)(dVar27 * dVar16);
            }
            if (fVar1 - 0.0 < 0.0) {
              dVar20 = (double)(float)(dVar27 * dVar24);
            }
            if (fVar1 - 0.0 < 0.0) {
              dVar17 = (double)(float)(dVar27 * dVar21);
            }
            fVar2 = (float)(dVar22 - dVar26);
            fVar3 = (float)(dVar23 - dVar20);
            fVar4 = (float)(dVar25 - dVar17);
            dVar21 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
            fVar1 = (float)(param_1 / dVar21);
            dVar27 = dVar18;
            if (0.0 - dVar21 < 0.0) {
              dVar27 = (double)(fVar1 * fVar3);
            }
            dVar16 = dVar18;
            if (0.0 - dVar21 < 0.0) {
              dVar16 = (double)(fVar1 * fVar4);
            }
            dVar24 = dVar18;
            if (0.0 - dVar21 < 0.0) {
              dVar24 = (double)(fVar1 * fVar2);
            }
            if (dVar21 - 0.0 < 0.0) {
              dVar27 = (double)(fVar1 * fVar3);
            }
            if (dVar21 - 0.0 < 0.0) {
              dVar16 = (double)(fVar1 * fVar4);
            }
            if (dVar21 - 0.0 < 0.0) {
              dVar24 = (double)(fVar1 * fVar2);
            }
            local_c0 = (float)((double)(float)(dVar20 + dVar27) + dVar31);
            dVar27 = (double)(float)((double)(float)(dVar17 + dVar16) + dVar12);
            dVar26 = (double)(float)((double)(float)(dVar26 + dVar24) + dVar32);
          }
        }
      }
      iVar11 = iVar11 + 1;
      piVar10 = piVar10 + 4;
    } while (iVar11 < iVar6 + -1);
    if (bVar9) {
      dVar13 = (double)(((float)(dVar19 + (double)(float)(dVar14 * dVar28 + (double)(float)dVar13))
                        - (float)(dVar27 * dVar30 +
                                 (double)(float)((double)local_c0 * dVar28 +
                                                (double)(float)(dVar26 * dVar29)))) / fVar8);
      dVar19 = dVar18;
      if (0.0 - fVar8 < 0.0) {
        dVar19 = (double)(float)(dVar28 * dVar13);
      }
      dVar14 = dVar18;
      if (0.0 - fVar8 < 0.0) {
        dVar14 = (double)(float)(dVar30 * dVar13);
      }
      if (0.0 - fVar8 < 0.0) {
        dVar18 = (double)(float)(dVar29 * dVar13);
      }
      if (fVar8 - 0.0 < 0.0) {
        dVar19 = (double)(float)(dVar28 * dVar13);
      }
      if (fVar8 - 0.0 < 0.0) {
        dVar14 = (double)(float)(dVar30 * dVar13);
      }
      if (fVar8 - 0.0 < 0.0) {
        dVar18 = (double)(float)(dVar29 * dVar13);
      }
      *param_5 = (float)((double)local_c0 + dVar19);
      param_5[1] = (float)(dVar26 + dVar18);
      param_5[2] = (float)(dVar27 + dVar14);
      param_5[3] = fVar5;
    }
  }
  return;
}



//==== 00114d58  ns=mobyutil  size=0x398
// sig: undefined MB_SplineFindRouteNode(float param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
// callers(9): 0019aea0 mobyupdate_unsorted::UpdateMoby_1045; 001c2500 mobyupdate_helpers::M1106_001c2500; 001dcc70 mobyupdate_helpers::M1140_001dcc70; 002229f8 mobyupdate_helpers::M1243_002229f8; 003bec28 mobyupdate_unsorted::UpdateMoby_{572_865_866}; 003e37b0 mobyupdate_helpers::M623_003e37b0; 003e5228 mobyupdate_unsorted::UpdateMoby_623; 0048f650 mobyupdate_unsorted::UpdateMoby_856; 00492d98 mobyupdate_unsorted::UpdateMoby_857
// callees(2): 00113fa0 mobyutil::MB_LineCrossesSpline; 00114148 mobyutil::MB_SplineCrossCheck

undefined8
mobyutil::MB_SplineFindRouteNode
          (float param_1,undefined4 *param_2,undefined8 param_3,longlong param_4,undefined8 param_5,
          undefined4 param_6,float *param_7,float *param_8)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  bool bVar4;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar5;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  
  dVar16 = (double)param_1;
  iVar15 = 0;
  bVar4 = false;
  if (0 < (int)param_3) {
    dVar17 = 0.0;
    puVar14 = param_2;
    do {
      if (dVar16 == dVar17) {
        iVar6 = MB_LineCrossesSpline(*puVar14,param_6,param_7);
        if (iVar6 != 0) {
          bVar4 = true;
        }
      }
      else {
        iVar6 = MB_LineCrossesSpline(*puVar14,local_90,param_7);
        if (iVar6 == 0) {
          iVar6 = MB_LineCrossesSpline(*puVar14,local_80,param_7);
          if (iVar6 != 0) {
            bVar4 = true;
          }
        }
        else {
          bVar4 = true;
        }
      }
      if (bVar4) {
        iVar15 = (int)(param_4 << 2);
        piVar2 = *(int **)((int)Splines + iVar15);
        uVar7 = MB_SplineCrossCheck(dVar16,param_2,param_3);
        uVar8 = MB_SplineCrossCheck(dVar16,param_2,param_3);
        iVar6 = 0;
        while ((uVar7 & uVar8) == 0) {
          uVar11 = 0;
          iVar13 = *(int *)((int)Splines + iVar15);
          uVar10 = uVar8;
          do {
            if ((1 << (uVar11 & 0x3f) & uVar8) != 0) {
              uVar10 = uVar10 | *(uint *)(iVar13 + 0x1c);
            }
            uVar11 = uVar11 + 1;
            iVar13 = iVar13 + 0x10;
          } while ((int)uVar11 < 0x20);
          iVar6 = iVar6 + 1;
          uVar8 = uVar10;
          if (0x1f < iVar6) {
            return 0;
          }
        }
        lVar5 = -1;
        lVar9 = 0;
        fVar1 = 10000.0;
        piVar12 = piVar2;
        if (*piVar2 < 1) {
          return 0;
        }
        do {
          if (((1 << ((uint)lVar9 & 0x3f) & uVar7 & uVar8) != 0) &&
             (fVar3 = SQRT(((float)piVar12[4] - *param_7) * ((float)piVar12[4] - *param_7) +
                           ((float)piVar12[5] - param_7[1]) * ((float)piVar12[5] - param_7[1])),
             fVar3 < fVar1)) {
            lVar5 = lVar9;
            fVar1 = fVar3;
          }
          lVar9 = lVar9 + 1;
          piVar12 = piVar12 + 4;
        } while ((int)lVar9 < *piVar2);
        if ((int)lVar5 < 0) {
          return 0;
        }
        iVar15 = (int)(lVar5 << 4);
        *param_8 = *(float *)((int)piVar2 + iVar15 + 0x10);
        param_8[1] = *(float *)((int)piVar2 + iVar15 + 0x14);
        param_8[2] = *(float *)((int)piVar2 + iVar15 + 0x18);
        param_8[3] = *(float *)((int)piVar2 + iVar15 + 0x1c);
        return 1;
      }
      iVar15 = iVar15 + 1;
      puVar14 = puVar14 + 1;
    } while (iVar15 < (int)param_3);
  }
  *param_8 = *param_7;
  param_8[1] = param_7[1];
  param_8[2] = param_7[2];
  param_8[3] = param_7[3];
  return 1;
}



//==== 001150f8  ns=mobyutil  size=0x214
// sig: undefined MB_PathPosAtDist(void)
// callers(3): 0012fec8 partupd::UpdatePart_54; 001bc250 mobyupdate_unsorted::UpdateMoby_1090; 004c70d0 mobyupdate_unsorted::UpdateMoby_947
// callees(4): 005023f0 fastfunc::FastVecAdd; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 00502a64 fastfunc::FastVecSub

void mobyutil::MB_PathPosAtDist
               (double param_1,double param_2,undefined8 param_3,undefined8 param_4,int *param_5,
               int *param_6,float *param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  double dVar12;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  
  uVar9 = fastfunc::FastDoubleToInt((double)(float)(param_1 / param_2));
  iVar11 = (int)uVar9;
  *param_6 = iVar11;
  iVar10 = *param_5 + -1;
  if (iVar11 < iVar10) {
    if (iVar11 < 0) {
      *param_6 = 0;
      *param_7 = 0.0;
      *param_8 = (float)param_5[4];
      param_8[1] = (float)param_5[5];
      param_8[2] = (float)param_5[6];
      param_8[3] = (float)param_5[7];
    }
    else {
      dVar12 = (double)fastfunc::FastIntToDouble(uVar9);
      iVar10 = *param_6;
      *param_7 = -(float)(dVar12 * param_2 - param_1);
      fastfunc::FastVecSub(&local_50,param_5 + iVar10 * 4 + 8,param_5 + iVar10 * 4 + 4);
      *param_8 = local_50;
      param_8[1] = local_4c;
      param_8[2] = local_48;
      fVar1 = *param_8;
      fVar2 = param_8[1];
      fVar3 = param_8[2];
      param_8[3] = local_44;
      fVar4 = SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
      fVar6 = 0.0;
      iVar10 = *param_6;
      fVar5 = *param_7 / fVar4;
      fVar7 = fVar6;
      if (0.0 - fVar4 < 0.0) {
        fVar7 = fVar1 * fVar5;
      }
      fVar8 = fVar6;
      if (0.0 - fVar4 < 0.0) {
        fVar8 = fVar2 * fVar5;
      }
      if (0.0 - fVar4 < 0.0) {
        fVar6 = fVar3 * fVar5;
      }
      if (fVar4 - 0.0 < 0.0) {
        fVar7 = fVar1 * fVar5;
      }
      if (fVar4 - 0.0 < 0.0) {
        fVar8 = fVar2 * fVar5;
      }
      if (fVar4 - 0.0 < 0.0) {
        fVar6 = fVar3 * fVar5;
      }
      *param_8 = fVar7;
      param_8[1] = fVar8;
      param_8[2] = fVar6;
      fastfunc::FastVecAdd(&local_40,param_8,param_5 + iVar10 * 4 + 4);
      *param_8 = local_40;
      param_8[1] = local_3c;
      param_8[2] = local_38;
      param_8[3] = local_34;
    }
  }
  else {
    *param_6 = iVar10;
    *param_7 = 0.0;
    *param_8 = (float)param_5[iVar10 * 4 + 4];
    param_8[1] = (float)param_5[iVar10 * 4 + 5];
    param_8[2] = (float)param_5[iVar10 * 4 + 6];
    param_8[3] = (float)param_5[iVar10 * 4 + 7];
  }
  return;
}



//==== 0011530c  ns=mobyutil  size=0x90
// sig: undefined MB_RotateMoby(void)
// callers(1): 0042c150 mobyupdate_unsorted::UpdateMoby_71
// callees(3): 0010c1e8 mobyutil::MB_MtxToEuler; 00500ca4 fastfunc::FastEulerToMtx1; 0050162c fastfunc::FastVecMtx4Mul

void mobyutil::MB_RotateMoby(longlong param_1)

{
  undefined1 local_b0 [16];
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [72];
  
  fastfunc::FastEulerToMtx1(auStack_a0,local_b0);
  fastfunc::FastEulerToMtx1(auStack_60,param_1 + 0x40);
  fastfunc::FastVecMtx4Mul(auStack_60,auStack_60,auStack_a0);
  MB_MtxToEuler((int)auStack_60,(MobyInstance *)(param_1 + 0x40));
  return;
}



//==== 0011539c  ns=mobyutil  size=0x2c
// sig: undefined CreateMotionBlur(void)
// callers(3): 000a1698 hero::Hero_ThrowWrench; 000aaec0 hero::HandleHeroMovement; 000b72b0 hero::TransitionMovement
// callees(0): 

void mobyutil::CreateMotionBlur(undefined4 param_1,int param_2)

{
  if (*(int *)(param_2 + 0x13c) == 0) {
    *(undefined4 *)(param_2 + 0x134) = param_1;
    *(undefined2 *)(param_2 + 0x130) = 0;
    *(undefined2 *)(param_2 + 0x132) = 0;
    *(undefined4 *)(param_2 + 0x138) = 0;
    *(undefined4 *)(param_2 + 0x13c) = 1;
  }
  return;
}



//==== 001153c8  ns=mobyutil  size=0x100
// sig: undefined AddMotionBlurElem(void)
// callers(3): 000a1698 hero::Hero_ThrowWrench; 000aaec0 hero::HandleHeroMovement; 000b72b0 hero::TransitionMovement
// callees(1): 000efa28 mobyfunc::CreateMoby

void mobyutil::AddMotionBlurElem(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  MobyInstance *pMVar3;
  undefined8 uVar4;
  
  if (param_3 < 9 && *(int *)(param_1 + 0x138) != 4) {
    pMVar3 = mobyfunc::CreateMoby(*(MOBY_OCLASSES *)(*(int *)(param_1 + 0x134) + 0xa6));
    iVar1 = *(int *)(param_1 + 0x138);
    if (pMVar3 != (MobyInstance *)0x0) {
      iVar2 = *(int *)(param_1 + 0x134);
      pMVar3->collision = (ushort *)0x0;
      uVar4 = *(undefined8 *)(iVar2 + 0x38);
      pMVar3->drawDistance = *(short *)(iVar2 + 0x32);
      pMVar3->color = (int)((ulonglong)uVar4 >> 0x20);
      pMVar3->light = (int)uVar4;
      pMVar3->enabled = '\x01';
      pMVar3->updateDistance = '\0';
      pMVar3->modeBits = DISABLE_Z_WRITE|TRANSPARENT|NO_UPDATE;
      if (pMVar3->oClass == RATCHET) {
        pMVar3->field45_0x72 = '\0';
      }
      pMVar3->alpha = (s8)param_2;
      *(int *)(param_1 + iVar1 * 4 + 0x110) = param_3;
      *(undefined4 *)(param_1 + *(int *)(param_1 + 0x138) * 4 + 0x100) = param_2;
      iVar1 = *(int *)(param_1 + 0x138);
      *(int *)(param_1 + 0x138) = iVar1 + 1;
      *(MobyInstance **)(param_1 + iVar1 * 4 + 0x120) = pMVar3;
    }
  }
  return;
}



//==== 001154c8  ns=mobyutil  size=0x98
// sig: undefined DeleteMotionBlur(void)
// callers(4): 00086b60 hero::SetHeroType; 000a0c38 hero::Hero_Warp; 000b72b0 hero::TransitionMovement; 0042c150 mobyupdate_unsorted::UpdateMoby_71
// callees(1): 000efb38 mobyfunc::DeleteMoby

void mobyutil::DeleteMotionBlur(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x13c) != 0) {
    iVar1 = *(int *)(param_1 + 0x138);
    iVar2 = 0;
    iVar3 = param_1;
    if (0 < iVar1) {
      do {
        if (*(MobyInstance **)(iVar3 + 0x120) != (MobyInstance *)0x0) {
          mobyfunc::DeleteMoby(*(MobyInstance **)(iVar3 + 0x120));
          *(undefined4 *)(iVar3 + 0x120) = 0;
          iVar1 = *(int *)(param_1 + 0x138);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar2 < iVar1);
    }
    *(undefined4 *)(param_1 + 0x13c) = 0;
  }
  return;
}



//==== 00115560  ns=mobyutil  size=0x34c
// sig: undefined UpdateMotionBlur(void)
// callers(2): 000aaec0 hero::HandleHeroMovement; 0042c150 mobyupdate_unsorted::UpdateMoby_71
// callees(3): 000ef74c mobyfunc::UpdateMobyFrameData; 000efb38 mobyfunc::DeleteMoby; 000f31a8 mobyfunc::UpdateMobyTransform

void mobyutil::UpdateMotionBlur(int param_1,longlong param_2)

{
  MobyInstance *pMVar1;
  int iVar2;
  ulonglong uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  f32 *pfVar7;
  short sVar9;
  f32 *pfVar8;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  
  iVar5 = *(int *)(param_1 + 0x138);
  if (*(int *)(param_1 + 0x13c) != 0) {
    iVar11 = *(int *)(param_1 + 0x134);
    if (((iVar11 == 0) || (*(char *)(iVar11 + 0x20) == -2)) || (*(char *)(iVar11 + 0x20) == -3)) {
      iVar12 = 0;
      iVar11 = param_1;
      if (0 < iVar5) {
        do {
          if (*(MobyInstance **)(iVar11 + 0x120) != (MobyInstance *)0x0) {
            mobyfunc::DeleteMoby(*(MobyInstance **)(iVar11 + 0x120));
            *(undefined4 *)(iVar11 + 0x120) = 0;
            iVar5 = *(int *)(param_1 + 0x138);
          }
          iVar12 = iVar12 + 1;
          iVar11 = iVar11 + 4;
        } while (iVar12 < iVar5);
      }
      *(undefined4 *)(param_1 + 0x13c) = 0;
    }
    else {
      sVar9 = *(short *)(param_1 + 0x130);
      iVar5 = *(int *)(param_1 + 0x134);
      puVar10 = (undefined4 *)(param_1 + (int)((longlong)sVar9 << 4));
      iVar12 = param_1 + (int)((longlong)sVar9 << 4);
      uVar6 = (int)sVar9 + 1;
      *puVar10 = *(undefined4 *)(iVar11 + 0x10);
      puVar10[1] = *(undefined4 *)(iVar11 + 0x14);
      puVar10[2] = *(undefined4 *)(iVar11 + 0x18);
      puVar10[3] = *(undefined4 *)(iVar11 + 0x1c);
      *(undefined4 *)(iVar12 + 0x80) = *(undefined4 *)(iVar5 + 0x40);
      *(undefined4 *)(iVar12 + 0x84) = *(undefined4 *)(iVar5 + 0x44);
      *(undefined4 *)(iVar12 + 0x88) = *(undefined4 *)(iVar5 + 0x48);
      sVar9 = *(short *)(param_1 + 0x132);
      *(undefined4 *)(iVar12 + 0x8c) = *(undefined4 *)(iVar5 + 0x4c);
      sVar9 = sVar9 + 1;
      *(ushort *)(param_1 + 0x130) =
           (short)uVar6 +
           ((short)((int)uVar6 >> 3) + (ushort)((int)uVar6 < 0 && (uVar6 & 7) != 0)) * -8;
      iVar5 = *(int *)(param_1 + 0x138);
      *(short *)(param_1 + 0x132) = sVar9;
      if (8 < sVar9) {
        sVar9 = 8;
        *(undefined2 *)(param_1 + 0x132) = 8;
      }
      iVar11 = 0;
      if (0 < iVar5) {
        iVar12 = param_1;
        do {
          if (*(int *)(iVar12 + 0x110) <= (int)sVar9) {
            pMVar1 = *(MobyInstance **)(iVar12 + 0x120);
            iVar5 = *(int *)(param_1 + 0x134);
            uVar6 = ((int)*(short *)(param_1 + 0x130) - *(int *)(iVar12 + 0x110)) + 8;
            pMVar1->updateId = *(u8 *)(iVar5 + 0x52);
            pMVar1->animationId = *(u8 *)(iVar5 + 0x53);
            pMVar1->previousAnimationFrame = *(char *)(iVar5 + 0x50);
            pMVar1->animationFrame = *(char *)(iVar5 + 0x51);
            pMVar1->animationBlend = *(float *)(iVar5 + 0x54);
            mobyfunc::UpdateMobyFrameData(pMVar1);
            iVar5 = (uVar6 + (((int)uVar6 >> 3) + (uint)((int)uVar6 < 0 && (uVar6 & 7) != 0)) * -8)
                    * 0x10;
            pfVar8 = (f32 *)(iVar5 + param_1);
            pfVar7 = (f32 *)(iVar5 + param_1 + 0x80);
            (pMVar1->pos).x = *pfVar8;
            (pMVar1->pos).y = pfVar8[1];
            (pMVar1->pos).z = pfVar8[2];
            (pMVar1->pos).w = pfVar8[3];
            (pMVar1->rotation).x = *pfVar7;
            (pMVar1->rotation).y = pfVar7[1];
            (pMVar1->rotation).z = pfVar7[2];
            (pMVar1->rotation).w = pfVar7[3];
            mobyfunc::UpdateMobyTransform(pMVar1);
            sVar9 = *(short *)(param_1 + 0x132);
            iVar5 = *(int *)(param_1 + 0x138);
          }
          iVar11 = iVar11 + 1;
          iVar12 = iVar12 + 4;
        } while (iVar11 < iVar5);
      }
      if ((int)param_2 != 0) {
        iVar12 = 0;
        bVar4 = true;
        iVar11 = param_1;
        if (0 < iVar5) {
          do {
            iVar2 = *(int *)(iVar11 + 0x120);
            if ((iVar2 != 0) &&
               (uVar3 = -((longlong)(param_2 - (ulonglong)*(byte *)(iVar2 + 0x23)) >> 0x3f &
                         param_2 - (ulonglong)*(byte *)(iVar2 + 0x23)),
               *(char *)(iVar2 + 0x23) = (char)uVar3, (uVar3 & 0xff) != 0)) {
              bVar4 = false;
            }
            iVar12 = iVar12 + 1;
            iVar11 = iVar11 + 4;
          } while (iVar12 < iVar5);
          if (!bVar4) {
            return;
          }
        }
        if (*(int *)(param_1 + 0x13c) != 0) {
          iVar12 = 0;
          iVar11 = param_1;
          if (0 < iVar5) {
            do {
              if (*(MobyInstance **)(iVar11 + 0x120) != (MobyInstance *)0x0) {
                mobyfunc::DeleteMoby(*(MobyInstance **)(iVar11 + 0x120));
                *(undefined4 *)(iVar11 + 0x120) = 0;
                iVar5 = *(int *)(param_1 + 0x138);
              }
              iVar12 = iVar12 + 1;
              iVar11 = iVar11 + 4;
            } while (iVar12 < iVar5);
          }
          *(undefined4 *)(param_1 + 0x13c) = 0;
        }
      }
    }
  }
  return;
}



//==== 001158b0  ns=mobyutil  size=0x44
// sig: undefined MB_SetupJumpArc(void)
// callers(8): 001fbc78 mobyupdate_helpers::M1202_001fbc78; 001fcd60 mobyupdate_unsorted::UpdateMoby_1202; 002f20a0 mobyupdate_unsorted::UpdateMoby_217; 003a0ce8 mobyupdate_helpers::M491_003a0ce8; 003c0528 mobyupdate_helpers::M573_003c0528; 003cb1b8 mobyupdate_helpers::M578_003cb1b8; 004928e0 mobyupdate_helpers::M857_004928e0; 004bc480 mobyupdate_helpers::M931_004bc480
// callees(0): 

/* [p2_mobyutil] computes speed/gravity params at +0x14/+0x18/+0x1c from distance and height */

void mobyutil::MB_SetupJumpArc
               (double param_1,double param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  float fVar1;
  
  fVar1 = SQRT((float)(param_2 * 2.0) * *(float *)(param_5 + 0x10));
  *(float *)(param_5 + 0x1c) = fVar1;
  fVar1 = (fVar1 * 2.0) / *(float *)(param_5 + 0x10);
  *(float *)(param_5 + 0x18) = (float)(param_1 * 2.0) / fVar1;
  *(float *)(param_5 + 0x14) = (float)(param_1 * 2.0) / (fVar1 * fVar1);
  return;
}



//==== 00115900  ns=mobyutil  size=0x2cc
// sig: undefined MB_TurnHeadJoint(void)
// callers(1): 00115bd8 mobyutil::MB_TurnHeads
// callees(3): 00109ec0 mobyutil::DeltAng; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

double mobyutil::MB_TurnHeadJoint
                 (double param_1,double param_2,double param_3,double param_4,double param_5,
                 float *param_6,int param_7,float *param_8)

{
  float fVar1;
  float *unused2;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar2 = (double)*param_6;
  if (dVar2 <= param_4) {
    dVar3 = -param_4;
    if (dVar2 < dVar3) {
      *param_6 = (float)dVar3;
      dVar2 = dVar3;
    }
  }
  else {
    *param_6 = (float)param_4;
    dVar2 = param_4;
  }
  unused2 = param_8;
  dVar3 = (double)fastfunc::FastDiffRots(param_1,dVar2);
  dVar6 = 0.0;
  dVar2 = -param_4;
  if (0.0 - *param_8 < 0.0) {
    dVar2 = param_4;
  }
  dVar4 = (double)fastfunc::FastDiffRots(dVar2,(double)*param_6);
  dVar5 = (double)*param_8;
  if ((double)((float)((double)(float)(dVar5 * dVar5) / param_2) * 0.5) <= ABS(dVar4)) {
    dVar2 = (double)(float)(dVar5 + param_5);
    dVar4 = dVar3;
    if (((double)(float)(dVar2 * dVar3) < dVar6) || (dVar3 == dVar6)) {
      dVar3 = -dVar2;
      if ((dVar3 <= param_2) && (dVar6 = -param_2, param_2 = dVar3, dVar3 < dVar6)) {
        param_2 = dVar6;
      }
      *param_8 = (float)((double)(float)(param_2 + dVar2) - param_5);
    }
    else if ((double)((float)((double)(float)(dVar2 * dVar2) / param_2) * 0.5) <= ABS(dVar3)) {
      dVar2 = (double)(float)((double)SQRT((float)((double)(float)(param_2 * 2.0) * dVar3)) -
                             param_5);
      if (param_3 - dVar2 < 0.0) {
        dVar2 = param_3;
      }
      if (dVar6 <= dVar3) {
        DeltAng((float)dVar2,(float)param_2,param_8,param_7,(int)unused2,0);
        dVar4 = dVar3;
      }
      else {
        DeltAng((float)-dVar2,(float)param_2,param_8,param_7,(int)unused2,0);
        dVar4 = dVar3;
      }
    }
    else {
      dVar3 = -dVar2;
      if ((dVar3 <= param_2) && (dVar6 = -param_2, param_2 = dVar3, dVar3 < dVar6)) {
        param_2 = dVar6;
      }
      *param_8 = (float)((double)(float)(param_2 + dVar2) - param_5);
    }
    if (ABS(dVar4) <= ABS((double)*param_8)) {
      *param_6 = (float)param_1;
    }
    else {
      dVar2 = (double)fastfunc::FastWrapRot(*param_8,*param_6);
      *param_6 = (float)dVar2;
      dVar4 = (double)*param_8;
    }
  }
  else {
    dVar3 = -dVar5;
    if ((dVar3 <= param_2) && (dVar6 = -param_2, param_2 = dVar3, dVar3 < dVar6)) {
      param_2 = dVar6;
    }
    fVar1 = (float)(dVar5 + param_2);
    *param_8 = fVar1;
    if (ABS(dVar4) <= ABS((double)fVar1)) {
      *param_6 = (float)dVar2;
    }
    else {
      dVar2 = (double)fastfunc::FastWrapRot(fVar1,*param_6);
      *param_6 = (float)dVar2;
      dVar4 = (double)*param_8;
    }
  }
  return dVar4;
}



//==== 00115bd8  ns=mobyutil  size=0x678
// sig: undefined MB_TurnHeads(void)
// callers(1): 001b8400 mobyupdate_unsorted::UpdateMoby_1081
// callees(4): 000f0ea8 mobyfunc::AttachManipulator; 00115900 mobyutil::MB_TurnHeadJoint; 00501980 fastfunc::FastQuaternionToEuler; 005025e0 fastfunc::FastDiffRots

void mobyutil::MB_TurnHeads(MobyInstance *param_1,float *param_2)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong *puVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  longlong lVar16;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  ulonglong in_f29;
  ulonglong in_f30;
  undefined8 uVar21;
  ulonglong in_f31;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar13 = uVar10 - 0xf0;
  puVar6 = (ulonglong *)lVar13;
  *puVar6 = uVar10;
  puVar6[0x20] = in_LR;
  puVar6[0x1b] = in_f29;
  puVar6[0x1c] = in_f30;
  puVar6[0x1d] = in_f31;
  puVar6[0x19] = unaff_r30;
  puVar6[0x1a] = unaff_r31;
  dVar18 = (double)fastfunc::FastDiffRots((double)(param_1->rotation).z,(double)param_2[6]);
  param_2[6] = (param_1->rotation).z;
  if ((*(char *)((int)param_2 + 0x51) == '\0') && (*(byte *)(param_2 + 7) != 0xff)) {
    mobyfunc::AttachManipulator(param_1,(uint)*(byte *)(param_2 + 7),param_2 + 0x14);
  }
  if ((*(char *)((int)param_2 + 0x91) == '\0') && (*(byte *)((int)param_2 + 0x1e) != 0xff)) {
    mobyfunc::AttachManipulator(param_1,(uint)*(byte *)((int)param_2 + 0x1e),param_2 + 0x24);
  }
  if ((*(char *)((int)param_2 + 0xd1) == '\0') && (*(byte *)((int)param_2 + 0x1d) != 0xff)) {
    mobyfunc::AttachManipulator(param_1,(uint)*(byte *)((int)param_2 + 0x1d),param_2 + 0x34);
  }
  bVar1 = *(byte *)((int)param_2 + 0x1f);
  if (bVar1 == 0) {
    uVar21 = 0;
    MB_TurnHeadJoint(0,(double)param_2[0x10],(double)param_2[0x11],(double)param_2[5],dVar18,
                     param_2 + 0x13,&DAT_00115bcc,param_2 + 0x12);
    MB_TurnHeadJoint(uVar21,(double)param_2[8],(double)param_2[9],(double)param_2[4],
                     (double)(float)(dVar18 + (double)param_2[0x12]),param_2 + 0xb);
    MB_TurnHeadJoint(uVar21,(double)param_2[8],(double)param_2[9],(double)param_2[4],
                     (double)(float)(dVar18 + (double)param_2[0x12]),param_2 + 0xf);
  }
  else if (bVar1 < 2) {
    fVar3 = *param_2 - (param_1->pos).x;
    fVar2 = param_2[1] - (param_1->pos).y;
    fVar4 = ABS(fVar3);
    fVar5 = ABS(fVar2);
    *(float *)(puVar6 + 0xe) = fVar3;
    *(float *)((int)puVar6 + 0x74) = fVar2;
    *(float *)(puVar6 + 0xf) = fVar4 - fVar5;
    dVar20 = 0.0;
    uVar11 = (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar6 + 0x74) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)(puVar6 + 0xe));
    if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
      fVar3 = fVar5;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar11 << 2));
    fVar2 = *(float *)(((uint)(uVar11 << 2) | 0x735900) + 4);
    fVar9 = ABS(*(float *)((int)puVar6 + 0x74));
    if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
      fVar9 = fVar4;
    }
    dVar19 = dVar20;
    if (0.0 < fVar3) {
      lVar12 = uVar10 - 0xe0;
      lVar14 = uVar10 - 0x68;
      lVar16 = uVar10 - 0x58;
      lVar17 = 2;
      fVar3 = (fVar9 - fVar3) / (fVar9 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar6 + 0x94) = fVar3;
      *(float *)((int)puVar6 + 0x8c) = fVar3;
      *(float *)(puVar6 + 0x12) = fVar3;
      *(float *)(puVar6 + 0x11) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar6 + 0x8c) = *(float *)((int)puVar6 + 0x8c) * fVar4;
      *(float *)(puVar6 + 0x12) = *(float *)(puVar6 + 0x12) * fVar3;
      *(float *)((int)puVar6 + 0x94) = *(float *)((int)puVar6 + 0x94) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar12 + 0x88) = *(float *)((int)lVar12 + 0x78) * fVar3 * fVar3;
        iVar7 = (int)lVar14;
        lVar12 = lVar12 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar7 + 4) * fVar3 * fVar3;
        lVar16 = lVar16 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar17 = 4;
      lVar16 = uVar10 - 0x68;
      pfVar15 = (float *)&DAT_007358e0;
      lVar12 = lVar13;
      lVar14 = lVar16;
      do {
        fVar3 = *pfVar15;
        fVar4 = pfVar15[1];
        pfVar15 = pfVar15 + 2;
        *(float *)((int)lVar12 + 0x88) = *(float *)((int)lVar12 + 0x88) * fVar3;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar4;
        lVar14 = lVar14 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar12 = 2;
      do {
        iVar7 = (int)lVar13;
        lVar13 = lVar13 + 0x10;
        iVar8 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar7 + 0x88)) + *(float *)(iVar8 + 4)
                          + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      dVar19 = (double)((float)(dVar19 + 0.7853981852531433) * fVar5 + fVar2);
    }
    dVar19 = (double)fastfunc::FastDiffRots(dVar19,(double)(param_1->rotation).z);
    MB_TurnHeadJoint((double)(float)(dVar19 * 0.5),(double)param_2[0x10],(double)param_2[0x11],
                     (double)param_2[5],dVar18,param_2 + 0x13,&DAT_00115bcc,param_2 + 0x12);
    uVar21 = fastfunc::FastDiffRots(dVar19,(double)param_2[0x13]);
    MB_TurnHeadJoint(uVar21,(double)param_2[8],(double)param_2[9],(double)param_2[4],
                     (double)(float)(dVar18 + (double)param_2[0x12]),param_2 + 0xb);
    MB_TurnHeadJoint(dVar20,(double)param_2[8],(double)param_2[9],(double)param_2[4],
                     (double)(float)(dVar18 + (double)param_2[0x12]),param_2 + 0xf);
  }
  else if (bVar1 < 3) {
    fVar3 = *param_2 - (param_1->pos).x;
    fVar2 = param_2[1] - (param_1->pos).y;
    fVar4 = ABS(fVar3);
    fVar5 = ABS(fVar2);
    *(float *)((int)puVar6 + 0x7c) = fVar3;
    *(float *)(puVar6 + 0x10) = fVar2;
    *(float *)((int)puVar6 + 0x84) = fVar4 - fVar5;
    dVar20 = 0.0;
    uVar11 = (ulonglong)(*(uint *)((int)puVar6 + 0x7c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar6 + 0x84) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar6 + 0x10) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)((int)puVar6 + 0x7c));
    if (*(float *)((int)puVar6 + 0x84) - 0.0 < 0.0) {
      fVar3 = fVar5;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar11 << 2));
    fVar2 = *(float *)(((uint)(uVar11 << 2) | 0x735900) + 4);
    fVar9 = ABS(*(float *)(puVar6 + 0x10));
    if (*(float *)((int)puVar6 + 0x84) - 0.0 < 0.0) {
      fVar9 = fVar4;
    }
    if (0.0 < fVar3) {
      lVar12 = uVar10 - 0xe0;
      lVar16 = uVar10 - 0x38;
      lVar14 = uVar10 - 0x48;
      lVar17 = 2;
      fVar3 = (fVar9 - fVar3) / (fVar9 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar6 + 0xb4) = fVar3;
      *(float *)((int)puVar6 + 0xac) = fVar3;
      *(float *)(puVar6 + 0x16) = fVar3;
      *(float *)(puVar6 + 0x15) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar6 + 0xac) = *(float *)((int)puVar6 + 0xac) * fVar4;
      *(float *)(puVar6 + 0x16) = *(float *)(puVar6 + 0x16) * fVar3;
      *(float *)((int)puVar6 + 0xb4) = *(float *)((int)puVar6 + 0xb4) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar12 + 0xa8) = *(float *)((int)lVar12 + 0x98) * fVar3 * fVar3;
        iVar7 = (int)lVar14;
        lVar14 = lVar14 + 8;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar7 + 4) * fVar3 * fVar3;
        lVar16 = lVar16 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar17 = 4;
      lVar16 = uVar10 - 0x48;
      pfVar15 = (float *)&DAT_007358e0;
      lVar12 = lVar13;
      lVar14 = lVar16;
      do {
        fVar3 = *pfVar15;
        fVar4 = pfVar15[1];
        pfVar15 = pfVar15 + 2;
        *(float *)((int)lVar12 + 0xa8) = *(float *)((int)lVar12 + 0xa8) * fVar3;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar4;
        lVar14 = lVar14 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar12 = 2;
      do {
        iVar7 = (int)lVar13;
        lVar13 = lVar13 + 0x10;
        iVar8 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        dVar20 = (double)((float)(dVar20 + (double)*(float *)(iVar7 + 0xa8)) + *(float *)(iVar8 + 4)
                          + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      dVar20 = (double)((float)(dVar20 + 0.7853981852531433) * fVar5 + fVar2);
    }
    dVar20 = (double)fastfunc::FastDiffRots(dVar20,(double)(param_1->rotation).z);
    MB_TurnHeadJoint((double)(float)(dVar20 * 0.5),(double)param_2[0x10],(double)param_2[0x11],
                     (double)param_2[5],dVar18,param_2 + 0x13,&DAT_00115bcc,param_2 + 0x12);
    uVar21 = fastfunc::FastDiffRots(dVar20,(double)param_2[0x13]);
    MB_TurnHeadJoint(uVar21,(double)param_2[8],(double)param_2[9],(double)param_2[4],
                     (double)(float)(dVar18 + (double)param_2[0x12]),param_2 + 0xb);
    MB_TurnHeadJoint(uVar21,(double)param_2[8],(double)param_2[9],(double)param_2[4],
                     (double)(float)(dVar18 + (double)param_2[0x12]),param_2 + 0xf);
  }
  fastfunc::FastQuaternionToEuler((double)param_2[0xb],param_2 + 0x18,2);
  fastfunc::FastQuaternionToEuler((double)param_2[0x13],param_2 + 0x28,2);
  fastfunc::FastQuaternionToEuler((double)param_2[0xf],param_2 + 0x38,2);
  return;
}



//==== 001162a0  ns=mobyutil  size=0x524
// sig: undefined ???_MB_SpawnRingPartFx(void)
// callers(4): 00211748 mobyupdate_unsorted::UpdateMoby_1229; 00284460 mobyupdate_unsorted::UpdateMoby_1454; 003a14a8 mobyupdate_unsorted::UpdateMoby_491; 003c3730 mobyupdate_unsorted::UpdateMoby_574
// callees(6): 001113e0 mobyutil::MB_RotateQuatAxisAngle; 001268f8 partupd::SpawnPart_21; 0012e3e8 partupd::SpawnPart_44; 00502758 fastfunc::FastDoubleToInt; 00502b08 fastfunc::FastVecAddSelf; 005c8318 rand

void mobyutil::____MB_SpawnRingPartFx
               (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
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
  undefined8 uVar26;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  longlong local_c0;
  
  iVar6 = 0;
  iVar8 = 0;
  uVar26 = 0x4038000000000000;
  dVar25 = 0.13089969754219055;
  dVar24 = 0.000244140625;
  dVar23 = 0.2617993950843811;
  dVar22 = 0.05000000074505806;
  dVar21 = 3.0517578125e-05;
  dVar20 = 0.0;
  dVar19 = 30.5;
  dVar18 = 90.5;
  uVar17 = 0x40ed4c0000000000;
  uVar16 = 0x40a7700000000000;
  uVar15 = 0xbf50624de0000000;
  uVar14 = 0x3feb333340000000;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  while( true ) {
    iVar4 = fastfunc::FastDoubleToInt(uVar26);
    if (iVar4 <= iVar6) break;
    uVar5 = rand();
    dVar10 = (double)(float)((double)(float)((double)(longlong)(int)((int)uVar5 >> 0xf & 0xfff) *
                                            dVar25) * dVar24);
    if ((uVar5 >> 0xf & 1) != 0) {
      dVar10 = -dVar10;
    }
    local_c0 = (longlong)iVar6;
    MB_RotateQuatAxisAngle
              ((float)((double)local_c0 * dVar23 + dVar10),&local_f0,(float *)(param_1 + 0xe0));
    iVar4 = rand();
    local_c0 = (longlong)(int)(iVar4 >> 0xf & 0x7fff);
    dVar12 = (double)SQRT(local_e8 * local_e8 + local_f0 * local_f0 + local_ec * local_ec);
    fVar2 = (float)((double)(float)((double)(float)((double)local_c0 * dVar22) * dVar21 + dVar22) /
                   dVar12);
    dVar10 = dVar20;
    if (dVar20 - dVar12 < 0.0) {
      dVar10 = (double)(local_f0 * fVar2);
    }
    dVar11 = dVar20;
    if (dVar20 - dVar12 < 0.0) {
      dVar11 = (double)(local_ec * fVar2);
    }
    dVar13 = dVar20;
    if (dVar20 - dVar12 < 0.0) {
      dVar13 = (double)(local_e8 * fVar2);
    }
    if (dVar12 - dVar20 < 0.0) {
      dVar10 = (double)(local_f0 * fVar2);
    }
    if (dVar12 - dVar20 < 0.0) {
      dVar11 = (double)(local_ec * fVar2);
    }
    if (dVar12 - dVar20 < 0.0) {
      dVar13 = (double)(local_e8 * fVar2);
    }
    local_f0 = (float)dVar10;
    local_ec = (float)dVar11;
    local_e8 = (float)dVar13;
    iVar4 = rand();
    uVar5 = iVar4 >> 0xf & 0x7fff;
    lVar9 = (longlong)(int)(uVar5 + ((int)uVar5 >> 2) * -4);
    iVar4 = rand();
    uVar5 = iVar4 >> 0xf & 0x7fff;
    iVar1 = (int)((double)animationSpeed * dVar19);
    iVar7 = (int)((double)animationSpeed * dVar18);
    local_c0 = (longlong)iVar7;
    iVar4 = rand();
    iVar7 = iVar7 - iVar1;
    uVar3 = iVar4 >> 0xf & 0x7fff;
    iVar4 = (int)uVar3 / (iVar7 + 1);
    if ((int)param_5 != 0) {
      fastfunc::FastVecAddSelf(auStack_e0,&local_f0,param_5);
    }
    partupd::SpawnPart_44
              (uVar17,uVar16,uVar14,uVar15,uVar14,&stack0x00000040,&local_f0,
               (uVar3 - (iVar4 * iVar7 + iVar4)) + iVar1,0x1e,0xffffff,
               ((LZCOUNT(-(uVar5 + ((int)uVar5 >> 1) * -2)) << 0x3a) >> 0x3f & lVar9 * 2) - lVar9);
    iVar6 = iVar6 + 1;
  }
  uVar15 = 0x4018000000000000;
  dVar23 = 0.7853981852531433;
  dVar19 = 1.0471975803375244;
  dVar18 = 60.5;
  uVar14 = 0x40c3880000000000;
  for (; iVar6 = fastfunc::FastDoubleToInt(uVar15), iVar8 < iVar6; iVar8 = iVar8 + 1) {
    iVar6 = rand();
    local_c0 = (longlong)iVar8;
    MB_RotateQuatAxisAngle
              ((float)((double)local_c0 * dVar19 +
                      (double)(float)((double)(float)((double)(longlong)(int)(iVar6 >> 0xf & 0x7fff)
                                                     * dVar23) * dVar21)),&local_f0,
               (float *)(param_1 + 0xe0));
    iVar6 = rand();
    dVar25 = (double)SQRT(local_e8 * local_e8 + local_f0 * local_f0 + local_ec * local_ec);
    local_c0 = (longlong)(int)((double)animationSpeed * dVar18);
    fVar2 = (float)((double)(float)((double)(float)((double)(longlong)(int)(iVar6 >> 0xf & 0x7fff) *
                                                   dVar22) * dVar21 + dVar22) / dVar25);
    dVar24 = dVar20;
    if (dVar20 - dVar25 < 0.0) {
      dVar24 = (double)(local_f0 * fVar2);
    }
    dVar10 = dVar20;
    if (dVar20 - dVar25 < 0.0) {
      dVar10 = (double)(local_ec * fVar2);
    }
    dVar12 = dVar20;
    if (dVar20 - dVar25 < 0.0) {
      dVar12 = (double)(local_e8 * fVar2);
    }
    if (dVar25 - dVar20 < 0.0) {
      dVar24 = (double)(local_f0 * fVar2);
    }
    if (dVar25 - dVar20 < 0.0) {
      dVar10 = (double)(local_ec * fVar2);
    }
    if (dVar25 - dVar20 < 0.0) {
      dVar12 = (double)(local_e8 * fVar2);
    }
    local_f0 = (float)dVar24;
    local_ec = (float)dVar10;
    local_e8 = (float)dVar12;
    rand();
    if ((int)param_5 != 0) {
      fastfunc::FastVecAddSelf(auStack_d0,&local_f0,param_5);
    }
    partupd::SpawnPart_21(uVar14,&stack0x00000040,&local_f0,0x4f007fff,0x1fffffff);
  }
  return;
}



//==== 001167c8  ns=mobyutil  size=0x284
// sig: undefined MB_UpdateManipulatorRot(void)
// callers(45): 00018238 mobyupdate_helpers::M1274_00018238; 001be558 mobyupdate_unsorted::UpdateMoby_1105; 001c30c0 mobyupdate_helpers::M1106_001c30c0; 001d8090 mobyupdate_unsorted::UpdateMoby_1130; 001dc1f0 mobyupdate_helpers::M1140_001dc1f0; 001df770 mobyupdate_unsorted::UpdateMoby_1144; 00237e98 mobyupdate_unsorted::UpdateMoby_1283; 002583e8 mobyupdate_helpers::M1356_002583e8; 00258c50 mobyupdate_unsorted::UpdateMoby_1356; 0025d3a8 mobyupdate_unsorted::UpdateMoby_1377; 00267af8 mobyupdate_unsorted::UpdateMoby_{1389_1446}; 002766e0 mobyupdate_unsorted::UpdateMoby_1422; 0027d4c8 mobyupdate_unsorted::UpdateMoby_1440; 00284e60 mobyupdate_unsorted::UpdateMoby_1455; 002f8c70 mobyupdate_unsorted::UpdateMoby_221; 00307270 mobyupdate_unsorted::UpdateMoby_238; 0032cef0 mobyupdate_unsorted::UpdateMoby_282; 00332c38 mobyupdate_unsorted::UpdateMoby_294; 003361b0 mobyupdate_unsorted::UpdateMoby_298; 00343330 mobyupdate_unsorted::UpdateMoby_328; 003516d0 mobyupdate_unsorted::UpdateMoby_347; 0036e680 mobyupdate_unsorted::UpdateMoby_427; 0037b5b0 mobyupdate_helpers::M44_0037b5b0; 0039e9a8 mobyupdate_unsorted::UpdateMoby_481; 003b4740 mobyupdate_unsorted::UpdateMoby_556
// callees(5): 000f0ea8 mobyfunc::AttachManipulator; 000f0f1c mobyfunc::DetachManipulator; 0010a050 mobyutil::AccelDeltAng; 005017c4 fastfunc::FastQuaternionMult; 00501980 fastfunc::FastQuaternionToEuler

/* [p2_mobyutil] AccelDeltAng 3 axes, builds quaternion, attaches/detaches manipulator */

void mobyutil::MB_UpdateManipulatorRot
               (undefined8 param_1,undefined8 param_2,MobyInstance *param_3,int param_4,
               uint32_t param_5)

{
  undefined4 uVar1;
  MobyInstance *pMoby;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  pMoby = *(MobyInstance **)(param_4 + 0x78);
  if (pMoby == (MobyInstance *)0x0) {
    *(MobyInstance **)(param_4 + 0x78) = param_3;
  }
  else if (pMoby != param_3) {
    if ((*(char *)(param_4 + 1) != '\0') && (pMoby->state < 0x7f)) {
      mobyfunc::DetachManipulator(pMoby,param_4);
    }
    *(undefined1 *)(param_4 + 1) = 0;
    *(MobyInstance **)(param_4 + 0x78) = param_3;
  }
  uVar2 = *(uint *)(param_4 + 0x60);
  uVar4 = 0;
  if ((((uVar2 == 0) && (*(int *)(param_4 + 100) == 0)) && (*(int *)(param_4 + 0x68) == 0)) &&
     (((uVar2 = *(uint *)(param_4 + 0x70), uVar2 == 0x3f800000 &&
       (uVar2 = *(uint *)(param_4 + 0x40) & 0x7fffffff, uVar2 < 0x3ba3d70a)) &&
      ((uVar2 = *(uint *)(param_4 + 0x44) & 0x7fffffff, uVar2 < 0x3ba3d70a &&
       (uVar2 = *(uint *)(param_4 + 0x48) & 0x7fffffff, uVar2 < 0x3ba3d70a)))))) {
    if (*(char *)(param_4 + 1) != '\0') {
      mobyfunc::DetachManipulator(param_3,param_4);
    }
  }
  else {
    AccelDeltAng((double)*(float *)(param_4 + 0x60),param_1,param_2,0,param_4 + 0x40,uVar2,
                 param_4 + 0x50);
    AccelDeltAng((double)*(float *)(param_4 + 100),param_1,param_2,uVar4,param_4 + 0x44);
    AccelDeltAng((double)*(float *)(param_4 + 0x68),param_1,param_2,uVar4,param_4 + 0x48);
    if (*(char *)(param_4 + 1) == '\0') {
      mobyfunc::AttachManipulator(param_3,param_5,param_4);
    }
    fastfunc::FastQuaternionToEuler((double)*(float *)(param_4 + 0x40),auStack_50,0);
    fastfunc::FastQuaternionToEuler((double)*(float *)(param_4 + 0x44),auStack_60,1);
    fastfunc::FastQuaternionToEuler((double)*(float *)(param_4 + 0x48),auStack_70,2);
    iVar3 = param_4 + 0x10;
    fastfunc::FastQuaternionMult(iVar3,auStack_50,auStack_60);
    fastfunc::FastQuaternionMult(iVar3,iVar3,auStack_70);
    uVar1 = *(undefined4 *)(param_4 + 0x70);
    *(undefined4 *)(param_4 + 0x20) = uVar1;
    *(undefined4 *)(param_4 + 0x24) = uVar1;
    *(undefined4 *)(param_4 + 0x28) = uVar1;
    *(undefined4 *)(param_4 + 0x6c) = 0;
    *(undefined4 *)(param_4 + 0x68) = 0;
    *(undefined4 *)(param_4 + 100) = 0;
    *(undefined4 *)(param_4 + 0x60) = 0;
    *(undefined4 *)(param_4 + 0x70) = 0x3f800000;
  }
  return;
}



//==== 00116a68  ns=mobyutil  size=0xe8
// sig: void MB_BobMotion(float amp, float speed, MobyInstance * pMoby, float * phase, float * prevOffset)
// callers(17): 00019cb8 mobyupdate_unsorted::UpdateMoby_1274; 0007d200 hero::Hero_PosEffects; 001856a0 mobyupdate_helpers::M101_001856a0; 00186d90 mobyupdate_helpers::M1012_00186d90; 00186e60 mobyupdate_unsorted::UpdateMoby_1012; 001d3c28 mobyupdate_unsorted::UpdateMoby_1117; 001f0948 mobyupdate_unsorted::UpdateMoby_a_lot_6; 0023f010 mobyupdate_unsorted::UpdateMoby_{1293_1320}; 002b3ec8 mobyupdate_unsorted::UpdateMoby_1766; 002f96f8 mobyupdate_unsorted::UpdateMoby_{224_228}; 0033d5c8 mobyupdate_helpers::M31_0033d5c8; 004088d0 mobyupdate_unsorted::UpdateMoby_664; 00461680 mobyupdate_helpers::M794_00461680; 00462258 mobyupdate_unsorted::UpdateMoby_8; 0046dbe8 mobyupdate_helpers::M816_0046dbe8; 0046e420 mobyupdate_unsorted::UpdateMoby_816; 00481568 mobyupdate_unsorted::UpdateMoby_835
// callees(1): 00502578 fastfunc::FastWrapRot

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void mobyutil::MB_BobMotion
               (float amp,float speed,MobyInstance *pMoby,float *phase,float *prevOffset)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  
  dVar5 = (double)amp;
  dVar6 = (double)fastfunc::FastWrapRot(*phase,speed);
  *phase = (float)dVar6;
  (pMoby->pos).z = (pMoby->pos).z - *prevOffset;
  fVar1 = *phase;
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
  fVar1 = (float)((double)(fVar1 * fVar4 * 2.601887e-06 +
                          fVar4 * -0.0001980741 +
                          fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3) * dVar5);
  *prevOffset = fVar1;
  (pMoby->pos).z = (pMoby->pos).z + fVar1;
  return;
}



//==== 00116b70  ns=mobyutil  size=0x1ac
// sig: undefined MB_SwingMotion(void)
// callers(19): 00019cb8 mobyupdate_unsorted::UpdateMoby_1274; 0007d178 hero::Hero_RotEffects; 0007d6d0 hero::Hero_MapToMoby; 001856a0 mobyupdate_helpers::M101_001856a0; 00186d90 mobyupdate_helpers::M1012_00186d90; 00186e60 mobyupdate_unsorted::UpdateMoby_1012; 001b5860 mobyupdate_unsorted::UpdateMoby_1075; 001d3c28 mobyupdate_unsorted::UpdateMoby_1117; 001f0948 mobyupdate_unsorted::UpdateMoby_a_lot_6; 0023f010 mobyupdate_unsorted::UpdateMoby_{1293_1320}; 00272248 mobyupdate_unsorted::UpdateMoby_1417_FlyingCar; 002b3ec8 mobyupdate_unsorted::UpdateMoby_1766; 0033d5c8 mobyupdate_helpers::M31_0033d5c8; 004088d0 mobyupdate_unsorted::UpdateMoby_664; 0043dc00 mobyupdate_unsorted::UpdateMoby_74; 00461680 mobyupdate_helpers::M794_00461680; 00462258 mobyupdate_unsorted::UpdateMoby_8; 0046dbe8 mobyupdate_helpers::M816_0046dbe8; 0046e420 mobyupdate_unsorted::UpdateMoby_816
// callees(1): 00502578 fastfunc::FastWrapRot

void mobyutil::MB_SwingMotion
               (double param_1,double param_2,double param_3,int param_4,float *param_5,
               float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  
  fVar1 = *param_5;
  fVar2 = *param_6;
  fVar4 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar4 = fVar1;
  }
  fVar3 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar3 = fVar2;
  }
  fVar5 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
    fVar5 = fVar4;
  }
  fVar1 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
    fVar1 = fVar3;
  }
  fVar3 = fVar5 * fVar5;
  fVar6 = fVar1 * fVar1;
  fVar7 = fVar6 * fVar6 * fVar1;
  fVar4 = fVar3 * fVar3 * fVar5;
  fVar8 = fVar6 * fVar7;
  fVar2 = fVar3 * fVar4;
  *(float *)(param_4 + 0x40) =
       (float)(param_1 *
              (double)(fVar3 * fVar2 * 2.601887e-06 +
                      fVar2 * -0.0001980741 +
                      fVar4 * 0.0083330255 + fVar3 * fVar5 * -0.16666657 + fVar5)) *
       (fVar6 * fVar8 * 2.601887e-06 +
       fVar8 * -0.0001980741 + fVar7 * 0.0083330255 + fVar6 * fVar1 * -0.16666657 + fVar1);
  fVar1 = *param_5;
  fVar4 = *param_6 + 1.5707963;
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  fVar3 = 3.1415925 - fVar4;
  if (fVar4 - (3.1415925 - fVar4) < 0.0) {
    fVar3 = fVar4;
  }
  fVar5 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar5 = fVar2;
  }
  fVar2 = fVar5 * fVar5;
  fVar1 = -3.1415925 - fVar4;
  if ((-3.1415925 - fVar4) - fVar3 < 0.0) {
    fVar1 = fVar3;
  }
  fVar4 = fVar1 * fVar1;
  fVar3 = fVar2 * fVar2 * fVar5;
  fVar6 = fVar2 * fVar3;
  fVar7 = fVar4 * fVar4 * fVar1;
  fVar8 = fVar4 * fVar7;
  *(float *)(param_4 + 0x44) =
       (float)(param_1 *
              (double)(fVar2 * fVar6 * 2.601887e-06 +
                      fVar6 * -0.0001980741 +
                      fVar3 * 0.0083330255 + fVar2 * fVar5 * -0.16666657 + fVar5)) *
       (fVar4 * fVar8 * 2.601887e-06 +
       fVar8 * -0.0001980741 + fVar7 * 0.0083330255 + fVar4 * fVar1 * -0.16666657 + fVar1);
  dVar9 = (double)fastfunc::FastWrapRot(*param_5,(float)param_2);
  *param_5 = (float)dVar9;
  dVar9 = (double)fastfunc::FastWrapRot(*param_6,(float)param_3);
  *param_6 = (float)dVar9;
  return;
}



//==== 00116d1c  ns=mobyutil  size=0x19c
// sig: undefined MB_StoreChildOffsets(void)
// callers(3): 00019cb8 mobyupdate_unsorted::UpdateMoby_1274; 00244840 mobyupdate_unsorted::UpdateMoby_1309; 00266758 mobyupdate_unsorted::UpdateMoby_1381
// callees(5): 0010c1e8 mobyutil::MB_MtxToEuler; 00500b64 fastfunc::FastEulerToMtx; 00500ca4 fastfunc::FastEulerToMtx1; 005010c0 fastfunc::FastNormalizeRMtx4; 0050162c fastfunc::FastVecMtx4Mul

void mobyutil::MB_StoreChildOffsets(int param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  MobyInstance *pMVar6;
  int iVar7;
  undefined1 auStack_e0 [48];
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined1 auStack_70 [72];
  
  fastfunc::FastEulerToMtx(auStack_e0,param_1 + 0x40);
  fastfunc::FastNormalizeRMtx4(&local_b0,auStack_e0);
  iVar7 = 0;
  if (0 < param_3) {
    do {
      fVar2 = param_2[8];
      if (fVar2 != -NAN) {
        fVar3 = MobyInstance[(int)fVar2].pos.y - *(float *)(param_1 + 0x14);
        fVar4 = MobyInstance[(int)fVar2].pos.x - *(float *)(param_1 + 0x10);
        fVar5 = MobyInstance[(int)fVar2].pos.z - *(float *)(param_1 + 0x18);
        fVar1 = MobyInstance[(int)fVar2].pos.w;
        pMVar6 = MobyInstance + (int)fVar2;
        *param_2 = local_80 * fVar1 + local_90 * fVar5 + local_b0 * fVar4 + local_a0 * fVar3;
        param_2[1] = local_7c * fVar1 + local_8c * fVar5 + local_ac * fVar4 + local_9c * fVar3;
        param_2[2] = local_78 * fVar1 + local_88 * fVar5 + local_a8 * fVar4 + local_98 * fVar3;
        param_2[3] = local_74 * fVar1 + local_84 * fVar5 + local_a4 * fVar4 + local_94 * fVar3;
        fastfunc::FastEulerToMtx1(auStack_70,&pMVar6->rotation);
        fastfunc::FastVecMtx4Mul(auStack_70,&local_b0,auStack_70);
        MB_MtxToEuler((int)auStack_70,(MobyInstance *)(param_2 + 4));
      }
      iVar7 = iVar7 + 1;
      param_2 = param_2 + 0xc;
    } while (iVar7 < param_3);
  }
  return;
}



//==== 00116eb8  ns=mobyutil  size=0x180
// sig: undefined MB_UpdateChildMobys(void)
// callers(4): 00019cb8 mobyupdate_unsorted::UpdateMoby_1274; 00244840 mobyupdate_unsorted::UpdateMoby_1309; 00266758 mobyupdate_unsorted::UpdateMoby_1381; 00267100 mobyupdate_helpers::M1387_00267100
// callees(4): 000f31a8 mobyfunc::UpdateMobyTransform; 0010c1e8 mobyutil::MB_MtxToEuler; 00500ca4 fastfunc::FastEulerToMtx1; 0050162c fastfunc::FastVecMtx4Mul

void mobyutil::MB_UpdateChildMobys(int param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  MobyInstance *pMVar5;
  int iVar6;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  undefined1 auStack_70 [64];
  
  fastfunc::FastEulerToMtx1(&local_b0,param_1 + 0x40);
  iVar6 = 0;
  if (0 < param_3) {
    do {
      if (param_2[8] != -NAN) {
        pMVar5 = MobyInstance + (int)param_2[8];
        fastfunc::FastEulerToMtx1(auStack_70,param_2 + 4);
        fastfunc::FastVecMtx4Mul(auStack_70,&local_b0,auStack_70);
        MB_MtxToEuler((int)auStack_70,(MobyInstance *)&pMVar5->rotation);
        fVar1 = param_2[1];
        fVar2 = *param_2;
        fVar3 = param_2[2];
        fVar4 = param_2[3];
        (pMVar5->pos).x =
             *(float *)(param_1 + 0x10) +
             local_80 * fVar4 + local_90 * fVar3 + local_b0 * fVar2 + local_a0 * fVar1;
        (pMVar5->pos).y =
             *(float *)(param_1 + 0x14) +
             local_7c * fVar4 + local_8c * fVar3 + local_ac * fVar2 + local_9c * fVar1;
        (pMVar5->pos).z =
             *(float *)(param_1 + 0x18) +
             local_78 * fVar4 + local_88 * fVar3 + local_a8 * fVar2 + local_98 * fVar1;
        (pMVar5->pos).w = *(f32 *)(param_1 + 0x1c);
        mobyfunc::UpdateMobyTransform(pMVar5);
      }
      iVar6 = iVar6 + 1;
      param_2 = param_2 + 0xc;
    } while (iVar6 < param_3);
  }
  return;
}



//==== 00117038  ns=mobyutil  size=0x200
// sig: undefined MB_RotateAboutPivot(void)
// callers(0): 
// callees(3): 0010c1e8 mobyutil::MB_MtxToEuler; 00500ca4 fastfunc::FastEulerToMtx1; 0050162c fastfunc::FastVecMtx4Mul

void mobyutil::MB_RotateAboutPivot(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 local_100 [16];
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
  undefined1 auStack_b0 [72];
  
  fastfunc::FastEulerToMtx1(&local_f0,(MobyInstance *)(param_1 + 0x40));
  fVar1 = param_2[1];
  fVar2 = *param_2;
  fVar3 = param_2[2];
  dVar9 = (double)param_2[3];
  dVar8 = (double)local_c0;
  dVar7 = (double)local_bc;
  dVar6 = (double)local_b8;
  dVar10 = (double)(local_d0 * fVar3 + local_f0 * fVar2 + local_e0 * fVar1);
  dVar5 = (double)(local_cc * fVar3 + local_ec * fVar2 + local_dc * fVar1);
  dVar11 = (double)(local_c8 * fVar3 + local_e8 * fVar2 + local_d8 * fVar1);
  fastfunc::FastEulerToMtx1(auStack_b0,local_100);
  fastfunc::FastVecMtx4Mul(&local_f0,&local_f0,auStack_b0);
  fVar1 = param_2[1];
  fVar2 = *param_2;
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  *(float *)(param_1 + 0x10) =
       *(float *)(param_1 + 0x10) +
       ((float)(dVar8 * dVar9 + dVar10) -
       (local_c0 * fVar4 + local_d0 * fVar3 + local_f0 * fVar2 + local_e0 * fVar1));
  *(float *)(param_1 + 0x14) =
       *(float *)(param_1 + 0x14) +
       ((float)(dVar7 * dVar9 + dVar5) -
       (local_bc * fVar4 + local_cc * fVar3 + local_ec * fVar2 + local_dc * fVar1));
  *(float *)(param_1 + 0x18) =
       *(float *)(param_1 + 0x18) +
       ((float)(dVar6 * dVar9 + dVar11) -
       (local_b8 * fVar4 + local_c8 * fVar3 + local_e8 * fVar2 + local_d8 * fVar1));
  MB_MtxToEuler((int)&local_f0,(MobyInstance *)(param_1 + 0x40));
  return;
}



//==== 00117238  ns=mobyutil  size=0x74
// sig: void MB_AddVectorSphere(float * out, float * base)
// callers(6): 000156a8 mobyupdate_unsorted::UpdateMoby_1267; 000aaec0 hero::HandleHeroMovement; 00209300 mobyupdate_helpers::M1215_00209300; 0026af90 mobyupdate_unsorted::UpdateMoby_1400; 00304a20 mobyupdate_unsorted::UpdateMoby_235; 00373720 mobyupdate_unsorted::UpdateMoby_435
// callees(1): 000fe610 mobyutil::MB_SphericalToVector

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void mobyutil::MB_AddVectorSphere(float *out,float *base)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double in_f1;
  double in_f2;
  double in_f3;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  MB_SphericalToVector((float)in_f1,(float)in_f2,(float)in_f3,&local_20);
  fVar1 = *base;
  fVar2 = base[1];
  fVar3 = base[2];
  out[3] = local_14;
  *out = local_20 + fVar1;
  out[1] = local_1c + fVar2;
  out[2] = local_18 + fVar3;
  return;
}



//==== 001172b0  ns=mobyutil  size=0xd0
// sig: undefined MB_WorldToScreenCell(void)
// callers(0): 
// callees(2): 00065490 draw::ScreenPosFromWorldSpace; 00502758 fastfunc::FastDoubleToInt

void mobyutil::MB_WorldToScreenCell(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  double dVar2;
  float local_50;
  float local_4c;
  
  draw::ScreenPosFromWorldSpace(&local_50,param_1);
  dVar2 = 0.0625;
  uVar1 = fastfunc::FastDoubleToInt
                    ((double)((local_50 - (float)(longlong)SCREEN_PROJECTION_MAP_X) * 0.0625));
  *param_2 = uVar1;
  uVar1 = fastfunc::FastDoubleToInt
                    ((double)(float)((double)(local_4c - (float)(longlong)SCREEN_PROJECTION_MAP_Y) *
                                    dVar2));
  *param_3 = uVar1;
  return;
}



//==== 00117390  ns=mobyutil  size=0x8d0
// sig: undefined MB_PathEvalSpline(void)
// callers(20): 00161788 space::UpdateSpace; 00205098 mobyupdate_unsorted::UpdateMoby_1212; 00206160 mobyupdate_unsorted::UpdateMoby_{1213_1973}; 00254e00 mobyupdate_helpers::M1349_00254e00; 00254ea0 mobyupdate_unsorted::UpdateMoby_135; 00258440 mobyupdate_helpers::M1356_00258440; 00270600 mobyupdate_helpers::M1410_00270600; 002708f0 mobyupdate_unsorted::UpdateMoby_1410; 0029d2f8 mobyupdate_unsorted::UpdateMoby_1564; 002a9010 mobyupdate_unsorted::UpdateMoby_a_lot_0; 0031cff8 mobyupdate_unsorted::UpdateMoby_257; 00369ab0 mobyupdate_helpers::M424_00369ab0; 0037a8b8 mobyupdate_unsorted::UpdateMoby_438; 0042e808 mobyupdate_helpers::M712_0042e808; 0042e8f0 mobyupdate_unsorted::UpdateMoby_712; 0042fc90 mobyupdate_unsorted::UpdateMoby_713; 0045e140 mobyupdate_helpers::M789_0045e140; 0045e2e0 mobyupdate_unsorted::UpdateMoby_79; 004cf940 mobyupdate_helpers::M998_004cf940; 004cfcc8 mobyupdate_unsorted::UpdateMoby_998
// callees(3): 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502758 fastfunc::FastDoubleToInt

/* [p2_mobyutil] evaluates point/rotation on path at float node param (cubic between nodes, wrap) */

void mobyutil::MB_PathEvalSpline
               (double param_1,uint *param_2,undefined8 param_3,int param_4,float *param_5,
               undefined4 *param_6,ulonglong param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong uVar19;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar32;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar33;
  ulonglong in_f31;
  double dVar34;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 400;
  puVar9 = (ulonglong *)lVar15;
  *puVar9 = uVar13;
  puVar9[0x34] = in_LR;
  puVar9[0x2c] = in_f26;
  puVar9[0x2d] = in_f27;
  puVar9[0x2e] = in_f28;
  puVar9[0x2f] = in_f29;
  puVar9[0x30] = in_f30;
  puVar9[0x31] = in_f31;
  puVar9[0x2b] = unaff_r31;
  puVar9[0x26] = unaff_r26;
  puVar9[0x27] = unaff_r27;
  puVar9[0x29] = unaff_r29;
  puVar9[0x28] = unaff_r28;
  bVar12 = false;
  puVar9[0x2a] = unaff_r30;
  lVar14 = fastfunc::FastDoubleToInt();
  uVar8 = *param_2;
  if ((param_4 == 0) && ((int)((ulonglong)uVar8 - 2) <= (int)lVar14)) {
    bVar12 = true;
    lVar14 = (ulonglong)uVar8 - 2;
  }
  puVar9[0x24] = (longlong)(int)lVar14;
  dVar34 = (double)(float)(param_1 - (double)(longlong)puVar9[0x24]);
  if ((bVar12) && (1.0 < dVar34)) {
    dVar34 = 1.0;
  }
  lVar16 = lVar14 + 2;
  lVar17 = lVar14 + 1;
  if ((int)uVar8 <= (int)lVar16) {
    lVar17 = lVar17 - (longlong)((int)lVar17 / (int)uVar8) * (longlong)(int)uVar8;
    lVar16 = lVar16 - (longlong)((int)lVar16 / (int)uVar8) * (longlong)(int)uVar8;
  }
  iVar11 = (int)(lVar17 << 4);
  iVar10 = (int)(lVar14 << 4);
  dVar24 = (double)*(float *)((int)param_2 + iVar11 + 0x10);
  dVar23 = (double)*(float *)((int)param_2 + iVar10 + 0x10);
  dVar27 = (double)*(float *)((int)param_2 + iVar10 + 0x14);
  dVar28 = (double)*(float *)((int)param_2 + iVar10 + 0x18);
  fVar1 = (float)(dVar24 - dVar23);
  dVar29 = (double)fVar1;
  dVar25 = (double)*(float *)((int)param_2 + iVar11 + 0x14);
  dVar26 = (double)*(float *)((int)param_2 + iVar11 + 0x18);
  fVar2 = (float)(dVar25 - dVar27);
  dVar30 = (double)fVar2;
  dVar33 = 0.0;
  fVar3 = (float)(dVar26 - dVar28);
  dVar31 = (double)fVar3;
  dVar32 = (double)*(float *)((int)param_2 + iVar10 + 0x1c);
  fVar4 = *(float *)((int)param_2 + iVar11 + 0x1c);
  dVar22 = (double)fVar4;
  param_5[3] = fVar4;
  *param_5 = (float)(dVar34 * dVar29 + dVar23);
  param_5[1] = (float)(dVar34 * dVar30 + dVar27);
  param_5[2] = (float)(dVar34 * dVar31 + dVar28);
  if ((param_7 & 1) == 0) {
    *(float *)((int)puVar9 + 0x94) = fVar1;
    *(float *)(puVar9 + 0x13) = fVar2;
    *(float *)((int)puVar9 + 0x9c) = (float)(ABS(dVar29) - ABS(dVar30));
    uVar19 = (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x9c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar9 + 0x13) >> 0x1d) & 4;
    dVar23 = ABS((double)*(float *)((int)puVar9 + 0x94));
    if (*(float *)((int)puVar9 + 0x9c) - 0.0 < 0.0) {
      dVar23 = ABS(dVar30);
    }
    fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
    fVar1 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    dVar27 = ABS((double)*(float *)(puVar9 + 0x13));
    if (*(float *)((int)puVar9 + 0x9c) - 0.0 < 0.0) {
      dVar27 = ABS(dVar29);
    }
    dVar28 = dVar33;
    if (0.0 < dVar23) {
      lVar14 = uVar13 - 0x180;
      lVar17 = uVar13 - 0x90;
      lVar21 = uVar13 - 0x80;
      lVar20 = 2;
      fVar4 = (float)(dVar27 - dVar23) / (float)(dVar27 + dVar23);
      fVar7 = fVar4 * fVar4;
      *(float *)((int)puVar9 + 0x10c) = fVar4;
      *(float *)((int)puVar9 + 0x104) = fVar4;
      *(float *)(puVar9 + 0x21) = fVar4;
      *(float *)(puVar9 + 0x20) = fVar4;
      fVar4 = fVar7 * fVar7;
      *(float *)((int)puVar9 + 0x104) = *(float *)((int)puVar9 + 0x104) * fVar7;
      *(float *)(puVar9 + 0x21) = *(float *)(puVar9 + 0x21) * fVar4;
      *(float *)((int)puVar9 + 0x10c) = *(float *)((int)puVar9 + 0x10c) * fVar4 * fVar7;
      do {
        *(float *)((int)lVar14 + 0x100) = *(float *)((int)lVar14 + 0xf0) * fVar4 * fVar4;
        iVar10 = (int)lVar17;
        lVar14 = lVar14 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar10 + 4) * fVar4 * fVar4;
        lVar21 = lVar21 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar20 = 4;
      lVar21 = uVar13 - 0x90;
      pfVar18 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar17 = lVar21;
      do {
        fVar4 = *pfVar18;
        fVar7 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar14 + 0x100) = *(float *)((int)lVar14 + 0x100) * fVar4;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar7;
        lVar17 = lVar17 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar17 = 2;
      lVar14 = lVar15;
      dVar23 = dVar33;
      do {
        iVar10 = (int)lVar14;
        lVar14 = lVar14 + 0x10;
        iVar11 = (int)lVar21;
        lVar21 = lVar21 + 0x10;
        dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar10 + 0x100)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar28 = (double)((float)(dVar23 + 0.7853981852531433) * fVar2 + fVar1);
    }
    *(float *)((int)puVar9 + 0x8c) = fVar3;
    dVar31 = ABS(dVar31);
    fVar1 = SQRT((float)(dVar29 * dVar29 + (double)(float)(dVar30 * dVar30)));
    dVar27 = ABS((double)fVar1);
    *(float *)(puVar9 + 0x11) = fVar1;
    *(float *)(puVar9 + 0x12) = (float)(dVar27 - dVar31);
    uVar19 = (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1d) & 4;
    dVar23 = ABS((double)*(float *)(puVar9 + 0x11));
    if (*(float *)(puVar9 + 0x12) - 0.0 < 0.0) {
      dVar23 = dVar31;
    }
    fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
    dVar29 = ABS((double)*(float *)((int)puVar9 + 0x8c));
    if (*(float *)(puVar9 + 0x12) - 0.0 < 0.0) {
      dVar29 = dVar27;
    }
    fVar2 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    dVar27 = dVar33;
    if (0.0 < dVar23) {
      lVar14 = uVar13 - 0x180;
      lVar17 = uVar13 - 0xb0;
      lVar21 = uVar13 - 0xa0;
      lVar20 = 2;
      fVar3 = (float)(dVar29 - dVar23) / (float)(dVar29 + dVar23);
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
        *(float *)((int)lVar14 + 0xe0) = *(float *)((int)lVar14 + 0xd0) * fVar3 * fVar3;
        iVar10 = (int)lVar17;
        lVar14 = lVar14 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar10 + 4) * fVar3 * fVar3;
        lVar21 = lVar21 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar20 = 4;
      lVar21 = uVar13 - 0xb0;
      pfVar18 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar17 = lVar21;
      do {
        fVar3 = *pfVar18;
        fVar4 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar14 + 0xe0) = *(float *)((int)lVar14 + 0xe0) * fVar3;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
        lVar17 = lVar17 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar17 = 2;
      lVar14 = lVar15;
      dVar23 = dVar33;
      do {
        iVar10 = (int)lVar14;
        iVar11 = (int)lVar21;
        lVar14 = lVar14 + 0x10;
        lVar21 = lVar21 + 0x10;
        dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar10 + 0xe0)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar27 = (double)((float)(dVar23 + 0.7853981852531433) * fVar1 + fVar2);
    }
    dVar23 = dVar27;
    dVar29 = dVar28;
    dVar30 = dVar33;
    dVar31 = dVar33;
    if (!bVar12) {
      iVar10 = (int)(lVar16 << 4);
      fVar1 = (float)((double)*(float *)((int)param_2 + iVar10 + 0x10) - dVar24);
      fVar2 = (float)((double)*(float *)((int)param_2 + iVar10 + 0x14) - dVar25);
      fVar3 = (float)((double)*(float *)((int)param_2 + iVar10 + 0x18) - dVar26);
      *(float *)((int)puVar9 + 0x7c) = fVar1;
      *(float *)(puVar9 + 0x10) = fVar2;
      *(float *)((int)puVar9 + 0x84) = ABS(fVar1) - ABS(fVar2);
      uVar19 = (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1d) & 4;
      fVar4 = ABS(*(float *)((int)puVar9 + 0x7c));
      if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
        fVar4 = ABS(fVar2);
      }
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
      fVar6 = ABS(*(float *)(puVar9 + 0x10));
      if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
        fVar6 = ABS(fVar1);
      }
      fVar5 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
      dVar29 = dVar33;
      if (0.0 < fVar4) {
        lVar14 = uVar13 - 0x180;
        lVar16 = uVar13 - 0xd0;
        lVar17 = uVar13 - 0xc0;
        lVar21 = 2;
        fVar4 = (fVar6 - fVar4) / (fVar6 + fVar4);
        fVar6 = fVar4 * fVar4;
        *(float *)((int)puVar9 + 0xcc) = fVar4;
        *(float *)((int)puVar9 + 0xc4) = fVar4;
        *(float *)(puVar9 + 0x19) = fVar4;
        *(float *)(puVar9 + 0x18) = fVar4;
        fVar4 = fVar6 * fVar6;
        *(float *)((int)puVar9 + 0xc4) = *(float *)((int)puVar9 + 0xc4) * fVar6;
        *(float *)(puVar9 + 0x19) = *(float *)(puVar9 + 0x19) * fVar4;
        *(float *)((int)puVar9 + 0xcc) = *(float *)((int)puVar9 + 0xcc) * fVar4 * fVar6;
        do {
          *(float *)((int)lVar14 + 0xc0) = *(float *)((int)lVar14 + 0xb0) * fVar4 * fVar4;
          iVar10 = (int)lVar16;
          lVar14 = lVar14 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)(iVar10 + 4) * fVar4 * fVar4;
          lVar17 = lVar17 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar17 = uVar13 - 0xd0;
        pfVar18 = (float *)&DAT_007358e0;
        lVar14 = lVar15;
        lVar16 = lVar17;
        do {
          fVar4 = *pfVar18;
          fVar6 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar14 + 0xc0) = *(float *)((int)lVar14 + 0xc0) * fVar4;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar6;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar16 = 2;
        lVar14 = lVar15;
        dVar23 = dVar33;
        do {
          iVar10 = (int)lVar14;
          iVar11 = (int)lVar17;
          lVar14 = lVar14 + 0x10;
          lVar17 = lVar17 + 0x10;
          dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar10 + 0xc0)) +
                            *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                           *(float *)(iVar11 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar29 = (double)((float)(dVar23 + 0.7853981852531433) * fVar7 + fVar5);
      }
      *(float *)((int)puVar9 + 0x74) = fVar3;
      fVar3 = ABS(fVar3);
      fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
      fVar2 = ABS(fVar1);
      *(float *)(puVar9 + 0xe) = fVar1;
      *(float *)(puVar9 + 0xf) = fVar2 - fVar3;
      uVar19 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
      fVar1 = ABS(*(float *)(puVar9 + 0xe));
      if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
        fVar1 = fVar3;
      }
      fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
      fVar3 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
      fVar7 = ABS(*(float *)((int)puVar9 + 0x74));
      if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
        fVar7 = fVar2;
      }
      dVar23 = dVar33;
      dVar30 = dVar32;
      dVar31 = dVar22;
      if (0.0 < fVar1) {
        lVar14 = uVar13 - 0x180;
        lVar17 = uVar13 - 0xe0;
        lVar16 = uVar13 - 0xf0;
        lVar21 = 2;
        fVar1 = (fVar7 - fVar1) / (fVar7 + fVar1);
        fVar2 = fVar1 * fVar1;
        *(float *)((int)puVar9 + 0xac) = fVar1;
        *(float *)((int)puVar9 + 0xa4) = fVar1;
        *(float *)(puVar9 + 0x15) = fVar1;
        *(float *)(puVar9 + 0x14) = fVar1;
        fVar1 = fVar2 * fVar2;
        *(float *)((int)puVar9 + 0xa4) = *(float *)((int)puVar9 + 0xa4) * fVar2;
        *(float *)(puVar9 + 0x15) = *(float *)(puVar9 + 0x15) * fVar1;
        *(float *)((int)puVar9 + 0xac) = *(float *)((int)puVar9 + 0xac) * fVar1 * fVar2;
        do {
          *(float *)((int)lVar14 + 0xa0) = *(float *)((int)lVar14 + 0x90) * fVar1 * fVar1;
          iVar10 = (int)lVar16;
          lVar16 = lVar16 + 8;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)(iVar10 + 4) * fVar1 * fVar1;
          lVar17 = lVar17 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar17 = uVar13 - 0xf0;
        pfVar18 = (float *)&DAT_007358e0;
        lVar14 = lVar15;
        lVar16 = lVar17;
        do {
          fVar1 = *pfVar18;
          fVar2 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar14 + 0xa0) = *(float *)((int)lVar14 + 0xa0) * fVar1;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar2;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar14 = 2;
        do {
          iVar10 = (int)lVar15;
          iVar11 = (int)lVar17;
          lVar15 = lVar15 + 0x10;
          lVar17 = lVar17 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar10 + 0xa0)) +
                            *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                           *(float *)(iVar11 + 0xc));
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        dVar23 = (double)((float)(dVar33 + 0.7853981852531433) * fVar4 + fVar3);
      }
    }
    *param_6 = 0;
    dVar22 = (double)fastfunc::FastDiffRots(dVar23,dVar27);
    dVar22 = (double)fastfunc::FastWrapRot((float)(dVar22 * dVar34),(float)dVar27);
    param_6[1] = (float)-dVar22;
    dVar22 = (double)fastfunc::FastDiffRots(dVar29,dVar28);
    dVar22 = (double)fastfunc::FastWrapRot((float)(dVar22 * dVar34),(float)dVar28);
    param_6[2] = (float)dVar22;
    dVar22 = (double)fastfunc::FastDiffRots(dVar31,dVar30);
    dVar34 = (double)fastfunc::FastWrapRot((float)(dVar22 * dVar34),(float)dVar30);
    param_6[3] = (float)-dVar34;
  }
  return;
}



//==== 00117c60  ns=mobyutil  size=0x58
// sig: uint32_t MB_HeroStandingOnMoby(MobyInstance * moby)
// callers(3): 004351b8 mobyupdate_unsorted::UpdateMoby_{726_1082_1141}; 00477b98 mobyupdate_unsorted::UpdateMoby_822; 004a66d0 mobyupdate_unsorted::UpdateMoby_903
// callees(0): 

uint32_t mobyutil::MB_HeroStandingOnMoby(MobyInstance *moby)

{
  if ((hero::g_heroStateType == 3) || (g_heroState == EDGE_JUMP)) {
    if (DAT_0096a1d8 == moby) {
      return 1;
    }
  }
  else if ((g_framesNotGrounded == 0) && (g_standingOnMoby == moby)) {
    return 1;
  }
  return 0;
}



//==== 00117cc0  ns=mobyutil  size=0x278
// sig: undefined MB_IsPntInRangeAndArc(void)
// callers(1): 00332c38 mobyupdate_unsorted::UpdateMoby_294
// callees(1): 005026a0 fastfunc::FastSubRots

undefined8
mobyutil::MB_IsPntInRangeAndArc
          (double param_1,double param_2,double param_3,int param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong *puVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong in_LR;
  longlong lVar19;
  double dVar20;
  ulonglong in_f31;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0xb0;
  puVar6 = (ulonglong *)lVar13;
  *puVar6 = uVar11;
  puVar6[0x18] = in_LR;
  puVar6[0x15] = in_f31;
  dVar20 = (double)(param_5[2] - *(float *)(param_4 + 0x18));
  if (ABS(dVar20) <= param_2) {
    fVar2 = param_5[1] - *(float *)(param_4 + 0x14);
    fVar3 = *param_5 - *(float *)(param_4 + 0x10);
    if ((double)SQRT((float)(dVar20 * dVar20 + (double)(fVar3 * fVar3 + fVar2 * fVar2))) <= param_1)
    {
      fVar7 = 0.0;
      if (0.0 < param_3) {
        *(float *)(puVar6 + 0xe) = fVar3;
        *(float *)((int)puVar6 + 0x74) = fVar2;
        fVar1 = *(float *)(param_4 + 0x48);
        *(float *)(puVar6 + 0xf) = ABS(fVar3) - ABS(fVar2);
        uVar15 = (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar6 + 0xf) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar6 + 0x74) >> 0x1d) & 4;
        fVar4 = ABS(*(float *)(puVar6 + 0xe));
        if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
          fVar4 = ABS(fVar2);
        }
        fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
        fVar2 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
        fVar10 = ABS(*(float *)((int)puVar6 + 0x74));
        if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
          fVar10 = ABS(fVar3);
        }
        if (0.0 < fVar4) {
          lVar17 = uVar11 - 0xa0;
          lVar14 = uVar11 - 0x24;
          lVar16 = uVar11 - 0x34;
          lVar19 = 2;
          fVar3 = (fVar10 - fVar4) / (fVar10 + fVar4);
          fVar4 = fVar3 * fVar3;
          *(float *)(puVar6 + 0x11) = fVar3;
          *(float *)(puVar6 + 0x10) = fVar3;
          *(float *)((int)puVar6 + 0x84) = fVar3;
          *(float *)((int)puVar6 + 0x7c) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)(puVar6 + 0x10) = *(float *)(puVar6 + 0x10) * fVar4;
          *(float *)((int)puVar6 + 0x84) = *(float *)((int)puVar6 + 0x84) * fVar3;
          *(float *)(puVar6 + 0x11) = *(float *)(puVar6 + 0x11) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x6c) * fVar3 * fVar3;
            iVar8 = (int)lVar16;
            lVar16 = lVar16 + 8;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar14 + 4) = *(float *)(iVar8 + 4) * fVar3 * fVar3;
            lVar14 = lVar14 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          lVar17 = uVar11 - 0x34;
          lVar19 = 4;
          pfVar18 = (float *)&DAT_007358e0;
          lVar14 = lVar17;
          lVar16 = lVar13;
          do {
            fVar3 = *pfVar18;
            fVar4 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar16 + 0x7c) = *(float *)((int)lVar16 + 0x7c) * fVar3;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar4;
            lVar14 = lVar14 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          lVar14 = 2;
          do {
            iVar8 = (int)lVar13;
            iVar9 = (int)lVar17;
            lVar13 = lVar13 + 0x10;
            lVar17 = lVar17 + 0x10;
            fVar7 = fVar7 + *(float *)(iVar8 + 0x7c) + *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8)
                    + *(float *)(iVar9 + 0xc);
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
          fVar7 = (fVar7 + 0.7853982) * fVar5 + fVar2;
        }
        dVar20 = (double)fastfunc::FastSubRots(fVar1,fVar7);
        if (param_3 < dVar20) {
          return 0;
        }
      }
      uVar12 = 1;
    }
    else {
      uVar12 = 0;
    }
  }
  else {
    uVar12 = 0;
  }
  return uVar12;
}



//==== 00117f38  ns=mobyutil  size=0xe8
// sig: void MB_AttachMobyToJoint(MobyInstance * parent, MobyInstance * child, int joint)
// callers(3): 0032cef0 mobyupdate_unsorted::UpdateMoby_282; 00331598 mobyupdate_helpers::M294_00331598; 00332c38 mobyupdate_unsorted::UpdateMoby_294
// callees(6): 000f1038 mobyfunc::GetBoneTransformations; 000f30a0 mobyfunc::PostUpdateMobyLockTransform; 000f31a8 mobyfunc::UpdateMobyTransform; 000f98d8 mobyfunc::UpdateMobyAnimFrame; 0010a788 mobyutil::MB_NormalizeMtx3Columns; 00500fa8 fastfunc::FastApplyTransform

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void mobyutil::MB_AttachMobyToJoint(MobyInstance *parent,MobyInstance *child,int joint)

{
  MobyModeBit MVar1;
  longlong lVar2;
  Vec4 aVStack_60 [3];
  f32 local_30;
  f32 local_2c;
  f32 local_28;
  f32 local_24;
  
  mobyfunc::GetBoneTransformations(parent,joint,aVStack_60);
  (child->pos).x = local_30;
  (child->pos).y = local_2c;
  (child->pos).z = local_28;
  (child->pos).w = local_24;
  mobyfunc::UpdateMobyAnimFrame((longlong)(int)child);
  mobyfunc::UpdateMobyTransform(child);
  lVar2 = (longlong)(int)child + 0xc0;
  fastfunc::FastApplyTransform((Vec4 *)lVar2,aVStack_60);
  MB_NormalizeMtx3Columns(lVar2);
  mobyfunc::PostUpdateMobyLockTransform(child);
  if ((parent->modeBits & DISABLED) == NONE) {
    MVar1 = child->modeBits &
            (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
             DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
             NO_POST_UPDATE|NO_UPDATE);
  }
  else {
    MVar1 = child->modeBits | (UNK_40|DISABLED);
  }
  child->modeBits = MVar1 | (NO_POST_UPDATE|NO_UPDATE);
  return;
}



//==== 00118020  ns=mobyutil  size=0xa4
// sig: undefined Spline_ComputeSegmentLengths(void)
// callers(1): 0001cb80 mobyupdate_unsorted::UpdateMoby_326
// callees(0): 

void mobyutil::Spline_ComputeSegmentLengths(longlong param_1)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int *piVar5;
  
  if ((int)param_1 != -1) {
    iVar4 = 0;
    piVar1 = *(int **)((int)Splines + (int)(param_1 << 2));
    iVar2 = *piVar1;
    piVar5 = piVar1;
    if (0 < iVar2 + -1) {
      do {
        iVar4 = iVar4 + 1;
        pfVar3 = (float *)(piVar1 + (iVar4 - (iVar4 / iVar2) * iVar2) * 4 + 4);
        iVar2 = *piVar1;
        piVar5[7] = (int)SQRT(((float)piVar5[6] - pfVar3[2]) * ((float)piVar5[6] - pfVar3[2]) +
                              ((float)piVar5[4] - *pfVar3) * ((float)piVar5[4] - *pfVar3) +
                              ((float)piVar5[5] - pfVar3[1]) * ((float)piVar5[5] - pfVar3[1]));
        piVar5 = piVar5 + 4;
      } while (iVar4 < iVar2 + -1);
    }
  }
  return;
}



//==== 001180f0  ns=mobyutil  size=0xc68
// sig: undefined MB_ComputeRocketAim(void)
// callers(1): 000ed3e0 mobyattack::Spawn_Moby256_Rocket
// callees(4): 00057820 collproc::CollLine; 000fe610 mobyutil::MB_SphericalToVector; 005026a0 fastfunc::FastSubRots; 00502730 fastfunc::FastIntToDouble

int mobyutil::MB_ComputeRocketAim
              (double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,ulonglong param_6,ulonglong param_7,float *param_8,float *param_9)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  ulonglong *puVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  float *pfVar15;
  longlong lVar14;
  ulonglong uVar16;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  int iVar17;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  int iVar18;
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
  double dVar26;
  ulonglong in_f17;
  double dVar27;
  ulonglong in_f18;
  double dVar28;
  ulonglong in_f19;
  double dVar29;
  ulonglong in_f20;
  double dVar30;
  ulonglong in_f21;
  double dVar31;
  ulonglong in_f22;
  double dVar32;
  ulonglong in_f23;
  double dVar33;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar34;
  ulonglong in_f26;
  double dVar35;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar36;
  ulonglong in_f30;
  double dVar37;
  ulonglong in_f31;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  float fStack00000050;
  float fStack00000054;
  float fStack00000058;
  float *in_stack_00000074;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar1 = uVar10 - 0x240;
  puVar8 = (ulonglong *)lVar1;
  *puVar8 = uVar10;
  puVar8[0x4a] = in_LR;
  puVar8[0x39] = in_f17;
  puVar8[0x3a] = in_f18;
  puVar8[0x3b] = in_f19;
  puVar8[0x3c] = in_f20;
  puVar8[0x3d] = in_f21;
  puVar8[0x3e] = in_f22;
  puVar8[0x3f] = in_f23;
  puVar8[0x40] = in_f24;
  puVar8[0x41] = in_f25;
  puVar8[0x42] = in_f26;
  puVar8[0x43] = in_f27;
  puVar8[0x44] = in_f28;
  puVar8[0x45] = in_f29;
  puVar8[0x46] = in_f30;
  puVar8[0x47] = in_f31;
  puVar8[0x2f] = unaff_r22;
  puVar8[0x31] = unaff_r24;
  fStack00000054 = (float)param_6;
  fVar6 = ABS(fStack00000054);
  puVar8[0x35] = unaff_r28;
  fStack00000050 = (float)(param_6 >> 0x20);
  fVar4 = ABS(fStack00000050);
  puVar8[0x38] = unaff_r31;
  puVar8[0x2d] = unaff_r20;
  puVar8[0x37] = unaff_r30;
  puVar8[0x36] = unaff_r29;
  *(float *)((int)puVar8 + 0xbc) = fVar4 - fVar6;
  dVar33 = 0.0;
  fStack00000058 = (float)(param_7 >> 0x20);
  fStack00000040 = (float)((ulonglong)param_4 >> 0x20);
  dVar27 = (double)fStack00000040;
  fStack00000048 = (float)((ulonglong)param_5 >> 0x20);
  dVar30 = (double)fStack00000048;
  fStack00000044 = (float)param_4;
  dVar28 = (double)fStack00000044;
  dVar37 = 0.7853981852531433;
  uVar16 = param_6 >> 0x3c & 8 |
           (ulonglong)(*(uint *)((int)puVar8 + 0xbc) >> 0x1e) & 2 | (param_6 << 0x20) >> 0x3d & 4;
  fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
  fVar3 = fVar4;
  if (*(float *)((int)puVar8 + 0xbc) - 0.0 < 0.0) {
    fVar3 = fVar6;
  }
  fVar2 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  if (*(float *)((int)puVar8 + 0xbc) - 0.0 < 0.0) {
    fVar6 = fVar4;
  }
  puVar8[0x34] = unaff_r27;
  puVar8[0x33] = unaff_r26;
  puVar8[0x32] = unaff_r25;
  puVar8[0x30] = unaff_r23;
  puVar8[0x2e] = unaff_r21;
  dVar36 = dVar33;
  if (0.0 < fVar3) {
    lVar11 = uVar10 - 0x230;
    lVar14 = uVar10 - 0xf0;
    lVar13 = uVar10 - 0x100;
    lVar19 = 2;
    fVar3 = (fVar6 - fVar3) / (fVar6 + fVar3);
    fVar6 = fVar3 * fVar3;
    *(float *)(puVar8 + 0x28) = fVar3;
    *(float *)((int)puVar8 + 0x144) = fVar3;
    *(float *)(puVar8 + 0x29) = fVar3;
    *(float *)((int)puVar8 + 0x14c) = fVar3;
    fVar3 = fVar6 * fVar6;
    *(float *)((int)puVar8 + 0x144) = *(float *)((int)puVar8 + 0x144) * fVar6;
    *(float *)(puVar8 + 0x29) = *(float *)(puVar8 + 0x29) * fVar3;
    *(float *)((int)puVar8 + 0x14c) = *(float *)((int)puVar8 + 0x14c) * fVar3 * fVar6;
    do {
      *(float *)((int)lVar11 + 0x140) = *(float *)((int)lVar11 + 0x130) * fVar3 * fVar3;
      iVar7 = (int)lVar13;
      lVar13 = lVar13 + 8;
      lVar11 = lVar11 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)(iVar7 + 4) * fVar3 * fVar3;
      lVar14 = lVar14 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar19 = 4;
    lVar14 = uVar10 - 0x100;
    pfVar15 = (float *)&DAT_007358e0;
    lVar11 = lVar1;
    lVar13 = lVar14;
    do {
      fVar3 = *pfVar15;
      fVar6 = pfVar15[1];
      pfVar15 = pfVar15 + 2;
      *(float *)((int)lVar11 + 0x140) = *(float *)((int)lVar11 + 0x140) * fVar3;
      lVar11 = lVar11 + 8;
      *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar6;
      lVar13 = lVar13 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar13 = 2;
    lVar11 = lVar1;
    do {
      iVar7 = (int)lVar11;
      iVar18 = (int)lVar14;
      lVar11 = lVar11 + 0x10;
      lVar14 = lVar14 + 0x10;
      dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar7 + 0x140)) + *(float *)(iVar18 + 4)
                        + *(float *)(iVar18 + 8) + *(float *)(iVar18 + 0xc));
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    dVar36 = (double)((float)(dVar36 + 0.7853981852531433) * fVar5 + fVar2);
  }
  *param_8 = (float)dVar36;
  fStack00000058 = ABS(fStack00000058);
  fVar5 = SQRT(fStack00000050 * fStack00000050 + fStack00000054 * fStack00000054);
  fVar3 = ABS(fVar5);
  *(float *)((int)puVar8 + 0xb4) = fVar5;
  *(float *)(puVar8 + 0x17) = fVar3 - fStack00000058;
  uVar16 = (ulonglong)(*(uint *)((int)puVar8 + 0xb4) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 0x17) >> 0x1e) & 2 | param_7 >> 0x3d & 4;
  fVar5 = ABS(*(float *)((int)puVar8 + 0xb4));
  if (*(float *)(puVar8 + 0x17) - 0.0 < 0.0) {
    fVar5 = fStack00000058;
  }
  fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
  if (*(float *)(puVar8 + 0x17) - 0.0 < 0.0) {
    fStack00000058 = fVar3;
  }
  fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  dVar36 = dVar33;
  if (0.0 < fVar5) {
    lVar11 = uVar10 - 0x230;
    lVar13 = uVar10 - 0x120;
    lVar14 = uVar10 - 0x110;
    lVar19 = 2;
    fVar5 = (fStack00000058 - fVar5) / (fStack00000058 + fVar5);
    fVar4 = fVar5 * fVar5;
    *(float *)(puVar8 + 0x24) = fVar5;
    *(float *)((int)puVar8 + 0x124) = fVar5;
    *(float *)(puVar8 + 0x25) = fVar5;
    *(float *)((int)puVar8 + 300) = fVar5;
    fVar5 = fVar4 * fVar4;
    *(float *)((int)puVar8 + 0x124) = *(float *)((int)puVar8 + 0x124) * fVar4;
    *(float *)(puVar8 + 0x25) = *(float *)(puVar8 + 0x25) * fVar5;
    *(float *)((int)puVar8 + 300) = *(float *)((int)puVar8 + 300) * fVar5 * fVar4;
    do {
      *(float *)((int)lVar11 + 0x120) = *(float *)((int)lVar11 + 0x110) * fVar5 * fVar5;
      iVar7 = (int)lVar13;
      lVar11 = lVar11 + 8;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)(iVar7 + 4) * fVar5 * fVar5;
      lVar14 = lVar14 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar19 = 4;
    lVar14 = uVar10 - 0x120;
    pfVar15 = (float *)&DAT_007358e0;
    lVar11 = lVar1;
    lVar13 = lVar14;
    do {
      fVar5 = *pfVar15;
      fVar4 = pfVar15[1];
      pfVar15 = pfVar15 + 2;
      *(float *)((int)lVar11 + 0x120) = *(float *)((int)lVar11 + 0x120) * fVar5;
      lVar11 = lVar11 + 8;
      *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar4;
      lVar13 = lVar13 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar13 = 2;
    lVar11 = lVar1;
    do {
      iVar7 = (int)lVar11;
      lVar11 = lVar11 + 0x10;
      iVar18 = (int)lVar14;
      lVar14 = lVar14 + 0x10;
      dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar7 + 0x120)) + *(float *)(iVar18 + 4)
                        + *(float *)(iVar18 + 8) + *(float *)(iVar18 + 0xc));
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    dVar36 = (double)((float)(dVar36 + 0.7853981852531433) * fVar6 + fVar3);
  }
  iVar7 = MobyUpdateChainStart;
  iVar18 = 0;
  *param_9 = (float)-dVar36;
  dVar36 = 10000.0;
  _fStack00000050 = param_6;
  _fStack00000040 = param_4;
  _fStack00000048 = param_5;
  _fStack00000058 = param_7;
  do {
    if (iVar7 == 0) {
      return iVar18;
    }
    if (*(byte *)(iVar7 + 0x20) < 0x80) {
      dVar35 = (double)*(float *)(iVar7 + 0x10);
      *(float *)(puVar8 + 0xe) = *(float *)(iVar7 + 0x10);
      dVar22 = (double)*(float *)(iVar7 + 0x14);
      *(float *)((int)puVar8 + 0x74) = *(float *)(iVar7 + 0x14);
      fVar5 = *(float *)(iVar7 + 0x18);
      *(float *)(puVar8 + 0xf) = fVar5;
      *(undefined4 *)((int)puVar8 + 0x7c) = *(undefined4 *)(iVar7 + 0x1c);
      if ((*(ushort *)(iVar7 + 0x34) & 0x20) == 0) {
        iVar17 = 0;
LAB_0011855c:
        fVar3 = 0.5;
      }
      else {
        iVar17 = **(int **)(iVar7 + 0x78);
        if (iVar17 == 0) goto LAB_0011855c;
        fVar3 = *(float *)(iVar17 + 0x10);
      }
      fVar5 = fVar5 + fVar3;
      dVar20 = (double)fVar5;
      *(float *)(puVar8 + 0xf) = fVar5;
      if ((((*(ushort *)(iVar7 + 0x34) & 0x1000) != 0) && (*(int *)(iVar7 + 0x24) != 0)) &&
         (*(short *)(*(int *)(iVar7 + 0x24) + 0x46) == 5)) {
        fVar5 = (float)(dVar35 - dVar27);
        fVar3 = (float)(dVar22 - dVar28);
        dVar26 = ABS((double)fVar5);
        dVar25 = ABS((double)fVar3);
        *(float *)(puVar8 + 0x15) = fVar5;
        *(float *)((int)puVar8 + 0xac) = fVar3;
        *(float *)(puVar8 + 0x16) = (float)(dVar26 - dVar25);
        uVar16 = (ulonglong)(*(uint *)(puVar8 + 0x15) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar8 + 0x16) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar8 + 0xac) >> 0x1d) & 4;
        dVar24 = ABS((double)*(float *)(puVar8 + 0x15));
        if ((double)*(float *)(puVar8 + 0x16) - dVar33 < 0.0) {
          dVar24 = dVar25;
        }
        fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
        dVar25 = ABS((double)*(float *)((int)puVar8 + 0xac));
        if ((double)*(float *)(puVar8 + 0x16) - dVar33 < 0.0) {
          dVar25 = dVar26;
        }
        fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
        dVar26 = dVar33;
        if (dVar33 < dVar24) {
          lVar11 = uVar10 - 0x230;
          lVar13 = uVar10 - 0x140;
          lVar14 = uVar10 - 0x130;
          lVar19 = 2;
          fVar6 = (float)(dVar25 - dVar24) / (float)(dVar25 + dVar24);
          fVar4 = fVar6 * fVar6;
          *(float *)(puVar8 + 0x20) = fVar6;
          *(float *)((int)puVar8 + 0x104) = fVar6;
          *(float *)(puVar8 + 0x21) = fVar6;
          *(float *)((int)puVar8 + 0x10c) = fVar6;
          fVar6 = fVar4 * fVar4;
          *(float *)((int)puVar8 + 0x104) = *(float *)((int)puVar8 + 0x104) * fVar4;
          *(float *)(puVar8 + 0x21) = *(float *)(puVar8 + 0x21) * fVar6;
          *(float *)((int)puVar8 + 0x10c) = *(float *)((int)puVar8 + 0x10c) * fVar6 * fVar4;
          do {
            *(float *)((int)lVar11 + 0x100) = *(float *)((int)lVar11 + 0xf0) * fVar6 * fVar6;
            iVar12 = (int)lVar13;
            lVar11 = lVar11 + 8;
            lVar13 = lVar13 + 8;
            *(float *)((int)lVar14 + 4) = *(float *)(iVar12 + 4) * fVar6 * fVar6;
            lVar14 = lVar14 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          lVar19 = 4;
          lVar14 = uVar10 - 0x140;
          pfVar15 = (float *)&DAT_007358e0;
          lVar11 = lVar1;
          lVar13 = lVar14;
          do {
            fVar6 = *pfVar15;
            fVar4 = pfVar15[1];
            pfVar15 = pfVar15 + 2;
            *(float *)((int)lVar11 + 0x100) = *(float *)((int)lVar11 + 0x100) * fVar6;
            lVar11 = lVar11 + 8;
            *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar4;
            lVar13 = lVar13 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          lVar13 = 2;
          lVar11 = lVar1;
          dVar24 = dVar33;
          do {
            iVar12 = (int)lVar11;
            lVar11 = lVar11 + 0x10;
            iVar9 = (int)lVar14;
            lVar14 = lVar14 + 0x10;
            dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar12 + 0x100)) +
                              *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                             *(float *)(iVar9 + 0xc));
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          dVar26 = (double)((float)(dVar24 + dVar37) * fVar5 + fVar3);
        }
        fVar5 = (float)(dVar28 - dVar22);
        fVar3 = (float)(dVar27 - dVar35);
        fVar6 = (float)(dVar20 - dVar30);
        dVar24 = ABS((double)fVar6);
        *(float *)(puVar8 + 0x14) = fVar6;
        fVar5 = fVar3 * fVar3 + fVar5 * fVar5;
        fVar3 = SQRT(fVar5);
        dVar35 = ABS((double)fVar3);
        *(float *)((int)puVar8 + 0x9c) = fVar3;
        *(float *)((int)puVar8 + 0xa4) = (float)(dVar35 - dVar24);
        uVar16 = (ulonglong)(*(uint *)((int)puVar8 + 0x9c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar8 + 0xa4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar8 + 0x14) >> 0x1d) & 4;
        dVar22 = ABS((double)*(float *)((int)puVar8 + 0x9c));
        if ((double)*(float *)((int)puVar8 + 0xa4) - dVar33 < 0.0) {
          dVar22 = dVar24;
        }
        fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
        dVar24 = ABS((double)*(float *)(puVar8 + 0x14));
        if ((double)*(float *)((int)puVar8 + 0xa4) - dVar33 < 0.0) {
          dVar24 = dVar35;
        }
        fVar6 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
        dVar35 = dVar33;
        if (dVar33 < dVar22) {
          lVar11 = uVar10 - 0x230;
          lVar14 = uVar10 - 0x150;
          lVar13 = uVar10 - 0x160;
          lVar19 = 2;
          fVar4 = (float)(dVar24 - dVar22) / (float)(dVar24 + dVar22);
          fVar2 = fVar4 * fVar4;
          *(float *)(puVar8 + 0x1c) = fVar4;
          *(float *)((int)puVar8 + 0xe4) = fVar4;
          *(float *)(puVar8 + 0x1d) = fVar4;
          *(float *)((int)puVar8 + 0xec) = fVar4;
          fVar4 = fVar2 * fVar2;
          *(float *)((int)puVar8 + 0xe4) = *(float *)((int)puVar8 + 0xe4) * fVar2;
          *(float *)(puVar8 + 0x1d) = *(float *)(puVar8 + 0x1d) * fVar4;
          *(float *)((int)puVar8 + 0xec) = *(float *)((int)puVar8 + 0xec) * fVar4 * fVar2;
          do {
            *(float *)((int)lVar11 + 0xe0) = *(float *)((int)lVar11 + 0xd0) * fVar4 * fVar4;
            iVar12 = (int)lVar13;
            lVar13 = lVar13 + 8;
            lVar11 = lVar11 + 8;
            *(float *)((int)lVar14 + 4) = *(float *)(iVar12 + 4) * fVar4 * fVar4;
            lVar14 = lVar14 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          lVar19 = 4;
          lVar14 = uVar10 - 0x160;
          pfVar15 = (float *)&DAT_007358e0;
          lVar11 = lVar1;
          lVar13 = lVar14;
          do {
            fVar4 = *pfVar15;
            fVar2 = pfVar15[1];
            pfVar15 = pfVar15 + 2;
            *(float *)((int)lVar11 + 0xe0) = *(float *)((int)lVar11 + 0xe0) * fVar4;
            lVar11 = lVar11 + 8;
            *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar2;
            lVar13 = lVar13 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          lVar13 = 2;
          lVar11 = lVar1;
          dVar22 = dVar33;
          do {
            iVar12 = (int)lVar11;
            iVar9 = (int)lVar14;
            lVar11 = lVar11 + 0x10;
            lVar14 = lVar14 + 0x10;
            dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar12 + 0xe0)) +
                              *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                             *(float *)(iVar9 + 0xc));
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          dVar35 = (double)((float)(dVar22 + dVar37) * fVar3 + fVar6);
        }
        fVar3 = (float)(dVar30 - dVar20);
        dVar22 = (double)SQRT(fVar3 * fVar3 + fVar5);
        if (dVar22 < 7.5) {
          fVar3 = *(float *)(iVar7 + 0x10) - g_heroPosition.x;
          fVar6 = *(float *)(iVar7 + 0x14) - g_heroPosition.y;
          fVar5 = (g_heroMobyPtr->rotation).z;
          dVar24 = ABS((double)fVar3);
          dVar25 = ABS((double)fVar6);
          *(float *)(puVar8 + 0x12) = fVar3;
          *(float *)((int)puVar8 + 0x94) = fVar6;
          *(float *)(puVar8 + 0x13) = (float)(dVar24 - dVar25);
          uVar16 = (ulonglong)(*(uint *)(puVar8 + 0x12) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar8 + 0x13) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar8 + 0x94) >> 0x1d) & 4;
          dVar20 = ABS((double)*(float *)(puVar8 + 0x12));
          if ((double)*(float *)(puVar8 + 0x13) - dVar33 < 0.0) {
            dVar20 = dVar25;
          }
          fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
          dVar25 = ABS((double)*(float *)((int)puVar8 + 0x94));
          if ((double)*(float *)(puVar8 + 0x13) - dVar33 < 0.0) {
            dVar25 = dVar24;
          }
          fVar6 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
          dVar24 = dVar33;
          if (dVar33 < dVar20) {
            lVar11 = uVar10 - 0x230;
            lVar14 = uVar10 - 0x170;
            lVar13 = uVar10 - 0x180;
            lVar19 = 2;
            fVar4 = (float)(dVar25 - dVar20) / (float)(dVar25 + dVar20);
            fVar2 = fVar4 * fVar4;
            *(float *)(puVar8 + 0x18) = fVar4;
            *(float *)((int)puVar8 + 0xc4) = fVar4;
            *(float *)(puVar8 + 0x19) = fVar4;
            *(float *)((int)puVar8 + 0xcc) = fVar4;
            fVar4 = fVar2 * fVar2;
            *(float *)((int)puVar8 + 0xc4) = *(float *)((int)puVar8 + 0xc4) * fVar2;
            *(float *)(puVar8 + 0x19) = *(float *)(puVar8 + 0x19) * fVar4;
            *(float *)((int)puVar8 + 0xcc) = *(float *)((int)puVar8 + 0xcc) * fVar4 * fVar2;
            do {
              *(float *)((int)lVar11 + 0xc0) = *(float *)((int)lVar11 + 0xb0) * fVar4 * fVar4;
              iVar12 = (int)lVar13;
              lVar13 = lVar13 + 8;
              lVar11 = lVar11 + 8;
              *(float *)((int)lVar14 + 4) = *(float *)(iVar12 + 4) * fVar4 * fVar4;
              lVar14 = lVar14 + 8;
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
            lVar19 = 4;
            lVar14 = uVar10 - 0x180;
            pfVar15 = (float *)&DAT_007358e0;
            lVar11 = lVar1;
            lVar13 = lVar14;
            do {
              fVar4 = *pfVar15;
              fVar2 = pfVar15[1];
              pfVar15 = pfVar15 + 2;
              *(float *)((int)lVar11 + 0xc0) = *(float *)((int)lVar11 + 0xc0) * fVar4;
              lVar11 = lVar11 + 8;
              *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar2;
              lVar13 = lVar13 + 8;
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
            lVar13 = 2;
            lVar11 = lVar1;
            dVar20 = dVar33;
            do {
              iVar12 = (int)lVar11;
              iVar9 = (int)lVar14;
              lVar11 = lVar11 + 0x10;
              lVar14 = lVar14 + 0x10;
              dVar20 = (double)((float)(dVar20 + (double)*(float *)(iVar12 + 0xc0)) +
                                *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                               *(float *)(iVar9 + 0xc));
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
            dVar24 = (double)((float)(dVar20 + dVar37) * fVar3 + fVar6);
          }
          dVar20 = (double)fastfunc::FastSubRots(fVar5,(float)dVar24);
          if ((dVar20 < 1.0471975803375244) && (ABS(dVar35) < 1.0471975803375244)) {
            *param_9 = (float)-dVar35;
            *param_8 = (float)dVar26;
            return iVar7;
          }
        }
        if (dVar22 <= dVar36) {
          dVar32 = 0.5;
          MB_SphericalToVector
                    ((float)dVar22,*param_8,DAT_00969fc4 * 0.5 + *param_9,(float *)(puVar8 + 0x10));
          fVar5 = (float)((double)*(float *)((int)puVar8 + 0x84) + dVar28);
          fVar3 = fVar5 - *(float *)((int)puVar8 + 0x74);
          fVar6 = (float)((double)*(float *)(puVar8 + 0x10) + dVar27) - *(float *)(puVar8 + 0xe);
          *(float *)(puVar8 + 0x10) = (float)((double)*(float *)(puVar8 + 0x10) + dVar27);
          fVar4 = (float)((double)*(float *)(puVar8 + 0x11) + dVar30) - *(float *)(puVar8 + 0xf);
          *(float *)((int)puVar8 + 0x84) = fVar5;
          *(float *)(puVar8 + 0x11) = (float)((double)*(float *)(puVar8 + 0x11) + dVar30);
          dVar34 = 1.0;
          dVar25 = -1.0;
          dVar24 = (double)(SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar3 * fVar3) /
                           (float)(dVar22 * 2.0));
          dVar31 = 1.5707963705062866;
          dVar20 = dVar24;
          if (dVar24 - dVar33 < 0.0) {
            dVar20 = ABS(dVar24);
          }
          dVar21 = dVar34;
          if (dVar24 - dVar33 < 0.0) {
            dVar21 = dVar25;
          }
          dVar24 = (double)(float)(1.0 - dVar20);
          if ((double)(float)(1.0 - dVar20) - dVar33 < 0.0) {
            dVar24 = dVar33;
          }
          dVar20 = (double)((float)(-(double)(((float)((double)(float)(dVar20 * dVar20) * dVar20) *
                                               DAT_007358cc +
                                              (float)((double)(float)(dVar20 * dVar20) *
                                                      (double)DAT_007358c8 +
                                                     (double)(float)(dVar20 * (double)DAT_007358c4 +
                                                                    (double)DAT_007358c0))) *
                                              (float)SQRT(dVar24) - 1.5707964) * dVar21) * 2.0);
          if ((param_1 < dVar20) && (iVar17 != 0)) {
            dVar21 = (double)fastfunc::FastIntToDouble((ulonglong)*(byte *)(iVar17 + 10) << 3);
            dVar23 = (double)(float)((double)(float)(dVar21 * 0.125) / dVar22);
            dVar24 = dVar23;
            if (dVar23 - dVar33 < 0.0) {
              dVar24 = ABS(dVar23);
            }
            dVar29 = dVar34;
            if (dVar23 - dVar33 < 0.0) {
              dVar29 = dVar25;
            }
            dVar25 = (double)(float)(dVar34 - dVar24);
            if ((double)(float)(dVar34 - dVar24) - dVar33 < 0.0) {
              dVar25 = dVar33;
            }
            if ((double)(float)(dVar21 * 0.125) < dVar22) {
              dVar20 = -(double)(float)(-(double)(float)((double)((float)((double)(float)(dVar24 * 
                                                  dVar24) * dVar24) * DAT_007358cc +
                                                  (float)((double)(float)(dVar24 * dVar24) *
                                                          (double)DAT_007358c8 +
                                                         (double)(float)(dVar24 * (double)
                                                  DAT_007358c4 + (double)DAT_007358c0))) *
                                                  (double)(float)SQRT(dVar25) - dVar31) * dVar29 -
                                       dVar20);
            }
          }
          if ((dVar20 < param_1) &&
             (iVar12 = collproc::CollLine(0x951500,uVar10 - 0x1d0,6,param_2,0), iVar12 == 0)) {
            *param_9 = (float)-dVar35;
            *param_8 = (float)dVar26;
            if (iVar17 != 0) {
              dVar32 = (double)*(float *)(iVar17 + 0x10);
            }
            *in_stack_00000074 = (float)dVar32;
            dVar36 = dVar22;
            iVar18 = iVar7;
          }
        }
      }
    }
    iVar7 = *(int *)(iVar7 + 0x28);
  } while( true );
}



//==== 00118d60  ns=mobyutil  size=0x9c
// sig: undefined MB_SampleByteGrid(void)
// callers(4): 00120258 partupd::UpdatePart_0; 00134758 partupd::UpdatePart_73; 00180408 UpdateSound_4; 0026af90 mobyupdate_unsorted::UpdateMoby_1400
// callees(0): 

/* [p2_mobyutil] lerp(min,max) by byte value in 2D grid DAT_00a204a8 (stride DAT_00a20498)
   [p2_mobyutil] lerp(min,max) by byte value in 2D grid DAT_00a204a8 (stride DAT_00a20498) */

double mobyutil::MB_SampleByteGrid(undefined8 param_1)

{
  float fStack00000030;
  float fStack00000034;
  
  fStack00000034 = (float)param_1;
  fStack00000030 = (float)((ulonglong)param_1 >> 0x20);
  return (double)((DAT_00a204a4 - DAT_00a204a0) *
                  -((float)*(byte *)(g_byteGridData + g_byteGridStride * (int)fStack00000034 +
                                    (int)fStack00000030) * 0.003921569 - 1.0) + DAT_00a204a0);
}



//==== 00118e38  ns=mobyutil  size=0x1e4
// sig: undefined MB_SpawnGridParticles(void)
// callers(2): 00134758 partupd::UpdatePart_73; 0026af90 mobyupdate_unsorted::UpdateMoby_1400
// callees(3): 00057820 collproc::CollLine; 001204c0 partupd::SpawnPart_1; 00502a64 fastfunc::FastVecSub

void mobyutil::MB_SpawnGridParticles(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong unaff_r31;
  byte in_cr6;
  ulonglong in_LR;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fStack00000030;
  float fStack00000034;
  undefined8 uStack00000038;
  
  uVar3 = ZEXT48(&stack0x00000000);
  puVar2 = (ulonglong *)(uVar3 - 0xb0);
  *puVar2 = uVar3;
  puVar2[0x18] = in_LR;
  iVar4 = g_byteGridStride;
  fStack00000034 = (float)param_1;
  auVar10 = ZEXT416(0xffffffff);
  auVar9 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
  auVar10 = ZEXT416(0xfffffff8);
  uVar5 = (ulonglong)g_byteGridData;
  fStack00000030 = (float)((ulonglong)param_1 >> 0x20);
  auVar6 = loadVectorLeftIndexed(0x4a4,0xa20000);
  auVar8 = loadVectorLeftIndexed(0x4a0,0xa20000);
  auVar11 = loadVectorLeftIndexed(in_LR,0x118e00);
  auVar7 = vectorSubtractFloatingPoint(auVar6,auVar8);
  auVar9 = vectorShiftLeftIntegerWord(auVar9,auVar9);
  auVar6 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
  puVar2[0x12] = (longlong)(int)fStack00000030;
  puVar2[0x12] = (longlong)(int)fStack00000034;
  auVar11 = loadVectorLeftIndexed(4,0x118e00);
  auVar12 = loadVectorLeftIndexed
                      (in_LR,uVar5 + (longlong)iVar4 * (longlong)*(int *)((int)puVar2 + 0x94) +
                             (ulonglong)*(uint *)((int)puVar2 + 0x94) & 0xffffffff);
  auVar13 = loadVectorLeftIndexed(8,0x118e00);
  auVar12 = vectorShiftRightWord
                      (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60);
  auVar9 = vectorMultiplyAddFloatingPoint
                     (auVar7,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar9);
  auVar10 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar6 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar11 = vectorConvertFromUnsignedFixedPointWord(auVar12,0);
  auVar10 = vectorNegativeMultiplySubtractFloatingPoint
                      (auVar11,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                       auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60);
  auVar11 = loadVectorLeftIndexed(0x148,0x9513c0);
  uStack00000038._4_4_ = (undefined4)param_2;
  auVar10 = vectorMultiplyAddFloatingPoint(auVar7,auVar10,auVar8);
  auVar6 = vectorAddFloatingPoint(auVar10,auVar9);
  auVar10 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar7 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
  uVar1 = storeVectorElementWordIndexed(auVar7,0x38,uVar3);
  *(undefined4 *)(puVar2 + 0x1d) = uVar1;
  auVar10 = loadVectorLeftIndexed(0xc,0x118e00);
  auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar10 = vectorAddFloatingPoint
                      (auVar11,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60);
  auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
  vectorCompareGreaterThanOrEqualToFloatingPoint
            (auVar7,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60);
  puVar2[0x15] = unaff_r31;
  if ((bool)(in_cr6 >> 1 & 1)) {
    *(float *)(puVar2 + 0xe) = fStack00000030;
    *(float *)((int)puVar2 + 0x74) = fStack00000034;
    *(undefined4 *)((int)puVar2 + 0x7c) = uStack00000038._4_4_;
    auVar10 = loadVectorLeftIndexed(0x10,0x118e00);
    auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar10 = vectorNegativeMultiplySubtractFloatingPoint
                        (auVar9,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,auVar6
                        );
    auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar1 = storeVectorElementWordIndexed
                      (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0x78,
                       uVar3 - 0xb0);
    *(undefined4 *)(puVar2 + 0xf) = uVar1;
    _fStack00000030 = param_1;
    uStack00000038 = param_2;
    iVar4 = collproc::CollLine(uVar3 + 0x30 & 0xffffffff,uVar3 - 0x40,0x12,0,0,0x78,&GameCamera,
                               0x148);
    if (iVar4 != 0) {
      fastfunc::FastVecSub(uVar3 - 0x30,0xa10960,0x951500);
      puVar2[0x12] = (longlong)
                     (SQRT(*(float *)(puVar2 + 0x10) * *(float *)(puVar2 + 0x10) +
                           *(float *)((int)puVar2 + 0x84) * *(float *)((int)puVar2 + 0x84)) *
                      0.016666668 * 191.0 + 64.0);
      partupd::SpawnPart_1
                ((PartInstance *)&CollOutput.ip,(ulonglong)*(uint *)((int)puVar2 + 0x94) & 0xff);
    }
  }
  return;
}



//==== 00119028  ns=mobyutil  size=0x340
// sig: undefined MB_DrawGlowFX(void)
// callers(14): 00095f40 hero::Hero_DrawGlows; 001abec8 mobyupdate_helpers::M1060_001abec8; 001bc8c8 mobyupdate_helpers::M1099_001bc8c8; 00204ad0 mobyupdate_helpers::M1212_00204ad0; 002057e8 mobyupdate_helpers::M1973_002057e8; 00258108 mobyupdate_helpers::M1356_00258108; 0027a098 mobyupdate_helpers::M1424_0027a098; 0029c460 mobyupdate_helpers::M1564_0029c460; 002bea00 mobyupdate_helpers::M1818_002bea00; 002d74b8 mobyupdate_helpers::M1907_002d74b8; 003805d0 mobyupdate_helpers::M440_003805d0; 003f9a38 mobyupdate_helpers::M1382_003f9a38; 0045de88 mobyupdate_helpers::M789_0045de88; 00495620 mobyupdate_helpers::M859_00495620
// callees(5): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyutil::MB_DrawGlowFX(double param_1,double param_2,float *param_3)

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
  float local_e0 [36];
  
  draw::GetEffectTex(0xb);
  idol_draw::PackCmd(0,2,0,1,0x80);
  stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(1,1,0,0,0,0);
  dVar14 = 0.0;
  fVar4 = param_3[1];
  fVar5 = *param_3;
  fVar1 = (float)((double)GameCamera.posY - (double)fVar4);
  fVar6 = param_3[2];
  fVar2 = (float)((double)GameCamera.posX - (double)fVar5);
  fVar3 = (float)((double)GameCamera.posZ - (double)fVar6);
  fVar7 = param_3[3];
  dVar13 = (double)(float)GameCamera.field8_0x14c;
  fVar9 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  dVar15 = dVar14;
  dVar16 = dVar14;
  dVar17 = dVar14;
  if (SQRT(fVar9) != 0.0) {
    fVar8 = 1.0 / SQRT(fVar9);
    fVar8 = -(fVar9 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar8 = -(fVar9 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar8 = -(fVar9 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    dVar17 = (double)(fVar2 * fVar8);
    dVar16 = (double)(fVar1 * fVar8);
    dVar15 = (double)(fVar3 * fVar8);
  }
  fVar1 = (float)(dVar17 * dVar17 + --(double)(float)(dVar16 * dVar16));
  dVar18 = dVar14;
  if (SQRT(fVar1) != 0.0) {
    fVar2 = 1.0 / SQRT(fVar1);
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    dVar18 = (double)(-(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2);
    dVar14 = (double)(float)(dVar17 * dVar18);
    dVar18 = -(double)(float)(dVar16 * dVar18);
  }
  pfVar10 = (float *)&DAT_007294b0;
  pfVar11 = local_e0;
  lVar12 = 4;
  do {
    fVar2 = *pfVar10;
    fVar1 = (float)((double)fVar2 * param_1);
    dVar20 = (double)fVar1;
    *pfVar11 = fVar1;
    dVar19 = (double)pfVar10[1];
    pfVar11[1] = (float)(dVar19 * param_1);
    fVar1 = (float)((double)pfVar10[2] * param_1);
    pfVar11[2] = fVar1;
    fVar3 = pfVar10[3];
    pfVar10 = pfVar10 + 4;
    pfVar11[3] = fVar3 * fVar7 + (float)((double)fVar2 * (double)(float)(param_1 * dVar13));
    *pfVar11 = fVar3 * (float)(dVar17 * param_2 + (double)fVar5) +
               fVar1 * (float)(dVar16 * 0.0 - (double)(float)(dVar15 * dVar14)) +
               (float)(dVar20 * dVar17 + (double)(float)(dVar19 * (double)(float)(param_1 * dVar18))
                      );
    pfVar11[1] = fVar3 * (float)(dVar16 * param_2 + (double)fVar4) +
                 fVar1 * (float)(dVar15 * dVar18 - 0.0) +
                 (float)(dVar20 * dVar16 +
                        (double)(float)(dVar19 * (double)(float)(param_1 * dVar14)));
    pfVar11[2] = fVar3 * (float)(dVar15 * param_2 + (double)fVar6) +
                 fVar1 * (float)(dVar17 * dVar14 - (double)(float)(dVar16 * dVar18)) +
                 (float)(dVar20 * dVar15 + 0.0);
    pfVar11 = pfVar11 + 4;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  draw::FastDrawQuad(local_e0,0,0,EffectTexHeaders,9);
  return;
}



//==== 00119370  ns=mobyutil  size=0xf4
// sig: undefined ???_MB_SetFadeByDistToHero(void)
// callers(1): 00275240 mobyupdate_helpers::M1422_00275240
// callees(1): 00502758 fastfunc::FastDoubleToInt

void mobyutil::____MB_SetFadeByDistToHero(double param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  float fVar5;
  int iVar6;
  
  if ((((param_2 != 0) && (param_2 != 0)) && ((*(ushort *)(param_2 + 0x34) & 0x20) != 0)) &&
     (iVar1 = **(int **)(param_2 + 0x78), iVar1 != 0)) {
    fVar2 = g_heroPosition.y - *(float *)(param_2 + 0x14);
    fVar3 = g_heroPosition.x - *(float *)(param_2 + 0x10);
    fVar5 = g_heroPosition.z - *(float *)(param_2 + 0x18);
    iVar6 = fastfunc::FastDoubleToInt
                      ((double)(float)((double)(SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2)
                                               * 8.0) * param_1));
    iVar6 = iVar6 + -1;
    cVar4 = (char)iVar6 + ((byte)(iVar6 >> 7) & -(char)iVar6);
    *(byte *)(iVar1 + 10) = cVar4 + ((byte)(0xff - (longlong)iVar6 >> 0x3f) & -cVar4 - 1U);
  }
  return;
}



//==== 00119488  ns=mobyutil  size=0x138
// sig: undefined MB_SetPointAheadOfMoby(void)
// callers(20): 001be558 mobyupdate_unsorted::UpdateMoby_1105; 001d8090 mobyupdate_unsorted::UpdateMoby_1130; 001dd210 mobyupdate_helpers::M1140_001dd210; 001df770 mobyupdate_unsorted::UpdateMoby_1144; 00237e98 mobyupdate_unsorted::UpdateMoby_1283; 00284e60 mobyupdate_unsorted::UpdateMoby_1455; 0032cef0 mobyupdate_unsorted::UpdateMoby_282; 003361b0 mobyupdate_unsorted::UpdateMoby_298; 00343330 mobyupdate_unsorted::UpdateMoby_328; 004556e0 mobyupdate_unsorted::UpdateMoby_774; 0045b190 mobyupdate_unsorted::UpdateMoby_786; 0045d0f8 mobyupdate_unsorted::UpdateMoby_788; 0048d9d8 mobyupdate_unsorted::UpdateMoby_851; 004a2d38 mobyupdate_unsorted::UpdateMoby_890; 004a4bd0 mobyupdate_unsorted::UpdateMoby_90; 004a8ec0 mobyupdate_unsorted::UpdateMoby_909; 004af4b0 mobyupdate_unsorted::UpdateMoby_914; 004b0698 mobyupdate_unsorted::UpdateMoby_918; 004b1a88 mobyupdate_unsorted::UpdateMoby_919; 004b8b48 mobyupdate_unsorted::UpdateMoby_925
// callees(1): 00502578 fastfunc::FastWrapRot

void mobyutil::MB_SetPointAheadOfMoby(double param_1,int param_2)

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
  double dVar10;
  
  fVar1 = *(float *)(param_2 + 0x48);
  fVar2 = fVar1 + 1.5707963;
  fVar3 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar3 = fVar1;
  }
  fVar5 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar5 = fVar2;
  }
  fVar4 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
    fVar4 = fVar3;
  }
  fVar3 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
    fVar3 = fVar5;
  }
  fVar2 = fVar4 * fVar4;
  fVar5 = fVar3 * fVar3;
  fVar8 = fVar2 * fVar2 * fVar4;
  fVar6 = fVar5 * fVar5 * fVar3;
  fVar9 = fVar2 * fVar8;
  DAT_0095cd68 = *(undefined4 *)(param_2 + 0x18);
  DAT_0095cd6c = *(undefined4 *)(param_2 + 0x1c);
  fVar7 = fVar5 * fVar6;
  DAT_0095cd7c = 0;
  DAT_0095cd78 = 0.0;
  DAT_0095cd74 = 0;
  DAT_0095cd70 = 0;
  DAT_0095cd64 = (float)((double)(fVar2 * fVar9 * 2.601887e-06 +
                                 fVar9 * -0.0001980741 +
                                 fVar8 * 0.0083330255 + fVar2 * fVar4 * -0.16666657 + fVar4) *
                         param_1 + (double)*(float *)(param_2 + 0x14));
  DAT_0095cd60 = (float)((double)(fVar5 * fVar7 * 2.601887e-06 +
                                 fVar7 * -0.0001980741 +
                                 fVar6 * 0.0083330255 + fVar5 * fVar3 * -0.16666657 + fVar3) *
                         param_1 + (double)*(float *)(param_2 + 0x10));
  DAT_0095cd9a = 1;
  dVar10 = (double)fastfunc::FastWrapRot(fVar1,3.1415927);
  DAT_0095cd78 = (float)dVar10;
  return;
}



//==== 00119600  ns=mobyutil  size=0x418
// sig: undefined MB_SpawnSparks_oClass2EE(void)
// callers(14): 002973c8 mobyupdate_unsorted::UpdateMoby_1545; 00297798 mobyupdate_unsorted::UpdateMoby_1546; 00298178 mobyupdate_unsorted::UpdateMoby_1548; 00298448 mobyupdate_unsorted::UpdateMoby_1549; 002984f4 mobyupdate_unsorted::UpdateMoby_1550; 002985a0 mobyupdate_unsorted::UpdateMoby_1551; 00298678 mobyupdate_unsorted::UpdateMoby_1552; 002989a0 mobyupdate_unsorted::UpdateMoby_1553; 00298aac mobyupdate_unsorted::UpdateMoby_1555; 00298b84 mobyupdate_unsorted::UpdateMoby_1557; 00298c3c mobyupdate_unsorted::UpdateMoby_1558; 00298cec mobyupdate_unsorted::UpdateMoby_1559; 00299ff0 mobyupdate_unsorted::UpdateMoby_1560; 0029a1c4 mobyupdate_unsorted::UpdateMoby_1562
// callees(3): 000f1038 mobyfunc::GetBoneTransformations; 00126f50 partupd::SpawnPart_23; 005c8318 rand

void mobyutil::MB_SpawnSparks_oClass2EE(int param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 local_c0 [16];
  float local_b0;
  float local_ac;
  float local_a8;
  
  if ((*(short *)(param_1 + 0xa6) == 0x2ee) && (param_1 != 0)) {
    mobyfunc::GetBoneTransformations(param_1,0,&local_b0);
    dVar11 = 1.0;
    dVar12 = 0.009999999776482582;
    iVar6 = 0;
    iVar7 = 0;
    dVar13 = (double)(SQRT(local_a8 * local_a8 + local_b0 * local_b0 + local_ac * local_ac) *
                     0.97465885);
    if (1.0 - dVar13 < 0.0) {
      dVar13 = dVar11;
    }
    dVar8 = (double)(float)(dVar13 * 44000.0 + 6000.0);
    dVar9 = (double)(float)(dVar13 * 0.019999999552965164 + 0.009999999776482582);
    uVar10 = 0x3fe8000000000000;
    auVar16 = loadVectorLeftIndexed(0x24,0x1195c0);
    auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
    do {
      rand();
      rand();
      uVar4 = partupd::SpawnPart_23(dVar9,dVar11,uVar10,dVar8,local_c0);
      iVar5 = (int)uVar4;
      if (iVar5 != 0) {
        auVar14 = ZEXT416(0xffffffff);
        auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
        auVar14 = vectorShiftLeftIntegerWord(auVar14,auVar14);
        auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar14 = vectorMultiplyAddFloatingPoint(auVar15,auVar16,auVar14);
        auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
        auVar15 = vectorSplatHalfWord(auVar14,1);
        auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xff;
        uVar2 = storeVectorElementHalfWordIndexed(auVar15,10,uVar4);
        *(undefined2 *)(iVar5 + 10) = uVar2;
        *(undefined4 *)(iVar5 + 0x24) = 2;
        *(undefined1 *)(iVar5 + 0x2a) = 0x50;
        uVar1 = storeVectorElementByteIndexed
                          (auVar14 | auVar14 << 8 | auVar14 << 0x10 | auVar14 << 0x18 |
                           auVar14 << 0x20 | auVar14 << 0x28 | auVar14 << 0x30 | auVar14 << 0x38 |
                           auVar14 << 0x40 | auVar14 << 0x48 | auVar14 << 0x50 | auVar14 << 0x58 |
                           auVar14 << 0x60 | auVar14 << 0x68 | auVar14 << 0x70 | auVar14 << 0x78,
                           0x2b,uVar4);
        *(undefined1 *)(iVar5 + 0x2b) = uVar1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 2);
    dVar8 = (double)(float)(dVar13 * 25000.0 + 5000.0);
    dVar13 = (double)(float)(dVar13 * 0.015000000596046448 + dVar12);
    auVar16 = loadVectorLeftIndexed(0x3c,0x1195c0);
    auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
    do {
      uVar10 = partupd::SpawnPart_23(dVar13,dVar11,dVar11,dVar8,local_c0);
      iVar6 = (int)uVar10;
      if (iVar6 != 0) {
        auVar14 = ZEXT416(0xffffffff);
        auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
        auVar14 = vectorShiftLeftIntegerWord(auVar14,auVar14);
        auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar14 = vectorMultiplyAddFloatingPoint(auVar15,auVar16,auVar14);
        auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
        auVar14 = vectorSplatHalfWord(auVar14,1);
        uVar2 = storeVectorElementHalfWordIndexed(auVar14,10,uVar10);
        *(undefined2 *)(iVar6 + 10) = uVar2;
        iVar5 = rand();
        uVar3 = iVar5 >> 0xf & 0x7fff;
        *(undefined4 *)(iVar6 + 0x24) = 2;
        *(undefined1 *)(iVar6 + 0x2a) = 0x7f;
        *(char *)(iVar6 + 0x2b) = (char)*(undefined2 *)(iVar6 + 10);
        *(char *)(iVar6 + 8) = (char)uVar3 + (char)((uVar3 + 1) * 0x101 >> 0x10);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 5);
  }
  return;
}



//==== 00119a18  ns=mobyfunc  size=0xa4
// sig: undefined DoManipulator(undefined8 param_1, MobyInstance * pMoby, undefined8 param_3, Manipulator * manipulator)
// callers(41): 0001cb80 mobyupdate_unsorted::UpdateMoby_326; 0018b2f8 mobyupdate_unsorted::UpdateMoby_1023; 001a02d8 mobyupdate_unsorted::UpdateMoby_1048; 001a5f50 mobyupdate_unsorted::UpdateMoby_1051; 001aa078 mobyupdate_unsorted::UpdateMoby_1059; 001b07a8 mobyupdate_unsorted::UpdateMoby_1068; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 001f3688 mobyupdate_unsorted::UpdateMoby_1196; 001f7980 mobyupdate_unsorted::UpdateMoby_1199; 001fcd60 mobyupdate_unsorted::UpdateMoby_1202; 00211748 mobyupdate_unsorted::UpdateMoby_1229; 00214a98 mobyupdate_unsorted::UpdateMoby_1231; 00225b48 mobyupdate_unsorted::UpdateMoby_1246; 0022e580 mobyupdate_unsorted::UpdateMoby_1262; 002766e0 mobyupdate_unsorted::UpdateMoby_1422; 002806b0 mobyupdate_unsorted::UpdateMoby_1445; 002dc568 mobyupdate_unsorted::UpdateMoby_193; 002f20a0 mobyupdate_unsorted::UpdateMoby_217; 00317338 mobyupdate_unsorted::UpdateMoby_252; 00321a20 mobyupdate_unsorted::UpdateMoby_270; 00327f50 mobyupdate_unsorted::UpdateMoby_28; 0032e9e0 mobyupdate_unsorted::UpdateMoby_29; 00346610 mobyupdate_unsorted::UpdateMoby_333; 0034b2e8 mobyupdate_unsorted::UpdateMoby_340; 00387588 mobyupdate_unsorted::UpdateMoby_452
// callees(2): 000f0ea8 mobyfunc::AttachManipulator; 000f0f1c mobyfunc::DetachManipulator
// strings: 0096c074: 'None'

void mobyfunc::DoManipulator
               (double param_1,MobyInstance *pMoby,undefined8 param_3,Manipulator *manipulator)

{
  if (Cheats[7] == '\0') {
    if (manipulator->state != '\0') {
      DetachManipulator(pMoby,manipulator);
    }
  }
  else {
    if (manipulator->state == '\0') {
      AttachManipulator(pMoby,param_3._4_4_,manipulator);
    }
    (manipulator->scale).x = (float)param_1;
    (manipulator->scale).y = (float)param_1;
    (manipulator->scale).z = (float)param_1;
  }
  return;
}



//==== 00119ac0  ns=mobyutil  size=0x28
// sig: undefined MB_SetScaleCheat(void)
// callers(11): 0027d4c8 mobyupdate_unsorted::UpdateMoby_1440; 00307270 mobyupdate_unsorted::UpdateMoby_238; 0036e680 mobyupdate_unsorted::UpdateMoby_427; 0037dc48 mobyupdate_unsorted::UpdateMoby_44; 003b4740 mobyupdate_unsorted::UpdateMoby_556; 003c3730 mobyupdate_unsorted::UpdateMoby_574; 003e5228 mobyupdate_unsorted::UpdateMoby_623; 003f0610 mobyupdate_unsorted::UpdateMoby_631; 003f7c78 mobyupdate_unsorted::UpdateMoby_{635_1382}; 003fc1c0 mobyupdate_unsorted::UpdateMoby_638; 00433450 mobyupdate_unsorted::UpdateMoby_717
// callees(0): 
// strings: 0096c074: 'None'

/* [p2_mobyutil] moby->scale = arg if Cheats[7] else 1.0 */

void mobyutil::MB_SetScaleCheat(double param_1,int param_2)

{
  if (Cheats[7] == '\0') {
    param_1 = 1.0;
  }
  *(float *)(param_2 + 0x70) = (float)param_1;
  return;
}



//==== 00119ae8  ns=mobyutil  size=0x24
// sig: undefined MB_InitDebrisList(void)
// callers(2): 003ad150 mobyupdate_unsorted::UpdateMoby_541; 003db608 mobyupdate_unsorted::UpdateMoby_612
// callees(0): 

void mobyutil::MB_InitDebrisList(undefined4 *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  lVar2 = 7;
  puVar1 = param_1;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(undefined2 *)(param_1 + 7) = 0;
  return;
}



//==== 00119b38  ns=mobyutil  size=0x4d8
// sig: undefined MB_UpdateDebris(void)
// callers(2): 003ad150 mobyupdate_unsorted::UpdateMoby_541; 003db608 mobyupdate_unsorted::UpdateMoby_612
// callees(8): 00057820 collproc::CollLine; 000fea60 mobyutil::MB_randSphere; 00109c30 mobyutil::OrganicDelt; 00123ec8 partupd::SpawnPart_12; 00127918 partupd::SpawnPart_25; 004fffb4 fastfunc::FastDecTimerS16; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand

void mobyutil::MB_UpdateDebris(double param_1,int *param_2,float *param_3)

{
  bool bVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  float local_a0;
  float local_9c;
  longlong local_98;
  
  uVar6 = worldUpdateTime;
  dVar14 = 0.0;
  local_a0 = 0.0;
  local_9c = 0.0;
  fVar3 = *param_3;
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  dVar15 = 0.75;
  bVar1 = (int)worldUpdateTime < 0;
  uVar2 = worldUpdateTime & 3;
  iVar9 = (int)worldUpdateTime >> 2;
  iVar7 = collproc::CollLine(local_100,local_f0,2,0,0);
  dVar16 = param_1;
  if ((iVar7 != 0) &&
     (dVar16 = (double)(float)((double)SQRT((fVar5 - CollOutput.ip.z) * (fVar5 - CollOutput.ip.z) +
                                            (fVar3 - CollOutput.ip.x) * (fVar3 - CollOutput.ip.x) +
                                            (fVar4 - CollOutput.ip.y) * (fVar4 - CollOutput.ip.y)) -
                              dVar15), dVar16 < dVar14)) {
    dVar16 = dVar14;
  }
  dVar15 = 1.0;
  OrganicDelt((float)dVar16,1.0,DAT_0071f418 * 48.0,DAT_007294f4 * g_FrameTime,&local_9c,0x720000,
              &local_a0);
  iVar7 = DAT_007294f8;
  if (dVar16 < 4.0) {
    iVar7 = 1;
  }
  iVar7 = DAT_007294fc + iVar7;
  iVar13 = 0;
  if (0 < iVar7) {
    dVar15 = (double)(float)(dVar16 * (double)(float)(dVar15 / param_1));
    do {
      MB_randSphere(dVar14,(double)(g_FrameTime *
                                   (float)((double)(float)((double)DAT_00729500 -
                                                          (double)DAT_00729504) * dVar15 +
                                          (double)DAT_00729504)),local_d0);
      iVar8 = rand();
      local_98 = (longlong)(int)(iVar8 >> 0xf & 0x7fff);
      iVar8 = partupd::SpawnPart_12(dVar16,local_e0,local_d0);
      if ((iVar13 == 2) && (uVar6 == (iVar9 + (uint)(bVar1 && uVar2 != 0)) * 4)) {
        iVar11 = 0;
        piVar12 = param_2;
        do {
          if (*piVar12 == 0) {
            param_2[iVar11] = iVar8;
            break;
          }
          iVar11 = iVar11 + 1;
          piVar12 = piVar12 + 1;
        } while (iVar11 < 7);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar7);
  }
  iVar9 = fastfunc::FastDecTimerS16(param_2 + 7);
  if (iVar9 != 0) {
    iVar9 = rand();
    local_98 = (longlong)(int)(iVar9 >> 0xf & 0x7fff);
    uVar10 = fastfunc::FastDoubleToInt
                       ((double)(animationSpeed * ((float)local_98 * 20.0 * 3.0517578e-05 + 10.0)));
    *(undefined2 *)(param_2 + 7) = uVar10;
    MB_randSphere(dVar14,(double)(g_FrameTime * 2.0),local_b0);
    iVar9 = rand();
    local_98 = (longlong)(int)(iVar9 >> 0xf & 0x7fff);
    partupd::SpawnPart_25(param_3,local_c0,0);
  }
  return;
}



//==== 0011a018  ns=mobyutil  size=0xe4
// sig: undefined MB_DebrisCollide(void)
// callers(2): 003ad150 mobyupdate_unsorted::UpdateMoby_541; 003db608 mobyupdate_unsorted::UpdateMoby_612
// callees(1): 0005e598 collproc::CollMobySphere

void mobyutil::MB_DebrisCollide(undefined4 *param_1)

{
  char *pcVar1;
  int iVar2;
  double dVar3;
  
  iVar2 = 0;
  dVar3 = 1.1904761549885734e-06;
  do {
    pcVar1 = (char *)*param_1;
    if (pcVar1 != (char *)0x0) {
      if ((*pcVar1 == '\f') && ((byte)pcVar1[1] < 0x80)) {
        collproc::CollMobySphere
                  ((double)(float)((double)*(float *)(pcVar1 + 0xc) * dVar3),pcVar1 + 0x10);
        if (*(short *)(pcVar1 + 10) < 5) {
          *param_1 = 0;
        }
      }
      else {
        *param_1 = 0;
      }
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 1;
  } while (iVar2 < 7);
  return;
}



//==== 0011a100  ns=mobyutil  size=0x7c
// sig: undefined MB_DistributeBoltsNearHero(void)
// callers(24): 0028eba8 mobyupdate_unsorted::UpdateMoby_1511; 002a7e28 mobyupdate_unsorted::UpdateMoby_1650; 002a8048 mobyupdate_unsorted::UpdateMoby_1655; 002a84f8 mobyupdate_unsorted::UpdateMoby_1660; 002a86e0 mobyupdate_unsorted::UpdateMoby_{1663_1677}; 002a88f8 mobyupdate_unsorted::UpdateMoby_1664; 002ace00 mobyupdate_unsorted::UpdateMoby_1686; 002bb840 mobyupdate_unsorted::UpdateMoby_1805; 002bc750 mobyupdate_unsorted::UpdateMoby_1813; 002c0b48 mobyupdate_unsorted::UpdateMoby_1819; 002c19c0 mobyupdate_unsorted::UpdateMoby_1827; 002c1abc mobyupdate_unsorted::UpdateMoby_1834; 002c4c18 mobyupdate_unsorted::UpdateMoby_1844; 002c5230 mobyupdate_unsorted::UpdateMoby_1849; 002c9594 mobyupdate_unsorted::UpdateMoby_1855; 002c967c mobyupdate_unsorted::UpdateMoby_1856; 002c9754 mobyupdate_unsorted::UpdateMoby_1859; 002cd974 mobyupdate_unsorted::UpdateMoby_1862; 002cda70 mobyupdate_unsorted::UpdateMoby_1873; 002cdbb0 mobyupdate_unsorted::UpdateMoby_1876; 002f8c70 mobyupdate_unsorted::UpdateMoby_221; 0044d9d0 mobyupdate_unsorted::UpdateMoby_754; 00465860 mobyupdate_unsorted::UpdateMoby_800; 0046f5b0 mobyupdate_unsorted::UpdateMoby_817
// callees(1): 000fcd60 mobyutil::MB_DistributeBolts

/* [p2_mobyutil] MB_DistributeBolts(m,4,7, hero<7m?2:0,-1) */

void mobyutil::MB_DistributeBoltsNearHero(int param_1)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  
  fVar1 = *(float *)(param_1 + 0x14) - g_heroPosition.y;
  fVar2 = *(float *)(param_1 + 0x10) - g_heroPosition.x;
  uVar3 = 0;
  if (SQRT(fVar2 * fVar2 + fVar1 * fVar1) < 7.0) {
    uVar3 = 2;
  }
  MB_DistributeBolts(param_1,4,7,uVar3,0xffffffffffffffff);
  return;
}



//==== 0011a1a0  ns=mobyutil  size=0x2b4
// sig: undefined MB_SpawnSparksPair(void)
// callers(8): 002766e0 mobyupdate_unsorted::UpdateMoby_1422; 002973c8 mobyupdate_unsorted::UpdateMoby_1545; 00297798 mobyupdate_unsorted::UpdateMoby_1546; 0029a5a8 mobyupdate_unsorted::UpdateMoby_1563; 002b94b0 mobyupdate_unsorted::UpdateMoby_1789; 002b9b00 mobyupdate_unsorted::UpdateMoby_1799; 002bc1f8 mobyupdate_unsorted::UpdateMoby_1811; 002bc4b8 mobyupdate_unsorted::UpdateMoby_1812
// callees(3): 00126f50 partupd::SpawnPart_23; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand

void mobyutil::MB_SpawnSparksPair
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined2 uVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar5;
  int iVar4;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  iVar6 = 0;
  iVar7 = 0;
  uVar8 = 0x3fb99999a0000000;
  uVar10 = 0x3ff0000000000000;
  uVar9 = 0x3fecccccc0000000;
  auVar14 = loadVectorLeftIndexed(0xc,0x11a17c);
  uVar11 = 0x4010000000000000;
  auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
  do {
    rand();
    rand();
    uVar3 = partupd::SpawnPart_23(uVar8,uVar10,uVar9,param_1,param_3);
    iVar4 = (int)uVar3;
    if (iVar4 != 0) {
      auVar12 = ZEXT416(0xffffffff);
      auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
      auVar12 = vectorShiftLeftIntegerWord(auVar12,auVar12);
      auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar12 = vectorMultiplyAddFloatingPoint(auVar13,auVar14,auVar12);
      auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar12,0);
      auVar12 = vectorSplatHalfWord(auVar12,1);
      uVar1 = storeVectorElementHalfWordIndexed(auVar12,10,uVar3);
      *(undefined2 *)(iVar4 + 10) = uVar1;
      cVar5 = fastfunc::FastDoubleToInt(uVar11);
      *(char *)(iVar4 + 9) = cVar5 + '@';
      *(undefined4 *)(iVar4 + 0x24) = 2;
      *(undefined1 *)(iVar4 + 0x2a) = 0x7f;
      *(char *)(iVar4 + 0x2b) = (char)*(undefined2 *)(iVar4 + 10);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 2);
  uVar8 = 0x3fa99999a0000000;
  uVar9 = 0x3fef0a3d80000000;
  auVar14 = loadVectorLeftIndexed(0x1c,0x11a17c);
  auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
  do {
    uVar3 = partupd::SpawnPart_23(uVar8,uVar10,uVar9,param_2,param_4);
    iVar6 = (int)uVar3;
    if (iVar6 != 0) {
      cVar5 = fastfunc::FastDoubleToInt(uVar11);
      auVar12 = ZEXT416(0xffffffff);
      auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
      auVar12 = vectorShiftLeftIntegerWord(auVar12,auVar12);
      *(char *)(iVar6 + 9) = cVar5 + '@';
      auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar12 = vectorMultiplyAddFloatingPoint(auVar13,auVar14,auVar12);
      auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar12,0);
      auVar12 = vectorSplatHalfWord(auVar12,1);
      uVar1 = storeVectorElementHalfWordIndexed(auVar12,10,uVar3);
      *(undefined2 *)(iVar6 + 10) = uVar1;
      iVar4 = rand();
      uVar2 = iVar4 >> 0xf & 0x7fff;
      *(undefined4 *)(iVar6 + 0x24) = 2;
      *(undefined1 *)(iVar6 + 0x2a) = 0x7f;
      *(char *)(iVar6 + 0x2b) = (char)*(undefined2 *)(iVar6 + 10);
      *(char *)(iVar6 + 8) = (char)uVar2 + (char)((uVar2 + 1) * 0x101 >> 0x10);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 3);
  return;
}



//==== 0011a458  ns=mobyutil  size=0xc0
// sig: void MB_ToastMessageFmt(StringId msg, int arg, int time)
// callers(2): 002ea970 mobyupdate_unsorted::UpdateMoby_a_lot_5; 002eb450 mobyupdate_helpers::M1449_CollectAmmo
// callees(2): 0007b740 help::help_msg_string_by_index; 005cd2a8 libc::snprintf

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void mobyutil::MB_ToastMessageFmt(StringId msg,int arg,int time)

{
  char *__format;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar1 = auRam00000000;
  if (time == -1) {
    auVar1 = ZEXT416(0xffffffff);
    auVar1 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
    auVar2 = vectorShiftLeftIntegerWord(auVar1,auVar1);
    auVar1 = loadVectorLeftIndexed(0x70,0x11a454);
    auVar3 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar1 = vectorMultiplyAddFloatingPoint
                       (auVar3,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar2);
    auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar1,0);
  }
  __format = (char *)help::help_msg_string_by_index(msg);
  libc::snprintf(&g_toastMsgBuff,__format,arg);
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  g_toastMsgTimer =
       storeVectorElementWordIndexed
                 (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,0x5c80,0xa10000);
  return;
}



//==== 0011a560  ns=mobyutil  size=0x508
// sig: undefined MB_SpawnDebrisMoby(void)
// callers(48): 0011aa78 mobyutil::MB_SpawnDebris; 0018b2f8 mobyupdate_unsorted::UpdateMoby_1023; 00195e08 mobyupdate_unsorted::UpdateMoby_1041; 001b07a8 mobyupdate_unsorted::UpdateMoby_1068; 001fcd60 mobyupdate_unsorted::UpdateMoby_1202; 00205098 mobyupdate_unsorted::UpdateMoby_1212; 00206160 mobyupdate_unsorted::UpdateMoby_{1213_1973}; 00211748 mobyupdate_unsorted::UpdateMoby_1229; 00230bb8 mobyupdate_helpers::M1264_00230bb8; 00232b90 mobyupdate_helpers::M1266_00232b90; 00258c50 mobyupdate_unsorted::UpdateMoby_1356; 0027d4c8 mobyupdate_unsorted::UpdateMoby_1440; 002839d8 mobyupdate_helpers::M1454_002839d8; 0028cba8 mobyupdate_unsorted::UpdateMoby_1488; 0028eba8 mobyupdate_unsorted::UpdateMoby_1511; 002a7e28 mobyupdate_unsorted::UpdateMoby_1650; 002a8048 mobyupdate_unsorted::UpdateMoby_1655; 002a84f8 mobyupdate_unsorted::UpdateMoby_1660; 002a86e0 mobyupdate_unsorted::UpdateMoby_{1663_1677}; 002a88f8 mobyupdate_unsorted::UpdateMoby_1664; 002ace00 mobyupdate_unsorted::UpdateMoby_1686; 002bb840 mobyupdate_unsorted::UpdateMoby_1805; 002bc750 mobyupdate_unsorted::UpdateMoby_1813; 002cdbb0 mobyupdate_unsorted::UpdateMoby_1876; 002ce590 mobyupdate_unsorted::UpdateMoby_1885
// callees(6): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fea60 mobyutil::MB_randSphere; 00500b64 fastfunc::FastEulerToMtx; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand

longlong mobyutil::MB_SpawnDebrisMoby
                   (double param_1,int param_2,MOBY_OCLASSES param_3,f32 *param_4,undefined8 param_5
                   ,float param_6,float param_7,undefined8 param_8,float *param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  MobyClass *pMVar5;
  float fVar6;
  float fVar7;
  MobyInstance *pMVar8;
  int iVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float *in_stack_00000074;
  float *in_stack_0000007c;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  
  pMVar8 = mobyfunc::CreateMoby(param_3);
  if (pMVar8 != (MobyInstance *)0x0) {
    fVar1 = *(float *)(param_2 + 0x2c);
    fVar2 = *(float *)(*(int *)(param_2 + 0x24) + 0x24);
    uVar10 = *(undefined8 *)(param_2 + 0x38);
    fVar3 = pMVar8->pClass->gScale;
    pMVar8->enabled = '\x01';
    pMVar8->modeBits = pMVar8->modeBits | LOCK_ROTATION;
    pMVar8->color = (int)((ulonglong)uVar10 >> 0x20);
    pMVar8->light = (int)uVar10;
    pMVar8->state = '\x01';
    pfVar4 = (float *)pMVar8->pVar;
    pMVar8->scale = fVar3 * (fVar1 / fVar2);
    (pMVar8->pos).x = *param_4;
    (pMVar8->pos).y = param_4[1];
    (pMVar8->pos).z = param_4[2];
    (pMVar8->pos).w = param_4[3];
    fastfunc::FastEulerToMtx((longlong)(int)pMVar8 + 0xc0,param_5);
    pMVar8->updateDistance = -1;
    pMVar8->drawDistance = 0x80;
    pMVar8->collision = (ushort *)0x0;
    if (param_6 == 0.0) {
      iVar9 = rand();
      param_6 = (float)fastfunc::FastDoubleToInt
                                 ((double)(animationSpeed *
                                          ((float)(longlong)(int)(iVar9 >> 0xf & 0x7fff) * 60.0 *
                                           3.0517578e-05 + 60.0)));
    }
    pfVar4[0xc] = param_6;
    pfVar4[0xd] = param_7;
    dVar16 = 0.0;
    if (pfVar4[0xe] == 0.0) {
      iVar9 = rand();
      param_1 = (double)(((float)(longlong)(int)(iVar9 >> 0xf & 0x7fff) * 5.0 * 3.0517578e-05 + 10.0
                         ) * DAT_0071f418);
    }
    pfVar4[0xe] = (float)param_1;
    fVar1 = *param_9;
    if ((double)SQRT(param_9[2] * param_9[2] + fVar1 * fVar1 + param_9[1] * param_9[1]) == dVar16) {
      iVar9 = rand();
      dVar14 = (double)((float)(longlong)(int)((iVar9 >> 0xf & 0xfffU) - 0x800) * 3.1415927 *
                       0.00048828125);
      iVar9 = rand();
      fVar1 = (float)(dVar14 + 1.570796251296997);
      dVar12 = (double)(float)(3.141592502593994 - dVar14);
      if (dVar14 - (double)(float)(3.141592502593994 - dVar14) < 0.0) {
        dVar12 = dVar14;
      }
      fVar2 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar2 = fVar1;
      }
      dVar15 = 3.0517578125e-05;
      dVar11 = (double)(float)(-3.141592502593994 - dVar14);
      if ((double)(float)(-3.141592502593994 - dVar14) - dVar12 < 0.0) {
        dVar11 = dVar12;
      }
      fVar3 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
        fVar3 = fVar2;
      }
      dVar12 = (double)(float)(dVar11 * dVar11);
      fVar7 = fVar3 * fVar3;
      fVar1 = ((float)((double)(longlong)(int)(iVar9 >> 0xf & 0x7fff) * 2.0) * 3.0517578e-05 + 2.0)
              * g_FrameTime;
      dVar13 = (double)(float)(dVar12 * (double)(float)(dVar12 * dVar11));
      fVar2 = fVar7 * fVar7 * fVar3;
      dVar14 = (double)(float)(dVar12 * dVar13);
      fVar6 = fVar7 * fVar2;
      dVar14 = (double)(((float)(dVar12 * dVar14) * 2.601887e-06 +
                        (float)(dVar14 * -0.0001980741071747616 +
                               (double)(float)(dVar13 * 0.008333025500178337 +
                                              (double)(float)((double)(float)(dVar12 * dVar11) *
                                                              -0.16666656732559204 + dVar11)))) *
                       fVar1);
      dVar12 = (double)((fVar7 * fVar6 * 2.601887e-06 +
                        fVar6 * -0.0001980741 +
                        fVar2 * 0.0083330255 + fVar7 * fVar3 * -0.16666657 + fVar3) * fVar1);
      iVar9 = rand();
      fVar1 = g_FrameTime;
      *pfVar4 = (float)dVar12;
      pfVar4[1] = (float)dVar14;
      fVar1 = (float)((double)((float)(longlong)(int)(iVar9 >> 0xf & 0x7fff) * 3.0) * dVar15 + 5.0)
              * fVar1;
      pfVar4[2] = fVar1;
    }
    else {
      *pfVar4 = fVar1;
      pfVar4[1] = param_9[1];
      pfVar4[2] = param_9[2];
      fVar1 = param_9[3];
    }
    pfVar4[3] = fVar1;
    fVar1 = *in_stack_00000074;
    if ((double)SQRT(in_stack_00000074[2] * in_stack_00000074[2] +
                     fVar1 * fVar1 + in_stack_00000074[1] * in_stack_00000074[1]) == dVar16) {
      MB_randSphere((double)(g_FrameTime * 3.1415927),(double)(g_FrameTime * 6.2831855),&local_90);
      pfVar4[4] = local_90;
      pfVar4[5] = local_8c;
      pfVar4[6] = local_88;
    }
    else {
      pfVar4[4] = fVar1;
      pfVar4[5] = in_stack_00000074[1];
      pfVar4[6] = in_stack_00000074[2];
      local_84 = in_stack_00000074[3];
    }
    pfVar4[7] = local_84;
    fVar1 = *in_stack_0000007c;
    if (((double)SQRT(in_stack_0000007c[2] * in_stack_0000007c[2] +
                      fVar1 * fVar1 + in_stack_0000007c[1] * in_stack_0000007c[1]) == dVar16) &&
       (in_stack_0000007c[3] == 0.0)) {
      pMVar5 = pMVar8->pClass;
      fVar6 = pMVar8->scale * 0.0009765625;
      fVar2 = *(float *)&pMVar5->field27_0x34;
      fVar3 = *(float *)&pMVar5->field31_0x38;
      fVar1 = *(float *)&pMVar5->field35_0x3c * fVar6;
      pfVar4[8] = *(float *)&pMVar5->field23_0x30 * fVar6;
      pfVar4[9] = fVar2 * fVar6;
      pfVar4[10] = fVar3 * fVar6;
    }
    else {
      pfVar4[8] = fVar1;
      pfVar4[9] = in_stack_0000007c[1];
      pfVar4[10] = in_stack_0000007c[2];
      fVar1 = in_stack_0000007c[3];
    }
    pfVar4[0xb] = fVar1;
    mobyfunc::UpdateMobyTransform(pMVar8);
  }
  return (longlong)(int)pMVar8;
}



//==== 0011aa78  ns=mobyutil  size=0x2d0
// sig: undefined MB_SpawnDebris(void)
// callers(18): 001a02d8 mobyupdate_unsorted::UpdateMoby_1048; 001a5f50 mobyupdate_unsorted::UpdateMoby_1051; 0027d4c8 mobyupdate_unsorted::UpdateMoby_1440; 002c0b48 mobyupdate_unsorted::UpdateMoby_1819; 002c19c0 mobyupdate_unsorted::UpdateMoby_1827; 002c1abc mobyupdate_unsorted::UpdateMoby_1834; 002c4c18 mobyupdate_unsorted::UpdateMoby_1844; 002c5230 mobyupdate_unsorted::UpdateMoby_1849; 002c9594 mobyupdate_unsorted::UpdateMoby_1855; 002c9754 mobyupdate_unsorted::UpdateMoby_1859; 002cd974 mobyupdate_unsorted::UpdateMoby_1862; 002cda70 mobyupdate_unsorted::UpdateMoby_1873; 002cdbb0 mobyupdate_unsorted::UpdateMoby_1876; 003a14a8 mobyupdate_unsorted::UpdateMoby_491; 003b4740 mobyupdate_unsorted::UpdateMoby_556; 003c0a18 mobyupdate_unsorted::UpdateMoby_573; 003f7c78 mobyupdate_unsorted::UpdateMoby_{635_1382}; 00465860 mobyupdate_unsorted::UpdateMoby_800
// callees(3): 00108240 mobyutil::MB_randPrimPoints; 0011a560 mobyutil::MB_SpawnDebrisMoby; 005c8318 rand

void mobyutil::MB_SpawnDebris
               (longlong param_1,longlong param_2,int param_3,int param_4,int param_5,
               undefined8 param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 local_1a0 [16];
  undefined1 auStack_190 [272];
  
  iVar2 = (int)param_2;
  lVar6 = ((LZCOUNT(-param_7) << 0x3a) >> 0x3f & 0xfffffffffffffffeU) + 2;
  if (0 < iVar2) {
    if ((0 < param_3) && (iVar4 = 0, 0 < param_3)) {
      uVar7 = 0;
      do {
        MB_SpawnDebrisMoby(uVar7,param_1,param_2,param_1 + 0x10,param_1 + 0x40,0,lVar6);
        iVar4 = iVar4 + 1;
        param_2 = param_2 + 1;
      } while (iVar4 < param_3);
    }
    if (((0 < iVar2) && (0 < param_5)) &&
       (iVar2 = MB_randPrimPoints(0x408f400000000000,param_1,&DAT_0011aa68,param_6,auStack_190,
                                  0xffff), iVar2 != 0)) {
      iVar4 = 0;
      puVar5 = auStack_190;
      uVar7 = 0;
      if (0 < (int)param_6) {
        do {
          if (iVar2 <= iVar4) {
            return;
          }
          rand();
          rand();
          rand();
          iVar3 = rand();
          uVar1 = iVar3 >> 0xf & 0x7fff;
          MB_SpawnDebrisMoby(uVar7,param_1,param_4 + (uVar1 - ((int)uVar1 / param_5) * param_5),
                             puVar5,local_1a0,0,lVar6);
          iVar4 = iVar4 + 1;
          puVar5 = puVar5 + 0x10;
        } while (iVar4 < (int)param_6);
      }
    }
  }
  return;
}



//==== 0011ad48  ns=mobyutil  size=0xcc
// sig: undefined MB_SpawnReplacementMoby(void)
// callers(12): 002bc750 mobyupdate_unsorted::UpdateMoby_1813; 002c0b48 mobyupdate_unsorted::UpdateMoby_1819; 002c19c0 mobyupdate_unsorted::UpdateMoby_1827; 002c1abc mobyupdate_unsorted::UpdateMoby_1834; 002c4c18 mobyupdate_unsorted::UpdateMoby_1844; 002c5230 mobyupdate_unsorted::UpdateMoby_1849; 002c967c mobyupdate_unsorted::UpdateMoby_1856; 002c9754 mobyupdate_unsorted::UpdateMoby_1859; 002cd974 mobyupdate_unsorted::UpdateMoby_1862; 002cda70 mobyupdate_unsorted::UpdateMoby_1873; 002cdbb0 mobyupdate_unsorted::UpdateMoby_1876; 0044d9d0 mobyupdate_unsorted::UpdateMoby_754
// callees(2): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform

void mobyutil::MB_SpawnReplacementMoby(int param_1,MOBY_OCLASSES param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  f32 fVar4;
  f32 fVar5;
  int iVar6;
  MobyInstance *pMVar7;
  undefined8 uVar8;
  
  pMVar7 = mobyfunc::CreateMoby(param_2);
  if (pMVar7 != (MobyInstance *)0x0) {
    iVar6 = *(int *)(param_1 + 0x24);
    pMVar7->drawDistance = 0xff;
    pMVar7->enabled = '\x01';
    fVar1 = *(float *)(param_1 + 0x2c);
    fVar2 = *(float *)(iVar6 + 0x24);
    fVar3 = pMVar7->scale;
    fVar4 = *(f32 *)(param_1 + 0x14);
    (pMVar7->pos).x = *(f32 *)(param_1 + 0x10);
    fVar5 = *(f32 *)(param_1 + 0x18);
    (pMVar7->pos).y = fVar4;
    fVar4 = *(f32 *)(param_1 + 0x1c);
    (pMVar7->pos).z = fVar5;
    fVar5 = *(f32 *)(param_1 + 0x40);
    (pMVar7->pos).w = fVar4;
    fVar4 = *(f32 *)(param_1 + 0x44);
    (pMVar7->rotation).x = fVar5;
    fVar5 = *(f32 *)(param_1 + 0x48);
    (pMVar7->rotation).y = fVar4;
    fVar4 = *(f32 *)(param_1 + 0x4c);
    (pMVar7->rotation).z = fVar5;
    (pMVar7->rotation).w = fVar4;
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    pMVar7->updateDistance = '\0';
    pMVar7->color = (int)((ulonglong)uVar8 >> 0x20);
    pMVar7->light = (int)uVar8;
    pMVar7->modeBits = NONE;
    pMVar7->scale = fVar3 * (fVar1 / fVar2);
    mobyfunc::UpdateMobyTransform(pMVar7);
  }
  return;
}



//==== 0011ae14  ns=mobyutil  size=0xd8
// sig: undefined MB_HandleGameplayHud(void)
// callers(1): 00166fb0 update::UpdateGameplay
// callees(2): 000c8444 hud::RegisterHUDCallback; 000c90a0 hud::Hud_ShowEntryById

int mobyutil::MB_HandleGameplayHud(void)

{
  int iVar1;
  
  if ((DAT_00a15f24 != 0) && (DAT_00a15f24 = DAT_00a15f24 + -1, DAT_00a15f24 == 0)) {
    g_HelpMsgOwner = 0;
  }
  if ((g_HelpMsgOwner == 0) || (DAT_00a51fb8 == 0)) {
    iVar1 = 0xa50000;
    DAT_00a51fb4 = -1;
  }
  else if (DAT_00a51fb4 == -1) {
    iVar1 = hud::RegisterHUDCallback
                      (0xc,0,&PTR_PromptHud_Init_00705750,&PTR_PromptHud_Update_00705758,
                       &PTR_Draw_PromptMsg_00705788,(int *)0x0,0);
    DAT_00a51fb4 = iVar1;
  }
  else {
    iVar1 = hud::Hud_ShowEntryById(DAT_00a51fb4,10);
  }
  return iVar1;
}



//==== 0011aeec  ns=mobyutil  size=0xc0
// sig: undefined MB_ShowPersistentMessage(void)
// callers(24): 0015da58 space::UpdateMoby_Spaceship; 00186c78 mobyupdate_helpers::M1012_00186c78; 001ac298 mobyupdate_unsorted::UpdateMoby_1061; 001bd450 mobyupdate_unsorted::UpdateMoby_11; 001cccb8 mobyupdate_helpers::M1109_001cccb8; 001d4308 mobyupdate_unsorted::UpdateMoby_1118; 001dac9c mobyupdate_helpers::M1135_001dac9c; 00221048 mobyupd::update1242::UpdateMoby_1242_JetFighterPoki; 00235740 mobyupdate_helpers::M1268_00235740; 0024a600 mobyupdate_unsorted::UpdateMoby_1326; 00264238 mobyupd::update1379::UpdateMoby_1379_JetFighterFleet; 0026a978 mobyupdate_unsorted::UpdateMoby_{1399_1451_1899}; 002706c4 mobyupdate_helpers::M1410_002706c4; 002825d4 mobyupdate_helpers::M1448_002825d4; 002e6768 mobyupdate_unsorted::UpdateMoby_20; 002f7690 mobyupdate_unsorted::UpdateMoby_22; 00340884 mobyupdate_helpers::M318_00340884; 00369c60 mobyupdate_helpers::M424_00369c60; 00369d38 mobyupdate_unsorted::UpdateMoby_424; 0041dad8 mobyupdate_unsorted::UpdateMoby_69; 0042e5dc mobyupdate_helpers::M712_0042e5dc; 0046db40 mobyupdate_helpers::M816_0046db40; 0046e420 mobyupdate_unsorted::UpdateMoby_816; 004cfa04 mobyupdate_helpers::M998_004cfa04
// callees(2): 0007b740 help::help_msg_string_by_index; 000ccda0 hud::GetHelpLen

undefined8 mobyutil::MB_ShowPersistentMessage(int param_1,StringId param_2)

{
  undefined8 uVar1;
  
  if (param_1 == g_HelpMsgOwner) {
    if (param_2 != STR_TO_USE_YOUR_BOMB_0x0000) {
      help::help_msg_string_by_index(param_2);
      hud::GetHelpLen();
    }
    uVar1 = 2;
    DAT_00a15f24 = 2;
    DAT_00a51fb8 = param_2;
  }
  else if (g_HelpMsgOwner == 0) {
    if (param_2 != STR_TO_USE_YOUR_BOMB_0x0000) {
      help::help_msg_string_by_index(param_2);
      hud::GetHelpLen();
    }
    uVar1 = 1;
    DAT_00a15f24 = 2;
    g_HelpMsgOwner = param_1;
    DAT_00a51fb8 = param_2;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



//==== 0011afac  ns=mobyutil  size=0x104
// sig: int MB_RequestHelpMessage(MobyInstance * owner, StringId msg)
// callers(6): 0007ba00 help::Help_Update; 00264238 mobyupd::update1379::UpdateMoby_1379_JetFighterFleet; 002ae5d8 FUN_002ae5d8; 002af360 mobyupdate_unsorted::UpdateMoby_172; 003ddfd0 mobyupdate_unsorted::UpdateMoby_615; 0041dad8 mobyupdate_unsorted::UpdateMoby_69
// callees(2): 0007b740 help::help_msg_string_by_index; 000ccda0 hud::GetHelpLen

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mobyutil::MB_RequestHelpMessage(MobyInstance *owner,StringId msg)

{
  int iVar1;
  
  if (owner == g_HelpMsgOwner) {
    if (msg != STR_TO_USE_YOUR_BOMB_0x0000) {
      help::help_msg_string_by_index(msg);
      hud::GetHelpLen();
    }
    iVar1 = 2;
    DAT_00a15f24 = 2;
    DAT_00a51fb8 = msg;
  }
  else if (g_HelpMsgOwner == (MobyInstance *)0x0) {
    if (msg != STR_TO_USE_YOUR_BOMB_0x0000) {
      help::help_msg_string_by_index(msg);
      hud::GetHelpLen();
    }
    iVar1 = 1;
    DAT_00a15f24 = 2;
    g_HelpMsgOwner = owner;
    DAT_00a51fb8 = msg;
  }
  else {
    iVar1 = 0;
  }
  if (iVar1 == 0) {
    if (msg != STR_TO_USE_YOUR_BOMB_0x0000) {
      help::help_msg_string_by_index(msg);
      hud::GetHelpLen();
    }
    iVar1 = 3;
    DAT_00a15f24 = 2;
    g_HelpMsgOwner = owner;
    DAT_00a51fb8 = msg;
  }
  return iVar1;
}



//==== 0011b0b0  ns=mobyutil  size=0x74
// sig: int MB_ClearHelpMessage(MobyInstance * owner)
// callers(5): 0015da58 space::UpdateMoby_Spaceship; 001ccf10 mobyupdate_unsorted::UpdateMoby_1109; 001d4308 mobyupdate_unsorted::UpdateMoby_1118; 00264238 mobyupd::update1379::UpdateMoby_1379_JetFighterFleet; 002826c8 mobyupdate_unsorted::UpdateMoby_1448
// callees(1): 000c8964 hud::Hud_UnregisterById

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mobyutil::MB_ClearHelpMessage(MobyInstance *owner)

{
  int iVar1;
  
  if ((owner == g_HelpMsgOwner) && (DAT_00a51fb4 != -1)) {
    DAT_00a15f24 = 0;
    g_HelpMsgOwner = (MobyInstance *)0x0;
    hud::Hud_UnregisterById(DAT_00a51fb4);
    iVar1 = 1;
    DAT_00a51fb4 = -1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



//==== 0011b124  ns=mobyutil  size=0x90
// sig: int MB_CountGoldWeapons(void)
// callers(5): 000e76cc memcard::memcard_Update; 000e8ca0 memcard::memcard_RestoreSaveGame; 0013abcc pause::BeginMenu; 00146b14 pause::GoldBoltWidget_Update; 0014d63c pause::Draw_GameCompletedFrame
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mobyutil::MB_CountGoldWeapons(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar2 = 0;
  iVar1 = 0;
  do {
    iVar4 = iVar1 + 1;
    lVar3 = (longlong)((int)lVar2 + 1);
    lVar2 = lVar3 + ((LZCOUNT(-(uint)(&g_goldWeaponsArray.field0_0x0)[iVar1]) << 0x3a) >> 0x3f &
                    lVar2 - lVar3);
    iVar1 = iVar4;
  } while (iVar4 < 0x25);
  iVar1 = (int)lVar2;
  iVar1 = iVar1 + (iVar1 >> 0x1f & -iVar1);
  return iVar1 + ((uint)(10 - (longlong)iVar1 >> 0x3f) & 10U - iVar1);
}



//==== 0011b1b4  ns=mobyutil  size=0x110
// sig: int MB_CountGoldBolts(void)
// callers(5): 000e76cc memcard::memcard_Update; 00146b14 pause::GoldBoltWidget_Update; 0014d63c pause::Draw_GameCompletedFrame; 001d9d48 mobyupdate_unsorted::UpdateMoby_1134; 003f3e00 mobyupdate_unsorted::UpdateMoby_{633_773_988_989}
// callees(0): 
// strings: 00a0ca34: 'None'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mobyutil::MB_CountGoldBolts(void)

{
  byte *pbVar1;
  char *pcVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar4 = 0;
  pcVar2 = g_CollectedGoldBolts;
  lVar6 = 0x14;
  do {
    lVar5 = (longlong)((int)lVar4 + 1);
    lVar5 = lVar5 + ((LZCOUNT(-(uint)(byte)*pcVar2) << 0x3a) >> 0x3f & lVar4 - lVar5);
    lVar4 = (longlong)((int)lVar5 + 1);
    lVar4 = lVar4 + ((LZCOUNT(-(uint)((byte *)pcVar2)[1]) << 0x3a) >> 0x3f & lVar5 - lVar4);
    pbVar1 = (byte *)pcVar2 + 3;
    lVar5 = (longlong)((int)lVar4 + 1);
    lVar5 = lVar5 + ((LZCOUNT(-(uint)((byte *)pcVar2)[2]) << 0x3a) >> 0x3f & lVar4 - lVar5);
    lVar4 = (longlong)((int)lVar5 + 1);
    pcVar2 = (char *)((byte *)pcVar2 + 4);
    lVar4 = lVar4 + ((LZCOUNT(-(uint)*pbVar1) << 0x3a) >> 0x3f & lVar5 - lVar4);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  iVar3 = (int)lVar4;
  iVar3 = iVar3 + (iVar3 >> 0x1f & -iVar3);
  return iVar3 + ((uint)(0x28 - (longlong)iVar3 >> 0x3f) & 0x28U - iVar3);
}



//==== 0011b2c4  ns=mobyutil  size=0x1d0
// sig: int MB_GetUnspentGoldBolts(void)
// callers(2): 00146b14 pause::GoldBoltWidget_Update; 004d31b0 FUN_004d31b0
// callees(0): 
// strings: 00a0ca34: 'None'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mobyutil::MB_GetUnspentGoldBolts(void)

{
  byte *pbVar1;
  undefined *puVar2;
  longlong lVar3;
  int iVar4;
  char *pcVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  lVar3 = 0;
  pcVar5 = g_CollectedGoldBolts;
  lVar9 = 0x14;
  do {
    lVar3 = lVar3 + 1 + ((LZCOUNT(-(uint)(byte)*pcVar5) << 0x3a) >> 0x3f & lVar3 - (lVar3 + 1));
    lVar6 = lVar3 + 1;
    lVar6 = lVar6 + ((LZCOUNT(-(uint)((byte *)pcVar5)[1]) << 0x3a) >> 0x3f & lVar3 - lVar6);
    pbVar1 = (byte *)pcVar5 + 3;
    lVar7 = lVar6 + 1;
    lVar7 = lVar7 + ((LZCOUNT(-(uint)((byte *)pcVar5)[2]) << 0x3a) >> 0x3f & lVar6 - lVar7);
    lVar3 = lVar7 + 1;
    pcVar5 = (char *)((byte *)pcVar5 + 4);
    lVar3 = lVar3 + ((LZCOUNT(-(uint)*pbVar1) << 0x3a) >> 0x3f & lVar7 - lVar3);
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  iVar4 = (int)lVar3;
  iVar4 = iVar4 + (iVar4 >> 0x1f & -iVar4);
  iVar8 = 0;
  lVar3 = 0;
  do {
    puVar2 = &g_goldWeaponsArray.field0_0x0 + iVar8;
    iVar8 = iVar8 + 1;
    lVar3 = lVar3 + 1 + ((LZCOUNT(-(uint)*puVar2) << 0x3a) >> 0x3f & lVar3 - (lVar3 + 1));
  } while (iVar8 < 0x25);
  lVar3 = lVar3 + ((longlong)(int)lVar3 >> 0x3f & -lVar3);
  lVar3 = (longlong)
          (int)(iVar4 + ((uint)(0x28 - (longlong)iVar4 >> 0x3f) & 0x28U - iVar4) +
               (int)(lVar3 + (10 - (longlong)(int)lVar3 >> 0x3f & 10U - lVar3)) * -4);
  lVar3 = lVar3 + (lVar3 >> 0x3f & -lVar3);
  iVar4 = (int)lVar3;
  return iVar4 + ((uint)(0x28 - lVar3 >> 0x3f) & 0x28U - iVar4);
}



//==== 0011b494  ns=mobyutil  size=0x90
// sig: int MB_CountSkillPoints(void)
// callers(2): 0013abcc pause::BeginMenu; 0014d63c pause::Draw_GameCompletedFrame
// callees(0): 
// strings: 0096c08c: 'None'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mobyutil::MB_CountSkillPoints(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar2 = 0;
  iVar1 = 0;
  do {
    iVar4 = iVar1 + 1;
    lVar3 = (longlong)((int)lVar2 + 1);
    lVar2 = lVar3 + ((LZCOUNT(-(uint)(byte)g_SkillPoints[iVar1]) << 0x3a) >> 0x3f & lVar2 - lVar3);
    iVar1 = iVar4;
  } while (iVar4 < 0x20);
  iVar1 = (int)lVar2;
  iVar1 = iVar1 + (iVar1 >> 0x1f & -iVar1);
  return iVar1 + ((uint)(0x1e - (longlong)iVar1 >> 0x3f) & 0x1eU - iVar1);
}



//==== 0011b524  ns=mobyutil  size=0x1a0
// sig: TROPHIES_ENUM MB_TrophyFromSkillPoint(int skillPoint)
// callers(2): 0011b6c4 mobyutil::MB_UnlockSkillPointTrophy; 0011b728 mobyutil::MB_UnlockSkillPoint
// callees(1): 004ffc9c print_tty2
// strings: 00652fd0: 'Skill point does not map to trophy.. *poker face*\n'

TROPHIES_ENUM mobyutil::MB_TrophyFromSkillPoint(int skillPoint)

{
  if (skillPoint < 0xf) {
    if (skillPoint < 6) {
      if (skillPoint == 5) {
        return QWARKTASTIC;
      }
      if (skillPoint == 3) {
        return STRIKE_A_POSE;
      }
      if (skillPoint == 2) {
        return TRANSPORTED;
      }
      if (skillPoint == 0) {
        return TAKE_AIM;
      }
    }
    else {
      if (skillPoint == 0xe) {
        return DESTROYED;
      }
      if (skillPoint == 0xd) {
        return EAT_LEAD;
      }
      if (skillPoint == 10) {
        return GIRL_TROUBLE;
      }
      if (skillPoint == 9) {
        return SPEEDY;
      }
      if (skillPoint == 8) {
        return CLUCK_CLUCK;
      }
      if (skillPoint == 7) {
        return TWISTED_HOVERBOARD;
      }
      if (skillPoint == 6) {
        return VEHICLE_BOMBARDER;
      }
    }
  }
  else if (skillPoint < 0x16) {
    if (skillPoint == 0x14) {
      return PEST_CONTROL;
    }
    if (skillPoint == 0x13) {
      return BURIED_TREASURE;
    }
    if (skillPoint == 0x11) {
      return HEY_OVER_HERE;
    }
    if (skillPoint == 0x10) {
      return SNIPER;
    }
  }
  else {
    if (skillPoint == 0x1d) {
      return GOING_COMMANDO;
    }
    if (skillPoint == 0x1c) {
      return CAREFUL_CRUISE;
    }
    if (skillPoint == 0x1a) {
      return MAGICIAN;
    }
    if (skillPoint == 0x17) {
      return VANDAL;
    }
    if (skillPoint == 0x16) {
      return SITTING_DUCKS;
    }
  }
  print_tty2("Skill point does not map to trophy.. *poker face*\n");
  return ~GADGET_MASTER;
}



//==== 0011b6c4  ns=mobyutil  size=0x5c
// sig: void MB_UnlockSkillPointTrophy(int SkillPoint)
// callers(0): 
// callees(2): 0011b524 mobyutil::MB_TrophyFromSkillPoint; 004f0310 idol::NPTrophyUnlock

void mobyutil::MB_UnlockSkillPointTrophy(int SkillPoint)

{
  TROPHIES_ENUM trophy;
  
  trophy = MB_TrophyFromSkillPoint(SkillPoint);
  if (('\0' < (char)trophy) && (*(int *)(TrophyMgr + (int)((longlong)(char)trophy << 3) + 0xc) == 0)
     ) {
    idol::NPTrophyUnlock(TrophyMgr,trophy);
  }
  return;
}



//==== 0011b728  ns=mobyutil  size=0x21c
// sig: undefined MB_UnlockSkillPoint(undefined4 skillPoint)
// callers(34): 0001e700 mobyupdate_helpers::M336_0001e700; 000a7968 hero::Hero_UpdateHoverboardRace; 000a9158 hero::Hero_GrindMotion; 0013b838 pause::UpdatePause; 00181628 mobyupdate_unsorted::UpdateMoby_1000; 001a5f50 mobyupdate_unsorted::UpdateMoby_1051; 001afa30 mobyupdate_helpers::M1068_001afa30; 001f2d58 mobyupdate_helpers::M1196_001f2d58; 001fbc78 mobyupdate_helpers::M1202_001fbc78; 00205098 mobyupdate_unsorted::UpdateMoby_1212; 00206160 mobyupdate_unsorted::UpdateMoby_{1213_1973}; 00247350 mobyupdate_helpers::M1319_00247350; 00249cb0 mobyupdate_unsorted::UpdateMoby_1324; 0024fd10 mobyupdate_unsorted::UpdateMoby_1342; 00254630 mobyupdate_unsorted::UpdateMoby_1349; 00255258 mobyupdate_unsorted::UpdateMoby_1350; 00284e60 mobyupdate_unsorted::UpdateMoby_1455; 00286ae0 mobyupdate_unsorted::UpdateMoby_1470; 00298cec mobyupdate_unsorted::UpdateMoby_1559; 0029a0d8 mobyupdate_unsorted::UpdateMoby_1561; 002bb840 mobyupdate_unsorted::UpdateMoby_1805; 002c2d80 mobyupdate_helpers::M1843_002c2d80; 002c7328 mobyupdate_unsorted::UpdateMoby_185; 0031b438 mobyupdate_helpers::M253_0031b438; 003688a8 mobyupdate_unsorted::UpdateMoby_422
// callees(5): 0007b740 help::help_msg_string_by_index; 0011b524 mobyutil::MB_TrophyFromSkillPoint; 0015d2d4 sound::sound_CorePlay; 004f0310 idol::NPTrophyUnlock; 005cc8d8 libc::strcpy
// strings: 0096c08c: 'None'

void mobyutil::MB_UnlockSkillPoint(int skillPoint)

{
  byte *pbVar1;
  longlong lVar2;
  undefined4 *puVar3;
  TROPHIES_ENUM Trophy;
  char *__src;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  
  lVar2 = ZEXT48(&stack0x00000000) - 0x30;
  puVar3 = (undefined4 *)lVar2;
  puVar3[3] = in_vr31_32_3;
  puVar3[2] = in_vr31_32_2;
  puVar3[1] = in_vr31_32_1;
  *puVar3 = in_vr31_32_0;
  if (g_SkillPoints[skillPoint] != '\0') {
    Trophy = MB_TrophyFromSkillPoint(skillPoint);
    if (('\0' < (char)Trophy) &&
       (*(int *)(TrophyMgr + (int)((longlong)(char)Trophy << 3) + 0xc) == 0)) {
      idol::NPTrophyUnlock(TrophyMgr,Trophy);
    }
  }
  if (g_SkillPoints[skillPoint] == '\0') {
    g_SkillPoints[skillPoint] = '\x01';
    sound::sound_CorePlay(1,0,(MobyInstance *)0x0);
    auVar5 = ZEXT416(0xffffffff);
    auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
    auVar6 = vectorShiftLeftIntegerWord(auVar5,auVar5);
    auVar5 = loadVectorLeftIndexed(lVar2,0x11b720);
    auVar7 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar5 = vectorMultiplyAddFloatingPoint
                       (auVar7,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar6);
    auVar5 = vectorConvertToSignedFixedPointWordSaturate(auVar5,0);
    __src = (char *)help::help_msg_string_by_index(STR_YOU_JUST_EARNED_A_0x53D6);
    libc::strcpy(&g_toastMsgBuff,__src);
    auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
    g_toastMsgTimer =
         storeVectorElementWordIndexed
                   (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0x5c80,0xa10000);
    Trophy = MB_TrophyFromSkillPoint(skillPoint);
    if (('\0' < (char)Trophy) &&
       (*(int *)(TrophyMgr + (int)((longlong)(char)Trophy << 3) + 0xc) == 0)) {
      idol::NPTrophyUnlock(TrophyMgr,Trophy);
    }
  }
  iVar4 = 0;
  lVar2 = 0;
  do {
    pbVar1 = (byte *)(g_SkillPoints + iVar4);
    iVar4 = iVar4 + 1;
    lVar2 = lVar2 + 1 + ((LZCOUNT(-(uint)*pbVar1) << 0x3a) >> 0x3f & lVar2 - (lVar2 + 1));
  } while (iVar4 < 0x20);
  iVar4 = (int)lVar2;
  iVar4 = iVar4 + (iVar4 >> 0x1f & -iVar4);
  if (iVar4 < 0x1f) {
    if (iVar4 < 0x1e) goto LAB_0011b8f8;
  }
  else {
    iVar4 = 0x1e;
  }
  if (*(int *)(TrophyMgr + 0x1c) == 0) {
    idol::NPTrophyUnlock(TrophyMgr,SKILLFUL);
  }
LAB_0011b8f8:
  if ((0xe < iVar4) && (*(int *)(TrophyMgr + 0x4c) == 0)) {
    idol::NPTrophyUnlock(TrophyMgr,UNLOCK_SKETCHBOOK);
  }
  return;
}



//==== 0011b944  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_MUSIC(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_MUSIC(void)

{
  DAT_00729554 = 0x10000;
  return;
}



//==== 0011b960  ns=music  size=0xcc
// sig: void music_UppercaseCdromPath(char * path)
// callers(0): 
// callees(2): 005c8510 libc::strlen; 005ccb28 FUN_005ccb28
// strings: 00653004: 'cdrom0:'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void music::music_UppercaseCdromPath(char *path)

{
  byte bVar1;
  size_t sVar2;
  int iVar3;
  size_t sVar4;
  
  sVar2 = libc::strlen("cdrom0:");
  iVar3 = FUN_005ccb28("cdrom0:",path,sVar2);
  if (iVar3 == 0) {
    for (; sVar4 = libc::strlen(path), sVar2 < sVar4; sVar2 = sVar2 + 1) {
      bVar1 = path[sVar2];
      path[sVar2] = (bVar1 - 0x20) +
                    ((byte)((LZCOUNT(-(*(ushort *)(PTR_PTR_00905664 + (uint)bVar1 * 2) & 0x10)) <<
                            0x3a) >> 0x3f) & bVar1 - (bVar1 - 0x20));
    }
  }
  return;
}



//==== 0011ba2c  ns=music  size=0x2c
// sig: void music_LoadCoreBank(void)
// callers(1): 004d3044 FUN_004d3044
// callees(1): 00506664 FUN_00506664

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void music::music_LoadCoreBank(void)

{
  FUN_00506664(&PTR_music_CdCB_00706db0);
  return;
}



//==== 0011ba58  ns=music  size=0xa8
// sig: void music_Init(void)
// callers(1): 0015bc00 sound::sound_Init
// callees(3): 00505954 FUN_00505954; 00505d20 stub::STUB_00505d20; 00506664 FUN_00506664

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void music::music_Init(void)

{
  int iVar1;
  
  DAT_009636f8 = 0x20;
  DAT_009636fc = 10;
  DAT_00963700 = 8;
  DAT_00963704 = 0;
  DAT_009636c8 = 0;
  g_MusicPlaying.handle = 0;
  g_MusicPlaying.status = 0;
  g_SpeechPlaying.handle = 0;
  g_SpeechPlaying.status = 0;
  g_TransitionPlaying.handle = 0;
  g_TransitionPlaying.status = 0;
  g_PendingSpeech = 0xffffffff;
  g_PendingTrack = 0xff;
  FUN_00505954(4,0xf000,10,1);
  do {
    iVar1 = stub::STUB_00505d20();
  } while (iVar1 != 0);
  FUN_00506664(&PTR_music_CdCB_00706db0);
  return;
}



//==== 0011bb00  ns=music  size=0x9c
// sig: void InitLevelMusicFileSizes(void)
// callers(1): 000e0e60 main::startLevel
// callees(2): 00504178 fios::GetFileSize; 005cd2a8 libc::snprintf
// strings: 0065300c: 'rc1/ps3data/level%d/music[%d].xvag'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void music::InitLevelMusicFileSizes(void)

{
  ulonglong uVar1;
  undefined4 size;
  ulonglong music;
  int iVar2;
  char buff [256];
  
  music = 0;
  do {
    libc::snprintf(buff,"rc1/ps3data/level%d/music[%d].xvag",Level,music);
    size = fios::GetFileSize(buff);
    uVar1 = music & 0xffffffff;
    iVar2 = (int)music + 1;
    music = (ulonglong)iVar2;
    *(undefined4 *)(&g_LevelMusicFileSizes + (int)(uVar1 << 2)) = size;
  } while (iVar2 < 0xf);
  return;
}



//==== 0011bb9c  ns=music  size=0xf4
// sig: void music_StartSpeech_Helpgirl(int id, int flags, int vol)
// callers(0): 
// callees(2): 00506444 FUN_00506444; 005cd2a8 libc::snprintf
// strings: 00653030: 'rc1/ps3data/global/audio/helpgirl_speeches%d.xvag'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void music::music_StartSpeech_Helpgirl(int id,int flags,int vol)

{
  char acStack_110 [256];
  
  if (g_SpeechPlaying.handle == 0) {
    g_SpeechPlaying.handle = -1;
    g_SpeechPlaying.status = 1;
    g_SpeechPlaying.track = (short)id;
    g_SpeechPlaying.volume = (short)vol;
    g_SpeechPlaying.flags = (short)flags;
    g_SpeechPlaying.queuelen = 10;
    g_SpeechPlaying.remain = 48000;
    g_SpeechPlaying.transition = 0;
    libc::snprintf(acStack_110,"rc1/ps3data/global/audio/helpgirl_speeches%d.xvag",id + -60000);
    FUN_00506444(acStack_110,0,0,0,g_SpeechPlaying.volume,0,2,0);
  }
  return;
}



//==== 0011bc90  ns=music  size=0x100
// sig: void music_StartSpeech_Qwark(int id, int flags, int vol)
// callers(0): 
// callees(2): 00506444 FUN_00506444; 005cd2a8 libc::snprintf
// strings: 00653064: 'rc1/ps3data/global/audio/qwark_taunts%d_%d.xvag'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void music::music_StartSpeech_Qwark(int id,int flags,int vol)

{
  char acStack_110 [256];
  
  if (g_SpeechPlaying.handle == 0) {
    g_SpeechPlaying.handle = -1;
    g_SpeechPlaying.status = 1;
    g_SpeechPlaying.track = (short)id;
    g_SpeechPlaying.volume = (short)vol;
    g_SpeechPlaying.flags = (short)flags;
    g_SpeechPlaying.queuelen = 10;
    g_SpeechPlaying.remain = 48000;
    g_SpeechPlaying.transition = 0;
    libc::snprintf(acStack_110,"rc1/ps3data/global/audio/qwark_taunts%d_%d.xvag",id + -50000,
                   g_Language);
    FUN_00506444(acStack_110,0,0,0,g_SpeechPlaying.volume,0,2,0);
  }
  return;
}



//==== 0011bd90  ns=music  size=0xf4
// sig: void music_StartSpeech_Space(int id, int flags, int vol)
// callers(0): 
// callees(2): 00506444 FUN_00506444; 005cd2a8 libc::snprintf
// strings: 00653094: 'rc1/ps3data/global/audio/space_sounds_l%d.xvag'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void music::music_StartSpeech_Space(int id,int flags,int vol)

{
  char acStack_110 [256];
  
  if (g_SpeechPlaying.handle == 0) {
    g_SpeechPlaying.handle = -1;
    g_SpeechPlaying.status = 1;
    g_SpeechPlaying.track = (short)id;
    g_SpeechPlaying.volume = (short)vol;
    g_SpeechPlaying.flags = (short)flags;
    g_SpeechPlaying.queuelen = 10;
    g_SpeechPlaying.remain = 48000;
    g_SpeechPlaying.transition = 0;
    libc::snprintf(acStack_110,"rc1/ps3data/global/audio/space_sounds_l%d.xvag",id + -40000);
    FUN_00506444(acStack_110,0,0,0,g_SpeechPlaying.volume,0,2,0);
  }
  return;
}



//==== 0011be84  ns=music  size=0x180
// sig: void music_StartSpeech_Help(int id, int flags, int vol)
// callers(0): 
// callees(3): 00504178 fios::GetFileSize; 00506444 FUN_00506444; 005cd2a8 libc::snprintf
// strings: 006530c4: 'rc1/ps3data/global/audio/help%d_%d.xvag'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void music::music_StartSpeech_Help(int id,int flags,int vol)

{
  int iVar1;
  longlong lVar2;
  char acStack_130 [264];
  
  iVar1 = g_Language;
  if (g_SpeechPlaying.handle == 0) {
    g_SpeechPlaying.volume = (short)vol;
    g_SpeechPlaying.handle = -1;
    g_SpeechPlaying.status = 1;
    g_SpeechPlaying.track = (short)id;
    g_SpeechPlaying.flags = (short)flags;
    g_SpeechPlaying.queuelen = 10;
    g_SpeechPlaying.remain = 48000;
    g_SpeechPlaying.transition = 0;
    libc::snprintf(acStack_130,"rc1/ps3data/global/audio/help%d_%d.xvag",id + -30000,g_Language);
    if ((iVar1 == 6) && (lVar2 = fios::GetFileSize(acStack_130), lVar2 == 0)) {
      libc::snprintf(acStack_130,"rc1/ps3data/global/audio/help%d_%d.xvag",id + -30000,0);
    }
    FUN_00506444(acStack_130,0,0,0,
                 g_SpeechPlaying.volume +
                 ((ushort)((LZCOUNT(-(uint)DAT_0071fb58) << 0x3a) >> 0x3f) & -g_SpeechPlaying.volume
                 ),0,2,0);
  }
  return;
}



//==== 0011c004  ns=music  size=0xf8
// sig: void music_StartSpeech_Bindata(int id, int flags, int vol)
// callers(0): 
// callees(2): 00506444 FUN_00506444; 005cd2a8 libc::snprintf
// strings: 006530ec: 'rc1/ps3data/level%d/bindata[%d].xvag'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void music::music_StartSpeech_Bindata(int id,int flags,int vol)

{
  char acStack_110 [256];
  
  if (g_SpeechPlaying.handle == 0) {
    g_SpeechPlaying.handle = -1;
    g_SpeechPlaying.status = 1;
    g_SpeechPlaying.track = (short)id;
    g_SpeechPlaying.volume = (short)vol;
    g_SpeechPlaying.flags = (short)flags;
    g_SpeechPlaying.queuelen = 10;
    g_SpeechPlaying.remain = 48000;
    g_SpeechPlaying.transition = 0;
    libc::snprintf(acStack_110,"rc1/ps3data/level%d/bindata[%d].xvag",Level,id + -20000);
    FUN_00506444(acStack_110,0,0,0,g_SpeechPlaying.volume,0,2,0);
  }
  return;
}



//==== 0011c0fc  ns=music  size=0xec
// sig: void music_StartSpeech_Vendor(int id, int flags, int vol)
// callers(0): 
// callees(2): 00506444 FUN_00506444; 005cd2a8 libc::snprintf
// strings: 00653114: 'rc1/ps3data/global/audio/vendor_speech%d.xvag'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void music::music_StartSpeech_Vendor(int id,int flags,int vol)

{
  char acStack_110 [256];
  
  if (g_SpeechPlaying.handle == 0) {
    g_SpeechPlaying.handle = -1;
    g_SpeechPlaying.status = 1;
    g_SpeechPlaying.track = (short)id;
    g_SpeechPlaying.volume = (short)vol;
    g_SpeechPlaying.flags = (short)flags;
    g_SpeechPlaying.queuelen = 10;
    g_SpeechPlaying.remain = 48000;
    g_SpeechPlaying.transition = 0;
    libc::snprintf(acStack_110,"rc1/ps3data/global/audio/vendor_speech%d.xvag",id + -10000);
    FUN_00506444(acStack_110,0,0,0,g_SpeechPlaying.volume,0,2,0);
  }
  return;
}



//==== 0011c1e8  ns=music  size=0x648
// sig: void music_StartSpeech(int id, int flags, int vol)
// callers(2): 0011d1f0 music::LoadMusic; 0011dc98 music::music_SpeechPreseekCB
// callees(3): 00504178 fios::GetFileSize; 00506444 FUN_00506444; 005cd2a8 libc::snprintf
// strings: 00653030: 'rc1/ps3data/global/audio/helpgirl_speeches%d.xvag' | 00653064: 'rc1/ps3data/global/audio/qwark_taunts%d_%d.xvag' | 00653094: 'rc1/ps3data/global/audio/space_sounds_l%d.xvag' | 006530c4: 'rc1/ps3data/global/audio/help%d_%d.xvag' | 006530ec: 'rc1/ps3data/level%d/bindata[%d].xvag' | 00653114: 'rc1/ps3data/global/audio/vendor_speech%d.xvag' | 007295d0: 'efgsij' | 00653144: 'rc1/ps3data/level%d/scene[%d]/speech_%c.xvag'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void music::music_StartSpeech(int id,int flags,int vol)

{
  int iVar1;
  short sVar3;
  longlong lVar2;
  short sVar4;
  short sVar5;
  char acStack_730 [256];
  char acStack_630 [256];
  char acStack_530 [256];
  char acStack_430 [256];
  char acStack_330 [256];
  char acStack_230 [256];
  char acStack_130 [256];
  
  iVar1 = g_Language;
  sVar5 = (short)id;
  sVar3 = (short)vol;
  sVar4 = (short)flags;
  if (id < 60000) {
    if (id < 50000) {
      if (id < 40000) {
        if (id < 30000) {
          if (id < 20000) {
            if (id < 10000) {
              if (g_SpeechPlaying.handle == 0) {
                g_SpeechPlaying.handle = -1;
                g_SpeechPlaying.status = 1;
                g_SpeechPlaying.queuelen = 10;
                g_SpeechPlaying.remain = 48000;
                g_SpeechPlaying.transition = 0;
                g_SpeechPlaying.track = sVar5;
                g_SpeechPlaying.volume = sVar3;
                g_SpeechPlaying.flags = sVar4;
                libc::snprintf(acStack_130,"rc1/ps3data/level%d/scene[%d]/speech_%c.xvag",Level,id,
                               (ulonglong)
                               (byte)s_efgsij_007295d0
                                     [g_Language + -1 +
                                      ((uint)((LZCOUNT(-g_Language) << 0x3a) >> 0x3f) &
                                      g_Language - (g_Language + -1))]);
                FUN_00506444(acStack_130,0,0,0,g_SpeechPlaying.volume,0,2,0);
              }
            }
            else if (g_SpeechPlaying.handle == 0) {
              g_SpeechPlaying.handle = -1;
              g_SpeechPlaying.status = 1;
              g_SpeechPlaying.queuelen = 10;
              g_SpeechPlaying.remain = 48000;
              g_SpeechPlaying.transition = 0;
              g_SpeechPlaying.track = sVar5;
              g_SpeechPlaying.volume = sVar3;
              g_SpeechPlaying.flags = sVar4;
              libc::snprintf(acStack_730,"rc1/ps3data/global/audio/vendor_speech%d.xvag",id + -10000
                            );
              FUN_00506444(acStack_730,0,0,0,g_SpeechPlaying.volume,0,2,0);
            }
          }
          else if (g_SpeechPlaying.handle == 0) {
            g_SpeechPlaying.handle = -1;
            g_SpeechPlaying.status = 1;
            g_SpeechPlaying.queuelen = 10;
            g_SpeechPlaying.remain = 48000;
            g_SpeechPlaying.transition = 0;
            g_SpeechPlaying.track = sVar5;
            g_SpeechPlaying.volume = sVar3;
            g_SpeechPlaying.flags = sVar4;
            libc::snprintf(acStack_630,"rc1/ps3data/level%d/bindata[%d].xvag",Level,id + -20000);
            FUN_00506444(acStack_630,0,0,0,g_SpeechPlaying.volume,0,2,0);
          }
        }
        else if (g_SpeechPlaying.handle == 0) {
          g_SpeechPlaying.handle = -1;
          g_SpeechPlaying.status = 1;
          g_SpeechPlaying.queuelen = 10;
          g_SpeechPlaying.remain = 48000;
          g_SpeechPlaying.transition = 0;
          g_SpeechPlaying.track = sVar5;
          g_SpeechPlaying.volume = sVar3;
          g_SpeechPlaying.flags = sVar4;
          libc::snprintf(acStack_530,"rc1/ps3data/global/audio/help%d_%d.xvag",id + -30000,
                         g_Language);
          if ((iVar1 == 6) && (lVar2 = fios::GetFileSize(acStack_530), lVar2 == 0)) {
            libc::snprintf(acStack_530,"rc1/ps3data/global/audio/help%d_%d.xvag",id + -30000,0);
          }
          FUN_00506444(acStack_530,0,0,0,
                       g_SpeechPlaying.volume +
                       ((ushort)((LZCOUNT(-(uint)DAT_0071fb58) << 0x3a) >> 0x3f) &
                       -g_SpeechPlaying.volume),0,2,0);
        }
      }
      else if (g_SpeechPlaying.handle == 0) {
        g_SpeechPlaying.handle = -1;
        g_SpeechPlaying.status = 1;
        g_SpeechPlaying.queuelen = 10;
        g_SpeechPlaying.remain = 48000;
        g_SpeechPlaying.transition = 0;
        g_SpeechPlaying.track = sVar5;
        g_SpeechPlaying.volume = sVar3;
        g_SpeechPlaying.flags = sVar4;
        libc::snprintf(acStack_430,"rc1/ps3data/global/audio/space_sounds_l%d.xvag",id + -40000);
        FUN_00506444(acStack_430,0,0,0,g_SpeechPlaying.volume,0,2,0);
      }
    }
    else if (g_SpeechPlaying.handle == 0) {
      g_SpeechPlaying.handle = -1;
      g_SpeechPlaying.status = 1;
      g_SpeechPlaying.queuelen = 10;
      g_SpeechPlaying.remain = 48000;
      g_SpeechPlaying.transition = 0;
      g_SpeechPlaying.track = sVar5;
      g_SpeechPlaying.volume = sVar3;
      g_SpeechPlaying.flags = sVar4;
      libc::snprintf(acStack_330,"rc1/ps3data/global/audio/qwark_taunts%d_%d.xvag",id + -50000,
                     g_Language);
      FUN_00506444(acStack_330,0,0,0,g_SpeechPlaying.volume,0,2,0);
    }
  }
  else if (g_SpeechPlaying.handle == 0) {
    g_SpeechPlaying.handle = -1;
    g_SpeechPlaying.status = 1;
    g_SpeechPlaying.queuelen = 10;
    g_SpeechPlaying.remain = 48000;
    g_SpeechPlaying.transition = 0;
    g_SpeechPlaying.track = sVar5;
    g_SpeechPlaying.volume = sVar3;
    g_SpeechPlaying.flags = sVar4;
    libc::snprintf(acStack_230,"rc1/ps3data/global/audio/helpgirl_speeches%d.xvag",id + -60000);
    FUN_00506444(acStack_230,0,0,0,g_SpeechPlaying.volume,0,2,0);
  }
  return;
}



//==== 0011c830  ns=music  size=0x60
// sig: int music_PlayPreseekedSpeech(void)
// callers(11): 0007ba00 help::Help_Update; 001516c0 pause::M1957_Update_GirlwadOnGameComplete; 0015e430 space::PlaySpaceCutscene; 00161788 space::UpdateSpace; 00167e60 update::mode_sceneInit; 00168768 update::UpdateScene; 0016b2f8 vendor::Vendor_StartWeaponCutscene; 0016b650 vendor::StartGadgetPickupCutscene; 0016bd58 vendor::Vendor_UpdateDude; 001c96c0 mobyupdate_unsorted::UpdateMoby_1108; 0035ffd8 mobyupdate_unsorted::UpdateMoby_388
// callees(1): 00505cfc FUN_00505cfc

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int music::music_PlayPreseekedSpeech(void)

{
  int iVar1;
  
  if ((g_SpeechPlaying.handle == 0) || (g_SpeechPlaying.status != 3)) {
    iVar1 = 0;
  }
  else {
    FUN_00505cfc();
    iVar1 = 1;
    g_SpeechPlaying.status = 4;
  }
  return iVar1;
}



//==== 0011c890  ns=music  size=0xf4
// sig: void music_PreseekTrack(int track, int flags, int vol)
// callers(0): 
// callees(2): 00506444 FUN_00506444; 005cd2a8 libc::snprintf
// strings: 0065300c: 'rc1/ps3data/level%d/music[%d].xvag'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void music::music_PreseekTrack(int track,int flags,int vol)

{
  char acStack_110 [256];
  
  if (g_MusicPlaying.handle == 0) {
    g_MusicPlaying.handle = -1;
    g_MusicPlaying.status = 1;
    g_MusicPlaying.track = (short)track;
    g_MusicPlaying.volume = (short)vol;
    g_MusicPlaying.flags = (short)flags;
    g_MusicPlaying.queuelen = 10;
    g_MusicPlaying.remain = 48000;
    g_MusicPlaying.transition = 0;
    libc::snprintf(acStack_110,"rc1/ps3data/level%d/music[%d].xvag",Level,track);
    FUN_00506444(acStack_110,0,0,0,g_MusicPlaying.volume,0,1,0);
  }
  return;
}



//==== 0011c984  ns=music  size=0xf4
// sig: void music_StartTrack(int track, int flags, int vol)
// callers(2): 000e0e60 main::startLevel; 001693c8 update::mode_movieUnInit
// callees(2): 00506444 FUN_00506444; 005cd2a8 libc::snprintf
// strings: 0065300c: 'rc1/ps3data/level%d/music[%d].xvag'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void music::music_StartTrack(int track,int flags,int vol)

{
  char acStack_110 [256];
  
  if (g_MusicPlaying.handle == 0) {
    g_MusicPlaying.handle = -1;
    g_MusicPlaying.status = 1;
    g_MusicPlaying.track = (short)track;
    g_MusicPlaying.volume = (short)vol;
    g_MusicPlaying.flags = (short)flags;
    g_MusicPlaying.queuelen = 10;
    g_MusicPlaying.remain = 48000;
    g_MusicPlaying.transition = 0;
    libc::snprintf(acStack_110,"rc1/ps3data/level%d/music[%d].xvag",Level,track);
    FUN_00506444(acStack_110,0,0,0,g_MusicPlaying.volume,0,1,0);
  }
  return;
}



//==== 0011ca78  ns=music  size=0x13c
// sig: void music_StartTrackBody(int track, int flags, int vol)
// callers(0): 
// callees(2): 00506444 FUN_00506444; 005cd2a8 libc::snprintf
// strings: 0065300c: 'rc1/ps3data/level%d/music[%d].xvag'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void music::music_StartTrackBody(int track,int flags,int vol)

{
  int iVar1;
  char acStack_120 [256];
  
  iVar1 = g_MusicPlaying.handle;
  if (g_MusicPlaying.status != 9) {
    if (g_MusicPlaying.handle != -1 && g_MusicPlaying.handle != 0) {
      g_MusicPlaying.track = (short)track;
      g_MusicPlaying.status = 9;
      g_MusicPlaying.volume = (short)vol;
      g_MusicPlaying.flags = (short)flags;
      g_MusicPlaying.queuelen = 10;
      g_MusicPlaying.remain = 48000;
      g_MusicPlaying.transition = 0;
      libc::snprintf(acStack_120,"rc1/ps3data/level%d/music[%d].xvag",Level,track + 1);
      FUN_00506444(acStack_120,0,0,0,g_MusicPlaying.volume,0,1,iVar1);
    }
  }
  return;
}



//==== 0011cbb4  ns=music  size=0x114
// sig: int music_Transition(int track, int transition, int flags, int vol)
// callers(0): 
// callees(2): 00506444 FUN_00506444; 005cd2a8 libc::snprintf
// strings: 0065300c: 'rc1/ps3data/level%d/music[%d].xvag'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int music::music_Transition(int track,int transition,int flags,int vol)

{
  bool bVar1;
  char acStack_120 [264];
  
  bVar1 = g_TransitionPlaying.handle == 0;
  if (bVar1) {
    g_TransitionPlaying.handle = -1;
    g_TransitionPlaying.status = 1;
    g_TransitionPlaying.track = (short)track;
    g_TransitionPlaying.volume = (short)vol;
    g_TransitionPlaying.flags = (short)flags;
    g_TransitionPlaying.queuelen = 10;
    g_TransitionPlaying.remain = 48000;
    g_TransitionPlaying.transition = 1;
    libc::snprintf(acStack_120,"rc1/ps3data/level%d/music[%d].xvag",Level,transition);
    FUN_00506444(acStack_120,0,0,0,g_TransitionPlaying.volume,0,1,0);
  }
  return (int)bVar1;
}



//==== 0011ccc8  ns=music  size=0x54
// sig: void music_SetTransition(int track, int transition)
// callers(20): 00079b18 freeze::UpdateFreeze; 001807e8 UpdateSound_6; 001ac298 mobyupdate_unsorted::UpdateMoby_1061; 001c96c0 mobyupdate_unsorted::UpdateMoby_1108; 001ccf10 mobyupdate_unsorted::UpdateMoby_1109; 001daee8 mobyupdate_unsorted::UpdateMoby_1135; 00221048 mobyupd::update1242::UpdateMoby_1242_JetFighterPoki; 00255868 mobyupdate_unsorted::UpdateMoby_1353_GemlikManager; 00264238 mobyupd::update1379::UpdateMoby_1379_JetFighterFleet; 00267af8 mobyupdate_unsorted::UpdateMoby_{1389_1446}; 0026a978 mobyupdate_unsorted::UpdateMoby_{1399_1451_1899}; 00284c20 mobyupdate_helpers::M1455_00284c20; 00284d00 mobyupdate_helpers::M1455_00284d00; 00284e60 mobyupdate_unsorted::UpdateMoby_1455; 002f7690 mobyupdate_unsorted::UpdateMoby_22; 00340968 mobyupdate_unsorted::UpdateMoby_318; 00375900 mobyupdate_unsorted::UpdateMoby_436_UmbrisInfobot???; 0041dad8 mobyupdate_unsorted::UpdateMoby_69; 00477b98 mobyupdate_unsorted::UpdateMoby_822; 004b0698 mobyupdate_unsorted::UpdateMoby_918
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void music::music_SetTransition(int track,int transition)

{
  if ((g_MusicPlaying.track != track) || (g_PendingTrack != -1)) {
    if ((g_MusicPlaying.status == 0) && (g_TransitionPlaying.status == 0)) {
      g_MusicPlaying.track = (short)track;
    }
    else {
      g_PendingTrack = (char)track;
      MusicId = (undefined1)transition;
    }
  }
  return;
}



//==== 0011cd1c  ns=music  size=0x104
// sig: void music_Stop(void)
// callers(11): 000103b0 boot::PlayAttractMovie; 00012048 boot::PrepareFrontbin; 0004fe38 sound::UnloadSoundBanks; 000e0e60 main::startLevel; 00164c58 space::DoSpaceTransition; 00168d34 update::StartMovie; 00168dec update::PlayInfobotMovie; 00168f7c update::PlayHelpMovie; 0016910c update::PlaySpecialMovie; 00169268 update::PlayStoryMovie; 0016974c update::UpdateCinematic
// callees(3): 00505d20 stub::STUB_00505d20; 005066c4 FUN_005066c4; 00632674 FUN_00632674

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void music::music_Stop(void)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = g_MusicPlaying.handle == -1;
  while (bVar1) {
    stub::STUB_00505d20();
    bVar1 = g_MusicPlaying.handle == -1;
  }
  while (g_TransitionPlaying.handle == -1) {
    stub::STUB_00505d20();
  }
  while (g_SpeechPlaying.handle == -1) {
    stub::STUB_00505d20();
  }
  FUN_00632674();
  do {
    iVar2 = stub::STUB_00505d20();
  } while (iVar2 != 0);
  FUN_005066c4(1);
  g_MusicPlaying.status = 0;
  g_MusicPlaying.flags = 0;
  g_MusicPlaying.handle = 0;
  if (g_PendingTrack != -1) {
    g_MusicPlaying.track = (short)g_PendingTrack;
  }
  g_SpeechPlaying.status = 0;
  g_SpeechPlaying.flags = 0;
  g_SpeechPlaying.handle = 0;
  g_TransitionPlaying.status = 0;
  g_TransitionPlaying.flags = 0;
  g_TransitionPlaying.handle = 0;
  g_TransitionState = 0;
  g_PendingTrack = 0xff;
  MusicId = 0xff;
  return;
}



//==== 0011ce20  ns=music  size=0x44
// sig: void music_Pause(int speech)
// callers(8): 00078178 freeze::DisplayPrompt; 000e0e60 main::startLevel; 0013abcc pause::BeginMenu; 0015e7e8 space::Space_StartTakeoffCutscene; 00161788 space::UpdateSpace; 00167e60 update::mode_sceneInit; 0016a8f0 vendor::Spawn_Moby11_Vendor; 0016b650 vendor::StartGadgetPickupCutscene
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void music::music_Pause(int speech)

{
  if (speech != 0) {
    g_SpeechPlaying.pause = -0x8000;
    g_SpeechPlaying.unpause = 0;
  }
  g_MusicPlaying.pause = -0x8000;
  g_MusicPlaying.unpause = 0;
  g_TransitionPlaying.pause = -0x8000;
  g_TransitionPlaying.unpause = 0;
  return;
}



//==== 0011ce64  ns=music  size=0x1c
// sig: void music_Unpause(void)
// callers(6): 00079b18 freeze::UpdateFreeze; 000e0e60 main::startLevel; 0013b838 pause::UpdatePause; 00161788 space::UpdateSpace; 0016b038 vendor::Vendor_EndWeaponCutscene; 0016ba38 vendor::Vendor_RestoreHero
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void music::music_Unpause(void)

{
  g_MusicPlaying.pause = 4;
  g_TransitionPlaying.pause = 4;
  g_SpeechPlaying.pause = 4;
  return;
}



//==== 0011ce80  ns=music  size=0x48
// sig: void music_UnpauseDelay(int time)
// callers(1): 00167a30 update::mode_sceneUnInit
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void music::music_UnpauseDelay(int time)

{
  short sVar1;
  
  sVar1 = (short)time;
  if ((g_MusicPlaying.pause & 0x8000U) != 0) {
    g_MusicPlaying.unpause = sVar1;
  }
  if ((g_TransitionPlaying.pause & 0x8000U) != 0) {
    g_TransitionPlaying.unpause = sVar1;
  }
  if ((g_SpeechPlaying.pause & 0x8000U) != 0) {
    g_SpeechPlaying.unpause = sVar1;
  }
  return;
}



//==== 0011cec8  ns=music  size=0x1c0
// sig: void music_UpdateStream(music_Playing * stream)
// callers(1): 0011d1f0 music::LoadMusic
// callees(7): 004fffb4 fastfunc::FastDecTimerS16; 00505cfc FUN_00505cfc; 00505e08 FUN_00505e08; 00505e98 FUN_00505e98; 00505f18 FUN_00505f18; 005065dc FUN_005065dc; 00506638 FUN_00506638

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void music::music_UpdateStream(music_Playing *stream)

{
  longlong lVar1;
  int iVar2;
  ushort uVar3;
  
  lVar1 = (longlong)(int)stream;
  uVar3 = stream->status;
  iVar2 = stream->handle;
  if (((uVar3 == 9) || (iVar2 == 0)) || (iVar2 == -1)) {
    if ((uVar3 == 7) || (iVar2 == 0)) {
      stream->status = 0;
    }
  }
  else {
    if (uVar3 == 5) {
      FUN_00506638();
      uVar3 = 0;
      iVar2 = stream->handle;
      stream->status = 6;
    }
    if (iVar2 != 0) {
      if ((stream->pause & 0x8000U) == 0) {
        if ((uVar3 & 0x8000) != 0) {
          FUN_00505cfc(iVar2);
          stream->status = stream->status ^ 0x8000;
        }
      }
      else {
        if ((uVar3 & 0x8000) == 0) {
          FUN_00505f18(iVar2);
          stream->status = stream->status | 0x8000;
        }
        iVar2 = fastfunc::FastDecTimerS16(lVar1 + 0xe);
        if (iVar2 == 2) {
          stream->pause = 4;
        }
      }
      uVar3 = stream->status;
      if ((((uVar3 & 0x8000) == 0 && uVar3 != 1) && (uVar3 != 8)) && (uVar3 != 9)) {
        if ((uVar3 == 2) || (uVar3 == 3)) {
          if ((stream->handle != -1) && (uVar3 == 2)) {
            FUN_00505e98(stream->handle,&PTR_music_FreshenCB_00706db8,lVar1);
          }
        }
        else {
          iVar2 = stream->handle;
          stream->handle = -1;
          FUN_00505e08(iVar2,&PTR_music_TimeRemainingCB_00706df8,lVar1);
          FUN_005065dc(iVar2,&PTR_music_StopCB_00706de8,lVar1);
        }
      }
    }
  }
  return;
}



//==== 0011d088  ns=music  size=0x15c
// sig: int music_LoadFromHostWad(void * dest, int sector, int numSectors)
// callers(0): 
// callees(5): 00502dcc FUN_00502dcc; 00502dd4 stub::STUB_00502dd4; 00502ddc stub::STUB_00502ddc; 00502de0 stub::STUB_00502de0_RET_0; 005cd2a8 libc::snprintf
// strings: 00653174: 'host0:\\data\\game.wad'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int music::music_LoadFromHostWad(void *dest,int sector,int numSectors)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  char acStack_70 [72];
  
  if ((Music == 0) && (numSectors != 0)) {
    libc::snprintf(acStack_70,"host0:\\data\\game.wad");
    uVar1 = FUN_00502dcc(acStack_70,0);
    if ((int)uVar1 < 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = stub::STUB_00502de0_RET_0(uVar1,0,5);
      if ((numSectors + sector + -1) * 0x800 < iVar2) {
        stub::STUB_00502de0_RET_0(uVar1,sector << 0xb,6);
        iVar2 = numSectors << 0xb;
        iVar3 = stub::STUB_00502dd4(uVar1,dest,iVar2);
        if ((numSectors + -1) * 0x800 < iVar3) {
          stub::STUB_00502ddc(uVar1);
          Music = 1;
        }
        else {
          stub::STUB_00502ddc(uVar1);
          iVar2 = 0;
        }
      }
      else {
        stub::STUB_00502ddc(uVar1);
        iVar2 = 0;
      }
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



//==== 0011d1f0  ns=music  size=0x7f0
// sig: void LoadMusic(void)
// callers(2): 0011dbcc music::LoadMusic2; 0015be68 sound::sound_Update
// callees(12): 0011c1e8 music::music_StartSpeech; 0011cec8 music::music_UpdateStream; 004fff60 fastfunc::FastDecTimerS32; 00502dcc FUN_00502dcc; 00502dd4 stub::STUB_00502dd4; 00502ddc stub::STUB_00502ddc; 00502de0 stub::STUB_00502de0_RET_0; 00505cfc FUN_00505cfc; 005063b0 FUN_005063b0; 00506444 FUN_00506444; 005066bc stub::STUB_005066bc_RET_0; 005cd2a8 libc::snprintf
// strings: 0065300c: 'rc1/ps3data/level%d/music[%d].xvag' | 00653174: 'host0:\\data\\game.wad'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void music::LoadMusic(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar4;
  undefined8 uVar3;
  int iVar5;
  undefined8 in_LR;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  char acStack_470 [64];
  char acStack_430 [256];
  char acStack_330 [256];
  char acStack_230 [256];
  char acStack_130 [264];
  
  iVar4 = g_MusicPlaying.handle;
  if (g_FinishedLoading != '\0') {
    return;
  }
  if (Music != 0) {
    Music = Music + -1;
  }
  if (((g_MusicPlaying.pause & 0x8000U) == 0) && ((g_MusicPlaying.status & 0x8000U) == 0)) {
    if ((g_MusicPlaying.handle != 0) ||
       (((g_MusicPlaying.flags & 1U) == 0 || (g_PendingTrack != -1)))) {
      if (((g_MusicPlaying.status != 9) &&
          (((g_MusicPlaying.handle != 0 && (g_MusicPlaying.handle != -1)) &&
           (g_MusicPlaying.status == 8)))) &&
         ((g_MusicPlaying.status != 9 && (g_MusicPlaying.handle != -1)))) {
        g_MusicPlaying.status = 9;
        g_MusicPlaying.queuelen = 10;
        g_MusicPlaying.transition = 0;
        g_MusicPlaying.remain = 48000;
        libc::snprintf(acStack_230,"rc1/ps3data/level%d/music[%d].xvag",Level,
                       (longlong)g_MusicPlaying.track + 1);
        FUN_00506444(acStack_230,0,0,0,g_MusicPlaying.volume,0,1,iVar4);
      }
    }
    else {
      g_MusicPlaying.handle = -1;
      g_MusicPlaying.status = 1;
      g_MusicPlaying.queuelen = 10;
      g_MusicPlaying.transition = 0;
      g_MusicPlaying.remain = 48000;
      libc::snprintf(acStack_130,"rc1/ps3data/level%d/music[%d].xvag",Level,g_MusicPlaying.track);
      FUN_00506444(acStack_130,0,0,0,g_MusicPlaying.volume,0,1,0);
    }
  }
  iVar4 = fastfunc::FastDecTimerS32(&g_TransitionTimer);
  if (((iVar4 != 0) && (g_PendingTrack != -1)) && (g_TransitionState == 0)) {
    if ((int)g_MusicPlaying.track == (int)g_PendingTrack) {
      g_PendingTrack = -1;
    }
    else {
      if (MusicId != -1) {
        if (g_TransitionPlaying.handle != 0) goto LAB_0011d584;
        g_TransitionPlaying.track = (short)g_PendingTrack;
        g_TransitionPlaying.volume = g_MusicPlaying.volume;
        g_TransitionPlaying.handle = -1;
        g_TransitionPlaying.flags = g_MusicPlaying.flags;
        g_TransitionPlaying.status = 1;
        g_TransitionPlaying.queuelen = 10;
        g_TransitionPlaying.remain = 48000;
        g_TransitionPlaying.transition = 1;
        libc::snprintf(acStack_330,"rc1/ps3data/level%d/music[%d].xvag",Level,MusicId);
        FUN_00506444(acStack_330,0,0,0,g_TransitionPlaying.volume,0,1,0);
      }
      auVar6 = ZEXT416(0xffffffff);
      auVar6 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
      auVar7 = vectorShiftLeftIntegerWord(auVar6,auVar6);
      auVar6 = loadVectorLeftIndexed(in_LR,0x11d1e4);
      auVar8 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar7 = vectorMultiplyAddFloatingPoint
                         (auVar8,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar7);
      auVar6 = ZEXT416(0xffffffff);
      auVar8 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
      auVar6 = loadVectorLeftIndexed(4,0x11d1e4);
      auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar8 = vectorShiftLeftIntegerWord(auVar8,auVar8);
      auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
      auVar7 = vectorConvertFromSignedFixedPointWord(auVar7,0);
      auVar6 = vectorMultiplyAddFloatingPoint
                         (auVar7,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar8);
      auVar6 = vectorConvertToSignedFixedPointWordSaturate(auVar6,0);
      auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
      g_TransitionTimer =
           storeVectorElementWordIndexed
                     (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,0x2c,0x9636c8);
    }
  }
LAB_0011d584:
  if (-1 < g_PendingSpeech) {
    if (g_SpeechPlaying.handle == 0) {
      music_StartSpeech(g_PendingSpeech,0,0x400);
      g_PendingSpeech = -1;
    }
    else if (g_SpeechPlaying.status != 7 && g_SpeechPlaying.status != 6) {
      g_SpeechPlaying.status = 5;
    }
  }
  iVar4 = g_MusicPlaying.handle;
  if (((((g_MusicPlaying.status != 9) && (g_MusicPlaying.handle != -1)) &&
       ((g_MusicPlaying.pause & 0x8000U) == 0)) &&
      (((g_MusicPlaying.status & 0x8000U) == 0 && ((g_TransitionPlaying.pause & 0x8000U) == 0)))) &&
     ((g_TransitionPlaying.status & 0x8000U) == 0)) {
    if (g_TransitionState < 4) {
      if (1 < g_TransitionState) {
        if (g_TransitionState < 3) {
          iVar1 = ((int)g_MusicPlaying.volume *
                  (g_TransitionFadeTime - (g_TransitionRemainStart - g_TransitionPlaying.remain))) /
                  g_TransitionFadeTime;
          if (((iVar1 < 1) ||
              (((g_TransitionPlaying.status != 4 || (g_TransitionPlaying.transition == 0)) &&
               (g_TransitionPlaying.handle == 0)))) || (g_MusicPlaying.handle == 0)) {
            g_TransitionState = 3;
            g_MusicPlaying.status = 5;
          }
          else if (g_MusicPlaying.status != 9) {
            g_MusicPlaying.handle = -1;
            FUN_005063b0(iVar4,0xc,iVar1,0,0,0,&PTR_music_StopCB_00706de8,&g_MusicPlaying);
          }
        }
        else if ((g_MusicPlaying.status == 0) &&
                ((g_TransitionPlaying.transition != 0 || (g_TransitionPlaying.handle == 0)))) {
          if (g_MusicPlaying.handle == 0) {
            g_MusicPlaying.handle = -1;
            g_MusicPlaying.status = 1;
            g_MusicPlaying.track = (short)g_PendingTrack;
            g_MusicPlaying.queuelen = 10;
            g_MusicPlaying.remain = 48000;
            g_MusicPlaying.transition = 0;
            libc::snprintf(acStack_430,"rc1/ps3data/level%d/music[%d].xvag",Level);
            FUN_00506444(acStack_430,0,0,0,g_MusicPlaying.volume,0,1,0);
          }
          g_PendingTrack = -1;
          g_TransitionState = 4;
        }
      }
    }
    else if (g_TransitionState < 5) {
      if ((g_MusicPlaying.status == 3) &&
         (((g_TransitionPlaying.remain < g_TransitionFadeTime || (g_TransitionPlaying.status != 4))
          || ((g_TransitionPlaying.transition == 0 && (g_TransitionPlaying.handle == 0)))))) {
        FUN_00505cfc(g_MusicPlaying.handle);
        g_MusicPlaying.status = 8;
        g_TransitionState = 5;
      }
    }
    else if ((g_TransitionState < 6) &&
            ((g_TransitionPlaying.status != 4 || (g_TransitionPlaying.transition == 0)))) {
      g_TransitionState = 0;
    }
  }
  music_UpdateStream(&g_MusicPlaying);
  music_UpdateStream(&g_TransitionPlaying);
  music_UpdateStream(&g_SpeechPlaying);
  uVar2 = DAT_009636dc;
  iVar1 = DAT_009636d8;
  iVar4 = DAT_009636d4;
  if (DAT_009636d2 == '\0') {
    if (Music == 2) {
      Music = 0;
      if (DAT_009636d8 != 0) {
        libc::snprintf(acStack_470,"host0:\\data\\game.wad");
        uVar3 = FUN_00502dcc(acStack_470,0);
        if (-1 < (int)uVar3) {
          iVar5 = stub::STUB_00502de0_RET_0(uVar3,0,5);
          if ((iVar1 + iVar4 + -1) * 0x800 < iVar5) {
            stub::STUB_00502de0_RET_0(uVar3,iVar4 << 0xb,6);
            iVar4 = stub::STUB_00502dd4(uVar3,uVar2,iVar1 << 0xb);
            if ((iVar1 + -1) * 0x800 < iVar4) {
              stub::STUB_00502ddc(uVar3);
              Music = 1;
            }
            else {
              stub::STUB_00502ddc(uVar3);
            }
          }
          else {
            stub::STUB_00502ddc(uVar3);
          }
        }
      }
      if (Music == 0) {
        Music = 2;
      }
    }
  }
  else {
    iVar4 = stub::STUB_005066bc_RET_0(1);
    if (iVar4 == 0) {
      Music = 0;
      DAT_009636d2 = '\0';
    }
  }
  return;
}



//==== 0011d9e0  ns=music  size=0x48
// sig: void music_StopLoad(void)
// callers(12): 0013ea78 pause::ClearMenuQueue; 00142d68 pause::MapPage_OnExit; 00144548 pause::MusicWidget_OnExit; 0014876c pause::ImageWidget_OnExit; 0014b820 pause::MessageBox_OnExit; 0014deb8 pause::SaveLoad_OnExit; 0014f1f0 pause::SpawnHeroInMenu?; 0014f508 pause::UpdateAfterEquipGadget; 0014f828 pause::MenuHero_Update; 00151548 pause::GameComplete_OnExit; 00169b14 update::mode_creditsUnInit; 00169b88 update::UpdateCredits
// callees(1): 00506660 FUN_00506660

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void music::music_StopLoad(void)

{
  if (Music != 0) {
    FUN_00506660();
    DAT_009636d2 = 1;
  }
  return;
}



//==== 0011da28  ns=music  size=0x2c
// sig: void music_Reset(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void music::music_Reset(void)

{
  DAT_009636c0 = 0;
  DAT_009636c4 = 0;
  g_FinishedLoading = 1;
  Music = 0;
  return;
}



//==== 0011da54  ns=music  size=0x178
// sig: int music_LoadFromHostWad_v2(void * dest, int sector, int numSectors)
// callers(0): 
// callees(5): 00502dcc FUN_00502dcc; 00502dd4 stub::STUB_00502dd4; 00502ddc stub::STUB_00502ddc; 00502de0 stub::STUB_00502de0_RET_0; 005cd2a8 libc::snprintf
// strings: 00653174: 'host0:\\data\\game.wad'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int music::music_LoadFromHostWad_v2(void *dest,int sector,int numSectors)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  char acStack_70 [64];
  
  if ((Music == 0) && (numSectors != 0)) {
    libc::snprintf(acStack_70,"host0:\\data\\game.wad");
    uVar1 = FUN_00502dcc(acStack_70,0);
    if ((int)uVar1 < 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = stub::STUB_00502de0_RET_0(uVar1,0,5);
      if ((numSectors + sector + -1) * 0x800 < iVar2) {
        stub::STUB_00502de0_RET_0(uVar1,sector << 0xb,6);
        iVar2 = numSectors << 0xb;
        iVar3 = stub::STUB_00502dd4(uVar1,dest,iVar2);
        if ((numSectors + -1) * 0x800 < iVar3) {
          stub::STUB_00502ddc(uVar1);
          Music = 1;
          if (iVar2 != 0) {
            Music = 0;
          }
        }
        else {
          stub::STUB_00502ddc(uVar1);
          iVar2 = 0;
        }
      }
      else {
        stub::STUB_00502ddc(uVar1);
        iVar2 = 0;
      }
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



//==== 0011dbcc  ns=music  size=0x48
// sig: void LoadMusic2(int block)
// callers(9): 00011b74 boot::Load_Front_End; 000e0528 loaders::LoadWeaponCutscene; 000e06b0 loaders::LoadSpaceScene; 000e7638 memcard::memcard_ResetGame; 00161788 space::UpdateSpace; 00167e60 update::mode_sceneInit; 00168768 update::UpdateScene; 001698a0 update::mode_creditsInit; 00169b88 update::UpdateCredits
// callees(4): 0011d1f0 music::LoadMusic; 00505d20 stub::STUB_00505d20; 00505f4c stub::STUB_00505f4c; 00505f50 stub::STUB_00505f50

void music::LoadMusic2(int block)

{
  LoadMusic();
  stub::STUB_00505f4c();
  stub::STUB_00505d20();
  stub::STUB_00505f50();
  Music = 0;
  return;
}



//==== 0011dc14  ns=music  size=0x5c
// sig: void music_CdCB(int reason)
// callers(0): 
// callees(1): 005066ac FUN_005066ac

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void music::music_CdCB(int reason)

{
  int iVar1;
  
  if ((reason < 0xb) && (reason == 5)) {
    Music = 0;
    iVar1 = FUN_005066ac();
    if (iVar1 != 4) {
      Music = 2;
    }
  }
  return;
}



//==== 0011dc70  ns=music  size=0x28
// sig: void music_FreshenCB(int ret_val, music_Playing * mp)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void music::music_FreshenCB(int ret_val,music_Playing *mp)

{
  if (((mp != (music_Playing *)0x0) && (ret_val != 0)) && (mp->status == 2)) {
    mp->status = 3;
  }
  return;
}



//==== 0011dc98  ns=music  size=0x6c
// sig: void music_SpeechPreseekCB(int ret_val, music_Playing * mp)
// callers(0): 
// callees(1): 0011c1e8 music::music_StartSpeech

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void music::music_SpeechPreseekCB(int ret_val,music_Playing *mp)

{
  if (mp != (music_Playing *)0x0) {
    mp->handle = ret_val;
    if (ret_val == 0) {
      music_StartSpeech((int)g_SpeechPlaying.track,(int)g_SpeechPlaying.flags,
                        (int)g_SpeechPlaying.volume);
    }
    else if (mp->status == 1) {
      mp->status = 2;
    }
  }
  return;
}



//==== 0011dd04  ns=music  size=0x114
// sig: void music_PreseekCB(int ret_val, music_Playing * mp)
// callers(0): 
// callees(2): 00506444 FUN_00506444; 005cd2a8 libc::snprintf
// strings: 0065300c: 'rc1/ps3data/level%d/music[%d].xvag'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void music::music_PreseekCB(int ret_val,music_Playing *mp)

{
  char acStack_110 [256];
  
  if (mp != (music_Playing *)0x0) {
    mp->handle = ret_val;
    if (ret_val == 0) {
      if (g_MusicPlaying.handle == 0) {
        g_MusicPlaying.handle = -1;
        g_MusicPlaying.status = 1;
        g_MusicPlaying.transition = 0;
        g_MusicPlaying.queuelen = 10;
        g_MusicPlaying.remain = 48000;
        libc::snprintf(acStack_110,"rc1/ps3data/level%d/music[%d].xvag",Level,g_MusicPlaying.track);
        FUN_00506444(acStack_110,0,0,0,g_MusicPlaying.volume,0,1,0);
      }
    }
    else if (mp->status == 1) {
      mp->status = 2;
    }
  }
  return;
}



//==== 0011de18  ns=music  size=0x54
// sig: void music_StartCB(int ret_val, music_Playing * mp)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void music::music_StartCB(int ret_val,music_Playing *mp)

{
  if (mp != (music_Playing *)0x0) {
    mp->handle = ret_val;
    if (ret_val == 0) {
      mp->status = 0;
    }
    else if ((mp->status == 1) && (mp->status = 4, mp->transition != 0)) {
      g_TransitionState = 1;
    }
  }
  return;
}



//==== 0011de6c  ns=music  size=0x60
// sig: void music_StartBodyCB(int ret_val, music_Playing * mp)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void music::music_StartBodyCB(int ret_val,music_Playing *mp)

{
  if (mp != (music_Playing *)0x0) {
    if ((ret_val & 0x80000000U) != 0) {
      mp->handle = ret_val;
    }
    if (ret_val == 0) {
      mp->status = 0;
    }
    else if ((mp->status == 9) && (mp->status = 4, mp->transition != 0)) {
      g_TransitionState = 1;
    }
  }
  return;
}



//==== 0011decc  ns=music  size=0x38
// sig: void music_PreseekTrackCB(int ret_val, music_Playing * mp)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void music::music_PreseekTrackCB(int ret_val,music_Playing *mp)

{
  if (mp != (music_Playing *)0x0) {
    mp->handle = ret_val;
    if (ret_val == 0) {
      mp->status = 0;
    }
    else if (mp->status == 1) {
      mp->status = 8;
    }
  }
  return;
}



//==== 0011df04  ns=music  size=0x58
// sig: int music_StopCB(int ret_val, music_Playing * mp)
// callers(0): 
// callees(1): 005cd098 libc::printf
// strings: 0065318c: 'wtf\n' (raw)

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int music::music_StopCB(int ret_val,music_Playing *mp)

{
  if (mp != (music_Playing *)0x0) {
    if (mp->handle == -1) {
      mp->handle = ret_val;
      if (ret_val == 0) {
        ret_val = 7;
        mp->status = 7;
      }
    }
    else {
      ret_val = libc::printf("wtf\n");
    }
  }
  return ret_val;
}



//==== 0011df5c  ns=music  size=0x10
// sig: void music_QueueLengthCB(int ret_val, music_Playing * mp)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void music::music_QueueLengthCB(int ret_val,music_Playing *mp)

{
  if (mp != (music_Playing *)0x0) {
    mp->queuelen = ret_val;
  }
  return;
}



//==== 0011df6c  ns=music  size=0x58
// sig: void music_TimeRemainingCB(int ret_val, music_Playing * mp)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void music::music_TimeRemainingCB(int ret_val,music_Playing *mp)

{
  uint uVar1;
  
  if (mp != (music_Playing *)0x0) {
    mp->remain = ret_val;
    if (((mp->transition != 0) && (g_TransitionState == 1)) && (ret_val != 0)) {
      g_TransitionState = 2;
      g_TransitionRemainStart = mp->remain;
      uVar1 = mp->remain;
      g_TransitionFadeTime = ((int)uVar1 >> 2) + (uint)((int)uVar1 < 0 && (uVar1 & 3) != 0);
    }
  }
  return;
}



//==== 0011dfc8  ns=pad  size=0x18
// sig: void InitPadRing(void)
// callers(3): 00011648 boot::LoadGameplay; 000a0c38 hero::Hero_Warp; 000dcf58 loaders::NAVG_LoadFile
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pad::InitPadRing(void)

{
  g_PadRingIndex = 0;
  g_PadRingValidSize = 0;
  return;
}



//==== 0011dfe0  ns=pad  size=0xc4
// sig: int PadRingBitsOn(int bits, int frames, int * pFrame)
// callers(9): 00087a88 hero::Hero_UpdateTimers; 000a30e0 hero::???_Hero_UpdateWeaponInput; 000a4950 hero::Hero_JumpOrSnapJumpCheck; 000a56d8 hero::Hero_CrouchJumpTransitions; 000aaec0 hero::HandleHeroMovement; 000be228 hero::HeroMovement; 002288c8 mobyupdate_unsorted::UpdateMoby_1251; 00314818 mobyupdate_unsorted::UpdateMoby_247; 0032adf8 mobyupdate_unsorted::UpdateMoby_280
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pad::PadRingBitsOn(int bits,int frames,int *pFrame)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 1;
  iVar2 = g_PadRingValidSize +
          ((uint)((longlong)frames - (longlong)g_PadRingValidSize >> 0x3f) &
          frames - g_PadRingValidSize) + 1;
  if (1 < iVar2) {
    do {
      iVar1 = (((g_PadRingIndex - iVar3) + 0x1e) % 0x1e) * 4;
      uVar4 = *(uint *)(&g_PadRingBits + iVar1);
      if ((uVar4 & bits) != 0) {
        if (pFrame != (int *)0x0) {
          *pFrame = iVar3 + -1;
          uVar4 = *(uint *)(&g_PadRingBits + iVar1);
        }
        return uVar4 & bits;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return 0;
}



//==== 0011e0a4  ns=pad  size=0x1bc
// sig: int PadRingCoincidentBitsOn(int bits1, int bits2, int frames, int window)
// callers(3): 000a4950 hero::Hero_JumpOrSnapJumpCheck; 000a56d8 hero::Hero_CrouchJumpTransitions; 000be228 hero::HeroMovement
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pad::PadRingCoincidentBitsOn(int bits1,int bits2,int frames,int window)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  iVar2 = 1;
  iVar1 = g_PadRingValidSize +
          ((uint)((longlong)frames - (longlong)g_PadRingValidSize >> 0x3f) &
          frames - g_PadRingValidSize) + 1;
  if (iVar1 < 2) {
    return 0;
  }
  do {
    iVar3 = (g_PadRingIndex - iVar2) + 0x1e;
    if ((*(uint *)(&g_PadRingBits + iVar3 * 4 + (iVar3 / 0x1e) * -0x78) & bits1) != 0) {
      iVar3 = 1;
      if (iVar1 < 2) {
        return 0;
      }
      do {
        iVar4 = (g_PadRingIndex - iVar3) + 0x1e;
        if ((*(uint *)(&g_PadRingBits + iVar4 * 4 + (iVar4 / 0x1e) * -0x78) & bits2) != 0) {
          iVar1 = (iVar2 + -1 +
                  ((uint)((LZCOUNT(-(int)auStack_20) << 0x3a) >> 0x3f) & iVar2 - (iVar2 + -1))) -
                  (iVar3 + -1 +
                  ((uint)((LZCOUNT(-(int)auStack_1c) << 0x3a) >> 0x3f) & iVar2 - (iVar3 + -1)));
          if (window <= iVar1 + (iVar1 >> 0x1f & iVar1 * -2)) {
            return 0;
          }
          return 1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < iVar1);
  return 0;
}



//==== 0011e260  ns=pad  size=0x74
// sig: float PadRingAng(int frames)
// callers(1): 000be228 hero::HeroMovement
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float pad::PadRingAng(int frames)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = ((longlong)g_PadRingIndex -
          ((ulonglong)g_PadRingValidSize +
          ((longlong)frames - (longlong)(int)g_PadRingValidSize >> 0x3f &
          (longlong)frames - (ulonglong)g_PadRingValidSize))) + 0x1e;
  uVar2 = (uint)lVar1;
  return *(float *)(&g_PadRingAng +
                   (int)(lVar1 + ((longlong)((int)uVar2 / 0x1e + ((int)uVar2 >> 0x1f)) +
                                 (ulonglong)(uVar2 >> 0x1f)) * -0x1e) * 4);
}



//==== 0011e2d4  ns=pad  size=0xec
// sig: void UpdatePad(void)
// callers(8): 00012048 boot::PrepareFrontbin; 00012ec8 boot::GameStart; 000e0e60 main::startLevel; 000e8ca0 memcard::memcard_RestoreSaveGame; 001643e0 space::PlaySpaceMovie; 00164c58 space::DoSpaceTransition; 0016963c update::PlayMovieBlocking; 0016974c update::UpdateCinematic
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pad::UpdatePad(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  iVar3 = 0;
  do {
    puVar4 = &g_PadPorts + iVar3 * 0x159;
                    /* Calls PAD_PS_Update function */
    (*(code *)**(undefined4 **)(*g_pPadDriver + 0x10))(g_pPadDriver,iVar3,puVar4);
    if ((&DAT_009655dc)[iVar3 * 0x159] != 0) {
      lVar5 = 0xac;
      iVar3 = 0;
      do {
        iVar2 = iVar3;
        uVar1 = *(undefined4 *)((int)puVar4 + iVar2 + 4);
        *(undefined4 *)((int)&ANALOG_STICKS.x + iVar2) = *(undefined4 *)((int)puVar4 + iVar2);
        *(undefined4 *)((int)&ANALOG_STICKS.y + iVar2) = uVar1;
        lVar5 = lVar5 + -1;
        iVar3 = iVar2 + 8;
      } while (lVar5 != 0);
      *(undefined4 *)((int)&ANALOG_STICKS.z + iVar2) = *(undefined4 *)((int)puVar4 + iVar2 + 8);
      return;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  return;
}



//==== 0011e3c0  ns=pad  size=0x44
// sig: void pad_Init(void)
// callers(1): 000d8be8 initonce::InitOnce
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pad::pad_Init(void)

{
  (*(code *)**(undefined4 **)(*g_pPadDriver + 8))();
  return;
}



//==== 0011e404  ns=pad  size=0x44
// sig: void pad_Shutdown(void)
// callers(1): 00013a20 boot::GameShutDown
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pad::pad_Shutdown(void)

{
  (*(code *)**(undefined4 **)(*g_pPadDriver + 0xc))();
  return;
}



//==== 0011e448  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_PARTPROC(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_PARTPROC(void)

{
  DAT_00729624 = 0x10000;
  return;
}



//==== 0011e45c  ns=partproc  size=0x11c
// sig: undefined UpdatePartsDebug(void)
// callers(0): 
// callees(3): 0011e8a0 partproc::UpdateParts; 0011eb10 partproc::UpdateParts_NotUsed; 005cd098 libc::printf
// strings: 006531a4: '*** frame %d ***\n' | 006531bc: 'class: %d\tcount: %d\tcycles: %d\n'

ulonglong partproc::UpdatePartsDebug(void)

{
  uint uVar1;
  ulonglong uVar2;
  int32_t iVar3;
  uint *puVar4;
  int iVar5;
  
  if (((g_downButtons & (R1|R2|L2)) == (R1|R2|L2)) && ((g_buttonsPressedThisFrame & L1) != 0)) {
    libc::printf("\n");
    libc::printf("*** frame %d ***\n",DAT_0159c330);
    libc::printf("\n");
    *DAT_009271fc = 0x81;
    UpdateParts_NotUsed();
    iVar5 = 0;
    puVar4 = (uint *)&DAT_11004000;
    do {
      uVar1 = *puVar4;
      uVar2 = (ulonglong)uVar1;
      if (uVar1 != 0) {
        iVar3 = libc::printf("class: %d\tcount: %d\tcycles: %d\n",iVar5,uVar1,
                             (int)(puVar4[1] << 5) / (int)uVar1);
        uVar2 = (ulonglong)iVar3;
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 2;
    } while (iVar5 < 0x80);
  }
  else {
    uVar2 = UpdateParts();
  }
  return uVar2;
}



//==== 0011e580  ns=partproc  size=0x148
// sig: PartInstance * CreatePartEx(int idx, int arg)
// callers(2): 0011e6c8 partproc::CreatePart; 00123ec8 partupd::SpawnPart_12
// callees(0): 

PartInstance * partproc::CreatePartEx(int idx,int arg)

{
  undefined4 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  PartInstance *pPVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar4 = PartIndexNext;
  if ((int)PartIndexNext < 0x1000) {
    uVar6 = PartIndexNext + 1;
    iVar8 = (int)PartIndexNext >> 3;
    uVar2 = PartIndexNext & 7;
    PartActiveCnt = PartActiveCnt + 1;
    PartIndexNext = uVar6;
    (&DAT_00a52000)[iVar8] = (&DAT_00a52000)[iVar8] | (byte)(1 << uVar2);
    if ((int)uVar6 <= PartIndexTop) {
      PartIndexNext = uVar6 & 0xfffffff8;
      iVar8 = (int)uVar6 >> 3;
      while (uVar6 = PartIndexNext, (int)PartIndexNext < 0x1000) {
        uVar7 = 1;
        do {
          uVar6 = PartIndexNext;
          if (((uint)uVar7 & (uint)(byte)(&DAT_00a52000)[iVar8]) == 0) goto LAB_0011e650;
          PartIndexNext = PartIndexNext + 1;
          uVar3 = uVar7 & 0x7f;
          uVar7 = (uVar7 & 0x7fffffff) << 1;
        } while (uVar3 != 0);
        iVar8 = iVar8 + 1;
      }
    }
LAB_0011e650:
    iVar8 = uVar6 - 1;
    pPVar5 = (PartInstance *)((int)PartInstances + uVar4 * 0x40);
    PartIndexTop = iVar8 + ((uint)((longlong)iVar8 - (longlong)PartIndexTop >> 0x3f) &
                           PartIndexTop - iVar8);
    puVar1 = (undefined4 *)((uint)pPVar5 & 0xfffffff0);
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1 = (undefined4 *)((uint)&pPVar5->pos & 0xfffffff0);
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1 = (undefined4 *)((uint)pPVar5->update & 0xfffffff0);
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1 = (undefined4 *)((uint)(pPVar5->update + 4) & 0xfffffff0);
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    pPVar5->iClass = (char)idx;
  }
  else {
    pPVar5 = (PartInstance *)0x0;
  }
  return pPVar5;
}



//==== 0011e6c8  ns=partproc  size=0x24
// sig: PartInstance * CreatePart(int idx)
// callers(79): 0011ffb0 partupd::SpawnPart_0; 001204c0 partupd::SpawnPart_1; 001206e8 partupd::SpawnPart_2; 00120cc8 partupd::SpawnPart_3; 00121740 partupd::SpawnPart_4; 00121a40 partupd::SpawnPart_5; 00121c28 partupd::SpawnPart_6; 001227d0 partupd::SpawnPart_7; 001229a8 partupd::SpawnPart_8; 00122c70 partupd::SpawnPart_9; 00123048 partupd::SpawnPart_10; 00123390 partupd::SpawnPart_11; 001246b8 partupd::SpawnPart_13; 00124aa0 partupd::SpawnPart_14; 00124e10 partupd::SpawnPart_15; 00125350 partupd::SpawnPart_16; 001259b8 partupd::SpawnPart_18; 00125e08 partupd::SpawnPart_19; 00126038 partupd::SpawnPart_20; 001268f8 partupd::SpawnPart_21; 00126dd8 partupd::SpawnPart_22; 00126f50 partupd::SpawnPart_23; 001275b8 partupd::SpawnPart_24; 00127918 partupd::SpawnPart_25; 00127ea8 partupd::SpawnPart_26
// callees(1): 0011e580 partproc::CreatePartEx

PartInstance * partproc::CreatePart(int idx)

{
  PartInstance *pPVar1;
  
  pPVar1 = CreatePartEx(idx,0);
  return pPVar1;
}



//==== 0011e6ec  ns=partproc  size=0x104
// sig: undefined DeletePart(undefined4 idx)
// callers(87): 0011f918 partupd::UpdatePart_22; 00120258 partupd::UpdatePart_0; 001205f0 partupd::UpdatePart_1; 00120918 partupd::UpdatePart_2; 00120f48 partupd::UpdatePart_3; 001218d8 partupd::UpdatePart_4; 00121b70 partupd::UpdatePart_5; 00121f10 partupd::UpdatePart_6; 001228f8 partupd::UpdatePart_7; 00122ae8 partupd::UpdatePart_8; 00122ec0 partupd::UpdatePart_9; 001231d0 partupd::UpdatePart_10; 00123768 partupd::UpdatePart_11; 00124308 partupd::UpdatePart_12; 001248c0 partupd::UpdatePart_13; 00124c88 partupd::UpdatePart_14; 00124fd0 partupd::UpdatePart_15; 001255d8 partupd::UpdatePart_16; 00125c48 partupd::UpdatePart_18; 00125f58 partupd::UpdatePart_19; 00126398 partupd::UpdatePart_20; 00126a70 partupd::UpdatePart_21; 001271c0 partupd::UpdatePart_23; 001277b8 partupd::UpdatePart_24; 00127ae0 partupd::UpdatePart_25
// callees(0): 

void partproc::DeletePart(int idx)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = idx - (int)PartInstances;
  uVar3 = ((int)uVar3 >> 6) + (uint)((int)uVar3 < 0 && (uVar3 & 0x3f) != 0);
  PartActiveCnt = PartActiveCnt + -1;
  (&DAT_00a52000)[(int)uVar3 >> 3] =
       (&DAT_00a52000)[(int)uVar3 >> 3] & ((byte)(1 << (uVar3 & 7)) ^ 0xff);
  if ((PartIndexTop == uVar3) && (uVar4 = PartIndexTop - 1, PartIndexTop = uVar4, -1 < (int)uVar4))
  {
    uVar5 = 1 << (uVar4 & 7);
    bVar1 = (&DAT_00a52000)[(int)uVar4 >> 3];
    iVar2 = (int)uVar4 >> 3;
    while( true ) {
      for (; uVar5 != 0; uVar5 = (int)uVar5 >> 1) {
        if ((uVar5 & bVar1) != 0) goto LAB_0011e7bc;
        uVar4 = uVar4 - 1;
        PartIndexTop = uVar4;
      }
      if ((int)uVar4 < 0) break;
      uVar5 = 0x80;
      bVar1 = *(byte *)(iVar2 + 0xa51fff);
      iVar2 = iVar2 + -1;
    }
  }
LAB_0011e7bc:
  *(undefined1 *)(idx + 1) = 0x80;
  PartIndexNext =
       uVar3 + ((uint)((longlong)PartIndexNext - (longlong)(int)uVar3 >> 0x3f) &
               PartIndexNext - uVar3);
  return;
}



//==== 0011e7f0  ns=partproc  size=0x64
// sig: undefined CountActiveParts(void)
// callers(0): 
// callees(0): 

int partproc::CountActiveParts(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar2 = 0;
  if (0 < PartIndexTop >> 3) {
    do {
      iVar3 = iVar1 + 1;
      iVar2 = iVar2 + (uint)(byte)(&DAT_00735570)[(byte)(&DAT_00a52000)[iVar1] & 0xf] +
              (uint)(byte)(&DAT_00735570)[(byte)(&DAT_00a52000)[iVar1] >> 4];
      iVar1 = iVar3;
    } while (iVar3 < PartIndexTop >> 3);
  }
  return iVar2;
}



//==== 0011e8a0  ns=partproc  size=0x270
// sig: undefined UpdateParts(void)
// callers(5): 0011e45c partproc::UpdatePartsDebug; 00161788 space::UpdateSpace; 00166fb0 update::UpdateGameplay; 00168768 update::UpdateScene; 0016da88 vendor::Vendor_PreUpdate
// callees(0): 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void partproc::UpdateParts(void)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
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
  
  auVar6 = *(undefined1 (*) [16])(DAT_00902e9c + 0xa0U & 0xfffffff0);
  auVar7 = *(undefined1 (*) [16])(DAT_00902e9c + 0xb0U & 0xfffffff0);
  auVar8 = *(undefined1 (*) [16])(DAT_00902e9c + 0xc0U & 0xfffffff0);
  auVar12 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar9 = *(undefined1 (*) [16])(DAT_00902e9c + 0xd0U & 0xfffffff0);
  auVar5 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar14 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar10 = loadVectorLeftIndexed(0x10,0x11e860);
  auVar11 = loadVectorLeftIndexed(0x14,0x11e860);
  DAT_00a52b40 = storeVectorElementWordIndexed
                           (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,0x2b40,
                            0xa50000);
  DAT_00a52b44 = storeVectorElementWordIndexed
                           (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,4,0xa52b40);
  DAT_00a52b48 = storeVectorElementWordIndexed
                           (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,8,0xa52b40
                           );
  DAT_00a52b4c = 0;
  auVar12 = vectorPermute(auVar6,auVar8,_DAT_0011e880);
  auVar14 = vectorPermute(auVar7,auVar9,_DAT_0011e880);
  auVar16 = vectorPermute(auVar7,auVar8,_DAT_0011e880);
  auVar17 = vectorPermute(auVar9,auVar6,_DAT_0011e880);
  auVar5 = vectorPermute(auVar8,auVar9,_DAT_0011e880);
  auVar13 = vectorMergeHighWord(auVar12,auVar14);
  auVar12 = ZEXT416(0);
  auVar15 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  auVar16 = vectorPermute(auVar16,auVar17,_DAT_0011e860);
  auVar14 = vectorPermute(auVar6,auVar7,_DAT_0011e880);
  auVar17 = vectorMultiplyAddFloatingPoint(auVar13,auVar13,auVar15);
  auVar12 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar10 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  auVar5 = vectorPermute(auVar5,auVar14,_DAT_0011e860);
  auVar12 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar11 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  auVar12 = vectorMultiplyAddFloatingPoint(auVar16,auVar16,auVar17);
  auVar12 = vectorMultiplyAddFloatingPoint(auVar5,auVar5,auVar12);
  auVar12 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  auVar5 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar12);
  auVar12 = vectorMultiplyAddFloatingPoint(auVar5,auVar12,auVar15);
  auVar14 = vectorMultiplyAddFloatingPoint(auVar5,auVar10,auVar15);
  auVar12 = vectorNegativeMultiplySubtractFloatingPoint(auVar5,auVar12,auVar11);
  auVar12 = vectorMultiplyAddFloatingPoint(auVar12,auVar14,auVar5);
  auVar14 = vectorCompareEqualToFloatingPoint(auVar12,auVar12);
  auVar12 = vectorConditionalSelect(auVar5,auVar12,auVar14);
  auVar14 = vectorMultiplyAddFloatingPoint(auVar13,auVar12,auVar15);
  auVar12 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar5 = auVar14 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar14 = auVar14 >> 0x20 & (undefined1  [16])0xffffffff;
  DAT_00a52b50 = storeVectorElementWordIndexed
                           (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,0x2b50,
                            0xa50000);
  DAT_00a52b54 = storeVectorElementWordIndexed
                           (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,4,0xa52b50);
  DAT_00a52b58 = storeVectorElementWordIndexed
                           (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,8,0xa52b50
                           );
  DAT_00a52b5c = 0;
  auVar14 = vectorPermute(auVar6,auVar8,_DAT_0011e890);
  auVar13 = vectorPermute(auVar7,auVar9,_DAT_0011e890);
  auVar16 = vectorPermute(auVar7,auVar8,_DAT_0011e890);
  auVar12 = vectorPermute(auVar9,auVar6,_DAT_0011e890);
  auVar5 = vectorPermute(auVar6,auVar7,_DAT_0011e890);
  auVar6 = vectorMergeHighWord(auVar14,auVar13);
  auVar14 = vectorPermute(auVar8,auVar9,_DAT_0011e890);
  auVar7 = vectorPermute(auVar16,auVar12,_DAT_0011e860);
  auVar8 = vectorMultiplyAddFloatingPoint(auVar6,auVar6,auVar15);
  auVar12 = vectorPermute(auVar14,auVar5,_DAT_0011e860);
  auVar5 = vectorMultiplyAddFloatingPoint(auVar7,auVar7,auVar8);
  auVar12 = vectorMultiplyAddFloatingPoint(auVar12,auVar12,auVar5);
  auVar12 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  auVar5 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar12);
  auVar12 = vectorMultiplyAddFloatingPoint(auVar5,auVar12,auVar15);
  auVar14 = vectorMultiplyAddFloatingPoint(auVar5,auVar10,auVar15);
  auVar12 = vectorNegativeMultiplySubtractFloatingPoint(auVar5,auVar12,auVar11);
  auVar12 = vectorMultiplyAddFloatingPoint(auVar12,auVar14,auVar5);
  auVar14 = vectorCompareEqualToFloatingPoint(auVar12,auVar12);
  auVar12 = vectorConditionalSelect(auVar5,auVar12,auVar14);
  auVar14 = vectorMultiplyAddFloatingPoint(auVar6,auVar12,auVar15);
  auVar12 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar5 = auVar14 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar14 = auVar14 >> 0x20 & (undefined1  [16])0xffffffff;
  DAT_00a52b60 = storeVectorElementWordIndexed
                           (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,0x2b60,
                            0xa50000);
  DAT_00a52b64 = storeVectorElementWordIndexed
                           (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,4,0xa52b60);
  DAT_00a52b68 = storeVectorElementWordIndexed
                           (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,8,0xa52b60
                           );
  DAT_00a52b6c = 0;
  auVar14 = *(undefined1 (*) [16])(DAT_00902e9c + 0x20U & 0xfffffff0);
  auVar12 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar5 = auVar14 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar14 = auVar14 >> 0x20 & (undefined1  [16])0xffffffff;
  DAT_00a52b70 = storeVectorElementWordIndexed
                           (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,0x2b70,
                            0xa50000);
  DAT_00a52b74 = storeVectorElementWordIndexed
                           (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,4,0xa52b70);
  DAT_00a52b78 = storeVectorElementWordIndexed
                           (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,8,0xa52b70
                           );
  DAT_00a52b7c = 0;
  if (-1 < PartIndexTop) {
    iVar4 = 0;
    iVar3 = 0;
    iVar1 = PartIndexTop;
    do {
      pbVar2 = (byte *)((int)PartInstances + iVar4);
      if (-1 < (char)pbVar2[1]) {
        (**(code **)PartUpdates[*pbVar2])(pbVar2);
        iVar1 = PartIndexTop;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x40;
    } while (iVar3 <= iVar1);
  }
  return;
}



//==== 0011eb10  ns=partproc  size=0xb4
// sig: undefined UpdateParts_NotUsed(void)
// callers(1): 0011e45c partproc::UpdatePartsDebug
// callees(0): 

void partproc::UpdateParts_NotUsed(void)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (-1 < PartIndexTop) {
    iVar4 = 0;
    iVar1 = PartIndexTop;
    do {
      pbVar2 = (byte *)((int)PartInstances + iVar4);
      if (-1 < (char)pbVar2[1]) {
        (**(code **)PartUpdates[*pbVar2])(pbVar2);
        iVar1 = PartIndexTop;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x40;
    } while (iVar3 <= iVar1);
  }
  return;
}



//==== 0011ebc4  ns=partproc  size=0x2f4
// sig: undefined ???_DrawParts_DepthPass(void)
// callers(1): 0011ef18 partproc::DrawParts
// callees(1): 004d5fe4 idol_draw::DrawDepth

void partproc::____DrawParts_DepthPass(longlong param_1,int *param_2)

{
  bool bVar1;
  RsxCmd *pRVar2;
  int iVar3;
  RsxCmd RVar4;
  RenderingStep *pRVar5;
  ulonglong uVar6;
  RsxCmd RVar8;
  ulonglong uVar7;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  
  iVar3 = DAT_00a52b80;
  pRVar5 = DL_Pass;
  iVar12 = *param_2;
  bVar1 = DAT_00a52b80 != 0;
  *param_2 = iVar12 + (int)(param_1 << 5) * 3;
  if (bVar1) {
    idol_draw::DrawDepth(pRVar5,(longlong)iVar3);
  }
  pRVar2 = DAT_00a52b84;
  *pRVar5->command = NV4097_SET_TEXTURE_OFFSET_x7;
  pRVar5->command[1] = *pRVar2;
  pRVar5->command[2] = pRVar2[1];
  pRVar5->command[3] = 0x10303;
  pRVar5->command[4] = pRVar2[3];
  pRVar5->command[5] = pRVar2[4];
  pRVar5->command[6] = pRVar2[5];
  pRVar5->command[7] = pRVar2[6];
  pRVar5->command[8] = (RsxCmd)&DAT_00041840;
  pRVar5->command[9] = pRVar2[7];
  pRVar2 = pRVar5->command;
  pRVar5->command = pRVar2 + 10;
  iVar3 = *(int *)(g_viewMtxPtr + 0x4a8);
  pRVar2[10] = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
  RVar8 = iVar12 - iVar3;
  pRVar5->command[1] = RVar8 | 0x80000000;
  pRVar2 = pRVar5->command;
  pRVar5->command = pRVar2 + 2;
  pRVar2[2] = 0x41684;
  pRVar5->command[1] = RVar8 + 0xc | 0x80000000;
  pRVar2 = pRVar5->command;
  pRVar5->command = pRVar2 + 2;
  pRVar2[2] = 0x4168c;
  uVar9 = param_1 * 4 - 0x100;
  uVar10 = (uVar9 & (longlong)((int)uVar9 >> 0x1f)) + 0x100;
  pRVar5->command[1] = RVar8 + 0x14 | 0x80000000;
  pRVar2 = pRVar5->command;
  pRVar5->command = pRVar2 + 2;
  pRVar2[2] = 0x400c1714;
  uVar6 = param_1 * 4 - uVar10;
  pRVar5->command[1] = 0;
  uVar6 = uVar6 & ~(longlong)((int)uVar6 >> 0x1f);
  pRVar5->command[2] = 0;
  uVar11 = uVar6 - (uVar6 & 0xffffff00);
  iVar12 = (int)uVar11;
  uVar9 = (uVar6 << 0x20) >> 0x28;
  pRVar5->command[3] = 0;
  pRVar5->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar5->command[5] = 8;
  pRVar2 = pRVar5->command;
  pRVar5->command = pRVar2 + 7;
  pRVar2[6] = (((uint)uVar6 >> 8) + ((uint)LZCOUNT(iVar12) >> 5 ^ 1) +
              ((uint)LZCOUNT((int)uVar10) >> 5 ^ 1)) * 0x40000 | 0x40001814;
  uVar7 = 0;
  if ((int)uVar10 != 0) {
    pRVar2 = pRVar5->command;
    pRVar5->command = pRVar2 + 1;
    *pRVar2 = (int)((uVar10 & 0xffffffff) << 0x18) - 0x1000000;
    uVar7 = uVar10;
  }
  RVar8 = (RsxCmd)uVar7;
  if ((uint)uVar6 >> 8 != 0) {
    do {
      pRVar2 = pRVar5->command;
      RVar4 = (RsxCmd)uVar7;
      uVar9 = uVar9 - 1;
      uVar7 = uVar7 + 0x100;
      RVar8 = (RsxCmd)uVar7;
      pRVar5->command = pRVar2 + 1;
      *pRVar2 = RVar4 | 0xff000000;
    } while (0 < (int)uVar9);
  }
  if (iVar12 != 0) {
    pRVar2 = pRVar5->command;
    pRVar5->command = pRVar2 + 1;
    *pRVar2 = RVar8 | (int)((uVar11 & 0xffffffff) << 0x18) - 0x1000000;
  }
  *pRVar5->command = NV4097_SET_BEGIN_END_x1;
  pRVar5->command[1] = 0;
  pRVar5->command = pRVar5->command + 2;
  return;
}



//==== 0011ef18  ns=partproc  size=0x9f0
// sig: undefined DrawParts(void)
// callers(1): 0006bb78 draw::DefaultDraw
// callees(7): 000685c4 draw::GetEffectTex; 0006d70c draw::GetEffectTexAddr; 0011ebc4 partproc::???_DrawParts_DepthPass; 004d82b8 idol_draw::BindFragmentProgram; 004d83ec idol_draw::BindVertexProgram; 004fe098 idol::AllocateMemAlign; 005dd914 mathfunc::SinCos

void partproc::DrawParts(void)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  byte bVar7;
  RsxCmd *pRVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  RenderingStep *pRVar15;
  undefined4 uVar16;
  void *pvVar17;
  float *pfVar19;
  RsxCmd *pRVar20;
  undefined8 uVar18;
  RsxCmd *pRVar21;
  float *pfVar22;
  float fVar23;
  float fVar24;
  int iVar25;
  float *pfVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  longlong lVar30;
  double extraout_f1;
  double dVar31;
  double extraout_f1_00;
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
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  RsxCmd local_f0 [16];
  undefined1 local_b0 [24];
  
  pRVar15 = DL_Pass;
  pfVar19 = (float *)idol::AllocateMemAlign(FrameHeap,(PartIndexTop * 4 + 4) * 0x18,0x10);
  uVar16 = g_viewMtxPtr;
  idol_draw::BindVertexProgram(g_viewMtxPtr,pRVar15,5);
  idol_draw::BindFragmentProgram(uVar16,pRVar15,6);
  *pRVar15->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar15->command[1] = 0x1832;
  pRVar21 = pRVar15->command;
  pRVar15->command = pRVar21 + 2;
  lVar30 = 8;
  pRVar21[2] = 0x41744;
  pRVar15->command[1] = 0x1822;
  pRVar21 = pRVar15->command;
  pRVar15->command = pRVar21 + 2;
  pRVar21[2] = 0x4174c;
  pRVar20 = local_f0;
  pRVar15->command[1] = 0x1844;
  pRVar21 = pRVar15->command;
  pRVar15->command = pRVar21 + 2;
  pRVar21[2] = 0x441efc;
  pRVar15->command[1] = 4;
  pRVar21 = pRVar15->command + 2;
  pRVar15->command = pRVar21;
  do {
    *pRVar21 = *pRVar20;
    pRVar21 = pRVar15->command;
    pRVar15->command = pRVar21 + 1;
    pRVar8 = pRVar20 + 1;
    pRVar20 = pRVar20 + 2;
    pRVar21[1] = *pRVar8;
    pRVar21 = pRVar15->command + 1;
    pRVar15->command = pRVar21;
    lVar30 = lVar30 + -1;
  } while (lVar30 != 0);
  iVar29 = 0;
  if (-1 < PartIndexTop) {
    iVar25 = 0;
    pfVar26 = pfVar19;
    do {
      pvVar17 = PartInstances;
      iVar27 = EffectTexHeaders;
      bVar6 = *(byte *)((int)PartInstances + iVar25 + 1);
      if (-1 < (char)bVar6) {
        if ((bVar6 & 3) < 2) {
          iVar27 = 0;
          pfVar22 = (float *)&DAT_00a245a8;
          dVar49 = (double)*(float *)((int)PartInstances + iVar25 + 0x10);
          dVar48 = (double)*(float *)((int)PartInstances + iVar25 + 0x14);
          dVar50 = (double)(*(float *)((int)PartInstances + iVar25 + 0xc) * 4.7619046e-06);
          dVar47 = (double)*(float *)((int)PartInstances + iVar25 + 0x18);
          dVar42 = 0.0;
          do {
            if ((float)((double)(float)((double)pfVar22[1] * dVar48 +
                                       (double)(float)((double)pfVar22[2] * dVar47 +
                                                      (double)(float)((double)*pfVar22 * dVar49 +
                                                                     (double)pfVar22[3]))) + dVar50)
                < 0.0) goto LAB_0011f80c;
            iVar27 = iVar27 + 1;
            pfVar22 = pfVar22 + 4;
          } while (iVar27 < 6);
          if ((PTR_DAT_008fa54c._0_1_ == '\0') && (0.5 < dVar50)) {
            dVar44 = dVar50 * 0.6000000238418579;
            dVar50 = (double)(float)dVar44;
            if ((double)(float)dVar44 - 0.5 < 0.0) {
              dVar50 = 0.5;
            }
            *(float *)((int)PartInstances + iVar25 + 0xc) = (float)(dVar50 * 210000.0);
          }
          iVar27 = EffectTexHeaders;
          bVar6 = *(byte *)((int)pvVar17 + iVar25 + 3);
          lVar30 = draw::GetEffectTexAddr(*(undefined1 *)((int)pvVar17 + iVar25 + 2));
          uVar28 = *(uint *)((int)pvVar17 + iVar25 + 4);
          fVar23 = (float)(uVar28 >> 0x18 |
                          uVar28 >> 8 & 0xff00 | uVar28 << 0x18 | (uVar28 & 0xff00) << 8);
          pfVar19[0x17] = fVar23;
          pfVar19[0x11] = fVar23;
          pfVar19[0xb] = fVar23;
          pfVar19[5] = fVar23;
          dVar44 = 1.0;
          pfVar19[9] = 1.0;
          pfVar19[10] = 1.0;
          pfVar19[3] = 1.0;
          pfVar19[4] = 0.0;
          pfVar19[0xf] = 0.0;
          pfVar19[0x10] = 1.0;
          pfVar19[0x15] = 0.0;
          pfVar19[0x16] = 0.0;
          iVar27 = iVar27 + (int)(lVar30 << 5) + (int)(lVar30 << 2);
          fVar23 = (float)(longlong)(int)(*(byte *)((int)pvVar17 + iVar25 + 8) + 0x20) * 3.1415927 *
                   0.0078125 + 3.1415927;
          if (*(char *)((int)pvVar17 + iVar25 + 1) == '\0') {
            dVar42 = (double)(fVar23 * 0.5);
            dVar43 = (double)DAT_00a52b60;
            dVar45 = (double)DAT_00a52b64;
            dVar44 = (double)DAT_00a52b68;
            uVar18 = mathfunc::SinCos(dVar42,&DAT_00a52b60,0);
            dVar41 = extraout_f1;
            dVar31 = (double)mathfunc::SinCos(dVar42,uVar18,1);
            dVar42 = (double)(float)(dVar45 * dVar41);
            dVar46 = (double)(float)(dVar44 * dVar41);
            dVar44 = (double)DAT_00a52b40;
            dVar45 = (double)DAT_00a52b44;
            dVar33 = (double)DAT_00a52b48;
            dVar34 = (double)DAT_00a52b50;
            dVar35 = (double)DAT_00a52b54;
            dVar37 = (double)DAT_00a52b58;
            dVar41 = (double)(float)(dVar43 * dVar41);
          }
          else {
            dVar45 = (double)(fVar23 * 0.5);
            uVar18 = mathfunc::SinCos(dVar45,&DAT_0011eec0,0);
            dVar46 = extraout_f1_00;
            dVar31 = (double)mathfunc::SinCos(dVar45,uVar18,1);
            dVar45 = dVar42;
            dVar33 = dVar42;
            dVar34 = dVar42;
            dVar35 = dVar44;
            dVar37 = dVar42;
            dVar41 = dVar42;
          }
          dVar32 = -(double)(float)(dVar46 * dVar45 -
                                   (double)(float)(dVar31 * dVar44 +
                                                  (double)(float)(dVar42 * dVar33)));
          dVar38 = -(double)(float)(dVar41 * dVar33 -
                                   (double)(float)(dVar31 * dVar45 +
                                                  (double)(float)(dVar46 * dVar44)));
          dVar43 = -(double)(float)(dVar42 * dVar44 -
                                   (double)(float)(dVar31 * dVar33 +
                                                  (double)(float)(dVar41 * dVar45)));
          dVar33 = (double)(float)(dVar46 * dVar33 +
                                  (double)(float)(dVar41 * dVar44 + (double)(float)(dVar42 * dVar45)
                                                 ));
          dVar36 = -(double)(float)(dVar46 * dVar35 -
                                   (double)(float)(dVar31 * dVar34 +
                                                  (double)(float)(dVar42 * dVar37)));
          dVar39 = -(double)(float)(dVar41 * dVar37 -
                                   (double)(float)(dVar31 * dVar35 +
                                                  (double)(float)(dVar46 * dVar34)));
          dVar40 = -(double)(float)(dVar42 * dVar34 -
                                   (double)(float)(dVar31 * dVar37 +
                                                  (double)(float)(dVar41 * dVar35)));
          dVar34 = (double)(float)(dVar46 * dVar37 +
                                  (double)(float)(dVar41 * dVar34 + (double)(float)(dVar42 * dVar35)
                                                 ));
          dVar44 = (double)(float)((double)(float)(dVar42 * dVar43 +
                                                  -(double)(float)(dVar46 * dVar38 -
                                                                  (double)(float)(dVar41 * dVar33 +
                                                                                 (double)(float)(
                                                  dVar31 * dVar32)))) * dVar50);
          dVar45 = (double)(float)((double)(float)(dVar46 * dVar32 +
                                                  -(double)(float)(dVar41 * dVar43 -
                                                                  (double)(float)(dVar42 * dVar33 +
                                                                                 (double)(float)(
                                                  dVar31 * dVar38)))) * dVar50);
          dVar33 = (double)(float)((double)(float)(dVar41 * dVar38 +
                                                  -(double)(float)(dVar42 * dVar32 -
                                                                  (double)(float)(dVar46 * dVar33 +
                                                                                 (double)(float)(
                                                  dVar31 * dVar43)))) * dVar50);
          fVar24 = (float)((double)(float)(dVar42 * dVar40 +
                                          -(double)(float)(dVar46 * dVar39 -
                                                          (double)(float)(dVar41 * dVar34 +
                                                                         (double)(float)(dVar31 * 
                                                  dVar36)))) * dVar50);
          fVar4 = (float)((double)(float)(dVar46 * dVar36 +
                                         -(double)(float)(dVar41 * dVar40 -
                                                         (double)(float)(dVar42 * dVar34 +
                                                                        (double)(float)(dVar31 * 
                                                  dVar39)))) * dVar50);
          fVar5 = (float)((double)(float)(dVar41 * dVar39 +
                                         -(double)(float)(dVar42 * dVar36 -
                                                         (double)(float)(dVar46 * dVar34 +
                                                                        (double)(float)(dVar31 * 
                                                  dVar40)))) * dVar50);
          dVar42 = -(double)(fVar24 * 0.5 - -(float)(dVar44 * 0.5 - dVar49));
          dVar48 = -(double)(fVar4 * 0.5 - -(float)(dVar45 * 0.5 - dVar48));
          dVar50 = -(double)(fVar5 * 0.5 - -(float)(dVar33 * 0.5 - dVar47));
          fVar23 = (float)(dVar42 + dVar44);
          fVar2 = (float)(dVar48 + dVar45);
          fVar3 = (float)(dVar50 + dVar33);
          pfVar19[6] = (float)dVar42;
          pfVar19[7] = (float)dVar48;
          pfVar19[8] = (float)dVar50;
          *pfVar19 = fVar23;
          pfVar19[1] = fVar2;
          pfVar19[2] = fVar3;
          uVar28 = (uint)bVar6;
          bVar1 = uVar28 != DAT_00a52b80;
          fVar23 = (float)((double)(fVar23 + fVar24) - dVar44);
          fVar2 = (float)((double)(fVar2 + fVar4) - dVar45);
          fVar3 = (float)((double)(fVar3 + fVar5) - dVar33);
          pfVar19[0xc] = fVar23;
          pfVar19[0xd] = fVar2;
          pfVar19[0xe] = fVar3;
          pfVar19[0x12] = (float)((double)fVar23 + dVar44);
          pfVar19[0x13] = (float)((double)fVar2 + dVar45);
          pfVar19[0x14] = (float)((double)fVar3 + dVar33);
          pfVar26 = pfVar26 + 0x18;
          if ((bVar1) || (DAT_00a52b84 != iVar27)) {
            if (DAT_00729648 != 0) {
              ____DrawParts_DepthPass(DAT_00729648,local_b0);
            }
            DAT_00729648 = 0;
          }
          DAT_00729648 = DAT_00729648 + 1;
          DAT_00a52b80 = uVar28;
          DAT_00a52b84 = iVar27;
          pfVar19 = pfVar26;
        }
        else if ((bVar6 & 3) < 4) {
          dVar47 = (double)*(float *)((int)PartInstances + iVar25 + 0x10);
          dVar42 = (double)*(float *)((int)PartInstances + iVar25 + 0x14);
          dVar50 = (double)*(float *)((int)PartInstances + iVar25 + 0x18);
          dVar44 = (double)*(float *)((int)PartInstances + iVar25 + 0x20);
          dVar49 = (double)*(float *)((int)PartInstances + iVar25 + 0x24);
          dVar48 = (double)*(float *)((int)PartInstances + iVar25 + 0x28);
          bVar7 = *(byte *)((int)PartInstances + iVar25 + 3);
          if (bVar6 == 3) {
            lVar30 = draw::GetEffectTexAddr(*(undefined1 *)((int)PartInstances + iVar25 + 2));
          }
          else {
            *(undefined4 *)((int)PartInstances + iVar25 + 0x1c) = 0x3d4ccccd;
            iVar27 = EffectTexHeaders;
            lVar30 = draw::GetEffectTex(0x16);
          }
          uVar28 = *(uint *)((int)pvVar17 + iVar25 + 4);
          fVar23 = (float)(dVar48 - dVar50);
          fVar2 = (float)(dVar49 - dVar42);
          fVar3 = (float)(dVar44 - dVar47);
          fVar24 = (float)(uVar28 >> 0x18 |
                          uVar28 >> 8 & 0xff00 | uVar28 << 0x18 | (uVar28 & 0xff00) << 8);
          pfVar19[0x11] = fVar24;
          pfVar19[0xb] = fVar24;
          uVar28 = *(uint *)((int)pvVar17 + iVar25 + 0xc);
          fVar24 = (float)(uVar28 >> 0x18 |
                          uVar28 >> 8 & 0xff00 | uVar28 << 0x18 | (uVar28 & 0xff00) << 8);
          pfVar19[0x17] = fVar24;
          pfVar19[5] = fVar24;
          fVar24 = (float)(dVar47 + dVar44) * 0.5 - DAT_00a52b70;
          fVar5 = (float)(dVar50 + dVar48) * 0.5 - DAT_00a52b78;
          fVar4 = (float)(dVar42 + dVar49) * 0.5 - DAT_00a52b74;
          fVar10 = fVar5 * fVar3 - fVar24 * fVar23;
          fVar13 = fVar4 * fVar23 - fVar5 * fVar2;
          fVar9 = fVar24 * fVar2 - fVar4 * fVar3;
          fVar24 = *(float *)((int)pvVar17 + iVar25 + 0x1c);
          pfVar19[4] = 0.0;
          pfVar19[0xf] = 0.0;
          pfVar19[0x15] = 0.0;
          pfVar19[0x16] = 0.0;
          pfVar19[9] = 1.0;
          pfVar19[10] = 1.0;
          pfVar19[3] = 1.0;
          pfVar19[0x10] = 1.0;
          fVar4 = *(float *)((int)pvVar17 + iVar25 + 0x10);
          fVar11 = SQRT(fVar9 * fVar9 + fVar13 * fVar13 + fVar10 * fVar10);
          iVar27 = iVar27 + (int)(lVar30 << 5) + (int)(lVar30 << 2);
          pfVar26 = pfVar26 + 0x18;
          uVar28 = (uint)bVar7;
          bVar1 = uVar28 != DAT_00a52b80;
          fVar5 = fVar9;
          if (0.0 - fVar11 < 0.0) {
            fVar5 = fVar9 / fVar11;
          }
          if (fVar11 - 0.0 < 0.0) {
            fVar5 = fVar9 / fVar11;
          }
          fVar9 = fVar10;
          if (0.0 - fVar11 < 0.0) {
            fVar9 = fVar10 / fVar11;
          }
          if (fVar11 - 0.0 < 0.0) {
            fVar9 = fVar10 / fVar11;
          }
          fVar12 = -(fVar5 * fVar24 * 0.5 - *(float *)((int)pvVar17 + iVar25 + 0x18));
          fVar10 = fVar13;
          if (0.0 - fVar11 < 0.0) {
            fVar10 = fVar13 / fVar11;
          }
          if (fVar11 - 0.0 < 0.0) {
            fVar10 = fVar13 / fVar11;
          }
          fVar13 = -(fVar9 * fVar24 * 0.5 - *(float *)((int)pvVar17 + iVar25 + 0x14));
          fVar11 = fVar12 + fVar23;
          fVar14 = fVar13 + fVar2;
          pfVar19[7] = fVar13;
          fVar13 = -(fVar10 * fVar24 * 0.5 - fVar4);
          fVar4 = (fVar11 + fVar5 * fVar24) - fVar23;
          fVar5 = fVar13 + fVar3;
          pfVar19[6] = fVar13;
          pfVar19[8] = fVar12;
          fVar13 = (fVar14 + fVar9 * fVar24) - fVar2;
          pfVar19[1] = fVar14;
          pfVar19[2] = fVar11;
          *pfVar19 = fVar5;
          pfVar19[0xe] = fVar4;
          pfVar19[0xd] = fVar13;
          pfVar19[0x14] = fVar4 + fVar23;
          fVar23 = (fVar5 + fVar10 * fVar24) - fVar3;
          pfVar19[0x13] = fVar13 + fVar2;
          pfVar19[0xc] = fVar23;
          pfVar19[0x12] = fVar23 + fVar3;
          if ((bVar1) || (DAT_00a52b84 != iVar27)) {
            if (DAT_00729648 != 0) {
              ____DrawParts_DepthPass(DAT_00729648,local_b0);
            }
            DAT_00729648 = 0;
          }
          DAT_00729648 = DAT_00729648 + 1;
          DAT_00a52b80 = uVar28;
          DAT_00a52b84 = iVar27;
          pfVar19 = pfVar19 + 0x18;
        }
      }
LAB_0011f80c:
      iVar29 = iVar29 + 1;
      iVar25 = iVar25 + 0x40;
    } while (iVar29 <= PartIndexTop);
  }
  if (DAT_00729648 != 0) {
    ____DrawParts_DepthPass(DAT_00729648,local_b0);
  }
  *pRVar15->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar15->command[1] = 2;
  pRVar21 = pRVar15->command;
  pRVar15->command = pRVar21 + 2;
  pRVar21[2] = 0x41744;
  DAT_00729648 = 0;
  pRVar15->command[1] = 2;
  pRVar21 = pRVar15->command;
  pRVar15->command = pRVar21 + 2;
  pRVar21[2] = 0x4174c;
  pRVar15->command[1] = 2;
  pRVar15->command = pRVar15->command + 2;
  return;
}



//==== 0011f918  ns=partupd  size=0x27c
// sig: undefined UpdatePart_22(PartInstance * part)
// callers(0): 
// callees(1): 0011e6ec partproc::DeletePart

/* Part 22 */

void partupd::UpdatePart_22(PartInstance *part)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  undefined1 uVar5;
  short sVar6;
  longlong lVar7;
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
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  lVar7 = (longlong)(int)part;
  auVar9 = ZEXT416(0xfffffff0);
  auVar8 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
  auVar9 = ZEXT416(1);
  auVar10 = loadVectorLeftIndexed(10,lVar7);
  sVar4 = part->timer;
  auVar10 = vectorShiftRightWord(auVar10,auVar8);
  auVar9 = vectorSubtractUnsignedWordModulo
                     (auVar10,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60);
  auVar10 = vectorSplatHalfWord(auVar9,1);
  auVar9 = vectorShiftLeftIntegerWord(auVar9,auVar8);
  auVar9 = vectorShiftRightAlgebraicWord(auVar9,auVar8);
  sVar6 = storeVectorElementHalfWordIndexed(auVar10,10,lVar7);
  part->timer = sVar6;
  if ((short)(sVar4 + -1) < 1) {
    partproc::DeletePart();
  }
  else {
    auVar8 = ZEXT416(0xfffffff0);
    auVar10 = ZEXT416(0xffffffff);
    auVar13 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    auVar10 = ZEXT416(8);
    auVar12 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    part->rot = part->rot + '\x01';
    auVar10 = loadVectorLeftIndexed(0x38,lVar7);
    auVar10 = vectorShiftRightAlgebraicWord
                        (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60);
    auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
    auVar8 = ZEXT416(0xffffffff);
    auVar19 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
    auVar8 = vectorCompareGreaterThanSignedWord(auVar9,auVar12);
    auVar13 = vectorConvertFromSignedFixedPointWord(auVar10,0);
    auVar10 = vectorConditionalSelect(auVar9,auVar12,auVar8);
    auVar8 = loadVectorLeftIndexed(4,0x11f908);
    auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar11 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
    auVar8 = ZEXT416(9);
    auVar20 = vectorShiftLeftIntegerWord(auVar19,auVar19);
    auVar12 = vectorConvertFromSignedFixedPointWord(auVar9,0);
    auVar19 = loadVectorLeftIndexed(in_LR,0x11f908);
    auVar9 = ZEXT416(0xfffffff8);
    auVar22 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    auVar9 = vectorShiftLeftIntegerWord
                       (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60);
    auVar8 = auVar19 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar16 = vectorReciprocalEstimateFloatingPoint(auVar13);
    auVar10 = vectorConvertFromSignedFixedPointWord(auVar9,0);
    auVar9 = ZEXT416(0xffffffff);
    auVar19 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    auVar21 = loadVectorLeftIndexed(0x33,lVar7);
    auVar9 = loadVectorLeftIndexed(0x30,lVar7);
    auVar19 = vectorShiftLeftIntegerWord(auVar19,auVar19);
    auVar18 = vectorNegativeMultiplySubtractFloatingPoint(auVar16,auVar13,auVar11);
    auVar19 = vectorMultiplyAddFloatingPoint
                        (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar19);
    auVar8 = loadVectorLeftIndexed(0x31,lVar7);
    auVar9 = vectorShiftRightWord(auVar9,auVar22);
    auVar8 = vectorShiftRightWord(auVar8,auVar22);
    auVar15 = vectorConvertFromSignedFixedPointWord(auVar9,0);
    auVar17 = vectorConvertFromSignedFixedPointWord(auVar8,0);
    auVar14 = vectorMultiplyAddFloatingPoint(auVar16,auVar18,auVar14);
    auVar8 = vectorShiftRightWord(auVar21,auVar22);
    auVar9 = ZEXT416(0xffffffff);
    auVar16 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    auVar10 = loadVectorLeftIndexed(0x32,lVar7);
    auVar9 = loadVectorLeftIndexed(0x37,lVar7);
    auVar21 = vectorShiftLeftIntegerWord(auVar16,auVar16);
    auVar16 = vectorConvertFromSignedFixedPointWord(auVar8,0);
    auVar23 = loadVectorLeftIndexed(0x34,lVar7);
    auVar24 = loadVectorLeftIndexed(0x35,lVar7);
    auVar25 = loadVectorLeftIndexed(0x36,lVar7);
    auVar8 = vectorNegativeMultiplySubtractFloatingPoint(auVar14,auVar13,auVar11);
    auVar9 = vectorShiftRightWord(auVar9,auVar22);
    auVar18 = vectorShiftRightWord(auVar10,auVar22);
    auVar23 = vectorShiftRightWord(auVar23,auVar22);
    auVar24 = vectorShiftRightWord(auVar24,auVar22);
    auVar10 = vectorConvertFromSignedFixedPointWord(auVar9,0);
    auVar18 = vectorConvertFromSignedFixedPointWord(auVar18,0);
    fVar1 = (float)part->update[1];
    fVar2 = (float)part->update[2];
    auVar24 = vectorConvertFromSignedFixedPointWord(auVar24,0);
    fVar3 = (float)part->update[3];
    auVar14 = vectorMultiplyAddFloatingPoint(auVar14,auVar8,auVar20);
    auVar20 = vectorShiftRightWord(auVar25,auVar22);
    auVar9 = ZEXT416(0xffffffff);
    auVar22 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    auVar9 = ZEXT416(0xffffffff);
    auVar8 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    auVar9 = ZEXT416(0xffffffff);
    auVar25 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    auVar20 = vectorConvertFromSignedFixedPointWord(auVar20,0);
    auVar22 = vectorShiftLeftIntegerWord(auVar22,auVar22);
    auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
    auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar19,auVar9);
    auVar11 = vectorNegativeMultiplySubtractFloatingPoint(auVar14,auVar13,auVar11);
    auVar13 = vectorConvertFromSignedFixedPointWord(auVar23,0);
    auVar9 = ZEXT416(0xffffffff);
    auVar23 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    auVar9 = loadVectorLeftIndexed(8,0x11f908);
    (part->pos).x = (float)part->update[0] + (part->pos).x;
    auVar8 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
    (part->pos).y = fVar1 + (part->pos).y;
    (part->pos).z = fVar2 + (part->pos).z;
    part->update[2] = (int)(fVar3 + fVar2);
    auVar11 = vectorMultiplyAddFloatingPoint(auVar14,auVar11,auVar21);
    auVar21 = vectorShiftLeftIntegerWord(auVar25,auVar25);
    auVar9 = ZEXT416(0xffffffff);
    auVar14 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    auVar9 = ZEXT416(0xffffffff);
    auVar25 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    auVar19 = vectorMultiplyAddFloatingPoint(auVar10,auVar19,auVar21);
    auVar9 = ZEXT416(0xffffffff);
    auVar21 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    auVar14 = vectorShiftLeftIntegerWord(auVar14,auVar14);
    auVar9 = vectorShiftLeftIntegerWord(auVar23,auVar23);
    auVar23 = vectorShiftLeftIntegerWord(auVar25,auVar25);
    auVar10 = vectorMultiplyAddFloatingPoint(auVar11,auVar12,auVar22);
    auVar12 = vectorShiftLeftIntegerWord(auVar21,auVar21);
    part->scale = part->scale + (float)part->update[7];
    auVar11 = vectorSubtractFloatingPoint
                        (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar10);
    auVar8 = vectorMultiplyAddFloatingPoint(auVar15,auVar10,auVar14);
    auVar14 = vectorMultiplyAddFloatingPoint(auVar17,auVar10,auVar9);
    auVar15 = vectorMultiplyAddFloatingPoint(auVar18,auVar10,auVar23);
    auVar9 = vectorMultiplyAddFloatingPoint(auVar16,auVar10,auVar12);
    auVar8 = vectorMultiplyAddFloatingPoint(auVar13,auVar11,auVar8);
    auVar10 = vectorMultiplyAddFloatingPoint(auVar24,auVar11,auVar14);
    auVar13 = vectorMultiplyAddFloatingPoint(auVar20,auVar11,auVar15);
    auVar9 = vectorMultiplyAddFloatingPoint(auVar19,auVar11,auVar9);
    auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
    auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
    auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
    auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
    auVar9 = auVar8 >> 0x60 & (undefined1  [16])0xff;
    auVar8 = auVar10 >> 0x60 & (undefined1  [16])0xff;
    auVar10 = auVar12 >> 0x60 & (undefined1  [16])0xff;
    auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xff;
    uVar5 = storeVectorElementByteIndexed
                      (auVar9 | auVar9 << 8 | auVar9 << 0x10 | auVar9 << 0x18 | auVar9 << 0x20 |
                       auVar9 << 0x28 | auVar9 << 0x30 | auVar9 << 0x38 | auVar9 << 0x40 |
                       auVar9 << 0x48 | auVar9 << 0x50 | auVar9 << 0x58 | auVar9 << 0x60 |
                       auVar9 << 0x68 | auVar9 << 0x70 | auVar9 << 0x78,4,lVar7);
    *(undefined1 *)&part->color = uVar5;
    uVar5 = storeVectorElementByteIndexed
                      (auVar8 | auVar8 << 8 | auVar8 << 0x10 | auVar8 << 0x18 | auVar8 << 0x20 |
                       auVar8 << 0x28 | auVar8 << 0x30 | auVar8 << 0x38 | auVar8 << 0x40 |
                       auVar8 << 0x48 | auVar8 << 0x50 | auVar8 << 0x58 | auVar8 << 0x60 |
                       auVar8 << 0x68 | auVar8 << 0x70 | auVar8 << 0x78,5,lVar7);
    *(undefined1 *)((int)&part->color + 1) = uVar5;
    uVar5 = storeVectorElementByteIndexed
                      (auVar10 | auVar10 << 8 | auVar10 << 0x10 | auVar10 << 0x18 | auVar10 << 0x20
                       | auVar10 << 0x28 | auVar10 << 0x30 | auVar10 << 0x38 | auVar10 << 0x40 |
                       auVar10 << 0x48 | auVar10 << 0x50 | auVar10 << 0x58 | auVar10 << 0x60 |
                       auVar10 << 0x68 | auVar10 << 0x70 | auVar10 << 0x78,6,lVar7);
    *(undefined1 *)((int)&part->color + 2) = uVar5;
    uVar5 = storeVectorElementByteIndexed
                      (auVar13 | auVar13 << 8 | auVar13 << 0x10 | auVar13 << 0x18 | auVar13 << 0x20
                       | auVar13 << 0x28 | auVar13 << 0x30 | auVar13 << 0x38 | auVar13 << 0x40 |
                       auVar13 << 0x48 | auVar13 << 0x50 | auVar13 << 0x58 | auVar13 << 0x60 |
                       auVar13 << 0x68 | auVar13 << 0x70 | auVar13 << 0x78,7,lVar7);
    *(undefined1 *)((int)&part->color + 3) = uVar5;
  }
  return;
}



//==== 0011fb94  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_PARTUPD(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_PARTUPD(void)

{
  DAT_00729698 = 0x10000;
  return;
}



//==== 0011fbb0  ns=partupd  size=0x3d8
// sig: undefined FillPartUpdateTable(void)
// callers(1): 004d3044 FUN_004d3044
// callees(0): 

void partupd::FillPartUpdateTable(void)

{
  PartUpdates[0] = (PartInstance *)&PTR_UpdatePart_0_00706ea8;
  PartUpdates[1] = (PartInstance *)&PTR_UpdatePart_1_00706eb8;
  PartUpdates[2] = (PartInstance *)&PTR_UpdatePart_2_00706ec8;
  PartUpdates[3] = (PartInstance *)&PTR_UpdatePart_3_00706ed8;
  PartUpdates[4] = (PartInstance *)&PTR_UpdatePart_4_00706ee8;
  PartUpdates[5] = (PartInstance *)&PTR_UpdatePart_5_00706ef8;
  PartUpdates[6] = (PartInstance *)&PTR_UpdatePart_6_00706f08;
  PartUpdates[7] = (PartInstance *)&PTR_UpdatePart_7_00706f18;
  PartUpdates[8] = (PartInstance *)&PTR_UpdatePart_8_00706f28;
  PartUpdates[9] = (PartInstance *)&PTR_UpdatePart_9_00706f38;
  PartUpdates[10] = (PartInstance *)&PTR_UpdatePart_10_00706f48;
  PartUpdates[0xb] = (PartInstance *)&PTR_UpdatePart_11_00706f58;
  PartUpdates[0xc] = (PartInstance *)&PTR_UpdatePart_12_00706f68;
  PartUpdates[0xd] = (PartInstance *)&PTR_UpdatePart_13_00706f78;
  PartUpdates[0xe] = (PartInstance *)&PTR_UpdatePart_14_00706f88;
  PartUpdates[0xf] = (PartInstance *)&PTR_UpdatePart_15_00706f98;
  PartUpdates[0x10] = (PartInstance *)&PTR_UpdatePart_16_00706fa8;
  PartUpdates[0x11] = (PartInstance *)&PTR_UpdatePart_17_00706fb8;
  PartUpdates[0x12] = (PartInstance *)&PTR_UpdatePart_18_00706fc8;
  PartUpdates[0x13] = (PartInstance *)&PTR_UpdatePart_19_00706fd8;
  PartUpdates[0x14] = (PartInstance *)&PTR_UpdatePart_20_00706fe8;
  PartUpdates[0x15] = (PartInstance *)&PTR_UpdatePart_21_00706ff8;
  PartUpdates[0x16] = (PartInstance *)&PTR_UpdatePart_22_00706e80;
  PartUpdates[0x17] = (PartInstance *)&PTR_UpdatePart_23_00707010;
  PartUpdates[0x18] = (PartInstance *)&PTR_UpdatePart_24_00707020;
  PartUpdates[0x19] = (PartInstance *)&PTR_UpdatePart_25_00707030;
  PartUpdates[0x1a] = (PartInstance *)&PTR_UpdatePart_26_00707040;
  PartUpdates[0x1b] = (PartInstance *)&PTR_UpdatePart_27_00707050;
  PartUpdates[0x1c] = (PartInstance *)&PTR_UpdatePart_28_00707060;
  PartUpdates[0x1d] = (PartInstance *)&PTR_UpdatePart_29_00707070;
  PartUpdates[0x1e] = (PartInstance *)&PTR_UpdatePart_30_00707080;
  PartUpdates[0x1f] = (PartInstance *)&PTR_UpdatePart_31_00707090;
  PartUpdates[0x20] = (PartInstance *)&PTR_UpdatePart_32_007070a0;
  PartUpdates[0x21] = (PartInstance *)&PTR_UpdatePart_33_007070b0;
  PartUpdates[0x22] = (PartInstance *)&PTR_UpdatePart_34_007070c0;
  PartUpdates[0x23] = (PartInstance *)&PTR_UpdatePart_35_007070e0;
  PartUpdates[0x24] = (PartInstance *)&PTR_UpdatePart_36_007070f8;
  PartUpdates[0x25] = (PartInstance *)&PTR_UpdatePart_37_00707108;
  PartUpdates[0x26] = (PartInstance *)&PTR_UpdatePart_38_00707118;
  PartUpdates[0x27] = (PartInstance *)&PTR_UpdatePart_39_00707128;
  PartUpdates[0x28] = (PartInstance *)&PTR_UpdatePart_40_00707138;
  PartUpdates[0x29] = (PartInstance *)&PTR_UpdatePart_41_00707148;
  PartUpdates[0x2a] = (PartInstance *)&PTR_UpdatePart_42_00707158;
  PartUpdates[0x2b] = (PartInstance *)&PTR_UpdatePart_43_00707168;
  PartUpdates[0x2c] = (PartInstance *)&PTR_UpdatePart_44_00707178;
  PartUpdates[0x2d] = (PartInstance *)&PTR_UpdatePart_45_00707180;
  PartUpdates[0x2e] = (PartInstance *)&PTR_UpdatePart_46_00707190;
  PartUpdates[0x2f] = (PartInstance *)&PTR_UpdatePart_47_007071a0;
  PartUpdates[0x30] = (PartInstance *)&PTR_UpdatePart_48_007071b0;
  PartUpdates[0x31] = (PartInstance *)&PTR_UpdatePart_49_007071c0;
  PartUpdates[0x32] = (PartInstance *)&PTR_UpdatePart_50_007071d0;
  PartUpdates[0x33] = (PartInstance *)&PTR_UpdatePart_51_007071e0;
  PartUpdates[0x34] = (PartInstance *)&PTR_UpdatePart_52_007071f0;
  PartUpdates[0x35] = (PartInstance *)&PTR_UpdatePart_53_00707200;
  PartUpdates[0x36] = (PartInstance *)&PTR_UpdatePart_54_00707210;
  PartUpdates[0x37] = (PartInstance *)&PTR_UpdatePart_55_00707220;
  PartUpdates[0x38] = (PartInstance *)&PTR_UpdatePart_56_00707230;
  PartUpdates[0x39] = (PartInstance *)&PTR_UpdatePart_57_00707240;
  PartUpdates[0x3a] = (PartInstance *)&PTR_UpdatePart_58_00707250;
  PartUpdates[0x3b] = (PartInstance *)&PTR_UpdatePart_59_00707260;
  PartUpdates[0x3c] = (PartInstance *)&PTR_UpdatePart_60_00707270;
  PartUpdates[0x3d] = (PartInstance *)&PTR_UpdatePart_61_00707280;
  PartUpdates[0x3e] = (PartInstance *)&PTR_UpdatePart_62_00707290;
  PartUpdates[0x3f] = (PartInstance *)&PTR_UpdatePart_63_007072a0;
  PartUpdates[0x40] = (PartInstance *)&PTR_UpdatePart_64_007072b0;
  PartUpdates[0x41] = (PartInstance *)&PTR_UpdatePart_65_007072c0;
  PartUpdates[0x42] = (PartInstance *)&PTR_UpdatePart_66_007072c8;
  PartUpdates[0x43] = (PartInstance *)&PTR_UpdatePart_67_007072d8;
  PartUpdates[0x44] = (PartInstance *)&PTR_UpdatePart_68_007072e8;
  PartUpdates[0x45] = (PartInstance *)&PTR_UpdatePart_69_007072f8;
  PartUpdates[0x46] = (PartInstance *)&PTR_UpdatePart_70_00707308;
  PartUpdates[0x47] = (PartInstance *)&PTR_UpdatePart_71_00707318;
  PartUpdates[0x48] = (PartInstance *)&PTR_UpdatePart_72_00707328;
  PartUpdates[0x49] = (PartInstance *)&PTR_UpdatePart_73_00707338;
  PartUpdates[0x4a] = (PartInstance *)&PTR_UpdatePart_74_00707348;
  PartUpdates[0x4b] = (PartInstance *)&PTR_UpdatePart_75_00707358;
  PartUpdates[0x4c] = (PartInstance *)&PTR_UpdatePart_76_00707360;
  PartUpdates[0x4d] = (PartInstance *)&PTR_UpdatePart_77_00707378;
  PartUpdates[0x4e] = (PartInstance *)&PTR_UpdatePart_78_00707388;
  PartUpdates[0x4f] = (PartInstance *)&PTR_UpdatePart_79_00707398;
  DAT_00a52744 = &PTR_____UpdatePart_FadeOut_007073a8;
  return;
}



//==== 0011ffb0  ns=partupd  size=0x2a0
// sig: undefined SpawnPart_0(void)
// callers(2): 0026af90 mobyupdate_unsorted::UpdateMoby_1400; 002a4070 mobyupdate_unsorted::UpdateMoby_1629
// callees(4): 000fcbe8 mobyutil::MB_randRangeFloat; 0011e6c8 partproc::CreatePart; 005023f0 fastfunc::FastVecAdd; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 0 */

void partupd::SpawnPart_0
               (double param_1,float *param_2,int param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7)

{
  PartInstance *pPVar2;
  longlong lVar1;
  char cVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fStack00000050;
  float fStack00000054;
  float fStack00000058;
  undefined1 local_80 [16];
  int local_70;
  int local_6c;
  int local_68;
  
  _fStack00000050 = param_6;
  _fStack00000058 = param_7;
  pPVar2 = partproc::CreatePart(0);
  dVar6 = (double)fStack00000050;
  dVar7 = (double)fStack00000058;
  dVar8 = (double)fStack00000054;
  if (pPVar2 != (PartInstance *)0x0) {
    dVar5 = 0.0;
    lVar1 = 0;
    iVar4 = param_3;
    if (param_3 < 1) {
      if (-1 < param_3) {
        dVar5 = 0.014999999664723873;
        mobyutil::MB_randRangeFloat(0.01,1.0);
        lVar1 = 0x14;
      }
    }
    else if (param_3 < 2) {
      dVar5 = 0.5;
      mobyutil::MB_randRangeFloat(1.0,5.0);
      lVar1 = 0xd;
    }
    else if (param_3 < 3) {
      dVar5 = 1.0;
      mobyutil::MB_randRangeFloat(20.0,30.0);
      lVar1 = 0xd;
      iVar4 = 1;
    }
    pPVar2->timer = (short)param_3;
    pPVar2->color = (uint)(lVar1 << 0x16) & 0x7000000 | 0x606060;
    pPVar2->scale = (float)((uint)(lVar1 << 0x18) | 0x907070);
    cVar3 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar2->drawDist = cVar3 + '`';
    pPVar2->gsAlpha = 0x44;
    pPVar2->type = 3;
    pPVar2->tex = *(byte *)(partproc::g_PartTexFrames + iVar4);
    (pPVar2->pos).x = *param_2;
    (pPVar2->pos).y = param_2[1];
    (pPVar2->pos).z = param_2[2];
    (pPVar2->pos).w = param_2[3];
    fastfunc::FastVecAdd(&local_70,param_2,local_80);
    pPVar2->update[0] = local_70;
    pPVar2->update[1] = local_6c;
    (pPVar2->pos).w = (float)dVar5;
    pPVar2->update[2] = local_68;
    pPVar2->update[3] = 0x3f800000;
    pPVar2->update[4] = (int)(float)dVar6;
    pPVar2->update[5] = (int)(float)dVar8;
    pPVar2->update[6] = (int)(float)dVar7;
    pPVar2->update[7] = (int)(float)param_1;
  }
  return;
}



