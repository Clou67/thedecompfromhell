//==== 00180210  ns=Global  size=0x1c4
// sig: undefined UpdateSound_3(void)
// callers(0): 
// callees(3): 0015d844 sound::sound_SetReverb; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

void UpdateSound_3(int param_1)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  
  fVar2 = g_heroPosition.y - *(float *)(param_1 + 0x44);
  fVar3 = g_heroPosition.x - *(float *)(param_1 + 0x40);
  fVar4 = g_heroPosition.z - *(float *)(param_1 + 0x48);
  puVar1 = *(undefined1 **)(param_1 + 8);
  fVar5 = *(float *)(param_1 + 0x70) * fVar4 +
          *(float *)(param_1 + 0x50) * fVar3 + *(float *)(param_1 + 0x60) * fVar2;
  if (((1.0 < ABS(fVar5)) ||
      (1.0 < ABS(*(float *)(param_1 + 0x74) * fVar4 +
                 *(float *)(param_1 + 0x54) * fVar3 + *(float *)(param_1 + 100) * fVar2))) ||
     (1.0 < ABS(*(float *)(param_1 + 0x78) * fVar4 +
                *(float *)(param_1 + 0x58) * fVar3 + *(float *)(param_1 + 0x68) * fVar2))) {
    if (puVar1[3] != '\0') {
      if (fVar5 <= 0.0) {
        sound::sound_SetReverb(param_1,5,0,0,0);
      }
      else {
        sound::sound_SetReverb(0,*puVar1,*(undefined4 *)(puVar1 + 4),puVar1[1],puVar1[2]);
      }
      puVar1[3] = 0;
    }
  }
  else {
    dVar8 = (double)(float)((double)(fVar5 + 1.0) * 0.5);
    dVar7 = (double)fastfunc::FastIntToDouble
                              ((double)(fVar5 + 1.0),0x3fe0000000000000,*(undefined4 *)(puVar1 + 4))
    ;
    lVar6 = fastfunc::FastDoubleToInt((double)(float)(dVar7 * dVar8));
    sound::sound_SetReverb
              (param_1,*puVar1,
               lVar6 + (*(int *)(puVar1 + 4) - lVar6 >> 0x3f & *(int *)(puVar1 + 4) - lVar6),
               puVar1[1],puVar1[2]);
    puVar1[3] = 1;
  }
  return;
}



//==== 001803d4  ns=water  size=0x14
// sig: undefined Water_StaticInit2(void)
// callers(0): 
// callees(0): 

void water::Water_StaticInit2(void)

{
  DAT_0073b58c = 0x10000;
  return;
}



//==== 00180408  ns=Global  size=0x2e0
// sig: undefined UpdateSound_4(void)
// callers(0): 
// callees(4): 001113e0 mobyutil::MB_RotateQuatAxisAngle; 00118d60 mobyutil::MB_SampleByteGrid; 0015d434 sound::sound_AmbientPlay; 0015d710 sound::sound_SetVol

void UpdateSound_4(void *param_1)

{
  int *piVar1;
  uint handle;
  float fVar2;
  ulonglong uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float local_a0;
  float local_9c;
  float local_98;
  char local_94 [4];
  float local_90 [8];
  longlong local_70;
  
  local_90[0] = 4.0;
  dVar11 = 0.0;
  local_90[1] = 0.0;
  local_90[2] = 0.0;
  piVar1 = *(int **)((int)param_1 + 8);
  dVar13 = 1.0;
  local_90[3] = 1.0;
  local_90[4] = 0.0;
  local_90[5] = 0.0;
  local_90[6] = 1.0;
  dVar8 = 6.2831854820251465;
  dVar9 = 0.05000000074505806;
  dVar10 = 0.3141592741012573;
  dVar7 = dVar11;
  dVar12 = dVar11;
  do {
    mobyutil::MB_RotateQuatAxisAngle((float)dVar11,&local_a0,local_90);
    local_a0 = GameCamera.posX + local_a0;
    local_98 = GameCamera.posZ + local_98;
    local_9c = GameCamera.posY + local_9c;
    local_94[0] = GameCamera.field8_0x14c[0];
    local_94[1] = GameCamera.field8_0x14c[1];
    local_94[2] = GameCamera.field8_0x14c[2];
    local_94[3] = GameCamera.field8_0x14c[3];
    dVar5 = (double)mobyutil::MB_SampleByteGrid
                              (CONCAT44(local_a0,local_9c),
                               CONCAT44(local_98,GameCamera.field8_0x14c));
    dVar11 = (double)(float)(dVar11 + dVar10);
    dVar6 = (double)GameCamera.posZ;
    if (dVar5 - dVar6 < 0.0) {
      dVar7 = (double)(float)(dVar7 + dVar9);
    }
  } while (dVar11 < dVar8);
  dVar11 = (double)DAT_00e5af00;
  if (dVar7 <= dVar11) {
    dVar7 = -(double)(float)((double)DAT_0071f424 * 0.75 - dVar11);
  }
  else {
    dVar7 = (double)(float)((double)DAT_0071f424 * 0.20000000298023224 + dVar11);
  }
  DAT_00e5af00 = (float)dVar7;
  if (dVar7 <= dVar13) {
    if (dVar7 < dVar12) {
      DAT_00e5af00 = 0.0;
      dVar7 = dVar12;
    }
  }
  else {
    DAT_00e5af00 = 1.0;
    dVar7 = dVar13;
  }
  handle = piVar1[2];
  uVar3 = (ulonglong)handle;
  if ((sound::g_SoundChannels[handle].pSoundInstance == param_1) &&
     (sound::g_SoundChannels[handle].state != '\0')) {
    iVar4 = (int)(((float)((double)(float)piVar1[1] + dVar7) /
                  (float)((double)(float)piVar1[1] + dVar13)) * 1024.0);
    local_70 = (longlong)iVar4;
    sound::sound_SetVol(handle,iVar4);
    uVar3 = (ulonglong)(uint)piVar1[2];
    dVar6 = (double)GameCamera.posZ;
  }
  iVar4 = (int)(uVar3 << 7) - (int)(uVar3 << 4);
  *(float *)((int)sound::g_SoundChannels + iVar4 + 0x20) = GameCamera.posX;
  fVar2 = GameCamera.posY;
  *(float *)((int)sound::g_SoundChannels + iVar4 + 0x28) = (float)dVar6;
  *(float *)((int)sound::g_SoundChannels + iVar4 + 0x24) = fVar2;
  *(char (*) [4])((int)sound::g_SoundChannels + iVar4 + 0x2c) = GameCamera.field8_0x14c;
  if ((sound::g_SoundChannels[piVar1[2]].pSoundInstance != param_1) ||
     (sound::g_SoundChannels[piVar1[2]].state == '\0')) {
    iVar4 = sound::sound_AmbientPlay(*piVar1,0x15,param_1,0x400);
    piVar1[2] = iVar4;
  }
  return;
}



//==== 001806e8  ns=Global  size=0xf8
// sig: undefined UpdateSound_5(void)
// callers(0): 
// callees(2): 0015cdb0 sound::sound_Kill; 0015d434 sound::sound_AmbientPlay

void UpdateSound_5(void *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  
  piVar1 = *(int **)((int)param_1 + 8);
  iVar3 = piVar1[1];
  bVar2 = false;
  sound::g_SoundChannels[iVar3].pos[0] = GameCamera.posX;
  sound::g_SoundChannels[iVar3].pos[1] = GameCamera.posY;
  sound::g_SoundChannels[iVar3].pos[2] = GameCamera.posZ;
  sound::g_SoundChannels[iVar3].pos[3] = (float)GameCamera.field8_0x14c;
  iVar3 = piVar1[1];
  if ((sound::g_SoundChannels[iVar3].pSoundInstance == param_1) &&
     (sound::g_SoundChannels[iVar3].state != '\0')) {
    bVar2 = true;
  }
  if (GameCamera.camUnderWater == 0) {
    if (bVar2) {
      sound::sound_Kill(iVar3);
      piVar1[1] = -1;
    }
  }
  else if (!bVar2) {
    iVar3 = sound::sound_AmbientPlay(*piVar1,0x15,param_1,0x400);
    piVar1[1] = iVar3;
  }
  return;
}



//==== 001807e8  ns=Global  size=0x174
// sig: undefined UpdateSound_6(void)
// callers(0): 
// callees(1): 0011ccc8 music::music_SetTransition

void UpdateSound_6(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  short sVar7;
  
  piVar1 = *(int **)(param_1 + 8);
  sVar7 = *(short *)(piVar1 + 3);
  if ((sVar7 != -1) || (*(short *)((int)piVar1 + 0xe) != -1)) {
    fVar2 = g_heroPosition.y - *(float *)(param_1 + 0x44);
    fVar3 = g_heroPosition.x - *(float *)(param_1 + 0x40);
    fVar4 = g_heroPosition.z - *(float *)(param_1 + 0x48);
    fVar5 = *(float *)(param_1 + 0x70) * fVar4 +
            *(float *)(param_1 + 0x50) * fVar3 + *(float *)(param_1 + 0x60) * fVar2;
    if ((1.0 < ABS(fVar5)) ||
       ((1.0 < ABS(*(float *)(param_1 + 0x74) * fVar4 +
                   *(float *)(param_1 + 0x54) * fVar3 + *(float *)(param_1 + 100) * fVar2) ||
        (1.0 < ABS(*(float *)(param_1 + 0x78) * fVar4 +
                   *(float *)(param_1 + 0x58) * fVar3 + *(float *)(param_1 + 0x68) * fVar2))))) {
      if (piVar1[2] != 0) {
        sVar6 = *(short *)((int)piVar1 + 0xe);
        if (*(short *)((int)piVar1 + 0xe) == -1) {
          *(short *)((int)piVar1 + 0xe) = sVar7;
          sVar6 = sVar7;
        }
        if (sVar7 == -1) {
          *(short *)(piVar1 + 3) = sVar6;
          sVar7 = sVar6;
        }
        if (fVar5 <= 0.0) {
          music::music_SetTransition(*piVar1,(int)sVar7);
        }
        else {
          music::music_SetTransition(piVar1[1],(int)sVar6);
        }
        piVar1[2] = 0;
      }
    }
    else {
      piVar1[2] = 1;
    }
  }
  return;
}



//==== 0018095c  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_MOBY1(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_MOBY1(void)

{
  DAT_0073b5fc = 0x10000;
  return;
}



//==== 00180970  ns=mobyupdate_unsorted  size=0x14
// sig: undefined UpdateMoby_1(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1 */

void mobyupdate_unsorted::UpdateMoby_1(MobyInstance *moby)

{
                    /* WARNING: Load size is inaccurate */
  *(int *)moby->pVar = *moby->pVar + 1;
  return;
}



//==== 00180984  ns=mobyupdate_helpers  size=0x14
// sig: undefined M100_00180984(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M100_00180984(void)

{
  DAT_0073b66c = 0x10000;
  return;
}



//==== 00180998  ns=mobyupdate_helpers  size=0x148
// sig: undefined M100_00180998(MobyInstance * param_1)
// callers(1): 0018137c mobyupdate_unsorted::UpdateMoby_100
// callees(1): 001134c8 mobyutil::MB_compressVector

void mobyupdate_helpers::M100_00180998(MobyInstance *param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  float local_30;
  float local_2c;
  float local_28;
  f32 local_24;
  float local_20;
  float local_1c;
  float local_18;
  f32 local_14;
  
  pvVar1 = param_1->pVar;
  local_30 = *(float *)((int)pvVar1 + 0x10);
  iVar2 = *(int *)((int)pvVar1 + 0x28) + 1;
  local_2c = *(float *)((int)pvVar1 + 0x14);
  local_28 = *(float *)((int)pvVar1 + 0x18);
  *(int *)((int)pvVar1 + 0x28) = iVar2;
  local_24 = *(f32 *)((int)pvVar1 + 0x1c);
  if (3 < iVar2) {
    local_20 = local_30 - (param_1->pos).x;
    local_1c = local_2c - (param_1->pos).y;
    local_18 = local_28 - (param_1->pos).z;
    local_14 = local_24;
    mobyutil::MB_compressVector
              (&local_20,(int *)((int)pvVar1 + *(int *)((int)pvVar1 + 0x20) * 4 + 0x30));
    iVar2 = *(int *)((int)pvVar1 + 0x24) + 1;
    *(undefined4 *)((int)pvVar1 + 0x28) = 0;
    *(int *)((int)pvVar1 + 0x24) = iVar2;
    if (0x3f < iVar2) {
      *(undefined4 *)((int)pvVar1 + 0x24) = 0x3f;
    }
    uVar3 = *(int *)((int)pvVar1 + 0x20) + 1;
    local_30 = (param_1->pos).x;
    *(float *)((int)pvVar1 + 0x10) = local_30;
    local_2c = (param_1->pos).y;
    *(float *)((int)pvVar1 + 0x14) = local_2c;
    local_28 = (param_1->pos).z;
    *(uint *)((int)pvVar1 + 0x20) =
         uVar3 + (((int)uVar3 >> 6) + (uint)((int)uVar3 < 0 && (uVar3 & 0x3f) != 0)) * -0x40;
    *(float *)((int)pvVar1 + 0x18) = local_28;
    local_24 = (param_1->pos).w;
    *(f32 *)((int)pvVar1 + 0x1c) = local_24;
  }
  local_30 = local_30 - (param_1->pos).x;
  local_2c = local_2c - (param_1->pos).y;
  local_28 = local_28 - (param_1->pos).z;
  mobyutil::MB_compressVector
            (&local_30,(int *)((int)pvVar1 + *(int *)((int)pvVar1 + 0x20) * 4 + 0x30));
  return;
}



//==== 00180ae8  ns=mobyupdate_helpers  size=0x894
// sig: undefined M100_00180ae8(MobyInstance * param_1, undefined4 param_2)
// callers(1): 0018137c mobyupdate_unsorted::UpdateMoby_100
// callees(3): 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M100_00180ae8(MobyInstance *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  f32 fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  void *pvVar16;
  int iVar17;
  ulonglong *puVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulonglong uVar23;
  int iVar26;
  longlong lVar24;
  longlong lVar25;
  longlong lVar27;
  float *pfVar29;
  longlong lVar28;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  ulonglong uVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar34;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar35;
  
  uVar23 = ZEXT48(&stack0x00000000);
  lVar25 = uVar23 - 0x1b0;
  puVar18 = (ulonglong *)lVar25;
  *puVar18 = uVar23;
  puVar18[0x38] = in_LR;
  puVar18[0x2b] = in_f21;
  puVar18[0x2c] = in_f22;
  puVar18[0x2d] = in_f23;
  puVar18[0x2e] = in_f24;
  puVar18[0x2f] = in_f25;
  puVar18[0x30] = in_f26;
  puVar18[0x31] = in_f27;
  puVar18[0x32] = in_f28;
  puVar18[0x33] = in_f29;
  puVar18[0x34] = in_f30;
  puVar18[0x35] = in_f31;
  puVar18[0x2a] = unaff_r31;
  puVar18[0x29] = unaff_r30;
  pvVar16 = param_1->pVar;
  fVar3 = DAT_0073b690 * mobyutil::g_FrameTime;
  fVar1 = *(float *)((int)pvVar16 + 4);
  iVar17 = *(int *)((int)pvVar16 + 8);
  puVar18[0x28] = unaff_r29;
  puVar18[0x24] = (longlong)iVar17;
  fVar2 = *(float *)((int)pvVar16 + 0xc);
  puVar18[0x27] = unaff_r28;
  dVar35 = (double)((float)(longlong)puVar18[0x24] + fVar2 + fVar3 / fVar1);
  iVar26 = fastfunc::FastDoubleToInt(dVar35);
  *(int *)((int)pvVar16 + 8) = iVar26;
  iVar17 = *param_2;
  puVar18[0x24] = (longlong)iVar26;
  iVar26 = iVar26 - (iVar26 / iVar17) * iVar17;
  uVar31 = puVar18[0x24];
  *(int *)((int)pvVar16 + 8) = iVar26;
  iVar17 = *param_2;
  iVar19 = (iVar26 + 1) - ((iVar26 + 1) / iVar17) * iVar17;
  fVar1 = (float)(dVar35 - (double)(longlong)uVar31);
  *(float *)((int)pvVar16 + 0xc) = fVar1;
  fVar2 = (float)param_2[iVar26 * 4 + 4];
  iVar17 = (iVar26 + 2) - ((iVar26 + 2) / iVar17) * iVar17;
  fVar3 = (float)param_2[iVar26 * 4 + 5];
  fVar4 = (float)param_2[iVar19 * 4 + 4];
  fVar5 = (float)param_2[iVar19 * 4 + 5];
  fVar22 = fVar4 - fVar2;
  fVar6 = (float)param_2[iVar26 * 4 + 6];
  fVar21 = fVar5 - fVar3;
  fVar7 = (float)param_2[iVar19 * 4 + 6];
  fVar8 = (f32)param_2[iVar19 * 4 + 7];
  fVar20 = fVar7 - fVar6;
  fVar9 = (float)param_2[iVar17 * 4 + 4];
  fVar10 = (float)param_2[iVar17 * 4 + 5];
  fVar11 = (float)param_2[iVar17 * 4 + 6];
  *(float *)((int)puVar18 + 0x94) = fVar22;
  *(float *)(puVar18 + 0x13) = fVar21;
  *(float *)((int)puVar18 + 0x9c) = ABS(fVar22) - ABS(fVar21);
  dVar35 = 0.0;
  uVar31 = (ulonglong)(*(uint *)((int)puVar18 + 0x94) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar18 + 0x9c) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar18 + 0x13) >> 0x1d) & 4;
  fVar13 = ABS(*(float *)((int)puVar18 + 0x94));
  if (*(float *)((int)puVar18 + 0x9c) - 0.0 < 0.0) {
    fVar13 = ABS(fVar21);
  }
  fVar14 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar31 << 2));
  fVar15 = ABS(*(float *)(puVar18 + 0x13));
  if (*(float *)((int)puVar18 + 0x9c) - 0.0 < 0.0) {
    fVar15 = ABS(fVar22);
  }
  fVar12 = *(float *)(((uint)(uVar31 << 2) | 0x735900) + 4);
  dVar33 = dVar35;
  if (0.0 < fVar13) {
    lVar24 = uVar23 - 0x1a0;
    lVar27 = uVar23 - 0xb0;
    lVar28 = uVar23 - 0xa0;
    lVar30 = 2;
    fVar13 = (fVar15 - fVar13) / (fVar15 + fVar13);
    fVar15 = fVar13 * fVar13;
    *(float *)((int)puVar18 + 0x10c) = fVar13;
    *(float *)((int)puVar18 + 0x104) = fVar13;
    *(float *)(puVar18 + 0x21) = fVar13;
    *(float *)(puVar18 + 0x20) = fVar13;
    fVar13 = fVar15 * fVar15;
    *(float *)((int)puVar18 + 0x104) = *(float *)((int)puVar18 + 0x104) * fVar15;
    *(float *)(puVar18 + 0x21) = *(float *)(puVar18 + 0x21) * fVar13;
    *(float *)((int)puVar18 + 0x10c) = *(float *)((int)puVar18 + 0x10c) * fVar13 * fVar15;
    do {
      *(float *)((int)lVar24 + 0x100) = *(float *)((int)lVar24 + 0xf0) * fVar13 * fVar13;
      iVar17 = (int)lVar27;
      lVar24 = lVar24 + 8;
      lVar27 = lVar27 + 8;
      *(float *)((int)lVar28 + 4) = *(float *)(iVar17 + 4) * fVar13 * fVar13;
      lVar28 = lVar28 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar30 = 4;
    lVar28 = uVar23 - 0xb0;
    pfVar29 = (float *)&DAT_007358e0;
    lVar24 = lVar25;
    lVar27 = lVar28;
    do {
      fVar13 = *pfVar29;
      fVar15 = pfVar29[1];
      pfVar29 = pfVar29 + 2;
      *(float *)((int)lVar24 + 0x100) = *(float *)((int)lVar24 + 0x100) * fVar13;
      lVar24 = lVar24 + 8;
      *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar15;
      lVar27 = lVar27 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar27 = 2;
    lVar24 = lVar25;
    do {
      iVar17 = (int)lVar24;
      lVar24 = lVar24 + 0x10;
      iVar19 = (int)lVar28;
      lVar28 = lVar28 + 0x10;
      dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar17 + 0x100)) +
                        *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) + *(float *)(iVar19 + 0xc));
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar14 + fVar12);
  }
  *(float *)((int)puVar18 + 0x8c) = fVar20;
  fVar13 = SQRT(fVar22 * fVar22 + fVar21 * fVar21);
  fVar14 = ABS(fVar13);
  *(float *)(puVar18 + 0x11) = fVar13;
  *(float *)(puVar18 + 0x12) = fVar14 - ABS(fVar20);
  uVar31 = (ulonglong)(*(uint *)(puVar18 + 0x11) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar18 + 0x12) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar18 + 0x8c) >> 0x1d) & 4;
  fVar13 = ABS(*(float *)(puVar18 + 0x11));
  if (*(float *)(puVar18 + 0x12) - 0.0 < 0.0) {
    fVar13 = ABS(fVar20);
  }
  fVar15 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar31 << 2));
  fVar12 = ABS(*(float *)((int)puVar18 + 0x8c));
  if (*(float *)(puVar18 + 0x12) - 0.0 < 0.0) {
    fVar12 = fVar14;
  }
  fVar14 = *(float *)(((uint)(uVar31 << 2) | 0x735900) + 4);
  dVar34 = dVar35;
  if (0.0 < fVar13) {
    lVar24 = uVar23 - 0x1a0;
    lVar27 = uVar23 - 0xd0;
    lVar28 = uVar23 - 0xc0;
    lVar30 = 2;
    fVar13 = (fVar12 - fVar13) / (fVar12 + fVar13);
    fVar12 = fVar13 * fVar13;
    *(float *)((int)puVar18 + 0xec) = fVar13;
    *(float *)((int)puVar18 + 0xe4) = fVar13;
    *(float *)(puVar18 + 0x1d) = fVar13;
    *(float *)(puVar18 + 0x1c) = fVar13;
    fVar13 = fVar12 * fVar12;
    *(float *)((int)puVar18 + 0xe4) = *(float *)((int)puVar18 + 0xe4) * fVar12;
    *(float *)(puVar18 + 0x1d) = *(float *)(puVar18 + 0x1d) * fVar13;
    *(float *)((int)puVar18 + 0xec) = *(float *)((int)puVar18 + 0xec) * fVar13 * fVar12;
    do {
      *(float *)((int)lVar24 + 0xe0) = *(float *)((int)lVar24 + 0xd0) * fVar13 * fVar13;
      iVar17 = (int)lVar27;
      lVar24 = lVar24 + 8;
      lVar27 = lVar27 + 8;
      *(float *)((int)lVar28 + 4) = *(float *)(iVar17 + 4) * fVar13 * fVar13;
      lVar28 = lVar28 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar30 = 4;
    lVar28 = uVar23 - 0xd0;
    pfVar29 = (float *)&DAT_007358e0;
    lVar24 = lVar25;
    lVar27 = lVar28;
    do {
      fVar13 = *pfVar29;
      fVar12 = pfVar29[1];
      pfVar29 = pfVar29 + 2;
      *(float *)((int)lVar24 + 0xe0) = *(float *)((int)lVar24 + 0xe0) * fVar13;
      lVar24 = lVar24 + 8;
      *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar12;
      lVar27 = lVar27 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar27 = 2;
    lVar24 = lVar25;
    do {
      iVar17 = (int)lVar24;
      lVar24 = lVar24 + 0x10;
      iVar19 = (int)lVar28;
      lVar28 = lVar28 + 0x10;
      dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar17 + 0xe0)) + *(float *)(iVar19 + 4)
                        + *(float *)(iVar19 + 8) + *(float *)(iVar19 + 0xc));
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar15 + fVar14);
  }
  fVar9 = fVar9 - fVar4;
  fVar10 = fVar10 - fVar5;
  fVar11 = fVar11 - fVar7;
  *(float *)((int)puVar18 + 0x7c) = fVar9;
  *(float *)(puVar18 + 0x10) = fVar10;
  *(float *)((int)puVar18 + 0x84) = ABS(fVar9) - ABS(fVar10);
  uVar31 = (ulonglong)(*(uint *)((int)puVar18 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar18 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar18 + 0x10) >> 0x1d) & 4;
  fVar4 = ABS(*(float *)((int)puVar18 + 0x7c));
  if (*(float *)((int)puVar18 + 0x84) - 0.0 < 0.0) {
    fVar4 = ABS(fVar10);
  }
  fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar31 << 2));
  fVar7 = ABS(*(float *)(puVar18 + 0x10));
  if (*(float *)((int)puVar18 + 0x84) - 0.0 < 0.0) {
    fVar7 = ABS(fVar9);
  }
  fVar13 = *(float *)(((uint)(uVar31 << 2) | 0x735900) + 4);
  dVar32 = dVar35;
  if (0.0 < fVar4) {
    lVar24 = uVar23 - 0x1a0;
    lVar27 = uVar23 - 0xf0;
    lVar28 = uVar23 - 0xe0;
    lVar30 = 2;
    fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
    fVar7 = fVar4 * fVar4;
    *(float *)((int)puVar18 + 0xcc) = fVar4;
    *(float *)((int)puVar18 + 0xc4) = fVar4;
    *(float *)(puVar18 + 0x19) = fVar4;
    *(float *)(puVar18 + 0x18) = fVar4;
    fVar4 = fVar7 * fVar7;
    *(float *)((int)puVar18 + 0xc4) = *(float *)((int)puVar18 + 0xc4) * fVar7;
    *(float *)(puVar18 + 0x19) = *(float *)(puVar18 + 0x19) * fVar4;
    *(float *)((int)puVar18 + 0xcc) = *(float *)((int)puVar18 + 0xcc) * fVar4 * fVar7;
    do {
      *(float *)((int)lVar24 + 0xc0) = *(float *)((int)lVar24 + 0xb0) * fVar4 * fVar4;
      iVar17 = (int)lVar27;
      lVar24 = lVar24 + 8;
      lVar27 = lVar27 + 8;
      *(float *)((int)lVar28 + 4) = *(float *)(iVar17 + 4) * fVar4 * fVar4;
      lVar28 = lVar28 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar30 = 4;
    lVar28 = uVar23 - 0xf0;
    pfVar29 = (float *)&DAT_007358e0;
    lVar24 = lVar25;
    lVar27 = lVar28;
    do {
      fVar4 = *pfVar29;
      fVar7 = pfVar29[1];
      pfVar29 = pfVar29 + 2;
      *(float *)((int)lVar24 + 0xc0) = *(float *)((int)lVar24 + 0xc0) * fVar4;
      lVar24 = lVar24 + 8;
      *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar7;
      lVar27 = lVar27 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar27 = 2;
    lVar24 = lVar25;
    do {
      iVar17 = (int)lVar24;
      lVar24 = lVar24 + 0x10;
      iVar19 = (int)lVar28;
      lVar28 = lVar28 + 0x10;
      dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar17 + 0xc0)) + *(float *)(iVar19 + 4)
                        + *(float *)(iVar19 + 8) + *(float *)(iVar19 + 0xc));
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar5 + fVar13);
  }
  *(float *)((int)puVar18 + 0x74) = fVar11;
  fVar11 = ABS(fVar11);
  fVar4 = SQRT(fVar9 * fVar9 + fVar10 * fVar10);
  fVar5 = ABS(fVar4);
  *(float *)(puVar18 + 0xe) = fVar4;
  *(float *)(puVar18 + 0xf) = fVar5 - fVar11;
  uVar31 = (ulonglong)(*(uint *)(puVar18 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar18 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar18 + 0x74) >> 0x1d) & 4;
  fVar4 = ABS(*(float *)(puVar18 + 0xe));
  if (*(float *)(puVar18 + 0xf) - 0.0 < 0.0) {
    fVar4 = fVar11;
  }
  fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar31 << 2));
  fVar9 = ABS(*(float *)((int)puVar18 + 0x74));
  if (*(float *)(puVar18 + 0xf) - 0.0 < 0.0) {
    fVar9 = fVar5;
  }
  fVar5 = *(float *)(((uint)(uVar31 << 2) | 0x735900) + 4);
  if (0.0 < fVar4) {
    lVar24 = uVar23 - 0x1a0;
    lVar27 = uVar23 - 0x110;
    lVar28 = uVar23 - 0x100;
    lVar30 = 2;
    fVar4 = (fVar9 - fVar4) / (fVar9 + fVar4);
    fVar9 = fVar4 * fVar4;
    *(float *)((int)puVar18 + 0xac) = fVar4;
    *(float *)((int)puVar18 + 0xa4) = fVar4;
    *(float *)(puVar18 + 0x15) = fVar4;
    *(float *)(puVar18 + 0x14) = fVar4;
    fVar4 = fVar9 * fVar9;
    *(float *)((int)puVar18 + 0xa4) = *(float *)((int)puVar18 + 0xa4) * fVar9;
    *(float *)(puVar18 + 0x15) = *(float *)(puVar18 + 0x15) * fVar4;
    *(float *)((int)puVar18 + 0xac) = *(float *)((int)puVar18 + 0xac) * fVar4 * fVar9;
    do {
      *(float *)((int)lVar24 + 0xa0) = *(float *)((int)lVar24 + 0x90) * fVar4 * fVar4;
      iVar17 = (int)lVar27;
      lVar24 = lVar24 + 8;
      lVar27 = lVar27 + 8;
      *(float *)((int)lVar28 + 4) = *(float *)(iVar17 + 4) * fVar4 * fVar4;
      lVar28 = lVar28 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar30 = 4;
    lVar28 = uVar23 - 0x110;
    pfVar29 = (float *)&DAT_007358e0;
    lVar24 = lVar25;
    lVar27 = lVar28;
    do {
      fVar4 = *pfVar29;
      fVar9 = pfVar29[1];
      pfVar29 = pfVar29 + 2;
      *(float *)((int)lVar24 + 0xa0) = *(float *)((int)lVar24 + 0xa0) * fVar4;
      lVar24 = lVar24 + 8;
      *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar9;
      lVar27 = lVar27 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar24 = 2;
    do {
      iVar17 = (int)lVar25;
      iVar19 = (int)lVar28;
      lVar25 = lVar25 + 0x10;
      lVar28 = lVar28 + 0x10;
      dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar17 + 0xa0)) + *(float *)(iVar19 + 4)
                        + *(float *)(iVar19 + 8) + *(float *)(iVar19 + 0xc));
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    dVar35 = (double)((float)(dVar35 + 0.7853981852531433) * fVar7 + fVar5);
  }
  (param_1->pos).w = fVar8;
  (param_1->pos).x = fVar1 * fVar22 + fVar2;
  (param_1->pos).y = fVar1 * fVar21 + fVar3;
  (param_1->pos).z = fVar1 * fVar20 + fVar6;
  dVar32 = (double)fastfunc::FastDiffRots(dVar32,dVar33);
  dVar33 = (double)fastfunc::FastWrapRot
                             ((float)(dVar32 * (double)*(float *)((int)pvVar16 + 0xc)),(float)dVar33
                             );
  (param_1->rotation).z = (float)dVar33;
  dVar35 = (double)fastfunc::FastDiffRots(dVar35,dVar34);
  dVar35 = (double)fastfunc::FastWrapRot
                             ((float)(dVar35 * (double)*(float *)((int)pvVar16 + 0xc)),(float)dVar34
                             );
  (param_1->rotation).y = (float)-dVar35;
  return;
}



//==== 0018137c  ns=mobyupdate_unsorted  size=0x190
// sig: undefined UpdateMoby_100(MobyInstance * moby)
// callers(0): 
// callees(4): 0006d720 RegisterFuncForMoby; 000f1ec8 mobyfunc::SetColorOfMoby; 00180998 mobyupdate_helpers::M100_00180998; 00180ae8 mobyupdate_helpers::M100_00180ae8

/* Moby 100 */

void mobyupdate_unsorted::UpdateMoby_100(MobyInstance *moby)

{
  int *piVar1;
  Spline *pSVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  piVar1 = (int *)moby->pVar;
  if (moby->state == 0) {
    moby->drawDistance = 0xff;
    moby->updateDistance = -1;
    mobyfunc::SetColorOfMoby(moby,0xc0,0xc0,0xc0);
    pSVar2 = Splines[*piVar1];
    moby->scale = moby->pClass->gScale * DAT_0073b694;
    fVar3 = pSVar2->points[0].y - pSVar2->points[1].y;
    fVar4 = pSVar2->points[0].x - pSVar2->points[1].x;
    fVar5 = pSVar2->points[0].z - pSVar2->points[1].z;
    piVar1[1] = (int)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
    moby->state = '\x01';
    piVar1[2] = 0;
    (moby->pos).x = pSVar2->points[0].x;
    (moby->pos).y = pSVar2->points[0].y;
    (moby->pos).z = pSVar2->points[0].z;
    (moby->pos).w = pSVar2->points[0].w;
    piVar1[10] = 0;
    piVar1[9] = 0;
    piVar1[8] = 0;
    piVar1[4] = (int)(moby->pos).x;
    piVar1[5] = (int)(moby->pos).y;
    piVar1[6] = (int)(moby->pos).z;
    piVar1[7] = (int)(moby->pos).w;
  }
  else if (moby->state < 2) {
    mobyupdate_helpers::M100_00180ae8(moby,Splines[*piVar1]);
    mobyupdate_helpers::M100_00180998(moby);
    if (DAT_00e5af04 == 0) {
      RegisterFuncForMoby(&PTR_M1000_0018150c_007082b8,moby);
    }
  }
  return;
}



//==== 0018150c  ns=mobyupdate_helpers  size=0x110
// sig: undefined M1000_0018150c(void)
// callers(0): 
// callees(5): 000685c4 draw::GetEffectTex; 001135f0 mobyutil::MB_decompressVector; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1000_0018150c(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float afStack_30 [6];
  
  iVar1 = *(int *)(param_1 + 0x78);
  draw::GetEffectTex(0x15);
  stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(0,0,0,0,0,0);
  idol_draw::PackCmd(DAT_00e5af08,DAT_0073b698,DAT_00e5af0c,DAT_0073b69c,0x80);
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 0x24)) {
    do {
      uVar2 = (*(int *)(iVar1 + 0x20) - iVar3) + 0x40;
      mobyutil::MB_decompressVector
                (afStack_30,
                 (int *)((uVar2 + (((int)uVar2 >> 6) + (uint)((int)uVar2 < 0 && (uVar2 & 0x3f) != 0)
                                  ) * -0x40) * 4 + iVar1 + 0x30));
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar1 + 0x24));
  }
  return;
}



//==== 00181628  ns=mobyupdate_unsorted  size=0x17c
// sig: undefined UpdateMoby_1000(MobyInstance * moby)
// callers(0): 
// callees(3): 0007b310 help::Help_QueueMessage; 00110b70 mobyutil::MB_IsPntInCuboid; 0011b728 mobyutil::MB_UnlockSkillPoint
// strings: 00a1000c: 'None'

/* Moby 1000 */

char * mobyupdate_unsorted::UpdateMoby_1000(MobyInstance *moby)

{
  int iVar1;
  int *piVar2;
  short sVar3;
  char *pcVar4;
  
  piVar2 = (int *)moby->pVar;
  if (0 < worldUpdateTime) {
    if (DAT_00f08e20 == 0) {
      mobyutil::MB_UnlockSkillPoint(0xe);
    }
    DAT_00f08e20 = 0;
  }
  pcVar4 = CHAR_ARRAY_00a1000c;
  if (CHAR_ARRAY_00a1000c._728_2_ == 0) {
    if (UnlockableItems.devastator != '\0') {
      CHAR_ARRAY_00a1000c[0x2d8] = '\0';
      CHAR_ARRAY_00a1000c[0x2d9] = '\x01';
    }
    iVar1 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
    if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c._730_2_ < iVar1 / 600) {
      sVar3 = (short)(iVar1 >> 0x1f);
      CHAR_ARRAY_00a1000c._730_2_ =
           ((short)(iVar1 / 600) + sVar3) - ((short)((short)(iVar1 / 0x2580000) + sVar3) >> 0xf);
    }
    CHAR_ARRAY_00a1000c._732_4_ = CHAR_ARRAY_00a1000c._732_4_ | 1 << (Level & 0x3f) | 0x80000000;
    pcVar4 = (char *)mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar2);
    if (pcVar4 != (char *)0x0) {
      pcVar4 = (char *)help::Help_QueueMessage(STR_THE_GADGETRON_DEVASTATOR_IS_0x2329,0x5b);
    }
  }
  return pcVar4;
}



//==== 001817a4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1001_001817a4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1001_001817a4(void)

{
  DAT_0073b714 = 0x10000;
  return;
}



//==== 001817b8  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1001(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1001 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1001(MobyInstance *moby)

{
  return moby;
}



//==== 001817d0  ns=mobyupdate_helpers  size=0x2a0
// sig: undefined M1003_001817d0(MobyInstance * moby, undefined8 param_2, undefined4 param_3)
// callers(1): 00181a90 mobyupdate_unsorted::UpdateMoby_1003
// callees(6): 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fea60 mobyutil::MB_randSphere; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby

void mobyupdate_helpers::M1003_001817d0(MobyInstance *moby,longlong param_2,float *param_3)

{
  MobyModeBit MVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  undefined8 in_LR;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float local_40;
  float local_3c;
  float local_38;
  int local_30 [2];
  
  if (moby->state != '\x02') {
    iVar6 = mobyutil::MB_damage(moby,0x330000,0);
    mobyutil::MB_HandleDamage(moby,iVar6,(longlong)(int)param_3,0,local_30,0,0,4);
    if (1 < local_30[0]) {
      uVar2 = (int)*param_3 >> 0x1f;
      uVar3 = (int)*(uint *)(iVar6 + 0x2c) >> 0x1f;
      iVar5 = (int)param_2;
      if ((int)((uVar3 >> 1 ^ *(uint *)(iVar6 + 0x2c)) - uVar3) <
          (int)((uVar2 >> 1 ^ (uint)*param_3) - uVar2)) {
        auVar7 = ZEXT416(0xffffffff);
        auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
        auVar8 = vectorShiftLeftIntegerWord(auVar7,auVar7);
        *param_3 = *param_3 - *(float *)(iVar6 + 0x2c);
        *(undefined1 *)(iVar5 + 0x67) = 0xfa;
        auVar7 = loadVectorLeftIndexed(in_LR,0x1817c0);
        auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar7 = vectorMultiplyAddFloatingPoint
                           (auVar9,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,auVar8)
        ;
        auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
        auVar7 = vectorSplatHalfWord(auVar7,1);
        uVar4 = storeVectorElementHalfWordIndexed(auVar7,0x26,param_2);
        *(undefined2 *)(iVar5 + 0x26) = uVar4;
        mobyutil::MB_UpdateLightsTransition(moby,param_2 + 0x60);
        local_40 = *(float *)(iVar6 + 0x10);
        local_38 = SQRT(*(float *)(iVar6 + 0x18) * *(float *)(iVar6 + 0x18) +
                        local_40 * local_40 + *(float *)(iVar6 + 0x14) * *(float *)(iVar6 + 0x14));
        if (local_38 == 0.0) {
          local_38 = 0.0;
          local_3c = 0.0;
          local_40 = 0.0;
        }
        else {
          local_38 = 0.1 / local_38;
          local_40 = local_40 * local_38;
          local_3c = *(float *)(iVar6 + 0x14) * local_38;
          local_38 = *(float *)(iVar6 + 0x18) * local_38;
        }
        (moby->pos).x = (moby->pos).x + local_40;
        (moby->pos).y = (moby->pos).y + local_3c;
        (moby->pos).z = (moby->pos).z + local_38;
        mobyutil::MB_randSphere(0xbfb99999a0000000,0x3fb99999a0000000,&local_40);
        (moby->pos).x = (moby->pos).x + local_40;
        (moby->pos).y = (moby->pos).y + local_3c;
        (moby->pos).z = (moby->pos).z + local_38;
      }
      else {
        MVar1 = moby->modeBits;
        *param_3 = 0.0;
        moby->modeBits =
             MVar1 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        mobyutil::MB_SpawnBoltsFromCrate(moby,0,0xffffffffffffffff);
        *(undefined1 *)(iVar5 + 0x67) = 0x78;
        mobyutil::MB_UpdateLightsTransition(moby,param_2 + 0x60);
        moby->state = '\x02';
      }
    }
  }
  moby->damage = -1;
  mobyutil::MB_ColorDyingMoby(moby,param_2 + 0x60);
  return;
}



//==== 00181a90  ns=mobyupdate_unsorted  size=0x150
// sig: undefined UpdateMoby_1003(MobyInstance * moby)
// callers(0): 
// callees(5): 000efb38 mobyfunc::DeleteMoby; 00106150 mobyutil::MB_RegisterLameShadow; 0010e030 mobyutil::MB_genericExplosion; 001817d0 mobyupdate_helpers::M1003_001817d0; 005cd098 libc::printf
// strings: 00654168: 'M1003 #%d death\n'

/* Moby 1003 */

void mobyupdate_unsorted::UpdateMoby_1003(MobyInstance *moby)

{
  byte bVar1;
  undefined1 local_20 [24];
  
  mobyupdate_helpers::M1003_001817d0(moby,ZEXT48(moby->pVar),(int)moby->pVar + 0x20);
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if ((1 < bVar1) && (bVar1 < 3)) {
    libc::printf("M1003 #%d death\n",moby->uid);
    mobyutil::MB_genericExplosion
              (0,0,0x4024000000000000,0x401c000000000000,0x4034000000000000,0x4000000000000000,
               0x4044000000000000,moby,local_20,0,0,0xffffffffffffffff,0x14,9,0x20);
    mobyfunc::DeleteMoby(moby);
    return;
  }
  mobyutil::MB_RegisterLameShadow(5.0,moby);
  return;
}



//==== 00181be0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1004_00181be0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1004_00181be0(void)

{
  DAT_0073b784 = 0x10000;
  return;
}



//==== 00181c08  ns=mobyupdate_helpers  size=0x2a8
// sig: undefined M1004_00181c08(void)
// callers(1): 00182998 mobyupdate_unsorted::UpdateMoby_1004
// callees(5): 000fea60 mobyutil::MB_randSphere; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby

void mobyupdate_helpers::M1004_00181c08(MobyInstance *param_1,longlong param_2,undefined8 param_3)

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
  float local_40;
  float local_3c;
  float local_38;
  int local_30 [2];
  
  if (param_1->state != '\x05') {
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
        auVar8 = ZEXT416(0xffffffff);
        auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
        auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
        *pfVar7 = *pfVar7 - *(float *)(iVar5 + 0x2c);
        *(undefined1 *)(iVar6 + 0x67) = 0xfa;
        auVar8 = loadVectorLeftIndexed(in_LR,0x181bf8);
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
        local_40 = *(float *)(iVar5 + 0x10);
        local_38 = SQRT(*(float *)(iVar5 + 0x18) * *(float *)(iVar5 + 0x18) +
                        local_40 * local_40 + *(float *)(iVar5 + 0x14) * *(float *)(iVar5 + 0x14));
        if (local_38 == 0.0) {
          local_38 = 0.0;
          local_3c = 0.0;
          local_40 = 0.0;
        }
        else {
          local_38 = 0.1 / local_38;
          local_40 = local_40 * local_38;
          local_3c = *(float *)(iVar5 + 0x14) * local_38;
          local_38 = *(float *)(iVar5 + 0x18) * local_38;
        }
        (param_1->pos).x = (param_1->pos).x + local_40;
        (param_1->pos).y = (param_1->pos).y + local_3c;
        (param_1->pos).z = (param_1->pos).z + local_38;
        mobyutil::MB_randSphere(0xbfb99999a0000000,0x3fb99999a0000000,&local_40);
        (param_1->pos).x = (param_1->pos).x + local_40;
        (param_1->pos).y = (param_1->pos).y + local_3c;
        (param_1->pos).z = (param_1->pos).z + local_38;
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
        param_1->state = '\x05';
      }
    }
    param_1->damage = -1;
  }
  mobyutil::MB_ColorDyingMoby(param_1,param_2 + 0x60);
  return;
}



//==== 00181f00  ns=mobyupdate_helpers  size=0xa2c
// sig: undefined M1004_00181f00(void)
// callers(1): 00182998 mobyupdate_unsorted::UpdateMoby_1004
// callees(7): 000fe610 mobyutil::MB_SphericalToVector; 000ff190 mobyutil::MB_DeltAngSpeed; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00109af0 mobyutil::Delt; 0010de78 mobyutil::MB_WrapRot; 00502578 fastfunc::FastWrapRot; 005026a0 fastfunc::FastSubRots
// strings: 00181eb8: '=VwP' (raw)

bool mobyupdate_helpers::M1004_00181f00(double param_1,int param_2,int param_3,float *param_4)

{
  longlong lVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong *puVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ushort uVar19;
  longlong lVar18;
  ulonglong uVar20;
  float *pfVar22;
  longlong lVar21;
  longlong lVar23;
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
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar28;
  ulonglong in_f29;
  double dVar29;
  ulonglong in_f30;
  double dVar30;
  double dVar31;
  ulonglong in_f31;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar1 = uVar16 - 0x170;
  puVar12 = (ulonglong *)lVar1;
  *puVar12 = uVar16;
  puVar12[0x30] = in_LR;
  puVar12[0x28] = in_f26;
  puVar12[0x29] = in_f27;
  puVar12[0x2a] = in_f28;
  puVar12[0x2b] = in_f29;
  puVar12[0x2c] = in_f30;
  puVar12[0x2d] = in_f31;
  puVar12[0x20] = unaff_r24;
  fVar3 = param_4[2];
  puVar12[0x1f] = unaff_r23;
  puVar12[0x27] = unaff_r31;
  puVar12[0x26] = unaff_r30;
  puVar12[0x25] = unaff_r29;
  fVar4 = *(float *)(param_2 + 0x18);
  fVar5 = *(float *)(param_3 + 0x78);
  fVar6 = *(float *)(param_3 + 0xa0);
  fVar7 = *(float *)(param_3 + 0x70);
  fVar8 = *(float *)(param_3 + 0x74);
  puVar12[0x24] = unaff_r28;
  puVar12[0x23] = unaff_r27;
  puVar12[0x22] = unaff_r26;
  puVar12[0x21] = unaff_r25;
  if (fVar4 < fVar3 - 30.0) {
    fVar5 = fVar5 * 0.5;
    *(float *)(param_3 + 0x78) = fVar5;
  }
  fVar3 = DAT_0071f418 * 30.0;
  *(float *)(puVar12 + 0xe) = SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar8 * fVar8);
  mobyutil::Delt(fVar6,fVar3,(float *)(puVar12 + 0xe));
  dVar25 = (double)fastfunc::FastWrapRot
                             (*(float *)(param_3 + 0xa4),mobyutil::g_FrameTime * 0.05235988);
  *(float *)(param_3 + 0xa4) = (float)dVar25;
  fVar3 = *param_4 - *(float *)(param_2 + 0x10);
  fVar4 = param_4[1] - *(float *)(param_2 + 0x14);
  *(float *)((int)puVar12 + 0x8c) = fVar3;
  *(float *)(puVar12 + 0x12) = fVar4;
  dVar30 = (double)(param_4[2] - *(float *)(param_2 + 0x18));
  dVar28 = (double)(fVar3 * fVar3 + fVar4 * fVar4);
  *(float *)((int)puVar12 + 0x94) = ABS(fVar3) - ABS(fVar4);
  fVar7 = DAT_0071f418;
  fVar6 = mobyutil::g_FrameTime;
  dVar25 = 0.0;
  uVar20 = (ulonglong)(*(uint *)((int)puVar12 + 0x8c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar12 + 0x94) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar12 + 0x12) >> 0x1d) & 4;
  uVar17 = uVar20 << 2;
  fVar5 = ABS(*(float *)((int)puVar12 + 0x8c));
  if (*(float *)((int)puVar12 + 0x94) - 0.0 < 0.0) {
    fVar5 = ABS(fVar4);
  }
  fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)uVar17);
  fVar8 = ABS(*(float *)(puVar12 + 0x12));
  if (*(float *)((int)puVar12 + 0x94) - 0.0 < 0.0) {
    fVar8 = ABS(fVar3);
  }
  fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  dVar29 = 0.7853981852531433;
  dVar26 = dVar25;
  if (0.0 < fVar5) {
    lVar18 = uVar16 - 0x160;
    lVar23 = uVar16 - 0x88;
    lVar21 = uVar16 - 0x98;
    lVar24 = 2;
    fVar5 = (fVar8 - fVar5) / (fVar8 + fVar5);
    fVar8 = fVar5 * fVar5;
    *(float *)(puVar12 + 0x1b) = fVar5;
    *(float *)((int)puVar12 + 0xdc) = fVar5;
    *(float *)(puVar12 + 0x1c) = fVar5;
    *(float *)((int)puVar12 + 0xe4) = fVar5;
    fVar5 = fVar8 * fVar8;
    *(float *)((int)puVar12 + 0xdc) = *(float *)((int)puVar12 + 0xdc) * fVar8;
    *(float *)(puVar12 + 0x1c) = *(float *)(puVar12 + 0x1c) * fVar5;
    *(float *)((int)puVar12 + 0xe4) = *(float *)((int)puVar12 + 0xe4) * fVar5 * fVar8;
    do {
      *(float *)((int)lVar18 + 0xd8) = *(float *)((int)lVar18 + 200) * fVar5 * fVar5;
      iVar9 = (int)lVar21;
      lVar21 = lVar21 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar23 + 4) = *(float *)(iVar9 + 4) * fVar5 * fVar5;
      lVar23 = lVar23 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar24 = 4;
    lVar23 = uVar16 - 0x98;
    uVar17 = ZEXT48(&DAT_007358e0);
    lVar18 = lVar1;
    lVar21 = lVar23;
    do {
      pfVar22 = (float *)uVar17;
      fVar5 = pfVar22[1];
      uVar17 = uVar17 + 8;
      *(float *)((int)lVar18 + 0xd8) = *(float *)((int)lVar18 + 0xd8) * *pfVar22;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar5;
      lVar21 = lVar21 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar21 = 2;
    lVar18 = lVar1;
    do {
      iVar9 = (int)lVar18;
      iVar13 = (int)lVar23;
      lVar18 = lVar18 + 0x10;
      lVar23 = lVar23 + 0x10;
      dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar9 + 0xd8)) + *(float *)(iVar13 + 4)
                        + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar4 + fVar3);
  }
  dVar31 = 1.5707963705062866;
  mobyutil::OrganicDeltAngSpeed
            (dVar26,(double)(fVar7 * 1.5707964),(double)(fVar7 * 0.34906584),
             (double)(fVar6 * 1.5707964),param_2,uVar17,param_3 + 0x88);
  *(float *)((int)puVar12 + 0x84) = (float)dVar30;
  fVar4 = mobyutil::g_FrameTime;
  fVar3 = *(float *)(param_2 + 0x44);
  dVar26 = (double)DAT_0071f418;
  dVar27 = ABS((double)(float)SQRT(dVar28));
  *(float *)(puVar12 + 0x10) = (float)SQRT(dVar28);
  *(float *)(puVar12 + 0x11) = (float)(dVar27 - ABS(dVar30));
  uVar17 = (ulonglong)(*(uint *)(puVar12 + 0x10) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar12 + 0x11) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar12 + 0x84) >> 0x1d) & 4;
  uVar20 = uVar17 << 2 | 0x735900;
  lVar18 = uVar17 << 2;
  dVar28 = ABS((double)*(float *)(puVar12 + 0x10));
  if ((double)*(float *)(puVar12 + 0x11) - dVar25 < 0.0) {
    dVar28 = ABS(dVar30);
  }
  fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)lVar18);
  dVar30 = ABS((double)*(float *)((int)puVar12 + 0x84));
  if ((double)*(float *)(puVar12 + 0x11) - dVar25 < 0.0) {
    dVar30 = dVar27;
  }
  fVar6 = *(float *)((int)uVar20 + 4);
  dVar27 = dVar25;
  if (dVar25 < dVar28) {
    lVar18 = uVar16 - 0x160;
    lVar23 = uVar16 - 0xa8;
    lVar21 = uVar16 - 0xb8;
    lVar24 = 2;
    fVar7 = (float)(dVar30 - dVar28) / (float)(dVar30 + dVar28);
    fVar8 = fVar7 * fVar7;
    *(float *)(puVar12 + 0x17) = fVar7;
    *(float *)((int)puVar12 + 0xbc) = fVar7;
    *(float *)(puVar12 + 0x18) = fVar7;
    *(float *)((int)puVar12 + 0xc4) = fVar7;
    fVar7 = fVar8 * fVar8;
    *(float *)((int)puVar12 + 0xbc) = *(float *)((int)puVar12 + 0xbc) * fVar8;
    *(float *)(puVar12 + 0x18) = *(float *)(puVar12 + 0x18) * fVar7;
    *(float *)((int)puVar12 + 0xc4) = *(float *)((int)puVar12 + 0xc4) * fVar7 * fVar8;
    do {
      *(float *)((int)lVar18 + 0xb8) = *(float *)((int)lVar18 + 0xa8) * fVar7 * fVar7;
      iVar9 = (int)lVar21;
      lVar21 = lVar21 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar23 + 4) = *(float *)(iVar9 + 4) * fVar7 * fVar7;
      lVar23 = lVar23 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar24 = 4;
    lVar23 = uVar16 - 0xb8;
    uVar20 = ZEXT48(&DAT_007358e0);
    lVar18 = lVar1;
    lVar21 = lVar23;
    do {
      pfVar22 = (float *)uVar20;
      fVar7 = pfVar22[1];
      uVar20 = uVar20 + 8;
      *(float *)((int)lVar18 + 0xb8) = *(float *)((int)lVar18 + 0xb8) * *pfVar22;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar7;
      lVar21 = lVar21 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar21 = 2;
    lVar18 = lVar1;
    dVar30 = dVar25;
    do {
      iVar9 = (int)lVar18;
      iVar13 = (int)lVar23;
      lVar18 = lVar18 + 0x10;
      lVar23 = lVar23 + 0x10;
      dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar9 + 0xb8)) + *(float *)(iVar13 + 4)
                        + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    dVar27 = (double)((float)(dVar30 + dVar29) * fVar5 + fVar6);
  }
  dVar30 = (double)mobyutil::MB_DeltAngSpeed
                             ((double)fVar3,-dVar27,(double)(float)(dVar26 * dVar31),
                              (double)(float)(dVar26 * 0.5235987901687622),
                              (double)(fVar4 * 1.9198622),lVar18,uVar20,param_3 + 0x84);
  *(float *)(param_2 + 0x44) = (float)dVar30;
  dVar30 = (double)(float)((double)*(float *)(param_2 + 0x40) +
                          -(double)(*(float *)(param_3 + 0x88) *
                                   (float)(dVar31 - ABS((double)*(float *)(param_2 + 0x40))) *
                                   0.63661975));
  if (dVar31 - dVar30 < 0.0) {
    dVar30 = dVar31;
  }
  if (dVar30 - -1.5707963705062866 < 0.0) {
    dVar30 = -1.5707963705062866;
  }
  *(float *)(param_2 + 0x40) = (float)(dVar30 * 0.9800000190734863);
  mobyutil::MB_WrapRot((float)(dVar30 * 0.9800000190734863));
  mobyutil::MB_SphericalToVector
            (*(float *)(puVar12 + 0xe),*(float *)(param_2 + 0x48),-*(float *)(param_2 + 0x44),
             (float *)(param_3 + 0x70));
  fVar3 = *(float *)(param_2 + 0x48);
  for (iVar9 = MobyUpdateChainStart; iVar9 != 0; iVar9 = *(int *)(iVar9 + 0x28)) {
    uVar19 = 0;
    if (*(int *)(iVar9 + 0x24) != 0) {
      uVar19 = *(ushort *)(*(int *)(iVar9 + 0x24) + 0x46);
    }
    if (((iVar9 != param_2) && (*(char *)(iVar9 + 0x20) != -3 && *(char *)(iVar9 + 0x20) != -2)) &&
       (((uVar19 & 0xff) == 5 || ((uVar19 & 0xff) == 0xd)))) {
      fVar4 = *(float *)(iVar9 + 0x14) - *(float *)(param_2 + 0x14);
      fVar5 = *(float *)(iVar9 + 0x10) - *(float *)(param_2 + 0x10);
      fVar7 = *(float *)(iVar9 + 0x18) - *(float *)(param_2 + 0x18);
      uVar10 = (int)*(uint *)(iVar9 + 0x18) >> 0x1f;
      uVar11 = (int)*(uint *)(param_2 + 0x18) >> 0x1f;
      bVar2 = (int)((uVar11 >> 1 ^ *(uint *)(param_2 + 0x18)) - uVar11) <=
              (int)((uVar10 >> 1 ^ *(uint *)(iVar9 + 0x18)) - uVar10);
      fVar6 = fVar7 * fVar7 + fVar5 * fVar5 + fVar4 * fVar4;
      dVar27 = (double)SQRT(fVar6);
      dVar30 = dVar25;
      dVar28 = dVar25;
      dVar26 = dVar25;
      if (dVar27 != dVar25) {
        fVar8 = 1.0 / SQRT(fVar6);
        fVar8 = -(fVar6 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar6 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar6 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        dVar26 = (double)(fVar5 * fVar8);
        dVar30 = (double)(fVar4 * fVar8);
        dVar28 = (double)(fVar7 * fVar8);
      }
      fVar4 = *(float *)(param_3 + 0x74);
      fVar5 = *(float *)(param_3 + 0x70);
      fVar6 = *(float *)(param_3 + 0x78);
      dVar31 = 2.094395160675049;
      dVar30 = (double)(float)(dVar27 / (double)(float)((double)fVar6 * dVar28 +
                                                       (double)(float)((double)fVar5 * dVar26 +
                                                                      (double)(float)((double)fVar4
                                                                                     * dVar30))));
      if ((dVar30 <= dVar25) || (100.0 <= dVar30)) {
        if (dVar27 < 15.0) {
          if (bVar2) {
            fVar7 = mobyutil::g_FrameTime * 2.0943952 + *(float *)(param_2 + 0x44);
          }
          else {
            fVar7 = -(mobyutil::g_FrameTime * 2.0943952 - *(float *)(param_2 + 0x44));
          }
          *(float *)(param_2 + 0x44) = fVar7;
          *(float *)(param_3 + 0x70) = (float)((double)fVar5 * 1.2000000476837158);
          *(float *)(param_3 + 0x74) = (float)((double)fVar4 * 1.2000000476837158);
          *(float *)(param_3 + 0x78) = (float)((double)fVar6 * 1.2000000476837158);
        }
      }
      else if (ABS(*(float *)(param_2 + 0x18) - *(float *)(iVar9 + 0x18)) < 10.0) {
        if (bVar2) {
          fVar4 = mobyutil::g_FrameTime * 2.0943952 + *(float *)(param_2 + 0x44);
        }
        else {
          fVar4 = -(mobyutil::g_FrameTime * 2.0943952 - *(float *)(param_2 + 0x44));
        }
        *(float *)(param_2 + 0x44) = fVar4;
        fVar5 = *(float *)(iVar9 + 0x10) - *(float *)(param_2 + 0x10);
        fVar4 = *(float *)(iVar9 + 0x14) - *(float *)(param_2 + 0x14);
        dVar28 = ABS((double)fVar5);
        dVar26 = ABS((double)fVar4);
        *(float *)((int)puVar12 + 0x74) = fVar5;
        *(float *)(puVar12 + 0xf) = fVar4;
        *(float *)((int)puVar12 + 0x7c) = (float)(dVar28 - dVar26);
        uVar17 = (ulonglong)(*(uint *)((int)puVar12 + 0x74) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0x7c) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar12 + 0xf) >> 0x1d) & 4;
        dVar30 = ABS((double)*(float *)((int)puVar12 + 0x74));
        if ((double)*(float *)((int)puVar12 + 0x7c) - dVar25 < 0.0) {
          dVar30 = dVar26;
        }
        fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
        dVar26 = ABS((double)*(float *)(puVar12 + 0xf));
        if ((double)*(float *)((int)puVar12 + 0x7c) - dVar25 < 0.0) {
          dVar26 = dVar28;
        }
        fVar5 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
        dVar28 = dVar25;
        if (dVar25 < dVar30) {
          lVar18 = uVar16 - 0x160;
          lVar23 = uVar16 - 200;
          lVar21 = uVar16 - 0xd8;
          lVar24 = 2;
          fVar6 = (float)(dVar26 - dVar30) / (float)(dVar26 + dVar30);
          fVar7 = fVar6 * fVar6;
          *(float *)(puVar12 + 0x13) = fVar6;
          *(float *)((int)puVar12 + 0x9c) = fVar6;
          *(float *)(puVar12 + 0x14) = fVar6;
          *(float *)((int)puVar12 + 0xa4) = fVar6;
          fVar6 = fVar7 * fVar7;
          *(float *)((int)puVar12 + 0x9c) = *(float *)((int)puVar12 + 0x9c) * fVar7;
          *(float *)(puVar12 + 0x14) = *(float *)(puVar12 + 0x14) * fVar6;
          *(float *)((int)puVar12 + 0xa4) = *(float *)((int)puVar12 + 0xa4) * fVar6 * fVar7;
          do {
            *(float *)((int)lVar18 + 0x98) = *(float *)((int)lVar18 + 0x88) * fVar6 * fVar6;
            iVar13 = (int)lVar21;
            lVar21 = lVar21 + 8;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)(iVar13 + 4) * fVar6 * fVar6;
            lVar23 = lVar23 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar24 = 4;
          lVar23 = uVar16 - 0xd8;
          pfVar22 = (float *)&DAT_007358e0;
          lVar18 = lVar1;
          lVar21 = lVar23;
          do {
            fVar6 = *pfVar22;
            fVar7 = pfVar22[1];
            pfVar22 = pfVar22 + 2;
            *(float *)((int)lVar18 + 0x98) = *(float *)((int)lVar18 + 0x98) * fVar6;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar7;
            lVar21 = lVar21 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar21 = 2;
          lVar18 = lVar1;
          dVar30 = dVar25;
          do {
            iVar13 = (int)lVar18;
            iVar14 = (int)lVar23;
            lVar18 = lVar18 + 0x10;
            lVar23 = lVar23 + 0x10;
            dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar13 + 0x98)) +
                              *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                             *(float *)(iVar14 + 0xc));
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          dVar28 = (double)((float)(dVar30 + dVar29) * fVar4 + fVar5);
        }
        dVar30 = (double)fastfunc::FastSubRots(fVar3,(float)dVar28);
        if (dVar25 <= dVar30) {
          fVar3 = -(float)((double)mobyutil::g_FrameTime * dVar31 -
                          (double)*(float *)(param_2 + 0x48));
        }
        else {
          fVar3 = (float)((double)mobyutil::g_FrameTime * dVar31 +
                         (double)*(float *)(param_2 + 0x48));
        }
        *(float *)(param_2 + 0x48) = fVar3;
      }
    }
  }
  mobyutil::MB_SphericalToVector
            (*(float *)(puVar12 + 0xe),fVar3,-*(float *)(param_2 + 0x44),(float *)(param_3 + 0x70));
  fVar3 = *(float *)(param_3 + 0x74);
  fVar4 = *(float *)(param_3 + 0x70);
  fVar5 = *(float *)(param_3 + 0x78);
  fVar6 = *(float *)(param_2 + 0x10);
  fVar7 = *(float *)(param_2 + 0x14);
  fVar8 = *(float *)(param_2 + 0x18);
  fVar15 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
  if (mobyutil::g_FrameTime * 29.0 < fVar15) {
    fVar15 = (mobyutil::g_FrameTime * 29.0) / fVar15;
    fVar4 = fVar4 * fVar15;
    fVar3 = fVar3 * fVar15;
    fVar5 = fVar5 * fVar15;
    *(float *)(param_3 + 0x70) = fVar4;
    *(float *)(param_3 + 0x74) = fVar3;
    *(float *)(param_3 + 0x78) = fVar5;
  }
  fVar6 = fVar6 + fVar4;
  fVar7 = fVar7 + fVar3;
  *(float *)(param_2 + 0x10) = fVar6;
  *(float *)(param_2 + 0x14) = fVar7;
  *(float *)(param_2 + 0x18) = fVar8 + fVar5;
  fVar7 = fVar7 - param_4[1];
  fVar6 = fVar6 - *param_4;
  return (double)SQRT(fVar6 * fVar6 + fVar7 * fVar7) < param_1;
}



//==== 00182998  ns=mobyupdate_unsorted  size=0xa28
// sig: undefined UpdateMoby_1004(MobyInstance * moby)
// callers(0): 
// callees(12): 000efb38 mobyfunc::DeleteMoby; 000f1ec8 mobyfunc::SetColorOfMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 00106150 mobyutil::MB_RegisterLameShadow; 0010de78 mobyutil::MB_WrapRot; 0010e030 mobyutil::MB_genericExplosion; 00181c08 mobyupdate_helpers::M1004_00181c08; 00181f00 mobyupdate_helpers::M1004_00181f00; 0020ab50 mobyupdate_helpers::M1215_0020ab50; 0021b5e8 FUN_0021b5e8; 00502730 fastfunc::FastIntToDouble; 005c8318 rand

/* Moby 1004 */

void mobyupdate_unsorted::UpdateMoby_1004(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  MobyModeBit MVar6;
  void *pvVar7;
  MobyClass *pMVar8;
  f32 fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  MobyInstance *pMVar18;
  ulonglong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float local_b0;
  float local_ac;
  float local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [32];
  
  if (moby != (MobyInstance *)0x0) {
    pvVar7 = moby->pVar;
    uVar19 = ZEXT48(pvVar7);
    if (pvVar7 != (void *)0x0) {
      mobyfunc::SetColorOfMoby(moby,0x80,0x80,0x80);
      mobyupdate_helpers::M1004_00181c08(moby,uVar19,uVar19 + 0x20);
      iVar15 = DAT_0096b2d0;
      pMVar18 = (MobyInstance *)0x0;
      iVar16 = 0;
      if (((*(int *)((int)pvVar7 + 0x90) == -1) ||
          (pMVar18 = MobyInstance + *(int *)((int)pvVar7 + 0x90), pMVar18 == (MobyInstance *)0x0))
         || (pMVar18->state == 0xfd || pMVar18->state == 0xfe)) {
        fVar2 = *(float *)((int)pvVar7 + 0xb4);
        fVar3 = (g_heroPosition.x + 256.0) * 0.5;
        fVar4 = (g_heroPosition.y + 256.0) * 0.5;
        fVar5 = g_heroPosition.w;
      }
      else {
        fVar2 = (pMVar18->pos).z;
        fVar3 = (pMVar18->pos).x;
        fVar4 = (pMVar18->pos).y;
        fVar5 = (pMVar18->pos).w;
        *(float *)((int)pvVar7 + 0xb4) = fVar2;
      }
      dVar24 = (double)fVar3;
      dVar23 = (double)fVar4;
      dVar22 = (double)fVar2;
      dVar21 = (double)fVar5;
      if (iVar15 == 0) {
        local_b0 = g_heroPosition.x;
        local_ac = g_heroPosition.y;
        local_a8 = g_heroPosition.z;
      }
      else {
        local_b0 = *(float *)(DAT_0096b2d0 + 0x10);
        local_ac = *(float *)(DAT_0096b2d0 + 0x14);
        local_a8 = *(float *)(DAT_0096b2d0 + 0x18);
      }
      uVar17 = (int)moby - (int)MobyInstance;
      dVar20 = (double)fastfunc::FastIntToDouble
                                 (((int)uVar17 >> 8) +
                                  (uint)((int)uVar17 < 0 && (uVar17 & 0xff) != 0) +
                                  worldUpdateTime / (int)(animationSpeed * 600.5));
      mobyutil::MB_WrapRot((float)(dVar20 * 0.800000011920929));
      if (iVar15 != 0) {
        iVar16 = *(int *)(iVar15 + 0x78);
      }
      iVar15 = 0;
      if (moby->enabled == '\0') {
        iVar15 = *(int *)((int)pvVar7 + 0xa8) + 1;
      }
      *(int *)((int)pvVar7 + 0xa8) = iVar15;
      uVar1 = moby->state;
      MVar6 = moby->modeBits;
      pMVar8 = moby->pClass;
      if (uVar1 == '\x06') {
        if (iVar16 != 0) {
          fVar3 = *(float *)(iVar16 + 0x10);
          fVar4 = 0.0;
          fVar2 = SQRT(*(float *)(iVar16 + 0x18) * *(float *)(iVar16 + 0x18) +
                       fVar3 * fVar3 + *(float *)(iVar16 + 0x14) * *(float *)(iVar16 + 0x14));
          if (fVar2 == 0.0) {
            (moby->pos).x = fVar3;
            (moby->pos).y = *(f32 *)(iVar16 + 0x14);
            (moby->pos).z = *(f32 *)(iVar16 + 0x18);
            fVar9 = *(f32 *)(iVar16 + 0x1c);
            fVar3 = fVar4;
            fVar2 = fVar4;
          }
          else {
            fVar2 = -30.0 / fVar2;
            fVar4 = fVar3 * fVar2;
            (moby->pos).x = fVar4;
            fVar3 = *(float *)(iVar16 + 0x14) * fVar2;
            (moby->pos).y = fVar3;
            fVar2 = *(float *)(iVar16 + 0x18) * fVar2;
            (moby->pos).z = fVar2;
            fVar9 = *(f32 *)(iVar16 + 0x1c);
          }
          (moby->pos).w = fVar9;
          auVar26 = ZEXT416(0xfffffff0);
          moby->modeBits =
               MVar6 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                        DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|
                        HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
          (moby->pos).x = fVar4 + local_b0;
          (moby->pos).y = fVar3 + local_ac;
          (moby->pos).z = fVar2 + local_a8;
          moby->collision = pMVar8->collision;
          auVar25 = loadVectorLeftIndexed(0x24,uVar19);
          auVar27 = loadVectorRightIndexed(0x34,uVar19);
          auVar26 = vectorShiftRightAlgebraicWord
                              (auVar25 | auVar27,
                               auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60);
          auVar26 = vectorConvertFromSignedFixedPointWord(auVar26,0);
          auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar10 = storeVectorElementWordIndexed
                             (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0x20,
                              uVar19);
          *(undefined4 *)((int)pvVar7 + 0x20U & 0xfffffffc) = uVar10;
          moby->state = '\0';
        }
      }
      else if (uVar1 == '\x05') {
        mobyutil::MB_genericExplosion
                  (0,0,0x4010000000000000,0x4008000000000000,0x4022000000000000,0x3ff19999a0000000,
                   0x4034000000000000,moby,local_90,0,1,0xffffffffffffffff,5,3,10);
        iVar16 = rand();
        iVar16 = iVar16 % 3;
        if (iVar16 < 1) {
          if (-1 < iVar16) {
            mobyupdate_helpers::M1215_0020ab50(local_80,local_90,0x4c4);
          }
        }
        else if (iVar16 < 2) {
          mobyupdate_helpers::M1215_0020ab50(local_80,local_90,0x4c2);
        }
        else if (iVar16 < 3) {
          FUN_0021b5e8(local_80,local_90,0x4d9);
        }
        if ((pMVar18 == (MobyInstance *)0x0) || (pMVar18->state == 0xfd || pMVar18->state == 0xfe))
        {
          mobyfunc::DeleteMoby(moby);
          return;
        }
        moby->collision = (ushort *)0x0;
        moby->state = '\x06';
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
      }
      else if (uVar1 == '\x04') {
        iVar16 = mobyupdate_helpers::M1004_00181f00
                           (0x403e000000000000,moby,uVar19,local_a0,&DAT_0018292c,&local_b0);
        if (iVar16 != 0) {
          moby->state = '\x03';
        }
      }
      else if (uVar1 == '\x03') {
        iVar16 = mobyupdate_helpers::M1004_00181f00
                           ((double)*(float *)((int)pvVar7 + 0x94),moby,uVar19,local_a0);
        if (iVar16 != 0) {
          moby->state = '\x04';
        }
      }
      else if (uVar1 == '\0') {
        dVar20 = (double)mobyutil::MB_randRangeFloat(-3.1415927,3.1415927);
        *(float *)((int)pvVar7 + 0xa4) = (float)dVar20;
        *(float *)((int)pvVar7 + 0x70) = (float)(dVar24 - (double)(moby->pos).x);
        *(float *)((int)pvVar7 + 0x74) = (float)(dVar23 - (double)(moby->pos).y);
        fVar3 = (moby->pos).z;
        *(float *)((int)pvVar7 + 0x7c) = (float)dVar21;
        *(float *)((int)pvVar7 + 0x78) = (float)(dVar22 - (double)fVar3);
        dVar21 = (double)mobyutil::MB_randRangeFloat(20.0,22.0);
        fVar3 = *(float *)((int)pvVar7 + 0x74);
        fVar4 = *(float *)((int)pvVar7 + 0x70);
        fVar2 = *(float *)((int)pvVar7 + 0x78);
        dVar22 = (double)mobyutil::g_FrameTime;
        *(float *)((int)pvVar7 + 0xa0) = (float)(dVar21 * dVar22);
        fVar5 = 0.0;
        fVar14 = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3);
        fVar11 = (float)(dVar21 * dVar22) / fVar14;
        fVar13 = fVar5;
        if (0.0 - fVar14 < 0.0) {
          fVar13 = fVar4 * fVar11;
        }
        fVar12 = fVar5;
        if (0.0 - fVar14 < 0.0) {
          fVar12 = fVar3 * fVar11;
        }
        if (0.0 - fVar14 < 0.0) {
          fVar5 = fVar2 * fVar11;
        }
        if (fVar14 - 0.0 < 0.0) {
          fVar13 = fVar4 * fVar11;
        }
        if (fVar14 - 0.0 < 0.0) {
          fVar12 = fVar3 * fVar11;
        }
        if (fVar14 - 0.0 < 0.0) {
          fVar5 = fVar2 * fVar11;
        }
        *(float *)((int)pvVar7 + 0x70) = fVar13;
        *(float *)((int)pvVar7 + 0x74) = fVar12;
        *(float *)((int)pvVar7 + 0x78) = fVar5;
        uVar17 = rand();
        if ((uVar17 & 1) == 0) {
          *(float *)((int)pvVar7 + 0x70) = -*(float *)((int)pvVar7 + 0x70);
          *(float *)((int)pvVar7 + 0x74) = -*(float *)((int)pvVar7 + 0x74);
          *(float *)((int)pvVar7 + 0x78) = -*(float *)((int)pvVar7 + 0x78);
        }
        moby->state = '\x04';
      }
      fVar9 = (moby->pos).x;
      uVar17 = (int)fVar9 >> 0x1f;
      fVar3 = 20.0;
      fVar4 = (moby->pos).x;
      if ((int)((uVar17 >> 1 ^ (uint)fVar9) - uVar17) < 0x41a00000) {
        (moby->pos).x = 20.0;
        fVar4 = fVar3;
      }
      if (1003.0 < fVar4) {
        (moby->pos).x = 1003.0;
      }
      fVar9 = (moby->pos).y;
      uVar17 = (int)fVar9 >> 0x1f;
      fVar4 = (moby->pos).y;
      if ((int)((uVar17 >> 1 ^ (uint)fVar9) - uVar17) < 0x41a00000) {
        (moby->pos).y = 20.0;
        fVar4 = fVar3;
      }
      if (1003.0 < fVar4) {
        (moby->pos).y = 1003.0;
      }
      fVar9 = (moby->pos).z;
      uVar17 = (int)fVar9 >> 0x1f;
      fVar4 = (moby->pos).z;
      if ((int)((uVar17 >> 1 ^ (uint)fVar9) - uVar17) < 0x41a00000) {
        (moby->pos).z = 20.0;
        fVar4 = fVar3;
      }
      if (1003.0 < fVar4) {
        (moby->pos).z = 1003.0;
      }
      mobyutil::MB_RegisterLameShadow(3.0,moby);
    }
  }
  return;
}



//==== 001833c0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1016_001833c0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1016_001833c0(void)

{
  DAT_0073b7f4 = 0x10000;
  return;
}



//==== 001833f0  ns=mobyupdate_helpers  size=0x314
// sig: undefined M1016_001833f0(void)
// callers(1): 00183880 mobyupdate_unsorted::UpdateMoby_{1005_1016}
// callees(5): 00130ed0 partupd::SpawnPart_59; 004fff60 fastfunc::FastDecTimerS32; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M1016_001833f0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar4;
  undefined8 uVar3;
  undefined1 uVar5;
  undefined8 in_r9;
  int iVar6;
  ulonglong uVar7;
  float *pfVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 local_90 [56];
  
  dVar11 = 0.5;
  dVar12 = 0.0;
  iVar6 = 0;
  uVar7 = (ulonglong)*(uint *)(param_1 + 0x78);
  *(float *)(param_1 + 0x18) = (*(float *)(param_1 + 0x18) + 0.5) - 0.5;
  lVar9 = uVar7 + 0x20;
  dVar13 = 255.0;
  auVar17 = loadVectorLeftIndexed(0x14,0x1833d8);
  dVar14 = 255.5;
  auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
  do {
    pfVar8 = (float *)uVar7;
    dVar10 = (double)(*pfVar8 + pfVar8[4]);
    *pfVar8 = *pfVar8 + pfVar8[4];
    if (dVar10 < dVar13) {
      if (dVar10 <= dVar12) {
        *pfVar8 = (float)(dVar10 + dVar13);
      }
    }
    else {
      *pfVar8 = (float)(dVar10 - dVar13);
    }
    iVar4 = fastfunc::FastDecTimerS32(uVar7 + 0x20);
    fVar1 = pfVar8[8];
    dVar10 = (double)animationSpeed;
    auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    if (iVar4 != 0) {
      auVar16 = ZEXT416(0xffffffff);
      auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
      auVar16 = vectorShiftLeftIntegerWord(auVar16,auVar16);
      auVar15 = vectorMultiplyAddFloatingPoint(auVar15,auVar17,auVar16);
      fVar1 = (float)(int)(dVar10 * dVar14);
      auVar15 = vectorConvertToSignedFixedPointWordSaturate(auVar15,0);
      auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar2 = storeVectorElementWordIndexed
                        (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,0,lVar9);
      *(undefined4 *)((uint)lVar9 & 0xfffffffc) = uVar2;
    }
    dVar10 = (double)fastfunc::FastIntToDouble((int)(dVar10 * dVar14) - (int)fVar1);
    uVar3 = fastfunc::FastLerpColor
                      (ABS((double)(float)(dVar11 - (double)(float)(dVar10 / (double)(longlong)
                                                                                     ((double)
                                                  animationSpeed * dVar14)))),0x4040ffff,0x1040ffff)
    ;
    uVar5 = fastfunc::FastDoubleToInt((double)*pfVar8);
    partupd::SpawnPart_59((double)pfVar8[0xc],local_90,uVar3,uVar5,0x35,1,2,in_r9,0);
    iVar6 = iVar6 + 1;
    lVar9 = lVar9 + 4;
    uVar7 = uVar7 + 4;
  } while (iVar6 < 4);
  return;
}



//==== 00183710  ns=mobyupdate_helpers  size=0x120
// sig: undefined M1016_00183710(void)
// callers(1): 00183880 mobyupdate_unsorted::UpdateMoby_{1005_1016}
// callees(1): 000fc620 mobyutil::MB_randInt

void mobyupdate_helpers::M1016_00183710(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar4;
  longlong lVar3;
  ulonglong uVar5;
  undefined8 in_LR;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 in_vs39 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  uVar1 = *(uint *)(param_1 + 0x78);
  iVar10 = 0;
  uVar5 = (ulonglong)uVar1;
  do {
    iVar4 = mobyutil::MB_randInt(0xff);
    iVar10 = iVar10 + 1;
    *(float *)uVar5 = (float)(longlong)iVar4;
    uVar5 = uVar5 + 4;
  } while (iVar10 < 4);
  iVar10 = 0;
  iVar12 = 0;
  iVar11 = 0;
  iVar4 = 0;
  *(undefined4 *)(uVar1 + 0x10) = 0xbf800000;
  *(undefined4 *)(uVar1 + 0x14) = 0xc0100000;
  *(undefined4 *)(uVar1 + 0x18) = 0x3fa00000;
  *(undefined4 *)(uVar1 + 0x1c) = 0x40200000;
  auVar14 = loadVectorLeftIndexed(in_LR,0x183704);
  auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  lVar3 = (ulonglong)uVar1 + 0x20;
  auVar8 = loadVectorLeftIndexed(4,0x183704);
  lVar6 = 4;
  auVar7 = loadVectorLeftIndexed(8,0x183704);
  auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar9 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  auVar8 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  do {
    auVar7._0_4_ = iVar4 + auVar9._0_4_;
    auVar7._8_8_ = in_vs39._8_8_;
    auVar7._4_4_ = iVar10 + auVar9._4_4_;
    auVar16._0_8_ = auVar7._0_8_;
    auVar16._8_4_ = iVar11 + auVar9._8_4_;
    auVar16._12_4_ = iVar12 + auVar9._12_4_;
    auVar7 = ZEXT416(0xffffffff);
    auVar15 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    iVar4 = iVar4 + auVar8._0_4_;
    iVar10 = iVar10 + auVar8._4_4_;
    iVar11 = iVar11 + auVar8._8_4_;
    iVar12 = iVar12 + auVar8._12_4_;
    auVar7 = vectorConvertFromSignedFixedPointWord(auVar16,0);
    auVar16 = vectorShiftLeftIntegerWord(auVar15,auVar15);
    auVar7 = vectorAddFloatingPoint
                       (auVar7,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60);
    auVar7 = vectorMultiplyAddFloatingPoint(auVar7,auVar13,auVar16);
    auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
    auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
    in_vs39 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    uVar2 = storeVectorElementWordIndexed(in_vs39,0,lVar3);
    *(undefined4 *)((uint)lVar3 & 0xfffffffc) = uVar2;
    lVar3 = lVar3 + 4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *(undefined4 *)(uVar1 + 0x30) = 0x40200000;
  *(undefined4 *)(uVar1 + 0x34) = 0x40400000;
  *(undefined4 *)(uVar1 + 0x38) = 0x40400000;
  *(undefined4 *)(uVar1 + 0x3c) = 0x40200000;
  return;
}



//==== 00183880  ns=mobyupdate_unsorted  size=0x60c
// sig: undefined UpdateMoby_{1005_1016}(MobyInstance * moby)
// callers(0): 
// callees(19): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00047f74 camera::SetCameraPosition; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 0007b310 help::Help_QueueMessage; 0007b458 help::Help_Kill; 000a0c38 hero::Hero_Warp; 000e8aa4 memcard::memcard_Save; 000efb38 mobyfunc::DeleteMoby; 000ffb70 mobyutil::GetGroundZ; 00109af0 mobyutil::Delt; 00109c30 mobyutil::OrganicDelt; 00112a38 mobyutil::MB_ToastMessage; 00112e18 mobyutil::MB_UnlockItem; 00167e60 update::mode_sceneInit; 001833f0 mobyupdate_helpers::M1016_001833f0; 00183710 mobyupdate_helpers::M1016_00183710; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots
// strings: 0096c165: 'None'

/* Moby 1005
   Moby 1016 */

void mobyupdate_unsorted::UpdateMoby__1005_1016_(MobyInstance *moby)

{
  u8 uVar1;
  void *pvVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  
  lVar6 = (longlong)(int)moby;
  pvVar2 = moby->pVar;
  uVar1 = moby->state;
  lVar7 = ((LZCOUNT(0x3ed - (uint)moby->oClass) << 0x3a) >> 0x3f & 4U) + 0x16;
  if (uVar1 == '\x05') {
    mobyutil::Delt(0.0,mobyutil::g_FrameTime * 4.0,&boot::SceneScreenFade);
    if (boot::SceneScreenFade == 0.0) {
      memcard::memcard_Save(0,-1);
      mobyfunc::DeleteMoby(moby);
    }
  }
  else if (uVar1 == '\x04') {
    dVar13 = 1.0;
    dVar11 = 91.19999694824219;
    dVar10 = 270.2099914550781;
    dVar9 = 64.8499984741211;
    mobyutil::OrganicDelt
              (1.0,DAT_0071f418 * 0.15,DAT_0071f418 * 0.15,mobyutil::g_FrameTime * 0.15,
               (float *)((int)pvVar2 + 0x40),0x720000,(float *)((int)pvVar2 + 0x44));
    dVar8 = (double)*(float *)((int)pvVar2 + 0x40);
    dVar12 = 0.0;
    local_60 = (float)(dVar8 * 15.780006408691406 + dVar11);
    local_54 = 0;
    local_5c = (float)(dVar8 * 3.25 + dVar10);
    local_58 = (float)(dVar8 * -2.1999969482421875 + dVar9);
    dVar9 = 0.550000011920929;
    dVar8 = (double)fastfunc::FastDiffRots(0x3fe70a3d80000000,0x3fe19999a0000000);
    dVar8 = (double)fastfunc::FastWrapRot
                              ((float)(dVar8 * (double)*(float *)((int)pvVar2 + 0x40)),(float)dVar9)
    ;
    local_48 = (float)dVar8;
    dVar9 = 0.33000001311302185;
    dVar8 = (double)fastfunc::FastDiffRots(0x3fdb851ec0000000,0x3fd51eb860000000);
    dVar8 = (double)fastfunc::FastWrapRot
                              ((float)(dVar8 * (double)*(float *)((int)pvVar2 + 0x40)),(float)dVar9)
    ;
    local_4c = (float)dVar8;
    dVar9 = 0.07000000029802322;
    dVar8 = (double)fastfunc::FastDiffRots(0x3fb1eb8520000000,0x3fb1eb8520000000);
    dVar8 = (double)fastfunc::FastWrapRot
                              ((float)(dVar8 * (double)*(float *)((int)pvVar2 + 0x40)),(float)dVar9)
    ;
    local_50 = (float)dVar8;
    if ((GameCamera.pCurrentUpdCam != (void *)0x0) &&
       (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) != 5)) {
      camera::SetCameraPosition(&local_60,&local_50,1,0,0);
    }
    camera::camera5::Camera_SetMobyDrivenTargetPos(&local_60);
    camera::camera5::Camera_SetMobyDrivenTargetRot(&local_50);
    if (((help::g_HelpState == 0) && (help::g_HelpCurId == -1)) &&
       (uVar3 = (int)*(uint *)((int)pvVar2 + 0x40) >> 0x1f,
       0x3e4ccccd < (int)((uVar3 >> 1 ^ *(uint *)((int)pvVar2 + 0x40)) - uVar3))) {
      mobyutil::Delt((float)dVar13,mobyutil::g_FrameTime * 4.0,&boot::SceneScreenFade);
    }
    else {
      mobyutil::Delt((float)dVar12,mobyutil::g_FrameTime * 4.0,&boot::SceneScreenFade);
    }
    if (boot::SceneScreenFade == 1.0) {
      hero::Hero_Warp(&g_heroPosition.x,&g_heroRotation.x,0,0);
      camera::camera5::Camera_DeactivateMobyDrivenCam(0);
      moby->state = '\x05';
    }
  }
  else if (uVar1 == '\x03') {
    if (g_gameMode != GAME_MODE_SCENE) {
      if (g_heroType == '\0') {
        mobyutil::MB_UnlockItem(lVar7,1);
      }
      else if ((int)lVar7 == 0x16) {
        mobyutil::MB_UnlockItem(lVar7,0);
        g_toastMsgTimer = 0;
      }
      else {
        mobyutil::MB_UnlockItem(lVar7,0);
      }
      if (moby->oClass == TRESSPASSER) {
        mobyutil::MB_ToastMessage(0x7df,0xffffffffffffffff);
        help::Help_Kill();
        help::Help_QueueMessage(STR_USING_THE_LATEST_IN_0x07D9,0x13);
        boot::SceneScreenFade = 1.0;
        moby->state = '\x04';
        hero::Hero_Warp(&g_heroPosition.x,&g_heroRotation.x,0x72,1);
      }
      else {
        memcard::memcard_Save(0,-1);
        mobyfunc::DeleteMoby(moby);
      }
    }
  }
  else if (uVar1 == '\x01') {
    dVar8 = (double)fastfunc::FastWrapRot
                              ((moby->rotation).z,
                               3.1415927 / (float)(longlong)(animationSpeed * 60.5));
    (moby->rotation).z = (float)dVar8;
    mobyupdate_helpers::M1016_001833f0(lVar6);
    if (((worldUpdateTime == (worldUpdateTime / 10) * 10) &&
        (fVar4 = (moby->pos).y - g_heroPosition.y, fVar5 = (moby->pos).x - g_heroPosition.x,
        SQRT(fVar5 * fVar5 + fVar4 * fVar4) < 1.0)) && (ABS((moby->pos).z - g_heroPosition.z) < 2.0)
       ) {
      moby->state = '\x03';
      moby->enabled = '\0';
      moby->collision = (ushort *)0x0;
      moby->modeBits = moby->modeBits | DISABLED;
      if (moby->oClass == TRESSPASSER) {
        update::mode_sceneInit(4);
      }
      else {
        update::mode_sceneInit(2);
      }
    }
  }
  else if (uVar1 == '\0') {
    mobyupdate_helpers::M1016_00183710(lVar6);
    if (CHAR_ARRAY_0096c165[(int)lVar7] == '\0') {
      mobyutil::GetGroundZ(0x3fe0000000000000,lVar6 + 0x10,0);
      (moby->rotation).x = 1.5707964;
      (moby->rotation).y = 3.1415927;
      fVar4 = CollOutput.ip.z + 0.2;
      moby->state = '\x01';
      (moby->pos).z = fVar4;
    }
    else {
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 00183e8c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1016_00183e8c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1016_00183e8c(void)

{
  DAT_0073b864 = 0x10000;
  return;
}



//==== 00183ea0  ns=mobyupdate_helpers  size=0x8c
// sig: undefined M1016_00183ea0(void)
// callers(2): 000503b8 camera::Camera_handleCollWithHero; 00050ae0 camera::UpdateAllCameras
// callees(2): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance * mobyupdate_helpers::M1016_00183ea0(f32 *param_1)

{
  f32 fVar1;
  MobyModeBit MVar2;
  MobyInstance *pMVar3;
  
  pMVar3 = mobyfunc::CreateMoby(CAMERA_OBJECT);
  if (pMVar3 != (MobyInstance *)0x0) {
    pMVar3->updateDistance = -1;
    MVar2 = pMVar3->modeBits;
    (pMVar3->pos).x = *param_1;
    (pMVar3->pos).y = param_1[1];
    fVar1 = param_1[2];
    pMVar3->modeBits = MVar2 | (UNK_40|DISABLED);
    (pMVar3->pos).z = fVar1;
    (pMVar3->pos).w = param_1[3];
    mobyfunc::UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}



//==== 00183f38  ns=mobyupdate_unsorted  size=0x1cc
// sig: undefined UpdateMoby_1007(MobyInstance * moby)
// callers(0): 
// callees(1): 005026a0 fastfunc::FastSubRots

/* Moby 1007 */

void mobyupdate_unsorted::UpdateMoby_1007(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  double dVar10;
  double dVar11;
  
  pvVar9 = GameCamera.pCurrentUpdCam;
  if (GameCamera.pCurrentUpdCam == (void *)0x0) {
    (moby->pos).z = 5.0;
    (moby->pos).y = 5.0;
    (moby->pos).x = 5.0;
  }
  else {
    fVar1 = *(float *)((int)GameCamera.pCurrentUpdCam + 0x30);
    (moby->pos).x = fVar1;
    fVar2 = *(float *)((int)pvVar9 + 0x34);
    (moby->pos).y = fVar2;
    fVar3 = *(float *)((int)pvVar9 + 0x38);
    (moby->pos).z = fVar3;
    (moby->pos).w = *(f32 *)((int)pvVar9 + 0x3c);
    fVar2 = fVar2 - g_heroPosition.y;
    fVar1 = fVar1 - g_heroPosition.x;
    fVar4 = (g_heroMobyPtr->transform).v2.y;
    fVar5 = (g_heroMobyPtr->transform).v2.x;
    fVar3 = fVar3 - g_heroPosition.z;
    fVar6 = (g_heroMobyPtr->transform).v2.z;
    fVar7 = fVar3 * fVar6 + fVar1 * fVar5 + fVar2 * fVar4;
    fVar1 = -(fVar5 * fVar7 - fVar1);
    fVar2 = -(fVar4 * fVar7 - fVar2);
    fVar3 = -(fVar6 * fVar7 - fVar3);
    if (ABS(fVar7) < 2.5) {
      dVar11 = 0.10000000149011612;
      if (((SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2) < 0.1) ||
          (dVar10 = (double)fastfunc::FastSubRots(g_heroRotation.z,GameCamera.rot.radius),
          dVar10 < 2.356194496154785)) ||
         (DAT_00969e44 < (float)((double)mobyutil::g_FrameTime * dVar11))) {
        (moby->pos).z = 15.0;
        (moby->pos).y = 15.0;
        (moby->pos).x = 15.0;
      }
      else {
        fVar1 = (moby->pos).y;
        fVar2 = (moby->pos).x;
        fVar3 = (g_heroMobyPtr->transform).v2.y;
        fVar4 = (g_heroMobyPtr->transform).v2.x;
        fVar5 = (moby->pos).z;
        fVar6 = (g_heroMobyPtr->transform).v2.z;
        fVar7 = fVar5 * fVar6 + fVar2 * fVar4 + fVar1 * fVar3;
        fVar8 = g_heroPosition.z * fVar6 + g_heroPosition.x * fVar4 + g_heroPosition.y * fVar3;
        if (hero::g_heroStateType != 0x11) {
          (moby->pos).x = fVar4 * fVar8 + -(fVar4 * fVar7 - fVar2);
          (moby->pos).y = fVar3 * fVar8 + -(fVar3 * fVar7 - fVar1);
          (moby->pos).z = fVar6 * fVar8 + -(fVar6 * fVar7 - fVar5);
        }
      }
    }
  }
  return;
}



//==== 00184104  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1009_00184104(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1009_00184104(void)

{
  DAT_0073b8d4 = 0x10000;
  return;
}



//==== 00184130  ns=mobyupdate_helpers  size=0x534
// sig: undefined M1009_00184130(void)
// callers(1): 00184c30 mobyupdate_unsorted::UpdateMoby_1009
// callees(1): 005026a0 fastfunc::FastSubRots

int mobyupdate_helpers::M1009_00184130
              (double param_1,double param_2,double param_3,float *param_4,int param_5)

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
  int iVar10;
  float fVar11;
  ulonglong uVar12;
  longlong lVar13;
  float *pfVar15;
  longlong lVar14;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar18;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  ulonglong in_f21;
  double dVar23;
  ulonglong in_f22;
  double dVar24;
  ulonglong in_f23;
  double dVar25;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar26;
  ulonglong in_f26;
  double dVar27;
  ulonglong in_f27;
  double dVar28;
  ulonglong in_f28;
  double dVar29;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar1 = uVar12 - 0x150;
  puVar8 = (ulonglong *)lVar1;
  *puVar8 = uVar12;
  puVar8[0x2c] = in_LR;
  puVar8[0x1f] = in_f21;
  puVar8[0x20] = in_f22;
  puVar8[0x21] = in_f23;
  puVar8[0x22] = in_f24;
  puVar8[0x23] = in_f25;
  puVar8[0x24] = in_f26;
  puVar8[0x25] = in_f27;
  puVar8[0x26] = in_f28;
  puVar8[0x27] = in_f29;
  puVar8[0x28] = in_f30;
  puVar8[0x29] = in_f31;
  puVar8[0x1c] = unaff_r29;
  iVar18 = 0;
  puVar8[0x1e] = unaff_r31;
  puVar8[0x1b] = unaff_r28;
  puVar8[0x1d] = unaff_r30;
  iVar7 = MobyUpdateChainStart;
  puVar8[0x1a] = unaff_r27;
  dVar29 = 10.0;
  for (; iVar7 != 0; iVar7 = *(int *)(iVar7 + 0x28)) {
    if ((((*(ushort *)(iVar7 + 0x34) & 0x1000) != 0) && (*(int *)(iVar7 + 0x24) != 0)) &&
       (*(short *)(*(int *)(iVar7 + 0x24) + 0x46) == 5)) {
      dVar24 = (double)*(float *)(iVar7 + 0x14);
      fVar2 = (float)((double)param_4[1] - dVar24);
      dVar25 = (double)*(float *)(iVar7 + 0x10);
      fVar3 = (float)((double)*param_4 - dVar25);
      dVar28 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2);
      if (dVar28 < param_3) {
        fVar2 = (float)(dVar25 - (double)*param_4);
        fVar3 = (float)(dVar24 - (double)param_4[1]);
        fVar4 = *(float *)(iVar7 + 0x18);
        fVar5 = ABS(fVar2);
        fVar6 = ABS(fVar3);
        *(float *)((int)puVar8 + 0x7c) = fVar2;
        *(float *)(puVar8 + 0x10) = fVar3;
        fVar2 = *(float *)(param_5 + 8);
        dVar27 = (double)(fVar4 + 0.4);
        *(float *)((int)puVar8 + 0x84) = fVar5 - fVar6;
        dVar23 = 0.0;
        uVar16 = (ulonglong)(*(uint *)((int)puVar8 + 0x7c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1d) & 4;
        fVar3 = ABS(*(float *)((int)puVar8 + 0x7c));
        if (*(float *)((int)puVar8 + 0x84) - 0.0 < 0.0) {
          fVar3 = fVar6;
        }
        fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
        fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
        fVar11 = ABS(*(float *)(puVar8 + 0x10));
        if (*(float *)((int)puVar8 + 0x84) - 0.0 < 0.0) {
          fVar11 = fVar5;
        }
        dVar26 = 0.7853981852531433;
        dVar20 = dVar23;
        if (0.0 < fVar3) {
          lVar13 = uVar12 - 0x140;
          lVar17 = uVar12 - 0x98;
          lVar14 = uVar12 - 0xa8;
          lVar19 = 2;
          fVar3 = (fVar11 - fVar3) / (fVar11 + fVar3);
          fVar5 = fVar3 * fVar3;
          *(float *)((int)puVar8 + 0xb4) = fVar3;
          *(float *)((int)puVar8 + 0xac) = fVar3;
          *(float *)(puVar8 + 0x16) = fVar3;
          *(float *)(puVar8 + 0x15) = fVar3;
          fVar3 = fVar5 * fVar5;
          *(float *)((int)puVar8 + 0xac) = *(float *)((int)puVar8 + 0xac) * fVar5;
          *(float *)(puVar8 + 0x16) = *(float *)(puVar8 + 0x16) * fVar3;
          *(float *)((int)puVar8 + 0xb4) = *(float *)((int)puVar8 + 0xb4) * fVar3 * fVar5;
          do {
            *(float *)((int)lVar13 + 0xa8) = *(float *)((int)lVar13 + 0x98) * fVar3 * fVar3;
            iVar9 = (int)lVar14;
            lVar14 = lVar14 + 8;
            lVar13 = lVar13 + 8;
            *(float *)((int)lVar17 + 4) = *(float *)(iVar9 + 4) * fVar3 * fVar3;
            lVar17 = lVar17 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          lVar19 = 4;
          lVar17 = uVar12 - 0xa8;
          pfVar15 = (float *)&DAT_007358e0;
          lVar13 = lVar1;
          lVar14 = lVar17;
          do {
            fVar3 = *pfVar15;
            fVar5 = pfVar15[1];
            pfVar15 = pfVar15 + 2;
            *(float *)((int)lVar13 + 0xa8) = *(float *)((int)lVar13 + 0xa8) * fVar3;
            lVar13 = lVar13 + 8;
            *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar5;
            lVar14 = lVar14 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          lVar14 = 2;
          lVar13 = lVar1;
          do {
            iVar9 = (int)lVar13;
            iVar10 = (int)lVar17;
            lVar13 = lVar13 + 0x10;
            lVar17 = lVar17 + 0x10;
            dVar20 = (double)((float)(dVar20 + (double)*(float *)(iVar9 + 0xa8)) +
                              *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                             *(float *)(iVar10 + 0xc));
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
          dVar20 = (double)((float)(dVar20 + 0.7853981852531433) * fVar6 + fVar4);
        }
        dVar20 = (double)fastfunc::FastSubRots(fVar2,(float)dVar20);
        dVar20 = (double)(float)(dVar20 * dVar20);
        fVar2 = *(float *)(param_5 + 4);
        if (dVar20 < (double)(float)(param_1 * param_1)) {
          fVar3 = param_4[2];
          *(float *)(puVar8 + 0xe) = (float)dVar28;
          dVar21 = ABS((double)(float)(dVar27 - (double)fVar3));
          *(float *)((int)puVar8 + 0x74) = (float)(dVar27 - (double)fVar3);
          *(float *)(puVar8 + 0xf) = (float)(ABS(dVar28) - dVar21);
          uVar16 = (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar8 + 0x74) >> 0x1d) & 4;
          dVar22 = ABS((double)*(float *)(puVar8 + 0xe));
          if ((double)*(float *)(puVar8 + 0xf) - dVar23 < 0.0) {
            dVar22 = dVar21;
          }
          fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
          dVar21 = ABS((double)*(float *)((int)puVar8 + 0x74));
          if ((double)*(float *)(puVar8 + 0xf) - dVar23 < 0.0) {
            dVar21 = ABS(dVar28);
          }
          fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
          if (dVar23 < dVar22) {
            lVar13 = uVar12 - 0x140;
            lVar17 = uVar12 - 0xb8;
            lVar14 = uVar12 - 200;
            lVar19 = 2;
            fVar6 = (float)(dVar21 - dVar22) / (float)(dVar21 + dVar22);
            fVar5 = fVar6 * fVar6;
            *(float *)((int)puVar8 + 0x94) = fVar6;
            *(float *)((int)puVar8 + 0x8c) = fVar6;
            *(float *)(puVar8 + 0x12) = fVar6;
            *(float *)(puVar8 + 0x11) = fVar6;
            fVar6 = fVar5 * fVar5;
            *(float *)((int)puVar8 + 0x8c) = *(float *)((int)puVar8 + 0x8c) * fVar5;
            *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) * fVar6;
            *(float *)((int)puVar8 + 0x94) = *(float *)((int)puVar8 + 0x94) * fVar6 * fVar5;
            do {
              *(float *)((int)lVar13 + 0x88) = *(float *)((int)lVar13 + 0x78) * fVar6 * fVar6;
              iVar9 = (int)lVar14;
              lVar14 = lVar14 + 8;
              lVar13 = lVar13 + 8;
              *(float *)((int)lVar17 + 4) = *(float *)(iVar9 + 4) * fVar6 * fVar6;
              lVar17 = lVar17 + 8;
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
            lVar19 = 4;
            lVar17 = uVar12 - 200;
            pfVar15 = (float *)&DAT_007358e0;
            lVar13 = lVar1;
            lVar14 = lVar17;
            do {
              fVar6 = *pfVar15;
              fVar5 = pfVar15[1];
              pfVar15 = pfVar15 + 2;
              *(float *)((int)lVar13 + 0x88) = *(float *)((int)lVar13 + 0x88) * fVar6;
              lVar13 = lVar13 + 8;
              *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar5;
              lVar14 = lVar14 + 8;
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
            lVar14 = 2;
            lVar13 = lVar1;
            do {
              iVar9 = (int)lVar13;
              iVar10 = (int)lVar17;
              lVar13 = lVar13 + 0x10;
              lVar17 = lVar17 + 0x10;
              dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar9 + 0x88)) +
                                *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                               *(float *)(iVar10 + 0xc));
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
            dVar23 = (double)((float)(dVar23 + dVar26) * fVar3 + fVar4);
          }
          dVar28 = (double)fastfunc::FastSubRots(fVar2,(float)dVar23);
          if (((double)(float)(dVar28 * dVar28) < (double)(float)(param_2 * param_2)) &&
             (dVar24 = (double)((float)(dVar20 * (double)(float)(dVar28 * dVar28)) * 30.0 +
                               SQRT(SQRT((float)((double)param_4[2] - dVar27) *
                                         (float)((double)param_4[2] - dVar27) +
                                         (float)((double)*param_4 - dVar25) *
                                         (float)((double)*param_4 - dVar25) +
                                         (float)((double)param_4[1] - dVar24) *
                                         (float)((double)param_4[1] - dVar24)))), dVar24 < dVar29))
          {
            dVar29 = dVar24;
            iVar18 = iVar7;
          }
        }
      }
    }
  }
  return iVar18;
}



//==== 00184670  ns=mobyupdate_helpers  size=0x570
// sig: undefined M1009_00184670(void)
// callers(7): 001e6958 mobyupd::update1160::M1160_FireGun; 001e6ba8 mobyupd::update1160::M1160_UpdateGunsAndAimPos; 0021f2b0 mobyupd::update1242::M1242_0021f2b0; 002619e0 mobyupd::update1379::M1379_UpdateGunsMissiles; 0036ad20 mobyupdate_helpers::M426_0036ad20; 0036b8c8 mobyupdate_helpers::M426_0036b8c8; 0041b7c0 mobyupdate_helpers::M688_0041b7c0
// callees(4): 000efa28 mobyfunc::CreateMoby; 000f1ec8 mobyfunc::SetColorOfMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 00502758 fastfunc::FastDoubleToInt

MobyInstance *
mobyupdate_helpers::M1009_00184670
          (double param_1,double param_2,float param_3,float *param_4,f32 *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  ulonglong *puVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  ulonglong uVar10;
  MobyInstance *pMVar13;
  short sVar15;
  longlong lVar11;
  longlong lVar12;
  float fVar14;
  s8 sVar16;
  longlong lVar17;
  ulonglong uVar18;
  float *pfVar20;
  longlong lVar19;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0x100;
  puVar6 = (ulonglong *)lVar12;
  *puVar6 = uVar10;
  puVar6[0x22] = in_LR;
  puVar6[0x1e] = in_f30;
  puVar6[0x1f] = in_f31;
  puVar6[0x1d] = unaff_r31;
  puVar6[0x1b] = unaff_r29;
  puVar6[0x1c] = unaff_r30;
  puVar6[0x1a] = unaff_r28;
  puVar6[0x19] = unaff_r27;
  pMVar13 = mobyfunc::CreateMoby(0x3f1);
  if (pMVar13 != (MobyInstance *)0x0) {
    pfVar4 = (float *)pMVar13->pVar;
    pfVar4[7] = param_3;
    pMVar13->updateDistance = -1;
    sVar15 = fastfunc::FastDoubleToInt(param_1);
    pMVar13->drawDistance = sVar15;
    pMVar13->enabled = '\x01';
    fVar8 = 0.0;
    (pMVar13->rotation).x = 0.0;
    fVar14 = param_4[2];
    fVar2 = ABS(param_4[2]);
    fVar3 = SQRT(*param_4 * *param_4 + param_4[1] * param_4[1]);
    fVar1 = ABS(fVar3);
    *(float *)((int)puVar6 + 0x74) = fVar3;
    *(float *)(puVar6 + 0xf) = fVar1 - fVar2;
    uVar18 = (ulonglong)(*(uint *)((int)puVar6 + 0x74) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0xf) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar14 >> 0x1d) & 4;
    fVar14 = ABS(*(float *)((int)puVar6 + 0x74));
    if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
      fVar14 = fVar2;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
    if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    fVar9 = fVar8;
    if (0.0 < fVar14) {
      lVar11 = uVar10 - 0xf0;
      lVar17 = uVar10 - 100;
      lVar19 = uVar10 - 0x54;
      lVar21 = 2;
      fVar14 = (fVar2 - fVar14) / (fVar2 + fVar14);
      fVar2 = fVar14 * fVar14;
      *(float *)(puVar6 + 0x15) = fVar14;
      *(float *)(puVar6 + 0x14) = fVar14;
      *(float *)((int)puVar6 + 0xa4) = fVar14;
      *(float *)((int)puVar6 + 0x9c) = fVar14;
      fVar14 = fVar2 * fVar2;
      *(float *)(puVar6 + 0x14) = *(float *)(puVar6 + 0x14) * fVar2;
      *(float *)((int)puVar6 + 0xa4) = *(float *)((int)puVar6 + 0xa4) * fVar14;
      *(float *)(puVar6 + 0x15) = *(float *)(puVar6 + 0x15) * fVar14 * fVar2;
      do {
        *(float *)((int)lVar11 + 0x9c) = *(float *)((int)lVar11 + 0x8c) * fVar14 * fVar14;
        iVar5 = (int)lVar17;
        lVar11 = lVar11 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar5 + 4) * fVar14 * fVar14;
        lVar19 = lVar19 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar21 = 4;
      lVar19 = uVar10 - 100;
      pfVar20 = (float *)&DAT_007358e0;
      lVar11 = lVar12;
      lVar17 = lVar19;
      do {
        fVar14 = *pfVar20;
        fVar2 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar11 + 0x9c) = *(float *)((int)lVar11 + 0x9c) * fVar14;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar2;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar17 = 2;
      lVar11 = lVar12;
      fVar14 = fVar8;
      do {
        iVar5 = (int)lVar11;
        lVar11 = lVar11 + 0x10;
        iVar7 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        fVar14 = fVar14 + *(float *)(iVar5 + 0x9c) + *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) +
                 *(float *)(iVar7 + 0xc);
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      fVar9 = (fVar14 + 0.7853982) * fVar3 + fVar1;
    }
    (pMVar13->rotation).y = -fVar9;
    fVar14 = *param_4;
    fVar3 = param_4[1];
    fVar1 = ABS(*param_4);
    fVar2 = ABS(param_4[1]);
    *(float *)(puVar6 + 0xe) = fVar1 - fVar2;
    uVar18 = (ulonglong)((uint)fVar14 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1e) & 2 | (ulonglong)((uint)fVar3 >> 0x1d) & 4
    ;
    fVar14 = fVar1;
    if (*(float *)(puVar6 + 0xe) - 0.0 < 0.0) {
      fVar14 = fVar2;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
    if (*(float *)(puVar6 + 0xe) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    if (0.0 < fVar14) {
      lVar11 = uVar10 - 0xf0;
      lVar19 = uVar10 - 0x74;
      lVar17 = uVar10 - 0x84;
      lVar21 = 2;
      fVar14 = (fVar2 - fVar14) / (fVar2 + fVar14);
      fVar2 = fVar14 * fVar14;
      *(float *)(puVar6 + 0x11) = fVar14;
      *(float *)(puVar6 + 0x10) = fVar14;
      *(float *)((int)puVar6 + 0x84) = fVar14;
      *(float *)((int)puVar6 + 0x7c) = fVar14;
      fVar14 = fVar2 * fVar2;
      *(float *)(puVar6 + 0x10) = *(float *)(puVar6 + 0x10) * fVar2;
      *(float *)((int)puVar6 + 0x84) = *(float *)((int)puVar6 + 0x84) * fVar14;
      *(float *)(puVar6 + 0x11) = *(float *)(puVar6 + 0x11) * fVar14 * fVar2;
      do {
        *(float *)((int)lVar11 + 0x7c) = *(float *)((int)lVar11 + 0x6c) * fVar14 * fVar14;
        iVar5 = (int)lVar17;
        lVar17 = lVar17 + 8;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar5 + 4) * fVar14 * fVar14;
        lVar19 = lVar19 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar21 = 4;
      lVar19 = uVar10 - 0x84;
      pfVar20 = (float *)&DAT_007358e0;
      lVar11 = lVar12;
      lVar17 = lVar19;
      do {
        fVar14 = *pfVar20;
        fVar2 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar11 + 0x7c) = *(float *)((int)lVar11 + 0x7c) * fVar14;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar2;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar11 = 2;
      do {
        iVar5 = (int)lVar12;
        iVar7 = (int)lVar19;
        lVar12 = lVar12 + 0x10;
        lVar19 = lVar19 + 0x10;
        fVar8 = fVar8 + *(float *)(iVar5 + 0x7c) + *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) +
                *(float *)(iVar7 + 0xc);
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      fVar8 = (fVar8 + 0.7853982) * fVar3 + fVar1;
    }
    (pMVar13->rotation).z = fVar8;
    pfVar4[4] = 1.0;
    if (param_2 <= 0.0) {
      *pfVar4 = *param_4;
      pfVar4[1] = param_4[1];
      pfVar4[2] = param_4[2];
      pfVar4[3] = param_4[3];
      param_2 = (double)SQRT(param_4[2] * param_4[2] + *param_4 * *param_4 + param_4[1] * param_4[1]
                            );
    }
    else {
      fVar14 = *param_4;
      dVar22 = (double)SQRT(param_4[2] * param_4[2] + fVar14 * fVar14 + param_4[1] * param_4[1]);
      if (dVar22 == 0.0) {
        *pfVar4 = *param_4;
        pfVar4[1] = param_4[1];
        pfVar4[2] = param_4[2];
        fVar14 = param_4[3];
        pfVar4[2] = 0.0;
        pfVar4[1] = 0.0;
        *pfVar4 = 0.0;
      }
      else {
        fVar3 = (float)(param_2 / dVar22);
        *pfVar4 = fVar14 * fVar3;
        pfVar4[1] = param_4[1] * fVar3;
        pfVar4[2] = param_4[2] * fVar3;
        fVar14 = param_4[3];
      }
      pfVar4[3] = fVar14;
    }
    (pMVar13->pos).x = *param_5;
    (pMVar13->pos).y = param_5[1];
    (pMVar13->pos).z = param_5[2];
    (pMVar13->pos).w = param_5[3];
    fVar14 = (float)fastfunc::FastDoubleToInt((double)(float)(param_1 / param_2));
    pfVar4[5] = fVar14;
    pfVar4[6] = fVar14;
    iVar5 = *(int *)((int)param_3 + 0x24);
    fVar14 = *(float *)((int)param_3 + 0x2c);
    pMVar13->modeBits = DRAW_TRANSPARENT_WEIRD;
    pMVar13->scale = pMVar13->pClass->gScale * (fVar14 / *(float *)(iVar5 + 0x24));
    sVar16 = fastfunc::FastDoubleToInt((double)(pfVar4[4] * 24.0));
    pMVar13->alpha = sVar16;
    mobyfunc::SetColorOfMoby(pMVar13,0xff,0xff,0xff);
    mobyfunc::UpdateMobyTransform(pMVar13);
  }
  return pMVar13;
}



//==== 00184c30  ns=mobyupdate_unsorted  size=0xa10
// sig: undefined UpdateMoby_1009(MobyInstance * moby)
// callers(0): 
// callees(14): 00057820 collproc::CollLine; 00065468 stub::STUB_00065468; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 000fe610 mobyutil::MB_SphericalToVector; 001057f4 mobyutil::SetCollDamIn; 00128248 partupd::SpawnPart_27; 00184130 mobyupdate_helpers::M1009_00184130; 004fff60 fastfunc::FastDecTimerS32; 00500608 fastfunc::FastVecNormalize; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502758 fastfunc::FastDoubleToInt

/* Moby 1009 */

void mobyupdate_unsorted::UpdateMoby_1009(MobyInstance *moby)

{
  float fVar1;
  f32 fVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  MobyClass *pMVar7;
  float *out;
  ulonglong *puVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  s8 sVar20;
  float fVar18;
  longlong lVar15;
  longlong lVar16;
  int iVar19;
  undefined8 uVar17;
  float *pfVar22;
  longlong lVar21;
  uint uVar25;
  int iVar26;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
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
  ulonglong in_f22;
  ulonglong in_f23;
  undefined8 uVar39;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar40;
  ulonglong in_f27;
  double dVar41;
  ulonglong in_f28;
  double dVar42;
  ulonglong in_f29;
  double dVar43;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar44;
  
  lVar14 = (longlong)(int)moby;
  uVar13 = ZEXT48(&stack0x00000000);
  lVar16 = uVar13 - 0x1c0;
  puVar8 = (ulonglong *)lVar16;
  *puVar8 = uVar13;
  puVar8[0x3a] = in_LR;
  puVar8[0x2e] = in_f22;
  puVar8[0x2f] = in_f23;
  puVar8[0x30] = in_f24;
  puVar8[0x31] = in_f25;
  puVar8[0x32] = in_f26;
  puVar8[0x33] = in_f27;
  puVar8[0x34] = in_f28;
  puVar8[0x35] = in_f29;
  puVar8[0x36] = in_f30;
  puVar8[0x37] = in_f31;
  pMVar7 = moby->pClass;
  fVar18 = moby->scale;
  puVar8[0x2d] = unaff_r31;
  iVar12 = worldUpdateTime;
  fVar1 = pMVar7->gScale;
  iVar9 = worldUpdateTime / 6 + (worldUpdateTime >> 0x1f);
  uVar25 = (int)moby - (int)MobyInstance;
  puVar8[0x2c] = unaff_r30;
  out = (float *)moby->pVar;
  iVar26 = ((int)uVar25 >> 8) + (uint)((int)uVar25 < 0 && (uVar25 & 0xff) != 0);
  iVar19 = iVar26 / 6 + (iVar26 >> 0x1f);
  fVar2 = (moby->pos).y;
  *(f32 *)(puVar8 + 0xe) = (moby->pos).x;
  fVar3 = (moby->pos).z;
  *(f32 *)((int)puVar8 + 0x74) = fVar2;
  fVar2 = (moby->pos).w;
  *(f32 *)(puVar8 + 0xf) = fVar3;
  *(f32 *)((int)puVar8 + 0x7c) = fVar2;
  moby->scale = (fVar1 - fVar18) * 0.1 + fVar18;
  puVar8[0x2b] = unaff_r29;
  puVar8[0x2a] = unaff_r28;
  puVar8[0x29] = unaff_r27;
  puVar8[0x28] = unaff_r26;
  if (iVar12 + (iVar9 - (iVar9 >> 0x1f)) * -6 == iVar26 + (iVar19 - (iVar19 >> 0x1f)) * -6) {
    out[0xb] = 0.0;
  }
  sVar20 = fastfunc::FastDoubleToInt((double)(out[4] * 24.0));
  moby->alpha = sVar20;
  fVar18 = out[0xb];
  if (((fVar18 == 0.0) ||
      (*(char *)((int)fVar18 + 0x20) == -3 || *(char *)((int)fVar18 + 0x20) == -2)) ||
     (fVar4 = *(float *)((int)fVar18 + 0x14) - out[9],
     fVar1 = *(float *)((int)fVar18 + 0x10) - out[8],
     fVar5 = *(float *)((int)fVar18 + 0x18) - out[10],
     3.0 < SQRT(fVar5 * fVar5 + fVar1 * fVar1 + fVar4 * fVar4))) {
    fVar18 = (float)mobyupdate_helpers::M1009_00184130
                              (0x3fd0c15240000000,0x3fd0c15240000000,0x404e000000000000,
                               lVar14 + 0x10,lVar14 + 0x40);
    out[0xb] = fVar18;
  }
  if (fVar18 != 0.0) {
    out[8] = *(float *)((int)fVar18 + 0x10);
    out[9] = *(float *)((int)fVar18 + 0x14);
    out[10] = *(float *)((int)fVar18 + 0x18);
    fVar5 = *(float *)((int)fVar18 + 0x10) - (moby->pos).x;
    fVar6 = *(float *)((int)fVar18 + 0x14) - (moby->pos).y;
    fVar18 = *out;
    fVar1 = out[1];
    fVar4 = out[2];
    fVar11 = ABS(fVar5);
    fVar10 = ABS(fVar6);
    *(float *)((int)puVar8 + 0xdc) = fVar5;
    *(float *)(puVar8 + 0x1c) = fVar6;
    *(float *)((int)puVar8 + 0xe4) = fVar11 - fVar10;
    dVar41 = 0.0;
    fVar5 = (moby->rotation).z;
    dVar42 = 0.7853981852531433;
    uVar23 = (ulonglong)(*(uint *)((int)puVar8 + 0xdc) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar8 + 0xe4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar8 + 0x1c) >> 0x1d) & 4;
    dVar44 = (double)SQRT(fVar4 * fVar4 + fVar18 * fVar18 + fVar1 * fVar1);
    fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
    fVar18 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
    fVar4 = ABS(*(float *)((int)puVar8 + 0xdc));
    if (*(float *)((int)puVar8 + 0xe4) - 0.0 < 0.0) {
      fVar4 = fVar10;
    }
    fVar6 = ABS(*(float *)(puVar8 + 0x1c));
    if (*(float *)((int)puVar8 + 0xe4) - 0.0 < 0.0) {
      fVar6 = fVar11;
    }
    dVar28 = dVar41;
    if (0.0 < fVar4) {
      lVar15 = uVar13 - 0x1b0;
      lVar21 = uVar13 - 0xb8;
      lVar24 = uVar13 - 0xa8;
      lVar27 = 2;
      fVar4 = (fVar6 - fVar4) / (fVar6 + fVar4);
      fVar6 = fVar4 * fVar4;
      *(float *)((int)puVar8 + 0x114) = fVar4;
      *(float *)((int)puVar8 + 0x10c) = fVar4;
      *(float *)(puVar8 + 0x22) = fVar4;
      *(float *)(puVar8 + 0x21) = fVar4;
      fVar4 = fVar6 * fVar6;
      *(float *)((int)puVar8 + 0x10c) = *(float *)((int)puVar8 + 0x10c) * fVar6;
      *(float *)(puVar8 + 0x22) = *(float *)(puVar8 + 0x22) * fVar4;
      *(float *)((int)puVar8 + 0x114) = *(float *)((int)puVar8 + 0x114) * fVar4 * fVar6;
      do {
        *(float *)((int)lVar15 + 0x108) = *(float *)((int)lVar15 + 0xf8) * fVar4 * fVar4;
        iVar19 = (int)lVar21;
        lVar15 = lVar15 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar19 + 4) * fVar4 * fVar4;
        lVar24 = lVar24 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar24 = uVar13 - 0xb8;
      pfVar22 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar21 = lVar24;
      do {
        fVar4 = *pfVar22;
        fVar6 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar15 + 0x108) = *(float *)((int)lVar15 + 0x108) * fVar4;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
        lVar21 = lVar21 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar21 = 2;
      lVar15 = lVar16;
      do {
        iVar19 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar9 = (int)lVar24;
        lVar24 = lVar24 + 0x10;
        dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar19 + 0x108)) +
                          *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar1 + fVar18);
    }
    dVar28 = (double)fastfunc::FastDiffRots(dVar28,(double)fVar5);
    fVar18 = out[0xb];
    fVar1 = (moby->pos).y - *(float *)((int)fVar18 + 0x14);
    fVar4 = (moby->pos).x - *(float *)((int)fVar18 + 0x10);
    dVar43 = ABS(dVar28);
    fVar5 = *(float *)((int)fVar18 + 0x18) - (moby->pos).z;
    fVar18 = SQRT(fVar4 * fVar4 + fVar1 * fVar1);
    *(float *)((int)puVar8 + 0xd4) = fVar5;
    dVar34 = ABS((double)fVar5);
    dVar32 = ABS((double)fVar18);
    *(float *)(puVar8 + 0x1a) = fVar18;
    *(float *)(puVar8 + 0x1b) = (float)(dVar32 - dVar34);
    uVar23 = (ulonglong)(*(uint *)(puVar8 + 0x1a) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0x1b) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar8 + 0xd4) >> 0x1d) & 4;
    dVar40 = ABS((double)*(float *)(puVar8 + 0x1a));
    if ((double)*(float *)(puVar8 + 0x1b) - dVar41 < 0.0) {
      dVar40 = dVar34;
    }
    fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
    fVar18 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
    dVar34 = ABS((double)*(float *)((int)puVar8 + 0xd4));
    if ((double)*(float *)(puVar8 + 0x1b) - dVar41 < 0.0) {
      dVar34 = dVar32;
    }
    fVar4 = (moby->rotation).y;
    if (dVar41 < dVar40) {
      lVar15 = uVar13 - 0x1b0;
      lVar21 = uVar13 - 0xd8;
      lVar24 = uVar13 - 200;
      lVar27 = 2;
      fVar5 = (float)(dVar34 - dVar40) / (float)(dVar34 + dVar40);
      fVar6 = fVar5 * fVar5;
      *(float *)((int)puVar8 + 0xf4) = fVar5;
      *(float *)((int)puVar8 + 0xec) = fVar5;
      *(float *)(puVar8 + 0x1e) = fVar5;
      *(float *)(puVar8 + 0x1d) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)((int)puVar8 + 0xec) = *(float *)((int)puVar8 + 0xec) * fVar6;
      *(float *)(puVar8 + 0x1e) = *(float *)(puVar8 + 0x1e) * fVar5;
      *(float *)((int)puVar8 + 0xf4) = *(float *)((int)puVar8 + 0xf4) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar15 + 0xe8) = *(float *)((int)lVar15 + 0xd8) * fVar5 * fVar5;
        iVar19 = (int)lVar21;
        lVar15 = lVar15 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar19 + 4) * fVar5 * fVar5;
        lVar24 = lVar24 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar24 = uVar13 - 0xd8;
      pfVar22 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar21 = lVar24;
      do {
        fVar5 = *pfVar22;
        fVar6 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar15 + 0xe8) = *(float *)((int)lVar15 + 0xe8) * fVar5;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
        lVar21 = lVar21 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar15 = 2;
      do {
        iVar19 = (int)lVar16;
        iVar9 = (int)lVar24;
        lVar16 = lVar16 + 0x10;
        lVar24 = lVar24 + 0x10;
        dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar19 + 0xe8)) +
                          *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      dVar41 = (double)((float)(dVar41 + dVar42) * fVar1 + fVar18);
    }
    dVar41 = (double)fastfunc::FastDiffRots(-dVar41,(double)fVar4);
    dVar42 = ABS(dVar41);
    if ((0.2617993950843811 <= dVar43) || (0.2617993950843811 <= dVar42)) {
      out[0xb] = 0.0;
    }
    else {
      dVar40 = 0.8726646304130554;
      if ((double)(mobyutil::g_FrameTime * 0.87266463) - dVar43 < 0.0) {
        dVar28 = (double)(float)((double)(mobyutil::g_FrameTime * 0.87266463) *
                                (double)(float)(dVar28 / dVar43));
      }
      dVar28 = (double)fastfunc::FastWrapRot((moby->rotation).z,(float)dVar28);
      (moby->rotation).z = (float)dVar28;
      if ((double)(float)((double)mobyutil::g_FrameTime * dVar40) - dVar42 < 0.0) {
        dVar41 = (double)(float)((double)(float)((double)mobyutil::g_FrameTime * dVar40) *
                                (double)(float)(dVar41 / dVar42));
      }
      dVar41 = (double)fastfunc::FastWrapRot((moby->rotation).y,(float)dVar41);
      (moby->rotation).y = (float)dVar41;
      mobyutil::MB_SphericalToVector((float)dVar44,(moby->rotation).z,(float)-dVar41,out);
      stub::STUB_00065468(lVar14 + 0x10,(ulonglong)(uint)out[0xb] + 0x10);
    }
  }
  fVar18 = (moby->pos).x + *out;
  (moby->pos).x = fVar18;
  fVar1 = (moby->pos).y + out[1];
  (moby->pos).y = fVar1;
  fVar4 = (moby->pos).z + out[2];
  (moby->pos).z = fVar4;
  if (2.0 <= fVar18) {
    if (((fVar18 <= 1021.0) && (2.0 <= fVar1)) &&
       ((fVar1 <= 1021.0 && ((2.0 <= fVar4 && (fVar4 <= 1021.0)))))) {
      dVar41 = 1.0;
      mobyutil::SetCollDamIn(0x3ff0000000000000,uVar13 - 0x120,lVar14,0x10000);
      fVar18 = out[7];
      *(MOBY_OCLASSES *)((int)puVar8 + 0xba) = moby->oClass;
      iVar19 = collproc::CollLine(uVar13 - 0x150,lVar14 + 0x10,0,fVar18,uVar13 - 0x120);
      if (iVar19 != 0) {
        iVar19 = 0;
        dVar43 = 0.0;
        dVar34 = -1.0;
        dVar32 = 0.5;
        dVar40 = 5.0;
        dVar28 = 9.0;
        dVar44 = 10.5;
        dVar42 = 15.5;
        uVar39 = 0x40f5f90000000000;
        do {
          *(undefined4 *)(puVar8 + 0x10) = 0;
          *(undefined4 *)((int)puVar8 + 0x84) = 0;
          *(undefined4 *)(puVar8 + 0x11) = 0;
          *(undefined4 *)((int)puVar8 + 0x8c) = 0;
          dVar29 = (double)mobyutil::MB_randRangeFloat((float)dVar34,(float)dVar41);
          *(float *)(puVar8 + 0x10) = (float)dVar29;
          dVar29 = (double)mobyutil::MB_randRangeFloat((float)dVar34,(float)dVar41);
          *(float *)((int)puVar8 + 0x84) = (float)dVar29;
          dVar29 = (double)mobyutil::MB_randRangeFloat((float)dVar34,(float)dVar41);
          *(float *)(puVar8 + 0x11) = (float)dVar29;
          fastfunc::FastVecNormalize(uVar13 - 0x130,out,0xa10980);
          dVar31 = (double)*(float *)((int)puVar8 + 0x94);
          dVar33 = (double)*(float *)(puVar8 + 0x12);
          fVar1 = *(float *)((int)puVar8 + 0x84);
          dVar36 = (double)*(float *)(puVar8 + 0x13);
          fVar4 = *(float *)(puVar8 + 0x10);
          fVar5 = *(float *)(puVar8 + 0x11);
          dVar38 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar1 * fVar1);
          dVar30 = (double)mobyutil::g_FrameTime;
          *(undefined4 *)((int)puVar8 + 0x8c) = *(undefined4 *)((int)puVar8 + 0x9c);
          fVar18 = (float)((double)(float)((double)SQRT((float)(dVar36 * dVar36 +
                                                               (double)(float)(dVar33 * dVar33 +
                                                                              (double)(float)(dVar31
                                                                                             * 
                                                  dVar31)))) * dVar32) / dVar38);
          dVar29 = dVar43;
          if (dVar43 - dVar38 < 0.0) {
            dVar29 = (double)(fVar5 * fVar18);
          }
          dVar35 = dVar43;
          if (dVar43 - dVar38 < 0.0) {
            dVar35 = (double)(fVar1 * fVar18);
          }
          dVar37 = dVar43;
          if (dVar43 - dVar38 < 0.0) {
            dVar37 = (double)(fVar4 * fVar18);
          }
          if (dVar38 - dVar43 < 0.0) {
            dVar29 = (double)(fVar5 * fVar18);
          }
          if (dVar38 - dVar43 < 0.0) {
            dVar35 = (double)(fVar1 * fVar18);
          }
          if (dVar38 - dVar43 < 0.0) {
            dVar37 = (double)(fVar4 * fVar18);
          }
          *(float *)(puVar8 + 0x11) = (float)(dVar36 + dVar29);
          *(float *)((int)puVar8 + 0x84) = (float)(dVar31 + dVar35);
          *(float *)(puVar8 + 0x10) = (float)(dVar33 + dVar37);
          dVar29 = (double)mobyutil::MB_randRangeFloat
                                     ((float)(dVar30 * dVar40),(float)(dVar30 * dVar28));
          fVar1 = *(float *)((int)puVar8 + 0x84);
          fVar4 = *(float *)(puVar8 + 0x10);
          fVar5 = *(float *)(puVar8 + 0x11);
          dVar31 = (double)animationSpeed;
          dVar30 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar1 * fVar1);
          puVar8[0x25] = (longlong)(int)(dVar31 * dVar44);
          puVar8[0x25] = (longlong)(int)(dVar31 * dVar42);
          fVar18 = (float)(dVar29 / dVar30);
          dVar29 = dVar43;
          if (dVar43 - dVar30 < 0.0) {
            dVar29 = (double)(fVar4 * fVar18);
          }
          dVar31 = dVar43;
          if (dVar43 - dVar30 < 0.0) {
            dVar31 = (double)(fVar1 * fVar18);
          }
          dVar33 = dVar43;
          if (dVar43 - dVar30 < 0.0) {
            dVar33 = (double)(fVar5 * fVar18);
          }
          if (dVar30 - dVar43 < 0.0) {
            dVar29 = (double)(fVar4 * fVar18);
          }
          if (dVar30 - dVar43 < 0.0) {
            dVar31 = (double)(fVar1 * fVar18);
          }
          if (dVar30 - dVar43 < 0.0) {
            dVar33 = (double)(fVar5 * fVar18);
          }
          *(float *)(puVar8 + 0x10) = (float)dVar29;
          *(float *)((int)puVar8 + 0x84) = (float)dVar31;
          *(float *)(puVar8 + 0x11) = (float)dVar33;
          uVar17 = mobyutil::MB_randRange
                             (*(undefined4 *)((int)puVar8 + 300),*(undefined4 *)((int)puVar8 + 300))
          ;
          partupd::SpawnPart_27(uVar39,lVar14 + 0x10,uVar13 - 0x140,0x7f2f4f6f,uVar17);
          iVar19 = iVar19 + 1;
        } while (iVar19 < 5);
        mobyfunc::DeleteMoby(moby);
        return;
      }
      iVar19 = fastfunc::FastDecTimerS32(out + 6);
      if (iVar19 == 0) {
        return;
      }
      fVar18 = out[4];
      out[4] = fVar18 * 0.74;
      if (0.02 <= fVar18 * 0.74) {
        return;
      }
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  mobyfunc::DeleteMoby(moby);
  return;
}



//==== 00185640  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1009_00185640(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1009_00185640(void)

{
  DAT_0073b944 = 0x10000;
  return;
}



//==== 001856a0  ns=mobyupdate_helpers  size=0x788
// sig: undefined M101_001856a0(void)
// callers(1): 00185e70 mobyupdate_unsorted::UpdateMoby_101
// callees(16): 00057820 collproc::CollLine; 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00111ba0 mobyutil::MB_getTargetInArea; 00116a68 mobyutil::MB_BobMotion; 00116b70 mobyutil::MB_SwingMotion; 00121740 partupd::SpawnPart_4; 0015cc7c sound::IsMobyPlayingSound; 0015d12c sound::PlayMobySound

void mobyupdate_helpers::M101_001856a0(MobyInstance *param_1)

{
  float fVar1;
  undefined4 uVar2;
  void *pvVar3;
  Spline *pSVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar9;
  longlong lVar8;
  int iVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 local_60 [16];
  int local_50;
  float local_4c;
  longlong local_48;
  
  pvVar3 = param_1->pVar;
  uVar11 = ZEXT48(pvVar3);
  if (param_1->state == '\0') {
    return;
  }
  if ((*(int *)((int)pvVar3 + 0x110) == -1) ||
     (iVar9 = sound::IsMobyPlayingSound(param_1,*(int *)((int)pvVar3 + 0x110)), iVar9 == 0)) {
    *(undefined4 *)((int)pvVar3 + 0x110) = 0xffffffff;
    iVar9 = sound::PlayMobySound(1,4,param_1);
    *(int *)((int)pvVar3 + 0x110) = iVar9;
  }
  dVar12 = 0.5;
  mobyutil::MB_BobMotion
            (0.5,mobyutil::g_FrameTime * 1.3962634,param_1,(float *)((int)pvVar3 + 0x100),
             (float *)((int)pvVar3 + 0x104));
  mobyutil::MB_SwingMotion
            (0x3fbaceea00000000,(double)(mobyutil::g_FrameTime * 0.31415927),
             (double)(mobyutil::g_FrameTime * 0.36651915),param_1,uVar11 + 0x108,uVar11 + 0x10c);
  fVar1 = *(float *)((int)pvVar3 + 0x108);
  fVar5 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar5 = fVar1;
  }
  fVar6 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
    fVar6 = fVar5;
  }
  fVar1 = fVar6 * fVar6;
  fVar5 = fVar1 * fVar1 * fVar6;
  fVar7 = fVar1 * fVar5;
  (param_1->pos).x =
       *(float *)((int)pvVar3 + 0xc0) +
       fVar1 * fVar7 * 2.601887e-06 +
       fVar7 * -0.0001980741 + fVar5 * 0.0083330255 + fVar1 * fVar6 * -0.16666657 + fVar6;
  fVar1 = *(float *)((int)pvVar3 + 0x10c);
  fVar5 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar5 = fVar1;
  }
  fVar6 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
    fVar6 = fVar5;
  }
  fVar1 = fVar6 * fVar6;
  fVar5 = fVar1 * fVar1 * fVar6;
  fVar7 = fVar1 * fVar5;
  (param_1->pos).y =
       *(float *)((int)pvVar3 + 0xc4) +
       fVar1 * fVar7 * 2.601887e-06 +
       fVar7 * -0.0001980741 + fVar5 * 0.0083330255 + fVar1 * fVar6 * -0.16666657 + fVar6;
  dVar13 = 0.0;
  mobyutil::MB_randRangeFloat(4.5,5.5);
  mobyfunc::GetBonePosition(param_1,2,auStack_80);
  mobyfunc::GetBonePosition(param_1,3,auStack_70);
  if ((worldUpdateTime & 1) == 0) {
    iVar9 = mobyutil::MB_randRange(0x14,0x18);
    iVar9 = (int)(animationSpeed * (float)((double)(longlong)iVar9 + dVar12));
    local_48 = (longlong)iVar9;
    partupd::SpawnPart_4(auStack_80,local_60,0x6000ffff,0x80,iVar9,100,0xfffffffffffffff6,1);
    iVar9 = mobyutil::MB_randRange(0x14,0x18);
    iVar9 = (int)(animationSpeed * (float)((double)(longlong)iVar9 + dVar12));
    local_48 = (longlong)iVar9;
    partupd::SpawnPart_4(auStack_70,local_60,0x6000ffff,0x80,iVar9,100,0xfffffffffffffff6,1);
  }
  else {
    iVar9 = mobyutil::MB_randRange(0x12,0x16);
    iVar9 = (int)(animationSpeed * (float)((double)(longlong)iVar9 + dVar12));
    local_48 = (longlong)iVar9;
    partupd::SpawnPart_4
              (auStack_80,local_60,0xffffffffcf0000ff,0xcf,iVar9,0x32,0xfffffffffffffff6,1);
    iVar9 = mobyutil::MB_randRange(0x12,0x16);
    iVar9 = (int)(animationSpeed * (float)((double)(longlong)iVar9 + dVar12));
    local_48 = (longlong)iVar9;
    partupd::SpawnPart_4
              (auStack_70,local_60,0xffffffffcf0000ff,0xcf,iVar9,0x32,0xfffffffffffffff6,1);
  }
  lVar8 = mobyutil::MB_randRange(10,0x19);
  iVar9 = mobyutil::MB_randRange(10,0xf);
  iVar9 = (int)(animationSpeed * (float)((double)(longlong)iVar9 + dVar12));
  local_48 = (longlong)iVar9;
  partupd::SpawnPart_4(auStack_80,local_60,0xffffffffefff7f4f,0xff0000,iVar9,lVar8,-lVar8,1);
  lVar8 = mobyutil::MB_randRange(10,0x19);
  iVar9 = mobyutil::MB_randRange(10,0xf);
  iVar9 = (int)(animationSpeed * (float)((double)(longlong)iVar9 + dVar12));
  local_48 = (longlong)iVar9;
  partupd::SpawnPart_4(auStack_70,local_60,0xffffffffefff7f4f,0xff0000,iVar9,lVar8,-lVar8,1);
  local_4c = 0.0;
  param_1->scale = param_1->pClass->gScale * DAT_0073b968;
  iVar9 = mobyutil::MB_damage(param_1,0x330000,0);
  iVar10 = mobyutil::MB_HandleDamage(param_1,iVar9,uVar11 + 0x20,0,&local_50,&local_4c,0,4);
  if (((iVar9 != 0) && (*(int *)(iVar9 + 0x20) != 0)) &&
     (*(short *)(*(int *)(iVar9 + 0x20) + 0xa6) == 0x4d1)) {
    local_4c = 0.0;
    local_50 = 1;
  }
  if (local_50 == 1) goto LAB_00185cbc;
  fVar1 = *(float *)((int)pvVar3 + 0x20) - local_4c;
  *(float *)((int)pvVar3 + 0x20) = fVar1;
  if (param_1->animationId != '\a') {
    mobyutil::MB_SetAnimation(param_1,7,0,5);
    fVar1 = *(float *)((int)pvVar3 + 0x20);
  }
  if ((double)fVar1 <= dVar13) {
LAB_00185c88:
    mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
    param_1->state = '\b';
    *(undefined1 *)((int)pvVar3 + 0x67) = 0xf0;
  }
  else {
    param_1->state = '\a';
    if (iVar10 < 3) {
      if ((-1 < iVar10) && (0 < iVar10)) goto LAB_00185c88;
    }
    else if (iVar10 < 0xb) {
      if (iVar10 < 9) {
        *(undefined1 *)((int)pvVar3 + 0x67) = 0x78;
      }
      else {
        *(undefined1 *)((int)pvVar3 + 0x67) = 0xfa;
      }
    }
  }
  mobyutil::MB_UpdateLightsTransition(param_1,uVar11 + 0x60);
LAB_00185cbc:
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar11 + 0x60);
  uVar2 = 0x42200000;
  if (param_1->state == '\x04') {
    uVar2 = 0x42480000;
  }
  *(undefined4 *)((int)pvVar3 + 0xd8) = uVar2;
  pSVar4 = Splines[*(int *)((int)pvVar3 + 0xd0)];
  iVar9 = mobyutil::MB_getTargetInArea(param_1,uVar11 + 0x70,pSVar4,0,0,pSVar4->points,pSVar4->cnt);
  if (iVar9 != 2) {
    fVar1 = (param_1->pos).y - *(float *)((int)pvVar3 + 0x74);
    fVar5 = (param_1->pos).x - *(float *)((int)pvVar3 + 0x70);
    if ((*(float *)((int)pvVar3 + 0xd8) < SQRT(fVar5 * fVar5 + fVar1 * fVar1)) ||
       (8.0 < ABS((param_1->pos).z - *(float *)((int)pvVar3 + 0x78)))) {
      *(undefined4 *)((int)pvVar3 + 0xb4) = 2;
    }
    else if ((param_1->state != '\x05') &&
            (iVar9 = collproc::CollLine(&param_1->pos,&hero::g_heroCGPos,2,param_1,0), iVar9 != 0))
    {
      *(undefined4 *)((int)pvVar3 + 0xb4) = 2;
    }
  }
  if (*(int *)((int)pvVar3 + 0xb0) == 0) {
    *(MobyInstance **)((int)pvVar3 + 0xb0) = g_heroMobyPtr;
  }
  return;
}



//==== 00185e70  ns=mobyupdate_unsorted  size=0xd5c
// sig: undefined UpdateMoby_101(MobyInstance * moby)
// callers(0): 
// callees(12): 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000fcc68 mobyutil::MB_randRot; 000fddc0 mobyutil::MB_SetAnimation; 00109c30 mobyutil::OrganicDelt; 0010a2e0 mobyutil::OrganicDeltAng; 0010e030 mobyutil::MB_genericExplosion; 0015d12c sound::PlayMobySound; 001856a0 mobyupdate_helpers::M101_001856a0; 00216898 FUN_00216898; 002169b4 FUN_002169b4; 004fff60 fastfunc::FastDecTimerS32

/* Moby 101 */

void mobyupdate_unsorted::UpdateMoby_101(MobyInstance *moby)

{
  u8 uVar1;
  char cVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  MobyModeBit MVar9;
  void *pvVar10;
  int iVar11;
  uint uVar12;
  ulonglong *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined4 uVar20;
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
  double dVar29;
  double dVar30;
  double dVar31;
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
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  
  lVar19 = (longlong)(int)moby;
  uVar18 = ZEXT48(&stack0x00000000);
  lVar24 = uVar18 - 400;
  puVar13 = (ulonglong *)lVar24;
  *puVar13 = uVar18;
  puVar13[0x34] = in_LR;
  puVar13[0x2d] = in_f27;
  puVar13[0x2e] = in_f28;
  puVar13[0x2f] = in_f29;
  puVar13[0x30] = in_f30;
  puVar13[0x31] = in_f31;
  puVar13[0x2c] = unaff_r31;
  puVar13[0x2b] = unaff_r30;
  puVar13[0x2a] = unaff_r29;
  pvVar10 = moby->pVar;
  mobyupdate_helpers::M101_001856a0();
  uVar1 = moby->state;
  iVar11 = *(int *)((int)pvVar10 + 0xb0);
  if (uVar1 == '\b') {
    *(undefined4 *)((int)puVar13 + 0xec) = 0;
    *(undefined4 *)(puVar13 + 0x1d) = 0;
    *(undefined4 *)((int)puVar13 + 0xe4) = 0;
    *(undefined4 *)(puVar13 + 0x1c) = 0;
    puVar13[0x12] = 2;
    puVar13[0x14] = 1;
    puVar13[0x15] = 1;
    puVar13[0x16] = 0xffffffffffffffff;
    puVar13[0x17] = 0;
    mobyutil::MB_genericExplosion
              (0,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,0x3ff0000000000000,
               0x402e000000000000,lVar19,uVar18 - 0xb0,lVar19 + 0x10,&DAT_00185e28,0,10,3,0x10);
    if (*(MobyInstance **)((int)pvVar10 + 0xf8) != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar10 + 0xf8));
    }
    if (*(MobyInstance **)((int)pvVar10 + 0xfc) != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar10 + 0xfc));
    }
    mobyfunc::DeleteMoby(moby);
  }
  else if (uVar1 == '\a') {
    if ((moby->field43_0x70 & 2U) != 0) {
      if (moby->animationId != moby->setByGroup) {
        mobyutil::MB_SetAnimation(lVar19,moby->setByGroup,0,10);
      }
      moby->state = '\x04';
    }
  }
  else if (uVar1 == '\x06') {
    dVar38 = 0.0;
    *(undefined4 *)(puVar13 + 0x1e) = 0;
    iVar11 = *(int *)((int)pvVar10 + 0xd4);
    fVar42 = (moby->pos).y;
    fVar6 = (moby->pos).x;
    fVar7 = (moby->pos).z;
    fVar5 = Cuboids[iVar11].pos.y;
    fVar8 = Cuboids[iVar11].pos.x;
    fVar14 = fVar42 - fVar5;
    fVar4 = Cuboids[iVar11].pos.z;
    fVar15 = fVar6 - fVar8;
    fVar16 = fVar7 - fVar4;
    dVar36 = (double)(fVar5 - fVar42);
    dVar35 = (double)(fVar8 - fVar6);
    dVar34 = (double)(fVar4 - fVar7);
    fVar42 = SQRT(fVar16 * fVar16 + fVar15 * fVar15 + fVar14 * fVar14);
    dVar37 = (double)fVar42;
    mobyutil::OrganicDelt
              (fVar42,DAT_0071f418 * 10.0,DAT_0071f418 * 10.0,mobyutil::g_FrameTime * 20.0,
               (float *)(puVar13 + 0x1e),0x720000,(float *)((int)pvVar10 + 0xf0));
    uVar1 = moby->animationId;
    dVar31 = (double)SQRT((float)(dVar34 * dVar34 +
                                 (double)(float)(dVar35 * dVar35 + (double)(float)(dVar36 * dVar36))
                                 ));
    dVar32 = (double)(float)((double)*(float *)((int)pvVar10 + 0xf0) / dVar31);
    dVar29 = dVar38;
    if (dVar38 - dVar31 < 0.0) {
      dVar29 = (double)(float)(dVar32 * dVar34);
    }
    dVar33 = dVar38;
    if (dVar38 - dVar31 < 0.0) {
      dVar33 = (double)(float)(dVar32 * dVar36);
    }
    dVar30 = dVar38;
    if (dVar38 - dVar31 < 0.0) {
      dVar30 = (double)(float)(dVar32 * dVar35);
    }
    if (dVar31 - dVar38 < 0.0) {
      dVar29 = (double)(float)(dVar32 * dVar34);
    }
    if (dVar31 - dVar38 < 0.0) {
      dVar33 = (double)(float)(dVar32 * dVar36);
    }
    if (dVar31 - dVar38 < 0.0) {
      dVar30 = (double)(float)(dVar32 * dVar35);
    }
    (moby->pos).z = (float)((double)(moby->pos).z + dVar29);
    (moby->pos).y = (float)((double)(moby->pos).y + dVar33);
    (moby->pos).x = (float)((double)(moby->pos).x + dVar30);
    if ((dVar37 < 0.10000000149011612) &&
       (uVar12 = (int)*(uint *)((int)pvVar10 + 0xf0) >> 0x1f,
       (int)((uVar12 >> 1 ^ *(uint *)((int)pvVar10 + 0xf0)) - uVar12) < 0x3c23d70a)) {
      if (uVar1 != '\0') {
        mobyutil::MB_SetAnimation(lVar19,0,0,10);
      }
      moby->setByGroup = '\0';
      moby->state = '\x02';
    }
  }
  else if (uVar1 == '\x05') {
    if (*(int *)((int)pvVar10 + 0xb4) != 2) {
      moby->setByGroup = '\0';
      moby->state = '\x06';
    }
  }
  else if (uVar1 == '\x04') {
    fVar42 = *(float *)(iVar11 + 0x10) - (moby->pos).x;
    fVar6 = *(float *)(iVar11 + 0x14) - (moby->pos).y;
    fVar5 = ABS(fVar42);
    fVar7 = ABS(fVar6);
    *(float *)((int)puVar13 + 0xf4) = fVar42;
    *(float *)(puVar13 + 0x1f) = fVar6;
    *(float *)((int)puVar13 + 0xfc) = fVar5 - fVar7;
    dVar29 = 0.0;
    uVar22 = (ulonglong)(*(uint *)((int)puVar13 + 0xf4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar13 + 0xfc) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar13 + 0x1f) >> 0x1d) & 4;
    fVar42 = ABS(*(float *)((int)puVar13 + 0xf4));
    if (*(float *)((int)puVar13 + 0xfc) - 0.0 < 0.0) {
      fVar42 = fVar7;
    }
    fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
    fVar6 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
    fVar8 = ABS(*(float *)(puVar13 + 0x1f));
    if (*(float *)((int)puVar13 + 0xfc) - 0.0 < 0.0) {
      fVar8 = fVar5;
    }
    dVar31 = dVar29;
    if (0.0 < fVar42) {
      lVar23 = uVar18 - 0x180;
      lVar27 = uVar18 - 0x74;
      lVar25 = uVar18 - 0x84;
      lVar28 = 2;
      fVar42 = (fVar8 - fVar42) / (fVar8 + fVar42);
      fVar5 = fVar42 * fVar42;
      *(float *)(puVar13 + 0x23) = fVar42;
      *(float *)(puVar13 + 0x22) = fVar42;
      *(float *)((int)puVar13 + 0x114) = fVar42;
      *(float *)((int)puVar13 + 0x10c) = fVar42;
      fVar42 = fVar5 * fVar5;
      *(float *)(puVar13 + 0x22) = *(float *)(puVar13 + 0x22) * fVar5;
      *(float *)((int)puVar13 + 0x114) = *(float *)((int)puVar13 + 0x114) * fVar42;
      *(float *)(puVar13 + 0x23) = *(float *)(puVar13 + 0x23) * fVar42 * fVar5;
      do {
        *(float *)((int)lVar23 + 0x10c) = *(float *)((int)lVar23 + 0xfc) * fVar42 * fVar42;
        iVar21 = (int)lVar25;
        lVar25 = lVar25 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar21 + 4) * fVar42 * fVar42;
        lVar27 = lVar27 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar27 = uVar18 - 0x84;
      pfVar26 = (float *)&DAT_007358e0;
      lVar23 = lVar24;
      lVar25 = lVar27;
      do {
        fVar42 = *pfVar26;
        fVar5 = pfVar26[1];
        pfVar26 = pfVar26 + 2;
        *(float *)((int)lVar23 + 0x10c) = *(float *)((int)lVar23 + 0x10c) * fVar42;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar5;
        lVar25 = lVar25 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar23 = 2;
      do {
        iVar21 = (int)lVar24;
        iVar17 = (int)lVar27;
        lVar24 = lVar24 + 0x10;
        lVar27 = lVar27 + 0x10;
        dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar21 + 0x10c)) +
                          *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc)
                         );
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar7 + fVar6);
    }
    fVar42 = mobyutil::OrganicDeltAng
                       ((float)dVar31,DAT_0071f418 * 12.566371,DAT_0071f418 * 25.132742,
                        mobyutil::g_FrameTime * 6.2831855,&(moby->rotation).z,0x185e28,
                        (float *)((int)pvVar10 + 0xdc));
    dVar31 = (double)fVar42;
    cVar2 = moby->setByGroup;
    if (cVar2 == '\x06') {
      if ((moby->field43_0x70 & 2U) != 0) {
        if (*(int *)((int)pvVar10 + 0xb4) == 2) {
          if (moby->animationId != '\0') {
            mobyutil::MB_SetAnimation(dVar31,lVar19,0,0,2);
          }
          moby->setByGroup = '\0';
          moby->state = '\x02';
        }
        else {
          moby->setByGroup = '\x01';
          if (moby->animationId != '\x01') {
            mobyutil::MB_SetAnimation(dVar31,lVar19,1,0,2);
          }
        }
      }
    }
    else if (cVar2 == '\x05') {
      if (*(int *)((int)pvVar10 + 0xb4) == 2) {
        if (moby->animationId != '\x06') {
          mobyutil::MB_SetAnimation(dVar31,lVar19,6,0,2);
        }
        moby->setByGroup = '\x06';
      }
      else {
        moby->setByGroup = '\x02';
        if (moby->animationId != '\x02') {
          mobyutil::MB_SetAnimation(dVar31,lVar19,2,0,2);
        }
      }
    }
    else if (cVar2 == '\x04') {
      if (((moby->field43_0x70 & 2U) != 0) &&
         (moby->setByGroup = '\x05', moby->animationId != '\x05')) {
        mobyutil::MB_SetAnimation(dVar31,lVar19,5,0,2);
      }
    }
    else if (cVar2 == '\x03') {
      iVar21 = fastfunc::FastDecTimerS32(ZEXT48(pvVar10) + 0xe8);
      if (iVar21 != 0) {
        auVar39 = ZEXT416(0xffffffff);
        auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
        auVar39 = loadVectorLeftIndexed(0x2c,0x185e28);
        auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        iVar21 = *(int *)((int)pvVar10 + 0xf4);
        auVar39 = vectorMultiplyAddFloatingPoint
                            (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                             auVar40);
        auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
        auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar20 = storeVectorElementWordIndexed
                           (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0xe8,
                            ZEXT48(pvVar10));
        *(undefined4 *)((int)pvVar10 + 0xe8U & 0xfffffffc) = uVar20;
        if (iVar21 == 0) {
          mobyfunc::GetBonePosition(lVar19,0,uVar18 - 0xd0);
        }
        else {
          mobyfunc::GetBonePosition(lVar19,1,uVar18 - 0xd0);
        }
        fVar6 = *(float *)(iVar11 + 0x10) - *(float *)(puVar13 + 0x18);
        *(float *)(puVar13 + 0x1a) = fVar6;
        fVar7 = *(float *)(iVar11 + 0x14) - *(float *)((int)puVar13 + 0xc4);
        *(float *)((int)puVar13 + 0xd4) = fVar7;
        fVar5 = *(float *)(iVar11 + 0x18) - *(float *)(puVar13 + 0x19);
        fVar42 = DAT_0073b974 * mobyutil::g_FrameTime;
        *(float *)(puVar13 + 0x1b) = fVar5;
        *(undefined4 *)((int)puVar13 + 0xdc) = *(undefined4 *)(iVar11 + 0x1c);
        iVar21 = *(int *)((int)pvVar10 + 0xf4);
        dVar32 = (double)SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7);
        fVar42 = (float)((double)fVar42 / dVar32);
        dVar31 = dVar29;
        if (dVar29 - dVar32 < 0.0) {
          dVar31 = (double)(fVar6 * fVar42);
        }
        dVar34 = dVar29;
        if (dVar29 - dVar32 < 0.0) {
          dVar34 = (double)(fVar7 * fVar42);
        }
        dVar35 = dVar29;
        if (dVar29 - dVar32 < 0.0) {
          dVar35 = (double)(fVar5 * fVar42);
        }
        if (dVar32 - dVar29 < 0.0) {
          dVar31 = (double)(fVar6 * fVar42);
        }
        if (dVar32 - dVar29 < 0.0) {
          dVar34 = (double)(fVar7 * fVar42);
        }
        if (dVar32 - dVar29 < 0.0) {
          dVar35 = (double)(fVar5 * fVar42);
        }
        *(float *)(puVar13 + 0x1a) = (float)dVar31;
        *(float *)((int)puVar13 + 0xd4) = (float)dVar34;
        *(float *)(puVar13 + 0x1b) = (float)dVar35;
        if (iVar21 == 0) {
          if (*(int *)((int)pvVar10 + 0xfc) != 0) {
            FUN_002169b4((double)*(float *)((int)pvVar10 + 0xec),*(int *)((int)pvVar10 + 0xfc),
                         uVar18 - 0xc0);
            sound::PlayMobySound(0,0,moby);
          }
          uVar20 = FUN_00216898(lVar19,0);
          *(undefined4 *)((int)pvVar10 + 0xfc) = uVar20;
          uVar20 = 1;
        }
        else {
          if (*(int *)((int)pvVar10 + 0xf8) != 0) {
            FUN_002169b4((double)*(float *)((int)pvVar10 + 0xec),*(int *)((int)pvVar10 + 0xf8),
                         uVar18 - 0xc0);
            sound::PlayMobySound(0,0,moby);
          }
          uVar20 = FUN_00216898(lVar19,1);
          *(undefined4 *)((int)pvVar10 + 0xf8) = uVar20;
          uVar20 = 0;
        }
        *(undefined4 *)((int)pvVar10 + 0xf4) = uVar20;
        fVar42 = *(float *)((int)pvVar10 + 0xec) + 5.0;
        *(float *)((int)pvVar10 + 0xec) = fVar42;
        fVar6 = (moby->pos).y - *(float *)(iVar11 + 0x14);
        fVar7 = (moby->pos).x - *(float *)(iVar11 + 0x10);
        fVar6 = SQRT(fVar7 * fVar7 + fVar6 * fVar6);
        if (fVar6 < fVar42) {
          *(float *)((int)pvVar10 + 0xec) = fVar6;
        }
      }
      if (*(int *)((int)pvVar10 + 0xb4) == 2) {
        if (moby->animationId != '\x04') {
          mobyutil::MB_SetAnimation(lVar19,4,0,2);
        }
        moby->setByGroup = '\x04';
      }
    }
    else if (cVar2 == '\x02') {
      if (((moby->field43_0x70 & 2U) != 0) &&
         (moby->setByGroup = '\x03', moby->animationId != '\x03')) {
        mobyutil::MB_SetAnimation(dVar31,lVar19,3,0,2);
      }
    }
    else if (cVar2 == '\x01') {
      if ((moby->field43_0x70 & 2U) != 0) {
        moby->setByGroup = '\x02';
        if (moby->animationId != '\x02') {
          mobyutil::MB_SetAnimation(dVar31,lVar19,2,0,2);
        }
        *(undefined4 *)((int)pvVar10 + 0xe8) = 0;
      }
    }
    else if ((cVar2 == '\0') && (moby->setByGroup = '\x01', moby->animationId != '\x01')) {
      mobyutil::MB_SetAnimation(dVar31,lVar19,1,0,2);
    }
  }
  else if (uVar1 == '\x02') {
    fVar42 = *(float *)(iVar11 + 0x10) - (moby->pos).x;
    fVar6 = *(float *)(iVar11 + 0x14) - (moby->pos).y;
    fVar7 = ABS(fVar42);
    fVar5 = ABS(fVar6);
    *(float *)(puVar13 + 0x20) = fVar42;
    *(float *)((int)puVar13 + 0x104) = fVar6;
    *(float *)(puVar13 + 0x21) = fVar7 - fVar5;
    fVar42 = 0.0;
    uVar22 = (ulonglong)(*(uint *)(puVar13 + 0x20) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar13 + 0x21) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar13 + 0x104) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)(puVar13 + 0x20));
    if (*(float *)(puVar13 + 0x21) - 0.0 < 0.0) {
      fVar6 = fVar5;
    }
    fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
    fVar5 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
    fVar4 = ABS(*(float *)((int)puVar13 + 0x104));
    if (*(float *)(puVar13 + 0x21) - 0.0 < 0.0) {
      fVar4 = fVar7;
    }
    if (0.0 < fVar6) {
      lVar23 = uVar18 - 0x180;
      lVar25 = uVar18 - 100;
      lVar27 = uVar18 - 0x54;
      lVar28 = 2;
      fVar6 = (fVar4 - fVar6) / (fVar4 + fVar6);
      fVar7 = fVar6 * fVar6;
      *(float *)(puVar13 + 0x27) = fVar6;
      *(float *)(puVar13 + 0x26) = fVar6;
      *(float *)((int)puVar13 + 0x134) = fVar6;
      *(float *)((int)puVar13 + 300) = fVar6;
      fVar6 = fVar7 * fVar7;
      *(float *)(puVar13 + 0x26) = *(float *)(puVar13 + 0x26) * fVar7;
      *(float *)((int)puVar13 + 0x134) = *(float *)((int)puVar13 + 0x134) * fVar6;
      *(float *)(puVar13 + 0x27) = *(float *)(puVar13 + 0x27) * fVar6 * fVar7;
      do {
        *(float *)((int)lVar23 + 300) = *(float *)((int)lVar23 + 0x11c) * fVar6 * fVar6;
        iVar11 = (int)lVar25;
        lVar23 = lVar23 + 8;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar11 + 4) * fVar6 * fVar6;
        lVar27 = lVar27 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar27 = uVar18 - 100;
      pfVar26 = (float *)&DAT_007358e0;
      lVar23 = lVar24;
      lVar25 = lVar27;
      do {
        fVar6 = *pfVar26;
        fVar7 = pfVar26[1];
        pfVar26 = pfVar26 + 2;
        *(float *)((int)lVar23 + 300) = *(float *)((int)lVar23 + 300) * fVar6;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar7;
        lVar25 = lVar25 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar23 = 2;
      do {
        iVar11 = (int)lVar24;
        iVar21 = (int)lVar27;
        lVar24 = lVar24 + 0x10;
        lVar27 = lVar27 + 0x10;
        fVar42 = fVar42 + *(float *)(iVar11 + 300) + *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8)
                 + *(float *)(iVar21 + 0xc);
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      fVar42 = (fVar42 + 0.7853982) * fVar8 + fVar5;
    }
    fVar42 = mobyutil::OrganicDeltAng
                       (fVar42,DAT_0071f418 * 4.712389,DAT_0071f418 * 4.712389,
                        mobyutil::g_FrameTime * 10.12291,&(moby->rotation).z,0x185e28,
                        (float *)((int)pvVar10 + 0xdc));
    if (*(int *)((int)pvVar10 + 0xb4) != 2) {
      *(undefined4 *)((int)pvVar10 + 0xec) = 0x41700000;
      moby->setByGroup = '\x01';
      if (moby->animationId != '\x01') {
        mobyutil::MB_SetAnimation((double)fVar42,lVar19,1,0,0);
      }
      moby->state = '\x04';
    }
  }
  else if (uVar1 == '\0') {
    MVar9 = moby->modeBits;
    *(f32 *)((int)pvVar10 + 0xc0) = (moby->pos).x;
    *(f32 *)((int)pvVar10 + 0xc4) = (moby->pos).y;
    fVar3 = (moby->pos).z;
    moby->modeBits = MVar9 | (CAN_BE_DAMAGED|CAN_BE_AUTO_TARGETED);
    *(f32 *)((int)pvVar10 + 200) = fVar3;
    fVar3 = (moby->pos).w;
    *(undefined4 *)((int)pvVar10 + 0x20) = 0x40800000;
    *(f32 *)((int)pvVar10 + 0xcc) = fVar3;
    *(undefined2 *)((int)pvVar10 + 0x24) = 4;
    *(undefined1 *)((int)pvVar10 + 0x28) = 3;
    *(undefined1 *)((int)pvVar10 + 0x5a) = 0;
    *(undefined1 *)((int)pvVar10 + 0x58) = 0x32;
    *(undefined4 *)((int)pvVar10 + 0xec) = 0x41700000;
    moby->drawDistance = 0xff;
    uVar1 = moby->animationId;
    (moby->pos).z = (moby->pos).z + 1.0;
    if (uVar1 != '\0') {
      mobyutil::MB_SetAnimation(lVar19,0,0,10);
    }
    moby->setByGroup = '\0';
    uVar20 = FUN_00216898(lVar19,0);
    *(undefined4 *)((int)pvVar10 + 0xfc) = uVar20;
    uVar20 = FUN_00216898(lVar19,1);
    *(undefined4 *)((int)pvVar10 + 0xf8) = uVar20;
    moby->state = ((byte)((LZCOUNT(-1 - *(int *)((int)pvVar10 + 0xd4)) << 0x3a) >> 0x3f) & 0xfd) + 5
    ;
    dVar29 = (double)mobyutil::MB_randRot();
    *(float *)((int)pvVar10 + 0x100) = (float)dVar29;
    dVar29 = (double)mobyutil::MB_randRot();
    *(float *)((int)pvVar10 + 0x108) = (float)dVar29;
    dVar29 = (double)mobyutil::MB_randRot();
    *(float *)((int)pvVar10 + 0x10c) = (float)dVar29;
    *(undefined4 *)((int)pvVar10 + 0x110) = 0xffffffff;
  }
  return;
}



//==== 00186bcc  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1012_00186bcc(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1012_00186bcc(void)

{
  DAT_0073b9c4 = 0x10000;
  return;
}



//==== 00186be0  ns=mobyupdate_helpers  size=0x40
// sig: undefined M1012_00186be0(void)
// callers(0): 
// callees(0): 

undefined8 mobyupdate_helpers::M1012_00186be0(int param_1)

{
  undefined8 uVar1;
  
  if (*(short *)(param_1 + 0xa6) == 0x3f4) {
    if ((*(char *)(param_1 + 0x20) == '\0') || (*(int *)(*(int *)(param_1 + 0x78) + 0x7c) != 1)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



//==== 00186c20  ns=mobyupdate_helpers  size=0x58
// sig: undefined M1012_00186c20(void)
// callers(0): 
// callees(0): 

undefined8 mobyupdate_helpers::M1012_00186c20(int param_1)

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



//==== 00186c78  ns=mobyupdate_helpers  size=0x114
// sig: undefined M1012_00186c78(MobyInstance * param_1, undefined4 param_2)
// callers(1): 00186e60 mobyupdate_unsorted::UpdateMoby_1012
// callees(3): 000c8444 hud::RegisterHUDCallback; 000c90a0 hud::Hud_ShowEntryById; 0011aeec mobyutil::MB_ShowPersistentMessage

int mobyupdate_helpers::M1012_00186c78(MobyInstance *param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = param_1->pVar;
  if (param_2 < 3) {
    if (0 < param_2) {
      if (param_2 < 2) {
        mobyutil::MB_ShowPersistentMessage(8,0xbce);
      }
      else {
        mobyutil::MB_ShowPersistentMessage(8,0xbcf);
      }
      goto LAB_00186d24;
    }
  }
  else {
    if (param_2 < 4) {
      mobyutil::MB_ShowPersistentMessage(8,0xbcb);
      goto LAB_00186d24;
    }
    if (param_2 < 5) {
      mobyutil::MB_ShowPersistentMessage(8,0xbcd);
      goto LAB_00186d24;
    }
  }
  mobyutil::MB_ShowPersistentMessage(8,0xffffffffffffffff);
LAB_00186d24:
  iVar2 = *(int *)((int)pvVar1 + 0xa4);
  if (iVar2 == -1) {
    iVar2 = hud::RegisterHUDCallback
                      (0xc,0,&PTR_PromptHud_Init_00705750,&PTR_PromptHud_Update_00705758,
                       &PTR_Draw_PromptMsg_00705788,(int *)0x0,0);
    *(int *)((int)pvVar1 + 0xa4) = iVar2;
  }
  else {
    iVar2 = hud::Hud_ShowEntryById(iVar2,10);
  }
  return iVar2;
}



//==== 00186d90  ns=mobyupdate_helpers  size=0xc0
// sig: undefined M1012_00186d90(void)
// callers(0): 
// callees(2): 00116a68 mobyutil::MB_BobMotion; 00116b70 mobyutil::MB_SwingMotion

void mobyupdate_helpers::M1012_00186d90(MobyInstance *param_1)

{
  void *pvVar1;
  double dVar2;
  
  dVar2 = 0.01745329238474369;
  pvVar1 = param_1->pVar;
  mobyutil::MB_BobMotion
            (DAT_0073b9e8,DAT_0073b9ec * 0.017453292 * mobyutil::g_FrameTime,param_1,
             (float *)((int)pvVar1 + 0xac),(float *)((int)pvVar1 + 0xa8));
  mobyutil::MB_SwingMotion
            ((double)DAT_0073b9f0,
             (double)((float)((double)DAT_0073b9f4 * dVar2) * mobyutil::g_FrameTime),
             (double)((float)((double)DAT_0073b9f8 * dVar2) * mobyutil::g_FrameTime),param_1,
             ZEXT48(pvVar1) + 0xb0,ZEXT48(pvVar1) + 0xb4);
  return;
}



//==== 00186e60  ns=mobyupdate_unsorted  size=0x6d8
// sig: undefined UpdateMoby_1012(MobyInstance * moby)
// callers(0): 
// callees(10): 00085a10 hero::Hero_GetSpecialStateKind; 000aa368 hero::Hero_WalkToPos; 00110b70 mobyutil::MB_IsPntInCuboid; 00112900 mobyutil::MB_GetOrientation; 00116a68 mobyutil::MB_BobMotion; 00116b70 mobyutil::MB_SwingMotion; 00186c78 mobyupdate_helpers::M1012_00186c78; 0046dcc8 mobyupdate_helpers::M816_MoveAlongSpline; 004d407c FUN_004d407c; 004fff60 fastfunc::FastDecTimerS32

/* Moby 1012 */

void mobyupdate_unsorted::UpdateMoby_1012(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  void *pvVar12;
  uint uVar13;
  u16 *puVar14;
  void *pvVar15;
  Spline *pSVar16;
  Spline *pSVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  MobyInstance *pMVar25;
  longlong lVar26;
  undefined8 uVar27;
  int iVar28;
  longlong unused;
  undefined8 in_LR;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  Vec4 local_70;
  
  lVar26 = (longlong)(int)moby;
  pvVar12 = moby->pVar;
  if ((*(int *)((int)pvVar12 + 0x90) != -1) && (*(int *)((int)pvVar12 + 0x94) != -1)) {
    if (moby->oClass == TAXI_03F4) {
      if ((moby->state == '\0') || (*(int *)((int)pvVar12 + 0x7c) != 1)) {
        uVar27 = 0;
      }
      else {
        uVar27 = 1;
      }
    }
    else {
      uVar27 = 0;
    }
    FUN_004d407c(lVar26,uVar27);
    dVar30 = (double)(moby->pos).x;
    dVar31 = (double)(moby->pos).y;
    dVar32 = (double)(moby->pos).z;
    fastfunc::FastDecTimerS32(ZEXT48(pvVar12) + 0x88);
    bVar2 = moby->state;
    fVar3 = (moby->pos).x;
    fVar4 = (moby->pos).y;
    fVar5 = (moby->pos).z;
    if (bVar2 < 2) {
      if (bVar2 == 0) {
        uVar13 = *(uint *)((int)pvVar12 + 0x80);
        moby->setByGroup = (char)uVar13;
        pSVar16 = Splines[*(int *)((int)pvVar12 + (uVar13 & 0xff) * 4 + 0x90)];
        (moby->pos).x = pSVar16->points[0].x;
        (moby->pos).y = pSVar16->points[0].y;
        (moby->pos).z = pSVar16->points[0].z;
        fVar3 = pSVar16->points[0].w;
        *(undefined4 *)((int)pvVar12 + 0xa4) = 0xffffffff;
        (moby->pos).w = fVar3;
        *(undefined4 *)((int)pvVar12 + 0x88) = 0;
        moby->state = '\x01';
        moby->updateDistance = -1;
        moby->drawDistance = 0xff;
      }
      else {
        pSVar16 = Splines[*(int *)((int)pvVar12 + 0x90)];
        pSVar17 = Splines[*(int *)((int)pvVar12 + 0x94)];
        fVar6 = pSVar16->points[0].y;
        fVar7 = pSVar16->points[0].x;
        fVar22 = g_heroPosition.y - fVar6;
        fVar8 = pSVar17->points[0].y;
        fVar9 = pSVar17->points[0].x;
        fVar20 = g_heroPosition.x - fVar7;
        fVar21 = g_heroPosition.y - fVar8;
        fVar19 = g_heroPosition.x - fVar9;
        fVar10 = pSVar16->points[0].z;
        fVar11 = pSVar17->points[0].z;
        fVar24 = g_heroPosition.z - fVar10;
        fVar23 = g_heroPosition.z - fVar11;
        bVar1 = SQRT(fVar24 * fVar24 + fVar20 * fVar20 + fVar22 * fVar22) <
                SQRT(fVar23 * fVar23 + fVar19 * fVar19 + fVar21 * fVar21);
        fVar6 = fVar4 - fVar6;
        fVar4 = fVar4 - fVar8;
        fVar7 = fVar3 - fVar7;
        fVar3 = fVar3 - fVar9;
        fVar10 = fVar5 - fVar10;
        fVar5 = fVar5 - fVar11;
        if ((*(int *)((int)pvVar12 + 0x7c) == 0) &&
           ((*(int *)((int)pvVar12 + 0x8c) != 0 ||
            (iVar28 = mobyutil::MB_IsPntInCuboid
                                (&g_heroPosition,(longlong)*(int *)((int)pvVar12 + 0xa0)),
            iVar28 != 0)))) {
          puVar14 = moby->pClass->collision;
          moby->setByGroup = bVar1;
          iVar28 = *(int *)((int)pvVar12 + (uint)bVar1 * 4 + 0x90);
          moby->collision = puVar14;
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
          pSVar16 = Splines[iVar28];
          (moby->pos).x = pSVar16->points[0].x;
          (moby->pos).y = pSVar16->points[0].y;
          (moby->pos).z = pSVar16->points[0].z;
          fVar3 = pSVar16->points[0].w;
          moby->state = '\x03';
          (moby->pos).w = fVar3;
          *(undefined4 *)((int)pvVar12 + 100) = 1;
          *(undefined4 *)((int)pvVar12 + 0x84) = 0;
          *(undefined4 *)((int)pvVar12 + 0x7c) = 1;
        }
        else if (*(int *)((int)pvVar12 + 0x7c) == 0) {
          moby->collision = (ushort *)0x0;
          moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
        }
        else if ((*(int *)((int)pvVar12 + 0x84) == 0) ||
                ((((pMVar25 = DAT_0096a1d8, hero::g_heroStateType != 3 && (g_heroState != EDGE_JUMP)
                   ) && (pMVar25 = g_standingOnMoby, g_framesNotGrounded != 0)) || (pMVar25 != moby)
                 ))) {
          if (bVar1 != SQRT(fVar10 * fVar10 + fVar7 * fVar7 + fVar6 * fVar6) <
                       SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4)) {
            moby->state = '\x03';
            moby->setByGroup = moby->setByGroup ^ 1;
            *(undefined4 *)((int)pvVar12 + 100) = 1;
            *(undefined4 *)((int)pvVar12 + 0x84) = 0;
          }
        }
        else {
          iVar28 = *(int *)((int)pvVar12 +
                           (int)(((ulonglong)(byte)moby->setByGroup ^ 1) << 2) + 0x98);
          unused = (longlong)iVar28;
          mobyupdate_helpers::M1012_00186c78(moby,iVar28);
          if (((g_buttonsPressedThisFrame & TRIANGLE) != 0) && (mobyutil::g_HelpMsgOwner == 8)) {
            hero::Hero_WalkToPos((moby->rotation).z,&(moby->pos).x,unused,0);
            moby->setByGroup = moby->setByGroup ^ 1;
            *(undefined4 *)((int)pvVar12 + 100) = 1;
            *(undefined4 *)((int)pvVar12 + 0x84) = 0;
            moby->state = '\x02';
          }
        }
      }
    }
    else if (bVar2 < 3) {
      iVar28 = hero::Hero_GetSpecialStateKind();
      if (iVar28 == 0) {
        moby->state = '\x03';
      }
    }
    else if (bVar2 < 4) {
      if (*(int *)((int)pvVar12 + 0x8c) == 0) {
        moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
      }
      pMVar25 = DAT_0096a1d8;
      if ((((hero::g_heroStateType == 3) || (g_heroState == EDGE_JUMP)) ||
          (pMVar25 = g_standingOnMoby, g_framesNotGrounded == 0)) && (pMVar25 == moby)) {
        DAT_00969ed2 = 4;
        DAT_00969ed4 = 4;
      }
      iVar28 = mobyupdate_helpers::M816_MoveAlongSpline
                         (moby,(longlong)
                               *(int *)((int)pvVar12 + (uint)(byte)moby->setByGroup * 4 + 0x90),
                          (int)pvVar12 + 0x78);
      if (iVar28 != 0) {
        auVar33 = ZEXT416(0xffffffff);
        auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
        moby->state = '\x01';
        auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
        auVar33 = loadVectorLeftIndexed(in_LR,0x186e50);
        auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar33 = vectorMultiplyAddFloatingPoint
                            (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,
                             auVar34);
        auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
        auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar18 = storeVectorElementWordIndexed
                           (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x88,
                            ZEXT48(pvVar12));
        *(undefined4 *)((int)pvVar12 + 0x88U & 0xfffffffc) = uVar18;
      }
    }
    dVar29 = 0.01745329238474369;
    pvVar15 = moby->pVar;
    mobyutil::MB_BobMotion
              (DAT_0073b9e8,DAT_0073b9ec * 0.017453292 * mobyutil::g_FrameTime,moby,
               (float *)((int)pvVar15 + 0xac),(float *)((int)pvVar15 + 0xa8));
    mobyutil::MB_SwingMotion
              ((double)DAT_0073b9f0,
               (double)((float)((double)DAT_0073b9f4 * dVar29) * mobyutil::g_FrameTime),
               (double)((float)((double)DAT_0073b9f8 * dVar29) * mobyutil::g_FrameTime),lVar26,
               ZEXT48(pvVar15) + 0xb0,ZEXT48(pvVar15) + 0xb4);
    local_70.x = (float)((double)(moby->pos).x - dVar30);
    local_70.y = (float)((double)(moby->pos).y - dVar31);
    local_70.w = (moby->pos).w;
    local_70.z = (float)((double)(moby->pos).z - dVar32);
    mobyutil::MB_GetOrientation
              ((MobyInstance *)((int)pvVar12 + 0x20),&local_70,ZEXT48(&stack0x00000000) - 0x80,
               lVar26 + 0x40);
    pMVar25 = DAT_0096a1d8;
    if (((((hero::g_heroStateType != 3) && (g_heroState != EDGE_JUMP)) &&
         (pMVar25 = g_standingOnMoby, g_framesNotGrounded != 0)) || (pMVar25 != moby)) &&
       ((fVar3 = (moby->pos).y - g_heroPosition.y, fVar4 = (moby->pos).x - g_heroPosition.x,
        2.0 < SQRT(fVar4 * fVar4 + fVar3 * fVar3) && (*(int *)((int)pvVar12 + 0x88) == 0)))) {
      *(undefined4 *)((int)pvVar12 + 0x84) = 1;
    }
  }
  return;
}



//==== 00187538  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1065_00187538(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1065_00187538(void)

{
  DAT_0073ba48 = 0x10000;
  return;
}



//==== 00187558  ns=mobyupdate_unsorted  size=0x4fc
// sig: undefined UpdateMoby_{1013_1014_1064_1065}(MobyInstance * moby)
// callers(0): 
// callees(2): 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound

/* Moby 1013
   Moby 1014
   Moby 1064
   Moby 1065 */

void mobyupdate_unsorted::UpdateMoby__1013_1014_1064_1065_(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  short sVar8;
  float *pfVar9;
  float fVar10;
  int iVar11;
  
  pfVar9 = (float *)moby->pVar;
  fVar3 = *pfVar9;
  if ((moby->levelFlagIdx != 0xff) && (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1)) {
    pfVar9[4] = -NAN;
  }
  uVar1 = moby->state;
  if (uVar1 == '\x04') {
    if ((((pfVar9[4] != -NAN) && (MobyInstance + (int)pfVar9[4] != (MobyInstance *)0x0)) &&
        (bVar2 = MobyInstance[(int)pfVar9[4]].state, bVar2 != 0xfd && bVar2 != 0xfe)) &&
       ((ushort)bVar2 != *(ushort *)((int)pfVar9 + 0x16))) {
      fVar4 = (moby->pos).y;
      fVar5 = (moby->pos).x;
      fVar6 = fVar5 - fVar3;
      fVar7 = fVar4 - pfVar9[1];
      fVar10 = DAT_0071f408 * 0.01;
      if (SQRT(fVar6 * fVar6 + fVar7 * fVar7) <= fVar10) {
        (moby->pos).x = fVar3;
        sVar8 = *(short *)(pfVar9 + 3);
        (moby->pos).y = pfVar9[1];
        fVar3 = pfVar9[2];
        (moby->pos).w = 0.0;
        (moby->pos).z = fVar3;
        if (((sVar8 != -1) &&
            (iVar11 = (int)((longlong)sVar8 << 7) - (int)((longlong)sVar8 << 4),
            *(MobyInstance **)((int)sound::g_SoundChannels + iVar11 + 0x18) == moby)) &&
           (*(char *)((int)sound::g_SoundChannels + iVar11 + 4) != '\0')) {
          sound::sound_Kill((int)sVar8);
        }
        *(undefined2 *)(pfVar9 + 3) = 0xffff;
        if (*(char *)((int)pfVar9 + 0xf) != -1) {
          sound::PlayMobySound((int)*(char *)((int)pfVar9 + 0xf),0,moby);
        }
        if (*(short *)(pfVar9 + 5) != -1) {
          *(undefined4 *)((int)&DAT_00a20828 + (int)((longlong)*(short *)(pfVar9 + 5) << 2)) = 0;
        }
        moby->state = '\x01';
        return;
      }
      if ((moby->oClass == 0x3f5) || (moby->oClass == 0x429)) {
        fVar10 = -fVar10;
      }
      fVar3 = (moby->transform).v1.y;
      fVar6 = (moby->transform).v1.z;
      (moby->pos).x = (moby->transform).v1.x * fVar10 + fVar5;
      (moby->pos).y = fVar3 * fVar10 + fVar4;
      (moby->pos).z = fVar6 * fVar10 + (moby->pos).z;
      return;
    }
    sound::PlayMobySound((int)*(char *)((int)pfVar9 + 0xe),0,moby);
    moby->state = '\x02';
  }
  else if (uVar1 == '\x03') {
    if ((((pfVar9[4] != -NAN) && (MobyInstance + (int)pfVar9[4] != (MobyInstance *)0x0)) &&
        (bVar2 = MobyInstance[(int)pfVar9[4]].state, bVar2 != 0xfd && bVar2 != 0xfe)) &&
       ((float)(uint)bVar2 == pfVar9[6])) {
      if (*(char *)((int)pfVar9 + 0xe) != -1) {
        sound::PlayMobySound((int)*(char *)((int)pfVar9 + 0xe),0,moby);
      }
      moby->state = '\x04';
    }
  }
  else if (uVar1 == '\x02') {
    if (((pfVar9[4] != -NAN) && (MobyInstance + (int)pfVar9[4] != (MobyInstance *)0x0)) &&
       ((bVar2 = MobyInstance[(int)pfVar9[4]].state, bVar2 != 0xfd && bVar2 != 0xfe &&
        ((float)(uint)bVar2 == pfVar9[6])))) {
      sound::PlayMobySound((int)*(char *)((int)pfVar9 + 0xe),0,moby);
      moby->state = '\x04';
      return;
    }
    fVar4 = (moby->pos).y;
    fVar5 = (moby->pos).x;
    fVar6 = fVar4 - pfVar9[1];
    fVar3 = fVar5 - fVar3;
    if (SQRT(fVar3 * fVar3 + fVar6 * fVar6) <= pfVar9[7]) {
      fVar3 = DAT_0071f408 * -0.01;
      if ((moby->oClass == 0x3f5) || (moby->oClass == 0x429)) {
        fVar3 = -fVar3;
      }
      fVar6 = (moby->transform).v1.y;
      fVar7 = (moby->transform).v1.z;
      (moby->pos).x = (moby->transform).v1.x * fVar3 + fVar5;
      (moby->pos).y = fVar6 * fVar3 + fVar4;
      (moby->pos).z = fVar7 * fVar3 + (moby->pos).z;
    }
    else {
      if (*(char *)((int)pfVar9 + 0xf) != -1) {
        sound::PlayMobySound((int)*(char *)((int)pfVar9 + 0xf),0,moby);
      }
      if (*(short *)(pfVar9 + 5) != -1) {
        *(undefined4 *)((int)&DAT_00a20828 + (int)((longlong)*(short *)(pfVar9 + 5) << 2)) = 1;
      }
      moby->state = '\x03';
    }
  }
  else if (uVar1 == '\x01') {
    if ((((pfVar9[4] != -NAN) && (MobyInstance + (int)pfVar9[4] != (MobyInstance *)0x0)) &&
        (bVar2 = MobyInstance[(int)pfVar9[4]].state, bVar2 != 0xfd && bVar2 != 0xfe)) &&
       ((ushort)bVar2 != *(ushort *)((int)pfVar9 + 0x16))) {
      return;
    }
    if (*(char *)((int)pfVar9 + 0xe) != -1) {
      sound::PlayMobySound((int)*(char *)((int)pfVar9 + 0xe),0,moby);
    }
    moby->state = '\x02';
  }
  else if (uVar1 == '\0') {
    *pfVar9 = (moby->pos).x;
    pfVar9[1] = (moby->pos).y;
    fVar3 = (moby->pos).z;
    *(undefined2 *)(pfVar9 + 3) = 0xffff;
    pfVar9[2] = fVar3;
    if (*(short *)(pfVar9 + 5) != -1) {
      *(undefined4 *)((int)&DAT_00a20828 + (int)((longlong)*(short *)(pfVar9 + 5) << 2)) = 0;
    }
    moby->state = '\x01';
  }
  return;
}



//==== 00187a54  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1282_00187a54(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1282_00187a54(void)

{
  DAT_0073bab8 = 0x10000;
  return;
}



//==== 00187a68  ns=mobyupdate_helpers  size=0xf8
// sig: undefined M1282_00187a68(void)
// callers(1): 00187b68 mobyupdate_unsorted::UpdateMoby_{1015_1282}
// callees(2): 005010c0 fastfunc::FastNormalizeRMtx4; 00502a64 fastfunc::FastVecSub

undefined8
mobyupdate_helpers::M1282_00187a68
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_40;
  float local_3c;
  float local_30;
  float local_2c;
  float local_20;
  float local_1c;
  
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  fastfunc::FastNormalizeRMtx4(&local_50,param_1 + 0xc0);
  fastfunc::FastVecSub(&local_60,&stack0x00000040,param_1 + 0x10);
  if ((DAT_0073bae0 <=
       ABS(local_20 * local_54 + local_30 * local_58 + local_50 * local_60 + local_40 * local_5c))
     || (DAT_0073badc <=
         ABS(local_1c * local_54 + local_2c * local_58 + local_4c * local_60 + local_3c * local_5c))
     ) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



//==== 00187b68  ns=mobyupdate_unsorted  size=0x27c
// sig: undefined UpdateMoby_{1015_1282}(MobyInstance * moby)
// callers(0): 
// callees(5): 000efb38 mobyfunc::DeleteMoby; 0010466c mobyutil::MB_GetNextMobyInGroup; 00104800 mobyutil::MB_GetFirstMobyInGroup; 00187a68 mobyupdate_helpers::M1282_00187a68; 005cd098 libc::printf
// strings: 006541bc: 'Moby Class %d Instance %d has no pVars!  May be in the art file.\n\tMobyDeleted\n'

/* Moby 1015
   Moby 1282 */

void mobyupdate_unsorted::UpdateMoby__1015_1282_(MobyInstance *moby)

{
  u8 uVar1;
  f32 *pfVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  MobyInstance *local_10 [2];
  
  pfVar2 = (f32 *)moby->pVar;
  if (pfVar2 == (f32 *)0x0) {
    libc::printf("Moby Class %d Instance %d has no pVars!  May be in the art file.\n\tMobyDeleted\n"
                 ,moby->oClass,moby->uid);
    mobyfunc::DeleteMoby(moby);
  }
  else {
    uVar1 = moby->state;
    if (uVar1 != '\x04') {
      if (uVar1 == '\x03') {
        fVar3 = (moby->pos).z + 4.0 / (animationSpeed * 20.0);
        (moby->pos).z = fVar3;
        if (pfVar2[2] + 4.0 <= fVar3) {
          (moby->pos).z = pfVar2[2] + 4.0;
          moby->state = '\x04';
          if (pfVar2[5] != -NAN) {
            (&MiscLevelFlags.field76_0x4c)[(int)pfVar2[5]] = 1;
          }
        }
      }
      else if (uVar1 != '\x02') {
        if (uVar1 == '\x01') {
          fVar3 = (moby->pos).z - 4.0 / (animationSpeed * 20.0);
          (moby->pos).z = fVar3;
          if (fVar3 <= pfVar2[2]) {
            (moby->pos).z = pfVar2[2];
            moby->state = '\x02';
          }
          if (pfVar2[4] != -NAN) {
            iVar6 = mobyutil::MB_GetFirstMobyInGroup(local_10,(int)pfVar2[4],'\0','\0');
            while (iVar6 != 0) {
              uVar4._0_4_ = (local_10[0]->pos).x;
              uVar4._4_4_ = (local_10[0]->pos).y;
              uVar5._0_4_ = (local_10[0]->pos).z;
              uVar5._4_4_ = (local_10[0]->pos).w;
              iVar6 = mobyupdate_helpers::M1282_00187a68(moby,local_10[0],uVar4,uVar5);
              if (iVar6 != 0) goto LAB_00187d5c;
              iVar6 = mobyutil::MB_GetNextMobyInGroup(local_10,local_10[0],'\0','\0');
            }
          }
          iVar6 = mobyupdate_helpers::M1282_00187a68
                            (moby,&GameCamera,CONCAT44(GameCamera.posX,GameCamera.posY),
                             CONCAT44(GameCamera.posZ,GameCamera.field8_0x14c));
          if ((iVar6 != 0) ||
             (iVar6 = mobyupdate_helpers::M1282_00187a68
                                (moby,&hero::g_heroMtx,CONCAT44(g_heroPosition.x,g_heroPosition.y),
                                 CONCAT44(g_heroPosition.z,g_heroPosition.w)), iVar6 != 0)) {
LAB_00187d5c:
            moby->state = '\x03';
          }
        }
        else if (uVar1 == '\0') {
          *pfVar2 = (moby->pos).x;
          pfVar2[1] = (moby->pos).y;
          pfVar2[2] = (moby->pos).z;
          pfVar2[3] = (moby->pos).w;
          moby->state = '\x02';
        }
      }
    }
  }
  return;
}



//==== 00187de4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1282_00187de4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1282_00187de4(void)

{
  DAT_0073bb30 = 0x10000;
  return;
}



//==== 00187e00  ns=Global  size=0x534
// sig: undefined FUN_00187e00(void)
// callers(6): 001cf4f0 mobyupdate_unsorted::UpdateMoby_111; 00206cd8 mobyupdate_unsorted::UpdateMoby_1214; 00209508 mobyupdate_unsorted::UpdateMoby_1215; 0021b8c0 mobyupdate_unsorted::UpdateMoby_1241; 002476e8 mobyupdate_unsorted::UpdateMoby_1319; 002c3118 mobyupdate_unsorted::UpdateMoby_1843
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 00502758 fastfunc::FastDoubleToInt

MobyInstance *
FUN_00187e00(double param_1,double param_2,double param_3,float param_4,float *param_5,f32 *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  ulonglong *puVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  ulonglong uVar10;
  MobyInstance *pMVar13;
  short sVar15;
  longlong lVar11;
  longlong lVar12;
  float fVar14;
  longlong lVar16;
  ulonglong uVar17;
  float *pfVar19;
  longlong lVar18;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0x100;
  puVar6 = (ulonglong *)lVar12;
  *puVar6 = uVar10;
  puVar6[0x22] = in_LR;
  puVar6[0x1d] = in_f29;
  puVar6[0x1e] = in_f30;
  puVar6[0x1f] = in_f31;
  puVar6[0x1c] = unaff_r31;
  puVar6[0x1a] = unaff_r29;
  puVar6[0x1b] = unaff_r30;
  puVar6[0x19] = unaff_r28;
  puVar6[0x18] = unaff_r27;
  pMVar13 = mobyfunc::CreateMoby(0x3f9);
  if (pMVar13 != (MobyInstance *)0x0) {
    pfVar4 = (float *)pMVar13->pVar;
    pMVar13->collision = (ushort *)0x0;
    pfVar4[7] = param_4;
    pMVar13->updateDistance = -1;
    sVar15 = fastfunc::FastDoubleToInt(param_1);
    pMVar13->drawDistance = sVar15;
    pMVar13->enabled = '\x01';
    fVar9 = 0.0;
    (pMVar13->rotation).x = 0.0;
    fVar14 = param_5[2];
    fVar3 = ABS(param_5[2]);
    fVar5 = SQRT(*param_5 * *param_5 + param_5[1] * param_5[1]);
    fVar2 = ABS(fVar5);
    *(float *)((int)puVar6 + 0x74) = fVar5;
    *(float *)(puVar6 + 0xf) = fVar2 - fVar3;
    uVar17 = (ulonglong)(*(uint *)((int)puVar6 + 0x74) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0xf) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar14 >> 0x1d) & 4;
    fVar14 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
    fVar5 = ABS(*(float *)((int)puVar6 + 0x74));
    if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
      fVar5 = fVar3;
    }
    fVar1 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
      fVar3 = fVar2;
    }
    fVar2 = fVar9;
    if (0.0 < fVar5) {
      lVar11 = uVar10 - 0xf0;
      lVar18 = uVar10 - 0x54;
      lVar16 = uVar10 - 100;
      lVar20 = 2;
      fVar5 = (fVar3 - fVar5) / (fVar3 + fVar5);
      fVar3 = fVar5 * fVar5;
      *(float *)(puVar6 + 0x15) = fVar5;
      *(float *)(puVar6 + 0x14) = fVar5;
      *(float *)((int)puVar6 + 0xa4) = fVar5;
      *(float *)((int)puVar6 + 0x9c) = fVar5;
      fVar5 = fVar3 * fVar3;
      *(float *)(puVar6 + 0x14) = *(float *)(puVar6 + 0x14) * fVar3;
      *(float *)((int)puVar6 + 0xa4) = *(float *)((int)puVar6 + 0xa4) * fVar5;
      *(float *)(puVar6 + 0x15) = *(float *)(puVar6 + 0x15) * fVar5 * fVar3;
      do {
        *(float *)((int)lVar11 + 0x9c) = *(float *)((int)lVar11 + 0x8c) * fVar5 * fVar5;
        iVar7 = (int)lVar16;
        lVar16 = lVar16 + 8;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar7 + 4) * fVar5 * fVar5;
        lVar18 = lVar18 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar20 = 4;
      lVar18 = uVar10 - 100;
      pfVar19 = (float *)&DAT_007358e0;
      lVar11 = lVar12;
      lVar16 = lVar18;
      do {
        fVar5 = *pfVar19;
        fVar3 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar11 + 0x9c) = *(float *)((int)lVar11 + 0x9c) * fVar5;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar16 = 2;
      lVar11 = lVar12;
      fVar5 = fVar9;
      do {
        iVar7 = (int)lVar11;
        iVar8 = (int)lVar18;
        lVar11 = lVar11 + 0x10;
        lVar18 = lVar18 + 0x10;
        fVar5 = fVar5 + *(float *)(iVar7 + 0x9c) + *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                *(float *)(iVar8 + 0xc);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      fVar2 = (fVar5 + 0.7853982) * fVar14 + fVar1;
    }
    (pMVar13->rotation).y = -fVar2;
    fVar14 = *param_5;
    fVar5 = param_5[1];
    fVar2 = ABS(*param_5);
    fVar3 = ABS(param_5[1]);
    *(float *)(puVar6 + 0xe) = fVar2 - fVar3;
    uVar17 = (ulonglong)((uint)fVar14 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1e) & 2 | (ulonglong)((uint)fVar5 >> 0x1d) & 4
    ;
    fVar14 = fVar2;
    if (*(float *)(puVar6 + 0xe) - 0.0 < 0.0) {
      fVar14 = fVar3;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
    if (*(float *)(puVar6 + 0xe) - 0.0 < 0.0) {
      fVar3 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    if (0.0 < fVar14) {
      lVar11 = uVar10 - 0xf0;
      lVar16 = uVar10 - 0x84;
      lVar18 = uVar10 - 0x74;
      lVar20 = 2;
      fVar14 = (fVar3 - fVar14) / (fVar3 + fVar14);
      fVar3 = fVar14 * fVar14;
      *(float *)(puVar6 + 0x11) = fVar14;
      *(float *)(puVar6 + 0x10) = fVar14;
      *(float *)((int)puVar6 + 0x84) = fVar14;
      *(float *)((int)puVar6 + 0x7c) = fVar14;
      fVar14 = fVar3 * fVar3;
      *(float *)(puVar6 + 0x10) = *(float *)(puVar6 + 0x10) * fVar3;
      *(float *)((int)puVar6 + 0x84) = *(float *)((int)puVar6 + 0x84) * fVar14;
      *(float *)(puVar6 + 0x11) = *(float *)(puVar6 + 0x11) * fVar14 * fVar3;
      do {
        *(float *)((int)lVar11 + 0x7c) = *(float *)((int)lVar11 + 0x6c) * fVar14 * fVar14;
        iVar7 = (int)lVar16;
        lVar11 = lVar11 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar7 + 4) * fVar14 * fVar14;
        lVar18 = lVar18 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar20 = 4;
      lVar18 = uVar10 - 0x84;
      pfVar19 = (float *)&DAT_007358e0;
      lVar11 = lVar12;
      lVar16 = lVar18;
      do {
        fVar14 = *pfVar19;
        fVar3 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar11 + 0x7c) = *(float *)((int)lVar11 + 0x7c) * fVar14;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar11 = 2;
      do {
        iVar7 = (int)lVar12;
        lVar12 = lVar12 + 0x10;
        iVar8 = (int)lVar18;
        lVar18 = lVar18 + 0x10;
        fVar9 = fVar9 + *(float *)(iVar7 + 0x7c) + *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                *(float *)(iVar8 + 0xc);
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      fVar9 = (fVar9 + 0.7853982) * fVar5 + fVar2;
    }
    (pMVar13->rotation).z = fVar9;
    pfVar4[4] = 1.0;
    if (param_2 <= 0.0) {
      *pfVar4 = *param_5;
      pfVar4[1] = param_5[1];
      pfVar4[2] = param_5[2];
      pfVar4[3] = param_5[3];
      param_2 = (double)SQRT(param_5[2] * param_5[2] + *param_5 * *param_5 + param_5[1] * param_5[1]
                            );
    }
    else {
      fVar14 = *param_5;
      dVar21 = (double)SQRT(param_5[2] * param_5[2] + fVar14 * fVar14 + param_5[1] * param_5[1]);
      if (dVar21 == 0.0) {
        *pfVar4 = *param_5;
        pfVar4[1] = param_5[1];
        pfVar4[2] = param_5[2];
        fVar14 = param_5[3];
        pfVar4[2] = 0.0;
        pfVar4[1] = 0.0;
        *pfVar4 = 0.0;
      }
      else {
        fVar5 = (float)(param_2 / dVar21);
        *pfVar4 = fVar14 * fVar5;
        pfVar4[1] = param_5[1] * fVar5;
        pfVar4[2] = param_5[2] * fVar5;
        fVar14 = param_5[3];
      }
      pfVar4[3] = fVar14;
    }
    (pMVar13->pos).x = *param_6;
    (pMVar13->pos).y = param_6[1];
    (pMVar13->pos).z = param_6[2];
    (pMVar13->pos).w = param_6[3];
    fVar14 = (float)fastfunc::FastDoubleToInt((double)(float)(param_1 / param_2));
    pfVar4[5] = fVar14;
    pfVar4[8] = (float)param_3;
    pfVar4[6] = (float)((int)fVar14 + -0xd);
    pMVar13->modeBits = DRAW_TRANSPARENT_WEIRD;
    mobyfunc::UpdateMobyTransform(pMVar13);
  }
  return pMVar13;
}



//==== 00188368  ns=mobyupdate_unsorted  size=0x4ec
// sig: undefined UpdateMoby_1017(MobyInstance * moby)
// callers(0): 
// callees(10): 00057820 collproc::CollLine; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 000fea60 mobyutil::MB_randSphere; 0010581c mobyutil::SetCollDamIn; 00128248 partupd::SpawnPart_27; 004fff60 fastfunc::FastDecTimerS32; 00500608 fastfunc::FastVecNormalize; 005027bc fastfunc::FastLerpColor

/* Moby 1017 */

void mobyupdate_unsorted::UpdateMoby_1017(MobyInstance *moby)

{
  float fVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined4 local_d0 [4];
  undefined1 auStack_c0 [64];
  
  uVar4 = DAT_0073bb58;
  uVar3 = DAT_0073bb54;
  if ((moby != (MobyInstance *)0x0) && (pfVar2 = (float *)moby->pVar, pfVar2 != (float *)0x0)) {
    uVar8 = 0;
    dVar9 = 1.0;
    mobyutil::MB_randRangeFloat(0.0,1.0);
    uVar5 = fastfunc::FastLerpColor(uVar3,uVar4);
    mobyutil::MB_randSphere(uVar8,0x3fb99999a0000000,local_100);
    partupd::SpawnPart_27
              ((double)(longlong)DAT_0073bb60,local_100,local_f0,uVar5,
               (int)(animationSpeed * (float)((double)(longlong)DAT_0073bb5c + 0.5)));
    (moby->pos).x = (moby->pos).x + *pfVar2;
    (moby->pos).y = (moby->pos).y + pfVar2[1];
    (moby->pos).z = (moby->pos).z + pfVar2[2];
    mobyutil::SetCollDamIn((double)pfVar2[8],auStack_c0,(longlong)(int)moby,0x10000);
    lVar7 = (longlong)(int)moby + 0x10;
    iVar6 = collproc::CollLine(local_110,lVar7,0,pfVar2[7],auStack_c0);
    if (iVar6 == 0) {
      iVar6 = fastfunc::FastDecTimerS32(pfVar2 + 6);
      if ((iVar6 != 0) && (fVar1 = pfVar2[4], pfVar2[4] = fVar1 * 0.74, fVar1 * 0.74 < 0.02)) {
        mobyfunc::DeleteMoby(moby);
      }
    }
    else {
      iVar6 = 0;
      dVar10 = -1.0;
      dVar11 = 5.0;
      dVar12 = 9.0;
      dVar13 = 10.5;
      dVar14 = 15.5;
      uVar5 = 0x40f5f90000000000;
      do {
        mobyutil::MB_randRangeFloat((float)dVar10,(float)dVar9);
        mobyutil::MB_randRangeFloat((float)dVar10,(float)dVar9);
        mobyutil::MB_randRangeFloat((float)dVar10,(float)dVar9);
        fastfunc::FastVecNormalize(local_d0,pfVar2,0xa10980);
        mobyutil::MB_randRangeFloat
                  ((float)((double)mobyutil::g_FrameTime * dVar11),
                   (float)((double)mobyutil::g_FrameTime * dVar12));
        uVar8 = mobyutil::MB_randRange
                          ((int)((double)animationSpeed * dVar13),
                           (int)((double)animationSpeed * dVar14));
        partupd::SpawnPart_27(uVar5,lVar7,local_e0,0x7f2f4f6f,uVar8);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 5);
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 00188858  ns=mobyupdate_helpers  size=0x2c
// sig: undefined M1018_00188858(void)
// callers(0): 
// callees(1): 0017e558 water::SubmitZone

void mobyupdate_helpers::M1018_00188858(void)

{
  water::SubmitZone((OceanPlane *)&DAT_0073f7a0);
  return;
}



//==== 00188888  ns=mobyupdate_unsorted  size=0xb4
// sig: undefined UpdateMoby_1018(MobyInstance * moby)
// callers(0): 
// callees(3): 0006d760 draw::RegisterOceanUpdate; 00110b70 mobyutil::MB_IsPntInCuboid; 0017e368 water::OceanPlane_SetDefaultDepth

/* Moby 1018 */

void mobyupdate_unsorted::UpdateMoby_1018(MobyInstance *moby)

{
  int iVar1;
  
  if (moby->state == 0) {
    water::OceanPlane_SetDefaultDepth(0x3fe5555560000000,(OceanPlane *)&DAT_0073f7a0);
    moby->state = '\x01';
    moby->updateDistance = -1;
  }
  else {
                    /* WARNING: Load size is inaccurate */
    if ((moby->state < 2) &&
       (iVar1 = mobyutil::MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)*moby->pVar),
       iVar1 == 0)) {
      draw::RegisterOceanUpdate(&PTR_M1018_00188858_007083e8,moby);
    }
  }
  return;
}



//==== 0018893c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1021_0018893c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1021_0018893c(void)

{
  DAT_0073f82c = 0x10000;
  return;
}



//==== 00188968  ns=mobyupdate_unsorted  size=0x64c
// sig: undefined UpdateMoby_1021(MobyInstance * moby)
// callers(0): 
// callees(6): 000efa28 mobyfunc::CreateMoby; 0010a2e0 mobyutil::OrganicDeltAng; 0015d12c sound::PlayMobySound; 00500b64 fastfunc::FastEulerToMtx; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

/* Moby 1021 */

void mobyupdate_unsorted::UpdateMoby_1021(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  float *pfVar8;
  MobyInstance *pMVar10;
  ulonglong uVar9;
  int iVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  
  bVar1 = moby->state;
  pfVar14 = (float *)moby->pVar;
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      pfVar14[4] = (moby->rotation).x;
      *pfVar14 = (moby->pos).x;
      iVar11 = 0;
      pfVar14[1] = (moby->pos).y;
      iVar12 = 0;
      pfVar14[2] = (moby->pos).z;
      pfVar14[3] = (moby->pos).w;
      moby->state = '\x02';
      dVar17 = 0.01745329238474369;
      do {
        pMVar10 = mobyfunc::CreateMoby(CIRCULAR_DOOR_PART);
        pfVar14[9] = (float)pMVar10;
        iVar12 = iVar12 + 0x2d;
        pMVar10->updateDistance = '@';
        *(undefined2 *)((int)pfVar14[9] + 0x32) = 0x40;
        *(undefined1 *)((int)pfVar14[9] + 0x31) = 1;
        *(undefined8 *)((int)pfVar14[9] + 0x38) = *(undefined8 *)&moby->color;
        *(MobyModeBit *)((int)pfVar14[9] + 0x34) = moby->modeBits;
        fVar6 = pfVar14[9];
        *(f32 *)((int)fVar6 + 0x10) = (moby->pos).x;
        *(f32 *)((int)fVar6 + 0x14) = (moby->pos).y;
        *(f32 *)((int)fVar6 + 0x18) = (moby->pos).z;
        *(f32 *)((int)fVar6 + 0x1c) = (moby->pos).w;
        fVar6 = pfVar14[9];
        *(f32 *)((int)fVar6 + 0x40) = (moby->rotation).x;
        *(f32 *)((int)fVar6 + 0x44) = (moby->rotation).y;
        *(f32 *)((int)fVar6 + 0x48) = (moby->rotation).z;
        *(f32 *)((int)fVar6 + 0x4c) = (moby->rotation).w;
        dVar16 = (double)fastfunc::FastWrapRot
                                   (*(float *)((int)pfVar14[9] + 0x40),
                                    (float)((double)(longlong)iVar12 * dVar17));
        *(float *)((int)pfVar14[9] + 0x40) = (float)dVar16;
        *(undefined1 *)((int)pfVar14[9] + 0x20) = 1;
        fastfunc::FastEulerToMtx
                  ((ulonglong)(uint)pfVar14[9] + 0xc0,(ulonglong)(uint)pfVar14[9] + 0x40);
        iVar11 = iVar11 + 1;
        pfVar14 = pfVar14 + 1;
      } while (iVar11 < 7);
      return;
    }
    if (bVar1 < 2) {
      pfVar14[4] = (moby->rotation).x;
      *pfVar14 = (moby->pos).x;
      pfVar14[1] = (moby->pos).y;
      pfVar14[2] = (moby->pos).z;
      pfVar14[3] = (moby->pos).w;
      fVar6 = (moby->transform).v2.y;
      fVar2 = (moby->transform).v2.x;
      fVar3 = (moby->transform).v2.z;
      moby->state = '\x03';
      fVar4 = 0.0;
      fVar5 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar6 * fVar6);
      if (fVar5 == 0.0) {
        fVar5 = (moby->transform).v2.w;
        fVar2 = fVar4;
        fVar6 = fVar4;
      }
      else {
        fVar4 = DAT_0073f870 / fVar5;
        fVar5 = (moby->transform).v2.w;
        fVar2 = fVar2 * fVar4;
        fVar6 = fVar6 * fVar4;
        fVar4 = fVar3 * fVar4;
      }
      (moby->pos).x = fVar2 + *pfVar14;
      (moby->pos).y = fVar6 + pfVar14[1];
      fVar6 = pfVar14[2];
      (moby->pos).w = fVar5;
      (moby->pos).z = fVar4 + fVar6;
      return;
    }
    if (moby->setByGroup == '\0') {
      fVar6 = pfVar14[7];
      if ((int)fVar6 < 0) {
        fVar6 = (moby->pos).y - g_heroPosition.y;
        fVar2 = (moby->pos).x - g_heroPosition.x;
        if ((6.0 <= SQRT(fVar2 * fVar2 + fVar6 * fVar6)) || (DAT_00e5ef88 != 0)) goto LAB_00188d68;
      }
      else if (MobyInstance[(int)fVar6].oClass == SHUTTLE_05A8) {
        fVar2 = g_heroPosition.y - MobyInstance[(int)fVar6].pos.y;
        fVar6 = g_heroPosition.x - MobyInstance[(int)fVar6].pos.x;
        if (20.0 <= SQRT(fVar6 * fVar6 + fVar2 * fVar2)) goto LAB_00188d68;
      }
      else if (MobyInstance[(int)fVar6].oClass == THRUSTER_PACK_LOCK_RED) {
        if (MobyInstance[(int)fVar6].setByGroup == '\0') goto LAB_00188d68;
      }
      else if (MobyInstance[(int)fVar6].state < 3) goto LAB_00188d68;
      uVar9 = 1;
      lVar15 = 7;
      pfVar13 = pfVar14;
      do {
        pfVar8 = pfVar13 + 9;
        pfVar13 = pfVar13 + 1;
        uVar9 = (LZCOUNT(3 - (uint)*(byte *)((int)*pfVar8 + 0x20)) << 0x3a) >> 0x3f & uVar9;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      if ((int)uVar9 != 0) {
        sound::PlayMobySound(0,0,moby);
        iVar11 = 0;
        moby->state = '\x04';
        pfVar14[6] = 0.0;
        pfVar14[5] = 0.0;
        pfVar13 = pfVar14;
        do {
          pfVar8 = pfVar13 + 9;
          iVar11 = iVar11 + 1;
          pfVar13 = pfVar13 + 1;
          *(undefined1 *)((int)*pfVar8 + 0x20) = 5;
        } while (iVar11 < 7);
      }
    }
  }
  else {
    if (5 < bVar1) {
      if (bVar1 < 8) {
        return;
      }
      if (9 < bVar1) {
        return;
      }
      mobyutil::OrganicDeltAng
                (0.0,DAT_0073f864 * 0.017453292 * DAT_0071f418,
                 DAT_0073f868 * 0.017453292 * DAT_0071f418,
                 DAT_0073f86c * 0.017453292 * mobyutil::g_FrameTime,pfVar14 + 5,0x720000,pfVar14 + 8
                );
      dVar17 = (double)fastfunc::FastDiffRots((double)pfVar14[4],(double)pfVar14[5]);
      (moby->rotation).x = (float)dVar17;
      if (0 < (int)pfVar14[5]) {
        return;
      }
      moby->state = (char)((LZCOUNT(8 - (uint)moby->state) << 0x3a) >> 0x3f) + '\x03';
      return;
    }
    if (3 < bVar1) {
      mobyutil::OrganicDeltAng
                (1.0471976,DAT_0073f864 * 0.017453292 * DAT_0071f418,
                 DAT_0073f868 * 0.017453292 * DAT_0071f418,
                 DAT_0073f86c * 0.017453292 * mobyutil::g_FrameTime,pfVar14 + 5,0x720000,pfVar14 + 8
                );
      dVar17 = (double)fastfunc::FastDiffRots((double)pfVar14[4],(double)pfVar14[5]);
      (moby->rotation).x = (float)dVar17;
      uVar7 = (int)pfVar14[5] >> 0x1f;
      if ((int)((uVar7 >> 1 ^ (uint)pfVar14[5]) - uVar7) < 0x3f860a92) {
        return;
      }
      moby->modeBits = moby->modeBits | DISABLED;
      moby->enabled = '\0';
      moby->state = (char)((LZCOUNT(4 - (uint)moby->state) << 0x3a) >> 0x3f) + '\a';
      return;
    }
  }
LAB_00188d68:
  fVar6 = (moby->transform).v2.y;
  fVar2 = (moby->transform).v2.x;
  fVar3 = (moby->transform).v2.z;
  fVar4 = 0.0;
  fVar5 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar6 * fVar6);
  if (fVar5 == 0.0) {
    fVar5 = (moby->transform).v2.w;
    fVar2 = fVar4;
    fVar6 = fVar4;
  }
  else {
    fVar4 = DAT_0073f870 / fVar5;
    fVar5 = (moby->transform).v2.w;
    fVar2 = fVar2 * fVar4;
    fVar6 = fVar6 * fVar4;
    fVar4 = fVar3 * fVar4;
  }
  (moby->pos).x = fVar2 + *pfVar14;
  (moby->pos).y = fVar6 + pfVar14[1];
  fVar6 = pfVar14[2];
  (moby->pos).w = fVar5;
  (moby->pos).z = fVar4 + fVar6;
  return;
}



//==== 00188fb4  ns=Global  size=0x8c
// sig: undefined FUN_00188fb4(void)
// callers(3): 001a5f50 mobyupdate_unsorted::UpdateMoby_1051; 001ac298 mobyupdate_unsorted::UpdateMoby_1061; 001be558 mobyupdate_unsorted::UpdateMoby_1105
// callees(1): 0015d12c sound::PlayMobySound

void FUN_00188fb4(MobyInstance *param_1)

{
  int *piVar1;
  void *pvVar2;
  longlong lVar3;
  
  pvVar2 = param_1->pVar;
  param_1->setByGroup = '\x01';
  if (param_1->state == '\x02') {
    sound::PlayMobySound(0,0,param_1);
    param_1->state = '\x04';
    lVar3 = 7;
    *(undefined4 *)((int)pvVar2 + 0x18) = 0;
    *(undefined4 *)((int)pvVar2 + 0x14) = 0;
    do {
      piVar1 = (int *)((int)pvVar2 + 0x24);
      pvVar2 = (void *)((int)pvVar2 + 4);
      *(undefined1 *)(*piVar1 + 0x20) = 5;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



//==== 00189040  ns=Global  size=0xb8
// sig: undefined FUN_00189040(void)
// callers(3): 001a5f50 mobyupdate_unsorted::UpdateMoby_1051; 001ac298 mobyupdate_unsorted::UpdateMoby_1061; 001be558 mobyupdate_unsorted::UpdateMoby_1105
// callees(1): 0015d12c sound::PlayMobySound

void FUN_00189040(MobyInstance *param_1)

{
  MobyModeBit MVar1;
  int *piVar2;
  void *pvVar3;
  longlong lVar4;
  
  pvVar3 = param_1->pVar;
  param_1->setByGroup = '\x01';
  if (param_1->state == '\x06') {
    sound::PlayMobySound(0,0,param_1);
    MVar1 = param_1->modeBits;
    param_1->enabled = '\x01';
    param_1->state = '\b';
    *(undefined4 *)((int)pvVar3 + 0x18) = 0;
    lVar4 = 7;
    param_1->modeBits =
         MVar1 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                  DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                  HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
    do {
      *(undefined1 *)(*(int *)((int)pvVar3 + 0x24) + 0x20) = 9;
      *(ushort *)(*(int *)((int)pvVar3 + 0x24) + 0x34) =
           *(ushort *)(*(int *)((int)pvVar3 + 0x24) + 0x34) & 0xfffe;
      piVar2 = (int *)((int)pvVar3 + 0x24);
      pvVar3 = (void *)((int)pvVar3 + 4);
      *(undefined1 *)(*piVar2 + 0x31) = 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



//==== 00189100  ns=Global  size=0x118
// sig: undefined FUN_00189100(void)
// callers(1): 001ac298 mobyupdate_unsorted::UpdateMoby_1061
// callees(2): 000f31a8 mobyfunc::UpdateMobyTransform; 005025e0 fastfunc::FastDiffRots

void FUN_00189100(MobyInstance *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  double dVar4;
  undefined8 uVar5;
  
  pvVar3 = param_1->pVar;
  param_1->setByGroup = '\x01';
  if (param_1->state == '\x06') {
    param_1->state = '\x02';
    param_1->enabled = '\x01';
    param_1->modeBits =
         param_1->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
    uVar5 = 0;
    *(undefined4 *)((int)pvVar3 + 0x14) = 0;
    dVar4 = (double)fastfunc::FastDiffRots((double)*(float *)((int)pvVar3 + 0x10),0);
    (param_1->rotation).x = (float)dVar4;
    mobyfunc::UpdateMobyTransform(param_1);
    iVar2 = 0;
    do {
      iVar1 = *(int *)((int)pvVar3 + 0x24);
      *(undefined1 *)(iVar1 + 0x20) = 3;
      iVar1 = *(int *)(iVar1 + 0x78);
      *(ushort *)(*(int *)((int)pvVar3 + 0x24) + 0x34) =
           *(ushort *)(*(int *)((int)pvVar3 + 0x24) + 0x34) & 0xfffe;
      *(undefined1 *)(*(int *)((int)pvVar3 + 0x24) + 0x31) = 1;
      *(undefined4 *)(iVar1 + 0x14) = 0;
      dVar4 = (double)fastfunc::FastDiffRots((double)*(float *)(iVar1 + 0x10),uVar5);
      *(float *)(*(int *)((int)pvVar3 + 0x24) + 0x40) = (float)dVar4;
      mobyfunc::UpdateMobyTransform(*(MobyInstance **)((int)pvVar3 + 0x24));
      iVar2 = iVar2 + 1;
      pvVar3 = (void *)((int)pvVar3 + 4);
    } while (iVar2 < 7);
  }
  return;
}



//==== 00189218  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1022_00189218(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1022_00189218(void)

{
  DAT_0073f8c0 = 0x10000;
  return;
}



//==== 00189230  ns=mobyupdate_helpers  size=0x24
// sig: undefined M1022_00189230(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1022_00189230(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x78) + 0x18c);
  if (*piVar1 == param_1) {
    *piVar1 = 0;
  }
  return;
}



//==== 00189254  ns=mobyupdate_helpers  size=0x10
// sig: undefined M1022_00189254(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1022_00189254(int param_1)

{
  **(int **)(*(int *)(param_1 + 0x78) + 0x18c) = param_1;
  return;
}



//==== 00189264  ns=mobyupdate_helpers  size=0x24
// sig: undefined M1022_00189264(void)
// callers(0): 
// callees(0): 

bool mobyupdate_helpers::M1022_00189264(int param_1)

{
  return **(int **)(*(int *)(param_1 + 0x78) + 0x18c) == 0;
}



//==== 001892a8  ns=mobyupdate_helpers  size=0x8f0
// sig: undefined M1022_001892a8(void)
// callers(1): 00189bd8 mobyupdate_unsorted::UpdateMoby_1022
// callees(10): 000f1114 mobyfunc::GetBonePosition; 00106150 mobyutil::MB_RegisterLameShadow; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00111ba0 mobyutil::MB_getTargetInArea; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M1022_001892a8(MobyInstance *param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  MobyClass *pMVar6;
  void *pvVar7;
  uint uVar8;
  int *piVar9;
  Spline *pSVar10;
  ulonglong *puVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  longlong lVar14;
  longlong lVar15;
  float *pfVar20;
  longlong lVar19;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong unaff_r28;
  ulonglong uVar23;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f31;
  double dVar28;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x120;
  puVar11 = (ulonglong *)lVar15;
  *puVar11 = uVar13;
  puVar11[0x26] = in_LR;
  puVar11[0x23] = in_f31;
  puVar11[0x22] = unaff_r31;
  pMVar6 = param_1->pClass;
  puVar11[0x1f] = unaff_r28;
  pvVar7 = param_1->pVar;
  uVar23 = ZEXT48(pvVar7);
  cVar1 = param_1->enabled;
  fVar5 = pMVar6->gScale * DAT_0073f8e4;
  puVar11[0x21] = unaff_r30;
  puVar11[0x20] = unaff_r29;
  param_1->scale = fVar5;
  if (cVar1 != '\0') {
    mobyutil::MB_RegisterLameShadow(0.4,param_1);
  }
  if (*(int *)((int)pvVar7 + 0x194) != 0) {
    if (*(byte *)(*(int *)((int)pvVar7 + 0x194) + 0x20) < 0x80) {
      mobyfunc::GetBonePosition(param_1,0,uVar13 - 0xb0);
      mobyfunc::GetBonePosition(param_1,1,uVar13 - 0xa0);
      fVar5 = *(float *)(puVar11 + 0xe);
      iVar16 = *(int *)((int)pvVar7 + 0x194);
      *(float *)(puVar11 + 0xe) = fVar5 + *(float *)(puVar11 + 0x10);
      *(float *)((int)puVar11 + 0x74) =
           *(float *)((int)puVar11 + 0x74) + *(float *)((int)puVar11 + 0x84);
      *(float *)(puVar11 + 0xf) = *(float *)(puVar11 + 0xf) + *(float *)(puVar11 + 0x11);
      *(float *)(iVar16 + 0x10) = (fVar5 + *(float *)(puVar11 + 0x10)) * 0.5;
      *(float *)(iVar16 + 0x14) = *(float *)((int)puVar11 + 0x74) * 0.5;
      *(float *)(iVar16 + 0x18) = *(float *)(puVar11 + 0xf) * 0.5;
      *(undefined4 *)(iVar16 + 0x1c) = *(undefined4 *)((int)puVar11 + 0x7c);
    }
    else {
      *(undefined4 *)((int)pvVar7 + 0x194) = 0;
    }
  }
  dVar28 = 0.0;
  *(undefined4 *)((int)puVar11 + 0x94) = 0;
  iVar16 = mobyutil::MB_damage(param_1,0x330000,0);
  if ((iVar16 == 0) && (*(int *)((int)pvVar7 + 0x194) != 0)) {
    iVar16 = mobyutil::MB_damage(*(int *)((int)pvVar7 + 0x194),0x330000,0);
  }
  iVar17 = mobyutil::MB_HandleDamage
                     (param_1,iVar16,uVar23 + 0x20,0,puVar11 + 0x12,(int)puVar11 + 0x94,0,4);
  if ((*(int *)(puVar11 + 0x12) != 1) && (param_1->state != '\b')) {
    fVar5 = *(float *)((int)pvVar7 + 0x20) - *(float *)((int)puVar11 + 0x94);
    *(float *)((int)pvVar7 + 0x20) = fVar5;
    if ((double)fVar5 <= dVar28) {
      iVar17 = 1;
    }
    uVar18 = fastfunc::FastDoubleToInt(0x4080000000000000);
    *(undefined4 *)((int)pvVar7 + 0x98) = 0x3f000000;
    fVar2 = DAT_0073f8e8;
    fVar5 = DAT_0071f418;
    *(undefined4 *)((int)pvVar7 + 0x90) = uVar18;
    *(undefined4 *)((int)pvVar7 + 0x84) = 0x3a03126f;
    *(undefined1 *)((int)pvVar7 + 0xad) = 0;
    *(undefined4 *)((int)pvVar7 + 0x94) = 9;
    *(float *)((int)pvVar7 + 0x80) = fVar2 * fVar5;
    fVar5 = mobyutil::g_FrameTime;
    if (iVar17 < 3) {
      if ((-1 < iVar17) && (0 < iVar17)) {
        fVar5 = DAT_0073f8e8 * DAT_0071f418;
        uVar8 = *(uint *)((int)pvVar7 + 0x94);
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)((int)pvVar7 + 0x80) = fVar5;
        fVar2 = DAT_0073f8f8;
        fVar5 = mobyutil::g_FrameTime;
        *(uint *)((int)pvVar7 + 0x94) = uVar8 | 0x20;
        *(float *)((int)pvVar7 + 0x88) = fVar2 * fVar5;
        fVar2 = DAT_0073f8f4;
        *(undefined4 *)((int)pvVar7 + 0xc0) = 0x41600000;
        *(undefined4 *)((int)pvVar7 + 0xc4) = 0x41e00000;
        *(float *)((int)pvVar7 + 0x8c) = fVar2 * fVar5;
        fVar5 = (param_1->pos).x - *(float *)(*(int *)(iVar16 + 0x20) + 0x10);
        fVar2 = (param_1->pos).y - *(float *)(*(int *)(iVar16 + 0x20) + 0x14);
        dVar25 = ABS((double)fVar5);
        dVar26 = ABS((double)fVar2);
        *(float *)(puVar11 + 0x14) = fVar5;
        *(float *)((int)puVar11 + 0xa4) = fVar2;
        *(float *)(puVar11 + 0x15) = (float)(dVar25 - dVar26);
        uVar21 = (ulonglong)(*(uint *)(puVar11 + 0x14) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar11 + 0x15) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar11 + 0xa4) >> 0x1d) & 4;
        dVar27 = ABS((double)*(float *)(puVar11 + 0x14));
        if ((double)*(float *)(puVar11 + 0x15) - dVar28 < 0.0) {
          dVar27 = dVar26;
        }
        fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
        dVar26 = ABS((double)*(float *)((int)puVar11 + 0xa4));
        if ((double)*(float *)(puVar11 + 0x15) - dVar28 < 0.0) {
          dVar26 = dVar25;
        }
        fVar2 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
        if (dVar28 < dVar27) {
          lVar14 = uVar13 - 0x110;
          lVar22 = uVar13 - 0x58;
          lVar19 = uVar13 - 0x68;
          lVar24 = 2;
          fVar3 = (float)(dVar26 - dVar27) / (float)(dVar26 + dVar27);
          fVar4 = fVar3 * fVar3;
          *(float *)((int)puVar11 + 0xc4) = fVar3;
          *(float *)((int)puVar11 + 0xbc) = fVar3;
          *(float *)(puVar11 + 0x18) = fVar3;
          *(float *)(puVar11 + 0x17) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)((int)puVar11 + 0xbc) = *(float *)((int)puVar11 + 0xbc) * fVar4;
          *(float *)(puVar11 + 0x18) = *(float *)(puVar11 + 0x18) * fVar3;
          *(float *)((int)puVar11 + 0xc4) = *(float *)((int)puVar11 + 0xc4) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar14 + 0xb8) = *(float *)((int)lVar14 + 0xa8) * fVar3 * fVar3;
            iVar17 = (int)lVar19;
            lVar19 = lVar19 + 8;
            lVar14 = lVar14 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)(iVar17 + 4) * fVar3 * fVar3;
            lVar22 = lVar22 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar24 = 4;
          lVar22 = uVar13 - 0x68;
          pfVar20 = (float *)&DAT_007358e0;
          lVar14 = lVar15;
          lVar19 = lVar22;
          do {
            fVar3 = *pfVar20;
            fVar4 = pfVar20[1];
            pfVar20 = pfVar20 + 2;
            *(float *)((int)lVar14 + 0xb8) = *(float *)((int)lVar14 + 0xb8) * fVar3;
            lVar14 = lVar14 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar4;
            lVar19 = lVar19 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar14 = 2;
          do {
            iVar17 = (int)lVar15;
            iVar12 = (int)lVar22;
            lVar15 = lVar15 + 0x10;
            lVar22 = lVar22 + 0x10;
            dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar17 + 0xb8)) +
                              *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                             *(float *)(iVar12 + 0xc));
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
          dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar5 + fVar2);
        }
        *(float *)((int)puVar11 + 0x9c) = (float)dVar28;
        uVar18 = *(undefined4 *)(iVar16 + 0x18);
        *(undefined4 *)(puVar11 + 6) = *(undefined4 *)(iVar16 + 0x10);
        *(undefined4 *)(puVar11 + 7) = uVar18;
        uVar18 = *(undefined4 *)(iVar16 + 0x1c);
        *(undefined4 *)((int)puVar11 + 0x34) = *(undefined4 *)(iVar16 + 0x14);
        *(undefined4 *)((int)puVar11 + 0x3c) = uVar18;
        mobyutil::MB_VecAtan2Angles(puVar11[6],puVar11[7],uVar13 - 0x84,uVar23 + 0x88,uVar23 + 0x8c)
        ;
        mobyutil::MB_StartKick((double)*(float *)((int)puVar11 + 0x9c),param_1,uVar23 + 0x70);
        param_1->collision = (ushort *)0x0;
        iVar16 = *(int *)((int)pvVar7 + 0x194);
        if (iVar16 != 0) {
          iVar17 = *(int *)(iVar16 + 0x78);
          *(undefined1 *)(iVar16 + 0x20) = 1;
          *(undefined4 *)(iVar17 + 0x10) = *(undefined4 *)((int)pvVar7 + 0x70);
          *(undefined4 *)(iVar17 + 0x14) = *(undefined4 *)((int)pvVar7 + 0x74);
          *(undefined4 *)(iVar17 + 0x18) = *(undefined4 *)((int)pvVar7 + 0x78);
          uVar18 = *(undefined4 *)((int)pvVar7 + 0x7c);
          *(undefined4 *)(iVar17 + 0x18) = 0;
          *(undefined4 *)(iVar17 + 0x1c) = uVar18;
          *(MobyInstance **)(iVar17 + 0x30) = g_heroMobyPtr;
          *(undefined4 *)((int)pvVar7 + 0x194) = 0;
        }
        param_1->state = '\b';
        piVar9 = *(int **)((int)param_1->pVar + 0x18c);
        if ((MobyInstance *)*piVar9 == param_1) {
          *piVar9 = 0;
        }
        *(undefined1 *)((int)pvVar7 + 0x67) = 0xf0;
      }
    }
    else if (iVar17 < 0xb) {
      if (iVar17 < 9) {
        *(float *)((int)pvVar7 + 0x88) = DAT_0073f8f0 * mobyutil::g_FrameTime;
        fVar2 = DAT_0073f8ec;
        *(undefined4 *)((int)pvVar7 + 0xc0) = 0x40400000;
        *(undefined4 *)((int)pvVar7 + 0xc4) = 0x40c00000;
        *(float *)((int)pvVar7 + 0x8c) = fVar2 * fVar5;
        fVar5 = (param_1->pos).x - *(float *)(*(int *)(iVar16 + 0x20) + 0x10);
        fVar2 = (param_1->pos).y - *(float *)(*(int *)(iVar16 + 0x20) + 0x14);
        dVar25 = ABS((double)fVar5);
        dVar26 = ABS((double)fVar2);
        *(float *)((int)puVar11 + 0xac) = fVar5;
        *(float *)(puVar11 + 0x16) = fVar2;
        *(float *)((int)puVar11 + 0xb4) = (float)(dVar25 - dVar26);
        uVar21 = (ulonglong)(*(uint *)((int)puVar11 + 0xac) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar11 + 0xb4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar11 + 0x16) >> 0x1d) & 4;
        dVar27 = ABS((double)*(float *)((int)puVar11 + 0xac));
        if ((double)*(float *)((int)puVar11 + 0xb4) - dVar28 < 0.0) {
          dVar27 = dVar26;
        }
        fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
        dVar26 = ABS((double)*(float *)(puVar11 + 0x16));
        if ((double)*(float *)((int)puVar11 + 0xb4) - dVar28 < 0.0) {
          dVar26 = dVar25;
        }
        fVar2 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
        if (dVar28 < dVar27) {
          lVar14 = uVar13 - 0x110;
          lVar19 = uVar13 - 0x48;
          lVar22 = uVar13 - 0x38;
          lVar24 = 2;
          fVar3 = (float)(dVar26 - dVar27) / (float)(dVar26 + dVar27);
          fVar4 = fVar3 * fVar3;
          *(float *)((int)puVar11 + 0xe4) = fVar3;
          *(float *)((int)puVar11 + 0xdc) = fVar3;
          *(float *)(puVar11 + 0x1c) = fVar3;
          *(float *)(puVar11 + 0x1b) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)((int)puVar11 + 0xdc) = *(float *)((int)puVar11 + 0xdc) * fVar4;
          *(float *)(puVar11 + 0x1c) = *(float *)(puVar11 + 0x1c) * fVar3;
          *(float *)((int)puVar11 + 0xe4) = *(float *)((int)puVar11 + 0xe4) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar14 + 0xd8) = *(float *)((int)lVar14 + 200) * fVar3 * fVar3;
            iVar17 = (int)lVar19;
            lVar14 = lVar14 + 8;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)(iVar17 + 4) * fVar3 * fVar3;
            lVar22 = lVar22 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar24 = 4;
          lVar22 = uVar13 - 0x48;
          pfVar20 = (float *)&DAT_007358e0;
          lVar14 = lVar15;
          lVar19 = lVar22;
          do {
            fVar3 = *pfVar20;
            fVar4 = pfVar20[1];
            pfVar20 = pfVar20 + 2;
            *(float *)((int)lVar14 + 0xd8) = *(float *)((int)lVar14 + 0xd8) * fVar3;
            lVar14 = lVar14 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar4;
            lVar19 = lVar19 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar14 = 2;
          do {
            iVar17 = (int)lVar15;
            iVar12 = (int)lVar22;
            lVar15 = lVar15 + 0x10;
            lVar22 = lVar22 + 0x10;
            dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar17 + 0xd8)) +
                              *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                             *(float *)(iVar12 + 0xc));
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
          dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar5 + fVar2);
        }
        *(float *)(puVar11 + 0x13) = (float)dVar28;
        uVar18 = *(undefined4 *)(iVar16 + 0x18);
        *(undefined4 *)(puVar11 + 6) = *(undefined4 *)(iVar16 + 0x10);
        *(undefined4 *)(puVar11 + 7) = uVar18;
        uVar18 = *(undefined4 *)(iVar16 + 0x1c);
        *(undefined4 *)((int)puVar11 + 0x34) = *(undefined4 *)(iVar16 + 0x14);
        *(undefined4 *)((int)puVar11 + 0x3c) = uVar18;
        mobyutil::MB_VecAtan2Angles(puVar11[6],puVar11[7],uVar13 - 0x88,uVar23 + 0x88,uVar23 + 0x8c)
        ;
        mobyutil::MB_StartKick((double)*(float *)(puVar11 + 0x13),param_1,uVar23 + 0x70);
        param_1->state = '\a';
        *(undefined1 *)((int)pvVar7 + 0x67) = 0x78;
      }
      else {
        *(undefined1 *)((int)pvVar7 + 0x67) = 0xfa;
      }
    }
    mobyutil::MB_UpdateLightsTransition(param_1,uVar23 + 0x60);
  }
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar23 + 0x60);
  *(undefined4 *)((int)pvVar7 + 0x184) = 0x41400000;
  pSVar10 = Splines[*(int *)((int)pvVar7 + 0x180)];
  iVar16 = mobyutil::MB_getTargetInArea
                     (0x4028000000000000,param_1,uVar23 + 0x120,pSVar10,0,0,pSVar10->points,
                      pSVar10->cnt);
  if ((iVar16 != 2) &&
     ((fVar5 = (param_1->pos).y - *(float *)((int)pvVar7 + 0x124),
      fVar2 = (param_1->pos).x - *(float *)((int)pvVar7 + 0x120),
      *(float *)((int)pvVar7 + 0x184) < SQRT(fVar2 * fVar2 + fVar5 * fVar5) ||
      (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar7 + 0x128)))))) {
    *(undefined4 *)((int)pvVar7 + 0x164) = 2;
  }
  if (*(int *)((int)pvVar7 + 0x160) == 0) {
    *(MobyInstance **)((int)pvVar7 + 0x160) = g_heroMobyPtr;
  }
  return;
}



//==== 00189bd8  ns=mobyupdate_unsorted  size=0xc34
// sig: undefined UpdateMoby_1022(MobyInstance * moby)
// callers(0): 
// callees(13): 000efb38 mobyfunc::DeleteMoby; 000fddc0 mobyutil::MB_SetAnimation; 00100ef8 mobyutil::MB_MoveAndCollide2; 00100f8c mobyutil::MB_InitDefaultParams; 0010a2e0 mobyutil::OrganicDeltAng; 0010b030 mobyutil::MB_UpdateKick; 0010e030 mobyutil::MB_genericExplosion; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00113e88 mobyutil::MB_MayaFrameTrigger; 001892a8 mobyupdate_helpers::M1022_001892a8; 00315198 FUN_00315198; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

/* Moby 1022 */

void mobyupdate_unsorted::UpdateMoby_1022(MobyInstance *moby)

{
  float fVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  void *pvVar7;
  int *piVar8;
  ulonglong *puVar9;
  int iVar10;
  float fVar11;
  int iVar12;
  float fVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  float *pfVar23;
  longlong lVar24;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar25;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  ulonglong in_f31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  
  lVar15 = (longlong)(int)moby;
  uVar14 = ZEXT48(&stack0x00000000);
  lVar20 = uVar14 - 400;
  puVar9 = (ulonglong *)lVar20;
  *puVar9 = uVar14;
  puVar9[0x34] = in_LR;
  puVar9[0x31] = in_f31;
  puVar9[0x30] = unaff_r31;
  puVar9[0x2e] = unaff_r29;
  puVar9[0x2f] = unaff_r30;
  puVar9[0x2d] = unaff_r28;
  pvVar6 = moby->pVar;
  uVar25 = ZEXT48(pvVar6);
  mobyupdate_helpers::M1022_001892a8();
  bVar2 = moby->state;
  iVar17 = *(int *)((int)pvVar6 + 0x160);
  if (bVar2 < 5) {
    if (bVar2 < 2) {
      if (bVar2 == 0) {
        *(undefined4 *)((int)pvVar6 + 0x20) = 0x3f800000;
        *(undefined2 *)((int)pvVar6 + 0x24) = 1;
        *(undefined1 *)((int)pvVar6 + 0x28) = 0;
        *(undefined4 *)((int)pvVar6 + 0x30) = 0x3e000000;
        mobyutil::MB_InitDefaultParams((float *)((int)pvVar6 + 0xd0));
        *(undefined4 *)((int)pvVar6 + 0xdc) = 0x3f000000;
        *(undefined4 *)((int)pvVar6 + 0xd8) = 0x3f000000;
        uVar16 = fastfunc::FastDoubleToInt(0x4080000000000000);
        *(undefined4 *)((int)pvVar6 + 0xd0) = uVar16;
        *(float *)((int)pvVar6 + 0xf4) = mobyutil::g_FrameTime * 4.0;
        (moby->pos).z = (moby->pos).z + 2.0;
        *(f32 *)((int)pvVar6 + 0x170) = (moby->pos).x;
        *(f32 *)((int)pvVar6 + 0x174) = (moby->pos).y;
        *(f32 *)((int)pvVar6 + 0x178) = (moby->pos).z;
        *(f32 *)((int)pvVar6 + 0x17c) = (moby->pos).w;
        moby->state = '\x01';
        if (moby->animationId != '\0') {
          puVar9[0x2b] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar15,0,0,*(undefined4 *)((int)puVar9 + 0x15c));
        }
      }
      else {
        fastfunc::FastDecTimerS32(uVar25 + 400);
        fVar4 = *(float *)(iVar17 + 0x10) - (moby->pos).x;
        fVar3 = *(float *)(iVar17 + 0x14) - (moby->pos).y;
        fVar1 = ABS(fVar4);
        fVar5 = ABS(fVar3);
        *(float *)((int)puVar9 + 0x10c) = fVar4;
        *(float *)(puVar9 + 0x22) = fVar3;
        *(float *)((int)puVar9 + 0x114) = fVar1 - fVar5;
        dVar32 = 0.0;
        uVar25 = (ulonglong)(*(uint *)((int)puVar9 + 0x10c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x114) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar9 + 0x22) >> 0x1d) & 4;
        fVar4 = ABS(*(float *)((int)puVar9 + 0x10c));
        if (*(float *)((int)puVar9 + 0x114) - 0.0 < 0.0) {
          fVar4 = fVar5;
        }
        fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
        fVar3 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
        fVar11 = ABS(*(float *)(puVar9 + 0x22));
        if (*(float *)((int)puVar9 + 0x114) - 0.0 < 0.0) {
          fVar11 = fVar1;
        }
        dVar28 = dVar32;
        if (0.0 < fVar4) {
          lVar19 = uVar14 - 0x180;
          lVar22 = uVar14 - 0x58;
          lVar24 = uVar14 - 0x48;
          lVar26 = 2;
          fVar4 = (fVar11 - fVar4) / (fVar11 + fVar4);
          fVar1 = fVar4 * fVar4;
          *(float *)((int)puVar9 + 0x144) = fVar4;
          *(float *)((int)puVar9 + 0x13c) = fVar4;
          *(float *)(puVar9 + 0x28) = fVar4;
          *(float *)(puVar9 + 0x27) = fVar4;
          fVar4 = fVar1 * fVar1;
          *(float *)((int)puVar9 + 0x13c) = *(float *)((int)puVar9 + 0x13c) * fVar1;
          *(float *)(puVar9 + 0x28) = *(float *)(puVar9 + 0x28) * fVar4;
          *(float *)((int)puVar9 + 0x144) = *(float *)((int)puVar9 + 0x144) * fVar4 * fVar1;
          do {
            *(float *)((int)lVar19 + 0x138) = *(float *)((int)lVar19 + 0x128) * fVar4 * fVar4;
            iVar17 = (int)lVar22;
            lVar19 = lVar19 + 8;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)(iVar17 + 4) * fVar4 * fVar4;
            lVar24 = lVar24 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar26 = 4;
          lVar24 = uVar14 - 0x58;
          pfVar23 = (float *)&DAT_007358e0;
          lVar19 = lVar20;
          lVar22 = lVar24;
          do {
            fVar4 = *pfVar23;
            fVar1 = pfVar23[1];
            pfVar23 = pfVar23 + 2;
            *(float *)((int)lVar19 + 0x138) = *(float *)((int)lVar19 + 0x138) * fVar4;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar1;
            lVar22 = lVar22 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar19 = 2;
          do {
            iVar17 = (int)lVar20;
            lVar20 = lVar20 + 0x10;
            iVar10 = (int)lVar24;
            lVar24 = lVar24 + 0x10;
            dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar17 + 0x138)) +
                              *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                             *(float *)(iVar10 + 0xc));
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar5 + fVar3);
        }
        mobyutil::OrganicDeltAng
                  ((float)dVar28,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                   mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                   (float *)((int)pvVar6 + 0x188));
        fVar4 = (moby->pos).y;
        fVar3 = (moby->pos).x;
        fVar1 = fVar4 - *(float *)((int)pvVar6 + 0x174);
        fVar5 = (moby->pos).z;
        fVar13 = fVar3 - *(float *)((int)pvVar6 + 0x170);
        fVar11 = fVar5 - *(float *)((int)pvVar6 + 0x178);
        if (0.5 < SQRT(fVar11 * fVar11 + fVar13 * fVar13 + fVar1 * fVar1)) {
          fVar3 = *(float *)((int)pvVar6 + 0x170) - fVar3;
          *(float *)(puVar9 + 0x18) = fVar3;
          fVar4 = *(float *)((int)pvVar6 + 0x174) - fVar4;
          *(float *)((int)puVar9 + 0xc4) = fVar4;
          fVar5 = *(float *)((int)pvVar6 + 0x178) - fVar5;
          *(float *)(puVar9 + 0x19) = fVar5;
          *(undefined4 *)((int)puVar9 + 0xcc) = *(undefined4 *)((int)pvVar6 + 0x17c);
          uVar16 = DAT_0073f900;
          dVar31 = (double)SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4);
          dVar27 = (double)DAT_0073f8fc;
          fVar1 = (float)((double)(mobyutil::g_FrameTime * 4.0) / dVar31);
          dVar28 = dVar32;
          if (dVar32 - dVar31 < 0.0) {
            dVar28 = (double)(fVar3 * fVar1);
          }
          dVar29 = dVar32;
          if (dVar32 - dVar31 < 0.0) {
            dVar29 = (double)(fVar4 * fVar1);
          }
          dVar30 = dVar32;
          if (dVar32 - dVar31 < 0.0) {
            dVar30 = (double)(fVar5 * fVar1);
          }
          if (dVar31 - dVar32 < 0.0) {
            dVar28 = (double)(fVar3 * fVar1);
          }
          if (dVar31 - dVar32 < 0.0) {
            dVar29 = (double)(fVar4 * fVar1);
          }
          if (dVar31 - dVar32 < 0.0) {
            dVar30 = (double)(fVar5 * fVar1);
          }
          *(float *)(puVar9 + 0x18) = (float)dVar28;
          *(float *)((int)puVar9 + 0xc4) = (float)dVar29;
          *(float *)(puVar9 + 0x19) = (float)dVar30;
          mobyutil::MB_MoveAndCollide2(dVar27,dVar32,lVar15,uVar14 - 0xd0,0x740000,uVar16);
        }
        if (((*(int *)((int)pvVar6 + 0x164) != 2) &&
            (pvVar7 = moby->pVar, **(int **)((int)pvVar7 + 0x18c) == 0)) &&
           (*(int *)((int)pvVar6 + 400) == 0)) {
          if (*(int *)((int)pvVar6 + 0x194) == 0) {
            *(undefined4 *)((int)puVar9 + 0xdc) = 0;
            *(undefined4 *)(puVar9 + 0x1b) = 0;
            *(undefined4 *)((int)puVar9 + 0xd4) = 0;
            *(undefined4 *)(puVar9 + 0x1a) = 0;
            iVar17 = FUN_00315198(lVar15,lVar15 + 0x10,uVar14 - 0xc0);
            *(int *)((int)pvVar6 + 0x194) = iVar17;
            *(undefined1 *)(iVar17 + 0x20) = 0x37;
            pvVar7 = moby->pVar;
          }
          **(undefined4 **)((int)pvVar7 + 0x18c) = moby;
          moby->state = '\x02';
          if (moby->animationId != '\x01') {
            puVar9[0x2b] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar15,1,0,*(undefined4 *)((int)puVar9 + 0x15c));
          }
        }
      }
    }
    else if (bVar2 < 3) {
      if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x03', moby->animationId != '\x02')) {
        puVar9[0x2b] = (longlong)(int)(animationSpeed * 5.5);
        mobyutil::MB_SetAnimation(lVar15,2,0,*(undefined4 *)((int)puVar9 + 0x15c));
      }
    }
    else if (bVar2 < 4) {
      fVar4 = *(float *)(iVar17 + 0x10) - (moby->pos).x;
      fVar3 = *(float *)(iVar17 + 0x14) - (moby->pos).y;
      fVar1 = ABS(fVar4);
      fVar5 = ABS(fVar3);
      *(float *)(puVar9 + 0x20) = fVar4;
      *(float *)((int)puVar9 + 0x104) = fVar3;
      *(float *)(puVar9 + 0x21) = fVar1 - fVar5;
      dVar32 = 0.0;
      uVar21 = (ulonglong)(*(uint *)(puVar9 + 0x20) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x21) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x104) >> 0x1d) & 4;
      fVar4 = ABS(*(float *)(puVar9 + 0x20));
      if (*(float *)(puVar9 + 0x21) - 0.0 < 0.0) {
        fVar4 = fVar5;
      }
      fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
      fVar3 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
      fVar11 = ABS(*(float *)((int)puVar9 + 0x104));
      if (*(float *)(puVar9 + 0x21) - 0.0 < 0.0) {
        fVar11 = fVar1;
      }
      dVar28 = dVar32;
      if (0.0 < fVar4) {
        lVar19 = uVar14 - 0x180;
        lVar24 = uVar14 - 0x68;
        lVar22 = uVar14 - 0x78;
        lVar26 = 2;
        fVar4 = (fVar11 - fVar4) / (fVar11 + fVar4);
        fVar1 = fVar4 * fVar4;
        *(float *)((int)puVar9 + 0x124) = fVar4;
        *(float *)((int)puVar9 + 0x11c) = fVar4;
        *(float *)(puVar9 + 0x24) = fVar4;
        *(float *)(puVar9 + 0x23) = fVar4;
        fVar4 = fVar1 * fVar1;
        *(float *)((int)puVar9 + 0x11c) = *(float *)((int)puVar9 + 0x11c) * fVar1;
        *(float *)(puVar9 + 0x24) = *(float *)(puVar9 + 0x24) * fVar4;
        *(float *)((int)puVar9 + 0x124) = *(float *)((int)puVar9 + 0x124) * fVar4 * fVar1;
        do {
          *(float *)((int)lVar19 + 0x118) = *(float *)((int)lVar19 + 0x108) * fVar4 * fVar4;
          iVar10 = (int)lVar22;
          lVar22 = lVar22 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)(iVar10 + 4) * fVar4 * fVar4;
          lVar24 = lVar24 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar26 = 4;
        lVar24 = uVar14 - 0x78;
        pfVar23 = (float *)&DAT_007358e0;
        lVar19 = lVar20;
        lVar22 = lVar24;
        do {
          fVar4 = *pfVar23;
          fVar1 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar19 + 0x118) = *(float *)((int)lVar19 + 0x118) * fVar4;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar1;
          lVar22 = lVar22 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar19 = 2;
        do {
          iVar10 = (int)lVar20;
          iVar12 = (int)lVar24;
          lVar20 = lVar20 + 0x10;
          lVar24 = lVar24 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar10 + 0x118)) +
                            *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                           *(float *)(iVar12 + 0xc));
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar5 + fVar3);
      }
      mobyutil::OrganicDeltAng
                ((float)dVar28,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                 mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x189b98,
                 (float *)((int)pvVar6 + 0x188));
      if (*(int *)((int)pvVar6 + 0x164) != 2) {
        fVar3 = *(float *)(iVar17 + 0x14) - (moby->pos).y;
        fVar5 = *(float *)(iVar17 + 0x10) - (moby->pos).x;
        fVar1 = *(float *)((int)pvVar6 + 0x178) - (moby->pos).z;
        uVar16 = *(undefined4 *)(iVar17 + 0x1c);
        *(float *)(puVar9 + 0x1c) = fVar5;
        *(float *)((int)puVar9 + 0xe4) = fVar3;
        *(float *)(puVar9 + 0x1d) = fVar1;
        *(undefined4 *)((int)puVar9 + 0xec) = uVar16;
        uVar16 = DAT_0073f900;
        dVar31 = (double)SQRT(fVar1 * fVar1 + fVar5 * fVar5 + fVar3 * fVar3);
        dVar27 = (double)DAT_0073f8fc;
        fVar4 = (float)((double)(mobyutil::g_FrameTime * 4.0) / dVar31);
        dVar28 = dVar32;
        if (dVar32 - dVar31 < 0.0) {
          dVar28 = (double)(fVar5 * fVar4);
        }
        dVar29 = dVar32;
        if (dVar32 - dVar31 < 0.0) {
          dVar29 = (double)(fVar3 * fVar4);
        }
        dVar30 = dVar32;
        if (dVar32 - dVar31 < 0.0) {
          dVar30 = (double)(fVar1 * fVar4);
        }
        if (dVar31 - dVar32 < 0.0) {
          dVar28 = (double)(fVar5 * fVar4);
        }
        if (dVar31 - dVar32 < 0.0) {
          dVar29 = (double)(fVar3 * fVar4);
        }
        if (dVar31 - dVar32 < 0.0) {
          dVar30 = (double)(fVar1 * fVar4);
        }
        *(float *)(puVar9 + 0x1c) = (float)dVar28;
        *(float *)((int)puVar9 + 0xe4) = (float)dVar29;
        *(float *)(puVar9 + 0x1d) = (float)dVar30;
        mobyutil::MB_MoveAndCollide2(dVar27,dVar32,lVar15,uVar14 - 0xb0,0x740000,uVar16);
      }
      fVar4 = (moby->pos).y - *(float *)(iVar17 + 0x14);
      fVar3 = (moby->pos).x - *(float *)(iVar17 + 0x10);
      if (SQRT(fVar3 * fVar3 + fVar4 * fVar4) < 0.5) {
        auVar33 = ZEXT416(0xffffffff);
        auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
        moby->state = '\x04';
        auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
        auVar33 = loadVectorLeftIndexed(0x28,0x189b98);
        auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar33 = vectorMultiplyAddFloatingPoint
                            (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,
                             auVar34);
        auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
        auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar16 = storeVectorElementWordIndexed
                           (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,400,uVar25
                           );
        *(undefined4 *)((int)pvVar6 + 400U & 0xfffffffc) = uVar16;
      }
    }
    else {
      iVar17 = fastfunc::FastDecTimerS32(uVar25 + 400);
      if ((iVar17 != 0) && (moby->state = '\x05', moby->animationId != '\x03')) {
        puVar9[0x2b] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar15,3,0,*(undefined4 *)((int)puVar9 + 0x15c));
      }
    }
  }
  else if (bVar2 < 8) {
    if (bVar2 < 6) {
      if ((moby->field43_0x70 & 2U) == 0) {
        iVar17 = mobyutil::MB_MayaFrameTrigger(16.0,moby);
        if ((iVar17 != 0) && (*(int *)((int)pvVar6 + 0x194) != 0)) {
          *(undefined1 *)(*(int *)((int)pvVar6 + 0x194) + 0x20) = 1;
          *(undefined4 *)((int)pvVar6 + 0x194) = 0;
        }
      }
      else {
        moby->state = '\x01';
        if (moby->animationId != '\0') {
          puVar9[0x2b] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar15,0,0,*(undefined4 *)((int)puVar9 + 0x15c));
        }
        piVar8 = *(int **)((int)moby->pVar + 0x18c);
        if ((MobyInstance *)*piVar8 == moby) {
          *piVar8 = 0;
        }
        auVar33 = ZEXT416(0xffffffff);
        auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
        auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
        auVar33 = loadVectorLeftIndexed(0x28,0x189b98);
        auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar33 = vectorMultiplyAddFloatingPoint
                            (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,
                             auVar34);
        auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
        auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar16 = storeVectorElementWordIndexed
                           (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,400,uVar25
                           );
        *(undefined4 *)((int)pvVar6 + 400U & 0xfffffffc) = uVar16;
      }
    }
    else if (6 < bVar2) {
      uVar18 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x70));
      if ((uVar18 & 0x41) == 0) {
        if ((uVar18 & 0x120) != 0) {
          mobyfunc::DeleteMoby(moby);
        }
      }
      else {
        moby->state = '\x01';
        if (moby->animationId != '\0') {
          puVar9[0x2b] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar15,0,0,*(undefined4 *)((int)puVar9 + 0x15c));
        }
      }
    }
  }
  else if (bVar2 < 9) {
    uVar18 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x70));
    if ((uVar18 & 0x160) != 0) {
      mobyutil::MB_SpawnExplosionSparks
                (0x3fe0000000000000,0x402a000000000000,lVar15,lVar15 + 0x10,&DAT_00189b98,
                 0xffffffffffffffff);
      mobyfunc::DeleteMoby(moby);
    }
  }
  else if (bVar2 < 10) {
    *(undefined4 *)((int)puVar9 + 0xfc) = 0;
    *(undefined4 *)(puVar9 + 0x1f) = 0;
    *(undefined4 *)((int)puVar9 + 0xf4) = 0;
    *(undefined4 *)(puVar9 + 0x1e) = 0;
    puVar9[0x12] = 0xffffffffffffffff;
    puVar9[0x14] = 1;
    puVar9[0x15] = 1;
    puVar9[0x16] = 0xffffffffffffffff;
    puVar9[0x17] = 0;
    mobyutil::MB_genericExplosion
              (0x4000000000000000,0x3ff0000000000000,0x4010000000000000,0x4000000000000000,
               0x4022000000000000,0x3ff0000000000000,0x402e000000000000,lVar15,uVar14 - 0xa0,
               lVar15 + 0x10,0,1,10,3,0x10);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 0018a80c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1023_0018a80c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1023_0018a80c(void)

{
  DAT_0073f950 = 0x10000;
  return;
}



//==== 0018a840  ns=mobyupdate_helpers  size=0xa14
// sig: undefined M1023_0018a840(void)
// callers(1): 0018b2f8 mobyupdate_unsorted::UpdateMoby_1023
// callees(18): 000efa28 mobyfunc::CreateMoby; 000f1038 mobyfunc::GetBoneTransformations; 000f1114 mobyfunc::GetBonePosition; 000f31a8 mobyfunc::UpdateMobyTransform; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcd60 mobyutil::MB_DistributeBolts; 000ffb70 mobyutil::GetGroundZ; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00111ba0 mobyutil::MB_getTargetInArea; 004fffb4 fastfunc::FastDecTimerS16; 00500fa8 fastfunc::FastApplyTransform; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M1023_0018a840(MobyInstance *param_1)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  Spline *pSVar7;
  ulonglong *puVar8;
  int iVar9;
  ulonglong uVar10;
  MobyInstance *pMVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  longlong lVar11;
  longlong lVar12;
  undefined2 uVar17;
  float *pfVar19;
  longlong lVar18;
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
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0x160;
  puVar8 = (ulonglong *)lVar12;
  *puVar8 = uVar10;
  puVar8[0x2e] = in_LR;
  puVar8[0x2b] = in_f31;
  puVar8[0x2a] = unaff_r31;
  uVar1 = param_1->state;
  puVar8[0x29] = unaff_r30;
  pvVar6 = param_1->pVar;
  uVar22 = ZEXT48(pvVar6);
  puVar8[0x28] = unaff_r29;
  puVar8[0x27] = unaff_r28;
  if (uVar1 != '\0') {
    iVar14 = *(int *)((int)pvVar6 + 0x1f8);
    param_1->scale = param_1->pClass->gScale * DAT_0073f974;
    *(float *)((int)pvVar6 + 0xf4) = DAT_0073f9a4 * mobyutil::g_FrameTime;
    if (iVar14 == 0) {
      pMVar13 = mobyfunc::CreateMoby(BLARG_GUN_0401);
      *(MobyInstance **)((int)pvVar6 + 0x1f8) = pMVar13;
      if (pMVar13 != (MobyInstance *)0x0) {
        pMVar13->drawDistance = 0x40;
        *(undefined1 *)(*(int *)((int)pvVar6 + 0x1f8) + 0x30) = 0x40;
        *(undefined1 *)(*(int *)((int)pvVar6 + 0x1f8) + 0x31) = 1;
        *(ushort *)(*(int *)((int)pvVar6 + 0x1f8) + 0x34) =
             *(ushort *)(*(int *)((int)pvVar6 + 0x1f8) + 0x34) | 0x100;
        mobyfunc::GetBonePosition(param_1,4,uVar10 - 0xf0);
        iVar14 = *(int *)((int)pvVar6 + 0x1f8);
        *(undefined4 *)(iVar14 + 0x10) = *(undefined4 *)(puVar8 + 0xe);
        *(undefined4 *)(iVar14 + 0x14) = *(undefined4 *)((int)puVar8 + 0x74);
        *(undefined4 *)(iVar14 + 0x18) = *(undefined4 *)(puVar8 + 0xf);
        *(undefined4 *)(iVar14 + 0x1c) = *(undefined4 *)((int)puVar8 + 0x7c);
      }
      param_1->modeBits = param_1->modeBits | CAN_BE_AUTO_TARGETED;
    }
    else {
      mobyfunc::GetBonePosition(param_1,4,uVar10 - 0xe0);
      mobyfunc::GetBoneTransformations(param_1,4,uVar10 - 0xd0);
      fastfunc::FastApplyTransform
                ((Vec4 *)(*(int *)((int)pvVar6 + 0x1f8) + 0xc0),(Vec4 *)(uVar10 - 0xd0));
      iVar14 = *(int *)((int)pvVar6 + 0x1f8);
      *(undefined4 *)(iVar14 + 0x10) = *(undefined4 *)(puVar8 + 0x10);
      *(undefined4 *)(iVar14 + 0x14) = *(undefined4 *)((int)puVar8 + 0x84);
      *(undefined4 *)(iVar14 + 0x18) = *(undefined4 *)(puVar8 + 0x11);
      *(undefined4 *)(iVar14 + 0x1c) = *(undefined4 *)((int)puVar8 + 0x8c);
      mobyfunc::UpdateMobyTransform(*(MobyInstance **)((int)pvVar6 + 0x1f8));
    }
    dVar27 = 0.0;
    *(undefined4 *)((int)puVar8 + 0xd4) = 0;
    iVar14 = mobyutil::MB_damage(param_1,0x330000,0);
    iVar15 = mobyutil::MB_HandleDamage
                       (param_1,iVar14,uVar22 + 0x20,0,puVar8 + 0x1a,(int)puVar8 + 0xd4,0,4);
    if ((*(int *)(puVar8 + 0x1a) != 1) && (param_1->state != '\v')) {
      fVar5 = *(float *)((int)pvVar6 + 0x20) - *(float *)((int)puVar8 + 0xd4);
      *(float *)((int)pvVar6 + 0x20) = fVar5;
      iVar15 = iVar15 + ((uint)((LZCOUNT(0x47 - (uint)*(ushort *)(*(int *)(iVar14 + 0x20) + 0xa6))
                                << 0x3a) >> 0x3f) & 3U - iVar15);
      if ((double)fVar5 <= dVar27) {
        iVar15 = 1;
      }
      uVar16 = fastfunc::FastDoubleToInt(0x4080000000000000);
      *(undefined4 *)((int)pvVar6 + 0x98) = 0x3f000000;
      fVar2 = DAT_0073f978;
      fVar5 = DAT_0071f418;
      *(undefined4 *)((int)pvVar6 + 0x90) = uVar16;
      *(undefined1 *)((int)pvVar6 + 0xad) = 0;
      *(undefined4 *)((int)pvVar6 + 0x94) = 9;
      *(float *)((int)pvVar6 + 0x80) = fVar2 * fVar5;
      fVar5 = mobyutil::g_FrameTime;
      if (iVar15 < 3) {
        if ((-1 < iVar15) && (0 < iVar15)) {
          *(undefined4 *)((int)pvVar6 + 0x98) = 0x3e800000;
          fVar5 = DAT_0073f978 * DAT_0071f418;
          param_1->modeBits =
               param_1->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
          *(float *)((int)pvVar6 + 0x80) = fVar5;
          fVar2 = DAT_0073f988;
          fVar5 = mobyutil::g_FrameTime;
          *(undefined4 *)((int)pvVar6 + 0x90) = 0x200;
          *(float *)((int)pvVar6 + 0x88) = fVar2 * fVar5;
          fVar2 = DAT_0073f984;
          *(undefined4 *)((int)pvVar6 + 0xc0) = 0x41300000;
          *(undefined4 *)((int)pvVar6 + 0xc4) = 0x41800000;
          *(float *)((int)pvVar6 + 0x8c) = fVar2 * fVar5;
          fVar5 = (param_1->pos).x - *(float *)(*(int *)(iVar14 + 0x20) + 0x10);
          fVar2 = (param_1->pos).y - *(float *)(*(int *)(iVar14 + 0x20) + 0x14);
          dVar24 = ABS((double)fVar5);
          dVar25 = ABS((double)fVar2);
          *(float *)(puVar8 + 0x1c) = fVar5;
          *(float *)((int)puVar8 + 0xe4) = fVar2;
          *(float *)(puVar8 + 0x1d) = (float)(dVar24 - dVar25);
          uVar20 = (ulonglong)(*(uint *)(puVar8 + 0x1c) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar8 + 0x1d) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar8 + 0xe4) >> 0x1d) & 4;
          dVar26 = ABS((double)*(float *)(puVar8 + 0x1c));
          if ((double)*(float *)(puVar8 + 0x1d) - dVar27 < 0.0) {
            dVar26 = dVar25;
          }
          fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
          dVar25 = ABS((double)*(float *)((int)puVar8 + 0xe4));
          if ((double)*(float *)(puVar8 + 0x1d) - dVar27 < 0.0) {
            dVar25 = dVar24;
          }
          fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
          if (dVar27 < dVar26) {
            lVar11 = uVar10 - 0x150;
            lVar18 = uVar10 - 0x68;
            lVar21 = uVar10 - 0x58;
            lVar23 = 2;
            fVar3 = (float)(dVar25 - dVar26) / (float)(dVar25 + dVar26);
            fVar4 = fVar3 * fVar3;
            *(float *)((int)puVar8 + 0x104) = fVar3;
            *(float *)((int)puVar8 + 0xfc) = fVar3;
            *(float *)(puVar8 + 0x20) = fVar3;
            *(float *)(puVar8 + 0x1f) = fVar3;
            fVar3 = fVar4 * fVar4;
            *(float *)((int)puVar8 + 0xfc) = *(float *)((int)puVar8 + 0xfc) * fVar4;
            *(float *)(puVar8 + 0x20) = *(float *)(puVar8 + 0x20) * fVar3;
            *(float *)((int)puVar8 + 0x104) = *(float *)((int)puVar8 + 0x104) * fVar3 * fVar4;
            do {
              *(float *)((int)lVar11 + 0xf8) = *(float *)((int)lVar11 + 0xe8) * fVar3 * fVar3;
              iVar15 = (int)lVar18;
              lVar11 = lVar11 + 8;
              lVar18 = lVar18 + 8;
              *(float *)((int)lVar21 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
              lVar21 = lVar21 + 8;
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            lVar23 = 4;
            lVar21 = uVar10 - 0x68;
            pfVar19 = (float *)&DAT_007358e0;
            lVar11 = lVar12;
            lVar18 = lVar21;
            do {
              fVar3 = *pfVar19;
              fVar4 = pfVar19[1];
              pfVar19 = pfVar19 + 2;
              *(float *)((int)lVar11 + 0xf8) = *(float *)((int)lVar11 + 0xf8) * fVar3;
              lVar11 = lVar11 + 8;
              *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
              lVar18 = lVar18 + 8;
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            lVar11 = 2;
            do {
              iVar15 = (int)lVar12;
              iVar9 = (int)lVar21;
              lVar12 = lVar12 + 0x10;
              lVar21 = lVar21 + 0x10;
              dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar15 + 0xf8)) +
                                *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                               *(float *)(iVar9 + 0xc));
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
            dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar5 + fVar2);
          }
          *(float *)((int)puVar8 + 0xdc) = (float)dVar27;
          uVar16 = *(undefined4 *)(iVar14 + 0x18);
          *(undefined4 *)(puVar8 + 6) = *(undefined4 *)(iVar14 + 0x10);
          *(undefined4 *)(puVar8 + 7) = uVar16;
          uVar16 = *(undefined4 *)(iVar14 + 0x1c);
          *(undefined4 *)((int)puVar8 + 0x34) = *(undefined4 *)(iVar14 + 0x14);
          *(undefined4 *)((int)puVar8 + 0x3c) = uVar16;
          mobyutil::MB_VecAtan2Angles(puVar8[6],puVar8[7],uVar10 - 0x84,uVar22 + 0x88,uVar22 + 0x8c)
          ;
          mobyutil::MB_StartKick((double)*(float *)((int)puVar8 + 0xdc),param_1,uVar22 + 0x70);
          param_1->state = '\v';
          *(undefined1 *)((int)pvVar6 + 0x67) = 0xf0;
          mobyutil::MB_DistributeBolts(param_1,2,3,0,0xffffffffffffffff);
        }
      }
      else if (iVar15 < 0xb) {
        if (iVar15 < 9) {
          *(float *)((int)pvVar6 + 0x88) = DAT_0073f980 * mobyutil::g_FrameTime;
          *(undefined4 *)((int)pvVar6 + 0xc0) = 0x40a00000;
          *(undefined4 *)((int)pvVar6 + 0xc4) = 0x41200000;
          *(float *)((int)pvVar6 + 0x8c) = fVar5 * 3.0;
          fVar5 = (param_1->pos).x - *(float *)(*(int *)(iVar14 + 0x20) + 0x10);
          fVar2 = (param_1->pos).y - *(float *)(*(int *)(iVar14 + 0x20) + 0x14);
          dVar24 = ABS((double)fVar5);
          dVar25 = ABS((double)fVar2);
          *(float *)((int)puVar8 + 0xec) = fVar5;
          *(float *)(puVar8 + 0x1e) = fVar2;
          *(float *)((int)puVar8 + 0xf4) = (float)(dVar24 - dVar25);
          uVar20 = (ulonglong)(*(uint *)((int)puVar8 + 0xec) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar8 + 0xf4) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar8 + 0x1e) >> 0x1d) & 4;
          dVar26 = ABS((double)*(float *)((int)puVar8 + 0xec));
          if ((double)*(float *)((int)puVar8 + 0xf4) - dVar27 < 0.0) {
            dVar26 = dVar25;
          }
          fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
          dVar25 = ABS((double)*(float *)(puVar8 + 0x1e));
          if ((double)*(float *)((int)puVar8 + 0xf4) - dVar27 < 0.0) {
            dVar25 = dVar24;
          }
          fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
          if (dVar27 < dVar26) {
            lVar11 = uVar10 - 0x150;
            lVar18 = uVar10 - 0x48;
            lVar21 = uVar10 - 0x38;
            lVar23 = 2;
            fVar3 = (float)(dVar25 - dVar26) / (float)(dVar25 + dVar26);
            fVar4 = fVar3 * fVar3;
            *(float *)((int)puVar8 + 0x124) = fVar3;
            *(float *)((int)puVar8 + 0x11c) = fVar3;
            *(float *)(puVar8 + 0x24) = fVar3;
            *(float *)(puVar8 + 0x23) = fVar3;
            fVar3 = fVar4 * fVar4;
            *(float *)((int)puVar8 + 0x11c) = *(float *)((int)puVar8 + 0x11c) * fVar4;
            *(float *)(puVar8 + 0x24) = *(float *)(puVar8 + 0x24) * fVar3;
            *(float *)((int)puVar8 + 0x124) = *(float *)((int)puVar8 + 0x124) * fVar3 * fVar4;
            do {
              *(float *)((int)lVar11 + 0x118) = *(float *)((int)lVar11 + 0x108) * fVar3 * fVar3;
              iVar15 = (int)lVar18;
              lVar11 = lVar11 + 8;
              lVar18 = lVar18 + 8;
              *(float *)((int)lVar21 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
              lVar21 = lVar21 + 8;
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            lVar23 = 4;
            lVar21 = uVar10 - 0x48;
            pfVar19 = (float *)&DAT_007358e0;
            lVar11 = lVar12;
            lVar18 = lVar21;
            do {
              fVar3 = *pfVar19;
              fVar4 = pfVar19[1];
              pfVar19 = pfVar19 + 2;
              *(float *)((int)lVar11 + 0x118) = *(float *)((int)lVar11 + 0x118) * fVar3;
              lVar11 = lVar11 + 8;
              *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
              lVar18 = lVar18 + 8;
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            lVar11 = 2;
            do {
              iVar15 = (int)lVar12;
              iVar9 = (int)lVar21;
              lVar12 = lVar12 + 0x10;
              lVar21 = lVar21 + 0x10;
              dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar15 + 0x118)) +
                                *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                               *(float *)(iVar9 + 0xc));
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
            dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar5 + fVar2);
          }
          *(float *)(puVar8 + 0x1b) = (float)dVar27;
          uVar16 = *(undefined4 *)(iVar14 + 0x18);
          *(undefined4 *)(puVar8 + 6) = *(undefined4 *)(iVar14 + 0x10);
          *(undefined4 *)(puVar8 + 7) = uVar16;
          uVar16 = *(undefined4 *)(iVar14 + 0x1c);
          *(undefined4 *)((int)puVar8 + 0x34) = *(undefined4 *)(iVar14 + 0x14);
          *(undefined4 *)((int)puVar8 + 0x3c) = uVar16;
          mobyutil::MB_VecAtan2Angles(puVar8[6],puVar8[7],uVar10 - 0x88,uVar22 + 0x88,uVar22 + 0x8c)
          ;
          mobyutil::MB_StartKick((double)*(float *)(puVar8 + 0x1b),param_1,uVar22 + 0x70);
          param_1->state = '\n';
          *(undefined1 *)((int)pvVar6 + 0x67) = 0x78;
        }
        else {
          *(undefined1 *)((int)pvVar6 + 0x67) = 0xfa;
        }
      }
      mobyutil::MB_UpdateLightsTransition(param_1,uVar22 + 0x60);
    }
    param_1->damage = -1;
    mobyutil::MB_ColorDyingMoby(param_1,uVar22 + 0x60);
    if (*(int *)((int)pvVar6 + 0x38) != 0) {
      dVar27 = (double)mobyutil::MB_randRangeFloat(180.0,240.0);
      uVar17 = fastfunc::FastDoubleToInt((double)(float)(dVar27 * (double)animationSpeed));
      *(undefined2 *)((int)pvVar6 + 0x1d8) = uVar17;
      *(undefined4 *)((int)pvVar6 + 0x38) = 0;
    }
    fastfunc::FastDecTimerS16(uVar22 + 0x1d8);
    if (*(short *)((int)pvVar6 + 0x1d8) == 0) {
      fVar5 = *(float *)((int)pvVar6 + 0x1e4);
    }
    else {
      fVar5 = *(float *)((int)pvVar6 + 0x1e4) + 6.0;
    }
    *(float *)((int)pvVar6 + 0x1dc) = fVar5;
    iVar14 = mobyutil::MB_randInt(4);
    if (iVar14 == 0) {
      pSVar7 = Splines[*(int *)((int)pvVar6 + 0x1d0)];
      iVar14 = mobyutil::MB_getTargetInArea
                         ((double)*(float *)((int)pvVar6 + 0x1dc),param_1,uVar22 + 0x120,pSVar7,0,0,
                          pSVar7->points,pSVar7->cnt);
      if ((iVar14 != 2) &&
         ((fVar5 = (param_1->pos).y - *(float *)((int)pvVar6 + 0x124),
          fVar2 = (param_1->pos).x - *(float *)((int)pvVar6 + 0x120),
          *(float *)((int)pvVar6 + 0x1dc) < SQRT(fVar2 * fVar2 + fVar5 * fVar5) ||
          (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar6 + 0x128)))))) {
        *(undefined4 *)((int)pvVar6 + 0x164) = 2;
      }
    }
    else {
      iVar14 = *(int *)((int)pvVar6 + 0x160);
      if ((iVar14 == 0) || (*(char *)(iVar14 + 0x20) == -3 || *(char *)(iVar14 + 0x20) == -2)) {
        *(undefined4 *)((int)pvVar6 + 0x160) = 0;
        *(undefined4 *)((int)pvVar6 + 0x164) = 2;
      }
      else {
        *(undefined4 *)((int)pvVar6 + 0x120) = *(undefined4 *)(iVar14 + 0x10);
        *(undefined4 *)((int)pvVar6 + 0x124) = *(undefined4 *)(iVar14 + 0x14);
        *(undefined4 *)((int)pvVar6 + 0x128) = *(undefined4 *)(iVar14 + 0x18);
        *(undefined4 *)((int)pvVar6 + 300) = *(undefined4 *)(iVar14 + 0x1c);
      }
    }
    if (*(int *)((int)pvVar6 + 0x160) == 0) {
      *(MobyInstance **)((int)pvVar6 + 0x160) = g_heroMobyPtr;
    }
    uVar1 = param_1->state;
    if ((((uVar1 == '\x05' || uVar1 == '\0') || (uVar1 == '\a')) || (uVar1 == '\x04')) &&
       (dVar27 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,&param_1->pos,0),
       dVar27 < (double)(param_1->pos).z)) {
      (param_1->pos).z = (float)dVar27;
    }
  }
  return;
}



//==== 0018b2f8  ns=mobyupdate_unsorted  size=0x1a1c
// sig: undefined UpdateMoby_1023(MobyInstance * moby)
// callers(0): 
// callees(29): 00057820 collproc::CollLine; 0005e598 collproc::CollMobySphere; 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 001009b0 mobyutil::MB_MoveAndCollide; 00100f8c mobyutil::MB_InitDefaultParams; 00101cc0 mobyutil::MB_UpdateNavMoveTurning; 0010581c mobyutil::SetCollDamIn; 00106360 mobyutil::MB_SetZBoundsFromGround; 0010a2e0 mobyutil::OrganicDeltAng; 0010b030 mobyutil::MB_UpdateKick; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00110488 mobyutil::ClampVec3Magnitude; 00119a18 mobyfunc::DoManipulator; 0011a560 mobyutil::MB_SpawnDebrisMoby; 001367d0 path::PathFindClosestPnt; 0018a840 mobyupdate_helpers::M1023_0018a840; 0023e6e0 FUN_0023e6e0; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand; 005cd098 libc::printf; 005e8338 FUN_005e8338
// strings: 0065422c: 'Paratrooper with an invalid wakePath. UID = %d' | 0065425c: 'Paratrooper with an invalid jumpPath. UID = %d' | 0073f9bc: '@S33' (raw)

/* Moby 1023 */

void mobyupdate_unsorted::UpdateMoby_1023(MobyInstance *moby)

{
  f32 fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  MobyInstance *pMVar10;
  Spline *pSVar11;
  float fVar12;
  float fVar13;
  longlong lVar14;
  int iVar15;
  undefined1 uVar18;
  undefined4 uVar16;
  uint uVar17;
  byte bVar20;
  short sVar19;
  undefined8 in_r9;
  Spline *pSVar22;
  longlong lVar21;
  longlong lVar23;
  double dVar24;
  undefined8 uVar25;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 local_c0 [16];
  Vec4 local_b0;
  undefined4 local_a0 [8];
  undefined1 auStack_80 [72];
  
  lVar14 = (longlong)(int)moby;
  pvVar9 = moby->pVar;
  if ((moby->enabled == '\0') &&
     (fVar12 = (moby->pos).y - GameCamera.posY, fVar2 = (moby->pos).x - GameCamera.posX,
     fVar3 = (moby->pos).z - GameCamera.posZ,
     40.0 < SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar12 * fVar12))) {
    return;
  }
  mobyfunc::DoManipulator(0x4004000000000000,moby,6,(Manipulator *)((int)pvVar9 + 0x170));
  if ((moby->enabled != '\0') &&
     (fVar12 = (moby->pos).y - GameCamera.posY, fVar2 = (moby->pos).x - GameCamera.posX,
     fVar3 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar12 * fVar12) < 29.0)) {
    mobyutil::MB_SetZBoundsFromGround(lVar14);
    moby->shadow = '\x17';
  }
  if (g_gameMode == GAME_MODE_SCENE) {
    return;
  }
  mobyupdate_helpers::M1023_0018a840(lVar14);
  pSVar22 = (Spline *)0x0;
  pMVar10 = *(MobyInstance **)((int)pvVar9 + 0x160);
  bVar20 = moby->state;
  if (*(int *)((int)pvVar9 + 0x1fc) != -1) {
    pSVar22 = Splines[*(int *)((int)pvVar9 + 0x1fc)];
  }
  if ((((g_heroState != DYING_GROUNDED) || ((int)(animationSpeed * 30.5) <= hero::g_heroStateTimer))
      || (bVar20 == 10 || bVar20 == 8)) ||
     ((bVar20 == 0xb || bVar20 == 4 ||
      (fVar2 = (moby->pos).y - g_heroPosition.y, fVar12 = (moby->pos).x - g_heroPosition.x,
      25.0 <= SQRT(fVar12 * fVar12 + fVar2 * fVar2))))) {
LAB_0018b56c:
    if (bVar20 == 0) goto LAB_0018b5a8;
  }
  else {
    iVar15 = mobyutil::MB_randInt(0x31);
    bVar20 = moby->state;
    if (iVar15 != 0) goto LAB_0018b56c;
    if (moby->animationId != '\x0e') {
      mobyutil::MB_SetAnimation(lVar14,0xe,0,(int)(animationSpeed * 11.5));
    }
    bVar20 = 8;
    moby->state = '\b';
  }
  if (*(char *)((int)pvVar9 + 0x2e) == '\x02') {
    mobyfunc::DeleteMoby(moby);
    if (*(MobyInstance **)((int)pvVar9 + 0x1f8) == (MobyInstance *)0x0) {
      return;
    }
    mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar9 + 0x1f8));
    return;
  }
LAB_0018b5a8:
  if (bVar20 < 5) {
    if (bVar20 < 2) {
      if (bVar20 == 0) {
        *(undefined4 *)((int)pvVar9 + 0x20) = 0x40000000;
        *(undefined2 *)((int)pvVar9 + 0x24) = 2;
        *(undefined1 *)((int)pvVar9 + 0x28) = 1;
        *(undefined1 *)((int)pvVar9 + 0x29) = 0;
        *(undefined1 *)((int)pvVar9 + 0x2e) = 1;
        uVar18 = fastfunc::FastDoubleToInt(0x402e000000000000);
        *(undefined1 *)((int)pvVar9 + 0x58) = uVar18;
        uVar18 = fastfunc::FastDoubleToInt(0x4028000000000000);
        *(undefined1 *)((int)pvVar9 + 0x5a) = uVar18;
        if (*(int *)((int)pvVar9 + 0x1d0) == -1) {
          libc::printf("Paratrooper with an invalid wakePath. UID = %d",moby->uid);
          mobyfunc::DeleteMoby(moby);
        }
        else if (*(int *)((int)pvVar9 + 0x1d4) == -1) {
          libc::printf("Paratrooper with an invalid jumpPath. UID = %d",moby->uid);
          mobyfunc::DeleteMoby(moby);
        }
        else {
          mobyutil::MB_InitDefaultParams((float *)((int)pvVar9 + 0xd0));
          *(undefined4 *)((int)pvVar9 + 0xdc) = 0x3f000000;
          *(undefined4 *)((int)pvVar9 + 0xd8) = 0x3f000000;
          uVar16 = fastfunc::FastDoubleToInt(0x4080000000000000);
          *(undefined4 *)((int)pvVar9 + 0xd0) = uVar16;
          fVar12 = DAT_0071f418 * 6.981317;
          *(float *)((int)pvVar9 + 0x10c) = fVar12;
          *(float *)((int)pvVar9 + 0x110) = fVar12;
          fVar12 = mobyutil::g_FrameTime;
          *(undefined4 *)((int)pvVar9 + 0xf8) = 0x3eb2b8c2;
          *(undefined4 *)((int)pvVar9 + 0xfc) = 0x3e4ccccd;
          *(float *)((int)pvVar9 + 0x114) = fVar12 * 8.726646;
          uVar17 = rand();
          if ((uVar17 & 1) != 0) {
            moby->modeBits = moby->modeBits | MIRROR;
          }
          pSVar11 = Splines[*(int *)((int)pvVar9 + 0x1d4)];
          (moby->pos).x = pSVar11->points[0].x;
          (moby->pos).y = pSVar11->points[0].y;
          (moby->pos).z = pSVar11->points[0].z;
          (moby->pos).w = pSVar11->points[0].w;
          if (pSVar22 == (Spline *)0x0) {
            moby->state = '\x03';
          }
          else {
            iVar15 = rand();
            *(ushort *)((int)pvVar9 + 0x20c) = ((ushort)iVar15 & 1) * 2 + -1;
            iVar15 = path::PathFindClosestPnt(0.0,(Vec4 *)&moby->pos,pSVar22);
            iVar15 = iVar15 + *(short *)((int)pvVar9 + 0x20c);
            *(int *)((int)pvVar9 + 500) = iVar15;
            if ((pSVar22->cnt <= iVar15) || (iVar15 < 0)) {
              sVar19 = -*(short *)((int)pvVar9 + 0x20c);
              *(short *)((int)pvVar9 + 0x20c) = sVar19;
              *(int *)((int)pvVar9 + 500) = iVar15 + (int)((longlong)sVar19 << 1);
            }
            if (moby->animationId != '\x02') {
              uVar17 = rand();
              mobyutil::MB_SetAnimation
                        (lVar14,2,0,
                         uVar17 + (((int)uVar17 >> 2) + (uint)((int)uVar17 < 0 && (uVar17 & 3) != 0)
                                  ) * -4 + 7);
            }
            moby->state = '\x01';
          }
          *(undefined2 *)((int)pvVar9 + 0x1da) = 0;
        }
      }
      else {
        iVar15 = *(int *)((int)pvVar9 + 500);
        fVar12 = (moby->pos).y - pSVar22->points[iVar15].y;
        fVar2 = (moby->pos).x - pSVar22->points[iVar15].x;
        if (SQRT(fVar2 * fVar2 + fVar12 * fVar12) < *(float *)((int)pvVar9 + 0xe0)) {
          iVar15 = iVar15 + *(short *)((int)pvVar9 + 0x20c);
          *(int *)((int)pvVar9 + 500) = iVar15;
          if ((pSVar22->cnt <= iVar15) || (iVar15 < 0)) {
            sVar19 = -*(short *)((int)pvVar9 + 0x20c);
            *(short *)((int)pvVar9 + 0x20c) = sVar19;
            iVar15 = iVar15 + sVar19 * 2;
            *(undefined4 *)((int)pvVar9 + 0xe0) = 0;
            *(int *)((int)pvVar9 + 500) = iVar15;
          }
        }
        mobyutil::MB_UpdateNavMoveTurning
                  (lVar14,(int)pvVar9 + 0xd0,pSVar22->points + iVar15,auStack_110);
        if (((pMVar10 != (MobyInstance *)0x0) && (*(int *)((int)pvVar9 + 0x164) != 2)) &&
           (iVar15 = fastfunc::FastDecTimerS32((int)pvVar9 + 0x1f0), iVar15 != 0)) {
          iVar15 = path::PathFindClosestPnt
                             (0.0,(Vec4 *)&moby->pos,Splines[*(int *)((int)pvVar9 + 0x1d4)]);
          *(int *)((int)pvVar9 + 500) = iVar15;
          moby->state = '\x02';
        }
      }
    }
    else if (bVar20 < 3) {
      iVar15 = path::PathFindClosestPnt
                         (0.0,(Vec4 *)&moby->pos,Splines[*(int *)((int)pvVar9 + 0x1d4)]);
      *(int *)((int)pvVar9 + 500) = iVar15;
      pSVar22 = Splines[*(int *)((int)pvVar9 + 0x1d4)];
      fVar12 = (moby->pos).y - pSVar22->points[iVar15].y;
      fVar2 = (moby->pos).x - pSVar22->points[iVar15].x;
      fVar12 = SQRT(fVar2 * fVar2 + fVar12 * fVar12);
      if ((fVar12 < 1.0) || (fVar12 < *(float *)((int)pvVar9 + 0xe0))) {
        *(undefined4 *)((int)pvVar9 + 0xe0) = 0;
        moby->state = '\x03';
      }
      else {
        mobyutil::MB_UpdateNavMoveTurning
                  (lVar14,(int)pvVar9 + 0xd0,pSVar22->points + iVar15,auStack_100);
        if (moby->animationId != '\x02') {
          uVar17 = rand();
          mobyutil::MB_SetAnimation
                    (lVar14,2,0,
                     uVar17 + (((int)uVar17 >> 2) + (uint)((int)uVar17 < 0 && (uVar17 & 3) != 0)) *
                              -4 + 7);
        }
      }
    }
    else if (bVar20 < 4) {
      dVar24 = (double)FUN_005e8338((double)((pMVar10->pos).x - (moby->pos).x),
                                    (double)((pMVar10->pos).y - (moby->pos).y));
      mobyutil::OrganicDeltAng
                ((float)dVar24,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                 mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar9 + 0x1e0));
      if (((moby->field43_0x70 & 2U) != 0) &&
         (bVar20 = moby->animationId, uVar17 = rand(), (uint)bVar20 != (uVar17 & 1))) {
        uVar17 = rand();
        fVar12 = animationSpeed * 7.5;
        iVar15 = rand();
        mobyutil::MB_SetAnimation(lVar14,uVar17 & 1,0,(int)fVar12 + iVar15 % 7);
      }
      if (DAT_0073f9c0 < *(short *)((int)pvVar9 + 0x1da)) {
        *(undefined2 *)((int)pvVar9 + 0x1da) = 0;
        if (moby->animationId != '\n') {
          fVar12 = animationSpeed * 7.5;
          iVar15 = mobyutil::MB_randRange(0,(int)(animationSpeed * 5.5));
          mobyutil::MB_SetAnimation(lVar14,10,2,(int)fVar12 + iVar15);
        }
        moby->state = '\t';
      }
      else if (pMVar10 != (MobyInstance *)0x0) {
        if ((*(int *)((int)pvVar9 + 0x164) == 2) ||
           (iVar15 = fastfunc::FastDecTimerS32((int)pvVar9 + 0x1f0), iVar15 == 0)) {
          fVar12 = (moby->pos).y - (pMVar10->pos).y;
          fVar2 = (moby->pos).x - (pMVar10->pos).x;
          if ((SQRT(fVar2 * fVar2 + fVar12 * fVar12) < DAT_0073f9bc) &&
             (moby->state = '\a', moby->animationId != '\r')) {
            mobyutil::MB_SetAnimation(lVar14,0xd,0,(int)(animationSpeed * 10.5));
          }
        }
        else {
          *(f32 *)((int)pvVar9 + 0x1c0) = (moby->pos).x;
          *(f32 *)((int)pvVar9 + 0x1c4) = (moby->pos).y;
          fVar1 = (moby->pos).z;
          *(uint *)((int)pvVar9 + 500) = *(int *)((int)pvVar9 + 500) + 1U & 1;
          *(f32 *)((int)pvVar9 + 0x1c8) = fVar1;
          *(f32 *)((int)pvVar9 + 0x1cc) = (moby->pos).w;
          moby->state = '\x04';
          pSVar22 = Splines[*(int *)((int)pvVar9 + 0x1d4)];
          iVar15 = *(int *)((int)pvVar9 + 500);
          if (0.0 <= (moby->transform).v1.z * (pSVar22->points[iVar15].z - (moby->pos).z) +
                     (moby->transform).v1.x * (pSVar22->points[iVar15].x - (moby->pos).x) +
                     (moby->transform).v1.y * (pSVar22->points[iVar15].y - (moby->pos).y)) {
            if (moby->animationId != '\x10') {
              mobyutil::MB_SetAnimation(lVar14,0x10,0,(int)(animationSpeed * 5.5));
            }
          }
          else if (moby->animationId != '\x12') {
            mobyutil::MB_SetAnimation(lVar14,0x12,0,(int)(animationSpeed * 5.5));
          }
        }
      }
    }
    else {
      dVar24 = (double)FUN_005e8338((double)((pMVar10->pos).x - (moby->pos).x),
                                    (double)((pMVar10->pos).y - (moby->pos).y));
      mobyutil::OrganicDeltAng
                ((float)dVar24,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                 mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar9 + 0x1e0));
      dVar24 = (double)mobyfunc::BlendAnimFrame(moby);
      fVar12 = DAT_0073f9c4;
      if (((dVar24 <= 12.0) || (23.0 <= dVar24)) || (moby->updateId != moby->animationId)) {
        if ((moby->field43_0x70 & 2U) != 0) {
          collproc::CollLine(local_f0,local_e0,0,lVar14,0);
          if (DAT_0073f9c0 < *(short *)((int)pvVar9 + 0x1da)) {
            *(undefined2 *)((int)pvVar9 + 0x1da) = 0;
            if (moby->animationId != '\n') {
              uVar17 = rand();
              mobyutil::MB_SetAnimation
                        (lVar14,10,2,
                         uVar17 + (((int)uVar17 >> 2) + (uint)((int)uVar17 < 0 && (uVar17 & 3) != 0)
                                  ) * -4 + 5);
            }
            moby->state = '\t';
          }
          else {
            fVar12 = (moby->pos).y - (pMVar10->pos).y;
            fVar2 = (moby->pos).x - (pMVar10->pos).x;
            if (DAT_0073f9bc <= SQRT(fVar2 * fVar2 + fVar12 * fVar12)) {
              if (CollOutput.pMoby == pMVar10) {
                *(undefined4 *)((int)pvVar9 + 0x1e8) = 0x3f800000;
                moby->state = '\x05';
                *(undefined2 *)((int)pvVar9 + 0x20e) = 0;
                if (moby->animationId != '\x06') {
                  mobyutil::MB_SetAnimation(lVar14,6,0,(int)(animationSpeed * 10.5));
                }
              }
              else {
                moby->state = '\x03';
                if (moby->animationId != '\0') {
                  mobyutil::MB_SetAnimation(lVar14,0,0,(int)(animationSpeed * 5.5));
                }
                dVar24 = (double)mobyutil::MB_randRangeFloat(45.0,90.0);
                uVar16 = fastfunc::FastDoubleToInt((double)(float)(dVar24 * (double)animationSpeed))
                ;
                *(undefined4 *)((int)pvVar9 + 0x1f0) = uVar16;
              }
            }
            else {
              moby->state = '\a';
              if (moby->animationId != '\r') {
                uVar17 = rand();
                mobyutil::MB_SetAnimation
                          (lVar14,0xd,0,
                           uVar17 + (((int)uVar17 >> 2) +
                                    (uint)((int)uVar17 < 0 && (uVar17 & 3) != 0)) * -4 + 8);
              }
            }
          }
        }
      }
      else {
        fVar2 = 1.0;
        fVar3 = -((float)(23.0 - dVar24) * 0.09090909 - 1.0);
        if ((fVar3 <= 1.0) && (fVar2 = fVar3, fVar3 < 0.0)) {
          fVar2 = 0.0;
        }
        iVar15 = *(int *)((int)pvVar9 + 500);
        pSVar22 = Splines[*(int *)((int)pvVar9 + 0x1d4)];
        fVar3 = *(float *)((int)pvVar9 + 0x1c8);
        fVar4 = *(float *)((int)pvVar9 + 0x1c0);
        fVar5 = *(float *)((int)pvVar9 + 0x1c4);
        fVar6 = pSVar22->points[iVar15].z;
        fVar7 = pSVar22->points[iVar15].x;
        fVar8 = pSVar22->points[iVar15].y;
        fVar13 = (fVar2 - 0.5) * 2.0;
        (moby->pos).w = pSVar22->points[iVar15].w;
        (moby->pos).x = fVar2 * (fVar7 - fVar4) + fVar4;
        (moby->pos).y = fVar2 * (fVar8 - fVar5) + fVar5;
        (moby->pos).z = fVar12 * -(fVar13 * fVar13 - 1.0) + fVar2 * (fVar6 - fVar3) + fVar3;
      }
    }
  }
  else if (bVar20 < 8) {
    if (bVar20 < 6) {
      fVar12 = (moby->pos).y - (pMVar10->pos).y;
      fVar2 = (moby->pos).x - (pMVar10->pos).x;
      if (SQRT(fVar2 * fVar2 + fVar12 * fVar12) < DAT_0073f9bc) {
        moby->state = '\a';
        *(undefined4 *)((int)pvVar9 + 0x1ec) = 0;
        if (moby->animationId != '\r') {
          uVar17 = rand();
          mobyutil::MB_SetAnimation
                    (lVar14,0xd,0,
                     uVar17 + (((int)uVar17 >> 2) + (uint)((int)uVar17 < 0 && (uVar17 & 3) != 0)) *
                              -4 + 8);
        }
      }
      else {
        iVar15 = fastfunc::FastDecTimerS32((int)pvVar9 + 0x1ec);
        if (iVar15 != 0) {
          iVar15 = fastfunc::FastDoubleToInt((double)(DAT_00a10718 * 1.3 + DAT_00a10714));
          *(int *)((int)pvVar9 + 0x1ec) =
               (int)(animationSpeed * ((float)(longlong)(DAT_0073f9b0 + iVar15) + 0.5));
          *(float *)((int)pvVar9 + 0x1e8) = *(float *)((int)pvVar9 + 0x1e8) + DAT_0073f9b4;
          if ((((int)(((uint)((int)DAT_00a10718 >> 0x1f) >> 1 ^ (uint)DAT_00a10718) -
                     ((int)DAT_00a10718 >> 0x1f)) < 0x3f4ccccd) &&
              ((int)(((uint)((int)DAT_00a10714 >> 0x1f) >> 1 ^ (uint)DAT_00a10714) -
                    ((int)DAT_00a10714 >> 0x1f)) < 0x3f4ccccd)) ||
             ((*(ushort *)((int)pvVar9 + 0x20e) & 1) == 0)) {
            mobyfunc::GetBonePosition(*(undefined4 *)((int)pvVar9 + 0x1f8),0,auStack_d0);
            iVar15 = FUN_0023e6e0(local_c0,auStack_d0,lVar14,pMVar10,(int)(animationSpeed * 180.5),
                                  *(undefined2 *)((int)pvVar9 + 0x20e));
            if (iVar15 != 0) {
              *(float *)(iVar15 + 0x2c) = *(float *)(iVar15 + 0x2c) * 1.7;
            }
          }
          sVar19 = *(short *)((int)pvVar9 + 0x20e) + 1;
          *(short *)((int)pvVar9 + 0x20e) = sVar19;
          if (4 < sVar19) {
            *(undefined2 *)((int)pvVar9 + 0x20e) = 0;
          }
          uVar17 = (int)*(uint *)((int)pvVar9 + 0x1e8) >> 0x1f;
          if (0x41a00000 < (int)((uVar17 >> 1 ^ *(uint *)((int)pvVar9 + 0x1e8)) - uVar17)) {
            *(f32 *)((int)pvVar9 + 0x1c0) = (moby->pos).x;
            *(f32 *)((int)pvVar9 + 0x1c4) = (moby->pos).y;
            fVar1 = (moby->pos).z;
            *(uint *)((int)pvVar9 + 500) = *(int *)((int)pvVar9 + 500) + 1U & 1;
            *(f32 *)((int)pvVar9 + 0x1c8) = fVar1;
            fVar1 = (moby->pos).w;
            *(short *)((int)pvVar9 + 0x1da) = *(short *)((int)pvVar9 + 0x1da) + 1;
            *(f32 *)((int)pvVar9 + 0x1cc) = fVar1;
            moby->state = '\x04';
            pSVar22 = Splines[*(int *)((int)pvVar9 + 0x1d4)];
            iVar15 = *(int *)((int)pvVar9 + 500);
            if (0.0 <= (moby->transform).v1.z * (pSVar22->points[iVar15].z - (moby->pos).z) +
                       (moby->transform).v1.x * (pSVar22->points[iVar15].x - (moby->pos).x) +
                       (moby->transform).v1.y * (pSVar22->points[iVar15].y - (moby->pos).y)) {
              if (moby->animationId != '\x10') {
                mobyutil::MB_SetAnimation(lVar14,0x10,0,(int)(animationSpeed * 5.5));
              }
            }
            else if (moby->animationId != '\x12') {
              mobyutil::MB_SetAnimation(lVar14,0x12,0,(int)(animationSpeed * 5.5));
            }
          }
        }
      }
    }
    else if (bVar20 < 7) {
      dVar24 = (double)FUN_005e8338((double)((pMVar10->pos).x - (moby->pos).x),
                                    (double)((pMVar10->pos).y - (moby->pos).y));
      mobyutil::OrganicDeltAng
                ((float)dVar24,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                 mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar9 + 0x1e0));
      dVar24 = (double)mobyfunc::BlendAnimFrame(moby);
      if (((dVar24 <= 12.0) || (23.0 <= dVar24)) || (uVar25 = 0, moby->animationBlend != 0.0)) {
        if ((moby->field43_0x70 & 2U) != 0) {
          dVar24 = (double)mobyutil::MB_randRangeFloat(45.0,90.0);
          uVar16 = fastfunc::FastDoubleToInt((double)(float)(dVar24 * (double)animationSpeed));
          *(undefined4 *)((int)pvVar9 + 0x1f0) = uVar16;
          moby->state = '\x03';
          if (moby->animationId != '\0') {
            mobyutil::MB_SetAnimation(lVar14,0,0,(int)(animationSpeed * 10.5));
          }
        }
      }
      else {
        mobyutil::ClampVec3Magnitude((double)(mobyutil::g_FrameTime * 24.0),&local_b0);
        mobyutil::MB_MoveAndCollide
                  ((double)DAT_0073f9a8,(double)DAT_0073f9ac,uVar25,lVar14,&local_b0);
      }
    }
    else {
      dVar24 = (double)FUN_005e8338((double)((pMVar10->pos).x - (moby->pos).x),
                                    (double)((pMVar10->pos).y - (moby->pos).y));
      mobyutil::OrganicDeltAng
                ((float)dVar24,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                 mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar9 + 0x1e0));
      dVar24 = (double)mobyfunc::BlendAnimFrame(moby);
      if ((16.5 < dVar24) && (dVar24 < 20.0)) {
        mobyfunc::GetBonePosition(lVar14,4,local_a0);
        mobyutil::SetCollDamIn(0x3ff0000000000000,auStack_80,lVar14,1);
        collproc::CollMobySphere(0x3fe99999a0000000,local_a0);
      }
      if ((moby->field43_0x70 & 2U) != 0) {
        moby->state = '\x02';
      }
    }
  }
  else if (bVar20 < 0xb) {
    if (bVar20 < 10) {
      if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x03', moby->animationId != '\0')) {
        mobyutil::MB_SetAnimation(lVar14,0,0,(int)(animationSpeed * 10.5));
      }
    }
    else {
      uVar17 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x70));
      if ((uVar17 & 0x40) == 0) {
        if ((uVar17 & 0x120) != 0) {
          mobyfunc::DeleteMoby(moby);
        }
      }
      else {
        fVar12 = (moby->pos).y - (pMVar10->pos).y;
        fVar2 = (moby->pos).x - (pMVar10->pos).x;
        if (DAT_0073f9bc <= SQRT(fVar2 * fVar2 + fVar12 * fVar12)) {
          *(undefined4 *)((int)pvVar9 + 0x1e8) = 0x3f800000;
          moby->state = '\x05';
          *(undefined2 *)((int)pvVar9 + 0x20e) = 0;
          if (moby->animationId != '\x06') {
            fVar12 = animationSpeed * 10.5;
            iVar15 = mobyutil::MB_randRange(0,(int)(animationSpeed * 7.5));
            mobyutil::MB_SetAnimation(lVar14,6,0,(int)fVar12 + iVar15);
          }
        }
        else {
          moby->state = '\a';
          if (moby->animationId != '\r') {
            uVar17 = rand();
            mobyutil::MB_SetAnimation
                      (lVar14,0xd,0,
                       uVar17 + (((int)uVar17 >> 2) + (uint)((int)uVar17 < 0 && (uVar17 & 3) != 0))
                                * -4 + 8);
          }
        }
      }
    }
  }
  else if ((bVar20 < 0xc) &&
          (uVar17 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x70)),
          (uVar17 & 0x160) != 0)) {
    mobyutil::MB_SpawnBoltsFromCrate(lVar14,0,0xffffffffffffffff);
    lVar23 = lVar14 + 0x10;
    mobyutil::MB_SpawnExplosionSparks(0x3fe0000000000000,0x402a000000000000,lVar14,lVar23);
    uVar25 = 0;
    lVar21 = lVar14 + 0x40;
    mobyutil::MB_SpawnDebrisMoby(0,lVar14,0x69c,lVar23,lVar21,0,0,in_r9,&DAT_00a15d30);
    mobyutil::MB_SpawnDebrisMoby(uVar25,lVar14,0x69d,lVar23,lVar21,0,0,in_r9,&DAT_00a15d30);
    mobyutil::MB_SpawnDebrisMoby(uVar25,lVar14,0x69e,lVar23,lVar21,0,0,in_r9,&DAT_00a15d30);
    mobyfunc::DeleteMoby(moby);
    if (*(MobyInstance **)((int)pvVar9 + 0x1f8) != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar9 + 0x1f8));
    }
  }
  return;
}



//==== 0018cd14  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1302_0018cd14(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1302_0018cd14(void)

{
  DAT_0073fa14 = 0x10000;
  return;
}



//==== 0018cd58  ns=mobyupdate_helpers  size=0x794
// sig: undefined M1302_0018cd58(void)
// callers(0): 
// callees(6): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00500b64 fastfunc::FastEulerToMtx; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0
// strings: 0073fa58: '@&ff' (raw)

void mobyupdate_helpers::M1302_0018cd58(int param_1)

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
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  ulonglong *puVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  undefined4 uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong unaff_r20;
  int *piVar39;
  ulonglong unaff_r21;
  int *piVar40;
  ulonglong unaff_r22;
  int *piVar41;
  ulonglong unaff_r23;
  int *piVar42;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar43;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  ulonglong in_f14;
  ulonglong in_f15;
  ulonglong in_f16;
  double dVar51;
  ulonglong in_f17;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar52;
  ulonglong in_f28;
  double dVar53;
  ulonglong in_f29;
  double dVar54;
  ulonglong in_f30;
  double dVar55;
  double dVar56;
  ulonglong in_f31;
  double dVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  
  uVar37 = ZEXT48(&stack0x00000000);
  lVar1 = uVar37 - 0x250;
  puVar31 = (ulonglong *)lVar1;
  *puVar31 = uVar37;
  puVar31[0x4c] = in_LR;
  puVar31[0x38] = in_f14;
  puVar31[0x39] = in_f15;
  puVar31[0x3a] = in_f16;
  puVar31[0x3b] = in_f17;
  puVar31[0x3c] = in_f18;
  puVar31[0x3d] = in_f19;
  puVar31[0x3e] = in_f20;
  puVar31[0x3f] = in_f21;
  puVar31[0x40] = in_f22;
  puVar31[0x41] = in_f23;
  puVar31[0x42] = in_f24;
  puVar31[0x43] = in_f25;
  puVar31[0x44] = in_f26;
  puVar31[0x45] = in_f27;
  puVar31[0x46] = in_f28;
  puVar31[0x47] = in_f29;
  puVar31[0x48] = in_f30;
  puVar31[0x49] = in_f31;
  puVar31[0x37] = unaff_r31;
  puVar31[0x35] = unaff_r29;
  puVar31[0x36] = unaff_r30;
  *(undefined4 *)(puVar31 + 0xe) = 0;
  uVar28 = *(uint *)(param_1 + 0x78);
  *(undefined4 *)((int)puVar31 + 0x74) = 0;
  fVar2 = GameCamera.rot.radius;
  puVar31[0x28] = ZEXT48(&GameCamera);
  *(float *)(puVar31 + 0xf) = fVar2;
  puVar31[0x34] = unaff_r28;
  puVar31[0x33] = unaff_r27;
  puVar31[0x32] = unaff_r26;
  puVar31[0x31] = unaff_r25;
  puVar31[0x30] = unaff_r24;
  puVar31[0x2f] = unaff_r23;
  puVar31[0x2e] = unaff_r22;
  puVar31[0x2d] = unaff_r21;
  puVar31[0x2c] = unaff_r20;
  puVar31[0x2b] = 0;
  fastfunc::FastEulerToMtx(uVar37 - 0x1d0,uVar37 - 0x1e0);
  fVar2 = *(float *)(uVar28 + 0x1c) + 0.01;
  dVar44 = (double)fVar2;
  puVar31[0x2a] = 0x3f847ae140000000;
  *(float *)(uVar28 + 0x1c) = fVar2;
  puVar31[0x29] = 0x3ff0000000000000;
  if (1.0 < dVar44) {
    *(float *)(uVar28 + 0x1c) = (float)(dVar44 - (double)puVar31[0x29]);
  }
  uVar38 = FUN_00502f08(0,0,0,0,0,0);
  puVar31[0x24] = uVar38;
  uVar38 = stub::STUB_00502fd4_RET_0(1,0,0,0,0,0,0);
  puVar31[0x26] = uVar38;
  uVar38 = idol_draw::PackCmd(0,1,0,1,0x40);
  puVar31[0x27] = uVar38;
  uVar38 = draw::GetEffectTex(0x18);
  puVar31[0x25] = uVar38;
  piVar42 = &DAT_0073fb3c;
  piVar41 = &DAT_0073fb40;
  piVar40 = &DAT_0073fb44;
  piVar39 = &DAT_0073fb48;
  iVar43 = 0;
  do {
    iVar29 = *piVar42;
    fVar2 = *(float *)(puVar31 + 0x12);
    iVar32 = iVar29 * 0x10;
    fVar3 = *(float *)(puVar31 + 0x10);
    fVar4 = *(float *)((int)puVar31 + 0x94);
    fVar5 = *(float *)(iVar32 + 0x73fa44);
    fVar6 = *(float *)(iVar32 + 0x73fa40);
    fVar7 = *(float *)(puVar31 + 0x14);
    fVar8 = *(float *)(iVar32 + 0x73fa48);
    fVar9 = *(float *)(puVar31 + 0x13);
    fVar10 = *(float *)((int)puVar31 + 0x84);
    iVar32 = *piVar41;
    fVar11 = *(float *)(puVar31 + 0x11);
    iVar33 = iVar32 * 0x10;
    fVar12 = *(float *)((int)puVar31 + 0xa4);
    fVar13 = *(float *)(puVar31 + 0x15);
    fVar14 = *(float *)(iVar33 + 0x73fa44);
    fVar15 = *(float *)(iVar33 + 0x73fa40);
    fVar16 = *(float *)(iVar33 + 0x73fa48);
    iVar33 = *piVar40;
    iVar30 = *piVar39;
    iVar34 = iVar33 * 0x10;
    fVar17 = *(float *)(param_1 + 0x10);
    iVar35 = iVar30 * 0x10;
    fVar18 = *(float *)(iVar34 + 0x73fa40);
    fVar19 = *(float *)(iVar34 + 0x73fa44);
    fVar20 = *(float *)(iVar34 + 0x73fa48);
    fVar21 = *(float *)(iVar35 + 0x73fa40);
    fVar22 = *(float *)(iVar35 + 0x73fa44);
    fVar23 = *(float *)(iVar35 + 0x73fa48);
    fVar24 = *(float *)(param_1 + 0x14);
    fVar25 = *(float *)(param_1 + 0x18);
    *(float *)(puVar31 + 0x16) =
         (fVar7 * fVar8 + fVar3 * fVar6 + fVar2 * fVar5) * *(float *)(uVar28 + 0x24) + fVar17;
    fVar26 = *(float *)(uVar28 + 0x24);
    *(float *)(puVar31 + 0x17) = fVar25 + fVar13 * fVar8 + fVar11 * fVar6 + fVar9 * fVar5;
    *(float *)((int)puVar31 + 0xb4) =
         (fVar12 * fVar8 + fVar10 * fVar6 + fVar4 * fVar5) * fVar26 + fVar24;
    *(float *)(puVar31 + 0x18) =
         (fVar7 * fVar16 + fVar3 * fVar15 + fVar2 * fVar14) * *(float *)(uVar28 + 0x24) + fVar17;
    fVar5 = *(float *)(uVar28 + 0x24);
    *(float *)(puVar31 + 0x19) = fVar25 + fVar13 * fVar16 + fVar11 * fVar15 + fVar9 * fVar14;
    *(float *)((int)puVar31 + 0xc4) =
         (fVar12 * fVar16 + fVar10 * fVar15 + fVar4 * fVar14) * fVar5 + fVar24;
    *(float *)(puVar31 + 0x1a) =
         (fVar7 * fVar20 + fVar3 * fVar18 + fVar2 * fVar19) * *(float *)(uVar28 + 0x24) + fVar17;
    fVar5 = *(float *)(uVar28 + 0x24);
    *(float *)(puVar31 + 0x1b) = fVar25 + fVar13 * fVar20 + fVar11 * fVar18 + fVar9 * fVar19;
    *(float *)((int)puVar31 + 0xd4) =
         (fVar12 * fVar20 + fVar10 * fVar18 + fVar4 * fVar19) * fVar5 + fVar24;
    uVar27 = *(undefined4 *)(&DAT_0073fad0 + iVar29 * 8);
    fVar5 = *(float *)(&DAT_0073fad4 + iVar29 * 8);
    *(float *)(puVar31 + 0x1c) =
         (fVar7 * fVar23 + fVar3 * fVar21 + fVar2 * fVar22) * *(float *)(uVar28 + 0x24) + fVar17;
    fVar2 = *(float *)(uVar28 + 0x24);
    *(float *)(puVar31 + 0x1d) = fVar25 + fVar13 * fVar23 + fVar11 * fVar21 + fVar9 * fVar22;
    *(undefined4 *)(puVar31 + 0x20) = uVar27;
    uVar27 = *(undefined4 *)(&DAT_0073fad0 + iVar32 * 8);
    fVar3 = *(float *)(&DAT_0073fad4 + iVar32 * 8);
    *(float *)((int)puVar31 + 0xe4) =
         (fVar12 * fVar23 + fVar10 * fVar21 + fVar4 * fVar22) * fVar2 + fVar24;
    fVar2 = *(float *)(uVar28 + 0x1c);
    *(undefined4 *)(puVar31 + 0x21) = uVar27;
    uVar27 = *(undefined4 *)(&DAT_0073fad0 + iVar33 * 8);
    fVar4 = *(float *)(&DAT_0073fad4 + iVar33 * 8);
    *(float *)((int)puVar31 + 0x104) = fVar5 + fVar2;
    fVar2 = *(float *)(uVar28 + 0x1c);
    *(undefined4 *)(puVar31 + 0x22) = uVar27;
    uVar27 = *(undefined4 *)(&DAT_0073fb18 + iVar32 * 4);
    *(undefined4 *)(puVar31 + 0x1e) = *(undefined4 *)(&DAT_0073fb18 + iVar29 * 4);
    *(undefined4 *)((int)puVar31 + 0xf4) = uVar27;
    uVar27 = *(undefined4 *)(&DAT_0073fb18 + iVar30 * 4);
    *(undefined4 *)(puVar31 + 0x1f) = *(undefined4 *)(&DAT_0073fb18 + iVar33 * 4);
    *(float *)((int)puVar31 + 0x10c) = fVar3 + fVar2;
    fVar2 = *(float *)(uVar28 + 0x1c);
    *(undefined4 *)((int)puVar31 + 0xfc) = uVar27;
    fVar3 = *(float *)(&DAT_0073fad4 + iVar30 * 8);
    *(undefined4 *)(puVar31 + 0x23) = *(undefined4 *)(&DAT_0073fad0 + iVar30 * 8);
    uVar27 = EffectTexHeaders;
    *(float *)((int)puVar31 + 0x114) = fVar4 + fVar2;
    *(float *)((int)puVar31 + 0x11c) = fVar3 + *(float *)(uVar28 + 0x1c);
    draw::FastDrawQuad(uVar37 - 0x1a0,0,1,uVar27,9);
    iVar43 = iVar43 + 1;
    piVar42 = piVar42 + 4;
    piVar41 = piVar41 + 4;
    piVar40 = piVar40 + 4;
    piVar39 = piVar39 + 4;
  } while (iVar43 < 4);
  uVar38 = draw::GetEffectTex(0x1b);
  fVar2 = (float)((double)*(float *)(uVar28 + 0x20) + (double)puVar31[0x2a]);
  dVar51 = (double)fVar2;
  dVar45 = (double)puVar31[0x29];
  puVar31[0x25] = uVar38;
  fVar3 = *(float *)(uVar28 + 0x24);
  *(float *)(uVar28 + 0x20) = fVar2;
  dVar44 = dVar51;
  if (dVar45 < dVar51) {
    *(undefined4 *)(uVar28 + 0x20) = 0;
    dVar51 = (double)puVar31[0x2b];
    dVar44 = (double)*(float *)(uVar28 + 0x20);
  }
  dVar57 = (double)(float)(dVar44 * 1.399999976158142 + 1.100000023841858);
  uVar27 = *(undefined4 *)((int)puVar31[0x28] + 0x158);
  dVar55 = (double)((float)(dVar51 * -1.2000000476837158) * fVar3);
  dVar53 = (double)((float)(dVar44 * -1.2000000476837158) * fVar3);
  *(undefined4 *)(puVar31 + 0xe) = 0;
  *(undefined4 *)((int)puVar31 + 0x74) = 0;
  dVar54 = (double)((float)(dVar44 * 1.2000000476837158) * fVar3);
  *(undefined4 *)(puVar31 + 0xf) = uVar27;
  dVar52 = (double)(float)(dVar57 - 0.20000000298023224);
  fastfunc::FastEulerToMtx(uVar37 - 0x1d0,uVar37 - 0x1e0);
  dVar45 = (double)*(float *)(puVar31 + 0x12);
  dVar51 = (double)*(float *)((int)puVar31 + 0x94);
  dVar46 = (double)*(float *)(puVar31 + 0x13);
  dVar47 = (double)*(float *)(puVar31 + 0x10);
  dVar48 = (double)*(float *)((int)puVar31 + 0x84);
  dVar49 = (double)*(float *)(puVar31 + 0x11);
  dVar50 = (double)*(float *)(puVar31 + 0x14);
  dVar44 = (double)*(float *)((int)puVar31 + 0xa4);
  dVar56 = (double)*(float *)(puVar31 + 0x15);
  fVar2 = *(float *)(param_1 + 0x10);
  fVar3 = *(float *)(param_1 + 0x14);
  fVar4 = *(float *)(param_1 + 0x18);
  *(float *)(puVar31 + 0x16) =
       fVar2 + (float)(dVar50 * dVar57 +
                      (double)(float)(dVar47 * dVar55 + (double)(float)(dVar45 * dVar55)));
  *(float *)((int)puVar31 + 0xb4) =
       fVar3 + (float)(dVar44 * dVar57 +
                      (double)(float)(dVar48 * dVar55 + (double)(float)(dVar51 * dVar55)));
  *(float *)(puVar31 + 0x17) =
       fVar4 + (float)(dVar56 * dVar57 +
                      (double)(float)(dVar49 * dVar55 + (double)(float)(dVar46 * dVar55)));
  *(float *)(puVar31 + 0x18) =
       fVar2 + (float)(dVar50 * dVar52 +
                      (double)(float)(dVar47 * dVar54 + (double)(float)(dVar45 * dVar53)));
  *(float *)((int)puVar31 + 0xc4) =
       fVar3 + (float)(dVar44 * dVar52 +
                      (double)(float)(dVar48 * dVar54 + (double)(float)(dVar51 * dVar53)));
  *(float *)(puVar31 + 0x19) =
       fVar4 + (float)(dVar56 * dVar52 +
                      (double)(float)(dVar49 * dVar54 + (double)(float)(dVar46 * dVar53)));
  *(float *)(puVar31 + 0x1a) =
       fVar2 + (float)(dVar50 * dVar57 +
                      (double)(float)(dVar47 * dVar53 + (double)(float)(dVar45 * dVar54)));
  *(float *)((int)puVar31 + 0xd4) =
       fVar3 + (float)(dVar44 * dVar57 +
                      (double)(float)(dVar48 * dVar53 + (double)(float)(dVar51 * dVar54)));
  *(float *)(puVar31 + 0x1b) =
       fVar4 + (float)(dVar56 * dVar57 +
                      (double)(float)(dVar49 * dVar53 + (double)(float)(dVar46 * dVar54)));
  *(float *)(puVar31 + 0x1c) =
       fVar2 + (float)(dVar50 * dVar52 +
                      (double)(float)(dVar47 * dVar54 + (double)(float)(dVar45 * dVar54)));
  *(float *)((int)puVar31 + 0xe4) =
       fVar3 + (float)(dVar44 * dVar52 +
                      (double)(float)(dVar48 * dVar54 + (double)(float)(dVar51 * dVar54)));
  *(float *)(puVar31 + 0x1d) =
       fVar4 + (float)(dVar56 * dVar52 +
                      (double)(float)(dVar49 * dVar54 + (double)(float)(dVar46 * dVar54)));
  uVar36 = EffectTexHeaders;
  auVar58 = loadVectorLeftIndexed(0x20,(ulonglong)uVar28);
  auVar59 = loadVectorRightIndexed(0x30,(ulonglong)uVar28);
  auVar60 = loadVectorLeftIndexed(8,0x18cd28);
  auVar60 = auVar60 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar61 = loadVectorLeftIndexed(0x20,0x18cd28);
  auVar59 = vectorSubtractFloatingPoint
                      (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60,
                       auVar58 | auVar59);
  auVar58 = auVar61 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar60 = ZEXT416(0xffffffff);
  auVar60 = auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60;
  auVar62 = loadVectorLeftIndexed(0x24,0x18cd28);
  auVar61 = vectorShiftLeftIntegerWord(auVar60,auVar60);
  auVar60 = auVar62 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar63 = auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60;
  auVar60 = loadVectorLeftIndexed(0x28,0x18cd28);
  auVar59 = vectorMultiplyAddFloatingPoint
                      (auVar59,auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60,auVar61
                      );
  auVar58 = auVar60 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar60 = ZEXT416(0xfffffff0);
  auVar61 = auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60;
  auVar60 = ZEXT416(0);
  auVar62 = vectorRotateLeftIntegerWord(auVar63,auVar61);
  auVar59 = vectorConvertToSignedFixedPointWordSaturate(auVar59,0);
  auVar62 = vectorMultiplySumSignedHalfWordModulo
                      (auVar59,auVar62,auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60
                      );
  auVar60 = vectorMultiplyOddUnsignedHalfWord(auVar59,auVar63);
  auVar61 = vectorShiftLeftIntegerWord(auVar62,auVar61);
  auVar59._0_4_ = auVar61._0_4_ + auVar60._0_4_;
  auVar59._8_8_ = auVar60._8_8_;
  auVar59._4_4_ = auVar61._4_4_ + auVar60._4_4_;
  auVar60._0_8_ = 0;
  auVar60._8_8_ = auVar59._0_8_;
  auVar60 = (auVar60 << 0x40 | auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >>
            0x60 & (undefined1  [16])0xffffffff;
  auVar60 = auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60;
  uVar27 = storeVectorElementWordIndexed(auVar60,0xf0,lVar1);
  *(undefined4 *)(puVar31 + 0x1e) = uVar27;
  uVar27 = storeVectorElementWordIndexed(auVar60,0xf4,lVar1);
  *(undefined4 *)((int)puVar31 + 0xf4) = uVar27;
  uVar27 = storeVectorElementWordIndexed(auVar60,0xf8,lVar1);
  *(undefined4 *)(puVar31 + 0x1f) = uVar27;
  uVar27 = storeVectorElementWordIndexed(auVar60,0xfc,lVar1);
  *(undefined4 *)((int)puVar31 + 0xfc) = uVar27;
  *(undefined4 *)(puVar31 + 0x20) = 0;
  *(undefined4 *)((int)puVar31 + 0x104) = 0;
  *(undefined4 *)(puVar31 + 0x21) = 0x3f800000;
  *(undefined4 *)((int)puVar31 + 0x10c) = 0;
  *(undefined4 *)(puVar31 + 0x22) = 0;
  *(undefined4 *)((int)puVar31 + 0x114) = 0x3f800000;
  *(undefined4 *)(puVar31 + 0x23) = 0x3f800000;
  *(undefined4 *)((int)puVar31 + 0x11c) = 0x3f800000;
  draw::FastDrawQuad(uVar37 - 0x1a0,0,1,uVar36,9);
  return;
}



//==== 0018d4ec  ns=mobyupdate_helpers  size=0xd0
// sig: undefined M1302_0018d4ec(void)
// callers(1): 0018d608 mobyupdate_unsorted::UpdateMoby_{1024_1302}
// callees(3): 000f1e50 mobyfunc::SetLevelFlag; 0015d12c sound::PlayMobySound; 0015d204 sound::sound_MobyPlay_oClass

uint mobyupdate_helpers::M1302_0018d4ec(int param_1,MobyInstance *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  MOBY_OCLASSES MVar3;
  uint uVar4;
  
  MVar3 = param_2->oClass;
  bVar1 = param_2->state;
  uVar4 = (uint)bVar1;
  if (MVar3 == GUN_0542) {
    param_2->state = '\x02';
    sound::sound_MobyPlay_oClass(0,0,param_2,0x434);
    uVar2 = *(undefined1 *)(param_1 + 0xb0);
    param_2->updateDistance = -1;
    uVar4 = mobyfunc::SetLevelFlag(uVar2);
    return uVar4;
  }
  if (MVar3 != DOOR_0502) {
    if (MVar3 == PLATFORM_0404) {
      if (bVar1 != 1) {
        return uVar4;
      }
      param_2->state = '\x02';
      return 2;
    }
    if (MVar3 != DOOR_03F7) {
      return uVar4;
    }
  }
  if (bVar1 == 2) {
    param_2->state = '\x03';
    uVar4 = sound::PlayMobySound(0,0,param_2);
  }
  return uVar4;
}



//==== 0018d608  ns=mobyupdate_unsorted  size=0x9ec
// sig: undefined UpdateMoby_{1024_1302}(MobyInstance * moby)
// callers(0): 
// callees(8): 0006d7e0 draw::RegisterPostDraw; 000fcc68 mobyutil::MB_randRot; 0012d0e8 partupd::SpawnPart_41; 0018d4ec mobyupdate_helpers::M1302_0018d4ec; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor; 00502b08 fastfunc::FastVecAddSelf
// strings: 0096c074: 'None'

/* Moby 1024
   Moby 1302 */

void mobyupdate_unsorted::UpdateMoby__1024_1302_(MobyInstance *moby)

{
  float fVar1;
  byte bVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 in_r7;
  int iVar11;
  int *piVar12;
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
  float local_100;
  float local_fc;
  float local_f8;
  f32 local_f4;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  float local_c0;
  float local_bc;
  undefined4 local_b8;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  
  piVar12 = (int *)moby->pVar;
  if (*piVar12 != -1) {
    dVar18 = 360.0;
    dVar19 = 0.01745329238474369;
    dVar13 = (double)fastfunc::FastWrapRot
                               ((float)piVar12[10],
                                (360.0 / DAT_0073fb88) * 0.017453292 * mobyutil::g_FrameTime);
    dVar20 = 1.570796251296997;
    dVar21 = 3.141592502593994;
    fVar1 = (float)(dVar13 + 1.570796251296997);
    dVar22 = -3.141592502593994;
    dVar23 = -0.16666656732559204;
    dVar24 = 0.008333025500178337;
    dVar25 = -0.0001980741071747616;
    dVar26 = 2.601886990305502e-06;
    fVar4 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar4 = fVar1;
    }
    fVar5 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
      fVar5 = fVar4;
    }
    dVar27 = 0.5;
    piVar12[10] = (int)(float)dVar13;
    fVar6 = fVar5 * fVar5;
    fVar1 = fVar6 * fVar6 * fVar5;
    fVar4 = fVar6 * fVar1;
    uVar8 = fastfunc::FastLerpColor
                      ((double)((fVar6 * fVar4 * 2.601887e-06 +
                                 fVar4 * -0.0001980741 +
                                 fVar1 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5 + 1.0) *
                               0.5),0xffffffff80464646,0xffffffff80828282);
    moby->field60_0x90 = uVar8;
    bVar2 = moby->state;
    if (bVar2 == 0) {
      piVar12[5] = piVar12[4];
      dVar13 = (double)mobyutil::MB_randRot();
      piVar12[6] = (int)(float)dVar13;
      dVar13 = (double)mobyutil::MB_randRot();
      piVar12[10] = (int)(float)dVar13;
      moby->state = '\x01';
      piVar12[9] = (int)DAT_0073fb90;
    }
    else if (bVar2 < 2) {
      local_100 = (moby->pos).x;
      local_fc = (moby->pos).y;
      local_f8 = (moby->pos).z;
      fVar1 = GameCamera.posZ - local_f8;
      local_f4 = (moby->pos).w;
      local_f8 = local_f8 + 2.75;
      fVar1 = SQRT(fVar1 * fVar1 +
                   (GameCamera.posX - local_100) * (GameCamera.posX - local_100) +
                   (GameCamera.posY - local_fc) * (GameCamera.posY - local_fc));
      if (32.0 <= fVar1) {
        fVar4 = (float)piVar12[9];
        if (36.0 < fVar1) {
          fVar4 = -(mobyutil::g_FrameTime * 2.0 - (float)piVar12[9]);
          piVar12[9] = (int)fVar4;
          if (fVar4 < 0.0) {
            piVar12[9] = 0;
            fVar4 = 0.0;
          }
        }
      }
      else {
        fVar4 = mobyutil::g_FrameTime * 2.0 + (float)piVar12[9];
        piVar12[9] = (int)fVar4;
        fVar1 = DAT_0073fb90;
        if (DAT_0073fb90 < fVar4) {
          piVar12[9] = (int)DAT_0073fb90;
          fVar4 = fVar1;
        }
      }
      if (0.0 < fVar4) {
        draw::RegisterPostDraw(&PTR_M1302_0018cd58_00708478,moby);
        dVar13 = (double)fastfunc::FastWrapRot
                                   ((float)piVar12[6],
                                    (float)((double)(float)(dVar18 / (double)DAT_0073fb84) * dVar19)
                                    * mobyutil::g_FrameTime);
        dVar18 = (double)(float)(dVar13 + dVar20);
        piVar12[6] = (int)(float)dVar13;
        dVar13 = (double)(float)(dVar21 - dVar18);
        if (dVar18 - (double)(float)(dVar21 - dVar18) < 0.0) {
          dVar13 = dVar18;
        }
        dVar19 = (double)(float)(dVar22 - dVar18);
        if ((double)(float)(dVar22 - dVar18) - dVar13 < 0.0) {
          dVar19 = dVar13;
        }
        dVar13 = (double)(float)(dVar19 * dVar19);
        dVar16 = (double)(float)(dVar13 * (double)(float)(dVar13 * dVar19));
        dVar18 = (double)(float)(dVar13 * dVar16);
        local_f8 = DAT_0073fb80 *
                   (float)((double)(float)(dVar13 * dVar18) * dVar26 +
                          (double)(float)(dVar18 * dVar25 +
                                         (double)(float)(dVar16 * dVar24 +
                                                        (double)(float)((double)(float)(dVar13 * 
                                                  dVar19) * dVar23 + dVar19)))) + local_f8;
        dVar18 = (double)(float)((double)(float)piVar12[10] + dVar20);
        dVar13 = (double)(float)(dVar21 - dVar18);
        if (dVar18 - (double)(float)(dVar21 - dVar18) < 0.0) {
          dVar13 = dVar18;
        }
        dVar19 = (double)(float)(dVar22 - dVar18);
        if ((double)(float)(dVar22 - dVar18) - dVar13 < 0.0) {
          dVar19 = dVar13;
        }
        dVar13 = (double)(float)(dVar19 * dVar19);
        dVar16 = (double)(float)(dVar13 * (double)(float)(dVar13 * dVar19));
        dVar18 = (double)(float)(dVar13 * dVar16);
        uVar8 = fastfunc::FastDoubleToInt
                          ((double)(DAT_0073fb8c *
                                   (float)((double)(float)(dVar13 * dVar18) * dVar26 +
                                          (double)(float)(dVar18 * dVar25 +
                                                         (double)(float)(dVar16 * dVar24 +
                                                                        (double)(float)((double)(
                                                  float)(dVar13 * dVar19) * dVar23 + dVar19))))));
        uVar9 = (longlong)(int)uVar8 / 3 + ((longlong)(int)uVar8 >> 0x3f) & 0xffffffff;
        uVar8 = (int)(((longlong)((int)uVar8 >> 1) + (ulonglong)((int)uVar8 < 0 && (uVar8 & 1) != 0)
                      & 0xffffffff) << 8) + 0x7800U | uVar8 + 0x96 |
                (int)((uVar9 - ((longlong)(uVar9 << 0x20) >> 0x3f) & 0xffffffff) << 0x10) + 0xd0000U
                | 0x20000000;
        if (g_heroType == '\x01') {
          if (piVar12[5] < 10) {
            partupd::SpawnPart_41
                      ((float)dVar27,&local_100,moby,piVar12[5] + 2,uVar8,in_r7,0x7f,4,0xff);
          }
          else {
            dVar13 = 1.5707963705062866;
            dVar18 = -0.4000000059604645;
            dVar19 = 0.15000000596046448;
            if (Cheats[4] == '\0') {
              dVar16 = (double)fastfunc::FastWrapRot((moby->rotation).z,1.5707964);
              dVar14 = (double)(float)(dVar16 + dVar20);
              dVar16 = (double)(float)(dVar21 - dVar14);
              if (dVar14 - (double)(float)(dVar21 - dVar14) < 0.0) {
                dVar16 = dVar14;
              }
              dVar15 = (double)(float)(dVar22 - dVar14);
              if ((double)(float)(dVar22 - dVar14) - dVar16 < 0.0) {
                dVar15 = dVar16;
              }
              dVar16 = (double)(float)(dVar15 * dVar15);
              dVar14 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar15));
              dVar17 = (double)(float)(dVar16 * dVar14);
              local_c0 = (float)((double)(float)((double)(float)(dVar16 * dVar17) * dVar26 +
                                                (double)(float)(dVar17 * dVar25 +
                                                               (double)(float)(dVar14 * dVar24 +
                                                                              (double)(float)((
                                                  double)(float)(dVar16 * dVar15) * dVar23 + dVar15)
                                                  ))) * dVar18);
              dVar14 = (double)fastfunc::FastWrapRot((moby->rotation).z,(float)dVar13);
              local_b8 = 0;
              dVar16 = (double)(float)(dVar21 - dVar14);
              if (dVar14 - (double)(float)(dVar21 - dVar14) < 0.0) {
                dVar16 = dVar14;
              }
              dVar15 = (double)(float)(dVar22 - dVar14);
              if ((double)(float)(dVar22 - dVar14) - dVar16 < 0.0) {
                dVar15 = dVar16;
              }
              dVar16 = (double)(float)(dVar15 * dVar15);
              dVar17 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar15));
              dVar14 = (double)(float)(dVar16 * dVar17);
              local_bc = (float)((double)(float)((double)(float)(dVar16 * dVar14) * dVar26 +
                                                (double)(float)(dVar14 * dVar25 +
                                                               (double)(float)(dVar17 * dVar24 +
                                                                              (double)(float)((
                                                  double)(float)(dVar16 * dVar15) * dVar23 + dVar15)
                                                  ))) * dVar18);
              fastfunc::FastVecAddSelf(auStack_b0,&local_c0,&local_100);
              partupd::SpawnPart_41
                        ((float)dVar27,&local_c0,moby,piVar12[5] / 10 + 2,uVar8,in_r7,0x7f,4,0xff);
              dVar18 = (double)fastfunc::FastWrapRot((moby->rotation).z,(float)dVar13);
              dVar20 = (double)(float)(dVar18 + dVar20);
              dVar18 = (double)(float)(dVar21 - dVar20);
              if (dVar20 - (double)(float)(dVar21 - dVar20) < 0.0) {
                dVar18 = dVar20;
              }
              dVar16 = (double)(float)(dVar22 - dVar20);
              if ((double)(float)(dVar22 - dVar20) - dVar18 < 0.0) {
                dVar16 = dVar18;
              }
              dVar18 = (double)(float)(dVar16 * dVar16);
              dVar20 = (double)(float)(dVar18 * (double)(float)(dVar18 * dVar16));
              dVar14 = (double)(float)(dVar18 * dVar20);
              local_c0 = (float)((double)(float)((double)(float)(dVar18 * dVar14) * dVar26 +
                                                (double)(float)(dVar14 * dVar25 +
                                                               (double)(float)(dVar20 * dVar24 +
                                                                              (double)(float)((
                                                  double)(float)(dVar18 * dVar16) * dVar23 + dVar16)
                                                  ))) * dVar19);
              dVar18 = (double)fastfunc::FastWrapRot((moby->rotation).z,(float)dVar13);
              local_b8 = 0;
              dVar13 = (double)(float)(dVar21 - dVar18);
              if (dVar18 - (double)(float)(dVar21 - dVar18) < 0.0) {
                dVar13 = dVar18;
              }
              dVar20 = (double)(float)(dVar22 - dVar18);
              if ((double)(float)(dVar22 - dVar18) - dVar13 < 0.0) {
                dVar20 = dVar13;
              }
              dVar13 = (double)(float)(dVar20 * dVar20);
              dVar21 = (double)(float)(dVar13 * (double)(float)(dVar13 * dVar20));
              dVar18 = (double)(float)(dVar13 * dVar21);
              local_bc = (float)((double)(float)((double)(float)(dVar13 * dVar18) * dVar26 +
                                                (double)(float)(dVar18 * dVar25 +
                                                               (double)(float)(dVar21 * dVar24 +
                                                                              (double)(float)((
                                                  double)(float)(dVar13 * dVar20) * dVar23 + dVar20)
                                                  ))) * dVar19);
              fastfunc::FastVecAddSelf(auStack_a0,&local_c0,&local_100);
              uVar3 = piVar12[5];
              lVar10 = (longlong)((int)uVar3 / 10 + ((int)uVar3 >> 0x1f)) +
                       (ulonglong)(uVar3 >> 0x1f);
              lVar7 = lVar10 * 9;
              partupd::SpawnPart_41
                        ((float)dVar27,&local_c0,moby,(uVar3 - ((int)lVar10 + (int)lVar7)) + 2,uVar8
                         ,lVar7,0x7f,4,0xff);
            }
            else {
              dVar16 = (double)fastfunc::FastWrapRot((moby->rotation).z,1.5707964);
              dVar14 = (double)(float)(dVar16 + dVar20);
              dVar16 = (double)(float)(dVar21 - dVar14);
              if (dVar14 - (double)(float)(dVar21 - dVar14) < 0.0) {
                dVar16 = dVar14;
              }
              dVar15 = (double)(float)(dVar22 - dVar14);
              if ((double)(float)(dVar22 - dVar14) - dVar16 < 0.0) {
                dVar15 = dVar16;
              }
              dVar16 = (double)(float)(dVar15 * dVar15);
              dVar14 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar15));
              dVar17 = (double)(float)(dVar16 * dVar14);
              local_f0 = (float)((double)(float)((double)(float)(dVar16 * dVar17) * dVar26 +
                                                (double)(float)(dVar17 * dVar25 +
                                                               (double)(float)(dVar14 * dVar24 +
                                                                              (double)(float)((
                                                  double)(float)(dVar16 * dVar15) * dVar23 + dVar15)
                                                  ))) * dVar19);
              dVar14 = (double)fastfunc::FastWrapRot((moby->rotation).z,(float)dVar13);
              local_e8 = 0;
              dVar16 = (double)(float)(dVar21 - dVar14);
              if (dVar14 - (double)(float)(dVar21 - dVar14) < 0.0) {
                dVar16 = dVar14;
              }
              dVar15 = (double)(float)(dVar22 - dVar14);
              if ((double)(float)(dVar22 - dVar14) - dVar16 < 0.0) {
                dVar15 = dVar16;
              }
              dVar16 = (double)(float)(dVar15 * dVar15);
              dVar17 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar15));
              dVar14 = (double)(float)(dVar16 * dVar17);
              local_ec = (float)((double)(float)((double)(float)(dVar16 * dVar14) * dVar26 +
                                                (double)(float)(dVar14 * dVar25 +
                                                               (double)(float)(dVar17 * dVar24 +
                                                                              (double)(float)((
                                                  double)(float)(dVar16 * dVar15) * dVar23 + dVar15)
                                                  ))) * dVar19);
              fastfunc::FastVecAddSelf(auStack_e0,&local_f0,&local_100);
              partupd::SpawnPart_41
                        ((float)dVar27,&local_f0,moby,piVar12[5] / 10 + 2,uVar8,in_r7,0x7f,4,0xff);
              dVar19 = (double)fastfunc::FastWrapRot((moby->rotation).z,(float)dVar13);
              dVar20 = (double)(float)(dVar19 + dVar20);
              dVar19 = (double)(float)(dVar21 - dVar20);
              if (dVar20 - (double)(float)(dVar21 - dVar20) < 0.0) {
                dVar19 = dVar20;
              }
              dVar16 = (double)(float)(dVar22 - dVar20);
              if ((double)(float)(dVar22 - dVar20) - dVar19 < 0.0) {
                dVar16 = dVar19;
              }
              dVar19 = (double)(float)(dVar16 * dVar16);
              dVar20 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar16));
              dVar14 = (double)(float)(dVar19 * dVar20);
              local_f0 = (float)((double)(float)((double)(float)(dVar19 * dVar14) * dVar26 +
                                                (double)(float)(dVar14 * dVar25 +
                                                               (double)(float)(dVar20 * dVar24 +
                                                                              (double)(float)((
                                                  double)(float)(dVar19 * dVar16) * dVar23 + dVar16)
                                                  ))) * dVar18);
              dVar19 = (double)fastfunc::FastWrapRot((moby->rotation).z,(float)dVar13);
              local_e8 = 0;
              dVar13 = (double)(float)(dVar21 - dVar19);
              if (dVar19 - (double)(float)(dVar21 - dVar19) < 0.0) {
                dVar13 = dVar19;
              }
              dVar20 = (double)(float)(dVar22 - dVar19);
              if ((double)(float)(dVar22 - dVar19) - dVar13 < 0.0) {
                dVar20 = dVar13;
              }
              dVar13 = (double)(float)(dVar20 * dVar20);
              dVar21 = (double)(float)(dVar13 * (double)(float)(dVar13 * dVar20));
              dVar19 = (double)(float)(dVar13 * dVar21);
              local_ec = (float)((double)(float)((double)(float)(dVar13 * dVar19) * dVar26 +
                                                (double)(float)(dVar19 * dVar25 +
                                                               (double)(float)(dVar21 * dVar24 +
                                                                              (double)(float)((
                                                  double)(float)(dVar13 * dVar20) * dVar23 + dVar20)
                                                  ))) * dVar18);
              fastfunc::FastVecAddSelf(auStack_d0,&local_f0,&local_100);
              uVar3 = piVar12[5];
              lVar10 = (longlong)((int)uVar3 / 10 + ((int)uVar3 >> 0x1f)) +
                       (ulonglong)(uVar3 >> 0x1f);
              lVar7 = lVar10 * 9;
              partupd::SpawnPart_41
                        ((float)dVar27,&local_f0,moby,(uVar3 - ((int)lVar10 + (int)lVar7)) + 2,uVar8
                         ,lVar7,0x7f,4,0xff);
            }
          }
        }
      }
      if ((piVar12[5] < 1) || (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1)) {
        iVar11 = 0;
        do {
          if (*piVar12 != -1) {
            mobyupdate_helpers::M1302_0018d4ec(moby,MobyInstance + *piVar12);
          }
          iVar11 = iVar11 + 1;
          piVar12 = piVar12 + 1;
        } while (iVar11 < 4);
        moby->state = '\x02';
      }
    }
    else if (bVar2 < 3) {
      fVar1 = -(mobyutil::g_FrameTime * 2.0 - (float)piVar12[9]);
      piVar12[9] = (int)fVar1;
      if (fVar1 < 0.0) {
        piVar12[9] = 0;
        fVar1 = 0.0;
      }
      if (0.0 < fVar1) {
        draw::RegisterPostDraw(&PTR_M1302_0018cd58_00708478,moby);
      }
    }
  }
  return;
}



//==== 0018dff4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1302_0018dff4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1302_0018dff4(void)

{
  DAT_0073fbe0 = 0x10000;
  return;
}



//==== 0018e048  ns=mobyupdate_helpers  size=0x940
// sig: undefined M1027_0018e048(void)
// callers(1): 0018e9f8 mobyupdate_unsorted::UpdateMoby_1027
// callees(12): 000fcbe8 mobyutil::MB_randRangeFloat; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 00104298 mobyutil::MB_SetGroupField; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00111ba0 mobyutil::MB_getTargetInArea; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M1027_0018e048(MobyInstance *param_1)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  Spline *pSVar7;
  ulonglong *puVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  longlong lVar11;
  longlong lVar12;
  float *pfVar17;
  longlong lVar16;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar20;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f31;
  double dVar25;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0x120;
  puVar8 = (ulonglong *)lVar12;
  *puVar8 = uVar10;
  puVar8[0x26] = in_LR;
  puVar8[0x23] = in_f31;
  puVar8[0x22] = unaff_r31;
  uVar1 = param_1->state;
  puVar8[0x21] = unaff_r30;
  pvVar6 = param_1->pVar;
  uVar20 = ZEXT48(pvVar6);
  puVar8[0x20] = unaff_r29;
  puVar8[0x1f] = unaff_r28;
  puVar8[0x1e] = unaff_r27;
  if (uVar1 != '\0') {
    param_1->scale = param_1->pClass->gScale * DAT_0073fc24;
    iVar13 = fastfunc::FastDecTimerS32(uVar20 + 0x184);
    fVar5 = animationSpeed;
    if (iVar13 == 2) {
      param_1->state = '\a';
    }
    else {
      iVar13 = *(int *)((int)pvVar6 + 0x184);
      puVar8[0x1b] = (longlong)(int)(animationSpeed * 10.5);
      if (((((iVar13 == *(int *)((int)puVar8 + 0xdc)) ||
            (puVar8[0x1b] = (longlong)(int)(fVar5 * 20.5), iVar13 == *(int *)((int)puVar8 + 0xdc)))
           || (puVar8[0x1b] = (longlong)(int)(fVar5 * 40.5), iVar13 == *(int *)((int)puVar8 + 0xdc))
           ) || ((puVar8[0x1b] = (longlong)(int)(fVar5 * 60.5),
                 iVar13 == *(int *)((int)puVar8 + 0xdc) ||
                 (puVar8[0x1b] = (longlong)(int)(fVar5 * 120.5),
                 iVar13 == *(int *)((int)puVar8 + 0xdc))))) ||
         (puVar8[0x1b] = (longlong)(int)(fVar5 * 179.5), iVar13 == *(int *)((int)puVar8 + 0xdc))) {
        *(undefined1 *)((int)pvVar6 + 0x67) = 0xf0;
        mobyutil::MB_UpdateLightsTransition(param_1,uVar20 + 0x60);
      }
      dVar25 = 0.0;
      *(undefined4 *)((int)puVar8 + 0x74) = 0;
      iVar13 = mobyutil::MB_damage(param_1,0x330000,0);
      iVar14 = mobyutil::MB_HandleDamage
                         (param_1,iVar13,uVar20 + 0x20,0,puVar8 + 0xe,(int)puVar8 + 0x74,0,4);
      if ((*(int *)(puVar8 + 0xe) != 1) && (param_1->state != '\x06')) {
        fVar5 = *(float *)((int)pvVar6 + 0x20) - *(float *)((int)puVar8 + 0x74);
        *(float *)((int)pvVar6 + 0x20) = fVar5;
        if ((double)fVar5 <= dVar25) {
          iVar14 = 1;
        }
        uVar15 = fastfunc::FastDoubleToInt(0x4080000000000000);
        *(undefined4 *)((int)pvVar6 + 0x98) = 0;
        fVar2 = DAT_0073fc10;
        fVar5 = DAT_0071f418;
        *(undefined4 *)((int)pvVar6 + 0x90) = uVar15;
        *(float *)((int)pvVar6 + 0x80) = fVar2 * fVar5;
        *(undefined1 *)((int)pvVar6 + 0xad) = 0;
        *(undefined4 *)((int)pvVar6 + 0x94) = 1;
        *(float *)((int)pvVar6 + 0x84) = fVar5 * 30.0;
        fVar2 = DAT_0073fc18;
        fVar5 = mobyutil::g_FrameTime;
        if (iVar14 < 3) {
          if ((-1 < iVar14) && (0 < iVar14)) {
            fVar5 = DAT_0073fc10 * DAT_0071f418;
            param_1->modeBits =
                 param_1->modeBits &
                 (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
            *(float *)((int)pvVar6 + 0x80) = fVar5;
            fVar5 = mobyutil::g_FrameTime;
            *(float *)((int)pvVar6 + 0x88) = DAT_0073fc20 * mobyutil::g_FrameTime;
            fVar2 = DAT_0073fc1c;
            *(undefined4 *)((int)pvVar6 + 0xc0) = 0x41600000;
            *(undefined4 *)((int)pvVar6 + 0xc4) = 0x41e00000;
            *(float *)((int)pvVar6 + 0x8c) = fVar2 * fVar5;
            fVar5 = (param_1->pos).x - *(float *)(*(int *)(iVar13 + 0x20) + 0x10);
            fVar2 = (param_1->pos).y - *(float *)(*(int *)(iVar13 + 0x20) + 0x14);
            dVar22 = ABS((double)fVar5);
            dVar23 = ABS((double)fVar2);
            *(float *)(puVar8 + 0x10) = fVar5;
            *(float *)((int)puVar8 + 0x84) = fVar2;
            *(float *)(puVar8 + 0x11) = (float)(dVar22 - dVar23);
            uVar18 = (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)(puVar8 + 0x11) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1d) & 4;
            dVar24 = ABS((double)*(float *)(puVar8 + 0x10));
            if ((double)*(float *)(puVar8 + 0x11) - dVar25 < 0.0) {
              dVar24 = dVar23;
            }
            fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
            dVar23 = ABS((double)*(float *)((int)puVar8 + 0x84));
            if ((double)*(float *)(puVar8 + 0x11) - dVar25 < 0.0) {
              dVar23 = dVar22;
            }
            fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
            if (dVar25 < dVar24) {
              lVar11 = uVar10 - 0x110;
              lVar19 = uVar10 - 0x78;
              lVar16 = uVar10 - 0x88;
              lVar21 = 2;
              fVar3 = (float)(dVar23 - dVar24) / (float)(dVar23 + dVar24);
              fVar4 = fVar3 * fVar3;
              *(float *)((int)puVar8 + 0xa4) = fVar3;
              *(float *)((int)puVar8 + 0x9c) = fVar3;
              *(float *)(puVar8 + 0x14) = fVar3;
              *(float *)(puVar8 + 0x13) = fVar3;
              fVar3 = fVar4 * fVar4;
              *(float *)((int)puVar8 + 0x9c) = *(float *)((int)puVar8 + 0x9c) * fVar4;
              *(float *)(puVar8 + 0x14) = *(float *)(puVar8 + 0x14) * fVar3;
              *(float *)((int)puVar8 + 0xa4) = *(float *)((int)puVar8 + 0xa4) * fVar3 * fVar4;
              do {
                *(float *)((int)lVar11 + 0x98) = *(float *)((int)lVar11 + 0x88) * fVar3 * fVar3;
                iVar14 = (int)lVar16;
                lVar16 = lVar16 + 8;
                lVar11 = lVar11 + 8;
                *(float *)((int)lVar19 + 4) = *(float *)(iVar14 + 4) * fVar3 * fVar3;
                lVar19 = lVar19 + 8;
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
              lVar21 = 4;
              lVar19 = uVar10 - 0x88;
              pfVar17 = (float *)&DAT_007358e0;
              lVar11 = lVar12;
              lVar16 = lVar19;
              do {
                fVar3 = *pfVar17;
                fVar4 = pfVar17[1];
                pfVar17 = pfVar17 + 2;
                *(float *)((int)lVar11 + 0x98) = *(float *)((int)lVar11 + 0x98) * fVar3;
                lVar11 = lVar11 + 8;
                *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
                lVar16 = lVar16 + 8;
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
              lVar11 = 2;
              do {
                iVar14 = (int)lVar12;
                iVar9 = (int)lVar19;
                lVar12 = lVar12 + 0x10;
                lVar19 = lVar19 + 0x10;
                dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar14 + 0x98)) +
                                  *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                                 *(float *)(iVar9 + 0xc));
                lVar11 = lVar11 + -1;
              } while (lVar11 != 0);
              dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar5 + fVar2);
            }
            *(float *)((int)puVar8 + 0x7c) = (float)dVar25;
            uVar15 = *(undefined4 *)(iVar13 + 0x18);
            *(undefined4 *)(puVar8 + 6) = *(undefined4 *)(iVar13 + 0x10);
            *(undefined4 *)(puVar8 + 7) = uVar15;
            uVar15 = *(undefined4 *)(iVar13 + 0x1c);
            *(undefined4 *)((int)puVar8 + 0x34) = *(undefined4 *)(iVar13 + 0x14);
            *(undefined4 *)((int)puVar8 + 0x3c) = uVar15;
            mobyutil::MB_VecAtan2Angles
                      (puVar8[6],puVar8[7],uVar10 - 0xa4,uVar20 + 0x88,uVar20 + 0x8c);
            mobyutil::MB_StartKick((double)*(float *)((int)puVar8 + 0x7c),param_1,uVar20 + 0x70);
            mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
            param_1->state = '\x06';
            *(undefined1 *)((int)pvVar6 + 0x67) = 0xf0;
          }
        }
        else if (iVar14 < 0xb) {
          if (iVar14 < 9) {
            *(undefined4 *)((int)pvVar6 + 0x8c) = 0;
            *(undefined4 *)((int)pvVar6 + 0xc0) = 0x40400000;
            *(undefined4 *)((int)pvVar6 + 0xc4) = 0x40c00000;
            *(float *)((int)pvVar6 + 0x88) = fVar2 * fVar5;
            fVar5 = (param_1->pos).x - *(float *)(*(int *)(iVar13 + 0x20) + 0x10);
            fVar2 = (param_1->pos).y - *(float *)(*(int *)(iVar13 + 0x20) + 0x14);
            dVar22 = ABS((double)fVar5);
            dVar23 = ABS((double)fVar2);
            *(float *)((int)puVar8 + 0x8c) = fVar5;
            *(float *)(puVar8 + 0x12) = fVar2;
            *(float *)((int)puVar8 + 0x94) = (float)(dVar22 - dVar23);
            uVar18 = (ulonglong)(*(uint *)((int)puVar8 + 0x8c) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar8 + 0x94) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar8 + 0x12) >> 0x1d) & 4;
            dVar24 = ABS((double)*(float *)((int)puVar8 + 0x8c));
            if ((double)*(float *)((int)puVar8 + 0x94) - dVar25 < 0.0) {
              dVar24 = dVar23;
            }
            fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
            dVar23 = ABS((double)*(float *)(puVar8 + 0x12));
            if ((double)*(float *)((int)puVar8 + 0x94) - dVar25 < 0.0) {
              dVar23 = dVar22;
            }
            fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
            if (dVar25 < dVar24) {
              lVar11 = uVar10 - 0x110;
              lVar16 = uVar10 - 0x68;
              lVar19 = uVar10 - 0x58;
              lVar21 = 2;
              fVar3 = (float)(dVar23 - dVar24) / (float)(dVar23 + dVar24);
              fVar4 = fVar3 * fVar3;
              *(float *)((int)puVar8 + 0xc4) = fVar3;
              *(float *)((int)puVar8 + 0xbc) = fVar3;
              *(float *)(puVar8 + 0x18) = fVar3;
              *(float *)(puVar8 + 0x17) = fVar3;
              fVar3 = fVar4 * fVar4;
              *(float *)((int)puVar8 + 0xbc) = *(float *)((int)puVar8 + 0xbc) * fVar4;
              *(float *)(puVar8 + 0x18) = *(float *)(puVar8 + 0x18) * fVar3;
              *(float *)((int)puVar8 + 0xc4) = *(float *)((int)puVar8 + 0xc4) * fVar3 * fVar4;
              do {
                *(float *)((int)lVar11 + 0xb8) = *(float *)((int)lVar11 + 0xa8) * fVar3 * fVar3;
                iVar14 = (int)lVar16;
                lVar11 = lVar11 + 8;
                lVar16 = lVar16 + 8;
                *(float *)((int)lVar19 + 4) = *(float *)(iVar14 + 4) * fVar3 * fVar3;
                lVar19 = lVar19 + 8;
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
              lVar21 = 4;
              lVar19 = uVar10 - 0x68;
              pfVar17 = (float *)&DAT_007358e0;
              lVar11 = lVar12;
              lVar16 = lVar19;
              do {
                fVar3 = *pfVar17;
                fVar4 = pfVar17[1];
                pfVar17 = pfVar17 + 2;
                *(float *)((int)lVar11 + 0xb8) = *(float *)((int)lVar11 + 0xb8) * fVar3;
                lVar11 = lVar11 + 8;
                *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
                lVar16 = lVar16 + 8;
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
              lVar11 = 2;
              do {
                iVar14 = (int)lVar12;
                iVar9 = (int)lVar19;
                lVar12 = lVar12 + 0x10;
                lVar19 = lVar19 + 0x10;
                dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar14 + 0xb8)) +
                                  *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                                 *(float *)(iVar9 + 0xc));
                lVar11 = lVar11 + -1;
              } while (lVar11 != 0);
              dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar5 + fVar2);
            }
            *(float *)(puVar8 + 0xf) = (float)dVar25;
            uVar15 = *(undefined4 *)(iVar13 + 0x18);
            *(undefined4 *)(puVar8 + 6) = *(undefined4 *)(iVar13 + 0x10);
            *(undefined4 *)(puVar8 + 7) = uVar15;
            uVar15 = *(undefined4 *)(iVar13 + 0x1c);
            *(undefined4 *)((int)puVar8 + 0x34) = *(undefined4 *)(iVar13 + 0x14);
            *(undefined4 *)((int)puVar8 + 0x3c) = uVar15;
            mobyutil::MB_VecAtan2Angles
                      (puVar8[6],puVar8[7],uVar10 - 0xa8,uVar20 + 0x88,uVar20 + 0x8c);
            mobyutil::MB_StartKick((double)*(float *)(puVar8 + 0xf),param_1,uVar20 + 0x70);
            param_1->state = '\x05';
            if (param_1->group != -1) {
              mobyutil::MB_SetGroupField(param_1->group,1);
            }
            *(undefined1 *)((int)pvVar6 + 0x67) = 0x78;
          }
          else {
            *(undefined1 *)((int)pvVar6 + 0x67) = 0xfa;
          }
        }
        mobyutil::MB_UpdateLightsTransition(param_1,uVar20 + 0x60);
      }
      param_1->damage = -1;
      mobyutil::MB_ColorDyingMoby(param_1,uVar20 + 0x60);
      if ((*(int *)((int)pvVar6 + 0x38) != 0) || (param_1->setByGroup == '\x01')) {
        dVar25 = (double)mobyutil::MB_randRangeFloat(180.0,240.0);
        uVar15 = fastfunc::FastDoubleToInt((double)(float)(dVar25 * (double)animationSpeed));
        *(undefined4 *)((int)pvVar6 + 400) = uVar15;
        *(undefined4 *)((int)pvVar6 + 0x38) = 0;
        param_1->setByGroup = '\0';
      }
      fastfunc::FastDecTimerS32(uVar20 + 400);
      uVar15 = 0x41400000;
      if (*(int *)((int)pvVar6 + 400) != 0) {
        uVar15 = 0x41c00000;
      }
      *(undefined4 *)((int)pvVar6 + 0x188) = uVar15;
      pSVar7 = Splines[*(int *)((int)pvVar6 + 0x180)];
      iVar13 = mobyutil::MB_getTargetInArea
                         (param_1,uVar20 + 0x120,pSVar7,0,0,pSVar7->points,pSVar7->cnt);
      if (((iVar13 != 2) && (*(int *)((int)pvVar6 + 400) == 0)) &&
         ((fVar5 = (param_1->pos).y - *(float *)((int)pvVar6 + 0x124),
          fVar2 = (param_1->pos).x - *(float *)((int)pvVar6 + 0x120),
          *(float *)((int)pvVar6 + 0x188) < SQRT(fVar2 * fVar2 + fVar5 * fVar5) ||
          (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar6 + 0x128)))))) {
        *(undefined4 *)((int)pvVar6 + 0x164) = 2;
      }
      if (*(int *)((int)pvVar6 + 0x160) == 0) {
        *(MobyInstance **)((int)pvVar6 + 0x160) = g_heroMobyPtr;
      }
    }
  }
  return;
}



//==== 0018e9f8  ns=mobyupdate_unsorted  size=0xa18
// sig: undefined UpdateMoby_1027(MobyInstance * moby)
// callers(0): 
// callees(12): 000efb38 mobyfunc::DeleteMoby; 000fddc0 mobyutil::MB_SetAnimation; 001009b0 mobyutil::MB_MoveAndCollide; 00100f8c mobyutil::MB_InitDefaultParams; 00104298 mobyutil::MB_SetGroupField; 0010a2e0 mobyutil::OrganicDeltAng; 0010b030 mobyutil::MB_UpdateKick; 0010e030 mobyutil::MB_genericExplosion; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 0018e048 mobyupdate_helpers::M1027_0018e048; 00502758 fastfunc::FastDoubleToInt; 005cd098 libc::printf
// strings: 0065429c: 'Kamikaze with an invalid boundPath. UID = %d'

/* Moby 1027 */

void mobyupdate_unsorted::UpdateMoby_1027(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  int iVar7;
  ulonglong *puVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  float *pfVar22;
  longlong lVar23;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  longlong lVar25;
  ulonglong in_f29;
  double dVar26;
  ulonglong in_f30;
  double dVar27;
  ulonglong in_f31;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  
  lVar19 = (longlong)(int)moby;
  uVar15 = ZEXT48(&stack0x00000000);
  lVar20 = uVar15 - 0x180;
  puVar8 = (ulonglong *)lVar20;
  *puVar8 = uVar15;
  puVar8[0x32] = in_LR;
  puVar8[0x2d] = in_f29;
  puVar8[0x2e] = in_f30;
  puVar8[0x2f] = in_f31;
  puVar8[0x2c] = unaff_r31;
  puVar8[0x2b] = unaff_r30;
  puVar8[0x2a] = unaff_r29;
  puVar8[0x29] = unaff_r28;
  pvVar6 = moby->pVar;
  mobyupdate_helpers::M1027_0018e048();
  uVar1 = moby->state;
  iVar7 = *(int *)((int)pvVar6 + 0x160);
  dVar26 = (double)(moby->pos).z;
  fVar32 = (moby->pos).x;
  fVar2 = (moby->pos).y;
  if (uVar1 == '\a') {
    *(undefined4 *)((int)puVar8 + 0xdc) = 0;
    *(undefined4 *)(puVar8 + 0x1b) = 0;
    *(undefined4 *)((int)puVar8 + 0xd4) = 0;
    *(undefined4 *)(puVar8 + 0x1a) = 0;
    puVar8[0x12] = 0;
    puVar8[0x14] = 0;
    puVar8[0x15] = 0;
    puVar8[0x16] = 0xffffffffffffffff;
    puVar8[0x17] = 0;
    mobyutil::MB_genericExplosion
              (0x4000000000000000,0x3ff0000000000000,0x4010000000000000,0x4000000000000000,
               0x4022000000000000,0x3ff0000000000000,0x402e000000000000,lVar19,uVar15 - 0xb0,
               lVar19 + 0x10,0,0xffffffffffffffff,10,3,0x10);
    mobyfunc::DeleteMoby(moby);
  }
  else if (uVar1 == '\x06') {
    uVar17 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x70));
    if ((uVar17 & 0x121) != 0) {
      mobyutil::MB_SpawnExplosionSparks
                (0x3fe0000000000000,0x402a000000000000,lVar19,lVar19 + 0x10,&DAT_0018e988,
                 0xffffffffffffffff);
      mobyfunc::DeleteMoby(moby);
    }
  }
  else if (uVar1 == '\x05') {
    mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x70));
    (moby->pos).z = (float)dVar26;
    *(undefined4 *)((int)pvVar6 + 0x78) = 0;
    if ((SQRT(*(float *)((int)pvVar6 + 0x70) * *(float *)((int)pvVar6 + 0x70) +
              *(float *)((int)pvVar6 + 0x74) * *(float *)((int)pvVar6 + 0x74)) <
         mobyutil::g_FrameTime) && (moby->state = '\x04', *(int *)((int)pvVar6 + 0x184) == 0)) {
      auVar29 = ZEXT416(0xffffffff);
      auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
      auVar30 = vectorShiftLeftIntegerWord(auVar29,auVar29);
      auVar29 = loadVectorLeftIndexed(0x20,0x18e988);
      auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar31 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar29 = vectorMultiplyAddFloatingPoint
                          (auVar31,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,
                           auVar30);
      auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
      auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar16 = storeVectorElementWordIndexed
                         (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0x184,
                          ZEXT48(pvVar6));
      *(undefined4 *)((int)pvVar6 + 0x184U & 0xfffffffc) = uVar16;
    }
  }
  else {
    if (uVar1 != '\x04') {
      if (uVar1 == '\x03') {
        if ((moby->field43_0x70 & 2U) == 0) {
          return;
        }
        if (moby->group != -1) {
          mobyutil::MB_SetGroupField(moby->group,1);
        }
        moby->state = '\x04';
        if (moby->animationId != '\x04') {
          puVar8[0x27] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar19,4,0,*(undefined4 *)((int)puVar8 + 0x13c));
        }
        if (*(int *)((int)pvVar6 + 0x184) != 0) {
          return;
        }
        auVar29 = ZEXT416(0xffffffff);
        auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        auVar30 = vectorShiftLeftIntegerWord(auVar29,auVar29);
        auVar29 = loadVectorLeftIndexed(0x20,0x18e988);
        auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar31 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar29 = vectorMultiplyAddFloatingPoint
                            (auVar31,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,
                             auVar30);
        auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
        auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar16 = storeVectorElementWordIndexed
                           (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0x184,
                            ZEXT48(pvVar6));
        *(undefined4 *)((int)pvVar6 + 0x184U & 0xfffffffc) = uVar16;
        return;
      }
      if (uVar1 != '\x02') {
        if (uVar1 == '\x01') {
          fVar32 = *(float *)(iVar7 + 0x10) - fVar32;
          fVar2 = *(float *)(iVar7 + 0x14) - fVar2;
          fVar4 = ABS(fVar32);
          fVar3 = ABS(fVar2);
          *(float *)((int)puVar8 + 0xec) = fVar32;
          *(float *)(puVar8 + 0x1e) = fVar2;
          *(float *)((int)puVar8 + 0xf4) = fVar4 - fVar3;
          fVar32 = 0.0;
          uVar18 = (ulonglong)(*(uint *)((int)puVar8 + 0xec) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar8 + 0xf4) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar8 + 0x1e) >> 0x1d) & 4;
          fVar2 = ABS(*(float *)((int)puVar8 + 0xec));
          if (*(float *)((int)puVar8 + 0xf4) - 0.0 < 0.0) {
            fVar2 = fVar3;
          }
          fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
          fVar3 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
          fVar9 = ABS(*(float *)(puVar8 + 0x1e));
          if (*(float *)((int)puVar8 + 0xf4) - 0.0 < 0.0) {
            fVar9 = fVar4;
          }
          if (0.0 < fVar2) {
            lVar19 = uVar15 - 0x170;
            lVar23 = uVar15 - 0x58;
            lVar21 = uVar15 - 0x68;
            lVar24 = 2;
            fVar2 = (fVar9 - fVar2) / (fVar9 + fVar2);
            fVar4 = fVar2 * fVar2;
            *(float *)((int)puVar8 + 0x124) = fVar2;
            *(float *)((int)puVar8 + 0x11c) = fVar2;
            *(float *)(puVar8 + 0x24) = fVar2;
            *(float *)(puVar8 + 0x23) = fVar2;
            fVar2 = fVar4 * fVar4;
            *(float *)((int)puVar8 + 0x11c) = *(float *)((int)puVar8 + 0x11c) * fVar4;
            *(float *)(puVar8 + 0x24) = *(float *)(puVar8 + 0x24) * fVar2;
            *(float *)((int)puVar8 + 0x124) = *(float *)((int)puVar8 + 0x124) * fVar2 * fVar4;
            do {
              *(float *)((int)lVar19 + 0x118) = *(float *)((int)lVar19 + 0x108) * fVar2 * fVar2;
              iVar7 = (int)lVar21;
              lVar21 = lVar21 + 8;
              lVar19 = lVar19 + 8;
              *(float *)((int)lVar23 + 4) = *(float *)(iVar7 + 4) * fVar2 * fVar2;
              lVar23 = lVar23 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar24 = 4;
            lVar23 = uVar15 - 0x68;
            pfVar22 = (float *)&DAT_007358e0;
            lVar19 = lVar20;
            lVar21 = lVar23;
            do {
              fVar2 = *pfVar22;
              fVar4 = pfVar22[1];
              pfVar22 = pfVar22 + 2;
              *(float *)((int)lVar19 + 0x118) = *(float *)((int)lVar19 + 0x118) * fVar2;
              lVar19 = lVar19 + 8;
              *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar4;
              lVar21 = lVar21 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar19 = 2;
            do {
              iVar7 = (int)lVar20;
              lVar20 = lVar20 + 0x10;
              iVar10 = (int)lVar23;
              lVar23 = lVar23 + 0x10;
              fVar32 = fVar32 + *(float *)(iVar7 + 0x118) + *(float *)(iVar10 + 4) +
                       *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc);
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
            fVar32 = (fVar32 + 0.7853982) * fVar5 + fVar3;
          }
          fVar32 = mobyutil::OrganicDeltAng
                             (fVar32,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                              mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x18e988,
                              (float *)((int)pvVar6 + 0x18c));
          if (*(int *)((int)pvVar6 + 0x164) == 2) {
            return;
          }
          if (moby->group != -1) {
            mobyutil::MB_SetGroupField((double)fVar32,moby->group,1);
          }
          moby->state = '\x02';
          return;
        }
        if (uVar1 != '\0') {
          return;
        }
        *(undefined4 *)((int)pvVar6 + 0x20) = 0x40400000;
        *(undefined2 *)((int)pvVar6 + 0x24) = 3;
        *(undefined1 *)((int)pvVar6 + 0x28) = 2;
        *(undefined1 *)((int)pvVar6 + 0x29) = 0;
        if (*(int *)((int)pvVar6 + 0x180) == -1) {
          libc::printf("Kamikaze with an invalid boundPath. UID = %d",moby->uid);
          mobyfunc::DeleteMoby(moby);
          return;
        }
        mobyutil::MB_InitDefaultParams((float *)((int)pvVar6 + 0xd0));
        dVar26 = 0.5;
        *(undefined4 *)((int)pvVar6 + 0xdc) = 0x3f000000;
        *(undefined4 *)((int)pvVar6 + 0xd8) = 0x3f000000;
        uVar16 = fastfunc::FastDoubleToInt(0x4080000000000000);
        *(undefined4 *)((int)pvVar6 + 0xd0) = uVar16;
        *(float *)((int)pvVar6 + 0xf4) = mobyutil::g_FrameTime * 4.0;
        moby->state = '\x01';
        if (moby->animationId != '\x01') {
          puVar8[0x27] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar19,1,0,*(undefined4 *)((int)puVar8 + 0x13c));
        }
        (moby->pos).z = (float)((double)(moby->pos).z + dVar26);
        return;
      }
    }
    fVar32 = *(float *)(iVar7 + 0x10) - fVar32;
    fVar2 = *(float *)(iVar7 + 0x14) - fVar2;
    fVar3 = ABS(fVar32);
    fVar4 = ABS(fVar2);
    *(float *)(puVar8 + 0x1c) = fVar32;
    *(float *)((int)puVar8 + 0xe4) = fVar2;
    *(float *)(puVar8 + 0x1d) = fVar3 - fVar4;
    dVar27 = 0.0;
    uVar18 = (ulonglong)(*(uint *)(puVar8 + 0x1c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0x1d) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar8 + 0xe4) >> 0x1d) & 4;
    fVar32 = ABS(*(float *)(puVar8 + 0x1c));
    if (*(float *)(puVar8 + 0x1d) - 0.0 < 0.0) {
      fVar32 = fVar4;
    }
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    fVar5 = ABS(*(float *)((int)puVar8 + 0xe4));
    if (*(float *)(puVar8 + 0x1d) - 0.0 < 0.0) {
      fVar5 = fVar3;
    }
    dVar28 = dVar27;
    if (0.0 < fVar32) {
      lVar21 = uVar15 - 0x170;
      lVar23 = uVar15 - 0x88;
      lVar24 = uVar15 - 0x78;
      lVar25 = 2;
      fVar32 = (fVar5 - fVar32) / (fVar5 + fVar32);
      fVar3 = fVar32 * fVar32;
      *(float *)((int)puVar8 + 0x104) = fVar32;
      *(float *)((int)puVar8 + 0xfc) = fVar32;
      *(float *)(puVar8 + 0x20) = fVar32;
      *(float *)(puVar8 + 0x1f) = fVar32;
      fVar32 = fVar3 * fVar3;
      *(float *)((int)puVar8 + 0xfc) = *(float *)((int)puVar8 + 0xfc) * fVar3;
      *(float *)(puVar8 + 0x20) = *(float *)(puVar8 + 0x20) * fVar32;
      *(float *)((int)puVar8 + 0x104) = *(float *)((int)puVar8 + 0x104) * fVar32 * fVar3;
      do {
        *(float *)((int)lVar21 + 0xf8) = *(float *)((int)lVar21 + 0xe8) * fVar32 * fVar32;
        iVar10 = (int)lVar23;
        lVar21 = lVar21 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar10 + 4) * fVar32 * fVar32;
        lVar24 = lVar24 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar25 = 4;
      lVar24 = uVar15 - 0x88;
      pfVar22 = (float *)&DAT_007358e0;
      lVar21 = lVar20;
      lVar23 = lVar24;
      do {
        fVar32 = *pfVar22;
        fVar3 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar21 + 0xf8) = *(float *)((int)lVar21 + 0xf8) * fVar32;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar3;
        lVar23 = lVar23 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar21 = 2;
      do {
        iVar10 = (int)lVar20;
        lVar20 = lVar20 + 0x10;
        iVar11 = (int)lVar24;
        lVar24 = lVar24 + 0x10;
        dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar10 + 0xf8)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar4 + fVar2);
    }
    mobyutil::OrganicDeltAng
              ((float)dVar28,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
               mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
               (float *)((int)pvVar6 + 0x18c));
    fVar2 = (moby->pos).y - *(float *)(iVar7 + 0x14);
    fVar4 = (moby->pos).x - *(float *)(iVar7 + 0x10);
    fVar32 = (moby->pos).z;
    dVar28 = (double)SQRT(fVar4 * fVar4 + fVar2 * fVar2);
    if (1.5 < dVar28) {
      fVar2 = (moby->rotation).z;
      fVar4 = fVar2 + 1.5707963;
      fVar3 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar3 = fVar2;
      }
      fVar5 = 3.1415925 - fVar4;
      if (fVar4 - (3.1415925 - fVar4) < 0.0) {
        fVar5 = fVar4;
      }
      fVar9 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
        fVar9 = fVar3;
      }
      fVar2 = -3.1415925 - fVar4;
      if ((-3.1415925 - fVar4) - fVar5 < 0.0) {
        fVar2 = fVar5;
      }
      fVar4 = fVar9 * fVar9;
      fVar3 = fVar2 * fVar2;
      fVar13 = fVar4 * fVar4 * fVar9;
      fVar5 = fVar3 * fVar3 * fVar2;
      fVar14 = fVar4 * fVar13;
      fVar12 = fVar3 * fVar5;
      *(float *)(puVar8 + 0x18) =
           (fVar3 * fVar12 * 2.601887e-06 +
           fVar12 * -0.0001980741 + fVar5 * 0.0083330255 + fVar3 * fVar2 * -0.16666657 + fVar2) *
           *(float *)((int)pvVar6 + 0xf4);
      fVar2 = *(float *)((int)pvVar6 + 0xf4);
      *(undefined4 *)(puVar8 + 0x19) = 0;
      *(float *)((int)puVar8 + 0xc4) =
           (fVar4 * fVar14 * 2.601887e-06 +
           fVar14 * -0.0001980741 + fVar13 * 0.0083330255 + fVar4 * fVar9 * -0.16666657 + fVar9) *
           fVar2;
      fVar2 = DAT_0071f408;
      fVar4 = 0.05;
      if ((double)fVar32 - (double)(g_heroPosition.z + 0.8) < 0.0) {
        fVar4 = 0.1;
      }
      fVar4 = (float)((double)(g_heroPosition.z + 0.8) - dVar26) * fVar4;
      *(float *)(puVar8 + 0x19) = fVar4;
      fVar32 = fVar2 * 0.3;
      if (fVar4 <= fVar32) {
        fVar2 = fVar2 * -0.3;
        if (fVar4 < fVar2) {
          *(float *)(puVar8 + 0x19) = fVar2;
        }
      }
      else {
        *(float *)(puVar8 + 0x19) = fVar32;
      }
      mobyutil::MB_MoveAndCollide(dVar27,0x3fe0000000000000,dVar27,lVar19,uVar15 - 0xc0);
    }
    if (((dVar28 < 6.0) && (moby->state == '\x02')) &&
       (moby->state = '\x03', moby->animationId != '\x03')) {
      puVar8[0x27] = (longlong)(int)(animationSpeed * 10.5);
      mobyutil::MB_SetAnimation(lVar19,3,0,*(undefined4 *)((int)puVar8 + 0x13c));
    }
  }
  return;
}



//==== 0018f410  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1028_0018f410(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1028_0018f410(void)

{
  DAT_0073fc74 = 0x10000;
  return;
}



//==== 0018f448  ns=mobyupdate_helpers  size=0x964
// sig: undefined M1028_0018f448(void)
// callers(1): 0018fdc8 mobyupdate_unsorted::UpdateMoby_1028_BlargPlatform
// callees(2): 000f31a8 mobyfunc::UpdateMobyTransform; 0015d12c sound::PlayMobySound

void mobyupdate_helpers::M1028_0018f448(int param_1)

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
  int iVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  byte in_cr6;
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
  
  iVar23 = *(int *)(param_1 + 0x78);
  auVar45 = ZEXT416(0);
  auVar41 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
  iVar22 = 0;
  dVar33 = 0.0;
  auVar45 = loadVectorLeftIndexed(4,0x18f428);
  auVar44 = loadVectorLeftIndexed(8,0x18f428);
  iVar20 = 0;
  auVar40 = loadVectorLeftIndexed(0xc,0x18f428);
  auVar43 = loadVectorLeftIndexed(0x10,0x18f428);
  auVar45 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar46 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
  auVar45 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar44 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
  auVar45 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar40 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
  auVar45 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar43 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
  auVar45 = auVar41;
  iVar21 = iVar23;
  do {
    fVar3 = *(float *)(param_1 + 0xc4);
    fVar4 = *(float *)(param_1 + 0xc0);
    fVar5 = *(float *)(param_1 + 200);
    dVar24 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
    dVar32 = (double)(blargBridgePlatform.x - (float)(longlong)iVar22);
    if ((double)(blargBridgePlatform.x - (float)(longlong)iVar22) - dVar33 < 0.0) {
      dVar32 = dVar33;
    }
    if (dVar24 == dVar33) {
      fVar6 = *(float *)(param_1 + 0xcc);
      dVar32 = dVar33;
      dVar24 = dVar33;
      dVar28 = dVar33;
    }
    else {
      fVar7 = (float)(dVar32 / dVar24);
      fVar6 = *(float *)(param_1 + 0xcc);
      dVar32 = (double)(fVar4 * fVar7);
      dVar24 = (double)(fVar3 * fVar7);
      dVar28 = (double)(fVar5 * fVar7);
    }
    fVar15 = *(float *)(param_1 + 0xd0) * DAT_0073fca4;
    fVar16 = *(float *)(param_1 + 0xd4) * DAT_0073fca4;
    fVar10 = *(float *)(param_1 + 0xd8) * DAT_0073fca4;
    fVar4 = fVar4 * DAT_0073fca0;
    fVar3 = fVar3 * DAT_0073fca0;
    fVar5 = fVar5 * DAT_0073fca0;
    auVar34 = vectorConvertFromSignedFixedPointWord(auVar45,0);
    auVar35 = ZEXT416(0xffffffff);
    auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    fVar7 = *(float *)(param_1 + 0x10);
    fVar8 = *(float *)(param_1 + 0x14);
    fVar9 = *(float *)(param_1 + 0x18);
    fVar11 = *(float *)(param_1 + 0xe0) * DAT_0073fca8;
    fVar12 = *(float *)(param_1 + 0xe4) * DAT_0073fca8;
    fVar17 = *(float *)(param_1 + 0xe8) * DAT_0073fca8;
    auVar35 = vectorShiftLeftIntegerWord(auVar35,auVar35);
    iVar13 = *(int *)(iVar21 + 0x70);
    auVar35 = vectorMultiplyAddFloatingPoint(auVar34,auVar46,auVar35);
    *(float *)(iVar13 + 0x1c) =
         *(float *)(param_1 + 0xec) * DAT_0073fca8 +
         fVar6 * DAT_0073fca0 + *(float *)(param_1 + 0xdc) * DAT_0073fca4 + DAT_0073fcac;
    *(float *)(iVar13 + 0x10) = (float)((double)(fVar11 + fVar4 + fVar15 + fVar7) + dVar32);
    *(float *)(iVar13 + 0x14) = (float)((double)(fVar12 + fVar3 + fVar16 + fVar8) + dVar24);
    *(float *)(iVar13 + 0x18) = (float)((double)(fVar17 + fVar5 + fVar10 + fVar9) + dVar28);
    fVar5 = *(float *)(param_1 + 0xd4) * DAT_0073fcb4;
    fVar7 = *(float *)(param_1 + 0xd8) * DAT_0073fcb4;
    fVar6 = *(float *)(param_1 + 0xc4) * DAT_0073fcb0;
    fVar8 = *(float *)(param_1 + 200) * DAT_0073fcb0;
    fVar9 = *(float *)(param_1 + 0xe4) * DAT_0073fcb8;
    fVar3 = *(float *)(param_1 + 0x14);
    fVar15 = *(float *)(param_1 + 0xe8) * DAT_0073fcb8;
    fVar4 = *(float *)(param_1 + 0x18);
    iVar13 = *(int *)(iVar21 + 0xc0);
    fVar16 = *(float *)(param_1 + 0xec) * DAT_0073fcb8 +
             *(float *)(param_1 + 0xcc) * DAT_0073fcb0 + *(float *)(param_1 + 0xdc) * DAT_0073fcb4 +
             DAT_0073fcbc;
    *(float *)(iVar13 + 0x10) =
         (float)((double)(*(float *)(param_1 + 0xe0) * DAT_0073fcb8 +
                          *(float *)(param_1 + 0xc0) * DAT_0073fcb0 +
                          *(float *)(param_1 + 0xd0) * DAT_0073fcb4 + *(float *)(param_1 + 0x10)) +
                dVar32);
    *(float *)(iVar13 + 0x14) = (float)((double)(fVar9 + fVar6 + fVar5 + fVar3) + dVar24);
    *(float *)(iVar13 + 0x1c) = fVar16;
    *(float *)(iVar13 + 0x18) = (float)((double)(fVar15 + fVar8 + fVar7 + fVar4) + dVar28);
    auVar34 = loadVectorLeftIndexed(0xffffffffffffefd4,0xe60000);
    auVar34 = vectorNegativeMultiplySubtractFloatingPoint(auVar34,auVar46,auVar35);
    auVar35 = (auVar34 ^ auVar40) >> 0x60 & (undefined1  [16])0xffffffff;
    auVar36 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    vectorCompareGreaterThanFloatingPoint(auVar36,auVar44);
    auVar35 = auVar44;
    if (((bool)(in_cr6 >> 1 & 1)) &&
       (vectorCompareGreaterThanOrEqualToFloatingPoint(auVar36,auVar41), auVar35 = auVar34 ^ auVar40
       , (bool)(in_cr6 >> 1 & 1))) {
      auVar35 = auVar41;
    }
    auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    uVar14 = storeVectorElementWordIndexed
                       (auVar40 ^ auVar35,0x40,(ulonglong)*(uint *)(iVar21 + 0x70));
    *(undefined4 *)(*(uint *)(iVar21 + 0x70) + 0x40 & 0xfffffffc) = uVar14;
    uVar14 = storeVectorElementWordIndexed(auVar35,0x40,(ulonglong)*(uint *)(iVar21 + 0xc0));
    *(undefined4 *)(*(uint *)(iVar21 + 0xc0) + 0x40 & 0xfffffffc) = uVar14;
    mobyfunc::UpdateMobyTransform(*(MobyInstance **)(iVar21 + 0x70));
    mobyfunc::UpdateMobyTransform(*(MobyInstance **)(iVar21 + 0xc0));
    iVar22 = iVar22 + 1;
    auVar34._0_4_ = auVar45._0_4_ + auVar43._0_4_;
    auVar34._8_8_ = auVar45._8_8_;
    auVar34._4_4_ = auVar45._4_4_ + auVar43._4_4_;
    auVar35._0_8_ = auVar34._0_8_;
    auVar35._12_4_ = auVar45._12_4_;
    auVar35._8_4_ = auVar45._8_4_ + auVar43._8_4_;
    auVar45._0_12_ = auVar35._0_12_;
    auVar45._12_4_ = auVar35._12_4_ + auVar43._12_4_;
    iVar21 = iVar21 + 4;
  } while (iVar22 < 0x14);
  dVar24 = 2.0;
  dVar32 = 1.0;
  auVar45 = loadVectorLeftIndexed(0x1c,0x18f428);
  auVar45 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
  auVar43 = auVar41;
  do {
    fVar3 = *(float *)(param_1 + 0xc4);
    fVar4 = *(float *)(param_1 + 0xc0);
    fVar5 = *(float *)(param_1 + 200);
    dVar26 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
    auVar35 = ZEXT416(0xffffffff);
    auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar35 = vectorShiftLeftIntegerWord(auVar35,auVar35);
    dVar30 = (double)((float)(longlong)(4 - iVar20) * DAT_0073fcc4 + DAT_0073fcc0);
    dVar31 = -(double)(float)((double)(longlong)iVar20 * dVar24 - (double)blargBridgePlatform.x);
    fVar9 = *(float *)(param_1 + 0xd0) * DAT_0073fca4;
    fVar15 = *(float *)(param_1 + 0xd4) * DAT_0073fca4;
    fVar16 = *(float *)(param_1 + 0xd8) * DAT_0073fca4;
    fVar6 = fVar4 * DAT_0073fca0;
    fVar7 = fVar3 * DAT_0073fca0;
    fVar8 = fVar5 * DAT_0073fca0;
    dVar28 = dVar31;
    if (dVar31 - dVar30 < 0.0) {
      dVar28 = dVar30;
    }
    fVar10 = *(float *)(param_1 + 0x10);
    fVar11 = *(float *)(param_1 + 0x14);
    fVar17 = *(float *)(param_1 + 0xe0) * DAT_0073fca8;
    fVar18 = *(float *)(param_1 + 0xe4) * DAT_0073fca8;
    fVar12 = *(float *)(param_1 + 0x18);
    fVar19 = *(float *)(param_1 + 0xe8) * DAT_0073fca8;
    iVar21 = *(int *)(iVar23 + 0x110);
    dVar29 = (double)(float)(dVar31 - dVar32);
    if ((double)(float)(dVar31 - dVar32) - dVar30 < 0.0) {
      dVar29 = dVar30;
    }
    fVar1 = (float)(dVar28 / dVar26);
    fVar2 = (float)(dVar29 / dVar26);
    auVar34 = vectorConvertFromSignedFixedPointWord(auVar43,0);
    *(float *)(iVar21 + 0x1c) =
         *(float *)(param_1 + 0xec) * DAT_0073fca8 +
         *(float *)(param_1 + 0xcc) * DAT_0073fca0 + *(float *)(param_1 + 0xdc) * DAT_0073fca4 +
         DAT_0073fcac;
    auVar35 = vectorMultiplyAddFloatingPoint(auVar34,auVar45,auVar35);
    dVar28 = dVar33;
    if (dVar33 - dVar26 < 0.0) {
      dVar28 = (double)(fVar5 * fVar1);
    }
    dVar30 = dVar33;
    if (dVar33 - dVar26 < 0.0) {
      dVar30 = (double)(fVar3 * fVar1);
    }
    dVar31 = dVar33;
    if (dVar33 - dVar26 < 0.0) {
      dVar31 = (double)(fVar4 * fVar1);
    }
    if (dVar26 - dVar33 < 0.0) {
      dVar28 = (double)(fVar5 * fVar1);
    }
    if (dVar26 - dVar33 < 0.0) {
      dVar30 = (double)(fVar3 * fVar1);
    }
    if (dVar26 - dVar33 < 0.0) {
      dVar31 = (double)(fVar4 * fVar1);
    }
    dVar29 = dVar33;
    if (dVar33 - dVar26 < 0.0) {
      dVar29 = (double)(fVar5 * fVar2);
    }
    dVar27 = dVar33;
    if (dVar33 - dVar26 < 0.0) {
      dVar27 = (double)(fVar4 * fVar2);
    }
    dVar25 = dVar33;
    if (dVar33 - dVar26 < 0.0) {
      dVar25 = (double)(fVar3 * fVar2);
    }
    *(float *)(iVar21 + 0x14) = (float)((double)(fVar18 + fVar7 + fVar15 + fVar11) + dVar30);
    *(float *)(iVar21 + 0x10) = (float)((double)(fVar17 + fVar6 + fVar9 + fVar10) + dVar31);
    *(float *)(iVar21 + 0x18) = (float)((double)(fVar19 + fVar8 + fVar16 + fVar12) + dVar28);
    if (dVar26 - dVar33 < 0.0) {
      dVar29 = (double)(fVar5 * fVar2);
    }
    if (dVar26 - dVar33 < 0.0) {
      dVar27 = (double)(fVar4 * fVar2);
    }
    fVar4 = *(float *)(param_1 + 0xd4) * DAT_0073fcb4;
    if (dVar26 - dVar33 < 0.0) {
      dVar25 = (double)(fVar3 * fVar2);
    }
    fVar7 = *(float *)(param_1 + 0xd8) * DAT_0073fcb4;
    fVar6 = *(float *)(param_1 + 0xc4) * DAT_0073fcb0;
    fVar8 = *(float *)(param_1 + 200) * DAT_0073fcb0;
    fVar9 = *(float *)(param_1 + 0xe4) * DAT_0073fcb8;
    fVar15 = *(float *)(param_1 + 0xe8) * DAT_0073fcb8;
    fVar3 = *(float *)(param_1 + 0x14);
    fVar5 = *(float *)(param_1 + 0x18);
    iVar21 = *(int *)(iVar23 + 0x138);
    fVar16 = *(float *)(param_1 + 0xec) * DAT_0073fcb8 +
             *(float *)(param_1 + 0xcc) * DAT_0073fcb0 + *(float *)(param_1 + 0xdc) * DAT_0073fcb4 +
             DAT_0073fcbc;
    *(float *)(iVar21 + 0x10) =
         (float)((double)(*(float *)(param_1 + 0xe0) * DAT_0073fcb8 +
                          *(float *)(param_1 + 0xc0) * DAT_0073fcb0 +
                          *(float *)(param_1 + 0xd0) * DAT_0073fcb4 + *(float *)(param_1 + 0x10)) +
                dVar27);
    *(float *)(iVar21 + 0x14) = (float)((double)(fVar9 + fVar6 + fVar4 + fVar3) + dVar25);
    *(float *)(iVar21 + 0x1c) = fVar16;
    *(float *)(iVar21 + 0x18) = (float)((double)(fVar15 + fVar8 + fVar7 + fVar5) + dVar29);
    auVar38 = loadVectorLeftIndexed(0xffffffffffffefd4,0xe60000);
    auVar42 = vectorNegativeMultiplySubtractFloatingPoint(auVar38,auVar46,auVar35);
    auVar37 = loadVectorLeftIndexed(0xffffffffffffefe0,0xe60000);
    auVar42 = auVar42 ^ auVar40;
    auVar34 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar39 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    auVar36 = vectorNegativeMultiplySubtractFloatingPoint(auVar37,auVar46,auVar42);
    vectorCompareGreaterThanFloatingPoint(auVar39,auVar44);
    auVar34 = auVar44;
    if (((bool)(in_cr6 >> 1 & 1)) &&
       (vectorCompareGreaterThanOrEqualToFloatingPoint(auVar39,auVar41), auVar34 = auVar42,
       (bool)(in_cr6 >> 1 & 1))) {
      auVar34 = auVar41;
    }
    auVar39 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
    auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar42 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    vectorCompareGreaterThanFloatingPoint(auVar39,auVar44);
    auVar34 = auVar44;
    if (((bool)(in_cr6 >> 1 & 1)) &&
       (vectorCompareGreaterThanOrEqualToFloatingPoint(auVar39,auVar41), auVar34 = auVar36,
       (bool)(in_cr6 >> 1 & 1))) {
      auVar34 = auVar41;
    }
    vectorCompareEqualToFloatingPoint(auVar42,auVar41);
    auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
    if (((bool)(in_cr6 >> 1 & 1)) &&
       (vectorCompareEqualToFloatingPoint
                  (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,auVar41),
       !(bool)(in_cr6 >> 1 & 1))) {
      sound::PlayMobySound(1,0,*(MobyInstance **)(iVar23 + 0x110));
      auVar38 = loadVectorLeftIndexed(0xffffffffffffefd4,0xe60000);
      auVar37 = loadVectorLeftIndexed(0xffffffffffffefe0,0xe60000);
    }
    auVar34 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar36 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar34 = vectorNegativeMultiplySubtractFloatingPoint
                        (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,auVar46,
                         auVar35);
    auVar37 = vectorSubtractFloatingPoint(auVar34 ^ auVar40,auVar45);
    vectorCompareGreaterThanFloatingPoint(auVar37,auVar44);
    auVar36 = vectorNegativeMultiplySubtractFloatingPoint
                        (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,auVar46,
                         auVar37);
    auVar34 = auVar44;
    if (((bool)(in_cr6 >> 1 & 1)) &&
       (vectorCompareGreaterThanOrEqualToFloatingPoint(auVar37,auVar41), auVar34 = auVar37,
       (bool)(in_cr6 >> 1 & 1))) {
      auVar34 = auVar41;
    }
    vectorCompareGreaterThanFloatingPoint(auVar36,auVar44);
    auVar37 = auVar44;
    if (((bool)(in_cr6 >> 1 & 1)) &&
       (vectorCompareGreaterThanOrEqualToFloatingPoint(auVar36,auVar41), auVar37 = auVar36,
       (bool)(in_cr6 >> 1 & 1))) {
      auVar37 = auVar41;
    }
    vectorCompareEqualToFloatingPoint(auVar34,auVar41);
    if (((bool)(in_cr6 >> 1 & 1)) &&
       (vectorCompareEqualToFloatingPoint(auVar37,auVar41), !(bool)(in_cr6 >> 1 & 1))) {
      sound::PlayMobySound(1,0,*(MobyInstance **)(iVar23 + 0x138));
    }
    uVar14 = storeVectorElementWordIndexed
                       (auVar40 ^ auVar42,0x40,(ulonglong)*(uint *)(iVar23 + 0x110));
    *(undefined4 *)(*(uint *)(iVar23 + 0x110) + 0x40 & 0xfffffffc) = uVar14;
    uVar14 = storeVectorElementWordIndexed(auVar34,0x40,(ulonglong)*(uint *)(iVar23 + 0x138));
    *(undefined4 *)(*(uint *)(iVar23 + 0x138) + 0x40 & 0xfffffffc) = uVar14;
    auVar37 = loadVectorLeftIndexed(0xffffffffffffefd8,0xe60000);
    auVar42 = vectorNegativeMultiplySubtractFloatingPoint(auVar37,auVar46,auVar35);
    auVar36 = loadVectorLeftIndexed(0xffffffffffffefe4,0xe60000);
    auVar42 = auVar42 ^ auVar40;
    auVar34 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar39 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    auVar38 = vectorNegativeMultiplySubtractFloatingPoint(auVar36,auVar46,auVar42);
    vectorCompareGreaterThanFloatingPoint(auVar39,auVar44);
    auVar34 = auVar44;
    if (((bool)(in_cr6 >> 1 & 1)) &&
       (vectorCompareGreaterThanOrEqualToFloatingPoint(auVar39,auVar41), auVar34 = auVar42,
       (bool)(in_cr6 >> 1 & 1))) {
      auVar34 = auVar41;
    }
    auVar39 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
    auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar42 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    vectorCompareGreaterThanFloatingPoint(auVar39,auVar44);
    auVar34 = auVar44;
    if (((bool)(in_cr6 >> 1 & 1)) &&
       (vectorCompareGreaterThanOrEqualToFloatingPoint(auVar39,auVar41), auVar34 = auVar38,
       (bool)(in_cr6 >> 1 & 1))) {
      auVar34 = auVar41;
    }
    vectorCompareEqualToFloatingPoint(auVar42,auVar41);
    auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
    if (((bool)(in_cr6 >> 1 & 1)) &&
       (vectorCompareEqualToFloatingPoint
                  (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,auVar41),
       !(bool)(in_cr6 >> 1 & 1))) {
      sound::PlayMobySound(2,0,*(MobyInstance **)(iVar23 + 0x110));
      auVar37 = loadVectorLeftIndexed(0xffffffffffffefd8,0xe60000);
      auVar36 = loadVectorLeftIndexed(0xffffffffffffefe4,0xe60000);
    }
    auVar34 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar37 = vectorNegativeMultiplySubtractFloatingPoint
                        (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,auVar46,
                         auVar35);
    auVar35 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar34 = vectorNegativeMultiplySubtractFloatingPoint
                        (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,auVar46,
                         auVar42);
    auVar36 = vectorSubtractFloatingPoint(auVar37 ^ auVar40,auVar45);
    vectorCompareGreaterThanFloatingPoint(auVar36,auVar44);
    auVar35 = auVar44;
    if (((bool)(in_cr6 >> 1 & 1)) &&
       (vectorCompareGreaterThanOrEqualToFloatingPoint(auVar36,auVar41), auVar35 = auVar36,
       (bool)(in_cr6 >> 1 & 1))) {
      auVar35 = auVar41;
    }
    vectorCompareGreaterThanFloatingPoint(auVar34,auVar44);
    auVar36 = auVar44;
    if (((bool)(in_cr6 >> 1 & 1)) &&
       (vectorCompareGreaterThanOrEqualToFloatingPoint(auVar34,auVar41), auVar36 = auVar34,
       (bool)(in_cr6 >> 1 & 1))) {
      auVar36 = auVar41;
    }
    vectorCompareEqualToFloatingPoint(auVar35,auVar41);
    if (((bool)(in_cr6 >> 1 & 1)) &&
       (vectorCompareEqualToFloatingPoint(auVar36,auVar41), !(bool)(in_cr6 >> 1 & 1))) {
      sound::PlayMobySound(2,0,*(MobyInstance **)(iVar23 + 0x138));
    }
    uVar14 = storeVectorElementWordIndexed
                       (auVar40 ^ auVar42,0x44,(ulonglong)*(uint *)(iVar23 + 0x110));
    *(undefined4 *)(*(uint *)(iVar23 + 0x110) + 0x44 & 0xfffffffc) = uVar14;
    uVar14 = storeVectorElementWordIndexed
                       (auVar40 ^ auVar35,0x44,(ulonglong)*(uint *)(iVar23 + 0x138));
    *(undefined4 *)(*(uint *)(iVar23 + 0x138) + 0x44 & 0xfffffffc) = uVar14;
    mobyfunc::UpdateMobyTransform(*(MobyInstance **)(iVar23 + 0x110));
    mobyfunc::UpdateMobyTransform(*(MobyInstance **)(iVar23 + 0x138));
    iVar20 = iVar20 + 1;
    iVar23 = iVar23 + 4;
    auVar37._0_4_ = auVar43._0_4_ + 2;
    auVar37._8_8_ = auVar43._8_8_;
    auVar37._4_4_ = auVar43._4_4_ + 2;
    auVar36._0_8_ = auVar37._0_8_;
    auVar36._12_4_ = auVar43._12_4_;
    auVar36._8_4_ = auVar43._8_4_ + 2;
    auVar43._0_12_ = auVar36._0_12_;
    auVar43._12_4_ = auVar36._12_4_ + 2;
  } while (iVar20 < 10);
  return;
}



//==== 0018fdc8  ns=mobyupdate_unsorted  size=0xa04
// sig: undefined UpdateMoby_1028_BlargPlatform(MobyInstance * moby)
// callers(0): 
// callees(19): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00047f74 camera::SetCameraPosition; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 0007b310 help::Help_QueueMessage; 000a0c38 hero::Hero_Warp; 000a2560 hero::Hero_TransitionToDefault; 000e8aa4 memcard::memcard_Save; 000efa28 mobyfunc::CreateMoby; 000f1e50 mobyfunc::SetLevelFlag; 00109af0 mobyutil::Delt; 00109c30 mobyutil::OrganicDelt; 00112a38 mobyutil::MB_ToastMessage; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 0018f448 mobyupdate_helpers::M1028_0018f448; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

/* Moby 1028 */

void mobyupdate_unsorted::UpdateMoby_1028_BlargPlatform(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
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
  int iVar16;
  uint uVar17;
  float fVar18;
  MobyInstance *pMVar19;
  int iVar20;
  void *pvVar21;
  int iVar22;
  void *pvVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  
  uVar1 = moby->state;
  pvVar23 = moby->pVar;
  if (uVar1 != '\x06') {
    if (uVar1 == '\x05') {
      dVar24 = 1.0;
      iVar20 = *(int *)((int)pvVar23 + 0x6c);
      mobyutil::Delt(1.0,(float)(1.0 / (double)(longlong)(animationSpeed * 20.5)),
                     (float *)((int)pvVar23 + 0x6c));
      uVar17 = *(uint *)((int)pvVar23 + 0x6c);
      boot::SceneScreenFade = (float)(dVar24 - ABS((double)*(float *)((int)pvVar23 + 0x6c)));
      if ((iVar20 < 0) && (-1 < (int)uVar17)) {
        hero::Hero_TransitionToDefault();
        camera::camera5::Camera_DeactivateMobyDrivenCam(3);
      }
      else if (0x3f7fffff <
               (int)(((uint)((int)uVar17 >> 0x1f) >> 1 ^ uVar17) - ((int)uVar17 >> 0x1f))) {
        moby->state = '\x06';
        help::Help_QueueMessage(STR_THE_GADGETRON_HYDRODISPLACER_USES_0x1776,0x2d);
        mobyutil::MB_ToastMessage(0x177c,0xffffffffffffffff);
        memcard::memcard_Save(0,-1);
      }
    }
    else if (uVar1 == '\x04') {
      mobyfunc::SetLevelFlag(moby->levelFlagIdx);
      if ((int)(((uint)((int)blargBridgePlatform.x >> 0x1f) >> 1 ^ (uint)blargBridgePlatform.x) -
               ((int)blargBridgePlatform.x >> 0x1f)) < 0x41a00000) {
        mobyutil::OrganicDelt
                  (20.0,DAT_0073fcd4 * DAT_0071f418,DAT_0073fcd4 * DAT_0071f418,
                   DAT_0073fcc8 * mobyutil::g_FrameTime,&blargBridgePlatform.x,0x720000,
                   &blargBridgePlatform.w);
      }
      if (DAT_0073fce0 < blargBridgePlatform.x) {
        if ((int)(((uint)((int)blargBridgePlatform.y >> 0x1f) >> 1 ^ (uint)blargBridgePlatform.y) -
                 ((int)blargBridgePlatform.y >> 0x1f)) < 0x447a0000) {
          mobyutil::OrganicDelt
                    (1000.0,DAT_0073fcd8 * DAT_0071f418,DAT_0073fcd8 * DAT_0071f418,
                     DAT_0073fccc * mobyutil::g_FrameTime,&blargBridgePlatform.y,0x720000,
                     (float *)&DAT_00e5efe0);
        }
      }
      if ((int)(((uint)((int)DAT_0073fce4 >> 0x1f) >> 1 ^ DAT_0073fce4) -
               ((int)DAT_0073fce4 >> 0x1f)) <
          (int)(((uint)((int)blargBridgePlatform.y >> 0x1f) >> 1 ^ (uint)blargBridgePlatform.y) -
               ((int)blargBridgePlatform.y >> 0x1f))) {
        if ((int)(((uint)((int)blargBridgePlatform.z >> 0x1f) >> 1 ^ (uint)blargBridgePlatform.z) -
                 ((int)blargBridgePlatform.z >> 0x1f)) < 0x447a0000) {
          mobyutil::OrganicDelt
                    (1000.0,DAT_0073fcdc * DAT_0071f418,DAT_0073fcdc * DAT_0071f418,
                     DAT_0073fcd0 * mobyutil::g_FrameTime,&blargBridgePlatform.z,0x720000,
                     (float *)&DAT_00e5efe4);
        }
      }
      if (0x4479ffff <
          (int)(((uint)((int)blargBridgePlatform.z >> 0x1f) >> 1 ^ (uint)blargBridgePlatform.z) -
               ((int)blargBridgePlatform.z >> 0x1f))) {
        moby->state = '\x05';
        *(undefined4 *)((int)pvVar23 + 0x6c) = 0xbf800000;
      }
      bVar2 = moby->setByGroup;
      if ((0x419fffff <
           (int)(((uint)((int)blargBridgePlatform.x >> 0x1f) >> 1 ^ (uint)blargBridgePlatform.x) -
                ((int)blargBridgePlatform.x >> 0x1f))) &&
         (iVar20 = sound::IsMobyPlayingSound(*(MobyInstance **)((int)pvVar23 + 0x134),(uint)bVar2),
         iVar20 != 0)) {
        if ((bVar2 != 0xffffffff) &&
           ((sound::g_SoundChannels[bVar2].pMoby == *(MobyInstance **)((int)pvVar23 + 0x134) &&
            (sound::g_SoundChannels[bVar2].state != '\0')))) {
          sound::sound_Kill((uint)bVar2);
        }
        moby->setByGroup = -1;
      }
      mobyupdate_helpers::M1028_0018f448(moby);
      if ((int)(((uint)((int)blargBridgePlatform.x >> 0x1f) >> 1 ^ (uint)blargBridgePlatform.x) -
               ((int)blargBridgePlatform.x >> 0x1f)) < 0x41a00000) {
        iVar20 = *(int *)((int)pvVar23 + 0x60);
        iVar22 = *(int *)((int)pvVar23 + 100);
        fVar3 = 0.05;
        fVar4 = Cuboids[iVar20].pos.x;
        fVar5 = Cuboids[iVar20].pos.y;
        fVar6 = Cuboids[iVar20].pos.z;
        fVar7 = Cuboids[iVar22].pos.x;
        fVar8 = Cuboids[iVar22].pos.y;
        fVar9 = Cuboids[iVar22].pos.z;
        local_84 = Cuboids[iVar22].pos.w;
        fVar10 = Cuboids[iVar20].rot.x;
        fVar11 = Cuboids[iVar20].rot.y;
        fVar12 = Cuboids[iVar20].rot.z;
        fVar13 = Cuboids[iVar22].rot.x;
        fVar14 = Cuboids[iVar22].rot.y;
        fVar15 = Cuboids[iVar22].rot.z;
        fVar18 = blargBridgePlatform.x;
      }
      else {
        iVar20 = *(int *)((int)pvVar23 + 100);
        iVar22 = *(int *)((int)pvVar23 + 0x68);
        fVar3 = 0.001;
        fVar4 = Cuboids[iVar20].pos.x;
        fVar5 = Cuboids[iVar20].pos.y;
        fVar6 = Cuboids[iVar20].pos.z;
        fVar7 = Cuboids[iVar22].pos.x;
        fVar8 = Cuboids[iVar22].pos.y;
        fVar9 = Cuboids[iVar22].pos.z;
        local_84 = Cuboids[iVar22].pos.w;
        fVar10 = Cuboids[iVar20].rot.x;
        fVar11 = Cuboids[iVar20].rot.y;
        fVar12 = Cuboids[iVar20].rot.z;
        fVar13 = Cuboids[iVar22].rot.x;
        fVar14 = Cuboids[iVar22].rot.y;
        fVar15 = Cuboids[iVar22].rot.z;
        fVar18 = blargBridgePlatform.z;
      }
      dVar30 = (double)fVar15;
      dVar29 = (double)fVar14;
      dVar28 = (double)fVar12;
      dVar27 = (double)fVar11;
      dVar26 = (double)fVar10;
      dVar25 = (double)(fVar18 * fVar3);
      local_90 = (float)(dVar25 * (double)(float)((double)fVar7 - (double)fVar4) + (double)fVar4);
      local_8c = (float)(dVar25 * (double)(float)((double)fVar8 - (double)fVar5) + (double)fVar5);
      local_88 = (float)(dVar25 * (double)(float)((double)fVar9 - (double)fVar6) + (double)fVar6);
      dVar24 = (double)fastfunc::FastDiffRots((double)fVar13,dVar26);
      local_80 = (float)(dVar24 * dVar25);
      dVar24 = (double)fastfunc::FastWrapRot((float)dVar26,local_80);
      local_80 = (float)dVar24;
      dVar24 = (double)fastfunc::FastDiffRots(dVar29,dVar27);
      local_7c = (float)(dVar24 * dVar25);
      dVar24 = (double)fastfunc::FastWrapRot((float)dVar27,local_7c);
      local_7c = (float)dVar24;
      dVar24 = (double)fastfunc::FastDiffRots(dVar30,dVar28);
      local_78 = (float)(dVar24 * dVar25);
      dVar24 = (double)fastfunc::FastWrapRot((float)dVar28,local_78);
      local_78 = (float)dVar24;
      camera::camera5::Camera_SetMobyDrivenTargetPos(&local_90);
      camera::camera5::Camera_SetMobyDrivenTargetRot(&local_80);
    }
    else if (uVar1 == '\x03') {
      dVar24 = 1.0;
      iVar20 = *(int *)((int)pvVar23 + 0x6c);
      mobyutil::Delt(1.0,(float)(1.0 / (double)(longlong)(animationSpeed * 20.5)),
                     (float *)((int)pvVar23 + 0x6c));
      uVar17 = *(uint *)((int)pvVar23 + 0x6c);
      boot::SceneScreenFade = (float)(dVar24 - ABS((double)*(float *)((int)pvVar23 + 0x6c)));
      if ((iVar20 < 0) && (-1 < (int)uVar17)) {
        hero::Hero_Warp(&g_heroPosition.x,&g_heroRotation.x,0x72,1);
        camera::SetCameraPosition
                  (&Cuboids[*(int *)((int)pvVar23 + 0x60)].pos,
                   &Cuboids[*(int *)((int)pvVar23 + 0x60)].rot,1,0,0);
      }
      else if (0x3f7fffff <
               (int)(((uint)((int)uVar17 >> 0x1f) >> 1 ^ uVar17) - ((int)uVar17 >> 0x1f))) {
        moby->state = '\x04';
        iVar20 = sound::PlayMobySound(0,4,*(MobyInstance **)((int)pvVar23 + 0x134));
        moby->setByGroup = (char)iVar20;
      }
    }
    else if (uVar1 == '\x01') {
      if (((g_heroType == '\x01') && (UnlockableItems.hydrodisplacer != '\0')) &&
         (g_gameMode == GAME_MODE_NORMAL)) {
        boot::SceneScreenFade = 1.0;
        moby->state = '\x03';
        *(undefined4 *)((int)pvVar23 + 0x6c) = 0xbc23d70a;
      }
    }
    else if (uVar1 == '\0') {
      if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
        moby->state = '\x06';
        blargBridgePlatform.x = 20.0;
        blargBridgePlatform.y = 1000.0;
        blargBridgePlatform.z = 1000.0;
      }
      else {
        moby->state = '\x01';
      }
      iVar20 = 0;
      iVar22 = 0;
      pvVar21 = pvVar23;
      do {
        pMVar19 = mobyfunc::CreateMoby(0x405);
        *(MobyInstance **)((int)pvVar21 + 0x70) = pMVar19;
        pMVar19->drawDistance = 0x40;
        *(undefined1 *)(*(int *)((int)pvVar21 + 0x70) + 0x31) = 1;
        *(undefined8 *)(*(int *)((int)pvVar21 + 0x70) + 0x38) = *(undefined8 *)&g_heroMobyPtr->color
        ;
        *(MobyModeBit *)(*(int *)((int)pvVar21 + 0x70) + 0x34) = moby->modeBits;
        iVar16 = *(int *)((int)pvVar21 + 0x70);
        *(f32 *)(iVar16 + 0x10) = (moby->pos).x;
        *(f32 *)(iVar16 + 0x14) = (moby->pos).y;
        *(f32 *)(iVar16 + 0x18) = (moby->pos).z;
        *(f32 *)(iVar16 + 0x1c) = (moby->pos).w;
        iVar16 = *(int *)((int)pvVar21 + 0x70);
        *(f32 *)(iVar16 + 0x40) = (moby->rotation).x;
        *(f32 *)(iVar16 + 0x44) = (moby->rotation).y;
        *(f32 *)(iVar16 + 0x48) = (moby->rotation).z;
        *(f32 *)(iVar16 + 0x4c) = (moby->rotation).w;
        pMVar19 = mobyfunc::CreateMoby(0x405);
        *(MobyInstance **)((int)pvVar21 + 0xc0) = pMVar19;
        pMVar19->drawDistance = 0x40;
        iVar20 = iVar20 + 1;
        *(undefined1 *)(*(int *)((int)pvVar21 + 0xc0) + 0x31) = 1;
        *(undefined8 *)(*(int *)((int)pvVar21 + 0xc0) + 0x38) = *(undefined8 *)&moby->color;
        *(MobyModeBit *)(*(int *)((int)pvVar21 + 0xc0) + 0x34) = moby->modeBits;
        iVar16 = *(int *)((int)pvVar21 + 0xc0);
        *(f32 *)(iVar16 + 0x10) = (moby->pos).x;
        *(f32 *)(iVar16 + 0x14) = (moby->pos).y;
        *(f32 *)(iVar16 + 0x18) = (moby->pos).z;
        *(f32 *)(iVar16 + 0x1c) = (moby->pos).w;
        iVar16 = *(int *)((int)pvVar21 + 0xc0);
        pvVar21 = (void *)((int)pvVar21 + 4);
        *(f32 *)(iVar16 + 0x40) = (moby->rotation).x;
        *(f32 *)(iVar16 + 0x44) = (moby->rotation).y;
        *(f32 *)(iVar16 + 0x48) = (moby->rotation).z;
        *(f32 *)(iVar16 + 0x4c) = (moby->rotation).w;
      } while (iVar20 < 0x14);
      do {
        pMVar19 = mobyfunc::CreateMoby(0x406);
        *(MobyInstance **)((int)pvVar23 + 0x110) = pMVar19;
        pMVar19->drawDistance = 0x40;
        *(undefined1 *)(*(int *)((int)pvVar23 + 0x110) + 0x31) = 1;
        *(undefined8 *)(*(int *)((int)pvVar23 + 0x110) + 0x38) =
             *(undefined8 *)&g_heroMobyPtr->color;
        *(MobyModeBit *)(*(int *)((int)pvVar23 + 0x110) + 0x34) = moby->modeBits;
        iVar20 = *(int *)((int)pvVar23 + 0x110);
        *(f32 *)(iVar20 + 0x10) = (moby->pos).x;
        *(f32 *)(iVar20 + 0x14) = (moby->pos).y;
        *(f32 *)(iVar20 + 0x18) = (moby->pos).z;
        *(f32 *)(iVar20 + 0x1c) = (moby->pos).w;
        iVar20 = *(int *)((int)pvVar23 + 0x110);
        *(f32 *)(iVar20 + 0x40) = (moby->rotation).x;
        *(f32 *)(iVar20 + 0x44) = (moby->rotation).y;
        *(f32 *)(iVar20 + 0x48) = (moby->rotation).z;
        *(f32 *)(iVar20 + 0x4c) = (moby->rotation).w;
        pMVar19 = mobyfunc::CreateMoby(0x406);
        *(MobyInstance **)((int)pvVar23 + 0x138) = pMVar19;
        pMVar19->drawDistance = 0x40;
        iVar22 = iVar22 + 1;
        *(undefined1 *)(*(int *)((int)pvVar23 + 0x138) + 0x31) = 1;
        *(undefined8 *)(*(int *)((int)pvVar23 + 0x138) + 0x38) = *(undefined8 *)&moby->color;
        *(MobyModeBit *)(*(int *)((int)pvVar23 + 0x138) + 0x34) = moby->modeBits;
        iVar20 = *(int *)((int)pvVar23 + 0x138);
        *(f32 *)(iVar20 + 0x10) = (moby->pos).x;
        *(f32 *)(iVar20 + 0x14) = (moby->pos).y;
        *(f32 *)(iVar20 + 0x18) = (moby->pos).z;
        *(f32 *)(iVar20 + 0x1c) = (moby->pos).w;
        iVar20 = *(int *)((int)pvVar23 + 0x138);
        pvVar23 = (void *)((int)pvVar23 + 4);
        *(f32 *)(iVar20 + 0x40) = (moby->rotation).x;
        *(f32 *)(iVar20 + 0x44) = (moby->rotation).y;
        *(f32 *)(iVar20 + 0x48) = (moby->rotation).z;
        *(f32 *)(iVar20 + 0x4c) = (moby->rotation).w;
      } while (iVar22 < 10);
      mobyupdate_helpers::M1028_0018f448(moby);
    }
  }
  return;
}



