//==== 00400670  ns=Global  size=0x1d8
// sig: undefined FUN_00400670(void)
// callers(2): 00275240 mobyupdate_helpers::M1422_00275240; 002766e0 mobyupdate_unsorted::UpdateMoby_1422
// callees(0): 

void FUN_00400670(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 in_stack_00000074;
  
  puVar1 = *(undefined4 **)(param_1 + 0x78);
  auVar3._0_4_ = param_8;
  auVar3._4_4_ = param_8;
  auVar3._8_4_ = param_8;
  auVar3._12_4_ = param_8;
  auVar6 = ZEXT416(0xffffffff);
  auVar5 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar6._0_4_ = param_7;
  auVar6._4_4_ = param_7;
  auVar6._8_4_ = param_7;
  auVar6._12_4_ = param_7;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  puVar1[4] = *param_3;
  puVar1[5] = param_3[1];
  puVar1[6] = param_3[2];
  puVar1[7] = param_3[3];
  puVar1[8] = *param_4;
  puVar1[9] = param_4[1];
  puVar1[10] = param_4[2];
  puVar1[0xb] = param_4[3];
  puVar1[0xc] = *param_5;
  puVar1[0xd] = param_5[1];
  auVar4 = vectorConvertFromSignedFixedPointWord(auVar6,0);
  puVar1[0xe] = param_5[2];
  puVar1[0xf] = param_5[3];
  puVar1[0x10] = *param_6;
  puVar1[0x11] = param_6[1];
  puVar1[0x12] = param_6[2];
  puVar1[0x13] = param_6[3];
  *(undefined1 *)(param_1 + 0x20) = 2;
  auVar5 = vectorShiftLeftIntegerWord(auVar5,auVar5);
  auVar3 = vectorConvertFromSignedFixedPointWord(auVar3,0);
  auVar6 = ZEXT416(0xffffffff);
  auVar9 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar6 = ZEXT416(0xffffffff);
  auVar11 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
  puVar1[0x1a] = DAT_0071f418 * 0.333;
  auVar6 = loadVectorLeftIndexed(4,0x400660);
  auVar7 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar9 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar6 = loadVectorLeftIndexed(8,0x400660);
  auVar4 = vectorAddFloatingPoint(auVar4,auVar9);
  auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar8 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar3 = vectorAddFloatingPoint(auVar3,auVar9);
  auVar6 = ZEXT416(0xffffffff);
  auVar6 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar9 = vectorShiftLeftIntegerWord(auVar6,auVar6);
  auVar4 = vectorMultiplyAddFloatingPoint(auVar7,auVar4,auVar5);
  auVar6 = ZEXT416(0xffffffff);
  auVar5 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar6 = vectorMultiplyAddFloatingPoint(auVar7,auVar3,auVar9);
  auVar9 = vectorShiftLeftIntegerWord(auVar11,auVar11);
  auVar5 = vectorShiftLeftIntegerWord(auVar5,auVar5);
  auVar3 = vectorConvertToSignedFixedPointWordSaturate(auVar4,0);
  auVar6 = vectorConvertToSignedFixedPointWordSaturate(auVar6,0);
  auVar7 = vectorConvertFromSignedFixedPointWord(auVar3,0);
  auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar3 = auVar3 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar4 = vectorReciprocalEstimateFloatingPoint(auVar7);
  auVar11 = vectorNegativeMultiplySubtractFloatingPoint(auVar4,auVar7,auVar8);
  auVar4 = vectorMultiplyAddFloatingPoint(auVar4,auVar11,auVar5);
  auVar5 = vectorNegativeMultiplySubtractFloatingPoint(auVar4,auVar7,auVar8);
  auVar4 = vectorMultiplyAddFloatingPoint(auVar4,auVar5,auVar10);
  auVar5 = vectorNegativeMultiplySubtractFloatingPoint(auVar4,auVar7,auVar8);
  auVar4 = vectorMultiplyAddFloatingPoint(auVar4,auVar5,auVar9);
  auVar4 = auVar4 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar2 = storeVectorElementWordIndexed
                    (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,0x70,ZEXT48(puVar1));
  *(undefined4 *)((uint)(puVar1 + 0x1c) & 0xfffffffc) = uVar2;
  uVar2 = storeVectorElementWordIndexed
                    (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,0x74,ZEXT48(puVar1));
  *(undefined4 *)((uint)(puVar1 + 0x1d) & 0xfffffffc) = uVar2;
  puVar1[0x1e] = in_stack_00000074;
  DAT_00969ea0 = storeVectorElementWordIndexed
                           (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x1c0,0x969ce0
                           );
  return;
}



//==== 00400848  ns=Global  size=0xc
// sig: undefined FUN_00400848(void)
// callers(1): 002766e0 mobyupdate_unsorted::UpdateMoby_1422
// callees(0): 

double FUN_00400848(int param_1)

{
  return (double)*(float *)(*(int *)(param_1 + 0x78) + 0x60);
}



//==== 00400854  ns=Global  size=0x54
// sig: undefined FUN_00400854(void)
// callers(1): 002766e0 mobyupdate_unsorted::UpdateMoby_1422
// callees(0): 

longlong FUN_00400854(int param_1)

{
  ulonglong uVar1;
  
  uVar1 = (LZCOUNT(3 - (uint)*(byte *)(param_1 + 0x20)) << 0x3a) >> 0x3f & 2;
  return uVar1 + ((LZCOUNT(2 - (uint)*(byte *)(param_1 + 0x20)) << 0x3a) >> 0x3f & 1 - uVar1);
}



//==== 004008a8  ns=mobyupdate_helpers  size=0x110
// sig: undefined M752_004008a8(void)
// callers(0): 
// callees(1): 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M752_004008a8(double param_1,int *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  
  lVar7 = fastfunc::FastDoubleToInt((double)(float)((double)(longlong)(*param_2 + -1) * param_1));
  iVar9 = *param_2 + -1;
  iVar8 = *param_2 + -2;
  iVar8 = iVar8 + ((uint)(lVar7 - iVar9 >> 0x3f) & (int)lVar7 - iVar8);
  fVar2 = (float)param_2[iVar8 * 4 + 9];
  fVar3 = (float)param_2[iVar8 * 4 + 5];
  fVar4 = (float)param_2[iVar8 * 4 + 10];
  fVar5 = (float)param_2[iVar8 * 4 + 6];
  fVar6 = (float)param_2[iVar8 * 4 + 0xb];
  fVar1 = (float)((double)(longlong)iVar9 * param_1 - (double)(longlong)(int)lVar7);
  *param_3 = fVar1 * ((float)param_2[iVar8 * 4 + 8] - (float)param_2[iVar8 * 4 + 4]) +
             (float)param_2[iVar8 * 4 + 4];
  param_3[1] = fVar1 * (fVar2 - fVar3) + (float)param_2[iVar8 * 4 + 5];
  fVar2 = (float)param_2[iVar8 * 4 + 6];
  param_3[3] = fVar6;
  param_3[2] = fVar1 * (fVar4 - fVar5) + fVar2;
  return;
}



//==== 004009b8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M752_004009b8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M752_004009b8(void)

{
  DAT_008547b0 = 0x10000;
  return;
}



//==== 004009d0  ns=mobyupdate_helpers  size=0x4
// sig: undefined M752_004009d0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M752_004009d0(void)

{
  return;
}



//==== 004009e0  ns=mobyupdate_unsorted  size=0x544
// sig: undefined UpdateMoby_{646_752}(MobyInstance * moby)
// callers(0): 
// callees(7): 00109af0 mobyutil::Delt; 00110488 mobyutil::ClampVec3Magnitude; 00112900 mobyutil::MB_GetOrientation; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d204 sound::sound_MobyPlay_oClass; 004fff60 fastfunc::FastDecTimerS32

/* Moby 646
   Moby 752 */

void mobyupdate_unsorted::UpdateMoby__646_752_(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  void *pvVar4;
  Spline *pSVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  char cVar13;
  int iVar14;
  ulonglong uVar15;
  undefined8 in_LR;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  Vec4 local_50;
  f32 local_40;
  f32 local_3c;
  f32 local_38;
  f32 local_34;
  
  local_50.x = -(moby->pos).x;
  local_50.y = -(moby->pos).y;
  local_50.z = -(moby->pos).z;
  pvVar4 = moby->pVar;
  uVar15 = ZEXT48(pvVar4);
  local_50.w = (moby->pos).w;
  local_40 = (moby->rotation).x;
  local_3c = (moby->rotation).y;
  local_38 = (moby->rotation).z;
  local_34 = (moby->rotation).w;
  bVar1 = moby->state;
  if (bVar1 == 0) {
    cVar13 = ((byte)((LZCOUNT(-*(int *)((int)pvVar4 + 0xf8)) << 0x3a) >> 0x3f) & 2) - 1;
    pSVar5 = Splines[*(int *)((int)pvVar4 + 0xe0)];
    lVar12 = 0;
    *(Spline **)((int)pvVar4 + 0xc0) = pSVar5;
    *(char *)((int)pvVar4 + 0xb4) = cVar13;
    iVar10 = 0;
    if (-1 < cVar13) {
      lVar12 = (ulonglong)(uint)pSVar5->cnt - 1;
    }
    iVar14 = (int)(lVar12 << 4);
    (moby->pos).x = *(f32 *)((int)&pSVar5->points[0].x + iVar14);
    (moby->pos).y = *(f32 *)((int)&pSVar5->points[0].y + iVar14);
    (moby->pos).z = *(f32 *)((int)&pSVar5->points[0].z + iVar14);
    (moby->pos).w = *(f32 *)((int)&pSVar5->points[0].w + iVar14);
    if (-1 < *(char *)((int)pvVar4 + 0xb4)) {
      iVar10 = **(int **)((int)pvVar4 + 0xc0) + -1;
    }
    *(int *)((int)pvVar4 + 0xb0) = iVar10;
    fVar2 = moby->pClass->gScale;
    *(undefined4 *)((int)pvVar4 + 0x104) = 0xffffffff;
    moby->scale = fVar2 * *(float *)((int)pvVar4 + 0xfc);
    iVar10 = fastfunc::FastDecTimerS32(uVar15 + 0x100);
    if (iVar10 != 0) {
      moby->state = '\x01';
    }
  }
  else if (bVar1 < 2) {
    iVar10 = **(int **)((int)pvVar4 + 0xc0);
    iVar14 = *(int *)((int)pvVar4 + 0xb0) + iVar10 + (int)*(char *)((int)pvVar4 + 0xb4);
    iVar14 = iVar14 - (iVar14 / iVar10) * iVar10;
    if ((moby->oClass == MOVING_PLATFORM_MEDIUM) &&
       (iVar11 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar4 + 0x104)), iVar11 == 0)) {
      iVar11 = sound::sound_MobyPlay_oClass(0,4,moby,0x389);
      *(int *)((int)pvVar4 + 0x104) = iVar11;
    }
    iVar11 = *(int *)((int)pvVar4 + 0xc0) + iVar14 * 0x10;
    *(float *)((int)pvVar4 + 0xa0) = *(float *)(iVar11 + 0x10) - (moby->pos).x;
    iVar9 = *(int *)((int)pvVar4 + 0xc0) +
            (iVar14 + ((uint)((LZCOUNT(-*(int *)((int)pvVar4 + 0x108)) << 0x3a) >> 0x3f) &
                      (iVar10 + -1) - iVar14)) * 0x10;
    *(float *)((int)pvVar4 + 0xa4) = *(float *)(iVar11 + 0x14) - (moby->pos).y;
    *(float *)((int)pvVar4 + 0xa8) = *(float *)(iVar11 + 0x18) - (moby->pos).z;
    *(undefined4 *)((int)pvVar4 + 0xac) = *(undefined4 *)(iVar11 + 0x1c);
    fVar3 = (moby->pos).y - *(float *)(iVar9 + 0x14);
    fVar7 = (moby->pos).x - *(float *)(iVar9 + 0x10);
    fVar8 = (moby->pos).z - *(float *)(iVar9 + 0x18);
    fVar2 = *(float *)((int)pvVar4 + 0xf4);
    if (fVar2 <= SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar3 * fVar3)) {
      fVar3 = *(float *)((int)pvVar4 + 0xec);
      mobyutil::Delt(fVar3 * mobyutil::g_FrameTime,((fVar3 * fVar3) / fVar2) * DAT_0071f418 * 0.5,
                     (float *)((int)pvVar4 + 0xe4U));
    }
    else {
      mobyutil::Delt(mobyutil::g_FrameTime * 0.5,
                     ((*(float *)((int)pvVar4 + 0xec) * *(float *)((int)pvVar4 + 0xec)) / fVar2) *
                     DAT_0071f418 * 0.5,(float *)((int)pvVar4 + 0xe4U));
    }
    mobyutil::ClampVec3Magnitude
              ((double)*(float *)((int)pvVar4 + 0xe4),(Vec4 *)((int)pvVar4 + 0xa0));
    fVar2 = (moby->pos).x + *(float *)((int)pvVar4 + 0xa0);
    (moby->pos).x = fVar2;
    fVar3 = (moby->pos).y + *(float *)((int)pvVar4 + 0xa4);
    (moby->pos).y = fVar3;
    fVar7 = (moby->pos).z + *(float *)((int)pvVar4 + 0xa8);
    (moby->pos).z = fVar7;
    iVar11 = *(int *)((int)pvVar4 + 0xc0) + iVar14 * 0x10;
    fVar3 = fVar3 - *(float *)(iVar11 + 0x14);
    fVar2 = fVar2 - *(float *)(iVar11 + 0x10);
    fVar7 = fVar7 - *(float *)(iVar11 + 0x18);
    if ((SQRT(fVar7 * fVar7 + fVar2 * fVar2 + fVar3 * fVar3) < *(float *)((int)pvVar4 + 0xe4) * 2.0)
       && (((*(int *)((int)pvVar4 + 0xb0) = iVar14, iVar14 == iVar10 + -1 ||
            (*(int *)((int)pvVar4 + 0x108) != 0)) && (0 < *(int *)((int)pvVar4 + 0xf0))))) {
      iVar10 = *(int *)((int)pvVar4 + 0x104);
      if (((iVar10 != -1) && (sound::g_SoundChannels[iVar10].pMoby == moby)) &&
         (sound::g_SoundChannels[iVar10].state != '\0')) {
        sound::sound_Kill(iVar10);
      }
      auVar18 = ZEXT416(0xffffffff);
      auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
      *(undefined4 *)((int)pvVar4 + 0x104) = 0xffffffff;
      auVar19 = vectorShiftLeftIntegerWord(auVar18,auVar18);
      moby->state = '\x02';
      auVar18 = loadVectorLeftIndexed(0xf0,uVar15);
      auVar16 = loadVectorRightIndexed(0x100,uVar15);
      auVar17 = loadVectorLeftIndexed(in_LR,0x4009d4);
      auVar16 = vectorConvertFromSignedFixedPointWord(auVar18 | auVar16,0);
      auVar18 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar17 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar18 = vectorAddFloatingPoint
                          (auVar16,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60);
      auVar18 = vectorMultiplyAddFloatingPoint(auVar17,auVar18,auVar19);
      auVar18 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
      auVar18 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar6 = storeVectorElementWordIndexed
                        (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,0xe8,uVar15);
      *(undefined4 *)((int)pvVar4 + 0xe8U & 0xfffffffc) = uVar6;
    }
  }
  else if ((bVar1 < 3) && (iVar10 = fastfunc::FastDecTimerS32(uVar15 + 0xe8), iVar10 != 0)) {
    moby->state = '\x01';
  }
  local_50.x = local_50.x + (moby->pos).x;
  local_50.y = local_50.y + (moby->pos).y;
  local_50.z = local_50.z + (moby->pos).z;
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar4 + 0x60),&local_50,ZEXT48(&stack0x00000000) - 0x40,
             (longlong)(int)moby + 0x40);
  return;
}



//==== 00400f24  ns=mobyupdate_helpers  size=0x14
// sig: undefined M752_00400f24(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M752_00400f24(void)

{
  DAT_00854820 = 0x10000;
  return;
}



//==== 00400f48  ns=mobyupdate_unsorted  size=0x18c
// sig: undefined UpdateMoby_647(MobyInstance * moby)
// callers(0): 
// callees(1): 00109c30 mobyutil::OrganicDelt

/* Moby 647 */

void mobyupdate_unsorted::UpdateMoby_647(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  f32 *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  pfVar5 = (f32 *)moby->pVar;
  if (moby->state == 0) {
    *pfVar5 = (moby->pos).x;
    pfVar5[1] = (moby->pos).y;
    pfVar5[2] = (moby->pos).z;
    pfVar5[3] = (moby->pos).w;
    moby->state = '\x02';
  }
  else if (moby->state < 2) {
    (moby->pos).x = *pfVar5;
    (moby->pos).y = pfVar5[1];
    (moby->pos).z = pfVar5[2];
    (moby->pos).w = pfVar5[3];
    mobyutil::OrganicDelt
              (pfVar5[5],DAT_0071f418 * 4.0,DAT_0071f418 * 4.0,mobyutil::g_FrameTime * 8.0,
               pfVar5 + 6,0x720000,pfVar5 + 4);
    fVar1 = (moby->transform).v0.y;
    fVar2 = (moby->transform).v0.x;
    fVar3 = (moby->transform).v0.z;
    fVar4 = 0.0;
    fVar9 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
    fVar6 = pfVar5[6] / fVar9;
    fVar8 = fVar4;
    if (0.0 - fVar9 < 0.0) {
      fVar8 = fVar3 * fVar6;
    }
    fVar7 = fVar4;
    if (0.0 - fVar9 < 0.0) {
      fVar7 = fVar1 * fVar6;
    }
    if (0.0 - fVar9 < 0.0) {
      fVar4 = fVar2 * fVar6;
    }
    if (fVar9 - 0.0 < 0.0) {
      fVar8 = fVar3 * fVar6;
    }
    if (fVar9 - 0.0 < 0.0) {
      fVar7 = fVar1 * fVar6;
    }
    if (fVar9 - 0.0 < 0.0) {
      fVar4 = fVar2 * fVar6;
    }
    (moby->pos).z = (moby->pos).z + fVar8;
    (moby->pos).y = (moby->pos).y + fVar7;
    (moby->pos).x = (moby->pos).x + fVar4;
    if (pfVar5[6] == pfVar5[5]) {
      moby->state = '\x02';
    }
  }
  return;
}



//==== 004010d8  ns=Global  size=0xec
// sig: undefined FUN_004010d8(void)
// callers(1): 004030c8 mobyupdate_unsorted::UpdateMoby_654
// callees(0): 

MobyInstance * FUN_004010d8(longlong param_1,int param_2)

{
  float fVar1;
  ushort uVar2;
  void *pvVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  ushort *puVar8;
  MobyInstance *pMVar9;
  MobyInstance *pMVar10;
  
  fVar1 = 1000.0;
  puVar8 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  if (puVar8 == (ushort *)0x0) {
    pMVar9 = (MobyInstance *)0x0;
  }
  else {
    pMVar9 = (MobyInstance *)0x0;
    do {
      do {
        pMVar10 = MobyInstance + (*puVar8 & 0x7fff);
      } while (pMVar10->oClass != DOOR_0287);
      fVar4 = GameCamera.posY - (pMVar10->pos).y;
      fVar5 = GameCamera.posX - (pMVar10->pos).x;
      fVar6 = GameCamera.posZ - (pMVar10->pos).z;
      fVar4 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
      if (fVar4 < fVar1) {
        fVar1 = fVar4;
        pMVar9 = pMVar10;
      }
      pvVar3 = pMVar10->pVar;
      pMVar10->state = '\x01';
      uVar7 = DAT_00854844;
      *(undefined4 *)((int)pvVar3 + 0x14) = DAT_00854844;
      if (param_2 != 0) {
        *(undefined4 *)((int)pvVar3 + 0x18) = uVar7;
      }
      uVar2 = *puVar8;
      puVar8 = puVar8 + 1;
    } while (-1 < (short)uVar2);
  }
  return pMVar9;
}



//==== 004011c8  ns=Global  size=0xe8
// sig: undefined FUN_004011c8(void)
// callers(1): 004030c8 mobyupdate_unsorted::UpdateMoby_654
// callees(0): 

MobyInstance * FUN_004011c8(longlong param_1,int param_2)

{
  float fVar1;
  ushort uVar2;
  void *pvVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ushort *puVar7;
  MobyInstance *pMVar8;
  MobyInstance *pMVar9;
  
  fVar1 = 1000.0;
  puVar7 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  if (puVar7 == (ushort *)0x0) {
    pMVar8 = (MobyInstance *)0x0;
  }
  else {
    pMVar8 = (MobyInstance *)0x0;
    do {
      do {
        pMVar9 = MobyInstance + (*puVar7 & 0x7fff);
      } while (pMVar9->oClass != DOOR_0287);
      fVar4 = GameCamera.posY - (pMVar9->pos).y;
      fVar5 = GameCamera.posX - (pMVar9->pos).x;
      fVar6 = GameCamera.posZ - (pMVar9->pos).z;
      fVar4 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
      if (fVar4 < fVar1) {
        fVar1 = fVar4;
        pMVar8 = pMVar9;
      }
      pvVar3 = pMVar9->pVar;
      pMVar9->state = '\x01';
      *(undefined4 *)((int)pvVar3 + 0x14) = 0;
      if (param_2 != 0) {
        *(undefined4 *)((int)pvVar3 + 0x18) = 0;
      }
      uVar2 = *puVar7;
      puVar7 = puVar7 + 1;
    } while (-1 < (short)uVar2);
  }
  return pMVar8;
}



//==== 004012d0  ns=mobyupdate_unsorted  size=0x964
// sig: undefined UpdateMoby_648(MobyInstance * moby)
// callers(0): 
// callees(5): 000fcbe8 mobyutil::MB_randRangeFloat; 001206e8 partupd::SpawnPart_2; 004fff60 fastfunc::FastDecTimerS32; 00500ca4 fastfunc::FastEulerToMtx1; 00502758 fastfunc::FastDoubleToInt

/* Moby 648 */

void mobyupdate_unsorted::UpdateMoby_648(MobyInstance *moby)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar7;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined4 local_f0 [16];
  undefined4 local_b0 [20];
  
  puVar1 = (undefined4 *)moby->pVar;
  iVar7 = fastfunc::FastDecTimerS32(puVar1 + 0xf);
  if (iVar7 != 0) {
    dVar10 = -0.05000000074505806;
    dVar11 = 0.05000000074505806;
    dVar9 = 0.1745329201221466;
    dVar13 = 1.5;
    dVar8 = -0.1745329201221466;
    dVar12 = 1.2000000476837158;
    if (puVar1[0xe] == 0) {
      puVar1[0xf] = puVar1[5];
      fastfunc::FastEulerToMtx1(local_b0,(longlong)(int)moby + 0x40);
      mobyutil::MB_randRangeFloat((float)dVar10,(float)dVar11);
      mobyutil::MB_randRangeFloat((float)dVar10,(float)dVar11);
      mobyutil::MB_randRangeFloat((float)dVar10,(float)dVar11);
      mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar9);
      mobyutil::MB_randRangeFloat((float)puVar1[6],(float)((double)(float)puVar1[6] * dVar12));
      mobyutil::MB_randRangeFloat(-(float)puVar1[0xc],(float)puVar1[0xc]);
      mobyutil::MB_randRangeFloat((float)puVar1[7],(float)((double)(float)puVar1[7] * dVar12));
      mobyutil::MB_randRangeFloat((float)puVar1[8],(float)((double)(float)puVar1[8] * dVar13));
      mobyutil::MB_randRangeFloat(-(float)puVar1[0xd],(float)puVar1[0xd]);
      mobyutil::MB_randRangeFloat((float)puVar1[9],(float)((double)(float)puVar1[9] * dVar13));
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      dVar8 = (double)mobyutil::MB_randRangeFloat
                                ((float)(longlong)(int)puVar1[2],
                                 (float)((double)(longlong)(int)puVar1[2] * dVar12));
      uVar4 = fastfunc::FastDoubleToInt((double)(float)(dVar8 * (double)animationSpeed));
      dVar8 = (double)mobyutil::MB_randRangeFloat
                                ((float)(longlong)(int)puVar1[3],
                                 (float)((double)(longlong)(int)puVar1[3] * dVar12));
      uVar5 = fastfunc::FastDoubleToInt((double)(float)(dVar8 * (double)animationSpeed));
      dVar8 = (double)mobyutil::MB_randRangeFloat
                                ((float)(longlong)(int)puVar1[4],
                                 (float)((double)(longlong)(int)puVar1[4] * dVar12));
      uVar6 = fastfunc::FastDoubleToInt((double)(float)(dVar8 * (double)animationSpeed));
      partupd::SpawnPart_2(local_100,local_120,local_110,uVar2,uVar3,uVar4,uVar5,uVar6);
    }
    else {
      puVar1[0xf] = DAT_00854868;
      fastfunc::FastEulerToMtx1(local_f0,(longlong)(int)moby + 0x40);
      mobyutil::MB_randRangeFloat((float)dVar10,(float)dVar11);
      mobyutil::MB_randRangeFloat((float)dVar10,(float)dVar11);
      mobyutil::MB_randRangeFloat((float)dVar10,(float)dVar11);
      mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar9);
      mobyutil::MB_randRangeFloat(DAT_010cbbd8,(float)((double)DAT_010cbbd8 * dVar12));
      mobyutil::MB_randRangeFloat(-DAT_010cbbdc,DAT_010cbbdc);
      mobyutil::MB_randRangeFloat(DAT_00854850,(float)((double)DAT_00854850 * dVar12));
      mobyutil::MB_randRangeFloat(DAT_00854858,(float)((double)DAT_00854858 * dVar13));
      mobyutil::MB_randRangeFloat(-DAT_00854874,DAT_00854874);
      mobyutil::MB_randRangeFloat(DAT_00854854,(float)((double)DAT_00854854 * dVar13));
      uVar3 = DAT_0085484c;
      uVar2 = DAT_00854848;
      dVar8 = (double)mobyutil::MB_randRangeFloat
                                ((float)(longlong)DAT_0085485c,
                                 (float)((double)(longlong)DAT_0085485c * dVar12));
      uVar4 = fastfunc::FastDoubleToInt((double)(float)(dVar8 * (double)animationSpeed));
      dVar8 = (double)mobyutil::MB_randRangeFloat
                                ((float)(longlong)DAT_00854860,
                                 (float)((double)(longlong)DAT_00854860 * dVar12));
      uVar5 = fastfunc::FastDoubleToInt((double)(float)(dVar8 * (double)animationSpeed));
      dVar8 = (double)mobyutil::MB_randRangeFloat
                                ((float)(longlong)DAT_00854864,
                                 (float)((double)(longlong)DAT_00854864 * dVar12));
      uVar6 = fastfunc::FastDoubleToInt((double)(float)(dVar8 * (double)animationSpeed));
      partupd::SpawnPart_2(local_130,local_150,local_140,uVar2,uVar3,uVar4,uVar5,uVar6);
    }
  }
  return;
}



//==== 00401c48  ns=mobyupdate_unsorted  size=0x19c
// sig: undefined UpdateMoby_65(MobyInstance * moby)
// callers(0): 
// callees(4): 000efa28 mobyfunc::CreateMoby; 0010a2e0 mobyutil::OrganicDeltAng; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

/* Moby 65 */

void mobyupdate_unsorted::UpdateMoby_65(MobyInstance *moby)

{
  byte bVar1;
  MobyModeBit MVar2;
  float *speed;
  MobyInstance *pMVar3;
  double dVar4;
  float fVar5;
  
  bVar1 = moby->state;
  speed = (float *)moby->pVar;
  if (bVar1 == 0) {
    MVar2 = moby->modeBits;
    fVar5 = (moby->rotation).z;
    moby->state = '\x01';
    speed[1] = fVar5;
    if ((MVar2 & MIRROR) == NONE) {
      pMVar3 = mobyfunc::CreateMoby(0x41);
      pMVar3->drawDistance = moby->drawDistance;
      pMVar3->updateDistance = moby->updateDistance;
      pMVar3->modeBits = moby->modeBits | MIRROR;
      (pMVar3->pos).x = (moby->pos).x;
      (pMVar3->pos).y = (moby->pos).y;
      (pMVar3->pos).z = (moby->pos).z;
      (pMVar3->pos).w = (moby->pos).w;
      (pMVar3->rotation).x = (moby->rotation).x;
      (pMVar3->rotation).y = (moby->rotation).y;
      (pMVar3->rotation).z = (moby->rotation).z;
      (pMVar3->rotation).w = (moby->rotation).w;
      speed[2] = (float)pMVar3;
      *(f32 *)((int)pMVar3->pVar + 4) = (moby->rotation).z;
    }
  }
  else if ((1 < bVar1) && (bVar1 < 3)) {
    if ((moby->modeBits & MIRROR) == NONE) {
      dVar4 = (double)fastfunc::FastWrapRot(speed[1],0.20769417);
    }
    else {
      dVar4 = (double)fastfunc::FastDiffRots((double)speed[1],0x3fca95b900000000);
    }
    fVar5 = mobyutil::OrganicDeltAng
                      ((float)dVar4,DAT_0071f418 * 0.34906584,DAT_0071f418 * 0.34906584,
                       mobyutil::g_FrameTime * 0.7853982,&(moby->rotation).z,0x720000,speed);
    if (fVar5 == 0.0) {
      moby->state = '\x03';
    }
  }
  return;
}



//==== 00401de4  ns=mobyupdate_helpers  size=0x4c
// sig: undefined M650_00401de4(void)
// callers(2): 001dd210 mobyupdate_helpers::M1140_001dd210; 001de6a0 mobyupdate_helpers::M1140_001de6a0
// callees(0): 

void mobyupdate_helpers::M650_00401de4(int param_1)

{
  int iVar1;
  
  if ((*(short *)(param_1 + 0xa6) == 0x41) && (*(char *)(param_1 + 0x20) == '\x01')) {
    MiscLevelFlags.field90_0x5a = 1;
    *(undefined1 *)(param_1 + 0x20) = 2;
    iVar1 = *(int *)(*(int *)(param_1 + 0x78) + 8);
    if (iVar1 != 0) {
      *(undefined1 *)(iVar1 + 0x20) = 2;
    }
  }
  return;
}



//==== 00401e30  ns=mobyupdate_helpers  size=0x14
// sig: undefined M650_00401e30(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M650_00401e30(void)

{
  DAT_008548c4 = 0x10000;
  return;
}



//==== 00401e50  ns=mobyupdate_unsorted  size=0x134
// sig: undefined UpdateMoby_650(MobyInstance * moby)
// callers(0): 
// callees(3): 00109c30 mobyutil::OrganicDelt; 0015d12c sound::PlayMobySound; 004fff60 fastfunc::FastDecTimerS32

/* Moby 650 */

void mobyupdate_unsorted::UpdateMoby_650(MobyInstance *moby)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  
  pfVar2 = (float *)moby->pVar;
  if (moby->state == 0) {
    fVar1 = (moby->pos).z;
    moby->state = '\x01';
    *pfVar2 = fVar1;
  }
  else if (moby->state < 2) {
    iVar3 = fastfunc::FastDecTimerS32(pfVar2 + 2);
    if (iVar3 == 0) {
      fVar1 = *pfVar2 + DAT_008548e8;
    }
    else {
      if ((iVar3 == 2) &&
         (iVar3 = DAT_010cbbe0 - worldUpdateTime, 3 < iVar3 + (iVar3 >> 0x1f & iVar3 * -2))) {
        DAT_010cbbe0 = worldUpdateTime;
        sound::PlayMobySound(1,0,moby);
      }
      fVar1 = *pfVar2;
    }
    mobyutil::OrganicDelt
              (fVar1,DAT_0071f418 * 10.0,DAT_0071f418 * 10.0,mobyutil::g_FrameTime * 10.0,
               &(moby->pos).z,0x720000,pfVar2 + 1);
  }
  return;
}



//==== 00401f88  ns=Global  size=0xc4
// sig: undefined FUN_00401f88(void)
// callers(1): 003ad150 mobyupdate_unsorted::UpdateMoby_541
// callees(0): 

MobyInstance * FUN_00401f88(longlong param_1,float *param_2)

{
  float fVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort *puVar6;
  MobyInstance *pMVar7;
  MobyInstance *pMVar8;
  
  fVar1 = 37.0;
  puVar6 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  if (puVar6 == (ushort *)0x0) {
    pMVar7 = (MobyInstance *)0x0;
  }
  else {
    pMVar7 = (MobyInstance *)0x0;
    do {
      do {
        pMVar8 = MobyInstance + (*puVar6 & 0x7fff);
      } while (pMVar8->oClass != TEST_DUMMY_DOOR);
      fVar4 = param_2[1] - (pMVar8->pos).y;
      fVar3 = *param_2 - (pMVar8->pos).x;
      fVar5 = param_2[2] - (pMVar8->pos).z;
      fVar3 = SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4);
      if (fVar3 < fVar1) {
        fVar1 = fVar3;
        pMVar7 = pMVar8;
      }
      uVar2 = *puVar6;
      puVar6 = puVar6 + 1;
    } while (-1 < (short)uVar2);
  }
  return pMVar7;
}



//==== 00402050  ns=Global  size=0xc8
// sig: undefined FUN_00402050(void)
// callers(1): 003ad150 mobyupdate_unsorted::UpdateMoby_541
// callees(1): 0015d12c sound::PlayMobySound

void FUN_00402050(MobyInstance *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 in_LR;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  pvVar1 = param_1->pVar;
  if (*(int *)((int)pvVar1 + 8) == 0) {
    iVar3 = DAT_010cbbe0 - worldUpdateTime;
    if (3 < iVar3 + (iVar3 >> 0x1f & iVar3 * -2)) {
      DAT_010cbbe0 = worldUpdateTime;
      sound::PlayMobySound(0,0,param_1);
    }
  }
  auVar4 = ZEXT416(0xffffffff);
  auVar4 = auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60;
  auVar5 = vectorShiftLeftIntegerWord(auVar4,auVar4);
  auVar4 = loadVectorLeftIndexed(in_LR,0x40204c);
  auVar6 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar4 = auVar4 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar4 = vectorMultiplyAddFloatingPoint
                     (auVar6,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,auVar5);
  auVar4 = vectorConvertToSignedFixedPointWordSaturate(auVar4,0);
  auVar4 = auVar4 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar2 = storeVectorElementWordIndexed
                    (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,8,ZEXT48(pvVar1));
  *(undefined4 *)((int)pvVar1 + 8U & 0xfffffffc) = uVar2;
  return;
}



//==== 00402130  ns=mobyupdate_unsorted  size=0x5ec
// sig: undefined UpdateMoby_651(MobyInstance * moby)
// callers(0): 
// callees(7): 0006d720 RegisterFuncForMoby; 00109c30 mobyutil::OrganicDelt; 00110c60 mobyutil::MB_IsPntInCylinder; 00112900 mobyutil::MB_GetOrientation; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound

/* Moby 651 */

void mobyupdate_unsorted::UpdateMoby_651(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  f32 fVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  Cylinder *pCVar10;
  int iVar11;
  f32 *val;
  int speed;
  longlong lVar12;
  Vec4 local_50;
  f32 local_40;
  f32 local_3c;
  f32 local_38;
  f32 local_34;
  Vec4 local_30;
  
  pCVar10 = Cylinders;
  local_50.x = -(moby->pos).x;
  local_50.y = -(moby->pos).y;
  local_50.z = -(moby->pos).z;
  pvVar5 = moby->pVar;
  local_50.w = (moby->pos).w;
  local_40 = (moby->rotation).x;
  local_3c = (moby->rotation).y;
  local_38 = (moby->rotation).z;
  local_34 = (moby->rotation).w;
  if (pvVar5 == (void *)0x0) {
    return;
  }
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar11 = *(int *)((int)pvVar5 + 0xa0);
      *(undefined4 *)((int)pvVar5 + 0xb4) = 0xffffffff;
      fVar2 = pCVar10[iVar11].matrix.v2.z;
      *(float *)((int)pvVar5 + 0xa8) = fVar2 + pCVar10[iVar11].pos.z;
      fVar4 = DAT_008548ec;
      fVar3 = pCVar10[iVar11].pos.z;
      moby->setByGroup = '\x01';
      (moby->pos).z = fVar2 + fVar3 + fVar4;
      moby->state = (char)((LZCOUNT(-*(int *)((int)pvVar5 + 0xa4)) << 0x3a) >> 0x3f) + '\x02';
    }
    else if (((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) ||
            (UnlockableItems.trespasser != '\0')) {
      fVar2 = 1.0;
      if (moby->setByGroup != '\0') {
        fVar2 = -1.0;
      }
      moby->setByGroup = moby->setByGroup + 1U & 1;
      fVar9 = DAT_008548ec;
      fVar3 = Cylinders[*(int *)((int)pvVar5 + 0xa0)].matrix.v2.z;
      fVar4 = Cylinders[*(int *)((int)pvVar5 + 0xa0)].pos.z;
      *(undefined4 *)((int)pvVar5 + 0xb0) = 0;
      *(float *)((int)pvVar5 + 0xa8) = fVar3 * fVar2 + fVar4 + fVar9;
      moby->state = '\x03';
    }
    goto LAB_004026b8;
  }
  if (bVar1 < 3) {
    iVar11 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar5 + 0xb4));
    if (iVar11 != 0) {
      sound::sound_Kill(*(int *)((int)pvVar5 + 0xb4));
      *(undefined4 *)((int)pvVar5 + 0xb4) = 0xffffffff;
    }
    fVar2 = (moby->pos).y - g_heroPosition.y;
    fVar3 = (moby->pos).x - g_heroPosition.x;
    if (SQRT(fVar3 * fVar3 + fVar2 * fVar2) < 20.0) {
      fVar2 = 1.0;
      if (moby->setByGroup != '\0') {
        fVar2 = -1.0;
      }
      fVar2 = Cylinders[*(int *)((int)pvVar5 + 0xa0)].matrix.v2.z * fVar2 +
              Cylinders[*(int *)((int)pvVar5 + 0xa0)].pos.z + DAT_008548ec;
      if (ABS(g_heroPosition.z - fVar2) < 1.0) {
        moby->setByGroup = moby->setByGroup + 1U & 1;
        *(float *)((int)pvVar5 + 0xa8) = fVar2;
        *(undefined4 *)((int)pvVar5 + 0xb0) = 0;
        moby->state = '\x03';
        goto LAB_004026b8;
      }
    }
    if ((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) {
      fVar2 = 1.0;
      if (moby->setByGroup != '\0') {
        fVar2 = -1.0;
      }
      moby->setByGroup = moby->setByGroup + 1U & 1;
      fVar9 = DAT_008548ec;
      fVar3 = Cylinders[*(int *)((int)pvVar5 + 0xa0)].matrix.v2.z;
      fVar4 = Cylinders[*(int *)((int)pvVar5 + 0xa0)].pos.z;
      *(undefined4 *)((int)pvVar5 + 0xb0) = 0;
      *(float *)((int)pvVar5 + 0xa8) = fVar3 * fVar2 + fVar4 + fVar9;
      moby->state = '\x03';
    }
    goto LAB_004026b8;
  }
  if (3 < bVar1) goto LAB_004026b8;
  iVar11 = mobyutil::MB_IsPntInCylinder
                     ((Vec4 *)&hero::g_heroCGPos,(longlong)*(int *)((int)pvVar5 + 0xa0));
  speed = (int)pvVar5 + 0xb0;
  val = &(moby->pos).z;
  if (iVar11 == 0) {
LAB_00402554:
    local_30.z = mobyutil::OrganicDelt
                           (*(float *)((int)pvVar5 + 0xa8),DAT_008548fc * DAT_0071f418,
                            DAT_008548fc * DAT_0071f418,DAT_008548f8 * mobyutil::g_FrameTime,val,
                            speed,(float *)speed);
  }
  else {
    fVar6 = (moby->pos).z;
    fVar2 = (moby->pos).z;
    uVar7 = (int)fVar6 >> 0x1f;
    if ((1.0 < ABS((fVar2 - g_heroPosition.z) - 2.0)) ||
       (uVar8 = (int)*(uint *)((int)pvVar5 + 0xa8) >> 0x1f,
       (int)((uVar7 >> 1 ^ (uint)fVar6) - uVar7) <
       (int)((uVar8 >> 1 ^ *(uint *)((int)pvVar5 + 0xa8)) - uVar8))) goto LAB_00402554;
    fVar3 = DAT_008548fc * 4.0 * DAT_0071f418;
    local_30.z = mobyutil::OrganicDelt
                           (fVar2,fVar3,fVar3,DAT_008548f8 * mobyutil::g_FrameTime,val,speed,
                            (float *)speed);
  }
  lVar12 = (longlong)(int)moby + 0x40;
  local_30.w = 0.0;
  local_30.y = 0.0;
  local_30.x = 0.0;
  mobyutil::MB_GetOrientation((MobyInstance *)((int)pvVar5 + 0x60),&local_30,lVar12,lVar12);
  if (local_30.z == 0.0) {
    iVar11 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar5 + 0xb4));
    if (iVar11 != 0) {
      sound::sound_Kill(*(int *)((int)pvVar5 + 0xb4));
      *(undefined4 *)((int)pvVar5 + 0xb4) = 0xffffffff;
    }
  }
  else {
    iVar11 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar5 + 0xb4));
    if (iVar11 == 0) {
      iVar11 = sound::PlayMobySound(0,4,moby);
      *(int *)((int)pvVar5 + 0xb4) = iVar11;
    }
  }
  if (((moby->pos).z == *(f32 *)((int)pvVar5 + 0xa8)) &&
     ((g_standingOnMoby != moby || (g_framesNotGrounded != 0)))) {
    *(undefined4 *)((int)pvVar5 + 0x7c) = 0;
    *(undefined4 *)((int)pvVar5 + 0x78) = 0;
    *(undefined4 *)((int)pvVar5 + 0x74) = 0;
    *(undefined4 *)((int)pvVar5 + 0x70) = 0;
    moby->state = '\x02';
  }
  else if (*(int *)((int)pvVar5 + 0xb0) != 0) {
    RegisterFuncForMoby(&PTR_M654_00402750_0070de30,moby);
  }
LAB_004026b8:
  local_50.x = local_50.x + (moby->pos).x;
  local_50.y = local_50.y + (moby->pos).y;
  local_50.z = local_50.z + (moby->pos).z;
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar5 + 0x60),&local_50,ZEXT48(&stack0x00000000) - 0x40,
             (longlong)(int)moby + 0x40);
  return;
}



//==== 00402750  ns=mobyupdate_helpers  size=0x7bc
// sig: undefined M654_00402750(void)
// callers(0): 
// callees(8): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00500f6c fastfunc::FastMtxCopyNoTranslate; 00502648 fastfunc::FastAddRots; 005027bc fastfunc::FastLerpColor; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M654_00402750(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  float fVar7;
  Cylinder *pCVar8;
  longlong lVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  undefined4 uVar14;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar15;
  undefined4 *puVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong unaff_r25;
  int iVar19;
  ulonglong unaff_r26;
  int iVar20;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  byte in_cr6;
  ulonglong in_LR;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  ulonglong in_f19;
  double dVar26;
  ulonglong in_f20;
  ulonglong in_f21;
  double dVar27;
  ulonglong in_f22;
  double dVar28;
  ulonglong in_f23;
  double dVar29;
  ulonglong in_f24;
  double dVar30;
  ulonglong in_f25;
  double dVar31;
  ulonglong in_f26;
  double dVar32;
  ulonglong in_f27;
  double dVar33;
  ulonglong in_f28;
  double dVar34;
  ulonglong in_f29;
  double dVar35;
  ulonglong in_f30;
  double dVar36;
  ulonglong in_f31;
  double dVar37;
  double dVar38;
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
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar17 = uVar11 - 0x230;
  puVar6 = (ulonglong *)lVar17;
  *puVar6 = uVar11;
  puVar6[0x48] = in_LR;
  puVar6[0x39] = in_f19;
  puVar6[0x3a] = in_f20;
  puVar6[0x3b] = in_f21;
  puVar6[0x3c] = in_f22;
  puVar6[0x3d] = in_f23;
  puVar6[0x3e] = in_f24;
  puVar6[0x3f] = in_f25;
  puVar6[0x40] = in_f26;
  puVar6[0x41] = in_f27;
  puVar6[0x42] = in_f28;
  puVar6[0x43] = in_f29;
  puVar6[0x44] = in_f30;
  puVar6[0x45] = in_f31;
  puVar6[0x37] = unaff_r30;
  lVar9 = uVar11 - 0xb0;
  puVar10 = (undefined4 *)lVar9;
  puVar10[3] = in_vr31_32_3;
  puVar10[2] = in_vr31_32_2;
  puVar10[1] = in_vr31_32_1;
  *puVar10 = in_vr31_32_0;
  pCVar8 = Cylinders;
  iVar19 = *(int *)(param_1 + 0x78);
  iVar20 = *(int *)(iVar19 + 0xa0);
  fVar1 = *(float *)(iVar19 + 0xb0);
  fVar2 = *(float *)(iVar19 + 0xb8);
  puVar6[0x34] = unaff_r27;
  uVar14 = DAT_0085491c;
  uVar5 = DAT_00854918;
  fVar3 = pCVar8[iVar20].pos.z;
  fVar4 = pCVar8[iVar20].matrix.v2.z;
  fVar7 = DAT_008548f8 * mobyutil::g_FrameTime;
  dVar37 = (double)((fVar3 - fVar4) + fVar2);
  dVar29 = (double)(fVar3 + fVar4 + fVar2);
  puVar6[0x38] = unaff_r31;
  puVar6[0x36] = unaff_r29;
  puVar6[0x35] = unaff_r28;
  puVar6[0x33] = unaff_r26;
  puVar6[0x32] = unaff_r25;
  uVar14 = fastfunc::FastLerpColor((double)(ABS(fVar1) / fVar7),uVar5,uVar14);
  fastfunc::FastMtxCopyNoTranslate(uVar11 - 0x1c0,param_1 + 0xc0);
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar6 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)puVar6 + 0xa4) = uVar5;
  *(float *)(puVar6 + 0x15) = (float)dVar37;
  *(undefined4 *)((int)puVar6 + 0xac) = 0x3f800000;
  uVar12 = draw::GetEffectTex(0xe);
  puVar6[0x25] = uVar12;
  uVar12 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar6[0x26] = uVar12;
  uVar12 = FUN_00502f08(0,0,0,0,0,0);
  puVar6[0x24] = uVar12;
  uVar12 = idol_draw::PackCmd(DAT_010cbbe4,DAT_00854910,DAT_010cbbe8,DAT_00854914,0x80);
  puVar6[0x27] = uVar12;
  auVar41 = loadVectorLeftIndexed(lVar9,0x40271c);
  auVar44 = ZEXT416(0);
  auVar40 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
  auVar44 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar18 = 0;
  auVar41 = loadVectorLeftIndexed(4,0x40271c);
  dVar30 = 0.01745329238474369;
  auVar49 = loadVectorLeftIndexed(8,0x40271c);
  dVar31 = 1.570796251296997;
  auVar51 = loadVectorLeftIndexed(0xc,0x40271c);
  dVar32 = 3.141592502593994;
  auVar48 = loadVectorLeftIndexed(0x10,0x40271c);
  dVar33 = -3.141592502593994;
  auVar43 = loadVectorLeftIndexed(0x14,0x40271c);
  dVar34 = -0.16666656732559204;
  auVar45 = loadVectorLeftIndexed(0x18,0x40271c);
  dVar35 = 0.008333025500178337;
  puVar16 = &DAT_00854928;
  auVar46 = loadVectorLeftIndexed(0x1c,0x40271c);
  puVar10 = &DAT_0085492c;
  dVar36 = -0.0001980741071747616;
  lVar15 = uVar11 - 0x180;
  auVar47 = loadVectorLeftIndexed(0x20,0x40271c);
  lVar13 = uVar11 - 0x17c;
  dVar38 = 2.601886990305502e-06;
  auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar50 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
  auVar41 = auVar49 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar49 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar51 = auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60;
  auVar49 = auVar48 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar48 = auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60;
  auVar49 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar43 = auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60;
  auVar49 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar45 = auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60;
  auVar49 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar46 = auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60;
  auVar49 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar47 = auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60;
  dVar37 = (double)*(float *)(puVar6 + 0x15);
  lVar9 = lVar17;
  auVar49 = auVar40;
  do {
    uVar5 = *puVar10;
    *(undefined4 *)((int)lVar9 + 0x100) = *puVar16;
    *(undefined4 *)((int)lVar9 + 0x104) = uVar5;
    iVar19 = (int)lVar17;
    if ((uVar18 & 1) == 0) {
      auVar42 = loadVectorLeftIndexed(0x4908,0x850000);
      auVar42 = vectorSubtractFloatingPoint
                          (auVar42,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60);
      *(float *)(iVar19 + 0xb8) = -DAT_0085490c;
    }
    else {
      *(float *)(iVar19 + 0xb8) = DAT_0085490c;
      auVar42 = loadVectorLeftIndexed(0x4908,0x850000);
    }
    auVar53 = ZEXT416(0xffffffff);
    auVar52 = auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60;
    auVar53 = ZEXT416(1);
    auVar39 = auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60;
    auVar53 = ZEXT416(0xffffffff);
    auVar55 = auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60;
    auVar53 = ZEXT416(0xffffffff);
    auVar57 = auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60;
    auVar53 = vectorShiftLeftIntegerWord(auVar52,auVar52);
    auVar54 = vectorShiftRightAlgebraicWord(auVar49,auVar39);
    auVar52 = loadVectorLeftIndexed(0x4924,0x850000);
    auVar56 = vectorShiftLeftIntegerWord(auVar55,auVar55);
    auVar55 = vectorMultiplyAddFloatingPoint(auVar52,auVar50,auVar53);
    auVar58 = vectorShiftLeftIntegerWord(auVar57,auVar57);
    auVar57 = vectorConvertFromSignedFixedPointWord(auVar54,0);
    auVar53 = ZEXT416(0xffffffff);
    auVar61 = auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60;
    auVar52 = vectorMultiplyAddFloatingPoint(auVar52,auVar50,auVar56);
    auVar53 = ZEXT416(0xffffffff);
    auVar56 = auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60;
    auVar53 = ZEXT416(0xffffffff);
    auVar54 = auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60;
    auVar53 = ZEXT416(0xffffffff);
    auVar53 = auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60;
    auVar59 = vectorShiftLeftIntegerWord(auVar56,auVar56);
    auVar56 = vectorShiftLeftIntegerWord(auVar54,auVar54);
    auVar60 = vectorShiftLeftIntegerWord(auVar53,auVar53);
    auVar54 = vectorMultiplyAddFloatingPoint
                        (auVar55,auVar57,
                         auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60);
    auVar53 = vectorMultiplyAddFloatingPoint(auVar52,auVar57,auVar58);
    auVar55._0_4_ = auVar49._0_4_ + auVar39._0_4_;
    auVar55._8_8_ = auVar49._8_8_;
    auVar55._4_4_ = auVar49._4_4_ + auVar39._4_4_;
    auVar52._0_8_ = auVar55._0_8_;
    auVar52._12_4_ = auVar49._12_4_;
    auVar52._8_4_ = auVar49._8_4_ + auVar39._8_4_;
    auVar49._0_12_ = auVar52._0_12_;
    auVar49._12_4_ = auVar52._12_4_ + auVar39._12_4_;
    auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar39 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    uVar18 = uVar18 + 1;
    puVar16 = puVar16 + 2;
    puVar10 = puVar10 + 2;
    lVar9 = lVar9 + 8;
    auVar42 = vectorSubtractFloatingPoint(auVar51,auVar54);
    auVar57 = vectorSubtractFloatingPoint(auVar48,auVar54);
    auVar58 = vectorSubtractFloatingPoint(auVar51,auVar53);
    auVar52 = vectorCompareGreaterThanFloatingPoint(auVar42,auVar54);
    auVar52 = vectorConditionalSelect(auVar42,auVar54,auVar52);
    auVar42 = vectorCompareGreaterThanFloatingPoint(auVar58,auVar53);
    auVar55 = vectorSubtractFloatingPoint(auVar48,auVar53);
    auVar53 = vectorConditionalSelect(auVar58,auVar53,auVar42);
    auVar42 = ZEXT416(0xffffffff);
    auVar54 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    auVar42 = vectorCompareGreaterThanFloatingPoint(auVar52,auVar57);
    auVar52 = vectorConditionalSelect(auVar57,auVar52,auVar42);
    auVar57 = vectorShiftLeftIntegerWord(auVar61,auVar61);
    auVar63 = vectorShiftLeftIntegerWord(auVar54,auVar54);
    auVar54 = vectorMultiplyAddFloatingPoint(auVar52,auVar52,auVar56);
    auVar42 = ZEXT416(0xffffffff);
    auVar58 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    auVar42 = vectorCompareGreaterThanFloatingPoint(auVar53,auVar55);
    auVar53 = vectorConditionalSelect(auVar55,auVar53,auVar42);
    auVar42 = ZEXT416(0xffffffff);
    auVar55 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    auVar42 = ZEXT416(0xffffffff);
    auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    auVar57 = vectorMultiplyAddFloatingPoint(auVar53,auVar53,auVar57);
    auVar55 = vectorShiftLeftIntegerWord(auVar55,auVar55);
    auVar61 = vectorShiftLeftIntegerWord(auVar42,auVar42);
    auVar56 = vectorMultiplyAddFloatingPoint(auVar54,auVar52,auVar59);
    auVar42 = ZEXT416(0xffffffff);
    auVar59 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    auVar62 = vectorShiftLeftIntegerWord(auVar58,auVar58);
    auVar55 = vectorMultiplyAddFloatingPoint(auVar57,auVar53,auVar55);
    auVar58 = vectorMultiplyAddFloatingPoint(auVar54,auVar56,auVar60);
    auVar52 = vectorMultiplyAddFloatingPoint(auVar56,auVar43,auVar52);
    auVar42 = ZEXT416(0xffffffff);
    auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    auVar56 = vectorShiftLeftIntegerWord(auVar42,auVar42);
    auVar60 = vectorMultiplyAddFloatingPoint(auVar57,auVar55,auVar63);
    auVar53 = vectorMultiplyAddFloatingPoint(auVar55,auVar43,auVar53);
    auVar55 = vectorShiftLeftIntegerWord(auVar59,auVar59);
    auVar59 = vectorMultiplyAddFloatingPoint(auVar54,auVar58,auVar61);
    auVar52 = vectorMultiplyAddFloatingPoint(auVar58,auVar45,auVar52);
    auVar42 = ZEXT416(0xffffffff);
    auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    auVar58 = vectorShiftLeftIntegerWord(auVar42,auVar42);
    auVar56 = vectorMultiplyAddFloatingPoint(auVar57,auVar60,auVar56);
    auVar53 = vectorMultiplyAddFloatingPoint(auVar60,auVar45,auVar53);
    auVar54 = vectorMultiplyAddFloatingPoint(auVar54,auVar59,auVar62);
    auVar52 = vectorMultiplyAddFloatingPoint(auVar59,auVar46,auVar52);
    auVar42 = ZEXT416(0xffffffff);
    auVar59 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    auVar55 = vectorMultiplyAddFloatingPoint(auVar57,auVar56,auVar55);
    auVar42 = vectorMultiplyAddFloatingPoint(auVar56,auVar46,auVar53);
    auVar53 = vectorMultiplyAddFloatingPoint(auVar54,auVar47,auVar52);
    auVar54 = vectorShiftLeftIntegerWord(auVar59,auVar59);
    auVar42 = vectorMultiplyAddFloatingPoint(auVar55,auVar47,auVar42);
    auVar52 = vectorMultiplyAddFloatingPoint(auVar53,auVar39,auVar58);
    auVar53 = vectorMultiplyAddFloatingPoint(auVar42,auVar39,auVar54);
    auVar42 = auVar52 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar5 = storeVectorElementWordIndexed
                      (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0,lVar15);
    *(undefined4 *)lVar15 = uVar5;
    lVar15 = lVar15 + 0x10;
    auVar42 = auVar53 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar5 = storeVectorElementWordIndexed
                      (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0,lVar13);
    *(undefined4 *)lVar13 = uVar5;
    *(undefined4 *)(iVar19 + 0xbc) = 0x3f800000;
    lVar13 = lVar13 + 0x10;
    lVar17 = lVar17 + 0x10;
  } while ((int)uVar18 < 4);
  iVar19 = 1;
  if (dVar37 < dVar29) {
    do {
      auVar44 = ZEXT416(0xffffffff);
      auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
      auVar45 = vectorShiftLeftIntegerWord(auVar44,auVar44);
      auVar44 = ZEXT416(0xffffffff);
      auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
      auVar46 = vectorShiftLeftIntegerWord(auVar44,auVar44);
      auVar41 = loadVectorLeftIndexed(0x4924,0x850000);
      auVar49 = vectorReciprocalEstimateFloatingPoint(auVar41);
      puVar6[0x28] = (longlong)(worldUpdateTime % 0x78);
      auVar44 = loadVectorLeftIndexed(0x2c,0x40271c);
      auVar44 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar43 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
      auVar44 = ZEXT416(0xffffffff);
      auVar47 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
      auVar44 = vectorNegativeMultiplySubtractFloatingPoint(auVar49,auVar41,auVar43);
      auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
      iVar19 = -iVar19;
      iVar20 = 0;
      auVar49 = vectorMultiplyAddFloatingPoint(auVar49,auVar44,auVar45);
      auVar44 = ZEXT416(0xffffffff);
      auVar45 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
      auVar44 = loadVectorLeftIndexed(0x28,0x40271c);
      uVar12 = puVar6[0x28];
      auVar44 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar45 = vectorShiftLeftIntegerWord(auVar45,auVar45);
      dVar28 = 360.0;
      auVar47 = vectorNegativeMultiplySubtractFloatingPoint(auVar49,auVar41,auVar43);
      auVar49 = vectorMultiplyAddFloatingPoint(auVar49,auVar47,auVar46);
      dVar21 = (double)DAT_00854924;
      auVar41 = vectorNegativeMultiplySubtractFloatingPoint(auVar49,auVar41,auVar43);
      auVar41 = vectorMultiplyAddFloatingPoint(auVar49,auVar41,auVar45);
      auVar44 = vectorMultiplyAddFloatingPoint
                          (auVar41,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,
                           auVar48);
      auVar44 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
      vectorCompareGreaterThanOrEqualToFloatingPoint
                (auVar40,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60);
      if ((bool)(in_cr6 >> 1 & 1)) {
        puVar6[0x28] = (longlong)iVar19;
        dVar27 = 1.5707963705062866;
        dVar37 = (double)((float)(longlong)puVar6[0x28] * (float)(longlong)uVar12 * 0.026179917);
        do {
          puVar6[0x28] = (longlong)iVar20;
          dVar26 = (double)(longlong)puVar6[0x28];
          dVar21 = (double)fastfunc::FastAddRots
                                     ((float)((double)(float)(dVar21 * dVar30) * dVar26 + dVar37));
          dVar22 = (double)(float)(dVar21 + dVar31);
          dVar21 = (double)(float)(dVar32 - dVar22);
          if (dVar22 - (double)(float)(dVar32 - dVar22) < 0.0) {
            dVar21 = dVar22;
          }
          dVar24 = (double)(float)(dVar33 - dVar22);
          if ((double)(float)(dVar33 - dVar22) - dVar21 < 0.0) {
            dVar24 = dVar21;
          }
          dVar21 = (double)DAT_00854924;
          dVar22 = (double)(float)(dVar24 * dVar24);
          dVar25 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar24));
          dVar23 = (double)(float)(dVar22 * dVar25);
          *(float *)(puVar6 + 0xe) =
               (float)((double)(float)(dVar22 * dVar23) * dVar38 +
                      (double)(float)(dVar23 * dVar36 +
                                     (double)(float)(dVar25 * dVar35 +
                                                    (double)(float)((double)(float)(dVar22 * dVar24)
                                                                    * dVar34 + dVar24))));
          dVar22 = (double)fastfunc::FastAddRots
                                     ((float)((double)(float)(dVar21 * dVar30) * dVar26 + dVar37));
          dVar21 = (double)(float)(dVar32 - dVar22);
          if (dVar22 - (double)(float)(dVar32 - dVar22) < 0.0) {
            dVar21 = dVar22;
          }
          dVar23 = (double)DAT_00854924;
          *(undefined4 *)(puVar6 + 0xf) = 0;
          dVar24 = (double)(float)(dVar33 - dVar22);
          if ((double)(float)(dVar33 - dVar22) - dVar21 < 0.0) {
            dVar24 = dVar21;
          }
          dVar21 = (double)(float)(dVar24 * dVar24);
          dVar25 = (double)(float)(dVar21 * (double)(float)(dVar21 * dVar24));
          dVar22 = (double)(float)(dVar21 * dVar25);
          *(float *)((int)puVar6 + 0x74) =
               (float)((double)(float)(dVar21 * dVar22) * dVar38 +
                      (double)(float)(dVar22 * dVar36 +
                                     (double)(float)(dVar25 * dVar35 +
                                                    (double)(float)((double)(float)(dVar21 * dVar24)
                                                                    * dVar34 + dVar24))));
          dVar21 = (double)fastfunc::FastAddRots
                                     ((float)((double)(float)((double)(float)(dVar23 * dVar30) *
                                                              dVar26 + dVar27) + dVar37));
          dVar22 = (double)(float)(dVar21 + dVar31);
          dVar21 = (double)(float)(dVar32 - dVar22);
          if (dVar22 - (double)(float)(dVar32 - dVar22) < 0.0) {
            dVar21 = dVar22;
          }
          dVar23 = (double)DAT_00854924;
          dVar24 = (double)(float)(dVar33 - dVar22);
          if ((double)(float)(dVar33 - dVar22) - dVar21 < 0.0) {
            dVar24 = dVar21;
          }
          dVar21 = (double)(float)(dVar24 * dVar24);
          dVar25 = (double)(float)(dVar21 * (double)(float)(dVar21 * dVar24));
          dVar22 = (double)(float)(dVar21 * dVar25);
          *(float *)(puVar6 + 0x10) =
               (float)((double)(float)(dVar21 * dVar22) * dVar38 +
                      (double)(float)(dVar22 * dVar36 +
                                     (double)(float)(dVar25 * dVar35 +
                                                    (double)(float)((double)(float)(dVar21 * dVar24)
                                                                    * dVar34 + dVar24))));
          dVar22 = (double)fastfunc::FastAddRots
                                     ((float)((double)(float)((double)(float)(dVar23 * dVar30) *
                                                              dVar26 + dVar27) + dVar37));
          uVar5 = EffectTexHeaders;
          *(undefined4 *)(puVar6 + 0x11) = 0;
          *(undefined4 *)(puVar6 + 0x13) = 0x3f800000;
          *(undefined4 *)((int)puVar6 + 0xfc) = uVar14;
          *(undefined4 *)(puVar6 + 0x1f) = uVar14;
          *(undefined4 *)((int)puVar6 + 0xf4) = uVar14;
          *(undefined4 *)(puVar6 + 0x1e) = uVar14;
          dVar21 = (double)(float)(dVar32 - dVar22);
          if (dVar22 - (double)(float)(dVar32 - dVar22) < 0.0) {
            dVar21 = dVar22;
          }
          dVar26 = (double)(float)(dVar33 - dVar22);
          if ((double)(float)(dVar33 - dVar22) - dVar21 < 0.0) {
            dVar26 = dVar21;
          }
          dVar21 = (double)(float)(dVar26 * dVar26);
          dVar24 = (double)(float)(dVar21 * (double)(float)(dVar21 * dVar26));
          dVar22 = (double)(float)(dVar21 * dVar24);
          *(float *)((int)puVar6 + 0x84) =
               (float)((double)(float)(dVar21 * dVar22) * dVar38 +
                      (double)(float)(dVar22 * dVar36 +
                                     (double)(float)(dVar24 * dVar35 +
                                                    (double)(float)((double)(float)(dVar21 * dVar26)
                                                                    * dVar34 + dVar26))));
          draw::FastDrawQuad(uVar11 - 0x180,uVar11 - 0x1c0,0,uVar5,9);
          dVar21 = (double)DAT_00854924;
          iVar20 = iVar20 + 1;
          puVar6[0x28] = (longlong)iVar20;
        } while ((float)(longlong)puVar6[0x28] < (float)(dVar28 / dVar21));
        dVar37 = (double)*(float *)(puVar6 + 0x15);
      }
      dVar21 = dVar37 + (double)DAT_00854904;
      dVar37 = (double)(float)dVar21;
      *(float *)(puVar6 + 0x15) = (float)dVar21;
    } while (dVar37 < dVar29);
  }
  return;
}



//==== 00402f0c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M654_00402f0c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M654_00402f0c(void)

{
  DAT_00854994 = 0x10000;
  return;
}



//==== 00402f30  ns=mobyupdate_helpers  size=0x188
// sig: undefined M654_00402f30(void)
// callers(1): 004030c8 mobyupdate_unsorted::UpdateMoby_654
// callees(1): 00109c30 mobyutil::OrganicDelt

void mobyupdate_helpers::M654_00402f30(int param_1,float *param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int *piVar8;
  int iVar9;
  Spline *pSVar10;
  
  piVar8 = *(int **)(param_1 + 0x78);
  iVar9 = *piVar8;
  pSVar10 = Splines[piVar8[3]];
  mobyutil::OrganicDelt
            ((Cuboids[iVar9].imatrix.v2.y * (g_heroPosition.z - Cuboids[iVar9].pos.z) +
              Cuboids[iVar9].imatrix.v0.y * (g_heroPosition.x - Cuboids[iVar9].pos.x) +
              Cuboids[iVar9].imatrix.v1.y * (g_heroPosition.y - Cuboids[iVar9].pos.y) + 1.0) * 0.5,
             DAT_0071f418,DAT_0071f418,mobyutil::g_FrameTime * 2.0,(float *)(piVar8 + 7),0x720000,
             (float *)(piVar8 + 8));
  fVar1 = pSVar10->points[0].x;
  fVar2 = (float)piVar8[7];
  fVar3 = pSVar10->points[1].y;
  fVar4 = pSVar10->points[0].y;
  fVar5 = pSVar10->points[1].z;
  fVar6 = pSVar10->points[0].z;
  fVar7 = pSVar10->points[1].w;
  *param_2 = fVar2 * (pSVar10->points[1].x - fVar1) + fVar1;
  param_2[1] = fVar2 * (fVar3 - fVar4) + pSVar10->points[0].y;
  fVar1 = pSVar10->points[0].z;
  param_2[3] = fVar7;
  param_3[3] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  param_2[2] = fVar2 * (fVar5 - fVar6) + fVar1;
  param_3[2] = 0;
  param_3[1] = DAT_008549b8;
  param_3[2] = *(undefined4 *)(param_1 + 0x48);
  return;
}



//==== 004030c8  ns=mobyupdate_unsorted  size=0x4cc
// sig: undefined UpdateMoby_654(MobyInstance * moby)
// callers(0): 
// callees(15): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00047f74 camera::SetCameraPosition; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 000a0c38 hero::Hero_Warp; 000efb38 mobyfunc::DeleteMoby; 00104214 mobyutil::MB_CountActiveMobysByGroup; 00105870 mobyutil::DamageSphereAtPos; 00110b70 mobyutil::MB_IsPntInCuboid; 0015d12c sound::PlayMobySound; 003aef30 FUN_003aef30; 004010d8 FUN_004010d8; 004011c8 FUN_004011c8; 00402f30 mobyupdate_helpers::M654_00402f30; 004fff60 fastfunc::FastDecTimerS32

/* Moby 654 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_654(MobyInstance *moby)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  MobyInstance *pMVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 in_LR;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float afStack_40 [4];
  float afStack_30 [4];
  
  bVar1 = moby->state;
  pMVar4 = (MobyInstance *)(uint)bVar1;
  piVar2 = (int *)moby->pVar;
  uVar6 = ZEXT48(piVar2);
  if (bVar1 == 6) {
    iVar5 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar2);
    if ((iVar5 != 0) && (-1 < piVar2[5])) {
      DAT_0096bfba = (undefined2)piVar2[5];
    }
    pMVar4 = (MobyInstance *)mobyutil::MB_CountActiveMobysByGroup(piVar2[2],0xffffffffffffffff);
    if (pMVar4 == (MobyInstance *)0x0) {
      moby->state = '\x04';
      pMVar4 = (MobyInstance *)FUN_004010d8(piVar2[1],0);
      if (pMVar4 != (MobyInstance *)0x0) {
        sound::PlayMobySound(1,0,pMVar4);
      }
      pMVar4 = (MobyInstance *)0x96c062;
      (&MiscLevelFlags.field114_0x72)[piVar2[6]] = 1;
    }
  }
  else if (bVar1 == 5) {
    pMVar4 = (MobyInstance *)mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar2);
    if (pMVar4 != (MobyInstance *)0x0) {
      FUN_004011c8(piVar2[1],0);
      FUN_003aef30(piVar2[2]);
      pMVar4 = (MobyInstance *)0x6;
      moby->state = '\x06';
    }
  }
  else if (bVar1 != 4) {
    if (bVar1 == 3) {
      mobyupdate_helpers::M654_00402f30(moby,afStack_40,afStack_30);
      camera::camera5::Camera_SetMobyDrivenTargetPos(afStack_40);
      camera::camera5::Camera_SetMobyDrivenTargetRot(afStack_30);
      if (-1 < piVar2[5]) {
        DAT_0096bfba = (undefined2)piVar2[5];
      }
      pMVar4 = (MobyInstance *)mobyutil::MB_CountActiveMobysByGroup(piVar2[2],0xffffffffffffffff);
      if ((pMVar4 == (MobyInstance *)0x0) &&
         (pMVar4 = (MobyInstance *)fastfunc::FastDecTimerS32(uVar6 + 0x24),
         pMVar4 != (MobyInstance *)0x0)) {
        moby->state = '\x04';
        moby->enabled = '\x01';
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
        camera::camera5::Camera_DeactivateMobyDrivenCam(3);
        hero::Hero_Warp(&Cuboids[piVar2[4]].pos.x,&Cuboids[piVar2[4]].rot.x,0,1);
        mobyutil::DamageSphereAtPos
                  (0x4014000000000000,0x4049000000000000,0x3ff0000000000000,moby,
                   &Cuboids[piVar2[4]].pos,0,0x10000);
        (&MiscLevelFlags.field114_0x72)[piVar2[6]] = 1;
        pMVar4 = (MobyInstance *)FUN_004010d8(piVar2[1],0);
        if (pMVar4 != (MobyInstance *)0x0) {
          pMVar4 = (MobyInstance *)sound::PlayMobySound(1,0,pMVar4);
        }
      }
    }
    else if (bVar1 == 2) {
      if (-1 < piVar2[5]) {
        DAT_0096bfba = (undefined2)piVar2[5];
      }
      pMVar4 = (MobyInstance *)fastfunc::FastDecTimerS32(uVar6 + 0x24);
      if (pMVar4 != (MobyInstance *)0x0) {
        auVar7 = ZEXT416(0xffffffff);
        auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
        auVar8 = vectorShiftLeftIntegerWord(auVar7,auVar7);
        moby->state = '\x03';
        auVar7 = loadVectorLeftIndexed(in_LR,0x4030b8);
        auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar7 = vectorMultiplyAddFloatingPoint
                           (auVar9,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,auVar8)
        ;
        auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
        auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar3 = storeVectorElementWordIndexed
                          (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,0x24,uVar6);
        *(undefined4 *)((uint)(piVar2 + 9) & 0xfffffffc) = uVar3;
        moby->enabled = '\0';
        iVar5 = piVar2[2];
        moby->modeBits = moby->modeBits | DISABLED;
        pMVar4 = (MobyInstance *)FUN_003aef30(iVar5);
      }
    }
    else if (bVar1 == 1) {
      pMVar4 = (MobyInstance *)mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar2);
      if (pMVar4 != (MobyInstance *)0x0) {
        auVar7 = ZEXT416(0xffffffff);
        auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
        auVar8 = vectorShiftLeftIntegerWord(auVar7,auVar7);
        auVar7 = loadVectorLeftIndexed(in_LR,0x4030b8);
        auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar7 = vectorMultiplyAddFloatingPoint
                           (auVar9,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,auVar8)
        ;
        auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
        auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar3 = storeVectorElementWordIndexed
                          (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,0x24,uVar6);
        *(undefined4 *)((uint)(piVar2 + 9) & 0xfffffffc) = uVar3;
        moby->state = '\x02';
        if (-1 < piVar2[5]) {
          DAT_0096bfba = (undefined2)piVar2[5];
        }
        camera::SetCameraPosition(0x951500,0x951510,1,0,0);
        pMVar4 = (MobyInstance *)FUN_004011c8(piVar2[1],0);
        if (pMVar4 != (MobyInstance *)0x0) {
          pMVar4 = (MobyInstance *)sound::PlayMobySound(1,0,pMVar4);
        }
      }
    }
    else if (bVar1 == 0) {
      if (piVar2 == (int *)0x0) {
        pMVar4 = (MobyInstance *)mobyfunc::DeleteMoby(moby);
      }
      else if (*piVar2 == -1) {
        pMVar4 = (MobyInstance *)mobyfunc::DeleteMoby(moby);
      }
      else if (piVar2[3] == -1) {
        moby->state = '\x05';
        pMVar4 = (MobyInstance *)(moby->modeBits | 1);
        moby->enabled = '\0';
        moby->collision = (ushort *)0x0;
        moby->modeBits = (MobyModeBit)pMVar4;
      }
      else {
        moby->state = '\x01';
        pMVar4 = (MobyInstance *)FUN_004010d8(piVar2[1],1);
      }
    }
  }
  return pMVar4;
}



//==== 00403594  ns=mobyupdate_helpers  size=0x14
// sig: undefined M655_00403594(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M655_00403594(void)

{
  DAT_00854a08 = 0x10000;
  return;
}



//==== 004035b8  ns=mobyupdate_helpers  size=0xdc
// sig: undefined M655_004035b8(void)
// callers(0): 
// callees(3): 00060780 collproc::CollHotspot; 0007d118 hero::Hero_IsSwimming; 000ffb70 mobyutil::GetGroundZ

undefined8 mobyupdate_helpers::M655_004035b8(void)

{
  int iVar2;
  undefined8 uVar1;
  double dVar3;
  undefined1 local_20 [16];
  
  iVar2 = hero::Hero_IsSwimming();
  if (iVar2 == 0) {
    if (g_heroState == EDGE_HANG || g_heroState == EDGE_GRAB) {
      dVar3 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,local_20,0);
      iVar2 = collproc::CollHotspot();
      if ((iVar2 != 0) || (dVar3 < (double)g_heroPosition.z)) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



//==== 00403708  ns=mobyupdate_helpers  size=0x12f8
// sig: undefined M655_00403708(void)
// callers(1): 00404d18 mobyupdate_unsorted::UpdateMoby_655
// callees(14): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 000fe4f0 mobyutil::MB_randRangeSigned; 000fe610 mobyutil::MB_SphericalToVector; 0010de78 mobyutil::MB_WrapRot; 001113e0 mobyutil::MB_RotateQuatAxisAngle; 0012f8c0 partupd::SpawnPart_53; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt
// strings: 00854a88: '=Vwp>VwP' (raw) | 00854a8c: '>VwP' (raw)

void mobyupdate_helpers::M655_00403708(int param_1)

{
  longlong lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  ulonglong *puVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  ulonglong uVar13;
  int iVar14;
  undefined2 uVar15;
  ulonglong unaff_r14;
  ulonglong unaff_r15;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  int iVar16;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  longlong lVar17;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  longlong lVar18;
  float *pfVar19;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  float *pfVar20;
  ulonglong unaff_r29;
  float *pfVar22;
  longlong lVar21;
  ulonglong unaff_r30;
  int iVar23;
  float *pfVar24;
  float *pfVar25;
  ulonglong unaff_r31;
  ulonglong uVar26;
  int iVar27;
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
  ulonglong in_f14;
  ulonglong in_f15;
  double dVar38;
  double dVar39;
  ulonglong in_f16;
  ulonglong in_f17;
  double dVar40;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  double dVar41;
  ulonglong in_f23;
  double dVar42;
  ulonglong in_f24;
  double dVar43;
  ulonglong in_f25;
  double dVar44;
  ulonglong in_f26;
  double dVar45;
  undefined8 uVar46;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar47;
  ulonglong in_f29;
  double dVar48;
  double dVar49;
  ulonglong in_f30;
  double dVar50;
  double dVar51;
  ulonglong in_f31;
  double dVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar57;
  float fVar58;
  float local_240 [8];
  float local_220 [136];
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar1 = uVar13 - 0x2c0;
  puVar9 = (ulonglong *)lVar1;
  *puVar9 = uVar13;
  puVar9[0x5a] = in_LR;
  puVar9[0x46] = in_f14;
  puVar9[0x47] = in_f15;
  puVar9[0x48] = in_f16;
  puVar9[0x49] = in_f17;
  puVar9[0x4a] = in_f18;
  puVar9[0x4b] = in_f19;
  puVar9[0x4c] = in_f20;
  puVar9[0x4d] = in_f21;
  puVar9[0x4e] = in_f22;
  puVar9[0x4f] = in_f23;
  puVar9[0x50] = in_f24;
  puVar9[0x51] = in_f25;
  puVar9[0x52] = in_f26;
  puVar9[0x53] = in_f27;
  puVar9[0x54] = in_f28;
  puVar9[0x55] = in_f29;
  puVar9[0x56] = in_f30;
  puVar9[0x57] = in_f31;
  puVar9[0x39] = unaff_r19;
  puVar9[0x45] = unaff_r31;
  dVar38 = 0.05000000074505806;
  puVar9[0x37] = unaff_r17;
  fVar58 = DAT_00854a74;
  iVar8 = *(int *)(param_1 + 0x78);
  puVar9[0x44] = unaff_r30;
  fVar57 = DAT_010cc064;
  bVar12 = g_goldWeaponsArray.teslaClaw;
  puVar9[0x43] = unaff_r29;
  puVar9[0x42] = unaff_r28;
  puVar9[0x41] = unaff_r27;
  puVar9[0x40] = unaff_r26;
  puVar9[0x3f] = unaff_r25;
  puVar9[0x3e] = unaff_r24;
  puVar9[0x3d] = unaff_r23;
  puVar9[0x3c] = unaff_r22;
  puVar9[0x3b] = unaff_r21;
  puVar9[0x3a] = unaff_r20;
  puVar9[0x38] = unaff_r18;
  puVar9[0x36] = unaff_r16;
  puVar9[0x35] = unaff_r15;
  puVar9[0x34] = unaff_r14;
  puVar9[0x2d] = 0x3fa99999a0000000;
  dVar29 = (double)fastfunc::FastWrapRot(fVar57,fVar58);
  DAT_010cc064 = (float)dVar29;
  dVar29 = (double)fastfunc::FastDiffRots((double)DAT_010cc068,(double)DAT_00854a78);
  DAT_010cc068 = (float)dVar29;
  dVar29 = (double)fastfunc::FastWrapRot(DAT_010cc06c,DAT_00854a88);
  DAT_010cc06c = (float)dVar29;
  fVar58 = *(float *)(iVar8 + 0x100) - *(float *)(iVar8 + 0xf0);
  fVar57 = *(float *)(iVar8 + 0xf0) - *(float *)(iVar8 + 0x110);
  fVar5 = *(float *)(iVar8 + 0xf4) - *(float *)(iVar8 + 0x114);
  fVar2 = *(float *)(iVar8 + 0xf8) - *(float *)(iVar8 + 0x118);
  *(float *)(puVar9 + 0x10) = fVar58;
  fVar10 = *(float *)(iVar8 + 0x104) - *(float *)(iVar8 + 0xf4);
  *(float *)((int)puVar9 + 0x84) = fVar10;
  fVar11 = *(float *)(iVar8 + 0x108) - *(float *)(iVar8 + 0xf8);
  PTR_DAT_00854aac =
       (undefined *)(((uint)((LZCOUNT(-(uint)bVar12) << 0x3a) >> 0x3f) & 0xffffffe0) + 0x7f2040);
  *(float *)(puVar9 + 0x11) = fVar11;
  *(undefined4 *)((int)puVar9 + 0x8c) = *(undefined4 *)(iVar8 + 0x10c);
  dVar52 = 0.0;
  fVar4 = fVar11 * fVar11 + fVar58 * fVar58 + fVar10 * fVar10;
  dVar39 = (double)(float)((double)SQRT(fVar2 * fVar2 + fVar57 * fVar57 + fVar5 * fVar5) * dVar38);
  dVar29 = dVar52;
  dVar38 = dVar52;
  dVar40 = dVar52;
  if (SQRT(fVar4) != 0.0) {
    fVar57 = 1.0 / SQRT(fVar4);
    fVar57 = -(fVar4 * fVar57 * fVar57 - 1.0) * fVar57 * 0.5 + fVar57;
    fVar57 = -(fVar4 * fVar57 * fVar57 - 1.0) * fVar57 * 0.5 + fVar57;
    fVar57 = -(fVar4 * fVar57 * fVar57 - 1.0) * fVar57 * 0.5 + fVar57;
    dVar38 = (double)(fVar58 * fVar57);
    dVar29 = (double)(fVar10 * fVar57);
    dVar40 = (double)(fVar11 * fVar57);
  }
  dVar31 = (double)DAT_00969f74;
  dVar33 = (double)DAT_00969f78;
  dVar35 = (double)hero::g_heroGravityDir;
  *(float *)(puVar9 + 0x10) = (float)dVar38;
  *(float *)((int)puVar9 + 0x84) = (float)dVar29;
  *(float *)(puVar9 + 0x11) = (float)dVar40;
  *(undefined4 *)((int)puVar9 + 0xdc) = 0;
  *(float *)(puVar9 + 0x1b) = (float)(dVar35 * dVar29 - (double)(float)(dVar31 * dVar38));
  *(float *)(puVar9 + 0x1a) = (float)(dVar31 * dVar40 - (double)(float)(dVar33 * dVar29));
  *(float *)((int)puVar9 + 0xd4) = (float)(dVar33 * dVar38 - (double)(float)(dVar35 * dVar40));
  dVar29 = 0.1745329201221466;
  mobyutil::MB_RotateQuatAxisAngle(0.17453292,local_240,local_240);
  DAT_010cbc00 = *(undefined4 *)(iVar8 + 0xf0);
  uVar26 = 1;
  dVar38 = (double)(float)((double)*(float *)(puVar9 + 0x10) * dVar39);
  DAT_010cbc04 = *(undefined4 *)(iVar8 + 0xf4);
  DAT_010cbc08 = *(undefined4 *)(iVar8 + 0xf8);
  DAT_010cbc0c = *(undefined4 *)(iVar8 + 0xfc);
  dVar40 = (double)(float)((double)*(float *)((int)puVar9 + 0x84) * dVar39);
  DAT_010cbd40 = *(undefined4 *)(iVar8 + 0xf0);
  dVar31 = (double)(float)((double)*(float *)(puVar9 + 0x11) * dVar39);
  DAT_010cbd44 = *(undefined4 *)(iVar8 + 0xf4);
  DAT_010cbd48 = *(undefined4 *)(iVar8 + 0xf8);
  DAT_010cbd4c = *(undefined4 *)(iVar8 + 0xfc);
  *(undefined4 *)((int)puVar9 + 0x164) = DAT_010cbd4c;
  puVar9[0x2e] = 1;
  do {
    dVar33 = (double)fastfunc::FastIntToDouble(uVar26);
    iVar27 = (int)uVar26;
    puVar9[0x2f] = (longlong)iVar27;
    dVar50 = (double)((DAT_00854a70 - DAT_00854a6c) * (float)(dVar33 * (double)puVar9[0x2d]) +
                     DAT_00854a6c);
    dVar45 = (double)(longlong)puVar9[0x2f];
    fVar57 = mobyutil::MB_WrapRot((float)(dVar45 * (double)DAT_00854a68 + (double)DAT_010cc064));
    dVar33 = 3.141592502593994;
    dVar35 = -3.141592502593994;
    dVar41 = -0.16666656732559204;
    dVar42 = 0.008333025500178337;
    dVar43 = -0.0001980741071747616;
    dVar44 = 2.601886990305502e-06;
    fVar58 = 3.1415925 - fVar57;
    if (fVar57 - (3.1415925 - fVar57) < 0.0) {
      fVar58 = fVar57;
    }
    fVar5 = -3.1415925 - fVar57;
    if ((-3.1415925 - fVar57) - fVar58 < 0.0) {
      fVar5 = fVar58;
    }
    fVar4 = fVar5 * fVar5;
    fVar58 = fVar4 * fVar4 * fVar5;
    fVar57 = fVar4 * fVar58;
    dVar48 = (double)(fVar4 * fVar57 * 2.601887e-06 +
                     fVar57 * -0.0001980741 +
                     fVar58 * 0.0083330255 + fVar4 * fVar5 * -0.16666657 + fVar5);
    dVar30 = (double)mobyutil::MB_randRangeSigned((double)DAT_010cc070,(double)DAT_00854aa0);
    iVar23 = iVar27 * 0x10;
    fVar58 = (float)(dVar50 * dVar48 + dVar30);
    dVar48 = (double)fVar58;
    iVar16 = (int)((uVar26 & 0xffffffff) << 2);
    fVar5 = *(float *)(&DAT_010cbe80 + iVar16);
    fVar57 = (float)(&DAT_010cbc08)[iVar27 * 4];
    *(float *)(&DAT_010cbe80 + iVar16) = fVar58;
    (&DAT_010cbc08)[iVar27 * 4] = fVar57 - fVar5;
    dVar50 = (double)mobyutil::MB_randRot();
    dVar30 = (double)mobyutil::MB_randRot();
    mobyutil::MB_SphericalToVector
              ((float)dVar39,(float)dVar50,(float)dVar30,(float *)(puVar9 + 0x12));
    dVar30 = 0.5;
    fVar5 = *(float *)(puVar9 + 0x13);
    dVar50 = (double)DAT_00854ae4;
    fVar58 = (float)(dVar50 * (double)(float)((double)*(float *)((int)puVar9 + 0x94) - dVar40) +
                    dVar40);
    fVar57 = (float)(dVar50 * (double)(float)((double)*(float *)(puVar9 + 0x12) - dVar38) + dVar38);
    pfVar19 = (float *)(&DAT_010cbc00 + iVar27 * 4);
    pfVar24 = (float *)(&DAT_010cbbf0 + iVar27 * 4);
    *(float *)(puVar9 + 0x13) = fVar5 * 0.5;
    fVar5 = (float)(dVar50 * (double)(float)((double)(fVar5 * 0.5) - dVar31) + dVar31);
    dVar50 = (double)SQRT(fVar5 * fVar5 + fVar57 * fVar57 + fVar58 * fVar58);
    if (dVar50 == dVar52) {
      *pfVar19 = *pfVar24;
      (&DAT_010cbc04)[iVar27 * 4] = (&DAT_010cbbf4)[iVar27 * 4];
      (&DAT_010cbc08)[iVar27 * 4] = *(undefined4 *)(iVar23 + 0x10cbbf8);
      uVar3 = *(undefined4 *)(iVar23 + 0x10cbbfc);
    }
    else {
      fVar4 = (float)(dVar39 / dVar50);
      dVar38 = (double)(fVar4 * fVar57);
      dVar40 = (double)(fVar4 * fVar58);
      dVar31 = (double)(fVar4 * fVar5);
      *pfVar19 = (float)((double)*pfVar24 + dVar38);
      (&DAT_010cbc04)[iVar27 * 4] = (float)((double)(float)(&DAT_010cbbf4)[iVar27 * 4] + dVar40);
      (&DAT_010cbc08)[iVar27 * 4] = (float)((double)*(float *)(iVar23 + 0x10cbbf8) + dVar31);
      uVar3 = *(undefined4 *)(iVar23 + 0x10cbbfc);
    }
    (&DAT_010cbc0c)[iVar27 * 4] = uVar3;
    (&DAT_010cbc08)[iVar27 * 4] = (float)((double)(float)(&DAT_010cbc08)[iVar27 * 4] + dVar48);
    *(float *)(puVar9 + 0x12) = *pfVar19 - *pfVar24;
    *(float *)((int)puVar9 + 0x94) =
         (float)(&DAT_010cbc04)[iVar27 * 4] - (float)(&DAT_010cbbf4)[iVar27 * 4];
    *(float *)(puVar9 + 0x13) = (float)(&DAT_010cbc08)[iVar27 * 4] - *(float *)(iVar23 + 0x10cbbf8);
    *(undefined4 *)((int)puVar9 + 0x9c) = (&DAT_010cbc0c)[iVar27 * 4];
    dVar47 = (double)(*(float *)(iVar8 + 0x114) - (float)(&DAT_010cbc04)[iVar27 * 4]);
    dVar48 = (double)(*(float *)(iVar8 + 0x110) - *pfVar19);
    dVar49 = (double)(*(float *)(iVar8 + 0x118) - (float)(&DAT_010cbc08)[iVar27 * 4]);
    dVar51 = (double)SQRT((float)(dVar49 * dVar49 +
                                 (double)(float)(dVar48 * dVar48 + (double)(float)(dVar47 * dVar47))
                                 ));
    dVar50 = dVar39;
    if (dVar51 != dVar52) {
      dVar34 = dVar30;
      dVar50 = dVar51;
      if ((iVar27 != 0x13) && (dVar34 = 0.10000000149011612, dVar50 = dVar39, 0xf < iVar27)) {
        dVar39 = (double)fastfunc::FastIntToDouble(0x13 - iVar27);
        dVar34 = dVar30;
        dVar50 = (double)(float)(dVar51 / dVar39);
      }
      dVar39 = (double)(float)(dVar50 / dVar51);
      dVar38 = (double)(float)(dVar34 * (double)(float)(dVar39 * dVar48 - dVar38) + dVar38);
      dVar40 = (double)(float)(dVar34 * (double)(float)(dVar39 * dVar47 - dVar40) + dVar40);
      dVar31 = (double)(float)(dVar34 * (double)(float)(dVar39 * dVar49 - dVar31) + dVar31);
    }
    if (iVar27 < 10) {
      fVar58 = mobyutil::MB_WrapRot((float)(dVar45 * (double)DAT_00854a7c + (double)DAT_010cc068));
      dVar48 = (double)fVar58;
      fVar57 = mobyutil::MB_WrapRot((float)(dVar45 * (double)DAT_00854a8c + (double)DAT_010cc06c));
      fVar58 = DAT_00854a80;
      dVar45 = (double)fVar57;
      pfVar24 = (float *)(&DAT_010cbd40 + iVar27 * 4);
      dVar39 = (double)(float)(dVar33 - dVar45);
      if (dVar45 - (double)(float)(dVar33 - dVar45) < 0.0) {
        dVar39 = dVar45;
      }
      dVar47 = (double)(float)(dVar35 - dVar45);
      if ((double)(float)(dVar35 - dVar45) - dVar39 < 0.0) {
        dVar47 = dVar39;
      }
      *pfVar24 = *pfVar19;
      (&DAT_010cbd44)[iVar27 * 4] = (&DAT_010cbc04)[iVar27 * 4];
      (&DAT_010cbd48)[iVar27 * 4] = (&DAT_010cbc08)[iVar27 * 4];
      dVar39 = (double)(float)(dVar47 * dVar47);
      (&DAT_010cbd4c)[iVar27 * 4] = (&DAT_010cbc0c)[iVar27 * 4];
      dVar49 = (double)(float)(dVar39 * (double)(float)(dVar39 * dVar47));
      dVar45 = (double)(float)(dVar39 * dVar49);
      dVar47 = (double)(fVar58 * (float)((double)(float)(dVar39 * dVar45) * dVar44 +
                                        (double)(float)(dVar45 * dVar43 +
                                                       (double)(float)(dVar49 * dVar42 +
                                                                      (double)(float)((double)(float
                                                  )(dVar39 * dVar47) * dVar41 + dVar47)))));
      dVar45 = (double)mobyutil::MB_randRangeSigned(dVar52,0x3fb99999a0000000);
      dVar39 = (double)(float)(dVar33 - dVar48);
      if (dVar48 - (double)(float)(dVar33 - dVar48) < 0.0) {
        dVar39 = dVar48;
      }
      dVar34 = ABS((double)*(float *)(puVar9 + 0x12));
      dVar49 = ABS((double)*(float *)((int)puVar9 + 0x94));
      dVar51 = (double)(float)(dVar35 - dVar48);
      if ((double)(float)(dVar35 - dVar48) - dVar39 < 0.0) {
        dVar51 = dVar39;
      }
      *(float *)(puVar9 + 0x28) = (float)(dVar34 - dVar49);
      fVar58 = (float)(&DAT_010cbd48)[iVar27 * 4];
      dVar32 = (double)(float)(dVar51 * dVar51);
      uVar26 = (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x28) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1d) & 4;
      dVar36 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar51));
      dVar37 = (double)(float)(dVar32 * dVar36);
      dVar39 = dVar34;
      if ((double)*(float *)(puVar9 + 0x28) - dVar52 < 0.0) {
        dVar39 = dVar49;
      }
      fVar57 = (float)(dVar47 * (double)(float)((double)(float)(dVar32 * dVar37) * dVar44 +
                                               (double)(float)(dVar37 * dVar43 +
                                                              (double)(float)(dVar36 * dVar42 +
                                                                             (double)(float)((double
                                                  )(float)(dVar32 * dVar51) * dVar41 + dVar51)))) +
                      dVar45);
      if ((double)*(float *)(puVar9 + 0x28) - dVar52 < 0.0) {
        dVar49 = dVar34;
      }
      *(float *)((int)&DAT_010cc010 + iVar16) = fVar57;
      (&DAT_010cbd48)[iVar27 * 4] = fVar58 + fVar57;
      fVar57 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
      fVar58 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
      dVar45 = dVar52;
      if (dVar52 < dVar39) {
        lVar17 = uVar13 - 0x2b0;
        lVar28 = uVar13 - 0x17c;
        lVar21 = uVar13 - 0x16c;
        lVar18 = 2;
        fVar5 = (float)(dVar49 - dVar39) / (float)(dVar49 + dVar39);
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar9 + 0x2a) = fVar5;
        *(float *)(puVar9 + 0x29) = fVar5;
        *(float *)((int)puVar9 + 0x14c) = fVar5;
        *(float *)((int)puVar9 + 0x144) = fVar5;
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar9 + 0x29) = *(float *)(puVar9 + 0x29) * fVar4;
        *(float *)((int)puVar9 + 0x14c) = *(float *)((int)puVar9 + 0x14c) * fVar5;
        *(float *)(puVar9 + 0x2a) = *(float *)(puVar9 + 0x2a) * fVar5 * fVar4;
        do {
          *(float *)((int)lVar17 + 0x144) = *(float *)((int)lVar17 + 0x134) * fVar5 * fVar5;
          iVar16 = (int)lVar28;
          lVar17 = lVar17 + 8;
          lVar28 = lVar28 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar16 + 4) * fVar5 * fVar5;
          lVar21 = lVar21 + 8;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        lVar18 = 4;
        lVar21 = uVar13 - 0x17c;
        pfVar19 = (float *)&DAT_007358e0;
        lVar17 = lVar1;
        lVar28 = lVar21;
        do {
          fVar5 = *pfVar19;
          fVar4 = pfVar19[1];
          pfVar19 = pfVar19 + 2;
          *(float *)((int)lVar17 + 0x144) = *(float *)((int)lVar17 + 0x144) * fVar5;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar4;
          lVar28 = lVar28 + 8;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        lVar28 = 2;
        lVar17 = lVar1;
        dVar39 = dVar52;
        do {
          iVar16 = (int)lVar17;
          lVar17 = lVar17 + 0x10;
          iVar14 = (int)lVar21;
          lVar21 = lVar21 + 0x10;
          dVar39 = (double)((float)(dVar39 + (double)*(float *)(iVar16 + 0x144)) +
                            *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                           *(float *)(iVar14 + 0xc));
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        dVar45 = (double)((float)(dVar39 + 0.7853981852531433) * fVar57 + fVar58);
      }
      dVar45 = (double)fastfunc::FastWrapRot((float)dVar45,1.5707964);
      fVar58 = DAT_00854a84;
      dVar47 = (double)(float)(dVar48 + 1.570796251296997);
      dVar48 = (double)(float)(dVar45 + 1.570796251296997);
      dVar39 = (double)(float)(dVar33 - dVar45);
      if (dVar45 - (double)(float)(dVar33 - dVar45) < 0.0) {
        dVar39 = dVar45;
      }
      dVar49 = (double)(float)(dVar33 - dVar47);
      if (dVar47 - (double)(float)(dVar33 - dVar47) < 0.0) {
        dVar49 = dVar47;
      }
      dVar51 = (double)(float)(dVar33 - dVar48);
      if (dVar48 - (double)(float)(dVar33 - dVar48) < 0.0) {
        dVar51 = dVar48;
      }
      dVar33 = (double)(float)(dVar35 - dVar45);
      if ((double)(float)(dVar35 - dVar45) - dVar39 < 0.0) {
        dVar33 = dVar39;
      }
      dVar39 = (double)(float)(dVar35 - dVar47);
      if ((double)(float)(dVar35 - dVar47) - dVar49 < 0.0) {
        dVar39 = dVar49;
      }
      dVar47 = (double)(float)(dVar33 * dVar33);
      dVar45 = (double)(float)(dVar35 - dVar48);
      if ((double)(float)(dVar35 - dVar48) - dVar51 < 0.0) {
        dVar45 = dVar51;
      }
      dVar35 = (double)(float)(dVar39 * dVar39);
      dVar48 = (double)(float)(dVar45 * dVar45);
      dVar36 = (double)(float)(dVar47 * (double)(float)(dVar47 * dVar33));
      dVar37 = (double)(float)(dVar35 * (double)(float)(dVar35 * dVar39));
      dVar51 = (double)(float)(dVar48 * (double)(float)(dVar48 * dVar45));
      dVar49 = (double)(float)(dVar35 * dVar37);
      dVar32 = (double)(float)(dVar48 * dVar51);
      dVar34 = (double)(float)(dVar47 * dVar36);
      fVar57 = *pfVar24;
      fVar5 = (float)(&DAT_010cbd44)[iVar27 * 4];
      uVar3 = *(undefined4 *)((int)puVar9 + 0x164);
      *(undefined4 *)(iVar23 + 0x10cbed8) = 0;
      *(undefined4 *)(iVar23 + 0x10cbedc) = uVar3;
      fVar58 = fVar58 * (float)((double)(float)(dVar35 * dVar49) * dVar44 +
                               (double)(float)(dVar49 * dVar43 +
                                              (double)(float)(dVar37 * dVar42 +
                                                             (double)(float)((double)(float)(dVar35 
                                                  * dVar39) * dVar41 + dVar39))));
      fVar4 = (float)((double)(float)(dVar48 * dVar32) * dVar44 +
                     (double)(float)(dVar32 * dVar43 +
                                    (double)(float)(dVar51 * dVar42 +
                                                   (double)(float)((double)(float)(dVar48 * dVar45)
                                                                   * dVar41 + dVar45)))) * fVar58;
      fVar58 = (float)((double)(float)(dVar47 * dVar34) * dVar44 +
                      (double)(float)(dVar34 * dVar43 +
                                     (double)(float)(dVar36 * dVar42 +
                                                    (double)(float)((double)(float)(dVar47 * dVar33)
                                                                    * dVar41 + dVar33)))) * fVar58;
      *(float *)(iVar23 + 0x10cbed0) = fVar4;
      *(float *)(iVar23 + 0x10cbed4) = fVar58;
      *pfVar24 = fVar57 + fVar4;
      (&DAT_010cbd44)[iVar27 * 4] = fVar5 + fVar58;
    }
    else {
      pfVar24 = (float *)(&DAT_010cbd40 + iVar27 * 4);
      iVar16 = (int)(0x15 - uVar26);
      *pfVar24 = *pfVar19;
      iVar14 = iVar16 * 0x10;
      (&DAT_010cbd44)[iVar27 * 4] = (&DAT_010cbc04)[iVar27 * 4];
      (&DAT_010cbd48)[iVar27 * 4] = (&DAT_010cbc08)[iVar27 * 4];
      (&DAT_010cbd4c)[iVar27 * 4] = (&DAT_010cbc0c)[iVar27 * 4];
      (&DAT_010cbd48)[iVar27 * 4] =
           (float)(&DAT_010cbd48)[iVar27 * 4] + (float)(&DAT_010cc010)[iVar16];
      *pfVar24 = *pfVar24 + *(float *)(iVar14 + 0x10cbed0);
      (&DAT_010cbd44)[iVar27 * 4] =
           (float)(&DAT_010cbd44)[iVar27 * 4] + *(float *)(iVar14 + 0x10cbed4);
      (&DAT_010cbd48)[iVar27 * 4] =
           (float)(&DAT_010cbd48)[iVar27 * 4] + *(float *)(iVar14 + 0x10cbed8);
      *(undefined4 *)((int)puVar9 + 0x164) = *(undefined4 *)(iVar23 + 0x10cbedc);
    }
    uVar26 = (ulonglong)(iVar27 + 1);
    dVar39 = dVar50;
  } while (iVar27 + 1 < 0x14);
  fVar57 = DAT_00969f78 * *(float *)(puVar9 + 0x10) -
           hero::g_heroGravityDir * *(float *)(puVar9 + 0x11);
  fVar58 = DAT_00969f74 * *(float *)(puVar9 + 0x11) - DAT_00969f78 * *(float *)((int)puVar9 + 0x84);
  fVar5 = hero::g_heroGravityDir * *(float *)((int)puVar9 + 0x84) -
          DAT_00969f74 * *(float *)(puVar9 + 0x10);
  auVar56 = loadVectorLeftIndexed(8,0x403694);
  *(undefined4 *)((int)puVar9 + 0xbc) = 0;
  fVar4 = hero::g_heroGravityDir;
  auVar56 = auVar56 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar56 = auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60;
  dVar31 = (double)(fVar5 * fVar5 + fVar58 * fVar58 + fVar57 * fVar57);
  dVar38 = dVar52;
  dVar39 = dVar52;
  dVar40 = dVar52;
  if ((double)(float)SQRT(dVar31) != dVar52) {
    dVar38 = 1.0 / SQRT(dVar31);
    dVar38 = (double)(float)(-(double)(float)((double)(float)(dVar31 * dVar38) * dVar38 - 1.0) *
                             (double)(float)(dVar30 * dVar38) + dVar38);
    dVar38 = (double)(float)(-(double)(float)((double)(float)(dVar31 * dVar38) * dVar38 - 1.0) *
                             (double)(float)(dVar30 * dVar38) + dVar38);
    fVar2 = (float)(-(double)(float)((double)(float)(dVar31 * dVar38) * dVar38 - 1.0) *
                    (double)(float)(dVar30 * dVar38) + dVar38);
    dVar40 = (double)(fVar58 * fVar2);
    dVar39 = (double)(fVar57 * fVar2);
    dVar38 = (double)(fVar5 * fVar2);
  }
  fVar58 = DAT_00969f74 * DAT_00969f74;
  *(float *)(puVar9 + 0x17) = (float)dVar38;
  fVar5 = DAT_00969f78;
  *(float *)(puVar9 + 0x16) = (float)dVar40;
  *(float *)((int)puVar9 + 0xb4) = (float)dVar39;
  uVar3 = DAT_00969f7c;
  fVar57 = DAT_00969f74;
  dVar38 = (double)(fVar5 * fVar5 + fVar4 * fVar4 + fVar58);
  if ((double)(float)SQRT(dVar38) == dVar52) {
    *(float *)(puVar9 + 0x18) = fVar4;
    fVar58 = DAT_00969f78;
    *(float *)((int)puVar9 + 0xc4) = fVar57;
    uVar3 = DAT_00969f7c;
    *(float *)(puVar9 + 0x19) = fVar58;
    *(undefined4 *)(puVar9 + 0x19) = 0;
    *(undefined4 *)((int)puVar9 + 0xc4) = 0;
    *(undefined4 *)(puVar9 + 0x18) = 0;
  }
  else {
    dVar39 = 1.0 / SQRT(dVar38);
    dVar39 = (double)(float)(-(double)(float)((double)(float)(dVar38 * dVar39) * dVar39 - 1.0) *
                             (double)(float)(dVar30 * dVar39) + dVar39);
    dVar39 = (double)(float)(-(double)(float)((double)(float)(dVar38 * dVar39) * dVar39 - 1.0) *
                             (double)(float)(dVar30 * dVar39) + dVar39);
    fVar58 = (float)(-(double)(float)((double)(float)(dVar38 * dVar39) * dVar39 - 1.0) *
                     (double)(float)(dVar30 * dVar39) + dVar39);
    fVar57 = DAT_00969f74 * fVar58;
    fVar5 = DAT_00969f78 * fVar58;
    *(float *)(puVar9 + 0x18) = fVar4 * fVar58;
    *(float *)((int)puVar9 + 0xc4) = fVar57;
    *(float *)(puVar9 + 0x19) = fVar5;
  }
  lVar17 = 0;
  *(undefined4 *)((int)puVar9 + 0xcc) = uVar3;
  iVar16 = 0;
  iVar27 = 0;
  do {
    if (iVar27 < 2) {
      fVar57 = *(float *)(iVar8 + 0xf0);
      fVar58 = *(float *)(iVar8 + 0xf4);
      fVar5 = *(float *)(iVar8 + 0xf8);
      fVar4 = *(float *)(iVar8 + 0xfc);
      dVar38 = 0.4000000059604645;
    }
    else {
      fVar57 = *(float *)(iVar8 + 0x100);
      fVar58 = *(float *)(iVar8 + 0x104);
      fVar5 = *(float *)(iVar8 + 0x108);
      fVar4 = *(float *)(iVar8 + 0x10c);
      dVar38 = dVar30;
    }
    dVar35 = (double)fVar57;
    dVar33 = (double)fVar58;
    dVar31 = (double)fVar5;
    dVar40 = (double)fVar4;
    iVar14 = fastfunc::FastDecTimerS16(ZEXT48(&DAT_010cc1c0) + lVar17 & 0xffffffff);
    dVar39 = 15.5;
    iVar23 = (int)lVar17;
    if (iVar14 == 0) {
      uVar26 = puVar9[0x2e];
      lVar18 = uVar13 - 0x1c0;
      uVar46 = 0x3fb99999a0000000;
      pfVar20 = (float *)((int)&DAT_010cc080 + iVar16);
      pfVar25 = (float *)((int)&DAT_010cc090 + iVar16);
      lVar21 = lVar18;
      lVar28 = lVar1;
      pfVar19 = pfVar25;
      pfVar24 = pfVar20;
      do {
        pfVar22 = (float *)lVar21;
        *pfVar22 = *pfVar19 - *pfVar24;
        pfVar22[1] = pfVar19[1] - pfVar24[1];
        pfVar22[2] = pfVar19[2] - pfVar24[2];
        pfVar22[3] = pfVar19[3];
        dVar38 = (double)mobyutil::MB_randRangeSigned(dVar52,uVar46);
        iVar14 = (int)lVar28;
        *(float *)(iVar14 + 0x100) = (float)((double)*(float *)(iVar14 + 0x100) + dVar38);
        dVar38 = (double)mobyutil::MB_randRangeSigned(dVar52,uVar46);
        *(float *)(iVar14 + 0x104) = (float)((double)*(float *)(iVar14 + 0x104) + dVar38);
        dVar38 = (double)mobyutil::MB_randRangeSigned(dVar52,uVar46);
        uVar26 = uVar26 + 1;
        lVar21 = lVar21 + 0x10;
        pfVar19 = pfVar19 + 4;
        pfVar24 = pfVar24 + 4;
        *(float *)(iVar14 + 0x108) = (float)((double)*(float *)(iVar14 + 0x108) + dVar38);
        lVar28 = lVar28 + 0x10;
      } while ((int)uVar26 < 5);
      lVar28 = 4;
      *(float *)((int)&DAT_010cc080 + iVar16) = (float)dVar35;
      *(float *)((int)&DAT_010cc084 + iVar16) = (float)dVar33;
      *(float *)((int)&DAT_010cc088 + iVar16) = (float)dVar31;
      *(float *)((int)&DAT_010cc08c + iVar16) = (float)dVar40;
      sVar6 = *(short *)((int)&DAT_010cc1c0 + iVar23);
      do {
        pfVar19 = (float *)lVar18;
        *pfVar25 = *pfVar20 + *pfVar19;
        pfVar25[1] = pfVar20[1] + pfVar19[1];
        lVar18 = lVar18 + 0x10;
        pfVar25[2] = pfVar20[2] + pfVar19[2];
        pfVar19 = pfVar20 + 3;
        pfVar20 = pfVar20 + 4;
        pfVar25[3] = *pfVar19;
        pfVar25 = pfVar25 + 4;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      dVar38 = 32.0;
      sVar7 = *(short *)((int)&DAT_010cc1d8 + iVar23);
      if (sVar7 < sVar6) {
        dVar40 = (double)fastfunc::FastIntToDouble((longlong)sVar6 - (longlong)sVar7);
        puVar9[0x2f] = (longlong)(int)((double)animationSpeed * dVar39);
        dVar31 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)puVar9 + 0x17c));
        uVar15 = fastfunc::FastDoubleToInt
                           ((double)(float)((double)(1.0 - (float)(dVar40 / dVar31)) * dVar38));
        *(undefined2 *)((int)&DAT_010cc1c8 + iVar23) = uVar15;
      }
      else {
        dVar40 = (double)fastfunc::FastIntToDouble((longlong)sVar7 - (longlong)sVar6);
        puVar9[0x2f] = (longlong)(int)((double)animationSpeed * dVar39);
        dVar31 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)puVar9 + 0x17c));
        uVar15 = fastfunc::FastDoubleToInt
                           ((double)(float)((double)(1.0 - (float)(dVar40 / dVar31)) * dVar38));
        *(undefined2 *)((int)&DAT_010cc1c8 + iVar23) = uVar15;
      }
    }
    else {
      auVar53 = ZEXT416(0xfffffff0);
      auVar54 = loadVectorLeftIndexed(lVar17,0x10cc1d0);
      auVar54 = vectorShiftRightAlgebraicWord
                          (auVar54,auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60);
      auVar53 = ZEXT416(0xffffffff);
      auVar55 = auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60;
      auVar53 = vectorConvertFromSignedFixedPointWord(auVar54,0);
      auVar54 = vectorShiftLeftIntegerWord(auVar55,auVar55);
      auVar55 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar53 = vectorAddFloatingPoint(auVar53,auVar56);
      auVar53 = vectorMultiplyAddFloatingPoint(auVar55,auVar53,auVar54);
      auVar53 = vectorConvertToSignedFixedPointWordSaturate(auVar53,0);
      auVar53 = vectorSplatHalfWord(auVar53,1);
      uVar15 = storeVectorElementHalfWordIndexed(auVar53,lVar17,0x10cc1c0);
      *(undefined2 *)((int)&DAT_010cc1c0 + iVar23) = uVar15;
      *(undefined2 *)((int)&DAT_010cc1c8 + iVar23) = 0;
      dVar41 = (double)mobyutil::MB_randRangeSigned(0x3fe0c15240000000,0x3ff0c15240000000);
      dVar42 = (double)mobyutil::MB_randRangeFloat(-1.0471976,(float)dVar29);
      *(undefined4 *)((int)puVar9 + 0xac) = *(undefined4 *)((int)puVar9 + 0x8c);
      *(float *)(puVar9 + 0x14) = (float)((double)*(float *)(puVar9 + 0x10) * dVar38);
      *(float *)((int)puVar9 + 0xa4) = (float)((double)*(float *)((int)puVar9 + 0x84) * dVar38);
      *(float *)(puVar9 + 0x15) = (float)((double)*(float *)(puVar9 + 0x11) * dVar38);
      mobyutil::MB_RotateQuatAxisAngle((float)dVar42,local_220,local_220);
      mobyutil::MB_RotateQuatAxisAngle((float)dVar41,local_220,local_220);
      pfVar19 = (float *)((int)&DAT_010cc090 + iVar16);
      *(float *)((int)&DAT_010cc080 + iVar16) = (float)dVar35;
      *(float *)((int)&DAT_010cc084 + iVar16) = (float)dVar33;
      *(float *)((int)&DAT_010cc088 + iVar16) = (float)dVar31;
      *(float *)((int)&DAT_010cc08c + iVar16) = (float)dVar40;
      pfVar24 = (float *)((int)&DAT_010cc0a0 + iVar16);
      iVar23 = 2;
      *(float *)((int)&DAT_010cc090 + iVar16) = (float)(dVar35 + (double)*(float *)(puVar9 + 0x14));
      *(float *)((int)&DAT_010cc094 + iVar16) =
           (float)(dVar33 + (double)*(float *)((int)puVar9 + 0xa4));
      fVar58 = *(float *)(puVar9 + 0x15);
      *(float *)((int)&DAT_010cc09c + iVar16) = (float)dVar40;
      *(float *)((int)&DAT_010cc098 + iVar16) = (float)(dVar31 + (double)fVar58);
      dVar40 = 1.0;
      dVar38 = 0.9599310755729675;
      do {
        fVar57 = GameCamera.posZ;
        fVar58 = GameCamera.posY;
        *(float *)(puVar9 + 0x1c) = *pfVar19 - GameCamera.posX;
        *(float *)((int)puVar9 + 0xe4) = pfVar19[1] - fVar58;
        *(float *)(puVar9 + 0x1d) = pfVar19[2] - fVar57;
        *(float *)((int)puVar9 + 0xec) = pfVar19[3];
        dVar31 = (double)mobyutil::MB_randRangeFloat((float)dVar29,(float)dVar38);
        dVar31 = dVar31 * dVar40;
        dVar40 = -dVar40;
        mobyutil::MB_RotateQuatAxisAngle((float)dVar31,local_220,local_220);
        iVar23 = iVar23 + 1;
        *pfVar24 = *pfVar19 + *(float *)(puVar9 + 0x14);
        pfVar24[1] = pfVar19[1] + *(float *)((int)puVar9 + 0xa4);
        pfVar24[2] = pfVar19[2] + *(float *)(puVar9 + 0x15);
        pfVar20 = pfVar19 + 3;
        pfVar19 = pfVar19 + 4;
        pfVar24[3] = *pfVar20;
        pfVar24 = pfVar24 + 4;
      } while (iVar23 < 5);
    }
    iVar27 = iVar27 + 1;
    lVar17 = lVar17 + 2;
    iVar16 = iVar16 + 0x50;
  } while (iVar27 < 4);
  dVar38 = 1.0471975803375244;
  dVar29 = (double)mobyutil::MB_randRangeSigned(0x3fe0c15240000000,0x3ff0c15240000000);
  dVar38 = (double)mobyutil::MB_randRangeFloat(-0.5235988,(float)dVar38);
  fVar58 = DAT_0071f408 * DAT_00854adc;
  *(undefined4 *)((int)puVar9 + 0xac) = *(undefined4 *)((int)puVar9 + 0x8c);
  *(float *)(puVar9 + 0x14) = *(float *)(puVar9 + 0x10) * fVar58;
  *(float *)((int)puVar9 + 0xa4) = *(float *)((int)puVar9 + 0x84) * fVar58;
  *(float *)(puVar9 + 0x15) = *(float *)(puVar9 + 0x11) * fVar58;
  mobyutil::MB_RotateQuatAxisAngle((float)dVar38,local_220,local_220);
  mobyutil::MB_RotateQuatAxisAngle((float)dVar29,local_220,local_220);
  mobyutil::MB_randRange(1,8);
  mobyutil::MB_randInt(2);
  dVar29 = (double)mobyutil::MB_randRangeFloat(0.2,0.6);
  puVar9[0x2f] = (longlong)(int)((double)animationSpeed * dVar39);
  partupd::SpawnPart_53
            ((double)(float)(dVar29 * 0.30000001192092896),dVar29,dVar52,iVar8 + 0xf0,
             *(undefined4 *)((int)puVar9 + 0x17c));
  puVar9[0x2f] = (longlong)(int)((double)animationSpeed * dVar39);
  dVar38 = 0.15000000596046448;
  partupd::SpawnPart_53
            ((double)(float)(dVar29 * 0.15000000596046448),(double)(float)(dVar29 * dVar30),dVar52,
             iVar8 + 0xf0,*(undefined4 *)((int)puVar9 + 0x17c));
  mobyutil::MB_randRange(1,8);
  mobyutil::MB_randInt(2);
  dVar29 = (double)mobyutil::MB_randRangeFloat((float)dVar38,3.0);
  puVar9[0x2f] = (longlong)(int)(animationSpeed * 12.5);
  partupd::SpawnPart_53
            ((double)(float)(dVar29 * 0.10000000149011612),dVar29,dVar52,iVar8 + 0x110,
             *(undefined4 *)((int)puVar9 + 0x17c));
  return;
}



//==== 00404a10  ns=mobyupdate_helpers  size=0x244
// sig: undefined M655_00404a10(void)
// callers(1): 00404d18 mobyupdate_unsorted::UpdateMoby_655
// callees(0): 

void mobyupdate_helpers::M655_00404a10(int param_1)

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
  float *pfVar10;
  undefined8 in_r0;
  undefined4 *puVar11;
  float *pfVar12;
  float *pfVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  longlong lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  iVar2 = *(int *)(param_1 + 0x78);
  if (DAT_00854a58 != 0) {
    fVar3 = *(float *)(iVar2 + 0x104) - *(float *)(iVar2 + 0xf4);
    DAT_010cbc00 = *(float *)(iVar2 + 0xf0);
    fVar4 = *(float *)(iVar2 + 0x100) - DAT_010cbc00;
    auVar17 = loadVectorLeftIndexed(0x4ad8,0x850000);
    DAT_00854a58 = 0;
    fVar5 = *(float *)(iVar2 + 0x108) - *(float *)(iVar2 + 0xf8);
    auVar18 = vectorConvertFromSignedFixedPointWord(auVar17,0);
    DAT_010cc1e4 = 0;
    auVar17 = loadVectorLeftIndexed(in_r0,0x404a00);
    auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar18 = vectorAddFloatingPoint
                        (auVar18,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60);
    auVar17 = ZEXT416(0xffffffff);
    auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
    auVar17 = vectorShiftLeftIntegerWord(auVar17,auVar17);
    auVar17 = vectorMultiplyAddFloatingPoint(auVar19,auVar18,auVar17);
    fVar6 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
    pfVar12 = &DAT_010cbc00;
    auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
    auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
    DAT_010cc1e0 = storeVectorElementWordIndexed
                             (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,
                              0xffffffffffffc1e0,0x10d0000);
    PTR_DAT_00854aac = &DAT_007f2020;
    fVar1 = 0.0;
    DAT_010cbc04 = *(undefined4 *)(iVar2 + 0xf4);
    DAT_010cbc08 = *(undefined4 *)(iVar2 + 0xf8);
    DAT_010cbc0c = *(undefined4 *)(iVar2 + 0xfc);
    lVar16 = 0x13;
    puVar15 = &DAT_010cbe84;
    puVar14 = &DAT_010cc014;
    pfVar13 = (float *)&DAT_010cbc10;
    fVar7 = (DAT_00854a5c * 0.05) / fVar6;
    puVar11 = &DAT_010cbee0;
    fVar9 = fVar1;
    if (0.0 - fVar6 < 0.0) {
      fVar9 = fVar5 * fVar7;
    }
    fVar8 = fVar1;
    if (0.0 - fVar6 < 0.0) {
      fVar8 = fVar3 * fVar7;
    }
    if (0.0 - fVar6 < 0.0) {
      fVar1 = fVar4 * fVar7;
    }
    if (fVar6 - 0.0 < 0.0) {
      fVar9 = fVar5 * fVar7;
    }
    if (fVar6 - 0.0 < 0.0) {
      fVar8 = fVar3 * fVar7;
    }
    if (fVar6 - 0.0 < 0.0) {
      fVar1 = fVar4 * fVar7;
    }
    do {
      *pfVar13 = *pfVar12 + fVar1;
      pfVar13[1] = pfVar12[1] + fVar8;
      pfVar13[2] = pfVar12[2] + fVar9;
      pfVar10 = pfVar12 + 3;
      pfVar12 = pfVar12 + 4;
      pfVar13[3] = *pfVar10;
      *puVar15 = 0;
      puVar11[3] = 0;
      pfVar13 = pfVar13 + 4;
      puVar11[2] = 0;
      puVar15 = puVar15 + 1;
      puVar11[1] = 0;
      *puVar11 = 0;
      *puVar14 = 0;
      puVar11 = puVar11 + 4;
      puVar14 = puVar14 + 1;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    DAT_010cc1c0 = 0xffff;
    DAT_010cc1c2 = 0xffff;
    DAT_010cc1c4 = 0xffff;
    DAT_010cc1c6 = 0xffff;
    DAT_010cc1d0 = 8;
    DAT_010cc1d8 = 4;
    DAT_010cc1d2 = 4;
    DAT_010cc1da = 2;
    DAT_010cc1d4 = 8;
    DAT_010cc1dc = 4;
    DAT_010cc1d6 = 4;
    DAT_010cc1de = 2;
    DAT_010cc064 = 0;
    DAT_010cc068 = 0;
    DAT_010cc06c = 0;
  }
  return;
}



//==== 00404d18  ns=mobyupdate_unsorted  size=0x1700
// sig: undefined UpdateMoby_655(MobyInstance * moby)
// callers(0): 
// callees(25): 00060780 collproc::CollHotspot; 0006d720 RegisterFuncForMoby; 0006d7e0 draw::RegisterPostDraw; 0007d118 hero::Hero_IsSwimming; 000da4ac lights::CreatePointLight2; 000da9e8 lights::DeletePointLight; 000f1ec8 mobyfunc::SetColorOfMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 000fe610 mobyutil::MB_SphericalToVector; 000ffb70 mobyutil::GetGroundZ; 00105ab4 mobyutil::CollDamageMobyDirect; 00110b70 mobyutil::MB_IsPntInCuboid; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d204 sound::sound_MobyPlay_oClass; 001eebe4 mobyupdate_helpers::M1180_001eebe4; 001eec10 FUN_001eec10; 00403708 mobyupdate_helpers::M655_00403708; 00404a10 mobyupdate_helpers::M655_00404a10; 004fffb4 fastfunc::FastDecTimerS16; 00502758 fastfunc::FastDoubleToInt; 00502b08 fastfunc::FastVecAddSelf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Moby 655 */

void mobyupdate_unsorted::UpdateMoby_655(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  void *pvVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  Cuboid *pCVar14;
  longlong lVar15;
  int iVar17;
  undefined2 uVar20;
  int iVar18;
  longlong lVar16;
  undefined4 uVar19;
  int iVar21;
  MobyInstance *pMoby;
  longlong lVar22;
  int *piVar23;
  ulonglong uVar24;
  MobyInstance *pMVar25;
  ulonglong uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined8 uVar30;
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
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 auStack_e0 [16];
  undefined1 local_d0 [40];
  undefined4 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  
  lVar15 = (longlong)(int)moby;
  uVar19 = 1;
  bVar1 = moby->state;
  pvVar8 = moby->pVar;
  uVar26 = ZEXT48(pvVar8);
  if (bVar1 != 0) {
    iVar17 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar8 + 0x124));
    bVar1 = moby->state;
    if (iVar17 == 0) {
      if (*(MobyInstance **)((int)pvVar8 + 0x84) != (MobyInstance *)0x0) {
        iVar17 = *(int *)((int)pvVar8 + 0x14);
        if (((iVar17 != -1) &&
            (sound::g_SoundChannels[iVar17].pMoby == *(MobyInstance **)((int)pvVar8 + 0x84))) &&
           (sound::g_SoundChannels[iVar17].state != '\0')) {
          sound::sound_Kill(iVar17);
        }
        iVar17 = *(int *)((int)pvVar8 + 0x80);
        *(undefined4 *)((int)pvVar8 + 0x14) = 0xffffffff;
        if (((iVar17 != -1) &&
            (sound::g_SoundChannels[iVar17].pMoby == *(MobyInstance **)((int)pvVar8 + 0x84))) &&
           (sound::g_SoundChannels[iVar17].state != '\0')) {
          sound::sound_Kill(iVar17);
        }
        *(undefined4 *)((int)pvVar8 + 0x80) = 0xffffffff;
      }
      if (*(int *)((int)pvVar8 + 0x120) == -1) {
        return;
      }
      lights::DeletePointLight(*(int *)((int)pvVar8 + 0x120));
      *(undefined4 *)((int)pvVar8 + 0x120) = 0xffffffff;
      return;
    }
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar17 = 0;
      moby->updateDistance = -1;
      uVar24 = uVar26;
      do {
        pMVar25 = MobyInstance;
        piVar23 = (int *)uVar24;
        iVar18 = *piVar23;
        if ((iVar18 == -1) || (MobyInstance[iVar18].oClass != BUTTON_033E)) {
          if (iVar18 != -1) {
            FUN_001eec10(MobyInstance + iVar18);
          }
        }
        else {
          (&DAT_00a53964)[(short)MobyInstance[iVar18].uid] = 0;
          (&DAT_00a545c4)[(short)pMVar25[*piVar23].uid] = 0;
          iVar18 = (int)((longlong)((int)(short)pMVar25[*piVar23].uid >> 5) << 2);
          *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar18) =
               *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar18) &
               ~(1 << (pMVar25[*piVar23].uid & 0x1f));
          iVar18 = (int)((longlong)((int)(short)pMVar25[*piVar23].uid >> 5) << 2);
          *(uint *)(&DAT_00a54dd0 + iVar18) =
               *(uint *)(&DAT_00a54dd0 + iVar18) & ~(1 << (pMVar25[*piVar23].uid & 0x1f));
        }
        iVar17 = iVar17 + 1;
        uVar24 = uVar24 + 4;
      } while (iVar17 < 4);
      uVar20 = fastfunc::FastDoubleToInt((double)(animationSpeed * DAT_00854a30 * 60.0));
      *(undefined2 *)((int)pvVar8 + 0x10) = uVar20;
      auVar41 = ZEXT416(0xffffffff);
      auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar39 = loadVectorLeftIndexed(4,0x404c60);
      auVar48 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar41 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar39 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar41 = vectorMultiplyAddFloatingPoint
                          (auVar39,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                           auVar48);
      auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
      auVar41 = vectorSplatHalfWord(auVar41,1);
      uVar20 = storeVectorElementHalfWordIndexed(auVar41,0x12,uVar26);
      *(undefined2 *)((int)pvVar8 + 0x12) = uVar20;
      *(undefined4 *)((int)pvVar8 + 0x1c) = 0;
      *(undefined4 *)((int)pvVar8 + 0x120) = 0xffffffff;
      moby->state = '\x01';
      *(undefined4 *)((int)pvVar8 + 0x14) = 0xffffffff;
      *(undefined4 *)((int)pvVar8 + 0x80) = 0xffffffff;
      goto LAB_00406360;
    }
    iVar17 = hero::Hero_IsSwimming();
    if (iVar17 == 0) {
      if (g_heroState == EDGE_HANG || g_heroState == EDGE_GRAB) {
        dVar27 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,local_d0,0);
        iVar17 = collproc::CollHotspot();
        if ((iVar17 != 0) || (dVar27 < (double)g_heroPosition.z)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
      }
      else {
        bVar10 = false;
      }
    }
    else {
      bVar10 = true;
    }
    iVar17 = fastfunc::FastDecTimerS16(uVar26 + 0x10);
    if (iVar17 != 0) {
      uVar20 = fastfunc::FastDoubleToInt((double)(animationSpeed * DAT_010cbbf0 * 60.0));
      *(undefined2 *)((int)pvVar8 + 0x12) = uVar20;
      moby->state = '\x02';
      if (*(MobyInstance **)((int)pvVar8 + 0x84) != (MobyInstance *)0x0) {
        iVar17 = *(int *)((int)pvVar8 + 0x80);
        if (((iVar17 != -1) &&
            (sound::g_SoundChannels[iVar17].pMoby == *(MobyInstance **)((int)pvVar8 + 0x84))) &&
           (sound::g_SoundChannels[iVar17].state != '\0')) {
          sound::sound_Kill(iVar17);
        }
        *(undefined4 *)((int)pvVar8 + 0x80) = 0xffffffff;
      }
    }
    iVar17 = 0;
    bVar9 = false;
    uVar24 = uVar26;
    do {
      iVar18 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)uVar24 + 0x20));
      if (iVar18 != 0) {
        bVar9 = true;
        break;
      }
      iVar17 = iVar17 + 1;
      uVar24 = uVar24 + 4;
    } while (iVar17 < 0xc);
    if (moby->state == '\x02') {
      iVar17 = 0;
      uVar24 = uVar26;
      do {
        iVar18 = *(int *)((int)uVar24 + 0x74);
        if (iVar18 != -1) {
          mobyfunc::SetColorOfMoby(MobyInstance + iVar18,0x40,0x40,0x40);
        }
        iVar17 = iVar17 + 1;
        uVar24 = uVar24 + 4;
      } while (iVar17 < 3);
    }
    else {
      iVar17 = 0;
      uVar24 = uVar26;
      do {
        uVar30 = mobyutil::MB_randRange(0x40,0x7f);
        iVar18 = *(int *)((int)uVar24 + 0x74);
        if (iVar18 != -1) {
          mobyfunc::SetColorOfMoby(MobyInstance + iVar18,uVar30,uVar30,uVar30);
        }
        iVar17 = iVar17 + 1;
        uVar24 = uVar24 + 4;
      } while (iVar17 < 3);
    }
    if (((!bVar9) || (!bVar10)) &&
       ((iVar17 = mobyutil::MB_randInt(1), iVar17 == 0 && (uVar30 = 0, DAT_010cbbf4 == 0)))) {
      iVar17 = 0;
      uVar24 = uVar26;
      lVar16 = 0;
      do {
        iVar18 = *(int *)((int)uVar24 + 0x90);
        lVar22 = lVar16;
        if (((iVar18 != -1) && (lVar22 = uVar24 + 0x90, (int *)lVar16 != (int *)0x0)) &&
           (iVar21 = *(int *)lVar16, fVar3 = Cuboids[iVar21].pos.y - g_heroPosition.y,
           fVar4 = Cuboids[iVar18].pos.y - g_heroPosition.y,
           fVar6 = Cuboids[iVar21].pos.x - g_heroPosition.x,
           fVar2 = Cuboids[iVar18].pos.x - g_heroPosition.x,
           fVar5 = Cuboids[iVar21].pos.z - g_heroPosition.z,
           fVar11 = Cuboids[iVar18].pos.z - g_heroPosition.z, lVar22 = lVar16,
           SQRT(fVar11 * fVar11 + fVar2 * fVar2 + fVar4 * fVar4) <
           SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar3 * fVar3))) {
          lVar22 = uVar24 + 0x90;
        }
        iVar17 = iVar17 + 8;
        uVar24 = uVar24 + 0x20;
        lVar16 = lVar22;
      } while (iVar17 < 0x18);
      iVar17 = (int)lVar22;
      if (iVar17 != 0) {
        iVar21 = 0;
        iVar18 = 8;
        do {
          if (*(int *)lVar22 == -1) {
            iVar18 = iVar21;
            if (iVar21 < 2) goto LAB_00405564;
            break;
          }
          iVar21 = iVar21 + 1;
          lVar22 = lVar22 + 4;
        } while (iVar21 < 8);
        lVar16 = mobyutil::MB_randRange(0,iVar18 + -2);
        pCVar14 = Cuboids;
        iVar21 = (int)(lVar16 << 2);
        iVar18 = *(int *)(iVar21 + iVar17);
        fVar6 = Cuboids[iVar18].pos.x;
        *(float *)((int)pvVar8 + 0xf0) = fVar6;
        *(float *)((int)pvVar8 + 0xf4) = pCVar14[iVar18].pos.y;
        *(float *)((int)pvVar8 + 0xf8) = pCVar14[iVar18].pos.z;
        *(float *)((int)pvVar8 + 0xfc) = pCVar14[iVar18].pos.w;
        iVar17 = *(int *)(iVar17 + iVar21 + 4);
        iVar18 = *(int *)((int)pvVar8 + 0x120);
        fVar2 = pCVar14[iVar17].pos.x;
        *(float *)((int)pvVar8 + 0x100) = fVar2;
        fVar3 = pCVar14[iVar17].pos.y;
        *(float *)((int)pvVar8 + 0x104) = fVar3;
        fVar4 = pCVar14[iVar17].pos.z;
        *(float *)((int)pvVar8 + 0x108) = fVar4;
        fVar5 = pCVar14[iVar17].pos.w;
        *(float *)((int)pvVar8 + 0x110) = fVar2;
        *(float *)((int)pvVar8 + 0x10c) = fVar5;
        *(float *)((int)pvVar8 + 0x114) = fVar3;
        *(float *)((int)pvVar8 + 0x118) = fVar4;
        *(float *)((int)pvVar8 + 0x11c) = fVar5;
        if (iVar18 == -1) {
          uVar19 = lights::CreatePointLight2
                             (8.0,uVar30,0x3ff0000000000000,0x3ff0000000000000,0x3fe0000000000000,
                              (Vec4 *)((int)pvVar8 + 0xf0));
          *(undefined4 *)((int)pvVar8 + 0x120) = uVar19;
        }
        else {
          PointLights[iVar18].pos.x = fVar6;
          PointLights[iVar18].pos.y = *(float *)((int)pvVar8 + 0xf4);
          fVar6 = *(float *)((int)pvVar8 + 0xf8);
          PointLights[iVar18].pos.w = 8.0;
          PointLights[iVar18].pos.z = fVar6;
          PointLights[iVar18].color.x = 1.0;
          PointLights[iVar18].color.y = 1.0;
          PointLights[iVar18].color.z = 0.5;
          PointLights[iVar18].color.w = 0.0;
        }
        mobyupdate_helpers::M655_00404a10(lVar15);
        mobyupdate_helpers::M655_00403708(lVar15);
        draw::RegisterPostDraw(&PTR_M656_004074c8_0070de90,moby);
      }
    }
LAB_00405564:
    if (bVar10 && bVar9) {
      pMVar25 = *(MobyInstance **)((int)pvVar8 + 0x84);
      if ((pMVar25 != (MobyInstance *)0x0) && (pMVar25 != g_heroMobyPtr)) {
        iVar17 = *(int *)((int)pvVar8 + 0x14);
        if ((iVar17 != -1) &&
           ((sound::g_SoundChannels[iVar17].pMoby == pMVar25 &&
            (sound::g_SoundChannels[iVar17].state != '\0')))) {
          sound::sound_Kill(iVar17);
        }
        iVar17 = *(int *)((int)pvVar8 + 0x80);
        *(undefined4 *)((int)pvVar8 + 0x14) = 0xffffffff;
        if (((iVar17 != -1) &&
            (sound::g_SoundChannels[iVar17].pMoby == *(MobyInstance **)((int)pvVar8 + 0x84))) &&
           (sound::g_SoundChannels[iVar17].state != '\0')) {
          sound::sound_Kill(iVar17);
        }
        *(undefined4 *)((int)pvVar8 + 0x80) = 0xffffffff;
      }
      *(MobyInstance **)((int)pvVar8 + 0x84) = g_heroMobyPtr;
      iVar17 = sound::sound_MobyPlay_oClass(0,4,g_heroMobyPtr,0x28f);
      pMVar25 = g_heroMobyPtr;
      *(int *)((int)pvVar8 + 0x14) = iVar17;
      iVar17 = sound::sound_MobyPlay_oClass(1,4,pMVar25,0x28f);
      *(int *)((int)pvVar8 + 0x80) = iVar17;
      if (*(int *)((int)pvVar8 + 0x1c) == 0) {
        *(undefined4 *)((int)pvVar8 + 0x50) = LevelFogNearDist;
        *(float *)((int)pvVar8 + 0x54) = LevelFogFarDist;
        *(float *)((int)pvVar8 + 0x58) = LevelFogNearIntensity;
        *(float *)((int)pvVar8 + 0x5c) = LevelFogFarIntensity;
        *(u8 *)((int)pvVar8 + 0x88) = levelFog.r;
        *(u8 *)((int)pvVar8 + 0x89) = levelFog.g;
        *(u8 *)((int)pvVar8 + 0x8a) = levelFog.b;
      }
      auVar41 = ZEXT416(0);
      auVar48 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      *(int *)((int)pvVar8 + 0x1c) = *(int *)((int)pvVar8 + 0x1c) + 1;
      levelFog.r = '\x7f';
      levelFog.g = '\x7f';
      levelFog.b = '\x7f';
      dVar31 = 0.0;
      LevelFogNearDist = 0;
      LevelFogFarDist = 131072.0;
      dVar27 = (double)mobyutil::MB_randRangeFloat(128.0,255.0);
      LevelFogNearIntensity = (float)dVar27;
      LevelFogFarIntensity = 0.0;
      dVar27 = (double)mobyutil::MB_randRangeFloat(5.0,8.0);
      dVar28 = (double)mobyutil::MB_randRot();
      dVar29 = (double)mobyutil::MB_randRot();
      mobyutil::MB_SphericalToVector
                ((float)dVar27,(float)dVar28,(float)dVar29,(float *)(uVar26 + 0x110));
      fastfunc::FastVecAddSelf(auStack_e0,uVar26 + 0x110,&hero::g_heroCGPos);
      *(undefined4 *)((int)pvVar8 + 0x100) = *(undefined4 *)((int)pvVar8 + 0x110);
      *(undefined4 *)((int)pvVar8 + 0x104) = *(undefined4 *)((int)pvVar8 + 0x114);
      *(undefined4 *)((int)pvVar8 + 0x108) = *(undefined4 *)((int)pvVar8 + 0x118);
      *(undefined4 *)((int)pvVar8 + 0x10c) = *(undefined4 *)((int)pvVar8 + 0x11c);
      *(undefined4 *)((int)pvVar8 + 0xf0) = hero::g_heroCGPos;
      *(undefined4 *)((int)pvVar8 + 0xf4) = DAT_00969db4;
      *(undefined4 *)((int)pvVar8 + 0xf8) = DAT_00969db8;
      *(undefined4 *)((int)pvVar8 + 0xfc) = DAT_00969dbc;
      mobyupdate_helpers::M655_00404a10(lVar15);
      mobyupdate_helpers::M655_00403708(lVar15);
      draw::RegisterPostDraw(&PTR_M656_004074c8_0070de90,moby);
      fVar6 = (moby->rotation).z;
      fVar2 = fVar6 + 1.5707963;
      auVar41 = ZEXT416(0xffffffff);
      auVar39 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar41 = ZEXT416(0xffffffff);
      auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar42 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar41 = ZEXT416(0xffffffff);
      auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      fVar3 = 3.1415925 - fVar6;
      if (fVar6 - (3.1415925 - fVar6) < 0.0) {
        fVar3 = fVar6;
      }
      auVar45 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar41 = ZEXT416(0xffffffff);
      auVar43 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar41 = ZEXT416(0xffffffff);
      auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      fVar4 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar4 = fVar2;
      }
      auVar32 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar41 = ZEXT416(0xffffffff);
      auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      fVar5 = -3.1415925 - fVar6;
      if ((-3.1415925 - fVar6) - fVar3 < 0.0) {
        fVar5 = fVar3;
      }
      auVar33 = loadVectorLeftIndexed(0x28,0x404c60);
      auVar35 = loadVectorLeftIndexed(0x48,lVar15);
      auVar36 = loadVectorLeftIndexed(0x2c,0x404c60);
      auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      fVar6 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
        fVar6 = fVar4;
      }
      fVar2 = fVar5 * fVar5;
      auVar34 = vectorAddFloatingPoint
                          (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60);
      auVar33 = loadVectorLeftIndexed(0x30,0x404c60);
      auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
      fVar3 = fVar6 * fVar6;
      auVar38 = vectorSubtractFloatingPoint(auVar36,auVar34);
      auVar36 = vectorSubtractFloatingPoint(auVar36,auVar35);
      auVar40 = vectorSubtractFloatingPoint(auVar33,auVar34);
      auVar37 = vectorSubtractFloatingPoint(auVar33,auVar35);
      auVar33 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar41 = ZEXT416(0xffffffff);
      auVar46 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar41 = vectorCompareGreaterThanFloatingPoint(auVar38,auVar34);
      auVar44 = vectorCompareGreaterThanFloatingPoint(auVar36,auVar35);
      fVar4 = fVar3 * fVar3 * fVar6;
      fVar12 = fVar2 * fVar2 * fVar5;
      auVar35 = vectorConditionalSelect(auVar36,auVar35,auVar44);
      auVar36 = vectorConditionalSelect(auVar38,auVar34,auVar41);
      auVar41 = ZEXT416(0xffffffff);
      auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar34 = loadVectorLeftIndexed(0x34,0x404c60);
      auVar44 = vectorCompareGreaterThanFloatingPoint(auVar35,auVar37);
      auVar38 = vectorCompareGreaterThanFloatingPoint(auVar36,auVar40);
      auVar35 = vectorConditionalSelect(auVar37,auVar35,auVar44);
      fVar11 = fVar3 * fVar4;
      fVar13 = fVar2 * fVar12;
      auVar37 = vectorShiftLeftIntegerWord(auVar39,auVar39);
      auVar39 = vectorConditionalSelect(auVar40,auVar36,auVar38);
      auVar38 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar41 = ZEXT416(0xffffffff);
      auVar40 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar37 = vectorMultiplyAddFloatingPoint(auVar35,auVar35,auVar37);
      auVar41 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar36 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar44 = vectorMultiplyAddFloatingPoint(auVar39,auVar39,auVar42);
      auVar41 = ZEXT416(0xffffffff);
      auVar34 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar42 = vectorShiftLeftIntegerWord(auVar40,auVar40);
      auVar41 = ZEXT416(0xffffffff);
      auVar40 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar34 = vectorShiftLeftIntegerWord(auVar34,auVar34);
      auVar41 = vectorMultiplyAddFloatingPoint(auVar37,auVar35,auVar38);
      auVar38 = vectorMultiplyAddFloatingPoint(auVar44,auVar39,auVar34);
      auVar40 = vectorShiftLeftIntegerWord(auVar40,auVar40);
      fVar2 = (fVar2 * fVar13 * 2.601887e-06 +
              fVar13 * -0.0001980741 + fVar12 * 0.0083330255 + fVar2 * fVar5 * -0.16666657 + fVar5)
              * 0.2;
      fVar6 = (fVar3 * fVar11 * 2.601887e-06 +
              fVar11 * -0.0001980741 + fVar4 * 0.0083330255 + fVar3 * fVar6 * -0.16666657 + fVar6) *
              0.2;
      auVar34 = vectorMultiplyAddFloatingPoint(auVar37,auVar41,auVar42);
      auVar42 = vectorMultiplyAddFloatingPoint(auVar41,auVar36,auVar35);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar44,auVar38,auVar45);
      auVar41 = loadVectorLeftIndexed(0x38,0x404c60);
      auVar39 = vectorMultiplyAddFloatingPoint(auVar38,auVar36,auVar39);
      auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar36 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar43 = vectorShiftLeftIntegerWord(auVar43,auVar43);
      auVar41 = ZEXT416(0xffffffff);
      auVar38 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar41 = loadVectorLeftIndexed(0x3c,0x404c60);
      auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar47 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar45 = vectorMultiplyAddFloatingPoint(auVar37,auVar34,auVar43);
      auVar43 = vectorMultiplyAddFloatingPoint(auVar34,auVar36,auVar42);
      auVar38 = vectorShiftLeftIntegerWord(auVar38,auVar38);
      auVar34 = vectorMultiplyAddFloatingPoint(auVar44,auVar35,auVar40);
      auVar40 = loadVectorLeftIndexed(0xa6,lVar15);
      auVar42 = vectorMultiplyAddFloatingPoint(auVar35,auVar36,auVar39);
      auVar36 = loadVectorLeftIndexed(0x40,0x404c60);
      auVar41 = ZEXT416(0xffffffff);
      auVar39 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar32 = vectorMultiplyAddFloatingPoint(auVar37,auVar45,auVar32);
      auVar43 = vectorMultiplyAddFloatingPoint(auVar45,auVar47,auVar43);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar44,auVar34,auVar33);
      auVar41 = ZEXT416(0xfffffff0);
      auVar33 = vectorShiftLeftIntegerWord(auVar39,auVar39);
      auVar45 = vectorShiftRightWord
                          (auVar40,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60);
      auVar39 = vectorShiftLeftIntegerWord(auVar46,auVar46);
      auVar42 = vectorMultiplyAddFloatingPoint(auVar34,auVar47,auVar42);
      auVar41 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar34 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar41 = loadVectorLeftIndexed(0x44,0x404c60);
      auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar36 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar41 = vectorMultiplyAddFloatingPoint(auVar32,auVar34,auVar43);
      auVar43 = vectorMultiplyAddFloatingPoint(auVar35,auVar34,auVar42);
      auVar42 = vectorMultiplyAddFloatingPoint(auVar41,auVar36,auVar38);
      auVar39 = vectorMultiplyAddFloatingPoint(auVar43,auVar36,auVar39);
      auVar41 = vectorMultiplyAddFloatingPoint(auVar42,auVar42,auVar33);
      auVar43 = vectorMultiplyAddFloatingPoint(auVar39,auVar39,auVar41);
      auVar41 = auVar48;
      if ((double)SQRT(fVar6 * fVar6 + fVar2 * fVar2) != dVar31) {
        auVar32 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar43);
        auVar41 = ZEXT416(0xffffffff);
        auVar48 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar41 = ZEXT416(0xffffffff);
        auVar33 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar41 = ZEXT416(0xffffffff);
        auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar48 = vectorShiftLeftIntegerWord(auVar48,auVar48);
        auVar36 = vectorShiftLeftIntegerWord(auVar33,auVar33);
        auVar37 = vectorShiftLeftIntegerWord(auVar41,auVar41);
        auVar41 = loadVectorLeftIndexed(0xc,0x404c60);
        auVar33 = loadVectorLeftIndexed(0x18,0x404c60);
        auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar35 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar41 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar34 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar41 = ZEXT416(0xffffffff);
        auVar38 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar33 = vectorMultiplyAddFloatingPoint(auVar43,auVar32,auVar48);
        auVar36 = vectorMultiplyAddFloatingPoint(auVar35,auVar32,auVar36);
        auVar41 = ZEXT416(0xffffffff);
        auVar40 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar38 = vectorShiftLeftIntegerWord(auVar38,auVar38);
        auVar41 = ZEXT416(0xffffffff);
        auVar48 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar41 = vectorNegativeMultiplySubtractFloatingPoint(auVar33,auVar32,auVar34);
        auVar32 = vectorMultiplyAddFloatingPoint(auVar41,auVar36,auVar32);
        auVar33 = vectorShiftLeftIntegerWord(auVar40,auVar40);
        auVar41 = ZEXT416(0xffffffff);
        auVar36 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar41 = ZEXT416(0xffffffff);
        auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar36 = vectorShiftLeftIntegerWord(auVar36,auVar36);
        auVar40 = vectorShiftLeftIntegerWord(auVar41,auVar41);
        auVar41 = vectorMultiplyAddFloatingPoint(auVar43,auVar32,auVar37);
        auVar37 = vectorMultiplyAddFloatingPoint(auVar35,auVar32,auVar38);
        auVar41 = vectorNegativeMultiplySubtractFloatingPoint(auVar41,auVar32,auVar34);
        auVar41 = vectorMultiplyAddFloatingPoint(auVar41,auVar37,auVar32);
        auVar32 = vectorShiftLeftIntegerWord(auVar48,auVar48);
        auVar48 = vectorMultiplyAddFloatingPoint(auVar43,auVar41,auVar33);
        auVar43 = vectorMultiplyAddFloatingPoint(auVar35,auVar41,auVar36);
        auVar48 = vectorNegativeMultiplySubtractFloatingPoint(auVar48,auVar41,auVar34);
        auVar48 = vectorMultiplyAddFloatingPoint(auVar48,auVar43,auVar41);
        auVar41 = vectorMultiplyAddFloatingPoint(auVar39,auVar48,auVar40);
        auVar48 = vectorMultiplyAddFloatingPoint(auVar42,auVar48,auVar32);
      }
      auVar39._0_4_ = moby;
      auVar39._4_4_ = 0x10001;
      auVar39._8_4_ = uStack_a8;
      auVar39._12_4_ = 0x3f800000;
      auVar42 = loadVectorLeftIndexed(0x80,0x404c60);
      auVar48 = vectorPermute(auVar41,auVar48,_DAT_00404cc0);
      auVar41 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar48 = vectorPermute(auVar48,_DAT_00404cb0,_DAT_00404cd0);
      auVar41 = vectorPermute(auVar45,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                              _DAT_00404cf0);
      auVar41 = vectorPermute(auVar41,auVar39,_DAT_00404d00);
      local_110 = auVar48._0_8_;
      local_108 = auVar48._8_8_;
      local_100 = auVar41._0_8_;
      local_f8 = auVar41._8_8_;
      mobyutil::CollDamageMobyDirect
                (g_heroMobyPtr,0x40,local_110,local_108,local_100,local_f8,
                 CONCAT44(uStack_a0,uStack_9c),CONCAT44(uStack_98,uStack_94));
      if (moby->state == '\x02') {
        LevelFogNearDist = *(undefined4 *)((int)pvVar8 + 0x50);
        LevelFogFarDist = *(float *)((int)pvVar8 + 0x54);
        LevelFogNearIntensity = *(float *)((int)pvVar8 + 0x58);
        LevelFogFarIntensity = *(float *)((int)pvVar8 + 0x5c);
        levelFog.r = *(u8 *)((int)pvVar8 + 0x88);
        levelFog.g = *(u8 *)((int)pvVar8 + 0x89);
        levelFog.b = *(u8 *)((int)pvVar8 + 0x8a);
      }
    }
  }
  else if (2 < bVar1) {
    if (bVar1 < 4) {
      iVar17 = 0;
      uVar24 = uVar26;
      do {
        iVar18 = *(int *)((int)uVar24 + 0x74);
        if (iVar18 != -1) {
          mobyfunc::SetColorOfMoby(MobyInstance + iVar18,0x40,0x40,0x40);
        }
        iVar17 = iVar17 + 1;
        uVar24 = uVar24 + 4;
      } while (iVar17 < 3);
      if (*(int *)((int)pvVar8 + 0x120) != -1) {
        lights::DeletePointLight(*(int *)((int)pvVar8 + 0x120));
        *(undefined4 *)((int)pvVar8 + 0x120) = 0xffffffff;
      }
      if (*(short *)((int)pvVar8 + 0x12) != 0) {
        RegisterFuncForMoby(&PTR_M656_00406458_0070de78,moby);
      }
      if (*(MobyInstance **)((int)pvVar8 + 0x84) != (MobyInstance *)0x0) {
        iVar17 = *(int *)((int)pvVar8 + 0x14);
        if (((iVar17 != -1) &&
            (sound::g_SoundChannels[iVar17].pMoby == *(MobyInstance **)((int)pvVar8 + 0x84))) &&
           (sound::g_SoundChannels[iVar17].state != '\0')) {
          sound::sound_Kill(iVar17);
        }
        iVar17 = *(int *)((int)pvVar8 + 0x80);
        *(undefined4 *)((int)pvVar8 + 0x14) = 0xffffffff;
        if (((iVar17 != -1) &&
            (sound::g_SoundChannels[iVar17].pMoby == *(MobyInstance **)((int)pvVar8 + 0x84))) &&
           (sound::g_SoundChannels[iVar17].state != '\0')) {
          sound::sound_Kill(iVar17);
        }
        *(undefined4 *)((int)pvVar8 + 0x80) = 0xffffffff;
        *(undefined4 *)((int)pvVar8 + 0x84) = 0;
      }
      iVar17 = 0;
      dVar28 = 60.0;
      dVar27 = 60.5;
      uVar24 = uVar26;
      do {
        iVar18 = *(int *)uVar24;
        if (((iVar18 != -1) && (g_standingOnMoby == MobyInstance + iVar18)) &&
           ((MobyInstance[iVar18].oClass == BUTTON_033E && (g_framesNotGrounded == 0)))) {
          if (*(int *)((int)pvVar8 + 0x8c) != 0) {
            sVar7 = *(short *)((int)pvVar8 + 0x12);
            iVar18 = fastfunc::FastDoubleToInt
                               ((double)(animationSpeed *
                                        (float)((double)*(float *)((int)pvVar8 + 0x18) * dVar28)));
            if ((int)sVar7 < iVar18 - (int)((double)animationSpeed * dVar27)) {
              uVar20 = fastfunc::FastDoubleToInt
                                 ((double)(float)((double)animationSpeed *
                                                 (double)(float)((double)*(float *)((int)pvVar8 +
                                                                                   0x18) * dVar28)))
              ;
              *(undefined2 *)((int)pvVar8 + 0x12) = uVar20;
              sound::sound_MobyPlay_oClass(2,0,MobyInstance + *(int *)uVar24,0x28f);
            }
          }
          uVar19 = 0;
        }
        iVar17 = iVar17 + 1;
        uVar24 = uVar24 + 4;
      } while (iVar17 < 4);
      *(undefined4 *)((int)pvVar8 + 0x8c) = uVar19;
      iVar17 = fastfunc::FastDecTimerS16(uVar26 + 0x12);
      if (((iVar17 != 0) ||
          ((iVar17 = mobyutil::MB_IsPntInCuboid
                               (&g_heroPosition,(longlong)*(int *)((int)pvVar8 + 0x70)), iVar17 != 0
           && (g_framesNotGrounded == 0)))) ||
         (iVar17 = mobyutil::MB_IsPntInCuboid
                             (&g_heroPosition,(longlong)*(int *)((int)pvVar8 + 0x128)), iVar17 != 0)
         ) {
        iVar17 = 0;
        uVar24 = uVar26;
        do {
          iVar18 = *(int *)uVar24;
          if ((iVar18 == -1) || (MobyInstance[iVar18].oClass != BUTTON_033E)) {
            if (iVar18 != -1) {
              FUN_001eec10(MobyInstance + iVar18);
            }
          }
          else {
            MobyInstance[iVar18].state = '\x01';
          }
          iVar17 = iVar17 + 1;
          uVar24 = uVar24 + 4;
        } while (iVar17 < 4);
        uVar20 = fastfunc::FastDoubleToInt
                           ((double)(animationSpeed * (float)((double)DAT_00854a30 * dVar28)));
        *(undefined2 *)((int)pvVar8 + 0x10) = uVar20;
        auVar41 = ZEXT416(0xffffffff);
        auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar48 = vectorShiftLeftIntegerWord(auVar41,auVar41);
        auVar41 = loadVectorLeftIndexed(4,0x404c60);
        auVar39 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar41 = vectorMultiplyAddFloatingPoint
                            (auVar39,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                             auVar48);
        auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
        auVar41 = vectorSplatHalfWord(auVar41,1);
        uVar20 = storeVectorElementHalfWordIndexed(auVar41,0x12,uVar26);
        *(undefined2 *)((int)pvVar8 + 0x12) = uVar20;
        *(undefined4 *)((int)pvVar8 + 0x1c) = 0;
        moby->state = '\x01';
      }
    }
    goto LAB_00406360;
  }
  iVar17 = 0;
  pMVar25 = (MobyInstance *)0x0;
  uVar24 = uVar26;
  do {
    iVar18 = *(int *)((int)uVar24 + 0x74);
    if ((iVar18 != -1) &&
       ((pMVar25 == (MobyInstance *)0x0 ||
        (fVar6 = (pMVar25->pos).y - GameCamera.posY, fVar3 = (pMVar25->pos).x - GameCamera.posX,
        fVar2 = MobyInstance[iVar18].pos.y - GameCamera.posY,
        fVar4 = MobyInstance[iVar18].pos.x - GameCamera.posX,
        SQRT(fVar4 * fVar4 + fVar2 * fVar2) < SQRT(fVar3 * fVar3 + fVar6 * fVar6))))) {
      pMVar25 = MobyInstance + iVar18;
    }
    iVar17 = iVar17 + 1;
    uVar24 = uVar24 + 4;
  } while (iVar17 < 3);
  pMoby = *(MobyInstance **)((int)pvVar8 + 0x84);
  if ((pMoby == (MobyInstance *)0x0) ||
     (fVar6 = (pMoby->pos).y - GameCamera.posY, fVar2 = (pMVar25->pos).y - GameCamera.posY,
     fVar3 = (pMoby->pos).x - GameCamera.posX, fVar4 = (pMVar25->pos).x - GameCamera.posX,
     SQRT(fVar4 * fVar4 + fVar2 * fVar2) < SQRT(fVar3 * fVar3 + fVar6 * fVar6))) {
    if (pMoby != (MobyInstance *)0x0) {
      iVar17 = *(int *)((int)pvVar8 + 0x14);
      if (((iVar17 != -1) && (sound::g_SoundChannels[iVar17].pMoby == pMoby)) &&
         (sound::g_SoundChannels[iVar17].state != '\0')) {
        sound::sound_Kill(iVar17);
      }
      iVar17 = *(int *)((int)pvVar8 + 0x80);
      *(undefined4 *)((int)pvVar8 + 0x14) = 0xffffffff;
      if (((iVar17 != -1) &&
          (sound::g_SoundChannels[iVar17].pMoby == *(MobyInstance **)((int)pvVar8 + 0x84))) &&
         (sound::g_SoundChannels[iVar17].state != '\0')) {
        sound::sound_Kill(iVar17);
      }
      *(undefined4 *)((int)pvVar8 + 0x80) = 0xffffffff;
    }
    *(MobyInstance **)((int)pvVar8 + 0x84) = pMVar25;
    pMoby = pMVar25;
  }
  iVar17 = sound::IsMobyPlayingSound(pMoby,*(int *)((int)pvVar8 + 0x14));
  if (iVar17 == 0) {
    iVar17 = sound::sound_MobyPlay_oClass(0,5,*(MobyInstance **)((int)pvVar8 + 0x84),0x28f);
    *(int *)((int)pvVar8 + 0x14) = iVar17;
  }
  if ((moby->state == '\x01') &&
     (iVar17 = sound::IsMobyPlayingSound
                         (*(MobyInstance **)((int)pvVar8 + 0x84),*(int *)((int)pvVar8 + 0x80)),
     iVar17 == 0)) {
    iVar17 = sound::sound_MobyPlay_oClass(1,5,*(MobyInstance **)((int)pvVar8 + 0x84),0x28f);
    *(int *)((int)pvVar8 + 0x80) = iVar17;
  }
  iVar17 = fastfunc::FastDecTimerS16(uVar26 + 0x12);
  if ((iVar17 != 0) && (moby->state == '\x02')) {
    uVar20 = fastfunc::FastDoubleToInt((double)(animationSpeed * DAT_00854a30 * 60.0));
    *(undefined2 *)((int)pvVar8 + 0x10) = uVar20;
    auVar41 = ZEXT416(0xffffffff);
    auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    auVar39 = loadVectorLeftIndexed(4,0x404c60);
    auVar48 = vectorShiftLeftIntegerWord(auVar41,auVar41);
    auVar41 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar39 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar41 = vectorMultiplyAddFloatingPoint
                        (auVar39,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                         auVar48);
    auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
    auVar41 = vectorSplatHalfWord(auVar41,1);
    uVar20 = storeVectorElementHalfWordIndexed(auVar41,0x12,uVar26);
    *(undefined2 *)((int)pvVar8 + 0x12) = uVar20;
    *(undefined4 *)((int)pvVar8 + 0x1c) = 0;
    moby->state = '\x01';
  }
  iVar17 = 0;
  dVar27 = 60.0;
  uVar24 = uVar26;
  do {
    piVar23 = (int *)uVar24;
    iVar18 = *piVar23;
    if (((iVar18 == -1) || (MobyInstance[iVar18].oClass != BUTTON_033E)) ||
       (MobyInstance[iVar18].state != '\x02')) {
      if ((iVar18 != -1) &&
         (iVar18 = mobyupdate_helpers::M1180_001eebe4(MobyInstance + iVar18), iVar18 != 0)) {
        uVar20 = fastfunc::FastDoubleToInt
                           ((double)(animationSpeed *
                                    (float)((double)*(float *)((int)pvVar8 + 0x18) * dVar27)));
        *(undefined2 *)((int)pvVar8 + 0x12) = uVar20;
        moby->state = '\x03';
        sound::sound_MobyPlay_oClass(2,0,MobyInstance + *piVar23,0x28f);
        *(undefined4 *)((int)pvVar8 + 0x8c) = 0;
      }
    }
    else {
      uVar20 = fastfunc::FastDoubleToInt
                         ((double)(animationSpeed *
                                  (float)((double)*(float *)((int)pvVar8 + 0x18) * dVar27)));
      *(undefined2 *)((int)pvVar8 + 0x12) = uVar20;
      moby->state = '\x03';
      sound::sound_MobyPlay_oClass(2,0,MobyInstance + *piVar23,0x28f);
      *(undefined4 *)((int)pvVar8 + 0x8c) = 0;
    }
    iVar17 = iVar17 + 1;
    uVar24 = uVar24 + 4;
  } while (iVar17 < 4);
LAB_00406360:
  iVar17 = 0;
  do {
    iVar18 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)uVar26 + 0x60));
    if ((iVar18 != 0) && (iVar18 = hero::Hero_IsSwimming(), iVar18 != 0)) {
      hero::g_heroWaterZ = Cuboids[*(int *)((int)uVar26 + 0x60)].pos.z;
    }
    iVar17 = iVar17 + 1;
    uVar26 = uVar26 + 4;
  } while (iVar17 < 4);
                    /* WARNING: Read-only address (ram,0x00404cb0) is written */
                    /* WARNING: Read-only address (ram,0x00404cc0) is written */
                    /* WARNING: Read-only address (ram,0x00404cd0) is written */
                    /* WARNING: Read-only address (ram,0x00404cf0) is written */
                    /* WARNING: Read-only address (ram,0x00404d00) is written */
  return;
}



//==== 00406458  ns=mobyupdate_helpers  size=0x318
// sig: undefined M656_00406458(void)
// callers(0): 
// callees(6): 0006a718 draw::DrawRoundedRect; 00070998 draw::FontPrintLargeCenter; 000fc620 mobyutil::MB_randInt; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M656_00406458(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  undefined1 local_30 [32];
  
  draw::DrawRoundedRect
            (DAT_00854a38 + DAT_00854a44,DAT_00854a48 + DAT_00854a38,DAT_00854a34 + DAT_00854a4c,
             DAT_00854a34 + DAT_00854a50,DAT_00854a54);
  dVar7 = (double)fastfunc::FastIntToDouble(worldUpdateTime % 0x3c);
  fVar1 = (float)(dVar7 * 0.01666666753590107) * 6.28318;
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  dVar7 = 1.0;
  fVar1 = fVar3 * fVar3;
  fVar2 = fVar1 * fVar1 * fVar3;
  fVar4 = fVar1 * fVar2;
  dVar8 = (double)((fVar1 * fVar4 * 2.601887e-06 +
                   fVar4 * -0.0001980741 +
                   fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3) * 3.0 + 0.5);
  if ((dVar8 <= 1.0) && (dVar7 = dVar8, dVar8 < 0.0)) {
    dVar7 = 0.0;
  }
  uVar5 = fastfunc::FastLerpColor(dVar7,DAT_00854a3c,DAT_00854a40);
  iVar6 = mobyutil::MB_randInt(10);
  fastfunc::FastDoubleToInt((double)(longlong)iVar6);
  draw::FontPrintLargeCenter(DAT_00854a34,DAT_00854a38,uVar5,local_30,8);
  return;
}



//==== 00406790  ns=mobyupdate_helpers  size=0x538
// sig: undefined M656_00406790(void)
// callers(1): 004074c8 mobyupdate_helpers::M656_004074c8
// callees(6): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 000fe4f0 mobyutil::MB_randRangeSigned; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M656_00406790(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  ulonglong *puVar11;
  float fVar12;
  float fVar13;
  undefined *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  float *pfVar23;
  longlong lVar22;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  undefined4 *puVar24;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  float *pfVar25;
  ulonglong unaff_r31;
  longlong lVar26;
  float *pfVar27;
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
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  double dVar39;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  double dVar40;
  ulonglong in_f25;
  double dVar41;
  ulonglong in_f26;
  double dVar42;
  ulonglong in_f27;
  double dVar43;
  ulonglong in_f28;
  double dVar44;
  ulonglong in_f29;
  double dVar45;
  ulonglong in_f30;
  double dVar46;
  ulonglong in_f31;
  double dVar47;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar18 = uVar15 - 0x1a0;
  puVar11 = (ulonglong *)lVar18;
  *puVar11 = uVar15;
  puVar11[0x36] = in_LR;
  puVar11[0x26] = in_f18;
  puVar11[0x27] = in_f19;
  puVar11[0x28] = in_f20;
  puVar11[0x29] = in_f21;
  puVar11[0x2a] = in_f22;
  puVar11[0x2b] = in_f23;
  puVar11[0x2c] = in_f24;
  puVar11[0x2d] = in_f25;
  puVar11[0x2e] = in_f26;
  puVar11[0x2f] = in_f27;
  puVar11[0x30] = in_f28;
  puVar11[0x31] = in_f29;
  puVar11[0x32] = in_f30;
  puVar11[0x33] = in_f31;
  puVar11[0x24] = unaff_r30;
  iVar10 = *(int *)(param_1 + 0x78);
  puVar11[0x25] = unaff_r31;
  puVar11[0x23] = unaff_r29;
  puVar11[0x22] = unaff_r28;
  puVar11[0x21] = unaff_r27;
  puVar11[0x20] = unaff_r26;
  uVar16 = draw::GetEffectTex(0xb);
  puVar11[0x1d] = uVar16;
  uVar16 = idol_draw::PackCmd(0,2,0,1,0x80);
  puVar11[0x1f] = uVar16;
  uVar16 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar11[0x1e] = uVar16;
  uVar16 = FUN_00502f08(0,0,0,0,0,0);
  fVar4 = *(float *)(iVar10 + 0xf4);
  fVar5 = *(float *)(iVar10 + 0xf0);
  dVar31 = (double)GameCamera.posY;
  dVar29 = (double)GameCamera.posX;
  fVar1 = (float)(dVar31 - (double)fVar4);
  fVar2 = (float)(dVar29 - (double)fVar5);
  dVar32 = (double)GameCamera.posZ;
  fVar6 = *(float *)(iVar10 + 0xf8);
  fVar3 = (float)(dVar32 - (double)fVar6);
  puVar11[0x1c] = uVar16;
  uVar7 = DAT_00854b60;
  dVar40 = 0.0;
  dVar41 = (double)(float)GameCamera.field8_0x14c;
  fVar12 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  fVar13 = 0.3 / fVar12;
  dVar39 = dVar40;
  if (0.0 - fVar12 < 0.0) {
    dVar39 = (double)(fVar1 * fVar13);
  }
  dVar45 = dVar40;
  if (0.0 - fVar12 < 0.0) {
    dVar45 = (double)(fVar2 * fVar13);
  }
  dVar33 = dVar40;
  if (0.0 - fVar12 < 0.0) {
    dVar33 = (double)(fVar3 * fVar13);
  }
  if (fVar12 - 0.0 < 0.0) {
    dVar39 = (double)(fVar1 * fVar13);
  }
  if (fVar12 - 0.0 < 0.0) {
    dVar45 = (double)(fVar2 * fVar13);
  }
  if (fVar12 - 0.0 < 0.0) {
    dVar33 = (double)(fVar3 * fVar13);
  }
  dVar46 = (double)(float)(dVar39 + (double)fVar4);
  dVar47 = (double)(float)(dVar45 + (double)fVar5);
  dVar45 = (double)(float)(dVar33 + (double)fVar6);
  fVar1 = (float)(dVar31 - dVar46);
  fVar2 = (float)(dVar29 - dVar47);
  fVar3 = (float)(dVar32 - dVar45);
  fVar4 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  dVar39 = dVar40;
  dVar29 = dVar40;
  dVar31 = dVar40;
  if (SQRT(fVar4) != 0.0) {
    fVar5 = 1.0 / SQRT(fVar4);
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    dVar39 = (double)(fVar2 * fVar5);
    dVar29 = (double)(fVar1 * fVar5);
    dVar31 = (double)(fVar3 * fVar5);
  }
  fVar1 = (float)((double)DAT_00969f78 * dVar39 -
                 (double)(float)((double)hero::g_heroGravityDir * dVar31));
  fVar2 = (float)((double)DAT_00969f74 * dVar31 - (double)(float)((double)DAT_00969f78 * dVar29));
  fVar3 = (float)((double)hero::g_heroGravityDir * dVar29 -
                 (double)(float)((double)DAT_00969f74 * dVar39));
  *(undefined4 *)((int)puVar11 + 0xbc) = DAT_00854b60;
  *(undefined4 *)(puVar11 + 0x17) = uVar7;
  *(undefined4 *)((int)puVar11 + 0xb4) = uVar7;
  *(undefined4 *)(puVar11 + 0x16) = uVar7;
  fVar4 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  fVar5 = -1.0 / fVar4;
  dVar32 = dVar40;
  if (0.0 - fVar4 < 0.0) {
    dVar32 = (double)(fVar2 * fVar5);
  }
  dVar33 = dVar40;
  if (0.0 - fVar4 < 0.0) {
    dVar33 = (double)(fVar1 * fVar5);
  }
  dVar35 = dVar40;
  if (0.0 - fVar4 < 0.0) {
    dVar35 = (double)(fVar3 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar32 = (double)(fVar2 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar33 = (double)(fVar1 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar35 = (double)(fVar3 * fVar5);
  }
  dVar42 = (double)(float)(dVar39 * dVar33 - (double)(float)(dVar29 * dVar32));
  dVar44 = (double)(float)(dVar29 * dVar35 - (double)(float)(dVar31 * dVar33));
  dVar43 = (double)(float)(dVar31 * dVar32 - (double)(float)(dVar39 * dVar35));
  dVar30 = (double)mobyutil::MB_randRangeSigned(0,0x3f999999a0000000);
  puVar19 = &DAT_00854b40;
  lVar26 = uVar15 - 0x130;
  dVar30 = (double)(float)((double)DAT_00854b68 + dVar30);
  pfVar25 = (float *)&DAT_00854b00;
  puVar24 = &DAT_00854b44;
  lVar28 = 4;
  lVar17 = lVar18;
  lVar22 = lVar26;
  puVar21 = puVar24;
  puVar20 = puVar19;
  pfVar27 = pfVar25;
  do {
    fVar2 = *pfVar27;
    fVar1 = (float)((double)fVar2 * dVar30);
    dVar34 = (double)fVar1;
    pfVar23 = (float *)lVar22;
    *pfVar23 = fVar1;
    dVar36 = (double)pfVar27[1];
    pfVar23[1] = (float)(dVar36 * dVar30);
    dVar37 = (double)(float)((double)pfVar27[2] * dVar30);
    pfVar23[2] = (float)((double)pfVar27[2] * dVar30);
    dVar38 = (double)pfVar27[3];
    pfVar27 = pfVar27 + 4;
    pfVar23[3] = (float)((double)fVar2 * (double)(float)(dVar30 * dVar41) + dVar38);
    *pfVar23 = (float)(dVar38 * dVar47 +
                      (double)(float)(dVar37 * dVar44 +
                                     (double)(float)(dVar34 * dVar39 +
                                                    (double)(float)(dVar36 * (double)(float)(dVar30 
                                                  * dVar32)))));
    pfVar23[1] = (float)(dVar38 * dVar46 +
                        (double)(float)(dVar37 * dVar43 +
                                       (double)(float)(dVar34 * dVar29 +
                                                      (double)(float)(dVar36 * (double)(float)(
                                                  dVar30 * dVar33)))));
    pfVar23[2] = (float)(dVar38 * dVar45 +
                        (double)(float)(dVar37 * dVar42 +
                                       (double)(float)(dVar34 * dVar31 +
                                                      (double)(float)(dVar36 * (double)(float)(
                                                  dVar30 * dVar35)))));
    uVar7 = *puVar20;
    lVar22 = lVar22 + 0x10;
    uVar8 = *puVar21;
    puVar20 = puVar20 + 2;
    *(undefined4 *)((int)lVar17 + 0xc0) = uVar7;
    puVar21 = puVar21 + 2;
    *(undefined4 *)((int)lVar17 + 0xc4) = uVar8;
    lVar17 = lVar17 + 8;
    lVar28 = lVar28 + -1;
  } while (lVar28 != 0);
  draw::FastDrawQuad(uVar15 - 0x130,0,0,EffectTexHeaders,9);
  puVar14 = PTR_DAT_00854aac;
  *(undefined **)((int)puVar11 + 0xbc) = PTR_DAT_00854aac;
  *(undefined **)(puVar11 + 0x17) = puVar14;
  *(undefined **)((int)puVar11 + 0xb4) = puVar14;
  *(undefined **)(puVar11 + 0x16) = puVar14;
  dVar40 = (double)mobyutil::MB_randRangeSigned(dVar40,0x3fa99999a0000000);
  uVar7 = EffectTexHeaders;
  lVar17 = 4;
  dVar40 = (double)(float)((double)DAT_00854b6c + dVar40);
  do {
    fVar2 = *pfVar25;
    fVar1 = (float)((double)fVar2 * dVar40);
    dVar30 = (double)fVar1;
    pfVar27 = (float *)lVar26;
    *pfVar27 = fVar1;
    dVar34 = (double)pfVar25[1];
    pfVar27[1] = (float)(dVar34 * dVar40);
    dVar36 = (double)(float)((double)pfVar25[2] * dVar40);
    pfVar27[2] = (float)((double)pfVar25[2] * dVar40);
    dVar37 = (double)pfVar25[3];
    pfVar25 = pfVar25 + 4;
    pfVar27[3] = (float)((double)fVar2 * (double)(float)(dVar40 * dVar41) + dVar37);
    *pfVar27 = (float)(dVar37 * dVar47 +
                      (double)(float)(dVar36 * dVar44 +
                                     (double)(float)(dVar30 * dVar39 +
                                                    (double)(float)(dVar34 * (double)(float)(dVar40 
                                                  * dVar32)))));
    pfVar27[1] = (float)(dVar37 * dVar46 +
                        (double)(float)(dVar36 * dVar43 +
                                       (double)(float)(dVar30 * dVar29 +
                                                      (double)(float)(dVar34 * (double)(float)(
                                                  dVar40 * dVar33)))));
    pfVar27[2] = (float)(dVar37 * dVar45 +
                        (double)(float)(dVar36 * dVar42 +
                                       (double)(float)(dVar30 * dVar31 +
                                                      (double)(float)(dVar34 * (double)(float)(
                                                  dVar40 * dVar35)))));
    uVar8 = *puVar19;
    lVar26 = lVar26 + 0x10;
    uVar9 = *puVar24;
    puVar19 = puVar19 + 2;
    *(undefined4 *)((int)lVar18 + 0xc0) = uVar8;
    puVar24 = puVar24 + 2;
    *(undefined4 *)((int)lVar18 + 0xc4) = uVar9;
    lVar18 = lVar18 + 8;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  draw::FastDrawQuad(uVar15 - 0x130,0,0,uVar7,9);
  return;
}



//==== 00406cd8  ns=mobyupdate_helpers  size=0x7e4
// sig: undefined M656_00406cd8(void)
// callers(1): 004074c8 mobyupdate_helpers::M656_004074c8
// callees(7): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00174f80 vuchain::SetGSReg; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f7c idol_draw::Blend; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M656_00406cd8(void)

{
  undefined8 uVar1;
  int in_r9;
  int iVar2;
  undefined1 local_1d0 [144];
  undefined1 local_140 [152];
  
  draw::GetEffectTex(DAT_00854af0);
  idol_draw::PackCmd(0,2,0,1,0x80);
  stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(0,0,0,0,0,0);
  draw::GetEffectTex(DAT_00854af4);
  in_r9 = in_r9 + -1;
  iVar2 = 1;
  if (1 < in_r9) {
    do {
      draw::FastDrawQuad(local_1d0,0,0,EffectTexHeaders,9);
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_r9);
  }
  if (0 < in_r9) {
    iVar2 = 0;
    do {
      draw::FastDrawQuad(local_140,0,0,EffectTexHeaders,9);
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_r9);
  }
  uVar1 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar1);
  return;
}



//==== 004074c8  ns=mobyupdate_helpers  size=0x1d0
// sig: undefined M656_004074c8(void)
// callers(0): 
// callees(2): 00406790 mobyupdate_helpers::M656_00406790; 00406cd8 mobyupdate_helpers::M656_00406cd8

void mobyupdate_helpers::M656_004074c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  DAT_010cc074 = -(DAT_0071f408 * DAT_00854aa4 - DAT_010cc074);
  if (DAT_010cc074 <= -8.0) {
    DAT_010cc074 = DAT_010cc074 + 8.0;
  }
  M656_00406cd8((double)DAT_00854ab0,(double)DAT_00854ab4,(double)DAT_00854ae8,&DAT_010cbc00,
                DAT_00854a90,DAT_00854a98);
  M656_00406cd8((double)DAT_00854ac0,(double)DAT_00854ac4,(double)DAT_00854aec,&DAT_010cbd40,
                DAT_00854ab8,DAT_00854abc);
  uVar1 = 0x3fc99999a0000000;
  M656_00406cd8((double)DAT_00854ac0,(double)DAT_00854ac4,0x3fc99999a0000000,&DAT_010cc080,
                DAT_010cc1c8,DAT_010cc1c8);
  M656_00406cd8((double)DAT_00854ac0,(double)DAT_00854ac4,uVar1,&DAT_010cc0d0,DAT_010cc1ca,
                DAT_010cc1ca);
  M656_00406cd8((double)DAT_00854ac0,(double)DAT_00854ac4,uVar1,&DAT_010cc120,DAT_010cc1cc,
                DAT_010cc1cc);
  M656_00406cd8((double)DAT_00854ac0,(double)DAT_00854ac4,uVar1,&DAT_010cc170,DAT_010cc1ce,
                DAT_010cc1ce);
  M656_00406790(param_1);
  return;
}



//==== 00407698  ns=mobyupdate_helpers  size=0x14
// sig: undefined M656_00407698(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M656_00407698(void)

{
  DAT_00854bbc = 0x10000;
  return;
}



//==== 004076b8  ns=mobyupdate_unsorted  size=0x198
// sig: undefined UpdateMoby_656(MobyInstance * moby)
// callers(0): 
// callees(4): 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 00500060 fastfunc::FastDecTimerS8; 00502758 fastfunc::FastDoubleToInt

/* Moby 656 */

void mobyupdate_unsorted::UpdateMoby_656(MobyInstance *moby)

{
  byte bVar1;
  longlong lVar2;
  char cVar4;
  int iVar3;
  double dVar5;
  
  lVar2 = (longlong)(int)moby;
  bVar1 = moby->animationId;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if ((moby->field43_0x70 & 2U) != 0) {
        mobyutil::MB_SetAnimation(lVar2,1,0,0);
        dVar5 = (double)mobyutil::MB_randRangeFloat(180.0,240.0);
        cVar4 = fastfunc::FastDoubleToInt((double)(float)(dVar5 * (double)animationSpeed));
        moby->setByGroup = cVar4;
      }
    }
    else {
      iVar3 = fastfunc::FastDecTimerS8(lVar2 + 0xbc);
      if ((iVar3 != 0) && (moby->animationId != '\x02')) {
        mobyutil::MB_SetAnimation(lVar2,2,0,0);
      }
    }
  }
  else if (bVar1 < 3) {
    if ((moby->field43_0x70 & 2U) != 0) {
      if (bVar1 != 3) {
        mobyutil::MB_SetAnimation(lVar2,3,0,0);
      }
      dVar5 = (double)mobyutil::MB_randRangeFloat(180.0,240.0);
      cVar4 = fastfunc::FastDoubleToInt((double)(float)(dVar5 * (double)animationSpeed));
      moby->setByGroup = cVar4;
    }
  }
  else if (((bVar1 < 4) && (iVar3 = fastfunc::FastDecTimerS8(lVar2 + 0xbc), iVar3 != 0)) &&
          (moby->animationId != '\0')) {
    mobyutil::MB_SetAnimation(lVar2,0,0,0);
  }
  return;
}



//==== 00407868  ns=mobyupdate_unsorted  size=0x684
// sig: undefined UpdateMoby_658(MobyInstance * moby)
// callers(0): 
// callees(8): 000da4ac lights::CreatePointLight2; 000da9e8 lights::DeletePointLight; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble; 00502910 fastfunc::FastCheckBsphereInView

/* Moby 658 */

void mobyupdate_unsorted::UpdateMoby_658(MobyInstance *moby)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  f32 fVar8;
  float *pfVar9;
  float fVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined1 uVar14;
  byte bVar15;
  float *pfVar16;
  ulonglong uVar17;
  undefined8 in_LR;
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
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 local_a0 [32];
  
  if (moby != (MobyInstance *)0x0) {
    pfVar9 = (float *)moby->pVar;
    uVar17 = ZEXT48(pfVar9);
    if (pfVar9 != (float *)0x0) {
      if ((*(short *)(pfVar9 + 10) == -1) ||
         (iVar12 = fastfunc::FastDecTimerS16(uVar17 + 0x28), iVar12 == 0)) {
        bVar15 = moby->state;
        if (bVar15 < 2) {
          if (bVar15 == 0) {
            fVar4 = (moby->pos).x;
            auVar30 = ZEXT416(0xfffffff8);
            moby->updateDistance = -1;
            pfVar9[4] = fVar4;
            pfVar9[5] = (moby->pos).y;
            pfVar9[6] = (moby->pos).z;
            fVar4 = (moby->pos).w;
            pfVar9[3] = pfVar9[9];
            pfVar9[7] = fVar4;
            *(undefined1 *)((int)pfVar9 + 0x2e) = 0xff;
            auVar31 = loadVectorLeftIndexed(0x2f,uVar17);
            auVar30 = vectorShiftRightWord
                                (auVar31,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 |
                                         auVar30 << 0x60);
            if (pfVar9[8] != -NAN) {
              pfVar9[0xd] = (float)(MobyInstance + (int)pfVar9[8]);
            }
            auVar31 = vectorConvertFromSignedFixedPointWord(auVar30,0);
            auVar30 = ZEXT416(0xffffffff);
            auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
            auVar32 = vectorShiftLeftIntegerWord(auVar30,auVar30);
            auVar30 = loadVectorLeftIndexed(in_LR,0x407850);
            auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar30 = vectorAddFloatingPoint
                                (auVar31,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 |
                                         auVar30 << 0x60);
            auVar30 = vectorMultiplyAddFloatingPoint(auVar33,auVar30,auVar32);
            auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
            auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar11 = storeVectorElementWordIndexed
                               (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0x30,
                                uVar17);
            *(undefined4 *)((uint)(pfVar9 + 0xc) & 0xfffffffc) = uVar11;
            *(undefined1 *)((int)pfVar9 + 0x2d) = 0;
            moby->state = '\x01';
          }
          else {
            iVar12 = fastfunc::FastDecTimerS32(uVar17 + 0x30);
            if (iVar12 != 0) {
              moby->state = '\x02';
            }
          }
        }
        else if (bVar15 < 3) {
          bVar15 = *(byte *)((int)pfVar9 + 0x2d);
          dVar18 = (double)fastfunc::FastIntToDouble
                                     (*(undefined1 *)((int)pfVar9 + (uint)bVar15 * 5 + 0x38));
          dVar26 = 0.009999999776482582;
          dVar29 = (double)(float)(dVar18 * 0.009999999776482582);
          dVar18 = (double)fastfunc::FastIntToDouble
                                     (*(undefined1 *)((int)pfVar9 + (uint)bVar15 * 5 + 0x39));
          dVar28 = (double)(float)(dVar18 * dVar26);
          dVar18 = (double)fastfunc::FastIntToDouble
                                     (*(undefined1 *)((int)pfVar9 + (uint)bVar15 * 5 + 0x3a));
          dVar27 = (double)(float)(dVar18 * dVar26);
          dVar18 = (double)fastfunc::FastIntToDouble
                                     (*(undefined1 *)((int)pfVar9 + (uint)bVar15 * 5 + 0x3b));
          iVar12 = (int)(animationSpeed *
                        ((float)*(byte *)((int)pfVar9 + (uint)bVar15 * 5 + 0x3c) + 0.5));
          dVar19 = (double)fastfunc::FastIntToDouble(pfVar9[0xc]);
          dVar20 = (double)fastfunc::FastIntToDouble(iVar12);
          dVar19 = (double)(float)(dVar19 / dVar20);
          pfVar16 = (float *)((int)pfVar9 + (uint)bVar15 * 5 + 0x3d);
          if (((uint)*(byte *)(pfVar9 + 0xb) < *(byte *)((int)pfVar9 + 0x2d) + 1) &&
             (pfVar16 = (float *)((int)pfVar9 + (uint)bVar15 * 5 + 0x38),
             ((uint)pfVar9[9] & 0x4000) != 0)) {
            pfVar16 = pfVar9 + 0xe;
          }
          dVar20 = (double)fastfunc::FastIntToDouble(*(undefined1 *)pfVar16);
          dVar21 = (double)fastfunc::FastIntToDouble(*(undefined1 *)((int)pfVar16 + 1));
          dVar22 = (double)fastfunc::FastIntToDouble(*(undefined1 *)((int)pfVar16 + 2));
          dVar23 = (double)fastfunc::FastIntToDouble(*(undefined1 *)((int)pfVar16 + 3));
          dVar18 = (double)(float)((double)(float)(dVar23 - dVar18) * dVar19 + dVar18);
          dVar29 = (double)(float)((double)(float)(dVar20 * dVar26 - dVar29) * dVar19 + dVar29);
          dVar20 = (double)(float)((double)(float)(dVar21 * dVar26 - dVar28) * dVar19 + dVar28);
          dVar19 = (double)(float)((double)(float)(dVar22 * dVar26 - dVar27) * dVar19 + dVar27);
          iVar13 = fastfunc::FastCheckBsphereInView(0x406fe00000000000,local_a0);
          if ((iVar13 == -1) ||
             (((fVar4 = pfVar9[9], ((uint)fVar4 & 0x1000000) != 0 && (pfVar9[0xd] != 0.0)) &&
              ((*(ushort *)((int)pfVar9[0xd] + 0x34) & 1) != 0)))) {
            if (*(char *)((int)pfVar9 + 0x2e) != -1) {
              lights::DeletePointLight();
              *(undefined1 *)((int)pfVar9 + 0x2e) = 0xff;
            }
          }
          else {
            fVar10 = pfVar9[0xd];
            if (fVar10 == 0.0) {
              fVar5 = pfVar9[4];
              fVar6 = pfVar9[5];
              fVar7 = pfVar9[6];
              fVar10 = pfVar9[7];
            }
            else {
              fVar5 = *(float *)((int)fVar10 + 0x10);
              fVar6 = *(float *)((int)fVar10 + 0x14);
              fVar7 = *(float *)((int)fVar10 + 0x18);
              fVar10 = *(float *)((int)fVar10 + 0x1c);
            }
            dVar22 = (double)fVar5;
            dVar21 = (double)fVar6;
            dVar28 = (double)fVar7;
            dVar27 = (double)fVar10;
            if (((uint)fVar4 & 0x800000) == 0) {
              if (((uint)fVar4 & 0x100000) == 0) {
                dVar23 = (double)*pfVar9;
                dVar24 = (double)pfVar9[1];
                dVar25 = (double)pfVar9[2];
              }
              else if (((uint)fVar4 & 0x200000) == 0) {
                fVar4 = pfVar9[3];
                pfVar9[3] = 0.0;
                dVar25 = (double)mobyutil::MB_randRangeFloat(0.0,1.0);
                dVar23 = (double)(float)((double)*pfVar9 * dVar25);
                dVar24 = (double)(float)((double)pfVar9[1] * dVar25);
                pfVar9[3] = fVar4;
                dVar25 = (double)(float)((double)pfVar9[2] * dVar25);
              }
              else {
                dVar23 = (double)mobyutil::MB_randRangeFloat(-*pfVar9,*pfVar9);
                dVar24 = (double)mobyutil::MB_randRangeFloat(-pfVar9[1],pfVar9[1]);
                dVar25 = (double)mobyutil::MB_randRangeFloat(-pfVar9[2],pfVar9[2]);
              }
              if ((((uint)pfVar9[9] & 0x400000) != 0) && (fVar4 = pfVar9[0xd], fVar4 != 0.0)) {
                dVar3 = (double)*(float *)((int)fVar4 + 0xd8) * dVar24;
                dVar1 = (double)*(float *)((int)fVar4 + 0xc4) * dVar23;
                dVar2 = (double)*(float *)((int)fVar4 + 200) * dVar23;
                dVar23 = (double)(float)((double)*(float *)((int)fVar4 + 0xe0) * dVar25 +
                                        (double)(float)((double)*(float *)((int)fVar4 + 0xc0) *
                                                        dVar23 + (double)(float)((double)*(float *)(
                                                  (int)fVar4 + 0xd0) * dVar24)));
                dVar24 = (double)(float)((double)*(float *)((int)fVar4 + 0xe4) * dVar25 +
                                        (double)(float)(dVar1 + (double)(float)((double)*(float *)((
                                                  int)fVar4 + 0xd4) * dVar24)));
                dVar25 = (double)(float)((double)*(float *)((int)fVar4 + 0xe8) * dVar25 +
                                        (double)(float)(dVar2 + (double)(float)dVar3));
              }
              dVar22 = (double)(float)(dVar22 + dVar23);
              dVar21 = (double)(float)(dVar21 + dVar24);
              dVar28 = (double)(float)(dVar28 + dVar25);
            }
            (moby->pos).x = (float)dVar22;
            (moby->pos).y = (float)dVar21;
            (moby->pos).z = (float)dVar28;
            (moby->pos).w = (float)dVar27;
            if (*(char *)((int)pfVar9 + 0x2e) == -1) {
              dVar27 = (double)fastfunc::FastIntToDouble(*(undefined1 *)((int)pfVar9 + 0x2a));
              uVar14 = lights::CreatePointLight2
                                 ((float)dVar18,(double)(float)(dVar27 * dVar26),dVar29,dVar20,
                                  dVar19,(Vec4 *)&moby->pos);
              *(undefined1 *)((int)pfVar9 + 0x2e) = uVar14;
            }
            else {
              iVar13 = (int)((longlong)*(char *)((int)pfVar9 + 0x2e) << 5);
              *(float *)((int)&PointLights[0].pos.x + iVar13) = (float)dVar22;
              *(f32 *)((int)&PointLights[0].pos.y + iVar13) = (moby->pos).y;
              fVar8 = (moby->pos).z;
              *(float *)((int)&PointLights[0].pos.w + iVar13) = (float)dVar18;
              *(f32 *)((int)&PointLights[0].pos.z + iVar13) = fVar8;
              *(float *)((int)&PointLights[0].color.x + iVar13) = (float)dVar29;
              *(float *)((int)&PointLights[0].color.y + iVar13) = (float)dVar20;
              *(float *)((int)&PointLights[0].color.z + iVar13) = (float)dVar19;
              dVar18 = (double)fastfunc::FastIntToDouble(*(undefined1 *)((int)pfVar9 + 0x2a));
              *(float *)((int)&PointLights[0].color.w + iVar13) = (float)(dVar18 * dVar26);
            }
          }
          fVar4 = pfVar9[0xc];
          pfVar9[0xc] = (float)((int)fVar4 + 1);
          if (iVar12 <= (int)fVar4 + 1) {
            bVar15 = *(char *)((int)pfVar9 + 0x2d) + 1;
            pfVar9[0xc] = 0.0;
            *(byte *)((int)pfVar9 + 0x2d) = bVar15;
            if (*(byte *)(pfVar9 + 0xb) < bVar15) {
              if (((uint)pfVar9[9] & 0x4000) == 0) {
                moby->state = '\x03';
              }
              else {
                *(undefined1 *)((int)pfVar9 + 0x2d) = 0;
              }
            }
          }
        }
        else if ((bVar15 < 4) && (*(char *)((int)pfVar9 + 0x2e) != -1)) {
          lights::DeletePointLight();
          *(undefined1 *)((int)pfVar9 + 0x2e) = 0xff;
          mobyfunc::DeleteMoby(moby);
        }
      }
      else {
        if (*(char *)((int)pfVar9 + 0x2e) != -1) {
          lights::DeletePointLight();
          *(undefined1 *)((int)pfVar9 + 0x2e) = 0xff;
        }
        mobyfunc::DeleteMoby(moby);
      }
    }
  }
  return;
}



//==== 00407eec  ns=mobyupdate_helpers  size=0x14
// sig: undefined M660_00407eec(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M660_00407eec(void)

{
  DAT_00854c2c = 0x10000;
  return;
}



//==== 00407f28  ns=mobyupdate_unsorted  size=0x304
// sig: undefined UpdateMoby_660(MobyInstance * moby)
// callers(0): 
// callees(8): 000efb38 mobyfunc::DeleteMoby; 0010675c mobyutil::MB_damage; 0010e030 mobyutil::MB_genericExplosion; 0011b728 mobyutil::MB_UnlockSkillPoint; 0028e510 FUN_0028e510; 003a82b8 mobyupdate_unsorted::UpdateMoby_a_lot_10; 00502758 fastfunc::FastDoubleToInt; 00502a64 fastfunc::FastVecSub

/* Moby 660 */

void mobyupdate_unsorted::UpdateMoby_660(MobyInstance *moby)

{
  bool bVar1;
  float fVar2;
  f32 fVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  int iVar10;
  s8 sVar11;
  void *pvVar12;
  double dVar13;
  double dVar14;
  undefined1 local_50 [16];
  undefined1 local_40 [24];
  
  lVar9 = (longlong)(int)moby;
  pvVar12 = moby->pVar;
  iVar10 = mobyutil::MB_damage(lVar9,0x800000,0);
  moby->damage = -1;
  fVar2 = *(float *)((int)pvVar12 + 0x170);
  if (moby->state == '\0') {
    fVar2 = moby->scale;
    *(float *)((int)pvVar12 + 0x170) = fVar2;
    *(undefined4 *)((int)pvVar12 + 0x174) = *(undefined4 *)((int)pvVar12 + 0xfc);
  }
  fVar5 = (moby->pos).y - GameCamera.posY;
  fVar6 = (moby->pos).x - GameCamera.posX;
  fVar7 = (moby->pos).z - GameCamera.posZ;
  dVar14 = (double)DAT_00854c50;
  fVar8 = (float)(1.0 - dVar14) / (DAT_00854c54 - DAT_00854c58);
  dVar13 = (double)(-(fVar8 * SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5)) +
                   (1.0 - -(fVar8 * DAT_00854c58)));
  if (1.0 - dVar13 < 0.0) {
    dVar13 = 1.0;
  }
  if (dVar13 - dVar14 < 0.0) {
    dVar13 = dVar14;
  }
  moby->scale = (float)((double)fVar2 * dVar13);
  *(float *)((int)pvVar12 + 0xfc) = (float)((double)*(float *)((int)pvVar12 + 0x174) * dVar13);
  bVar1 = moby->state == 'e';
  if ((iVar10 == 0) || (bVar1)) {
    if (!bVar1) {
      UpdateMoby_a_lot_10(moby);
      moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
      *(undefined1 *)((int)pvVar12 + 0x2b) = 1;
      *(undefined1 *)((int)pvVar12 + 0x2c) = 100;
      fVar3 = (moby->pos).z;
      uVar4 = (int)fVar3 >> 0x1f;
      iVar10 = (uVar4 >> 1 ^ (uint)fVar3) - uVar4;
      if (iVar10 < 0x432f0000) {
        if ((iVar10 < 0x42fa0001) || (0x432effff < iVar10)) {
          if (iVar10 < 0x42fa0001) {
            moby->alpha = -0x80;
          }
        }
        else {
          sVar11 = fastfunc::FastDoubleToInt((double)((175.0 - (moby->pos).z) * 128.0 * 0.02));
          moby->alpha = sVar11;
        }
      }
      else {
        moby->alpha = '\0';
      }
    }
  }
  else {
    mobyutil::MB_UnlockSkillPoint(0);
    fastfunc::FastVecSub(local_40,(int)pvVar12 + 0xd0,(int)pvVar12 + 0xe0);
    iVar10 = 0;
    moby->state = 'e';
    mobyutil::MB_genericExplosion
              (0,0,0x4010000000000000,0x4000000000000000,0x40f86a0000000000,0x4008000000000000,
               0x402e000000000000,lVar9,local_50,lVar9 + 0x10,1,0xffffffffffffffff,0x14,3,4);
    FUN_0028e510(dVar13,lVar9,local_50);
    do {
      if (*(int *)((int)pvVar12 + 0x140) != -1) {
        mobyfunc::DeleteMoby(MobyInstance + *(int *)((int)pvVar12 + 0x140));
      }
      iVar10 = iVar10 + 1;
      pvVar12 = (void *)((int)pvVar12 + 4);
    } while (iVar10 < 4);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 0040822c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M661_0040822c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M661_0040822c(void)

{
  DAT_00854ca8 = 0x10000;
  return;
}



//==== 00408248  ns=mobyupdate_helpers  size=0x98
// sig: undefined M661_00408248(void)
// callers(0): 
// callees(0): 

int mobyupdate_helpers::M661_00408248(void)

{
  undefined1 auVar1 [16];
  undefined8 in_r0;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  byte in_cr6;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  auVar1 = ZEXT416(0xfffffff0);
  iVar4 = 0;
  uVar3 = ZEXT48(&DAT_00737d3e);
  iVar5 = 0;
  auVar6 = loadVectorLeftIndexed(in_r0,0x408240);
  uVar2 = ZEXT48(&currentAmmoArray);
  auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
  do {
    auVar7 = loadVectorLeftIndexed(in_r0,uVar3);
    auVar8 = loadVectorRightIndexed(0x10,uVar3);
    auVar7 = vectorShiftRightWord
                       (auVar7 | auVar8,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60);
    if (*(short *)uVar3 != 0) {
      auVar8 = vectorConvertFromUnsignedFixedPointWord(auVar7,0);
      auVar7 = ZEXT416(0xffffffff);
      auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
      auVar9 = loadVectorLeftIndexed(in_r0,uVar2);
      auVar9 = vectorConvertFromSignedFixedPointWord(auVar9,0);
      auVar7 = vectorShiftLeftIntegerWord(auVar7,auVar7);
      auVar8 = vectorMultiplyAddFloatingPoint
                         (auVar8,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar7);
      auVar7 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
      vectorCompareGreaterThanOrEqualToFloatingPoint
                (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,
                 auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60);
      if ((bool)(in_cr6 >> 1 & 1)) {
        iVar5 = iVar5 + 1;
      }
    }
    iVar4 = iVar4 + 1;
    uVar2 = uVar2 + 4;
    uVar3 = uVar3 + 0x18;
  } while (iVar4 < 0x25);
  return iVar5;
}



//==== 00408328  ns=mobyupdate_unsorted  size=0x564
// sig: undefined UpdateMoby_661(MobyInstance * moby)
// callers(0): 
// callees(10): 000efb38 mobyfunc::DeleteMoby; 000fc668 mobyutil::MB_DropAmmo; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000ffb70 mobyutil::GetGroundZ; 001124c0 mobyutil::MB_PlatformWorldToLocal; 00112678 mobyutil::MB_PlatformGetDelta; 002ea758 FUN_002ea758; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt
// strings: 0096c08c: 'None'

/* Moby 661 */

void mobyupdate_unsorted::UpdateMoby_661(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  void *pvVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  undefined4 uVar9;
  MobyInstance *pMVar10;
  int iVar11;
  ulonglong uVar8;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  byte bVar15;
  undefined8 in_LR;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 local_50 [16];
  
  lVar7 = (longlong)(int)moby;
  bVar1 = moby->state;
  pvVar4 = moby->pVar;
  uVar14 = ZEXT48(pvVar4);
  bVar15 = (bVar1 == 0) << 1;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      moby->state = '\x01';
      (moby->pos).z = (moby->pos).z + 4.0;
      dVar16 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar7 + 0x10,0);
      (moby->pos).z = (float)dVar16;
      if (CollOutput.pMoby == (MobyInstance *)0x0) {
        return;
      }
      iVar11 = mobyutil::MB_PlatformWorldToLocal
                         (lVar7,CollOutput.pMoby,lVar7 + 0x10,lVar7 + 0x40,uVar14,uVar14 + 0x10);
      if (iVar11 == 0) {
        return;
      }
      *(MobyInstance **)((int)pvVar4 + 0x20) = CollOutput.pMoby;
      return;
    }
    fVar2 = (moby->rotation).y;
    fVar3 = (moby->rotation).x;
    if (0.034906585 < SQRT(fVar3 * fVar3 + fVar2 * fVar2)) {
      moby->state = '\x03';
      return;
    }
    if (((g_heroState == MOVEMENT_LOCKED) &&
        (pMVar10 = *(MobyInstance **)((int)pvVar4 + 0x24), pMVar10 != (MobyInstance *)0x0)) &&
       (pMVar10->state != 0xfd && pMVar10->state != 0xfe)) {
      mobyfunc::DeleteMoby(pMVar10);
      *(undefined4 *)((int)pvVar4 + 0x24) = 0;
      *(undefined4 *)((int)pvVar4 + 0x2c) = 0xffffffff;
      dVar16 = (double)mobyutil::MB_randRangeFloat(600.0,1200.0);
      uVar9 = fastfunc::FastDoubleToInt((double)(float)(dVar16 * (double)animationSpeed));
      *(undefined4 *)((int)pvVar4 + 0x28) = uVar9;
    }
    pMVar10 = *(MobyInstance **)((int)pvVar4 + 0x24);
    if ((pMVar10 != (MobyInstance *)0x0) && ((pMVar10->state == 0xfe || (pMVar10->state == 0xfd))))
    {
      *(undefined4 *)((int)pvVar4 + 0x24) = 0;
      *(undefined4 *)((int)pvVar4 + 0x2c) = 0xffffffff;
      dVar16 = (double)mobyutil::MB_randRangeFloat(600.0,1200.0);
      uVar9 = fastfunc::FastDoubleToInt((double)(float)(dVar16 * (double)animationSpeed));
      pMVar10 = *(MobyInstance **)((int)pvVar4 + 0x24);
      *(undefined4 *)((int)pvVar4 + 0x28) = uVar9;
    }
    if (((pMVar10 != (MobyInstance *)0x0) && (pMVar10->enabled == '\0')) &&
       ((int)(uint)(ushort)(&DAT_00737d3e)[*(int *)((int)pvVar4 + 0x2c) * 0xc] <=
        (int)(&currentAmmoArray.field0_0x0)[*(int *)((int)pvVar4 + 0x2c)])) {
      mobyfunc::DeleteMoby(pMVar10);
      pMVar10 = (MobyInstance *)0x0;
      *(undefined4 *)((int)pvVar4 + 0x24) = 0;
      *(undefined4 *)((int)pvVar4 + 0x2c) = 0xffffffff;
    }
    fVar2 = (moby->pos).y - g_heroPosition.y;
    fVar3 = (moby->pos).x - g_heroPosition.x;
    dVar16 = 4.0;
    if ((pMVar10 == (MobyInstance *)0x0 && 4.0 < SQRT(fVar3 * fVar3 + fVar2 * fVar2)) &&
       (iVar11 = fastfunc::FastDecTimerS32(uVar14 + 0x28), iVar11 != 0)) {
      auVar23 = ZEXT416(0xfffffff0);
      iVar11 = 0;
      uVar8 = ZEXT48(&currentAmmoArray);
      auVar24 = loadVectorLeftIndexed(0x14,0x4082e0);
      iVar13 = 0;
      uVar12 = ZEXT48(&DAT_00737d3e);
      auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
      do {
        auVar25 = loadVectorLeftIndexed(in_LR,uVar12);
        auVar26 = loadVectorRightIndexed(0x10,uVar12);
        auVar25 = vectorShiftRightWord
                            (auVar25 | auVar26,
                             auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60);
        if (*(short *)uVar12 != 0) {
          auVar26 = vectorConvertFromUnsignedFixedPointWord(auVar25,0);
          auVar25 = ZEXT416(0xffffffff);
          auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
          auVar27 = loadVectorLeftIndexed(in_LR,uVar8);
          auVar27 = vectorConvertFromSignedFixedPointWord(auVar27,0);
          auVar25 = vectorShiftLeftIntegerWord(auVar25,auVar25);
          auVar26 = vectorMultiplyAddFloatingPoint
                              (auVar26,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60
                               ,auVar25);
          auVar25 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
          vectorCompareGreaterThanOrEqualToFloatingPoint
                    (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                     auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60);
          if ((bool)(bVar15 >> 1 & 1)) {
            iVar13 = iVar13 + 1;
          }
        }
        iVar11 = iVar11 + 1;
        uVar8 = uVar8 + 4;
        uVar12 = uVar12 + 0x18;
      } while (iVar11 < 0x25);
      if (iVar13 < 3) {
        auVar23 = ZEXT416(0xffffffff);
        auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
        auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
        auVar23 = loadVectorLeftIndexed(0x40,0x4082e0);
        auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar23 = vectorMultiplyAddFloatingPoint
                            (auVar25,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,
                             auVar24);
        auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
        auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar9 = storeVectorElementWordIndexed
                          (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,0x28,uVar14
                          );
        *(undefined4 *)((int)pvVar4 + 0x28U & 0xfffffffc) = uVar9;
      }
      else {
        mobyutil::MB_DropAmmo(lVar7,local_50);
        if ((int)g_SkillPoints._28_4_ < (int)(uint)DAT_00737d26) {
          iVar11 = FUN_002ea758(lVar7 + 0x10,0xffffffff,0xffffffffffffffff,0);
          *(int *)((int)pvVar4 + 0x24) = iVar11;
          if (iVar11 != 0) {
            *(undefined4 *)((int)pvVar4 + 0x2c) = 0xffffffff;
            iVar11 = *(int *)(iVar11 + 0x78);
            dVar17 = (double)mobyutil::MB_randRot();
            dVar18 = (double)mobyutil::MB_randRangeFloat(0.0,3.0);
            fVar2 = (float)(dVar17 + 1.570796251296997);
            dVar21 = (double)(float)(3.141592502593994 - dVar17);
            if (dVar17 - (double)(float)(3.141592502593994 - dVar17) < 0.0) {
              dVar21 = dVar17;
            }
            fVar3 = 3.1415925 - fVar2;
            if (fVar2 - (3.1415925 - fVar2) < 0.0) {
              fVar3 = fVar2;
            }
            dVar19 = (double)(float)(-3.141592502593994 - dVar17);
            if ((double)(float)(-3.141592502593994 - dVar17) - dVar21 < 0.0) {
              dVar19 = dVar21;
            }
            dVar21 = (double)mobyutil::g_FrameTime;
            fVar5 = -3.1415925 - fVar2;
            if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
              fVar5 = fVar3;
            }
            dVar17 = (double)(float)(dVar19 * dVar19);
            fVar6 = fVar5 * fVar5;
            dVar22 = (double)(float)(dVar17 * (double)(float)(dVar17 * dVar19));
            *(undefined4 *)(iVar11 + 0x18) = 0;
            fVar2 = fVar6 * fVar6 * fVar5;
            dVar20 = (double)(float)(dVar17 * dVar22);
            fVar3 = fVar6 * fVar2;
            *(float *)(iVar11 + 0x14) =
                 ((float)(dVar17 * dVar20) * 2.601887e-06 +
                 (float)(dVar20 * -0.0001980741071747616 +
                        (double)(float)(dVar22 * 0.008333025500178337 +
                                       (double)(float)((double)(float)(dVar17 * dVar19) *
                                                       -0.16666656732559204 + dVar19)))) *
                 (float)(dVar18 * dVar21);
            *(float *)(iVar11 + 0x10) =
                 (fVar6 * fVar3 * 2.601887e-06 +
                 fVar3 * -0.0001980741 + fVar2 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5)
                 * (float)(dVar18 * dVar21);
            dVar16 = (double)mobyutil::MB_randRangeFloat(2.0,(float)dVar16);
            *(float *)(iVar11 + 0x18) = (float)(dVar16 * (double)mobyutil::g_FrameTime);
          }
        }
      }
    }
  }
  else if (bVar1 != 3) {
    return;
  }
  mobyutil::MB_PlatformGetDelta
            (lVar7,*(undefined4 *)((int)pvVar4 + 0x20),uVar14,uVar14 + 0x10,lVar7 + 0x10,
             lVar7 + 0x40);
  return;
}



//==== 00408890  ns=mobyupdate_helpers  size=0x14
// sig: undefined M664_00408890(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M664_00408890(void)

{
  DAT_00854d18 = 0x10000;
  return;
}



//==== 004088d0  ns=mobyupdate_unsorted  size=0x628
// sig: undefined UpdateMoby_664(MobyInstance * moby)
// callers(0): 
// callees(8): 0010a050 mobyutil::AccelDeltAng; 001120d4 mobyutil::MB_TransformBetweenFrames; 00112900 mobyutil::MB_GetOrientation; 00116a68 mobyutil::MB_BobMotion; 00116b70 mobyutil::MB_SwingMotion; 0015d12c sound::PlayMobySound; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot

/* Moby 664 */

void mobyupdate_unsorted::UpdateMoby_664(MobyInstance *moby)

{
  f32 fVar1;
  float fVar2;
  void *pvVar3;
  undefined4 uVar4;
  float fVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  Vec4 local_c0;
  f32 local_b0;
  f32 local_ac;
  f32 local_a8;
  f32 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  longlong local_80;
  
  lVar7 = (longlong)(int)moby;
  uVar6 = ZEXT48(&stack0x00000000);
  local_c0.x = -(moby->pos).x;
  dVar14 = (double)(moby->pos).z;
  local_c0.y = -(moby->pos).y;
  local_c0.w = (moby->pos).w;
  pvVar3 = moby->pVar;
  uVar9 = ZEXT48(pvVar3);
  local_b0 = (moby->rotation).x;
  local_ac = (moby->rotation).y;
  local_a8 = (moby->rotation).z;
  local_a4 = (moby->rotation).w;
  local_c0.z = (float)-dVar14;
  dVar13 = (double)(*(float *)((int)pvVar3 + 0x84) - 0.25);
  if (*(int *)((int)pvVar3 + 0x80) == 0) {
    *(f32 *)((int)pvVar3 + 0x60) = local_b0;
    *(f32 *)((int)pvVar3 + 100) = (moby->rotation).y;
    *(f32 *)((int)pvVar3 + 0x68) = (moby->rotation).z;
    fVar1 = (moby->rotation).w;
    *(undefined1 *)((int)pvVar3 + 0x70) = 0;
    *(f32 *)((int)pvVar3 + 0x6c) = fVar1;
    *(undefined1 *)((int)pvVar3 + 0x71) = 0;
    *(undefined1 *)((int)pvVar3 + 0x72) = 0;
    *(undefined1 *)((int)pvVar3 + 0x73) = 0;
    *(undefined1 *)((int)pvVar3 + 0x74) = 0;
    *(undefined1 *)((int)pvVar3 + 0x75) = 0;
    *(undefined1 *)((int)pvVar3 + 0x76) = 0;
    *(undefined1 *)((int)pvVar3 + 0x77) = 0;
    *(undefined1 *)((int)pvVar3 + 0x78) = 0;
    *(undefined1 *)((int)pvVar3 + 0x79) = 0;
    *(undefined1 *)((int)pvVar3 + 0x7a) = 0;
    *(undefined1 *)((int)pvVar3 + 0x7b) = 0;
    *(undefined1 *)((int)pvVar3 + 0x7c) = 0;
    *(undefined1 *)((int)pvVar3 + 0x7d) = 0;
    *(undefined1 *)((int)pvVar3 + 0x7e) = 0;
    *(undefined1 *)((int)pvVar3 + 0x7f) = 0;
    fVar2 = (moby->pos).z;
    *(undefined4 *)((int)pvVar3 + 0x80) = 1;
    (moby->pos).z = fVar2 - 0.3;
    *(f32 *)((int)pvVar3 + 0x84) = (moby->pos).z;
  }
  if ((g_framesNotGrounded == 0) && (g_standingOnMoby == moby)) {
    iVar8 = *(int *)((int)pvVar3 + 0x88);
    if (iVar8 == 0) {
      sound::PlayMobySound(0,0,moby);
      iVar8 = *(int *)((int)pvVar3 + 0x88);
    }
    auVar16 = ZEXT416(0xffffffff);
    auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
    auVar17 = vectorShiftLeftIntegerWord(auVar16,auVar16);
    auVar16 = loadVectorLeftIndexed(8,0x4088a8);
    auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar18 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar16 = vectorMultiplyAddFloatingPoint
                        (auVar18,auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,
                         auVar17);
    local_80 = (longlong)(int)(animationSpeed * 30.5);
    auVar16 = vectorConvertToSignedFixedPointWordSaturate(auVar16,0);
    if (iVar8 < (int)(animationSpeed * 30.5)) {
      auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar4 = storeVectorElementWordIndexed
                        (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0x88,uVar9);
      *(undefined4 *)((int)pvVar3 + 0x88U & 0xfffffffc) = uVar4;
    }
  }
  if (*(int *)((int)pvVar3 + 0x88) == 0) {
    dVar10 = 0.01745329238474369;
    uVar12 = 0;
    mobyutil::AccelDeltAng
              (0,(double)(DAT_00854d58 * 0.017453292 * DAT_0071f418),
               (double)(DAT_00854d5c * DAT_0071f40c),
               (double)(DAT_00854d60 * 0.017453292 * mobyutil::g_FrameTime),uVar9 + 0x60,
               &DAT_004088a8,uVar9 + 0x70);
    mobyutil::AccelDeltAng
              (uVar12,(double)((float)((double)DAT_00854d58 * dVar10) * DAT_0071f418),
               (double)(DAT_00854d5c * DAT_0071f40c),
               (double)((float)((double)DAT_00854d60 * dVar10) * mobyutil::g_FrameTime),uVar9 + 100)
    ;
    fVar2 = (moby->pos).z;
    fVar2 = DAT_00854d44 * mobyutil::g_FrameTime * (*(float *)((int)pvVar3 + 0x84) - fVar2) + fVar2;
    dVar10 = (double)fVar2;
    (moby->pos).z = fVar2;
    dVar11 = (double)*(float *)((int)pvVar3 + 0x84);
    if (dVar11 < dVar10) {
      (moby->pos).z = *(float *)((int)pvVar3 + 0x84);
      dVar10 = dVar11;
    }
    if (dVar14 < dVar13 && dVar13 <= dVar10) {
      sound::PlayMobySound(2,0,moby);
    }
  }
  else {
    fastfunc::FastDecTimerS32(uVar9 + 0x88);
    fVar2 = g_heroPosition.y - (moby->pos).y;
    fVar5 = g_heroPosition.x - (moby->pos).x;
    dVar15 = (double)(moby->pos).z;
    local_a0 = *(undefined4 *)((int)pvVar3 + 0x60);
    local_9c = *(undefined4 *)((int)pvVar3 + 100);
    local_98 = *(undefined4 *)((int)pvVar3 + 0x68);
    local_94 = *(undefined4 *)((int)pvVar3 + 0x6c);
    dVar11 = 0.01745329238474369;
    dVar10 = (double)(DAT_00854d3c *
                     ((float)((double)g_heroPosition.z - dVar15) * (moby->transform).v0.z +
                     fVar5 * (moby->transform).v0.x + fVar2 * (moby->transform).v0.y));
    mobyutil::AccelDeltAng
              (-(double)(DAT_00854d3c *
                        ((float)((double)g_heroPosition.z - dVar15) * (moby->transform).v1.z +
                        fVar5 * (moby->transform).v1.x + fVar2 * (moby->transform).v1.y)),
               (double)(DAT_00854d4c * 0.017453292 * DAT_0071f418),
               (double)(DAT_00854d50 * DAT_0071f40c),
               (double)(DAT_00854d54 * 0.017453292 * mobyutil::g_FrameTime),uVar9 + 0x60,
               &DAT_00850000,uVar9 + 0x70);
    mobyutil::AccelDeltAng
              (dVar10,(double)((float)((double)DAT_00854d4c * dVar11) * DAT_0071f418),
               (double)(DAT_00854d50 * DAT_0071f40c),
               (double)((float)((double)DAT_00854d54 * dVar11) * mobyutil::g_FrameTime),uVar9 + 100)
    ;
    dVar10 = -(double)(DAT_00854d40 * mobyutil::g_FrameTime - (moby->pos).z);
    (moby->pos).z = (float)dVar10;
    if ((dVar13 < dVar14) && (dVar10 <= dVar13)) {
      sound::PlayMobySound(1,0,moby);
    }
    mobyutil::MB_TransformBetweenFrames
              (&g_heroPosition,uVar6 - 0x90,lVar7 + 0x10,uVar6 - 0xa0,uVar9 + 0x60);
    DAT_00969dd0 = local_90 - g_heroPosition.x;
    DAT_00969dd4 = local_8c - g_heroPosition.y;
    DAT_00969ddc = local_84;
    DAT_00969dd8 = (local_88 - g_heroPosition.z) + (float)((double)(moby->pos).z - dVar15);
  }
  mobyutil::MB_BobMotion
            (0.14,mobyutil::g_FrameTime * 0.5235988,moby,(float *)((int)pvVar3 + 0x98),
             (float *)((int)pvVar3 + 0x9c));
  mobyutil::MB_SwingMotion
            (0x3fb6571840000000,(double)(mobyutil::g_FrameTime * 0.31415927),
             (double)(mobyutil::g_FrameTime * 0.4886922),lVar7,uVar9 + 0x90,uVar9 + 0x94);
  dVar14 = (double)fastfunc::FastWrapRot(*(float *)((int)pvVar3 + 0x60),(moby->rotation).x);
  (moby->rotation).x = (float)dVar14;
  dVar14 = (double)fastfunc::FastWrapRot(*(float *)((int)pvVar3 + 100),(moby->rotation).y);
  local_c0.x = local_c0.x + (moby->pos).x;
  local_c0.y = local_c0.y + (moby->pos).y;
  fVar2 = (moby->pos).z;
  (moby->rotation).y = (float)dVar14;
  local_c0.z = local_c0.z + fVar2;
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar3 + 0x20),&local_c0,uVar6 - 0xb0,lVar7 + 0x40);
  return;
}



//==== 00408ef8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M665_00408ef8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M665_00408ef8(void)

{
  DAT_00854db0 = 0x10000;
  return;
}



//==== 00408f10  ns=mobyupdate_unsorted  size=0x260
// sig: undefined UpdateMoby_665(MobyInstance * moby)
// callers(0): 
// callees(3): 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound

/* Moby 665 */

ulonglong mobyupdate_unsorted::UpdateMoby_665(MobyInstance *moby)

{
  f32 fVar1;
  int *piVar2;
  float *pfVar3;
  float fVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar5 = (ulonglong)(int)moby;
  piVar2 = (int *)moby->pVar;
  if (moby->state == 0) {
    uVar5 = 0xffffffffffffffff;
    fVar1 = (moby->pos).x;
    piVar2[5] = -1;
    piVar2[1] = (int)fVar1;
    fVar1 = (moby->pos).y;
    piVar2[6] = 0;
    piVar2[2] = (int)fVar1;
    moby->state = '\x01';
  }
  else if ((moby->state < 2) && (iVar6 = *piVar2, iVar6 != -1)) {
    uVar5 = (ulonglong)(uint)piVar2[3];
    if ((piVar2[3] != 0) && (uVar5 = (ulonglong)(uint)piVar2[4], piVar2[4] != 0)) {
      uVar5 = (ulonglong)MobyInstance[iVar6].oClass;
      if (MobyInstance[iVar6].oClass == BOLT_CRANK) {
        pfVar3 = (float *)MobyInstance[iVar6].pVar;
        (moby->pos).x = ((float)piVar2[3] - (float)piVar2[1]) * *pfVar3 + (float)piVar2[1];
        (moby->pos).y = ((float)piVar2[4] - (float)piVar2[2]) * *pfVar3 + (float)piVar2[2];
        fVar4 = *pfVar3;
        if (fVar4 == (float)piVar2[6]) {
          iVar6 = sound::IsMobyPlayingSound(moby,piVar2[5]);
          uVar5 = (ulonglong)iVar6;
          if (iVar6 != 0) {
            iVar6 = piVar2[5];
            if (((iVar6 != -1) && (sound::g_SoundChannels[iVar6].pMoby == moby)) &&
               (sound::g_SoundChannels[iVar6].state != '\0')) {
              sound::sound_Kill(iVar6);
            }
            uVar5 = 0xffffffffffffffff;
            piVar2[5] = -1;
          }
        }
        else if ((fVar4 == 1.0) || (fVar4 == 0.0)) {
          iVar6 = sound::IsMobyPlayingSound(moby,piVar2[5]);
          if (iVar6 != 0) {
            iVar6 = piVar2[5];
            if (((iVar6 != -1) && (sound::g_SoundChannels[iVar6].pMoby == moby)) &&
               (sound::g_SoundChannels[iVar6].state != '\0')) {
              sound::sound_Kill(iVar6);
            }
            piVar2[5] = -1;
          }
          iVar6 = sound::PlayMobySound(1,0,moby);
          uVar5 = (ulonglong)iVar6;
        }
        else {
          iVar6 = sound::IsMobyPlayingSound(moby,piVar2[5]);
          uVar5 = (ulonglong)iVar6;
          if (iVar6 == 0) {
            iVar6 = sound::PlayMobySound(0,4,moby);
            uVar5 = (ulonglong)iVar6;
            piVar2[5] = iVar6;
          }
        }
        piVar2[6] = (int)*pfVar3;
      }
    }
  }
  return uVar5;
}



//==== 004091a0  ns=mobyupdate_unsorted  size=0xc78
// sig: undefined UpdateMoby_666(MobyInstance * moby)
// callers(0): 
// callees(12): 000efb38 mobyfunc::DeleteMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000f98d8 mobyfunc::UpdateMobyAnimFrame; 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 000ff190 mobyutil::MB_DeltAngSpeed; 00110b70 mobyutil::MB_IsPntInCuboid; 003a82b8 mobyupdate_unsorted::UpdateMoby_a_lot_10; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502758 fastfunc::FastDoubleToInt

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Moby 666 */

void mobyupdate_unsorted::UpdateMoby_666(MobyInstance *moby)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  short sVar8;
  MobyModeBit MVar9;
  MOBY_OCLASSES MVar10;
  void *pvVar11;
  ulonglong *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  int32_t *piVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  MobyInstance *pMVar34;
  Cuboid *pCVar35;
  ulonglong uVar36;
  int iVar38;
  int iVar39;
  longlong lVar37;
  undefined2 uVar40;
  Spline *pSVar41;
  float *pfVar42;
  longlong lVar43;
  ulonglong uVar44;
  longlong lVar45;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  void *pvVar46;
  ulonglong unaff_r27;
  longlong lVar47;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar48;
  double dVar49;
  double dVar50;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  
  uVar36 = ZEXT48(&stack0x00000000);
  lVar47 = uVar36 - 0x1a0;
  puVar12 = (ulonglong *)lVar47;
  *puVar12 = uVar36;
  puVar12[0x36] = in_LR;
  puVar12[0x32] = in_f30;
  puVar12[0x33] = in_f31;
  puVar12[0x31] = unaff_r31;
  puVar12[0x30] = unaff_r30;
  pvVar11 = moby->pVar;
  iVar38 = *(int *)((int)pvVar11 + 0x170);
  puVar12[0x2f] = unaff_r29;
  puVar12[0x2e] = unaff_r28;
  puVar12[0x2d] = unaff_r27;
  puVar12[0x2c] = unaff_r26;
  puVar12[0x2b] = unaff_r25;
  if (iVar38 == -1) {
    bVar1 = moby->animationId != '\x05';
    if ((bVar1) && (bVar1)) {
      mobyutil::MB_SetAnimation(moby,5,0,0);
    }
  }
  else {
    sVar8 = *(short *)((int)pvVar11 + 0x174);
    if (sVar8 < 1) {
      if (-1 < sVar8) {
        *(undefined2 *)((int)pvVar11 + 0x174) = 1;
        MVar9 = moby->modeBits;
        *(undefined4 *)((int)pvVar11 + 0x184) = 0;
        *(undefined4 *)((int)pvVar11 + 0x178) = 0;
        *(undefined4 *)((int)pvVar11 + 0x194) = 0xffffffff;
        moby->updateDistance = -1;
        moby->modeBits = MVar9 | (UNK_40|DISABLED);
        return;
      }
    }
    else if (sVar8 < 2) {
      iVar38 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)iVar38);
      if (iVar38 != 0) {
        *(undefined2 *)((int)pvVar11 + 0x174) = 2;
        iVar38 = *(int *)((int)pvVar11 + 0x180);
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
        if (iVar38 != -1) {
          pvVar46 = MobyInstance[iVar38].pVar;
          iVar38 = fastfunc::FastDoubleToInt((double)(*(float *)((int)pvVar11 + 0x188) * 60.0));
          puVar12[0x29] = (longlong)iVar38;
          *(int *)((int)pvVar46 + 0x2c) =
               (int)(animationSpeed * ((float)(longlong)puVar12[0x29] + 0.5));
          MobyInstance[*(int *)((int)pvVar11 + 0x180)].setByGroup = '\x01';
        }
        if (*(int *)((int)pvVar11 + 0x74) != -1) {
          iVar38 = 0;
          pSVar41 = Splines[*(int *)((int)pvVar11 + 0x74)];
          piVar18 = &pSVar41->cnt;
          if (0 < *piVar18) {
            do {
              if (pSVar41->points[0].w == 1.0) {
                *(int *)((int)pvVar11 + 0x17c) = iVar38;
                break;
              }
              iVar38 = iVar38 + 1;
              pSVar41 = (Spline *)pSVar41->points;
            } while (iVar38 < *piVar18);
          }
        }
      }
    }
    else if (sVar8 < 3) {
      UpdateMoby_a_lot_10(moby);
      if (*(int *)((int)pvVar11 + 0x180) != -1) {
        fVar2 = (moby->pos).x - GameCamera.posX;
        fVar3 = (moby->pos).y - GameCamera.posY;
        fVar5 = ABS(fVar2);
        fVar4 = ABS(fVar3);
        pvVar46 = MobyInstance[*(int *)((int)pvVar11 + 0x180)].pVar;
        *(float *)((int)puVar12 + 0xfc) = fVar2;
        *(float *)(puVar12 + 0x20) = fVar3;
        *(float *)((int)puVar12 + 0x104) = fVar5 - fVar4;
        dVar51 = 0.0;
        uVar44 = (ulonglong)(*(uint *)((int)puVar12 + 0xfc) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0x104) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar12 + 0x20) >> 0x1d) & 4;
        fVar2 = ABS(*(float *)((int)puVar12 + 0xfc));
        if (*(float *)((int)puVar12 + 0x104) - 0.0 < 0.0) {
          fVar2 = fVar4;
        }
        fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar44 << 2));
        fVar3 = *(float *)(((uint)(uVar44 << 2) | 0x735900) + 4);
        fVar6 = ABS(*(float *)(puVar12 + 0x20));
        if (*(float *)((int)puVar12 + 0x104) - 0.0 < 0.0) {
          fVar6 = fVar5;
        }
        dVar50 = dVar51;
        if (0.0 < fVar2) {
          lVar37 = uVar36 - 400;
          lVar43 = uVar36 - 0x78;
          lVar45 = uVar36 - 0x68;
          lVar48 = 2;
          fVar2 = (fVar6 - fVar2) / (fVar6 + fVar2);
          fVar5 = fVar2 * fVar2;
          *(float *)((int)puVar12 + 0x134) = fVar2;
          *(float *)((int)puVar12 + 300) = fVar2;
          *(float *)(puVar12 + 0x26) = fVar2;
          *(float *)(puVar12 + 0x25) = fVar2;
          fVar2 = fVar5 * fVar5;
          *(float *)((int)puVar12 + 300) = *(float *)((int)puVar12 + 300) * fVar5;
          *(float *)(puVar12 + 0x26) = *(float *)(puVar12 + 0x26) * fVar2;
          *(float *)((int)puVar12 + 0x134) = *(float *)((int)puVar12 + 0x134) * fVar2 * fVar5;
          do {
            *(float *)((int)lVar37 + 0x128) = *(float *)((int)lVar37 + 0x118) * fVar2 * fVar2;
            iVar38 = (int)lVar43;
            lVar37 = lVar37 + 8;
            lVar43 = lVar43 + 8;
            *(float *)((int)lVar45 + 4) = *(float *)(iVar38 + 4) * fVar2 * fVar2;
            lVar45 = lVar45 + 8;
            lVar48 = lVar48 + -1;
          } while (lVar48 != 0);
          lVar48 = 4;
          lVar45 = uVar36 - 0x78;
          pfVar42 = (float *)&DAT_007358e0;
          lVar37 = lVar47;
          lVar43 = lVar45;
          do {
            fVar2 = *pfVar42;
            fVar5 = pfVar42[1];
            pfVar42 = pfVar42 + 2;
            *(float *)((int)lVar37 + 0x128) = *(float *)((int)lVar37 + 0x128) * fVar2;
            lVar37 = lVar37 + 8;
            *(float *)((int)lVar43 + 4) = *(float *)((int)lVar43 + 4) * fVar5;
            lVar43 = lVar43 + 8;
            lVar48 = lVar48 + -1;
          } while (lVar48 != 0);
          lVar43 = 2;
          lVar37 = lVar47;
          do {
            iVar38 = (int)lVar37;
            lVar37 = lVar37 + 0x10;
            iVar39 = (int)lVar45;
            lVar45 = lVar45 + 0x10;
            dVar50 = (double)((float)(dVar50 + (double)*(float *)(iVar38 + 0x128)) +
                              *(float *)(iVar39 + 4) + *(float *)(iVar39 + 8) +
                             *(float *)(iVar39 + 0xc));
            lVar43 = lVar43 + -1;
          } while (lVar43 != 0);
          dVar50 = (double)((float)(dVar50 + 0.7853981852531433) * fVar4 + fVar3);
        }
        dVar49 = (double)fastfunc::FastDiffRots
                                   ((double)Cuboids[*(int *)((int)pvVar46 + 0x24)].rot.z,dVar50);
        if (dVar51 <= dVar49) {
          if ((double)(*(float *)((int)pvVar11 + 400) * 0.017453292) < dVar49) {
            dVar50 = (double)fastfunc::FastWrapRot
                                       (Cuboids[*(int *)((int)pvVar46 + 0x24)].rot.z,
                                        *(float *)((int)pvVar11 + 400) * -0.017453292);
          }
        }
        else {
          dVar50 = (double)Cuboids[*(int *)((int)pvVar46 + 0x24)].rot.z;
        }
        pCVar35 = Cuboids;
        *(float *)((int)pvVar46 + 0x10) = Cuboids[*(int *)((int)pvVar46 + 0x24)].rot.x;
        *(float *)((int)pvVar46 + 0x14) = pCVar35[*(int *)((int)pvVar46 + 0x24)].rot.y;
        dVar51 = (double)mobyutil::MB_DeltAngSpeed
                                   ((double)GameCamera.rot.radius,dVar50,
                                    (double)(DAT_0071f418 * 12.566371),
                                    (double)(DAT_0071f418 * 125.663704),
                                    (double)(mobyutil::g_FrameTime * 3.1415927),&DAT_00720000,
                                    &DAT_00409170,(int)pvVar11 + 0x18c);
        *(float *)((int)pvVar46 + 0x18) = (float)dVar51;
      }
      if (*(int *)((int)pvVar11 + 0x74) != -1) {
        if ((*(int *)((int)pvVar11 + 0x60) == *(int *)((int)pvVar11 + 0x17c)) &&
           (*(int *)((int)pvVar11 + 0x178) == 0)) {
          if (moby->animationId != '\x02') {
            puVar12[0x29] = (longlong)(int)(animationSpeed * 20.5);
            mobyutil::MB_SetAnimation(moby,2,0,*(undefined4 *)((int)puVar12 + 0x14c));
          }
          *(undefined4 *)((int)pvVar11 + 0x178) = 1;
          *(undefined2 *)((int)pvVar11 + 0x176) = 0;
        }
        else if ((*(int *)((int)pvVar11 + 0x60) == Splines[*(int *)((int)pvVar11 + 0x74)]->cnt + -2)
                && (*(int *)((int)pvVar11 + 0x184) == 0)) {
          mobyfunc::DeleteMoby(moby);
          return;
        }
      }
    }
    fastfunc::FastDecTimerS16((int)pvVar11 + 0x176);
    if (((*(int *)((int)pvVar11 + 0x178) == 0) || (*(short *)((int)pvVar11 + 0x176) != 0)) ||
       (bVar1 = moby->updateId != '\x02', bVar1)) {
      lVar47 = uVar36 - 0x130;
      iVar38 = 0;
      dVar51 = 3.1415927410125732;
      pvVar46 = pvVar11;
      do {
        uVar33 = uRam00854e8c;
        uVar32 = uRam00854e88;
        uVar31 = uRam00854e84;
        uVar30 = _DAT_00854e80;
        uVar29 = uRam00854e7c;
        uVar28 = uRam00854e78;
        uVar27 = uRam00854e74;
        uVar26 = _DAT_00854e70;
        uVar25 = uRam00854e6c;
        uVar24 = uRam00854e68;
        uVar23 = uRam00854e64;
        uVar22 = _DAT_00854e60;
        uVar21 = uRam00854e58;
        uVar20 = uRam00854e54;
        uVar19 = _DAT_00854e50;
        *(undefined4 *)((int)puVar12 + 0x7c) = uRam00854e5c;
        *(undefined4 *)(puVar12 + 0xf) = uVar21;
        *(undefined4 *)((int)puVar12 + 0x74) = uVar20;
        *(undefined4 *)(puVar12 + 0xe) = uVar19;
        *(undefined4 *)((int)puVar12 + 0x8c) = uVar25;
        *(undefined4 *)(puVar12 + 0x11) = uVar24;
        *(undefined4 *)((int)puVar12 + 0x84) = uVar23;
        *(undefined4 *)(puVar12 + 0x10) = uVar22;
        *(undefined4 *)((int)puVar12 + 0x9c) = uVar29;
        *(undefined4 *)(puVar12 + 0x13) = uVar28;
        *(undefined4 *)((int)puVar12 + 0x94) = uVar27;
        *(undefined4 *)(puVar12 + 0x12) = uVar26;
        *(undefined4 *)((int)puVar12 + 0xac) = uVar33;
        *(undefined4 *)(puVar12 + 0x15) = uVar32;
        *(undefined4 *)((int)puVar12 + 0xa4) = uVar31;
        *(undefined4 *)(puVar12 + 0x14) = uVar30;
        uVar33 = uRam00854ecc;
        uVar32 = uRam00854ec8;
        uVar31 = uRam00854ec4;
        uVar30 = _DAT_00854ec0;
        uVar29 = uRam00854ebc;
        uVar28 = uRam00854eb8;
        uVar27 = uRam00854eb4;
        uVar26 = _DAT_00854eb0;
        uVar25 = uRam00854eac;
        uVar24 = uRam00854ea8;
        uVar23 = uRam00854ea4;
        uVar22 = _DAT_00854ea0;
        uVar21 = uRam00854e98;
        uVar20 = uRam00854e94;
        uVar19 = _DAT_00854e90;
        *(undefined4 *)((int)puVar12 + 0xbc) = uRam00854e9c;
        *(undefined4 *)(puVar12 + 0x17) = uVar21;
        *(undefined4 *)((int)puVar12 + 0xb4) = uVar20;
        *(undefined4 *)(puVar12 + 0x16) = uVar19;
        *(undefined4 *)((int)puVar12 + 0xcc) = uVar25;
        *(undefined4 *)(puVar12 + 0x19) = uVar24;
        *(undefined4 *)((int)puVar12 + 0xc4) = uVar23;
        *(undefined4 *)(puVar12 + 0x18) = uVar22;
        *(undefined4 *)((int)puVar12 + 0xdc) = uVar29;
        *(undefined4 *)(puVar12 + 0x1b) = uVar28;
        *(undefined4 *)((int)puVar12 + 0xd4) = uVar27;
        *(undefined4 *)(puVar12 + 0x1a) = uVar26;
        *(undefined4 *)((int)puVar12 + 0xec) = uVar33;
        *(undefined4 *)(puVar12 + 0x1d) = uVar32;
        *(undefined4 *)((int)puVar12 + 0xe4) = uVar31;
        *(undefined4 *)(puVar12 + 0x1c) = uVar30;
        iVar39 = *(int *)((int)pvVar46 + 0x150);
        if (iVar39 != -1) {
          if (*(short *)((int)pvVar11 + 0x174) != 1) {
            MobyInstance[iVar39].modeBits =
                 MobyInstance[iVar39].modeBits &
                 (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                  DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW
                  |TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
            iVar39 = *(int *)((int)pvVar46 + 0x150);
          }
          pfVar42 = (float *)lVar47;
          fVar2 = pfVar42[1];
          fVar3 = *pfVar42;
          fVar4 = (moby->transform).v1.w;
          fVar5 = (moby->transform).v0.w;
          fVar6 = pfVar42[2];
          fVar7 = (moby->transform).v2.w;
          fVar15 = (moby->transform).v2.x * fVar6 +
                   (moby->transform).v0.x * fVar3 + (moby->transform).v1.x * fVar2;
          fVar14 = (moby->transform).v2.y * fVar6 +
                   (moby->transform).v0.y * fVar3 + (moby->transform).v1.y * fVar2;
          fVar13 = (moby->transform).v2.z * fVar6 +
                   (moby->transform).v0.z * fVar3 + (moby->transform).v1.z * fVar2;
          *pfVar42 = fVar15;
          pfVar42[1] = fVar14;
          pfVar42[2] = fVar13;
          pfVar42[3] = fVar7 * fVar6 + fVar5 * fVar3 + fVar4 * fVar2 + pfVar42[3];
          pMVar34 = MobyInstance;
          MobyInstance[iVar39].pos.x = (moby->pos).x + fVar15;
          pMVar34[iVar39].pos.y = (moby->pos).y + fVar14;
          pMVar34[iVar39].pos.z = (moby->pos).z + fVar13;
          pMVar34[iVar39].pos.w = (moby->pos).w;
          pMVar34 = MobyInstance;
          iVar39 = *(int *)((int)pvVar46 + 0x150);
          MobyInstance[iVar39].rotation.x = (moby->rotation).x;
          pMVar34[iVar39].rotation.y = (moby->rotation).y;
          pMVar34[iVar39].rotation.z = (moby->rotation).z;
          pMVar34[iVar39].rotation.w = (moby->rotation).w;
          dVar50 = (double)fastfunc::FastWrapRot
                                     (MobyInstance[*(int *)((int)pvVar46 + 0x150)].rotation.z,
                                      (float)dVar51);
          MobyInstance[*(int *)((int)pvVar46 + 0x150)].rotation.z = (float)dVar50;
          mobyfunc::UpdateMobyAnimFrame(MobyInstance + *(int *)((int)pvVar46 + 0x150));
          mobyfunc::UpdateMobyTransform(MobyInstance + *(int *)((int)pvVar46 + 0x150));
          MobyInstance[*(int *)((int)pvVar46 + 0x150)].modeBits =
               MobyInstance[*(int *)((int)pvVar46 + 0x150)].modeBits | (NO_POST_UPDATE|NO_UPDATE);
        }
        iVar38 = iVar38 + 1;
        lVar47 = lVar47 + 0x10;
        pvVar46 = (void *)((int)pvVar46 + 4);
      } while (iVar38 < 8);
    }
    else if (!bVar1) {
      iVar38 = 0;
      pvVar46 = pvVar11;
      do {
        if (*(int *)((int)pvVar46 + 0x150) != -1) {
          iVar39 = *(int *)((int)pvVar11 + iVar38 * 4 + 0x150);
          MobyInstance[iVar39].modeBits =
               MobyInstance[iVar39].modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                HAS_GLOW|TRANSPARENT|DISABLED);
          pMVar34 = MobyInstance;
          iVar39 = *(int *)((int)pvVar11 + iVar38 * 4 + 0x150);
          fVar4 = 0.0;
          MobyInstance[iVar39].rotation.w = 0.0;
          pMVar34[iVar39].rotation.z = 0.0;
          pMVar34[iVar39].rotation.y = 0.0;
          pMVar34[iVar39].rotation.x = 0.0;
          fVar2 = g_heroPosition.x - (moby->pos).x;
          fVar3 = g_heroPosition.y - (moby->pos).y;
          fVar5 = ABS(fVar2);
          fVar6 = ABS(fVar3);
          *(float *)(puVar12 + 0x1e) = fVar2;
          *(float *)((int)puVar12 + 0xf4) = fVar3;
          *(float *)(puVar12 + 0x1f) = fVar5 - fVar6;
          pMVar34 = MobyInstance;
          iVar39 = *(int *)((int)pvVar11 + iVar38 * 4 + 0x150);
          uVar44 = (ulonglong)(*(uint *)(puVar12 + 0x1e) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar12 + 0x1f) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar12 + 0xf4) >> 0x1d) & 4;
          fVar2 = ABS(*(float *)(puVar12 + 0x1e));
          if (*(float *)(puVar12 + 0x1f) - 0.0 < 0.0) {
            fVar2 = fVar6;
          }
          fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar44 << 2));
          fVar3 = *(float *)(((uint)(uVar44 << 2) | 0x735900) + 4);
          fVar7 = ABS(*(float *)((int)puVar12 + 0xf4));
          if (*(float *)(puVar12 + 0x1f) - 0.0 < 0.0) {
            fVar7 = fVar5;
          }
          if (0.0 < fVar2) {
            lVar37 = uVar36 - 400;
            lVar45 = uVar36 - 0x88;
            lVar43 = uVar36 - 0x98;
            lVar48 = 2;
            fVar2 = (fVar7 - fVar2) / (fVar7 + fVar2);
            fVar5 = fVar2 * fVar2;
            *(float *)((int)puVar12 + 0x114) = fVar2;
            *(float *)((int)puVar12 + 0x10c) = fVar2;
            *(float *)(puVar12 + 0x22) = fVar2;
            *(float *)(puVar12 + 0x21) = fVar2;
            fVar2 = fVar5 * fVar5;
            *(float *)((int)puVar12 + 0x10c) = *(float *)((int)puVar12 + 0x10c) * fVar5;
            *(float *)(puVar12 + 0x22) = *(float *)(puVar12 + 0x22) * fVar2;
            *(float *)((int)puVar12 + 0x114) = *(float *)((int)puVar12 + 0x114) * fVar2 * fVar5;
            do {
              *(float *)((int)lVar37 + 0x108) = *(float *)((int)lVar37 + 0xf8) * fVar2 * fVar2;
              iVar16 = (int)lVar43;
              lVar43 = lVar43 + 8;
              lVar37 = lVar37 + 8;
              *(float *)((int)lVar45 + 4) = *(float *)(iVar16 + 4) * fVar2 * fVar2;
              lVar45 = lVar45 + 8;
              lVar48 = lVar48 + -1;
            } while (lVar48 != 0);
            lVar48 = 4;
            lVar45 = uVar36 - 0x98;
            pfVar42 = (float *)&DAT_007358e0;
            lVar37 = lVar47;
            lVar43 = lVar45;
            do {
              fVar2 = *pfVar42;
              fVar5 = pfVar42[1];
              pfVar42 = pfVar42 + 2;
              *(float *)((int)lVar37 + 0x108) = *(float *)((int)lVar37 + 0x108) * fVar2;
              lVar37 = lVar37 + 8;
              *(float *)((int)lVar43 + 4) = *(float *)((int)lVar43 + 4) * fVar5;
              lVar43 = lVar43 + 8;
              lVar48 = lVar48 + -1;
            } while (lVar48 != 0);
            lVar37 = 2;
            do {
              iVar16 = (int)lVar47;
              lVar47 = lVar47 + 0x10;
              iVar17 = (int)lVar45;
              lVar45 = lVar45 + 0x10;
              fVar4 = fVar4 + *(float *)(iVar16 + 0x108) + *(float *)(iVar17 + 4) +
                      *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc);
              lVar37 = lVar37 + -1;
            } while (lVar37 != 0);
            fVar4 = (fVar4 + 0.7853982) * fVar6 + fVar3;
          }
          pMVar34[iVar39].rotation.z = fVar4;
          iVar39 = *(int *)((int)pvVar11 + iVar38 * 4 + 0x150);
          MVar10 = MobyInstance[iVar39].oClass;
          if (MVar10 == BIRDBOT) {
            pvVar46 = MobyInstance[iVar39].pVar;
            auVar52 = ZEXT416(0xffffffff);
            auVar52 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
            *(undefined4 *)((int)pvVar46 + 0x1e8) = 1;
            auVar53 = vectorShiftLeftIntegerWord(auVar52,auVar52);
            auVar52 = loadVectorLeftIndexed(0x28,0x409170);
            auVar52 = auVar52 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar54 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar52 = vectorMultiplyAddFloatingPoint
                                (auVar54,auVar52 | auVar52 << 0x20 | auVar52 << 0x40 |
                                         auVar52 << 0x60,auVar53);
            auVar52 = vectorConvertToSignedFixedPointWordSaturate(auVar52,0);
            auVar52 = vectorSplatHalfWord(auVar52,1);
            uVar40 = storeVectorElementHalfWordIndexed(auVar52,0x1ec,ZEXT48(pvVar46));
            *(undefined2 *)((int)pvVar46 + 0x1ec) = uVar40;
            *(float *)((int)pvVar46 + 0x1d0) = *(float *)((int)pvVar11 + 0xd0) - (moby->pos).x;
            *(float *)((int)pvVar46 + 0x1d4) = *(float *)((int)pvVar11 + 0xd4) - (moby->pos).y;
            *(float *)((int)pvVar46 + 0x1d8) = *(float *)((int)pvVar11 + 0xd8) - (moby->pos).z;
            *(undefined4 *)((int)pvVar46 + 0x1dc) = *(undefined4 *)((int)pvVar11 + 0xdc);
          }
          else if (MVar10 == BLARG_TROOPER_01AB) {
            MobyInstance[iVar39].state = '\x04';
          }
          else if (MVar10 == CIRCULAR_SAW_ENEMY) {
            MobyInstance[iVar39].state = '\x02';
          }
          *(undefined4 *)((int)pvVar11 + iVar38 * 4 + 0x150) = 0xffffffff;
          uVar40 = mobyutil::MB_randRange(0x14,0x1e);
          *(undefined2 *)((int)pvVar11 + 0x176) = uVar40;
          return;
        }
        iVar38 = iVar38 + 1;
        pvVar46 = (void *)((int)pvVar46 + 4);
      } while (iVar38 < 8);
      if (moby->animationId != '\0') {
        puVar12[0x29] = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar12 + 0x14c));
      }
    }
  }
  return;
}



//==== 00409e18  ns=mobyupdate_helpers  size=0x14
// sig: undefined M667_00409e18(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M667_00409e18(void)

{
  DAT_00854e2c = 0x10000;
  return;
}



//==== 00409e30  ns=mobyupdate_unsorted  size=0x244
// sig: undefined UpdateMoby_667(MobyInstance * moby)
// callers(0): 
// callees(2): 000efb38 mobyfunc::DeleteMoby; 005cd098 libc::printf
// strings: 00656fac: 'Moby %d(%d) has no check moby! Deleting!\n'

/* Moby 667 */

void mobyupdate_unsorted::UpdateMoby_667(MobyInstance *moby)

{
  char cVar1;
  int *piVar2;
  MobyInstance *pMVar3;
  MobyInstance *pMVar4;
  int *piVar5;
  int iVar6;
  
  pMVar3 = MobyInstance;
  pMVar4 = (MobyInstance *)0x0;
  iVar6 = 0;
  piVar2 = (int *)moby->pVar;
  cVar1 = *(char *)(piVar2 + 7);
  if (*piVar2 != -1) {
    pMVar4 = MobyInstance + *piVar2;
  }
  if (cVar1 < '\x01') {
    if (-1 < cVar1) {
      if (pMVar4 == (MobyInstance *)0x0) {
        libc::printf("Moby %d(%d) has no check moby! Deleting!\n",moby->uid,moby->oClass);
        mobyfunc::DeleteMoby(moby);
      }
      else {
        *(byte *)(piVar2 + 7) =
             ((byte)((LZCOUNT(-(uint)*(byte *)((int)piVar2 + 0x1d)) << 0x3a) >> 0x3f) & 1) + 1;
      }
    }
  }
  else {
    piVar5 = piVar2;
    if (cVar1 < '\x02') {
      do {
        if ((uint)pMVar4->state == (int)*(char *)((int)piVar5 + 10)) {
          iVar6 = piVar2[4];
          if (iVar6 != -1) {
            if (*(u8 *)((int)piVar2 + 0x15) != 0xff) {
              MobyInstance[iVar6].state = *(u8 *)((int)piVar2 + 0x15);
            }
            if (*(char *)((int)piVar2 + 0x17) != -1) {
              pMVar3[iVar6].setByGroup = *(char *)((int)piVar2 + 0x17);
            }
          }
          if (*(u8 *)((int)piVar2 + 0x19) != 0xff) {
            moby->state = *(u8 *)((int)piVar2 + 0x19);
          }
          if (*(char *)((int)piVar2 + 0x1b) != -1) {
            moby->setByGroup = *(char *)((int)piVar2 + 0x1b);
          }
          *(undefined1 *)(piVar2 + 7) = 2;
          return;
        }
        iVar6 = iVar6 + 1;
        piVar5 = (int *)((int)piVar5 + 1);
      } while (iVar6 < 6);
    }
    else if (cVar1 < '\x03') {
      do {
        if ((uint)pMVar4->state == (int)*(char *)(piVar5 + 1)) {
          iVar6 = piVar2[4];
          if (iVar6 != -1) {
            if (*(u8 *)(piVar2 + 5) != 0xff) {
              MobyInstance[iVar6].state = *(u8 *)(piVar2 + 5);
            }
            if (*(char *)((int)piVar2 + 0x16) != -1) {
              pMVar3[iVar6].setByGroup = *(char *)((int)piVar2 + 0x16);
            }
          }
          if (*(u8 *)(piVar2 + 6) != 0xff) {
            moby->state = *(u8 *)(piVar2 + 6);
          }
          if (*(char *)((int)piVar2 + 0x1a) != -1) {
            moby->setByGroup = *(char *)((int)piVar2 + 0x1a);
          }
          *(undefined1 *)(piVar2 + 7) = 1;
          return;
        }
        iVar6 = iVar6 + 1;
        piVar5 = (int *)((int)piVar5 + 1);
      } while (iVar6 < 6);
    }
  }
  return;
}



//==== 0040a078  ns=mobyupdate_helpers  size=0xdc
// sig: undefined M668_0040a078(void)
// callers(1): 0040a4d8 mobyupdate_unsorted::UpdateMoby_668
// callees(0): 

MobyInstance * mobyupdate_helpers::M668_0040a078(MobyInstance *param_1)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  MobyInstance *pMVar4;
  short sVar5;
  ushort *puVar6;
  
  if (param_1->group != 0xff) {
    puVar6 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)param_1->group];
    do {
      uVar3 = *puVar6 & 0x7fff;
      if ((MobyInstance[uVar3].oClass == SANDSHARK_0244) && (MobyInstance[uVar3].state == '\x1a')) {
        MobyInstance[uVar3].field80_0xb8 = param_1;
        sVar5._0_1_ = param_1->field76_0xb4;
        sVar5._1_1_ = param_1->field77_0xb5;
        sVar1._0_1_ = MobyInstance[uVar3].field76_0xb4;
        sVar1._1_1_ = MobyInstance[uVar3].field77_0xb5;
        if (sVar5 < sVar1) {
          pMVar4 = MobyInstance + uVar3;
          pMVar4->field76_0xb4 = sVar5._0_1_;
          pMVar4->field77_0xb5 = (undefined1)sVar5;
          sVar5._0_1_ = param_1->field76_0xb4;
          sVar5._1_1_ = param_1->field77_0xb5;
        }
        sVar5 = sVar5 - *(short *)&MobyInstance[uVar3].field76_0xb4;
        *(short *)&param_1->field76_0xb4 = sVar5;
        if (sVar5 < 1) {
          param_1->field76_0xb4 = '\0';
          param_1->field77_0xb5 = '\x01';
        }
        return MobyInstance + uVar3;
      }
      uVar2 = *puVar6;
      puVar6 = puVar6 + 1;
    } while (-1 < (short)uVar2);
  }
  return (MobyInstance *)0x0;
}



//==== 0040a168  ns=mobyupdate_helpers  size=0x338
// sig: undefined M668_0040a168(void)
// callers(1): 0040a4d8 mobyupdate_unsorted::UpdateMoby_668
// callees(10): 000efb38 mobyfunc::DeleteMoby; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00500060 fastfunc::FastDecTimerS8

void mobyupdate_helpers::M668_0040a168(MobyInstance *param_1)

{
  void *pvVar1;
  float fVar2;
  int iVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  int local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  pvVar1 = param_1->pVar;
  uVar4 = ZEXT48(pvVar1);
  dVar6 = 0.0;
  local_2c = 0.0;
  if (*(char *)((int)pvVar1 + 0x2e) == '\x02') {
    *(undefined1 *)((int)pvVar1 + 0x2e) = 1;
    if (-1 < *(int *)((int)pvVar1 + 0xe0)) {
      *(int *)((int)MobyInstance[*(int *)((int)pvVar1 + 0xe0)].pVar + 0x150) =
           *(int *)((int)MobyInstance[*(int *)((int)pvVar1 + 0xe0)].pVar + 0x150) + -1;
    }
    mobyfunc::DeleteMoby(param_1);
  }
  else {
    iVar3 = mobyutil::MB_damage(param_1,0x330000,0);
    mobyutil::MB_HandleDamage(param_1,iVar3,uVar4 + 0x20,0,&local_30,&local_2c,0,4);
    if (iVar3 != 0) {
      if ((local_30 != 1) && (param_1->state != '\x04')) {
        dVar5 = dVar6;
        if (local_30 != 3) {
          dVar5 = (double)(*(float *)((int)pvVar1 + 0x20) - local_2c);
        }
        *(float *)((int)pvVar1 + 0x20) = (float)dVar5;
        *(undefined4 *)((int)pvVar1 + 0x94) = 4;
        fVar2 = mobyutil::g_FrameTime;
        if (dVar5 <= dVar6) {
          param_1->modeBits =
               param_1->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
          *(undefined1 *)((int)pvVar1 + 0x67) = 0xfa;
          param_1->state = '\x04';
          fVar2 = mobyutil::g_FrameTime;
          *(float *)((int)pvVar1 + 0x88) = mobyutil::g_FrameTime * 11.0;
          *(float *)((int)pvVar1 + 0x8c) = fVar2 * 3.0;
          mobyutil::MB_VecAtan2Angles
                    (*(undefined8 *)(iVar3 + 0x10),*(undefined8 *)(iVar3 + 0x18),&local_24,
                     uVar4 + 0x88,uVar4 + 0x8c);
          mobyutil::MB_StartKick((double)local_24,param_1,uVar4 + 0x70);
          *(undefined4 *)((int)pvVar1 + 0xc0) = 0x41100000;
          *(undefined4 *)((int)pvVar1 + 0xc4) = 0x41980000;
          if (param_1->animationId != '\x03') {
            mobyutil::MB_SetAnimation(param_1,3,0,0);
          }
          mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
        }
        else {
          *(float *)((int)pvVar1 + 0x88) = mobyutil::g_FrameTime * 4.0;
          *(float *)((int)pvVar1 + 0x8c) = fVar2 * 3.0;
          mobyutil::MB_VecAtan2Angles
                    (*(undefined8 *)(iVar3 + 0x10),*(undefined8 *)(iVar3 + 0x18),&local_28,
                     uVar4 + 0x88,uVar4 + 0x8c);
          mobyutil::MB_StartKick((double)local_28,param_1,uVar4 + 0x70);
          if ((int)(((uint)((int)local_2c >> 0x1f) >> 1 ^ (uint)local_2c) - ((int)local_2c >> 0x1f))
              < 0x3f800000) {
            *(undefined1 *)((int)pvVar1 + 0x67) = 0x78;
          }
          else {
            *(undefined1 *)((int)pvVar1 + 0x67) = 0x78;
            param_1->state = '\x03';
            mobyutil::MB_SetAnimation(param_1,2,0,0);
          }
        }
        mobyutil::MB_UpdateLightsTransition(param_1,uVar4 + 0x60);
      }
    }
    param_1->damage = -1;
    mobyutil::MB_ColorDyingMoby(param_1,uVar4 + 0x60);
    fastfunc::FastDecTimerS8(&param_1->setByGroup);
  }
  return;
}



//==== 0040a4d8  ns=mobyupdate_unsorted  size=0x734
// sig: undefined UpdateMoby_668(MobyInstance * moby)
// callers(0): 
// callees(11): 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000fddc0 mobyutil::MB_SetAnimation; 00106360 mobyutil::MB_SetZBoundsFromGround; 0010b030 mobyutil::MB_UpdateKick; 0010e030 mobyutil::MB_genericExplosion; 0011a560 mobyutil::MB_SpawnDebrisMoby; 003d0b20 FUN_003d0b20; 0040a078 mobyupdate_helpers::M668_0040a078; 0040a168 mobyupdate_helpers::M668_0040a168; 004fff60 fastfunc::FastDecTimerS32

/* Moby 668 */

void mobyupdate_unsorted::UpdateMoby_668(MobyInstance *moby)

{
  void *pvVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  byte bVar10;
  short sVar9;
  int iVar7;
  uint uVar8;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  double dVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [40];
  
  lVar6 = (longlong)(int)moby;
  pvVar1 = moby->pVar;
  uVar12 = ZEXT48(pvVar1);
  mobyupdate_helpers::M668_0040a168();
  bVar10 = moby->state;
  if (bVar10 < 0x80) {
    if ((moby->enabled != '\0') &&
       (fVar3 = (moby->pos).y - GameCamera.posY, fVar4 = (moby->pos).x - GameCamera.posX,
       fVar5 = (moby->pos).z - GameCamera.posZ,
       SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) < 28.0)) {
      mobyutil::MB_SetZBoundsFromGround(lVar6);
      bVar10 = moby->state;
      moby->shadow = '\x16';
    }
    if (bVar10 == 4) {
      uVar8 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar1 + 0x70));
      if ((uVar8 & 0x40) != 0) {
        if (-1 < *(int *)((int)pvVar1 + 0xe0)) {
          *(int *)((int)MobyInstance[*(int *)((int)pvVar1 + 0xe0)].pVar + 0x150) =
               *(int *)((int)MobyInstance[*(int *)((int)pvVar1 + 0xe0)].pVar + 0x150) + -1;
        }
        uVar15 = 0;
        mobyutil::MB_genericExplosion
                  (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
                   0x402e000000000000,lVar6,uVar12 + 0x40,local_50,1,0xffffffffffffffff,5,2,4);
        lVar13 = lVar6 + 0x10;
        lVar11 = lVar6 + 0x40;
        mobyutil::MB_SpawnDebrisMoby(uVar15,lVar6,0x6e4,lVar13,lVar11,0,0);
        mobyutil::MB_SpawnDebrisMoby(uVar15,lVar6,0x6e4,lVar13,lVar11,0,0);
        mobyutil::MB_SpawnDebrisMoby(uVar15,lVar6,0x6e5,lVar13,lVar11,0,0);
        mobyutil::MB_SpawnDebrisMoby(uVar15,lVar6,0x6e5,lVar13,lVar11,0,0);
        mobyfunc::DeleteMoby(moby);
      }
    }
    else if (bVar10 == 3) {
      mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar1 + 0x70));
      if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x01', moby->animationId != '\0')) {
        mobyutil::MB_SetAnimation(lVar6,0,0,(int)(animationSpeed * 20.5));
      }
    }
    else if (bVar10 == 2) {
      if ((moby->field43_0x70 & 2U) == 0) {
        dVar14 = (double)mobyfunc::BlendAnimFrame(moby);
        if (dVar14 == 12.0) {
          auVar16 = ZEXT416(0);
          auVar18 = loadVectorLeftIndexed(0x10,0x40a4a0);
          auVar18 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
          auVar19 = loadVectorLeftIndexed((ulonglong)(byte)moby->levelFlagIdx << 2,0xa0fcd4);
          auVar22 = vectorCompareGreaterThanSignedWord(auVar19,auVar18);
          auVar19 = vectorConditionalSelect(auVar19,auVar18,auVar22);
          auVar18 = ZEXT416(0xf);
          auVar22 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
          auVar18 = ZEXT416(0xfffffff0);
          auVar20 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
          auVar18 = vectorRotateLeftIntegerWord(auVar22,auVar20);
          auVar22 = vectorMultiplyOddUnsignedHalfWord(auVar19,auVar22);
          auVar18 = vectorMultiplySumSignedHalfWordModulo
                              (auVar19,auVar18,
                               auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60);
          auVar16 = loadVectorLeftIndexed(4,0x40a4a0);
          auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar23 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
          auVar18 = vectorShiftLeftIntegerWord(auVar18,auVar20);
          auVar16 = ZEXT416(0xffffffff);
          auVar20 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
          auVar16._0_4_ = auVar18._0_4_ + auVar22._0_4_;
          auVar16._8_8_ = auVar18._8_8_;
          auVar16._4_4_ = auVar18._4_4_ + auVar22._4_4_;
          auVar19._0_8_ = auVar16._0_8_;
          auVar19._12_4_ = auVar18._12_4_;
          auVar19._8_4_ = auVar18._8_4_ + auVar22._8_4_;
          auVar18._0_12_ = auVar19._0_12_;
          auVar18._12_4_ = auVar19._12_4_ + auVar22._12_4_;
          auVar22 = vectorShiftLeftIntegerWord(auVar20,auVar20);
          auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar16 = vectorConvertFromSignedFixedPointWord(auVar18,0);
          auVar24 = loadVectorLeftIndexed(0xd4,uVar12);
          auVar18 = loadVectorRightIndexed(0xe4,uVar12);
          auVar24 = auVar24 | auVar18;
          auVar16 = vectorAddFloatingPoint(auVar16,auVar23);
          auVar18 = vectorMultiplyAddFloatingPoint(auVar19,auVar16,auVar22);
          auVar16 = ZEXT416(0xffffffff);
          auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
          auVar21 = vectorShiftLeftIntegerWord(auVar16,auVar16);
          auVar16 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
          auVar22._0_4_ = auVar24._0_4_ + auVar16._0_4_;
          auVar22._8_8_ = auVar16._8_8_;
          auVar22._4_4_ = auVar24._4_4_ + auVar16._4_4_;
          auVar20._0_8_ = auVar22._0_8_;
          auVar20._12_4_ = auVar16._12_4_;
          auVar20._8_4_ = auVar24._8_4_ + auVar16._8_4_;
          auVar17._0_12_ = auVar20._0_12_;
          auVar17._12_4_ = auVar24._12_4_ + auVar20._12_4_;
          auVar16 = vectorConvertFromSignedFixedPointWord(auVar17,0);
          auVar16 = vectorAddFloatingPoint(auVar16,auVar23);
          auVar16 = vectorMultiplyAddFloatingPoint(auVar19,auVar16,auVar21);
          auVar16 = vectorConvertToSignedFixedPointWordSaturate(auVar16,0);
          auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar2 = storeVectorElementWordIndexed
                            (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0xd8,
                             uVar12);
          *(undefined4 *)((int)pvVar1 + 0xd8U & 0xfffffffc) = uVar2;
          iVar7 = mobyupdate_helpers::M668_0040a078(lVar6);
          if (iVar7 != 0) {
            if (-1 < *(int *)((int)pvVar1 + 0xe0)) {
              *(int *)((int)MobyInstance[*(int *)((int)pvVar1 + 0xe0)].pVar + 0x14c) =
                   *(int *)((int)MobyInstance[*(int *)((int)pvVar1 + 0xe0)].pVar + 0x14c) + 1;
            }
            FUN_003d0b20(iVar7,local_60,local_70);
          }
        }
      }
      else {
        moby->state = '\x01';
        if (moby->animationId != '\0') {
          mobyutil::MB_SetAnimation(lVar6,0,0,(int)(animationSpeed * 10.5));
        }
      }
    }
    else if (bVar10 == 1) {
      iVar7 = fastfunc::FastDecTimerS32(uVar12 + 0xd8);
      if (iVar7 != 0) {
        iVar7 = mobyupdate_helpers::M668_0040a078(lVar6);
        if (iVar7 == 0) {
          auVar16 = ZEXT416(0xffffffff);
          auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
          auVar19 = vectorShiftLeftIntegerWord(auVar16,auVar16);
          auVar16 = loadVectorLeftIndexed(0xd4,uVar12);
          auVar18 = loadVectorRightIndexed(0xe4,uVar12);
          auVar18 = vectorConvertFromSignedFixedPointWord(auVar16 | auVar18,0);
          auVar16 = loadVectorLeftIndexed(4,0x40a4a0);
          auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar16 = vectorAddFloatingPoint
                              (auVar18,auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60
                              );
          auVar16 = vectorMultiplyAddFloatingPoint(auVar22,auVar16,auVar19);
          auVar16 = vectorConvertToSignedFixedPointWordSaturate(auVar16,0);
          auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar2 = storeVectorElementWordIndexed
                            (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0xd8,
                             uVar12);
          *(undefined4 *)((int)pvVar1 + 0xd8U & 0xfffffffc) = uVar2;
        }
        else {
          moby->state = '\x02';
          if (moby->animationId != '\x01') {
            mobyutil::MB_SetAnimation(lVar6,1,0,(int)(animationSpeed * 10.5));
          }
        }
      }
    }
    else if (bVar10 == 0) {
      sVar9 = *(short *)&moby->field76_0xb4 -
              *(short *)(&DAT_00a0e31e + (uint)(byte)moby->field74_0xb1 * 4);
      *(short *)&moby->field76_0xb4 = sVar9;
      if (sVar9 < 1) {
        moby->field76_0xb4 = '\0';
        moby->field77_0xb5 = '\x01';
      }
      auVar16 = ZEXT416(0xffffffff);
      auVar19 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
      moby->state = '\x01';
      auVar16 = loadVectorLeftIndexed(0xd4,uVar12);
      auVar18 = loadVectorRightIndexed(0xe4,uVar12);
      *(undefined4 *)((int)pvVar1 + 0x20) = 0x40400000;
      auVar19 = vectorShiftLeftIntegerWord(auVar19,auVar19);
      *(undefined2 *)((int)pvVar1 + 0x24) = 3;
      *(undefined1 *)((int)pvVar1 + 0x2e) = 1;
      auVar18 = vectorConvertFromSignedFixedPointWord(auVar16 | auVar18,0);
      auVar16 = loadVectorLeftIndexed(4,0x40a4a0);
      auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      iVar7 = *(int *)((int)pvVar1 + 0xe0);
      auVar16 = vectorAddFloatingPoint
                          (auVar18,auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60);
      auVar16 = vectorMultiplyAddFloatingPoint(auVar22,auVar16,auVar19);
      auVar16 = vectorConvertToSignedFixedPointWordSaturate(auVar16,0);
      auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar2 = storeVectorElementWordIndexed
                        (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0xd8,uVar12);
      *(undefined4 *)((int)pvVar1 + 0xd8U & 0xfffffffc) = uVar2;
      if (-1 < iVar7) {
        *(int *)((int)MobyInstance[iVar7].pVar + 0x150) =
             *(int *)((int)MobyInstance[iVar7].pVar + 0x150) + 1;
      }
    }
  }
  return;
}



//==== 0040ac0c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M669_0040ac0c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M669_0040ac0c(void)

{
  DAT_00854f1c = 0x10000;
  return;
}



//==== 0040ac50  ns=mobyupdate_unsorted  size=0x6a4
// sig: undefined UpdateMoby_669(MobyInstance * moby)
// callers(0): 
// callees(18): 00057820 collproc::CollLine; 0006d720 RegisterFuncForMoby; 0007d118 hero::Hero_IsSwimming; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe610 mobyutil::MB_SphericalToVector; 0010a788 mobyutil::MB_NormalizeMtx3Columns; 00131100 partupd::SpawnPart_60; 00500b64 fastfunc::FastEulerToMtx; 00500f6c fastfunc::FastMtxCopyNoTranslate; 00502578 fastfunc::FastWrapRot; 00502648 fastfunc::FastAddRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 00502910 fastfunc::FastCheckBsphereInView; 00502a64 fastfunc::FastVecSub; 00502b08 fastfunc::FastVecAddSelf; 005c8318 rand
// strings: 0040ac44: '?fffA ' (raw)

/* Moby 669 */

void mobyupdate_unsorted::UpdateMoby_669(MobyInstance *moby)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar7;
  int iVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float local_1b0 [4];
  undefined1 local_1a0 [16];
  undefined1 auStack_190 [16];
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  float local_160;
  float local_15c;
  float local_158;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [48];
  undefined1 auStack_110 [48];
  undefined1 local_e0 [64];
  
  lVar6 = (longlong)(int)moby;
  pfVar1 = (float *)moby->pVar;
  iVar8 = hero::Hero_IsSwimming();
  if (iVar8 != 0) {
    if (moby->state == 0) {
      moby->updateDistance = -1;
      moby->state = '\x01';
      pfVar1[1] = *pfVar1 * DAT_00854f40 * 0.017453292 * mobyutil::g_FrameTime;
    }
    else if (moby->state < 2) {
      dVar18 = (double)fastfunc::FastWrapRot((moby->rotation).x,pfVar1[1]);
      (moby->rotation).x = (float)dVar18;
      RegisterFuncForMoby(&PTR_M669_0040b310_0070df38,moby);
    }
    dVar18 = 0.0;
    dVar19 = 1.0;
    fastfunc::FastEulerToMtx(auStack_110,lVar6 + 0x40);
    mobyutil::MB_NormalizeMtx3Columns(auStack_110);
    fastfunc::FastMtxCopyNoTranslate(local_e0,auStack_110);
    iVar8 = 0;
    do {
      iVar11 = 0;
      do {
        dVar13 = (double)fastfunc::FastIntToDouble(iVar11);
        dVar17 = 0.01745329238474369;
        dVar20 = 0.5;
        dVar13 = (double)fastfunc::FastAddRots
                                   ((float)((double)(DAT_00854f48 * 0.017453292) * dVar13) * 0.5);
        dVar16 = -(double)(float)((double)DAT_00854f48 * dVar17 - dVar13);
        dVar17 = (double)(float)((double)DAT_00854f44 * dVar17);
        dVar13 = (double)fastfunc::FastIntToDouble(iVar8);
        dVar13 = (double)fastfunc::FastAddRots((float)(dVar13 * 2.094395160675049));
        dVar13 = (double)fastfunc::FastWrapRot((float)dVar17,(float)dVar13);
        dVar13 = (double)fastfunc::FastWrapRot((float)dVar13,(float)dVar16);
        mobyutil::MB_SphericalToVector(DAT_00854f4c,1.5707964,(float)dVar13,local_1b0);
        lVar12 = lVar6 + 0x10;
        fastfunc::FastVecAddSelf(auStack_190,local_1b0,lVar12);
        fVar2 = (moby->pos).y - g_heroPosition.y;
        fVar3 = (moby->pos).x - g_heroPosition.x;
        fVar4 = (moby->pos).z - g_heroPosition.z;
        if (SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) < 30.0) {
          collproc::CollLine(lVar12,local_1b0,9,lVar6,auStack_140);
        }
        iVar9 = fastfunc::FastCheckBsphereInView(0x4034000000000000,local_1a0);
        if ((iVar9 != -1) && (((iVar11 == 0 || (iVar11 == 4)) && (iVar9 = 0, 0 < DAT_00854f50)))) {
          dVar13 = 0.8999999761581421;
          dVar16 = 10.0;
          do {
            uVar10 = rand();
            dVar17 = -1.0;
            if ((uVar10 & 1) != 0) {
              dVar17 = dVar19;
            }
            dVar14 = (double)mobyutil::MB_randRangeFloat
                                       ((float)((double)DAT_00854f58 * dVar20),DAT_00854f58);
            lVar7 = fastfunc::FastDoubleToInt((double)(float)(dVar14 * (double)animationSpeed));
            fastfunc::FastVecSub(&local_160,local_1b0,lVar12);
            dVar15 = (double)SQRT((float)((double)local_158 * dVar17) *
                                  (float)((double)local_158 * dVar17) +
                                  (float)((double)local_160 * dVar17) *
                                  (float)((double)local_160 * dVar17) +
                                  (float)((double)local_15c * dVar17) *
                                  (float)((double)local_15c * dVar17));
            mobyutil::MB_randRangeFloat((float)dVar18,(float)dVar13);
            fastfunc::FastVecAddSelf(auStack_150,local_180,local_170);
            dVar14 = (double)(float)((double)mobyutil::g_FrameTime * dVar16);
            dVar17 = (double)fastfunc::FastIntToDouble
                                       ((int)(lVar7 + (lVar7 + -1 >> 0x3f & 1U - lVar7)) * 4);
            mobyutil::MB_randRangeFloat((float)dVar14,(float)(dVar15 / dVar17));
            uVar5 = DAT_00854f5c;
            dVar17 = (double)DAT_00854f54;
            mobyutil::MB_randInt(0xff);
            partupd::SpawnPart_60(dVar17,local_180,local_170,uVar5);
            iVar9 = iVar9 + 1;
          } while (iVar9 < DAT_00854f50);
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < 5);
      iVar8 = iVar8 + 1;
    } while (iVar8 < 3);
  }
  return;
}



//==== 0040b310  ns=mobyupdate_helpers  size=0x360
// sig: undefined M669_0040b310(void)
// callers(0): 
// callees(10): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 000fe610 mobyutil::MB_SphericalToVector; 00500ca4 fastfunc::FastEulerToMtx1; 00502648 fastfunc::FastAddRots; 00502730 fastfunc::FastIntToDouble; 00502798 fastfunc::FastFMod; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M669_0040b310(int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float *pfVar9;
  longlong lVar10;
  ulonglong unaff_r19;
  int iVar11;
  ulonglong unaff_r20;
  int iVar12;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  longlong lVar13;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  longlong lVar14;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  int iVar15;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  longlong lVar16;
  ulonglong in_LR;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar21;
  ulonglong in_f26;
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
  
  uVar7 = ZEXT48(&stack0x00000000);
  lVar1 = uVar7 - 0x210;
  puVar6 = (ulonglong *)lVar1;
  *puVar6 = uVar7;
  puVar6[0x44] = in_LR;
  puVar6[0x3a] = in_f24;
  puVar6[0x3b] = in_f25;
  puVar6[0x3c] = in_f26;
  puVar6[0x3d] = in_f27;
  puVar6[0x3e] = in_f28;
  puVar6[0x3f] = in_f29;
  puVar6[0x40] = in_f30;
  puVar6[0x41] = in_f31;
  puVar6[0x39] = unaff_r31;
  puVar6[0x36] = unaff_r28;
  uVar2 = worldUpdateTime;
  puVar6[0x38] = unaff_r30;
  puVar6[0x37] = unaff_r29;
  puVar6[0x35] = unaff_r27;
  puVar6[0x34] = unaff_r26;
  puVar6[0x33] = unaff_r25;
  puVar6[0x32] = unaff_r24;
  puVar6[0x31] = unaff_r23;
  puVar6[0x30] = unaff_r22;
  puVar6[0x2f] = unaff_r21;
  puVar6[0x2e] = unaff_r20;
  puVar6[0x2d] = unaff_r19;
  dVar18 = (double)fastfunc::FastIntToDouble(uVar2);
  dVar18 = (double)fastfunc::FastFMod((double)(float)((double)(DAT_00855014 * mobyutil::g_FrameTime)
                                                     * dVar18),0x3ff0000000000000);
  fastfunc::FastEulerToMtx1(uVar7 - 0x1a0,param_1 + 0x40);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar6 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)puVar6 + 0xa4) = uVar2;
  *(undefined4 *)(puVar6 + 0x15) = uVar3;
  *(undefined4 *)((int)puVar6 + 0xac) = 0x3f800000;
  uVar8 = draw::GetEffectTex(0x28);
  puVar6[0x25] = uVar8;
  uVar8 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar6[0x26] = uVar8;
  uVar8 = FUN_00502f08(0,0,0,0,0,0);
  puVar6[0x24] = uVar8;
  uVar8 = idol_draw::PackCmd(DAT_010cc1f0,DAT_00854f60,DAT_010cc1f4,DAT_00854f64,0x80);
  iVar15 = 0;
  puVar6[0x27] = uVar8;
  lVar16 = lVar1;
  do {
    pfVar9 = (float *)&DAT_00854f74;
    lVar17 = 4;
    lVar10 = lVar1;
    do {
      *(undefined4 *)(puVar6 + 0x28) = 0x3f800000;
      *(undefined4 *)((int)puVar6 + 0x144) = 0xbf20d97c;
      fVar4 = *pfVar9;
      pfVar9 = pfVar9 + 2;
      *(float *)((int)lVar10 + 0x104) =
           (float)((double)*(float *)((int)lVar16 + 0x140) * dVar18 + (double)fVar4);
      lVar10 = lVar10 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    dVar23 = -0.01745329238474369;
    dVar24 = 0.01745329238474369;
    dVar25 = 1.5707963705062866;
    iVar11 = 0;
    dVar26 = 2.094395160675049;
    do {
      iVar12 = 0;
      lVar14 = uVar7 - 0x160;
      pfVar9 = (float *)&DAT_00854f70;
      lVar10 = lVar1;
      lVar17 = lVar1;
      lVar13 = lVar1;
      do {
        *(undefined4 *)(puVar6 + 0x29) = 0x3f800000;
        *(undefined4 *)((int)puVar6 + 0x14c) = 0x3f20d97c;
        dVar19 = (double)DAT_00854f48;
        fVar4 = *pfVar9;
        fVar5 = *(float *)((int)lVar16 + 0x148);
        *(undefined4 *)(puVar6 + 0x2a) = 0;
        *(undefined4 *)((int)puVar6 + 0x15c) = 0;
        *(float *)((int)puVar6 + 0x154) = (float)(dVar19 * dVar23);
        *(float *)(puVar6 + 0x2b) = (float)(dVar19 * dVar24);
        *(float *)((int)lVar10 + 0x100) = (float)((double)fVar5 * dVar18 + (double)fVar4);
        dVar19 = (double)DAT_00854f44;
        dVar22 = (double)*(float *)((int)lVar17 + 0x150);
        fVar4 = 0.0;
        if (iVar12 != 0) {
          fVar4 = DAT_00854f4c;
        }
        dVar21 = (double)fVar4;
        dVar20 = (double)fastfunc::FastIntToDouble(iVar11);
        dVar19 = (double)fastfunc::FastAddRots
                                   ((float)(dVar20 * dVar26 +
                                           (double)(float)(dVar19 * dVar24 + dVar22)));
        mobyutil::MB_SphericalToVector((float)dVar21,(float)dVar25,(float)dVar19,(float *)lVar14);
        iVar12 = iVar12 + 1;
        *(undefined4 *)((int)lVar13 + 0xbc) = 0x3f800000;
        uVar3 = EffectTexHeaders;
        uVar2 = DAT_00855010;
        pfVar9 = pfVar9 + 2;
        lVar14 = lVar14 + 0x10;
        lVar10 = lVar10 + 8;
        lVar17 = lVar17 + 4;
        lVar13 = lVar13 + 0x10;
      } while (iVar12 < 4);
      *(undefined4 *)((int)puVar6 + 0xfc) = DAT_00855010;
      *(undefined4 *)(puVar6 + 0x1f) = uVar2;
      *(undefined4 *)((int)puVar6 + 0xf4) = uVar2;
      *(undefined4 *)(puVar6 + 0x1e) = uVar2;
      draw::FastDrawQuad(uVar7 - 0x160,uVar7 - 0x1a0,0,uVar3,9);
      iVar11 = iVar11 + 1;
    } while (iVar11 < 3);
    iVar15 = iVar15 + 1;
    lVar16 = lVar16 + 4;
  } while (iVar15 < 2);
  return;
}



//==== 0040b670  ns=mobyupdate_helpers  size=0x14
// sig: undefined M669_0040b670(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M669_0040b670(void)

{
  DAT_00855064 = 0x10000;
  return;
}



//==== 0040b6b0  ns=mobyupdate_unsorted  size=0x688
// sig: undefined UpdateMoby_67(MobyInstance * moby)
// callers(0): 
// callees(4): 00110b70 mobyutil::MB_IsPntInCuboid; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 005023f0 fastfunc::FastVecAdd

/* Moby 67 */

void mobyupdate_unsorted::UpdateMoby_67(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  ushort uVar3;
  f32 *pfVar4;
  uint uVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  int iVar10;
  ulonglong uVar9;
  f32 fVar11;
  undefined1 local_50 [16];
  f32 local_40;
  f32 local_3c;
  f32 local_38;
  f32 local_34;
  f32 local_30;
  f32 local_2c;
  f32 local_28;
  f32 local_24;
  
  uVar1 = moby->state;
  pfVar4 = (f32 *)moby->pVar;
  if (uVar1 == '\x04') {
    fVar11 = pfVar4[8];
    uVar9 = (ulonglong)(uint)fVar11;
    if ((sound::g_SoundChannels[(int)fVar11].pMoby != moby) ||
       (sound::g_SoundChannels[(int)fVar11].state == '\0')) {
      fVar11 = (f32)sound::PlayMobySound(0,4,moby);
      uVar9 = (ulonglong)(int)fVar11;
      pfVar4[8] = fVar11;
    }
    fVar2 = -(pfVar4[9] * 1.6666666 * mobyutil::g_FrameTime - pfVar4[6]);
    pfVar4[6] = fVar2;
    if (fVar2 < 0.0) {
      if ((((int)uVar9 != -1) &&
          (iVar10 = (int)(uVar9 << 7) - (int)(uVar9 << 4),
          *(MobyInstance **)((int)sound::g_SoundChannels + iVar10 + 0x18) == moby)) &&
         (*(char *)((int)sound::g_SoundChannels + iVar10 + 4) != '\0')) {
        sound::sound_Kill((int)uVar9);
      }
      pfVar4[6] = 0.0;
      pfVar4[8] = -NAN;
      moby->state = '\x01';
    }
    fastfunc::FastVecAdd(&local_30,pfVar4,local_50);
    (moby->pos).x = local_30;
    (moby->pos).y = local_2c;
    (moby->pos).z = local_28;
    (moby->pos).w = local_24;
    iVar10 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar4[4]);
    if ((iVar10 != 0) ||
       (iVar10 = mobyutil::MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)(int)pfVar4[4]),
       iVar10 != 0)) {
      moby->state = '\x02';
    }
  }
  else if (uVar1 == '\x03') {
    iVar10 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar4[5]);
    if ((iVar10 == 0) &&
       (iVar10 = mobyutil::MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)(int)pfVar4[5]),
       iVar10 == 0)) {
      moby->state = '\x04';
    }
  }
  else if (uVar1 == '\x02') {
    fVar11 = pfVar4[8];
    uVar9 = (ulonglong)(uint)fVar11;
    if ((sound::g_SoundChannels[(int)fVar11].pMoby != moby) ||
       (sound::g_SoundChannels[(int)fVar11].state == '\0')) {
      fVar11 = (f32)sound::PlayMobySound(0,4,moby);
      uVar9 = (ulonglong)(int)fVar11;
      pfVar4[8] = fVar11;
    }
    fVar2 = pfVar4[9];
    fVar6 = fVar2 * 1.6666666 * mobyutil::g_FrameTime + pfVar4[6];
    pfVar4[6] = fVar6;
    if (fVar2 < fVar6) {
      if ((((int)uVar9 != -1) &&
          (iVar10 = (int)(uVar9 << 7) - (int)(uVar9 << 4),
          *(MobyInstance **)((int)sound::g_SoundChannels + iVar10 + 0x18) == moby)) &&
         (*(char *)((int)sound::g_SoundChannels + iVar10 + 4) != '\0')) {
        sound::sound_Kill((int)uVar9);
        fVar2 = pfVar4[9];
      }
      pfVar4[8] = -NAN;
      pfVar4[6] = fVar2;
      if ((pfVar4[7] == -NAN) && (pfVar4[10] == 0.0)) {
        moby->state = '\x03';
      }
      else {
        uVar3 = moby->uid;
        iVar8 = (int)((longlong)((int)(short)uVar3 >> 5) << 2);
        iVar10 = (int)((longlong)((int)(short)uVar3 >> 5) << 2);
        uVar5 = *(uint *)(&DAT_00a54dd0 + iVar10);
        *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar8) =
             *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar8) | 1 << (uVar3 & 0x1f);
        *(uint *)(&DAT_00a54dd0 + iVar10) = uVar5 | 1 << (uVar3 & 0x1f);
        moby->state = '\x05';
      }
    }
    fastfunc::FastVecAdd(&local_40,pfVar4,local_50);
    (moby->pos).x = local_40;
    (moby->pos).y = local_3c;
    (moby->pos).z = local_38;
    (moby->pos).w = local_34;
  }
  else if (uVar1 == '\x01') {
    bVar7 = false;
    fVar11 = pfVar4[7];
    pfVar4[6] = 0.0;
    if (fVar11 != -NAN) {
      if ((MobyInstance[(int)fVar11].oClass == UNDERWATER_RING) &&
         (MobyInstance[(int)fVar11].state == '\x04')) {
        bVar7 = true;
      }
      else if ((MobyInstance[(int)fVar11].oClass == CODEBOT_SLOT) &&
              (MobyInstance[(int)fVar11].state == '\x04')) {
        bVar7 = true;
      }
    }
    if ((pfVar4[10] != 0.0) &&
       ((uVar3 = moby->uid, (&DAT_00a545c4)[(short)uVar3] != '\0' ||
        ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar3 >> 5) << 2))
         & 1 << (uVar3 & 0x1f)) != 0)))) {
      bVar7 = true;
    }
    iVar10 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar4[4]);
    if (iVar10 != 0 || bVar7) {
      moby->state = '\x02';
    }
  }
  else if (uVar1 == '\0') {
    *pfVar4 = (moby->pos).x;
    pfVar4[1] = (moby->pos).y;
    pfVar4[2] = (moby->pos).z;
    pfVar4[3] = (moby->pos).w;
    moby->state = '\x01';
  }
  return;
}



//==== 0040bd38  ns=mobyupdate_helpers  size=0x14
// sig: undefined M670_0040bd38(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M670_0040bd38(void)

{
  DAT_008550dc = 0x10000;
  return;
}



//==== 0040bd50  ns=mobyupdate_helpers  size=0x3cc
// sig: undefined M670_0040bd50(void)
// callers(1): 0040c11c mobyupdate_unsorted::UpdateMoby_670
// callees(4): 00500ca4 fastfunc::FastEulerToMtx1; 005010c0 fastfunc::FastNormalizeRMtx4; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

void mobyupdate_helpers::M670_0040bd50
               (undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
               undefined8 param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
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
  
  iVar5 = *(int *)(param_3 + 0x78);
  if ((g_standingOnMoby == param_3) && (g_framesNotGrounded == 0)) {
    dVar12 = (double)fastfunc::FastDiffRots(param_2,param_1);
    dVar12 = (double)fastfunc::FastWrapRot(g_heroRotation.z,(float)dVar12);
    g_heroRotation.z = (float)dVar12;
    fastfunc::FastNormalizeRMtx4(&local_d0,param_3 + 0xc0);
    fastfunc::FastEulerToMtx1(&local_90,param_3 + 0x40);
    if (hero::g_heroStateType == 0) {
      fVar1 = *(float *)(iVar5 + 0x170);
      fVar2 = *(float *)(iVar5 + 0x174);
      fVar3 = *(float *)(iVar5 + 0x178);
      fVar4 = *(float *)(iVar5 + 0x17c);
      if (DAT_00969e7c < 2) {
        fVar4 = g_heroPosition.x - *(float *)(param_3 + 0x10);
        *(float *)(iVar5 + 0x170) = fVar4;
        fVar6 = g_heroPosition.y - *(float *)(param_3 + 0x14);
        *(float *)(iVar5 + 0x174) = fVar6;
        fVar7 = g_heroPosition.z - *(float *)(param_3 + 0x18);
        *(float *)(iVar5 + 0x178) = fVar7;
        fVar8 = g_heroPosition.w;
        *(float *)(iVar5 + 0x17c) = g_heroPosition.w;
        fVar1 = local_a0 * fVar8 + local_b0 * fVar7 + local_d0 * fVar4 + local_c0 * fVar6;
        fVar2 = local_9c * fVar8 + local_ac * fVar7 + local_cc * fVar4 + local_bc * fVar6;
        fVar3 = local_98 * fVar8 + local_a8 * fVar7 + local_c8 * fVar4 + local_b8 * fVar6;
        fVar4 = local_94 * fVar8 + local_a4 * fVar7 + local_c4 * fVar4 + local_b4 * fVar6;
        *(float *)(iVar5 + 0x170) = fVar1;
        *(float *)(iVar5 + 0x174) = fVar2;
        *(float *)(iVar5 + 0x178) = fVar3;
        *(float *)(iVar5 + 0x17c) = fVar4;
      }
      fVar9 = local_60 * fVar4 + local_70 * fVar3 + local_90 * fVar1 + local_80 * fVar2 +
              *(float *)(param_3 + 0x10);
      fVar8 = local_5c * fVar4 + local_6c * fVar3 + local_8c * fVar1 + local_7c * fVar2 +
              *(float *)(param_3 + 0x14);
      fVar11 = local_58 * fVar4 + local_68 * fVar3 + local_88 * fVar1 + local_78 * fVar2 +
               *(float *)(param_3 + 0x18);
      fVar6 = g_heroPosition.y;
      fVar7 = g_heroPosition.x;
      fVar10 = g_heroPosition.z;
    }
    else {
      fVar6 = g_heroPosition.y - *(float *)(param_3 + 0x14);
      fVar7 = g_heroPosition.x - *(float *)(param_3 + 0x10);
      fVar10 = g_heroPosition.z - *(float *)(param_3 + 0x18);
      fVar2 = local_9c * g_heroPosition.w + local_ac * fVar10 + local_cc * fVar7 + local_bc * fVar6;
      fVar1 = local_a0 * g_heroPosition.w + local_b0 * fVar10 + local_d0 * fVar7 + local_c0 * fVar6;
      fVar3 = local_98 * g_heroPosition.w + local_a8 * fVar10 + local_c8 * fVar7 + local_b8 * fVar6;
      fVar4 = local_94 * g_heroPosition.w + local_a4 * fVar10 + local_c4 * fVar7 + local_b4 * fVar6;
      fVar9 = local_60 * fVar4 + local_70 * fVar3 + local_90 * fVar1 + local_80 * fVar2;
      fVar8 = local_5c * fVar4 + local_6c * fVar3 + local_8c * fVar1 + local_7c * fVar2;
      fVar11 = local_58 * fVar4 + local_68 * fVar3 + local_88 * fVar1 + local_78 * fVar2;
    }
    DAT_00969dd0 = (fVar9 - fVar7) + *param_6;
    DAT_00969dd4 = (fVar8 - fVar6) + param_6[1];
    DAT_00969ddc = local_54 * fVar4 + local_64 * fVar3 + local_84 * fVar1 + local_74 * fVar2;
    DAT_00969dd8 = (fVar11 - fVar10) + param_6[2];
  }
  return;
}



//==== 0040c11c  ns=mobyupdate_unsorted  size=0x1d4
// sig: undefined UpdateMoby_670(MobyInstance * moby)
// callers(0): 
// callees(4): 000f1114 mobyfunc::GetBonePosition; 003a82b8 mobyupdate_unsorted::UpdateMoby_a_lot_10; 0040bd50 mobyupdate_helpers::M670_0040bd50; 00500ca4 fastfunc::FastEulerToMtx1

/* Moby 670 */

void mobyupdate_unsorted::UpdateMoby_670(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  int iVar6;
  MobyInstance *pMVar7;
  f32 fVar8;
  longlong lVar9;
  double dVar10;
  float local_90;
  float local_8c;
  float local_88;
  f32 local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  
  lVar9 = (longlong)(int)moby;
  if ((moby != (MobyInstance *)0x0) && (pvVar5 = moby->pVar, pvVar5 != (void *)0x0)) {
    dVar10 = (double)(moby->rotation).z;
    UpdateMoby_a_lot_10(moby);
    pMVar7 = MobyInstance;
    if ((*(int *)((int)pvVar5 + 0x158) == 0x3039) &&
       (iVar6 = *(int *)((int)pvVar5 + 0x150), iVar6 != -1)) {
      fVar1 = (moby->pos).x;
      fVar2 = (moby->pos).y;
      fVar3 = (moby->pos).z;
      fVar8 = (moby->pos).w;
      if (*(int *)((int)pvVar5 + 0x154) != -1) {
        mobyfunc::GetBonePosition(lVar9,*(int *)((int)pvVar5 + 0x154),&local_90);
        fVar1 = local_90;
        fVar2 = local_8c;
        fVar3 = local_88;
        fVar8 = local_84;
      }
      local_84 = fVar8;
      local_88 = fVar3;
      local_8c = fVar2;
      local_90 = fVar1;
      fastfunc::FastEulerToMtx1(&local_80,lVar9 + 0x40);
      fVar1 = *(float *)((int)pvVar5 + 0x164);
      fVar2 = *(float *)((int)pvVar5 + 0x160);
      fVar3 = *(float *)((int)pvVar5 + 0x168);
      fVar4 = *(float *)((int)pvVar5 + 0x16c);
      pMVar7[iVar6].pos.x =
           local_90 + local_50 * fVar4 + local_60 * fVar3 + local_80 * fVar2 + local_70 * fVar1;
      pMVar7[iVar6].pos.y =
           local_8c + local_4c * fVar4 + local_5c * fVar3 + local_7c * fVar2 + local_6c * fVar1;
      pMVar7[iVar6].pos.z =
           local_88 + local_48 * fVar4 + local_58 * fVar3 + local_78 * fVar2 + local_68 * fVar1;
      pMVar7[iVar6].pos.w = local_84;
    }
    mobyupdate_helpers::M670_0040bd50(dVar10,(double)(moby->rotation).z,lVar9);
  }
  return;
}



//==== 0040c2f0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M671_0040c2f0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M671_0040c2f0(void)

{
  DAT_0085514c = 0x10000;
  return;
}



//==== 0040c310  ns=mobyupdate_helpers  size=0xc0
// sig: undefined M671_0040c310(void)
// callers(1): 0040c3f0 mobyupdate_helpers::M671_0040c3f0
// callees(2): 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

double mobyupdate_helpers::M671_0040c310(double param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = (double)(float)(param_1 * 8.0);
  uVar1 = fastfunc::FastDoubleToInt(dVar4);
  dVar3 = (double)fastfunc::FastIntToDouble();
  iVar2 = uVar1 + (((int)uVar1 >> 3) + (uint)((int)uVar1 < 0 && (uVar1 & 7) != 0)) * -8;
  uVar1 = iVar2 + 1;
  return (double)(*(float *)(param_2 + iVar2 * 4 + 0x90) * (1.0 - (float)(dVar4 - dVar3)) +
                 *(float *)(param_2 + (uVar1 + (((int)uVar1 >> 3) +
                                               (uint)((int)uVar1 < 0 && (uVar1 & 7) != 0)) * -8) * 4
                           + 0x90) * (float)(dVar4 - dVar3));
}



//==== 0040c3f0  ns=mobyupdate_helpers  size=0x161c
// sig: undefined M671_0040c3f0(void)
// callers(0): 
// callees(22): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 0010de78 mobyutil::MB_WrapRot; 00126dd8 partupd::SpawnPart_22; 0012df70 partupd::SpawnPart_43; 0040c310 mobyupdate_helpers::M671_0040c310; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 00500ca4 fastfunc::FastEulerToMtx1; 005026dc fastfunc::FastFrac; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0; 005e7f98 FUN_005e7f98; 005e8078 mathfunc::cosf; 005e8128 FUN_005e8128; 005e825c FUN_005e825c; 005e8f4c FUN_005e8f4c

void mobyupdate_helpers::M671_0040c3f0(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  byte bVar7;
  byte bVar8;
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
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float *pfVar24;
  undefined2 uVar25;
  ulonglong *puVar26;
  undefined8 *puVar27;
  int iVar28;
  ulonglong uVar29;
  undefined8 *puVar30;
  longlong lVar31;
  uint uVar33;
  undefined8 uVar32;
  float *pfVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  uint uVar41;
  int iVar42;
  float *pfVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  int iVar46;
  int iVar47;
  ulonglong uVar48;
  longlong lVar49;
  int iVar51;
  ulonglong uVar50;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double extraout_f1;
  double extraout_f1_00;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  double dVar67;
  double dVar68;
  double dVar69;
  double dVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar74;
  
  uVar29 = ZEXT48(&stack0x00000000);
  puVar26 = (ulonglong *)(uVar29 - 0x4f0);
  *puVar26 = uVar29;
  if (param_1 != 0) {
    pfVar24 = *(float **)(param_1 + 0x78);
    uVar45 = ZEXT48(pfVar24);
    if (pfVar24 != (float *)0x0) {
      bVar1 = *(byte *)((int)pfVar24 + 9);
      bVar2 = *(byte *)(pfVar24 + 2);
      uVar38 = (ulonglong)bVar2;
      puVar26[0x70] = uVar38;
      *(ulonglong **)(puVar26 + 0x5e) = puVar26;
      puVar26[0x72] = uVar38 + 1;
      lVar31 = -(((longlong)(int)(uint)bVar1 * (longlong)(int)(uint)bVar2 + uVar38 +
                 (ulonglong)bVar1 + 1) * 0x10 + 0x80);
      uVar38 = (uVar29 - 0x4f0) + lVar31;
      *(ulonglong *)((int)puVar26 + (int)lVar31) = *puVar26;
      puVar27 = (undefined8 *)uVar38;
      dVar52 = (double)fastfunc::FastIntToDouble(*(undefined1 *)(pfVar24 + 2));
      dVar56 = 1.0;
      uVar3 = *(undefined1 *)((int)pfVar24 + 9);
      puVar26[100] = (ulonglong)(double)(float)(1.0 / dVar52);
      dVar52 = (double)fastfunc::FastIntToDouble(uVar3);
      lVar31 = -(((ulonglong)*(byte *)(pfVar24 + 2) + 1) * 4 + 0x8f & 0xfffffffffffffff0);
      uVar39 = (uVar38 & 0xffffffff) + lVar31;
      uVar38 = uVar39 & 0xffffffff;
      *(undefined8 *)((int)puVar27 + (int)lVar31) = *puVar27;
      puVar30 = (undefined8 *)uVar39;
      lVar31 = -(((ulonglong)*(byte *)((int)pfVar24 + 9) + 1) * 4 + 0x8f & 0xfffffffffffffff0);
      uVar40 = uVar38 + lVar31;
      uVar39 = uVar40 & 0xffffffff;
      *(undefined8 *)((int)puVar30 + (int)lVar31) = *puVar30;
      iVar51 = DAT_0159c330;
      puVar26[99] = (ulonglong)(double)(float)(dVar56 / dVar52);
      dVar52 = (double)fastfunc::FastIntToDouble(iVar51);
      iVar51 = 0;
      *(float *)(puVar26 + 0x62) = (float)dVar52;
      *(undefined8 **)(puVar26 + 0x71) = puVar27;
      uVar48 = uVar45;
      do {
        iVar37 = (int)uVar48;
        uVar33 = (int)*(uint *)(iVar37 + 0x90) >> 0x1f;
        uVar41 = (int)*(uint *)(iVar37 + 0xb0) >> 0x1f;
        if ((int)((uVar33 >> 1 ^ *(uint *)(iVar37 + 0x90)) - uVar33) <
            (int)((uVar41 >> 1 ^ *(uint *)(iVar37 + 0xb0)) - uVar41)) {
          fVar74 = pfVar24[0x22] * pfVar24[0x23] + *(float *)(iVar37 + 0x90);
          *(float *)(iVar37 + 0x90) = fVar74;
          if (*(float *)(iVar37 + 0xb0) <= fVar74) {
            dVar52 = (double)mobyutil::MB_randRangeFloat
                                       ((float)(dVar56 - (double)pfVar24[0x22]),(float)dVar56);
            *(float *)(iVar37 + 0xb0) = (float)dVar52;
          }
        }
        else {
          fVar74 = -(pfVar24[0x22] * pfVar24[0x23] - *(float *)(iVar37 + 0x90));
          *(float *)(iVar37 + 0x90) = fVar74;
          if (fVar74 <= *(float *)(iVar37 + 0xb0)) {
            dVar52 = (double)mobyutil::MB_randRangeFloat
                                       ((float)(dVar56 - (double)pfVar24[0x22]),(float)dVar56);
            *(float *)(iVar37 + 0xb0) = (float)dVar52;
          }
        }
        iVar51 = iVar51 + 1;
        uVar48 = uVar48 + 4;
      } while (iVar51 < 8);
      dVar52 = (double)fastfunc::FastIntToDouble(*(undefined1 *)(param_1 + 0x23));
      dVar53 = (double)fastfunc::FastIntToDouble(*(undefined1 *)((int)pfVar24 + 0x13));
      uVar33 = fastfunc::FastDoubleToInt
                         ((double)((float)((double)(float)((double)pfVar24[0x55] * dVar53) * dVar52)
                                  * 0.0078125));
      bVar1 = *(byte *)((int)pfVar24 + 0xd);
      uVar33 = uVar33 & 0xff;
      if (bVar1 == 0) {
        uVar48 = (ulonglong)*(byte *)(pfVar24 + 3);
      }
      else {
        iVar51 = DAT_0159c330 / (int)(*(byte *)((int)pfVar24 + 0xe) + 1);
        uVar48 = (ulonglong)*(byte *)(pfVar24 + 3) +
                 ((longlong)iVar51 -
                 (longlong)(iVar51 / (int)(uint)bVar1) * (longlong)(int)(uint)bVar1);
      }
      *(char *)((int)pfVar24 + 0xf) = (char)uVar48;
      if ((*(ushort *)((int)pfVar24 + 10) & 1) == 0) {
        uVar48 = draw::GetEffectTex((uVar48 & 0xff) + 0x28);
      }
      else {
        uVar48 = draw::GetEffectTex(uVar48 & 0xff);
      }
      puVar26[0x6f] = 0;
      puVar26[0x57] = uVar48;
      uVar48 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
      puVar26[0x58] = uVar48;
      uVar48 = FUN_00502f08(0,0,0,0,0,0);
      puVar26[0x56] = uVar48;
      uVar48 = idol_draw::PackCmd(*(undefined1 *)(pfVar24 + 0xf),
                                  *(undefined1 *)((int)pfVar24 + 0x3d),
                                  *(undefined1 *)((int)pfVar24 + 0x3e),
                                  *(undefined1 *)((int)pfVar24 + 0x3f),
                                  *(undefined1 *)((int)pfVar24 + 0x13));
      puVar26[0x59] = uVar48;
      uVar41 = (uint)*(byte *)((int)pfVar24 + 0x11) << 0x10 |
               (uint)*(byte *)((int)pfVar24 + 0x13) << 0x18 |
               (uint)CONCAT11(*(undefined1 *)((int)pfVar24 + 0x12),*(undefined1 *)(pfVar24 + 4));
      *(uint *)(puVar26 + 0x50) = uVar41;
      *(uint *)((int)puVar26 + 0x284) = uVar41;
      *(uint *)(puVar26 + 0x51) = uVar41;
      *(uint *)((int)puVar26 + 0x28c) = uVar41;
      *(undefined4 *)((int)puVar26 + 0xbc) = 0;
      *(undefined4 *)(puVar26 + 0x17) = 0;
      *(undefined4 *)((int)puVar26 + 0xb4) = 0;
      *(undefined4 *)(puVar26 + 0x16) = 0;
      *(undefined4 *)((int)puVar26 + 0xcc) = 0;
      *(undefined4 *)(puVar26 + 0x19) = 0;
      *(undefined4 *)((int)puVar26 + 0xc4) = 0;
      *(undefined4 *)(puVar26 + 0x18) = 0;
      *(undefined4 *)((int)puVar26 + 0xdc) = 0;
      *(undefined4 *)(puVar26 + 0x1b) = 0;
      *(undefined4 *)((int)puVar26 + 0xd4) = 0;
      *(undefined4 *)(puVar26 + 0x1a) = 0;
      *(undefined4 *)((int)puVar26 + 0xec) = 0;
      *(undefined4 *)(puVar26 + 0x1d) = 0;
      *(undefined4 *)((int)puVar26 + 0xe4) = 0;
      *(undefined4 *)(puVar26 + 0x1c) = 0;
      lVar31 = uVar29 - 0x2f0;
      fVar74 = *pfVar24 * 0.5;
      auVar71 = loadVectorLeftIndexed(8,0x40c3d0);
      auVar71 = auVar71 >> 0x60 & (undefined1  [16])0xffffffff;
      *(float *)(puVar26 + 0x1c) = fVar74;
      *(float *)(puVar26 + 0x18) = fVar74;
      *(undefined4 *)(puVar26 + 0x6e) = 0x3f000000;
      *(float *)(puVar26 + 0x1a) = -fVar74;
      *(float *)(puVar26 + 0x16) = -fVar74;
      fVar74 = pfVar24[0x20];
      *(undefined1 (*) [16])(puVar26 + 0x5c) =
           auVar71 | auVar71 << 0x20 | auVar71 << 0x40 | auVar71 << 0x60;
      *(float *)(puVar26 + 0x17) = fVar74 + 0.01;
      *(float *)(puVar26 + 0x19) = pfVar24[0x21] + 0.01;
      fastfunc::FastEulerToMtx1(lVar31,param_1 + 0x40);
      FUN_005e825c(uVar29 - 0x440,uVar29 - 0x440,lVar31);
      FUN_005e825c(uVar29 - 0x430,uVar29 - 0x430,lVar31);
      FUN_005e825c(uVar29 - 0x420,uVar29 - 0x420,lVar31);
      FUN_005e825c(uVar29 - 0x410,uVar29 - 0x410,lVar31);
      dVar52 = (double)puVar26[99];
      *(undefined4 *)((int)puVar26 + 0x10c) = *(undefined4 *)((int)puVar26 + 0xdc);
      lVar49 = uVar29 - 0x3d0;
      lVar31 = uVar29 - 0x3f0;
      *(float *)(puVar26 + 0x20) =
           (float)((double)(*(float *)(puVar26 + 0x1a) - *(float *)(puVar26 + 0x16)) * dVar52);
      *(float *)((int)puVar26 + 0x104) =
           (float)((double)(*(float *)((int)puVar26 + 0xd4) - *(float *)((int)puVar26 + 0xb4)) *
                  dVar52);
      *(float *)(puVar26 + 0x21) =
           (float)((double)(*(float *)(puVar26 + 0x1b) - *(float *)(puVar26 + 0x17)) * dVar52);
      fVar74 = pfVar24[6];
      fVar9 = pfVar24[5];
      fVar10 = pfVar24[9];
      fVar11 = pfVar24[7];
      fVar12 = pfVar24[10];
      fVar13 = pfVar24[8];
      puVar26[0x6d] = (ulonglong)(double)(*(float *)(puVar26 + 0x1c) - *(float *)(puVar26 + 0x18));
      fVar14 = pfVar24[0x1a];
      fVar15 = pfVar24[0x18];
      puVar26[0x6c] =
           (ulonglong)(double)(*(float *)((int)puVar26 + 0xe4) - *(float *)((int)puVar26 + 0xc4));
      fVar16 = pfVar24[0x1b];
      fVar17 = pfVar24[0x19];
      puVar26[0x6b] = (ulonglong)(double)(*(float *)(puVar26 + 0x1d) - *(float *)(puVar26 + 0x19));
      fVar18 = *(float *)(puVar26 + 0x19) - *(float *)(puVar26 + 0x17);
      puVar26[0x6a] = (ulonglong)(double)(fVar74 - fVar9);
      fVar74 = pfVar24[1];
      fVar9 = pfVar24[0x20];
      puVar26[0x69] = (ulonglong)(double)(fVar10 - fVar11);
      fVar10 = pfVar24[0x21];
      puVar26[0x68] = (ulonglong)(double)(fVar12 - fVar13);
      dVar52 = (double)(float)((double)fVar74 - (double)fVar9);
      *(float *)(puVar26 + 0x22) = *(float *)(puVar26 + 0x18) - *(float *)(puVar26 + 0x16);
      dVar53 = (double)(float)((double)fVar74 - (double)fVar10);
      puVar26[0x67] = (ulonglong)(double)(fVar14 - fVar15);
      *(float *)((int)puVar26 + 0x114) =
           *(float *)((int)puVar26 + 0xc4) - *(float *)((int)puVar26 + 0xb4);
      *(float *)(puVar26 + 0x23) = fVar18;
      puVar26[0x66] = (ulonglong)(double)(fVar16 - fVar17);
      *(float *)((int)puVar26 + 0x11c) = *(float *)((int)puVar26 + 0xcc);
      FUN_005e8f4c((double)fVar18,(double)*(float *)((int)puVar26 + 0xcc),(double)fVar10,lVar49,
                   uVar29 - 0x3e0,lVar31);
      FUN_005e7f98(dVar56,lVar49,lVar49);
      iVar51 = 0;
      *(undefined4 *)((int)puVar26 + 0x30c) = *(undefined4 *)(puVar26 + 0x16);
      dVar57 = (double)*(float *)((int)puVar26 + 0xbc);
      *(undefined4 *)(puVar26 + 0x61) = *(undefined4 *)((int)puVar26 + 0xb4);
      fVar11 = pfVar24[5];
      *(undefined4 *)((int)puVar26 + 0x304) = *(undefined4 *)(puVar26 + 0x17);
      puVar26[0x65] = (ulonglong)(double)*(float *)((int)puVar26 + 0xcc);
      *(undefined4 *)(puVar26 + 0x60) = *(undefined4 *)(puVar26 + 0x18);
      *(undefined4 *)((int)puVar26 + 0x2fc) = *(undefined4 *)((int)puVar26 + 0xc4);
      fVar74 = pfVar24[7];
      *(undefined4 *)(puVar26 + 0x5f) = *(undefined4 *)(puVar26 + 0x19);
      fVar9 = pfVar24[8];
      fVar10 = pfVar24[0x18];
      *(float *)((int)puVar26 + 0x2f4) = fVar11;
      fVar11 = pfVar24[0x19];
      dVar58 = (double)pfVar24[0x24];
      do {
        dVar62 = (double)fVar11;
        dVar61 = (double)fVar10;
        dVar60 = (double)fVar9;
        dVar59 = (double)fVar74;
        dVar54 = (double)fastfunc::FastIntToDouble(iVar51);
        dVar55 = (double)fastfunc::FastIntToDouble(*(undefined1 *)((int)pfVar24 + 9));
        dVar70 = (double)(float)(dVar54 / dVar55);
        dVar67 = (double)*(float *)((int)puVar26 + 0x30c);
        dVar68 = (double)*(float *)(puVar26 + 0x61);
        dVar69 = (double)*(float *)((int)puVar26 + 0x304);
        dVar54 = (double)puVar26[100];
        *(float *)((int)puVar26 + 0xfc) = (float)(double)puVar26[0x65];
        *(float *)(puVar26 + 0x1e) =
             (float)((double)(float)((double)*(float *)(puVar26 + 0x60) - dVar67) * dVar54);
        *(float *)((int)puVar26 + 0xf4) =
             (float)((double)(float)((double)*(float *)((int)puVar26 + 0x2fc) - dVar68) * dVar54);
        *(float *)(puVar26 + 0x1f) =
             (float)((double)(float)((double)*(float *)(puVar26 + 0x5f) - dVar69) * dVar54);
        dVar54 = (double)M671_0040c310(dVar70,uVar45);
        uVar48 = puVar26[0x6f];
        iVar42 = iVar51 * (int)puVar26[0x70] + iVar51;
        dVar55 = (double)(float)(dVar56 - dVar70);
        dVar66 = 3.1415927410125732;
        dVar65 = (double)(float)(dVar70 * 3.1415927410125732);
        iVar37 = *(int *)(puVar26 + 0x71);
        fVar74 = *(float *)((int)puVar26 + 0x2f4) * *(float *)(puVar26 + 0x62);
        do {
          dVar63 = (double)fVar74;
          *(float *)(puVar26 + 0x76) = (float)dVar66;
          *(float *)(puVar26 + 0x75) = (float)dVar54;
          *(float *)((int)puVar26 + 0x3a4) = (float)dVar69;
          *(float *)(puVar26 + 0x74) = fVar74;
          *(float *)((int)puVar26 + 0x39c) = (float)dVar57;
          dVar57 = (double)fastfunc::FastIntToDouble(uVar48);
          dVar69 = (double)fastfunc::FastIntToDouble(*(undefined1 *)(pfVar24 + 2));
          dVar69 = (double)(float)(dVar57 / dVar69);
          fVar74 = mobyutil::MB_WrapRot(pfVar24[0x17] * *(float *)(puVar26 + 0x62));
          dVar57 = (double)FUN_005e8128((double)fVar74);
          dVar63 = (double)(float)((double)pfVar24[0x16] * dVar57 + dVar63);
          dVar57 = (double)M671_0040c310(dVar69,uVar45);
          fVar74 = pfVar24[0x34];
          fVar9 = pfVar24[0x36];
          fVar10 = pfVar24[0x35];
          fVar11 = pfVar24[0xb];
          fVar12 = pfVar24[0xd];
          *(float *)((int)puVar26 + 0x3ac) = (float)dVar58;
          *(float *)(puVar26 + 0x77) = (float)dVar61;
          dVar64 = (double)(float)(dVar69 * dVar52 +
                                  (double)(float)((double)(float)(dVar56 - dVar69) * dVar53));
          dVar63 = (double)(float)((double)fVar10 * dVar54 +
                                  (double)(float)((double)fVar9 * dVar58 +
                                                 (double)(float)(dVar57 * (double)fVar74 + dVar63)))
          ;
          fVar74 = mobyutil::MB_WrapRot
                             ((float)((double)fVar12 * dVar70 +
                                     (double)(float)((double)fVar11 * dVar69 +
                                                    (double)(float)(dVar63 + dVar61))));
          dVar58 = (double)fVar74;
          *(float *)((int)puVar26 + 0x3b4) = (float)dVar62;
          fVar74 = mobyutil::MB_WrapRot
                             ((float)((double)pfVar24[0xe] * dVar69 +
                                     (double)(float)((double)pfVar24[0xc] * dVar70 +
                                                    (double)(float)(dVar63 + dVar62))));
          dVar54 = (double)fVar74;
          dVar66 = (double)(float)(dVar69 * dVar66);
          dVar61 = (double)FUN_005e8128(dVar66);
          dVar61 = (double)(float)SQRT(dVar61);
          dVar62 = (double)(float)((double)(float)(dVar61 * dVar64) * dVar55);
          dVar58 = (double)mathfunc::cosf((float)dVar58);
          FUN_005e7f98((double)(float)((double)(float)((double)(float)(dVar58 * dVar59) * dVar61) *
                                      dVar57),uVar29 - 0x3c0,uVar29 - 0x400);
          dVar58 = (double)FUN_005e8128(dVar54);
          FUN_005e7f98((double)(float)((double)(float)((double)(float)(dVar58 * dVar60) * dVar61) *
                                      dVar57),uVar29 - 0x3b0,lVar31);
          dVar57 = (double)FUN_005e8128(dVar65);
          dVar58 = (double)FUN_005e8128(dVar66);
          dVar66 = (double)(float)(dVar57 * dVar58);
          fVar74 = mobyutil::MB_WrapRot((float)((double)pfVar24[0xb] * dVar69 + dVar63));
          dVar57 = (double)FUN_005e8128((double)fVar74);
          dVar54 = (double)pfVar24[0x1e];
          fVar74 = mobyutil::MB_WrapRot((float)((double)pfVar24[0xd] * dVar70 + dVar63));
          dVar58 = (double)FUN_005e8128((double)fVar74);
          FUN_005e7f98((double)(float)(dVar66 * (double)(float)(dVar54 * dVar57 +
                                                               (double)(float)((double)pfVar24[0x1f]
                                                                              * dVar58))),
                       uVar29 - 0x3a0,uVar29 - 0x3d0);
          FUN_005e7f98(dVar62,uVar29 - 0x390,lVar31);
          fVar74 = *(float *)(puVar26 + 0x26);
          fVar9 = *(float *)(puVar26 + 0x28);
          fVar10 = *(float *)((int)puVar26 + 0x134);
          fVar11 = *(float *)((int)puVar26 + 0x144);
          fVar12 = *(float *)(puVar26 + 0x27);
          fVar13 = *(float *)(puVar26 + 0x29);
          fVar14 = *(float *)(puVar26 + 0x2a);
          iVar28 = (int)uVar48;
          fVar15 = *(float *)((int)puVar26 + 0x154);
          fVar16 = *(float *)(puVar26 + 0x2b);
          fVar17 = *(float *)(puVar26 + 0x2c);
          pfVar34 = (float *)(puVar27 + iVar42 * 2 + iVar28 * 2 + 0x10);
          fVar18 = *(float *)((int)puVar26 + 0x164);
          fVar19 = *(float *)(puVar26 + 0x2d);
          fVar20 = *(float *)((int)puVar26 + 0x3a4);
          dVar57 = (double)*(float *)((int)puVar26 + 0x39c);
          pfVar34[3] = *(float *)((int)puVar26 + 0x39c);
          *pfVar34 = (float)(dVar67 + (double)((fVar74 + fVar9 + fVar14) - fVar17));
          pfVar34[1] = (float)(dVar68 + (double)((fVar10 + fVar11 + fVar15) - fVar18));
          pfVar34[2] = fVar20 + ((fVar12 + fVar13 + fVar16) - fVar19);
          uVar48 = (ulonglong)(iVar28 + 1);
          *(float *)(iVar28 * 0x10 + iVar42 * 0x10 + iVar37 + 0x8c) =
               (float)(dVar56 / (double)((float)((double)(float)((double)(float)((double)pfVar24[
                                                  0x56] * dVar61) * dVar61) * dVar61 +
                                                (double)(float)(dVar56 - (double)pfVar24[0x56])) *
                                        (float)((double)pfVar24[0x57] * dVar70 +
                                               (double)(float)(dVar56 - (double)pfVar24[0x57]))));
          dVar67 = (double)(float)(dVar67 + (double)*(float *)(puVar26 + 0x1e));
          dVar68 = (double)(float)(dVar68 + (double)*(float *)((int)puVar26 + 0xf4));
          fVar74 = *(float *)(puVar26 + 0x74);
          dVar54 = (double)*(float *)(puVar26 + 0x75);
          dVar58 = (double)*(float *)((int)puVar26 + 0x3ac);
          dVar69 = (double)(fVar20 + *(float *)(puVar26 + 0x1f));
          dVar66 = (double)*(float *)(puVar26 + 0x76);
          dVar62 = (double)*(float *)((int)puVar26 + 0x3b4);
          dVar61 = (double)*(float *)(puVar26 + 0x77);
        } while (iVar28 + 1 <= (int)(uint)*(byte *)(pfVar24 + 2));
        iVar51 = iVar51 + 1;
        dVar54 = (double)puVar26[99];
        *(float *)((int)puVar26 + 0x30c) =
             *(float *)((int)puVar26 + 0x30c) + *(float *)(puVar26 + 0x20);
        *(float *)(puVar26 + 0x61) = *(float *)(puVar26 + 0x61) + *(float *)((int)puVar26 + 0x104);
        *(float *)((int)puVar26 + 0x304) =
             *(float *)((int)puVar26 + 0x304) + *(float *)(puVar26 + 0x21);
        fVar74 = (float)((double)puVar26[0x69] * dVar54 + dVar59);
        fVar9 = (float)((double)puVar26[0x68] * dVar54 + dVar60);
        *(float *)(puVar26 + 0x60) =
             (float)((double)puVar26[0x6d] * dVar54 + (double)*(float *)(puVar26 + 0x60));
        fVar10 = (float)((double)puVar26[0x67] * (double)puVar26[100] + dVar61);
        bVar1 = *(byte *)((int)pfVar24 + 9);
        *(float *)((int)puVar26 + 0x2fc) =
             (float)((double)puVar26[0x6c] * dVar54 + (double)*(float *)((int)puVar26 + 0x2fc));
        *(float *)(puVar26 + 0x5f) =
             (float)((double)puVar26[0x6b] * dVar54 + (double)*(float *)(puVar26 + 0x5f));
        fVar11 = (float)((double)puVar26[0x66] * dVar54 + dVar62);
        *(float *)((int)puVar26 + 0x2f4) =
             (float)((double)puVar26[0x6a] * dVar54 + (double)*(float *)((int)puVar26 + 0x2f4));
      } while (iVar51 <= (int)(uint)bVar1);
      dVar53 = (double)*(float *)(puVar26 + 0x62);
      *(undefined8 **)(puVar26 + 0x73) = puVar30;
      dVar52 = (double)pfVar24[0x10];
      fVar74 = mobyutil::MB_WrapRot((float)(dVar53 * (double)pfVar24[0x12]));
      uVar32 = FUN_005e8128((double)fVar74);
      dVar52 = (double)fastfunc::FastFrac((double)(float)(dVar53 * dVar52 +
                                                         (double)(float)((double)pfVar24[0x11] *
                                                                        extraout_f1)),uVar32,
                                          uVar29 - 0x220);
      uVar48 = puVar26[0x6f];
      *(undefined8 **)(puVar26 + 0x73) = puVar30;
      do {
        *(float *)((int)uVar38 + 0x80) = (float)dVar52;
        uVar48 = uVar48 + 1;
        uVar38 = uVar38 + 4;
        dVar52 = (double)(float)(dVar52 + (double)(float)((double)puVar26[100] /
                                                         (double)pfVar24[0x1c]));
      } while ((int)uVar48 <= (int)(uint)*(byte *)(pfVar24 + 2));
      dVar52 = (double)pfVar24[0x13];
      fVar74 = mobyutil::MB_WrapRot((float)(dVar53 * (double)pfVar24[0x15]));
      uVar32 = FUN_005e8128((double)fVar74);
      dVar52 = (double)fastfunc::FastFrac((double)(float)(dVar53 * dVar52 +
                                                         (double)(float)((double)pfVar24[0x14] *
                                                                        extraout_f1_00)),uVar32,
                                          uVar29 - 0x220);
      uVar48 = puVar26[0x6f];
      uVar38 = uVar39;
      do {
        *(float *)((int)uVar38 + 0x80) = (float)dVar52;
        uVar48 = uVar48 + 1;
        uVar38 = uVar38 + 4;
        bVar1 = *(byte *)((int)pfVar24 + 9);
        dVar52 = (double)(float)(dVar52 + (double)(float)((double)puVar26[99] /
                                                         (double)pfVar24[0x1d]));
      } while ((int)uVar48 <= (int)(uint)bVar1);
      uVar41 = (uint)bVar1;
      uVar38 = puVar26[0x6f];
      iVar51 = (int)uVar40;
      if (bVar1 != 0) {
        uVar40 = puVar26[0x6f];
        uVar48 = uVar40;
        do {
          uVar44 = puVar26[0x6f];
          if (*(char *)(pfVar24 + 2) != '\0') {
            iVar28 = (int)uVar40 + (int)uVar38;
            iVar37 = *(int *)(puVar26 + 0x73);
            iVar46 = *(int *)(puVar26 + 0x71) + 0x8c;
            iVar42 = iVar28 * 0x10;
            iVar28 = (iVar28 + (int)puVar26[0x72]) * 0x10;
            iVar47 = *(int *)(puVar26 + 0x71) + 0x9c;
            uVar50 = uVar44;
            do {
              uVar21 = *(undefined4 *)(iVar37 + 0x80);
              *(undefined4 *)(puVar26 + 0x52) = uVar21;
              iVar36 = (int)uVar50;
              pfVar34 = (float *)((int)puVar27 + iVar36 + iVar42 + 0x80);
              uVar22 = *(undefined4 *)((int)uVar39 + 0x80);
              *(undefined4 *)((int)puVar26 + 0x294) = uVar22;
              uVar23 = *(undefined4 *)(iVar37 + 0x84);
              *(undefined4 *)((int)puVar26 + 0x29c) = uVar22;
              *(undefined4 *)(puVar26 + 0x53) = uVar23;
              *(undefined4 *)(puVar26 + 0x54) = uVar21;
              uVar21 = *(undefined4 *)((int)uVar48 + iVar51 + 0x84);
              *(undefined4 *)(puVar26 + 0x55) = uVar23;
              *(undefined4 *)((int)puVar26 + 0x2a4) = uVar21;
              *(undefined4 *)((int)puVar26 + 0x2ac) = uVar21;
              fVar74 = *(float *)(param_1 + 0x10);
              fVar9 = *(float *)(param_1 + 0x14);
              fVar10 = *(float *)(param_1 + 0x18);
              pfVar43 = (float *)((int)puVar27 + iVar36 + iVar28 + 0x80);
              *(float *)(puVar26 + 0x48) = *pfVar34 + fVar74;
              *(float *)((int)puVar26 + 0x244) = pfVar34[1] + fVar9;
              *(float *)(puVar26 + 0x49) = pfVar34[2] + fVar10;
              *(float *)((int)puVar26 + 0x24c) = pfVar34[3];
              *(float *)(puVar26 + 0x4a) = pfVar34[4] + fVar74;
              *(float *)((int)puVar26 + 0x254) = pfVar34[5] + fVar9;
              *(float *)(puVar26 + 0x4b) = pfVar34[6] + fVar10;
              *(float *)((int)puVar26 + 0x25c) = pfVar34[7];
              *(float *)(puVar26 + 0x4c) = *pfVar43 + fVar74;
              *(float *)((int)puVar26 + 0x264) = pfVar43[1] + fVar9;
              *(float *)(puVar26 + 0x4d) = pfVar43[2] + fVar10;
              *(float *)((int)puVar26 + 0x26c) = pfVar43[3];
              *(float *)(puVar26 + 0x4e) = pfVar43[4] + fVar74;
              *(float *)((int)puVar26 + 0x274) = pfVar43[5] + fVar9;
              *(float *)(puVar26 + 0x4f) = pfVar43[6] + fVar10;
              *(float *)((int)puVar26 + 0x27c) = pfVar43[7];
              iVar35 = fastfunc::FastDoubleToInt((double)*(float *)(iVar42 + iVar46 + iVar36));
              *(uint *)(puVar26 + 0x50) =
                   (int)uVar33 / iVar35 << 0x18 | (uint)*(byte *)((int)pfVar24 + 0x11) << 0x10 |
                   (uint)CONCAT11(*(undefined1 *)((int)pfVar24 + 0x12),*(undefined1 *)(pfVar24 + 4))
              ;
              iVar35 = fastfunc::FastDoubleToInt((double)*(float *)(iVar42 + iVar47 + iVar36));
              *(uint *)((int)puVar26 + 0x284) =
                   (int)uVar33 / iVar35 << 0x18 | (uint)*(byte *)((int)pfVar24 + 0x11) << 0x10 |
                   (uint)CONCAT11(*(undefined1 *)((int)pfVar24 + 0x12),*(undefined1 *)(pfVar24 + 4))
              ;
              iVar35 = fastfunc::FastDoubleToInt((double)*(float *)(iVar28 + iVar46 + iVar36));
              *(uint *)(puVar26 + 0x51) =
                   (int)uVar33 / iVar35 << 0x18 | (uint)*(byte *)((int)pfVar24 + 0x11) << 0x10 |
                   (uint)CONCAT11(*(undefined1 *)((int)pfVar24 + 0x12),*(undefined1 *)(pfVar24 + 4))
              ;
              iVar36 = fastfunc::FastDoubleToInt((double)*(float *)(iVar28 + iVar47 + iVar36));
              uVar21 = EffectTexHeaders;
              *(uint *)((int)puVar26 + 0x28c) =
                   (int)uVar33 / iVar36 << 0x18 | (uint)*(byte *)((int)pfVar24 + 0x11) << 0x10 |
                   (uint)CONCAT11(*(undefined1 *)((int)pfVar24 + 0x12),*(undefined1 *)(pfVar24 + 4))
              ;
              draw::FastDrawQuad(uVar29 - 0x2b0,0,0,uVar21,9);
              uVar44 = uVar44 + 1;
              uVar50 = uVar50 + 0x10;
              iVar37 = iVar37 + 4;
            } while ((int)uVar44 < (int)(uint)*(byte *)(pfVar24 + 2));
            uVar41 = (uint)*(byte *)((int)pfVar24 + 9);
          }
          uVar38 = uVar38 + 1;
          uVar39 = uVar39 + 4;
          uVar48 = uVar48 + 4;
          uVar40 = uVar40 + puVar26[0x70];
        } while ((int)uVar38 < (int)uVar41);
      }
      if ((*(ushort *)((int)pfVar24 + 10) & 2) != 0) {
        iVar37 = fastfunc::FastDecTimerS32(uVar45 + 0xf8);
        if (iVar37 != 0) {
          auVar71 = ZEXT416(0xfffffff8);
          auVar72 = ZEXT416(0xffffffff);
          auVar73 = auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60;
          auVar72 = loadVectorLeftIndexed(0xf3,uVar45);
          auVar71 = vectorShiftRightWord
                              (auVar72,auVar71 | auVar71 << 0x20 | auVar71 << 0x40 | auVar71 << 0x60
                              );
          auVar72 = vectorShiftLeftIntegerWord(auVar73,auVar73);
          auVar71 = vectorConvertFromSignedFixedPointWord(auVar71,0);
          auVar73 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          uVar38 = puVar26[0x6f];
          auVar71 = vectorAddFloatingPoint(auVar71,*(undefined1 (*) [16])(puVar26 + 0x5c));
          auVar71 = vectorMultiplyAddFloatingPoint(auVar73,auVar71,auVar72);
          auVar71 = vectorConvertToSignedFixedPointWordSaturate(auVar71,0);
          auVar71 = auVar71 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar21 = storeVectorElementWordIndexed
                             (auVar71 | auVar71 << 0x20 | auVar71 << 0x40 | auVar71 << 0x60,0xf8,
                              uVar45);
          *(undefined4 *)((uint)(pfVar24 + 0x3e) & 0xfffffffc) = uVar21;
          if (*(char *)((int)pfVar24 + 0xf2) != '\0') {
            dVar52 = (double)*(float *)(puVar26 + 0x6e);
            dVar58 = -1.0;
            dVar57 = 0.0;
            dVar53 = 3.1415927410125732;
            do {
              dVar59 = (double)(float)((double)*pfVar24 * dVar52);
              dVar54 = (double)mobyutil::MB_randRangeFloat((float)dVar58,(float)dVar56);
              dVar54 = (double)mobyutil::MB_randRangeFloat
                                         ((float)dVar57,(float)(dVar54 * (double)pfVar24[0x3d]));
              dVar55 = (double)mathfunc::cosf((float)(dVar54 * dVar53));
              FUN_005e7f98(-(double)((float)SQRT(dVar55) * pfVar24[0x40] + pfVar24[0x3f]),
                           uVar29 - 0x360,uVar29 - 0x3f0);
              FUN_005e7f98((double)(float)(dVar59 * dVar54),uVar29 - 0x370,uVar29 - 0x400);
              fVar74 = *(float *)(param_1 + 0x14);
              fVar9 = *(float *)(param_1 + 0x18);
              *(float *)(puVar26 + 0x30) =
                   *(float *)(puVar26 + 0x30) + *(float *)(param_1 + 0x10) +
                   *(float *)(puVar26 + 0x32);
              *(float *)((int)puVar26 + 0x184) =
                   *(float *)((int)puVar26 + 0x184) + fVar74 + *(float *)((int)puVar26 + 0x194);
              *(float *)(puVar26 + 0x31) =
                   *(float *)(puVar26 + 0x31) + fVar9 + *(float *)(puVar26 + 0x33);
              dVar55 = (double)mobyutil::MB_randRangeFloat(-pfVar24[0x37],pfVar24[0x37]);
              *(float *)(puVar26 + 0x2e) = (float)(dVar55 * (double)DAT_0071f408);
              dVar55 = (double)mobyutil::MB_randRangeFloat(-pfVar24[0x37],pfVar24[0x37]);
              *(float *)((int)puVar26 + 0x174) = (float)(dVar55 * (double)DAT_0071f408);
              dVar55 = (double)mobyutil::MB_randRangeFloat((float)dVar57,pfVar24[0x38]);
              *(float *)(puVar26 + 0x2f) = (float)(dVar55 * (double)DAT_0071f408);
              uVar32 = mobyutil::MB_randRangeFloat(pfVar24[0x39],pfVar24[0x3a]);
              puVar26[0x78] = (longlong)(int)*(short *)(pfVar24 + 0x3c);
              uVar3 = *(undefined1 *)(pfVar24 + 0x3b);
              uVar4 = *(undefined1 *)((int)pfVar24 + 0xef);
              uVar5 = *(undefined1 *)((int)pfVar24 + 0xed);
              uVar6 = *(undefined1 *)((int)pfVar24 + 0xee);
              puVar26[0x78] =
                   (longlong)
                   (int)(animationSpeed * (float)((double)(longlong)puVar26[0x78] + dVar52));
              uVar21 = *(undefined4 *)((int)puVar26 + 0x3c4);
              dVar55 = (double)fastfunc::FastIntToDouble(uVar4);
              uVar39 = fastfunc::FastDoubleToInt((double)(float)(dVar55 * dVar54));
              *(ulonglong *)(iVar51 + 0x70) = uVar39 & 0xff;
              partupd::SpawnPart_43
                        (uVar32,param_1,uVar29 - 0x370,uVar29 - 0x380,uVar39 & 0xff,(short)uVar21,
                         uVar3,uVar5,uVar6);
              uVar38 = uVar38 + 1;
            } while ((int)uVar38 < (int)(uint)*(byte *)((int)pfVar24 + 0xf2));
          }
        }
        iVar51 = fastfunc::FastDecTimerS16(uVar45 + 0x122);
        if (iVar51 != 0) {
          auVar71 = ZEXT416(0xfffffff8);
          auVar72 = ZEXT416(0xffffffff);
          auVar73 = auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60;
          auVar72 = loadVectorLeftIndexed(0x121,uVar45);
          auVar71 = vectorShiftRightWord
                              (auVar72,auVar71 | auVar71 << 0x20 | auVar71 << 0x40 | auVar71 << 0x60
                              );
          auVar72 = vectorShiftLeftIntegerWord(auVar73,auVar73);
          auVar71 = vectorConvertFromSignedFixedPointWord(auVar71,0);
          auVar73 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          uVar38 = puVar26[0x6f];
          auVar71 = vectorAddFloatingPoint(auVar71,*(undefined1 (*) [16])(puVar26 + 0x5c));
          auVar71 = vectorMultiplyAddFloatingPoint(auVar73,auVar71,auVar72);
          auVar71 = vectorConvertToSignedFixedPointWordSaturate(auVar71,0);
          auVar71 = vectorSplatHalfWord(auVar71,1);
          uVar25 = storeVectorElementHalfWordIndexed(auVar71,0x122,uVar45);
          *(undefined2 *)((int)pfVar24 + 0x122) = uVar25;
          if (*(char *)(pfVar24 + 0x48) != '\0') {
            dVar52 = (double)*(float *)(puVar26 + 0x6e);
            dVar58 = -1.0;
            dVar57 = 3.1415927410125732;
            dVar53 = 0.0;
            do {
              bVar1 = *(byte *)((int)pfVar24 + 0x116);
              bVar2 = *(byte *)((int)pfVar24 + 0x117);
              uVar3 = *(undefined1 *)((int)pfVar24 + 0x115);
              uVar4 = *(undefined1 *)(pfVar24 + 0x45);
              bVar7 = *(byte *)((int)pfVar24 + 0x11a);
              dVar60 = (double)(float)((double)*pfVar24 * dVar52);
              bVar8 = *(byte *)((int)pfVar24 + 0x11b);
              uVar5 = *(undefined1 *)((int)pfVar24 + 0x119);
              uVar6 = *(undefined1 *)(pfVar24 + 0x46);
              uVar32 = mobyutil::MB_randRangeFloat(pfVar24[0x43],pfVar24[0x44]);
              iVar51 = mobyutil::MB_randRange
                                 (*(undefined2 *)(pfVar24 + 0x47),
                                  *(undefined2 *)((int)pfVar24 + 0x11e));
              puVar26[0x78] = (longlong)iVar51;
              puVar26[0x78] =
                   (longlong)
                   (int)(animationSpeed * (float)((double)(longlong)puVar26[0x78] + dVar52));
              dVar54 = (double)mobyutil::MB_randRangeFloat((float)dVar58,(float)dVar56);
              dVar54 = (double)mobyutil::MB_randRangeFloat
                                         (-(float)(dVar54 * (double)pfVar24[0x49]),
                                          (float)(dVar54 * (double)pfVar24[0x49]));
              dVar55 = (double)mathfunc::cosf((float)(dVar54 * dVar57));
              dVar59 = (double)(float)SQRT(dVar55);
              FUN_005e7f98(-(double)(float)(dVar59 * (double)pfVar24[0x4c] + (double)pfVar24[0x4b]),
                           uVar29 - 0x330,uVar29 - 0x3f0);
              FUN_005e7f98((double)(float)(dVar60 * dVar54),uVar29 - 0x340,uVar29 - 0x400);
              fVar74 = *(float *)(param_1 + 0x14);
              fVar9 = *(float *)(param_1 + 0x18);
              *(float *)(puVar26 + 0x36) =
                   *(float *)(puVar26 + 0x36) + *(float *)(param_1 + 0x10) +
                   *(float *)(puVar26 + 0x38);
              *(float *)((int)puVar26 + 0x1b4) =
                   *(float *)((int)puVar26 + 0x1b4) + fVar74 + *(float *)((int)puVar26 + 0x1c4);
              *(float *)(puVar26 + 0x37) =
                   *(float *)(puVar26 + 0x37) + fVar9 + *(float *)(puVar26 + 0x39);
              dVar54 = (double)mobyutil::MB_randRangeFloat(-pfVar24[0x41],pfVar24[0x41]);
              *(float *)(puVar26 + 0x34) = (float)(dVar54 * (double)DAT_0071f408);
              dVar54 = (double)mobyutil::MB_randRangeFloat(-pfVar24[0x41],pfVar24[0x41]);
              *(float *)((int)puVar26 + 0x1a4) = (float)(dVar54 * (double)DAT_0071f408);
              dVar54 = (double)mobyutil::MB_randRangeFloat((float)dVar53,pfVar24[0x42]);
              dVar55 = (double)DAT_0071f408;
              *(float *)(puVar26 + 0x35) = (float)(dVar54 * dVar55);
              fVar74 = (float)(dVar59 * (double)pfVar24[0x4a] +
                              (double)(float)(dVar56 - (double)pfVar24[0x4a]));
              *(float *)(puVar26 + 0x34) = *(float *)(puVar26 + 0x34) * fVar74;
              *(float *)((int)puVar26 + 0x1a4) = *(float *)((int)puVar26 + 0x1a4) * fVar74;
              *(float *)(puVar26 + 0x35) = (float)(dVar54 * dVar55) * fVar74;
              partupd::SpawnPart_22
                        (uVar32,uVar29 - 0x340,uVar29 - 0x350,
                         (uint)bVar2 << 0x18 | (uint)bVar1 << 0x10 | (uint)CONCAT11(uVar3,uVar4),
                         (uint)bVar8 << 0x18 | (uint)bVar7 << 0x10 | (uint)CONCAT11(uVar5,uVar6));
              uVar38 = uVar38 + 1;
            } while ((int)uVar38 < (int)(uint)*(byte *)(pfVar24 + 0x48));
          }
        }
        dVar52 = (double)*(float *)(puVar26 + 0x6e);
        if (*(char *)((int)pfVar24 + 0x13b) != -1) {
          iVar51 = (int)((longlong)*(char *)((int)pfVar24 + 0x13b) << 5);
          fVar74 = pfVar24[0x51] - *(float *)((int)&PointLights[0].pos.y + iVar51);
          fVar9 = pfVar24[0x50] - *(float *)((int)&PointLights[0].pos.x + iVar51);
          fVar10 = pfVar24[0x52] - *(float *)((int)&PointLights[0].pos.z + iVar51);
          if (pfVar24[0x4f] * DAT_0071f408 <=
              SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar74 * fVar74)) {
            *(float *)(puVar26 + 0x3e) = fVar9;
            fVar74 = DAT_0071f408;
            *(float *)((int)puVar26 + 500) =
                 pfVar24[0x51] - *(float *)((int)&PointLights[0].pos.y + iVar51);
            *(float *)(puVar26 + 0x3f) =
                 pfVar24[0x52] - *(float *)((int)&PointLights[0].pos.z + iVar51);
            *(float *)((int)puVar26 + 0x1fc) = pfVar24[0x53];
            FUN_005e7f98((double)(pfVar24[0x4f] * fVar74),uVar29 - 0x300,uVar29 - 0x300);
            fVar74 = *(float *)((int)&PointLights[0].pos.y + iVar51);
            fVar9 = *(float *)((int)&PointLights[0].pos.z + iVar51);
            *(float *)((int)&PointLights[0].pos.x + iVar51) =
                 *(float *)((int)&PointLights[0].pos.x + iVar51) + *(float *)(puVar26 + 0x3e);
            *(float *)((int)&PointLights[0].pos.y + iVar51) =
                 fVar74 + *(float *)((int)puVar26 + 500);
            *(float *)((int)&PointLights[0].pos.z + iVar51) = fVar9 + *(float *)(puVar26 + 0x3f);
            dVar52 = (double)fastfunc::FastIntToDouble(*(undefined1 *)((int)pfVar24 + 0x137));
            *(float *)((int)&PointLights[0].pos.w + iVar51) = (float)dVar52;
          }
          else {
            bVar1 = *(byte *)((int)pfVar24 + 0x139);
            puVar26[0x78] = (longlong)(int)-(uint)bVar1;
            uVar45 = puVar26[0x78];
            puVar26[0x78] = (ulonglong)bVar1;
            dVar56 = (double)mobyutil::MB_randRangeFloat
                                       ((float)(longlong)uVar45,(float)(longlong)puVar26[0x78]);
            bVar1 = *(byte *)((int)pfVar24 + 0x13a);
            puVar26[0x78] = (longlong)(int)-(uint)bVar1;
            dVar53 = (double)(float)((double)(float)(dVar56 + (double)*pfVar24) * dVar52);
            uVar45 = puVar26[0x78];
            puVar26[0x78] = (ulonglong)bVar1;
            dVar56 = (double)mobyutil::MB_randRangeFloat
                                       ((float)(longlong)uVar45,(float)(longlong)puVar26[0x78]);
            dVar52 = (double)(float)((double)(float)(dVar56 + (double)pfVar24[1]) * dVar52);
            FUN_005e7f98(dVar53,(double)(float)(dVar56 + (double)pfVar24[1]),uVar29 - 800,
                         uVar29 - 0x400);
            FUN_005e7f98(-dVar52,uVar29 - 0x310,uVar29 - 0x3f0);
            fVar74 = *(float *)(puVar26 + 0x3a);
            fVar9 = *(float *)(puVar26 + 0x3c);
            pfVar24[0x50] = fVar74 + fVar9;
            fVar12 = *(float *)((int)puVar26 + 0x1d4) + *(float *)((int)puVar26 + 0x1e4);
            pfVar24[0x51] = fVar12;
            fVar10 = *(float *)(puVar26 + 0x3b);
            fVar11 = *(float *)(puVar26 + 0x3d);
            pfVar24[0x52] = fVar10 + fVar11;
            pfVar24[0x53] = *(float *)((int)puVar26 + 0x1dc);
            fVar74 = fVar74 + fVar9 + *(float *)(puVar26 + 0x16);
            pfVar24[0x50] = fVar74;
            fVar12 = fVar12 + *(float *)((int)puVar26 + 0xb4);
            pfVar24[0x51] = fVar12;
            fVar9 = fVar10 + fVar11 + *(float *)(puVar26 + 0x17);
            pfVar24[0x52] = fVar9;
            pfVar24[0x50] = fVar74 + *(float *)(param_1 + 0x10);
            pfVar24[0x51] = fVar12 + *(float *)(param_1 + 0x14);
            pfVar24[0x52] = fVar9 + *(float *)(param_1 + 0x18);
          }
        }
        *(ushort *)((int)pfVar24 + 10) = *(ushort *)((int)pfVar24 + 10) ^ 2;
      }
    }
  }
  return;
}



//==== 0040da20  ns=mobyupdate_unsorted  size=0x484
// sig: undefined UpdateMoby_671(MobyInstance * moby)
// callers(0): 
// callees(7): 0006d720 RegisterFuncForMoby; 000da4ac lights::CreatePointLight2; 000da9e8 lights::DeletePointLight; 000fcbe8 mobyutil::MB_randRangeFloat; 00502730 fastfunc::FastIntToDouble; 00502910 fastfunc::FastCheckBsphereInView; 005cd098 libc::printf
// strings: 00657000: 'M671 texture w count = 0.0, correcting to 1.0 \n' | 00657030: 'M671 Warning: texture h count (%f) is greater than max texture tile count (8)\n' | 00657080: 'M671 texture h count = 0.0, correcting to 1.0 \n' | 006570b0: 'M671 Warning: texture w count (%f) is greater than max texture tile count (8)\n'

/* Moby 671 */

void mobyupdate_unsorted::UpdateMoby_671(MobyInstance *moby)

{
  float fVar1;
  float *pfVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  undefined1 uVar8;
  float *pfVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 local_70 [32];
  
  if (moby != (MobyInstance *)0x0) {
    pfVar2 = (float *)moby->pVar;
    bVar6 = false;
    if (pfVar2 != (float *)0x0) {
      if (moby->state == '\0') {
        *(undefined1 *)((int)pfVar2 + 0x13b) = 0xff;
        pfVar2[0x50] = (moby->pos).x;
        fVar1 = (moby->pos).y;
        pfVar2[0x3e] = (float)(uint)*(byte *)((int)pfVar2 + 0xf3);
        pfVar2[0x51] = fVar1;
        pfVar2[0x52] = (moby->pos).z;
        pfVar2[0x53] = (moby->pos).w;
        if (pfVar2[0x1c] == 0.0) {
          libc::printf("M671 texture w count = 0.0, correcting to 1.0 \n");
          pfVar2[0x1c] = 1.0;
        }
        else {
          uVar3 = (int)pfVar2[0x1d] >> 0x1f;
          if (0x41000000 < (int)((uVar3 >> 1 ^ (uint)pfVar2[0x1d]) - uVar3)) {
            libc::printf("M671 Warning: texture h count (%f) is greater than max texture tile count (8)\n"
                         ,(double)pfVar2[0x1d]);
          }
        }
        if (pfVar2[0x1d] == 0.0) {
          libc::printf("M671 texture h count = 0.0, correcting to 1.0 \n");
          pfVar2[0x1d] = 1.0;
        }
        else {
          uVar3 = (int)pfVar2[0x1c] >> 0x1f;
          if (0x41000000 < (int)((uVar3 >> 1 ^ (uint)pfVar2[0x1c]) - uVar3)) {
            libc::printf("M671 Warning: texture w count (%f) is greater than max texture tile count (8)\n"
                         ,(double)pfVar2[0x1c]);
          }
        }
        iVar7 = 0;
        dVar15 = 1.0;
        pfVar9 = pfVar2;
        do {
          dVar10 = (double)mobyutil::MB_randRangeFloat(pfVar2[0x22],(float)dVar15);
          pfVar9[0x24] = (float)dVar10;
          dVar10 = (double)mobyutil::MB_randRangeFloat(pfVar2[0x22],(float)dVar15);
          iVar7 = iVar7 + 1;
          pfVar9[0x2c] = (float)dVar10;
          pfVar9 = pfVar9 + 1;
        } while (iVar7 < 8);
        moby->state = '\x01';
      }
      fVar1 = pfVar2[1];
      if (pfVar2[1] - *pfVar2 < 0.0) {
        fVar1 = *pfVar2;
      }
      moby->scale = moby->pClass->gScale * fVar1 * 0.25;
      dVar10 = (double)fastfunc::FastIntToDouble(moby->drawDistance);
      fVar1 = (moby->pos).y - GameCamera.posY;
      fVar4 = (moby->pos).x - GameCamera.posX;
      fVar5 = (moby->pos).z - GameCamera.posZ;
      dVar15 = (double)(float)(dVar10 - (double)pfVar2[0x54]);
      dVar11 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar1 * fVar1);
      if (dVar15 - 0.0 < 0.0) {
        dVar15 = 0.0;
      }
      if (dVar11 <= dVar10) {
        dVar10 = 1.0;
        if (dVar15 - dVar11 < 0.0) {
          dVar10 = (double)(1.0 - (float)((double)(float)(dVar11 - dVar15) / (double)pfVar2[0x54]));
        }
      }
      else {
        bVar6 = true;
        dVar10 = 0.0;
      }
      pfVar2[0x55] = (float)dVar10;
      fastfunc::FastIntToDouble(*(undefined1 *)((int)pfVar2 + 0x137));
      if (((moby->enabled == '\0') &&
          (iVar7 = fastfunc::FastCheckBsphereInView(0x406fe00000000000,local_70), iVar7 == -1)) ||
         (bVar6)) {
        if (*(char *)((int)pfVar2 + 0x13b) != -1) {
          lights::DeletePointLight();
          *(undefined1 *)((int)pfVar2 + 0x13b) = 0xff;
        }
      }
      else {
        RegisterFuncForMoby(&PTR_M671_0040c3f0_0070dfa0,moby);
        if ((*(ushort *)((int)pfVar2 + 10) & 4) != 0) {
          dVar15 = 0.009999999776482582;
          if (*(char *)((int)pfVar2 + 0x13b) == -1) {
            dVar14 = (double)*(byte *)((int)pfVar2 + 0x137);
            dVar10 = (double)fastfunc::FastIntToDouble(*(undefined1 *)(pfVar2 + 0x4e));
            dVar13 = (double)(float)(dVar10 * dVar15);
            dVar10 = (double)fastfunc::FastIntToDouble(*(undefined1 *)(pfVar2 + 0x4d));
            dVar12 = (double)(float)((double)(float)((double)pfVar2[0x55] * dVar10) * dVar15);
            dVar10 = (double)fastfunc::FastIntToDouble(*(undefined1 *)((int)pfVar2 + 0x135));
            dVar11 = (double)(float)((double)(float)((double)pfVar2[0x55] * dVar10) * dVar15);
            dVar10 = (double)fastfunc::FastIntToDouble(*(undefined1 *)((int)pfVar2 + 0x136));
            uVar8 = lights::CreatePointLight2
                              ((float)dVar14,dVar13,dVar12,dVar11,
                               (double)(float)((double)(float)((double)pfVar2[0x55] * dVar10) *
                                              dVar15),(Vec4 *)(pfVar2 + 0x50));
            *(undefined1 *)((int)pfVar2 + 0x13b) = uVar8;
          }
          else {
            iVar7 = (int)((longlong)*(char *)((int)pfVar2 + 0x13b) << 5);
            dVar10 = (double)fastfunc::FastIntToDouble(*(undefined1 *)(pfVar2 + 0x4d));
            *(float *)((int)&PointLights[0].color.x + iVar7) =
                 (float)((double)(float)((double)pfVar2[0x55] * dVar10) * dVar15);
            dVar10 = (double)fastfunc::FastIntToDouble(*(undefined1 *)((int)pfVar2 + 0x135));
            *(float *)((int)&PointLights[0].color.y + iVar7) =
                 (float)((double)(float)((double)pfVar2[0x55] * dVar10) * dVar15);
            dVar10 = (double)fastfunc::FastIntToDouble(*(undefined1 *)((int)pfVar2 + 0x136));
            *(float *)((int)&PointLights[0].color.z + iVar7) =
                 (float)((double)(float)((double)pfVar2[0x55] * dVar10) * dVar15);
          }
        }
      }
      *(ushort *)((int)pfVar2 + 10) = *(ushort *)((int)pfVar2 + 10) | 2;
    }
  }
  return;
}



//==== 0040dea4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M672_0040dea4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M672_0040dea4(void)

{
  DAT_008551bc = 0x10000;
  return;
}



//==== 0040dec0  ns=mobyupdate_helpers  size=0xe4
// sig: undefined M672_0040dec0(void)
// callers(1): 0040dfd8 mobyupdate_unsorted::UpdateMoby_672
// callees(1): 00500ca4 fastfunc::FastEulerToMtx1

void mobyupdate_helpers::M672_0040dec0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_50;
  float local_4c;
  float local_48;
  
  iVar3 = *(int *)(param_1 + 0x78);
  if ((*(int *)(iVar3 + 0xd0) != 0) || (*(int *)(iVar3 + 0xd4) != 0)) {
    fastfunc::FastEulerToMtx1(&local_50,param_1 + 0x40);
    fVar1 = *(float *)(iVar3 + 0xd0);
    fVar5 = local_50 * local_4c - local_4c * local_50;
    fVar4 = (local_48 - 1.0) * local_50 - local_50 * local_48;
    fVar6 = local_4c * local_48 - (local_48 - 1.0) * local_4c;
    fVar2 = *(float *)(iVar3 + 0xd4);
    param_2[2] = (fVar6 * local_4c - fVar4 * local_50) * fVar2 + fVar5 * fVar1 + param_2[2];
    *param_2 = (fVar4 * local_48 - fVar5 * local_4c) * fVar2 + fVar6 * fVar1 + *param_2;
    param_2[1] = (fVar5 * local_50 - fVar6 * local_48) * fVar2 + fVar4 * fVar1 + param_2[1];
  }
  return;
}



//==== 0040dfd8  ns=mobyupdate_unsorted  size=0x12c8
// sig: undefined UpdateMoby_672(MobyInstance * moby)
// callers(0): 
// callees(16): 000f30a0 mobyfunc::PostUpdateMobyLockTransform; 000f31a8 mobyfunc::UpdateMobyTransform; 000ff190 mobyutil::MB_DeltAngSpeed; 00136724 path::InitFollower; 001367d0 path::PathFindClosestPnt; 00139ef8 path::PathFollower_WrapIdx; 00139f58 path::PathFollower_Advance; 00139fc0 path::Spline_CalcTan; 0013a290 path::Spline_Hermite; 0013a440 path::Spline_CalcLen; 0040dec0 mobyupdate_helpers::M672_0040dec0; 004fff60 fastfunc::FastDecTimerS32; 00500ca4 fastfunc::FastEulerToMtx1; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502648 fastfunc::FastAddRots

/* Moby 672 */

void mobyupdate_unsorted::UpdateMoby_672(MobyInstance *moby)

{
  byte bVar1;
  s32 sVar2;
  float fVar3;
  Spline *pSVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  PathFollower *follower;
  Spline *pSVar13;
  void *pvVar14;
  uint uVar15;
  uint uVar16;
  ulonglong *puVar17;
  Vec4 *pVVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined2 uVar21;
  ulonglong uVar22;
  longlong lVar23;
  int iVar26;
  longlong lVar24;
  longlong lVar25;
  int iVar29;
  ulonglong uVar27;
  longlong lVar28;
  float *pfVar30;
  ulonglong uVar31;
  longlong lVar32;
  double dVar33;
  ulonglong uVar34;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  MobyInstance *pMVar35;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar36;
  undefined8 uVar37;
  double dVar38;
  double dVar39;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar40;
  ulonglong in_f29;
  double dVar41;
  ulonglong in_f30;
  double dVar42;
  double dVar43;
  ulonglong in_f31;
  double dVar44;
  
  lVar23 = (longlong)(int)moby;
  uVar22 = ZEXT48(&stack0x00000000);
  lVar25 = uVar22 - 0x200;
  puVar17 = (ulonglong *)lVar25;
  *puVar17 = uVar22;
  puVar17[0x42] = in_LR;
  puVar17[0x3a] = in_f26;
  puVar17[0x3b] = in_f27;
  puVar17[0x3c] = in_f28;
  puVar17[0x3d] = in_f29;
  puVar17[0x3e] = in_f30;
  puVar17[0x3f] = in_f31;
  puVar17[0x38] = unaff_r30;
  puVar17[0x39] = unaff_r31;
  follower = (PathFollower *)moby->pVar;
  puVar17[0x37] = unaff_r29;
  puVar17[0x36] = unaff_r28;
  puVar17[0x35] = unaff_r27;
  puVar17[0x34] = unaff_r26;
  puVar17[0x33] = unaff_r25;
  if (follower != (PathFollower *)0x0) {
    bVar1 = moby->state;
    if (bVar1 < 2) {
      if (-1 < (int)(uint)bVar1) {
        if (bVar1 == 0) {
          if (follower->splineIdx == -1) {
            moby->state = '\x02';
          }
          else {
            pSVar4 = Splines[follower->splineIdx];
            pVVar18 = pSVar4->points + pSVar4->cnt + -1;
            fVar3 = pSVar4->points[0].y - pVVar18->y;
            fVar5 = pSVar4->points[0].x - pVVar18->x;
            fVar12 = pSVar4->points[0].z - pVVar18->z;
            if (SQRT(fVar12 * fVar12 + fVar5 * fVar5 + fVar3 * fVar3) < 0.5) {
              pSVar4->cnt = pSVar4->cnt + -1;
            }
            path::InitFollower(follower);
            uVar27 = ZEXT48(follower->pSpline);
            uVar31 = (ulonglong)(uint)follower->idx;
            if (follower->state == '\0') {
              if (follower->idx < 1) {
                iVar26 = path::PathFindClosestPnt(0.0,(Vec4 *)&moby->pos,follower->pSpline);
                uVar31 = (ulonglong)iVar26;
                iVar29 = 0;
                follower->idx = iVar26;
                uVar27 = ZEXT48(follower->pSpline);
                if (-1 < (char)follower->direction) {
                  iVar29 = follower->pSpline->cnt + -1;
                }
                if (iVar26 == iVar29) {
                  uVar31 = 0;
                  follower->idx = 0;
                }
              }
              iVar26 = (int)uVar27 + (int)((uVar31 & 0xffffffff) << 4);
              fVar3 = (moby->pos).y - *(float *)(iVar26 + 0x14);
              fVar5 = (moby->pos).x - *(float *)(iVar26 + 0x10);
              fVar12 = (moby->pos).z - *(float *)(iVar26 + 0x18);
              iVar26 = (int)uVar27 + (int)(uVar31 << 4);
              follower->distance = SQRT(fVar12 * fVar12 + fVar5 * fVar5 + fVar3 * fVar3);
              fVar3 = *(float *)(iVar26 + 0x10) - (moby->pos).x;
              fVar5 = *(float *)(iVar26 + 0x14) - (moby->pos).y;
              fVar12 = ABS(fVar3);
              *(float *)((int)puVar17 + 0xd4) = fVar3;
              fVar7 = ABS(fVar5);
              *(float *)(puVar17 + 0x1b) = fVar5;
              *(float *)((int)puVar17 + 0xdc) = fVar12 - fVar7;
              fVar3 = 0.0;
              uVar34 = (ulonglong)(*(uint *)((int)puVar17 + 0xd4) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)((int)puVar17 + 0xdc) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)(puVar17 + 0x1b) >> 0x1d) & 4;
              fVar5 = ABS(*(float *)((int)puVar17 + 0xd4));
              if (*(float *)((int)puVar17 + 0xdc) - 0.0 < 0.0) {
                fVar5 = fVar7;
              }
              fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar34 << 2));
              fVar7 = *(float *)(((uint)(uVar34 << 2) | 0x735900) + 4);
              fVar9 = ABS(*(float *)(puVar17 + 0x1b));
              if (*(float *)((int)puVar17 + 0xdc) - 0.0 < 0.0) {
                fVar9 = fVar12;
              }
              if (0.0 < fVar5) {
                lVar24 = uVar22 - 0x1f0;
                lVar28 = uVar22 - 0xa0;
                lVar32 = uVar22 - 0x90;
                lVar36 = 2;
                fVar5 = (fVar9 - fVar5) / (fVar9 + fVar5);
                fVar12 = fVar5 * fVar5;
                *(float *)((int)puVar17 + 0x16c) = fVar5;
                *(float *)((int)puVar17 + 0x164) = fVar5;
                *(float *)(puVar17 + 0x2d) = fVar5;
                *(float *)(puVar17 + 0x2c) = fVar5;
                fVar5 = fVar12 * fVar12;
                *(float *)((int)puVar17 + 0x164) = *(float *)((int)puVar17 + 0x164) * fVar12;
                *(float *)(puVar17 + 0x2d) = *(float *)(puVar17 + 0x2d) * fVar5;
                *(float *)((int)puVar17 + 0x16c) = *(float *)((int)puVar17 + 0x16c) * fVar5 * fVar12
                ;
                do {
                  *(float *)((int)lVar24 + 0x160) = *(float *)((int)lVar24 + 0x150) * fVar5 * fVar5;
                  iVar26 = (int)lVar28;
                  lVar24 = lVar24 + 8;
                  lVar28 = lVar28 + 8;
                  *(float *)((int)lVar32 + 4) = *(float *)(iVar26 + 4) * fVar5 * fVar5;
                  lVar32 = lVar32 + 8;
                  lVar36 = lVar36 + -1;
                } while (lVar36 != 0);
                lVar36 = 4;
                lVar32 = uVar22 - 0xa0;
                pfVar30 = (float *)&DAT_007358e0;
                lVar24 = lVar25;
                lVar28 = lVar32;
                do {
                  fVar5 = *pfVar30;
                  fVar12 = pfVar30[1];
                  pfVar30 = pfVar30 + 2;
                  *(float *)((int)lVar24 + 0x160) = *(float *)((int)lVar24 + 0x160) * fVar5;
                  lVar24 = lVar24 + 8;
                  *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar12;
                  lVar28 = lVar28 + 8;
                  lVar36 = lVar36 + -1;
                } while (lVar36 != 0);
                lVar28 = 2;
                lVar24 = lVar25;
                do {
                  iVar26 = (int)lVar24;
                  iVar29 = (int)lVar32;
                  lVar24 = lVar24 + 0x10;
                  lVar32 = lVar32 + 0x10;
                  fVar3 = fVar3 + *(float *)(iVar26 + 0x160) + *(float *)(iVar29 + 4) +
                          *(float *)(iVar29 + 8) + *(float *)(iVar29 + 0xc);
                  lVar28 = lVar28 + -1;
                } while (lVar28 != 0);
                fVar3 = (fVar3 + 0.7853982) * fVar8 + fVar7;
              }
              follower->head = fVar3;
              follower->timer = 0.0;
              follower[1].idx = 0;
              follower->state = '\x02';
            }
            fVar3 = follower[5].timer;
            uVar27 = uVar27 + (uVar31 & 0xfffffff) * 0x10;
            iVar26 = (int)uVar27;
            follower[4].pSpline = *(Spline **)(iVar26 + 0x10);
            follower[4].splineIdx = *(s32 *)(iVar26 + 0x14);
            fVar5 = follower[5].distance;
            follower[4].head = *(float *)(iVar26 + 0x18);
            sVar2 = *(s32 *)(iVar26 + 0x1c);
            follower[5].direction = '?';
            follower[5].state = 0x80;
            follower[5].flags = 0;
            follower[5].idx = sVar2;
            path::Spline_CalcTan
                      (fVar3,fVar5,(Vec4 *)&follower[2].timer,follower,uVar27 & 0xffffffff,0.0,0);
            iVar26 = follower->idx;
            pSVar13 = follower->pSpline;
            fVar3 = pSVar13->points[iVar26].x;
            follower[3].distance = fVar3;
            pSVar4 = (Spline *)pSVar13->points[iVar26].y;
            follower[3].pSpline = pSVar4;
            fVar5 = pSVar13->points[iVar26].z;
            follower[3].splineIdx = (s32)fVar5;
            fVar12 = pSVar13->points[iVar26].w;
            follower[2].head = fVar3;
            follower[3].head = fVar12;
            follower[3].idx = (s32)pSVar4;
            *(float *)&follower[3].direction = fVar5;
            follower[3].timer = fVar12;
            fVar5 = 0.0;
            (moby->rotation).x = 0.0;
            pSVar4 = follower[2].pSpline;
            fVar7 = ABS((float)follower[2].pSpline);
            fVar3 = SQRT(follower[2].timer * follower[2].timer +
                         follower[2].distance * follower[2].distance);
            fVar8 = ABS(fVar3);
            *(float *)((int)puVar17 + 0xcc) = fVar3;
            *(float *)(puVar17 + 0x1a) = fVar8 - fVar7;
            uVar31 = (ulonglong)(*(uint *)((int)puVar17 + 0xcc) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)(puVar17 + 0x1a) >> 0x1e) & 2 |
                     (ulonglong)((uint)pSVar4 >> 0x1d) & 4;
            fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar31 << 2));
            fVar12 = ABS(*(float *)((int)puVar17 + 0xcc));
            if (*(float *)(puVar17 + 0x1a) - 0.0 < 0.0) {
              fVar12 = fVar7;
            }
            fVar9 = *(float *)(((uint)(uVar31 << 2) | 0x735900) + 4);
            if (*(float *)(puVar17 + 0x1a) - 0.0 < 0.0) {
              fVar7 = fVar8;
            }
            fVar8 = fVar5;
            if (0.0 < fVar12) {
              lVar24 = uVar22 - 0x1f0;
              lVar32 = uVar22 - 0xb0;
              lVar28 = uVar22 - 0xc0;
              lVar36 = 2;
              fVar12 = (fVar7 - fVar12) / (fVar7 + fVar12);
              fVar7 = fVar12 * fVar12;
              *(float *)((int)puVar17 + 0x14c) = fVar12;
              *(float *)((int)puVar17 + 0x144) = fVar12;
              *(float *)(puVar17 + 0x29) = fVar12;
              *(float *)(puVar17 + 0x28) = fVar12;
              fVar12 = fVar7 * fVar7;
              *(float *)((int)puVar17 + 0x144) = *(float *)((int)puVar17 + 0x144) * fVar7;
              *(float *)(puVar17 + 0x29) = *(float *)(puVar17 + 0x29) * fVar12;
              *(float *)((int)puVar17 + 0x14c) = *(float *)((int)puVar17 + 0x14c) * fVar12 * fVar7;
              do {
                *(float *)((int)lVar24 + 0x140) = *(float *)((int)lVar24 + 0x130) * fVar12 * fVar12;
                iVar26 = (int)lVar28;
                lVar28 = lVar28 + 8;
                lVar24 = lVar24 + 8;
                *(float *)((int)lVar32 + 4) = *(float *)(iVar26 + 4) * fVar12 * fVar12;
                lVar32 = lVar32 + 8;
                lVar36 = lVar36 + -1;
              } while (lVar36 != 0);
              lVar36 = 4;
              lVar32 = uVar22 - 0xc0;
              pfVar30 = (float *)&DAT_007358e0;
              lVar24 = lVar25;
              lVar28 = lVar32;
              do {
                fVar12 = *pfVar30;
                fVar7 = pfVar30[1];
                pfVar30 = pfVar30 + 2;
                *(float *)((int)lVar24 + 0x140) = *(float *)((int)lVar24 + 0x140) * fVar12;
                lVar24 = lVar24 + 8;
                *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar7;
                lVar28 = lVar28 + 8;
                lVar36 = lVar36 + -1;
              } while (lVar36 != 0);
              lVar28 = 2;
              lVar24 = lVar25;
              fVar12 = fVar5;
              do {
                iVar26 = (int)lVar24;
                iVar29 = (int)lVar32;
                lVar24 = lVar24 + 0x10;
                lVar32 = lVar32 + 0x10;
                fVar12 = fVar12 + *(float *)(iVar26 + 0x140) + *(float *)(iVar29 + 4) +
                         *(float *)(iVar29 + 8) + *(float *)(iVar29 + 0xc);
                lVar28 = lVar28 + -1;
              } while (lVar28 != 0);
              fVar8 = (fVar12 + 0.7853982) * fVar3 + fVar9;
            }
            (moby->rotation).y = -fVar8;
            fVar3 = follower[2].timer;
            fVar12 = follower[2].distance;
            fVar8 = ABS(follower[2].timer);
            fVar7 = ABS(follower[2].distance);
            *(float *)(puVar17 + 0x19) = fVar8 - fVar7;
            uVar31 = (ulonglong)((uint)fVar3 >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)(puVar17 + 0x19) >> 0x1e) & 2 |
                     (ulonglong)((uint)fVar12 >> 0x1d) & 4;
            fVar3 = fVar8;
            if (*(float *)(puVar17 + 0x19) - 0.0 < 0.0) {
              fVar3 = fVar7;
            }
            fVar12 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar31 << 2));
            if (*(float *)(puVar17 + 0x19) - 0.0 < 0.0) {
              fVar7 = fVar8;
            }
            fVar8 = *(float *)(((uint)(uVar31 << 2) | 0x735900) + 4);
            if (0.0 < fVar3) {
              lVar24 = uVar22 - 0x1f0;
              lVar32 = uVar22 - 0xd0;
              lVar28 = uVar22 - 0xe0;
              lVar36 = 2;
              fVar3 = (fVar7 - fVar3) / (fVar7 + fVar3);
              fVar7 = fVar3 * fVar3;
              *(float *)((int)puVar17 + 300) = fVar3;
              *(float *)((int)puVar17 + 0x124) = fVar3;
              *(float *)(puVar17 + 0x25) = fVar3;
              *(float *)(puVar17 + 0x24) = fVar3;
              fVar3 = fVar7 * fVar7;
              *(float *)((int)puVar17 + 0x124) = *(float *)((int)puVar17 + 0x124) * fVar7;
              *(float *)(puVar17 + 0x25) = *(float *)(puVar17 + 0x25) * fVar3;
              *(float *)((int)puVar17 + 300) = *(float *)((int)puVar17 + 300) * fVar3 * fVar7;
              do {
                *(float *)((int)lVar24 + 0x120) = *(float *)((int)lVar24 + 0x110) * fVar3 * fVar3;
                iVar26 = (int)lVar28;
                lVar28 = lVar28 + 8;
                lVar24 = lVar24 + 8;
                *(float *)((int)lVar32 + 4) = *(float *)(iVar26 + 4) * fVar3 * fVar3;
                lVar32 = lVar32 + 8;
                lVar36 = lVar36 + -1;
              } while (lVar36 != 0);
              lVar36 = 4;
              lVar32 = uVar22 - 0xe0;
              pfVar30 = (float *)&DAT_007358e0;
              lVar24 = lVar25;
              lVar28 = lVar32;
              do {
                fVar3 = *pfVar30;
                fVar7 = pfVar30[1];
                pfVar30 = pfVar30 + 2;
                *(float *)((int)lVar24 + 0x120) = *(float *)((int)lVar24 + 0x120) * fVar3;
                lVar24 = lVar24 + 8;
                *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar7;
                lVar28 = lVar28 + 8;
                lVar36 = lVar36 + -1;
              } while (lVar36 != 0);
              lVar24 = 2;
              do {
                iVar26 = (int)lVar25;
                lVar25 = lVar25 + 0x10;
                iVar29 = (int)lVar32;
                lVar32 = lVar32 + 0x10;
                fVar5 = fVar5 + *(float *)(iVar26 + 0x120) + *(float *)(iVar29 + 4) +
                        *(float *)(iVar29 + 8) + *(float *)(iVar29 + 0xc);
                lVar24 = lVar24 + -1;
              } while (lVar24 != 0);
              fVar5 = (fVar5 + 0.7853982) * fVar12 + fVar8;
            }
            (moby->rotation).z = fVar5;
            follower[5].head = 0.0;
            pSVar4 = follower[4].pSpline;
            follower[6].direction = '\0';
            follower[6].state = '\0';
            follower[6].flags = 0;
            (moby->pos).x = (f32)pSVar4;
            (moby->pos).y = (f32)follower[4].splineIdx;
            (moby->pos).z = follower[4].head;
            (moby->pos).w = (f32)follower[5].idx;
            mobyupdate_helpers::M672_0040dec0(lVar23,lVar23 + 0x10);
            uVar15 = (int)follower[7].timer >> 0x1f;
            uVar31 = (ulonglong)(int)uVar15;
            fVar3 = follower[3].distance;
            pSVar4 = follower[3].pSpline;
            fVar5 = (float)follower[3].splineIdx;
            fVar12 = follower[3].head;
            fVar7 = follower[5].timer;
            fVar8 = follower[5].distance;
            bVar1 = *(byte *)&follower[6].head;
            if (0x40c90fdb < (int)((uVar15 >> 1 ^ (uint)follower[7].timer) - uVar15)) {
              uVar31 = ZEXT48(&DAT_0040dfa4);
              follower[7].timer = follower[7].timer * 0.017453292;
            }
            follower[4].idx = (s32)fVar3;
            *(Spline **)&follower[4].direction = pSVar4;
            follower[4].timer = fVar5;
            follower[4].distance = fVar12;
            path::Spline_CalcLen
                      ((double)fVar7,(double)fVar8,follower,uVar31,0x40c90fdb,
                       (ulonglong)bVar1 & 0x20,lVar23);
            moby->state = ((byte)(-(longlong)follower[6].splineIdx >> 0x3f) & 2) + 1;
          }
        }
        else {
          uVar15._0_1_ = follower[5].direction;
          uVar15._1_1_ = follower[5].state;
          uVar15._2_2_ = follower[5].flags;
          uVar31 = (ulonglong)uVar15;
          uVar16 = (int)uVar15 >> 0x1f;
          dVar33 = (double)(longlong)(int)uVar16;
          dVar41 = 1.0;
          if (0x3f7fffff < (int)((uVar16 >> 1 ^ uVar15) - uVar16)) {
            *(float *)&follower[5].direction = *(float *)&follower[5].direction - 1.0;
            iVar26 = path::PathFollower_Advance(follower);
            fVar3 = follower[2].distance;
            follower[1].splineIdx = (s32)follower[2].timer;
            pSVar4 = follower[2].pSpline;
            follower[1].head = fVar3;
            uVar19 = *(undefined1 *)&follower[2].splineIdx;
            uVar20 = *(undefined1 *)((int)&follower[2].splineIdx + 1);
            uVar21 = *(undefined2 *)((int)&follower[2].splineIdx + 2);
            follower[2].idx = (s32)pSVar4;
            fVar3 = follower[5].timer;
            follower[2].direction = uVar19;
            follower[2].state = uVar20;
            follower[2].flags = uVar21;
            path::Spline_CalcTan
                      (fVar3,follower[5].distance,(Vec4 *)&follower[2].timer,follower,uVar31,
                       (float)dVar33,1);
            pSVar4 = follower[3].pSpline;
            follower[2].head = follower[3].distance;
            uVar19 = *(undefined1 *)&follower[3].splineIdx;
            uVar20 = *(undefined1 *)((int)&follower[3].splineIdx + 1);
            uVar21 = *(undefined2 *)((int)&follower[3].splineIdx + 2);
            follower[3].idx = (s32)pSVar4;
            follower[3].direction = uVar19;
            follower[3].state = uVar20;
            follower[3].flags = uVar21;
            follower[3].timer = follower[3].head;
            lVar24 = path::PathFollower_WrapIdx(follower,iVar26 + 1);
            iVar26 = (int)(lVar24 << 4);
            pSVar4 = follower->pSpline;
            follower[3].distance = *(float *)((int)&pSVar4->points[0].x + iVar26);
            follower[3].pSpline = *(Spline **)((int)&pSVar4->points[0].y + iVar26);
            follower[3].splineIdx = *(s32 *)((int)&pSVar4->points[0].z + iVar26);
            follower[3].head = *(float *)((int)&pSVar4->points[0].w + iVar26);
          }
          fVar3 = follower[7].timer;
          fVar5 = 3.1415925 - fVar3;
          if (fVar3 - (3.1415925 - fVar3) < 0.0) {
            fVar5 = fVar3;
          }
          fVar12 = -3.1415925 - fVar3;
          if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
            fVar12 = fVar5;
          }
          fVar5 = fVar12 * fVar12;
          fVar7 = fVar5 * fVar5 * fVar12;
          fVar8 = fVar5 * fVar7;
          dVar42 = (double)((float)follower[5].pSpline * DAT_0071f408 +
                           (float)follower[7].idx * DAT_0071f408 *
                           (fVar5 * fVar8 * 2.601887e-06 +
                           fVar8 * -0.0001980741 +
                           fVar7 * 0.0083330255 + fVar5 * fVar12 * -0.16666657 + fVar12));
          dVar40 = 0.01745329238474369;
          dVar44 = (double)(float)(dVar42 / (double)follower[3].timer);
          dVar33 = (double)fastfunc::FastWrapRot
                                     (fVar3,*(float *)&follower[7].direction * DAT_0071f408 *
                                            0.017453292);
          pSVar4 = (Spline *)follower[4].idx;
          follower[7].timer = (float)dVar33;
          follower[4].pSpline = pSVar4;
          follower[4].splineIdx = *(s32 *)&follower[4].direction;
          follower[4].head = follower[4].timer;
          follower[5].idx = (s32)follower[4].distance;
          path::Spline_Hermite
                    ((float)((double)*(float *)&follower[5].direction + dVar44),
                     (Vec4 *)(follower + 4),(Vec4 *)&follower[2].head,(Vec4 *)&follower[3].distance,
                     (Vec4 *)&follower[1].splineIdx,(Vec4 *)&follower[2].timer);
          if (((uint)follower[6].head & 0x40000000) == 0) {
            fVar3 = (float)follower[4].splineIdx - *(float *)&follower[4].direction;
            fVar5 = (float)follower[4].pSpline - (float)follower[4].idx;
            fVar12 = follower[4].head - follower[4].timer;
            dVar44 = (double)(float)(dVar44 * (double)(float)(dVar42 / (double)SQRT(fVar12 * fVar12
                                                                                    + fVar5 * fVar5
                                                                                      + fVar3 * 
                                                  fVar3)));
            path::Spline_Hermite
                      ((float)((double)*(float *)&follower[5].direction + dVar44),
                       (Vec4 *)(follower + 4),(Vec4 *)&follower[2].head,
                       (Vec4 *)&follower[3].distance,(Vec4 *)&follower[1].splineIdx,
                       (Vec4 *)&follower[2].timer);
          }
          puVar17[0x30] = (longlong)(int)*(short *)((int)&follower[6].head + 2);
          dVar42 = (double)(float)((double)(longlong)puVar17[0x30] * dVar40);
          fastfunc::FastDiffRots((double)(moby->rotation).z,dVar42);
          fVar3 = (float)follower[4].idx - (float)follower[4].pSpline;
          fVar5 = *(float *)&follower[4].direction - (float)follower[4].splineIdx;
          fVar7 = ABS(fVar3);
          fVar12 = ABS(fVar5);
          *(float *)((int)puVar17 + 0xbc) = fVar3;
          *(float *)(puVar17 + 0x18) = fVar5;
          *(float *)((int)puVar17 + 0xc4) = fVar7 - fVar12;
          dVar33 = 0.0;
          uVar31 = (ulonglong)(*(uint *)((int)puVar17 + 0xbc) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar17 + 0xc4) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar17 + 0x18) >> 0x1d) & 4;
          fVar3 = ABS(*(float *)((int)puVar17 + 0xbc));
          if (*(float *)((int)puVar17 + 0xc4) - 0.0 < 0.0) {
            fVar3 = fVar12;
          }
          fVar12 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar31 << 2));
          fVar5 = *(float *)(((uint)(uVar31 << 2) | 0x735900) + 4);
          fVar8 = ABS(*(float *)(puVar17 + 0x18));
          if (*(float *)((int)puVar17 + 0xc4) - 0.0 < 0.0) {
            fVar8 = fVar7;
          }
          dVar38 = dVar33;
          if (0.0 < fVar3) {
            lVar24 = uVar22 - 0x1f0;
            lVar32 = uVar22 - 0xf0;
            lVar28 = uVar22 - 0x100;
            lVar36 = 2;
            fVar3 = (fVar8 - fVar3) / (fVar8 + fVar3);
            fVar7 = fVar3 * fVar3;
            *(float *)((int)puVar17 + 0x10c) = fVar3;
            *(float *)((int)puVar17 + 0x104) = fVar3;
            *(float *)(puVar17 + 0x21) = fVar3;
            *(float *)(puVar17 + 0x20) = fVar3;
            fVar3 = fVar7 * fVar7;
            *(float *)((int)puVar17 + 0x104) = *(float *)((int)puVar17 + 0x104) * fVar7;
            *(float *)(puVar17 + 0x21) = *(float *)(puVar17 + 0x21) * fVar3;
            *(float *)((int)puVar17 + 0x10c) = *(float *)((int)puVar17 + 0x10c) * fVar3 * fVar7;
            do {
              *(float *)((int)lVar24 + 0x100) = *(float *)((int)lVar24 + 0xf0) * fVar3 * fVar3;
              iVar26 = (int)lVar28;
              lVar28 = lVar28 + 8;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar32 + 4) = *(float *)(iVar26 + 4) * fVar3 * fVar3;
              lVar32 = lVar32 + 8;
              lVar36 = lVar36 + -1;
            } while (lVar36 != 0);
            lVar36 = 4;
            lVar32 = uVar22 - 0x100;
            pfVar30 = (float *)&DAT_007358e0;
            lVar24 = lVar25;
            lVar28 = lVar32;
            do {
              fVar3 = *pfVar30;
              fVar7 = pfVar30[1];
              pfVar30 = pfVar30 + 2;
              *(float *)((int)lVar24 + 0x100) = *(float *)((int)lVar24 + 0x100) * fVar3;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar7;
              lVar28 = lVar28 + 8;
              lVar36 = lVar36 + -1;
            } while (lVar36 != 0);
            lVar28 = 2;
            lVar24 = lVar25;
            do {
              iVar26 = (int)lVar24;
              iVar29 = (int)lVar32;
              lVar24 = lVar24 + 0x10;
              lVar32 = lVar32 + 0x10;
              dVar38 = (double)((float)(dVar38 + (double)*(float *)(iVar26 + 0x100)) +
                                *(float *)(iVar29 + 4) + *(float *)(iVar29 + 8) +
                               *(float *)(iVar29 + 0xc));
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            dVar38 = (double)((float)(dVar38 + 0.7853981852531433) * fVar12 + fVar5);
          }
          uVar37 = fastfunc::FastWrapRot((float)dVar38,(float)dVar42);
          dVar42 = (double)fastfunc::FastDiffRots(uVar37,(double)(moby->rotation).z);
          fVar3 = (float)((double)((float)(dVar41 / (double)follower[6].timer) * DAT_0071f408) *
                         dVar42);
          dVar43 = (double)fVar3;
          dVar41 = (double)fastfunc::FastWrapRot(fVar3,(moby->rotation).z);
          (moby->rotation).z = (float)dVar41;
          fVar5 = *(float *)&follower[4].direction - (float)follower[4].splineIdx;
          fVar12 = (float)follower[4].idx - (float)follower[4].pSpline;
          fVar3 = (moby->rotation).y;
          fVar7 = follower[4].timer - follower[4].head;
          fVar5 = SQRT(fVar12 * fVar12 + fVar5 * fVar5);
          *(float *)((int)puVar17 + 0xb4) = fVar7;
          dVar39 = ABS((double)fVar7);
          dVar38 = ABS((double)fVar5);
          *(float *)(puVar17 + 0x16) = fVar5;
          *(float *)(puVar17 + 0x17) = (float)(dVar38 - dVar39);
          dVar42 = (double)(float)follower[6].idx;
          uVar31 = (ulonglong)(*(uint *)(puVar17 + 0x16) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar17 + 0x17) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar17 + 0xb4) >> 0x1d) & 4;
          uVar27 = uVar31 << 2 | 0x735900;
          dVar41 = ABS((double)*(float *)(puVar17 + 0x16));
          if ((double)*(float *)(puVar17 + 0x17) - dVar33 < 0.0) {
            dVar41 = dVar39;
          }
          fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar31 << 2));
          dVar39 = ABS((double)*(float *)((int)puVar17 + 0xb4));
          if ((double)*(float *)(puVar17 + 0x17) - dVar33 < 0.0) {
            dVar39 = dVar38;
          }
          fVar12 = *(float *)((int)uVar27 + 4);
          if (dVar33 < dVar41) {
            lVar24 = uVar22 - 0x1f0;
            lVar32 = uVar22 - 0x110;
            lVar28 = uVar22 - 0x120;
            lVar36 = 2;
            fVar7 = (float)(dVar39 - dVar41) / (float)(dVar39 + dVar41);
            fVar8 = fVar7 * fVar7;
            *(float *)((int)puVar17 + 0xec) = fVar7;
            *(float *)((int)puVar17 + 0xe4) = fVar7;
            *(float *)(puVar17 + 0x1d) = fVar7;
            *(float *)(puVar17 + 0x1c) = fVar7;
            fVar7 = fVar8 * fVar8;
            *(float *)((int)puVar17 + 0xe4) = *(float *)((int)puVar17 + 0xe4) * fVar8;
            *(float *)(puVar17 + 0x1d) = *(float *)(puVar17 + 0x1d) * fVar7;
            *(float *)((int)puVar17 + 0xec) = *(float *)((int)puVar17 + 0xec) * fVar7 * fVar8;
            do {
              *(float *)((int)lVar24 + 0xe0) = *(float *)((int)lVar24 + 0xd0) * fVar7 * fVar7;
              iVar26 = (int)lVar28;
              lVar28 = lVar28 + 8;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar32 + 4) = *(float *)(iVar26 + 4) * fVar7 * fVar7;
              lVar32 = lVar32 + 8;
              lVar36 = lVar36 + -1;
            } while (lVar36 != 0);
            lVar36 = 4;
            lVar32 = uVar22 - 0x120;
            uVar27 = ZEXT48(&DAT_007358e0);
            lVar24 = lVar25;
            lVar28 = lVar32;
            do {
              pfVar30 = (float *)uVar27;
              fVar7 = pfVar30[1];
              uVar27 = uVar27 + 8;
              *(float *)((int)lVar24 + 0xe0) = *(float *)((int)lVar24 + 0xe0) * *pfVar30;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar7;
              lVar28 = lVar28 + 8;
              lVar36 = lVar36 + -1;
            } while (lVar36 != 0);
            lVar24 = 2;
            do {
              iVar26 = (int)lVar25;
              iVar29 = (int)lVar32;
              lVar25 = lVar25 + 0x10;
              lVar32 = lVar32 + 0x10;
              dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar26 + 0xe0)) +
                                *(float *)(iVar29 + 4) + *(float *)(iVar29 + 8) +
                               *(float *)(iVar29 + 0xc));
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar5 + fVar12);
          }
          dVar38 = 10.0;
          dVar41 = 5.0;
          dVar33 = (double)mobyutil::MB_DeltAngSpeed
                                     ((double)fVar3,-dVar33,
                                      (double)((float)((double)(float)(dVar42 * 10.0) * dVar40) *
                                              DAT_0071f418),
                                      (double)((float)((double)(float)(dVar42 * 5.0) * dVar40) *
                                              DAT_0071f418),
                                      (double)((float)(dVar42 * dVar40) * mobyutil::g_FrameTime),
                                      &DAT_0040dfa4,uVar27,&follower[6].direction);
          (moby->rotation).y = (float)dVar33;
          uVar37 = fastfunc::FastAddRots((float)(dVar43 * (double)follower[6].distance));
          dVar33 = (double)fastfunc::FastDiffRots((double)(moby->rotation).x,uVar37);
          uVar37 = fastfunc::FastAddRots((float)(dVar33 * (double)(float)follower[6].pSpline));
          dVar33 = (double)(float)follower[5].splineIdx;
          dVar33 = (double)mobyutil::MB_DeltAngSpeed
                                     ((double)(moby->rotation).x,uVar37,
                                      (double)((float)((double)(float)(dVar33 * dVar38) * dVar40) *
                                              DAT_0071f418),
                                      (double)((float)((double)(float)(dVar33 * dVar41) * dVar40) *
                                              DAT_0071f418),
                                      (double)((float)(dVar33 * dVar40) * mobyutil::g_FrameTime));
          (moby->rotation).x = (float)dVar33;
          pSVar4 = follower[4].pSpline;
          *(float *)&follower[5].direction =
               (float)((double)*(float *)&follower[5].direction + dVar44);
          (moby->pos).x = (f32)pSVar4;
          (moby->pos).y = (f32)follower[4].splineIdx;
          (moby->pos).z = follower[4].head;
          (moby->pos).w = (f32)follower[5].idx;
          mobyupdate_helpers::M672_0040dec0(lVar23,lVar23 + 0x10);
        }
      }
    }
    else if (bVar1 < 3) {
      if (follower->splineIdx != -1) {
        moby->state = '\0';
      }
    }
    else if ((bVar1 < 4) &&
            (iVar26 = fastfunc::FastDecTimerS32(&follower[6].splineIdx), iVar26 != 0)) {
      follower[6].splineIdx = 0;
      moby->state = '\x01';
    }
    fastfunc::FastEulerToMtx1(uVar22 - 400,lVar23 + 0x40);
    if (follower[7].splineIdx != -1) {
      pMVar35 = MobyInstance + follower[7].splineIdx;
      if (((pMVar35 == (MobyInstance *)0x0) || (pMVar35->state == 0xfe)) || (pMVar35->state == 0xfd)
         ) {
        follower[7].splineIdx = -1;
      }
      else {
        fVar3 = *(float *)&follower[8].direction;
        fVar5 = (float)follower[8].idx;
        fVar12 = follower[8].timer;
        fVar7 = *(float *)((int)puVar17 + 0x84);
        fVar8 = *(float *)((int)puVar17 + 0x74);
        fVar9 = *(float *)(puVar17 + 0x11);
        fVar10 = *(float *)((int)puVar17 + 0x94);
        fVar11 = *(float *)(puVar17 + 0xf);
        fVar6 = *(float *)(puVar17 + 0x13);
        pvVar14 = pMVar35->pUpdate;
        (pMVar35->pos).x =
             (moby->pos).x +
             *(float *)(puVar17 + 0x12) * fVar12 +
             *(float *)(puVar17 + 0xe) * fVar5 + *(float *)(puVar17 + 0x10) * fVar3;
        (pMVar35->pos).y = (moby->pos).y + fVar10 * fVar12 + fVar8 * fVar5 + fVar7 * fVar3;
        (pMVar35->pos).z = (moby->pos).z + fVar6 * fVar12 + fVar11 * fVar5 + fVar9 * fVar3;
        (pMVar35->pos).w = (moby->pos).w;
        (pMVar35->rotation).x = (moby->rotation).x;
        (pMVar35->rotation).y = (moby->rotation).y;
        (pMVar35->rotation).z = (moby->rotation).z;
        (pMVar35->rotation).w = (moby->rotation).w;
        if (pvVar14 == (void *)0x0) {
          mobyfunc::UpdateMobyTransform(pMVar35);
          mobyfunc::PostUpdateMobyLockTransform(pMVar35);
        }
      }
    }
    if (follower[7].head != -NAN) {
      pMVar35 = MobyInstance + (int)follower[7].head;
      if (((pMVar35 == (MobyInstance *)0x0) || (pMVar35->state == 0xfe)) || (pMVar35->state == 0xfd)
         ) {
        follower[7].head = -NAN;
      }
      else {
        fVar3 = (float)follower[8].splineIdx;
        pSVar4 = follower[8].pSpline;
        fVar5 = follower[8].head;
        fVar12 = *(float *)((int)puVar17 + 0x84);
        fVar7 = *(float *)((int)puVar17 + 0x74);
        fVar8 = *(float *)(puVar17 + 0x11);
        fVar9 = *(float *)((int)puVar17 + 0x94);
        fVar10 = *(float *)(puVar17 + 0xf);
        fVar11 = *(float *)(puVar17 + 0x13);
        pvVar14 = pMVar35->pUpdate;
        (pMVar35->pos).x =
             (moby->pos).x +
             *(float *)(puVar17 + 0x12) * fVar5 +
             *(float *)(puVar17 + 0xe) * (float)pSVar4 + *(float *)(puVar17 + 0x10) * fVar3;
        (pMVar35->pos).y = (moby->pos).y + fVar9 * fVar5 + fVar7 * (float)pSVar4 + fVar12 * fVar3;
        (pMVar35->pos).z = (moby->pos).z + fVar11 * fVar5 + fVar10 * (float)pSVar4 + fVar8 * fVar3;
        (pMVar35->pos).w = (moby->pos).w;
        (pMVar35->rotation).x = (moby->rotation).x;
        (pMVar35->rotation).y = (moby->rotation).y;
        (pMVar35->rotation).z = (moby->rotation).z;
        (pMVar35->rotation).w = (moby->rotation).w;
        if (pvVar14 == (void *)0x0) {
          mobyfunc::UpdateMobyTransform(pMVar35);
          mobyfunc::PostUpdateMobyLockTransform(pMVar35);
        }
      }
    }
  }
  return;
}



//==== 0040f2b0  ns=mobyupdate_unsorted  size=0x334
// sig: undefined UpdateMoby_{674_677_680}(MobyInstance * moby)
// callers(0): 
// callees(5): 000efb38 mobyfunc::DeleteMoby; 000f0838 mobyfunc::MB_AddShortPairOffset; 000f1ec8 mobyfunc::SetColorOfMoby; 00502758 fastfunc::FastDoubleToInt; 005cd098 libc::printf
// strings: 00657100: 'Moby %d(%d) has no check moby! Deleting!\n'

/* Moby 674
   Moby 677
   Moby 680 */

void mobyupdate_unsorted::UpdateMoby__674_677_680_(MobyInstance *moby)

{
  u8 uVar1;
  MobyModeBit MVar2;
  int *piVar3;
  MobyClass *pMVar4;
  u16 *puVar5;
  float fVar6;
  s8 sVar7;
  int iVar8;
  undefined8 uVar9;
  MobyInstance *pMVar10;
  bool bVar11;
  bool bVar12;
  int *piVar13;
  int iVar14;
  
  pMVar10 = (MobyInstance *)0x0;
  piVar3 = (int *)moby->pVar;
  uVar1 = moby->state;
  if (*piVar3 != -1) {
    pMVar10 = MobyInstance + *piVar3;
  }
  bVar12 = false;
  bVar11 = false;
  if (uVar1 != '\0') {
    iVar14 = 0;
    piVar13 = piVar3;
    do {
      if ((uint)pMVar10->state == (int)*(char *)(piVar13 + 1)) {
        bVar12 = true;
        break;
      }
      iVar14 = iVar14 + 1;
      piVar13 = (int *)((int)piVar13 + 1);
    } while (iVar14 < 6);
    iVar14 = 0;
    piVar13 = piVar3;
    do {
      if ((uint)pMVar10->state == (int)*(char *)((int)piVar13 + 10)) {
        bVar11 = true;
        break;
      }
      iVar14 = iVar14 + 1;
      piVar13 = (int *)((int)piVar13 + 1);
    } while (iVar14 < 6);
  }
  if (uVar1 == '\x04') {
    if (bVar11) {
      moby->state = '\x02';
      moby->collision = (ushort *)0x0;
    }
    fVar6 = DAT_0071f408 * 0.05 + (float)piVar3[4];
    piVar3[4] = (int)fVar6;
    if (1.0 < fVar6) {
      pMVar4 = moby->pClass;
      piVar3[4] = 0x3f800000;
      moby->state = '\x01';
      moby->collision = pMVar4->collision;
    }
  }
  else if (uVar1 == '\x03') {
    if (bVar12) {
      moby->state = '\x04';
      puVar5 = moby->pClass->collision;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
            TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
      moby->collision = puVar5;
      moby->enabled = '\x01';
    }
  }
  else if (uVar1 == '\x02') {
    if (bVar12) {
      moby->state = '\x04';
      moby->collision = moby->pClass->collision;
    }
    fVar6 = -(DAT_0071f408 * 0.05 - (float)piVar3[4]);
    piVar3[4] = (int)fVar6;
    if (fVar6 < 0.0) {
      MVar2 = moby->modeBits;
      piVar3[4] = 0;
      moby->state = '\x03';
      moby->collision = (ushort *)0x0;
      moby->enabled = '\0';
      moby->modeBits = MVar2 | DISABLED;
    }
  }
  else if (uVar1 == '\x01') {
    if (bVar11) {
      moby->state = '\x02';
      moby->collision = (ushort *)0x0;
    }
  }
  else if (uVar1 == '\0') {
    if (pMVar10 == (MobyInstance *)0x0) {
      libc::printf("Moby %d(%d) has no check moby! Deleting!\n",moby->uid,moby->oClass);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    mobyfunc::SetColorOfMoby(moby,0x80,0x80,0x80);
    iVar14 = piVar3[6];
    moby->modeBits = moby->modeBits | (DISABLE_Z_WRITE|DRAW_TRANSPARENT_WEIRD|TRANSPARENT);
    if (iVar14 == 0) {
      pMVar4 = moby->pClass;
      piVar3[4] = 0x3f800000;
      moby->state = '\x01';
      puVar5 = pMVar4->collision;
      moby->alpha = '\x14';
      moby->collision = puVar5;
    }
    else {
      piVar3[4] = 0;
      moby->state = '\x03';
      moby->collision = (ushort *)0x0;
      moby->alpha = '\0';
    }
  }
  sVar7 = fastfunc::FastDoubleToInt((double)((float)piVar3[4] * 20.0));
  moby->alpha = sVar7;
  iVar14 = piVar3[5];
  uVar9 = 0xc0;
  iVar8 = iVar14 + 0xc0;
  piVar3[5] = iVar8;
  if (iVar8 < 0x1001) {
    if (iVar8 < 0) {
      uVar9 = 0x10c0;
      piVar3[5] = iVar14 + 0x10c0;
    }
  }
  else {
    uVar9 = 0xfffffffffffff0c0;
    piVar3[5] = iVar14 + -0xf40;
  }
  mobyfunc::MB_AddShortPairOffset(moby->pClass,uVar9,0);
  return;
}



//==== 0040f5f8  ns=mobyupdate_unsorted  size=0x214
// sig: undefined UpdateMoby_675(MobyInstance * moby)
// callers(0): 
// callees(4): 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 00500060 fastfunc::FastDecTimerS8; 00502758 fastfunc::FastDoubleToInt

/* Moby 675 */

void mobyupdate_unsorted::UpdateMoby_675(MobyInstance *moby)

{
  u8 uVar1;
  longlong lVar2;
  char cVar4;
  int iVar3;
  double dVar5;
  
  lVar2 = (longlong)(int)moby;
  uVar1 = moby->animationId;
  if (uVar1 == '\a') {
    iVar3 = fastfunc::FastDecTimerS8(lVar2 + 0xbc);
    if ((iVar3 != 0) && (moby->animationId != '\0')) {
      mobyutil::MB_SetAnimation(lVar2,0,0,(int)(animationSpeed * 5.5));
    }
  }
  else if (uVar1 == '\x03') {
    if ((moby->field43_0x70 & 2U) != 0) {
      mobyutil::MB_SetAnimation(lVar2,7,0,(int)(animationSpeed * 5.5));
      dVar5 = (double)mobyutil::MB_randRangeFloat(60.0,180.0);
      cVar4 = fastfunc::FastDoubleToInt((double)(float)(dVar5 * (double)animationSpeed));
      moby->setByGroup = cVar4;
    }
  }
  else if (uVar1 == '\x02') {
    iVar3 = fastfunc::FastDecTimerS8(lVar2 + 0xbc);
    if ((iVar3 != 0) && (moby->animationId != '\x03')) {
      mobyutil::MB_SetAnimation(lVar2,3,0,(int)(animationSpeed * 5.5));
    }
  }
  else if ((uVar1 == '\0') && ((moby->field43_0x70 & 2U) != 0)) {
    if (uVar1 != '\x02') {
      mobyutil::MB_SetAnimation(lVar2,2,0,(int)(animationSpeed * 5.5));
    }
    dVar5 = (double)mobyutil::MB_randRangeFloat(60.0,180.0);
    cVar4 = fastfunc::FastDoubleToInt((double)(float)(dVar5 * (double)animationSpeed));
    moby->setByGroup = cVar4;
  }
  return;
}



//==== 0040f810  ns=mobyupdate_helpers  size=0x38
// sig: undefined M676_0040f810(void)
// callers(0): 
// callees(2): 0017d488 stub::CALL_STUB_0017d488; 0017d4b8 water::WaterSheet_DrawAll

void mobyupdate_helpers::M676_0040f810(void)

{
  stub::CALL_STUB_0017d488();
  water::WaterSheet_DrawAll(8,(WaterSheet *)&PTR_DAT_00856be0);
  return;
}



//==== 0040f848  ns=mobyupdate_unsorted  size=0x30
// sig: undefined UpdateMoby_676(MobyInstance * moby)
// callers(0): 
// callees(1): 0006d720 RegisterFuncForMoby

/* Moby 676 */

void mobyupdate_unsorted::UpdateMoby_676(MobyInstance *moby)

{
  RegisterFuncForMoby(&PTR_M676_0040f810_0070dfd8,moby);
  return;
}



//==== 0040f878  ns=mobyupdate_helpers  size=0x14
// sig: undefined M678_0040f878(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M678_0040f878(void)

{
  DAT_00856f2c = 0x10000;
  return;
}



//==== 0040f890  ns=mobyupdate_helpers  size=0x38
// sig: undefined M678_0040f890(void)
// callers(0): 
// callees(2): 0017d488 stub::CALL_STUB_0017d488; 0017d4b8 water::WaterSheet_DrawAll

void mobyupdate_helpers::M678_0040f890(void)

{
  stub::CALL_STUB_0017d488();
  water::WaterSheet_DrawAll(2,(WaterSheet *)&PTR_DAT_00857020);
  return;
}



//==== 0040f8d0  ns=mobyupdate_unsorted  size=0x1ec
// sig: undefined UpdateMoby_678(MobyInstance * moby)
// callers(0): 
// callees(2): 0006d720 RegisterFuncForMoby; 00502730 fastfunc::FastIntToDouble

/* Moby 678 */

void mobyupdate_unsorted::UpdateMoby_678(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined **ppuVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float local_54;
  
  if (DAT_010cc210 == 0) {
    iVar7 = 0;
    DAT_010cc210 = 1;
    dVar15 = 1.0;
    ppuVar8 = &PTR_DAT_00857020;
    do {
      dVar11 = 0.0;
      pfVar4 = (float *)*ppuVar8;
      dVar12 = dVar11;
      dVar13 = dVar11;
      dVar14 = dVar11;
      for (puVar5 = ppuVar8[3]; 0 < (int)puVar5; puVar5 = puVar5 + -1) {
        dVar12 = (double)(float)(dVar12 + (double)*pfVar4);
        dVar13 = (double)(float)(dVar13 + (double)pfVar4[1]);
        dVar14 = (double)(float)(dVar14 + (double)pfVar4[2]);
        pfVar4 = pfVar4 + 4;
      }
      dVar9 = (double)fastfunc::FastIntToDouble(ppuVar8[3]);
      dVar9 = (double)(float)(dVar15 / dVar9);
      local_54 = 0.0;
      iVar6 = 0;
      pfVar4 = (float *)*ppuVar8;
      if (0 < (int)ppuVar8[3]) {
        do {
          fVar2 = (float)(dVar13 * dVar9) - pfVar4[1];
          fVar1 = (float)(dVar12 * dVar9) - *pfVar4;
          fVar3 = (float)(dVar14 * dVar9) - pfVar4[2];
          fVar1 = SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
          dVar10 = (double)fVar1;
          if (dVar11 < dVar10) {
            dVar11 = dVar10;
            local_54 = fVar1;
          }
          iVar6 = iVar6 + 1;
          pfVar4 = pfVar4 + 4;
        } while (iVar6 < (int)ppuVar8[3]);
      }
      pfVar4 = (float *)ppuVar8[2];
      iVar7 = iVar7 + 1;
      ppuVar8 = ppuVar8 + 0x18;
      *pfVar4 = (float)(dVar12 * dVar9);
      pfVar4[1] = (float)(dVar13 * dVar9);
      pfVar4[2] = (float)(dVar14 * dVar9);
      pfVar4[3] = local_54;
    } while (iVar7 < 2);
  }
  RegisterFuncForMoby(&PTR_M678_0040f890_0070dff0,moby);
  return;
}



//==== 0040fabc  ns=mobyupdate_helpers  size=0x14
// sig: undefined M679_0040fabc(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M679_0040fabc(void)

{
  DAT_0085712c = 0x10000;
  return;
}



//==== 0040fb18  ns=mobyupdate_unsorted  size=0x9ec
// sig: undefined UpdateMoby_679(MobyInstance * moby)
// callers(0): 
// callees(4): 00109af0 mobyutil::Delt; 00109b40 mobyutil::AccelDelt; 0010ce18 mobyutil::MB_PathMoveDist; 0010d7a0 mobyutil::MB_PathFollowToPos

/* Moby 679 */

void mobyupdate_unsorted::UpdateMoby_679(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  uint uVar8;
  ulonglong *puVar9;
  short sVar10;
  ulonglong uVar11;
  int iVar14;
  longlong lVar12;
  longlong lVar13;
  longlong lVar15;
  int iVar18;
  ulonglong uVar16;
  float *pfVar19;
  longlong lVar17;
  int iVar20;
  Spline *pSVar21;
  int *piVar22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  Spline *pSVar23;
  Vec4 *pVVar24;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f23;
  double dVar30;
  ulonglong in_f24;
  double dVar31;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar32;
  ulonglong in_f27;
  undefined8 uVar33;
  double dVar34;
  ulonglong in_f28;
  double dVar35;
  double dVar36;
  ulonglong in_f29;
  double dVar37;
  double dVar38;
  ulonglong in_f30;
  double in_f31;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0x1b0;
  puVar9 = (ulonglong *)lVar13;
  *puVar9 = uVar11;
  puVar9[0x38] = in_LR;
  puVar9[0x2d] = in_f23;
  puVar9[0x2e] = in_f24;
  puVar9[0x2f] = in_f25;
  puVar9[0x30] = in_f26;
  puVar9[0x31] = in_f27;
  puVar9[0x32] = in_f28;
  puVar9[0x33] = in_f29;
  puVar9[0x34] = in_f30;
  puVar9[0x35] = (ulonglong)in_f31;
  puVar9[0x2c] = unaff_r31;
  piVar7 = (int *)moby->pVar;
  puVar9[0x2b] = unaff_r30;
  puVar9[0x2a] = unaff_r29;
  puVar9[0x29] = unaff_r28;
  puVar9[0x28] = unaff_r27;
  puVar9[0x27] = unaff_r26;
  puVar9[0x26] = unaff_r25;
  puVar9[0x25] = unaff_r24;
  puVar9[0x24] = unaff_r23;
  if (((piVar7 != (int *)0x0) && (*piVar7 != -1)) && (piVar7[0x1c] != 0)) {
    if (piVar7[0x1a] == 0) {
      iVar14 = 0;
      piVar7[0x1a] = 1;
      piVar22 = piVar7;
      if (0 < piVar7[0x1c]) {
        do {
          iVar20 = 0;
          pSVar23 = Splines[*piVar22];
          pSVar21 = pSVar23;
          if (0 < pSVar23->cnt + -1) {
            do {
              fVar1 = pSVar21->points[0].y - pSVar21->points[1].y;
              fVar2 = pSVar21->points[0].x - pSVar21->points[1].x;
              fVar3 = pSVar21->points[0].z - pSVar21->points[1].z;
              iVar20 = iVar20 + 1;
              pSVar21->points[0].w = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
              pSVar21 = (Spline *)pSVar21->points;
            } while (iVar20 < pSVar23->cnt + -1);
          }
          iVar14 = iVar14 + 1;
          fVar1 = pSVar23->points[iVar20].y - pSVar23->points[0].y;
          fVar2 = pSVar23->points[iVar20].x - pSVar23->points[0].x;
          fVar3 = pSVar23->points[iVar20].z - pSVar23->points[0].z;
          pSVar23->points[iVar20].w = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
          piVar22 = piVar22 + 1;
        } while (iVar14 < piVar7[0x1c]);
      }
      moby->updateDistance = -1;
    }
    if (hero::g_heroStateType == 0x10) {
      pSVar23 = (Spline *)0x0;
      iVar14 = 0;
      dVar35 = 9999.0;
      if (0 < piVar7[0x1c]) {
        uVar33 = 0x408f380000000000;
        dVar31 = 5.0;
        dVar30 = 0.0;
        dVar28 = in_f31;
        dVar38 = in_f31;
        piVar22 = piVar7;
        do {
          pSVar21 = Splines[*piVar22];
          mobyutil::MB_PathFollowToPos
                    (uVar33,dVar31,dVar30,pSVar21,&g_heroPosition,uVar11 - 0x120,uVar11 - 0x108,
                     uVar11 - 0x104);
          fVar1 = (float)((double)g_heroPosition.y - (double)*(float *)((int)puVar9 + 0x94));
          fVar2 = (float)((double)g_heroPosition.x - (double)*(float *)(puVar9 + 0x12));
          iVar20 = piVar7[0x1c];
          dVar26 = (double)SQRT(fVar2 * fVar2 + fVar1 * fVar1);
          if (dVar26 < dVar35) {
            in_f31 = (double)*(float *)(puVar9 + 0x13);
            *(undefined4 *)(puVar9 + 0x14) = *(undefined4 *)(puVar9 + 0x15);
            *(undefined4 *)((int)puVar9 + 0xa4) = *(undefined4 *)((int)puVar9 + 0xac);
            dVar35 = dVar26;
            dVar28 = (double)*(float *)((int)puVar9 + 0x94);
            dVar38 = (double)*(float *)(puVar9 + 0x12);
            pSVar23 = pSVar21;
          }
          iVar14 = iVar14 + 1;
          piVar22 = piVar22 + 1;
        } while (iVar14 < iVar20);
        if (pSVar23 != (Spline *)0x0) {
          dVar26 = 0.30000001192092896;
          iVar14 = mobyutil::MB_PathMoveDist
                             (0x3fd3333340000000,pSVar23,uVar11 - 0x130,uVar11 - 0x110,
                              uVar11 - 0x10c);
          if (dVar35 <= (double)(float)piVar7[0x19]) {
            if (Level == Novalis) {
              iVar20 = *(int *)(puVar9 + 0x14);
              iVar18 = pSVar23->cnt + -1;
              dVar35 = dVar30;
              if (iVar20 < iVar18) {
                iVar18 = iVar18 - iVar20;
                pVVar24 = pSVar23->points + iVar20 + -1;
                do {
                  iVar18 = iVar18 + -1;
                  dVar35 = (double)(float)(dVar35 + (double)pVVar24[1].w);
                  pVVar24 = pVVar24 + 1;
                } while (0 < iVar18);
              }
              if (8.0 <= dVar35) {
                if (15.0 <= dVar35) {
                  dVar29 = dVar31;
                  if (30.0 <= dVar35) {
                    dVar29 = 9.0;
                  }
                }
                else {
                  dVar29 = 4.0;
                }
              }
              else {
                dVar29 = 3.0;
              }
              piVar7[0x18] = (int)(float)((double)mobyutil::g_FrameTime * dVar29);
            }
            if (iVar14 == 0) {
              fVar1 = (float)((double)*(float *)((int)puVar9 + 0x84) - dVar28);
              dVar36 = (double)fVar1;
              fVar2 = *(float *)(puVar9 + 0x10);
              dVar37 = (double)(float)((double)fVar2 - dVar38);
              dVar34 = (double)*(float *)((int)puVar9 + 0x8c);
              fVar3 = SQRT((float)(dVar37 * dVar37 + (double)(float)(dVar36 * dVar36)));
              dVar32 = (double)fVar3;
              *(float *)((int)puVar9 + 0xc4) = (float)((double)*(float *)(puVar9 + 0x11) - in_f31);
              dVar29 = ABS((double)(float)((double)*(float *)(puVar9 + 0x11) - in_f31));
              *(float *)(puVar9 + 0x18) = fVar3;
              *(float *)(puVar9 + 0x19) = (float)(ABS(dVar32) - dVar29);
              uVar16 = (ulonglong)(*(uint *)(puVar9 + 0x18) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)(puVar9 + 0x19) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)((int)puVar9 + 0xc4) >> 0x1d) & 4;
              dVar35 = ABS((double)*(float *)(puVar9 + 0x18));
              if ((double)*(float *)(puVar9 + 0x19) - dVar30 < 0.0) {
                dVar35 = dVar29;
              }
              fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
              fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
              dVar29 = ABS((double)*(float *)((int)puVar9 + 0xc4));
              if ((double)*(float *)(puVar9 + 0x19) - dVar30 < 0.0) {
                dVar29 = ABS(dVar32);
              }
              dVar27 = dVar30;
              if (dVar30 < dVar35) {
                lVar12 = uVar11 - 0x1a0;
                lVar15 = uVar11 - 0xc4;
                lVar17 = uVar11 - 0xb4;
                lVar25 = 2;
                fVar4 = (float)(dVar29 - dVar35) / (float)(dVar29 + dVar35);
                fVar5 = fVar4 * fVar4;
                *(float *)(puVar9 + 0x1f) = fVar4;
                *(float *)(puVar9 + 0x1e) = fVar4;
                *(float *)((int)puVar9 + 0xf4) = fVar4;
                *(float *)((int)puVar9 + 0xec) = fVar4;
                fVar4 = fVar5 * fVar5;
                *(float *)(puVar9 + 0x1e) = *(float *)(puVar9 + 0x1e) * fVar5;
                *(float *)((int)puVar9 + 0xf4) = *(float *)((int)puVar9 + 0xf4) * fVar4;
                *(float *)(puVar9 + 0x1f) = *(float *)(puVar9 + 0x1f) * fVar4 * fVar5;
                do {
                  *(float *)((int)lVar12 + 0xec) = *(float *)((int)lVar12 + 0xdc) * fVar4 * fVar4;
                  iVar14 = (int)lVar15;
                  lVar12 = lVar12 + 8;
                  lVar15 = lVar15 + 8;
                  *(float *)((int)lVar17 + 4) = *(float *)(iVar14 + 4) * fVar4 * fVar4;
                  lVar17 = lVar17 + 8;
                  lVar25 = lVar25 + -1;
                } while (lVar25 != 0);
                lVar25 = 4;
                lVar17 = uVar11 - 0xc4;
                pfVar19 = (float *)&DAT_007358e0;
                lVar12 = lVar13;
                lVar15 = lVar17;
                do {
                  fVar4 = *pfVar19;
                  fVar5 = pfVar19[1];
                  pfVar19 = pfVar19 + 2;
                  *(float *)((int)lVar12 + 0xec) = *(float *)((int)lVar12 + 0xec) * fVar4;
                  lVar12 = lVar12 + 8;
                  *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar5;
                  lVar15 = lVar15 + 8;
                  lVar25 = lVar25 + -1;
                } while (lVar25 != 0);
                lVar15 = 2;
                lVar12 = lVar13;
                dVar35 = dVar30;
                do {
                  iVar14 = (int)lVar12;
                  lVar12 = lVar12 + 0x10;
                  iVar20 = (int)lVar17;
                  lVar17 = lVar17 + 0x10;
                  dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar14 + 0xec)) +
                                    *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) +
                                   *(float *)(iVar20 + 0xc));
                  lVar15 = lVar15 + -1;
                } while (lVar15 != 0);
                dVar27 = (double)((float)(dVar35 + 0.7853981852531433) * fVar6 + fVar3);
              }
              *(float *)((int)puVar9 + 0xb4) = (float)((double)fVar2 - dVar38);
              *(float *)(puVar9 + 0x17) = fVar1;
              DAT_0096a6b4 = (float)dVar27;
              *(float *)((int)puVar9 + 0xbc) = (float)(ABS(dVar37) - ABS(dVar36));
              uVar16 = (ulonglong)(*(uint *)((int)puVar9 + 0xb4) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)((int)puVar9 + 0xbc) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)(puVar9 + 0x17) >> 0x1d) & 4;
              dVar35 = ABS((double)*(float *)((int)puVar9 + 0xb4));
              if ((double)*(float *)((int)puVar9 + 0xbc) - dVar30 < 0.0) {
                dVar35 = ABS(dVar36);
              }
              fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
              dVar29 = ABS((double)*(float *)(puVar9 + 0x17));
              if ((double)*(float *)((int)puVar9 + 0xbc) - dVar30 < 0.0) {
                dVar29 = ABS(dVar37);
              }
              fVar2 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
              dVar27 = dVar30;
              if (dVar30 < dVar35) {
                lVar12 = uVar11 - 0x1a0;
                lVar15 = uVar11 - 0xe4;
                lVar17 = uVar11 - 0xd4;
                lVar25 = 2;
                fVar3 = (float)(dVar29 - dVar35) / (float)(dVar29 + dVar35);
                fVar6 = fVar3 * fVar3;
                *(float *)(puVar9 + 0x1b) = fVar3;
                *(float *)(puVar9 + 0x1a) = fVar3;
                *(float *)((int)puVar9 + 0xd4) = fVar3;
                *(float *)((int)puVar9 + 0xcc) = fVar3;
                fVar3 = fVar6 * fVar6;
                *(float *)(puVar9 + 0x1a) = *(float *)(puVar9 + 0x1a) * fVar6;
                *(float *)((int)puVar9 + 0xd4) = *(float *)((int)puVar9 + 0xd4) * fVar3;
                *(float *)(puVar9 + 0x1b) = *(float *)(puVar9 + 0x1b) * fVar3 * fVar6;
                do {
                  *(float *)((int)lVar12 + 0xcc) = *(float *)((int)lVar12 + 0xbc) * fVar3 * fVar3;
                  iVar14 = (int)lVar15;
                  lVar12 = lVar12 + 8;
                  lVar15 = lVar15 + 8;
                  *(float *)((int)lVar17 + 4) = *(float *)(iVar14 + 4) * fVar3 * fVar3;
                  lVar17 = lVar17 + 8;
                  lVar25 = lVar25 + -1;
                } while (lVar25 != 0);
                lVar25 = 4;
                lVar17 = uVar11 - 0xe4;
                pfVar19 = (float *)&DAT_007358e0;
                lVar12 = lVar13;
                lVar15 = lVar17;
                do {
                  fVar3 = *pfVar19;
                  fVar6 = pfVar19[1];
                  pfVar19 = pfVar19 + 2;
                  *(float *)((int)lVar12 + 0xcc) = *(float *)((int)lVar12 + 0xcc) * fVar3;
                  lVar12 = lVar12 + 8;
                  *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar6;
                  lVar15 = lVar15 + 8;
                  lVar25 = lVar25 + -1;
                } while (lVar25 != 0);
                lVar12 = 2;
                dVar35 = dVar30;
                do {
                  iVar14 = (int)lVar13;
                  lVar13 = lVar13 + 0x10;
                  iVar20 = (int)lVar17;
                  lVar17 = lVar17 + 0x10;
                  dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar14 + 0xcc)) +
                                    *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) +
                                   *(float *)(iVar20 + 0xc));
                  lVar12 = lVar12 + -1;
                } while (lVar12 != 0);
                dVar27 = (double)((float)(dVar35 + 0.7853981852531433) * fVar1 + fVar2);
              }
              DAT_0096a6b0 = (float)dVar27;
              uVar8 = piVar7[0x18] >> 0x1f;
              if ((int)(((uint)((int)DAT_0096a6bc >> 0x1f) >> 1 ^ (uint)DAT_0096a6bc) -
                       ((int)DAT_0096a6bc >> 0x1f)) < (int)((uVar8 >> 1 ^ piVar7[0x18]) - uVar8)) {
                mobyutil::Delt((float)piVar7[0x18],DAT_0071f418 * 6.0,&DAT_0096a6bc);
              }
              else {
                mobyutil::Delt((float)piVar7[0x18],DAT_0071f418 * 6.0,&DAT_0096a6bc);
              }
              if (0.0010000000474974513 < dVar32) {
                DAT_00969dd8 = 0.0;
                DAT_00969ddc = (float)dVar34;
                dVar34 = (double)(float)(dVar37 * (double)(float)((double)DAT_0096a6bc / dVar32));
                dVar29 = (double)(float)(dVar36 * (double)(float)((double)DAT_0096a6bc / dVar32));
                dVar35 = dVar30;
                if (dVar30 - dVar32 < 0.0) {
                  dVar35 = dVar34;
                }
                dVar36 = dVar30;
                if (dVar30 - dVar32 < 0.0) {
                  dVar36 = dVar29;
                }
                if (dVar32 - dVar30 < 0.0) {
                  dVar35 = dVar34;
                }
                if (dVar32 - dVar30 < 0.0) {
                  dVar36 = dVar29;
                }
                DAT_00969dd0 = (float)dVar35;
                DAT_00969dd4 = (float)dVar36;
              }
              dVar29 = (double)(float)(dVar28 - (double)g_heroPosition.y);
              dVar32 = (double)(float)(dVar38 - (double)g_heroPosition.x);
              dVar28 = (double)mobyutil::g_FrameTime;
              dVar35 = (double)DAT_0071f40c;
              dVar38 = (double)SQRT((float)(dVar32 * dVar32 + (double)(float)(dVar29 * dVar29)));
              *(float *)(puVar9 + 0x16) = (float)-dVar38;
              mobyutil::AccelDelt((float)dVar30,(float)(dVar35 * 0.00800000037997961),
                                  (float)(dVar35 * dVar26),(float)(dVar28 * dVar31),
                                  (float *)(puVar9 + 0x16),0x720000,&DAT_0096a6c0);
              sVar10 = DAT_00969ec0;
              dVar35 = (double)DAT_0096a6c0;
              if (dVar38 < (double)DAT_0096a6c0) {
                DAT_0096a6c0 = (float)dVar38;
                dVar35 = dVar38;
              }
              dVar28 = dVar29;
              dVar31 = dVar32;
              if ((dVar35 < dVar38) && (dVar28 = dVar30, dVar31 = dVar30, dVar38 != dVar30)) {
                dVar28 = (double)(float)((double)(float)(dVar35 / dVar38) * dVar29);
                dVar31 = (double)(float)((double)(float)(dVar35 / dVar38) * dVar32);
              }
              DAT_00969dd0 = (float)((double)DAT_00969dd0 + dVar31);
              DAT_00969dd4 = (float)((double)DAT_00969dd4 + dVar28);
              DAT_00969ddc = 0.0;
              DAT_00969e38 = DAT_00969dd8;
              DAT_00969e3c = 0;
              auVar39 = ZEXT416(0xffffffff);
              auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
              auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
              auVar39 = loadVectorLeftIndexed(0x3c,0x40fad0);
              auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar39 = vectorMultiplyAddFloatingPoint
                                  (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 |
                                           auVar39 << 0x60,auVar40);
              auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
              hero::g_heroExternalMomentum = DAT_00969dd0;
              DAT_00969e34 = DAT_00969dd4;
              puVar9[0x22] = (longlong)(int)(animationSpeed * 30.5);
              if ((int)sVar10 < *(int *)((int)puVar9 + 0x114)) {
                auVar39 = vectorSplatHalfWord(auVar39,1);
                DAT_00969ec0 = storeVectorElementHalfWordIndexed(auVar39,0x1e0,0x969ce0);
              }
            }
            else {
              fVar1 = DAT_0071f408 * -0.00999999 + 1.0;
              DAT_00969ddc = 0.0;
              DAT_00969dd0 = hero::g_heroExternalMomentum * fVar1;
              DAT_00969dd4 = DAT_00969e34 * fVar1;
              DAT_00969dd8 = DAT_00969e38 * fVar1;
              hero::g_heroExternalMomentum = DAT_00969dd0;
              DAT_00969e34 = DAT_00969dd4;
              DAT_00969e38 = DAT_00969dd8;
            }
          }
        }
      }
    }
  }
  return;
}



