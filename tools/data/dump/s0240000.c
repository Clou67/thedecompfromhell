//==== 00240058  ns=mobyupdate_helpers  size=0x348
// sig: undefined M1297_00240058(void)
// callers(1): 002403a8 FUN_002403a8
// callees(3): 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 001206e8 partupd::SpawnPart_2

void mobyupdate_helpers::M1297_00240058(void)

{
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [32];
  
  mobyutil::MB_randRangeFloat(2.5,3.0);
  mobyutil::MB_randRot();
  partupd::SpawnPart_2
            (local_c0,local_b0,local_a0,DAT_0078e06c,DAT_0078e070,DAT_0078e074,DAT_0078e078,
             DAT_0078e07c);
  return;
}



//==== 002403a8  ns=Global  size=0x1e8
// sig: undefined FUN_002403a8(void)
// callers(1): 00214a98 mobyupdate_unsorted::UpdateMoby_1231
// callees(4): 000efa28 mobyfunc::CreateMoby; 000fc620 mobyutil::MB_randInt; 00240058 mobyupdate_helpers::M1297_00240058; 00500b64 fastfunc::FastEulerToMtx

longlong FUN_002403a8(int param_1,f32 *param_2,undefined4 param_3)

{
  f32 fVar1;
  f32 fVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 uVar10;
  ulonglong uVar11;
  uint uVar12;
  char cVar14;
  int iVar13;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  MobyInstance *pMVar9;
  
  uVar6 = 0x70;
  auVar16._0_4_ = param_3;
  auVar16._4_4_ = param_3;
  auVar16._8_4_ = param_3;
  auVar16._12_4_ = param_3;
  pMVar9 = mobyfunc::CreateMoby(ENERGY_SPHERE_0511);
  lVar7 = (longlong)(int)pMVar9;
  if (pMVar9 != (MobyInstance *)0x0) {
    uVar12 = 0;
    auVar15 = vectorConvertFromSignedFixedPointWord(auVar16,0);
    pMVar9->scale = 0.0;
    pMVar9->drawDistance = 0x40;
    pMVar9->updateDistance = -1;
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    pMVar9->enabled = '\x01';
    pMVar9->color = (int)((ulonglong)uVar8 >> 0x20);
    pMVar9->light = (int)uVar8;
    pMVar9->state = '\x01';
    puVar3 = (undefined4 *)pMVar9->pVar;
    uVar11 = ZEXT48(puVar3);
    (pMVar9->pos).x = *param_2;
    auVar16 = ZEXT416(0xffffffff);
    auVar17 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
    (pMVar9->pos).y = param_2[1];
    fVar1 = *(f32 *)(param_1 + 0x40);
    (pMVar9->pos).z = param_2[2];
    fVar2 = *(f32 *)(param_1 + 0x44);
    (pMVar9->pos).w = param_2[3];
    (pMVar9->rotation).x = fVar1;
    fVar1 = *(f32 *)(param_1 + 0x48);
    (pMVar9->rotation).y = fVar2;
    fVar2 = *(f32 *)(param_1 + 0x4c);
    (pMVar9->rotation).z = fVar1;
    (pMVar9->rotation).w = fVar2;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[9] = param_1;
    auVar16 = loadVectorLeftIndexed(uVar6,0x2403a0);
    auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar16 = vectorAddFloatingPoint
                        (auVar15,auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60);
    auVar15 = vectorShiftLeftIntegerWord(auVar17,auVar17);
    auVar17 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar16 = vectorMultiplyAddFloatingPoint(auVar17,auVar16,auVar15);
    auVar16 = vectorConvertToSignedFixedPointWordSaturate(auVar16,0);
    auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar4 = storeVectorElementWordIndexed
                      (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0x20,uVar11);
    *(undefined4 *)((uint)(puVar3 + 8) & 0xfffffffc) = uVar4;
    puVar3[10] = 5;
    fastfunc::FastEulerToMtx(lVar7 + 0xc0,lVar7 + 0x40);
    cVar14 = '\0';
    do {
      uVar10 = mobyutil::MB_randInt(0xff);
      iVar5 = uVar12 * (uVar12 & 1);
      iVar13 = (int)uVar11;
      *(undefined1 *)(iVar13 + 0x10) = uVar10;
      cVar14 = cVar14 + '\n';
      *(char *)(iVar13 + 0x18) = cVar14;
      uVar12 = uVar12 + 1;
      *(byte *)(iVar13 + 0x14) = ((byte)((LZCOUNT(-iVar5) << 0x3a) >> 0x3f) & 2) - 1;
      uVar11 = uVar11 + 1;
    } while ((int)uVar12 < 4);
    iVar13 = 0;
    do {
      mobyupdate_helpers::M1297_00240058(lVar7);
      iVar13 = iVar13 + 1;
    } while (iVar13 < 0x32);
  }
  return lVar7;
}



//==== 00240590  ns=mobyupdate_helpers  size=0x30
// sig: undefined M1297_00240590(void)
// callers(1): 00214198 mobyupdate_helpers::M1231_00214198
// callees(0): 

void mobyupdate_helpers::M1297_00240590(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = param_2[1];
  uVar1 = param_2[2];
  *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x28) = 5;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = param_2[3];
  return;
}



//==== 002405c8  ns=Global  size=0x68
// sig: undefined FUN_002405c8(void)
// callers(1): 00214a98 mobyupdate_unsorted::UpdateMoby_1231
// callees(0): 

void FUN_002405c8(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 in_r0;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  puVar1 = *(undefined4 **)(param_1 + 0x78);
  auVar3 = ZEXT416(0xffffffff);
  auVar3 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
  *(undefined1 *)(param_1 + 0x20) = 2;
  auVar4 = vectorShiftLeftIntegerWord(auVar3,auVar3);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  auVar3 = loadVectorLeftIndexed(in_r0,0x2405c0);
  auVar5 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar3 = auVar3 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar3 = vectorMultiplyAddFloatingPoint
                     (auVar5,auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,auVar4);
  auVar3 = vectorConvertToSignedFixedPointWordSaturate(auVar3,0);
  auVar3 = auVar3 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar2 = storeVectorElementWordIndexed
                    (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x20,ZEXT48(puVar1));
  *(undefined4 *)((uint)(puVar1 + 8) & 0xfffffffc) = uVar2;
  return;
}



//==== 00240630  ns=mobyupdate_helpers  size=0x24
// sig: undefined M1297_00240630(void)
// callers(1): 00214198 mobyupdate_helpers::M1231_00214198
// callees(1): 000efb38 mobyfunc::DeleteMoby

void mobyupdate_helpers::M1297_00240630(MobyInstance *param_1)

{
  mobyfunc::DeleteMoby(param_1);
  return;
}



//==== 00240678  ns=mobyupdate_helpers  size=0x314
// sig: undefined M16_00240678(void)
// callers(1): 00241320 mobyupdate_unsorted::UpdateMoby_{13_14_15_16}
// callees(5): 000c8444 hud::RegisterHUDCallback; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fea60 mobyutil::MB_randSphere; 0012f8c0 partupd::SpawnPart_53
// strings: 00240658: '?333A ' (raw)

void mobyupdate_helpers::M16_00240678(MobyInstance *param_1)

{
  byte bVar1;
  MOBY_OCLASSES MVar2;
  int iVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined1 local_80 [16];
  undefined1 local_70 [40];
  
  MVar2 = param_1->oClass;
  if ((short)MVar2 < 0xf) {
    if (0xd < (short)MVar2) {
      iVar3 = 5;
      goto LAB_002406f4;
    }
  }
  else {
    if ((short)MVar2 < 0x10) {
      iVar3 = 0x14;
      goto LAB_002406f4;
    }
    if ((short)MVar2 < 0x11) {
      iVar3 = 0x32;
      goto LAB_002406f4;
    }
  }
  iVar3 = 1;
LAB_002406f4:
  if ((param_1->field80_0xb8 != (MobyInstance *)0x0) &&
     (bVar1 = param_1->field80_0xb8->field74_0xb1, (bVar1 & 0x80) == 0)) {
    *(short *)((uint)bVar1 * 4 + 0xa0e11e + Level * 0x100) =
         *(short *)((uint)bVar1 * 4 + 0xa0e11e + Level * 0x100) + (short)iVar3;
  }
  g_boltCount = g_boltCount + iVar3;
  g_totalBoltsCollected = g_totalBoltsCollected + iVar3;
  if ((*(char *)((int)param_1->pVar + 0x40) != '\0') ||
     ((g_boltMiningActive != 0 && (param_1 < MobyInstancePermEnd)))) {
    g_boltsMined = g_boltsMined + iVar3;
  }
  *(int *)(&DAT_00a0f6e4 + Level * 4) = *(int *)(&DAT_00a0f6e4 + Level * 4) + iVar3;
  hud::RegisterHUDCallback
            (2,0x754e,&PTR_BoltHud_Init_00705810,&PTR_BoltHud_Update_00705818,
             &PTR_Draw_BoltCountUI_00705820,&g_boltCount,9999999);
  dVar7 = 0.699999988079071;
  mobyutil::MB_randSphere
            ((double)(float)((double)mobyutil::g_FrameTime * 0.699999988079071),
             (double)mobyutil::g_FrameTime,local_80);
  mobyutil::MB_randInt(2);
  dVar4 = (double)mobyutil::MB_randRangeFloat(0.4,0.5);
  dVar6 = 25.5;
  uVar5 = 0;
  partupd::SpawnPart_53
            ((double)(float)(dVar4 * 0.20000000298023224),dVar4,0,local_70,
             (int)(animationSpeed * 25.5));
  partupd::SpawnPart_53
            ((double)(float)(dVar4 * 0.14000000059604645),(double)(float)(dVar4 * dVar7),uVar5,
             local_70,(int)((double)animationSpeed * dVar6));
  return;
}



//==== 002409e0  ns=mobyupdate_helpers  size=0x52c
// sig: undefined M16_002409e0(void)
// callers(1): 00241320 mobyupdate_unsorted::UpdateMoby_{13_14_15_16}
// callees(8): 00059e20 collproc::CollSphere; 001122ac mobyutil::MB_GetPlatformParent; 00112678 mobyutil::MB_PlatformGetDelta; 00500b64 fastfunc::FastEulerToMtx; 005014d4 fastfunc::FastVecMtx4MultBatch3; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005c5ad0 libc::memcpy

void mobyupdate_helpers::M16_002409e0(int param_1,float *param_2,float *param_3)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  float *pfVar8;
  int iVar9;
  double dVar10;
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
  undefined8 uVar21;
  undefined1 auStack_110 [16];
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  undefined1 auStack_e0 [48];
  undefined1 auStack_b0 [32];
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  
  pfVar8 = *(float **)(param_1 + 0x78);
  if (pfVar8[0x17] == 0.0) {
    local_100 = *pfVar8;
    local_fc = pfVar8[1];
    local_f8 = pfVar8[2];
    local_f4 = pfVar8[3];
    local_f0 = pfVar8[4];
    local_ec = pfVar8[5];
    local_e8 = pfVar8[6];
    local_e4 = pfVar8[7];
  }
  else {
    mobyutil::MB_PlatformGetDelta(param_1,pfVar8[0x17],pfVar8,pfVar8 + 4,&local_100,&local_f0);
  }
  sVar7 = *(short *)(param_1 + 0xa6);
  if (sVar7 < 0xe) {
    if (0xc < sVar7) {
      dVar11 = 0.03999999910593033;
      dVar19 = 0.04874999821186066;
      dVar20 = 0.32499998807907104;
      uVar21 = 0x3fc3333340000000;
      goto LAB_00240b5c;
    }
  }
  else {
    uVar21 = 0x3fcd70a3e0000000;
    if (sVar7 < 0xf) {
      dVar11 = 0.029999999329447746;
      dVar19 = 0.02449999935925007;
      dVar20 = 0.3499999940395355;
      goto LAB_00240b5c;
    }
    if (sVar7 < 0x10) {
      dVar11 = 0.02500000037252903;
      dVar19 = 0.05624999850988388;
      dVar20 = 0.375;
      goto LAB_00240b5c;
    }
  }
  dVar11 = 0.017500000074505806;
  dVar19 = 0.13500000536441803;
  dVar20 = 0.30000001192092896;
  uVar21 = 0x3fd0000000000000;
LAB_00240b5c:
  dVar18 = -0.012500000186264515;
  if ((*(byte *)((int)pfVar8 + 0x55) & 1) == 0) {
    dVar11 = (double)fastfunc::FastDiffRots((double)pfVar8[0x14],dVar11);
    pfVar8[0x14] = (float)dVar11;
    dVar11 = (double)fastfunc::FastDiffRots((double)pfVar8[0x16],dVar18);
  }
  else {
    dVar11 = (double)fastfunc::FastWrapRot(pfVar8[0x14],(float)dVar11);
    pfVar8[0x14] = (float)dVar11;
    dVar11 = (double)fastfunc::FastWrapRot(pfVar8[0x16],(float)dVar18);
  }
  pfVar8[0x16] = (float)dVar11;
  libc::memcpy(auStack_110,pfVar8 + 0x14,0x10);
  fastfunc::FastEulerToMtx(auStack_e0,auStack_110);
  fastfunc::FastEulerToMtx(auStack_b0,&local_f0);
  fastfunc::FastVecMtx4MultBatch3(param_1 + 0xc0,auStack_b0,auStack_e0);
  *(undefined4 *)(param_1 + 0x1c) = local_84;
  *(float *)(param_1 + 0x10) =
       (float)((double)local_90 * dVar19 +
              (double)(float)((double)*(float *)(param_1 + 0xc0) * dVar20)) + local_100;
  *(float *)(param_1 + 0x14) =
       (float)((double)local_8c * dVar19 +
              (double)(float)((double)*(float *)(param_1 + 0xc4) * dVar20)) + local_fc;
  *(float *)(param_1 + 0x18) =
       (float)((double)local_88 * dVar19 +
              (double)(float)((double)*(float *)(param_1 + 200) * dVar20)) + local_f8;
  if (param_2 != (float *)0x0) {
    *param_2 = local_100;
    param_2[1] = local_fc;
    param_2[2] = local_f8;
    param_2[3] = local_f4;
  }
  if (param_3 != (float *)0x0) {
    *param_3 = local_f0;
    param_3[1] = local_ec;
    param_3[2] = local_e8;
    param_3[3] = local_e4;
  }
  if ((((*(char *)(param_1 + 0x20) == '\x03') && (pfVar8[0x17] != 0.0)) &&
      (*(char *)((int)pfVar8 + 0x57) == '\0')) &&
     (((cVar1 = *(char *)((int)pfVar8[0x17] + 0x20), cVar1 == -2 || (cVar1 == -3)) ||
      (iVar9 = collproc::CollSphere(uVar21,param_1 + 0x10,0,0x22,param_1), iVar9 == 0)))) {
    *(undefined1 *)(param_1 + 0x20) = 1;
    dVar11 = 0.0;
    pfVar8[0xe] = 0.0;
    pfVar8[0xd] = 0.0;
    pfVar8[0xc] = 0.0;
    pfVar8[0xf] = 1.0;
    iVar9 = mobyutil::MB_GetPlatformParent(pfVar8[0x17]);
    if (iVar9 == 0) {
      pfVar8[10] = 0.0;
      pfVar8[9] = 0.0;
      pfVar8[8] = 0.0;
      dVar19 = dVar11;
      dVar20 = dVar11;
      dVar18 = dVar11;
      dVar12 = dVar11;
    }
    else {
      fVar2 = *(float *)(iVar9 + 0x10);
      pfVar8[8] = fVar2;
      fVar3 = *(float *)(iVar9 + 0x14);
      pfVar8[9] = fVar3;
      fVar4 = *(float *)(iVar9 + 0x18);
      pfVar8[10] = fVar4;
      dVar19 = (double)*(float *)(iVar9 + 0x1c);
      dVar20 = (double)fVar4;
      dVar18 = (double)fVar3;
      dVar12 = (double)fVar2;
    }
    pfVar8[0xb] = (float)dVar19;
    fVar4 = *(float *)(param_1 + 0xc4);
    fVar5 = *(float *)(param_1 + 0xc0);
    fVar6 = *(float *)(param_1 + 200);
    dVar19 = (double)mobyutil::g_FrameTime;
    pfVar8[0x17] = 0.0;
    dVar13 = (double)SQRT(local_88 * local_88 + local_90 * local_90 + local_8c * local_8c);
    dVar17 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
    fVar2 = (float)(dVar19 / dVar13);
    fVar3 = (float)(dVar19 / dVar17);
    dVar19 = dVar11;
    if (dVar11 - dVar13 < 0.0) {
      dVar19 = (double)(local_8c * fVar2);
    }
    dVar10 = dVar11;
    if (dVar11 - dVar13 < 0.0) {
      dVar10 = (double)(local_88 * fVar2);
    }
    dVar14 = dVar11;
    if (dVar11 - dVar13 < 0.0) {
      dVar14 = (double)(local_90 * fVar2);
    }
    if (dVar13 - dVar11 < 0.0) {
      dVar19 = (double)(local_8c * fVar2);
    }
    if (dVar13 - dVar11 < 0.0) {
      dVar10 = (double)(local_88 * fVar2);
    }
    if (dVar13 - dVar11 < 0.0) {
      dVar14 = (double)(local_90 * fVar2);
    }
    dVar13 = dVar11;
    if (dVar11 - dVar17 < 0.0) {
      dVar13 = (double)(fVar4 * fVar3);
    }
    dVar15 = dVar11;
    if (dVar11 - dVar17 < 0.0) {
      dVar15 = (double)(fVar6 * fVar3);
    }
    dVar16 = dVar11;
    if (dVar11 - dVar17 < 0.0) {
      dVar16 = (double)(fVar5 * fVar3);
    }
    if (dVar17 - dVar11 < 0.0) {
      dVar13 = (double)(fVar4 * fVar3);
    }
    if (dVar17 - dVar11 < 0.0) {
      dVar15 = (double)(fVar6 * fVar3);
    }
    if (dVar17 - dVar11 < 0.0) {
      dVar16 = (double)(fVar5 * fVar3);
    }
    fVar2 = (float)(dVar12 + (double)(float)(dVar14 + dVar16));
    pfVar8[9] = (float)(dVar18 + (double)(float)(dVar19 + dVar13));
    pfVar8[10] = (float)(dVar20 + (double)(float)(dVar10 + dVar15));
    pfVar8[8] = fVar2;
    *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + fVar2;
    *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + pfVar8[9];
    *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + pfVar8[10];
  }
  return;
}



//==== 00240f38  ns=mobyupdate_helpers  size=0x360
// sig: undefined M16_00240f38(void)
// callers(5): 00241320 mobyupdate_unsorted::UpdateMoby_{13_14_15_16}; 00242738 MB_SpawnBolts; 00387588 mobyupdate_unsorted::UpdateMoby_452; 0042bc38 mobyupdate_helpers::M71_ClosestMobyDistance; 00486608 mobyupdate_helpers::M849_00486608
// callees(4): 000fcbe8 mobyutil::MB_randRangeFloat; 0010c038 mobyutil::MB_AxisAngleToQuat; 0015d12c sound::PlayMobySound; 00500b64 fastfunc::FastEulerToMtx

undefined8
mobyupdate_helpers::M16_00240f38(double param_1,double param_2,MobyInstance *param_3,int param_4)

{
  float fVar1;
  void *pvVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_80 [32];
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  
  pvVar2 = param_3->pVar;
  if (param_3->state == '\x04') {
    uVar9 = 0;
  }
  else {
    if ((DAT_00f1559c + (int)(animationSpeed * 3.5) < worldUpdateTime) ||
       (worldUpdateTime < DAT_00f1559c)) {
      DAT_00f1559c = worldUpdateTime;
      sound::PlayMobySound(0,0x20,param_3);
    }
    else {
      dVar12 = 0.0;
      dVar11 = 30.0;
      if (param_1 == 0.0) {
        dVar10 = (double)mobyutil::MB_randRangeFloat(-30.0,30.0);
        param_1 = (double)(float)(dVar10 * 0.01745329238474369);
      }
      if (param_2 == dVar12) {
        dVar11 = (double)mobyutil::MB_randRangeFloat((float)dVar12,(float)dVar11);
        param_2 = (double)(float)(dVar11 * 0.01745329238474369);
      }
    }
    if (param_3->state == '\x03') {
      fastfunc::FastEulerToMtx(auStack_80,(int)pvVar2 + 0x10);
      dVar11 = (double)mobyutil::MB_randRangeFloat(3.0,7.0);
      fVar1 = SQRT(local_58 * local_58 + local_60 * local_60 + local_5c * local_5c);
      if (fVar1 == 0.0) {
        *(float *)((int)pvVar2 + 0x20) = local_60;
        *(float *)((int)pvVar2 + 0x24) = local_5c;
        *(float *)((int)pvVar2 + 0x28) = local_58;
        *(undefined4 *)((int)pvVar2 + 0x28) = 0;
        *(undefined4 *)((int)pvVar2 + 0x24) = 0;
        *(undefined4 *)((int)pvVar2 + 0x20) = 0;
      }
      else {
        fVar1 = (float)(dVar11 * (double)mobyutil::g_FrameTime) / fVar1;
        *(float *)((int)pvVar2 + 0x20) = local_60 * fVar1;
        *(float *)((int)pvVar2 + 0x24) = local_5c * fVar1;
        *(float *)((int)pvVar2 + 0x28) = local_58 * fVar1;
      }
      *(undefined4 *)((int)pvVar2 + 0x2c) = local_54;
    }
    fVar1 = 0.0;
    *(undefined4 *)((int)pvVar2 + 100) = 0;
    *(float *)((int)pvVar2 + 0x4c) = (float)param_1;
    *(float *)((int)pvVar2 + 0x48) = (float)param_2;
    fVar3 = *(float *)(param_4 + 0x10) - (param_3->pos).x;
    fVar4 = *(float *)(param_4 + 0x18) - (param_3->pos).z;
    fVar5 = *(float *)(param_4 + 0x14) - (param_3->pos).y;
    fVar6 = fVar4 * *(float *)((int)pvVar2 + 0x20) - fVar3 * *(float *)((int)pvVar2 + 0x28);
    fVar7 = fVar5 * *(float *)((int)pvVar2 + 0x28) - fVar4 * *(float *)((int)pvVar2 + 0x24);
    fVar5 = fVar3 * *(float *)((int)pvVar2 + 0x24) - fVar5 * *(float *)((int)pvVar2 + 0x20);
    *(int *)((int)pvVar2 + 0x60) = param_4;
    fVar8 = fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6;
    fVar3 = fVar1;
    fVar4 = fVar1;
    if (SQRT(fVar8) != 0.0) {
      fVar1 = 1.0 / SQRT(fVar8);
      fVar1 = -(fVar8 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
      fVar1 = -(fVar8 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
      fVar1 = -(fVar8 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
      fVar4 = fVar7 * fVar1;
      fVar3 = fVar6 * fVar1;
      fVar1 = fVar5 * fVar1;
    }
    *(float *)((int)pvVar2 + 0x30) = fVar4;
    *(float *)((int)pvVar2 + 0x34) = fVar3;
    *(float *)((int)pvVar2 + 0x38) = fVar1;
    *(undefined4 *)((int)pvVar2 + 0x3c) = 0;
    dVar11 = (double)mobyutil::MB_randRangeFloat(DAT_0078e0b0 * 0.333,DAT_0078e0b0);
    mobyutil::MB_AxisAngleToQuat
              ((float)(dVar11 * 0.01745329238474369) * mobyutil::g_FrameTime,
               (float *)((int)pvVar2 + 0x30),(float *)((int)pvVar2 + 0x30));
    uVar9 = 1;
    param_3->state = '\x04';
  }
  return uVar9;
}



//==== 00241320  ns=mobyupdate_unsorted  size=0x13e8
// sig: undefined UpdateMoby_{13_14_15_16}(MobyInstance * moby)
// callers(0): 
// callees(26): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere; 00074cf0 draw::ImpactSprite_Add; 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 00106078 mobyutil::MB_EulerToQuat; 00109af0 mobyutil::Delt; 0010c1e8 mobyutil::MB_MtxToEuler; 00110488 mobyutil::ClampVec3Magnitude; 001122ac mobyutil::MB_GetPlatformParent; 001124c0 mobyutil::MB_PlatformWorldToLocal; 00240678 mobyupdate_helpers::M16_00240678; 002409e0 mobyupdate_helpers::M16_002409e0; 00240f38 mobyupdate_helpers::M16_00240f38; 00500608 fastfunc::FastVecNormalize; 00500b64 fastfunc::FastEulerToMtx; 005014d4 fastfunc::FastVecMtx4MultBatch3; 00501848 fastfunc::FastSlerp; 00501ab0 fastfunc::FastQuaternionToMtx4; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005e825c FUN_005e825c; 005e8338 FUN_005e8338
// strings: 002412a8: '?&ff?333?@' (raw) | 002412ac: '?333?@' (raw)

/* Moby 13
   Moby 14
   Moby 15
   Moby 16 */

void mobyupdate_unsorted::UpdateMoby__13_14_15_16_(MobyInstance *moby)

{
  bool bVar1;
  u8 uVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  f32 fVar7;
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
  MOBY_OCLASSES MVar18;
  ushort uVar19;
  float *pfVar20;
  int iVar21;
  MobyInstance *pMVar22;
  longlong lVar23;
  int iVar24;
  undefined2 uVar25;
  undefined1 uVar27;
  char cVar28;
  short sVar26;
  MobyModeBit MVar29;
  uint uVar30;
  float *pfVar31;
  longlong lVar32;
  double dVar33;
  undefined8 uVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  undefined1 auStack_160 [32];
  float local_140;
  MobyClass *local_13c;
  void *local_138;
  f32 local_134;
  float afStack_130 [4];
  float local_120;
  float local_11c;
  float local_118;
  f32 local_114;
  Vec4 local_110;
  void *local_100;
  Manipulator *local_fc;
  void *local_f8;
  void *local_f4;
  undefined1 auStack_f0 [48];
  undefined1 auStack_c0 [48];
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  ulonglong local_60;
  
  lVar23 = (longlong)(int)moby;
  pfVar20 = (float *)moby->pVar;
  uVar2 = moby->state;
  fVar4 = (moby->pos).x;
  bVar1 = g_gameMode != GAME_MODE_SCENE;
  fVar5 = (moby->pos).y;
  fVar6 = (moby->pos).z;
  fVar7 = (moby->pos).w;
  if (bVar1) {
    MVar29 = moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
    moby->enabled = '\x01';
    moby->modeBits = MVar29;
  }
  else {
    MVar29 = moby->modeBits | DISABLED;
    moby->enabled = '\0';
    moby->modeBits = MVar29;
  }
  if (uVar2 != '\x04') {
    if (uVar2 == '\x03') {
      fVar5 = fVar5 - g_heroPosition.y;
      fVar4 = fVar4 - g_heroPosition.x;
      fVar4 = SQRT(fVar4 * fVar4 + fVar5 * fVar5);
      if ((fVar4 < DAT_0096bf68) && (ABS(fVar6 - g_heroPosition.z) < DAT_0096bf6c)) {
        mobyupdate_helpers::M16_00240f38(0,0,lVar23,g_heroMobyPtr);
        return;
      }
      if ((moby <= MobyInstancePermEnd) || ((199 < numSpawnableMobys || (fVar4 <= 48.0)))) {
        if ((!bVar1) && (pfVar20[0x17] == 0.0)) {
          if (*(char *)((int)pfVar20 + 0x57) == '\0') {
            return;
          }
          *(char *)((int)pfVar20 + 0x57) = *(char *)((int)pfVar20 + 0x57) + -1;
          return;
        }
      }
      else if (!bVar1) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      mobyupdate_helpers::M16_002409e0(lVar23,0,0);
      if (*(char *)((int)pfVar20 + 0x57) != '\0') {
        dVar33 = (double)fastfunc::FastIntToDouble();
        dVar41 = (double)fastfunc::FastIntToDouble(*(undefined1 *)((int)pfVar20 + 0x56));
        local_60 = (ulonglong)*(byte *)((int)pfVar20 + 0x56);
        fVar4 = (float)(dVar33 / dVar41) - 0.5;
        (moby->pos).z = (float)local_60 * 0.0125 * -(fVar4 * fVar4 - 0.25) + (moby->pos).z;
        *(char *)((int)pfVar20 + 0x57) = *(char *)((int)pfVar20 + 0x57) + -1;
      }
      if (-1 < *(short *)(pfVar20 + 0x1b)) {
        fVar4 = (moby->transform).v1.y;
        iVar24 = (int)((longlong)(short)moby->oClass << 4);
        fVar5 = *(float *)(&DAT_0078dff4 + iVar24);
        fVar6 = *(float *)(iVar24 + 0x78dff0);
        fVar8 = *(float *)(s_ICON0_PNG_0078dff8 + iVar24);
        iVar21 = (int)((longlong)*(short *)(pfVar20 + 0x1b) << 5);
        fVar9 = (moby->transform).v0.y;
        fVar10 = (moby->transform).v1.z;
        fVar11 = (moby->transform).v2.y;
        fVar12 = (moby->transform).v1.w;
        fVar13 = (moby->transform).v0.z;
        fVar14 = (moby->transform).v0.w;
        fVar15 = (moby->transform).v2.z;
        fVar16 = (moby->transform).v2.w;
        fVar17 = *(float *)(s_ICON0_PNG_0078dff8 + iVar24 + 4);
        *(float *)((int)&DAT_0095ee40 + iVar21) =
             (moby->transform).v2.x * fVar8 +
             (moby->transform).v0.x * fVar6 + (moby->transform).v1.x * fVar5 + (moby->pos).x;
        *(float *)((int)&DAT_0095ee44 + iVar21) =
             fVar11 * fVar8 + fVar9 * fVar6 + fVar4 * fVar5 + (moby->pos).y;
        fVar4 = (moby->pos).z;
        *(float *)((int)&DAT_0095ee4c + iVar21) =
             fVar16 * fVar8 + fVar14 * fVar6 + fVar12 * fVar5 + fVar17;
        *(float *)((int)&DAT_0095ee48 + iVar21) =
             fVar15 * fVar8 + fVar13 * fVar6 + fVar10 * fVar5 + fVar4;
        uVar30 = (int)moby - (int)MobyInstance;
        if ((int)*(short *)(&DAT_0095ee54 + (int)((longlong)*(short *)(pfVar20 + 0x1b) << 5)) ==
            ((int)uVar30 >> 8) + (uint)((int)uVar30 < 0 && (uVar30 & 0xff) != 0)) {
          return;
        }
        *(undefined2 *)(pfVar20 + 0x1b) = 0xffff;
        return;
      }
      sVar26 = *(short *)((int)pfVar20 + 0x6e) + -1;
      *(short *)((int)pfVar20 + 0x6e) = sVar26;
      if (0 < sVar26) {
        return;
      }
      iVar24 = (int)((longlong)(short)moby->oClass << 4);
      fVar4 = *(float *)(&DAT_0078dff4 + iVar24);
      fVar5 = *(float *)(iVar24 + 0x78dff0);
      fVar6 = *(float *)(s_ICON0_PNG_0078dff8 + iVar24);
      uVar25 = draw::ImpactSprite_Add
                         (0x3ff6666660000000,
                          CONCAT44((moby->transform).v2.x * fVar6 +
                                   (moby->transform).v0.x * fVar5 + (moby->transform).v1.x * fVar4 +
                                   (moby->pos).x,
                                   (moby->transform).v2.y * fVar6 +
                                   (moby->transform).v0.y * fVar5 + (moby->transform).v1.y * fVar4 +
                                   (moby->pos).y),
                          CONCAT44((moby->transform).v2.z * fVar6 +
                                   (moby->transform).v0.z * fVar5 + (moby->transform).v1.z * fVar4 +
                                   (moby->pos).z,
                                   (moby->transform).v2.w * fVar6 +
                                   (moby->transform).v0.w * fVar5 + (moby->transform).v1.w * fVar4 +
                                   *(float *)(s_ICON0_PNG_0078dff8 + iVar24 + 4)));
      *(undefined2 *)(pfVar20 + 0x1b) = uVar25;
      local_60 = (ulonglong)(int)(animationSpeed * 600.5);
      uVar25 = mobyutil::MB_randRange((int)(animationSpeed * 300.5),(int)(animationSpeed * 600.5));
      *(undefined2 *)((int)pfVar20 + 0x6e) = uVar25;
      return;
    }
    if (uVar2 == '\x02') {
      mobyupdate_helpers::M16_002409e0(lVar23,&local_140,0);
      dVar37 = 0.25;
      local_138 = (void *)((float)local_138 + 0.25);
      mobyutil::MB_MtxToEuler((int)(lVar23 + 0xc0),(MobyInstance *)(auStack_160 + 0x10));
      mobyutil::MB_EulerToQuat(afStack_130,(Vec3 *)(auStack_160 + 0x10));
      dVar33 = (double)fastfunc::FastIntToDouble(*(undefined1 *)((int)pfVar20 + 0x57));
      dVar40 = (double)(float)(1.0 / dVar33);
      dVar33 = (double)fastfunc::FastIntToDouble
                                 (dVar33,0x3ff0000000000000,*(undefined1 *)((int)pfVar20 + 0x57));
      dVar41 = (double)fastfunc::FastIntToDouble(*(undefined1 *)((int)pfVar20 + 0x56));
      dVar39 = (double)(float)(dVar33 / dVar41);
      pfVar31 = pfVar20 + 0xc;
      fastfunc::FastSlerp(dVar40,pfVar31,pfVar31,afStack_130);
      dVar33 = (double)(moby->pos).x;
      dVar41 = (double)(moby->pos).y;
      dVar40 = (double)(moby->pos).z;
      (moby->pos).w = local_134;
      fVar4 = (float)(dVar39 * (double)(float)((double)(float)local_138 - dVar40) + dVar40);
      (moby->pos).x = (float)(dVar39 * (double)(float)((double)local_140 - dVar33) + dVar33);
      (moby->pos).y = (float)(dVar39 * (double)(float)((double)(float)local_13c - dVar41) + dVar41);
      (moby->pos).z = fVar4;
      local_60 = (ulonglong)*(byte *)((int)pfVar20 + 0x56);
      (moby->pos).z =
           (float)local_60 * 0.025 *
           -(float)((double)(float)(dVar39 - 0.5) * (double)(float)(dVar39 - 0.5) - dVar37) + fVar4;
      fastfunc::FastQuaternionToMtx4(pfVar31,lVar23 + 0xc0);
      cVar28 = *(char *)((int)pfVar20 + 0x57) + -1;
      *(char *)((int)pfVar20 + 0x57) = cVar28;
      if (cVar28 != '\0') {
        return;
      }
      moby->state = '\x03';
      dVar33 = (double)mobyutil::MB_randRangeFloat(10.0,20.0);
      uVar27 = fastfunc::FastDoubleToInt((double)(float)(dVar33 * (double)animationSpeed));
      *(undefined1 *)((int)pfVar20 + 0x57) = uVar27;
      *(undefined1 *)((int)pfVar20 + 0x56) = uVar27;
      return;
    }
    if (uVar2 != '\x01') {
      if (uVar2 != '\0') {
        return;
      }
      moby->state = '\x03';
      moby->field46_0x73 = '\x14';
      moby->modeBits = MVar29 | LOCK_ROTATION;
      moby->updateDistance = ' ';
      moby->drawDistance = 0x20;
      iVar24 = mobyutil::MB_randInt(2);
      if (iVar24 == 0) {
        *(byte *)((int)pfVar20 + 0x55) = *(byte *)((int)pfVar20 + 0x55) | 1;
      }
      iVar24 = collproc::CollLine(local_190,local_180,0x22,0,0);
      if ((*(char *)(pfVar20 + 0x15) == '\0') && (iVar24 != 0)) {
        *pfVar20 = CollOutput.ip.x;
        pfVar20[1] = CollOutput.ip.y;
        pfVar20[2] = CollOutput.ip.z;
        fVar4 = CollOutput.ip.w;
        pfVar20[7] = 0.0;
        pfVar20[3] = fVar4;
        pfVar20[6] = 0.0;
        pfVar20[5] = 0.0;
        pfVar20[4] = 0.0;
        dVar33 = (double)FUN_005e8338((double)CollOutput.normal.x,(double)CollOutput.normal.y);
        pfVar20[6] = (float)dVar33;
        dVar33 = (double)FUN_005e8338((double)CollOutput.normal.z,
                                      (double)SQRT(CollOutput.normal.x * CollOutput.normal.x +
                                                   CollOutput.normal.y * CollOutput.normal.y));
        pMVar22 = CollOutput.pMoby;
        pfVar20[5] = (float)dVar33;
        if ((pMVar22 != (MobyInstance *)0x0) &&
           (iVar24 = mobyutil::MB_GetPlatformParent(), pMVar22 = CollOutput.pMoby, iVar24 != 0)) {
          pfVar20[0x17] = (float)CollOutput.pMoby;
          mobyutil::MB_PlatformWorldToLocal(lVar23,pMVar22,pfVar20,pfVar20 + 4,pfVar20,pfVar20 + 4);
        }
      }
      else {
        *pfVar20 = (moby->pos).x;
        pfVar20[1] = (moby->pos).y;
        pfVar20[2] = (moby->pos).z;
        fVar4 = (moby->pos).w;
        pfVar20[7] = 0.0;
        pfVar20[3] = fVar4;
        pfVar20[6] = 0.0;
        pfVar20[5] = 0.0;
        pfVar20[4] = 0.0;
      }
      dVar33 = (double)mobyutil::MB_randRot();
      pfVar20[0x14] = (float)dVar33;
      dVar33 = (double)mobyutil::MB_randRot();
      pfVar20[0x16] = (float)dVar33;
      pfVar20[0x1a] = (moby->pos).z;
      local_60 = (ulonglong)(int)(animationSpeed * 600.5);
      uVar25 = mobyutil::MB_randRange(0,(int)(animationSpeed * 600.5));
      *(undefined2 *)((int)pfVar20 + 0x6e) = uVar25;
      *(undefined2 *)(pfVar20 + 0x1b) = 0xffff;
      MVar18 = moby->oClass;
      if (0xe < (short)MVar18) {
        if ((short)MVar18 < 0x10) {
          moby->scale = moby->pClass->gScale * 0.75;
          return;
        }
        if (0x10 < (short)MVar18) {
          return;
        }
        moby->scale = moby->pClass->gScale * 0.6;
        return;
      }
      if ((short)MVar18 < 0xd) {
        return;
      }
      if (0xd < (short)MVar18) {
        moby->scale = moby->pClass->gScale * 0.7;
        return;
      }
      moby->scale = moby->pClass->gScale * 0.65;
      return;
    }
    pfVar20[10] = -(DAT_0071f418 * 10.8 - pfVar20[10]);
    (moby->pos).x = (moby->pos).x + pfVar20[8];
    (moby->pos).y = (moby->pos).y + pfVar20[9];
    (moby->pos).z = (moby->pos).z + pfVar20[10];
    fastfunc::FastQuaternionToMtx4(pfVar20 + 0xc,auStack_f0);
    lVar32 = lVar23 + 0xc0;
    fastfunc::FastVecMtx4MultBatch3(lVar32,auStack_f0,lVar32);
    pMVar22 = g_heroMobyPtr;
    MVar18 = moby->oClass;
    if ((short)MVar18 < 0xe) {
      if (0xc < (short)MVar18) {
        uVar34 = 0x3fc3333340000000;
        goto LAB_00241820;
      }
    }
    else {
      uVar34 = 0x3fcd70a3e0000000;
      if (((short)MVar18 < 0xf) || ((short)MVar18 < 0x10)) goto LAB_00241820;
    }
    uVar34 = 0x3fd0000000000000;
LAB_00241820:
    fVar4 = (moby->pos).z;
    if ((fVar4 < pfVar20[0x1a] - 2.0) && (fVar4 < g_heroPosition.z - 2.0)) {
      dVar33 = (double)mobyutil::MB_randRangeFloat(-15.0,15.0);
      mobyupdate_helpers::M16_00240f38
                ((double)(float)(dVar33 * 0.01745329238474369),0,lVar23,pMVar22);
      return;
    }
    iVar24 = collproc::CollSphere(uVar34,lVar23 + 0x10);
    if (iVar24 == 0) {
      return;
    }
    *pfVar20 = CollOutput.ip.x;
    pfVar20[1] = CollOutput.ip.y;
    pfVar20[2] = CollOutput.ip.z;
    pfVar20[3] = CollOutput.ip.w;
    dVar41 = 0.0;
    pfVar20[7] = 0.0;
    pfVar20[6] = 0.0;
    pfVar20[5] = 0.0;
    pfVar20[4] = 0.0;
    dVar33 = (double)FUN_005e8338((double)CollOutput.normal.x,(double)CollOutput.normal.y);
    pfVar20[6] = (float)dVar33;
    dVar33 = (double)FUN_005e8338((double)CollOutput.normal.z,
                                  (double)SQRT(CollOutput.normal.x * CollOutput.normal.x +
                                               CollOutput.normal.y * CollOutput.normal.y));
    pfVar20[5] = (float)dVar33;
    fVar4 = (moby->pos).x - CollOutput.ip.x;
    fVar5 = (moby->pos).y - CollOutput.ip.y;
    fVar6 = (moby->pos).z - CollOutput.ip.z;
    fastfunc::FastVecNormalize(pfVar20 + 8,pfVar20 + 8,local_170);
    fVar8 = (moby->pos).y - g_heroPosition.y;
    fVar9 = (moby->pos).x - g_heroPosition.x;
    if ((SQRT(fVar9 * fVar9 + fVar8 * fVar8) < DAT_0096bf68) &&
       (ABS((moby->pos).z - g_heroPosition.z) < DAT_0096bf6c)) {
      if (g_heroHealth == 0) {
        return;
      }
      dVar33 = (double)mobyutil::MB_randRangeFloat(3.0,7.0);
      pMVar22 = g_heroMobyPtr;
      fVar5 = pfVar20[9];
      fVar6 = pfVar20[8];
      fVar8 = pfVar20[10];
      dVar37 = (double)SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar5 * fVar5);
      fVar4 = (float)((double)(float)(dVar33 * (double)mobyutil::g_FrameTime) / dVar37);
      dVar33 = dVar41;
      if (dVar41 - dVar37 < 0.0) {
        dVar33 = (double)(fVar6 * fVar4);
      }
      dVar40 = dVar41;
      if (dVar41 - dVar37 < 0.0) {
        dVar40 = (double)(fVar5 * fVar4);
      }
      dVar39 = dVar41;
      if (dVar41 - dVar37 < 0.0) {
        dVar39 = (double)(fVar8 * fVar4);
      }
      if (dVar37 - dVar41 < 0.0) {
        dVar33 = (double)(fVar6 * fVar4);
      }
      if (dVar37 - dVar41 < 0.0) {
        dVar40 = (double)(fVar5 * fVar4);
      }
      if (dVar37 - dVar41 < 0.0) {
        dVar39 = (double)(fVar8 * fVar4);
      }
      pfVar20[8] = (float)dVar33;
      pfVar20[9] = (float)dVar40;
      pfVar20[10] = (float)dVar39;
      mobyupdate_helpers::M16_00240f38(dVar41,dVar41,lVar23,pMVar22);
      return;
    }
    dVar33 = (double)FUN_005e8338((double)fVar6,(double)SQRT(fVar4 * fVar4 + fVar5 * fVar5));
    dVar41 = 0.7853981852531433;
    if (0.7853981852531433 <= dVar33) {
      return;
    }
    dVar33 = (double)FUN_005e8338((double)CollOutput.normal.z,
                                  (double)SQRT(CollOutput.normal.x * CollOutput.normal.x +
                                               CollOutput.normal.y * CollOutput.normal.y));
    if (dVar41 <= dVar33) {
      return;
    }
    moby->state = '\x02';
    dVar33 = (double)mobyutil::MB_randRangeFloat(30.0,40.0);
    uVar27 = fastfunc::FastDoubleToInt((double)(float)(dVar33 * (double)animationSpeed));
    *(undefined1 *)((int)pfVar20 + 0x57) = uVar27;
    *(undefined1 *)((int)pfVar20 + 0x56) = uVar27;
    if ((CollOutput.pMoby != (MobyInstance *)0x0) &&
       (iVar24 = mobyutil::MB_GetPlatformParent(), pMVar22 = CollOutput.pMoby, iVar24 != 0)) {
      pfVar20[0x17] = (float)CollOutput.pMoby;
      mobyutil::MB_PlatformWorldToLocal(lVar23,pMVar22,pfVar20,pfVar20 + 4,pfVar20,pfVar20 + 4);
    }
    mobyutil::MB_MtxToEuler((int)lVar32,(MobyInstance *)auStack_160);
    mobyutil::MB_EulerToQuat(pfVar20 + 0xc,(Vec3 *)auStack_160);
    return;
  }
  if (*(short *)((int)pfVar20[0x18] + 0xa6) == 0) {
    local_120 = fVar4 - hero::g_heroGroundPoint;
    local_11c = fVar5 - DAT_00969f84;
    local_118 = fVar6 - DAT_00969f88;
    local_114 = fVar7;
    FUN_005e825c(&local_120,&local_120,&hero::g_heroGravityMtx);
    fVar4 = 0.0;
    if ((int)local_118 < 0) {
      fVar6 = SQRT(DAT_00969d08 * DAT_00969d08 +
                   DAT_00969d00 * DAT_00969d00 + DAT_00969d04 * DAT_00969d04);
      fVar5 = (mobyutil::g_FrameTime * 7.0) / fVar6;
      local_110.x = fVar4;
      if (0.0 - fVar6 < 0.0) {
        local_110.x = DAT_00969d00 * fVar5;
      }
      local_110.y = fVar4;
      if (0.0 - fVar6 < 0.0) {
        local_110.y = DAT_00969d04 * fVar5;
      }
      if (0.0 - fVar6 < 0.0) {
        fVar4 = DAT_00969d08 * fVar5;
      }
      if (fVar6 - 0.0 < 0.0) {
        local_110.x = DAT_00969d00 * fVar5;
      }
      if (fVar6 - 0.0 < 0.0) {
        local_110.y = DAT_00969d04 * fVar5;
      }
      if (fVar6 - 0.0 < 0.0) {
        fVar4 = DAT_00969d08 * fVar5;
      }
      local_110.x = local_110.x - pfVar20[8];
      local_110.y = local_110.y - pfVar20[9];
      local_110.w = DAT_00969d0c;
      local_110.z = fVar4 - pfVar20[10];
      mobyutil::ClampVec3Magnitude((double)(DAT_0071f418 * 50.0),&local_110);
      pfVar20[8] = pfVar20[8] + local_110.x;
      pfVar20[9] = pfVar20[9] + local_110.y;
      pfVar20[10] = pfVar20[10] + local_110.z;
      goto LAB_002423f0;
    }
  }
  fVar9 = DAT_0071f418;
  fVar4 = pfVar20[9];
  fVar5 = pfVar20[8];
  fVar6 = pfVar20[10];
  fVar8 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
  if (DAT_0071f418 * 10.0 < fVar8) {
    fVar12 = (DAT_0071f418 * 10.0) / fVar8;
    fVar10 = 0.0;
    fVar11 = fVar10;
    if (0.0 - fVar8 < 0.0) {
      fVar11 = fVar6 * fVar12;
    }
    fVar13 = fVar10;
    if (0.0 - fVar8 < 0.0) {
      fVar13 = fVar4 * fVar12;
    }
    if (0.0 - fVar8 < 0.0) {
      fVar10 = fVar5 * fVar12;
    }
    if (fVar8 - 0.0 < 0.0) {
      fVar11 = fVar6 * fVar12;
    }
    if (fVar8 - 0.0 < 0.0) {
      fVar13 = fVar4 * fVar12;
    }
    if (fVar8 - 0.0 < 0.0) {
      fVar10 = fVar5 * fVar12;
    }
    pfVar20[10] = fVar6 - fVar11;
    pfVar20[9] = fVar4 - fVar13;
    pfVar20[8] = fVar5 - fVar10;
  }
  mobyutil::Delt(mobyutil::g_FrameTime * 48.0,fVar9 * 16.0,pfVar20 + 0x19);
  if (mobyutil::g_FrameTime * 8.0 < DAT_00969e40) {
    fVar4 = 0.0;
    fVar8 = SQRT(DAT_00969de8 * DAT_00969de8 +
                 DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4);
    fVar6 = (-(mobyutil::g_FrameTime * 8.0 - DAT_00969e40) * 0.5) / fVar8;
    fVar5 = fVar4;
    if (0.0 - fVar8 < 0.0) {
      fVar5 = DAT_00969de8 * fVar6;
    }
    fVar9 = fVar4;
    if (0.0 - fVar8 < 0.0) {
      fVar9 = DAT_00969de4 * fVar6;
    }
    if (0.0 - fVar8 < 0.0) {
      fVar4 = DAT_00969de0 * fVar6;
    }
    if (fVar8 - 0.0 < 0.0) {
      fVar5 = DAT_00969de8 * fVar6;
    }
    if (fVar8 - 0.0 < 0.0) {
      fVar9 = DAT_00969de4 * fVar6;
    }
    if (fVar8 - 0.0 < 0.0) {
      fVar4 = DAT_00969de0 * fVar6;
    }
    (moby->pos).z = (moby->pos).z + fVar5;
    (moby->pos).y = (moby->pos).y + fVar9;
    (moby->pos).x = (moby->pos).x + fVar4;
  }
LAB_002423f0:
  fastfunc::FastQuaternionToMtx4(pfVar20 + 0xc,auStack_c0);
  fastfunc::FastVecMtx4MultBatch3(lVar23 + 0xc0,auStack_c0,lVar23 + 0xc0);
  fVar4 = (moby->pos).x + pfVar20[8];
  dVar41 = (double)fVar4;
  (moby->pos).x = fVar4;
  fVar4 = (moby->pos).y + pfVar20[9];
  dVar37 = (double)fVar4;
  (moby->pos).y = fVar4;
  fVar4 = (moby->pos).z + pfVar20[10];
  dVar40 = (double)fVar4;
  (moby->pos).z = fVar4;
  fVar4 = (float)((double)DAT_00969db4 - dVar37);
  fVar5 = (float)((double)hero::g_heroCGPos - dVar41);
  fVar6 = (float)((double)DAT_00969db8 - dVar40);
  dVar33 = (double)pfVar20[0x19];
  if ((double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) <= dVar33) {
    mobyupdate_helpers::M16_00240678(lVar23);
    if (moby < MobyInstancePermEnd) {
      bVar3 = moby->levelFlagIdx;
      uVar19 = moby->uid;
      (&DAT_00a53964)[(short)uVar19] = bVar3 + 2;
      if ((bVar3 == 0xff) || (((&DAT_00a202c0)[bVar3] != -1 && (g_LevelFlags[Level][bVar3] == -1))))
      {
        (&DAT_00a545c4)[(short)uVar19] = bVar3 + 2;
      }
    }
    mobyfunc::DeleteMoby(moby);
  }
  else {
    dVar39 = 0.0;
    if ((pfVar20[0x13] != 0.0) || (pfVar20[0x12] != 0.0)) {
      local_f4 = (void *)0x0;
      local_100 = (void *)0x0;
      local_fc = (Manipulator *)pfVar20[0x12];
      dVar37 = (double)(DAT_00969d44 * fVar6 + DAT_00969d24 * fVar5 + DAT_00969d34 * fVar4);
      dVar33 = (double)(DAT_00969d40 * fVar6 + hero::g_heroGravityMtx * fVar5 + DAT_00969d30 * fVar4
                       );
      dVar41 = (double)(DAT_00969d48 * fVar6 + DAT_00969d28 * fVar5 + DAT_00969d38 * fVar4);
      local_f8 = (void *)pfVar20[0x13];
      fastfunc::FastEulerToMtx(&local_90,&local_100);
      fVar6 = (float)((double)local_6c * dVar41 +
                     (double)(float)((double)local_8c * dVar33 +
                                    (double)(float)((double)local_7c * dVar37)));
      fVar8 = (float)((double)local_70 * dVar41 +
                     (double)(float)((double)local_90 * dVar33 +
                                    (double)(float)((double)local_80 * dVar37)));
      fVar9 = (float)((double)local_68 * dVar41 +
                     (double)(float)((double)local_88 * dVar33 +
                                    (double)(float)((double)local_78 * dVar37)));
      dVar33 = (double)pfVar20[0x19];
      dVar41 = (double)(moby->pos).x;
      dVar37 = (double)(moby->pos).y;
      dVar40 = (double)(moby->pos).z;
      fVar5 = DAT_00969d00 * fVar9 + hero::g_heroMtx * fVar8 + DAT_00969cf0 * fVar6;
      fVar4 = DAT_00969d04 * fVar9 + DAT_00969ce4 * fVar8 + DAT_00969cf4 * fVar6;
      fVar6 = DAT_00969d08 * fVar9 + DAT_00969ce8 * fVar8 + DAT_00969cf8 * fVar6;
    }
    dVar38 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
    fVar8 = (float)(dVar33 / dVar38);
    dVar33 = dVar39;
    if (dVar39 - dVar38 < 0.0) {
      dVar33 = (double)(fVar6 * fVar8);
    }
    dVar35 = dVar39;
    if (dVar39 - dVar38 < 0.0) {
      dVar35 = (double)(fVar4 * fVar8);
    }
    dVar36 = dVar39;
    if (dVar39 - dVar38 < 0.0) {
      dVar36 = (double)(fVar5 * fVar8);
    }
    if (dVar38 - dVar39 < 0.0) {
      dVar33 = (double)(fVar6 * fVar8);
    }
    if (dVar38 - dVar39 < 0.0) {
      dVar35 = (double)(fVar4 * fVar8);
    }
    if (dVar38 - dVar39 < 0.0) {
      dVar36 = (double)(fVar5 * fVar8);
    }
    (moby->pos).z = (float)(dVar40 + dVar33);
    (moby->pos).y = (float)(dVar37 + dVar35);
    (moby->pos).x = (float)(dVar41 + dVar36);
  }
  return;
}



//==== 00242738  ns=Global  size=0x454
// sig: undefined MB_SpawnBolts(undefined4 moby, Vec4 * param_2, undefined4 param_3, undefined4 param_4, uint boltValue, undefined1 param_6)
// callers(4): 000fcd60 mobyutil::MB_DistributeBolts; 001d67f0 mobyupdate_unsorted::UpdateMoby_1124; 0037a2b8 mobyupdate_helpers::M438_0037a2b8; 003d2c48 mobyupdate_unsorted::UpdateMoby_585
// callees(10): 000efa28 mobyfunc::CreateMoby; 000f1ec8 mobyfunc::SetColorOfMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 0010c038 mobyutil::MB_AxisAngleToQuat; 00240f38 mobyupdate_helpers::M16_00240f38; 00500b64 fastfunc::FastEulerToMtx
// strings: 00242708: '?&ff?333?@' (raw) | 0024270c: '?333?@' (raw)

MobyInstance *
MB_SpawnBolts(MobyInstance *moby,Vec4 *param_2,undefined4 *param_3,uint param_4,uint boltValue,
             undefined1 param_6)

{
  void *pvVar1;
  MobyInstance *pMVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float angle;
  float fVar7;
  uint uVar8;
  MobyInstance *boltMoby;
  MobyInstance *pMVar9;
  undefined2 uVar11;
  int iVar10;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  if (boltValue == 0x32) {
    boltMoby = mobyfunc::CreateMoby(BOLT_CIRCLENUT);
    fVar3 = 0.6;
  }
  else if (boltValue == 0x14) {
    boltMoby = mobyfunc::CreateMoby(BOLT_STARNUT);
    fVar3 = 0.75;
  }
  else if (boltValue == 5) {
    boltMoby = mobyfunc::CreateMoby(BOLT_HEXNUT);
    fVar3 = 0.7;
  }
  else {
    boltMoby = mobyfunc::CreateMoby(BOLT);
    fVar3 = 0.65;
  }
  if (boltMoby == (MobyInstance *)0x0) {
    g_boltCount = g_boltCount + boltValue;
    g_totalBoltsCollected = g_totalBoltsCollected + boltValue;
  }
  else {
    pvVar1 = boltMoby->pVar;
    *(undefined1 *)((int)pvVar1 + 0x40) = param_6;
    pMVar9 = moby;
    if (moby != (MobyInstance *)0x0) {
      pMVar2 = moby->field80_0xb8;
      while (pMVar2 != (MobyInstance *)0x0) {
        pMVar9 = pMVar9->field80_0xb8;
        pMVar2 = pMVar9->field80_0xb8;
      }
    }
    boltMoby->field80_0xb8 = pMVar9;
    boltMoby->field46_0x73 = '\x14';
    boltMoby->updateDistance = '@';
    boltMoby->drawDistance = 0x40;
    boltMoby->enabled = '\x01';
    boltMoby->state = '\x01';
    boltMoby->modeBits = boltMoby->modeBits | LOCK_ROTATION;
    boltMoby->scale = boltMoby->pClass->gScale * fVar3;
    fastfunc::FastEulerToMtx(&boltMoby->transform,&boltMoby->rotation);
    if ((moby->modeBits & HAS_SPECIAL_VARS) == NONE) {
      uVar8 = moby->light;
      boltMoby->color = moby->color;
      boltMoby->light = uVar8;
    }
    else {
      iVar10 = *(int *)((int)moby->pVar + 0xc);
      if (iVar10 == 0) {
        uVar8 = moby->light;
        boltMoby->color = moby->color;
        boltMoby->light = uVar8;
      }
      else {
        mobyfunc::SetColorOfMoby
                  (boltMoby,(ulonglong)*(byte *)(iVar10 + 4),(ulonglong)*(byte *)(iVar10 + 5),
                   (ulonglong)*(byte *)(iVar10 + 6));
      }
    }
    uVar11 = mobyutil::MB_randRange(0,(int)(animationSpeed * 600.5));
    *(undefined2 *)((int)pvVar1 + 0x6e) = uVar11;
    *(undefined2 *)((int)pvVar1 + 0x6c) = 0xffff;
    (boltMoby->pos).x = param_2->x;
    (boltMoby->pos).y = param_2->y;
    (boltMoby->pos).z = param_2->z;
    (boltMoby->pos).w = param_2->w;
    *(undefined4 *)((int)pvVar1 + 0x20) = *param_3;
    *(undefined4 *)((int)pvVar1 + 0x24) = param_3[1];
    *(undefined4 *)((int)pvVar1 + 0x28) = param_3[2];
    *(undefined4 *)((int)pvVar1 + 0x2c) = param_3[3];
    iVar10 = mobyutil::MB_randInt(2);
    if (iVar10 != 0) {
      *(byte *)((int)pvVar1 + 0x55) = *(byte *)((int)pvVar1 + 0x55) | 1;
    }
    dVar12 = (double)mobyutil::MB_randRot();
    *(float *)((int)pvVar1 + 0x50) = (float)dVar12;
    dVar12 = (double)mobyutil::MB_randRot();
    *(float *)((int)pvVar1 + 0x58) = (float)dVar12;
    *(f32 *)((int)pvVar1 + 0x68) = (boltMoby->pos).z;
    dVar15 = 0.0;
    dVar12 = (double)mobyutil::MB_randRangeFloat(0.0,DAT_0078e0b0);
    fVar3 = (moby->pos).x - (boltMoby->pos).x;
    fVar5 = (moby->pos).z - (boltMoby->pos).z;
    fVar6 = (moby->pos).y - (boltMoby->pos).y;
    dVar16 = 0.01745329238474369;
    fVar4 = fVar5 * *(float *)((int)pvVar1 + 0x20) - fVar3 * *(float *)((int)pvVar1 + 0x28);
    fVar5 = fVar6 * *(float *)((int)pvVar1 + 0x28) - fVar5 * *(float *)((int)pvVar1 + 0x24);
    fVar3 = fVar3 * *(float *)((int)pvVar1 + 0x24) - fVar6 * *(float *)((int)pvVar1 + 0x20);
    angle = (float)(dVar12 * 0.01745329238474369) * mobyutil::g_FrameTime;
    fVar6 = fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4;
    dVar12 = dVar15;
    dVar13 = dVar15;
    dVar14 = dVar15;
    if ((double)SQRT(fVar6) != dVar15) {
      fVar7 = 1.0 / SQRT(fVar6);
      fVar7 = -(fVar6 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
      fVar7 = -(fVar6 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
      fVar7 = -(fVar6 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
      dVar12 = (double)(fVar5 * fVar7);
      dVar13 = (double)(fVar4 * fVar7);
      dVar14 = (double)(fVar3 * fVar7);
    }
    *(float *)((int)pvVar1 + 0x30) = (float)dVar12;
    *(float *)((int)pvVar1 + 0x34) = (float)dVar13;
    *(float *)((int)pvVar1 + 0x38) = (float)dVar14;
    *(undefined4 *)((int)pvVar1 + 0x3c) = 0;
    mobyutil::MB_AxisAngleToQuat(angle,(float *)((int)pvVar1 + 0x30),(float *)((int)pvVar1 + 0x30));
    if ((param_4 & 2) != 0) {
      dVar12 = dVar15;
      if ((param_4 & 0x10) != 0) {
        dVar13 = (double)mobyutil::MB_randRangeFloat(-30.0,30.0);
        dVar15 = (double)(float)(dVar13 * dVar16);
      }
      mobyupdate_helpers::M16_00240f38(dVar15,dVar12,boltMoby,g_heroMobyPtr);
    }
    mobyfunc::UpdateMobyTransform(boltMoby);
  }
  return boltMoby;
}



//==== 00242b8c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1300_00242b8c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1300_00242b8c(void)

{
  DAT_0078e14c = 0x10000;
  return;
}



//==== 00242ba0  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1300(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1300 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1300(MobyInstance *moby)

{
  return moby;
}



//==== 00242c28  ns=mobyupdate_unsorted  size=0xb98
// sig: undefined UpdateMoby_{351_1301}(MobyInstance * moby)
// callers(0): 
// callees(17): 0002eff8 camera0::Cam0_SetCPosGainDamp; 0002f03c camera0::Cam0_disableLOS; 0002f064 camera0::Cam0_SetCamPull; 00032dd0 camera0::Cam0_DisableUserCam; 000a0c38 hero::Hero_Warp; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 0012aee8 partupd::SpawnPart_45; 0012f8c0 partupd::SpawnPart_53; 0015d12c sound::PlayMobySound; 004fff60 fastfunc::FastDecTimerS32; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor; 00502b08 fastfunc::FastVecAddSelf
// strings: 00242be0: '?333Ap' (raw)

/* Moby 351
   Moby 1301 */

void mobyupdate_unsorted::UpdateMoby__351_1301_(MobyInstance *moby)

{
  float fVar1;
  int *piVar2;
  undefined2 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  uint uVar10;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  undefined8 in_LR;
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
  undefined8 uVar25;
  double dVar26;
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
  float local_170;
  float local_16c;
  float local_168;
  undefined1 local_160 [16];
  undefined1 auStack_150 [32];
  undefined1 local_130 [16];
  undefined1 auStack_120 [16];
  undefined1 local_110 [40];
  
  piVar2 = (int *)moby->pVar;
  if (moby->state == '\0') {
    auVar36 = ZEXT416(0xffffffff);
    auVar34 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
    auVar36 = ZEXT416(0xffffffff);
    auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
    auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
    auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
    auVar36 = loadVectorLeftIndexed(0xffffffffffffe174,0x790000);
    DAT_00f155a4 = 0;
    auVar34 = vectorConvertFromSignedFixedPointWord(auVar36,0);
    auVar36 = loadVectorLeftIndexed(in_LR,0x242ba8);
    auVar33 = loadVectorLeftIndexed(0xffffffffffffe170,0x790000);
    auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar32 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
    auVar33 = vectorConvertFromSignedFixedPointWord(auVar33,0);
    auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar36 = vectorAddFloatingPoint(auVar34,auVar32);
    auVar34 = vectorAddFloatingPoint(auVar33,auVar32);
    auVar36 = vectorMultiplyAddFloatingPoint(auVar38,auVar36,auVar35);
    auVar34 = vectorMultiplyAddFloatingPoint(auVar38,auVar34,auVar37);
    auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
    auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
    auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
    DAT_0078e174 = storeVectorElementWordIndexed
                             (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                              0xffffffffffffe174,0x790000);
    auVar36 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
    DAT_0078e170 = storeVectorElementWordIndexed
                             (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                              0xffffffffffffe170,0x790000);
    moby->state = '\x01';
  }
  if (((g_heroType == '\x01') && (*piVar2 != -1)) &&
     (fVar1 = (moby->pos).y - g_heroPosition.y, fVar4 = (moby->pos).x - g_heroPosition.x,
     dVar21 = 0.5, SQRT(fVar4 * fVar4 + fVar1 * fVar1) < 0.5)) {
    iVar14 = 0;
    dVar22 = 0.10000000149011612;
    dVar23 = 1.0;
    dVar24 = 0.0;
    dVar26 = 2.5;
    dVar27 = 5.0;
    dVar28 = 0.07000000029802322;
    dVar29 = 0.699999988079071;
    dVar31 = 15.0;
    do {
      dVar15 = (double)mobyutil::MB_randRangeFloat((float)dVar22,(float)dVar23);
      uVar10 = mobyutil::MB_randRange(0x40,0xff);
      uVar8 = mobyutil::MB_randRange(0x40,0xff);
      uVar9 = mobyutil::MB_randRange(0x40,0xff);
      mobyutil::MB_randRot();
      mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar21);
      mobyutil::MB_randRot();
      mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar21);
      mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar21);
      fastfunc::FastVecAddSelf(auStack_150,local_160,&g_heroPosition);
      dVar16 = (double)mobyutil::MB_randRangeFloat((float)dVar24,mobyutil::g_FrameTime);
      dVar20 = (double)SQRT(local_168 * local_168 + local_170 * local_170 + local_16c * local_16c);
      dVar19 = (double)(local_170 * (float)(dVar16 / dVar20));
      dVar17 = (double)(local_16c * (float)(dVar16 / dVar20));
      dVar16 = dVar24;
      if (dVar24 - dVar20 < 0.0) {
        dVar16 = dVar19;
      }
      dVar18 = dVar24;
      if (dVar24 - dVar20 < 0.0) {
        dVar18 = dVar17;
      }
      if (dVar20 - dVar24 < 0.0) {
        dVar16 = dVar19;
      }
      if (dVar20 - dVar24 < 0.0) {
        dVar18 = dVar17;
      }
      local_170 = (float)dVar16;
      local_16c = (float)dVar18;
      dVar16 = (double)mobyutil::MB_randRangeFloat
                                 ((float)((double)mobyutil::g_FrameTime * dVar26),
                                  (float)((double)mobyutil::g_FrameTime * dVar27));
      local_168 = (float)dVar16;
      iVar11 = mobyutil::MB_randRange(0xf,0x1e);
      dVar16 = (double)(float)(dVar15 * dVar28);
      dVar15 = (double)(float)(dVar15 * dVar29);
      fVar1 = animationSpeed * (float)((double)(longlong)iVar11 + dVar21);
      iVar11 = mobyutil::MB_randInt(2);
      uVar13 = (LZCOUNT(-iVar11) << 0x3a) >> 0x3f;
      uVar12 = uVar13 & 0xfffffffffffffffe;
      partupd::SpawnPart_53
                (dVar16,dVar15,(double)(float)((double)DAT_0071f418 * dVar31),local_160,(int)fVar1,
                 uVar12,uVar13,
                 (uint)((uVar8 & 0xffffffff) << 8) | uVar10 | (uint)((uVar9 & 0xffffffff) << 0x10) |
                 0x7f000000,0,uVar12 + 1,&local_170);
      iVar14 = iVar14 + 1;
    } while (iVar14 < 10);
    sound::PlayMobySound(0,0,moby);
    hero::Hero_Warp(&MobyInstance[*piVar2].pos.x,&MobyInstance[*piVar2].rotation.x,0x43,0);
    pvVar7 = GameCamera.pCurrentUpdCam;
    DAT_00f155a4 = DAT_0078e170;
    if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar34 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar32 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar36 = loadVectorLeftIndexed(0x40,0x242ba8);
      auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar32,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                           auVar34);
      auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36 = vectorSplatHalfWord(auVar36,1);
      uVar3 = storeVectorElementHalfWordIndexed
                        (auVar36,0x20,(ulonglong)*(uint *)((int)GameCamera.pCurrentUpdCam + 0x70));
      *(undefined2 *)(*(uint *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x20) = uVar3;
                    /* WARNING: Load size is inaccurate */
      *(undefined4 *)((int)pvVar7 + 0x40) = *pvVar7;
      *(undefined4 *)((int)pvVar7 + 0x44) = *(undefined4 *)((int)pvVar7 + 4);
      *(undefined4 *)((int)pvVar7 + 0x48) = *(undefined4 *)((int)pvVar7 + 8);
      *(undefined4 *)((int)pvVar7 + 0x4c) = *(undefined4 *)((int)pvVar7 + 0xc);
    }
    iVar14 = 0;
    fVar1 = -1.0;
    do {
      dVar16 = (double)fVar1;
      mobyutil::MB_randRangeFloat(fVar1,(float)dVar23);
      fVar1 = (float)dVar16;
      mobyutil::MB_randRangeFloat((float)dVar16,(float)dVar23);
      dVar16 = (double)mobyutil::MB_randRangeFloat((float)dVar22,(float)dVar23);
      mobyutil::MB_randRange(0x40,0xff);
      mobyutil::MB_randRange(0x40,0xff);
      mobyutil::MB_randRange(0x40,0xff);
      mobyutil::MB_randRot();
      mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar21);
      mobyutil::MB_randRot();
      mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar21);
      mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar21);
      fastfunc::FastVecAddSelf(auStack_120,local_130,&MobyInstance[*piVar2].pos);
      mobyutil::MB_randRangeFloat((float)dVar24,mobyutil::g_FrameTime);
      mobyutil::MB_randRangeFloat
                ((float)((double)mobyutil::g_FrameTime * dVar26),
                 (float)((double)mobyutil::g_FrameTime * dVar27));
      iVar11 = mobyutil::MB_randRange(0xf,0x1e);
      dVar15 = (double)(float)(dVar16 * dVar28);
      dVar16 = (double)(float)(dVar16 * dVar29);
      fVar4 = animationSpeed * (float)((double)(longlong)iVar11 + dVar21);
      mobyutil::MB_randInt(2);
      partupd::SpawnPart_53
                (dVar15,dVar16,(double)(float)((double)DAT_0071f418 * dVar31),local_130,(int)fVar4);
      iVar14 = iVar14 + 1;
    } while (iVar14 < 10);
  }
  if ((worldUpdateTime ==
       (worldUpdateTime / (int)(animationSpeed * 60.5)) * (int)(animationSpeed * 60.5)) &&
     (*piVar2 != -1)) {
    uVar25 = 0x4030000000000000;
    uVar30 = 0;
    dVar21 = 315000.0;
    dVar22 = -1.5;
    for (iVar14 = 0; iVar11 = fastfunc::FastDoubleToInt(uVar25), iVar14 < iVar11;
        iVar14 = iVar14 + 1) {
      fastfunc::FastIntToDouble(iVar14);
      iVar11 = partupd::SpawnPart_45
                         (uVar30,(double)(float)((double)mobyutil::g_FrameTime * dVar21),local_110,
                          &DAT_00720000,0,0x1eff7f40);
      if (iVar11 != 0) {
        *(undefined4 *)(iVar11 + 0x20) = 0;
        *(undefined4 *)(iVar11 + 0x24) = 0;
        *(float *)(iVar11 + 0x28) = (float)((double)mobyutil::g_FrameTime * dVar22);
      }
    }
  }
  fVar1 = (float)(longlong)(worldUpdateTime % 0x96) * 0.006666667 * 2.0 * 3.1415927;
  if (3.1415927 - fVar1 < 0.0) {
    fVar1 = fVar1 - 6.2831855;
  }
  fVar4 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar4 = fVar1;
  }
  fVar5 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
    fVar5 = fVar4;
  }
  fVar1 = fVar5 * fVar5;
  fVar4 = fVar1 * fVar1 * fVar5;
  fVar6 = fVar1 * fVar4;
  uVar10 = fastfunc::FastLerpColor
                     ((double)((fVar1 * fVar6 * 2.601887e-06 +
                                fVar6 * -0.0001980741 +
                                fVar4 * 0.0083330255 + fVar1 * fVar5 * -0.16666657 + fVar5 + 1.0) *
                              0.5),0xffffffff80464646,0xffffffff80828282);
  moby->field60_0x90 = uVar10;
  fastfunc::FastDecTimerS32(&DAT_00f155a4);
  if (DAT_00f155a4 != 0) {
    dVar21 = 0.0020000000949949026;
    if (DAT_00f155a4 <= DAT_0078e174) {
      dVar22 = (double)fastfunc::FastIntToDouble(DAT_00f155a4);
      dVar23 = (double)fastfunc::FastIntToDouble(DAT_0078e174);
      dVar21 = (double)(float)((double)(float)(dVar22 / dVar23) * 0.007999999448657036 + dVar21);
    }
    camera0::Cam0_SetCPosGainDamp(dVar21,0x3fc99999a0000000);
    camera0::Cam0_DisableUserCam();
    camera0::Cam0_disableLOS();
    camera0::Cam0_SetCamPull(0);
  }
  return;
}



//==== 002437c0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1304_002437c0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1304_002437c0(void)

{
  DAT_0078e1c4 = 0x10000;
  return;
}



//==== 002437d8  ns=mobyupdate_unsorted  size=0x24
// sig: undefined UpdateMoby_1304(MobyInstance * moby)
// callers(0): 
// callees(1): 000efb38 mobyfunc::DeleteMoby

/* Moby 1304 */

void mobyupdate_unsorted::UpdateMoby_1304(MobyInstance *moby)

{
  mobyfunc::DeleteMoby(moby);
  return;
}



//==== 002437fc  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1314_002437fc(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1314_002437fc(void)

{
  DAT_0078e23c = 0x10000;
  return;
}



//==== 00243810  ns=Global  size=0x1c0
// sig: undefined FUN_00243810(void)
// callers(1): 00244840 mobyupdate_unsorted::UpdateMoby_1309
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f1114 mobyfunc::GetBonePosition; 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance * FUN_00243810(int param_1,float *param_2,MOBY_OCLASSES param_3)

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
  undefined4 *puVar10;
  undefined4 *puVar11;
  MobyInstance *pMVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float local_30;
  float local_2c;
  float local_28;
  
  pMVar12 = mobyfunc::CreateMoby(param_3);
  if (pMVar12 != (MobyInstance *)0x0) {
    pMVar12->updateDistance = -1;
    pMVar12->drawDistance = 0xff;
    pMVar12->enabled = '\x01';
    pMVar12->state = '\x02';
    *(int *)((int)pMVar12->pVar + 0x1c) = param_1;
    pMVar12->scale =
         (pMVar12->pClass->gScale * *(float *)(param_1 + 0x2c)) /
         *(float *)(*(int *)(param_1 + 0x24) + 0x24);
    (pMVar12->pos).x = *param_2;
    (pMVar12->pos).y = param_2[1];
    (pMVar12->pos).z = param_2[2];
    (pMVar12->pos).w = param_2[3];
    mobyfunc::UpdateMobyTransform(pMVar12);
    mobyfunc::GetBonePosition(pMVar12,0,&local_30);
    fVar7 = *param_2 - local_30;
    fVar8 = param_2[1] - local_2c;
    fVar9 = param_2[2] - local_28;
    fVar1 = *(float *)(param_1 + 0xd4);
    fVar2 = *(float *)(param_1 + 0xc4);
    fVar3 = *(float *)(param_1 + 0xd8);
    fVar4 = *(float *)(param_1 + 0xe4);
    fVar5 = *(float *)(param_1 + 200);
    fVar6 = *(float *)(param_1 + 0xe8);
    (pMVar12->pos).x =
         *(float *)(param_1 + 0xd0) * fVar8 +
         *(float *)(param_1 + 0xe0) * fVar9 + *(float *)(param_1 + 0xc0) * fVar7 + *param_2;
    (pMVar12->pos).y = param_2[1] + fVar4 * fVar9 + fVar2 * fVar7 + fVar1 * fVar8;
    (pMVar12->pos).z = param_2[2] + fVar6 * fVar9 + fVar5 * fVar7 + fVar3 * fVar8;
    (pMVar12->pos).w = param_2[3];
    (pMVar12->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar12->rotation).y = *(f32 *)(param_1 + 0x44);
    (pMVar12->rotation).z = *(f32 *)(param_1 + 0x48);
    (pMVar12->rotation).w = *(f32 *)(param_1 + 0x4c);
    puVar10 = (undefined4 *)(param_1 + 0xc0U & 0xfffffff0);
    uVar15 = puVar10[2];
    uVar14 = puVar10[1];
    uVar13 = *puVar10;
    puVar11 = (undefined4 *)(param_1 + 0xd0U & 0xfffffff0);
    uVar19 = puVar11[3];
    uVar18 = puVar11[2];
    uVar17 = puVar11[1];
    uVar16 = *puVar11;
    puVar11 = (undefined4 *)(param_1 + 0xe0U & 0xfffffff0);
    uVar23 = puVar11[3];
    uVar22 = puVar11[2];
    uVar21 = puVar11[1];
    uVar20 = *puVar11;
    puVar11 = (undefined4 *)((uint)&pMVar12->transform & 0xfffffff0);
    puVar11[3] = puVar10[3];
    puVar11[2] = uVar15;
    puVar11[1] = uVar14;
    *puVar11 = uVar13;
    puVar10 = (undefined4 *)((uint)&(pMVar12->transform).v1 & 0xfffffff0);
    puVar10[3] = uVar19;
    puVar10[2] = uVar18;
    puVar10[1] = uVar17;
    *puVar10 = uVar16;
    puVar10 = (undefined4 *)((uint)&(pMVar12->transform).v2 & 0xfffffff0);
    puVar10[3] = uVar23;
    puVar10[2] = uVar22;
    puVar10[1] = uVar21;
    *puVar10 = uVar20;
    mobyfunc::UpdateMobyTransform(pMVar12);
  }
  return pMVar12;
}



//==== 00243a70  ns=mobyupdate_unsorted  size=0xd0c
// sig: undefined UpdateMoby_a_lot_9(MobyInstance * moby)
// callers(0): 
// callees(14): 00059e20 collproc::CollSphere; 00060780 collproc::CollHotspot; 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 001206e8 partupd::SpawnPart_2; 00123390 partupd::SpawnPart_11; 00341590 FUN_00341590; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt

/* Moby 1307
   Moby 1308
   Moby 1310
   Moby 1311
   Moby 1312
   Moby 1313
   Moby 1314 */

void mobyupdate_unsorted::UpdateMoby_a_lot_9(MobyInstance *moby)

{
  byte bVar1;
  char cVar2;
  float fVar3;
  float *pfVar4;
  undefined4 uVar5;
  f32 fVar6;
  uint uVar7;
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
  undefined4 uVar19;
  longlong lVar20;
  longlong lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 in_r5;
  int iVar24;
  double dVar25;
  undefined8 uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  float local_140;
  float local_13c;
  float local_138;
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined4 local_e0 [2];
  longlong local_d8;
  
  lVar20 = (longlong)(int)moby;
  bVar1 = moby->state;
  pfVar4 = (float *)moby->pVar;
  if (bVar1 < 4) {
    if (bVar1 < 3) {
      cVar2 = moby->setByGroup;
      if (pfVar4[7] != 0.0) {
        cVar2 = *(char *)((int)pfVar4[7] + 0xbc);
        moby->setByGroup = cVar2;
      }
      if (cVar2 == '\x01') {
        moby->state = '\x03';
      }
    }
    else {
      mobyutil::MB_SpawnExplosionSparks
                (0x4010000000000000,0x402a000000000000,lVar20,lVar20 + 0x10,in_r5,0xffffffffffffffff
                );
      mobyfunc::GetBonePosition(lVar20,0,&local_140);
      fVar8 = (moby->pos).x - local_140;
      *pfVar4 = fVar8;
      fVar9 = (moby->pos).y - local_13c;
      pfVar4[1] = fVar9;
      fVar10 = (moby->pos).z - local_138;
      pfVar4[2] = fVar10;
      pfVar4[3] = (moby->pos).w;
      fVar18 = mobyutil::g_FrameTime;
      fVar11 = SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9);
      fVar3 = 0.0;
      fVar12 = (mobyutil::g_FrameTime * 10.0) / fVar11;
      fVar13 = fVar3;
      if (0.0 - fVar11 < 0.0) {
        fVar13 = fVar8 * fVar12;
      }
      fVar15 = fVar3;
      if (0.0 - fVar11 < 0.0) {
        fVar15 = fVar9 * fVar12;
      }
      fVar16 = fVar3;
      if (0.0 - fVar11 < 0.0) {
        fVar16 = fVar10 * fVar12;
      }
      if (fVar11 - 0.0 < 0.0) {
        fVar13 = fVar8 * fVar12;
      }
      if (fVar11 - 0.0 < 0.0) {
        fVar15 = fVar9 * fVar12;
      }
      if (fVar11 - 0.0 < 0.0) {
        fVar16 = fVar10 * fVar12;
      }
      *pfVar4 = fVar13;
      pfVar4[1] = fVar15;
      pfVar4[2] = fVar16;
      fVar10 = local_13c - g_heroPosition.y;
      fVar11 = local_140 - g_heroPosition.x;
      fVar12 = local_138 - g_heroPosition.z;
      fVar17 = SQRT(fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10);
      fVar9 = (fVar18 * 15.0) / fVar17;
      fVar8 = fVar3;
      if (0.0 - fVar17 < 0.0) {
        fVar8 = fVar12 * fVar9;
      }
      fVar14 = fVar3;
      if (0.0 - fVar17 < 0.0) {
        fVar14 = fVar10 * fVar9;
      }
      if (0.0 - fVar17 < 0.0) {
        fVar3 = fVar11 * fVar9;
      }
      if (fVar17 - 0.0 < 0.0) {
        fVar8 = fVar12 * fVar9;
      }
      if (fVar17 - 0.0 < 0.0) {
        fVar14 = fVar10 * fVar9;
      }
      if (fVar17 - 0.0 < 0.0) {
        fVar3 = fVar11 * fVar9;
      }
      pfVar4[2] = fVar16 + fVar8;
      pfVar4[1] = fVar15 + fVar14;
      *pfVar4 = fVar13 + fVar3;
      dVar35 = -1.5707963705062866;
      dVar33 = 1.5707963705062866;
      dVar25 = (double)mobyutil::MB_randRangeFloat(fVar18 * -1.5707964,fVar18 * 1.5707964);
      pfVar4[4] = (float)dVar25;
      dVar25 = (double)mobyutil::MB_randRangeFloat
                                 ((float)((double)mobyutil::g_FrameTime * dVar35),
                                  (float)((double)mobyutil::g_FrameTime * dVar33));
      pfVar4[5] = (float)dVar25;
      dVar25 = (double)mobyutil::MB_randRangeFloat
                                 ((float)(longlong)(animationSpeed * 90.5),
                                  (float)(longlong)(animationSpeed * 150.5));
      pfVar4[6] = (float)(int)dVar25;
      moby->state = '\x04';
    }
  }
  else if (bVar1 < 5) {
    pfVar4[2] = -(DAT_0071f418 * 10.8 - pfVar4[2]);
    fVar3 = (moby->rotation).x;
    (moby->pos).x = (moby->pos).x + *pfVar4;
    (moby->pos).y = (moby->pos).y + pfVar4[1];
    (moby->pos).z = (moby->pos).z + pfVar4[2];
    dVar25 = (double)fastfunc::FastWrapRot(fVar3,pfVar4[4]);
    (moby->rotation).x = (float)dVar25;
    dVar25 = (double)fastfunc::FastWrapRot((moby->rotation).y,pfVar4[5]);
    fVar6 = (moby->pos).x;
    (moby->rotation).y = (float)dVar25;
    uVar7 = (int)fVar6 >> 0x1f;
    iVar24 = (uVar7 >> 1 ^ (uint)fVar6) - uVar7;
    if ((((iVar24 < 0x41400000) || (0x447cc000 < iVar24)) ||
        (fVar6 = (moby->pos).y, uVar7 = (int)fVar6 >> 0x1f,
        iVar24 = (uVar7 >> 1 ^ (uint)fVar6) - uVar7, 0x447cc000 < iVar24 || iVar24 < 0x41400000)) ||
       ((fVar6 = (moby->pos).z, uVar7 = (int)fVar6 >> 0x1f,
        iVar24 = (uVar7 >> 1 ^ (uint)fVar6) - uVar7, iVar24 < 0x41400000 || (0x447cc000 < iVar24))))
    {
      mobyfunc::DeleteMoby(moby);
    }
    else {
      iVar24 = mobyutil::MB_randInt(3);
      if (iVar24 == 0) {
        local_e0[0] = 0x2f000000;
        local_e0[1] = 0x3f000000;
        lVar21 = mobyutil::MB_randInt(2);
        dVar25 = (double)animationSpeed;
        uVar26 = 0x41186a0000000000;
        uVar5 = *(undefined4 *)((int)local_e0 + (int)(lVar21 << 2));
        local_d8 = (longlong)(int)(dVar25 * 20.5);
        mobyutil::MB_randRange
                  (local_d8,dVar25,0x41186a0000000000,(int)(dVar25 * 15.5),(int)(dVar25 * 20.5));
        local_d8 = (longlong)(int)(animationSpeed * 30.5);
        mobyutil::MB_randRange((int)(animationSpeed * 25.5),(int)(animationSpeed * 30.5));
        dVar25 = (double)mobyutil::MB_randRangeFloat(8.0,16.0);
        partupd::SpawnPart_11
                  (uVar26,(double)(float)(dVar25 * (double)mobyutil::g_FrameTime),lVar20 + 0x10,
                   local_130,0x2f3f3f7f,uVar5);
      }
      fVar6 = (moby->pos).z;
      uVar7 = (int)fVar6 >> 0x1f;
      if ((int)((uVar7 >> 1 ^ (uint)fVar6) - uVar7) < 0x41c80000) {
        iVar24 = 0;
        if (0 < DAT_0078e260) {
          dVar25 = -3.0;
          dVar33 = 3.0;
          do {
            mobyutil::MB_randRot();
            mobyutil::MB_randRangeFloat((float)dVar25,(float)dVar33);
            mobyutil::MB_randRangeFloat((float)dVar25,(float)dVar33);
            uVar19 = DAT_0078e268;
            uVar5 = DAT_0078e264;
            local_d8 = (longlong)(DAT_0078e27c << 1);
            dVar35 = (double)mobyutil::MB_randRangeFloat
                                       ((float)(longlong)DAT_0078e27c,(float)local_d8);
            uVar26 = fastfunc::FastDoubleToInt((double)(float)(dVar35 * (double)animationSpeed));
            local_d8 = (longlong)(DAT_0078e280 << 1);
            dVar35 = (double)mobyutil::MB_randRangeFloat
                                       ((float)(longlong)DAT_0078e280,(float)local_d8);
            uVar22 = fastfunc::FastDoubleToInt((double)(float)(dVar35 * (double)animationSpeed));
            local_d8 = (longlong)(DAT_0078e284 << 1);
            dVar35 = (double)mobyutil::MB_randRangeFloat
                                       ((float)(longlong)DAT_0078e284,(float)local_d8);
            uVar23 = fastfunc::FastDoubleToInt((double)(float)(dVar35 * (double)animationSpeed));
            partupd::SpawnPart_2(local_100,local_120,local_110,uVar5,uVar19,uVar26,uVar22,uVar23);
            iVar24 = iVar24 + 1;
          } while (iVar24 < DAT_0078e260);
        }
        *pfVar4 = *pfVar4 * 0.45;
        pfVar4[1] = pfVar4[1] * 0.45;
        pfVar4[2] = pfVar4[2] * 0.45;
        pfVar4[4] = pfVar4[4] * 0.9;
        pfVar4[5] = pfVar4[5] * 0.9;
        moby->state = '\x05';
      }
      else {
        iVar24 = collproc::CollSphere(0x4008000000000000,lVar20 + 0x10,&DAT_002439d0,2,lVar20);
        if ((iVar24 != 0) && (iVar24 = collproc::CollHotspot(), iVar24 == -1)) {
          mobyutil::MB_SpawnExplosionSparks
                    (0x4010000000000000,0x402a000000000000,lVar20,lVar20 + 0x10);
          uVar26 = 0;
          iVar24 = 0;
          dVar25 = -1.399999976158142;
          dVar33 = 1.399999976158142;
          dVar35 = -1.600000023841858;
          dVar27 = 1.600000023841858;
          dVar28 = 5.0;
          dVar29 = 9.0;
          dVar30 = 0.5;
          dVar31 = 1.0;
          dVar32 = 2.5;
          dVar34 = 0.30000001192092896;
          dVar36 = 0.6000000238418579;
          do {
            mobyutil::MB_randRangeFloat((float)dVar25,(float)dVar33);
            mobyutil::MB_randRangeFloat((float)dVar35,(float)dVar27);
            mobyutil::MB_randRangeFloat((float)dVar25,(float)dVar33);
            mobyutil::MB_randRangeFloat((float)dVar28,(float)dVar29);
            *pfVar4 = (float)((double)*pfVar4 * dVar30);
            pfVar4[2] = (float)((double)pfVar4[2] * dVar30);
            pfVar4[1] = (float)((double)pfVar4[1] * dVar30);
            mobyutil::MB_randRangeFloat((float)dVar31,(float)dVar32);
            FUN_00341590(lVar20);
            if (iVar24 % 3 == 0) {
              uVar22 = mobyutil::MB_randRangeFloat((float)dVar34,(float)dVar36);
              mobyutil::MB_SpawnExplosionSparks(uVar22,uVar26,lVar20,local_f0);
            }
            iVar24 = iVar24 + 1;
          } while (iVar24 < 0x14);
          mobyfunc::DeleteMoby(moby);
        }
      }
    }
  }
  else if (bVar1 < 6) {
    pfVar4[2] = -(DAT_0071f418 * 10.8 * 0.5 - pfVar4[2]);
    fVar3 = (moby->rotation).x;
    (moby->pos).x = (moby->pos).x + *pfVar4;
    (moby->pos).y = (moby->pos).y + pfVar4[1];
    (moby->pos).z = (moby->pos).z + pfVar4[2];
    dVar25 = (double)fastfunc::FastWrapRot(fVar3,pfVar4[4]);
    (moby->rotation).x = (float)dVar25;
    dVar25 = (double)fastfunc::FastWrapRot((moby->rotation).y,pfVar4[5]);
    fVar6 = (moby->pos).x;
    (moby->rotation).y = (float)dVar25;
    uVar7 = (int)fVar6 >> 0x1f;
    iVar24 = (uVar7 >> 1 ^ (uint)fVar6) - uVar7;
    if ((((iVar24 < 0x41400000) || (0x447cc000 < iVar24)) ||
        (fVar6 = (moby->pos).y, uVar7 = (int)fVar6 >> 0x1f,
        iVar24 = (uVar7 >> 1 ^ (uint)fVar6) - uVar7, 0x447cc000 < iVar24 || iVar24 < 0x41400000)) ||
       ((fVar6 = (moby->pos).z, uVar7 = (int)fVar6 >> 0x1f,
        iVar24 = (uVar7 >> 1 ^ (uint)fVar6) - uVar7, iVar24 < 0x41400000 || (0x447cc000 < iVar24))))
    {
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 0024477c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1314_0024477c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1314_0024477c(void)

{
  DAT_0078e2dc = 0x10000;
  return;
}



//==== 00244840  ns=mobyupdate_unsorted  size=0xfe4
// sig: undefined UpdateMoby_1309(MobyInstance * moby)
// callers(0): 
// callees(19): 00059e20 collproc::CollSphere; 00060780 collproc::CollHotspot; 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00116d1c mobyutil::MB_StoreChildOffsets; 00116eb8 mobyutil::MB_UpdateChildMobys; 001206e8 partupd::SpawnPart_2; 00123390 partupd::SpawnPart_11; 00243810 FUN_00243810; 00245a60 FUN_00245a60; 00341590 FUN_00341590; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt

/* Moby 1309 */

void mobyupdate_unsorted::UpdateMoby_1309(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  void *pvVar3;
  f32 fVar4;
  longlong lVar5;
  undefined4 uVar6;
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
  undefined4 uVar18;
  longlong lVar19;
  int iVar22;
  uint uVar23;
  int iVar24;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 in_r5;
  longlong lVar25;
  ulonglong uVar26;
  double dVar27;
  double dVar28;
  undefined8 uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auStack_170 [16];
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  float local_140;
  float local_13c;
  float local_138;
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined4 local_e0 [2];
  longlong local_d8;
  
  lVar19 = (longlong)(int)moby;
  bVar1 = moby->state;
  pvVar3 = moby->pVar;
  uVar26 = ZEXT48(pvVar3);
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      moby->drawDistance = 0xff;
      mobyfunc::GetBonePosition(lVar19,0,auStack_170);
      lVar25 = 0;
      iVar24 = 0x51b;
      *(undefined4 *)((int)pvVar3 + 0x8c) = 0;
      do {
        if (iVar24 != 0x51d) {
          iVar22 = FUN_00243810(lVar19,auStack_170,iVar24);
          lVar5 = lVar25 << 4;
          lVar25 = (longlong)((int)lVar25 + 1);
          uVar23 = iVar22 - (int)MobyInstance;
          *(uint *)((int)pvVar3 + (int)lVar5 * 3 + 0xc0) =
               ((int)uVar23 >> 8) + (uint)((int)uVar23 < 0 && (uVar23 & 0xff) != 0);
        }
        iVar24 = iVar24 + 1;
      } while (iVar24 < 0x523);
      mobyutil::MB_StoreChildOffsets(lVar19,uVar26 + 0xa0,lVar25);
      moby->state = '\x01';
    }
    else {
      dVar27 = (double)fastfunc::FastWrapRot((moby->rotation).z,mobyutil::g_FrameTime * 0.5235988);
      (moby->rotation).z = (float)dVar27;
      iVar24 = fastfunc::FastDecTimerS32(uVar26 + 0x1f0);
      if ((((iVar24 != 0) && (DAT_0096b2d0 != 0)) && (g_heroState == TURRET_PLANE_UI)) &&
         (moby->enabled != '\0')) {
        FUN_00245a60(0x406fe00000000000,(double)(mobyutil::g_FrameTime * 50.0),lVar19,local_160,
                     local_150);
        auVar39 = ZEXT416(0xffffffff);
        auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        auVar41 = loadVectorLeftIndexed(0x14,0x244790);
        auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
        auVar39 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar39 = vectorMultiplyAddFloatingPoint
                            (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                             auVar40);
        auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
        auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar6 = storeVectorElementWordIndexed
                          (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x1f0,
                           uVar26);
        *(undefined4 *)((int)pvVar3 + 0x1f0U & 0xfffffffc) = uVar6;
        iVar24 = fastfunc::FastDecTimerS32(uVar26 + 500);
        if (iVar24 != 0) {
          auVar39 = ZEXT416(0xffffffff);
          auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
          auVar39 = loadVectorLeftIndexed(0x18,0x244790);
          auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar39 = vectorMultiplyAddFloatingPoint
                              (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60
                               ,auVar40);
          auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
          auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar6 = storeVectorElementWordIndexed
                            (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x1f0,
                             uVar26);
          *(undefined4 *)((int)pvVar3 + 0x1f0U & 0xfffffffc) = uVar6;
          *(undefined4 *)((int)pvVar3 + 500) = 10;
        }
      }
      if (moby->setByGroup == '\x01') {
        moby->state = '\x03';
      }
      mobyutil::MB_UpdateChildMobys(lVar19,uVar26 + 0xa0,7);
    }
  }
  else if (bVar1 < 5) {
    if (bVar1 < 4) {
      mobyutil::MB_SpawnExplosionSparks
                (0x4010000000000000,0x402a000000000000,lVar19,lVar19 + 0x10,in_r5,0xffffffffffffffff
                );
      mobyfunc::GetBonePosition(lVar19,0,&local_140);
      fVar7 = (moby->pos).x - local_140;
      *(float *)((int)pvVar3 + 0x70) = fVar7;
      fVar8 = (moby->pos).y - local_13c;
      *(float *)((int)pvVar3 + 0x74) = fVar8;
      fVar9 = (moby->pos).z - local_138;
      *(float *)((int)pvVar3 + 0x78) = fVar9;
      *(f32 *)((int)pvVar3 + 0x7c) = (moby->pos).w;
      fVar17 = mobyutil::g_FrameTime;
      fVar10 = SQRT(fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8);
      fVar2 = 0.0;
      fVar11 = (mobyutil::g_FrameTime * 10.0) / fVar10;
      fVar12 = fVar2;
      if (0.0 - fVar10 < 0.0) {
        fVar12 = fVar7 * fVar11;
      }
      fVar14 = fVar2;
      if (0.0 - fVar10 < 0.0) {
        fVar14 = fVar8 * fVar11;
      }
      fVar15 = fVar2;
      if (0.0 - fVar10 < 0.0) {
        fVar15 = fVar9 * fVar11;
      }
      if (fVar10 - 0.0 < 0.0) {
        fVar12 = fVar7 * fVar11;
      }
      if (fVar10 - 0.0 < 0.0) {
        fVar14 = fVar8 * fVar11;
      }
      if (fVar10 - 0.0 < 0.0) {
        fVar15 = fVar9 * fVar11;
      }
      *(float *)((int)pvVar3 + 0x70) = fVar12;
      *(float *)((int)pvVar3 + 0x74) = fVar14;
      *(float *)((int)pvVar3 + 0x78) = fVar15;
      fVar9 = local_13c - g_heroPosition.y;
      fVar10 = local_140 - g_heroPosition.x;
      fVar11 = local_138 - g_heroPosition.z;
      fVar16 = SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9);
      fVar8 = (fVar17 * 15.0) / fVar16;
      fVar7 = fVar2;
      if (0.0 - fVar16 < 0.0) {
        fVar7 = fVar11 * fVar8;
      }
      fVar13 = fVar2;
      if (0.0 - fVar16 < 0.0) {
        fVar13 = fVar9 * fVar8;
      }
      if (0.0 - fVar16 < 0.0) {
        fVar2 = fVar10 * fVar8;
      }
      if (fVar16 - 0.0 < 0.0) {
        fVar7 = fVar11 * fVar8;
      }
      if (fVar16 - 0.0 < 0.0) {
        fVar13 = fVar9 * fVar8;
      }
      if (fVar16 - 0.0 < 0.0) {
        fVar2 = fVar10 * fVar8;
      }
      *(float *)((int)pvVar3 + 0x78) = fVar15 + fVar7;
      *(float *)((int)pvVar3 + 0x74) = fVar14 + fVar13;
      *(float *)((int)pvVar3 + 0x70) = fVar12 + fVar2;
      dVar28 = -1.5707963705062866;
      dVar30 = 1.5707963705062866;
      dVar27 = (double)mobyutil::MB_randRangeFloat(fVar17 * -1.5707964,fVar17 * 1.5707964);
      *(float *)((int)pvVar3 + 0x80) = (float)dVar27;
      dVar27 = (double)mobyutil::MB_randRangeFloat
                                 ((float)((double)mobyutil::g_FrameTime * dVar28),
                                  (float)((double)mobyutil::g_FrameTime * dVar30));
      *(float *)((int)pvVar3 + 0x84) = (float)dVar27;
      dVar27 = (double)mobyutil::MB_randRangeFloat
                                 ((float)(longlong)(animationSpeed * 90.5),
                                  (float)(longlong)(animationSpeed * 150.5));
      *(int *)((int)pvVar3 + 0x88) = (int)dVar27;
      moby->state = '\x04';
    }
    else {
      *(float *)((int)pvVar3 + 0x78) = -(DAT_0071f418 * 10.8 - *(float *)((int)pvVar3 + 0x78));
      fVar2 = (moby->rotation).x;
      (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar3 + 0x70);
      (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar3 + 0x74);
      (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar3 + 0x78);
      dVar27 = (double)fastfunc::FastWrapRot(fVar2,*(float *)((int)pvVar3 + 0x80));
      (moby->rotation).x = (float)dVar27;
      dVar27 = (double)fastfunc::FastWrapRot((moby->rotation).y,*(float *)((int)pvVar3 + 0x84));
      fVar4 = (moby->pos).x;
      (moby->rotation).y = (float)dVar27;
      uVar23 = (int)fVar4 >> 0x1f;
      iVar24 = (uVar23 >> 1 ^ (uint)fVar4) - uVar23;
      if (((iVar24 < 0x41400000) || (0x447cc000 < iVar24)) ||
         ((fVar4 = (moby->pos).y, uVar23 = (int)fVar4 >> 0x1f,
          iVar24 = (uVar23 >> 1 ^ (uint)fVar4) - uVar23, 0x447cc000 < iVar24 || iVar24 < 0x41400000
          || ((fVar4 = (moby->pos).z, uVar23 = (int)fVar4 >> 0x1f,
              iVar24 = (uVar23 >> 1 ^ (uint)fVar4) - uVar23, iVar24 < 0x41400000 ||
              (0x447cc000 < iVar24)))))) {
        mobyfunc::DeleteMoby(moby);
      }
      else {
        iVar24 = mobyutil::MB_randInt(3);
        if (iVar24 == 0) {
          local_e0[0] = 0x2f000000;
          local_e0[1] = 0x3f000000;
          lVar25 = mobyutil::MB_randInt(2);
          dVar27 = (double)animationSpeed;
          uVar29 = 0x41186a0000000000;
          uVar6 = *(undefined4 *)((int)local_e0 + (int)(lVar25 << 2));
          local_d8 = (longlong)(int)(dVar27 * 20.5);
          mobyutil::MB_randRange
                    (local_d8,dVar27,0x41186a0000000000,(int)(dVar27 * 15.5),(int)(dVar27 * 20.5));
          local_d8 = (longlong)(int)(animationSpeed * 30.5);
          mobyutil::MB_randRange((int)(animationSpeed * 25.5),(int)(animationSpeed * 30.5));
          dVar27 = (double)mobyutil::MB_randRangeFloat(8.0,16.0);
          partupd::SpawnPart_11
                    (uVar29,(double)(float)(dVar27 * (double)mobyutil::g_FrameTime),lVar19 + 0x10,
                     local_130,0x2f3f3f7f,uVar6);
        }
        fVar4 = (moby->pos).z;
        uVar23 = (int)fVar4 >> 0x1f;
        if ((int)((uVar23 >> 1 ^ (uint)fVar4) - uVar23) < 0x41c80000) {
          iVar24 = 0;
          if (0 < DAT_0078e300) {
            dVar27 = -3.0;
            dVar30 = 3.0;
            do {
              mobyutil::MB_randRot();
              mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar30);
              mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar30);
              uVar18 = DAT_0078e308;
              uVar6 = DAT_0078e304;
              local_d8 = (longlong)(DAT_0078e31c << 1);
              dVar28 = (double)mobyutil::MB_randRangeFloat
                                         ((float)(longlong)DAT_0078e31c,(float)local_d8);
              uVar29 = fastfunc::FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
              local_d8 = (longlong)(DAT_0078e320 << 1);
              dVar28 = (double)mobyutil::MB_randRangeFloat
                                         ((float)(longlong)DAT_0078e320,(float)local_d8);
              uVar20 = fastfunc::FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
              local_d8 = (longlong)(DAT_0078e324 << 1);
              dVar28 = (double)mobyutil::MB_randRangeFloat
                                         ((float)(longlong)DAT_0078e324,(float)local_d8);
              uVar21 = fastfunc::FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
              partupd::SpawnPart_2(local_100,local_120,local_110,uVar6,uVar18,uVar29,uVar20,uVar21);
              iVar24 = iVar24 + 1;
            } while (iVar24 < DAT_0078e300);
          }
          *(float *)((int)pvVar3 + 0x70) = *(float *)((int)pvVar3 + 0x70) * 0.45;
          *(float *)((int)pvVar3 + 0x74) = *(float *)((int)pvVar3 + 0x74) * 0.45;
          *(float *)((int)pvVar3 + 0x78) = *(float *)((int)pvVar3 + 0x78) * 0.45;
          *(float *)((int)pvVar3 + 0x80) = *(float *)((int)pvVar3 + 0x80) * 0.9;
          *(float *)((int)pvVar3 + 0x84) = *(float *)((int)pvVar3 + 0x84) * 0.9;
          moby->state = '\x05';
        }
        else {
          iVar24 = collproc::CollSphere(0x4008000000000000,lVar19 + 0x10,&DAT_00244790,2,lVar19);
          if ((iVar24 != 0) && (iVar24 = collproc::CollHotspot(), iVar24 == -1)) {
            mobyutil::MB_SpawnExplosionSparks
                      (0x4010000000000000,0x402a000000000000,lVar19,lVar19 + 0x10);
            uVar29 = 0;
            iVar24 = 0;
            dVar27 = -1.399999976158142;
            dVar30 = 1.399999976158142;
            dVar28 = -1.600000023841858;
            dVar31 = 1.600000023841858;
            dVar32 = 5.0;
            dVar33 = 9.0;
            dVar34 = 0.5;
            dVar35 = 1.0;
            dVar36 = 2.5;
            dVar37 = 0.30000001192092896;
            dVar38 = 0.6000000238418579;
            do {
              mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar30);
              mobyutil::MB_randRangeFloat((float)dVar28,(float)dVar31);
              mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar30);
              mobyutil::MB_randRangeFloat((float)dVar32,(float)dVar33);
              *(float *)((int)pvVar3 + 0x70) =
                   (float)((double)*(float *)((int)pvVar3 + 0x70) * dVar34);
              *(float *)((int)pvVar3 + 0x78) =
                   (float)((double)*(float *)((int)pvVar3 + 0x78) * dVar34);
              *(float *)((int)pvVar3 + 0x74) =
                   (float)((double)*(float *)((int)pvVar3 + 0x74) * dVar34);
              mobyutil::MB_randRangeFloat((float)dVar35,(float)dVar36);
              FUN_00341590(lVar19);
              if (iVar24 % 3 == 0) {
                uVar20 = mobyutil::MB_randRangeFloat((float)dVar37,(float)dVar38);
                mobyutil::MB_SpawnExplosionSparks(uVar20,uVar29,lVar19,local_f0);
              }
              iVar24 = iVar24 + 1;
            } while (iVar24 < 0x14);
            mobyfunc::DeleteMoby(moby);
          }
        }
      }
    }
  }
  else if (bVar1 < 6) {
    *(float *)((int)pvVar3 + 0x78) = -(DAT_0071f418 * 10.8 * 0.5 - *(float *)((int)pvVar3 + 0x78));
    fVar2 = (moby->rotation).x;
    (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar3 + 0x70);
    (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar3 + 0x74);
    (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar3 + 0x78);
    dVar27 = (double)fastfunc::FastWrapRot(fVar2,*(float *)((int)pvVar3 + 0x80));
    (moby->rotation).x = (float)dVar27;
    dVar27 = (double)fastfunc::FastWrapRot((moby->rotation).y,*(float *)((int)pvVar3 + 0x84));
    fVar4 = (moby->pos).x;
    (moby->rotation).y = (float)dVar27;
    uVar23 = (int)fVar4 >> 0x1f;
    iVar24 = (uVar23 >> 1 ^ (uint)fVar4) - uVar23;
    if ((((iVar24 < 0x41400000) || (0x447cc000 < iVar24)) ||
        (fVar4 = (moby->pos).y, uVar23 = (int)fVar4 >> 0x1f,
        iVar24 = (uVar23 >> 1 ^ (uint)fVar4) - uVar23, 0x447cc000 < iVar24 || iVar24 < 0x41400000))
       || ((fVar4 = (moby->pos).z, uVar23 = (int)fVar4 >> 0x1f,
           iVar24 = (uVar23 >> 1 ^ (uint)fVar4) - uVar23, iVar24 < 0x41400000 ||
           (0x447cc000 < iVar24)))) {
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 00245824  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1316_00245824(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1316_00245824(void)

{
  DAT_0078e37c = 0x10000;
  return;
}



//==== 00245840  ns=mobyupdate_unsorted  size=0x1fc
// sig: undefined UpdateMoby_1316(MobyInstance * moby)
// callers(0): 
// callees(8): 0007b310 help::Help_QueueMessage; 000e8aa4 memcard::memcard_Save; 000f1e50 mobyfunc::SetLevelFlag; 00112dc0 mobyutil::MB_UnlockTrophy; 00112e18 mobyutil::MB_UnlockItem; 00151e70 respawn::SetSpawnPoint; 004d3720 FUN_004d3720; 004d3870 FUN_004d3870

/* Moby 1316 */

ulonglong mobyupdate_unsorted::UpdateMoby_1316(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  ulonglong uVar6;
  int iVar7;
  
  uVar6 = (ulonglong)(int)moby;
  bVar1 = moby->state;
  pvVar5 = moby->pVar;
  if (bVar1 == 0) {
    moby->state = '\x01';
    moby->modeBits = moby->modeBits | MIRROR;
    FUN_004d3720(uVar6,pvVar5);
    uVar6 = 0x406ccccd;
    *(undefined4 *)((int)pvVar5 + 0xc) = 0x406ccccd;
  }
  else if (bVar1 < 2) {
    iVar7 = FUN_004d3870(uVar6,pvVar5);
    uVar6 = (ulonglong)(byte)moby->levelFlagIdx;
    fVar2 = (moby->pos).x;
    fVar3 = (moby->pos).y;
    fVar4 = (moby->pos).z;
    if (iVar7 != 0) {
      moby->state = '\x02';
    }
    if (((g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1) &&
        (fVar3 = g_heroPosition.y - fVar3, fVar2 = g_heroPosition.x - fVar2,
        fVar4 = g_heroPosition.z - fVar4, SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3) < 4.0)
        ) && (ABS(fVar4) < 4.0)) {
      mobyfunc::SetLevelFlag();
      respawn::SetSpawnPoint
                ((Vec4 *)&Cuboids[*(int *)((int)pvVar5 + 0x48)].pos,
                 (Vec4 *)&Cuboids[*(int *)((int)pvVar5 + 0x48)].rot);
      iVar7 = memcard::memcard_Save(0,-1);
      uVar6 = (ulonglong)iVar7;
    }
  }
  else if ((bVar1 < 3) && (uVar6 = (ulonglong)(uint)g_gameMode, g_gameMode != GAME_MODE_SCENE)) {
    moby->state = '\x01';
    uVar6 = (ulonglong)*(ushort *)((int)pvVar5 + 4);
    if (*(ushort *)((int)pvVar5 + 4) == 2) {
      MiscLevelFlags.Raritanium = false;
      mobyutil::MB_UnlockItem(0x23,1);
      mobyutil::MB_UnlockTrophy(THESE_ARE_NOT_THE_DROIDS);
      iVar7 = help::Help_QueueMessage(STR_THE_PERSUADER_IS_AN_0x2AF9,0x3b);
      uVar6 = (ulonglong)iVar7;
    }
  }
  return uVar6;
}



//==== 00245a3c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1317_00245a3c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1317_00245a3c(void)

{
  DAT_0078e3ec = 0x10000;
  return;
}



//==== 00245a60  ns=Global  size=0x528
// sig: undefined FUN_00245a60(void)
// callers(1): 00244840 mobyupdate_unsorted::UpdateMoby_1309
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 00502758 fastfunc::FastDoubleToInt

MobyInstance * FUN_00245a60(double param_1,double param_2,float param_3,float *param_4,f32 *param_5)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  ulonglong *puVar5;
  int iVar6;
  int iVar7;
  float fVar8;
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
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0xf0;
  puVar5 = (ulonglong *)lVar12;
  *puVar5 = uVar10;
  puVar5[0x20] = in_LR;
  puVar5[0x1c] = in_f30;
  puVar5[0x1d] = in_f31;
  puVar5[0x1b] = unaff_r31;
  puVar5[0x19] = unaff_r29;
  puVar5[0x1a] = unaff_r30;
  puVar5[0x18] = unaff_r28;
  pMVar13 = mobyfunc::CreateMoby(0x525);
  if (pMVar13 != (MobyInstance *)0x0) {
    pfVar3 = (float *)pMVar13->pVar;
    pfVar3[7] = param_3;
    pMVar13->updateDistance = -1;
    sVar15 = fastfunc::FastDoubleToInt(param_1);
    pMVar13->drawDistance = sVar15;
    pMVar13->enabled = '\x01';
    pMVar13->scale = pMVar13->scale * 5.0;
    fVar8 = 0.0;
    (pMVar13->rotation).x = 0.0;
    fVar14 = param_4[2];
    fVar2 = ABS(param_4[2]);
    fVar4 = SQRT(*param_4 * *param_4 + param_4[1] * param_4[1]);
    fVar1 = ABS(fVar4);
    *(float *)((int)puVar5 + 0x74) = fVar4;
    *(float *)(puVar5 + 0xf) = fVar1 - fVar2;
    uVar17 = (ulonglong)(*(uint *)((int)puVar5 + 0x74) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar5 + 0xf) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar14 >> 0x1d) & 4;
    fVar14 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
    fVar4 = ABS(*(float *)((int)puVar5 + 0x74));
    if (*(float *)(puVar5 + 0xf) - 0.0 < 0.0) {
      fVar4 = fVar2;
    }
    if (*(float *)(puVar5 + 0xf) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    fVar9 = fVar8;
    if (0.0 < fVar4) {
      lVar11 = uVar10 - 0xe0;
      lVar18 = uVar10 - 0x44;
      lVar16 = uVar10 - 0x54;
      lVar20 = 2;
      fVar4 = (fVar2 - fVar4) / (fVar2 + fVar4);
      fVar2 = fVar4 * fVar4;
      *(float *)(puVar5 + 0x15) = fVar4;
      *(float *)(puVar5 + 0x14) = fVar4;
      *(float *)((int)puVar5 + 0xa4) = fVar4;
      *(float *)((int)puVar5 + 0x9c) = fVar4;
      fVar4 = fVar2 * fVar2;
      *(float *)(puVar5 + 0x14) = *(float *)(puVar5 + 0x14) * fVar2;
      *(float *)((int)puVar5 + 0xa4) = *(float *)((int)puVar5 + 0xa4) * fVar4;
      *(float *)(puVar5 + 0x15) = *(float *)(puVar5 + 0x15) * fVar4 * fVar2;
      do {
        *(float *)((int)lVar11 + 0x9c) = *(float *)((int)lVar11 + 0x8c) * fVar4 * fVar4;
        iVar6 = (int)lVar16;
        lVar16 = lVar16 + 8;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar6 + 4) * fVar4 * fVar4;
        lVar18 = lVar18 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar20 = 4;
      lVar18 = uVar10 - 0x54;
      pfVar19 = (float *)&DAT_007358e0;
      lVar11 = lVar12;
      lVar16 = lVar18;
      do {
        fVar4 = *pfVar19;
        fVar2 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar11 + 0x9c) = *(float *)((int)lVar11 + 0x9c) * fVar4;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar2;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar16 = 2;
      lVar11 = lVar12;
      fVar4 = fVar8;
      do {
        iVar6 = (int)lVar11;
        iVar7 = (int)lVar18;
        lVar11 = lVar11 + 0x10;
        lVar18 = lVar18 + 0x10;
        fVar4 = fVar4 + *(float *)(iVar6 + 0x9c) + *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) +
                *(float *)(iVar7 + 0xc);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      fVar9 = (fVar4 + 0.7853982) * fVar14 + fVar1;
    }
    (pMVar13->rotation).y = -fVar9;
    fVar14 = *param_4;
    fVar4 = param_4[1];
    fVar1 = ABS(*param_4);
    fVar2 = ABS(param_4[1]);
    *(float *)(puVar5 + 0xe) = fVar1 - fVar2;
    uVar17 = (ulonglong)((uint)fVar14 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar5 + 0xe) >> 0x1e) & 2 | (ulonglong)((uint)fVar4 >> 0x1d) & 4
    ;
    fVar14 = fVar1;
    if (*(float *)(puVar5 + 0xe) - 0.0 < 0.0) {
      fVar14 = fVar2;
    }
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
    if (*(float *)(puVar5 + 0xe) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    if (0.0 < fVar14) {
      lVar11 = uVar10 - 0xe0;
      lVar16 = uVar10 - 0x74;
      lVar18 = uVar10 - 100;
      lVar20 = 2;
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
        *(float *)((int)lVar18 + 4) = *(float *)(iVar6 + 4) * fVar14 * fVar14;
        lVar18 = lVar18 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar20 = 4;
      lVar18 = uVar10 - 0x74;
      pfVar19 = (float *)&DAT_007358e0;
      lVar11 = lVar12;
      lVar16 = lVar18;
      do {
        fVar14 = *pfVar19;
        fVar2 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar11 + 0x7c) = *(float *)((int)lVar11 + 0x7c) * fVar14;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar2;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar11 = 2;
      do {
        iVar6 = (int)lVar12;
        lVar12 = lVar12 + 0x10;
        iVar7 = (int)lVar18;
        lVar18 = lVar18 + 0x10;
        fVar8 = fVar8 + *(float *)(iVar6 + 0x7c) + *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) +
                *(float *)(iVar7 + 0xc);
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      fVar8 = (fVar8 + 0.7853982) * fVar4 + fVar1;
    }
    (pMVar13->rotation).z = fVar8;
    pfVar3[4] = 1.0;
    if (param_2 <= 0.0) {
      *pfVar3 = *param_4;
      pfVar3[1] = param_4[1];
      pfVar3[2] = param_4[2];
      pfVar3[3] = param_4[3];
      param_2 = (double)SQRT(param_4[2] * param_4[2] + *param_4 * *param_4 + param_4[1] * param_4[1]
                            );
    }
    else {
      fVar14 = *param_4;
      dVar21 = (double)SQRT(param_4[2] * param_4[2] + fVar14 * fVar14 + param_4[1] * param_4[1]);
      if (dVar21 == 0.0) {
        *pfVar3 = *param_4;
        pfVar3[1] = param_4[1];
        pfVar3[2] = param_4[2];
        fVar14 = param_4[3];
        pfVar3[2] = 0.0;
        pfVar3[1] = 0.0;
        *pfVar3 = 0.0;
      }
      else {
        fVar4 = (float)(param_2 / dVar21);
        *pfVar3 = fVar14 * fVar4;
        pfVar3[1] = param_4[1] * fVar4;
        pfVar3[2] = param_4[2] * fVar4;
        fVar14 = param_4[3];
      }
      pfVar3[3] = fVar14;
    }
    (pMVar13->pos).x = *param_5;
    (pMVar13->pos).y = param_5[1];
    (pMVar13->pos).z = param_5[2];
    (pMVar13->pos).w = param_5[3];
    fVar14 = (float)fastfunc::FastDoubleToInt((double)(float)(param_1 / param_2));
    pfVar3[5] = fVar14;
    pfVar3[6] = (float)((int)fVar14 + -0xd);
    pMVar13->modeBits = DRAW_TRANSPARENT_WEIRD;
    mobyfunc::UpdateMobyTransform(pMVar13);
  }
  return pMVar13;
}



//==== 00245fb0  ns=mobyupdate_unsorted  size=0x1d4
// sig: undefined UpdateMoby_1317(MobyInstance * moby)
// callers(0): 
// callees(6): 00057820 collproc::CollLine; 0005e598 collproc::CollMobySphere; 000efb38 mobyfunc::DeleteMoby; 0010581c mobyutil::SetCollDamIn; 0010e030 mobyutil::MB_genericExplosion; 004fff60 fastfunc::FastDecTimerS32

/* Moby 1317 */

void mobyupdate_unsorted::UpdateMoby_1317(MobyInstance *moby)

{
  float fVar1;
  float *pfVar2;
  longlong lVar3;
  int iVar4;
  undefined1 local_60 [16];
  undefined1 auStack_50 [48];
  
  lVar3 = (longlong)(int)moby;
  if (moby != (MobyInstance *)0x0) {
    pfVar2 = (float *)moby->pVar;
    if (pfVar2 != (float *)0x0) {
      (moby->pos).x = (moby->pos).x + *pfVar2;
      (moby->pos).y = (moby->pos).y + pfVar2[1];
      (moby->pos).z = (moby->pos).z + pfVar2[2];
      mobyutil::SetCollDamIn(0x4024000000000000,auStack_50,lVar3,0x10000,&DAT_00245f88,pfVar2);
      iVar4 = collproc::CollLine(local_60,lVar3 + 0x10,0,lVar3,auStack_50);
      if ((iVar4 == 0) &&
         (iVar4 = collproc::CollMobySphere
                            (0x4014000000000000,lVar3 + 0x10,&DAT_00245f88,0,lVar3,auStack_50),
         iVar4 == 0)) {
        iVar4 = fastfunc::FastDecTimerS32(pfVar2 + 6);
        if ((iVar4 != 0) && (fVar1 = pfVar2[4], pfVar2[4] = fVar1 * 0.74, fVar1 * 0.74 < 0.02)) {
          mobyfunc::DeleteMoby(moby);
        }
      }
      else {
        mobyutil::MB_genericExplosion
                  (0,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,0x3ff0000000000000,
                   0x402e000000000000,lVar3,pfVar2,0xa10960,1,0xffffffffffffffff,10,3,0x10);
        mobyfunc::DeleteMoby(moby);
      }
    }
  }
  return;
}



//==== 002461a0  ns=mobyupdate_helpers  size=0x3e8
// sig: undefined M1319_002461a0(void)
// callers(0): 
// callees(7): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00502730 fastfunc::FastIntToDouble; 005027bc fastfunc::FastLerpColor; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0
// strings: 0096c074: 'None'

void mobyupdate_helpers::M1319_002461a0(int param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  void *pvVar5;
  ulonglong *puVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  uint uVar10;
  float *pfVar11;
  uint uVar12;
  float *pfVar13;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  longlong lVar14;
  ulonglong unaff_r23;
  longlong lVar15;
  ulonglong unaff_r24;
  longlong lVar16;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  undefined4 *puVar17;
  int iVar18;
  ulonglong unaff_r27;
  undefined4 *puVar19;
  uint uVar20;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar21;
  ulonglong unaff_r30;
  int iVar22;
  ushort *puVar23;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f28;
  double dVar28;
  ulonglong in_f29;
  double dVar29;
  ulonglong in_f30;
  double dVar30;
  ulonglong in_f31;
  float local_9a0 [616];
  
  lVar1 = ZEXT48(&stack0x00000000) - 0xa10;
  puVar6 = (ulonglong *)lVar1;
  *puVar6 = ZEXT48(&stack0x00000000);
  puVar6[0x144] = in_LR;
  puVar6[0x13e] = in_f28;
  puVar6[0x13f] = in_f29;
  puVar6[0x140] = in_f30;
  puVar6[0x141] = in_f31;
  puVar6[0x13d] = unaff_r31;
  cVar2 = *(char *)(param_1 + 0x21);
  puVar6[0x13c] = unaff_r30;
  puVar6[0x13b] = unaff_r29;
  puVar6[0x13a] = unaff_r28;
  puVar6[0x139] = unaff_r27;
  puVar6[0x138] = unaff_r26;
  puVar6[0x137] = unaff_r25;
  puVar6[0x136] = unaff_r24;
  puVar6[0x135] = unaff_r23;
  puVar6[0x134] = unaff_r22;
  puVar6[0x133] = unaff_r21;
  if (cVar2 != -1) {
    DAT_0078e430 = 5.0;
    if (Cheats[2] != '\0') {
      DAT_0078e430 = 16.0;
    }
    iVar22 = 0;
    dVar30 = 4.0;
    dVar29 = 1.0;
    dVar28 = 0.0;
    lVar14 = lVar1;
    do {
      uVar8 = draw::GetEffectTex(0x13);
      iVar21 = (int)lVar14;
      *(undefined8 *)(iVar21 + 0x108) = uVar8;
      uVar8 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
      *(undefined8 *)(iVar21 + 0x110) = uVar8;
      uVar8 = FUN_00502f08(0,0,0,0,0,0);
      *(undefined8 *)(iVar21 + 0x100) = uVar8;
      uVar8 = idol_draw::PackCmd(0,2,0,1,0x80);
      *(undefined8 *)(iVar21 + 0x118) = uVar8;
      dVar25 = (double)fastfunc::FastIntToDouble(worldUpdateTime + 3U & 3);
      iVar21 = 0;
      puVar19 = &DAT_0078e434;
      puVar17 = &DAT_0078e438;
      dVar25 = (double)(float)(dVar25 / (double)(float)((double)DAT_0078e430 * dVar30));
      lVar15 = lVar14;
      lVar16 = lVar14;
      do {
        uVar9 = *puVar17;
        *(undefined4 *)((int)lVar16 + 0xe0) = *puVar19;
        *(undefined4 *)((int)lVar16 + 0xe4) = uVar9;
        dVar26 = (double)fastfunc::FastIntToDouble((iVar22 - (iVar21 >> 1)) + 1);
        dVar27 = (double)(float)((double)(float)(dVar26 / (double)DAT_0078e430) + dVar25);
        dVar26 = dVar29;
        if ((dVar27 <= dVar29) && (dVar26 = dVar27, dVar27 < dVar28)) {
          dVar26 = dVar28;
        }
        uVar9 = fastfunc::FastLerpColor(dVar26,0xffffffff8c28aa28,0x144646);
        iVar21 = iVar21 + 1;
        *(undefined4 *)((int)lVar15 + 0xd0) = uVar9;
        puVar19 = puVar19 + 2;
        lVar16 = lVar16 + 8;
        puVar17 = puVar17 + 2;
        lVar15 = lVar15 + 4;
      } while (iVar21 < 4);
      iVar22 = iVar22 + 1;
      lVar14 = lVar14 + 0x90;
    } while (iVar22 < 0x10);
    bVar3 = *(byte *)(param_1 + 0x21);
    *(undefined4 *)(puVar6 + 0xe) = 0;
    *(undefined4 *)((int)puVar6 + 0x74) = 0;
    *(undefined4 *)(puVar6 + 0xf) = 0x3e800000;
    *(undefined4 *)((int)puVar6 + 0x7c) = 0;
    *(undefined4 *)(puVar6 + 0x10) = 0;
    *(undefined4 *)((int)puVar6 + 0x84) = 0;
    *(undefined4 *)(puVar6 + 0x11) = 0xbe800000;
    *(undefined4 *)((int)puVar6 + 0x8c) = 0;
    puVar23 = (ushort *)(&mobyutil::g_MobyGroups)[bVar3];
    do {
      uVar20 = *puVar23 & 0x7fff;
      if ((MobyInstance[uVar20].enabled != '\0') &&
         (MobyInstance[uVar20].oClass == *(MOBY_OCLASSES *)(param_1 + 0xa6))) {
        pvVar5 = MobyInstance[uVar20].pVar;
        iVar22 = 0;
        lVar15 = lVar1;
        lVar14 = lVar1;
        if (0 < *(int *)((int)pvVar5 + 0x2c0)) {
          do {
            iVar18 = 0;
            iVar21 = (int)pvVar5 + 0xc0;
            uVar20 = (*(int *)((int)pvVar5 + 0x2c4) - iVar22) + 0xf;
            do {
              uVar10 = 0;
              lVar16 = lVar15 + 0x90;
              lVar24 = 4;
              do {
                uVar7 = uVar10 & 1;
                uVar12 = ((int)uVar10 >> 1) +
                         uVar20 + (((int)uVar20 >> 4) +
                                  (uint)((int)uVar20 < 0 && (uVar20 & 0xf) != 0)) * -0x10;
                pfVar13 = (float *)((uVar12 + (((int)uVar12 >> 4) +
                                              (uint)((int)uVar12 < 0 && (uVar12 & 0xf) != 0)) *
                                              -0x10) * 0x10 + iVar21);
                uVar10 = uVar10 + 1;
                pfVar11 = (float *)lVar16;
                *pfVar11 = *pfVar13 + local_9a0[uVar7 * 4];
                pfVar11[1] = pfVar13[1] + local_9a0[uVar7 * 4 + 1];
                pfVar11[2] = pfVar13[2] + local_9a0[uVar7 * 4 + 2];
                pfVar11[3] = pfVar13[3];
                lVar16 = lVar16 + 0x10;
                lVar24 = lVar24 + -1;
              } while (lVar24 != 0);
              draw::FastDrawQuad(lVar14 + 0x90,0,0,EffectTexHeaders,9);
              iVar18 = iVar18 + 1;
              iVar21 = iVar21 + 0x100;
            } while (iVar18 < 2);
            iVar22 = iVar22 + 1;
            lVar15 = lVar15 + 0x90;
            lVar14 = lVar14 + 0x90;
          } while (iVar22 < *(int *)((int)pvVar5 + 0x2c0));
        }
      }
      uVar4 = *puVar23;
      puVar23 = puVar23 + 1;
    } while (-1 < (short)uVar4);
  }
  return;
}



//==== 00246598  ns=mobyupdate_helpers  size=0x238
// sig: undefined M1319_00246598(void)
// callers(1): 002476e8 mobyupdate_unsorted::UpdateMoby_1319
// callees(1): 0006d720 RegisterFuncForMoby

void mobyupdate_helpers::M1319_00246598(MobyInstance *param_1)

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
  float fVar10;
  void *pvVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  byte in_cr6;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  uVar14 = worldUpdateTime;
  pvVar11 = param_1->pVar;
  uVar15 = ZEXT48(pvVar11);
  bVar1 = worldUpdateTime != 0;
  uVar16 = (ulonglong)*(uint *)((int)pvVar11 + 0x2c4);
  if ((worldUpdateTime & 3) == 0) {
    uVar16 = uVar16 + 1;
    auVar17 = loadVectorLeftIndexed(0x2c0,uVar15);
    auVar18 = loadVectorRightIndexed(0x2d0,uVar15);
    auVar19 = loadVectorLeftIndexed(0xffffffffffffe430,0x790000);
    auVar20 = vectorConvertFromSignedFixedPointWord(auVar17 | auVar18,0);
    auVar19 = auVar19 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar16 = uVar16 + ((longlong)((int)uVar16 >> 4) +
                      (ulonglong)((int)uVar16 < 0 && (uVar16 & 0xf) != 0)) * -0x10;
    *(int *)((int)pvVar11 + 0x2c4) = (int)uVar16;
    auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
    vectorCompareGreaterThanOrEqualToFloatingPoint
              (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,
               auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60);
    if ((bool)(in_cr6 >> 1 & 1)) {
      auVar19 = ZEXT416(SUB164(auVar17 | auVar18,0xc) + 1) & (undefined1  [16])0xffffffff;
      uVar13 = storeVectorElementWordIndexed
                         (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,0x2c0,uVar15
                         );
      *(undefined4 *)((int)pvVar11 + 0x2c0U & 0xfffffffc) = uVar13;
    }
  }
  iVar12 = (int)(uVar16 << 4);
  fVar2 = (param_1->transform).v1.y;
  fVar3 = (param_1->transform).v0.y;
  fVar4 = (param_1->transform).v1.z;
  fVar5 = (param_1->transform).v2.y;
  fVar6 = (param_1->transform).v0.z;
  fVar7 = (param_1->transform).v1.w;
  fVar8 = (param_1->transform).v2.z;
  fVar9 = (param_1->transform).v0.w;
  fVar10 = (param_1->transform).v2.w;
  *(float *)((int)pvVar11 + iVar12 + 0xc0) =
       (param_1->transform).v2.x * 0.3 +
       (param_1->transform).v0.x * -1.2 + (param_1->transform).v1.x * 0.7 + (param_1->pos).x;
  *(float *)((int)pvVar11 + iVar12 + 0xc4) =
       fVar5 * 0.3 + fVar3 * -1.2 + fVar2 * 0.7 + (param_1->pos).y;
  fVar2 = (param_1->pos).z;
  *(float *)((int)pvVar11 + iVar12 + 0xcc) = fVar10 * 0.3 + fVar9 * -1.2 + fVar7 * 0.7;
  *(float *)((int)pvVar11 + iVar12 + 200) = fVar8 * 0.3 + fVar6 * -1.2 + fVar4 * 0.7 + fVar2;
  iVar12 = *(int *)((int)pvVar11 + 0x2c4);
  *(undefined4 *)((int)pvVar11 + iVar12 * 0x10 + 0xcc) = 0x3f800000;
  fVar2 = (param_1->transform).v1.y;
  fVar3 = (param_1->transform).v0.y;
  fVar4 = (param_1->transform).v1.z;
  fVar5 = (param_1->transform).v2.y;
  fVar6 = (param_1->transform).v0.z;
  fVar7 = (param_1->transform).v1.w;
  fVar8 = (param_1->transform).v2.z;
  fVar9 = (param_1->transform).v0.w;
  fVar10 = (param_1->transform).v2.w;
  *(float *)((int)pvVar11 + iVar12 * 0x10 + 0x1c0) =
       (param_1->transform).v2.x * 0.3 +
       (param_1->transform).v0.x * -1.2 + (param_1->transform).v1.x * -0.7 + (param_1->pos).x;
  *(float *)((int)pvVar11 + iVar12 * 0x10 + 0x1c4) =
       fVar5 * 0.3 + fVar3 * -1.2 + fVar2 * -0.7 + (param_1->pos).y;
  fVar2 = (param_1->pos).z;
  *(float *)((int)pvVar11 + iVar12 * 0x10 + 0x1cc) = fVar10 * 0.3 + fVar9 * -1.2 + fVar7 * -0.7;
  *(float *)((int)pvVar11 + iVar12 * 0x10 + 0x1c8) =
       fVar8 * 0.3 + fVar6 * -1.2 + fVar4 * -0.7 + fVar2;
  *(undefined4 *)((int)pvVar11 + *(int *)((int)pvVar11 + 0x2c4) * 0x10 + 0x1cc) = 0x3f800000;
  if ((bVar1) && (uVar14 != **(uint **)((int)pvVar11 + 0x2c8))) {
    **(uint **)((int)pvVar11 + 0x2c8) = uVar14;
    RegisterFuncForMoby(&PTR_M1319_002461a0_00709dc0,param_1);
  }
  return;
}



//==== 00246800  ns=mobyupdate_helpers  size=0xb40
// sig: undefined M1319_00246800(void)
// callers(1): 002476e8 mobyupdate_unsorted::UpdateMoby_1319
// callees(4): 00109c30 mobyutil::OrganicDelt; 00500ca4 fastfunc::FastEulerToMtx1; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

void mobyupdate_helpers::M1319_00246800(int param_1)

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
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  int iVar16;
  Spline *pSVar17;
  ulonglong *puVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  int iVar31;
  ulonglong uVar29;
  longlong lVar30;
  int iVar32;
  float *pfVar33;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  ulonglong in_f14;
  double dVar40;
  ulonglong in_f15;
  double dVar41;
  ulonglong in_f16;
  double dVar42;
  ulonglong in_f17;
  double dVar43;
  ulonglong in_f18;
  double dVar44;
  ulonglong in_f19;
  double dVar45;
  ulonglong in_f20;
  double dVar46;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar47;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar25 = ZEXT48(&stack0x00000000);
  lVar27 = uVar25 - 0x220;
  puVar18 = (ulonglong *)lVar27;
  *puVar18 = uVar25;
  puVar18[0x46] = in_LR;
  puVar18[0x32] = in_f14;
  puVar18[0x33] = in_f15;
  puVar18[0x34] = in_f16;
  puVar18[0x35] = in_f17;
  puVar18[0x36] = in_f18;
  puVar18[0x37] = in_f19;
  puVar18[0x38] = in_f20;
  puVar18[0x39] = in_f21;
  puVar18[0x3a] = in_f22;
  puVar18[0x3b] = in_f23;
  puVar18[0x3c] = in_f24;
  puVar18[0x3d] = in_f25;
  puVar18[0x3e] = in_f26;
  puVar18[0x3f] = in_f27;
  puVar18[0x40] = in_f28;
  puVar18[0x41] = in_f29;
  puVar18[0x42] = in_f30;
  puVar18[0x43] = in_f31;
  puVar18[0x31] = unaff_r31;
  puVar18[0x30] = unaff_r30;
  iVar15 = *(int *)(param_1 + 0x78);
  iVar16 = *(int *)(iVar15 + 100);
  pSVar17 = Splines[*(int *)(iVar15 + 0x60)];
  iVar31 = pSVar17->cnt;
  iVar32 = (iVar16 + 1) - ((iVar16 + 1) / iVar31) * iVar31;
  dVar46 = (double)pSVar17->points[iVar16].x;
  dVar45 = (double)pSVar17->points[iVar16].y;
  dVar43 = (double)*(float *)((int)pSVar17 + (iVar32 * 4 + 4) * 4);
  dVar42 = (double)*(float *)((int)pSVar17 + (iVar32 * 4 + 5) * 4);
  iVar31 = (iVar16 + 2) - ((iVar16 + 2) / iVar31) * iVar31;
  fVar1 = (float)(dVar46 - dVar43);
  fVar2 = (float)(dVar45 - dVar42);
  dVar44 = (double)pSVar17->points[iVar16].z;
  dVar35 = (double)*(float *)((int)pSVar17 + (iVar32 * 4 + 6) * 4);
  dVar41 = 0.0;
  fVar4 = *(float *)((int)pSVar17 + (iVar31 * 4 + 4) * 4);
  fVar5 = *(float *)((int)pSVar17 + (iVar31 * 4 + 5) * 4);
  fVar6 = *(float *)((int)pSVar17 + (iVar31 * 4 + 6) * 4);
  *(float *)(puVar18 + 0x1d) = fVar1;
  *(float *)((int)puVar18 + 0xec) = fVar2;
  *(undefined4 *)((int)puVar18 + 0x7c) = 0;
  *(float *)(puVar18 + 0x1e) = ABS(fVar1) - ABS(fVar2);
  *(undefined4 *)(puVar18 + 0xf) = 0;
  *(undefined4 *)((int)puVar18 + 0x74) = 0;
  *(undefined4 *)(puVar18 + 0xe) = 0;
  uVar29 = (ulonglong)(*(uint *)(puVar18 + 0x1d) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar18 + 0x1e) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar18 + 0xec) >> 0x1d) & 4;
  fVar3 = ABS(*(float *)(puVar18 + 0x1d));
  if (*(float *)(puVar18 + 0x1e) - 0.0 < 0.0) {
    fVar3 = ABS(fVar2);
  }
  fVar13 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar29 << 2));
  fVar7 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
  fVar14 = ABS(*(float *)((int)puVar18 + 0xec));
  if (*(float *)(puVar18 + 0x1e) - 0.0 < 0.0) {
    fVar14 = ABS(fVar1);
  }
  dVar36 = dVar41;
  if (0.0 < fVar3) {
    lVar26 = uVar25 - 0x210;
    lVar30 = uVar25 - 0xbc;
    lVar28 = uVar25 - 0xcc;
    lVar34 = 2;
    fVar3 = (fVar14 - fVar3) / (fVar14 + fVar3);
    fVar14 = fVar3 * fVar3;
    *(float *)((int)puVar18 + 0x154) = fVar3;
    *(float *)(puVar18 + 0x2b) = fVar3;
    *(float *)((int)puVar18 + 0x15c) = fVar3;
    *(float *)(puVar18 + 0x2c) = fVar3;
    fVar3 = fVar14 * fVar14;
    *(float *)(puVar18 + 0x2b) = *(float *)(puVar18 + 0x2b) * fVar14;
    *(float *)((int)puVar18 + 0x15c) = *(float *)((int)puVar18 + 0x15c) * fVar3;
    *(float *)(puVar18 + 0x2c) = *(float *)(puVar18 + 0x2c) * fVar3 * fVar14;
    do {
      *(float *)((int)lVar26 + 0x154) = *(float *)((int)lVar26 + 0x144) * fVar3 * fVar3;
      iVar16 = (int)lVar28;
      lVar28 = lVar28 + 8;
      lVar26 = lVar26 + 8;
      *(float *)((int)lVar30 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
      lVar30 = lVar30 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar34 = 4;
    lVar30 = uVar25 - 0xcc;
    pfVar33 = (float *)&DAT_007358e0;
    lVar26 = lVar27;
    lVar28 = lVar30;
    do {
      fVar3 = *pfVar33;
      fVar14 = pfVar33[1];
      pfVar33 = pfVar33 + 2;
      *(float *)((int)lVar26 + 0x154) = *(float *)((int)lVar26 + 0x154) * fVar3;
      lVar26 = lVar26 + 8;
      *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar14;
      lVar28 = lVar28 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar28 = 2;
    lVar26 = lVar27;
    do {
      iVar16 = (int)lVar26;
      iVar31 = (int)lVar30;
      lVar26 = lVar26 + 0x10;
      lVar30 = lVar30 + 0x10;
      dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar16 + 0x154)) +
                        *(float *)(iVar31 + 4) + *(float *)(iVar31 + 8) + *(float *)(iVar31 + 0xc));
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    dVar36 = (double)((float)(dVar36 + 0.7853981852531433) * fVar13 + fVar7);
  }
  fVar4 = (float)(dVar43 - (double)fVar4);
  fVar5 = (float)(dVar42 - (double)fVar5);
  *(float *)((int)puVar18 + 0xdc) = fVar4;
  *(float *)(puVar18 + 0x1c) = fVar5;
  *(float *)((int)puVar18 + 0xe4) = ABS(fVar4) - ABS(fVar5);
  uVar29 = (ulonglong)(*(uint *)((int)puVar18 + 0xdc) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar18 + 0xe4) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar18 + 0x1c) >> 0x1d) & 4;
  fVar3 = ABS(*(float *)((int)puVar18 + 0xdc));
  if (*(float *)((int)puVar18 + 0xe4) - 0.0 < 0.0) {
    fVar3 = ABS(fVar5);
  }
  fVar7 = ABS(*(float *)(puVar18 + 0x1c));
  if (*(float *)((int)puVar18 + 0xe4) - 0.0 < 0.0) {
    fVar7 = ABS(fVar4);
  }
  fVar14 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar29 << 2));
  fVar13 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
  dVar37 = dVar41;
  if (0.0 < fVar3) {
    lVar26 = uVar25 - 0x210;
    lVar30 = uVar25 - 0xdc;
    lVar28 = uVar25 - 0xec;
    lVar34 = 2;
    fVar3 = (fVar7 - fVar3) / (fVar7 + fVar3);
    fVar7 = fVar3 * fVar3;
    *(float *)((int)puVar18 + 0x134) = fVar3;
    *(float *)(puVar18 + 0x27) = fVar3;
    *(float *)((int)puVar18 + 0x13c) = fVar3;
    *(float *)(puVar18 + 0x28) = fVar3;
    fVar3 = fVar7 * fVar7;
    *(float *)(puVar18 + 0x27) = *(float *)(puVar18 + 0x27) * fVar7;
    *(float *)((int)puVar18 + 0x13c) = *(float *)((int)puVar18 + 0x13c) * fVar3;
    *(float *)(puVar18 + 0x28) = *(float *)(puVar18 + 0x28) * fVar3 * fVar7;
    do {
      *(float *)((int)lVar26 + 0x134) = *(float *)((int)lVar26 + 0x124) * fVar3 * fVar3;
      iVar16 = (int)lVar28;
      lVar28 = lVar28 + 8;
      lVar26 = lVar26 + 8;
      *(float *)((int)lVar30 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
      lVar30 = lVar30 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar34 = 4;
    lVar30 = uVar25 - 0xec;
    pfVar33 = (float *)&DAT_007358e0;
    lVar26 = lVar27;
    lVar28 = lVar30;
    do {
      fVar3 = *pfVar33;
      fVar7 = pfVar33[1];
      pfVar33 = pfVar33 + 2;
      *(float *)((int)lVar26 + 0x134) = *(float *)((int)lVar26 + 0x134) * fVar3;
      lVar26 = lVar26 + 8;
      *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar7;
      lVar28 = lVar28 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar28 = 2;
    lVar26 = lVar27;
    do {
      iVar16 = (int)lVar26;
      iVar31 = (int)lVar30;
      lVar26 = lVar26 + 0x10;
      lVar30 = lVar30 + 0x10;
      dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar16 + 0x134)) +
                        *(float *)(iVar31 + 4) + *(float *)(iVar31 + 8) + *(float *)(iVar31 + 0xc));
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    dVar37 = (double)((float)(dVar37 + 0.7853981852531433) * fVar14 + fVar13);
  }
  fVar3 = (float)(dVar35 - dVar44);
  dVar40 = (double)fVar3;
  fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  *(float *)((int)puVar18 + 0xd4) = fVar3;
  dVar38 = ABS((double)fVar1);
  *(float *)(puVar18 + 0x1a) = fVar1;
  *(float *)(puVar18 + 0x1b) = (float)(dVar38 - ABS(dVar40));
  uVar29 = (ulonglong)(*(uint *)(puVar18 + 0x1a) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar18 + 0x1b) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar18 + 0xd4) >> 0x1d) & 4;
  dVar47 = ABS((double)*(float *)(puVar18 + 0x1a));
  if (*(float *)(puVar18 + 0x1b) - 0.0 < 0.0) {
    dVar47 = ABS(dVar40);
  }
  fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar29 << 2));
  dVar39 = ABS((double)*(float *)((int)puVar18 + 0xd4));
  if (*(float *)(puVar18 + 0x1b) - 0.0 < 0.0) {
    dVar39 = dVar38;
  }
  fVar2 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
  dVar38 = dVar41;
  if (0.0 < dVar47) {
    lVar26 = uVar25 - 0x210;
    lVar28 = uVar25 - 0x10c;
    lVar30 = uVar25 - 0xfc;
    lVar34 = 2;
    fVar3 = (float)(dVar39 - dVar47) / (float)(dVar39 + dVar47);
    fVar7 = fVar3 * fVar3;
    *(float *)((int)puVar18 + 0x114) = fVar3;
    *(float *)(puVar18 + 0x23) = fVar3;
    *(float *)((int)puVar18 + 0x11c) = fVar3;
    *(float *)(puVar18 + 0x24) = fVar3;
    fVar3 = fVar7 * fVar7;
    *(float *)(puVar18 + 0x23) = *(float *)(puVar18 + 0x23) * fVar7;
    *(float *)((int)puVar18 + 0x11c) = *(float *)((int)puVar18 + 0x11c) * fVar3;
    *(float *)(puVar18 + 0x24) = *(float *)(puVar18 + 0x24) * fVar3 * fVar7;
    do {
      *(float *)((int)lVar26 + 0x114) = *(float *)((int)lVar26 + 0x104) * fVar3 * fVar3;
      iVar16 = (int)lVar28;
      lVar26 = lVar26 + 8;
      lVar28 = lVar28 + 8;
      *(float *)((int)lVar30 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
      lVar30 = lVar30 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar34 = 4;
    lVar30 = uVar25 - 0x10c;
    pfVar33 = (float *)&DAT_007358e0;
    lVar26 = lVar27;
    lVar28 = lVar30;
    do {
      fVar3 = *pfVar33;
      fVar7 = pfVar33[1];
      pfVar33 = pfVar33 + 2;
      *(float *)((int)lVar26 + 0x114) = *(float *)((int)lVar26 + 0x114) * fVar3;
      lVar26 = lVar26 + 8;
      *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar7;
      lVar28 = lVar28 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar28 = 2;
    lVar26 = lVar27;
    dVar47 = dVar41;
    do {
      iVar16 = (int)lVar26;
      iVar31 = (int)lVar30;
      lVar26 = lVar26 + 0x10;
      lVar30 = lVar30 + 0x10;
      dVar47 = (double)((float)(dVar47 + (double)*(float *)(iVar16 + 0x114)) +
                        *(float *)(iVar31 + 4) + *(float *)(iVar31 + 8) + *(float *)(iVar31 + 0xc));
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    dVar38 = (double)((float)(dVar47 + 0.7853981852531433) * fVar1 + fVar2);
  }
  fVar1 = (float)((double)fVar6 - dVar35);
  fVar2 = ABS(fVar1);
  *(float *)(puVar18 + 0x19) = fVar1;
  fVar1 = SQRT(fVar4 * fVar4 + fVar5 * fVar5);
  fVar4 = ABS(fVar1);
  *(float *)((int)puVar18 + 0xc4) = fVar1;
  *(float *)((int)puVar18 + 0xcc) = fVar4 - fVar2;
  uVar29 = (ulonglong)(*(uint *)((int)puVar18 + 0xc4) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar18 + 0xcc) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar18 + 0x19) >> 0x1d) & 4;
  fVar1 = ABS(*(float *)((int)puVar18 + 0xc4));
  if (*(float *)((int)puVar18 + 0xcc) - 0.0 < 0.0) {
    fVar1 = fVar2;
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar29 << 2));
  fVar5 = ABS(*(float *)(puVar18 + 0x19));
  if (*(float *)((int)puVar18 + 0xcc) - 0.0 < 0.0) {
    fVar5 = fVar4;
  }
  fVar4 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
  dVar35 = dVar41;
  if (0.0 < fVar1) {
    lVar34 = 2;
    fVar1 = (fVar5 - fVar1) / (fVar5 + fVar1);
    fVar5 = fVar1 * fVar1;
    *(float *)((int)puVar18 + 0xf4) = fVar1;
    *(float *)(puVar18 + 0x1f) = fVar1;
    *(float *)((int)puVar18 + 0xfc) = fVar1;
    *(float *)(puVar18 + 0x20) = fVar1;
    lVar28 = uVar25 - 0x210;
    fVar1 = fVar5 * fVar5;
    lVar26 = uVar25 - 300;
    lVar30 = uVar25 - 0x11c;
    *(float *)(puVar18 + 0x1f) = *(float *)(puVar18 + 0x1f) * fVar5;
    *(float *)((int)puVar18 + 0xfc) = *(float *)((int)puVar18 + 0xfc) * fVar1;
    *(float *)(puVar18 + 0x20) = *(float *)(puVar18 + 0x20) * fVar1 * fVar5;
    do {
      *(float *)((int)lVar28 + 0xf4) = *(float *)((int)lVar28 + 0xe4) * fVar1 * fVar1;
      iVar16 = (int)lVar26;
      lVar26 = lVar26 + 8;
      lVar28 = lVar28 + 8;
      *(float *)((int)lVar30 + 4) = *(float *)(iVar16 + 4) * fVar1 * fVar1;
      lVar30 = lVar30 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar34 = 4;
    lVar30 = uVar25 - 300;
    pfVar33 = (float *)&DAT_007358e0;
    lVar26 = lVar27;
    lVar28 = lVar30;
    do {
      fVar1 = *pfVar33;
      fVar5 = pfVar33[1];
      pfVar33 = pfVar33 + 2;
      *(float *)((int)lVar26 + 0xf4) = *(float *)((int)lVar26 + 0xf4) * fVar1;
      lVar26 = lVar26 + 8;
      *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar5;
      lVar28 = lVar28 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar26 = 2;
    do {
      iVar16 = (int)lVar27;
      iVar31 = (int)lVar30;
      lVar27 = lVar27 + 0x10;
      lVar30 = lVar30 + 0x10;
      dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar16 + 0xf4)) + *(float *)(iVar31 + 4)
                        + *(float *)(iVar31 + 8) + *(float *)(iVar31 + 0xc));
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    dVar35 = (double)((float)(dVar35 + 0.7853981852531433) * fVar2 + fVar4);
  }
  dVar35 = (double)fastfunc::FastDiffRots(dVar35,dVar38);
  dVar35 = (double)fastfunc::FastWrapRot
                             ((float)(dVar35 * (double)*(float *)(iVar15 + 0x68)),(float)dVar38);
  *(float *)((int)puVar18 + 0x74) = (float)dVar35;
  dVar35 = (double)fastfunc::FastDiffRots(dVar37,dVar36);
  dVar35 = (double)fastfunc::FastWrapRot
                             ((float)(dVar35 * (double)*(float *)(iVar15 + 0x68)),(float)dVar36);
  uVar8 = *(undefined4 *)((int)puVar18 + 0x74);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(puVar18 + 0xe);
  uVar9 = *(undefined4 *)((int)puVar18 + 0x7c);
  *(undefined4 *)(param_1 + 0x44) = uVar8;
  *(undefined4 *)(param_1 + 0x4c) = uVar9;
  *(float *)(puVar18 + 0xf) = (float)dVar35;
  *(float *)(param_1 + 0x48) = (float)dVar35;
  if (0 < *(int *)(iVar15 + 0x6c)) {
    dVar35 = (double)fastfunc::FastWrapRot((float)dVar35,3.14159);
    *(float *)(param_1 + 0x48) = (float)dVar35;
    *(float *)(param_1 + 0x44) = -*(float *)(param_1 + 0x44);
  }
  dVar35 = (double)*(float *)(iVar15 + 0x68);
  dVar44 = (double)(float)(dVar35 * dVar40 + dVar44);
  dVar43 = (double)(float)(dVar35 * (double)(float)(dVar43 - dVar46) + dVar46);
  dVar35 = (double)(float)(dVar35 * (double)(float)(dVar42 - dVar45) + dVar45);
  fastfunc::FastEulerToMtx1(uVar25 - 0x1a0,uVar25 - 0x1b0);
  fVar1 = *(float *)(iVar15 + 0x70);
  fVar2 = *(float *)((int)puVar18 + 0x94);
  fVar13 = fVar1 + 1.5707963;
  fVar4 = *(float *)(puVar18 + 0x12);
  fVar5 = *(float *)((int)puVar18 + 0xa4);
  fVar6 = *(float *)(puVar18 + 0x13);
  fVar3 = *(float *)(puVar18 + 0x14);
  fVar7 = *(float *)(puVar18 + 0x15);
  fVar14 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar14 = fVar1;
  }
  dVar42 = (double)SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar2 * fVar2);
  fVar19 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar14 < 0.0) {
    fVar19 = fVar14;
  }
  fVar1 = 3.1415925 - fVar13;
  if (fVar13 - (3.1415925 - fVar13) < 0.0) {
    fVar1 = fVar13;
  }
  fVar14 = *(float *)(iVar15 + 0x78);
  fVar20 = fVar19 * fVar19;
  fVar21 = -3.1415925 - fVar13;
  if ((-3.1415925 - fVar13) - fVar1 < 0.0) {
    fVar21 = fVar1;
  }
  dVar46 = (double)SQRT(fVar7 * fVar7 + fVar3 * fVar3 + fVar5 * fVar5);
  fVar10 = *(float *)(param_1 + 0x14);
  fVar11 = *(float *)(param_1 + 0x10);
  fVar12 = *(float *)(param_1 + 0x18);
  *(undefined4 *)(puVar18 + 0x18) = 0;
  fVar1 = fVar20 * fVar20 * fVar19;
  fVar13 = fVar21 * fVar21;
  fVar24 = fVar20 * fVar1;
  fVar22 = fVar13 * fVar13 * fVar21;
  fVar23 = fVar13 * fVar22;
  fVar1 = (float)((double)(fVar14 * (fVar20 * fVar24 * 2.601887e-06 +
                                    fVar24 * -0.0001980741 +
                                    fVar1 * 0.0083330255 + fVar20 * fVar19 * -0.16666657 + fVar19))
                 / dVar42);
  fVar13 = (float)((double)(fVar14 * (fVar13 * fVar23 * 2.601887e-06 +
                                     fVar23 * -0.0001980741 +
                                     fVar22 * 0.0083330255 + fVar13 * fVar21 * -0.16666657 + fVar21)
                           ) / dVar46);
  dVar45 = dVar41;
  if (dVar41 - dVar42 < 0.0) {
    dVar45 = (double)(fVar2 * fVar1);
  }
  dVar36 = dVar41;
  if (dVar41 - dVar42 < 0.0) {
    dVar36 = (double)(fVar4 * fVar1);
  }
  dVar37 = dVar41;
  if (dVar41 - dVar42 < 0.0) {
    dVar37 = (double)(fVar6 * fVar1);
  }
  if (dVar42 - dVar41 < 0.0) {
    dVar45 = (double)(fVar2 * fVar1);
  }
  if (dVar42 - dVar41 < 0.0) {
    dVar36 = (double)(fVar4 * fVar1);
  }
  if (dVar42 - dVar41 < 0.0) {
    dVar37 = (double)(fVar6 * fVar1);
  }
  dVar42 = dVar41;
  if (dVar41 - dVar46 < 0.0) {
    dVar42 = (double)(fVar5 * fVar13);
  }
  dVar47 = dVar41;
  if (dVar41 - dVar46 < 0.0) {
    dVar47 = (double)(fVar3 * fVar13);
  }
  dVar38 = dVar41;
  if (dVar41 - dVar46 < 0.0) {
    dVar38 = (double)(fVar7 * fVar13);
  }
  if (dVar46 - dVar41 < 0.0) {
    dVar42 = (double)(fVar5 * fVar13);
  }
  if (dVar46 - dVar41 < 0.0) {
    dVar38 = (double)(fVar7 * fVar13);
  }
  if (dVar46 - dVar41 < 0.0) {
    dVar47 = (double)(fVar3 * fVar13);
  }
  dVar45 = (double)(float)(dVar42 + (double)(float)(dVar45 + dVar35));
  dVar35 = (double)(float)(dVar38 + (double)(float)(dVar37 + dVar44));
  dVar42 = (double)(float)(dVar47 + (double)(float)(dVar36 + dVar43));
  fVar1 = (float)((double)fVar10 - dVar45);
  fVar2 = (float)((double)fVar12 - dVar35);
  fVar4 = (float)((double)fVar11 - dVar42);
  mobyutil::OrganicDelt
            (SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar1 * fVar1),DAT_0071f418 * 10.0,
             DAT_0071f418 * 10.0,mobyutil::g_FrameTime * 20.0,(float *)(puVar18 + 0x18),0x720000,
             (float *)(iVar15 + 0x80));
  fVar2 = (float)(dVar45 - (double)*(float *)(param_1 + 0x14));
  fVar4 = (float)(dVar42 - (double)*(float *)(param_1 + 0x10));
  fVar5 = (float)(dVar35 - (double)*(float *)(param_1 + 0x18));
  dVar42 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar2 * fVar2);
  fVar1 = (float)((double)*(float *)(iVar15 + 0x80) / dVar42);
  dVar35 = dVar41;
  if (dVar41 - dVar42 < 0.0) {
    dVar35 = (double)(fVar5 * fVar1);
  }
  dVar43 = dVar41;
  if (dVar41 - dVar42 < 0.0) {
    dVar43 = (double)(fVar2 * fVar1);
  }
  dVar44 = dVar41;
  if (dVar41 - dVar42 < 0.0) {
    dVar44 = (double)(fVar4 * fVar1);
  }
  if (dVar42 - dVar41 < 0.0) {
    dVar35 = (double)(fVar5 * fVar1);
  }
  if (dVar42 - dVar41 < 0.0) {
    dVar43 = (double)(fVar2 * fVar1);
  }
  if (dVar42 - dVar41 < 0.0) {
    dVar44 = (double)(fVar4 * fVar1);
  }
  *(float *)(param_1 + 0x18) = (float)((double)*(float *)(param_1 + 0x18) + dVar35);
  *(float *)(param_1 + 0x14) = (float)((double)*(float *)(param_1 + 0x14) + dVar43);
  *(float *)(param_1 + 0x10) = (float)((double)*(float *)(param_1 + 0x10) + dVar44);
  return;
}



//==== 00247350  ns=mobyupdate_helpers  size=0x314
// sig: undefined M1319_00247350(void)
// callers(1): 002476e8 mobyupdate_unsorted::UpdateMoby_1319
// callees(4): 00059e20 collproc::CollSphere; 000fddc0 mobyutil::MB_SetAnimation; 0010675c mobyutil::MB_damage; 0011b728 mobyutil::MB_UnlockSkillPoint

void mobyupdate_helpers::M1319_00247350(int param_1)

{
  bool bVar1;
  int iVar2;
  short sVar3;
  PlayerState PVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  
  iVar6 = *(int *)(param_1 + 0x78);
  iVar5 = mobyutil::MB_damage(param_1,0x330000,0);
  *(undefined1 *)(param_1 + 0xa4) = 0xff;
  PVar4 = g_heroState;
  if (g_heroState == TURRET_PLANE_UI) {
    uVar7 = *(ushort *)(param_1 + 0x34) | 0x1000;
  }
  else {
    uVar7 = *(ushort *)(param_1 + 0x34) & 0xefff;
  }
  *(ushort *)(param_1 + 0x34) = uVar7;
  if (iVar5 == 0) {
    if (*(char *)(param_1 + 0x20) == '\x05') {
      if (PVar4 != TURRET_PLANE_UI) {
        *(undefined1 *)(param_1 + 0x20) = 4;
        *(ushort *)(param_1 + 0x34) = uVar7 | 1;
        *(undefined4 *)(param_1 + 0x94) = 0;
      }
      iVar6 = collproc::CollSphere(0x3ff0000000000000,param_1 + 0x10,&DAT_00247340,0,param_1);
      if ((iVar6 != 0) && (*(undefined1 *)(param_1 + 0x20) = 6, *(char *)(param_1 + 0x53) != '\x01')
         ) {
        mobyutil::MB_SetAnimation(param_1,1,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  else {
    if (DAT_00a257f4 != -1) {
      DAT_00a257f4 = DAT_00a257f4 + 1;
    }
    iVar2 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
    if ((int)(uint)DAT_00a257f6 < iVar2 / 600) {
      sVar3 = (short)(iVar2 >> 0x1f);
      DAT_00a257f6 = ((short)(iVar2 / 600) + sVar3) -
                     ((short)((short)(iVar2 / 0x2580000) + sVar3) >> 0xf);
    }
    DAT_00a257f8 = DAT_00a257f8 | 1 << (Level & 0x3f) | 0x80000000;
    if (((Level == Pokitaru) && (*(int *)(iVar5 + 0x20) != 0)) &&
       (*(short *)(*(int *)(iVar5 + 0x20) + 0xa6) == 0xac)) {
      ShipsKilledCounts.Pokitaru = ShipsKilledCounts.Pokitaru + 1;
      if (2 < ShipsKilledCounts.Pokitaru) {
        mobyutil::MB_UnlockSkillPoint(0x12);
      }
    }
    bVar1 = *(int *)(iVar6 + 0x88) == 0;
    if ((bVar1) || (*(char *)(param_1 + 0x20) == '\x06')) {
      if ((bVar1) &&
         ((*(char *)(param_1 + 0x20) != '\x02' &&
          (*(undefined1 *)(param_1 + 0x20) = 2, *(char *)(param_1 + 0x53) != '\x01')))) {
        mobyutil::MB_SetAnimation(param_1,1,0,(int)(animationSpeed * 10.5));
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x20) = 6;
      if (*(char *)(param_1 + 0x53) != '\x01') {
        mobyutil::MB_SetAnimation(param_1,1,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  return;
}



//==== 002476e8  ns=mobyupdate_unsorted  size=0x15b4
// sig: undefined UpdateMoby_1319(MobyInstance * moby)
// callers(0): 
// callees(19): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fddc0 mobyutil::MB_SetAnimation; 000fe4f0 mobyutil::MB_randRangeSigned; 00109af0 mobyutil::Delt; 00109c30 mobyutil::OrganicDelt; 0010a2e0 mobyutil::OrganicDeltAng; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00110488 mobyutil::ClampVec3Magnitude; 0015d12c sound::PlayMobySound; 00187e00 FUN_00187e00; 0020ab50 mobyupdate_helpers::M1215_0020ab50; 00246598 mobyupdate_helpers::M1319_00246598; 00246800 mobyupdate_helpers::M1319_00246800; 00247350 mobyupdate_helpers::M1319_00247350; 00500b64 fastfunc::FastEulerToMtx; 00502578 fastfunc::FastWrapRot; 00502910 fastfunc::FastCheckBsphereInView
// strings: 00a1000c: 'None'

/* Moby 1319 */

void mobyupdate_unsorted::UpdateMoby_1319(MobyInstance *moby)

{
  bool bVar1;
  float fVar2;
  byte bVar3;
  char cVar4;
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
  void *pvVar19;
  uint uVar20;
  ulonglong *puVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  char acVar27 [4];
  ulonglong uVar28;
  int iVar29;
  int iVar31;
  longlong lVar30;
  float *pfVar34;
  ulonglong uVar32;
  longlong lVar33;
  longlong lVar35;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  longlong lVar36;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar37;
  longlong lVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  ulonglong in_f14;
  ulonglong in_f15;
  ulonglong in_f16;
  ulonglong in_f17;
  ulonglong in_f18;
  double dVar47;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar48;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar49;
  ulonglong in_f29;
  double dVar50;
  ulonglong in_f30;
  double dVar51;
  ulonglong in_f31;
  double dVar52;
  
  lVar30 = (longlong)(int)moby;
  uVar28 = ZEXT48(&stack0x00000000);
  lVar36 = uVar28 - 0x280;
  puVar21 = (ulonglong *)lVar36;
  *puVar21 = uVar28;
  puVar21[0x52] = in_LR;
  puVar21[0x3e] = in_f14;
  puVar21[0x3f] = in_f15;
  puVar21[0x40] = in_f16;
  puVar21[0x41] = in_f17;
  puVar21[0x42] = in_f18;
  puVar21[0x43] = in_f19;
  puVar21[0x44] = in_f20;
  puVar21[0x45] = in_f21;
  puVar21[0x46] = in_f22;
  puVar21[0x47] = in_f23;
  puVar21[0x48] = in_f24;
  puVar21[0x49] = in_f25;
  puVar21[0x4a] = in_f26;
  puVar21[0x4b] = in_f27;
  puVar21[0x4c] = in_f28;
  puVar21[0x4d] = in_f29;
  puVar21[0x4e] = in_f30;
  puVar21[0x4f] = in_f31;
  puVar21[0x3d] = unaff_r31;
  puVar21[0x3c] = unaff_r30;
  puVar21[0x3b] = unaff_r29;
  puVar21[0x3a] = unaff_r28;
  puVar21[0x39] = unaff_r27;
  pvVar19 = moby->pVar;
  mobyupdate_helpers::M1319_00247350();
  fVar7 = g_heroPosition.z;
  fVar6 = GameCamera.rot.elevation;
  fVar5 = GameCamera.rot.azimuth;
  bVar3 = moby->state;
  if (bVar3 < 4) {
    if (bVar3 == 0) {
      moby->updateDistance = -1;
      iVar29 = *(int *)((int)pvVar19 + 0x88);
      moby->drawDistance = 0xff;
      if (iVar29 == 0) {
        moby->state = '\x01';
        dVar40 = (double)mobyutil::MB_randRangeSigned(0x3fd3333340000000,0x3fe0000000000000);
        *(float *)((int)pvVar19 + 0x6c) = (float)dVar40;
        dVar40 = (double)mobyutil::MB_randRot();
        *(float *)((int)pvVar19 + 0x70) = (float)dVar40;
        dVar40 = (double)mobyutil::MB_randRangeSigned(0x404e000000000000,0x405e000000000000);
        *(float *)((int)pvVar19 + 0x74) =
             (float)(dVar40 * 0.01745329238474369) * mobyutil::g_FrameTime;
        dVar40 = (double)mobyutil::MB_randRangeFloat(8.0,12.0);
        *(float *)((int)pvVar19 + 0x78) = (float)dVar40;
      }
      else {
        moby->state = '\x04';
        moby->collision = (ushort *)0x0;
        moby->modeBits = moby->modeBits | DISABLED;
      }
    }
    else if (bVar3 < 3) {
      mobyupdate_helpers::M1319_00246598(lVar30);
      fVar5 = *(float *)((int)pvVar19 + 0x68) + *(float *)((int)pvVar19 + 0x6c);
      *(float *)((int)pvVar19 + 0x68) = fVar5;
      if (fVar5 <= 1.0) {
        if (fVar5 < 0.0) {
          *(float *)((int)pvVar19 + 0x68) = fVar5 + 1.0;
          iVar29 = Splines[*(int *)((int)pvVar19 + 0x60)]->cnt;
          iVar31 = *(int *)((int)pvVar19 + 100) + iVar29 + -1;
          *(int *)((int)pvVar19 + 100) = iVar31 - (iVar31 / iVar29) * iVar29;
        }
      }
      else {
        iVar29 = *(int *)((int)pvVar19 + 100) + 1;
        *(float *)((int)pvVar19 + 0x68) = fVar5 - 1.0;
        *(int *)((int)pvVar19 + 100) =
             iVar29 - (iVar29 / Splines[*(int *)((int)pvVar19 + 0x60)]->cnt) *
                      Splines[*(int *)((int)pvVar19 + 0x60)]->cnt;
      }
      fastfunc::FastWrapRot(*(float *)((int)pvVar19 + 0x70),*(float *)((int)pvVar19 + 0x74));
      mobyupdate_helpers::M1319_00246800(lVar30);
      if (moby->state == '\x02') {
        lVar36 = lVar30 + 0x10;
        mobyutil::MB_SpawnExplosionSparks
                  (0x4000000000000000,0x402a000000000000,lVar30,lVar36,&DAT_00247664,
                   0xffffffffffffffff);
        iVar29 = mobyutil::MB_randInt(2);
        if (iVar29 == 0) {
          mobyupdate_helpers::M1215_0020ab50(lVar36,&DAT_00a15d30,0x4c2);
        }
        else {
          mobyupdate_helpers::M1215_0020ab50(lVar36,&DAT_00a15d30,0x4c4);
        }
        sound::PlayMobySound(1,0,moby);
        CHAR_ARRAY_00a1000c[0x2b0] = -1;
        CHAR_ARRAY_00a1000c[0x2b1] = -1;
        moby->state = '\x03';
        moby->collision = (ushort *)0x0;
        moby->modeBits = moby->modeBits | DISABLED;
      }
      else if ((moby->enabled == '\0') &&
              (fVar5 = (moby->pos).y - g_heroPosition.y, fVar6 = (moby->pos).x - g_heroPosition.x,
              fVar7 = (moby->pos).z - g_heroPosition.z,
              SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5) < 32.0)) {
        moby->state = '\x03';
        moby->collision = (ushort *)0x0;
        moby->modeBits = moby->modeBits | DISABLED;
      }
    }
    else {
      iVar29 = fastfunc::FastCheckBsphereInView(0x4080000000000000,lVar30 + 0x10);
      fVar5 = animationSpeed;
      if ((iVar29 != -1) ||
         (fVar6 = (moby->pos).y - g_heroPosition.y, fVar7 = (moby->pos).x - g_heroPosition.x,
         fVar2 = (moby->pos).z - g_heroPosition.z,
         SQRT(fVar2 * fVar2 + fVar7 * fVar7 + fVar6 * fVar6) <= 32.0)) {
        *(undefined4 *)((int)pvVar19 + 0x84) = 0;
      }
      else {
        iVar29 = *(int *)((int)pvVar19 + 0x84) + 1;
        *(int *)((int)pvVar19 + 0x84) = iVar29;
        puVar21[0x37] = (longlong)(int)(fVar5 * 60.5);
        if (*(int *)((int)puVar21 + 0x1bc) < iVar29) {
          moby->state = '\x01';
          if (moby->animationId != '\0') {
            puVar21[0x37] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar30,0,0,*(undefined4 *)((int)puVar21 + 0x1bc));
          }
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
          moby->collision = moby->pClass->collision;
        }
      }
    }
  }
  else if (bVar3 < 6) {
    if (4 < bVar3) {
      dVar40 = 0.0;
      uVar20 = (int)GameCamera.rot.elevation >> 0x1f;
      *(undefined4 *)(puVar21 + 0x1c) = 0;
      *(float *)(puVar21 + 0x10) = fVar5;
      fVar5 = GameCamera.rot.radius;
      *(float *)((int)puVar21 + 0x84) = GameCamera.rot.elevation;
      acVar27 = GameCamera.field10_0x15c;
      iVar29 = (uVar20 >> 1 ^ (uint)fVar6) - uVar20;
      *(float *)(puVar21 + 0x11) = fVar5;
      *(char (*) [4])((int)puVar21 + 0x8c) = acVar27;
      *(undefined4 *)(puVar21 + 0x10) = 0;
      if (iVar29 < 0x3e860a93) {
        if (iVar29 < -0x3e860a92) {
          *(undefined4 *)((int)puVar21 + 0x84) = 0xbe860a92;
        }
      }
      else {
        *(undefined4 *)((int)puVar21 + 0x84) = 0x3e860a92;
      }
      fastfunc::FastEulerToMtx(uVar28 - 0x1d0,uVar28 - 0x200);
      fVar7 = g_heroPosition.z;
      fVar6 = g_heroPosition.y;
      dVar52 = (double)g_heroPosition.w;
      fVar5 = g_heroPosition.x - *(float *)((int)pvVar19 + 0xb0);
      *(float *)((int)pvVar19 + 0xb0) = g_heroPosition.x;
      fVar6 = fVar6 - *(float *)((int)pvVar19 + 0xb4);
      fVar7 = fVar7 - *(float *)((int)pvVar19 + 0xb8);
      *(float *)((int)pvVar19 + 0xb4) = g_heroPosition.y;
      *(float *)((int)pvVar19 + 0xb8) = g_heroPosition.z;
      *(float *)((int)pvVar19 + 0xbc) = g_heroPosition.w;
      iVar29 = *(int *)((int)pvVar19 + 0x88);
      (moby->pos).x = (moby->pos).x + fVar5;
      (moby->pos).y = (moby->pos).y + fVar6;
      (moby->pos).z = (moby->pos).z + fVar7;
      puVar21[0x37] = (longlong)iVar29;
      *(float *)(puVar21 + 0x35) = fVar5;
      *(float *)((int)puVar21 + 0x1a4) = fVar6;
      *(float *)(puVar21 + 0x34) = fVar7;
      *(undefined4 *)((int)puVar21 + 0x1ac) = 0x3f490fdb;
      dVar41 = (double)fastfunc::FastWrapRot(0.7853982,(float)(longlong)puVar21[0x37] * 1.5707964);
      fVar5 = *(float *)((int)puVar21 + 0xc4);
      fVar6 = *(float *)(puVar21 + 0x18);
      fVar7 = *(float *)(puVar21 + 0x19);
      dVar46 = (double)(float)(3.141592502593994 - dVar41);
      if (dVar41 - (double)(float)(3.141592502593994 - dVar41) < 0.0) {
        dVar46 = dVar41;
      }
      dVar45 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
      dVar50 = (double)(float)(-3.141592502593994 - dVar41);
      if ((double)(float)(-3.141592502593994 - dVar41) - dVar46 < 0.0) {
        dVar50 = dVar46;
      }
      dVar46 = (double)(float)(dVar50 * dVar50);
      *(undefined4 *)((int)puVar21 + 0x7c) = *(undefined4 *)((int)puVar21 + 0xcc);
      dVar49 = (double)(float)(dVar46 * (double)(float)(dVar46 * dVar50));
      dVar51 = (double)(float)(dVar46 * dVar49);
      fVar8 = *(float *)((int)puVar21 + 0xd4);
      fVar9 = *(float *)(puVar21 + 0x1a);
      fVar10 = *(float *)((int)puVar21 + 0xb4);
      fVar11 = *(float *)(puVar21 + 0x1b);
      fVar12 = *(float *)(puVar21 + 0x16);
      fVar13 = *(float *)(puVar21 + 0x17);
      fVar2 = (float)((double)(((float)(dVar46 * dVar51) * 2.601887e-06 +
                               (float)(dVar51 * -0.0001980741071747616 +
                                      (double)(float)(dVar49 * 0.008333025500178337 +
                                                     (double)(float)((double)(float)(dVar46 * dVar50
                                                                                    ) *
                                                                     -0.16666656732559204 + dVar50))
                                      )) * 8.0) / dVar45);
      dVar46 = dVar40;
      if (dVar40 - dVar45 < 0.0) {
        dVar46 = (double)(fVar6 * fVar2);
      }
      dVar50 = dVar40;
      if (dVar40 - dVar45 < 0.0) {
        dVar50 = (double)(fVar5 * fVar2);
      }
      dVar49 = dVar40;
      if (dVar40 - dVar45 < 0.0) {
        dVar49 = (double)(fVar7 * fVar2);
      }
      if (dVar45 - dVar40 < 0.0) {
        dVar46 = (double)(fVar6 * fVar2);
      }
      if (dVar45 - dVar40 < 0.0) {
        dVar50 = (double)(fVar5 * fVar2);
      }
      if (dVar45 - dVar40 < 0.0) {
        dVar49 = (double)(fVar7 * fVar2);
      }
      *(float *)(puVar21 + 0xe) = (float)dVar46;
      *(float *)((int)puVar21 + 0x74) = (float)dVar50;
      *(float *)(puVar21 + 0xf) = (float)dVar49;
      fVar5 = (float)(dVar41 + 1.570796251296997);
      dVar41 = (double)SQRT(fVar11 * fVar11 + fVar9 * fVar9 + fVar8 * fVar8);
      fVar6 = (moby->pos).y;
      fVar7 = 3.1415925 - fVar5;
      if (fVar5 - (3.1415925 - fVar5) < 0.0) {
        fVar7 = fVar5;
      }
      dVar45 = (double)SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar10 * fVar10);
      fVar2 = (moby->pos).x;
      dVar48 = (double)GameCamera.posY;
      fVar14 = (moby->pos).z;
      dVar51 = (double)GameCamera.posX;
      fVar15 = -3.1415925 - fVar5;
      if ((-3.1415925 - fVar5) - fVar7 < 0.0) {
        fVar15 = fVar7;
      }
      fVar7 = fVar15 * fVar15;
      fVar16 = fVar7 * fVar7 * fVar15;
      fVar17 = fVar7 * fVar16;
      fVar5 = (float)(20.0 / dVar45);
      dVar43 = (double)GameCamera.posZ;
      *(char (*) [4])((int)puVar21 + 0x7c) = GameCamera.field8_0x14c;
      bVar3 = DAT_0096b2ef;
      pfVar34 = (float *)((int)pvVar19 + 0x6c);
      puVar21[0x36] = (ulonglong)dVar52;
      fVar7 = (float)((double)((fVar7 * fVar17 * 2.601887e-06 +
                               fVar17 * -0.0001980741 +
                               fVar16 * 0.0083330255 + fVar7 * fVar15 * -0.16666657 + fVar15) * 8.0)
                     / dVar41);
      dVar52 = dVar40;
      if (dVar40 - dVar45 < 0.0) {
        dVar52 = (double)(fVar10 * fVar5);
      }
      dVar42 = dVar40;
      if (dVar40 - dVar45 < 0.0) {
        dVar42 = (double)(fVar12 * fVar5);
      }
      dVar47 = dVar40;
      if (dVar40 - dVar45 < 0.0) {
        dVar47 = (double)(fVar13 * fVar5);
      }
      if (dVar45 - dVar40 < 0.0) {
        dVar52 = (double)(fVar10 * fVar5);
      }
      if (dVar45 - dVar40 < 0.0) {
        dVar47 = (double)(fVar13 * fVar5);
      }
      if (dVar45 - dVar40 < 0.0) {
        dVar42 = (double)(fVar12 * fVar5);
      }
      dVar45 = dVar40;
      if (dVar40 - dVar41 < 0.0) {
        dVar45 = (double)(fVar8 * fVar7);
      }
      dVar44 = dVar40;
      if (dVar40 - dVar41 < 0.0) {
        dVar44 = (double)(fVar9 * fVar7);
      }
      dVar39 = dVar40;
      if (dVar40 - dVar41 < 0.0) {
        dVar39 = (double)(fVar11 * fVar7);
      }
      if (dVar41 - dVar40 < 0.0) {
        dVar45 = (double)(fVar8 * fVar7);
      }
      if (dVar41 - dVar40 < 0.0) {
        dVar44 = (double)(fVar9 * fVar7);
      }
      if (dVar41 - dVar40 < 0.0) {
        dVar39 = (double)(fVar11 * fVar7);
      }
      dVar41 = (double)(float)((double)(float)((double)(float)(dVar48 + dVar50) + dVar45) + dVar52);
      dVar46 = (double)(float)((double)(float)((double)(float)(dVar51 + dVar46) + dVar44) + dVar42);
      dVar52 = (double)(float)((double)(float)((double)(float)(dVar43 + dVar49) + dVar39) + dVar47);
      fVar5 = (float)(dVar41 - (double)fVar6);
      fVar6 = (float)(dVar46 - (double)fVar2);
      fVar7 = (float)(dVar52 - (double)fVar14);
      *(float *)((int)puVar21 + 0x74) = fVar5;
      *(float *)(puVar21 + 0xe) = fVar6;
      *(float *)(puVar21 + 0xf) = fVar7;
      fVar5 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
      if ((bVar3 & 2) == 0) {
        if (moby->setByGroup == '\0') {
          mobyutil::OrganicDelt
                    (fVar5,DAT_0071f418 * 2.0,DAT_0071f418 * 20.0,mobyutil::g_FrameTime * 5.0,
                     (float *)(puVar21 + 0x1c),0x720000,pfVar34);
        }
        else {
          mobyutil::OrganicDelt
                    (fVar5,DAT_0071f418 * 2.0,DAT_0071f418 * 20.0,mobyutil::g_FrameTime * 15.0,
                     (float *)(puVar21 + 0x1c),0x720000,pfVar34);
        }
      }
      else {
        mobyutil::OrganicDelt
                  (fVar5,DAT_0071f418 * 2.0,DAT_0071f418 * 20.0,mobyutil::g_FrameTime,
                   (float *)(puVar21 + 0x1c),0x720000,pfVar34);
      }
      mobyutil::ClampVec3Magnitude((double)*(float *)((int)pvVar19 + 0x6c),(Vec4 *)(puVar21 + 0xe));
      fVar5 = (moby->pos).x + *(float *)(puVar21 + 0xe);
      dVar49 = (double)fVar5;
      fVar6 = (moby->pos).y + *(float *)((int)puVar21 + 0x74);
      dVar45 = (double)fVar6;
      cVar4 = moby->setByGroup;
      fVar7 = (moby->pos).z + *(float *)(puVar21 + 0xf);
      dVar50 = (double)fVar7;
      (moby->pos).x = fVar5;
      (moby->pos).y = fVar6;
      (moby->pos).z = fVar7;
      fVar5 = DAT_0071f418;
      if (cVar4 == '\0') {
        dVar46 = (double)g_heroPosition.y;
        dVar41 = (double)(float)((double)g_heroPosition.x - dVar49);
        dVar51 = (double)(float)(dVar46 - dVar45);
        *(float *)(puVar21 + 0x20) = (float)((double)g_heroPosition.x - dVar49);
        *(float *)((int)puVar21 + 0x104) = (float)(dVar46 - dVar45);
        dVar52 = (double)(float)((double)g_heroPosition.z - dVar50);
        *(float *)(puVar21 + 0x21) = (float)(ABS(dVar41) - ABS(dVar51));
        uVar32 = (ulonglong)(*(uint *)(puVar21 + 0x20) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar21 + 0x21) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar21 + 0x104) >> 0x1d) & 4;
        dVar46 = ABS((double)*(float *)(puVar21 + 0x20));
        if ((double)*(float *)(puVar21 + 0x21) - dVar40 < 0.0) {
          dVar46 = ABS(dVar51);
        }
        fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar32 << 2));
        dVar50 = ABS((double)*(float *)((int)puVar21 + 0x104));
        if ((double)*(float *)(puVar21 + 0x21) - dVar40 < 0.0) {
          dVar50 = ABS(dVar41);
        }
        fVar7 = *(float *)(((uint)(uVar32 << 2) | 0x735900) + 4);
        dVar45 = dVar40;
        if (dVar40 < dVar46) {
          lVar33 = uVar28 - 0x270;
          lVar38 = uVar28 - 0x104;
          lVar35 = uVar28 - 0x114;
          lVar37 = 2;
          fVar2 = (float)(dVar50 - dVar46) / (float)(dVar50 + dVar46);
          fVar8 = fVar2 * fVar2;
          *(float *)(puVar21 + 0x2f) = fVar2;
          *(float *)(puVar21 + 0x2e) = fVar2;
          *(float *)((int)puVar21 + 0x174) = fVar2;
          *(float *)((int)puVar21 + 0x16c) = fVar2;
          fVar2 = fVar8 * fVar8;
          *(float *)(puVar21 + 0x2e) = *(float *)(puVar21 + 0x2e) * fVar8;
          *(float *)((int)puVar21 + 0x174) = *(float *)((int)puVar21 + 0x174) * fVar2;
          *(float *)(puVar21 + 0x2f) = *(float *)(puVar21 + 0x2f) * fVar2 * fVar8;
          do {
            *(float *)((int)lVar33 + 0x16c) = *(float *)((int)lVar33 + 0x15c) * fVar2 * fVar2;
            iVar29 = (int)lVar35;
            lVar35 = lVar35 + 8;
            lVar33 = lVar33 + 8;
            *(float *)((int)lVar38 + 4) = *(float *)(iVar29 + 4) * fVar2 * fVar2;
            lVar38 = lVar38 + 8;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          lVar37 = 4;
          lVar38 = uVar28 - 0x114;
          pfVar34 = (float *)&DAT_007358e0;
          lVar33 = lVar36;
          lVar35 = lVar38;
          do {
            fVar2 = *pfVar34;
            fVar8 = pfVar34[1];
            pfVar34 = pfVar34 + 2;
            *(float *)((int)lVar33 + 0x16c) = *(float *)((int)lVar33 + 0x16c) * fVar2;
            lVar33 = lVar33 + 8;
            *(float *)((int)lVar35 + 4) = *(float *)((int)lVar35 + 4) * fVar8;
            lVar35 = lVar35 + 8;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          lVar35 = 2;
          lVar33 = lVar36;
          dVar46 = dVar40;
          do {
            iVar29 = (int)lVar33;
            iVar31 = (int)lVar38;
            lVar33 = lVar33 + 0x10;
            lVar38 = lVar38 + 0x10;
            dVar46 = (double)((float)(dVar46 + (double)*(float *)(iVar29 + 0x16c)) +
                              *(float *)(iVar31 + 4) + *(float *)(iVar31 + 8) +
                             *(float *)(iVar31 + 0xc));
            lVar35 = lVar35 + -1;
          } while (lVar35 != 0);
          dVar45 = (double)((float)(dVar46 + (double)*(float *)((int)puVar21 + 0x1ac)) * fVar6 +
                           fVar7);
        }
        dVar49 = 12.566370964050293;
        mobyutil::OrganicDeltAng
                  ((float)dVar45,fVar5 * 12.566371,fVar5 * 12.566371,
                   mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x247664,
                   (float *)((int)pvVar19 + 0x8c));
        *(float *)(puVar21 + 0x1f) = (float)dVar52;
        dVar50 = (double)mobyutil::g_FrameTime;
        dVar45 = (double)DAT_0071f418;
        fVar5 = SQRT((float)(dVar41 * dVar41 + (double)(float)(dVar51 * dVar51)));
        dVar41 = ABS((double)fVar5);
        *(float *)((int)puVar21 + 0xf4) = fVar5;
        *(float *)((int)puVar21 + 0xfc) = (float)(dVar41 - ABS(dVar52));
        uVar32 = (ulonglong)(*(uint *)((int)puVar21 + 0xf4) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar21 + 0xfc) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar21 + 0x1f) >> 0x1d) & 4;
        iVar29 = (int)(uVar32 << 2);
        dVar46 = ABS((double)*(float *)((int)puVar21 + 0xf4));
        if ((double)*(float *)((int)puVar21 + 0xfc) - dVar40 < 0.0) {
          dVar46 = ABS(dVar52);
        }
        fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar29);
        fVar5 = *(float *)(((uint)(uVar32 << 2) | 0x735900) + 4);
        dVar52 = ABS((double)*(float *)(puVar21 + 0x1f));
        if ((double)*(float *)((int)puVar21 + 0xfc) - dVar40 < 0.0) {
          dVar52 = dVar41;
        }
        dVar41 = dVar40;
        if (dVar40 < dVar46) {
          lVar33 = uVar28 - 0x270;
          lVar35 = uVar28 - 0x134;
          lVar38 = uVar28 - 0x124;
          lVar37 = 2;
          fVar7 = (float)(dVar52 - dVar46) / (float)(dVar52 + dVar46);
          fVar2 = fVar7 * fVar7;
          *(float *)(puVar21 + 0x2b) = fVar7;
          *(float *)(puVar21 + 0x2a) = fVar7;
          *(float *)((int)puVar21 + 0x154) = fVar7;
          *(float *)((int)puVar21 + 0x14c) = fVar7;
          fVar7 = fVar2 * fVar2;
          *(float *)(puVar21 + 0x2a) = *(float *)(puVar21 + 0x2a) * fVar2;
          *(float *)((int)puVar21 + 0x154) = *(float *)((int)puVar21 + 0x154) * fVar7;
          *(float *)(puVar21 + 0x2b) = *(float *)(puVar21 + 0x2b) * fVar7 * fVar2;
          do {
            *(float *)((int)lVar33 + 0x14c) = *(float *)((int)lVar33 + 0x13c) * fVar7 * fVar7;
            iVar29 = (int)lVar35;
            lVar33 = lVar33 + 8;
            lVar35 = lVar35 + 8;
            *(float *)((int)lVar38 + 4) = *(float *)(iVar29 + 4) * fVar7 * fVar7;
            lVar38 = lVar38 + 8;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          lVar37 = 4;
          lVar38 = uVar28 - 0x134;
          pfVar34 = (float *)&DAT_007358e0;
          lVar33 = lVar36;
          lVar35 = lVar38;
          do {
            fVar7 = *pfVar34;
            fVar2 = pfVar34[1];
            pfVar34 = pfVar34 + 2;
            *(float *)((int)lVar33 + 0x14c) = *(float *)((int)lVar33 + 0x14c) * fVar7;
            lVar33 = lVar33 + 8;
            *(float *)((int)lVar35 + 4) = *(float *)((int)lVar35 + 4) * fVar2;
            lVar35 = lVar35 + 8;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          lVar35 = 2;
          lVar33 = lVar36;
          dVar46 = dVar40;
          do {
            iVar31 = (int)lVar33;
            lVar33 = lVar33 + 0x10;
            iVar29 = (int)lVar33;
            iVar22 = (int)lVar38;
            lVar38 = lVar38 + 0x10;
            dVar46 = (double)((float)(dVar46 + (double)*(float *)(iVar31 + 0x14c)) +
                              *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) +
                             *(float *)(iVar22 + 0xc));
            lVar35 = lVar35 + -1;
          } while (lVar35 != 0);
          dVar41 = (double)((float)(dVar46 + (double)*(float *)((int)puVar21 + 0x1ac)) * fVar6 +
                           fVar5);
        }
        mobyutil::OrganicDeltAng
                  ((float)-dVar41,(float)(dVar45 * dVar49),(float)(dVar45 * dVar49),
                   (float)(dVar50 * dVar49),&(moby->rotation).y,iVar29,
                   (float *)((int)pvVar19 + 0x90));
        if (worldUpdateTime == (worldUpdateTime / 10) * 10) {
          dVar48 = (double)*(float *)(puVar21 + 0x35);
          dVar51 = (double)*(float *)((int)puVar21 + 0x1a4);
          dVar49 = (double)*(float *)(puVar21 + 0x34);
          sound::PlayMobySound(2,0,moby);
          mobyutil::Delt((float)dVar40,0.25,(float *)((int)pvVar19 + 0x94));
          dVar50 = (double)g_heroPosition.x;
          dVar45 = (double)g_heroPosition.z;
          fVar5 = (moby->pos).x;
          fVar6 = (moby->pos).y;
          fVar7 = (moby->pos).z;
          dVar41 = (double)SQRT((float)(dVar49 * dVar49 +
                                       (double)(float)(dVar48 * dVar48 +
                                                      (double)(float)(dVar51 * dVar51))));
          bVar1 = worldUpdateTime == (worldUpdateTime / 0x14) * 0x14;
          dVar52 = (double)(float)((double)*(float *)((int)pvVar19 + 0x94) / dVar41);
          dVar46 = dVar40;
          if (dVar40 - dVar41 < 0.0) {
            dVar46 = (double)(float)(dVar51 * dVar52);
          }
          dVar43 = dVar40;
          if (dVar40 - dVar41 < 0.0) {
            dVar43 = (double)(float)(dVar48 * dVar52);
          }
          dVar42 = dVar40;
          if (dVar40 - dVar41 < 0.0) {
            dVar42 = (double)(float)(dVar49 * dVar52);
          }
          if (dVar41 - dVar40 < 0.0) {
            dVar46 = (double)(float)(dVar51 * dVar52);
          }
          if (dVar41 - dVar40 < 0.0) {
            dVar43 = (double)(float)(dVar48 * dVar52);
          }
          if (dVar41 - dVar40 < 0.0) {
            dVar42 = (double)(float)(dVar49 * dVar52);
          }
          puVar21[0x32] = (ulonglong)(double)(float)(dVar46 + (double)g_heroPosition.y);
          puVar21[0x33] = (ulonglong)(double)(float)(dVar43 + dVar50);
          if (bVar1) {
            fVar2 = (moby->transform).v0.x;
            fVar8 = (moby->transform).v1.x;
            fVar9 = (moby->transform).v2.x;
            fVar10 = (moby->transform).v0.y;
            fVar11 = (moby->transform).v1.y;
            fVar12 = (moby->transform).v2.y;
            fVar13 = (moby->transform).v0.z;
            fVar14 = (moby->transform).v1.z;
            fVar15 = (moby->transform).v2.z;
            fVar16 = (moby->transform).v0.w;
            fVar17 = (moby->transform).v1.w;
            fVar18 = (moby->transform).v2.w;
            fVar23 = DAT_0078e460;
            fVar24 = DAT_0078e46c;
            fVar25 = DAT_0078e464;
            fVar26 = DAT_0078e468;
          }
          else {
            fVar2 = (moby->transform).v0.x;
            fVar8 = (moby->transform).v1.x;
            fVar9 = (moby->transform).v2.x;
            fVar10 = (moby->transform).v0.y;
            fVar11 = (moby->transform).v1.y;
            fVar12 = (moby->transform).v2.y;
            fVar13 = (moby->transform).v0.z;
            fVar14 = (moby->transform).v1.z;
            fVar15 = (moby->transform).v2.z;
            fVar16 = (moby->transform).v0.w;
            fVar17 = (moby->transform).v1.w;
            fVar18 = (moby->transform).v2.w;
            fVar23 = DAT_0078e470;
            fVar24 = DAT_0078e47c;
            fVar25 = DAT_0078e474;
            fVar26 = DAT_0078e478;
          }
          fVar10 = fVar11 * fVar25 + fVar12 * fVar26 + fVar10 * fVar23 + fVar6;
          fVar5 = fVar8 * fVar25 + fVar9 * fVar26 + fVar2 * fVar23 + fVar5;
          fVar8 = fVar14 * fVar25 + fVar15 * fVar26 + fVar13 * fVar23 + fVar7;
          fVar6 = (float)((double)puVar21[0x32] - (double)fVar10);
          fVar7 = (float)((double)puVar21[0x33] - (double)fVar5);
          fVar2 = (float)(dVar42 + dVar45) - fVar8;
          *(float *)((int)puVar21 + 0xac) =
               fVar17 * fVar25 + fVar18 * fVar26 + fVar16 * fVar23 + fVar24;
          fVar9 = DAT_0078e410 * mobyutil::g_FrameTime;
          *(float *)(puVar21 + 0x14) = fVar5;
          *(float *)((int)puVar21 + 0xa4) = fVar10;
          *(float *)(puVar21 + 0x15) = fVar8;
          *(float *)((int)puVar21 + 0x9c) = (float)(double)puVar21[0x36];
          dVar41 = (double)SQRT(fVar2 * fVar2 + fVar7 * fVar7 + fVar6 * fVar6);
          fVar5 = (float)((double)fVar9 / dVar41);
          dVar46 = dVar40;
          if (dVar40 - dVar41 < 0.0) {
            dVar46 = (double)(fVar2 * fVar5);
          }
          dVar52 = dVar40;
          if (dVar40 - dVar41 < 0.0) {
            dVar52 = (double)(fVar6 * fVar5);
          }
          dVar50 = dVar40;
          if (dVar40 - dVar41 < 0.0) {
            dVar50 = (double)(fVar7 * fVar5);
          }
          if (dVar41 - dVar40 < 0.0) {
            dVar46 = (double)(fVar2 * fVar5);
          }
          if (dVar41 - dVar40 < 0.0) {
            dVar52 = (double)(fVar6 * fVar5);
          }
          if (dVar41 - dVar40 < 0.0) {
            dVar50 = (double)(fVar7 * fVar5);
          }
          *(float *)(puVar21 + 0x13) = (float)(dVar46 + (double)*(float *)(puVar21 + 0x34));
          *(float *)((int)puVar21 + 0x94) =
               (float)(dVar52 + (double)*(float *)((int)puVar21 + 0x1a4));
          *(float *)(puVar21 + 0x12) = (float)(dVar50 + (double)*(float *)(puVar21 + 0x35));
          iVar29 = FUN_00187e00(0x4060000000000000,0xbff0000000000000,0x4024000000000000,lVar30,
                                uVar28 - 0x1f0,uVar28 - 0x1e0);
          fVar5 = *(float *)((int)puVar21 + 0x1ac);
          if (iVar29 != 0) {
            fVar6 = *(float *)((int)puVar21 + 0x94) - *(float *)((int)puVar21 + 0x1a4);
            fVar7 = *(float *)(puVar21 + 0x12) - *(float *)(puVar21 + 0x35);
            *(float *)(puVar21 + 0x12) = fVar7;
            *(float *)((int)puVar21 + 0x94) = fVar6;
            fVar2 = *(float *)(puVar21 + 0x13) - *(float *)(puVar21 + 0x34);
            fVar6 = SQRT(fVar7 * fVar7 + fVar6 * fVar6);
            *(float *)((int)puVar21 + 0xec) = fVar2;
            *(float *)(puVar21 + 0x13) = fVar2;
            dVar41 = ABS((double)fVar6);
            *(float *)(puVar21 + 0x1d) = fVar6;
            *(float *)(puVar21 + 0x1e) = (float)(dVar41 - ABS((double)fVar2));
            uVar32 = (ulonglong)(*(uint *)(puVar21 + 0x1d) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)(puVar21 + 0x1e) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)((int)puVar21 + 0xec) >> 0x1d) & 4;
            dVar46 = ABS((double)*(float *)(puVar21 + 0x1d));
            if ((double)*(float *)(puVar21 + 0x1e) - dVar40 < 0.0) {
              dVar46 = ABS((double)fVar2);
            }
            fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar32 << 2));
            dVar52 = ABS((double)*(float *)((int)puVar21 + 0xec));
            if ((double)*(float *)(puVar21 + 0x1e) - dVar40 < 0.0) {
              dVar52 = dVar41;
            }
            fVar7 = *(float *)(((uint)(uVar32 << 2) | 0x735900) + 4);
            dVar41 = dVar40;
            if (dVar40 < dVar46) {
              lVar30 = uVar28 - 0x270;
              lVar35 = uVar28 - 0x144;
              lVar33 = uVar28 - 0x154;
              lVar38 = 2;
              fVar2 = (float)(dVar52 - dVar46) / (float)(dVar52 + dVar46);
              fVar8 = fVar2 * fVar2;
              *(float *)(puVar21 + 0x27) = fVar2;
              *(float *)(puVar21 + 0x26) = fVar2;
              *(float *)((int)puVar21 + 0x134) = fVar2;
              *(float *)((int)puVar21 + 300) = fVar2;
              fVar2 = fVar8 * fVar8;
              *(float *)(puVar21 + 0x26) = *(float *)(puVar21 + 0x26) * fVar8;
              *(float *)((int)puVar21 + 0x134) = *(float *)((int)puVar21 + 0x134) * fVar2;
              *(float *)(puVar21 + 0x27) = *(float *)(puVar21 + 0x27) * fVar2 * fVar8;
              do {
                *(float *)((int)lVar30 + 300) = *(float *)((int)lVar30 + 0x11c) * fVar2 * fVar2;
                iVar31 = (int)lVar33;
                lVar33 = lVar33 + 8;
                lVar30 = lVar30 + 8;
                *(float *)((int)lVar35 + 4) = *(float *)(iVar31 + 4) * fVar2 * fVar2;
                lVar35 = lVar35 + 8;
                lVar38 = lVar38 + -1;
              } while (lVar38 != 0);
              lVar38 = 4;
              lVar35 = uVar28 - 0x154;
              pfVar34 = (float *)&DAT_007358e0;
              lVar30 = lVar36;
              lVar33 = lVar35;
              do {
                fVar2 = *pfVar34;
                fVar8 = pfVar34[1];
                pfVar34 = pfVar34 + 2;
                *(float *)((int)lVar30 + 300) = *(float *)((int)lVar30 + 300) * fVar2;
                lVar30 = lVar30 + 8;
                *(float *)((int)lVar33 + 4) = *(float *)((int)lVar33 + 4) * fVar8;
                lVar33 = lVar33 + 8;
                lVar38 = lVar38 + -1;
              } while (lVar38 != 0);
              lVar33 = 2;
              lVar30 = lVar36;
              dVar46 = dVar40;
              do {
                iVar31 = (int)lVar30;
                iVar22 = (int)lVar35;
                lVar30 = lVar30 + 0x10;
                lVar35 = lVar35 + 0x10;
                dVar46 = (double)((float)(dVar46 + (double)*(float *)(iVar31 + 300)) +
                                  *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) +
                                 *(float *)(iVar22 + 0xc));
                lVar33 = lVar33 + -1;
              } while (lVar33 != 0);
              dVar41 = (double)((float)(dVar46 + (double)fVar5) * fVar6 + fVar7);
            }
            *(float *)(iVar29 + 0x44) = (float)-dVar41;
            dVar52 = ABS((double)*(float *)(puVar21 + 0x12));
            dVar46 = ABS((double)*(float *)((int)puVar21 + 0x94));
            *(float *)((int)puVar21 + 0xe4) = (float)(dVar52 - dVar46);
            uVar32 = (ulonglong)(*(uint *)(puVar21 + 0x12) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar21 + 0xe4) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)((int)puVar21 + 0x94) >> 0x1d) & 4;
            dVar41 = dVar52;
            if ((double)*(float *)((int)puVar21 + 0xe4) - dVar40 < 0.0) {
              dVar41 = dVar46;
            }
            fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar32 << 2));
            if ((double)*(float *)((int)puVar21 + 0xe4) - dVar40 < 0.0) {
              dVar46 = dVar52;
            }
            fVar7 = *(float *)(((uint)(uVar32 << 2) | 0x735900) + 4);
            if (dVar40 < dVar41) {
              lVar30 = uVar28 - 0x270;
              lVar35 = uVar28 - 0x164;
              lVar33 = uVar28 - 0x174;
              lVar38 = 2;
              fVar2 = (float)(dVar46 - dVar41) / (float)(dVar46 + dVar41);
              fVar8 = fVar2 * fVar2;
              *(float *)(puVar21 + 0x23) = fVar2;
              *(float *)(puVar21 + 0x22) = fVar2;
              *(float *)((int)puVar21 + 0x114) = fVar2;
              *(float *)((int)puVar21 + 0x10c) = fVar2;
              fVar2 = fVar8 * fVar8;
              *(float *)(puVar21 + 0x22) = *(float *)(puVar21 + 0x22) * fVar8;
              *(float *)((int)puVar21 + 0x114) = *(float *)((int)puVar21 + 0x114) * fVar2;
              *(float *)(puVar21 + 0x23) = *(float *)(puVar21 + 0x23) * fVar2 * fVar8;
              do {
                *(float *)((int)lVar30 + 0x10c) = *(float *)((int)lVar30 + 0xfc) * fVar2 * fVar2;
                iVar31 = (int)lVar33;
                lVar33 = lVar33 + 8;
                lVar30 = lVar30 + 8;
                *(float *)((int)lVar35 + 4) = *(float *)(iVar31 + 4) * fVar2 * fVar2;
                lVar35 = lVar35 + 8;
                lVar38 = lVar38 + -1;
              } while (lVar38 != 0);
              lVar38 = 4;
              lVar35 = uVar28 - 0x174;
              pfVar34 = (float *)&DAT_007358e0;
              lVar30 = lVar36;
              lVar33 = lVar35;
              do {
                fVar2 = *pfVar34;
                fVar8 = pfVar34[1];
                pfVar34 = pfVar34 + 2;
                *(float *)((int)lVar30 + 0x10c) = *(float *)((int)lVar30 + 0x10c) * fVar2;
                lVar30 = lVar30 + 8;
                *(float *)((int)lVar33 + 4) = *(float *)((int)lVar33 + 4) * fVar8;
                lVar33 = lVar33 + 8;
                lVar38 = lVar38 + -1;
              } while (lVar38 != 0);
              lVar30 = 2;
              do {
                iVar31 = (int)lVar36;
                iVar22 = (int)lVar35;
                lVar36 = lVar36 + 0x10;
                lVar35 = lVar35 + 0x10;
                dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar31 + 0x10c)) +
                                  *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) +
                                 *(float *)(iVar22 + 0xc));
                lVar30 = lVar30 + -1;
              } while (lVar30 != 0);
              dVar40 = (double)((float)(dVar40 + (double)fVar5) * fVar6 + fVar7);
            }
            *(float *)(iVar29 + 0x48) = (float)dVar40;
          }
        }
        if (moby->enabled == '\0') {
          moby->state = '\x04';
          moby->collision = (ushort *)0x0;
          moby->modeBits = moby->modeBits | DISABLED;
        }
      }
      else {
        if (moby->enabled != '\0') {
          dVar49 = (double)(moby->pos).x;
          dVar45 = (double)(moby->pos).y;
          dVar50 = (double)(moby->pos).z;
          *(int *)((int)pvVar19 + 0x98) = *(int *)((int)pvVar19 + 0x98) + 1;
        }
        if ((SQRT((float)(dVar52 - dVar50) * (float)(dVar52 - dVar50) +
                  (float)(dVar46 - dVar49) * (float)(dVar46 - dVar49) +
                  (float)(dVar41 - dVar45) * (float)(dVar41 - dVar45)) < 2.0) ||
           (iVar29 = *(int *)((int)pvVar19 + 0x98),
           puVar21[0x37] = (longlong)(int)(animationSpeed * 120.5),
           *(int *)((int)puVar21 + 0x1bc) < iVar29)) {
          moby->setByGroup = '\0';
        }
      }
    }
  }
  else if (bVar3 < 7) {
    fVar6 = g_heroPosition.x - *(float *)((int)pvVar19 + 0xb0);
    fVar5 = *(float *)((int)pvVar19 + 0xb8);
    fVar2 = g_heroPosition.y - *(float *)((int)pvVar19 + 0xb4);
    *(float *)((int)pvVar19 + 0xb0) = g_heroPosition.x;
    *(float *)((int)pvVar19 + 0xb4) = g_heroPosition.y;
    *(float *)((int)pvVar19 + 0xb8) = g_heroPosition.z;
    *(float *)((int)pvVar19 + 0xbc) = g_heroPosition.w;
    lVar36 = lVar30 + 0x10;
    CHAR_ARRAY_00a1000c[0x2b0] = -1;
    CHAR_ARRAY_00a1000c[0x2b1] = -1;
    (moby->pos).x = (moby->pos).x + fVar6;
    (moby->pos).y = (moby->pos).y + fVar2;
    (moby->pos).z = (moby->pos).z + (fVar7 - fVar5);
    mobyutil::MB_SpawnExplosionSparks
              (0x4000000000000000,0x402a000000000000,lVar30,lVar36,&DAT_00247664,0xffffffffffffffff)
    ;
    iVar29 = mobyutil::MB_randInt(2);
    if (iVar29 == 0) {
      mobyupdate_helpers::M1215_0020ab50(lVar36,&DAT_00a15d30,0x4c2);
    }
    else {
      mobyupdate_helpers::M1215_0020ab50(lVar36,&DAT_00a15d30,0x4c4);
    }
    sound::PlayMobySound(1,0,moby);
    moby->state = '\x04';
    moby->collision = (ushort *)0x0;
    moby->modeBits = moby->modeBits | DISABLED;
  }
  return;
}



//==== 00248c9c  ns=Global  size=0x6c
// sig: undefined FUN_00248c9c(void)
// callers(1): 00221048 mobyupd::update1242::UpdateMoby_1242_JetFighterPoki
// callees(0): 

short FUN_00248c9c(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  short sVar3;
  
  sVar3 = 0;
  puVar2 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  do {
    if ((MobyInstance[*puVar2 & 0x7fff].oClass == BLARG_SHIP_0527) &&
       (MobyInstance[*puVar2 & 0x7fff].state == '\x05')) {
      sVar3 = sVar3 + 1;
    }
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
  } while (-1 < (short)uVar1);
  return sVar3;
}



//==== 00248d40  ns=Global  size=0x4e4
// sig: undefined FUN_00248d40(void)
// callers(1): 00221048 mobyupd::update1242::UpdateMoby_1242_JetFighterPoki
// callees(4): 000fc620 mobyutil::MB_randInt; 000fddc0 mobyutil::MB_SetAnimation; 00500b64 fastfunc::FastEulerToMtx; 00502578 fastfunc::FastWrapRot

MobyInstance * FUN_00248d40(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  void *pvVar5;
  u16 *puVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  char acVar11 [4];
  int iVar12;
  ushort *puVar13;
  MobyInstance *pMVar14;
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
  
  puVar13 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  while (((uVar7 = *puVar13 & 0x7fff, MobyInstance[uVar7].oClass != BLARG_SHIP_0527 ||
          (MobyInstance[uVar7].state != '\x04')) || (iVar12 = mobyutil::MB_randInt(10), iVar12 != 0)
         )) {
    uVar4 = *puVar13;
    puVar13 = puVar13 + 1;
    if ((short)uVar4 < 0) {
      return (MobyInstance *)0x0;
    }
  }
  pMVar14 = MobyInstance + uVar7;
  pvVar5 = pMVar14->pVar;
  dVar23 = 0.0;
  fastfunc::FastEulerToMtx(&local_f0,local_100);
  dVar16 = (double)fastfunc::FastWrapRot
                             (0.7853982,(float)(longlong)*(int *)((int)pvVar5 + 0x88) * 1.5707964);
  acVar11 = GameCamera.field8_0x14c;
  fVar1 = (float)(dVar16 + 1.570796251296997);
  dVar29 = (double)(float)(3.141592502593994 - dVar16);
  if (dVar16 - (double)(float)(3.141592502593994 - dVar16) < 0.0) {
    dVar29 = dVar16;
  }
  dVar22 = (double)SQRT(local_d8 * local_d8 + local_e0 * local_e0 + local_dc * local_dc);
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  dVar17 = (double)(float)(-3.141592502593994 - dVar16);
  if ((double)(float)(-3.141592502593994 - dVar16) - dVar29 < 0.0) {
    dVar17 = dVar29;
  }
  dVar29 = (double)(float)(dVar17 * dVar17);
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  dVar21 = (double)SQRT(local_c8 * local_c8 + local_d0 * local_d0 + local_cc * local_cc);
  dVar28 = (double)GameCamera.posX;
  dVar27 = (double)GameCamera.posY;
  dVar26 = (double)GameCamera.posZ;
  dVar25 = (double)(float)(dVar29 * (double)(float)(dVar29 * dVar17));
  fVar9 = fVar3 * fVar3;
  dVar16 = (double)SQRT(local_e8 * local_e8 + local_f0 * local_f0 + local_ec * local_ec);
  dVar24 = (double)(float)(dVar29 * dVar25);
  fVar8 = fVar9 * fVar9 * fVar3;
  fVar10 = fVar9 * fVar8;
  fVar1 = (float)((double)(((float)(dVar29 * dVar24) * 2.601887e-06 +
                           (float)(dVar24 * -0.0001980741071747616 +
                                  (double)(float)(dVar25 * 0.008333025500178337 +
                                                 (double)(float)((double)(float)(dVar29 * dVar17) *
                                                                 -0.16666656732559204 + dVar17)))) *
                          12.0) / dVar22);
  fVar2 = (float)(6.0 / dVar16);
  fVar3 = (float)((double)((fVar9 * fVar10 * 2.601887e-06 +
                           fVar10 * -0.0001980741 +
                           fVar8 * 0.0083330255 + fVar9 * fVar3 * -0.16666657 + fVar3) * 12.0) /
                 dVar21);
  dVar29 = dVar23;
  if (dVar23 - dVar22 < 0.0) {
    dVar29 = (double)(local_dc * fVar1);
  }
  dVar17 = dVar23;
  if (dVar23 - dVar22 < 0.0) {
    dVar17 = (double)(local_d8 * fVar1);
  }
  dVar24 = dVar23;
  if (dVar23 - dVar22 < 0.0) {
    dVar24 = (double)(local_e0 * fVar1);
  }
  if (dVar22 - dVar23 < 0.0) {
    dVar29 = (double)(local_dc * fVar1);
  }
  if (dVar22 - dVar23 < 0.0) {
    dVar24 = (double)(local_e0 * fVar1);
  }
  if (dVar22 - dVar23 < 0.0) {
    dVar17 = (double)(local_d8 * fVar1);
  }
  dVar22 = dVar23;
  if (dVar23 - dVar16 < 0.0) {
    dVar22 = (double)(local_e8 * fVar2);
  }
  dVar25 = dVar23;
  if (dVar23 - dVar16 < 0.0) {
    dVar25 = (double)(local_ec * fVar2);
  }
  dVar19 = dVar23;
  if (dVar23 - dVar16 < 0.0) {
    dVar19 = (double)(local_f0 * fVar2);
  }
  if (dVar16 - dVar23 < 0.0) {
    dVar22 = (double)(local_e8 * fVar2);
  }
  if (dVar16 - dVar23 < 0.0) {
    dVar25 = (double)(local_ec * fVar2);
  }
  dVar20 = dVar23;
  if (dVar23 - dVar21 < 0.0) {
    dVar20 = (double)(local_c8 * fVar3);
  }
  dVar15 = dVar23;
  if (dVar23 - dVar21 < 0.0) {
    dVar15 = (double)(local_cc * fVar3);
  }
  dVar18 = dVar23;
  if (dVar23 - dVar21 < 0.0) {
    dVar18 = (double)(local_d0 * fVar3);
  }
  if (dVar16 - dVar23 < 0.0) {
    dVar19 = (double)(local_f0 * fVar2);
  }
  if (dVar21 - dVar23 < 0.0) {
    dVar20 = (double)(local_c8 * fVar3);
  }
  if (dVar21 - dVar23 < 0.0) {
    dVar15 = (double)(local_cc * fVar3);
  }
  if (dVar21 - dVar23 < 0.0) {
    dVar18 = (double)(local_d0 * fVar3);
  }
  *(float *)((int)pvVar5 + 0xb0) = g_heroPosition.x;
  *(float *)((int)pvVar5 + 0xb4) = g_heroPosition.y;
  *(float *)((int)pvVar5 + 0xb8) = g_heroPosition.z;
  *(float *)((int)pvVar5 + 0xbc) = g_heroPosition.w;
  (pMVar14->pos).w = (f32)acVar11;
  pMVar14->state = '\x05';
  pMVar14->setByGroup = '\x01';
  (pMVar14->pos).z = (float)(dVar22 + (double)(float)(dVar20 + (double)(float)(dVar26 + dVar17)));
  (pMVar14->pos).y = (float)(dVar25 + (double)(float)(dVar15 + (double)(float)(dVar27 + dVar29)));
  (pMVar14->pos).x = (float)(dVar19 + (double)(float)(dVar18 + (double)(float)(dVar28 + dVar24)));
  fVar1 = mobyutil::g_FrameTime * 20.0;
  *(undefined4 *)((int)pvVar5 + 0x94) = 0x40a00000;
  *(undefined4 *)((int)pvVar5 + 0x98) = 0;
  *(float *)((int)pvVar5 + 0x6c) = fVar1;
  if (pMVar14->animationId != '\0') {
    mobyutil::MB_SetAnimation(pMVar14,0,0,(int)(animationSpeed * 10.5));
  }
  puVar6 = pMVar14->pClass->collision;
  pMVar14->modeBits =
       pMVar14->modeBits &
       (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
        DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
        NO_POST_UPDATE|NO_UPDATE);
  pMVar14->collision = puVar6;
  return pMVar14;
}



//==== 00249224  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1322_00249224(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1322_00249224(void)

{
  DAT_0078e4cc = 0x10000;
  return;
}



//==== 00249238  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1322(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1322 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1322(MobyInstance *moby)

{
  return moby;
}



//==== 00249240  ns=mobyupdate_helpers  size=0x78
// sig: undefined M1323_00249240(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1323_00249240(int param_1)

{
  ushort uVar1;
  MobyInstance *pMVar2;
  int iVar3;
  ushort *puVar4;
  
  puVar4 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)];
  pMVar2 = MobyInstance;
  do {
    iVar3 = (int)(((ulonglong)*puVar4 & 0x7fff) << 8);
    *(undefined4 *)((int)&(pMVar2->pos).z + iVar3) = *(undefined4 *)(param_1 + 0x18);
    pMVar2 = MobyInstance;
    *(undefined4 *)
     (&DAT_00f15dc8 + *(int *)(*(int *)((int)&MobyInstance->pVar + iVar3) + 0x10) * 0x11a0) =
         *(undefined4 *)(param_1 + 0x18);
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
  } while (-1 < (short)uVar1);
  return;
}



//==== 002492c0  ns=mobyupdate_helpers  size=0x1a0
// sig: undefined M1323_002492c0(void)
// callers(1): 00249498 mobyupdate_unsorted::UpdateMoby_1323
// callees(0): 

void mobyupdate_helpers::M1323_002492c0(int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  
  iVar5 = param_1 * 0x11a0;
  pfVar4 = (float *)&DAT_00f15dc0;
  iVar6 = 0;
  pfVar3 = (float *)&DAT_00f15dc4;
  (&DAT_00f15dcc)[iVar5] = 0xff;
  (&DAT_00f15dce)[iVar5] = 0xff;
  (&DAT_00f15dcd)[iVar5] = 0xff;
  (&DAT_00f15dcf)[iVar5] = 0xff;
  (&DAT_00f15dd0)[iVar5] = 0xff;
  (&DAT_00f15dd1)[iVar5] = 0xff;
  (&DAT_00f15dd2)[iVar5] = 0xff;
  (&DAT_00f15dd3)[iVar5] = 0xff;
  do {
    if (param_1 != iVar6) {
      fVar1 = (float)(&DAT_00f15dc0)[param_1 * 0x468] - *pfVar4;
      fVar2 = (float)(&DAT_00f15dc4)[param_1 * 0x468] - *pfVar3;
      uVar7 = (undefined1)iVar6;
      if (0.1 <= ABS(fVar1)) {
        if (0.1 <= ABS(fVar2)) {
          if (0.1 <= ABS(fVar1 + 16.0)) {
            if (ABS(fVar1 - 16.0) < 0.1) {
              if (ABS(fVar2 - 16.0) < 0.1) {
                (&DAT_00f15dd0)[iVar5] = uVar7;
              }
              if (ABS(fVar2 + 16.0) < 0.1) {
                (&DAT_00f15dd2)[iVar5] = uVar7;
              }
            }
          }
          else {
            if (ABS(fVar2 - 16.0) < 0.1) {
              (&DAT_00f15dd1)[iVar5] = uVar7;
            }
            if (ABS(fVar2 + 16.0) < 0.1) {
              (&DAT_00f15dd3)[iVar5] = uVar7;
            }
          }
        }
        else {
          if (ABS(fVar1 - 16.0) < 0.1) {
            (&DAT_00f15dcd)[iVar5] = uVar7;
          }
          if (ABS(fVar1 + 16.0) < 0.1) {
            (&DAT_00f15dcf)[iVar5] = uVar7;
          }
        }
      }
      else {
        if (ABS(fVar2 - 16.0) < 0.1) {
          (&DAT_00f15dcc)[iVar5] = uVar7;
        }
        if (ABS(fVar2 + 16.0) < 0.1) {
          (&DAT_00f15dce)[iVar5] = uVar7;
        }
      }
    }
    iVar6 = iVar6 + 1;
    pfVar4 = pfVar4 + 0x468;
    pfVar3 = pfVar3 + 0x468;
  } while (iVar6 < 0x80);
  return;
}



//==== 00249498  ns=mobyupdate_unsorted  size=0x7b8
// sig: undefined UpdateMoby_1323(MobyInstance * moby)
// callers(0): 
// callees(11): 00057820 collproc::CollLine; 0006d720 RegisterFuncForMoby; 001042ec mobyutil::MB_SetStateByGroup; 00109c30 mobyutil::OrganicDelt; 001129d0 mobyutil::MB_ScaledVecWrapper; 0017b230 water::WaterTile_InitAll; 0017b4b0 water::WaterTile_CalcGridBSphere; 0017b780 water::WaterWave_ScaleTable; 0017b8b8 water::WaterTile_UpdateWaves; 002492c0 mobyupdate_helpers::M1323_002492c0; 005cd098 libc::printf
// strings: 00655444: "I'm really sorry, but you can't have more than 128 water tiles in this level"

/* Moby 1323 */

void mobyupdate_unsorted::UpdateMoby_1323(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  f32 fVar5;
  float fVar6;
  MobyModeBit MVar7;
  ushort uVar8;
  float *pfVar9;
  MobyInstance *pMVar10;
  ulonglong *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined2 *puVar20;
  ulonglong uVar18;
  longlong lVar19;
  float fVar21;
  ushort *puVar22;
  int iVar23;
  undefined2 uVar24;
  longlong lVar25;
  float *pfVar26;
  longlong lVar27;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  longlong lVar29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar30;
  double dVar31;
  
  uVar17 = ZEXT48(&stack0x00000000);
  lVar19 = uVar17 - 0xe0;
  puVar11 = (ulonglong *)lVar19;
  *puVar11 = uVar17;
  puVar11[0x1e] = in_LR;
  puVar11[0x1a] = in_f30;
  puVar11[0x1b] = in_f31;
  puVar11[0x19] = unaff_r31;
  puVar11[0x18] = unaff_r30;
  uVar1 = moby->state;
  pfVar9 = (float *)moby->pVar;
  puVar11[0x17] = unaff_r29;
  puVar11[0x16] = unaff_r28;
  puVar11[0x15] = unaff_r27;
  puVar11[0x14] = unaff_r26;
  iVar23 = worldUpdateTime;
  if (uVar1 != '\x04') {
    if (uVar1 == '\x03') {
      if (*(int *)pfVar9[5] != worldUpdateTime) {
        *(int *)pfVar9[5] = worldUpdateTime;
        mobyutil::OrganicDelt
                  (pfVar9[6] - *pfVar9,pfVar9[7] * DAT_0071f418,pfVar9[8] * DAT_0071f418,
                   pfVar9[9] * mobyutil::g_FrameTime,&(moby->pos).z,iVar23,pfVar9 + 3);
        if (moby->group != 0xff) {
          puVar22 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)moby->group];
          pMVar10 = MobyInstance;
          do {
            iVar23 = (int)(((ulonglong)*puVar22 & 0x7fff) << 8);
            *(f32 *)((int)&(pMVar10->pos).z + iVar23) = (moby->pos).z;
            pMVar10 = MobyInstance;
            *(f32 *)(&DAT_00f15dc8 +
                    *(int *)(*(int *)((int)&MobyInstance->pVar + iVar23) + 0x10) * 0x11a0) =
                 (moby->pos).z;
            uVar8 = *puVar22;
            puVar22 = puVar22 + 1;
          } while (-1 < (short)uVar8);
        }
      }
    }
    else if (uVar1 == '\x02') {
      fVar21 = (moby->pos).y - g_heroPosition.y;
      fVar6 = (moby->pos).x - g_heroPosition.x;
      if ((SQRT(fVar6 * fVar6 + fVar21 * fVar21) < 10.0) &&
         (((hero::g_heroStateType == 0x12 || (hero::g_heroStateType == 0x11)) &&
          (collproc::CollLine(&hero::g_heroCGPos,&g_heroPosition,0,g_heroMobyPtr,0),
          CollOutput.pMoby == moby)))) {
        moby->state = '\x03';
        if (moby->group != -1) {
          mobyutil::MB_SetStateByGroup(moby->group,3);
        }
      }
    }
    else if (uVar1 == '\x01') {
      u_WaterTileCnt = 0.0;
      mobyupdate_helpers::M1323_002492c0(pfVar9[4]);
      moby->state = '\x02';
    }
    else if (uVar1 == '\0') {
      pfVar9[4] = u_WaterTileCnt;
      u_WaterTileCnt = (float)((int)u_WaterTileCnt + 1);
      if (0x7f < (int)u_WaterTileCnt) {
        libc::printf(
                    "I\'m really sorry, but you can\'t have more than 128 water tiles in this level"
                    );
      }
      MVar7 = moby->modeBits;
      fVar21 = pfVar9[4];
      moby->drawDistance = 0;
      pfVar9[6] = (moby->pos).z;
      moby->modeBits = MVar7 | DISABLED;
      if (fVar21 == 0.0) {
        lVar28 = 0x10;
        puVar20 = &DAT_00f15dde;
        do {
          *puVar20 = 0;
          puVar20[0x8d0] = 0;
          puVar20[0x11a0] = 0;
          puVar20[0x1a70] = 0;
          puVar20[0x2340] = 0;
          puVar20[0x2c10] = 0;
          puVar20[0x34e0] = 0;
          puVar20[0x3db0] = 0;
          puVar20 = puVar20 + 0x4680;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        water::WaterTile_InitAll((WaterTile *)&DAT_00f15dc0,0x80);
        water::WaterWave_ScaleTable(1.0);
        fVar6 = DirectionalLights[0].direction1.x;
        fVar3 = ABS(DirectionalLights[0].direction1.x);
        fVar4 = ABS(DirectionalLights[0].direction1.y);
        WaterTileConsts.TileSize.x = 16.0;
        WaterTileConsts.TileSize.y = 16.0;
        WaterTileConsts.TileOffset.x = -8.0;
        WaterTileConsts.TileOffset.y = -8.0;
        WaterTileConsts.TileGridSize.x = 1.0;
        WaterTileConsts.TileGridSize.y = 1.0;
        WaterTileConsts.texScale = 0.9;
        WaterTileConsts.waveInc = 0.1;
        uVar16 = (uint)DirectionalLights[0].direction1.y >> 0x1d;
        *(float *)(puVar11 + 0xe) = fVar3 - fVar4;
        fVar21 = 0.0;
        uVar18 = (ulonglong)((uint)fVar6 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar11 + 0xe) >> 0x1e) & 2 | (ulonglong)uVar16 & 4;
        fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
        fVar12 = fVar3;
        if (*(float *)(puVar11 + 0xe) - 0.0 < 0.0) {
          fVar12 = fVar4;
        }
        fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
        if (*(float *)(puVar11 + 0xe) - 0.0 < 0.0) {
          fVar4 = fVar3;
        }
        if (0.0 < fVar12) {
          lVar28 = uVar17 - 0xd0;
          lVar25 = uVar17 - 0x6c;
          lVar27 = uVar17 - 0x5c;
          lVar29 = 2;
          fVar3 = (fVar4 - fVar12) / (fVar4 + fVar12);
          fVar4 = fVar3 * fVar3;
          *(float *)(puVar11 + 0x10) = fVar3;
          *(float *)(puVar11 + 0xf) = fVar3;
          *(float *)((int)puVar11 + 0x7c) = fVar3;
          *(float *)((int)puVar11 + 0x74) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)(puVar11 + 0xf) = *(float *)(puVar11 + 0xf) * fVar4;
          *(float *)((int)puVar11 + 0x7c) = *(float *)((int)puVar11 + 0x7c) * fVar3;
          *(float *)(puVar11 + 0x10) = *(float *)(puVar11 + 0x10) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar28 + 0x74) = *(float *)((int)lVar28 + 100) * fVar3 * fVar3;
            iVar23 = (int)lVar25;
            lVar28 = lVar28 + 8;
            lVar25 = lVar25 + 8;
            *(float *)((int)lVar27 + 4) = *(float *)(iVar23 + 4) * fVar3 * fVar3;
            lVar27 = lVar27 + 8;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          lVar29 = 4;
          lVar27 = uVar17 - 0x6c;
          pfVar26 = (float *)&DAT_007358e0;
          lVar28 = lVar19;
          lVar25 = lVar27;
          do {
            fVar3 = *pfVar26;
            fVar4 = pfVar26[1];
            pfVar26 = pfVar26 + 2;
            *(float *)((int)lVar28 + 0x74) = *(float *)((int)lVar28 + 0x74) * fVar3;
            lVar28 = lVar28 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar4;
            lVar25 = lVar25 + 8;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          lVar28 = 2;
          do {
            iVar23 = (int)lVar19;
            iVar15 = (int)lVar27;
            lVar19 = lVar19 + 0x10;
            lVar27 = lVar27 + 0x10;
            fVar21 = fVar21 + *(float *)(iVar23 + 0x74) + *(float *)(iVar15 + 4) +
                     *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc);
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          fVar21 = (fVar21 + 0.7853982) * fVar6 + fVar2;
        }
        fVar6 = fVar21 + 1.5707963;
        fVar3 = 3.1415925 - fVar21;
        if (fVar21 - (3.1415925 - fVar21) < 0.0) {
          fVar3 = fVar21;
        }
        fVar4 = 3.1415925 - fVar6;
        if (fVar6 - (3.1415925 - fVar6) < 0.0) {
          fVar4 = fVar6;
        }
        fVar12 = -3.1415925 - fVar21;
        if ((-3.1415925 - fVar21) - fVar3 < 0.0) {
          fVar12 = fVar3;
        }
        fVar21 = -3.1415925 - fVar6;
        if ((-3.1415925 - fVar6) - fVar4 < 0.0) {
          fVar21 = fVar4;
        }
        fVar6 = fVar12 * fVar12;
        fVar3 = fVar21 * fVar21;
        fVar13 = fVar6 * fVar6 * fVar12;
        WaterTileConsts.tex0 = (int)pfVar9[1] + 0x28;
        fVar4 = fVar3 * fVar3 * fVar21;
        fVar14 = fVar6 * fVar13;
        WaterTileConsts.lightDir.z = -0.57735;
        WaterTileConsts.tex1 = (int)pfVar9[2] + 0x28;
        fVar2 = fVar3 * fVar4;
        WaterTileConsts.alpha0 = 0x1c;
        WaterTileConsts.alpha1 = 0x40;
        WaterTileConsts.lightDir.y =
             (fVar6 * fVar14 * 2.601887e-06 +
             fVar14 * -0.0001980741 + fVar13 * 0.0083330255 + fVar6 * fVar12 * -0.16666657 + fVar12)
             * 0.57735;
        WaterTileConsts.lightDir.x =
             (fVar3 * fVar2 * 2.601887e-06 +
             fVar2 * -0.0001980741 + fVar4 * 0.0083330255 + fVar3 * fVar21 * -0.16666657 + fVar21) *
             0.57735;
        WaterTiles = (WaterTile *)&DAT_00f15dc0;
        WaterTileBoxes = (WaterTileBox *)&DAT_00f155c0;
        WaterTileCnt = 0x80;
        WaterFogNearDist = 0;
        WaterFogFarDist = 0x47000000;
        WaterFogNearIntensity = 0x437f0000;
        fVar21 = pfVar9[4];
        WaterFogFarIntensity = 0x42400000;
      }
      fVar6 = pfVar9[4];
      (&DAT_00f15dc0)[(int)fVar21 * 0x468] = (moby->pos).x;
      fVar21 = pfVar9[1];
      (&DAT_00f15dc4)[(int)fVar6 * 0x468] = (moby->pos).y;
      fVar5 = (moby->pos).z;
      *(int *)(&DAT_00f15dd4 + (int)fVar6 * 0x11a0) = (int)fVar21 + 0x28;
      *(int *)(&DAT_00f15dd8 + (int)pfVar9[4] * 0x11a0) = (int)pfVar9[2] + 0x28;
      (&DAT_00f15ddc)[(int)pfVar9[4] * 0x11a0] = 0x1c;
      (&DAT_00f15ddd)[(int)pfVar9[4] * 0x11a0] = 0x44;
      *(f32 *)(&DAT_00f15dc8 + (int)fVar6 * 0x11a0) = fVar5;
      fVar21 = pfVar9[4];
      (&DAT_00f15dde)[(int)fVar21 * 0x8d0] = 0xffff;
      water::WaterTile_CalcGridBSphere
                ((WaterTile *)(&DAT_00f15dc0 + (int)fVar21 * 0x468),
                 (BSphere *)(&DAT_00f155c0 + (int)fVar21 * 0x10));
      moby->state = '\x01';
    }
  }
  if (-1 < (int)pfVar9[4]) {
    dVar30 = 0.0;
    dVar31 = dVar30;
    iVar23 = mobyutil::MB_ScaledVecWrapper(0x4050000000000000,moby);
    if (iVar23 != -1) {
      dVar31 = 1.0;
    }
    uVar24 = 0xffff;
    if (dVar31 == dVar30) {
      uVar24 = 0;
    }
    fVar21 = pfVar9[4];
    (&DAT_00f15dde)[(int)pfVar9[4] * 0x8d0] = uVar24;
    if (fVar21 == 0.0) {
      water::WaterTile_UpdateWaves((WaterTile *)&DAT_00f15dc0,0x80);
      RegisterFuncForMoby(&PTR_M1324_00249c50_00709e20,moby);
    }
  }
  return;
}



//==== 00249c50  ns=mobyupdate_helpers  size=0x30
// sig: undefined M1324_00249c50(void)
// callers(0): 
// callees(1): 0017cfdc water::WaterTile_DrawAll

void mobyupdate_helpers::M1324_00249c50(void)

{
  water::WaterTile_DrawAll(&DAT_00f15dc0,0x80);
  return;
}



//==== 00249c80  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1324_00249c80(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1324_00249c80(void)

{
  DAT_0078e53c = 0x10000;
  return;
}



//==== 00249cb0  ns=mobyupdate_unsorted  size=0x924
// sig: undefined UpdateMoby_1324(MobyInstance * moby)
// callers(0): 
// callees(3): 0007b310 help::Help_QueueMessage; 00110b70 mobyutil::MB_IsPntInCuboid; 0011b728 mobyutil::MB_UnlockSkillPoint
// strings: 00a1000c: 'None'

/* Moby 1324 */

void mobyupdate_unsorted::UpdateMoby_1324(MobyInstance *moby)

{
  int *piVar1;
  short sVar2;
  int iVar4;
  longlong lVar3;
  int iVar5;
  byte bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  piVar1 = (int *)moby->pVar;
  moby->updateDistance = -1;
  iVar4 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[0x17]);
  if ((iVar4 != 0) &&
     ((((hero::g_heroStateType == 0 || (hero::g_heroStateType == 1)) &&
       (CHAR_ARRAY_00a1000c._632_2_ == 0)) && (CHAR_ARRAY_00a0feec._160_2_ == 0)))) {
    iVar5 = 0;
    iVar4 = 0;
    do {
      if ((((&DAT_00721008)[iVar5 * 0x13] == 0) && (iVar5 != 0x18 && iVar5 != 8)) &&
         ((&UnlockableItems.field0_0x0)[iVar5] != '\0')) {
        iVar4 = iVar4 + 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x25);
    if (1 < iVar4) {
      help::Help_QueueMessage(STR_TRY_THE_GADGETRON_QUICKSELECT_0x4E25,0x4f);
    }
  }
  iVar4 = piVar1[0x15];
  bVar6 = (iVar4 == 1) << 1;
  if (iVar4 < 1) {
    if (((-1 < iVar4) &&
        (iVar4 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[0x12]), iVar4 != 0)) &&
       (g_heroState == SWINGING_YELLOW_SWINGSHOT)) {
      piVar1[0x15] = 1;
    }
  }
  else if (iVar4 < 2) {
    if (g_framesGroundedCnt == 0) {
      iVar4 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[0x13]);
      if (iVar4 != 0) {
        mobyutil::MB_UnlockSkillPoint(1);
      }
    }
    else {
      piVar1[0x15] = 0;
    }
  }
  if (((((CHAR_ARRAY_00a1000c._96_2_ == 0) &&
        (iVar4 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[4]), iVar4 != 0)) &&
       (g_LevelFlags[Level][*piVar1] != -1)) &&
      ((UnlockableItems.pyrocitor != '\0' && (5 < (int)(&DAT_00a0fcd4)[*piVar1])))) &&
     ((int)(animationSpeed * 18000.5) <
      (int)((int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5)) +
           (uint)(ushort)CHAR_ARRAY_00a0fdc4._130_2_ * -600))) {
    help::Help_QueueMessage(STR_HAVING_TROUBLE_WITH_THE_0x07D2,0xc);
  }
  iVar4 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[0x10]);
  if (iVar4 == 0) {
    if (piVar1[0x16] == 0) goto LAB_0024a048;
  }
  else {
    piVar1[0x16] = 1;
  }
  if (((ushort)CHAR_ARRAY_00a0feec._64_2_ < 3) &&
     ((CHAR_ARRAY_00a1000c._612_4_ & 1 << (Level & 0x3f)) == 0)) {
    help::Help_QueueMessage(STR_YOU_CAN_USE__0x4E22,0x4c);
  }
  if ((g_GameSettings.CameraUpDown._0_1_ == '\0') || (g_GameSettings.CameraLeftRight._0_1_ == '\0'))
  {
    CHAR_ARRAY_00a1000c[0x3b0] = -1;
    CHAR_ARRAY_00a1000c[0x3b1] = -1;
  }
  else if ((CHAR_ARRAY_00a1000c._948_4_ & 1 << (Level & 0x3f)) == 0) {
    help::Help_QueueMessage(STR_IF_YOUD_LIKE_YOU_0x4E2C,0x76);
  }
LAB_0024a048:
  if ((((CHAR_ARRAY_00a1000c._104_2_ == 0) &&
       (iVar4 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[4]), iVar4 != 0)) &&
      (g_LevelFlags[Level][*piVar1] != -1)) && (UnlockableItems.pyrocitor == '\0')) {
    lVar3 = (longlong)(*piVar1 << 2);
    auVar7 = loadVectorLeftIndexed(lVar3,0xa0fcd4);
    auVar8 = loadVectorRightIndexed(lVar3 + 0x10,0xa0fcd4);
    auVar8 = vectorConvertFromSignedFixedPointWord(auVar7 | auVar8,0);
    auVar7 = loadVectorLeftIndexed(8,0x249c98);
    auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
    vectorCompareGreaterThanOrEqualToFloatingPoint
              (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,
               auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60);
    if (!(bool)(bVar6 >> 1 & 1)) {
      help::Help_QueueMessage(STR_HAVING_TROUBLE_WITH_THE_0x07D3,0xd);
    }
  }
  if (CHAR_ARRAY_00a1000c._128_2_ == 0) {
    iVar4 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[6]);
    if (iVar4 != 0) {
      CHAR_ARRAY_00a1000c[0x80] = -1;
      CHAR_ARRAY_00a1000c[0x81] = -1;
    }
    if (((g_heroState != SWINGING_YELLOW_SWINGSHOT) && (DAT_0096bd70 == 0x2c)) &&
       (hero::g_heroStateTimer == 1)) {
      piVar1[0xc] = piVar1[0xc] + 1;
    }
    if ((1 < piVar1[0xc]) &&
       (iVar4 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[7]), iVar4 != 0)) {
      help::Help_QueueMessage(STR_TO_SWING_FARTHER_PRESS_0x07D6,0x10);
    }
  }
  if ((UnlockableItems.swingshot == '\0') &&
     (iVar4 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[5]), iVar4 != 0)) {
    iVar4 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
    if (((int)((float)(longlong)(animationSpeed * 18.5) * 60.0) <
         (int)(iVar4 + (uint)(ushort)CHAR_ARRAY_00a1000c._138_2_ * -600)) ||
       ((uint)(ushort)CHAR_ARRAY_00a1000c._138_2_ * 600 == 0)) {
      help::Help_QueueMessage(STR_YOU_WILL_NEED_A_0x07D7,0x11);
    }
    else if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c._138_2_ < iVar4 / 600) {
      sVar2 = (short)(iVar4 >> 0x1f);
      CHAR_ARRAY_00a1000c._138_2_ =
           ((short)(iVar4 / 600) + sVar2) - ((short)((short)(iVar4 / 0x2580000) + sVar2) >> 0xf);
    }
  }
  if ((UnlockableItems.swingshot == '\0') ||
     (iVar4 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[5]), iVar4 == 0)) {
    iVar4 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[7]);
    if (iVar4 != 0) {
      CHAR_ARRAY_00a1000c[0x90] = -1;
      CHAR_ARRAY_00a1000c[0x91] = -1;
    }
  }
  else if (CHAR_ARRAY_00a1000c._144_2_ == 0) {
    CHAR_ARRAY_00a1000c[0x90] = '\0';
    CHAR_ARRAY_00a1000c[0x91] = '\x01';
    iVar4 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
    if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c._146_2_ < iVar4 / 600) {
      sVar2 = (short)(iVar4 >> 0x1f);
      CHAR_ARRAY_00a1000c._146_2_ =
           ((short)(iVar4 / 600) + sVar2) - ((short)((short)(iVar4 / 0x2580000) + sVar2) >> 0xf);
    }
    CHAR_ARRAY_00a1000c._148_4_ = CHAR_ARRAY_00a1000c._148_4_ | 1 << (Level & 0x3f) | 0x80000000;
  }
  else {
    iVar4 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
    if (((int)((float)(longlong)(animationSpeed * 18.5) * 60.0) <
         (int)(iVar4 + (uint)(ushort)CHAR_ARRAY_00a1000c._146_2_ * -600)) ||
       ((uint)(ushort)CHAR_ARRAY_00a1000c._146_2_ * 600 == 0)) {
      help::Help_QueueMessage(STR_THE_AREA_AHEAD_OF_0x07D8,0x12);
    }
    else if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c._146_2_ < iVar4 / 600) {
      sVar2 = (short)(iVar4 >> 0x1f);
      CHAR_ARRAY_00a1000c._146_2_ =
           ((short)(iVar4 / 600) + sVar2) - ((short)((short)(iVar4 / 0x2580000) + sVar2) >> 0xf);
    }
  }
  if ((((CHAR_ARRAY_00a1000c._560_2_ == 0) || (CHAR_ARRAY_00a1000c._568_2_ == 0)) &&
      (g_heroState == MOVEMENT_LOCKED)) &&
     ((g_standingOnMoby != 0 && (*(short *)(g_standingOnMoby + 0xa6) == 0x267)))) {
    if (CHAR_ARRAY_00a1000c._560_2_ == 0) {
      help::Help_QueueMessage(STR_LASERS_ARE_MOUNTED_ON_0x07DB,0x46);
    }
    else if ((CHAR_ARRAY_00a1000c._568_2_ == 0) &&
            (iVar4 = piVar1[0x14], piVar1[0x14] = iVar4 + 1,
            (int)(animationSpeed * 600.5) < iVar4 + 1)) {
      help::Help_QueueMessage(STR_USE__TO_CONTROL_0x07DC,0x47);
    }
  }
  if ((MiscLevelFlags.field20_0x14 == 0) &&
     (iVar4 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[0x11]), iVar4 != 0)) {
    MiscLevelFlags.field20_0x14 = 1;
  }
  piVar1[8] = (int)g_heroPosition.x;
  piVar1[9] = (int)g_heroPosition.y;
  piVar1[10] = (int)g_heroPosition.z;
  piVar1[0xb] = (int)g_heroPosition.w;
  return;
}



//==== 0024a5d4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1326_0024a5d4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1326_0024a5d4(void)

{
  DAT_0078e5ac = 0x10000;
  return;
}



//==== 0024a600  ns=mobyupdate_unsorted  size=0x514
// sig: undefined UpdateMoby_1326(MobyInstance * moby)
// callers(0): 
// callees(8): 000e8aa4 memcard::memcard_Save; 00112a38 mobyutil::MB_ToastMessage; 00112dc0 mobyutil::MB_UnlockTrophy; 0011aeec mobyutil::MB_ShowPersistentMessage; 00167e60 update::mode_sceneInit; 004d407c FUN_004d407c; 004fff60 fastfunc::FastDecTimerS32; 005026a0 fastfunc::FastSubRots

/* Moby 1326 */

void mobyupdate_unsorted::UpdateMoby_1326(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  float fVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0xc0;
  puVar9 = (ulonglong *)lVar14;
  *puVar9 = uVar12;
  puVar9[0x1a] = in_LR;
  puVar9[0x17] = unaff_r31;
  puVar9[0x15] = unaff_r29;
  pvVar7 = moby->pVar;
  puVar9[0x16] = unaff_r30;
  puVar9[0x14] = unaff_r28;
  fastfunc::FastDecTimerS32(ZEXT48(pvVar7) + 4);
  if (moby->state == 0) {
    fVar1 = g_heroPosition.x - (moby->pos).x;
    fVar2 = g_heroPosition.y - (moby->pos).y;
    fVar4 = ABS(fVar1);
    fVar3 = ABS(fVar2);
    *(float *)(puVar9 + 0xe) = fVar1;
    *(float *)((int)puVar9 + 0x74) = fVar2;
    fVar1 = (moby->rotation).z;
    *(float *)(puVar9 + 0xf) = fVar4 - fVar3;
    fVar2 = 0.0;
    uVar13 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
    fVar5 = ABS(*(float *)(puVar9 + 0xe));
    if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
      fVar5 = fVar3;
    }
    fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar13 << 2));
    fVar3 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
    fVar10 = ABS(*(float *)((int)puVar9 + 0x74));
    if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
      fVar10 = fVar4;
    }
    if (0.0 < fVar5) {
      lVar18 = uVar12 - 0xb0;
      lVar16 = uVar12 - 0x34;
      lVar17 = uVar12 - 0x44;
      lVar20 = 2;
      fVar4 = (fVar10 - fVar5) / (fVar10 + fVar5);
      fVar5 = fVar4 * fVar4;
      *(float *)(puVar9 + 0x11) = fVar4;
      *(float *)(puVar9 + 0x10) = fVar4;
      *(float *)((int)puVar9 + 0x84) = fVar4;
      *(float *)((int)puVar9 + 0x7c) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)(puVar9 + 0x10) = *(float *)(puVar9 + 0x10) * fVar5;
      *(float *)((int)puVar9 + 0x84) = *(float *)((int)puVar9 + 0x84) * fVar4;
      *(float *)(puVar9 + 0x11) = *(float *)(puVar9 + 0x11) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar18 + 0x7c) = *(float *)((int)lVar18 + 0x6c) * fVar4 * fVar4;
        iVar15 = (int)lVar17;
        lVar17 = lVar17 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar15 + 4) * fVar4 * fVar4;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar18 = uVar12 - 0x44;
      lVar20 = 4;
      pfVar19 = (float *)&DAT_007358e0;
      lVar16 = lVar18;
      lVar17 = lVar14;
      do {
        fVar4 = *pfVar19;
        fVar5 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x7c) * fVar4;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar16 = 2;
      do {
        iVar15 = (int)lVar14;
        iVar11 = (int)lVar18;
        lVar14 = lVar14 + 0x10;
        lVar18 = lVar18 + 0x10;
        fVar2 = fVar2 + *(float *)(iVar15 + 0x7c) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      fVar2 = (fVar2 + 0.7853982) * fVar6 + fVar3;
    }
    dVar21 = (double)fastfunc::FastSubRots(fVar1,fVar2);
    if ((((dVar21 < 1.5707963705062866) &&
         (fVar1 = (moby->pos).y - g_heroPosition.y, fVar2 = (moby->pos).x - g_heroPosition.x,
         SQRT(fVar2 * fVar2 + fVar1 * fVar1) < 4.0)) && (*(int *)((int)pvVar7 + 4) == 0)) &&
       (g_gameMode != GAME_MODE_SCENE)) {
      FUN_004d407c(moby,1);
      if (MiscLevelFlags.PremiumNanotech == false) {
        if (g_boltCount < 0xfa1) {
          mobyutil::MB_ShowPersistentMessage(1,0x2720);
        }
        else {
          iVar15 = mobyutil::MB_ShowPersistentMessage(1,0x271e);
          if (((g_buttonsPressedThisFrame & TRIANGLE) != 0) && (iVar15 != 0)) {
            MiscLevelFlags.PremiumNanotech = true;
            g_boltCount = g_boltCount + -4000;
            mobyutil::MB_UnlockTrophy(HIT_ME_MORE);
            g_heroMaxNanotech = 5;
            g_heroHealth = 5;
            update::mode_sceneInit(0);
            moby->state = '\x01';
          }
        }
      }
      else if ((MiscLevelFlags.UltraNanotech == false) && (*(int *)((int)pvVar7 + 4) == 0)) {
        if (g_boltCount < 0x7531) {
          mobyutil::MB_ShowPersistentMessage(1,0x2721);
        }
        else {
          iVar15 = mobyutil::MB_ShowPersistentMessage(1,0x271f);
          if (((g_buttonsPressedThisFrame & TRIANGLE) != 0) && (iVar15 != 0)) {
            g_boltCount = g_boltCount + -30000;
            MiscLevelFlags.UltraNanotech = true;
            if (MiscLevelFlags.PremiumNanotech != false) {
              mobyutil::MB_UnlockTrophy(HIT_ME_MORE);
            }
            mobyutil::MB_UnlockTrophy(NANO_THIS);
            g_heroMaxNanotech = 8;
            g_heroHealth = 8;
            update::mode_sceneInit(1);
            moby->state = '\x01';
          }
        }
      }
    }
  }
  else if ((moby->state < 2) && (g_gameMode != GAME_MODE_SCENE)) {
    memcard::memcard_Save(0,-1);
    if (MiscLevelFlags.UltraNanotech == false) {
      mobyutil::MB_ToastMessage(0x271c,0xffffffffffffffff);
      auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    }
    else {
      mobyutil::MB_ToastMessage(0x271d,0xffffffffffffffff);
      auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    }
    auVar23 = ZEXT416(0xffffffff);
    auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
    auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
    auVar23 = loadVectorLeftIndexed(0x10,0x24a5e8);
    auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar22 = vectorMultiplyAddFloatingPoint
                        (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,
                         auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,auVar24);
    g_toastMsgTimer = 0xb4;
    auVar22 = vectorConvertToSignedFixedPointWordSaturate(auVar22,0);
    uVar8 = storeVectorElementWordIndexed(auVar22,4,ZEXT48(pvVar7));
    *(undefined4 *)((int)pvVar7 + 4U & 0xfffffffc) = uVar8;
    moby->state = '\0';
  }
  return;
}



//==== 0024ab14  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1327_0024ab14(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1327_0024ab14(void)

{
  DAT_0078e61c = 0x10000;
  return;
}



//==== 0024ab30  ns=mobyupdate_unsorted  size=0xd8
// sig: undefined UpdateMoby_1327(MobyInstance * moby)
// callers(0): 
// callees(1): 0006d720 RegisterFuncForMoby

/* Moby 1327 */

void mobyupdate_unsorted::UpdateMoby_1327(MobyInstance *moby)

{
  float *pfVar1;
  float fVar2;
  
  pfVar1 = (float *)moby->pVar;
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if (moby->state < 2) {
    fVar2 = DAT_0078e644 * mobyutil::g_FrameTime + *pfVar1;
    *pfVar1 = fVar2;
    if (-1.0 <= fVar2) {
      if (1.0 < fVar2) {
        *pfVar1 = fVar2 + -1.0;
      }
    }
    else {
      *pfVar1 = fVar2 + 1.0;
    }
    if (DAT_0078e640 != 0) {
      RegisterFuncForMoby(&PTR_M1327_0024ac08_00709e58,moby);
    }
  }
  return;
}



//==== 0024ac08  ns=mobyupdate_helpers  size=0x21c
// sig: undefined M1327_0024ac08(void)
// callers(0): 
// callees(5): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1327_0024ac08(void)

{
  undefined4 uVar1;
  short sVar2;
  ulonglong *puVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar8;
  ulonglong uVar7;
  short *psVar9;
  short *psVar10;
  longlong lVar11;
  float *pfVar12;
  longlong lVar13;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  short *psVar14;
  ulonglong unaff_r31;
  short *psVar15;
  ulonglong in_LR;
  longlong lVar16;
  
  uVar6 = ZEXT48(&stack0x00000000);
  puVar3 = (ulonglong *)(uVar6 - 0x140);
  *puVar3 = uVar6;
  puVar3[0x2a] = in_LR;
  iVar8 = DAT_0079b3fc + 0x28;
  puVar3[0x27] = unaff_r31;
  puVar3[0x26] = unaff_r30;
  puVar3[0x25] = unaff_r29;
  puVar3[0x24] = unaff_r28;
  puVar3[0x23] = unaff_r27;
  puVar3[0x22] = unaff_r26;
  puVar3[0x21] = unaff_r25;
  uVar7 = draw::GetEffectTex(iVar8);
  puVar3[0x1d] = uVar7;
  uVar7 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar3[0x1e] = uVar7;
  uVar7 = FUN_00502f08(0,0,0,0,0,0);
  puVar3[0x1c] = uVar7;
  uVar7 = idol_draw::PackCmd(DAT_00fa2f04,DAT_0079b3f0,DAT_00fa2f08,DAT_0079b3f4,DAT_0079b3f8);
  puVar3[0x1f] = uVar7;
  uVar1 = DAT_0079b400;
  *(undefined4 *)((int)puVar3 + 0xbc) = DAT_0079b400;
  *(undefined4 *)(puVar3 + 0x17) = uVar1;
  *(undefined4 *)((int)puVar3 + 0xb4) = uVar1;
  iVar8 = 0;
  *(undefined4 *)(puVar3 + 0x16) = uVar1;
  psVar14 = &DAT_0078f0b0;
  psVar15 = &DAT_0078f0b2;
  do {
    lVar11 = uVar6 - 0xd0;
    lVar16 = 4;
    lVar13 = uVar6 - 0x140;
    psVar10 = psVar14;
    psVar9 = psVar15;
    do {
      iVar5 = (int)((longlong)*psVar10 << 4);
      psVar10 = psVar10 + 2;
      sVar2 = *psVar9;
      psVar9 = psVar9 + 2;
      iVar4 = (int)((longlong)sVar2 << 3);
      pfVar12 = (float *)lVar11;
      *pfVar12 = *(float *)(iVar5 + 0x78e650) * DAT_0079b404;
      pfVar12[1] = *(float *)(iVar5 + 0x78e654) * DAT_0079b404;
      pfVar12[2] = *(float *)(iVar5 + 0x78e658) * DAT_0079b404;
      pfVar12[3] = *(float *)(iVar5 + 0x78e65c);
      lVar11 = lVar11 + 0x10;
      uVar1 = *(undefined4 *)(&DAT_0078f8d4 + iVar4);
      *(undefined4 *)((int)lVar13 + 0xc0) = *(undefined4 *)(&DAT_0078f8d0 + iVar4);
      *(undefined4 *)((int)lVar13 + 0xc4) = uVar1;
      lVar13 = lVar13 + 8;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    draw::FastDrawQuad(uVar6 - 0xd0,0,0,EffectTexHeaders,9);
    iVar8 = iVar8 + 1;
    psVar14 = psVar14 + 8;
    psVar15 = psVar15 + 8;
  } while (iVar8 < 0x82);
  return;
}



//==== 0024ae24  ns=mobyupdate_helpers  size=0x484
// sig: undefined M1327_0024ae24(void)
// callers(0): 
// callees(5): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1327_0024ae24(int param_1)

{
  longlong lVar1;
  float fVar2;
  float *pfVar3;
  ulonglong *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  int iVar11;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar12;
  undefined4 *puVar13;
  short *psVar14;
  short *psVar15;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  short *psVar16;
  ulonglong unaff_r25;
  short *psVar17;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  int iVar18;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar1 = uVar8 - 0x150;
  puVar4 = (ulonglong *)lVar1;
  *puVar4 = uVar8;
  puVar4[0x2c] = in_LR;
  puVar4[0x29] = unaff_r31;
  pfVar3 = *(float **)(param_1 + 0x78);
  iVar11 = DAT_0079b414 + 0x28;
  puVar4[0x28] = unaff_r30;
  puVar4[0x27] = unaff_r29;
  puVar4[0x26] = unaff_r28;
  puVar4[0x25] = unaff_r27;
  puVar4[0x24] = unaff_r26;
  puVar4[0x23] = unaff_r25;
  puVar4[0x22] = unaff_r24;
  puVar4[0x21] = unaff_r23;
  uVar9 = draw::GetEffectTex(iVar11);
  puVar4[0x1d] = uVar9;
  uVar9 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar4[0x1e] = uVar9;
  uVar9 = FUN_00502f08(0,0,0,0,0,0);
  puVar4[0x1c] = uVar9;
  uVar9 = idol_draw::PackCmd(DAT_00fa2f0c,DAT_0079b408,DAT_00fa2f10,DAT_0079b40c,DAT_0079b410);
  puVar4[0x1f] = uVar9;
  uVar7 = DAT_0079b418;
  iVar11 = 0;
  *(undefined4 *)((int)puVar4 + 0xbc) = DAT_0079b418;
  *(undefined4 *)(puVar4 + 0x17) = uVar7;
  *(undefined4 *)((int)puVar4 + 0xb4) = uVar7;
  iVar18 = 0;
  psVar17 = &DAT_00793410;
  *(undefined4 *)(puVar4 + 0x16) = uVar7;
  psVar16 = &DAT_00793412;
  do {
    lVar19 = 4;
    lVar12 = uVar8 - 0xe0;
    lVar10 = lVar1;
    psVar14 = psVar17;
    psVar15 = psVar16;
    do {
      iVar6 = (int)((longlong)*psVar14 << 4);
      iVar5 = (int)((longlong)*psVar15 << 3);
      psVar14 = psVar14 + 2;
      psVar15 = psVar15 + 2;
      puVar13 = (undefined4 *)lVar12;
      *puVar13 = *(undefined4 *)(iVar6 + 0x792ce0);
      puVar13[1] = *(undefined4 *)(iVar6 + 0x792ce4);
      puVar13[2] = *(undefined4 *)(iVar6 + 0x792ce8);
      puVar13[3] = *(undefined4 *)(iVar6 + 0x792cec);
      fVar2 = *(float *)(&DAT_00793a54 + iVar5);
      lVar12 = lVar12 + 0x10;
      *(undefined4 *)((int)lVar10 + 0xc0) = *(undefined4 *)(&DAT_00793a50 + iVar5);
      *(float *)((int)lVar10 + 0xc4) = fVar2 + *pfVar3;
      lVar10 = lVar10 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    draw::FastDrawQuad(uVar8 - 0xe0,0,0,EffectTexHeaders,9);
    iVar11 = iVar11 + 1;
    psVar17 = psVar17 + 8;
    psVar16 = psVar16 + 8;
  } while (iVar11 < 100);
  iVar11 = 0;
  psVar17 = &DAT_00796b80;
  psVar16 = &DAT_00796b82;
  do {
    lVar12 = uVar8 - 0xe0;
    lVar19 = 4;
    lVar10 = lVar1;
    psVar14 = psVar17;
    psVar15 = psVar16;
    do {
      iVar6 = (int)((longlong)*psVar14 << 4);
      iVar5 = (int)((longlong)*psVar15 << 3);
      psVar14 = psVar14 + 2;
      psVar15 = psVar15 + 2;
      puVar13 = (undefined4 *)lVar12;
      *puVar13 = *(undefined4 *)(iVar6 + 0x7963a0);
      puVar13[1] = *(undefined4 *)(iVar6 + 0x7963a4);
      puVar13[2] = *(undefined4 *)(iVar6 + 0x7963a8);
      puVar13[3] = *(undefined4 *)(iVar6 + 0x7963ac);
      fVar2 = *(float *)(&DAT_00793a54 + iVar5);
      lVar12 = lVar12 + 0x10;
      *(undefined4 *)((int)lVar10 + 0xc0) = *(undefined4 *)(&DAT_00793a50 + iVar5);
      *(float *)((int)lVar10 + 0xc4) = fVar2 + *pfVar3;
      lVar10 = lVar10 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    draw::FastDrawQuad(uVar8 - 0xe0,0,0,EffectTexHeaders,9);
    iVar11 = iVar11 + 1;
    psVar17 = psVar17 + 8;
    psVar16 = psVar16 + 8;
  } while (iVar11 < 0x70);
  iVar11 = 0;
  psVar17 = &DAT_0079a430;
  psVar16 = &DAT_0079a432;
  do {
    lVar12 = uVar8 - 0xe0;
    lVar19 = 4;
    lVar10 = lVar1;
    psVar14 = psVar17;
    psVar15 = psVar16;
    do {
      iVar6 = (int)((longlong)*psVar14 << 4);
      iVar5 = (int)((longlong)*psVar15 << 3);
      psVar14 = psVar14 + 2;
      psVar15 = psVar15 + 2;
      puVar13 = (undefined4 *)lVar12;
      *puVar13 = *(undefined4 *)(iVar6 + 0x79a2b0);
      puVar13[1] = *(undefined4 *)(iVar6 + 0x79a2b4);
      puVar13[2] = *(undefined4 *)(iVar6 + 0x79a2b8);
      puVar13[3] = *(undefined4 *)(iVar6 + 0x79a2bc);
      fVar2 = *(float *)(&DAT_00793a54 + iVar5);
      lVar12 = lVar12 + 0x10;
      *(undefined4 *)((int)lVar10 + 0xc0) = *(undefined4 *)(&DAT_00793a50 + iVar5);
      *(float *)((int)lVar10 + 0xc4) = fVar2 + *pfVar3;
      lVar10 = lVar10 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    draw::FastDrawQuad(uVar8 - 0xe0,0,0,EffectTexHeaders,9);
    iVar11 = iVar11 + 1;
    psVar17 = psVar17 + 8;
    psVar16 = psVar16 + 8;
  } while (iVar11 < 0xe);
  psVar17 = &DAT_0079acf0;
  psVar16 = &DAT_0079acf2;
  do {
    lVar12 = uVar8 - 0xe0;
    lVar19 = 4;
    lVar10 = lVar1;
    psVar14 = psVar17;
    psVar15 = psVar16;
    do {
      iVar5 = (int)((longlong)*psVar14 << 4);
      iVar11 = (int)((longlong)*psVar15 << 3);
      psVar14 = psVar14 + 2;
      psVar15 = psVar15 + 2;
      puVar13 = (undefined4 *)lVar12;
      *puVar13 = *(undefined4 *)(iVar5 + 0x79ab70);
      puVar13[1] = *(undefined4 *)(iVar5 + 0x79ab74);
      puVar13[2] = *(undefined4 *)(iVar5 + 0x79ab78);
      puVar13[3] = *(undefined4 *)(iVar5 + 0x79ab7c);
      lVar12 = lVar12 + 0x10;
      fVar2 = *(float *)(&DAT_00793a54 + iVar11);
      *(undefined4 *)((int)lVar10 + 0xc0) = *(undefined4 *)(&DAT_00793a50 + iVar11);
      *(float *)((int)lVar10 + 0xc4) = fVar2 + *pfVar3;
      lVar10 = lVar10 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    draw::FastDrawQuad(uVar8 - 0xe0,0,0,EffectTexHeaders,9);
    iVar18 = iVar18 + 1;
    psVar17 = psVar17 + 8;
    psVar16 = psVar16 + 8;
  } while (iVar18 < 0xe);
  return;
}



//==== 0024b2e8  ns=mobyupdate_helpers  size=0x3d0
// sig: undefined M133_0024b2e8(void)
// callers(1): 0024bc98 mobyupdate_unsorted::UpdateMoby_133
// callees(5): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 0012f6b0 partupd::SpawnPart_52; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M133_0024b2e8
               (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 local_c0 [16];
  undefined1 local_b0 [32];
  
  if (*(char *)(param_1 + 0x31) != '\0') {
    iVar1 = mobyutil::MB_randInt(0x13);
    dVar6 = 120.0;
    dVar7 = 180.0;
    dVar5 = 0.5;
    dVar8 = 0.0;
    dVar4 = 0.10000000149011612;
    if (iVar1 == 0) {
      mobyutil::MB_randRot();
      mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar4);
      uVar2 = mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar5);
      uVar3 = mobyutil::MB_randRangeFloat((float)dVar5,1.0);
      mobyutil::MB_randRangeFloat((float)dVar6,(float)dVar7);
      iVar1 = fastfunc::FastDoubleToInt();
      partupd::SpawnPart_52
                (uVar2,uVar3,local_c0,0x30002028,0x2020,param_4,param_5,
                 (int)(animationSpeed * (float)((double)(longlong)iVar1 + dVar5)));
    }
    iVar1 = mobyutil::MB_randInt(4);
    if (iVar1 == 0) {
      mobyutil::MB_randRot();
      mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar4);
      dVar4 = 1.75;
      uVar2 = mobyutil::MB_randRangeFloat((float)dVar8,1.75);
      uVar3 = mobyutil::MB_randRangeFloat((float)dVar4,2.25);
      mobyutil::MB_randRangeFloat((float)dVar6,(float)dVar7);
      iVar1 = fastfunc::FastDoubleToInt();
      partupd::SpawnPart_52
                (uVar2,uVar3,local_b0,0x20002020,0x2030,param_4,param_5,
                 (int)(animationSpeed * (float)((double)(longlong)iVar1 + dVar5)));
    }
  }
  return;
}



//==== 0024b718  ns=mobyupdate_helpers  size=0x434
// sig: undefined M133_0024b718(void)
// callers(2): 0024bb50 mobyupdate_helpers::M1327_0024bb50; 0024bc98 mobyupdate_unsorted::UpdateMoby_133
// callees(6): 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 00110950 mobyutil::MB_RandomizeVector; 001206e8 partupd::SpawnPart_2; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M133_0024b718(int param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  double dVar21;
  double dVar22;
  double dVar23;
  float local_120;
  undefined4 local_11c;
  float local_118;
  undefined4 local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  longlong local_f0;
  
  iVar9 = 0;
  do {
    local_120 = *(float *)(param_1 + 0x10);
    local_11c = *(undefined4 *)(param_1 + 0x14);
    local_118 = *(float *)(param_1 + 0x18);
    local_114 = *(undefined4 *)(param_1 + 0x1c);
    mobyutil::MB_RandomizeVector(0.25,&local_120);
    dVar20 = 1.0;
    local_118 = local_118 + 1.0;
    dVar12 = (double)mobyutil::MB_randRot();
    dVar13 = (double)mobyutil::MB_randRangeFloat((float)dVar20,8.0);
    dVar14 = (double)mobyutil::MB_randRangeFloat(2.0,6.0);
    dVar21 = 0.0;
    dVar15 = (double)mobyutil::MB_randRangeFloat(0.0,(float)dVar20);
    fVar1 = (float)(dVar12 + 1.570796251296997);
    iVar10 = 0;
    dVar11 = (double)(float)(3.141592502593994 - dVar12);
    if (dVar12 - (double)(float)(3.141592502593994 - dVar12) < 0.0) {
      dVar11 = dVar12;
    }
    fVar3 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar3 = fVar1;
    }
    dVar22 = (double)(float)(-3.141592502593994 - dVar12);
    if ((double)(float)(-3.141592502593994 - dVar12) - dVar11 < 0.0) {
      dVar22 = dVar11;
    }
    fVar4 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
      fVar4 = fVar3;
    }
    dVar12 = (double)(float)(dVar22 * dVar22);
    fVar5 = fVar4 * fVar4;
    dVar11 = (double)(float)(dVar12 * (double)(float)(dVar12 * dVar22));
    local_104 = param_2[3];
    fVar1 = fVar5 * fVar5 * fVar4;
    dVar18 = (double)(float)(dVar12 * dVar11);
    dVar19 = (double)mobyutil::g_FrameTime;
    local_108 = (float)(dVar19 * dVar14 + (double)(float)((double)param_2[2] * dVar15));
    fVar3 = fVar5 * fVar1;
    local_10c = (float)(dVar19 * dVar13) *
                ((float)(dVar12 * dVar18) * 2.601887e-06 +
                (float)(dVar18 * -0.0001980741071747616 +
                       (double)(float)(dVar11 * 0.008333025500178337 +
                                      (double)(float)((double)(float)(dVar12 * dVar22) *
                                                      -0.16666656732559204 + dVar22)))) +
                (float)((double)param_2[1] * dVar15);
    local_110 = (float)(dVar19 * dVar13) *
                (fVar5 * fVar3 * 2.601887e-06 +
                fVar3 * -0.0001980741 + fVar1 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4)
                + (float)((double)*param_2 * dVar15);
    dVar11 = 30.5;
    local_f8 = -(DAT_0071f418 * 20.0 * (float)(longlong)(animationSpeed * 30.5) - local_108);
    dVar12 = 0.5;
    dVar13 = 1.5;
    dVar14 = 0.125;
    dVar15 = 0.06499999761581421;
    dVar22 = 0.20000000298023224;
    dVar18 = 10.5;
    dVar19 = 5.0;
    dVar23 = 25.0;
    local_100 = local_110;
    local_fc = local_10c;
    local_f4 = local_104;
    do {
      dVar16 = (double)mobyutil::MB_randRangeFloat((float)dVar12,(float)dVar13);
      local_104 = (float)(dVar16 * dVar14);
      local_f4 = (float)(dVar16 * dVar15);
      mobyutil::MB_RandomizeVector((float)dVar22,&local_120);
      mobyutil::MB_RandomizeVector((float)((double)mobyutil::g_FrameTime * dVar12),&local_100);
      mobyutil::MB_randRangeFloat((float)dVar21,(float)dVar20);
      uVar6 = fastfunc::FastLerpColor(0xffffffff8000eeee,0xffffffff8000ff90);
      mobyutil::MB_randRangeFloat((float)dVar21,(float)dVar20);
      uVar7 = fastfunc::FastLerpColor(0xffee,0xffee);
      dVar16 = (double)animationSpeed * dVar18;
      iVar2 = (int)((double)animationSpeed * dVar11);
      local_f0 = (longlong)iVar2;
      dVar17 = (double)mobyutil::MB_randRangeFloat((float)dVar19,(float)dVar23);
      uVar8 = fastfunc::FastDoubleToInt((double)(float)(dVar17 * (double)animationSpeed));
      partupd::SpawnPart_2(&local_120,&local_110,&local_100,uVar6,uVar7,(int)dVar16,iVar2,uVar8);
      iVar10 = iVar10 + 1;
    } while (iVar10 < 10);
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x14);
  return;
}



//==== 0024bb50  ns=mobyupdate_helpers  size=0x100
// sig: undefined M1327_0024bb50(void)
// callers(0): 
// callees(3): 0010675c mobyutil::MB_damage; 0015d12c sound::PlayMobySound; 0024b718 mobyupdate_helpers::M133_0024b718

void mobyupdate_helpers::M1327_0024bb50(MobyInstance *param_1)

{
  int iVar1;
  undefined8 in_LR;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  iVar1 = mobyutil::MB_damage(param_1,0x330000,0);
  if (iVar1 != 0) {
    param_1->state = '\x02';
    param_1->enabled = '\0';
    param_1->collision = (ushort *)0x0;
    param_1->modeBits = param_1->modeBits | DISABLED;
    M133_0024b718(param_1,&DAT_00969de0);
    sound::PlayMobySound(0,0,param_1);
    if ((*(int *)(iVar1 + 0x20) != 0) && (*(short *)(*(int *)(iVar1 + 0x20) + 0xa6) == 0)) {
      auVar2 = ZEXT416(0xffffffff);
      auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
      auVar3 = vectorShiftLeftIntegerWord(auVar2,auVar2);
      auVar2 = loadVectorLeftIndexed(in_LR,0x24bb4c);
      auVar4 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar2 = auVar2 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar2 = vectorMultiplyAddFloatingPoint
                         (auVar4,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,auVar3);
      auVar3 = loadVectorLeftIndexed(0x8c4,0x969ce0);
      auVar2 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
      auVar2 = ZEXT416((uint)(auVar3._0_4_ + auVar2._0_4_)) & (undefined1  [16])0xffffffff;
      DAT_0096a5a4 = storeVectorElementWordIndexed
                               (auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,0x8c4,
                                0x969ce0);
    }
    param_1->damage = -1;
  }
  return;
}



//==== 0024bc98  ns=mobyupdate_unsorted  size=0x660
// sig: undefined UpdateMoby_133(MobyInstance * moby)
// callers(0): 
// callees(12): 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fddc0 mobyutil::MB_SetAnimation; 00100f8c mobyutil::MB_InitDefaultParams; 00101058 mobyutil::MB_UpdateNavMove; 0010675c mobyutil::MB_damage; 0010a2e0 mobyutil::OrganicDeltAng; 0015d12c sound::PlayMobySound; 0024b2e8 mobyupdate_helpers::M133_0024b2e8; 0024b718 mobyupdate_helpers::M133_0024b718; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

/* Moby 133 */

void mobyupdate_unsorted::UpdateMoby_133(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  ulonglong *puVar8;
  float fVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  ulonglong uVar13;
  int iVar16;
  undefined4 uVar17;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  float *pfVar21;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  ulonglong in_f31;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0xe0;
  puVar8 = (ulonglong *)lVar15;
  *puVar8 = uVar13;
  puVar8[0x1e] = in_LR;
  puVar8[0x1b] = in_f31;
  puVar8[0x1a] = unaff_r31;
  puVar8[0x19] = unaff_r30;
  puVar8[0x18] = unaff_r29;
  puVar8[0x17] = unaff_r28;
  pvVar7 = moby->pVar;
  iVar16 = mobyutil::MB_damage(moby,0x330000,0);
  if (iVar16 != 0) {
    moby->state = '\x02';
    moby->enabled = '\0';
    moby->collision = (ushort *)0x0;
    moby->modeBits = moby->modeBits | DISABLED;
    mobyupdate_helpers::M133_0024b718(moby,&DAT_00969de0);
    sound::PlayMobySound(0,0,moby);
    if ((*(int *)(iVar16 + 0x20) != 0) && (*(short *)(*(int *)(iVar16 + 0x20) + 0xa6) == 0)) {
      auVar24 = ZEXT416(0xffffffff);
      auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
      auVar25 = vectorShiftLeftIntegerWord(auVar24,auVar24);
      auVar24 = loadVectorLeftIndexed(in_LR,0x24bc50);
      auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar24 = vectorMultiplyAddFloatingPoint
                          (auVar26,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,
                           auVar25);
      auVar25 = loadVectorLeftIndexed(0x8c4,0x969ce0);
      auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
      auVar24 = ZEXT416((uint)(auVar25._0_4_ + auVar24._0_4_)) & (undefined1  [16])0xffffffff;
      DAT_0096a5a4 = storeVectorElementWordIndexed
                               (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x8c4,
                                0x969ce0);
    }
    moby->damage = -1;
  }
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
    moby->updateDistance = '@';
    if (moby->animationId != '\0') {
      mobyutil::MB_SetAnimation(moby,0,0,0);
    }
    if (*(int *)((int)pvVar7 + 0xb0) == -1) {
      mobyfunc::DeleteMoby(moby);
    }
    else if (Splines[*(int *)((int)pvVar7 + 0xb0)]->cnt == 0) {
      mobyfunc::DeleteMoby(moby);
    }
    else {
      mobyutil::MB_InitDefaultParams((float *)((int)pvVar7 + 0x60));
      *(undefined4 *)((int)pvVar7 + 0x6c) = 0x3f800000;
      *(undefined4 *)((int)pvVar7 + 0x68) = 0x3f800000;
      uVar17 = fastfunc::FastDoubleToInt(0x40799999a0000000);
      *(undefined4 *)((int)pvVar7 + 0x60) = uVar17;
      *(float *)((int)pvVar7 + 0x84) = mobyutil::g_FrameTime * 4.0;
    }
  }
  else if (bVar1 < 2) {
    fVar2 = Splines[*(int *)((int)pvVar7 + 0xb0)]->points[*(int *)((int)pvVar7 + 0xb4)].x -
            (moby->pos).x;
    fVar4 = Splines[*(int *)((int)pvVar7 + 0xb0)]->points[*(int *)((int)pvVar7 + 0xb4)].y -
            (moby->pos).y;
    fVar5 = ABS(fVar2);
    fVar3 = ABS(fVar4);
    *(float *)(puVar8 + 0x10) = fVar2;
    *(float *)((int)puVar8 + 0x84) = fVar4;
    *(float *)(puVar8 + 0x11) = fVar5 - fVar3;
    fVar2 = 0.0;
    uVar14 = (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0x11) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1d) & 4;
    fVar4 = ABS(*(float *)(puVar8 + 0x10));
    if (*(float *)(puVar8 + 0x11) - 0.0 < 0.0) {
      fVar4 = fVar3;
    }
    fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
    fVar3 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
    fVar9 = ABS(*(float *)((int)puVar8 + 0x84));
    if (*(float *)(puVar8 + 0x11) - 0.0 < 0.0) {
      fVar9 = fVar5;
    }
    if (0.0 < fVar4) {
      lVar20 = uVar13 - 0xd0;
      lVar19 = uVar13 - 0x54;
      lVar18 = uVar13 - 0x44;
      lVar22 = 2;
      fVar4 = (fVar9 - fVar4) / (fVar9 + fVar4);
      fVar5 = fVar4 * fVar4;
      *(float *)(puVar8 + 0x13) = fVar4;
      *(float *)(puVar8 + 0x12) = fVar4;
      *(float *)((int)puVar8 + 0x94) = fVar4;
      *(float *)((int)puVar8 + 0x8c) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) * fVar5;
      *(float *)((int)puVar8 + 0x94) = *(float *)((int)puVar8 + 0x94) * fVar4;
      *(float *)(puVar8 + 0x13) = *(float *)(puVar8 + 0x13) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar20 + 0x8c) = *(float *)((int)lVar20 + 0x7c) * fVar4 * fVar4;
        iVar16 = (int)lVar19;
        lVar20 = lVar20 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar16 + 4) * fVar4 * fVar4;
        lVar18 = lVar18 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar20 = uVar13 - 0x54;
      pfVar21 = (float *)&DAT_007358e0;
      lVar22 = 4;
      lVar18 = lVar20;
      lVar19 = lVar15;
      do {
        fVar4 = *pfVar21;
        fVar5 = pfVar21[1];
        pfVar21 = pfVar21 + 2;
        *(float *)((int)lVar19 + 0x8c) = *(float *)((int)lVar19 + 0x8c) * fVar4;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar5;
        lVar18 = lVar18 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar18 = 2;
      do {
        iVar16 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar10 = (int)lVar20;
        lVar20 = lVar20 + 0x10;
        fVar2 = fVar2 + *(float *)(iVar16 + 0x8c) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8)
                + *(float *)(iVar10 + 0xc);
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      fVar2 = (fVar2 + 0.7853982) * fVar6 + fVar3;
    }
    mobyutil::OrganicDeltAng
              (fVar2,DAT_0071f418 * 1.0471976,DAT_0071f418 * 1.0471976,
               mobyutil::g_FrameTime * 3.1415927,&(moby->rotation).z,0x720000,
               (float *)((int)pvVar7 + 0xbc));
    fVar2 = (moby->rotation).z;
    fVar5 = fVar2 + 1.5707963;
    fVar4 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar4 = fVar2;
    }
    fVar3 = 3.1415925 - fVar5;
    if (fVar5 - (3.1415925 - fVar5) < 0.0) {
      fVar3 = fVar5;
    }
    fVar6 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
      fVar6 = fVar4;
    }
    *(undefined4 *)(puVar8 + 0xf) = 0;
    fVar2 = -3.1415925 - fVar5;
    if ((-3.1415925 - fVar5) - fVar3 < 0.0) {
      fVar2 = fVar3;
    }
    fVar5 = fVar6 * fVar6;
    fVar4 = fVar2 * fVar2;
    fVar3 = fVar5 * fVar5 * fVar6;
    fVar11 = fVar4 * fVar4 * fVar2;
    fVar9 = fVar5 * fVar3;
    fVar12 = fVar4 * fVar11;
    *(float *)((int)puVar8 + 0x74) =
         fVar5 * fVar9 * 2.601887e-06 +
         fVar9 * -0.0001980741 + fVar3 * 0.0083330255 + fVar5 * fVar6 * -0.16666657 + fVar6;
    dVar23 = 1.0;
    *(float *)(puVar8 + 0xe) =
         fVar4 * fVar12 * 2.601887e-06 +
         fVar12 * -0.0001980741 + fVar11 * 0.0083330255 + fVar4 * fVar2 * -0.16666657 + fVar2;
    mobyutil::MB_UpdateNavMove
              (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar7 + 0x60),puVar8 + 0xe,
               (int)pvVar7 + 0x40);
    iVar16 = fastfunc::FastDecTimerS32(ZEXT48(pvVar7) + 0xb8);
    if ((iVar16 != 0) ||
       (fVar2 = (moby->pos).y -
                Splines[*(int *)((int)pvVar7 + 0xb0)]->points[*(int *)((int)pvVar7 + 0xb4)].y,
       fVar4 = (moby->pos).x -
               Splines[*(int *)((int)pvVar7 + 0xb0)]->points[*(int *)((int)pvVar7 + 0xb4)].x,
       (double)SQRT(fVar4 * fVar4 + fVar2 * fVar2) < dVar23)) {
      iVar16 = mobyutil::MB_randInt(Splines[*(int *)((int)pvVar7 + 0xb0)]->cnt);
      iVar16 = *(int *)((int)pvVar7 + 0xb4) + iVar16;
      auVar24 = ZEXT416(0xffffffff);
      auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
      auVar25 = vectorShiftLeftIntegerWord(auVar24,auVar24);
      *(int *)((int)pvVar7 + 0xb4) =
           iVar16 - (iVar16 / Splines[*(int *)((int)pvVar7 + 0xb0)]->cnt) *
                    Splines[*(int *)((int)pvVar7 + 0xb0)]->cnt;
      auVar24 = loadVectorLeftIndexed(0x3c,0x24bc50);
      auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar24 = vectorMultiplyAddFloatingPoint
                          (auVar26,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,
                           auVar25);
      auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
      auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar17 = storeVectorElementWordIndexed
                         (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0xb8,
                          ZEXT48(pvVar7));
      *(undefined4 *)((int)pvVar7 + 0xb8U & 0xfffffffc) = uVar17;
    }
    mobyupdate_helpers::M133_0024b2e8(moby);
  }
  else if ((bVar1 < 3) &&
          (fVar2 = (moby->pos).y - g_heroPosition.y, fVar4 = (moby->pos).x - g_heroPosition.x,
          48.0 < SQRT(fVar4 * fVar4 + fVar2 * fVar2))) {
    moby->state = '\x01';
    moby->enabled = '\x01';
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
    moby->collision = moby->pClass->collision;
  }
  return;
}



//==== 0024c2f8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1331_0024c2f8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1331_0024c2f8(void)

{
  DAT_0079b46c = 0x10000;
  return;
}



//==== 0024c380  ns=mobyupdate_helpers  size=0xcfc
// sig: undefined M1331_0024c380(void)
// callers(1): 0024d11c mobyupdate_unsorted::UpdateMoby_1331
// callees(10): 000da4ac lights::CreatePointLight2; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe4f0 mobyutil::MB_randRangeSigned; 000fe788 mobyutil::MB_randVector; 0010de78 mobyutil::MB_WrapRot; 00133580 partupd::SpawnPart_69; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble
// strings: 0024c31c: '=Vwp?' (raw)

void mobyupdate_helpers::M1331_0024c380(undefined8 param_1,ulonglong param_2)

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
  fVar66 = *(float *)((int)&DAT_00fa3064 + iVar10) - *(float *)(iVar11 + 0xfa2fd4);
  fVar2 = *(float *)((int)&DAT_00fa3060 + iVar10) - *(float *)(iVar11 + 0xfa2fd0);
  fVar3 = *(float *)((int)&DAT_00fa3068 + iVar10) - *(float *)(iVar11 + 0xfa2fd8);
  auVar55 = ZEXT416(0xffffffff);
  auVar55 = auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60;
  iVar8 = (int)(param_2 << 2);
  auVar65 = vectorShiftLeftIntegerWord(auVar55,auVar55);
  uVar16 = param_2 & 0x7fffffff;
  iVar14 = (int)uVar16 * 2 + 1;
  local_170 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar66 * fVar66);
  auVar55 = loadVectorLeftIndexed(uVar13 - 0x130,0x24c310);
  auVar55 = auVar55 >> 0x60 & (undefined1  [16])0xffffffff;
  dVar53 = 0.05000000074505806;
  auVar59._0_4_ = local_170;
  auVar59._4_4_ = local_170;
  auVar59._8_4_ = local_170;
  auVar59._12_4_ = local_170;
  auVar55 = vectorMultiplyAddFloatingPoint
                      (auVar59,auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60,auVar65
                      );
  if (*(int *)((int)&DAT_00fa2f20 + iVar8) == 2) {
    auVar59 = ZEXT416(0);
    auVar65 = auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60;
    *(undefined4 *)((int)&DAT_00fa2f20 + iVar8) = 3;
    lVar20 = (longlong)((int)(uVar16 << 9) + (int)(uVar16 << 7));
    lVar25 = (longlong)(iVar14 * 0x140);
    lVar15 = ZEXT48(&DAT_00fa30c0) + lVar20;
    lVar21 = ZEXT48(&DAT_00fa30c0) + lVar25;
    lVar18 = ZEXT48(&DAT_00fa30c8) + lVar20;
    lVar22 = ZEXT48(&DAT_00fa30c8) + lVar25;
    lVar19 = ZEXT48(&DAT_00fa30c4) + lVar20;
    lVar23 = ZEXT48(&DAT_00fa30c4) + lVar25;
    lVar20 = ZEXT48(&DAT_00fa30cc) + lVar20;
    lVar29 = 0x14;
    lVar25 = ZEXT48(&DAT_00fa30cc) + lVar25;
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
  dVar30 = (double)fastfunc::FastWrapRot(*(float *)(&DAT_00fa2f2c + iVar8),0.17453292);
  *(float *)(&DAT_00fa2f2c + iVar8) = (float)dVar30;
  dVar30 = (double)fastfunc::FastDiffRots
                             ((double)*(float *)(&DAT_00fa2f38 + iVar8),0x3fe9b0f580000000);
  *(float *)(&DAT_00fa2f38 + iVar8) = (float)dVar30;
  dVar30 = (double)fastfunc::FastWrapRot(*(float *)(&DAT_00fa2f44 + iVar8),0.05236);
  *(float *)(&DAT_00fa2f44 + iVar8) = (float)dVar30;
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
                               (double)*(float *)(&DAT_00fa2f2c + iVar8)));
    dVar32 = (double)fVar66;
    auVar59 = ZEXT416(0xffffffff);
    auVar59 = auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60;
    lVar15 = (uVar26 & 0xfffffff) * 0x10;
    iVar27 = (int)uVar26 + 1;
    uVar16 = ZEXT48(&DAT_00fa30c0) + lVar15;
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
    *(undefined4 *)(&DAT_00fa30c4 + iVar24 + iVar9) = 0;
    *(undefined4 *)(&DAT_00fa30cc + iVar24 + iVar9) = 0x3f800000;
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
    *(float *)(&DAT_00fa30c8 + iVar24 + iVar9) =
         (float)(dVar41 * (double)(float)((double)(float)(dVar31 * dVar32) * dVar46 +
                                         (double)(float)(dVar32 * dVar47 +
                                                        (double)(float)(dVar34 * dVar48 +
                                                                       (double)(float)((double)(
                                                  float)(dVar31 * dVar35) * dVar49 + dVar35)))));
  } while (iVar27 < 0x13);
  fVar66 = *(float *)((int)&DAT_00fa3064 + iVar10) - *(float *)(iVar11 + 0xfa2fd4);
  fVar2 = *(float *)((int)&DAT_00fa3060 + iVar10) - *(float *)(iVar11 + 0xfa2fd0);
  fVar3 = *(float *)((int)&DAT_00fa3068 + iVar10) - *(float *)(iVar11 + 0xfa2fd8);
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
  dVar35 = (double)*(float *)(iVar24 + 0xfa31e4);
  dVar34 = (double)*(float *)(iVar24 + 0xfa31e0);
  fVar4 = *(float *)(iVar24 + 0xfa31e8);
  fVar5 = *(float *)(iVar24 + 0xfa31ec);
  local_1b0.w = *(float *)(iVar11 + 0xfa2fdc) * fVar5 +
                (float)((double)*(float *)((int)&DAT_00fa306c + iVar10) * dVar34);
  dVar41 = (double)SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
  lVar15 = (longlong)(iVar14 * 0x140);
  iVar14 = 0;
  lVar20 = ZEXT48(&DAT_00fa30c8) + lVar15;
  lVar18 = ZEXT48(&DAT_00fa30c4) + lVar15;
  lVar19 = ZEXT48(&DAT_00fa30c0) + lVar15;
  lVar15 = ZEXT48(&DAT_00fa30cc) + lVar15;
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
  local_1b0.y = *(float *)(iVar11 + 0xfa2fd4) * fVar5 +
                (float)(dVar43 * dVar37 - (double)(float)(dVar31 * dVar36)) * fVar4 +
                (float)(dVar30 * dVar34 + (double)(float)(dVar32 * dVar35));
  local_1b0.z = *(float *)(iVar11 + 0xfa2fd8) * fVar5 +
                (float)(dVar31 * dVar32 - (double)(float)(dVar30 * dVar37)) * fVar4 +
                (float)(dVar43 * dVar34 + (double)(float)(dVar36 * dVar35));
  local_1b0.x = *(float *)(iVar11 + 0xfa2fd0) * fVar5 +
                (float)(dVar30 * dVar36 - (double)(float)(dVar43 * dVar32)) * fVar4 +
                (float)(dVar31 * dVar34 + (double)(float)(dVar37 * dVar35));
  *(float *)(iVar10 + 0xfa3090) = local_1b0.x;
  *(float *)(iVar10 + 0xfa3094) = local_1b0.y;
  *(float *)(iVar10 + 0xfa3098) = local_1b0.z;
  *(float *)(iVar10 + 0xfa309c) = local_1b0.w;
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
                       ((float)(dVar32 * dVar31 + (double)*(float *)(&DAT_00fa2f38 + iVar8)));
    dVar41 = (double)fVar66;
    fVar66 = mobyutil::MB_WrapRot
                       ((float)(dVar32 * dVar43 + (double)*(float *)(&DAT_00fa2f44 + iVar8)));
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
  local_1a0 = (float)((double)*(float *)(&DAT_00fa2fa0 + iVar11) * dVar30 +
                     (double)(*(float *)(iVar11 + 0xfa2fb0) * fVar66));
  local_19c = (float)((double)*(float *)(iVar11 + 0xfa2fa4) * dVar30 +
                     (double)(*(float *)(iVar11 + 0xfa2fb4) * fVar66));
  local_198 = (float)((double)*(float *)(iVar11 + 0xfa2fa8) * dVar30 +
                     (double)(*(float *)(iVar11 + 0xfa2fb8) * fVar66));
  local_194 = *(float *)(iVar11 + 0xfa2fbc) * fVar66 +
              (float)((double)*(float *)(iVar11 + 0xfa2fac) * dVar30 + dVar44);
  partupd::SpawnPart_69
            (param_2 * 0x40 + 0xfa2fd0 & 0xffffffff,uVar13 - 0x1a0,0x7f,
             *(undefined4 *)((int)&DAT_00fa2f8c + iVar8));
  iVar14 = mobyutil::MB_randInt(3);
  if (iVar14 == 0) {
    local_184 = *(undefined4 *)(iVar11 + 0xfa2fac);
    local_190 = (float)((double)*(float *)(&DAT_00fa2fa0 + iVar11) * dVar52) +
                *(float *)(iVar11 + 0xfa2fd0);
    local_18c = (float)((double)*(float *)(iVar11 + 0xfa2fa4) * dVar52) +
                *(float *)(iVar11 + 0xfa2fd4);
    local_188 = (float)((double)*(float *)(iVar11 + 0xfa2fa8) * dVar52) +
                *(float *)(iVar11 + 0xfa2fd8);
    uVar42 = partupd::SpawnPart_69
                       (uVar13 - 400,&DAT_00a15d30,0x7f,*(undefined4 *)((int)&DAT_00fa2f8c + iVar8))
    ;
    iVar14 = (int)uVar42;
    if (iVar14 != 0) {
      auVar55 = ZEXT416(0xffffffff);
      auVar55 = auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60;
      auVar59 = vectorShiftLeftIntegerWord(auVar55,auVar55);
      *(undefined4 *)(iVar14 + 0xc) = 0x47ea6000;
      auVar55 = loadVectorLeftIndexed(100,0x24c310);
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
      if (*(int *)(&DAT_00fa2f74 + iVar8) == 1) {
        *(undefined2 *)(iVar14 + 0x36) = 1;
      }
    }
  }
  mobyutil::MB_randRangeFloat((float)dVar41,(float)dVar53);
  mobyutil::MB_randVector(dVar41,dVar53,(Vec4 *)(uVar13 - 0x1a0));
  partupd::SpawnPart_69
            (uVar13 - 0x1b0,uVar13 - 0x1a0,0x7f,*(undefined4 *)((int)&DAT_00fa2f8c + iVar8));
  iVar14 = mobyutil::MB_randInt(3);
  if ((iVar14 == 0) &&
     (uVar42 = partupd::SpawnPart_69
                         (uVar13 - 0x1b0,&DAT_00a15d30,0x7f,
                          *(undefined4 *)((int)&DAT_00fa2f8c + iVar8)), iVar14 = (int)uVar42,
     iVar14 != 0)) {
    auVar55 = ZEXT416(0xffffffff);
    auVar55 = auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60;
    auVar59 = vectorShiftLeftIntegerWord(auVar55,auVar55);
    *(undefined4 *)(iVar14 + 0xc) = 0x47ea6000;
    auVar55 = loadVectorLeftIndexed(100,0x24c310);
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
    if (*(int *)(&DAT_00fa2f74 + iVar8) == 1) {
      *(undefined2 *)(iVar14 + 0x36) = 2;
    }
  }
  uVar17 = *(uint *)(&DAT_00fa2f68 + iVar8);
  if (uVar17 != 0) {
    if ((uVar17 & 1) != 0) {
      local_180.x = *(float *)(iVar11 + 0xfa2fd0);
      local_180.y = *(float *)(iVar11 + 0xfa2fd4);
      local_180.w = *(float *)(iVar11 + 0xfa2fdc);
      local_180.z = *(float *)(iVar11 + 0xfa2fd8) - 0.25;
      uVar16 = (ulonglong)*(uint *)(&DAT_00fa2f50 + iVar8);
      if (*(uint *)(&DAT_00fa2f50 + iVar8) == 0xffffffff) {
        uVar16 = lights::CreatePointLight2
                           (DAT_0079b4d0,dVar45,dVar44,dVar44,0x4000000000000000,&local_180);
        uVar17 = *(uint *)(&DAT_00fa2f68 + iVar8);
        *(int *)(&DAT_00fa2f50 + iVar8) = (int)uVar16;
      }
      if (-1 < (int)uVar16) {
        iVar14 = (int)((uVar16 & 0xffffffff) << 5);
        *(float *)((int)&PointLights[0].pos.x + iVar14) = local_180.x;
        *(float *)((int)&PointLights[0].pos.y + iVar14) = local_180.y;
        *(float *)((int)&PointLights[0].pos.z + iVar14) = local_180.z;
        *(float *)((int)&PointLights[0].pos.w + iVar14) = DAT_0079b4d0;
      }
    }
    if ((uVar17 & 2) != 0) {
      local_1b0.z = (float)((double)local_1b0.z + dVar54);
      uVar16 = (ulonglong)*(uint *)(&DAT_00fa2f5c + iVar8);
      if (*(uint *)(&DAT_00fa2f5c + iVar8) == 0xffffffff) {
        uVar16 = lights::CreatePointLight2
                           (DAT_0079b4d0,dVar45,dVar44,dVar44,0x4000000000000000,&local_1b0);
        *(int *)(&DAT_00fa2f5c + iVar8) = (int)uVar16;
      }
      if (-1 < (int)uVar16) {
        iVar8 = (int)((uVar16 & 0xffffffff) << 5);
        *(float *)((int)&PointLights[0].pos.x + iVar8) = local_1b0.x;
        *(float *)((int)&PointLights[0].pos.y + iVar8) = local_1b0.y;
        *(float *)((int)&PointLights[0].pos.z + iVar8) = local_1b0.z;
        *(float *)((int)&PointLights[0].pos.w + iVar8) = DAT_0079b4d0;
      }
    }
  }
  return;
}



//==== 0024d07c  ns=mobyupdate_helpers  size=0xa0
// sig: undefined M1331_0024d07c(void)
// callers(0): 
// callees(1): 000da9e8 lights::DeletePointLight

void mobyupdate_helpers::M1331_0024d07c(longlong param_1)

{
  int iVar1;
  
  iVar1 = (int)(param_1 << 2);
  *(undefined4 *)((int)&DAT_00fa2f20 + iVar1) = 0;
  *(undefined4 *)((int)&DAT_00fa2f8c + iVar1) = 0;
  if (*(int *)(&DAT_00fa2f50 + iVar1) != -1) {
    lights::DeletePointLight(*(int *)(&DAT_00fa2f50 + iVar1));
    *(undefined4 *)(&DAT_00fa2f50 + iVar1) = 0xffffffff;
  }
  if (*(int *)(&DAT_00fa2f5c + iVar1) != -1) {
    lights::DeletePointLight(*(int *)(&DAT_00fa2f5c + iVar1));
    *(undefined4 *)(&DAT_00fa2f5c + iVar1) = 0xffffffff;
  }
  return;
}



//==== 0024d11c  ns=mobyupdate_unsorted  size=0x1c8
// sig: undefined UpdateMoby_1331(MobyInstance * moby)
// callers(0): 
// callees(3): 0006d7e0 draw::RegisterPostDraw; 000da9e8 lights::DeletePointLight; 0024c380 mobyupdate_helpers::M1331_0024c380

/* Moby 1331 */

void mobyupdate_unsorted::UpdateMoby_1331(MobyInstance *moby)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (moby->state == 0) {
    DAT_00fa2f28 = 0;
    DAT_00fa2f94 = 0;
    DAT_00fa2f90 = 0;
    DAT_00fa2f24 = 0;
    DAT_00fa2f8c = 0;
    DAT_00fa2f20 = 0;
    moby->state = '\x01';
    moby->updateDistance = -1;
  }
  else if (moby->state < 2) {
    uVar3 = 0;
    iVar2 = 0;
    do {
      iVar1 = (int)((uVar3 & 0xffffffff) << 2);
      iVar4 = *(int *)((int)&DAT_00fa2f20 + iVar1);
      if (iVar4 == 1) {
        if (0x7f < *(byte *)(*(int *)((int)&DAT_00fa2f8c + iVar1) + 0x20)) {
          *(undefined4 *)((int)&DAT_00fa2f20 + iVar1) = 0;
          *(undefined4 *)((int)&DAT_00fa2f8c + iVar1) = 0;
        }
      }
      else if (iVar4 == 4) {
        *(undefined4 *)((int)&DAT_00fa2f20 + iVar1) = 0;
        *(undefined4 *)((int)&DAT_00fa2f8c + iVar1) = 0;
        if (*(int *)(&DAT_00fa2f50 + iVar1) != -1) {
          lights::DeletePointLight(*(int *)(&DAT_00fa2f50 + iVar1));
          *(undefined4 *)(&DAT_00fa2f50 + iVar1) = 0xffffffff;
        }
        if (*(int *)(&DAT_00fa2f5c + iVar1) != -1) {
          lights::DeletePointLight(*(int *)(&DAT_00fa2f5c + iVar1));
          *(undefined4 *)(&DAT_00fa2f5c + iVar1) = 0xffffffff;
        }
      }
      else if (iVar4 != 0) {
        iVar2 = iVar2 + 1;
        mobyupdate_helpers::M1331_0024c380(*(undefined4 *)((int)&DAT_00fa2f8c + iVar1),uVar3);
        *(undefined4 *)((int)&DAT_00fa2f20 + iVar1) = 4;
      }
      iVar4 = (int)uVar3 + 1;
      uVar3 = (ulonglong)iVar4;
    } while (iVar4 < 3);
    if (iVar2 != 0) {
      draw::RegisterPostDraw(&PTR_M1338_0024ea90_00709ee0,moby);
    }
  }
  return;
}



//==== 0024d2e4  ns=Global  size=0xf8
// sig: undefined FUN_0024d2e4(void)
// callers(2): 002edb38 mobyupdate_helpers::M211_002edb38; 00327f50 mobyupdate_unsorted::UpdateMoby_28
// callees(0): 

undefined8 FUN_0024d2e4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar2 = &DAT_00fa2f8c;
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
      (&DAT_00fa2f8c)[iVar4] = param_1;
      *(undefined4 *)(&DAT_00fa2f2c + iVar1) = 0;
      *(undefined4 *)(&DAT_00fa2f44 + iVar1) = 0;
      *(undefined4 *)(&DAT_00fa2f38 + iVar1) = 0;
      *(undefined4 *)(&DAT_00fa2f50 + iVar1) = 0xffffffff;
      *(undefined4 *)(&DAT_00fa2f5c + iVar1) = 0xffffffff;
      *(undefined4 *)(&DAT_00fa2f68 + iVar1) = param_2;
      *(undefined4 *)(&DAT_00fa2f74 + iVar1) = param_3;
      *(undefined4 *)(&DAT_00fa2f80 + iVar1) = 0;
      (&DAT_00fa2f20)[iVar4] = 1;
      return 1;
    }
    iVar4 = iVar4 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar4 < 3);
  return 0;
}



//==== 0024d3dc  ns=mobyupdate_helpers  size=0x60
// sig: undefined M1338_0024d3dc(void)
// callers(0): 
// callees(0): 

undefined8 mobyupdate_helpers::M1338_0024d3dc(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  int *piVar3;
  
  uVar2 = 0;
  piVar3 = &DAT_00fa2f8c;
  do {
    if (*piVar3 == param_1) {
      iVar1 = (int)((uVar2 & 0xffffffff) << 2);
      if (*(int *)((int)&DAT_00fa2f20 + iVar1) == 1) {
        *(undefined4 *)((int)&DAT_00fa2f20 + iVar1) = 2;
      }
      return 1;
    }
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 1;
  } while ((int)uVar2 < 3);
  return 0;
}



//==== 0024d43c  ns=Global  size=0xd0
// sig: undefined FUN_0024d43c(void)
// callers(2): 00327848 mobyupdate_helpers::M28_00327848; 00327f50 mobyupdate_unsorted::UpdateMoby_28
// callees(1): 000da9e8 lights::DeletePointLight

undefined8 FUN_0024d43c(int param_1)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  piVar2 = &DAT_00fa2f8c;
  do {
    if (*piVar2 == param_1) {
      iVar1 = (int)((uVar3 & 0xffffffff) << 2);
      *(undefined4 *)((int)&DAT_00fa2f8c + iVar1) = 0;
      *(undefined4 *)((int)&DAT_00fa2f20 + iVar1) = 0;
      if (*(int *)(&DAT_00fa2f50 + iVar1) != -1) {
        lights::DeletePointLight(*(int *)(&DAT_00fa2f50 + iVar1));
        *(undefined4 *)(&DAT_00fa2f50 + iVar1) = 0xffffffff;
      }
      if (*(int *)(&DAT_00fa2f5c + iVar1) != -1) {
        lights::DeletePointLight(*(int *)(&DAT_00fa2f5c + iVar1));
        *(undefined4 *)(&DAT_00fa2f5c + iVar1) = 0xffffffff;
      }
      return 1;
    }
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 1;
  } while ((int)uVar3 < 3);
  return 0;
}



//==== 0024d50c  ns=Global  size=0xf4
// sig: undefined FUN_0024d50c(void)
// callers(2): 002edb38 mobyupdate_helpers::M211_002edb38; 00327f50 mobyupdate_unsorted::UpdateMoby_28
// callees(1): 005002cc fastfunc::FastMemCopy

undefined8 FUN_0024d50c(int param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  piVar2 = &DAT_00fa2f8c;
  do {
    if (param_1 == *piVar2) {
      iVar1 = (int)((uVar3 & 0xffffffff) << 2);
      if (*(int *)((int)&DAT_00fa2f20 + iVar1) == 1) {
        *(undefined4 *)((int)&DAT_00fa2f20 + iVar1) = 2;
      }
      else if (*(int *)((int)&DAT_00fa2f20 + iVar1) == 4) {
        *(undefined4 *)((int)&DAT_00fa2f20 + iVar1) = 3;
      }
      fastfunc::FastMemCopy
                (ZEXT48(&DAT_00fa2fa0) + (uVar3 & 0x3ffffff) * 0x40 & 0xffffffff,param_2,0x40);
      iVar1 = (int)uVar3;
      (&DAT_00fa3060)[iVar1 * 4] = *param_3;
      (&DAT_00fa3064)[iVar1 * 4] = param_3[1];
      (&DAT_00fa3068)[iVar1 * 4] = param_3[2];
      (&DAT_00fa306c)[iVar1 * 4] = param_3[3];
      return 1;
    }
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 1;
  } while ((int)uVar3 < 3);
  return 0;
}



//==== 0024d620  ns=mobyupdate_helpers  size=0xbe0
// sig: undefined M1338_0024d620(void)
// callers(1): 0024ea90 mobyupdate_helpers::M1338_0024ea90
// callees(8): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 000fec94 mobyutil::MB_catmullRom; 00502730 fastfunc::FastIntToDouble; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0; 005e825c FUN_005e825c

void mobyupdate_helpers::M1338_0024d620(undefined8 param_1,undefined8 param_2,longlong param_3)

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



//==== 0024e228  ns=mobyupdate_helpers  size=0x85c
// sig: undefined M1338_0024e228(void)
// callers(1): 0024ea90 mobyupdate_helpers::M1338_0024ea90
// callees(7): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe4f0 mobyutil::MB_randRangeSigned; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1338_0024e228(undefined8 param_1,longlong param_2)

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
  dVar27 = (double)*(float *)(iVar5 + 0xfa2fd4);
  dVar26 = (double)*(float *)(iVar5 + 0xfa2fd0);
  fVar2 = (float)((double)GameCamera.posY - dVar27);
  dVar28 = (double)*(float *)(iVar5 + 0xfa2fd8);
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
  pfVar10 = (float *)&DAT_0079b490;
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
  dVar28 = (double)*(float *)(iVar5 + 0xfa3094);
  dVar27 = (double)*(float *)(iVar5 + 0xfa3090);
  fVar2 = (float)((double)GameCamera.posY - dVar28);
  dVar29 = (double)*(float *)(iVar5 + 0xfa3098);
  fVar3 = (float)((double)GameCamera.posX - dVar27);
  fVar4 = (float)((double)GameCamera.posZ - dVar29);
  dVar26 = (double)*(float *)(iVar5 + 0xfa309c);
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



//==== 0024ea90  ns=mobyupdate_helpers  size=0x1c4
// sig: undefined M1338_0024ea90(void)
// callers(0): 
// callees(4): 00174f80 vuchain::SetGSReg; 0024d620 mobyupdate_helpers::M1338_0024d620; 0024e228 mobyupdate_helpers::M1338_0024e228; 00502f98 FUN_00502f98

void mobyupdate_helpers::M1338_0024ea90(int param_1)

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
    if ((*(int *)((int)&DAT_00fa2f8c + iVar5) != 0) && (1 < *(int *)((int)&DAT_00fa2f20 + iVar5))) {
      dVar6 = -(double)(float)((double)DAT_0071f408 * dVar7 -
                              (double)*(float *)(&DAT_00fa2f80 + iVar5));
      *(float *)(&DAT_00fa2f80 + iVar5) = (float)dVar6;
      if (dVar6 <= dVar8) {
        *(float *)(&DAT_00fa2f80 + iVar5) = (float)(dVar6 + dVar9);
      }
      M1338_0024e228(*(int *)((int)&DAT_00fa2f8c + iVar5),uVar4);
      iVar5 = piVar1[1] + 0x28;
      iVar3 = *piVar1 + 0x28;
      M1338_0024d620(iVar5,iVar3,ZEXT48(&DAT_00fa30c0) + (uVar4 & 0x7fffffff) * 0x280 & 0xffffffff,
                     0x80,0x40,uVar4);
      M1338_0024d620(iVar5,iVar3,
                     ZEXT48(&DAT_00fa30c0) + ((uVar4 & 0x7fffffff) * 2 + 1) * 0x140 & 0xffffffff,
                     0x30,0x10,uVar4);
    }
    iVar5 = (int)uVar4 + 1;
    uVar4 = (ulonglong)iVar5;
  } while (iVar5 < 3);
  return;
}



//==== 0024ec54  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1338_0024ec54(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1338_0024ec54(void)

{
  DAT_0079b520 = 0x10000;
  return;
}



//==== 0024ec68  ns=Global  size=0x11c
// sig: undefined FUN_0024ec68(void)
// callers(2): 002389c8 mobyupdate_helpers::M1284_002389c8; 0023be70 mobyupdate_unsorted::UpdateMoby_1284
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f1114 mobyfunc::GetBonePosition; 000f31a8 mobyfunc::UpdateMobyTransform

longlong FUN_0024ec68(int param_1,undefined8 param_2,MOBY_OCLASSES param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  MobyInstance *pMVar7;
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
  undefined4 uVar18;
  
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
    *(int *)((int)pvVar4 + 0x44) = (int)param_2;
    pMVar7->scale = (fVar2 * fVar1) / fVar3;
    mobyfunc::GetBonePosition(param_1,param_2,(longlong)(int)pMVar7 + 0x10);
    *(int *)((int)pvVar4 + 0x3c) = param_1;
    mobyfunc::UpdateMobyTransform(pMVar7);
    (pMVar7->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar7->rotation).y = *(f32 *)(param_1 + 0x44);
    (pMVar7->rotation).z = *(f32 *)(param_1 + 0x48);
    (pMVar7->rotation).w = *(f32 *)(param_1 + 0x4c);
    puVar5 = (undefined4 *)(param_1 + 0xc0U & 0xfffffff0);
    uVar10 = puVar5[2];
    uVar9 = puVar5[1];
    uVar8 = *puVar5;
    puVar6 = (undefined4 *)(param_1 + 0xd0U & 0xfffffff0);
    uVar14 = puVar6[3];
    uVar13 = puVar6[2];
    uVar12 = puVar6[1];
    uVar11 = *puVar6;
    puVar6 = (undefined4 *)(param_1 + 0xe0U & 0xfffffff0);
    uVar18 = puVar6[3];
    uVar17 = puVar6[2];
    uVar16 = puVar6[1];
    uVar15 = *puVar6;
    puVar6 = (undefined4 *)((uint)&pMVar7->transform & 0xfffffff0);
    puVar6[3] = puVar5[3];
    puVar6[2] = uVar10;
    puVar6[1] = uVar9;
    *puVar6 = uVar8;
    puVar5 = (undefined4 *)((uint)&(pMVar7->transform).v1 & 0xfffffff0);
    puVar5[3] = uVar14;
    puVar5[2] = uVar13;
    puVar5[1] = uVar12;
    *puVar5 = uVar11;
    puVar5 = (undefined4 *)((uint)&(pMVar7->transform).v2 & 0xfffffff0);
    puVar5[3] = uVar18;
    puVar5[2] = uVar17;
    puVar5[1] = uVar16;
    *puVar5 = uVar15;
    mobyfunc::UpdateMobyTransform(pMVar7);
  }
  return (longlong)(int)pMVar7;
}



//==== 0024eda0  ns=mobyupdate_unsorted  size=0x34c
// sig: undefined UpdateMoby_a_lot_19(MobyInstance * moby)
// callers(0): 
// callees(5): 00059e20 collproc::CollSphere; 000efb38 mobyfunc::DeleteMoby; 0010e030 mobyutil::MB_genericExplosion; 00500608 fastfunc::FastVecNormalize; 00502578 fastfunc::FastWrapRot

/* Moby 113
   Moby 1332
   Moby 1333
   Moby 1334
   Moby 1335
   Moby 1336
   Moby 1337
   Moby 1338 */

void mobyupdate_unsorted::UpdateMoby_a_lot_19(MobyInstance *moby)

{
  u8 uVar1;
  MOBY_OCLASSES MVar2;
  void *pvVar3;
  f32 fVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  double dVar9;
  
  lVar6 = (longlong)(int)moby;
  uVar1 = moby->state;
  pvVar3 = moby->pVar;
  if (uVar1 == '\x04') {
    mobyutil::MB_genericExplosion
              (0x4000000000000000,0x4010000000000000,0x4010000000000000,0x4000000000000000,
               0x4022000000000000,0x3ff0000000000000,0x402e000000000000,lVar6,(int)pvVar3 + 0x10,0,1
               ,0xffffffffffffffff,10,3,0x10);
    mobyfunc::DeleteMoby(moby);
    return;
  }
  if (uVar1 == '\x03') {
    (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar3 + 0x10);
    (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar3 + 0x14);
    (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar3 + 0x18);
    *(float *)((int)pvVar3 + 0x10) = *(float *)((int)pvVar3 + 0x10) * 0.99;
    *(float *)((int)pvVar3 + 0x14) = *(float *)((int)pvVar3 + 0x14) * 0.99;
    *(float *)((int)pvVar3 + 0x18) = *(float *)((int)pvVar3 + 0x18) * 0.99 - DAT_0071f418 * 39.2;
    iVar8 = collproc::CollSphere(0x4000000000000000,lVar6 + 0x10,&DAT_0024ed84,0,lVar6);
    if ((iVar8 != 0) &&
       ((CollOutput.pMoby == (MobyInstance *)0x0 ||
        ((((MVar2 = (CollOutput.pMoby)->oClass, MVar2 != 0x504 && MVar2 != 0x71 &&
           (MVar2 != (PLANETBUSTER_MAXIMUS_PART_0500|SEEKER))) && (MVar2 != 0x535)) &&
         (((MVar2 != (PLANETBUSTER_MAXIMUS_PART_0500|SUCKCANNON_0036) &&
           (MVar2 != (PLANETBUSTER_MAXIMUS_PART_0500|HANGAR_DOOR_0037))) &&
          ((MVar2 != 0x538 && ((MVar2 != 0x539 && (MVar2 != 0x53a)))))))))))) {
      fastfunc::FastVecNormalize((int)pvVar3 + 0x10,(int)pvVar3 + 0x10,0xa10980);
      moby->state = '\x04';
    }
    dVar9 = (double)fastfunc::FastWrapRot((moby->rotation).x,*(float *)((int)pvVar3 + 0x30));
    (moby->rotation).x = (float)dVar9;
    dVar9 = (double)fastfunc::FastWrapRot((moby->rotation).y,*(float *)((int)pvVar3 + 0x34));
    (moby->rotation).y = (float)dVar9;
    dVar9 = (double)fastfunc::FastWrapRot((moby->rotation).z,*(float *)((int)pvVar3 + 0x38));
    fVar4 = (moby->pos).x;
    (moby->rotation).z = (float)dVar9;
    uVar5 = (int)fVar4 >> 0x1f;
    iVar8 = (uVar5 >> 1 ^ (uint)fVar4) - uVar5;
    if ((((0x411fffff < iVar8) && (iVar8 < 0x447d4001)) &&
        (fVar4 = (moby->pos).y, uVar5 = (int)fVar4 >> 0x1f,
        iVar8 = (uVar5 >> 1 ^ (uint)fVar4) - uVar5, iVar8 < 0x447d4001 && 0x411fffff < iVar8)) &&
       ((fVar4 = (moby->pos).z, uVar5 = (int)fVar4 >> 0x1f,
        iVar8 = (uVar5 >> 1 ^ (uint)fVar4) - uVar5, 0x411fffff < iVar8 && (iVar8 < 0x447d4001)))) {
      return;
    }
    mobyfunc::DeleteMoby(moby);
    return;
  }
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
  uVar7 = *(undefined8 *)(*(int *)((int)pvVar3 + 0x3c) + 0x38);
  moby->color = (int)((ulonglong)uVar7 >> 0x20);
  moby->light = (int)uVar7;
  return;
}



//==== 0024f118  ns=mobyupdate_unsorted  size=0xbd4
// sig: undefined UpdateMoby_1341(MobyInstance * moby)
// callers(0): 
// callees(5): 0007b310 help::Help_QueueMessage; 00110b70 mobyutil::MB_IsPntInCuboid; 001129d0 mobyutil::MB_ScaledVecWrapper; 004660a8 FUN_004660a8; 004fff60 fastfunc::FastDecTimerS32
// strings: 00a0feec: 'None'

/* Moby 1341 */

ulonglong mobyupdate_unsorted::UpdateMoby_1341(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  void *pvVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  
  pvVar3 = moby->pVar;
  fastfunc::FastDecTimerS32((int)pvVar3 + 0x18);
  bVar2 = moby->state;
  uVar8 = (ulonglong)bVar2;
  if (bVar2 == 0) {
    uVar8 = 0;
    *(undefined4 *)((int)pvVar3 + 0x14) = 0;
    moby->updateDistance = -1;
    moby->state = '\x01';
    *(undefined4 *)((int)pvVar3 + 0x28) = 0;
  }
  else if (bVar2 < 2) {
    dVar11 = (double)animationSpeed;
    dVar13 = 400.5;
    if ((((worldUpdateTime < (int)(dVar11 * 400.5)) && (CHAR_ARRAY_00a0feec._96_2_ != 0)) &&
        (CHAR_ARRAY_00a0feec._88_2_ == 0)) &&
       (((int)((int)(dVar11 * (double)((float)(longlong)update::g_GameFrameCount + 0.5)) +
              (uint)(ushort)CHAR_ARRAY_00a0feec._98_2_ * -600) < (int)(dVar11 * 1100.5) &&
        ((CHAR_ARRAY_00a1000c._652_4_ & 0x80000000) == 0)))) {
      help::Help_QueueMessage(STR_WHEN_YOURE_UNDERWATER_PUSH_0x4E27,0x51);
      dVar11 = (double)animationSpeed;
    }
    if (((worldUpdateTime < (int)(dVar11 * dVar13)) && (CHAR_ARRAY_00a0feec._232_2_ != 0)) &&
       (((int)((int)(dVar11 * (double)((float)(longlong)update::g_GameFrameCount + 0.5)) +
              (uint)(ushort)CHAR_ARRAY_00a0feec._234_2_ * -600) < (int)(dVar11 * 1100.5) &&
        ((CHAR_ARRAY_00a1000c._916_4_ & 0x80000000) == 0)))) {
      help::Help_QueueMessage(STR_WHEN_YOURE_UNDERWATER_DONT_0x4E28,0x72);
    }
    if (g_gameMode == GAME_MODE_NORMAL) {
      bVar1 = g_SeenPlanets.Kerwan == '\0';
      if ((((bVar1) || (g_SeenPlanets.Aridia != '\0')) || (help::g_HelpState != 0)) ||
         ((help::g_HelpCurId != -1 || (CHAR_ARRAY_00a1000c._32_2_ != 0)))) {
        if ((((bVar1) && ((g_SeenPlanets.Aridia != '\0' && (help::g_HelpState == 0)))) &&
            (help::g_HelpCurId == -1)) && (CHAR_ARRAY_00a1000c._40_2_ == 0)) {
          help::Help_QueueMessage(STR_GADGETRON_INFOBOTS_GIVE_YOU_0x03E9,5);
        }
        else if ((((!bVar1) && (g_SeenPlanets.Aridia != '\0')) && (help::g_HelpState == 0)) &&
                (((help::g_HelpCurId == -1 && (CHAR_ARRAY_00a1000c._48_2_ == 0)) &&
                 (CHAR_ARRAY_00a1000c._32_2_ == 0)))) {
          help::Help_QueueMessage(STR_NOW_THAT_YOU_HAVE_0x03EA,6);
        }
      }
      else {
        help::Help_QueueMessage(STR_GADGETRON_INFOBOTS_GIVE_YOU_0x03E8,4);
      }
    }
    iVar9 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0x3c));
    if (((iVar9 != 0) && ((hero::g_heroStateType < 2 || (hero::g_heroStateType == 9)))) &&
       ((help::g_HelpState == 0 &&
        (((help::g_HelpCurId == -1 &&
          ((int)(animationSpeed * 216000.5) <
           (int)((int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5)) +
                (uint)(ushort)CHAR_ARRAY_00a0feec._74_2_ * -600))) &&
         ((CHAR_ARRAY_00a1000c._540_4_ & 1 << (Level & 0x3f)) == 0)))))) {
      help::Help_QueueMessage(STR_YOU_CAN_VIEW_A_0x03EF,0x43);
    }
    iVar9 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0x38));
    if ((((iVar9 != 0) && ((hero::g_heroStateType < 2 || (hero::g_heroStateType == 9)))) &&
        ((DAT_00a1a854 < 3 && ((help::g_HelpState == 0 && (help::g_HelpCurId == -1)))))) &&
       (CHAR_ARRAY_00a1000c._512_2_ == 0)) {
      help::Help_QueueMessage(STR_TO_ENTER_LOOK_AROUND_MODE_0x03EC,0x40);
    }
    iVar9 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0x38));
    if (((iVar9 != 0) &&
        (((((hero::g_heroStateType < 2 || (hero::g_heroStateType == 9)) &&
           (g_heroState == FIRST_PERSON_VIEW)) && ((DAT_00a1a850 == -1 && (help::g_HelpState == 0)))
          ) && (help::g_HelpCurId == -1)))) &&
       ((CHAR_ARRAY_00a1000c._512_2_ != 0 && (CHAR_ARRAY_00a1000c._520_2_ == 0)))) {
      help::Help_QueueMessage(STR_YOU_CAN_ALSO_USE_0x03ED,0x41);
    }
    if (((((ushort)CHAR_ARRAY_00a1000c._528_2_ < 2) &&
         (iVar9 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0x30))
         , iVar9 != 0)) && (DAT_0096bd70 == 0x3b)) &&
       ((hero::g_heroStateTimer == 0 && (MobyUpdateChainStart != 0)))) {
      dVar11 = 3.0;
      iVar9 = MobyUpdateChainStart;
      do {
        if (((*(short *)(iVar9 + 0xa6) == 0x118) &&
            (fVar4 = *(float *)(iVar9 + 0x14) - g_heroPosition.y,
            fVar5 = *(float *)(iVar9 + 0x10) - g_heroPosition.x,
            fVar6 = *(float *)(iVar9 + 0x18) - g_heroPosition.z,
            (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) < dVar11)) &&
           (**(int **)(iVar9 + 0x78) != 0x3f800000)) {
          iVar10 = *(int *)((int)pvVar3 + 0x34) + 1;
          *(int *)((int)pvVar3 + 0x34) = iVar10;
          if ((iVar10 == 3) || (iVar10 == 6)) {
            help::Help_QueueMessage(STR_TO_USE_THE_BOLT_0x03EE,0x42);
          }
        }
        iVar9 = *(int *)(iVar9 + 0x28);
      } while (iVar9 != 0);
    }
    if ((((hero::g_heroStateType == 0x12) && (*(int *)((int)pvVar3 + 0x28) == 0)) &&
        (help::g_HelpState == 0)) &&
       ((help::g_HelpCurId == -1 &&
        ((iVar9 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0x20))
         , iVar9 != 0 ||
         (iVar9 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0x24))
         , iVar9 != 0)))))) {
      *(int *)((int)pvVar3 + 0x2c) = *(int *)((int)pvVar3 + 0x2c) + 1;
      iVar9 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0x20));
      if (((iVar9 == 0) || (*(int *)((int)pvVar3 + 0x2c) <= (int)(animationSpeed * 240.5))) ||
         (CHAR_ARRAY_00a0feec._176_2_ != 0)) {
        iVar9 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0x24));
        if (((iVar9 != 0) && ((int)(animationSpeed * 360.5) < *(int *)((int)pvVar3 + 0x2c))) &&
           (CHAR_ARRAY_00a0feec._184_2_ == 0)) {
          help::Help_QueueMessage(STR_PRESS__TO_DIVE_0x03F0,0x44);
          if (CHAR_ARRAY_00a0feec._184_2_ != -1) {
            CHAR_ARRAY_00a0feec._184_2_ = CHAR_ARRAY_00a0feec._184_2_ + 1;
          }
          iVar9 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
          if ((int)(uint)(ushort)CHAR_ARRAY_00a0feec._186_2_ < iVar9 / 600) {
            sVar7 = (short)(iVar9 >> 0x1f);
            CHAR_ARRAY_00a0feec._186_2_ =
                 ((short)(iVar9 / 600) + sVar7) -
                 ((short)((short)(iVar9 / 0x2580000) + sVar7) >> 0xf);
          }
          CHAR_ARRAY_00a0feec._188_4_ =
               CHAR_ARRAY_00a0feec._188_4_ | 1 << (Level & 0x3f) | 0x80000000;
        }
      }
      else {
        help::Help_QueueMessage(STR_PRESS__TO_DIVE_0x03F0,0x44);
        if (CHAR_ARRAY_00a0feec._176_2_ != -1) {
          CHAR_ARRAY_00a0feec._176_2_ = CHAR_ARRAY_00a0feec._176_2_ + 1;
        }
        iVar9 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
        if ((int)(uint)(ushort)CHAR_ARRAY_00a0feec._178_2_ < iVar9 / 600) {
          sVar7 = (short)(iVar9 >> 0x1f);
          CHAR_ARRAY_00a0feec._178_2_ =
               ((short)(iVar9 / 600) + sVar7) - ((short)((short)(iVar9 / 0x2580000) + sVar7) >> 0xf)
          ;
        }
        CHAR_ARRAY_00a0feec._180_4_ = CHAR_ARRAY_00a0feec._180_4_ | 1 << (Level & 0x3f) | 0x80000000
        ;
      }
    }
    else if (hero::g_heroStateType == 0x11) {
      CHAR_ARRAY_00a1000c[0x220] = -1;
      CHAR_ARRAY_00a1000c[0x221] = -1;
    }
    else {
      *(undefined4 *)((int)pvVar3 + 0x2c) = 0;
    }
    uVar8 = 0xa40000;
    if (MobyUpdateChainStart != 0) {
      dVar13 = 10.0;
      dVar11 = 0.5;
      uVar12 = 0x406fe00000000000;
      iVar9 = MobyUpdateChainStart;
      do {
        uVar8 = (ulonglong)*(ushort *)(iVar9 + 0xa6);
        if (((((*(ushort *)(iVar9 + 0xa6) == 0x326) &&
              (fVar4 = *(float *)(iVar9 + 0x14) - g_heroPosition.y,
              fVar5 = *(float *)(iVar9 + 0x10) - g_heroPosition.x,
              fVar6 = *(float *)(iVar9 + 0x18) - g_heroPosition.z,
              (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) < dVar13)) &&
             ((uVar8 = (ulonglong)(uint)help::g_HelpState, help::g_HelpState == 0 &&
              ((uVar8 = (ulonglong)(uint)help::g_HelpCurId, help::g_HelpCurId == -1 &&
               (uVar8 = (ulonglong)(ushort)CHAR_ARRAY_00a1000c._8_2_, CHAR_ARRAY_00a1000c._8_2_ == 0
               )))))) &&
            (uVar8 = (ulonglong)(ushort)CHAR_ARRAY_00a1000c._16_2_, CHAR_ARRAY_00a1000c._16_2_ == 0)
            ) && (uVar8 = (ulonglong)(ushort)CHAR_ARRAY_00a0feec._104_2_,
                 CHAR_ARRAY_00a0feec._104_2_ == 0)) {
          iVar10 = FUN_004660a8(iVar9);
          uVar8 = (ulonglong)(uint)update::g_GameFrameCount;
          if (iVar10 == 0) {
            if (g_heroHealth < g_heroMaxNanotech) {
              if (CHAR_ARRAY_00a0feec._104_2_ != -1) {
                CHAR_ARRAY_00a0feec._104_2_ = CHAR_ARRAY_00a0feec._104_2_ + 1;
              }
              iVar10 = (int)(animationSpeed *
                            (float)((double)(longlong)update::g_GameFrameCount + dVar11));
              if ((int)(uint)(ushort)CHAR_ARRAY_00a0feec._106_2_ < iVar10 / 600) {
                sVar7 = (short)(iVar10 >> 0x1f);
                CHAR_ARRAY_00a0feec._106_2_ =
                     ((short)(iVar10 / 600) + sVar7) -
                     ((short)((short)(iVar10 / 0x2580000) + sVar7) >> 0xf);
              }
              CHAR_ARRAY_00a0feec._108_4_ =
                   CHAR_ARRAY_00a0feec._108_4_ | 1 << (Level & 0x3f) | 0x80000000;
              iVar10 = help::Help_QueueMessage(STR_YOU_JUST_PICKED_UP_0x0001,1);
              uVar8 = (ulonglong)iVar10;
            }
            else {
              uVar8 = mobyutil::MB_ScaledVecWrapper(uVar12,iVar9);
              if ((int)uVar8 != 0) {
                iVar10 = help::Help_QueueMessage(STR_THATS_NANOTECH_WHENEVER_YOU_0x0002,2);
                uVar8 = (ulonglong)iVar10;
              }
            }
          }
        }
        iVar9 = *(int *)(iVar9 + 0x28);
      } while (iVar9 != 0);
    }
  }
  return uVar8;
}



//==== 0024fcec  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1342_0024fcec(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1342_0024fcec(void)

{
  DAT_0079b59c = 0x10000;
  return;
}



//==== 0024fd10  ns=mobyupdate_unsorted  size=0xf44
// sig: undefined UpdateMoby_1342(MobyInstance * moby)
// callers(0): 
// callees(5): 0007b310 help::Help_QueueMessage; 0008e0f4 hero::Hero_GetWeaponAmmo; 00110b70 mobyutil::MB_IsPntInCuboid; 0011b728 mobyutil::MB_UnlockSkillPoint; 004fff60 fastfunc::FastDecTimerS32
// strings: 00a1000c: 'None'

/* Moby 1342 */

void mobyupdate_unsorted::UpdateMoby_1342(MobyInstance *moby)

{
  int *piVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  piVar1 = (int *)moby->pVar;
  fastfunc::FastDecTimerS32(ZEXT48(piVar1) + 0x58);
  if (moby->state == 0) {
    piVar1[0x14] = 0;
    piVar1[0x15] = 0;
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if (moby->state < 2) {
    iVar6 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[0x1e]);
    if ((iVar6 != 0) && ((hero::g_heroStateType < 2 || (hero::g_heroStateType == 9)))) {
      MiscLevelFlags.field26_0x1a = 1;
    }
    if (MiscLevelFlags.field26_0x1a == 0) {
      iVar6 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar1);
      if (((iVar6 != 0) &&
          (((hero::g_heroStateType < 2 || (hero::g_heroStateType == 9)) && (help::g_HelpState == 0))
          )) && ((help::g_HelpCurId == -1 && ((CHAR_ARRAY_00a1000c._164_4_ & 0x80000000) == 0)))) {
        help::Help_QueueMessage(STR_TRY_USING_THE_GLIDE_0x0BB8,0x14);
      }
      iVar6 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[3]);
      if (((iVar6 != 0) && ((hero::g_heroStateType < 2 || (hero::g_heroStateType == 9)))) &&
         ((help::g_HelpState == 0 &&
          ((help::g_HelpCurId == -1 && ((CHAR_ARRAY_00a1000c._172_4_ & 0x80000000) == 0)))))) {
        help::Help_QueueMessage(STR_TRY_USING_THE_HELI_PACKS_0x0BB9,0x15);
      }
      iVar6 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[6]);
      if ((iVar6 != 0) &&
         ((((hero::g_heroStateType < 2 || (hero::g_heroStateType == 9)) && (help::g_HelpState == 0))
          && ((help::g_HelpCurId == -1 && ((CHAR_ARRAY_00a1000c._188_4_ & 0x80000000) == 0)))))) {
        help::Help_QueueMessage(STR_YOULL_NEED_YOUR_NEW_0x0BBB,0x17);
      }
    }
    iVar6 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[0xc]);
    if (((iVar6 != 0) && (CHAR_ARRAY_00a0feec._24_2_ == 0)) &&
       ((hero::g_heroStateType < 2 || (hero::g_heroStateType == 9)))) {
      CHAR_ARRAY_00a0feec[0x18] = '\0';
      CHAR_ARRAY_00a0feec[0x19] = '\x01';
      iVar6 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
      if ((int)(uint)(ushort)CHAR_ARRAY_00a0feec._26_2_ < iVar6 / 600) {
        sVar5 = (short)(iVar6 >> 0x1f);
        CHAR_ARRAY_00a0feec._26_2_ =
             ((short)(iVar6 / 600) + sVar5) - ((short)((short)(iVar6 / 0x2580000) + sVar5) >> 0xf);
      }
      CHAR_ARRAY_00a0feec._28_4_ = CHAR_ARRAY_00a0feec._28_4_ | 1 << (Level & 0x3f) | 0x80000000;
    }
    iVar6 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[9]);
    if ((((iVar6 == 0) || (CHAR_ARRAY_00a0feec._24_2_ != 0)) || (hero::g_heroStateType < 2)) ||
       ((hero::g_heroStateType == 9 || (piVar1[0x16] != 0)))) {
      if ((piVar1[0x16] != 0) && ((hero::g_heroStateType < 2 || (hero::g_heroStateType == 9)))) {
        piVar1[0x16] = 0;
      }
    }
    else {
      auVar9 = ZEXT416(0xffffffff);
      auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
      auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
      piVar1[0x14] = piVar1[0x14] + 1;
      auVar9 = loadVectorLeftIndexed(4,0x24fd00);
      auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar9 = vectorMultiplyAddFloatingPoint
                         (auVar11,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar10)
      ;
      auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
      auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar2 = storeVectorElementWordIndexed
                        (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x58,
                         ZEXT48(piVar1));
      *(undefined4 *)((uint)(piVar1 + 0x16) & 0xfffffffc) = uVar2;
    }
    iVar6 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[9]);
    if (((((iVar6 != 0) && (CHAR_ARRAY_00a0feec._24_2_ == 0)) &&
         ((hero::g_heroStateType < 2 || (hero::g_heroStateType == 9)))) &&
        (((piVar1[0x14] % 6 == 0 && piVar1[0x14] != 0 && (help::g_HelpState == 0)) &&
         (help::g_HelpCurId == -1)))) && (CHAR_ARRAY_00a1000c._176_2_ == 0)) {
      help::Help_QueueMessage(STR_THIS_IS_A_JUMP_0x0BBA,0x16);
    }
    iVar6 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[10]);
    if (((((iVar6 != 0) && ((hero::g_heroStateType < 2 || (hero::g_heroStateType == 9)))) &&
         (help::g_HelpState == 0)) &&
        ((help::g_HelpCurId == -1 && (CHAR_ARRAY_00a1000c._192_2_ == 0)))) &&
       ((int)(animationSpeed * 216000.5) <
        (int)((int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5)) +
             (uint)(ushort)CHAR_ARRAY_00a0feec._74_2_ * -600))) {
      help::Help_QueueMessage(STR_DID_YOU_KNOW_THAT_0x0BBC,0x18);
    }
    iVar8 = 0;
    iVar7 = 0;
    for (iVar6 = MobyUpdateChainStart; iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x28)) {
      if (((*(int *)(iVar6 + 0x24) != 0) && (*(short *)(*(int *)(iVar6 + 0x24) + 0x46) == 5)) &&
         (fVar3 = *(float *)(iVar6 + 0x14) - g_heroPosition.y,
         fVar4 = *(float *)(iVar6 + 0x10) - g_heroPosition.x,
         SQRT(fVar4 * fVar4 + fVar3 * fVar3) < 8.0)) {
        iVar8 = iVar8 + 1;
      }
    }
    iVar6 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[0xf]);
    if ((((iVar6 == 0) || (iVar8 != 0)) ||
        ((1 < hero::g_heroStateType && (hero::g_heroStateType != 9)))) ||
       (((g_heroState == WEAPON_FIRST_PERSON_VIEW || (UnlockableItems.blaster == '\0')) ||
        ((iVar6 = hero::Hero_GetWeaponAmmo(0xf), iVar6 < 0x15 ||
         ((((help::g_HelpState != 0 || (help::g_HelpCurId != -1)) ||
           (CHAR_ARRAY_00a1000c._592_2_ != 0)) || (CHAR_ARRAY_00a0feec._152_2_ != 0)))))))) {
      if (g_heroState == WEAPON_FIRST_PERSON_VIEW) {
        if (CHAR_ARRAY_00a0feec._152_2_ != -1) {
          CHAR_ARRAY_00a0feec._152_2_ = CHAR_ARRAY_00a0feec._152_2_ + 1;
        }
        iVar6 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
        if ((int)(uint)(ushort)CHAR_ARRAY_00a0feec._154_2_ < iVar6 / 600) {
          sVar5 = (short)(iVar6 >> 0x1f);
          CHAR_ARRAY_00a0feec._154_2_ =
               ((short)(iVar6 / 600) + sVar5) - ((short)((short)(iVar6 / 0x2580000) + sVar5) >> 0xf)
          ;
        }
        CHAR_ARRAY_00a0feec._156_4_ = CHAR_ARRAY_00a0feec._156_4_ | 1 << (Level & 0x3f) | 0x80000000
        ;
      }
    }
    else {
      help::Help_QueueMessage(STR_YOU_CAN_ACCURATELY_AIM_0x4E20,0x4a);
    }
    iVar6 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[0xe]);
    if (((iVar6 != 0) && ((hero::g_heroStateType < 2 || (hero::g_heroStateType == 9)))) &&
       ((DAT_00a1a854 < 3 &&
        (((help::g_HelpState == 0 && (help::g_HelpCurId == -1)) &&
         (CHAR_ARRAY_00a1000c._512_2_ == 0)))))) {
      help::Help_QueueMessage(STR_TO_ENTER_LOOK_AROUND_MODE_0x03EC,0x40);
    }
    iVar6 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[0xe]);
    if (((iVar6 != 0) &&
        (((hero::g_heroStateType < 2 || (hero::g_heroStateType == 9)) &&
         (g_heroState == FIRST_PERSON_VIEW)))) &&
       (((DAT_00a1a850 == -1 && (help::g_HelpState == 0)) &&
        ((help::g_HelpCurId == -1 &&
         ((CHAR_ARRAY_00a1000c._512_2_ != 0 && (CHAR_ARRAY_00a1000c._520_2_ == 0)))))))) {
      help::Help_QueueMessage(STR_YOU_CAN_ALSO_USE_0x03ED,0x41);
    }
    iVar6 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[0x10]);
    if (((iVar6 != 0) &&
        (((hero::g_heroStateType < 2 || (hero::g_heroStateType == 9)) && (help::g_HelpState == 0))))
       && ((help::g_HelpCurId == -1 && (CHAR_ARRAY_00a1000c._672_2_ == 0)))) {
      help::Help_QueueMessage(STR_THESE_MOVING_WALLS_ALSO_0x0BC0,0x54);
    }
    if (((g_gameMode == GAME_MODE_NORMAL) && (CHAR_ARRAY_0096c165[0xc] != '\0')) &&
       ((help::g_HelpState == 0 && ((help::g_HelpCurId == -1 && (CHAR_ARRAY_00a1000c._200_2_ == 0)))
        ))) {
      help::Help_QueueMessage(STR_CONGRATULATIONS_ON_YOUR_NEW_0x0BBD,0x19);
    }
    iVar6 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[0xd]);
    if (((iVar6 != 0) && (CHAR_ARRAY_00a0feec._120_2_ == 0)) &&
       ((hero::g_heroStateType < 2 || (hero::g_heroStateType == 9)))) {
      CHAR_ARRAY_00a0feec[0x78] = '\0';
      CHAR_ARRAY_00a0feec[0x79] = '\x01';
      iVar6 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
      if ((int)(uint)(ushort)CHAR_ARRAY_00a0feec._122_2_ < iVar6 / 600) {
        sVar5 = (short)(iVar6 >> 0x1f);
        CHAR_ARRAY_00a0feec._122_2_ =
             ((short)(iVar6 / 600) + sVar5) - ((short)((short)(iVar6 / 0x2580000) + sVar5) >> 0xf);
      }
      CHAR_ARRAY_00a0feec._124_4_ = CHAR_ARRAY_00a0feec._124_4_ | 1 << (Level & 0x3f) | 0x80000000;
    }
    if ((DAT_0096a668 != 0) && (CHAR_ARRAY_00a0feec._120_2_ == 0)) {
      DAT_0096a668 = 0;
      piVar1[0x15] = piVar1[0x15] + 1;
    }
    if ((CHAR_ARRAY_00a0feec._120_2_ == 0) &&
       (((((hero::g_heroStateType < 2 || (hero::g_heroStateType == 9)) && (2 < piVar1[0x15])) &&
         ((help::g_HelpState == 0 && (help::g_HelpCurId == -1)))) &&
        (CHAR_ARRAY_00a1000c._208_2_ == 0)))) {
      help::Help_QueueMessage(STR_WHEN_USING_THE_SWINGSHOT_0x0BBE,0x1a);
    }
    if ((g_heroState == UNK_74) && (CHAR_ARRAY_00a0feec._128_2_ == 0)) {
      CHAR_ARRAY_00a0feec[0x80] = '\0';
      CHAR_ARRAY_00a0feec[0x81] = '\x01';
      iVar6 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
      if ((int)(uint)(ushort)CHAR_ARRAY_00a0feec._130_2_ < iVar6 / 600) {
        sVar5 = (short)(iVar6 >> 0x1f);
        CHAR_ARRAY_00a0feec._130_2_ =
             ((short)(iVar6 / 600) + sVar5) - ((short)((short)(iVar6 / 0x2580000) + sVar5) >> 0xf);
      }
      CHAR_ARRAY_00a0feec._132_4_ = CHAR_ARRAY_00a0feec._132_4_ | 1 << (Level & 0x3f) | 0x80000000;
    }
    iVar6 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[0xb]);
    if ((((iVar6 != 0) && (CHAR_ARRAY_00a0feec._128_2_ == 0)) && (hero::g_heroStateType == 6)) &&
       (((g_CurrentWeapon == 8 && (help::g_HelpState == 0)) &&
        ((help::g_HelpCurId == -1 && (CHAR_ARRAY_00a1000c._216_2_ == 0)))))) {
      help::Help_QueueMessage(STR_YOU_CAN_USE_THE_0x0BBF,0x1b);
    }
    iVar6 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[0x11]);
    if ((((iVar6 != 0) && ((hero::g_heroStateType < 2 || (hero::g_heroStateType == 9)))) &&
        (help::g_HelpState == 0)) &&
       ((help::g_HelpCurId == -1 && (CHAR_ARRAY_00a1000c._968_2_ == 0)))) {
      help::Help_QueueMessage(STR_TO_QUICKLY_CENTER_THE_0x4E2F,0x79);
    }
    iVar6 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[0x1f]);
    if (((iVar6 != 0) &&
        (((hero::g_heroStateType == 0 || (hero::g_heroStateType == 1)) &&
         (CHAR_ARRAY_00a1000c._632_2_ == 0)))) && (CHAR_ARRAY_00a0feec._160_2_ == 0)) {
      iVar6 = 0;
      do {
        if ((((&DAT_00721008)[iVar6 * 0x13] == 0) && (iVar6 != 0x18 && iVar6 != 8)) &&
           ((&UnlockableItems.field0_0x0)[iVar6] != '\0')) {
          iVar7 = iVar7 + 1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x25);
      if (1 < iVar7) {
        help::Help_QueueMessage(STR_TRY_THE_GADGETRON_QUICKSELECT_0x4E25,0x4f);
      }
    }
    iVar6 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[0x1c]);
    if (iVar6 != 0) {
      MiscLevelFlags.field24_0x18 = 1;
    }
    iVar6 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[0x1d]);
    if (iVar6 != 0) {
      mobyutil::MB_UnlockSkillPoint(3);
    }
  }
  return;
}



