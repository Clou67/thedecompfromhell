//==== 004d04ac  ns=mobyupdate_helpers  size=0x14
// sig: undefined M998_004d04ac(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M998_004d04ac(void)

{
  DAT_008f924c = 0x10000;
  return;
}



//==== 004d04c0  ns=stub  size=0x8
// sig: undefined STUB_004d04c0(void)
// callers(1): 000d8be8 initonce::InitOnce
// callees(0): 

undefined8 stub::STUB_004d04c0(void)

{
  return 0;
}



//==== 004d04c8  ns=stub  size=0x8
// sig: undefined STUB_004d04c8(void)
// callers(1): 000d8be8 initonce::InitOnce
// callees(0): 

undefined8 stub::STUB_004d04c8(void)

{
  return 0;
}



//==== 004d04d0  ns=stub  size=0x8
// sig: undefined STUB_004d04d0(void)
// callers(3): 000d8be8 initonce::InitOnce; 00164760 space::PlaySpacePlate; 00164c58 space::DoSpaceTransition
// callees(0): 

undefined8 stub::STUB_004d04d0(void)

{
  return 0;
}



//==== 004d04e0  ns=Global  size=0x9c
// sig: undefined FUN_004d04e0(void)
// callers(3): 002a2438 mobyupdate_unsorted::UpdateMoby_160; 0043dc00 mobyupdate_unsorted::UpdateMoby_74; 004c2ce8 mobyupdate_helpers::M938_004c2ce8
// callees(2): 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

void FUN_004d04e0(double param_1,undefined8 param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (double)fastfunc::FastDiffRots(param_2,param_1);
  dVar2 = ABS(dVar1);
  dVar3 = -param_3;
  if (0.0 - dVar1 < 0.0) {
    dVar3 = param_3;
  }
  if ((dVar3 <= dVar2) && (dVar1 = -dVar2, dVar2 = dVar3, dVar3 < dVar1)) {
    dVar2 = dVar1;
  }
  fastfunc::FastWrapRot((float)param_1,(float)dVar2);
  return;
}



//==== 004d05b8  ns=Global  size=0x958
// sig: undefined FUN_004d05b8(void)
// callers(1): 004d2040 FUN_004d2040
// callees(4): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

ulonglong FUN_004d05b8(double param_1,undefined8 param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  uint uVar12;
  ulonglong *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  int iVar20;
  int iVar21;
  longlong lVar18;
  longlong lVar19;
  float *pfVar23;
  longlong lVar22;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  ulonglong in_f22;
  double dVar32;
  ulonglong in_f23;
  double dVar33;
  ulonglong in_f24;
  double dVar34;
  ulonglong in_f25;
  double dVar35;
  ulonglong in_f26;
  double dVar36;
  ulonglong in_f27;
  double dVar37;
  ulonglong in_f28;
  double dVar38;
  ulonglong in_f29;
  double dVar39;
  ulonglong in_f30;
  double dVar40;
  ulonglong in_f31;
  double dVar41;
  
  uVar17 = ZEXT48(&stack0x00000000);
  lVar19 = uVar17 - 0x1b0;
  puVar13 = (ulonglong *)lVar19;
  *puVar13 = uVar17;
  puVar13[0x38] = in_LR;
  puVar13[0x2c] = in_f22;
  puVar13[0x2d] = in_f23;
  puVar13[0x2e] = in_f24;
  puVar13[0x2f] = in_f25;
  puVar13[0x30] = in_f26;
  puVar13[0x31] = in_f27;
  puVar13[0x32] = in_f28;
  puVar13[0x33] = in_f29;
  puVar13[0x34] = in_f30;
  puVar13[0x35] = in_f31;
  dVar37 = (double)*(float *)(param_3 + 0x10);
  puVar13[0x28] = unaff_r28;
  iVar21 = 0;
  dVar36 = (double)*(float *)(param_3 + 0x14);
  fVar1 = (float)(dVar37 + (double)*param_4);
  puVar13[0x26] = unaff_r26;
  dVar35 = (double)*(float *)(param_3 + 0x18);
  puVar13[0x25] = unaff_r25;
  fVar3 = *(float *)(param_3 + 0x1c);
  puVar13[0x29] = unaff_r29;
  puVar13[0x2b] = unaff_r31;
  uVar26 = 0;
  puVar13[0x2a] = unaff_r30;
  *(float *)(param_3 + 0x10) = fVar1;
  fVar2 = (float)(dVar36 + (double)param_4[1]);
  *(float *)(param_3 + 0x14) = fVar2;
  fVar4 = param_4[2];
  puVar13[0x27] = unaff_r27;
  fVar4 = (float)(dVar35 + (double)fVar4);
  *(float *)(param_3 + 0x18) = fVar4;
  do {
    *(float *)(puVar13 + 0xe) = fVar1;
    *(float *)((int)puVar13 + 0x74) = fVar2;
    *(float *)((int)puVar13 + 0x7c) = fVar3;
    *(float *)(puVar13 + 0xf) = (float)((double)fVar4 + param_1);
    iVar20 = collproc::CollSphere(param_2,uVar17 - 0x140);
    fVar1 = CollOutput.push.x;
    if (iVar20 == 0) break;
    iVar21 = iVar21 + 1;
    *(float *)(param_3 + 0x10) = CollOutput.push.x;
    fVar2 = CollOutput.push.y;
    uVar26 = 1;
    *(float *)(param_3 + 0x14) = CollOutput.push.y;
    fVar3 = CollOutput.push.w;
    fVar4 = (float)((double)CollOutput.push.z - param_1);
    *(float *)(param_3 + 0x1c) = CollOutput.push.w;
    *(float *)(param_3 + 0x18) = fVar4;
  } while (iVar21 < 6);
  uVar5 = *(undefined4 *)(param_3 + 0x10);
  uVar6 = *(undefined4 *)(param_3 + 0x14);
  *(undefined4 *)(puVar13 + 0x10) = uVar5;
  uVar7 = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)((int)puVar13 + 0x84) = uVar6;
  *(undefined4 *)((int)puVar13 + 0x8c) = uVar7;
  *(undefined4 *)(puVar13 + 0x12) = uVar5;
  *(undefined4 *)((int)puVar13 + 0x94) = uVar6;
  *(undefined4 *)((int)puVar13 + 0x9c) = uVar7;
  uVar11 = *(uint *)(param_3 + 0x18);
  fVar1 = *(float *)(param_3 + 0x18);
  uVar12 = (int)uVar11 >> 0x1f;
  *(undefined4 *)(puVar13 + 0x13) = 0x3c23d70a;
  *(float *)(puVar13 + 0x11) = (float)(param_1 + 1.0) + fVar1;
  iVar21 = collproc::CollLine(uVar17 - 0x130,uVar17 - 0x120,2,param_3,0);
  fVar3 = CollOutput.normal.z;
  fVar1 = *param_4;
  fVar2 = param_4[1];
  fVar4 = param_4[2];
  uVar27 = uVar26;
  if (((iVar21 != 0) && (0 < CollOutput.poly)) &&
     ((int)((uVar12 >> 1 ^ uVar11) - uVar12) <
      (int)(((uint)((int)CollOutput.ip.z >> 0x1f) >> 1 ^ (uint)CollOutput.ip.z) -
           ((int)CollOutput.ip.z >> 0x1f)))) {
    fVar8 = ABS(CollOutput.normal.z);
    uVar27 = uVar26 | 2;
    fVar9 = SQRT(CollOutput.normal.x * CollOutput.normal.x +
                 CollOutput.normal.y * CollOutput.normal.y);
    fVar10 = ABS(fVar9);
    *(float *)((int)puVar13 + 0xb4) = fVar9;
    *(float *)(puVar13 + 0x17) = fVar8 - fVar10;
    dVar34 = 0.0;
    dVar41 = 0.7853981852531433;
    uVar24 = (ulonglong)((uint)fVar3 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar13 + 0x17) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar13 + 0xb4) >> 0x1d) & 4;
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
    fVar9 = fVar8;
    if (*(float *)(puVar13 + 0x17) - 0.0 < 0.0) {
      fVar9 = fVar10;
    }
    fVar10 = ABS(*(float *)((int)puVar13 + 0xb4));
    if (*(float *)(puVar13 + 0x17) - 0.0 < 0.0) {
      fVar10 = fVar8;
    }
    fVar8 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
    dVar40 = dVar34;
    if (0.0 < fVar9) {
      lVar18 = uVar17 - 0x1a0;
      lVar22 = uVar17 - 0xb4;
      lVar25 = uVar17 - 0xa4;
      lVar28 = 2;
      fVar9 = (fVar10 - fVar9) / (fVar10 + fVar9);
      fVar10 = fVar9 * fVar9;
      *(float *)(puVar13 + 0x21) = fVar9;
      *(float *)(puVar13 + 0x20) = fVar9;
      *(float *)((int)puVar13 + 0x104) = fVar9;
      *(float *)((int)puVar13 + 0xfc) = fVar9;
      fVar9 = fVar10 * fVar10;
      *(float *)(puVar13 + 0x20) = *(float *)(puVar13 + 0x20) * fVar10;
      *(float *)((int)puVar13 + 0x104) = *(float *)((int)puVar13 + 0x104) * fVar9;
      *(float *)(puVar13 + 0x21) = *(float *)(puVar13 + 0x21) * fVar9 * fVar10;
      do {
        *(float *)((int)lVar18 + 0xfc) = *(float *)((int)lVar18 + 0xec) * fVar9 * fVar9;
        iVar21 = (int)lVar22;
        lVar18 = lVar18 + 8;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar21 + 4) * fVar9 * fVar9;
        lVar25 = lVar25 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar25 = uVar17 - 0xb4;
      pfVar23 = (float *)&DAT_007358e0;
      lVar18 = lVar19;
      lVar22 = lVar25;
      do {
        fVar9 = *pfVar23;
        fVar10 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar18 + 0xfc) = *(float *)((int)lVar18 + 0xfc) * fVar9;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar10;
        lVar22 = lVar22 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar22 = 2;
      lVar18 = lVar19;
      do {
        iVar21 = (int)lVar18;
        lVar18 = lVar18 + 0x10;
        iVar20 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar21 + 0xfc)) +
                          *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) + *(float *)(iVar20 + 0xc)
                         );
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      dVar40 = (double)((float)(dVar40 + 0.7853981852531433) * fVar3 + fVar8);
    }
    if (dVar40 <= 0.5) {
      if (0.20000000298023224 < dVar40) {
        *param_4 = fVar1 * 0.8;
        param_4[1] = fVar2 * 0.8;
        param_4[2] = fVar4 * 0.8;
      }
    }
    else {
      uVar27 = uVar26 | 6;
      *param_4 = fVar1 * 0.2;
      param_4[1] = fVar2 * 0.2;
      param_4[2] = fVar4 * 0.2;
    }
    fVar9 = CollOutput.normal.z;
    fVar3 = CollOutput.ip.z;
    fVar1 = *(float *)(param_3 + 0x48);
    fVar2 = fVar1 + 1.5707963;
    fVar4 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar4 = fVar1;
    }
    fVar10 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar10 = fVar2;
    }
    fVar8 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
      fVar8 = fVar4;
    }
    fVar1 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar10 < 0.0) {
      fVar1 = fVar10;
    }
    fVar2 = fVar8 * fVar8;
    dVar40 = (double)CollOutput.normal.z;
    fVar4 = fVar1 * fVar1;
    fVar15 = fVar2 * fVar2 * fVar8;
    fVar10 = fVar4 * fVar4 * fVar1;
    fVar16 = fVar2 * fVar15;
    fVar14 = fVar4 * fVar10;
    fVar2 = fVar2 * fVar16 * 2.601887e-06 +
            fVar16 * -0.0001980741 + fVar15 * 0.0083330255 + fVar2 * fVar8 * -0.16666657 + fVar8;
    fVar1 = fVar4 * fVar14 * 2.601887e-06 +
            fVar14 * -0.0001980741 + fVar10 * 0.0083330255 + fVar4 * fVar1 * -0.16666657 + fVar1;
    dVar39 = (double)(CollOutput.normal.x * fVar1 + CollOutput.normal.y * fVar2);
    fVar2 = CollOutput.normal.y * fVar1 - CollOutput.normal.x * fVar2;
    fVar4 = ABS(fVar2);
    fVar1 = SQRT((float)(dVar39 * dVar39 + (double)(float)(dVar40 * dVar40)));
    *(float *)((int)puVar13 + 0xac) = fVar2;
    dVar38 = (double)*(float *)(param_3 + 0x40);
    *(float *)(param_3 + 0x18) = fVar3;
    fVar2 = ABS(fVar1);
    *(float *)(puVar13 + 0x15) = fVar1;
    *(float *)(puVar13 + 0x16) = fVar2 - fVar4;
    uVar26 = (ulonglong)(*(uint *)(puVar13 + 0x15) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar13 + 0x16) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar13 + 0xac) >> 0x1d) & 4;
    fVar1 = ABS(*(float *)(puVar13 + 0x15));
    if (*(float *)(puVar13 + 0x16) - 0.0 < 0.0) {
      fVar1 = fVar4;
    }
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
    fVar3 = ABS(*(float *)((int)puVar13 + 0xac));
    if (*(float *)(puVar13 + 0x16) - 0.0 < 0.0) {
      fVar3 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
    dVar31 = dVar34;
    if (0.0 < fVar1) {
      lVar18 = uVar17 - 0x1a0;
      lVar22 = uVar17 - 0xd4;
      lVar25 = uVar17 - 0xc4;
      lVar28 = 2;
      fVar1 = (fVar3 - fVar1) / (fVar3 + fVar1);
      fVar3 = fVar1 * fVar1;
      *(float *)(puVar13 + 0x1d) = fVar1;
      *(float *)(puVar13 + 0x1c) = fVar1;
      *(float *)((int)puVar13 + 0xe4) = fVar1;
      *(float *)((int)puVar13 + 0xdc) = fVar1;
      fVar1 = fVar3 * fVar3;
      *(float *)(puVar13 + 0x1c) = *(float *)(puVar13 + 0x1c) * fVar3;
      *(float *)((int)puVar13 + 0xe4) = *(float *)((int)puVar13 + 0xe4) * fVar1;
      *(float *)(puVar13 + 0x1d) = *(float *)(puVar13 + 0x1d) * fVar1 * fVar3;
      do {
        *(float *)((int)lVar18 + 0xdc) = *(float *)((int)lVar18 + 0xcc) * fVar1 * fVar1;
        iVar21 = (int)lVar22;
        lVar18 = lVar18 + 8;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar21 + 4) * fVar1 * fVar1;
        lVar25 = lVar25 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar25 = uVar17 - 0xd4;
      pfVar23 = (float *)&DAT_007358e0;
      lVar18 = lVar19;
      lVar22 = lVar25;
      do {
        fVar1 = *pfVar23;
        fVar3 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar18 + 0xdc) = *(float *)((int)lVar18 + 0xdc) * fVar1;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar3;
        lVar22 = lVar22 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar22 = 2;
      lVar18 = lVar19;
      do {
        iVar21 = (int)lVar18;
        lVar18 = lVar18 + 0x10;
        iVar20 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar21 + 0xdc)) +
                          *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) + *(float *)(iVar20 + 0xc)
                         );
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar4 + fVar2);
    }
    dVar29 = (double)fastfunc::FastDiffRots(-dVar31,dVar38);
    dVar31 = ABS(dVar29);
    dVar33 = 0.01745329238474369;
    dVar32 = -0.01745329238474369;
    dVar30 = dVar32;
    if (dVar34 - dVar29 < 0.0) {
      dVar30 = dVar33;
    }
    if ((dVar30 <= dVar31) && (dVar29 = -dVar31, dVar31 = dVar30, dVar30 < dVar29)) {
      dVar31 = dVar29;
    }
    dVar38 = (double)fastfunc::FastWrapRot((float)dVar38,(float)dVar31);
    dVar40 = ABS(dVar40);
    *(float *)(puVar13 + 0x14) = (float)dVar39;
    *(float *)(param_3 + 0x40) = (float)dVar38;
    dVar31 = (double)*(float *)(param_3 + 0x44);
    *(float *)((int)puVar13 + 0xa4) = (float)(dVar40 - ABS(dVar39));
    uVar26 = (ulonglong)((uint)fVar9 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar13 + 0xa4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar13 + 0x14) >> 0x1d) & 4;
    dVar38 = dVar40;
    if ((double)*(float *)((int)puVar13 + 0xa4) - dVar34 < 0.0) {
      dVar38 = ABS(dVar39);
    }
    fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
    dVar39 = ABS((double)*(float *)(puVar13 + 0x14));
    if ((double)*(float *)((int)puVar13 + 0xa4) - dVar34 < 0.0) {
      dVar39 = dVar40;
    }
    fVar2 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
    dVar40 = dVar34;
    if (dVar34 < dVar38) {
      lVar18 = uVar17 - 0x1a0;
      lVar22 = uVar17 - 0xf4;
      lVar25 = uVar17 - 0xe4;
      lVar28 = 2;
      fVar4 = (float)(dVar39 - dVar38) / (float)(dVar39 + dVar38);
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar13 + 0x19) = fVar4;
      *(float *)(puVar13 + 0x18) = fVar4;
      *(float *)((int)puVar13 + 0xc4) = fVar4;
      *(float *)((int)puVar13 + 0xbc) = fVar4;
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar13 + 0x18) = *(float *)(puVar13 + 0x18) * fVar3;
      *(float *)((int)puVar13 + 0xc4) = *(float *)((int)puVar13 + 0xc4) * fVar4;
      *(float *)(puVar13 + 0x19) = *(float *)(puVar13 + 0x19) * fVar4 * fVar3;
      do {
        *(float *)((int)lVar18 + 0xbc) = *(float *)((int)lVar18 + 0xac) * fVar4 * fVar4;
        iVar21 = (int)lVar22;
        lVar18 = lVar18 + 8;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar21 + 4) * fVar4 * fVar4;
        lVar25 = lVar25 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar25 = uVar17 - 0xf4;
      pfVar23 = (float *)&DAT_007358e0;
      lVar18 = lVar19;
      lVar22 = lVar25;
      do {
        fVar4 = *pfVar23;
        fVar3 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar18 + 0xbc) = *(float *)((int)lVar18 + 0xbc) * fVar4;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar3;
        lVar22 = lVar22 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar18 = 2;
      do {
        iVar21 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        iVar20 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar21 + 0xbc)) +
                          *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) + *(float *)(iVar20 + 0xc)
                         );
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      dVar40 = (double)((float)(dVar40 + dVar41) * fVar1 + fVar2);
    }
    dVar40 = (double)fastfunc::FastDiffRots(dVar40,dVar31);
    dVar41 = ABS(dVar40);
    if (dVar34 - dVar40 < 0.0) {
      dVar32 = dVar33;
    }
    if ((dVar32 <= dVar41) && (dVar34 = -dVar41, dVar41 = dVar32, dVar32 < dVar34)) {
      dVar41 = dVar34;
    }
    dVar34 = (double)fastfunc::FastWrapRot((float)dVar31,(float)dVar41);
    *(float *)(param_3 + 0x44) = (float)dVar34;
  }
  *param_4 = (float)((double)*(float *)(param_3 + 0x10) - dVar37);
  param_4[1] = (float)((double)*(float *)(param_3 + 0x14) - dVar36);
  param_4[2] = (float)((double)*(float *)(param_3 + 0x18) - dVar35);
  param_4[3] = *(float *)(param_3 + 0x1c);
  if ((uVar27 & 2) != 0) {
    param_4[2] = 0.0;
  }
  return uVar27;
}



//==== 004d0f18  ns=Global  size=0x78
// sig: undefined FUN_004d0f18(void)
// callers(0): 
// callees(0): 

ulonglong FUN_004d0f18(int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  
  uVar5 = 0;
  uVar7 = 0xffffffffffffffff;
  fVar1 = 32767.0;
  if (0 < param_3) {
    do {
      pfVar4 = (float *)((int)((uVar5 & 0xffffffff) << 4) + param_2);
      fVar3 = *(float *)(param_1 + 0x14) - pfVar4[1];
      fVar2 = *(float *)(param_1 + 0x10) - *pfVar4;
      fVar2 = SQRT(fVar2 * fVar2 + fVar3 * fVar3);
      if (fVar2 < fVar1) {
        uVar7 = uVar5;
        fVar1 = fVar2;
      }
      iVar6 = (int)uVar5 + 1;
      uVar5 = (ulonglong)iVar6;
    } while (iVar6 < param_3);
  }
  return uVar7;
}



//==== 004d0fd0  ns=Global  size=0x1040
// sig: undefined FUN_004d0fd0(void)
// callers(1): 00496800 mobyupdate_unsorted::UpdateMoby_86
// callees(6): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere; 000fcbe8 mobyutil::MB_randRangeFloat; 00105548 mobyutil::ClosestPointOnConvexPolyEdge; 004fffb4 fastfunc::FastDecTimerS16; 00502758 fastfunc::FastDoubleToInt

void FUN_004d0fd0(float *param_1,longlong param_2,MobyInstance *param_3,float *param_4,
                 float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  f32 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  MobyInstance *pMVar14;
  ulonglong *puVar15;
  float fVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar22;
  longlong lVar20;
  longlong lVar21;
  undefined2 uVar23;
  longlong lVar24;
  float *pfVar25;
  uint *puVar27;
  longlong lVar26;
  int iVar28;
  int iVar29;
  ulonglong uVar30;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  uint *puVar31;
  ulonglong unaff_r25;
  MobyInstance *pMVar32;
  MobyInstance *pMVar33;
  ulonglong unaff_r26;
  ulonglong uVar34;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  double dVar43;
  ulonglong in_f25;
  double dVar44;
  ulonglong in_f26;
  double dVar45;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar46;
  ulonglong in_f30;
  double dVar47;
  double in_f31;
  
  uVar18 = ZEXT48(&stack0x00000000);
  lVar21 = uVar18 - 400;
  puVar15 = (ulonglong *)lVar21;
  *puVar15 = uVar18;
  puVar15[0x34] = in_LR;
  puVar15[0x24] = in_f18;
  puVar15[0x25] = in_f19;
  puVar15[0x26] = in_f20;
  puVar15[0x27] = in_f21;
  puVar15[0x28] = in_f22;
  puVar15[0x29] = in_f23;
  puVar15[0x2a] = in_f24;
  puVar15[0x2b] = in_f25;
  puVar15[0x2c] = in_f26;
  puVar15[0x2d] = in_f27;
  puVar15[0x2e] = in_f28;
  puVar15[0x2f] = in_f29;
  puVar15[0x30] = in_f30;
  puVar15[0x31] = (ulonglong)in_f31;
  puVar15[0x1b] = unaff_r23;
  puVar15[0x22] = unaff_r30;
  puVar15[0x23] = unaff_r31;
  puVar15[0x21] = unaff_r29;
  puVar15[0x20] = unaff_r28;
  puVar15[0x1f] = unaff_r27;
  puVar15[0x1e] = unaff_r26;
  puVar15[0x1d] = unaff_r25;
  puVar15[0x1c] = unaff_r24;
  puVar15[0x1a] = unaff_r22;
  uVar34 = 0;
  dVar46 = 0.0;
  iVar22 = 0;
  pMVar32 = (MobyInstance *)0x0;
  puVar31 = (uint *)0x0;
  param_4[3] = 0.0;
  param_4[2] = 0.0;
  param_4[1] = 0.0;
  *param_4 = 0.0;
  dVar44 = (double)(param_3->pos).y;
  dVar45 = (double)(param_3->pos).x;
  dVar43 = (double)(param_3->pos).z;
  dVar47 = (double)SQRT((float)(dVar43 - in_f31) * (float)(dVar43 - in_f31) +
                        (float)(dVar45 - in_f31) * (float)(dVar45 - in_f31) +
                        (float)(dVar44 - in_f31) * (float)(dVar44 - in_f31));
  dVar40 = dVar46;
  dVar41 = dVar46;
  dVar38 = dVar46;
  if (*(short *)(param_4 + 0x17) != -1) {
    fVar5 = 32767.0;
    uVar19 = 0;
    uVar34 = 0xffffffffffffffff;
    puVar31 = *(uint **)((int)Splines + (int)((longlong)*(short *)(param_4 + 0x17) << 2));
    uVar13 = *puVar31;
    puVar27 = puVar31;
    if (0 < (int)uVar13) {
      do {
        fVar2 = SQRT((float)(dVar45 - (double)(float)puVar27[4]) *
                     (float)(dVar45 - (double)(float)puVar27[4]) +
                     (float)(dVar44 - (double)(float)puVar27[5]) *
                     (float)(dVar44 - (double)(float)puVar27[5]));
        if (fVar2 < fVar5) {
          uVar34 = uVar19;
          fVar5 = fVar2;
        }
        uVar19 = uVar19 + 1;
        puVar27 = puVar27 + 4;
      } while ((int)uVar19 < (int)uVar13);
    }
    iVar22 = mobyutil::ClosestPointOnConvexPolyEdge
                       ((float *)(puVar15 + 0xe),&(param_3->pos).x,(float *)(puVar31 + 4),uVar13);
    if (iVar22 == 0) {
      dVar44 = (double)(param_3->pos).y;
      dVar45 = (double)(param_3->pos).x;
      fVar5 = (float)((double)*(float *)((int)puVar15 + 0x74) - dVar44);
      fVar2 = (float)((double)*(float *)(puVar15 + 0xe) - dVar45);
      dVar43 = (double)(param_3->pos).z;
      fVar3 = (float)((double)*(float *)(puVar15 + 0xf) - dVar43);
      fVar6 = -1000.0;
      dVar40 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar5 * fVar5);
      if (dVar40 != dVar38) {
        fVar6 = -param_5[2] / (float)(dVar40 * dVar40);
      }
      dVar40 = (double)fVar6;
    }
    else {
      dVar44 = (double)(param_3->pos).y;
      dVar45 = (double)(param_3->pos).x;
      fVar5 = (float)((double)*(float *)((int)puVar15 + 0x74) - dVar44);
      dVar43 = (double)(param_3->pos).z;
      fVar2 = (float)((double)*(float *)(puVar15 + 0xe) - dVar45);
      fVar3 = (float)((double)*(float *)(puVar15 + 0xf) - dVar43);
      dVar40 = 10000.0;
      dVar41 = (double)(SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar5 * fVar5) + 3.0);
      if (dVar47 < dVar41) {
        dVar40 = (double)(float)((double)(float)((double)param_5[2] * dVar41) * dVar41);
      }
    }
    dVar41 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar5 * fVar5);
    fVar6 = (float)(dVar40 / dVar41);
    dVar39 = dVar38;
    if (dVar38 - dVar41 < 0.0) {
      dVar39 = (double)(fVar6 * fVar3);
    }
    dVar42 = dVar38;
    if (dVar38 - dVar41 < 0.0) {
      dVar42 = (double)(fVar6 * fVar5);
    }
    dVar37 = dVar38;
    if (dVar38 - dVar41 < 0.0) {
      dVar37 = (double)(fVar6 * fVar2);
    }
    if (dVar41 - dVar38 < 0.0) {
      dVar39 = (double)(fVar6 * fVar3);
    }
    if (dVar41 - dVar38 < 0.0) {
      dVar42 = (double)(fVar6 * fVar5);
    }
    if (dVar41 - dVar38 < 0.0) {
      dVar37 = (double)(fVar6 * fVar2);
    }
    dVar41 = (double)(float)((double)param_4[2] + dVar39);
    dVar40 = (double)(float)((double)param_4[1] + dVar42);
    dVar46 = (double)(float)((double)*param_4 + dVar37);
    param_4[2] = (float)((double)param_4[2] + dVar39);
    param_4[1] = (float)((double)param_4[1] + dVar42);
    *param_4 = (float)((double)*param_4 + dVar37);
  }
  uVar19 = (ulonglong)(uint)*param_5;
  if (*param_5 != 0.0) {
    fVar2 = param_4[9];
    fVar3 = param_4[8];
    fVar6 = param_4[10];
    dVar42 = (double)SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar2 * fVar2);
    fVar5 = (float)((double)*param_5 / dVar42);
    dVar39 = dVar38;
    if (dVar38 - dVar42 < 0.0) {
      dVar39 = (double)(fVar6 * fVar5);
    }
    dVar37 = dVar38;
    if (dVar38 - dVar42 < 0.0) {
      dVar37 = (double)(fVar2 * fVar5);
    }
    dVar36 = dVar38;
    if (dVar38 - dVar42 < 0.0) {
      dVar36 = (double)(fVar3 * fVar5);
    }
    if (dVar42 - dVar38 < 0.0) {
      dVar39 = (double)(fVar6 * fVar5);
    }
    if (dVar42 - dVar38 < 0.0) {
      dVar37 = (double)(fVar2 * fVar5);
    }
    if (dVar42 - dVar38 < 0.0) {
      dVar36 = (double)(fVar3 * fVar5);
    }
    dVar39 = dVar41 + dVar39;
    dVar41 = (double)(float)dVar39;
    dVar37 = dVar40 + dVar37;
    dVar40 = (double)(float)dVar37;
    dVar36 = dVar46 + dVar36;
    dVar46 = (double)(float)dVar36;
    param_4[2] = (float)dVar39;
    param_4[1] = (float)dVar37;
    *param_4 = (float)dVar36;
  }
  pMVar14 = (MobyInstance *)param_4[0x14];
  pMVar33 = pMVar32;
  if (pMVar14 == param_3) {
    fVar2 = param_4[5];
    fVar3 = param_4[4];
    fVar6 = param_4[6];
    dVar39 = (double)SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar2 * fVar2);
    fVar5 = (float)((double)param_5[1] / dVar39);
    dVar47 = dVar38;
    if (dVar38 - dVar39 < 0.0) {
      dVar47 = (double)(fVar5 * fVar6);
    }
    dVar42 = dVar38;
    if (dVar38 - dVar39 < 0.0) {
      dVar42 = (double)(fVar5 * fVar2);
    }
    dVar37 = dVar38;
    if (dVar38 - dVar39 < 0.0) {
      dVar37 = (double)(fVar5 * fVar3);
    }
    if (dVar39 - dVar38 < 0.0) {
      dVar47 = (double)(fVar5 * fVar6);
    }
    if (dVar39 - dVar38 < 0.0) {
      dVar42 = (double)(fVar5 * fVar2);
    }
    if (dVar39 - dVar38 < 0.0) {
      dVar37 = (double)(fVar5 * fVar3);
    }
    param_4[2] = (float)(dVar41 + dVar47);
    param_4[1] = (float)(dVar40 + dVar42);
    *param_4 = (float)(dVar46 + dVar37);
  }
  else {
    if (*(short *)(param_4 + 0x17) != -1) {
      uVar13 = *puVar31;
      iVar29 = (int)(uVar34 << 4);
      uVar30 = (longlong)(int)(uVar34 + 1) - (longlong)(int)uVar13 >> 0x3f & uVar34 + 1;
      fVar5 = (float)((double)*(float *)((int)puVar31 + iVar29 + 0x14) - in_f31);
      iVar17 = (int)(uVar30 << 4);
      fVar2 = (float)((double)*(float *)((int)puVar31 + iVar29 + 0x10) - in_f31);
      fVar3 = (float)((double)*(float *)((int)puVar31 + iVar29 + 0x18) - in_f31);
      fVar6 = (float)((double)*(float *)((int)puVar31 + iVar17 + 0x14) - in_f31);
      fVar1 = (float)((double)*(float *)((int)puVar31 + iVar17 + 0x10) - in_f31);
      fVar4 = (float)((double)*(float *)((int)puVar31 + iVar17 + 0x18) - in_f31);
      fVar5 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar5 * fVar5);
      fVar2 = SQRT(fVar4 * fVar4 + fVar1 * fVar1 + fVar6 * fVar6);
      uVar19 = uVar34;
      if (fVar5 < fVar2) {
        uVar19 = uVar30;
        fVar5 = fVar2;
      }
      lVar20 = uVar34 - 1;
      uVar34 = lVar20 + ((longlong)(int)lVar20 >> 0x3f & ((ulonglong)uVar13 - 1) - lVar20);
      iVar29 = (int)uVar34;
      if (fVar5 < SQRT((float)((double)(float)puVar31[iVar29 * 4 + 6] - in_f31) *
                       (float)((double)(float)puVar31[iVar29 * 4 + 6] - in_f31) +
                       (float)((double)(float)puVar31[iVar29 * 4 + 4] - in_f31) *
                       (float)((double)(float)puVar31[iVar29 * 4 + 4] - in_f31) +
                       (float)((double)(float)puVar31[iVar29 * 4 + 5] - in_f31) *
                       (float)((double)(float)puVar31[iVar29 * 4 + 5] - in_f31))) {
        uVar19 = uVar34;
      }
      iVar28 = (int)uVar19 + -1;
      iVar29 = (int)(((longlong)(int)(uVar19 + 1) - (longlong)(int)uVar13 >> 0x3f & uVar19 + 1) << 4
                    );
      iVar28 = iVar28 + (iVar28 >> 0x1f & (int)((ulonglong)uVar13 - 1) - iVar28);
      iVar17 = (int)(uVar19 << 4);
      if (iVar22 == 0) {
        fVar2 = (float)((double)(*(float *)((int)puVar31 + iVar29 + 0x14) +
                                 (float)puVar31[iVar28 * 4 + 5] +
                                *(float *)((int)puVar31 + iVar17 + 0x14)) * 0.3333333432674408 -
                       dVar44);
        fVar3 = (float)((double)(*(float *)((int)puVar31 + iVar29 + 0x10) +
                                 (float)puVar31[iVar28 * 4 + 4] +
                                *(float *)((int)puVar31 + iVar17 + 0x10)) * 0.3333333432674408 -
                       dVar45);
        fVar6 = (float)((double)(*(float *)((int)puVar31 + iVar29 + 0x18) +
                                 (float)puVar31[iVar28 * 4 + 6] +
                                *(float *)((int)puVar31 + iVar17 + 0x18)) * 0.3333333432674408 -
                       dVar43);
        dVar42 = (double)SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar2 * fVar2);
        fVar5 = (float)((double)(float)((double)((float)(dVar42 * dVar42) * param_5[2]) * dVar42) /
                       dVar42);
        dVar39 = dVar38;
        if (dVar38 - dVar42 < 0.0) {
          dVar39 = (double)(fVar5 * fVar6);
        }
        dVar37 = dVar38;
        if (dVar38 - dVar42 < 0.0) {
          dVar37 = (double)(fVar5 * fVar2);
        }
        dVar36 = dVar38;
        if (dVar38 - dVar42 < 0.0) {
          dVar36 = (double)(fVar5 * fVar3);
        }
        if (dVar42 - dVar38 < 0.0) {
          dVar39 = (double)(fVar5 * fVar6);
        }
        if (dVar42 - dVar38 < 0.0) {
          dVar37 = (double)(fVar5 * fVar2);
        }
        if (dVar42 - dVar38 < 0.0) {
          dVar36 = (double)(fVar5 * fVar3);
        }
        dVar39 = dVar41 + dVar39;
        dVar41 = (double)(float)dVar39;
        dVar37 = dVar40 + dVar37;
        dVar40 = (double)(float)dVar37;
        dVar36 = dVar46 + dVar36;
        dVar46 = (double)(float)dVar36;
        param_4[2] = (float)dVar39;
        param_4[1] = (float)dVar37;
        *param_4 = (float)dVar36;
      }
    }
    if (pMVar14 != (MobyInstance *)0x0) {
      fVar5 = (float)((double)(pMVar14->pos).y - dVar44);
      fVar2 = (float)((double)(pMVar14->pos).x - dVar45);
      fVar3 = (float)((double)(pMVar14->pos).z - dVar43);
      dVar39 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar5 * fVar5);
      if (dVar39 < dVar47) {
        fVar6 = (float)((double)(float)((double)((float)(dVar39 * dVar39) * param_5[1]) * dVar39) /
                       dVar39);
        dVar42 = dVar38;
        if (dVar38 - dVar39 < 0.0) {
          dVar42 = (double)(fVar6 * fVar3);
        }
        dVar37 = dVar38;
        if (dVar38 - dVar39 < 0.0) {
          dVar37 = (double)(fVar6 * fVar5);
        }
        dVar36 = dVar38;
        if (dVar38 - dVar39 < 0.0) {
          dVar36 = (double)(fVar6 * fVar2);
        }
        if (dVar39 - dVar38 < 0.0) {
          dVar42 = (double)(fVar6 * fVar3);
        }
        if (dVar39 - dVar38 < 0.0) {
          dVar37 = (double)(fVar6 * fVar5);
        }
        if (dVar39 - dVar38 < 0.0) {
          dVar36 = (double)(fVar6 * fVar2);
        }
        dVar42 = dVar41 + dVar42;
        dVar41 = (double)(float)dVar42;
        dVar37 = dVar40 + dVar37;
        dVar40 = (double)(float)dVar37;
        dVar36 = dVar46 + dVar36;
        dVar46 = (double)(float)dVar36;
        param_4[2] = (float)dVar42;
        param_4[1] = (float)dVar37;
        *param_4 = (float)dVar36;
      }
    }
    pfVar25 = (float *)param_4[0x15];
    if (pfVar25 != (float *)0x0) {
      fVar5 = (float)((double)pfVar25[1] - dVar44);
      fVar2 = (float)((double)*pfVar25 - dVar45);
      fVar3 = (float)((double)pfVar25[2] - dVar43);
      dVar39 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar5 * fVar5);
      if (dVar39 < dVar47) {
        fVar6 = (float)((double)(float)((double)((float)(dVar39 * dVar39) * param_5[1]) * dVar39) /
                       dVar39);
        dVar47 = dVar38;
        if (dVar38 - dVar39 < 0.0) {
          dVar47 = (double)(fVar6 * fVar3);
        }
        dVar42 = dVar38;
        if (dVar38 - dVar39 < 0.0) {
          dVar42 = (double)(fVar6 * fVar5);
        }
        dVar37 = dVar38;
        if (dVar38 - dVar39 < 0.0) {
          dVar37 = (double)(fVar6 * fVar2);
        }
        if (dVar39 - dVar38 < 0.0) {
          dVar47 = (double)(fVar6 * fVar3);
        }
        if (dVar39 - dVar38 < 0.0) {
          dVar42 = (double)(fVar6 * fVar5);
        }
        if (dVar39 - dVar38 < 0.0) {
          dVar37 = (double)(fVar6 * fVar2);
        }
        dVar47 = dVar41 + dVar47;
        dVar41 = (double)(float)dVar47;
        dVar42 = dVar40 + dVar42;
        dVar40 = (double)(float)dVar42;
        dVar37 = dVar46 + dVar37;
        dVar46 = (double)(float)dVar37;
        param_4[2] = (float)dVar47;
        param_4[1] = (float)dVar42;
        *param_4 = (float)dVar37;
      }
    }
    uVar19 = param_2 + 1;
    iVar22 = 0;
    if (0 < (int)uVar19) {
      do {
        pMVar33 = g_heroMobyPtr;
        if (iVar22 < (int)param_2) {
          pMVar33 = (MobyInstance *)*param_1;
        }
        iVar29 = 0;
        if ((pMVar33->state < 0x80) && (param_3 != pMVar33)) {
          fVar5 = (float)(dVar44 - (double)(pMVar33->pos).y);
          fVar2 = (float)(dVar45 - (double)(pMVar33->pos).x);
          fVar3 = (float)(dVar43 - (double)(pMVar33->pos).z);
          dVar47 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar5 * fVar5);
          pfVar25 = param_4;
          if (dVar47 <= (double)param_4[0x13]) {
            do {
              if (pMVar33->oClass == *(MOBY_OCLASSES *)(pfVar25 + 0x18)) break;
              iVar29 = iVar29 + 1;
              pfVar25 = (float *)((int)pfVar25 + 2);
            } while (iVar29 < *(short *)((int)param_4 + 0x5e));
            if (iVar29 < *(short *)((int)param_4 + 0x5e)) {
              if (dVar47 < (double)param_5[4]) break;
              dVar39 = (double)(float)(dVar47 / (double)param_4[iVar29 + 0x24]);
              fVar6 = 1000.0;
              if (dVar39 != dVar38) {
                fVar6 = param_4[iVar29 + 0x1c] / (float)(dVar39 * dVar39);
              }
              fVar6 = (float)((double)fVar6 / dVar47);
              dVar39 = dVar38;
              if (dVar38 - dVar47 < 0.0) {
                dVar39 = (double)(fVar6 * fVar3);
              }
              dVar42 = dVar38;
              if (dVar38 - dVar47 < 0.0) {
                dVar42 = (double)(fVar6 * fVar5);
              }
              dVar37 = dVar38;
              if (dVar38 - dVar47 < 0.0) {
                dVar37 = (double)(fVar6 * fVar2);
              }
              if (dVar47 - dVar38 < 0.0) {
                dVar39 = (double)(fVar6 * fVar3);
              }
              if (dVar47 - dVar38 < 0.0) {
                dVar42 = (double)(fVar6 * fVar5);
              }
              if (dVar47 - dVar38 < 0.0) {
                dVar37 = (double)(fVar6 * fVar2);
              }
              dVar39 = dVar41 + dVar39;
              dVar41 = (double)(float)dVar39;
              dVar42 = dVar40 + dVar42;
              dVar40 = (double)(float)dVar42;
              dVar37 = dVar46 + dVar37;
              dVar46 = (double)(float)dVar37;
              param_4[2] = (float)dVar39;
              param_4[1] = (float)dVar42;
              *param_4 = (float)dVar37;
            }
          }
        }
        iVar22 = iVar22 + 1;
        param_1 = param_1 + 1;
        pMVar33 = pMVar32;
      } while (iVar22 < (int)uVar19);
    }
  }
  if (param_4[0x12] == 0.0) {
    fVar5 = param_4[4];
    fVar2 = param_4[5];
    fVar7 = (param_3->pos).w;
    fVar3 = param_4[6];
    *(f32 *)((int)puVar15 + 0x8c) = fVar7;
    *(f32 *)((int)puVar15 + 0x9c) = fVar7;
    *(float *)(puVar15 + 0x10) = (float)(dVar45 + (double)fVar5);
    *(float *)((int)puVar15 + 0x84) = (float)(dVar44 + (double)fVar2);
    *(float *)(puVar15 + 0x12) = (float)(dVar45 + (double)fVar5);
    *(float *)((int)puVar15 + 0x94) = (float)(dVar44 + (double)fVar2);
    *(undefined4 *)(puVar15 + 0x13) = 0x3c23d70a;
    *(float *)(puVar15 + 0x11) = (float)(dVar43 + (double)fVar3) + 1.5;
    iVar22 = collproc::CollLine(uVar18 - 0x110,uVar18 - 0x100,2,param_3,0);
    fVar12 = CollOutput.normal.z;
    fVar4 = CollOutput.normal.y;
    fVar1 = CollOutput.normal.x;
    fVar6 = CollOutput.ip.z;
    dVar40 = (double)*param_4;
    dVar41 = (double)param_4[1];
    dVar46 = (double)param_4[2];
    fVar5 = param_4[6];
    fVar2 = param_4[4];
    fVar3 = param_4[5];
    if (((iVar22 != 0) && (0 < CollOutput.poly)) &&
       (fVar7 = (param_3->pos).z, uVar13 = (int)fVar7 >> 0x1f, fVar8 = (param_3->pos).z,
       (int)((uVar13 >> 1 ^ (uint)fVar7) - uVar13) <
       (int)(((uint)((int)CollOutput.ip.z >> 0x1f) >> 1 ^ (uint)CollOutput.ip.z) -
            ((int)CollOutput.ip.z >> 0x1f)))) {
      dVar44 = (double)CollOutput.normal.z;
      dVar47 = ABS(dVar44);
      fVar16 = CollOutput.normal.x * CollOutput.normal.x + CollOutput.normal.y * CollOutput.normal.y
      ;
      dVar45 = (double)SQRT(fVar16);
      dVar39 = ABS(dVar45);
      *(float *)(puVar15 + 0x14) = SQRT(fVar16);
      *(float *)((int)puVar15 + 0xa4) = (float)(dVar47 - dVar39);
      uVar34 = (ulonglong)((uint)fVar12 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar15 + 0xa4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar15 + 0x14) >> 0x1d) & 4;
      dVar43 = dVar47;
      if ((double)*(float *)((int)puVar15 + 0xa4) - dVar38 < 0.0) {
        dVar43 = dVar39;
      }
      fVar12 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar34 << 2));
      dVar39 = ABS((double)*(float *)(puVar15 + 0x14));
      if ((double)*(float *)((int)puVar15 + 0xa4) - dVar38 < 0.0) {
        dVar39 = dVar47;
      }
      fVar9 = *(float *)(((uint)(uVar34 << 2) | 0x735900) + 4);
      dVar47 = dVar38;
      if (dVar38 < dVar43) {
        lVar20 = uVar18 - 0x180;
        lVar24 = uVar18 - 0xe8;
        lVar26 = uVar18 - 0xd8;
        lVar35 = 2;
        fVar10 = (float)(dVar39 - dVar43) / (float)(dVar39 + dVar43);
        fVar11 = fVar10 * fVar10;
        *(float *)((int)puVar15 + 0xb4) = fVar10;
        *(float *)((int)puVar15 + 0xac) = fVar10;
        *(float *)(puVar15 + 0x16) = fVar10;
        *(float *)(puVar15 + 0x15) = fVar10;
        fVar10 = fVar11 * fVar11;
        *(float *)((int)puVar15 + 0xac) = *(float *)((int)puVar15 + 0xac) * fVar11;
        *(float *)(puVar15 + 0x16) = *(float *)(puVar15 + 0x16) * fVar10;
        *(float *)((int)puVar15 + 0xb4) = *(float *)((int)puVar15 + 0xb4) * fVar10 * fVar11;
        do {
          *(float *)((int)lVar20 + 0xa8) = *(float *)((int)lVar20 + 0x98) * fVar10 * fVar10;
          iVar22 = (int)lVar24;
          lVar20 = lVar20 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar22 + 4) * fVar10 * fVar10;
          lVar26 = lVar26 + 8;
          lVar35 = lVar35 + -1;
        } while (lVar35 != 0);
        lVar35 = 4;
        lVar26 = uVar18 - 0xe8;
        pfVar25 = (float *)&DAT_007358e0;
        lVar20 = lVar21;
        lVar24 = lVar26;
        do {
          fVar10 = *pfVar25;
          fVar11 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar20 + 0xa8) = *(float *)((int)lVar20 + 0xa8) * fVar10;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar11;
          lVar24 = lVar24 + 8;
          lVar35 = lVar35 + -1;
        } while (lVar35 != 0);
        lVar20 = 2;
        dVar43 = dVar38;
        do {
          iVar22 = (int)lVar21;
          lVar21 = lVar21 + 0x10;
          iVar29 = (int)lVar26;
          lVar26 = lVar26 + 0x10;
          dVar43 = (double)((float)(dVar43 + (double)*(float *)(iVar22 + 0xa8)) +
                            *(float *)(iVar29 + 4) + *(float *)(iVar29 + 8) +
                           *(float *)(iVar29 + 0xc));
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        dVar47 = (double)((float)(dVar43 + 0.7853981852531433) * fVar12 + fVar9);
      }
      dVar43 = dVar38;
      dVar39 = dVar38;
      if (dVar45 != dVar38) {
        fVar12 = 1.0 / SQRT(fVar16);
        fVar12 = -(fVar16 * fVar12 * fVar12 - 1.0) * fVar12 * 0.5 + fVar12;
        fVar12 = -(fVar16 * fVar12 * fVar12 - 1.0) * fVar12 * 0.5 + fVar12;
        fVar12 = -(fVar16 * fVar12 * fVar12 - 1.0) * fVar12 * 0.5 + fVar12;
        dVar43 = (double)(fVar1 * fVar12);
        dVar39 = (double)(fVar4 * fVar12);
      }
      dVar45 = (double)param_5[3];
      dVar44 = (double)(float)(dVar45 * dVar44);
      dVar42 = (double)(float)((double)(float)(dVar47 * 10000.0) * dVar45);
      dVar46 = (double)(float)(dVar46 + dVar44);
      dVar41 = (double)(float)(dVar41 + (double)(float)(dVar45 * dVar39));
      dVar40 = (double)(float)(dVar40 + (double)(float)(dVar45 * dVar43));
      if (0.4000000059604645 - dVar47 < 0.0) {
        dVar46 = (double)(float)(dVar42 * dVar44 + dVar46);
      }
      if (0.4000000059604645 - dVar47 < 0.0) {
        dVar41 = (double)(float)(dVar42 * (double)(float)(dVar45 * dVar39) + dVar41);
      }
      if (0.4000000059604645 - dVar47 < 0.0) {
        dVar40 = (double)(float)(dVar42 * (double)(float)(dVar45 * dVar43) + dVar40);
      }
      if (0.2 < fVar8 - fVar6) {
        dVar46 = (double)(float)(dVar46 + (double)fVar5);
        dVar47 = (double)SQRT(fVar2 * fVar2 + fVar3 * fVar3);
        fVar5 = (float)((double)(float)(dVar45 * -1000.0) / dVar47);
        dVar45 = (double)(fVar3 * fVar5);
        dVar44 = (double)(fVar2 * fVar5);
        dVar43 = dVar38;
        if (dVar38 - dVar47 < 0.0) {
          dVar43 = dVar45;
        }
        dVar39 = dVar38;
        if (dVar38 - dVar47 < 0.0) {
          dVar39 = dVar44;
        }
        if (dVar47 - dVar38 < 0.0) {
          dVar43 = dVar45;
        }
        if (dVar47 - dVar38 < 0.0) {
          dVar39 = dVar44;
        }
        dVar41 = (double)(float)(dVar41 + dVar43);
        dVar40 = (double)(float)(dVar40 + dVar39);
      }
    }
  }
  else {
    iVar22 = collproc::CollSphere((double)param_5[4],&param_3->pos,uVar19,4,param_3);
    dVar40 = (double)*param_4;
    dVar41 = (double)param_4[1];
    dVar46 = (double)param_4[2];
    if (iVar22 != 0) {
      fVar3 = CollOutput.push.y - (param_3->pos).y;
      fVar6 = CollOutput.push.x - (param_3->pos).x;
      fVar5 = (float)((double)(CollOutput.push.z - (param_3->pos).z) + (double)param_5[3]);
      dVar44 = (double)SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar3 * fVar3);
      fVar2 = (float)((double)param_5[3] / dVar44);
      dVar43 = dVar38;
      if (dVar38 - dVar44 < 0.0) {
        dVar43 = (double)(fVar2 * fVar5);
      }
      dVar45 = dVar38;
      if (dVar38 - dVar44 < 0.0) {
        dVar45 = (double)(fVar2 * fVar3);
      }
      dVar47 = dVar38;
      if (dVar38 - dVar44 < 0.0) {
        dVar47 = (double)(fVar2 * fVar6);
      }
      if (dVar44 - dVar38 < 0.0) {
        dVar43 = (double)(fVar2 * fVar5);
      }
      if (dVar44 - dVar38 < 0.0) {
        dVar45 = (double)(fVar2 * fVar3);
      }
      if (dVar44 - dVar38 < 0.0) {
        dVar47 = (double)(fVar2 * fVar6);
      }
      dVar46 = (double)(float)(dVar46 + dVar43);
      dVar41 = (double)(float)(dVar41 + dVar45);
      dVar40 = (double)(float)(dVar40 + dVar47);
    }
  }
  dVar43 = (double)(float)(dVar40 * dVar40 + (double)(float)(dVar41 * dVar41));
  if (param_4[0x12] == 0.0) {
    dVar44 = (double)(float)SQRT(dVar43);
    dVar45 = (double)(float)((double)param_5[6] / dVar44);
    dVar46 = dVar38;
  }
  else {
    dVar44 = (double)SQRT((float)(dVar46 * dVar46 + dVar43));
    dVar45 = (double)(float)((double)param_5[6] / dVar44);
    dVar43 = dVar38;
    if (dVar38 - dVar44 < 0.0) {
      dVar43 = (double)(float)(dVar46 * dVar45);
    }
    if (dVar44 - dVar38 < 0.0) {
      dVar43 = (double)(float)(dVar46 * dVar45);
    }
    dVar46 = (double)(float)(dVar43 / (double)param_4[0x12]);
  }
  param_4[2] = (float)dVar46;
  dVar46 = dVar38;
  if (dVar38 - dVar44 < 0.0) {
    dVar46 = (double)(float)(dVar41 * dVar45);
  }
  dVar43 = dVar38;
  if (dVar38 - dVar44 < 0.0) {
    dVar43 = (double)(float)(dVar40 * dVar45);
  }
  if (dVar44 - dVar38 < 0.0) {
    dVar46 = (double)(float)(dVar41 * dVar45);
  }
  if (dVar44 - dVar38 < 0.0) {
    dVar43 = (double)(float)(dVar40 * dVar45);
  }
  param_4[1] = (float)dVar46;
  *param_4 = (float)dVar43;
  iVar22 = fastfunc::FastDecTimerS16(param_4 + 0x11);
  dVar40 = (double)param_4[0xe];
  if (iVar22 != 0) {
    mobyutil::MB_randRangeFloat(45.0,90.0);
    uVar23 = fastfunc::FastDoubleToInt();
    *(undefined2 *)(param_4 + 0x11) = uVar23;
    dVar40 = (double)mobyutil::MB_randRangeFloat((float)dVar38,param_4[0x10]);
    dVar46 = 0.5;
    param_4[0xc] = -(float)((double)param_4[0x10] * 0.5 - dVar40);
    dVar40 = dVar38;
    dVar41 = (double)mobyutil::MB_randRangeFloat((float)dVar38,param_4[0x10]);
    param_4[0xd] = -(float)((double)param_4[0x10] * dVar46 - dVar41);
    dVar38 = dVar40;
    if (param_4[0x12] != 0.0) {
      dVar40 = (double)mobyutil::MB_randRangeFloat((float)dVar40,param_4[0x10]);
      dVar40 = -(double)(float)((double)param_4[0x10] * dVar46 - dVar40);
    }
    param_4[0xe] = (float)dVar40;
  }
  *param_4 = *param_4 + param_4[0xc];
  param_4[1] = param_4[1] + param_4[0xd];
  param_4[2] = (float)((double)param_4[2] + dVar40);
  if (pMVar33 != (MobyInstance *)0x0) {
    fVar2 = (param_3->pos).x - (pMVar33->pos).x;
    fVar5 = (param_3->pos).w;
    fVar3 = (param_3->pos).y - (pMVar33->pos).y;
    fVar6 = (param_3->pos).z - (pMVar33->pos).z;
    if (param_4[0x12] == 0.0) {
      dVar40 = (double)SQRT(fVar2 * fVar2 + fVar3 * fVar3);
      if (dVar40 == dVar38) {
        *param_4 = fVar2;
        param_4[1] = fVar3;
        param_4[3] = fVar5;
        param_4[2] = fVar6;
        dVar40 = dVar38;
      }
      else {
        fVar1 = (float)((double)param_5[6] / dVar40);
        param_4[2] = fVar6;
        param_4[3] = fVar5;
        dVar38 = (double)(fVar1 * fVar2);
        dVar40 = (double)(fVar1 * fVar3);
      }
      *param_4 = (float)dVar38;
      param_4[1] = (float)dVar40;
    }
    else {
      dVar40 = (double)SQRT(fVar6 * fVar6 + fVar2 * fVar2 + fVar3 * fVar3);
      if (dVar40 == dVar38) {
        param_4[3] = fVar5;
        *param_4 = fVar2;
        param_4[1] = fVar3;
        param_4[2] = fVar6;
        dVar40 = dVar38;
        dVar41 = dVar38;
      }
      else {
        fVar1 = (float)((double)param_5[6] / dVar40);
        param_4[3] = fVar5;
        dVar40 = (double)(fVar1 * fVar2);
        dVar38 = (double)(fVar1 * fVar3);
        dVar41 = (double)(fVar1 * fVar6);
      }
      *param_4 = (float)dVar40;
      param_4[1] = (float)dVar38;
      param_4[2] = (float)dVar41;
    }
  }
  return;
}



//==== 004d2040  ns=Global  size=0x3e8
// sig: undefined FUN_004d2040(void)
// callers(0): 
// callees(2): 000ff2e8 mobyutil::OrganicDeltAngSpeed; 004d05b8 FUN_004d05b8

void FUN_004d2040(undefined8 param_1,double param_2,double param_3,int param_4,float *param_5,
                 int *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  ulonglong *puVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  ulonglong in_f28;
  double dVar26;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar14 = uVar13 - 0xe0;
  puVar7 = (ulonglong *)lVar14;
  *puVar7 = uVar13;
  puVar7[0x1e] = in_LR;
  puVar7[0x18] = in_f28;
  puVar7[0x19] = in_f29;
  puVar7[0x1a] = in_f30;
  puVar7[0x1b] = in_f31;
  fVar1 = param_5[5];
  fVar2 = param_5[1];
  fVar3 = param_5[4];
  dVar22 = (double)(fVar1 + fVar2);
  fVar4 = *param_5;
  dVar23 = (double)(fVar3 + fVar4);
  puVar7[0x15] = unaff_r29;
  puVar7[0x16] = unaff_r30;
  dVar21 = 0.0;
  param_5[2] = 0.0;
  puVar7[0x17] = unaff_r31;
  param_5[4] = fVar3 + fVar4;
  param_5[5] = fVar1 + fVar2;
  dVar26 = (double)param_5[6];
  fVar1 = (float)param_6[5];
  iVar6 = *param_6;
  fVar2 = SQRT((float)(dVar23 * dVar23 + (double)(float)(dVar22 * dVar22)));
  if ((float)param_6[7] < fVar2) {
    dVar25 = (double)((float)param_6[7] / fVar2);
    dVar24 = (double)(float)(dVar23 * dVar25);
    dVar25 = (double)(float)(dVar22 * dVar25);
    dVar23 = dVar21;
    if (0.0 - fVar2 < 0.0) {
      dVar23 = dVar24;
    }
    dVar22 = dVar21;
    if (0.0 - fVar2 < 0.0) {
      dVar22 = dVar25;
    }
    if (fVar2 - 0.0 < 0.0) {
      dVar23 = dVar24;
    }
    if (fVar2 - 0.0 < 0.0) {
      dVar22 = dVar25;
    }
    param_5[4] = (float)dVar23;
    param_5[5] = (float)dVar22;
  }
  if (iVar6 != 0) {
    *(float *)(puVar7 + 0xe) = (float)dVar23;
    *(float *)((int)puVar7 + 0x74) = (float)dVar22;
    *(float *)(puVar7 + 0xf) = (float)(ABS(dVar23) - ABS(dVar22));
    uVar16 = (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar7 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar7 + 0x74) >> 0x1d) & 4;
    dVar25 = ABS((double)*(float *)(puVar7 + 0xe));
    if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
      dVar25 = ABS(dVar22);
    }
    fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
    dVar22 = ABS((double)*(float *)((int)puVar7 + 0x74));
    if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
      dVar22 = ABS(dVar23);
    }
    fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    if (0.0 < dVar25) {
      lVar18 = uVar13 - 0xd0;
      lVar15 = uVar13 - 0x54;
      lVar17 = uVar13 - 100;
      lVar20 = 2;
      fVar4 = (float)(dVar22 - dVar25) / (float)(dVar22 + dVar25);
      fVar5 = fVar4 * fVar4;
      *(float *)(puVar7 + 0x11) = fVar4;
      *(float *)(puVar7 + 0x10) = fVar4;
      *(float *)((int)puVar7 + 0x84) = fVar4;
      *(float *)((int)puVar7 + 0x7c) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)(puVar7 + 0x10) = *(float *)(puVar7 + 0x10) * fVar5;
      *(float *)((int)puVar7 + 0x84) = *(float *)((int)puVar7 + 0x84) * fVar4;
      *(float *)(puVar7 + 0x11) = *(float *)(puVar7 + 0x11) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar18 + 0x7c) = *(float *)((int)lVar18 + 0x6c) * fVar4 * fVar4;
        iVar6 = (int)lVar17;
        lVar17 = lVar17 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)(iVar6 + 4) * fVar4 * fVar4;
        lVar15 = lVar15 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar18 = uVar13 - 100;
      lVar20 = 4;
      pfVar19 = (float *)&DAT_007358e0;
      lVar15 = lVar18;
      lVar17 = lVar14;
      do {
        fVar4 = *pfVar19;
        fVar5 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x7c) * fVar4;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar5;
        lVar15 = lVar15 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar15 = 2;
      do {
        iVar6 = (int)lVar14;
        iVar8 = (int)lVar18;
        lVar14 = lVar14 + 0x10;
        lVar18 = lVar18 + 0x10;
        dVar21 = (double)((float)(dVar21 + (double)*(float *)(iVar6 + 0x7c)) + *(float *)(iVar8 + 4)
                          + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      dVar21 = (double)((float)(dVar21 + 0.7853981852531433) * fVar2 + fVar3);
    }
    mobyutil::OrganicDeltAngSpeed
              (dVar21,(double)((float)((double)fVar1 * 0.20000000298023224) * DAT_0071f40c),
               0x3fb99999a0000000,(double)fVar1,param_4,&DAT_00720000,param_5 + 0x16);
    dVar23 = (double)param_5[4];
    dVar22 = (double)param_5[5];
  }
  fVar1 = *(float *)(param_4 + 0x48);
  fVar3 = fVar1 + 1.5707963;
  fVar2 = SQRT((float)(dVar23 * dVar23 + (double)(float)(dVar22 * dVar22)));
  fVar4 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar4 = fVar1;
  }
  fVar5 = 3.1415925 - fVar3;
  if (fVar3 - (3.1415925 - fVar3) < 0.0) {
    fVar5 = fVar3;
  }
  fVar9 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
    fVar9 = fVar4;
  }
  fVar1 = -3.1415925 - fVar3;
  if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
    fVar1 = fVar5;
  }
  fVar3 = fVar9 * fVar9;
  fVar4 = fVar1 * fVar1;
  fVar11 = fVar3 * fVar3 * fVar9;
  fVar5 = fVar4 * fVar4 * fVar1;
  fVar12 = fVar3 * fVar11;
  fVar10 = fVar4 * fVar5;
  dVar22 = -param_2;
  if (-param_2 - dVar26 < 0.0) {
    dVar22 = (double)(float)(dVar26 - param_3);
  }
  param_5[6] = (float)dVar22;
  param_5[5] = (fVar3 * fVar12 * 2.601887e-06 +
               fVar12 * -0.0001980741 + fVar11 * 0.0083330255 + fVar3 * fVar9 * -0.16666657 + fVar9)
               * fVar2;
  fVar3 = (float)param_6[4];
  param_5[4] = (fVar4 * fVar10 * 2.601887e-06 +
               fVar10 * -0.0001980741 + fVar5 * 0.0083330255 + fVar4 * fVar1 * -0.16666657 + fVar1)
               * fVar2;
  FUN_004d05b8(param_1,(double)(fVar3 * 0.25),param_4,param_5 + 4);
  return;
}



//==== 004d2438  ns=Global  size=0x354
// sig: undefined FUN_004d2438(void)
// callers(1): 00496800 mobyupdate_unsorted::UpdateMoby_86
// callees(2): 00059e20 collproc::CollSphere; 00502578 fastfunc::FastWrapRot

void FUN_004d2438(double param_1,int param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  int iVar14;
  longlong lVar13;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong unaff_r27;
  int iVar20;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  ulonglong in_f29;
  double dVar24;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar25;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar13 = uVar12 - 0xf0;
  puVar7 = (ulonglong *)lVar13;
  *puVar7 = uVar12;
  puVar7[0x20] = in_LR;
  puVar7[0x1b] = in_f29;
  puVar7[0x1c] = in_f30;
  puVar7[0x1d] = in_f31;
  fVar8 = param_3[5] + param_3[1];
  fVar9 = param_3[4] + *param_3;
  fVar10 = param_3[6] + param_3[2];
  fVar1 = *(float *)(param_4 + 0x1c);
  dVar25 = 0.0;
  fVar2 = param_3[0x12];
  fVar3 = *(float *)(param_2 + 0x10);
  puVar7[0x17] = unaff_r28;
  fVar4 = *(float *)(param_2 + 0x14);
  fVar11 = SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8);
  puVar7[0x16] = unaff_r27;
  fVar5 = *(float *)(param_2 + 0x18);
  fVar6 = *(float *)(param_2 + 0x1c);
  puVar7[0x1a] = unaff_r31;
  iVar20 = 0;
  puVar7[0x18] = unaff_r29;
  puVar7[0x19] = unaff_r30;
  fVar1 = fVar1 / fVar11;
  dVar24 = dVar25;
  if (0.0 - fVar11 < 0.0) {
    dVar24 = (double)(fVar10 * fVar1);
  }
  dVar22 = dVar25;
  if (0.0 - fVar11 < 0.0) {
    dVar22 = (double)(fVar9 * fVar1);
  }
  if (fVar11 - 0.0 < 0.0) {
    dVar24 = (double)(fVar10 * fVar1);
  }
  dVar23 = dVar25;
  if (0.0 - fVar11 < 0.0) {
    dVar23 = (double)(fVar8 * fVar1);
  }
  if (fVar11 - 0.0 < 0.0) {
    dVar22 = (double)(fVar9 * fVar1);
  }
  param_3[4] = (float)dVar22;
  if (fVar11 - 0.0 < 0.0) {
    dVar23 = (double)(fVar8 * fVar1);
  }
  fVar1 = (float)((double)fVar3 + dVar22);
  fVar3 = (float)((double)fVar4 + dVar23);
  param_3[5] = (float)dVar23;
  fVar5 = fVar5 + (float)(dVar24 / (double)fVar2);
  param_3[6] = (float)(dVar24 / (double)fVar2);
  *(float *)(param_2 + 0x10) = fVar1;
  *(float *)(param_2 + 0x14) = fVar3;
  *(float *)(param_2 + 0x18) = fVar5;
  dVar24 = 0.25;
  do {
    *(float *)(puVar7 + 0xe) = fVar1;
    *(float *)((int)puVar7 + 0x74) = fVar3;
    *(float *)((int)puVar7 + 0x7c) = fVar6;
    fVar1 = *(float *)(param_4 + 0x10);
    *(float *)(puVar7 + 0xf) = (float)((double)fVar5 + param_1);
    iVar14 = collproc::CollSphere((double)(float)((double)fVar1 * dVar24),uVar12 - 0x80);
    fVar1 = CollOutput.push.x;
    if (iVar14 == 0) break;
    iVar20 = iVar20 + 1;
    *(float *)(param_2 + 0x10) = CollOutput.push.x;
    fVar3 = CollOutput.push.y;
    *(float *)(param_2 + 0x14) = CollOutput.push.y;
    fVar6 = CollOutput.push.w;
    fVar5 = (float)((double)CollOutput.push.z - param_1);
    *(float *)(param_2 + 0x1c) = CollOutput.push.w;
    *(float *)(param_2 + 0x18) = fVar5;
  } while (iVar20 < 6);
  fVar5 = param_3[4];
  fVar1 = param_3[5];
  dVar23 = ABS((double)param_3[4]);
  dVar22 = ABS((double)param_3[5]);
  *(float *)(puVar7 + 0x10) = (float)(dVar23 - dVar22);
  uVar15 = (ulonglong)((uint)fVar5 >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar7 + 0x10) >> 0x1e) & 2 | (ulonglong)((uint)fVar1 >> 0x1d) & 4;
  dVar24 = dVar23;
  if ((double)*(float *)(puVar7 + 0x10) - dVar25 < 0.0) {
    dVar24 = dVar22;
  }
  fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
  if ((double)*(float *)(puVar7 + 0x10) - dVar25 < 0.0) {
    dVar22 = dVar23;
  }
  fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  if (dVar25 < dVar24) {
    lVar18 = uVar12 - 0xe0;
    lVar16 = uVar12 - 0x5c;
    lVar17 = uVar12 - 0x6c;
    lVar21 = 2;
    fVar2 = (float)(dVar22 - dVar24) / (float)(dVar22 + dVar24);
    fVar3 = fVar2 * fVar2;
    *(float *)(puVar7 + 0x12) = fVar2;
    *(float *)(puVar7 + 0x11) = fVar2;
    *(float *)((int)puVar7 + 0x8c) = fVar2;
    *(float *)((int)puVar7 + 0x84) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)(puVar7 + 0x11) = *(float *)(puVar7 + 0x11) * fVar3;
    *(float *)((int)puVar7 + 0x8c) = *(float *)((int)puVar7 + 0x8c) * fVar2;
    *(float *)(puVar7 + 0x12) = *(float *)(puVar7 + 0x12) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar18 + 0x84) = *(float *)((int)lVar18 + 0x74) * fVar2 * fVar2;
      iVar20 = (int)lVar17;
      lVar17 = lVar17 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)(iVar20 + 4) * fVar2 * fVar2;
      lVar16 = lVar16 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar18 = uVar12 - 0x6c;
    lVar21 = 4;
    pfVar19 = (float *)&DAT_007358e0;
    lVar16 = lVar18;
    lVar17 = lVar13;
    do {
      fVar2 = *pfVar19;
      fVar3 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar17 + 0x84) = *(float *)((int)lVar17 + 0x84) * fVar2;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
      lVar16 = lVar16 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar16 = 2;
    do {
      iVar20 = (int)lVar13;
      iVar14 = (int)lVar18;
      lVar13 = lVar13 + 0x10;
      lVar18 = lVar18 + 0x10;
      dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar20 + 0x84)) + *(float *)(iVar14 + 4)
                        + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar5 + fVar1);
  }
  dVar24 = (double)fastfunc::FastWrapRot((float)dVar25,3.1415927);
  *(float *)(param_2 + 0x48) = (float)dVar24;
  return;
}



//==== 004d278c  ns=Global  size=0x14
// sig: undefined FUN_004d278c(void)
// callers(0): 
// callees(0): 

void FUN_004d278c(void)

{
  DAT_008f92bc = 0x10000;
  return;
}



//==== 004d27a0  ns=Global  size=0x4
// sig: undefined FUN_004d27a0(void)
// callers(0): 
// callees(0): 

void FUN_004d27a0(void)

{
  return;
}



//==== 004d27b0  ns=idol_draw  size=0x66c
// sig: undefined DrawGalacticMapFrame(void)
// callers(1): 0014b5f4 pause::DrawGalacticMapFrame
// callees(14): 0006cc0c draw::FontPrintMediumLeft; 0006cde8 draw::FontLen; 0006d704 stub::STUB_0006d704; 0006d708 stub::STUB_0006d708; 0007b740 help::help_msg_string_by_index; 000ca3e4 hud::GetIconFrameTex; 000ca72c hud::DrawFlatOverlay; 000cc0f0 hud::DrawSprite; 000d721c hud::Hud_DrawEffectTexQuadUV; 000d865c hud::Hud_DrawEffectTexLine; 00174f80 vuchain::SetGSReg; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f98 FUN_00502f98

void idol_draw::DrawGalacticMapFrame(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  stub::STUB_0006d704(0);
  uVar5 = PackCmd(0,1,0,1,0x80);
  vuchain::SetGSReg(3,uVar5);
  uVar5 = FUN_00502f98(1,5,4,0,0,0,0,0);
  vuchain::SetGSReg(0x16,uVar5);
  hud::DrawFlatOverlay(0,0,0x200,0x1c0,0x80000000,0);
                    /* Galactic map texture = 0xe */
  uVar5 = hud::GetIconFrameTex(0xe99a,0xe);
  hud::Hud_DrawEffectTexQuadUV(uVar5,0,0,param_2 - param_1,param_4 - param_3,0,0,0x80);
  uVar5 = FUN_00502f08(0,0,0,0,0,0);
  vuchain::SetGSReg(6,uVar5);
                    /* Some kind of overlay texture */
  uVar5 = hud::GetIconFrameTex(0xe99a,0xf);
  hud::Hud_DrawEffectTexQuadUV
            (uVar5,0,0,param_2 - param_1,param_4 - param_3,DAT_0159c330 & 0xfff,0,0x80);
  uVar5 = FUN_00502f08(1,1,0,0,0,0);
  vuchain::SetGSReg(6,uVar5);
  dVar16 = 22.5;
  dVar15 = 8.5;
  dVar14 = 1000.0;
  uVar9 = 1;
  do {
    iVar3 = (int)((uVar9 & 0xffffffff) << 4);
    iVar1 = *(int *)(iVar3 + 0x735394);
    iVar2 = (int)uVar9;
    if ((iVar1 != 0) &&
       ((iVar6 = 3, (&VisitedPlanets.Veldin)[iVar2] != '\0' ||
        (iVar6 = ((uint)((LZCOUNT(-(uint)(byte)(&g_SeenPlanets.Veldin)[iVar2]) << 0x3a) >> 0x3f) &
                 0xfffffffe) + 2, iVar6 != 0)))) {
      iVar10 = *(int *)(iVar3 + 0x735398);
      if (Cutscene != 0) {
        iVar10 = (iVar10 * 0x1c0) / 0x1a0;
      }
      if (iVar6 == 3) {
LAB_004d2ae8:
                    /* Like a target texture or something lol like a crosshair type shi */
        uVar5 = hud::GetIconFrameTex(0xe99a,0xc);
        hud::DrawSprite(uVar5,iVar1 + -5,iVar10 + -5,10,10,0x80);
      }
      else if (iVar6 == 2) {
        iVar6 = (int)((double)animationSpeed * dVar16);
        iVar7 = iVar6 + (int)((double)animationSpeed * dVar15);
        if ((int)(DAT_0159c330 - ((int)DAT_0159c330 / iVar7) * iVar7) < iVar6) goto LAB_004d2ae8;
      }
      if (iVar2 == g_SelectedLevel) {
        iVar7 = *(int *)(iVar3 + 0x73539c);
        iVar8 = *(int *)(iVar3 + 0x7353a0);
        iVar13 = iVar1 + iVar7;
        iVar12 = iVar10 + iVar8;
        iVar6 = (int)((double)SQRT((float)(longlong)iVar7 * (float)(longlong)iVar7 +
                                   (float)(longlong)iVar8 * (float)(longlong)iVar8) * dVar14);
        iVar7 = iVar13 + (-iVar7 * (iVar6 + -8000)) / iVar6;
        iVar11 = iVar12 + (-iVar8 * (iVar6 + -8000)) / iVar6;
        uVar5 = help::help_msg_string_by_index(PlanetsPage[iVar2].subPlanetNameId);
        iVar6 = draw::FontLen((char *)uVar5,-1);
        uVar4 = (uint)((LZCOUNT(0xc - iVar2) << 0x3a) >> 0x3f) & 0xfffffff3;
        iVar8 = iVar12 + 7;
        iVar3 = iVar13 + iVar6 + (*(int *)(iVar3 + 0x73539c) >> 0x1f & iVar6 * -2);
        hud::Hud_DrawEffectTexLine(iVar7 + 7,iVar11 + 7,iVar13 + 7,iVar8,0x80000000,0);
        hud::Hud_DrawEffectTexLine(iVar13 + 7,iVar8,iVar3 + 7,iVar8,0x80000000,0);
        iVar6 = iVar13 + ((uint)((longlong)iVar3 - (longlong)iVar13 >> 0x3f) & iVar3 - iVar13);
        draw::FontPrintMediumLeft
                  (DAT_008f9334 + uVar4 + iVar6 + 1,(iVar12 - DAT_008f9330) + 1,0x80000000,uVar5,
                   0xffffffffffffffff);
        iVar8 = iVar12 + 6;
        hud::Hud_DrawEffectTexLine(iVar7 + 6,iVar11 + 6,iVar13 + 6,iVar8,0x80f0f0f0,0);
        hud::Hud_DrawEffectTexLine(iVar13 + 6,iVar8,iVar3 + 6,iVar8,0x80f0f0f0,0);
        draw::FontPrintMediumLeft
                  (DAT_008f9334 + uVar4 + iVar6,iVar12 - DAT_008f9330,0x80f0f0f0,uVar5,
                   0xffffffffffffffff);
                    /* Green circle */
        uVar5 = hud::GetIconFrameTex(0xe99a,0xd);
        hud::DrawSprite(uVar5,iVar1 + -10,iVar10 + -10,0x14,0x14,0x80);
      }
    }
    uVar9 = (ulonglong)(iVar2 + 1);
    if (0x13 < iVar2 + 1) {
      stub::STUB_0006d708();
      return;
    }
  } while( true );
}



//==== 004d2e1c  ns=Global  size=0x14
// sig: undefined FUN_004d2e1c(void)
// callers(0): 
// callees(0): 

void FUN_004d2e1c(void)

{
  DAT_008f9384 = 0x10000;
  return;
}



//==== 004d2e30  ns=Global  size=0x214
// sig: undefined UnlockPurchasableItem(void)
// callers(1): 004d3044 FUN_004d3044
// callees(1): 00112e18 mobyutil::MB_UnlockItem
// strings: 0096c165: 'None' | 0071fb2c: '������������'

void UnlockPurchasableItem(void)

{
  byte bVar1;
  uint uVar2;
  LevelId LVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  
  if ((int)Level < 0x13) {
    if (UnlockableItems.bombGlove == '\0') {
      mobyutil::MB_UnlockItem(10,1);
      g_purchasableVendorItems[0] = 'J';
      g_equippedItem = BOMB_GLOVE;
    }
    LVar3 = Level;
    iVar5 = 0;
    iVar4 = 0;
    do {
      bVar1 = g_purchasableVendorItems[iVar5];
      if (bVar1 != 0xff) {
        if ((bVar1 & 0x3f) != 10) {
          iVar7 = 0;
          puVar6 = &DAT_00737bf0;
          do {
            if (*puVar6 == (bVar1 & 0x3f)) break;
            iVar7 = iVar7 + 1;
            puVar6 = puVar6 + 1;
          } while (iVar7 < 0x13);
          if ((iVar7 == 0x13) || ((bVar1 & 0x3f) == 0)) {
            g_purchasableVendorItems[iVar5] = -1;
          }
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0xc);
    uVar2 = (&DAT_00737bf0)[LVar3];
    if (uVar2 != 0) {
      while( true ) {
        bVar1 = g_purchasableVendorItems[iVar4];
        if (bVar1 == 0xff || (bVar1 & 0x3f) == uVar2) break;
        iVar4 = iVar4 + 1;
      }
      if (bVar1 == 0xff) {
        g_purchasableVendorItems[iVar4] = (char)uVar2;
      }
    }
  }
  else {
    iVar4 = 0;
    do {
      iVar5 = iVar4 + 1;
      (&UnlockableItems.field0_0x0)[iVar4] = '\x01';
      CHAR_ARRAY_0096c165[iVar4] = '\x01';
      iVar4 = iVar5;
    } while (iVar5 < 0x25);
    builtin_strncpy(g_purchasableVendorItems,"JPOTQNKRMYXS",0xc);
    UINT_ARRAY_0096c1dc[0] = 0xf;
    UINT_ARRAY_0096c1dc[1] = 0xc;
    DAT_0096c1e4 = 0xd;
    DAT_0096c1e8 = 0xb;
    DAT_0096c1ec = 0x11;
    DAT_0096c1f0 = 10;
    DAT_0096c1f4 = 0x10;
    DAT_0096c1f8 = 0x13;
  }
  return;
}



//==== 004d3044  ns=Global  size=0x154
// sig: undefined FUN_004d3044(void)
// callers(1): 000e0e60 main::startLevel
// callees(11): 000668d0 draw::UpdateViewContext; 00068160 draw::InitViewContext; 000d89d0 initonce::InitMemSlots; 00112c20 mobyutil::MB_UnlockLevel; 0011ba2c music::music_LoadCoreBank; 0011fbb0 partupd::FillPartUpdateTable; 00174bdc vuchain::VU1_setBufSizeByLevel; 00174c24 vuchain::VU1_initChain; 001754dc stub::STUB_001754dc; 004d2e30 UnlockPurchasableItem; 005001fc fastfunc::FastMemSet

void FUN_004d3044(void)

{
  music::music_LoadCoreBank();
  vuchain::VU1_setBufSizeByLevel();
  initonce::InitMemSlots();
  loaders::g_GsRamAlloc = GSmem.base;
  DAT_00966ad4 = GSmem.base;
  fastfunc::FastMemSet(&MobyClassRef,0xffffffff87654321,0x10);
  fastfunc::FastMemSet(&MobyClassLookup,0xffffffffffffffff,0x800);
  fastfunc::FastMemSet(&MobyTexLookup,0xffffffffffffffff,0xe00);
  fastfunc::FastMemSet(&MobyMipDists,0,0xe0);
  fastfunc::FastMemSet(&DAT_00e577f0,0xffffffffffffffff,0xc00);
  fastfunc::FastMemSet(&DAT_00e59410,0xffffffffffffffff,0x800);
  fastfunc::FastMemSet(&DAT_00e58c10,0,0x80);
  draw::InitViewContext();
  draw::UpdateViewContext();
  vuchain::VU1_initChain();
  partupd::FillPartUpdateTable();
  stub::STUB_001754dc();
  UnlockPurchasableItem();
  if (Level != Veldin) {
    mobyutil::MB_UnlockLevel(Level);
  }
  g_FrameCount = g_FrameCount + 0xb4;
  return;
}



//==== 004d3198  ns=Global  size=0x14
// sig: undefined FUN_004d3198(void)
// callers(0): 
// callees(0): 

void FUN_004d3198(void)

{
  DAT_008f93f4 = 0x10000;
  return;
}



//==== 004d31b0  ns=Global  size=0x4e8
// sig: undefined FUN_004d31b0(void)
// callers(4): 00167a30 update::mode_sceneUnInit; 001693c8 update::mode_movieUnInit; 004d31b0 FUN_004d31b0; 004d3870 FUN_004d3870
// callees(10): 0007b740 help::help_msg_string_by_index; 000c8964 hud::Hud_UnregisterById; 000ccda0 hud::GetHelpLen; 0011b2c4 mobyutil::MB_GetUnspentGoldBolts; 00167e60 update::mode_sceneInit; 00168dec update::PlayInfobotMovie; 004d31b0 FUN_004d31b0; 005c8700 FUN_005c8700; 005cc8d8 libc::strcpy; 005cd2a8 libc::snprintf
// strings: 00658e50: '%d%s%03d' | 0096c165: 'None'

void FUN_004d31b0(undefined8 param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  StringId *pSVar4;
  StringId SVar5;
  undefined4 uVar6;
  char *__src;
  int iVar7;
  char *pcVar8;
  ulonglong uVar9;
  uint uVar10;
  StringId *pSVar11;
  undefined2 uVar12;
  undefined *local_170 [4];
  undefined *local_160;
  undefined *local_15c;
  char acStack_158 [32];
  char acStack_138 [264];
  
  uVar6 = worldUpdateTime;
  sVar1 = *(short *)(param_2 + 0x36);
  iVar7 = *(int *)(param_2 + 0x3c);
  pSVar4 = (StringId *)(iVar7 + sVar1 * 0x1c);
  if (iVar7 == 0) {
    return;
  }
  pSVar11 = pSVar4;
  if (param_3 != 0) {
    *(short *)(param_2 + 4) = sVar1;
    *(undefined4 *)(param_2 + 0x38) = uVar6;
    sVar2 = *(short *)((int)pSVar4 + 6);
    if (sVar1 != sVar2) {
      pSVar11 = (StringId *)(iVar7 + sVar2 * 0x1c);
      SVar5 = pSVar4[4];
      *(short *)(param_2 + 0x36) = sVar2;
      *(byte *)(param_2 + 8) = (byte)*(undefined2 *)(pSVar11 + 4) & 1;
      if ((SVar5 & 0x40000) != STR_TO_USE_YOUR_BOMB_0x0000) {
        DAT_00a15c0c = (undefined4)param_1;
        DAT_00a15c10 = param_2;
        if ((*(undefined2 *)(pSVar11 + 1) & 0x4000) == STR_TO_USE_YOUR_BOMB_0x0000) {
          hud::Hud_UnregisterById(DAT_008f9418);
          DAT_008f9418 = -1;
          update::mode_sceneInit((int)(short)*(undefined2 *)(pSVar11 + 1));
        }
        else {
          update::PlayInfobotMovie((int)(short)*(undefined2 *)(pSVar11 + 1) ^ 0x4000);
        }
      }
    }
  }
  pcVar8 = DAT_00902ec8;
  if (*(short *)(param_2 + 0x36) == -1) {
    return;
  }
  DAT_00a15c18 = *pSVar11;
  if (*(undefined2 *)(pSVar11 + 2) == STR_INFOBOT_FOR_PLANET_NOVALIS_0x0006) {
    local_170[3] = &DAT_00658e40;
    local_170[0] = &DAT_00658e38;
    local_170[1] = &DAT_00658e38;
    local_170[2] = &DAT_00658e38;
    local_160 = &DAT_00658e38;
    local_15c = &DAT_00658e40;
    __src = (char *)help::help_msg_string_by_index(DAT_00a15c18);
    libc::strcpy(pcVar8,__src);
    iVar7 = FUN_005c8700(pcVar8,&DAT_00658e48);
    if (iVar7 != 0) {
      *(undefined1 *)(iVar7 + 1) = 0x73;
    }
    uVar9 = (longlong)(int)g_Language / 6 + ((longlong)(int)g_Language >> 0x3f) & 0xffffffff;
    uVar3 = *(ushort *)(&DAT_00737d44 + (int)((longlong)*(short *)((int)pSVar11 + 10) << 3) * 3);
    libc::snprintf(acStack_158,"%d%s%03d",uVar3 / 1000,
                   ZEXT48(local_170[(int)((ulonglong)g_Language +
                                         (uVar9 - ((longlong)(uVar9 << 0x20) >> 0x3f)) * -6)]),
                   (uint)uVar3 + (uVar3 / 1000) * -1000);
    libc::snprintf(acStack_138,pcVar8,acStack_158);
  }
  else {
    pcVar8 = (char *)help::help_msg_string_by_index(DAT_00a15c18);
    libc::snprintf(acStack_138,pcVar8);
  }
  if (DAT_00a15c18 == STR_TO_USE_YOUR_BOMB_0x0000) {
    if (DAT_008f9418 != -1) {
      hud::Hud_UnregisterById(DAT_008f9418);
      DAT_008f9418 = -1;
    }
  }
  else {
    hud::GetHelpLen(acStack_138);
  }
  uVar12 = *(undefined2 *)(pSVar11 + 2);
  if (uVar12 == STR_TO_USE_YOUR_BOMB_0x0000) {
    return;
  }
  if (uVar12 == STR_INFOBOT_FOR_PLANET_NOVALIS_0x0006) {
    uVar10 = 0;
    if (((int)(uint)*(ushort *)
                     (&DAT_00737d44 + (int)((longlong)*(short *)((int)pSVar11 + 10) << 3) * 3) <=
         g_boltCount) && (iVar7 = mobyutil::MB_GetUnspentGoldBolts(), 3 < iVar7)) {
      uVar10 = 1;
    }
LAB_004d3600:
    if (uVar10 != 0) {
      uVar12 = *(undefined2 *)(pSVar11 + 3);
      goto LAB_004d3614;
    }
  }
  else {
    if (uVar12 == STR_GADGETRONS_OMNIWRENCH_8000_INCLUDES_0x0005) {
      iVar7 = mobyutil::MB_GetUnspentGoldBolts();
      uVar10 = (uint)((ulonglong)((longlong)iVar7 - (longlong)*(short *)((int)pSVar11 + 10)) >> 0x3f
                     ) ^ 1;
      goto LAB_004d3600;
    }
    if (uVar12 == STR_TO_PERFORM_A_POWERFUL_0x0004) {
      uVar10 = (uint)LZCOUNT((uint)(&MiscLevelFlags.Zoomerator)[*(short *)((int)pSVar11 + 10)]) >> 5
               ^ 1;
      goto LAB_004d3600;
    }
    if (uVar12 == STR_WELCOME_TO_THE_GADGETRON_0x0003) {
      uVar10 = 0;
      if (((&UnlockableItems.field0_0x0)[*(short *)((int)pSVar11 + 10)] != '\0') &&
         (CHAR_ARRAY_0096c165[*(short *)((int)pSVar11 + 10)] == '\0')) {
        uVar10 = 1;
      }
      goto LAB_004d3600;
    }
    if (uVar12 == STR_THATS_NANOTECH_WHENEVER_YOU_0x0002) {
      uVar10 = (uint)LZCOUNT((uint)(&UnlockableItems.field0_0x0)[*(short *)((int)pSVar11 + 10)]) >>
               5 ^ 1;
      goto LAB_004d3600;
    }
    if (uVar12 == STR_YOU_JUST_PICKED_UP_0x0001) {
      uVar10 = (uint)((ulonglong)
                      ((longlong)g_boltCount -
                      (longlong)
                      *(int *)(&DAT_00737d30 +
                              (int)((longlong)*(short *)((int)pSVar11 + 10) << 3) * 3)) >> 0x3f) ^ 1
      ;
      goto LAB_004d3600;
    }
  }
  uVar12 = *(undefined2 *)((int)pSVar11 + 0xe);
LAB_004d3614:
  if (uVar12 != *(short *)(param_2 + 0x36)) {
    *(undefined2 *)(param_2 + 0x36) = uVar12;
    *(undefined4 *)(param_2 + 0x38) = worldUpdateTime;
    *(byte *)(param_2 + 8) =
         (byte)*(undefined2 *)
                (*(int *)(param_2 + 0x3c) +
                 ((int)((longlong)(short)uVar12 << 5) - (int)((longlong)(short)uVar12 << 2)) + 0x10)
         & 1;
    FUN_004d31b0(param_1,param_2,0);
  }
  return;
}



//==== 004d3698  ns=Global  size=0x88
// sig: undefined FUN_004d3698(void)
// callers(1): 004b0698 mobyupdate_unsorted::UpdateMoby_918
// callees(0): 

int FUN_004d3698(int param_1)

{
  int iVar1;
  
  if (((int)Level < 0) || (0x12 < (int)Level)) {
    iVar1 = 0;
  }
  else {
    for (iVar1 = *(int *)(&DAT_00738138 + Level * 4); iVar1 < *(int *)(&DAT_0073813c + Level * 4);
        iVar1 = iVar1 + 1) {
      if (*(int *)(&DAT_00a15d40 + iVar1 * 4) == param_1) {
        return iVar1;
      }
    }
    iVar1 = -1;
  }
  return iVar1;
}



//==== 004d3720  ns=Global  size=0x13c
// sig: undefined FUN_004d3720(void)
// callers(31): 001be558 mobyupdate_unsorted::UpdateMoby_1105; 001d8090 mobyupdate_unsorted::UpdateMoby_1130; 001dd210 mobyupdate_helpers::M1140_001dd210; 001df770 mobyupdate_unsorted::UpdateMoby_1144; 001f1b50 mobyupdate_unsorted::UpdateMoby_1190; 00237e98 mobyupdate_unsorted::UpdateMoby_1283; 00245840 mobyupdate_unsorted::UpdateMoby_1316; 0025d3a8 mobyupdate_unsorted::UpdateMoby_1377; 00267af8 mobyupdate_unsorted::UpdateMoby_{1389_1446}; 00284e60 mobyupdate_unsorted::UpdateMoby_1455; 002acf90 mobyupdate_unsorted::UpdateMoby_17; 0032cef0 mobyupdate_unsorted::UpdateMoby_282; 003361b0 mobyupdate_unsorted::UpdateMoby_298; 00339b70 mobyupdate_unsorted::UpdateMoby_a_lot_15; 00343330 mobyupdate_unsorted::UpdateMoby_328; 004556e0 mobyupdate_unsorted::UpdateMoby_774; 0045b190 mobyupdate_unsorted::UpdateMoby_786; 0045d0f8 mobyupdate_unsorted::UpdateMoby_788; 00481350 mobyupdate_unsorted::UpdateMoby_834; 0048d9d8 mobyupdate_unsorted::UpdateMoby_851; 004a2d38 mobyupdate_unsorted::UpdateMoby_890; 004a4bd0 mobyupdate_unsorted::UpdateMoby_90; 004a8ec0 mobyupdate_unsorted::UpdateMoby_909; 004af4b0 mobyupdate_unsorted::UpdateMoby_914; 004b0698 mobyupdate_unsorted::UpdateMoby_918
// callees(0): 
// strings: 0096c24c: 'None'

ulonglong FUN_004d3720(int param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  short sVar3;
  
  if (((int)Level < 0) || (0x12 < (int)Level)) {
    uVar1 = 0;
LAB_004d37b0:
    iVar2 = (int)((uVar1 & 0xffffffff) << 2);
    if (*(int *)(&DAT_008fa1ac + iVar2) == 0) {
      uVar1 = 0xffffffffffffffff;
    }
    else {
      *(undefined1 *)(param_2 + 9) = 1;
      sVar3 = 0;
      *(undefined4 *)(param_2 + 0x38) = worldUpdateTime;
      *(undefined2 *)(param_2 + 4) = 0xffff;
      iVar2 = *(int *)(&DAT_008fa1ac + iVar2);
      *(undefined2 *)(param_2 + 0x36) = 0;
      *(int *)(param_2 + 0x3c) = iVar2;
      if ((*(int *)(g_KeyLevelFlags + (int)((uVar1 & 0xffffffff) << 4) + 0xc) != 0) &&
         (*(short *)(iVar2 + 8) == 0)) {
        sVar3 = *(short *)(iVar2 + 6);
        *(short *)(param_2 + 0x36) = sVar3;
      }
      *(byte *)(param_2 + 8) =
           (byte)*(undefined2 *)
                  (iVar2 + ((int)((longlong)sVar3 << 5) - (int)((longlong)sVar3 << 2)) + 0x10) & 1;
    }
  }
  else {
    for (iVar2 = *(int *)(&DAT_00738138 + Level * 4); iVar2 < *(int *)(&DAT_0073813c + Level * 4);
        iVar2 = iVar2 + 1) {
      uVar1 = (ulonglong)iVar2;
      if (*(int *)(&DAT_00a15d40 + iVar2 * 4) == param_1) {
        if (iVar2 == -1) {
          return uVar1;
        }
        goto LAB_004d37b0;
      }
    }
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}



//==== 004d3870  ns=Global  size=0x80c
// sig: undefined FUN_004d3870(void)
// callers(31): 001be558 mobyupdate_unsorted::UpdateMoby_1105; 001d8090 mobyupdate_unsorted::UpdateMoby_1130; 001dd210 mobyupdate_helpers::M1140_001dd210; 001df770 mobyupdate_unsorted::UpdateMoby_1144; 001f1b50 mobyupdate_unsorted::UpdateMoby_1190; 00237e98 mobyupdate_unsorted::UpdateMoby_1283; 00245840 mobyupdate_unsorted::UpdateMoby_1316; 0025d3a8 mobyupdate_unsorted::UpdateMoby_1377; 00267af8 mobyupdate_unsorted::UpdateMoby_{1389_1446}; 00284e60 mobyupdate_unsorted::UpdateMoby_1455; 002acf90 mobyupdate_unsorted::UpdateMoby_17; 0032cef0 mobyupdate_unsorted::UpdateMoby_282; 003361b0 mobyupdate_unsorted::UpdateMoby_298; 00339b70 mobyupdate_unsorted::UpdateMoby_a_lot_15; 00343330 mobyupdate_unsorted::UpdateMoby_328; 00371520 mobyupdate_unsorted::UpdateMoby_429; 004556e0 mobyupdate_unsorted::UpdateMoby_774; 0045b190 mobyupdate_unsorted::UpdateMoby_786; 0045d0f8 mobyupdate_unsorted::UpdateMoby_788; 00481350 mobyupdate_unsorted::UpdateMoby_834; 0048d9d8 mobyupdate_unsorted::UpdateMoby_851; 004a2d38 mobyupdate_unsorted::UpdateMoby_890; 004a4bd0 mobyupdate_unsorted::UpdateMoby_90; 004a8ec0 mobyupdate_unsorted::UpdateMoby_909; 004af4b0 mobyupdate_unsorted::UpdateMoby_914
// callees(8): 000c8444 hud::RegisterHUDCallback; 000c8964 hud::Hud_UnregisterById; 000c90a0 hud::Hud_ShowEntryById; 00167e60 update::mode_sceneInit; 00168dec update::PlayInfobotMovie; 004d31b0 FUN_004d31b0; 004d3720 FUN_004d3720; 005026a0 fastfunc::FastSubRots
// strings: 0096c24c: 'None'

undefined8 FUN_004d3870(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  short sVar7;
  uint uVar8;
  ulonglong *puVar9;
  int iVar10;
  char *pcVar11;
  PlayerState PVar12;
  undefined8 uVar13;
  longlong lVar14;
  int iVar15;
  float *pfVar17;
  longlong lVar16;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  ulonglong in_f30;
  double dVar26;
  ulonglong in_f31;
  double dVar27;
  
  uVar20 = ZEXT48(&stack0x00000000);
  lVar21 = uVar20 - 0x110;
  puVar9 = (ulonglong *)lVar21;
  *puVar9 = uVar20;
  puVar9[0x24] = in_LR;
  puVar9[0x20] = in_f30;
  puVar9[0x21] = in_f31;
  puVar9[0x1c] = unaff_r28;
  puVar9[0x1f] = unaff_r31;
  puVar9[0x1e] = unaff_r30;
  PVar12 = g_heroState;
  puVar9[0x1d] = unaff_r29;
  if (PVar12 == VISIBOMB_CONTROL) {
    uVar13 = 0;
  }
  else if (g_heroHealth == 0) {
    uVar13 = 0;
  }
  else {
    if (*(char *)(param_2 + 9) == '\0') {
      FUN_004d3720(param_1,param_2);
    }
    if (g_gameMode == GAME_MODE_NORMAL) {
      if (param_2 == 0) {
        uVar13 = 0;
      }
      else if (*(short *)(param_2 + 0x36) == -1) {
        uVar13 = 0;
      }
      else if (*(char *)(param_2 + 8) == -1) {
        uVar13 = 0;
      }
      else {
        fVar1 = *(float *)(param_1 + 0x14) - g_heroPosition.y;
        fVar5 = *(float *)(param_1 + 0x10) - g_heroPosition.x;
        fVar2 = *(float *)(param_1 + 0x18) - g_heroPosition.z;
        if (SQRT(fVar2 * fVar2 + fVar5 * fVar5 + fVar1 * fVar1) <= *(float *)(param_2 + 0xc) * 2.0)
        {
          if (*(char *)(param_2 + 8) == '\0') {
            fVar1 = g_heroPosition.x - *(float *)(param_1 + 0x10);
            fVar2 = g_heroPosition.y - *(float *)(param_1 + 0x14);
            fVar3 = ABS(fVar1);
            fVar5 = ABS(fVar2);
            *(float *)((int)puVar9 + 0x7c) = fVar1;
            *(float *)(puVar9 + 0x10) = fVar2;
            *(float *)((int)puVar9 + 0x84) = fVar3 - fVar5;
            dVar26 = 0.0;
            uVar18 = (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1d) & 4;
            fVar2 = ABS(*(float *)((int)puVar9 + 0x7c));
            if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
              fVar2 = fVar5;
            }
            fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
            fVar1 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
            fVar4 = ABS(*(float *)(puVar9 + 0x10));
            if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
              fVar4 = fVar3;
            }
            dVar27 = 0.7853981852531433;
            dVar23 = dVar26;
            if (0.0 < fVar2) {
              lVar14 = uVar20 - 0x100;
              lVar16 = uVar20 - 0x68;
              lVar19 = uVar20 - 0x58;
              lVar22 = 2;
              fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
              fVar3 = fVar2 * fVar2;
              *(float *)((int)puVar9 + 0xb4) = fVar2;
              *(float *)((int)puVar9 + 0xac) = fVar2;
              *(float *)(puVar9 + 0x16) = fVar2;
              *(float *)(puVar9 + 0x15) = fVar2;
              fVar2 = fVar3 * fVar3;
              *(float *)((int)puVar9 + 0xac) = *(float *)((int)puVar9 + 0xac) * fVar3;
              *(float *)(puVar9 + 0x16) = *(float *)(puVar9 + 0x16) * fVar2;
              *(float *)((int)puVar9 + 0xb4) = *(float *)((int)puVar9 + 0xb4) * fVar2 * fVar3;
              do {
                *(float *)((int)lVar14 + 0xa8) = *(float *)((int)lVar14 + 0x98) * fVar2 * fVar2;
                iVar15 = (int)lVar16;
                lVar14 = lVar14 + 8;
                lVar16 = lVar16 + 8;
                *(float *)((int)lVar19 + 4) = *(float *)(iVar15 + 4) * fVar2 * fVar2;
                lVar19 = lVar19 + 8;
                lVar22 = lVar22 + -1;
              } while (lVar22 != 0);
              lVar22 = 4;
              lVar19 = uVar20 - 0x68;
              pfVar17 = (float *)&DAT_007358e0;
              lVar14 = lVar21;
              lVar16 = lVar19;
              do {
                fVar2 = *pfVar17;
                fVar3 = pfVar17[1];
                pfVar17 = pfVar17 + 2;
                *(float *)((int)lVar14 + 0xa8) = *(float *)((int)lVar14 + 0xa8) * fVar2;
                lVar14 = lVar14 + 8;
                *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
                lVar16 = lVar16 + 8;
                lVar22 = lVar22 + -1;
              } while (lVar22 != 0);
              lVar16 = 2;
              lVar14 = lVar21;
              do {
                iVar15 = (int)lVar14;
                lVar14 = lVar14 + 0x10;
                iVar10 = (int)lVar19;
                lVar19 = lVar19 + 0x10;
                dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar15 + 0xa8)) +
                                  *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                                 *(float *)(iVar10 + 0xc));
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
              dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar5 + fVar1);
            }
            dVar23 = (double)fastfunc::FastSubRots((float)dVar23,*(float *)(param_1 + 0x48));
            fVar2 = g_heroRotation.z;
            if ((double)*(float *)(param_2 + 0xc) < dVar23) {
              return 0;
            }
            fVar1 = *(float *)(param_1 + 0x10) - g_heroPosition.x;
            fVar5 = *(float *)(param_1 + 0x14) - g_heroPosition.y;
            dVar24 = ABS((double)fVar1);
            dVar25 = ABS((double)fVar5);
            *(float *)(puVar9 + 0xe) = fVar1;
            *(float *)((int)puVar9 + 0x74) = fVar5;
            *(float *)(puVar9 + 0xf) = (float)(dVar24 - dVar25);
            uVar18 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
            dVar23 = ABS((double)*(float *)(puVar9 + 0xe));
            if ((double)*(float *)(puVar9 + 0xf) - dVar26 < 0.0) {
              dVar23 = dVar25;
            }
            fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
            dVar25 = ABS((double)*(float *)((int)puVar9 + 0x74));
            if ((double)*(float *)(puVar9 + 0xf) - dVar26 < 0.0) {
              dVar25 = dVar24;
            }
            fVar5 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
            if (dVar26 < dVar23) {
              lVar14 = uVar20 - 0x100;
              lVar19 = uVar20 - 0x78;
              lVar16 = uVar20 - 0x88;
              lVar22 = 2;
              fVar3 = (float)(dVar25 - dVar23) / (float)(dVar25 + dVar23);
              fVar4 = fVar3 * fVar3;
              *(float *)((int)puVar9 + 0x94) = fVar3;
              *(float *)((int)puVar9 + 0x8c) = fVar3;
              *(float *)(puVar9 + 0x12) = fVar3;
              *(float *)(puVar9 + 0x11) = fVar3;
              fVar3 = fVar4 * fVar4;
              *(float *)((int)puVar9 + 0x8c) = *(float *)((int)puVar9 + 0x8c) * fVar4;
              *(float *)(puVar9 + 0x12) = *(float *)(puVar9 + 0x12) * fVar3;
              *(float *)((int)puVar9 + 0x94) = *(float *)((int)puVar9 + 0x94) * fVar3 * fVar4;
              do {
                *(float *)((int)lVar14 + 0x88) = *(float *)((int)lVar14 + 0x78) * fVar3 * fVar3;
                iVar15 = (int)lVar16;
                lVar16 = lVar16 + 8;
                lVar14 = lVar14 + 8;
                *(float *)((int)lVar19 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
                lVar19 = lVar19 + 8;
                lVar22 = lVar22 + -1;
              } while (lVar22 != 0);
              lVar22 = 4;
              lVar19 = uVar20 - 0x88;
              pfVar17 = (float *)&DAT_007358e0;
              lVar14 = lVar21;
              lVar16 = lVar19;
              do {
                fVar3 = *pfVar17;
                fVar4 = pfVar17[1];
                pfVar17 = pfVar17 + 2;
                *(float *)((int)lVar14 + 0x88) = *(float *)((int)lVar14 + 0x88) * fVar3;
                lVar14 = lVar14 + 8;
                *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
                lVar16 = lVar16 + 8;
                lVar22 = lVar22 + -1;
              } while (lVar22 != 0);
              lVar14 = 2;
              do {
                iVar15 = (int)lVar21;
                iVar10 = (int)lVar19;
                lVar21 = lVar21 + 0x10;
                lVar19 = lVar19 + 0x10;
                dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar15 + 0x88)) +
                                  *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                                 *(float *)(iVar10 + 0xc));
                lVar14 = lVar14 + -1;
              } while (lVar14 != 0);
              dVar26 = (double)((float)(dVar26 + dVar27) * fVar1 + fVar5);
            }
            dVar26 = (double)fastfunc::FastSubRots((float)dVar26,fVar2);
            if (1.5700000524520874 < dVar26) {
              return 0;
            }
          }
          FUN_004d31b0(param_1,param_2,0);
          if (worldUpdateTime < DAT_00a15c14) {
            uVar13 = 0;
          }
          else if ((*(char *)(param_2 + 8) == '\0') && ((g_buttonsPressedThisFrame & TRIANGLE) == 0)
                  ) {
            iVar15 = hud::Hud_ShowEntryById(DAT_008f9418,10);
            if (iVar15 != 0) {
              DAT_008f9418 = hud::RegisterHUDCallback
                                       (0xc,0,&PTR_PromptHud_Init_00705750,
                                        &PTR_PromptHud_Update_00705758,&PTR_Draw_PromptMsg_00705788,
                                        (int *)0x0,0);
            }
            sVar7 = *(short *)(*(int *)(param_2 + 0x3c) +
                               ((int)((longlong)*(short *)(param_2 + 0x36) << 5) -
                               (int)((longlong)*(short *)(param_2 + 0x36) << 2)) + 8);
            if ((sVar7 == 1) || (sVar7 == 6)) {
              iVar15 = hud::RegisterHUDCallback
                                 (2,0x754e,&PTR_BoltHud_Init_00705810,&PTR_BoltHud_Update_00705818,
                                  &PTR_Draw_BoltCountUI_00705820,&g_boltCount,9999999);
              puVar9[0x19] = (longlong)(int)(animationSpeed * 60.5);
              hud::Hud_ShowEntryById(iVar15,*(int *)((int)puVar9 + 0xcc));
            }
            uVar13 = 0;
          }
          else {
            if (((int)Level < 0) || (0x12 < (int)Level)) {
              uVar20 = 0;
            }
            else {
              uVar8 = *(uint *)(&DAT_00738138 + Level * 4);
              uVar20 = (ulonglong)uVar8;
              if ((int)uVar8 < *(int *)(&DAT_0073813c + Level * 4)) {
                lVar21 = ((ulonglong)uVar8 & 0x3fffffff) << 2;
                do {
                  if (*(int *)(&DAT_00a15d40 + (int)lVar21) == param_1) goto LAB_004d3e20;
                  uVar20 = uVar20 + 1;
                  lVar21 = lVar21 + 4;
                } while ((int)uVar20 < *(int *)(&DAT_0073813c + Level * 4));
              }
              uVar20 = 0xffffffffffffffff;
            }
LAB_004d3e20:
            iVar15 = (int)(uVar20 << 4);
            if (*(int *)(g_KeyLevelFlags + iVar15 + 0xc) == 0) {
              pcVar11 = g_KeyLevelFlags + iVar15 + 0xc;
              pcVar11[0] = '\0';
              pcVar11[1] = '\0';
              pcVar11[2] = '\0';
              pcVar11[3] = '\x01';
            }
            iVar15 = *(int *)(param_2 + 0x3c) +
                     ((int)((longlong)*(short *)(param_2 + 0x36) << 5) -
                     (int)((longlong)*(short *)(param_2 + 0x36) << 2));
            DAT_00a15c0c = param_1;
            DAT_00a15c10 = param_2;
            if ((*(ushort *)(iVar15 + 0x10) & 8) != 0) {
              if (*(short *)(iVar15 + 8) == 1) {
                g_boltCount = g_boltCount -
                              *(int *)(&DAT_00737d30 +
                                      (int)((longlong)*(short *)(iVar15 + 10) << 3) * 3);
              }
              else if (*(short *)(iVar15 + 8) == 4) {
                (&MiscLevelFlags.Zoomerator)[*(short *)(iVar15 + 10)] = false;
              }
            }
            uVar6 = *(ushort *)(iVar15 + 4);
            if (uVar6 == 0xffff) {
              FUN_004d31b0(param_1,param_2,1);
            }
            else if ((uVar6 & 0x4000) == 0) {
              DAT_00a15c0c = param_1;
              DAT_00a15c10 = param_2;
              hud::Hud_UnregisterById(DAT_008f9418);
              DAT_008f9418 = -1;
              update::mode_sceneInit((int)*(short *)(iVar15 + 4));
            }
            else {
              DAT_00a15c0c = param_1;
              DAT_00a15c10 = param_2;
              update::PlayInfobotMovie((int)(short)uVar6 ^ 0x4000);
            }
            uVar13 = 1;
          }
        }
        else {
          uVar13 = 0;
        }
      }
    }
    else {
      uVar13 = 0;
    }
  }
  return uVar13;
}



//==== 004d407c  ns=Global  size=0x9c
// sig: undefined FUN_004d407c(void)
// callers(13): 00186e60 mobyupdate_unsorted::UpdateMoby_1012; 001c1e18 mobyupdate_helpers::M1106_001c1e18; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 001dd210 mobyupdate_helpers::M1140_001dd210; 00222fe0 mobyupdate_unsorted::UpdateMoby_1243; 0024a600 mobyupdate_unsorted::UpdateMoby_1326; 002708f0 mobyupdate_unsorted::UpdateMoby_1410; 0042e8f0 mobyupdate_unsorted::UpdateMoby_712; 0044b5f0 mobyupdate_unsorted::UpdateMoby_750; 0046e420 mobyupdate_unsorted::UpdateMoby_816; 00477b98 mobyupdate_unsorted::UpdateMoby_822; 004b2db8 mobyupdate_unsorted::UpdateMoby_{447_920}; 004cfcc8 mobyupdate_unsorted::UpdateMoby_998
// callees(0): 
// strings: 0096c24c: 'None'

void FUN_004d407c(int param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  
  if (((int)Level < 0) || (0x12 < (int)Level)) {
    uVar1 = 0;
LAB_004d4100:
    *(undefined4 *)(g_KeyLevelFlags + uVar1 * 0x10 + 0xc) = param_2;
  }
  else {
    uVar1 = *(uint *)(&DAT_00738138 + Level * 4);
    if ((int)uVar1 < *(int *)(&DAT_0073813c + Level * 4)) {
      lVar2 = ((ulonglong)uVar1 & 0x3fffffff) << 2;
      do {
        if (*(int *)(&DAT_00a15d40 + (int)lVar2) == param_1) {
          if (uVar1 == 0xffffffff) {
            return;
          }
          goto LAB_004d4100;
        }
        uVar1 = uVar1 + 1;
        lVar2 = lVar2 + 4;
      } while ((int)uVar1 < *(int *)(&DAT_0073813c + Level * 4));
    }
  }
  return;
}



//==== 004d4118  ns=Global  size=0x14
// sig: undefined FUN_004d4118(void)
// callers(0): 
// callees(0): 

void FUN_004d4118(void)

{
  DAT_008fa3dc = 0x10000;
  return;
}



//==== 004d4138  ns=Global  size=0x1e8
// sig: undefined FUN_004d4138(void)
// callers(3): 00202b98 mobyupdate_unsorted::UpdateMoby_121; 0022bb60 mobyupdate_helpers::M1261_0022bb60; 0048b288 mobyupdate_helpers::M849_0048b288
// callees(4): 000efa28 mobyfunc::CreateMoby; 000f1ec8 mobyfunc::SetColorOfMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat

MobyInstance *
FUN_004d4138(double param_1,undefined4 param_2,f32 *param_3,undefined4 *param_4,undefined8 param_5,
            undefined4 param_6,ulonglong param_7,ulonglong param_8,ulonglong param_9)

{
  float fVar1;
  undefined4 *puVar2;
  MobyInstance *pMVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  byte in_stack_00000077;
  
  pMVar3 = mobyfunc::CreateMoby(EXPLOSION_04A8);
  if (pMVar3 != (MobyInstance *)0x0) {
    puVar2 = (undefined4 *)pMVar3->pVar;
    dVar7 = -3.1415927410125732;
    dVar6 = 3.1415927410125732;
    dVar4 = (double)mobyutil::MB_randRangeFloat(-3.1415927,3.1415927);
    dVar5 = (double)mobyutil::MB_randRangeFloat((float)dVar7,(float)dVar6);
    dVar6 = (double)mobyutil::MB_randRangeFloat((float)dVar7,(float)dVar6);
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = 0xff;
    pMVar3->enabled = '\x01';
    pMVar3->state = '\0';
    pMVar3->alpha = in_stack_00000077;
    mobyfunc::SetColorOfMoby(pMVar3,param_7 & 0xff,param_8 & 0xff,param_9 & 0xff);
    fVar1 = pMVar3->scale;
    puVar2[4] = param_2;
    puVar2[5] = param_6;
    *(short *)(puVar2 + 7) = (short)param_6;
    *(ushort *)((int)puVar2 + 0x1e) = (ushort)in_stack_00000077;
    puVar2[6] = (float)((double)fVar1 * param_1);
    pMVar3->scale = 0.0;
    (pMVar3->pos).x = *param_3;
    (pMVar3->pos).y = param_3[1];
    (pMVar3->pos).z = param_3[2];
    (pMVar3->pos).w = param_3[3];
    *puVar2 = *param_4;
    puVar2[1] = param_4[1];
    puVar2[2] = param_4[2];
    puVar2[3] = param_4[3];
    (pMVar3->rotation).x = (float)dVar4;
    (pMVar3->rotation).y = (float)dVar5;
    (pMVar3->rotation).z = (float)dVar6;
    (pMVar3->rotation).w = 0.0;
    mobyfunc::UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}



//==== 004d4328  ns=Global  size=0xdc
// sig: undefined FUN_004d4328(void)
// callers(0): 
// callees(0): 

void FUN_004d4328(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 in_r0;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
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
  
  iVar2 = (int)param_1;
  auVar3 = ZEXT416(0xffffffff);
  auVar7 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
  auVar3 = ZEXT416(0xffffffff);
  auVar9 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
  auVar3 = loadVectorLeftIndexed(in_r0,(ulonglong)*(uint *)(iVar2 + 8));
  auVar5 = loadVectorLeftIndexed(4,(ulonglong)*(uint *)(iVar2 + 8));
  auVar4 = vectorConvertFromUnsignedFixedPointWord(auVar3,0);
  auVar6 = vectorConvertFromUnsignedFixedPointWord(auVar5,0);
  auVar3 = loadVectorLeftIndexed(in_r0,0x4d4320);
  auVar8 = vectorShiftLeftIntegerWord(auVar7,auVar7);
  auVar3 = auVar3 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar7 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
  auVar9 = vectorShiftLeftIntegerWord(auVar9,auVar9);
  auVar3 = ZEXT416(0xffffffff);
  auVar11 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
  auVar3 = ZEXT416(0xffffffff);
  auVar13 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
  auVar3 = ZEXT416(0xffffffff);
  auVar5 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
  auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
  auVar11 = vectorReciprocalEstimateFloatingPoint(auVar4);
  auVar10 = vectorReciprocalEstimateFloatingPoint(auVar6);
  auVar13 = vectorShiftLeftIntegerWord(auVar13,auVar13);
  auVar3 = ZEXT416(0xffffffff);
  auVar16 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
  auVar3 = vectorNegativeMultiplySubtractFloatingPoint(auVar11,auVar4,auVar7);
  auVar14 = vectorNegativeMultiplySubtractFloatingPoint(auVar10,auVar6,auVar7);
  auVar8 = vectorMultiplyAddFloatingPoint(auVar11,auVar3,auVar8);
  auVar9 = vectorMultiplyAddFloatingPoint(auVar10,auVar14,auVar9);
  auVar3 = ZEXT416(0xffffffff);
  auVar3 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
  auVar11 = loadVectorLeftIndexed(0x14,param_1);
  auVar10 = vectorShiftLeftIntegerWord(auVar3,auVar3);
  auVar3 = vectorNegativeMultiplySubtractFloatingPoint(auVar8,auVar4,auVar7);
  auVar14 = vectorNegativeMultiplySubtractFloatingPoint(auVar9,auVar6,auVar7);
  auVar8 = vectorMultiplyAddFloatingPoint(auVar8,auVar3,auVar12);
  auVar9 = vectorMultiplyAddFloatingPoint(auVar9,auVar14,auVar13);
  auVar13 = vectorShiftLeftIntegerWord(auVar5,auVar5);
  auVar3 = ZEXT416(0xffffffff);
  auVar15 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
  auVar12 = vectorShiftLeftIntegerWord(auVar16,auVar16);
  auVar14 = loadVectorLeftIndexed(0x18,param_1);
  auVar3 = vectorNegativeMultiplySubtractFloatingPoint(auVar8,auVar4,auVar7);
  auVar5 = vectorNegativeMultiplySubtractFloatingPoint(auVar9,auVar6,auVar7);
  auVar4 = vectorShiftLeftIntegerWord(auVar15,auVar15);
  auVar3 = vectorMultiplyAddFloatingPoint(auVar8,auVar3,auVar10);
  auVar5 = vectorMultiplyAddFloatingPoint(auVar9,auVar5,auVar13);
  auVar3 = vectorMultiplyAddFloatingPoint(auVar3,auVar11,auVar12);
  auVar5 = vectorMultiplyAddFloatingPoint(auVar5,auVar14,auVar4);
  auVar4 = vectorCompareGreaterThanFloatingPoint(auVar5,auVar3);
  auVar3 = vectorConditionalSelect(auVar5,auVar3,auVar4);
  auVar3 = auVar3 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar1 = storeVectorElementWordIndexed
                    (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x28,param_1);
  *(undefined4 *)(iVar2 + 0x28U & 0xfffffffc) = uVar1;
  *(undefined4 *)(iVar2 + 0x1c) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0x20) = 0x3f800000;
  return;
}



//==== 004d4404  ns=Global  size=0x18
// sig: undefined FUN_004d4404(void)
// callers(0): 
// callees(0): 

void FUN_004d4404(undefined8 param_1,int param_2)

{
  if (*(int *)(param_2 + 0xa0) != 0) {
    *(undefined4 *)(param_2 + 0xa0) = 0;
  }
  return;
}



//==== 004d441c  ns=Global  size=0x84
// sig: undefined FUN_004d441c(void)
// callers(0): 
// callees(0): 

void FUN_004d441c(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_2 = *(undefined4 *)(param_1 + 0x14);
  bVar1 = *param_1;
  bVar2 = param_1[1];
  param_2[2] = 0x10303;
  uVar4 = *(undefined4 *)(param_1 + 8);
  param_2[1] = (uint)bVar2 << 0x10 | (uint)bVar1 << 8 | 0x8028 | 2;
  param_2[3] = (uint)bVar2 * 0x8000 - 0x8000 | 0x80000000;
  uVar3 = *(undefined4 *)(param_1 + 4);
  param_2[5] = 0x2062000;
  param_2[4] = uVar3;
  param_2[6] = uVar4;
  param_2[7] = *(uint *)(param_1 + 0x10) | 0x100000;
  return;
}



//==== 004d44a0  ns=Global  size=0x9c
// sig: undefined FUN_004d44a0(void)
// callers(1): 004d46cc FUN_004d46cc
// callees(0): 

bool FUN_004d44a0(undefined2 param_1,int param_2,undefined4 *param_3,int param_4,int param_5)

{
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)(param_4 + (param_2 * param_5 + 0x7fU & 0xffffff80));
  *puVar2 = 0xa1;
  puVar2[1] = 1;
  puVar2[3] = 0;
  puVar2[2] = 2;
  puVar2[0xe] = 1;
  *(undefined2 *)(puVar2 + 8) = param_1;
  *(undefined4 *)(puVar2 + 4) = 0xaae4;
  iVar1 = g_viewMtxPtr;
  *(short *)(puVar2 + 10) = (short)param_2;
  *(undefined2 *)(puVar2 + 0xc) = 1;
  *(int *)(puVar2 + 0x10) = param_5;
  param_4 = param_4 - *(int *)(iVar1 + 0x4a8);
  *(int *)(puVar2 + 0x14) = param_4;
  if (param_4 != 0) {
    *param_3 = puVar2;
  }
  return param_4 != 0;
}



//==== 004d453c  ns=Global  size=0x190
// sig: undefined FUN_004d453c(void)
// callers(1): 004d46cc FUN_004d46cc
// callees(0): 

void FUN_004d453c(int param_1,int *param_2,int *param_3,int *param_4,int *param_5,uint *param_6,
                 int *param_7)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 4);
  uVar4 = iVar7 + ((uint)((LZCOUNT(-*(int *)(param_1 + 0x18)) << 0x3a) >> 0x3f) & -iVar7);
  uVar1 = *(int *)(param_1 + 0xc) + 0xfU & 0xfffffff0;
  uVar6 = iVar7 + ((uint)((LZCOUNT(-*(int *)(param_1 + 0x3c)) << 0x3a) >> 0x3f) & -iVar7);
  iVar5 = uVar1 + ((uint)((LZCOUNT(-*(int *)(param_1 + 0x24)) << 0x3a) >> 0x3f) & -uVar1);
  uVar1 = *(int *)(param_1 + 8) * uVar4 + 0x7f & 0xffffff80;
  uVar2 = uVar6 * *(int *)(param_1 + 8) + 0x7f & 0xffffff80;
  uVar3 = (longlong)*(int *)(param_1 + 0x10) * (longlong)iVar5 + 0x7fU & 0xffffff80;
  iVar7 = uVar1 + 0x80 + ((uint)((LZCOUNT(-uVar1) << 0x3a) >> 0x3f) & uVar1 - (uVar1 + 0x80));
  *param_4 = iVar7;
  iVar7 = uVar2 + 0x80 + ((uint)((LZCOUNT(-uVar2) << 0x3a) >> 0x3f) & uVar2 - (uVar2 + 0x80)) +
          iVar7;
  uVar3 = uVar3 + 0x80 + ((LZCOUNT(-(int)uVar3) << 0x3a) >> 0x3f & uVar3 - (uVar3 + 0x80));
  *param_2 = iVar7;
  *param_3 = iVar7 + (int)uVar3;
  *param_5 = iVar7 + (int)((uVar3 & 0xffffffff) << 1);
  *param_6 = uVar4 | uVar6;
  *param_7 = iVar5;
  return;
}



//==== 004d46cc  ns=Global  size=0x474
// sig: undefined FUN_004d46cc(void)
// callers(1): 004d4dd0 FUN_004d4dd0
// callees(3): 004d44a0 FUN_004d44a0; 004d453c FUN_004d453c; 004fe098 idol::AllocateMemAlign

undefined8 FUN_004d46cc(int param_1,undefined8 param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int *piVar13;
  int *piVar14;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  int local_60;
  int local_5c [3];
  
  FUN_004d453c(param_3,&local_70,&local_6c,&local_68,&local_64,&local_60,local_5c);
  iVar9 = local_64 * *param_3 + 0x80;
  *(int *)(param_1 + 0x58) = iVar9;
  uVar7 = idol::AllocateMemAlign(param_2,iVar9,0x80);
  iVar9 = 0;
  param_3[0x28] = (int)uVar7;
  *(int *)(param_1 + 0x54) = (int)uVar7;
  if (0 < *param_3) {
    puVar10 = &DAT_010ee1c0;
    puVar11 = &DAT_010ee1e4;
    puVar12 = &DAT_010ee208;
    puVar6 = puVar10;
    piVar13 = param_3;
    piVar14 = param_3;
    do {
      if (piVar13[6] != 0) {
        piVar13[7] = (int)uVar7;
        iVar8 = param_3[1];
        iVar3 = param_3[2];
        piVar13[8] = local_60;
        iVar8 = FUN_004d44a0(iVar8,iVar3,piVar14 + 0x1e,uVar7);
        if (iVar8 == 0) goto LAB_004d4af4;
        pbVar4 = (byte *)piVar14[0x1e];
        *puVar10 = *(undefined4 *)(pbVar4 + 0x14);
        bVar1 = *pbVar4;
        bVar2 = pbVar4[1];
        puVar10[2] = 0x10303;
        puVar10[1] = (uint)bVar2 << 0x10 | (uint)bVar1 << 8 | 0x8028 | 2;
        puVar10[3] = (uint)pbVar4[1] * 0x8000 - 0x8000 | 0x80000000;
        uVar5 = *(undefined4 *)(pbVar4 + 4);
        puVar10[5] = 0x2062000;
        puVar10[4] = uVar5;
        puVar10[6] = *(undefined4 *)(pbVar4 + 8);
        puVar10[7] = *(uint *)(pbVar4 + 0x10) | 0x100000;
      }
      if (piVar13[9] != 0) {
        piVar13[10] = (int)(uVar7 + local_70);
        iVar8 = param_3[3];
        iVar3 = param_3[4];
        piVar13[0xb] = local_5c[0];
        iVar8 = FUN_004d44a0(iVar8,iVar3,piVar14 + 0x1f,uVar7 + local_70 & 0xffffffff);
        if (iVar8 == 0) goto LAB_004d4af4;
        pbVar4 = (byte *)piVar14[0x1f];
        *puVar11 = *(undefined4 *)(pbVar4 + 0x14);
        bVar1 = *pbVar4;
        bVar2 = pbVar4[1];
        puVar11[2] = 0x10303;
        puVar11[1] = (uint)bVar2 << 0x10 | (uint)bVar1 << 8 | 0x8028 | 2;
        puVar11[3] = (uint)pbVar4[1] * 0x8000 - 0x8000 | 0x80000000;
        uVar5 = *(undefined4 *)(pbVar4 + 4);
        puVar11[5] = 0x2062000;
        puVar11[4] = uVar5;
        puVar11[6] = *(undefined4 *)(pbVar4 + 8);
        puVar11[7] = *(uint *)(pbVar4 + 0x10) | 0x100000;
      }
      if (piVar13[0xc] != 0) {
        iVar8 = param_3[3];
        iVar3 = param_3[4];
        piVar13[0xe] = local_5c[0];
        piVar13[0xd] = (int)(uVar7 + local_6c);
        iVar8 = FUN_004d44a0(iVar8,iVar3,piVar14 + 0x20,uVar7 + local_6c & 0xffffffff);
        if (iVar8 == 0) goto LAB_004d4af4;
        pbVar4 = (byte *)piVar14[0x20];
        *puVar12 = *(undefined4 *)(pbVar4 + 0x14);
        bVar1 = *pbVar4;
        bVar2 = pbVar4[1];
        puVar12[2] = 0x10303;
        puVar12[1] = (uint)bVar2 << 0x10 | (uint)bVar1 << 8 | 0x8028 | 2;
        puVar12[3] = (uint)pbVar4[1] * 0x8000 - 0x8000 | 0x80000000;
        uVar5 = *(undefined4 *)(pbVar4 + 4);
        puVar12[5] = 0x2062000;
        puVar12[4] = uVar5;
        puVar12[6] = *(undefined4 *)(pbVar4 + 8);
        puVar12[7] = *(uint *)(pbVar4 + 0x10) | 0x100000;
      }
      if (piVar13[0xf] != 0) {
        piVar13[0x10] = (int)(uVar7 + local_68);
        iVar8 = param_3[1];
        iVar3 = param_3[2];
        piVar13[0x11] = local_60;
        iVar8 = FUN_004d44a0(iVar8,iVar3,piVar14 + 0x21,uVar7 + local_68 & 0xffffffff);
        if (iVar8 == 0) {
LAB_004d4af4:
          if (param_3[0x28] != 0) {
            param_3[0x28] = 0;
          }
          return 0;
        }
        pbVar4 = (byte *)piVar14[0x21];
        puVar6[0x24] = *(undefined4 *)(pbVar4 + 0x14);
        bVar1 = *pbVar4;
        bVar2 = pbVar4[1];
        puVar6[0x26] = 0x10303;
        puVar6[0x25] = (uint)bVar2 << 0x10 | (uint)bVar1 << 8 | 0x8028 | 2;
        puVar6[0x27] = (uint)pbVar4[1] * 0x8000 - 0x8000 | 0x80000000;
        uVar5 = *(undefined4 *)(pbVar4 + 4);
        puVar6[0x29] = 0x2062000;
        puVar6[0x28] = uVar5;
        puVar6[0x2a] = *(undefined4 *)(pbVar4 + 8);
        puVar6[0x2b] = *(uint *)(pbVar4 + 0x10) | 0x100000;
      }
      piVar14[0x22] = 0;
      iVar9 = iVar9 + 1;
      piVar13 = piVar13 + 0xc;
      puVar10 = puVar10 + 0x24;
      puVar11 = puVar11 + 0x24;
      puVar12 = puVar12 + 0x24;
      uVar7 = uVar7 + local_64 & 0xffffffff;
      piVar14 = piVar14 + 5;
      puVar6 = puVar6 + 0x24;
    } while (iVar9 < *param_3);
  }
  param_3[0x29] = local_64;
  return 1;
}



//==== 004d4b40  ns=Global  size=0x54
// sig: undefined FUN_004d4b40(void)
// callers(0): 
// callees(2): 004fe61c FUN_004fe61c; 004ffc9c print_tty2
// strings: 00658e78: 'BINK Player' | 00658e88: 'Freeing textures from movie.  Size in bytes giving back: %d\n'

void FUN_004d4b40(int param_1)

{
  print_tty2("BINK Player","Freeing textures from movie.  Size in bytes giving back: %d\n",
             (ulonglong)*(uint *)(param_1 + 0x58));
  FUN_004fe61c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x54));
  return;
}



//==== 004d4b94  ns=Global  size=0xf4
// sig: undefined FUN_004d4b94(void)
// callers(0): 
// callees(1): 004fe61c FUN_004fe61c

void FUN_004d4b94(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  
  iVar1 = 0;
  if (0 < DAT_010ee118) {
    piVar8 = &DAT_010ee130;
    piVar3 = &DAT_010ee154;
    puVar9 = &DAT_010ee134;
    puVar2 = &DAT_010ee158;
    piVar7 = &DAT_010ee13c;
    puVar6 = &DAT_010ee140;
    piVar5 = &DAT_010ee148;
    puVar4 = &DAT_010ee14c;
    do {
      if (*piVar8 != 0) {
        *puVar9 = 0;
      }
      if (*piVar7 != 0) {
        *puVar6 = 0;
      }
      if (*piVar5 != 0) {
        *puVar4 = 0;
      }
      if (*piVar3 != 0) {
        *puVar2 = 0;
      }
      iVar1 = iVar1 + 1;
      puVar4 = puVar4 + 0xc;
      piVar8 = piVar8 + 0xc;
      piVar3 = piVar3 + 0xc;
      puVar9 = puVar9 + 0xc;
      piVar7 = piVar7 + 0xc;
      puVar6 = puVar6 + 0xc;
      piVar5 = piVar5 + 0xc;
      puVar2 = puVar2 + 0xc;
    } while (iVar1 < DAT_010ee118);
  }
  FUN_004fe61c(*param_1,param_1[0x13]);
  return;
}



//==== 004d4c88  ns=Global  size=0x144
// sig: undefined FUN_004d4c88(void)
// callers(3): 001643e0 space::PlaySpaceMovie; 0016963c update::PlayMovieBlocking; 0016974c update::UpdateCinematic
// callees(3): 004fe61c FUN_004fe61c; 004ffc9c print_tty2; 005ee638 FUN_005ee638
// strings: 00658e78: 'BINK Player' | 00658e88: 'Freeing textures from movie.  Size in bytes giving back: %d\n'

void FUN_004d4c88(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  
  if (param_1[2] != 0) {
    param_1[4] = 1;
    FUN_005ee638(param_1[2]);
    iVar9 = DAT_010ee118;
    param_1[2] = 0;
    if (0 < iVar9) {
      piVar4 = &DAT_010ee118;
      iVar9 = 0;
      puVar5 = &DAT_010ee140;
      puVar3 = &DAT_010ee14c;
      piVar8 = &DAT_010ee130;
      piVar2 = &DAT_010ee154;
      puVar7 = &DAT_010ee134;
      puVar1 = &DAT_010ee158;
      piVar6 = &DAT_010ee13c;
      do {
        piVar4 = piVar4 + 0xc;
        if (*piVar8 != 0) {
          *puVar7 = 0;
        }
        if (*piVar6 != 0) {
          *puVar5 = 0;
        }
        if (*piVar4 != 0) {
          *puVar3 = 0;
        }
        if (*piVar2 != 0) {
          *puVar1 = 0;
        }
        iVar9 = iVar9 + 1;
        puVar3 = puVar3 + 0xc;
        piVar8 = piVar8 + 0xc;
        piVar2 = piVar2 + 0xc;
        puVar7 = puVar7 + 0xc;
        piVar6 = piVar6 + 0xc;
        puVar5 = puVar5 + 0xc;
        puVar1 = puVar1 + 0xc;
      } while (iVar9 < DAT_010ee118);
    }
    FUN_004fe61c(*param_1,param_1[0x13]);
    print_tty2("BINK Player","Freeing textures from movie.  Size in bytes giving back: %d\n",
               (ulonglong)(uint)param_1[0x16]);
    FUN_004fe61c(param_1[1],param_1[0x15]);
  }
  return;
}



//==== 004d4dd0  ns=Global  size=0x48c
// sig: undefined FUN_004d4dd0(void)
// callers(5): 000103b0 boot::PlayAttractMovie; 00012048 boot::PrepareFrontbin; 004d525c FUN_004d525c; 004d5310 FUN_004d5310; 004d5448 FUN_004d5448
// callees(12): 004d46cc FUN_004d46cc; 004fe098 idol::AllocateMemAlign; 004fe6ec FUN_004fe6ec; 0050436c FUN_0050436c; 005c8510 libc::strlen; 005cd098 libc::printf; 005ea348 FUN_005ea348; 005ea3e8 FUN_005ea3e8; 005ea4dc FUN_005ea4dc; 005f0a98 FUN_005f0a98; 005f3984 FUN_005f3984; 0064f504 cell::cellSysutilCheckCallback
// strings: 00658ec8: 'Bink_PS::OpenBinkFile -- Errors %s\n'

undefined4 FUN_004d4dd0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar5;
  undefined8 uVar4;
  size_t sVar6;
  int32_t iVar7;
  int iVar8;
  int *piVar9;
  uint *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  uint *puVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined4 *puVar16;
  int *piVar17;
  uint *puVar18;
  undefined4 *puVar19;
  longlong lVar20;
  int iVar21;
  int *piVar22;
  int iVar23;
  undefined8 in_LR;
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
  
  cell::cellSysutilCheckCallback();
  uVar5 = FUN_005f3984(param_2,param_3);
  puVar1 = (undefined4 *)param_1;
  puVar1[2] = uVar5;
  cell::cellSysutilCheckCallback();
  uVar4 = FUN_005ea348();
  sVar6 = libc::strlen((char *)uVar4);
  if (sVar6 != 0) {
    iVar7 = libc::printf("Bink_PS::OpenBinkFile -- Errors %s\n",uVar4);
    do {
      iVar7 = cell::cellSysutilCheckCallback(iVar7);
    } while( true );
  }
  lVar20 = ZEXT48(boot::g_pGame) + 0x7c;
  *puVar1 = (int)lVar20;
  uVar4 = FUN_0050436c(boot::g_pGame);
  iVar21 = 0;
  piVar22 = &DAT_010ee118;
  puVar1[1] = (int)uVar4;
  FUN_005ea3e8(puVar1[2],&DAT_010ee118);
  iVar8 = 0;
  bVar3 = false;
  if (0 < DAT_010ee118) {
    piVar9 = &DAT_010ee130;
    puVar10 = &DAT_010ee138;
    puVar15 = &DAT_010ee150;
    puVar11 = &DAT_010ee134;
    puVar16 = &DAT_010ee14c;
    piVar12 = &DAT_010ee13c;
    piVar17 = &DAT_010ee154;
    puVar13 = &DAT_010ee144;
    puVar18 = &DAT_010ee15c;
    puVar14 = &DAT_010ee140;
    puVar19 = &DAT_010ee158;
    iVar21 = 0;
    do {
      piVar22 = piVar22 + 0xc;
      if (*piVar9 != 0) {
        uVar2 = DAT_010ee11c + 0xfU & 0xfffffff0;
        iVar23 = uVar2 * DAT_010ee120;
        *puVar10 = uVar2;
        iVar23 = iVar23 * 4;
        uVar5 = idol::AllocateMemAlign(lVar20,iVar23,0x10);
        *puVar11 = uVar5;
        if (!bVar3) {
          bVar3 = true;
          puVar1[0x13] = uVar5;
        }
        iVar21 = iVar23 + iVar21;
        FUN_004fe6ec(lVar20,iVar23);
      }
      if (*piVar12 != 0) {
        uVar2 = DAT_010ee124 + 0xfU & 0xfffffff0;
        iVar23 = uVar2 * DAT_010ee128;
        *puVar13 = uVar2;
        iVar23 = iVar23 * 4;
        uVar5 = idol::AllocateMemAlign(lVar20,iVar23,0x10);
        *puVar14 = uVar5;
        iVar21 = iVar23 + iVar21;
        FUN_004fe6ec(lVar20,iVar23);
      }
      if (*piVar22 != 0) {
        uVar2 = DAT_010ee124 + 0xfU & 0xfffffff0;
        iVar23 = uVar2 * DAT_010ee128;
        *puVar15 = uVar2;
        iVar23 = iVar23 * 4;
        uVar5 = idol::AllocateMemAlign(lVar20,iVar23,0x10);
        *puVar16 = uVar5;
        iVar21 = iVar23 + iVar21;
        FUN_004fe6ec(lVar20,iVar23);
      }
      if (*piVar17 != 0) {
        uVar2 = DAT_010ee11c + 0xfU & 0xfffffff0;
        iVar23 = uVar2 * DAT_010ee120;
        *puVar18 = uVar2;
        iVar23 = iVar23 * 4;
        uVar5 = idol::AllocateMemAlign(lVar20,iVar23,0x10);
        *puVar19 = uVar5;
        iVar21 = iVar23 + iVar21;
        FUN_004fe6ec(lVar20,iVar23);
      }
      iVar8 = iVar8 + 1;
      piVar9 = piVar9 + 0xc;
      puVar10 = puVar10 + 0xc;
      puVar11 = puVar11 + 0xc;
      puVar16 = puVar16 + 0xc;
      piVar12 = piVar12 + 0xc;
      piVar17 = piVar17 + 0xc;
      puVar13 = puVar13 + 0xc;
      puVar18 = puVar18 + 0xc;
      puVar14 = puVar14 + 0xc;
      puVar15 = puVar15 + 0xc;
      puVar19 = puVar19 + 0xc;
    } while (iVar8 < DAT_010ee118);
  }
  puVar1[0x14] = iVar21;
  FUN_004fe6ec(lVar20,iVar21);
  FUN_004d46cc(param_1,uVar4,&DAT_010ee118);
  FUN_005ea4dc(puVar1[2],&DAT_010ee118);
  auVar24 = ZEXT416(0xffffffff);
  auVar28 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
  auVar24 = ZEXT416(0xffffffff);
  auVar30 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
  auVar24 = loadVectorLeftIndexed(in_LR,(ulonglong)(uint)puVar1[2]);
  auVar26 = loadVectorLeftIndexed(4,(ulonglong)(uint)puVar1[2]);
  auVar25 = vectorConvertFromUnsignedFixedPointWord(auVar24,0);
  auVar27 = vectorConvertFromUnsignedFixedPointWord(auVar26,0);
  auVar29 = vectorShiftLeftIntegerWord(auVar28,auVar28);
  auVar24 = loadVectorLeftIndexed(in_LR,0x4d4dcc);
  auVar31 = vectorShiftLeftIntegerWord(auVar30,auVar30);
  auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar28 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
  auVar24 = ZEXT416(0xffffffff);
  auVar35 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
  auVar24 = ZEXT416(0xffffffff);
  auVar30 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
  auVar24 = ZEXT416(0xffffffff);
  auVar26 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
  auVar24 = ZEXT416(0xffffffff);
  auVar37 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
  auVar32 = vectorShiftLeftIntegerWord(auVar30,auVar30);
  auVar24 = vectorReciprocalEstimateFloatingPoint(auVar25);
  auVar30 = vectorReciprocalEstimateFloatingPoint(auVar27);
  auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar24,auVar25,auVar28);
  auVar34 = vectorNegativeMultiplySubtractFloatingPoint(auVar30,auVar27,auVar28);
  auVar29 = vectorMultiplyAddFloatingPoint(auVar24,auVar33,auVar29);
  auVar30 = vectorMultiplyAddFloatingPoint(auVar30,auVar34,auVar31);
  auVar24 = ZEXT416(0xffffffff);
  auVar31 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
  auVar24 = vectorShiftLeftIntegerWord(auVar35,auVar35);
  auVar33 = loadVectorLeftIndexed(0x14,param_1);
  auVar34 = vectorShiftLeftIntegerWord(auVar31,auVar31);
  auVar31 = vectorNegativeMultiplySubtractFloatingPoint(auVar29,auVar25,auVar28);
  auVar35 = vectorNegativeMultiplySubtractFloatingPoint(auVar30,auVar27,auVar28);
  auVar29 = vectorMultiplyAddFloatingPoint(auVar29,auVar31,auVar32);
  auVar30 = vectorMultiplyAddFloatingPoint(auVar30,auVar35,auVar24);
  auVar32 = vectorShiftLeftIntegerWord(auVar26,auVar26);
  auVar24 = ZEXT416(0xffffffff);
  auVar36 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
  auVar31 = vectorShiftLeftIntegerWord(auVar37,auVar37);
  auVar35 = loadVectorLeftIndexed(0x18,param_1);
  auVar24 = vectorNegativeMultiplySubtractFloatingPoint(auVar29,auVar25,auVar28);
  auVar26 = vectorNegativeMultiplySubtractFloatingPoint(auVar30,auVar27,auVar28);
  auVar25 = vectorShiftLeftIntegerWord(auVar36,auVar36);
  auVar24 = vectorMultiplyAddFloatingPoint(auVar29,auVar24,auVar34);
  auVar26 = vectorMultiplyAddFloatingPoint(auVar30,auVar26,auVar32);
  auVar24 = vectorMultiplyAddFloatingPoint(auVar24,auVar33,auVar31);
  auVar26 = vectorMultiplyAddFloatingPoint(auVar26,auVar35,auVar25);
  auVar25 = vectorCompareGreaterThanFloatingPoint(auVar26,auVar24);
  auVar24 = vectorConditionalSelect(auVar26,auVar24,auVar25);
  auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar5 = storeVectorElementWordIndexed
                    (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x28,param_1);
  *(undefined4 *)((uint)(puVar1 + 10) & 0xfffffffc) = uVar5;
  puVar1[7] = 0x3f800000;
  puVar1[8] = 0x3f800000;
  puVar1[4] = 2;
  FUN_005f0a98();
  return puVar1[2];
}



//==== 004d525c  ns=Global  size=0xac
// sig: undefined FUN_004d525c(void)
// callers(0): 
// callees(4): 004d4dd0 FUN_004d4dd0; 004ef34c FUN_004ef34c; 004ef4d0 FUN_004ef4d0; 005cd2a8 libc::snprintf
// strings: 00658eec: '/%s/ps3data/movies/mpeg%d.bik'

void FUN_004d525c(int param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar2;
  undefined8 uVar1;
  char acStack_120 [128];
  undefined1 auStack_a0 [128];
  
  iVar2 = libc::snprintf(acStack_120,"/%s/ps3data/movies/mpeg%d.bik",
                         ZEXT48((&PTR_DAT_008fa400)[*(int *)(param_1 + 0x5c)]),param_2);
  uVar1 = FUN_004ef34c(iVar2);
  FUN_004ef4d0(uVar1,acStack_120,auStack_a0);
  FUN_004d4dd0(param_1,auStack_a0,param_3 | 0x84000);
  return;
}



//==== 004d5310  ns=Global  size=0x130
// sig: undefined FUN_004d5310(void)
// callers(0): 
// callees(6): 004d4dd0 FUN_004d4dd0; 004ef34c FUN_004ef34c; 004ef4d0 FUN_004ef4d0; 005cd2a8 libc::snprintf; 005ea398 FUN_005ea398; 005ed898 FUN_005ed898
// strings: 00658eec: '/%s/ps3data/movies/mpeg%d.bik'

undefined4 FUN_004d5310(int param_1,undefined8 param_2,int param_3,ulonglong param_4)

{
  int iVar2;
  undefined8 uVar1;
  char acStack_140 [128];
  undefined1 auStack_c0 [128];
  int local_40 [8];
  
  local_40[0] = param_3;
  if (param_3 == 1) {
    local_40[0] = 0;
  }
  FUN_005ea398(1,local_40);
  iVar2 = libc::snprintf(acStack_140,"/%s/ps3data/movies/mpeg%d.bik",
                         ZEXT48((&PTR_DAT_008fa400)[*(int *)(param_1 + 0x5c)]),param_2);
  uVar1 = FUN_004ef34c(iVar2);
  FUN_004ef4d0(uVar1,acStack_140,auStack_c0);
  FUN_004d4dd0(param_1,auStack_c0,param_4 | 0x84000);
  FUN_005ed898(*(undefined4 *)(param_1 + 8),local_40[0],
               (int)((float)(longlong)(int)g_GameSettings.MusicVolume * 0.0009765625 * 32768.0));
  return *(undefined4 *)(param_1 + 8);
}



//==== 004d5448  ns=Global  size=0xd4
// sig: undefined FUN_004d5448(void)
// callers(7): 00010238 boot::PlayLogoMovie; 00012ec8 boot::GameStart; 001643e0 space::PlaySpaceMovie; 00168dec update::PlayInfobotMovie; 00168f7c update::PlayHelpMovie; 0016910c update::PlaySpecialMovie; 00169268 update::PlayStoryMovie
// callees(3): 004d4dd0 FUN_004d4dd0; 005ea398 FUN_005ea398; 005ed898 FUN_005ed898

undefined4 FUN_004d5448(int param_1,undefined8 param_2,int param_3,ulonglong param_4)

{
  int local_30 [6];
  
  local_30[0] = param_3;
  if (param_3 == 1) {
    local_30[0] = 0;
  }
  FUN_005ea398(1,local_30);
  FUN_004d4dd0(param_1,param_2,param_4 | 0x84000);
  FUN_005ed898(*(undefined4 *)(param_1 + 8),local_30[0],
               (int)((float)(longlong)(int)g_GameSettings.MusicVolume * 0.0009765625 * 32768.0));
  return *(undefined4 *)(param_1 + 8);
}



//==== 004d551c  ns=Global  size=0x8
// sig: undefined FUN_004d551c(void)
// callers(0): 
// callees(0): 

undefined4 FUN_004d551c(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



//==== 004d5524  ns=Global  size=0xc
// sig: undefined FUN_004d5524(void)
// callers(5): 00010238 boot::PlayLogoMovie; 00012ec8 boot::GameStart; 001643e0 space::PlaySpaceMovie; 0016963c update::PlayMovieBlocking; 0016974c update::UpdateCinematic
// callees(0): 

undefined4 FUN_004d5524(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



//==== 004d5530  ns=Global  size=0x28
// sig: undefined FUN_004d5530(void)
// callers(0): 
// callees(1): 005ee638 FUN_005ee638

void FUN_004d5530(undefined8 param_1,undefined8 param_2)

{
  FUN_005ee638(param_2);
  return;
}



//==== 004d5558  ns=Global  size=0x3c
// sig: undefined FUN_004d5558(void)
// callers(0): 
// callees(0): 

undefined4 * FUN_004d5558(undefined8 param_1,int param_2)

{
  return &DAT_010ee1c0 + param_2 * 9 + DAT_010ee12c * 0x24;
}



//==== 004d5594  ns=Global  size=0x2ec
// sig: undefined FUN_004d5594(void)
// callers(3): 004d5880 FUN_004d5880; 004d5934 FUN_004d5934; 004d59e8 FUN_004d59e8
// callees(2): 004d6948 idol_draw::ResetPassState; 004d6bb0 FUN_004d6bb0

void FUN_004d5594(undefined8 param_1,uint param_2)

{
  RsxCmd *pRVar1;
  RsxCmd *pRVar2;
  RsxCmd *pRVar3;
  RsxCmd *pRVar4;
  RsxCmd *pRVar5;
  RsxCmd *pRVar6;
  RsxCmd RVar7;
  RenderingStep *pRVar8;
  short sVar9;
  short sVar10;
  
  param_2 = param_2 & 0xff;
  sVar10 = ((ushort)((LZCOUNT(-param_2) << 0x3a) >> 0x3f) & 0x14) + 0x1ec;
  sVar9 = ((ushort)((LZCOUNT(-param_2) << 0x3a) >> 0x3f) & 0xffec) + 0x14;
  FUN_004d6bb0(HUD_Pass,0,&DAT_010ee1c0 + DAT_010ee12c * 0x24);
  FUN_004d6bb0(HUD_Pass,1,&DAT_010ee1e4 + DAT_010ee12c * 0x24);
  FUN_004d6bb0(HUD_Pass,2,&DAT_010ee208 + DAT_010ee12c * 0x24);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar1 = HUD_Pass->command;
  HUD_Pass->command = pRVar1 + 2;
  pRVar2 = HUD_Pass->command;
  HUD_Pass->command = pRVar2 + 6;
  pRVar3 = HUD_Pass->command;
  HUD_Pass->command = pRVar3 + 2;
  pRVar4 = HUD_Pass->command;
  HUD_Pass->command = pRVar4 + 2;
  pRVar5 = HUD_Pass->command;
  HUD_Pass->command = pRVar5 + 2;
  pRVar8 = HUD_Pass;
  pRVar6 = HUD_Pass->command;
  *pRVar1 = 0x41948;
  pRVar8->command = pRVar6 + 2;
  pRVar8 = HUD_Pass;
  pRVar1[1] = 0xffffffff;
  pRVar1 = pRVar8->command;
  *pRVar2 = 0x400c1714;
  pRVar2[1] = 0;
  pRVar8->command = pRVar1 + 2;
  pRVar8 = HUD_Pass;
  pRVar2[2] = 0;
  pRVar2[3] = 0;
  pRVar2[4] = NV4097_SET_BEGIN_END_x1;
  pRVar2[5] = 8;
  pRVar2 = pRVar8->command;
  *pRVar3 = 0x41904;
  pRVar3[1] = 0;
  *pRVar4 = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar8->command = pRVar2 + 2;
  pRVar8 = HUD_Pass;
  RVar7 = (((uint)((LZCOUNT(-param_2) << 0x3a) >> 0x3f) & 0x10) + 400) * 0x10000;
  pRVar4[1] = (int)sVar9;
  *pRVar5 = 0x41904;
  pRVar3 = pRVar8->command;
  pRVar5[1] = 0x10000;
  *pRVar6 = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar6[1] = RVar7 | (int)sVar9;
  *pRVar1 = 0x41904;
  pRVar8->command = pRVar3 + 2;
  pRVar8 = HUD_Pass;
  pRVar1[1] = 0x10001;
  *pRVar2 = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar2[1] = RVar7 | (int)sVar10;
  pRVar1 = pRVar8->command;
  *pRVar3 = 0x41904;
  pRVar3[1] = 1;
  pRVar8->command = pRVar1 + 2;
  pRVar8 = HUD_Pass;
  *pRVar1 = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar1[1] = (int)sVar10;
  pRVar1 = pRVar8->command;
  *pRVar1 = NV4097_SET_BEGIN_END_x1;
  pRVar1[1] = 0;
  pRVar8->command = pRVar1 + 2;
  return;
}



//==== 004d5880  ns=Global  size=0xb4
// sig: undefined FUN_004d5880(void)
// callers(0): 
// callees(2): 004d5594 FUN_004d5594; 004d82b8 idol_draw::BindFragmentProgram

void FUN_004d5880(undefined8 param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = g_viewMtxPtr;
  uVar1 = (ulonglong)(LZCOUNT(*(undefined4 *)(g_viewMtxPtr + 0xc)) << 0x20) >> 0x25;
  if (DAT_010ee154 == 0) {
    idol_draw::BindFragmentProgram(g_viewMtxPtr,HUD_Pass,0x14);
    FUN_004d5594(param_1,uVar1);
  }
  else {
    FUN_004d5594(param_1,uVar1);
  }
  idol_draw::BindFragmentProgram(iVar2,HUD_Pass,0xc);
  return;
}



//==== 004d5934  ns=Global  size=0xb4
// sig: undefined FUN_004d5934(void)
// callers(0): 
// callees(2): 004d5594 FUN_004d5594; 004d82b8 idol_draw::BindFragmentProgram

void FUN_004d5934(undefined8 param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = g_viewMtxPtr;
  uVar1 = (ulonglong)(LZCOUNT(*(undefined4 *)(g_viewMtxPtr + 0xc)) << 0x20) >> 0x25;
  if (DAT_010ee154 == 0) {
    idol_draw::BindFragmentProgram(g_viewMtxPtr,HUD_Pass,0x14);
    FUN_004d5594(param_1,uVar1);
  }
  else {
    FUN_004d5594(param_1,uVar1);
  }
  idol_draw::BindFragmentProgram(iVar2,HUD_Pass,0xc);
  return;
}



//==== 004d59e8  ns=Global  size=0x324
// sig: undefined FUN_004d59e8(void)
// callers(5): 00010238 boot::PlayLogoMovie; 00012ec8 boot::GameStart; 001643e0 space::PlaySpaceMovie; 0016963c update::PlayMovieBlocking; 0016974c update::UpdateCinematic
// callees(10): 004d5594 FUN_004d5594; 004d82b8 idol_draw::BindFragmentProgram; 004fe61c FUN_004fe61c; 004ffc9c print_tty2; 005edea0 FUN_005edea0; 005ee638 FUN_005ee638; 005ef740 FUN_005ef740; 005efeb0 FUN_005efeb0; 005f0a98 FUN_005f0a98; 0064f504 cell::cellSysutilCheckCallback
// strings: 00658e78: 'BINK Player' | 00658e88: 'Freeing textures from movie.  Size in bytes giving back: %d\n'

undefined8 FUN_004d59e8(undefined4 *param_1)

{
  RsxCmd *pRVar1;
  ulonglong uVar2;
  bool bVar3;
  RenderingStep *pRVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  int *piVar14;
  
  cell::cellSysutilCheckCallback();
  pRVar4 = DepthPass;
  bVar3 = false;
  *DepthPass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar4->command[1] = 0xff000000;
  pRVar4->command = pRVar4->command + 2;
  pRVar4 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar4->command[1] = 0xffffff00;
  pRVar4->command = pRVar4->command + 2;
  pRVar4 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar4->command[1] = 0xf3;
  pRVar1 = pRVar4->command;
  pRVar4->command = pRVar1 + 2;
  pRVar1[2] = NV4097_NO_OPERATION_x1;
  pRVar4->command[1] = 0;
  iVar5 = param_1[4];
  pRVar4->command = pRVar4->command + 2;
  iVar6 = param_1[2];
  if ((iVar5 != 1) && (bVar3 = false, iVar5 != 0)) {
    bVar3 = true;
    iVar5 = FUN_005edea0();
    iVar6 = param_1[2];
    if (iVar5 == 0) {
      param_1[4] = 3;
      FUN_005f0a98();
      while (iVar5 = FUN_005ef740(param_1[2]), iVar5 != 0) {
        FUN_005efeb0(param_1[2]);
        FUN_005f0a98(param_1[2]);
      }
      FUN_005efeb0(param_1[2]);
      iVar6 = param_1[2];
      if (*(int *)(iVar6 + 0xc) == *(int *)(iVar6 + 8)) {
        if (iVar6 != 0) {
          param_1[4] = 1;
          FUN_005ee638();
          param_1[2] = 0;
          if (0 < DAT_010ee118) {
            piVar10 = &DAT_010ee118;
            iVar5 = 0;
            puVar11 = &DAT_010ee140;
            puVar9 = &DAT_010ee14c;
            piVar14 = &DAT_010ee130;
            piVar8 = &DAT_010ee154;
            puVar13 = &DAT_010ee134;
            puVar7 = &DAT_010ee158;
            piVar12 = &DAT_010ee13c;
            do {
              piVar10 = piVar10 + 0xc;
              if (*piVar14 != 0) {
                *puVar13 = 0;
              }
              if (*piVar12 != 0) {
                *puVar11 = 0;
              }
              if (*piVar10 != 0) {
                *puVar9 = 0;
              }
              if (*piVar8 != 0) {
                *puVar7 = 0;
              }
              iVar5 = iVar5 + 1;
              puVar9 = puVar9 + 0xc;
              piVar14 = piVar14 + 0xc;
              piVar8 = piVar8 + 0xc;
              puVar13 = puVar13 + 0xc;
              piVar12 = piVar12 + 0xc;
              puVar11 = puVar11 + 0xc;
              puVar7 = puVar7 + 0xc;
            } while (iVar5 < DAT_010ee118);
          }
          FUN_004fe61c(*param_1,param_1[0x13]);
          print_tty2("BINK Player","Freeing textures from movie.  Size in bytes giving back: %d\n",
                     (ulonglong)(uint)param_1[0x16]);
          FUN_004fe61c(param_1[1],param_1[0x15]);
        }
        return 1;
      }
    }
  }
  iVar5 = g_viewMtxPtr;
  if (bVar3 && iVar6 != 0) {
    uVar2 = (ulonglong)(LZCOUNT(*(undefined4 *)(g_viewMtxPtr + 0xc)) << 0x20) >> 0x25;
    if (DAT_010ee154 == 0) {
      idol_draw::BindFragmentProgram(g_viewMtxPtr,HUD_Pass,0x14);
      FUN_004d5594(param_1,uVar2);
    }
    else {
      FUN_004d5594(param_1,uVar2);
    }
    idol_draw::BindFragmentProgram(iVar5,HUD_Pass,0xc);
  }
  return 0;
}



//==== 004d5d0c  ns=Global  size=0x50
// sig: undefined FUN_004d5d0c(void)
// callers(1): 00013a20 boot::GameShutDown
// callees(2): 005ee638 FUN_005ee638; 005ef8f0 FUN_005ef8f0

void FUN_004d5d0c(int param_1)

{
  if (*(int *)(param_1 + 0x5c) != -1) {
    FUN_005ee638(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x10) = 0;
    FUN_005ef8f0();
  }
  return;
}



//==== 004d5d5c  ns=Global  size=0x24
// sig: undefined FUN_004d5d5c(void)
// callers(14): 00010238 boot::PlayLogoMovie; 000103b0 boot::PlayAttractMovie; 00012048 boot::PrepareFrontbin; 00012ec8 boot::GameStart; 00013a20 boot::GameShutDown; 0001401c boot::boot; 000148f8 boot::StaticInit_BootGlobals; 001643e0 space::PlaySpaceMovie; 00168dec update::PlayInfobotMovie; 00168f7c update::PlayHelpMovie; 0016910c update::PlaySpecialMovie; 00169268 update::PlayStoryMovie; 0016963c update::PlayMovieBlocking; 0016974c update::UpdateCinematic
// callees(0): 

void FUN_004d5d5c(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0x44000000;
  *(undefined4 *)(param_1 + 0x18) = 0x43d00000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  return;
}



//==== 004d5d80  ns=Global  size=0x24
// sig: undefined FUN_004d5d80(void)
// callers(0): 
// callees(0): 

void FUN_004d5d80(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0x44000000;
  *(undefined4 *)(param_1 + 0x18) = 0x43d00000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  return;
}



//==== 004d5da4  ns=Global  size=0x4
// sig: undefined FUN_004d5da4(void)
// callers(1): 00014854 boot::StaticDestroy_BootGlobals
// callees(0): 

void FUN_004d5da4(void)

{
  return;
}



//==== 004d5da8  ns=Global  size=0x4
// sig: undefined FUN_004d5da8(void)
// callers(0): 
// callees(0): 

void FUN_004d5da8(void)

{
  return;
}



//==== 004d5dac  ns=Global  size=0x3c
// sig: undefined FUN_004d5dac(void)
// callers(0): 
// callees(0): 

void FUN_004d5dac(undefined8 param_1,uint param_2)

{
  RenderingStep *pRVar1;
  
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = (param_2 & 0xff) * 0x20 + 0x1a0c | NV4097_SET_OBJECT_x1;
  pRVar1->command[1] = 0;
  pRVar1->command = pRVar1->command + 2;
  return;
}



//==== 004d5df0  ns=Global  size=0x58
// sig: undefined FUN_004d5df0(void)
// callers(0): 
// callees(0): 

void FUN_004d5df0(void)

{
  if (*DAT_010ef520 != DAT_010ef520[1]) {
    do {
      syscall();
    } while (*DAT_010ef520 != DAT_010ef520[1]);
  }
  return;
}



//==== 004d5e48  ns=Global  size=0x164
// sig: undefined FUN_004d5e48(void)
// callers(1): 0006e068 draw::Draw_FlushAndPresent
// callees(2): 005cd098 libc::printf; 00650684 sys::sys_time_get_system_time
// strings: 00658f40: 'Renderer timed out\n'

void FUN_004d5e48(int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 40000;
  iVar2 = *(int *)(DAT_010ef520 + 8);
  while (iVar2 != param_1) {
    syscall();
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      libc::printf("Renderer timed out\n");
    }
    iVar2 = *(int *)(DAT_010ef520 + 8);
  }
  lVar1 = sys::sys_time_get_system_time();
  if ((longlong)(((LZCOUNT(0x32 - *(int *)(g_viewMtxPtr + 0x18)) << 0x3a) >> 0x3f & 4000U) + 18000)
      < lVar1 - DAT_010ef500) {
    iVar2 = DAT_010ef4fc + 5;
    DAT_010ef4fc = iVar2 + ((uint)(0x14 - (longlong)iVar2 >> 0x3f) & 0x14U - iVar2);
  }
  else {
    iVar2 = DAT_010ef4fc + -1;
    DAT_010ef4fc = iVar2 + (iVar2 >> 0x1f & -iVar2);
  }
  PTR_DAT_008fa54c._0_1_ = (char)((ulonglong)(LZCOUNT(DAT_010ef4fc) << 0x20) >> 0x25);
  DAT_010ef500 = lVar1;
  return;
}



//==== 004d5fac  ns=Global  size=0x38
// sig: undefined FUN_004d5fac(void)
// callers(0): 
// callees(0): 

undefined8 FUN_004d5fac(int *param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == *param_2) {
    if (param_1[2] == param_2[2]) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



//==== 004d5fe4  ns=idol_draw  size=0x5e4
// sig: undefined DrawDepth(RenderingStep * param_1, undefined8 param_2)
// callers(21): 0006bb78 draw::DefaultDraw; 00072280 draw::FastDrawQuad; 000731c8 draw::DrawTexturedStrips; 00073de0 draw::DrawLavaStrips; 00074fa0 draw::ImpactSprite_Draw; 00077048 draw::DrawsFlowingLava; 000f1850 mobyfunc::DrawMobyDepth; 000f1a78 mobyfunc::DrawMobys; 0011ebc4 partproc::???_DrawParts_DepthPass; 0015aa80 skyfunc::SkySpriteProc; 0015f6d0 space::???_Space_TransitionDrawPass; 00173b60 vendor::Vendor_DrawScreen; 0017cfdc water::WaterTile_DrawAll; 0017d4b8 water::WaterSheet_DrawAll; 0017dd20 water::OceanPass; 001d0f60 mobyupdate_helpers::M1111_Pokitaru_Ocean; 002d40b8 mobyupdate_helpers::M1901_002d40b8; 00340190 mobyupdate_helpers::M317_Gaspar_SubmitOcean; 003dfa30 mobyupdate_helpers::M617_003dfa30; 004d6948 idol_draw::ResetPassState; 00508c10 shrubfunc::DrawShrub
// callees(0): 

void idol_draw::DrawDepth(RenderingStep *param_1,ulonglong param_2)

{
  RsxCmd *pRVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  param_1[0xb].commandLen = (int)(param_2 >> 0x20);
  param_1[0xb].command = (RsxCmd *)(int)param_2;
  uVar2 = (uint)param_2 & 0xff;
  pRVar1 = param_1->command;
  DAT_010ee318 = param_2;
  if (uVar2 < 0x62) {
    if (uVar2 == 0x48) {
      *pRVar1 = NV4097_SET_BLEND_EQUATION_x1;
      param_1->command[1] = 0x80068006;
      pRVar1 = param_1->command;
      param_1->command = pRVar1 + 2;
      pRVar1[2] = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
      param_1->command[1] = 0x3020302;
      param_1->command[2] = 0x10001;
      pRVar1 = param_1->command;
      param_1->command = pRVar1 + 3;
      pRVar1[3] = NV4097_SET_ALPHA_TEST_ENABLE_x1;
      param_1->command[1] = 1;
      param_1->command = param_1->command + 2;
    }
    else if (uVar2 == 0x44) {
      *pRVar1 = NV4097_SET_BLEND_EQUATION_x1;
      param_1->command[1] = 0x80068006;
      pRVar1 = param_1->command;
      param_1->command = pRVar1 + 2;
      pRVar1[2] = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
      param_1->command[1] = 0x3020302;
      param_1->command[2] = 0x3030303;
      pRVar1 = param_1->command;
      param_1->command = pRVar1 + 3;
      pRVar1[3] = NV4097_SET_ALPHA_TEST_ENABLE_x1;
      param_1->command[1] = 1;
      param_1->command = param_1->command + 2;
    }
    else if (uVar2 == 0x42) {
      *pRVar1 = NV4097_SET_BLEND_EQUATION_x1;
      param_1->command[1] = 0x8006800b;
      pRVar1 = param_1->command;
      param_1->command = pRVar1 + 2;
      pRVar1[2] = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
      param_1->command[1] = 0x3020302;
      param_1->command[2] = 0x10001;
      pRVar1 = param_1->command;
      param_1->command = pRVar1 + 3;
      pRVar1[3] = NV4097_SET_ALPHA_TEST_ENABLE_x1;
      param_1->command[1] = 1;
      param_1->command = param_1->command + 2;
    }
    else if ((param_2 & 0xff) == 0) {
      *pRVar1 = NV4097_SET_BLEND_EQUATION_x1;
      param_1->command[1] = 0x80068006;
      pRVar1 = param_1->command;
      param_1->command = pRVar1 + 2;
      pRVar1[2] = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
      param_1->command[1] = 0x10001;
      param_1->command[2] = 0;
      pRVar1 = param_1->command;
      param_1->command = pRVar1 + 3;
      pRVar1[3] = NV4097_SET_ALPHA_TEST_ENABLE_x1;
      param_1->command[1] = 1;
      param_1->command = param_1->command + 2;
    }
  }
  else if (uVar2 == 0xa1) {
    lVar3 = (param_2 >> 0x20 & 0xff) + 1;
    uVar4 = lVar3 + (0xff - lVar3 >> 0x3f & 0xffU - lVar3);
    *pRVar1 = NV4097_SET_BLEND_COLOR_x1;
    param_1->command[1] =
         (RsxCmd)uVar4 | (RsxCmd)((uVar4 & 0xffffffff) << 8) |
         (RsxCmd)((uVar4 & 0xffffffff) << 0x10) | (RsxCmd)((uVar4 & 0xffffffff) << 0x18);
    pRVar1 = param_1->command;
    param_1->command = pRVar1 + 2;
    pRVar1[2] = NV4097_SET_BLEND_EQUATION_x1;
    param_1->command[1] = 0x8006800b;
    pRVar1 = param_1->command;
    param_1->command = pRVar1 + 2;
    pRVar1[2] = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
    param_1->command[1] = 0x80038003;
    param_1->command[2] = 0x10001;
    pRVar1 = param_1->command;
    param_1->command = pRVar1 + 3;
    pRVar1[3] = NV4097_SET_ALPHA_TEST_ENABLE_x1;
    param_1->command[1] = 1;
    param_1->command = param_1->command + 2;
  }
  else if (uVar2 == 0x7e) {
    *pRVar1 = NV4097_SET_BLEND_EQUATION_x1;
    param_1->command[1] = 0x80068006;
    pRVar1 = param_1->command;
    param_1->command = pRVar1 + 2;
    pRVar1[2] = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
    param_1->command[1] = 0x3020302;
    param_1->command[2] = 0x3030303;
    pRVar1 = param_1->command;
    param_1->command = pRVar1 + 3;
    pRVar1[3] = NV4097_SET_ALPHA_TEST_ENABLE_x1;
    param_1->command[1] = 1;
    param_1->command = param_1->command + 2;
  }
  else if (uVar2 == 0x68) {
    lVar3 = (param_2 >> 0x20 & 0xff) + 1;
    uVar4 = lVar3 + (0xff - lVar3 >> 0x3f & 0xffU - lVar3);
    *pRVar1 = NV4097_SET_BLEND_COLOR_x1;
    param_1->command[1] =
         (RsxCmd)uVar4 | (RsxCmd)((uVar4 & 0xffffffff) << 8) |
         (RsxCmd)((uVar4 & 0xffffffff) << 0x10) | (RsxCmd)((uVar4 & 0xffffffff) << 0x18);
    pRVar1 = param_1->command;
    param_1->command = pRVar1 + 2;
    pRVar1[2] = NV4097_SET_BLEND_EQUATION_x1;
    param_1->command[1] = 0x80068006;
    pRVar1 = param_1->command;
    param_1->command = pRVar1 + 2;
    pRVar1[2] = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
    param_1->command[1] = 0x80038003;
    param_1->command[2] = 0x10001;
    pRVar1 = param_1->command;
    param_1->command = pRVar1 + 3;
    pRVar1[3] = NV4097_SET_ALPHA_TEST_ENABLE_x1;
    param_1->command[1] = 1;
    param_1->command = param_1->command + 2;
  }
  else if (uVar2 == 100) {
    lVar3 = (param_2 >> 0x20 & 0xff) + 1;
    uVar4 = lVar3 + (0xff - lVar3 >> 0x3f & 0xffU - lVar3);
    *pRVar1 = NV4097_SET_BLEND_COLOR_x1;
    param_1->command[1] =
         (RsxCmd)uVar4 | (RsxCmd)((uVar4 & 0xffffffff) << 8) |
         (RsxCmd)((uVar4 & 0xffffffff) << 0x10) | (RsxCmd)((uVar4 & 0xffffffff) << 0x18);
    pRVar1 = param_1->command;
    param_1->command = pRVar1 + 2;
    pRVar1[2] = NV4097_SET_BLEND_EQUATION_x1;
    param_1->command[1] = 0x80068006;
    pRVar1 = param_1->command;
    param_1->command = pRVar1 + 2;
    pRVar1[2] = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
    param_1->command[1] = 0x80038003;
    param_1->command[2] = 0x80048004;
    pRVar1 = param_1->command;
    param_1->command = pRVar1 + 3;
    pRVar1[3] = NV4097_SET_ALPHA_TEST_ENABLE_x1;
    param_1->command[1] = 0;
    param_1->command = param_1->command + 2;
  }
  else if (uVar2 == 0x62) {
    lVar3 = (param_2 >> 0x20 & 0xff) + 1;
    uVar4 = lVar3 + (0xff - lVar3 >> 0x3f & 0xffU - lVar3);
    *pRVar1 = NV4097_SET_BLEND_COLOR_x1;
    param_1->command[1] =
         (RsxCmd)uVar4 | (RsxCmd)((uVar4 & 0xffffffff) << 8) |
         (RsxCmd)((uVar4 & 0xffffffff) << 0x10) | (RsxCmd)((uVar4 & 0xffffffff) << 0x18);
    pRVar1 = param_1->command;
    param_1->command = pRVar1 + 2;
    pRVar1[2] = NV4097_SET_BLEND_EQUATION_x1;
    param_1->command[1] = 0x8006800b;
    pRVar1 = param_1->command;
    param_1->command = pRVar1 + 2;
    pRVar1[2] = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
    param_1->command[1] = 0x80030000;
    param_1->command[2] = 0x10001;
    pRVar1 = param_1->command;
    param_1->command = pRVar1 + 3;
    pRVar1[3] = NV4097_SET_ALPHA_TEST_ENABLE_x1;
    param_1->command[1] = 1;
    param_1->command = param_1->command + 2;
  }
  return;
}



//==== 004d65c8  ns=Global  size=0x6c
// sig: undefined FUN_004d65c8(void)
// callers(0): 
// callees(0): 

void FUN_004d65c8(int param_1,ulonglong param_2)

{
  int iVar1;
  
  if ((param_2 & 1) == 0) {
    **(undefined4 **)(param_1 + 8) = 0x40a70;
    *(undefined4 *)(*(int *)(param_1 + 8) + 4) = 1;
    iVar1 = *(int *)(param_1 + 8);
  }
  else {
    **(undefined4 **)(param_1 + 8) = 0x40a70;
    *(undefined4 *)(*(int *)(param_1 + 8) + 4) = 0;
    iVar1 = *(int *)(param_1 + 8);
  }
  *(ulonglong *)(param_1 + 0xd0) = param_2;
  *(int *)(param_1 + 8) = iVar1 + 8;
  DAT_010ee308 = param_2;
  return;
}



//==== 004d6634  ns=Global  size=0xd0
// sig: undefined FUN_004d6634(void)
// callers(2): 001d0f60 mobyupdate_helpers::M1111_Pokitaru_Ocean; 004d6948 idol_draw::ResetPassState
// callees(0): 

void FUN_004d6634(int param_1,ulonglong param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = param_2 >> 1 & 7;
  if ((int)uVar3 == 0) {
    **(undefined4 **)(param_1 + 8) = 0x40304;
    *(undefined4 *)(*(int *)(param_1 + 8) + 4) = 0;
    iVar2 = *(int *)(param_1 + 8) + 8;
  }
  else if ((param_2 & 1) == 0) {
    **(undefined4 **)(param_1 + 8) = 0x40304;
    *(undefined4 *)(*(int *)(param_1 + 8) + 4) = 0;
    iVar2 = *(int *)(param_1 + 8) + 8;
  }
  else {
    **(undefined4 **)(param_1 + 8) = 0x40304;
    *(undefined4 *)(*(int *)(param_1 + 8) + 4) = 1;
    iVar2 = *(int *)(param_1 + 8);
    *(int *)(param_1 + 8) = iVar2 + 8;
    uVar1 = *(undefined4 *)(&DAT_00658f1c + (int)(uVar3 << 2));
    *(undefined4 *)(iVar2 + 8) = 0x80308;
    *(undefined4 *)(*(int *)(param_1 + 8) + 4) = uVar1;
    *(uint *)(*(int *)(param_1 + 8) + 8) = (uint)(param_2 >> 4) & 0xff;
    iVar2 = *(int *)(param_1 + 8) + 0xc;
  }
  *(ulonglong *)(param_1 + 0xb8) = param_2;
  *(int *)(param_1 + 8) = iVar2;
  DAT_010ee2f0 = param_2;
  return;
}



//==== 004d6704  ns=Global  size=0x68
// sig: undefined FUN_004d6704(void)
// callers(4): 00072280 draw::FastDrawQuad; 0015aa80 skyfunc::SkySpriteProc; 0015f6d0 space::???_Space_TransitionDrawPass; 001d0f60 mobyupdate_helpers::M1111_Pokitaru_Ocean
// callees(0): 

void FUN_004d6704(ulonglong param_1,int *param_2,int *param_3)

{
  *param_2 = ((uint)((LZCOUNT(1 - ((uint)param_1 & 3)) << 0x3a) >> 0x3f) & 2) + 1;
  *param_3 = ((uint)((LZCOUNT(1 - ((uint)(param_1 >> 2) & 3)) << 0x3a) >> 0x3f) & 2) + 1;
  return;
}



//==== 004d676c  ns=Global  size=0x11c
// sig: undefined FUN_004d676c(void)
// callers(20): 00072280 draw::FastDrawQuad; 000731c8 draw::DrawTexturedStrips; 00073de0 draw::DrawLavaStrips; 00074fa0 draw::ImpactSprite_Draw; 00076328 draw::???_Water_SetPassTextures; 00076580 draw::DrawWater; 000f7af0 mobyfunc::MB_BuildDrawEntry; 0015aa80 skyfunc::SkySpriteProc; 0015f6d0 space::???_Space_TransitionDrawPass; 0017cfdc water::WaterTile_DrawAll; 0017d4b8 water::WaterSheet_DrawAll; 0017dd20 water::OceanPass; 001d0f60 mobyupdate_helpers::M1111_Pokitaru_Ocean; 002d40b8 mobyupdate_helpers::M1901_002d40b8; 004d6888 FUN_004d6888; 004d6948 idol_draw::ResetPassState; 00508c10 shrubfunc::DrawShrub; 0050b0bc tfragfunc::DrawTfrag; 0050c5e0 tiefunc::DrawTie; 0050d240 FUN_0050d240
// callees(0): 

void FUN_004d676c(int param_1,ulonglong param_2,undefined4 *param_3,uint param_4,ulonglong param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((int)param_2 == 0) {
    DAT_010ee2f8 = param_3;
    *(undefined4 **)(param_1 + 0xc0) = param_3;
  }
  if ((param_2 & 0xffffffff) < 4) {
    iVar4 = param_1 + (int)(param_2 << 5) + (int)(param_2 << 2);
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    *(undefined4 *)(iVar4 + 0x14) = *param_3;
    *(undefined4 *)(iVar4 + 0x18) = uVar1;
    *(undefined4 *)(iVar4 + 0x1c) = uVar2;
    *(undefined4 *)(iVar4 + 0x20) = uVar3;
    uVar1 = param_3[5];
    uVar2 = param_3[6];
    uVar3 = param_3[7];
    *(undefined4 *)(iVar4 + 0x24) = param_3[4];
    *(undefined4 *)(iVar4 + 0x28) = uVar1;
    *(undefined4 *)(iVar4 + 0x2c) = uVar2;
    *(undefined4 *)(iVar4 + 0x30) = uVar3;
    *(undefined4 *)(iVar4 + 0x34) = param_3[8];
  }
  **(uint **)(param_1 + 8) = (int)((param_2 & 0xffffffff) << 5) + 0x1a00U | 0x1c0000;
  *(undefined4 *)(*(int *)(param_1 + 8) + 4) = *param_3;
  *(undefined4 *)(*(int *)(param_1 + 8) + 8) = param_3[1];
  *(uint *)(*(int *)(param_1 + 8) + 0xc) = (uint)((param_5 & 0xffffffff) << 8) | 0x10000 | param_4;
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x10) = param_3[3];
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x14) = param_3[4];
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x18) = param_3[5];
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x1c) = param_3[6];
  *(uint *)(*(int *)(param_1 + 8) + 0x20) = (int)((param_2 & 0xffffffff) << 2) + 0x1840U | 0x40000;
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x24) = param_3[7];
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x28;
  return;
}



//==== 004d6888  ns=Global  size=0xc0
// sig: undefined FUN_004d6888(void)
// callers(0): 
// callees(1): 004d676c FUN_004d676c

void FUN_004d6888(int param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  if ((int)param_2 == 0) {
    *(ulonglong *)(param_1 + 0xa8) = param_4;
    TexSamplerFlags = param_4;
  }
  FUN_004d676c(param_1,param_2,param_3,((LZCOUNT(1 - ((uint)param_4 & 3)) << 0x3a) >> 0x3f & 2U) + 1
               ,((LZCOUNT(1 - ((uint)(param_4 >> 2) & 3)) << 0x3a) >> 0x3f & 2U) + 1);
  return;
}



//==== 004d6948  ns=idol_draw  size=0x268
// sig: undefined ResetPassState(void)
// callers(34): 000127e0 boot::DrawSplashScreen; 000685e0 draw::DrawFullScreenQuad; 0006889c draw::Sprite_DrawShape; 0006968c draw::DrawSpriteFont; 0006e740 draw::Sprite_DrawRotated; 0006ecf8 draw::DrawTexturedQuadHud; 00072280 draw::FastDrawQuad; 00074150 draw::FastDrawStripColor; 000ca0f4 hud::Hud_DrawTexQuad_v2; 000ca464 hud::Hud_DrawTexQuad_v3; 000ca72c hud::DrawFlatOverlay; 000cbb98 hud::Hud_DrawTexQuad; 000cbe60 hud::Hud_DrawTexHeaderQuad; 000d24ec hud::Hud_DrawEffectTexQuad; 000d6c14 hud::Hud_DrawTexQuad4Pt; 000d6f5c hud::Hud_DrawTexQuadF; 000d721c hud::Hud_DrawEffectTexQuadUV; 000d751c hud::Hud_DrawTexQuadUV; 000d78a4 hud::Hud_DrawTexQuadF_v2; 000d7c38 hud::Hud_DrawTexQuadF_v3; 000d7f88 hud::Hud_DrawTexQuadF_v4; 000d8364 hud::DrawSprite2; 000d865c hud::Hud_DrawEffectTexLine; 000e2e10 map::DrawMapFrame; 0015aa80 skyfunc::SkySpriteProc
// callees(3): 004d5fe4 idol_draw::DrawDepth; 004d6634 FUN_004d6634; 004d676c FUN_004d676c

void idol_draw::ResetPassState(RenderingStep *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  RsxCmd *pRVar9;
  longlong lVar8;
  longlong lVar10;
  longlong lVar11;
  
  if ((DAT_010ee318 != -1) &&
     (lVar10._0_4_ = param_1[0xb].commandLen, lVar10._4_4_ = param_1[0xb].command,
     DAT_010ee318 != lVar10)) {
    DrawDepth(param_1,DAT_010ee318);
  }
  iVar1._0_1_ = param_1[0xc].field0_0x0;
  iVar1._1_1_ = param_1[0xc].field1_0x1;
  iVar1._2_1_ = param_1[0xc].field2_0x2;
  iVar1._3_1_ = param_1[0xc].field3_0x3;
  if (((iVar1 == 0) && (DAT_010ee308 != 0xffffffffffffffff)) &&
     (uVar7._0_4_ = param_1[10].command, uVar7._4_4_ = param_1[10].callback, DAT_010ee308 != uVar7))
  {
    if ((DAT_010ee308 & 1) == 0) {
      *param_1->command = NV4097_SET_DEPTH_MASK_x1;
      param_1->command[1] = 1;
      pRVar9 = param_1->command;
    }
    else {
      *param_1->command = NV4097_SET_DEPTH_MASK_x1;
      param_1->command[1] = 0;
      pRVar9 = param_1->command;
    }
    param_1[10].command = (RsxCmd *)DAT_010ee308._0_4_;
    param_1[10].callback = (undefined *)DAT_010ee308._4_4_;
    param_1->command = pRVar9 + 2;
  }
  puVar2 = DAT_010ee2f8;
  if ((DAT_010ee2f8 != (undefined *)0x0) && (DAT_010ee2f8 != param_1[9].callback)) {
    param_1[8].command = (RsxCmd *)TexSamplerFlags._0_4_;
    param_1[8].callback = (undefined *)TexSamplerFlags._4_4_;
    FUN_004d676c(param_1,0,puVar2,
                 ((LZCOUNT(1 - ((uint)TexSamplerFlags & 3)) << 0x3a) >> 0x3f & 2U) + 1,
                 ((LZCOUNT(1 - ((uint)(TexSamplerFlags >> 2) & 3)) << 0x3a) >> 0x3f & 2U) + 1);
  }
  if ((DAT_010ee2fc != 0) && (DAT_010ee2fc != param_1[9].field7_0x10)) {
    FUN_004d676c(param_1,1,DAT_010ee2fc,
                 ((LZCOUNT(1 - ((uint)DAT_010ee2e8 & 3)) << 0x3a) >> 0x3f & 2U) + 1,
                 ((LZCOUNT(1 - ((uint)(DAT_010ee2e8 >> 2) & 3)) << 0x3a) >> 0x3f & 2U) + 1);
  }
  if ((DAT_010ee310 != -1) && (DAT_010ee310 != *(longlong *)&param_1[10].field7_0x10)) {
    *(longlong *)&param_1[10].field7_0x10 = DAT_010ee310;
  }
  if (((DAT_010ee328 != '\0') && (DAT_010ee2f0 != -1)) &&
     (lVar11._0_4_ = param_1[9].commandLen, lVar11._4_4_ = param_1[9].command,
     DAT_010ee2f0 != lVar11)) {
    FUN_004d6634(param_1,DAT_010ee2f0);
  }
  if ((DAT_010ee300 != -1) &&
     (lVar8._0_1_ = param_1[10].field0_0x0, lVar8._1_1_ = param_1[10].field1_0x1,
     lVar8._2_1_ = param_1[10].field2_0x2, lVar8._3_1_ = param_1[10].field3_0x3,
     lVar8._4_4_ = param_1[10].commandLen, DAT_010ee300 != lVar8)) {
    uVar3 = DAT_010ee300._1_1_;
    uVar4 = DAT_010ee300._2_1_;
    uVar5 = DAT_010ee300._3_1_;
    uVar6 = DAT_010ee300._4_4_;
    param_1[10].field0_0x0 = DAT_010ee300._0_1_;
    param_1[10].field1_0x1 = uVar3;
    param_1[10].field2_0x2 = uVar4;
    param_1[10].field3_0x3 = uVar5;
    param_1[10].commandLen = uVar6;
  }
  return;
}



//==== 004d6bb0  ns=Global  size=0x150
// sig: undefined FUN_004d6bb0(RenderingStep * param_1, undefined8 param_2, undefined4 param_3)
// callers(7): 0006968c draw::DrawSpriteFont; 0006e740 draw::Sprite_DrawRotated; 002d4ad0 mobyupdate_helpers::M1903_002d4ad0; 002d9948 mobyupdate_helpers::M1919_002d9948; 004d5594 FUN_004d5594; 00509d60 FUN_00509d60; 0050a538 idol_draw::DrawSkyShell
// callees(0): 

void FUN_004d6bb0(RenderingStep *param_1,ulonglong param_2,RsxCmd *param_3)

{
  RsxCmd RVar1;
  RsxCmd RVar2;
  RsxCmd RVar3;
  int iVar4;
  
  if ((int)param_2 == 0) {
    DAT_010ee2f8 = param_3;
    param_1[9].callback = (undefined *)param_3;
  }
  if (((3 < (param_2 & 0xffffffff)) ||
      (iVar4 = (int)(param_2 << 5) + (int)(param_2 << 2),
      *(RsxCmd *)(&param_1[1].field0_0x0 + iVar4) != *param_3)) ||
     (*(RsxCmd *)((int)&param_1[1].command + iVar4) != param_3[2])) {
    if ((param_2 & 0xffffffff) < 4) {
      iVar4 = (int)(param_2 << 5) + (int)(param_2 << 2);
      RVar1 = param_3[1];
      RVar2 = param_3[2];
      RVar3 = param_3[3];
      *(RsxCmd *)(&param_1[1].field0_0x0 + iVar4) = *param_3;
      *(RsxCmd *)((int)&param_1[1].commandLen + iVar4) = RVar1;
      *(RsxCmd *)((int)&param_1[1].command + iVar4) = RVar2;
      *(RsxCmd *)((int)&param_1[1].callback + iVar4) = RVar3;
      RVar1 = param_3[5];
      RVar2 = param_3[6];
      RVar3 = param_3[7];
      *(RsxCmd *)((int)&param_1[1].field7_0x10 + iVar4) = param_3[4];
      *(RsxCmd *)(&param_1[2].field0_0x0 + iVar4) = RVar1;
      *(RsxCmd *)((int)&param_1[2].commandLen + iVar4) = RVar2;
      *(RsxCmd *)((int)&param_1[2].command + iVar4) = RVar3;
      *(RsxCmd *)((int)&param_1[2].callback + iVar4) = param_3[8];
    }
    *param_1->command = (int)((param_2 & 0xffffffff) << 5) + 0x1a00 | NV4097_SET_OBJECT_x7;
    param_1->command[1] = *param_3;
    param_1->command[2] = param_3[1];
    param_1->command[3] = param_3[2];
    param_1->command[4] = param_3[3];
    param_1->command[5] = param_3[4];
    param_1->command[6] = param_3[5];
    param_1->command[7] = param_3[6];
    param_1->command[8] = (int)((param_2 & 0xffffffff) << 2) + 0x1840 | NV4097_SET_OBJECT_x1;
    param_1->command[9] = param_3[7];
    param_1->command = param_1->command + 10;
  }
  return;
}



//==== 004d6d00  ns=idol_draw  size=0x160
// sig: undefined SetTextureUnitRegs(void)
// callers(23): 000ca0f4 hud::Hud_DrawTexQuad_v2; 000ca464 hud::Hud_DrawTexQuad_v3; 000ca72c hud::DrawFlatOverlay; 000cbb98 hud::Hud_DrawTexQuad; 000cbe60 hud::Hud_DrawTexHeaderQuad; 000d24ec hud::Hud_DrawEffectTexQuad; 000d6c14 hud::Hud_DrawTexQuad4Pt; 000d6f5c hud::Hud_DrawTexQuadF; 000d721c hud::Hud_DrawEffectTexQuadUV; 000d751c hud::Hud_DrawTexQuadUV; 000d78a4 hud::Hud_DrawTexQuadF_v2; 000d7c38 hud::Hud_DrawTexQuadF_v3; 000d7f88 hud::Hud_DrawTexQuadF_v4; 000d8364 hud::DrawSprite2; 000d865c hud::Hud_DrawEffectTexLine; 000e2e10 map::DrawMapFrame; 0021ccd8 mobyupd::update1242::M1242_0021ccd8; 0021cf80 mobyupd::update1242::M1242_0021cf80; 0025e7a4 mobyupd::update1379::M1379_DrawShapeScaled; 0025ea4c mobyupd::update1379::M1379_DrawShapeRotated; 0041873c mobyupdate_helpers::M688_0041873c; 004189e4 mobyupdate_helpers::M688_004189e4; 004d6e60 idol_draw::BindTexture
// callees(0): 

void idol_draw::SetTextureUnitRegs(int param_1,ulonglong param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((int)param_2 == 0) {
    DAT_010ee2f8 = param_3;
    *(int **)(param_1 + 0xc0) = param_3;
  }
  if (((3 < (param_2 & 0xffffffff)) ||
      (iVar3 = param_1 + (int)(param_2 << 5) + (int)(param_2 << 2),
      *(int *)(iVar3 + 0x14) != *param_3)) || (*(int *)(iVar3 + 0x1c) != param_3[2])) {
    if ((param_2 & 0xffffffff) < 4) {
      iVar4 = param_1 + (int)(param_2 << 5) + (int)(param_2 << 2);
      iVar3 = param_3[1];
      iVar1 = param_3[2];
      iVar2 = param_3[3];
      *(int *)(iVar4 + 0x14) = *param_3;
      *(int *)(iVar4 + 0x18) = iVar3;
      *(int *)(iVar4 + 0x1c) = iVar1;
      *(int *)(iVar4 + 0x20) = iVar2;
      iVar3 = param_3[5];
      iVar1 = param_3[6];
      iVar2 = param_3[7];
      *(int *)(iVar4 + 0x24) = param_3[4];
      *(int *)(iVar4 + 0x28) = iVar3;
      *(int *)(iVar4 + 0x2c) = iVar1;
      *(int *)(iVar4 + 0x30) = iVar2;
      *(int *)(iVar4 + 0x34) = param_3[8];
    }
    **(uint **)(param_1 + 8) = (int)((param_2 & 0xffffffff) << 5) + 0x1a00U | 0x1c0000;
    *(int *)(*(int *)(param_1 + 8) + 4) = *param_3;
    *(uint *)(*(int *)(param_1 + 8) + 8) = param_3[1] & 0xffffU | 0x14000;
    *(int *)(*(int *)(param_1 + 8) + 0xc) = param_3[2];
    *(int *)(*(int *)(param_1 + 8) + 0x10) = param_3[3];
    *(int *)(*(int *)(param_1 + 8) + 0x14) = param_3[4];
    *(int *)(*(int *)(param_1 + 8) + 0x18) = param_3[5];
    *(int *)(*(int *)(param_1 + 8) + 0x1c) = param_3[6];
    *(uint *)(*(int *)(param_1 + 8) + 0x20) = (int)((param_2 & 0xffffffff) << 2) + 0x1840U | 0x40000
    ;
    *(int *)(*(int *)(param_1 + 8) + 0x24) = param_3[7];
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x28;
  }
  return;
}



//==== 004d6e60  ns=idol_draw  size=0xd0
// sig: undefined BindTexture(void)
// callers(4): 000127e0 boot::DrawSplashScreen; 000685e0 draw::DrawFullScreenQuad; 0006889c draw::Sprite_DrawShape; 0006ecf8 draw::DrawTexturedQuadHud
// callees(1): 004d6d00 idol_draw::SetTextureUnitRegs

void idol_draw::BindTexture(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_30 [48];
  
  SetTextureUnitRegs(param_1,param_2,local_30);
  return;
}



//==== 004d6f50  ns=Global  size=0x138
// sig: undefined FUN_004d6f50(void)
// callers(4): 000e8ca0 memcard::memcard_RestoreSaveGame; 0013af10 pause::Menu_UpdateViewMtxIfChanged; 0013b838 pause::UpdatePause; 0013d708 pause::FrontEnd_ShutdownMenu
// callees(0): 

void FUN_004d6f50(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  iVar3 = (int)param_1;
  auVar5._0_4_ = param_2;
  auVar5._4_4_ = param_2;
  auVar5._8_4_ = param_2;
  auVar5._12_4_ = param_2;
  if (*(char *)(iVar3 + 0x185a4) != '\0') {
    auVar8 = ZEXT416(0xffffffff);
    auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
    auVar4 = vectorConvertFromSignedFixedPointWord(auVar5,0);
    auVar5 = ZEXT416(0xffffffff);
    auVar11 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
    auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
    auVar5 = loadVectorLeftIndexed(4,0x4d6f30);
    auVar6 = loadVectorLeftIndexed(8,0x4d6f30);
    auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar8 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
    auVar5 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar7 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
    auVar5 = loadVectorLeftIndexed(0x185a8,param_1);
    auVar6 = loadVectorLeftIndexed(0x30,0x4d6f30);
    auVar12 = loadVectorLeftIndexed(0xc,0x4d6f30);
    auVar10 = vectorNegativeMultiplySubtractFloatingPoint(auVar5,auVar8,auVar7);
    auVar9 = vectorMultiplyAddFloatingPoint(auVar5,auVar8,auVar9);
    auVar8 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar5 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar12 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
    auVar5 = vectorShiftLeftIntegerWord(auVar11,auVar11);
    auVar11 = loadVectorLeftIndexed(0x10,0x4d6f30);
    *(int *)(iVar3 + 0x1a80) = param_2;
    auVar6 = vectorMultiplyAddFloatingPoint(auVar4,auVar12,auVar5);
    auVar4 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar5 = ZEXT416(0xffffffff);
    auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
    iVar1 = *(int *)(iVar3 + 0x4a0);
    auVar8 = vectorMultiplyAddFloatingPoint
                       (auVar9,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar10);
    auVar9 = vectorShiftLeftIntegerWord(auVar5,auVar5);
    auVar5 = ZEXT416(0xffffffff);
    auVar10 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
    auVar5 = vectorAddFloatingPoint
                       (auVar8,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60);
    auVar10 = vectorShiftLeftIntegerWord(auVar10,auVar10);
    auVar8 = vectorMultiplyAddFloatingPoint(auVar6,auVar5,auVar9);
    auVar5 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar8 = vectorSubtractFloatingPoint(auVar8,auVar12);
    uVar2 = storeVectorElementWordIndexed
                      (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0x1a78,param_1);
    *(undefined4 *)(iVar3 + 0x1a78U & 0xfffffffc) = uVar2;
    auVar5 = loadVectorLeftIndexed(0x14,0x4d6f30);
    auVar4 = loadVectorLeftIndexed(0x18,0x4d6f30);
    auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar8 = vectorMultiplyAddFloatingPoint
                       (auVar8,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar10);
    auVar5 = auVar4 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar5 = vectorMultiplyAddFloatingPoint
                       (auVar8,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar7);
    auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0x1a84,param_1);
    *(undefined4 *)(iVar3 + 0x1a84U & 0xfffffffc) = uVar2;
    if (param_2 == 0 && iVar1 == 1) {
      *(undefined4 *)(iVar3 + 0x4a4) = 0;
    }
    else if ((0 < param_2) && (iVar1 == 0)) {
      *(undefined4 *)(iVar3 + 0x4a4) = 1;
    }
  }
  return;
}



//==== 004d7088  ns=Global  size=0x118
// sig: undefined FUN_004d7088(void)
// callers(2): 000148f8 boot::StaticInit_BootGlobals; 004d71a0 FUN_004d71a0
// callees(1): 005d0140 libc::memset

void FUN_004d7088(undefined4 *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  param_1[3] = 1;
  *param_1 = &PTR_PTR_00661710;
  param_1[7] = 0;
  param_1[0x107] = param_1 + 0x108;
  libc::memset(param_1 + 0x108,0xff,0x80);
  DAT_00902e9c = param_1;
  *param_1 = &PTR_PTR_00661840;
  lVar2 = 3;
  puVar1 = param_1;
  do {
    puVar1[0x680] = 0;
    puVar1[0x681] = 0;
    puVar1[0x682] = 0;
    puVar1[0x683] = 0;
    *(undefined1 *)(puVar1 + 0x684) = 0;
    *(undefined1 *)((int)puVar1 + 0x1a11) = 0;
    puVar1[0x685] = 0;
    puVar1[0x686] = &DAT_0066173c;
    puVar1[0x687] = 0;
    puVar1[0x688] = 0;
    puVar1 = puVar1 + 9;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  param_1[0x8b7] = 0x42a00000;
  param_1[0x8ba] = 0x437a0000;
  param_1[0x8b8] = 0x3f333333;
  param_1[0x8b9] = 0x3dcccccd;
  param_1[0x129] = 0;
  param_1[0x128] = 0;
  g_viewMtxPtr = param_1;
  param_1[0x69e] = 0x3ac49ba6;
  param_1[0x69f] = 0x3f000000;
  param_1[0x6a2] = 0;
  param_1[0x6a0] = 0;
  param_1[0x6a1] = 0x3f800000;
  return;
}



//==== 004d71a0  ns=Global  size=0x20
// sig: undefined FUN_004d71a0(void)
// callers(0): 
// callees(1): 004d7088 FUN_004d7088

void FUN_004d71a0(void)

{
  FUN_004d7088();
  return;
}



//==== 004d71c0  ns=Global  size=0x114
// sig: undefined FUN_004d71c0(void)
// callers(0): 
// callees(4): 004fe098 idol::AllocateMemAlign; 0050436c FUN_0050436c; 005c5ad0 libc::memcpy; 0064f2a4 cell::cellGcmAddressToOffset

void * FUN_004d71c0(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined1 auStack_c0 [4];
  undefined1 auStack_bc [96];
  undefined1 auStack_5c [60];
  
  uVar1 = FUN_0050436c(boot::g_pGame);
  uVar2 = idol::AllocateMemAlign(uVar1,0x60,0x40);
  pvVar3 = (void *)idol::AllocateMemAlign(uVar1,0x30,0x40);
  *(int *)(param_1 + 0x1859c) = (int)(void *)uVar2 - *(int *)(param_1 + 0x4a8);
  *(int *)(param_1 + 0x185a0) = (int)pvVar3 - *(int *)(param_1 + 0x4a8);
  cell::cellGcmAddressToOffset(uVar2,auStack_c0);
  libc::memcpy(auStack_bc,&DAT_008fa56c,0x60);
  libc::memcpy(auStack_5c,&DAT_008fa5cc,0x30);
  libc::memcpy((void *)uVar2,auStack_bc,0x60);
  pvVar3 = libc::memcpy(pvVar3,auStack_5c,0x30);
  return pvVar3;
}



//==== 004d72d4  ns=Global  size=0x4
// sig: undefined FUN_004d72d4(void)
// callers(0): 
// callees(0): 

void FUN_004d72d4(void)

{
  return;
}



//==== 004d72d8  ns=Global  size=0x18c
// sig: undefined FUN_004d72d8(void)
// callers(1): 004d7464 FUN_004d7464
// callees(1): 0064f244 cell::cellGcmGetTiledPitchSize

void FUN_004d72d8(int param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x185a4) == '\0') {
    *(undefined4 *)(param_1 + 0x185d0) = 0;
    *(undefined4 *)(param_1 + 0x185c4) = 0;
    *(undefined4 *)(param_1 + 0x185c8) = 0;
    *(undefined4 *)(param_1 + 0x185cc) = 0;
  }
  else {
    lVar3 = ((ulonglong)*(uint *)(param_1 + 0x185ac) - 1 & 0xffffffc0) + 0x40;
    iVar1 = cell::cellGcmGetTiledPitchSize
                      ((lVar3 + ((LZCOUNT(-*(uint *)(param_1 + 0x185ac)) << 0x3a) >> 0x3f & -lVar3)
                       & 0x3fffffffU) << 2);
    *(int *)(param_1 + 0x185c4) = iVar1;
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x185a4) = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 0x185b0) - 1U & 0xffffffe0) + 0x20;
      iVar2 = iVar1 * (iVar2 + ((uint)((LZCOUNT(-*(int *)(param_1 + 0x185b0)) << 0x3a) >> 0x3f) &
                               -iVar2));
      iVar4 = (iVar2 - 1U & 0xffff0000) + 0x10000;
      *(uint *)(param_1 + 0x185c8) = iVar4 + ((uint)((LZCOUNT(-iVar2) << 0x3a) >> 0x3f) & -iVar4);
      *(undefined4 *)(param_1 + 0x185cc) = 6;
      *(int *)(param_1 + 0x185d0) = iVar1 * 0x2e8;
    }
  }
  return;
}



//==== 004d7464  ns=Global  size=0xce4
// sig: undefined FUN_004d7464(void)
// callers(1): 004d8148 FUN_004d8148
// callees(30): 004d72d8 FUN_004d72d8; 004e40d8 FUN_004e40d8; 004e54e8 FUN_004e54e8; 004e580c FUN_004e580c; 004fe048 FUN_004fe048; 004fe098 idol::AllocateMemAlign; 004fe39c FUN_004fe39c; 004fe52c idol::kalloc; 004fe5ec FUN_004fe5ec; 004fe6ec FUN_004fe6ec; 00504374 FUN_00504374; 0050e794 FUN_0050e794; 0050f034 FUN_0050f034; 005c5ad0 libc::memcpy; 005cd098 libc::printf; 005d0140 libc::memset; 0064ee24 cell::cellVideoOutGetScreenSize; 0064f244 cell::cellGcmGetTiledPitchSize; 0064f2a4 cell::cellGcmAddressToOffset; 0064f304 cell::cellGcmSetFlipMode; 0064f324 cell::cellGcmMapEaIoAddress; 0064f364 cell::cellGcmGetControlRegister; 0064f444 cell::cellGcmGetConfiguration; 0064f484 cell::cellSysmoduleUnloadModule; 0064f4a4 cell::cellSysmoduleLoadModule; 0064f4c4 cell::cellVideoOutConfigure; 0064f524 cell::cellVideoOutGetDeviceInfo; 0064f624 cell::cellVideoOutGetState; 0064f664 cell::cellVideoOutGetResolutionAvailability; 0064f6a4 cell::cellVideoOutGetResolution
// strings: 00658f54: 'FrameMem' | 00658f64: 'Resolution ID reported by the system = %d\n' | 00658f94: 'Aspect ID reported by the system     = %d\n' | 00658fc4: 'Scanmode ID reported by the system   = %d\n' | 00658ff4: '1080 was the mode reported by the system, check if 720 is available\n' | 0065903c: '720 is available, using it\n' | 0065905c: '720 is not available, using 1080\n' | 00659084: 'the system provided mode is available - using it\n' | 006590bc: 'the system provided mode is not available - picking a new mode from the available\n' | 00659114: '%d video modes are available\n' | 00659134: 'Mode %d: Resolution ID %d, Aspect %d, Scan %d\n' | 00659164: 'Picked mode %d: Resolution ID %d, Aspect %d, Scan %d\n' | 0065919c: 'ERROR: cellVideoOutConfigure() failed. (0x%x)\n'

void FUN_004d7464(int param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 uVar6;
  undefined8 uVar4;
  int iVar7;
  ulonglong uVar5;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auStack_250 [4];
  undefined1 auStack_24c [4];
  byte local_248;
  byte abStack_22c [6];
  ushort auStack_226 [209];
  ushort local_84;
  ushort local_82;
  ushort local_80;
  ushort local_7e;
  undefined1 auStack_7c [8];
  byte local_74;
  byte local_73;
  byte local_71;
  ushort local_6e;
  byte abStack_6c [36];
  
  uVar3 = idol::AllocateMemAlign(param_2,0x100000,0x100000);
  uVar6 = FUN_004fe048(param_2);
  uVar4 = FUN_004fe5ec(param_2);
  FUN_0050f034(0x10000,uVar6,uVar4);
  uVar4 = FUN_004fe5ec(param_2);
  cell::cellGcmAddressToOffset(uVar4,auStack_250);
  uVar6 = FUN_004fe5ec(param_2);
  *(undefined4 *)(param_1 + 0x4a8) = uVar6;
  FUN_004fe5ec(param_2);
  FUN_004fe6ec(param_2,0x10000);
  cell::cellGcmMapEaIoAddress(uVar3,0xef00000,0x100000);
  uVar12 = 0;
  iVar8 = param_1;
  do {
    iVar7 = idol::kalloc(param_2,0x180000);
    *(int *)(iVar8 + 0x4b0) = iVar7;
    *(int *)(iVar8 + 0x4b8) = iVar7;
    *(undefined4 *)(iVar8 + 0x4bc) = 0;
    *(undefined4 *)(iVar8 + 0x4c0) = 0x180000;
    *(int *)(iVar8 + 0x4b4) = iVar7 + 0x180000;
    libc::memset(iVar8 + 0x4c4,0,0x90);
    *(undefined4 *)(iVar8 + 0x5a0) = 0;
    iVar7 = idol::kalloc(param_2,0x80000);
    *(int *)(iVar8 + 0x5a8) = iVar7;
    *(int *)(iVar8 + 0x5b0) = iVar7;
    *(undefined4 *)(iVar8 + 0x5b4) = 0;
    *(undefined4 *)(iVar8 + 0x5b8) = 0x80000;
    *(int *)(iVar8 + 0x5ac) = iVar7 + 0x80000;
    libc::memset(iVar8 + 0x5bc,0,0x90);
    *(undefined4 *)(iVar8 + 0x698) = 1;
    iVar7 = idol::kalloc(param_2,0x300000);
    *(int *)(iVar8 + 0x6a0) = iVar7;
    *(int *)(iVar8 + 0x6a8) = iVar7;
    *(undefined4 *)(iVar8 + 0x6ac) = 0;
    *(undefined4 *)(iVar8 + 0x6b0) = 0x300000;
    *(int *)(iVar8 + 0x6a4) = iVar7 + 0x300000;
    libc::memset(iVar8 + 0x6b4,0,0x90);
    *(undefined4 *)(iVar8 + 0x790) = 2;
    iVar7 = idol::kalloc(param_2,0x100000);
    *(int *)(iVar8 + 0x798) = iVar7;
    *(int *)(iVar8 + 0x7a0) = iVar7;
    *(undefined4 *)(iVar8 + 0x7a4) = 0;
    *(undefined4 *)(iVar8 + 0x7a8) = 0x100000;
    *(int *)(iVar8 + 0x79c) = iVar7 + 0x100000;
    libc::memset(iVar8 + 0x7ac,0,0x90);
    *(undefined4 *)(iVar8 + 0x888) = 3;
    iVar7 = idol::kalloc(param_2,0x100000);
    *(int *)(iVar8 + 0x890) = iVar7;
    *(int *)(iVar8 + 0x898) = iVar7;
    *(undefined4 *)(iVar8 + 0x89c) = 0;
    *(int *)(iVar8 + 0x894) = iVar7 + 0x100000;
    *(undefined4 *)(iVar8 + 0x8a0) = 0x100000;
    libc::memset(iVar8 + 0x8a4,0,0x90);
    *(undefined4 *)(iVar8 + 0x980) = 4;
    iVar7 = idol::kalloc(param_2,0x100000);
    *(int *)(iVar8 + 0xc70) = iVar7;
    *(int *)(iVar8 + 0xc78) = iVar7;
    *(undefined4 *)(iVar8 + 0xc7c) = 0;
    *(undefined4 *)(iVar8 + 0xc80) = 0x100000;
    *(int *)(iVar8 + 0xc74) = iVar7 + 0x100000;
    libc::memset(iVar8 + 0xc84,0,0x90);
    *(undefined4 *)(iVar8 + 0xd60) = 8;
    iVar7 = idol::kalloc(param_2,0x400000);
    *(int *)(iVar8 + 0xd68) = iVar7;
    *(int *)(iVar8 + 0xd70) = iVar7;
    *(undefined4 *)(iVar8 + 0xd74) = 0;
    *(undefined4 *)(iVar8 + 0xd78) = 0x400000;
    *(int *)(iVar8 + 0xd6c) = iVar7 + 0x400000;
    libc::memset(iVar8 + 0xd7c,0,0x90);
    *(undefined4 *)(iVar8 + 0xe58) = 9;
    iVar7 = idol::kalloc(param_2,0x100000);
    *(int *)(iVar8 + 0xa80) = iVar7;
    *(int *)(iVar8 + 0xa88) = iVar7;
    *(undefined4 *)(iVar8 + 0xa8c) = 0;
    *(int *)(iVar8 + 0xa84) = iVar7 + 0x100000;
    *(undefined4 *)(iVar8 + 0xa90) = 0x100000;
    libc::memset(iVar8 + 0xa94,0,0x90);
    *(undefined4 *)(iVar8 + 0xb70) = 6;
    iVar7 = idol::kalloc(param_2,0x100000);
    *(int *)(iVar8 + 0xb78) = iVar7;
    *(int *)(iVar8 + 0xb80) = iVar7;
    *(undefined4 *)(iVar8 + 0xb84) = 0;
    *(undefined4 *)(iVar8 + 0xb88) = 0x100000;
    *(int *)(iVar8 + 0xb7c) = iVar7 + 0x100000;
    libc::memset(iVar8 + 0xb8c,0,0x90);
    *(undefined4 *)(iVar8 + 0xc68) = 7;
    iVar7 = idol::kalloc(param_2,0x200000);
    *(int *)(iVar8 + 0x988) = iVar7;
    *(int *)(iVar8 + 0x990) = iVar7;
    *(undefined4 *)(iVar8 + 0x994) = 0;
    *(undefined4 *)(iVar8 + 0x998) = 0x200000;
    *(int *)(iVar8 + 0x98c) = iVar7 + 0x200000;
    libc::memset(iVar8 + 0x99c,0,0x90);
    *(undefined4 *)(iVar8 + 0xa78) = 5;
    iVar7 = idol::kalloc(param_2,0x100000);
    *(int *)(iVar8 + 0xe60) = iVar7;
    *(int *)(iVar8 + 0xe68) = iVar7;
    *(undefined4 *)(iVar8 + 0xe6c) = 0;
    *(int *)(iVar8 + 0xe64) = iVar7 + 0x100000;
    *(undefined4 *)(iVar8 + 0xe70) = 0x100000;
    libc::memset(iVar8 + 0xe74,0,0x90);
    uVar12 = uVar12 + 1;
    *(undefined4 *)(iVar8 + 0xf50) = 10;
    iVar8 = iVar8 + 0xaa8;
  } while (uVar12 < 2);
  uVar12 = 0;
  iVar8 = param_1;
  do {
    uVar3 = idol::AllocateMemAlign(param_2,0xa00000,0x80);
    FUN_004fe39c(iVar8 + 0x1a00,uVar3,0xa00000,"FrameMem",0,param_2);
    uVar12 = uVar12 + 1;
    iVar8 = iVar8 + 0x24;
  } while (uVar12 < 3);
  cell::cellGcmGetConfiguration(&DAT_010ef508);
  DAT_010ef520 = (int *)cell::cellGcmGetControlRegister();
  FUN_00504374(boot::g_pGame,DAT_010ef508,DAT_010ef510);
  uVar5 = ZEXT48(boot::g_pGame);
  *(undefined4 *)(param_1 + 0x4ac) = DAT_010ef508;
  *(undefined4 *)(param_1 + 4) = 0x500;
  *(undefined4 *)(param_1 + 8) = 0x2d0;
  cell::cellVideoOutGetState(0,0,auStack_7c);
  libc::printf("Resolution ID reported by the system = %d\n",(ulonglong)local_74);
  libc::printf("Aspect ID reported by the system     = %d\n",(ulonglong)local_71);
  libc::printf("Scanmode ID reported by the system   = %d\n",(ulonglong)local_73);
  if ((local_74 == 1) || ((9 < local_74 && (local_74 < 0xe)))) {
    libc::printf("1080 was the mode reported by the system, check if 720 is available\n");
    iVar8 = cell::cellVideoOutGetResolutionAvailability(0,2,0,0);
    if (iVar8 == 0) {
      libc::printf("720 is not available, using 1080\n");
      *(undefined1 *)(param_1 + 0x11) = 1;
      local_74 = 1;
    }
    else {
      libc::printf("720 is available, using it\n");
      *(undefined1 *)(param_1 + 0x11) = 2;
      local_74 = 2;
    }
  }
  else {
    *(byte *)(param_1 + 0x11) = local_74;
  }
  uVar12 = (uint)local_71;
  iVar8 = cell::cellVideoOutGetResolutionAvailability(0,local_74,(uint)local_71,0);
  if (iVar8 == 0) {
    libc::printf(
                "the system provided mode is not available - picking a new mode from the available\n"
                );
    cell::cellVideoOutGetDeviceInfo(0,0,auStack_24c);
    libc::printf("%d video modes are available\n",(ulonglong)local_248);
    uVar11 = 0;
    if (local_248 != 0) {
      do {
        iVar8 = (int)(uVar11 << 3);
        libc::printf("Mode %d: Resolution ID %d, Aspect %d, Scan %d\n",uVar11,
                     (ulonglong)abStack_22c[iVar8],(ulonglong)abStack_22c[iVar8 + 3],
                     (ulonglong)abStack_22c[iVar8 + 1]);
        uVar11 = uVar11 + 1 & 0xffffffff;
      } while (uVar11 < local_248);
    }
    libc::memcpy(abStack_6c,&DAT_008fa5fc,0x21);
    uVar9 = 0;
    uVar12 = (uint)local_71;
    do {
      uVar11 = 0;
      if (local_248 != 0) {
        iVar8 = uVar9 * 3;
        do {
          iVar7 = (int)(uVar11 << 3);
          if (((abStack_22c[iVar7] == abStack_6c[iVar8]) &&
              (abStack_22c[iVar7 + 3] == abStack_6c[iVar8 + 2])) &&
             (abStack_22c[iVar7 + 1] == abStack_6c[iVar8 + 1])) {
            libc::printf("Picked mode %d: Resolution ID %d, Aspect %d, Scan %d\n",uVar11,
                         (ulonglong)abStack_22c[iVar7],(ulonglong)abStack_22c[iVar7 + 3],
                         (ulonglong)abStack_22c[iVar7 + 1]);
            uVar1 = *(ushort *)(abStack_22c + iVar7 + 6);
            uVar12 = (uint)abStack_22c[iVar7 + 3];
            *(byte *)(param_1 + 0x11) = abStack_22c[iVar7];
            uVar9 = 0xb;
            *(uint *)(param_1 + 0x18) =
                 ((uint)((LZCOUNT(-(uVar1 & 2)) << 0x3a) >> 0x3f) & 10) + 0x32;
            break;
          }
          uVar11 = uVar11 + 1 & 0xffffffff;
        } while (uVar11 < (uint)local_248);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < 0xb);
  }
  else {
    libc::printf("the system provided mode is available - using it\n");
    *(uint *)(param_1 + 0x18) = ((uint)((LZCOUNT(-(local_6e & 2)) << 0x3a) >> 0x3f) & 10) + 0x32;
  }
  *(uint *)(param_1 + 0xc) = (uint)LZCOUNT(uVar12 - 1) >> 5 ^ 1;
  cell::cellVideoOutGetResolution(*(undefined1 *)(param_1 + 0x11),&local_84);
  uVar6 = cell::cellGcmGetTiledPitchSize((ulonglong)local_84 << 2);
  *(undefined4 *)(param_1 + 0x22ec) = 0;
  *(undefined4 *)(param_1 + 0x22f0) = 0;
  *(undefined4 *)(param_1 + 0x22f4) = 0;
  *(undefined1 *)(param_1 + 0x22ec) = *(undefined1 *)(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0x22f8) = uVar6;
  *(undefined1 *)(param_1 + 0x22ed) = 0;
  *(char *)(param_1 + 0x22ee) = (char)uVar12;
  uVar3 = cell::cellVideoOutConfigure(0,param_1 + 0x22ec,0,0);
  if ((int)uVar3 != 0) {
    libc::printf("ERROR: cellVideoOutConfigure() failed. (0x%x)\n",uVar3);
  }
  iVar8 = cell::cellVideoOutGetResolutionAvailability(0,0x81,0,0);
  *(byte *)(param_1 + 0x185a4) = (byte)((ulonglong)(LZCOUNT(iVar8) << 0x20) >> 0x25) ^ 1;
  if (iVar8 == 0) {
    *(uint *)(param_1 + 0x185ac) = (uint)local_84;
    *(uint *)(param_1 + 0x185b0) = (uint)local_82;
  }
  else {
    cell::cellSysmoduleLoadModule(0x31);
    cell::cellVideoOutGetScreenSize(0,param_1 + 0x185a8);
    cell::cellSysmoduleUnloadModule(0x31);
    cell::cellVideoOutGetResolution(0x81,&local_80);
    *(uint *)(param_1 + 0x185ac) = (uint)local_80;
    *(uint *)(param_1 + 0x185b0) = (uint)local_7e;
    *(uint *)(param_1 + 0x185b4) = (uint)local_80;
    *(uint *)(param_1 + 0x185b8) =
         (uint)local_7e +
         ((uint)((LZCOUNT(0x5be - (uint)local_7e) << 0x3a) >> 0x3f) & 0x2d0 - local_7e);
    FUN_004d72d8(param_1);
    *(undefined1 *)(param_1 + 0x11) = 0x81;
  }
  cell::cellGcmSetFlipMode(2);
  FUN_004e54e8(param_1 + 0x1d38,local_84,local_82,*(undefined4 *)(param_1 + 0x185ac),
               *(undefined4 *)(param_1 + 0x185b0),8);
  FUN_004e54e8(param_1 + 0x1e8c,local_84,local_82,*(undefined4 *)(param_1 + 0x185ac),
               *(undefined4 *)(param_1 + 0x185b0),8);
  FUN_004e40d8(param_1 + 0x1be4,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),0,8,0,2,3)
  ;
  FUN_004e40d8(param_1 + 0x2134,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),0,8,0,2,0)
  ;
  FUN_004e580c(param_1 + 0x1a90,0x200,0x200);
  FUN_004e40d8(param_1 + 0x1fe0,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),0,8,0,0,0)
  ;
  uVar3 = idol::AllocateMemAlign(uVar5 + 0x7c,0x40,0x80);
  *(int *)(param_1 + 0x18594) = (int)uVar3;
  cell::cellGcmAddressToOffset(uVar3,param_1 + 0x18598);
  puVar2 = *(undefined4 **)(param_1 + 0x18594);
  *puVar2 = 0xbf800000;
  puVar2[1] = 0x3f800000;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0xbf800000;
  puVar2[5] = 0xbf800000;
  puVar2[6] = 0;
  puVar2[7] = 0x3f800000;
  puVar2[8] = 0x3f800000;
  puVar2[9] = 0xbf800000;
  puVar2[10] = 0x3f800000;
  puVar2[0xb] = 0x3f800000;
  puVar2[0xc] = 0x3f800000;
  puVar2[0xd] = 0x3f800000;
  puVar2[0xe] = 0x3f800000;
  puVar2[0xf] = 0;
  uVar6 = idol::AllocateMemAlign(uVar5 + 0x7c,0x200000,0x80);
  iVar8 = *(int *)(param_1 + 0x4b0);
  iVar7 = *(int *)(param_1 + 0x4a8);
  *(undefined4 *)(param_1 + 0x2288) = uVar6;
  *(undefined4 *)(param_1 + 0x1a6c) = 0;
  *(undefined4 *)(param_1 + 0x1a70) = 1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  puVar10 = (uint *)FUN_0050e794();
  *puVar10 = iVar8 - iVar7 & 0x7fffffffU | 0x20000000;
  iVar8 = *(int *)(param_1 + 0x1a6c);
  iVar7 = param_1 + iVar8 * 0xaa8;
  DepthPass = (RenderingStep *)(iVar7 + 0x4b0);
  OceanForwardPass = (RenderingStep *)(param_1 + iVar8 * 0xaa8 + 0x5a8);
  ForwardPass = (RenderingStep *)(param_1 + iVar8 * 0xaa8 + 0x6a0);
  M_Depth = (RenderingStep *)(param_1 + iVar8 * 0xaa8 + 0x798);
  M_Pass = (RenderingStep *)(param_1 + iVar8 * 0xaa8 + 0x890);
  ShadowPass = (RenderingStep *)(param_1 + iVar8 * 0xaa8 + 0x988);
  MobyDepth = (RenderingStep *)(param_1 + iVar8 * 0xaa8 + 0xa80);
  MobyPass = (RenderingStep *)(param_1 + iVar8 * 0xaa8 + 0xb78);
  HUD_Pass = (RenderingStep *)(param_1 + iVar8 * 0xaa8 + 0xe60);
  DL_DepthPass = (RenderingStep *)(param_1 + iVar8 * 0xaa8 + 0xc70);
  DL_Pass = (RenderingStep *)(param_1 + iVar8 * 0xaa8 + 0xd68);
  uVar6 = *(undefined4 *)(param_1 + 0x1a70);
  FrameHeap = param_1 + (int)((ulonglong)*(uint *)(param_1 + 0x14) % 3) * 0x24 + 0x1a00;
  **(undefined4 **)(iVar7 + 0x4b8) = 0x40050;
  *(undefined4 *)(*(int *)(iVar7 + 0x4b8) + 4) = uVar6;
  *(int *)(iVar7 + 0x4b8) = *(int *)(iVar7 + 0x4b8) + 8;
  *(int *)(param_1 + 0x1a74) = *(int *)(param_1 + 0x1a70);
  *(int *)(param_1 + 0x1a70) = *(int *)(param_1 + 0x1a70) + 1;
  sync(0);
  *DAT_010ef520 = (int)DepthPass->command - *(int *)(param_1 + 0x4a8);
  *(undefined4 *)(param_1 + 0x185f0) = 0x2000;
  uVar6 = idol::AllocateMemAlign(param_2,0x20000,0x10);
  *(undefined4 *)(param_1 + 0x185f8) = uVar6;
  uVar6 = idol::AllocateMemAlign(param_2,*(int *)(param_1 + 0x185f0) << 4,0x10);
  *(undefined4 *)(param_1 + 0x185fc) = uVar6;
  if (*DAT_010ef520 != DAT_010ef520[1]) {
    do {
      syscall();
    } while (*DAT_010ef520 != DAT_010ef520[1]);
  }
  return;
}



//==== 004d8148  ns=Global  size=0x170
// sig: undefined FUN_004d8148(void)
// callers(0): 
// callees(5): 004d7464 FUN_004d7464; 004fe098 idol::AllocateMemAlign; 0050436c FUN_0050436c; 005c5ad0 libc::memcpy; 0064f2a4 cell::cellGcmAddressToOffset

void * FUN_004d8148(int *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined1 auStack_d0 [4];
  undefined1 auStack_cc [96];
  undefined1 auStack_6c [60];
  
  *(undefined1 *)(param_1 + 0x6164) = 0;
  *(undefined1 *)((int)param_1 + 0x18591) = 0;
  FUN_004d7464(param_1);
  (*(code *)**(undefined4 **)(*param_1 + 0xc))(param_1);
  uVar1 = FUN_0050436c(boot::g_pGame);
  uVar2 = idol::AllocateMemAlign(uVar1,0x60,0x40);
  pvVar3 = (void *)idol::AllocateMemAlign(uVar1,0x30,0x40);
  param_1[0x6167] = (int)(void *)uVar2 - param_1[0x12a];
  param_1[0x6168] = (int)pvVar3 - param_1[0x12a];
  cell::cellGcmAddressToOffset(uVar2,auStack_d0);
  libc::memcpy(auStack_cc,&DAT_008fa56c,0x60);
  libc::memcpy(auStack_6c,&DAT_008fa5cc,0x30);
  libc::memcpy((void *)uVar2,auStack_cc,0x60);
  pvVar3 = libc::memcpy(pvVar3,auStack_6c,0x30);
  param_1[0x8b6] = 0;
  return pvVar3;
}



//==== 004d82b8  ns=idol_draw  size=0x134
// sig: undefined BindFragmentProgram(void)
// callers(37): 0006e0d8 draw::DrawRenderTargetToScreen; 00071180 draw::SetScreenResolution; 00071ac0 draw::ResetHUDPass; 00072280 draw::FastDrawQuad; 0007278c draw::FastDrawStrip_DL; 00072ddc draw::FastDrawStrip_Pass; 00073678 draw::FastDrawStrip2UV_Pass; 00073a08 draw::FastDrawStrip2UV_PassNoState; 00074150 draw::FastDrawStripColor; 00074780 draw::FastDrawStripFog; 000e2e10 map::DrawMapFrame; 000f7af0 mobyfunc::MB_BuildDrawEntry; 0011ef18 partproc::DrawParts; 0015aa80 skyfunc::SkySpriteProc; 0015f6d0 space::???_Space_TransitionDrawPass; 00171d00 vendor::Vendor_SetupScreenRender; 001e6130 mobyupd::update1160::M1160_Hud_Draw; 0021e750 mobyupd::update1242::M1242_Hud_Draw; 002611a0 mobyupd::update1379::M1379_Hud_Draw; 0041b008 mobyupdate_helpers::M688_0041b008; 004d5880 FUN_004d5880; 004d5934 FUN_004d5934; 004d59e8 FUN_004d59e8; 004d8db8 FUN_004d8db8; 004d93ac idol_draw::Render_SetupPasses
// callees(0): 

void idol_draw::BindFragmentProgram(undefined8 param_1,int param_2,longlong param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  
  iVar4 = (int)(param_3 << 3) * 3;
  uVar2 = *(uint *)((int)&DAT_010ee670 + iVar4);
  **(undefined4 **)(param_2 + 8) = 0x408e4;
  *(uint *)(*(int *)(param_2 + 8) + 4) = uVar2 & 0x1fffffff | 1;
  iVar9 = *(int *)(param_2 + 8);
  uVar3 = *(undefined4 *)(iVar4 + 0x10ee674);
  *(int *)(param_2 + 8) = iVar9 + 8;
  *(undefined4 *)(iVar9 + 8) = 0x41ff4;
  *(undefined4 *)(*(int *)(param_2 + 8) + 4) = uVar3;
  uVar1 = *(ushort *)(iVar4 + 0x10ee678);
  puVar5 = (uint *)(*(int *)(param_2 + 8) + 8);
  uVar7 = (ulonglong)*(ushort *)(iVar4 + 0x10ee67a);
  uVar6 = (ulonglong)*(ushort *)(iVar4 + 0x10ee67c);
  *(uint **)(param_2 + 8) = puVar5;
  if (uVar1 != 0) {
    iVar9 = 0;
    uVar8 = (ulonglong)uVar1;
    do {
      if ((uVar8 & 1) != 0) {
        *puVar5 = iVar9 + 0xb40U | 0x40000;
        *(uint *)(*(int *)(param_2 + 8) + 4) = (uint)(uVar6 << 4) & 0x10 | (uint)uVar7 & 1;
        puVar5 = (uint *)(*(int *)(param_2 + 8) + 8);
        *(uint **)(param_2 + 8) = puVar5;
      }
      uVar2 = (uint)uVar8;
      uVar7 = (uVar7 << 0x20) >> 0x21;
      uVar6 = (uVar6 << 0x20) >> 0x21;
      iVar9 = iVar9 + 4;
      uVar8 = (uVar8 << 0x20) >> 0x21;
    } while (uVar2 >> 1 != 0);
  }
  uVar7 = (ulonglong)*(byte *)(iVar4 + 0x10ee684);
  uVar2 = *(uint *)(iVar4 + 0x10ee680);
  *puVar5 = 0x41d60;
  *(uint *)(*(int *)(param_2 + 8) + 4) =
       uVar2 | (uint)((uVar7 + ((longlong)(uVar7 - 2) >> 0x3f & 2 - uVar7) & 0xffffffff) << 0x18);
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 8;
  return;
}



//==== 004d83ec  ns=idol_draw  size=0x2b4
// sig: undefined BindVertexProgram(void)
// callers(29): 0006e0d8 draw::DrawRenderTargetToScreen; 00071180 draw::SetScreenResolution; 00071ac0 draw::ResetHUDPass; 00072280 draw::FastDrawQuad; 0007278c draw::FastDrawStrip_DL; 00072ddc draw::FastDrawStrip_Pass; 00073678 draw::FastDrawStrip2UV_Pass; 00073a08 draw::FastDrawStrip2UV_PassNoState; 00074150 draw::FastDrawStripColor; 00074780 draw::FastDrawStripFog; 000f7af0 mobyfunc::MB_BuildDrawEntry; 0011ef18 partproc::DrawParts; 0015aa80 skyfunc::SkySpriteProc; 0015f6d0 space::???_Space_TransitionDrawPass; 00171d00 vendor::Vendor_SetupScreenRender; 004d8db8 FUN_004d8db8; 004d93ac idol_draw::Render_SetupPasses; 004dafe8 idol_draw::Gfx_DrawSurface; 004db930 idol_draw::Gfx_DrawStereoSurface; 004dcdd0 idol_draw::Gfx_DrawLoadingBar; 004dd19c idol_draw::Gfx_SetupUIRenderTarget; 004dfe70 FUN_004dfe70; 004e1b80 FUN_004e1b80; 00508c10 shrubfunc::DrawShrub; 00509d60 FUN_00509d60
// callees(5): 0050f2b0 FUN_0050f2b0; 0050f3b8 FUN_0050f3b8; 0050f3c0 FUN_0050f3c0; 0050f3c8 FUN_0050f3c8; 005e6424 FUN_005e6424

void idol_draw::BindVertexProgram(undefined8 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  undefined *puVar12;
  uint uVar13;
  undefined1 local_50 [4];
  undefined1 local_4c [2];
  ushort local_4a;
  ushort local_48;
  ushort local_46;
  byte local_44;
  
  puVar12 = &DAT_010ee330 + param_3 * 0x30;
  puVar7 = (undefined4 *)FUN_0050f3b8(puVar12);
  FUN_0050f2b0(puVar12,&local_4a);
  uVar8 = 0;
  puVar1 = *(undefined4 **)(param_2 + 8);
  puVar10 = puVar1 + 3;
  iVar4 = (local_48 & 7) * 4;
  *puVar1 = 0x81e9c;
  puVar1[1] = (uint)local_4a;
  puVar1[2] = (uint)local_4a;
  uVar13 = 0;
  *(uint **)(param_2 + 8) = puVar10;
  if (local_48 >> 3 != 0) {
    do {
      uVar2 = *(uint *)(param_2 + 8);
      *puVar10 = (uint)&DAT_00800b80;
      FUN_005e6424((ulonglong)uVar2 + 4,puVar7,0x40);
      FUN_005e6424((ulonglong)*(uint *)(param_2 + 8) + 0x44,puVar7 + 0x10,0x40);
      uVar8 = uVar8 + 1;
      puVar7 = puVar7 + 0x20;
      puVar10 = (uint *)(*(int *)(param_2 + 8) + 0x84);
      *(uint **)(param_2 + 8) = puVar10;
    } while (uVar8 < local_48 >> 3);
  }
  if ((local_48 & 7) != 0) {
    *puVar10 = (local_48 & 7) << 0x14 | 0xb80;
    if ((local_48 & 7) != 0) {
      iVar9 = 0;
      iVar11 = iVar4;
      do {
        iVar9 = iVar9 + 4;
        iVar11 = iVar11 + -1;
        uVar3 = *puVar7;
        puVar7 = puVar7 + 1;
        *(undefined4 *)(*(int *)(param_2 + 8) + iVar9) = uVar3;
      } while (0 < iVar11);
    }
    puVar10 = (uint *)(*(int *)(param_2 + 8) + (iVar4 + 1) * 4);
    *(uint **)(param_2 + 8) = puVar10;
  }
  iVar4 = *(int *)(param_2 + 8);
  *puVar10 = 0x41ff0;
  iVar11 = *(int *)(param_2 + 8);
  *(uint *)(iVar4 + 4) = (uint)local_46;
  *(int *)(param_2 + 8) = iVar11 + 8;
  if (local_44 < 0x21) {
    iVar4 = *(int *)(param_2 + 8);
    *(undefined4 *)(iVar11 + 8) = 0x41ef8;
    *(undefined4 *)(iVar4 + 4) = 0x20ffff;
  }
  else {
    iVar4 = *(int *)(param_2 + 8);
    *(undefined4 *)(iVar11 + 8) = 0x41ef8;
    *(undefined4 *)(iVar4 + 4) = 0x30ffff;
  }
  *(int *)(param_2 + 8) = iVar4 + 8;
  uVar8 = FUN_0050f3c0(puVar12);
  if (uVar8 != 0) {
    do {
      FUN_0050f3c8(puVar12,uVar13,local_4c,local_50);
      puVar1 = *(undefined4 **)(param_2 + 8);
      uVar13 = uVar13 + 1;
      *(undefined4 **)(param_2 + 8) = puVar1 + 2;
      puVar1[1] = 0;
      *puVar1 = 0x141efc;
      uVar6 = uRam0000000c;
      uVar5 = uRam00000008;
      uVar3 = uRam00000004;
      puVar1[2] = uRam00000000;
      puVar1[3] = uVar3;
      puVar1[4] = uVar5;
      puVar1[5] = uVar6;
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 0x10;
    } while (uVar13 < uVar8);
  }
  return;
}



//==== 004d86b0  ns=Global  size=0xc4
// sig: undefined FUN_004d86b0(void)
// callers(7): 000127e0 boot::DrawSplashScreen; 000685e0 draw::DrawFullScreenQuad; 0006b1f8 draw::DrawScreenEffect; 0006b890 draw::DrawScreenInsertEffect; 00071ac0 draw::ResetHUDPass; 00480000 mobyupdate_helpers::M832_00480000; 004d93ac idol_draw::Render_SetupPasses
// callees(0): 

void FUN_004d86b0(void)

{
  RsxCmd *pRVar1;
  RenderingStep *pRVar2;
  RsxCmd *pRVar3;
  RsxCmd *pRVar4;
  longlong lVar5;
  RsxCmd local_10 [4];
  
  pRVar2 = HUD_Pass;
  pRVar4 = local_10;
  lVar5 = 2;
  *HUD_Pass->command = NV4097_SET_TRANSFORM_CONSTANT_LOAD_x5;
  pRVar2->command[1] = 0x12;
  pRVar3 = pRVar2->command + 2;
  pRVar2->command = pRVar3;
  do {
    *pRVar3 = *pRVar4;
    pRVar3 = pRVar2->command;
    pRVar2->command = pRVar3 + 1;
    pRVar1 = pRVar4 + 1;
    pRVar4 = pRVar4 + 2;
    pRVar3[1] = *pRVar1;
    pRVar3 = pRVar2->command + 1;
    pRVar2->command = pRVar3;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}



//==== 004d8774  ns=Global  size=0x3dc
// sig: undefined FUN_004d8774(void)
// callers(1): 004d93ac idol_draw::Render_SetupPasses
// callees(0): 

void FUN_004d8774(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  RsxCmd *pRVar5;
  RenderingStep *pRVar6;
  
  pRVar6 = ShadowPass;
  *ShadowPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar6->command[1] = 1;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = ShadowPass;
  *ShadowPass->command = NV4097_SET_DEPTH_FUNC_x1;
  pRVar6->command[1] = 0x203;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = ShadowPass;
  *ShadowPass->command = NV4097_SET_SHADE_MODE_x1;
  pRVar6->command[1] = 0x1d01;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = ShadowPass;
  *ShadowPass->command = NV4097_SET_DEPTH_TEST_ENABLE_x1;
  pRVar6->command[1] = 1;
  iVar3 = param_1[1];
  iVar4 = param_1[2];
  pRVar6->command = pRVar6->command + 2;
  (*(code *)**(undefined4 **)(*param_1 + 0x10))(param_1,ShadowPass,iVar3,iVar4);
  pRVar6 = ShadowPass;
  *ShadowPass->command = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
  pRVar6->command[1] = *(byte *)(param_1 + 0x84e) + 0xfeed0000;
  pRVar5 = pRVar6->command;
  pRVar6->command = pRVar5 + 2;
  pRVar5[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
  pRVar6->command[1] = *(byte *)((int)param_1 + 0x2139) + 0xfeed0000;
  pRVar5 = pRVar6->command;
  pRVar6->command = pRVar5 + 2;
  pRVar5[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
  pRVar6->command[1] = *(byte *)((int)param_1 + 0x213a) + 0xfeed0000;
  pRVar6->command[2] = *(byte *)((int)param_1 + 0x213b) + 0xfeed0000;
  pRVar5 = pRVar6->command;
  pRVar6->command = pRVar5 + 3;
  pRVar5[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
  pRVar6->command[1] = *(byte *)((int)param_1 + 0x215d) + 0xfeed0000;
  pRVar5 = pRVar6->command;
  uVar1 = *(ushort *)(param_1 + 0x85a);
  uVar2 = *(ushort *)((int)param_1 + 0x216a);
  pRVar6->command = pRVar5 + 2;
  pRVar5[2] = (RsxCmd)&DAT_00180208;
  pRVar6->command[1] =
       (uint)*(byte *)((int)param_1 + 0x2136) | (uint)*(byte *)(param_1 + 0x857) << 5 |
       (uint)*(byte *)(param_1 + 0x84d) << 8 | (uint)*(byte *)((int)param_1 + 0x2135) << 0xc |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar1) & 0xffffffff) << 0x10) |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar2) & 0xffffffff) << 0x18);
  pRVar6->command[2] = param_1[0x853];
  pRVar6->command[3] = param_1[0x84f];
  pRVar6->command[4] = param_1[0x858];
  pRVar6->command[5] = param_1[0x850];
  pRVar6->command[6] = param_1[0x854];
  pRVar5 = pRVar6->command;
  pRVar6->command = pRVar5 + 7;
  pRVar5[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
  pRVar6->command[1] = param_1[0x859];
  pRVar5 = pRVar6->command;
  pRVar6->command = pRVar5 + 2;
  pRVar5[2] = NV4097_SET_SURFACE_PITCH_C_x4;
  pRVar6->command[1] = param_1[0x855];
  pRVar6->command[2] = param_1[0x856];
  pRVar6->command[3] = param_1[0x851];
  pRVar6->command[4] = param_1[0x852];
  pRVar5 = pRVar6->command;
  pRVar6->command = pRVar5 + 5;
  pRVar5[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
  pRVar6->command[1] = (uint)*(byte *)((int)param_1 + 0x2137);
  pRVar5 = pRVar6->command;
  pRVar6->command = pRVar5 + 2;
  pRVar5[2] = NV4097_SET_WINDOW_OFFSET_x1;
  pRVar6->command[1] =
       CONCAT22(*(undefined2 *)((int)param_1 + 0x216e),*(undefined2 *)(param_1 + 0x85b));
  pRVar5 = pRVar6->command;
  pRVar6->command = pRVar5 + 2;
  pRVar5[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
  pRVar6->command[1] = CONCAT22(*(undefined2 *)(param_1 + 0x85a),*(undefined2 *)(param_1 + 0x85b));
  pRVar6->command[2] =
       CONCAT22(*(undefined2 *)((int)param_1 + 0x216a),*(undefined2 *)((int)param_1 + 0x216e));
  pRVar5 = pRVar6->command;
  pRVar6->command = pRVar5 + 3;
  pRVar5[3] = NV4097_SET_SHADER_WINDOW_x1;
  pRVar6->command[1] =
       (uint)*(ushort *)((int)param_1 + 0x216a) - (*(ushort *)((int)param_1 + 0x216a) >> 0xc & 1) |
       0x1000;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = ShadowPass;
  *ShadowPass->command = NV4097_SET_COLOR_MASK_x1;
  pRVar6->command[1] = 0x10000;
  pRVar6->command = pRVar6->command + 2;
  return;
}



//==== 004d8b50  ns=Global  size=0x268
// sig: undefined FUN_004d8b50(void)
// callers(2): 004d8db8 FUN_004d8db8; 004dd19c idol_draw::Gfx_SetupUIRenderTarget
// callees(1): 004fe098 idol::AllocateMemAlign

void FUN_004d8b50(int param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)idol::AllocateMemAlign(FrameHeap,0x30,0x10);
  iVar2 = (int)(param_2 << 2);
  *puVar4 = 0xbf800000;
  puVar4[1] = 0x40400000;
  puVar4[3] = 0xbf800000;
  puVar4[2] = 0;
  puVar4[4] = 0x40400000;
  iVar1 = *(int *)((int)&DepthPass + iVar2);
  puVar4[5] = 0xbf800000;
  puVar4[6] = 0x40000000;
  puVar4[7] = 0x3f800000;
  puVar4[8] = 0xbf800000;
  puVar4[9] = 0xbf800000;
  puVar4[10] = 0;
  puVar4[0xb] = 0x3f800000;
  **(undefined4 **)(iVar1 + 8) = 0x41740;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 4) = 0x1022;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar2);
  **(undefined4 **)(iVar1 + 8) = 0x41744;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 4) = 0x1022;
  uVar3 = (int)puVar4 - *(int *)(param_1 + 0x4a8);
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar2);
  **(undefined4 **)(iVar1 + 8) = 0x41680;
  *(uint *)(*(int *)(iVar1 + 8) + 4) = uVar3 | 0x80000000;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar2);
  **(undefined4 **)(iVar1 + 8) = 0x41684;
  *(uint *)(*(int *)(iVar1 + 8) + 4) = uVar3 + 8 | 0x80000000;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar2);
  **(undefined4 **)(iVar1 + 8) = 0x400c1714;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 4) = 0;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 8) = 0;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 0xc) = 0;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 0x10) = 0x41808;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 0x14) = 6;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 0x18;
  iVar1 = *(int *)((int)&DepthPass + iVar2);
  puVar4 = *(undefined4 **)(iVar1 + 8);
  *(undefined4 **)(iVar1 + 8) = puVar4 + 1;
  *puVar4 = 0x40041814;
  puVar4 = *(undefined4 **)(iVar1 + 8);
  *(undefined4 **)(iVar1 + 8) = puVar4 + 1;
  iVar1 = *(int *)((int)&DepthPass + iVar2);
  *puVar4 = 0x2000000;
  **(undefined4 **)(iVar1 + 8) = 0x41808;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 4) = 0;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar2);
  **(undefined4 **)(iVar1 + 8) = 0x41740;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 4) = 2;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar2);
  **(undefined4 **)(iVar1 + 8) = 0x41744;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 4) = 2;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 8;
  return;
}



//==== 004d8db8  ns=Global  size=0x5f4
// sig: undefined FUN_004d8db8(void)
// callers(1): 004d93ac idol_draw::Render_SetupPasses
// callees(3): 004d82b8 idol_draw::BindFragmentProgram; 004d83ec idol_draw::BindVertexProgram; 004d8b50 FUN_004d8b50

void FUN_004d8db8(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  RsxCmd *pRVar7;
  RsxCmd RVar8;
  RsxCmd RVar9;
  RsxCmd RVar10;
  RsxCmd RVar11;
  RenderingStep *pRVar12;
  ulonglong uVar13;
  
  pRVar12 = ShadowPass;
  *ShadowPass->command = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
  pRVar12->command[1] = *(byte *)(param_1 + 0x2138) + 0xfeed0000;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
  pRVar12->command[1] = *(byte *)(param_1 + 0x2139) + 0xfeed0000;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
  pRVar12->command[1] = *(byte *)(param_1 + 0x213a) + 0xfeed0000;
  pRVar12->command[2] = *(byte *)(param_1 + 0x213b) + 0xfeed0000;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 3;
  pRVar7[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
  pRVar12->command[1] = *(byte *)(param_1 + 0x215d) + 0xfeed0000;
  pRVar7 = pRVar12->command;
  uVar5 = *(ushort *)(param_1 + 0x2168);
  uVar6 = *(ushort *)(param_1 + 0x216a);
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = (RsxCmd)&DAT_00180208;
  pRVar12->command[1] =
       (uint)*(byte *)(param_1 + 0x2136) | (uint)*(byte *)(param_1 + 0x215c) << 5 |
       (uint)*(byte *)(param_1 + 0x2134) << 8 | (uint)*(byte *)(param_1 + 0x2135) << 0xc |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar5) & 0xffffffff) << 0x10) |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar6) & 0xffffffff) << 0x18);
  pRVar12->command[2] = *(RsxCmd *)(param_1 + 0x214c);
  pRVar12->command[3] = *(RsxCmd *)(param_1 + 0x213c);
  pRVar12->command[4] = *(RsxCmd *)(param_1 + 0x2160);
  pRVar12->command[5] = *(RsxCmd *)(param_1 + 0x2140);
  pRVar12->command[6] = *(RsxCmd *)(param_1 + 0x2150);
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 7;
  pRVar7[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
  pRVar12->command[1] = *(RsxCmd *)(param_1 + 0x2164);
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = NV4097_SET_SURFACE_PITCH_C_x4;
  pRVar12->command[1] = *(RsxCmd *)(param_1 + 0x2154);
  pRVar12->command[2] = *(RsxCmd *)(param_1 + 0x2158);
  pRVar12->command[3] = *(RsxCmd *)(param_1 + 0x2144);
  pRVar12->command[4] = *(RsxCmd *)(param_1 + 0x2148);
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 5;
  pRVar7[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
  pRVar12->command[1] = (uint)*(byte *)(param_1 + 0x2137);
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = NV4097_SET_WINDOW_OFFSET_x1;
  pRVar12->command[1] =
       CONCAT22(*(undefined2 *)(param_1 + 0x216e),*(undefined2 *)(param_1 + 0x216c));
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
  pRVar12->command[1] =
       CONCAT22(*(undefined2 *)(param_1 + 0x2168),*(undefined2 *)(param_1 + 0x216c));
  pRVar12->command[2] =
       CONCAT22(*(undefined2 *)(param_1 + 0x216a),*(undefined2 *)(param_1 + 0x216e));
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 3;
  pRVar7[3] = NV4097_SET_SHADER_WINDOW_x1;
  pRVar12->command[1] =
       (uint)*(ushort *)(param_1 + 0x216a) - (*(ushort *)(param_1 + 0x216a) >> 0xc & 1) | 0x1000;
  pRVar12->command = pRVar12->command + 2;
  bVar1 = *(byte *)(param_1 + 0x1cca);
  uVar13 = (ulonglong)*(byte *)(param_1 + 0x1cbc) | 0x40;
  RVar8 = *(RsxCmd *)(param_1 + 0x1cd0);
  *(char *)(param_1 + 0x1cbc) = (char)uVar13;
  bVar2 = *(byte *)(param_1 + 0x1cbd);
  bVar3 = *(byte *)(param_1 + 0x1cbf);
  bVar4 = *(byte *)(param_1 + 0x1cbe);
  RVar11 = *(RsxCmd *)(param_1 + 0x1cc4);
  RVar9 = *(RsxCmd *)(param_1 + 0x1cc0);
  RVar10 = *(RsxCmd *)(param_1 + 0x1ccc);
  uVar5 = *(ushort *)(param_1 + 0x1cc8);
  *pRVar12->command = (RsxCmd)&DAT_00081a00;
  pRVar12->command[1] = RVar8;
  pRVar12->command[2] =
       (uint)bVar2 << 0x10 | bVar1 + 1 | 8 | (RsxCmd)(uVar13 << 8) |
       (uint)bVar3 << 2 | (uint)bVar4 << 4;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 3;
  pRVar7[3] = NV4097_SET_TEXTURE_IMAGE_RECT_x1;
  pRVar12->command[1] = RVar11;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = (RsxCmd)&DAT_00041840;
  pRVar12->command[1] = RVar10 | (uint)uVar5 << 0x14;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = NV4097_SET_TEXTURE_CONTROL1_x1;
  pRVar12->command[1] = RVar9;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = NV4097_SET_TEXTURE_CONTROL0_x1;
  pRVar12->command[1] = 0x80060000;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = NV4097_SET_TEXTURE_ADDRESS_x1;
  pRVar12->command[1] = 0x10030303;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = NV4097_SET_TEXTURE_FILTER_x1;
  pRVar12->command[1] = (RsxCmd)&DAT_01012000;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = NV4097_INVALIDATE_L2_x1;
  pRVar12->command[1] = 1;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = NV4097_SET_COLOR_MASK_x1;
  pRVar12->command[1] = 0x1000000;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = NV4097_SET_BLEND_ENABLE_x1;
  pRVar12->command[1] = 0;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar12->command[1] = 0;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = NV4097_SET_DEPTH_TEST_ENABLE_x1;
  pRVar12->command[1] = 1;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = NV4097_SET_DEPTH_FUNC_x1;
  pRVar12->command[1] = 0x207;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = NV4097_SET_DEPTH_MASK_x1;
  pRVar12->command[1] = 1;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = NV4097_SET_STENCIL_TEST_ENABLE_x1;
  pRVar12->command[1] = 1;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = NV4097_SET_STENCIL_FUNC_x3;
  pRVar12->command[1] = 0x207;
  pRVar12->command[2] = 0xff;
  pRVar12->command[3] = 0xff;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 4;
  pRVar7[4] = NV4097_SET_STENCIL_MASK_x1;
  pRVar12->command[1] = 0xff;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = NV4097_SET_STENCIL_OP_FAIL_x3;
  pRVar12->command[1] = 0;
  pRVar12->command[2] = 0;
  pRVar12->command[3] = 0;
  pRVar12->command = pRVar12->command + 4;
  idol_draw::BindVertexProgram(param_1,pRVar12,0xd);
  idol_draw::BindFragmentProgram(param_1,pRVar12,0x11);
  FUN_004d8b50(param_1,5);
  return;
}



//==== 004d93ac  ns=idol_draw  size=0x1c3c
// sig: undefined Render_SetupPasses(void)
// callers(0): 
// callees(7): 004d82b8 idol_draw::BindFragmentProgram; 004d83ec idol_draw::BindVertexProgram; 004d86b0 FUN_004d86b0; 004d8774 FUN_004d8774; 004d8db8 FUN_004d8db8; 0050eaf8 idol_draw::RsxCmd_DebugStr_Marker; 005e85f0 FUN_005e85f0
// strings: 006591cc: 'Frame' | 006591d4: 'DepthPass' | 006591e4: 'OceanForwardPass' | 006591fc: 'ForwardPass' | 0065920c: 'M_Depth' | 00659214: 'M_Pass' | 0065921c: 'ShadowPass' | 0065922c: 'MobyDepth' | 0065923c: 'Moby' | 00659244: 'DL_Depth' | 00659254: 'DL_Pass' | 0065925c: 'HUD'

void idol_draw::Render_SetupPasses(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  RsxCmd *pRVar3;
  int iVar4;
  RsxCmd RVar5;
  int iVar6;
  RenderingStep *pRVar7;
  
  RsxCmd_DebugStr_Marker(DepthPass,"Frame");
  RsxCmd_DebugStr_Marker(DepthPass,"DepthPass");
  RsxCmd_DebugStr_Marker(OceanForwardPass,"OceanForwardPass");
  RsxCmd_DebugStr_Marker(ForwardPass,"ForwardPass");
  RsxCmd_DebugStr_Marker(M_Depth,"M_Depth");
  RsxCmd_DebugStr_Marker(M_Pass,"M_Pass");
  RsxCmd_DebugStr_Marker(ShadowPass,"ShadowPass");
  RsxCmd_DebugStr_Marker(MobyDepth,"MobyDepth");
  RsxCmd_DebugStr_Marker(MobyPass,"Moby");
  RsxCmd_DebugStr_Marker(DL_DepthPass,"DL_Depth");
  RsxCmd_DebugStr_Marker(DL_Pass,"DL_Pass");
  RsxCmd_DebugStr_Marker(HUD_Pass,"HUD");
  FUN_004d8db8(param_1);
  FUN_004d8774(param_1);
  pRVar7 = DepthPass;
  *DepthPass->command = NV4097_INVALIDATE_VERTEX_CACHE_FILE_x1;
  pRVar7->command[1] = 0;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_INVALIDATE_VERTEX_FILE_x1;
  pRVar7->command[1] = 0;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_INVALIDATE_VERTEX_FILE_x1;
  pRVar7->command[1] = 0;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_INVALIDATE_VERTEX_FILE_x1;
  pRVar7->command[1] = 0;
  iVar4 = param_1[1];
  pRVar7->command = pRVar7->command + 2;
  (*(code *)**(undefined4 **)(*param_1 + 0x10))(param_1,DepthPass,iVar4,param_1[2]);
  (*(code *)**(undefined4 **)(*param_1 + 0x10))(param_1,ForwardPass,param_1[1],param_1[2]);
  pRVar7 = DepthPass;
  *DepthPass->command = NV4097_SET_ANTI_ALIASING_CONTROL_x1;
  pRVar7->command[1] = 0xffff0001;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DepthPass;
  *DepthPass->command = NV4097_SET_COLOR_MASK_MRT_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DepthPass;
  *DepthPass->command = NV4097_SET_DEPTH_TEST_ENABLE_x1;
  pRVar7->command[1] = 1;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = M_Pass;
  *M_Pass->command = NV4097_SET_DEPTH_TEST_ENABLE_x1;
  pRVar7->command[1] = 1;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = MobyDepth;
  *MobyDepth->command = NV4097_SET_DEPTH_TEST_ENABLE_x1;
  pRVar7->command[1] = 1;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DL_DepthPass;
  *DL_DepthPass->command = NV4097_SET_DEPTH_TEST_ENABLE_x1;
  pRVar7->command[1] = 1;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DepthPass;
  *DepthPass->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar7->command[1] = 1;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = M_Depth;
  *M_Depth->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar7->command[1] = 1;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = MobyDepth;
  *MobyDepth->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar7->command[1] = 1;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DL_DepthPass;
  *DL_DepthPass->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar7->command[1] = 1;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = OceanForwardPass;
  *OceanForwardPass->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = ForwardPass;
  *ForwardPass->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = M_Pass;
  *M_Pass->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = MobyPass;
  *MobyPass->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DL_Pass;
  *DL_Pass->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DepthPass;
  *DepthPass->command = NV4097_SET_COLOR_MASK_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = M_Depth;
  *M_Depth->command = NV4097_SET_COLOR_MASK_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = MobyDepth;
  *MobyDepth->command = NV4097_SET_COLOR_MASK_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DL_DepthPass;
  *DL_DepthPass->command = NV4097_SET_COLOR_MASK_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = OceanForwardPass;
  *OceanForwardPass->command = NV4097_SET_COLOR_MASK_x1;
  pRVar7->command[1] = 0x10101;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = ForwardPass;
  *ForwardPass->command = NV4097_SET_COLOR_MASK_x1;
  pRVar7->command[1] = 0x10101;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = M_Pass;
  *M_Pass->command = NV4097_SET_COLOR_MASK_x1;
  pRVar7->command[1] = 0x10101;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = MobyPass;
  *MobyPass->command = NV4097_SET_COLOR_MASK_x1;
  pRVar7->command[1] = 0x10101;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DL_Pass;
  *DL_Pass->command = NV4097_SET_COLOR_MASK_x1;
  pRVar7->command[1] = 0x10101;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DepthPass;
  *DepthPass->command = NV4097_SET_DEPTH_FUNC_x1;
  pRVar7->command[1] = 0x203;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DL_DepthPass;
  *DL_DepthPass->command = NV4097_SET_DEPTH_FUNC_x1;
  pRVar7->command[1] = 0x203;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = MobyDepth;
  *MobyDepth->command = NV4097_SET_STENCIL_MASK_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = MobyDepth;
  *MobyDepth->command = NV4097_SET_BLEND_ENABLE_x1;
  pRVar7->command[1] = 1;
  pRVar7->command = pRVar7->command + 2;
  FUN_005e85f0(MobyDepth,1);
  pRVar7 = MobyDepth;
  *MobyDepth->command = NV4097_SET_ALPHA_FUNC_x2;
  pRVar7->command[1] = 0x206;
  pRVar7->command[2] = 0xbe;
  pRVar7->command = pRVar7->command + 3;
  pRVar7 = MobyPass;
  *MobyPass->command = NV4097_SET_ALPHA_FUNC_x2;
  pRVar7->command[1] = 0x206;
  pRVar7->command[2] = 1;
  pRVar7->command = pRVar7->command + 3;
  pRVar7 = DepthPass;
  *DepthPass->command = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
  pRVar7->command[1] = *(byte *)(param_1 + 0x6fa) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1be9) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1bea) + 0xfeed0000;
  pRVar7->command[2] = *(byte *)((int)param_1 + 0x1beb) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 3;
  pRVar3[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1c0d) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  uVar1 = *(ushort *)(param_1 + 0x706);
  uVar2 = *(ushort *)((int)param_1 + 0x1c1a);
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = (RsxCmd)&DAT_00180208;
  pRVar7->command[1] =
       (uint)*(byte *)((int)param_1 + 0x1be6) | (uint)*(byte *)(param_1 + 0x703) << 5 |
       (uint)*(byte *)(param_1 + 0x6f9) << 8 | (uint)*(byte *)((int)param_1 + 0x1be5) << 0xc |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar1) & 0xffffffff) << 0x10) |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar2) & 0xffffffff) << 0x18);
  pRVar7->command[2] = param_1[0x6ff];
  pRVar7->command[3] = param_1[0x6fb];
  pRVar7->command[4] = param_1[0x704];
  pRVar7->command[5] = param_1[0x6fc];
  pRVar7->command[6] = param_1[0x700];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 7;
  pRVar3[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
  pRVar7->command[1] = param_1[0x705];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_SURFACE_PITCH_C_x4;
  pRVar7->command[1] = param_1[0x701];
  pRVar7->command[2] = param_1[0x702];
  pRVar7->command[3] = param_1[0x6fd];
  pRVar7->command[4] = param_1[0x6fe];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 5;
  pRVar3[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
  pRVar7->command[1] = (uint)*(byte *)((int)param_1 + 0x1be7);
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_WINDOW_OFFSET_x1;
  pRVar7->command[1] =
       CONCAT22(*(undefined2 *)((int)param_1 + 0x1c1e),*(undefined2 *)(param_1 + 0x707));
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
  pRVar7->command[1] = CONCAT22(*(undefined2 *)(param_1 + 0x706),*(undefined2 *)(param_1 + 0x707));
  pRVar7->command[2] =
       CONCAT22(*(undefined2 *)((int)param_1 + 0x1c1a),*(undefined2 *)((int)param_1 + 0x1c1e));
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 3;
  pRVar3[3] = NV4097_SET_SHADER_WINDOW_x1;
  pRVar7->command[1] =
       (uint)*(ushort *)((int)param_1 + 0x1c1a) - (*(ushort *)((int)param_1 + 0x1c1a) >> 0xc & 1) |
       0x1000;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = OceanForwardPass;
  *OceanForwardPass->command = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
  pRVar7->command[1] = *(byte *)(param_1 + 0x6fa) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1be9) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1bea) + 0xfeed0000;
  pRVar7->command[2] = *(byte *)((int)param_1 + 0x1beb) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 3;
  pRVar3[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1c0d) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  uVar1 = *(ushort *)(param_1 + 0x706);
  uVar2 = *(ushort *)((int)param_1 + 0x1c1a);
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = (RsxCmd)&DAT_00180208;
  pRVar7->command[1] =
       (uint)*(byte *)((int)param_1 + 0x1be6) | (uint)*(byte *)(param_1 + 0x703) << 5 |
       (uint)*(byte *)(param_1 + 0x6f9) << 8 | (uint)*(byte *)((int)param_1 + 0x1be5) << 0xc |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar1) & 0xffffffff) << 0x10) |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar2) & 0xffffffff) << 0x18);
  pRVar7->command[2] = param_1[0x6ff];
  pRVar7->command[3] = param_1[0x6fb];
  pRVar7->command[4] = param_1[0x704];
  pRVar7->command[5] = param_1[0x6fc];
  pRVar7->command[6] = param_1[0x700];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 7;
  pRVar3[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
  pRVar7->command[1] = param_1[0x705];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_SURFACE_PITCH_C_x4;
  pRVar7->command[1] = param_1[0x701];
  pRVar7->command[2] = param_1[0x702];
  pRVar7->command[3] = param_1[0x6fd];
  pRVar7->command[4] = param_1[0x6fe];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 5;
  pRVar3[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
  pRVar7->command[1] = (uint)*(byte *)((int)param_1 + 0x1be7);
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_WINDOW_OFFSET_x1;
  pRVar7->command[1] =
       CONCAT22(*(undefined2 *)((int)param_1 + 0x1c1e),*(undefined2 *)(param_1 + 0x707));
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
  pRVar7->command[1] = CONCAT22(*(undefined2 *)(param_1 + 0x706),*(undefined2 *)(param_1 + 0x707));
  pRVar7->command[2] =
       CONCAT22(*(undefined2 *)((int)param_1 + 0x1c1a),*(undefined2 *)((int)param_1 + 0x1c1e));
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 3;
  pRVar3[3] = NV4097_SET_SHADER_WINDOW_x1;
  pRVar7->command[1] =
       (uint)*(ushort *)((int)param_1 + 0x1c1a) - (*(ushort *)((int)param_1 + 0x1c1a) >> 0xc & 1) |
       0x1000;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = ForwardPass;
  *ForwardPass->command = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
  pRVar7->command[1] = *(byte *)(param_1 + 0x6fa) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1be9) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1bea) + 0xfeed0000;
  pRVar7->command[2] = *(byte *)((int)param_1 + 0x1beb) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 3;
  pRVar3[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1c0d) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  uVar1 = *(ushort *)(param_1 + 0x706);
  uVar2 = *(ushort *)((int)param_1 + 0x1c1a);
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = (RsxCmd)&DAT_00180208;
  pRVar7->command[1] =
       (uint)*(byte *)((int)param_1 + 0x1be6) | (uint)*(byte *)(param_1 + 0x703) << 5 |
       (uint)*(byte *)(param_1 + 0x6f9) << 8 | (uint)*(byte *)((int)param_1 + 0x1be5) << 0xc |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar1) & 0xffffffff) << 0x10) |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar2) & 0xffffffff) << 0x18);
  pRVar7->command[2] = param_1[0x6ff];
  pRVar7->command[3] = param_1[0x6fb];
  pRVar7->command[4] = param_1[0x704];
  pRVar7->command[5] = param_1[0x6fc];
  pRVar7->command[6] = param_1[0x700];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 7;
  pRVar3[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
  pRVar7->command[1] = param_1[0x705];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_SURFACE_PITCH_C_x4;
  pRVar7->command[1] = param_1[0x701];
  pRVar7->command[2] = param_1[0x702];
  pRVar7->command[3] = param_1[0x6fd];
  pRVar7->command[4] = param_1[0x6fe];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 5;
  pRVar3[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
  pRVar7->command[1] = (uint)*(byte *)((int)param_1 + 0x1be7);
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_WINDOW_OFFSET_x1;
  pRVar7->command[1] =
       CONCAT22(*(undefined2 *)((int)param_1 + 0x1c1e),*(undefined2 *)(param_1 + 0x707));
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
  pRVar7->command[1] = CONCAT22(*(undefined2 *)(param_1 + 0x706),*(undefined2 *)(param_1 + 0x707));
  pRVar7->command[2] =
       CONCAT22(*(undefined2 *)((int)param_1 + 0x1c1a),*(undefined2 *)((int)param_1 + 0x1c1e));
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 3;
  pRVar3[3] = NV4097_SET_SHADER_WINDOW_x1;
  pRVar7->command[1] =
       (uint)*(ushort *)((int)param_1 + 0x1c1a) - (*(ushort *)((int)param_1 + 0x1c1a) >> 0xc & 1) |
       0x1000;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = M_Depth;
  *M_Depth->command = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
  pRVar7->command[1] = *(byte *)(param_1 + 0x6fa) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1be9) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1bea) + 0xfeed0000;
  pRVar7->command[2] = *(byte *)((int)param_1 + 0x1beb) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 3;
  pRVar3[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1c0d) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  uVar1 = *(ushort *)(param_1 + 0x706);
  uVar2 = *(ushort *)((int)param_1 + 0x1c1a);
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = (RsxCmd)&DAT_00180208;
  pRVar7->command[1] =
       (uint)*(byte *)((int)param_1 + 0x1be6) | (uint)*(byte *)(param_1 + 0x703) << 5 |
       (uint)*(byte *)(param_1 + 0x6f9) << 8 | (uint)*(byte *)((int)param_1 + 0x1be5) << 0xc |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar1) & 0xffffffff) << 0x10) |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar2) & 0xffffffff) << 0x18);
  pRVar7->command[2] = param_1[0x6ff];
  pRVar7->command[3] = param_1[0x6fb];
  pRVar7->command[4] = param_1[0x704];
  pRVar7->command[5] = param_1[0x6fc];
  pRVar7->command[6] = param_1[0x700];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 7;
  pRVar3[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
  pRVar7->command[1] = param_1[0x705];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_SURFACE_PITCH_C_x4;
  pRVar7->command[1] = param_1[0x701];
  pRVar7->command[2] = param_1[0x702];
  pRVar7->command[3] = param_1[0x6fd];
  pRVar7->command[4] = param_1[0x6fe];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 5;
  pRVar3[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
  pRVar7->command[1] = (uint)*(byte *)((int)param_1 + 0x1be7);
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_WINDOW_OFFSET_x1;
  pRVar7->command[1] =
       CONCAT22(*(undefined2 *)((int)param_1 + 0x1c1e),*(undefined2 *)(param_1 + 0x707));
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
  pRVar7->command[1] = CONCAT22(*(undefined2 *)(param_1 + 0x706),*(undefined2 *)(param_1 + 0x707));
  pRVar7->command[2] =
       CONCAT22(*(undefined2 *)((int)param_1 + 0x1c1a),*(undefined2 *)((int)param_1 + 0x1c1e));
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 3;
  pRVar3[3] = NV4097_SET_SHADER_WINDOW_x1;
  pRVar7->command[1] =
       (uint)*(ushort *)((int)param_1 + 0x1c1a) - (*(ushort *)((int)param_1 + 0x1c1a) >> 0xc & 1) |
       0x1000;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = M_Pass;
  *M_Pass->command = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
  pRVar7->command[1] = *(byte *)(param_1 + 0x6fa) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1be9) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1bea) + 0xfeed0000;
  pRVar7->command[2] = *(byte *)((int)param_1 + 0x1beb) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 3;
  pRVar3[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1c0d) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  uVar1 = *(ushort *)(param_1 + 0x706);
  uVar2 = *(ushort *)((int)param_1 + 0x1c1a);
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = (RsxCmd)&DAT_00180208;
  pRVar7->command[1] =
       (uint)*(byte *)((int)param_1 + 0x1be6) | (uint)*(byte *)(param_1 + 0x703) << 5 |
       (uint)*(byte *)(param_1 + 0x6f9) << 8 | (uint)*(byte *)((int)param_1 + 0x1be5) << 0xc |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar1) & 0xffffffff) << 0x10) |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar2) & 0xffffffff) << 0x18);
  pRVar7->command[2] = param_1[0x6ff];
  pRVar7->command[3] = param_1[0x6fb];
  pRVar7->command[4] = param_1[0x704];
  pRVar7->command[5] = param_1[0x6fc];
  pRVar7->command[6] = param_1[0x700];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 7;
  pRVar3[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
  pRVar7->command[1] = param_1[0x705];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_SURFACE_PITCH_C_x4;
  pRVar7->command[1] = param_1[0x701];
  pRVar7->command[2] = param_1[0x702];
  pRVar7->command[3] = param_1[0x6fd];
  pRVar7->command[4] = param_1[0x6fe];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 5;
  pRVar3[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
  pRVar7->command[1] = (uint)*(byte *)((int)param_1 + 0x1be7);
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_WINDOW_OFFSET_x1;
  pRVar7->command[1] =
       CONCAT22(*(undefined2 *)((int)param_1 + 0x1c1e),*(undefined2 *)(param_1 + 0x707));
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
  pRVar7->command[1] = CONCAT22(*(undefined2 *)(param_1 + 0x706),*(undefined2 *)(param_1 + 0x707));
  pRVar7->command[2] =
       CONCAT22(*(undefined2 *)((int)param_1 + 0x1c1a),*(undefined2 *)((int)param_1 + 0x1c1e));
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 3;
  pRVar3[3] = NV4097_SET_SHADER_WINDOW_x1;
  pRVar7->command[1] =
       (uint)*(ushort *)((int)param_1 + 0x1c1a) - (*(ushort *)((int)param_1 + 0x1c1a) >> 0xc & 1) |
       0x1000;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DL_DepthPass;
  *DL_DepthPass->command = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
  pRVar7->command[1] = *(byte *)(param_1 + 0x6fa) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1be9) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1bea) + 0xfeed0000;
  pRVar7->command[2] = *(byte *)((int)param_1 + 0x1beb) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 3;
  pRVar3[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1c0d) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  uVar1 = *(ushort *)(param_1 + 0x706);
  uVar2 = *(ushort *)((int)param_1 + 0x1c1a);
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = (RsxCmd)&DAT_00180208;
  pRVar7->command[1] =
       (uint)*(byte *)((int)param_1 + 0x1be6) | (uint)*(byte *)(param_1 + 0x703) << 5 |
       (uint)*(byte *)(param_1 + 0x6f9) << 8 | (uint)*(byte *)((int)param_1 + 0x1be5) << 0xc |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar1) & 0xffffffff) << 0x10) |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar2) & 0xffffffff) << 0x18);
  pRVar7->command[2] = param_1[0x6ff];
  pRVar7->command[3] = param_1[0x6fb];
  pRVar7->command[4] = param_1[0x704];
  pRVar7->command[5] = param_1[0x6fc];
  pRVar7->command[6] = param_1[0x700];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 7;
  pRVar3[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
  pRVar7->command[1] = param_1[0x705];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_SURFACE_PITCH_C_x4;
  pRVar7->command[1] = param_1[0x701];
  pRVar7->command[2] = param_1[0x702];
  pRVar7->command[3] = param_1[0x6fd];
  pRVar7->command[4] = param_1[0x6fe];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 5;
  pRVar3[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
  pRVar7->command[1] = (uint)*(byte *)((int)param_1 + 0x1be7);
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_WINDOW_OFFSET_x1;
  pRVar7->command[1] =
       CONCAT22(*(undefined2 *)((int)param_1 + 0x1c1e),*(undefined2 *)(param_1 + 0x707));
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
  pRVar7->command[1] = CONCAT22(*(undefined2 *)(param_1 + 0x706),*(undefined2 *)(param_1 + 0x707));
  pRVar7->command[2] =
       CONCAT22(*(undefined2 *)((int)param_1 + 0x1c1a),*(undefined2 *)((int)param_1 + 0x1c1e));
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 3;
  pRVar3[3] = NV4097_SET_SHADER_WINDOW_x1;
  pRVar7->command[1] =
       (uint)*(ushort *)((int)param_1 + 0x1c1a) - (*(ushort *)((int)param_1 + 0x1c1a) >> 0xc & 1) |
       0x1000;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DL_Pass;
  *DL_Pass->command = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
  pRVar7->command[1] = *(byte *)(param_1 + 0x6fa) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1be9) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1bea) + 0xfeed0000;
  pRVar7->command[2] = *(byte *)((int)param_1 + 0x1beb) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 3;
  pRVar3[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1c0d) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  uVar1 = *(ushort *)(param_1 + 0x706);
  uVar2 = *(ushort *)((int)param_1 + 0x1c1a);
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = (RsxCmd)&DAT_00180208;
  pRVar7->command[1] =
       (uint)*(byte *)((int)param_1 + 0x1be6) | (uint)*(byte *)(param_1 + 0x703) << 5 |
       (uint)*(byte *)(param_1 + 0x6f9) << 8 | (uint)*(byte *)((int)param_1 + 0x1be5) << 0xc |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar1) & 0xffffffff) << 0x10) |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar2) & 0xffffffff) << 0x18);
  pRVar7->command[2] = param_1[0x6ff];
  pRVar7->command[3] = param_1[0x6fb];
  pRVar7->command[4] = param_1[0x704];
  pRVar7->command[5] = param_1[0x6fc];
  pRVar7->command[6] = param_1[0x700];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 7;
  pRVar3[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
  pRVar7->command[1] = param_1[0x705];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_SURFACE_PITCH_C_x4;
  pRVar7->command[1] = param_1[0x701];
  pRVar7->command[2] = param_1[0x702];
  pRVar7->command[3] = param_1[0x6fd];
  pRVar7->command[4] = param_1[0x6fe];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 5;
  pRVar3[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
  pRVar7->command[1] = (uint)*(byte *)((int)param_1 + 0x1be7);
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_WINDOW_OFFSET_x1;
  pRVar7->command[1] =
       CONCAT22(*(undefined2 *)((int)param_1 + 0x1c1e),*(undefined2 *)(param_1 + 0x707));
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
  pRVar7->command[1] = CONCAT22(*(undefined2 *)(param_1 + 0x706),*(undefined2 *)(param_1 + 0x707));
  pRVar7->command[2] =
       CONCAT22(*(undefined2 *)((int)param_1 + 0x1c1a),*(undefined2 *)((int)param_1 + 0x1c1e));
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 3;
  pRVar3[3] = NV4097_SET_SHADER_WINDOW_x1;
  pRVar7->command[1] =
       (uint)*(ushort *)((int)param_1 + 0x1c1a) - (*(ushort *)((int)param_1 + 0x1c1a) >> 0xc & 1) |
       0x1000;
  pRVar7->command = pRVar7->command + 2;
  BindVertexProgram(param_1,DepthPass,9);
  BindFragmentProgram(param_1,DepthPass,0xf);
  BindVertexProgram(param_1,M_Depth,9);
  BindFragmentProgram(param_1,M_Depth,0xf);
  BindVertexProgram(param_1,MobyDepth,9);
  BindFragmentProgram(param_1,MobyDepth,0xf);
  BindVertexProgram(param_1,DL_DepthPass,9);
  BindFragmentProgram(param_1,DL_DepthPass,0xf);
  pRVar7 = DepthPass;
  RVar5 = param_1[0x106];
  *DepthPass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar7->command[1] = RVar5;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar7->command[1] = 0xffffff00;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DepthPass;
  *DepthPass->command = NV4097_SET_BLEND_ENABLE_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DepthPass;
  *DepthPass->command = NV4097_SET_DEPTH_FUNC_x1;
  pRVar7->command[1] = 0x203;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DepthPass;
  *DepthPass->command = NV4097_SET_SHADE_MODE_x1;
  pRVar7->command[1] = 0x1d01;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DL_DepthPass;
  *DL_DepthPass->command = NV4097_SET_ALPHA_FUNC_x2;
  pRVar7->command[1] = 0x206;
  pRVar7->command[2] = 1;
  pRVar7->command = pRVar7->command + 3;
  pRVar7 = M_Depth;
  *M_Depth->command = NV4097_SET_ALPHA_FUNC_x2;
  pRVar7->command[1] = 0x206;
  pRVar7->command[2] = 1;
  pRVar7->command = pRVar7->command + 3;
  pRVar7 = DepthPass;
  *DepthPass->command = NV4097_SET_ALPHA_FUNC_x2;
  pRVar7->command[1] = 0x206;
  pRVar7->command[2] = 0xff;
  pRVar7->command = pRVar7->command + 3;
  pRVar7 = DepthPass;
  *DepthPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar7->command[1] = 1;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DepthPass;
  *DepthPass->command = NV4097_SET_ZCULL_EN_x1;
  pRVar7->command[1] = 3;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = OceanForwardPass;
  *OceanForwardPass->command = NV4097_SET_COLOR_MASK_x1;
  pRVar7->command[1] = (RsxCmd)&DAT_01010101;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = OceanForwardPass;
  *OceanForwardPass->command = NV4097_SET_BLEND_ENABLE_x1;
  pRVar7->command[1] = 1;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = OceanForwardPass;
  *OceanForwardPass->command = NV4097_SET_BLEND_EQUATION_x1;
  pRVar7->command[1] = 0x80068006;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = OceanForwardPass;
  *OceanForwardPass->command = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
  pRVar7->command[1] = 0x3020302;
  pRVar7->command[2] = 0x3030303;
  pRVar7->command = pRVar7->command + 3;
  pRVar7 = OceanForwardPass;
  *OceanForwardPass->command = NV4097_SET_ALPHA_FUNC_x2;
  pRVar7->command[1] = 0x206;
  pRVar7->command[2] = 1;
  pRVar7->command = pRVar7->command + 3;
  pRVar7 = OceanForwardPass;
  *OceanForwardPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar7->command[1] = 1;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = ForwardPass;
  *ForwardPass->command = NV4097_SET_COLOR_MASK_x1;
  pRVar7->command[1] = (RsxCmd)&DAT_01010101;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = ForwardPass;
  *ForwardPass->command = NV4097_SET_BLEND_ENABLE_x1;
  pRVar7->command[1] = 1;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = ForwardPass;
  *ForwardPass->command = NV4097_SET_BLEND_EQUATION_x1;
  pRVar7->command[1] = 0x80068006;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = ForwardPass;
  *ForwardPass->command = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
  pRVar7->command[1] = 0x3020302;
  pRVar7->command[2] = 0x3030303;
  pRVar7->command = pRVar7->command + 3;
  pRVar7 = ForwardPass;
  *ForwardPass->command = NV4097_SET_ALPHA_FUNC_x2;
  pRVar7->command[1] = 0x206;
  pRVar7->command[2] = 1;
  pRVar7->command = pRVar7->command + 3;
  pRVar7 = ForwardPass;
  *ForwardPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar7->command[1] = 1;
  iVar4 = param_1[1];
  iVar6 = param_1[2];
  pRVar7->command = pRVar7->command + 2;
  (*(code *)**(undefined4 **)(*param_1 + 0x10))(param_1,HUD_Pass,iVar4,iVar6);
  FUN_004d86b0(param_1);
  BindVertexProgram(param_1,HUD_Pass,0xc);
  BindFragmentProgram(param_1,HUD_Pass,0xc);
  pRVar7 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_DEPTH_TEST_ENABLE_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BLEND_ENABLE_x1;
  pRVar7->command[1] = 1;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BLEND_EQUATION_x1;
  pRVar7->command[1] = 0x80068006;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
  pRVar7->command[1] = 0x3020302;
  pRVar7->command[2] = 0x3030303;
  pRVar7->command = pRVar7->command + 3;
  pRVar7 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  return;
}



//==== 004dafe8  ns=idol_draw  size=0x948
// sig: undefined Gfx_DrawSurface(void)
// callers(2): 004dc8c8 idol_draw::Gfx_Present; 004ddba8 idol_draw::BuildAndFlipFrame
// callees(4): 004d82b8 idol_draw::BindFragmentProgram; 004d83ec idol_draw::BindVertexProgram; 0050eaf8 idol_draw::RsxCmd_DebugStr_Marker; 0050ec5c idol_draw::RsxCmd_WritePass
// strings: 00659260: 'Wait Flip' | 00659270: 'Wait Done'

void idol_draw::Gfx_DrawSurface(int *param_1,byte *param_2,char param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  RsxCmd *pRVar8;
  RsxCmd RVar9;
  RsxCmd RVar10;
  RsxCmd RVar11;
  RsxCmd RVar12;
  RenderingStep *pRVar13;
  
  if (param_3 != '\0') {
    RsxCmd_DebugStr_Marker(HUD_Pass,"Wait Flip");
    RsxCmd_WritePass(HUD_Pass);
    pRVar13 = HUD_Pass;
    *HUD_Pass->command = 0x40064;
    pRVar13->command[1] = 0x10;
    pRVar8 = pRVar13->command;
    pRVar13->command = pRVar8 + 2;
    pRVar8[2] = 0x40068;
    pRVar13->command[1] = 0;
    pRVar13->command = pRVar13->command + 2;
    RsxCmd_DebugStr_Marker(HUD_Pass,"Wait Done");
    RsxCmd_WritePass(HUD_Pass);
  }
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
  pRVar13->command[1] = param_2[4] + 0xfeed0000;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
  pRVar13->command[1] = param_2[5] + 0xfeed0000;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
  pRVar13->command[1] = param_2[6] + 0xfeed0000;
  pRVar13->command[2] = param_2[7] + 0xfeed0000;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 3;
  pRVar8[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
  pRVar13->command[1] = param_2[0x29] + 0xfeed0000;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  uVar6 = *(ushort *)(param_2 + 0x34);
  uVar7 = *(ushort *)(param_2 + 0x36);
  pRVar8[2] = (RsxCmd)&DAT_00180208;
  pRVar13->command[1] =
       (uint)param_2[2] | (uint)param_2[0x28] << 5 | (uint)*param_2 << 8 | (uint)param_2[1] << 0xc |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar6) & 0xffffffff) << 0x10) |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar7) & 0xffffffff) << 0x18);
  pRVar13->command[2] = *(RsxCmd *)(param_2 + 0x18);
  pRVar13->command[3] = *(RsxCmd *)(param_2 + 8);
  pRVar13->command[4] = *(RsxCmd *)(param_2 + 0x2c);
  pRVar13->command[5] = *(RsxCmd *)(param_2 + 0xc);
  pRVar13->command[6] = *(RsxCmd *)(param_2 + 0x1c);
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 7;
  pRVar8[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
  pRVar13->command[1] = *(RsxCmd *)(param_2 + 0x30);
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = NV4097_SET_SURFACE_PITCH_C_x4;
  pRVar13->command[1] = *(RsxCmd *)(param_2 + 0x20);
  pRVar13->command[2] = *(RsxCmd *)(param_2 + 0x24);
  pRVar13->command[3] = *(RsxCmd *)(param_2 + 0x10);
  pRVar13->command[4] = *(RsxCmd *)(param_2 + 0x14);
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 5;
  pRVar8[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
  pRVar13->command[1] = (uint)param_2[3];
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = NV4097_SET_WINDOW_OFFSET_x1;
  pRVar13->command[1] = CONCAT22(*(undefined2 *)(param_2 + 0x3a),*(undefined2 *)(param_2 + 0x38));
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
  pRVar13->command[1] = CONCAT22(*(undefined2 *)(param_2 + 0x34),*(undefined2 *)(param_2 + 0x38));
  pRVar13->command[2] = CONCAT22(*(undefined2 *)(param_2 + 0x36),*(undefined2 *)(param_2 + 0x3a));
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 3;
  pRVar8[3] = NV4097_SET_SHADER_WINDOW_x1;
  pRVar13->command[1] =
       (uint)*(ushort *)(param_2 + 0x36) - (*(ushort *)(param_2 + 0x36) >> 0xc & 1) | 0x1000;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_DEPTH_TEST_ENABLE_x1;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_STENCIL_MASK_x1;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BLEND_ENABLE_x1;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  bVar1 = *(byte *)((int)param_1 + 0x1c6a);
  RVar9 = param_1[0x71c];
  bVar2 = *(byte *)((int)param_1 + 0x1c5d);
  bVar3 = *(byte *)(param_1 + 0x717);
  bVar4 = *(byte *)((int)param_1 + 0x1c5f);
  bVar5 = *(byte *)((int)param_1 + 0x1c5e);
  RVar12 = param_1[0x719];
  RVar10 = param_1[0x718];
  RVar11 = param_1[0x71b];
  uVar6 = *(ushort *)(param_1 + 0x71a);
  *HUD_Pass->command = (RsxCmd)&DAT_00081a00;
  pRVar13->command[1] = RVar9;
  pRVar13->command[2] =
       (uint)bVar2 << 0x10 | bVar1 + 1 | 8 | (uint)bVar3 << 8 | (uint)bVar4 << 2 | (uint)bVar5 << 4;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 3;
  pRVar8[3] = NV4097_SET_TEXTURE_IMAGE_RECT_x1;
  pRVar13->command[1] = RVar12;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = (RsxCmd)&DAT_00041840;
  pRVar13->command[1] = RVar11 | (uint)uVar6 << 0x14;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = NV4097_SET_TEXTURE_CONTROL1_x1;
  pRVar13->command[1] = RVar10;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_TEXTURE_CONTROL0_x1;
  pRVar13->command[1] = 0x80000000;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_TEXTURE_ADDRESS_x1;
  pRVar13->command[1] = 0x40030303;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_TEXTURE_FILTER_x1;
  pRVar13->command[1] = 0x2022000;
  pRVar13->command = pRVar13->command + 2;
  (*(code *)**(undefined4 **)(*param_1 + 0x10))
            (param_1,HUD_Pass,*(undefined2 *)(param_2 + 0x34),*(undefined2 *)(param_2 + 0x36));
  BindVertexProgram(param_1,HUD_Pass,0);
  BindFragmentProgram(param_1,HUD_Pass,0);
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar13->command[1] = 2;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = 0x41744;
  pRVar13->command[1] = 2;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = 0x41684;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = 0x41748;
  pRVar13->command[1] = 2;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = 0x41688;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = 0x4174c;
  pRVar13->command[1] = 2;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = 0x4168c;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar13->command[1] = 0;
  pRVar13->command[2] = 0;
  pRVar13->command[3] = 0;
  pRVar13->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar13->command[5] = 8;
  pRVar13->command = pRVar13->command + 6;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = 0xc1510;
  pRVar13->command[1] = 0;
  pRVar13->command[2] = 0;
  pRVar13->command[3] = DAT_008fa550;
  pRVar13->command = pRVar13->command + 4;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar13->command[1] = 0xbf800000;
  pRVar13->command[2] = 0x3f800000;
  pRVar13->command = pRVar13->command + 3;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = 0xc1510;
  pRVar13->command[1] = 0;
  pRVar13->command[2] = 0x3f800000;
  pRVar13->command[3] = DAT_008fa550;
  pRVar13->command = pRVar13->command + 4;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar13->command[1] = 0xbf800000;
  pRVar13->command[2] = 0xbf800000;
  pRVar13->command = pRVar13->command + 3;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = 0xc1510;
  pRVar13->command[1] = 0x3f800000;
  pRVar13->command[2] = 0x3f800000;
  pRVar13->command[3] = DAT_008fa550;
  pRVar13->command = pRVar13->command + 4;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar13->command[1] = 0x3f800000;
  pRVar13->command[2] = 0xbf800000;
  pRVar13->command = pRVar13->command + 3;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = 0xc1510;
  pRVar13->command[1] = 0x3f800000;
  pRVar13->command[2] = 0;
  pRVar13->command[3] = DAT_008fa550;
  pRVar13->command = pRVar13->command + 4;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar13->command[1] = 0x3f800000;
  pRVar13->command[2] = 0x3f800000;
  pRVar13->command = pRVar13->command + 3;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  return;
}



//==== 004db930  ns=idol_draw  size=0xf98
// sig: undefined Gfx_DrawStereoSurface(void)
// callers(2): 004dc8c8 idol_draw::Gfx_Present; 004ddba8 idol_draw::BuildAndFlipFrame
// callees(4): 004d82b8 idol_draw::BindFragmentProgram; 004d83ec idol_draw::BindVertexProgram; 0050eaf8 idol_draw::RsxCmd_DebugStr_Marker; 0050ec5c idol_draw::RsxCmd_WritePass
// strings: 00659260: 'Wait Flip' | 00659270: 'Wait Done'

void idol_draw::Gfx_DrawStereoSurface(int *param_1,byte *param_2,char param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  RsxCmd *pRVar8;
  RsxCmd RVar9;
  RsxCmd RVar10;
  RsxCmd RVar11;
  RsxCmd RVar12;
  RenderingStep *pRVar13;
  
  if (param_3 != '\0') {
    RsxCmd_DebugStr_Marker(HUD_Pass,"Wait Flip");
    RsxCmd_WritePass(HUD_Pass);
    pRVar13 = HUD_Pass;
    *HUD_Pass->command = 0x40064;
    pRVar13->command[1] = 0x10;
    pRVar8 = pRVar13->command;
    pRVar13->command = pRVar8 + 2;
    pRVar8[2] = 0x40068;
    pRVar13->command[1] = 0;
    pRVar13->command = pRVar13->command + 2;
    RsxCmd_DebugStr_Marker(HUD_Pass,"Wait Done");
    RsxCmd_WritePass(HUD_Pass);
  }
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_DEPTH_TEST_ENABLE_x1;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_STENCIL_MASK_x1;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BLEND_ENABLE_x1;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  BindVertexProgram(param_1,HUD_Pass,0);
  BindFragmentProgram(param_1,HUD_Pass,0);
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar13->command[1] = 2;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = 0x41744;
  pRVar13->command[1] = 2;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = 0x41684;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = 0x41748;
  pRVar13->command[1] = 2;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = 0x41688;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = 0x4174c;
  pRVar13->command[1] = 2;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = 0x4168c;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
  pRVar13->command[1] = *(byte *)(param_1 + 0x84e) + 0xfeed0000;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
  pRVar13->command[1] = *(byte *)((int)param_1 + 0x2139) + 0xfeed0000;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
  pRVar13->command[1] = *(byte *)((int)param_1 + 0x213a) + 0xfeed0000;
  pRVar13->command[2] = *(byte *)((int)param_1 + 0x213b) + 0xfeed0000;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 3;
  pRVar8[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
  pRVar13->command[1] = *(byte *)((int)param_1 + 0x215d) + 0xfeed0000;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  uVar6 = *(ushort *)(param_1 + 0x85a);
  uVar7 = *(ushort *)((int)param_1 + 0x216a);
  pRVar8[2] = (RsxCmd)&DAT_00180208;
  pRVar13->command[1] =
       (uint)*(byte *)((int)param_1 + 0x2136) | (uint)*(byte *)(param_1 + 0x857) << 5 |
       (uint)*(byte *)(param_1 + 0x84d) << 8 | (uint)*(byte *)((int)param_1 + 0x2135) << 0xc |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar6) & 0xffffffff) << 0x10) |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar7) & 0xffffffff) << 0x18);
  pRVar13->command[2] = param_1[0x853];
  pRVar13->command[3] = param_1[0x84f];
  pRVar13->command[4] = param_1[0x858];
  pRVar13->command[5] = param_1[0x850];
  pRVar13->command[6] = param_1[0x854];
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 7;
  pRVar8[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
  pRVar13->command[1] = param_1[0x859];
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = NV4097_SET_SURFACE_PITCH_C_x4;
  pRVar13->command[1] = param_1[0x855];
  pRVar13->command[2] = param_1[0x856];
  pRVar13->command[3] = param_1[0x851];
  pRVar13->command[4] = param_1[0x852];
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 5;
  pRVar8[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
  pRVar13->command[1] = (uint)*(byte *)((int)param_1 + 0x2137);
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = NV4097_SET_WINDOW_OFFSET_x1;
  pRVar13->command[1] =
       CONCAT22(*(undefined2 *)((int)param_1 + 0x216e),*(undefined2 *)(param_1 + 0x85b));
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
  pRVar13->command[1] = CONCAT22(*(undefined2 *)(param_1 + 0x85a),*(undefined2 *)(param_1 + 0x85b));
  pRVar13->command[2] =
       CONCAT22(*(undefined2 *)((int)param_1 + 0x216a),*(undefined2 *)((int)param_1 + 0x216e));
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 3;
  pRVar8[3] = NV4097_SET_SHADER_WINDOW_x1;
  pRVar13->command[1] =
       (uint)*(ushort *)((int)param_1 + 0x216a) - (*(ushort *)((int)param_1 + 0x216a) >> 0xc & 1) |
       0x1000;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  bVar1 = *(byte *)((int)param_1 + 0x1c6a);
  RVar9 = param_1[0x71c];
  bVar2 = *(byte *)((int)param_1 + 0x1c5d);
  bVar3 = *(byte *)(param_1 + 0x717);
  bVar4 = *(byte *)((int)param_1 + 0x1c5f);
  bVar5 = *(byte *)((int)param_1 + 0x1c5e);
  RVar12 = param_1[0x719];
  RVar10 = param_1[0x718];
  RVar11 = param_1[0x71b];
  uVar6 = *(ushort *)(param_1 + 0x71a);
  *HUD_Pass->command = (RsxCmd)&DAT_00081a00;
  pRVar13->command[1] = RVar9;
  pRVar13->command[2] =
       (uint)bVar2 << 0x10 | bVar1 + 1 | 8 | (uint)bVar3 << 8 | (uint)bVar4 << 2 | (uint)bVar5 << 4;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 3;
  pRVar8[3] = NV4097_SET_TEXTURE_IMAGE_RECT_x1;
  pRVar13->command[1] = RVar12;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = (RsxCmd)&DAT_00041840;
  pRVar13->command[1] = RVar11 | (uint)uVar6 << 0x14;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = NV4097_SET_TEXTURE_CONTROL1_x1;
  pRVar13->command[1] = RVar10;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_TEXTURE_CONTROL0_x1;
  pRVar13->command[1] = 0x80000000;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_TEXTURE_ADDRESS_x1;
  pRVar13->command[1] = 0x40030303;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_TEXTURE_FILTER_x1;
  pRVar13->command[1] = 0x2022000;
  pRVar13->command = pRVar13->command + 2;
  (*(code *)**(undefined4 **)(*param_1 + 0x10))(param_1,HUD_Pass,param_1[1],param_1[2]);
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar13->command[1] = 0;
  pRVar13->command[2] = 0;
  pRVar13->command[3] = 0;
  pRVar13->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar13->command[5] = 8;
  pRVar13->command = pRVar13->command + 6;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = 0xc1510;
  pRVar13->command[1] = 0;
  pRVar13->command[2] = 0;
  pRVar13->command[3] = DAT_008fa550;
  pRVar13->command = pRVar13->command + 4;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar13->command[1] = 0xbf800000;
  pRVar13->command[2] = 0x3f800000;
  pRVar13->command = pRVar13->command + 3;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = 0xc1510;
  pRVar13->command[1] = 0;
  pRVar13->command[2] = 0x3f800000;
  pRVar13->command[3] = DAT_008fa550;
  pRVar13->command = pRVar13->command + 4;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar13->command[1] = 0xbf800000;
  pRVar13->command[2] = 0xbf800000;
  pRVar13->command = pRVar13->command + 3;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = 0xc1510;
  pRVar13->command[1] = 0x3f800000;
  pRVar13->command[2] = 0x3f800000;
  pRVar13->command[3] = DAT_008fa550;
  pRVar13->command = pRVar13->command + 4;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar13->command[1] = 0x3f800000;
  pRVar13->command[2] = 0xbf800000;
  pRVar13->command = pRVar13->command + 3;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = 0xc1510;
  pRVar13->command[1] = 0x3f800000;
  pRVar13->command[2] = 0;
  pRVar13->command[3] = DAT_008fa550;
  pRVar13->command = pRVar13->command + 4;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar13->command[1] = 0x3f800000;
  pRVar13->command[2] = 0x3f800000;
  pRVar13->command = pRVar13->command + 3;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  if (param_2 != (byte *)(param_1 + 0x84d)) {
    *HUD_Pass->command = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
    pRVar13->command[1] = param_2[4] + 0xfeed0000;
    pRVar8 = pRVar13->command;
    pRVar13->command = pRVar8 + 2;
    pRVar8[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
    pRVar13->command[1] = param_2[5] + 0xfeed0000;
    pRVar8 = pRVar13->command;
    pRVar13->command = pRVar8 + 2;
    pRVar8[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
    pRVar13->command[1] = param_2[6] + 0xfeed0000;
    pRVar13->command[2] = param_2[7] + 0xfeed0000;
    pRVar8 = pRVar13->command;
    pRVar13->command = pRVar8 + 3;
    pRVar8[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
    pRVar13->command[1] = param_2[0x29] + 0xfeed0000;
    pRVar8 = pRVar13->command;
    pRVar13->command = pRVar8 + 2;
    uVar6 = *(ushort *)(param_2 + 0x34);
    uVar7 = *(ushort *)(param_2 + 0x36);
    pRVar8[2] = (RsxCmd)&DAT_00180208;
    pRVar13->command[1] =
         (uint)param_2[2] | (uint)param_2[0x28] << 5 | (uint)*param_2 << 8 | (uint)param_2[1] << 0xc
         | (RsxCmd)((0x1fU - LZCOUNT((uint)uVar6) & 0xffffffff) << 0x10) |
         (RsxCmd)((0x1fU - LZCOUNT((uint)uVar7) & 0xffffffff) << 0x18);
    pRVar13->command[2] = *(RsxCmd *)(param_2 + 0x18);
    pRVar13->command[3] = *(RsxCmd *)(param_2 + 8);
    pRVar13->command[4] = *(RsxCmd *)(param_2 + 0x2c);
    pRVar13->command[5] = *(RsxCmd *)(param_2 + 0xc);
    pRVar13->command[6] = *(RsxCmd *)(param_2 + 0x1c);
    pRVar8 = pRVar13->command;
    pRVar13->command = pRVar8 + 7;
    pRVar8[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
    pRVar13->command[1] = *(RsxCmd *)(param_2 + 0x30);
    pRVar8 = pRVar13->command;
    pRVar13->command = pRVar8 + 2;
    pRVar8[2] = NV4097_SET_SURFACE_PITCH_C_x4;
    pRVar13->command[1] = *(RsxCmd *)(param_2 + 0x20);
    pRVar13->command[2] = *(RsxCmd *)(param_2 + 0x24);
    pRVar13->command[3] = *(RsxCmd *)(param_2 + 0x10);
    pRVar13->command[4] = *(RsxCmd *)(param_2 + 0x14);
    pRVar8 = pRVar13->command;
    pRVar13->command = pRVar8 + 5;
    pRVar8[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
    pRVar13->command[1] = (uint)param_2[3];
    pRVar8 = pRVar13->command;
    pRVar13->command = pRVar8 + 2;
    pRVar8[2] = NV4097_SET_WINDOW_OFFSET_x1;
    pRVar13->command[1] = CONCAT22(*(undefined2 *)(param_2 + 0x3a),*(undefined2 *)(param_2 + 0x38));
    pRVar8 = pRVar13->command;
    pRVar13->command = pRVar8 + 2;
    pRVar8[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
    pRVar13->command[1] = CONCAT22(*(undefined2 *)(param_2 + 0x34),*(undefined2 *)(param_2 + 0x38));
    pRVar13->command[2] = CONCAT22(*(undefined2 *)(param_2 + 0x36),*(undefined2 *)(param_2 + 0x3a));
    pRVar8 = pRVar13->command;
    pRVar13->command = pRVar8 + 3;
    pRVar8[3] = NV4097_SET_SHADER_WINDOW_x1;
    pRVar13->command[1] =
         (uint)*(ushort *)(param_2 + 0x36) - (*(ushort *)(param_2 + 0x36) >> 0xc & 1) | 0x1000;
    pRVar13->command = pRVar13->command + 2;
    pRVar13 = HUD_Pass;
    bVar1 = *(byte *)((int)param_1 + 0x21ba);
    RVar9 = param_1[0x870];
    bVar2 = *(byte *)((int)param_1 + 0x21ad);
    bVar3 = *(byte *)(param_1 + 0x86b);
    bVar4 = *(byte *)((int)param_1 + 0x21af);
    bVar5 = *(byte *)((int)param_1 + 0x21ae);
    RVar12 = param_1[0x86d];
    RVar10 = param_1[0x86c];
    RVar11 = param_1[0x86f];
    uVar6 = *(ushort *)(param_1 + 0x86e);
    *HUD_Pass->command = (RsxCmd)&DAT_00081a00;
    pRVar13->command[1] = RVar9;
    pRVar13->command[2] =
         (uint)bVar2 << 0x10 | bVar1 + 1 | 8 | (uint)bVar3 << 8 |
         (uint)bVar4 << 2 | (uint)bVar5 << 4;
    pRVar8 = pRVar13->command;
    pRVar13->command = pRVar8 + 3;
    pRVar8[3] = NV4097_SET_TEXTURE_IMAGE_RECT_x1;
    pRVar13->command[1] = RVar12;
    pRVar8 = pRVar13->command;
    pRVar13->command = pRVar8 + 2;
    pRVar8[2] = (RsxCmd)&DAT_00041840;
    pRVar13->command[1] = RVar11 | (uint)uVar6 << 0x14;
    pRVar8 = pRVar13->command;
    pRVar13->command = pRVar8 + 2;
    pRVar8[2] = NV4097_SET_TEXTURE_CONTROL1_x1;
    pRVar13->command[1] = RVar10;
    pRVar13->command = pRVar13->command + 2;
    pRVar13 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_TEXTURE_CONTROL0_x1;
    pRVar13->command[1] = 0x80000000;
    pRVar13->command = pRVar13->command + 2;
    pRVar13 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_TEXTURE_ADDRESS_x1;
    pRVar13->command[1] = 0x40030303;
    pRVar13->command = pRVar13->command + 2;
    pRVar13 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_TEXTURE_FILTER_x1;
    pRVar13->command[1] = 0x2022000;
    pRVar13->command = pRVar13->command + 2;
    (*(code *)**(undefined4 **)(*param_1 + 0x10))
              (param_1,HUD_Pass,*(undefined2 *)(param_2 + 0x34),*(undefined2 *)(param_2 + 0x36));
    pRVar13 = HUD_Pass;
    *HUD_Pass->command = 0x400c1714;
    pRVar13->command[1] = 0;
    pRVar13->command[2] = 0;
    pRVar13->command[3] = 0;
    pRVar13->command[4] = NV4097_SET_BEGIN_END_x1;
    pRVar13->command[5] = 8;
    pRVar13->command = pRVar13->command + 6;
    pRVar13 = HUD_Pass;
    *HUD_Pass->command = 0xc1510;
    pRVar13->command[1] = 0;
    pRVar13->command[2] = 0;
    pRVar13->command[3] = DAT_008fa550;
    pRVar13->command = pRVar13->command + 4;
    pRVar13 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
    pRVar13->command[1] = 0xbf800000;
    pRVar13->command[2] = 0x3f800000;
    pRVar13->command = pRVar13->command + 3;
    pRVar13 = HUD_Pass;
    *HUD_Pass->command = 0xc1510;
    pRVar13->command[1] = 0;
    pRVar13->command[2] = 0x3f800000;
    pRVar13->command[3] = DAT_008fa550;
    pRVar13->command = pRVar13->command + 4;
    pRVar13 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
    pRVar13->command[1] = 0xbf800000;
    pRVar13->command[2] = 0xbf800000;
    pRVar13->command = pRVar13->command + 3;
    pRVar13 = HUD_Pass;
    *HUD_Pass->command = 0xc1510;
    pRVar13->command[1] = 0x3f800000;
    pRVar13->command[2] = 0x3f800000;
    pRVar13->command[3] = DAT_008fa550;
    pRVar13->command = pRVar13->command + 4;
    pRVar13 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
    pRVar13->command[1] = 0x3f800000;
    pRVar13->command[2] = 0xbf800000;
    pRVar13->command = pRVar13->command + 3;
    pRVar13 = HUD_Pass;
    *HUD_Pass->command = 0xc1510;
    pRVar13->command[1] = 0x3f800000;
    pRVar13->command[2] = 0;
    pRVar13->command[3] = DAT_008fa550;
    pRVar13->command = pRVar13->command + 4;
    pRVar13 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
    pRVar13->command[1] = 0x3f800000;
    pRVar13->command[2] = 0x3f800000;
    pRVar13->command = pRVar13->command + 3;
    pRVar13 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
    pRVar13->command[1] = 0;
    pRVar13->command = pRVar13->command + 2;
  }
  return;
}



//==== 004dc8c8  ns=idol_draw  size=0xd4
// sig: undefined Gfx_Present(void)
// callers(1): 0006e068 draw::Draw_FlushAndPresent
// callees(2): 004dafe8 idol_draw::Gfx_DrawSurface; 004db930 idol_draw::Gfx_DrawStereoSurface

void idol_draw::Gfx_Present(int *param_1,int param_2)

{
  if ((*(char *)(param_1 + 4) != '\0') && ((param_1[0x69b] & 1U) != 0)) {
    (*(code *)**(undefined4 **)(*param_1 + 0x18))(param_1);
  }
  if (param_2 != 0) {
    if (param_1[0x747] == (uint)*(ushort *)(param_2 + 0x34)) {
      Gfx_DrawSurface(param_1,param_2,0);
    }
    else {
      Gfx_DrawStereoSurface(param_1,param_2,0);
    }
  }
  (*(code *)**(undefined4 **)(*param_1 + 0x18))(param_1);
  return;
}



//==== 004dc99c  ns=idol_draw  size=0x1e4
// sig: undefined Gfx_ReconfigureVideoOut(void)
// callers(1): 004ddba8 idol_draw::BuildAndFlipFrame
// callees(5): 004e535c FUN_004e535c; 005cd098 libc::printf; 0064f384 cell::cellGcmSetVBlankHandler; 0064f4c4 cell::cellVideoOutConfigure; 00650684 sys::sys_time_get_system_time
// strings: 00658f40: 'Renderer timed out\n' | 0065927c: 'cellVideoOutConfigure() failed. (0x%08X)\n'

void idol_draw::Gfx_ReconfigureVideoOut(int param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar4;
  undefined8 uVar3;
  int iVar5;
  
  iVar5 = 40000;
  iVar4 = *(int *)(param_1 + 0x1a74);
  iVar1 = *(int *)(DAT_010ef520 + 8);
  while (iVar1 != iVar4) {
    syscall();
    iVar5 = iVar5 + -1;
    if (iVar5 == 0) {
      libc::printf("Renderer timed out\n");
    }
    iVar1 = *(int *)(DAT_010ef520 + 8);
  }
  lVar2 = sys::sys_time_get_system_time();
  if ((longlong)(((LZCOUNT(0x32 - *(int *)(g_viewMtxPtr + 0x18)) << 0x3a) >> 0x3f & 4000U) + 18000)
      < lVar2 - DAT_010ef500) {
    iVar4 = DAT_010ef4fc + 5;
    DAT_010ef4fc = iVar4 + ((uint)(0x14 - (longlong)iVar4 >> 0x3f) & 0x14U - iVar4);
  }
  else {
    iVar4 = DAT_010ef4fc + -1;
    DAT_010ef4fc = iVar4 + (iVar4 >> 0x1f & -iVar4);
  }
  PTR_DAT_008fa54c._0_1_ = (undefined1)((ulonglong)(LZCOUNT(DAT_010ef4fc) << 0x20) >> 0x25);
  DAT_010ef500 = lVar2;
  uVar3 = cell::cellVideoOutConfigure(0,param_1 + 0x22ec,0,0);
  if ((int)uVar3 != 0) {
    libc::printf("cellVideoOutConfigure() failed. (0x%08X)\n",uVar3);
  }
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_1 + 0x22ec);
  FUN_004e535c(param_1 + 0x1d38,1);
  FUN_004e535c(param_1 + 0x1e8c,1);
  *(undefined1 *)(param_1 + 0x10) = 0;
  cell::cellGcmSetVBlankHandler(0);
  return;
}



//==== 004dcb80  ns=idol_draw  size=0x250
// sig: undefined Gfx_EnableSpecialVideoOutMode(void)
// callers(1): 004ddba8 idol_draw::BuildAndFlipFrame
// callees(5): 004e5db0 FUN_004e5db0; 005cd098 libc::printf; 0064f384 cell::cellGcmSetVBlankHandler; 0064f4c4 cell::cellVideoOutConfigure; 00650684 sys::sys_time_get_system_time
// strings: 00658f40: 'Renderer timed out\n' | 0065927c: 'cellVideoOutConfigure() failed. (0x%08X)\n'

uint idol_draw::Gfx_EnableSpecialVideoOutMode(int param_1)

{
  int iVar1;
  uint uVar4;
  longlong lVar2;
  int iVar5;
  undefined8 uVar3;
  int iVar6;
  undefined1 local_30 [16];
  
  uVar4 = (uint)*(byte *)(param_1 + 0x185a4);
  if (*(byte *)(param_1 + 0x185a4) != 0) {
    iVar6 = 40000;
    iVar5 = *(int *)(param_1 + 0x1a74);
    iVar1 = *(int *)(DAT_010ef520 + 8);
    while (iVar1 != iVar5) {
      syscall();
      iVar6 = iVar6 + -1;
      if (iVar6 == 0) {
        libc::printf("Renderer timed out\n");
      }
      iVar1 = *(int *)(DAT_010ef520 + 8);
    }
    lVar2 = sys::sys_time_get_system_time();
    if ((longlong)
        (((LZCOUNT(0x32 - *(int *)(g_viewMtxPtr + 0x18)) << 0x3a) >> 0x3f & 4000U) + 18000) <
        lVar2 - DAT_010ef500) {
      iVar5 = DAT_010ef4fc + 5;
      DAT_010ef4fc = iVar5 + ((uint)(0x14 - (longlong)iVar5 >> 0x3f) & 0x14U - iVar5);
    }
    else {
      iVar5 = DAT_010ef4fc + -1;
      DAT_010ef4fc = iVar5 + (iVar5 >> 0x1f & -iVar5);
    }
    PTR_DAT_008fa54c._0_1_ = (undefined1)((ulonglong)(LZCOUNT(DAT_010ef4fc) << 0x20) >> 0x25);
    DAT_010ef500 = lVar2;
    uVar3 = cell::cellVideoOutConfigure(0,local_30,0,0);
    if ((int)uVar3 == 0) {
      *(undefined1 *)(param_1 + 0x11) = 0x81;
      FUN_004e5db0(param_1 + 0x1d38,*(undefined4 *)(param_1 + 0x185d0),
                   *(undefined4 *)(param_1 + 0x185cc));
      FUN_004e5db0(param_1 + 0x1e8c,*(undefined4 *)(param_1 + 0x185d0),
                   *(undefined4 *)(param_1 + 0x185cc));
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined1 *)(param_1 + 0x10) = 1;
      *(undefined1 *)(param_1 + 0x18591) = 0;
      uVar4 = cell::cellGcmSetVBlankHandler(&PTR_FUN_0070fd60);
    }
    else {
      uVar4 = libc::printf("cellVideoOutConfigure() failed. (0x%08X)\n",uVar3);
    }
  }
  return uVar4;
}



//==== 004dcdd0  ns=idol_draw  size=0x3cc
// sig: undefined Gfx_DrawLoadingBar(void)
// callers(1): 004ddba8 idol_draw::BuildAndFlipFrame
// callees(2): 004d82b8 idol_draw::BindFragmentProgram; 004d83ec idol_draw::BindVertexProgram

void idol_draw::Gfx_DrawLoadingBar(int param_1)

{
  int iVar1;
  RsxCmd *pRVar2;
  RsxCmd RVar3;
  RenderingStep *pRVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  RsxCmd RVar10;
  ulonglong uVar9;
  ulonglong uVar11;
  
  if (*(int *)(param_1 + 0x185f4) != 0) {
    BindVertexProgram(param_1,DL_Pass,0xb);
    BindFragmentProgram(param_1,DL_Pass,0x12);
    pRVar4 = DL_Pass;
    *DL_Pass->command = NV4097_SET_DEPTH_TEST_ENABLE_x1;
    pRVar4->command[1] = 0;
    pRVar4->command = pRVar4->command + 2;
    pRVar4 = DL_Pass;
    *DL_Pass->command = NV4097_SET_DEPTH_MASK_x1;
    pRVar4->command[1] = 0;
    pRVar4->command = pRVar4->command + 2;
    pRVar4 = DL_Pass;
    *DL_Pass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar4->command[1] = 0x1032;
    pRVar4->command = pRVar4->command + 2;
    pRVar4 = DL_Pass;
    *DL_Pass->command = 0x4174c;
    pRVar4->command[1] = 0x1044;
    pRVar4->command = pRVar4->command + 2;
    pRVar4 = DL_Pass;
    iVar8 = *(int *)(param_1 + 0x4a8);
    iVar1 = *(int *)(param_1 + *(int *)(param_1 + 0x1a6c) * 4 + 0x185f8);
    *DL_Pass->command = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
    RVar10 = iVar1 - iVar8;
    pRVar4->command[1] = RVar10 | 0x80000000;
    pRVar4->command = pRVar4->command + 2;
    pRVar4 = DL_Pass;
    *DL_Pass->command = 0x4168c;
    pRVar4->command[1] = RVar10 + 0xc | 0x80000000;
    pRVar4->command = pRVar4->command + 2;
    pRVar4 = DL_Pass;
    *DL_Pass->command = 0x400c1714;
    pRVar4->command[1] = 0;
    pRVar4->command[2] = 0;
    pRVar4->command[3] = 0;
    pRVar4->command[4] = NV4097_SET_BEGIN_END_x1;
    pRVar4->command[5] = 8;
    pRVar4->command = pRVar4->command + 6;
    pRVar4 = DL_Pass;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x185f4) - 0x100;
    uVar11 = (uVar5 & (longlong)((int)uVar5 >> 0x1f)) + 0x100;
    uVar6 = *(uint *)(param_1 + 0x185f4) - uVar11;
    uVar6 = uVar6 & ~(longlong)((int)uVar6 >> 0x1f);
    pRVar2 = DL_Pass->command;
    uVar7 = uVar6 - (uVar6 & 0xffffff00);
    uVar5 = (uVar6 << 0x20) >> 0x28;
    iVar8 = (int)uVar7;
    DL_Pass->command = pRVar2 + 1;
    *pRVar2 = (((uint)uVar6 >> 8) + ((uint)LZCOUNT(iVar8) >> 5 ^ 1) +
              ((uint)LZCOUNT((int)uVar11) >> 5 ^ 1)) * 0x40000 | 0x40001814;
    uVar9 = 0;
    if ((int)uVar11 != 0) {
      pRVar2 = pRVar4->command;
      pRVar4->command = pRVar2 + 1;
      *pRVar2 = (int)((uVar11 & 0xffffffff) << 0x18) - 0x1000000;
      uVar9 = uVar11;
    }
    RVar10 = (RsxCmd)uVar9;
    if ((uint)uVar6 >> 8 != 0) {
      do {
        pRVar2 = pRVar4->command;
        RVar3 = (RsxCmd)uVar9;
        uVar5 = uVar5 - 1;
        uVar9 = uVar9 + 0x100;
        RVar10 = (RsxCmd)uVar9;
        pRVar4->command = pRVar2 + 1;
        *pRVar2 = RVar3 | 0xff000000;
      } while (0 < (int)uVar5);
    }
    if (iVar8 != 0) {
      pRVar2 = pRVar4->command;
      pRVar4->command = pRVar2 + 1;
      *pRVar2 = RVar10 | (int)((uVar7 & 0xffffffff) << 0x18) - 0x1000000;
    }
    pRVar4 = DL_Pass;
    *DL_Pass->command = NV4097_SET_BEGIN_END_x1;
    pRVar4->command[1] = 0;
    pRVar4->command = pRVar4->command + 2;
    pRVar4 = DL_Pass;
    *DL_Pass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar4->command[1] = 2;
    pRVar4->command = pRVar4->command + 2;
    pRVar4 = DL_Pass;
    *DL_Pass->command = 0x4174c;
    pRVar4->command[1] = 2;
    pRVar4->command = pRVar4->command + 2;
    pRVar4 = DL_Pass;
    *DL_Pass->command = NV4097_SET_DEPTH_TEST_ENABLE_x1;
    pRVar4->command[1] = 1;
    pRVar4->command = pRVar4->command + 2;
    pRVar4 = DL_Pass;
    *DL_Pass->command = NV4097_SET_DEPTH_MASK_x1;
    pRVar4->command[1] = 1;
    pRVar4->command = pRVar4->command + 2;
    *(undefined4 *)(param_1 + 0x185f4) = 0;
  }
  return;
}



//==== 004dd19c  ns=idol_draw  size=0x554
// sig: undefined Gfx_SetupUIRenderTarget(void)
// callers(1): 004ddba8 idol_draw::BuildAndFlipFrame
// callees(3): 004d82b8 idol_draw::BindFragmentProgram; 004d83ec idol_draw::BindVertexProgram; 004d8b50 FUN_004d8b50

void idol_draw::Gfx_SetupUIRenderTarget(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  RsxCmd RVar8;
  RsxCmd RVar9;
  RsxCmd RVar10;
  RsxCmd *pRVar11;
  RsxCmd RVar12;
  RenderingStep *pRVar13;
  
  pRVar13 = ShadowPass;
  bVar1 = *(byte *)(param_1 + 0x21ba);
  RVar8 = *(RsxCmd *)(param_1 + 0x21c0);
  bVar2 = *(byte *)(param_1 + 0x21ad);
  bVar3 = *(byte *)(param_1 + 0x21ac);
  bVar4 = *(byte *)(param_1 + 0x21af);
  bVar5 = *(byte *)(param_1 + 0x21ae);
  RVar12 = *(RsxCmd *)(param_1 + 0x21b4);
  RVar9 = *(RsxCmd *)(param_1 + 0x21b0);
  RVar10 = *(RsxCmd *)(param_1 + 0x21bc);
  uVar6 = *(ushort *)(param_1 + 0x21b8);
  *ShadowPass->command = (RsxCmd)&DAT_00081a00;
  pRVar13->command[1] = RVar8;
  pRVar13->command[2] =
       (uint)bVar2 << 0x10 | bVar1 + 1 | 8 | (uint)bVar3 << 8 | (uint)bVar4 << 2 | (uint)bVar5 << 4;
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 3;
  pRVar11[3] = NV4097_SET_TEXTURE_IMAGE_RECT_x1;
  pRVar13->command[1] = RVar12;
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 2;
  pRVar11[2] = (RsxCmd)&DAT_00041840;
  pRVar13->command[1] = RVar10 | (uint)uVar6 << 0x14;
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 2;
  pRVar11[2] = NV4097_SET_TEXTURE_CONTROL1_x1;
  pRVar13->command[1] = RVar9;
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 2;
  pRVar11[2] = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
  pRVar13->command[1] = *(byte *)(param_1 + 0x1be8) + 0xfeed0000;
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 2;
  pRVar11[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
  pRVar13->command[1] = *(byte *)(param_1 + 0x1be9) + 0xfeed0000;
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 2;
  pRVar11[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
  pRVar13->command[1] = *(byte *)(param_1 + 0x1bea) + 0xfeed0000;
  pRVar13->command[2] = *(byte *)(param_1 + 0x1beb) + 0xfeed0000;
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 3;
  pRVar11[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
  pRVar13->command[1] = *(byte *)(param_1 + 0x1c0d) + 0xfeed0000;
  pRVar11 = pRVar13->command;
  uVar6 = *(ushort *)(param_1 + 0x1c18);
  pRVar13->command = pRVar11 + 2;
  uVar7 = *(ushort *)(param_1 + 0x1c1a);
  pRVar11[2] = (RsxCmd)&DAT_00180208;
  pRVar13->command[1] =
       (uint)*(byte *)(param_1 + 0x1be6) | (uint)*(byte *)(param_1 + 0x1c0c) << 5 |
       (uint)*(byte *)(param_1 + 0x1be4) << 8 | (uint)*(byte *)(param_1 + 0x1be5) << 0xc |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar6) & 0xffffffff) << 0x10) |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar7) & 0xffffffff) << 0x18);
  pRVar13->command[2] = *(RsxCmd *)(param_1 + 0x1bfc);
  pRVar13->command[3] = *(RsxCmd *)(param_1 + 0x1bec);
  pRVar13->command[4] = *(RsxCmd *)(param_1 + 0x1c10);
  pRVar13->command[5] = *(RsxCmd *)(param_1 + 0x1bf0);
  pRVar13->command[6] = *(RsxCmd *)(param_1 + 0x1c00);
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 7;
  pRVar11[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
  pRVar13->command[1] = *(RsxCmd *)(param_1 + 0x1c14);
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 2;
  pRVar11[2] = NV4097_SET_SURFACE_PITCH_C_x4;
  pRVar13->command[1] = *(RsxCmd *)(param_1 + 0x1c04);
  pRVar13->command[2] = *(RsxCmd *)(param_1 + 0x1c08);
  pRVar13->command[3] = *(RsxCmd *)(param_1 + 0x1bf4);
  pRVar13->command[4] = *(RsxCmd *)(param_1 + 0x1bf8);
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 5;
  pRVar11[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
  pRVar13->command[1] = (uint)*(byte *)(param_1 + 0x1be7);
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 2;
  pRVar11[2] = NV4097_SET_WINDOW_OFFSET_x1;
  pRVar13->command[1] =
       CONCAT22(*(undefined2 *)(param_1 + 0x1c1e),*(undefined2 *)(param_1 + 0x1c1c));
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 2;
  pRVar11[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
  pRVar13->command[1] =
       CONCAT22(*(undefined2 *)(param_1 + 0x1c18),*(undefined2 *)(param_1 + 0x1c1c));
  pRVar13->command[2] =
       CONCAT22(*(undefined2 *)(param_1 + 0x1c1a),*(undefined2 *)(param_1 + 0x1c1e));
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 3;
  pRVar11[3] = NV4097_SET_SHADER_WINDOW_x1;
  pRVar13->command[1] =
       (uint)*(ushort *)(param_1 + 0x1c1a) - (*(ushort *)(param_1 + 0x1c1a) >> 0xc & 1) | 0x1000;
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 2;
  pRVar11[2] = NV4097_SET_DEPTH_TEST_ENABLE_x1;
  pRVar13->command[1] = 0;
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 2;
  pRVar11[2] = NV4097_SET_COLOR_MASK_x1;
  pRVar13->command[1] = 0x10101;
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 2;
  pRVar11[2] = NV4097_SET_BLEND_EQUATION_x1;
  pRVar13->command[1] = 0x80068006;
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 2;
  pRVar11[2] = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
  pRVar13->command[1] = 0;
  pRVar13->command[2] = 0x302;
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 3;
  pRVar11[3] = NV4097_SET_ALPHA_FUNC_x2;
  pRVar13->command[1] = 0x206;
  pRVar13->command[2] = 1;
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 3;
  pRVar11[3] = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar13->command[1] = 0;
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 2;
  pRVar11[2] = NV4097_SET_BLEND_ENABLE_x1;
  pRVar13->command[1] = 1;
  pRVar13->command = pRVar13->command + 2;
  BindVertexProgram(param_1,pRVar13,0xd);
  BindFragmentProgram(param_1,pRVar13,3);
  FUN_004d8b50(param_1,5);
  *pRVar13->command = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
  pRVar13->command[1] = 0x3020302;
  pRVar13->command[2] = 0x3030303;
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 3;
  pRVar11[3] = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar13->command[1] = 1;
  pRVar13->command = pRVar13->command + 2;
  return;
}



//==== 004dd6f0  ns=idol_draw  size=0x1ec
// sig: undefined Gfx_SubmitHudDrawCommands(void)
// callers(6): 001e6130 mobyupd::update1160::M1160_Hud_Draw; 0021e750 mobyupd::update1242::M1242_Hud_Draw; 002611a0 mobyupd::update1379::M1379_Hud_Draw; 0041b008 mobyupdate_helpers::M688_0041b008; 004dd8e0 FUN_004dd8e0; 004e1b80 FUN_004e1b80
// callees(1): 0050f500 FUN_0050f500

void idol_draw::Gfx_SubmitHudDrawCommands
               (undefined8 param_1,int param_2,longlong param_3,undefined8 param_4,uint *param_5,
               uint param_6)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint *puVar10;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  uint *puVar11;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  
  uVar6 = ZEXT48(&stack0x00000000);
  lVar9 = uVar6 - 0x110;
  puVar5 = (ulonglong *)lVar9;
  *puVar5 = uVar6;
  puVar5[0x24] = in_LR;
  puVar5[0x1f] = unaff_r29;
  puVar5[0x20] = unaff_r30;
  puVar5[0x21] = unaff_r31;
  puVar5[0x1e] = unaff_r28;
  puVar5[0x1d] = unaff_r27;
  puVar5[0x1c] = unaff_r26;
  puVar5[0x1b] = unaff_r25;
  puVar5[0x1a] = unaff_r24;
  puVar5[0x19] = unaff_r23;
  puVar5[0x18] = unaff_r22;
  if ((int)param_4 != -1) {
    *(undefined4 *)(puVar5 + 0xe) = 0x20;
    FUN_0050f500(ZEXT48(&DAT_010eeb08) + param_3 * 0x30 & 0xffffffff,param_4,uVar6 - 0x9c,
                 uVar6 - 0xa0);
    uVar7 = 0;
    if (*(int *)(puVar5 + 0xe) != 0) {
      do {
        puVar2 = *(undefined4 **)(param_2 + 8);
        *(undefined4 **)(param_2 + 8) = puVar2 + 2;
        iVar3 = *(int *)((int)&DAT_010ee670 + (int)(param_3 << 3) * 3);
        uVar1 = *(ushort *)((int)lVar9 + 0x74);
        *puVar2 = 0x4630c;
        uVar8 = iVar3 + (uint)uVar1;
        puVar2[2] = 0x86300;
        puVar2[1] = uVar8 & 0xffffffc0;
        iVar3 = *(int *)(param_2 + 8);
        *(int *)(param_2 + 8) = iVar3 + 0xc;
        *(undefined4 *)(iVar3 + 4) = 0xb;
        *(undefined4 *)(iVar3 + 8) = 0x10001000;
        *(undefined4 *)(iVar3 + 0xc) = 0xca304;
        iVar3 = *(int *)(param_2 + 8);
        *(int *)(param_2 + 8) = iVar3 + 0x10;
        *(uint *)(iVar3 + 4) = uVar8 >> 2 & 0xf;
        *(uint *)(iVar3 + 8) = param_6 | 0x10000;
        *(uint *)(iVar3 + 0xc) = param_6 | 0x10000;
        *(uint *)(iVar3 + 0x10) = (param_6 + 1) * 0x40000 & 0xfff80000 | 0xa400;
        puVar11 = (uint *)(*(int *)(param_2 + 8) + 4);
        *(int *)(param_2 + 8) = (int)puVar11 + (int)(((ulonglong)(param_6 + 1) & 0xfffffffe) << 2);
        uVar8 = param_6;
        puVar10 = param_5;
        if (param_6 != 0) {
          do {
            uVar4 = *puVar10;
            uVar8 = uVar8 - 1;
            puVar10 = puVar10 + 1;
            *puVar11 = uVar4 << 0x10 | uVar4 >> 0x10;
            puVar11 = puVar11 + 1;
          } while (0 < (int)uVar8);
        }
        uVar7 = uVar7 + 1;
        lVar9 = lVar9 + 2;
      } while (uVar7 < *(uint *)(puVar5 + 0xe));
    }
  }
  return;
}



//==== 004dd8e0  ns=Global  size=0x2c8
// sig: undefined FUN_004dd8e0(void)
// callers(1): 004ddba8 idol_draw::BuildAndFlipFrame
// callees(2): 004dd6f0 idol_draw::Gfx_SubmitHudDrawCommands; 005c5ad0 libc::memcpy

void FUN_004dd8e0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  float *pfVar3;
  RenderingStep *pRVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  
  iVar15 = 0;
  uVar6 = *(uint *)(param_1 + 0x1a6c);
  iVar12 = 0;
  iVar8 = 0;
  iVar9 = param_1;
  iVar10 = param_1;
  iVar11 = param_1;
  do {
    piVar5 = (int *)((uVar6 ^ 1) * 0xaa8 + param_1 + 0x4b0 + iVar12);
    if (iVar15 == 0) {
      libc::memcpy((void *)(**(int **)((int)&DepthPass + iVar8) + 0x30),(void *)(*piVar5 + 0x30),
                   *(size_t *)(iVar9 + 0x22fc) - 0x30);
    }
    else {
      libc::memcpy((void *)**(undefined4 **)((int)&DepthPass + iVar8),(void *)*piVar5,
                   *(size_t *)(iVar9 + 0x22fc));
    }
    iVar14 = iVar11 + 0x24e0;
    uVar13 = 0;
    if (*(int *)(iVar9 + 0x184e0) != 0) {
      do {
        (*(int **)((int)&DepthPass + iVar8))[2] =
             **(int **)((int)&DepthPass + iVar8) + *(int *)(iVar14 + 0x14);
        idol_draw::Gfx_SubmitHudDrawCommands
                  (param_1,*(undefined4 *)((int)&DepthPass + iVar8),*(undefined4 *)(iVar14 + 0x18),
                   *(undefined4 *)(iVar14 + 0x10),iVar14,*(undefined1 *)(iVar14 + 0x1c));
        uVar13 = uVar13 + 1;
        iVar14 = iVar14 + 0x20;
      } while (uVar13 < *(uint *)(iVar8 + param_1 + 0x184e0));
    }
    piVar5 = (int *)(iVar10 + 0x2380);
    uVar13 = 0;
    if (*(int *)(iVar9 + 0x2354) != 0) {
      do {
        iVar7 = 0;
        lVar16 = 2;
        (*(int **)((int)&DepthPass + iVar8))[2] = **(int **)((int)&DepthPass + iVar8) + *piVar5;
        iVar14 = *(int *)((int)&DepthPass + iVar8);
        do {
          *(undefined4 *)(*(int *)(iVar14 + 8) + iVar7) = 0;
          iVar1 = *(int *)(iVar14 + 8) + iVar7;
          iVar7 = iVar7 + 8;
          *(undefined4 *)(iVar1 + 4) = 0;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        uVar13 = uVar13 + 1;
        piVar5 = piVar5 + 1;
        *(int *)(iVar14 + 8) = *(int *)(iVar14 + 8) + 0x10;
      } while (uVar13 < *(uint *)(iVar8 + param_1 + 0x2354));
    }
    puVar2 = (undefined4 *)((int)&DepthPass + iVar8);
    piVar5 = (int *)(iVar9 + 0x22fc);
    iVar15 = iVar15 + 1;
    iVar12 = iVar12 + 0xf8;
    iVar11 = iVar11 + 0x2000;
    iVar8 = iVar8 + 4;
    iVar10 = iVar10 + 0x20;
    iVar9 = iVar9 + 4;
    ((int *)*puVar2)[2] = *(int *)*puVar2 + *piVar5;
    iVar14 = g_viewMtxPtr;
    pRVar4 = HUD_Pass;
  } while (iVar15 < 0xb);
  if ((*(int *)(param_1 + 0x1858c) != 0) &&
     (uVar6 = 0, iVar9 = param_1, *(int *)(param_1 + 0x1858c) != 0)) {
    do {
      uVar6 = uVar6 + 1;
      pfVar3 = (float *)(*(int *)pRVar4 + *(int *)(iVar9 + 0x1850c));
      *pfVar3 = *(float *)(iVar14 + 0x1a84) * 2.0 + *pfVar3;
      iVar9 = iVar9 + 4;
    } while (uVar6 < *(uint *)(param_1 + 0x1858c));
  }
  *(undefined4 *)(param_1 + 0x1858c) = 0;
  return;
}



//==== 004ddba8  ns=idol_draw  size=0xd98
// sig: undefined BuildAndFlipFrame(void)
// callers(0): 
// callees(16): 004dafe8 idol_draw::Gfx_DrawSurface; 004db930 idol_draw::Gfx_DrawStereoSurface; 004dc99c idol_draw::Gfx_ReconfigureVideoOut; 004dcb80 idol_draw::Gfx_EnableSpecialVideoOutMode; 004dcdd0 idol_draw::Gfx_DrawLoadingBar; 004dd19c idol_draw::Gfx_SetupUIRenderTarget; 004dd8e0 FUN_004dd8e0; 004edc68 FUN_004edc68; 004edcfc FUN_004edcfc; 004fe61c FUN_004fe61c; 0050e8dc idol::GcmFlipCommand_Thunk; 0050ec5c idol_draw::RsxCmd_WritePass; 0050f074 FUN_0050f074; 005cd098 libc::printf; 005d0140 libc::memset; 00650684 sys::sys_time_get_system_time
// strings: 00658f40: 'Renderer timed out\n'

void idol_draw::BuildAndFlipFrame(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  RsxCmd *pRVar3;
  RenderingStep *pRVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  ulonglong uVar9;
  int *piVar10;
  int iVar11;
  longlong lVar12;
  RenderingStep **ppRVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  longlong lVar20;
  undefined4 local_60 [4];
  
  bVar8 = true;
  iVar7 = (int)param_1;
  uVar9 = (ulonglong)*(uint *)(iVar7 + 0x1a6c);
  uVar15 = param_1 + uVar9 * 0x154 + 0x1d38 & 0xffffffff;
  uVar16 = uVar9;
  if (*(int *)(iVar7 + 0x4a0) == 1) {
    uVar16 = (ulonglong)(*(uint *)(iVar7 + 0x14) >> 1) & 1;
    uVar15 = uVar16;
    if ((0 < *(int *)(iVar7 + 0x1a8c)) &&
       (uVar15 = (ulonglong)DAT_008fa554, DAT_008fa554 == 0xffffffff)) {
      DAT_008fa554 = (uint)uVar16;
      uVar9 = (ulonglong)*(uint *)(iVar7 + 0x1a6c);
      uVar15 = uVar16;
    }
    uVar15 = param_1 + uVar15 * 0x154 + 0x1d38 & 0xffffffff;
    if ((*(char *)(iVar7 + 0x18591) == '\0') || ((uVar9 & 1) == 0)) {
      ppRVar13 = &DepthPass;
      lVar20 = 0xb;
      lVar12 = param_1;
      do {
        pRVar4 = *ppRVar13;
        ppRVar13 = ppRVar13 + 1;
        *(int *)((int)lVar12 + 0x22fc) = (int)pRVar4->command - *(int *)pRVar4;
        *(uint *)((int)lVar12 + 9000) = pRVar4->commandLen - *(int *)pRVar4;
        lVar12 = lVar12 + 4;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      *(undefined1 *)(iVar7 + 0x18591) = 1;
      bVar8 = false;
    }
    else {
      FUN_004edcfc(&DAT_01111700);
      FUN_004dd8e0(param_1);
      if (*(int *)(iVar7 + 0x1a8c) < 1) {
        uVar15 = param_1 + uVar16 * 0x154 + 0x1d74 & 0xffffffff;
      }
      else {
        uVar15 = param_1 + (ulonglong)DAT_008fa554 * 0x154 + 0x1d74 & 0xffffffff;
      }
    }
  }
  if ((*(uint *)(iVar7 + 0x1a6c) & 1) != 0) {
    lVar20 = 0xb;
    lVar12 = param_1;
    do {
      iVar14 = (int)lVar12;
      *(undefined4 *)(iVar14 + 0x2354) = 0;
      lVar12 = lVar12 + 4;
      *(undefined4 *)(iVar14 + 0x184e0) = 0;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
  }
  Gfx_SetupUIRenderTarget(param_1);
  if (*(int *)(iVar7 + 0x1d1c) == *(int *)(iVar7 + 0x1e70)) {
    Gfx_DrawSurface(param_1,uVar15,0);
  }
  else {
    Gfx_DrawStereoSurface(param_1,uVar15,0);
  }
  pRVar4 = HUD_Pass;
  ppRVar13 = &DepthPass;
  *HUD_Pass->command = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
  pRVar4->command[1] = *(byte *)(iVar7 + 0x1be8) + 0xfeed0000;
  pRVar3 = pRVar4->command;
  pRVar4->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
  pRVar4->command[1] = *(byte *)(iVar7 + 0x1be9) + 0xfeed0000;
  pRVar3 = pRVar4->command;
  pRVar4->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
  pRVar4->command[1] = *(byte *)(iVar7 + 0x1bea) + 0xfeed0000;
  pRVar4->command[2] = *(byte *)(iVar7 + 0x1beb) + 0xfeed0000;
  pRVar3 = pRVar4->command;
  pRVar4->command = pRVar3 + 3;
  pRVar3[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
  pRVar4->command[1] = *(byte *)(iVar7 + 0x1c0d) + 0xfeed0000;
  pRVar3 = pRVar4->command;
  pRVar4->command = pRVar3 + 2;
  uVar1 = *(ushort *)(iVar7 + 0x1c18);
  uVar2 = *(ushort *)(iVar7 + 0x1c1a);
  pRVar3[2] = (RsxCmd)&DAT_00180208;
  pRVar4->command[1] =
       (uint)*(byte *)(iVar7 + 0x1be6) | (uint)*(byte *)(iVar7 + 0x1c0c) << 5 |
       (uint)*(byte *)(iVar7 + 0x1be4) << 8 | (uint)*(byte *)(iVar7 + 0x1be5) << 0xc |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar1) & 0xffffffff) << 0x10) |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar2) & 0xffffffff) << 0x18);
  pRVar4->command[2] = *(RsxCmd *)(iVar7 + 0x1bfc);
  pRVar4->command[3] = *(RsxCmd *)(iVar7 + 0x1bec);
  pRVar4->command[4] = *(RsxCmd *)(iVar7 + 0x1c10);
  pRVar4->command[5] = *(RsxCmd *)(iVar7 + 0x1bf0);
  pRVar4->command[6] = *(RsxCmd *)(iVar7 + 0x1c00);
  pRVar3 = pRVar4->command;
  pRVar4->command = pRVar3 + 7;
  pRVar3[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
  pRVar4->command[1] = *(RsxCmd *)(iVar7 + 0x1c14);
  pRVar3 = pRVar4->command;
  pRVar4->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_SURFACE_PITCH_C_x4;
  pRVar4->command[1] = *(RsxCmd *)(iVar7 + 0x1c04);
  pRVar4->command[2] = *(RsxCmd *)(iVar7 + 0x1c08);
  pRVar4->command[3] = *(RsxCmd *)(iVar7 + 0x1bf4);
  pRVar4->command[4] = *(RsxCmd *)(iVar7 + 0x1bf8);
  pRVar3 = pRVar4->command;
  pRVar4->command = pRVar3 + 5;
  pRVar3[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
  pRVar4->command[1] = (uint)*(byte *)(iVar7 + 0x1be7);
  pRVar3 = pRVar4->command;
  pRVar4->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_WINDOW_OFFSET_x1;
  pRVar4->command[1] = CONCAT22(*(undefined2 *)(iVar7 + 0x1c1e),*(undefined2 *)(iVar7 + 0x1c1c));
  pRVar3 = pRVar4->command;
  pRVar4->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
  pRVar4->command[1] = CONCAT22(*(undefined2 *)(iVar7 + 0x1c18),*(undefined2 *)(iVar7 + 0x1c1c));
  pRVar4->command[2] = CONCAT22(*(undefined2 *)(iVar7 + 0x1c1a),*(undefined2 *)(iVar7 + 0x1c1e));
  pRVar3 = pRVar4->command;
  pRVar4->command = pRVar3 + 3;
  pRVar3[3] = NV4097_SET_SHADER_WINDOW_x1;
  pRVar4->command[1] =
       (uint)*(ushort *)(iVar7 + 0x1c1a) - (*(ushort *)(iVar7 + 0x1c1a) >> 0xc & 1) | 0x1000;
  pRVar4->command = pRVar4->command + 2;
  RsxCmd_WritePass(DepthPass);
  RsxCmd_WritePass(OceanForwardPass);
  RsxCmd_WritePass(ForwardPass);
  RsxCmd_WritePass(M_Depth);
  RsxCmd_WritePass(M_Pass);
  RsxCmd_WritePass(ShadowPass);
  RsxCmd_WritePass(MobyDepth);
  RsxCmd_WritePass(MobyPass);
  RsxCmd_WritePass(DL_DepthPass);
  RsxCmd_WritePass(DL_Pass);
  RsxCmd_WritePass(HUD_Pass);
  RsxCmd_WritePass(DepthPass);
  Gfx_DrawLoadingBar(param_1);
  lVar12 = 10;
  iVar14 = 0;
  do {
    pRVar4 = *ppRVar13;
    ppRVar13 = ppRVar13 + 1;
    *pRVar4->command =
         **(int **)((int)&OceanForwardPass + iVar14) - *(int *)(iVar7 + 0x4a8) | 0x20000000;
    pRVar4->command = pRVar4->command + 1;
    pRVar4 = HUD_Pass;
    lVar12 = lVar12 + -1;
    iVar14 = iVar14 + 4;
  } while (lVar12 != 0);
  lVar20 = 0xb;
  lVar12 = param_1 + ((ulonglong)*(uint *)(iVar7 + 0x1a6c) ^ 1) * 0xaa8;
  uVar15 = lVar12 + 0x4b0U & 0xffffffff;
  uVar9 = uVar15;
  do {
    piVar10 = (int *)uVar9;
    piVar10[2] = *piVar10;
    piVar10[1] = *piVar10 + piVar10[4];
    uVar9 = uVar9 + 0xf8;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  if (bVar8) {
    if (*(int *)(iVar7 + 0x1a8c) < 1) {
      idol::GcmFlipCommand_Thunk
                (pRVar4,*(uint *)(iVar7 + ((int)(uVar16 << 6) + (int)(uVar16 << 2)) * 5 + 0x1e50) &
                        0xff);
      *pRVar4->command = 0x40064;
      pRVar4->command[1] = 0x10;
      pRVar3 = pRVar4->command;
      pRVar4->command = pRVar3 + 2;
      pRVar3[2] = 0x40068;
      pRVar4->command[1] = 0;
      pRVar4->command = pRVar4->command + 2;
      DAT_008fa554 = 0xffffffff;
    }
    else {
      *(int *)(iVar7 + 0x1a8c) = *(int *)(iVar7 + 0x1a8c) + -1;
    }
  }
  else {
    FUN_004edc68(&DAT_01111700,pRVar4);
  }
  RsxCmd_WritePass(pRVar4);
  iVar14 = *(int *)(iVar7 + 0x1a74);
  iVar17 = 40000;
  iVar11 = DAT_010ef520[2];
  while (iVar11 != iVar14) {
    syscall();
    iVar17 = iVar17 + -1;
    if (iVar17 == 0) {
      libc::printf("Renderer timed out\n");
    }
    iVar11 = DAT_010ef520[2];
  }
  lVar20 = sys::sys_time_get_system_time();
  if ((longlong)(((LZCOUNT(0x32 - *(int *)(g_viewMtxPtr + 0x18)) << 0x3a) >> 0x3f & 4000U) + 18000)
      < lVar20 - DAT_010ef500) {
    iVar14 = DAT_010ef4fc + 5;
    DAT_010ef4fc = iVar14 + ((uint)(0x14 - (longlong)iVar14 >> 0x3f) & 0x14U - iVar14);
  }
  else {
    iVar14 = DAT_010ef4fc + -1;
    DAT_010ef4fc = iVar14 + (iVar14 >> 0x1f & -iVar14);
  }
  PTR_DAT_008fa54c._0_1_ = (undefined1)((ulonglong)(LZCOUNT(DAT_010ef4fc) << 0x20) >> 0x25);
  DAT_010ef500 = lVar20;
  if ((*(int *)(iVar7 + 0x4a4) != *(int *)(iVar7 + 0x4a0)) && ((*(uint *)(iVar7 + 0x1a6c) & 1) == 0)
     ) {
    if (*(int *)(iVar7 + 0x4a4) == 1) {
      if (*(char *)(iVar7 + 0x185a4) == '\0') {
        *(undefined4 *)(iVar7 + 0x4a4) = 0;
      }
      else {
        Gfx_EnableSpecialVideoOutMode(param_1);
      }
    }
    else {
      Gfx_ReconfigureVideoOut(param_1);
    }
    *(undefined4 *)(iVar7 + 0x4a0) = *(undefined4 *)(iVar7 + 0x4a4);
  }
  FUN_004edcfc(&DAT_01111700);
  iVar14 = (int)lVar12;
  uVar5 = *(undefined4 *)(iVar7 + 0x1a70);
  **(undefined4 **)(iVar14 + 0x4b8) = 0x40050;
  *(undefined4 *)(*(int *)(iVar14 + 0x4b8) + 4) = uVar5;
  *(int *)(iVar14 + 0x4b8) = *(int *)(iVar14 + 0x4b8) + 8;
  *(uint *)(iVar7 + 0x1a6c) = *(uint *)(iVar7 + 0x1a6c) ^ 1;
  *(int *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x14) + 1;
  if (*(int *)(iVar7 + 0x4a0) == 0) {
    iVar11 = 0;
    lVar12 = 2;
    do {
      *(undefined4 *)(*(int *)(iVar14 + 0x4b8) + iVar11) = 0;
      iVar17 = *(int *)(iVar14 + 0x4b8) + iVar11;
      iVar11 = iVar11 + 8;
      *(undefined4 *)(iVar17 + 4) = 0;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    puVar18 = (undefined4 *)(*(int *)(iVar14 + 0x4b8) + 0x10);
    *(undefined4 **)(iVar14 + 0x4b8) = puVar18;
  }
  else {
    FUN_0050f074(uVar15,0x44,1);
    puVar18 = *(undefined4 **)(iVar14 + 0x4b8);
  }
  lVar12 = 2;
  *puVar18 = 0x141efc;
  puVar18 = local_60;
  *(undefined4 *)(*(int *)(iVar14 + 0x4b8) + 4) = 0x11;
  puVar19 = (undefined4 *)(*(int *)(iVar14 + 0x4b8) + 8);
  *(undefined4 **)(iVar14 + 0x4b8) = puVar19;
  do {
    *puVar19 = *puVar18;
    iVar11 = *(int *)(iVar14 + 0x4b8);
    *(int *)(iVar14 + 0x4b8) = iVar11 + 4;
    puVar19 = puVar18 + 1;
    puVar18 = puVar18 + 2;
    *(undefined4 *)(iVar11 + 4) = *puVar19;
    puVar19 = (undefined4 *)(*(int *)(iVar14 + 0x4b8) + 4);
    *(undefined4 **)(iVar14 + 0x4b8) = puVar19;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  *pRVar4->command = *(int *)(iVar14 + 0x4b0) - *(int *)(iVar7 + 0x4a8) | 0x20000000;
  pRVar4->command = pRVar4->command + 1;
  sync(0);
  *DAT_010ef520 = *(int *)(iVar14 + 0x4b8) - *(int *)(iVar7 + 0x4a8);
  uVar6 = *(uint *)(iVar7 + 0x1a6c);
  param_1 = param_1 + (ulonglong)uVar6 * 0xaa8;
  *(int *)(iVar7 + 0x1a74) = *(int *)(iVar7 + 0x1a70);
  *(int *)(iVar7 + 0x1a70) = *(int *)(iVar7 + 0x1a70) + 1;
  uVar15 = param_1 + 0x4b0;
  OceanForwardPass = (RenderingStep *)(iVar7 + uVar6 * 0xaa8 + 0x5a8);
  DepthPass = (RenderingStep *)uVar15;
  ForwardPass = (RenderingStep *)(iVar7 + uVar6 * 0xaa8 + 0x6a0);
  M_Depth = (RenderingStep *)(iVar7 + uVar6 * 0xaa8 + 0x798);
  M_Pass = (RenderingStep *)(iVar7 + uVar6 * 0xaa8 + 0x890);
  ShadowPass = (RenderingStep *)(iVar7 + uVar6 * 0xaa8 + 0x988);
  MobyDepth = (RenderingStep *)(iVar7 + uVar6 * 0xaa8 + 0xa80);
  MobyPass = (RenderingStep *)(iVar7 + uVar6 * 0xaa8 + 0xb78);
  DL_DepthPass = (RenderingStep *)(iVar7 + uVar6 * 0xaa8 + 0xc70);
  DL_Pass = (RenderingStep *)(iVar7 + uVar6 * 0xaa8 + 0xd68);
  HUD_Pass = (RenderingStep *)(iVar7 + uVar6 * 0xaa8 + 0xe60);
  uVar15 = uVar15 & 0xffffffff;
  FrameHeap = (undefined4 *)(iVar7 + (*(uint *)(iVar7 + 0x14) % 3) * 0x24 + 0x1a00);
  libc::memset(uVar15 + 0x14,0,0x90);
  libc::memset(uVar15 + 0xa8,0xff,0x48);
  iVar7 = (int)param_1;
  *(undefined4 *)(iVar7 + 0x574) = 0;
  *(undefined4 *)(iVar7 + 0x570) = 0;
  pRVar4 = OceanForwardPass;
  libc::memset(OceanForwardPass + 1,0,0x90);
  libc::memset(&pRVar4[8].command,0xff,0x48);
  pRVar4[9].field7_0x10 = 0;
  pRVar4[9].callback = (undefined *)0x0;
  pRVar4 = ForwardPass;
  libc::memset(ForwardPass + 1,0,0x90);
  libc::memset(&pRVar4[8].command,0xff,0x48);
  pRVar4[9].field7_0x10 = 0;
  pRVar4[9].callback = (undefined *)0x0;
  pRVar4 = M_Depth;
  libc::memset(M_Depth + 1,0,0x90);
  libc::memset(&pRVar4[8].command,0xff,0x48);
  pRVar4[9].field7_0x10 = 0;
  pRVar4[9].callback = (undefined *)0x0;
  pRVar4 = M_Pass;
  libc::memset(M_Pass + 1,0,0x90);
  libc::memset(&pRVar4[8].command,0xff,0x48);
  pRVar4[9].field7_0x10 = 0;
  pRVar4[9].callback = (undefined *)0x0;
  pRVar4 = ShadowPass;
  libc::memset(ShadowPass + 1,0,0x90);
  libc::memset(&pRVar4[8].command,0xff,0x48);
  pRVar4[9].field7_0x10 = 0;
  pRVar4[9].callback = (undefined *)0x0;
  pRVar4 = MobyDepth;
  libc::memset(MobyDepth + 1,0,0x90);
  libc::memset(&pRVar4[8].command,0xff,0x48);
  pRVar4[9].field7_0x10 = 0;
  pRVar4[9].callback = (undefined *)0x0;
  pRVar4 = MobyPass;
  libc::memset(MobyPass + 1,0,0x90);
  libc::memset(&pRVar4[8].command,0xff,0x48);
  pRVar4[9].field7_0x10 = 0;
  pRVar4[9].callback = (undefined *)0x0;
  pRVar4 = DL_DepthPass;
  libc::memset(DL_DepthPass + 1,0,0x90);
  libc::memset(&pRVar4[8].command,0xff,0x48);
  pRVar4[9].field7_0x10 = 0;
  pRVar4[9].callback = (undefined *)0x0;
  pRVar4 = DL_Pass;
  libc::memset(DL_Pass + 1,0,0x90);
  libc::memset(&pRVar4[8].command,0xff,0x48);
  pRVar4[9].field7_0x10 = 0;
  pRVar4[9].callback = (undefined *)0x0;
  pRVar4 = HUD_Pass;
  libc::memset(HUD_Pass + 1,0,0x90);
  libc::memset(&pRVar4[8].command,0xff,0x48);
  pRVar4[9].field7_0x10 = 0;
  pRVar4[9].callback = (undefined *)0x0;
  FUN_004fe61c(FrameHeap,*FrameHeap);
  return;
}



//==== 004de940  ns=Global  size=0x84
// sig: undefined FUN_004de940(void)
// callers(0): 
// callees(3): 004ffc9c print_tty2; 0064fa64 cell::cellSpursEventFlagDetachLv2EventQueue; 0064fca4 cell::cellSpursFinalize
// strings: 006592a8: 'Shutting down graphic system ...\n' | 006592d0: 'ERROR: cellSpursEventFlagDetachLv2EventQueue failed: 0x%x\n' | 00659310: 'ERROR: cellSpursFinalize failed: 0x%x\n'

void FUN_004de940(void)

{
  undefined8 uVar1;
  
  print_tty2("Shutting down graphic system ...\n");
  uVar1 = cell::cellSpursEventFlagDetachLv2EventQueue(&DAT_01111580);
  if ((int)uVar1 != 0) {
    print_tty2("ERROR: cellSpursEventFlagDetachLv2EventQueue failed: 0x%x\n",uVar1);
  }
  uVar1 = cell::cellSpursFinalize(PTR_DAT_008fa624);
  if ((int)uVar1 != 0) {
    print_tty2("ERROR: cellSpursFinalize failed: 0x%x\n",uVar1);
  }
  return;
}



//==== 004de9c4  ns=Global  size=0xec
// sig: undefined FUN_004de9c4(void)
// callers(4): 001e6130 mobyupd::update1160::M1160_Hud_Draw; 0021e750 mobyupd::update1242::M1242_Hud_Draw; 002611a0 mobyupd::update1379::M1379_Hud_Draw; 0041b008 mobyupdate_helpers::M688_0041b008
// callees(3): 0050f434 FUN_0050f434; 0050f6e4 FUN_0050f6e4; 005cc784 FUN_005cc784

longlong FUN_004de9c4(undefined8 param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 local_c0 [8];
  undefined1 auStack_b8 [136];
  
  uVar1 = FUN_0050f434(&DAT_010eeb08 + param_2 * 0x30);
  lVar3 = 0;
  if (uVar1 != 0) {
    do {
      FUN_0050f6e4(&DAT_010eeb08 + param_2 * 0x30,lVar3,auStack_b8,local_c0);
      iVar2 = FUN_005cc784(param_3,auStack_b8);
      if (iVar2 == 0) {
        return lVar3;
      }
      uVar4 = (int)lVar3 + 1;
      lVar3 = (longlong)(int)uVar4;
    } while (uVar4 < uVar1);
  }
  return 0xffffffff;
}



//==== 004deab8  ns=Global  size=0x124
// sig: undefined FUN_004deab8(void)
// callers(4): 000685e0 draw::DrawFullScreenQuad; 0006b1f8 draw::DrawScreenEffect; 0006b890 draw::DrawScreenInsertEffect; 00480000 mobyupdate_helpers::M832_00480000
// callees(0): 

void FUN_004deab8(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  RenderingStep *pRVar4;
  ulonglong uVar5;
  RsxCmd *pRVar6;
  longlong lVar7;
  RsxCmd *pRVar8;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  uVar5 = ZEXT48(&stack0x00000000);
  lVar1 = uVar5 - 0xa0;
  puVar3 = (ulonglong *)lVar1;
  *puVar3 = uVar5;
  *(undefined4 *)(puVar3 + 0x10) = param_3;
  *(undefined4 *)((int)puVar3 + 0x84) = param_3;
  *(undefined4 *)(puVar3 + 0x11) = param_3;
  *(undefined4 *)((int)puVar3 + 0x8c) = param_3;
  auVar12 = ZEXT416(0xffffffff);
  auVar10 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  auVar12 = ZEXT416(0xffffffff);
  auVar11 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  auVar12 = *(undefined1 (*) [16])(puVar3 + 0x10);
  *(undefined4 *)(puVar3 + 0x10) = param_2;
  *(undefined4 *)((int)puVar3 + 0x84) = param_2;
  auVar13 = vectorConvertFromUnsignedFixedPointWord(auVar12,0);
  *(undefined4 *)(puVar3 + 0x11) = param_2;
  *(undefined4 *)((int)puVar3 + 0x8c) = param_2;
  auVar12 = loadVectorLeftIndexed(0x80,0x4deab0);
  auVar10 = vectorShiftLeftIntegerWord(auVar10,auVar10);
  auVar12 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar14 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  auVar11 = vectorShiftLeftIntegerWord(auVar11,auVar11);
  auVar12 = ZEXT416(0xffffffff);
  auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  puVar3[0x13] = unaff_r31;
  pRVar4 = HUD_Pass;
  auVar16 = vectorConvertFromUnsignedFixedPointWord(*(undefined1 (*) [16])(puVar3 + 0x10),0);
  auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar14,auVar11);
  puVar3[0x12] = unaff_r30;
  auVar15 = vectorShiftLeftIntegerWord(auVar12,auVar12);
  pRVar6 = pRVar4->command;
  lVar7 = uVar5 - 0x30;
  lVar9 = 2;
  auVar12 = vectorMultiplyAddFloatingPoint(auVar16,auVar14,auVar10);
  uVar2 = storeVectorElementWordIndexed(auVar12,0x70,lVar1);
  *(undefined4 *)(puVar3 + 0xe) = uVar2;
  uVar2 = storeVectorElementWordIndexed(auVar11,0x74,lVar1);
  *(undefined4 *)((int)puVar3 + 0x74) = uVar2;
  uVar2 = storeVectorElementWordIndexed(auVar12,0x78,lVar1);
  *(undefined4 *)(puVar3 + 0xf) = uVar2;
  auVar12 = loadVectorLeftIndexed(4,0x4deab0);
  auVar12 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar12 = vectorMultiplyAddFloatingPoint
                      (auVar13,auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,auVar15
                      );
  uVar2 = storeVectorElementWordIndexed(auVar12,0x7c,lVar1);
  *(undefined4 *)((int)puVar3 + 0x7c) = uVar2;
  *pRVar6 = NV4097_SET_TRANSFORM_CONSTANT_LOAD_x5;
  pRVar4->command[1] = 0x12;
  pRVar6 = pRVar4->command + 2;
  pRVar4->command = pRVar6;
  do {
    pRVar8 = (RsxCmd *)lVar7;
    *pRVar6 = *pRVar8;
    pRVar6 = pRVar4->command;
    pRVar4->command = pRVar6 + 1;
    lVar7 = lVar7 + 8;
    pRVar6[1] = pRVar8[1];
    pRVar6 = pRVar4->command + 1;
    pRVar4->command = pRVar6;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  return;
}



//==== 004debdc  ns=Global  size=0x14c
// sig: undefined FUN_004debdc(void)
// callers(2): 004ded28 FUN_004ded28; 004e3538 FUN_004e3538
// callees(0): 

void FUN_004debdc(undefined8 param_1,byte *param_2,byte *param_3,int param_4,ulonglong param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  longlong lVar17;
  
  uVar6 = param_5 & 0xffffffff;
  while (1 < uVar6) {
    pbVar11 = param_2 + param_4 * 4;
    uVar5 = (uint)((int)param_5 * param_4) >> 1;
    pbVar13 = param_2 + 4;
    pbVar9 = pbVar11 + 4;
    uVar7 = 0;
    pbVar8 = param_3;
    pbVar15 = param_3;
    if (uVar5 != 0) {
      do {
        lVar17 = 4;
        pbVar16 = param_2;
        pbVar14 = pbVar13;
        pbVar12 = pbVar11;
        pbVar10 = pbVar9;
        do {
          bVar1 = *pbVar16;
          bVar2 = *pbVar14;
          pbVar15 = pbVar8 + 1;
          bVar3 = *pbVar12;
          pbVar16 = pbVar16 + 1;
          bVar4 = *pbVar10;
          pbVar14 = pbVar14 + 1;
          pbVar12 = pbVar12 + 1;
          pbVar10 = pbVar10 + 1;
          *pbVar8 = (byte)((int)((uint)bVar1 + (uint)bVar2 + (uint)bVar3 + (uint)bVar4) >> 2);
          lVar17 = lVar17 + -1;
          pbVar8 = pbVar15;
        } while (lVar17 != 0);
        uVar7 = uVar7 + 1;
        param_2 = param_2 + 8;
        pbVar13 = pbVar13 + 8;
        pbVar11 = pbVar11 + 8;
        pbVar9 = pbVar9 + 8;
      } while (uVar7 < uVar5);
    }
    param_5 = (param_5 << 0x20) >> 0x21;
    param_2 = param_3;
    param_3 = pbVar15;
    uVar6 = param_5;
  }
  return;
}



//==== 004ded28  ns=Global  size=0x288
// sig: undefined FUN_004ded28(void)
// callers(0): 
// callees(11): 004debdc FUN_004debdc; 004fe098 idol::AllocateMemAlign; 004fe5ec FUN_004fe5ec; 004fe61c FUN_004fe61c; 004ffc9c print_tty2; 0053a154 FUN_0053a154; 005c4f10 FUN_005c4f10; 005c52f0 FUN_005c52f0; 005c5364 FUN_005c5364; 005c5ad0 libc::memcpy; 0064f2a4 cell::cellGcmAddressToOffset
// strings: 00659340: 'ERROR: open file %s\n'

void FUN_004ded28(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined1 uVar1;
  size_t __n;
  ushort uVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *__src;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  undefined1 local_80 [3];
  undefined1 uStack_7d;
  undefined4 local_7c;
  undefined1 auStack_78 [12];
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  
  *(undefined4 *)(param_2 + 0x14) = 0;
  uVar4 = FUN_005c52f0(param_3,&DAT_00659338);
  if ((int)uVar4 == 0) {
    print_tty2("ERROR: open file %s\n",param_3);
  }
  else {
    FUN_005c5364(auStack_78,1,0x12,uVar4);
    uVar2 = CONCAT11(local_6b,local_6c);
    uVar3 = CONCAT11(local_69,local_6a);
    uVar5 = FUN_004fe5ec(param_4);
    iVar10 = (uint)uVar3 * (uint)uVar2;
    __n = iVar10 * 8;
    __src = (undefined1 *)idol::AllocateMemAlign(param_4,__n,0x40);
    iVar10 = iVar10 * 4;
    FUN_005c5364(__src,1,iVar10,uVar4);
    FUN_005c4f10(uVar4);
    if (uVar3 != 0) {
      uVar9 = 0;
      puVar6 = __src;
      do {
        uVar7 = (uint)uVar2;
        puVar8 = puVar6;
        if (uVar2 != 0) {
          do {
            uVar7 = uVar7 - 1;
            uVar1 = puVar8[2];
            puVar6 = puVar8 + 4;
            puVar8[2] = *puVar8;
            *puVar8 = uVar1;
            puVar8 = puVar6;
          } while (0 < (int)uVar7);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar3);
    }
    FUN_004debdc(param_1,__src,__src + iVar10,(uint)uVar2,(uint)uVar3);
    puVar6 = __src;
    if ((int)param_5 != 0) {
      puVar6 = (undefined1 *)idol::AllocateMemAlign(param_5,__n,0x40);
      libc::memcpy(puVar6,__src,__n);
      FUN_004fe61c(param_4,uVar5);
    }
    FUN_0053a154(0x8058,local_80,&local_7c,0,1);
    *param_2 = uStack_7d;
    param_2[1] = 10;
    param_2[2] = 2;
    param_2[3] = 0;
    *(undefined4 *)(param_2 + 4) = local_7c;
    *(ushort *)(param_2 + 8) = uVar2;
    *(ushort *)(param_2 + 10) = uVar3;
    *(undefined2 *)(param_2 + 0xc) = 1;
    *(uint *)(param_2 + 0x10) = (uint)uVar2 << 2;
    param_2[0xe] = (char)((ulonglong)(LZCOUNT((int)param_5) << 0x20) >> 0x25);
    cell::cellGcmAddressToOffset(puVar6,param_2 + 0x14);
  }
  return;
}



//==== 004defb0  ns=Global  size=0x190
// sig: undefined FUN_004defb0(void)
// callers(0): 
// callees(6): 004fe098 idol::AllocateMemAlign; 004fe5ec FUN_004fe5ec; 004fe61c FUN_004fe61c; 0053a154 FUN_0053a154; 005c5ad0 libc::memcpy; 0064f2a4 cell::cellGcmAddressToOffset

void FUN_004defb0(undefined8 param_1,undefined1 *param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 *__src;
  undefined4 *puVar2;
  longlong lVar3;
  undefined1 local_50 [3];
  undefined1 uStack_4d;
  undefined4 local_4c;
  
  *(undefined4 *)(param_2 + 0x14) = 0;
  uVar1 = FUN_004fe5ec(param_4);
  __src = (undefined4 *)idol::AllocateMemAlign(param_4,0x40,0x40);
  lVar3 = 2;
  puVar2 = __src;
  do {
    *puVar2 = param_3;
    puVar2[1] = param_3;
    puVar2[2] = param_3;
    puVar2[3] = param_3;
    puVar2[4] = param_3;
    puVar2[5] = param_3;
    puVar2[6] = param_3;
    puVar2[7] = param_3;
    puVar2 = puVar2 + 8;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  puVar2 = __src;
  if ((int)param_5 != 0) {
    puVar2 = (undefined4 *)idol::AllocateMemAlign(param_5,0x40,0x40);
    libc::memcpy(puVar2,__src,0x40);
    FUN_004fe61c(param_4,uVar1);
  }
  FUN_0053a154(0x8058,local_50,&local_4c,0,1);
  param_2[2] = 2;
  *param_2 = uStack_4d;
  param_2[1] = 1;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = local_4c;
  *(undefined2 *)(param_2 + 8) = 4;
  *(undefined2 *)(param_2 + 10) = 4;
  *(undefined2 *)(param_2 + 0xc) = 1;
  *(undefined4 *)(param_2 + 0x10) = 0x10;
  param_2[0xe] = (char)((ulonglong)(LZCOUNT((int)param_5) << 0x20) >> 0x25);
  cell::cellGcmAddressToOffset(puVar2,param_2 + 0x14);
  return;
}



//==== 004df1c0  ns=Global  size=0x2d0
// sig: undefined FUN_004df1c0(void)
// callers(0): 
// callees(1): 005dd1f4 FUN_005dd1f4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004df1c0(double param_1,double param_2,double param_3,int param_4)

{
  float fVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
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
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  *(float *)(param_4 + 0x410) = (float)param_2;
  *(float *)(param_4 + 0x414) = (float)param_3;
  fVar1 = 1.3333334;
  if (*(int *)(param_4 + 0xc) == 1) {
    fVar1 = 1.7777777;
  }
  dVar3 = (double)fVar1;
  auVar6._0_4_ = (float)param_2;
  auVar6._4_4_ = (float)param_2;
  auVar6._8_4_ = (float)param_2;
  auVar6._12_4_ = (float)param_2;
  auVar17._0_4_ = (float)param_3;
  auVar17._4_4_ = (float)param_3;
  auVar17._8_4_ = (float)param_3;
  auVar17._12_4_ = (float)param_3;
  dVar2 = (double)FUN_005dd1f4(-(double)((float)(param_1 * 0.01745329238474369) * 0.5 - 1.5707964));
  auVar13 = _DAT_004df1b0;
  auVar9 = _DAT_004df170;
  auVar4 = vectorSubtractFloatingPoint(auVar6,auVar17);
  fVar1 = (float)(dVar2 / dVar3);
  auVar7 = ZEXT416(0xffffffff);
  auVar5 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
  auVar7 = ZEXT416(0xffffffff);
  auVar11 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
  auVar7 = ZEXT416(0xffffffff);
  auVar19 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
  auVar5 = vectorShiftLeftIntegerWord(auVar5,auVar5);
  auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
  auVar7 = ZEXT416(0xffffffff);
  auVar16 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
  auVar7 = ZEXT416(0);
  auVar21 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
  auVar11 = vectorReciprocalEstimateFloatingPoint(auVar4);
  auVar7 = loadVectorLeftIndexed(0x14,0x4df140);
  auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar8 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
  auVar14 = vectorAddFloatingPoint(auVar17,auVar6);
  auVar7 = vectorNegativeMultiplySubtractFloatingPoint(auVar11,auVar4,auVar8);
  auVar5 = vectorMultiplyAddFloatingPoint(auVar11,auVar7,auVar5);
  auVar7 = ZEXT416(0xffffffff);
  auVar11 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
  auVar7 = ZEXT416(0xffffffff);
  auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
  auVar10 = vectorShiftLeftIntegerWord(auVar11,auVar11);
  auVar7 = vectorShiftLeftIntegerWord(auVar7,auVar7);
  auVar11 = vectorMultiplyAddFloatingPoint(auVar17,auVar6,auVar7);
  auVar7 = vectorNegativeMultiplySubtractFloatingPoint(auVar5,auVar4,auVar8);
  auVar6 = vectorMultiplyAddFloatingPoint(auVar5,auVar7,auVar12);
  auVar12 = vectorShiftLeftIntegerWord(auVar19,auVar19);
  auVar5 = vectorShiftLeftIntegerWord(auVar16,auVar16);
  auVar7 = ZEXT416(0xffffffff);
  auVar17 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
  auVar7 = vectorNegativeMultiplySubtractFloatingPoint(auVar6,auVar4,auVar8);
  auVar6 = vectorMultiplyAddFloatingPoint(auVar6,auVar7,auVar10);
  auVar7._0_4_ = fVar1;
  auVar7._4_4_ = fVar1;
  auVar7._8_4_ = fVar1;
  auVar7._12_4_ = fVar1;
  auVar17 = vectorShiftLeftIntegerWord(auVar17,auVar17);
  auVar16 = vectorPermute(auVar7,auVar21,_DAT_004df160);
  auVar4 = vectorMultiplyAddFloatingPoint(auVar14,auVar6,auVar5);
  auVar6 = vectorMultiplyAddFloatingPoint(auVar11,auVar6,auVar12);
  auVar7 = loadVectorLeftIndexed(0x40,0x4df140);
  auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar4 = vectorPermute(auVar4,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,
                         _DAT_004df190);
  auVar7 = vectorMultiplyAddFloatingPoint(auVar6,auVar8,auVar17);
  auVar10 = vectorPermute(auVar4,auVar21,_DAT_004df1a0);
  auVar4._0_4_ = (float)dVar2;
  auVar4._4_4_ = (float)dVar2;
  auVar4._8_4_ = (float)dVar2;
  auVar4._12_4_ = (float)dVar2;
  *(undefined1 (*) [16])(param_4 + 0x60U & 0xfffffff0) = auVar16;
  auVar12 = vectorPermute(auVar4,auVar21,auVar9);
  auVar8 = vectorPermute(auVar7,auVar21,auVar13);
  *(undefined1 (*) [16])(param_4 + 0x70U & 0xfffffff0) = auVar12;
  *(undefined1 (*) [16])(param_4 + 0x80U & 0xfffffff0) = auVar10;
  *(undefined1 (*) [16])(param_4 + 0x90U & 0xfffffff0) = auVar8;
  auVar9 = *(undefined1 (*) [16])(param_4 + 0xa0U & 0xfffffff0);
  auVar13 = *(undefined1 (*) [16])(param_4 + 0xb0U & 0xfffffff0);
  auVar7 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar6 = auVar9 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar17 = auVar13 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar4 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar5 = *(undefined1 (*) [16])(param_4 + 0xc0U & 0xfffffff0);
  auVar19 = vectorMultiplyAddFloatingPoint
                      (auVar16,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,auVar21);
  auVar7 = auVar9 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar15 = vectorMultiplyAddFloatingPoint
                      (auVar12,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar21);
  auVar6 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar23 = *(undefined1 (*) [16])(param_4 + 0xd0U & 0xfffffff0);
  auVar20 = vectorMultiplyAddFloatingPoint
                      (auVar12,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,auVar21
                      );
  auVar17 = auVar5 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar18 = vectorMultiplyAddFloatingPoint
                      (auVar16,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,auVar21);
  auVar4 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar11 = vectorMultiplyAddFloatingPoint
                      (auVar16,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar21);
  auVar6 = auVar23 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar9 = auVar9 & (undefined1  [16])0xffffffff;
  auVar22 = vectorMultiplyAddFloatingPoint
                      (auVar12,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,auVar21
                      );
  auVar14 = vectorMultiplyAddFloatingPoint
                      (auVar16,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,auVar21);
  auVar17 = auVar13 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar12 = vectorMultiplyAddFloatingPoint
                      (auVar12,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar21);
  auVar13 = auVar13 & (undefined1  [16])0xffffffff;
  auVar6 = auVar23 & (undefined1  [16])0xffffffff;
  auVar19 = vectorMultiplyAddFloatingPoint
                      (auVar10,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,auVar19);
  auVar16 = vectorMultiplyAddFloatingPoint
                      (auVar8,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar15);
  auVar7 = auVar5 & (undefined1  [16])0xffffffff;
  auVar4 = auVar5 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar13 = vectorMultiplyAddFloatingPoint
                      (auVar8,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,auVar20)
  ;
  auVar9 = auVar23 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar15 = vectorMultiplyAddFloatingPoint
                      (auVar10,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,auVar18
                      );
  auVar5 = vectorMultiplyAddFloatingPoint
                     (auVar10,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,auVar11);
  auVar11 = vectorMultiplyAddFloatingPoint
                      (auVar8,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,auVar22);
  auVar17 = vectorMultiplyAddFloatingPoint
                      (auVar10,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar14);
  auVar7 = vectorMultiplyAddFloatingPoint
                     (auVar8,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar12);
  auVar4 = vectorAddFloatingPoint(auVar19,auVar16);
  auVar9 = vectorAddFloatingPoint(auVar15,auVar13);
  auVar6 = vectorAddFloatingPoint(auVar5,auVar11);
  auVar7 = vectorAddFloatingPoint(auVar17,auVar7);
  *(undefined1 (*) [16])(param_4 + 0xe0U & 0xfffffff0) = auVar4;
  *(undefined1 (*) [16])(param_4 + 0xf0U & 0xfffffff0) = auVar9;
  *(undefined1 (*) [16])(param_4 + 0x100U & 0xfffffff0) = auVar6;
  *(undefined1 (*) [16])(param_4 + 0x110U & 0xfffffff0) = auVar7;
  return;
}



//==== 004df600  ns=Global  size=0x62c
// sig: undefined FUN_004df600(void)
// callers(0): 
// callees(1): 004feb98 FUN_004feb98

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004df600(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 auVar10 [16];
  undefined4 in_vr2_32_0;
  undefined4 uVar11;
  undefined4 in_vr2_32_1;
  undefined4 uVar12;
  undefined4 in_vr2_32_2;
  undefined4 uVar13;
  undefined4 in_vr2_32_3;
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
  
  auVar14 = *(undefined1 (*) [16])(param_2 & 0xfffffff0);
  auVar10 = ZEXT416(0);
  auVar27 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
  auVar15 = *(undefined1 (*) [16])(param_2 + 0x10 & 0xfffffff0);
  auVar16 = *(undefined1 (*) [16])(param_2 + 0x20 & 0xfffffff0);
  auVar17 = *(undefined1 (*) [16])(param_2 + 0x30 & 0xfffffff0);
  auVar20 = vectorMergeLowWord(auVar14,auVar15);
  auVar21 = vectorMergeLowWord(auVar16,auVar17);
  auVar18 = vectorMergeHighWord(auVar14,auVar15);
  auVar19 = vectorMergeHighWord(auVar16,auVar17);
  auVar23 = vectorPermute(auVar20,auVar21,_DAT_004df4d0);
  auVar25 = vectorPermute(auVar21,auVar20,_DAT_004df4e0);
  auVar33 = vectorPermute(auVar16,auVar14,_DAT_004df4f0);
  auVar28 = vectorPermute(auVar17,auVar15,_DAT_004df520);
  auVar22 = vectorPermute(auVar16,auVar14,_DAT_004df490);
  auVar10 = vectorPermute(auVar17,auVar15,_DAT_004df4c0);
  auVar31 = vectorPermute(auVar18,auVar19,_DAT_004df4d0);
  auVar30 = vectorPermute(auVar19,auVar18,_DAT_004df4e0);
  auVar1._0_16_ = auVar23;
  auVar1._16_16_ = auVar23;
  auVar2._0_16_ = auVar25;
  auVar2._16_16_ = auVar25;
  auVar23 = vectorMultiplyAddFloatingPoint(auVar23,auVar25,auVar27);
  auVar35 = vectorPermute(auVar16,auVar14,_DAT_004df4b0);
  auVar33 = vectorMultiplyAddFloatingPoint(auVar33,auVar28,auVar27);
  auVar29 = vectorPermute(auVar17,auVar15,_DAT_004df4a0);
  auVar25 = vectorMultiplyAddFloatingPoint(auVar22,auVar10,auVar27);
  auVar22 = vectorPermute(auVar19,auVar18,_DAT_004df4d0);
  auVar34 = vectorMultiplyAddFloatingPoint(auVar31,auVar30,auVar27);
  auVar30 = vectorPermute(auVar18,auVar19,_DAT_004df4e0);
  auVar32 = vectorPermute(auVar17,auVar15,_DAT_004df500);
  auVar10 = vectorPermute(auVar16,auVar14,_DAT_004df510);
  auVar24 = vectorPermute(auVar16,auVar14,_DAT_004df4a0);
  auVar26 = vectorPermute(auVar15,auVar17,_DAT_004df4b0);
  auVar28 = vectorPermute(auVar15,auVar17,_DAT_004df490);
  auVar31 = vectorNegativeMultiplySubtractFloatingPoint(auVar1._8_16_,auVar2._8_16_,auVar23);
  auVar23 = vectorNegativeMultiplySubtractFloatingPoint(auVar32,auVar10,auVar33);
  auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar29,auVar35,auVar25);
  auVar25 = vectorNegativeMultiplySubtractFloatingPoint(auVar22,auVar30,auVar34);
  auVar30 = vectorMultiplyAddFloatingPoint(auVar24,auVar26,auVar27);
  auVar32 = vectorPermute(auVar16,auVar14,_DAT_004df500);
  auVar22 = vectorPermute(auVar16,auVar14,_DAT_004df4c0);
  auVar10 = vectorPermute(auVar16,auVar14,_DAT_004df520);
  auVar29 = vectorPermute(auVar18,auVar19,_DAT_004df540);
  auVar26 = vectorMergeHighWord(auVar33,auVar31);
  auVar14 = vectorPermute(auVar23,auVar25,_DAT_004df550);
  auVar16 = vectorPermute(auVar23,auVar25,_DAT_004df560);
  auVar34 = vectorPermute(auVar33,auVar31,_DAT_004df570);
  auVar24 = vectorPermute(auVar18,auVar19,_DAT_004df530);
  auVar14 = vectorMultiplyAddFloatingPoint(auVar14,auVar26,auVar27);
  auVar26 = vectorPermute(auVar15,auVar17,_DAT_004df510);
  auVar28 = vectorNegativeMultiplySubtractFloatingPoint(auVar28,auVar22,auVar30);
  auVar22 = vectorPermute(auVar15,auVar17,_DAT_004df4f0);
  auVar17 = vectorPermute(auVar20,auVar21,_DAT_004df540);
  auVar3._0_16_ = auVar29;
  auVar3._16_16_ = auVar29;
  auVar30 = vectorMultiplyAddFloatingPoint(auVar24,auVar33,auVar27);
  auVar15 = vectorMultiplyAddFloatingPoint(auVar32,auVar26,auVar27);
  auVar32 = vectorMultiplyAddFloatingPoint(auVar3._4_16_,auVar31,auVar27);
  auVar14 = vectorMultiplyAddFloatingPoint(auVar16,auVar34,auVar14);
  auVar16 = vectorPermute(auVar20,auVar21,_DAT_004df530);
  auVar4._0_16_ = auVar24;
  auVar4._16_16_ = auVar24;
  auVar26 = vectorPermute(auVar19,auVar18,_DAT_004df530);
  auVar5._0_16_ = auVar17;
  auVar5._16_16_ = auVar17;
  auVar19 = vectorPermute(auVar19,auVar18,_DAT_004df540);
  auVar15 = vectorNegativeMultiplySubtractFloatingPoint(auVar22,auVar10,auVar15);
  auVar6._0_16_ = auVar16;
  auVar6._16_16_ = auVar16;
  auVar18 = vectorMultiplyAddFloatingPoint(auVar16,auVar23,auVar27);
  auVar24 = vectorMultiplyAddFloatingPoint(auVar5._4_16_,auVar25,auVar27);
  auVar16 = vectorPermute(auVar21,auVar20,_DAT_004df530);
  auVar20 = vectorPermute(auVar21,auVar20,_DAT_004df540);
  auVar21 = vectorNegativeMultiplySubtractFloatingPoint(auVar29,auVar33,auVar32);
  auVar10 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar22 = auVar14 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar14 = auVar14 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar22 = vectorSubtractFloatingPoint
                      (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                       auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60);
  auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar4._4_16_,auVar31,auVar30);
  auVar30 = vectorNegativeMultiplySubtractFloatingPoint(auVar6._4_16_,auVar25,auVar18);
  auVar10 = vectorNegativeMultiplySubtractFloatingPoint(auVar17,auVar23,auVar24);
  auVar18 = loadVectorLeftIndexed(0xf0,0x4df490);
  auVar25 = vectorMultiplyAddFloatingPoint(auVar19,auVar28,auVar21);
  auVar23 = vectorSubtractFloatingPoint
                      (auVar22,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60);
  auVar17 = vectorNegativeMultiplySubtractFloatingPoint(auVar26,auVar28,auVar33);
  auVar14 = vectorNegativeMultiplySubtractFloatingPoint(auVar16,auVar15,auVar30);
  auVar22 = vectorMultiplyAddFloatingPoint(auVar20,auVar15,auVar10);
  auVar10 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar30 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
  auVar10 = ZEXT416(2);
  auVar24 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
  auVar10 = vectorReciprocalEstimateFloatingPoint(auVar23);
  auVar23 = vectorNegativeMultiplySubtractFloatingPoint(auVar23,auVar10,auVar30);
  auVar10 = vectorMultiplyAddFloatingPoint(auVar23,auVar10,auVar10);
  auVar23 = vectorMultiplyAddFloatingPoint(auVar17,auVar10,auVar27);
  auVar25 = vectorMultiplyAddFloatingPoint(auVar25,auVar10,auVar27);
  auVar14 = vectorMultiplyAddFloatingPoint(auVar14,auVar10,auVar27);
  auVar10 = vectorMultiplyAddFloatingPoint(auVar22,auVar10,auVar27);
  iVar7 = (int)param_1;
  *(undefined1 (*) [16])(iVar7 + 0xa0U & 0xfffffff0) = auVar23;
  *(undefined1 (*) [16])(iVar7 + 0xb0U & 0xfffffff0) = auVar25;
  *(undefined1 (*) [16])(iVar7 + 0xc0U & 0xfffffff0) = auVar14;
  *(undefined1 (*) [16])(iVar7 + 0xd0U & 0xfffffff0) = auVar10;
  auVar10 = loadVectorLeftIndexed(0x124,0x4df490);
  auVar22 = loadVectorLeftIndexed(0xf4,0x4df490);
  auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar14 = loadVectorLeftIndexed(0x128,0x4df490);
  auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar19 = vectorConvertToSignedFixedPointWordSaturate
                      (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0);
  auVar10 = loadVectorLeftIndexed(300,0x4df490);
  auVar23 = loadVectorLeftIndexed(0x130,0x4df490);
  auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar16 = vectorConvertFromSignedFixedPointWord(auVar19,0);
  auVar15 = vectorNegativeMultiplySubtractFloatingPoint
                      (auVar16,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,
                       auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60);
  auVar22 = loadVectorLeftIndexed(0x134,0x4df490);
  auVar14 = loadVectorLeftIndexed(0x138,0x4df490);
  auVar25 = loadVectorLeftIndexed(0x13c,0x4df490);
  auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar20 = vectorNegativeMultiplySubtractFloatingPoint
                      (auVar16,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,auVar15
                      );
  auVar10 = loadVectorLeftIndexed(0x140,0x4df490);
  auVar16 = loadVectorLeftIndexed(0x144,0x4df490);
  auVar15 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar10 = ZEXT416(3);
  auVar17 = loadVectorLeftIndexed(0x120,0x4df490);
  auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar28 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
  auVar19 = vectorLogicalAnd(auVar19,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60);
  auVar10 = ZEXT416(1);
  auVar21 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
  auVar31 = vectorMultiplyAddFloatingPoint(auVar20,auVar20,auVar27);
  auVar10._0_4_ = auVar21._0_4_ + auVar19._0_4_;
  auVar10._8_8_ = auVar18._8_8_;
  auVar10._4_4_ = auVar21._4_4_ + auVar19._4_4_;
  auVar17._0_8_ = auVar10._0_8_;
  auVar17._8_4_ = auVar21._8_4_ + auVar19._8_4_;
  auVar17._12_4_ = auVar21._12_4_ + auVar19._12_4_;
  auVar22 = vectorMultiplyAddFloatingPoint
                      (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,auVar31,
                       auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60);
  auVar23 = vectorMultiplyAddFloatingPoint
                      (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,auVar31,
                       auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60);
  auVar33 = vectorMultiplyAddFloatingPoint(auVar31,auVar20,auVar27);
  auVar25 = vectorLogicalAnd(auVar17,auVar21);
  auVar14 = vectorLogicalAnd(auVar19,auVar21);
  auVar10 = vectorLogicalAnd(auVar19,auVar24);
  auVar19 = vectorCompareEqualToUnsignedWord(auVar25,auVar27);
  auVar18 = vectorCompareEqualToUnsignedWord(auVar14,auVar27);
  auVar25 = vectorCompareEqualToUnsignedWord(auVar10,auVar27);
  auVar10 = vectorMultiplyAddFloatingPoint
                      (auVar22,auVar31,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60
                      );
  auVar22 = vectorMultiplyAddFloatingPoint
                      (auVar23,auVar31,auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60
                      );
  auVar14 = vectorLogicalAnd(auVar17,auVar24);
  auVar17 = vectorCompareEqualToUnsignedWord(auVar14,auVar27);
  auVar23 = vectorMultiplyAddFloatingPoint(auVar10,auVar31,auVar30);
  auVar16 = vectorMultiplyAddFloatingPoint(auVar22,auVar33,auVar20);
  auVar14 = *(undefined1 (*) [16])(iVar7 + 0xa0U & 0xfffffff0);
  auVar10 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar22 = auVar14 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar15 = *(undefined1 (*) [16])(iVar7 + 0xb0U & 0xfffffff0);
  auVar19 = vectorConditionalSelect(auVar23,auVar16,auVar19);
  auVar23 = vectorConditionalSelect(auVar23,auVar16,auVar18);
  auVar16 = vectorConditionalSelect(auVar28 ^ auVar19,auVar19,auVar17);
  auVar25 = vectorConditionalSelect(auVar28 ^ auVar23,auVar23,auVar25);
  auVar18 = vectorMultiplyAddFloatingPoint
                      (_DAT_004df5e0,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                       auVar27);
  auVar10 = auVar14 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar17 = vectorLogicalAnd(auVar16,_DAT_004df590);
  auVar14 = auVar14 & (undefined1  [16])0xffffffff;
  auVar23 = auVar15 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar19 = vectorConditionalSelect(auVar17,auVar25,_DAT_004df5a0);
  auVar17 = vectorLogicalAnd(auVar25 ^ auVar28,_DAT_004df590);
  auVar25 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar28 = vectorMultiplyAddFloatingPoint
                      (auVar19,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,auVar27
                      );
  auVar21 = vectorConditionalSelect(auVar17,auVar16,_DAT_004df5a0);
  auVar16 = *(undefined1 (*) [16])(iVar7 + 0xc0U & 0xfffffff0);
  auVar17 = *(undefined1 (*) [16])(iVar7 + 0xd0U & 0xfffffff0);
  auVar33 = vectorMultiplyAddFloatingPoint
                      (_DAT_004df5e0,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                       auVar27);
  auVar22 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar30 = vectorMultiplyAddFloatingPoint
                      (auVar19,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,auVar27
                      );
  auVar23 = auVar16 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar20 = vectorMultiplyAddFloatingPoint
                      (auVar21,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,auVar18
                      );
  auVar10 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar25 = auVar15 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar18 = vectorMultiplyAddFloatingPoint
                      (_DAT_004df5e0,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,
                       auVar27);
  auVar23 = vectorMultiplyAddFloatingPoint
                      (auVar19,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,auVar27
                      );
  auVar15 = auVar15 & (undefined1  [16])0xffffffff;
  auVar28 = vectorMultiplyAddFloatingPoint
                      (_DAT_004df5f0,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,
                       auVar28);
  auVar22 = auVar16 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar14 = auVar17 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar31 = vectorMultiplyAddFloatingPoint
                      (_DAT_004df5e0,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                       auVar27);
  auVar16 = auVar16 & (undefined1  [16])0xffffffff;
  auVar14 = vectorMultiplyAddFloatingPoint
                      (auVar19,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,auVar27
                      );
  auVar25 = vectorMultiplyAddFloatingPoint
                      (auVar21,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,auVar33
                      );
  auVar15 = vectorMultiplyAddFloatingPoint
                      (_DAT_004df5f0,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,
                       auVar30);
  auVar10 = auVar17 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar17 = auVar17 & (undefined1  [16])0xffffffff;
  auVar18 = vectorMultiplyAddFloatingPoint
                      (auVar21,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,auVar18
                      );
  auVar16 = vectorMultiplyAddFloatingPoint
                      (_DAT_004df5f0,auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,
                       auVar23);
  auVar22 = vectorAddFloatingPoint(auVar20,auVar28);
  auVar23 = vectorMultiplyAddFloatingPoint
                      (auVar21,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,auVar31
                      );
  auVar10 = vectorMultiplyAddFloatingPoint
                      (_DAT_004df5f0,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,
                       auVar14);
  auVar14 = vectorAddFloatingPoint(auVar25,auVar15);
  auVar25 = vectorAddFloatingPoint(auVar18,auVar16);
  *(undefined1 (*) [16])(iVar7 + 0xa0U & 0xfffffff0) = auVar22;
  auVar10 = vectorAddFloatingPoint(auVar23,auVar10);
  *(undefined1 (*) [16])(iVar7 + 0xb0U & 0xfffffff0) = auVar14;
  auVar20 = *(undefined1 (*) [16])(iVar7 + 0x60U & 0xfffffff0);
  auVar21 = *(undefined1 (*) [16])(iVar7 + 0x70U & 0xfffffff0);
  *(undefined1 (*) [16])(iVar7 + 0xc0U & 0xfffffff0) = auVar25;
  *(undefined1 (*) [16])(iVar7 + 0xd0U & 0xfffffff0) = auVar10;
  auVar25 = *(undefined1 (*) [16])(iVar7 + 0xa0U & 0xfffffff0);
  auVar15 = *(undefined1 (*) [16])(iVar7 + 0xb0U & 0xfffffff0);
  auVar10 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar22 = auVar25 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar14 = auVar25 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar23 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar28 = vectorMultiplyAddFloatingPoint
                      (auVar20,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,auVar27
                      );
  auVar10 = auVar15 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar33 = vectorMultiplyAddFloatingPoint
                      (auVar21,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,auVar27
                      );
  auVar16 = *(undefined1 (*) [16])(iVar7 + 0xc0U & 0xfffffff0);
  auVar19 = *(undefined1 (*) [16])(iVar7 + 0x80U & 0xfffffff0);
  auVar17 = *(undefined1 (*) [16])(iVar7 + 0xd0U & 0xfffffff0);
  auVar30 = vectorMultiplyAddFloatingPoint
                      (auVar20,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,auVar27
                      );
  auVar22 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar31 = vectorMultiplyAddFloatingPoint
                      (auVar21,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,auVar27
                      );
  auVar10 = auVar16 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar23 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar25 = auVar25 & (undefined1  [16])0xffffffff;
  auVar24 = vectorMultiplyAddFloatingPoint
                      (auVar20,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,auVar27
                      );
  auVar18 = vectorMultiplyAddFloatingPoint
                      (auVar21,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,auVar27
                      );
  auVar10 = auVar15 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar28 = vectorMultiplyAddFloatingPoint
                      (auVar19,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,auVar28
                      );
  auVar15 = auVar15 & (undefined1  [16])0xffffffff;
  auVar22 = auVar17 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar23 = vectorMultiplyAddFloatingPoint
                      (auVar20,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,auVar27
                      );
  auVar26 = *(undefined1 (*) [16])(iVar7 + 0x90U & 0xfffffff0);
  auVar14 = vectorMultiplyAddFloatingPoint
                      (auVar26,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,auVar33
                      );
  auVar25 = vectorMultiplyAddFloatingPoint
                      (auVar21,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,auVar27
                      );
  auVar22 = auVar16 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar16 = auVar16 & (undefined1  [16])0xffffffff;
  auVar21 = vectorMultiplyAddFloatingPoint
                      (auVar19,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,auVar30
                      );
  auVar20 = vectorMultiplyAddFloatingPoint
                      (auVar26,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,auVar31
                      );
  auVar10 = auVar17 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar17 = auVar17 & (undefined1  [16])0xffffffff;
  auVar15 = vectorMultiplyAddFloatingPoint
                      (auVar19,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,auVar24
                      );
  auVar16 = vectorMultiplyAddFloatingPoint
                      (auVar26,auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,auVar18
                      );
  auVar22 = vectorMultiplyAddFloatingPoint
                      (auVar19,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,auVar23
                      );
  auVar10 = vectorAddFloatingPoint(auVar28,auVar14);
  auVar14 = vectorMultiplyAddFloatingPoint
                      (auVar26,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,auVar25
                      );
  auVar23 = vectorAddFloatingPoint(auVar21,auVar20);
  auVar25 = vectorAddFloatingPoint(auVar15,auVar16);
  auVar22 = vectorAddFloatingPoint(auVar22,auVar14);
  *(undefined1 (*) [16])(iVar7 + 0xe0U & 0xfffffff0) = auVar10;
  *(undefined1 (*) [16])(iVar7 + 0xf0U & 0xfffffff0) = auVar23;
  *(undefined1 (*) [16])(iVar7 + 0x100U & 0xfffffff0) = auVar25;
  *(undefined1 (*) [16])(iVar7 + 0x110U & 0xfffffff0) = auVar22;
  FUN_004feb98(param_1 + 800,param_1 + 0xe0);
  puVar8 = (undefined4 *)(iVar7 + 0x20U & 0xfffffff0);
  puVar8[3] = in_vr2_32_3;
  puVar8[2] = in_vr2_32_2;
  puVar8[1] = in_vr2_32_1;
  *puVar8 = in_vr2_32_0;
  puVar8 = (undefined4 *)(param_5 & 0xfffffff0);
  uVar13 = puVar8[2];
  uVar12 = puVar8[1];
  uVar11 = *puVar8;
  puVar9 = (undefined4 *)(iVar7 + 0x30U & 0xfffffff0);
  puVar9[3] = puVar8[3];
  puVar9[2] = uVar13;
  puVar9[1] = uVar12;
  *puVar9 = uVar11;
  puVar8 = (undefined4 *)(param_5 + 0x10 & 0xfffffff0);
  uVar13 = puVar8[2];
  uVar12 = puVar8[1];
  uVar11 = *puVar8;
  puVar9 = (undefined4 *)(iVar7 + 0x40U & 0xfffffff0);
  puVar9[3] = puVar8[3];
  puVar9[2] = uVar13;
  puVar9[1] = uVar12;
  *puVar9 = uVar11;
  puVar8 = (undefined4 *)(param_5 + 0x20 & 0xfffffff0);
  uVar13 = puVar8[2];
  uVar12 = puVar8[1];
  uVar11 = *puVar8;
  puVar9 = (undefined4 *)(iVar7 + 0x50U & 0xfffffff0);
  puVar9[3] = puVar8[3];
  puVar9[2] = uVar13;
  puVar9[1] = uVar12;
  *puVar9 = uVar11;
  return;
}



//==== 004dfc2c  ns=Global  size=0x4
// sig: undefined FUN_004dfc2c(void)
// callers(0): 
// callees(0): 

void FUN_004dfc2c(void)

{
  return;
}



//==== 004dfe70  ns=Global  size=0xe04
// sig: undefined FUN_004dfe70(void)
// callers(1): 000f7af0 mobyfunc::MB_BuildDrawEntry
// callees(3): 004d82b8 idol_draw::BindFragmentProgram; 004d83ec idol_draw::BindVertexProgram; 005e9008 FUN_005e9008

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dfe70(double param_1,int *param_2,int param_3,undefined8 param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  RenderingStep *pRVar9;
  longlong lVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  RsxCmd *pRVar13;
  RsxCmd *pRVar14;
  longlong lVar15;
  undefined1 in_vs34 [16];
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
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auStack_380 [16];
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
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [16];
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [16];
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar10 = uVar12 - 0x50;
  puVar11 = (undefined4 *)lVar10;
  puVar11[3] = in_vr31_32_3;
  puVar11[2] = in_vr31_32_2;
  puVar11[1] = in_vr31_32_1;
  *puVar11 = in_vr31_32_0;
  (*(code *)**(undefined4 **)(*param_2 + 0x10))(param_2,ShadowPass,0x200,0x200);
  pRVar9 = ShadowPass;
  *ShadowPass->command = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
  pRVar9->command[1] = *(byte *)(param_2 + 0x6a5) + 0xfeed0000;
  pRVar14 = pRVar9->command;
  pRVar9->command = pRVar14 + 2;
  pRVar14[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
  pRVar9->command[1] = *(byte *)((int)param_2 + 0x1a95) + 0xfeed0000;
  pRVar14 = pRVar9->command;
  pRVar9->command = pRVar14 + 2;
  pRVar14[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
  pRVar9->command[1] = *(byte *)((int)param_2 + 0x1a96) + 0xfeed0000;
  pRVar9->command[2] = *(byte *)((int)param_2 + 0x1a97) + 0xfeed0000;
  pRVar14 = pRVar9->command;
  pRVar9->command = pRVar14 + 3;
  pRVar14[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
  pRVar9->command[1] = *(byte *)((int)param_2 + 0x1ab9) + 0xfeed0000;
  pRVar14 = pRVar9->command;
  uVar1 = *(ushort *)(param_2 + 0x6b1);
  pRVar9->command = pRVar14 + 2;
  uVar2 = *(ushort *)((int)param_2 + 0x1ac6);
  pRVar14[2] = (RsxCmd)&DAT_00180208;
  pRVar9->command[1] =
       (uint)*(byte *)((int)param_2 + 0x1a92) | (uint)*(byte *)(param_2 + 0x6ae) << 5 |
       (uint)*(byte *)(param_2 + 0x6a4) << 8 | (uint)*(byte *)((int)param_2 + 0x1a91) << 0xc |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar1) & 0xffffffff) << 0x10) |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar2) & 0xffffffff) << 0x18);
  pRVar9->command[2] = param_2[0x6aa];
  pRVar9->command[3] = param_2[0x6a6];
  pRVar9->command[4] = param_2[0x6af];
  pRVar9->command[5] = param_2[0x6a7];
  pRVar9->command[6] = param_2[0x6ab];
  pRVar14 = pRVar9->command;
  pRVar9->command = pRVar14 + 7;
  pRVar14[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
  pRVar9->command[1] = param_2[0x6b0];
  pRVar14 = pRVar9->command;
  pRVar9->command = pRVar14 + 2;
  pRVar14[2] = NV4097_SET_SURFACE_PITCH_C_x4;
  pRVar9->command[1] = param_2[0x6ac];
  pRVar9->command[2] = param_2[0x6ad];
  pRVar9->command[3] = param_2[0x6a8];
  pRVar9->command[4] = param_2[0x6a9];
  pRVar14 = pRVar9->command;
  pRVar9->command = pRVar14 + 5;
  pRVar14[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
  pRVar9->command[1] = (uint)*(byte *)((int)param_2 + 0x1a93);
  pRVar14 = pRVar9->command;
  pRVar9->command = pRVar14 + 2;
  pRVar14[2] = NV4097_SET_WINDOW_OFFSET_x1;
  pRVar9->command[1] =
       CONCAT22(*(undefined2 *)((int)param_2 + 0x1aca),*(undefined2 *)(param_2 + 0x6b2));
  pRVar14 = pRVar9->command;
  pRVar9->command = pRVar14 + 2;
  pRVar14[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
  pRVar9->command[1] = CONCAT22(*(undefined2 *)(param_2 + 0x6b1),*(undefined2 *)(param_2 + 0x6b2));
  pRVar9->command[2] =
       CONCAT22(*(undefined2 *)((int)param_2 + 0x1ac6),*(undefined2 *)((int)param_2 + 0x1aca));
  pRVar14 = pRVar9->command;
  pRVar9->command = pRVar14 + 3;
  pRVar14[3] = NV4097_SET_SHADER_WINDOW_x1;
  pRVar9->command[1] =
       (uint)*(ushort *)((int)param_2 + 0x1ac6) - (*(ushort *)((int)param_2 + 0x1ac6) >> 0xc & 1) |
       0x1000;
  pRVar9->command = pRVar9->command + 2;
  pRVar9 = ShadowPass;
  *ShadowPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar9->command[1] = 0xffffff00;
  pRVar9->command = pRVar9->command + 2;
  pRVar9 = ShadowPass;
  *ShadowPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar9->command[1] = 1;
  pRVar14 = pRVar9->command;
  pRVar9->command = pRVar14 + 2;
  pRVar14[2] = NV4097_NO_OPERATION_x1;
  pRVar9->command[1] = 0;
  pRVar9->command = pRVar9->command + 2;
  pRVar9 = ShadowPass;
  *ShadowPass->command = NV4097_SET_BLEND_ENABLE_x1;
  pRVar9->command[1] = 0;
  pRVar9->command = pRVar9->command + 2;
  pRVar9 = ShadowPass;
  *ShadowPass->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar9->command[1] = 1;
  pRVar9->command = pRVar9->command + 2;
  pRVar9 = ShadowPass;
  *ShadowPass->command = NV4097_SET_COLOR_MASK_x1;
  pRVar9->command[1] = 0;
  pRVar9->command = pRVar9->command + 2;
  pRVar9 = ShadowPass;
  *ShadowPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar9->command[1] = 0;
  pRVar9->command = pRVar9->command + 2;
  pRVar9 = ShadowPass;
  *ShadowPass->command = NV4097_SET_ZCULL_EN_x1;
  pRVar9->command[1] = 3;
  pRVar9->command = pRVar9->command + 2;
  idol_draw::BindVertexProgram(param_2,ShadowPass,9);
  idol_draw::BindFragmentProgram(param_2,ShadowPass,0xf);
  auVar16 = loadVectorLeftIndexed(lVar10,param_4);
  auVar19 = ZEXT416(0);
  auVar46 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
  auVar17 = loadVectorLeftIndexed(8,param_4);
  auVar18 = loadVectorLeftIndexed(4,param_4);
  auVar19 = loadVectorLeftIndexed(0x20,0x4dfc30);
  auVar19 = auVar19 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar47 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
  auVar19 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar21 = vectorPermute(auVar18,auVar17,_DAT_004dfc30);
  auVar23 = vectorPermute(auVar16,auStack_380,_DAT_004dfc30);
  auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) ^ auVar47;
  auVar23 = vectorPermute(auVar21,auVar23,_DAT_004dfc40);
  auVar25 = vectorPermute(auVar18,auVar16,_DAT_004dfc80);
  auVar21 = vectorPermute(auVar19,auVar19,_DAT_004dfc80);
  auVar27 = vectorPermute(auVar17,auVar16,_DAT_004dfc30);
  auVar19 = vectorPermute(auVar19,auVar18,_DAT_004dfc80);
  auVar24 = vectorPermute(auVar16,auVar16,_DAT_004dfc80);
  auVar21 = vectorPermute(auVar25,auVar21,_DAT_004dfc40);
  auVar26 = vectorPermute(auVar18,auStack_380,_DAT_004dfc30);
  auVar25 = vectorMultiplyAddFloatingPoint(auVar23,auVar21,auVar46);
  auVar26 = vectorPermute(auVar27,auVar26,_DAT_004dfc40);
  auVar21 = vectorPermute(auVar19,auVar24,_DAT_004dfc90);
  auVar19 = vectorPermute(auVar16,auVar18,_DAT_004dfc30);
  auVar16 = vectorPermute(auVar17,auStack_380,_DAT_004dfc30);
  auVar21 = vectorNegativeMultiplySubtractFloatingPoint(auVar26,auVar21,auVar25);
  auVar18 = vectorPermute(auVar19,auVar16,_DAT_004dfc40);
  auVar19 = loadVectorLeftIndexed(0x90,0x4dfc30);
  auVar25 = vectorMultiplyAddFloatingPoint(auVar21,auVar21,auVar46);
  auVar16 = vectorPermute(auVar21,auVar21,_DAT_004dfca0);
  auVar17 = vectorPermute(auVar21,auVar21,_DAT_004dfcb0);
  auVar19 = auVar19 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar24 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
  auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar16,auVar25);
  auVar19 = loadVectorLeftIndexed(0x94,0x4dfc30);
  auVar19 = auVar19 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar48 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
  auVar19 = vectorMultiplyAddFloatingPoint(auVar17,auVar17,auVar16);
  auVar19 = auVar19 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar16 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
  auVar19 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar16);
  auVar16 = vectorMultiplyAddFloatingPoint(auVar19,auVar16,auVar46);
  auVar17 = vectorMultiplyAddFloatingPoint(auVar19,auVar24,auVar46);
  auVar16 = vectorNegativeMultiplySubtractFloatingPoint(auVar19,auVar16,auVar48);
  auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar17,auVar19);
  auVar17 = vectorCompareEqualToFloatingPoint(auVar16,auVar16);
  auVar19 = vectorConditionalSelect(auVar19,auVar16,auVar17);
  auVar19 = vectorMultiplyAddFloatingPoint(auVar21,auVar19,auVar46);
  auVar16 = vectorPermute(auVar19,auVar19,_DAT_004dfc60);
  auVar19 = vectorPermute(auVar19,auVar19,_DAT_004dfc70);
  auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar26,auVar46);
  auVar17 = vectorNegativeMultiplySubtractFloatingPoint(auVar19,auVar23,auVar16);
  auVar19 = vectorMultiplyAddFloatingPoint(auVar17,auVar17,auVar46);
  auVar16 = vectorPermute(auVar17,auVar17,_DAT_004dfca0);
  auVar21 = vectorPermute(auVar17,auVar17,_DAT_004dfcb0);
  auVar19 = vectorMultiplyAddFloatingPoint(auVar16,auVar16,auVar19);
  auVar19 = vectorMultiplyAddFloatingPoint(auVar21,auVar21,auVar19);
  auVar19 = auVar19 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar19 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
  auVar16 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar19);
  auVar19 = vectorMultiplyAddFloatingPoint(auVar16,auVar19,auVar46);
  auVar21 = vectorMultiplyAddFloatingPoint(auVar16,auVar24,auVar46);
  auVar19 = vectorNegativeMultiplySubtractFloatingPoint(auVar16,auVar19,auVar48);
  auVar19 = vectorMultiplyAddFloatingPoint(auVar19,auVar21,auVar16);
  auVar21 = vectorCompareEqualToFloatingPoint(auVar19,auVar19);
  auVar19 = vectorConditionalSelect(auVar16,auVar19,auVar21);
  vectorMultiplyAddFloatingPoint(auVar17,auVar19,auVar46);
  auVar25._0_4_ = (float)param_1;
  auVar25._4_4_ = (float)param_1;
  auVar25._8_4_ = (float)param_1;
  auVar25._12_4_ = (float)param_1;
  auVar19 = loadVectorLeftIndexed(0x98,0x4dfc30);
  auVar16 = vectorMultiplyAddFloatingPoint(auVar18,auVar25,auVar46);
  auVar19 = auVar19 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar19 = vectorMultiplyAddFloatingPoint
                      (auVar16,auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,auVar46
                      );
  vectorSubtractFloatingPoint(in_vs34,auVar19);
  FUN_005e9008(uVar12 - 0x280,uVar12 - 0x350,uVar12 - 0x360,uVar12 - 0x370);
  auVar45 = _DAT_004dfe10;
  auVar27 = _DAT_004dfe00;
  auVar26 = _DAT_004dfdf0;
  auVar24 = _DAT_004dfde0;
  auVar17 = vectorMergeHighWord(auStack_280,auStack_270);
  auVar18 = vectorMergeHighWord(auStack_260,auStack_250);
  auVar20 = vectorMergeLowWord(auStack_280,auStack_270);
  auVar22 = vectorMergeLowWord(auStack_260,auStack_250);
  auVar21 = vectorPermute(auVar20,auVar22,_DAT_004dfd10);
  auVar39 = vectorPermute(auVar17,auVar18,_DAT_004dfd10);
  auVar23 = vectorPermute(auVar18,auVar17,_DAT_004dfd20);
  auVar19 = vectorPermute(auStack_260,auStack_280,_DAT_004dfcd0);
  auVar16 = vectorPermute(auStack_250,auStack_270,_DAT_004dfd00);
  auVar29 = vectorPermute(auVar22,auVar20,_DAT_004dfd20);
  auVar49 = vectorPermute(auStack_260,auStack_280,_DAT_004dfd30);
  auVar34 = vectorPermute(auStack_250,auStack_270,_DAT_004dfd60);
  auVar40 = vectorMultiplyAddFloatingPoint(auVar39,auVar23,auVar46);
  auVar3._0_16_ = auVar21;
  auVar3._16_16_ = auVar21;
  auVar23 = vectorMultiplyAddFloatingPoint(auVar19,auVar16,auVar46);
  auVar39 = vectorMultiplyAddFloatingPoint(auVar21,auVar29,auVar46);
  auVar4._0_16_ = auVar29;
  auVar4._16_16_ = auVar29;
  auVar50 = vectorMultiplyAddFloatingPoint(auVar49,auVar34,auVar46);
  auVar19 = vectorPermute(auVar18,auVar17,_DAT_004dfd10);
  auVar16 = vectorPermute(auVar17,auVar18,_DAT_004dfd20);
  auVar34 = vectorPermute(auStack_260,auStack_280,_DAT_004dfcf0);
  auVar29 = vectorPermute(auStack_250,auStack_270,_DAT_004dfce0);
  auVar35 = vectorPermute(auStack_260,auStack_280,_DAT_004dfd50);
  auVar49 = vectorPermute(auStack_250,auStack_270,_DAT_004dfd40);
  auVar21 = vectorNegativeMultiplySubtractFloatingPoint(auVar19,auVar16,auVar40);
  auVar40 = vectorNegativeMultiplySubtractFloatingPoint(auVar29,auVar34,auVar23);
  auVar28 = vectorNegativeMultiplySubtractFloatingPoint(auVar3._8_16_,auVar4._8_16_,auVar39);
  auVar19 = vectorPermute(auStack_260,auStack_280,_DAT_004dfce0);
  auVar23 = vectorNegativeMultiplySubtractFloatingPoint(auVar49,auVar35,auVar50);
  auVar16 = vectorPermute(auStack_270,auStack_250,_DAT_004dfcf0);
  auVar29 = vectorPermute(auStack_260,auStack_280,_DAT_004dfd00);
  auVar39 = vectorPermute(auStack_270,auStack_250,_DAT_004dfcd0);
  auVar41 = vectorPermute(auStack_270,auStack_250,_DAT_004dfd50);
  auVar34 = vectorMultiplyAddFloatingPoint(auVar19,auVar16,auVar46);
  auVar16 = vectorPermute(auStack_270,auStack_250,_DAT_004dfd30);
  auVar50 = vectorMergeHighWord(auVar40,auVar28);
  auVar51 = vectorPermute(auVar40,auVar28,_DAT_004dfdb0);
  auVar49 = vectorPermute(auVar23,auVar21,_DAT_004dfd90);
  auVar30 = vectorPermute(auVar23,auVar21,_DAT_004dfda0);
  auVar35 = vectorPermute(auStack_260,auStack_280,_DAT_004dfd40);
  auVar19 = vectorPermute(auStack_260,auStack_280,_DAT_004dfd60);
  auVar49 = vectorMultiplyAddFloatingPoint(auVar49,auVar50,auVar46);
  auVar43 = vectorPermute(auVar17,auVar18,_DAT_004dfd70);
  auVar29 = vectorNegativeMultiplySubtractFloatingPoint(auVar39,auVar29,auVar34);
  auVar50 = vectorPermute(auVar18,auVar17,_DAT_004dfd70);
  auVar39 = vectorMultiplyAddFloatingPoint(auVar35,auVar41,auVar46);
  auVar5._0_16_ = auVar43;
  auVar5._16_16_ = auVar43;
  auVar38 = auVar47 ^ auVar25;
  auVar49 = vectorMultiplyAddFloatingPoint(auVar30,auVar51,auVar49);
  auVar35 = vectorMultiplyAddFloatingPoint(auVar43,auVar40,auVar46);
  auVar51 = vectorPermute(auVar17,auVar18,_DAT_004dfd80);
  auVar39 = vectorNegativeMultiplySubtractFloatingPoint(auVar16,auVar19,auVar39);
  auVar19 = loadVectorLeftIndexed(0x1a0,0x4dfc30);
  auVar34 = vectorPermute(auVar18,auVar17,_DAT_004dfd80);
  auVar19 = auVar19 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar16 = auVar49 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar17 = auVar49 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar35 = vectorNegativeMultiplySubtractFloatingPoint(auVar5._4_16_,auVar28,auVar35);
  auVar18 = auVar49 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar49 = vectorSubtractFloatingPoint
                      (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,
                       auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60);
  auVar16 = vectorPermute(auVar38,auStack_2e0,_DAT_004dfdc0);
  auVar6._0_16_ = auVar51;
  auVar6._16_16_ = auVar51;
  auVar19 = vectorPermute(auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,auStack_2d0,
                          _DAT_004dfdc0);
  auVar43 = vectorPermute(auVar25,auStack_2c0,_DAT_004dfdc0);
  auVar30 = vectorPermute(auVar46,auStack_2b0,_DAT_004dfdc0);
  auVar28 = vectorMultiplyAddFloatingPoint(auVar6._4_16_,auVar28,auVar46);
  auVar41 = vectorPermute(auVar20,auVar22,_DAT_004dfd80);
  auVar19 = vectorMergeHighWord(auVar16,auVar19);
  auVar16 = vectorPermute(auVar38,auStack_2a0,_DAT_004dfdc0);
  auVar17 = vectorPermute(auVar25,auStack_290,_DAT_004dfdc0);
  auVar50 = vectorNegativeMultiplySubtractFloatingPoint(auVar50,auVar29,auVar35);
  auVar35 = vectorPermute(auVar20,auVar22,_DAT_004dfd70);
  auVar49 = vectorSubtractFloatingPoint
                      (auVar49,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60);
  auVar18 = vectorMergeHighWord(auVar43,auVar30);
  auVar16 = vectorMergeHighWord(auVar19,auVar16);
  auVar7._0_16_ = auVar41;
  auVar7._16_16_ = auVar41;
  auVar8._0_16_ = auVar35;
  auVar8._16_16_ = auVar35;
  auVar19 = vectorMergeHighWord(auVar18,auVar17);
  auVar18 = vectorNegativeMultiplySubtractFloatingPoint(auVar51,auVar40,auVar28);
  auVar35 = vectorMultiplyAddFloatingPoint(auVar35,auVar23,auVar46);
  auVar30 = vectorMultiplyAddFloatingPoint(auVar7._4_16_,auVar21,auVar46);
  auVar28 = vectorPermute(auVar22,auVar20,_DAT_004dfd70);
  auVar40 = vectorSubtractFloatingPoint(auVar19,auVar16);
  auVar20 = vectorPermute(auVar22,auVar20,_DAT_004dfd80);
  auVar17 = vectorAddFloatingPoint(auVar19,auVar16);
  auVar22 = vectorReciprocalEstimateFloatingPoint(auVar49);
  auVar29 = vectorMultiplyAddFloatingPoint(auVar34,auVar29,auVar18);
  auVar18 = vectorNegativeMultiplySubtractFloatingPoint(auVar8._4_16_,auVar21,auVar35);
  auVar19 = vectorNegativeMultiplySubtractFloatingPoint(auVar41,auVar23,auVar30);
  auVar16 = vectorNegativeMultiplySubtractFloatingPoint(auVar49,auVar22,auVar48);
  auVar34 = vectorReciprocalEstimateFloatingPoint(auVar40);
  auVar21 = vectorNegativeMultiplySubtractFloatingPoint(auVar28,auVar39,auVar18);
  auVar19 = vectorMultiplyAddFloatingPoint(auVar20,auVar39,auVar19);
  auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar22,auVar22);
  auVar23 = vectorNegativeMultiplySubtractFloatingPoint(auVar40,auVar34,auVar48);
  lVar15 = 8;
  auVar18 = vectorMultiplyAddFloatingPoint(auVar50,auVar16,auVar46);
  auVar20 = vectorMultiplyAddFloatingPoint(auVar29,auVar16,auVar46);
  auVar21 = vectorMultiplyAddFloatingPoint(auVar21,auVar16,auVar46);
  auVar29 = vectorMultiplyAddFloatingPoint(auVar23,auVar34,auVar34);
  auVar23 = vectorMultiplyAddFloatingPoint(auVar19,auVar16,auVar46);
  auVar19 = auVar18 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar30 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
  auVar19 = auVar20 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar39 = vectorAddFloatingPoint(auVar29,auVar29);
  auVar16 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar32 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
  auVar16 = auVar21 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar51 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
  auVar29 = vectorConditionalSelect(auVar29 ^ auVar47,auVar29,_DAT_004dfde0);
  auVar16 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar43 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
  auVar29 = vectorMultiplyAddFloatingPoint(auVar17,auVar29,auVar46);
  auVar16 = auVar23 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar36 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
  auVar16 = loadVectorLeftIndexed(0x1f0,0x4dfc30);
  auVar17 = loadVectorLeftIndexed(500,0x4dfc30);
  auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar49 = vectorPermute(auVar25,auStack_320,_DAT_004dfdc0);
  auVar34 = vectorPermute(auVar38,auStack_340,_DAT_004dfdc0);
  auVar22 = vectorPermute(auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,auStack_330,
                          _DAT_004dfdc0);
  auVar16 = vectorPermute(auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,auStack_310,
                          _DAT_004dfdc0);
  auVar17 = vectorMergeHighWord(auVar34,auVar22);
  auVar34 = vectorMergeHighWord(auVar49,auVar16);
  auVar40 = vectorPermute(auVar38,auStack_300,_DAT_004dfdc0);
  auVar16 = vectorPermute(auVar25,auStack_2f0,_DAT_004dfdc0);
  auVar22 = vectorLogicalAnd(auVar39,_DAT_004dfdf0);
  auVar49 = vectorLogicalAnd(auVar39,_DAT_004dfe00);
  auVar25 = vectorMergeHighWord(auVar17,auVar40);
  auVar34 = vectorMergeHighWord(auVar34,auVar16);
  auVar16 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar17 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
  auVar38 = vectorMultiplyAddFloatingPoint(auVar22,auVar43,auVar46);
  auVar16 = auVar18 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar40 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
  auVar44 = vectorMultiplyAddFloatingPoint
                      (auVar49,auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,auVar46
                      );
  auVar28 = vectorSubtractFloatingPoint(auVar34,auVar25);
  auVar35 = vectorMultiplyAddFloatingPoint(auVar22,auVar17,auVar46);
  auVar50 = vectorMultiplyAddFloatingPoint(auVar49,auVar40,auVar46);
  auVar19 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar16 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
  auVar19 = auVar21 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar41 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
  auVar34 = vectorAddFloatingPoint(auVar34,auVar25);
  auVar25 = vectorLogicalAnd(auVar39,_DAT_004dfde0);
  auVar39 = vectorConditionalSelect(auVar29,auVar48,_DAT_004dfe10);
  auVar52 = vectorMultiplyAddFloatingPoint(auVar22,auVar16,auVar46);
  auVar18 = auVar18 & (undefined1  [16])0xffffffff;
  auVar29 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
  auVar18 = vectorMultiplyAddFloatingPoint(auVar22,auVar32,auVar46);
  auVar21 = auVar21 & (undefined1  [16])0xffffffff;
  auVar31 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
  auVar33 = vectorMultiplyAddFloatingPoint(auVar49,auVar41,auVar46);
  auVar21 = vectorMultiplyAddFloatingPoint(auVar49,auVar36,auVar46);
  auVar38 = vectorMultiplyAddFloatingPoint(auVar25,auVar51,auVar38);
  auVar37 = vectorReciprocalEstimateFloatingPoint(auVar28);
  auVar22 = vectorMultiplyAddFloatingPoint(auVar25,auVar30,auVar35);
  auVar49 = vectorMultiplyAddFloatingPoint(auVar39,auVar29,auVar50);
  auVar19 = auVar23 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar50 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
  auVar23 = auVar23 & (undefined1  [16])0xffffffff;
  auVar42 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
  auVar22 = vectorAddFloatingPoint(auVar22,auVar49);
  auVar19 = auVar20 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar35 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
  auVar49 = vectorNegativeMultiplySubtractFloatingPoint(auVar28,auVar37,auVar48);
  auVar28 = vectorMultiplyAddFloatingPoint(auVar25,auVar35,auVar52);
  auVar19 = auVar20 & (undefined1  [16])0xffffffff;
  auVar52 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
  auVar18 = vectorMultiplyAddFloatingPoint(auVar25,auVar50,auVar18);
  auVar19 = auVar20 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar23 = vectorMultiplyAddFloatingPoint(auVar39,auVar31,auVar33);
  auVar20 = vectorMultiplyAddFloatingPoint(auVar39,auVar52,auVar44);
  auVar21 = vectorMultiplyAddFloatingPoint(auVar39,auVar42,auVar21);
  auVar25 = vectorMultiplyAddFloatingPoint(auVar49,auVar37,auVar37);
  *(undefined1 (*) [16])((uint)(param_2 + param_3 * 0x10 + 0x48) & 0xfffffff0) = auVar22;
  auVar23 = vectorAddFloatingPoint(auVar38,auVar23);
  auVar39 = vectorAddFloatingPoint(auVar28,auVar20);
  auVar21 = vectorAddFloatingPoint(auVar18,auVar21);
  auVar20 = vectorAddFloatingPoint(auVar25,auVar25);
  auVar18 = vectorConditionalSelect(auVar25 ^ auVar47,auVar25,auVar24);
  auVar18 = vectorMultiplyAddFloatingPoint(auVar34,auVar18,auVar46);
  *(undefined1 (*) [16])((uint)(param_2 + param_3 * 0x10 + 0x4c) & 0xfffffff0) = auVar39;
  *(undefined1 (*) [16])((uint)(param_2 + param_3 * 0x10 + 0x50) & 0xfffffff0) = auVar23;
  *(undefined1 (*) [16])((uint)(param_2 + param_3 * 0x10 + 0x54) & 0xfffffff0) = auVar21;
  pRVar9 = ShadowPass;
  auVar21 = *(undefined1 (*) [16])((uint)(param_2 + param_3 * 0x10 + 0x48) & 0xfffffff0);
  auVar18 = vectorConditionalSelect(auVar18,auVar48,auVar45);
  auVar26 = vectorLogicalAnd(auVar20,auVar26);
  auVar27 = vectorLogicalAnd(auVar20,auVar27);
  auVar45 = vectorLogicalAnd(auVar20,auVar24);
  auVar25 = vectorMergeHighWord(auVar21,*(undefined1 (*) [16])
                                         ((uint)(param_2 + param_3 * 0x10 + 0x50) & 0xfffffff0));
  auVar24 = vectorMergeHighWord(*(undefined1 (*) [16])
                                 ((uint)(param_2 + param_3 * 0x10 + 0x4c) & 0xfffffff0),
                                *(undefined1 (*) [16])
                                 ((uint)(param_2 + param_3 * 0x10 + 0x54) & 0xfffffff0));
  auVar21 = vectorMergeLowWord(auVar21,*(undefined1 (*) [16])
                                        ((uint)(param_2 + param_3 * 0x10 + 0x50) & 0xfffffff0));
  auVar23 = vectorMergeLowWord(*(undefined1 (*) [16])
                                ((uint)(param_2 + param_3 * 0x10 + 0x4c) & 0xfffffff0),
                               *(undefined1 (*) [16])
                                ((uint)(param_2 + param_3 * 0x10 + 0x54) & 0xfffffff0));
  vectorMergeHighWord(auVar25,auVar24);
  vectorMergeLowWord(auVar25,auVar24);
  vectorMergeHighWord(auVar21,auVar23);
  vectorMergeLowWord(auVar21,auVar23);
  lVar10 = uVar12 - 0x240;
  *ShadowPass->command = 0x441efc;
  pRVar9->command[1] = 0;
  pRVar14 = pRVar9->command + 2;
  pRVar9->command = pRVar14;
  do {
    pRVar13 = (RsxCmd *)lVar10;
    *pRVar14 = *pRVar13;
    pRVar14 = pRVar9->command;
    pRVar9->command = pRVar14 + 1;
    lVar10 = lVar10 + 8;
    pRVar14[1] = pRVar13[1];
    pRVar14 = pRVar9->command + 1;
    pRVar9->command = pRVar14;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  auVar21 = ZEXT416(0);
  auVar39 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
  auVar21 = vectorMultiplyAddFloatingPoint(auVar27,auVar40,auVar39);
  auVar17 = vectorMultiplyAddFloatingPoint(auVar26,auVar17,auVar39);
  auVar23 = vectorMultiplyAddFloatingPoint(auVar26,auVar16,auVar39);
  auVar25 = vectorMultiplyAddFloatingPoint(auVar26,auVar43,auVar39);
  auVar24 = vectorMultiplyAddFloatingPoint(auVar27,auVar41,auVar39);
  auVar16 = vectorMultiplyAddFloatingPoint(auVar18,auVar29,auVar21);
  auVar17 = vectorMultiplyAddFloatingPoint(auVar45,auVar30,auVar17);
  auVar19 = vectorMultiplyAddFloatingPoint
                      (auVar27,auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,auVar39
                      );
  auVar26 = vectorMultiplyAddFloatingPoint(auVar26,auVar32,auVar39);
  auVar29 = vectorMultiplyAddFloatingPoint(auVar27,auVar36,auVar39);
  auVar21 = vectorMultiplyAddFloatingPoint(auVar45,auVar35,auVar23);
  auVar23 = vectorMultiplyAddFloatingPoint(auVar45,auVar51,auVar25);
  auVar25 = vectorMultiplyAddFloatingPoint(auVar18,auVar31,auVar24);
  auVar17 = vectorAddFloatingPoint(auVar17,auVar16);
  auVar16 = vectorMultiplyAddFloatingPoint(auVar18,auVar52,auVar19);
  auVar27 = vectorMultiplyAddFloatingPoint(auVar45,auVar50,auVar26);
  auVar18 = vectorMultiplyAddFloatingPoint(auVar18,auVar42,auVar29);
  auVar26 = vectorAddFloatingPoint(auVar23,auVar25);
  auVar19 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar24 = vectorAddFloatingPoint(auVar21,auVar16);
  auVar16 = auVar17 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar27 = vectorAddFloatingPoint(auVar27,auVar18);
  auVar45 = vectorMultiplyAddFloatingPoint
                      (_DAT_004dfe30,auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,
                       auVar39);
  auVar19 = auVar17 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar17 = auVar17 & (undefined1  [16])0xffffffff;
  auVar20 = vectorMultiplyAddFloatingPoint
                      (_DAT_004dfe40,auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,
                       auVar39);
  auVar16 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar18 = auVar26 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar21 = auVar26 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar23 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar25 = auVar24 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar22 = vectorMultiplyAddFloatingPoint
                      (_DAT_004dfe30,auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,
                       auVar39);
  auVar16 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar49 = vectorMultiplyAddFloatingPoint
                      (_DAT_004dfe40,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,
                       auVar39);
  auVar34 = vectorMultiplyAddFloatingPoint
                      (_DAT_004dfe50,auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,
                       auVar45);
  auVar19 = auVar24 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar18 = auVar27 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar23 = vectorMultiplyAddFloatingPoint
                      (_DAT_004dfe30,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,
                       auVar39);
  auVar25 = vectorMultiplyAddFloatingPoint
                      (_DAT_004dfe40,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                       auVar39);
  auVar24 = auVar24 & (undefined1  [16])0xffffffff;
  auVar29 = vectorMultiplyAddFloatingPoint
                      (_DAT_004dfe30,auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,
                       auVar39);
  auVar26 = auVar26 & (undefined1  [16])0xffffffff;
  auVar45 = vectorMultiplyAddFloatingPoint
                      (_DAT_004dfe60,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,
                       auVar20);
  auVar17 = vectorMultiplyAddFloatingPoint
                      (_DAT_004dfe40,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,
                       auVar39);
  auVar16 = auVar27 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar27 = auVar27 & (undefined1  [16])0xffffffff;
  auVar20 = vectorMultiplyAddFloatingPoint
                      (_DAT_004dfe50,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,
                       auVar22);
  auVar39 = vectorMultiplyAddFloatingPoint
                      (_DAT_004dfe60,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,
                       auVar49);
  auVar26 = vectorMultiplyAddFloatingPoint
                      (_DAT_004dfe50,auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,
                       auVar23);
  auVar23 = vectorMultiplyAddFloatingPoint
                      (_DAT_004dfe60,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,
                       auVar25);
  auVar21 = vectorMultiplyAddFloatingPoint
                      (_DAT_004dfe50,auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,
                       auVar29);
  auVar18 = vectorAddFloatingPoint(auVar34,auVar45);
  auVar19 = vectorMultiplyAddFloatingPoint
                      (_DAT_004dfe60,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,
                       auVar17);
  auVar16 = vectorAddFloatingPoint(auVar26,auVar23);
  auVar17 = vectorAddFloatingPoint(auVar20,auVar39);
  auVar19 = vectorAddFloatingPoint(auVar21,auVar19);
  *(undefined1 (*) [16])((uint)(param_2 + param_3 * 0x10 + 0x88) & 0xfffffff0) = auVar18;
  *(undefined1 (*) [16])((uint)(param_2 + param_3 * 0x10 + 0x8c) & 0xfffffff0) = auVar16;
  *(undefined1 (*) [16])((uint)(param_2 + param_3 * 0x10 + 0x90) & 0xfffffff0) = auVar17;
  *(undefined1 (*) [16])((uint)(param_2 + param_3 * 0x10 + 0x94) & 0xfffffff0) = auVar19;
  return;
}



