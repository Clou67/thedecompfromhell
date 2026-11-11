//==== 00270018  ns=mobyupdate_helpers  size=0x2b8
// sig: undefined M1410_00270018(void)
// callers(1): 002708f0 mobyupdate_unsorted::UpdateMoby_1410
// callees(1): 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M1410_00270018(int param_1)

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
  dVar3 = (double)fastfunc::FastWrapRot(*(float *)(iVar2 + 0xb8),mobyutil::g_FrameTime * 2.0943952);
  *(float *)(iVar2 + 0xb8) = (float)dVar3;
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
  dVar3 = (double)fastfunc::FastWrapRot(*(float *)(iVar2 + 0xbc),mobyutil::g_FrameTime * 1.6929693);
  *(float *)(iVar2 + 0xbc) = (float)dVar3;
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
  dVar3 = (double)fastfunc::FastWrapRot(*(float *)(iVar2 + 0xc0),mobyutil::g_FrameTime * 0.9250245);
  *(float *)(iVar2 + 0xc0) = (float)dVar3;
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



//==== 002702d8  ns=mobyupdate_helpers  size=0x170
// sig: undefined M1410_002702d8(void)
// callers(2): 002704bc mobyupdate_helpers::M1410_002704bc; 002708f0 mobyupdate_unsorted::UpdateMoby_1410
// callees(0): 

void mobyupdate_helpers::M1410_002702d8(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  Cuboid *pCVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  pCVar7 = Cuboids;
  iVar2 = *(int *)(param_1 + 0x78);
  uVar9 = 0xffffffff;
  uVar11 = 0;
  *(undefined2 *)(iVar2 + 0xac) = 0xffff;
  uVar8 = 0;
  iVar10 = iVar2;
  do {
    iVar3 = *(int *)(iVar10 + 0x80);
    fVar4 = *(float *)(param_1 + 0x14) - pCVar7[iVar3].pos.y;
    fVar5 = *(float *)(param_1 + 0x10) - pCVar7[iVar3].pos.x;
    fVar6 = *(float *)(param_1 + 0x18) - pCVar7[iVar3].pos.z;
    if (SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) < 1.0) {
      *(short *)(iVar2 + 0xac) = (short)uVar11;
      uVar9 = uVar11;
    }
    uVar11 = uVar11 + 1;
    iVar10 = iVar10 + 4;
  } while ((int)uVar11 < 3);
  if ((UnlockableItems.mapOMatic == '\0') && ((uVar9 & 0xffff) != 2)) {
    *(undefined1 *)(param_1 + 0x31) = 0;
    *(undefined1 *)(param_1 + 0x20) = 6;
    *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) | 1;
  }
  else {
    uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x10);
    *(undefined1 *)(param_1 + 0x31) = 1;
    *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xfffe;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  sVar1 = *(short *)(iVar2 + 0xac);
  *(undefined4 *)(param_1 + 0x94) = uVar8;
  pCVar7 = Cuboids;
  iVar10 = *(int *)(iVar2 + (int)((longlong)sVar1 << 2) + 0x80);
  *(float *)(iVar2 + 0x60) = Cuboids[iVar10].pos.x;
  *(float *)(iVar2 + 100) = pCVar7[iVar10].pos.y;
  *(float *)(iVar2 + 0x68) = pCVar7[iVar10].pos.z;
  *(float *)(iVar2 + 0x6c) = pCVar7[iVar10].pos.w;
  *(float *)(iVar2 + 0x70) = pCVar7[iVar10].rot.x;
  *(float *)(iVar2 + 0x74) = pCVar7[iVar10].rot.y;
  *(float *)(iVar2 + 0x78) = pCVar7[iVar10].rot.z;
  *(float *)(iVar2 + 0x7c) = pCVar7[iVar10].rot.w;
  return;
}



//==== 00270448  ns=mobyupdate_helpers  size=0x74
// sig: undefined M1410_00270448(void)
// callers(0): 
// callees(0): 

MobyInstance * mobyupdate_helpers::M1410_00270448(int param_1,short param_2)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)];
  if (puVar2 != (ushort *)0x0) {
    do {
      if (*(short *)((int)MobyInstance[*puVar2 & 0x7fff].pVar + 0xac) == param_2) {
        return MobyInstance + (*puVar2 & 0x7fff);
      }
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return (MobyInstance *)0x0;
}



//==== 002704bc  ns=mobyupdate_helpers  size=0x140
// sig: undefined M1410_002704bc(void)
// callers(1): 002708f0 mobyupdate_unsorted::UpdateMoby_1410
// callees(1): 002702d8 mobyupdate_helpers::M1410_002702d8

void mobyupdate_helpers::M1410_002704bc(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  Cuboid *pCVar4;
  short sVar5;
  ushort *puVar6;
  MobyInstance *pMVar7;
  
  pCVar4 = Cuboids;
  iVar2 = *(int *)(param_1 + 0x78);
  sVar5 = *(short *)(iVar2 + 0xae);
  puVar6 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)];
  if (puVar6 != (ushort *)0x0) {
    do {
      pMVar7 = MobyInstance + (*puVar6 & 0x7fff);
      if (*(short *)((int)pMVar7->pVar + 0xac) == sVar5) {
        if (pMVar7 != (MobyInstance *)0x0) {
          iVar3 = *(int *)(iVar2 + (int)((longlong)*(short *)(iVar2 + 0xac) << 2) + 0x80);
          (pMVar7->pos).x = Cuboids[iVar3].pos.x;
          (pMVar7->pos).y = pCVar4[iVar3].pos.y;
          (pMVar7->pos).z = pCVar4[iVar3].pos.z;
          (pMVar7->pos).w = pCVar4[iVar3].pos.w;
          pCVar4 = Cuboids;
          iVar3 = *(int *)(iVar2 + (int)((longlong)*(short *)(iVar2 + 0xac) << 2) + 0x80);
          (pMVar7->rotation).x = Cuboids[iVar3].rot.x;
          (pMVar7->rotation).y = pCVar4[iVar3].rot.y;
          (pMVar7->rotation).z = pCVar4[iVar3].rot.z;
          (pMVar7->rotation).w = pCVar4[iVar3].rot.w;
          M1410_002702d8(pMVar7);
          sVar5 = *(short *)(iVar2 + 0xae);
        }
        break;
      }
      uVar1 = *puVar6;
      puVar6 = puVar6 + 1;
    } while (-1 < (short)uVar1);
  }
  *(short *)(iVar2 + 0xac) = sVar5;
  return;
}



//==== 00270600  ns=mobyupdate_helpers  size=0xc4
// sig: undefined M1410_00270600(void)
// callers(0): 
// callees(2): 00109c30 mobyutil::OrganicDelt; 00117390 mobyutil::MB_PathEvalSpline

bool mobyupdate_helpers::M1410_00270600(int param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x78);
  mobyutil::OrganicDelt
            (1.0,*(float *)(iVar1 + 200),*(float *)(iVar1 + 200),*(float *)(iVar1 + 0xc4),
             (float *)(iVar1 + 0xb0),0x2705fc,(float *)(iVar1 + 0xb4));
  lVar3 = (longlong)(**(int **)(iVar1 + 0xa4) + -1);
  mobyutil::MB_PathEvalSpline
            ((double)(*(float *)(iVar1 + 0xb0) * (float)lVar3),*(int **)(iVar1 + 0xa4),lVar3,0,
             iVar1 + 0x60,iVar1 + 0x70,0);
  uVar2 = (int)*(uint *)(iVar1 + 0xb0) >> 0x1f;
  return 0x3f7fffff < (int)((uVar2 >> 1 ^ *(uint *)(iVar1 + 0xb0)) - uVar2);
}



//==== 002706c4  ns=mobyupdate_helpers  size=0xc4
// sig: undefined M1410_002706c4(void)
// callers(1): 002708f0 mobyupdate_unsorted::UpdateMoby_1410
// callees(1): 0011aeec mobyutil::MB_ShowPersistentMessage

void mobyupdate_helpers::M1410_002706c4(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(*(int *)(param_1 + 0x78) + 0xae);
  if (sVar1 == 4) {
    mobyutil::MB_ShowPersistentMessage(8,0x1399);
  }
  else if (sVar1 == 3) {
    mobyutil::MB_ShowPersistentMessage(8,0x139c);
  }
  else if (sVar1 == 2) {
    mobyutil::MB_ShowPersistentMessage(8,0x139a);
  }
  else if (sVar1 == 1) {
    mobyutil::MB_ShowPersistentMessage(8,0x3e8a);
  }
  else if (sVar1 == 0) {
    mobyutil::MB_ShowPersistentMessage(8,0x3e89);
  }
  else {
    mobyutil::MB_ShowPersistentMessage(8,0x139b);
  }
  return;
}



//==== 00270798  ns=mobyupdate_helpers  size=0x148
// sig: undefined M1410_00270798(void)
// callers(1): 002708f0 mobyupdate_unsorted::UpdateMoby_1410
// callees(0): 

void mobyupdate_helpers::M1410_00270798(int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  
  iVar2 = *(int *)(param_1 + 0x78);
  sVar1 = *(short *)(iVar2 + 0xac);
  if (sVar1 < 1) {
    if (-1 < sVar1) {
      *(undefined2 *)(iVar2 + 0xae) = 1;
      *(Spline **)(iVar2 + 0xa4) = Splines[*(int *)(iVar2 + 0x90)];
    }
  }
  else if (sVar1 < 2) {
    *(undefined2 *)(iVar2 + 0xae) = 0;
    *(Spline **)(iVar2 + 0xa4) = Splines[*(int *)(iVar2 + 0x94)];
  }
  else if (sVar1 < 3) {
    *(undefined2 *)(iVar2 + 0xae) = 1;
    *(Spline **)(iVar2 + 0xa4) = Splines[*(int *)(iVar2 + 0x9c)];
  }
  piVar3 = *(int **)(iVar2 + 0xa4);
  fVar4 = 1.0 / (SQRT(((float)piVar3[6] - (float)piVar3[10]) *
                      ((float)piVar3[6] - (float)piVar3[10]) +
                      ((float)piVar3[4] - (float)piVar3[8]) * ((float)piVar3[4] - (float)piVar3[8])
                      + ((float)piVar3[5] - (float)piVar3[9]) *
                        ((float)piVar3[5] - (float)piVar3[9])) * (float)(longlong)*piVar3);
  *(float *)(iVar2 + 0xc4) = mobyutil::g_FrameTime * 20.0 * fVar4;
  fVar5 = DAT_0071f418;
  *(undefined4 *)(iVar2 + 0xb0) = 0;
  *(undefined4 *)(iVar2 + 0xb4) = 0;
  *(float *)(iVar2 + 200) = fVar5 * 5.0 * fVar4;
  return;
}



//==== 002708f0  ns=mobyupdate_unsorted  size=0x774
// sig: undefined UpdateMoby_1410(MobyInstance * moby)
// callers(0): 
// callees(16): 00109c30 mobyutil::OrganicDelt; 00112900 mobyutil::MB_GetOrientation; 00117390 mobyutil::MB_PathEvalSpline; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 0026fe98 mobyupdate_helpers::M1410_0026fe98; 00270018 mobyupdate_helpers::M1410_00270018; 002702d8 mobyupdate_helpers::M1410_002702d8; 002704bc mobyupdate_helpers::M1410_002704bc; 002706c4 mobyupdate_helpers::M1410_002706c4; 00270798 mobyupdate_helpers::M1410_00270798; 004d407c FUN_004d407c; 005010c0 fastfunc::FastNormalizeRMtx4; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

/* Moby 1410 */

void mobyupdate_unsorted::UpdateMoby_1410(MobyInstance *moby)

{
  u8 uVar1;
  ushort uVar2;
  short sVar3;
  void *pvVar4;
  void *pvVar5;
  u16 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  MobyInstance *pMVar11;
  Cuboid *pCVar12;
  ushort *puVar13;
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
  Vec4 local_110;
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f4;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_cc;
  float local_c8;
  float local_bc;
  float local_ac;
  float local_9c;
  longlong local_80;
  
  lVar9 = (longlong)(int)moby;
  uVar8 = ZEXT48(&stack0x00000000);
  pvVar4 = moby->pVar;
  dVar21 = (double)(moby->pos).x;
  dVar22 = (double)(moby->pos).y;
  dVar23 = (double)(moby->pos).z;
  FUN_004d407c(lVar9,(ulonglong)(LZCOUNT(moby->modeBits & 1) << 0x20) >> 0x25);
  uVar1 = moby->state;
  if (uVar1 == '\x06') {
    if (UnlockableItems.mapOMatic != '\0') {
      puVar6 = moby->pClass->collision;
      moby->enabled = '\x01';
      moby->collision = puVar6;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
            TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
      moby->state = '\x01';
    }
  }
  else if (uVar1 == '\x05') {
    mobyutil::OrganicDelt
              (1.0,DAT_0071f418,DAT_0071f418,mobyutil::g_FrameTime * 0.5,
               (float *)((int)pvVar4 + 0xb0),0x720000,(float *)((int)pvVar4 + 0xb4));
    local_80 = (longlong)**(int **)((int)pvVar4 + 0xa4);
    pCVar12 = Cuboids + *(int *)((int)pvVar4 +
                                (int)((longlong)*(short *)((int)pvVar4 + 0xae) << 2) + 0x80);
    dVar20 = (double)(pCVar12->pos).x;
    dVar19 = (double)(pCVar12->pos).y;
    dVar18 = (double)(pCVar12->pos).z;
    dVar17 = (double)(pCVar12->pos).w;
    dVar16 = (double)(pCVar12->rot).y;
    dVar15 = (double)(pCVar12->rot).z;
    mobyutil::MB_PathEvalSpline
              ((double)local_80,*(int **)((int)pvVar4 + 0xa4),pCVar12,0,uVar8 - 0xe0,uVar8 - 0xd0,0)
    ;
    dVar14 = (double)*(float *)((int)pvVar4 + 0xb0);
    *(float *)((int)pvVar4 + 0x60) =
         (float)(dVar14 * (double)(float)(dVar20 - (double)local_e0) + (double)local_e0);
    *(float *)((int)pvVar4 + 100) =
         (float)(dVar14 * (double)(float)(dVar19 - (double)local_dc) + (double)local_dc);
    *(float *)((int)pvVar4 + 0x6c) = (float)dVar17;
    *(float *)((int)pvVar4 + 0x68) =
         (float)(dVar14 * (double)(float)(dVar18 - (double)local_d8) + (double)local_d8);
    dVar14 = (double)fastfunc::FastDiffRots(dVar16,(double)local_cc);
    dVar14 = (double)fastfunc::FastWrapRot
                               ((float)(dVar14 * (double)*(float *)((int)pvVar4 + 0xb0)),local_cc);
    *(float *)((int)pvVar4 + 0x74) = (float)dVar14;
    dVar14 = (double)fastfunc::FastDiffRots(dVar15,(double)local_c8);
    dVar14 = (double)fastfunc::FastWrapRot
                               ((float)(dVar14 * (double)*(float *)((int)pvVar4 + 0xb0)),local_c8);
    *(float *)((int)pvVar4 + 0x78) = (float)dVar14;
    uVar7 = (int)*(uint *)((int)pvVar4 + 0xb0) >> 0x1f;
    if (0x3f7fffff < (int)((uVar7 >> 1 ^ *(uint *)((int)pvVar4 + 0xb0)) - uVar7)) {
      *(undefined4 *)((int)pvVar4 + 0xb0) = 0;
      *(undefined4 *)((int)pvVar4 + 0xb4) = 0;
      moby->state = '\x01';
      mobyupdate_helpers::M1410_002704bc(lVar9);
    }
  }
  else if (uVar1 == '\x04') {
    pvVar5 = moby->pVar;
    mobyutil::OrganicDelt
              (1.0,*(float *)((int)pvVar5 + 200),*(float *)((int)pvVar5 + 200),
               *(float *)((int)pvVar5 + 0xc4),(float *)((int)pvVar5 + 0xb0),0x2708e0,
               (float *)((int)pvVar5 + 0xb4));
    local_80 = (longlong)(**(int **)((int)pvVar5 + 0xa4) + -1);
    mobyutil::MB_PathEvalSpline
              ((double)(*(float *)((int)pvVar5 + 0xb0) * (float)local_80),
               *(int **)((int)pvVar5 + 0xa4),local_80,0,(int)pvVar5 + 0x60,(int)pvVar5 + 0x70,0);
    uVar7 = (int)*(uint *)((int)pvVar5 + 0xb0) >> 0x1f;
    if (0x3f7fffff < (int)((uVar7 >> 1 ^ *(uint *)((int)pvVar5 + 0xb0)) - uVar7)) {
      *(undefined4 *)((int)pvVar4 + 0xb0) = 0;
      *(undefined4 *)((int)pvVar4 + 0xb4) = 0;
      moby->state = '\x05';
    }
  }
  else if (uVar1 == '\x03') {
    mobyutil::OrganicDelt
              (1.0,DAT_0071f418,DAT_0071f418,mobyutil::g_FrameTime * 0.5,
               (float *)((int)pvVar4 + 0xb0),0x720000,(float *)((int)pvVar4 + 0xb4));
    pCVar12 = Cuboids + *(int *)((int)pvVar4 +
                                (int)((longlong)*(short *)((int)pvVar4 + 0xac) << 2) + 0x80);
    dVar19 = (double)(pCVar12->pos).x;
    dVar18 = (double)(pCVar12->pos).y;
    dVar17 = (double)(pCVar12->pos).z;
    dVar16 = (double)(pCVar12->rot).y;
    dVar15 = (double)(pCVar12->rot).z;
    mobyutil::MB_PathEvalSpline
              (0,*(undefined4 *)((int)pvVar4 + 0xa4),pCVar12,0,uVar8 - 0x100,uVar8 - 0xf0,0);
    dVar14 = (double)*(float *)((int)pvVar4 + 0xb0);
    *(undefined4 *)((int)pvVar4 + 0x6c) = local_f4;
    *(float *)((int)pvVar4 + 0x60) =
         (float)(dVar14 * (double)(float)((double)local_100 - dVar19) + dVar19);
    *(float *)((int)pvVar4 + 100) =
         (float)(dVar14 * (double)(float)((double)local_fc - dVar18) + dVar18);
    *(float *)((int)pvVar4 + 0x68) =
         (float)(dVar14 * (double)(float)((double)local_f8 - dVar17) + dVar17);
    dVar14 = (double)fastfunc::FastDiffRots((double)local_ec,dVar16);
    dVar14 = (double)fastfunc::FastWrapRot
                               ((float)(dVar14 * (double)*(float *)((int)pvVar4 + 0xb0)),
                                (float)dVar16);
    *(float *)((int)pvVar4 + 0x74) = (float)dVar14;
    dVar14 = (double)fastfunc::FastDiffRots((double)local_e8,dVar15);
    dVar14 = (double)fastfunc::FastWrapRot
                               ((float)(dVar14 * (double)*(float *)((int)pvVar4 + 0xb0)),
                                (float)dVar15);
    *(float *)((int)pvVar4 + 0x78) = (float)dVar14;
    uVar7 = (int)*(uint *)((int)pvVar4 + 0xb0) >> 0x1f;
    if (0x3f7fffff < (int)((uVar7 >> 1 ^ *(uint *)((int)pvVar4 + 0xb0)) - uVar7)) {
      *(undefined4 *)((int)pvVar4 + 0xb0) = 0;
      *(undefined4 *)((int)pvVar4 + 0xb4) = 0;
      moby->state = '\x04';
    }
  }
  else if (uVar1 != '\x02') {
    if (uVar1 == '\x01') {
      if (((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) &&
         (fastfunc::FastNormalizeRMtx4(uVar8 - 0xc0,lVar9 + 0xc0),
         ABS(local_9c * (g_heroPosition.z - (moby->pos).z) +
             local_bc * (g_heroPosition.x - (moby->pos).x) +
             local_ac * (g_heroPosition.y - (moby->pos).y)) < 1.2)) {
        mobyupdate_helpers::M1410_00270798(lVar9);
        mobyupdate_helpers::M1410_002706c4(lVar9);
        if (((g_buttonsPressedThisFrame & TRIANGLE) != 0) && (mobyutil::g_HelpMsgOwner == 8)) {
          moby->state = '\x03';
          puVar13 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)moby->group];
          if (puVar13 != (ushort *)0x0) {
            do {
              pMVar11 = MobyInstance + (*puVar13 & 0x7fff);
              if (*(short *)((int)pMVar11->pVar + 0xac) == *(short *)((int)pvVar4 + 0xae)) {
                if (pMVar11 != (MobyInstance *)0x0) {
                  pMVar11->collision = (ushort *)0x0;
                  pMVar11->enabled = '\0';
                  pMVar11->state = '\x02';
                  pMVar11->modeBits = pMVar11->modeBits | DISABLED;
                }
                break;
              }
              uVar2 = *puVar13;
              puVar13 = puVar13 + 1;
            } while (-1 < (short)uVar2);
          }
        }
      }
    }
    else if (uVar1 == '\0') {
      *(undefined2 *)((int)pvVar4 + 0xaa) = 0xffff;
      mobyupdate_helpers::M1410_002702d8(lVar9);
    }
  }
  mobyupdate_helpers::M1410_00270018(lVar9);
  uVar1 = moby->state;
  if (((uVar1 == '\x03') || (uVar1 == '\x04')) || (uVar1 == '\x05')) {
    DAT_00969ed2 = 2;
    DAT_00969ed4 = 2;
    mobyupdate_helpers::M1410_0026fe98(lVar9);
    iVar10 = sound::IsMobyPlayingSound(moby,(int)*(short *)((int)pvVar4 + 0xaa));
    if (iVar10 == 0) {
      iVar10 = sound::PlayMobySound(0,4,moby);
      *(short *)((int)pvVar4 + 0xaa) = (short)iVar10;
    }
  }
  else {
    iVar10 = sound::IsMobyPlayingSound(moby,(int)*(short *)((int)pvVar4 + 0xaa));
    if (iVar10 != 0) {
      sVar3 = *(short *)((int)pvVar4 + 0xaa);
      if (((sVar3 != -1) &&
          (iVar10 = (int)((longlong)sVar3 << 7) - (int)((longlong)sVar3 << 4),
          *(MobyInstance **)((int)sound::g_SoundChannels + iVar10 + 0x18) == moby)) &&
         (*(char *)((int)sound::g_SoundChannels + iVar10 + 4) != '\0')) {
        sound::sound_Kill((int)sVar3);
      }
      *(undefined2 *)((int)pvVar4 + 0xaa) = 0xffff;
    }
  }
  local_110.x = (float)((double)(moby->pos).x - dVar21);
  local_110.y = (float)((double)(moby->pos).y - dVar22);
  local_110.w = (moby->pos).w;
  local_110.z = (float)((double)(moby->pos).z - dVar23);
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar4 + 0x20),&local_110,uVar8 - 0x120,lVar9 + 0x40);
  return;
}



//==== 00271064  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1413_00271064(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1413_00271064(void)

{
  DAT_007a211c = 0x10000;
  return;
}



//==== 00271078  ns=mobyupdate_unsorted  size=0x240
// sig: undefined UpdateMoby_1413(MobyInstance * moby)
// callers(0): 
// callees(2): 0007b310 help::Help_QueueMessage; 00110b70 mobyutil::MB_IsPntInCuboid
// strings: 00a1000c: 'None'

/* Moby 1413 */

ulonglong mobyupdate_unsorted::UpdateMoby_1413(MobyInstance *moby)

{
  byte bVar1;
  uint uVar2;
  int iVar4;
  ulonglong uVar3;
  int iVar5;
  int *piVar6;
  
  piVar6 = (int *)moby->pVar;
  if (moby->state == '\0') {
    moby->state = '\x01';
    moby->updateDistance = -1;
  }
  if (CHAR_ARRAY_00a1000c._24_2_ == 0) {
    help::Help_QueueMessage(STR_WELCOME_TO_THE_GADGETRON_0x0003,3);
  }
  if ((CHAR_ARRAY_00a1000c._928_2_ == 0) &&
     (iVar4 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar6[4]), iVar4 != 0)) {
    help::Help_QueueMessage(STR_YOU_CAN_INTERRUPT_HELPDESK_0x4E2A,0x74);
  }
  if (((CHAR_ARRAY_00a1000c._72_2_ == 0) &&
      (iVar4 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar6), iVar4 != 0)) &&
     (CHAR_ARRAY_00a0feec._8_2_ == 0)) {
    help::Help_QueueMessage(STR_GADGETRONS_OMNIWRENCH_8000_INCLUDES_0x0005,9);
  }
  if (((CHAR_ARRAY_00a1000c._64_2_ == 0) && (CHAR_ARRAY_00a0feec._0_2_ == 0)) &&
     (iVar4 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar6[1]), iVar4 != 0)) {
    help::Help_QueueMessage(STR_TO_PERFORM_A_POWERFUL_0x0004,8);
  }
  if ((CHAR_ARRAY_00a1000c._0_2_ == 0) &&
     (iVar4 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar6[2]), iVar4 != 0)) {
    help::Help_QueueMessage(STR_TO_USE_YOUR_BOMB_0x0000,0);
  }
  uVar3 = (ulonglong)(ushort)CHAR_ARRAY_00a1000c._8_2_;
  if ((CHAR_ARRAY_00a1000c._8_2_ == 0) &&
     (uVar3 = (ulonglong)(ushort)CHAR_ARRAY_00a1000c._16_2_, CHAR_ARRAY_00a1000c._16_2_ == 0)) {
    iVar4 = 0;
    do {
      uVar2 = piVar6[5];
      uVar3 = (ulonglong)uVar2;
      if (uVar2 != 0xffffffff) {
        if (MobyInstance + uVar2 != (MobyInstance *)0x0) {
          bVar1 = MobyInstance[uVar2].state;
          uVar3 = (ulonglong)bVar1;
          if ((bVar1 != 0xfe) && (bVar1 != 0xfd)) goto LAB_0027128c;
        }
        if (g_heroHealth < 4) {
          iVar5 = help::Help_QueueMessage(STR_YOU_JUST_PICKED_UP_0x0001,1);
          uVar3 = (ulonglong)iVar5;
        }
        else {
          iVar5 = help::Help_QueueMessage(STR_THATS_NANOTECH_WHENEVER_YOU_0x0002,2);
          uVar3 = (ulonglong)iVar5;
        }
      }
LAB_0027128c:
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar4 < 4);
  }
  return uVar3;
}



//==== 002712b8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1416_002712b8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1416_002712b8(void)

{
  DAT_007a218c = 0x10000;
  return;
}



//==== 00271300  ns=mobyupdate_unsorted  size=0x400
// sig: undefined UpdateMoby_1416(MobyInstance * moby)
// callers(0): 
// callees(4): 000fcc68 mobyutil::MB_randRot; 0015d12c sound::PlayMobySound; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt

/* Moby 1416 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1416(MobyInstance *moby)

{
  bool bVar1;
  ushort uVar2;
  int *piVar3;
  uint uVar4;
  longlong lVar5;
  MobyInstance *pMVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  piVar3 = (int *)moby->pVar;
  if (moby->state == 0) {
    dVar11 = (double)mobyutil::MB_randRot();
    piVar3[3] = (int)(float)dVar11;
    uVar2 = moby->uid;
    (moby->pos).z = (moby->pos).z - 0.35;
    if ((((&DAT_00a545c4)[(short)uVar2] == '\0') &&
        ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar2 >> 5) << 2))
         & 1 << (uVar2 & 0x1f)) == 0)) &&
       ((piVar3[2] == 0 || (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1)))) {
      moby->state = '\x01';
      pMVar6 = (MobyInstance *)0x1;
    }
    else {
      moby->setByGroup = '\x02';
      moby->state = '\x02';
      moby->field60_0x90 = 0x80208020;
      iVar10 = *piVar3;
      pMVar6 = (MobyInstance *)0x2;
      if ((iVar10 != -1) && (pMVar6 = (MobyInstance *)0x0, 0 < Splines[iVar10]->cnt)) {
        iVar9 = 0;
        do {
          if (*(int *)((int)&Splines[iVar10]->points[0].w + iVar9) == piVar3[1]) {
            *(undefined4 *)((int)&Splines[iVar10]->points[0].w + iVar9) = 0;
            iVar10 = *piVar3;
          }
          pMVar6 = (MobyInstance *)((int)&(pMVar6->bSphere).x + 1);
          iVar9 = iVar9 + 0x10;
        } while ((int)pMVar6 < Splines[iVar10]->cnt);
      }
    }
  }
  else {
    pMVar6 = moby;
    if (moby->state < 2) {
      dVar12 = (double)fastfunc::FastWrapRot((float)piVar3[3],mobyutil::g_FrameTime * 6.2831855);
      dVar11 = (double)(float)(3.141592502593994 - dVar12);
      if (dVar12 - (double)(float)(3.141592502593994 - dVar12) < 0.0) {
        dVar11 = dVar12;
      }
      dVar13 = (double)(float)(-3.141592502593994 - dVar12);
      if ((double)(float)(-3.141592502593994 - dVar12) - dVar11 < 0.0) {
        dVar13 = dVar11;
      }
      dVar11 = (double)(float)(dVar13 * dVar13);
      dVar15 = (double)(float)(dVar11 * (double)(float)(dVar11 * dVar13));
      dVar14 = (double)(float)(dVar11 * dVar15);
      piVar3[3] = (int)(float)dVar12;
      lVar5 = fastfunc::FastDoubleToInt
                        ((double)((((float)(dVar11 * dVar14) * 2.601887e-06 +
                                   (float)(dVar14 * -0.0001980741071747616 +
                                          (double)(float)(dVar15 * 0.008333025500178337 +
                                                         (double)(float)((double)(float)(dVar11 * 
                                                  dVar13) * -0.16666656732559204 + dVar13)))) * 4.0
                                  - 3.0) * 128.0));
      lVar7 = lVar5 + (lVar5 + -0x20 >> 0x3f & 0x20U - lVar5);
      uVar8 = lVar7 + (0x80 - lVar5 >> 0x3f & 0x80U - lVar7);
      bVar1 = g_standingOnMoby == moby;
      moby->field60_0x90 =
           (uint)((uVar8 & 0xffffffff) << 8) | (uint)uVar8 | (uint)((uVar8 & 0xffffffff) << 0x10) |
           0x80000000;
      pMVar6 = (MobyInstance *)&hero::g_heroMtx;
      if ((bVar1) && (pMVar6 = (MobyInstance *)(uint)g_framesNotGrounded, g_framesNotGrounded == 0))
      {
        uVar2 = moby->uid;
        iVar9 = (int)((longlong)((int)(short)uVar2 >> 5) << 2);
        iVar10 = (int)((longlong)((int)(short)uVar2 >> 5) << 2);
        uVar4 = *(uint *)(&DAT_00a54dd0 + iVar10);
        *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar9) =
             *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar9) | 1 << (uVar2 & 0x1f);
        *(uint *)(&DAT_00a54dd0 + iVar10) = uVar4 | 1 << (uVar2 & 0x1f);
        moby->state = '\x02';
        moby->setByGroup = '\x01';
        moby->field60_0x90 = 0x80208020;
        pMVar6 = (MobyInstance *)sound::PlayMobySound(0,0,moby);
        iVar10 = *piVar3;
        if ((iVar10 != -1) && (pMVar6 = (MobyInstance *)0x0, 0 < Splines[iVar10]->cnt)) {
          iVar9 = 0;
          do {
            if (*(int *)((int)&Splines[iVar10]->points[0].w + iVar9) == piVar3[1]) {
              *(undefined4 *)((int)&Splines[iVar10]->points[0].w + iVar9) = 0;
              iVar10 = *piVar3;
            }
            pMVar6 = (MobyInstance *)((int)&(pMVar6->bSphere).x + 1);
            iVar9 = iVar9 + 0x10;
          } while ((int)pMVar6 < Splines[iVar10]->cnt);
        }
      }
    }
  }
  return pMVar6;
}



//==== 00271700  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1417_00271700(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1417_00271700(void)

{
  DAT_007a21fc = 0x10000;
  return;
}



//==== 00271740  ns=mobyupdate_helpers  size=0x838
// sig: undefined M1417_00271740(void)
// callers(1): 00272248 mobyupdate_unsorted::UpdateMoby_1417_FlyingCar
// callees(6): 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00109b40 mobyutil::AccelDelt; 0010ce18 mobyutil::MB_PathMoveDist; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 0015cdb0 sound::sound_Kill; 005025e0 fastfunc::FastDiffRots

undefined8 mobyupdate_helpers::M1417_00271740(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined2 uVar7;
  MobyModeBit MVar8;
  void *pvVar9;
  f32 fVar10;
  uint uVar11;
  ulonglong *puVar12;
  int iVar13;
  MobyInstance *pMVar14;
  ulonglong uVar15;
  int iVar19;
  undefined8 uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined *unused;
  float *pfVar21;
  longlong lVar20;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar27;
  ulonglong in_f26;
  double dVar28;
  double dVar29;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar30;
  ulonglong in_f29;
  double dVar31;
  ulonglong in_f30;
  double dVar32;
  ulonglong in_f31;
  double dVar33;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar18 = uVar15 - 0x140;
  puVar12 = (ulonglong *)lVar18;
  *puVar12 = uVar15;
  puVar12[0x2a] = in_LR;
  puVar12[0x20] = in_f24;
  puVar12[0x21] = in_f25;
  puVar12[0x22] = in_f26;
  puVar12[0x23] = in_f27;
  puVar12[0x24] = in_f28;
  puVar12[0x25] = in_f29;
  puVar12[0x26] = in_f30;
  puVar12[0x27] = in_f31;
  puVar12[0x1f] = unaff_r31;
  puVar12[0x1d] = unaff_r29;
  puVar12[0x1e] = unaff_r30;
  pvVar9 = param_1->pVar;
  iVar19 = *(int *)((int)pvVar9 + 0x78);
  uVar7 = *(undefined2 *)((int)pvVar9 + 0x8e);
  fVar1 = *(float *)((int)pvVar9 + 200) * mobyutil::g_FrameTime;
  puVar12[0x1c] = unaff_r28;
  puVar12[0x1b] = unaff_r27;
  iVar19 = mobyutil::MB_PathMoveDist
                     ((double)fVar1,Splines[iVar19],uVar15 - 0xd0,(int)pvVar9 + 0x70,
                      (int)pvVar9 + 0x74,iVar19 * 4,uVar7);
  fVar1 = mobyutil::g_FrameTime;
  fVar10 = (param_1->pos).z;
  uVar11 = (int)fVar10 >> 0x1f;
  if (((*(short *)((int)pvVar9 + 0x8e) == 0) && (iVar19 != 0)) ||
     ((int)((uVar11 >> 1 ^ (uint)fVar10) - uVar11) <=
      (int)(((uint)((int)DAT_007a225c >> 0x1f) >> 1 ^ DAT_007a225c) - ((int)DAT_007a225c >> 0x1f))))
  {
    mobyutil::MB_SpawnExplosionSparks
              (0x4014000000000000,0x402a000000000000,param_1,&param_1->pos,&DAT_00271718,
               0xffffffffffffffff);
    param_1->state = '\x03';
    iVar19 = *(int *)((int)pvVar9 + 0xa0);
    param_1->modeBits = param_1->modeBits | (UNK_40|DISABLED);
    param_1->collision = (ushort *)0x0;
    pMVar14 = MobyInstance;
    if (-1 < iVar19) {
      MVar8 = MobyInstance[iVar19].modeBits;
      MobyInstance[iVar19].pos.z = 5.0;
      pMVar14[iVar19].pos.y = 5.0;
      pMVar14[iVar19].pos.x = 5.0;
      pMVar14[iVar19].modeBits = MVar8 | (UNK_40|DISABLED);
    }
    iVar19 = *(int *)((int)pvVar9 + 0x7c);
    if (((iVar19 != -1) && (sound::g_SoundChannels[iVar19].pMoby == param_1)) &&
       (sound::g_SoundChannels[iVar19].state != '\0')) {
      sound::sound_Kill(iVar19);
    }
    uVar16 = 0;
    *(undefined4 *)((int)pvVar9 + 0x7c) = 0xffffffff;
  }
  else {
    if (((g_heroState == PULLING_GREEN_SWINGSHOT) || (g_heroState == UNK_26)) &&
       ((-1 < *(int *)((int)pvVar9 + 0xa0) &&
        (DAT_0096a644 == MobyInstance + *(int *)((int)pvVar9 + 0xa0))))) {
      unused = &DAT_007a0000;
      fVar5 = *(float *)((int)pvVar9 + 0xb8) * DAT_0071f40c + *(float *)((int)pvVar9 + 0xb4);
      *(float *)((int)pvVar9 + 0xb4) = fVar5;
      fVar1 = fVar1 * DAT_007a2250;
      if (fVar1 < fVar5) {
        *(float *)((int)pvVar9 + 0xb4) = fVar1;
        fVar5 = fVar1;
      }
      fVar5 = *(float *)((int)pvVar9 + 0xb0) + fVar5;
      *(float *)((int)pvVar9 + 0xb0) = fVar5;
    }
    else if (((hero::g_heroStateType == 0xe) && (-1 < *(int *)((int)pvVar9 + 0xa0))) &&
            (DAT_0096a674 == MobyInstance + *(int *)((int)pvVar9 + 0xa0))) {
      unused = &DAT_007a0000;
      fVar5 = *(float *)((int)pvVar9 + 0xb8) * DAT_0071f40c + *(float *)((int)pvVar9 + 0xb4);
      *(float *)((int)pvVar9 + 0xb4) = fVar5;
      fVar1 = fVar1 * DAT_007a2250;
      if (fVar1 < fVar5) {
        *(float *)((int)pvVar9 + 0xb4) = fVar1;
        fVar5 = fVar1;
      }
      fVar5 = *(float *)((int)pvVar9 + 0xb0) + fVar5;
      *(float *)((int)pvVar9 + 0xb0) = fVar5;
    }
    else {
      unused = (undefined *)0x0;
      *(undefined4 *)((int)pvVar9 + 0xb4) = 0;
      fVar5 = -(fVar1 * DAT_007a2258 - *(float *)((int)pvVar9 + 0xb0));
      *(float *)((int)pvVar9 + 0xb0) = fVar5;
      if (fVar5 < 0.0) {
        *(undefined4 *)((int)pvVar9 + 0xb0) = 0;
        fVar5 = 0.0;
      }
    }
    fVar1 = *(float *)(puVar12 + 0xf);
    *(float *)(puVar12 + 0xf) = fVar1 - fVar5;
    if (fVar1 - fVar5 < 10.0) {
      *(undefined4 *)(puVar12 + 0xf) = 0x41200000;
    }
    dVar27 = 0.0;
    mobyutil::AccelDelt(*(float *)(puVar12 + 0xe),DAT_007a223c,DAT_007a2240,0.0,&(param_1->pos).x,
                        (int)unused,(float *)((int)pvVar9 + 0x80));
    mobyutil::AccelDelt(*(float *)((int)puVar12 + 0x74),DAT_007a223c,DAT_007a2240,(float)dVar27,
                        &(param_1->pos).y,(int)unused,(float *)((int)pvVar9 + 0x84));
    mobyutil::AccelDelt(*(float *)(puVar12 + 0xf),DAT_007a223c,DAT_007a2240,(float)dVar27,
                        &(param_1->pos).z,(int)unused,(float *)((int)pvVar9 + 0x88));
    fVar5 = *(float *)(puVar12 + 0xe) - (param_1->pos).x;
    dVar31 = (double)fVar5;
    dVar32 = (double)*(float *)(puVar12 + 0xf);
    fVar2 = *(float *)((int)puVar12 + 0x74) - (param_1->pos).y;
    dVar30 = (double)fVar2;
    dVar33 = (double)(param_1->pos).z;
    fVar1 = (param_1->rotation).z;
    dVar28 = ABS(dVar31);
    if ((0.009999999776482582 < dVar28) && (dVar25 = ABS(dVar30), 0.009999999776482582 < dVar25)) {
      *(float *)((int)puVar12 + 0x8c) = fVar5;
      *(float *)(puVar12 + 0x12) = fVar2;
      *(float *)((int)puVar12 + 0x94) = (float)(dVar28 - dVar25);
      uVar22 = (ulonglong)(*(uint *)((int)puVar12 + 0x8c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar12 + 0x94) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar12 + 0x12) >> 0x1d) & 4;
      dVar26 = ABS((double)*(float *)((int)puVar12 + 0x8c));
      if ((double)*(float *)((int)puVar12 + 0x94) - dVar27 < 0.0) {
        dVar26 = dVar25;
      }
      fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
      dVar25 = ABS((double)*(float *)(puVar12 + 0x12));
      if ((double)*(float *)((int)puVar12 + 0x94) - dVar27 < 0.0) {
        dVar25 = dVar28;
      }
      fVar2 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
      dVar29 = 0.7853981852531433;
      dVar28 = dVar27;
      if (dVar27 < dVar26) {
        lVar17 = uVar15 - 0x130;
        lVar20 = uVar15 - 0x88;
        lVar23 = uVar15 - 0x78;
        lVar24 = 2;
        fVar6 = (float)(dVar25 - dVar26) / (float)(dVar25 + dVar26);
        fVar3 = fVar6 * fVar6;
        *(float *)((int)puVar12 + 0xc4) = fVar6;
        *(float *)((int)puVar12 + 0xbc) = fVar6;
        *(float *)(puVar12 + 0x18) = fVar6;
        *(float *)(puVar12 + 0x17) = fVar6;
        fVar6 = fVar3 * fVar3;
        *(float *)((int)puVar12 + 0xbc) = *(float *)((int)puVar12 + 0xbc) * fVar3;
        *(float *)(puVar12 + 0x18) = *(float *)(puVar12 + 0x18) * fVar6;
        *(float *)((int)puVar12 + 0xc4) = *(float *)((int)puVar12 + 0xc4) * fVar6 * fVar3;
        do {
          *(float *)((int)lVar17 + 0xb8) = *(float *)((int)lVar17 + 0xa8) * fVar6 * fVar6;
          iVar19 = (int)lVar20;
          lVar17 = lVar17 + 8;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)(iVar19 + 4) * fVar6 * fVar6;
          lVar23 = lVar23 + 8;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        lVar24 = 4;
        lVar23 = uVar15 - 0x88;
        pfVar21 = (float *)&DAT_007358e0;
        lVar17 = lVar18;
        lVar20 = lVar23;
        do {
          fVar6 = *pfVar21;
          fVar3 = pfVar21[1];
          pfVar21 = pfVar21 + 2;
          *(float *)((int)lVar17 + 0xb8) = *(float *)((int)lVar17 + 0xb8) * fVar6;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar3;
          lVar20 = lVar20 + 8;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        lVar20 = 2;
        lVar17 = lVar18;
        do {
          iVar19 = (int)lVar17;
          lVar17 = lVar17 + 0x10;
          iVar13 = (int)lVar23;
          lVar23 = lVar23 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar19 + 0xb8)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar5 + fVar2);
      }
      dVar25 = (double)fastfunc::FastDiffRots((double)fVar1,dVar28);
      mobyutil::OrganicDeltAngSpeed(dVar28,(double)DAT_007a223c,(double)DAT_007a2240,dVar27,param_1)
      ;
      fVar2 = DAT_007a2240;
      fVar5 = DAT_007a223c;
      dVar26 = ABS((double)(float)(dVar32 - dVar33));
      *(float *)((int)puVar12 + 0x84) = (float)(dVar32 - dVar33);
      fVar1 = SQRT((float)(dVar31 * dVar31 + (double)(float)(dVar30 * dVar30)));
      dVar28 = ABS((double)fVar1);
      *(float *)(puVar12 + 0x10) = fVar1;
      *(float *)(puVar12 + 0x11) = (float)(dVar28 - dVar26);
      uVar22 = (ulonglong)(*(uint *)(puVar12 + 0x10) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0x11) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar12 + 0x84) >> 0x1d) & 4;
      pfVar21 = (float *)((uint)(uVar22 << 2) | 0x735900);
      dVar33 = ABS((double)*(float *)(puVar12 + 0x10));
      if ((double)*(float *)(puVar12 + 0x11) - dVar27 < 0.0) {
        dVar33 = dVar26;
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
      fVar1 = pfVar21[1];
      dVar30 = ABS((double)*(float *)((int)puVar12 + 0x84));
      if ((double)*(float *)(puVar12 + 0x11) - dVar27 < 0.0) {
        dVar30 = dVar28;
      }
      dVar28 = dVar27;
      if (dVar27 < dVar33) {
        lVar17 = uVar15 - 0x130;
        lVar20 = uVar15 - 0xa8;
        lVar23 = uVar15 - 0x98;
        lVar24 = 2;
        fVar3 = (float)(dVar30 - dVar33) / (float)(dVar30 + dVar33);
        fVar4 = fVar3 * fVar3;
        *(float *)((int)puVar12 + 0xa4) = fVar3;
        *(float *)((int)puVar12 + 0x9c) = fVar3;
        *(float *)(puVar12 + 0x14) = fVar3;
        *(float *)(puVar12 + 0x13) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)((int)puVar12 + 0x9c) = *(float *)((int)puVar12 + 0x9c) * fVar4;
        *(float *)(puVar12 + 0x14) = *(float *)(puVar12 + 0x14) * fVar3;
        *(float *)((int)puVar12 + 0xa4) = *(float *)((int)puVar12 + 0xa4) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar17 + 0x98) = *(float *)((int)lVar17 + 0x88) * fVar3 * fVar3;
          iVar19 = (int)lVar20;
          lVar17 = lVar17 + 8;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)(iVar19 + 4) * fVar3 * fVar3;
          lVar23 = lVar23 + 8;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        lVar24 = 4;
        lVar23 = uVar15 - 0xa8;
        pfVar21 = (float *)&DAT_007358e0;
        lVar17 = lVar18;
        lVar20 = lVar23;
        do {
          fVar3 = *pfVar21;
          fVar4 = pfVar21[1];
          pfVar21 = pfVar21 + 2;
          *(float *)((int)lVar17 + 0x98) = *(float *)((int)lVar17 + 0x98) * fVar3;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar4;
          lVar20 = lVar20 + 8;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        lVar17 = 2;
        dVar33 = dVar27;
        do {
          iVar19 = (int)lVar18;
          lVar18 = lVar18 + 0x10;
          iVar13 = (int)lVar23;
          lVar23 = lVar23 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar19 + 0x98)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        dVar28 = (double)((float)(dVar33 + dVar29) * fVar6 + fVar1);
      }
      mobyutil::AccelDelt((float)-dVar28,fVar5,fVar2,(float)dVar27,&(param_1->rotation).y,
                          (int)pfVar21,(float *)((int)pvVar9 + 0x94));
      fVar1 = (float)(dVar25 / (double)DAT_007a2248);
      if (1.0 - (float)(dVar25 / (double)DAT_007a2248) < 0.0) {
        fVar1 = 1.0;
      }
      if (fVar1 - -1.0 < 0.0) {
        fVar1 = -1.0;
      }
      mobyutil::AccelDelt(DAT_007a2244 * fVar1,0.003,DAT_007a2240,(float)dVar27,
                          &(param_1->rotation).x,0x271718,(float *)((int)pvVar9 + 0x90));
    }
    uVar16 = 1;
  }
  return uVar16;
}



//==== 00271f80  ns=mobyupdate_helpers  size=0x2ac
// sig: undefined M1417_00271f80(void)
// callers(1): 00272248 mobyupdate_unsorted::UpdateMoby_1417_FlyingCar
// callees(0): 

void mobyupdate_helpers::M1417_00271f80(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  Spline *pSVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  int iVar11;
  longlong lVar10;
  longlong lVar12;
  Spline *pSVar15;
  ulonglong uVar13;
  longlong lVar14;
  int iVar17;
  longlong lVar16;
  float *pfVar18;
  longlong lVar19;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar10 = uVar9 - 0x60;
  puVar8 = (ulonglong *)lVar10;
  *puVar8 = uVar9;
  iVar6 = *(int *)(param_1 + 0x78);
  iVar17 = 0;
  pSVar7 = Splines[*(int *)(iVar6 + 0x78)];
  iVar11 = pSVar7->cnt;
  pSVar15 = pSVar7;
  if (0 < iVar11) {
    do {
      iVar17 = iVar17 + 1;
      pfVar18 = (float *)((int)pSVar7 + ((iVar17 - (iVar17 / iVar11) * iVar11) * 4 + 4) * 4);
      fVar1 = pSVar15->points[0].y - pfVar18[1];
      fVar2 = pSVar15->points[0].x - *pfVar18;
      fVar3 = pSVar15->points[0].z - pfVar18[2];
      iVar11 = pSVar7->cnt;
      pSVar15->points[0].w = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      pSVar15 = (Spline *)pSVar15->points;
    } while (iVar17 < iVar11);
  }
  *(undefined4 *)(iVar6 + 0x70) = 0;
  fVar1 = 0.0;
  *(undefined4 *)(iVar6 + 0x74) = 0;
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
  uVar13 = (ulonglong)(*(uint *)(puVar8 + 6) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 7) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x34) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)(puVar8 + 6));
  if (*(float *)(puVar8 + 7) - 0.0 < 0.0) {
    fVar2 = fVar5;
  }
  fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar13 << 2));
  fVar5 = ABS(*(float *)((int)puVar8 + 0x34));
  if (*(float *)(puVar8 + 7) - 0.0 < 0.0) {
    fVar5 = fVar4;
  }
  fVar4 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
  if (0.0 < fVar2) {
    lVar16 = uVar9 - 0x50;
    lVar14 = uVar9 - 0x24;
    lVar12 = uVar9 - 0x14;
    lVar19 = 2;
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
      iVar11 = (int)lVar14;
      lVar16 = lVar16 + 8;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar12 + 4) = *(float *)(iVar11 + 4) * fVar2 * fVar2;
      lVar12 = lVar12 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar16 = uVar9 - 0x24;
    pfVar18 = (float *)&DAT_007358e0;
    lVar19 = 4;
    lVar12 = lVar16;
    lVar14 = lVar10;
    do {
      fVar2 = *pfVar18;
      fVar5 = pfVar18[1];
      pfVar18 = pfVar18 + 2;
      *(float *)((int)lVar14 + 0x3c) = *(float *)((int)lVar14 + 0x3c) * fVar2;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar12 + 4) = *(float *)((int)lVar12 + 4) * fVar5;
      lVar12 = lVar12 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar12 = 2;
    do {
      iVar11 = (int)lVar10;
      lVar10 = lVar10 + 0x10;
      iVar17 = (int)lVar16;
      lVar16 = lVar16 + 0x10;
      fVar1 = fVar1 + *(float *)(iVar11 + 0x3c) + *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
              *(float *)(iVar17 + 0xc);
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    fVar1 = (fVar1 + 0.7853982) * fVar3 + fVar4;
  }
  *(float *)(param_1 + 0x48) = fVar1;
  *(undefined4 *)(iVar6 + 0x88) = 0;
  *(undefined4 *)(iVar6 + 0x84) = 0;
  *(undefined4 *)(iVar6 + 0x80) = 0;
  *(undefined4 *)(iVar6 + 0x98) = 0;
  *(undefined4 *)(iVar6 + 0x94) = 0;
  *(undefined4 *)(iVar6 + 0x90) = 0;
  return;
}



//==== 00272248  ns=mobyupdate_unsorted  size=0x9b8
// sig: undefined UpdateMoby_1417_FlyingCar(MobyInstance * moby)
// callers(0): 
// callees(18): 0004b5e0 camera::camera7::Cam7_SetTargetMoby; 000efb38 mobyfunc::DeleteMoby; 000f0ea8 mobyfunc::AttachManipulator; 000f1ec8 mobyfunc::SetColorOfMoby; 0010675c mobyutil::MB_damage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00110b70 mobyutil::MB_IsPntInCuboid; 00116b70 mobyutil::MB_SwingMotion; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 00271740 mobyupdate_helpers::M1417_00271740; 00271f80 mobyupdate_helpers::M1417_00271f80; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 005001fc fastfunc::FastMemSet; 005cd098 libc::printf
// strings: 00655798: 'Flying Car (moby1417) with no flyPath. UID: %d - RAR\n' | 006557d0: 'Flying Car (moby1417) with a flyPath that has no points. UID: %d - RAR\n'

/* Moby 1417 */

void mobyupdate_unsorted::UpdateMoby_1417_FlyingCar(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  MobyModeBit MVar8;
  void *pvVar9;
  void *pvVar10;
  Spline *pSVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  ulonglong *puVar14;
  float fVar15;
  MobyInstance *pMVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar21;
  longlong lVar19;
  longlong lVar20;
  longlong lVar22;
  float *pfVar23;
  longlong lVar24;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar25;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  lVar19 = (longlong)(int)moby;
  uVar18 = ZEXT48(&stack0x00000000);
  lVar20 = uVar18 - 0xc0;
  puVar14 = (ulonglong *)lVar20;
  *puVar14 = uVar18;
  puVar14[0x1a] = in_LR;
  puVar14[0x17] = unaff_r31;
  puVar14[0x16] = unaff_r30;
  puVar14[0x15] = unaff_r29;
  pvVar9 = moby->pVar;
  uVar25 = ZEXT48(pvVar9);
  iVar21 = mobyutil::MB_damage(lVar19,0x800000,0);
  moby->damage = -1;
  if ((iVar21 != 0) && (moby->state != '\x03')) {
    moby->state = '\x03';
    mobyutil::MB_SpawnExplosionSparks
              (0x4014000000000000,0x402a000000000000,lVar19,lVar19 + 0x10,&DAT_0027222c,
               0xffffffffffffffff);
    iVar21 = *(int *)((int)pvVar9 + 0xa0);
    moby->collision = (ushort *)0x0;
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    pMVar16 = MobyInstance;
    if (-1 < iVar21) {
      MVar8 = MobyInstance[iVar21].modeBits;
      MobyInstance[iVar21].pos.z = 5.0;
      pMVar16[iVar21].pos.y = 5.0;
      pMVar16[iVar21].pos.x = 5.0;
      pMVar16[iVar21].modeBits = MVar8 | (UNK_40|DISABLED);
    }
    iVar21 = *(int *)((int)pvVar9 + 0x7c);
    if (((iVar21 != -1) && (sound::g_SoundChannels[iVar21].pMoby == moby)) &&
       (sound::g_SoundChannels[iVar21].state != '\0')) {
      sound::sound_Kill(iVar21);
    }
    *(undefined4 *)((int)pvVar9 + 0x7c) = 0xffffffff;
  }
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*(int *)((int)pvVar9 + 0x78) == -1) {
        libc::printf("Flying Car (moby1417) with no flyPath. UID: %d - RAR\n",moby->uid);
        mobyfunc::DeleteMoby(moby);
        return;
      }
      if (Splines[*(int *)((int)pvVar9 + 0x78)]->cnt == 0) {
        libc::printf("Flying Car (moby1417) with a flyPath that has no points. UID: %d - RAR\n",
                     moby->uid);
        mobyfunc::DeleteMoby(moby);
        return;
      }
      mobyupdate_helpers::M1417_00271f80(lVar19);
      auVar28 = ZEXT416(0xffffffff);
      auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
      moby->state = '\x02';
      moby->updateDistance = -1;
      *(undefined4 *)((int)pvVar9 + 0x7c) = 0xffffffff;
      moby->drawDistance = 0xff;
      auVar29 = vectorShiftLeftIntegerWord(auVar28,auVar28);
      auVar28 = loadVectorLeftIndexed(0x224c,0x7a0000);
      auVar27 = vectorConvertFromSignedFixedPointWord(auVar28,0);
      auVar28 = loadVectorLeftIndexed(8,0x27222c);
      auVar28 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      iVar21 = *(int *)((int)pvVar9 + 0xa0);
      auVar28 = vectorAddFloatingPoint
                          (auVar27,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60);
      auVar28 = vectorMultiplyAddFloatingPoint(auVar30,auVar28,auVar29);
      auVar28 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
      auVar28 = vectorSplatHalfWord(auVar28,1);
      uVar12 = storeVectorElementHalfWordIndexed(auVar28,0x8c,uVar25);
      *(undefined2 *)((int)pvVar9 + 0x8c) = uVar12;
      *(undefined4 *)((int)pvVar9 + 0xb0) = 0;
      *(undefined4 *)((int)pvVar9 + 0xb4) = 0;
      *(undefined4 *)((int)pvVar9 + 0xbc) = 0;
      *(undefined4 *)((int)pvVar9 + 0xc0) = 0;
      *(undefined4 *)((int)pvVar9 + 0xcc) = 0;
      pMVar16 = MobyInstance;
      if (-1 < iVar21) {
        MobyInstance[iVar21].drawDistance = moby->drawDistance;
        pMVar16[iVar21].updateDistance = moby->updateDistance;
      }
      fastfunc::FastMemSet(uVar25 + 0xd0,0,0x40);
      mobyfunc::AttachManipulator(moby,0,(int)(uVar25 + 0xd0));
      mobyutil::MB_UpdateLightsTransition(lVar19,uVar25 + 0x60);
      if (-1 < *(int *)((int)pvVar9 + 0xc4)) {
        iVar21 = *(int *)((int)pvVar9 + 0xa0);
        moby->collision = (ushort *)0x0;
        moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
        if (-1 < iVar21) {
          MobyInstance[iVar21].modeBits = MobyInstance[iVar21].modeBits | (UNK_40|DISABLED);
        }
        moby->state = '\x01';
      }
    }
    else {
      iVar21 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar9 + 0xc4));
      if (iVar21 != 0) {
        iVar21 = *(int *)((int)pvVar9 + 0xa0);
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
        moby->collision = moby->pClass->collision;
        if (-1 < iVar21) {
          MobyInstance[iVar21].modeBits =
               MobyInstance[iVar21].modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
        }
        moby->state = '\x02';
      }
    }
  }
  else if (bVar1 < 3) {
    *(undefined1 *)((int)pvVar9 + 0xd2) = 1;
    *(undefined4 *)((int)pvVar9 + 0xf8) = 0x38d1b717;
    *(undefined4 *)((int)pvVar9 + 0xf4) = 0x38d1b717;
    *(undefined4 *)((int)pvVar9 + 0xf0) = 0x38d1b717;
    mobyutil::MB_SwingMotion
              ((double)DAT_007a2260,(double)DAT_007a2264,(double)DAT_007a2268,lVar19,uVar25 + 0xbc,
               uVar25 + 0xc0);
    iVar21 = mobyupdate_helpers::M1417_00271740(lVar19);
    if ((iVar21 != 0) && (-1 < *(int *)((int)pvVar9 + 0xa0))) {
      fVar3 = *(float *)((int)pvVar9 + 0xa4);
      pMVar16 = MobyInstance + *(int *)((int)pvVar9 + 0xa0);
      fVar15 = (moby->transform).v0.x * fVar3 + (moby->pos).x;
      fVar4 = (moby->transform).v0.y;
      fVar5 = (moby->transform).v0.z;
      (pMVar16->pos).x = fVar15;
      fVar7 = fVar4 * fVar3 + (moby->pos).y;
      (pMVar16->pos).y = fVar7;
      fVar6 = fVar5 * fVar3 + (moby->pos).z;
      (pMVar16->pos).z = fVar6;
      (pMVar16->pos).w = (moby->pos).w;
      fVar3 = *(float *)((int)pvVar9 + 0xa8);
      fVar15 = (moby->transform).v1.x * fVar3 + fVar15;
      fVar7 = (moby->transform).v1.y * fVar3 + fVar7;
      fVar6 = (moby->transform).v1.z * fVar3 + fVar6;
      (pMVar16->pos).x = fVar15;
      (pMVar16->pos).y = fVar7;
      (pMVar16->pos).z = fVar6;
      fVar3 = *(float *)((int)pvVar9 + 0xac);
      fVar4 = (moby->transform).v2.y;
      fVar5 = (moby->transform).v2.z;
      (pMVar16->pos).x = (moby->transform).v2.x * fVar3 + fVar15;
      (pMVar16->pos).y = fVar4 * fVar3 + fVar7;
      (pMVar16->pos).z = fVar5 * fVar3 + fVar6;
      if (((hero::g_heroStateType == 0xd) && (DAT_0096a644 == pMVar16)) ||
         ((hero::g_heroStateType == 0xe && (DAT_0096a674 == pMVar16)))) {
        camera::camera7::Cam7_SetTargetMoby(lVar19);
        auVar28 = ZEXT416(0xffffffff);
        auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
        auVar27 = vectorShiftLeftIntegerWord(auVar28,auVar28);
        auVar28 = loadVectorLeftIndexed(0xc,0x27222c);
        auVar28 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar29 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar28 = vectorMultiplyAddFloatingPoint
                            (auVar29,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,
                             auVar27);
        auVar28 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
        auVar28 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar13 = storeVectorElementWordIndexed
                           (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0xcc,
                            uVar25);
        *(undefined4 *)((int)pvVar9 + 0xccU & 0xfffffffc) = uVar13;
      }
      else {
        fastfunc::FastDecTimerS32(uVar25 + 0xcc);
        if (*(int *)((int)pvVar9 + 0xcc) == 0) {
          pvVar10 = pMVar16->pVar;
          *(undefined4 *)((int)pvVar10 + 0x20) = 0;
          if (pMVar16->oClass == SWINGSHOT_SWING) {
            *(undefined4 *)((int)pvVar10 + 0x20) = 0x42200000;
            *(undefined4 *)((int)pvVar10 + 0x24) = 0x3c23d70a;
            *(undefined4 *)((int)pvVar10 + 0x28) = 0x3e4ccccd;
            *(float *)((int)pvVar10 + 0x2c) = mobyutil::g_FrameTime * 24.0;
          }
        }
        else {
          *(undefined4 *)((int)pMVar16->pVar + 0x20) = 0x40000000;
        }
      }
    }
  }
  else if ((bVar1 < 4) && (iVar21 = fastfunc::FastDecTimerS16(uVar25 + 0x8c), iVar21 != 0)) {
    pSVar11 = Splines[*(int *)((int)pvVar9 + 0x78)];
    mobyfunc::SetColorOfMoby
              (moby,(ulonglong)*(byte *)((int)pvVar9 + 100),(ulonglong)*(byte *)((int)pvVar9 + 0x65)
               ,(ulonglong)*(byte *)((int)pvVar9 + 0x66));
    auVar28 = ZEXT416(0xffffffff);
    auVar29 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
    auVar28 = loadVectorLeftIndexed(0x224c,0x7a0000);
    auVar27 = vectorConvertFromSignedFixedPointWord(auVar28,0);
    auVar29 = vectorShiftLeftIntegerWord(auVar29,auVar29);
    moby->collision = moby->pClass->collision;
    auVar28 = loadVectorLeftIndexed(8,0x27222c);
    auVar28 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar28 = vectorAddFloatingPoint
                        (auVar27,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60);
    auVar28 = vectorMultiplyAddFloatingPoint(auVar30,auVar28,auVar29);
    auVar28 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
    auVar28 = vectorSplatHalfWord(auVar28,1);
    uVar12 = storeVectorElementHalfWordIndexed(auVar28,0x8c,uVar25);
    *(undefined2 *)((int)pvVar9 + 0x8c) = uVar12;
    moby->state = '\x02';
    *(undefined4 *)((int)pvVar9 + 0x70) = 0;
    fVar3 = 0.0;
    *(undefined4 *)((int)pvVar9 + 0x74) = 0;
    fVar4 = pSVar11->points[0].x;
    (moby->pos).x = fVar4;
    fVar5 = pSVar11->points[0].y;
    (moby->pos).y = fVar5;
    (moby->pos).z = pSVar11->points[0].z;
    (moby->pos).w = pSVar11->points[0].w;
    fVar4 = pSVar11->points[1].x - fVar4;
    fVar5 = pSVar11->points[1].y - fVar5;
    fVar6 = ABS(fVar4);
    fVar7 = ABS(fVar5);
    *(float *)(puVar14 + 0xe) = fVar4;
    *(float *)((int)puVar14 + 0x74) = fVar5;
    *(float *)(puVar14 + 0xf) = fVar6 - fVar7;
    uVar25 = (ulonglong)(*(uint *)(puVar14 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar14 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar14 + 0x74) >> 0x1d) & 4;
    fVar4 = ABS(*(float *)(puVar14 + 0xe));
    if (*(float *)(puVar14 + 0xf) - 0.0 < 0.0) {
      fVar4 = fVar7;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
    fVar7 = ABS(*(float *)((int)puVar14 + 0x74));
    if (*(float *)(puVar14 + 0xf) - 0.0 < 0.0) {
      fVar7 = fVar6;
    }
    fVar6 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
    if (0.0 < fVar4) {
      lVar19 = uVar18 - 0xb0;
      lVar22 = uVar18 - 0x44;
      lVar24 = uVar18 - 0x34;
      lVar26 = 2;
      fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
      fVar7 = fVar4 * fVar4;
      *(float *)(puVar14 + 0x11) = fVar4;
      *(float *)(puVar14 + 0x10) = fVar4;
      *(float *)((int)puVar14 + 0x84) = fVar4;
      *(float *)((int)puVar14 + 0x7c) = fVar4;
      fVar4 = fVar7 * fVar7;
      *(float *)(puVar14 + 0x10) = *(float *)(puVar14 + 0x10) * fVar7;
      *(float *)((int)puVar14 + 0x84) = *(float *)((int)puVar14 + 0x84) * fVar4;
      *(float *)(puVar14 + 0x11) = *(float *)(puVar14 + 0x11) * fVar4 * fVar7;
      do {
        *(float *)((int)lVar19 + 0x7c) = *(float *)((int)lVar19 + 0x6c) * fVar4 * fVar4;
        iVar21 = (int)lVar22;
        lVar19 = lVar19 + 8;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar21 + 4) * fVar4 * fVar4;
        lVar24 = lVar24 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar26 = 4;
      lVar24 = uVar18 - 0x44;
      pfVar23 = (float *)&DAT_007358e0;
      lVar19 = lVar20;
      lVar22 = lVar24;
      do {
        fVar4 = *pfVar23;
        fVar7 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar19 + 0x7c) = *(float *)((int)lVar19 + 0x7c) * fVar4;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar7;
        lVar22 = lVar22 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar19 = 2;
      do {
        iVar21 = (int)lVar20;
        lVar20 = lVar20 + 0x10;
        iVar17 = (int)lVar24;
        lVar24 = lVar24 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar21 + 0x7c) + *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8)
                + *(float *)(iVar17 + 0xc);
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar5 + fVar6;
    }
    (moby->rotation).z = fVar3;
    *(undefined4 *)((int)pvVar9 + 0x88) = 0;
    *(undefined4 *)((int)pvVar9 + 0x84) = 0;
    iVar21 = *(int *)((int)pvVar9 + 0xa0);
    *(undefined4 *)((int)pvVar9 + 0x80) = 0;
    *(undefined4 *)((int)pvVar9 + 0x98) = 0;
    *(undefined4 *)((int)pvVar9 + 0x94) = 0;
    *(undefined4 *)((int)pvVar9 + 0x90) = 0;
    pMVar16 = MobyInstance;
    if (-1 < iVar21) {
      MobyInstance[iVar21].modeBits =
           MobyInstance[iVar21].modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE);
      fVar3 = *(float *)((int)pvVar9 + 0xa4);
      fVar15 = (moby->transform).v0.x * fVar3 + (moby->pos).x;
      fVar4 = (moby->transform).v0.y;
      fVar5 = (moby->transform).v0.z;
      pMVar16[iVar21].pos.x = fVar15;
      fVar7 = fVar4 * fVar3 + (moby->pos).y;
      pMVar16[iVar21].pos.y = fVar7;
      fVar6 = fVar5 * fVar3 + (moby->pos).z;
      pMVar16[iVar21].pos.z = fVar6;
      pMVar16[iVar21].pos.w = (moby->pos).w;
      fVar3 = *(float *)((int)pvVar9 + 0xa8);
      fVar15 = (moby->transform).v1.x * fVar3 + fVar15;
      fVar7 = (moby->transform).v1.y * fVar3 + fVar7;
      fVar6 = (moby->transform).v1.z * fVar3 + fVar6;
      pMVar16[iVar21].pos.x = fVar15;
      pMVar16[iVar21].pos.y = fVar7;
      pMVar16[iVar21].pos.z = fVar6;
      fVar3 = *(float *)((int)pvVar9 + 0xac);
      fVar4 = (moby->transform).v2.y;
      fVar5 = (moby->transform).v2.z;
      pMVar16[iVar21].pos.x = (moby->transform).v2.x * fVar3 + fVar15;
      pMVar16[iVar21].pos.y = fVar4 * fVar3 + fVar7;
      pMVar16[iVar21].pos.z = fVar5 * fVar3 + fVar6;
    }
    if (-1 < *(int *)((int)pvVar9 + 0xc4)) {
      moby->collision = (ushort *)0x0;
      moby->state = '\x01';
      moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    }
  }
  uVar2 = moby->state;
  if (((uVar2 != '\x03' && uVar2 != '\0') && (uVar2 != '\x01')) &&
     (iVar21 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar9 + 0x7c)), iVar21 == 0)) {
    iVar21 = sound::PlayMobySound(0,4,moby);
    *(int *)((int)pvVar9 + 0x7c) = iVar21;
  }
  return;
}



//==== 00272c00  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1418_00272c00(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1418_00272c00(void)

{
  DAT_007a22b8 = 0x10000;
  return;
}



//==== 00272c18  ns=mobyupdate_helpers  size=0x38
// sig: undefined M1418_00272c18(void)
// callers(0): 
// callees(1): 0017ec40 water::IcePass

void mobyupdate_helpers::M1418_00272c18(void)

{
  water::IcePass(&DAT_007a9b80,0x13,0x2e,0x2f);
  return;
}



//==== 00272c50  ns=mobyupdate_unsorted  size=0x68
// sig: undefined UpdateMoby_1418(MobyInstance * moby)
// callers(0): 
// callees(1): 0006d760 draw::RegisterOceanUpdate

/* Moby 1418 */

void mobyupdate_unsorted::UpdateMoby_1418(MobyInstance *moby)

{
  if (moby->state == 0) {
    moby->state = '\x01';
    moby->updateDistance = -1;
  }
  else if (moby->state < 2) {
    draw::RegisterOceanUpdate(&PTR_M1418_00272c18_0070a490,moby);
  }
  return;
}



//==== 00272cb8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1419_00272cb8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1419_00272cb8(void)

{
  DAT_007a9e2c = 0x10000;
  return;
}



//==== 00272cd0  ns=mobyupdate_unsorted  size=0x24c
// sig: undefined UpdateMoby_1419(MobyInstance * moby)
// callers(0): 
// callees(12): 0006d720 RegisterFuncForMoby; 0007d478 hero::Hero_MakeVisible; 0007d5c0 hero::Hero_MakeInvisible; 000a0c38 hero::Hero_Warp; 000e8aa4 memcard::memcard_Save; 000f1e50 mobyfunc::SetLevelFlag; 00110b70 mobyutil::MB_IsPntInCuboid; 00112af0 mobyutil::MB_ToastMessageByIndex; 00112c20 mobyutil::MB_UnlockLevel; 00151e70 respawn::SetSpawnPoint; 00167e60 update::mode_sceneInit; 00168dec update::PlayInfobotMovie

/* Moby 1419 */

void mobyupdate_unsorted::UpdateMoby_1419(MobyInstance *moby)

{
  u8 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = moby->state;
  piVar2 = (int *)moby->pVar;
  moby->updateDistance = -0x80;
  if (uVar1 != '\x04') {
    if (uVar1 == '\x03') {
      if (g_gameMode != GAME_MODE_SCENE) {
        mobyutil::MB_UnlockLevel(Fleet);
        iVar3 = piVar2[1];
        if (iVar3 != -1) {
          respawn::SetSpawnPoint((Vec4 *)&Cuboids[iVar3].pos,(Vec4 *)&Cuboids[iVar3].rot);
        }
        mobyutil::MB_ToastMessageByIndex(0x11);
        memcard::memcard_Save(0,-1);
        moby->state = '\x04';
      }
    }
    else if (uVar1 == '\x02') {
      if (g_gameMode != GAME_MODE_SCENE) {
        update::PlayInfobotMovie(0x11);
        moby->state = '\x01';
      }
    }
    else if (uVar1 == '\x01') {
      if (g_gameMode != GAME_MODE_SCENE) {
        update::mode_sceneInit(4);
        moby->state = '\x03';
        hero::Hero_MakeVisible();
        iVar3 = piVar2[1];
        if (iVar3 != -1) {
          hero::Hero_Warp(&Cuboids[iVar3].pos.x,&Cuboids[iVar3].rot.x,0,1);
        }
      }
    }
    else if ((((uVar1 == '\0') && (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1)) &&
             (DAT_010c512c == 0)) &&
            ((iVar3 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar2), iVar3 != 0 &&
             (MobyInstance[piVar2[2]].state == '\x03')))) {
      update::mode_sceneInit(3);
      moby->state = '\x02';
      mobyfunc::SetLevelFlag(moby->levelFlagIdx);
      hero::Hero_MakeInvisible();
    }
  }
  if (g_gameMode == GAME_MODE_SCENE) {
    RegisterFuncForMoby(&PTR_M1421_00272f40_0070a4b0,moby);
  }
  return;
}



//==== 00272f40  ns=mobyupdate_helpers  size=0x394
// sig: undefined M1421_00272f40(void)
// callers(0): 
// callees(4): 0006fcfc draw::FontPrintLarge; 0007b740 help::help_msg_string_by_index; 005c8510 libc::strlen; 005cd2a8 libc::snprintf

void mobyupdate_helpers::M1421_00272f40(void)

{
  bool bVar1;
  undefined8 uVar2;
  size_t sVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  char acStack_90 [104];
  
  bVar1 = false;
  lVar4 = 0;
  if (update::g_SceneId == 3) {
    dVar7 = (double)animationSpeed;
    dVar8 = 181.5;
    if (((int)(dVar7 * 181.5) < boot::g_SpaceSceneFrame) &&
       (boot::g_SpaceSceneFrame < (int)(dVar7 * 260.5))) {
      uVar2 = help::help_msg_string_by_index(STR_SON_);
      libc::snprintf(acStack_90,"%s",uVar2);
      bVar1 = true;
      dVar7 = (double)animationSpeed;
      lVar4 = (longlong)(boot::g_SpaceSceneFrame - (int)(dVar7 * dVar8) >> 2);
    }
    dVar8 = 450.5;
    if (((int)(dVar7 * 450.5) < boot::g_SpaceSceneFrame) &&
       (boot::g_SpaceSceneFrame < (int)(dVar7 * 640.5))) {
      uVar2 = help::help_msg_string_by_index(STR_YOU_HAVE_DONE_WELL_);
      libc::snprintf(acStack_90,"%s",uVar2);
      bVar1 = true;
      dVar7 = (double)animationSpeed;
      lVar4 = (longlong)(boot::g_SpaceSceneFrame - (int)(dVar7 * dVar8) >> 2);
    }
    dVar8 = 750.5;
    if (((int)(dVar7 * 750.5) < boot::g_SpaceSceneFrame) &&
       (boot::g_SpaceSceneFrame < (int)(dVar7 * 930.5))) {
      uVar2 = help::help_msg_string_by_index(STR_THERE_IS_STILL_MORE_0x526C);
      libc::snprintf(acStack_90,"%s",uVar2);
      lVar4 = (longlong)(boot::g_SpaceSceneFrame - (int)((double)animationSpeed * dVar8) >> 2);
    }
    else if (!bVar1) {
      return;
    }
  }
  else {
    if (update::g_SceneId != 4) {
      return;
    }
    dVar7 = 2300.5;
    if (boot::g_SpaceSceneFrame <= (int)(animationSpeed * 2300.5)) {
      return;
    }
    if ((int)(animationSpeed * 2400.5) <= boot::g_SpaceSceneFrame) {
      return;
    }
    uVar2 = help::help_msg_string_by_index(STR_YOU_ALREADY_HAVE_);
    libc::snprintf(acStack_90,"%s",uVar2);
    lVar4 = (longlong)(boot::g_SpaceSceneFrame - (int)((double)animationSpeed * dVar7) >> 2);
  }
  sVar3 = libc::strlen(acStack_90);
  lVar5 = (longlong)(int)sVar3;
  lVar6 = lVar4;
  if ((((int)sVar3 <= (int)lVar4) && (lVar6 = lVar5, (int)sVar3 < (int)lVar4)) &&
     ((lVar5 - lVar4 & 4U) != 0)) {
    lVar6 = (longlong)(int)(sVar3 - 1);
  }
  draw::FontPrintLarge(DAT_007a9e80 + 1,DAT_007a9e84 + 1,DAT_007a9e8c,acStack_90,lVar6);
  draw::FontPrintLarge(DAT_007a9e80,DAT_007a9e84,DAT_007a9e88,acStack_90,lVar6);
  return;
}



//==== 002732d4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1421_002732d4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1421_002732d4(void)

{
  DAT_007a9edc = 0x10000;
  return;
}



//==== 002732f8  ns=mobyupdate_unsorted  size=0x3c4
// sig: undefined UpdateMoby_1421(MobyInstance * moby)
// callers(0): 
// callees(5): 0003fba8 camera::camera19::Cam19_Enable; 00110b70 mobyutil::MB_IsPntInCuboid; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt

/* Moby 1421 */

void mobyupdate_unsorted::UpdateMoby_1421(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  ushort uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  
  bVar1 = moby->state;
  piVar4 = (int *)moby->pVar;
  fVar2 = (moby->rotation).y;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      moby->updateDistance = -1;
      if (((g_heroType == '\0') && (uVar3 = moby->uid, (&DAT_00a545c4)[(short)uVar3] == '\0')) &&
         ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar3 >> 5) << 2))
          & 1 << (uVar3 & 0x1f)) == 0)) {
        piVar4[1] = (int)fVar2;
        moby->state = '\x01';
      }
      else {
        dVar8 = (double)fastfunc::FastWrapRot(fVar2,-1.3962634);
        (moby->rotation).y = (float)dVar8;
        moby->state = '\x03';
      }
    }
    else if (((g_heroType == '\0') && (uVar3 = moby->uid, (&DAT_00a545c4)[(short)uVar3] == '\0')) &&
            ((*(uint *)(&DAT_00a0cd1c +
                       Level * 0x100 + (int)((longlong)((int)(short)uVar3 >> 5) << 2)) &
             1 << (uVar3 & 0x1f)) == 0)) {
      iVar7 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar4[3]);
      if ((((iVar7 != 0) || (g_SeenPlanets.Hoven != 0)) && (0 < *piVar4)) && (0 < piVar4[4])) {
        uVar3 = moby->uid;
        iVar6 = (int)((longlong)((int)(short)moby->uid >> 5) << 2);
        iVar7 = (int)((longlong)((int)(short)uVar3 >> 5) << 2);
        uVar5 = *(uint *)(&DAT_00a54dd0 + iVar7);
        *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar6) =
             *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar6) | 1 << (moby->uid & 0x1f);
        *(uint *)(&DAT_00a54dd0 + iVar7) = uVar5 | 1 << (uVar3 & 0x1f);
        iVar7 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar4[3]);
        if (iVar7 != 0) {
          camera::camera19::Cam19_Enable(piVar4[4]);
        }
        iVar7 = fastfunc::FastDoubleToInt((double)(animationSpeed * 90.0));
        piVar4[2] = iVar7;
        moby->state = '\x02';
      }
    }
    else {
      dVar8 = (double)fastfunc::FastWrapRot(fVar2,-1.3962634);
      (moby->rotation).y = (float)dVar8;
      moby->state = '\x03';
    }
  }
  else if (bVar1 < 3) {
    dVar8 = (double)fastfunc::FastWrapRot(fVar2,-1.3962634 / (animationSpeed * 90.0));
    (moby->rotation).y = (float)dVar8;
    iVar7 = fastfunc::FastDecTimerS32(piVar4 + 2);
    if (iVar7 != 0) {
      moby->state = '\x03';
    }
  }
  else if ((((bVar1 < 4) && (g_heroType == '\0')) &&
           (uVar3 = moby->uid, (&DAT_00a545c4)[(short)uVar3] == '\0')) &&
          ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar3 >> 5) << 2)
                     ) & 1 << (uVar3 & 0x1f)) == 0)) {
    dVar8 = (double)fastfunc::FastWrapRot(fVar2,1.3962634);
    (moby->rotation).y = (float)dVar8;
    moby->state = '\0';
  }
  return;
}



//==== 002736bc  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1422_002736bc(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1422_002736bc(void)

{
  DAT_007a9f4c = 0x10000;
  return;
}



//==== 002736d0  ns=mobyupdate_helpers  size=0xe0
// sig: undefined M1422_002736d0(void)
// callers(1): 002766e0 mobyupdate_unsorted::UpdateMoby_1422
// callees(1): 000f0ea8 mobyfunc::AttachManipulator
// strings: 0096c074: 'None'

void mobyupdate_helpers::M1422_002736d0(void)

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
        if ((((MobyInstance *)puVar3[0x5e])->oClass == DREK) && (DAT_00a1bf81 == '\0')) {
          mobyfunc::AttachManipulator((MobyInstance *)puVar3[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = DAT_007aa014;
          DAT_00a1bfa4 = DAT_007aa014;
          DAT_00a1bfa8 = DAT_007aa014;
          sVar1 = boot::g_SpaceSceneMobyCnt._0_2_;
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar2 < sVar1);
    }
  }
  return;
}



//==== 002737b8  ns=mobyupdate_helpers  size=0x440
// sig: undefined M1422_002737b8(void)
// callers(1): 002766e0 mobyupdate_unsorted::UpdateMoby_1422
// callees(7): 0002e354 camera0::Cam0_SetCamHeight; 0002f3d8 camera0::Cam0_SetCamDist; 0003fad4 camera::camera18::Cam18_SetTriggered; 000c8444 hud::RegisterHUDCallback; 000c8b28 hud::Hud_SetEntryValueById; 00109c30 mobyutil::OrganicDelt; 004fff60 fastfunc::FastDecTimerS32
// strings: 00953fe0: 'None'

double mobyupdate_helpers::M1422_002737b8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  UpdateCam *pUVar6;
  UpdateCam *unused;
  longlong lVar7;
  int iVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  
  iVar2 = *(int *)(param_1 + 0x78);
  iVar3 = *(int *)(camera::ImportCameras + *(int *)(iVar2 + 0x224) * 0x20 + 0x1c);
  fastfunc::FastDecTimerS32(iVar2 + 0x360);
  fVar12 = g_heroPosition.y - *(float *)(iVar2 + 0x3c4);
  fVar5 = g_heroPosition.x - *(float *)(iVar2 + 0x3c0);
  cVar1 = *(char *)(param_1 + 0x20);
  fVar5 = SQRT(fVar5 * fVar5 + fVar12 * fVar12);
  fVar12 = DAT_007aa024;
  if ((fVar5 <= DAT_007aa024) && (fVar12 = fVar5, fVar5 < DAT_007aa020)) {
    fVar12 = DAT_007aa020;
  }
  fVar12 = (fVar12 - DAT_007aa020) / (DAT_007aa024 - DAT_007aa020);
  dVar10 = (double)((DAT_007aa028 - DAT_007aa030) * fVar12 + DAT_007aa030);
  dVar11 = (double)((DAT_007aa02c - DAT_007aa034) * fVar12 + DAT_007aa034);
  if (cVar1 == '\x13') {
    if (((hero::g_heroStateType == 0xf) || (g_heroState == GRINDRAIL_DAMAGE)) &&
       ((*(int *)(iVar2 + 0x364) == 0 &&
        ((uVar4 = (int)*(uint *)(iVar2 + 0x390) >> 0x1f,
         (int)((uVar4 >> 1 ^ *(uint *)(iVar2 + 0x390)) - uVar4) < 0x41c80001 &&
         (*(int *)(iVar2 + 0x360) == 0)))))) {
      dVar10 = (double)DAT_007aa038;
      dVar11 = (double)DAT_007aa03c;
      unused = (UpdateCam *)&DAT_007b0000;
    }
    else {
      unused = (UpdateCam *)(((ulonglong)*(uint *)(iVar2 + 0x344) & 0x1ffffff) << 7);
      fVar12 = g_heroPosition.y - *(float *)((int)unused->mtx + (int)&(Cuboids->pos).y);
      fVar5 = g_heroPosition.x - *(float *)((int)unused->mtx + (int)&(Cuboids->pos).x);
      if (SQRT(fVar5 * fVar5 + fVar12 * fVar12) < 28.0) {
        dVar10 = (double)DAT_007aa040;
        dVar11 = (double)DAT_007aa044;
        unused = (UpdateCam *)&DAT_007b0000;
      }
    }
  }
  else if ((cVar1 == '\t') || (cVar1 == '\x06')) {
    dVar10 = (double)DAT_007aa048;
    dVar11 = (double)DAT_007aa04c;
    unused = (UpdateCam *)&DAT_007b0000;
  }
  else if ((((cVar1 == '\0') || (cVar1 == '\n')) || (cVar1 == '\v')) ||
          ((cVar1 == '\x01' || (cVar1 == '\x1b')))) {
    lVar7 = 0;
    pUVar6 = camera::UpdateCams;
    do {
      if (((*(int *)(iVar2 + 0x3ec) == 0) && (g_standingOnMoby != 0)) &&
         (*(short *)(g_standingOnMoby + 0xa6) == 0x24b)) {
        *(undefined4 *)(iVar2 + 0x3ec) = 1;
      }
      if ((camera::UpdateCamsUsed[(int)lVar7] != '\0') &&
         (iVar8 = (int)(lVar7 << 7) + (int)(lVar7 << 5),
         *(short *)((int)camera::UpdateCams[0].lPos + iVar8 + 0x22) == 0x12)) {
        camera::camera18::Cam18_SetTriggered((UpdateCam *)((int)camera::UpdateCams[0].mtx + iVar8));
        if (*(int *)(iVar2 + 0x368) != -1) {
          pUVar6 = (UpdateCam *)0x0;
          hud::Hud_SetEntryValueById(*(int *)(iVar2 + 0x368),0);
          *(undefined4 *)(iVar2 + 0x368) = 0xffffffff;
        }
        unused = pUVar6;
        if ((((1 < *(byte *)(param_1 + 0x20)) &&
             (unused = *(UpdateCam **)(iVar2 + 0x3ec),
             unused != (UpdateCam *)0x0 || g_deplanetizerUp != 0)) &&
            (GameCamera.pCurrentUpdCam != (void *)0x0)) &&
           (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0)) {
          unused = (UpdateCam *)0x0;
          uVar9 = 0x3f689374c0000000;
          camera0::Cam0_SetCamDist((double)DAT_007aa048,0x3f689374c0000000);
          camera0::Cam0_SetCamHeight((double)DAT_007aa04c,uVar9);
        }
        break;
      }
      iVar8 = (int)lVar7 + 1;
      lVar7 = (longlong)iVar8;
      unused = camera::UpdateCams;
    } while (iVar8 < 0x30);
  }
  else {
    unused = (UpdateCam *)g_heroState;
    if (0 < *(int *)(iVar2 + 0x38c)) {
      unused = (UpdateCam *)0xffff;
      iVar8 = hud::RegisterHUDCallback
                        (0x16,0xffff,&PTR_HudEntry_InitCounter_007056a0,
                         &PTR_HudEntry_UpdateCounter_007056c8,&PTR_Draw_MobyHealthBarHud_00705868,
                         (int *)(iVar2 + 0x36c),0x15e);
      *(int *)(iVar2 + 0x368) = iVar8;
    }
  }
  mobyutil::OrganicDelt
            ((float)dVar10,DAT_007aa01c * DAT_0071f418,DAT_007aa01c * DAT_0071f418,
             DAT_007aa018 * mobyutil::g_FrameTime,(float *)(iVar3 + 0x34),(int)unused,
             (float *)(iVar2 + 0x378));
  fVar12 = mobyutil::OrganicDelt
                     ((float)dVar11,DAT_007aa01c * DAT_0071f418,DAT_007aa01c * DAT_0071f418,
                      DAT_007aa018 * mobyutil::g_FrameTime,(float *)(iVar3 + 0x38),(int)unused,
                      (float *)(iVar2 + 0x37c));
  return (double)fVar12;
}



//==== 00273c08  ns=mobyupdate_helpers  size=0x13c
// sig: undefined M1422_00273c08(void)
// callers(3): 00273da0 mobyupdate_helpers::M1422_00273da0; 002744f8 mobyupdate_helpers::M1422_002744f8; 002766e0 mobyupdate_unsorted::UpdateMoby_1422
// callees(1): 00109c30 mobyutil::OrganicDelt

undefined8 mobyupdate_helpers::M1422_00273c08(double param_1,int param_2,float *param_3)

{
  int iVar1;
  uint uVar2;
  float target;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float local_40 [4];
  
  iVar1 = *(int *)(param_2 + 0x78);
  dVar6 = 0.0;
  local_40[0] = 0.0;
  dVar9 = (double)(param_3[1] - *(float *)(iVar1 + 0x3c4));
  dVar8 = (double)(*param_3 - *(float *)(iVar1 + 0x3c0));
  target = SQRT((float)(dVar8 * dVar8 + (double)(float)(dVar9 * dVar9)));
  dVar7 = (double)target;
  mobyutil::OrganicDelt
            (target,DAT_0071f418 * 10.0,DAT_0071f418 * 10.0,(float)param_1,local_40,0x720000,
             (float *)(iVar1 + 0x374));
  dVar4 = (double)(float)((double)*(float *)(iVar1 + 0x374) / dVar7);
  uVar2 = (int)*(uint *)(iVar1 + 0x374) >> 0x1f;
  dVar9 = (double)(float)(dVar9 * dVar4);
  dVar8 = (double)(float)(dVar8 * dVar4);
  dVar4 = dVar6;
  if (dVar6 - dVar7 < 0.0) {
    dVar4 = dVar9;
  }
  dVar5 = dVar6;
  if (dVar6 - dVar7 < 0.0) {
    dVar5 = dVar8;
  }
  if (dVar7 - dVar6 < 0.0) {
    dVar4 = dVar9;
  }
  if (dVar7 - dVar6 < 0.0) {
    dVar5 = dVar8;
  }
  *(float *)(iVar1 + 0x3c4) = (float)((double)*(float *)(iVar1 + 0x3c4) + dVar4);
  *(float *)(iVar1 + 0x3c0) = (float)((double)*(float *)(iVar1 + 0x3c0) + dVar5);
  if ((0.10000000149011612 <= dVar7) ||
     (0x3dcccccc < (int)((uVar2 >> 1 ^ *(uint *)(iVar1 + 0x374)) - uVar2))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



//==== 00273da0  ns=mobyupdate_helpers  size=0x74c
// sig: undefined M1422_00273da0(void)
// callers(1): 002766e0 mobyupdate_unsorted::UpdateMoby_1422
// callees(4): 00109af0 mobyutil::Delt; 00273c08 mobyupdate_helpers::M1422_00273c08; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

double mobyupdate_helpers::M1422_00273da0(int param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  ulonglong *puVar11;
  int iVar12;
  float fVar13;
  Cuboid *pCVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar20;
  longlong lVar19;
  ulonglong uVar21;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f29;
  double dVar27;
  ulonglong in_f30;
  ulonglong in_f31;
  float fVar28;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar17 = uVar15 - 0x110;
  puVar11 = (ulonglong *)lVar17;
  *puVar11 = uVar15;
  puVar11[0x24] = in_LR;
  puVar11[0x1f] = in_f29;
  puVar11[0x20] = in_f30;
  puVar11[0x21] = in_f31;
  puVar11[0x1e] = unaff_r31;
  puVar11[0x1c] = unaff_r29;
  puVar11[0x1d] = unaff_r30;
  iVar9 = *(int *)(param_1 + 0x78);
  fVar28 = Cuboids[*(int *)(iVar9 + 0x344)].pos.x;
  fVar2 = Cuboids[*(int *)(iVar9 + 0x344)].pos.y;
  fVar3 = g_heroPosition.x - fVar28;
  fVar6 = g_heroPosition.y - fVar2;
  fVar7 = ABS(fVar3);
  fVar4 = ABS(fVar6);
  *(float *)((int)puVar11 + 0x8c) = fVar3;
  *(float *)(puVar11 + 0x12) = fVar6;
  *(float *)((int)puVar11 + 0x94) = fVar7 - fVar4;
  dVar27 = 0.0;
  uVar21 = (ulonglong)(*(uint *)((int)puVar11 + 0x8c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar11 + 0x94) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar11 + 0x12) >> 0x1d) & 4;
  fVar3 = *(float *)(iVar9 + 0x3c0);
  fVar6 = ABS(*(float *)((int)puVar11 + 0x8c));
  if (*(float *)((int)puVar11 + 0x94) - 0.0 < 0.0) {
    fVar6 = fVar4;
  }
  fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
  fVar4 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
  fVar5 = *(float *)(iVar9 + 0x3c4);
  fVar13 = ABS(*(float *)(puVar11 + 0x12));
  if (*(float *)((int)puVar11 + 0x94) - 0.0 < 0.0) {
    fVar13 = fVar7;
  }
  dVar25 = dVar27;
  if (0.0 < fVar6) {
    lVar16 = uVar15 - 0x100;
    lVar18 = uVar15 - 0x58;
    lVar19 = uVar15 - 0x48;
    lVar22 = 2;
    fVar6 = (fVar13 - fVar6) / (fVar13 + fVar6);
    fVar7 = fVar6 * fVar6;
    *(float *)((int)puVar11 + 0xc4) = fVar6;
    *(float *)((int)puVar11 + 0xbc) = fVar6;
    *(float *)(puVar11 + 0x18) = fVar6;
    *(float *)(puVar11 + 0x17) = fVar6;
    fVar6 = fVar7 * fVar7;
    *(float *)((int)puVar11 + 0xbc) = *(float *)((int)puVar11 + 0xbc) * fVar7;
    *(float *)(puVar11 + 0x18) = *(float *)(puVar11 + 0x18) * fVar6;
    *(float *)((int)puVar11 + 0xc4) = *(float *)((int)puVar11 + 0xc4) * fVar6 * fVar7;
    do {
      *(float *)((int)lVar16 + 0xb8) = *(float *)((int)lVar16 + 0xa8) * fVar6 * fVar6;
      iVar10 = (int)lVar18;
      lVar16 = lVar16 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)(iVar10 + 4) * fVar6 * fVar6;
      lVar19 = lVar19 + 8;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    lVar22 = 4;
    lVar19 = uVar15 - 0x58;
    pfVar20 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar18 = lVar19;
    do {
      fVar6 = *pfVar20;
      fVar7 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar16 + 0xb8) = *(float *)((int)lVar16 + 0xb8) * fVar6;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar7;
      lVar18 = lVar18 + 8;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    lVar18 = 2;
    lVar16 = lVar17;
    do {
      iVar10 = (int)lVar16;
      lVar16 = lVar16 + 0x10;
      iVar12 = (int)lVar19;
      lVar19 = lVar19 + 0x10;
      dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar10 + 0xb8)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar8 + fVar4);
  }
  fVar3 = fVar3 - fVar28;
  fVar5 = fVar5 - fVar2;
  fVar6 = ABS(fVar3);
  fVar2 = ABS(fVar5);
  *(float *)(puVar11 + 0x10) = fVar3;
  *(float *)((int)puVar11 + 0x84) = fVar5;
  *(float *)(puVar11 + 0x11) = fVar6 - fVar2;
  uVar21 = (ulonglong)(*(uint *)(puVar11 + 0x10) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar11 + 0x11) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar11 + 0x84) >> 0x1d) & 4;
  fVar28 = ABS(*(float *)(puVar11 + 0x10));
  if (*(float *)(puVar11 + 0x11) - 0.0 < 0.0) {
    fVar28 = fVar2;
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
  fVar3 = ABS(*(float *)((int)puVar11 + 0x84));
  if (*(float *)(puVar11 + 0x11) - 0.0 < 0.0) {
    fVar3 = fVar6;
  }
  fVar6 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
  dVar26 = dVar27;
  if (0.0 < fVar28) {
    lVar16 = uVar15 - 0x100;
    lVar19 = uVar15 - 0x68;
    lVar18 = uVar15 - 0x78;
    lVar22 = 2;
    fVar28 = (fVar3 - fVar28) / (fVar3 + fVar28);
    fVar3 = fVar28 * fVar28;
    *(float *)((int)puVar11 + 0xa4) = fVar28;
    *(float *)((int)puVar11 + 0x9c) = fVar28;
    *(float *)(puVar11 + 0x14) = fVar28;
    *(float *)(puVar11 + 0x13) = fVar28;
    fVar28 = fVar3 * fVar3;
    *(float *)((int)puVar11 + 0x9c) = *(float *)((int)puVar11 + 0x9c) * fVar3;
    *(float *)(puVar11 + 0x14) = *(float *)(puVar11 + 0x14) * fVar28;
    *(float *)((int)puVar11 + 0xa4) = *(float *)((int)puVar11 + 0xa4) * fVar28 * fVar3;
    do {
      *(float *)((int)lVar16 + 0x98) = *(float *)((int)lVar16 + 0x88) * fVar28 * fVar28;
      iVar10 = (int)lVar18;
      lVar18 = lVar18 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)(iVar10 + 4) * fVar28 * fVar28;
      lVar19 = lVar19 + 8;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    lVar22 = 4;
    lVar19 = uVar15 - 0x78;
    pfVar20 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar18 = lVar19;
    do {
      fVar28 = *pfVar20;
      fVar3 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar16 + 0x98) = *(float *)((int)lVar16 + 0x98) * fVar28;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar3;
      lVar18 = lVar18 + 8;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    lVar16 = 2;
    do {
      iVar10 = (int)lVar17;
      iVar12 = (int)lVar19;
      lVar17 = lVar17 + 0x10;
      lVar19 = lVar19 + 0x10;
      dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar10 + 0x98)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar2 + fVar6);
  }
  dVar23 = (double)fastfunc::FastDiffRots(dVar26,dVar25);
  if (dVar27 <= dVar23) {
    uVar24 = fastfunc::FastWrapRot((float)dVar25,2.3561945);
  }
  else {
    uVar24 = fastfunc::FastWrapRot((float)dVar25,-2.3561945);
  }
  dVar25 = (double)fastfunc::FastDiffRots(uVar24,dVar26);
  dVar27 = 0.1745329201221466;
  if ((dVar25 <= 0.1745329201221466) && (dVar27 = dVar25, dVar25 < -0.1745329201221466)) {
    dVar27 = -0.1745329201221466;
  }
  dVar25 = (double)fastfunc::FastWrapRot((float)dVar27,(float)dVar26);
  pCVar14 = Cuboids;
  fVar2 = DAT_007a9ff0;
  fVar3 = DAT_007a9fec;
  fVar28 = (float)(dVar25 + 1.570796251296997);
  dVar27 = (double)(float)(3.141592502593994 - dVar25);
  if (dVar25 - (double)(float)(3.141592502593994 - dVar25) < 0.0) {
    dVar27 = dVar25;
  }
  fVar6 = 3.1415925 - fVar28;
  if (fVar28 - (3.1415925 - fVar28) < 0.0) {
    fVar6 = fVar28;
  }
  fVar4 = *(float *)(param_1 + 0x10);
  cVar1 = *(char *)(param_1 + 0x20);
  dVar26 = (double)(float)(-3.141592502593994 - dVar25);
  if ((double)(float)(-3.141592502593994 - dVar25) - dVar27 < 0.0) {
    dVar26 = dVar27;
  }
  fVar7 = *(float *)(param_1 + 0x14);
  fVar5 = -3.1415925 - fVar28;
  if ((-3.1415925 - fVar28) - fVar6 < 0.0) {
    fVar5 = fVar6;
  }
  dVar27 = (double)(float)(dVar26 * dVar26);
  fVar8 = fVar5 * fVar5;
  fVar28 = fVar8 * fVar8 * fVar5;
  fVar6 = fVar8 * fVar28;
  fVar28 = fVar8 * fVar6 * 2.601887e-06 +
           fVar6 * -0.0001980741 + fVar28 * 0.0083330255 + fVar8 * fVar5 * -0.16666657 + fVar5;
  if (cVar1 == '\x02') {
    fVar28 = fVar28 * DAT_007a9fec;
    *(float *)(puVar11 + 0xe) = fVar28;
    fVar2 = fVar3;
  }
  else {
    fVar28 = fVar28 * DAT_007a9ff0;
    *(float *)(puVar11 + 0xe) = fVar28;
  }
  iVar10 = *(int *)(iVar9 + 0x344);
  *(undefined4 *)(puVar11 + 0xf) = 0;
  dVar23 = (double)(float)(dVar27 * (double)(float)(dVar27 * dVar26));
  dVar25 = (double)(float)(dVar27 * dVar23);
  fVar2 = ((float)(dVar27 * dVar25) * 2.601887e-06 +
          (float)(dVar25 * -0.0001980741071747616 +
                 (double)(float)(dVar23 * 0.008333025500178337 +
                                (double)(float)((double)(float)(dVar27 * dVar26) *
                                                -0.16666656732559204 + dVar26)))) * fVar2;
  *(float *)((int)puVar11 + 0x74) = fVar2;
  *(float *)(puVar11 + 0xe) = fVar28 + pCVar14[iVar10].pos.x;
  *(float *)((int)puVar11 + 0x74) = fVar2 + pCVar14[iVar10].pos.y;
  *(float *)(puVar11 + 0xf) = pCVar14[iVar10].pos.z;
  fVar28 = *(float *)(iVar9 + 0x3c4) - pCVar14[iVar10].pos.y;
  fVar2 = *(float *)(iVar9 + 0x3c0) - pCVar14[iVar10].pos.x;
  if (SQRT(fVar2 * fVar2 + fVar28 * fVar28) <= DAT_007a9ff0 + 1.0) {
    if (hero::g_heroStateType == 0xf) {
      fVar28 = 20.0;
    }
    else {
      if (cVar1 == '\r') {
        fVar2 = DAT_007a9fe4 * 0.5;
        fVar3 = DAT_007a9fe0 * 0.5;
        fVar6 = 5.5;
        fVar28 = 2.0;
      }
      else {
        fVar2 = DAT_007a9fe4;
        fVar3 = DAT_007a9fe0;
        fVar6 = DAT_007a9fd8;
        fVar28 = DAT_007a9fdc;
        if (cVar1 == '\x0f') {
          fVar28 = 6.0;
          fVar6 = 10.0;
          fVar2 = DAT_007a9fe4 * 1.5;
          fVar3 = DAT_007a9fe0 * 1.5;
        }
      }
      fVar7 = fVar7 - g_heroPosition.y;
      fVar4 = fVar4 - g_heroPosition.x;
      fVar4 = SQRT(fVar4 * fVar4 + fVar7 * fVar7);
      fVar7 = fVar3;
      if ((fVar4 <= fVar3) && (fVar7 = fVar4, fVar4 < fVar2)) {
        fVar7 = fVar2;
      }
      fVar28 = (fVar6 - fVar28) * (1.0 - (fVar7 - fVar2) / (fVar3 - fVar2)) + fVar28;
    }
  }
  else {
    fVar28 = 10.0;
  }
  M1422_00273c08((double)(mobyutil::g_FrameTime * fVar28),param_1,uVar15 - 0xa0);
  fVar28 = mobyutil::Delt(Cuboids[*(int *)(iVar9 + 0x344)].pos.z,mobyutil::g_FrameTime * 4.0,
                          (float *)(iVar9 + 0x3c8));
  return (double)fVar28;
}



//==== 002744f8  ns=mobyupdate_helpers  size=0x1a0
// sig: undefined M1422_002744f8(void)
// callers(1): 002766e0 mobyupdate_unsorted::UpdateMoby_1422
// callees(2): 00110488 mobyutil::ClampVec3Magnitude; 00273c08 mobyupdate_helpers::M1422_00273c08

void mobyupdate_helpers::M1422_002744f8(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  Vec4 local_30;
  
  iVar1 = *(int *)(param_1 + 0x78);
  iVar2 = *(int *)(iVar1 + 0x344);
  local_30.x = g_heroPosition.x - Cuboids[iVar2].pos.x;
  local_30.y = g_heroPosition.y - Cuboids[iVar2].pos.y;
  local_30.w = g_heroPosition.w;
  local_30.z = 0.0;
  if (hero::g_heroStateType == 0xf) {
    mobyutil::ClampVec3Magnitude((double)DAT_007a9ff8,&local_30);
  }
  else {
    mobyutil::ClampVec3Magnitude((double)DAT_007a9ff4,&local_30);
  }
  iVar1 = *(int *)(iVar1 + 0x344);
  local_30.x = local_30.x + Cuboids[iVar1].pos.x;
  fVar3 = *(float *)(param_1 + 0x10) - local_30.x;
  local_30.y = local_30.y + Cuboids[iVar1].pos.y;
  fVar4 = *(float *)(param_1 + 0x14) - local_30.y;
  local_30.z = local_30.z + Cuboids[iVar1].pos.z;
  dVar6 = (double)(mobyutil::g_FrameTime * 4.75);
  dVar5 = (double)(mobyutil::g_FrameTime * 20.0);
  dVar7 = (double)(float)(dVar6 * (double)((SQRT(fVar3 * fVar3 + fVar4 * fVar4) - DAT_007a9fd4) /
                                          DAT_007a9fd4) + (double)DAT_00969e40);
  if ((dVar7 <= dVar5) && (dVar5 = dVar7, dVar7 < dVar6)) {
    dVar5 = dVar6;
  }
  M1422_00273c08(dVar5,param_1,&local_30);
  return;
}



//==== 002746a8  ns=mobyupdate_helpers  size=0x420
// sig: undefined M1422_002746a8(void)
// callers(1): 002766e0 mobyupdate_unsorted::UpdateMoby_1422
// callees(7): 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 000fe4f0 mobyutil::MB_randRangeSigned; 001268f8 partupd::SpawnPart_21; 0012e3e8 partupd::SpawnPart_44; 00500060 fastfunc::FastDecTimerS8; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M1422_002746a8(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  undefined8 uVar6;
  undefined1 local_a0 [32];
  
  fastfunc::FastDecTimerS8(param_1 + 0xbc);
  iVar3 = 0;
  iVar4 = 0;
  if (0 < DAT_007aa070) {
    dVar5 = 0.5;
    uVar6 = 0x3feb333340000000;
    do {
      mobyutil::MB_randRangeFloat(DAT_007aa074,DAT_007aa078);
      mobyutil::MB_randRangeSigned((double)(longlong)DAT_00facc88,(double)(longlong)DAT_007aa084);
      uVar1 = fastfunc::FastDoubleToInt();
      iVar2 = mobyutil::MB_randRange(DAT_007aa088,DAT_007aa08c);
      partupd::SpawnPart_44
                ((double)DAT_007aa07c,(double)DAT_007aa080,(double)DAT_007aa090,(double)DAT_00facc84
                 ,uVar6,param_2,local_a0,
                 (int)(animationSpeed * (float)((double)(longlong)iVar2 + dVar5)),0x7f,0xffffff,
                 uVar1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_007aa070);
  }
  if (0 < DAT_007aa098) {
    do {
      mobyutil::MB_randRangeFloat(DAT_007aa09c,DAT_007aa0a0);
      mobyutil::MB_randRange(DAT_007aa0a4,DAT_007aa0a8);
      partupd::SpawnPart_21((double)DAT_007aa0ac,param_2,local_a0,DAT_007aa054,DAT_007aa058);
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_007aa098);
  }
  return;
}



//==== 00274ad0  ns=mobyupdate_helpers  size=0x21c
// sig: undefined M1422_00274ad0(void)
// callers(1): 002766e0 mobyupdate_unsorted::UpdateMoby_1422
// callees(1): 005025e0 fastfunc::FastDiffRots

void mobyupdate_helpers::M1422_00274ad0
               (int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong *puVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  ulonglong uVar16;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar17;
  double dVar18;
  float fStack00000040;
  float fStack00000044;
  float fStack00000050;
  float fStack00000054;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar11 = uVar10 - 0xb0;
  puVar6 = (ulonglong *)lVar11;
  *puVar6 = uVar10;
  puVar6[0x18] = in_LR;
  puVar6[0x15] = unaff_r31;
  fStack00000054 = (float)param_5;
  fStack00000044 = (float)param_3;
  fStack00000040 = (float)((ulonglong)param_3 >> 0x20);
  fStack00000050 = (float)((ulonglong)param_5 >> 0x20);
  fVar2 = ABS(fStack00000054 - fStack00000044);
  *(float *)((int)puVar6 + 0x74) = fStack00000054 - fStack00000044;
  fVar4 = ABS(fStack00000050 - fStack00000040);
  *(float *)(puVar6 + 0xe) = fStack00000050 - fStack00000040;
  *(float *)(puVar6 + 0xf) = fVar4 - fVar2;
  dVar18 = 0.0;
  fVar1 = *(float *)(param_1 + 0x48);
  uVar16 = (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar6 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar6 + 0x74) >> 0x1d) & 4;
  fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
  fVar3 = ABS(*(float *)(puVar6 + 0xe));
  if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
    fVar3 = fVar2;
  }
  fVar2 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  fVar9 = ABS(*(float *)((int)puVar6 + 0x74));
  if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
    fVar9 = fVar4;
  }
  if (0.0 < fVar3) {
    lVar14 = uVar10 - 0xa0;
    lVar12 = uVar10 - 0x24;
    lVar13 = uVar10 - 0x34;
    lVar17 = 2;
    fVar3 = (fVar9 - fVar3) / (fVar9 + fVar3);
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
      *(float *)((int)lVar14 + 0x7c) = *(float *)((int)lVar14 + 0x6c) * fVar3 * fVar3;
      iVar7 = (int)lVar13;
      lVar13 = lVar13 + 8;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar12 + 4) = *(float *)(iVar7 + 4) * fVar3 * fVar3;
      lVar12 = lVar12 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    lVar14 = uVar10 - 0x34;
    lVar17 = 4;
    pfVar15 = (float *)&DAT_007358e0;
    lVar12 = lVar14;
    lVar13 = lVar11;
    do {
      fVar3 = *pfVar15;
      fVar4 = pfVar15[1];
      pfVar15 = pfVar15 + 2;
      *(float *)((int)lVar13 + 0x7c) = *(float *)((int)lVar13 + 0x7c) * fVar3;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar12 + 4) = *(float *)((int)lVar12 + 4) * fVar4;
      lVar12 = lVar12 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    lVar12 = 2;
    do {
      iVar7 = (int)lVar11;
      iVar8 = (int)lVar14;
      lVar11 = lVar11 + 0x10;
      lVar14 = lVar14 + 0x10;
      dVar18 = (double)((float)(dVar18 + (double)*(float *)(iVar7 + 0x7c)) + *(float *)(iVar8 + 4) +
                        *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    dVar18 = (double)((float)(dVar18 + 0.7853981852531433) * fVar5 + fVar2);
  }
  _fStack00000040 = param_3;
  _fStack00000050 = param_5;
  dVar18 = (double)fastfunc::FastDiffRots(dVar18,(double)fVar1);
  *(float *)(param_2 + 0x68) = (float)dVar18;
  return;
}



//==== 00274cf0  ns=mobyupdate_helpers  size=0x1c8
// sig: undefined M1422_00274cf0(void)
// callers(1): 002766e0 mobyupdate_unsorted::UpdateMoby_1422
// callees(1): 000fc620 mobyutil::MB_randInt

int mobyupdate_helpers::M1422_00274cf0(int param_1)

{
  short sVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  
  iVar2 = *(int *)(param_1 + 0x78);
  iVar7 = 0;
  dVar9 = 2.0;
  iVar8 = *(int *)(iVar2 + 0x350);
  do {
    if (99 < iVar7) {
      return iVar8;
    }
    lVar5 = mobyutil::MB_randInt(6);
    iVar6 = (int)lVar5;
    if (iVar6 == 5) {
      iVar8 = 0x13;
    }
    else if (iVar6 == 4) {
      iVar8 = 0x11;
    }
    else if (iVar6 == 3) {
      iVar8 = 0x10;
    }
    else if (iVar6 == 2) {
      iVar8 = 0xf;
    }
    else if (iVar6 == 1) {
      iVar8 = 0xe;
    }
    else if (iVar6 == 0) {
      iVar8 = 0xd;
    }
    sVar1 = *(short *)((int)(lVar5 << 1) + 0x7a9f70 + *(int *)(iVar2 + 0x34c) * 0xc);
    iVar6 = (int)sVar1 +
            ((uint)((LZCOUNT(*(int *)(iVar2 + 0x350) - iVar8) << 0x3a) >> 0x3f) & -(int)sVar1);
    if ((iVar8 == 0x13) &&
       ((*(int *)(iVar2 + 0x364) != 0 ||
        (fVar4 = g_heroPosition.y - Cuboids[*(int *)(iVar2 + 0x25c)].pos.y,
        fVar3 = g_heroPosition.x - Cuboids[*(int *)(iVar2 + 0x25c)].pos.x,
        (float)((double)DAT_007a9ff4 + dVar9) < SQRT(fVar3 * fVar3 + fVar4 * fVar4))))) {
      iVar6 = 0;
    }
    if ((iVar8 == 0x11) && (*(int *)(iVar2 + 0x350) == 0xe)) {
      iVar6 = 0;
    }
    iVar7 = iVar7 + 1;
  } while (iVar6 == 0);
  return iVar8;
}



//==== 00274eb8  ns=mobyupdate_helpers  size=0x80
// sig: undefined M1422_00274eb8(void)
// callers(1): 002766e0 mobyupdate_unsorted::UpdateMoby_1422
// callees(0): 

void mobyupdate_helpers::M1422_00274eb8(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
  ushort *puVar2;
  MobyInstance *pMVar3;
  
  puVar2 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_2 << 2));
  if (puVar2 != (ushort *)0x0) {
    do {
      pMVar3 = MobyInstance + (*puVar2 & 0x7fff);
      if ((pMVar3 != (MobyInstance *)0x0) && (pMVar3->state != 0xfd && pMVar3->state != 0xfe)) {
        pMVar3->enabled = '\0';
        pMVar3->collision = (ushort *)0x0;
        pMVar3->modeBits = pMVar3->modeBits | DISABLED;
      }
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}



//==== 00274f38  ns=mobyupdate_helpers  size=0x88
// sig: undefined M1422_00274f38(void)
// callers(1): 002766e0 mobyupdate_unsorted::UpdateMoby_1422
// callees(0): 

void mobyupdate_helpers::M1422_00274f38(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
  ushort *puVar2;
  MobyInstance *pMVar3;
  
  puVar2 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_2 << 2));
  if (puVar2 != (ushort *)0x0) {
    do {
      pMVar3 = MobyInstance + (*puVar2 & 0x7fff);
      if ((pMVar3 != (MobyInstance *)0x0) && (pMVar3->state != 0xfd && pMVar3->state != 0xfe)) {
        pMVar3->enabled = '\x01';
        pMVar3->modeBits =
             pMVar3->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
        pMVar3->collision = pMVar3->pClass->collision;
      }
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}



//==== 00274fd0  ns=mobyupdate_helpers  size=0x210
// sig: undefined M1422_00274fd0(void)
// callers(1): 002766e0 mobyupdate_unsorted::UpdateMoby_1422
// callees(2): 003d5518 mobyupdate_helpers::M587_003d5518; 003d5544 mobyupdate_helpers::M587_003d5544

MobyInstance * mobyupdate_helpers::M1422_00274fd0(int param_1)

{
  ushort uVar1;
  int iVar2;
  MobyInstance *pMVar3;
  ushort *puVar4;
  MobyInstance *pMVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  iVar2 = *(int *)(param_1 + 0x78);
  dVar7 = 1024.0;
  puVar4 = (ushort *)(&mobyutil::g_MobyGroups)[*(int *)(iVar2 + 0x398)];
  if (puVar4 == (ushort *)0x0) {
    pMVar3 = (MobyInstance *)0x0;
  }
  else {
    pMVar3 = (MobyInstance *)0x0;
    dVar11 = 60.5;
    dVar12 = 0.5;
    dVar13 = 0.3330000042915344;
    do {
      uVar1 = *puVar4;
      if (MobyInstance[uVar1 & 0x7fff].oClass == FLOATING_PLATFORM_024B) {
        M587_003d5518();
        pMVar5 = MobyInstance + (uVar1 & 0x7fff);
        dVar9 = (double)((pMVar5->pos).y - *(float *)(iVar2 + 0x3c4));
        dVar6 = (double)((pMVar5->pos).x - *(float *)(iVar2 + 0x3c0));
        dVar8 = (double)(float)(dVar6 * dVar6 + (double)(float)(dVar9 * dVar9));
        if ((float)SQRT(dVar8) < DAT_007a9fc0) {
          dVar10 = (double)((pMVar5->pos).z - *(float *)(iVar2 + 0x3c8));
          M587_003d5544(pMVar5,(int)((double)animationSpeed * dVar11),
                        (int)((double)animationSpeed *
                             (double)(float)((double)(longlong)DAT_007a9fc4 + dVar12)));
          if ((dVar13 < (double)(float)(dVar10 * (double)*(float *)(param_1 + 200) +
                                       (double)(float)(dVar6 * (double)*(float *)(param_1 + 0xc0) +
                                                      (double)(float)(dVar9 * (double)*(float *)(
                                                  param_1 + 0xc4))))) &&
             (dVar9 = (double)SQRT((float)(dVar10 * dVar10 + dVar8)), dVar9 < dVar7)) {
            dVar7 = dVar9;
            pMVar3 = pMVar5;
          }
        }
      }
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
    } while (-1 < (short)uVar1);
  }
  return pMVar3;
}



//==== 00275240  ns=mobyupdate_helpers  size=0x1364
// sig: undefined M1422_00275240(void)
// callers(1): 002766e0 mobyupdate_unsorted::UpdateMoby_1422
// callees(23): 000c8b28 hud::Hud_SetEntryValueById; 000efa28 mobyfunc::CreateMoby; 000f1038 mobyfunc::GetBoneTransformations; 000f1114 mobyfunc::GetBonePosition; 000f31a8 mobyfunc::UpdateMobyTransform; 000fddc0 mobyutil::MB_SetAnimation; 000ffb70 mobyutil::GetGroundZ; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00111ba0 mobyutil::MB_getTargetInArea; 00119370 mobyutil::???_MB_SetFadeByDistToHero; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 00167e60 update::mode_sceneInit; 00267100 mobyupdate_helpers::M1387_00267100; 003d1d10 FUN_003d1d10; 003d4340 mobyupdate_helpers::M587_003d4340; 003ebfcc FUN_003ebfcc; 00400670 FUN_00400670; 00500fa8 fastfunc::FastApplyTransform; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M1422_00275240(MobyInstance *param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  short sVar8;
  MobyClass *pMVar9;
  void *pvVar10;
  Spline *pSVar11;
  ulonglong *puVar12;
  float fVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  Cuboid *pCVar17;
  ulonglong uVar18;
  int iVar21;
  undefined4 uVar22;
  MobyInstance *pMVar23;
  int iVar24;
  longlong lVar19;
  longlong lVar20;
  longlong lVar25;
  float *pfVar27;
  longlong lVar26;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong uVar28;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar29;
  ulonglong unaff_r31;
  byte bVar30;
  ulonglong in_LR;
  longlong lVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  ulonglong in_f29;
  double dVar41;
  ulonglong in_f30;
  undefined8 uVar42;
  ulonglong in_f31;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  
  uVar18 = ZEXT48(&stack0x00000000);
  lVar20 = uVar18 - 0x240;
  puVar12 = (ulonglong *)lVar20;
  *puVar12 = uVar18;
  puVar12[0x4a] = in_LR;
  puVar12[0x45] = in_f29;
  puVar12[0x46] = in_f30;
  puVar12[0x47] = in_f31;
  puVar12[0x44] = unaff_r31;
  puVar12[0x41] = unaff_r28;
  fVar2 = DAT_007a9fb8;
  pMVar9 = param_1->pClass;
  puVar12[0x43] = unaff_r30;
  pvVar10 = param_1->pVar;
  uVar29 = ZEXT48(pvVar10);
  param_1->scale = pMVar9->gScale * fVar2;
  uVar42 = 0x3fe0000000000000;
  puVar12[0x42] = unaff_r29;
  puVar12[0x40] = unaff_r27;
  puVar12[0x3f] = unaff_r26;
  puVar12[0x3e] = unaff_r25;
  mobyutil::____MB_SetFadeByDistToHero(0x3fe0000000000000,param_1);
  auVar46 = ZEXT416(0xffffffff);
  auVar48 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
  bVar14 = false;
  auVar43 = loadVectorLeftIndexed(0x34c,uVar29);
  auVar45 = loadVectorRightIndexed(0x35c,uVar29);
  auVar46 = loadVectorLeftIndexed(4,0x2751e0);
  auVar47 = loadVectorLeftIndexed(8,0x2751e0);
  auVar46 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar44 = vectorConvertFromSignedFixedPointWord(auVar43 | auVar45,0);
  auVar43 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar45 = loadVectorLeftIndexed(0xc,0x2751e0);
  dVar41 = 0.0;
  auVar45 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar49 = loadVectorLeftIndexed(0x10,0x2751e0);
  *(undefined4 *)((int)puVar12 + 0x114) = 0;
  auVar44 = vectorSubtractFloatingPoint
                      (auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,auVar44);
  auVar47 = vectorShiftLeftIntegerWord(auVar48,auVar48);
  auVar46 = ZEXT416(0xffffffff);
  auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
  auVar48 = vectorShiftLeftIntegerWord(auVar46,auVar46);
  auVar46 = auVar49 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar43 = vectorSubtractFloatingPoint
                      (auVar44,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60);
  auVar43 = vectorMultiplyAddFloatingPoint
                      (auVar43,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,auVar47
                      );
  auVar46 = vectorMultiplyAddFloatingPoint
                      (auVar43,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,auVar48
                      );
  iVar21 = mobyutil::MB_damage(param_1,0x330000,0);
  if (((iVar21 != 0) && (iVar24 = *(int *)(iVar21 + 0x20), iVar24 != 0)) &&
     ((sVar8 = *(short *)(iVar24 + 0xa6), sVar8 == 0x234 || sVar8 == 0x270 ||
      ((sVar8 == 0x238 && (*(char *)(iVar24 + 0xbc) == '\0')))))) {
    iVar21 = 0;
  }
  mobyutil::MB_HandleDamage(param_1,iVar21,uVar29 + 0x20,0,puVar12 + 0x22,(int)puVar12 + 0x114,0,4);
  if (*(int *)(puVar12 + 0x22) != 1) {
    bVar1 = param_1->state;
    bVar30 = (bVar1 == 2) << 1;
    if (((0xb < bVar1) && (bVar1 < 0x14)) || (bVar1 == 2)) {
      if (*(int *)(iVar21 + 0x20) != 0) {
        sVar8 = *(short *)(*(int *)(iVar21 + 0x20) + 0xa6);
        bVar30 = (sVar8 == 0x131) << 1;
        if (sVar8 < 0xb2) {
          if (0xb0 < sVar8) {
            *(float *)((int)puVar12 + 0x114) = *(float *)((int)puVar12 + 0x114) * 3.0;
          }
        }
        else if (sVar8 == 0x131) {
          *(float *)((int)puVar12 + 0x114) = *(float *)((int)puVar12 + 0x114) * 0.666;
        }
      }
      if (hero::g_heroStateType == 0xf) {
        auVar43 = loadVectorLeftIndexed(0x390,uVar29);
        auVar45 = loadVectorRightIndexed(0x3a0,uVar29);
        auVar44 = loadVectorLeftIndexed(0x114,lVar20);
        auVar43 = vectorAddFloatingPoint(auVar43 | auVar45,auVar44);
        auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar22 = storeVectorElementWordIndexed
                           (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x390,
                            uVar29);
        *(undefined4 *)((int)pvVar10 + 0x390U & 0xfffffffc) = uVar22;
      }
      else {
        auVar43 = loadVectorLeftIndexed(0x394,uVar29);
        auVar45 = loadVectorRightIndexed(0x3a4,uVar29);
        auVar44 = loadVectorLeftIndexed(0x114,lVar20);
        auVar43 = vectorAddFloatingPoint(auVar43 | auVar45,auVar44);
        auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar22 = storeVectorElementWordIndexed
                           (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x394,
                            uVar29);
        *(undefined4 *)((int)pvVar10 + 0x394U & 0xfffffffc) = uVar22;
      }
      auVar43 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar45 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
      auVar43 = ZEXT416(0);
      vectorCompareEqualToFloatingPoint
                (auVar45,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60);
      if ((bool)(bVar30 >> 1)) {
        if (((param_1->state == '\x02') && (iVar21 != 0)) &&
           (((*(uint *)(iVar21 + 0x24) & 0x80000) != 0 && (param_1->animationId != '\x0e')))) {
          mobyutil::MB_SetAnimation(param_1,0xe,5,1);
          auVar45 = loadVectorLeftIndexed(0x114,lVar20);
        }
        auVar43 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar45 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar46 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar44 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
        auVar43 = loadVectorLeftIndexed(0x38c,uVar29);
        auVar46 = loadVectorRightIndexed(0x39c,uVar29);
        auVar43 = auVar43 | auVar46;
        auVar46 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
        vectorCompareGreaterThanOrEqualToFloatingPoint
                  (auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,auVar44);
        bVar14 = false;
        if (!(bool)(bVar30 >> 1 & 1)) {
          auVar46 = vectorSubtractFloatingPoint(auVar43,auVar45);
          auVar46 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
          vectorCompareGreaterThanOrEqualToFloatingPoint
                    (auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,auVar44);
          if ((bool)(bVar30 >> 1 & 1)) {
            bVar14 = true;
          }
        }
        auVar46 = vectorSubtractFloatingPoint(auVar43,auVar45);
        auVar46 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
        vectorCompareGreaterThanOrEqualToFloatingPoint(auVar46,auVar44);
        uVar22 = storeVectorElementWordIndexed(auVar46,0x38c,uVar29);
        *(undefined4 *)((int)pvVar10 + 0x38cU & 0xfffffffc) = uVar22;
        if ((bool)(bVar30 >> 1 & 1)) {
          uVar22 = storeVectorElementWordIndexed(auVar44,0x38c,uVar29);
          *(undefined4 *)((int)pvVar10 + 0x38cU & 0xfffffffc) = uVar22;
        }
        *(undefined1 *)((int)pvVar10 + 0x67) = 0xf0;
        mobyutil::MB_UpdateLightsTransition(param_1,uVar29 + 0x60);
        if (*(int *)((int)pvVar10 + 0x38c) == 0) {
          if (*(int *)((int)pvVar10 + 0x368) != -1) {
            hud::Hud_SetEntryValueById(*(int *)((int)pvVar10 + 0x368),0);
            *(undefined4 *)((int)pvVar10 + 0x368) = 0xffffffff;
          }
          param_1->state = '\x1a';
          if (param_1->animationId != '\0') {
            puVar12[0x39] = (longlong)(int)(animationSpeed * 20.5);
            mobyutil::MB_SetAnimation(param_1,0,0,*(undefined4 *)((int)puVar12 + 0x1cc));
          }
          iVar21 = sound::IsMobyPlayingSound(param_1,*(int *)((int)pvVar10 + 0x3b0));
          if (iVar21 != 0) {
            iVar21 = *(int *)((int)pvVar10 + 0x3b0);
            if (((iVar21 != -1) && (sound::g_SoundChannels[iVar21].pMoby == param_1)) &&
               (sound::g_SoundChannels[iVar21].state != '\0')) {
              sound::sound_Kill(iVar21);
            }
            *(undefined4 *)((int)pvVar10 + 0x3b0) = 0xffffffff;
          }
          bVar14 = false;
          *(undefined4 *)((int)pvVar10 + 0x358) = 0;
        }
      }
    }
  }
  param_1->damage = -1;
  uVar22 = fastfunc::FastDoubleToInt((double)*(float *)((int)pvVar10 + 0x38c));
  *(undefined4 *)((int)pvVar10 + 0x36c) = uVar22;
  mobyutil::MB_ColorDyingMoby(param_1,uVar29 + 0x60);
  iVar21 = *(int *)((int)pvVar10 + 0x3a0);
  if (iVar21 == 0) {
    pMVar23 = mobyfunc::CreateMoby(0x58f);
    *(MobyInstance **)((int)pvVar10 + 0x3a0) = pMVar23;
    pMVar23->updateDistance = -1;
    *(undefined1 *)(*(int *)((int)pvVar10 + 0x3a0) + 0x31) = 1;
    mobyutil::MB_SetAnimation(*(undefined4 *)((int)pvVar10 + 0x3a0),1,0,0);
    iVar21 = *(int *)((int)pvVar10 + 0x3a0);
  }
  *(short *)(iVar21 + 0x32) = param_1->drawDistance;
  *(MobyModeBit *)(*(int *)((int)pvVar10 + 0x3a0) + 0x34) = param_1->modeBits | LOCK_ROTATION;
  mobyfunc::GetBoneTransformations(param_1,4,uVar18 - 0x170);
  fastfunc::FastApplyTransform
            ((Vec4 *)(*(int *)((int)pvVar10 + 0x3a0) + 0xc0),(Vec4 *)(uVar18 - 0x170));
  mobyfunc::GetBonePosition(param_1,4,(ulonglong)*(uint *)((int)pvVar10 + 0x3a0) + 0x10);
  mobyfunc::UpdateMobyTransform(*(MobyInstance **)((int)pvVar10 + 0x3a0));
  iVar21 = *(int *)((int)pvVar10 + 0x3a4);
  if (iVar21 == 0) {
    pMVar23 = mobyfunc::CreateMoby(DREK);
    *(MobyInstance **)((int)pvVar10 + 0x3a4) = pMVar23;
    pMVar23->updateDistance = -1;
    *(undefined1 *)(*(int *)((int)pvVar10 + 0x3a4) + 0x31) = 1;
    mobyutil::MB_SetAnimation(*(undefined4 *)((int)pvVar10 + 0x3a4),1,0,0);
    iVar21 = *(int *)((int)pvVar10 + 0x3a4);
  }
  *(short *)(iVar21 + 0x32) = param_1->drawDistance;
  *(MobyModeBit *)(*(int *)((int)pvVar10 + 0x3a4) + 0x34) = param_1->modeBits | LOCK_ROTATION;
  mobyfunc::GetBoneTransformations(*(undefined4 *)((int)pvVar10 + 0x3a0),0,uVar18 - 0x170);
  fastfunc::FastApplyTransform
            ((Vec4 *)(*(int *)((int)pvVar10 + 0x3a4) + 0xc0),(Vec4 *)(uVar18 - 0x170));
  mobyfunc::GetBonePosition
            (*(undefined4 *)((int)pvVar10 + 0x3a0),0,
             (ulonglong)*(uint *)((int)pvVar10 + 0x3a4) + 0x10);
  mobyfunc::UpdateMobyTransform(*(MobyInstance **)((int)pvVar10 + 0x3a4));
  pSVar11 = Splines[*(int *)((int)pvVar10 + 0x218)];
  mobyutil::MB_getTargetInArea
            (0x4080000000000000,param_1,uVar29 + 0x70,pSVar11,0,0,pSVar11->points,pSVar11->cnt);
  if (*(int *)((int)pvVar10 + 0xb0) == 0) {
    *(MobyInstance **)((int)pvVar10 + 0xb0) = g_heroMobyPtr;
  }
  if (param_1->state < 0x14 && 0xb < param_1->state) {
    iVar21 = M587_003d4340(MobyInstance + *(int *)((int)pvVar10 + 0x21c));
    if (iVar21 == 1) {
      param_1->state = '\x13';
      if (param_1->animationId != '\x01') {
        puVar12[0x39] = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(param_1,1,0,*(undefined4 *)((int)puVar12 + 0x1cc));
      }
      auVar46 = ZEXT416(0xffffffff);
      auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
      auVar43 = vectorShiftLeftIntegerWord(auVar46,auVar46);
      auVar46 = loadVectorLeftIndexed(0x28,0x2751e0);
      auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar46 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar43 = vectorMultiplyAddFloatingPoint
                          (auVar44,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,
                           auVar43);
      auVar46 = ZEXT416(0xffffffff);
      auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
      auVar45 = vectorShiftLeftIntegerWord(auVar46,auVar46);
      auVar46 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
      auVar46 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar22 = storeVectorElementWordIndexed
                         (auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,0x358,uVar29
                         );
      *(undefined4 *)((int)pvVar10 + 0x358U & 0xfffffffc) = uVar22;
      auVar46 = loadVectorLeftIndexed(0x20,0x2751e0);
      auVar46 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar46 = vectorMultiplyAddFloatingPoint
                          (auVar44,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,
                           auVar45);
      auVar46 = vectorConvertToSignedFixedPointWordSaturate(auVar46,0);
      auVar46 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar22 = storeVectorElementWordIndexed
                         (auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,0x354,uVar29
                         );
      *(undefined4 *)((int)pvVar10 + 0x354U & 0xfffffffc) = uVar22;
      *(undefined4 *)((int)pvVar10 + 0x364) = 0;
      uVar22 = FUN_003ebfcc(0x4017333340000000,param_1,uVar29 + 0x3c0);
      *(undefined4 *)((int)pvVar10 + 0x338) = uVar22;
    }
    else if (iVar21 == -1) {
      param_1->state = '\a';
      param_1->modeBits = param_1->modeBits | (UNK_40|DISABLED);
      update::mode_sceneInit(7);
      *(undefined4 *)((int)pvVar10 + 0x39c) = 0x19;
    }
  }
  if ((DAT_00facc70 != 0 || bVar14) && (g_heroHealth != 0)) {
    if (DAT_00facc70 != 0) {
      iVar21 = 0;
      *(undefined4 *)((int)pvVar10 + 0x34c) = 0;
      uVar28 = uVar29;
      do {
        M1387_00267100(MobyInstance + *(int *)((int)uVar28 + 0x230));
        iVar21 = iVar21 + 1;
        uVar28 = uVar28 + 4;
      } while (iVar21 < 4);
      DAT_00facc70 = 0;
    }
    if (*(int *)((int)pvVar10 + 0x34c) < 2) {
      param_1->state = '\x03';
      iVar24 = *(int *)((int)pvVar10 + 0x34c) + 1;
      *(int *)((int)pvVar10 + 0x34c) = iVar24;
      *(undefined4 *)((int)pvVar10 + 0x374) = 0;
      iVar21 = *(int *)((int)pvVar10 + iVar24 * 4 + 0x260);
      *(undefined4 *)((int)pvVar10 + 0x398) = *(undefined4 *)((int)pvVar10 + iVar24 * 4 + 0x204);
      *(undefined4 *)((int)pvVar10 + 0x348) = 1;
      pSVar11 = Splines[iVar21];
      *(Spline **)((int)pvVar10 + 0x340) = pSVar11;
      pCVar17 = Cuboids;
      iVar21 = *(int *)((int)pvVar10 + iVar24 * 4 + 0x24c);
      fVar2 = pSVar11->points[0].x;
      *(float *)((int)pvVar10 + 0x300) = fVar2;
      fVar3 = pSVar11->points[0].y;
      *(float *)((int)pvVar10 + 0x304) = fVar3;
      *(float *)((int)pvVar10 + 0x308) = pSVar11->points[0].z;
      *(float *)((int)pvVar10 + 0x30c) = pSVar11->points[0].w;
      fVar2 = fVar2 - pCVar17[iVar21].pos.x;
      *(float *)((int)pvVar10 + 0x300) = fVar2;
      fVar3 = fVar3 - pCVar17[iVar21].pos.y;
      *(undefined4 *)((int)pvVar10 + 0x308) = 0;
      dVar35 = (double)SQRT(fVar2 * fVar2 + fVar3 * fVar3);
      dVar32 = (double)(fVar2 * (float)(25.0 / dVar35));
      dVar33 = (double)(fVar3 * (float)(25.0 / dVar35));
      dVar37 = dVar41;
      if (dVar41 - dVar35 < 0.0) {
        dVar37 = dVar32;
      }
      dVar34 = dVar41;
      if (dVar41 - dVar35 < 0.0) {
        dVar34 = dVar33;
      }
      if (dVar35 - dVar41 < 0.0) {
        dVar37 = dVar32;
      }
      if (dVar35 - dVar41 < 0.0) {
        dVar34 = dVar33;
      }
      *(float *)((int)pvVar10 + 0x300) = (float)dVar37;
      *(float *)((int)pvVar10 + 0x304) = (float)dVar34;
      fVar2 = (float)(dVar37 + (double)pCVar17[iVar21].pos.x);
      *(float *)((int)pvVar10 + 0x300) = fVar2;
      fVar3 = (float)(dVar34 + (double)pCVar17[iVar21].pos.y);
      *(float *)((int)pvVar10 + 0x304) = fVar3;
      fVar4 = pCVar17[iVar21].pos.z;
      *(undefined4 *)((int)pvVar10 + 0x31c) = 0;
      *(float *)((int)pvVar10 + 0x308) = fVar4;
      *(undefined4 *)((int)pvVar10 + 0x318) = 0;
      *(undefined4 *)((int)pvVar10 + 0x314) = 0;
      *(undefined4 *)((int)pvVar10 + 0x310) = 0;
      fVar4 = pCVar17[iVar21].pos.x - fVar2;
      fVar3 = pCVar17[iVar21].pos.y - fVar3;
      dVar32 = ABS((double)fVar4);
      dVar33 = ABS((double)fVar3);
      *(float *)((int)puVar12 + 0x13c) = fVar4;
      *(float *)(puVar12 + 0x28) = fVar3;
      *(float *)((int)puVar12 + 0x144) = (float)(dVar32 - dVar33);
      dVar35 = 0.7853981852531433;
      uVar29 = (ulonglong)(*(uint *)((int)puVar12 + 0x13c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar12 + 0x144) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar12 + 0x28) >> 0x1d) & 4;
      dVar37 = ABS((double)*(float *)((int)puVar12 + 0x13c));
      if ((double)*(float *)((int)puVar12 + 0x144) - dVar41 < 0.0) {
        dVar37 = dVar33;
      }
      fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar29 << 2));
      dVar33 = ABS((double)*(float *)(puVar12 + 0x28));
      if ((double)*(float *)((int)puVar12 + 0x144) - dVar41 < 0.0) {
        dVar33 = dVar32;
      }
      fVar4 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
      dVar32 = dVar41;
      if (dVar41 < dVar37) {
        lVar19 = uVar18 - 0x230;
        lVar26 = uVar18 - 0x88;
        lVar25 = uVar18 - 0x98;
        lVar31 = 2;
        fVar5 = (float)(dVar33 - dVar37) / (float)(dVar33 + dVar37);
        fVar6 = fVar5 * fVar5;
        *(float *)((int)puVar12 + 0x1b4) = fVar5;
        *(float *)((int)puVar12 + 0x1ac) = fVar5;
        *(float *)(puVar12 + 0x36) = fVar5;
        *(float *)(puVar12 + 0x35) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)((int)puVar12 + 0x1ac) = *(float *)((int)puVar12 + 0x1ac) * fVar6;
        *(float *)(puVar12 + 0x36) = *(float *)(puVar12 + 0x36) * fVar5;
        *(float *)((int)puVar12 + 0x1b4) = *(float *)((int)puVar12 + 0x1b4) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar19 + 0x1a8) = *(float *)((int)lVar19 + 0x198) * fVar5 * fVar5;
          iVar21 = (int)lVar25;
          lVar25 = lVar25 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar21 + 4) * fVar5 * fVar5;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar26 = uVar18 - 0x98;
        pfVar27 = (float *)&DAT_007358e0;
        lVar19 = lVar20;
        lVar25 = lVar26;
        do {
          fVar5 = *pfVar27;
          fVar6 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar19 + 0x1a8) = *(float *)((int)lVar19 + 0x1a8) * fVar5;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar6;
          lVar25 = lVar25 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar25 = 2;
        lVar19 = lVar20;
        dVar37 = dVar41;
        do {
          iVar21 = (int)lVar19;
          iVar24 = (int)lVar26;
          lVar19 = lVar19 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar21 + 0x1a8)) +
                            *(float *)(iVar24 + 4) + *(float *)(iVar24 + 8) +
                           *(float *)(iVar24 + 0xc));
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        dVar32 = (double)((float)(dVar37 + 0.7853981852531433) * fVar3 + fVar4);
      }
      *(float *)((int)pvVar10 + 0x318) = (float)dVar32;
      *(float *)(puVar12 + 0x10) = fVar2;
      fVar3 = *(float *)((int)pvVar10 + 0x304);
      *(float *)((int)puVar12 + 0x84) = fVar3;
      fVar4 = *(float *)((int)pvVar10 + 0x308);
      *(float *)(puVar12 + 0x11) = fVar4;
      *(undefined4 *)((int)puVar12 + 0x8c) = *(undefined4 *)((int)pvVar10 + 0x30c);
      fVar5 = *(float *)((int)pvVar10 + 0x318) + 1.5707963;
      fVar6 = 3.1415925 - fVar5;
      if (fVar5 - (3.1415925 - fVar5) < 0.0) {
        fVar6 = fVar5;
      }
      fVar7 = -3.1415925 - fVar5;
      if ((-3.1415925 - fVar5) - fVar6 < 0.0) {
        fVar7 = fVar6;
      }
      fVar5 = fVar7 * fVar7;
      fVar6 = fVar5 * fVar5 * fVar7;
      fVar13 = fVar5 * fVar6;
      *(float *)(puVar12 + 0x10) =
           (fVar5 * fVar13 * 2.601887e-06 +
           fVar13 * -0.0001980741 + fVar6 * 0.0083330255 + fVar5 * fVar7 * -0.16666657 + fVar7) *
           20.0 + fVar2;
      fVar2 = *(float *)((int)pvVar10 + 0x318);
      iVar21 = *(int *)((int)pvVar10 + *(int *)((int)pvVar10 + 0x34c) * 4 + 0x224);
      fVar5 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar5 = fVar2;
      }
      fVar6 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
        fVar6 = fVar5;
      }
      fVar2 = fVar6 * fVar6;
      fVar5 = fVar2 * fVar2 * fVar6;
      fVar7 = fVar2 * fVar5;
      *(float *)((int)puVar12 + 0x84) =
           (fVar2 * fVar7 * 2.601887e-06 +
           fVar7 * -0.0001980741 + fVar5 * 0.0083330255 + fVar2 * fVar6 * -0.16666657 + fVar6) *
           20.0 + fVar3;
      *(float *)(puVar12 + 0x11) = fVar4 + 3.0;
      *(float *)(puVar12 + 0x18) = pCVar17[iVar21].pos.x;
      *(float *)((int)puVar12 + 0xc4) = pCVar17[iVar21].pos.y;
      fVar2 = pCVar17[iVar21].pos.z;
      *(float *)(puVar12 + 0x19) = fVar2;
      *(float *)((int)puVar12 + 0xcc) = pCVar17[iVar21].pos.w;
      *(float *)(puVar12 + 0x19) = fVar2 + 20.0;
      dVar32 = (double)mobyutil::GetGroundZ(uVar42,uVar18 - 0x180,0);
      iVar21 = *(int *)((int)pvVar10 + 0x34c);
      dVar36 = (double)*(float *)(puVar12 + 0x18);
      dVar38 = (double)*(float *)((int)puVar12 + 0xc4);
      *(float *)(puVar12 + 0x12) = *(float *)(puVar12 + 0x18);
      pCVar17 = Cuboids;
      *(float *)((int)puVar12 + 0x94) = *(float *)((int)puVar12 + 0xc4);
      *(undefined4 *)((int)puVar12 + 0x9c) = *(undefined4 *)((int)puVar12 + 0xcc);
      iVar21 = *(int *)((int)pvVar10 + iVar21 * 4 + 0x24c);
      *(float *)(puVar12 + 0x19) = (float)dVar32;
      *(float *)(puVar12 + 0x13) = (float)dVar32;
      fVar2 = (float)((double)pCVar17[iVar21].pos.y - dVar38);
      fVar3 = (float)((double)pCVar17[iVar21].pos.x - dVar36);
      dVar39 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2);
      fVar4 = *(float *)(puVar12 + 0x10);
      fVar5 = *(float *)((int)puVar12 + 0x84);
      dVar33 = (double)((float)(-15.0 / dVar39) * fVar2);
      dVar34 = (double)((float)(-15.0 / dVar39) * fVar3);
      dVar37 = dVar41;
      if (dVar41 - dVar39 < 0.0) {
        dVar37 = dVar33;
      }
      dVar40 = dVar41;
      if (dVar41 - dVar39 < 0.0) {
        dVar40 = dVar34;
      }
      if (dVar39 - dVar41 < 0.0) {
        dVar37 = dVar33;
      }
      if (dVar39 - dVar41 < 0.0) {
        dVar40 = dVar34;
      }
      dVar34 = (double)(float)(dVar38 + dVar37);
      dVar33 = (double)(float)(dVar36 + dVar40);
      fVar2 = (float)(dVar38 - dVar34);
      fVar3 = (float)(dVar36 - dVar33);
      *(float *)((int)puVar12 + 0x94) = (float)(dVar38 + dVar37);
      *(float *)(puVar12 + 0x12) = (float)(dVar36 + dVar40);
      dVar36 = ABS((double)fVar2);
      dVar38 = ABS((double)fVar3);
      *(float *)(puVar12 + 0x26) = fVar3;
      *(float *)((int)puVar12 + 0x134) = fVar2;
      *(float *)(puVar12 + 0x27) = (float)(dVar38 - dVar36);
      *(float *)(puVar12 + 0x13) = (float)(dVar32 + 15.0);
      uVar29 = (ulonglong)(*(uint *)(puVar12 + 0x26) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0x27) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar12 + 0x134) >> 0x1d) & 4;
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar29 << 2));
      dVar37 = ABS((double)*(float *)(puVar12 + 0x26));
      if ((double)*(float *)(puVar12 + 0x27) - dVar41 < 0.0) {
        dVar37 = dVar36;
      }
      fVar3 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
      dVar32 = ABS((double)*(float *)((int)puVar12 + 0x134));
      if ((double)*(float *)(puVar12 + 0x27) - dVar41 < 0.0) {
        dVar32 = dVar38;
      }
      dVar36 = dVar41;
      if (dVar41 < dVar37) {
        lVar19 = uVar18 - 0x230;
        lVar26 = uVar18 - 0xa8;
        lVar25 = uVar18 - 0xb8;
        lVar31 = 2;
        fVar6 = (float)(dVar32 - dVar37) / (float)(dVar32 + dVar37);
        fVar7 = fVar6 * fVar6;
        *(float *)((int)puVar12 + 0x194) = fVar6;
        *(float *)((int)puVar12 + 0x18c) = fVar6;
        *(float *)(puVar12 + 0x32) = fVar6;
        *(float *)(puVar12 + 0x31) = fVar6;
        fVar6 = fVar7 * fVar7;
        *(float *)((int)puVar12 + 0x18c) = *(float *)((int)puVar12 + 0x18c) * fVar7;
        *(float *)(puVar12 + 0x32) = *(float *)(puVar12 + 0x32) * fVar6;
        *(float *)((int)puVar12 + 0x194) = *(float *)((int)puVar12 + 0x194) * fVar6 * fVar7;
        do {
          *(float *)((int)lVar19 + 0x188) = *(float *)((int)lVar19 + 0x178) * fVar6 * fVar6;
          iVar21 = (int)lVar25;
          lVar25 = lVar25 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar21 + 4) * fVar6 * fVar6;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar26 = uVar18 - 0xb8;
        pfVar27 = (float *)&DAT_007358e0;
        lVar19 = lVar20;
        lVar25 = lVar26;
        do {
          fVar6 = *pfVar27;
          fVar7 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar19 + 0x188) = *(float *)((int)lVar19 + 0x188) * fVar6;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar7;
          lVar25 = lVar25 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar25 = 2;
        lVar19 = lVar20;
        dVar37 = dVar41;
        do {
          iVar21 = (int)lVar19;
          iVar24 = (int)lVar26;
          lVar19 = lVar19 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar21 + 0x188)) +
                            *(float *)(iVar24 + 4) + *(float *)(iVar24 + 8) +
                           *(float *)(iVar24 + 0xc));
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        dVar36 = (double)((float)(dVar37 + dVar35) * fVar2 + fVar3);
      }
      *(float *)((int)puVar12 + 0xcc) = (float)dVar36;
      *(undefined4 *)((int)puVar12 + 0xac) = 0;
      *(undefined4 *)(puVar12 + 0x15) = 0;
      *(undefined4 *)((int)puVar12 + 0xa4) = 0;
      *(undefined4 *)(puVar12 + 0x14) = 0;
      fVar4 = *(float *)((int)pvVar10 + 0x300) - fVar4;
      fVar5 = *(float *)((int)pvVar10 + 0x304) - fVar5;
      dVar32 = ABS((double)fVar4);
      dVar36 = ABS((double)fVar5);
      *(float *)((int)puVar12 + 0x124) = fVar4;
      *(float *)(puVar12 + 0x25) = fVar5;
      *(float *)((int)puVar12 + 300) = (float)(dVar32 - dVar36);
      uVar29 = (ulonglong)(*(uint *)((int)puVar12 + 0x124) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar12 + 300) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar12 + 0x25) >> 0x1d) & 4;
      dVar37 = ABS((double)*(float *)((int)puVar12 + 0x124));
      if ((double)*(float *)((int)puVar12 + 300) - dVar41 < 0.0) {
        dVar37 = dVar36;
      }
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar29 << 2));
      dVar36 = ABS((double)*(float *)(puVar12 + 0x25));
      if ((double)*(float *)((int)puVar12 + 300) - dVar41 < 0.0) {
        dVar36 = dVar32;
      }
      fVar3 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
      dVar32 = dVar41;
      if (dVar41 < dVar37) {
        lVar19 = uVar18 - 0x230;
        lVar26 = uVar18 - 200;
        lVar25 = uVar18 - 0xd8;
        lVar31 = 2;
        fVar4 = (float)(dVar36 - dVar37) / (float)(dVar36 + dVar37);
        fVar5 = fVar4 * fVar4;
        *(float *)((int)puVar12 + 0x174) = fVar4;
        *(float *)((int)puVar12 + 0x16c) = fVar4;
        *(float *)(puVar12 + 0x2e) = fVar4;
        *(float *)(puVar12 + 0x2d) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)((int)puVar12 + 0x16c) = *(float *)((int)puVar12 + 0x16c) * fVar5;
        *(float *)(puVar12 + 0x2e) = *(float *)(puVar12 + 0x2e) * fVar4;
        *(float *)((int)puVar12 + 0x174) = *(float *)((int)puVar12 + 0x174) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar19 + 0x168) = *(float *)((int)lVar19 + 0x158) * fVar4 * fVar4;
          iVar21 = (int)lVar25;
          lVar25 = lVar25 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar21 + 4) * fVar4 * fVar4;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar26 = uVar18 - 0xd8;
        pfVar27 = (float *)&DAT_007358e0;
        lVar19 = lVar20;
        lVar25 = lVar26;
        do {
          fVar4 = *pfVar27;
          fVar5 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar19 + 0x168) = *(float *)((int)lVar19 + 0x168) * fVar4;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar5;
          lVar25 = lVar25 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar25 = 2;
        lVar19 = lVar20;
        dVar37 = dVar41;
        do {
          iVar21 = (int)lVar19;
          iVar24 = (int)lVar26;
          lVar19 = lVar19 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar21 + 0x168)) +
                            *(float *)(iVar24 + 4) + *(float *)(iVar24 + 8) +
                           *(float *)(iVar24 + 0xc));
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        dVar32 = (double)((float)(dVar37 + dVar35) * fVar2 + fVar3);
      }
      *(float *)(puVar12 + 0x15) = (float)dVar32;
      iVar21 = *(int *)((int)pvVar10 + 0x340);
      *(undefined4 *)((int)puVar12 + 0xa4) = 0xbe32b8c2;
      *(undefined4 *)((int)puVar12 + 0xbc) = 0;
      *(undefined4 *)(puVar12 + 0x17) = 0;
      *(undefined4 *)((int)puVar12 + 0xb4) = 0;
      *(undefined4 *)(puVar12 + 0x16) = 0;
      fVar2 = (float)((double)*(float *)(iVar21 + 0x10) - dVar33);
      fVar3 = (float)((double)*(float *)(iVar21 + 0x14) - dVar34);
      dVar32 = ABS((double)fVar2);
      dVar33 = ABS((double)fVar3);
      *(float *)(puVar12 + 0x23) = fVar2;
      *(float *)((int)puVar12 + 0x11c) = fVar3;
      *(float *)(puVar12 + 0x24) = (float)(dVar32 - dVar33);
      uVar29 = (ulonglong)(*(uint *)(puVar12 + 0x23) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0x24) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar12 + 0x11c) >> 0x1d) & 4;
      dVar37 = ABS((double)*(float *)(puVar12 + 0x23));
      if ((double)*(float *)(puVar12 + 0x24) - dVar41 < 0.0) {
        dVar37 = dVar33;
      }
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar29 << 2));
      dVar33 = ABS((double)*(float *)((int)puVar12 + 0x11c));
      if ((double)*(float *)(puVar12 + 0x24) - dVar41 < 0.0) {
        dVar33 = dVar32;
      }
      fVar3 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
      if (dVar41 < dVar37) {
        lVar19 = uVar18 - 0x230;
        lVar25 = uVar18 - 0xf8;
        lVar26 = uVar18 - 0xe8;
        lVar31 = 2;
        fVar4 = (float)(dVar33 - dVar37) / (float)(dVar33 + dVar37);
        fVar5 = fVar4 * fVar4;
        *(float *)((int)puVar12 + 0x154) = fVar4;
        *(float *)((int)puVar12 + 0x14c) = fVar4;
        *(float *)(puVar12 + 0x2a) = fVar4;
        *(float *)(puVar12 + 0x29) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)((int)puVar12 + 0x14c) = *(float *)((int)puVar12 + 0x14c) * fVar5;
        *(float *)(puVar12 + 0x2a) = *(float *)(puVar12 + 0x2a) * fVar4;
        *(float *)((int)puVar12 + 0x154) = *(float *)((int)puVar12 + 0x154) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar19 + 0x148) = *(float *)((int)lVar19 + 0x138) * fVar4 * fVar4;
          iVar21 = (int)lVar25;
          lVar19 = lVar19 + 8;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar21 + 4) * fVar4 * fVar4;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar26 = uVar18 - 0xf8;
        pfVar27 = (float *)&DAT_007358e0;
        lVar19 = lVar20;
        lVar25 = lVar26;
        do {
          fVar4 = *pfVar27;
          fVar5 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar19 + 0x148) = *(float *)((int)lVar19 + 0x148) * fVar4;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar5;
          lVar25 = lVar25 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar19 = 2;
        do {
          iVar21 = (int)lVar20;
          iVar24 = (int)lVar26;
          lVar20 = lVar20 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar21 + 0x148)) +
                            *(float *)(iVar24 + 4) + *(float *)(iVar24 + 8) +
                           *(float *)(iVar24 + 0xc));
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        dVar41 = (double)((float)(dVar41 + dVar35) * fVar2 + fVar3);
      }
      *(float *)(puVar12 + 0x17) = (float)dVar41;
      uVar22 = *(undefined4 *)((int)pvVar10 + 0x334);
      *(undefined4 *)((int)puVar12 + 0xb4) = 0x3eb2b8c2;
      uVar16 = DAT_007aa004;
      uVar15 = DAT_007aa000;
      puVar12[0xe] = 0;
      FUN_00400670(uVar22,uVar18 - 0x1c0,uVar18 - 0x1b0,uVar18 - 0x1a0,uVar18 - 400,uVar18 - 0x180,
                   uVar15,uVar16);
    }
    else {
      param_1->state = '\x15';
      iVar21 = sound::IsMobyPlayingSound(param_1,*(int *)((int)pvVar10 + 0x3b0));
      if (iVar21 != 0) {
        iVar21 = *(int *)((int)pvVar10 + 0x3b0);
        if (((iVar21 != -1) && (sound::g_SoundChannels[iVar21].pMoby == param_1)) &&
           (sound::g_SoundChannels[iVar21].state != '\0')) {
          sound::sound_Kill(iVar21);
        }
        *(undefined4 *)((int)pvVar10 + 0x3b0) = 0xffffffff;
      }
      if (param_1->animationId != '\0') {
        puVar12[0x39] = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(param_1,0,0,*(undefined4 *)((int)puVar12 + 0x1cc));
      }
      uVar22 = FUN_003d1d10(uVar29 + 0x3c0,&g_heroPosition,*(undefined4 *)((int)pvVar10 + 0x200));
      *(undefined4 *)((int)pvVar10 + 0x330) = uVar22;
      *(undefined4 *)((int)pvVar10 + 0x390) = 0;
      *(undefined4 *)((int)pvVar10 + 0x394) = 0;
    }
  }
  return;
}



//==== 002765a4  ns=mobyupdate_helpers  size=0x6c
// sig: undefined M1422_002765a4(void)
// callers(1): 002766e0 mobyupdate_unsorted::UpdateMoby_1422
// callees(0): 

void mobyupdate_helpers::M1422_002765a4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if (*(int *)(iVar1 + 0x3e4) == 0) {
    if (g_framesGroundedCnt != 0) {
      *(undefined4 *)(iVar1 + 1000) = g_standingOnMoby;
    }
    if (g_heroState == DEATH_FALLING) {
      *(undefined4 *)(iVar1 + 0x3e4) = 1;
      if ((*(int *)(iVar1 + 1000) != 0) && (*(short *)(*(int *)(iVar1 + 1000) + 0xa6) == 0x24b)) {
        DAT_00facc7c = DAT_00facc7c + 1;
      }
    }
  }
  return;
}



//==== 002766e0  ns=mobyupdate_unsorted  size=0x398c
// sig: undefined UpdateMoby_1422(MobyInstance * moby)
// callers(0): 
// callees(86): 00047f74 camera::SetCameraPosition; 0006d720 RegisterFuncForMoby; 000836ac hero::Hero_RevertToRatchet; 00083950 hero::HandleHeroDeath; 000a0c38 hero::Hero_Warp; 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000f1e50 mobyfunc::SetLevelFlag; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fddc0 mobyutil::MB_SetAnimation; 000fe4f0 mobyutil::MB_randRangeSigned; 000ffb70 mobyutil::GetGroundZ; 00104e44 mobyutil::PointInsideComplexPoly; 00106360 mobyutil::MB_SetZBoundsFromGround; 00109af0 mobyutil::Delt; 00109c30 mobyutil::OrganicDelt; 0010a2e0 mobyutil::OrganicDeltAng; 0010e030 mobyutil::MB_genericExplosion; 00110b70 mobyutil::MB_IsPntInCuboid; 00113e88 mobyutil::MB_MayaFrameTrigger; 001167c8 mobyutil::MB_UpdateManipulatorRot; 00119a18 mobyfunc::DoManipulator; 0011a1a0 mobyutil::MB_SpawnSparksPair; 0013abcc pause::BeginMenu; 00151e70 respawn::SetSpawnPoint; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 00167e60 update::mode_sceneInit; 00169268 update::PlayStoryMovie; 001698a0 update::mode_creditsInit; 00257bf0 FUN_00257bf0; 00267060 FUN_00267060; 002736d0 mobyupdate_helpers::M1422_002736d0; 002737b8 mobyupdate_helpers::M1422_002737b8; 00273c08 mobyupdate_helpers::M1422_00273c08; 00273da0 mobyupdate_helpers::M1422_00273da0; 002744f8 mobyupdate_helpers::M1422_002744f8
// strings: 00276658: '?333A ' (raw)

/* Moby 1422 */

void mobyupdate_unsorted::UpdateMoby_1422(MobyInstance *moby)

{
  byte bVar1;
  MobyModeBit MVar2;
  void *pvVar3;
  u16 *puVar4;
  Spline *pSVar5;
  MobyModeBit *pMVar6;
  float fVar7;
  bool bVar8;
  longlong lVar9;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined8 uVar10;
  uint uVar15;
  uint in_r4;
  MobyInstance *pMVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  byte bVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  undefined1 auStack_350 [8];
  float local_348;
  undefined1 auStack_340 [16];
  undefined1 auStack_330 [16];
  undefined1 auStack_320 [16];
  undefined1 auStack_310 [16];
  undefined1 auStack_300 [16];
  undefined1 auStack_2f0 [16];
  undefined1 auStack_2e0 [16];
  undefined1 auStack_2d0 [16];
  undefined1 auStack_2c0 [16];
  undefined1 auStack_2b0 [16];
  undefined1 auStack_2a0 [16];
  undefined1 auStack_290 [16];
  undefined1 local_280 [16];
  undefined1 local_270 [16];
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [16];
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [16];
  float local_210;
  float local_20c;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 local_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [32];
  
  lVar9 = (longlong)(int)moby;
  pvVar3 = moby->pVar;
  uVar19 = ZEXT48(pvVar3);
  mobyupdate_helpers::M1422_002765a4();
  mobyupdate_helpers::M1422_00275240(lVar9);
  iVar13 = *(int *)((int)pvVar3 + 0xb0);
  mobyupdate_helpers::M1422_002736d0(lVar9);
  pMVar16 = *(MobyInstance **)((int)pvVar3 + 0x3a4);
  if ((pMVar16 != (MobyInstance *)0x0) && (in_r4 = (uint)pMVar16->state, pMVar16->state < 0x80)) {
    in_r4 = 0;
    mobyfunc::DoManipulator((double)DAT_007aa014,pMVar16,0,(Manipulator *)((int)pvVar3 + 0x1c0));
  }
  if (moby->enabled != '\0') {
    in_r4 = 0x951500;
    dVar21 = (double)FUN_005e8548(lVar9 + 0x10);
    if (dVar21 < 32.0) {
      mobyutil::MB_SetZBoundsFromGround(lVar9);
      moby->shadow = '\x1a';
    }
  }
  iVar12 = boot::g_SpaceSceneFrame;
  bVar1 = moby->state;
  bVar20 = (bVar1 == 1) << 1;
  if (bVar1 < 0xc) {
    if (bVar1 < 5) {
      if (bVar1 < 2) {
        if (bVar1 == 0) {
          FUN_005e7e98(uVar19 + 0x3c0,lVar9 + 0x10);
          moby->state = '\x01';
          iVar12 = 0;
          moby->updateDistance = -1;
          moby->drawDistance = 0x200;
          iVar13 = *(int *)((int)pvVar3 + 0x26c);
          moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
          moby->collision = (ushort *)0x0;
          *(undefined1 *)((int)pvVar3 + 0x28) = 3;
          *(undefined4 *)((int)pvVar3 + 0x20) = 0x43fa0000;
          pSVar5 = Splines[iVar13];
          *(undefined2 *)((int)pvVar3 + 0x24) = 500;
          *(Spline **)((int)pvVar3 + 0x340) = pSVar5;
          *(undefined4 *)((int)pvVar3 + 0x30) = 0x40800000;
          *(undefined4 *)((int)pvVar3 + 0x374) = 0;
          pMVar16 = MobyInstance;
          *(undefined4 *)((int)pvVar3 + 0x398) = *(undefined4 *)((int)pvVar3 + 0x204);
          *(undefined4 *)((int)pvVar3 + 0x348) = 1;
          *(undefined4 *)((int)pvVar3 + 0x368) = 0xffffffff;
          *(undefined4 *)((int)pvVar3 + 0x38c) = 0x43af0000;
          *(MobyInstance **)((int)pvVar3 + 0x334) = pMVar16 + *(int *)((int)pvVar3 + 0x220);
          *(undefined4 *)((int)pvVar3 + 0x3d0) = 0x3f400000;
          uVar18 = uVar19;
          do {
            mobyupdate_helpers::M1422_00274eb8(lVar9,*(undefined4 *)((int)uVar18 + 0x204));
            iVar12 = iVar12 + 1;
            uVar18 = uVar18 + 4;
          } while (iVar12 < 3);
        }
        else {
          iVar13 = mobyutil::MB_IsPntInCuboid
                             (&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0x274));
          if ((iVar13 == 0) || (g_heroType != '\x02')) {
            iVar13 = mobyutil::PointInsideComplexPoly
                               (&g_heroPosition,
                                (Vec4 *)Splines[*(int *)((int)pvVar3 + 0x270)]->points,
                                Splines[*(int *)((int)pvVar3 + 0x270)]->cnt);
            if (iVar13 == 0) {
              dVar21 = (double)FUN_005e8548(&g_heroPosition,
                                            &Cuboids[*(int *)((int)pvVar3 + 0x250)].pos);
              dVar23 = 50.0;
              if (50.0 <= dVar21) {
                dVar21 = (double)FUN_005e8548(&g_heroPosition,
                                              &Cuboids[*(int *)((int)pvVar3 + 0x254)].pos);
                if (dVar23 <= dVar21) {
                  dVar21 = (double)FUN_005e8548(&g_heroPosition,
                                                &Cuboids[*(int *)((int)pvVar3 + 600)].pos);
                  if (dVar21 < dVar23) {
                    if (g_deplanetizerUp == 0) {
                      fVar26 = *(float *)((int)pvVar3 + 0x38c);
                      moby->modeBits =
                           moby->modeBits &
                           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|
                            DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW
                            |HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
                      puVar4 = moby->pClass->collision;
                      *(undefined4 *)((int)pvVar3 + 0x34c) = 2;
                      moby->collision = puVar4;
                      *(float *)((int)pvVar3 + 0x38c) = fVar26 * 0.5714286;
                      moby->state = '\f';
                      pSVar5 = Splines[*(int *)((int)pvVar3 + 0x268)];
                      *(Spline **)((int)pvVar3 + 0x340) = pSVar5;
                      FUN_005e7e98(uVar19 + 0x3c0,pSVar5->points + pSVar5->cnt + -1);
                      *(undefined4 *)((int)pvVar3 + 0x344) = *(undefined4 *)((int)pvVar3 + 600);
                      uVar14 = idol::GetAnimDuration(0x168);
                      *(undefined4 *)((int)pvVar3 + 0x358) = uVar14;
                    }
                    else {
                      FUN_003d2234(*(undefined4 *)((int)pvVar3 + 0x200));
                      iVar13 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar3 + 0x3b0));
                      if (iVar13 != 0) {
                        iVar13 = *(int *)((int)pvVar3 + 0x3b0);
                        if (((iVar13 != -1) && (sound::g_SoundChannels[iVar13].pMoby == moby)) &&
                           (sound::g_SoundChannels[iVar13].state != '\0')) {
                          sound::sound_Kill(iVar13);
                        }
                        *(undefined4 *)((int)pvVar3 + 0x3b0) = 0xffffffff;
                      }
                      MVar2 = moby->modeBits;
                      moby->collision = (ushort *)0x0;
                      moby->state = '\x1b';
                      *(undefined4 *)((int)pvVar3 + 0x34c) = 7;
                      moby->modeBits = MVar2 | (UNK_40|DISABLED);
                    }
                  }
                }
                else {
                  fVar26 = *(float *)((int)pvVar3 + 0x38c);
                  moby->modeBits =
                       moby->modeBits &
                       (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                        DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|
                        HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
                  puVar4 = moby->pClass->collision;
                  *(undefined4 *)((int)pvVar3 + 0x34c) = 1;
                  moby->collision = puVar4;
                  *(float *)((int)pvVar3 + 0x38c) = fVar26 * 0.71428573;
                  moby->state = '\f';
                  pSVar5 = Splines[*(int *)((int)pvVar3 + 0x264)];
                  *(Spline **)((int)pvVar3 + 0x340) = pSVar5;
                  FUN_005e7e98(uVar19 + 0x3c0,pSVar5->points + pSVar5->cnt + -1);
                  *(undefined4 *)((int)pvVar3 + 0x344) = *(undefined4 *)((int)pvVar3 + 0x254);
                }
              }
              else {
                moby->modeBits =
                     moby->modeBits &
                     (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                      DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|
                      HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
                puVar4 = moby->pClass->collision;
                moby->state = '\f';
                iVar13 = *(int *)((int)pvVar3 + 0x260);
                moby->collision = puVar4;
                pSVar5 = Splines[iVar13];
                *(Spline **)((int)pvVar3 + 0x340) = pSVar5;
                FUN_005e7e98(uVar19 + 0x3c0,pSVar5->points + pSVar5->cnt + -1);
                *(undefined4 *)((int)pvVar3 + 0x344) = *(undefined4 *)((int)pvVar3 + 0x250);
                *(float *)((int)pvVar3 + 0x38c) = *(float *)((int)pvVar3 + 0x38c) * 0.85714287;
              }
            }
            else {
              moby->modeBits =
                   moby->modeBits &
                   (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                    DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|
                    HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
              puVar4 = moby->pClass->collision;
              moby->state = '\n';
              iVar13 = *(int *)((int)pvVar3 + 0x260);
              moby->collision = puVar4;
              pSVar5 = Splines[iVar13];
              *(Spline **)((int)pvVar3 + 0x340) = pSVar5;
              FUN_005e7e98(uVar19 + 0x3c0,ZEXT48(pSVar5) + 0x10);
              dVar21 = (double)FUN_005e8338((double)(g_heroPosition.x -
                                                    *(float *)((int)pvVar3 + 0x3c0)),
                                            (double)(g_heroPosition.y -
                                                    *(float *)((int)pvVar3 + 0x3c4)));
              (moby->rotation).z = (float)dVar21;
              mobyupdate_helpers::M1422_00274f38(lVar9,*(undefined4 *)((int)pvVar3 + 0x204));
              *(float *)((int)pvVar3 + 0x38c) = *(float *)((int)pvVar3 + 0x38c) * 0.85714287;
            }
          }
          else {
            moby->state = '\a';
            moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
            update::mode_sceneInit(0);
            *(undefined4 *)((int)pvVar3 + 0x39c) = 2;
            uVar14 = idol::GetAnimDuration(600);
            *(undefined4 *)((int)pvVar3 + 0x358) = uVar14;
            *(undefined4 *)((int)pvVar3 + 0x344) = *(undefined4 *)((int)pvVar3 + 0x25c);
            if (moby->animationId != '\n') {
              uVar10 = idol::GetAnimDuration(10);
              mobyutil::MB_SetAnimation(lVar9,10,0,uVar10);
            }
          }
        }
      }
      else if (bVar1 < 3) {
        dVar21 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                      (double)(g_heroPosition.y - (moby->pos).y));
        fVar26 = mobyutil::OrganicDeltAng
                           ((float)dVar21,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                            mobyutil::g_FrameTime * 6.2831855,&(moby->rotation).z,0x720000,
                            (float *)((int)pvVar3 + 0x370));
        mobyupdate_helpers::M1422_00273da0((double)fVar26,lVar9);
        pMVar16 = g_heroMobyPtr;
        uVar15 = (int)*(uint *)((int)pvVar3 + 0x38c) >> 0x1f;
        if ((int)((uVar15 >> 1 ^ *(uint *)((int)pvVar3 + 0x38c)) - uVar15) < 0x43968001) {
          if (g_heroType != '\0') {
            pMVar6 = &g_heroMobyPtr->modeBits;
            g_heroMobyPtr->collision = (ushort *)0x0;
            pMVar16->modeBits = *pMVar6 | (UNK_40|DISABLED);
          }
          hero::Hero_RevertToRatchet();
          hero::Hero_Warp(&Cuboids[*(int *)((int)pvVar3 + 0x2a0)].pos.x,
                          &Cuboids[*(int *)((int)pvVar3 + 0x2a0)].rot.x,0,1);
          mobyfunc::SetLevelFlag(*(undefined4 *)((int)pvVar3 + 0x2b0));
          respawn::SetSpawnPoint((Vec4 *)&g_heroPosition,(Vec4 *)&g_heroRotation);
          mobyupdate_helpers::M1422_00274f38(lVar9,*(undefined4 *)((int)pvVar3 + 0x204));
          update::mode_sceneInit(1);
          moby->state = '\a';
          moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
          if (moby->animationId != '\n') {
            uVar10 = idol::GetAnimDuration(0x14);
            mobyutil::MB_SetAnimation(lVar9,10,0,uVar10);
          }
          *(undefined4 *)((int)pvVar3 + 0x374) = 0;
          *(undefined4 *)((int)pvVar3 + 0x39c) = 10;
          *(undefined4 *)((int)pvVar3 + 0x348) = 0;
          pSVar5 = Splines[*(int *)((int)pvVar3 + 0x260)];
          *(Spline **)((int)pvVar3 + 0x340) = pSVar5;
          FUN_005e7e98(uVar19 + 0x3c0,ZEXT48(pSVar5) + 0x10);
          dVar21 = (double)FUN_005e8338((double)(g_heroPosition.x - *(float *)((int)pvVar3 + 0x3c0))
                                        ,(double)(g_heroPosition.y - *(float *)((int)pvVar3 + 0x3c4)
                                                 ));
          (moby->rotation).z = (float)dVar21;
          *(undefined4 *)((int)pvVar3 + 0x368) = 0xffffffff;
        }
        else {
          if ((moby->animationId == '\n') &&
             (((iVar13 = mobyutil::MB_MayaFrameTrigger(1.0,moby), iVar13 != 0 ||
               (iVar13 = mobyutil::MB_MayaFrameTrigger(16.0,moby), iVar13 != 0)) &&
              (FUN_005e7e98(auStack_350,&DAT_00969da0),
              ABS(local_348 - *(float *)((int)pvVar3 + 0x3c8)) < 5.0)))) {
            auVar24 = ZEXT416(0xfffffff8);
            auVar25 = loadVectorLeftIndexed(0x50,lVar9);
            auVar24 = vectorShiftRightWord
                                (auVar25,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 |
                                         auVar24 << 0x60);
            auVar25 = vectorConvertFromUnsignedFixedPointWord(auVar24,0);
            auVar24 = loadVectorLeftIndexed(0x24,0x276610);
            auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
            vectorCompareGreaterThanOrEqualToFloatingPoint
                      (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                       auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60);
            if ((bool)(bVar20 >> 1 & 1)) {
              mobyfunc::GetBonePosition(lVar9,2,auStack_340);
            }
            else {
              mobyfunc::GetBonePosition(lVar9,3,auStack_340);
            }
            FUN_005e7f98((double)(mobyutil::g_FrameTime * 20.0),auStack_330,lVar9 + 0xc0);
            dVar21 = 0.0872664600610733;
            uVar10 = mobyutil::MB_randRangeSigned(0x3fb6571840000000,0x3fe0c15240000000);
            dVar21 = (double)mobyutil::MB_randRangeFloat((float)dVar21,0.17453292);
            dVar21 = -dVar21;
            dVar23 = (double)FUN_005e8588(lVar9 + 0x10,&g_heroPosition);
            fVar7 = 120.0;
            fVar26 = (float)(dVar23 * 3.0);
            if ((fVar26 <= 120.0) && (fVar7 = fVar26, fVar26 < 60.0)) {
              fVar7 = 60.0;
            }
            fastfunc::FastDoubleToInt((double)(animationSpeed * fVar7));
            FUN_003bb4a8(uVar10,dVar21,auStack_340,auStack_330,auStack_350);
          }
          if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\n')) {
            uVar10 = idol::GetAnimDuration(0x14);
            mobyutil::MB_SetAnimation(lVar9,10,0,uVar10);
          }
        }
      }
      else if (bVar1 < 4) {
        iVar13 = FUN_00400854(*(undefined4 *)((int)pvVar3 + 0x334));
        if (iVar13 == 2) {
          FUN_005e7e98(uVar19 + 0x3c0,uVar19 + 0x300);
          FUN_005e7e98(lVar9 + 0x40,uVar19 + 0x310);
          moby->state = '\t';
          if (moby->animationId != '\a') {
            uVar10 = idol::GetAnimDuration(0x14);
            mobyutil::MB_SetAnimation(lVar9,7,0,uVar10);
          }
          mobyupdate_helpers::M1422_00274f38(lVar9,*(undefined4 *)((int)pvVar3 + 0x398));
          mobyupdate_helpers::M1422_00274eb8
                    (lVar9,*(undefined4 *)((int)pvVar3 + *(int *)((int)pvVar3 + 0x34c) * 4 + 0x200))
          ;
          mobyfunc::GetBonePosition(lVar9,1,auStack_230);
          uVar14 = FUN_004caa88(lVar9,auStack_230,300);
          *(undefined4 *)((int)pvVar3 + 0x33c) = uVar14;
        }
      }
      else if ((g_framesNotGrounded == 0) &&
              ((g_standingOnMoby == 0 || (*(short *)(g_standingOnMoby + 0xa6) != 0x24b)))) {
        DAT_00facc64 = 1;
        moby->state = '\a';
        *(undefined4 *)((int)pvVar3 + 0x39c) = 5;
        uVar14 = FUN_003d2178(&g_heroPosition,*(undefined4 *)((int)pvVar3 + 0x200));
        MVar2 = moby->modeBits;
        *(undefined4 *)((int)pvVar3 + 0x330) = uVar14;
        moby->modeBits = MVar2 | (UNK_40|DISABLED);
        update::mode_sceneInit(2);
        iVar13 = 0;
        uVar18 = uVar19;
        do {
          mobyupdate_helpers::M1422_00274eb8(lVar9,*(undefined4 *)((int)uVar18 + 0x204));
          iVar13 = iVar13 + 1;
          uVar18 = uVar18 + 4;
        } while (iVar13 < 3);
      }
    }
    else if (bVar1 == 0xb) {
      if (*(int *)((int)pvVar3 + 0x348) == **(int **)((int)pvVar3 + 0x340)) {
        dVar21 = (double)FUN_005e8588(lVar9 + 0x10,&g_heroPosition);
        if (((dVar21 < 50.0) && (g_framesNotGrounded == 0)) &&
           ((g_standingOnMoby == 0 || (*(short *)(g_standingOnMoby + 0xa6) != 0x24b)))) {
          *(undefined4 *)((int)pvVar3 + 0x374) = 0;
          FUN_005e7e98(uVar19 + 0x3c0,
                       *(int **)((int)pvVar3 + 0x340) + **(int **)((int)pvVar3 + 0x340) * 4);
          *(undefined4 *)((int)pvVar3 + 0x344) =
               *(undefined4 *)((int)pvVar3 + *(int *)((int)pvVar3 + 0x34c) * 4 + 0x250);
          if (*(int *)((int)pvVar3 + 0x34c) == 2) {
            if (DAT_00facc64 == 0) {
              moby->state = '\x04';
            }
            else {
              moby->state = '\x15';
              uVar14 = FUN_003d1d10(uVar19 + 0x3c0,&g_heroPosition,
                                    *(undefined4 *)((int)pvVar3 + 0x200));
              *(undefined4 *)((int)pvVar3 + 0x330) = uVar14;
            }
          }
          else {
            moby->state = '\f';
          }
        }
      }
      else {
        fVar26 = mobyutil::Delt(mobyutil::g_FrameTime * 10.0,DAT_0071f418 * 20.0,
                                (float *)((int)pvVar3 + 0x374));
        lVar17 = uVar19 + 0x3c0;
        FUN_005e81f0((double)fVar26,auStack_290,
                     *(int *)((int)pvVar3 + 0x340) + *(int *)((int)pvVar3 + 0x348) * 0x10 + 0x10,
                     lVar17);
        dVar21 = (double)FUN_005e8030(auStack_290);
        if ((double)*(float *)((int)pvVar3 + 0x374) < dVar21) {
          FUN_005e7f98(auStack_290,auStack_290);
        }
        else {
          *(int *)((int)pvVar3 + 0x348) = *(int *)((int)pvVar3 + 0x348) + 1;
        }
        FUN_005e7f54(lVar17,lVar17,auStack_290);
      }
    }
    else if (bVar1 == 10) {
      dVar21 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                    (double)(g_heroPosition.y - (moby->pos).y));
      mobyutil::OrganicDeltAng
                ((float)dVar21,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                 mobyutil::g_FrameTime * 6.2831855,&(moby->rotation).z,in_r4,
                 (float *)((int)pvVar3 + 0x370));
      fVar26 = mobyutil::Delt(mobyutil::g_FrameTime * 12.0,DAT_0071f418 * 20.0,
                              (float *)((int)pvVar3 + 0x374));
      if (*(int *)((int)pvVar3 + 0x374) != 0) {
        lVar17 = uVar19 + 0x3c0;
        FUN_005e81f0((double)fVar26,auStack_2d0,
                     *(int *)((int)pvVar3 + 0x340) + *(int *)((int)pvVar3 + 0x348) * 0x10 + 0x10,
                     lVar17);
        dVar21 = (double)FUN_005e8030(auStack_2d0);
        if ((double)*(float *)((int)pvVar3 + 0x374) < dVar21) {
          FUN_005e7f98(auStack_2d0,auStack_2d0);
        }
        else {
          *(int *)((int)pvVar3 + 0x348) = *(int *)((int)pvVar3 + 0x348) + 1;
        }
        FUN_005e7f54(lVar17,lVar17,auStack_2d0);
      }
      lVar17 = mobyupdate_helpers::M1422_00274fd0(lVar9);
      if (((int)lVar17 != 0) &&
         ((iVar13 = mobyutil::MB_MayaFrameTrigger(1.0,moby), iVar13 != 0 ||
          (iVar13 = mobyutil::MB_MayaFrameTrigger(16.0,moby), iVar13 != 0)))) {
        FUN_005e7e98(auStack_2a0,lVar17 + 0x10);
        FUN_005e7e98(auStack_2c0,uVar19 + 0x3c0);
        FUN_005e7f54(auStack_2c0,auStack_2c0,lVar9 + 0xc0);
        FUN_005e7f98((double)(mobyutil::g_FrameTime * 10.0),auStack_2b0,lVar9 + 0xc0);
        dVar21 = 0.5235987901687622;
        uVar10 = mobyutil::MB_randRangeSigned(0x3fe0c15240000000,0x3fe921fb60000000);
        dVar21 = (double)mobyutil::MB_randRangeFloat(0.34906584,(float)dVar21);
        dVar21 = -dVar21;
        idol::GetAnimDuration(0x3c);
        FUN_003bb4a8(uVar10,dVar21,auStack_2c0,auStack_2b0,auStack_2a0);
      }
      if (*(int *)((int)pvVar3 + 0x348) == **(int **)((int)pvVar3 + 0x340) + -2) {
        if (moby->animationId != '\0') {
          uVar10 = idol::GetAnimDuration(0x14);
          mobyutil::MB_SetAnimation(lVar9,0,0,uVar10);
        }
        moby->state = '\v';
      }
    }
    else if (bVar1 == 9) {
      dVar21 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                    (double)(g_heroPosition.y - (moby->pos).y));
      fVar26 = mobyutil::OrganicDeltAng
                         ((float)dVar21,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                          mobyutil::g_FrameTime * 6.2831855,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar3 + 0x370));
      FUN_005e7e98((double)fVar26,auStack_320,(ulonglong)*(uint *)((int)pvVar3 + 0x340) + 0x10);
      iVar13 = mobyupdate_helpers::M1422_00273c08(0x4034000000000000,lVar9,auStack_320);
      dVar21 = (double)FUN_00400848(*(undefined4 *)((int)pvVar3 + 0x334));
      if (moby->animationId == '\a') {
        if ((moby->field43_0x70 & 2U) != 0) {
          uVar10 = idol::GetAnimDuration(10);
          mobyutil::MB_SetAnimation(lVar9,8,0,uVar10);
        }
      }
      else {
        lVar17 = uVar19 + 0x3c0;
        FUN_005e81f0(auStack_310,(ulonglong)*(uint *)((int)pvVar3 + 0x340) + 0x10,lVar17);
        FUN_005e7f98((double)(mobyutil::g_FrameTime * 5.0),auStack_310,auStack_310);
        FUN_005e7f54(lVar17,lVar17,auStack_310);
      }
      uVar10 = 0x3fe0000000000000;
      if ((dVar21 <= 0.5) || (0.699999988079071 <= dVar21)) {
        if (0.7289999723434448 <= dVar21) {
          if (moby->animationId != '\0') {
            uVar10 = idol::GetAnimDuration(0x14);
            mobyutil::MB_SetAnimation(lVar9,0,0,uVar10);
          }
          if (iVar13 != 0) {
            moby->state = '\n';
          }
          iVar13 = 0;
          uVar18 = uVar19;
          do {
            if (*(int *)((int)pvVar3 + 0x34c) == 1) {
              iVar12 = *(int *)((int)uVar18 + 0x230);
            }
            else {
              iVar12 = *(int *)((int)uVar18 + 0x240);
            }
            FUN_00267060(MobyInstance + iVar12);
            iVar13 = iVar13 + 1;
            uVar18 = uVar18 + 4;
          } while (iVar13 < 4);
        }
      }
      else {
        if (moby->animationId != '\t') {
          mobyutil::MB_SetAnimation(lVar9,9,0,0);
        }
        if (*(int *)((int)pvVar3 + 0x33c) != 0) {
          mobyfunc::GetBonePosition(lVar9,1,auStack_300);
          FUN_005e7e98(auStack_2f0,&Cuboids[*(int *)((int)pvVar3 + 0x344)].pos);
          mobyutil::GetGroundZ(uVar10,auStack_2f0,0);
          FUN_004cab28(0x3ff0000000000000,*(undefined4 *)((int)pvVar3 + 0x33c),auStack_300,
                       &Cuboids[*(int *)((int)pvVar3 + 0x344)].pos);
          *(undefined4 *)((int)pvVar3 + 0x33c) = 0;
        }
      }
      if (*(int *)((int)pvVar3 + 0x33c) != 0) {
        mobyfunc::GetBonePosition(lVar9,1,auStack_2e0);
        dVar23 = (double)(float)(dVar21 * 2.0);
        if (1.0 - (double)(float)(dVar21 * 2.0) < 0.0) {
          dVar23 = 1.0;
        }
        FUN_004cab28(dVar23,*(undefined4 *)((int)pvVar3 + 0x33c),auStack_2e0,&DAT_00a15d30);
      }
    }
    else if (bVar1 == 8) {
      uVar14 = *(undefined4 *)((int)pvVar3 + 0x334);
      moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
      dVar21 = (double)FUN_00400848(uVar14);
      if (1.0 <= dVar21) {
        moby->state = '\f';
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
        if (moby->animationId != '\0') {
          uVar10 = idol::GetAnimDuration(10);
          mobyutil::MB_SetAnimation(lVar9,0,0,uVar10);
        }
      }
    }
    else if (bVar1 == 7) {
      if (g_gameMode == GAME_MODE_SCENE) {
        if (update::g_SceneId == 2) {
          iVar11 = idol::GetAnimDuration(0xa28);
          iVar13 = boot::g_SpaceSceneFrame;
          if ((iVar11 <= iVar12) && (iVar12 = idol::GetAnimDuration(0xb36), iVar13 <= iVar12)) {
            FUN_003d22a0(*(undefined4 *)((int)pvVar3 + 0x330));
          }
        }
        else if (update::g_SceneId == 3) {
          iVar11 = idol::GetAnimDuration(0x3b6);
          iVar13 = boot::g_SpaceSceneFrame;
          if ((iVar11 < iVar12) && (iVar12 = idol::GetAnimDuration(0x3c0), iVar13 < iVar12)) {
            FUN_003d2234(*(undefined4 *)((int)pvVar3 + 0x200));
          }
          if (g_deplanetizerUp == 0) {
            respawn::SetSpawnPoint
                      ((Vec4 *)&Cuboids[*(int *)((int)pvVar3 + 0x294)].pos,
                       (Vec4 *)&Cuboids[*(int *)((int)pvVar3 + 0x294)].rot);
            g_deplanetizerUp = 1;
          }
        }
      }
      else {
        uVar15 = *(uint *)((int)pvVar3 + 0x39c);
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
        moby->collision = moby->pClass->collision;
        moby->state = (u8)uVar15;
        if ((uVar15 & 0xff) == 5) {
          boot::SceneScreenFade = 1.0;
          uVar15 = (uint)moby->state;
        }
        if ((uVar15 & 0xff) == 0x19) {
          hero::HandleHeroDeath();
        }
      }
    }
    else if (bVar1 == 5) {
      g_playDrekButtonCutscene = 0;
      uVar15 = *(uint *)((int)pvVar3 + 0x21c);
      uVar18 = ZEXT48(MobyInstance);
      uVar10 = 0;
      mathfunc::cosf(0.0);
      FUN_005e8128(uVar10);
      uVar10 = 0x3fe921fb60000000;
      mathfunc::cosf(0.7853982);
      FUN_005e8128(uVar10);
      lVar17 = (uVar18 + ((ulonglong)uVar15 & 0xffffff) * 0x100 & 0xffffffff) + 0x10;
      FUN_005e7f54(local_280,local_280,lVar17);
      FUN_005e7f54(local_270,local_270,lVar17);
      FUN_005e7e70(auStack_260);
      FUN_005e7e70(auStack_250);
      FUN_005e7e98(auStack_240,&Cuboids[*(int *)((int)pvVar3 + 0x298)].pos);
      FUN_00400670(*(undefined4 *)((int)pvVar3 + 0x334),local_280,local_270,auStack_260,auStack_250,
                   auStack_240,DAT_007aa008,DAT_007aa00c);
      pMVar16 = MobyInstance;
      DAT_0096bda4 = 3;
      moby->state = '\b';
      iVar13 = *(int *)((int)pvVar3 + 0x21c);
      uVar10 = idol::GetAnimDuration(0x708);
      FUN_003d4228(pMVar16 + iVar13,uVar10);
    }
  }
  else if (bVar1 < 0x13) {
    if (bVar1 == 0x12) {
      dVar21 = (double)FUN_005e8338((double)(*(float *)((int)pvVar3 + 0x70) - (moby->pos).x),
                                    (double)(*(float *)((int)pvVar3 + 0x74) - (moby->pos).y));
      mobyutil::OrganicDeltAng
                ((float)dVar21,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                 mobyutil::g_FrameTime * 6.2831855,&(moby->rotation).z,in_r4,
                 (float *)((int)pvVar3 + 0x370));
      iVar12 = mobyupdate_helpers::M1422_00273c08
                         ((double)(mobyutil::g_FrameTime * 12.0),lVar9,
                          &Cuboids[*(int *)((int)pvVar3 + 0x3a8)].pos);
      if (iVar12 != 0) {
        moby->state = '\x0e';
        if (moby->animationId != '\a') {
          uVar10 = idol::GetAnimDuration(0x14);
          mobyutil::MB_SetAnimation(lVar9,7,0,uVar10);
        }
        FUN_005e7e98(uVar19 + 800,iVar13 + 0x10);
      }
    }
    else if (bVar1 == 0x11) {
      dVar21 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                    (double)(g_heroPosition.y - (moby->pos).y));
      fVar26 = mobyutil::OrganicDeltAng
                         ((float)dVar21,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                          mobyutil::g_FrameTime * 6.2831855,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar3 + 0x370));
      mobyupdate_helpers::M1422_00273da0((double)fVar26,lVar9);
      if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\f')) {
        uVar10 = idol::GetAnimDuration(0x14);
        mobyutil::MB_SetAnimation(lVar9,0xc,0,uVar10);
      }
      if (((moby->animationId == '\f') &&
          (iVar13 = fastfunc::FastDecTimerS32(uVar19 + 0x354), iVar13 != 0)) ||
         (iVar13 = *(int *)((int)pvVar3 + 0x354), iVar12 = idol::GetAnimDuration(0x1e),
         iVar13 == iVar12)) {
        fVar26 = -4.3;
        if (*(int *)((int)pvVar3 + 0x354) != 0) {
          fVar26 = 4.3;
        }
        FUN_005e7f98((double)fVar26,auStack_100,lVar9 + 0xd0);
        FUN_005e7f54(auStack_100,auStack_100,uVar19 + 0x3c0);
        dVar21 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,auStack_100,0);
        if (ABS((float)(dVar21 - (double)*(float *)((int)pvVar3 + 0x3c8))) < 1.0) {
          dVar21 = (double)FUN_005e8588(auStack_100,auStack_f0);
          iVar13 = idol::GetAnimDuration(0x3c);
          iVar13 = FUN_002d6f28((double)(float)(dVar21 / (double)(longlong)iVar13),
                                *(undefined4 *)((int)pvVar3 + 0x210),auStack_100,auStack_100);
          if ((iVar13 != 0) && (*(int *)((int)pvVar3 + 0x354) == 0)) {
            uVar14 = idol::GetAnimDuration(0x3c);
            *(undefined4 *)((int)pvVar3 + 0x354) = uVar14;
          }
        }
      }
      iVar13 = FUN_002d70fc(*(undefined4 *)((int)pvVar3 + 0x210));
      if ((iVar13 < 0xb) ||
         (iVar12 = *(int *)((int)pvVar3 + 0x354), iVar11 = idol::GetAnimDuration(0x3c),
         iVar11 <= iVar12)) {
        if ((iVar13 < 3) &&
           (iVar13 = *(int *)((int)pvVar3 + 0x354), iVar12 = idol::GetAnimDuration(0x3c),
           iVar12 < iVar13)) {
          *(undefined4 *)((int)pvVar3 + 0x358) = 0;
        }
      }
      else {
        uVar14 = idol::GetAnimDuration(1000);
        *(undefined4 *)((int)pvVar3 + 0x354) = uVar14;
      }
      iVar13 = fastfunc::FastDecTimerS32(uVar19 + 0x358);
      if (iVar13 != 0) {
        *(undefined4 *)((int)pvVar3 + 0x350) = 0x11;
        moby->state = '\f';
        if (moby->animationId != '\r') {
          uVar10 = idol::GetAnimDuration(0x14);
          mobyutil::MB_SetAnimation(lVar9,0xd,0,uVar10);
        }
      }
    }
    else if (bVar1 == 0x10) {
      dVar21 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                    (double)(g_heroPosition.y - (moby->pos).y));
      fVar26 = mobyutil::OrganicDeltAng
                         ((float)dVar21,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                          mobyutil::g_FrameTime * 6.2831855,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar3 + 0x370));
      mobyupdate_helpers::M1422_00273da0((double)fVar26,lVar9);
      iVar13 = fastfunc::FastDecTimerS32(uVar19 + 0x354);
      if (iVar13 != 0) {
        FUN_005e7e98(auStack_130,&Cuboids[*(int *)((int)pvVar3 + 0x344)].pos);
        dVar23 = 3.0;
        FUN_005e7f98(0x4008000000000000,auStack_120,lVar9 + 0xc0);
        FUN_005e7f54(auStack_120,auStack_120,lVar9 + 0x10);
        dVar21 = (double)mobyutil::MB_randRot();
        mobyutil::MB_randRangeFloat((float)dVar23,29.0);
        mathfunc::cosf((float)dVar21);
        FUN_005e8128(dVar21);
        FUN_005e7f54(local_110,local_110,auStack_130);
        dVar23 = 5.0;
        dVar21 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,local_110,0);
        if (ABS((double)(float)(dVar21 - (double)*(float *)((int)pvVar3 + 0x3c8))) < dVar23) {
          dVar21 = (double)FUN_005e8588(local_110,auStack_120);
          iVar13 = idol::GetAnimDuration(0x3c);
          uVar14 = *(undefined4 *)((int)pvVar3 + 0x29c);
          dVar23 = (double)(float)(dVar21 / (double)(longlong)iVar13);
          dVar21 = (double)mobyutil::MB_randRangeFloat(18.0,20.0);
          fastfunc::FastDoubleToInt((double)(animationSpeed * (float)(dVar21 * 60.0)));
          FUN_003bcd40(dVar23,lVar9,uVar14,auStack_120,local_110);
        }
        uVar14 = idol::GetAnimDuration(0xf);
        *(undefined4 *)((int)pvVar3 + 0x354) = uVar14;
      }
      iVar13 = fastfunc::FastDecTimerS32(uVar19 + 0x358);
      if (iVar13 != 0) {
        *(undefined4 *)((int)pvVar3 + 0x350) = 0x10;
        moby->state = '\f';
      }
    }
    else if (bVar1 == 0xf) {
      dVar21 = (double)FUN_005e8338((double)(*(float *)(iVar13 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar13 + 0x14) - (moby->pos).y));
      fVar26 = mobyutil::OrganicDeltAng
                         ((float)dVar21,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                          mobyutil::g_FrameTime * 6.2831855,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar3 + 0x370));
      mobyupdate_helpers::M1422_00273da0((double)fVar26,lVar9);
      dVar21 = 1.0;
      iVar13 = mobyutil::MB_MayaFrameTrigger(1.0,moby);
      if ((iVar13 != 0) || (iVar13 = mobyutil::MB_MayaFrameTrigger(16.0,moby), iVar13 != 0)) {
        iVar13 = mobyutil::MB_randInt(5);
        if ((iVar13 == 0) && (*(int *)((int)pvVar3 + 0xb4) != 2)) {
          FUN_005e7e98(local_1b0,uVar19 + 0x70);
        }
        else {
          if (*(int *)((int)pvVar3 + 0xb4) == 2) {
            FUN_005e7e98(auStack_1a0,&g_heroPosition);
          }
          else {
            FUN_005e7e98(auStack_1a0,uVar19 + 0x70);
          }
          dVar23 = (double)mobyutil::MB_randRot();
          mobyutil::MB_randRangeFloat((float)dVar21,10.0);
          mathfunc::cosf((float)dVar23);
          FUN_005e8128(dVar23);
          FUN_005e7f54(local_1b0,local_1b0,auStack_1a0);
        }
        if (hero::g_heroStateType == 0xf) {
          FUN_005e7e98(auStack_190,&Cuboids[*(int *)((int)pvVar3 + 0x344)].pos);
          FUN_005e81f0(local_1b0,local_1b0,auStack_190);
          dVar23 = (double)FUN_005e7ebc(local_1b0);
          if (29.0 < dVar23) {
            FUN_005e84c0(local_1b0,local_1b0);
          }
          FUN_005e7f54(local_1b0,local_1b0,auStack_190);
        }
        dVar23 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,local_1b0,0);
        if (ABS((float)(dVar23 - (double)*(float *)((int)pvVar3 + 0x3c8))) < 5.0) {
          iVar13 = mobyutil::MB_MayaFrameTrigger((float)dVar21,moby);
          if (iVar13 == 0) {
            mobyfunc::GetBonePosition(lVar9,3,auStack_180);
          }
          else {
            mobyfunc::GetBonePosition(lVar9,2,auStack_180);
          }
          FUN_005e7f98((double)(mobyutil::g_FrameTime * 20.0),auStack_170,lVar9 + 0xc0);
          dVar21 = 0.0872664600610733;
          uVar10 = mobyutil::MB_randRangeSigned(0x3fb6571840000000,0x3fe0c15240000000);
          dVar21 = (double)mobyutil::MB_randRangeFloat((float)dVar21,0.17453292);
          dVar21 = -dVar21;
          dVar23 = (double)FUN_005e8588(lVar9 + 0x10,&g_heroPosition);
          fVar7 = 120.0;
          fVar26 = (float)(dVar23 * 3.0);
          if ((fVar26 <= 120.0) && (fVar7 = fVar26, fVar26 < 60.0)) {
            fVar7 = 60.0;
          }
          fastfunc::FastDoubleToInt((double)(animationSpeed * fVar7));
          FUN_003bb4a8(uVar10,dVar21,auStack_180,auStack_170,local_1b0);
          mobyupdate_helpers::M1422_002746a8(lVar9,auStack_180);
        }
      }
      iVar13 = fastfunc::FastDecTimerS32(uVar19 + 0x358);
      if (iVar13 == 0) {
        uVar15 = (int)*(uint *)((int)pvVar3 + 0x390) >> 0x1f;
        if ((int)((uVar15 >> 1 ^ *(uint *)((int)pvVar3 + 0x390)) - uVar15) < 0x41c80001)
        goto LAB_00279dec;
        auVar24 = loadVectorLeftIndexed(0x34c,uVar19);
        auVar25 = loadVectorRightIndexed(0x35c,uVar19);
        auVar25 = vectorConvertFromSignedFixedPointWord(auVar24 | auVar25,0);
        auVar24 = loadVectorLeftIndexed(0x70,0x276610);
        auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
        vectorCompareGreaterThanOrEqualToFloatingPoint
                  (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                   auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60);
        if (!(bool)(bVar20 >> 1 & 1)) goto LAB_00279dec;
      }
      *(undefined4 *)((int)pvVar3 + 0x350) = 0xf;
      moby->state = '\f';
    }
    else if (bVar1 == 0xe) {
      dVar21 = (double)FUN_005e8338((double)(*(float *)((int)pvVar3 + 800) - (moby->pos).x),
                                    (double)(*(float *)((int)pvVar3 + 0x324) - (moby->pos).y));
      fVar26 = mobyutil::OrganicDeltAng
                         ((float)dVar21,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                          mobyutil::g_FrameTime * 6.2831855,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar3 + 0x370));
      mobyfunc::GetBonePosition((double)fVar26,lVar9,0x13,&local_200);
      mobyupdate_helpers::M1422_00274ad0
                (lVar9,uVar19 + 0x140,CONCAT44(local_200,local_1fc),CONCAT44(local_1f8,local_1f4),
                 *(undefined8 *)((int)pvVar3 + 800),*(undefined8 *)((int)pvVar3 + 0x328));
      *(undefined4 *)((int)pvVar3 + 0x3d8) = 0xc0400000;
      if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\b')) {
        uVar10 = idol::GetAnimDuration(0x14);
        mobyutil::MB_SetAnimation(lVar9,8,0,uVar10);
      }
      if (*(int *)((int)pvVar3 + 0x354) != 0) {
        if (*(int *)((int)pvVar3 + 0x33c) == 0) {
          mobyfunc::GetBonePosition(lVar9,1,auStack_1f0);
          uVar10 = idol::GetAnimDuration(DAT_007aa010);
          uVar14 = FUN_004caa88(lVar9,auStack_1f0,uVar10);
          *(undefined4 *)((int)pvVar3 + 0x33c) = uVar14;
        }
        else {
          iVar12 = fastfunc::FastDecTimerS32(uVar19 + 0x354);
          if (iVar12 == 0) {
            dVar23 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)pvVar3 + 0x354));
            dVar21 = 1.0;
            dVar23 = (double)(1.0 - (float)(dVar23 / (double)(animationSpeed * 90.0)));
            if ((dVar23 <= 1.0) && (dVar21 = dVar23, dVar23 < 0.0)) {
              dVar21 = 0.0;
            }
            mobyfunc::GetBonePosition(lVar9,1,auStack_1c0);
            FUN_004cab28(dVar21,*(undefined4 *)((int)pvVar3 + 0x33c),auStack_1c0,uVar19 + 800);
            iVar12 = *(int *)((int)pvVar3 + 0x354);
            iVar11 = idol::GetAnimDuration(0xf);
            if (iVar11 < iVar12) {
              FUN_005e7e98(uVar19 + 800,iVar13 + 0x10);
            }
          }
          else {
            if (moby->animationId != '\t') {
              mobyutil::MB_SetAnimation(lVar9,9,0,0);
            }
            uVar14 = idol::GetAnimDuration(0x78);
            *(undefined4 *)((int)pvVar3 + 0x354) = uVar14;
            mobyfunc::GetBonePosition(lVar9,1,auStack_1e0);
            FUN_005e81f0(auStack_1d0,uVar19 + 800,auStack_1e0);
            FUN_005e84c0(0x4066800000000000,auStack_1d0,auStack_1d0);
            FUN_005e7f54(auStack_1d0,auStack_1d0,auStack_1e0);
            FUN_004cab28(0x3ff0000000000000,*(undefined4 *)((int)pvVar3 + 0x33c),auStack_1e0,
                         auStack_1d0);
            *(undefined4 *)((int)pvVar3 + 0x33c) = 0;
            if (*(int *)((int)pvVar3 + 0x358) == 0) {
              *(undefined4 *)((int)pvVar3 + 0x350) = 0xe;
              moby->state = '\f';
            }
          }
        }
      }
      fastfunc::FastDecTimerS32(uVar19 + 0x358);
    }
    else if (bVar1 == 0xd) {
      dVar21 = (double)FUN_005e8338((double)(*(float *)(iVar13 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar13 + 0x14) - (moby->pos).y));
      fVar26 = mobyutil::OrganicDeltAng
                         ((float)dVar21,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                          mobyutil::g_FrameTime * 6.2831855,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar3 + 0x370));
      mobyupdate_helpers::M1422_00273da0((double)fVar26,lVar9);
      if (*(int *)((int)pvVar3 + 0x354) <
          *(int *)((int)pvVar3 + 0x358) + *(int *)((int)pvVar3 + 0x35c)) {
        dVar21 = (double)FUN_005e8338(0x3ff0000000000000,(double)*(float *)((int)pvVar3 + 0x3bc));
        *(float *)((int)pvVar3 + 0x128) = (float)dVar21;
      }
      if (moby->animationId == '\x02') {
        if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\x04')) {
          uVar10 = idol::GetAnimDuration(0x14);
          mobyutil::MB_SetAnimation(lVar9,4,0,uVar10);
        }
      }
      else {
        iVar12 = fastfunc::FastDecTimerS32(uVar19 + 0x354);
        if (((iVar12 != 0) && (*(int *)((int)pvVar3 + 0x358) != 0)) && (moby->animationId != '\x04')
           ) {
          uVar10 = idol::GetAnimDuration(0x14);
          mobyutil::MB_SetAnimation(lVar9,4,0,uVar10);
        }
      }
      if (moby->animationId == '\x04') {
        iVar12 = mobyutil::MB_MayaFrameTrigger(1.0,moby);
        if (iVar12 == 0) {
          if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\x03')) {
            uVar10 = idol::GetAnimDuration(0x14);
            mobyutil::MB_SetAnimation(lVar9,3,0,uVar10);
          }
        }
        else {
          uVar14 = idol::GetAnimDuration(0x5a);
          *(undefined4 *)((int)pvVar3 + 0x354) = uVar14;
          uVar14 = idol::GetAnimDuration(300);
          *(undefined4 *)((int)pvVar3 + 0x360) = uVar14;
          mobyfunc::GetBonePosition(lVar9,0,auStack_160);
          FUN_005e7e98(auStack_150,lVar9 + 0xc0);
          FUN_005e7f98((double)*(float *)((int)pvVar3 + 0x3bc),auStack_140,lVar9 + 0xd0);
          FUN_005e7f54(auStack_150,auStack_150,auStack_140);
          dVar21 = (double)FUN_005e8588(auStack_160,iVar13 + 0x10);
          fVar7 = 30.0;
          fVar26 = (float)(dVar21 * 0.5);
          if ((fVar26 <= 30.0) && (fVar7 = fVar26, fVar26 < 0.0)) {
            fVar7 = 0.0;
          }
          FUN_005e7f98((double)(mobyutil::g_FrameTime * fVar7),auStack_150,auStack_150);
          FUN_003e7fc8(0x4050000000000000,(double)(mobyutil::g_FrameTime * 18.0),auStack_160,
                       auStack_150);
          mobyupdate_helpers::M1422_002746a8(lVar9,auStack_160);
          dVar21 = (double)mobyutil::MB_randRangeSigned(0x3fc10624e0000000,0x3fd54fdf40000000);
          *(float *)((int)pvVar3 + 0x3bc) = (float)dVar21;
        }
      }
      iVar13 = fastfunc::FastDecTimerS32(uVar19 + 0x358);
      if ((iVar13 != 0) && (iVar13 = fastfunc::FastDecTimerS32(uVar19 + 0x35c), iVar13 != 0)) {
        *(undefined4 *)((int)pvVar3 + 0x350) = 0xd;
        moby->state = '\f';
        if (moby->animationId != '\x05') {
          uVar10 = idol::GetAnimDuration(0x14);
          mobyutil::MB_SetAnimation(lVar9,5,0,uVar10);
        }
      }
    }
    else if (bVar1 == 0xc) {
      dVar21 = (double)FUN_005e8338((double)(*(float *)(iVar13 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar13 + 0x14) - (moby->pos).y));
      fVar26 = mobyutil::OrganicDeltAng
                         ((float)dVar21,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                          mobyutil::g_FrameTime * 6.2831855,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar3 + 0x370));
      mobyupdate_helpers::M1422_00273da0((double)fVar26,lVar9);
      if ((moby->field43_0x70 & 2U) != 0) {
        iVar13 = mobyupdate_helpers::M1422_00274cf0(lVar9);
        if (iVar13 == 0x13) {
          moby->state = '\x13';
          if (moby->animationId != '\x01') {
            uVar10 = idol::GetAnimDuration(0x14);
            mobyutil::MB_SetAnimation(lVar9,1,0,uVar10);
          }
          uVar14 = 0;
          dVar21 = (double)FUN_005e8588(lVar9 + 0x10,&g_heroPosition);
          if (dVar21 < 16.0) {
            uVar14 = idol::GetAnimDuration(0x5a);
          }
          *(undefined4 *)((int)pvVar3 + 0x354) = uVar14;
          uVar14 = idol::GetAnimDuration(600);
          *(undefined4 *)((int)pvVar3 + 0x358) = uVar14;
          uVar14 = idol::GetAnimDuration(600);
          *(undefined4 *)((int)pvVar3 + 0x35c) = uVar14;
          uVar14 = FUN_003ebfcc(0x4017333340000000,lVar9,uVar19 + 0x3c0);
          *(undefined4 *)((int)pvVar3 + 0x338) = uVar14;
        }
        else if (iVar13 == 0x11) {
          moby->state = '\x11';
          if (moby->animationId != '\v') {
            uVar10 = idol::GetAnimDuration(0x14);
            mobyutil::MB_SetAnimation(lVar9,0xb,0,uVar10);
          }
          uVar14 = idol::GetAnimDuration(10);
          *(undefined4 *)((int)pvVar3 + 0x354) = uVar14;
          uVar14 = idol::GetAnimDuration(600);
          *(undefined4 *)((int)pvVar3 + 0x358) = uVar14;
        }
        else if (iVar13 == 0xf) {
          moby->state = '\x0f';
          if (moby->animationId != '\n') {
            uVar10 = idol::GetAnimDuration(0x14);
            mobyutil::MB_SetAnimation(lVar9,10,0,uVar10);
          }
          *(undefined4 *)((int)pvVar3 + 0x354) = 0;
          uVar14 = idol::GetAnimDuration(600);
          *(undefined4 *)((int)pvVar3 + 0x358) = uVar14;
          uVar14 = idol::GetAnimDuration(0x168);
          *(undefined4 *)((int)pvVar3 + 0x35c) = uVar14;
        }
        else if (iVar13 == 0xe) {
          moby->state = '\x12';
          if (moby->animationId != '\0') {
            uVar10 = idol::GetAnimDuration(0x14);
            mobyutil::MB_SetAnimation(lVar9,0,0,uVar10);
          }
          iVar13 = 0;
          dVar21 = 0.0;
          uVar18 = uVar19;
          do {
            FUN_005e7e98(&local_210,&Cuboids[*(int *)((int)uVar18 + 0x280)].pos);
            dVar23 = (double)FUN_005e8338((double)(*(float *)((int)pvVar3 + 0x3c0) -
                                                  g_heroPosition.x),
                                          (double)(*(float *)((int)pvVar3 + 0x3c4) -
                                                  g_heroPosition.y));
            dVar22 = (double)FUN_005e8338((double)(*(float *)((int)pvVar3 + 0x3c0) - local_210),
                                          (double)(*(float *)((int)pvVar3 + 0x3c4) - local_20c));
            dVar23 = (double)fastfunc::FastSubRots((float)dVar23,(float)dVar22);
            if (dVar21 < dVar23) {
              *(undefined4 *)((int)pvVar3 + 0x3a8) = *(undefined4 *)((int)uVar18 + 0x280);
              dVar21 = dVar23;
            }
            iVar13 = iVar13 + 1;
            uVar18 = uVar18 + 4;
          } while (iVar13 < 3);
          uVar14 = idol::GetAnimDuration(900);
          *(undefined4 *)((int)pvVar3 + 0x358) = uVar14;
          uVar14 = idol::GetAnimDuration(0xb4);
          *(undefined4 *)((int)pvVar3 + 0x354) = uVar14;
        }
        else if (iVar13 == 0xd) {
          moby->state = '\r';
          if (moby->animationId != '\x02') {
            uVar10 = idol::GetAnimDuration(0x14);
            mobyutil::MB_SetAnimation(lVar9,2,0,uVar10);
          }
          *(undefined4 *)((int)pvVar3 + 0x354) = 0;
          iVar13 = mobyutil::MB_randInt(3);
          uVar14 = idol::GetAnimDuration(iVar13 * 0x5a + 0x14a);
          *(undefined4 *)((int)pvVar3 + 0x358) = uVar14;
          uVar14 = idol::GetAnimDuration((6 - *(int *)((int)pvVar3 + 0x34c)) * 0x1e);
          *(undefined4 *)((int)pvVar3 + 0x35c) = uVar14;
          dVar21 = (double)mobyutil::MB_randRangeFloat(-0.333,0.333);
          *(float *)((int)pvVar3 + 0x3bc) = (float)dVar21;
        }
        else {
          moby->state = '\x10';
          if (moby->animationId != '\x06') {
            uVar10 = idol::GetAnimDuration(0x14);
            mobyutil::MB_SetAnimation(lVar9,6,0,uVar10);
          }
          uVar14 = idol::GetAnimDuration(0xf);
          *(undefined4 *)((int)pvVar3 + 0x354) = uVar14;
          uVar14 = idol::GetAnimDuration(0x168);
          *(undefined4 *)((int)pvVar3 + 0x358) = uVar14;
        }
      }
    }
  }
  else if (bVar1 == 0x1b) {
    iVar13 = *(int *)((int)pvVar3 + 0x34c);
    moby->collision = (ushort *)0x0;
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
          LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
          NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
    if (iVar13 < 7) {
      update::mode_sceneInit(3);
      *(undefined4 *)((int)pvVar3 + 0x34c) = 7;
      DAT_0095cd9a = 1;
      FUN_005e7e98(&DAT_0095cd60,&Cuboids[*(int *)((int)pvVar3 + 0x294)].pos);
      FUN_005e7e98(&DAT_0095cd70,&Cuboids[*(int *)((int)pvVar3 + 0x294)].rot);
      moby->state = '\a';
      *(undefined4 *)((int)pvVar3 + 0x39c) = 0x1b;
    }
    else if (iVar13 == 7) {
      if ((((g_standingOnMoby == 0) || (g_framesNotGrounded != 0)) ||
          (*(short *)(g_standingOnMoby + 0xa6) != 0x247)) ||
         ((g_heroState != THRUSTER_PACK_BONK_JUMP || (*(int *)((int)pvVar3 + 0x3ac) != 0)))) {
        iVar13 = *(int *)((int)pvVar3 + 0x3ac);
        if (iVar13 == 0) {
          FUN_003d2234(*(undefined4 *)((int)pvVar3 + 0x200));
          iVar13 = *(int *)((int)pvVar3 + 0x3ac);
        }
        if (iVar13 == 0) goto LAB_00279dec;
      }
      else {
        iVar13 = 1;
      }
      *(int *)((int)pvVar3 + 0x3ac) = iVar13 + 1;
      iVar12 = idol::GetAnimDuration(0x28);
      if (iVar12 < iVar13) {
        update::mode_sceneInit(4);
        *(undefined4 *)((int)pvVar3 + 0x34c) = 8;
        moby->state = '\a';
        *(undefined4 *)((int)pvVar3 + 0x39c) = 0x1b;
      }
    }
    else if (iVar13 == 8) {
      camera::SetCameraPosition(local_c0,local_b0,1,0,0);
      update::mode_sceneInit(5);
      *(undefined4 *)((int)pvVar3 + 0x34c) = 9;
    }
    else if ((iVar13 == 9) && (g_gameMode == GAME_MODE_NORMAL)) {
      update::mode_creditsInit();
      *(undefined4 *)((int)pvVar3 + 0x34c) = 10;
    }
    else if ((iVar13 == 10) && (g_gameMode == GAME_MODE_NORMAL)) {
      update::PlayStoryMovie(0xb);
      *(undefined4 *)((int)pvVar3 + 0x34c) = 0xb;
    }
    else if ((iVar13 == 0xb) && (g_gameMode == GAME_MODE_NORMAL)) {
      DAT_00facc64 = 0;
      g_deplanetizerUp = 0;
      pause::BeginMenu(0x21);
      mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar3 + 0x3a0));
      if (*(MobyInstance **)((int)pvVar3 + 0x3a4) != (MobyInstance *)0x0) {
        mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar3 + 0x3a4));
      }
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  else if (bVar1 == 0x1a) {
    dVar21 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                  (double)(g_heroPosition.y - (moby->pos).y));
    fVar26 = mobyutil::OrganicDeltAng
                       ((float)dVar21,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                        mobyutil::g_FrameTime * 6.2831855,&(moby->rotation).z,0x720000,
                        (float *)((int)pvVar3 + 0x370));
    mobyupdate_helpers::M1422_00273da0((double)fVar26,lVar9);
    *(int *)((int)pvVar3 + 0x358) = *(int *)((int)pvVar3 + 0x358) + 1;
    iVar12 = idol::GetAnimDuration(0x14);
    iVar13 = *(int *)((int)pvVar3 + 0x358);
    if (iVar13 == (iVar13 / iVar12) * iVar12) {
      dVar23 = (double)(moby->rotation).z;
      dVar21 = (double)mobyutil::MB_randRangeFloat(-30.0,30.0);
      dVar21 = (double)fastfunc::FastWrapRot((float)dVar23,(float)(dVar21 * 0.01745329238474369));
      mathfunc::cosf((float)dVar21);
      FUN_005e8128(dVar21);
      uVar10 = 0;
      mobyutil::MB_randRangeFloat(3.0,8.0);
      FUN_005e7f54(local_e0,local_e0,uVar19 + 0x3c0);
      mobyutil::MB_genericExplosion
                (uVar10,uVar10,0x3ff0000000000000,0x4004000000000000,0x4022000000000000,
                 0x3ff0000000000000,uVar10,lVar9,&DAT_00a15d30,local_e0);
      iVar13 = *(int *)((int)pvVar3 + 0x358);
    }
    iVar12 = idol::GetAnimDuration(0x78);
    if (iVar13 == iVar12) {
      if (moby->animationId != '\x0e') {
        mobyutil::MB_SetAnimation(lVar9,0xe,5,1);
      }
      mathfunc::cosf((moby->rotation).z);
      FUN_005e8128((double)(moby->rotation).z);
      uVar10 = 0;
      FUN_005e7f54(0,local_d0,local_d0,uVar19 + 0x3c0);
      mobyutil::MB_genericExplosion
                (uVar10,uVar10,0x4004000000000000,0x4014000000000000,0x4022000000000000,
                 0x4000000000000000,0x4024000000000000,lVar9,&DAT_00a15d30,local_d0,0,
                 0xffffffffffffffff,0x28,10,0x20);
    }
    if ((moby->updateId == moby->animationId && moby->animationId == '\x0e') &&
       (iVar13 = mobyutil::MB_MayaFrameTrigger(30.0,moby), iVar13 != 0)) {
      moby->state = '\x1b';
      FUN_003d42a8(MobyInstance + *(int *)((int)pvVar3 + 0x21c));
    }
  }
  else if (bVar1 == 0x15) {
    dVar21 = (double)FUN_005e8338((double)(*(float *)(*(int *)((int)pvVar3 + 0x330) + 0x10) -
                                          (moby->pos).x),
                                  (double)(*(float *)(*(int *)((int)pvVar3 + 0x330) + 0x14) -
                                          (moby->pos).y));
    fVar26 = mobyutil::OrganicDeltAng
                       ((float)dVar21,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                        mobyutil::g_FrameTime * 6.2831855,&(moby->rotation).z,in_r4,
                        (float *)((int)pvVar3 + 0x370));
    FUN_003d22a0((double)fVar26,*(undefined4 *)((int)pvVar3 + 0x330));
    iVar13 = mobyupdate_helpers::M1422_00273c08
                       ((double)(mobyutil::g_FrameTime * 12.0),lVar9,
                        (ulonglong)*(uint *)((int)pvVar3 + 0x330) + 0x10);
    if (iVar13 != 0) {
      iVar13 = *(int *)((int)pvVar3 + 0x34c);
      if (iVar13 == 4) {
        idol::GetAnimDuration(900);
      }
      else if (iVar13 == 3) {
        idol::GetAnimDuration(0x4b0);
      }
      else if (iVar13 == 2) {
        idol::GetAnimDuration(0x708);
      }
      else if (iVar13 == 1) {
        idol::GetAnimDuration(0xa8c);
      }
      else if (iVar13 == 0) {
        idol::GetAnimDuration(0xe10);
      }
      else {
        idol::GetAnimDuration(600);
      }
      pMVar16 = MobyInstance + *(int *)((int)pvVar3 + 0x21c);
      uVar10 = idol::GetAnimDuration();
      FUN_003d4228(pMVar16,uVar10);
      *(undefined4 *)((int)pvVar3 + 0x354) = 0;
      moby->state = ((byte)((LZCOUNT(4 - *(int *)((int)pvVar3 + 0x34c)) << 0x3a) >> 0x3f) & 8) + 0xc
      ;
      *(undefined4 *)((int)pvVar3 + 0x364) = 1;
      *(int *)((int)pvVar3 + 0x34c) = *(int *)((int)pvVar3 + 0x34c) + 1;
    }
    if (g_playDrekButtonCutscene != 0) {
      moby->state = '\x05';
    }
  }
  else if (bVar1 == 0x14) {
    iVar13 = fastfunc::FastDecTimerS32(uVar19 + 0x354);
    if (iVar13 != 0) {
      uVar14 = idol::GetAnimDuration(0x14);
      *(undefined4 *)((int)pvVar3 + 0x354) = uVar14;
      FUN_005e7e98(auStack_220,uVar19 + 0x3c0);
      iVar13 = FUN_00257bf0(lVar9,*(undefined4 *)((int)pvVar3 + 0x214),auStack_220);
      if (iVar13 != 0) {
        moby->state = '\f';
      }
    }
  }
  else if (bVar1 == 0x13) {
    dVar21 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                  (double)(g_heroPosition.y - (moby->pos).y));
    fVar26 = mobyutil::OrganicDeltAng
                       ((float)dVar21,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                        mobyutil::g_FrameTime * 6.2831855,&(moby->rotation).z,0x720000,
                        (float *)((int)pvVar3 + 0x370));
    iVar13 = fastfunc::FastDecTimerS32((double)fVar26,uVar19 + 0x354);
    if (iVar13 != 0) {
      mobyupdate_helpers::M1422_002744f8(lVar9);
    }
    dVar21 = 5.800000190734863;
    FUN_003ec060(0x4017333340000000,*(undefined4 *)((int)pvVar3 + 0x338),uVar19 + 0x3c0);
    iVar13 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar3 + 0x3b0));
    if (iVar13 == 0) {
      iVar13 = sound::PlayMobySound(0xe,4,moby);
      *(int *)((int)pvVar3 + 0x3b0) = iVar13;
    }
    bVar8 = false;
    iVar13 = fastfunc::FastDecTimerS32(uVar19 + 0x358);
    if ((iVar13 != 0) &&
       ((hero::g_heroStateType != 0xf ||
        (iVar13 = fastfunc::FastDecTimerS32(uVar19 + 0x35c), iVar13 != 0)))) {
      bVar8 = true;
    }
    if ((hero::g_heroStateType == 0xf) &&
       (dVar23 = (double)FUN_005e8588(&g_heroPosition,DAT_0096a240 + *DAT_0096a240 * 4),
       dVar23 < 3.0)) {
      bVar8 = true;
    }
    if ((g_heroState == TAKING_DAMAGE) &&
       (dVar23 = (double)FUN_005e8588(lVar9 + 0x10,&g_heroPosition), dVar23 < 12.0)) {
      bVar8 = true;
    }
    dVar23 = (double)FUN_005e8588(&g_heroPosition,&Cuboids[*(int *)((int)pvVar3 + 600)].pos);
    if (((double)(float)((double)DAT_007a9ff4 + dVar21) < dVar23) || (bVar8)) {
      iVar13 = *(int *)((int)pvVar3 + 0x3b0);
      if ((iVar13 != -1) &&
         ((sound::g_SoundChannels[iVar13].pMoby == moby &&
          (sound::g_SoundChannels[iVar13].state != '\0')))) {
        sound::sound_Kill(iVar13);
      }
      *(undefined4 *)((int)pvVar3 + 0x3b0) = 0xffffffff;
      moby->state = '\f';
      if (moby->animationId != '\0') {
        uVar10 = idol::GetAnimDuration(0x14);
        mobyutil::MB_SetAnimation(lVar9,0,0,uVar10);
      }
      *(undefined4 *)((int)pvVar3 + 0x350) = 0x13;
    }
  }
LAB_00279dec:
  mobyupdate_helpers::M1422_002737b8(lVar9);
  if (moby->enabled != '\0') {
    mobyfunc::GetBonePosition(lVar9,8,auStack_a0);
    mobyfunc::GetBonePosition(lVar9,9,auStack_90);
    FUN_005e81f0(auStack_80,auStack_a0,auStack_90);
    FUN_005e7f98(0x3fb99999a0000000,auStack_80,auStack_80);
    mobyutil::MB_SpawnSparksPair(0x41224f8000000000,0,auStack_a0,auStack_a0,auStack_80);
  }
  if (1 < *(int *)((int)pvVar3 + 0x34c)) {
    DAT_0096a2b8 = moby;
  }
  FUN_005e7e98(lVar9 + 0x10,uVar19 + 0x3c0);
  dVar21 = (double)fastfunc::FastWrapRot
                             (*(float *)((int)pvVar3 + 0x3d4),mobyutil::g_FrameTime * 3.1415927);
  *(float *)((int)pvVar3 + 0x3d4) = (float)dVar21;
  dVar21 = (double)FUN_005e8128();
  mobyutil::OrganicDelt
            ((float)((double)*(float *)((int)pvVar3 + 0x3d0) * dVar21 +
                    (double)*(float *)((int)pvVar3 + 0x3d8)),DAT_0071f418 * 4.0,DAT_0071f418 * 4.0,
             mobyutil::g_FrameTime * 4.0,(float *)((int)pvVar3 + 0x3dc),0x720000,
             (float *)((int)pvVar3 + 0x3e0));
  (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar3 + 0x3dc);
  *(undefined4 *)((int)pvVar3 + 0x3d8) = 0;
  dVar23 = 0.029999999329447746;
  dVar21 = 0.30000001192092896;
  mobyutil::MB_UpdateManipulatorRot
            ((double)(DAT_0071f40c * 0.03),(double)(DAT_0071f40c * 0.3),lVar9,uVar19 + 0xc0,7);
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar23),
             (double)(float)((double)DAT_0071f40c * dVar21),lVar9,uVar19 + 0x140,0x13);
  dVar21 = (double)fastfunc::FastWrapRot
                             (*(float *)((int)pvVar3 + 0x3b4),mobyutil::g_FrameTime * 3.4906585);
  *(float *)((int)pvVar3 + 0x3b4) = (float)dVar21;
  dVar21 = (double)FUN_005e8128();
  uVar15 = fastfunc::FastLerpColor((double)(float)(dVar21 * 0.5 + 0.5),0x30c8c8c8,0x1c393939);
  moby->field60_0x90 = uVar15;
  *(uint *)((int)pvVar3 + 0x3b8) =
       (((int)uVar15 >> 0x10 & 0xffU) + 1) * 0x5500 & 0x7f0000 | uVar15 & 0xff000000 |
       ((int)uVar15 >> 8 & 0xffU) << 8 | ((uVar15 & 0xff) + 1) * 0x55 >> 8;
  if (moby->enabled != '\0') {
    RegisterFuncForMoby(&PTR_M1424_0027a098_0070a5b0,moby);
  }
  return;
}



//==== 0027a098  ns=mobyupdate_helpers  size=0x3b0
// sig: undefined M1424_0027a098(void)
// callers(0): 
// callees(4): 000f1114 mobyfunc::GetBonePosition; 00119028 mobyutil::MB_DrawGlowFX; 00502730 fastfunc::FastIntToDouble; 005027bc fastfunc::FastLerpColor
// strings: 0027a090: '?333`'

void mobyupdate_helpers::M1424_0027a098(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [32];
  
  dVar18 = 0.5;
  iVar1 = *(int *)(param_1 + 0x78);
  iVar7 = (int)(animationSpeed * (float)((double)(longlong)DAT_007aa0c0 + 0.5));
  dVar8 = (double)fastfunc::FastIntToDouble(worldUpdateTime - (worldUpdateTime / iVar7) * iVar7);
  dVar9 = (double)fastfunc::FastIntToDouble(iVar7);
  dVar10 = 6.18317985534668;
  dVar11 = 3.141590118408203;
  dVar12 = 3.141592502593994;
  dVar13 = -3.141592502593994;
  dVar14 = -0.16666656732559204;
  dVar15 = 0.008333025500178337;
  dVar16 = -0.0001980741071747616;
  dVar17 = 2.601886990305502e-06;
  fVar2 = (float)(dVar8 / dVar9) * 6.18318 - 3.14159;
  fVar3 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar3 = fVar2;
  }
  fVar4 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
    fVar4 = fVar3;
  }
  fVar5 = fVar4 * fVar4;
  fVar2 = fVar5 * fVar5 * fVar4;
  fVar3 = fVar5 * fVar2;
  uVar6 = fastfunc::FastLerpColor
                    ((double)(float)((double)(fVar5 * fVar3 * 2.601887e-06 +
                                             fVar3 * -0.0001980741 +
                                             fVar2 * 0.0083330255 +
                                             fVar5 * fVar4 * -0.16666657 + fVar4) * dVar18 + dVar18)
                     ,DAT_007aa0b8,DAT_007aa0bc);
  mobyfunc::GetBonePosition(*(undefined4 *)(iVar1 + 0x3a0),1,auStack_b0);
  mobyutil::MB_DrawGlowFX((double)DAT_007aa0b0,(double)DAT_007aa0b4,auStack_b0,uVar6);
  mobyfunc::GetBonePosition(*(undefined4 *)(iVar1 + 0x3a0),2,auStack_b0);
  mobyutil::MB_DrawGlowFX((double)DAT_007aa0b0,(double)DAT_007aa0b4,auStack_b0,uVar6);
  if ((10 < *(byte *)(param_1 + 0x53)) && (*(byte *)(param_1 + 0x53) < 0xe)) {
    iVar7 = (int)(animationSpeed * (float)((double)(longlong)DAT_007aa0d0 + dVar18));
    dVar8 = (double)fastfunc::FastIntToDouble(worldUpdateTime - (worldUpdateTime / iVar7) * iVar7);
    dVar9 = (double)fastfunc::FastIntToDouble(iVar7);
    dVar9 = (double)(float)((double)(float)(dVar8 / dVar9) * dVar10 - dVar11);
    dVar8 = (double)(float)(dVar12 - dVar9);
    if (dVar9 - (double)(float)(dVar12 - dVar9) < 0.0) {
      dVar8 = dVar9;
    }
    dVar10 = (double)(float)(dVar13 - dVar9);
    if ((double)(float)(dVar13 - dVar9) - dVar8 < 0.0) {
      dVar10 = dVar8;
    }
    dVar8 = (double)(float)(dVar10 * dVar10);
    dVar11 = (double)(float)(dVar8 * (double)(float)(dVar8 * dVar10));
    dVar9 = (double)(float)(dVar8 * dVar11);
    uVar6 = fastfunc::FastLerpColor
                      ((double)(float)((double)(float)((double)(float)(dVar8 * dVar9) * dVar17 +
                                                      (double)(float)(dVar9 * dVar16 +
                                                                     (double)(float)(dVar11 * dVar15
                                                                                    + (double)(float
                                                  )((double)(float)(dVar8 * dVar10) * dVar14 +
                                                   dVar10)))) * dVar18 + dVar18),DAT_007aa0c8,
                       DAT_007aa0cc);
    mobyfunc::GetBonePosition(param_1,5,auStack_a0);
    mobyutil::MB_DrawGlowFX((double)DAT_007aa0c4,(double)DAT_00facc8c,auStack_a0,uVar6);
    mobyfunc::GetBonePosition(param_1,6,auStack_a0);
    mobyutil::MB_DrawGlowFX((double)DAT_007aa0c4,(double)DAT_00facc8c,auStack_a0,uVar6);
  }
  iVar7 = 0;
  uVar6 = 0x3fe6666660000000;
  do {
    mobyfunc::GetBonePosition(param_1,iVar7 + 0xb,auStack_b0);
    mobyutil::MB_DrawGlowFX(uVar6,dVar18,auStack_b0,*(undefined4 *)(iVar1 + 0x3b8));
    iVar7 = iVar7 + 1;
  } while (iVar7 < 8);
  return;
}



//==== 0027a448  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1424_0027a448(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1424_0027a448(void)

{
  DAT_007aa120 = 0x10000;
  return;
}



//==== 0027a488  ns=mobyupdate_unsorted  size=0x6e0
// sig: undefined UpdateMoby_1424(MobyInstance * moby)
// callers(0): 
// callees(6): 0003fba8 camera::camera19::Cam19_Enable; 004fff60 fastfunc::FastDecTimerS32; 005023f0 fastfunc::FastVecAdd; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Moby 1424 */

void mobyupdate_unsorted::UpdateMoby_1424(MobyInstance *moby)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  f32 *pfVar4;
  uint uVar5;
  int iVar6;
  f32 fVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  undefined1 local_a0 [16];
  f32 local_90;
  f32 local_8c;
  f32 local_88;
  f32 local_84;
  f32 local_80;
  f32 local_7c;
  f32 local_78;
  f32 local_74;
  
  bVar1 = moby->state;
  pfVar4 = (f32 *)moby->pVar;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      fVar7 = (moby->pos).x;
      moby->updateDistance = -1;
      *pfVar4 = fVar7;
      pfVar4[1] = (moby->pos).y;
      pfVar4[2] = (moby->pos).z;
      pfVar4[3] = (moby->pos).w;
      if (((g_heroType == '\0') && (uVar2 = moby->uid, (&DAT_00a545c4)[(short)uVar2] == '\0')) &&
         ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar2 >> 5) << 2))
          & 1 << (uVar2 & 0x1f)) == 0)) {
        fVar7 = pfVar4[7];
        if (0 < (int)fVar7) {
          MobyInstance[(int)fVar7].modeBits = MobyInstance[(int)fVar7].modeBits | NO_UPDATE;
        }
        moby->state = '\x01';
      }
      else {
        dVar9 = 3.1415927410125732;
        fastfunc::FastWrapRot((moby->rotation).z,3.1415927);
        fastfunc::FastWrapRot((moby->rotation).z,(float)dVar9);
        fastfunc::FastVecAdd(&local_90,pfVar4,local_a0);
        (moby->pos).x = local_90;
        (moby->pos).y = local_8c;
        moby->state = '\x03';
        (moby->pos).z = local_88;
        (moby->pos).w = local_84;
      }
    }
    else if (((g_heroType == '\0') && (uVar2 = moby->uid, (&DAT_00a545c4)[(short)uVar2] == '\0')) &&
            ((*(uint *)(&DAT_00a0cd1c +
                       Level * 0x100 + (int)((longlong)((int)(short)uVar2 >> 5) << 2)) &
             1 << (uVar2 & 0x1f)) == 0)) {
      if (g_SeenPlanets.Hoven != 0) {
        fVar7 = pfVar4[7];
        if (0 < (int)fVar7) {
          MobyInstance[(int)fVar7].modeBits =
               MobyInstance[(int)fVar7].modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|DISABLED);
          uVar2 = moby->uid;
        }
        iVar6 = (int)((longlong)((int)(short)uVar2 >> 5) << 2);
        uVar3 = moby->uid;
        iVar8 = (int)((longlong)((int)(short)uVar3 >> 5) << 2);
        uVar5 = *(uint *)(&DAT_00a54dd0 + iVar8);
        *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar6) =
             *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar6) | 1 << (uVar2 & 0x1f);
        *(uint *)(&DAT_00a54dd0 + iVar8) = uVar5 | 1 << (uVar3 & 0x1f);
        if (0 < (int)pfVar4[4]) {
          camera::camera19::Cam19_Enable((int)pfVar4[4]);
        }
        fVar7 = (f32)fastfunc::FastDoubleToInt((double)(animationSpeed * 90.0));
        pfVar4[5] = fVar7;
        moby->state = '\x02';
      }
    }
    else {
      (moby->pos).x = *pfVar4;
      (moby->pos).y = pfVar4[1];
      (moby->pos).z = pfVar4[2];
      fVar7 = pfVar4[3];
      moby->state = '\x03';
      (moby->pos).w = fVar7;
      fVar7 = pfVar4[7];
      if (0 < (int)fVar7) {
        MobyInstance[(int)fVar7].modeBits =
             MobyInstance[(int)fVar7].modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|DISABLED);
      }
    }
  }
  else if (bVar1 < 3) {
    dVar10 = 90.0;
    iVar8 = fastfunc::FastDoubleToInt((double)(animationSpeed * 90.0));
    fastfunc::FastIntToDouble(iVar8 - (int)pfVar4[5]);
    dVar9 = 3.1415927410125732;
    fastfunc::FastWrapRot((moby->rotation).z,3.1415927);
    iVar8 = fastfunc::FastDoubleToInt((double)(float)((double)animationSpeed * dVar10));
    fastfunc::FastIntToDouble(iVar8 - (int)pfVar4[5]);
    fastfunc::FastWrapRot((moby->rotation).z,(float)dVar9);
    fastfunc::FastVecAdd(&local_80,pfVar4,local_a0);
    (moby->pos).x = local_80;
    (moby->pos).y = local_7c;
    (moby->pos).z = local_78;
    (moby->pos).w = local_74;
    iVar8 = fastfunc::FastDecTimerS32(pfVar4 + 5);
    if (iVar8 != 0) {
      moby->state = '\x03';
    }
  }
  else if ((((bVar1 < 4) && (g_heroType == '\0')) &&
           (uVar2 = moby->uid, (&DAT_00a545c4)[(short)uVar2] == '\0')) &&
          ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar2 >> 5) << 2)
                     ) & 1 << (uVar2 & 0x1f)) == 0)) {
    (moby->pos).x = *pfVar4;
    (moby->pos).y = pfVar4[1];
    (moby->pos).z = pfVar4[2];
    fVar7 = pfVar4[3];
    moby->state = '\0';
    (moby->pos).w = fVar7;
  }
  return;
}



//==== 0027ab68  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1425_0027ab68(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1425_0027ab68(void)

{
  DAT_007aa190 = 0x10000;
  return;
}



//==== 0027ab98  ns=mobyupdate_unsorted  size=0xd4
// sig: undefined UpdateMoby_1425(MobyInstance * moby)
// callers(0): 
// callees(3): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 0012a440 partupd::SpawnPart_34

/* Moby 1425 */

void mobyupdate_unsorted::UpdateMoby_1425(MobyInstance *moby)

{
  float *pfVar1;
  int iVar2;
  double dVar3;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  undefined4 local_24;
  
  pfVar1 = (float *)moby->pVar;
  iVar2 = mobyutil::MB_randInt(DAT_007aa1b8 + -1);
  if (iVar2 == 0) {
    local_24 = 0;
    local_28 = 0.0;
    local_2c = 0;
    local_30 = 0;
    dVar3 = (double)mobyutil::MB_randRangeFloat(0.75,1.5);
    local_28 = (float)(dVar3 * (double)DAT_007aa1b4) * mobyutil::g_FrameTime;
    dVar3 = (double)mobyutil::MB_randRangeFloat(0.06,0.12);
    partupd::SpawnPart_34
              ((double)(float)(dVar3 * 210000.0),(double)*pfVar1,(Vec4 *)&moby->pos,&local_30);
  }
  return;
}



//==== 0027ac98  ns=mobyupdate_helpers  size=0x454
// sig: undefined M1426_0027ac98(void)
// callers(0): 
// callees(12): 000685c4 draw::GetEffectTex; 00071170 stub::STUB_00071170; 00074604 draw::DrawMeshSet; 000f1ef0 mobyutil::MB_GetLights; 00174f80 vuchain::SetGSReg; 00502578 fastfunc::FastWrapRot; 00502648 fastfunc::FastAddRots; 00502730 fastfunc::FastIntToDouble; 00502798 fastfunc::FastFMod; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1426_0027ac98(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  ulonglong *puVar5;
  uint uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  uint uVar10;
  int iVar11;
  ulonglong unaff_r25;
  float *pfVar12;
  uint uVar13;
  ulonglong unaff_r26;
  float *pfVar14;
  float *pfVar15;
  ulonglong unaff_r27;
  float *pfVar16;
  ulonglong unaff_r28;
  uint *puVar17;
  ulonglong unaff_r29;
  float *pfVar18;
  ulonglong unaff_r30;
  longlong lVar19;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar25;
  ulonglong in_f26;
  double dVar26;
  ulonglong in_f27;
  double dVar27;
  ulonglong in_f28;
  double dVar28;
  ulonglong in_f29;
  double dVar29;
  ulonglong in_f30;
  double dVar30;
  ulonglong in_f31;
  double dVar31;
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar19 = uVar8 - 0x130;
  puVar5 = (ulonglong *)lVar19;
  *puVar5 = uVar8;
  puVar5[0x28] = in_LR;
  puVar5[0x1e] = in_f24;
  puVar5[0x1f] = in_f25;
  puVar5[0x20] = in_f26;
  puVar5[0x21] = in_f27;
  puVar5[0x22] = in_f28;
  puVar5[0x23] = in_f29;
  puVar5[0x24] = in_f30;
  puVar5[0x25] = in_f31;
  puVar5[0x1c] = unaff_r30;
  puVar5[0x1b] = unaff_r29;
  puVar5[0x14] = unaff_r22;
  uVar7 = worldUpdateTime;
  pfVar15 = *(float **)(param_1 + 0x78);
  puVar5[0x1d] = unaff_r31;
  puVar5[0x1a] = unaff_r28;
  puVar5[0x19] = unaff_r27;
  puVar5[0x18] = unaff_r26;
  puVar5[0x17] = unaff_r25;
  puVar5[0x16] = unaff_r24;
  puVar5[0x15] = unaff_r23;
  puVar5[0x13] = unaff_r21;
  dVar20 = (double)fastfunc::FastIntToDouble(uVar7);
  dVar31 = (double)(float)((double)(float)((double)DAT_007aa63c * (double)mobyutil::g_FrameTime) *
                          dVar20);
  uVar9 = draw::GetEffectTex(dVar20,(double)DAT_007aa63c,(double)mobyutil::g_FrameTime,DAT_007aa628)
  ;
  vuchain::SetGSReg(0x18,uVar9);
  uVar9 = idol_draw::PackCmd(0,1,0,1,DAT_007aa624);
  vuchain::SetGSReg(3,uVar9);
  uVar9 = FUN_00502f08(0,0,0,0,0,0);
  vuchain::SetGSReg(6,uVar9);
  uVar9 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  vuchain::SetGSReg(0x1a,uVar9);
  *pfVar15 = pfVar15[1];
  dVar20 = (double)fastfunc::FastWrapRot
                             (pfVar15[1],
                              (360.0 / (DAT_007aa634 * animationSpeed)) * 0.017453292 *
                              mobyutil::g_FrameTime);
  pfVar15[1] = (float)dVar20;
  mobyutil::MB_GetLights(param_1,uVar8 - 0xc0,uVar8 - 0xbc,uVar8 - 0xb8);
  iVar11 = *(int *)(puVar5 + 0xf);
  iVar4 = *(int *)((int)puVar5 + 0x74);
  uVar10 = 0;
  pfVar12 = (float *)&DAT_00facc90;
  uVar13 = *(uint *)(puVar5 + 0xe);
  dVar20 = 6.2831854820251465;
  uVar6 = DAT_007aa62c << 0x18;
  dVar25 = 3.141592502593994;
  dVar26 = -3.141592502593994;
  dVar27 = -0.16666656732559204;
  dVar28 = 0.008333025500178337;
  dVar29 = -0.0001980741071747616;
  dVar30 = 2.601886990305502e-06;
  pfVar14 = (float *)&DAT_00facc94;
  pfVar16 = (float *)&DAT_00facc98;
  puVar17 = &DAT_00fad014;
  pfVar18 = (float *)&DAT_007aa1e0;
  do {
    dVar21 = (double)fastfunc::FastFMod((double)SQRT(*pfVar18 * *pfVar18 + pfVar18[1] * pfVar18[1]),
                                        (double)DAT_007aa630);
    dVar21 = (double)fastfunc::FastAddRots((float)(dVar21 * dVar20) / DAT_007aa630);
    dVar22 = (double)fastfunc::FastWrapRot((float)dVar21,pfVar15[1]);
    fVar1 = *pfVar18;
    fVar2 = pfVar18[1];
    uVar10 = uVar10 + 1;
    dVar21 = (double)(float)(dVar25 - dVar22);
    if (dVar22 - (double)(float)(dVar25 - dVar22) < 0.0) {
      dVar21 = dVar22;
    }
    fVar3 = pfVar18[2];
    pfVar18 = pfVar18 + 3;
    *pfVar12 = fVar1 + *(float *)(param_1 + 0x10);
    fVar1 = DAT_007aa638;
    pfVar12 = pfVar12 + 3;
    dVar23 = (double)(float)(dVar26 - dVar22);
    if ((double)(float)(dVar26 - dVar22) - dVar21 < 0.0) {
      dVar23 = dVar21;
    }
    *pfVar14 = fVar2 + *(float *)(param_1 + 0x14);
    fVar2 = *(float *)(param_1 + 0x18);
    dVar21 = (double)(float)(dVar23 * dVar23);
    *puVar17 = uVar6 | iVar11 << 0x10 | iVar4 << 8 | uVar13;
    pfVar14 = pfVar14 + 3;
    puVar17 = puVar17 + 1;
    dVar22 = (double)(float)(dVar21 * (double)(float)(dVar21 * dVar23));
    dVar24 = (double)(float)(dVar21 * dVar22);
    *pfVar16 = fVar1 * (float)((double)(float)(dVar21 * dVar24) * dVar30 +
                              (double)(float)(dVar24 * dVar29 +
                                             (double)(float)(dVar22 * dVar28 +
                                                            (double)(float)((double)(float)(dVar21 *
                                                                                           dVar23) *
                                                                            dVar27 + dVar23)))) +
               fVar3 + fVar2;
    pfVar16 = pfVar16 + 3;
  } while (uVar10 < 0x2d);
  iVar11 = 0;
  uVar9 = 0x3ff0000000000000;
  do {
    uVar13 = 0;
    pfVar15 = (float *)&DAT_007aa3fc;
    pfVar12 = (float *)&DAT_00faceac;
    pfVar14 = (float *)&DAT_007aa400;
    pfVar16 = (float *)&DAT_00faceb0;
    do {
      *(undefined4 *)((int)puVar5 + 0x7c) = 0x3f800000;
      *(undefined4 *)((int)puVar5 + 0x84) = 0x3f800000;
      *(undefined4 *)(puVar5 + 0x10) = 0xbf20d97c;
      fVar1 = *(float *)((int)lVar19 + 0x7c);
      *(undefined4 *)(puVar5 + 0x11) = 0x3f20d97c;
      dVar20 = (double)fastfunc::FastFMod((double)(float)((double)fVar1 * dVar31),uVar9);
      fVar1 = *(float *)((int)lVar19 + 0x80);
      *pfVar12 = (float)((double)*pfVar15 + dVar20);
      dVar20 = (double)fastfunc::FastFMod((double)(float)((double)fVar1 * dVar31),uVar9);
      fVar1 = *pfVar14;
      uVar13 = uVar13 + 1;
      pfVar15 = pfVar15 + 2;
      pfVar12 = pfVar12 + 2;
      pfVar14 = pfVar14 + 2;
      *pfVar16 = (float)((double)fVar1 + dVar20);
      pfVar16 = pfVar16 + 2;
    } while (uVar13 < 0x2d);
    stub::STUB_00071170();
    draw::DrawMeshSet(DAT_007aa1c0,PTR_DAT_007aa618,PTR_DAT_007aa620,PTR_DAT_007aa61c,9);
    iVar11 = iVar11 + 1;
    lVar19 = lVar19 + 8;
  } while (iVar11 < 2);
  return;
}



//==== 0027b0ec  ns=mobyupdate_unsorted  size=0x80
// sig: undefined UpdateMoby_1426(MobyInstance * moby)
// callers(0): 
// callees(2): 0006d7e0 draw::RegisterPostDraw; 000f1ec8 mobyfunc::SetColorOfMoby

/* Moby 1426 */

void mobyupdate_unsorted::UpdateMoby_1426(MobyInstance *moby)

{
  if (moby->state == '\0') {
    mobyfunc::SetColorOfMoby(moby,0x40,0x40,0x40);
    moby->state = '\x01';
  }
  else {
    draw::RegisterPostDraw(&PTR_M1426_0027ac98_0070a5d8,moby);
    moby->drawDistance = 0;
    moby->modeBits = moby->modeBits | DISABLED;
  }
  return;
}



//==== 0027b170  ns=Global  size=0xfc
// sig: undefined FUN_0027b170(void)
// callers(1): 0027ba70 mobyupdate_unsorted::UpdateMoby_1430
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 0010c000 mobyutil::MB_CopyHeroLights

MobyInstance *
FUN_0027b170(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  MobyInstance *pMVar1;
  f32 fStack00000030;
  f32 fStack00000034;
  f32 fStack00000038;
  f32 fStack0000003c;
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  
  pMVar1 = mobyfunc::CreateMoby(CODEBOT);
  if (pMVar1 != (MobyInstance *)0x0) {
    mobyutil::MB_CopyHeroLights(pMVar1);
    pMVar1->updateDistance = -1;
    pMVar1->drawDistance = 0xff;
    pMVar1->enabled = '\x01';
    fStack00000034 = (f32)param_1;
    fStack0000003c = (f32)param_2;
    (pMVar1->pos).y = fStack00000034;
    (pMVar1->pos).w = fStack0000003c;
    fStack00000044 = (f32)param_3;
    fStack0000004c = (f32)param_4;
    (pMVar1->rotation).y = fStack00000044;
    (pMVar1->rotation).w = fStack0000004c;
    fStack00000030 = (f32)((ulonglong)param_1 >> 0x20);
    fStack00000038 = (f32)((ulonglong)param_2 >> 0x20);
    (pMVar1->pos).x = fStack00000030;
    (pMVar1->pos).z = fStack00000038;
    fStack00000040 = (f32)((ulonglong)param_3 >> 0x20);
    fStack00000048 = (f32)((ulonglong)param_4 >> 0x20);
    (pMVar1->rotation).x = fStack00000040;
    (pMVar1->rotation).z = fStack00000048;
    mobyfunc::UpdateMobyTransform(pMVar1);
  }
  return pMVar1;
}



//==== 0027b278  ns=mobyupdate_helpers  size=0x120
// sig: undefined M1428_0027b278(void)
// callers(1): 0027b6d8 mobyupdate_unsorted::UpdateMoby_1428
// callees(1): 000fc620 mobyutil::MB_randInt

void mobyupdate_helpers::M1428_0027b278(int param_1)

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
  auVar14 = loadVectorLeftIndexed(in_LR,0x27b26c);
  auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  lVar3 = (ulonglong)uVar1 + 0x20;
  auVar8 = loadVectorLeftIndexed(4,0x27b26c);
  lVar6 = 4;
  auVar7 = loadVectorLeftIndexed(8,0x27b26c);
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



//==== 0027b3b0  ns=mobyupdate_helpers  size=0x314
// sig: undefined M1428_0027b3b0(void)
// callers(1): 0027b6d8 mobyupdate_unsorted::UpdateMoby_1428
// callees(5): 00130ed0 partupd::SpawnPart_59; 004fff60 fastfunc::FastDecTimerS32; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M1428_0027b3b0(int param_1)

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
  auVar17 = loadVectorLeftIndexed(0x14,0x27b398);
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



//==== 0027b6d8  ns=mobyupdate_unsorted  size=0x22c
// sig: undefined UpdateMoby_1428(MobyInstance * moby)
// callers(0): 
// callees(7): 000e8aa4 memcard::memcard_Save; 000efb38 mobyfunc::DeleteMoby; 00112a38 mobyutil::MB_ToastMessage; 00167e60 update::mode_sceneInit; 0027b278 mobyupdate_helpers::M1428_0027b278; 0027b3b0 mobyupdate_helpers::M1428_0027b3b0; 00502578 fastfunc::FastWrapRot

/* Moby 1428 */

undefined4 * mobyupdate_unsorted::UpdateMoby_1428(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  MobyClass *pMVar3;
  float fVar4;
  float fVar5;
  undefined4 *puVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  puVar6 = (undefined4 *)Level;
  if (Level != Quartu) {
    dVar7 = (double)fastfunc::FastWrapRot((moby->rotation).z,mobyutil::g_FrameTime * 1.5707964);
    pMVar3 = moby->pClass;
    (moby->rotation).z = (float)dVar7;
    bVar1 = moby->state;
    puVar6 = (undefined4 *)(uint)bVar1;
    moby->scale = pMVar3->gScale * DAT_007aa640;
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        mobyupdate_helpers::M1428_0027b278(moby);
        if (MiscLevelFlags.Codebot == false) {
          fVar2 = (moby->pos).z;
          puVar6 = (undefined4 *)0x1;
          moby->state = '\x01';
          (moby->pos).z = fVar2 + 1.0;
        }
        else {
          puVar6 = (undefined4 *)mobyfunc::DeleteMoby(moby);
        }
      }
      else {
        mobyupdate_helpers::M1428_0027b3b0(moby);
        puVar6 = &hero::g_heroMtx;
        fVar2 = (moby->pos).y - g_heroPosition.y;
        fVar4 = (moby->pos).x - g_heroPosition.x;
        fVar5 = (moby->pos).z - g_heroPosition.z;
        if ((SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar2 * fVar2) < 3.0) &&
           (puVar6 = (undefined4 *)g_heroState, g_heroState != TURRET_PLANE_UI)) {
          moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
          update::mode_sceneInit(1);
          puVar6 = (undefined4 *)0x2;
          moby->state = '\x02';
        }
      }
    }
    else if (bVar1 < 3) {
      puVar6 = (undefined4 *)g_gameMode;
      if (g_gameMode != GAME_MODE_SCENE) {
        mobyutil::MB_ToastMessage(0x426a,0xffffffffffffffff);
        auVar8 = ZEXT416(0xffffffff);
        auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
        auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
        auVar8 = loadVectorLeftIndexed(0xc,0x27b6c4);
        auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar8 = vectorMultiplyAddFloatingPoint
                           (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9
                           );
        auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
        auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
        g_toastMsgTimer =
             storeVectorElementWordIndexed
                       (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0x5c80,0xa10000);
        MiscLevelFlags.Codebot = true;
        MiscLevelFlags.field120_0x78 = 1;
        moby->state = '\x03';
        puVar6 = (undefined4 *)memcard::memcard_Save(0,-1);
      }
    }
    else if (bVar1 < 4) {
      puVar6 = (undefined4 *)mobyfunc::DeleteMoby(moby);
    }
  }
  return puVar6;
}



//==== 0027b904  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1430_0027b904(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1430_0027b904(void)

{
  DAT_007aa690 = 0x10000;
  return;
}



//==== 0027b918  ns=mobyupdate_helpers  size=0x98
// sig: undefined M1430_SetCodeBotState_Crates(void)
// callers(1): 0027ba70 mobyupdate_unsorted::UpdateMoby_1430
// callees(0): 

void mobyupdate_helpers::M1430_SetCodeBotState_Crates(longlong param_1,char param_2)

{
  ushort uVar1;
  uint uVar2;
  MobyInstance *pMVar3;
  MobyInstance *pMVar4;
  ushort *puVar5;
  u16 *puVar6;
  
  puVar5 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  if (puVar5 != (ushort *)0x0) {
    do {
      pMVar4 = MobyInstance;
      uVar2 = *puVar5 & 0x7fff;
      if (param_2 == '\0') {
        pMVar3 = MobyInstance + uVar2;
        puVar6 = (u16 *)0x0;
        MobyInstance[uVar2].enabled = '\0';
        pMVar4[uVar2].modeBits = pMVar3->modeBits | (NO_UPDATE|DISABLED);
      }
      else {
        pMVar3 = MobyInstance + uVar2;
        puVar6 = (MobyInstance[uVar2].pClass)->collision;
        MobyInstance[uVar2].enabled = '\x01';
        pMVar4[uVar2].modeBits =
             pMVar3->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE);
      }
      uVar1 = *puVar5;
      pMVar4[uVar2].collision = puVar6;
      puVar5 = puVar5 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}



//==== 0027b9b0  ns=mobyupdate_helpers  size=0x80
// sig: undefined M1430_0027b9b0(void)
// callers(0): 
// callees(0): 

int mobyupdate_helpers::M1430_0027b9b0(longlong param_1)

{
  u8 uVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  
  puVar3 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  if (puVar3 == (ushort *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    do {
      if (((MobyInstance + (*puVar3 & 0x7fff) == (MobyInstance *)0x0) ||
          (uVar1 = MobyInstance[*puVar3 & 0x7fff].state, uVar1 == 0xfe)) || (uVar1 == 0xfd)) {
        iVar4 = iVar4 + 1;
      }
      uVar2 = *puVar3;
      puVar3 = puVar3 + 1;
    } while (-1 < (short)uVar2);
  }
  return iVar4;
}



//==== 0027ba70  ns=mobyupdate_unsorted  size=0xb34
// sig: undefined UpdateMoby_1430(MobyInstance * moby)
// callers(0): 
// callees(10): 0003fba8 camera::camera19::Cam19_Enable; 0003fc10 camera::camera19::Cam19_IsDone; 000a0c38 hero::Hero_Warp; 000ffb70 mobyutil::GetGroundZ; 0027b170 FUN_0027b170; 0027b918 mobyupdate_helpers::M1430_SetCodeBotState_Crates; 005023f0 fastfunc::FastVecAdd; 00502578 fastfunc::FastWrapRot; 00502a64 fastfunc::FastVecSub; 00502b08 fastfunc::FastVecAddSelf

/* Moby 1430 */

void mobyupdate_unsorted::UpdateMoby_1430(MobyInstance *moby)

{
  float fVar1;
  u8 uVar2;
  ushort uVar3;
  uint uVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  MobyInstance *pMVar11;
  longlong lVar12;
  int iVar13;
  int *piVar14;
  ushort *puVar15;
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
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 auStack_130 [16];
  float local_120 [3];
  undefined4 local_114;
  float local_110 [4];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  undefined4 local_b8;
  undefined1 auStack_b0 [16];
  float local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 auStack_90 [24];
  
  lVar12 = (longlong)(int)moby;
  piVar14 = (int *)moby->pVar;
  iVar13 = piVar14[3];
  if (iVar13 != -1) {
    if (moby->state != '\0') {
      fastfunc::FastVecSub(local_140,&MobyInstance[iVar13].pos,piVar14 + 4);
      fastfunc::FastVecAddSelf(auStack_130,lVar12 + 0x10,local_150);
      iVar13 = piVar14[3];
    }
    pMVar11 = MobyInstance;
    piVar14[4] = (int)MobyInstance[iVar13].pos.x;
    piVar14[5] = (int)pMVar11[iVar13].pos.y;
    piVar14[6] = (int)pMVar11[iVar13].pos.z;
    piVar14[7] = (int)pMVar11[iVar13].pos.w;
  }
  uVar2 = moby->state;
  if (uVar2 == '\x04') {
    DAT_00a2082c = 1;
    if (piVar14[1] == 0) {
      dVar27 = -1.5707963705062866;
      dVar16 = (double)fastfunc::FastWrapRot((moby->rotation).z,-1.5707964);
      dVar26 = 3.141592502593994;
      fVar1 = (float)(dVar16 + 1.570796251296997);
      dVar25 = -3.141592502593994;
      dVar24 = -0.16666656732559204;
      dVar23 = 0.008333025500178337;
      dVar22 = -0.0001980741071747616;
      dVar21 = 2.601886990305502e-06;
      dVar16 = 0.5;
      fVar5 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar5 = fVar1;
      }
      fVar7 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
        fVar7 = fVar5;
      }
      fVar8 = fVar7 * fVar7;
      fVar1 = fVar8 * fVar8 * fVar7;
      fVar5 = fVar8 * fVar1;
      local_c0 = (fVar8 * fVar5 * 2.601887e-06 +
                 fVar5 * -0.0001980741 + fVar1 * 0.0083330255 + fVar8 * fVar7 * -0.16666657 + fVar7)
                 * 0.5;
      dVar18 = (double)fastfunc::FastWrapRot((moby->rotation).z,(float)dVar27);
      dVar27 = (double)(float)(dVar26 - dVar18);
      if (dVar18 - (double)(float)(dVar26 - dVar18) < 0.0) {
        dVar27 = dVar18;
      }
      dVar26 = (double)(float)(dVar25 - dVar18);
      if ((double)(float)(dVar25 - dVar18) - dVar27 < 0.0) {
        dVar26 = dVar27;
      }
      dVar25 = (double)(float)(dVar26 * dVar26);
      dVar18 = (double)(float)(dVar25 * (double)(float)(dVar25 * dVar26));
      dVar27 = (double)(float)(dVar25 * dVar18);
      local_bc = (float)((double)(float)((double)(float)(dVar25 * dVar27) * dVar21 +
                                        (double)(float)(dVar27 * dVar22 +
                                                       (double)(float)(dVar18 * dVar23 +
                                                                      (double)(float)((double)(float
                                                  )(dVar25 * dVar26) * dVar24 + dVar26)))) * dVar16)
      ;
      dVar16 = 0.0;
      local_b8 = 0;
      fastfunc::FastVecAddSelf(auStack_b0,&local_c0,lVar12 + 0x10);
      dVar22 = 1.5707963705062866;
      dVar21 = (double)fastfunc::FastWrapRot((moby->rotation).z,1.5707964);
      uVar9._0_4_ = (moby->pos).x;
      uVar9._4_4_ = (moby->pos).y;
      uVar10._0_4_ = (moby->pos).z;
      uVar10._4_4_ = (moby->pos).w;
      iVar13 = FUN_0027b170(uVar9,uVar10,CONCAT44((float)dVar16,(float)dVar22),
                            CONCAT44((float)dVar21,(float)dVar16));
      piVar14[1] = iVar13;
    }
    else {
      dVar27 = -1.5707963705062866;
      dVar16 = (double)fastfunc::FastWrapRot((moby->rotation).z,-1.5707964);
      dVar26 = 3.141592502593994;
      fVar1 = (float)(dVar16 + 1.570796251296997);
      dVar25 = -3.141592502593994;
      dVar24 = -0.16666656732559204;
      dVar23 = 0.008333025500178337;
      dVar22 = -0.0001980741071747616;
      dVar21 = 2.601886990305502e-06;
      dVar16 = 0.5;
      fVar5 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar5 = fVar1;
      }
      fVar7 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
        fVar7 = fVar5;
      }
      fVar8 = fVar7 * fVar7;
      fVar1 = fVar8 * fVar8 * fVar7;
      fVar5 = fVar8 * fVar1;
      local_a0 = (fVar8 * fVar5 * 2.601887e-06 +
                 fVar5 * -0.0001980741 + fVar1 * 0.0083330255 + fVar8 * fVar7 * -0.16666657 + fVar7)
                 * 0.5;
      dVar18 = (double)fastfunc::FastWrapRot((moby->rotation).z,(float)dVar27);
      local_98 = 0;
      dVar27 = (double)(float)(dVar26 - dVar18);
      if (dVar18 - (double)(float)(dVar26 - dVar18) < 0.0) {
        dVar27 = dVar18;
      }
      dVar26 = (double)(float)(dVar25 - dVar18);
      if ((double)(float)(dVar25 - dVar18) - dVar27 < 0.0) {
        dVar26 = dVar27;
      }
      dVar25 = (double)(float)(dVar26 * dVar26);
      dVar18 = (double)(float)(dVar25 * (double)(float)(dVar25 * dVar26));
      dVar27 = (double)(float)(dVar25 * dVar18);
      local_9c = (float)((double)(float)((double)(float)(dVar25 * dVar27) * dVar21 +
                                        (double)(float)(dVar27 * dVar22 +
                                                       (double)(float)(dVar18 * dVar23 +
                                                                      (double)(float)((double)(float
                                                  )(dVar25 * dVar26) * dVar24 + dVar26)))) * dVar16)
      ;
      fastfunc::FastVecAddSelf(auStack_90,&local_a0,lVar12 + 0x10);
      dVar16 = (double)fastfunc::FastWrapRot((moby->rotation).z,1.5707964);
      iVar13 = piVar14[1];
      *(float *)(iVar13 + 0x10) = local_a0;
      *(float *)(iVar13 + 0x14) = local_9c;
      *(undefined4 *)(iVar13 + 0x18) = local_98;
      *(undefined4 *)(iVar13 + 0x1c) = local_94;
      iVar13 = piVar14[1];
      *(undefined4 *)(iVar13 + 0x40) = 0;
      *(undefined4 *)(iVar13 + 0x44) = 0x3fc90fdb;
      *(float *)(iVar13 + 0x48) = (float)dVar16;
      *(undefined4 *)(iVar13 + 0x4c) = 0;
    }
    if ((MiscLevelFlags.field109_0x6d == 0) &&
       (puVar15 = (ushort *)(&mobyutil::g_MobyGroups)[piVar14[8]], puVar15 != (ushort *)0x0)) {
      iVar13 = 0;
      do {
        if (((MobyInstance + (*puVar15 & 0x7fff) == (MobyInstance *)0x0) ||
            (uVar2 = MobyInstance[*puVar15 & 0x7fff].state, uVar2 == 0xfe)) || (uVar2 == 0xfd)) {
          iVar13 = iVar13 + 1;
        }
        uVar3 = *puVar15;
        puVar15 = puVar15 + 1;
      } while (-1 < (short)uVar3);
      if (9 < iVar13) {
        MiscLevelFlags.field109_0x6d = 1;
        g_boltCount = g_boltCount + 15000;
        g_totalBoltsCollected = g_totalBoltsCollected + 15000;
      }
    }
  }
  else if (uVar2 == '\x03') {
    if (piVar14[1] != 0) {
      dVar16 = (double)fastfunc::FastWrapRot
                                 ((float)piVar14[2],(360.0 / (animationSpeed * 360.0)) * 0.017453292
                                 );
      piVar14[2] = (int)(float)dVar16;
      dVar26 = 1.570796251296997;
      dVar25 = 3.141592502593994;
      fVar1 = (float)(dVar16 + 1.570796251296997);
      dVar24 = -3.141592502593994;
      dVar23 = -0.16666656732559204;
      dVar22 = 0.008333025500178337;
      dVar21 = -0.0001980741071747616;
      dVar16 = 2.601886990305502e-06;
      fVar5 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar5 = fVar1;
      }
      fVar7 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
        fVar7 = fVar5;
      }
      dVar17 = -1.5707963705062866;
      fVar8 = fVar7 * fVar7;
      fVar1 = fVar8 * fVar8 * fVar7;
      fVar5 = fVar8 * fVar1;
      dVar18 = (double)(fVar8 * fVar5 * 2.601887e-06 +
                        fVar5 * -0.0001980741 +
                        fVar1 * 0.0083330255 + fVar8 * fVar7 * -0.16666657 + fVar7 + 1.0);
      dVar27 = (double)fastfunc::FastWrapRot((moby->rotation).z,-1.5707964);
      dVar27 = (double)(float)(dVar27 + dVar26);
      dVar26 = (double)(float)(dVar25 - dVar27);
      if (dVar27 - (double)(float)(dVar25 - dVar27) < 0.0) {
        dVar26 = dVar27;
      }
      dVar19 = (double)(float)(dVar24 - dVar27);
      if ((double)(float)(dVar24 - dVar27) - dVar26 < 0.0) {
        dVar19 = dVar26;
      }
      dVar26 = (double)(float)(dVar19 * dVar19);
      dVar27 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar19));
      dVar20 = (double)(float)(dVar26 * dVar27);
      local_e0 = (float)((double)(float)((double)(float)(dVar26 * dVar20) * dVar16 +
                                        (double)(float)(dVar20 * dVar21 +
                                                       (double)(float)(dVar27 * dVar22 +
                                                                      (double)(float)((double)(float
                                                  )(dVar26 * dVar19) * dVar23 + dVar19)))) * dVar18)
      ;
      dVar27 = (double)fastfunc::FastWrapRot((moby->rotation).z,(float)dVar17);
      local_d8 = 0;
      dVar26 = (double)(float)(dVar25 - dVar27);
      if (dVar27 - (double)(float)(dVar25 - dVar27) < 0.0) {
        dVar26 = dVar27;
      }
      dVar25 = (double)(float)(dVar24 - dVar27);
      if ((double)(float)(dVar24 - dVar27) - dVar26 < 0.0) {
        dVar25 = dVar26;
      }
      dVar24 = (double)(float)(dVar25 * dVar25);
      dVar27 = (double)(float)(dVar24 * (double)(float)(dVar24 * dVar25));
      dVar26 = (double)(float)(dVar24 * dVar27);
      local_dc = (float)((double)(float)((double)(float)(dVar24 * dVar26) * dVar16 +
                                        (double)(float)(dVar26 * dVar21 +
                                                       (double)(float)(dVar27 * dVar22 +
                                                                      (double)(float)((double)(float
                                                  )(dVar24 * dVar25) * dVar23 + dVar25)))) * dVar18)
      ;
      fastfunc::FastVecAdd(&local_d0,lVar12 + 0x10,&local_e0);
      iVar13 = piVar14[1];
      *(undefined4 *)(iVar13 + 0x10) = local_d0;
      *(undefined4 *)(iVar13 + 0x14) = local_cc;
      *(undefined4 *)(iVar13 + 0x18) = local_c8;
      *(undefined4 *)(iVar13 + 0x1c) = local_c4;
      if (dVar18 < 0.5) {
        uVar3 = moby->uid;
        iVar6 = (int)((longlong)((int)(short)uVar3 >> 5) << 2);
        iVar13 = (int)((longlong)((int)(short)uVar3 >> 5) << 2);
        uVar4 = *(uint *)(&DAT_00a54dd0 + iVar13);
        *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar6) =
             *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar6) | 1 << (uVar3 & 0x1f);
        *(uint *)(&DAT_00a54dd0 + iVar13) = uVar4 | 1 << (uVar3 & 0x1f);
        moby->state = '\x04';
      }
    }
  }
  else if (uVar2 == '\x02') {
    iVar13 = camera::camera19::Cam19_IsDone(*piVar14);
    if (iVar13 != 0) {
      dVar27 = -1.5707963705062866;
      dVar16 = (double)fastfunc::FastWrapRot((moby->rotation).z,-1.5707964);
      dVar26 = 3.141592502593994;
      fVar1 = (float)(dVar16 + 1.570796251296997);
      dVar25 = -3.141592502593994;
      dVar24 = -0.16666656732559204;
      dVar23 = 0.008333025500178337;
      dVar22 = -0.0001980741071747616;
      dVar21 = 2.601886990305502e-06;
      dVar16 = 2.0;
      fVar5 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar5 = fVar1;
      }
      fVar7 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
        fVar7 = fVar5;
      }
      fVar8 = fVar7 * fVar7;
      fVar1 = fVar8 * fVar8 * fVar7;
      fVar5 = fVar8 * fVar1;
      dVar17 = (double)fastfunc::FastWrapRot((moby->rotation).z,(float)dVar27);
      dVar18 = (double)(float)(dVar26 - dVar17);
      if (dVar17 - (double)(float)(dVar26 - dVar17) < 0.0) {
        dVar18 = dVar17;
      }
      dVar26 = (double)(float)(dVar25 - dVar17);
      if ((double)(float)(dVar25 - dVar17) - dVar18 < 0.0) {
        dVar26 = dVar18;
      }
      dVar18 = (double)(float)(dVar26 * dVar26);
      dVar19 = (double)(float)(dVar18 * (double)(float)(dVar18 * dVar26));
      dVar17 = (double)(float)(dVar18 * dVar19);
      fastfunc::FastVecAddSelf(auStack_100,local_120,lVar12 + 0x10);
      local_110[3] = 0.0;
      local_110[2] = 0.0;
      local_110[1] = 0.0;
      local_110[0] = 0.0;
      dVar20 = 1.5707963705062866;
      dVar25 = (double)fastfunc::FastWrapRot((moby->rotation).z,1.5707964);
      local_110[2] = (float)dVar25;
      local_110[1] = 1.5707964;
      iVar13 = FUN_0027b170(CONCAT44((fVar8 * fVar5 * 2.601887e-06 +
                                     fVar5 * -0.0001980741 +
                                     fVar1 * 0.0083330255 + fVar8 * fVar7 * -0.16666657 + fVar7) *
                                     2.0,(float)((double)(float)((double)(float)(dVar18 * dVar17) *
                                                                 dVar21 + (double)(float)(dVar17 * 
                                                  dVar22 + (double)(float)(dVar19 * dVar23 +
                                                                          (double)(float)((double)(
                                                  float)(dVar18 * dVar26) * dVar24 + dVar26)))) *
                                                dVar16)),local_114,
                            CONCAT44(local_110[0],(float)dVar20),
                            CONCAT44((float)dVar25,local_110[3]));
      piVar14[2] = 0;
      fVar1 = (moby->rotation).z;
      piVar14[1] = iVar13;
      fastfunc::FastWrapRot(fVar1,(float)dVar27);
      fastfunc::FastWrapRot((moby->rotation).z,(float)dVar27);
      fastfunc::FastVecAddSelf(auStack_f0,local_120,lVar12 + 0x10);
      mobyutil::GetGroundZ(0x3fe0000000000000,local_120,0);
      local_110[3] = 0.0;
      local_110[2] = 0.0;
      local_110[1] = 0.0;
      local_110[0] = 0.0;
      dVar16 = (double)fastfunc::FastWrapRot((moby->rotation).z,(float)dVar20);
      local_110[2] = (float)dVar16;
      hero::Hero_Warp(local_120,local_110,0x72,0);
      if (piVar14[8] != -1) {
        mobyupdate_helpers::M1430_SetCodeBotState_Crates(piVar14[8],1);
      }
      moby->state = '\x03';
    }
  }
  else if (uVar2 == '\x01') {
    if (((MiscLevelFlags.Codebot != false) &&
        (fVar1 = g_heroPosition.y - (moby->pos).y, fVar5 = g_heroPosition.x - (moby->pos).x,
        SQRT(fVar5 * fVar5 + fVar1 * fVar1) < 3.0)) && (g_heroType == '\0')) {
      camera::camera19::Cam19_Enable(*piVar14);
      moby->state = '\x02';
    }
  }
  else if (uVar2 == '\0') {
    uVar3 = moby->uid;
    if (((&DAT_00a545c4)[(short)uVar3] == '\0') &&
       ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar3 >> 5) << 2)) &
        1 << (uVar3 & 0x1f)) == 0)) {
      iVar13 = 0;
      DAT_00a2082c = 0;
      moby->state = '\x01';
      do {
        if (piVar14[8] != -1) {
          mobyupdate_helpers::M1430_SetCodeBotState_Crates(piVar14[8],0);
        }
        iVar13 = iVar13 + 1;
        piVar14 = piVar14 + 1;
      } while (iVar13 < 0x18);
    }
    else {
      moby->state = '\x04';
    }
  }
  return;
}



//==== 0027c5a4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1432_0027c5a4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1432_0027c5a4(void)

{
  DAT_007aa700 = 0x10000;
  return;
}



//==== 0027c5b8  ns=mobyupdate_unsorted  size=0x2c
// sig: undefined UpdateMoby_1432(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1432 */

void mobyupdate_unsorted::UpdateMoby_1432(MobyInstance *moby)

{
  if (moby->state == '\0') {
    moby->state = '\x01';
    moby->enabled = '\0';
    moby->modeBits = moby->modeBits | (NO_UPDATE|DISABLED);
  }
  return;
}



//==== 0027c5f8  ns=mobyupdate_unsorted  size=0x158
// sig: undefined UpdateMoby_{1434_1435}(MobyInstance * moby)
// callers(0): 
// callees(1): 00502578 fastfunc::FastWrapRot

/* Moby 1434
   Moby 1435 */

void mobyupdate_unsorted::UpdateMoby__1434_1435_(MobyInstance *moby)

{
  byte bVar1;
  double dVar2;
  double dVar3;
  
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (1 < bVar1) {
    if (2 < bVar1) {
      return;
    }
    if ((g_deplanetizerUp != 0) && ((moby->rotation).x == 0.0)) {
      dVar3 = (double)(101.6 - (moby->pos).z);
      dVar2 = (double)fastfunc::FastWrapRot((moby->rotation).x,3.1415927);
      (moby->rotation).x = (float)dVar2;
      (moby->pos).z = (float)(dVar3 * 2.0 + (double)(moby->pos).z);
    }
    if (g_gameMode == GAME_MODE_SCENE) {
      return;
    }
    moby->enabled = '\x01';
    moby->state = '\x01';
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
    return;
  }
  if (((g_gameMode == GAME_MODE_SCENE) && (update::g_SceneId == 3)) ||
     ((worldUpdateTime < 5 && ((g_deplanetizerUp != 0 && ((moby->rotation).x == 0.0)))))) {
    moby->enabled = '\0';
    moby->state = '\x02';
    moby->modeBits = moby->modeBits | DISABLED;
  }
  return;
}



//==== 0027c750  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1437(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1437 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1437(MobyInstance *moby)

{
  return moby;
}



//==== 0027c788  ns=mobyupdate_unsorted  size=0x364
// sig: undefined UpdateMoby_1439(MobyInstance * moby)
// callers(0): 
// callees(5): 0015d12c sound::PlayMobySound; 004fff60 fastfunc::FastDecTimerS32; 005010c0 fastfunc::FastNormalizeRMtx4; 00502730 fastfunc::FastIntToDouble; 005027bc fastfunc::FastLerpColor

/* Moby 1439 */

undefined4 * mobyupdate_unsorted::UpdateMoby_1439(MobyInstance *moby)

{
  int iVar1;
  byte bVar2;
  void *pvVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  undefined4 *puVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
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
  
  pvVar3 = moby->pVar;
  iVar1 = (int)(animationSpeed * 30.5);
  dVar12 = (double)fastfunc::FastIntToDouble(worldUpdateTime - (worldUpdateTime / iVar1) * iVar1);
  dVar13 = (double)fastfunc::FastIntToDouble(iVar1);
  fVar5 = (float)(dVar12 / dVar13) * 6.28318 - 3.14159;
  fVar6 = 3.1415925 - fVar5;
  if (fVar5 - (3.1415925 - fVar5) < 0.0) {
    fVar6 = fVar5;
  }
  fVar7 = -3.1415925 - fVar5;
  if ((-3.1415925 - fVar5) - fVar6 < 0.0) {
    fVar7 = fVar6;
  }
  fVar5 = fVar7 * fVar7;
  fVar6 = fVar5 * fVar5 * fVar7;
  fVar8 = fVar5 * fVar6;
  uVar10 = fastfunc::FastLerpColor
                     ((double)((fVar5 * fVar8 * 2.601887e-06 +
                               fVar8 * -0.0001980741 +
                               fVar6 * 0.0083330255 + fVar5 * fVar7 * -0.16666657 + fVar7) * 0.5 +
                              0.5),DAT_007aa740,DAT_007aa744);
  moby->field60_0x90 = uVar10;
  bVar2 = moby->state;
  puVar11 = (undefined4 *)(uint)bVar2;
  if (bVar2 == 0) {
    puVar11 = (undefined4 *)0xff;
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if (bVar2 < 2) {
    fVar5 = (moby->pos).y - g_heroPosition.y;
    fVar6 = (moby->pos).x - g_heroPosition.x;
    fVar7 = (moby->pos).z - g_heroPosition.z;
    puVar11 = &DAT_0027c758;
    if (SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5) < 16.0) {
      fastfunc::FastNormalizeRMtx4(&local_80,(longlong)(int)moby + 0xc0);
      fVar5 = g_heroPosition.y - (moby->pos).y;
      fVar6 = g_heroPosition.x - (moby->pos).x;
      fVar7 = g_heroPosition.z - (moby->pos).z;
      puVar11 = (undefined4 *)&DAT_007b0000;
      fVar9 = local_50 * g_heroPosition.w + local_60 * fVar7 + local_80 * fVar6 + local_70 * fVar5;
      fVar8 = local_4c * g_heroPosition.w + local_5c * fVar7 + local_7c * fVar6 + local_6c * fVar5;
      fVar5 = local_48 * g_heroPosition.w + local_58 * fVar7 + local_78 * fVar6 + local_68 * fVar5;
      if (((((DAT_007aa728 < fVar9) && (puVar11 = &DAT_007aa728, fVar9 < DAT_007aa72c)) &&
           (DAT_007aa730 < fVar8)) && ((fVar8 < DAT_007aa734 && (DAT_007aa738 < fVar5)))) &&
         (fVar5 < DAT_007aa73c)) {
        auVar15 = ZEXT416(0xffffffff);
        auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
        moby->state = '\x02';
        moby->setByGroup = '\x01';
        auVar16 = vectorShiftLeftIntegerWord(auVar15,auVar15);
        auVar15 = loadVectorLeftIndexed(0xffffffffffffa724,0x7b0000);
        auVar14 = vectorConvertFromSignedFixedPointWord(auVar15,0);
        auVar15 = loadVectorLeftIndexed(0x24,0x27c758);
        auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar17 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar15 = vectorAddFloatingPoint
                            (auVar14,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60);
        auVar15 = vectorMultiplyAddFloatingPoint(auVar17,auVar15,auVar16);
        auVar15 = vectorConvertToSignedFixedPointWordSaturate(auVar15,0);
        auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,0,
                           ZEXT48(pvVar3));
        *(undefined4 *)((uint)pvVar3 & 0xfffffffc) = uVar4;
        puVar11 = (undefined4 *)sound::PlayMobySound(1,0,moby);
      }
    }
  }
  else if ((bVar2 < 3) &&
          (puVar11 = (undefined4 *)fastfunc::FastDecTimerS32(ZEXT48(pvVar3)),
          puVar11 != (undefined4 *)0x0)) {
    puVar11 = (undefined4 *)0x1;
    moby->state = '\x01';
    moby->setByGroup = '\0';
  }
  return puVar11;
}



//==== 0027caec  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1440_0027caec(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1440_0027caec(void)

{
  DAT_007aa794 = 0x10000;
  return;
}



//==== 0027cb28  ns=mobyupdate_helpers  size=0x208
// sig: undefined M1440_0027cb28(void)
// callers(1): 0027d4c8 mobyupdate_unsorted::UpdateMoby_1440
// callees(7): 0006d7e0 draw::RegisterPostDraw; 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe788 mobyutil::MB_randVector; 00133580 partupd::SpawnPart_69; 00502730 fastfunc::FastIntToDouble

void mobyupdate_helpers::M1440_0027cb28(void *param_1)

{
  undefined2 uVar1;
  int iVar3;
  undefined8 uVar2;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  Vec4 aVStack_80 [3];
  
  iVar3 = *(int *)((int)param_1 + 0x78);
  iVar6 = iVar3 + 0x1c0;
  mobyfunc::GetBonePosition(param_1,1,iVar6);
  *(float *)(iVar3 + 0x1c8) = *(float *)(iVar3 + 0x1c8) - 0.333;
  mobyutil::MB_randVector(0.004999999888241291,0.029999999329447746,aVStack_80);
  iVar3 = partupd::SpawnPart_69(iVar6,aVStack_80,0x7f,param_1);
  if (iVar3 != 0) {
    dVar7 = (double)mobyutil::MB_randRangeFloat(6000.0,32000.0);
    *(float *)(iVar3 + 0xc) = (float)dVar7;
  }
  dVar7 = 80000.0;
  dVar9 = 120000.0;
  dVar10 = 2.5;
  iVar3 = 0;
  auVar14 = loadVectorLeftIndexed(0x1c,0x27cb00);
  dVar11 = 1.0;
  auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
  do {
    uVar2 = partupd::SpawnPart_69(iVar6,&DAT_00a15d30,0x7f,param_1);
    iVar5 = (int)uVar2;
    if (iVar5 != 0) {
      if ((iVar3 == 2) && (iVar4 = mobyutil::MB_randInt(8), iVar4 == 0)) {
        dVar8 = 180000.0;
      }
      else {
        dVar8 = (double)mobyutil::MB_randRangeFloat((float)dVar7,(float)dVar9);
      }
      auVar12 = ZEXT416(0xffffffff);
      auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
      *(float *)(iVar5 + 0xc) = (float)dVar8;
      auVar12 = vectorShiftLeftIntegerWord(auVar12,auVar12);
      auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      dVar8 = (double)animationSpeed;
      auVar12 = vectorMultiplyAddFloatingPoint(auVar13,auVar14,auVar12);
      auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar12,0);
      auVar12 = vectorSplatHalfWord(auVar12,1);
      uVar1 = storeVectorElementHalfWordIndexed(auVar12,10,uVar2);
      *(undefined2 *)(iVar5 + 10) = uVar1;
      dVar8 = (double)fastfunc::FastIntToDouble((short)(int)(dVar8 * dVar10));
      *(undefined2 *)(iVar5 + 0x36) = 3;
      *(undefined **)(iVar5 + 0x38) = &DAT_007f7f7f;
      *(float *)(iVar5 + 0x30) = (float)(dVar11 / dVar8);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  draw::RegisterPostDraw(&PTR_M1441_0027ecd0_0070a670,param_1);
  return;
}



//==== 0027cd50  ns=mobyupdate_helpers  size=0x70c
// sig: undefined M1440_0027cd50(void)
// callers(1): 0027d4c8 mobyupdate_unsorted::UpdateMoby_1440
// callees(12): 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fe484 mobyutil::MB_randRange; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 001118d8 mobyutil::MB_getTarget; 00111ba0 mobyutil::MB_getTargetInArea; 00288888 FUN_00288888; 004fffb4 fastfunc::FastDecTimerS16

void mobyupdate_helpers::M1440_0027cd50(MobyInstance *param_1)

{
  u8 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  f32 fVar7;
  MobyModeBit MVar8;
  void *pvVar9;
  uint uVar10;
  uint uVar11;
  MobyInstance *pMVar12;
  Spline *pSVar13;
  undefined2 uVar14;
  ulonglong *puVar15;
  int iVar16;
  MobyInstance *pMVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  float *pfVar25;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar26;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f31;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  
  uVar18 = ZEXT48(&stack0x00000000);
  lVar20 = uVar18 - 0xe0;
  puVar15 = (ulonglong *)lVar20;
  *puVar15 = uVar18;
  puVar15[0x1e] = in_LR;
  puVar15[0x1b] = in_f31;
  puVar15[0x1a] = unaff_r31;
  uVar1 = param_1->state;
  puVar15[0x19] = unaff_r30;
  pvVar9 = param_1->pVar;
  uVar26 = ZEXT48(pvVar9);
  puVar15[0x18] = unaff_r29;
  puVar15[0x17] = unaff_r28;
  if (uVar1 != '\0') {
    if (*(int *)((int)pvVar9 + 0x38) != 0) {
      *(undefined4 *)((int)pvVar9 + 0x38) = 0;
      iVar19 = mobyutil::MB_randRange(0xb4,300);
      puVar15[0x15] = (longlong)iVar19;
      puVar15[0x15] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar15[0x15] + 0.5));
      *(short *)((int)pvVar9 + 0x1da) = (short)*(undefined4 *)((int)puVar15 + 0xac);
    }
    fastfunc::FastDecTimerS16(uVar26 + 0x1da);
    dVar31 = 0.0;
    *(undefined4 *)((int)puVar15 + 0x74) = 0;
    iVar19 = mobyutil::MB_damage(param_1,0x330000,0);
    mobyutil::MB_HandleDamage(param_1,iVar19,uVar26 + 0x20,0,puVar15 + 0xe,(int)puVar15 + 0x74,0,4);
    if (((*(int *)(puVar15 + 0xe) != 1) && (param_1->state != '\b')) &&
       (*(int *)((int)puVar15 + 0x74) != 0)) {
      fVar5 = *(float *)((int)pvVar9 + 0x20) - *(float *)((int)puVar15 + 0x74);
      *(undefined4 *)((int)pvVar9 + 0x90) = 0x200;
      *(float *)((int)pvVar9 + 0x20) = fVar5;
      *(undefined4 *)((int)pvVar9 + 0x98) = 0x3f000000;
      fVar6 = DAT_0071f418;
      *(float *)((int)pvVar9 + 0x80) = DAT_007aa7c4 * DAT_0071f418;
      *(float *)((int)pvVar9 + 0x84) = DAT_007aa7c8 * fVar6;
      fVar4 = DAT_007aa7d0;
      fVar3 = DAT_007aa7cc;
      fVar6 = mobyutil::g_FrameTime;
      *(undefined1 *)((int)pvVar9 + 0xad) = 0;
      *(float *)((int)pvVar9 + 0xbc) = fVar6 * 2.0;
      if (dVar31 < (double)fVar5) {
        *(undefined4 *)((int)pvVar9 + 0x94) = 9;
        *(float *)((int)pvVar9 + 0x8c) = fVar4 * fVar6 * 0.5;
        *(float *)((int)pvVar9 + 0x88) = fVar3 * fVar6 * 0.35;
        uVar2 = *(undefined4 *)(iVar19 + 0x18);
        *(undefined4 *)(puVar15 + 6) = *(undefined4 *)(iVar19 + 0x10);
        *(undefined4 *)(puVar15 + 7) = uVar2;
        uVar2 = *(undefined4 *)(iVar19 + 0x1c);
        *(undefined4 *)((int)puVar15 + 0x34) = *(undefined4 *)(iVar19 + 0x14);
        *(undefined4 *)((int)puVar15 + 0x3c) = uVar2;
        mobyutil::MB_VecAtan2Angles(puVar15[6],puVar15[7],uVar18 - 100,uVar26 + 0x88,uVar26 + 0x8c);
        uVar10 = *(uint *)(iVar19 + 0x10);
        uVar11 = *(uint *)(iVar19 + 0x14);
        dVar29 = ABS((double)*(float *)(iVar19 + 0x10));
        dVar30 = ABS((double)*(float *)(iVar19 + 0x14));
        *(float *)(puVar15 + 0x10) = (float)(dVar29 - dVar30);
        uVar21 = (ulonglong)(uVar10 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar15 + 0x10) >> 0x1e) & 2 |
                 (ulonglong)(uVar11 >> 0x1d) & 4;
        lVar22 = uVar21 << 2;
        dVar28 = dVar29;
        if ((double)*(float *)(puVar15 + 0x10) - dVar31 < 0.0) {
          dVar28 = dVar30;
        }
        fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)lVar22);
        fVar5 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
        if ((double)*(float *)(puVar15 + 0x10) - dVar31 < 0.0) {
          dVar30 = dVar29;
        }
        if (dVar31 < dVar28) {
          lVar24 = uVar18 - 0xd0;
          lVar22 = uVar18 - 0x4c;
          lVar23 = uVar18 - 0x5c;
          lVar27 = 2;
          fVar3 = (float)(dVar30 - dVar28) / (float)(dVar30 + dVar28);
          fVar4 = fVar3 * fVar3;
          *(float *)(puVar15 + 0x12) = fVar3;
          *(float *)(puVar15 + 0x11) = fVar3;
          *(float *)((int)puVar15 + 0x8c) = fVar3;
          *(float *)((int)puVar15 + 0x84) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)(puVar15 + 0x11) = *(float *)(puVar15 + 0x11) * fVar4;
          *(float *)((int)puVar15 + 0x8c) = *(float *)((int)puVar15 + 0x8c) * fVar3;
          *(float *)(puVar15 + 0x12) = *(float *)(puVar15 + 0x12) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar24 + 0x84) = *(float *)((int)lVar24 + 0x74) * fVar3 * fVar3;
            iVar19 = (int)lVar23;
            lVar23 = lVar23 + 8;
            lVar24 = lVar24 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)(iVar19 + 4) * fVar3 * fVar3;
            lVar22 = lVar22 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar22 = uVar18 - 0x5c;
          lVar27 = 4;
          pfVar25 = (float *)&DAT_007358e0;
          lVar23 = lVar22;
          lVar24 = lVar20;
          do {
            fVar3 = *pfVar25;
            fVar4 = pfVar25[1];
            pfVar25 = pfVar25 + 2;
            *(float *)((int)lVar24 + 0x84) = *(float *)((int)lVar24 + 0x84) * fVar3;
            lVar24 = lVar24 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar4;
            lVar23 = lVar23 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar23 = 2;
          do {
            iVar19 = (int)lVar20;
            iVar16 = (int)lVar22;
            lVar20 = lVar20 + 0x10;
            lVar22 = lVar22 + 0x10;
            dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar19 + 0x84)) +
                              *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                             *(float *)(iVar16 + 0xc));
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar6 + fVar5);
        }
        mobyutil::MB_StartKick(dVar31,param_1,uVar26 + 0x70,lVar22,8,1,0);
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        *(undefined4 *)((int)pvVar9 + 0xc0) = 0xbf800000;
        *(undefined4 *)((int)pvVar9 + 0xc4) = 0xbf800000;
        param_1->state = '\a';
        auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        *(undefined1 *)((int)pvVar9 + 0x67) = 0xfa;
        auVar32 = loadVectorLeftIndexed(0x14,0x27cd30);
        auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar32 = vectorMultiplyAddFloatingPoint
                            (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                             auVar33);
        auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
        auVar32 = vectorSplatHalfWord(auVar32,1);
        uVar14 = storeVectorElementHalfWordIndexed(auVar32,0x26,uVar26);
        *(undefined2 *)((int)pvVar9 + 0x26) = uVar14;
        mobyutil::MB_UpdateLightsTransition(param_1,uVar26 + 0x60);
      }
      else {
        *(float *)((int)pvVar9 + 0x8c) = fVar4 * fVar6;
        *(float *)((int)pvVar9 + 0x88) = fVar3 * fVar6;
        MVar8 = param_1->modeBits;
        *(undefined4 *)((int)pvVar9 + 0x94) = 0x29;
        param_1->modeBits =
             MVar8 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        uVar2 = *(undefined4 *)(iVar19 + 0x18);
        *(undefined4 *)(puVar15 + 6) = *(undefined4 *)(iVar19 + 0x10);
        *(undefined4 *)(puVar15 + 7) = uVar2;
        uVar2 = *(undefined4 *)(iVar19 + 0x1c);
        *(undefined4 *)((int)puVar15 + 0x34) = *(undefined4 *)(iVar19 + 0x14);
        *(undefined4 *)((int)puVar15 + 0x3c) = uVar2;
        mobyutil::MB_VecAtan2Angles(puVar15[6],puVar15[7],uVar18 - 0x68,uVar26 + 0x88,uVar26 + 0x8c)
        ;
        mobyutil::MB_StartKick((double)*(float *)(puVar15 + 0xf),param_1,uVar26 + 0x70);
        *(undefined4 *)((int)pvVar9 + 0xc0) = 0x40e00000;
        param_1->collision = (ushort *)0x0;
        *(undefined4 *)((int)pvVar9 + 0xc4) = 0x41800000;
        param_1->state = '\b';
        *(undefined1 *)((int)pvVar9 + 0x67) = 0x78;
        mobyutil::MB_UpdateLightsTransition(param_1,uVar26 + 0x60);
        mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
      }
      FUN_00288888(param_1);
    }
    param_1->damage = -1;
    mobyutil::MB_ColorDyingMoby(param_1,uVar26 + 0x60);
    if (param_1->state == '\x01') {
      pSVar13 = Splines[*(int *)((int)pvVar9 + 0x1b4)];
      mobyutil::MB_getTargetInArea
                (0x4050000000000000,param_1,uVar26 + 0xd0,pSVar13,0,0,pSVar13->points,pSVar13->cnt);
    }
    else if (param_1->state != '\x05') {
      fVar5 = DAT_007aa7c0;
      if (*(short *)((int)pvVar9 + 0x1da) != 0) {
        fVar5 = 37.0;
      }
      dVar31 = (double)fVar5;
      iVar19 = mobyutil::MB_getTarget(dVar31,param_1);
      if ((iVar19 != 2) &&
         (fVar5 = (param_1->pos).y - *(float *)((int)pvVar9 + 0xd4),
         fVar6 = (param_1->pos).x - *(float *)((int)pvVar9 + 0xd0),
         dVar31 < (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5))) {
        *(undefined4 *)((int)pvVar9 + 0x114) = 2;
      }
    }
    pMVar17 = g_heroMobyPtr;
    pMVar12 = *(MobyInstance **)((int)pvVar9 + 0x110);
    if (*(MobyInstance **)((int)pvVar9 + 0x110) == (MobyInstance *)0x0) {
      *(float *)((int)pvVar9 + 0xd0) = g_heroPosition.x;
      fVar5 = g_heroPosition.y;
      *(MobyInstance **)((int)pvVar9 + 0x110) = pMVar17;
      *(float *)((int)pvVar9 + 0xd4) = fVar5;
      *(float *)((int)pvVar9 + 0xd8) = g_heroPosition.z;
      *(float *)((int)pvVar9 + 0xdc) = g_heroPosition.w;
      pMVar12 = pMVar17;
    }
    if (-1 < *(int *)((int)pvVar9 + 0x1bc)) {
      pMVar17 = MobyInstance + *(int *)((int)pvVar9 + 0x1bc);
      if (((pMVar17 == (MobyInstance *)0x0) || (pMVar17->state == 0xfe)) || (pMVar17->state == 0xfd)
         ) {
        *(undefined4 *)((int)pvVar9 + 0x1bc) = 0xffffffff;
      }
      else {
        fVar5 = (param_1->pos).y;
        fVar3 = fVar5 - (pMVar17->pos).y;
        fVar6 = (param_1->pos).x;
        fVar5 = fVar5 - (pMVar12->pos).y;
        fVar4 = fVar6 - (pMVar17->pos).x;
        fVar6 = fVar6 - (pMVar12->pos).x;
        if (SQRT(fVar4 * fVar4 + fVar3 * fVar3) < SQRT(fVar6 * fVar6 + fVar5 * fVar5)) {
          *(MobyInstance **)((int)pvVar9 + 0x110) = pMVar17;
          *(f32 *)((int)pvVar9 + 0xd0) = (pMVar17->pos).x;
          *(f32 *)((int)pvVar9 + 0xd4) = (pMVar17->pos).y;
          *(f32 *)((int)pvVar9 + 0xd8) = (pMVar17->pos).z;
          fVar7 = (pMVar17->pos).w;
          *(undefined4 *)((int)pvVar9 + 0x114) = 1;
          *(f32 *)((int)pvVar9 + 0xdc) = fVar7;
        }
      }
    }
  }
  return;
}



//==== 0027d4c8  ns=mobyupdate_unsorted  size=0x17f4
// sig: undefined UpdateMoby_1440(MobyInstance * moby)
// callers(0): 
// callees(23): 00057820 collproc::CollLine; 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f1038 mobyfunc::GetBoneTransformations; 000fc620 mobyutil::MB_randInt; 000fddc0 mobyutil::MB_SetAnimation; 00106360 mobyutil::MB_SetZBoundsFromGround; 00109c30 mobyutil::OrganicDelt; 0010a2e0 mobyutil::OrganicDeltAng; 0010b030 mobyutil::MB_UpdateKick; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 001167c8 mobyutil::MB_UpdateManipulatorRot; 00119ac0 mobyutil::MB_SetScaleCheat; 0011a560 mobyutil::MB_SpawnDebrisMoby; 0011aa78 mobyutil::MB_SpawnDebris; 0027cb28 mobyupdate_helpers::M1440_0027cb28; 0027cd50 mobyupdate_helpers::M1440_0027cd50; 00288730 FUN_00288730; 00288888 FUN_00288888; 00288958 FUN_00288958; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502758 fastfunc::FastDoubleToInt
// strings: 0096c074: 'None'

/* Moby 1440 */

void mobyupdate_unsorted::UpdateMoby_1440(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  u8 uVar3;
  f32 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  f32 fVar8;
  float fVar9;
  MOBY_OCLASSES MVar10;
  short sVar11;
  void *pvVar12;
  Spline *pSVar13;
  ulonglong *puVar14;
  int iVar15;
  Vec4 *pVVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  bool bVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined1 uVar25;
  int iVar23;
  uint uVar24;
  undefined4 *unused;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  float *pfVar30;
  longlong lVar29;
  longlong lVar31;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  ulonglong in_f27;
  double dVar37;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar38;
  ulonglong in_f30;
  double dVar39;
  double dVar40;
  ulonglong in_f31;
  double dVar41;
  undefined8 uVar42;
  float fVar43;
  
  lVar22 = (longlong)(int)moby;
  uVar21 = ZEXT48(&stack0x00000000);
  lVar28 = uVar21 - 0x260;
  puVar14 = (ulonglong *)lVar28;
  *puVar14 = uVar21;
  puVar14[0x4e] = in_LR;
  puVar14[0x47] = in_f27;
  puVar14[0x48] = in_f28;
  puVar14[0x49] = in_f29;
  puVar14[0x4a] = in_f30;
  puVar14[0x4b] = in_f31;
  puVar14[0x46] = unaff_r31;
  puVar14[0x44] = unaff_r29;
  puVar14[0x45] = unaff_r30;
  puVar14[0x43] = unaff_r28;
  puVar14[0x42] = unaff_r27;
  puVar14[0x41] = unaff_r26;
  pvVar12 = moby->pVar;
  mobyupdate_helpers::M1440_0027cd50(lVar22);
  iVar23 = *(int *)((int)pvVar12 + 0x110);
  mobyutil::MB_SetScaleCheat(0x4004000000000000,(int)pvVar12 + 0x120);
  if (Cheats[7] != '\0') {
    mobyutil::MB_UpdateManipulatorRot
              ((double)(DAT_0071f40c * 0.03),(double)(DAT_0071f40c * 0.3),lVar22,
               (int)pvVar12 + 0x120,2);
  }
  if ((moby->enabled != '\0') &&
     (fVar43 = (moby->pos).y - GameCamera.posY, fVar6 = (moby->pos).x - GameCamera.posX,
     fVar7 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar43 * fVar43) < 27.0)) {
    mobyutil::MB_SetZBoundsFromGround(lVar22);
    moby->shadow = '\x15';
  }
  bVar1 = moby->state;
  if (3 < bVar1) {
    if (bVar1 < 7) {
      if (bVar1 < 5) {
        fVar43 = *(float *)(iVar23 + 0x10) - (moby->pos).x;
        fVar6 = *(float *)(iVar23 + 0x14) - (moby->pos).y;
        fVar7 = ABS(fVar43);
        fVar5 = ABS(fVar6);
        *(float *)((int)puVar14 + 300) = fVar43;
        *(float *)(puVar14 + 0x26) = fVar6;
        *(float *)((int)puVar14 + 0x134) = fVar7 - fVar5;
        fVar43 = 0.0;
        uVar26 = (ulonglong)(*(uint *)((int)puVar14 + 300) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0x134) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar14 + 0x26) >> 0x1d) & 4;
        fVar6 = ABS(*(float *)((int)puVar14 + 300));
        if (*(float *)((int)puVar14 + 0x134) - 0.0 < 0.0) {
          fVar6 = fVar5;
        }
        fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
        fVar5 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
        fVar17 = ABS(*(float *)(puVar14 + 0x26));
        if (*(float *)((int)puVar14 + 0x134) - 0.0 < 0.0) {
          fVar17 = fVar7;
        }
        if (0.0 < fVar6) {
          lVar27 = uVar21 - 0x250;
          lVar29 = uVar21 - 0xd0;
          lVar31 = uVar21 - 0xc0;
          lVar32 = 2;
          fVar6 = (fVar17 - fVar6) / (fVar17 + fVar6);
          fVar7 = fVar6 * fVar6;
          *(float *)((int)puVar14 + 0x19c) = fVar6;
          *(float *)((int)puVar14 + 0x194) = fVar6;
          *(float *)(puVar14 + 0x33) = fVar6;
          *(float *)(puVar14 + 0x32) = fVar6;
          fVar6 = fVar7 * fVar7;
          *(float *)((int)puVar14 + 0x194) = *(float *)((int)puVar14 + 0x194) * fVar7;
          *(float *)(puVar14 + 0x33) = *(float *)(puVar14 + 0x33) * fVar6;
          *(float *)((int)puVar14 + 0x19c) = *(float *)((int)puVar14 + 0x19c) * fVar6 * fVar7;
          do {
            *(float *)((int)lVar27 + 400) = *(float *)((int)lVar27 + 0x180) * fVar6 * fVar6;
            iVar23 = (int)lVar29;
            lVar27 = lVar27 + 8;
            lVar29 = lVar29 + 8;
            *(float *)((int)lVar31 + 4) = *(float *)(iVar23 + 4) * fVar6 * fVar6;
            lVar31 = lVar31 + 8;
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
          lVar32 = 4;
          lVar31 = uVar21 - 0xd0;
          pfVar30 = (float *)&DAT_007358e0;
          lVar27 = lVar28;
          lVar29 = lVar31;
          do {
            fVar6 = *pfVar30;
            fVar7 = pfVar30[1];
            pfVar30 = pfVar30 + 2;
            *(float *)((int)lVar27 + 400) = *(float *)((int)lVar27 + 400) * fVar6;
            lVar27 = lVar27 + 8;
            *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar7;
            lVar29 = lVar29 + 8;
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
          lVar27 = 2;
          do {
            iVar23 = (int)lVar28;
            iVar15 = (int)lVar31;
            lVar28 = lVar28 + 0x10;
            lVar31 = lVar31 + 0x10;
            fVar43 = fVar43 + *(float *)(iVar23 + 400) + *(float *)(iVar15 + 4) +
                     *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc);
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          fVar43 = (fVar43 + 0.7853982) * fVar9 + fVar5;
        }
        mobyutil::OrganicDeltAng
                  (fVar43,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                   mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x27d45c,
                   (float *)((int)pvVar12 + 0x1d0));
        if ((moby->field43_0x70 & 2U) != 0) {
          *(undefined2 *)((int)pvVar12 + 0x1d8) = 0;
          moby->state = '\x05';
          if (moby->animationId != '\x06') {
            puVar14[0x3e] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar22,6,0,*(undefined4 *)((int)puVar14 + 500));
          }
        }
      }
      else if (bVar1 < 6) {
        fVar43 = *(float *)((int)pvVar12 + 0xd0) - (moby->pos).x;
        fVar6 = *(float *)((int)pvVar12 + 0xd4) - (moby->pos).y;
        fVar5 = ABS(fVar43);
        fVar7 = ABS(fVar6);
        *(float *)(puVar14 + 0x24) = fVar43;
        *(float *)((int)puVar14 + 0x124) = fVar6;
        *(float *)(puVar14 + 0x25) = fVar5 - fVar7;
        dVar37 = 0.0;
        uVar26 = (ulonglong)(*(uint *)(puVar14 + 0x24) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar14 + 0x25) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0x124) >> 0x1d) & 4;
        fVar43 = ABS(*(float *)(puVar14 + 0x24));
        if (*(float *)(puVar14 + 0x25) - 0.0 < 0.0) {
          fVar43 = fVar7;
        }
        fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
        fVar6 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
        fVar9 = ABS(*(float *)((int)puVar14 + 0x124));
        if (*(float *)(puVar14 + 0x25) - 0.0 < 0.0) {
          fVar9 = fVar5;
        }
        dVar38 = dVar37;
        if (0.0 < fVar43) {
          lVar27 = uVar21 - 0x250;
          lVar31 = uVar21 - 0xe0;
          lVar29 = uVar21 - 0xf0;
          lVar32 = 2;
          fVar43 = (fVar9 - fVar43) / (fVar9 + fVar43);
          fVar5 = fVar43 * fVar43;
          *(float *)((int)puVar14 + 0x17c) = fVar43;
          *(float *)((int)puVar14 + 0x174) = fVar43;
          *(float *)(puVar14 + 0x2f) = fVar43;
          *(float *)(puVar14 + 0x2e) = fVar43;
          fVar43 = fVar5 * fVar5;
          *(float *)((int)puVar14 + 0x174) = *(float *)((int)puVar14 + 0x174) * fVar5;
          *(float *)(puVar14 + 0x2f) = *(float *)(puVar14 + 0x2f) * fVar43;
          *(float *)((int)puVar14 + 0x17c) = *(float *)((int)puVar14 + 0x17c) * fVar43 * fVar5;
          do {
            *(float *)((int)lVar27 + 0x170) = *(float *)((int)lVar27 + 0x160) * fVar43 * fVar43;
            iVar23 = (int)lVar29;
            lVar29 = lVar29 + 8;
            lVar27 = lVar27 + 8;
            *(float *)((int)lVar31 + 4) = *(float *)(iVar23 + 4) * fVar43 * fVar43;
            lVar31 = lVar31 + 8;
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
          lVar32 = 4;
          lVar31 = uVar21 - 0xf0;
          pfVar30 = (float *)&DAT_007358e0;
          lVar27 = lVar28;
          lVar29 = lVar31;
          do {
            fVar43 = *pfVar30;
            fVar5 = pfVar30[1];
            pfVar30 = pfVar30 + 2;
            *(float *)((int)lVar27 + 0x170) = *(float *)((int)lVar27 + 0x170) * fVar43;
            lVar27 = lVar27 + 8;
            *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar5;
            lVar29 = lVar29 + 8;
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
          lVar27 = 2;
          do {
            iVar23 = (int)lVar28;
            iVar15 = (int)lVar31;
            lVar28 = lVar28 + 0x10;
            lVar31 = lVar31 + 0x10;
            dVar38 = (double)((float)(dVar38 + (double)*(float *)(iVar23 + 0x170)) +
                              *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                             *(float *)(iVar15 + 0xc));
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          dVar38 = (double)((float)(dVar38 + 0.7853981852531433) * fVar7 + fVar6);
        }
        if ((moby->modeBits & MIRROR) == NONE) {
          dVar38 = (double)fastfunc::FastDiffRots(dVar38,(double)DAT_007aa7dc);
        }
        else {
          dVar38 = (double)fastfunc::FastWrapRot((float)dVar38,DAT_007aa7dc);
        }
        fVar43 = mobyutil::OrganicDeltAng
                           ((float)dVar38,DAT_0071f418 * 1.5707964,DAT_0071f418 * 1.5707964,
                            mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                            (float *)((int)pvVar12 + 0x1d0));
        mobyfunc::GetBoneTransformations((double)fVar43,lVar22,0,uVar21 - 400);
        fVar43 = (moby->transform).v0.y;
        fVar6 = (moby->transform).v0.x;
        dVar38 = (double)DAT_007aa7d4;
        *(undefined4 *)(puVar14 + 0x11) = *(undefined4 *)(puVar14 + 0x21);
        dVar33 = (double)SQRT(fVar6 * fVar6 + fVar43 * fVar43);
        fVar7 = (moby->rotation).z;
        *(undefined4 *)((int)puVar14 + 0x8c) = *(undefined4 *)((int)puVar14 + 0x10c);
        *(MobyInstance **)(puVar14 + 0x16) = moby;
        *(undefined4 *)((int)puVar14 + 0xb4) = 0x10000;
        *(undefined4 *)(puVar14 + 0x18) = 1;
        bVar20 = false;
        uVar2 = moby->updateId;
        uVar3 = moby->animationId;
        MVar10 = moby->oClass;
        dVar39 = (double)(fVar43 * (float)(dVar38 / dVar33));
        dVar41 = (double)(fVar6 * (float)(dVar38 / dVar33));
        dVar38 = dVar37;
        if (dVar37 - dVar33 < 0.0) {
          dVar38 = dVar39;
        }
        dVar35 = dVar37;
        if (dVar37 - dVar33 < 0.0) {
          dVar35 = dVar41;
        }
        if (dVar33 - dVar37 < 0.0) {
          dVar38 = dVar39;
        }
        if (dVar33 - dVar37 < 0.0) {
          dVar35 = dVar41;
        }
        *(float *)((int)puVar14 + 0x84) = (float)((double)*(float *)((int)puVar14 + 0x104) + dVar38)
        ;
        *(float *)(puVar14 + 0x10) = (float)((double)*(float *)(puVar14 + 0x20) + dVar35);
        dVar37 = 1.0;
        *(undefined4 *)((int)puVar14 + 0xbc) = 0x3f800000;
        fVar43 = fVar7 + 1.5707963;
        fVar6 = 3.1415925 - fVar7;
        if (fVar7 - (3.1415925 - fVar7) < 0.0) {
          fVar6 = fVar7;
        }
        fVar5 = 3.1415925 - fVar43;
        if (fVar43 - (3.1415925 - fVar43) < 0.0) {
          fVar5 = fVar43;
        }
        fVar9 = -3.1415925 - fVar7;
        if ((-3.1415925 - fVar7) - fVar6 < 0.0) {
          fVar9 = fVar6;
        }
        *(undefined4 *)(puVar14 + 0x15) = 0x3f800000;
        *(undefined4 *)((int)puVar14 + 0xac) = 0x45afdf66;
        *(undefined1 *)(puVar14 + 0x17) = 0;
        fVar6 = -3.1415925 - fVar43;
        if ((-3.1415925 - fVar43) - fVar5 < 0.0) {
          fVar6 = fVar5;
        }
        fVar43 = fVar9 * fVar9;
        *(undefined1 *)((int)puVar14 + 0xb9) = 1;
        *(MOBY_OCLASSES *)((int)puVar14 + 0xba) = MVar10;
        fVar7 = fVar6 * fVar6;
        fVar18 = fVar43 * fVar43 * fVar9;
        fVar5 = fVar7 * fVar7 * fVar6;
        fVar19 = fVar43 * fVar18;
        fVar17 = fVar7 * fVar5;
        *(float *)((int)puVar14 + 0xa4) =
             fVar43 * fVar19 * 2.601887e-06 +
             fVar19 * -0.0001980741 + fVar18 * 0.0083330255 + fVar43 * fVar9 * -0.16666657 + fVar9;
        *(float *)(puVar14 + 0x14) =
             fVar7 * fVar17 * 2.601887e-06 +
             fVar17 * -0.0001980741 + fVar5 * 0.0083330255 + fVar7 * fVar6 * -0.16666657 + fVar6;
        if ((uVar2 == uVar3) && (dVar38 = (double)mobyfunc::BlendAnimFrame(moby), dVar37 < dVar38))
        {
          bVar20 = true;
          *(uint *)((int)puVar14 + 0xb4) = *(uint *)((int)puVar14 + 0xb4) | 1;
        }
        fVar4 = (moby->pos).y;
        *(f32 *)(puVar14 + 0x12) = (moby->pos).x;
        fVar8 = (moby->pos).w;
        *(f32 *)((int)puVar14 + 0x94) = fVar4;
        *(f32 *)((int)puVar14 + 0x9c) = fVar8;
        *(float *)(puVar14 + 0x13) = (moby->pos).z + 0.5;
        iVar23 = collproc::CollLine(uVar21 - 0x160,uVar21 - 0x1d0,0,lVar22,uVar21 - 0x1c0);
        if (((iVar23 != 0) && (bVar20)) && (CollOutput.pMoby == g_heroMobyPtr)) {
          FUN_00288888(lVar22);
          moby->state = '\x06';
          if (moby->animationId != '\a') {
            puVar14[0x3e] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar22,7,0,*(undefined4 *)((int)puVar14 + 500));
          }
        }
        iVar23 = collproc::CollLine(uVar21 - 0x160,uVar21 - 0x1e0,0,lVar22,uVar21 - 0x1c0);
        fVar43 = CollOutput.ip.y;
        if (iVar23 != 0) {
          *(float *)(puVar14 + 0x10) = CollOutput.ip.x;
          fVar6 = CollOutput.ip.z;
          *(float *)((int)puVar14 + 0x84) = fVar43;
          fVar43 = CollOutput.ip.w;
          *(float *)(puVar14 + 0x11) = fVar6;
          *(float *)((int)puVar14 + 0x8c) = fVar43;
          if ((bVar20) && (CollOutput.pMoby == g_heroMobyPtr)) {
            FUN_00288888(lVar22);
            moby->state = '\x06';
            if (moby->animationId != '\a') {
              puVar14[0x3e] = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar22,7,0,*(undefined4 *)((int)puVar14 + 500));
            }
          }
        }
        FUN_00288958(lVar22,uVar21 - 400,uVar21 - 0x1e0);
        if (((moby->field43_0x70 & 2U) != 0) &&
           (sVar11 = *(short *)((int)pvVar12 + 0x1d8), *(short *)((int)pvVar12 + 0x1d8) = sVar11 + 1
           , sVar11 == DAT_007aa7d8)) {
          FUN_00288888(lVar22);
          moby->state = '\x06';
          if (moby->animationId != '\f') {
            puVar14[0x3e] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar22,0xc,0,*(undefined4 *)((int)puVar14 + 500));
          }
        }
      }
      else {
        fVar43 = *(float *)(iVar23 + 0x10) - (moby->pos).x;
        fVar6 = *(float *)(iVar23 + 0x14) - (moby->pos).y;
        fVar7 = ABS(fVar43);
        fVar5 = ABS(fVar6);
        *(float *)((int)puVar14 + 0x114) = fVar43;
        *(float *)(puVar14 + 0x23) = fVar6;
        *(float *)((int)puVar14 + 0x11c) = fVar7 - fVar5;
        fVar43 = 0.0;
        uVar26 = (ulonglong)(*(uint *)((int)puVar14 + 0x114) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0x11c) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar14 + 0x23) >> 0x1d) & 4;
        fVar6 = ABS(*(float *)((int)puVar14 + 0x114));
        if (*(float *)((int)puVar14 + 0x11c) - 0.0 < 0.0) {
          fVar6 = fVar5;
        }
        fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
        fVar5 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
        fVar17 = ABS(*(float *)(puVar14 + 0x23));
        if (*(float *)((int)puVar14 + 0x11c) - 0.0 < 0.0) {
          fVar17 = fVar7;
        }
        if (0.0 < fVar6) {
          lVar27 = uVar21 - 0x250;
          lVar31 = uVar21 - 0x100;
          lVar29 = uVar21 - 0x110;
          lVar32 = 2;
          fVar6 = (fVar17 - fVar6) / (fVar17 + fVar6);
          fVar7 = fVar6 * fVar6;
          *(float *)((int)puVar14 + 0x15c) = fVar6;
          *(float *)((int)puVar14 + 0x154) = fVar6;
          *(float *)(puVar14 + 0x2b) = fVar6;
          *(float *)(puVar14 + 0x2a) = fVar6;
          fVar6 = fVar7 * fVar7;
          *(float *)((int)puVar14 + 0x154) = *(float *)((int)puVar14 + 0x154) * fVar7;
          *(float *)(puVar14 + 0x2b) = *(float *)(puVar14 + 0x2b) * fVar6;
          *(float *)((int)puVar14 + 0x15c) = *(float *)((int)puVar14 + 0x15c) * fVar6 * fVar7;
          do {
            *(float *)((int)lVar27 + 0x150) = *(float *)((int)lVar27 + 0x140) * fVar6 * fVar6;
            iVar23 = (int)lVar29;
            lVar29 = lVar29 + 8;
            lVar27 = lVar27 + 8;
            *(float *)((int)lVar31 + 4) = *(float *)(iVar23 + 4) * fVar6 * fVar6;
            lVar31 = lVar31 + 8;
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
          lVar32 = 4;
          lVar31 = uVar21 - 0x110;
          pfVar30 = (float *)&DAT_007358e0;
          lVar27 = lVar28;
          lVar29 = lVar31;
          do {
            fVar6 = *pfVar30;
            fVar7 = pfVar30[1];
            pfVar30 = pfVar30 + 2;
            *(float *)((int)lVar27 + 0x150) = *(float *)((int)lVar27 + 0x150) * fVar6;
            lVar27 = lVar27 + 8;
            *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar7;
            lVar29 = lVar29 + 8;
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
          lVar27 = 2;
          do {
            iVar23 = (int)lVar28;
            lVar28 = lVar28 + 0x10;
            iVar15 = (int)lVar31;
            lVar31 = lVar31 + 0x10;
            fVar43 = fVar43 + *(float *)(iVar23 + 0x150) + *(float *)(iVar15 + 4) +
                     *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc);
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          fVar43 = (fVar43 + 0.7853982) * fVar9 + fVar5;
        }
        mobyutil::OrganicDeltAng
                  (fVar43,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                   mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x27d45c,
                   (float *)((int)pvVar12 + 0x1d0));
        if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x03', moby->animationId != '\x01'))
        {
          puVar14[0x3e] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar22,1,0,*(undefined4 *)((int)puVar14 + 500));
        }
      }
    }
    else if (bVar1 < 8) {
      uVar24 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar12 + 0x70));
      if (((uVar24 & 0x140) != 0) && (moby->state = '\x03', moby->animationId != '\x01')) {
        puVar14[0x3e] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar22,1,0,*(undefined4 *)((int)puVar14 + 500));
      }
    }
    else if ((bVar1 < 9) &&
            (uVar24 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar12 + 0x70)),
            (uVar24 & 0x140) != 0)) {
      lVar27 = lVar22 + 0x10;
      mobyutil::MB_SpawnExplosionSparks(0x3fe8000000000000,0x402a000000000000,lVar22,lVar27);
      mobyutil::MB_SpawnDebris(lVar22,0x7ab,1,0x7ab,1,4,0);
      uVar42 = 0;
      lVar28 = lVar22 + 0x40;
      puVar14[0xe] = ZEXT48(&DAT_00a15d30);
      puVar14[0xf] = ZEXT48(&DAT_00a15d30);
      mobyutil::MB_SpawnDebrisMoby(0,lVar22,0x78d,lVar27,lVar28,0,0);
      puVar14[0xe] = ZEXT48(&DAT_00a15d30);
      puVar14[0xf] = ZEXT48(&DAT_00a15d30);
      mobyutil::MB_SpawnDebrisMoby(uVar42,lVar22,0x78e,lVar27,lVar28,0,0);
      puVar14[0xe] = ZEXT48(&DAT_00a15d30);
      puVar14[0xf] = ZEXT48(&DAT_00a15d30);
      mobyutil::MB_SpawnDebrisMoby(uVar42,lVar22,0x78f,lVar27,lVar28,0,0);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    goto LAB_0027ec78;
  }
  if (bVar1 == 0) {
    *(f32 *)((int)pvVar12 + 0x1a0) = (moby->pos).x;
    *(f32 *)((int)pvVar12 + 0x1a4) = (moby->pos).y;
    *(f32 *)((int)pvVar12 + 0x1a8) = (moby->pos).z;
    fVar4 = (moby->pos).w;
    *(undefined4 *)((int)pvVar12 + 0x20) = 0x40000000;
    *(f32 *)((int)pvVar12 + 0x1ac) = fVar4;
    *(undefined2 *)((int)pvVar12 + 0x24) = 2;
    *(undefined1 *)((int)pvVar12 + 0x28) = 1;
    *(undefined1 *)((int)pvVar12 + 0x29) = 0;
    uVar25 = fastfunc::FastDoubleToInt(0x402c000000000000);
    *(undefined1 *)((int)pvVar12 + 0x58) = uVar25;
    uVar25 = fastfunc::FastDoubleToInt(0x4020000000000000);
    *(undefined1 *)((int)pvVar12 + 0x5a) = uVar25;
    *(undefined4 *)((int)pvVar12 + 0x1dc) = 1;
    iVar23 = mobyutil::MB_randInt(2);
    uVar2 = moby->animationId;
    if (iVar23 != 0) {
      moby->modeBits = moby->modeBits | MIRROR;
    }
    if (*(int *)((int)pvVar12 + 0x1b8) < 0) {
      moby->state = '\x03';
      if (uVar2 != '\x01') {
        mobyutil::MB_SetAnimation(lVar22,1,0,5);
      }
    }
    else {
      if (*(int *)((int)pvVar12 + 0x1b4) == -1) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      pSVar13 = Splines[*(int *)((int)pvVar12 + 0x1b8)];
      (moby->pos).x = pSVar13->points[0].x;
      (moby->pos).y = pSVar13->points[0].y;
      (moby->pos).z = pSVar13->points[0].z;
      fVar43 = pSVar13->points[0].w;
      moby->state = '\x01';
      (moby->pos).w = fVar43;
      if (uVar2 != '\x01') {
        mobyutil::MB_SetAnimation(lVar22,1,0,5);
      }
    }
    goto LAB_0027ec78;
  }
  if (1 < bVar1) {
    if (bVar1 < 3) {
      dVar37 = 0.0;
      *(undefined4 *)(puVar14 + 0x22) = 0;
      iVar23 = *(int *)((int)pvVar12 + 0x1dc);
      pSVar13 = Splines[*(int *)((int)pvVar12 + 0x1b8)];
      dVar41 = (double)pSVar13->points[iVar23].x;
      dVar39 = (double)pSVar13->points[iVar23].y;
      fVar43 = (float)(dVar41 - (double)(moby->pos).x);
      dVar38 = (double)pSVar13->points[iVar23].z;
      fVar6 = (float)(dVar39 - (double)(moby->pos).y);
      fVar5 = ABS(fVar43);
      fVar7 = ABS(fVar6);
      *(float *)((int)puVar14 + 0x144) = fVar43;
      *(float *)(puVar14 + 0x29) = fVar6;
      *(float *)((int)puVar14 + 0x14c) = fVar5 - fVar7;
      uVar26 = (ulonglong)(*(uint *)((int)puVar14 + 0x144) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar14 + 0x14c) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar14 + 0x29) >> 0x1d) & 4;
      fVar43 = ABS(*(float *)((int)puVar14 + 0x144));
      if (*(float *)((int)puVar14 + 0x14c) - 0.0 < 0.0) {
        fVar43 = fVar7;
      }
      fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
      fVar6 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
      fVar9 = ABS(*(float *)(puVar14 + 0x29));
      if (*(float *)((int)puVar14 + 0x14c) - 0.0 < 0.0) {
        fVar9 = fVar5;
      }
      dVar33 = dVar37;
      if (0.0 < fVar43) {
        lVar27 = uVar21 - 0x250;
        lVar29 = uVar21 - 0x90;
        lVar31 = uVar21 - 0x80;
        lVar32 = 2;
        fVar43 = (fVar9 - fVar43) / (fVar9 + fVar43);
        fVar5 = fVar43 * fVar43;
        *(float *)((int)puVar14 + 0x1dc) = fVar43;
        *(float *)((int)puVar14 + 0x1d4) = fVar43;
        *(float *)(puVar14 + 0x3b) = fVar43;
        *(float *)(puVar14 + 0x3a) = fVar43;
        fVar43 = fVar5 * fVar5;
        *(float *)((int)puVar14 + 0x1d4) = *(float *)((int)puVar14 + 0x1d4) * fVar5;
        *(float *)(puVar14 + 0x3b) = *(float *)(puVar14 + 0x3b) * fVar43;
        *(float *)((int)puVar14 + 0x1dc) = *(float *)((int)puVar14 + 0x1dc) * fVar43 * fVar5;
        do {
          *(float *)((int)lVar27 + 0x1d0) = *(float *)((int)lVar27 + 0x1c0) * fVar43 * fVar43;
          iVar23 = (int)lVar29;
          lVar27 = lVar27 + 8;
          lVar29 = lVar29 + 8;
          *(float *)((int)lVar31 + 4) = *(float *)(iVar23 + 4) * fVar43 * fVar43;
          lVar31 = lVar31 + 8;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        lVar32 = 4;
        lVar31 = uVar21 - 0x90;
        pfVar30 = (float *)&DAT_007358e0;
        lVar27 = lVar28;
        lVar29 = lVar31;
        do {
          fVar43 = *pfVar30;
          fVar5 = pfVar30[1];
          pfVar30 = pfVar30 + 2;
          *(float *)((int)lVar27 + 0x1d0) = *(float *)((int)lVar27 + 0x1d0) * fVar43;
          lVar27 = lVar27 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar5;
          lVar29 = lVar29 + 8;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        lVar27 = 2;
        do {
          iVar23 = (int)lVar28;
          lVar28 = lVar28 + 0x10;
          iVar15 = (int)lVar31;
          lVar31 = lVar31 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar23 + 0x1d0)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar7 + fVar6);
      }
      unused = &DAT_00280000;
      mobyutil::OrganicDeltAng
                ((float)dVar33,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                 mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x280000,
                 (float *)((int)pvVar12 + 0x1d0));
      dVar33 = (double)(moby->pos).y;
      dVar35 = (double)(moby->pos).x;
      dVar36 = (double)(moby->pos).z;
      dVar40 = (double)(float)(dVar39 - dVar33);
      pVVar16 = pSVar13->points + pSVar13->cnt + -1;
      dVar41 = (double)(float)(dVar41 - dVar35);
      dVar39 = (double)(float)(dVar38 - dVar36);
      fVar43 = (float)(dVar33 - (double)pVVar16->y);
      fVar6 = (float)(dVar35 - (double)pVVar16->x);
      fVar7 = (float)(dVar36 - (double)pVVar16->z);
      mobyutil::OrganicDelt
                (SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar43 * fVar43),DAT_0071f418 * 8.0,
                 DAT_0071f418 * 16.0,mobyutil::g_FrameTime * 12.0,(float *)(puVar14 + 0x22),
                 (int)unused,(float *)((int)pvVar12 + 0x1d4));
      dVar38 = (double)SQRT((float)(dVar39 * dVar39 +
                                   (double)(float)(dVar41 * dVar41 +
                                                  (double)(float)(dVar40 * dVar40))));
      if (((dVar38 < (double)(*(float *)((int)pvVar12 + 0x1d4) * 2.0)) &&
          (iVar23 = *(int *)((int)pvVar12 + 0x1dc) + 1, *(int *)((int)pvVar12 + 0x1dc) = iVar23,
          iVar23 == pSVar13->cnt)) && (moby->state = '\x03', moby->animationId != '\x01')) {
        puVar14[0x3e] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar22,1,0,*(undefined4 *)((int)puVar14 + 500));
      }
      dVar35 = (double)(float)((double)*(float *)((int)pvVar12 + 0x1d4) / dVar38);
      dVar33 = dVar37;
      if (dVar37 - dVar38 < 0.0) {
        dVar33 = (double)(float)(dVar39 * dVar35);
      }
      dVar36 = dVar37;
      if (dVar37 - dVar38 < 0.0) {
        dVar36 = (double)(float)(dVar40 * dVar35);
      }
      dVar34 = dVar37;
      if (dVar37 - dVar38 < 0.0) {
        dVar34 = (double)(float)(dVar41 * dVar35);
      }
      if (dVar38 - dVar37 < 0.0) {
        dVar33 = (double)(float)(dVar39 * dVar35);
      }
      if (dVar38 - dVar37 < 0.0) {
        dVar36 = (double)(float)(dVar40 * dVar35);
      }
      if (dVar38 - dVar37 < 0.0) {
        dVar34 = (double)(float)(dVar41 * dVar35);
      }
      (moby->pos).z = (float)((double)(moby->pos).z + dVar33);
      (moby->pos).y = (float)((double)(moby->pos).y + dVar36);
      (moby->pos).x = (float)((double)(moby->pos).x + dVar34);
    }
    else {
      fVar43 = *(float *)(iVar23 + 0x10) - (moby->pos).x;
      fVar6 = *(float *)(iVar23 + 0x14) - (moby->pos).y;
      fVar7 = ABS(fVar43);
      fVar5 = ABS(fVar6);
      *(float *)(puVar14 + 0x27) = fVar43;
      *(float *)((int)puVar14 + 0x13c) = fVar6;
      *(float *)(puVar14 + 0x28) = fVar7 - fVar5;
      fVar43 = 0.0;
      uVar26 = (ulonglong)(*(uint *)(puVar14 + 0x27) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar14 + 0x28) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar14 + 0x13c) >> 0x1d) & 4;
      fVar6 = ABS(*(float *)(puVar14 + 0x27));
      if (*(float *)(puVar14 + 0x28) - 0.0 < 0.0) {
        fVar6 = fVar5;
      }
      fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
      fVar5 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
      fVar17 = ABS(*(float *)((int)puVar14 + 0x13c));
      if (*(float *)(puVar14 + 0x28) - 0.0 < 0.0) {
        fVar17 = fVar7;
      }
      if (0.0 < fVar6) {
        lVar27 = uVar21 - 0x250;
        lVar31 = uVar21 - 0xa0;
        lVar29 = uVar21 - 0xb0;
        lVar32 = 2;
        fVar6 = (fVar17 - fVar6) / (fVar17 + fVar6);
        fVar7 = fVar6 * fVar6;
        *(float *)((int)puVar14 + 0x1bc) = fVar6;
        *(float *)((int)puVar14 + 0x1b4) = fVar6;
        *(float *)(puVar14 + 0x37) = fVar6;
        *(float *)(puVar14 + 0x36) = fVar6;
        fVar6 = fVar7 * fVar7;
        *(float *)((int)puVar14 + 0x1b4) = *(float *)((int)puVar14 + 0x1b4) * fVar7;
        *(float *)(puVar14 + 0x37) = *(float *)(puVar14 + 0x37) * fVar6;
        *(float *)((int)puVar14 + 0x1bc) = *(float *)((int)puVar14 + 0x1bc) * fVar6 * fVar7;
        do {
          *(float *)((int)lVar27 + 0x1b0) = *(float *)((int)lVar27 + 0x1a0) * fVar6 * fVar6;
          iVar23 = (int)lVar29;
          lVar29 = lVar29 + 8;
          lVar27 = lVar27 + 8;
          *(float *)((int)lVar31 + 4) = *(float *)(iVar23 + 4) * fVar6 * fVar6;
          lVar31 = lVar31 + 8;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        lVar32 = 4;
        lVar31 = uVar21 - 0xb0;
        pfVar30 = (float *)&DAT_007358e0;
        lVar27 = lVar28;
        lVar29 = lVar31;
        do {
          fVar6 = *pfVar30;
          fVar7 = pfVar30[1];
          pfVar30 = pfVar30 + 2;
          *(float *)((int)lVar27 + 0x1b0) = *(float *)((int)lVar27 + 0x1b0) * fVar6;
          lVar27 = lVar27 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar7;
          lVar29 = lVar29 + 8;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        lVar27 = 2;
        do {
          iVar23 = (int)lVar28;
          lVar28 = lVar28 + 0x10;
          iVar15 = (int)lVar31;
          lVar31 = lVar31 + 0x10;
          fVar43 = fVar43 + *(float *)(iVar23 + 0x1b0) + *(float *)(iVar15 + 4) +
                   *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc);
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        fVar43 = (fVar43 + 0.7853982) * fVar9 + fVar5;
      }
      mobyutil::OrganicDeltAng
                (fVar43,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                 mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar12 + 0x1d0));
      fVar43 = (moby->pos).y - g_heroPosition.y;
      fVar6 = (moby->pos).x - g_heroPosition.x;
      if (20.0 <= SQRT(fVar6 * fVar6 + fVar43 * fVar43)) {
        if (((moby->field43_0x70 & 2U) != 0) &&
           (bVar1 = moby->animationId, iVar23 = mobyutil::MB_randInt(2), (uint)bVar1 != iVar23 + 1U)
           ) {
          iVar23 = mobyutil::MB_randInt(2);
          puVar14[0x3e] = (longlong)(int)(animationSpeed * 20.5);
          mobyutil::MB_SetAnimation(lVar22,iVar23 + 1,0,*(undefined4 *)((int)puVar14 + 500));
        }
      }
      else if (moby->animationId != '\x04') {
        puVar14[0x3e] = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(lVar22,4,0,*(undefined4 *)((int)puVar14 + 500));
      }
      if (((*(int *)((int)pvVar12 + 0x114) != 2) && (iVar23 = FUN_00288730(lVar22,0,0), iVar23 != 0)
          ) && (moby->state = '\x04', moby->animationId != '\x05')) {
        puVar14[0x3e] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar22,5,0,*(undefined4 *)((int)puVar14 + 500));
      }
    }
    goto LAB_0027ec78;
  }
  if ((moby->field43_0x70 & 2U) != 0) {
    uVar2 = moby->animationId;
    if (uVar2 == '\x01') {
      iVar23 = mobyutil::MB_randInt(4);
      uVar2 = moby->animationId;
      if (iVar23 == 0) {
        if (uVar2 != '\x02') {
          puVar14[0x3e] = (longlong)(int)(animationSpeed * 20.5);
          mobyutil::MB_SetAnimation(lVar22,2,0,*(undefined4 *)((int)puVar14 + 500));
        }
        goto LAB_0027d860;
      }
    }
    if (uVar2 != '\x01') {
      puVar14[0x3e] = (longlong)(int)(animationSpeed * 20.5);
      mobyutil::MB_SetAnimation(lVar22,1,0,*(undefined4 *)((int)puVar14 + 500));
    }
  }
LAB_0027d860:
  if ((*(int *)((int)pvVar12 + 0x114) != 2) && (moby->state = '\x02', moby->animationId != '\t')) {
    puVar14[0x3e] = (longlong)(int)(animationSpeed * 10.5);
    mobyutil::MB_SetAnimation(lVar22,9,0,*(undefined4 *)((int)puVar14 + 500));
  }
LAB_0027ec78:
  mobyupdate_helpers::M1440_0027cb28(lVar22);
  return;
}



//==== 0027ecd0  ns=mobyupdate_helpers  size=0x304
// sig: undefined M1441_0027ecd0(void)
// callers(0): 
// callees(5): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1441_0027ecd0(void)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  undefined1 local_e0 [64];
  float local_a0 [36];
  
  draw::GetEffectTex(0xb);
  idol_draw::PackCmd(0,2,0,1,0x80);
  stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(1,1,0,0,0,0);
  pfVar3 = local_a0;
  lVar4 = 4;
  pfVar2 = (float *)&DAT_007aa7e0;
  do {
    *pfVar3 = *pfVar2 * 0.2;
    pfVar3[1] = pfVar2[1] * 0.2;
    pfVar3[2] = pfVar2[2] * 0.2;
    pfVar1 = pfVar2 + 3;
    pfVar2 = pfVar2 + 4;
    pfVar3[3] = *pfVar1;
    pfVar3 = pfVar3 + 4;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  draw::FastDrawQuad(local_a0,local_e0,0,EffectTexHeaders,9);
  return;
}



//==== 0027efd4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1441_0027efd4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1441_0027efd4(void)

{
  DAT_007aa86c = 0x10000;
  return;
}



//==== 0027f018  ns=mobyupdate_unsorted  size=0x348
// sig: undefined UpdateMoby_1441(MobyInstance * moby)
// callers(0): 
// callees(5): 0015d12c sound::PlayMobySound; 004fff60 fastfunc::FastDecTimerS32; 005010c0 fastfunc::FastNormalizeRMtx4; 00502730 fastfunc::FastIntToDouble; 005027bc fastfunc::FastLerpColor

/* Moby 1441 */

void mobyupdate_unsorted::UpdateMoby_1441(MobyInstance *moby)

{
  byte bVar1;
  void *pvVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  
  pvVar2 = moby->pVar;
  iVar10 = (int)(animationSpeed * 30.5);
  dVar11 = (double)fastfunc::FastIntToDouble(worldUpdateTime - (worldUpdateTime / iVar10) * iVar10);
  dVar12 = (double)fastfunc::FastIntToDouble(iVar10);
  fVar4 = (float)(dVar11 / dVar12) * 6.28318 - 3.14159;
  fVar5 = 3.1415925 - fVar4;
  if (fVar4 - (3.1415925 - fVar4) < 0.0) {
    fVar5 = fVar4;
  }
  fVar6 = -3.1415925 - fVar4;
  if ((-3.1415925 - fVar4) - fVar5 < 0.0) {
    fVar6 = fVar5;
  }
  fVar4 = fVar6 * fVar6;
  fVar5 = fVar4 * fVar4 * fVar6;
  fVar7 = fVar4 * fVar5;
  uVar9 = fastfunc::FastLerpColor
                    ((double)((fVar4 * fVar7 * 2.601887e-06 +
                              fVar7 * -0.0001980741 +
                              fVar5 * 0.0083330255 + fVar4 * fVar6 * -0.16666657 + fVar6) * 0.5 +
                             0.5),DAT_007aa8ac,DAT_007aa8b0);
  moby->field60_0x90 = uVar9;
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    fVar4 = (moby->pos).y - g_heroPosition.y;
    fVar5 = (moby->pos).x - g_heroPosition.x;
    fVar6 = (moby->pos).z - g_heroPosition.z;
    if (SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) < 16.0) {
      fastfunc::FastNormalizeRMtx4(&local_80,(longlong)(int)moby + 0xc0);
      fVar4 = g_heroPosition.y - (moby->pos).y;
      fVar5 = g_heroPosition.x - (moby->pos).x;
      fVar6 = g_heroPosition.z - (moby->pos).z;
      fVar8 = local_60 * fVar6 + local_80 * fVar5 + local_70 * fVar4;
      fVar7 = local_5c * fVar6 + local_7c * fVar5 + local_6c * fVar4;
      fVar4 = local_58 * fVar6 + local_78 * fVar5 + local_68 * fVar4;
      if (((((DAT_007aa894 < fVar8) && (fVar8 < DAT_007aa898)) && (DAT_007aa89c < fVar7)) &&
          ((fVar7 < DAT_007aa8a0 && (DAT_007aa8a4 < fVar4)))) && (fVar4 < DAT_007aa8a8)) {
        sound::PlayMobySound(1,0,moby);
        auVar14 = ZEXT416(0xffffffff);
        auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
        moby->state = '\x02';
        moby->setByGroup = '\x01';
        auVar15 = vectorShiftLeftIntegerWord(auVar14,auVar14);
        auVar14 = loadVectorLeftIndexed(0xffffffffffffa890,0x7b0000);
        auVar13 = vectorConvertFromSignedFixedPointWord(auVar14,0);
        auVar14 = loadVectorLeftIndexed(0x24,0x27efe8);
        auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar14 = vectorAddFloatingPoint
                            (auVar13,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60);
        auVar14 = vectorMultiplyAddFloatingPoint(auVar16,auVar14,auVar15);
        auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
        auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar3 = storeVectorElementWordIndexed
                          (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,0,
                           ZEXT48(pvVar2));
        *(undefined4 *)((uint)pvVar2 & 0xfffffffc) = uVar3;
      }
    }
  }
  else if ((bVar1 < 3) && (iVar10 = fastfunc::FastDecTimerS32(ZEXT48(pvVar2)), iVar10 != 0)) {
    moby->state = '\x01';
    moby->setByGroup = '\0';
  }
  return;
}



//==== 0027f360  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1442_0027f360(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1442_0027f360(void)

{
  DAT_007aa900 = 0x10000;
  return;
}



//==== 0027f378  ns=mobyupdate_helpers  size=0x24
// sig: undefined M1442_0027f378(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1442_0027f378(int param_1)

{
  **(undefined4 **)(param_1 + 0x78) = 0xc0490fda;
  *(undefined1 *)(param_1 + 0xbc) = 1;
  *(undefined1 *)(param_1 + 0x20) = 2;
  return;
}



//==== 0027f3d0  ns=mobyupdate_unsorted  size=0x32c
// sig: undefined UpdateMoby_1442(MobyInstance * moby)
// callers(0): 
// callees(6): 000fcc68 mobyutil::MB_randRot; 0010675c mobyutil::MB_damage; 0015d12c sound::PlayMobySound; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005027bc fastfunc::FastLerpColor

/* Moby 1442 */

void mobyupdate_unsorted::UpdateMoby_1442(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  pfVar3 = (float *)moby->pVar;
  if (moby->state == 0) {
    moby->state = '\x01';
    dVar8 = (double)mobyutil::MB_randRot();
    *pfVar3 = (float)dVar8;
  }
  else if (moby->state < 2) {
    iVar6 = fastfunc::FastDecTimerS32(pfVar3 + 1);
    if (iVar6 != 0) {
      fVar1 = (moby->pos).y;
      fVar2 = (moby->pos).x;
      fVar4 = fVar1 - g_heroPosition.y;
      fVar5 = fVar2 - g_heroPosition.x;
      if ((SQRT(fVar5 * fVar5 + fVar4 * fVar4) < 4.0) && (g_heroState == GRINDRAIL_USE)) {
        if (((DAT_0096a288 != -1) &&
            (fVar4 = ((moby->transform).v1.y * DAT_007aa934 +
                     (moby->transform).v2.y * DAT_007aa938 +
                     (moby->transform).v0.y * DAT_007aa930 + fVar1) - g_heroPosition.y,
            fVar1 = ((moby->transform).v1.x * DAT_007aa934 +
                    (moby->transform).v2.x * DAT_007aa938 +
                    (moby->transform).v0.x * DAT_007aa930 + fVar2) - g_heroPosition.x,
            fVar2 = ((moby->transform).v2.z * DAT_007aa938 +
                     (moby->transform).v0.z * DAT_007aa930 + (moby->transform).v1.z * DAT_007aa934 +
                    (moby->pos).z) - g_heroPosition.z,
            fVar5 = DAT_00969d40 * fVar2 + hero::g_heroGravityMtx * fVar1 + DAT_00969d30 * fVar4,
            ABS(DAT_00969d44 * fVar2 + DAT_00969d24 * fVar1 + DAT_00969d34 * fVar4) < 0.1)) &&
           (((0.0 < fVar5 && (DAT_0096a288 == 3)) || ((fVar5 < 0.0 && (DAT_0096a288 == 2)))))) {
          *(undefined4 *)moby->pVar = 0xc0490fda;
          moby->setByGroup = '\x01';
          moby->state = '\x02';
          sound::PlayMobySound(1,0,moby);
        }
      }
    }
    iVar6 = mobyutil::MB_damage(moby,0x330000,0);
    if (iVar6 != 0) {
      *(undefined4 *)moby->pVar = 0xc0490fda;
      moby->setByGroup = '\x01';
      moby->state = '\x02';
      sound::PlayMobySound(0,0,moby);
      moby->damage = -1;
    }
  }
  dVar9 = (double)fastfunc::FastWrapRot(*pfVar3,mobyutil::g_FrameTime * 12.566371);
  *pfVar3 = (float)dVar9;
  dVar8 = (double)(float)(3.141592502593994 - dVar9);
  if (dVar9 - (double)(float)(3.141592502593994 - dVar9) < 0.0) {
    dVar8 = dVar9;
  }
  dVar10 = (double)(float)(-3.141592502593994 - dVar9);
  if ((double)(float)(-3.141592502593994 - dVar9) - dVar8 < 0.0) {
    dVar10 = dVar8;
  }
  dVar8 = (double)(float)(dVar10 * dVar10);
  dVar11 = (double)(float)(dVar8 * (double)(float)(dVar8 * dVar10));
  dVar9 = (double)(float)(dVar8 * dVar11);
  dVar8 = (double)(((float)(dVar8 * dVar9) * 2.601887e-06 +
                    (float)(dVar9 * -0.0001980741071747616 +
                           (double)(float)(dVar11 * 0.008333025500178337 +
                                          (double)(float)((double)(float)(dVar8 * dVar10) *
                                                          -0.16666656732559204 + dVar10))) + 1.0) *
                  0.5);
  if (moby->setByGroup == '\0') {
    uVar7 = fastfunc::FastLerpColor(dVar8,0xffffffff80202080,0xffffffff80202020);
  }
  else {
    uVar7 = fastfunc::FastLerpColor(dVar8,0xffffffff80208020,0xffffffff80202020);
  }
  moby->field60_0x90 = uVar7;
  return;
}



//==== 0027f6fc  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1890_0027f6fc(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1890_0027f6fc(void)

{
  DAT_007aa98c = 0x10000;
  return;
}



//==== 0027f710  ns=mobyupdate_helpers  size=0x70
// sig: undefined M1890_0027f710(void)
// callers(0): 
// callees(0): 

undefined8 mobyupdate_helpers::M1890_0027f710(longlong param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  ushort *puVar3;
  
  puVar3 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  if (puVar3 == (ushort *)0x0) {
    uVar2 = 0;
  }
  else {
    do {
      if (MobyInstance[*puVar3 & 0x7fff].setByGroup == '\0') {
        return 0;
      }
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
    } while (-1 < (short)uVar1);
    uVar2 = 1;
  }
  return uVar2;
}



//==== 0027f788  ns=mobyupdate_helpers  size=0xec
// sig: undefined M1890_0027f788(void)
// callers(1): 0027f880 mobyupdate_unsorted::UpdateMoby_{1443_1890}
// callees(1): 0015d12c sound::PlayMobySound

ushort * mobyupdate_helpers::M1890_0027f788(longlong param_1)

{
  float fVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort *puVar6;
  MobyInstance *pMVar7;
  MobyInstance *pMoby;
  
  fVar1 = 50000.0;
  puVar6 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  if (puVar6 != (ushort *)0x0) {
    pMoby = (MobyInstance *)0x0;
    do {
      pMVar7 = MobyInstance + (*puVar6 & 0x7fff);
      if (pMVar7->oClass != GRINDRAIL_BARRIER) {
        fVar4 = g_heroPosition.y - (pMVar7->pos).y;
        fVar3 = g_heroPosition.x - (pMVar7->pos).x;
        fVar5 = g_heroPosition.z - (pMVar7->pos).z;
        fVar3 = SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4);
        if (fVar3 < fVar1) {
          fVar1 = fVar3;
          pMoby = pMVar7;
        }
      }
      uVar2 = *puVar6;
      puVar6 = puVar6 + 1;
    } while (-1 < (short)uVar2);
    if (pMoby != (MobyInstance *)0x0) {
      puVar6 = (ushort *)sound::PlayMobySound(0,0,pMoby);
    }
  }
  return puVar6;
}



//==== 0027f880  ns=mobyupdate_unsorted  size=0x2ac
// sig: undefined UpdateMoby_{1443_1890}(MobyInstance * moby)
// callers(0): 
// callees(5): 0006d720 RegisterFuncForMoby; 0015cc7c sound::IsMobyPlayingSound; 0015d12c sound::PlayMobySound; 0027f788 mobyupdate_helpers::M1890_0027f788; 00502578 fastfunc::FastWrapRot

/* Moby 1443
   Moby 1890 */

void mobyupdate_unsorted::UpdateMoby__1443_1890_(MobyInstance *moby)

{
  byte bVar1;
  ushort uVar2;
  void *pvVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar6;
  ushort *puVar7;
  void *pvVar8;
  float *pfVar9;
  double dVar10;
  double dVar11;
  
  bVar1 = moby->state;
  pvVar3 = moby->pVar;
  if (bVar1 == 0) {
    moby->state = '\x01';
    moby->updateDistance = -1;
  }
  else if (bVar1 < 2) {
    fVar5 = DAT_007aa9b4 * mobyutil::g_FrameTime + *(float *)((int)pvVar3 + 0xc);
    *(float *)((int)pvVar3 + 0xc) = fVar5;
    if (1.0 < fVar5) {
      *(float *)((int)pvVar3 + 0xc) = fVar5 + -1.0;
    }
    iVar6 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar3 + 0x24));
    if (iVar6 == 0) {
      iVar6 = sound::PlayMobySound(0,4,moby);
      *(int *)((int)pvVar3 + 0x24) = iVar6;
    }
    dVar11 = 0.01745329238474369;
    dVar10 = (double)fastfunc::FastWrapRot
                               (*(float *)((int)pvVar3 + 8),
                                DAT_007aa9b0 * 0.017453292 * mobyutil::g_FrameTime);
    iVar6 = 0;
    *(float *)((int)pvVar3 + 8) = (float)dVar10;
    pfVar9 = (float *)&DAT_007aa9b8;
    pvVar8 = pvVar3;
    do {
      dVar10 = (double)fastfunc::FastWrapRot
                                 (*(float *)((int)pvVar8 + 0x10),
                                  (float)((double)*pfVar9 * dVar11) * mobyutil::g_FrameTime);
      iVar6 = iVar6 + 1;
      *(float *)((int)pvVar8 + 0x10) = (float)dVar10;
      pfVar9 = pfVar9 + 1;
      pvVar8 = (void *)((int)pvVar8 + 4);
    } while (iVar6 < 4);
    if (moby->enabled != '\0') {
      RegisterFuncForMoby(&PTR_M1890_0027fb48_0070a6c0,moby);
    }
    if ((*(int *)((int)pvVar3 + 0x20) != -1) &&
       (puVar7 = (ushort *)(&mobyutil::g_MobyGroups)[*(int *)((int)pvVar3 + 0x20)],
       puVar7 != (ushort *)0x0)) {
      do {
        if (MobyInstance[*puVar7 & 0x7fff].setByGroup == '\0') {
          return;
        }
        uVar2 = *puVar7;
        puVar7 = puVar7 + 1;
      } while (-1 < (short)uVar2);
      moby->state = '\x02';
      uVar4 = *(undefined4 *)((int)pvVar3 + 0x20);
      moby->collision = (ushort *)0x0;
      mobyupdate_helpers::M1890_0027f788(uVar4);
    }
  }
  else if (bVar1 < 3) {
    puVar7 = (ushort *)(&mobyutil::g_MobyGroups)[*(int *)((int)pvVar3 + 0x20)];
    if (puVar7 == (ushort *)0x0) {
LAB_0027fae8:
      moby->state = '\x01';
      moby->collision = moby->pClass->collision;
    }
    else {
      do {
        if (MobyInstance[*puVar7 & 0x7fff].setByGroup == '\0') goto LAB_0027fae8;
        uVar2 = *puVar7;
        puVar7 = puVar7 + 1;
      } while (-1 < (short)uVar2);
    }
  }
  return;
}



//==== 0027fb48  ns=mobyupdate_helpers  size=0x490
// sig: undefined M1890_0027fb48(void)
// callers(0): 
// callees(9): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00500b64 fastfunc::FastEulerToMtx; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble; 005027bc fastfunc::FastLerpColor; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1890_0027fb48(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  ulonglong *puVar5;
  float *pfVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 uVar12;
  longlong lVar11;
  longlong lVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  float *pfVar17;
  longlong lVar16;
  undefined4 *puVar18;
  float *pfVar19;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  longlong lVar20;
  undefined4 *puVar21;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar22;
  ulonglong unaff_r30;
  int iVar23;
  ulonglong unaff_r31;
  int iVar24;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar28;
  ulonglong in_f26;
  double dVar29;
  ulonglong in_f27;
  double dVar30;
  ulonglong in_f28;
  double dVar31;
  ulonglong in_f29;
  double dVar32;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar33;
  double dVar34;
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar11 = uVar8 - 0x1e0;
  puVar5 = (ulonglong *)lVar11;
  *puVar5 = uVar8;
  puVar5[0x3e] = in_LR;
  puVar5[0x34] = in_f24;
  puVar5[0x35] = in_f25;
  puVar5[0x36] = in_f26;
  puVar5[0x37] = in_f27;
  puVar5[0x38] = in_f28;
  puVar5[0x39] = in_f29;
  puVar5[0x3a] = in_f30;
  puVar5[0x3b] = in_f31;
  iVar23 = *(int *)(param_1 + 0x24);
  fVar1 = *(float *)(param_1 + 0x2c);
  puVar5[0x33] = unaff_r31;
  iVar24 = *(int *)(param_1 + 0x78);
  uVar2 = *(undefined4 *)(param_1 + 0x44);
  fVar3 = *(float *)(iVar23 + 0x24);
  *(undefined4 *)(puVar5 + 0xe) = *(undefined4 *)(param_1 + 0x40);
  uVar12 = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)puVar5 + 0x74) = uVar2;
  dVar33 = (double)(fVar1 / fVar3);
  uVar2 = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(puVar5 + 0xf) = uVar12;
  uVar12 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)puVar5 + 0x7c) = uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar5 + 0x16) = uVar12;
  uVar12 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)puVar5 + 0xb4) = uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(puVar5 + 0x17) = uVar12;
  *(undefined4 *)((int)puVar5 + 0xbc) = uVar2;
  uVar2 = DAT_007aaa20;
  puVar5[0x32] = unaff_r30;
  puVar5[0x31] = unaff_r29;
  puVar5[0x30] = unaff_r28;
  puVar5[0x2f] = unaff_r27;
  puVar5[0x2e] = unaff_r26;
  puVar5[0x2d] = unaff_r25;
  puVar5[0x2c] = unaff_r24;
  uVar9 = draw::GetEffectTex(uVar2);
  puVar5[0x27] = uVar9;
  uVar9 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar5[0x28] = uVar9;
  uVar9 = FUN_00502f08(0,0,0,0,0,0);
  puVar5[0x26] = uVar9;
  uVar9 = idol_draw::PackCmd(DAT_00fad0c8,DAT_007aa9d8,DAT_00fad0cc,DAT_007aa9dc,0x80);
  puVar5[0x29] = uVar9;
  lVar20 = uVar8 - 0x120;
  iVar23 = 0;
  puVar15 = &DAT_007aa9e4;
  pfVar19 = (float *)&DAT_007aaa30;
  puVar14 = &DAT_007aa9e0;
  lVar25 = 4;
  lVar10 = lVar11;
  lVar13 = lVar11;
  lVar16 = lVar20;
  do {
    uVar2 = *puVar14;
    uVar12 = *puVar15;
    puVar14 = puVar14 + 2;
    *(undefined4 *)((int)lVar10 + 0x110) = uVar2;
    uVar2 = DAT_007aa9cc;
    puVar15 = puVar15 + 2;
    *(undefined4 *)((int)lVar10 + 0x114) = uVar12;
    *(undefined4 *)((int)lVar13 + 0x100) = uVar2;
    lVar10 = lVar10 + 8;
    fVar1 = *pfVar19;
    lVar13 = lVar13 + 4;
    pfVar17 = (float *)lVar16;
    *pfVar17 = fVar1;
    fVar3 = pfVar19[1];
    pfVar17[1] = fVar3;
    fVar4 = pfVar19[2];
    pfVar17[2] = fVar4;
    pfVar6 = pfVar19 + 3;
    pfVar19 = pfVar19 + 4;
    pfVar17[3] = *pfVar6;
    *pfVar17 = (float)((double)fVar1 * dVar33);
    pfVar17[1] = (float)((double)fVar3 * dVar33);
    pfVar17[2] = (float)((double)fVar4 * dVar33);
    lVar16 = lVar16 + 0x10;
    lVar25 = lVar25 + -1;
  } while (lVar25 != 0);
  dVar33 = (double)fastfunc::FastIntToDouble(DAT_007aaab0);
  dVar34 = (double)(float)(6.2831854820251465 / dVar33);
  dVar26 = (double)fastfunc::FastIntToDouble(DAT_007aaab0);
  dVar33 = (double)*(float *)(iVar24 + 0xc);
  dVar26 = (double)(float)(3.0 / dVar26);
  if (*(int *)(iVar24 + 0xc) < 0) {
    do {
      dVar33 = (double)(float)(dVar33 + 1.0);
    } while (dVar33 < 0.0);
  }
  dVar31 = 1.0;
  for (; 1.0 < dVar33; dVar33 = (double)(float)(dVar33 + -1.0)) {
  }
  iVar22 = 0;
  if (0 < DAT_007aaab0) {
    dVar30 = 0.5;
    dVar29 = 2.0;
    dVar28 = (double)(float)(dVar26 + -1.0);
    do {
      puVar5[0x2a] = (longlong)iVar22;
      dVar27 = (double)fastfunc::FastWrapRot
                                 (*(float *)(iVar24 + 8),
                                  (float)((double)(longlong)puVar5[0x2a] * dVar34));
      *(float *)(puVar5 + 0xe) = (float)dVar27;
      fastfunc::FastEulerToMtx(uVar8 - 0x160,uVar8 - 0x170);
      dVar27 = dVar33;
      if (dVar30 - dVar33 < 0.0) {
        dVar27 = (double)(float)(dVar31 - dVar33);
      }
      uVar12 = fastfunc::FastLerpColor((double)(float)(dVar27 * dVar29),DAT_007aa9c8,DAT_007aa9cc);
      uVar2 = EffectTexHeaders;
      dVar27 = (double)(float)(dVar33 + dVar26);
      *(undefined4 *)((int)puVar5 + 0x104) = uVar12;
      dVar32 = (double)(float)(dVar33 + dVar28);
      *(undefined4 *)(puVar5 + 0x20) = uVar12;
      draw::FastDrawQuad(uVar8 - 0x120,uVar8 - 0x160,0,uVar2,9);
      iVar22 = iVar22 + 1;
      dVar33 = dVar27;
      if (dVar31 - dVar27 < 0.0) {
        dVar33 = dVar32;
      }
    } while (iVar22 < DAT_007aaab0);
  }
  uVar9 = draw::GetEffectTex(DAT_007aaa24);
  puVar5[0x27] = uVar9;
  puVar14 = &DAT_007aaa00;
  puVar15 = &DAT_007aaa04;
  lVar13 = 4;
  puVar18 = &DAT_007aaa70;
  lVar10 = lVar11;
  do {
    uVar2 = *puVar14;
    uVar12 = *puVar15;
    puVar14 = puVar14 + 2;
    *(undefined4 *)((int)lVar11 + 0x110) = uVar2;
    uVar2 = DAT_007aa9d0;
    puVar15 = puVar15 + 2;
    *(undefined4 *)((int)lVar11 + 0x114) = uVar12;
    *(undefined4 *)((int)lVar10 + 0x100) = uVar2;
    lVar11 = lVar11 + 8;
    lVar10 = lVar10 + 4;
    puVar21 = (undefined4 *)lVar20;
    *puVar21 = *puVar18;
    puVar21[1] = puVar18[1];
    puVar21[2] = puVar18[2];
    puVar7 = puVar18 + 3;
    puVar18 = puVar18 + 4;
    puVar21[3] = *puVar7;
    lVar20 = lVar20 + 0x10;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  do {
    *(undefined4 *)(puVar5 + 0xe) = *(undefined4 *)(iVar24 + 0x10);
    fastfunc::FastEulerToMtx(uVar8 - 0x160,uVar8 - 0x170);
    draw::FastDrawQuad(uVar8 - 0x120,uVar8 - 0x160,0,EffectTexHeaders,9);
    iVar23 = iVar23 + 1;
    iVar24 = iVar24 + 4;
  } while (iVar23 < 4);
  return;
}



//==== 0027ffd8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1890_0027ffd8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1890_0027ffd8(void)

{
  DAT_007aab00 = 0x10000;
  return;
}



