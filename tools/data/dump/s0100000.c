//==== 001005a8  ns=mobyutil  size=0x368
// sig: undefined MB_PushOutOfWalls(undefined8 param_1, undefined8 param_2, MobyInstance * param_3, undefined4 param_4, undefined8 param_5, undefined8 param_6, undefined4 param_7)
// callers(2): 00100918 mobyutil::MB_PushMobyOutOfWalls; 00300950 mobyupdate_helpers::M233_00300950
// callees(1): 00059e20 collproc::CollSphere

undefined4
mobyutil::MB_PushOutOfWalls
          (double param_1,undefined8 param_2,MobyInstance *param_3,CollOutput *param_4,
          undefined8 param_5,undefined8 param_6,uint param_7)

{
  longlong lVar1;
  void *pvVar2;
  float fVar3;
  f32 fVar4;
  f32 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulonglong *puVar10;
  float fVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar15;
  ulonglong uVar14;
  CollOutput *pCVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  float *pfVar20;
  ulonglong unaff_r27;
  undefined4 uVar21;
  ulonglong unaff_r28;
  int iVar22;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  ulonglong in_f27;
  double dVar25;
  ulonglong in_f28;
  double dVar26;
  ulonglong in_f29;
  double dVar27;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar1 = uVar13 - 0x100;
  puVar10 = (ulonglong *)lVar1;
  *puVar10 = uVar13;
  puVar10[0x22] = in_LR;
  puVar10[0x1b] = in_f27;
  puVar10[0x1c] = in_f28;
  puVar10[0x1d] = in_f29;
  puVar10[0x1e] = in_f30;
  puVar10[0x1f] = in_f31;
  dVar25 = (double)(param_3->pos).x;
  pvVar2 = param_4->grid;
  dVar26 = (double)(param_3->pos).y;
  dVar27 = (double)(param_3->pos).z;
  puVar10[0x18] = unaff_r29;
  puVar10[0x16] = unaff_r27;
  uVar21 = 0;
  (param_3->pos).x = (float)(dVar25 + (double)(float)pvVar2);
  puVar10[0x17] = unaff_r28;
  fVar3 = (float)param_4->padding[0];
  puVar10[0x19] = unaff_r30;
  iVar22 = 0;
  puVar10[0x1a] = unaff_r31;
  (param_3->pos).y = (float)(dVar26 + (double)fVar3);
  (param_3->pos).z = (float)(dVar27 + (double)(float)param_4->padding[1]);
  pCVar16 = param_4;
  do {
    fVar3 = (param_3->pos).z;
    fVar4 = (param_3->pos).y;
    *(f32 *)(puVar10 + 0xe) = (param_3->pos).x;
    fVar5 = (param_3->pos).w;
    *(f32 *)((int)puVar10 + 0x74) = fVar4;
    *(f32 *)((int)puVar10 + 0x7c) = fVar5;
    *(float *)(puVar10 + 0xf) = (float)((double)fVar3 + param_1);
    iVar15 = collproc::CollSphere
                       (param_2,uVar13 - 0x90,pCVar16,
                        ((LZCOUNT(-(param_7 & 0x10)) << 0x3a) >> 0x3f & 0xffffffffffffffe0U) + 0x20
                        | 4,param_3);
    fVar3 = CollOutput.normal.z;
    if (iVar15 == 0) break;
    pCVar16 = &CollOutput;
    fVar8 = ABS(CollOutput.normal.z);
    fVar6 = SQRT(CollOutput.normal.x * CollOutput.normal.x +
                 CollOutput.normal.y * CollOutput.normal.y);
    fVar7 = ABS(fVar6);
    *(float *)(puVar10 + 0x10) = fVar6;
    *(float *)((int)puVar10 + 0x84) = fVar8 - fVar7;
    fVar6 = 0.0;
    uVar14 = (ulonglong)((uint)fVar3 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x84) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar10 + 0x10) >> 0x1d) & 4;
    fVar3 = fVar8;
    if (*(float *)((int)puVar10 + 0x84) - 0.0 < 0.0) {
      fVar3 = fVar7;
    }
    fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
    fVar7 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
    fVar11 = ABS(*(float *)(puVar10 + 0x10));
    if (*(float *)((int)puVar10 + 0x84) - 0.0 < 0.0) {
      fVar11 = fVar8;
    }
    if (0.0 < fVar3) {
      lVar19 = uVar13 - 0xf0;
      lVar17 = uVar13 - 0x68;
      lVar18 = uVar13 - 0x78;
      lVar23 = 2;
      fVar3 = (fVar11 - fVar3) / (fVar11 + fVar3);
      fVar8 = fVar3 * fVar3;
      *(float *)((int)puVar10 + 0x94) = fVar3;
      *(float *)((int)puVar10 + 0x8c) = fVar3;
      *(float *)(puVar10 + 0x12) = fVar3;
      *(float *)(puVar10 + 0x11) = fVar3;
      fVar3 = fVar8 * fVar8;
      *(float *)((int)puVar10 + 0x8c) = *(float *)((int)puVar10 + 0x8c) * fVar8;
      *(float *)(puVar10 + 0x12) = *(float *)(puVar10 + 0x12) * fVar3;
      *(float *)((int)puVar10 + 0x94) = *(float *)((int)puVar10 + 0x94) * fVar3 * fVar8;
      do {
        *(float *)((int)lVar19 + 0x88) = *(float *)((int)lVar19 + 0x78) * fVar3 * fVar3;
        iVar15 = (int)lVar18;
        lVar18 = lVar18 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
        lVar17 = lVar17 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar19 = uVar13 - 0x78;
      lVar23 = 4;
      pfVar20 = (float *)&DAT_007358e0;
      lVar17 = lVar19;
      lVar18 = lVar1;
      do {
        fVar3 = *pfVar20;
        fVar8 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar18 + 0x88) = *(float *)((int)lVar18 + 0x88) * fVar3;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar8;
        lVar17 = lVar17 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar18 = 2;
      lVar17 = lVar1;
      do {
        iVar15 = (int)lVar17;
        iVar12 = (int)lVar19;
        lVar17 = lVar17 + 0x10;
        lVar19 = lVar19 + 0x10;
        fVar6 = fVar6 + *(float *)(iVar15 + 0x88) + *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8)
                + *(float *)(iVar12 + 0xc);
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      fVar6 = (fVar6 + 0.7853982) * fVar9 + fVar7;
    }
    if (0.5235988 < fVar6) {
      (param_3->pos).x = CollOutput.push.x;
      uVar21 = 1;
      (param_3->pos).y = CollOutput.push.y;
      dVar24 = (double)CollOutput.push.z;
      (param_3->pos).w = CollOutput.push.w;
      (param_3->pos).z = (float)(dVar24 - param_1);
    }
    iVar22 = iVar22 + 1;
  } while (iVar22 < 6);
  param_4->grid = (void *)(float)((double)(param_3->pos).x - dVar25);
  param_4->padding[0] = (int)(float)((double)(param_3->pos).y - dVar26);
  param_4->padding[1] = (int)(float)((double)(param_3->pos).z - dVar27);
  param_4->padding[2] = (int)(param_3->pos).w;
  return uVar21;
}



//==== 00100918  ns=mobyutil  size=0x84
// sig: undefined MB_PushMobyOutOfWalls(void)
// callers(0): 
// callees(2): 001005a8 mobyutil::MB_PushOutOfWalls; 00502730 fastfunc::FastIntToDouble

void mobyutil::MB_PushMobyOutOfWalls
               (undefined8 param_1,MobyInstance *param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = 0x100000;
  dVar2 = (double)fastfunc::FastIntToDouble(param_5);
  MB_PushOutOfWalls(param_1,(double)(float)(dVar2 * 0.0009765625),param_2,param_3,uVar1,param_5,
                    param_6);
  return;
}



//==== 001009b0  ns=mobyutil  size=0x544
// sig: undefined MB_MoveAndCollide(void)
// callers(28): 00100ef8 mobyutil::MB_MoveAndCollide2; 00101058 mobyutil::MB_UpdateNavMove; 0018b2f8 mobyupdate_unsorted::UpdateMoby_1023; 0018e9f8 mobyupdate_unsorted::UpdateMoby_1027; 001de458 mobyupdate_helpers::M1140_001de458; 0020ed70 mobyupdate_helpers::M1226_0020ed70; 00217af8 mobyupdate_unsorted::UpdateMoby_1234; 00219780 mobyupdate_unsorted::UpdateMoby_1236; 00222c50 mobyupdate_helpers::M1243_00222c50; 00222fe0 mobyupdate_unsorted::UpdateMoby_1243; 00225b48 mobyupdate_unsorted::UpdateMoby_1246; 00280018 mobyupdate_helpers::M1445_00280018; 00283468 mobyupdate_helpers::M1454_00283468; 002d5b20 mobyupdate_helpers::M1906_002d5b20; 002e86b8 mobyupdate_helpers::M1900_002e86b8; 002e8af8 mobyupdate_unsorted::UpdateMoby_{203_1900}; 0037c500 mobyupdate_helpers::M44_0037c500; 00391c48 mobyupdate_helpers::M46_00391c48; 0039b390 mobyupdate_unsorted::UpdateMoby_479; 0039cdf0 mobyupdate_helpers::M48_0039cdf0; 003aa5f0 mobyupdate_unsorted::UpdateMoby_52; 003bc760 mobyupdate_unsorted::UpdateMoby_568; 003c70d8 mobyupdate_helpers::M576_003c70d8; 003eca78 mobyupdate_unsorted::UpdateMoby_63; 003f6930 mobyupdate_helpers::M1382_003f6930
// callees(2): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere

ulonglong mobyutil::MB_MoveAndCollide
                    (double param_1,double param_2,double param_3,int param_4,float *param_5)

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
  ulonglong *puVar10;
  float fVar11;
  ulonglong uVar12;
  int iVar16;
  int iVar17;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar18;
  float *pfVar19;
  longlong lVar20;
  uint in_r8;
  ulonglong unaff_r25;
  ulonglong uVar21;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar22;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f23;
  double dVar28;
  ulonglong in_f24;
  double dVar29;
  ulonglong in_f25;
  double dVar30;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar31;
  double dVar32;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar15 = uVar12 - 0x170;
  puVar10 = (ulonglong *)lVar15;
  *puVar10 = uVar12;
  puVar10[0x30] = in_LR;
  puVar10[0x25] = in_f23;
  puVar10[0x26] = in_f24;
  puVar10[0x27] = in_f25;
  puVar10[0x28] = in_f26;
  puVar10[0x29] = in_f27;
  puVar10[0x2a] = in_f28;
  puVar10[0x2b] = in_f29;
  puVar10[0x2c] = in_f30;
  puVar10[0x2d] = in_f31;
  fVar1 = *(float *)(param_4 + 0x10);
  dVar30 = (double)fVar1;
  fVar2 = *param_5;
  fVar3 = *(float *)(param_4 + 0x14);
  dVar29 = (double)fVar3;
  dVar24 = (double)(float)(dVar30 + (double)fVar2);
  dVar28 = (double)*(float *)(param_4 + 0x18);
  puVar10[0x1e] = unaff_r25;
  *(float *)(param_4 + 0x10) = (float)(dVar30 + (double)fVar2);
  fVar2 = param_5[1];
  dVar25 = (double)(float)(dVar29 + (double)fVar2);
  puVar10[0x22] = unaff_r29;
  uVar22 = 0;
  puVar10[0x21] = unaff_r28;
  iVar17 = 0;
  puVar10[0x24] = unaff_r31;
  puVar10[0x23] = unaff_r30;
  uVar21 = ((LZCOUNT(-(in_r8 & 0x10)) << 0x3a) >> 0x3f & 0xffffffffffffffe0U) + 0x20;
  *(float *)(param_4 + 0x14) = (float)(dVar29 + (double)fVar2);
  dVar26 = (double)(float)(dVar28 + (double)param_5[2]);
  *(float *)(param_4 + 0x18) = (float)(dVar28 + (double)param_5[2]);
  fVar2 = param_5[1];
  fVar4 = *param_5;
  fVar5 = param_5[2];
  fVar6 = *(float *)(param_4 + 0x1c);
  dVar31 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar2 * fVar2);
  puVar10[0x20] = unaff_r27;
  puVar10[0x1f] = unaff_r26;
  if (param_2 < dVar31) {
    *(float *)(puVar10 + 0xe) = fVar1;
    *(float *)((int)puVar10 + 0x74) = fVar3;
    *(float *)((int)puVar10 + 0x7c) = fVar6;
    *(float *)(puVar10 + 0xf) = (float)(dVar28 + param_1);
    dVar27 = 0.0;
    if (dVar31 == 0.0) {
      fVar3 = param_5[3];
      dVar31 = dVar27;
      dVar32 = dVar27;
    }
    else {
      fVar1 = (float)(param_2 / dVar31);
      dVar32 = (double)(fVar4 * fVar1);
      fVar3 = param_5[3];
      dVar31 = (double)(fVar2 * fVar1);
      dVar27 = (double)(fVar5 * fVar1);
    }
    *(float *)((int)puVar10 + 0x8c) = fVar3;
    *(float *)(puVar10 + 0x10) = (float)(dVar32 + dVar24);
    *(float *)((int)puVar10 + 0x84) = (float)(dVar31 + dVar25);
    *(float *)(puVar10 + 0x11) = (float)((double)(float)(dVar27 + dVar26) + param_1);
    iVar16 = collproc::CollLine(uVar12 - 0x100,uVar12 - 0xf0,uVar21,param_4,0);
    dVar24 = (double)*(float *)(param_4 + 0x10);
    dVar25 = (double)*(float *)(param_4 + 0x14);
    dVar26 = (double)*(float *)(param_4 + 0x18);
    fVar6 = *(float *)(param_4 + 0x1c);
    if (iVar16 != 0) {
      uVar22 = 1;
      dVar24 = (double)(float)((double)CollOutput.ip.x - dVar32);
      *(float *)(param_4 + 0x10) = (float)((double)CollOutput.ip.x - dVar32);
      dVar25 = (double)(float)((double)CollOutput.ip.y - dVar31);
      *(float *)(param_4 + 0x14) = (float)((double)CollOutput.ip.y - dVar31);
      fVar6 = CollOutput.ip.w;
      dVar26 = (double)CollOutput.ip.z;
      *(float *)(param_4 + 0x1c) = CollOutput.ip.w;
      fVar1 = (float)((double)(float)(dVar26 - dVar27) - param_1);
      dVar26 = (double)fVar1;
      *(float *)(param_4 + 0x18) = fVar1;
    }
  }
  do {
    *(float *)(puVar10 + 0x12) = (float)dVar24;
    *(float *)((int)puVar10 + 0x94) = (float)dVar25;
    *(float *)((int)puVar10 + 0x9c) = fVar6;
    *(float *)(puVar10 + 0x13) = (float)(dVar26 + param_1);
    iVar16 = collproc::CollSphere(param_2,uVar12 - 0xe0);
    if (iVar16 == 0) break;
    dVar24 = (double)CollOutput.push.x;
    iVar17 = iVar17 + 1;
    uVar22 = 1;
    *(float *)(param_4 + 0x10) = CollOutput.push.x;
    dVar25 = (double)CollOutput.push.y;
    *(float *)(param_4 + 0x14) = CollOutput.push.y;
    fVar6 = CollOutput.push.w;
    dVar31 = (double)CollOutput.push.z;
    dVar26 = (double)(float)(dVar31 - param_1);
    *(float *)(param_4 + 0x1c) = CollOutput.push.w;
    *(float *)(param_4 + 0x18) = (float)(dVar31 - param_1);
  } while (iVar17 < 6);
  fVar1 = *(float *)(param_4 + 0x18);
  uVar7 = *(undefined4 *)(param_4 + 0x10);
  uVar8 = *(undefined4 *)(param_4 + 0x14);
  dVar25 = (double)(float)((double)fVar1 - param_3);
  *(undefined4 *)(puVar10 + 0x14) = uVar7;
  uVar9 = *(undefined4 *)(param_4 + 0x1c);
  *(undefined4 *)((int)puVar10 + 0xa4) = uVar8;
  *(undefined4 *)((int)puVar10 + 0xac) = uVar9;
  *(undefined4 *)(puVar10 + 0x16) = uVar7;
  *(undefined4 *)((int)puVar10 + 0xb4) = uVar8;
  *(undefined4 *)((int)puVar10 + 0xbc) = uVar9;
  *(float *)(puVar10 + 0x15) = (float)((double)fVar1 + param_1);
  *(float *)(puVar10 + 0x17) = (float)(dVar25 - 0.05000000074505806);
  iVar17 = collproc::CollLine(uVar12 - 0xd0,uVar12 - 0xc0,uVar21 | 2,param_4,0);
  fVar2 = CollOutput.normal.z;
  fVar1 = *(float *)(param_4 + 0x18);
  dVar24 = (double)CollOutput.ip.z;
  uVar21 = uVar22;
  if ((iVar17 != 0) && (0 < CollOutput.poly)) {
    uVar21 = uVar22 | 2;
    fVar4 = ABS(CollOutput.normal.z);
    fVar3 = SQRT(CollOutput.normal.x * CollOutput.normal.x +
                 CollOutput.normal.y * CollOutput.normal.y);
    fVar5 = ABS(fVar3);
    *(float *)(puVar10 + 0x18) = fVar3;
    *(float *)((int)puVar10 + 0xc4) = fVar4 - fVar5;
    fVar3 = 0.0;
    uVar13 = (ulonglong)((uint)fVar2 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar10 + 0xc4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar10 + 0x18) >> 0x1d) & 4;
    fVar2 = fVar4;
    if (*(float *)((int)puVar10 + 0xc4) - 0.0 < 0.0) {
      fVar2 = fVar5;
    }
    fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar13 << 2));
    fVar5 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
    fVar11 = ABS(*(float *)(puVar10 + 0x18));
    if (*(float *)((int)puVar10 + 0xc4) - 0.0 < 0.0) {
      fVar11 = fVar4;
    }
    if (0.0 < fVar2) {
      lVar14 = uVar12 - 0x160;
      lVar20 = uVar12 - 0x98;
      lVar18 = uVar12 - 0xa8;
      lVar23 = 2;
      fVar2 = (fVar11 - fVar2) / (fVar11 + fVar2);
      fVar4 = fVar2 * fVar2;
      *(float *)((int)puVar10 + 0xd4) = fVar2;
      *(float *)((int)puVar10 + 0xcc) = fVar2;
      *(float *)(puVar10 + 0x1a) = fVar2;
      *(float *)(puVar10 + 0x19) = fVar2;
      fVar2 = fVar4 * fVar4;
      *(float *)((int)puVar10 + 0xcc) = *(float *)((int)puVar10 + 0xcc) * fVar4;
      *(float *)(puVar10 + 0x1a) = *(float *)(puVar10 + 0x1a) * fVar2;
      *(float *)((int)puVar10 + 0xd4) = *(float *)((int)puVar10 + 0xd4) * fVar2 * fVar4;
      do {
        *(float *)((int)lVar14 + 200) = *(float *)((int)lVar14 + 0xb8) * fVar2 * fVar2;
        iVar17 = (int)lVar18;
        lVar18 = lVar18 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)(iVar17 + 4) * fVar2 * fVar2;
        lVar20 = lVar20 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar23 = 4;
      lVar20 = uVar12 - 0xa8;
      pfVar19 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar18 = lVar20;
      do {
        fVar2 = *pfVar19;
        fVar4 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar14 + 200) = *(float *)((int)lVar14 + 200) * fVar2;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
        lVar18 = lVar18 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar14 = 2;
      do {
        iVar17 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar16 = (int)lVar20;
        lVar20 = lVar20 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar17 + 200) + *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                *(float *)(iVar16 + 0xc);
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar6 + fVar5;
    }
    if (0.5 < fVar3) {
      uVar21 = uVar22 | 6;
    }
    if (dVar25 < dVar24) {
      *(float *)(param_4 + 0x18) = (float)(dVar24 - dVar25) * 0.3 + fVar1;
    }
  }
  *param_5 = (float)((double)*(float *)(param_4 + 0x10) - dVar30);
  param_5[1] = (float)((double)*(float *)(param_4 + 0x14) - dVar29);
  param_5[2] = (float)((double)*(float *)(param_4 + 0x18) - dVar28);
  param_5[3] = *(float *)(param_4 + 0x1c);
  return uVar21;
}



//==== 00100ef8  ns=mobyutil  size=0x94
// sig: undefined MB_MoveAndCollide2(void)
// callers(13): 00189bd8 mobyupdate_unsorted::UpdateMoby_1022; 001a9908 mobyupdate_helpers::M1059_001a9908; 001aa078 mobyupdate_unsorted::UpdateMoby_1059; 001f3688 mobyupdate_unsorted::UpdateMoby_1196; 001f7980 mobyupdate_unsorted::UpdateMoby_1199; 002bdc98 mobyupdate_helpers::M1818_002bdc98; 002cbaf8 mobyupdate_unsorted::UpdateMoby_186; 00376538 mobyupdate_helpers::M437_00376538; 003777f8 mobyupdate_helpers::M437_003777f8; 00378778 mobyupdate_unsorted::UpdateMoby_437; 00456fe0 mobyupdate_unsorted::UpdateMoby_776; 0048c188 FUN_0048c188; 004ccd48 mobyupdate_helpers::M984_004ccd48
// callees(2): 001009b0 mobyutil::MB_MoveAndCollide; 00502730 fastfunc::FastIntToDouble

void mobyutil::MB_MoveAndCollide2
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  
  dVar1 = (double)fastfunc::FastIntToDouble(param_6);
  MB_MoveAndCollide(param_1,(double)(float)(dVar1 * 0.0009765625),param_2,param_3,param_4);
  return;
}



//==== 00100f8c  ns=mobyutil  size=0x64
// sig: undefined MB_InitDefaultParams(float * param_1)
// callers(54): 00189bd8 mobyupdate_unsorted::UpdateMoby_1022; 0018b2f8 mobyupdate_unsorted::UpdateMoby_1023; 0018e9f8 mobyupdate_unsorted::UpdateMoby_1027; 001a02d8 mobyupdate_unsorted::UpdateMoby_1048; 001b07a8 mobyupdate_unsorted::UpdateMoby_1068; 001eb4f8 mobyupdate_unsorted::UpdateMoby_1169; 001fcd60 mobyupdate_unsorted::UpdateMoby_1202; 00225b48 mobyupdate_unsorted::UpdateMoby_1246; 0022e580 mobyupdate_unsorted::UpdateMoby_1262; 00233180 mobyupdate_unsorted::UpdateMoby_1266; 0024bc98 mobyupdate_unsorted::UpdateMoby_133; 002beb68 mobyupdate_unsorted::UpdateMoby_1818; 002dc568 mobyupdate_unsorted::UpdateMoby_193; 002e5698 mobyupdate_unsorted::UpdateMoby_199; 002f44c0 mobyupdate_unsorted::UpdateMoby_218; 002f5b08 mobyupdate_unsorted::UpdateMoby_219; 002f7cf8 mobyupdate_unsorted::UpdateMoby_220; 00307270 mobyupdate_unsorted::UpdateMoby_238; 003090f8 mobyupdate_unsorted::UpdateMoby_239; 00313188 mobyupdate_unsorted::UpdateMoby_246; 00323bf8 mobyupdate_unsorted::UpdateMoby_271; 00332c38 mobyupdate_unsorted::UpdateMoby_294; 00346610 mobyupdate_unsorted::UpdateMoby_333; 0034b2e8 mobyupdate_unsorted::UpdateMoby_340; 0034ec58 mobyupdate_unsorted::UpdateMoby_342
// callees(0): 

/* [p2_mobyutil] fills 12-float param block with defaults (1.0,0.5,0.5,..,0.3,2.7,1.57,0.1) */

void mobyutil::MB_InitDefaultParams(float *param_1)

{
  *param_1 = 8.96831e-43;
  param_1[1] = 1.0;
  param_1[2] = 0.5;
  param_1[3] = 0.5;
  param_1[5] = 0.0;
  param_1[4] = 0.0;
  param_1[6] = 0.0;
  param_1[8] = 0.3;
  param_1[9] = 2.7;
  param_1[7] = 0.3;
  param_1[10] = 1.57;
  param_1[0xb] = 0.1;
  return;
}



//==== 00100ff0  ns=mobyutil  size=0x1c
// sig: undefined ???_Unused_MB_SetPosWAndClass(undefined8 param_1, undefined8 param_2, MobyInstance * param_3)
// callers(0): 
// callees(0): 

void mobyutil::____Unused_MB_SetPosWAndClass(double param_1,double param_2,MobyInstance *param_3)

{
  (param_3->pos).y = 0.0;
  (param_3->pos).x = 0.0;
  (param_3->pos).z = 0.0;
  (param_3->pos).w = (float)param_1;
  param_3->pClass = (MobyClass *)(float)param_2;
  return;
}



//==== 00101058  ns=mobyutil  size=0xb2c
// sig: undefined MB_UpdateNavMove(undefined8 param_1, MobyInstance * param_2, MobyInstance * param_3, undefined4 param_4, undefined4 param_5)
// callers(36): 00101ba8 mobyutil::MB_MoveForward100; 00101cc0 mobyutil::MB_UpdateNavMoveTurning; 00103b50 mobyutil::MB_OrbitAndFaceTarget; 001a02d8 mobyupdate_unsorted::UpdateMoby_1048; 001b07a8 mobyupdate_unsorted::UpdateMoby_1068; 001ea988 mobyupdate_helpers::M1169_001ea988; 001fcd60 mobyupdate_unsorted::UpdateMoby_1202; 00224bf8 mobyupdate_helpers::M1246_00224bf8; 0022e580 mobyupdate_unsorted::UpdateMoby_1262; 00233180 mobyupdate_unsorted::UpdateMoby_1266; 0024bc98 mobyupdate_unsorted::UpdateMoby_133; 002dc568 mobyupdate_unsorted::UpdateMoby_193; 002e5698 mobyupdate_unsorted::UpdateMoby_199; 002f5b08 mobyupdate_unsorted::UpdateMoby_219; 00306888 mobyupdate_helpers::M238_00306888; 003090f8 mobyupdate_unsorted::UpdateMoby_239; 00323bf8 mobyupdate_unsorted::UpdateMoby_271; 00355370 mobyupdate_unsorted::UpdateMoby_372; 003bec28 mobyupdate_unsorted::UpdateMoby_{572_865_866}; 003c0a18 mobyupdate_unsorted::UpdateMoby_573; 003c8a10 mobyupdate_unsorted::UpdateMoby_577; 003ce680 mobyupdate_unsorted::UpdateMoby_580; 003e37b0 mobyupdate_helpers::M623_003e37b0; 003e5228 mobyupdate_unsorted::UpdateMoby_623; 003eca78 mobyupdate_unsorted::UpdateMoby_63
// callees(3): 00057820 collproc::CollLine; 001009b0 mobyutil::MB_MoveAndCollide; 00502730 fastfunc::FastIntToDouble

ulonglong mobyutil::MB_UpdateNavMove
                    (double param_1,MobyInstance *param_2,MobyInstance *param_3,float *param_4,
                    float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  MobyClass *pMVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  f32 fVar14;
  f32 fVar15;
  f32 fVar16;
  float fVar17;
  uint uVar18;
  ulonglong *puVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  ulonglong uVar23;
  int iVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  float *pfVar29;
  longlong lVar28;
  ulonglong uVar30;
  longlong lVar31;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong uVar32;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  ulonglong in_f19;
  ulonglong in_f20;
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
  ulonglong in_f29;
  double dVar46;
  ulonglong in_f30;
  double dVar47;
  ulonglong in_f31;
  double dVar48;
  
  uVar23 = ZEXT48(&stack0x00000000);
  lVar27 = uVar23 - 0x1e0;
  puVar19 = (ulonglong *)lVar27;
  *puVar19 = uVar23;
  puVar19[0x3e] = in_LR;
  puVar19[0x2f] = in_f19;
  puVar19[0x30] = in_f20;
  puVar19[0x31] = in_f21;
  puVar19[0x32] = in_f22;
  puVar19[0x33] = in_f23;
  puVar19[0x34] = in_f24;
  puVar19[0x35] = in_f25;
  puVar19[0x36] = in_f26;
  puVar19[0x37] = in_f27;
  puVar19[0x38] = in_f28;
  puVar19[0x39] = in_f29;
  puVar19[0x3a] = in_f30;
  puVar19[0x3b] = in_f31;
  fVar1 = param_4[1];
  dVar43 = (double)(param_2->pos).y;
  fVar2 = *param_4;
  dVar44 = (double)(param_2->pos).x;
  puVar19[0x2b] = unaff_r28;
  puVar19[0x2e] = unaff_r31;
  uVar32 = 0;
  puVar19[0x2d] = unaff_r30;
  puVar19[0x2c] = unaff_r29;
  fVar3 = (param_3->pos).x;
  dVar34 = (double)(float)((double)(param_3->pos).w * param_1);
  dVar42 = (double)(param_2->pos).z;
  *(float *)((int)puVar19 + 0x7c) = param_4[3];
  fVar4 = (param_2->pos).w;
  dVar47 = (double)fVar4;
  dVar48 = (double)SQRT((float)((double)fVar2 - dVar44) * (float)((double)fVar2 - dVar44) +
                        (float)((double)fVar1 - dVar43) * (float)((double)fVar1 - dVar43));
  pMVar5 = param_3->pClass;
  fVar2 = *(float *)&param_3->state;
  fVar6 = (param_3->pos).z;
  fVar7 = *(float *)&param_3->updateDistance;
  fVar8 = (param_3->bSphere).z;
  fVar9 = (param_3->bSphere).rad;
  puVar19[0x2a] = unaff_r27;
  fVar1 = (float)((double)(float)pMVar5 * param_1);
  uVar18 = param_3->color;
  dVar41 = (double)(float)(dVar48 * dVar34);
  if (dVar34 - (double)(float)(dVar48 * dVar34) < 0.0) {
    dVar41 = dVar34;
  }
  fVar3 = (float)((double)fVar3 + dVar41);
  (param_3->pos).x = fVar3;
  puVar19[0x29] = unaff_r26;
  puVar19[0x28] = unaff_r25;
  puVar19[0x27] = unaff_r24;
  if (dVar48 < (double)(fVar3 * 10.0)) {
    fVar3 = -(fVar2 * fVar3 - fVar3);
    (param_3->pos).x = fVar3;
  }
  if (fVar3 <= fVar1) {
    fVar1 = -fVar1;
    if (fVar3 < fVar1) {
      (param_3->pos).x = fVar1;
      fVar3 = fVar1;
    }
  }
  else {
    (param_3->pos).x = fVar1;
    fVar3 = fVar1;
  }
  if ((uVar18 & 4) == 0) {
    fVar1 = (param_2->rotation).z;
    fVar2 = fVar1 + 1.5707963;
    fVar17 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar17 = fVar1;
    }
    fVar11 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar11 = fVar2;
    }
    fVar12 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar17 < 0.0) {
      fVar12 = fVar17;
    }
    fVar1 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar11 < 0.0) {
      fVar1 = fVar11;
    }
    fVar2 = fVar1 * fVar1;
    fVar17 = fVar2 * fVar1;
    fVar11 = fVar2 * fVar17;
  }
  else {
    fVar1 = (param_3->rotation).w;
    fVar2 = fVar1 + 1.5707963;
    fVar17 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar17 = fVar1;
    }
    fVar11 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar11 = fVar2;
    }
    fVar12 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar17 < 0.0) {
      fVar12 = fVar17;
    }
    fVar1 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar11 < 0.0) {
      fVar1 = fVar11;
    }
    fVar2 = fVar1 * fVar1;
    fVar17 = fVar2 * fVar1;
    fVar11 = fVar2 * fVar17;
  }
  fVar13 = fVar12 * fVar12;
  fVar21 = fVar13 * fVar13 * fVar12;
  fVar22 = fVar13 * fVar21;
  fVar1 = (fVar2 * fVar2 * fVar11 * 2.601887e-06 +
          fVar2 * fVar11 * -0.0001980741 + fVar11 * 0.0083330255 + fVar17 * -0.16666657 + fVar1) *
          fVar3;
  *(float *)(puVar19 + 0xe) = fVar1;
  fVar3 = (fVar13 * fVar22 * 2.601887e-06 +
          fVar22 * -0.0001980741 + fVar21 * 0.0083330255 + fVar13 * fVar12 * -0.16666657 + fVar12) *
          fVar3;
  *(float *)((int)puVar19 + 0x74) = fVar3;
  if ((uVar18 & 1) == 0) {
    *(float *)(puVar19 + 0xf) = fVar6;
    (param_3->pos).z = -(DAT_0071f418 * 9.0 - fVar6);
  }
  else {
    *(undefined4 *)(puVar19 + 0xf) = 0;
  }
  fVar6 = (float)(dVar42 - (double)fVar7);
  fVar1 = (float)(dVar44 + (double)fVar1);
  fVar2 = (float)(dVar43 + (double)fVar3);
  *(float *)((int)puVar19 + 0xcc) = fVar4;
  *(float *)((int)puVar19 + 0xdc) = fVar4;
  dVar34 = (double)(float)(dVar42 + 0.03999999910593033);
  fVar9 = fVar6 - fVar9;
  *(float *)(puVar19 + 0x18) = fVar1;
  *(float *)(puVar19 + 0x1a) = fVar1;
  *(float *)((int)puVar19 + 0xc4) = fVar2;
  *(float *)((int)puVar19 + 0xd4) = fVar2;
  *(float *)(puVar19 + 0x19) = fVar6 + fVar8;
  *(float *)(puVar19 + 0x1b) = fVar9;
  dVar41 = 0.0;
  if (fVar9 < 0.0) {
    *(undefined4 *)(puVar19 + 0x1b) = 0;
  }
  iVar24 = collproc::CollLine(uVar23 - 0x120,uVar23 - 0x110,0x22,param_2,0);
  fVar17 = CollOutput.normal.z;
  uVar10 = *(undefined4 *)((int)puVar19 + 0x7c);
  dVar46 = (double)*(float *)&param_3->updateDistance;
  dVar39 = (double)CollOutput.ip.z;
  fVar1 = (param_2->pos).x;
  fVar2 = (param_2->pos).y;
  uVar25 = param_3->color;
  fVar3 = (param_3->bSphere).z;
  fVar4 = (param_3->bSphere).rad;
  fVar6 = *(float *)(puVar19 + 0xe);
  fVar7 = *(float *)((int)puVar19 + 0x74);
  fVar8 = *(float *)(puVar19 + 0xf);
  fVar9 = (param_2->pos).z;
  if ((((uVar18 & 0x20) == 0) || (CollOutput.pMoby == (MobyInstance *)0x0)) &&
     (iVar24 + (CollOutput.poly >> 0x1f & -iVar24) != 0)) {
    dVar37 = ABS((double)CollOutput.normal.z);
    fVar11 = SQRT(CollOutput.normal.x * CollOutput.normal.x +
                  CollOutput.normal.y * CollOutput.normal.y);
    dVar38 = ABS((double)fVar11);
    *(float *)(puVar19 + 0x1d) = fVar11;
    *(float *)((int)puVar19 + 0xec) = (float)(dVar37 - dVar38);
    dVar45 = 0.7853981852531433;
    uVar30 = (ulonglong)((uint)fVar17 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar19 + 0xec) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar19 + 0x1d) >> 0x1d) & 4;
    fVar17 = *(float *)(&g_atanQuadrantTable + (int)(uVar30 << 2));
    dVar40 = dVar37;
    if ((double)*(float *)((int)puVar19 + 0xec) - dVar41 < 0.0) {
      dVar40 = dVar38;
    }
    dVar38 = ABS((double)*(float *)(puVar19 + 0x1d));
    if ((double)*(float *)((int)puVar19 + 0xec) - dVar41 < 0.0) {
      dVar38 = dVar37;
    }
    fVar11 = *(float *)(((uint)(uVar30 << 2) | 0x735900) + 4);
    dVar37 = dVar41;
    if (dVar41 < dVar40) {
      lVar26 = uVar23 - 0x1d0;
      lVar28 = uVar23 - 0xd0;
      lVar31 = uVar23 - 0xc0;
      lVar33 = 2;
      fVar12 = (float)(dVar38 - dVar40) / (float)(dVar38 + dVar40);
      fVar13 = fVar12 * fVar12;
      *(float *)((int)puVar19 + 0x11c) = fVar12;
      *(float *)((int)puVar19 + 0x114) = fVar12;
      *(float *)(puVar19 + 0x23) = fVar12;
      *(float *)(puVar19 + 0x22) = fVar12;
      fVar12 = fVar13 * fVar13;
      *(float *)((int)puVar19 + 0x114) = *(float *)((int)puVar19 + 0x114) * fVar13;
      *(float *)(puVar19 + 0x23) = *(float *)(puVar19 + 0x23) * fVar12;
      *(float *)((int)puVar19 + 0x11c) = *(float *)((int)puVar19 + 0x11c) * fVar12 * fVar13;
      do {
        *(float *)((int)lVar26 + 0x110) = *(float *)((int)lVar26 + 0x100) * fVar12 * fVar12;
        iVar24 = (int)lVar28;
        lVar26 = lVar26 + 8;
        lVar28 = lVar28 + 8;
        *(float *)((int)lVar31 + 4) = *(float *)(iVar24 + 4) * fVar12 * fVar12;
        lVar31 = lVar31 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar33 = 4;
      lVar31 = uVar23 - 0xd0;
      pfVar29 = (float *)&DAT_007358e0;
      lVar26 = lVar27;
      lVar28 = lVar31;
      do {
        fVar12 = *pfVar29;
        fVar13 = pfVar29[1];
        pfVar29 = pfVar29 + 2;
        *(float *)((int)lVar26 + 0x110) = *(float *)((int)lVar26 + 0x110) * fVar12;
        lVar26 = lVar26 + 8;
        *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar13;
        lVar28 = lVar28 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar28 = 2;
      lVar26 = lVar27;
      dVar40 = dVar41;
      do {
        iVar24 = (int)lVar26;
        lVar26 = lVar26 + 0x10;
        iVar20 = (int)lVar31;
        lVar31 = lVar31 + 0x10;
        dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar24 + 0x110)) +
                          *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) + *(float *)(iVar20 + 0xc)
                         );
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      dVar37 = (double)((float)(dVar40 + 0.7853981852531433) * fVar17 + fVar11);
    }
    dVar40 = 0.5;
    if ((0.5 < dVar37) && (fVar17 = fVar6 * fVar6 + fVar7 * fVar7, 0.1 < SQRT(fVar17))) {
      fVar9 = (float)((double)fVar9 - dVar46);
      dVar36 = (double)SQRT(fVar8 * fVar8 + fVar17);
      *(undefined4 *)((int)puVar19 + 0xac) = uVar10;
      *(undefined4 *)((int)puVar19 + 0xbc) = uVar10;
      uVar18 = uVar25 & 0x20;
      fVar4 = fVar9 - fVar4;
      *(float *)(puVar19 + 0x15) = fVar9 + fVar3;
      *(float *)(puVar19 + 0x17) = fVar4;
      dVar38 = (double)(fVar7 * (float)(0.5699999928474426 / dVar36));
      dVar37 = (double)(fVar6 * (float)(0.5699999928474426 / dVar36));
      dVar46 = dVar41;
      if (dVar41 - dVar36 < 0.0) {
        dVar46 = dVar38;
      }
      dVar35 = dVar41;
      if (dVar41 - dVar36 < 0.0) {
        dVar35 = dVar37;
      }
      if (dVar36 - dVar41 < 0.0) {
        dVar46 = dVar38;
      }
      if (dVar36 - dVar41 < 0.0) {
        dVar35 = dVar37;
      }
      fVar2 = (float)(dVar46 + (double)fVar2);
      fVar1 = (float)(dVar35 + (double)fVar1);
      *(float *)((int)puVar19 + 0xa4) = fVar2;
      *(float *)(puVar19 + 0x14) = fVar1;
      *(float *)(puVar19 + 0x16) = fVar1;
      *(float *)((int)puVar19 + 0xb4) = fVar2;
      if ((double)fVar4 < dVar41) {
        *(undefined4 *)(puVar19 + 0x17) = 0;
      }
      iVar24 = collproc::CollLine(uVar23 - 0x140,uVar23 - 0x130,0x22,param_2,0);
      fVar1 = CollOutput.normal.z;
      dVar37 = (double)CollOutput.ip.z;
      uVar25 = param_3->color;
      dVar46 = (double)*(float *)&param_3->updateDistance;
      fVar6 = *(float *)(puVar19 + 0xe);
      fVar7 = *(float *)((int)puVar19 + 0x74);
      if (((uVar18 == 0) || (CollOutput.pMoby == (MobyInstance *)0x0)) &&
         (iVar24 + (CollOutput.poly >> 0x1f & -iVar24) != 0)) {
        dVar36 = ABS((double)CollOutput.normal.z);
        fVar2 = SQRT(CollOutput.normal.x * CollOutput.normal.x +
                     CollOutput.normal.y * CollOutput.normal.y);
        dVar35 = ABS((double)fVar2);
        *(float *)(puVar19 + 0x1c) = fVar2;
        *(float *)((int)puVar19 + 0xe4) = (float)(dVar36 - dVar35);
        uVar30 = (ulonglong)((uint)fVar1 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar19 + 0xe4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar19 + 0x1c) >> 0x1d) & 4;
        dVar38 = dVar36;
        if ((double)*(float *)((int)puVar19 + 0xe4) - dVar41 < 0.0) {
          dVar38 = dVar35;
        }
        fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar30 << 2));
        dVar35 = ABS((double)*(float *)(puVar19 + 0x1c));
        if ((double)*(float *)((int)puVar19 + 0xe4) - dVar41 < 0.0) {
          dVar35 = dVar36;
        }
        fVar2 = *(float *)(((uint)(uVar30 << 2) | 0x735900) + 4);
        dVar36 = dVar41;
        if (dVar41 < dVar38) {
          lVar26 = uVar23 - 0x1d0;
          lVar28 = uVar23 - 0xf0;
          lVar31 = uVar23 - 0xe0;
          lVar33 = 2;
          fVar3 = (float)(dVar35 - dVar38) / (float)(dVar35 + dVar38);
          fVar4 = fVar3 * fVar3;
          *(float *)((int)puVar19 + 0xfc) = fVar3;
          *(float *)((int)puVar19 + 0xf4) = fVar3;
          *(float *)(puVar19 + 0x1f) = fVar3;
          *(float *)(puVar19 + 0x1e) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)((int)puVar19 + 0xf4) = *(float *)((int)puVar19 + 0xf4) * fVar4;
          *(float *)(puVar19 + 0x1f) = *(float *)(puVar19 + 0x1f) * fVar3;
          *(float *)((int)puVar19 + 0xfc) = *(float *)((int)puVar19 + 0xfc) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar26 + 0xf0) = *(float *)((int)lVar26 + 0xe0) * fVar3 * fVar3;
            iVar24 = (int)lVar28;
            lVar26 = lVar26 + 8;
            lVar28 = lVar28 + 8;
            *(float *)((int)lVar31 + 4) = *(float *)(iVar24 + 4) * fVar3 * fVar3;
            lVar31 = lVar31 + 8;
            lVar33 = lVar33 + -1;
          } while (lVar33 != 0);
          lVar33 = 4;
          lVar31 = uVar23 - 0xf0;
          pfVar29 = (float *)&DAT_007358e0;
          lVar26 = lVar27;
          lVar28 = lVar31;
          do {
            fVar3 = *pfVar29;
            fVar4 = pfVar29[1];
            pfVar29 = pfVar29 + 2;
            *(float *)((int)lVar26 + 0xf0) = *(float *)((int)lVar26 + 0xf0) * fVar3;
            lVar26 = lVar26 + 8;
            *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar4;
            lVar28 = lVar28 + 8;
            lVar33 = lVar33 + -1;
          } while (lVar33 != 0);
          lVar26 = 2;
          dVar38 = dVar41;
          do {
            iVar24 = (int)lVar27;
            lVar27 = lVar27 + 0x10;
            iVar20 = (int)lVar31;
            lVar31 = lVar31 + 0x10;
            dVar38 = (double)((float)(dVar38 + (double)*(float *)(iVar24 + 0xf0)) +
                              *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) +
                             *(float *)(iVar20 + 0xc));
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          dVar36 = (double)((float)(dVar38 + dVar45) * fVar1 + fVar2);
        }
        if (dVar40 <= dVar36) {
          if ((((uVar25 & 8) == 0) || (dVar34 <= dVar37)) || (dVar34 <= dVar39)) {
            uVar32 = 0x22;
          }
          else {
            uVar32 = 8;
          }
        }
      }
      else if (((uVar25 & 8) == 0) || (dVar34 <= dVar39)) {
        uVar32 = 0x22;
      }
      else {
        uVar32 = 8;
      }
    }
  }
  else {
    uVar32 = ((LZCOUNT(-(uVar25 & 8)) << 0x3a) >> 0x3f & 0x1aU) + 8;
  }
  if ((uVar32 & 2) == 0) {
    dVar40 = 0.5;
    fVar1 = fVar6 * fVar6 + fVar7 * fVar7;
    dVar39 = (double)(param_3->bSphere).y;
    fVar2 = 1.0 / SQRT(fVar1);
    dVar45 = (double)SQRT(fVar1);
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    dVar38 = (double)(fVar6 * fVar2);
    dVar37 = (double)(fVar7 * fVar2);
    dVar34 = (double)fastfunc::FastIntToDouble((param_3->bSphere).x);
    uVar30 = MB_MoveAndCollide(dVar39,(double)(float)(dVar34 * 0.0009765625),dVar46,param_2,
                               uVar23 - 0x170);
    dVar34 = (double)*(float *)(puVar19 + 0xe);
    dVar39 = (double)*(float *)((int)puVar19 + 0x74);
    fVar14 = (param_2->pos).x;
    fVar15 = (param_2->pos).y;
    fVar16 = (param_2->pos).w;
    fVar1 = (param_2->pos).z;
    if ((uVar30 & 2) != 0) {
      (param_3->pos).z = DAT_0071f408 * -0.01;
    }
    if ((uVar30 & 1) != 0) {
      uVar30 = uVar32 | 1;
      if ((float)(dVar34 * dVar38 + (double)(float)(dVar39 * dVar37)) <
          (float)(dVar45 * 0.20000000298023224)) {
        uVar30 = uVar32 | 3;
      }
      *(f32 *)(puVar19 + 0x10) = fVar14;
      *(f32 *)((int)puVar19 + 0x84) = fVar15;
      *(f32 *)((int)puVar19 + 0x8c) = fVar16;
      *(undefined4 *)(puVar19 + 0x11) = 0x3c23d70a;
      *(f32 *)(puVar19 + 0x12) = fVar14;
      *(f32 *)((int)puVar19 + 0x94) = fVar15;
      *(f32 *)((int)puVar19 + 0x9c) = fVar16;
      *(float *)(puVar19 + 0x13) = (float)((double)fVar1 + dVar40);
      iVar24 = collproc::CollLine(uVar23 - 0x150,uVar23 - 0x160,2,0,0);
      dVar34 = (double)*(float *)(puVar19 + 0xe);
      dVar39 = (double)*(float *)((int)puVar19 + 0x74);
      if (iVar24 != 0) {
        dVar41 = (double)CollOutput.ip.z;
      }
      if ((float)(dVar42 - dVar41) <= (param_3->bSphere).z) {
        uVar32 = uVar30;
        if ((param_3->bSphere).rad < (float)(dVar41 - dVar42)) {
          (param_2->pos).x = (float)dVar44;
          (param_2->pos).y = (float)dVar43;
          (param_2->pos).z = (float)dVar42;
          (param_2->pos).w = (float)dVar47;
          uVar32 = uVar30 | 0x22;
        }
      }
      else {
        (param_2->pos).x = (float)dVar44;
        (param_2->pos).y = (float)dVar43;
        (param_2->pos).z = (float)dVar42;
        (param_2->pos).w = (float)dVar47;
        uVar32 = uVar30 | 0x22;
      }
    }
    *param_5 = (float)dVar34;
    param_5[1] = (float)dVar39;
    param_5[2] = *(float *)(puVar19 + 0xf);
    param_5[3] = *(float *)((int)puVar19 + 0x7c);
  }
  else if ((uVar25 & 1) == 0) {
    (param_3->pos).z = DAT_0071f408 * -0.01;
  }
  if (dVar48 < (double)param_3->scale) {
    uVar32 = uVar32 | 4;
  }
  return uVar32;
}



//==== 00101ba8  ns=mobyutil  size=0x104
// sig: undefined MB_MoveForward100(void)
// callers(1): 00331708 mobyupdate_helpers::M294_00331708
// callees(1): 00101058 mobyutil::MB_UpdateNavMove

void mobyutil::MB_MoveForward100(MobyInstance *param_1,MobyInstance *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_30;
  float local_2c;
  f32 local_28;
  f32 local_24;
  undefined1 auStack_20 [32];
  
  fVar1 = (param_1->rotation).z;
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
  fVar1 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
    fVar1 = fVar5;
  }
  fVar2 = fVar4 * fVar4;
  fVar3 = fVar1 * fVar1;
  fVar7 = fVar2 * fVar2 * fVar4;
  fVar5 = fVar3 * fVar3 * fVar1;
  fVar8 = fVar2 * fVar7;
  local_28 = (param_1->pos).z;
  local_24 = (param_1->pos).w;
  fVar6 = fVar3 * fVar5;
  local_2c = (fVar2 * fVar8 * 2.601887e-06 +
             fVar8 * -0.0001980741 + fVar7 * 0.0083330255 + fVar2 * fVar4 * -0.16666657 + fVar4) *
             100.0 + (param_1->pos).y;
  local_30 = (fVar3 * fVar6 * 2.601887e-06 +
             fVar6 * -0.0001980741 + fVar5 * 0.0083330255 + fVar3 * fVar1 * -0.16666657 + fVar1) *
             100.0 + (param_1->pos).x;
  MB_UpdateNavMove(0x3ff0000000000000,param_1,param_2,&local_30,auStack_20);
  return;
}



//==== 00101cc0  ns=mobyutil  size=0x39c
// sig: undefined MB_UpdateNavMoveTurning(void)
// callers(22): 0018b2f8 mobyupdate_unsorted::UpdateMoby_1023; 0019aea0 mobyupdate_unsorted::UpdateMoby_1045; 001c26e0 mobyupdate_helpers::M1106_001c26e0; 002beb68 mobyupdate_unsorted::UpdateMoby_1818; 002cbaf8 mobyupdate_unsorted::UpdateMoby_186; 002f44c0 mobyupdate_unsorted::UpdateMoby_218; 002f7cf8 mobyupdate_unsorted::UpdateMoby_220; 00313188 mobyupdate_unsorted::UpdateMoby_246; 00346610 mobyupdate_unsorted::UpdateMoby_333; 0034ec58 mobyupdate_unsorted::UpdateMoby_342; 00378778 mobyupdate_unsorted::UpdateMoby_437; 003c0a18 mobyupdate_unsorted::UpdateMoby_573; 003c3730 mobyupdate_unsorted::UpdateMoby_574; 003cc030 mobyupdate_unsorted::UpdateMoby_578; 003d7240 mobyupdate_unsorted::UpdateMoby_602; 003db608 mobyupdate_unsorted::UpdateMoby_612; 003e9668 mobyupdate_unsorted::UpdateMoby_625; 0041fb90 mobyupdate_unsorted::UpdateMoby_691; 00442a70 mobyupdate_unsorted::UpdateMoby_741; 00497300 mobyupdate_unsorted::UpdateMoby_860; 00497ff8 mobyupdate_unsorted::UpdateMoby_861; 004993b0 mobyupdate_unsorted::UpdateMoby_862
// callees(4): 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00101058 mobyutil::MB_UpdateNavMove; 004fff60 fastfunc::FastDecTimerS32; 005026a0 fastfunc::FastSubRots

uint mobyutil::MB_UpdateNavMoveTurning
               (MobyInstance *param_1,longlong param_2,float *param_3,undefined4 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  f32 fVar9;
  undefined4 uVar10;
  ulonglong *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  MobyInstance *pMVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  f32 fVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  float *pfVar27;
  ulonglong unaff_r26;
  uint uVar28;
  uint uVar29;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  double dVar31;
  ulonglong in_f31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  
  uVar25 = ZEXT48(&stack0x00000000);
  lVar18 = uVar25 - 0xf0;
  puVar11 = (ulonglong *)lVar18;
  *puVar11 = uVar25;
  puVar11[0x20] = in_LR;
  puVar11[0x1d] = in_f31;
  puVar11[0x17] = unaff_r26;
  uVar28 = 0;
  puVar11[0x18] = unaff_r27;
  dVar32 = 0.0;
  param_4[3] = 0;
  param_4[2] = 0;
  param_4[1] = 0;
  *param_4 = 0;
  fVar1 = (param_1->pos).y;
  fVar2 = param_3[1];
  fVar3 = (param_1->pos).x;
  fVar12 = fVar1 - fVar2;
  fVar4 = *param_3;
  fVar13 = fVar3 - fVar4;
  fVar14 = (param_1->pos).z - param_3[2];
  puVar11[0x19] = unaff_r28;
  pMVar15 = (MobyInstance *)param_2;
  fVar5 = pMVar15->scale;
  puVar11[0x1b] = unaff_r30;
  puVar11[0x1a] = unaff_r29;
  puVar11[0x1c] = unaff_r31;
  fVar6 = (float)pMVar15->light;
  fVar7 = (pMVar15->rotation).x;
  fVar8 = (pMVar15->rotation).y;
  if (SQRT(fVar14 * fVar14 + fVar13 * fVar13 + fVar12 * fVar12) < fVar5) {
    uVar28 = 4;
  }
  fVar4 = fVar4 - fVar3;
  fVar2 = fVar2 - fVar1;
  fVar5 = ABS(fVar4);
  fVar3 = ABS(fVar2);
  *(float *)(puVar11 + 0xe) = fVar4;
  *(float *)((int)puVar11 + 0x74) = fVar2;
  *(float *)(puVar11 + 0xf) = fVar5 - fVar3;
  uVar23 = (ulonglong)(*(uint *)(puVar11 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar11 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar11 + 0x74) >> 0x1d) & 4;
  uVar21 = uVar23 << 2 | 0x735900;
  fVar1 = ABS(*(float *)(puVar11 + 0xe));
  if (*(float *)(puVar11 + 0xf) - 0.0 < 0.0) {
    fVar1 = fVar3;
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
  fVar3 = ABS(*(float *)((int)puVar11 + 0x74));
  if (*(float *)(puVar11 + 0xf) - 0.0 < 0.0) {
    fVar3 = fVar5;
  }
  fVar4 = *(float *)((int)uVar21 + 4);
  if (0.0 < fVar1) {
    lVar26 = uVar25 - 0xe0;
    lVar22 = uVar25 - 100;
    lVar24 = uVar25 - 0x74;
    lVar30 = 2;
    fVar1 = (fVar3 - fVar1) / (fVar3 + fVar1);
    fVar3 = fVar1 * fVar1;
    *(float *)(puVar11 + 0x11) = fVar1;
    *(float *)(puVar11 + 0x10) = fVar1;
    *(float *)((int)puVar11 + 0x84) = fVar1;
    *(float *)((int)puVar11 + 0x7c) = fVar1;
    fVar1 = fVar3 * fVar3;
    *(float *)(puVar11 + 0x10) = *(float *)(puVar11 + 0x10) * fVar3;
    *(float *)((int)puVar11 + 0x84) = *(float *)((int)puVar11 + 0x84) * fVar1;
    *(float *)(puVar11 + 0x11) = *(float *)(puVar11 + 0x11) * fVar1 * fVar3;
    do {
      *(float *)((int)lVar26 + 0x7c) = *(float *)((int)lVar26 + 0x6c) * fVar1 * fVar1;
      iVar16 = (int)lVar24;
      lVar24 = lVar24 + 8;
      lVar26 = lVar26 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)(iVar16 + 4) * fVar1 * fVar1;
      lVar22 = lVar22 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    uVar21 = uVar25 - 0x74;
    lVar24 = 4;
    pfVar27 = (float *)&DAT_007358e0;
    uVar25 = uVar21;
    lVar22 = lVar18;
    do {
      fVar1 = *pfVar27;
      fVar3 = pfVar27[1];
      pfVar27 = pfVar27 + 2;
      *(float *)((int)lVar22 + 0x7c) = *(float *)((int)lVar22 + 0x7c) * fVar1;
      lVar22 = lVar22 + 8;
      *(float *)((int)uVar25 + 4) = *(float *)((int)uVar25 + 4) * fVar3;
      uVar25 = uVar25 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar22 = 2;
    do {
      iVar16 = (int)lVar18;
      iVar17 = (int)uVar21;
      lVar18 = lVar18 + 0x10;
      uVar21 = uVar21 + 0x10;
      dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar16 + 0x7c)) + *(float *)(iVar17 + 4)
                        + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc));
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar2 + fVar4);
  }
  OrganicDeltAngSpeed(dVar32,(double)fVar6,(double)fVar7,(double)fVar8,param_1,uVar21,param_2 + 0x14
                     );
  dVar32 = (double)fastfunc::FastSubRots((float)dVar32,(param_1->rotation).z);
  if ((double)(float)pMVar15->pChain <= dVar32) {
    uVar28 = uVar28 | 0x10;
  }
  fastfunc::FastDecTimerS32(param_2 + 0x48);
  dVar31 = (double)(float)pMVar15->pChain;
  fVar19 = (pMVar15->rotation).z;
  if (dVar32 < dVar31) {
    auVar33 = ZEXT416(0xffffffff);
    auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
    auVar33 = loadVectorLeftIndexed(8,0x101cac);
    auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar33 = vectorMultiplyAddFloatingPoint
                        (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,
                         auVar34);
    auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
    puVar11[0x14] = (longlong)(int)(animationSpeed * 4.5);
    fVar9 = *(f32 *)((int)puVar11 + 0xa4);
    if ((int)fVar19 < (int)fVar9) {
      auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar10 = storeVectorElementWordIndexed
                         (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x48,param_2
                         );
      *(undefined4 *)((uint)&(pMVar15->rotation).z & 0xfffffffc) = uVar10;
      fVar19 = fVar9;
    }
  }
  uVar29 = uVar28;
  if (fVar19 != 0.0) {
    uVar20 = MB_UpdateNavMove((double)(float)((double)(float)(dVar31 - dVar32) / dVar31),param_1,
                              pMVar15,param_3,param_4);
    uVar29 = uVar28 | uVar20;
    if (0.10000000149011612 < dVar32) {
      uVar29 = uVar28 | uVar20 & 0xfffffffd;
    }
  }
  return uVar29;
}



//==== 00102060  ns=mobyutil  size=0x98
// sig: undefined MB_Reset2LegData(void)
// callers(0): 
// callees(1): 00501980 fastfunc::FastQuaternionToEuler

void mobyutil::MB_Reset2LegData(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = 0;
  uVar2 = 0;
  do {
    if (*(int *)(param_1 + 0x1a0) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x1a0) + 8) = 0;
    }
    if (*(char *)(param_1 + 0x161) != '\0') {
      fastfunc::FastQuaternionToEuler(uVar2,param_1 + 0x170,2);
    }
    iVar1 = iVar1 + 1;
    *(undefined4 *)(param_1 + 0x114) = 0;
    param_1 = param_1 + 0xa0;
  } while (iVar1 < 2);
  return;
}



//==== 00102168  ns=mobyutil  size=0x1590
// sig: undefined MB_UpdateLegAnimState(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4, MobyInstance * param_5, undefined4 param_6)
// callers(1): 00103710 mobyutil::MB_UpdateLegAnimMoveTurning
// callees(14): 00057820 collproc::CollLine; 0005c710 collproc::CollPill; 000efe40 mobyfunc::BlendAnimFrame; 000f00a0 mobyfunc::MB_GetCollPrimWorld; 000f1038 mobyfunc::GetBoneTransformations; 000f1238 mobyfunc::GetMobyJointsWorldPos; 000fddc0 mobyutil::MB_SetAnimation; 000ff190 mobyutil::MB_DeltAngSpeed; 005017c4 fastfunc::FastQuaternionMult; 00501980 fastfunc::FastQuaternionToEuler; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

ulonglong mobyutil::MB_UpdateLegAnimState
                    (double param_1,double param_2,double param_3,MobyInstance *param_4,
                    MobyInstance *param_5,int param_6)

{
  bool bVar1;
  float fVar2;
  u8 uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  float fVar7;
  float fVar8;
  f32 fVar9;
  f32 fVar10;
  float fVar11;
  float fVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  ushort uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint uVar23;
  ulonglong *puVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  int iVar31;
  f32 fVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  float *pfVar36;
  Manipulator **ppMVar38;
  ulonglong uVar37;
  longlong lVar39;
  ulonglong unaff_r16;
  uint uVar40;
  ulonglong unaff_r17;
  longlong lVar41;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  int iVar42;
  ulonglong unaff_r21;
  MobyInstance *pMVar43;
  ulonglong unaff_r22;
  char *pcVar44;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong uVar45;
  ulonglong unaff_r26;
  ulonglong uVar46;
  ulonglong unaff_r27;
  Manipulator **ppMVar47;
  ulonglong unaff_r28;
  ulonglong uVar48;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar49;
  longlong lVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  ulonglong in_f14;
  ulonglong in_f15;
  ulonglong in_f16;
  ulonglong in_f17;
  ulonglong in_f18;
  double dVar61;
  ulonglong in_f19;
  double dVar62;
  double dVar63;
  ulonglong in_f20;
  double dVar64;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  double dVar65;
  ulonglong in_f24;
  double dVar66;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar67;
  ulonglong in_f28;
  double dVar68;
  ulonglong in_f29;
  double dVar69;
  double dVar70;
  ulonglong in_f30;
  double dVar71;
  double dVar72;
  ulonglong in_f31;
  double dVar73;
  double dVar74;
  
  uVar28 = ZEXT48(&stack0x00000000);
  lVar50 = uVar28 - 0x330;
  puVar24 = (ulonglong *)lVar50;
  *puVar24 = uVar28;
  puVar24[0x68] = in_LR;
  puVar24[0x54] = in_f14;
  puVar24[0x55] = in_f15;
  puVar24[0x56] = in_f16;
  puVar24[0x57] = in_f17;
  puVar24[0x58] = in_f18;
  puVar24[0x59] = in_f19;
  puVar24[0x5a] = in_f20;
  puVar24[0x5b] = in_f21;
  puVar24[0x5c] = in_f22;
  puVar24[0x5d] = in_f23;
  puVar24[0x5e] = in_f24;
  puVar24[0x5f] = in_f25;
  puVar24[0x60] = in_f26;
  puVar24[0x61] = in_f27;
  puVar24[0x62] = in_f28;
  puVar24[99] = in_f29;
  puVar24[100] = in_f30;
  puVar24[0x65] = in_f31;
  puVar24[0x4b] = unaff_r23;
  puVar24[0x50] = unaff_r28;
  puVar24[0x48] = unaff_r20;
  puVar24[0x45] = unaff_r17;
  uVar48 = 0;
  puVar24[0x53] = unaff_r31;
  iVar42 = 0;
  puVar24[0x52] = unaff_r30;
  puVar24[0x51] = unaff_r29;
  uVar3 = param_4->updateId;
  fVar8 = animationSpeed * 60.0;
  puVar24[0x4f] = unaff_r27;
  puVar24[0x4e] = unaff_r26;
  puVar24[0x4d] = unaff_r25;
  puVar24[0x4c] = unaff_r24;
  puVar24[0x4a] = unaff_r22;
  puVar24[0x49] = unaff_r21;
  puVar24[0x47] = unaff_r19;
  puVar24[0x46] = unaff_r18;
  puVar24[0x44] = unaff_r16;
  dVar64 = (double)(float)((double)fVar8 * param_1);
  if (uVar3 == 0xff) {
    dVar51 = (double)fastfunc::FastIntToDouble(param_4->animationFrame);
  }
  else {
    dVar51 = (double)mobyfunc::BlendAnimFrame(param_4);
  }
  if (param_5->pAnimationLayers == (void *)(uint)param_4->updateId) {
    ppMVar47 = (Manipulator **)&param_5->pAnimationLayers;
LAB_0010229c:
    if (ppMVar47 != (Manipulator **)0x0) {
      uVar46 = 0;
      uVar29 = 1;
      iVar31 = 0;
      ppMVar38 = ppMVar47;
      do {
        uVar23 = (int)ppMVar38[0x10] >> 0x1f;
        uVar40 = (int)ppMVar38[0x12] >> 0x1f;
        if ((int)((uVar40 >> 1 ^ (uint)ppMVar38[0x12]) - uVar40) <
            (int)((uVar23 >> 1 ^ (uint)ppMVar38[0x10]) - uVar23)) {
          if (((double)(float)ppMVar38[0x10] <= dVar51) || (dVar51 <= (double)(float)ppMVar38[0x12])
             ) {
            uVar46 = uVar29 | uVar46;
          }
        }
        else if (dVar51 <= (double)(float)ppMVar38[0x12] && (double)(float)ppMVar38[0x10] <= dVar51)
        {
          uVar46 = uVar29 | uVar46;
        }
        uVar23 = (int)ppMVar38[10] >> 0x1f;
        uVar40 = (int)ppMVar38[0xc] >> 0x1f;
        if ((int)((uVar40 >> 1 ^ (uint)ppMVar38[0xc]) - uVar40) <
            (int)((uVar23 >> 1 ^ (uint)ppMVar38[10]) - uVar23)) {
          if (((double)(float)ppMVar38[10] <= dVar51) || (dVar51 <= (double)(float)ppMVar38[0xc])) {
            uVar46 = uVar29 << 1 | uVar46;
          }
        }
        else if (dVar51 <= (double)(float)ppMVar38[0xc] && (double)(float)ppMVar38[10] <= dVar51) {
          uVar46 = uVar29 << 1 | uVar46;
        }
        iVar31 = iVar31 + 1;
        uVar29 = (uVar29 & 0x3fffffff) << 2;
        ppMVar38 = ppMVar38 + 1;
      } while (iVar31 < 2);
      if ((int)uVar46 == 0) {
        uVar46 = uVar29 | uVar46;
      }
      goto LAB_001023ac;
    }
  }
  else {
    if (*(void **)&param_5->levelFlagIdx == (void *)(uint)param_4->updateId) {
      ppMVar47 = (Manipulator **)&param_5->levelFlagIdx;
      goto LAB_0010229c;
    }
    ppMVar47 = (Manipulator **)0x0;
  }
  sVar13._0_1_ = param_5->previousAnimationFrame;
  sVar13._1_1_ = param_5->animationFrame;
  uVar46 = (ulonglong)sVar13;
LAB_001023ac:
  sVar14._0_1_ = param_5->updateId;
  sVar14._1_1_ = param_5->animationId;
  if (sVar14 == 2) {
    dVar57 = (double)(param_4->rotation).x;
    dVar57 = (double)(float)(param_3 * 0.5 - dVar57) * 0.06666667014360428 + dVar57;
  }
  else {
    dVar57 = (double)(param_4->rotation).x * 0.800000011920929;
  }
  uVar45 = 3;
  iVar31 = 0;
  (param_4->rotation).x = (float)dVar57;
  uVar29 = 3;
  pMVar43 = param_5;
  do {
    mobyfunc::GetBoneTransformations(param_4,*(undefined1 *)&pMVar43[1].pos.x,uVar28 - 0x240);
    fVar7 = ABS(*(float *)(puVar24 + 0x20));
    fVar2 = ABS(*(float *)((int)puVar24 + 0x104));
    *(float *)(puVar24 + 0x33) = fVar7 - fVar2;
    dVar57 = 0.0;
    dVar65 = 0.7853981852531433;
    sVar15._0_1_ = param_5->updateId;
    sVar15._1_1_ = param_5->animationId;
    uVar37 = (ulonglong)(*(uint *)(puVar24 + 0x20) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar24 + 0x33) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar24 + 0x104) >> 0x1d) & 4;
    fVar8 = fVar7;
    if (*(float *)(puVar24 + 0x33) - 0.0 < 0.0) {
      fVar8 = fVar2;
    }
    fVar12 = *(float *)(&g_atanQuadrantTable + (int)(uVar37 << 2));
    if (*(float *)(puVar24 + 0x33) - 0.0 < 0.0) {
      fVar2 = fVar7;
    }
    fVar7 = *(float *)(((uint)(uVar37 << 2) | 0x735900) + 4);
    dVar54 = dVar57;
    if (0.0 < fVar8) {
      lVar39 = uVar28 - 800;
      lVar41 = uVar28 - 0x13c;
      lVar30 = uVar28 - 0x14c;
      lVar49 = 2;
      fVar8 = (fVar2 - fVar8) / (fVar2 + fVar8);
      fVar2 = fVar8 * fVar8;
      *(float *)((int)puVar24 + 0x1e4) = fVar8;
      *(float *)(puVar24 + 0x3d) = fVar8;
      *(float *)((int)puVar24 + 0x1ec) = fVar8;
      *(float *)(puVar24 + 0x3e) = fVar8;
      fVar8 = fVar2 * fVar2;
      *(float *)(puVar24 + 0x3d) = *(float *)(puVar24 + 0x3d) * fVar2;
      *(float *)((int)puVar24 + 0x1ec) = *(float *)((int)puVar24 + 0x1ec) * fVar8;
      *(float *)(puVar24 + 0x3e) = *(float *)(puVar24 + 0x3e) * fVar8 * fVar2;
      do {
        *(float *)((int)lVar39 + 0x1e4) = *(float *)((int)lVar39 + 0x1d4) * fVar8 * fVar8;
        iVar33 = (int)lVar30;
        lVar30 = lVar30 + 8;
        lVar39 = lVar39 + 8;
        *(float *)((int)lVar41 + 4) = *(float *)(iVar33 + 4) * fVar8 * fVar8;
        lVar41 = lVar41 + 8;
        lVar49 = lVar49 + -1;
      } while (lVar49 != 0);
      lVar49 = 4;
      lVar41 = uVar28 - 0x14c;
      pfVar36 = (float *)&DAT_007358e0;
      lVar39 = lVar50;
      lVar30 = lVar41;
      do {
        fVar8 = *pfVar36;
        fVar2 = pfVar36[1];
        pfVar36 = pfVar36 + 2;
        *(float *)((int)lVar39 + 0x1e4) = *(float *)((int)lVar39 + 0x1e4) * fVar8;
        lVar39 = lVar39 + 8;
        *(float *)((int)lVar30 + 4) = *(float *)((int)lVar30 + 4) * fVar2;
        lVar30 = lVar30 + 8;
        lVar49 = lVar49 + -1;
      } while (lVar49 != 0);
      lVar30 = 2;
      lVar39 = lVar50;
      do {
        iVar33 = (int)lVar39;
        iVar34 = (int)lVar41;
        lVar39 = lVar39 + 0x10;
        lVar41 = lVar41 + 0x10;
        dVar54 = (double)((float)(dVar54 + (double)*(float *)(iVar33 + 0x1e4)) +
                          *(float *)(iVar34 + 4) + *(float *)(iVar34 + 8) + *(float *)(iVar34 + 0xc)
                         );
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      dVar54 = (double)((float)(dVar54 + 0.7853981852531433) * fVar12 + fVar7);
    }
    uVar23 = (uint)uVar46;
    if ((sVar15 == 1) && (((uint)uVar45 & uVar23) != 0)) {
      dVar52 = (double)fastfunc::FastDiffRots((double)pMVar43[1].pos.z,dVar54);
      pMVar43[1].pos.w = 0.0;
    }
    else {
      dVar52 = (double)MB_DeltAngSpeed((double)pMVar43[1].pos.y,0,0x3fb99999a0000000,
                                       0x3fb99999a0000000,(double)(DAT_0071f408 * 0.034906585),
                                       &DAT_00720000,sVar15,&pMVar43[1].pos.w);
    }
    pMVar43[1].pos.y = (float)dVar52;
    dVar53 = (double)*(float *)&pMVar43[1].damage;
    if (dVar52 < dVar53) {
      pMVar43[1].pos.y = *(float *)&pMVar43[1].damage;
      dVar52 = dVar53;
    }
    dVar53 = (double)(float)pMVar43[1].field71_0xa8;
    if (dVar53 < dVar52) {
      pMVar43[1].pos.y = (f32)pMVar43[1].field71_0xa8;
      dVar52 = dVar53;
    }
    dVar54 = (double)fastfunc::FastWrapRot((float)dVar52,(float)dVar54);
    sVar16._0_1_ = param_5->updateId;
    sVar16._1_1_ = param_5->animationId;
    pMVar43[1].pos.z = (float)dVar54;
    if (sVar16 == 2) {
      cVar4 = *(char *)((int)&pMVar43[1].pAnimationLayers + 1);
      if (cVar4 != '\0') {
        fastfunc::FastQuaternionToEuler(dVar57,&pMVar43[1].field43_0x70,2);
        cVar4 = *(char *)((int)&pMVar43[1].pAnimationLayers + 1);
      }
      pcVar44 = &pMVar43[1].updateDistance;
      if (cVar4 != '\0') {
        fastfunc::FastQuaternionToEuler((double)pMVar43[1].pos.y,pcVar44,2);
      }
      if (((uint)uVar45 & uVar23) != 0) {
        fastfunc::FastQuaternionToEuler(-(double)(param_4->rotation).x,uVar28 - 0x2b0,0);
        fastfunc::FastQuaternionMult(pcVar44,pcVar44,uVar28 - 0x2b0);
      }
    }
    else {
      cVar4 = *(char *)((int)&pMVar43[1].pAnimationLayers + 1);
      if (cVar4 != '\0') {
        fastfunc::FastQuaternionToEuler((double)pMVar43[1].pos.y,&pMVar43[1].field43_0x70,2);
        cVar4 = *(char *)((int)&pMVar43[1].pAnimationLayers + 1);
      }
      if (cVar4 != '\0') {
        fastfunc::FastQuaternionToEuler(dVar57,&pMVar43[1].updateDistance,2);
      }
    }
    iVar31 = iVar31 + 1;
    uVar45 = (uVar45 & 0x3fffffff) << 2;
    pMVar43 = (MobyInstance *)&pMVar43->collCount;
  } while (iVar31 < 2);
  sVar17._0_1_ = param_5->updateId;
  sVar17._1_1_ = param_5->animationId;
  if (sVar17 == 0) {
    uVar45 = (ulonglong)param_4->animationId;
    if ((ushort)param_4->animationId != *(ushort *)&param_5->frameSpeed) {
      iVar31 = 0;
      uVar45 = 0x3f800000;
      pMVar43 = param_5;
      do {
        if ((((uint)uVar29 & uVar23) == 0) && (uVar40 = pMVar43[1].collCount, uVar40 != 0)) {
          *(undefined4 *)(puVar24 + 0x41) = *(undefined4 *)(uVar40 + 8);
          fVar8 = *(float *)(puVar24 + 0x41);
          *(float *)(puVar24 + 0x41) = fVar8 + 0.2;
          *(undefined4 *)(uVar40 + 8) = *(undefined4 *)(puVar24 + 0x41);
          if (1.0 < fVar8 + 0.2) {
            *(undefined4 *)(uVar40 + 8) = 0x3f800000;
          }
        }
        iVar31 = iVar31 + 1;
        uVar29 = (uVar29 & 0x3fffffff) << 2;
        pMVar43 = (MobyInstance *)&pMVar43->collCount;
      } while (iVar31 < 2);
    }
  }
  else {
    uVar45 = 0;
    pMVar43 = param_5;
    do {
      if ((((uint)uVar29 & uVar23) == 0) && (uVar40 = pMVar43[1].collCount, uVar40 != 0)) {
        *(undefined4 *)(puVar24 + 0x41) = *(undefined4 *)(uVar40 + 8);
        fVar8 = *(float *)(puVar24 + 0x41);
        *(float *)(puVar24 + 0x41) = fVar8 - 0.2;
        *(undefined4 *)(uVar40 + 8) = *(undefined4 *)(puVar24 + 0x41);
        if ((double)(fVar8 - 0.2) < dVar57) {
          *(undefined4 *)(uVar40 + 8) = 0;
        }
      }
      uVar45 = uVar45 + 1;
      pMVar43 = (MobyInstance *)&pMVar43->collCount;
      uVar29 = (uVar29 & 0x3fffffff) << 2;
    } while ((int)uVar45 < 2);
  }
  dVar54 = (double)MB_DeltAngSpeed((double)(param_4->rotation).y,(double)param_5->animationBlend,
                                   0x3f747ae140000000,0x3f847ae140000000,
                                   (double)(DAT_0071f408 * 0.017453292),&DAT_00720000,uVar45,
                                   &param_5->unk58);
  (param_4->rotation).y = (float)dVar54;
  bVar5 = *(byte *)((int)&param_5[1].pos.x + 1);
  *(uint *)((int)puVar24 + 0x19c) = (uint)*(byte *)&param_5[1].pos.x;
  bVar6 = param_5[1].levelFlagIdx;
  *(uint *)(puVar24 + 0x34) = (uint)bVar5;
  bVar5 = param_5[1].field74_0xb1;
  *(uint *)((int)puVar24 + 0x1a4) = (uint)bVar6;
  fVar32 = param_5[1].bSphere.z;
  *(uint *)(puVar24 + 0x35) = (uint)bVar5;
  *(f32 *)((int)puVar24 + 0x1ac) = fVar32;
  mobyfunc::GetMobyJointsWorldPos(param_4,5,uVar28 - 0x194,uVar28 - 0x200);
  uVar19._0_1_ = param_5->previousAnimationFrame;
  uVar19._1_1_ = param_5->animationFrame;
  uVar29 = 1;
  iVar31 = 0;
  lVar30 = uVar28 - 0x200;
  uVar45 = 1;
  lVar39 = lVar30;
  dVar54 = dVar57;
  dVar52 = dVar57;
  dVar53 = dVar57;
  pMVar43 = param_5;
  do {
    if (((uint)uVar29 &
        (uVar23 | 0x10) +
        ((uint)((LZCOUNT(-(uVar19 & 0x10)) << 0x3a) >> 0x3f) & uVar23 - (uVar23 | 0x10))) != 0) {
      dVar53 = (double)(float)(dVar53 + 1.0);
      dVar52 = (double)((float)(dVar52 + (double)(pMVar43->bSphere).x) - *(float *)lVar39);
      dVar54 = (double)((float)(dVar54 + (double)(pMVar43->bSphere).y) - ((float *)lVar39)[1]);
    }
    iVar31 = iVar31 + 1;
    uVar29 = (uVar29 & 0x7fffffff) << 1;
    lVar39 = lVar39 + 0x10;
    pMVar43 = (MobyInstance *)&pMVar43->pos;
  } while (iVar31 < 5);
  lVar39 = 5;
  dVar52 = (double)(float)((double)(float)(1.0 / dVar53) * dVar52);
  dVar54 = (double)(float)((double)(float)(1.0 / dVar53) * dVar54);
  pMVar43 = param_5;
  do {
    pfVar36 = (float *)lVar30;
    (pMVar43->bSphere).x = (float)((double)*pfVar36 + dVar52);
    (pMVar43->bSphere).y = (float)((double)pfVar36[1] + dVar54);
    (pMVar43->bSphere).z = pfVar36[2];
    lVar30 = lVar30 + 0x10;
    (pMVar43->bSphere).rad = pfVar36[3];
    pMVar43 = (MobyInstance *)&pMVar43->pos;
    lVar39 = lVar39 + -1;
  } while (lVar39 != 0);
  dVar66 = 0.5;
  uVar40 = 0;
  dVar62 = 4.0;
  uVar29 = 1;
  dVar53 = dVar57;
  dVar67 = dVar57;
  dVar68 = dVar57;
  dVar69 = dVar57;
  dVar71 = dVar57;
  dVar73 = dVar57;
  pMVar43 = param_5;
  do {
    if (((uint)uVar29 & uVar23) == 0) {
      if ((uVar40 & 1) != 0) {
        fVar32 = (pMVar43->bSphere).x;
        *(f32 *)(puVar24 + 0x16) = fVar32;
        fVar9 = (pMVar43->bSphere).y;
        *(f32 *)((int)puVar24 + 0xb4) = fVar9;
        fVar8 = (pMVar43->bSphere).z;
        fVar10 = (pMVar43->bSphere).rad;
        *(f32 *)((int)puVar24 + 0xbc) = fVar10;
        *(undefined4 *)(puVar24 + 0x17) = 0x3c23d70a;
        *(f32 *)(puVar24 + 0x18) = fVar32;
        *(f32 *)((int)puVar24 + 0xc4) = fVar9;
        *(f32 *)((int)puVar24 + 0xcc) = fVar10;
        *(float *)(puVar24 + 0x19) = (float)((double)fVar8 + dVar66);
        iVar31 = collproc::CollLine(uVar28 - 0x270,uVar28 - 0x280,2,0,0);
        dVar61 = (double)(pMVar43->bSphere).z;
        dVar55 = dVar53;
        if (iVar31 != 0) {
          dVar55 = (double)CollOutput.ip.z;
        }
        dVar69 = (double)(float)(dVar69 + (double)CollOutput.normal.x);
        dVar73 = (double)(float)(dVar73 + (double)CollOutput.normal.y);
        dVar71 = (double)(float)(dVar71 + (double)CollOutput.normal.z);
        if ((double)(float)(dVar61 + dVar68) < dVar55) {
          dVar67 = (double)(float)(dVar67 + dVar62);
          dVar68 = (double)(float)(dVar68 + (double)(float)(dVar55 - dVar61));
        }
      }
    }
    else {
      fVar32 = (pMVar43->bSphere).x;
      *(f32 *)(puVar24 + 0x1a) = fVar32;
      fVar9 = (pMVar43->bSphere).y;
      *(f32 *)((int)puVar24 + 0xd4) = fVar9;
      fVar8 = (pMVar43->bSphere).z;
      fVar10 = (pMVar43->bSphere).rad;
      *(f32 *)((int)puVar24 + 0xdc) = fVar10;
      *(undefined4 *)(puVar24 + 0x1b) = 0x3c23d70a;
      *(f32 *)(puVar24 + 0x1c) = fVar32;
      *(f32 *)((int)puVar24 + 0xe4) = fVar9;
      *(f32 *)((int)puVar24 + 0xec) = fVar10;
      *(float *)(puVar24 + 0x1d) = (float)((double)fVar8 + dVar66);
      iVar31 = collproc::CollLine(uVar28 - 0x250,uVar28 - 0x260,2,0,0);
      dVar55 = dVar53;
      if (iVar31 != 0) {
        dVar55 = (double)CollOutput.ip.z;
      }
      dVar69 = (double)(float)(dVar69 + (double)CollOutput.normal.x);
      dVar73 = (double)(float)(dVar73 + (double)CollOutput.normal.y);
      dVar71 = (double)(float)(dVar71 + (double)CollOutput.normal.z);
      dVar67 = (double)(float)(dVar67 + dVar62);
      dVar68 = (double)(float)(dVar68 + (double)(float)(dVar55 - (double)(pMVar43->bSphere).z));
    }
    uVar40 = uVar40 + 1;
    uVar29 = (uVar29 & 0x7fffffff) << 1;
    pMVar43 = (MobyInstance *)&pMVar43->pos;
  } while ((int)uVar40 < 4);
  dVar62 = 1.570796251296997;
  fVar8 = (param_4->rotation).z;
  dVar55 = 3.141592502593994;
  fVar7 = fVar8 + 1.5707963;
  dVar61 = -3.141592502593994;
  dVar63 = -0.16666656732559204;
  fVar2 = 3.1415925 - fVar8;
  if (fVar8 - (3.1415925 - fVar8) < 0.0) {
    fVar2 = fVar8;
  }
  dVar70 = 0.008333025500178337;
  fVar12 = 3.1415925 - fVar7;
  if (fVar7 - (3.1415925 - fVar7) < 0.0) {
    fVar12 = fVar7;
  }
  dVar72 = -0.0001980741071747616;
  fVar11 = -3.1415925 - fVar8;
  if ((-3.1415925 - fVar8) - fVar2 < 0.0) {
    fVar11 = fVar2;
  }
  dVar74 = 2.601886990305502e-06;
  fVar8 = -3.1415925 - fVar7;
  if ((-3.1415925 - fVar7) - fVar12 < 0.0) {
    fVar8 = fVar12;
  }
  fVar12 = fVar11 * fVar11;
  fVar27 = fVar8 * fVar8;
  fVar2 = fVar12 * fVar12 * fVar11;
  fVar25 = fVar27 * fVar27 * fVar8;
  fVar7 = fVar12 * fVar2;
  fVar26 = fVar27 * fVar25;
  dVar56 = (double)(fVar12 * fVar7 * 2.601887e-06 +
                   fVar7 * -0.0001980741 +
                   fVar2 * 0.0083330255 + fVar12 * fVar11 * -0.16666657 + fVar11);
  dVar58 = (double)(fVar27 * fVar26 * 2.601887e-06 +
                   fVar26 * -0.0001980741 +
                   fVar25 * 0.0083330255 + fVar27 * fVar8 * -0.16666657 + fVar8);
  dVar59 = (double)(float)(dVar71 * dVar58 - dVar53);
  dVar60 = (double)(float)(dVar73 * dVar53 - (double)(float)(dVar71 * dVar56));
  dVar56 = (double)(float)(dVar69 * dVar56 - (double)(float)(dVar73 * dVar58));
  fVar8 = (float)(dVar73 * dVar56 - (double)(float)(dVar71 * dVar59));
  fVar2 = (float)(dVar71 * dVar60 - (double)(float)(dVar69 * dVar56));
  fVar7 = (float)(dVar69 * dVar59 - (double)(float)(dVar73 * dVar60));
  dVar71 = ABS((double)fVar7);
  *(float *)(puVar24 + 0x32) = fVar7;
  fVar8 = SQRT(fVar8 * fVar8 + fVar2 * fVar2);
  dVar73 = ABS((double)fVar8);
  *(float *)((int)puVar24 + 0x18c) = fVar8;
  *(float *)((int)puVar24 + 0x194) = (float)(dVar73 - dVar71);
  uVar29 = (ulonglong)(*(uint *)((int)puVar24 + 0x18c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar24 + 0x194) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar24 + 0x32) >> 0x1d) & 4;
  dVar69 = ABS((double)*(float *)((int)puVar24 + 0x18c));
  if ((double)*(float *)((int)puVar24 + 0x194) - dVar53 < 0.0) {
    dVar69 = dVar71;
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar29 << 2));
  fVar8 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
  dVar71 = ABS((double)*(float *)(puVar24 + 0x32));
  if ((double)*(float *)((int)puVar24 + 0x194) - dVar53 < 0.0) {
    dVar71 = dVar73;
  }
  dVar73 = dVar53;
  if (dVar53 < dVar69) {
    lVar49 = 2;
    fVar7 = (float)(dVar71 - dVar69) / (float)(dVar71 + dVar69);
    fVar12 = fVar7 * fVar7;
    *(float *)((int)puVar24 + 0x1c4) = fVar7;
    *(float *)(puVar24 + 0x39) = fVar7;
    *(float *)((int)puVar24 + 0x1cc) = fVar7;
    *(float *)(puVar24 + 0x3a) = fVar7;
    lVar41 = uVar28 - 800;
    fVar7 = fVar12 * fVar12;
    lVar39 = uVar28 - 0x16c;
    lVar30 = uVar28 - 0x15c;
    *(float *)(puVar24 + 0x39) = *(float *)(puVar24 + 0x39) * fVar12;
    *(float *)((int)puVar24 + 0x1cc) = *(float *)((int)puVar24 + 0x1cc) * fVar7;
    *(float *)(puVar24 + 0x3a) = *(float *)(puVar24 + 0x3a) * fVar7 * fVar12;
    do {
      *(float *)((int)lVar41 + 0x1c4) = *(float *)((int)lVar41 + 0x1b4) * fVar7 * fVar7;
      iVar31 = (int)lVar39;
      lVar41 = lVar41 + 8;
      lVar39 = lVar39 + 8;
      *(float *)((int)lVar30 + 4) = *(float *)(iVar31 + 4) * fVar7 * fVar7;
      lVar30 = lVar30 + 8;
      lVar49 = lVar49 + -1;
    } while (lVar49 != 0);
    lVar49 = 4;
    lVar41 = uVar28 - 0x16c;
    pfVar36 = (float *)&DAT_007358e0;
    lVar39 = lVar50;
    lVar30 = lVar41;
    do {
      fVar7 = *pfVar36;
      fVar12 = pfVar36[1];
      pfVar36 = pfVar36 + 2;
      *(float *)((int)lVar39 + 0x1c4) = *(float *)((int)lVar39 + 0x1c4) * fVar7;
      lVar39 = lVar39 + 8;
      *(float *)((int)lVar30 + 4) = *(float *)((int)lVar30 + 4) * fVar12;
      lVar30 = lVar30 + 8;
      lVar49 = lVar49 + -1;
    } while (lVar49 != 0);
    lVar39 = 2;
    dVar69 = dVar53;
    do {
      iVar31 = (int)lVar50;
      lVar50 = lVar50 + 0x10;
      iVar33 = (int)lVar41;
      lVar41 = lVar41 + 0x10;
      dVar69 = (double)((float)(dVar69 + (double)*(float *)(iVar31 + 0x1c4)) +
                        *(float *)(iVar33 + 4) + *(float *)(iVar33 + 8) + *(float *)(iVar33 + 0xc));
      lVar39 = lVar39 + -1;
    } while (lVar39 != 0);
    dVar73 = (double)((float)(dVar69 + dVar65) * fVar2 + fVar8);
  }
  param_5->animationBlend = (float)dVar73;
  if (0.785398006439209 < ABS(dVar73)) {
    uVar48 = 2;
  }
  dVar65 = dVar68;
  if (dVar53 - dVar67 < 0.0) {
    dVar65 = (double)(float)(dVar68 / dVar67);
  }
  if (dVar67 - dVar53 < 0.0) {
    dVar65 = (double)(float)(dVar68 / dVar67);
  }
  if (dVar65 != dVar53) {
    lVar50 = 2;
    pMVar43 = param_5;
    do {
      (pMVar43->bSphere).z = (float)((double)(pMVar43->bSphere).z + dVar65);
      (pMVar43->pos).z = (float)((double)(pMVar43->pos).z + dVar65);
      pMVar43 = (MobyInstance *)&pMVar43->state;
      lVar50 = lVar50 + -1;
      dVar57 = dVar65;
    } while (lVar50 != 0);
  }
  sVar18._0_1_ = param_5->updateId;
  sVar18._1_1_ = param_5->animationId;
  param_5->previousAnimationFrame = (char)((ushort)(short)uVar46 >> 8);
  param_5->animationFrame = (char)(short)uVar46;
  if (sVar18 < 1) {
    if (-1 < sVar18) {
      if (param_2 <= 0.800000011920929) {
        if ((0.20999999344348907 < dVar64) || (param_6 != 0)) {
          fVar32 = (f32)((int)param_5[1].bSphere.y + 1);
          param_5[1].bSphere.y = fVar32;
          if (3 < (int)fVar32) {
            uVar21._0_1_ = param_5->field43_0x70;
            uVar21._1_1_ = param_5->field44_0x71;
            uVar21._2_1_ = param_5->field45_0x72;
            uVar21._3_1_ = param_5->field46_0x73;
            MB_SetAnimation(param_4,param_5->pAnimationLayers,uVar21,10);
            iVar31 = 0;
            pMVar43 = param_5;
            do {
              if (pMVar43[1].collCount != 0) {
                *(undefined4 *)(pMVar43[1].collCount + 8) = 0;
              }
              if (*(char *)((int)&pMVar43[1].pAnimationLayers + 1) != '\0') {
                fastfunc::FastQuaternionToEuler(dVar53,&pMVar43[1].field43_0x70,2);
              }
              iVar31 = iVar31 + 1;
              pMVar43[1].pos.y = 0.0;
              pMVar43 = (MobyInstance *)&pMVar43->collCount;
            } while (iVar31 < 2);
            param_5->updateId = '\0';
            param_5->animationId = '\x01';
            param_5[1].bSphere.y = 0.0;
          }
        }
        else {
          uVar19 = *(ushort *)&param_5->frameSpeed;
          bVar1 = param_4->updateId != uVar19;
          if (bVar1) {
            if (param_4->animationId != uVar19) {
              param_5[1].bSphere.y = 0.0;
              dVar51 = dVar53;
              if ((sVar18 == 0) && (bVar1)) {
                iVar31 = 0;
                pMVar43 = param_5;
                do {
                  if (((uint)uVar45 & uVar23) == 0) {
                    fVar32 = (pMVar43->bSphere).x;
                    *(f32 *)(puVar24 + 0x12) = fVar32;
                    fVar9 = (pMVar43->bSphere).y;
                    *(f32 *)((int)puVar24 + 0x94) = fVar9;
                    fVar8 = (pMVar43->bSphere).z;
                    fVar10 = (pMVar43->bSphere).rad;
                    *(f32 *)((int)puVar24 + 0x9c) = fVar10;
                    *(undefined4 *)(puVar24 + 0x13) = 0x3c23d70a;
                    *(f32 *)(puVar24 + 0x14) = fVar32;
                    *(f32 *)((int)puVar24 + 0xa4) = fVar9;
                    *(f32 *)((int)puVar24 + 0xac) = fVar10;
                    *(float *)(puVar24 + 0x15) = (float)((double)fVar8 + dVar66);
                    iVar33 = collproc::CollLine(uVar28 - 0x290,uVar28 - 0x2a0,2,0,0);
                    dVar65 = dVar53;
                    if (iVar33 != 0) {
                      dVar65 = (double)CollOutput.ip.z;
                    }
                    dVar65 = (double)(float)(dVar65 - (double)(pMVar43->bSphere).z);
                    if (dVar51 < dVar65) {
                      dVar51 = dVar65;
                    }
                  }
                  iVar31 = iVar31 + 2;
                  pMVar43 = (MobyInstance *)&pMVar43->state;
                  uVar45 = (uVar45 & 0x3fffffff) << 2;
                } while (iVar31 < 4);
              }
              if (dVar51 != dVar53) {
                MB_SetAnimation(param_4,*(undefined2 *)&param_5->frameSpeed,0,10);
                iVar31 = 0;
                pMVar43 = param_5;
                do {
                  if (pMVar43[1].collCount != 0) {
                    *(undefined4 *)(pMVar43[1].collCount + 8) = 0;
                  }
                  if (*(char *)((int)&pMVar43[1].pAnimationLayers + 1) != '\0') {
                    fastfunc::FastQuaternionToEuler(dVar53,&pMVar43[1].field43_0x70,2);
                  }
                  iVar31 = iVar31 + 1;
                  pMVar43[1].pos.y = 0.0;
                  pMVar43 = (MobyInstance *)&pMVar43->collCount;
                } while (iVar31 < 2);
                uVar46 = uVar46 & 0xf ^ 0xf;
              }
            }
          }
          else {
            uVar46 = 5;
            param_5[1].bSphere.y = 0.0;
          }
        }
      }
      else {
        uVar20._0_1_ = param_5->levelFlagIdx;
        uVar20._1_1_ = param_5->field74_0xb1;
        uVar20._2_2_ = param_5->uid;
        MB_SetAnimation(param_4,uVar20,(param_5->transform).v0.x,10);
        iVar31 = 0;
        pMVar43 = param_5;
        do {
          if (pMVar43[1].collCount != 0) {
            *(undefined4 *)(pMVar43[1].collCount + 8) = 0;
          }
          if (*(char *)((int)&pMVar43[1].pAnimationLayers + 1) != '\0') {
            fastfunc::FastQuaternionToEuler(dVar53,&pMVar43[1].field43_0x70,2);
          }
          iVar31 = iVar31 + 1;
          pMVar43[1].pos.y = 0.0;
          pMVar43 = (MobyInstance *)&pMVar43->collCount;
        } while (iVar31 < 2);
        param_5->updateId = '\0';
        param_5->animationId = '\x02';
        param_5[1].bSphere.y = 0.0;
      }
    }
  }
  else if (sVar18 < 2) {
    if ((0.1899999976158142 <= dVar64) || (param_6 != 0)) {
      if (((void *)(uint)param_4->updateId == param_5->pAnimationLayers) &&
         (((double)((float)param_5->pManipulators * 1.35) < dVar64 && ((uVar46 & 10) == 0)))) {
        if ((uVar46 & 1) == 0) {
          fVar8 = (param_5->transform).v3.y;
          iVar31 = fastfunc::FastDoubleToInt
                             ((double)(((((float)(dVar51 - (double)*(float *)&param_5->damage) /
                                         (float)param_5->collQueryStamp) * (param_5->transform).v2.w
                                        + fVar8) - fVar8) - (float)param_5->field80_0xb8));
          iVar33 = fastfunc::FastDoubleToInt
                             ((double)((param_5->transform).v3.w - (float)param_5->field80_0xb8));
          iVar34 = fastfunc::FastDoubleToInt((double)(*(float *)&param_5->setByGroup * 0.1));
        }
        else {
          fVar8 = (param_5->transform).v3.x;
          iVar31 = fastfunc::FastDoubleToInt
                             ((double)(((((float)(dVar51 - (double)(float)param_5->collCount) /
                                         (float)param_5->collisionMesh) * (param_5->transform).v2.z
                                        + fVar8) - fVar8) - (float)param_5->field80_0xb8));
          iVar33 = fastfunc::FastDoubleToInt
                             ((double)((param_5->transform).v3.z - (float)param_5->field80_0xb8));
          iVar34 = fastfunc::FastDoubleToInt((double)(*(float *)&param_5->setByGroup * 0.1));
        }
        uVar46 = 0;
        iVar35 = fastfunc::FastDoubleToInt((double)*(float *)&param_5->setByGroup);
        iVar35 = iVar33 + iVar34 + iVar35;
        iVar33 = fastfunc::FastDoubleToInt((double)*(float *)&param_5->setByGroup);
        iVar35 = iVar35 - (iVar35 / iVar33) * iVar33;
        iVar33 = fastfunc::FastDoubleToInt((double)*(float *)&param_5->setByGroup);
        iVar33 = (iVar35 - iVar31) + iVar33;
        iVar31 = fastfunc::FastDoubleToInt((double)*(float *)&param_5->setByGroup);
        iVar34 = fastfunc::FastDoubleToInt((double)(*(float *)&param_5->setByGroup * 0.1));
        uVar22._0_1_ = param_5->levelFlagIdx;
        uVar22._1_1_ = param_5->field74_0xb1;
        uVar22._2_2_ = param_5->uid;
        MB_SetAnimation(param_4,uVar22,iVar35,(iVar33 - (iVar33 / iVar31) * iVar31) + iVar34);
        iVar31 = 0;
        pMVar43 = param_5;
        do {
          if (pMVar43[1].collCount != 0) {
            *(undefined4 *)(pMVar43[1].collCount + 8) = 0;
          }
          if (*(char *)((int)&pMVar43[1].pAnimationLayers + 1) != '\0') {
            fastfunc::FastQuaternionToEuler(dVar53,&pMVar43[1].field43_0x70,2);
          }
          iVar31 = iVar31 + 1;
          pMVar43[1].pos.y = 0.0;
          pMVar43 = (MobyInstance *)&pMVar43->collCount;
        } while (iVar31 < 2);
        ppMVar47 = (Manipulator **)0x0;
        param_5->updateId = '\0';
        param_5->animationId = '\x02';
        dVar64 = (double)(float)((double)(float)(dVar64 / (double)(float)param_5->pManipulators) *
                                (double)*(float *)&param_5->field76_0xb4);
        param_4->unk58 = ABS((float)(dVar64 / (double)*(float *)&param_5->field76_0xb4));
      }
    }
    else {
      param_5->updateId = '\0';
      param_5->animationId = '\0';
    }
  }
  else if (((((sVar18 < 3) &&
             (uVar23._0_1_ = param_5->levelFlagIdx, uVar23._1_1_ = param_5->field74_0xb1,
             uVar23._2_2_ = param_5->uid, param_4->updateId == uVar23)) &&
            (dVar64 < (double)((float)param_5->pManipulators * 1.15))) &&
           ((dVar64 < (double)((float)param_5->pManipulators * 1.05) || (param_6 == 0)))) &&
          (param_2 < dVar66)) {
    iVar31 = fastfunc::FastDoubleToInt
                       ((double)((((float)(dVar51 - (double)(param_5->transform).v3.x) /
                                  *(float *)&param_5->setByGroup) *
                                  (float)param_5->pCurrentAnimationData + (float)param_5->collCount)
                                - (float)param_5->pPreviousAnimationData));
    iVar33 = fastfunc::FastDoubleToInt((double)(float)param_5->pCurrentAnimationData);
    iVar33 = iVar31 + iVar33 + 4;
    iVar31 = fastfunc::FastDoubleToInt((double)(float)param_5->pCurrentAnimationData);
    MB_SetAnimation(param_4,param_5->pAnimationLayers,iVar33 - (iVar33 / iVar31) * iVar31,10);
    iVar31 = 0;
    pMVar43 = param_5;
    do {
      if (pMVar43[1].collCount != 0) {
        *(undefined4 *)(pMVar43[1].collCount + 8) = 0;
      }
      if (*(char *)((int)&pMVar43[1].pAnimationLayers + 1) != '\0') {
        fastfunc::FastQuaternionToEuler(dVar53,&pMVar43[1].field43_0x70,2);
      }
      iVar31 = iVar31 + 1;
      pMVar43[1].pos.y = 0.0;
      pMVar43 = (MobyInstance *)&pMVar43->collCount;
    } while (iVar31 < 2);
    ppMVar47 = (Manipulator **)0x0;
    param_5->updateId = '\0';
    param_5->animationId = '\x01';
    dVar64 = (double)(float)((double)(float)(dVar64 / (double)*(float *)&param_5->field76_0xb4) *
                            (double)(float)param_5->pManipulators);
    param_4->unk58 = ABS((float)(dVar64 / (double)(float)param_5->pManipulators));
  }
  (param_4->pos).x = (float)((double)(param_4->pos).x + dVar52);
  (param_4->pos).y = (float)((double)(param_4->pos).y + dVar54);
  (param_4->pos).z = (float)((double)(param_4->pos).z + dVar57);
  mobyfunc::MB_GetCollPrimWorld
            (param_4,0,uVar28 - 0x1a8,uVar28 - 0x2c0,uVar28 - 0x1b0,uVar28 - 0x1ac);
  dVar51 = (double)((param_4->pos).x - *(float *)(puVar24 + 0xe));
  dVar65 = (double)((param_4->pos).y - *(float *)((int)puVar24 + 0x74));
  dVar57 = (double)((param_4->pos).z - *(float *)(puVar24 + 0xf));
  do {
    iVar31 = collproc::CollPill((double)*(float *)(puVar24 + 0x30),
                                (double)*(float *)((int)puVar24 + 0x184),uVar28 - 0x2c0);
    fVar8 = CollOutput.push.y;
    if (iVar31 == 0) break;
    iVar42 = iVar42 + 1;
    uVar48 = uVar48 | 1;
    *(float *)(puVar24 + 0xe) = CollOutput.push.x;
    fVar2 = CollOutput.push.z;
    *(float *)((int)puVar24 + 0x74) = fVar8;
    fVar8 = CollOutput.push.w;
    *(float *)(puVar24 + 0xf) = fVar2;
    *(float *)((int)puVar24 + 0x7c) = fVar8;
  } while (iVar42 < 8);
  fVar7 = *(float *)((int)puVar24 + 0x74);
  fVar12 = *(float *)(puVar24 + 0xe);
  fVar8 = (float)((double)fVar7 - (double)(param_4->pos).y);
  fVar2 = (float)((double)fVar12 - (double)(param_4->pos).x);
  fVar11 = *(float *)(puVar24 + 0xf);
  (param_4->pos).w = *(f32 *)((int)puVar24 + 0x7c);
  (param_4->pos).x = (float)((double)fVar12 + dVar51);
  (param_4->pos).y = (float)((double)fVar7 + dVar65);
  (param_4->pos).z = (float)((double)fVar11 + dVar57);
  if (SQRT(fVar2 * fVar2 + fVar8 * fVar8) <
      (float)((double)SQRT((float)(dVar52 * dVar52 + (double)(float)(dVar54 * dVar54))) * dVar66)) {
    uVar48 = uVar48 | 2;
  }
  bVar5 = *(byte *)((int)&param_5[1].pos.x + 1);
  *(uint *)(puVar24 + 0x36) = (uint)*(byte *)&param_5[1].pos.x;
  bVar6 = param_5[1].levelFlagIdx;
  *(uint *)((int)puVar24 + 0x1b4) = (uint)bVar5;
  bVar5 = param_5[1].field74_0xb1;
  *(uint *)(puVar24 + 0x37) = (uint)bVar6;
  fVar32 = param_5[1].bSphere.z;
  *(uint *)((int)puVar24 + 0x1bc) = (uint)bVar5;
  *(f32 *)(puVar24 + 0x38) = fVar32;
  mobyfunc::GetMobyJointsWorldPos(param_4,5,uVar28 - 0x180,param_5);
  dVar51 = (double)param_5[1].bSphere.x;
  bVar5 = param_4->animationId;
  uVar19 = *(ushort *)&param_5->frameSpeed;
  if (((uVar46 & 0xf) != 0) && (param_4->unk58 != 0.0)) {
    dVar65 = (double)(param_4->rotation).z;
    dVar67 = (double)(float)(dVar65 + dVar62);
    dVar57 = (double)(float)(dVar55 - dVar65);
    if (dVar65 - (double)(float)(dVar55 - dVar65) < 0.0) {
      dVar57 = dVar65;
    }
    dVar68 = (double)(float)(dVar55 - dVar67);
    if (dVar67 - (double)(float)(dVar55 - dVar67) < 0.0) {
      dVar68 = dVar67;
    }
    dVar69 = (double)(float)(dVar61 - dVar65);
    if ((double)(float)(dVar61 - dVar65) - dVar57 < 0.0) {
      dVar69 = dVar57;
    }
    dVar57 = (double)(float)(dVar61 - dVar67);
    if ((double)(float)(dVar61 - dVar67) - dVar68 < 0.0) {
      dVar57 = dVar68;
    }
    dVar65 = (double)(float)(dVar69 * dVar69);
    dVar67 = (double)(float)(dVar57 * dVar57);
    dVar73 = (double)(float)(dVar65 * (double)(float)(dVar65 * dVar69));
    dVar68 = (double)(float)(dVar67 * (double)(float)(dVar67 * dVar57));
    dVar71 = (double)(float)(dVar65 * dVar73);
    dVar62 = (double)(float)(dVar67 * dVar68);
    if (dVar51 - dVar53 < 0.0) {
      dVar51 = dVar53;
    }
    param_5[1].bSphere.x =
         (float)((double)(float)(dVar51 + (double)((float)((double)(float)((double)(float)(dVar67 * 
                                                  dVar62) * dVar74 +
                                                  (double)(float)(dVar62 * dVar72 +
                                                                 (double)(float)(dVar68 * dVar70 +
                                                                                (double)(float)((
                                                  double)(float)(dVar67 * dVar57) * dVar63 + dVar57)
                                                  ))) * dVar52 +
                                                  (double)(float)((double)(float)((double)(float)(
                                                  dVar65 * dVar71) * dVar74 +
                                                  (double)(float)(dVar71 * dVar72 +
                                                                 (double)(float)(dVar73 * dVar70 +
                                                                                (double)(float)((
                                                  double)(float)(dVar65 * dVar69) * dVar63 + dVar69)
                                                  ))) * dVar54)) / param_4->unk58)) + dVar51) *
         0.33333334;
  }
  if (bVar5 == uVar19) {
    param_4->unk58 = 1.0;
  }
  else if (ppMVar47 != (Manipulator **)0x0) {
    param_4->unk58 = ABS((float)(dVar64 / (double)(float)ppMVar47[1]));
  }
  return uVar48;
}



//==== 00103710  ns=mobyutil  size=0x3a0
// sig: undefined MB_UpdateLegAnimMoveTurning(undefined8 param_1, MobyInstance * param_2, undefined8 param_3, undefined4 param_4, Vec4 * param_5)
// callers(0): 
// callees(4): 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00102168 mobyutil::MB_UpdateLegAnimState; 004fff60 fastfunc::FastDecTimerS32; 005026a0 fastfunc::FastSubRots

uint mobyutil::MB_UpdateLegAnimMoveTurning
               (undefined8 param_1,MobyInstance *param_2,ulonglong param_3,MobyInstance *param_4,
               Vec4 *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  int iVar10;
  float fVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  float *pfVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  uint uVar21;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  ulonglong in_f29;
  double dVar24;
  ulonglong in_f30;
  ulonglong in_f31;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x100;
  puVar9 = (ulonglong *)lVar15;
  *puVar9 = uVar13;
  puVar9[0x22] = in_LR;
  puVar9[0x1d] = in_f29;
  puVar9[0x1e] = in_f30;
  puVar9[0x1f] = in_f31;
  fVar1 = param_5->x - (param_2->pos).x;
  fVar2 = param_5->y - (param_2->pos).y;
  puVar9[0x18] = unaff_r27;
  puVar9[0x17] = unaff_r26;
  uVar21 = 0;
  puVar9[0x1c] = unaff_r31;
  fVar4 = ABS(fVar1);
  fVar3 = ABS(fVar2);
  *(float *)(puVar9 + 0xe) = fVar1;
  puVar9[0x1b] = unaff_r30;
  *(float *)((int)puVar9 + 0x74) = fVar2;
  puVar9[0x1a] = unaff_r29;
  puVar9[0x19] = unaff_r28;
  *(float *)(puVar9 + 0xf) = fVar4 - fVar3;
  dVar24 = 0.0;
  iVar10 = (int)param_3;
  fVar1 = *(float *)(iVar10 + 0x3c);
  fVar2 = *(float *)(iVar10 + 0x40);
  uVar20 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
  fVar5 = ABS(*(float *)(puVar9 + 0xe));
  if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
    fVar5 = fVar3;
  }
  fVar3 = *(float *)(iVar10 + 0x44);
  fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
  fVar11 = ABS(*(float *)((int)puVar9 + 0x74));
  if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
    fVar11 = fVar4;
  }
  fVar4 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  uVar20 = param_3;
  dVar23 = dVar24;
  if (0.0 < fVar5) {
    lVar14 = uVar13 - 0xf0;
    lVar19 = uVar13 - 0x74;
    lVar17 = uVar13 - 0x84;
    lVar22 = 2;
    fVar5 = (fVar11 - fVar5) / (fVar11 + fVar5);
    fVar11 = fVar5 * fVar5;
    *(float *)(puVar9 + 0x11) = fVar5;
    *(float *)(puVar9 + 0x10) = fVar5;
    *(float *)((int)puVar9 + 0x84) = fVar5;
    *(float *)((int)puVar9 + 0x7c) = fVar5;
    fVar5 = fVar11 * fVar11;
    *(float *)(puVar9 + 0x10) = *(float *)(puVar9 + 0x10) * fVar11;
    *(float *)((int)puVar9 + 0x84) = *(float *)((int)puVar9 + 0x84) * fVar5;
    *(float *)(puVar9 + 0x11) = *(float *)(puVar9 + 0x11) * fVar5 * fVar11;
    do {
      *(float *)((int)lVar14 + 0x7c) = *(float *)((int)lVar14 + 0x6c) * fVar5 * fVar5;
      iVar7 = (int)lVar17;
      lVar17 = lVar17 + 8;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)(iVar7 + 4) * fVar5 * fVar5;
      lVar19 = lVar19 + 8;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    lVar22 = 4;
    lVar19 = uVar13 - 0x84;
    uVar20 = ZEXT48(&DAT_007358e0);
    lVar14 = lVar15;
    lVar17 = lVar19;
    do {
      pfVar18 = (float *)uVar20;
      fVar5 = pfVar18[1];
      uVar20 = uVar20 + 8;
      *(float *)((int)lVar14 + 0x7c) = *(float *)((int)lVar14 + 0x7c) * *pfVar18;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar5;
      lVar17 = lVar17 + 8;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    lVar14 = 2;
    do {
      iVar7 = (int)lVar15;
      iVar12 = (int)lVar19;
      lVar15 = lVar15 + 0x10;
      lVar19 = lVar19 + 0x10;
      dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar7 + 0x7c)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar6 + fVar4);
  }
  OrganicDeltAngSpeed(dVar23,(double)fVar1,(double)fVar2,(double)fVar3,param_2,uVar20,param_3 + 0x14
                     );
  dVar23 = (double)fastfunc::FastSubRots((float)dVar23,(param_2->rotation).z);
  if ((double)*(float *)(iVar10 + 0x28) <= dVar23) {
    uVar21 = 0x10;
  }
  fastfunc::FastDecTimerS32(param_3 + 0x48);
  iVar7 = *(int *)(iVar10 + 0x48);
  if (dVar23 < (double)*(float *)(iVar10 + 0x28)) {
    auVar25 = ZEXT416(0xffffffff);
    auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
    auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
    auVar25 = loadVectorLeftIndexed(8,0x1036f8);
    auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar27 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar25 = vectorMultiplyAddFloatingPoint
                        (auVar27,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                         auVar26);
    auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
    puVar9[0x14] = (longlong)(int)(animationSpeed * 4.5);
    if (iVar7 < *(int *)((int)puVar9 + 0xa4)) {
      auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x48,param_3)
      ;
      *(undefined4 *)(iVar10 + 0x48U & 0xfffffffc) = uVar8;
    }
  }
  uVar16 = MB_UpdateLegAnimState(param_1,0x3fd3333340000000,dVar24,param_2,param_4,1);
  if (0.10000000149011612 < dVar23) {
    uVar16 = uVar16 & 0xfffffffd;
  }
  uVar21 = uVar21 | uVar16;
  fVar2 = (param_2->pos).y - param_5->y;
  fVar1 = (param_2->pos).x - param_5->x;
  fVar5 = (param_2->pos).z - param_5->z;
  if (SQRT(fVar5 * fVar5 + fVar1 * fVar1 + fVar2 * fVar2) < *(float *)(iVar10 + 0x2c)) {
    uVar21 = uVar21 | 4;
  }
  return uVar21;
}



//==== 00103ab0  ns=mobyutil  size=0x54
// sig: undefined MB_LerpRot(void)
// callers(4): 00042b48 camera::camera21::UpdateCamera_21; 0026a268 mobyupdate_unsorted::UpdateMoby_1395; 00413870 mobyupdate_helpers::M685_00413870; 004b5bd8 mobyupdate_unsorted::UpdateMoby_922
// callees(2): 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

void mobyutil::MB_LerpRot(double param_1,undefined8 param_2,double param_3)

{
  double dVar1;
  
  dVar1 = (double)fastfunc::FastDiffRots(param_2,param_1);
  fastfunc::FastWrapRot((float)param_1,(float)(param_3 * dVar1));
  return;
}



//==== 00103b50  ns=mobyutil  size=0x6c4
// sig: undefined MB_OrbitAndFaceTarget(undefined8 param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined8 param_6, undefined8 param_7, Vec4 * param_8)
// callers(0): 
// callees(5): 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00101058 mobyutil::MB_UpdateNavMove; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots

ulonglong mobyutil::MB_OrbitAndFaceTarget
                    (double param_1,double param_2,MobyInstance *param_3,MobyInstance *param_4,
                    float *param_5,undefined8 param_6,undefined8 param_7,Vec4 *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar18;
  longlong lVar17;
  ulonglong uVar19;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong uVar20;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x140;
  puVar9 = (ulonglong *)lVar15;
  *puVar9 = uVar13;
  puVar9[0x2a] = in_LR;
  puVar9[0x23] = in_f27;
  puVar9[0x24] = in_f28;
  puVar9[0x25] = in_f29;
  puVar9[0x26] = in_f30;
  puVar9[0x27] = in_f31;
  fVar1 = (float)(param_1 + 1.570796251296997);
  puVar9[0x1e] = unaff_r27;
  puVar9[0x22] = unaff_r31;
  uVar20 = 0;
  puVar9[0x1c] = unaff_r25;
  puVar9[0x21] = unaff_r30;
  dVar24 = (double)(float)(3.141592502593994 - param_1);
  if (param_1 - (double)(float)(3.141592502593994 - param_1) < 0.0) {
    dVar24 = param_1;
  }
  puVar9[0x20] = unaff_r29;
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  puVar9[0x1f] = unaff_r28;
  dVar23 = (double)(float)(-3.141592502593994 - param_1);
  if ((double)(float)(-3.141592502593994 - param_1) - dVar24 < 0.0) {
    dVar23 = dVar24;
  }
  fVar5 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar5 = fVar2;
  }
  dVar24 = (double)(float)(dVar23 * dVar23);
  fVar7 = fVar5 * fVar5;
  dVar26 = (double)(float)(dVar24 * (double)(float)(dVar24 * dVar23));
  fVar3 = param_5[2];
  fVar4 = param_5[3];
  fVar2 = fVar7 * fVar7 * fVar5;
  dVar25 = (double)(float)(dVar24 * dVar26);
  fVar6 = fVar7 * fVar2;
  fVar1 = (float)((double)((float)(dVar24 * dVar25) * 2.601887e-06 +
                          (float)(dVar25 * -0.0001980741071747616 +
                                 (double)(float)(dVar26 * 0.008333025500178337 +
                                                (double)(float)((double)(float)(dVar24 * dVar23) *
                                                                -0.16666656732559204 + dVar23)))) *
                  param_2 + (double)param_5[1]);
  fVar2 = (float)((double)(fVar7 * fVar6 * 2.601887e-06 +
                          fVar6 * -0.0001980741 +
                          fVar2 * 0.0083330255 + fVar7 * fVar5 * -0.16666657 + fVar5) * param_2 +
                 (double)*param_5);
  *(float *)((int)puVar9 + 0x74) = fVar1;
  dVar24 = 0.0;
  param_8->w = 0.0;
  param_8->z = 0.0;
  param_8->y = 0.0;
  param_8->x = 0.0;
  fVar5 = (param_3->pos).x;
  fVar6 = (param_3->pos).y;
  fVar7 = fVar2 - fVar5;
  fVar1 = fVar1 - fVar6;
  fVar12 = ABS(fVar7);
  fVar8 = ABS(fVar1);
  *(float *)((int)puVar9 + 0x8c) = fVar7;
  *(float *)(puVar9 + 0x12) = fVar1;
  *(float *)(puVar9 + 0xe) = fVar2;
  *(float *)((int)puVar9 + 0x94) = fVar12 - fVar8;
  *(float *)((int)puVar9 + 0x7c) = fVar4;
  *(float *)(puVar9 + 0xf) = fVar3;
  fVar1 = *param_5;
  fVar2 = param_5[1];
  uVar19 = (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1d) & 4;
  fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
  fVar4 = ABS(*(float *)((int)puVar9 + 0x8c));
  if (*(float *)((int)puVar9 + 0x94) - 0.0 < 0.0) {
    fVar4 = fVar8;
  }
  fVar7 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
  fVar8 = ABS(*(float *)(puVar9 + 0x12));
  if (*(float *)((int)puVar9 + 0x94) - 0.0 < 0.0) {
    fVar8 = fVar12;
  }
  puVar9[0x1d] = unaff_r26;
  dVar23 = dVar24;
  if (0.0 < fVar4) {
    lVar14 = uVar13 - 0x130;
    lVar16 = uVar13 - 0x88;
    lVar17 = uVar13 - 0x78;
    lVar21 = 2;
    fVar4 = (fVar8 - fVar4) / (fVar8 + fVar4);
    fVar8 = fVar4 * fVar4;
    *(float *)((int)puVar9 + 0xc4) = fVar4;
    *(float *)((int)puVar9 + 0xbc) = fVar4;
    *(float *)(puVar9 + 0x18) = fVar4;
    *(float *)(puVar9 + 0x17) = fVar4;
    fVar4 = fVar8 * fVar8;
    *(float *)((int)puVar9 + 0xbc) = *(float *)((int)puVar9 + 0xbc) * fVar8;
    *(float *)(puVar9 + 0x18) = *(float *)(puVar9 + 0x18) * fVar4;
    *(float *)((int)puVar9 + 0xc4) = *(float *)((int)puVar9 + 0xc4) * fVar4 * fVar8;
    do {
      *(float *)((int)lVar14 + 0xb8) = *(float *)((int)lVar14 + 0xa8) * fVar4 * fVar4;
      iVar10 = (int)lVar16;
      lVar14 = lVar14 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar10 + 4) * fVar4 * fVar4;
      lVar17 = lVar17 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar21 = 4;
    lVar17 = uVar13 - 0x88;
    pfVar18 = (float *)&DAT_007358e0;
    lVar14 = lVar15;
    lVar16 = lVar17;
    do {
      fVar4 = *pfVar18;
      fVar8 = pfVar18[1];
      pfVar18 = pfVar18 + 2;
      *(float *)((int)lVar14 + 0xb8) = *(float *)((int)lVar14 + 0xb8) * fVar4;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar8;
      lVar16 = lVar16 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar16 = 2;
    lVar14 = lVar15;
    do {
      iVar10 = (int)lVar14;
      lVar14 = lVar14 + 0x10;
      iVar11 = (int)lVar17;
      lVar17 = lVar17 + 0x10;
      dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar10 + 0xb8)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar3 + fVar7);
  }
  fVar5 = fVar5 - fVar1;
  fVar6 = fVar6 - fVar2;
  fVar3 = ABS(fVar5);
  fVar2 = ABS(fVar6);
  *(float *)(puVar9 + 0x10) = fVar5;
  *(float *)((int)puVar9 + 0x84) = fVar6;
  *(float *)(puVar9 + 0x11) = fVar3 - fVar2;
  uVar19 = (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1d) & 4;
  fVar1 = ABS(*(float *)(puVar9 + 0x10));
  if (*(float *)(puVar9 + 0x11) - 0.0 < 0.0) {
    fVar1 = fVar2;
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
  fVar5 = ABS(*(float *)((int)puVar9 + 0x84));
  if (*(float *)(puVar9 + 0x11) - 0.0 < 0.0) {
    fVar5 = fVar3;
  }
  fVar3 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
  dVar25 = dVar24;
  if (0.0 < fVar1) {
    lVar14 = uVar13 - 0x130;
    lVar17 = uVar13 - 0x98;
    lVar16 = uVar13 - 0xa8;
    lVar21 = 2;
    fVar1 = (fVar5 - fVar1) / (fVar5 + fVar1);
    fVar5 = fVar1 * fVar1;
    *(float *)((int)puVar9 + 0xa4) = fVar1;
    *(float *)((int)puVar9 + 0x9c) = fVar1;
    *(float *)(puVar9 + 0x14) = fVar1;
    *(float *)(puVar9 + 0x13) = fVar1;
    fVar1 = fVar5 * fVar5;
    *(float *)((int)puVar9 + 0x9c) = *(float *)((int)puVar9 + 0x9c) * fVar5;
    *(float *)(puVar9 + 0x14) = *(float *)(puVar9 + 0x14) * fVar1;
    *(float *)((int)puVar9 + 0xa4) = *(float *)((int)puVar9 + 0xa4) * fVar1 * fVar5;
    do {
      *(float *)((int)lVar14 + 0x98) = *(float *)((int)lVar14 + 0x88) * fVar1 * fVar1;
      iVar10 = (int)lVar16;
      lVar16 = lVar16 + 8;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar10 + 4) * fVar1 * fVar1;
      lVar17 = lVar17 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar21 = 4;
    lVar17 = uVar13 - 0xa8;
    pfVar18 = (float *)&DAT_007358e0;
    lVar14 = lVar15;
    lVar16 = lVar17;
    do {
      fVar1 = *pfVar18;
      fVar5 = pfVar18[1];
      pfVar18 = pfVar18 + 2;
      *(float *)((int)lVar14 + 0x98) = *(float *)((int)lVar14 + 0x98) * fVar1;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
      lVar16 = lVar16 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar14 = 2;
    do {
      iVar10 = (int)lVar15;
      iVar11 = (int)lVar17;
      lVar15 = lVar15 + 0x10;
      lVar17 = lVar17 + 0x10;
      dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar10 + 0x98)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar26 = (double)fastfunc::FastSubRots((float)param_1,(float)dVar25);
  fVar1 = (param_3->pos).x;
  fVar2 = *param_5;
  fVar5 = (param_3->pos).y;
  fVar3 = param_5[1];
  if (param_2 < (double)SQRT((fVar1 - fVar2) * (fVar1 - fVar2) + (fVar5 - fVar3) * (fVar5 - fVar3)))
  {
    dVar25 = (double)fastfunc::FastWrapRot((float)dVar25,3.1415927);
    fVar1 = (param_3->pos).x;
    fVar2 = *param_5;
    fVar5 = (param_3->pos).y;
    fVar3 = param_5[1];
  }
  dVar22 = ABS((double)(float)((double)(float)(param_2 -
                                              (double)SQRT((fVar1 - fVar2) * (fVar1 - fVar2) +
                                                           (fVar5 - fVar3) * (fVar5 - fVar3))) /
                              param_2));
  if (1.0 - dVar22 < 0.0) {
    dVar22 = 1.0;
  }
  if (dVar22 - dVar24 < 0.0) {
    dVar22 = dVar24;
  }
  if (0.3490658402442932 <= dVar26) {
    dVar23 = (double)fastfunc::FastDiffRots(param_1,dVar25);
    if (dVar23 <= dVar24) {
      dVar23 = (double)fastfunc::FastWrapRot((float)dVar25,-1.5707964);
      dVar24 = dVar22;
    }
    else {
      dVar23 = (double)fastfunc::FastWrapRot((float)dVar25,1.5707964);
      dVar24 = dVar22;
    }
  }
  dVar25 = (double)fastfunc::FastDiffRots(dVar25,dVar23);
  dVar24 = (double)fastfunc::FastWrapRot((float)dVar23,(float)(dVar24 * dVar25));
  OrganicDeltAngSpeed(dVar24,(double)(DAT_0071f40c * 0.02),(double)(DAT_0071f408 * 0.3),
                      (double)(DAT_0071f408 * 0.15),param_3,&DAT_00720000,
                      (longlong)(int)param_4 + 0x14);
  dVar24 = (double)fastfunc::FastSubRots((float)dVar24,(param_3->rotation).z);
  dVar23 = (double)(float)param_4->pChain;
  if ((dVar24 < dVar23) &&
     (uVar20 = MB_UpdateNavMove((double)(float)((double)(float)(dVar23 - dVar24) / dVar23),param_3,
                                param_4,puVar9 + 0xe,param_8), 0.10000000149011612 < dVar24)) {
    uVar20 = uVar20 & 0xfffffffffffffffd;
  }
  return uVar20;
}



//==== 00104214  ns=mobyutil  size=0x84
// sig: undefined MB_CountActiveMobysByGroup(undefined8 group, undefined4 state)
// callers(20): 00190d60 mobyupdate_unsorted::UpdateMoby_1032; 001a5f50 mobyupdate_unsorted::UpdateMoby_1051; 001c96c0 mobyupdate_unsorted::UpdateMoby_1108; 00254048 mobyupdate_unsorted::UpdateMoby_1348; 00255258 mobyupdate_unsorted::UpdateMoby_1350; 00267af8 mobyupdate_unsorted::UpdateMoby_{1389_1446}; 00298cec mobyupdate_unsorted::UpdateMoby_1559; 002bb840 mobyupdate_unsorted::UpdateMoby_1805; 002ce4ac mobyupdate_helpers::M1885_002ce4ac; 002ce590 mobyupdate_unsorted::UpdateMoby_1885; 00301d00 mobyupdate_unsorted::UpdateMoby_233; 00306c48 mobyupdate_helpers::M238_00306c48; 0030c010 mobyupdate_unsorted::UpdateMoby_240; 00332560 mobyupdate_helpers::M294_00332560; 003688a8 mobyupdate_unsorted::UpdateMoby_422; 003a14a8 mobyupdate_unsorted::UpdateMoby_491; 003eca78 mobyupdate_unsorted::UpdateMoby_63; 004030c8 mobyupdate_unsorted::UpdateMoby_654; 0046d7c0 mobyupdate_unsorted::UpdateMoby_815; 004bcd20 mobyupdate_unsorted::UpdateMoby_931
// callees(0): 

int mobyutil::MB_CountActiveMobysByGroup(longlong group,uint state)

{
  ushort *mobyidx;
  int cnt;
  ushort next;
  
  mobyidx = *(ushort **)((int)&g_MobyGroups + (int)(group << 2));
  if (mobyidx == (ushort *)0x0) {
    cnt = 0;
  }
  else {
    cnt = 0;
    do {
      if ((MobyInstance[*mobyidx & 0x7fff].state < 0x80) &&
         ((state == 0xffffffff || (MobyInstance[*mobyidx & 0x7fff].state != state)))) {
        cnt = cnt + 1;
      }
      next = *mobyidx;
      mobyidx = mobyidx + 1;
    } while (-1 < (short)next);
  }
  return cnt;
}



//==== 00104298  ns=mobyutil  size=0x54
// sig: undefined MB_SetGroupField(undefined8 group, undefined1 arg)
// callers(21): 0018e048 mobyupdate_helpers::M1027_0018e048; 0018e9f8 mobyupdate_unsorted::UpdateMoby_1027; 001b2480 mobyupdate_unsorted::UpdateMoby_1069; 00233180 mobyupdate_unsorted::UpdateMoby_1266; 002dc568 mobyupdate_unsorted::UpdateMoby_193; 00305940 mobyupdate_helpers::M238_00305940; 00306c48 mobyupdate_helpers::M238_00306c48; 00307270 mobyupdate_unsorted::UpdateMoby_238; 00332560 mobyupdate_helpers::M294_00332560; 00332c38 mobyupdate_unsorted::UpdateMoby_294; 003a9af8 mobyupdate_helpers::M52_003a9af8; 003aa5f0 mobyupdate_unsorted::UpdateMoby_52; 003c0528 mobyupdate_helpers::M573_003c0528; 003c8a10 mobyupdate_unsorted::UpdateMoby_577; 003eca78 mobyupdate_unsorted::UpdateMoby_63; 0043a188 mobyupdate_unsorted::UpdateMoby_739; 004403e8 mobyupdate_unsorted::UpdateMoby_740; 00451730 mobyupdate_helpers::M763_00451730; 00451bc8 mobyupdate_unsorted::UpdateMoby_763; 004a20d8 mobyupdate_unsorted::UpdateMoby_886; 004a58e8 mobyupdate_unsorted::UpdateMoby_a_lot_2
// callees(0): 

void mobyutil::MB_SetGroupField(longlong group,char arg)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)((int)&g_MobyGroups + (int)(group << 2));
  if (puVar2 != (ushort *)0x0) {
    do {
      MobyInstance[*puVar2 & 0x7fff].setByGroup = arg;
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}



//==== 001042ec  ns=mobyutil  size=0x60
// sig: undefined MB_SetStateByGroup(undefined8 group, undefined1 state)
// callers(18): 001a7c58 mobyupdate_unsorted::UpdateMoby_1054; 001b4378 mobyupdate_unsorted::UpdateMoby_1072; 001d05f0 mobyupdate_unsorted::UpdateMoby_1110; 001da9f8 mobyupdate_helpers::M1135_001da9f8; 001daee8 mobyupdate_unsorted::UpdateMoby_1135; 001e3720 mobyupdate_unsorted::UpdateMoby_1158; 001fff88 mobyupdate_unsorted::UpdateMoby_1209; 00249498 mobyupdate_unsorted::UpdateMoby_1323; 003002f8 mobyupdate_unsorted::UpdateMoby_231; 003d5588 mobyupdate_unsorted::UpdateMoby_6; 0047efa0 mobyupdate_unsorted::UpdateMoby_831; 0048ecd0 mobyupdate_unsorted::UpdateMoby_855; 00499c40 mobyupdate_unsorted::UpdateMoby_867; 0049dda0 mobyupdate_unsorted::UpdateMoby_871; 004a1688 mobyupdate_helpers::M936_004a1688; 004a1708 mobyupdate_unsorted::UpdateMoby_a_lot_22; 004a20d8 mobyupdate_unsorted::UpdateMoby_886; 004a58e8 mobyupdate_unsorted::UpdateMoby_a_lot_2
// callees(0): 

void mobyutil::MB_SetStateByGroup(longlong group,u8 state)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)((int)&g_MobyGroups + (int)(group << 2));
  if (puVar2 != (ushort *)0x0) {
    do {
      if (MobyInstance[*puVar2 & 0x7fff].state < 0x80) {
        MobyInstance[*puVar2 & 0x7fff].state = state;
      }
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}



//==== 0010434c  ns=mobyutil  size=0xe4
// sig: void MB_SetGroupActive(int group, int update, int enable, int collision)
// callers(8): 00264238 mobyupd::update1379::UpdateMoby_1379_JetFighterFleet; 00284c20 mobyupdate_helpers::M1455_00284c20; 00284d00 mobyupdate_helpers::M1455_00284d00; 00284e60 mobyupdate_unsorted::UpdateMoby_1455; 0041dad8 mobyupdate_unsorted::UpdateMoby_69; 004bb840 mobyupdate_helpers::M990_004bb840; 004bb8b8 mobyupdate_helpers::M990_004bb8b8; 004bb948 mobyupdate_unsorted::UpdateMoby_930
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void mobyutil::MB_SetGroupActive(int group,int update,int enable,int collision)

{
  ushort uVar1;
  uint uVar2;
  MobyInstance *pMVar3;
  ushort *puVar4;
  MobyModeBit MVar5;
  
  puVar4 = *(ushort **)((int)&g_MobyGroups + (int)((longlong)group << 2));
  if (puVar4 != (ushort *)0x0) {
    do {
      pMVar3 = MobyInstance;
      uVar2 = *puVar4 & 0x7fff;
      if (MobyInstance[uVar2].state < 0x80) {
        if (update != -1) {
          if (update == 0) {
            MVar5 = MobyInstance[uVar2].modeBits | NO_UPDATE;
          }
          else {
            MVar5 = MobyInstance[uVar2].modeBits &
                    (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                     DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|
                     HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|DISABLED);
          }
          MobyInstance[uVar2].modeBits = MVar5;
        }
        if (enable != -1) {
          if (enable == 0) {
            pMVar3[uVar2].enabled = '\0';
            pMVar3[uVar2].modeBits = pMVar3[uVar2].modeBits | DISABLED;
          }
          else {
            pMVar3[uVar2].enabled = '\x01';
            pMVar3[uVar2].modeBits =
                 pMVar3[uVar2].modeBits &
                 (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                  DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                  HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
          }
        }
        if (collision != -1) {
          if (collision == 0) {
            pMVar3[uVar2].collision = (ushort *)0x0;
          }
          else {
            pMVar3[uVar2].collision = (pMVar3[uVar2].pClass)->collision;
          }
        }
      }
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}



//==== 00104430  ns=mobyutil  size=0xd4
// sig: void MB_SetClassActive(MOBY_OCLASSES oClass, int update, int enable, int collision)
// callers(1): 00264238 mobyupd::update1379::UpdateMoby_1379_JetFighterFleet
// callees(0): 

void mobyutil::MB_SetClassActive(MOBY_OCLASSES oClass,int update,int enable,int collision)

{
  MobyInstance *pMVar1;
  MobyModeBit MVar2;
  
  pMVar1 = MobyInstance;
  if (MobyInstance <= MobyInstanceEnd) {
    do {
      if ((pMVar1->oClass == oClass) && (pMVar1->state < 0x80)) {
        if (update != -1) {
          if (update == 0) {
            MVar2 = pMVar1->modeBits | NO_UPDATE;
          }
          else {
            MVar2 = pMVar1->modeBits &
                    (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                     DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|
                     HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|DISABLED);
          }
          pMVar1->modeBits = MVar2;
        }
        if (enable != -1) {
          if (enable == 0) {
            pMVar1->enabled = '\0';
            pMVar1->modeBits = pMVar1->modeBits | DISABLED;
          }
          else {
            pMVar1->enabled = '\x01';
            pMVar1->modeBits =
                 pMVar1->modeBits &
                 (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                  DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                  HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
          }
        }
        if (collision != -1) {
          if (collision == 0) {
            pMVar1->collision = (ushort *)0x0;
          }
          else {
            pMVar1->collision = pMVar1->pClass->collision;
          }
        }
      }
      pMVar1 = pMVar1 + 1;
    } while (pMVar1 <= MobyInstanceEnd);
  }
  return;
}



//==== 00104504  ns=mobyutil  size=0x4c
// sig: undefined MB_SetStateForClass(undefined2 oClass, undefined1 state)
// callers(1): 0041dad8 mobyupdate_unsorted::UpdateMoby_69
// callees(0): 

void mobyutil::MB_SetStateForClass(MOBY_OCLASSES oClass,u8 state)

{
  MobyInstance *end;
  MobyInstance *pMoby;
  
  end = MobyInstanceEnd;
  pMoby = MobyInstance;
  if (MobyInstance <= MobyInstanceEnd) {
    do {
      if ((pMoby->oClass == oClass) && (pMoby->state < 0x80)) {
        pMoby->state = state;
        end = MobyInstanceEnd;
      }
      pMoby = pMoby + 1;
    } while (pMoby <= end);
  }
  return;
}



//==== 00104550  ns=mobyutil  size=0x11c
// sig: void MB_SetClassListActive(MOBY_OCLASSES * oClassList, int update, int enable, int collision)
// callers(1): 0041dad8 mobyupdate_unsorted::UpdateMoby_69
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void mobyutil::MB_SetClassListActive(MOBY_OCLASSES *oClassList,int update,int enable,int collision)

{
  MOBY_OCLASSES MVar1;
  MOBY_OCLASSES *pMVar2;
  int iVar3;
  MobyInstance *pMVar4;
  MobyModeBit MVar5;
  
  pMVar4 = MobyInstance;
  if (MobyInstance <= MobyInstanceEnd) {
    do {
      iVar3 = 0;
      for (pMVar2 = oClassList;
          (MVar1 = *pMVar2, MVar1 != RATCHET && ((short)MVar1 < 0x800 && iVar3 < 0xe0));
          pMVar2 = pMVar2 + 1) {
        if ((pMVar4->oClass == MVar1) && (pMVar4->state < 0x80)) {
          if (update != -1) {
            if (update == 0) {
              MVar5 = pMVar4->modeBits | NO_UPDATE;
            }
            else {
              MVar5 = pMVar4->modeBits &
                      (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                       DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|
                       HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|DISABLED);
            }
            pMVar4->modeBits = MVar5;
          }
          if (enable != -1) {
            if (enable == 0) {
              pMVar4->enabled = '\0';
              pMVar4->modeBits = pMVar4->modeBits | DISABLED;
            }
            else {
              pMVar4->enabled = '\x01';
              pMVar4->modeBits =
                   pMVar4->modeBits &
                   (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                    DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS
                    |HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
            }
          }
          if (collision != -1) {
            if (collision == 0) {
              pMVar4->collision = (ushort *)0x0;
            }
            else {
              pMVar4->collision = pMVar4->pClass->collision;
            }
          }
        }
        iVar3 = iVar3 + 1;
      }
      pMVar4 = pMVar4 + 1;
    } while (pMVar4 <= MobyInstanceEnd);
  }
  return;
}



//==== 0010466c  ns=mobyutil  size=0x190
// sig: int MB_GetNextMobyInGroup(MobyInstance * * out, MobyInstance * cur, char includeDead, char deadOnly)
// callers(27): 000a64d0 hero::Hero_HoverboardBoostPads; 00104800 mobyutil::MB_GetFirstMobyInGroup; 0010491c mobyutil::MB_GetOtherMobyInGroup; 00104a28 mobyutil::MB_IsFirstMobyInGroup; 00187b68 mobyupdate_unsorted::UpdateMoby_{1015_1282}; 001a9ef4 mobyupdate_helpers::M1059_001a9ef4; 001aa078 mobyupdate_unsorted::UpdateMoby_1059; 001abec8 mobyupdate_helpers::M1060_001abec8; 001fff88 mobyupdate_unsorted::UpdateMoby_1209; 00204ad0 mobyupdate_helpers::M1212_00204ad0; 002057e8 mobyupdate_helpers::M1973_002057e8; 003002f8 mobyupdate_unsorted::UpdateMoby_231; 00307270 mobyupdate_unsorted::UpdateMoby_238; 003a6388 mobyupdate_helpers::M511_003a6388; 003a7360 mobyupdate_unsorted::UpdateMoby_500_Crate; 003a82b8 mobyupdate_unsorted::UpdateMoby_a_lot_10; 003b39b0 mobyupdate_helpers::M556_003b39b0; 003c220c mobyupdate_helpers::M574_003c220c; 003da868 mobyupdate_unsorted::UpdateMoby_611; 00432258 mobyupdate_helpers::M717_00432258; 004495b8 mobyupdate_unsorted::UpdateMoby_a_lot_20; 0045de88 mobyupdate_helpers::M789_0045de88; 00491998 mobyupdate_helpers::M857_00491998; 00491ae8 mobyupdate_helpers::M857_00491ae8; 00495620 mobyupdate_helpers::M859_00495620
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mobyutil::MB_GetNextMobyInGroup
              (MobyInstance **out,MobyInstance *cur,char includeDead,char deadOnly)

{
  bool bVar1;
  short *psVar2;
  
  *out = (MobyInstance *)0x0;
  if (cur == g_GroupIterMoby) {
    if (*g_GroupIterPtr < 0) {
      return -1;
    }
  }
  else {
    if (g_NumMobyGroups < (int)(uint)(byte)cur->group) {
      return -1;
    }
    if ((&g_MobyGroups)[(byte)cur->group] == 0) {
      g_GroupIterPtr = (short *)0x0;
      g_GroupIterMoby = (MobyInstance *)0x0;
      return -1;
    }
    psVar2 = (short *)((&g_MobyGroups)[(byte)cur->group] + -2);
    do {
      g_GroupIterPtr = psVar2 + 1;
      g_GroupIterIdx = psVar2[1] & 0x7fff;
      g_GroupIterMoby =
           (MobyInstance *)
           ((int)&(MobyInstance->bSphere).x + (int)((longlong)(short)g_GroupIterIdx << 8));
      if (psVar2[1] < 0) {
        return -1;
      }
      psVar2 = g_GroupIterPtr;
    } while (cur != g_GroupIterMoby);
  }
  while( true ) {
    g_GroupIterIdx = g_GroupIterPtr[1] & 0x7fff;
    g_GroupIterMoby =
         (MobyInstance *)
         ((int)&(MobyInstance->bSphere).x + (int)((longlong)(short)g_GroupIterIdx << 8));
    g_GroupIterPtr = g_GroupIterPtr + 1;
    *out = g_GroupIterMoby;
    bVar1 = g_GroupIterMoby->state < 0x80;
    if ((((includeDead == '\0') && (deadOnly == '\0')) && (bVar1)) ||
       ((includeDead != '\0' && ((deadOnly == '\0' || (!bVar1)))))) break;
    if (*g_GroupIterPtr < 0) {
      *out = (MobyInstance *)0x0;
      return -1;
    }
  }
  return 0;
}



//==== 00104800  ns=mobyutil  size=0x118
// sig: int MB_GetFirstMobyInGroup(MobyInstance * * out, int group, char includeDead, char deadOnly)
// callers(27): 000a64d0 hero::Hero_HoverboardBoostPads; 00187b68 mobyupdate_unsorted::UpdateMoby_{1015_1282}; 001a9ef4 mobyupdate_helpers::M1059_001a9ef4; 001aa078 mobyupdate_unsorted::UpdateMoby_1059; 001abec8 mobyupdate_helpers::M1060_001abec8; 001fff88 mobyupdate_unsorted::UpdateMoby_1209; 00204ad0 mobyupdate_helpers::M1212_00204ad0; 002057e8 mobyupdate_helpers::M1973_002057e8; 002ce020 FUN_002ce020; 002ce590 mobyupdate_unsorted::UpdateMoby_1885; 003002f8 mobyupdate_unsorted::UpdateMoby_231; 00307270 mobyupdate_unsorted::UpdateMoby_238; 003a6388 mobyupdate_helpers::M511_003a6388; 003a7360 mobyupdate_unsorted::UpdateMoby_500_Crate; 003a82b8 mobyupdate_unsorted::UpdateMoby_a_lot_10; 003b39b0 mobyupdate_helpers::M556_003b39b0; 003c220c mobyupdate_helpers::M574_003c220c; 003da868 mobyupdate_unsorted::UpdateMoby_611; 00432258 mobyupdate_helpers::M717_00432258; 004495b8 mobyupdate_unsorted::UpdateMoby_a_lot_20; 0045de88 mobyupdate_helpers::M789_0045de88; 0046d660 mobyupdate_helpers::M815_0046d660; 00491998 mobyupdate_helpers::M857_00491998; 00491ae8 mobyupdate_helpers::M857_00491ae8; 00495620 mobyupdate_helpers::M859_00495620
// callees(1): 0010466c mobyutil::MB_GetNextMobyInGroup

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mobyutil::MB_GetFirstMobyInGroup(MobyInstance **out,int group,char includeDead,char deadOnly)

{
  bool bVar1;
  int iVar2;
  
  if (group < 0) {
    *out = (MobyInstance *)0x0;
    return -1;
  }
  if (g_NumMobyGroups < group) {
    *out = (MobyInstance *)0x0;
    return -1;
  }
  *out = (MobyInstance *)0x0;
  g_GroupIterPtr = *(ushort **)((int)&g_MobyGroups + (int)((longlong)group << 2));
  if (g_GroupIterPtr == (ushort *)0x0) {
    g_GroupIterMoby = (MobyInstance *)0x0;
    return -1;
  }
  g_GroupIterIdx = *g_GroupIterPtr & 0x7fff;
  g_GroupIterMoby =
       (MobyInstance *)
       ((int)&(MobyInstance->bSphere).x + (int)((longlong)(short)g_GroupIterIdx << 8));
  *out = g_GroupIterMoby;
  bVar1 = 0x7f < g_GroupIterMoby->state;
  if (includeDead == '\0') {
    if ((deadOnly != '\0') || (bVar1)) {
LAB_001048f0:
      iVar2 = MB_GetNextMobyInGroup(out,g_GroupIterMoby,includeDead,deadOnly);
      return iVar2;
    }
  }
  else if ((deadOnly != '\0') && (!bVar1)) goto LAB_001048f0;
  return 0;
}



//==== 0010491c  ns=mobyutil  size=0x10c
// sig: MobyInstance * MB_GetOtherMobyInGroup(MobyInstance * moby)
// callers(0): 
// callees(1): 0010466c mobyutil::MB_GetNextMobyInGroup

MobyInstance * mobyutil::MB_GetOtherMobyInGroup(MobyInstance *moby)

{
  int iVar1;
  MobyInstance *local_10 [2];
  
  if ((int)(uint)(byte)moby->group <= g_NumMobyGroups) {
    g_GroupIterPtr = (ushort *)(&g_MobyGroups)[(byte)moby->group];
    g_GroupIterMoby = (MobyInstance *)0x0;
    if (g_GroupIterPtr != (ushort *)0x0) {
      g_GroupIterIdx = *g_GroupIterPtr & 0x7fff;
      g_GroupIterMoby = MobyInstance + (short)g_GroupIterIdx;
      local_10[0] = g_GroupIterMoby;
      if ((g_GroupIterMoby->state < 0x80) ||
         (iVar1 = MB_GetNextMobyInGroup(local_10,g_GroupIterMoby,'\0','\0'), iVar1 != -1)) {
        if (local_10[0] != moby) {
          return local_10[0];
        }
        iVar1 = MB_GetNextMobyInGroup(local_10,local_10[0],'\0','\0');
        if (iVar1 != -1) {
          return local_10[0];
        }
      }
    }
  }
  return (MobyInstance *)0x0;
}



//==== 00104a28  ns=mobyutil  size=0x10c
// sig: int MB_IsFirstMobyInGroup(MobyInstance * moby, int group, char includeDead, char deadOnly)
// callers(1): 004a58e8 mobyupdate_unsorted::UpdateMoby_a_lot_2
// callees(1): 0010466c mobyutil::MB_GetNextMobyInGroup

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mobyutil::MB_IsFirstMobyInGroup(MobyInstance *moby,int group,char includeDead,char deadOnly)

{
  bool bVar1;
  MobyInstance *local_10 [2];
  
  if (group < 0) {
    local_10[0] = (MobyInstance *)0x0;
  }
  else if (g_NumMobyGroups < group) {
    local_10[0] = (MobyInstance *)0x0;
  }
  else {
    local_10[0] = (MobyInstance *)0x0;
    g_GroupIterMoby = (MobyInstance *)0x0;
    g_GroupIterPtr = *(ushort **)((int)&g_MobyGroups + (int)((longlong)group << 2));
    if (g_GroupIterPtr != (ushort *)0x0) {
      g_GroupIterIdx = *g_GroupIterPtr & 0x7fff;
      g_GroupIterMoby =
           (MobyInstance *)
           ((int)&(MobyInstance->bSphere).x + (int)((longlong)(short)g_GroupIterIdx << 8));
      bVar1 = 0x7f < g_GroupIterMoby->state;
      local_10[0] = g_GroupIterMoby;
      if (includeDead == '\0') {
        if ((deadOnly == '\0') && (!bVar1)) goto LAB_00104b10;
      }
      else if ((deadOnly == '\0') || (bVar1)) goto LAB_00104b10;
      MB_GetNextMobyInGroup(local_10,g_GroupIterMoby,includeDead,deadOnly);
    }
  }
LAB_00104b10:
  return (uint)LZCOUNT((int)local_10[0] - (int)moby) >> 5;
}



//==== 00104b38  ns=mobyutil  size=0x44
// sig: undefined DecAlpha(void)
// callers(3): 00132d90 partupd::UpdatePart_67; 001350c0 partupd::UpdatePart_75; 001351fc partupd::UpdatePart_76
// callees(0): 

ulonglong mobyutil::DecAlpha(uint *param_1,longlong param_2)

{
  ulonglong uVar1;
  
  param_2 = ((int)*param_1 >> 0x18) - param_2;
  uVar1 = param_2 + ((longlong)(int)param_2 >> 0x3f & -param_2);
  *param_1 = (uint)((uVar1 & 0xffffffff) << 0x18) | *param_1 & 0xffffff;
  return (ulonglong)(LZCOUNT((int)uVar1) << 0x20) >> 0x25;
}



//==== 00104b7c  ns=mobyutil  size=0xa8
// sig: undefined MB_BallisticTicksToHeight(void)
// callers(2): 000be228 hero::HeroMovement; 002cb1e0 mobyupdate_helpers::M186_002cb1e0
// callees(2): 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

double mobyutil::MB_BallisticTicksToHeight
                 (double param_1,int param_2,int param_3,undefined8 param_4,int *param_5)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  iVar1 = fastfunc::FastDoubleToInt((double)(float)((double)*(float *)(param_3 + 8) / param_1));
  dVar3 = (double)*(float *)(param_2 + 8);
  dVar2 = (double)fastfunc::FastIntToDouble();
  dVar3 = (double)(float)((double)*(float *)(param_3 + 8) * dVar2 + dVar3);
  dVar2 = (double)fastfunc::FastIntToDouble
                            (dVar2,(double)*(float *)(param_3 + 8),iVar1 * iVar1 + iVar1 >> 1);
  if (param_5 != (int *)0x0) {
    *param_5 = iVar1;
  }
  return -(double)(float)(dVar2 * param_1 - dVar3);
}



//==== 00104c24  ns=mobyutil  size=0xdc
// sig: undefined MB_BallisticPosAtTicks(void)
// callers(1): 000824b0 hero::Hero_CheckLedgeGrab
// callees(1): 00502730 fastfunc::FastIntToDouble

void mobyutil::MB_BallisticPosAtTicks
               (double param_1,float *param_2,float *param_3,float *param_4,undefined8 param_5,
               undefined8 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar5 = (double)fastfunc::FastIntToDouble(param_6);
  iVar4 = (int)param_6;
  dVar9 = (double)*param_4;
  dVar8 = (double)param_4[1];
  dVar7 = (double)param_4[2];
  dVar6 = (double)fastfunc::FastIntToDouble(iVar4 * iVar4 + iVar4 >> 1);
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  param_2[3] = param_3[3];
  *param_2 = (float)(dVar9 * dVar5 + (double)fVar1);
  param_2[1] = (float)(dVar8 * dVar5 + (double)fVar2);
  param_2[2] = fVar3 + (float)(dVar7 * dVar5 - (double)(float)(dVar6 * param_1));
  return;
}



//==== 00104d08  ns=mobyutil  size=0x9c
// sig: undefined MB_GetGroundZAboveBundle(void)
// callers(0): 
// callees(1): 00057820 collproc::CollLine

double mobyutil::MB_GetGroundZAboveBundle(int param_1)

{
  float fVar1;
  int iVar2;
  undefined1 local_20 [16];
  undefined1 local_10 [16];
  
  fVar1 = *(float *)(param_1 + 8) + 64.01;
  iVar2 = collproc::CollLine(local_10,local_20,0x12,0,0);
  if (iVar2 != 0) {
    fVar1 = CollOutput.ip.z;
  }
  return (double)fVar1;
}



//==== 00104da8  ns=mobyutil  size=0x9c
// sig: undefined PointOutsideConvexEdge(void)
// callers(2): 001053d8 mobyutil::ClosestPointInConvexPoly; 00105548 mobyutil::ClosestPointOnConvexPolyEdge
// callees(0): 

int mobyutil::PointOutsideConvexEdge(float *param_1,float *param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < param_3) {
    pfVar1 = param_2;
    do {
      iVar2 = iVar2 + 1;
      iVar3 = iVar2 - (iVar2 / param_3) * param_3;
      if (0.0 < (param_2[iVar3 * 4] - *pfVar1) * (param_1[1] - pfVar1[1]) -
                (param_2[iVar3 * 4 + 1] - pfVar1[1]) * (*param_1 - *pfVar1)) {
        return iVar2;
      }
      pfVar1 = pfVar1 + 4;
    } while (iVar2 < param_3);
  }
  return 0;
}



//==== 00104e44  ns=mobyutil  size=0x14c
// sig: undefined PointInsideComplexPoly(Vec4 * point, Vec4 * poly, undefined4 n)
// callers(57): 00035398 camera::camera10::Cam10_IsHeroInVolume; 00037520 camera::camera10::ActivateCamera_10; 000376e0 camera::camera10::ExitCamera_10; 00038658 camera::camera12::Cam12_IsHeroInVolume; 0003911c camera::camera12::ActivateCamera_12; 000391e4 camera::camera12::ExitCamera_12; 0003c53c camera::camera15::ActivateCamera_15; 0003c700 camera::camera15::ExitCamera_15; 0003d330 camera::camera17::Cam17_IsHeroInVolume; 0003e288 camera::camera18::Cam18_IsTriggered; 0003fc8c camera::camera19::Cam19_IsHeroInVolume; 000410bc camera::camera20::Cam20_IsHeroInVolume; 00043e48 camera::camera22::Cam22_IsHeroInVolume; 0004eb78 camera::camera9::ActivateCamera_9; 0004ef00 camera::camera9::ExitCamera_9; 00111ba0 mobyutil::MB_getTargetInArea; 00190d60 mobyupdate_unsorted::UpdateMoby_1032; 001a02d8 mobyupdate_unsorted::UpdateMoby_1048; 001a9218 mobyupdate_helpers::M1059_001a9218; 001aa078 mobyupdate_unsorted::UpdateMoby_1059; 001dcc70 mobyupdate_helpers::M1140_001dcc70; 001dcde8 mobyupdate_helpers::M1140_001dcde8; 002113b8 mobyupdate_helpers::M1229_002113b8; 00214a98 mobyupdate_unsorted::UpdateMoby_1231; 00222788 mobyupdate_helpers::M1243_00222788
// callees(0): 

ulonglong mobyutil::PointInsideComplexPoly(Vec4 *point,Vec4 *poly,int n)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  Vec4 *pVVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  uVar7 = 0;
  iVar6 = 0;
  lVar8 = 0;
  if (0 < n) {
    uVar2 = (int)point->y >> 0x1f;
    iVar4 = (uVar2 >> 1 ^ (uint)point->y) - uVar2;
    pVVar5 = poly;
    do {
      lVar8 = lVar8 + 1;
      uVar2 = (int)pVVar5->y >> 0x1f;
      lVar8 = lVar8 + ((LZCOUNT((int)lVar8 - n) << 0x3a) >> 0x3f & -lVar8);
      bVar1 = (int)((uVar2 >> 1 ^ (uint)pVVar5->y) - uVar2) < iVar4;
      iVar3 = (int)lVar8;
      if ((((bVar1) &&
           (uVar2 = (int)poly[iVar3].y >> 0x1f,
           iVar4 <= (int)((uVar2 >> 1 ^ (uint)poly[iVar3].y) - uVar2))) ||
          ((uVar2 = (int)poly[iVar3].y >> 0x1f,
           (int)((uVar2 >> 1 ^ (uint)poly[iVar3].y) - uVar2) < iVar4 && (!bVar1)))) &&
         (((point->y - pVVar5->y) / (poly[iVar3].y - pVVar5->y)) * (poly[iVar3].x - pVVar5->x) +
          pVVar5->x < point->x)) {
        uVar7 = (ulonglong)(LZCOUNT((int)uVar7) << 0x20) >> 0x25;
      }
      iVar6 = iVar6 + 1;
      pVVar5 = pVVar5 + 1;
    } while (iVar6 < n);
  }
  return uVar7;
}



//==== 00104fa0  ns=mobyutil  size=0xdc
// sig: int SegmentIntersect2D(vec4 p1, vec4 p2, vec4 p3, vec4 p4, float * t)
// callers(1): 00105080 mobyutil::ClipLineToPoly2D
// callees(0): 

int mobyutil::SegmentIntersect2D(vec4 p1,vec4 p2,vec4 p3,vec4 p4,float *t)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float *in_r4;
  float *in_r5;
  float *in_r6;
  float *in_r7;
  
  fVar1 = *in_r4 - *t;
  fVar4 = in_r5[1] - in_r6[1];
  fVar6 = in_r4[1] - t[1];
  fVar5 = t[1] - in_r5[1];
  fVar3 = *in_r5 - *in_r6;
  fVar2 = *t - *in_r5;
  fVar7 = fVar6 * fVar3 - fVar1 * fVar4;
  if (0.0001 <= ABS(fVar7)) {
    fVar7 = 1.0 / fVar7;
    fVar3 = (fVar4 * fVar2 - fVar3 * fVar5) * fVar7;
    fVar7 = (fVar1 * fVar5 - fVar6 * fVar2) * fVar7;
    *in_r7 = fVar3;
    if (0.0 < fVar3) {
      if (fVar3 < 1.0) {
        if (0.0 < fVar7) {
          if (fVar7 < 1.0) {
            iVar8 = 1;
          }
          else {
            iVar8 = 0;
          }
        }
        else {
          iVar8 = 0;
        }
      }
      else {
        iVar8 = 0;
      }
    }
    else {
      iVar8 = 0;
    }
  }
  else {
    iVar8 = 0;
  }
  return iVar8;
}



//==== 00105080  ns=mobyutil  size=0x198
// sig: undefined ClipLineToPoly2D(void)
// callers(0): 
// callees(1): 00104fa0 mobyutil::SegmentIntersect2D

int mobyutil::ClipLineToPoly2D(float *param_1,float *param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float *pfVar9;
  ulonglong uVar10;
  int iVar11;
  float *pfVar12;
  vec4 in_stack_ffffff48;
  vec4 in_stack_ffffff58;
  vec4 in_stack_ffffff68;
  vec4 in_stack_ffffff78;
  float local_50;
  
  uVar10 = 0;
  if (0 < param_4) {
    do {
      iVar11 = (int)(uVar10 + 1);
      pfVar12 = (float *)(param_3 + (iVar11 - (iVar11 / param_4) * param_4) * 0x10);
      iVar8 = SegmentIntersect2D(in_stack_ffffff48,in_stack_ffffff58,in_stack_ffffff68,
                                 in_stack_ffffff78,param_1);
      if (iVar8 != 0) {
        fVar1 = param_1[1];
        pfVar9 = (float *)(param_3 + (int)((uVar10 & 0xffffffff) << 4));
        fVar2 = *pfVar9;
        fVar3 = pfVar9[1];
        fVar4 = *param_1;
        fVar5 = param_2[1];
        fVar7 = param_2[2] - param_1[2];
        fVar6 = (*param_2 - fVar4) * local_50 + fVar4;
        if (0.0 <= (pfVar12[1] - fVar3) * (fVar4 - fVar2) - (*pfVar12 - fVar2) * (fVar1 - fVar3)) {
          fVar2 = param_1[1];
          fVar3 = param_1[2];
          *param_2 = fVar6;
          param_2[3] = param_1[3];
          param_2[1] = (fVar5 - fVar1) * local_50 + fVar2;
          param_2[2] = fVar7 * local_50 + fVar3;
        }
        else {
          *param_1 = fVar6;
          param_1[1] = (fVar5 - fVar1) * local_50 + fVar1;
          param_1[2] = fVar7 * local_50 + param_1[2];
        }
        return param_4 + 1;
      }
      uVar10 = uVar10 + 1;
    } while (iVar11 < param_4);
  }
  return 0;
}



//==== 00105228  ns=mobyutil  size=0x108
// sig: float ClosestPointOnEdge2D(float * out, float * a, float * b, float * p)
// callers(2): 001053d8 mobyutil::ClosestPointInConvexPoly; 00105548 mobyutil::ClosestPointOnConvexPolyEdge
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float mobyutil::ClosestPointOnEdge2D(float *out,float *a,float *b,float *p)

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
  
  fVar1 = *a;
  fVar7 = *b - fVar1;
  fVar2 = a[1];
  fVar3 = p[1];
  fVar10 = b[1] - fVar2;
  fVar4 = *p;
  fVar5 = b[2];
  fVar6 = a[2];
  fVar8 = fVar4 - (fVar4 + fVar10);
  fVar9 = fVar3 - (fVar3 + -fVar7);
  fVar11 = fVar10 * fVar8 - fVar7 * fVar9;
  if (0.0001 <= ABS(fVar11)) {
    out[3] = b[3];
    fVar2 = (fVar9 * (fVar1 - fVar4) - fVar8 * (fVar2 - fVar3)) * (1.0 / fVar11);
    fVar1 = fVar2;
    if (fVar2 - 0.0 < 0.0) {
      fVar1 = 0.0;
    }
    if (1.0 - fVar1 < 0.0) {
      fVar1 = 1.0;
    }
    fVar5 = (fVar5 - fVar6) * fVar1;
    *out = fVar7 * fVar1;
    out[1] = fVar10 * fVar1;
    out[2] = fVar5;
    fVar3 = a[1];
    fVar4 = a[2];
    *out = fVar7 * fVar1 + *a;
    out[1] = fVar10 * fVar1 + fVar3;
    out[2] = fVar5 + fVar4;
  }
  else {
    *out = fVar1;
    out[1] = a[1];
    out[2] = a[2];
    out[3] = a[3];
    fVar2 = 0.0;
  }
  return fVar2;
}



//==== 00105338  ns=mobyutil  size=0x9c
// sig: void ClosestPointOnSegment(float * out, float * a, float * b, float * p)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void mobyutil::ClosestPointOnSegment(float *out,float *a,float *b,float *p)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = a[1];
  fVar4 = b[1] - fVar1;
  fVar2 = *a;
  fVar7 = *b - fVar2;
  fVar3 = a[2];
  fVar6 = b[2] - fVar3;
  fVar5 = (fVar6 * (p[2] - fVar3) + fVar7 * (*p - fVar2) + fVar4 * (p[1] - fVar1)) /
          (fVar6 * fVar6 + fVar7 * fVar7 + fVar4 * fVar4);
  out[3] = a[3];
  if (fVar5 - 0.0 < 0.0) {
    fVar5 = 0.0;
  }
  if (1.0 - fVar5 < 0.0) {
    fVar5 = 1.0;
  }
  *out = fVar7 * fVar5 + fVar2;
  out[1] = fVar4 * fVar5 + fVar1;
  out[2] = fVar6 * fVar5 + fVar3;
  return;
}



//==== 001053d8  ns=mobyutil  size=0x168
// sig: int ClosestPointInConvexPoly(float * out, float * p, float * poly, int nPnts)
// callers(1): 001056b8 mobyutil::DistOutsideConvexPoly2D
// callees(2): 00104da8 mobyutil::PointOutsideConvexEdge; 00105228 mobyutil::ClosestPointOnEdge2D

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mobyutil::ClosestPointInConvexPoly(float *out,float *p,float *poly,int nPnts)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  
  lVar3 = (longlong)(int)poly;
  iVar1 = PointOutsideConvexEdge(p,lVar3,nPnts);
  if (iVar1 == 0) {
    iVar1 = 0;
    *out = *p;
    out[1] = p[1];
    out[2] = p[2];
    out[3] = p[3];
  }
  else {
    iVar1 = 0;
    dVar5 = 0.0;
    if (0 < nPnts) {
      do {
        iVar2 = iVar1 + 1;
        ClosestPointOnEdge2D
                  (&local_50,(float *)lVar3,poly + (iVar2 - (iVar2 / nPnts) * nPnts) * 4,p);
        dVar4 = (double)SQRT((p[2] - local_48) * (p[2] - local_48) +
                             (*p - local_50) * (*p - local_50) +
                             (p[1] - local_4c) * (p[1] - local_4c));
        if ((iVar1 == 0) || (dVar4 < dVar5)) {
          *out = local_50;
          out[1] = local_4c;
          out[2] = local_48;
          out[3] = local_44;
          dVar5 = dVar4;
        }
        lVar3 = lVar3 + 0x10;
        iVar1 = iVar2;
      } while (iVar2 < nPnts);
    }
    iVar1 = 1;
  }
  return iVar1;
}



//==== 00105548  ns=mobyutil  size=0x168
// sig: int ClosestPointOnConvexPolyEdge(float * out, float * p, float * poly, int nPnts)
// callers(1): 004d0fd0 FUN_004d0fd0
// callees(2): 00104da8 mobyutil::PointOutsideConvexEdge; 00105228 mobyutil::ClosestPointOnEdge2D

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mobyutil::ClosestPointOnConvexPolyEdge(float *out,float *p,float *poly,int nPnts)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  
  lVar4 = (longlong)(int)poly;
  iVar1 = PointOutsideConvexEdge(p,lVar4,nPnts);
  dVar6 = 0.0;
  iVar2 = 0;
  if (0 < nPnts) {
    do {
      iVar3 = iVar2 + 1;
      ClosestPointOnEdge2D(&local_60,(float *)lVar4,poly + (iVar3 - (iVar3 / nPnts) * nPnts) * 4,p);
      dVar5 = (double)SQRT((p[2] - local_58) * (p[2] - local_58) +
                           (*p - local_60) * (*p - local_60) + (p[1] - local_5c) * (p[1] - local_5c)
                          );
      if ((iVar2 == 0) || (dVar5 < dVar6)) {
        *out = local_60;
        out[1] = local_5c;
        out[2] = local_58;
        out[3] = local_54;
        dVar6 = dVar5;
      }
      lVar4 = lVar4 + 0x10;
      iVar2 = iVar3;
    } while (iVar3 < nPnts);
  }
  return (int)((LZCOUNT(-iVar1) << 0x3a) >> 0x3f) + 1;
}



//==== 001056b8  ns=mobyutil  size=0x78
// sig: float DistOutsideConvexPoly2D(float * p, float * poly, int nPnts)
// callers(0): 
// callees(1): 001053d8 mobyutil::ClosestPointInConvexPoly

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float mobyutil::DistOutsideConvexPoly2D(float *p,float *poly,int nPnts)

{
  float fVar1;
  int iVar2;
  float local_20;
  float local_1c;
  
  iVar2 = ClosestPointInConvexPoly(&local_20,p,poly,nPnts);
  if (iVar2 == 0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = SQRT((local_20 - *p) * (local_20 - *p) + (local_1c - p[1]) * (local_1c - p[1]));
  }
  return fVar1;
}



//==== 00105730  ns=stub  size=0x4
// sig: undefined STUB_00105730(void)
// callers(0): 
// callees(0): 

void stub::STUB_00105730(void)

{
  return;
}



//==== 00105734  ns=stub  size=0x8
// sig: undefined STUB_00105734(void)
// callers(0): 
// callees(0): 

undefined8 stub::STUB_00105734(void)

{
  return 0;
}



//==== 00105740  ns=mobyutil  size=0x8c
// sig: float DistPointToLine2D(float * a, float * b, float * p)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float mobyutil::DistPointToLine2D(float *a,float *b,float *p)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = a[1];
  fVar2 = *a;
  fVar3 = fVar1 - b[1];
  fVar4 = fVar2 - *b;
  fVar3 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
  if (fVar3 == 0.0) {
    fVar1 = (fVar2 - *p) * (fVar2 - *p) + (fVar1 - p[1]) * (fVar1 - p[1]);
  }
  else {
    fVar1 = (p[1] - fVar1) * (*b - fVar2) - (*p - fVar2) * (b[1] - fVar1);
    fVar1 = (fVar1 * fVar1) / (fVar3 * fVar3);
  }
  return SQRT(fVar1);
}



//==== 001057cc  ns=mobyutil  size=0x28
// sig: undefined MB_HasCollPrims(void)
// callers(2): 00032100 camera0::UpdateCamCollisions_0; 002b4818 mobyupdate_helpers::M177_002b4818
// callees(0): 

undefined8 mobyutil::MB_HasCollPrims(int param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0x94) == 0) || (*(int *)(*(int *)(param_1 + 0x94) + 8) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



//==== 001057f4  ns=mobyutil  size=0x28
// sig: undefined SetCollDamIn(void)
// callers(8): 00184c30 mobyupdate_unsorted::UpdateMoby_1009; 001d5928 mobyupdate_helpers::M1123_001d5928; 001ff200 mobyupdate_unsorted::UpdateMoby_1206_DamageCauser; 002e8af8 mobyupdate_unsorted::UpdateMoby_{203_1900}; 0039b390 mobyupdate_unsorted::UpdateMoby_479; 00422f08 mobyupdate_unsorted::UpdateMoby_694; 00444a50 mobyupdate_unsorted::UpdateMoby_745; 004743a8 mobyupdate_unsorted::UpdateMoby_820
// callees(0): 

/* [p2_mobyutil] overload without momentum (zeroed) */

void mobyutil::SetCollDamIn
               (double param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  param_2[4] = param_3;
  param_2[5] = param_4;
  param_2[7] = (float)param_1;
  param_2[8] = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  return;
}



//==== 0010581c  ns=mobyutil  size=0x38
// sig: undefined SetCollDamIn(void)
// callers(56): 0001f7a8 mobyupdate_unsorted::UpdateMoby_409; 00032100 camera0::UpdateCamCollisions_0; 000aaec0 hero::HandleHeroMovement; 00188368 mobyupdate_unsorted::UpdateMoby_1017; 0018b2f8 mobyupdate_unsorted::UpdateMoby_1023; 001933d8 mobyupdate_unsorted::UpdateMoby_1035; 001989d0 mobyupdate_helpers::M1045_001989d0; 001a9c20 mobyupdate_helpers::M1059_001a9c20; 001af4c0 mobyupdate_helpers::M1068_001af4c0; 001b07a8 mobyupdate_unsorted::UpdateMoby_1068; 001c1a58 mobyupdate_helpers::M1106_001c1a58; 001d05f0 mobyupdate_unsorted::UpdateMoby_1110; 001d2258 mobyupdate_unsorted::UpdateMoby_1112; 001f52a0 mobyupdate_helpers::M1197_001f52a0; 00216c60 mobyupdate_unsorted::UpdateMoby_1233; 0021a5a0 mobyupdate_unsorted::UpdateMoby_1238; 0022aff8 mobyupdate_unsorted::UpdateMoby_1259; 0022d358 mobyupdate_helpers::M1262_0022d358; 0022e580 mobyupdate_unsorted::UpdateMoby_1262; 00235aa0 mobyupdate_unsorted::UpdateMoby_1269; 00245fb0 mobyupdate_unsorted::UpdateMoby_1317; 0025bcf8 mobyupdate_unsorted::UpdateMoby_1368; 00299958 mobyupdate_unsorted::UpdateMoby_156; 002b1de0 mobyupdate_helpers::M176_002b1de0; 002b4818 mobyupdate_helpers::M177_002b4818
// callees(0): 

void mobyutil::SetCollDamIn
               (double param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  
  param_2[7] = (float)param_1;
  uVar1 = *param_6;
  param_2[4] = param_3;
  *param_2 = uVar1;
  uVar1 = param_6[1];
  param_2[5] = param_4;
  param_2[1] = uVar1;
  uVar1 = param_6[2];
  param_2[8] = 1;
  param_2[2] = uVar1;
  param_2[3] = param_6[3];
  return;
}



//==== 00105870  ns=mobyutil  size=0x180
// sig: undefined DamageSphereAtPos(void)
// callers(25): 000aaec0 hero::HandleHeroMovement; 000be228 hero::HeroMovement; 000eb3c0 mobyattack::UpdateMoby_1427_GC_Shockwave; 001059f0 mobyutil::DamageSphereAtBone; 0019f9b0 mobyupdate_helpers::M1048_0019f9b0; 001b6918 mobyupdate_unsorted::UpdateMoby_1077; 001daee8 mobyupdate_unsorted::UpdateMoby_1135; 00225b48 mobyupdate_unsorted::UpdateMoby_1246; 0025add0 mobyupdate_unsorted::UpdateMoby_136; 0025bcf8 mobyupdate_unsorted::UpdateMoby_1368; 002902e8 mobyupdate_unsorted::UpdateMoby_1513; 00340968 mobyupdate_unsorted::UpdateMoby_318; 003a14a8 mobyupdate_unsorted::UpdateMoby_491; 003a3c08 mobyupdate_unsorted::UpdateMoby_50; 003ad150 mobyupdate_unsorted::UpdateMoby_541; 003ba730 mobyupdate_helpers::M564_003ba730; 003ce680 mobyupdate_unsorted::UpdateMoby_580; 003ebd90 mobyupdate_unsorted::UpdateMoby_628; 004030c8 mobyupdate_unsorted::UpdateMoby_654; 00453bc8 mobyupdate_unsorted::UpdateMoby_77; 00483078 mobyupdate_unsorted::UpdateMoby_844; 00492d98 mobyupdate_unsorted::UpdateMoby_857; 004bff60 mobyupdate_unsorted::UpdateMoby_934; 004c0fd8 mobyupdate_unsorted::UpdateMoby_935; 004ca718 mobyupdate_unsorted::UpdateMoby_983
// callees(1): 0005e598 collproc::CollMobySphere

void mobyutil::DamageSphereAtPos(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 in_r9;
  undefined4 in_stack_00000074;
  undefined1 local_40 [48];
  
  collproc::CollMobySphere(param_1,param_3,in_r9,in_stack_00000074,param_2,local_40);
  return;
}



//==== 001059f0  ns=mobyutil  size=0xc4
// sig: undefined DamageSphereAtBone(void)
// callers(9): 002806b0 mobyupdate_unsorted::UpdateMoby_1445; 002d6498 mobyupdate_unsorted::UpdateMoby_1906; 003c77f8 mobyupdate_unsorted::UpdateMoby_576; 00446088 mobyupdate_unsorted::UpdateMoby_749; 00469880 mobyupdate_unsorted::UpdateMoby_807; 0047b1f0 mobyupdate_unsorted::UpdateMoby_827; 00497ff8 mobyupdate_unsorted::UpdateMoby_861; 004993b0 mobyupdate_unsorted::UpdateMoby_862; 004ba118 mobyupdate_unsorted::UpdateMoby_927
// callees(2): 000f1114 mobyfunc::GetBonePosition; 00105870 mobyutil::DamageSphereAtPos

void mobyutil::DamageSphereAtBone
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,int param_7)

{
  undefined1 auStack_60 [32];
  
  mobyfunc::GetBonePosition(param_4,param_5,auStack_60);
  DamageSphereAtPos(param_1,(double)(longlong)param_7,param_3,param_4,auStack_60);
  return;
}



//==== 00105ab4  ns=mobyutil  size=0x150
// sig: undefined CollDamageMobyDirect(void)
// callers(22): 0001f7a8 mobyupdate_unsorted::UpdateMoby_409; 00032100 camera0::UpdateCamCollisions_0; 00107860 mobyutil::MB_DamageMobyList; 001933d8 mobyupdate_unsorted::UpdateMoby_1035; 0021a5a0 mobyupdate_unsorted::UpdateMoby_1238; 002a4fa0 mobyupdate_unsorted::UpdateMoby_1632; 002b4818 mobyupdate_helpers::M177_002b4818; 00303ca8 mobyupdate_helpers::M234_00303ca8; 0035a450 mobyupdate_helpers::M386_0035a450; 0035a6b8 mobyupdate_unsorted::UpdateMoby_386; 0036e680 mobyupdate_unsorted::UpdateMoby_427; 0039b390 mobyupdate_unsorted::UpdateMoby_479; 003bbde8 mobyupdate_unsorted::UpdateMoby_567; 003c3730 mobyupdate_unsorted::UpdateMoby_574; 003ebd90 mobyupdate_unsorted::UpdateMoby_628; 003f0610 mobyupdate_unsorted::UpdateMoby_631; 003f25b8 mobyupdate_unsorted::UpdateMoby_632; 00404d18 mobyupdate_unsorted::UpdateMoby_655; 00422f08 mobyupdate_unsorted::UpdateMoby_694; 00480928 mobyupdate_unsorted::UpdateMoby_833; 00492d98 mobyupdate_unsorted::UpdateMoby_857; 004c76b8 mobyupdate_unsorted::UpdateMoby_979
// callees(0): 

void mobyutil::CollDamageMobyDirect
               (MobyInstance *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  uint uVar2;
  CollDamageOut *pCVar3;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  float fStack0000004c;
  float fStack0000005c;
  
  bVar1 = param_1->damage;
  fStack00000044 = (float)param_3;
  fStack0000004c = (float)param_4;
  fStack0000005c = (float)param_6;
  fStack00000040 = (float)((ulonglong)param_3 >> 0x20);
  fStack00000048 = (float)((ulonglong)param_4 >> 0x20);
  if (((bVar1 != 0xff) && (CollDamage[bVar1].pVictimMoby == param_1)) &&
     (uVar2 = (int)CollDamage[bVar1].damageHp >> 0x1f,
     (int)(((uint)((int)fStack0000005c >> 0x1f) >> 1 ^ (uint)fStack0000005c) -
          ((int)fStack0000005c >> 0x1f)) <
     (int)((uVar2 >> 1 ^ (uint)CollDamage[bVar1].damageHp) - uVar2))) {
    return;
  }
  CollDamage[CollOutput.damageNext].ip_.w = 0.0;
  CollDamage[CollOutput.damageNext].ip_.z = 0.0;
  CollDamage[CollOutput.damageNext].ip_.y = 0.0;
  CollDamage[CollOutput.damageNext].ip_.x = 0.0;
  CollDamage[CollOutput.damageNext].impact.x = fStack00000040;
  CollDamage[CollOutput.damageNext].impact.y = fStack00000044;
  CollDamage[CollOutput.damageNext].impact.z = fStack00000048;
  CollDamage[CollOutput.damageNext].impact.w = fStack0000004c;
  CollDamage[CollOutput.damageNext].pDamager = (MobyInstance *)((ulonglong)param_5 >> 0x20);
  CollDamage[CollOutput.damageNext].damageFlags = (uint)param_5;
  CollDamage[CollOutput.damageNext].damageClass = (char)((ulonglong)param_6 >> 0x38);
  CollDamage[CollOutput.damageNext].damageStrength = (char)((ulonglong)param_6 >> 0x30);
  CollDamage[CollOutput.damageNext].damageIndex = (u16)((ulonglong)param_6 >> 0x20);
  CollDamage[CollOutput.damageNext].damageHp = fStack0000005c;
  CollDamage[CollOutput.damageNext].unk30_flags_ = (u32)((ulonglong)param_7 >> 0x20);
  CollDamage[CollOutput.damageNext].pVictimMoby = param_1;
  pCVar3 = CollDamage + CollOutput.damageNext;
  pCVar3->padding[0] = '\0';
  pCVar3->padding[1] = '\0';
  pCVar3->padding[2] = '\0';
  pCVar3->padding[3] = '\0';
  param_1->damage = (s8)CollOutput.damageNext;
  CollOutput.damageNext = CollOutput.damageNext + 1U & 0x3f;
  return;
}



//==== 00105c08  ns=mobyutil  size=0x124
// sig: void CollDamageMobyDirect(float damage, MobyInstance * victim, MobyInstance * damager, int flags, int unused, float * ip, float * impact)
// callers(49): 000aaec0 hero::HandleHeroMovement; 00105d2c mobyutil::CollDamageMobyDirect_wrap; 0010b030 mobyutil::MB_UpdateKick; 00130a78 partupd::UpdatePart_58; 00194cd0 mobyupdate_unsorted::UpdateMoby_1038; 0019e848 mobyupdate_helpers::M1046_0019e848; 001b78c0 mobyupdate_helpers::M108_001b78c0; 00233180 mobyupdate_unsorted::UpdateMoby_1266; 0023eb98 mobyupdate_unsorted::UpdateMoby_1292; 00299958 mobyupdate_unsorted::UpdateMoby_156; 002b06f0 mobyupdate_helpers::M175_002b06f0; 002dc568 mobyupdate_unsorted::UpdateMoby_193; 002de920 mobyupdate_unsorted::UpdateMoby_194; 002e5698 mobyupdate_unsorted::UpdateMoby_199; 002f20a0 mobyupdate_unsorted::UpdateMoby_217; 002f44c0 mobyupdate_unsorted::UpdateMoby_218; 002f5b08 mobyupdate_unsorted::UpdateMoby_219; 002f7cf8 mobyupdate_unsorted::UpdateMoby_220; 00304ef8 mobyupdate_unsorted::UpdateMoby_237; 00306c48 mobyupdate_helpers::M238_00306c48; 00307270 mobyupdate_unsorted::UpdateMoby_238; 003090f8 mobyupdate_unsorted::UpdateMoby_239; 00313188 mobyupdate_unsorted::UpdateMoby_246; 00317338 mobyupdate_unsorted::UpdateMoby_252; 00323bf8 mobyupdate_unsorted::UpdateMoby_271
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void mobyutil::CollDamageMobyDirect
               (float damage,MobyInstance *victim,MobyInstance *damager,int flags,int unused,
               float *ip,float *impact)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CollDamageOut *pCVar5;
  
  bVar1 = victim->damage;
  if (((bVar1 == 0xff) || (CollDamage[bVar1].pVictimMoby != victim)) ||
     (CollDamage[bVar1].damageHp <= damage)) {
    CollDamage[CollOutput.damageNext].damageHp = damage;
    fVar2 = impact[1];
    fVar3 = *impact;
    fVar4 = impact[2];
    CollDamage[CollOutput.damageNext].pVictimMoby = victim;
    CollDamage[CollOutput.damageNext].pDamager = damager;
    CollDamage[CollOutput.damageNext].damageFlags = flags;
    pCVar5 = CollDamage + CollOutput.damageNext;
    pCVar5->padding[0] = '\0';
    pCVar5->padding[1] = '\0';
    pCVar5->padding[2] = '\0';
    pCVar5->padding[3] = '\0';
    CollDamage[CollOutput.damageNext].unk30_flags_ =
         (uint)(0.0001 < SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2));
    CollDamage[CollOutput.damageNext].ip_.x = *ip;
    CollDamage[CollOutput.damageNext].ip_.y = ip[1];
    CollDamage[CollOutput.damageNext].ip_.z = ip[2];
    CollDamage[CollOutput.damageNext].ip_.w = ip[3];
    CollDamage[CollOutput.damageNext].impact.x = *impact;
    CollDamage[CollOutput.damageNext].impact.y = impact[1];
    CollDamage[CollOutput.damageNext].impact.z = impact[2];
    CollDamage[CollOutput.damageNext].impact.w = impact[3];
    victim->damage = (s8)CollOutput.damageNext;
    CollOutput.damageNext = CollOutput.damageNext + 1U & 0x3f;
  }
  return;
}



//==== 00105d2c  ns=mobyutil  size=0x28
// sig: undefined CollDamageMobyDirect_wrap(void)
// callers(6): 002e8af8 mobyupdate_unsorted::UpdateMoby_{203_1900}; 0030e980 mobyupdate_helpers::M242_0030e980; 00363df8 mobyupdate_helpers::M405_00363df8; 00422f08 mobyupdate_unsorted::UpdateMoby_694; 004603e0 mobyupdate_helpers::M794_004603e0; 004743a8 mobyupdate_unsorted::UpdateMoby_820
// callees(1): 00105c08 mobyutil::CollDamageMobyDirect

void mobyutil::CollDamageMobyDirect_wrap
               (double param_1,MobyInstance *param_2,MobyInstance *param_3,int param_4,int param_5,
               float *param_6)

{
  CollDamageMobyDirect
            ((float)param_1,param_2,param_3,param_4,param_5,param_6,(float *)&DAT_00a15d30);
  return;
}



//==== 00105d58  ns=mobyutil  size=0x1e0
// sig: undefined MB_CollLineMulti(void)
// callers(5): 001b07a8 mobyupdate_unsorted::UpdateMoby_1068; 0022e580 mobyupdate_unsorted::UpdateMoby_1262; 003a14a8 mobyupdate_unsorted::UpdateMoby_491; 0042c150 mobyupdate_unsorted::UpdateMoby_71; 004bcd20 mobyupdate_unsorted::UpdateMoby_931
// callees(2): 00057820 collproc::CollLine; 00502730 fastfunc::FastIntToDouble

/* [p2_mobyutil] N CollLine probes, returns 1 on any hit
   [p2_mobyutil] N CollLine probes, returns 1 on any hit */

undefined8 mobyutil::MB_CollLineMulti(void)

{
  int iVar1;
  undefined8 in_r7;
  undefined8 in_r8;
  undefined8 in_r9;
  int iVar2;
  undefined1 local_c0 [16];
  undefined1 local_b0 [24];
  
  fastfunc::FastIntToDouble(in_r9);
  iVar2 = 0;
  if (0 < (int)in_r9) {
    do {
      iVar1 = collproc::CollLine(local_c0,local_b0,0,in_r7,in_r8);
      if (iVar1 != 0) {
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)in_r9);
  }
  return 0;
}



//==== 00105f40  ns=mobyutil  size=0x138
// sig: float CollWaterHeight(float * pos, float * normal)
// callers(9): 00053078 camera::Camera_UpdateUnderWater; 00053550 camera::UpdateCamera; 0007e5e8 hero::Hero_GetGroundInfo; 001aa078 mobyupdate_unsorted::UpdateMoby_1059; 00202b98 mobyupdate_unsorted::UpdateMoby_121; 002a2438 mobyupdate_unsorted::UpdateMoby_160; 00424e98 mobyupdate_unsorted::UpdateMoby_695; 0043dc00 mobyupdate_unsorted::UpdateMoby_74; 00481568 mobyupdate_unsorted::UpdateMoby_835
// callees(1): 0017c3e0 water::WaterTile_GetHeight

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float mobyutil::CollWaterHeight(float *pos,float *normal)

{
  float fVar1;
  int iVar2;
  
  if (WaterTileCnt != 0) {
    fVar1 = pos[2];
    iVar2 = WaterTileCnt;
    water::WaterTile_GetHeight(*pos,pos[1],fVar1);
    if (iVar2 != 0) {
      return fVar1;
    }
  }
  if (((WaterPlaneActive == 0) || (0.5 <= ABS(pos[2] - DAT_00e5aa98))) ||
     (DAT_00e5aa9c <=
      SQRT((*pos - DAT_00e5aa90) * (*pos - DAT_00e5aa90) +
           (pos[1] - DAT_00e5aa94) * (pos[1] - DAT_00e5aa94)))) {
    if (normal != (float *)0x0) {
      normal[3] = 0.0;
      normal[1] = 0.0;
      *normal = 0.0;
      normal[2] = 1.0;
    }
    fVar1 = pos[2];
  }
  else {
    fVar1 = DAT_00e5aa98;
    if (normal != (float *)0x0) {
      normal[3] = 0.0;
      normal[1] = 0.0;
      *normal = 0.0;
      normal[2] = 1.0;
      fVar1 = DAT_00e5aa98;
    }
  }
  return fVar1;
}



//==== 00106078  ns=mobyutil  size=0xbc
// sig: void MB_EulerToQuat(float * outQuat, Vec3 * rot)
// callers(6): 0007f608 hero::hero_SetManipulator; 00241320 mobyupdate_unsorted::UpdateMoby_{13_14_15_16}; 00369d38 mobyupdate_unsorted::UpdateMoby_424; 003d2c48 mobyupdate_unsorted::UpdateMoby_585; 00422f08 mobyupdate_unsorted::UpdateMoby_694; 004743a8 mobyupdate_unsorted::UpdateMoby_820
// callees(2): 005017c4 fastfunc::FastQuaternionMult; 00501980 fastfunc::FastQuaternionToEuler

void mobyutil::MB_EulerToQuat(float *outQuat,Vec3 *rot)

{
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [24];
  
  fastfunc::FastQuaternionToEuler((double)rot->x,auStack_40,0);
  fastfunc::FastQuaternionToEuler((double)rot->y,auStack_50,1);
  fastfunc::FastQuaternionToEuler((double)rot->z,auStack_60,2);
  fastfunc::FastQuaternionMult(outQuat,auStack_40,auStack_50);
  fastfunc::FastQuaternionMult(outQuat,outQuat,auStack_60);
  return;
}



//==== 00106150  ns=mobyutil  size=0x1b0
// sig: void MB_RegisterLameShadow(float size, MobyInstance * moby)
// callers(32): 00181a90 mobyupdate_unsorted::UpdateMoby_1003; 00182998 mobyupdate_unsorted::UpdateMoby_1004; 001892a8 mobyupdate_helpers::M1022_001892a8; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 001d05f0 mobyupdate_unsorted::UpdateMoby_1110; 001d2258 mobyupdate_unsorted::UpdateMoby_1112; 001e70a8 mobyupd::update1160::M1160_UpdateFlight; 00206cd8 mobyupdate_unsorted::UpdateMoby_1214; 00209508 mobyupdate_unsorted::UpdateMoby_1215; 0020ade8 mobyupdate_unsorted::UpdateMoby_{1218_1220}; 0021b8c0 mobyupdate_unsorted::UpdateMoby_1241; 00235aa0 mobyupdate_unsorted::UpdateMoby_1269; 00264238 mobyupd::update1379::UpdateMoby_1379_JetFighterFleet; 002af360 mobyupdate_unsorted::UpdateMoby_172; 002beb68 mobyupdate_unsorted::UpdateMoby_1818; 002cf460 mobyupdate_unsorted::UpdateMoby_1886; 00304ef8 mobyupdate_unsorted::UpdateMoby_237; 003154d8 mobyupdate_unsorted::UpdateMoby_248; 0036b8c8 mobyupdate_helpers::M426_0036b8c8; 00378778 mobyupdate_unsorted::UpdateMoby_437; 0039b390 mobyupdate_unsorted::UpdateMoby_479; 003b0198 mobyupdate_unsorted::UpdateMoby_545; 003e7830 mobyupdate_unsorted::UpdateMoby_624; 0041dad8 mobyupdate_unsorted::UpdateMoby_69; 0041fb90 mobyupdate_unsorted::UpdateMoby_691
// callees(2): 00057820 collproc::CollLine; 00060780 collproc::CollHotspot

void mobyutil::MB_RegisterLameShadow(float size,MobyInstance *moby)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  undefined1 local_50 [16];
  undefined1 local_40 [24];
  
  uVar2 = g_NumLameShadows;
  dVar4 = (double)size;
  if ((moby->enabled != '\0') && ((int)g_NumLameShadows < 0x20)) {
    (&g_LameShadows)[g_NumLameShadows * 8] = (moby->pos).x;
    (&DAT_0095e5f4)[uVar2 * 8] = (moby->pos).y;
    (&DAT_0095e5f8)[uVar2 * 8] = (moby->pos).z;
    (&DAT_0095e5fc)[uVar2 * 8] = (moby->pos).w;
    iVar3 = collproc::CollLine(local_40,local_50,2,0,0);
    fVar1 = 0.0;
    if (iVar3 != 0) {
      fVar1 = CollOutput.ip.z;
    }
    dVar5 = (double)fVar1;
    iVar3 = collproc::CollHotspot();
    fVar1 = CollOutput.normal.x;
    if (iVar3 != 0) {
      iVar3 = (int)(((ulonglong)g_NumLameShadows & 0x7ffffff) << 5);
      *(float *)((int)&DAT_0095e5f8 + iVar3) = (float)(dVar5 + 0.02500000037252903);
      *(float *)((int)&DAT_0095e600 + iVar3) = fVar1;
      *(float *)((int)&DAT_0095e604 + iVar3) = CollOutput.normal.y;
      *(float *)((int)&DAT_0095e608 + iVar3) = CollOutput.normal.z;
      *(float *)(&DAT_0095e60c + iVar3) = CollOutput.normal.w;
      g_NumLameShadows = g_NumLameShadows + 1;
      dVar5 = (double)((8.0 - ABS((float)((double)(moby->pos).z - dVar5))) * 0.125);
      if (dVar5 - 0.25 < 0.0) {
        dVar5 = 0.25;
      }
      *(float *)((int)&DAT_0095e5fc + iVar3) = (float)(dVar5 * dVar4);
    }
  }
  return;
}



//==== 00106308  ns=mobyutil  size=0x24
// sig: undefined MB_SetZBoundsFromPos(void)
// callers(9): 00267af8 mobyupdate_unsorted::UpdateMoby_{1389_1446}; 0032cef0 mobyupdate_unsorted::UpdateMoby_282; 00343330 mobyupdate_unsorted::UpdateMoby_328; 0045b190 mobyupdate_unsorted::UpdateMoby_786; 0045d0f8 mobyupdate_unsorted::UpdateMoby_788; 004a2d38 mobyupdate_unsorted::UpdateMoby_890; 004a8ec0 mobyupdate_unsorted::UpdateMoby_909; 004b0698 mobyupdate_unsorted::UpdateMoby_918; 004b1a88 mobyupdate_unsorted::UpdateMoby_919
// callees(0): 

/* [p2_mobyutil] moby+0x84/0x88 = pos.z -/+ 0.2 */

void mobyutil::MB_SetZBoundsFromPos(int param_1)

{
  *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x18) - 0.2;
  *(float *)(param_1 + 0x88) = *(float *)(param_1 + 0x18) + 0.2;
  return;
}



//==== 00106330  ns=mobyutil  size=0x20
// sig: undefined MB_SetZBounds(void)
// callers(1): 0038f550 mobyupdate_unsorted::UpdateMoby_459
// callees(0): 

void mobyutil::MB_SetZBounds(double param_1,int param_2)

{
  *(float *)(param_2 + 0x84) = (float)(param_1 - 0.20000000298023224);
  *(float *)(param_2 + 0x88) = (float)(param_1 + 0.20000000298023224);
  return;
}



//==== 00106360  ns=mobyutil  size=0xe0
// sig: undefined MB_SetZBoundsFromGround(void)
// callers(63): 0001cb80 mobyupdate_unsorted::UpdateMoby_326; 0018b2f8 mobyupdate_unsorted::UpdateMoby_1023; 00195e08 mobyupdate_unsorted::UpdateMoby_1041; 001a02d8 mobyupdate_unsorted::UpdateMoby_1048; 001a5f50 mobyupdate_unsorted::UpdateMoby_1051; 001b07a8 mobyupdate_unsorted::UpdateMoby_1068; 001be558 mobyupdate_unsorted::UpdateMoby_1105; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 001d05f0 mobyupdate_unsorted::UpdateMoby_1110; 001d2258 mobyupdate_unsorted::UpdateMoby_1112; 001d8090 mobyupdate_unsorted::UpdateMoby_1130; 001dedb0 mobyupdate_helpers::M1140_001dedb0; 001df770 mobyupdate_unsorted::UpdateMoby_1144; 001f1b50 mobyupdate_unsorted::UpdateMoby_1190; 001f3688 mobyupdate_unsorted::UpdateMoby_1196; 001f7980 mobyupdate_unsorted::UpdateMoby_1199; 001fcd60 mobyupdate_unsorted::UpdateMoby_1202; 00211748 mobyupdate_unsorted::UpdateMoby_1229; 00214a98 mobyupdate_unsorted::UpdateMoby_1231; 00225b48 mobyupdate_unsorted::UpdateMoby_1246; 0022e580 mobyupdate_unsorted::UpdateMoby_1262; 002766e0 mobyupdate_unsorted::UpdateMoby_1422; 0027d4c8 mobyupdate_unsorted::UpdateMoby_1440; 002806b0 mobyupdate_unsorted::UpdateMoby_1445; 00284e60 mobyupdate_unsorted::UpdateMoby_1455
// callees(1): 00057820 collproc::CollLine

/* [p2_mobyutil] CollLine down; sets moby+0x84/0x88 = groundZ -/+ 0.2 */

void mobyutil::MB_SetZBoundsFromGround(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined1 local_30 [16];
  undefined1 local_20 [24];
  
  iVar3 = collproc::CollLine(local_20,local_30,0x22,0,0);
  fVar1 = 0.0;
  fVar2 = fVar1;
  if (iVar3 != 0) {
    fVar2 = CollOutput.ip.z - 0.2;
    fVar1 = CollOutput.ip.z + 0.2;
  }
  *(float *)(param_1 + 0x84) = fVar2;
  *(float *)(param_1 + 0x88) = fVar1;
  return;
}



//==== 00106468  ns=mobyutil  size=0x2d0
// sig: undefined MB_SetZBoundsFromFloorCeil(MobyInstance * param_1)
// callers(3): 00161788 space::UpdateSpace; 00168768 update::UpdateScene; 0016da88 vendor::Vendor_PreUpdate
// callees(1): 00057820 collproc::CollLine

void mobyutil::MB_SetZBoundsFromFloorCeil(MobyInstance *param_1)

{
  float fVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  
  iVar2 = collproc::CollLine(local_80,local_70,0x22,0,0);
  if (iVar2 == 0) {
    param_1->unk84 = 0;
    param_1->unk88 = 0;
  }
  else {
    dVar4 = (double)CollOutput.ip.z;
    dVar5 = dVar4;
    iVar2 = collproc::CollLine(local_80,local_70,0x22,0,0);
    if (iVar2 != 0) {
      dVar5 = (double)CollOutput.ip.z;
    }
    dVar3 = dVar4;
    if (dVar5 - dVar4 < 0.0) {
      dVar3 = dVar5;
    }
    if (dVar4 - dVar5 < 0.0) {
      dVar4 = dVar5;
    }
    param_1->unk84 = (int)(float)(dVar3 - 0.25);
    param_1->unk88 = (int)(float)(dVar4 + 0.25);
    fVar1 = (float)(dVar3 - 0.25) + 4.0;
    if (fVar1 < (float)(dVar4 + 0.25)) {
      param_1->unk88 = (int)fVar1;
    }
  }
  return;
}



//==== 00106738  ns=mobyutil  size=0x24
// sig: void TweenColor(float t, uint color1, uint color2)
// callers(15): 001218d8 partupd::UpdatePart_4; 00124fd0 partupd::UpdatePart_15; 001255d8 partupd::UpdatePart_16; 00126a70 partupd::UpdatePart_21; 0012b7f0 partupd::UpdatePart_36; 0012bb78 partupd::UpdatePart_37; 00132090 partupd::UpdatePart_64; 00134c28 partupd::UpdatePart_74; 00202b98 mobyupdate_unsorted::UpdateMoby_121; 0028bf80 mobyupdate_unsorted::UpdateMoby_{148_255}; 002959f8 mobyupdate_unsorted::UpdateMoby_154; 002a2438 mobyupdate_unsorted::UpdateMoby_160; 0036a528 mobyupdate_unsorted::UpdateMoby_425; 003ead68 mobyupdate_unsorted::UpdateMoby_627; 0043dc00 mobyupdate_unsorted::UpdateMoby_74
// callees(1): 005027bc fastfunc::FastLerpColor

void mobyutil::TweenColor(float t,uint color1,uint color2)

{
  fastfunc::FastLerpColor((double)t,color1,color2);
  return;
}



//==== 0010675c  ns=mobyutil  size=0x68
// sig: undefined MB_damage(undefined4 moby, undefined4 flags, undefined4 noClearDamage)
// callers(276): 000156a8 mobyupdate_unsorted::UpdateMoby_1267; 00018238 mobyupdate_helpers::M1274_00018238; 0001c618 mobyupdate_helpers::M326_0001c618; 0001e700 mobyupdate_helpers::M336_0001e700; 0001f7a8 mobyupdate_unsorted::UpdateMoby_409; 000b72b0 hero::TransitionMovement; 001817d0 mobyupdate_helpers::M1003_001817d0; 00181c08 mobyupdate_helpers::M1004_00181c08; 001856a0 mobyupdate_helpers::M101_001856a0; 001892a8 mobyupdate_helpers::M1022_001892a8; 0018a840 mobyupdate_helpers::M1023_0018a840; 0018e048 mobyupdate_helpers::M1027_0018e048; 001933d8 mobyupdate_unsorted::UpdateMoby_1035; 00194cd0 mobyupdate_unsorted::UpdateMoby_1038; 00195a48 mobyupdate_unsorted::UpdateMoby_1040; 00195e08 mobyupdate_unsorted::UpdateMoby_1041; 00196a88 mobyupdate_unsorted::UpdateMoby_1042; 00198d88 mobyupdate_helpers::M1045_00198d88; 0019ebd8 mobyupdate_unsorted::UpdateMoby_1047; 0019f9b0 mobyupdate_helpers::M1048_0019f9b0; 001a5360 mobyupdate_helpers::M1051_001a5360; 001a8ac0 mobyupdate_helpers::M1059_001a8ac0; 001afa30 mobyupdate_helpers::M1068_001afa30; 001b32c0 mobyupdate_helpers::M1069_001b32c0; 001b33e0 mobyupdate_unsorted::UpdateMoby_107
// callees(0): 

CollDamageOut * mobyutil::MB_damage(MobyInstance *moby,uint flags,int noClearDamage)

{
  CollDamageOut *damageEntry;
  byte damageIndex;
  
  damageIndex = moby->damage;
  if ((damageIndex == 0xff) || (CollDamage[damageIndex].pVictimMoby != moby)) {
    damageEntry = (CollDamageOut *)0x0;
  }
  else {
    damageEntry = CollDamage + damageIndex;
    if ((CollDamage[damageIndex].damageFlags & flags) == 0) {
      if (noClearDamage == 0) {
        moby->damage = -1;
      }
      damageEntry = (CollDamageOut *)0x0;
    }
  }
  return damageEntry;
}



//==== 001067c4  ns=mobyutil  size=0x34
// sig: undefined ???_Unused_MB_GetPVarsField10(void)
// callers(0): 
// callees(0): 

undefined4 mobyutil::____Unused_MB_GetPVarsField10(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else if ((*(ushort *)(param_1 + 0x34) & 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x10);
  }
  return uVar1;
}



//==== 00106840  ns=mobyutil  size=0xd54
// sig: undefined MB_HandleDamage(MobyInstance * param_1, undefined4 param_2, undefined8 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined8 param_8)
// callers(147): 0001c618 mobyupdate_helpers::M326_0001c618; 001817d0 mobyupdate_helpers::M1003_001817d0; 00181c08 mobyupdate_helpers::M1004_00181c08; 001856a0 mobyupdate_helpers::M101_001856a0; 001892a8 mobyupdate_helpers::M1022_001892a8; 0018a840 mobyupdate_helpers::M1023_0018a840; 0018e048 mobyupdate_helpers::M1027_0018e048; 00195e08 mobyupdate_unsorted::UpdateMoby_1041; 00198d88 mobyupdate_helpers::M1045_00198d88; 0019f9b0 mobyupdate_helpers::M1048_0019f9b0; 001a5360 mobyupdate_helpers::M1051_001a5360; 001a8ac0 mobyupdate_helpers::M1059_001a8ac0; 001afa30 mobyupdate_helpers::M1068_001afa30; 001b32c0 mobyupdate_helpers::M1069_001b32c0; 001b33e0 mobyupdate_unsorted::UpdateMoby_107; 001b7a68 mobyupdate_helpers::M1131_001b7a68; 001b7b60 mobyupdate_unsorted::UpdateMoby_108; 001bb8c8 mobyupdate_helpers::M1089_001bb8c8; 001bb9c0 mobyupdate_unsorted::UpdateMoby_109; 001c1e18 mobyupdate_helpers::M1106_001c1e18; 001ce130 mobyupdate_helpers::M111_001ce130; 001d05f0 mobyupdate_unsorted::UpdateMoby_1110; 001d2258 mobyupdate_unsorted::UpdateMoby_1112; 001d6b28 mobyupdate_unsorted::UpdateMoby_1126; 001e8fd0 mobyupdate_helpers::M1167_001e8fd0
// callees(2): 004fffb4 fastfunc::FastDecTimerS16; 005023f0 fastfunc::FastVecAdd

/* [p2_mobyutil] processes incoming COLL_DAM_OUT for moby using react vars (pVar[0]); 147 callers */

ulonglong mobyutil::MB_HandleDamage
                    (MobyInstance *param_1,int param_2,ulonglong param_3,uint param_4,
                    undefined4 *param_5,undefined4 *param_6,uint *param_7,ulonglong param_8)

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
  short sVar10;
  undefined2 uVar11;
  ulonglong *puVar12;
  int iVar13;
  float fVar14;
  longlong lVar15;
  byte bVar17;
  int iVar16;
  longlong lVar18;
  longlong lVar19;
  float *pfVar20;
  ulonglong uVar21;
  ulonglong unaff_r23;
  int iVar22;
  ulonglong unaff_r24;
  longlong lVar23;
  uint uVar24;
  ulonglong unaff_r25;
  uint uVar25;
  ulonglong unaff_r26;
  ulonglong uVar26;
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
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar33;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  
  uVar26 = ZEXT48(&stack0x00000000);
  lVar23 = uVar26 - 0x160;
  puVar12 = (ulonglong *)lVar23;
  *puVar12 = uVar26;
  puVar12[0x2e] = in_LR;
  puVar12[0x26] = in_f26;
  puVar12[0x27] = in_f27;
  puVar12[0x28] = in_f28;
  puVar12[0x29] = in_f29;
  puVar12[0x2a] = in_f30;
  puVar12[0x2b] = in_f31;
  puVar12[0x1f] = unaff_r25;
  puVar12[0x23] = unaff_r29;
  puVar12[0x1d] = unaff_r23;
  puVar12[0x25] = unaff_r31;
  *param_5 = 0;
  puVar12[0x24] = unaff_r30;
  puVar12[0x22] = unaff_r28;
  puVar12[0x21] = unaff_r27;
  puVar12[0x20] = unaff_r26;
  puVar12[0x1e] = unaff_r24;
  if (param_7 != (uint *)0x0) {
    *param_7 = 0xffffffff;
  }
  iVar22 = (int)param_3;
  if ((((param_2 != 0) && (*(int *)(param_2 + 0x20) != 0)) &&
      ((sVar10 = *(short *)(*(int *)(param_2 + 0x20) + 0xa6), sVar10 == 0x131 || (sVar10 == 0xa8))))
     && (iVar22 != 0)) {
    *(undefined4 *)(param_2 + 0x2c) =
         *(undefined4 *)(&DAT_007291f8 + (uint)*(byte *)(iVar22 + 8) * 4);
  }
  if (param_1 == (MobyInstance *)0x0) {
    if (iVar22 != 0) {
      *(undefined2 *)(iVar22 + 0x1c) = 0;
      *(undefined2 *)(iVar22 + 0x14) = 0xffff;
    }
    *(undefined2 *)(iVar22 + 0x16) = 0xffff;
    *param_5 = 0;
    return 0;
  }
  if (iVar22 == 0) {
    if (param_1 == (MobyInstance *)0x0) {
      param_3 = 0;
    }
    else {
      param_3 = 0;
      if ((param_1->modeBits & HAS_SPECIAL_VARS) != NONE) {
                    /* WARNING: Load size is inaccurate */
        param_3 = (ulonglong)*param_1->pVar;
      }
    }
    if ((int)param_3 == 0) {
      *param_5 = 0;
      return 0;
    }
  }
  iVar22 = (int)param_3;
  if ((int)param_8 == 4) {
    param_8 = (ulonglong)*(byte *)(iVar22 + 8);
  }
  if (param_2 == 0) {
    fastfunc::FastDecTimerS16(param_3 + 0x1c);
    *(undefined2 *)(iVar22 + 0x16) = 0xffff;
    *param_5 = 1;
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = 0;
    }
    return 0xb;
  }
  if (*(int *)(param_2 + 0x1c) == 0x45afdf66) {
    bVar17 = *(byte *)(param_2 + 0x28);
    uVar25 = (uint)*(ushort *)(param_2 + 0x2a);
    fVar8 = *(float *)((uint)bVar17 * 4 + 0x729208 + (int)(param_8 << 5));
    fVar7 = *(float *)(param_2 + 0x10) * fVar8;
    fVar2 = *(float *)(param_2 + 0x14) * fVar8;
    fVar8 = *(float *)(param_2 + 0x18) * fVar8;
    *(undefined4 *)(param_2 + 0x1c) = 0x45afdf66;
    *(float *)(param_2 + 0x10) = fVar7;
    *(float *)(param_2 + 0x14) = fVar2;
    *(float *)(param_2 + 0x18) = fVar8;
    if (*(ushort *)(param_2 + 0x2a) == 0x47) {
      fVar3 = (param_1->pos).x;
      fVar4 = (param_1->pos).y;
      fVar1 = fVar3 - g_heroPosition.x;
      fVar5 = fVar4 - g_heroPosition.y;
      fVar6 = ABS(fVar1);
      fVar9 = ABS(fVar5);
      *(float *)((int)puVar12 + 0x9c) = fVar1;
      *(float *)(puVar12 + 0x14) = fVar5;
      *(float *)((int)puVar12 + 0xa4) = fVar6 - fVar9;
      dVar34 = 0.0;
      uVar21 = (ulonglong)(*(uint *)((int)puVar12 + 0x9c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar12 + 0xa4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar12 + 0x14) >> 0x1d) & 4;
      fVar1 = ABS(*(float *)((int)puVar12 + 0x9c));
      if (*(float *)((int)puVar12 + 0xa4) - 0.0 < 0.0) {
        fVar1 = fVar9;
      }
      fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
      fVar5 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
      fVar14 = ABS(*(float *)(puVar12 + 0x14));
      if (*(float *)((int)puVar12 + 0xa4) - 0.0 < 0.0) {
        fVar14 = fVar6;
      }
      dVar28 = dVar34;
      if (0.0 < fVar1) {
        lVar15 = uVar26 - 0x150;
        lVar18 = uVar26 - 0x98;
        lVar19 = uVar26 - 0x88;
        lVar27 = 2;
        fVar1 = (fVar14 - fVar1) / (fVar14 + fVar1);
        fVar6 = fVar1 * fVar1;
        *(float *)((int)puVar12 + 0xd4) = fVar1;
        *(float *)((int)puVar12 + 0xcc) = fVar1;
        *(float *)(puVar12 + 0x1a) = fVar1;
        *(float *)(puVar12 + 0x19) = fVar1;
        fVar1 = fVar6 * fVar6;
        *(float *)((int)puVar12 + 0xcc) = *(float *)((int)puVar12 + 0xcc) * fVar6;
        *(float *)(puVar12 + 0x1a) = *(float *)(puVar12 + 0x1a) * fVar1;
        *(float *)((int)puVar12 + 0xd4) = *(float *)((int)puVar12 + 0xd4) * fVar1 * fVar6;
        do {
          *(float *)((int)lVar15 + 200) = *(float *)((int)lVar15 + 0xb8) * fVar1 * fVar1;
          iVar16 = (int)lVar18;
          lVar15 = lVar15 + 8;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar16 + 4) * fVar1 * fVar1;
          lVar19 = lVar19 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar19 = uVar26 - 0x98;
        pfVar20 = (float *)&DAT_007358e0;
        lVar15 = lVar23;
        lVar18 = lVar19;
        do {
          fVar1 = *pfVar20;
          fVar6 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar15 + 200) = *(float *)((int)lVar15 + 200) * fVar1;
          lVar15 = lVar15 + 8;
          *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar6;
          lVar18 = lVar18 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar18 = 2;
        lVar15 = lVar23;
        do {
          iVar16 = (int)lVar15;
          lVar15 = lVar15 + 0x10;
          iVar13 = (int)lVar19;
          lVar19 = lVar19 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar16 + 200)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar9 + fVar5);
      }
      fVar1 = (float)(dVar28 + 1.570796251296997);
      fVar3 = fVar3 - g_heroPosition.x;
      fVar4 = fVar4 - g_heroPosition.y;
      fVar9 = ABS(fVar3);
      fVar5 = ABS(fVar4);
      fVar6 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar6 = fVar1;
      }
      *(float *)(puVar12 + 0x12) = fVar3;
      *(float *)(puVar12 + 0x13) = fVar9 - fVar5;
      *(float *)((int)puVar12 + 0x94) = fVar4;
      fVar3 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar6 < 0.0) {
        fVar3 = fVar6;
      }
      uVar21 = (ulonglong)(*(uint *)(puVar12 + 0x12) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0x13) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar12 + 0x94) >> 0x1d) & 4;
      fVar1 = fVar3 * fVar3;
      fVar4 = ABS(*(float *)(puVar12 + 0x12));
      if (*(float *)(puVar12 + 0x13) - 0.0 < 0.0) {
        fVar4 = fVar5;
      }
      fVar5 = fVar1 * fVar1 * fVar3;
      fVar6 = fVar1 * fVar5;
      fVar3 = fVar1 * fVar6 * 2.601887e-06 +
              fVar6 * -0.0001980741 + fVar5 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3;
      dVar28 = (double)fVar3;
      fVar1 = ABS(*(float *)((int)puVar12 + 0x94));
      if (*(float *)(puVar12 + 0x13) - 0.0 < 0.0) {
        fVar1 = fVar9;
      }
      *(float *)(puVar12 + 0xe) = fVar3;
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
      fVar3 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
      dVar31 = dVar34;
      if (0.0 < fVar4) {
        lVar15 = uVar26 - 0x150;
        lVar19 = uVar26 - 0xa8;
        lVar18 = uVar26 - 0xb8;
        lVar27 = 2;
        fVar4 = (fVar1 - fVar4) / (fVar1 + fVar4);
        fVar1 = fVar4 * fVar4;
        *(float *)((int)puVar12 + 0xb4) = fVar4;
        *(float *)((int)puVar12 + 0xac) = fVar4;
        *(float *)(puVar12 + 0x16) = fVar4;
        *(float *)(puVar12 + 0x15) = fVar4;
        fVar4 = fVar1 * fVar1;
        *(float *)((int)puVar12 + 0xac) = *(float *)((int)puVar12 + 0xac) * fVar1;
        *(float *)(puVar12 + 0x16) = *(float *)(puVar12 + 0x16) * fVar4;
        *(float *)((int)puVar12 + 0xb4) = *(float *)((int)puVar12 + 0xb4) * fVar4 * fVar1;
        do {
          *(float *)((int)lVar15 + 0xa8) = *(float *)((int)lVar15 + 0x98) * fVar4 * fVar4;
          iVar16 = (int)lVar18;
          lVar18 = lVar18 + 8;
          lVar15 = lVar15 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar16 + 4) * fVar4 * fVar4;
          lVar19 = lVar19 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar19 = uVar26 - 0xb8;
        pfVar20 = (float *)&DAT_007358e0;
        lVar15 = lVar23;
        lVar18 = lVar19;
        do {
          fVar4 = *pfVar20;
          fVar1 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar15 + 0xa8) = *(float *)((int)lVar15 + 0xa8) * fVar4;
          lVar15 = lVar15 + 8;
          *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar1;
          lVar18 = lVar18 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar15 = 2;
        do {
          iVar16 = (int)lVar23;
          iVar13 = (int)lVar19;
          lVar23 = lVar23 + 0x10;
          lVar19 = lVar19 + 0x10;
          dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar16 + 0xa8)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar5 + fVar3);
      }
      dVar35 = 1.0;
      dVar32 = (double)(float)(3.141592502593994 - dVar31);
      if (dVar31 - (double)(float)(3.141592502593994 - dVar31) < 0.0) {
        dVar32 = dVar31;
      }
      dVar30 = (double)(float)(-3.141592502593994 - dVar31);
      if ((double)(float)(-3.141592502593994 - dVar31) - dVar32 < 0.0) {
        dVar30 = dVar32;
      }
      dVar32 = (double)(float)(dVar30 * dVar30);
      dVar33 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar30));
      dVar31 = (double)(float)(dVar32 * dVar33);
      dVar32 = (double)((float)(dVar32 * dVar31) * 2.601887e-06 +
                       (float)(dVar31 * -0.0001980741071747616 +
                              (double)(float)(dVar33 * 0.008333025500178337 +
                                             (double)(float)((double)(float)(dVar32 * dVar30) *
                                                             -0.16666656732559204 + dVar30))));
      fVar3 = SQRT((float)(dVar32 * dVar32 + (double)(float)(dVar28 * dVar28 + 1.0)));
      dVar30 = (double)((SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar2 * fVar2) * 0.7) / fVar3);
      dVar31 = dVar34;
      if (0.0 - fVar3 < 0.0) {
        dVar31 = dVar30;
      }
      dVar33 = dVar34;
      if (0.0 - fVar3 < 0.0) {
        dVar33 = (double)(float)(dVar28 * dVar30);
      }
      dVar29 = dVar34;
      if (0.0 - fVar3 < 0.0) {
        dVar29 = (double)(float)(dVar32 * dVar30);
      }
      if (fVar3 - 0.0 < 0.0) {
        dVar31 = dVar30;
      }
      if (fVar3 - 0.0 < 0.0) {
        dVar33 = (double)(float)(dVar28 * dVar30);
      }
      if (fVar3 - 0.0 < 0.0) {
        dVar29 = (double)(float)(dVar32 * dVar30);
      }
      *(float *)(puVar12 + 0xf) = (float)dVar31;
      *(float *)(puVar12 + 0xe) = (float)dVar33;
      *(float *)((int)puVar12 + 0x74) = (float)dVar29;
      *(float *)(param_2 + 0x10) = fVar7 * 0.3;
      *(float *)(param_2 + 0x14) = fVar2 * 0.3;
      *(float *)(param_2 + 0x18) = fVar8 * 0.3;
      fastfunc::FastVecAdd(uVar26 - 0xe0,(longlong)param_2 + 0x10,uVar26 - 0xf0);
      fVar8 = *(float *)((int)puVar12 + 0x84);
      fVar7 = *(float *)(puVar12 + 0x10);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(puVar12 + 0x11);
      *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)((int)puVar12 + 0x8c);
      bVar17 = *(byte *)(param_2 + 0x28);
      dVar31 = (double)(fVar7 * fVar7 + fVar8 * fVar8);
      dVar28 = dVar34;
      if ((double)(float)SQRT(dVar31) != dVar34) {
        dVar34 = 1.0 / SQRT(dVar31);
        dVar34 = (double)(float)(-(double)(float)((double)(float)(dVar31 * dVar34) * dVar34 - dVar35
                                                 ) * (double)(float)(dVar34 * 0.5) + dVar34);
        dVar34 = (double)(float)(-(double)(float)((double)(float)(dVar31 * dVar34) * dVar34 - dVar35
                                                 ) * (double)(float)(dVar34 * 0.5) + dVar34);
        fVar2 = (float)(-(double)(float)((double)(float)(dVar31 * dVar34) * dVar34 - dVar35) *
                        (double)(float)(dVar34 * 0.5) + dVar34);
        dVar28 = (double)(fVar7 * fVar2);
        dVar34 = (double)(fVar8 * fVar2);
      }
      *(float *)(param_2 + 0x10) = (float)dVar28;
      *(float *)(param_2 + 0x14) = (float)dVar34;
    }
  }
  else if (*(int *)(param_2 + 0x20) == 0) {
    bVar17 = 8;
    uVar25 = 0x47;
    *(undefined1 *)(param_2 + 0x28) = 8;
  }
  else {
    bVar17 = 8;
    uVar25 = (uint)*(short *)(*(int *)(param_2 + 0x20) + 0xa6);
    *(undefined1 *)(param_2 + 0x28) = 8;
  }
  if (bVar17 == 7) {
    if (*(byte *)(param_2 + 0x29) < 2) {
      lVar23 = 0xc;
      *param_5 = 2;
    }
    else {
      lVar23 = 0x11;
      *param_5 = 2;
    }
  }
  else if (bVar17 == 6) {
    lVar23 = 1;
    *param_5 = 2;
  }
  else if (bVar17 == 5) {
    if (*(byte *)(param_2 + 0x29) < 2) {
      lVar23 = 4;
      *param_5 = 3;
    }
    else {
      lVar23 = 7;
      *param_5 = 4;
    }
  }
  else if (bVar17 == 4) {
    lVar23 = 0xe;
    *param_5 = 2;
  }
  else if (bVar17 == 3) {
    if (*(byte *)(param_2 + 0x29) < 2) {
      lVar23 = 10;
      *param_5 = 2;
    }
    else if (*(byte *)(param_2 + 0x29) < 3) {
      lVar23 = 0xf;
      *param_5 = 2;
    }
    else {
      lVar23 = 0x10;
      *param_5 = 2;
      *(undefined2 *)(iVar22 + 0x14) = 0xffff;
      *(undefined2 *)(iVar22 + 0x1c) = 0;
    }
  }
  else if (bVar17 == 2) {
    if (*(byte *)(param_2 + 0x29) < 2) {
      lVar23 = 8;
      *param_5 = 2;
    }
    else {
      lVar23 = 0xd;
      *param_5 = 2;
    }
  }
  else if (bVar17 == 1) {
    if (*(byte *)(param_2 + 0x29) < 2) {
      lVar23 = 0xb;
      *param_5 = 2;
    }
    else if (*(byte *)(param_2 + 0x29) == 2) {
      lVar23 = 5;
      *param_5 = 2;
    }
    else {
      lVar23 = 9;
      *param_5 = 2;
    }
  }
  else if (bVar17 == 0) {
    if ((*(short *)(param_2 + 0x2a) == 1) || (*(short *)(param_2 + 0x2a) == 2)) {
      *param_5 = 2;
      lVar23 = 0;
    }
    else {
      lVar23 = 1;
      *param_5 = 2;
    }
  }
  else {
    lVar23 = 1;
    *param_5 = 2;
  }
  if (param_7 != (uint *)0x0) {
    *param_7 = uVar25;
  }
  uVar26 = (ulonglong)
           *(byte *)((int)&PTR_DAT_007291b0 + (int)(lVar23 << 2) + (uint)*(byte *)(iVar22 + 8));
  if ((int)*(short *)(iVar22 + 0x14) != uVar25) {
    *(undefined2 *)(iVar22 + 0x1c) = 0;
  }
  iVar16 = fastfunc::FastDecTimerS16(param_3 + 0x1c);
  uVar24 = (uint)lVar23;
  if (iVar16 != 0) {
    if (uVar24 == 0xb) {
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = loadVectorLeftIndexed(0x3c,0x1067f8);
      auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                           auVar37);
      auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36 = vectorSplatHalfWord(auVar36,1);
      uVar11 = storeVectorElementHalfWordIndexed(auVar36,0x1c,param_3);
      *(undefined2 *)(iVar22 + 0x1c) = uVar11;
    }
    else if (uVar24 == 7) {
      if (g_goldWeaponsArray.teslaClaw == '\0') {
        auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar36 = loadVectorLeftIndexed(0x3c,0x1067f8);
        auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      }
      else {
        auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar36 = loadVectorLeftIndexed(0x40,0x1067f8);
        auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      }
      auVar38 = ZEXT416(0xffffffff);
      auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
      auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar38 = vectorShiftLeftIntegerWord(auVar38,auVar38);
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,auVar36,
                           auVar38);
      auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36 = vectorSplatHalfWord(auVar36,1);
      uVar11 = storeVectorElementHalfWordIndexed(auVar36,0x1c,param_3);
      *(undefined2 *)(iVar22 + 0x1c) = uVar11;
    }
    else if (uVar24 == 4) {
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = loadVectorLeftIndexed(0x3c,0x1067f8);
      auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                           auVar37);
      auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36 = vectorSplatHalfWord(auVar36,1);
      uVar11 = storeVectorElementHalfWordIndexed(auVar36,0x1c,param_3);
      *(undefined2 *)(iVar22 + 0x1c) = uVar11;
    }
    else if (uVar24 == 1) {
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = loadVectorLeftIndexed(0x38,0x1067f8);
      auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                           auVar37);
      auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36 = vectorSplatHalfWord(auVar36,1);
      uVar11 = storeVectorElementHalfWordIndexed(auVar36,0x1c,param_3);
      *(undefined2 *)(iVar22 + 0x1c) = uVar11;
    }
    else if (uVar24 == 0) {
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = loadVectorLeftIndexed(0x34,0x1067f8);
      auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                           auVar37);
      auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36 = vectorSplatHalfWord(auVar36,1);
      uVar11 = storeVectorElementHalfWordIndexed(auVar36,0x1c,param_3);
      *(undefined2 *)(iVar22 + 0x1c) = uVar11;
    }
    else {
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = loadVectorLeftIndexed(0x44,0x1067f8);
      auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                           auVar37);
      auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36 = vectorSplatHalfWord(auVar36,1);
      uVar11 = storeVectorElementHalfWordIndexed(auVar36,0x1c,param_3);
      *(undefined2 *)(iVar22 + 0x1c) = uVar11;
    }
    goto LAB_001074c0;
  }
  if (uVar24 < 5) {
    if (uVar24 < 2) {
      uVar26 = uVar26 + ((LZCOUNT(-(param_4 & 0x10)) << 0x3a) >> 0x3f & 0xb - uVar26);
      if ((param_4 & 0x20) == 0) {
        *param_5 = 1;
      }
      *(undefined4 *)(param_2 + 0x2c) = 0;
      goto LAB_001074c0;
    }
    if (3 < uVar24) {
      uVar26 = uVar26 + ((LZCOUNT(-(param_4 & 1)) << 0x3a) >> 0x3f & 0xb - uVar26);
      if ((param_4 & 2) == 0) {
        *param_5 = 1;
      }
      *(undefined4 *)(param_2 + 0x2c) = 0;
      goto LAB_001074c0;
    }
  }
  else if (uVar24 < 8) {
    if (6 < uVar24) {
      uVar26 = uVar26 + ((LZCOUNT(-(param_4 & 4)) << 0x3a) >> 0x3f & 0xb - uVar26);
      if ((param_4 & 8) == 0) {
        *param_5 = 1;
      }
      *(undefined4 *)(param_2 + 0x2c) = 0;
      goto LAB_001074c0;
    }
  }
  else if (uVar24 == 0xb) {
    uVar26 = 0xc;
    goto LAB_001074c0;
  }
  uVar26 = 0xd;
  *(undefined4 *)(param_2 + 0x2c) = 0;
LAB_001074c0:
  *(short *)(iVar22 + 0x14) = (short)uVar25;
  *(short *)(iVar22 + 0x16) = (short)uVar25;
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = *(undefined4 *)(param_2 + 0x2c);
  }
  if (uVar24 == 4) {
    if (((param_1 != (MobyInstance *)0x0) && ((param_1->modeBits & HAS_SPECIAL_VARS) != NONE)) &&
       (iVar22 = *(int *)((int)param_1->pVar + 0x10), iVar22 != 0)) {
      *(undefined1 *)(iVar22 + 0x2e) = 1;
    }
  }
  else if (((param_1 != (MobyInstance *)0x0) && ((param_1->modeBits & HAS_SPECIAL_VARS) != NONE)) &&
          (iVar22 = *(int *)((int)param_1->pVar + 0x10), iVar22 != 0)) {
    *(undefined1 *)(iVar22 + 0x2e) = 0;
  }
  return uVar26;
}



//==== 001075b0  ns=mobyutil  size=0x230
// sig: undefined MB_AnimBoneCollLines(void)
// callers(0): 
// callees(4): 00057820 collproc::CollLine; 000efe40 mobyfunc::BlendAnimFrame; 000f1114 mobyfunc::GetBonePosition; 00502578 fastfunc::FastWrapRot

void mobyutil::MB_AnimBoneCollLines(MobyInstance *param_1,uint *param_2,int param_3)

{
  int iVar1;
  double dVar2;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 local_a0 [48];
  
  iVar1 = 0;
  if (param_3 != 0) {
    do {
      if (*param_2 == 0xffffffff) {
        return;
      }
      if ((((uint)param_1->updateId == *param_2) &&
          (dVar2 = (double)mobyfunc::BlendAnimFrame(param_1), (double)(float)param_2[1] <= dVar2))
         && (dVar2 <= (double)(float)param_2[2])) {
        mobyfunc::GetBonePosition(param_1,param_2[3],auStack_c0);
        mobyfunc::GetBonePosition(param_1,param_2[4],auStack_b0);
        fastfunc::FastWrapRot((float)param_2[6],(param_1->rotation).z);
        collproc::CollLine(auStack_c0,auStack_b0,0,param_1,local_a0);
      }
      iVar1 = iVar1 + 1;
      param_2 = param_2 + 8;
    } while (iVar1 != param_3);
  }
  return;
}



//==== 00107860  ns=mobyutil  size=0x580
// sig: undefined MB_DamageMobyList(void)
// callers(16): 000ec6f0 mobyattack::UpdateMoby_1523_GC_Blueball; 000ed970 mobyattack::UpdateMoby_256_GC_Rocket; 0012fec8 partupd::UpdatePart_54; 001bc250 mobyupdate_unsorted::UpdateMoby_1090; 00202b98 mobyupdate_unsorted::UpdateMoby_121; 00229518 mobyupdate_unsorted::UpdateMoby_1257; 0022c5a8 mobyupdate_unsorted::UpdateMoby_1261; 00293c48 mobyupdate_unsorted::UpdateMoby_153; 002a2438 mobyupdate_unsorted::UpdateMoby_160; 002af360 mobyupdate_unsorted::UpdateMoby_172; 002cbaf8 mobyupdate_unsorted::UpdateMoby_186; 00321a20 mobyupdate_unsorted::UpdateMoby_270; 003ead68 mobyupdate_unsorted::UpdateMoby_627; 0043dc00 mobyupdate_unsorted::UpdateMoby_74; 0048b288 mobyupdate_helpers::M849_0048b288; 004c3a28 mobyupdate_unsorted::UpdateMoby_938
// callees(1): 00105ab4 mobyutil::CollDamageMobyDirect

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [p2_mobyutil] iterates moby array (skip one), range test, CollDamageMobyDirect */

void mobyutil::MB_DamageMobyList
               (double param_1,double param_2,double param_3,int param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,int *param_8,int param_9,int param_10,
               undefined4 param_11)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  float *pfVar16;
  longlong lVar17;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  int iVar18;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  ulonglong in_f28;
  double dVar20;
  ulonglong in_f29;
  double dVar21;
  ulonglong in_f30;
  ulonglong in_f31;
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
  float fStack00000040;
  float fStack00000044;
  undefined1 in_stack_0000007f;
  undefined1 in_stack_00000087;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar1 = uVar12 - 0x150;
  puVar7 = (ulonglong *)lVar1;
  *puVar7 = uVar12;
  puVar7[0x2c] = in_LR;
  puVar7[0x26] = in_f28;
  puVar7[0x27] = in_f29;
  puVar7[0x28] = in_f30;
  puVar7[0x29] = in_f31;
  puVar7[0x22] = unaff_r28;
  *(float *)(puVar7 + 0x1a) = (float)param_2;
  puVar7[0x20] = unaff_r26;
  *(float *)((int)puVar7 + 0xd4) = (float)param_2;
  iVar18 = 0;
  *(float *)(puVar7 + 0x1b) = (float)param_2;
  *(float *)((int)puVar7 + 0xdc) = (float)param_2;
  uVar11 = 0xd0;
  puVar7[0x23] = unaff_r29;
  puVar7[0x24] = unaff_r30;
  puVar7[0x1e] = unaff_r24;
  puVar7[0x25] = unaff_r31;
  puVar7[0x1f] = unaff_r25;
  puVar7[0x21] = unaff_r27;
  auVar39 = *(undefined1 (*) [16])(puVar7 + 0x1a);
  if (0 < param_9) {
    fStack00000044 = (float)param_6;
    dVar21 = (double)fStack00000044;
    fStack00000040 = (float)((ulonglong)param_6 >> 0x20);
    dVar20 = (double)fStack00000040;
    _fStack00000040 = param_6;
    do {
      iVar5 = *param_8;
      if (iVar5 != param_10) {
        fVar3 = *(float *)(iVar5 + 0x14);
        fVar2 = (float)((double)*(float *)(iVar5 + 0x10) - dVar20);
        *(int *)(puVar7 + 0x14) = param_4;
        fVar3 = (float)((double)fVar3 - dVar21);
        *(undefined4 *)((int)puVar7 + 0xa4) = param_11;
        *(float *)((int)puVar7 + 0xac) = (float)param_1;
        *(undefined4 *)(puVar7 + 0x16) = param_11;
        uVar4 = *(undefined2 *)(param_4 + 0xa6);
        *(undefined1 *)(puVar7 + 0x15) = in_stack_0000007f;
        fVar9 = ABS(fVar2);
        fVar10 = ABS(fVar3);
        *(float *)(puVar7 + 0x18) = fVar2;
        *(undefined1 *)((int)puVar7 + 0xa9) = in_stack_00000087;
        *(undefined2 *)((int)puVar7 + 0xaa) = uVar4;
        *(float *)((int)puVar7 + 0xc4) = fVar3;
        *(float *)(puVar7 + 0x19) = fVar9 - fVar10;
        uVar13 = (ulonglong)(*(uint *)(puVar7 + 0x18) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar7 + 0x19) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar7 + 0xc4) >> 0x1d) & 4;
        fVar2 = ABS(*(float *)(puVar7 + 0x18));
        if (*(float *)(puVar7 + 0x19) - 0.0 < 0.0) {
          fVar2 = fVar10;
        }
        auVar25 = loadVectorLeftIndexed(uVar13 << 2,0x735900);
        auVar22 = loadVectorLeftIndexed(4,uVar13 << 2 | 0x735900);
        fVar3 = ABS(*(float *)((int)puVar7 + 0xc4));
        if (*(float *)(puVar7 + 0x19) - 0.0 < 0.0) {
          fVar3 = fVar9;
        }
        if (0.0 < fVar2) {
          lVar17 = uVar12 - 0x140;
          lVar14 = uVar12 - 0xd0;
          lVar15 = uVar12 - 0xe0;
          lVar19 = 2;
          fVar2 = (fVar3 - fVar2) / (fVar3 + fVar2);
          fVar3 = fVar2 * fVar2;
          *(float *)((int)puVar7 + 0x7c) = fVar2;
          *(float *)((int)puVar7 + 0x74) = fVar2;
          *(float *)(puVar7 + 0xf) = fVar2;
          *(float *)(puVar7 + 0xe) = fVar2;
          fVar2 = fVar3 * fVar3;
          *(float *)((int)puVar7 + 0x74) = *(float *)((int)puVar7 + 0x74) * fVar3;
          *(float *)(puVar7 + 0xf) = *(float *)(puVar7 + 0xf) * fVar2;
          *(float *)((int)puVar7 + 0x7c) = *(float *)((int)puVar7 + 0x7c) * fVar2 * fVar3;
          do {
            *(float *)((int)lVar17 + 0x70) = *(float *)((int)lVar17 + 0x60) * fVar2 * fVar2;
            iVar8 = (int)lVar15;
            lVar15 = lVar15 + 8;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar14 + 4) = *(float *)(iVar8 + 4) * fVar2 * fVar2;
            lVar14 = lVar14 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          pfVar16 = (float *)&DAT_007358e0;
          lVar15 = uVar12 - 0xe0;
          lVar17 = 4;
          lVar14 = lVar1;
          do {
            fVar2 = *pfVar16;
            fVar3 = pfVar16[1];
            pfVar16 = pfVar16 + 2;
            *(float *)((int)lVar14 + 0x70) = *(float *)((int)lVar14 + 0x70) * fVar2;
            lVar14 = lVar14 + 8;
            *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar3;
            lVar15 = lVar15 + 8;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          auVar23 = ZEXT416(0);
          auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
          lVar15 = 4;
          lVar14 = uVar12 - 0xe0;
          do {
            auVar29 = loadVectorLeftIndexed(uVar11,lVar14);
            lVar17 = lVar14 + 4;
            auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar24 = loadVectorRightIndexed(0x10,lVar14);
            lVar14 = lVar14 + 8;
            auVar26 = loadVectorLeftIndexed(uVar11,lVar17);
            auVar28 = loadVectorRightIndexed(0x10,lVar17);
            auVar23 = vectorAddFloatingPoint
                                (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,
                                 auVar29 | auVar24);
            auVar23 = vectorAddFloatingPoint(auVar23,auVar26 | auVar28);
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          auVar29 = loadVectorLeftIndexed(4,0x1077e0);
          auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar23 = vectorAddFloatingPoint
                              (auVar23,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60
                              );
          auVar22 = vectorMultiplyAddFloatingPoint(auVar23,auVar25,auVar22);
        }
        else {
          auVar22 = ZEXT416(0);
          auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        }
        auVar25 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar27 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar25 = ZEXT416(0xffffffff);
        auVar29 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar25 = ZEXT416(0xffffffff);
        auVar35 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar25 = loadVectorLeftIndexed(8,0x1077e0);
        auVar23 = loadVectorLeftIndexed(0xc,0x1077e0);
        auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar24 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
        auVar30 = vectorShiftLeftIntegerWord(auVar29,auVar29);
        auVar29 = vectorAddFloatingPoint
                            (auVar22,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60);
        auVar28 = vectorSubtractFloatingPoint(auVar24,auVar22);
        auVar25 = loadVectorLeftIndexed(0x10,0x1077e0);
        auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar26 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar25 = ZEXT416(0xffffffff);
        auVar23 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar25 = ZEXT416(0xffffffff);
        auVar37 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar32 = vectorSubtractFloatingPoint(auVar26,auVar22);
        auVar25 = ZEXT416(0xffffffff);
        auVar38 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar25 = vectorSubtractFloatingPoint(auVar24,auVar29);
        auVar31 = vectorSubtractFloatingPoint(auVar26,auVar29);
        auVar34 = vectorCompareGreaterThanFloatingPoint(auVar28,auVar22);
        auVar24 = vectorSubtractFloatingPoint(auVar24,auVar27);
        auVar22 = vectorConditionalSelect(auVar28,auVar22,auVar34);
        auVar28 = vectorSubtractFloatingPoint(auVar26,auVar27);
        auVar26 = vectorCompareGreaterThanFloatingPoint(auVar22,auVar32);
        auVar26 = vectorConditionalSelect(auVar32,auVar22,auVar26);
        auVar22 = ZEXT416(0xffffffff);
        auVar32 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar22 = vectorCompareGreaterThanFloatingPoint(auVar25,auVar29);
        auVar29 = vectorConditionalSelect(auVar25,auVar29,auVar22);
        auVar25 = vectorCompareGreaterThanFloatingPoint(auVar24,auVar27);
        auVar34 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        auVar22 = ZEXT416(0xffffffff);
        auVar32 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar22 = vectorCompareGreaterThanFloatingPoint(auVar29,auVar31);
        auVar24 = vectorConditionalSelect(auVar24,auVar27,auVar25);
        auVar33 = vectorMultiplyAddFloatingPoint(auVar26,auVar26,auVar34);
        auVar27 = vectorShiftLeftIntegerWord(auVar23,auVar23);
        auVar23 = vectorConditionalSelect(auVar31,auVar29,auVar22);
        auVar29 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        auVar22 = loadVectorLeftIndexed(0x14,0x1077e0);
        auVar25 = vectorCompareGreaterThanFloatingPoint(auVar24,auVar28);
        auVar31 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        auVar32 = vectorMultiplyAddFloatingPoint(auVar23,auVar23,auVar30);
        auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar34 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar22 = ZEXT416(0xffffffff);
        auVar30 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar24 = vectorConditionalSelect(auVar28,auVar24,auVar25);
        auVar22 = ZEXT416(0xffffffff);
        auVar25 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar22 = loadVectorLeftIndexed(0x18,0x1077e0);
        auVar35 = vectorShiftLeftIntegerWord(auVar30,auVar30);
        auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar36 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar27 = vectorMultiplyAddFloatingPoint(auVar33,auVar26,auVar27);
        auVar25 = vectorShiftLeftIntegerWord(auVar25,auVar25);
        auVar22 = loadVectorLeftIndexed(0x1c,0x1077e0);
        auVar29 = vectorMultiplyAddFloatingPoint(auVar32,auVar23,auVar29);
        auVar28 = vectorMultiplyAddFloatingPoint(auVar24,auVar24,auVar25);
        auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar25 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar26 = vectorMultiplyAddFloatingPoint(auVar27,auVar34,auVar26);
        auVar31 = vectorMultiplyAddFloatingPoint(auVar32,auVar29,auVar31);
        auVar29 = vectorMultiplyAddFloatingPoint(auVar29,auVar34,auVar23);
        auVar30 = vectorShiftLeftIntegerWord(auVar37,auVar37);
        auVar22 = ZEXT416(0xffffffff);
        auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar23 = vectorShiftLeftIntegerWord(auVar22,auVar22);
        auVar22 = ZEXT416(0xffffffff);
        auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar35 = vectorMultiplyAddFloatingPoint(auVar32,auVar31,auVar35);
        auVar29 = vectorMultiplyAddFloatingPoint(auVar31,auVar36,auVar29);
        auVar31 = vectorMultiplyAddFloatingPoint(auVar33,auVar27,auVar23);
        auVar27 = vectorShiftLeftIntegerWord(auVar22,auVar22);
        auVar23 = loadVectorLeftIndexed(0x20,0x1077e0);
        auVar22 = ZEXT416(0xffffffff);
        auVar37 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar22 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar23 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar27 = vectorMultiplyAddFloatingPoint(auVar28,auVar24,auVar27);
        auVar37 = vectorShiftLeftIntegerWord(auVar37,auVar37);
        auVar30 = vectorMultiplyAddFloatingPoint(auVar32,auVar35,auVar30);
        auVar29 = vectorMultiplyAddFloatingPoint(auVar35,auVar25,auVar29);
        auVar32 = vectorShiftLeftIntegerWord(auVar38,auVar38);
        auVar26 = vectorMultiplyAddFloatingPoint(auVar31,auVar36,auVar26);
        auVar22 = ZEXT416(0xffffffff);
        auVar35 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar32 = vectorMultiplyAddFloatingPoint(auVar33,auVar31,auVar32);
        auVar22 = ZEXT416(0xffffffff);
        auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar24 = vectorMultiplyAddFloatingPoint(auVar27,auVar34,auVar24);
        auVar35 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        auVar29 = vectorMultiplyAddFloatingPoint(auVar30,auVar23,auVar29);
        auVar30 = vectorShiftLeftIntegerWord(auVar22,auVar22);
        auVar22 = ZEXT416(0xffffffff);
        auVar31 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar30 = vectorMultiplyAddFloatingPoint(auVar33,auVar32,auVar30);
        auVar26 = vectorMultiplyAddFloatingPoint(auVar32,auVar25,auVar26);
        auVar34 = vectorMultiplyAddFloatingPoint(auVar28,auVar27,auVar37);
        auVar22 = ZEXT416(0xffffffff);
        auVar32 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar27 = vectorShiftLeftIntegerWord(auVar31,auVar31);
        auVar22 = ZEXT416(0xffffffff);
        auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar29 = vectorMultiplyAddFloatingPoint(auVar29,auVar39,auVar35);
        auVar26 = vectorMultiplyAddFloatingPoint(auVar30,auVar23,auVar26);
        auVar27 = vectorMultiplyAddFloatingPoint(auVar28,auVar34,auVar27);
        auVar30 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        auVar24 = vectorMultiplyAddFloatingPoint(auVar34,auVar36,auVar24);
        auVar32 = vectorShiftLeftIntegerWord(auVar22,auVar22);
        auVar31 = *(undefined1 (*) [16])(puVar7 + 0x12);
        auVar22 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar26 = vectorMultiplyAddFloatingPoint(auVar26,auVar39,auVar30);
        uVar6 = storeVectorElementWordIndexed
                          (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,0x90,lVar1)
        ;
        *(undefined4 *)(puVar7 + 0x12) = uVar6;
        auVar28 = vectorMultiplyAddFloatingPoint(auVar28,auVar27,auVar32);
        auVar25 = vectorMultiplyAddFloatingPoint(auVar27,auVar25,auVar24);
        auVar22 = ZEXT416(0xffffffff);
        auVar27 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar24 = vectorPermute(auVar29,auVar31,_DAT_00107810);
        auVar22 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar26 = vectorMultiplyAddFloatingPoint(auVar28,auVar23,auVar25);
        auVar28 = vectorShiftLeftIntegerWord(auVar27,auVar27);
        uVar6 = storeVectorElementWordIndexed
                          (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,0x94,lVar1)
        ;
        *(undefined4 *)((int)puVar7 + 0x94) = uVar6;
        *(float *)(puVar7 + 0x13) = (float)param_3;
        *(undefined4 *)((int)puVar7 + 0x9c) = 0x45afdf66;
        auVar22 = loadVectorLeftIndexed(0x40,0x1077e0);
        *(float *)(puVar7 + 0x1a) = (float)param_3;
        *(float *)((int)puVar7 + 0xd4) = (float)param_3;
        *(float *)(puVar7 + 0x1b) = (float)param_3;
        *(float *)((int)puVar7 + 0xdc) = (float)param_3;
        auVar29 = _DAT_00107850;
        auVar23 = _DAT_00107840;
        auVar25 = _DAT_00107830;
        auVar26 = vectorMultiplyAddFloatingPoint(auVar26,auVar39,auVar28);
        auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar11 = 0xd0;
        *(undefined4 *)((int)puVar7 + 0x5c) = *(undefined4 *)((int)puVar7 + 0xac);
        *(undefined4 *)(puVar7 + 0xb) = *(undefined4 *)(puVar7 + 0x15);
        *(undefined4 *)((int)puVar7 + 0x54) = *(undefined4 *)((int)puVar7 + 0xa4);
        *(undefined4 *)(puVar7 + 10) = *(undefined4 *)(puVar7 + 0x14);
        auVar25 = vectorPermute(*(undefined1 (*) [16])(puVar7 + 0x1a),auVar26,auVar25);
        *(undefined4 *)((int)puVar7 + 0x6c) = *(undefined4 *)((int)puVar7 + 0xbc);
        *(undefined4 *)(puVar7 + 0xd) = *(undefined4 *)(puVar7 + 0x17);
        *(undefined4 *)((int)puVar7 + 100) = *(undefined4 *)((int)puVar7 + 0xb4);
        *(undefined4 *)(puVar7 + 0xc) = *(undefined4 *)(puVar7 + 0x16);
        auVar22 = vectorPermute(auVar25,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 |
                                        auVar22 << 0x60,auVar23);
        auVar22 = vectorPermute(auVar22,auVar24,auVar29);
        *(undefined1 (*) [16])(puVar7 + 8) = auVar22;
        CollDamageMobyDirect
                  (iVar5,0x50,puVar7[8],puVar7[9],puVar7[10],puVar7[0xb],puVar7[0xc],puVar7[0xd]);
      }
      iVar18 = iVar18 + 1;
      param_8 = param_8 + 1;
    } while (iVar18 < param_9);
  }
  return;
}



//==== 00107de8  ns=mobyutil  size=0x390
// sig: undefined MB_VecAtan2Angles(void)
// callers(55): 001892a8 mobyupdate_helpers::M1022_001892a8; 0018a840 mobyupdate_helpers::M1023_0018a840; 0018e048 mobyupdate_helpers::M1027_0018e048; 001a8808 mobyupdate_helpers::M1059_001a8808; 001a8960 mobyupdate_helpers::M1059_001a8960; 001f6fe0 mobyupdate_helpers::M1199_001f6fe0; 001fbc78 mobyupdate_helpers::M1202_001fbc78; 0020f330 mobyupdate_helpers::M1226_0020f330; 00214198 mobyupdate_helpers::M1231_00214198; 00225048 mobyupdate_helpers::M1246_00225048; 00233180 mobyupdate_unsorted::UpdateMoby_1266; 0025ce40 FUN_0025ce40; 0027cd50 mobyupdate_helpers::M1440_0027cd50; 002803e8 mobyupdate_helpers::M1445_002803e8; 002d5f48 mobyupdate_helpers::M1906_002d5f48; 002f20a0 mobyupdate_unsorted::UpdateMoby_217; 00303ca8 mobyupdate_helpers::M234_00303ca8; 00306c48 mobyupdate_helpers::M238_00306c48; 003090f8 mobyupdate_unsorted::UpdateMoby_239; 00332560 mobyupdate_helpers::M294_00332560; 0036e680 mobyupdate_unsorted::UpdateMoby_427; 0037cfe0 mobyupdate_helpers::M44_0037cfe0; 0038f550 mobyupdate_unsorted::UpdateMoby_459; 0039d328 mobyupdate_helpers::M48_0039d328; 003a0ce8 mobyupdate_helpers::M491_003a0ce8
// callees(0): 

/* [p2_mobyutil] polynomial atan2 with quadrant table 0x735900 on packed vec */

void mobyutil::MB_VecAtan2Angles
               (ulonglong param_1,undefined8 param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong *puVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float *pfVar16;
  longlong lVar17;
  float fStack00000030;
  float fStack00000034;
  float fStack00000038;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0x80;
  puVar7 = (ulonglong *)lVar12;
  *puVar7 = uVar10;
  fStack00000038 = (float)((ulonglong)param_2 >> 0x20);
  fStack00000034 = (float)param_1;
  fStack00000030 = (float)(param_1 >> 0x20);
  if ((int)param_2 == 0x45afdf66) {
    fVar2 = ABS(fStack00000030);
    fVar5 = ABS(fStack00000034);
    *(float *)(puVar7 + 6) = fVar2 - fVar5;
    fVar1 = 0.0;
    uVar11 = param_1 >> 0x3c & 8 |
             (ulonglong)(*(uint *)(puVar7 + 6) >> 0x1e) & 2 | (param_1 << 0x20) >> 0x3d & 4;
    fVar3 = fVar2;
    if (*(float *)(puVar7 + 6) - 0.0 < 0.0) {
      fVar3 = fVar5;
    }
    fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar11 << 2));
    fVar4 = *(float *)(((uint)(uVar11 << 2) | 0x735900) + 4);
    if (*(float *)(puVar7 + 6) - 0.0 < 0.0) {
      fVar5 = fVar2;
    }
    if (0.0 < fVar3) {
      lVar15 = uVar10 - 0x70;
      lVar13 = uVar10 - 0x38;
      lVar14 = uVar10 - 0x48;
      lVar17 = 2;
      fVar3 = (fVar5 - fVar3) / (fVar5 + fVar3);
      fVar5 = fVar3 * fVar3;
      *(float *)((int)puVar7 + 0x44) = fVar3;
      *(float *)((int)puVar7 + 0x3c) = fVar3;
      *(float *)(puVar7 + 8) = fVar3;
      *(float *)(puVar7 + 7) = fVar3;
      fVar3 = fVar5 * fVar5;
      *(float *)((int)puVar7 + 0x3c) = *(float *)((int)puVar7 + 0x3c) * fVar5;
      *(float *)(puVar7 + 8) = *(float *)(puVar7 + 8) * fVar3;
      *(float *)((int)puVar7 + 0x44) = *(float *)((int)puVar7 + 0x44) * fVar3 * fVar5;
      do {
        *(float *)((int)lVar15 + 0x38) = *(float *)((int)lVar15 + 0x28) * fVar3 * fVar3;
        iVar8 = (int)lVar14;
        lVar14 = lVar14 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar13 + 4) = *(float *)(iVar8 + 4) * fVar3 * fVar3;
        lVar13 = lVar13 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar15 = uVar10 - 0x48;
      lVar17 = 4;
      pfVar16 = (float *)&DAT_007358e0;
      lVar13 = lVar15;
      lVar14 = lVar12;
      do {
        fVar3 = *pfVar16;
        fVar5 = pfVar16[1];
        pfVar16 = pfVar16 + 2;
        *(float *)((int)lVar14 + 0x38) = *(float *)((int)lVar14 + 0x38) * fVar3;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar5;
        lVar13 = lVar13 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar13 = 2;
      do {
        iVar8 = (int)lVar12;
        iVar9 = (int)lVar15;
        lVar12 = lVar12 + 0x10;
        lVar15 = lVar15 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar8 + 0x38) + *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                *(float *)(iVar9 + 0xc);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar6 + fVar4;
    }
    *param_3 = fVar1;
    *param_4 = *param_4 * SQRT(fStack00000030 * fStack00000030 + fStack00000034 * fStack00000034);
    *param_5 = *param_5 * fStack00000038;
  }
  else {
    fStack00000030 = ABS(fStack00000030);
    fStack00000034 = ABS(fStack00000034);
    *(float *)((int)puVar7 + 0x34) = fStack00000030 - fStack00000034;
    fVar1 = 0.0;
    uVar11 = param_1 >> 0x3c & 8 |
             (ulonglong)(*(uint *)((int)puVar7 + 0x34) >> 0x1e) & 2 | (param_1 << 0x20) >> 0x3d & 4;
    fVar3 = fStack00000030;
    if (*(float *)((int)puVar7 + 0x34) - 0.0 < 0.0) {
      fVar3 = fStack00000034;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar11 << 2));
    if (*(float *)((int)puVar7 + 0x34) - 0.0 < 0.0) {
      fStack00000034 = fStack00000030;
    }
    fVar2 = *(float *)(((uint)(uVar11 << 2) | 0x735900) + 4);
    if (0.0 < fVar3) {
      lVar15 = uVar10 - 0x70;
      lVar14 = uVar10 - 0x28;
      lVar13 = uVar10 - 0x18;
      lVar17 = 2;
      fVar3 = (fStack00000034 - fVar3) / (fStack00000034 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar7 + 100) = fVar3;
      *(float *)((int)puVar7 + 0x5c) = fVar3;
      *(float *)(puVar7 + 0xc) = fVar3;
      *(float *)(puVar7 + 0xb) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar7 + 0x5c) = *(float *)((int)puVar7 + 0x5c) * fVar4;
      *(float *)(puVar7 + 0xc) = *(float *)(puVar7 + 0xc) * fVar3;
      *(float *)((int)puVar7 + 100) = *(float *)((int)puVar7 + 100) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar15 + 0x58) = *(float *)((int)lVar15 + 0x48) * fVar3 * fVar3;
        iVar8 = (int)lVar14;
        lVar15 = lVar15 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar13 + 4) = *(float *)(iVar8 + 4) * fVar3 * fVar3;
        lVar13 = lVar13 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar15 = uVar10 - 0x28;
      pfVar16 = (float *)&DAT_007358e0;
      lVar17 = 4;
      lVar13 = lVar15;
      lVar14 = lVar12;
      do {
        fVar3 = *pfVar16;
        fVar4 = pfVar16[1];
        pfVar16 = pfVar16 + 2;
        *(float *)((int)lVar14 + 0x58) = *(float *)((int)lVar14 + 0x58) * fVar3;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar4;
        lVar13 = lVar13 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar13 = 2;
      do {
        iVar8 = (int)lVar12;
        lVar12 = lVar12 + 0x10;
        iVar9 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar8 + 0x58) + *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                *(float *)(iVar9 + 0xc);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar2;
    }
    *param_3 = fVar1;
  }
  return;
}



//==== 00108180  ns=mobyutil  size=0x80
// sig: undefined MB_computeLobVelocity(void)
// callers(37): 000be228 hero::HeroMovement; 00176c90 walk::Walk_UpdateStateMachine; 00195e08 mobyupdate_unsorted::UpdateMoby_1041; 0019aea0 mobyupdate_unsorted::UpdateMoby_1045; 001a02d8 mobyupdate_unsorted::UpdateMoby_1048; 001b33e0 mobyupdate_unsorted::UpdateMoby_107; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 001de6a0 mobyupdate_helpers::M1140_001de6a0; 00222588 mobyupdate_helpers::M1243_00222588; 00222fe0 mobyupdate_unsorted::UpdateMoby_1243; 00225b48 mobyupdate_unsorted::UpdateMoby_1246; 00233180 mobyupdate_unsorted::UpdateMoby_1266; 002caee0 mobyupdate_helpers::M186_002caee0; 002ce590 mobyupdate_unsorted::UpdateMoby_1885; 002d6f28 FUN_002d6f28; 002daa30 mobyupdate_helpers::M192_002daa30; 002fa6f0 mobyupdate_unsorted::UpdateMoby_227; 002fbe58 mobyupdate_helpers::M229_002fbe58; 00307270 mobyupdate_unsorted::UpdateMoby_238; 003090f8 mobyupdate_unsorted::UpdateMoby_239; 00346610 mobyupdate_unsorted::UpdateMoby_333; 0038a628 mobyupdate_unsorted::UpdateMoby_455; 003a14a8 mobyupdate_unsorted::UpdateMoby_491; 003ad150 mobyupdate_unsorted::UpdateMoby_541; 003b6708 mobyupdate_helpers::M562_003b6708
// callees(0): 

double mobyutil::MB_computeLobVelocity
                 (double param_1,double param_2,float *param_3,float *param_4,undefined8 param_5,
                 undefined8 param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  
  fVar2 = param_4[2];
  fVar3 = param_3[2];
  fVar1 = (float)((double)SQRT((*param_4 - *param_3) * (*param_4 - *param_3) +
                               (param_4[1] - param_3[1]) * (param_4[1] - param_3[1])) / param_1);
  if (param_7 != (float *)0x0) {
    *param_7 = fVar1;
    fVar3 = param_3[2];
    fVar2 = param_4[2];
  }
  dVar4 = (double)(-((float)((double)(fVar1 * fVar1) * param_2) * 0.5 + (fVar3 - fVar2)) / fVar1);
  dVar5 = 0.0;
  if (0.0 - fVar1 < 0.0) {
    dVar5 = dVar4;
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar5 = dVar4;
  }
  return dVar5;
}



//==== 00108240  ns=mobyutil  size=0xba4
// sig: undefined MB_randPrimPoints(void)
// callers(2): 0010aa50 mobyutil::MB_MistDeathEffect; 0011aa78 mobyutil::MB_SpawnDebris
// callees(2): 000f595c mobyfunc::Moby_BuildJointMatrices; 005c8318 rand

longlong mobyutil::MB_randPrimPoints
                   (double param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                   ulonglong param_5,uint param_6)

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
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uVar16;
  ulonglong *puVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  longlong lVar22;
  int iVar23;
  float *pfVar24;
  float *pfVar25;
  longlong lVar26;
  longlong lVar27;
  undefined2 *puVar28;
  ulonglong unaff_r14;
  ulonglong unaff_r15;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  int iVar29;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong uVar30;
  longlong lVar31;
  ulonglong unaff_r24;
  longlong lVar32;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  uint uVar33;
  int iVar34;
  ulonglong unaff_r27;
  longlong lVar35;
  ulonglong uVar36;
  float *pfVar37;
  ulonglong unaff_r28;
  int iVar38;
  ulonglong unaff_r29;
  longlong lVar39;
  undefined2 *puVar40;
  ulonglong unaff_r30;
  longlong lVar41;
  undefined2 *puVar42;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar43;
  ulonglong in_f18;
  double in_f19;
  ulonglong in_f20;
  double dVar44;
  ulonglong in_f21;
  double dVar45;
  ulonglong in_f22;
  double dVar46;
  ulonglong in_f23;
  double dVar47;
  ulonglong in_f24;
  double dVar48;
  ulonglong in_f25;
  double dVar49;
  ulonglong in_f26;
  double dVar50;
  ulonglong in_f27;
  double dVar51;
  ulonglong in_f28;
  double dVar52;
  ulonglong in_f29;
  double dVar53;
  ulonglong in_f30;
  double dVar54;
  double dVar55;
  ulonglong in_f31;
  double dVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  
  uVar36 = ZEXT48(&stack0x00000000);
  lVar1 = uVar36 - 0xa70;
  puVar17 = (ulonglong *)lVar1;
  *puVar17 = uVar36;
  puVar17[0x150] = in_LR;
  puVar17[0x140] = in_f18;
  puVar17[0x141] = (ulonglong)in_f19;
  puVar17[0x142] = in_f20;
  puVar17[0x143] = in_f21;
  puVar17[0x144] = in_f22;
  puVar17[0x145] = in_f23;
  puVar17[0x146] = in_f24;
  puVar17[0x147] = in_f25;
  puVar17[0x148] = in_f26;
  puVar17[0x149] = in_f27;
  puVar17[0x14a] = in_f28;
  puVar17[0x14b] = in_f29;
  puVar17[0x14c] = in_f30;
  puVar17[0x14d] = in_f31;
  puVar17[0x137] = unaff_r23;
  puVar17[0x139] = unaff_r25;
  iVar18 = (int)param_2;
  iVar13 = *(int *)(iVar18 + 0x24);
  puVar17[0x12a] = param_4;
  puVar17[299] = param_5;
  puVar17[0x13f] = unaff_r31;
  puVar17[0x12f] = unaff_r15;
  uVar14 = *(uint *)(iVar13 + 0x10);
  uVar30 = (ulonglong)uVar14;
  puVar17[0x13e] = unaff_r30;
  puVar17[0x13d] = unaff_r29;
  puVar17[0x13c] = unaff_r28;
  puVar17[0x13b] = unaff_r27;
  puVar17[0x13a] = unaff_r26;
  puVar17[0x138] = unaff_r24;
  puVar17[0x136] = unaff_r22;
  puVar17[0x135] = unaff_r21;
  puVar17[0x134] = unaff_r20;
  puVar17[0x133] = unaff_r19;
  puVar17[0x132] = unaff_r18;
  puVar17[0x131] = unaff_r17;
  puVar17[0x130] = unaff_r16;
  puVar17[0x12e] = unaff_r14;
  if (uVar14 == 0) {
    lVar22 = 0;
  }
  else {
    if (*(short *)(uVar14 + 2) != 0) {
      mobyfunc::Moby_BuildJointMatrices(param_2,*(short *)(uVar14 + 2),uVar36 - 0x9d0);
    }
    uVar14 = *(uint *)(uVar14 + 4);
    if ((int)uVar14 < 1) {
      lVar22 = 0;
    }
    else {
      dVar56 = 0.0;
      uVar33 = 0;
      iVar29 = ((int)uVar14 >> 5) + (uint)((int)uVar14 < 0 && (uVar14 & 0x1f) != 0);
      lVar22 = uVar30 + 0x10;
      iVar38 = 0;
      iVar13 = (int)(uVar36 - 0x9d0);
      if (0 < iVar29) {
        lVar39 = uVar30 + 0x22;
        auVar58 = loadVectorLeftIndexed(4,0x108200);
        lVar41 = uVar30 + 0x26;
        lVar27 = uVar30 + 0x2a;
        auVar62 = loadVectorLeftIndexed(8,0x108200);
        lVar35 = uVar30 + 0x2e;
        auVar58 = auVar58 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar59 = auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60;
        auVar58 = auVar62 >> 0x60 & (undefined1  [16])0xffffffff;
        lVar31 = uVar30 + 0x1c;
        lVar32 = uVar36 - 0x1d0;
        lVar26 = lVar1;
        iVar38 = 0;
        do {
          puVar15 = (uint *)lVar22;
          uVar14 = *puVar15 & 0xff;
          if ((*puVar15 & 1) != 0 && (1 << (uVar33 & 0x3f) & param_6) != 0) {
            iVar23 = (int)lVar26;
            *(uint **)(iVar23 + 0x8f0) = puVar15;
            puVar40 = (undefined2 *)lVar39;
            puVar42 = (undefined2 *)lVar41;
            puVar28 = (undefined2 *)lVar27;
            if (uVar14 < 3) {
              if (uVar14 < 2) {
                uVar10 = *puVar40;
                uVar11 = *(undefined2 *)(puVar15 + 5);
                uVar12 = *puVar42;
                *(undefined2 *)(puVar17 + 0xe) = *(undefined2 *)(puVar15 + 4);
                *(undefined2 *)((int)puVar17 + 0x72) = uVar10;
                *(undefined2 *)((int)puVar17 + 0x74) = uVar11;
                *(undefined2 *)((int)puVar17 + 0x76) = uVar12;
                uVar10 = *puVar28;
                auVar62 = ZEXT416(0xffffffff);
                auVar62 = auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60;
                uVar11 = *(undefined2 *)(puVar15 + 7);
                uVar12 = *(undefined2 *)lVar35;
                *(undefined2 *)(puVar17 + 0xf) = *(undefined2 *)(puVar15 + 6);
                *(undefined2 *)((int)puVar17 + 0x7a) = uVar10;
                *(undefined2 *)((int)puVar17 + 0x7c) = uVar11;
                auVar57 = vectorShiftLeftIntegerWord(auVar62,auVar62);
                *(undefined2 *)((int)puVar17 + 0x7e) = uVar12;
                auVar61 = loadVectorLeftIndexed(0x2c,param_2);
                auVar62 = ZEXT416(0xffffffff);
                auVar62 = auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60;
                auVar63 = vectorMultiplyAddFloatingPoint(auVar61,auVar59,auVar57);
                auVar64 = loadVectorLeftIndexed(0x7c,lVar1);
                auVar60 = loadVectorLeftIndexed(0x70,lVar1);
                auVar66 = vectorShiftLeftIntegerWord(auVar62,auVar62);
                auVar57 = loadVectorLeftIndexed(0x74,lVar1);
                auVar62 = loadVectorLeftIndexed(0x78,lVar1);
                auVar63 = vectorMultiplyAddFloatingPoint(auVar64,auVar63,auVar66);
                auVar64 = auVar63 >> 0x60 & (undefined1  [16])0xffffffff;
                uVar16 = storeVectorElementWordIndexed
                                   (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60,
                                    0x7c,lVar1);
                *(undefined4 *)((int)puVar17 + 0x7c) = uVar16;
              }
              else {
                auVar62 = ZEXT416(0xffffffff);
                auVar62 = auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60;
                auVar66 = vectorShiftLeftIntegerWord(auVar62,auVar62);
                auVar63 = *(undefined1 (*) [16])(puVar15[1] * 0x10 + iVar13);
                *(undefined1 (*) [16])(puVar17 + 0xe) = auVar63;
                uVar10 = *puVar40;
                uVar11 = *(undefined2 *)(puVar15 + 5);
                uVar12 = *puVar42;
                *(undefined2 *)(puVar17 + 0x10) = *(undefined2 *)(puVar15 + 4);
                *(undefined2 *)((int)puVar17 + 0x82) = uVar10;
                *(undefined2 *)((int)puVar17 + 0x84) = uVar11;
                *(undefined2 *)((int)puVar17 + 0x86) = uVar12;
                uVar10 = *puVar28;
                *(undefined2 *)(puVar17 + 0x11) = *(undefined2 *)(puVar15 + 6);
                *(undefined2 *)((int)puVar17 + 0x8a) = uVar10;
                auVar60 = loadVectorLeftIndexed(in_LR,lVar31);
                auVar64 = loadVectorRightIndexed(0x10,lVar31);
                auVar61 = loadVectorLeftIndexed(0x2c,param_2);
                auVar62 = auVar63 >> 0x60 & (undefined1  [16])0xffffffff;
                auVar65 = loadVectorLeftIndexed(0x80,lVar1);
                auVar57 = auVar63 >> 0x40 & (undefined1  [16])0xffffffff;
                auVar64 = vectorMultiplyAddFloatingPoint(auVar60 | auVar64,auVar61,auVar66);
                auVar63 = auVar63 >> 0x20 & (undefined1  [16])0xffffffff;
                auVar60 = vectorAddFloatingPoint
                                    (auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60,
                                     auVar65);
                auVar62 = ZEXT416(0xffffffff);
                auVar66 = auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60;
                auVar62 = loadVectorLeftIndexed(0x84,lVar1);
                auVar65 = loadVectorLeftIndexed(0x88,lVar1);
                auVar57 = vectorAddFloatingPoint
                                    (auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60,
                                     auVar62);
                auVar66 = vectorShiftLeftIntegerWord(auVar66,auVar66);
                auVar62 = vectorAddFloatingPoint
                                    (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60,
                                     auVar65);
                auVar63 = vectorMultiplyAddFloatingPoint(auVar64,auVar59,auVar66);
              }
              auVar64 = ZEXT416(0xffffffff);
              auVar65 = auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60;
              auVar64 = ZEXT416(0xffffffff);
              auVar67 = auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60;
              auVar63 = auVar63 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar66 = auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60;
              auVar63 = ZEXT416(0xffffffff);
              auVar68 = auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60;
              auVar64 = vectorShiftLeftIntegerWord(auVar65,auVar65);
              auVar65 = vectorShiftLeftIntegerWord(auVar67,auVar67);
              auVar63 = ZEXT416(0xffffffff);
              auVar69 = auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60;
              auVar63 = ZEXT416(0xffffffff);
              auVar70 = auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60;
              auVar64 = vectorMultiplyAddFloatingPoint(auVar61,auVar59,auVar64);
              auVar57 = auVar57 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar61 = vectorMultiplyAddFloatingPoint
                                  (auVar66,auVar58 | auVar58 << 0x20 | auVar58 << 0x40 |
                                           auVar58 << 0x60,auVar65);
              auVar63 = auVar62 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar62 = ZEXT416(0xffffffff);
              auVar62 = auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60;
              auVar60 = auVar60 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar67 = vectorShiftLeftIntegerWord(auVar68,auVar68);
              auVar68 = vectorShiftLeftIntegerWord(auVar69,auVar69);
              auVar65 = vectorShiftLeftIntegerWord(auVar62,auVar62);
              auVar69 = vectorShiftLeftIntegerWord(auVar70,auVar70);
              auVar62 = auVar64 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar64 = auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60;
              auVar61 = vectorMultiplyAddFloatingPoint(auVar61,auVar66,auVar65);
              auVar62 = ZEXT416(0xffffffff);
              auVar65 = auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60;
              auVar62 = vectorMultiplyAddFloatingPoint
                                  (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60,
                                   auVar64,auVar67);
              auVar57 = vectorMultiplyAddFloatingPoint
                                  (auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60,
                                   auVar64,auVar68);
              auVar63 = vectorMultiplyAddFloatingPoint
                                  (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60,
                                   auVar64,auVar69);
              auVar60 = vectorShiftLeftIntegerWord(auVar65,auVar65);
              auVar60 = vectorMultiplyAddFloatingPoint(auVar61,auVar66,auVar60);
              uVar16 = storeVectorElementWordIndexed(auVar63,0x70,lVar1);
              *(undefined4 *)(puVar17 + 0xe) = uVar16;
              uVar16 = storeVectorElementWordIndexed(auVar57,0x74,lVar1);
              *(undefined4 *)((int)puVar17 + 0x74) = uVar16;
              uVar16 = storeVectorElementWordIndexed(auVar62,0x78,lVar1);
              *(undefined4 *)(puVar17 + 0xf) = uVar16;
              uVar16 = storeVectorElementWordIndexed(auVar60,0,lVar32);
              *(undefined4 *)lVar32 = uVar16;
            }
            else if (uVar14 < 4) {
              uVar10 = *puVar40;
              uVar11 = *(undefined2 *)(puVar15 + 5);
              uVar12 = *puVar42;
              *(undefined2 *)(puVar17 + 0x12) = *(undefined2 *)(puVar15 + 4);
              *(undefined2 *)((int)puVar17 + 0x92) = uVar10;
              *(undefined2 *)((int)puVar17 + 0x94) = uVar11;
              *(undefined2 *)((int)puVar17 + 0x96) = uVar12;
              uVar10 = *(undefined2 *)(puVar15 + 6);
              uVar11 = *puVar28;
              uVar12 = *(undefined2 *)lVar35;
              *(undefined2 *)((int)puVar17 + 0x9c) = *(undefined2 *)(puVar15 + 7);
              *(undefined2 *)(puVar17 + 0x13) = uVar10;
              *(undefined2 *)((int)puVar17 + 0x9a) = uVar11;
              *(undefined2 *)((int)puVar17 + 0x9e) = uVar12;
              fVar3 = *(float *)(iVar18 + 0x2c);
              fVar4 = *(float *)((int)puVar17 + 0x9c) * fVar3;
              *(float *)(puVar17 + 0x12) = *(float *)(puVar17 + 0x12) * fVar3;
              *(float *)((int)puVar17 + 0x94) = *(float *)((int)puVar17 + 0x94) * fVar3;
              fVar2 = fVar4 * 0.0009765625;
              *(float *)(puVar17 + 0x13) = *(float *)(puVar17 + 0x13) * fVar3;
              *(float *)(iVar23 + 0x8a0) =
                   fVar4 * 0.004089593 * fVar2 * fVar2 +
                   fVar4 * 0.0015339808 * fVar2 * fVar3 * 0.0009765625 * (float)puVar15[1];
            }
            else if (uVar14 < 5) {
              fVar3 = *(float *)(iVar18 + 0x2c) * 0.0009765625;
              pfVar37 = (float *)(*(short *)((int)puVar15 + 6) * 0x10 + iVar13);
              pfVar24 = (float *)(*(short *)(puVar15 + 1) * 0x10 + iVar13);
              fVar5 = pfVar24[1] * fVar3 - pfVar37[1] * fVar3;
              fVar4 = *pfVar24 * fVar3 - *pfVar37 * fVar3;
              fVar2 = pfVar24[2] * fVar3 - pfVar37[2] * fVar3;
              fVar3 = (float)puVar15[3] * *(float *)(iVar18 + 0x2c);
              *(float *)(iVar23 + 0x8a0) =
                   fVar3 * 0.0015339808 * fVar3 * 0.0009765625 *
                   SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar5 * fVar5);
            }
            lVar32 = lVar32 + 4;
            iVar38 = iVar38 + 1;
            lVar26 = lVar26 + 4;
            dVar56 = (double)(float)(dVar56 + (double)*(float *)(iVar23 + 0x8a0));
          }
          uVar33 = uVar33 + 1;
          lVar39 = lVar39 + 0x20;
          lVar41 = lVar41 + 0x20;
          lVar27 = lVar27 + 0x20;
          lVar35 = lVar35 + 0x20;
          lVar31 = lVar31 + 0x20;
          lVar22 = lVar22 + 0x20;
        } while ((int)uVar33 < iVar29);
      }
      iVar29 = 0;
      puVar17[300] = (longlong)(int)(param_1 * dVar56 + 0.5);
      lVar22 = (longlong)*(int *)((int)puVar17 + 0x964);
      lVar22 = lVar22 + ((longlong)(puVar17[0x12a] - lVar22) >> 0x3f & puVar17[0x12a] - lVar22);
      if (0 < (int)lVar22) {
        uVar36 = puVar17[299];
        dVar44 = in_f19;
        do {
          iVar23 = rand();
          iVar34 = 0;
          puVar17[300] = (longlong)(int)(iVar23 >> 0xf & 0x7fff);
          dVar48 = 3.0517578125e-05;
          fVar3 = (float)((double)(longlong)puVar17[300] * dVar56) * 3.0517578e-05;
          lVar26 = lVar1;
          if (0 < iVar38) {
            do {
              fVar2 = *(float *)((int)lVar26 + 0x8a0);
              if (fVar3 < fVar2) break;
              iVar34 = iVar34 + 1;
              fVar3 = fVar3 - fVar2;
              lVar26 = lVar26 + 4;
            } while (iVar34 < iVar38);
          }
          puVar15 = *(uint **)((int)puVar17 + iVar34 * 4 + 0x8f0);
          uVar14 = *puVar15 & 0xff;
          pfVar37 = (float *)uVar36;
          if (uVar14 < 3) {
            if (uVar14 < 2) {
              fVar3 = (float)puVar15[4];
              fVar2 = (float)puVar15[5];
              fVar4 = (float)puVar15[6];
              fVar5 = (float)puVar15[7];
              fVar6 = *(float *)(iVar18 + 0x2c);
            }
            else {
              auVar59 = *(undefined1 (*) [16])(puVar15[1] * 0x10 + iVar13);
              auVar58 = auVar59 >> 0x40 & (undefined1  [16])0xffffffff;
              *(undefined1 (*) [16])(puVar17 + 0x128) = auVar59;
              fVar7 = (float)puVar15[4];
              fVar2 = (float)puVar15[5];
              fVar4 = (float)puVar15[6];
              fVar6 = *(float *)(iVar18 + 0x2c);
              fVar5 = (float)puVar15[3];
              fVar3 = *(float *)(puVar17 + 0x128);
              auVar59 = auVar59 >> 0x20 & (undefined1  [16])0xffffffff;
              *(undefined1 (*) [16])(puVar17 + 0x128) =
                   auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60;
              fVar3 = fVar3 + fVar7;
              fVar2 = *(float *)(puVar17 + 0x128) + fVar2;
              *(undefined1 (*) [16])(puVar17 + 0x128) =
                   auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60;
              fVar4 = *(float *)(puVar17 + 0x128) + fVar4;
            }
            dVar51 = 0.0009765625;
            dVar47 = (double)(fVar4 * fVar6);
            dVar45 = (double)(fVar3 * fVar6);
            dVar46 = (double)(fVar2 * fVar6);
            dVar54 = (double)(fVar5 * fVar6 * 0.0009765625);
            dVar50 = -dVar54;
            dVar49 = (double)(float)(dVar54 - dVar50);
            do {
              iVar23 = rand();
              puVar17[300] = (longlong)(int)(iVar23 >> 0xf & 0x7fff);
              dVar53 = (double)(float)((double)(float)((double)(longlong)puVar17[300] * dVar49) *
                                       dVar48 + dVar50);
              iVar23 = rand();
              puVar17[300] = (longlong)(int)(iVar23 >> 0xf & 0x7fff);
              dVar52 = (double)(float)((double)(float)((double)(longlong)puVar17[300] * dVar49) *
                                       dVar48 + dVar50);
              iVar23 = rand();
              puVar17[300] = (longlong)(int)(iVar23 >> 0xf & 0x7fff);
              dVar43 = (double)(float)((double)(float)((double)(longlong)puVar17[300] * dVar49) *
                                       dVar48 + dVar50);
            } while (dVar54 < (double)SQRT((float)(dVar43 * dVar43 +
                                                  (double)(float)(dVar53 * dVar53 +
                                                                 (double)(float)(dVar52 * dVar52))))
                    );
            fVar3 = (float)(dVar46 * dVar51 + dVar52);
            dVar48 = (double)(float)(dVar45 * dVar51 + dVar53);
            fVar2 = (float)(dVar47 * dVar51 + dVar43);
            fVar4 = *(float *)(iVar18 + 0xd4);
            fVar5 = *(float *)(iVar18 + 0xc4);
            fVar6 = *(float *)(iVar18 + 0xd8);
            fVar7 = *(float *)(iVar18 + 0xe4);
            fVar8 = *(float *)(iVar18 + 200);
            fVar9 = *(float *)(iVar18 + 0xe8);
            fVar19 = *(float *)(iVar18 + 0xdc) * fVar3 +
                     *(float *)(iVar18 + 0xec) * fVar2 +
                     (float)((double)*(float *)(iVar18 + 0xcc) * dVar48 + in_f19);
            in_f19 = (double)fVar19;
            *pfVar37 = *(float *)(iVar18 + 0xe0) * fVar2 +
                       (float)((double)*(float *)(iVar18 + 0xc0) * dVar48 +
                              (double)(*(float *)(iVar18 + 0xd0) * fVar3)) +
                       *(float *)(iVar18 + 0x10);
            pfVar37[1] = fVar7 * fVar2 + (float)((double)fVar5 * dVar48 + (double)(fVar4 * fVar3)) +
                         *(float *)(iVar18 + 0x14);
            fVar4 = *(float *)(iVar18 + 0x18);
            pfVar37[3] = fVar19;
            pfVar37[2] = fVar9 * fVar2 + (float)((double)fVar8 * dVar48 + (double)(fVar6 * fVar3)) +
                         fVar4;
          }
          else if (uVar14 < 4) {
            dVar54 = (double)(float)puVar15[7];
            dVar45 = (double)*(float *)(iVar18 + 0x2c);
            dVar51 = 0.0009765625;
            dVar50 = (double)(float)((double)(float)puVar15[4] * dVar45);
            dVar49 = (double)(float)((double)(float)puVar15[5] * dVar45);
            dVar47 = (double)(float)((double)(float)puVar15[6] * dVar45);
            fVar3 = (float)(dVar54 * dVar45) * 0.0009765625;
            dVar46 = (double)((float)((double)(float)puVar15[1] * dVar45) * 0.0009765625);
            dVar45 = (double)(fVar3 * fVar3);
            iVar23 = rand();
            puVar17[300] = (longlong)(int)(iVar23 >> 0xf & 0x7fff);
            dVar45 = (double)SQRT((float)((double)(float)((double)(longlong)puVar17[300] * dVar45) *
                                         dVar48));
            iVar23 = rand();
            puVar17[300] = (longlong)(int)(iVar23 >> 0xf & 0x7fff);
            dVar46 = (double)(float)((double)(longlong)puVar17[300] * dVar46);
            iVar23 = rand();
            puVar17[300] = (longlong)(int)((iVar23 >> 0xf & 0xfffU) - 0x800);
            fVar3 = (float)(longlong)puVar17[300] * 3.1415927 * 0.00048828125;
            fVar2 = fVar3 + 1.5707963;
            fVar4 = 3.1415925 - fVar3;
            if (fVar3 - (3.1415925 - fVar3) < 0.0) {
              fVar4 = fVar3;
            }
            fVar5 = 3.1415925 - fVar2;
            if (fVar2 - (3.1415925 - fVar2) < 0.0) {
              fVar5 = fVar2;
            }
            fVar6 = -3.1415925 - fVar3;
            if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
              fVar6 = fVar4;
            }
            fVar3 = *(float *)(iVar18 + 0x10);
            fVar4 = -3.1415925 - fVar2;
            if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
              fVar4 = fVar5;
            }
            fVar7 = fVar6 * fVar6;
            fVar8 = fVar4 * fVar4;
            fVar20 = fVar7 * fVar7 * fVar6;
            fVar2 = *(float *)(iVar18 + 0x14);
            fVar5 = *(float *)(iVar18 + 0x18);
            pfVar37[3] = (float)dVar54;
            fVar9 = fVar8 * fVar8 * fVar4;
            fVar21 = fVar7 * fVar20;
            fVar19 = fVar8 * fVar9;
            pfVar37[2] = (float)(dVar47 * dVar51 + (double)(float)(dVar46 * dVar48 + (double)fVar5))
            ;
            pfVar37[1] = (float)(dVar49 * dVar51 +
                                (double)(float)((double)(fVar7 * fVar21 * 2.601887e-06 +
                                                        fVar21 * -0.0001980741 +
                                                        fVar20 * 0.0083330255 +
                                                        fVar7 * fVar6 * -0.16666657 + fVar6) *
                                                dVar45 + (double)fVar2));
            *pfVar37 = (float)(dVar50 * dVar51 +
                              (double)(float)((double)(fVar8 * fVar19 * 2.601887e-06 +
                                                      fVar19 * -0.0001980741 +
                                                      fVar9 * 0.0083330255 +
                                                      fVar8 * fVar4 * -0.16666657 + fVar4) * dVar45
                                             + (double)fVar3));
          }
          else if (uVar14 < 5) {
            dVar45 = (double)*(float *)(iVar18 + 0x2c);
            pfVar24 = (float *)(*(short *)(puVar15 + 1) * 0x10 + iVar13);
            pfVar25 = (float *)(*(short *)((int)puVar15 + 6) * 0x10 + iVar13);
            dVar55 = (double)(float)((double)*pfVar24 * dVar45);
            dVar53 = (double)(float)((double)pfVar24[1] * dVar45);
            dVar52 = (double)(float)((double)pfVar24[2] * dVar45);
            dVar54 = (double)(float)((double)*pfVar25 * dVar45 - dVar55);
            dVar51 = (double)(float)((double)pfVar25[1] * dVar45 - dVar53);
            dVar46 = (double)(float)((double)pfVar25[2] * dVar45 - dVar52);
            iVar23 = rand();
            puVar17[300] = (longlong)(int)(iVar23 >> 0xf & 0x7fff);
            dVar50 = 0.0009765625;
            dVar43 = (double)((float)puVar15[3] * *(float *)(iVar18 + 0x2c) * 0.0009765625);
            dVar49 = -dVar43;
            dVar45 = (double)(float)((double)(longlong)puVar17[300] * dVar48);
            dVar47 = (double)(float)(dVar43 - dVar49);
            dVar54 = (double)(float)(dVar54 * dVar45 + dVar55);
            dVar51 = (double)(float)(dVar51 * dVar45 + dVar53);
            dVar45 = (double)(float)(dVar46 * dVar45 + dVar52);
            do {
              iVar23 = rand();
              puVar17[300] = (longlong)(int)(iVar23 >> 0xf & 0x7fff);
              dVar53 = (double)(float)((double)(float)((double)(longlong)puVar17[300] * dVar47) *
                                       dVar48 + dVar49);
              iVar23 = rand();
              puVar17[300] = (longlong)(int)(iVar23 >> 0xf & 0x7fff);
              dVar52 = (double)(float)((double)(float)((double)(longlong)puVar17[300] * dVar47) *
                                       dVar48 + dVar49);
              iVar23 = rand();
              puVar17[300] = (longlong)(int)(iVar23 >> 0xf & 0x7fff);
              dVar46 = (double)(float)((double)(float)((double)(longlong)puVar17[300] * dVar47) *
                                       dVar48 + dVar49);
            } while (dVar43 < (double)SQRT((float)(dVar46 * dVar46 +
                                                  (double)(float)(dVar53 * dVar53 +
                                                                 (double)(float)(dVar52 * dVar52))))
                    );
            fVar3 = (float)(dVar51 * dVar50 + dVar52);
            dVar48 = (double)(float)(dVar54 * dVar50 + dVar53);
            fVar4 = *(float *)(iVar18 + 0xd4);
            fVar2 = (float)(dVar45 * dVar50 + dVar46);
            fVar5 = *(float *)(iVar18 + 0xc4);
            fVar6 = *(float *)(iVar18 + 0xd8);
            fVar7 = *(float *)(iVar18 + 0xe4);
            fVar8 = *(float *)(iVar18 + 200);
            fVar9 = *(float *)(iVar18 + 0xe8);
            fVar19 = *(float *)(iVar18 + 0xdc) * fVar3 +
                     *(float *)(iVar18 + 0xec) * fVar2 +
                     (float)((double)*(float *)(iVar18 + 0xcc) * dVar48 + dVar44);
            dVar44 = (double)fVar19;
            *pfVar37 = *(float *)(iVar18 + 0xe0) * fVar2 +
                       (float)((double)*(float *)(iVar18 + 0xc0) * dVar48 +
                              (double)(*(float *)(iVar18 + 0xd0) * fVar3)) +
                       *(float *)(iVar18 + 0x10);
            pfVar37[1] = fVar7 * fVar2 + (float)((double)fVar5 * dVar48 + (double)(fVar4 * fVar3)) +
                         *(float *)(iVar18 + 0x14);
            fVar4 = *(float *)(iVar18 + 0x18);
            pfVar37[3] = fVar19;
            pfVar37[2] = fVar9 * fVar2 + (float)((double)fVar8 * dVar48 + (double)(fVar6 * fVar3)) +
                         fVar4;
          }
          iVar29 = iVar29 + 1;
          uVar36 = uVar36 + 0x10;
        } while (iVar29 < (int)lVar22);
      }
    }
  }
  return lVar22;
}



//==== 00108df0  ns=mobyutil  size=0xfc
// sig: undefined MB_RandomizeAnimSpeed(void)
// callers(0): 
// callees(1): 005c8318 rand

void mobyutil::MB_RandomizeAnimSpeed
               (double param_1,double param_2,int param_3,uint param_4,float *param_5)

{
  float fVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  if (*(byte *)(param_3 + 0x53) == param_4) {
    dVar3 = 1.0;
    if (*(int *)(param_3 + 0x58) == 0x3f800000) {
      iVar2 = rand();
      fVar1 = (float)((double)((float)(longlong)(int)(iVar2 >> 0xf & 0x7fff) *
                              (float)(param_2 - param_1)) * 3.0517578125e-05 + param_1);
      dVar4 = (double)fVar1;
      *(float *)(param_3 + 0x58) = fVar1;
      if (dVar4 == dVar3) {
        dVar4 = 1.0010000467300415;
        *(undefined4 *)(param_3 + 0x58) = 0x3f8020c5;
      }
      *param_5 = (float)dVar4;
    }
  }
  else if (*(float *)(param_3 + 0x58) == *param_5) {
    *(undefined4 *)(param_3 + 0x58) = 0x3f800000;
  }
  return;
}



//==== 00108ef8  ns=mobyutil  size=0x2b4
// sig: undefined MB_Update2LegIK(void)
// callers(0): 
// callees(3): 000f0ea8 mobyfunc::AttachManipulator; 000f1038 mobyfunc::GetBoneTransformations; 000f1238 mobyfunc::GetMobyJointsWorldPos

void mobyutil::MB_Update2LegIK(undefined8 param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong *puVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  float *pfVar21;
  ulonglong unaff_r27;
  int iVar22;
  ulonglong unaff_r28;
  int iVar23;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar1 = uVar16 - 0x110;
  puVar12 = (ulonglong *)lVar1;
  *puVar12 = uVar16;
  puVar12[0x24] = in_LR;
  puVar12[0x21] = unaff_r31;
  puVar12[0x20] = unaff_r30;
  bVar2 = *(byte *)(param_2 + 0x111);
  *(uint *)((int)puVar12 + 0xb4) = (uint)*(byte *)(param_2 + 0x110);
  bVar3 = *(byte *)(param_2 + 0x1b0);
  *(uint *)(puVar12 + 0x17) = (uint)bVar2;
  bVar2 = *(byte *)(param_2 + 0x1b1);
  *(uint *)((int)puVar12 + 0xbc) = (uint)bVar3;
  uVar9 = *(undefined4 *)(param_2 + 0x108);
  *(uint *)(puVar12 + 0x18) = (uint)bVar2;
  puVar12[0x1f] = unaff_r29;
  puVar12[0x1e] = unaff_r28;
  puVar12[0x1d] = unaff_r27;
  *(undefined4 *)((int)puVar12 + 0xc4) = uVar9;
  mobyfunc::GetMobyJointsWorldPos(param_1,5,uVar16 - 0x5c,param_2);
  iVar22 = 0;
  iVar23 = param_2;
  do {
    mobyfunc::GetBoneTransformations(param_1,*(undefined1 *)(iVar23 + 0x110),uVar16 - 0xa0);
    uVar10 = *(uint *)(puVar12 + 0x10);
    uVar11 = *(uint *)((int)puVar12 + 0x84);
    fVar5 = ABS(*(float *)(puVar12 + 0x10));
    fVar7 = ABS(*(float *)((int)puVar12 + 0x84));
    fVar13 = 0.0;
    *(undefined4 *)(iVar23 + 0x114) = 0;
    *(float *)(puVar12 + 0x16) = fVar5 - fVar7;
    cVar4 = *(char *)(iVar23 + 0x161);
    uVar17 = (ulonglong)(uVar10 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar12 + 0x16) >> 0x1e) & 2 | (ulonglong)(uVar11 >> 0x1d) & 4;
    fVar6 = fVar5;
    if (*(float *)(puVar12 + 0x16) - 0.0 < 0.0) {
      fVar6 = fVar7;
    }
    fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
    if (*(float *)(puVar12 + 0x16) - 0.0 < 0.0) {
      fVar7 = fVar5;
    }
    fVar5 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    if (0.0 < fVar6) {
      lVar20 = uVar16 - 0x100;
      lVar18 = uVar16 - 0x38;
      lVar19 = uVar16 - 0x48;
      lVar24 = 2;
      fVar6 = (fVar7 - fVar6) / (fVar7 + fVar6);
      fVar7 = fVar6 * fVar6;
      *(float *)((int)puVar12 + 0xd4) = fVar6;
      *(float *)((int)puVar12 + 0xcc) = fVar6;
      *(float *)(puVar12 + 0x1a) = fVar6;
      *(float *)(puVar12 + 0x19) = fVar6;
      fVar6 = fVar7 * fVar7;
      *(float *)((int)puVar12 + 0xcc) = *(float *)((int)puVar12 + 0xcc) * fVar7;
      *(float *)(puVar12 + 0x1a) = *(float *)(puVar12 + 0x1a) * fVar6;
      *(float *)((int)puVar12 + 0xd4) = *(float *)((int)puVar12 + 0xd4) * fVar6 * fVar7;
      do {
        *(float *)((int)lVar20 + 200) = *(float *)((int)lVar20 + 0xb8) * fVar6 * fVar6;
        iVar14 = (int)lVar19;
        lVar19 = lVar19 + 8;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar14 + 4) * fVar6 * fVar6;
        lVar18 = lVar18 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar20 = uVar16 - 0x48;
      lVar24 = 4;
      pfVar21 = (float *)&DAT_007358e0;
      lVar18 = lVar20;
      lVar19 = lVar1;
      do {
        fVar6 = *pfVar21;
        fVar7 = pfVar21[1];
        pfVar21 = pfVar21 + 2;
        *(float *)((int)lVar19 + 200) = *(float *)((int)lVar19 + 200) * fVar6;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar7;
        lVar18 = lVar18 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar19 = 2;
      lVar18 = lVar1;
      do {
        iVar14 = (int)lVar18;
        iVar15 = (int)lVar20;
        lVar18 = lVar18 + 0x10;
        lVar20 = lVar20 + 0x10;
        fVar13 = fVar13 + *(float *)(iVar14 + 200) + *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8)
                 + *(float *)(iVar15 + 0xc);
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      fVar13 = (fVar13 + 0.7853982) * fVar8 + fVar5;
    }
    *(float *)(iVar23 + 0x118) = fVar13;
    if (cVar4 == '\0') {
      mobyfunc::AttachManipulator
                ((MobyInstance *)param_1,(uint)*(byte *)(iVar23 + 0x113),iVar23 + 0x160);
    }
    if (*(char *)(iVar23 + 0x121) == '\0') {
      mobyfunc::AttachManipulator
                ((MobyInstance *)param_1,(uint)*(byte *)(iVar23 + 0x112),iVar23 + 0x120);
    }
    iVar22 = iVar22 + 1;
    iVar23 = iVar23 + 0xa0;
  } while (iVar22 < 2);
  *(undefined2 *)(param_2 + 0x50) = 5;
  *(undefined2 *)(param_2 + 0x52) = 0;
  *(undefined4 *)(param_2 + 0x54) = 0;
  *(undefined4 *)(param_2 + 0x58) = 0;
  return;
}



//==== 001091b0  ns=mobyutil  size=0xd0
// sig: undefined MB_SetAnimAndReset2Leg(void)
// callers(0): 
// callees(2): 000fddc0 mobyutil::MB_SetAnimation; 00501980 fastfunc::FastQuaternionToEuler

void mobyutil::MB_SetAnimAndReset2Leg(int param_1)

{
  int in_r7;
  undefined2 in_r8;
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  MB_SetAnimation();
  iVar1 = 0;
  uVar3 = 0;
  iVar2 = in_r7;
  do {
    if (*(int *)(iVar2 + 0x1a0) != 0) {
      *(undefined4 *)(*(int *)(iVar2 + 0x1a0) + 8) = 0;
    }
    if (*(char *)(iVar2 + 0x161) != '\0') {
      fastfunc::FastQuaternionToEuler(uVar3,iVar2 + 0x170,2);
    }
    iVar1 = iVar1 + 1;
    *(undefined4 *)(iVar2 + 0x114) = 0;
    iVar2 = iVar2 + 0xa0;
  } while (iVar1 < 2);
  *(undefined2 *)(in_r7 + 0x52) = in_r8;
  *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
  *(undefined4 *)(in_r7 + 0x100) = 0;
  return;
}



//==== 00109298  ns=mobyutil  size=0x2f0
// sig: undefined MB_initJump(void)
// callers(3): 0019aea0 mobyupdate_unsorted::UpdateMoby_1045; 004422e0 mobyupdate_helpers::M741_004422e0; 004743a8 mobyupdate_unsorted::UpdateMoby_820
// callees(1): 000fddc0 mobyutil::MB_SetAnimation

void mobyutil::MB_initJump(int param_1,float *param_2,float *param_3)

{
  undefined1 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulonglong *puVar11;
  float fVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  float *pfVar23;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  ulonglong in_f31;
  
  uVar17 = ZEXT48(&stack0x00000000);
  lVar18 = uVar17 - 0xb0;
  puVar11 = (ulonglong *)lVar18;
  *puVar11 = uVar17;
  puVar11[0x18] = in_LR;
  puVar11[0x15] = in_f31;
  puVar11[0x14] = unaff_r31;
  fVar15 = 0.0;
  param_2[0xc] = 0.0;
  fVar2 = *param_3;
  *param_2 = fVar2;
  fVar3 = param_3[1];
  param_2[1] = fVar3;
  fVar4 = param_3[2];
  param_2[2] = fVar4;
  param_2[3] = param_3[3];
  fVar5 = *(float *)(param_1 + 0x14);
  fVar6 = *(float *)(param_1 + 0x10);
  fVar10 = fVar5 - fVar3;
  fVar12 = fVar6 - fVar2;
  fVar7 = *(float *)(param_1 + 0x18);
  fVar8 = param_2[7];
  fVar9 = param_2[8];
  fVar12 = SQRT(fVar12 * fVar12 + fVar10 * fVar10);
  uVar1 = *(undefined1 *)(param_2 + 0xb);
  fVar12 = ((fVar8 * 35.0 * fVar9) / (ABS(fVar4 - fVar7) + 1.0)) * (fVar12 * fVar12 + 0.25);
  param_2[5] = fVar12;
  if (fVar9 < fVar12) {
    param_2[5] = fVar9;
    fVar12 = fVar9;
  }
  fVar2 = fVar2 - fVar6;
  fVar3 = fVar3 - fVar5;
  *(float *)(puVar11 + 0xe) = fVar2;
  *(float *)((int)puVar11 + 0x74) = fVar3;
  *(float *)(puVar11 + 0xf) = ABS(fVar2) - ABS(fVar3);
  uVar20 = (ulonglong)(*(uint *)(puVar11 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar11 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar11 + 0x74) >> 0x1d) & 4;
  fVar5 = ABS(*(float *)(puVar11 + 0xe));
  if (*(float *)(puVar11 + 0xf) - 0.0 < 0.0) {
    fVar5 = ABS(fVar3);
  }
  fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
  fVar9 = ABS(*(float *)((int)puVar11 + 0x74));
  if (*(float *)(puVar11 + 0xf) - 0.0 < 0.0) {
    fVar9 = ABS(fVar2);
  }
  fVar10 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  fVar16 = fVar15;
  if (0.0 < fVar5) {
    lVar22 = uVar17 - 0xa0;
    lVar21 = uVar17 - 0x34;
    lVar19 = uVar17 - 0x24;
    lVar24 = 2;
    fVar5 = (fVar9 - fVar5) / (fVar9 + fVar5);
    fVar9 = fVar5 * fVar5;
    *(float *)(puVar11 + 0x11) = fVar5;
    *(float *)(puVar11 + 0x10) = fVar5;
    *(float *)((int)puVar11 + 0x84) = fVar5;
    *(float *)((int)puVar11 + 0x7c) = fVar5;
    fVar5 = fVar9 * fVar9;
    *(float *)(puVar11 + 0x10) = *(float *)(puVar11 + 0x10) * fVar9;
    *(float *)((int)puVar11 + 0x84) = *(float *)((int)puVar11 + 0x84) * fVar5;
    *(float *)(puVar11 + 0x11) = *(float *)(puVar11 + 0x11) * fVar5 * fVar9;
    do {
      *(float *)((int)lVar22 + 0x7c) = *(float *)((int)lVar22 + 0x6c) * fVar5 * fVar5;
      iVar13 = (int)lVar21;
      lVar22 = lVar22 + 8;
      lVar21 = lVar21 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)(iVar13 + 4) * fVar5 * fVar5;
      lVar19 = lVar19 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar22 = uVar17 - 0x34;
    pfVar23 = (float *)&DAT_007358e0;
    lVar24 = 4;
    lVar19 = lVar22;
    lVar21 = lVar18;
    do {
      fVar5 = *pfVar23;
      fVar9 = pfVar23[1];
      pfVar23 = pfVar23 + 2;
      *(float *)((int)lVar21 + 0x7c) = *(float *)((int)lVar21 + 0x7c) * fVar5;
      lVar21 = lVar21 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar9;
      lVar19 = lVar19 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar19 = 2;
    fVar5 = fVar15;
    do {
      iVar13 = (int)lVar18;
      iVar14 = (int)lVar22;
      lVar18 = lVar18 + 0x10;
      lVar22 = lVar22 + 0x10;
      fVar5 = fVar5 + *(float *)(iVar13 + 0x7c) + *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
              *(float *)(iVar14 + 0xc);
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    fVar16 = (fVar5 + 0.7853982) * fVar6 + fVar10;
  }
  param_2[6] = fVar16;
  fVar12 = SQRT(fVar2 * fVar2 + fVar3 * fVar3) / fVar12;
  fVar2 = -((fVar7 - fVar4) + -(fVar8 * fVar12 * fVar12 * 0.5)) / fVar12;
  if (0.0 - fVar12 < 0.0) {
    fVar15 = fVar2;
  }
  if (fVar12 - 0.0 < 0.0) {
    fVar15 = fVar2;
  }
  param_2[4] = fVar15;
  MB_SetAnimation(param_1,uVar1,0,10);
  *(undefined1 *)((int)param_2 + 0x2f) = 0;
  return;
}



//==== 001095b8  ns=mobyutil  size=0x3e0
// sig: undefined MB_updateJump(void)
// callers(4): 0019aea0 mobyupdate_unsorted::UpdateMoby_1045; 002cbaf8 mobyupdate_unsorted::UpdateMoby_186; 00442a70 mobyupdate_unsorted::UpdateMoby_741; 004743a8 mobyupdate_unsorted::UpdateMoby_820
// callees(4): 00057820 collproc::CollLine; 000efe40 mobyfunc::BlendAnimFrame; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed

undefined1 mobyutil::MB_updateJump(MobyInstance *param_1,int param_2)

{
  byte bVar1;
  undefined1 uVar2;
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
  int iVar17;
  double dVar18;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  bVar1 = *(byte *)(param_2 + 0x2f);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if ((param_1->updateId != *(u8 *)(param_2 + 0x2c)) ||
         (dVar18 = (double)mobyfunc::BlendAnimFrame(param_1),
         dVar18 <= (double)*(float *)(param_2 + 0x24))) goto LAB_0010996c;
      if ((param_1->field43_0x70 & 2U) != 0) {
        MB_SetAnimation(param_1,*(undefined1 *)(param_2 + 0x2d),0,10);
        *(undefined1 *)(param_2 + 0x2f) = 1;
      }
    }
    OrganicDeltAngSpeed((double)*(float *)(param_2 + 0x18),(double)*(float *)(param_2 + 0x34),
                        (double)*(float *)(param_2 + 0x38),(double)*(float *)(param_2 + 0x3c),
                        param_1);
    fVar3 = *(float *)(param_2 + 0x18);
    fVar4 = fVar3 + 1.5707963;
    fVar7 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar7 = fVar3;
    }
    fVar5 = 3.1415925 - fVar4;
    if (fVar4 - (3.1415925 - fVar4) < 0.0) {
      fVar5 = fVar4;
    }
    fVar8 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar7 < 0.0) {
      fVar8 = fVar7;
    }
    fVar3 = *(float *)(param_2 + 0x14);
    fVar7 = -3.1415925 - fVar4;
    if ((-3.1415925 - fVar4) - fVar5 < 0.0) {
      fVar7 = fVar5;
    }
    fVar9 = fVar8 * fVar8;
    fVar10 = fVar7 * fVar7;
    fVar13 = fVar9 * fVar9 * fVar8;
    fVar11 = fVar10 * fVar10 * fVar7;
    fVar14 = fVar9 * fVar13;
    fVar4 = *(float *)(param_2 + 0x1c);
    fVar12 = fVar10 * fVar11;
    fVar5 = *(float *)(param_2 + 0x28);
    fVar6 = *(float *)(param_2 + 8);
    uVar2 = *(undefined1 *)(param_2 + 0x2e);
    fVar15 = (param_1->pos).z + *(float *)(param_2 + 0x10);
    fVar16 = *(float *)(param_2 + 0x10) - fVar4;
    (param_1->pos).z = fVar15;
    (param_1->pos).y =
         (fVar9 * fVar14 * 2.601887e-06 +
         fVar14 * -0.0001980741 + fVar13 * 0.0083330255 + fVar9 * fVar8 * -0.16666657 + fVar8) *
         fVar3 + (param_1->pos).y;
    (param_1->pos).x =
         (fVar10 * fVar12 * 2.601887e-06 +
         fVar12 * -0.0001980741 + fVar11 * 0.0083330255 + fVar10 * fVar7 * -0.16666657 + fVar7) *
         fVar3 + (param_1->pos).x;
    *(float *)(param_2 + 0x10) = fVar16;
    if ((fVar16 < 0.0) &&
       (fVar3 = animationSpeed * (fVar5 * 2.0 + 10.0),
       fVar15 <= fVar6 - (fVar16 * fVar3 - fVar4 * 0.5 * fVar3 * fVar3))) {
      MB_SetAnimation(param_1,uVar2,0,10);
      *(undefined1 *)(param_2 + 0x2f) = 2;
    }
  }
  else {
    if (bVar1 < 3) {
      fVar3 = *(float *)(param_2 + 0x10);
      (param_1->pos).z = (param_1->pos).z + fVar3;
      *(float *)(param_2 + 0x10) = fVar3 - *(float *)(param_2 + 0x1c);
      iVar17 = collproc::CollLine(local_40,local_50,2,0,0);
      fVar3 = *(float *)(param_2 + 0x18);
      fVar4 = *(float *)(param_2 + 0x14);
      fVar7 = 0.0;
      if (iVar17 != 0) {
        fVar7 = CollOutput.ip.z;
      }
      if (fVar7 < (param_1->pos).z) {
        fVar7 = fVar3 + 1.5707963;
        fVar5 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar5 = fVar3;
        }
        fVar8 = 3.1415925 - fVar7;
        if (fVar7 - (3.1415925 - fVar7) < 0.0) {
          fVar8 = fVar7;
        }
        fVar6 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
          fVar6 = fVar5;
        }
        fVar3 = -3.1415925 - fVar7;
        if ((-3.1415925 - fVar7) - fVar8 < 0.0) {
          fVar3 = fVar8;
        }
        fVar7 = fVar6 * fVar6;
        fVar5 = fVar3 * fVar3;
        fVar10 = fVar7 * fVar7 * fVar6;
        fVar8 = fVar5 * fVar5 * fVar3;
        fVar11 = fVar7 * fVar10;
        fVar9 = fVar5 * fVar8;
        (param_1->pos).y =
             (fVar7 * fVar11 * 2.601887e-06 +
             fVar11 * -0.0001980741 + fVar10 * 0.0083330255 + fVar7 * fVar6 * -0.16666657 + fVar6) *
             fVar4 + (param_1->pos).y;
        (param_1->pos).x =
             (fVar5 * fVar9 * 2.601887e-06 +
             fVar9 * -0.0001980741 + fVar8 * 0.0083330255 + fVar5 * fVar3 * -0.16666657 + fVar3) *
             fVar4 + (param_1->pos).x;
      }
      else {
        (param_1->pos).z = fVar7;
        *(undefined1 *)(param_2 + 0x2f) = 3;
      }
    }
    else if (3 < bVar1) goto LAB_0010996c;
    if ((param_1->field43_0x70 & 2U) != 0) {
      *(undefined1 *)(param_2 + 0x2f) = 4;
    }
  }
LAB_0010996c:
  return *(undefined1 *)(param_2 + 0x2f);
}



//==== 00109998  ns=mobyutil  size=0x54
// sig: int Lerp_int(float t, int a, int b)
// callers(0): 
// callees(1): 00502758 fastfunc::FastDoubleToInt

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mobyutil::Lerp_int(float t,int a,int b)

{
  int iVar1;
  
  iVar1 = fastfunc::FastDoubleToInt((double)((float)(longlong)(b - a) * t));
  return a + iVar1;
}



//==== 001099ec  ns=mobyutil  size=0xc
// sig: float Lerp(float a, float b, float t)
// callers(4): 00093c98 hero::Hero_UpdateCheatTweaks; 00202b98 mobyupdate_unsorted::UpdateMoby_121; 0022c5a8 mobyupdate_unsorted::UpdateMoby_1261; 0026a268 mobyupdate_unsorted::UpdateMoby_1395
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float mobyutil::Lerp(float a,float b,float t)

{
  return (b - a) * t + a;
}



//==== 001099f8  ns=mobyutil  size=0x6c
// sig: void Lerp_vec4(float alpha, float * out)
// callers(8): 00199888 mobyupdate_helpers::M1045_00199888; 001c3a18 mobyupdate_helpers::M1106_001c3a18; 001f1fc0 mobyupdate_unsorted::UpdateMoby_1193; 0022aff8 mobyupdate_unsorted::UpdateMoby_1259; 0028d9b0 mobyupdate_unsorted::UpdateMoby_1504; 0030c010 mobyupdate_unsorted::UpdateMoby_240; 0042c150 mobyupdate_unsorted::UpdateMoby_71; 00486bf8 mobyupdate_helpers::M849_00486bf8
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void mobyutil::Lerp_vec4(float alpha,float *out)

{
  undefined8 in_r5;
  undefined8 in_r6;
  undefined8 in_r7;
  undefined8 in_r8;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  float fStack0000004c;
  float fStack00000050;
  float fStack00000054;
  float fStack00000058;
  float fStack0000005c;
  
  fStack00000044 = (float)in_r5;
  fStack00000054 = (float)in_r7;
  fStack0000004c = (float)in_r6;
  fStack0000005c = (float)in_r8;
  fStack00000040 = (float)((ulonglong)in_r5 >> 0x20);
  fStack00000048 = (float)((ulonglong)in_r6 >> 0x20);
  fStack00000050 = (float)((ulonglong)in_r7 >> 0x20);
  fStack00000058 = (float)((ulonglong)in_r8 >> 0x20);
  out[1] = (fStack00000054 - fStack00000044) * alpha + fStack00000044;
  out[3] = (fStack0000005c - fStack0000004c) * alpha + fStack0000004c;
  *out = (fStack00000050 - fStack00000040) * alpha + fStack00000040;
  out[2] = (fStack00000058 - fStack00000048) * alpha + fStack00000048;
  return;
}



//==== 00109a68  ns=mobyutil  size=0x88
// sig: void GainDampLimit(float distToTarget, float gain, float damp, float limit, float * speed)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void mobyutil::GainDampLimit(float distToTarget,float gain,float damp,float limit,float *speed)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *speed + (distToTarget * gain - damp * *speed);
  *speed = fVar1;
  if (0.0 < limit) {
    if (fVar1 <= limit) {
      fVar2 = -limit;
      if (fVar1 < fVar2) {
        *speed = fVar2;
        fVar1 = fVar2;
      }
    }
    else {
      *speed = limit;
      fVar1 = limit;
    }
  }
  fVar2 = ABS(distToTarget);
  if (fVar1 <= fVar2) {
    if (fVar1 < -fVar2) {
      *speed = -fVar2;
    }
  }
  else {
    *speed = fVar2;
  }
  return;
}



//==== 00109af0  ns=mobyutil  size=0x44
// sig: float Delt(float target, float speed, float * val)
// callers(151): 000156a8 mobyupdate_unsorted::UpdateMoby_1267; 00019cb8 mobyupdate_unsorted::UpdateMoby_1274; 0001bf50 mobyupdate_helpers::M326_0001bf50; 0001cb80 mobyupdate_unsorted::UpdateMoby_326; 00049ff0 camera::camera7::Cam7_UpdatePos; 000802a0 hero::Hero_UpdateGlowAndBlink; 00081cd0 hero::Hero_UpdateScreenFadeInOut; 00084978 hero::Hero_UpdateCollisionSize; 000895f0 hero::Hero_MoveWithPlatform; 0008c3d0 hero::HeroUpdateNonRatchet; 0008dd38 hero::Hero_UpdateOverlayAnimLayer; 0008e170 hero::Hero_UpdateFiringAnimLayer; 0008ec40 hero::Hero_UpdateGadgetAnimLayers; 00093c98 hero::Hero_UpdateCheatTweaks; 000954c8 hero::HeroUpdate; 00095f40 hero::Hero_DrawGlows; 00096228 hero::Hero_GetPadFly; 00096348 hero::Hero_ScaleAnim; 0009c064 hero::Hero_ThrustModeAccel; 0009d270 hero::Hero_JumpTranslation; 0009d6b0 hero::Hero_JumpThrustGrav; 0009de38 hero::Hero_JumpTurnTrans; 000a2e38 hero::Hero_SurfBob; 000aaec0 hero::HandleHeroMovement; 000be228 hero::HeroMovement
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float mobyutil::Delt(float target,float speed,float *val)

{
  float fVar1;
  float fVar2;
  
  fVar1 = target - *val;
  if ((fVar1 <= speed) && (fVar2 = -speed, speed = fVar1, fVar1 < fVar2)) {
    speed = fVar2;
  }
  fVar1 = *val + speed;
  *val = fVar1;
  return ABS(target - fVar1);
}



//==== 00109b40  ns=mobyutil  size=0xe0
// sig: float AccelDelt(float target, float gain, float damp, float limit, float * val, int unused, float * speed)
// callers(45): 00019cb8 mobyupdate_unsorted::UpdateMoby_1274; 0007f608 hero::hero_SetManipulator; 000842e0 hero::???_Hero_UpdateIdleDetect; 00084978 hero::Hero_UpdateCollisionSize; 00088370 hero::Hero_SnapToGround; 000a2e38 hero::Hero_SurfBob; 000aaec0 hero::HandleHeroMovement; 001e70a8 mobyupd::update1160::M1160_UpdateFlight; 0021ff90 mobyupd::update1242::M1242_0021ff90; 00235aa0 mobyupdate_unsorted::UpdateMoby_1269; 00262730 mobyupd::update1379::M1379_UpdateFlight; 0026bf18 mobyupdate_helpers::M1401_0026bf18; 0026c6f0 mobyupdate_unsorted::UpdateMoby_1401_MineBot; 00271740 mobyupdate_helpers::M1417_00271740; 002e86b8 mobyupdate_helpers::M1900_002e86b8; 002edb38 mobyupdate_helpers::M211_002edb38; 003271f0 mobyupdate_helpers::M28_003271f0; 00327f50 mobyupdate_unsorted::UpdateMoby_28; 0032adf8 mobyupdate_unsorted::UpdateMoby_280; 0033bfc0 mobyupdate_helpers::M309_0033bfc0; 0033cad0 mobyupdate_helpers::M31_0033cad0; 0033d5c8 mobyupdate_helpers::M31_0033d5c8; 0033d6f0 mobyupdate_helpers::M309_0033d6f0; 0033dad8 mobyupdate_unsorted::UpdateMoby_31; 0036b8c8 mobyupdate_helpers::M426_0036b8c8
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float mobyutil::AccelDelt(float target,float gain,float damp,float limit,float *val,int unused,
                         float *speed)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *val;
  fVar2 = *speed + ((target - fVar1) * gain - damp * *speed);
  *speed = fVar2;
  if (0.0 < limit) {
    if (fVar2 <= limit) {
      fVar3 = -limit;
      if (fVar2 < fVar3) {
        *speed = fVar3;
        fVar2 = fVar3;
      }
    }
    else {
      *speed = limit;
      fVar2 = limit;
    }
  }
  fVar1 = ABS(target - fVar1);
  if (fVar2 <= fVar1) {
    fVar1 = -fVar1;
    if (fVar2 < fVar1) {
      *speed = fVar1;
      fVar2 = fVar1;
    }
  }
  else {
    *speed = fVar1;
    fVar2 = fVar1;
  }
  fVar1 = target - (*val + fVar2);
  *val = *val + fVar2;
  if (ABS(fVar1) < limit * 0.01) {
    *val = target;
    *speed = 0.0;
    fVar1 = 0.0;
  }
  return fVar1;
}



//==== 00109c30  ns=mobyutil  size=0x1dc
// sig: float OrganicDelt(float target, float accel, float deccel, float limit, float * val, int unused, float * speed)
// callers(104): 00019cb8 mobyupdate_unsorted::UpdateMoby_1274; 00119b38 mobyutil::MB_UpdateDebris; 00124308 partupd::UpdatePart_12; 00150e88 pause::MenuHero_MobyUpdateF; 00161788 space::UpdateSpace; 00183880 mobyupdate_unsorted::UpdateMoby_{1005_1016}; 00185e70 mobyupdate_unsorted::UpdateMoby_101; 0018fdc8 mobyupdate_unsorted::UpdateMoby_1028_BlargPlatform; 00190d60 mobyupdate_unsorted::UpdateMoby_1032; 001a2fb0 mobyupdate_helpers::M1051_001a2fb0; 001a3680 mobyupdate_helpers::M1051_001a3680; 001a3d50 mobyupdate_helpers::M1051_001a3d50; 001a7c58 mobyupdate_unsorted::UpdateMoby_1054; 001a9908 mobyupdate_helpers::M1059_001a9908; 001ac298 mobyupdate_unsorted::UpdateMoby_1061; 001b4378 mobyupdate_unsorted::UpdateMoby_1072; 001b5860 mobyupdate_unsorted::UpdateMoby_1075; 001b9d68 mobyupdate_unsorted::UpdateMoby_1083; 001be558 mobyupdate_unsorted::UpdateMoby_1105; 001d4308 mobyupdate_unsorted::UpdateMoby_1118; 001daee8 mobyupdate_unsorted::UpdateMoby_1135; 001e1b00 mobyupdate_unsorted::UpdateMoby_1156; 001e2e88 mobyupdate_unsorted::UpdateMoby_1157; 001e3720 mobyupdate_unsorted::UpdateMoby_1158; 001e4130 mobyupdate_unsorted::UpdateMoby_1159
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float mobyutil::OrganicDelt
                (float target,float accel,float deccel,float limit,float *val,int unused,
                float *speed)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *speed;
  fVar2 = target - *val;
  if (fVar2 == 0.0 || fVar1 * fVar2 < 0.0) {
    fVar2 = -fVar1;
    if ((fVar2 <= deccel) && (fVar3 = -deccel, deccel = fVar2, fVar2 < fVar3)) {
      deccel = fVar3;
    }
    *speed = fVar1 + deccel;
    *val = *val + fVar1 + deccel;
    fVar2 = *speed;
  }
  else {
    fVar3 = ABS(fVar2);
    fVar4 = ((fVar1 * fVar1) / deccel) * 0.5;
    if (fVar4 <= fVar3) {
      fVar4 = SQRT(deccel * 2.0 * fVar2);
      if (limit - fVar4 < 0.0) {
        fVar4 = limit;
      }
      if (0.0 <= fVar2) {
        fVar4 = fVar4 - fVar1;
        if ((fVar4 <= accel) && (fVar5 = -accel, accel = fVar4, fVar4 < fVar5)) {
          accel = fVar5;
        }
        fVar1 = fVar1 + accel;
        *speed = fVar1;
      }
      else {
        fVar4 = -fVar4 - fVar1;
        if ((fVar4 <= accel) && (fVar5 = -accel, accel = fVar4, fVar4 < fVar5)) {
          accel = fVar5;
        }
        fVar1 = fVar1 + accel;
        *speed = fVar1;
      }
    }
    else if (fVar3 + ABS(fVar1) <= fVar4) {
      fVar5 = -fVar1;
      fVar4 = deccel * 1.1;
      if ((fVar5 <= fVar4) && (fVar6 = -fVar4, fVar4 = fVar5, fVar5 < fVar6)) {
        fVar4 = fVar6;
      }
      fVar1 = fVar1 + fVar4;
      *speed = fVar1;
    }
    else {
      fVar4 = -fVar1;
      if ((fVar4 <= deccel) && (fVar5 = -deccel, deccel = fVar4, fVar4 < fVar5)) {
        deccel = fVar5;
      }
      fVar1 = fVar1 + deccel;
      *speed = fVar1;
    }
    if (fVar3 <= ABS(fVar1)) {
      *val = target;
    }
    else {
      *val = *val + fVar1;
      fVar2 = *speed;
    }
  }
  return fVar2;
}



//==== 00109e18  ns=mobyutil  size=0x98
// sig: float SubRots(float rot1, float rot2, int turnDir)
// callers(1): 000aaec0 hero::HandleHeroMovement
// callees(1): 005025e0 fastfunc::FastDiffRots

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float mobyutil::SubRots(float rot1,float rot2,int turnDir)

{
  double dVar1;
  int in_r5;
  double dVar2;
  double dVar3;
  
  dVar2 = (double)fastfunc::FastDiffRots((double)rot1,(double)rot2,turnDir);
  if ((in_r5 != 0) && ((float)(dVar2 * (double)(longlong)in_r5) <= 0.0)) {
    dVar3 = ABS(dVar2);
    dVar1 = dVar2 + 6.2831854820251465;
    if (0.0 - dVar2 < 0.0) {
      dVar1 = dVar2 - 6.2831854820251465;
    }
    dVar2 = 0.0;
    if (0.001745329238474369 - dVar3 < 0.0) {
      dVar2 = (double)(float)dVar1;
    }
  }
  return (float)dVar2;
}



//==== 00109ec0  ns=mobyutil  size=0x17c
// sig: float DeltAng(float target, float speed, float * val, int unused1, int unused2, int turnDir)
// callers(20): 00018238 mobyupdate_helpers::M1274_00018238; 000aaec0 hero::HandleHeroMovement; 0010a2e0 mobyutil::OrganicDeltAng; 001136c8 mobyutil::DoMeander; 00115900 mobyutil::MB_TurnHeadJoint; 001b2480 mobyupdate_unsorted::UpdateMoby_1069; 001b9730 mobyupdate_helpers::M1083_001b9730; 001f3688 mobyupdate_unsorted::UpdateMoby_1196; 001f7980 mobyupdate_unsorted::UpdateMoby_1199; 00254db8 mobyupdate_helpers::M1349_00254db8; 00254ea0 mobyupdate_unsorted::UpdateMoby_135; 00256f38 mobyupdate_unsorted::UpdateMoby_1355; 0032adf8 mobyupdate_unsorted::UpdateMoby_280; 00373720 mobyupdate_unsorted::UpdateMoby_435; 003e9668 mobyupdate_unsorted::UpdateMoby_625; 003f25b8 mobyupdate_unsorted::UpdateMoby_632; 003f3e00 mobyupdate_unsorted::UpdateMoby_{633_773_988_989}; 00456fe0 mobyupdate_unsorted::UpdateMoby_776; 00484a18 mobyupdate_unsorted::UpdateMoby_848; 00492d98 mobyupdate_unsorted::UpdateMoby_857
// callees(2): 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float mobyutil::DeltAng(float target,float speed,float *val,int unused1,int unused2,int turnDir)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar2 = (double)speed;
  dVar4 = (double)target;
  dVar1 = (double)fastfunc::FastDiffRots(dVar4,(double)*val,val,unused1,unused2);
  if ((turnDir != 0) && ((float)(dVar1 * (double)(longlong)turnDir) <= 0.0)) {
    dVar5 = ABS(dVar1);
    dVar3 = dVar1 + 6.2831854820251465;
    if (0.0 - dVar1 < 0.0) {
      dVar3 = dVar1 - 6.2831854820251465;
    }
    dVar1 = 0.0;
    if (0.001745329238474369 - dVar5 < 0.0) {
      dVar1 = (double)(float)dVar3;
    }
  }
  if ((dVar1 <= dVar2) && (dVar3 = -dVar2, dVar2 = dVar1, dVar1 < dVar3)) {
    dVar2 = dVar3;
  }
  dVar1 = (double)fastfunc::FastWrapRot(*val,(float)dVar2);
  *val = (float)dVar1;
  dVar1 = (double)fastfunc::FastDiffRots(dVar4);
  if ((turnDir != 0) && ((float)(dVar1 * (double)(longlong)turnDir) <= 0.0)) {
    dVar4 = ABS(dVar1);
    dVar2 = dVar1 + 6.2831854820251465;
    if (0.0 - dVar1 < 0.0) {
      dVar2 = dVar1 - 6.2831854820251465;
    }
    dVar1 = 0.0;
    if (0.001745329238474369 - dVar4 < 0.0) {
      dVar1 = (double)(float)dVar2;
    }
  }
  return (float)dVar1;
}



//==== 0010a050  ns=mobyutil  size=0x280
// sig: undefined AccelDeltAng(void)
// callers(30): 00017b78 mobyupdate_helpers::M1274_00017b78; 00018238 mobyupdate_helpers::M1274_00018238; 00019cb8 mobyupdate_unsorted::UpdateMoby_1274; 0007f608 hero::hero_SetManipulator; 00086df8 hero::Hero_Turn3D_XYZ; 000878f0 hero::Hero_AlignToGravity; 0009ba88 hero::Hero_Turn3D; 0009bd54 hero::Hero_Turn; 0009bdf8 hero::Hero_GunTurnWalk; 0009bf10 hero::Hero_TurnWalk; 0009de38 hero::Hero_JumpTurnTrans; 0009fd08 hero::???_Unused_Hero_RotateTowardDir; 000a00f0 hero::Hero_AttackMotion; 000aaec0 hero::HandleHeroMovement; 000eb6c0 mobyattack::UpdateMoby_1475_KaleboRace_Rocket; 001167c8 mobyutil::MB_UpdateManipulatorRot; 001e70a8 mobyupd::update1160::M1160_UpdateFlight; 0021ff90 mobyupd::update1242::M1242_0021ff90; 0023f010 mobyupdate_unsorted::UpdateMoby_{1293_1320}; 00259bf0 mobyupdate_helpers::M1357_00259bf0; 00262730 mobyupd::update1379::M1379_UpdateFlight; 0030bbd0 mobyupdate_helpers::M240_0030bbd0; 0030d0a0 mobyupdate_unsorted::UpdateMoby_241; 0036b8c8 mobyupdate_helpers::M426_0036b8c8; 003b3fd0 mobyupdate_helpers::M556_003b3fd0
// callees(2): 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

double mobyutil::AccelDeltAng
                 (double param_1,double param_2,double param_3,double param_4,float *param_5,
                 undefined8 param_6,float *param_7)

{
  float fVar1;
  int in_r9;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if (in_r9 == 2) {
    in_r9 = 0;
    if ((((0.0 < param_1) && ((int)*param_5 < 0)) || ((param_1 < 0.0 && (0 < (int)*param_5)))) &&
       (in_r9 = 1, param_1 < 0.0)) {
      in_r9 = -1;
    }
  }
  dVar2 = (double)fastfunc::FastDiffRots(param_1,(double)*param_5);
  if ((in_r9 != 0) && ((float)(dVar2 * (double)(longlong)in_r9) <= 0.0)) {
    dVar5 = ABS(dVar2);
    dVar4 = dVar2 + 6.2831854820251465;
    if (0.0 - dVar2 < 0.0) {
      dVar4 = dVar2 - 6.2831854820251465;
    }
    dVar2 = 0.0;
    if (0.001745329238474369 - dVar5 < 0.0) {
      dVar2 = (double)(float)dVar4;
    }
  }
  fVar1 = (float)((double)*param_7 +
                 (double)(float)(dVar2 * param_2 - (double)(float)(param_3 * (double)*param_7)));
  dVar4 = (double)fVar1;
  *param_7 = fVar1;
  dVar5 = 0.0;
  if (0.0 < param_4) {
    if (dVar4 <= param_4) {
      dVar3 = -param_4;
      if (dVar4 < dVar3) {
        *param_7 = (float)dVar3;
        dVar4 = dVar3;
      }
    }
    else {
      *param_7 = (float)param_4;
      dVar4 = param_4;
    }
  }
  dVar2 = ABS(dVar2);
  if (dVar4 <= dVar2) {
    dVar2 = -dVar2;
    if (dVar4 < dVar2) {
      *param_7 = (float)dVar2;
      dVar4 = dVar2;
    }
  }
  else {
    *param_7 = (float)dVar2;
    dVar4 = dVar2;
  }
  dVar2 = (double)fastfunc::FastWrapRot(*param_5,(float)dVar4);
  *param_5 = (float)dVar2;
  dVar2 = (double)fastfunc::FastDiffRots(param_1);
  if ((in_r9 != 0) && ((double)(float)(dVar2 * (double)(longlong)in_r9) <= dVar5)) {
    dVar3 = ABS(dVar2);
    dVar4 = dVar2 + 6.2831854820251465;
    if (dVar5 - dVar2 < 0.0) {
      dVar4 = dVar2 - 6.2831854820251465;
    }
    dVar2 = dVar5;
    if (0.001745329238474369 - dVar3 < 0.0) {
      dVar2 = (double)(float)dVar4;
    }
  }
  if (ABS(dVar2) < (double)(float)(param_4 * 0.009999999776482582)) {
    *param_5 = (float)param_1;
    *param_7 = 0.0;
    dVar2 = dVar5;
  }
  return dVar2;
}



//==== 0010a2e0  ns=mobyutil  size=0x228
// sig: float OrganicDeltAng(float target, float accel, float deccel, float limit, float * val, int unused, float * speed)
// callers(102): 00185e70 mobyupdate_unsorted::UpdateMoby_101; 00188968 mobyupdate_unsorted::UpdateMoby_1021; 00189bd8 mobyupdate_unsorted::UpdateMoby_1022; 0018b2f8 mobyupdate_unsorted::UpdateMoby_1023; 0018e9f8 mobyupdate_unsorted::UpdateMoby_1027; 00190d60 mobyupdate_unsorted::UpdateMoby_1032; 00192590 mobyupdate_unsorted::UpdateMoby_1034; 001a02d8 mobyupdate_unsorted::UpdateMoby_1048; 001a2558 mobyupdate_helpers::M1051_001a2558; 001a5f50 mobyupdate_unsorted::UpdateMoby_1051; 001b07a8 mobyupdate_unsorted::UpdateMoby_1068; 001b5860 mobyupdate_unsorted::UpdateMoby_1075; 001b8400 mobyupdate_unsorted::UpdateMoby_1081; 001cb618 mobyupdate_helpers::M1109_001cb618; 001de6a0 mobyupdate_helpers::M1140_001de6a0; 001ea988 mobyupdate_helpers::M1169_001ea988; 001eb4f8 mobyupdate_unsorted::UpdateMoby_1169; 001eec70 mobyupdate_unsorted::UpdateMoby_1180; 001f3688 mobyupdate_unsorted::UpdateMoby_1196; 001f7980 mobyupdate_unsorted::UpdateMoby_1199; 0020ed70 mobyupdate_helpers::M1226_0020ed70; 0020fda8 mobyupdate_unsorted::UpdateMoby_1226; 00214a98 mobyupdate_unsorted::UpdateMoby_1231; 00215a68 mobyupdate_unsorted::UpdateMoby_1232; 00217af8 mobyupdate_unsorted::UpdateMoby_1234
// callees(3): 00109ec0 mobyutil::DeltAng; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float mobyutil::OrganicDeltAng
                (float target,float accel,float deccel,float limit,float *val,int unused,
                float *speed)

{
  float *unused2;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar7 = (double)limit;
  dVar5 = (double)accel;
  dVar4 = (double)deccel;
  dVar1 = (double)target;
  unused2 = speed;
  dVar2 = (double)fastfunc::FastDiffRots(dVar1,(double)*val);
  dVar3 = (double)*speed;
  if (((float)(dVar3 * dVar2) < 0.0) || (dVar2 == 0.0)) {
    DeltAng(0.0,(float)dVar4,speed,unused,(int)unused2,0);
    dVar4 = (double)fastfunc::FastWrapRot(*speed,*val);
    *val = (float)dVar4;
    dVar2 = (double)*speed;
  }
  else {
    dVar8 = ABS(dVar2);
    dVar6 = (double)((float)((double)(float)(dVar3 * dVar3) / dVar4) * 0.5);
    if (dVar6 <= dVar8) {
      dVar4 = (double)SQRT((float)((double)(float)(dVar4 * 2.0) * dVar2));
      if (dVar7 - dVar4 < 0.0) {
        dVar4 = dVar7;
      }
      if (0.0 <= dVar2) {
        DeltAng((float)dVar4,(float)dVar5,speed,unused,(int)unused2,0);
      }
      else {
        DeltAng((float)-dVar4,(float)dVar5,speed,unused,(int)unused2,0);
      }
    }
    else if ((double)(float)(dVar8 + ABS(dVar3)) <= dVar6) {
      dVar4 = (double)(float)(dVar4 * 1.100000023841858);
      dVar5 = -dVar3;
      if ((dVar5 <= dVar4) && (dVar7 = -dVar4, dVar4 = dVar5, dVar5 < dVar7)) {
        dVar4 = dVar7;
      }
      *speed = (float)(dVar3 + dVar4);
    }
    else {
      dVar5 = -dVar3;
      if ((dVar5 <= dVar4) && (dVar7 = -dVar4, dVar4 = dVar5, dVar5 < dVar7)) {
        dVar4 = dVar7;
      }
      *speed = (float)(dVar3 + dVar4);
    }
    if (dVar8 <= ABS((double)*speed)) {
      *val = (float)dVar1;
    }
    else {
      dVar4 = (double)fastfunc::FastWrapRot(*speed,*val);
      *val = (float)dVar4;
      dVar2 = (double)*speed;
    }
  }
  return (float)dVar2;
}



//==== 0010a508  ns=mobyutil  size=0x44
// sig: void MatAdjoint(float * dm, float * sm)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void mobyutil::MatAdjoint(float *dm,float *sm)

{
  float *pfVar1;
  longlong lVar2;
  
  lVar2 = 3;
  do {
    *dm = *sm;
    dm[1] = sm[1];
    dm[2] = sm[2];
    pfVar1 = sm + 3;
    sm = sm + 4;
    dm[3] = *pfVar1;
    dm = dm + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



//==== 0010a550  ns=mobyutil  size=0xc0
// sig: int Float_To_RGBA(float r, float g, float b, float alpha)
// callers(12): 00121c28 partupd::SpawnPart_6; 00123048 partupd::SpawnPart_10; 00127918 partupd::SpawnPart_25; 00127ae0 partupd::UpdatePart_25; 00129f28 partupd::SpawnPart_32; 0012a0a8 partupd::UpdatePart_32; 0012c320 partupd::SpawnPart_40; 0012d2e0 partupd::SpawnPart_42; 0012fd10 partupd::SpawnPart_54; 0012fec8 partupd::UpdatePart_54; 00132650 partupd::SpawnPart_65; 001327d0 partupd::UpdatePart_65
// callees(1): 00502758 fastfunc::FastDoubleToInt

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mobyutil::Float_To_RGBA(float r,float g,float b,float alpha)

{
  uint uVar4;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar8 = (double)alpha;
  dVar5 = (double)g;
  dVar7 = (double)b;
  dVar6 = 255.0;
  uVar4 = fastfunc::FastDoubleToInt((double)(r * 255.0),0x406fe00000000000,dVar7,dVar8);
  uVar1 = fastfunc::FastDoubleToInt((double)(float)(dVar5 * dVar6));
  uVar2 = fastfunc::FastDoubleToInt((double)(float)(dVar7 * dVar6));
  uVar3 = fastfunc::FastDoubleToInt((double)(float)(dVar8 * dVar6));
  return (uint)((uVar3 & 0xffffffff) << 0x18) |
         (uint)((uVar2 & 0xffffffff) << 0x10) & 0xff0000 |
         (uint)((uVar1 & 0xffffffff) << 8) & 0xff00 | uVar4 & 0xff;
}



//==== 0010a610  ns=mobyutil  size=0x58
// sig: void ReorderRGB(int * r, int * g, int * b, int order)
// callers(2): 00202b98 mobyupdate_unsorted::UpdateMoby_121; 0048b288 mobyupdate_helpers::M849_0048b288
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void mobyutil::ReorderRGB(int *r,int *g,int *b,int order)

{
  int iVar1;
  
  if ((order & 1U) != 0) {
    iVar1 = *r;
    *r = *g;
    *g = iVar1;
  }
  if ((order & 2U) != 0) {
    iVar1 = *g;
    *g = *b;
    *b = iVar1;
  }
  if ((order & 4U) != 0) {
    iVar1 = *b;
    *b = *r;
    *r = iVar1;
  }
  return;
}



//==== 0010a668  ns=mobyutil  size=0x114
// sig: int ReorderRGB(int rgb, int order)
// callers(8): 00123ec8 partupd::SpawnPart_12; 00202b98 mobyupdate_unsorted::UpdateMoby_121; 0020bd30 mobyupdate_unsorted::UpdateMoby_122; 00293c48 mobyupdate_unsorted::UpdateMoby_153; 002b1de0 mobyupdate_helpers::M176_002b1de0; 002b3468 mobyupdate_helpers::M1766_002b3468; 0043dc00 mobyupdate_unsorted::UpdateMoby_74; 0048b288 mobyupdate_helpers::M849_0048b288
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mobyutil::ReorderRGB(int rgb,int order)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (order != 0) {
    uVar6 = (ulonglong)(uint)rgb & 0xff;
    uVar5 = (ulonglong)((uint)rgb >> 8) & 0xff;
    lVar3 = uVar6 + ((LZCOUNT(-(order & 1U)) << 0x3a) >> 0x3f & uVar5 - uVar6);
    lVar2 = uVar5 + ((LZCOUNT(-(order & 1U)) << 0x3a) >> 0x3f & uVar6 - uVar5);
    uVar6 = (ulonglong)((uint)rgb >> 0x10) & 0xff;
    lVar4 = lVar3 + ((LZCOUNT(-(order & 2U)) << 0x3a) >> 0x3f & uVar6 - lVar3);
    iVar1 = (int)lVar4;
    rgb = (uint)((lVar2 + ((LZCOUNT(-(order & 4U)) << 0x3a) >> 0x3f & lVar4 - lVar2) & 0xffffffffU)
                << 0x10) & 0xff0000 |
          (uint)((uVar6 + ((LZCOUNT(-(order & 2U)) << 0x3a) >> 0x3f & lVar3 - uVar6) & 0xffffffff)
                << 8) & 0xff00 |
          iVar1 + ((uint)((LZCOUNT(-(order & 4U)) << 0x3a) >> 0x3f) & (int)lVar2 - iVar1) &
          0xff0000ff | rgb & 0xff000000U;
  }
  return rgb;
}



//==== 0010a788  ns=mobyutil  size=0xb4
// sig: undefined MB_NormalizeMtx3Columns(void)
// callers(13): 00090a00 hero::Hero_PushGadgetMtxHistory; 000914e0 hero::Hero_UpdateGadgetMobys; 00117f38 mobyutil::MB_AttachMobyToJoint; 00150660 pause::MenuHero_MobyUpdateA; 0015087c pause::MenuHero_MobyUpdateB; 001509b8 pause::MenuHero_MobyUpdateC; 00150bf4 pause::MenuHero_MobyUpdateD; 00150d78 pause::MenuHero_MobyUpdateE; 00150e88 pause::MenuHero_MobyUpdateF; 00212cc0 mobyupdate_unsorted::UpdateMoby_123; 002f20a0 mobyupdate_unsorted::UpdateMoby_217; 0036e680 mobyupdate_unsorted::UpdateMoby_427; 0040ac50 mobyupdate_unsorted::UpdateMoby_669
// callees(0): 

void mobyutil::MB_NormalizeMtx3Columns(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  
  iVar11 = 0;
  iVar10 = 0;
  fVar1 = 0.0;
  do {
    pfVar9 = (float *)(param_1 + iVar10);
    fVar2 = pfVar9[4];
    fVar3 = *pfVar9;
    fVar4 = pfVar9[8];
    fVar8 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
    fVar5 = fVar1;
    fVar6 = fVar1;
    fVar7 = fVar1;
    if (SQRT(fVar8) != 0.0) {
      fVar5 = 1.0 / SQRT(fVar8);
      fVar5 = -(fVar8 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
      fVar5 = -(fVar8 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
      fVar5 = -(fVar8 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
      fVar7 = fVar3 * fVar5;
      fVar6 = fVar2 * fVar5;
      fVar5 = fVar4 * fVar5;
    }
    iVar11 = iVar11 + 1;
    *pfVar9 = fVar7;
    iVar10 = iVar10 + 4;
    pfVar9[4] = fVar6;
    pfVar9[8] = fVar5;
  } while (iVar11 < 3);
  return;
}



//==== 0010a83c  ns=mobyutil  size=0x11c
// sig: undefined ???_MB_GetNormalizedMtxElem(void)
// callers(1): 00126398 partupd::UpdatePart_20
// callees(1): 005010c0 fastfunc::FastNormalizeRMtx4

double mobyutil::____MB_GetNormalizedMtxElem(void)

{
  longlong in_r6;
  float local_80 [4];
  undefined1 local_70 [72];
  
  fastfunc::FastNormalizeRMtx4(local_70);
  return (double)*(float *)((int)local_80 + (int)(in_r6 << 2));
}



//==== 0010a968  ns=mobyutil  size=0xd0
// sig: void MB_RemoveVecComponent(float scale, float * out, float * v, float * n)
// callers(1): 00121f10 partupd::UpdatePart_6
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void mobyutil::MB_RemoveVecComponent(float scale,float *out,float *v,float *n)

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
  
  fVar1 = n[1];
  fVar2 = *n;
  fVar3 = n[2];
  fVar4 = 0.0;
  fVar5 = *v;
  fVar6 = v[1];
  fVar7 = v[2];
  fVar10 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  fVar9 = fVar4;
  fVar8 = fVar4;
  if (SQRT(fVar10) != 0.0) {
    fVar9 = 1.0 / SQRT(fVar10);
    fVar9 = -(fVar10 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar9 = -(fVar10 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar9 = -(fVar10 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar4 = fVar2 * fVar9;
    fVar8 = fVar1 * fVar9;
    fVar9 = fVar3 * fVar9;
  }
  fVar1 = v[1];
  fVar2 = v[2];
  out[3] = v[3];
  fVar3 = scale * (fVar9 * fVar7 + fVar4 * fVar5 + fVar8 * fVar6);
  *out = -(fVar3 * fVar4 - fVar5);
  out[1] = -(fVar3 * fVar8 - fVar1);
  out[2] = -(fVar3 * fVar9 - fVar2);
  return;
}



//==== 0010aa50  ns=mobyutil  size=0x308
// sig: undefined MB_MistDeathEffect(void)
// callers(2): 0010b030 mobyutil::MB_UpdateKick; 00462258 mobyupdate_unsorted::UpdateMoby_8
// callees(4): 000fe610 mobyutil::MB_SphericalToVector; 00108240 mobyutil::MB_randPrimPoints; 00121740 partupd::SpawnPart_4; 005c8318 rand
// strings: 0010aa40: '?fff?' (raw)

void mobyutil::MB_MistDeathEffect(undefined8 param_1,float *param_2,undefined8 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  undefined1 auStack_1b0 [320];
  longlong local_70;
  
  iVar3 = MB_randPrimPoints(0x402c000000000000,param_1,param_2,0x14,auStack_1b0,param_3);
  if (iVar3 != 0) {
    iVar6 = 0;
    if (0 < iVar3) {
      puVar7 = auStack_1b0;
      dVar9 = 1.7999999523162842;
      dVar10 = 0.8999999761581421;
      dVar11 = 0.5;
      dVar12 = 0.0015339808305725455;
      do {
        iVar4 = rand();
        local_70 = (longlong)(int)((iVar4 >> 0xf & 0xfffU) - 0x800);
        dVar8 = (double)(float)((double)local_70 * dVar12);
        iVar4 = rand();
        local_70 = (longlong)(int)((iVar4 >> 0xf & 0xfffU) - 0x800);
        MB_SphericalToVector
                  ((float)((double)g_FrameTime * dVar9),(float)dVar8,
                   (float)((double)local_70 * dVar12),&local_1c0);
        local_1c0 = local_1c0 + *param_2;
        local_1bc = local_1bc + param_2[1];
        local_1b8 = (float)((double)g_FrameTime * dVar10 + (double)(local_1b8 + param_2[2]));
        if (g_goldWeaponsArray.pyrocitor == '\0') {
          iVar4 = rand();
          uVar1 = iVar4 >> 0xf & 0x7fff;
          iVar4 = (int)(animationSpeed *
                       (float)((double)(longlong)(int)(uVar1 + ((int)uVar1 >> 4) * -0x10 + 0x14) +
                              dVar11));
          local_70 = (longlong)iVar4;
          iVar5 = rand();
          uVar2 = (ulonglong)(uint)(iVar5 >> 0xf) & 0x7fff;
          partupd::SpawnPart_4
                    (puVar7,&local_1c0,0x7000a0ff,0xff,iVar4,0x1e,
                     uVar2 + (((uVar2 + 1) * 0x30c3 << 0x20) >> 0x32) * -0x15 + 0x28,1);
        }
        else {
          iVar4 = rand();
          uVar1 = iVar4 >> 0xf & 0x7fff;
          iVar4 = (int)(animationSpeed *
                       (float)((double)(longlong)(int)(uVar1 + ((int)uVar1 >> 4) * -0x10 + 0x14) +
                              dVar11));
          local_70 = (longlong)iVar4;
          iVar5 = rand();
          uVar2 = (ulonglong)(uint)(iVar5 >> 0xf) & 0x7fff;
          partupd::SpawnPart_4
                    (puVar7,&local_1c0,0x7000ffa0,0xff00,iVar4,0x1e,
                     uVar2 + (((uVar2 + 1) * 0x30c3 << 0x20) >> 0x32) * -0x15 + 0x28,1);
        }
        iVar6 = iVar6 + 1;
        puVar7 = puVar7 + 0x10;
      } while (iVar6 < iVar3);
    }
  }
  return;
}



//==== 0010ad80  ns=mobyutil  size=0x208
// sig: undefined MB_StartKick(void)
// callers(101): 001892a8 mobyupdate_helpers::M1022_001892a8; 0018a840 mobyupdate_helpers::M1023_0018a840; 0018e048 mobyupdate_helpers::M1027_0018e048; 0019f9b0 mobyupdate_helpers::M1048_0019f9b0; 001a02d8 mobyupdate_unsorted::UpdateMoby_1048; 001a8808 mobyupdate_helpers::M1059_001a8808; 001a8960 mobyupdate_helpers::M1059_001a8960; 001afa30 mobyupdate_helpers::M1068_001afa30; 001ead68 mobyupdate_helpers::M1169_001ead68; 001f2d58 mobyupdate_helpers::M1196_001f2d58; 001f6fe0 mobyupdate_helpers::M1199_001f6fe0; 001fbc78 mobyupdate_helpers::M1202_001fbc78; 001fcd60 mobyupdate_unsorted::UpdateMoby_1202; 0020f330 mobyupdate_helpers::M1226_0020f330; 00214198 mobyupdate_helpers::M1231_00214198; 00225048 mobyupdate_helpers::M1246_00225048; 0022d900 mobyupdate_helpers::M1262_0022d900; 00233180 mobyupdate_unsorted::UpdateMoby_1266; 0025ce40 FUN_0025ce40; 0026c6f0 mobyupdate_unsorted::UpdateMoby_1401_MineBot; 0027cd50 mobyupdate_helpers::M1440_0027cd50; 002803e8 mobyupdate_helpers::M1445_002803e8; 002bbd68 mobyupdate_unsorted::UpdateMoby_181; 002d5f48 mobyupdate_helpers::M1906_002d5f48; 002dc568 mobyupdate_unsorted::UpdateMoby_193
// callees(3): 000fddc0 mobyutil::MB_SetAnimation; 000fdf80 mobyutil::MB_SetAnimationFrame; 00502578 fastfunc::FastWrapRot

/* [p2_mobyutil] init KickVars: kickVel from ang*xySpeed, zSpeed, faceAng=wrap(ang), kickActive=1,
   stage=0; then MB_SetAnimation/Frame */

void mobyutil::MB_StartKick
               (double param_1,MobyInstance *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined2 uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  fVar6 = (float)(param_1 + 1.570796251296997);
  dVar8 = (double)(float)(3.141592502593994 - param_1);
  if (param_1 - (double)(float)(3.141592502593994 - param_1) < 0.0) {
    dVar8 = param_1;
  }
  fVar3 = 3.1415925 - fVar6;
  if (fVar6 - (3.1415925 - fVar6) < 0.0) {
    fVar3 = fVar6;
  }
  dVar7 = (double)(float)(-3.141592502593994 - param_1);
  if ((double)(float)(-3.141592502593994 - param_1) - dVar8 < 0.0) {
    dVar7 = dVar8;
  }
  fVar4 = -3.1415925 - fVar6;
  if ((-3.1415925 - fVar6) - fVar3 < 0.0) {
    fVar4 = fVar3;
  }
  dVar8 = (double)(float)(dVar7 * dVar7);
  fVar5 = fVar4 * fVar4;
  dVar10 = (double)(float)(dVar8 * (double)(float)(dVar8 * dVar7));
  pfVar2 = (float *)param_3;
  fVar6 = fVar5 * fVar5 * fVar4;
  dVar9 = (double)(float)(dVar8 * dVar10);
  pfVar2[2] = pfVar2[7];
  pfVar2[3] = 1.0;
  fVar3 = fVar5 * fVar6;
  pfVar2[1] = ((float)(dVar8 * dVar9) * 2.601887e-06 +
              (float)(dVar9 * -0.0001980741071747616 +
                     (double)(float)(dVar10 * 0.008333025500178337 +
                                    (double)(float)((double)(float)(dVar8 * dVar7) *
                                                    -0.16666656732559204 + dVar7)))) * pfVar2[6];
  *pfVar2 = (fVar5 * fVar3 * 2.601887e-06 +
            fVar3 * -0.0001980741 + fVar6 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4) *
            pfVar2[6];
  dVar8 = (double)fastfunc::FastWrapRot((float)param_1,3.1415927);
  pfVar2[0x10] = (float)dVar8;
  auVar11 = ZEXT416(0xffffffff);
  auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
  pfVar2[0x11] = 0.0;
  auVar13 = loadVectorLeftIndexed(0x20,0x10ad58);
  auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
  auVar11 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  fVar6 = pfVar2[9];
  auVar11 = vectorMultiplyAddFloatingPoint
                      (auVar13,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,auVar12
                      );
  auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
  auVar11 = vectorSplatHalfWord(auVar11,1);
  uVar1 = storeVectorElementHalfWordIndexed(auVar11,0x2c,param_3);
  *(undefined2 *)(pfVar2 + 0xb) = uVar1;
  *(undefined1 *)(pfVar2 + 0xf) = 1;
  *(undefined2 *)((int)pfVar2 + 0x3e) = 0;
                    /* WARNING: Load size is inaccurate */
  if ((((param_2 != (MobyInstance *)0x0) && ((param_2->modeBits & HAS_SPECIAL_VARS) != NONE)) &&
      (*param_2->pVar != (int *)0x0)) && (**param_2->pVar == 0)) {
    fVar6 = (float)((uint)fVar6 | 0x20);
    pfVar2[9] = fVar6;
    param_2->collision = (ushort *)0x0;
  }
  if (((uint)fVar6 & 2) == 0) {
    MB_SetAnimation(param_2,param_5,param_7,param_6);
  }
  else {
    MB_SetAnimationFrame(param_2,(int)param_5,(int)param_7,(int)param_6,1);
  }
  return;
}



//==== 0010af88  ns=mobyutil  size=0x60
// sig: bool MB_isCrate(undefined4 moby)
// callers(20): 00032100 camera0::UpdateCamCollisions_0; 0007e5e8 hero::Hero_GetGroundInfo; 0008af28 hero::???_Hero_UpdateGroundProbe; 00094168 hero::???_Hero_UpdateCrateTargeting; 000993d8 hero::Hero_ComputeTargetScore; 000aaec0 hero::HandleHeroMovement; 001fcd60 mobyupdate_unsorted::UpdateMoby_1202; 002a2438 mobyupdate_unsorted::UpdateMoby_160; 00332c38 mobyupdate_unsorted::UpdateMoby_294; 003a5468 mobyupdate_helpers::M511_003a5468; 003a6388 mobyupdate_helpers::M511_003a6388; 003a6d40 mobyupdate_helpers::M511_003a6d40; 003a7360 mobyupdate_unsorted::UpdateMoby_500_Crate; 003a8068 mobyupdate_helpers::M1340_003a8068; 003b4740 mobyupdate_unsorted::UpdateMoby_556; 0042c150 mobyupdate_unsorted::UpdateMoby_71; 00433450 mobyupdate_unsorted::UpdateMoby_717; 0043dc00 mobyupdate_unsorted::UpdateMoby_74; 00466220 mobyupdate_helpers::M806_00466220; 00492d98 mobyupdate_unsorted::UpdateMoby_857
// callees(0): 

bool mobyutil::MB_isCrate(MobyInstance *moby)

{
  bool ret;
  
  if (moby == (MobyInstance *)0x0) {
    ret = false;
  }
  else if ((moby < MobyInstance) || (MobyInstanceEnd < moby)) {
    ret = false;
  }
  else if ((short)moby->oClass < 0x21d && 499 < (short)moby->oClass) {
    ret = true;
  }
  else {
    ret = false;
  }
  return ret;
}



//==== 0010b030  ns=mobyutil  size=0xcb4
// sig: int MB_UpdateKick(MobyInstance * pMoby, KickVars * kv)
// callers(92): 00189bd8 mobyupdate_unsorted::UpdateMoby_1022; 0018b2f8 mobyupdate_unsorted::UpdateMoby_1023; 0018e9f8 mobyupdate_unsorted::UpdateMoby_1027; 001a02d8 mobyupdate_unsorted::UpdateMoby_1048; 001aa078 mobyupdate_unsorted::UpdateMoby_1059; 001b07a8 mobyupdate_unsorted::UpdateMoby_1068; 001eb4f8 mobyupdate_unsorted::UpdateMoby_1169; 001f3688 mobyupdate_unsorted::UpdateMoby_1196; 001f7980 mobyupdate_unsorted::UpdateMoby_1199; 001fcd60 mobyupdate_unsorted::UpdateMoby_1202; 0020fda8 mobyupdate_unsorted::UpdateMoby_1226; 00214a98 mobyupdate_unsorted::UpdateMoby_1231; 00225b48 mobyupdate_unsorted::UpdateMoby_1246; 0022e580 mobyupdate_unsorted::UpdateMoby_1262; 00233180 mobyupdate_unsorted::UpdateMoby_1266; 0025d0d0 mobyupdate_unsorted::UpdateMoby_1371; 0026c6f0 mobyupdate_unsorted::UpdateMoby_1401_MineBot; 0027d4c8 mobyupdate_unsorted::UpdateMoby_1440; 002806b0 mobyupdate_unsorted::UpdateMoby_1445; 002bbd68 mobyupdate_unsorted::UpdateMoby_181; 002d6498 mobyupdate_unsorted::UpdateMoby_1906; 002dc568 mobyupdate_unsorted::UpdateMoby_193; 002de920 mobyupdate_unsorted::UpdateMoby_194; 002e5698 mobyupdate_unsorted::UpdateMoby_199; 002f20a0 mobyupdate_unsorted::UpdateMoby_217
// callees(11): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere; 0005e598 collproc::CollMobySphere; 00060780 collproc::CollHotspot; 000efe40 mobyfunc::BlendAnimFrame; 000fcb40 mobyutil::MB_SolveQuad; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00105c08 mobyutil::CollDamageMobyDirect; 0010aa50 mobyutil::MB_MistDeathEffect; 00456478 FUN_00456478; 00502730 fastfunc::FastIntToDouble

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [p2_mobyutil] per-frame kick physics: grav, MistDeathEffect on effectType 1, collisions, damage,
   bounces */

int mobyutil::MB_UpdateKick(MobyInstance *pMoby,KickVars *kv)

{
  float fVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  f32 fVar7;
  MobyInstance *victim;
  longlong lVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  longlong lVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar17;
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
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  float local_70;
  uint uVar16;
  
  lVar8 = (longlong)(int)pMoby;
  cVar2 = kv->effectType;
  uVar14 = 0;
  fVar3 = kv->kickVel[2] - kv->grav;
  iVar10 = 0;
  kv->kickVel[2] = fVar3;
  if ((cVar2 == '\x01') && (kv->effectPrimMask != '\0')) {
    MB_MistDeathEffect(lVar8,(longlong)(int)kv,kv->effectPrimMask);
    fVar3 = kv->kickVel[2];
  }
  fVar4 = kv->kickVel[1];
  fVar5 = kv->kickVel[0];
  dVar19 = 0.0;
  dVar18 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4);
  dVar20 = dVar19;
  if (kv->stage != 2) {
    dVar20 = (double)kv->minXySpeed;
  }
  dVar21 = (double)kv->drag;
  dVar20 = (double)(float)(dVar20 - dVar18);
  if ((dVar20 <= dVar21) && (dVar24 = -dVar21, dVar21 = dVar20, dVar20 < dVar24)) {
    dVar21 = dVar24;
  }
  fVar1 = (float)((double)(float)(dVar21 + dVar18) / dVar18);
  fVar6 = kv->zSpeed;
  dVar24 = (double)(fVar5 * fVar1);
  dVar21 = (double)(fVar4 * fVar1);
  dVar20 = dVar19;
  if (0.0 - dVar18 < 0.0) {
    dVar20 = dVar24;
  }
  dVar30 = dVar19;
  if (0.0 - dVar18 < 0.0) {
    dVar30 = dVar21;
  }
  if (dVar18 - 0.0 < 0.0) {
    dVar20 = dVar24;
  }
  if (dVar18 - 0.0 < 0.0) {
    dVar30 = dVar21;
  }
  kv->kickVel[0] = (float)dVar20;
  kv->kickVel[1] = (float)dVar30;
  if (fVar6 < fVar3) {
    kv->kickVel[2] = fVar6;
  }
  fVar3 = (pMoby->pos).z;
  fVar4 = kv->zOfs;
  dVar18 = 0.5;
  iVar9 = collproc::CollLine(local_80,local_90,2,0,0);
  dVar20 = dVar19;
  if (iVar9 != 0) {
    dVar20 = (double)CollOutput.ip.z;
  }
  iVar9 = collproc::CollHotspot();
  dVar21 = (double)kv->kickVel[0];
  dVar24 = (double)kv->kickVel[1];
  if (iVar9 == 0) {
    if (((*(int *)&kv->field_0x5c == 0) && (dVar21 = (double)(fVar3 + fVar4), dVar20 <= dVar21)) &&
       ((double)(float)(dVar21 + (double)kv->kickVel[2]) < dVar20)) {
      *(undefined4 *)&kv->field_0x5c = 0x3f800000;
      FUN_00456478(0x4008000000000000,local_100);
    }
    iVar9 = collproc::CollLine(local_a0,local_b0,0x22,0,0);
    dVar21 = (double)kv->kickVel[0];
    dVar24 = (double)kv->kickVel[1];
    dVar20 = dVar19;
    if (iVar9 != 0) {
      dVar20 = (double)CollOutput.ip.z;
    }
  }
  else if (((kv->flag & 0x10U) != 0) || (kv->stage == 2)) {
    iVar9 = collproc::CollLine(local_c0,local_d0,0x22,0,0);
    dVar21 = (double)kv->kickVel[0];
    dVar24 = (double)kv->kickVel[1];
    dVar30 = dVar19;
    if (iVar9 != 0) {
      dVar30 = (double)CollOutput.ip.z;
    }
    if (dVar30 < (double)(float)(dVar20 - 0.25)) {
      dVar30 = (double)SQRT((float)(dVar21 * dVar21 + (double)(float)(dVar24 * dVar24)));
      dVar27 = (double)(float)(dVar21 * (double)(float)(dVar19 / dVar30));
      dVar28 = (double)(float)(dVar24 * (double)(float)(dVar19 / dVar30));
      dVar21 = dVar19;
      if (dVar19 - dVar30 < 0.0) {
        dVar21 = dVar27;
      }
      dVar24 = dVar19;
      if (dVar19 - dVar30 < 0.0) {
        dVar24 = dVar28;
      }
      if (dVar30 - dVar19 < 0.0) {
        dVar21 = dVar27;
      }
      if (dVar30 - dVar19 < 0.0) {
        dVar24 = dVar28;
      }
      kv->kickVel[0] = (float)dVar21;
      kv->kickVel[1] = (float)dVar24;
    }
  }
  uVar16 = *(uint *)&kv->field_0x5c;
  fVar3 = *(float *)&kv->field_0x5c;
  iVar9 = ((uint)((int)uVar16 >> 0x1f) >> 1 ^ uVar16) - ((int)uVar16 >> 0x1f);
  if (uVar16 != 0) {
    if (iVar9 < 0x40800000) {
      fVar4 = kv->kickVel[2];
      kv->kickVel[0] = (float)(dVar21 * 0.699999988079071);
      kv->kickVel[1] = (float)(dVar24 * 0.699999988079071);
      kv->kickVel[2] = fVar4 * 0.7;
    }
    if (iVar9 < 0x40e00000) {
      *(float *)&kv->field_0x5c = fVar3 + 1.0;
      kv->grav = kv->grav * 0.75;
    }
  }
  fVar7 = (pMoby->pos).x;
  uVar16 = (int)fVar7 >> 0x1f;
  dVar21 = 2.0;
  iVar9 = (uVar16 >> 1 ^ (uint)fVar7) - uVar16;
  if (((iVar9 < 0x40000000) || (0x447f4000 < iVar9)) ||
     ((fVar7 = (pMoby->pos).y, uVar16 = (int)fVar7 >> 0x1f,
      iVar9 = (uVar16 >> 1 ^ (uint)fVar7) - uVar16, 0x447f4000 < iVar9 || iVar9 < 0x40000000 ||
      ((fVar7 = (pMoby->pos).z, uVar16 = (int)fVar7 >> 0x1f,
       iVar9 = (uVar16 >> 1 ^ (uint)fVar7) - uVar16, iVar9 < 0x40000000 || (0x447f4000 < iVar9))))))
  {
    uVar14 = 0x100;
  }
  if ((*(int *)&kv->field_0x54 != -0x40800000) && (kv->peakFrame != -1.0)) {
    sVar11 = kv->stage;
    if (sVar11 < 1) {
      if ((-1 < sVar11) && (dVar20 = ABS((double)(kv->kickVel[2] / kv->grav)), 2.0 < dVar20)) {
        dVar21 = (double)mobyfunc::BlendAnimFrame(pMoby);
        dVar20 = (double)(float)((double)(float)((double)kv->peakFrame - dVar21) / dVar20);
        if (dVar19 < dVar20) {
          dVar21 = (double)(float)(dVar20 - (double)pMoby->unk58);
          dVar20 = (double)(DAT_0071f408 * 0.1);
          if ((dVar21 <= dVar20) && (dVar24 = -dVar20, dVar20 = dVar21, dVar21 < dVar24)) {
            dVar20 = dVar24;
          }
          pMoby->unk58 = (float)((double)pMoby->unk58 + dVar20);
        }
      }
    }
    else if (sVar11 < 2) {
      dVar24 = (double)mobyfunc::BlendAnimFrame(pMoby);
      if ((double)*(float *)&kv->field_0x54 <= dVar24) {
        pMoby->unk58 = (float)dVar19;
      }
      else {
        dVar24 = (double)(kv->grav * -0.5);
        iVar9 = MB_SolveQuad(dVar24,(double)(float)((double)kv->kickVel[2] - dVar24),
                             (double)(float)((double)(pMoby->pos).z - dVar20));
        if (((iVar9 < 1) ||
            (iVar9 = ((uint)((int)local_70 >> 0x1f) >> 1 ^ (uint)local_70) - ((int)local_70 >> 0x1f)
            , iVar9 < 1)) || (0x426fffff < iVar9)) {
          local_70 = 60.0;
        }
        dVar20 = (double)local_70;
        if ((double)local_70 - 9.999999747378752e-05 < 0.0) {
          dVar20 = 9.999999747378752e-05;
        }
        dVar24 = (double)mobyfunc::BlendAnimFrame(pMoby);
        dVar20 = (double)(float)((double)(float)((double)*(float *)&kv->field_0x54 - dVar24) /
                                dVar20);
        if ((dVar20 <= dVar21) && (dVar21 = dVar20, dVar20 < dVar19)) {
          dVar21 = dVar19;
        }
        dVar21 = (double)(float)(dVar21 - (double)pMoby->unk58);
        dVar20 = (double)(DAT_0071f408 * 0.1);
        if ((dVar21 <= dVar20) && (dVar24 = -dVar20, dVar20 = dVar21, dVar21 < dVar24)) {
          dVar20 = dVar24;
        }
        pMoby->unk58 = (float)((double)pMoby->unk58 + dVar20);
      }
    }
    else if (sVar11 < 3) {
      pMoby->unk58 = 1.0;
    }
  }
  lVar15 = (uVar14 | 0x40) +
           ((LZCOUNT(-((byte)pMoby->field43_0x70 & 2)) << 0x3a) >> 0x3f & uVar14 - (uVar14 | 0x40));
  uVar16 = (uint)lVar15;
  if ((kv->flag & 4U) == 0) {
    OrganicDeltAngSpeed((double)kv->faceAng,0x3f947ae140000000,0x3fd3333340000000,
                        (double)kv->faceLimit,lVar8,&DAT_0010afe8,(longlong)(int)kv + 0x44);
  }
  (pMoby->pos).x = (pMoby->pos).x + kv->kickVel[0];
  (pMoby->pos).y = (pMoby->pos).y + kv->kickVel[1];
  iVar9 = kv->radius;
  (pMoby->pos).z = (pMoby->pos).z + kv->kickVel[2];
  dVar20 = (double)fastfunc::FastIntToDouble(iVar9);
  lVar12 = lVar8;
  iVar9 = collproc::CollMobySphere
                    ((double)(float)(dVar20 * 0.0010742187732830644),local_e0,&DAT_0010afe8,0x10,
                     lVar8,0);
  if (0 < iVar9) {
    puVar13 = &DAT_00a14a00;
    dVar20 = 1.0;
    do {
      victim = (MobyInstance *)*puVar13;
      if ((((victim == (MobyInstance *)0x0) || (victim < MobyInstance)) ||
          (MobyInstanceEnd < victim)) ||
         (0x21c < (short)victim->oClass || (short)victim->oClass < 500)) {
        if (((kv->flag & 0x20U) != 0) && (kv->stage == 2)) {
          lVar15 = (longlong)(int)((uint)lVar15 | 0x100);
        }
      }
      else {
        CollDamageMobyDirect
                  ((float)dVar20,victim,pMoby,0x10000,(int)lVar12,&(pMoby->pos).x,kv->kickVel);
      }
      uVar16 = (uint)lVar15;
      iVar10 = iVar10 + 1;
      puVar13 = puVar13 + 1;
    } while (iVar10 < iVar9);
  }
  dVar20 = 0.0009765625;
  if ((float)((double)(longlong)kv->radius * 0.0009765625) <
      SQRT(kv->kickVel[2] * kv->kickVel[2] +
           kv->kickVel[0] * kv->kickVel[0] + kv->kickVel[1] * kv->kickVel[1])) {
    collproc::CollLine(local_110,local_f0,0x24,lVar8,0);
  }
  dVar21 = (double)fastfunc::FastIntToDouble(kv->radius);
  iVar10 = collproc::CollSphere((double)(float)(dVar21 * dVar20),local_f0);
  dVar20 = (double)kv->kickVel[2];
  dVar30 = (double)kv->kickVel[0];
  dVar24 = (double)kv->kickVel[1];
  sVar11 = kv->stage;
  dVar21 = (double)kv->grav;
  fVar3 = kv->xyBounceDamp;
  uVar17 = uVar16;
  if (iVar10 != 0) {
    (pMoby->pos).x = CollOutput.push.x;
    (pMoby->pos).y = CollOutput.push.y;
    fVar4 = CollOutput.push.z;
    (pMoby->pos).w = CollOutput.push.w;
    uVar17 = uVar16 | 2;
    (pMoby->pos).z = fVar4 - kv->zOfs;
    dVar25 = (double)(CollOutput.normal.z * CollOutput.normal.z +
                     CollOutput.normal.x * CollOutput.normal.x +
                     CollOutput.normal.y * CollOutput.normal.y);
    dVar27 = dVar19;
    dVar28 = dVar19;
    dVar29 = dVar19;
    if ((double)(float)SQRT(dVar25) != dVar19) {
      dVar27 = 1.0 / SQRT(dVar25);
      dVar27 = (double)(float)(-(double)(float)((double)(float)(dVar25 * dVar27) * dVar27 - 1.0) *
                               (double)(float)(dVar18 * dVar27) + dVar27);
      dVar27 = (double)(float)(-(double)(float)((double)(float)(dVar25 * dVar27) * dVar27 - 1.0) *
                               (double)(float)(dVar18 * dVar27) + dVar27);
      fVar4 = (float)(-(double)(float)((double)(float)(dVar25 * dVar27) * dVar27 - 1.0) *
                      (double)(float)(dVar18 * dVar27) + dVar27);
      dVar27 = (double)(CollOutput.normal.x * fVar4);
      dVar28 = (double)(CollOutput.normal.y * fVar4);
      dVar29 = (double)(CollOutput.normal.z * fVar4);
    }
    if (dVar29 < 0.7070000171661377) {
      dVar18 = (double)(float)(dVar20 * dVar29 +
                              (double)(float)(dVar30 * dVar27 + (double)(float)(dVar24 * dVar28)));
      if (dVar18 < dVar19) {
        dVar25 = (double)SQRT((float)(dVar29 * dVar29 +
                                     (double)(float)(dVar27 * dVar27 +
                                                    (double)(float)(dVar28 * dVar28))));
        dVar21 = (double)(float)(-(double)(float)(dVar18 * (double)(fVar3 + 1.0)) / dVar25);
        dVar18 = dVar19;
        if (dVar19 - dVar25 < 0.0) {
          dVar18 = (double)(float)(dVar29 * dVar21);
        }
        dVar26 = dVar19;
        if (dVar19 - dVar25 < 0.0) {
          dVar26 = (double)(float)(dVar28 * dVar21);
        }
        dVar22 = dVar19;
        if (dVar19 - dVar25 < 0.0) {
          dVar22 = (double)(float)(dVar27 * dVar21);
        }
        if (dVar25 - dVar19 < 0.0) {
          dVar18 = (double)(float)(dVar29 * dVar21);
        }
        if (dVar25 - dVar19 < 0.0) {
          dVar26 = (double)(float)(dVar28 * dVar21);
        }
        if (dVar25 - dVar19 < 0.0) {
          dVar22 = (double)(float)(dVar27 * dVar21);
        }
        dVar18 = dVar20 + dVar18;
        dVar20 = (double)(float)dVar18;
        kv->kickVel[2] = (float)dVar18;
        kv->kickVel[1] = (float)(dVar24 + dVar26);
        kv->kickVel[0] = (float)(dVar30 + dVar22);
      }
    }
    else {
      dVar18 = (double)(float)(dVar20 * dVar29 +
                              (double)(float)(dVar30 * dVar27 + (double)(float)(dVar24 * dVar28)));
      if (dVar18 < dVar19) {
        if (CollOutput.pMoby == (MobyInstance *)0x0) {
          sVar11 = 2;
          kv->stage = 2;
          uVar17 = uVar16 | 3;
        }
        else if (0 < CollOutput.poly) {
          sVar11 = 2;
          kv->stage = 2;
          uVar17 = uVar16 | 3;
        }
        dVar26 = (double)SQRT((float)(dVar29 * dVar29 +
                                     (double)(float)(dVar27 * dVar27 +
                                                    (double)(float)(dVar28 * dVar28))));
        dVar25 = (double)(float)(dVar18 / dVar26);
        dVar18 = dVar19;
        if (dVar19 - dVar26 < 0.0) {
          dVar18 = (double)(float)(dVar29 * dVar25);
        }
        dVar22 = dVar19;
        if (dVar19 - dVar26 < 0.0) {
          dVar22 = (double)(float)(dVar28 * dVar25);
        }
        dVar23 = dVar19;
        if (dVar19 - dVar26 < 0.0) {
          dVar23 = (double)(float)(dVar27 * dVar25);
        }
        if (dVar26 - dVar19 < 0.0) {
          dVar18 = (double)(float)(dVar29 * dVar25);
        }
        if (dVar26 - dVar19 < 0.0) {
          dVar22 = (double)(float)(dVar28 * dVar25);
        }
        if (dVar26 - dVar19 < 0.0) {
          dVar23 = (double)(float)(dVar27 * dVar25);
        }
        dVar18 = dVar20 - dVar18;
        dVar20 = (double)(float)dVar18;
        dVar27 = (double)(float)(dVar24 - dVar22);
        dVar28 = (double)(float)(dVar30 - dVar23);
        kv->kickVel[2] = (float)dVar18;
        kv->kickVel[1] = (float)(dVar24 - dVar22);
        kv->kickVel[0] = (float)(dVar30 - dVar23);
        if (sVar11 == 2) {
          dVar18 = (double)SQRT((float)(dVar20 * dVar20 +
                                       (double)(float)(dVar28 * dVar28 +
                                                      (double)(float)(dVar27 * dVar27))));
          dVar24 = -dVar18;
          if ((dVar24 <= dVar21) && (dVar30 = -dVar21, dVar21 = dVar24, dVar24 < dVar30)) {
            dVar21 = dVar30;
          }
          dVar30 = (double)(float)((double)(float)(dVar21 + dVar18) / dVar18);
          dVar21 = dVar20 * dVar30;
          dVar24 = dVar19;
          if (dVar19 - dVar18 < 0.0) {
            dVar24 = (double)(float)(dVar28 * dVar30);
          }
          dVar29 = dVar19;
          if (dVar19 - dVar18 < 0.0) {
            dVar29 = (double)(float)(dVar27 * dVar30);
          }
          dVar20 = dVar19;
          if (dVar19 - dVar18 < 0.0) {
            dVar20 = (double)(float)dVar21;
          }
          if (dVar18 - dVar19 < 0.0) {
            dVar24 = (double)(float)(dVar28 * dVar30);
          }
          if (dVar18 - dVar19 < 0.0) {
            dVar29 = (double)(float)(dVar27 * dVar30);
          }
          if (dVar18 - dVar19 < 0.0) {
            dVar20 = (double)(float)dVar21;
          }
          kv->kickVel[0] = (float)dVar24;
          kv->kickVel[1] = (float)dVar29;
          kv->kickVel[2] = (float)dVar20;
        }
      }
    }
  }
  if (dVar20 < dVar19 && sVar11 == 0) {
    kv->stage = 1;
  }
  return uVar17;
}



//==== 0010bcf0  ns=mobyutil  size=0x2a8
// sig: void MB_MtxToQuat(float * outQuat, float * mtx)
// callers(6): 0010bf98 mobyutil::MB_TransformToQuat; 002edb38 mobyupdate_helpers::M211_002edb38; 003d2c48 mobyupdate_unsorted::UpdateMoby_585; 00421f08 mobyupdate_helpers::M694_00421f08; 00473158 mobyupdate_helpers::M820_00473158; 0048c188 FUN_0048c188
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void mobyutil::MB_MtxToQuat(float *outQuat,float *mtx)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined1 local_70 [48];
  uint local_40 [3];
  float local_34 [11];
  
  uVar7 = (int)*mtx >> 0x1f;
  uVar8 = (int)mtx[5] >> 0x1f;
  uVar9 = (int)mtx[10] >> 0x1f;
  fVar1 = *mtx + mtx[5] + mtx[10];
  if (fVar1 <= 0.0) {
    lVar18 = (longlong)(int)((uVar7 >> 1 ^ (uint)*mtx) - uVar7) -
             (longlong)(int)((uVar8 >> 1 ^ (uint)mtx[5]) - uVar8);
    lVar16 = lVar18 >> 0x3f;
    uVar7 = (int)local_34[(int)(lVar18 >> 0x3f) * -4] >> 0x1f;
    uVar17 = ((longlong)(int)((uVar7 >> 1 ^ (uint)local_34[(int)(lVar18 >> 0x3f) * -4]) - uVar7) -
              (longlong)(int)((uVar9 >> 1 ^ (uint)mtx[10]) - uVar9) >> 0x3f & lVar16 + 2U) - lVar16;
    uVar7 = *(uint *)(((uint)((uVar17 & 0xffffffff) << 2) & 0xc | (uint)local_70) + 0x30);
    iVar12 = (int)(((ulonglong)uVar7 & 0x3fffffff) << 2);
    iVar15 = (int)uVar17;
    uVar8 = *(uint *)((int)local_40 + iVar12);
    iVar13 = (int)((uVar17 & 0x3fffffff) << 2);
    iVar14 = (int)(((ulonglong)uVar8 & 0x3fffffff) << 2);
    fVar1 = *(float *)(local_70 + iVar12 + uVar8 * 0xc + 0x3c);
    fVar2 = *(float *)(local_70 + iVar13 + uVar7 * 0xc + 0x3c);
    fVar3 = *(float *)(local_70 + iVar14 + uVar7 * 0xc + 0x3c);
    fVar4 = *(float *)(local_70 + iVar12 + iVar15 * 0xc + 0x3c);
    fVar5 = *(float *)(local_70 + iVar14 + iVar15 * 0xc + 0x3c);
    fVar11 = SQRT((*(float *)(local_70 + iVar13 + iVar15 * 0xc + 0x3c) -
                  (*(float *)(local_70 + iVar12 + uVar7 * 0xc + 0x3c) +
                  *(float *)(local_70 + iVar14 + uVar8 * 0xc + 0x3c))) + 1.0);
    fVar6 = *(float *)(local_70 + iVar13 + uVar8 * 0xc + 0x3c);
    *(float *)((int)outQuat + iVar13) = fVar11 * 0.5;
    fVar10 = fVar11;
    if (0.0 - fVar11 < 0.0) {
      fVar10 = 0.5 / fVar11;
    }
    if (fVar11 - 0.0 < 0.0) {
      fVar10 = 0.5 / fVar11;
    }
    outQuat[3] = (fVar1 - fVar3) * fVar10;
    *(float *)((int)outQuat + iVar12) = (fVar2 + fVar4) * fVar10;
    *(float *)((int)outQuat + iVar14) = (fVar6 + fVar5) * fVar10;
  }
  else {
    fVar2 = SQRT(fVar1 + 1.0);
    fVar1 = 0.5 / fVar2;
    outQuat[3] = fVar2 * 0.5;
    *outQuat = (mtx[9] - mtx[6]) * fVar1;
    outQuat[1] = (mtx[2] - mtx[8]) * fVar1;
    outQuat[2] = (mtx[4] - mtx[1]) * fVar1;
  }
  return;
}



//==== 0010bf98  ns=mobyutil  size=0x68
// sig: undefined MB_TransformToQuat(void)
// callers(6): 0004d4dc camera::camera8::InitCamera_8; 000514c0 camera::Camera_InitBlender; 00051af8 camera::Camera_BlendCamsPosQuat; 00051d40 camera::Camera_BlendCamsPolQuat; 00479b78 mobyupdate_helpers::M827_00479b78; 0048c188 FUN_0048c188
// callees(3): 0010bcf0 mobyutil::MB_MtxToQuat; 00500f6c fastfunc::FastMtxCopyNoTranslate; 00500fa8 fastfunc::FastApplyTransform

void mobyutil::MB_TransformToQuat(float *param_1,Vec4 *param_2)

{
  Vec4 aVStack_60 [4];
  
  fastfunc::FastMtxCopyNoTranslate(aVStack_60);
  MB_MtxToQuat(param_1,&aVStack_60[0].x);
  fastfunc::FastApplyTransform(param_2,aVStack_60);
  return;
}



//==== 0010c000  ns=mobyutil  size=0x18
// sig: undefined MB_CopyHeroLights(void)
// callers(43): 0020ab50 mobyupdate_helpers::M1215_0020ab50; 0020b6b0 mobyupdate_helpers::M1220_0020b6b0; 0021b5e8 FUN_0021b5e8; 0023d358 mobyupdate_helpers::M1288_0023d358; 0027b170 FUN_0027b170; 00291828 mobyupdate_helpers::M1516_00291828; 00291970 mobyupdate_unsorted::UpdateMoby_152; 002ae5d8 FUN_002ae5d8; 002cb828 FUN_002cb828; 002ce020 FUN_002ce020; 002e7140 FUN_002e7140; 002ea758 FUN_002ea758; 002f05c0 mobyupdate_helpers::M1412_002f05c0; 002f9610 FUN_002f9610; 0031d8e0 FUN_0031d8e0; 003258d0 mobyupdate_helpers::M1299_003258d0; 00344150 FUN_00344150; 00354160 mobyupd::update352::Spawn_Moby352; 00354638 FUN_00354638; 00356528 mobyupdate_helpers::M375_00356528; 00357308 mobyupdate_helpers::M376_00357308; 00357958 mobyupdate_helpers::M377_00357958; 00358108 mobyupdate_helpers::M378_00358108; 00358494 mobyupdate_helpers::M378_00358494; 00359288 mobyupdate_helpers::M380_00359288
// callees(0): 

void mobyutil::MB_CopyHeroLights(int param_1)

{
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)&g_heroMobyPtr->color;
  return;
}



//==== 0010c038  ns=mobyutil  size=0xd4
// sig: void MB_AxisAngleToQuat(float angle, float * outQuat, float * axis)
// callers(6): 00051d40 camera::Camera_BlendCamsPolQuat; 001113e0 mobyutil::MB_RotateQuatAxisAngle; 00240f38 mobyupdate_helpers::M16_00240f38; 00242738 MB_SpawnBolts; 0028d1f8 mobyupdate_unsorted::UpdateMoby_a_lot_8; 0048c188 FUN_0048c188
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void mobyutil::MB_AxisAngleToQuat(float angle,float *outQuat,float *axis)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = angle * 0.5;
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar2 = fVar3 * fVar3;
  fVar4 = fVar2 * fVar2 * fVar3;
  fVar5 = fVar2 * fVar4;
  fVar2 = fVar2 * fVar5 * 2.601887e-06 +
          fVar5 * -0.0001980741 + fVar4 * 0.0083330255 + fVar2 * fVar3 * -0.16666657 + fVar3;
  *outQuat = *axis * fVar2;
  outQuat[1] = axis[1] * fVar2;
  outQuat[2] = axis[2] * fVar2;
  fVar1 = fVar1 + 1.5707963;
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
  outQuat[3] = fVar1 * fVar4 * 2.601887e-06 +
               fVar4 * -0.0001980741 + fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3;
  return;
}



//==== 0010c110  ns=mobyutil  size=0xd0
// sig: undefined ???_MB_ClampVecToPlanes(void)
// callers(2): 0007e3c8 hero::Hero_GetGroundCollTestVecs; 000a5a58 hero::Hero_PredictLand
// callees(0): 

void mobyutil::____MB_ClampVecToPlanes(undefined8 param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  float fStack00000030;
  float fStack00000034;
  float fStack00000038;
  float fStack0000003c;
  float local_10 [4];
  
  fStack00000034 = (float)param_1;
  iVar6 = 0;
  fStack0000003c = (float)param_2;
  fStack00000030 = (float)((ulonglong)param_1 >> 0x20);
  pfVar3 = local_10;
  pfVar4 = &stack0x00000030;
  fStack00000038 = (float)((ulonglong)param_2 >> 0x20);
  pfVar5 = param_3;
  do {
    if ((int)*pfVar5 < 0) {
      fVar1 = *pfVar4;
      fVar2 = *pfVar3;
      param_3[3] = fStack0000003c;
      fVar1 = ABS((fVar1 - 0.1) / fVar2);
      *param_3 = (*param_3 - fStack00000030) * fVar1 + fStack00000030;
      param_3[1] = (param_3[1] - fStack00000034) * fVar1 + fStack00000034;
      param_3[2] = (param_3[2] - fStack00000038) * fVar1 + fStack00000038;
    }
    iVar6 = iVar6 + 1;
    pfVar4 = pfVar4 + 1;
    pfVar3 = pfVar3 + 1;
    pfVar5 = pfVar5 + 1;
  } while (iVar6 < 3);
  return;
}



//==== 0010c1e8  ns=mobyutil  size=0x618
// sig: undefined MB_MtxToEuler(int param_1, MobyInstance * param_2)
// callers(27): 00053550 camera::UpdateCamera; 00080ee0 hero::Hero_AttachRatchetToHeroBone; 00086df8 hero::Hero_Turn3D_XYZ; 00090a00 hero::Hero_PushGadgetMtxHistory; 000914e0 hero::Hero_UpdateGadgetMobys; 000965bc hero::Hero_RotateAroundPoint; 0009b9ec hero::Hero_RotateByEuler; 0009ba88 hero::Hero_Turn3D; 0009fd08 hero::???_Unused_Hero_RotateTowardDir; 000a1698 hero::Hero_ThrowWrench; 001122e0 mobyutil::MB_PlatformLocalToWorld; 001124c0 mobyutil::MB_PlatformWorldToLocal; 00112678 mobyutil::MB_PlatformGetDelta; 00112900 mobyutil::MB_GetOrientation; 00113288 mobyutil::???_MB_BuildScaledRotMtx; 0011530c mobyutil::MB_RotateMoby; 00116d1c mobyutil::MB_StoreChildOffsets; 00116eb8 mobyutil::MB_UpdateChildMobys; 00117038 mobyutil::MB_RotateAboutPivot; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 00241320 mobyupdate_unsorted::UpdateMoby_{13_14_15_16}; 0028d1f8 mobyupdate_unsorted::UpdateMoby_a_lot_8; 002f20a0 mobyupdate_unsorted::UpdateMoby_217; 0034e230 mobyupdate_helpers::M342_0034e230; 003f3388 mobyupdate_helpers::M987_003f3388
// callees(3): 00500ca4 fastfunc::FastEulerToMtx1; 00500e08 fastfunc::FastEulerToMtx2; 0050162c fastfunc::FastVecMtx4Mul

void mobyutil::MB_MtxToEuler(int param_1,MobyInstance *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar16;
  longlong lVar15;
  longlong lVar17;
  ulonglong uVar18;
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
  ulonglong in_f28;
  double dVar25;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar26;
  ulonglong in_f31;
  undefined1 auVar27 [16];
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
  undefined4 uVar39;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0x1d0;
  puVar7 = (ulonglong *)lVar14;
  *puVar7 = uVar12;
  puVar7[0x3c] = in_LR;
  puVar7[0x36] = in_f28;
  puVar7[0x37] = in_f29;
  puVar7[0x38] = in_f30;
  puVar7[0x39] = in_f31;
  auVar27 = *(undefined1 (*) [16])(param_1 & 0xfffffff0);
  puVar8 = (undefined4 *)(param_1 + 0x10U & 0xfffffff0);
  uVar31 = puVar8[3];
  uVar30 = puVar8[2];
  uVar29 = puVar8[1];
  uVar28 = *puVar8;
  *(undefined1 (*) [16])(puVar7 + 0x30) = auVar27;
  puVar8 = (undefined4 *)(param_1 + 0x20U & 0xfffffff0);
  uVar35 = puVar8[3];
  uVar34 = puVar8[2];
  uVar33 = puVar8[1];
  uVar32 = *puVar8;
  puVar8 = (undefined4 *)(param_1 + 0x30U & 0xfffffff0);
  uVar39 = puVar8[3];
  uVar38 = puVar8[2];
  uVar37 = puVar8[1];
  uVar36 = *puVar8;
  *(undefined1 (*) [16])(puVar7 + 0x18) = auVar27;
  *(undefined4 *)((int)puVar7 + 0xdc) = uVar31;
  *(undefined4 *)(puVar7 + 0x1b) = uVar30;
  *(undefined4 *)((int)puVar7 + 0xd4) = uVar29;
  *(undefined4 *)(puVar7 + 0x1a) = uVar28;
  *(undefined4 *)((int)puVar7 + 0xec) = uVar35;
  *(undefined4 *)(puVar7 + 0x1d) = uVar34;
  *(undefined4 *)((int)puVar7 + 0xe4) = uVar33;
  *(undefined4 *)(puVar7 + 0x1c) = uVar32;
  auVar5 = auVar27 >> 0x40 & (undefined1  [16])0xffffffff;
  *(undefined4 *)((int)puVar7 + 0xfc) = uVar39;
  *(undefined4 *)(puVar7 + 0x1f) = uVar38;
  *(undefined4 *)((int)puVar7 + 0xf4) = uVar37;
  *(undefined4 *)(puVar7 + 0x1e) = uVar36;
  fVar1 = *(float *)(puVar7 + 0x30);
  auVar6 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar27 = auVar27 >> 0x40 & (undefined1  [16])0xffffffff;
  puVar7[0x34] = unaff_r30;
  *(undefined1 (*) [16])(puVar7 + 0x30) = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
  dVar25 = 0.0;
  uVar28 = storeVectorElementWordIndexed
                     (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,0x10c,lVar14);
  *(undefined4 *)((int)puVar7 + 0x10c) = uVar28;
  uVar28 = storeVectorElementWordIndexed
                     (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0x110,lVar14);
  *(undefined4 *)(puVar7 + 0x22) = uVar28;
  *(undefined4 *)(puVar7 + 0x1f) = 0;
  *(undefined4 *)((int)puVar7 + 0xf4) = 0;
  *(undefined4 *)(puVar7 + 0x1e) = 0;
  puVar7[0x35] = unaff_r31;
  *(undefined4 *)((int)puVar7 + 0xfc) = 0x3f800000;
  *(float *)((int)puVar7 + 0x114) = ABS(fVar1) - ABS(*(float *)(puVar7 + 0x30));
  dVar26 = 0.7853981852531433;
  uVar18 = (ulonglong)(*(uint *)((int)puVar7 + 0x10c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x114) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar7 + 0x22) >> 0x1d) & 4;
  fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
  fVar3 = ABS(*(float *)((int)puVar7 + 0x10c));
  if (*(float *)((int)puVar7 + 0x114) - 0.0 < 0.0) {
    fVar3 = ABS(*(float *)(puVar7 + 0x30));
  }
  fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
  fVar11 = ABS(*(float *)(puVar7 + 0x22));
  if (*(float *)((int)puVar7 + 0x114) - 0.0 < 0.0) {
    fVar11 = ABS(fVar1);
  }
  puVar7[0x33] = unaff_r29;
  dVar20 = dVar25;
  if (0.0 < fVar3) {
    lVar13 = uVar12 - 0x1c0;
    lVar17 = uVar12 - 0x68;
    lVar15 = uVar12 - 0x78;
    lVar19 = 2;
    fVar1 = (fVar11 - fVar3) / (fVar11 + fVar3);
    fVar3 = fVar1 * fVar1;
    *(float *)((int)puVar7 + 0x164) = fVar1;
    *(float *)((int)puVar7 + 0x15c) = fVar1;
    *(float *)(puVar7 + 0x2c) = fVar1;
    *(float *)(puVar7 + 0x2b) = fVar1;
    fVar1 = fVar3 * fVar3;
    *(float *)((int)puVar7 + 0x15c) = *(float *)((int)puVar7 + 0x15c) * fVar3;
    *(float *)(puVar7 + 0x2c) = *(float *)(puVar7 + 0x2c) * fVar1;
    *(float *)((int)puVar7 + 0x164) = *(float *)((int)puVar7 + 0x164) * fVar1 * fVar3;
    do {
      *(float *)((int)lVar13 + 0x158) = *(float *)((int)lVar13 + 0x148) * fVar1 * fVar1;
      iVar9 = (int)lVar15;
      lVar15 = lVar15 + 8;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar9 + 4) * fVar1 * fVar1;
      lVar17 = lVar17 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar19 = 4;
    lVar17 = uVar12 - 0x78;
    pfVar16 = (float *)&DAT_007358e0;
    lVar13 = lVar14;
    lVar15 = lVar17;
    do {
      fVar1 = *pfVar16;
      fVar3 = pfVar16[1];
      pfVar16 = pfVar16 + 2;
      *(float *)((int)lVar13 + 0x158) = *(float *)((int)lVar13 + 0x158) * fVar1;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar3;
      lVar15 = lVar15 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar15 = 2;
    lVar13 = lVar14;
    do {
      iVar9 = (int)lVar13;
      iVar10 = (int)lVar17;
      lVar13 = lVar13 + 0x10;
      lVar17 = lVar17 + 0x10;
      dVar20 = (double)((float)(dVar20 + (double)*(float *)(iVar9 + 0x158)) + *(float *)(iVar10 + 4)
                        + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc));
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    dVar20 = (double)((float)(dVar20 + 0.7853981852531433) * fVar4 + fVar2);
  }
  *(undefined4 *)(puVar7 + 0xe) = 0;
  *(undefined4 *)((int)puVar7 + 0x74) = 0;
  *(float *)(puVar7 + 0xf) = (float)-dVar20;
  fastfunc::FastEulerToMtx1(uVar12 - 0x150,uVar12 - 0x160);
  fastfunc::FastVecMtx4Mul(uVar12 - 0x110,uVar12 - 0x150,uVar12 - 0x110);
  dVar21 = ABS((double)*(float *)(puVar7 + 0x18));
  dVar22 = ABS(-(double)*(float *)(puVar7 + 0x19));
  *(float *)((int)puVar7 + 0x104) = (float)-(double)*(float *)(puVar7 + 0x19);
  *(float *)(puVar7 + 0x21) = (float)(dVar21 - dVar22);
  uVar18 = (ulonglong)(*(uint *)(puVar7 + 0x18) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar7 + 0x21) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x104) >> 0x1d) & 4;
  dVar24 = dVar21;
  if ((double)*(float *)(puVar7 + 0x21) - dVar25 < 0.0) {
    dVar24 = dVar22;
  }
  fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
  dVar22 = ABS((double)*(float *)((int)puVar7 + 0x104));
  if ((double)*(float *)(puVar7 + 0x21) - dVar25 < 0.0) {
    dVar22 = dVar21;
  }
  fVar4 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
  dVar21 = dVar25;
  if (dVar25 < dVar24) {
    lVar13 = uVar12 - 0x1c0;
    lVar17 = uVar12 - 0x88;
    lVar15 = uVar12 - 0x98;
    lVar19 = 2;
    fVar3 = (float)(dVar22 - dVar24) / (float)(dVar22 + dVar24);
    fVar2 = fVar3 * fVar3;
    *(float *)((int)puVar7 + 0x144) = fVar3;
    *(float *)((int)puVar7 + 0x13c) = fVar3;
    *(float *)(puVar7 + 0x28) = fVar3;
    *(float *)(puVar7 + 0x27) = fVar3;
    fVar3 = fVar2 * fVar2;
    *(float *)((int)puVar7 + 0x13c) = *(float *)((int)puVar7 + 0x13c) * fVar2;
    *(float *)(puVar7 + 0x28) = *(float *)(puVar7 + 0x28) * fVar3;
    *(float *)((int)puVar7 + 0x144) = *(float *)((int)puVar7 + 0x144) * fVar3 * fVar2;
    do {
      *(float *)((int)lVar13 + 0x138) = *(float *)((int)lVar13 + 0x128) * fVar3 * fVar3;
      iVar9 = (int)lVar15;
      lVar15 = lVar15 + 8;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar9 + 4) * fVar3 * fVar3;
      lVar17 = lVar17 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar19 = 4;
    lVar17 = uVar12 - 0x98;
    pfVar16 = (float *)&DAT_007358e0;
    lVar13 = lVar14;
    lVar15 = lVar17;
    do {
      fVar3 = *pfVar16;
      fVar2 = pfVar16[1];
      pfVar16 = pfVar16 + 2;
      *(float *)((int)lVar13 + 0x138) = *(float *)((int)lVar13 + 0x138) * fVar3;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar2;
      lVar15 = lVar15 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar15 = 2;
    lVar13 = lVar14;
    dVar24 = dVar25;
    do {
      iVar9 = (int)lVar13;
      iVar10 = (int)lVar17;
      lVar13 = lVar13 + 0x10;
      lVar17 = lVar17 + 0x10;
      dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar9 + 0x138)) + *(float *)(iVar10 + 4)
                        + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc));
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    dVar21 = (double)((float)(dVar24 + dVar26) * fVar1 + fVar4);
  }
  *(undefined4 *)(puVar7 + 0xe) = 0;
  *(undefined4 *)(puVar7 + 0xf) = 0;
  *(float *)((int)puVar7 + 0x74) = (float)-dVar21;
  fastfunc::FastEulerToMtx2(uVar12 - 0x150,uVar12 - 0x160);
  fastfunc::FastVecMtx4Mul(uVar12 - 0x110,uVar12 - 0x150,uVar12 - 0x110);
  dVar23 = ABS((double)*(float *)((int)puVar7 + 0xd4));
  dVar24 = ABS((double)*(float *)(puVar7 + 0x1b));
  *(float *)(puVar7 + 0x20) = (float)(dVar23 - dVar24);
  uVar18 = (ulonglong)(*(uint *)((int)puVar7 + 0xd4) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar7 + 0x20) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar7 + 0x1b) >> 0x1d) & 4;
  dVar22 = dVar23;
  if ((double)*(float *)(puVar7 + 0x20) - dVar25 < 0.0) {
    dVar22 = dVar24;
  }
  fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
  if ((double)*(float *)(puVar7 + 0x20) - dVar25 < 0.0) {
    dVar24 = dVar23;
  }
  fVar4 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
  if (dVar25 < dVar22) {
    lVar13 = uVar12 - 0x1c0;
    lVar15 = uVar12 - 0xb8;
    lVar17 = uVar12 - 0xa8;
    lVar19 = 2;
    fVar3 = (float)(dVar24 - dVar22) / (float)(dVar24 + dVar22);
    fVar2 = fVar3 * fVar3;
    *(float *)((int)puVar7 + 0x124) = fVar3;
    *(float *)((int)puVar7 + 0x11c) = fVar3;
    *(float *)(puVar7 + 0x24) = fVar3;
    *(float *)(puVar7 + 0x23) = fVar3;
    fVar3 = fVar2 * fVar2;
    *(float *)((int)puVar7 + 0x11c) = *(float *)((int)puVar7 + 0x11c) * fVar2;
    *(float *)(puVar7 + 0x24) = *(float *)(puVar7 + 0x24) * fVar3;
    *(float *)((int)puVar7 + 0x124) = *(float *)((int)puVar7 + 0x124) * fVar3 * fVar2;
    do {
      *(float *)((int)lVar13 + 0x118) = *(float *)((int)lVar13 + 0x108) * fVar3 * fVar3;
      iVar9 = (int)lVar15;
      lVar13 = lVar13 + 8;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar9 + 4) * fVar3 * fVar3;
      lVar17 = lVar17 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar19 = 4;
    lVar17 = uVar12 - 0xb8;
    pfVar16 = (float *)&DAT_007358e0;
    lVar13 = lVar14;
    lVar15 = lVar17;
    do {
      fVar3 = *pfVar16;
      fVar2 = pfVar16[1];
      pfVar16 = pfVar16 + 2;
      *(float *)((int)lVar13 + 0x118) = *(float *)((int)lVar13 + 0x118) * fVar3;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar2;
      lVar15 = lVar15 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar13 = 2;
    do {
      iVar9 = (int)lVar14;
      iVar10 = (int)lVar17;
      lVar14 = lVar14 + 0x10;
      lVar17 = lVar17 + 0x10;
      dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar9 + 0x118)) + *(float *)(iVar10 + 4)
                        + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc));
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    dVar25 = (double)((float)(dVar25 + dVar26) * fVar1 + fVar4);
  }
  (param_2->bSphere).x = (float)dVar25;
  (param_2->bSphere).y = (float)dVar21;
  (param_2->bSphere).z = (float)dVar20;
  return;
}



//==== 0010c808  ns=mobyutil  size=0x190
// sig: undefined MB_UpdateLightsTransition(void)
// callers(139): 0001c618 mobyupdate_helpers::M326_0001c618; 001817d0 mobyupdate_helpers::M1003_001817d0; 00181c08 mobyupdate_helpers::M1004_00181c08; 001856a0 mobyupdate_helpers::M101_001856a0; 001892a8 mobyupdate_helpers::M1022_001892a8; 0018a840 mobyupdate_helpers::M1023_0018a840; 0018e048 mobyupdate_helpers::M1027_0018e048; 00195e08 mobyupdate_unsorted::UpdateMoby_1041; 00198d88 mobyupdate_helpers::M1045_00198d88; 0019aea0 mobyupdate_unsorted::UpdateMoby_1045; 0019f9b0 mobyupdate_helpers::M1048_0019f9b0; 001a5360 mobyupdate_helpers::M1051_001a5360; 001a8ac0 mobyupdate_helpers::M1059_001a8ac0; 001afa30 mobyupdate_helpers::M1068_001afa30; 001c1e18 mobyupdate_helpers::M1106_001c1e18; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 001ce130 mobyupdate_helpers::M111_001ce130; 001d6b28 mobyupdate_unsorted::UpdateMoby_1126; 001e8fd0 mobyupdate_helpers::M1167_001e8fd0; 001e9a20 mobyupdate_helpers::M1168_001e9a20; 001ead68 mobyupdate_helpers::M1169_001ead68; 001ec8c8 mobyupdate_helpers::M1170_001ec8c8; 001ed1f0 mobyupdate_helpers::M1172_001ed1f0; 001f2d58 mobyupdate_helpers::M1196_001f2d58; 001f6fe0 mobyupdate_helpers::M1199_001f6fe0
// callees(3): 000f1ef0 mobyutil::MB_GetLights; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* [p2_mobyutil] timer-based color flash using short timer struct; calls MB_GetColor
   [p2_mobyutil] timer-based light blend; calls MB_GetLights */

void mobyutil::MB_UpdateLightsTransition(undefined8 param_1,undefined8 param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  undefined8 in_LR;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 local_40 [3];
  undefined1 uStack_3d;
  undefined1 local_3c [3];
  undefined1 uStack_39;
  undefined1 local_38 [3];
  undefined1 uStack_35;
  
  psVar2 = (short *)param_2;
  iVar3 = (int)*psVar2;
  if ((iVar3 == 0) || (psVar2[1] != 0)) {
    auVar6 = ZEXT416(0xfffffff0);
    auVar7 = ZEXT416(0xffffffff);
    auVar8 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    auVar7 = loadVectorLeftIndexed(0xc,param_2);
    auVar6 = vectorShiftRightAlgebraicWord
                       (auVar7,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60);
    auVar7 = vectorConvertFromSignedFixedPointWord(auVar6,0);
    auVar6 = loadVectorLeftIndexed(in_LR,0x10c800);
    auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar6 = vectorAddFloatingPoint
                       (auVar7,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60);
    auVar7 = vectorShiftLeftIntegerWord(auVar8,auVar8);
    auVar8 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar6 = vectorMultiplyAddFloatingPoint(auVar8,auVar6,auVar7);
    auVar6 = vectorConvertToSignedFixedPointWordSaturate(auVar6,0);
    auVar6 = vectorSplatHalfWord(auVar6,1);
    sVar1 = storeVectorElementHalfWordIndexed(auVar6,0,param_2);
    *psVar2 = sVar1;
    psVar2[1] = 0;
    if (iVar3 == 0) {
      MB_GetLights((double)((float)(longlong)(int)psVar2[6] + 0.5),param_1,local_40,local_3c,
                   local_38);
      *(undefined1 *)(psVar2 + 2) = uStack_3d;
      *(undefined1 *)((int)psVar2 + 5) = uStack_39;
      *(undefined1 *)(psVar2 + 3) = uStack_35;
    }
    else {
      dVar5 = (double)(longlong)
                      ((double)animationSpeed * (double)((float)(longlong)(int)psVar2[6] + 0.5));
      dVar4 = (double)fastfunc::FastIntToDouble
                                ((int)((double)animationSpeed *
                                      (double)((float)(longlong)(int)psVar2[7] + 0.5)));
      sVar1 = fastfunc::FastDoubleToInt
                        ((double)(float)(dVar5 * (double)(float)((double)(longlong)iVar3 / dVar4)));
      *psVar2 = sVar1;
      if (sVar1 < 1) {
        *psVar2 = 1;
      }
    }
  }
  return;
}



//==== 0010c9a0  ns=mobyutil  size=0x3f4
// sig: undefined MB_ColorDyingMoby(void)
// callers(138): 0001c618 mobyupdate_helpers::M326_0001c618; 001817d0 mobyupdate_helpers::M1003_001817d0; 00181c08 mobyupdate_helpers::M1004_00181c08; 001856a0 mobyupdate_helpers::M101_001856a0; 001892a8 mobyupdate_helpers::M1022_001892a8; 0018a840 mobyupdate_helpers::M1023_0018a840; 0018e048 mobyupdate_helpers::M1027_0018e048; 00195e08 mobyupdate_unsorted::UpdateMoby_1041; 00198d88 mobyupdate_helpers::M1045_00198d88; 0019f9b0 mobyupdate_helpers::M1048_0019f9b0; 001a5360 mobyupdate_helpers::M1051_001a5360; 001aa078 mobyupdate_unsorted::UpdateMoby_1059; 001afa30 mobyupdate_helpers::M1068_001afa30; 001c1e18 mobyupdate_helpers::M1106_001c1e18; 001ce130 mobyupdate_helpers::M111_001ce130; 001d6b28 mobyupdate_unsorted::UpdateMoby_1126; 001e8fd0 mobyupdate_helpers::M1167_001e8fd0; 001e9a20 mobyupdate_helpers::M1168_001e9a20; 001ead68 mobyupdate_helpers::M1169_001ead68; 001ec8c8 mobyupdate_helpers::M1170_001ec8c8; 001ed1f0 mobyupdate_helpers::M1172_001ed1f0; 001f2d58 mobyupdate_helpers::M1196_001f2d58; 001f6fe0 mobyupdate_helpers::M1199_001f6fe0; 001fbc78 mobyupdate_helpers::M1202_001fbc78; 00206970 mobyupdate_helpers::M1214_00206970
// callees(4): 000f1ec8 mobyfunc::SetColorOfMoby; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

void mobyutil::MB_ColorDyingMoby(MobyInstance *param_1,undefined8 param_2)

{
  byte bVar1;
  short sVar2;
  int iVar6;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  short *psVar7;
  undefined8 in_LR;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  psVar7 = (short *)param_2;
  if (*psVar7 != 0) {
    iVar6 = fastfunc::FastDecTimerS16(param_2);
    if (iVar6 != 0) {
      if (psVar7[1] != 0) {
        mobyfunc::SetColorOfMoby
                  (param_1,(ulonglong)*(byte *)(psVar7 + 2),(ulonglong)*(byte *)((int)psVar7 + 5),
                   (ulonglong)*(byte *)(psVar7 + 3));
        return;
      }
      auVar9 = ZEXT416(0xfffffff0);
      auVar10 = ZEXT416(0xffffffff);
      auVar11 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
      auVar10 = loadVectorLeftIndexed(0xe,param_2);
      psVar7[1] = 1;
      auVar9 = vectorShiftRightAlgebraicWord
                         (auVar10,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60);
      auVar11 = vectorShiftLeftIntegerWord(auVar11,auVar11);
      auVar10 = vectorConvertFromSignedFixedPointWord(auVar9,0);
      auVar9 = loadVectorLeftIndexed(in_LR,0x10c998);
      auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar9 = vectorAddFloatingPoint
                         (auVar10,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60);
      auVar9 = vectorMultiplyAddFloatingPoint(auVar12,auVar9,auVar11);
      auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
      auVar9 = vectorSplatHalfWord(auVar9,1);
      sVar2 = storeVectorElementHalfWordIndexed(auVar9,0,param_2);
      *psVar7 = sVar2;
    }
    if (psVar7[1] == 0) {
      dVar8 = (double)fastfunc::FastIntToDouble
                                ((int)(animationSpeed * ((float)(longlong)(int)psVar7[6] + 0.5)));
      dVar8 = (double)(float)((double)(float)(dVar8 - (double)(longlong)(int)*psVar7) / dVar8);
      if (*(byte *)((int)psVar7 + 7) == 0) {
        uVar3 = (ulonglong)*(byte *)(psVar7 + 2);
      }
      else {
        uVar3 = fastfunc::FastDoubleToInt
                          ((double)(float)((double)(longlong)
                                                   (int)((uint)*(byte *)((int)psVar7 + 7) -
                                                        (uint)*(byte *)(psVar7 + 2)) * dVar8 +
                                          (double)*(byte *)(psVar7 + 2)));
      }
      if (*(byte *)(psVar7 + 4) == 0) {
        uVar4 = (ulonglong)*(byte *)((int)psVar7 + 5);
      }
      else {
        uVar4 = fastfunc::FastDoubleToInt
                          ((double)(float)((double)(longlong)
                                                   (int)((uint)*(byte *)(psVar7 + 4) -
                                                        (uint)*(byte *)((int)psVar7 + 5)) * dVar8 +
                                          (double)*(byte *)((int)psVar7 + 5)));
      }
      if (*(byte *)((int)psVar7 + 9) == 0) {
        uVar5 = (ulonglong)*(byte *)(psVar7 + 3);
      }
      else {
        uVar5 = fastfunc::FastDoubleToInt
                          ((double)(float)((double)(longlong)
                                                   (int)((uint)*(byte *)((int)psVar7 + 9) -
                                                        (uint)*(byte *)(psVar7 + 3)) * dVar8 +
                                          (double)*(byte *)(psVar7 + 3)));
      }
    }
    else {
      dVar8 = (double)fastfunc::FastIntToDouble
                                ((int)(animationSpeed * ((float)(longlong)(int)psVar7[7] + 0.5)));
      bVar1 = *(byte *)((int)psVar7 + 7);
      dVar8 = (double)(float)((double)(float)(dVar8 - (double)(longlong)(int)*psVar7) / dVar8);
      if (bVar1 == 0) {
        uVar3 = (ulonglong)*(byte *)(psVar7 + 2);
      }
      else {
        uVar3 = fastfunc::FastDoubleToInt
                          ((double)(float)((double)(longlong)
                                                   (int)((uint)*(byte *)(psVar7 + 2) - (uint)bVar1)
                                           * dVar8 + (double)bVar1));
      }
      bVar1 = *(byte *)(psVar7 + 4);
      if (bVar1 == 0) {
        uVar4 = (ulonglong)*(byte *)((int)psVar7 + 5);
      }
      else {
        uVar4 = fastfunc::FastDoubleToInt
                          ((double)(float)((double)(longlong)
                                                   (int)((uint)*(byte *)((int)psVar7 + 5) -
                                                        (uint)bVar1) * dVar8 + (double)bVar1));
      }
      bVar1 = *(byte *)((int)psVar7 + 9);
      if (bVar1 == 0) {
        uVar5 = (ulonglong)*(byte *)(psVar7 + 3);
      }
      else {
        uVar5 = fastfunc::FastDoubleToInt
                          ((double)(float)((double)(longlong)
                                                   (int)((uint)*(byte *)(psVar7 + 3) - (uint)bVar1)
                                           * dVar8 + (double)bVar1));
      }
    }
    mobyfunc::SetColorOfMoby(param_1,uVar3,uVar4,uVar5);
  }
  return;
}



//==== 0010cd94  ns=mobyutil  size=0x7c
// sig: int MB_PathStepIndex(int * path, int idx, int delta, int wrap)
// callers(9): 000a9158 hero::Hero_GrindMotion; 000aaec0 hero::HandleHeroMovement; 003b33c8 mobyupdate_helpers::M556_003b33c8; 003b3e70 mobyupdate_helpers::M556_003b3e70; 003b3fd0 mobyupdate_helpers::M556_003b3fd0; 003b4740 mobyupdate_unsorted::UpdateMoby_556; 00431c90 mobyupdate_helpers::M717_00431c90; 00432718 mobyupdate_helpers::M717_00432718; 00433450 mobyupdate_unsorted::UpdateMoby_717
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [p2_mobyutil] idx+delta, wrapped modulo path->nPnts if wrap else clamped to [0,n-1] */

int mobyutil::MB_PathStepIndex(int *path,int idx,int delta,int wrap)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (wrap == 0) {
    iVar2 = idx + delta;
    uVar3 = iVar2 >> 0x1f & -iVar2;
    if (-1 < delta) {
      uVar3 = (uint)((longlong)(*path + -1) - (longlong)iVar2 >> 0x3f) & (*path + -1) - iVar2;
    }
    iVar2 = iVar2 + uVar3;
  }
  else {
    iVar1 = *path;
    iVar2 = idx + delta + iVar1;
    iVar2 = iVar2 - (iVar2 / iVar1) * iVar1;
  }
  return iVar2;
}



//==== 0010ce18  ns=mobyutil  size=0x324
// sig: undefined MB_PathMoveDist(void)
// callers(35): 0003bad8 camera::camera15::Cam15_0003bad8; 0003bef0 camera::camera15::Cam15_0003bef0; 0003ca68 camera::camera16::Cam16_ModifyFollowCam; 00040440 camera::camera19::UpdateCamera_19; 00041850 camera::camera20::UpdateCamera_20; 00045728 camera::camera3::UpdateCamera_3; 000aaec0 hero::HandleHeroMovement; 000b72b0 hero::TransitionMovement; 000be228 hero::HeroMovement; 0010d7a0 mobyutil::MB_PathFollowToPos; 0019aea0 mobyupdate_unsorted::UpdateMoby_1045; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 001def78 mobyupdate_unsorted::UpdateMoby_1142; 0026bf18 mobyupdate_helpers::M1401_0026bf18; 00271740 mobyupdate_helpers::M1417_00271740; 002edb38 mobyupdate_helpers::M211_002edb38; 002eefd8 mobyupdate_helpers::M211_002eefd8; 002ef340 mobyupdate_unsorted::UpdateMoby_211; 002ef9c8 mobyupdate_helpers::M1412_002ef9c8; 003271f0 mobyupdate_helpers::M28_003271f0; 0033cad0 mobyupdate_helpers::M31_0033cad0; 00363468 mobyupdate_unsorted::UpdateMoby_403; 003dd370 mobyupdate_unsorted::UpdateMoby_613; 003ff9c0 mobyupdate_unsorted::UpdateMoby_643; 0040fb18 mobyupdate_unsorted::UpdateMoby_679
// callees(0): 

/* [p2_mobyutil] advances (node,segT) along path by signed distance using per-segment length at
   node*16+0x1c; wrap flag param_7 */

undefined8
mobyutil::MB_PathMoveDist
          (double param_1,uint *param_2,float *param_3,uint *param_4,float *param_5,
          undefined8 param_6,int param_7)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float fVar11;
  longlong lVar12;
  int iVar13;
  undefined8 uVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  lVar12 = 1;
  dVar18 = 0.0;
  uVar17 = (ulonglong)*param_4;
  if (param_1 < 0.0) {
    lVar12 = -1;
    param_1 = -param_1;
  }
  uVar14 = 0;
  iVar13 = (int)lVar12;
  uVar16 = uVar17;
  while (iVar15 = (int)uVar17, param_1 != 0.0) {
    uVar5 = *param_2;
    if (((int)uVar16 == uVar5 - 1) && (param_7 == 0)) break;
    if (iVar13 == 1) {
      dVar19 = (double)*param_5;
      bVar1 = *(float *)((int)param_2 + (int)((uVar16 & 0xffffffff) << 4) + 0x1c) <
              (float)(dVar19 + param_1);
      uVar16 = uVar17;
    }
    else {
      dVar19 = (double)*param_5;
      bVar1 = false;
      if (dVar19 < param_1) {
        bVar1 = true;
      }
    }
    if (bVar1) {
      uVar17 = uVar16 + lVar12;
      if (((int)uVar5 <= (int)uVar17) || ((int)uVar17 < 0)) {
        uVar17 = (uVar17 + uVar5) -
                 (longlong)((int)(uVar17 + uVar5) / (int)uVar5) * (longlong)(int)uVar5;
      }
      if (iVar13 == 1) {
        fVar2 = *(float *)((int)param_2 + (int)((uVar16 & 0xffffffff) << 4) + 0x1c);
        *param_5 = 0.0;
        param_1 = (double)(float)(param_1 - (double)(float)((double)fVar2 - dVar19));
        if (param_1 < 0.0) {
          param_1 = dVar18;
        }
      }
      else {
        param_1 = (double)(float)(param_1 - dVar19);
        *param_5 = *(float *)((int)param_2 + (int)(uVar17 << 4) + 0x1c);
      }
      if (((iVar13 == 1) && (iVar15 == *param_2 - 1)) || ((iVar13 == -1 && (iVar15 == 0)))) {
        uVar14 = 1;
      }
      *param_4 = (uint)uVar17;
      uVar16 = uVar17;
    }
    else {
      dVar20 = dVar19 - param_1;
      if (iVar13 == 1) {
        dVar20 = dVar19 + param_1;
      }
      *param_5 = (float)dVar20;
      param_1 = dVar18;
    }
  }
  iVar10 = (int)((uVar16 & 0xffffffff) << 4);
  fVar2 = *(float *)((int)param_2 + iVar10 + 0x10);
  *param_3 = fVar2;
  fVar3 = *(float *)((int)param_2 + iVar10 + 0x14);
  param_3[1] = fVar3;
  fVar4 = *(float *)((int)param_2 + iVar10 + 0x18);
  param_3[2] = fVar4;
  param_3[3] = *(float *)((int)param_2 + iVar10 + 0x1c);
  uVar5 = *param_2;
  if ((iVar15 == uVar5 - 1) && (param_7 == 0)) {
    if (iVar13 == -1) {
      *param_4 = 0;
      *param_3 = (float)param_2[4];
      param_3[1] = (float)param_2[5];
      param_3[2] = (float)param_2[6];
      param_3[3] = (float)param_2[7];
      *param_5 = 0.0;
    }
    uVar14 = 1;
  }
  else {
    lVar12 = uVar17 + 1;
    if ((int)uVar5 <= (int)lVar12) {
      lVar12 = lVar12 - (longlong)((int)lVar12 / (int)uVar5) * (longlong)(int)uVar5;
    }
    iVar13 = (int)(lVar12 << 4);
    iVar15 = (int)((uVar17 & 0xffffffff) << 4);
    fVar6 = *(float *)((int)param_2 + iVar13 + 0x14) - *(float *)((int)param_2 + iVar15 + 0x14);
    fVar7 = *(float *)((int)param_2 + iVar13 + 0x10) - *(float *)((int)param_2 + iVar15 + 0x10);
    fVar8 = *(float *)((int)param_2 + iVar13 + 0x18) - *(float *)((int)param_2 + iVar15 + 0x18);
    fVar9 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
    fVar11 = *param_5 / fVar9;
    dVar19 = dVar18;
    if (0.0 - fVar9 < 0.0) {
      dVar19 = (double)(fVar11 * fVar8);
    }
    dVar20 = dVar18;
    if (0.0 - fVar9 < 0.0) {
      dVar20 = (double)(fVar11 * fVar6);
    }
    if (0.0 - fVar9 < 0.0) {
      dVar18 = (double)(fVar11 * fVar7);
    }
    if (fVar9 - 0.0 < 0.0) {
      dVar19 = (double)(fVar11 * fVar8);
    }
    if (fVar9 - 0.0 < 0.0) {
      dVar20 = (double)(fVar11 * fVar6);
    }
    if (fVar9 - 0.0 < 0.0) {
      dVar18 = (double)(fVar11 * fVar7);
    }
    param_3[2] = (float)((double)fVar4 + dVar19);
    param_3[1] = (float)((double)fVar3 + dVar20);
    *param_3 = (float)((double)fVar2 + dVar18);
  }
  return uVar14;
}



//==== 0010d140  ns=mobyutil  size=0x7c
// sig: undefined MB_DistIgnoreSmallZ(void)
// callers(0): 
// callees(0): 

double mobyutil::MB_DistIgnoreSmallZ
                 (double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  float fVar1;
  float fStack00000030;
  float fStack00000034;
  float fStack00000038;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  
  fStack00000034 = (float)param_2;
  fStack00000044 = (float)param_4;
  fStack00000030 = (float)((ulonglong)param_2 >> 0x20);
  fStack00000040 = (float)((ulonglong)param_4 >> 0x20);
  fStack00000038 = (float)((ulonglong)param_3 >> 0x20);
  fStack00000048 = (float)((ulonglong)param_5 >> 0x20);
  fVar1 = (fStack00000030 - fStack00000040) * (fStack00000030 - fStack00000040) +
          (fStack00000034 - fStack00000044) * (fStack00000034 - fStack00000044);
  if ((param_1 <= 0.0) || (param_1 <= ABS((double)(fStack00000038 - fStack00000048)))) {
    fVar1 = (fStack00000038 - fStack00000048) * (fStack00000038 - fStack00000048) + fVar1;
  }
  return (double)SQRT(fVar1);
}



//==== 0010d1c8  ns=mobyutil  size=0x234
// sig: undefined MB_SegmentPushDist2D(void)
// callers(1): 0010d408 mobyutil::MB_SegmentPush
// callees(0): 

double mobyutil::MB_SegmentPushDist2D(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  int iVar16;
  int iVar17;
  
  fVar1 = param_3[1];
  fVar2 = *param_3;
  fVar6 = fVar1 - param_4[1];
  fVar10 = fVar2 - *param_4;
  fVar3 = 0.0;
  fVar4 = *param_2;
  fVar5 = param_2[1];
  fVar11 = fVar10 * fVar10 + --(fVar6 * fVar6);
  fVar9 = fVar3;
  if (SQRT(fVar11) != 0.0) {
    fVar9 = 1.0 / SQRT(fVar11);
    fVar9 = -(fVar11 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar9 = -(fVar11 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar9 = -(fVar11 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar3 = fVar10 * fVar9;
    fVar9 = -(fVar6 * fVar9);
  }
  fVar6 = param_2[1];
  iVar16 = 0;
  param_1[2] = 0.0;
  fVar1 = fVar3 * fVar5 + fVar9 * fVar4 + -(fVar9 * fVar2 + fVar3 * fVar1);
  fVar4 = -(fVar9 * fVar1 - fVar4);
  fVar3 = -(fVar3 * fVar1 - fVar6);
  *param_1 = fVar4;
  param_1[1] = fVar3;
  fVar1 = *param_3;
  fVar2 = *param_4;
  pfVar14 = param_3;
  pfVar13 = param_4;
  pfVar15 = param_1;
  do {
    uVar7 = (int)*pfVar15 >> 0x1f;
    uVar8 = (int)*pfVar14 >> 0x1f;
    iVar12 = (uVar7 >> 1 ^ (uint)*pfVar15) - uVar7;
    iVar17 = (uVar8 >> 1 ^ (uint)*pfVar14) - uVar8;
    if (((iVar17 < iVar12) &&
        (uVar7 = (int)*pfVar13 >> 0x1f, (int)((uVar7 >> 1 ^ (uint)*pfVar13) - uVar7) < iVar12)) ||
       ((iVar12 < iVar17 &&
        (uVar7 = (int)*pfVar13 >> 0x1f, iVar12 < (int)((uVar7 >> 1 ^ (uint)*pfVar13) - uVar7)))))
    break;
    iVar16 = iVar16 + 1;
    pfVar15 = pfVar15 + 1;
    pfVar14 = pfVar14 + 1;
    pfVar13 = pfVar13 + 1;
  } while (iVar16 < 2);
  if (iVar16 < 2) {
    if (SQRT((fVar4 - fVar2) * (fVar4 - fVar2) + (fVar3 - param_4[1]) * (fVar3 - param_4[1])) <=
        SQRT((fVar4 - fVar1) * (fVar4 - fVar1) + (fVar3 - param_3[1]) * (fVar3 - param_3[1]))) {
      *param_1 = fVar2;
      fVar3 = param_4[1];
      param_1[1] = fVar3;
      param_1[2] = param_4[2];
      fVar5 = param_4[3];
      fVar4 = fVar2;
    }
    else {
      *param_1 = fVar1;
      fVar3 = param_3[1];
      param_1[1] = fVar3;
      param_1[2] = param_3[2];
      fVar5 = param_3[3];
      fVar4 = fVar1;
    }
    param_1[3] = fVar5;
    param_1[2] = 0.0;
  }
  return (double)SQRT((*param_2 - fVar4) * (*param_2 - fVar4) +
                      (param_2[1] - fVar3) * (param_2[1] - fVar3));
}



//==== 0010d408  ns=mobyutil  size=0x390
// sig: undefined MB_SegmentPush(void)
// callers(2): 00031590 camera0::UpdateSegmentPush_0; 0010d7a0 mobyutil::MB_PathFollowToPos
// callees(1): 0010d1c8 mobyutil::MB_SegmentPushDist2D

double mobyutil::MB_SegmentPush
                 (double param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  int iVar16;
  int iVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  dVar18 = 0.0;
  if (((0.0 < param_1) && (ABS((double)(param_3[2] - param_4[2])) < param_1)) &&
     (ABS((double)(param_3[2] - param_5[2])) < param_1)) {
    dVar18 = (double)MB_SegmentPushDist2D(param_2,param_3,param_4,param_5);
    fVar1 = param_4[1];
    fVar2 = param_5[1];
    fVar10 = fVar1 - fVar2;
    fVar3 = *param_4;
    fVar11 = fVar3 - *param_5;
    fVar4 = param_4[2];
    fVar5 = param_4[3];
    fVar6 = param_5[2];
    fVar7 = param_5[3];
    fVar10 = SQRT((fVar3 - *param_2) * (fVar3 - *param_2) +
                  (fVar1 - param_2[1]) * (fVar1 - param_2[1])) /
             SQRT(fVar11 * fVar11 + fVar10 * fVar10);
    *param_2 = (*param_5 - fVar3) * fVar10 + fVar3;
    param_2[1] = (fVar2 - fVar1) * fVar10 + fVar1;
    param_2[2] = (fVar6 - fVar4) * fVar10 + fVar4;
    param_2[3] = (fVar7 - fVar5) * fVar10 + fVar5;
    return dVar18;
  }
  fVar4 = param_5[1] - param_4[1];
  fVar5 = *param_5 - *param_4;
  fVar7 = param_5[2] - param_4[2];
  fVar1 = *param_4;
  fVar2 = param_4[1];
  fVar3 = param_4[2];
  fVar6 = fVar7 * fVar7 + fVar5 * fVar5 + fVar4 * fVar4;
  dVar19 = dVar18;
  dVar20 = dVar18;
  if (SQRT(fVar6) != 0.0) {
    fVar10 = 1.0 / SQRT(fVar6);
    fVar10 = -(fVar6 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar10 = -(fVar6 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar10 = -(fVar6 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    dVar20 = (double)(fVar5 * fVar10);
    dVar19 = (double)(fVar4 * fVar10);
    dVar18 = (double)(fVar7 * fVar10);
  }
  fVar4 = param_3[1];
  fVar5 = *param_3;
  fVar6 = param_3[2];
  iVar16 = 0;
  param_2[3] = param_5[3];
  dVar21 = (double)(-(float)(dVar19 * (double)fVar2 +
                            (double)(float)(dVar18 * (double)fVar3 +
                                           (double)(float)(dVar20 * (double)fVar1 +
                                                          -(double)(float)((double)fVar6 * dVar18 +
                                                                          (double)(float)((double)
                                                  fVar5 * dVar20 +
                                                  (double)(float)((double)fVar4 * dVar19)))))) /
                   (float)(dVar18 * dVar18 +
                          (double)(float)(dVar20 * dVar20 + (double)(float)(dVar19 * dVar19))));
  fVar2 = (float)(dVar19 * dVar21 + (double)fVar2);
  fVar1 = (float)(dVar20 * dVar21 + (double)fVar1);
  fVar3 = (float)(dVar18 * dVar21 + (double)fVar3);
  param_2[1] = fVar2;
  *param_2 = fVar1;
  param_2[2] = fVar3;
  pfVar14 = param_4;
  pfVar13 = param_5;
  pfVar15 = param_2;
  do {
    uVar8 = (int)*pfVar15 >> 0x1f;
    uVar9 = (int)*pfVar14 >> 0x1f;
    iVar12 = (uVar8 >> 1 ^ (uint)*pfVar15) - uVar8;
    iVar17 = (uVar9 >> 1 ^ (uint)*pfVar14) - uVar9;
    if (((iVar17 < iVar12) &&
        (uVar8 = (int)*pfVar13 >> 0x1f, (int)((uVar8 >> 1 ^ (uint)*pfVar13) - uVar8) < iVar12)) ||
       ((iVar12 < iVar17 &&
        (uVar8 = (int)*pfVar13 >> 0x1f, iVar12 < (int)((uVar8 >> 1 ^ (uint)*pfVar13) - uVar8)))))
    break;
    iVar16 = iVar16 + 1;
    pfVar15 = pfVar15 + 1;
    pfVar14 = pfVar14 + 1;
    pfVar13 = pfVar13 + 1;
  } while (iVar16 < 3);
  if (iVar16 < 3) {
    fVar4 = fVar1 - *param_4;
    fVar1 = fVar1 - *param_5;
    if (SQRT((fVar3 - param_5[2]) * (fVar3 - param_5[2]) +
             fVar1 * fVar1 + (fVar2 - param_5[1]) * (fVar2 - param_5[1])) <=
        SQRT((fVar3 - param_4[2]) * (fVar3 - param_4[2]) +
             fVar4 * fVar4 + (fVar2 - param_4[1]) * (fVar2 - param_4[1]))) {
      *param_2 = *param_5;
      param_2[1] = param_5[1];
      param_2[2] = param_5[2];
      param_2[3] = param_5[3];
    }
    else {
      *param_2 = *param_4;
      param_2[1] = param_4[1];
      param_2[2] = param_4[2];
      param_2[3] = param_4[3];
    }
  }
  return (double)SQRT((param_3[2] - param_2[2]) * (param_3[2] - param_2[2]) +
                      (*param_3 - *param_2) * (*param_3 - *param_2) +
                      (param_3[1] - param_2[1]) * (param_3[1] - param_2[1]));
}



//==== 0010d7a0  ns=mobyutil  size=0x4d0
// sig: undefined MB_PathFollowToPos(void)
// callers(30): 0003bad8 camera::camera15::Cam15_0003bad8; 0003bef0 camera::camera15::Cam15_0003bef0; 0003ca68 camera::camera16::Cam16_ModifyFollowCam; 000451f0 camera::camera3::Cam3_InitSplinePos; 00045728 camera::camera3::UpdateCamera_3; 00046418 camera::camera3::InitCamera_3; 00094b80 hero::Hero_FindGrindRail; 000aaec0 hero::HandleHeroMovement; 000be228 hero::HeroMovement; 0026df78 mobyupdate_unsorted::UpdateMoby_1403; 002edb38 mobyupdate_helpers::M211_002edb38; 002ef158 mobyupdate_helpers::M211_002ef158; 002ef9c8 mobyupdate_helpers::M1412_002ef9c8; 00301d00 mobyupdate_unsorted::UpdateMoby_233; 00344328 mobyupdate_unsorted::UpdateMoby_329; 00363aa0 FUN_00363aa0; 003a14a8 mobyupdate_unsorted::UpdateMoby_491; 003c0a18 mobyupdate_unsorted::UpdateMoby_573; 003c24e8 mobyupdate_helpers::M574_003c24e8; 003c3730 mobyupdate_unsorted::UpdateMoby_574; 003dd370 mobyupdate_unsorted::UpdateMoby_613; 003f0610 mobyupdate_unsorted::UpdateMoby_631; 0040fb18 mobyupdate_unsorted::UpdateMoby_679; 00422f08 mobyupdate_unsorted::UpdateMoby_694; 0044a708 mobyupdate_helpers::M750_0044a708
// callees(2): 0010ce18 mobyutil::MB_PathMoveDist; 0010d408 mobyutil::MB_SegmentPush

/* [p2_mobyutil] moves along path toward target using MB_PathMoveDist and 0x10d408 */

undefined8
mobyutil::MB_PathFollowToPos
          (double param_1,double param_2,double param_3,longlong param_4,float *param_5,
          float *param_6,int *param_7,float *param_8,undefined8 param_9,int param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint *puVar5;
  float fVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar11;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 local_b0 [16];
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  undefined1 local_88 [4];
  undefined1 local_84 [12];
  
  puVar5 = (uint *)param_4;
  fVar1 = (float)puVar5[4];
  dVar16 = 0.0;
  fVar2 = (float)puVar5[5];
  fVar3 = (float)puVar5[6];
  fVar6 = fVar2 - param_5[1];
  fVar4 = fVar1 - *param_5;
  fVar4 = fVar4 * fVar4 + fVar6 * fVar6;
  if ((param_3 <= 0.0) || (param_3 <= ABS((double)(fVar3 - param_5[2])))) {
    fVar6 = fVar3 - param_5[2];
    fVar4 = fVar6 * fVar6 + fVar4;
  }
  dVar15 = (double)SQRT(fVar4);
  if (*puVar5 == 0) {
    uVar8 = 0;
    param_6[3] = 0.0;
    param_6[2] = 0.0;
    param_6[1] = 0.0;
    *param_6 = 0.0;
  }
  else {
    do {
      iVar11 = MB_PathMoveDist(param_2,param_4,local_b0,local_90,local_8c);
      fVar4 = fVar2 - param_5[1];
      fVar6 = fVar1 - *param_5;
      fVar4 = fVar6 * fVar6 + fVar4 * fVar4;
      if ((param_3 <= dVar16) || (param_3 <= ABS((double)(fVar3 - param_5[2])))) {
        fVar6 = fVar3 - param_5[2];
        fVar4 = fVar6 * fVar6 + fVar4;
      }
      if ((double)SQRT(fVar4) < dVar15) {
        dVar15 = (double)SQRT(fVar4);
      }
      uVar9 = 0;
    } while (iVar11 == 0);
    if (dVar15 <= (double)(float)(param_1 + param_2)) {
      MB_PathMoveDist(-param_2,param_4,local_b0,local_88,local_8c);
      MB_PathMoveDist(param_2,param_4,local_b0,local_84,local_8c);
      if (param_10 == 0) {
        uVar12 = *puVar5;
        iVar11 = ((uint)((longlong)(int)(uVar12 - 1) + -1 >> 0x3f) & uVar12 - 2) + 1;
      }
      else {
        uVar12 = *puVar5;
        iVar11 = (uVar12 + 1) - ((int)(uVar12 + 1) / (int)uVar12) * uVar12;
      }
      dVar14 = 1000000000.0;
      uVar13 = uVar9;
      dVar15 = dVar14;
      while( true ) {
        iVar7 = (int)((uVar9 & 0xffffffff) << 4);
        fVar2 = *(float *)((int)puVar5 + iVar7 + 0x14) - param_5[1];
        fVar3 = *(float *)((int)puVar5 + iVar7 + 0x10) - *param_5;
        fVar1 = *(float *)((int)puVar5 + iVar7 + 0x18);
        fVar2 = fVar3 * fVar3 + fVar2 * fVar2;
        if ((param_3 <= dVar16) || (param_3 <= ABS((double)(fVar1 - param_5[2])))) {
          fVar1 = fVar1 - param_5[2];
          fVar2 = fVar1 * fVar1 + fVar2;
        }
        if ((double)SQRT(fVar2) < dVar15) {
          uVar13 = uVar9;
          dVar15 = (double)SQRT(fVar2);
        }
        if ((int)uVar9 == iVar11) break;
        uVar9 = (uVar9 + 1) - (longlong)((int)(uVar9 + 1) / (int)uVar12) * (longlong)(int)uVar12;
      }
      iVar11 = (int)uVar13;
      if ((0 < iVar11) || (param_10 != 0)) {
        lVar10 = uVar13 + uVar12 + -1;
        uVar9 = lVar10 - (longlong)((int)lVar10 / (int)uVar12) * (longlong)(int)uVar12;
        dVar14 = (double)MB_SegmentPush(param_3,param_6,param_5,
                                        param_4 + uVar9 * 0x10 + 0x10 & 0xffffffff,
                                        param_4 + uVar13 * 0x10 + 0x10 & 0xffffffff);
        iVar7 = (int)((uVar9 & 0xffffffff) << 4);
        *param_7 = (int)uVar9;
        fVar1 = *(float *)((int)puVar5 + iVar7 + 0x14) - param_6[1];
        fVar2 = *(float *)((int)puVar5 + iVar7 + 0x10) - *param_6;
        fVar3 = *(float *)((int)puVar5 + iVar7 + 0x18) - param_6[2];
        *param_8 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
        uVar12 = *puVar5;
      }
      if (((iVar11 < (int)(uVar12 - 1)) || (param_10 != 0)) &&
         (dVar16 = (double)MB_SegmentPush(param_3,&local_a0,param_5,
                                          param_4 + uVar13 * 0x10 + 0x10 & 0xffffffff,
                                          param_4 + ((uVar13 + 1) -
                                                    (longlong)((int)(uVar13 + 1) / (int)uVar12) *
                                                    (longlong)(int)uVar12) * 0x10 + 0x10 &
                                          0xffffffff), dVar16 < dVar14)) {
        iVar7 = (int)((uVar13 & 0xffffffff) << 4);
        *param_6 = local_a0;
        param_6[1] = local_9c;
        param_6[2] = local_98;
        param_6[3] = local_94;
        *param_7 = iVar11;
        fVar2 = *(float *)((int)puVar5 + iVar7 + 0x10) - *param_6;
        fVar1 = *(float *)((int)puVar5 + iVar7 + 0x14) - param_6[1];
        fVar3 = *(float *)((int)puVar5 + iVar7 + 0x18) - param_6[2];
        *param_8 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      }
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
  }
  return uVar8;
}



//==== 0010dc70  ns=mobyutil  size=0x1f8
// sig: undefined MB_CheckCollPill(MobyInstance * param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4)
// callers(2): 0032f988 mobyupdate_unsorted::UpdateMoby_291; 00344328 mobyupdate_unsorted::UpdateMoby_329
// callees(4): 00059e20 collproc::CollSphere; 0005c710 collproc::CollPill; 000f00a0 mobyfunc::MB_GetCollPrimWorld; 005cd098 libc::printf
// strings: 00652f60: 'MB_CheckCollPill: No collision data for this moby... aborting\n' | 00652fa0: 'MB_CheckCollPill - Strange collision type %d\n'

undefined8
mobyutil::MB_CheckCollPill
          (MobyInstance *param_1,undefined8 param_2,undefined8 param_3,float *param_4)

{
  undefined8 uVar1;
  float local_50;
  float local_4c;
  float local_48;
  undefined1 local_40 [16];
  float local_30;
  float local_2c;
  int local_28 [2];
  
  if (param_1->collision == (ushort *)0x0) {
    libc::printf("MB_CheckCollPill: No collision data for this moby... aborting\n");
  }
  mobyfunc::MB_GetCollPrimWorld(param_1,param_3,local_28,&local_50,&local_30,&local_2c);
  if (param_4 != (float *)0x0) {
    local_50 = *param_4 + (local_50 - (param_1->pos).x);
    local_4c = param_4[1] + (local_4c - (param_1->pos).y);
    local_48 = param_4[2] + (local_48 - (param_1->pos).z);
  }
  if (local_28[0] < 3) {
    if (local_28[0] < 0) {
LAB_0010ddb8:
      libc::printf("MB_CheckCollPill - Strange collision type %d\n",local_28[0]);
      return 0;
    }
    uVar1 = collproc::CollSphere((double)local_30,local_40);
  }
  else {
    if (4 < local_28[0]) goto LAB_0010ddb8;
    uVar1 = collproc::CollPill((double)local_30,(double)local_2c,local_40);
  }
  if ((int)uVar1 != 0) {
    CollOutput.push.x = CollOutput.push.x + ((param_1->pos).x - local_50);
    CollOutput.push.y = CollOutput.push.y + ((param_1->pos).y - local_4c);
    CollOutput.push.z = CollOutput.push.z + ((param_1->pos).z - local_48);
  }
  return uVar1;
}



//==== 0010de78  ns=mobyutil  size=0x58
// sig: float MB_WrapRot(float ang)
// callers(49): 00181f00 mobyupdate_helpers::M1004_00181f00; 00182998 mobyupdate_unsorted::UpdateMoby_1004; 00196fc8 mobyupdate_helpers::M1045_00196fc8; 00197c88 mobyupdate_helpers::M1045_00197c88; 00198408 mobyupdate_helpers::M1045_00198408; 001b2480 mobyupdate_unsorted::UpdateMoby_1069; 001c00b8 mobyupdate_helpers::M1106_001c00b8; 001c0d58 mobyupdate_helpers::M1106_001c0d58; 001c14d0 mobyupdate_helpers::M1106_001c14d0; 001ce3f0 mobyupdate_helpers::M1109_001ce3f0; 001d6b28 mobyupdate_unsorted::UpdateMoby_1126; 001e5158 mobyupd::update1160::M1160_ScanTargets; 001e6130 mobyupd::update1160::M1160_Hud_Draw; 00202b98 mobyupdate_unsorted::UpdateMoby_121; 00206cd8 mobyupdate_unsorted::UpdateMoby_1214; 002082e8 mobyupdate_helpers::M1215_002082e8; 002088c0 mobyupdate_helpers::M1215_002088c0; 00209508 mobyupdate_unsorted::UpdateMoby_1215; 0021e750 mobyupd::update1242::M1242_Hud_Draw; 00238e58 mobyupdate_helpers::M1284_00238e58; 0023be70 mobyupdate_unsorted::UpdateMoby_1284; 0024c380 mobyupdate_helpers::M1331_0024c380; 0025fbd0 mobyupd::update1379::M1379_ScanTargets; 002611a0 mobyupd::update1379::M1379_Hud_Draw; 00265e20 mobyupdate_unsorted::UpdateMoby_1380
// callees(1): 005026dc fastfunc::FastFrac

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float mobyutil::MB_WrapRot(float ang)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_20 [16];
  
  dVar2 = 3.1415927410125732;
  dVar1 = (double)fastfunc::FastFrac((double)((ang + 3.1415927) * 0.15915494),0x110000,auStack_20);
  return (float)(dVar1 * 6.2831854820251465 - dVar2);
}



//==== 0010ded0  ns=mobyutil  size=0x68
// sig: undefined ???_MB_IsInvalidOrClass502(void)
// callers(1): 0042c150 mobyupdate_unsorted::UpdateMoby_71
// callees(0): 

ulonglong mobyutil::____MB_IsInvalidOrClass502(MobyInstance *param_1)

{
  MOBY_OCLASSES MVar1;
  ulonglong uVar2;
  
  if (param_1 == (MobyInstance *)0x0) {
    uVar2 = 0;
  }
  else if ((((param_1 == (MobyInstance *)0x0) || (param_1 < MobyInstance)) ||
           (MobyInstanceEnd < param_1)) ||
          (MVar1 = param_1->oClass, 0x21c < (short)MVar1 || (short)MVar1 < 500)) {
    uVar2 = 1;
  }
  else {
    uVar2 = (ulonglong)(LZCOUNT(MVar1 - 0x1f6) << 0x20) >> 0x25;
  }
  return uVar2;
}



//==== 0010df38  ns=mobyutil  size=0x54
// sig: bool MB_isAmmo(MobyInstance * moby)
// callers(2): 0042bc38 mobyupdate_helpers::M71_ClosestMobyDistance; 00486608 mobyupdate_helpers::M849_00486608
// callees(0): 

bool mobyutil::MB_isAmmo(MobyInstance *moby)

{
  bool bVar1;
  MOBY_OCLASSES oClass;
  
  oClass = moby->oClass;
  bVar1 = false;
  if ((((oClass == DEVESTATOR_AMMO || oClass == BOMB_GLOVE_AMMO) || (oClass == VISIBOMB_AMMO)) ||
      (oClass == BLASTER_AMMO)) ||
     (((oClass == PYROCITOR_AMMO || (oClass == MINE_GLOVE_AMMO)) ||
      ((oClass == TESLA_CLAW_AMMO || (oClass == GLOVE_OF_DOOM_AMMO)))))) {
    bVar1 = true;
  }
  return bVar1;
}



//==== 0010e030  ns=mobyutil  size=0x1abc
// sig: undefined MB_genericExplosion(void)
// callers(174): 000156a8 mobyupdate_unsorted::UpdateMoby_1267; 0001cb80 mobyupdate_unsorted::UpdateMoby_326; 0001e700 mobyupdate_helpers::M336_0001e700; 0001f7a8 mobyupdate_unsorted::UpdateMoby_409; 00020a80 mobyupdate_unsorted::UpdateMoby_458; 000eb6c0 mobyattack::UpdateMoby_1475_KaleboRace_Rocket; 00181a90 mobyupdate_unsorted::UpdateMoby_1003; 00182998 mobyupdate_unsorted::UpdateMoby_1004; 00185e70 mobyupdate_unsorted::UpdateMoby_101; 00189bd8 mobyupdate_unsorted::UpdateMoby_1022; 0018e9f8 mobyupdate_unsorted::UpdateMoby_1027; 00192590 mobyupdate_unsorted::UpdateMoby_1034; 00195e08 mobyupdate_unsorted::UpdateMoby_1041; 0019aea0 mobyupdate_unsorted::UpdateMoby_1045; 0019ebd8 mobyupdate_unsorted::UpdateMoby_1047; 001a2090 mobyupdate_unsorted::UpdateMoby_1049; 001aa078 mobyupdate_unsorted::UpdateMoby_1059; 001b07a8 mobyupdate_unsorted::UpdateMoby_1068; 001b33e0 mobyupdate_unsorted::UpdateMoby_107; 001b7b60 mobyupdate_unsorted::UpdateMoby_108; 001bb9c0 mobyupdate_unsorted::UpdateMoby_109; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 001cf4f0 mobyupdate_unsorted::UpdateMoby_111; 001d05f0 mobyupdate_unsorted::UpdateMoby_1110; 001d2258 mobyupdate_unsorted::UpdateMoby_1112
// callees(13): 0005e598 collproc::CollMobySphere; 000fe610 mobyutil::MB_SphericalToVector; 001229a8 partupd::SpawnPart_8; 00123390 partupd::SpawnPart_11; 00124e10 partupd::SpawnPart_15; 0015d12c sound::PlayMobySound; 001d4d88 FUN_001d4d88; 0020bb70 FUN_0020bb70; 003fda38 FUN_003fda38; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 00502910 fastfunc::FastCheckBsphereInView; 005c8318 rand

/* WARNING: Heritage AFTER dead removal. Example location: r0x0071f414 : 0x0010e50c */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void mobyutil::MB_genericExplosion
               (double param_1,undefined8 param_2,double param_3,double param_4,double param_5,
               double param_6,double param_7,longlong param_8,undefined8 param_9,longlong param_10,
               undefined8 param_11,undefined8 param_12,int param_13,longlong param_14,
               undefined8 param_15)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar12;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  MobyInstance *pMoby;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined8 uVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  uint in_stack_00000094;
  uint in_stack_000000a4;
  int in_stack_000000ac;
  uint in_stack_000000b4;
  uint in_stack_000000bc;
  undefined1 local_280 [16];
  float afStack_270 [4];
  undefined1 local_260 [16];
  float afStack_250 [4];
  undefined1 local_240 [16];
  undefined1 local_230 [16];
  undefined1 local_220 [16];
  undefined1 local_210 [48];
  uint local_1e0 [24];
  double local_180;
  ulonglong local_178;
  ulonglong local_170;
  undefined8 local_168;
  longlong local_160;
  ulonglong local_158;
  ulonglong local_150;
  ulonglong local_148;
  ulonglong local_140;
  ulonglong local_138;
  longlong local_130;
  
  dVar35 = 0.0;
  dVar34 = 8.0;
  uVar23 = (ulonglong)in_stack_000000b4;
  local_148 = (ulonglong)in_stack_00000094;
  uVar12 = (ulonglong)in_stack_000000bc & 0xff;
  local_140 = (ulonglong)in_stack_000000a4;
  if (in_stack_000000b4 == 0xffffffff) {
    uVar23 = (ulonglong)(1.7 < DAT_00a10718 + DAT_00a10714);
  }
  if ((int)param_10 == 0) {
    if ((int)param_8 == 0) {
      return;
    }
    param_10 = param_8 + 0x10;
  }
  local_180 = param_5;
  local_168 = param_15;
  local_160 = param_8;
  if (0.0 < param_1) {
    collproc::CollMobySphere(param_10,*(undefined2 *)((int)param_8 + 0xa6),0x10,param_8,local_210);
  }
  local_178 = uVar12;
  local_170 = (ulonglong)in_stack_000000bc;
  if (0 < param_13) {
    local_138 = ZEXT48(&DAT_00720000);
    uVar15 = in_stack_000000bc & 1;
    dVar36 = 0.2617993950843811;
    dVar32 = 7.0;
    dVar30 = 120.5;
    dVar29 = 3.462109452812001e-05;
    dVar28 = 0.0015339808305725455;
    uVar7 = in_stack_000000bc & 2;
    dVar27 = 0.0001068115234375;
    uVar10 = ((LZCOUNT(-uVar15) << 0x3a) >> 0x3f & 0xffffffffffffff80U) + 0xff;
    in_stack_000000bc = in_stack_000000bc & 4;
    lVar22 = uVar10 + ((LZCOUNT(-uVar7) << 0x3a) >> 0x3f & -uVar10);
    uVar21 = (LZCOUNT(-uVar15) << 0x3a) >> 0x3f & 0x7f;
    lVar19 = ((LZCOUNT(-uVar15) << 0x3a) >> 0x3f & 0x80U) + 0x7f;
    dVar31 = (double)(float)(param_6 * 40000.0);
    uVar17 = ((LZCOUNT(-uVar15) << 0x3a) >> 0x3f & 0xffffffffffffff81U) + 0x7f;
    lVar11 = uVar17 + ((LZCOUNT(-uVar7) << 0x3a) >> 0x3f & -uVar17);
    uVar20 = (lVar19 + ((LZCOUNT(-in_stack_000000bc) << 0x3a) >> 0x3f & lVar22 - lVar19) & 0xffU) <<
             0x10 | ((LZCOUNT(-uVar7) << 0x3a) >> 0x3f & uVar10 & 0xff) << 8 |
                    lVar22 + ((LZCOUNT(-in_stack_000000bc) << 0x3a) >> 0x3f & lVar19 - lVar22) &
                    0xffffffffff0000ffU | 0x4f000000;
    uVar10 = (uVar21 + ((LZCOUNT(-in_stack_000000bc) << 0x3a) >> 0x3f & lVar11 - uVar21) & 0x7f) <<
             0x10 | ((LZCOUNT(-uVar7) << 0x3a) >> 0x3f & uVar17 & 0x7f) << 8 |
                    lVar11 + ((LZCOUNT(-in_stack_000000bc) << 0x3a) >> 0x3f & uVar21 - lVar11) &
                    0xffffffffff8080ff | 0x1f000000;
    iVar14 = 0;
    do {
      iVar13 = rand();
      local_130 = (longlong)(int)(iVar13 >> 0xf & 0x7fff);
      dVar25 = (double)(float)((double)local_130 * dVar29 + dVar36);
      iVar13 = rand();
      local_130 = (longlong)(int)((iVar13 >> 0xf & 0xfffU) - 0x800);
      dVar24 = (double)(float)((double)local_130 * dVar28);
      iVar13 = rand();
      local_130 = (longlong)(int)(iVar13 >> 0xf & 0x7fff);
      MB_SphericalToVector
                ((float)((double)((float)((double)local_130 * dVar27 + dVar32) * g_FrameTime) *
                        param_6),(float)dVar24,(float)dVar25,afStack_270);
      local_130 = (longlong)(int)((double)animationSpeed * dVar30);
      rand();
      partupd::SpawnPart_15
                (dVar31,param_10,afStack_270,
                 uVar20 + ((LZCOUNT(-(int)uVar12) << 0x3a) >> 0x3f & 0x4f007fff - uVar20),
                 uVar10 + ((LZCOUNT(-(int)uVar12) << 0x3a) >> 0x3f & 0x1f00007f - uVar10));
      iVar14 = iVar14 + 1;
    } while (iVar14 < param_13);
  }
  pfVar4 = (float *)param_10;
  local_158 = ZEXT48(&GameCamera);
  dVar27 = (double)SQRT((GameCamera.posZ - pfVar4[2]) * (GameCamera.posZ - pfVar4[2]) +
                        (GameCamera.posX - *pfVar4) * (GameCamera.posX - *pfVar4) +
                        (GameCamera.posY - pfVar4[1]) * (GameCamera.posY - pfVar4[1]));
  if (in_stack_000000ac != 0) {
    iVar14 = rand();
    local_130 = (longlong)(int)(iVar14 >> 0xf & 0x7fff);
    iVar14 = rand();
    local_130 = (longlong)(int)(iVar14 >> 0xf & 0x7fff);
    iVar14 = rand();
    local_130 = (longlong)(int)(iVar14 >> 0xf & 0x7fff);
    if (dVar27 < 14.0) {
      fVar5 = animationSpeed * 60.5;
      fVar6 = animationSpeed * 90.5;
      local_130 = (longlong)(int)fVar6;
      iVar14 = rand();
      iVar13 = (int)fVar6 - (int)fVar5;
      uVar15 = iVar14 >> 0xf & 0x7fff;
      iVar14 = (int)uVar15 / (iVar13 + 1);
      FUN_0020bb70(param_10,local_260,(uVar15 - (iVar14 * iVar13 + iVar14)) + (int)fVar5,0,0);
    }
    in_stack_000000ac = in_stack_000000ac + -1;
    iVar14 = 0;
    uVar15 = (uint)(10 - (longlong)numSpawnableMobys >> 0x3f) &
             in_stack_000000ac +
             ((uint)((longlong)(numSpawnableMobys + -10) - (longlong)in_stack_000000ac >> 0x3f) &
             (numSpawnableMobys + -10) - in_stack_000000ac);
    if (0 < (int)uVar15) {
      dVar24 = 0.2617993950843811;
      dVar36 = 7.0;
      dVar32 = 60.5;
      dVar31 = 90.5;
      dVar30 = 3.1957933970261365e-05;
      dVar29 = 0.0015339808305725455;
      dVar28 = 0.0001068115234375;
      do {
        iVar13 = rand();
        local_130 = (longlong)(int)(iVar13 >> 0xf & 0x7fff);
        dVar26 = (double)(float)((double)local_130 * dVar30 + dVar24);
        iVar13 = rand();
        local_130 = (longlong)(int)((iVar13 >> 0xf & 0xfffU) - 0x800);
        dVar25 = (double)(float)((double)local_130 * dVar29);
        iVar13 = rand();
        local_130 = (longlong)(int)(iVar13 >> 0xf & 0x7fff);
        MB_SphericalToVector
                  ((float)((double)((float)((double)local_130 * dVar28 + dVar36) * g_FrameTime) *
                          param_6),(float)dVar25,(float)dVar26,afStack_250);
        iVar16 = (int)((double)animationSpeed * dVar32);
        iVar18 = (int)((double)animationSpeed * dVar31);
        local_130 = (longlong)iVar18;
        iVar13 = rand();
        iVar18 = iVar18 - iVar16;
        uVar7 = iVar13 >> 0xf & 0x7fff;
        iVar13 = (int)uVar7 / (iVar18 + 1);
        FUN_0020bb70(param_10,afStack_250,(uVar7 - (iVar13 * iVar18 + iVar13)) + iVar16,
                     (LZCOUNT(-(iVar14 % 3)) << 0x3a) >> 0x3f & 1,0);
        iVar14 = iVar14 + 1;
      } while (iVar14 < (int)uVar15);
    }
  }
  dVar28 = (double)fastfunc::FastIntToDouble(param_14);
  if (dVar27 < (double)(float)(dVar28 * 2.0)) {
    uVar15 = fastfunc::FastDoubleToInt(dVar27);
    param_14 = (longlong)((int)uVar15 >> 1) + (ulonglong)((int)uVar15 < 0 && (uVar15 & 1) != 0);
  }
  iVar14 = 0;
  dVar28 = dVar35;
  if (dVar27 - 7.0 < 0.0) {
    dVar28 = (double)(float)(7.0 - dVar27);
  }
  local_150 = uVar23;
  if (0 < (int)param_14) {
    uVar8 = (uint)local_170;
    uVar7 = uVar8 & 1;
    uVar15 = uVar8 & 2;
    uVar8 = uVar8 & 4;
    dVar24 = (double)(float)(param_6 * 400000.0);
    dVar36 = 20.5;
    dVar32 = 45.5;
    dVar31 = 10.5;
    dVar29 = (double)(float)(param_6 * 0.5);
    dVar30 = 6.103515625e-05;
    do {
      iVar13 = rand();
      local_130 = (longlong)(int)(iVar13 >> 0xf & 0x7fff);
      local_1e0[0] = 0x4f008fff;
      local_1e0[1] = 0x4f008fff;
      local_1e0[2] = 0x4f007fff;
      local_1e0[3] = 0x4f006fff;
      local_1e0[4] = 0x2fffffff;
      local_1e0[5] = 0x2fffffff;
      local_1e0[6] = 0x2f005f7f;
      local_1e0[7] = 0x2f004f7f;
      local_1e0[8] = 0x2f003f7f;
      local_1e0[9] = 0x2f00004f;
      local_1e0[10] = 0x2f000000;
      local_1e0[0xb] = 0x3f000000;
      dVar25 = (double)(float)((double)(float)((double)local_130 * dVar30 + dVar34) *
                               (double)g_FrameTime - (double)(float)((double)g_FrameTime * dVar28));
      iVar13 = rand();
      uVar12 = (ulonglong)(uint)(iVar13 >> 0xf) & 0x7fff;
      uVar1 = local_1e0[(int)(uVar12 + (((uVar12 + 1) * 0x5555 << 0x20) >> 0x31) * -6)];
      uVar12 = (ulonglong)uVar1;
      uVar2 = uVar1 & 0xff;
      uVar23 = (ulonglong)(uVar1 >> 8) & 0xff;
      uVar10 = (ulonglong)(uVar1 >> 0x10) & 0xff;
      iVar18 = (int)uVar23;
      iVar16 = uVar2 + ((uint)((LZCOUNT(-uVar7) << 0x3a) >> 0x3f) & iVar18 - uVar2);
      iVar16 = iVar16 + ((uint)((LZCOUNT(-uVar15) << 0x3a) >> 0x3f) & (int)uVar10 - iVar16);
      lVar19 = uVar12 + ((LZCOUNT(-uVar7) << 0x3a) >> 0x3f & uVar23 - uVar12);
      lVar11 = uVar23 + ((LZCOUNT(-uVar7) << 0x3a) >> 0x3f & uVar12 - uVar23);
      iVar13 = (int)local_178;
      lVar19 = (longlong)
               (int)((uint)((lVar11 + ((LZCOUNT(-uVar8) << 0x3a) >> 0x3f &
                                      (lVar19 + ((LZCOUNT(-uVar15) << 0x3a) >> 0x3f &
                                                uVar10 - lVar19)) - lVar11) & 0xffffffff) << 0x10) &
                     0xff0000 |
                    (uint)((uVar10 + ((LZCOUNT(-uVar15) << 0x3a) >> 0x3f & lVar19 - uVar10) &
                           0xffffffff) << 8) & 0xff00 |
                    iVar16 + ((uint)((LZCOUNT(-uVar8) << 0x3a) >> 0x3f) &
                             (iVar18 + ((uint)((LZCOUNT(-uVar7) << 0x3a) >> 0x3f) & uVar2 - iVar18))
                             - iVar16) & 0xff0000ff | uVar1 & 0xff000000);
      iVar16 = rand();
      uVar12 = (ulonglong)(uint)(iVar16 >> 0xf) & 0x7fff;
      uVar2 = local_1e0[(int)(uVar12 + (((uVar12 + 1) * 0x5555 << 0x20) >> 0x31) * -6) + 6];
      uVar12 = (ulonglong)uVar2;
      uVar9 = uVar2 & 0xff;
      uVar23 = (ulonglong)(uVar2 >> 8) & 0xff;
      iVar18 = (int)uVar23;
      iVar16 = uVar9 + ((uint)((LZCOUNT(-uVar7) << 0x3a) >> 0x3f) & iVar18 - uVar9);
      uVar10 = (ulonglong)(uVar2 >> 0x10) & 0xff;
      iVar16 = iVar16 + ((uint)((LZCOUNT(-uVar15) << 0x3a) >> 0x3f) & (int)uVar10 - iVar16);
      local_130 = (longlong)(int)((double)animationSpeed * dVar36);
      lVar22 = uVar12 + ((LZCOUNT(-uVar7) << 0x3a) >> 0x3f & uVar23 - uVar12);
      lVar11 = uVar23 + ((LZCOUNT(-uVar7) << 0x3a) >> 0x3f & uVar12 - uVar23);
      lVar11 = (longlong)
               (int)((uint)((lVar11 + ((LZCOUNT(-uVar8) << 0x3a) >> 0x3f &
                                      (lVar22 + ((LZCOUNT(-uVar15) << 0x3a) >> 0x3f &
                                                uVar10 - lVar22)) - lVar11) & 0xffffffff) << 0x10) &
                     0xff0000 |
                    (uint)((uVar10 + ((LZCOUNT(-uVar15) << 0x3a) >> 0x3f & lVar22 - uVar10) &
                           0xffffffff) << 8) & 0xff00 |
                    iVar16 + ((uint)((LZCOUNT(-uVar8) << 0x3a) >> 0x3f) &
                             (iVar18 + ((uint)((LZCOUNT(-uVar7) << 0x3a) >> 0x3f) & uVar9 - iVar18))
                             - iVar16) & 0xff0000ff | uVar2 & 0xff000000);
      rand();
      local_130 = (longlong)(int)((double)animationSpeed * dVar32);
      rand();
      partupd::SpawnPart_11
                (dVar24,(double)(float)(dVar25 * param_6),param_10,local_280,
                 lVar19 + ((LZCOUNT(-iVar13) << 0x3a) >> 0x3f & (int)uVar1 - lVar19),
                 lVar11 + ((LZCOUNT(-iVar13) << 0x3a) >> 0x3f & (int)uVar2 - lVar11));
      local_130 = (longlong)(int)((double)animationSpeed * dVar31);
      rand();
      local_130 = (longlong)(int)((double)animationSpeed * dVar36);
      rand();
      partupd::SpawnPart_11
                (dVar24,(double)(float)(dVar25 * dVar29),param_10,local_280,0x7fffffff,0xffffff);
      iVar14 = iVar14 + 1;
    } while (iVar14 < (int)param_14);
  }
  uVar12 = local_178;
  iVar13 = 0;
  iVar14 = (int)local_168;
  if (0 < iVar14) {
    uVar8 = (uint)local_170;
    uVar15 = uVar8 & 1;
    uVar7 = uVar8 & 2;
    uVar8 = uVar8 & 4;
    uVar33 = 0x41086a0000000000;
    dVar34 = 45.5;
    do {
      local_1e0[0xc] = 0x4f008fff;
      local_1e0[0xd] = 0x4f008fff;
      local_1e0[0x10] = 0x2fffffff;
      local_1e0[0x11] = 0x2fffffff;
      local_1e0[0xe] = 0x4f007fff;
      local_1e0[0xf] = 0x4f006fff;
      local_1e0[0x12] = 0x2f005f7f;
      local_1e0[0x13] = 0x2f004f7f;
      local_1e0[0x16] = 0x2f000000;
      local_1e0[0x14] = 0x2f003f7f;
      local_1e0[0x15] = 0x2f00004f;
      local_1e0[0x17] = 0x3f000000;
      iVar16 = rand();
      local_130 = (longlong)(int)(iVar16 >> 0xf & 0x7fff);
      iVar16 = rand();
      local_130 = (longlong)(int)(iVar16 >> 0xf & 0x7fff);
      iVar16 = rand();
      local_130 = (longlong)(int)(iVar16 >> 0xf & 0x7fff);
      iVar16 = rand();
      local_130 = (longlong)(int)(iVar16 >> 0xf & 0x7fff);
      iVar16 = rand();
      uVar23 = (ulonglong)(uint)(iVar16 >> 0xf) & 0x7fff;
      uVar1 = local_1e0[(int)(uVar23 + (((uVar23 + 1) * 0x5555 << 0x20) >> 0x31) * -6) + 0xc];
      uVar23 = (ulonglong)uVar1;
      uVar2 = uVar1 & 0xff;
      uVar10 = (ulonglong)(uVar1 >> 8) & 0xff;
      uVar17 = (ulonglong)(uVar1 >> 0x10) & 0xff;
      iVar18 = (int)uVar10;
      iVar16 = uVar2 + ((uint)((LZCOUNT(-uVar15) << 0x3a) >> 0x3f) & iVar18 - uVar2);
      iVar16 = iVar16 + ((uint)((LZCOUNT(-uVar7) << 0x3a) >> 0x3f) & (int)uVar17 - iVar16);
      lVar19 = uVar23 + ((LZCOUNT(-uVar15) << 0x3a) >> 0x3f & uVar10 - uVar23);
      lVar11 = uVar10 + ((LZCOUNT(-uVar15) << 0x3a) >> 0x3f & uVar23 - uVar10);
      lVar19 = (longlong)
               (int)((uint)((lVar11 + ((LZCOUNT(-uVar8) << 0x3a) >> 0x3f &
                                      (lVar19 + ((LZCOUNT(-uVar7) << 0x3a) >> 0x3f & uVar17 - lVar19
                                                )) - lVar11) & 0xffffffff) << 0x10) & 0xff0000 |
                    (uint)((uVar17 + ((LZCOUNT(-uVar7) << 0x3a) >> 0x3f & lVar19 - uVar17) &
                           0xffffffff) << 8) & 0xff00 |
                    iVar16 + ((uint)((LZCOUNT(-uVar8) << 0x3a) >> 0x3f) &
                             (iVar18 + ((uint)((LZCOUNT(-uVar15) << 0x3a) >> 0x3f) & uVar2 - iVar18)
                             ) - iVar16) & 0xff0000ff | uVar1 & 0xff000000);
      iVar16 = rand();
      uVar23 = (ulonglong)(uint)(iVar16 >> 0xf) & 0x7fff;
      uVar2 = local_1e0[(int)(uVar23 + (((uVar23 + 1) * 0x5555 << 0x20) >> 0x31) * -6) + 0x12];
      uVar23 = (ulonglong)uVar2;
      uVar9 = uVar2 & 0xff;
      uVar10 = (ulonglong)(uVar2 >> 8) & 0xff;
      iVar18 = (int)uVar10;
      iVar16 = uVar9 + ((uint)((LZCOUNT(-uVar15) << 0x3a) >> 0x3f) & iVar18 - uVar9);
      uVar17 = (ulonglong)(uVar2 >> 0x10) & 0xff;
      iVar16 = iVar16 + ((uint)((LZCOUNT(-uVar7) << 0x3a) >> 0x3f) & (int)uVar17 - iVar16);
      local_130 = (longlong)(int)((double)animationSpeed * dVar34);
      lVar22 = uVar23 + ((LZCOUNT(-uVar15) << 0x3a) >> 0x3f & uVar10 - uVar23);
      lVar11 = uVar10 + ((LZCOUNT(-uVar15) << 0x3a) >> 0x3f & uVar23 - uVar10);
      lVar11 = (longlong)
               (int)((uint)((lVar11 + ((LZCOUNT(-uVar8) << 0x3a) >> 0x3f &
                                      (lVar22 + ((LZCOUNT(-uVar7) << 0x3a) >> 0x3f & uVar17 - lVar22
                                                )) - lVar11) & 0xffffffff) << 0x10) & 0xff0000 |
                    (uint)((uVar17 + ((LZCOUNT(-uVar7) << 0x3a) >> 0x3f & lVar22 - uVar17) &
                           0xffffffff) << 8) & 0xff00 |
                    iVar16 + ((uint)((LZCOUNT(-uVar8) << 0x3a) >> 0x3f) &
                             (iVar18 + ((uint)((LZCOUNT(-uVar15) << 0x3a) >> 0x3f) & uVar9 - iVar18)
                             ) - iVar16) & 0xff0000ff | uVar2 & 0xff000000);
      rand();
      partupd::SpawnPart_8
                (uVar33,param_10,local_240,
                 lVar19 + ((LZCOUNT(-(int)uVar12) << 0x3a) >> 0x3f & (int)uVar1 - lVar19),
                 lVar11 + ((LZCOUNT(-(int)uVar12) << 0x3a) >> 0x3f & (int)uVar2 - lVar11));
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar14);
  }
  lVar11 = local_160;
  pMoby = (MobyInstance *)local_160;
  if ((pMoby != (MobyInstance *)0x0) && (dVar35 < param_3)) {
    iVar14 = (int)local_178;
    uVar12 = (LZCOUNT(-iVar14) << 0x3a) >> 0x3f & 0x50;
    if (((int)(((uint)((int)DAT_00a10714 >> 0x1f) >> 1 ^ (uint)DAT_00a10714) -
              ((int)DAT_00a10714 >> 0x1f)) < 0x3f733333) && (local_180 < dVar27)) {
      local_130 = (longlong)(int)(animationSpeed * 16.5);
      FUN_001d4d88(param_3,local_160,param_10,local_280,uVar12,(int)(animationSpeed * 16.5),
                   uVar12 + 0x46,0x96);
      local_130 = (longlong)(int)(animationSpeed * 22.5);
      FUN_001d4d88(param_3,lVar11,param_10,local_280);
    }
    local_130 = (longlong)(int)(animationSpeed * 30.5);
    FUN_001d4d88(param_3,lVar11,param_10,local_280,0x30,(int)(animationSpeed * 30.5),
                 ((LZCOUNT(-iVar14) << 0x3a) >> 0x3f & 0x43U) + 0x3c,0x7f,0);
  }
  if ((pMoby != (MobyInstance *)0x0) && (dVar35 < param_4)) {
    local_130 = (longlong)(int)(animationSpeed * 27.5);
    FUN_001d4d88(param_4,lVar11,param_10,local_280,0x20,(int)(animationSpeed * 27.5),0xff,0xff,0xff)
    ;
  }
  if (((int)local_140 != 0) &&
     (iVar14 = fastfunc::FastCheckBsphereInView(0x4024000000000000,local_230), iVar14 != -1)) {
    auVar37 = ZEXT416(0xffffffff);
    auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
    auVar37 = vectorShiftLeftIntegerWord(auVar37,auVar37);
    auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    fVar5 = 0.35;
    if (dVar27 - 20.0 < 0.0) {
      fVar5 = (float)(dVar27 * 0.017500000074505806);
    }
    *(float *)((int)local_158 + 0x160) = 0.4 - fVar5;
    auVar39 = loadVectorLeftIndexed(0x98,0x10df8c);
    auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar37 = vectorMultiplyAddFloatingPoint
                        (auVar38,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                         auVar37);
    auVar37 = vectorConvertToSignedFixedPointWordSaturate(auVar37,0);
    auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar3 = storeVectorElementWordIndexed
                      (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0x168,local_158
                      );
    *(undefined4 *)((int)local_158 + 0x168U & 0xfffffffc) = uVar3;
  }
  if ((pMoby != (MobyInstance *)0x0) && ((int)local_148 != -1)) {
    sound::PlayMobySound((int)local_148,0,pMoby);
  }
  if (((int)local_150 == 0 && param_7 != dVar35) &&
     (iVar14 = fastfunc::FastCheckBsphereInView(0x4059000000000000,local_220), iVar14 != -1)) {
    dVar34 = 15.0;
    if (dVar35 - param_7 < 0.0) {
      dVar34 = param_7;
    }
    DAT_007292b8 = (float)dVar34;
    DAT_007292b4 = (float)dVar34;
    DAT_007292b0 = (float)dVar34;
    if ((int)local_178 == 0) {
      FUN_003fda38(&DAT_00729290,param_10,0,0);
    }
    else {
      FUN_003fda38(&DAT_007292e0,param_10,0,0);
    }
  }
  return;
}



//==== 0010fb28  ns=mobyutil  size=0x4e4
// sig: undefined MB_SpawnExplosionSparks(void)
// callers(70): 0001f7a8 mobyupdate_unsorted::UpdateMoby_409; 00189bd8 mobyupdate_unsorted::UpdateMoby_1022; 0018b2f8 mobyupdate_unsorted::UpdateMoby_1023; 0018e9f8 mobyupdate_unsorted::UpdateMoby_1027; 001ca968 mobyupdate_helpers::M1109_001ca968; 001f0948 mobyupdate_unsorted::UpdateMoby_a_lot_6; 001f6900 mobyupdate_unsorted::UpdateMoby_1198; 0020fda8 mobyupdate_unsorted::UpdateMoby_1226; 00230bb8 mobyupdate_helpers::M1264_00230bb8; 00232b90 mobyupdate_helpers::M1266_00232b90; 00233180 mobyupdate_unsorted::UpdateMoby_1266; 0023d4d8 mobyupdate_unsorted::UpdateMoby_{1285_1286_1287_1288}; 0023eb98 mobyupdate_unsorted::UpdateMoby_1292; 00243a70 mobyupdate_unsorted::UpdateMoby_a_lot_9; 00244840 mobyupdate_unsorted::UpdateMoby_1309; 002476e8 mobyupdate_unsorted::UpdateMoby_1319; 0026c6f0 mobyupdate_unsorted::UpdateMoby_1401_MineBot; 00271740 mobyupdate_helpers::M1417_00271740; 00272248 mobyupdate_unsorted::UpdateMoby_1417_FlyingCar; 0027d4c8 mobyupdate_unsorted::UpdateMoby_1440; 002806b0 mobyupdate_unsorted::UpdateMoby_1445; 0028f7d0 mobyupdate_unsorted::UpdateMoby_1512; 002a2438 mobyupdate_unsorted::UpdateMoby_160; 002c3118 mobyupdate_unsorted::UpdateMoby_1843; 002dc568 mobyupdate_unsorted::UpdateMoby_193
// callees(6): 00123390 partupd::SpawnPart_11; 0015d12c sound::PlayMobySound; 001d4d88 FUN_001d4d88; 003fda38 FUN_003fda38; 00502910 fastfunc::FastCheckBsphereInView; 005c8318 rand

undefined4 *
mobyutil::MB_SpawnExplosionSparks
          (double param_1,double param_2,MobyInstance *param_3,undefined4 param_4,undefined8 param_5
          ,int param_6)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined4 local_f0 [12];
  longlong local_c0;
  
  iVar7 = 0;
  dVar9 = 0.0;
  dVar10 = 8.0;
  dVar11 = (double)(float)(param_1 * 400000.0);
  dVar12 = 20.5;
  dVar13 = 30.5;
  dVar14 = 6.103515625e-05;
  do {
    iVar5 = rand();
    local_c0 = (longlong)(int)(iVar5 >> 0xf & 0x7fff);
    local_f0[0] = 0x4f008fff;
    local_f0[1] = 0x4f008fff;
    local_f0[3] = 0x4f006fff;
    local_f0[4] = 0x2fffffff;
    local_f0[2] = 0x4f007fff;
    local_f0[5] = 0x2fffffff;
    local_f0[6] = 0x2f005f7f;
    local_f0[7] = 0x2f004f7f;
    local_f0[8] = 0x2f003f7f;
    local_f0[9] = 0x2f00004f;
    local_f0[10] = 0x2f000000;
    local_f0[0xb] = 0x3f000000;
    dVar8 = (double)((float)((double)local_c0 * dVar14 + dVar10) * g_FrameTime);
    iVar5 = rand();
    uVar4 = (ulonglong)(uint)(iVar5 >> 0xf) & 0x7fff;
    uVar2 = local_f0[(int)(uVar4 + (((uVar4 + 1) * 0x5555 << 0x20) >> 0x31) * -6)];
    iVar5 = rand();
    uVar4 = (ulonglong)(uint)(iVar5 >> 0xf) & 0x7fff;
    local_c0 = (longlong)(int)((double)animationSpeed * dVar12);
    uVar3 = local_f0[(int)(uVar4 + (((uVar4 + 1) * 0x5555 << 0x20) >> 0x31) * -6) + 6];
    rand();
    local_c0 = (longlong)(int)((double)animationSpeed * dVar13);
    rand();
    partupd::SpawnPart_11(dVar11,(double)(float)(dVar8 * param_1),param_4,local_110,uVar2,uVar3);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 3);
  if (param_3 != (MobyInstance *)0x0) {
    local_c0 = (longlong)(int)((double)animationSpeed * dVar12);
    FUN_001d4d88((double)(float)(param_1 * 4.0),param_3,param_4,local_110,0x30,
                 (int)((double)animationSpeed * dVar12),0x7f,0x40,0);
    local_c0 = (longlong)(int)(animationSpeed * 29.5);
    FUN_001d4d88((double)(float)(param_1 * 3.0),param_3,param_4,local_110);
  }
  puVar6 = (undefined4 *)fastfunc::FastCheckBsphereInView(0x4024000000000000,local_100);
  if (puVar6 != (undefined4 *)0xffffffff) {
    auVar15 = ZEXT416(0xffffffff);
    auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
    puVar6 = &DAT_0010faec;
    auVar16 = vectorShiftLeftIntegerWord(auVar15,auVar15);
    auVar17 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    GameCamera.offset0.amp = (float)(param_1 * 0.10000000149011612);
    auVar15 = loadVectorLeftIndexed(0x10,0x10faec);
    auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar15 = vectorMultiplyAddFloatingPoint
                        (auVar17,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,
                         auVar16);
    auVar15 = vectorConvertToSignedFixedPointWordSaturate(auVar15,0);
    auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
    GameCamera.offset0.total =
         storeVectorElementWordIndexed
                   (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,0x168,0x9513c0);
  }
  if (param_3 != (MobyInstance *)0x0) {
    bVar1 = param_3->state;
    puVar6 = (undefined4 *)(uint)bVar1;
    if ((bVar1 != 0xfd && bVar1 != 0xfe) && (param_6 != -1)) {
      puVar6 = (undefined4 *)sound::PlayMobySound(param_6,0,param_3);
    }
  }
  if (param_2 != dVar9) {
    dVar10 = 13.0;
    if (dVar9 - param_2 < 0.0) {
      dVar10 = param_2;
    }
    DAT_00729354 = (float)dVar10;
    DAT_00729358 = (float)dVar10;
    DAT_00729350 = (float)dVar10;
    puVar6 = (undefined4 *)FUN_003fda38(&DAT_00729330,param_4,0,0);
  }
  return puVar6;
}



