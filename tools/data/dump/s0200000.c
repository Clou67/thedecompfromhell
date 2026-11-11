//==== 002005d4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1209_002005d4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1209_002005d4(void)

{
  DAT_00766600 = 0x10000;
  return;
}



//==== 00200608  ns=mobyupdate_helpers  size=0x61c
// sig: undefined M1209_00200608(void)
// callers(0): 
// callees(10): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00500ca4 fastfunc::FastEulerToMtx1; 0050162c fastfunc::FastVecMtx4Mul; 00502578 fastfunc::FastWrapRot; 00502648 fastfunc::FastAddRots; 00502730 fastfunc::FastIntToDouble; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1209_00200608(int param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong *puVar10;
  int iVar11;
  int iVar12;
  gameMode_t gVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float *pfVar17;
  longlong lVar16;
  longlong lVar18;
  ulonglong unaff_r26;
  longlong lVar19;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  uint uVar20;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f30;
  double dVar25;
  ulonglong in_f31;
  double dVar26;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar1 = uVar14 - 0x240;
  puVar10 = (ulonglong *)lVar1;
  *puVar10 = uVar14;
  puVar10[0x4a] = in_LR;
  puVar10[0x46] = in_f30;
  puVar10[0x47] = in_f31;
  puVar10[0x45] = unaff_r31;
  gVar13 = g_gameMode;
  iVar7 = *(int *)(param_1 + 0x78);
  puVar10[0x44] = unaff_r30;
  puVar10[0x43] = unaff_r29;
  puVar10[0x42] = unaff_r28;
  puVar10[0x41] = unaff_r27;
  puVar10[0x40] = unaff_r26;
  if (gVar13 != GAME_MODE_SCENE) {
    uVar20 = 0;
    do {
      uVar8 = *(uint *)(iVar7 + 0x24);
      fVar6 = ABS(*(float *)(iVar7 + 0x24));
      fVar3 = SQRT(*(float *)(iVar7 + 0x20) * *(float *)(iVar7 + 0x20) +
                   *(float *)(iVar7 + 0x28) * *(float *)(iVar7 + 0x28));
      fVar2 = ABS(fVar3);
      *(float *)((int)puVar10 + 0x1a4) = fVar3;
      *(float *)(puVar10 + 0x35) = fVar2 - fVar6;
      dVar25 = 0.0;
      dVar26 = 0.7853981852531433;
      uVar15 = (ulonglong)(*(uint *)((int)puVar10 + 0x1a4) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar10 + 0x35) >> 0x1e) & 2 | (ulonglong)(uVar8 >> 0x1d) & 4;
      fVar3 = ABS(*(float *)((int)puVar10 + 0x1a4));
      if (*(float *)(puVar10 + 0x35) - 0.0 < 0.0) {
        fVar3 = fVar6;
      }
      fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
      if (*(float *)(puVar10 + 0x35) - 0.0 < 0.0) {
        fVar6 = fVar2;
      }
      fVar2 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      dVar22 = dVar25;
      if (0.0 < fVar3) {
        lVar19 = uVar14 - 0x230;
        lVar16 = uVar14 - 0x74;
        lVar18 = uVar14 - 100;
        lVar21 = 2;
        fVar3 = (fVar6 - fVar3) / (fVar6 + fVar3);
        fVar6 = fVar3 * fVar3;
        *(float *)(puVar10 + 0x3b) = fVar3;
        *(float *)(puVar10 + 0x3a) = fVar3;
        *(float *)((int)puVar10 + 0x1d4) = fVar3;
        *(float *)((int)puVar10 + 0x1cc) = fVar3;
        fVar3 = fVar6 * fVar6;
        *(float *)(puVar10 + 0x3a) = *(float *)(puVar10 + 0x3a) * fVar6;
        *(float *)((int)puVar10 + 0x1d4) = *(float *)((int)puVar10 + 0x1d4) * fVar3;
        *(float *)(puVar10 + 0x3b) = *(float *)(puVar10 + 0x3b) * fVar3 * fVar6;
        do {
          *(float *)((int)lVar19 + 0x1cc) = *(float *)((int)lVar19 + 0x1bc) * fVar3 * fVar3;
          iVar11 = (int)lVar16;
          lVar19 = lVar19 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar18 + 4) = *(float *)(iVar11 + 4) * fVar3 * fVar3;
          lVar18 = lVar18 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar18 = uVar14 - 0x74;
        pfVar17 = (float *)&DAT_007358e0;
        lVar19 = lVar1;
        lVar16 = lVar18;
        do {
          fVar3 = *pfVar17;
          fVar6 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar19 + 0x1cc) = *(float *)((int)lVar19 + 0x1cc) * fVar3;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar6;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar16 = 2;
        lVar19 = lVar1;
        do {
          iVar11 = (int)lVar19;
          lVar19 = lVar19 + 0x10;
          iVar12 = (int)lVar18;
          lVar18 = lVar18 + 0x10;
          dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar11 + 0x1cc)) +
                            *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                           *(float *)(iVar12 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar5 + fVar2);
      }
      dVar22 = (double)fastfunc::FastWrapRot((float)-dVar22,1.5707964);
      *(float *)(puVar10 + 0xe) = (float)dVar22;
      uVar8 = *(uint *)(iVar7 + 0x28);
      uVar9 = *(uint *)(iVar7 + 0x20);
      dVar23 = ABS((double)*(float *)(iVar7 + 0x28));
      dVar22 = ABS((double)*(float *)(iVar7 + 0x20));
      *(float *)(puVar10 + 0x34) = (float)(dVar23 - dVar22);
      uVar15 = (ulonglong)(uVar8 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar10 + 0x34) >> 0x1e) & 2 | (ulonglong)(uVar9 >> 0x1d) & 4;
      dVar24 = dVar23;
      if ((double)*(float *)(puVar10 + 0x34) - dVar25 < 0.0) {
        dVar24 = dVar22;
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
      fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      if ((double)*(float *)(puVar10 + 0x34) - dVar25 < 0.0) {
        dVar22 = dVar23;
      }
      if (dVar25 < dVar24) {
        lVar19 = uVar14 - 0x230;
        lVar18 = uVar14 - 0x84;
        lVar16 = uVar14 - 0x94;
        lVar21 = 2;
        fVar2 = (float)(dVar22 - dVar24) / (float)(dVar22 + dVar24);
        fVar5 = fVar2 * fVar2;
        *(float *)(puVar10 + 0x37) = fVar2;
        *(float *)(puVar10 + 0x36) = fVar2;
        *(float *)((int)puVar10 + 0x1b4) = fVar2;
        *(float *)((int)puVar10 + 0x1ac) = fVar2;
        fVar2 = fVar5 * fVar5;
        *(float *)(puVar10 + 0x36) = *(float *)(puVar10 + 0x36) * fVar5;
        *(float *)((int)puVar10 + 0x1b4) = *(float *)((int)puVar10 + 0x1b4) * fVar2;
        *(float *)(puVar10 + 0x37) = *(float *)(puVar10 + 0x37) * fVar2 * fVar5;
        do {
          *(float *)((int)lVar19 + 0x1ac) = *(float *)((int)lVar19 + 0x19c) * fVar2 * fVar2;
          iVar11 = (int)lVar16;
          lVar16 = lVar16 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar18 + 4) = *(float *)(iVar11 + 4) * fVar2 * fVar2;
          lVar18 = lVar18 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar18 = uVar14 - 0x94;
        pfVar17 = (float *)&DAT_007358e0;
        lVar19 = lVar1;
        lVar16 = lVar18;
        do {
          fVar2 = *pfVar17;
          fVar5 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar19 + 0x1ac) = *(float *)((int)lVar19 + 0x1ac) * fVar2;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar16 = 2;
        lVar19 = lVar1;
        do {
          iVar11 = (int)lVar19;
          iVar12 = (int)lVar18;
          lVar19 = lVar19 + 0x10;
          lVar18 = lVar18 + 0x10;
          dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar11 + 0x1ac)) +
                            *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                           *(float *)(iVar12 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar25 = (double)((float)(dVar25 + dVar26) * fVar6 + fVar3);
      }
      *(float *)((int)puVar10 + 0x74) = (float)dVar25;
      *(undefined4 *)(puVar10 + 0xf) = 0;
      *(undefined4 *)((int)puVar10 + 0x7c) = 0;
      *(undefined4 *)(puVar10 + 0x10) = 0;
      iVar11 = worldUpdateTime;
      puVar10[0x3e] = (longlong)(int)(animationSpeed * 180.5);
      dVar25 = (double)fastfunc::FastIntToDouble
                                 (iVar11 - (iVar11 / *(int *)((int)puVar10 + 500)) *
                                           *(int *)((int)puVar10 + 500));
      dVar26 = (double)fastfunc::FastAddRots
                                 ((float)(dVar25 * 6.2831854820251465) / (animationSpeed * 180.0));
      dVar22 = 1.0;
      dVar25 = dVar22;
      if ((uVar20 & 1) != 0) {
        dVar25 = -1.0;
      }
      *(undefined4 *)(puVar10 + 0x11) = 0;
      *(undefined4 *)((int)puVar10 + 0x8c) = 0;
      *(float *)((int)puVar10 + 0x84) = (float)(dVar26 * dVar25);
      fastfunc::FastEulerToMtx1(uVar14 - 0x170,uVar14 - 0x1c0);
      lVar19 = uVar14 - 0x1b0;
      fastfunc::FastEulerToMtx1(lVar19,uVar14 - 0x1d0);
      fastfunc::FastVecMtx4Mul(lVar19,lVar19,uVar14 - 0x170);
      *(undefined4 *)(puVar10 + 0x18) = *(undefined4 *)(iVar7 + 0x10);
      *(undefined4 *)((int)puVar10 + 0xc4) = *(undefined4 *)(iVar7 + 0x14);
      *(undefined4 *)(puVar10 + 0x19) = *(undefined4 *)(iVar7 + 0x18);
      uVar4 = *(undefined4 *)(iVar7 + 0x1c);
      *(undefined4 *)(puVar10 + 0x2a) = 0x80808080;
      *(undefined4 *)((int)puVar10 + 0xcc) = uVar4;
      *(undefined4 *)((int)puVar10 + 0x154) = 0x80808080;
      *(undefined4 *)(puVar10 + 0x2b) = 0x80808080;
      *(undefined4 *)((int)puVar10 + 0x15c) = 0x80808080;
      uVar15 = draw::GetEffectTex(((LZCOUNT(-(uVar20 & 1)) << 0x3a) >> 0x3f) + 0x12);
      puVar10[0x31] = uVar15;
      uVar15 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
      puVar10[0x32] = uVar15;
      uVar15 = FUN_00502f08(0,0,0,0,0,0);
      puVar10[0x30] = uVar15;
      uVar15 = idol_draw::PackCmd(0,2,0,1,0x80);
      puVar10[0x33] = uVar15;
      *(undefined4 *)((int)puVar10 + 0x114) = 0;
      *(undefined4 *)(puVar10 + 0x22) = 0xbf800000;
      *(float *)(puVar10 + 0x23) = (float)dVar22;
      *(float *)((int)puVar10 + 0x11c) = (float)dVar22;
      *(float *)(puVar10 + 0x24) = (float)dVar22;
      *(undefined4 *)((int)puVar10 + 0x124) = 0;
      *(float *)(puVar10 + 0x25) = (float)dVar22;
      *(float *)((int)puVar10 + 300) = (float)dVar22;
      *(undefined4 *)(puVar10 + 0x26) = 0xbf800000;
      *(undefined4 *)((int)puVar10 + 0x134) = 0;
      *(undefined4 *)(puVar10 + 0x27) = 0xbf800000;
      *(float *)((int)puVar10 + 0x13c) = (float)dVar22;
      *(float *)(puVar10 + 0x28) = (float)dVar22;
      *(undefined4 *)((int)puVar10 + 0x144) = 0;
      *(undefined4 *)(puVar10 + 0x29) = 0xbf800000;
      *(float *)((int)puVar10 + 0x14c) = (float)dVar22;
      *(undefined4 *)(puVar10 + 0x2c) = 0;
      *(float *)((int)puVar10 + 0x164) = (float)dVar22;
      *(float *)(puVar10 + 0x2d) = (float)dVar22;
      *(float *)((int)puVar10 + 0x16c) = (float)dVar22;
      *(undefined4 *)(puVar10 + 0x2e) = 0;
      *(undefined4 *)((int)puVar10 + 0x174) = 0;
      *(float *)(puVar10 + 0x2f) = (float)dVar22;
      *(undefined4 *)((int)puVar10 + 0x17c) = 0;
      draw::FastDrawQuad(uVar14 - 0x130,lVar19,1,EffectTexHeaders,9);
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < 2);
  }
  return;
}



//==== 00200c38  ns=Global  size=0x340
// sig: undefined FUN_00200c38(void)
// callers(1): 002db020 mobyupdate_unsorted::UpdateMoby_192
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat

MobyInstance * FUN_00200c38(undefined4 param_1,f32 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  ulonglong *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  MobyInstance *pMVar13;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong in_f27;
  double dVar24;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar25;
  ulonglong in_f31;
  double dVar26;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0xe0;
  puVar6 = (ulonglong *)lVar12;
  *puVar6 = uVar10;
  puVar6[0x1e] = in_LR;
  puVar6[0x17] = in_f27;
  puVar6[0x18] = in_f28;
  puVar6[0x19] = in_f29;
  puVar6[0x1a] = in_f30;
  puVar6[0x1b] = in_f31;
  puVar6[0x15] = unaff_r30;
  puVar6[0x16] = unaff_r31;
  puVar6[0x14] = unaff_r29;
  puVar6[0x13] = unaff_r28;
  pMVar13 = mobyfunc::CreateMoby(0x79);
  if (pMVar13 != (MobyInstance *)0x0) {
    puVar5 = (undefined4 *)pMVar13->pVar;
    dVar24 = -3.1415927410125732;
    dVar26 = 3.1415927410125732;
    dVar25 = 0.0;
    dVar19 = (double)mobyutil::MB_randRangeFloat(-3.1415927,3.1415927);
    dVar20 = (double)mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar26);
    dVar21 = (double)mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar26);
    pMVar13->updateDistance = -1;
    pMVar13->drawDistance = 0xff;
    pMVar13->enabled = '\x01';
    pMVar13->state = '\0';
    puVar5[0x14] = param_1;
    *(undefined2 *)((int)puVar5 + 0x56) = 0;
    *(undefined2 *)((int)puVar5 + 0x6a) = 0;
    puVar5[0x18] = 0;
    fVar4 = DAT_0096a350;
    dVar22 = ABS((double)DAT_0096a350);
    dVar23 = ABS((double)DAT_0096a354);
    uVar9 = (uint)DAT_0096a354 >> 0x1d;
    *(float *)(puVar6 + 0xe) = (float)(dVar22 - dVar23);
    uVar11 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1e) & 2 | (ulonglong)uVar9 & 4;
    dVar24 = dVar22;
    if ((double)*(float *)(puVar6 + 0xe) - dVar25 < 0.0) {
      dVar24 = dVar23;
    }
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar11 << 2));
    if ((double)*(float *)(puVar6 + 0xe) - dVar25 < 0.0) {
      dVar23 = dVar22;
    }
    fVar1 = *(float *)(((uint)(uVar11 << 2) | 0x735900) + 4);
    if (dVar25 < dVar24) {
      lVar16 = uVar10 - 0xd0;
      lVar15 = uVar10 - 0x6c;
      lVar14 = uVar10 - 0x5c;
      lVar18 = 2;
      fVar2 = (float)(dVar23 - dVar24) / (float)(dVar23 + dVar24);
      fVar3 = fVar2 * fVar2;
      *(float *)(puVar6 + 0x10) = fVar2;
      *(float *)(puVar6 + 0xf) = fVar2;
      *(float *)((int)puVar6 + 0x7c) = fVar2;
      *(float *)((int)puVar6 + 0x74) = fVar2;
      fVar2 = fVar3 * fVar3;
      *(float *)(puVar6 + 0xf) = *(float *)(puVar6 + 0xf) * fVar3;
      *(float *)((int)puVar6 + 0x7c) = *(float *)((int)puVar6 + 0x7c) * fVar2;
      *(float *)(puVar6 + 0x10) = *(float *)(puVar6 + 0x10) * fVar2 * fVar3;
      do {
        *(float *)((int)lVar16 + 0x74) = *(float *)((int)lVar16 + 100) * fVar2 * fVar2;
        iVar7 = (int)lVar15;
        lVar16 = lVar16 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)(iVar7 + 4) * fVar2 * fVar2;
        lVar14 = lVar14 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar16 = uVar10 - 0x6c;
      pfVar17 = (float *)&DAT_007358e0;
      lVar18 = 4;
      lVar14 = lVar16;
      lVar15 = lVar12;
      do {
        fVar2 = *pfVar17;
        fVar3 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar15 + 0x74) = *(float *)((int)lVar15 + 0x74) * fVar2;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar3;
        lVar14 = lVar14 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar14 = 2;
      do {
        iVar7 = (int)lVar12;
        iVar8 = (int)lVar16;
        lVar12 = lVar12 + 0x10;
        lVar16 = lVar16 + 0x10;
        dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar7 + 0x74)) + *(float *)(iVar8 + 4)
                          + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar4 + fVar1);
    }
    puVar5[0x1b] = (float)dVar25;
    puVar5[0x19] = 0;
    (pMVar13->pos).x = *param_2;
    (pMVar13->pos).y = param_2[1];
    (pMVar13->pos).z = param_2[2];
    (pMVar13->pos).w = param_2[3];
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
    (pMVar13->rotation).x = (float)dVar19;
    (pMVar13->rotation).y = (float)dVar20;
    (pMVar13->rotation).z = (float)dVar21;
    (pMVar13->rotation).w = 0.0;
    dVar23 = 1.0471975803375244;
    dVar24 = (double)mobyutil::MB_randRangeFloat
                               ((float)((double)mobyutil::g_FrameTime * 1.0471975803375244),
                                (float)((double)mobyutil::g_FrameTime * dVar26));
    puVar5[0x16] = (float)dVar24;
    dVar24 = (double)mobyutil::MB_randRangeFloat
                               ((float)((double)mobyutil::g_FrameTime * dVar23),
                                (float)((double)mobyutil::g_FrameTime * dVar26));
    puVar5[0x17] = (float)dVar24;
    mobyfunc::UpdateMobyTransform(pMVar13);
  }
  return pMVar13;
}



//==== 00200fd0  ns=Global  size=0xd84
// sig: undefined FUN_00200fd0(void)
// callers(1): 002db020 mobyupdate_unsorted::UpdateMoby_192
// callees(6): 00057820 collproc::CollLine; 001122ac mobyutil::MB_GetPlatformParent; 002daa30 mobyupdate_helpers::M192_002daa30; 005023f0 fastfunc::FastVecAdd; 005026a0 fastfunc::FastSubRots; 00502730 fastfunc::FastIntToDouble

void FUN_00200fd0(float *param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  f32 fVar10;
  float fVar11;
  float *pfVar12;
  undefined2 uVar13;
  ulonglong *puVar14;
  int iVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  MobyInstance *pMVar20;
  PlayerState PVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  ulonglong uVar26;
  float *pfVar28;
  longlong lVar27;
  longlong lVar29;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong uVar30;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar36;
  undefined8 uVar37;
  ulonglong in_f31;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  
  uVar22 = ZEXT48(&stack0x00000000);
  lVar24 = uVar22 - 0x1f0;
  puVar14 = (ulonglong *)lVar24;
  *puVar14 = uVar22;
  puVar14[0x40] = in_LR;
  puVar14[0x37] = in_f25;
  puVar14[0x38] = in_f26;
  puVar14[0x39] = in_f27;
  puVar14[0x3a] = in_f28;
  puVar14[0x3b] = in_f29;
  puVar14[0x3c] = in_f30;
  puVar14[0x3d] = in_f31;
  auVar39 = ZEXT416(0xffffffff);
  auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
  puVar14[0x32] = unaff_r27;
  auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
  auVar39 = loadVectorLeftIndexed(in_LR,0x200f78);
  auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
  puVar14[0x33] = unaff_r28;
  pfVar12 = *(float **)(param_2 + 0x78);
  uVar30 = ZEXT48(pfVar12);
  puVar14[0x36] = unaff_r31;
  auVar39 = vectorMultiplyAddFloatingPoint
                      (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,auVar40
                      );
  puVar14[0x35] = unaff_r30;
  puVar14[0x34] = unaff_r29;
  auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
  auVar39 = vectorSplatHalfWord(auVar39,1);
  uVar13 = storeVectorElementHalfWordIndexed(auVar39,0x6a,uVar30);
  *(undefined2 *)((int)pfVar12 + 0x6a) = uVar13;
  *(undefined1 *)(param_2 + 0x20) = 1;
  fVar1 = *param_3;
  *pfVar12 = fVar1;
  fVar2 = param_3[1];
  pfVar12[1] = fVar2;
  iVar25 = hero::g_heroStateType;
  fVar3 = param_3[2];
  pfVar12[2] = fVar3;
  fVar4 = param_3[3];
  puVar14[0x31] = unaff_r26;
  pfVar12[3] = fVar4;
  if (iVar25 == 0xf) {
    *pfVar12 = fVar1 + DAT_00969de0;
    pfVar12[1] = fVar2 + DAT_00969de4;
    pfVar12[2] = fVar3 + DAT_00969de8;
  }
  else if ((g_standingOnMoby == 0) || (iVar25 = mobyutil::MB_GetPlatformParent(), iVar25 == 0)) {
    fVar1 = pfVar12[0x18];
    if (fVar1 != 0.0) {
      if ((*(short *)((int)fVar1 + 0xa6) == 0x56e) || (*(short *)((int)fVar1 + 0xa6) == 0x58e)) {
        *pfVar12 = *pfVar12 + pfVar12[0x10];
        pfVar12[1] = pfVar12[1] + pfVar12[0x11];
        pfVar12[2] = pfVar12[2] + pfVar12[0x12];
      }
      else if (pfVar12[0x19] != 0.0) {
        fVar2 = g_heroPosition.y - *(float *)((int)fVar1 + 0x14);
        fVar3 = g_heroPosition.x - *(float *)((int)fVar1 + 0x10);
        fVar7 = g_heroPosition.z - *(float *)((int)fVar1 + 0x18);
        dVar36 = 0.0;
        fVar4 = fVar7 * fVar7 + fVar3 * fVar3 + fVar2 * fVar2;
        dVar32 = dVar36;
        dVar33 = dVar36;
        dVar38 = dVar36;
        if (SQRT(fVar4) != 0.0) {
          fVar11 = 1.0 / SQRT(fVar4);
          fVar11 = -(fVar4 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
          fVar11 = -(fVar4 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
          fVar11 = -(fVar4 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
          dVar38 = (double)(fVar11 * fVar3);
          dVar32 = (double)(fVar11 * fVar2);
          dVar33 = (double)(fVar11 * fVar7);
        }
        fVar2 = param_1[1] - *(float *)((int)fVar1 + 0x14);
        fVar1 = *param_1 - *(float *)((int)fVar1 + 0x10);
        dVar34 = (double)(float)(dVar33 * (double)pfVar12[0x12] +
                                (double)(float)(dVar38 * (double)pfVar12[0x10] +
                                               (double)(float)(dVar32 * (double)pfVar12[0x11])));
        dVar35 = (double)(SQRT(fVar1 * fVar1 + fVar2 * fVar2) /
                         (float)(dVar34 + (double)SQRT(*param_3 * *param_3 + param_3[1] * param_3[1]
                                                      )));
        if (dVar34 <= 0.0) {
          fVar1 = pfVar12[0x18];
          *(float *)(puVar14 + 0x10) = (float)((double)pfVar12[0x10] * dVar35);
          *(float *)((int)puVar14 + 0x84) = (float)((double)pfVar12[0x11] * dVar35);
          *(float *)(puVar14 + 0x11) = (float)((double)pfVar12[0x12] * dVar35);
          *(float *)((int)puVar14 + 0x8c) = pfVar12[0x13];
          fastfunc::FastVecAdd(uVar22 - 0x140,uVar22 - 0x170,(ulonglong)(uint)fVar1 + 0x10);
          fVar1 = *(float *)(puVar14 + 0x16);
          fVar2 = *(float *)((int)puVar14 + 0xb4);
          uVar5 = *(undefined4 *)(puVar14 + 0x17);
          uVar6 = *(undefined4 *)((int)puVar14 + 0xbc);
        }
        else {
          dVar34 = (double)(float)(dVar35 * dVar34);
          fVar1 = pfVar12[0x18];
          *(float *)((int)puVar14 + 0x8c) = g_heroPosition.w;
          *(float *)(puVar14 + 0x10) = (float)(dVar34 * dVar38);
          *(float *)((int)puVar14 + 0x84) = (float)(dVar34 * dVar32);
          *(float *)(puVar14 + 0x11) = (float)(dVar34 * dVar33);
          fastfunc::FastVecAdd(uVar22 - 0x150,uVar22 - 0x170,(ulonglong)(uint)fVar1 + 0x10);
          fVar1 = *(float *)(puVar14 + 0x14);
          fVar2 = *(float *)((int)puVar14 + 0xa4);
          uVar5 = *(undefined4 *)(puVar14 + 0x15);
          uVar6 = *(undefined4 *)((int)puVar14 + 0xac);
        }
        fVar11 = DAT_0096a354;
        fVar7 = DAT_0096a350;
        dVar32 = (double)DAT_0096a354;
        dVar38 = ABS((double)DAT_0096a350);
        *(float *)(puVar14 + 0x10) = fVar1;
        dVar32 = ABS(dVar32);
        *(float *)((int)puVar14 + 0x84) = fVar2;
        *(undefined4 *)(puVar14 + 0x11) = uVar5;
        *(float *)((int)puVar14 + 0x104) = (float)(dVar38 - dVar32);
        *(undefined4 *)((int)puVar14 + 0x8c) = uVar6;
        fVar4 = g_heroPosition.y;
        fVar3 = g_heroPosition.x;
        dVar34 = 0.7853981852531433;
        uVar26 = (ulonglong)((uint)fVar7 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0x104) >> 0x1e) & 2 |
                 (ulonglong)((uint)fVar11 >> 0x1d) & 4;
        dVar33 = dVar38;
        if ((double)*(float *)((int)puVar14 + 0x104) - dVar36 < 0.0) {
          dVar33 = dVar32;
        }
        fVar11 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
        fVar7 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
        if ((double)*(float *)((int)puVar14 + 0x104) - dVar36 < 0.0) {
          dVar32 = dVar38;
        }
        dVar38 = dVar36;
        if (dVar36 < dVar33) {
          lVar23 = uVar22 - 0x1e0;
          lVar27 = uVar22 - 0x88;
          lVar29 = uVar22 - 0x78;
          lVar31 = 2;
          fVar8 = (float)(dVar32 - dVar33) / (float)(dVar32 + dVar33);
          fVar9 = fVar8 * fVar8;
          *(float *)((int)puVar14 + 0x174) = fVar8;
          *(float *)((int)puVar14 + 0x16c) = fVar8;
          *(float *)(puVar14 + 0x2e) = fVar8;
          *(float *)(puVar14 + 0x2d) = fVar8;
          fVar8 = fVar9 * fVar9;
          *(float *)((int)puVar14 + 0x16c) = *(float *)((int)puVar14 + 0x16c) * fVar9;
          *(float *)(puVar14 + 0x2e) = *(float *)(puVar14 + 0x2e) * fVar8;
          *(float *)((int)puVar14 + 0x174) = *(float *)((int)puVar14 + 0x174) * fVar8 * fVar9;
          do {
            *(float *)((int)lVar23 + 0x168) = *(float *)((int)lVar23 + 0x158) * fVar8 * fVar8;
            iVar25 = (int)lVar27;
            lVar23 = lVar23 + 8;
            lVar27 = lVar27 + 8;
            *(float *)((int)lVar29 + 4) = *(float *)(iVar25 + 4) * fVar8 * fVar8;
            lVar29 = lVar29 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar31 = 4;
          lVar29 = uVar22 - 0x88;
          pfVar28 = (float *)&DAT_007358e0;
          lVar23 = lVar24;
          lVar27 = lVar29;
          do {
            fVar8 = *pfVar28;
            fVar9 = pfVar28[1];
            pfVar28 = pfVar28 + 2;
            *(float *)((int)lVar23 + 0x168) = *(float *)((int)lVar23 + 0x168) * fVar8;
            lVar23 = lVar23 + 8;
            *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar9;
            lVar27 = lVar27 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar27 = 2;
          lVar23 = lVar24;
          dVar32 = dVar36;
          do {
            iVar25 = (int)lVar23;
            lVar23 = lVar23 + 0x10;
            iVar15 = (int)lVar29;
            lVar29 = lVar29 + 0x10;
            dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar25 + 0x168)) +
                              *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                             *(float *)(iVar15 + 0xc));
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          dVar38 = (double)((float)(dVar32 + 0.7853981852531433) * fVar11 + fVar7);
        }
        dVar33 = ABS((double)(fVar1 - fVar3));
        dVar35 = ABS((double)(fVar2 - fVar4));
        *(float *)(puVar14 + 0x1f) = fVar1 - fVar3;
        *(float *)((int)puVar14 + 0xfc) = fVar2 - fVar4;
        *(float *)(puVar14 + 0x20) = (float)(dVar33 - dVar35);
        uVar26 = (ulonglong)(*(uint *)(puVar14 + 0x1f) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar14 + 0x20) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0xfc) >> 0x1d) & 4;
        dVar32 = ABS((double)*(float *)(puVar14 + 0x1f));
        if ((double)*(float *)(puVar14 + 0x20) - dVar36 < 0.0) {
          dVar32 = dVar35;
        }
        fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
        dVar35 = ABS((double)*(float *)((int)puVar14 + 0xfc));
        if ((double)*(float *)(puVar14 + 0x20) - dVar36 < 0.0) {
          dVar35 = dVar33;
        }
        fVar2 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
        dVar33 = dVar36;
        if (dVar36 < dVar32) {
          lVar23 = uVar22 - 0x1e0;
          lVar29 = uVar22 - 0x98;
          lVar27 = uVar22 - 0xa8;
          lVar31 = 2;
          fVar3 = (float)(dVar35 - dVar32) / (float)(dVar35 + dVar32);
          fVar4 = fVar3 * fVar3;
          *(float *)((int)puVar14 + 0x154) = fVar3;
          *(float *)((int)puVar14 + 0x14c) = fVar3;
          *(float *)(puVar14 + 0x2a) = fVar3;
          *(float *)(puVar14 + 0x29) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)((int)puVar14 + 0x14c) = *(float *)((int)puVar14 + 0x14c) * fVar4;
          *(float *)(puVar14 + 0x2a) = *(float *)(puVar14 + 0x2a) * fVar3;
          *(float *)((int)puVar14 + 0x154) = *(float *)((int)puVar14 + 0x154) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar23 + 0x148) = *(float *)((int)lVar23 + 0x138) * fVar3 * fVar3;
            iVar25 = (int)lVar27;
            lVar27 = lVar27 + 8;
            lVar23 = lVar23 + 8;
            *(float *)((int)lVar29 + 4) = *(float *)(iVar25 + 4) * fVar3 * fVar3;
            lVar29 = lVar29 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar31 = 4;
          lVar29 = uVar22 - 0xa8;
          pfVar28 = (float *)&DAT_007358e0;
          lVar23 = lVar24;
          lVar27 = lVar29;
          do {
            fVar3 = *pfVar28;
            fVar4 = pfVar28[1];
            pfVar28 = pfVar28 + 2;
            *(float *)((int)lVar23 + 0x148) = *(float *)((int)lVar23 + 0x148) * fVar3;
            lVar23 = lVar23 + 8;
            *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar4;
            lVar27 = lVar27 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar27 = 2;
          lVar23 = lVar24;
          dVar32 = dVar36;
          do {
            iVar25 = (int)lVar23;
            iVar15 = (int)lVar29;
            lVar23 = lVar23 + 0x10;
            lVar29 = lVar29 + 0x10;
            dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar25 + 0x148)) +
                              *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                             *(float *)(iVar15 + 0xc));
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          dVar33 = (double)((float)(dVar32 + 0.7853981852531433) * fVar1 + fVar2);
        }
        dVar32 = (double)fastfunc::FastSubRots((float)dVar38,(float)dVar33);
        fVar7 = DAT_0096a350;
        fVar4 = g_heroPosition.y;
        fVar3 = g_heroPosition.x;
        fVar1 = *(float *)(puVar14 + 0x10);
        fVar2 = *(float *)((int)puVar14 + 0x84);
        if (1.5707963705062866 < dVar32) {
          dVar38 = ABS((double)DAT_0096a350);
          dVar32 = ABS((double)DAT_0096a354);
          uVar16 = (uint)DAT_0096a354 >> 0x1d;
          *(float *)((int)puVar14 + 0xf4) = (float)(dVar38 - dVar32);
          uVar26 = (ulonglong)((uint)fVar7 >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar14 + 0xf4) >> 0x1e) & 2 | (ulonglong)uVar16 & 4;
          dVar33 = dVar38;
          if ((double)*(float *)((int)puVar14 + 0xf4) - dVar36 < 0.0) {
            dVar33 = dVar32;
          }
          fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
          if ((double)*(float *)((int)puVar14 + 0xf4) - dVar36 < 0.0) {
            dVar32 = dVar38;
          }
          fVar11 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
          dVar38 = dVar36;
          if (dVar36 < dVar33) {
            lVar23 = uVar22 - 0x1e0;
            lVar27 = uVar22 - 200;
            lVar29 = uVar22 - 0xb8;
            lVar31 = 2;
            fVar8 = (float)(dVar32 - dVar33) / (float)(dVar32 + dVar33);
            fVar9 = fVar8 * fVar8;
            *(float *)((int)puVar14 + 0x134) = fVar8;
            *(float *)((int)puVar14 + 300) = fVar8;
            *(float *)(puVar14 + 0x26) = fVar8;
            *(float *)(puVar14 + 0x25) = fVar8;
            fVar8 = fVar9 * fVar9;
            *(float *)((int)puVar14 + 300) = *(float *)((int)puVar14 + 300) * fVar9;
            *(float *)(puVar14 + 0x26) = *(float *)(puVar14 + 0x26) * fVar8;
            *(float *)((int)puVar14 + 0x134) = *(float *)((int)puVar14 + 0x134) * fVar8 * fVar9;
            do {
              *(float *)((int)lVar23 + 0x128) = *(float *)((int)lVar23 + 0x118) * fVar8 * fVar8;
              iVar25 = (int)lVar27;
              lVar23 = lVar23 + 8;
              lVar27 = lVar27 + 8;
              *(float *)((int)lVar29 + 4) = *(float *)(iVar25 + 4) * fVar8 * fVar8;
              lVar29 = lVar29 + 8;
              lVar31 = lVar31 + -1;
            } while (lVar31 != 0);
            lVar31 = 4;
            lVar29 = uVar22 - 200;
            pfVar28 = (float *)&DAT_007358e0;
            lVar23 = lVar24;
            lVar27 = lVar29;
            do {
              fVar8 = *pfVar28;
              fVar9 = pfVar28[1];
              pfVar28 = pfVar28 + 2;
              *(float *)((int)lVar23 + 0x128) = *(float *)((int)lVar23 + 0x128) * fVar8;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar9;
              lVar27 = lVar27 + 8;
              lVar31 = lVar31 + -1;
            } while (lVar31 != 0);
            lVar27 = 2;
            lVar23 = lVar24;
            dVar32 = dVar36;
            do {
              iVar25 = (int)lVar23;
              lVar23 = lVar23 + 0x10;
              iVar15 = (int)lVar29;
              lVar29 = lVar29 + 0x10;
              dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar25 + 0x128)) +
                                *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                               *(float *)(iVar15 + 0xc));
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            dVar38 = (double)((float)(dVar32 + dVar34) * fVar7 + fVar11);
          }
          fVar19 = DAT_0096a350;
          fVar8 = g_heroPosition.y;
          fVar11 = g_heroPosition.x;
          fVar3 = fVar3 - fVar1;
          fVar7 = (float)(dVar38 + 1.570796251296997);
          fVar4 = fVar4 - fVar2;
          fVar9 = 3.1415925 - fVar7;
          if (fVar7 - (3.1415925 - fVar7) < 0.0) {
            fVar9 = fVar7;
          }
          dVar33 = ABS((double)DAT_0096a350);
          dVar32 = ABS((double)DAT_0096a354);
          uVar16 = (uint)DAT_0096a354 >> 0x1d;
          fVar17 = -3.1415925 - fVar7;
          if ((-3.1415925 - fVar7) - fVar9 < 0.0) {
            fVar17 = fVar9;
          }
          fVar18 = fVar17 * fVar17;
          *(float *)(puVar14 + 0x1e) = (float)(dVar33 - dVar32);
          fVar7 = fVar18 * fVar18 * fVar17;
          fVar9 = fVar18 * fVar7;
          uVar26 = (ulonglong)((uint)fVar19 >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar14 + 0x1e) >> 0x1e) & 2 | (ulonglong)uVar16 & 4;
          dVar38 = dVar33;
          if ((double)*(float *)(puVar14 + 0x1e) - dVar36 < 0.0) {
            dVar38 = dVar32;
          }
          if ((double)*(float *)(puVar14 + 0x1e) - dVar36 < 0.0) {
            dVar32 = dVar33;
          }
          *(float *)(puVar14 + 0x18) =
               (fVar18 * fVar9 * 2.601887e-06 +
               fVar9 * -0.0001980741 + fVar7 * 0.0083330255 + fVar18 * fVar17 * -0.16666657 + fVar17
               ) * SQRT(fVar3 * fVar3 + fVar4 * fVar4) * 0.5;
          fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
          fVar3 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
          dVar33 = dVar36;
          if (dVar36 < dVar38) {
            lVar23 = uVar22 - 0x1e0;
            lVar29 = uVar22 - 0xd8;
            lVar27 = uVar22 - 0xe8;
            lVar31 = 2;
            fVar7 = (float)(dVar32 - dVar38) / (float)(dVar32 + dVar38);
            fVar9 = fVar7 * fVar7;
            *(float *)((int)puVar14 + 0x114) = fVar7;
            *(float *)((int)puVar14 + 0x10c) = fVar7;
            *(float *)(puVar14 + 0x22) = fVar7;
            *(float *)(puVar14 + 0x21) = fVar7;
            fVar7 = fVar9 * fVar9;
            *(float *)((int)puVar14 + 0x10c) = *(float *)((int)puVar14 + 0x10c) * fVar9;
            *(float *)(puVar14 + 0x22) = *(float *)(puVar14 + 0x22) * fVar7;
            *(float *)((int)puVar14 + 0x114) = *(float *)((int)puVar14 + 0x114) * fVar7 * fVar9;
            do {
              *(float *)((int)lVar23 + 0x108) = *(float *)((int)lVar23 + 0xf8) * fVar7 * fVar7;
              iVar25 = (int)lVar27;
              lVar27 = lVar27 + 8;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar29 + 4) = *(float *)(iVar25 + 4) * fVar7 * fVar7;
              lVar29 = lVar29 + 8;
              lVar31 = lVar31 + -1;
            } while (lVar31 != 0);
            lVar31 = 4;
            lVar29 = uVar22 - 0xe8;
            pfVar28 = (float *)&DAT_007358e0;
            lVar23 = lVar24;
            lVar27 = lVar29;
            do {
              fVar7 = *pfVar28;
              fVar9 = pfVar28[1];
              pfVar28 = pfVar28 + 2;
              *(float *)((int)lVar23 + 0x108) = *(float *)((int)lVar23 + 0x108) * fVar7;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar9;
              lVar27 = lVar27 + 8;
              lVar31 = lVar31 + -1;
            } while (lVar31 != 0);
            lVar23 = 2;
            dVar32 = dVar36;
            do {
              iVar25 = (int)lVar24;
              iVar15 = (int)lVar29;
              lVar24 = lVar24 + 0x10;
              lVar29 = lVar29 + 0x10;
              dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar25 + 0x108)) +
                                *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                               *(float *)(iVar15 + 0xc));
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            dVar33 = (double)((float)(dVar32 + dVar34) * fVar4 + fVar3);
          }
          fVar8 = fVar8 - fVar2;
          fVar11 = fVar11 - fVar1;
          *(undefined4 *)(puVar14 + 0x19) = 0;
          dVar32 = (double)(float)(3.141592502593994 - dVar33);
          if (dVar33 - (double)(float)(3.141592502593994 - dVar33) < 0.0) {
            dVar32 = dVar33;
          }
          dVar38 = (double)(float)(-3.141592502593994 - dVar33);
          if ((double)(float)(-3.141592502593994 - dVar33) - dVar32 < 0.0) {
            dVar38 = dVar32;
          }
          dVar32 = (double)(float)(dVar38 * dVar38);
          dVar34 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar38));
          dVar33 = (double)(float)(dVar32 * dVar34);
          *(float *)((int)puVar14 + 0xc4) =
               ((float)(dVar32 * dVar33) * 2.601887e-06 +
               (float)(dVar33 * -0.0001980741071747616 +
                      (double)(float)(dVar34 * 0.008333025500178337 +
                                     (double)(float)((double)(float)(dVar32 * dVar38) *
                                                     -0.16666656732559204 + dVar38)))) *
               SQRT(fVar11 * fVar11 + fVar8 * fVar8) * 0.5;
          fastfunc::FastVecAdd(uVar22 - 0x120,uVar22 - 0x130,&g_heroPosition);
          *(undefined4 *)(puVar14 + 0x10) = *(undefined4 *)(puVar14 + 0x1a);
          *(undefined4 *)((int)puVar14 + 0x84) = *(undefined4 *)((int)puVar14 + 0xd4);
          *(undefined4 *)(puVar14 + 0x11) = *(undefined4 *)(puVar14 + 0x1b);
          *(undefined4 *)((int)puVar14 + 0x8c) = *(undefined4 *)((int)puVar14 + 0xdc);
        }
        uVar37 = 0x3ee4f8b580000000;
        dVar32 = (double)(DAT_0071f418 * 11.0);
        if ((g_downButtons & (L1|L2)) != 0) {
          dVar33 = (double)fastfunc::FastIntToDouble(g_goldWeaponsArray.bombGlove);
          dVar36 = (double)(float)(dVar33 * 2.5);
        }
        mobyupdate_helpers::M192_002daa30
                  (dVar32,uVar37,(double)(float)(dVar36 + 8.5),param_1,uVar22 - 0x170,uVar22 - 0x160
                  );
        *(float *)(puVar14 + 0x12) = *(float *)(puVar14 + 0x12) * 0.65;
        *(float *)((int)puVar14 + 0x94) = *(float *)((int)puVar14 + 0x94) * 0.65;
        *(float *)(puVar14 + 0x13) = *(float *)(puVar14 + 0x13) * 0.65;
        *pfVar12 = *pfVar12 * 0.35;
        pfVar12[1] = pfVar12[1] * 0.35;
        pfVar12[2] = pfVar12[2] * 0.35;
        fastfunc::FastVecAdd(uVar22 - 0x110,uVar30,uVar22 - 0x160);
        *pfVar12 = *(float *)(puVar14 + 0x1c);
        pfVar12[1] = *(float *)((int)puVar14 + 0xe4);
        pfVar12[2] = *(float *)(puVar14 + 0x1d);
        pfVar12[3] = *(float *)((int)puVar14 + 0xec);
      }
    }
  }
  else {
    *pfVar12 = *pfVar12 + DAT_00969de0;
    pfVar12[1] = pfVar12[1] + DAT_00969de4;
    pfVar12[2] = pfVar12[2] + DAT_00969de8;
  }
  pMVar20 = g_heroMobyPtr;
  auVar39 = ZEXT416(0xffffffff);
  auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
  auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
  auVar39 = loadVectorLeftIndexed(0x4c,0x200f78);
  auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar39 = vectorMultiplyAddFloatingPoint
                      (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,auVar40
                      );
  auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
  auVar39 = vectorSplatHalfWord(auVar39,1);
  uVar13 = storeVectorElementHalfWordIndexed(auVar39,0x54,uVar30);
  *(undefined2 *)(pfVar12 + 0x15) = uVar13;
  *(float *)(param_2 + 0x10) = *param_1;
  *(float *)(param_2 + 0x14) = param_1[1];
  *(float *)(param_2 + 0x18) = param_1[2];
  *(float *)(param_2 + 0x1c) = param_1[3];
  *(f32 *)(puVar14 + 0xe) = (pMVar20->pos).x;
  *(f32 *)((int)puVar14 + 0x74) = (pMVar20->pos).y;
  fVar1 = param_1[2];
  *(f32 *)(puVar14 + 0xf) = (pMVar20->pos).z;
  fVar10 = (pMVar20->pos).w;
  *(float *)(puVar14 + 0xf) = fVar1;
  *(f32 *)((int)puVar14 + 0x7c) = fVar10;
  iVar25 = collproc::CollLine(uVar22 - 0x180,param_1,0,pMVar20,0);
  PVar21 = g_heroState;
  if (iVar25 != 0) {
    *(undefined1 *)(param_2 + 0xbc) = 1;
    *(float *)(param_2 + 0x10) = CollOutput.ip.x;
    *(float *)(param_2 + 0x14) = CollOutput.ip.y;
    *(float *)(param_2 + 0x18) = CollOutput.ip.z;
    *(float *)(param_2 + 0x1c) = CollOutput.ip.w;
  }
  if ((g_goldWeaponsArray.bombGlove != '\0') && (PVar21 == FIRST_PERSON_VIEW)) {
    *pfVar12 = *pfVar12 * 1.5;
    pfVar12[1] = pfVar12[1] * 1.5;
    pfVar12[2] = pfVar12[2] * 0.6666667;
  }
  return;
}



//==== 00201da8  ns=mobyupdate_helpers  size=0xd08
// sig: undefined M121_00201da8(void)
// callers(1): 00202b98 mobyupdate_unsorted::UpdateMoby_121
// callees(8): 00057820 collproc::CollLine; 00060780 collproc::CollHotspot; 0006d720 RegisterFuncForMoby; 000ffb70 mobyutil::GetGroundZ; 001122ac mobyutil::MB_GetPlatformParent; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 00502a64 fastfunc::FastVecSub

undefined8 mobyupdate_helpers::M121_00201da8(float *param_1,MobyInstance *param_2,int param_3)

{
  bool bVar1;
  u8 uVar2;
  f32 fVar3;
  f32 fVar4;
  f32 fVar5;
  f32 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  short sVar13;
  MobyInstance *pMVar14;
  undefined4 uVar15;
  ulonglong *puVar16;
  int iVar17;
  uint uVar18;
  bool bVar19;
  bool bVar20;
  PlayerState PVar21;
  ulonglong uVar22;
  longlong lVar23;
  int iVar25;
  undefined8 uVar24;
  float *pfVar27;
  longlong lVar26;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  MobyInstance *pMVar30;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar31;
  longlong lVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  ulonglong in_f22;
  double dVar36;
  ulonglong in_f23;
  double dVar37;
  ulonglong in_f24;
  double dVar38;
  ulonglong in_f25;
  double dVar39;
  ulonglong in_f26;
  double dVar40;
  ulonglong in_f27;
  double dVar41;
  ulonglong in_f28;
  double dVar42;
  ulonglong in_f29;
  double dVar43;
  ulonglong in_f30;
  double dVar44;
  ulonglong in_f31;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  
  uVar22 = ZEXT48(&stack0x00000000);
  lVar32 = uVar22 - 0x1e0;
  puVar16 = (ulonglong *)lVar32;
  *puVar16 = uVar22;
  puVar16[0x3e] = in_LR;
  puVar16[0x32] = in_f22;
  puVar16[0x33] = in_f23;
  puVar16[0x34] = in_f24;
  puVar16[0x35] = in_f25;
  puVar16[0x36] = in_f26;
  puVar16[0x37] = in_f27;
  puVar16[0x38] = in_f28;
  puVar16[0x39] = in_f29;
  puVar16[0x3a] = in_f30;
  puVar16[0x3b] = in_f31;
  puVar16[0x2c] = unaff_r26;
  puVar16[0x2e] = unaff_r28;
  bVar20 = false;
  puVar16[0x31] = unaff_r31;
  puVar16[0x2b] = unaff_r25;
  puVar16[0x30] = unaff_r30;
  puVar16[0x2d] = unaff_r27;
  bVar19 = false;
  puVar16[0x2f] = unaff_r29;
  PVar21 = g_heroState;
  puVar16[0x2a] = unaff_r24;
  puVar16[0x29] = unaff_r23;
  if ((PVar21 == MOVEMENT_LOCKED) || (g_gameMode != GAME_MODE_NORMAL)) {
    return 0;
  }
  fVar3 = (param_2->pos).x;
  fVar4 = (param_2->pos).y;
  *(f32 *)(puVar16 + 0x10) = fVar3;
  fVar5 = (param_2->pos).z;
  *(f32 *)((int)puVar16 + 0x84) = fVar4;
  fVar6 = (param_2->pos).w;
  uVar2 = param_2->state;
  *(f32 *)(puVar16 + 0x11) = fVar5;
  *(f32 *)((int)puVar16 + 0x8c) = fVar6;
  fVar11 = DAT_0096a350;
  if (uVar2 == '\0') {
    fVar10 = ABS(DAT_0096a350);
    fVar9 = ABS(DAT_0096a354);
    uVar18 = (uint)DAT_0096a354 >> 0x1d;
    dVar45 = -0.3619680106639862;
    *(float *)(puVar16 + 0x1d) = fVar10 - fVar9;
    dVar36 = 0.0;
    dVar37 = 0.7853981852531433;
    uVar28 = (ulonglong)((uint)fVar11 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar16 + 0x1d) >> 0x1e) & 2 | (ulonglong)uVar18 & 4;
    fVar11 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar28 << 2));
    fVar12 = fVar10;
    if (*(float *)(puVar16 + 0x1d) - 0.0 < 0.0) {
      fVar12 = fVar9;
    }
    fVar7 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
    if (*(float *)(puVar16 + 0x1d) - 0.0 < 0.0) {
      fVar9 = fVar10;
    }
    dVar33 = dVar36;
    if (0.0 < fVar12) {
      lVar23 = uVar22 - 0x1d0;
      lVar26 = uVar22 - 0xd4;
      lVar29 = uVar22 - 0xc4;
      lVar31 = 2;
      fVar12 = (fVar9 - fVar12) / (fVar9 + fVar12);
      fVar9 = fVar12 * fVar12;
      *(float *)(puVar16 + 0x23) = fVar12;
      *(float *)(puVar16 + 0x22) = fVar12;
      *(float *)((int)puVar16 + 0x114) = fVar12;
      *(float *)((int)puVar16 + 0x10c) = fVar12;
      fVar12 = fVar9 * fVar9;
      *(float *)(puVar16 + 0x22) = *(float *)(puVar16 + 0x22) * fVar9;
      *(float *)((int)puVar16 + 0x114) = *(float *)((int)puVar16 + 0x114) * fVar12;
      *(float *)(puVar16 + 0x23) = *(float *)(puVar16 + 0x23) * fVar12 * fVar9;
      do {
        *(float *)((int)lVar23 + 0x10c) = *(float *)((int)lVar23 + 0xfc) * fVar12 * fVar12;
        iVar25 = (int)lVar26;
        lVar23 = lVar23 + 8;
        lVar26 = lVar26 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar25 + 4) * fVar12 * fVar12;
        lVar29 = lVar29 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar29 = uVar22 - 0xd4;
      pfVar27 = (float *)&DAT_007358e0;
      lVar23 = lVar32;
      lVar26 = lVar29;
      do {
        fVar12 = *pfVar27;
        fVar9 = pfVar27[1];
        pfVar27 = pfVar27 + 2;
        *(float *)((int)lVar23 + 0x10c) = *(float *)((int)lVar23 + 0x10c) * fVar12;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar9;
        lVar26 = lVar26 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar26 = 2;
      lVar23 = lVar32;
      do {
        iVar25 = (int)lVar23;
        lVar23 = lVar23 + 0x10;
        iVar17 = (int)lVar29;
        lVar29 = lVar29 + 0x10;
        dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar25 + 0x10c)) +
                          *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc)
                         );
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar11 + fVar7);
    }
    dVar33 = (double)fastfunc::FastWrapRot(-0.361968,(float)dVar33);
    fVar9 = DAT_0096a350;
    dVar44 = 3.141592502593994;
    fVar11 = (float)(dVar33 + 1.570796251296997);
    dVar43 = -3.141592502593994;
    dVar35 = ABS((double)DAT_0096a350);
    dVar42 = -0.16666656732559204;
    dVar33 = ABS((double)DAT_0096a354);
    dVar41 = 0.008333025500178337;
    dVar40 = -0.0001980741071747616;
    dVar39 = 2.601886990305502e-06;
    dVar38 = 0.8590390086174011;
    uVar18 = (uint)DAT_0096a354 >> 0x1d;
    fVar12 = 3.1415925 - fVar11;
    if (fVar11 - (3.1415925 - fVar11) < 0.0) {
      fVar12 = fVar11;
    }
    *(float *)((int)puVar16 + 0xe4) = (float)(dVar35 - dVar33);
    fVar10 = -3.1415925 - fVar11;
    if ((-3.1415925 - fVar11) - fVar12 < 0.0) {
      fVar10 = fVar12;
    }
    fVar7 = fVar10 * fVar10;
    uVar28 = (ulonglong)((uint)fVar9 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar16 + 0xe4) >> 0x1e) & 2 | (ulonglong)uVar18 & 4;
    fVar11 = fVar7 * fVar7 * fVar10;
    fVar12 = fVar7 * fVar11;
    dVar34 = dVar35;
    if ((double)*(float *)((int)puVar16 + 0xe4) - dVar36 < 0.0) {
      dVar34 = dVar33;
    }
    if ((double)*(float *)((int)puVar16 + 0xe4) - dVar36 < 0.0) {
      dVar33 = dVar35;
    }
    *(float *)(puVar16 + 0xe) =
         (fVar7 * fVar12 * 2.601887e-06 +
         fVar12 * -0.0001980741 + fVar11 * 0.0083330255 + fVar7 * fVar10 * -0.16666657 + fVar10) *
         0.859039;
    fVar12 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar28 << 2));
    fVar11 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
    if (dVar36 < dVar34) {
      lVar23 = uVar22 - 0x1d0;
      lVar26 = uVar22 - 0xf4;
      lVar29 = uVar22 - 0xe4;
      lVar31 = 2;
      fVar9 = (float)(dVar33 - dVar34) / (float)(dVar33 + dVar34);
      fVar10 = fVar9 * fVar9;
      *(float *)(puVar16 + 0x1f) = fVar9;
      *(float *)(puVar16 + 0x1e) = fVar9;
      *(float *)((int)puVar16 + 0xf4) = fVar9;
      *(float *)((int)puVar16 + 0xec) = fVar9;
      fVar9 = fVar10 * fVar10;
      *(float *)(puVar16 + 0x1e) = *(float *)(puVar16 + 0x1e) * fVar10;
      *(float *)((int)puVar16 + 0xf4) = *(float *)((int)puVar16 + 0xf4) * fVar9;
      *(float *)(puVar16 + 0x1f) = *(float *)(puVar16 + 0x1f) * fVar9 * fVar10;
      do {
        *(float *)((int)lVar23 + 0xec) = *(float *)((int)lVar23 + 0xdc) * fVar9 * fVar9;
        iVar25 = (int)lVar26;
        lVar23 = lVar23 + 8;
        lVar26 = lVar26 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar25 + 4) * fVar9 * fVar9;
        lVar29 = lVar29 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar29 = uVar22 - 0xf4;
      pfVar27 = (float *)&DAT_007358e0;
      lVar23 = lVar32;
      lVar26 = lVar29;
      do {
        fVar9 = *pfVar27;
        fVar10 = pfVar27[1];
        pfVar27 = pfVar27 + 2;
        *(float *)((int)lVar23 + 0xec) = *(float *)((int)lVar23 + 0xec) * fVar9;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar10;
        lVar26 = lVar26 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar26 = 2;
      lVar23 = lVar32;
      do {
        iVar25 = (int)lVar23;
        iVar17 = (int)lVar29;
        lVar23 = lVar23 + 0x10;
        lVar29 = lVar29 + 0x10;
        dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar25 + 0xec)) +
                          *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc)
                         );
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      dVar36 = (double)((float)(dVar36 + dVar37) * fVar12 + fVar11);
    }
    dVar37 = (double)fastfunc::FastWrapRot((float)dVar45,(float)dVar36);
    fVar11 = g_heroPosition.y;
    dVar36 = (double)(float)(dVar44 - dVar37);
    if (dVar37 - (double)(float)(dVar44 - dVar37) < 0.0) {
      dVar36 = dVar37;
    }
    dVar33 = (double)(float)(dVar43 - dVar37);
    if ((double)(float)(dVar43 - dVar37) - dVar36 < 0.0) {
      dVar33 = dVar36;
    }
    fVar12 = *(float *)(puVar16 + 0xe) + g_heroPosition.x;
    *(undefined4 *)(puVar16 + 0xf) = 0;
    dVar35 = (double)(float)(dVar33 * dVar33);
    *(float *)(puVar16 + 0xe) = fVar12;
    fVar9 = g_heroPosition.z;
    dVar36 = (double)*param_1;
    dVar45 = (double)param_1[1];
    dVar37 = (double)param_1[2];
    bVar1 = hero::g_heroStateType == 0xf;
    dVar43 = (double)(float)(dVar35 * (double)(float)(dVar35 * dVar33));
    dVar44 = (double)(float)(dVar35 * dVar43);
    fVar12 = (float)((double)(float)((double)(float)(dVar35 * dVar44) * dVar39 +
                                    (double)(float)(dVar44 * dVar40 +
                                                   (double)(float)(dVar43 * dVar41 +
                                                                  (double)(float)((double)(float)(
                                                  dVar35 * dVar33) * dVar42 + dVar33)))) * dVar38);
    *(float *)((int)puVar16 + 0x74) = fVar12;
    iVar25 = g_standingOnMoby;
    *(float *)((int)puVar16 + 0x74) = fVar12 + fVar11;
    *(float *)(puVar16 + 0xf) = fVar9 + 0.49082;
    if (bVar1) {
      dVar36 = (double)(float)(dVar36 + (double)DAT_00969de0);
      dVar45 = (double)(float)(dVar45 + (double)DAT_00969de4);
      dVar37 = (double)(float)(dVar37 + (double)DAT_00969de8);
    }
    if (((iVar25 != 0) && (iVar25 = mobyutil::MB_GetPlatformParent(), iVar25 != 0)) &&
       (param_3 != 0)) {
      dVar36 = (double)(float)(dVar36 + (double)DAT_00969de0);
      dVar45 = (double)(float)(dVar45 + (double)DAT_00969de4);
      dVar37 = (double)(float)(dVar37 + (double)DAT_00969de8);
    }
    auVar46 = ZEXT416(0xffffffff);
    auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
    auVar47 = vectorShiftLeftIntegerWord(auVar46,auVar46);
    auVar46 = loadVectorLeftIndexed(0x30,0x201d54);
    auVar46 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar48 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar46 = vectorMultiplyAddFloatingPoint
                        (auVar48,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,
                         auVar47);
    auVar46 = vectorConvertToSignedFixedPointWordSaturate(auVar46,0);
    auVar46 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar15 = storeVectorElementWordIndexed
                       (auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,0xe0,lVar32);
    *(undefined4 *)(puVar16 + 0x1c) = uVar15;
  }
  else {
    sVar13 = *(short *)(param_1 + 0x15);
    dVar36 = (double)*param_1;
    dVar45 = (double)param_1[1];
    iVar25 = *(int *)((int)param_1[0x14] + 0x78);
    *(f32 *)(puVar16 + 0xe) = fVar3;
    *(f32 *)((int)puVar16 + 0x74) = fVar4;
    *(f32 *)(puVar16 + 0xf) = fVar5;
    *(f32 *)((int)puVar16 + 0x7c) = fVar6;
    dVar37 = (double)param_1[2];
    *(int *)(puVar16 + 0x1c) = (int)sVar13;
    if (*(int *)(iVar25 + 0x50) != 0) {
      *(undefined2 *)((int)param_1 + 0x56) = 1;
    }
  }
  pMVar14 = g_heroMobyPtr;
  *(f32 *)(puVar16 + 0x12) = (g_heroMobyPtr->pos).x;
  *(f32 *)((int)puVar16 + 0x94) = (pMVar14->pos).y;
  *(f32 *)(puVar16 + 0x13) = (pMVar14->pos).z;
  fVar3 = (pMVar14->pos).w;
  *(undefined4 *)(puVar16 + 0x13) = *(undefined4 *)(puVar16 + 0xf);
  *(f32 *)((int)puVar16 + 0x9c) = fVar3;
  iVar25 = collproc::CollLine(uVar22 - 0x150,uVar22 - 0x170,0x10,pMVar14,0);
  if (iVar25 != 0) {
    iVar25 = collproc::CollHotspot();
    fVar11 = animationSpeed;
    if ((iVar25 != 0) || (0.0 < dVar37)) {
      if ((CollOutput.pMoby == (MobyInstance *)0x0) || (0 < CollOutput.poly)) {
        if (0 < CollOutput.poly) {
          bVar19 = true;
          param_1[4] = CollOutput.ip.x;
          param_1[5] = CollOutput.ip.y;
          param_1[6] = CollOutput.ip.z;
          param_1[7] = CollOutput.ip.w;
        }
      }
      else {
        if ((CollOutput.pMoby == g_heroMobyPtr) ||
           (CollOutput.pMoby == (MobyInstance *)param_1[0x14])) {
          puVar16[0x26] = (longlong)(int)(animationSpeed * 300.5);
          puVar16[0x26] = (longlong)(int)(fVar11 * 10.5);
          if (*(int *)((int)puVar16 + 0x134) - *(int *)((int)puVar16 + 0x134) <=
              *(int *)(puVar16 + 0x1c)) goto LAB_002025e8;
        }
        fVar11 = 0.0;
        *(undefined4 *)(puVar16 + 0x14) = 0;
        *(undefined4 *)((int)puVar16 + 0xa4) = 0;
        pMVar30 = CollOutput.pMoby;
        dVar35 = 0.5;
        pMVar14 = (MobyInstance *)param_1[0x18];
        *(undefined4 *)(puVar16 + 0x15) = 0x3f000000;
        *(undefined4 *)((int)puVar16 + 0xac) = 0;
        dVar33 = dVar35;
        if (pMVar14 == pMVar30) {
          param_1[0x19] = (float)((int)param_1[0x19] + 1);
          fastfunc::FastVecSub(uVar22 - 0x130,&pMVar30->pos,param_1 + 0xc);
          param_1[0x10] = *(float *)(puVar16 + 0x16);
          param_1[0x11] = *(float *)((int)puVar16 + 0xb4);
          param_1[0x12] = *(float *)(puVar16 + 0x17);
          param_1[0x13] = *(float *)((int)puVar16 + 0xbc);
          fVar10 = *(float *)(puVar16 + 0x14);
          fVar11 = *(float *)((int)puVar16 + 0xa4);
          dVar35 = (double)*(float *)(puVar16 + 0x15);
          fVar7 = ((CollOutput.pMoby)->pos).x;
          fVar8 = ((CollOutput.pMoby)->pos).y;
          fVar12 = ((CollOutput.pMoby)->pos).z;
          fVar9 = ((CollOutput.pMoby)->pos).w;
          pMVar30 = CollOutput.pMoby;
        }
        else {
          param_1[0x19] = 0.0;
          param_1[0x18] = (float)pMVar30;
          fVar7 = (pMVar30->pos).x;
          fVar8 = (pMVar30->pos).y;
          fVar12 = (pMVar30->pos).z;
          fVar9 = (pMVar30->pos).w;
          fVar10 = fVar11;
        }
        param_1[0xc] = fVar7;
        bVar20 = true;
        param_1[0xd] = fVar8;
        param_1[0xe] = fVar12;
        param_1[0xf] = fVar9;
        fVar12 = (pMVar30->pos).x;
        param_1[4] = fVar12;
        fVar9 = (pMVar30->pos).y;
        param_1[5] = fVar9;
        fVar7 = (pMVar30->pos).z;
        param_1[6] = fVar7;
        param_1[7] = (pMVar30->pos).w;
        *(float *)(puVar16 + 0x14) = fVar10 + fVar12;
        *(float *)((int)puVar16 + 0xa4) = fVar11 + fVar9;
        *(float *)(puVar16 + 0x15) = (float)(dVar35 + (double)fVar7);
        mobyutil::GetGroundZ(dVar33,uVar22 - 0x140,0);
        bVar19 = true;
      }
    }
  }
LAB_002025e8:
  if ((g_goldWeaponsArray.bombGlove != '\0') && (g_heroState == FIRST_PERSON_VIEW)) {
    dVar36 = (double)(float)(dVar36 * 1.5);
    dVar45 = (double)(float)(dVar45 * 1.5);
    dVar37 = (double)(float)(dVar37 * 0.6666666865348816);
  }
  *(undefined4 *)(puVar16 + 0x12) = *(undefined4 *)(puVar16 + 0xe);
  *(undefined4 *)((int)puVar16 + 0x94) = *(undefined4 *)((int)puVar16 + 0x74);
  *(undefined4 *)(puVar16 + 0x13) = *(undefined4 *)(puVar16 + 0xf);
  *(undefined4 *)((int)puVar16 + 0x9c) = *(undefined4 *)((int)puVar16 + 0x7c);
  dVar40 = 11.0;
  dVar33 = 0.0;
  dVar39 = 2.0;
  dVar38 = 300.5;
  dVar35 = 10.5;
  do {
    while( true ) {
      do {
        do {
          iVar25 = fastfunc::FastDecTimerS32(uVar22 - 0x100);
          if (iVar25 != 0 || bVar19) goto LAB_002028d4;
          fVar11 = *(float *)(puVar16 + 0xe);
          fVar12 = *(float *)((int)puVar16 + 0x74);
          fVar9 = *(float *)(puVar16 + 0xf);
          lVar32 = 10;
          *(undefined4 *)((int)puVar16 + 0x8c) = *(undefined4 *)((int)puVar16 + 0x7c);
          *(float *)(puVar16 + 0x10) = fVar11;
          *(float *)((int)puVar16 + 0x84) = fVar12;
          *(float *)(puVar16 + 0x11) = fVar9;
          do {
            fVar11 = (float)((double)fVar11 + dVar36);
            fVar12 = (float)((double)fVar12 + dVar45);
            fVar9 = (float)((double)fVar9 + dVar37);
            dVar37 = -(double)(float)((double)DAT_0071f418 * dVar40 - dVar37);
            *(float *)(puVar16 + 0xe) = fVar11;
            *(float *)((int)puVar16 + 0x74) = fVar12;
            *(float *)(puVar16 + 0xf) = fVar9;
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
          iVar25 = collproc::CollLine(uVar22 - 0x160,uVar22 - 0x170,0x10,param_2,0);
        } while (iVar25 == 0);
        iVar25 = collproc::CollHotspot();
        dVar41 = (double)animationSpeed;
      } while ((iVar25 == 0) && (dVar33 < dVar37));
      if ((CollOutput.pMoby != (MobyInstance *)0x0) &&
         ((CollOutput.poly < 1 &&
          ((double)(*(float *)(puVar16 + 0xf) - *(float *)(puVar16 + 0x13)) < dVar39)))) break;
      if (0 < CollOutput.poly) {
        param_1[4] = CollOutput.ip.x;
        param_1[5] = CollOutput.ip.y;
        param_1[6] = CollOutput.ip.z;
        param_1[7] = CollOutput.ip.w;
        goto LAB_002028d4;
      }
    }
    if ((CollOutput.pMoby != g_heroMobyPtr) && (CollOutput.pMoby != (MobyInstance *)param_1[0x14]))
    break;
    puVar16[0x26] = (longlong)(int)(dVar41 * dVar38);
    puVar16[0x26] = (longlong)(int)(dVar41 * dVar35);
  } while (*(int *)((int)puVar16 + 0x134) - *(int *)((int)puVar16 + 0x134) <=
           *(int *)(puVar16 + 0x1c));
  *(undefined4 *)(puVar16 + 0x18) = 0;
  *(undefined4 *)((int)puVar16 + 0xc4) = 0;
  dVar37 = 0.5;
  *(undefined4 *)(puVar16 + 0x19) = 0x3f000000;
  pMVar30 = CollOutput.pMoby;
  pMVar14 = (MobyInstance *)param_1[0x18];
  *(undefined4 *)((int)puVar16 + 0xcc) = 0;
  dVar36 = dVar37;
  if (pMVar14 == pMVar30) {
    param_1[0x19] = (float)((int)param_1[0x19] + 1);
    fastfunc::FastVecSub(uVar22 - 0x110,&pMVar30->pos,param_1 + 0xc);
    param_1[0x10] = *(float *)(puVar16 + 0x1a);
    param_1[0x11] = *(float *)((int)puVar16 + 0xd4);
    param_1[0x12] = *(float *)(puVar16 + 0x1b);
    param_1[0x13] = *(float *)((int)puVar16 + 0xdc);
    dVar33 = (double)*(float *)(puVar16 + 0x18);
    dVar45 = (double)*(float *)((int)puVar16 + 0xc4);
    dVar37 = (double)*(float *)(puVar16 + 0x19);
    fVar10 = ((CollOutput.pMoby)->pos).x;
    fVar9 = ((CollOutput.pMoby)->pos).y;
    fVar11 = ((CollOutput.pMoby)->pos).z;
    fVar12 = ((CollOutput.pMoby)->pos).w;
    pMVar30 = CollOutput.pMoby;
  }
  else {
    param_1[0x18] = (float)pMVar30;
    param_1[0x19] = 0.0;
    fVar10 = (pMVar30->pos).x;
    fVar9 = (pMVar30->pos).y;
    fVar11 = (pMVar30->pos).z;
    fVar12 = (pMVar30->pos).w;
    dVar45 = dVar33;
  }
  param_1[0xc] = fVar10;
  bVar20 = true;
  param_1[0xd] = fVar9;
  param_1[0xe] = fVar11;
  param_1[0xf] = fVar12;
  fVar11 = (pMVar30->pos).x;
  param_1[4] = fVar11;
  fVar12 = (pMVar30->pos).y;
  param_1[5] = fVar12;
  fVar9 = (pMVar30->pos).z;
  param_1[6] = fVar9;
  param_1[7] = (pMVar30->pos).w;
  *(float *)(puVar16 + 0x18) = (float)(dVar33 + (double)fVar11);
  *(float *)((int)puVar16 + 0xc4) = (float)(dVar45 + (double)fVar12);
  *(float *)(puVar16 + 0x19) = (float)(dVar37 + (double)fVar9);
  mobyutil::GetGroundZ(dVar36,uVar22 - 0x120,0);
LAB_002028d4:
  if ((*(int *)(puVar16 + 0x1c) == 0) ||
     ((param_3 == 0 &&
      ((CollOutput.pMoby == (MobyInstance *)0x0 ||
       (iVar25 = mobyutil::MB_GetPlatformParent(), iVar25 == 0)))))) {
    uVar24 = 0;
  }
  else {
    if (((param_3 != 2) || (CollOutput.pMoby == (MobyInstance *)0x0)) ||
       (iVar25 = mobyutil::MB_GetPlatformParent(), iVar25 == 0)) {
      RegisterFuncForMoby(&PTR_M1209_00200608_007093a8,param_2);
    }
    if (((!bVar20) && (fVar11 = param_1[0x18], fVar11 != 0.0)) &&
       ((*(char *)((int)fVar11 + 0x20) == -3 || *(char *)((int)fVar11 + 0x20) == -2 ||
        (((*(ushort *)((int)fVar11 + 0x34) & 0x1000) == 0 ||
         (fVar11 = param_1[0x19], puVar16[0x26] = (longlong)(int)(animationSpeed * 30.5),
         *(int *)((int)puVar16 + 0x134) < (int)fVar11)))))) {
      param_1[0x19] = 0.0;
      param_1[0x18] = 0.0;
    }
    param_1[8] = CollOutput.normal.x;
    param_1[9] = CollOutput.normal.y;
    param_1[10] = CollOutput.normal.z;
    param_1[0xb] = CollOutput.normal.w;
    fVar10 = GameCamera.posX;
    fVar11 = param_1[4] - GameCamera.posX;
    fVar12 = param_1[5] - GameCamera.posY;
    *(float *)((int)puVar16 + 0x8c) = param_1[7];
    fVar9 = param_1[6] - GameCamera.posZ;
    *(float *)(puVar16 + 0x10) = fVar11;
    *(float *)((int)puVar16 + 0x84) = fVar12;
    fVar11 = fVar11 * 0.95;
    fVar12 = fVar12 * 0.95;
    fVar9 = fVar9 * 0.95;
    uVar24 = 1;
    *(float *)(puVar16 + 0x10) = fVar11;
    *(float *)((int)puVar16 + 0x84) = fVar12;
    *(float *)(puVar16 + 0x11) = fVar9;
    param_1[4] = fVar11 + fVar10;
    param_1[5] = fVar12 + GameCamera.posY;
    param_1[6] = fVar9 + GameCamera.posZ;
  }
  return uVar24;
}



//==== 00202b98  ns=mobyupdate_unsorted  size=0x1f1c
// sig: undefined UpdateMoby_121(MobyInstance * moby)
// callers(0): 
// callees(44): 00057820 collproc::CollLine; 0005e598 collproc::CollMobySphere; 00060780 collproc::CollHotspot; 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 000fea60 mobyutil::MB_randSphere; 000ffb70 mobyutil::GetGroundZ; 000ffc18 mobyutil::GetGroundZNoWater; 00105f40 mobyutil::CollWaterHeight; 00106738 mobyutil::TweenColor; 00107860 mobyutil::MB_DamageMobyList; 001099ec mobyutil::Lerp; 0010a610 mobyutil::ReorderRGB; 0010a668 mobyutil::ReorderRGB; 0010de78 mobyutil::MB_WrapRot; 001122ac mobyutil::MB_GetPlatformParent; 001206e8 partupd::SpawnPart_2; 00123390 partupd::SpawnPart_11; 00124e10 partupd::SpawnPart_15; 0012a440 partupd::SpawnPart_34; 0012ab08 partupd::SpawnPart_35; 00131e50 partupd::SpawnPart_64; 0015d12c sound::PlayMobySound; 0015d204 sound::sound_MobyPlay_oClass; 0017bd90 water::WaterTile_PutDrop; 00201da8 mobyupdate_helpers::M121_00201da8; 0020bb70 FUN_0020bb70; 003fda38 FUN_003fda38; 00456478 FUN_00456478; 004d4138 FUN_004d4138; 004fffb4 fastfunc::FastDecTimerS16; 00500608 fastfunc::FastVecNormalize; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor; 005e7f98 FUN_005e7f98

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Moby 121 */

void mobyupdate_unsorted::UpdateMoby_121(MobyInstance *moby)

{
  bool bVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  MobyModeBit MVar21;
  int iVar15;
  uint uVar16;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar17;
  undefined4 uVar18;
  longlong lVar14;
  int iVar19;
  int iVar20;
  int *r;
  short sVar22;
  byte bVar23;
  int *g;
  int *b;
  int iVar24;
  longlong lVar25;
  int iVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double in_f5;
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
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  undefined1 local_320 [16];
  undefined1 local_310 [16];
  float local_300;
  float local_2fc;
  float local_2f8;
  undefined1 local_2f0 [16];
  float local_2e0;
  float local_2dc;
  float local_2d8;
  undefined1 local_2d0 [16];
  undefined1 local_2c0 [16];
  undefined1 local_2b0 [16];
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  Vec4 local_290;
  float local_280;
  float local_27c;
  float local_278;
  float local_270;
  float local_26c;
  float local_268;
  undefined4 local_264;
  float local_260;
  float local_25c;
  float local_258;
  undefined4 local_254;
  float local_250;
  float local_24c;
  float local_248;
  undefined4 local_244;
  float afStack_240 [4];
  float local_230;
  float local_22c;
  float local_228;
  undefined4 local_224;
  f32 local_220;
  f32 local_21c;
  float local_218;
  f32 local_214;
  float local_210;
  float local_20c;
  float local_208;
  undefined4 local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  f32 local_1f0;
  f32 local_1ec;
  float local_1e8;
  f32 local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  MobyInstance *local_1c0;
  undefined *local_1bc;
  undefined1 local_1b8;
  undefined1 local_1b7;
  MOBY_OCLASSES local_1b6;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  int local_150 [18];
  longlong local_108;
  
  lVar6 = (longlong)(int)moby;
  uStack_194 = uRam007666fc;
  uStack_198 = uRam007666f8;
  uStack_19c = uRam007666f4;
  uStack_1a0 = _DAT_007666f0;
  uStack_184 = uRam0076670c;
  uStack_188 = uRam00766708;
  uStack_18c = uRam00766704;
  uStack_190 = _DAT_00766700;
  uStack_174 = uRam0076671c;
  uStack_178 = uRam00766718;
  uStack_17c = uRam00766714;
  uStack_180 = _DAT_00766710;
  uStack_164 = uRam0076672c;
  uStack_168 = uRam00766728;
  uStack_16c = uRam00766724;
  uStack_170 = _DAT_00766720;
  iVar24 = 0;
  uStack_154 = uRam0076673c;
  uStack_158 = uRam00766738;
  uStack_15c = uRam00766734;
  uStack_160 = _DAT_00766730;
  dVar38 = 0.0;
  local_300 = 0.0;
  local_2fc = 0.0;
  dVar43 = 2.0;
  local_2f8 = mobyutil::g_FrameTime * 2.0;
  pfVar3 = (float *)moby->pVar;
  bVar1 = moby->state != '\0';
  dVar42 = 1.0;
  if (((g_currentWeaponMoby != (MobyInstance *)0x0) && (g_currentWeaponMoby->oClass == BOMB_GLOVE))
     || (bVar1)) {
    if ((g_heroType == '\0') || (bVar1)) {
      if (((hero::g_heroInvisible == '\0') && (DAT_0096bd8f == '\0')) || (bVar1)) {
        MVar21 = moby->modeBits &
                 (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                  DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW
                  |TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
      }
      else {
        MVar21 = moby->modeBits | (UNK_40|DISABLED);
      }
      fVar48 = pfVar3[0x14];
      moby->modeBits = MVar21;
      if (((*(short *)((int)fVar48 + 0xa6) == 0xc0) && (*(short *)((int)pfVar3 + 0x56) == 0)) &&
         (0.0 < SQRT(pfVar3[2] * pfVar3[2] + *pfVar3 * *pfVar3 + pfVar3[1] * pfVar3[1]))) {
        if ((g_standingOnMoby == 0) || (iVar15 = mobyutil::MB_GetPlatformParent(), iVar15 == 0)) {
          mobyupdate_helpers::M121_00201da8(pfVar3,lVar6,1);
        }
        else {
          iVar15 = mobyupdate_helpers::M121_00201da8(pfVar3,lVar6,0);
          if (iVar15 == 0) {
            mobyupdate_helpers::M121_00201da8(pfVar3,lVar6,2);
          }
        }
      }
      if (moby->state == '\x01') {
        fastfunc::FastDecTimerS16((int)pfVar3 + 0x6a);
        dVar27 = (double)fastfunc::FastIntToDouble(*(undefined2 *)((int)pfVar3 + 0x6a));
        dVar41 = 30.5;
        local_108 = (longlong)(int)(animationSpeed * 30.5);
        dVar28 = (double)fastfunc::FastIntToDouble((int)(animationSpeed * 30.5));
        dVar27 = (double)(float)(dVar27 / dVar28);
        uVar16 = fastfunc::FastDoubleToInt((double)(float)(dVar27 * -127.0 + 255.0));
        dVar27 = (double)(float)(dVar27 * 64.0 + 64.0);
        uVar7 = fastfunc::FastDoubleToInt(dVar27);
        uVar8 = fastfunc::FastDoubleToInt(dVar27);
        sVar22 = *(short *)(pfVar3 + 0x1a);
        moby->field60_0x90 =
             (uint)((uVar7 & 0xffffffff) << 8) | uVar16 | (uint)((uVar8 & 0xffffffff) << 0x10) |
             0xff000000;
        if (((sVar22 == 0) &&
            (worldUpdateTime ==
             (((int)worldUpdateTime >> 3) +
             (uint)((int)worldUpdateTime < 0 && (worldUpdateTime & 7) != 0)) * 8)) &&
           (0 < DAT_0076666c)) {
          iVar15 = 0;
          do {
            in_f5 = (double)DAT_00766638;
            mobyutil::MB_randSphere
                      (dVar38,(double)(float)(in_f5 * (double)mobyutil::g_FrameTime),local_2b0);
            mobyutil::MB_randRangeFloat(DAT_0076664c,DAT_00766650);
            mobyutil::MB_randRangeFloat(DAT_00766654,DAT_00766658);
            uVar18 = DAT_00766660;
            uVar17 = DAT_0076665c;
            mobyutil::MB_randRangeFloat((float)dVar38,(float)dVar42);
            uVar9 = fastfunc::FastLerpColor(uVar17,uVar18);
            uVar18 = DAT_00766668;
            uVar17 = DAT_00766664;
            mobyutil::MB_randRangeFloat((float)dVar38,(float)dVar42);
            uVar10 = fastfunc::FastLerpColor(uVar17,uVar18);
            dVar27 = (double)mobyutil::MB_randRangeFloat((float)dVar38,(float)dVar42);
            local_108 = (longlong)DAT_0076663c;
            uVar11 = fastfunc::FastDoubleToInt
                               ((double)(animationSpeed *
                                        (float)((double)local_108 * dVar27 + dVar42)));
            local_108 = (longlong)DAT_00766640;
            dVar28 = (double)local_108;
            dVar27 = (double)mobyutil::MB_randRangeFloat(-DAT_00766648,DAT_00766648);
            uVar12 = fastfunc::FastDoubleToInt
                               ((double)(animationSpeed *
                                        (float)(dVar28 * (double)(float)(dVar27 + dVar42))));
            local_108 = (longlong)DAT_00766644;
            dVar28 = (double)local_108;
            dVar27 = (double)mobyutil::MB_randRangeFloat(-DAT_00766648,DAT_00766648);
            uVar13 = fastfunc::FastDoubleToInt
                               ((double)(animationSpeed *
                                        (float)(dVar28 * (double)(float)(dVar27 + dVar42))));
            local_108 = (longlong)(int)uVar12;
            partupd::SpawnPart_2(lVar6 + 0x10,local_2d0,local_2c0,uVar9,uVar10,uVar11,uVar12,uVar13)
            ;
            iVar15 = iVar15 + 1;
          } while (iVar15 < DAT_0076666c);
        }
        dVar27 = (double)fastfunc::FastWrapRot((moby->rotation).x,mobyutil::g_FrameTime * 2.0943952)
        ;
        (moby->rotation).x = (float)dVar27;
        dVar27 = (double)fastfunc::FastWrapRot((moby->rotation).y,mobyutil::g_FrameTime * 7.8539815)
        ;
        fVar48 = (moby->pos).x;
        (moby->rotation).y = (float)dVar27;
        sVar22 = *(short *)(pfVar3 + 0x1a);
        (moby->pos).x = fVar48 + *pfVar3;
        (moby->pos).y = (moby->pos).y + pfVar3[1];
        (moby->pos).z = (moby->pos).z + pfVar3[2];
        if (sVar22 == 0) {
          pfVar3[2] = -(DAT_0071f418 * 11.0 - pfVar3[2]);
        }
        else {
          dVar27 = 0.10000000149011612;
          pfVar3[2] = -(DAT_0071f418 * 11.0 * 0.1 - pfVar3[2]);
          local_108 = (longlong)(int)(animationSpeed * 6.5);
          iVar15 = mobyutil::MB_randInt((int)(animationSpeed * 6.5) + -1);
          if (iVar15 == 0) {
            fVar48 = mobyutil::CollWaterHeight(&(moby->pos).x,&local_2a0);
            dVar28 = (double)fVar48;
            local_2a0 = *pfVar3 * 0.25;
            local_29c = pfVar3[1] * 0.25;
            local_298 = pfVar3[2] * 0.25;
            local_294 = pfVar3[3];
            dVar27 = (double)mobyutil::MB_randRangeFloat(0.05,(float)dVar27);
            partupd::SpawnPart_34
                      ((double)(float)(dVar27 * 210000.0),dVar28,(Vec4 *)&moby->pos,&local_2a0);
          }
        }
        local_1bc = &DAT_00830000;
        dVar28 = 300.5;
        dVar27 = 10.5;
        local_108 = (longlong)(int)(animationSpeed * 10.5);
        if ((int)*(short *)(pfVar3 + 0x15) <
            (int)(animationSpeed * 300.5) - (int)(animationSpeed * 10.5)) {
          local_1bc = &DAT_00830001;
        }
        local_1b4 = 0x40000000;
        local_1d0 = *pfVar3;
        local_1b0 = 1;
        local_1cc = pfVar3[1];
        local_1c8 = pfVar3[2];
        local_1c4 = pfVar3[3];
        local_1c0 = moby;
        FUN_005e84c0(dVar42,&local_1d0,&local_1d0);
        local_1b6 = moby->oClass;
        local_1b7 = 1;
        local_1b8 = 2;
        local_1c8 = 1.0;
        local_1c4 = 5627.925;
        if (*(short *)(pfVar3 + 0x1a) != 0) {
          *(short *)(pfVar3 + 0x1a) = *(short *)(pfVar3 + 0x1a) + 1;
        }
        lVar25 = lVar6 + 0x10;
        iVar15 = collproc::CollLine(local_310,lVar25,0x10,lVar6,&local_1d0);
        if (iVar15 == 0) {
          iVar15 = fastfunc::FastDecTimerS16(pfVar3 + 0x15);
          if (iVar15 != 0) {
            moby->setByGroup = '\x01';
            local_300 = *pfVar3 + 0.0;
            local_2fc = pfVar3[1] + 0.0;
            local_2f8 = local_2f8 + pfVar3[2];
          }
        }
        else if (((*(short *)(pfVar3 + 0x1a) == 0) &&
                 (iVar15 = collproc::CollHotspot(), iVar15 == 0)) && ((int)pfVar3[2] < 0)) {
          water::WaterTile_PutDrop
                    ((moby->pos).x,(moby->pos).y,0.5,-0.35,WaterTiles,WaterTileCnt,(float)in_f5);
          pfVar3[3] = 0.0;
          pfVar3[1] = 0.0;
          *pfVar3 = 0.0;
          *(undefined2 *)(pfVar3 + 0x1a) = 1;
          pfVar3[2] = mobyutil::g_FrameTime * -1.5;
          local_290.x = (moby->pos).x;
          local_290.y = (moby->pos).y;
          local_290.z = CollOutput.ip.z;
          iVar15 = FUN_00456478(dVar43,&local_290);
          if (iVar15 != 0) {
            *(undefined1 *)(iVar15 + 0x23) = 0x70;
          }
          iVar15 = 0;
          dVar28 = 3.0;
          dVar27 = 6.5;
          do {
            dVar29 = (double)mobyutil::MB_randRot();
            dVar30 = (double)mobyutil::MB_randRangeFloat
                                       ((float)dVar38,
                                        (float)((double)mobyutil::g_FrameTime * dVar28));
            dVar31 = (double)mathfunc::cosf((float)dVar29);
            local_280 = (float)(dVar31 * dVar30);
            dVar29 = (double)FUN_005e8128(dVar29);
            local_27c = (float)(dVar29 * dVar30);
            dVar29 = (double)mobyutil::MB_randRangeFloat
                                       ((float)((double)mobyutil::g_FrameTime * dVar28),
                                        (float)((double)mobyutil::g_FrameTime * dVar27));
            local_278 = (float)dVar29;
            uVar17 = mobyutil::MB_randRange(0x5a,0x78);
            uVar18 = mobyutil::MB_randInt(2);
            partupd::SpawnPart_35(&local_290,&local_280,uVar18,uVar17);
            iVar15 = iVar15 + 1;
          } while (iVar15 < 0x10);
        }
        else if ((*(short *)(pfVar3 + 0x1a) != 0) || (iVar15 = collproc::CollHotspot(), iVar15 != 0)
                ) {
          if (CollOutput.pMoby == (MobyInstance *)0x0) {
            if (0 < CollOutput.poly) {
              moby->setByGroup = '\x01';
              (moby->pos).x = CollOutput.ip.x;
              (moby->pos).y = CollOutput.ip.y;
              (moby->pos).z = CollOutput.ip.z;
              (moby->pos).w = CollOutput.ip.w;
              fastfunc::FastVecNormalize(&local_300,pfVar3,0xa10980);
              FUN_005e7f98((double)(float)((double)mobyutil::g_FrameTime * dVar43),&local_300,
                           &local_300);
              FUN_005e7f98(dVar42,local_2f0,0xa10980);
            }
          }
          else if ((((CollOutput.pMoby != g_heroMobyPtr) &&
                    (CollOutput.pMoby != (MobyInstance *)pfVar3[0x14])) ||
                   (iVar15 = (int)((double)animationSpeed * dVar27), local_108 = (longlong)iVar15,
                   (int)*(short *)(pfVar3 + 0x15) < (int)((double)animationSpeed * dVar28) - iVar15)
                   ) && (((CollOutput.pMoby)->pUpdate != DAT_00735d00 ||
                         ((CollOutput.pMoby)->oClass == TRAIN_LOCOMOTIVE)))) {
            moby->setByGroup = '\x01';
            (moby->pos).x = CollOutput.ip.x;
            (moby->pos).y = CollOutput.ip.y;
            (moby->pos).z = CollOutput.ip.z;
            (moby->pos).w = CollOutput.ip.w;
            fastfunc::FastVecNormalize(&local_300,pfVar3,0xa10980);
            FUN_005e7f98((double)(float)((double)mobyutil::g_FrameTime * dVar43),&local_300,
                         &local_300);
            FUN_005e7f98(dVar42,local_2f0,0xa10980);
          }
        }
        if (moby->setByGroup != '\0') {
          dVar27 = (double)fastfunc::FastIntToDouble(g_goldWeaponsArray.bombGlove);
          dVar31 = (double)(float)(dVar27 + dVar42);
          dVar27 = (double)local_300 * dVar31;
          fVar4 = GameCamera.posY - (moby->pos).y;
          dVar28 = (double)local_2fc * dVar31;
          dVar29 = (double)local_2f8 * dVar31;
          fVar48 = GameCamera.posX - (moby->pos).x;
          fVar5 = GameCamera.posZ - (moby->pos).z;
          dVar30 = 20.5;
          local_108 = (longlong)(int)(animationSpeed * 20.5);
          dVar44 = (double)SQRT(fVar5 * fVar5 + fVar48 * fVar48 + fVar4 * fVar4);
          if ((int)*(short *)(pfVar3 + 0x1a) < (int)(animationSpeed * 20.5)) {
            uVar11 = collproc::CollMobySphere
                               ((double)(float)(dVar31 * 0.5),lVar25,&DAT_00202ab4,0x10,lVar6,0);
            uVar9._0_4_ = (moby->pos).x;
            uVar9._4_4_ = (moby->pos).y;
            uVar10._0_4_ = (moby->pos).z;
            uVar10._4_4_ = (moby->pos).w;
            mobyutil::MB_DamageMobyList
                      (dVar43,dVar42,dVar42,lVar6,1,uVar9,uVar10,&DAT_00a14a00,uVar11,0,
                       &DAT_00830000);
            moby->state = '\x02';
          }
          if (0x32 < numSpawnableMobys) {
            iVar15 = 0;
            dVar40 = -1.0;
            dVar39 = 3.5;
            dVar37 = 6.5;
            dVar36 = 60.5;
            dVar35 = 120.5;
            do {
              local_270 = 0.0;
              local_26c = 0.0;
              local_268 = 0.0;
              local_264 = 0;
              dVar32 = (double)mobyutil::MB_randRangeFloat((float)dVar40,(float)dVar42);
              local_270 = (float)dVar32;
              dVar32 = (double)mobyutil::MB_randRangeFloat((float)dVar40,(float)dVar42);
              local_26c = (float)dVar32;
              FUN_005e7f98((double)(local_268 * 1.0 + local_270 * 0.0 + (float)(dVar32 * 0.0)),
                           &local_2e0,local_2f0);
              local_270 = local_270 - local_2e0;
              local_26c = local_26c - local_2dc;
              local_268 = local_268 - local_2d8;
              mobyutil::MB_randRangeFloat((float)dVar38,(float)dVar42);
              FUN_005e7f98(&local_2e0,local_2f0);
              local_270 = local_270 + local_2e0;
              local_26c = local_26c + local_2dc;
              local_268 = local_268 + local_2d8;
              dVar32 = (double)mobyutil::MB_randRangeFloat((float)dVar39,(float)dVar37);
              FUN_005e7f98((double)((float)(dVar32 * dVar31) * mobyutil::g_FrameTime),&local_270,
                           &local_270);
              local_270 = local_270 + (float)dVar27;
              local_26c = local_26c + (float)dVar28;
              local_268 = local_268 + (float)dVar29;
              iVar26 = (int)((double)animationSpeed * dVar35);
              local_108 = (longlong)iVar26;
              uVar9 = mobyutil::MB_randRange((int)((double)animationSpeed * dVar36),iVar26);
              FUN_0020bb70(lVar25,&local_270,uVar9,0,g_goldWeaponsArray.bombGlove);
              iVar15 = iVar15 + 1;
            } while (iVar15 < 10);
          }
          dVar35 = (double)animationSpeed;
          sVar22 = *(short *)(pfVar3 + 0x1a);
          local_108 = (longlong)(int)(dVar35 * dVar30);
          if ((int)sVar22 < (int)(dVar35 * dVar30)) {
            if (0x14 < numSpawnableMobys) {
              iVar15 = 0;
              dVar40 = -1.0;
              dVar39 = 6.5;
              dVar37 = 10.0;
              dVar36 = 60.5;
              dVar35 = 90.5;
              do {
                local_250 = 0.0;
                local_24c = 0.0;
                local_248 = 0.0;
                local_244 = 0;
                dVar32 = (double)mobyutil::MB_randRangeFloat((float)dVar40,(float)dVar42);
                local_250 = (float)dVar32;
                dVar32 = (double)mobyutil::MB_randRangeFloat((float)dVar40,(float)dVar42);
                local_24c = (float)dVar32;
                FUN_005e7f98((double)(local_248 * 1.0 + local_250 * 0.0 + (float)(dVar32 * 0.0)),
                             &local_2e0,local_2f0);
                local_250 = local_250 - local_2e0;
                local_24c = local_24c - local_2dc;
                local_248 = local_248 - local_2d8;
                mobyutil::MB_randRangeFloat((float)dVar38,(float)dVar42);
                FUN_005e7f98(&local_2e0,local_2f0);
                local_250 = local_250 + local_2e0;
                local_24c = local_24c + local_2dc;
                local_248 = local_248 + local_2d8;
                dVar32 = (double)mobyutil::MB_randRangeFloat((float)dVar39,(float)dVar37);
                FUN_005e7f98((double)((float)(dVar32 * dVar31) * mobyutil::g_FrameTime),&local_250,
                             &local_250);
                local_250 = local_250 + (float)dVar27;
                local_24c = local_24c + (float)dVar28;
                local_248 = local_248 + (float)dVar29;
                iVar26 = (int)((double)animationSpeed * dVar35);
                local_108 = (longlong)iVar26;
                uVar9 = mobyutil::MB_randRange((int)((double)animationSpeed * dVar36),iVar26);
                FUN_0020bb70(lVar25,&local_250,uVar9,1,g_goldWeaponsArray.bombGlove);
                iVar15 = iVar15 + 1;
              } while (iVar15 < 4);
            }
            local_260 = 0.0;
            local_25c = 0.0;
            local_258 = 0.0;
            local_254 = 0;
            dVar28 = -1.0;
            dVar27 = (double)mobyutil::MB_randRangeFloat(-1.0,(float)dVar42);
            local_260 = (float)dVar27;
            dVar27 = (double)mobyutil::MB_randRangeFloat((float)dVar28,(float)dVar42);
            local_25c = (float)dVar27;
            dVar27 = (double)mobyutil::MB_randRangeFloat((float)dVar28,(float)dVar42);
            local_258 = (float)dVar27;
            dVar27 = dVar44 * 0.5;
            FUN_005e7f98((double)((float)(dVar44 * 0.20000000298023224) * mobyutil::g_FrameTime),
                         &local_260,&local_260);
            FUN_005e7f98((double)((float)(dVar44 * dVar43) * mobyutil::g_FrameTime),local_320,
                         local_320);
            local_260 = local_260 + fVar48;
            local_25c = local_25c + fVar4;
            local_258 = local_258 + (float)(dVar27 + (double)fVar5);
            dVar27 = 10.0;
            FUN_005e8e80((double)(mobyutil::g_FrameTime * 10.0),&local_260,&local_260);
            local_108 = (longlong)(int)(animationSpeed * 90.5);
            uVar9 = mobyutil::MB_randRange
                              ((int)(animationSpeed * 60.5),(int)(animationSpeed * 90.5));
            FUN_0020bb70(lVar25,&local_260,uVar9,1,g_goldWeaponsArray.bombGlove);
            iVar15 = 4;
            if (dVar44 < 6.0) {
              iVar15 = fastfunc::FastDoubleToInt(dVar44);
              iVar15 = iVar15 + 1;
            }
            dVar28 = dVar38;
            if (dVar44 - 7.0 < 0.0) {
              dVar28 = (double)(float)(7.0 - dVar44);
            }
            if (0 < iVar15) {
              iVar26 = 0;
              dVar37 = 8.0;
              dVar35 = 15.5;
              dVar36 = (double)(float)(dVar31 * 400000.0);
              dVar29 = 25.5;
              do {
                dVar39 = (double)mobyutil::MB_randRangeFloat((float)dVar37,(float)dVar27);
                dVar40 = (double)mobyutil::g_FrameTime;
                local_150[6] = 0x4f008fff;
                local_150[7] = 0x4f008fff;
                local_150[8] = 0x4f007fff;
                local_150[9] = 0x4f006fff;
                local_150[10] = 0x2fffffff;
                local_150[0xb] = 0x2fffffff;
                local_150[0xc] = 0x2f005f7f;
                local_150[0xd] = 0x2f004f7f;
                local_150[0xe] = 0x2f003f7f;
                local_150[0xf] = 0x2f00004f;
                dVar32 = (double)(float)((double)(float)(dVar39 * dVar31) * dVar40 -
                                        (double)(float)(dVar40 * dVar28));
                local_150[0x10] = 0x2f000000;
                local_150[0x11] = 0x3f000000;
                lVar14 = mobyutil::MB_randInt
                                   ((double)(float)(dVar39 * dVar31),dVar40,
                                    (double)(float)(dVar40 * dVar28),6);
                iVar19 = mobyutil::ReorderRGB
                                   (*(int *)((int)local_150 + (int)(lVar14 << 2) + 0x18),
                                    (uint)g_goldWeaponsArray.bombGlove);
                lVar14 = mobyutil::MB_randInt(6);
                iVar20 = mobyutil::ReorderRGB
                                   (*(int *)((int)local_150 + (int)(lVar14 << 2) + 0x30),
                                    (uint)g_goldWeaponsArray.bombGlove);
                iVar2 = (int)((double)animationSpeed * dVar30);
                local_108 = (longlong)iVar2;
                mobyutil::MB_randRange((int)((double)animationSpeed * dVar35),iVar2);
                iVar2 = (int)((double)animationSpeed * dVar41);
                local_108 = (longlong)iVar2;
                mobyutil::MB_randRange((int)((double)animationSpeed * dVar29),iVar2);
                partupd::SpawnPart_11(dVar36,dVar32,lVar25,&local_300,iVar19,iVar20);
                iVar26 = iVar26 + 1;
              } while (iVar26 < iVar15);
            }
            if (9.0 < dVar44) {
              dVar27 = (double)(float)(dVar31 * 4.0);
              local_108 = (longlong)(int)(animationSpeed * 15.5);
              FUN_004d4138(dVar27,lVar6,lVar25,&local_300);
              local_150[1] = 0x20;
              local_150[2] = 0;
              local_150[0] = 0x7f;
              mobyutil::ReorderRGB
                        (local_150,local_150 + 1,local_150 + 2,(uint)g_goldWeaponsArray.bombGlove);
              local_108 = (longlong)(int)(animationSpeed * 24.5);
              FUN_004d4138(dVar27,lVar6,lVar25,&local_300);
            }
            r = local_150 + 3;
            g = local_150 + 4;
            local_150[3] = 0x7f;
            b = local_150 + 5;
            local_150[4] = 0x3f;
            local_150[5] = 0;
            mobyutil::ReorderRGB(r,g,b,(uint)g_goldWeaponsArray.bombGlove);
            local_108 = (longlong)(int)((double)animationSpeed * dVar30);
            FUN_004d4138((double)(float)(dVar31 * 4.0),lVar6,lVar25,&local_300,0x30,
                         (int)((double)animationSpeed * dVar30),local_150[3] & 0xff,
                         local_150[4] & 0xff,local_150[5] & 0xff);
            local_150[5] = 0;
            local_150[3] = 0x60;
            local_150[4] = 0x10;
            mobyutil::ReorderRGB(r,g,b,(uint)g_goldWeaponsArray.bombGlove);
            local_108 = (longlong)(int)(animationSpeed * 27.5);
            FUN_004d4138((double)(float)(dVar31 * 3.5),lVar6,lVar25,&local_300,0x40,
                         (int)(animationSpeed * 27.5),local_150[3] & 0xff,local_150[4] & 0xff,
                         local_150[5] & 0xff);
            local_150[4] = 0;
            local_150[5] = 0;
            local_150[3] = 0x20;
            mobyutil::ReorderRGB(r,g,b,(uint)g_goldWeaponsArray.bombGlove);
            local_108 = (longlong)(int)(animationSpeed * 29.5);
            FUN_004d4138((double)(float)(dVar31 * 3.0),lVar6,lVar25,&local_300);
            sVar22 = *(short *)(pfVar3 + 0x1a);
            dVar35 = (double)animationSpeed;
          }
          local_108 = (longlong)(int)(dVar35 * dVar30);
          if ((int)(dVar35 * dVar30) <= (int)sVar22) {
            (moby->pos).z = (float)((double)(moby->pos).z + dVar42);
            fVar48 = mobyutil::CollWaterHeight(&((Vec4 *)lVar25)->x,afStack_240);
            dVar27 = (double)fVar48;
            iVar15 = 0;
            (moby->pos).z = (float)((double)(moby->pos).z - dVar42);
            dVar39 = -1.0;
            dVar37 = -0.5;
            dVar36 = 4.0;
            dVar35 = 8.0;
            dVar29 = 0.05000000074505806;
            dVar41 = 0.10000000149011612;
            dVar28 = 210000.0;
            do {
              local_230 = 0.0;
              local_22c = 0.0;
              local_228 = 0.0;
              local_224 = 0;
              dVar40 = (double)mobyutil::MB_randRangeFloat((float)dVar39,(float)dVar42);
              local_230 = (float)dVar40;
              dVar40 = (double)mobyutil::MB_randRangeFloat((float)dVar39,(float)dVar42);
              local_22c = (float)dVar40;
              dVar40 = (double)mobyutil::MB_randRangeFloat((float)dVar37,(float)dVar43);
              local_228 = (float)dVar40;
              dVar40 = (double)mobyutil::MB_randRangeFloat
                                         ((float)((double)mobyutil::g_FrameTime * dVar36),
                                          (float)((double)mobyutil::g_FrameTime * dVar35));
              FUN_005e7f98((double)(float)(dVar40 * dVar31),&local_230,&local_230);
              dVar40 = (double)mobyutil::MB_randRangeFloat((float)dVar29,(float)dVar41);
              partupd::SpawnPart_34
                        ((double)(float)(dVar40 * dVar28),dVar27,(Vec4 *)lVar25,&local_230);
              iVar15 = iVar15 + 1;
            } while (iVar15 < 0x96);
          }
          *pfVar3 = 0.0;
          moby->setByGroup = '\0';
          local_108 = (longlong)(int)((double)animationSpeed * dVar30);
          if ((int)*(short *)(pfVar3 + 0x1a) < (int)((double)animationSpeed * dVar30)) {
            if (g_goldWeaponsArray.bombGlove == '\0') {
              sound::PlayMobySound(0,0,moby);
            }
            else {
              sound::PlayMobySound(1,0,moby);
            }
          }
          else {
            sound::sound_MobyPlay_oClass(0x16,0,moby,0);
          }
          if (*(short *)(pfVar3 + 0x1a) != 0) {
            local_220 = (moby->pos).x;
            local_21c = (moby->pos).y;
            local_214 = (moby->pos).w;
            local_218 = (moby->pos).z + 3.5;
            dVar41 = 0.5;
            dVar27 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,&local_220,0);
            dVar28 = (double)mobyutil::GetGroundZNoWater(&local_220);
            if ((dVar28 != dVar27) && ((float)(dVar27 - dVar28) < 1.2)) {
              iVar15 = 0;
              dVar30 = (double)(float)(dVar41 + dVar27);
              dVar36 = -0.75;
              dVar35 = 0.75;
              dVar40 = 4.0;
              dVar39 = 14.0;
              dVar31 = 0.3499999940395355;
              dVar29 = 8.0;
              dVar37 = 0.25;
              dVar28 = 20.0;
              do {
                local_210 = 0.0;
                local_20c = 0.0;
                local_208 = 0.0;
                local_204 = 0;
                dVar32 = (double)mobyutil::MB_randRangeFloat
                                           ((float)((double)mobyutil::g_FrameTime * dVar36),
                                            (float)((double)mobyutil::g_FrameTime * dVar35));
                local_210 = (float)dVar32;
                dVar32 = (double)mobyutil::MB_randRangeFloat
                                           ((float)((double)mobyutil::g_FrameTime * dVar36),
                                            (float)((double)mobyutil::g_FrameTime * dVar35));
                local_20c = (float)dVar32;
                dVar32 = (double)mobyutil::MB_randRangeFloat
                                           ((float)((double)mobyutil::g_FrameTime * dVar40),
                                            (float)((double)mobyutil::g_FrameTime * dVar39));
                local_208 = (float)dVar32;
                dVar32 = (double)mobyutil::MB_randRangeFloat((float)dVar38,(float)dVar31);
                dVar33 = (double)mobyutil::MB_randRot();
                dVar34 = (double)mathfunc::cosf((float)dVar33);
                local_200 = (float)(dVar34 * dVar32);
                dVar33 = (double)FUN_005e8128(dVar33);
                local_200 = local_200 + (moby->pos).x;
                local_1fc = (float)(dVar33 * dVar32 + (double)(moby->pos).y);
                local_1f8 = (float)dVar30;
                local_208 = -(float)((double)(float)((double)mobyutil::g_FrameTime * dVar32) *
                                     dVar29 - (double)local_208);
                uVar9 = mobyutil::MB_randRangeFloat((float)dVar37,(float)dVar42);
                partupd::SpawnPart_64
                          (uVar9,dVar27,(double)(float)((double)DAT_0071f418 * dVar28),&local_200,
                           &local_210,0);
                iVar15 = iVar15 + 1;
              } while (iVar15 < 100);
              dVar32 = -3.0;
              dVar36 = 3.0;
              dVar35 = 1.5;
              dVar31 = 6.0;
              dVar30 = 31500.001953125;
              dVar29 = 52500.0;
              dVar28 = 90.5;
              dVar38 = 150.5;
              do {
                dVar33 = (double)mobyutil::MB_randRangeFloat((float)dVar37,(float)dVar42);
                uVar9 = 0x7f000000;
                mobyutil::TweenColor((float)dVar33,0x7f000000,0x7f7f6060);
                dVar33 = (double)mobyutil::MB_randRangeFloat((float)dVar41,(float)dVar42);
                uVar10 = 0;
                mobyutil::TweenColor((float)dVar33,0,0x3f3030);
                dVar33 = (double)mobyutil::MB_randRangeFloat((float)dVar32,(float)dVar36);
                local_1e0 = (float)dVar33;
                dVar33 = (double)mobyutil::MB_randRangeFloat((float)dVar32,(float)dVar36);
                local_1dc = (float)dVar33;
                dVar33 = (double)mobyutil::MB_randRangeFloat
                                           ((float)((double)mobyutil::g_FrameTime * dVar40),
                                            (float)((double)mobyutil::g_FrameTime * dVar39));
                local_1d8 = (float)dVar33;
                dVar33 = (double)mobyutil::MB_randRangeFloat((float)dVar35,(float)dVar36);
                FUN_005e7f98((double)(float)(dVar33 * (double)mobyutil::g_FrameTime),&local_1e0,
                             &local_1e0);
                dVar33 = (double)mobyutil::MB_randRangeFloat((float)dVar36,(float)dVar31);
                local_1d8 = (float)(dVar33 * (double)mobyutil::g_FrameTime);
                local_1f0 = (moby->pos).x;
                local_1ec = (moby->pos).y;
                local_1e4 = (moby->pos).w;
                local_1e8 = (float)dVar27;
                uVar12 = mobyutil::MB_randRangeFloat((float)dVar30,(float)dVar29);
                iVar15 = (int)((double)animationSpeed * dVar38);
                local_108 = (longlong)iVar15;
                uVar11 = mobyutil::MB_randRange((int)((double)animationSpeed * dVar28),iVar15);
                partupd::SpawnPart_15
                          (uVar12,&local_1f0,&local_1e0,uVar9,uVar10,0xffffffffffffffff,uVar11,1,
                           *DAT_00a52830);
                iVar24 = iVar24 + 1;
              } while (iVar24 < 0x14);
            }
          }
          auVar45 = ZEXT416(0xffffffff);
          auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
          auVar46 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar45 = vectorShiftLeftIntegerWord(auVar45,auVar45);
          fVar48 = 0.35;
          if (dVar44 - 20.0 < 0.0) {
            fVar48 = (float)(dVar44 * 0.017500000074505806);
          }
          GameCamera.offset0.amp = 0.4 - fVar48;
          auVar47 = loadVectorLeftIndexed(0x88,0x202ab4);
          auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar45 = vectorMultiplyAddFloatingPoint
                              (auVar46,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60
                               ,auVar45);
          auVar45 = vectorConvertToSignedFixedPointWordSaturate(auVar45,0);
          auVar45 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
          GameCamera.offset0.total =
               storeVectorElementWordIndexed
                         (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,0x168,
                          0x9513c0);
          FUN_003fda38(&uStack_1a0,lVar25,0,0);
          if (moby->state != '\x02') {
            mobyfunc::DeleteMoby(moby);
            return;
          }
        }
      }
      else if (moby->state != '\x02') {
        sVar22 = *(short *)((int)pfVar3 + 0x6a) + 1;
        *(short *)((int)pfVar3 + 0x6a) = sVar22;
        local_108 = (longlong)(int)sVar22;
        fVar48 = mobyutil::MB_WrapRot((float)local_108 * 0.068);
        dVar38 = (double)FUN_005e8128((double)fVar48);
        uVar7 = fastfunc::FastDoubleToInt((double)(float)(dVar38 * 96.0));
        moby->field60_0x90 =
             (int)((uVar7 & 0xffffffff) << 8) + 0x9f00U | (int)uVar7 + 0x9fU |
             (int)((uVar7 & 0xffffffff) << 0x10) + 0x9f0000U | 0xff000000;
      }
      if (moby->state == '\x02') {
        moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
        dVar38 = (double)fastfunc::FastIntToDouble(g_goldWeaponsArray.bombGlove);
        dVar27 = 0.5;
        dVar41 = (double)((float)(dVar38 + dVar42) * 3.0 - 0.5);
        dVar38 = (double)fastfunc::FastIntToDouble(moby->setByGroup);
        dVar28 = 15.5;
        fVar48 = mobyutil::Lerp((float)dVar27,(float)dVar41,
                                (float)(dVar38 / (double)(longlong)(animationSpeed * 15.5)));
        uVar9 = collproc::CollMobySphere((double)fVar48,lVar6 + 0x10);
        uVar11._0_4_ = (moby->pos).x;
        uVar11._4_4_ = (moby->pos).y;
        uVar12._0_4_ = (moby->pos).z;
        uVar12._4_4_ = (moby->pos).w;
        mobyutil::MB_DamageMobyList
                  (dVar43,dVar42,dVar42,lVar6,2,uVar11,uVar12,&DAT_00a14a00,uVar9,0,&DAT_00830000);
        bVar23 = moby->setByGroup + 1;
        moby->setByGroup = bVar23;
        local_108 = (longlong)(int)((double)animationSpeed * dVar28);
        if ((int)((double)animationSpeed * dVar28) < (int)(uint)bVar23) {
          mobyfunc::DeleteMoby(moby);
        }
      }
    }
    else {
      mobyfunc::DeleteMoby(moby);
    }
  }
  else {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 00204ab4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1212_00204ab4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1212_00204ab4(void)

{
  DAT_007666c0 = 0x10000;
  return;
}



//==== 00204ad0  ns=mobyupdate_helpers  size=0x118
// sig: undefined M1212_00204ad0(void)
// callers(0): 
// callees(3): 0010466c mobyutil::MB_GetNextMobyInGroup; 00104800 mobyutil::MB_GetFirstMobyInGroup; 00119028 mobyutil::MB_DrawGlowFX

void mobyupdate_helpers::M1212_00204ad0(int param_1)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  MobyInstance *local_40 [4];
  
  mobyutil::MB_GetFirstMobyInGroup(local_40,(uint)*(byte *)(param_1 + 0x21),'\0','\0');
  if (local_40[0] != (MobyInstance *)0x0) {
    uVar4 = 0x3fecccccc0000000;
    uVar5 = 0x3fdcccccc0000000;
    do {
      if (((local_40[0]->enabled != '\0') &&
          (pvVar1 = local_40[0]->pVar, local_40[0]->oClass == *(MOBY_OCLASSES *)(param_1 + 0xa6)))
         && (0x80 < (*(uint *)((int)pvVar1 + 0xb0) & 0xff))) {
        iVar2 = 0;
        pvVar3 = pvVar1;
        do {
          mobyutil::MB_DrawGlowFX
                    (uVar4,uVar5,(int)pvVar3 + 0x80,*(undefined4 *)((int)pvVar1 + 0xb0));
          iVar2 = iVar2 + 1;
          pvVar3 = (void *)((int)pvVar3 + 0x10);
        } while (iVar2 < 3);
      }
      mobyutil::MB_GetNextMobyInGroup(local_40,local_40[0],'\0','\0');
    } while (local_40[0] != (MobyInstance *)0x0);
  }
  return;
}



//==== 00204be8  ns=mobyupdate_helpers  size=0xe0
// sig: undefined M1212_00204be8(void)
// callers(1): 00205098 mobyupdate_unsorted::UpdateMoby_1212
// callees(2): 0006d720 RegisterFuncForMoby; 000f1114 mobyfunc::GetBonePosition

void mobyupdate_helpers::M1212_00204be8(MobyInstance *param_1)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  
  if (param_1->group != -1) {
    pvVar1 = param_1->pVar;
    iVar3 = 0;
    pvVar4 = pvVar1;
    do {
      mobyfunc::GetBonePosition(param_1,iVar3 + 3,(int)pvVar4 + 0x80);
      iVar3 = iVar3 + 1;
      pvVar4 = (void *)((int)pvVar4 + 0x10);
    } while (iVar3 < 3);
    uVar2 = param_1->field60_0x90;
    *(uint *)((int)pvVar1 + 0xb0) =
         ((int)uVar2 >> 8 & 0xffU) << 8 | uVar2 & 0xff |
         ((int)uVar2 >> 0x10 & 0xffU) << 0x10 | 0x30000000;
    if ((worldUpdateTime != 0) && (worldUpdateTime != **(int **)((int)pvVar1 + 0xb4))) {
      **(int **)((int)pvVar1 + 0xb4) = worldUpdateTime;
      RegisterFuncForMoby(&PTR_M1212_00204ad0_00709400,param_1);
    }
  }
  return;
}



//==== 00204cd8  ns=mobyupdate_helpers  size=0x388
// sig: undefined M1212_00204cd8(void)
// callers(1): 00205098 mobyupdate_unsorted::UpdateMoby_1212
// callees(6): 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 000fea60 mobyutil::MB_randSphere; 001206e8 partupd::SpawnPart_2; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M1212_00204cd8(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 auStack_b0 [40];
  
  iVar10 = 0;
  dVar13 = 0.0;
  dVar14 = 1.0;
  uVar15 = 0x4020000000000000;
  do {
    mobyfunc::GetBonePosition(param_1,iVar10,auStack_b0);
    mobyutil::MB_randSphere(dVar13,(double)(DAT_00766760 * mobyutil::g_FrameTime),local_c0);
    mobyutil::MB_randRangeFloat(DAT_00766774,DAT_00766778);
    mobyutil::MB_randRangeFloat(DAT_0076677c,DAT_00766780);
    uVar2 = DAT_00766788;
    uVar1 = DAT_00766784;
    mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar14);
    uVar3 = fastfunc::FastLerpColor(uVar1,uVar2);
    uVar2 = DAT_00766790;
    uVar1 = DAT_0076678c;
    mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar14);
    uVar4 = fastfunc::FastLerpColor(uVar1,uVar2);
    dVar11 = (double)mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar14);
    uVar5 = fastfunc::FastDoubleToInt
                      ((double)(animationSpeed *
                               (float)((double)(longlong)DAT_00766764 * dVar11 + dVar14)));
    dVar12 = (double)(longlong)DAT_00766768;
    dVar11 = (double)mobyutil::MB_randRangeFloat(-DAT_00766770,DAT_00766770);
    uVar6 = fastfunc::FastDoubleToInt
                      ((double)(animationSpeed * (float)(dVar12 * (double)(float)(dVar11 + dVar14)))
                      );
    dVar12 = (double)(longlong)DAT_0076676c;
    dVar11 = (double)mobyutil::MB_randRangeFloat(-DAT_00766770,DAT_00766770);
    uVar7 = fastfunc::FastDoubleToInt
                      ((double)(animationSpeed * (float)(dVar12 * (double)(float)(dVar11 + dVar14)))
                      );
    iVar8 = partupd::SpawnPart_2(auStack_b0,local_e0,local_d0,uVar3,uVar4,uVar5,uVar6,uVar7);
    if (iVar8 != 0) {
      cVar9 = fastfunc::FastDoubleToInt(uVar15);
      *(char *)(iVar8 + 9) = cVar9 + '`';
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < 3);
  return;
}



//==== 00205098  ns=mobyupdate_unsorted  size=0x734
// sig: undefined UpdateMoby_1212(MobyInstance * moby)
// callers(0): 
// callees(13): 000efb38 mobyfunc::DeleteMoby; 000fcc68 mobyutil::MB_randRot; 0010675c mobyutil::MB_damage; 00117390 mobyutil::MB_PathEvalSpline; 0011a560 mobyutil::MB_SpawnDebrisMoby; 0011b728 mobyutil::MB_UnlockSkillPoint; 0015cc7c sound::IsMobyPlayingSound; 0015d12c sound::PlayMobySound; 00204be8 mobyupdate_helpers::M1212_00204be8; 00204cd8 mobyupdate_helpers::M1212_00204cd8; 00502578 fastfunc::FastWrapRot; 005027bc fastfunc::FastLerpColor; 005cd098 libc::printf
// strings: 00654e28: 'Ship with no path. UID: %d\n' | 00654e48: 'Ship with a path that has no points. UID: %d\n'

/* Moby 1212 */

void mobyupdate_unsorted::UpdateMoby_1212(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  MobyModeBit MVar3;
  void *pvVar4;
  f32 fVar5;
  Spline *pSVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  u16 *puVar14;
  uint uVar15;
  undefined8 in_r9;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  byte in_cr6;
  undefined8 in_LR;
  double dVar20;
  double dVar21;
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
  undefined1 local_80 [16];
  undefined1 local_70 [32];
  
  lVar11 = (longlong)(int)moby;
  pvVar4 = moby->pVar;
  uVar19 = ZEXT48(pvVar4);
  pSVar6 = Splines[*(int *)((int)pvVar4 + 0x60)];
  uVar18 = ZEXT48(pSVar6);
  iVar12 = mobyutil::MB_damage(lVar11,0x10000,0);
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->updateDistance = -1;
    moby->drawDistance = 0xff;
    iVar12 = *(int *)((int)pvVar4 + 0x60);
    if (iVar12 == -1) {
      libc::printf("Ship with no path. UID: %d\n",moby->uid);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    pSVar6 = Splines[iVar12];
    if (pSVar6->cnt == 0) {
      libc::printf("Ship with a path that has no points. UID: %d\n",moby->uid);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    fVar2 = pSVar6->points[0].y - pSVar6->points[1].y;
    fVar8 = pSVar6->points[0].x - pSVar6->points[1].x;
    fVar9 = pSVar6->points[0].z - pSVar6->points[1].z;
    *(undefined1 *)((int)pvVar4 + 0x2b) = 1;
    *(undefined1 *)((int)pvVar4 + 0x2c) = 0x28;
    pSVar6 = Splines[iVar12];
    *(float *)((int)pvVar4 + 0x70) = SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar2 * fVar2);
    (moby->pos).x = pSVar6->points[0].x;
    (moby->pos).y = pSVar6->points[0].y;
    (moby->pos).z = pSVar6->points[0].z;
    (moby->pos).w = pSVar6->points[0].w;
    dVar20 = (double)mobyutil::MB_randRot();
    MVar3 = moby->modeBits;
    *(float *)((int)pvVar4 + 0x68) = (float)dVar20;
    auVar22 = ZEXT416(0xffffffff);
    auVar23 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    *(undefined4 *)((int)pvVar4 + 0x6c) = 0xffffffff;
    moby->state = '\x01';
    moby->modeBits = MVar3 | HAS_GLOW;
    auVar22 = loadVectorLeftIndexed(in_LR,uVar18);
    auVar23 = vectorShiftLeftIntegerWord(auVar23,auVar23);
    auVar22 = vectorConvertFromSignedFixedPointWord(auVar22,0);
    auVar24 = loadVectorLeftIndexed(0x74,uVar19);
    auVar25 = loadVectorRightIndexed(0x84,uVar19);
    auVar22 = vectorMultiplyAddFloatingPoint(auVar24 | auVar25,auVar22,auVar23);
    auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,100,uVar19);
    *(undefined4 *)((int)pvVar4 + 100U & 0xfffffffc) = uVar7;
  }
  else if (bVar1 < 2) {
    iVar13 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar4 + 0x6c));
    if (iVar13 == 0) {
      iVar13 = sound::PlayMobySound(1,4,moby);
      *(int *)((int)pvVar4 + 0x6c) = iVar13;
    }
    auVar22 = ZEXT416(0xffffffff);
    auVar23 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    auVar22 = ZEXT416(0xffffffff);
    auVar29 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    auVar22 = ZEXT416(0xffffffff);
    auVar24 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    auVar26 = vectorShiftLeftIntegerWord(auVar23,auVar23);
    auVar23 = loadVectorLeftIndexed(0x70,uVar19);
    auVar22 = loadVectorRightIndexed(0x80,uVar19);
    auVar23 = auVar23 | auVar22;
    auVar27 = vectorShiftLeftIntegerWord(auVar24,auVar24);
    auVar24 = vectorReciprocalEstimateFloatingPoint(auVar23);
    auVar22 = loadVectorLeftIndexed(in_LR,0x205060);
    auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar25 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    auVar28 = loadVectorLeftIndexed(0x6740,0x760000);
    auVar22 = vectorNegativeMultiplySubtractFloatingPoint(auVar24,auVar23,auVar25);
    auVar31 = loadVectorLeftIndexed(0xfffffffffffff414,0x720000);
    auVar24 = vectorMultiplyAddFloatingPoint(auVar24,auVar22,auVar26);
    auVar22 = vectorShiftLeftIntegerWord(auVar29,auVar29);
    auVar29 = loadVectorLeftIndexed(100,uVar19);
    auVar30 = loadVectorRightIndexed(0x74,uVar19);
    auVar26 = vectorMultiplyAddFloatingPoint(auVar28,auVar31,auVar22);
    auVar22 = ZEXT416(0xffffffff);
    auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    iVar13 = pSVar6->cnt;
    auVar31 = vectorNegativeMultiplySubtractFloatingPoint(auVar24,auVar23,auVar25);
    auVar28 = vectorShiftLeftIntegerWord(auVar22,auVar22);
    auVar22 = loadVectorLeftIndexed(in_LR,uVar18);
    auVar27 = vectorMultiplyAddFloatingPoint(auVar24,auVar31,auVar27);
    auVar24 = vectorConvertFromSignedFixedPointWord(auVar22,0);
    auVar23 = vectorNegativeMultiplySubtractFloatingPoint(auVar27,auVar23,auVar25);
    auVar22 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar23 = vectorMultiplyAddFloatingPoint(auVar27,auVar23,auVar28);
    dVar20 = (double)(*(float *)((int)pvVar4 + 100) +
                     (DAT_00766740 * mobyutil::g_FrameTime) / *(float *)((int)pvVar4 + 0x70));
    auVar25 = vectorMultiplyAddFloatingPoint(auVar23,auVar26,auVar29 | auVar30);
    auVar23 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
    vectorCompareGreaterThanFloatingPoint
              (auVar23,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60);
    uVar7 = storeVectorElementWordIndexed(auVar23,100,uVar19);
    *(undefined4 *)((int)pvVar4 + 100U & 0xfffffffc) = uVar7;
    if (!(bool)(in_cr6 >> 1 & 1)) {
      auVar22 = vectorSubtractFloatingPoint(auVar25,auVar24);
      dVar20 = (double)(float)(dVar20 - (double)(longlong)iVar13);
      auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar7 = storeVectorElementWordIndexed
                        (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,100,uVar19);
      *(undefined4 *)((int)pvVar4 + 100U & 0xfffffffc) = uVar7;
    }
    if (Level == Gaspar) {
      mobyutil::MB_PathEvalSpline(dVar20,uVar18,&DAT_00720000,1,lVar11 + 0x10,lVar11 + 0x40,0);
    }
    else {
      mobyutil::MB_PathEvalSpline(dVar20,uVar18,&DAT_00720000,0,lVar11 + 0x10,lVar11 + 0x40,0);
    }
    fVar5 = (moby->pos).x;
    uVar15 = (int)fVar5 >> 0x1f;
    if (((int)((uVar15 >> 1 ^ (uint)fVar5) - uVar15) < 0x41000000) ||
       (fVar5 = (moby->pos).y, uVar15 = (int)fVar5 >> 0x1f,
       (int)((uVar15 >> 1 ^ (uint)fVar5) - uVar15) < 0x41000000)) {
      puVar14 = (u16 *)0x0;
    }
    else {
      puVar14 = moby->pClass->collision;
    }
    moby->collision = puVar14;
    if (moby->enabled != '\0') {
      mobyupdate_helpers::M1212_00204cd8(lVar11,local_80);
    }
    if ((iVar12 != 0) && (0 < *(int *)(iVar12 + 0x2c))) {
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    if ((Level == Aridia) &&
       (ShipsKilledCounts.Aridia = ShipsKilledCounts.Aridia + 1, 2 < ShipsKilledCounts.Aridia)) {
      mobyutil::MB_UnlockSkillPoint(2);
    }
    if (((Level == Gaspar) && (g_heroState == TURRET_PLANE_UI)) &&
       (ShipsKilledCounts.Gaspar = ShipsKilledCounts.Gaspar + 1, 4 < ShipsKilledCounts.Gaspar)) {
      mobyutil::MB_UnlockSkillPoint(0xf);
    }
    sound::PlayMobySound(0,0,moby);
    lVar17 = lVar11 + 0x10;
    lVar16 = lVar11 + 0x40;
    dVar21 = 90.5;
    dVar20 = 12.0;
    mobyutil::MB_SpawnDebrisMoby
              ((double)(DAT_0071f418 * 12.0),lVar11,0x5f2,lVar17,lVar16,(int)(animationSpeed * 90.5)
               ,0,in_r9,local_70);
    mobyutil::MB_SpawnDebrisMoby
              ((double)(float)((double)DAT_0071f418 * dVar20),lVar11,0x5f5,lVar17,lVar16,
               (int)((double)animationSpeed * dVar21),0,in_r9,local_70);
    mobyutil::MB_SpawnDebrisMoby
              ((double)(float)((double)DAT_0071f418 * dVar20),lVar11,0x790,lVar17,lVar16,
               (int)((double)animationSpeed * dVar21),0,in_r9,local_70);
    mobyfunc::DeleteMoby(moby);
  }
  if (moby->enabled != '\0') {
    fVar2 = *(float *)((int)pvVar4 + 0x68);
    fVar8 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar8 = fVar2;
    }
    fVar9 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar8 < 0.0) {
      fVar9 = fVar8;
    }
    fVar2 = fVar9 * fVar9;
    fVar8 = fVar2 * fVar2 * fVar9;
    dVar20 = 1.0;
    fVar10 = fVar2 * fVar8;
    dVar21 = (double)((fVar2 * fVar10 * 2.601887e-06 +
                      fVar10 * -0.0001980741 +
                      fVar8 * 0.0083330255 + fVar2 * fVar9 * -0.16666657 + fVar9) * 4.0 - 3.0);
    if ((dVar21 <= 1.0) && (dVar20 = dVar21, dVar21 < 0.0)) {
      dVar20 = 0.0;
    }
    uVar15 = fastfunc::FastLerpColor(dVar20,DAT_00766748,DAT_0076674c);
    moby->field60_0x90 = uVar15;
    dVar20 = (double)fastfunc::FastWrapRot
                               (*(float *)((int)pvVar4 + 0x68),
                                DAT_00766744 * 0.017453292 * mobyutil::g_FrameTime);
    *(float *)((int)pvVar4 + 0x68) = (float)dVar20;
    mobyupdate_helpers::M1212_00204be8(lVar11);
  }
  return;
}



//==== 002057cc  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1973_002057cc(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1973_002057cc(void)

{
  DAT_007667e0 = 0x10000;
  return;
}



//==== 002057e8  ns=mobyupdate_helpers  size=0x118
// sig: undefined M1973_002057e8(void)
// callers(0): 
// callees(3): 0010466c mobyutil::MB_GetNextMobyInGroup; 00104800 mobyutil::MB_GetFirstMobyInGroup; 00119028 mobyutil::MB_DrawGlowFX

void mobyupdate_helpers::M1973_002057e8(int param_1)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  MobyInstance *local_40 [4];
  
  mobyutil::MB_GetFirstMobyInGroup(local_40,(uint)*(byte *)(param_1 + 0x21),'\0','\0');
  if (local_40[0] != (MobyInstance *)0x0) {
    uVar4 = 0x3ff3333340000000;
    uVar5 = 0x3fe23d70a0000000;
    do {
      if (((local_40[0]->enabled != '\0') &&
          (pvVar1 = local_40[0]->pVar, local_40[0]->oClass == *(MOBY_OCLASSES *)(param_1 + 0xa6)))
         && (0x80 < (*(uint *)((int)pvVar1 + 0xe0) & 0xff))) {
        iVar2 = 0;
        pvVar3 = pvVar1;
        do {
          mobyutil::MB_DrawGlowFX
                    (uVar4,uVar5,(int)pvVar3 + 0x80,*(undefined4 *)((int)pvVar1 + 0xe0));
          iVar2 = iVar2 + 1;
          pvVar3 = (void *)((int)pvVar3 + 0x10);
        } while (iVar2 < 6);
      }
      mobyutil::MB_GetNextMobyInGroup(local_40,local_40[0],'\0','\0');
    } while (local_40[0] != (MobyInstance *)0x0);
  }
  return;
}



//==== 00205900  ns=mobyupdate_helpers  size=0xe0
// sig: undefined M1973_00205900(void)
// callers(1): 00206160 mobyupdate_unsorted::UpdateMoby_{1213_1973}
// callees(2): 0006d720 RegisterFuncForMoby; 000f1114 mobyfunc::GetBonePosition

void mobyupdate_helpers::M1973_00205900(MobyInstance *param_1)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  
  if (param_1->group != -1) {
    pvVar1 = param_1->pVar;
    iVar3 = 0;
    pvVar4 = pvVar1;
    do {
      mobyfunc::GetBonePosition(param_1,iVar3 + 2,(int)pvVar4 + 0x80);
      iVar3 = iVar3 + 1;
      pvVar4 = (void *)((int)pvVar4 + 0x10);
    } while (iVar3 < 6);
    uVar2 = param_1->field60_0x90;
    *(uint *)((int)pvVar1 + 0xe0) =
         ((int)uVar2 >> 8 & 0xffU) << 8 | uVar2 & 0xff |
         ((int)uVar2 >> 0x10 & 0xffU) << 0x10 | 0x30000000;
    if ((worldUpdateTime != 0) && (worldUpdateTime != **(int **)((int)pvVar1 + 0xe4))) {
      **(int **)((int)pvVar1 + 0xe4) = worldUpdateTime;
      RegisterFuncForMoby(&PTR_M1973_002057e8_00709428,param_1);
    }
  }
  return;
}



//==== 002059f0  ns=mobyupdate_helpers  size=0x39c
// sig: undefined M1973_002059f0(void)
// callers(1): 00206160 mobyupdate_unsorted::UpdateMoby_{1213_1973}
// callees(6): 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 000fea60 mobyutil::MB_randSphere; 001206e8 partupd::SpawnPart_2; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor
// strings: 00766870: ' ``P' (raw)

void mobyupdate_helpers::M1973_002059f0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 auStack_b0 [32];
  
  iVar10 = 0;
  dVar13 = 0.0;
  dVar14 = 1.0;
  uVar15 = 0x4020000000000000;
  do {
    mobyfunc::GetBonePosition(param_1,iVar10,auStack_b0);
    mobyutil::MB_randSphere(dVar13,(double)(DAT_00766860 * mobyutil::g_FrameTime),local_c0);
    mobyutil::MB_randRangeFloat(DAT_00766838,DAT_0076683c);
    mobyutil::MB_randRangeFloat(DAT_00766840,DAT_00766844);
    uVar2 = DAT_00766868;
    uVar1 = DAT_00766864;
    mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar14);
    uVar3 = fastfunc::FastLerpColor(uVar1,uVar2);
    uVar2 = DAT_00766870;
    uVar1 = DAT_0076686c;
    mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar14);
    uVar4 = fastfunc::FastLerpColor(uVar1,uVar2);
    dVar11 = (double)mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar14);
    uVar5 = fastfunc::FastDoubleToInt
                      ((double)(animationSpeed *
                               (float)((double)(longlong)DAT_00766828 * dVar11 + dVar14)));
    dVar12 = (double)(longlong)DAT_0076682c;
    dVar11 = (double)mobyutil::MB_randRangeFloat(-DAT_00766834,DAT_00766834);
    uVar6 = fastfunc::FastDoubleToInt
                      ((double)(animationSpeed * (float)(dVar12 * (double)(float)(dVar11 + dVar14)))
                      );
    dVar12 = (double)(longlong)DAT_00766830;
    dVar11 = (double)mobyutil::MB_randRangeFloat(-DAT_00766834,DAT_00766834);
    uVar7 = fastfunc::FastDoubleToInt
                      ((double)(animationSpeed * (float)(dVar12 * (double)(float)(dVar11 + dVar14)))
                      );
    iVar8 = partupd::SpawnPart_2(auStack_b0,local_e0,local_d0,uVar3,uVar4,uVar5,uVar6,uVar7);
    if (iVar8 != 0) {
      cVar9 = fastfunc::FastDoubleToInt(uVar15);
      *(char *)(iVar8 + 9) = cVar9 + '`';
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < 2);
  return;
}



//==== 00205d98  ns=mobyupdate_helpers  size=0x388
// sig: undefined M1973_00205d98(void)
// callers(1): 00206160 mobyupdate_unsorted::UpdateMoby_{1213_1973}
// callees(6): 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 000fea60 mobyutil::MB_randSphere; 001206e8 partupd::SpawnPart_2; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M1973_00205d98(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 auStack_b0 [40];
  
  iVar10 = 0;
  dVar13 = 0.0;
  dVar14 = 1.0;
  uVar15 = 0x4020000000000000;
  do {
    mobyfunc::GetBonePosition(param_1,iVar10,auStack_b0);
    mobyutil::MB_randSphere(dVar13,(double)(DAT_00766824 * mobyutil::g_FrameTime),local_c0);
    mobyutil::MB_randRangeFloat(DAT_00766838,DAT_0076683c);
    mobyutil::MB_randRangeFloat(DAT_00766840,DAT_00766844);
    uVar2 = DAT_0076684c;
    uVar1 = DAT_00766848;
    mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar14);
    uVar3 = fastfunc::FastLerpColor(uVar1,uVar2);
    uVar2 = DAT_00766854;
    uVar1 = DAT_00766850;
    mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar14);
    uVar4 = fastfunc::FastLerpColor(uVar1,uVar2);
    dVar11 = (double)mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar14);
    uVar5 = fastfunc::FastDoubleToInt
                      ((double)(animationSpeed *
                               (float)((double)(longlong)DAT_00766828 * dVar11 + dVar14)));
    dVar12 = (double)(longlong)DAT_0076682c;
    dVar11 = (double)mobyutil::MB_randRangeFloat(-DAT_00766834,DAT_00766834);
    uVar6 = fastfunc::FastDoubleToInt
                      ((double)(animationSpeed * (float)(dVar12 * (double)(float)(dVar11 + dVar14)))
                      );
    dVar12 = (double)(longlong)DAT_00766830;
    dVar11 = (double)mobyutil::MB_randRangeFloat(-DAT_00766834,DAT_00766834);
    uVar7 = fastfunc::FastDoubleToInt
                      ((double)(animationSpeed * (float)(dVar12 * (double)(float)(dVar11 + dVar14)))
                      );
    iVar8 = partupd::SpawnPart_2(auStack_b0,local_e0,local_d0,uVar3,uVar4,uVar5,uVar6,uVar7);
    if (iVar8 != 0) {
      cVar9 = fastfunc::FastDoubleToInt(uVar15);
      *(char *)(iVar8 + 9) = cVar9 + '`';
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < 2);
  return;
}



//==== 00206160  ns=mobyupdate_unsorted  size=0x7e8
// sig: undefined UpdateMoby_{1213_1973}(MobyInstance * moby)
// callers(0): 
// callees(14): 000efb38 mobyfunc::DeleteMoby; 000fcc68 mobyutil::MB_randRot; 0010675c mobyutil::MB_damage; 00117390 mobyutil::MB_PathEvalSpline; 0011a560 mobyutil::MB_SpawnDebrisMoby; 0011b728 mobyutil::MB_UnlockSkillPoint; 0015cc7c sound::IsMobyPlayingSound; 0015d12c sound::PlayMobySound; 00205900 mobyupdate_helpers::M1973_00205900; 002059f0 mobyupdate_helpers::M1973_002059f0; 00205d98 mobyupdate_helpers::M1973_00205d98; 00502578 fastfunc::FastWrapRot; 005027bc fastfunc::FastLerpColor; 005cd098 libc::printf
// strings: 00654e80: 'Ship with no path. UID: %d\n' | 00654ea0: 'Ship with a path that has no points. UID: %d\n'

/* Moby 1213
   Moby 1973 */

void mobyupdate_unsorted::UpdateMoby__1213_1973_(MobyInstance *moby)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  float fVar4;
  MobyModeBit MVar5;
  void *pvVar6;
  f32 fVar7;
  Spline *pSVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  u16 *puVar16;
  uint uVar17;
  undefined8 in_r9;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  byte in_cr6;
  undefined8 in_LR;
  double dVar22;
  double dVar23;
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
  undefined1 local_80 [16];
  undefined1 local_70 [40];
  
  lVar13 = (longlong)(int)moby;
  pvVar6 = moby->pVar;
  uVar21 = ZEXT48(pvVar6);
  pSVar8 = Splines[*(int *)((int)pvVar6 + 0x60)];
  uVar19 = ZEXT48(pSVar8);
  iVar14 = mobyutil::MB_damage(lVar13,0x10000,0);
  bVar3 = moby->state;
  if (bVar3 == 0) {
    moby->updateDistance = -1;
    moby->drawDistance = 0xff;
    if (Level == Orxon) {
      moby->scale = moby->scale * 0.5;
    }
    iVar14 = *(int *)((int)pvVar6 + 0x60);
    if (iVar14 == -1) {
      libc::printf("Ship with no path. UID: %d\n",moby->uid);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    pSVar8 = Splines[iVar14];
    if (pSVar8->cnt == 0) {
      libc::printf("Ship with a path that has no points. UID: %d\n",moby->uid);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    fVar4 = pSVar8->points[0].y - pSVar8->points[1].y;
    fVar10 = pSVar8->points[0].x - pSVar8->points[1].x;
    fVar11 = pSVar8->points[0].z - pSVar8->points[1].z;
    *(undefined1 *)((int)pvVar6 + 0x2b) = 1;
    *(undefined1 *)((int)pvVar6 + 0x2c) = 0x28;
    pSVar8 = Splines[iVar14];
    *(float *)((int)pvVar6 + 0x70) = SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar4 * fVar4);
    (moby->pos).x = pSVar8->points[0].x;
    (moby->pos).y = pSVar8->points[0].y;
    (moby->pos).z = pSVar8->points[0].z;
    (moby->pos).w = pSVar8->points[0].w;
    dVar22 = (double)mobyutil::MB_randRot();
    MVar5 = moby->modeBits;
    *(float *)((int)pvVar6 + 0x68) = (float)dVar22;
    auVar24 = ZEXT416(0xffffffff);
    auVar25 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    *(undefined4 *)((int)pvVar6 + 0x6c) = 0xffffffff;
    moby->state = '\x01';
    moby->modeBits = MVar5 | HAS_GLOW;
    auVar24 = loadVectorLeftIndexed(in_LR,uVar19);
    auVar25 = vectorShiftLeftIntegerWord(auVar25,auVar25);
    auVar24 = vectorConvertFromSignedFixedPointWord(auVar24,0);
    auVar26 = loadVectorLeftIndexed(0x74,uVar21);
    auVar27 = loadVectorRightIndexed(0x84,uVar21);
    auVar24 = vectorMultiplyAddFloatingPoint(auVar26 | auVar27,auVar24,auVar25);
    auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar9 = storeVectorElementWordIndexed
                      (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,100,uVar21);
    *(undefined4 *)((int)pvVar6 + 100U & 0xfffffffc) = uVar9;
  }
  else if (bVar3 < 2) {
    if ((g_heroType == '\x01') && (Level == Orxon)) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
    iVar15 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar6 + 0x6c));
    if (iVar15 == 0) {
      iVar15 = sound::PlayMobySound(1,4,moby);
      *(int *)((int)pvVar6 + 0x6c) = iVar15;
    }
    auVar24 = ZEXT416(0xffffffff);
    auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    auVar25 = loadVectorLeftIndexed(0x6804,0x760000);
    auVar24 = vectorShiftLeftIntegerWord(auVar24,auVar24);
    auVar26 = loadVectorLeftIndexed(0xfffffffffffff414,0x720000);
    bVar1 = Level == Orxon;
    bVar2 = Level == Gaspar;
    fVar4 = DAT_00766804 * mobyutil::g_FrameTime;
    auVar24 = vectorMultiplyAddFloatingPoint(auVar25,auVar26,auVar24);
    if (bVar1) {
      auVar25 = ZEXT416(0xffffffff);
      auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
      auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
      auVar25 = loadVectorLeftIndexed(4,0x206120);
      fVar4 = fVar4 * 0.25;
      auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar24 = vectorMultiplyAddFloatingPoint
                          (auVar24,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                           auVar26);
    }
    auVar25 = ZEXT416(0xffffffff);
    auVar26 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
    auVar25 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar24 = ZEXT416(0xffffffff);
    auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    auVar27 = loadVectorLeftIndexed(0x70,uVar21);
    auVar29 = vectorShiftLeftIntegerWord(auVar26,auVar26);
    auVar26 = loadVectorRightIndexed(0x80,uVar21);
    auVar27 = auVar27 | auVar26;
    auVar33 = vectorShiftLeftIntegerWord(auVar24,auVar24);
    auVar24 = ZEXT416(0xffffffff);
    auVar31 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    auVar26 = vectorReciprocalEstimateFloatingPoint(auVar27);
    auVar24 = loadVectorLeftIndexed(8,0x206120);
    auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar28 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
    auVar24 = vectorNegativeMultiplySubtractFloatingPoint(auVar26,auVar27,auVar28);
    auVar24 = vectorMultiplyAddFloatingPoint(auVar26,auVar24,auVar29);
    auVar29 = loadVectorLeftIndexed(100,uVar21);
    auVar31 = loadVectorRightIndexed(0x74,uVar21);
    auVar30 = loadVectorLeftIndexed(in_LR,uVar19);
    lVar18 = (longlong)pSVar8->cnt;
    auVar26 = vectorNegativeMultiplySubtractFloatingPoint(auVar24,auVar27,auVar28);
    auVar32 = vectorMultiplyAddFloatingPoint(auVar24,auVar26,auVar32);
    auVar26 = vectorConvertFromSignedFixedPointWord(auVar30,0);
    auVar27 = vectorNegativeMultiplySubtractFloatingPoint(auVar32,auVar27,auVar28);
    auVar24 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
    dVar22 = (double)(*(float *)((int)pvVar6 + 100) + fVar4 / *(float *)((int)pvVar6 + 0x70));
    auVar27 = vectorMultiplyAddFloatingPoint(auVar32,auVar27,auVar33);
    auVar27 = vectorMultiplyAddFloatingPoint
                        (auVar27,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                         auVar29 | auVar31);
    auVar25 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
    uVar9 = storeVectorElementWordIndexed(auVar25,100,uVar21);
    *(undefined4 *)((int)pvVar6 + 100U & 0xfffffffc) = uVar9;
    vectorCompareGreaterThanFloatingPoint
              (auVar25,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60);
    if (!(bool)(in_cr6 >> 1 & 1)) {
      auVar24 = vectorSubtractFloatingPoint(auVar27,auVar26);
      dVar22 = (double)(float)(dVar22 - (double)lVar18);
      auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar9 = storeVectorElementWordIndexed
                        (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,100,uVar21);
      *(undefined4 *)((int)pvVar6 + 100U & 0xfffffffc) = uVar9;
    }
    if ((bVar2) || (bVar1)) {
      mobyutil::MB_PathEvalSpline(dVar22,uVar19,lVar18,1,lVar13 + 0x10,lVar13 + 0x40,0);
    }
    else {
      mobyutil::MB_PathEvalSpline(dVar22,uVar19,lVar18,0,lVar13 + 0x10,lVar13 + 0x40,0);
    }
    fVar7 = (moby->pos).x;
    uVar17 = (int)fVar7 >> 0x1f;
    if (((int)((uVar17 >> 1 ^ (uint)fVar7) - uVar17) < 0x41000000) ||
       (fVar7 = (moby->pos).y, uVar17 = (int)fVar7 >> 0x1f,
       (int)((uVar17 >> 1 ^ (uint)fVar7) - uVar17) < 0x41000000)) {
      puVar16 = (u16 *)0x0;
    }
    else {
      puVar16 = moby->pClass->collision;
    }
    moby->collision = puVar16;
    if (moby->enabled != '\0') {
      if (Level == Orxon) {
        mobyupdate_helpers::M1973_002059f0(lVar13,local_80);
      }
      else {
        mobyupdate_helpers::M1973_00205d98(lVar13,local_80);
      }
    }
    if ((iVar14 != 0) && (0 < *(int *)(iVar14 + 0x2c))) {
      moby->state = '\x02';
    }
  }
  else if (bVar3 < 3) {
    if ((Level == Aridia) &&
       (ShipsKilledCounts.Aridia = ShipsKilledCounts.Aridia + 1, 2 < ShipsKilledCounts.Aridia)) {
      mobyutil::MB_UnlockSkillPoint(2);
    }
    if (((Level == Gaspar) && (g_heroState == TURRET_PLANE_UI)) &&
       (ShipsKilledCounts.Gaspar = ShipsKilledCounts.Gaspar + 1, 4 < ShipsKilledCounts.Gaspar)) {
      mobyutil::MB_UnlockSkillPoint(0xf);
    }
    sound::PlayMobySound(0,0,moby);
    lVar20 = lVar13 + 0x10;
    lVar18 = lVar13 + 0x40;
    dVar23 = 90.5;
    dVar22 = 12.0;
    mobyutil::MB_SpawnDebrisMoby
              ((double)(DAT_0071f418 * 12.0),lVar13,0x5f6,lVar20,lVar18,(int)(animationSpeed * 90.5)
               ,0,in_r9,local_70);
    mobyutil::MB_SpawnDebrisMoby
              ((double)(float)((double)DAT_0071f418 * dVar22),lVar13,0x5f8,lVar20,lVar18,
               (int)((double)animationSpeed * dVar23),0,in_r9,local_70);
    mobyutil::MB_SpawnDebrisMoby
              ((double)(float)((double)DAT_0071f418 * dVar22),lVar13,0x5f9,lVar20,lVar18,
               (int)((double)animationSpeed * dVar23),0,in_r9,local_70);
    mobyfunc::DeleteMoby(moby);
    return;
  }
  if (moby->enabled != '\0') {
    fVar4 = *(float *)((int)pvVar6 + 0x68);
    fVar10 = 3.1415925 - fVar4;
    if (fVar4 - (3.1415925 - fVar4) < 0.0) {
      fVar10 = fVar4;
    }
    fVar11 = -3.1415925 - fVar4;
    if ((-3.1415925 - fVar4) - fVar10 < 0.0) {
      fVar11 = fVar10;
    }
    fVar4 = fVar11 * fVar11;
    fVar10 = fVar4 * fVar4 * fVar11;
    dVar22 = 1.0;
    fVar12 = fVar4 * fVar10;
    dVar23 = (double)((fVar4 * fVar12 * 2.601887e-06 +
                      fVar12 * -0.0001980741 +
                      fVar10 * 0.0083330255 + fVar4 * fVar11 * -0.16666657 + fVar11) * 4.0 - 3.0);
    if ((dVar23 <= 1.0) && (dVar22 = dVar23, dVar23 < 0.0)) {
      dVar22 = 0.0;
    }
    uVar17 = fastfunc::FastLerpColor(dVar22,DAT_0076680c,DAT_00766810);
    moby->field60_0x90 = uVar17;
    dVar22 = (double)fastfunc::FastWrapRot
                               (*(float *)((int)pvVar6 + 0x68),
                                DAT_00766808 * 0.017453292 * mobyutil::g_FrameTime);
    *(float *)((int)pvVar6 + 0x68) = (float)dVar22;
    mobyupdate_helpers::M1973_00205900(lVar13);
  }
  return;
}



//==== 00206948  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1973_00206948(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1973_00206948(void)

{
  DAT_007668c0 = 0x10000;
  return;
}



//==== 00206970  ns=mobyupdate_helpers  size=0x2d4
// sig: undefined M1214_00206970(void)
// callers(1): 00206cd8 mobyupdate_unsorted::UpdateMoby_1214
// callees(6): 000fea60 mobyutil::MB_randSphere; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 005cd098 libc::printf
// strings: 00654ed8: 'Moby class %d Damage Received: %f\n'

void mobyupdate_helpers::M1214_00206970(MobyInstance *param_1,longlong param_2,undefined8 param_3)

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
  
  if (param_1->state != '\x02') {
    iVar5 = mobyutil::MB_damage(param_1,0x330000,0);
    if (iVar5 != 0) {
      libc::printf("Moby class %d Damage Received: %f\n",param_1->oClass,
                   (double)*(float *)(iVar5 + 0x2c));
    }
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
        auVar8 = loadVectorLeftIndexed(in_LR,0x206960);
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
        param_1->state = '\x02';
      }
    }
    param_1->damage = -1;
  }
  mobyutil::MB_ColorDyingMoby(param_1,param_2 + 0x60);
  return;
}



//==== 00206cd8  ns=mobyupdate_unsorted  size=0x131c
// sig: undefined UpdateMoby_1214(MobyInstance * moby)
// callers(0): 
// callees(17): 000efb38 mobyfunc::DeleteMoby; 000f1ec8 mobyfunc::SetColorOfMoby; 000fe610 mobyutil::MB_SphericalToVector; 000ff190 mobyutil::MB_DeltAngSpeed; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00106150 mobyutil::MB_RegisterLameShadow; 0010de78 mobyutil::MB_WrapRot; 0010e030 mobyutil::MB_genericExplosion; 00110950 mobyutil::MB_RandomizeVector; 001367d0 path::PathFindClosestPnt; 00187e00 FUN_00187e00; 00206970 mobyupdate_helpers::M1214_00206970; 0020ab50 mobyupdate_helpers::M1215_0020ab50; 0021b5e8 FUN_0021b5e8; 004fff60 fastfunc::FastDecTimerS32; 005c8318 rand; 005cd098 libc::printf
// strings: 00654efc: 'no path for moby 1214 #%d: killing\n'

/* Moby 1214 */

void mobyupdate_unsorted::UpdateMoby_1214(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  char cVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  void *pvVar10;
  f32 fVar11;
  uint uVar12;
  undefined4 uVar13;
  ulonglong *puVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  bool bVar23;
  ulonglong uVar24;
  int iVar28;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  int iVar29;
  longlong lVar30;
  float *pfVar31;
  int iVar32;
  longlong lVar33;
  ulonglong uVar34;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  Spline *spline;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar35;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  ulonglong in_f16;
  double dVar40;
  ulonglong in_f17;
  double dVar41;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  double dVar42;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar43;
  ulonglong in_f27;
  double dVar44;
  ulonglong in_f28;
  double dVar45;
  ulonglong in_f29;
  double dVar46;
  double dVar47;
  ulonglong in_f30;
  double dVar48;
  ulonglong in_f31;
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  
  uVar24 = ZEXT48(&stack0x00000000);
  uVar27 = uVar24 - 0x280;
  puVar14 = (ulonglong *)uVar27;
  *puVar14 = uVar24;
  puVar14[0x52] = in_LR;
  puVar14[0x40] = in_f16;
  puVar14[0x41] = in_f17;
  puVar14[0x42] = in_f18;
  puVar14[0x43] = in_f19;
  puVar14[0x44] = in_f20;
  puVar14[0x45] = in_f21;
  puVar14[0x46] = in_f22;
  puVar14[0x47] = in_f23;
  puVar14[0x48] = in_f24;
  puVar14[0x49] = in_f25;
  puVar14[0x4a] = in_f26;
  puVar14[0x4b] = in_f27;
  puVar14[0x4c] = in_f28;
  puVar14[0x4d] = in_f29;
  puVar14[0x4e] = in_f30;
  puVar14[0x4f] = in_f31;
  puVar14[0x3f] = unaff_r31;
  puVar14[0x3e] = unaff_r30;
  pvVar10 = moby->pVar;
  uVar35 = ZEXT48(pvVar10);
  puVar14[0x3d] = unaff_r29;
  puVar14[0x3c] = unaff_r28;
  puVar14[0x3b] = unaff_r27;
  puVar14[0x3a] = unaff_r26;
  puVar14[0x39] = unaff_r25;
  puVar14[0x38] = unaff_r24;
  puVar14[0x37] = unaff_r23;
  puVar14[0x36] = unaff_r22;
  puVar14[0x35] = unaff_r21;
  mobyupdate_helpers::M1214_00206970(moby,uVar35,uVar35 + 0x20);
  iVar29 = DAT_0096b2d0;
  iVar28 = 0;
  bVar23 = false;
  spline = (Spline *)0x0;
  dVar42 = (double)g_heroPosition.x;
  dVar37 = (double)g_heroPosition.y;
  dVar38 = (double)g_heroPosition.z;
  if (*(int *)((int)pvVar10 + 0xa0) != -1) {
    spline = Splines[*(int *)((int)pvVar10 + 0xa0)];
  }
  fVar6 = g_heroPosition.w;
  if ((DAT_0096b2d0 != 0) &&
     (*(char *)(DAT_0096b2d0 + 0x20) != -3 && *(char *)(DAT_0096b2d0 + 0x20) != -2)) {
    dVar42 = (double)*(float *)(DAT_0096b2d0 + 0x10);
    fVar1 = (float)((double)(moby->pos).x - dVar42);
    dVar37 = (double)*(float *)(DAT_0096b2d0 + 0x14);
    fVar2 = (float)((double)(moby->pos).y - dVar37);
    bVar23 = false;
    dVar38 = (double)*(float *)(DAT_0096b2d0 + 0x18);
    iVar28 = *(int *)(DAT_0096b2d0 + 0x78);
    fVar6 = *(float *)(DAT_0096b2d0 + 0x1c);
    fVar3 = (float)((double)(moby->pos).z - dVar38);
    if ((g_heroState == TURRET_PLANE_UI) &&
       ((*(short *)(DAT_0096b2d0 + 0xa6) == 0x4da &&
        (SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2) < 70.0)))) {
      bVar23 = true;
    }
  }
  dVar41 = (double)fVar6;
  if (moby->enabled == '\0') {
    *(int *)((int)pvVar10 + 0xa8) = *(int *)((int)pvVar10 + 0xa8) + 1;
  }
  else if (bVar23) {
    *(undefined4 *)((int)pvVar10 + 0xa8) = 0;
  }
  bVar4 = moby->state;
  if (bVar4 == 0) {
    if (-1 < (int)(uint)bVar4) {
      if (spline == (Spline *)0x0) {
        libc::printf("no path for moby 1214 #%d: killing\n",moby->uid);
        mobyfunc::DeleteMoby(moby);
        return;
      }
      iVar28 = path::PathFindClosestPnt(0.0,(Vec4 *)&moby->pos,spline);
      *(int *)((int)pvVar10 + 0xb4) = iVar28;
      auVar52 = ZEXT416(0xffffffff);
      auVar52 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
      iVar28 = (iVar28 + 1) - ((iVar28 + 1) / spline->cnt) * spline->cnt;
      auVar53 = vectorShiftLeftIntegerWord(auVar52,auVar52);
      *(int *)((int)pvVar10 + 0xb4) = iVar28;
      *(undefined4 *)((int)pvVar10 + 0x90) = *(undefined4 *)((int)spline + iVar28 * 0x10 + 0x10);
      *(undefined4 *)((int)pvVar10 + 0x94) = *(undefined4 *)((int)spline + iVar28 * 0x10 + 0x14);
      *(undefined4 *)((int)pvVar10 + 0x98) = *(undefined4 *)((int)spline + iVar28 * 0x10 + 0x18);
      *(undefined4 *)((int)pvVar10 + 0x9c) = *(undefined4 *)((int)spline + iVar28 * 0x10 + 0x1c);
      auVar52 = loadVectorLeftIndexed(8,0x206c44);
      auVar51 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar52 = auVar52 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar52 = vectorMultiplyAddFloatingPoint
                          (auVar51,auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,
                           auVar53);
      auVar52 = vectorConvertToSignedFixedPointWordSaturate(auVar52,0);
      auVar52 = ZEXT416(auVar52._0_4_ + 5) & (undefined1  [16])0xffffffff;
      uVar13 = storeVectorElementWordIndexed
                         (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,0xa8,uVar35)
      ;
      *(undefined4 *)((int)pvVar10 + 0xa8U & 0xfffffffc) = uVar13;
      mobyfunc::SetColorOfMoby(moby,0,0,0xff);
      moby->setByGroup = '\0';
      moby->state = '\x01';
    }
  }
  else if (bVar4 < 2) {
    fVar6 = *(float *)((int)pvVar10 + 0x90) - (moby->pos).x;
    fVar1 = *(float *)((int)pvVar10 + 0x94) - (moby->pos).y;
    dVar40 = 0.0;
    dVar49 = (double)(*(float *)((int)pvVar10 + 0x98) - (moby->pos).z);
    fVar8 = ABS(fVar6);
    fVar2 = ABS(fVar1);
    fVar3 = fVar8 - fVar2;
    fVar7 = fVar8;
    if (fVar3 - 0.0 < 0.0) {
      fVar7 = fVar2;
    }
    fVar9 = fVar2;
    if (fVar3 - 0.0 < 0.0) {
      fVar9 = fVar8;
    }
    if (0.0 < fVar7) {
      lVar25 = uVar24 - 0x270;
      lVar33 = uVar24 - 0xf8;
      lVar30 = uVar24 - 0x108;
      lVar36 = 2;
      fVar7 = (fVar9 - fVar7) / (fVar9 + fVar7);
      fVar9 = fVar7 * fVar7;
      *(float *)((int)puVar14 + 0x184) = fVar7;
      *(float *)((int)puVar14 + 0x17c) = fVar7;
      *(float *)(puVar14 + 0x30) = fVar7;
      *(float *)(puVar14 + 0x2f) = fVar7;
      fVar7 = fVar9 * fVar9;
      *(float *)((int)puVar14 + 0x17c) = *(float *)((int)puVar14 + 0x17c) * fVar9;
      *(float *)(puVar14 + 0x30) = *(float *)(puVar14 + 0x30) * fVar7;
      *(float *)((int)puVar14 + 0x184) = *(float *)((int)puVar14 + 0x184) * fVar7 * fVar9;
      do {
        *(float *)((int)lVar25 + 0x178) = *(float *)((int)lVar25 + 0x168) * fVar7 * fVar7;
        iVar32 = (int)lVar30;
        lVar30 = lVar30 + 8;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar33 + 4) = *(float *)(iVar32 + 4) * fVar7 * fVar7;
        lVar33 = lVar33 + 8;
        lVar36 = lVar36 + -1;
      } while (lVar36 != 0);
      pfVar31 = (float *)&DAT_007358e0;
      lVar25 = uVar24 - 0x108;
      lVar30 = 4;
      uVar26 = uVar27;
      do {
        fVar7 = *pfVar31;
        fVar9 = pfVar31[1];
        pfVar31 = pfVar31 + 2;
        *(float *)((int)uVar26 + 0x178) = *(float *)((int)uVar26 + 0x178) * fVar7;
        uVar26 = uVar26 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar9;
        lVar25 = lVar25 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
    }
    dVar44 = ABS(dVar49);
    dVar46 = (double)SQRT(fVar6 * fVar6 + fVar1 * fVar1);
    dVar45 = ABS(dVar46);
    dVar43 = (double)(float)(dVar45 - dVar44);
    dVar48 = dVar45;
    if (dVar43 - 0.0 < 0.0) {
      dVar48 = dVar44;
    }
    dVar39 = dVar44;
    if (dVar43 - 0.0 < 0.0) {
      dVar39 = dVar45;
    }
    if (0.0 < dVar48) {
      lVar25 = uVar24 - 0x270;
      lVar33 = uVar24 - 0x118;
      lVar30 = uVar24 - 0x128;
      lVar36 = 2;
      fVar7 = (float)(dVar39 - dVar48) / (float)(dVar39 + dVar48);
      fVar9 = fVar7 * fVar7;
      *(float *)((int)puVar14 + 0x164) = fVar7;
      *(float *)((int)puVar14 + 0x15c) = fVar7;
      *(float *)(puVar14 + 0x2c) = fVar7;
      *(float *)(puVar14 + 0x2b) = fVar7;
      fVar7 = fVar9 * fVar9;
      *(float *)((int)puVar14 + 0x15c) = *(float *)((int)puVar14 + 0x15c) * fVar9;
      *(float *)(puVar14 + 0x2c) = *(float *)(puVar14 + 0x2c) * fVar7;
      *(float *)((int)puVar14 + 0x164) = *(float *)((int)puVar14 + 0x164) * fVar7 * fVar9;
      do {
        *(float *)((int)lVar25 + 0x158) = *(float *)((int)lVar25 + 0x148) * fVar7 * fVar7;
        iVar32 = (int)lVar30;
        lVar30 = lVar30 + 8;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar33 + 4) = *(float *)(iVar32 + 4) * fVar7 * fVar7;
        lVar33 = lVar33 + 8;
        lVar36 = lVar36 + -1;
      } while (lVar36 != 0);
      pfVar31 = (float *)&DAT_007358e0;
      lVar25 = uVar24 - 0x128;
      lVar30 = 4;
      uVar26 = uVar27;
      do {
        fVar7 = *pfVar31;
        fVar9 = pfVar31[1];
        pfVar31 = pfVar31 + 2;
        *(float *)((int)uVar26 + 0x158) = *(float *)((int)uVar26 + 0x158) * fVar7;
        uVar26 = uVar26 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar9;
        lVar25 = lVar25 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
    }
    *(float *)((int)puVar14 + 0x10c) = fVar6;
    *(float *)((int)puVar14 + 0x114) = fVar3;
    *(float *)(puVar14 + 0x22) = fVar1;
    dVar48 = 0.7853981852531433;
    uVar34 = (ulonglong)(*(uint *)((int)puVar14 + 0x10c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar14 + 0x114) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar14 + 0x22) >> 0x1d) & 4;
    uVar26 = uVar34 << 2;
    fVar6 = ABS(*(float *)((int)puVar14 + 0x10c));
    if (*(float *)((int)puVar14 + 0x114) - 0.0 < 0.0) {
      fVar6 = fVar2;
    }
    fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)uVar26);
    fVar2 = ABS(*(float *)(puVar14 + 0x22));
    if (*(float *)((int)puVar14 + 0x114) - 0.0 < 0.0) {
      fVar2 = fVar8;
    }
    fVar3 = *(float *)(((uint)(uVar34 << 2) | 0x735900) + 4);
    dVar39 = dVar40;
    if (0.0 < fVar6) {
      lVar25 = uVar24 - 0x270;
      lVar33 = uVar24 - 0x138;
      lVar30 = uVar24 - 0x148;
      lVar36 = 2;
      fVar6 = (fVar2 - fVar6) / (fVar2 + fVar6);
      fVar2 = fVar6 * fVar6;
      *(float *)((int)puVar14 + 0x144) = fVar6;
      *(float *)((int)puVar14 + 0x13c) = fVar6;
      *(float *)(puVar14 + 0x28) = fVar6;
      *(float *)(puVar14 + 0x27) = fVar6;
      fVar6 = fVar2 * fVar2;
      *(float *)((int)puVar14 + 0x13c) = *(float *)((int)puVar14 + 0x13c) * fVar2;
      *(float *)(puVar14 + 0x28) = *(float *)(puVar14 + 0x28) * fVar6;
      *(float *)((int)puVar14 + 0x144) = *(float *)((int)puVar14 + 0x144) * fVar6 * fVar2;
      do {
        *(float *)((int)lVar25 + 0x138) = *(float *)((int)lVar25 + 0x128) * fVar6 * fVar6;
        iVar32 = (int)lVar30;
        lVar30 = lVar30 + 8;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar33 + 4) = *(float *)(iVar32 + 4) * fVar6 * fVar6;
        lVar33 = lVar33 + 8;
        lVar36 = lVar36 + -1;
      } while (lVar36 != 0);
      lVar33 = 4;
      lVar30 = uVar24 - 0x148;
      uVar26 = ZEXT48(&DAT_007358e0);
      uVar34 = uVar27;
      lVar25 = lVar30;
      do {
        pfVar31 = (float *)uVar26;
        fVar6 = pfVar31[1];
        uVar26 = uVar26 + 8;
        *(float *)((int)uVar34 + 0x138) = *(float *)((int)uVar34 + 0x138) * *pfVar31;
        uVar34 = uVar34 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar6;
        lVar25 = lVar25 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar25 = 2;
      uVar34 = uVar27;
      do {
        iVar32 = (int)uVar34;
        iVar15 = (int)lVar30;
        uVar34 = uVar34 + 0x10;
        lVar30 = lVar30 + 0x10;
        dVar39 = (double)((float)(dVar39 + (double)*(float *)(iVar32 + 0x138)) +
                          *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc)
                         );
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      dVar39 = (double)((float)(dVar39 + 0.7853981852531433) * fVar1 + fVar3);
    }
    dVar50 = 25.132741928100586;
    dVar47 = 6.2831854820251465;
    mobyutil::OrganicDeltAngSpeed
              (dVar39,(double)(DAT_0071f418 * 25.132742),(double)(DAT_0071f418 * 6.2831855),
               (double)(mobyutil::g_FrameTime * 25.132742),moby,uVar26,uVar35 + 0x88);
    *(float *)(puVar14 + 0x20) = (float)dVar46;
    *(float *)(puVar14 + 0x21) = (float)dVar43;
    *(float *)((int)puVar14 + 0x104) = (float)dVar49;
    fVar6 = (moby->rotation).y;
    dVar46 = (double)DAT_0071f418;
    dVar43 = (double)mobyutil::g_FrameTime;
    uVar34 = (ulonglong)(*(uint *)(puVar14 + 0x20) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar14 + 0x21) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar14 + 0x104) >> 0x1d) & 4;
    uVar26 = uVar34 << 2;
    dVar49 = ABS((double)*(float *)(puVar14 + 0x20));
    if ((double)*(float *)(puVar14 + 0x21) - dVar40 < 0.0) {
      dVar49 = dVar44;
    }
    uVar34 = uVar34 << 2 | 0x735900;
    fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)uVar26);
    dVar44 = ABS((double)*(float *)((int)puVar14 + 0x104));
    if ((double)*(float *)(puVar14 + 0x21) - dVar40 < 0.0) {
      dVar44 = dVar45;
    }
    fVar2 = *(float *)((int)uVar34 + 4);
    dVar45 = dVar40;
    if (dVar40 < dVar49) {
      lVar25 = uVar24 - 0x270;
      lVar33 = uVar24 - 0x158;
      lVar30 = uVar24 - 0x168;
      lVar36 = 2;
      fVar3 = (float)(dVar44 - dVar49) / (float)(dVar44 + dVar49);
      fVar7 = fVar3 * fVar3;
      *(float *)((int)puVar14 + 0x124) = fVar3;
      *(float *)((int)puVar14 + 0x11c) = fVar3;
      *(float *)(puVar14 + 0x24) = fVar3;
      *(float *)(puVar14 + 0x23) = fVar3;
      fVar3 = fVar7 * fVar7;
      *(float *)((int)puVar14 + 0x11c) = *(float *)((int)puVar14 + 0x11c) * fVar7;
      *(float *)(puVar14 + 0x24) = *(float *)(puVar14 + 0x24) * fVar3;
      *(float *)((int)puVar14 + 0x124) = *(float *)((int)puVar14 + 0x124) * fVar3 * fVar7;
      do {
        *(float *)((int)lVar25 + 0x118) = *(float *)((int)lVar25 + 0x108) * fVar3 * fVar3;
        iVar32 = (int)lVar30;
        lVar30 = lVar30 + 8;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar33 + 4) = *(float *)(iVar32 + 4) * fVar3 * fVar3;
        lVar33 = lVar33 + 8;
        lVar36 = lVar36 + -1;
      } while (lVar36 != 0);
      lVar33 = 4;
      lVar30 = uVar24 - 0x168;
      uVar26 = ZEXT48(&DAT_007358e0);
      uVar34 = uVar27;
      lVar25 = lVar30;
      do {
        pfVar31 = (float *)uVar26;
        fVar3 = pfVar31[1];
        uVar26 = uVar26 + 8;
        *(float *)((int)uVar34 + 0x118) = *(float *)((int)uVar34 + 0x118) * *pfVar31;
        uVar34 = uVar34 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar3;
        lVar25 = lVar25 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar25 = 2;
      dVar49 = dVar40;
      do {
        iVar32 = (int)uVar27;
        iVar15 = (int)lVar30;
        uVar27 = uVar27 + 0x10;
        lVar30 = lVar30 + 0x10;
        dVar49 = (double)((float)(dVar49 + (double)*(float *)(iVar32 + 0x118)) +
                          *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc)
                         );
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      uVar34 = uVar27;
      dVar45 = (double)((float)(dVar49 + dVar48) * fVar1 + fVar2);
    }
    dVar49 = (double)mobyutil::MB_DeltAngSpeed
                               ((double)fVar6,-dVar45,(double)(float)(dVar46 * dVar50),
                                (double)(float)(dVar46 * dVar47),(double)(float)(dVar43 * dVar50),
                                uVar34,uVar26,uVar35 + 0x84);
    (moby->rotation).y = (float)dVar49;
    fVar6 = (moby->rotation).x;
    fVar6 = fVar6 + -(*(float *)((int)pvVar10 + 0x88) * (1.5707964 - ABS(fVar6)) * 0.63661975);
    if (1.5707964 - fVar6 < 0.0) {
      fVar6 = 1.5707964;
    }
    if (fVar6 - -1.5707964 < 0.0) {
      fVar6 = -1.5707964;
    }
    (moby->rotation).x = fVar6 * 0.98;
    mobyutil::MB_WrapRot(fVar6 * 0.98);
    dVar48 = 20.0;
    mobyutil::MB_SphericalToVector
              (mobyutil::g_FrameTime * 20.0,(moby->rotation).z,-(moby->rotation).y,
               (float *)((int)pvVar10 + 0x70));
    fVar6 = (moby->pos).x + *(float *)((int)pvVar10 + 0x70);
    (moby->pos).x = fVar6;
    fVar1 = (moby->pos).y + *(float *)((int)pvVar10 + 0x74);
    (moby->pos).y = fVar1;
    fVar2 = (moby->pos).z + *(float *)((int)pvVar10 + 0x78);
    (moby->pos).z = fVar2;
    fVar1 = fVar1 - *(float *)((int)pvVar10 + 0x94);
    fVar6 = fVar6 - *(float *)((int)pvVar10 + 0x90);
    fVar2 = fVar2 - *(float *)((int)pvVar10 + 0x98);
    dVar49 = (double)mobyutil::g_FrameTime;
    if (SQRT(fVar2 * fVar2 + fVar6 * fVar6 + fVar1 * fVar1) < (float)(dVar49 * dVar48)) {
      iVar32 = *(int *)((int)pvVar10 + 0xb4);
      do {
        iVar32 = (iVar32 + 1) - ((iVar32 + 1) / spline->cnt) * spline->cnt;
        pfVar31 = (float *)((int)spline + iVar32 * 0x10 + 0x10);
        *(int *)((int)pvVar10 + 0xb4) = iVar32;
        fVar6 = *pfVar31;
        *(float *)((int)pvVar10 + 0x90) = fVar6;
        fVar1 = pfVar31[1];
        *(float *)((int)pvVar10 + 0x94) = fVar1;
        fVar2 = pfVar31[2];
        *(float *)((int)pvVar10 + 0x98) = fVar2;
        *(float *)((int)pvVar10 + 0x9c) = pfVar31[3];
        fVar1 = (moby->pos).y - fVar1;
        fVar6 = (moby->pos).x - fVar6;
        fVar2 = (moby->pos).z - fVar2;
      } while (SQRT(fVar2 * fVar2 + fVar6 * fVar6 + fVar1 * fVar1) < (float)(dVar49 * dVar48));
    }
    bVar4 = moby->setByGroup;
    if (bVar4 == 0) {
      if (((iVar28 != 0) && (*(char *)(iVar29 + 0x20) == '\x04')) &&
         (bVar23 && moby->enabled != '\0')) {
        auVar52 = ZEXT416(0xffffffff);
        auVar52 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
        auVar51 = vectorShiftLeftIntegerWord(auVar52,auVar52);
        auVar52 = loadVectorLeftIndexed(0x2c,0x206c44);
        auVar52 = auVar52 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar53 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar52 = vectorMultiplyAddFloatingPoint
                            (auVar53,auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,
                             auVar51);
        auVar52 = vectorConvertToSignedFixedPointWordSaturate(auVar52,0);
        auVar52 = auVar52 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar13 = storeVectorElementWordIndexed
                           (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,0xb8,
                            uVar35);
        *(undefined4 *)((int)pvVar10 + 0xb8U & 0xfffffffc) = uVar13;
        *(undefined4 *)((int)pvVar10 + 0xa8) = 0;
        *(undefined4 *)((int)pvVar10 + 0xac) = 0x3f800000;
        moby->setByGroup = '\x01';
      }
    }
    else if (bVar4 < 2) {
      cVar5 = moby->enabled;
      if (cVar5 == '\0') {
        *(int *)((int)pvVar10 + 0xa8) = *(int *)((int)pvVar10 + 0xa8) + 1;
        cVar5 = moby->enabled;
      }
      if ((!bVar23 || cVar5 == '\0') ||
         (iVar29 = *(int *)((int)pvVar10 + 0xa8),
         puVar14[0x33] = (longlong)(int)(animationSpeed * 20.5),
         *(int *)((int)puVar14 + 0x19c) <= iVar29)) {
        auVar52 = ZEXT416(0xffffffff);
        auVar52 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
        auVar51 = vectorShiftLeftIntegerWord(auVar52,auVar52);
        auVar52 = loadVectorLeftIndexed(0x30,0x206c44);
        auVar52 = auVar52 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar53 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar52 = vectorMultiplyAddFloatingPoint
                            (auVar53,auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,
                             auVar51);
        auVar52 = vectorConvertToSignedFixedPointWordSaturate(auVar52,0);
        auVar52 = auVar52 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar13 = storeVectorElementWordIndexed
                           (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,0xb8,
                            uVar35);
        *(undefined4 *)((int)pvVar10 + 0xb8U & 0xfffffffc) = uVar13;
        moby->setByGroup = '\x02';
      }
      iVar29 = fastfunc::FastDecTimerS32(uVar35 + 0xb8);
      if (iVar29 != 0) {
        auVar52 = ZEXT416(0xffffffff);
        auVar52 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
        auVar51 = vectorShiftLeftIntegerWord(auVar52,auVar52);
        auVar52 = loadVectorLeftIndexed(0x34,0x206c44);
        auVar52 = auVar52 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar53 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar52 = vectorMultiplyAddFloatingPoint
                            (auVar53,auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,
                             auVar51);
        auVar52 = vectorConvertToSignedFixedPointWordSaturate(auVar52,0);
        auVar52 = auVar52 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar13 = storeVectorElementWordIndexed
                           (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,0xb8,
                            uVar35);
        *(undefined4 *)((int)pvVar10 + 0xb8U & 0xfffffffc) = uVar13;
        moby->setByGroup = '\x02';
      }
      iVar29 = fastfunc::FastDecTimerS32(uVar35 + 0xa4);
      if (iVar29 != 0) {
        auVar52 = ZEXT416(0xffffffff);
        auVar52 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
        auVar51 = vectorShiftLeftIntegerWord(auVar52,auVar52);
        auVar52 = loadVectorLeftIndexed(0x38,0x206c44);
        auVar52 = auVar52 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar53 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        fVar6 = *(float *)((int)pvVar10 + 0xb0);
        auVar52 = vectorMultiplyAddFloatingPoint
                            (auVar53,auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,
                             auVar51);
        auVar52 = vectorConvertToSignedFixedPointWordSaturate(auVar52,0);
        auVar52 = auVar52 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar13 = storeVectorElementWordIndexed
                           (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,0xa4,
                            uVar35);
        *(undefined4 *)((int)pvVar10 + 0xa4U & 0xfffffffc) = uVar13;
        fVar1 = *(float *)(iVar28 + 0x10);
        fVar8 = *(float *)(iVar28 + 0x18) * fVar1;
        fVar2 = *(float *)(iVar28 + 0x14);
        fVar9 = fVar2 * *(float *)(iVar28 + 0x18);
        fVar3 = fVar6 + 1.5707963;
        fVar17 = -fVar9;
        fVar7 = 3.1415925 - fVar6;
        if (fVar6 - (3.1415925 - fVar6) < 0.0) {
          fVar7 = fVar6;
        }
        fVar21 = fVar1 * fVar1 - -(fVar2 * fVar2);
        fVar16 = -3.1415925 - fVar6;
        if ((-3.1415925 - fVar6) - fVar7 < 0.0) {
          fVar16 = fVar7;
        }
        dVar49 = (double)SQRT(fVar1 * fVar1 + --(fVar2 * fVar2));
        fVar6 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar6 = fVar3;
        }
        fVar7 = fVar16 * fVar16;
        fVar22 = *(float *)((int)pvVar10 + 0xac) * 6.0;
        dVar48 = (double)SQRT(fVar21 * fVar21 + fVar17 * fVar17 + --(fVar8 * fVar8));
        dVar46 = 1.0;
        *(float *)((int)puVar14 + 0xcc) = (float)dVar41;
        fVar20 = fVar7 * fVar7 * fVar16;
        fVar17 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar6 < 0.0) {
          fVar17 = fVar6;
        }
        fVar6 = fVar7 * fVar20;
        fVar3 = fVar17 * fVar17;
        fVar18 = fVar3 * fVar3 * fVar17;
        fVar19 = fVar3 * fVar18;
        fVar6 = (float)((double)(fVar22 * (fVar7 * fVar6 * 2.601887e-06 +
                                          fVar6 * -0.0001980741 +
                                          fVar20 * 0.0083330255 +
                                          fVar7 * fVar16 * -0.16666657 + fVar16)) / dVar48);
        fVar3 = (float)((double)(fVar22 * (fVar3 * fVar19 * 2.601887e-06 +
                                          fVar19 * -0.0001980741 +
                                          fVar18 * 0.0083330255 +
                                          fVar3 * fVar17 * -0.16666657 + fVar17)) / dVar49);
        dVar43 = -(double)(fVar9 * fVar6);
        dVar41 = dVar40;
        if (dVar40 - dVar48 < 0.0) {
          dVar41 = (double)(fVar21 * fVar6);
        }
        dVar44 = dVar40;
        if (dVar40 - dVar48 < 0.0) {
          dVar44 = dVar43;
        }
        dVar45 = dVar40;
        if (dVar40 - dVar48 < 0.0) {
          dVar45 = -(double)(fVar8 * fVar6);
        }
        if (dVar48 - dVar40 < 0.0) {
          dVar41 = (double)(fVar21 * fVar6);
        }
        if (dVar48 - dVar40 < 0.0) {
          dVar44 = dVar43;
        }
        if (dVar48 - dVar40 < 0.0) {
          dVar45 = -(double)(fVar8 * fVar6);
        }
        *(float *)(puVar14 + 0x19) = (float)(dVar38 + dVar41);
        dVar48 = (double)(fVar1 * fVar3);
        dVar41 = -(double)(fVar2 * fVar3);
        dVar38 = dVar40;
        if (dVar40 - dVar49 < 0.0) {
          dVar38 = dVar48;
        }
        dVar43 = dVar40;
        if (dVar40 - dVar49 < 0.0) {
          dVar43 = dVar41;
        }
        if (dVar49 - dVar40 < 0.0) {
          dVar38 = dVar48;
        }
        if (dVar49 - dVar40 < 0.0) {
          dVar43 = dVar41;
        }
        *(float *)((int)puVar14 + 0xc4) = (float)((double)(float)(dVar37 + dVar44) + dVar38);
        *(float *)(puVar14 + 0x18) = (float)((double)(float)(dVar42 + dVar45) + dVar43);
        mobyutil::MB_RandomizeVector(0.6,(float *)(uVar24 - 0x1c0));
        fVar7 = mobyutil::g_FrameTime;
        dVar42 = (double)(moby->pos).y;
        dVar41 = (double)(moby->pos).x;
        fVar1 = *(float *)(iVar28 + 0x14);
        fVar2 = *(float *)(iVar28 + 0x10);
        fVar3 = *(float *)(iVar28 + 0x18);
        dVar49 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
        dVar38 = (double)(moby->pos).z;
        fVar6 = (float)((double)(*(float *)(iVar28 + 100) *
                                (SQRT((float)(dVar41 - (double)g_heroPosition.x) *
                                      (float)(dVar41 - (double)g_heroPosition.x) +
                                      (float)(dVar42 - (double)g_heroPosition.y) *
                                      (float)(dVar42 - (double)g_heroPosition.y)) /
                                (mobyutil::g_FrameTime * 50.0 + *(float *)(iVar28 + 100)))) / dVar49
                       );
        *(undefined4 *)((int)puVar14 + 0xdc) = *(undefined4 *)((int)puVar14 + 0xcc);
        dVar37 = dVar40;
        if (dVar40 - dVar49 < 0.0) {
          dVar37 = (double)(fVar1 * fVar6);
        }
        dVar48 = dVar40;
        if (dVar40 - dVar49 < 0.0) {
          dVar48 = (double)(fVar2 * fVar6);
        }
        dVar43 = dVar40;
        if (dVar40 - dVar49 < 0.0) {
          dVar43 = (double)(fVar3 * fVar6);
        }
        if (dVar49 - dVar40 < 0.0) {
          dVar37 = (double)(fVar1 * fVar6);
        }
        if (dVar49 - dVar40 < 0.0) {
          dVar48 = (double)(fVar2 * fVar6);
        }
        if (dVar49 - dVar40 < 0.0) {
          dVar43 = (double)(fVar3 * fVar6);
        }
        fVar1 = (float)((double)(float)((double)*(float *)((int)puVar14 + 0xc4) + dVar37) - dVar42);
        fVar2 = (float)((double)(float)((double)*(float *)(puVar14 + 0x18) + dVar48) - dVar41);
        fVar3 = (float)((double)(float)((double)*(float *)(puVar14 + 0x19) + dVar43) - dVar38);
        dVar49 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
        fVar6 = (float)(2.5999999046325684 / dVar49);
        dVar37 = dVar40;
        if (dVar40 - dVar49 < 0.0) {
          dVar37 = (double)(fVar3 * fVar6);
        }
        dVar48 = dVar40;
        if (dVar40 - dVar49 < 0.0) {
          dVar48 = (double)(fVar1 * fVar6);
        }
        dVar43 = dVar40;
        if (dVar40 - dVar49 < 0.0) {
          dVar43 = (double)(fVar2 * fVar6);
        }
        if (dVar49 - dVar40 < 0.0) {
          dVar37 = (double)(fVar3 * fVar6);
        }
        if (dVar49 - dVar40 < 0.0) {
          dVar48 = (double)(fVar1 * fVar6);
        }
        if (dVar49 - dVar40 < 0.0) {
          dVar43 = (double)(fVar2 * fVar6);
        }
        *(float *)(puVar14 + 0x1b) = (float)(dVar37 + dVar38);
        *(float *)((int)puVar14 + 0xd4) = (float)(dVar48 + dVar42);
        *(float *)(puVar14 + 0x1a) = (float)(dVar43 + dVar41);
        *(float *)(puVar14 + 0x19) = fVar3;
        *(float *)((int)puVar14 + 0xc4) = fVar1;
        *(float *)(puVar14 + 0x18) = fVar2;
        FUN_00187e00(0x4059000000000000,(double)(fVar7 * 50.0),0x4024000000000000,moby,
                     uVar24 - 0x1c0,uVar24 - 0x1b0);
        uVar12 = (int)*(uint *)((int)pvVar10 + 0xb0) >> 0x1f;
        *(float *)((int)pvVar10 + 0xac) =
             *(float *)((int)pvVar10 + 0xac) *
             (float)((double)DAT_0071f408 * -0.06999999284744263 + dVar46);
        if ((int)((uVar12 >> 1 ^ *(uint *)((int)pvVar10 + 0xb0)) - uVar12) < 0x3fc90fdc) {
          fVar6 = mobyutil::g_FrameTime * 0.5235988 + *(float *)((int)pvVar10 + 0xb0);
        }
        else {
          fVar6 = -(mobyutil::g_FrameTime * 0.5235988 - *(float *)((int)pvVar10 + 0xb0));
        }
        *(float *)((int)pvVar10 + 0xb0) = fVar6;
      }
    }
    else if ((bVar4 < 3) && (iVar28 = fastfunc::FastDecTimerS32(uVar35 + 0xb8), iVar28 != 0)) {
      moby->setByGroup = '\0';
    }
  }
  else if (bVar4 < 3) {
    fVar6 = GameCamera.posX - (moby->pos).x;
    fVar1 = GameCamera.posY - (moby->pos).y;
    fVar2 = GameCamera.posZ - (moby->pos).z;
    *(char (*) [4])((int)puVar14 + 0xec) = GameCamera.field8_0x14c;
    *(float *)(puVar14 + 0x1c) = fVar6;
    *(float *)((int)puVar14 + 0xe4) = fVar1;
    *(float *)(puVar14 + 0x1d) = fVar2;
    dVar42 = 0.0;
    dVar37 = 4.0;
    puVar14[0x12] = 0xffffffffffffffff;
    puVar14[0x14] = 0;
    puVar14[0x15] = 1;
    puVar14[0x16] = 0xffffffffffffffff;
    puVar14[0x17] = 0;
    mobyutil::MB_genericExplosion
              (0,0,0x4010000000000000,0x4008000000000000,0x4022000000000000,0x3ff19999a0000000,
               0x4034000000000000,moby,uVar24 - 0x1a0,0,1,0xffffffffffffffff,5,3,10);
    fVar1 = *(float *)((int)puVar14 + 0xe4);
    fVar2 = *(float *)(puVar14 + 0x1c);
    fVar3 = *(float *)(puVar14 + 0x1d);
    fVar7 = (moby->pos).x;
    fVar8 = (moby->pos).y;
    fVar9 = (moby->pos).z;
    *(f32 *)((int)puVar14 + 0xfc) = (moby->pos).w;
    dVar38 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
    fVar6 = (float)(dVar37 / dVar38);
    dVar37 = dVar42;
    if (dVar42 - dVar38 < 0.0) {
      dVar37 = (double)(fVar2 * fVar6);
    }
    dVar41 = dVar42;
    if (dVar42 - dVar38 < 0.0) {
      dVar41 = (double)(fVar1 * fVar6);
    }
    dVar40 = dVar42;
    if (dVar42 - dVar38 < 0.0) {
      dVar40 = (double)(fVar3 * fVar6);
    }
    if (dVar38 - dVar42 < 0.0) {
      dVar37 = (double)(fVar2 * fVar6);
    }
    if (dVar38 - dVar42 < 0.0) {
      dVar41 = (double)(fVar1 * fVar6);
    }
    if (dVar38 - dVar42 < 0.0) {
      dVar40 = (double)(fVar3 * fVar6);
    }
    *(float *)(puVar14 + 0x1c) = (float)dVar37;
    *(float *)((int)puVar14 + 0xe4) = (float)dVar41;
    *(float *)(puVar14 + 0x1d) = (float)dVar40;
    *(float *)(puVar14 + 0x1e) = (float)((double)fVar7 - dVar37);
    *(float *)((int)puVar14 + 0xf4) = (float)((double)fVar8 - dVar41);
    *(float *)(puVar14 + 0x1f) = (float)((double)fVar9 - dVar40);
    *(float *)(puVar14 + 0x1c) = *(float *)((int)pvVar10 + 0x70) * 0.5;
    *(float *)((int)puVar14 + 0xe4) = *(float *)((int)pvVar10 + 0x74) * 0.5;
    *(float *)(puVar14 + 0x1d) = *(float *)((int)pvVar10 + 0x78) * 0.5;
    *(undefined4 *)((int)puVar14 + 0xec) = *(undefined4 *)((int)pvVar10 + 0x7c);
    iVar28 = rand();
    iVar28 = iVar28 % 10;
    if (iVar28 < 1) {
      if (-1 < iVar28) {
        mobyupdate_helpers::M1215_0020ab50(uVar24 - 400,uVar24 - 0x1a0,0x4c4);
      }
    }
    else if (iVar28 < 7) {
      mobyupdate_helpers::M1215_0020ab50(uVar24 - 400,uVar24 - 0x1a0,0x4c2);
    }
    else if (iVar28 < 10) {
      FUN_0021b5e8(uVar24 - 400,uVar24 - 0x1a0,0x4d9);
    }
    mobyfunc::DeleteMoby(moby);
    return;
  }
  fVar11 = (moby->pos).x;
  uVar12 = (int)fVar11 >> 0x1f;
  fVar6 = 20.0;
  fVar1 = (moby->pos).x;
  if ((int)((uVar12 >> 1 ^ (uint)fVar11) - uVar12) < 0x41a00000) {
    (moby->pos).x = 20.0;
    fVar1 = fVar6;
  }
  if (1003.0 < fVar1) {
    (moby->pos).x = 1003.0;
  }
  fVar11 = (moby->pos).y;
  uVar12 = (int)fVar11 >> 0x1f;
  fVar1 = (moby->pos).y;
  if ((int)((uVar12 >> 1 ^ (uint)fVar11) - uVar12) < 0x41a00000) {
    (moby->pos).y = 20.0;
    fVar1 = fVar6;
  }
  if (1003.0 < fVar1) {
    (moby->pos).y = 1003.0;
  }
  fVar11 = (moby->pos).z;
  uVar12 = (int)fVar11 >> 0x1f;
  fVar1 = (moby->pos).z;
  if ((int)((uVar12 >> 1 ^ (uint)fVar11) - uVar12) < 0x41a00000) {
    (moby->pos).z = 20.0;
    fVar1 = fVar6;
  }
  if (1003.0 < fVar1) {
    (moby->pos).z = 1003.0;
  }
  mobyutil::MB_RegisterLameShadow(3.0,moby);
  return;
}



//==== 00207ff4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1215_00207ff4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1215_00207ff4(void)

{
  DAT_00766930 = 0x10000;
  return;
}



//==== 00208018  ns=mobyupdate_helpers  size=0x2a8
// sig: undefined M1215_00208018(void)
// callers(1): 00209508 mobyupdate_unsorted::UpdateMoby_1215
// callees(5): 000fea60 mobyutil::MB_randSphere; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby

void mobyupdate_helpers::M1215_00208018(MobyInstance *param_1,longlong param_2,undefined8 param_3)

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
        auVar8 = loadVectorLeftIndexed(in_LR,0x208008);
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



//==== 002082e8  ns=mobyupdate_helpers  size=0x58c
// sig: undefined M1215_002082e8(void)
// callers(0): 
// callees(5): 00065468 stub::STUB_00065468; 000fe610 mobyutil::MB_SphericalToVector; 000ff190 mobyutil::MB_DeltAngSpeed; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 0010de78 mobyutil::MB_WrapRot

bool mobyupdate_helpers::M1215_002082e8
               (double param_1,int param_2,float *param_3,float *param_4,undefined8 param_5,
               undefined8 param_6)

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
  float fVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  float *pfVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  ulonglong in_f25;
  double dVar23;
  ulonglong in_f26;
  double dVar24;
  ulonglong in_f27;
  double dVar25;
  ulonglong in_f28;
  double dVar26;
  ulonglong in_f29;
  double dVar27;
  ulonglong in_f30;
  double dVar28;
  ulonglong in_f31;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0x140;
  puVar7 = (ulonglong *)lVar13;
  *puVar7 = uVar11;
  puVar7[0x2a] = in_LR;
  puVar7[0x21] = in_f25;
  puVar7[0x22] = in_f26;
  puVar7[0x23] = in_f27;
  puVar7[0x24] = in_f28;
  puVar7[0x25] = in_f29;
  puVar7[0x26] = in_f30;
  puVar7[0x27] = in_f31;
  fVar1 = *param_4 - *(float *)(param_2 + 0x10);
  dVar28 = (double)fVar1;
  fVar5 = param_4[1] - *(float *)(param_2 + 0x14);
  dVar27 = (double)fVar5;
  puVar7[0x1c] = unaff_r27;
  puVar7[0x20] = unaff_r31;
  puVar7[0x1f] = unaff_r30;
  *(float *)((int)puVar7 + 0x7c) = fVar1;
  *(float *)(puVar7 + 0x10) = fVar5;
  puVar7[0x1e] = unaff_r29;
  dVar26 = (double)param_4[2];
  puVar7[0x1d] = unaff_r28;
  *(float *)((int)puVar7 + 0x84) = (float)(ABS(dVar28) - ABS(dVar27));
  dVar23 = 0.0;
  dVar24 = (double)*(float *)(param_2 + 0x18);
  uVar18 = (ulonglong)(*(uint *)((int)puVar7 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar7 + 0x10) >> 0x1d) & 4;
  dVar21 = ABS((double)*(float *)((int)puVar7 + 0x7c));
  if (*(float *)((int)puVar7 + 0x84) - 0.0 < 0.0) {
    dVar21 = ABS(dVar27);
  }
  fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
  fVar1 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
  dVar22 = ABS((double)*(float *)(puVar7 + 0x10));
  if (*(float *)((int)puVar7 + 0x84) - 0.0 < 0.0) {
    dVar22 = ABS(dVar28);
  }
  dVar25 = 0.7853981852531433;
  puVar7[0x1b] = unaff_r26;
  puVar7[0x1a] = unaff_r25;
  dVar20 = dVar23;
  pfVar16 = param_3;
  if (0.0 < dVar21) {
    lVar12 = uVar11 - 0x130;
    lVar17 = uVar11 - 0x88;
    lVar15 = uVar11 - 0x98;
    lVar19 = 2;
    fVar2 = (float)(dVar22 - dVar21) / (float)(dVar22 + dVar21);
    fVar3 = fVar2 * fVar2;
    *(float *)((int)puVar7 + 0xb4) = fVar2;
    *(float *)((int)puVar7 + 0xac) = fVar2;
    *(float *)(puVar7 + 0x16) = fVar2;
    *(float *)(puVar7 + 0x15) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)((int)puVar7 + 0xac) = *(float *)((int)puVar7 + 0xac) * fVar3;
    *(float *)(puVar7 + 0x16) = *(float *)(puVar7 + 0x16) * fVar2;
    *(float *)((int)puVar7 + 0xb4) = *(float *)((int)puVar7 + 0xb4) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar12 + 0xa8) = *(float *)((int)lVar12 + 0x98) * fVar2 * fVar2;
      iVar8 = (int)lVar15;
      lVar15 = lVar15 + 8;
      lVar12 = lVar12 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar8 + 4) * fVar2 * fVar2;
      lVar17 = lVar17 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar19 = 4;
    lVar17 = uVar11 - 0x98;
    pfVar16 = (float *)&DAT_007358e0;
    lVar12 = lVar13;
    lVar15 = lVar17;
    do {
      fVar2 = *pfVar16;
      fVar3 = pfVar16[1];
      pfVar16 = pfVar16 + 2;
      *(float *)((int)lVar12 + 0xa8) = *(float *)((int)lVar12 + 0xa8) * fVar2;
      lVar12 = lVar12 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar3;
      lVar15 = lVar15 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar15 = 2;
    lVar12 = lVar13;
    dVar21 = dVar23;
    do {
      iVar8 = (int)lVar12;
      iVar9 = (int)lVar17;
      lVar12 = lVar12 + 0x10;
      lVar17 = lVar17 + 0x10;
      dVar21 = (double)((float)(dVar21 + (double)*(float *)(iVar8 + 0xa8)) + *(float *)(iVar9 + 4) +
                        *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    dVar20 = (double)((float)(dVar21 + 0.7853981852531433) * fVar5 + fVar1);
  }
  mobyutil::OrganicDeltAngSpeed
            (dVar20,(double)(DAT_0071f418 * 2.0943952),(double)(DAT_0071f418 * 0.6981317),
             (double)(mobyutil::g_FrameTime * 2.0943952),param_2,pfVar16,param_3 + 0x22);
  fVar3 = DAT_0071f418;
  fVar2 = mobyutil::g_FrameTime;
  fVar1 = *(float *)(param_2 + 0x44);
  dVar22 = ABS((double)(float)(dVar26 - dVar24));
  *(float *)((int)puVar7 + 0x74) = (float)(dVar26 - dVar24);
  fVar5 = SQRT((float)(dVar28 * dVar28 + (double)(float)(dVar27 * dVar27)));
  dVar24 = ABS((double)fVar5);
  *(float *)(puVar7 + 0xe) = fVar5;
  *(float *)(puVar7 + 0xf) = (float)(dVar24 - dVar22);
  uVar18 = (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar7 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x74) >> 0x1d) & 4;
  uVar14 = uVar18 << 2 | 0x735900;
  dVar21 = ABS((double)*(float *)(puVar7 + 0xe));
  if ((double)*(float *)(puVar7 + 0xf) - dVar23 < 0.0) {
    dVar21 = dVar22;
  }
  fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
  fVar5 = *(float *)((int)uVar14 + 4);
  dVar26 = ABS((double)*(float *)((int)puVar7 + 0x74));
  if ((double)*(float *)(puVar7 + 0xf) - dVar23 < 0.0) {
    dVar26 = dVar24;
  }
  if (dVar23 < dVar21) {
    lVar12 = uVar11 - 0x130;
    lVar17 = uVar11 - 0xa8;
    lVar15 = uVar11 - 0xb8;
    lVar19 = 2;
    fVar4 = (float)(dVar26 - dVar21) / (float)(dVar26 + dVar21);
    fVar10 = fVar4 * fVar4;
    *(float *)((int)puVar7 + 0x94) = fVar4;
    *(float *)((int)puVar7 + 0x8c) = fVar4;
    *(float *)(puVar7 + 0x12) = fVar4;
    *(float *)(puVar7 + 0x11) = fVar4;
    fVar4 = fVar10 * fVar10;
    *(float *)((int)puVar7 + 0x8c) = *(float *)((int)puVar7 + 0x8c) * fVar10;
    *(float *)(puVar7 + 0x12) = *(float *)(puVar7 + 0x12) * fVar4;
    *(float *)((int)puVar7 + 0x94) = *(float *)((int)puVar7 + 0x94) * fVar4 * fVar10;
    do {
      *(float *)((int)lVar12 + 0x88) = *(float *)((int)lVar12 + 0x78) * fVar4 * fVar4;
      iVar8 = (int)lVar15;
      lVar15 = lVar15 + 8;
      lVar12 = lVar12 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar8 + 4) * fVar4 * fVar4;
      lVar17 = lVar17 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar19 = 4;
    lVar17 = uVar11 - 0xb8;
    uVar14 = ZEXT48(&DAT_007358e0);
    lVar12 = lVar13;
    lVar15 = lVar17;
    do {
      pfVar16 = (float *)uVar14;
      fVar4 = pfVar16[1];
      uVar14 = uVar14 + 8;
      *(float *)((int)lVar12 + 0x88) = *(float *)((int)lVar12 + 0x88) * *pfVar16;
      lVar12 = lVar12 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar4;
      lVar15 = lVar15 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar12 = 2;
    do {
      iVar8 = (int)lVar13;
      iVar9 = (int)lVar17;
      lVar13 = lVar13 + 0x10;
      lVar17 = lVar17 + 0x10;
      dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar8 + 0x88)) + *(float *)(iVar9 + 4) +
                        *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    dVar23 = (double)((float)(dVar23 + dVar25) * fVar6 + fVar5);
  }
  dVar21 = (double)mobyutil::MB_DeltAngSpeed
                             ((double)fVar1,-dVar23,(double)(fVar3 * 3.1415927),
                              (double)(fVar3 * 0.87266463),(double)(fVar2 * 3.1415927),0x210000,
                              uVar14,param_3 + 0x21);
  *(float *)(param_2 + 0x44) = (float)dVar21;
  fVar1 = *(float *)(param_2 + 0x40) +
          -(param_3[0x22] * (1.5707964 - ABS(*(float *)(param_2 + 0x40))) * 0.63661975);
  if (1.5707964 - fVar1 < 0.0) {
    fVar1 = 1.5707964;
  }
  if (fVar1 - -1.5707964 < 0.0) {
    fVar1 = -1.5707964;
  }
  *(float *)(param_2 + 0x40) = fVar1 * 0.98;
  mobyutil::MB_WrapRot(fVar1 * 0.98);
  mobyutil::MB_SphericalToVector
            (param_3[0x28],*(float *)(param_2 + 0x48),-*(float *)(param_2 + 0x44),param_3 + 0x1c);
  *(float *)(param_2 + 0x10) = *(float *)(param_2 + 0x10) + param_3[0x1c];
  *(float *)(param_2 + 0x14) = *(float *)(param_2 + 0x14) + param_3[0x1d];
  *(float *)(param_2 + 0x18) = *(float *)(param_2 + 0x18) + param_3[0x1e];
  stub::STUB_00065468(param_2 + 0x10,param_4);
  stub::STUB_00065468(param_2 + 0x10,param_6);
  fVar1 = *(float *)(param_2 + 0x14) - param_4[1];
  fVar5 = *(float *)(param_2 + 0x10) - *param_4;
  return (double)SQRT(fVar5 * fVar5 + fVar1 * fVar1) < param_1;
}



//==== 002088c0  ns=mobyupdate_helpers  size=0xa30
// sig: undefined M1215_002088c0(void)
// callers(1): 00209508 mobyupdate_unsorted::UpdateMoby_1215
// callees(7): 000fe610 mobyutil::MB_SphericalToVector; 000ff190 mobyutil::MB_DeltAngSpeed; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00109af0 mobyutil::Delt; 0010de78 mobyutil::MB_WrapRot; 00502578 fastfunc::FastWrapRot; 005026a0 fastfunc::FastSubRots
// strings: 00208880: '=VwP' (raw)

bool mobyupdate_helpers::M1215_002088c0(double param_1,int param_2,int param_3,float *param_4)

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
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar28;
  ulonglong in_f28;
  double dVar29;
  ulonglong in_f29;
  double dVar30;
  ulonglong in_f30;
  double dVar31;
  double dVar32;
  ulonglong in_f31;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar1 = uVar16 - 0x180;
  puVar12 = (ulonglong *)lVar1;
  *puVar12 = uVar16;
  puVar12[0x32] = in_LR;
  puVar12[0x29] = in_f25;
  puVar12[0x2a] = in_f26;
  puVar12[0x2b] = in_f27;
  puVar12[0x2c] = in_f28;
  puVar12[0x2d] = in_f29;
  puVar12[0x2e] = in_f30;
  puVar12[0x2f] = in_f31;
  puVar12[0x21] = unaff_r24;
  fVar3 = param_4[2];
  puVar12[0x20] = unaff_r23;
  puVar12[0x28] = unaff_r31;
  puVar12[0x27] = unaff_r30;
  puVar12[0x26] = unaff_r29;
  fVar4 = *(float *)(param_2 + 0x18);
  fVar5 = *(float *)(param_3 + 0x78);
  fVar6 = *(float *)(param_3 + 0xa0);
  fVar7 = *(float *)(param_3 + 0x70);
  fVar8 = *(float *)(param_3 + 0x74);
  puVar12[0x25] = unaff_r28;
  puVar12[0x24] = unaff_r27;
  puVar12[0x23] = unaff_r26;
  puVar12[0x22] = unaff_r25;
  if (fVar4 < fVar3 - 30.0) {
    fVar5 = fVar5 * 0.5;
    *(float *)(param_3 + 0x78) = fVar5;
  }
  fVar3 = DAT_0071f418;
  *(float *)(puVar12 + 0xe) = SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar8 * fVar8);
  dVar29 = 45.0;
  mobyutil::Delt(fVar6,fVar3 * 45.0,(float *)(puVar12 + 0xe));
  dVar25 = (double)fastfunc::FastWrapRot
                             (*(float *)(param_3 + 0xa4),mobyutil::g_FrameTime * 0.05235988);
  *(float *)(param_3 + 0xa4) = (float)dVar25;
  fVar3 = *param_4 - *(float *)(param_2 + 0x10);
  fVar4 = param_4[1] - *(float *)(param_2 + 0x14);
  *(float *)((int)puVar12 + 0x8c) = fVar3;
  *(float *)(puVar12 + 0x12) = fVar4;
  dVar31 = (double)(param_4[2] - *(float *)(param_2 + 0x18));
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
  dVar30 = 0.7853981852531433;
  dVar26 = dVar25;
  if (0.0 < fVar5) {
    lVar18 = uVar16 - 0x170;
    lVar23 = uVar16 - 0x98;
    lVar21 = uVar16 - 0xa8;
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
    lVar23 = uVar16 - 0xa8;
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
  dVar32 = 1.5707963705062866;
  mobyutil::OrganicDeltAngSpeed
            (dVar26,(double)(fVar7 * 1.5707964),(double)(fVar7 * 0.34906584),
             (double)(fVar6 * 1.5707964),param_2,uVar17,param_3 + 0x88);
  *(float *)((int)puVar12 + 0x84) = (float)dVar31;
  fVar4 = mobyutil::g_FrameTime;
  fVar3 = *(float *)(param_2 + 0x44);
  dVar26 = (double)DAT_0071f418;
  dVar27 = ABS((double)(float)SQRT(dVar28));
  *(float *)(puVar12 + 0x10) = (float)SQRT(dVar28);
  *(float *)(puVar12 + 0x11) = (float)(dVar27 - ABS(dVar31));
  uVar17 = (ulonglong)(*(uint *)(puVar12 + 0x10) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar12 + 0x11) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar12 + 0x84) >> 0x1d) & 4;
  uVar20 = uVar17 << 2 | 0x735900;
  lVar18 = uVar17 << 2;
  dVar28 = ABS((double)*(float *)(puVar12 + 0x10));
  if ((double)*(float *)(puVar12 + 0x11) - dVar25 < 0.0) {
    dVar28 = ABS(dVar31);
  }
  fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)lVar18);
  dVar31 = ABS((double)*(float *)((int)puVar12 + 0x84));
  if ((double)*(float *)(puVar12 + 0x11) - dVar25 < 0.0) {
    dVar31 = dVar27;
  }
  fVar6 = *(float *)((int)uVar20 + 4);
  dVar27 = dVar25;
  if (dVar25 < dVar28) {
    lVar18 = uVar16 - 0x170;
    lVar23 = uVar16 - 0xb8;
    lVar21 = uVar16 - 200;
    lVar24 = 2;
    fVar7 = (float)(dVar31 - dVar28) / (float)(dVar31 + dVar28);
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
    lVar23 = uVar16 - 200;
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
    dVar31 = dVar25;
    do {
      iVar9 = (int)lVar18;
      iVar13 = (int)lVar23;
      lVar18 = lVar18 + 0x10;
      lVar23 = lVar23 + 0x10;
      dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar9 + 0xb8)) + *(float *)(iVar13 + 4)
                        + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    dVar27 = (double)((float)(dVar31 + dVar30) * fVar5 + fVar6);
  }
  dVar31 = (double)mobyutil::MB_DeltAngSpeed
                             ((double)fVar3,-dVar27,(double)(float)(dVar26 * dVar32),
                              (double)(float)(dVar26 * 0.5235987901687622),
                              (double)(fVar4 * 1.9198622),lVar18,uVar20,param_3 + 0x84);
  *(float *)(param_2 + 0x44) = (float)dVar31;
  dVar31 = (double)(float)((double)*(float *)(param_2 + 0x40) +
                          -(double)(*(float *)(param_3 + 0x88) *
                                   (float)(dVar32 - ABS((double)*(float *)(param_2 + 0x40))) *
                                   0.63661975));
  if (dVar32 - dVar31 < 0.0) {
    dVar31 = dVar32;
  }
  if (dVar31 - -1.5707963705062866 < 0.0) {
    dVar31 = -1.5707963705062866;
  }
  *(float *)(param_2 + 0x40) = (float)(dVar31 * 0.9800000190734863);
  mobyutil::MB_WrapRot((float)(dVar31 * 0.9800000190734863));
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
      dVar31 = dVar25;
      dVar28 = dVar25;
      dVar26 = dVar25;
      if (dVar27 != dVar25) {
        fVar8 = 1.0 / SQRT(fVar6);
        fVar8 = -(fVar6 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar6 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar6 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        dVar26 = (double)(fVar5 * fVar8);
        dVar31 = (double)(fVar4 * fVar8);
        dVar28 = (double)(fVar7 * fVar8);
      }
      fVar4 = *(float *)(param_3 + 0x74);
      fVar5 = *(float *)(param_3 + 0x70);
      fVar6 = *(float *)(param_3 + 0x78);
      dVar32 = 2.094395160675049;
      dVar31 = (double)(float)(dVar27 / (double)(float)((double)fVar6 * dVar28 +
                                                       (double)(float)((double)fVar5 * dVar26 +
                                                                      (double)(float)((double)fVar4
                                                                                     * dVar31))));
      if ((dVar31 <= dVar25) || (100.0 <= dVar31)) {
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
        dVar31 = ABS((double)*(float *)((int)puVar12 + 0x74));
        if ((double)*(float *)((int)puVar12 + 0x7c) - dVar25 < 0.0) {
          dVar31 = dVar26;
        }
        fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
        dVar26 = ABS((double)*(float *)(puVar12 + 0xf));
        if ((double)*(float *)((int)puVar12 + 0x7c) - dVar25 < 0.0) {
          dVar26 = dVar28;
        }
        fVar5 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
        dVar28 = dVar25;
        if (dVar25 < dVar31) {
          lVar18 = uVar16 - 0x170;
          lVar23 = uVar16 - 0xd8;
          lVar21 = uVar16 - 0xe8;
          lVar24 = 2;
          fVar6 = (float)(dVar26 - dVar31) / (float)(dVar26 + dVar31);
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
          lVar23 = uVar16 - 0xe8;
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
          dVar31 = dVar25;
          do {
            iVar13 = (int)lVar18;
            iVar14 = (int)lVar23;
            lVar18 = lVar18 + 0x10;
            lVar23 = lVar23 + 0x10;
            dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar13 + 0x98)) +
                              *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                             *(float *)(iVar14 + 0xc));
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          dVar28 = (double)((float)(dVar31 + dVar30) * fVar4 + fVar5);
        }
        dVar31 = (double)fastfunc::FastSubRots(fVar3,(float)dVar28);
        if (dVar25 <= dVar31) {
          fVar3 = -(float)((double)mobyutil::g_FrameTime * dVar32 -
                          (double)*(float *)(param_2 + 0x48));
        }
        else {
          fVar3 = (float)((double)mobyutil::g_FrameTime * dVar32 +
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
  if ((float)((double)mobyutil::g_FrameTime * dVar29) < fVar15) {
    fVar15 = (float)((double)mobyutil::g_FrameTime * dVar29) / fVar15;
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



//==== 00209300  ns=mobyupdate_helpers  size=0x140
// sig: undefined M1215_00209300(void)
// callers(0): 
// callees(2): 00117238 mobyutil::MB_AddVectorSphere; 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M1215_00209300
               (int param_1,int param_2,int param_3,float *param_4,int param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  double dVar3;
  
  dVar3 = -0.5;
  fastfunc::FastWrapRot(*(float *)(param_5 + 0x48),*(float *)(param_3 + 0x6c) * -0.5);
  fastfunc::FastWrapRot
            (*(float *)(param_5 + 0x44),(float)((double)*(float *)(param_3 + 0x70) * dVar3));
  *param_6 = *param_4;
  param_6[1] = param_4[1];
  param_6[2] = param_4[2];
  param_6[3] = param_4[3];
  mobyutil::MB_AddVectorSphere(param_6,param_6);
  fVar1 = *(float *)(param_1 + 0x14) - param_6[1];
  fVar2 = *(float *)(param_1 + 0x10) - *param_6;
  if ((20.0 < SQRT(fVar2 * fVar2 + fVar1 * fVar1)) && (*(char *)(param_1 + 0x31) != '\0')) {
    *(float *)(param_2 + 0xa0) = mobyutil::g_FrameTime * 20.0;
  }
  return;
}



//==== 00209508  ns=mobyupdate_unsorted  size=0x1634
// sig: undefined UpdateMoby_1215(MobyInstance * moby)
// callers(0): 
// callees(16): 000efb38 mobyfunc::DeleteMoby; 000f1ec8 mobyfunc::SetColorOfMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 00106150 mobyutil::MB_RegisterLameShadow; 0010de78 mobyutil::MB_WrapRot; 0010e030 mobyutil::MB_genericExplosion; 00110950 mobyutil::MB_RandomizeVector; 00187e00 FUN_00187e00; 00208018 mobyupdate_helpers::M1215_00208018; 002088c0 mobyupdate_helpers::M1215_002088c0; 0020ab50 mobyupdate_helpers::M1215_0020ab50; 0021b5e8 FUN_0021b5e8; 004fff60 fastfunc::FastDecTimerS32; 00502730 fastfunc::FastIntToDouble; 005c8318 rand; 005e8338 FUN_005e8338

/* Moby 1215 */

void mobyupdate_unsorted::UpdateMoby_1215(MobyInstance *moby)

{
  float fVar1;
  u8 uVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  void *pvVar12;
  f32 fVar13;
  undefined4 uVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  float *pfVar19;
  MobyInstance *pMVar20;
  ulonglong uVar21;
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
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 local_150 [16];
  undefined1 local_140 [32];
  float local_120 [4];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [32];
  
  if (moby != (MobyInstance *)0x0) {
    pvVar12 = moby->pVar;
    uVar21 = ZEXT48(pvVar12);
    if (pvVar12 != (void *)0x0) {
      mobyfunc::SetColorOfMoby(moby,0x80,0x80,0x80);
      mobyupdate_helpers::M1215_00208018(moby,uVar21,uVar21 + 0x20);
      iVar17 = DAT_0096b2d0;
      pMVar20 = (MobyInstance *)0x0;
      pfVar19 = (float *)0x0;
      if (((*(int *)((int)pvVar12 + 0x90) == -1) ||
          (pMVar20 = MobyInstance + *(int *)((int)pvVar12 + 0x90), pMVar20 == (MobyInstance *)0x0))
         || (pMVar20->state == 0xfd || pMVar20->state == 0xfe)) {
        fVar4 = *(float *)((int)pvVar12 + 0xbc);
        fVar5 = (g_heroPosition.x + 256.0) * 0.5;
        fVar6 = (g_heroPosition.y + 256.0) * 0.5;
        fVar7 = g_heroPosition.w;
      }
      else {
        fVar4 = (pMVar20->pos).z;
        fVar5 = (pMVar20->pos).x;
        fVar6 = (pMVar20->pos).y;
        fVar7 = (pMVar20->pos).w;
        *(float *)((int)pvVar12 + 0xbc) = fVar4;
      }
      fVar10 = g_heroPosition.z;
      fVar9 = g_heroPosition.y;
      fVar8 = g_heroPosition.x;
      dVar34 = (double)fVar5;
      dVar33 = (double)fVar6;
      dVar32 = (double)fVar4;
      dVar31 = (double)fVar7;
      if (iVar17 == 0) {
        uVar18 = (int)moby - (int)MobyInstance;
        dVar27 = (double)fastfunc::FastIntToDouble
                                   (((int)uVar18 >> 8) +
                                    (uint)((int)uVar18 < 0 && (uVar18 & 0xff) != 0) +
                                    worldUpdateTime / (int)(animationSpeed * 600.5));
        mobyutil::MB_WrapRot((float)(dVar27 * 0.800000011920929));
      }
      else {
        fVar8 = *(float *)(DAT_0096b2d0 + 0x10);
        fVar9 = *(float *)(DAT_0096b2d0 + 0x14);
        fVar10 = *(float *)(DAT_0096b2d0 + 0x18);
      }
      dVar27 = 50.0;
      bVar15 = false;
      fVar7 = (float)((double)(moby->pos).y - (double)fVar9);
      fVar1 = (float)((double)(moby->pos).x - (double)fVar8);
      if (((g_heroState == TURRET_PLANE_UI) && (iVar17 != 0)) &&
         ((*(char *)(iVar17 + 0x20) != -3 && *(char *)(iVar17 + 0x20) != -2 &&
          ((*(short *)(iVar17 + 0xa6) == 0x4da &&
           (SQRT(fVar1 * fVar1 + fVar7 * fVar7) < *(float *)((int)pvVar12 + 0x98))))))) {
        bVar15 = true;
      }
      fVar7 = (float)((double)fVar9 - dVar33);
      fVar1 = (float)((double)fVar8 - dVar34);
      fVar11 = *(float *)((int)pvVar12 + 0x94);
      if (iVar17 != 0) {
        pfVar19 = *(float **)(iVar17 + 0x78);
      }
      mobyfunc::SetColorOfMoby(moby,0,0xff,0);
      iVar16 = 0;
      if (moby->enabled == '\0') {
        iVar16 = *(int *)((int)pvVar12 + 0xa8) + 1;
      }
      *(int *)((int)pvVar12 + 0xa8) = iVar16;
      uVar2 = moby->state;
      if (uVar2 == '\x06') {
        if ((pfVar19 != (float *)0x0) &&
           (iVar17 = fastfunc::FastDecTimerS32(uVar21 + 0xb8), iVar17 != 0)) {
          fVar5 = pfVar19[4];
          fVar6 = 0.0;
          fVar7 = SQRT(pfVar19[6] * pfVar19[6] + fVar5 * fVar5 + pfVar19[5] * pfVar19[5]);
          if (fVar7 == 0.0) {
            (moby->pos).x = fVar5;
            (moby->pos).y = pfVar19[5];
            (moby->pos).z = pfVar19[6];
            fVar5 = pfVar19[7];
            fVar7 = fVar6;
            fVar4 = fVar6;
          }
          else {
            fVar7 = -30.0 / fVar7;
            fVar6 = fVar5 * fVar7;
            (moby->pos).x = fVar6;
            fVar4 = pfVar19[5] * fVar7;
            (moby->pos).y = fVar4;
            fVar7 = pfVar19[6] * fVar7;
            (moby->pos).z = fVar7;
            fVar5 = pfVar19[7];
          }
          (moby->pos).w = fVar5;
          auVar35 = ZEXT416(0xfffffff0);
          (moby->pos).x = fVar6 + fVar8;
          (moby->pos).y = fVar4 + fVar9;
          (moby->pos).z = fVar7 + fVar10;
          auVar36 = loadVectorLeftIndexed(0x24,uVar21);
          auVar37 = loadVectorRightIndexed(0x34,uVar21);
          auVar35 = vectorShiftRightAlgebraicWord
                              (auVar36 | auVar37,
                               auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60);
          auVar35 = vectorConvertFromSignedFixedPointWord(auVar35,0);
          auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar14 = storeVectorElementWordIndexed
                             (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x20,
                              uVar21);
          *(undefined4 *)((int)pvVar12 + 0x20U & 0xfffffffc) = uVar14;
          moby->state = '\0';
        }
      }
      else if (uVar2 == '\x05') {
        mobyutil::MB_genericExplosion
                  (0,0,0x4010000000000000,0x4008000000000000,0x4022000000000000,0x3ff19999a0000000,
                   0x4034000000000000,moby,local_100,0,1,0xffffffffffffffff,5,3,10);
        iVar17 = rand();
        iVar17 = iVar17 % 10;
        if (iVar17 < 1) {
          if (-1 < iVar17) {
            mobyupdate_helpers::M1215_0020ab50(local_f0,local_100,0x4c4);
          }
        }
        else if (iVar17 < 7) {
          mobyupdate_helpers::M1215_0020ab50(local_f0,local_100,0x4c2);
        }
        else if (iVar17 < 10) {
          FUN_0021b5e8(local_f0,local_100,0x4d9);
        }
        if ((pMVar20 == (MobyInstance *)0x0) || (pMVar20->state == 0xfd || pMVar20->state == 0xfe))
        {
          mobyfunc::DeleteMoby(moby);
          return;
        }
        moby->collision = (ushort *)0x0;
        auVar35 = ZEXT416(0xffffffff);
        auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
        auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
        auVar35 = loadVectorLeftIndexed(4,0x209440);
        auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar35 = vectorMultiplyAddFloatingPoint
                            (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                             auVar36);
        auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
        auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar14 = storeVectorElementWordIndexed
                           (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0xb8,
                            uVar21);
        *(undefined4 *)((int)pvVar12 + 0xb8U & 0xfffffffc) = uVar14;
        moby->state = '\x06';
      }
      else if (uVar2 == '\x04') {
        iVar17 = mobyupdate_helpers::M1215_002088c0
                           (0x403e000000000000,moby,uVar21,local_140,&DAT_00209440,local_150);
        if (iVar17 != 0) {
          moby->state = '\x03';
        }
        if ((int)(animationSpeed * 100.5) < *(int *)((int)pvVar12 + 0xa8)) {
          moby->collision = (ushort *)0x0;
          moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
          moby->state = '\x01';
        }
      }
      else if (uVar2 == '\x03') {
        iVar17 = mobyupdate_helpers::M1215_002088c0
                           ((double)*(float *)((int)pvVar12 + 0x94),moby,uVar21,local_140);
        if (iVar17 != 0) {
          if ((int)(animationSpeed * 70.5) < *(int *)((int)pvVar12 + 0xa8)) {
            moby->collision = (ushort *)0x0;
            moby->state = '\x01';
            moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
          }
          else {
            moby->state = '\x04';
          }
        }
      }
      else if (uVar2 == '\x02') {
        iVar16 = mobyupdate_helpers::M1215_002088c0
                           (0x403e000000000000,moby,uVar21,local_140,&DAT_00209440,local_150);
        if ((iVar16 == 0) && (pfVar19 != (float *)0x0)) {
          fVar9 = (moby->pos).y - fVar9;
          fVar8 = (moby->pos).x - fVar8;
          dVar31 = (double)SQRT(fVar8 * fVar8 + fVar9 * fVar9);
          if ((dVar31 <= 20.0) || (moby->enabled == '\0')) {
            auVar35 = ZEXT416(0xffffffff);
            auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
            auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
            auVar35 = loadVectorLeftIndexed(100,0x209440);
            auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar35 = vectorMultiplyAddFloatingPoint
                                (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 |
                                         auVar35 << 0x60,auVar36);
            auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
            auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar14 = storeVectorElementWordIndexed
                               (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x9c,
                                uVar21);
            *(undefined4 *)((int)pvVar12 + 0x9cU & 0xfffffffc) = uVar14;
            dVar31 = (double)mobyutil::MB_randRangeFloat(-0.7853982,3.926991);
            *(float *)((int)pvVar12 + 0xb0) = (float)dVar31;
            *(undefined4 *)((int)pvVar12 + 0xac) = 0x3f800000;
          }
          else {
            bVar3 = moby->setByGroup;
            if (bVar3 == 0) {
              if (*(char *)(iVar17 + 0x20) == '\x04' && bVar15) {
                auVar35 = ZEXT416(0xffffffff);
                auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
                auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
                auVar35 = loadVectorLeftIndexed(0x6c,0x209440);
                auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
                auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                auVar35 = vectorMultiplyAddFloatingPoint
                                    (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 |
                                             auVar35 << 0x60,auVar36);
                auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
                auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
                uVar14 = storeVectorElementWordIndexed
                                   (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                                    0xb4,uVar21);
                *(undefined4 *)((int)pvVar12 + 0xb4U & 0xfffffffc) = uVar14;
                *(undefined4 *)((int)pvVar12 + 0xa8) = 0;
                moby->setByGroup = '\x01';
              }
            }
            else if (bVar3 < 2) {
              if ((!bVar15 || moby->enabled == '\0') ||
                 ((int)(animationSpeed * 15.5) <= *(int *)((int)pvVar12 + 0xa8))) {
                auVar35 = ZEXT416(0xffffffff);
                auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
                auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
                auVar35 = loadVectorLeftIndexed(100,0x209440);
                auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
                auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                auVar35 = vectorMultiplyAddFloatingPoint
                                    (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 |
                                             auVar35 << 0x60,auVar36);
                auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
                auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
                uVar14 = storeVectorElementWordIndexed
                                   (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                                    0xb4,uVar21);
                *(undefined4 *)((int)pvVar12 + 0xb4U & 0xfffffffc) = uVar14;
                moby->setByGroup = '\x02';
              }
              iVar17 = fastfunc::FastDecTimerS32(uVar21 + 0xb4);
              if (iVar17 != 0) {
                auVar35 = ZEXT416(0xffffffff);
                auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
                auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
                auVar35 = loadVectorLeftIndexed(0x74,0x209440);
                auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
                auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                auVar35 = vectorMultiplyAddFloatingPoint
                                    (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 |
                                             auVar35 << 0x60,auVar36);
                auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
                auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
                uVar14 = storeVectorElementWordIndexed
                                   (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                                    0xb4,uVar21);
                *(undefined4 *)((int)pvVar12 + 0xb4U & 0xfffffffc) = uVar14;
                moby->setByGroup = '\x02';
              }
              iVar17 = fastfunc::FastDecTimerS32(uVar21 + 0x9c);
              if (iVar17 != 0) {
                auVar35 = ZEXT416(0xffffffff);
                auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
                auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
                auVar35 = loadVectorLeftIndexed(0x78,0x209440);
                auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
                auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                auVar35 = vectorMultiplyAddFloatingPoint
                                    (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 |
                                             auVar35 << 0x60,auVar36);
                auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
                auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
                uVar14 = storeVectorElementWordIndexed
                                   (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                                    0x9c,uVar21);
                *(undefined4 *)((int)pvVar12 + 0x9cU & 0xfffffffc) = uVar14;
                dVar32 = 1.0;
                mobyutil::MB_RandomizeVector(0.6,local_120);
                FUN_00187e00(0x4059000000000000,
                             (double)(float)((double)mobyutil::g_FrameTime * dVar27),
                             0x4024000000000000,moby,local_120,local_110);
                uVar18 = (int)*(uint *)((int)pvVar12 + 0xb0) >> 0x1f;
                *(float *)((int)pvVar12 + 0xac) =
                     *(float *)((int)pvVar12 + 0xac) *
                     (float)((double)DAT_0071f408 * -0.06999999284744263 + dVar32);
                if ((int)((uVar18 >> 1 ^ *(uint *)((int)pvVar12 + 0xb0)) - uVar18) < 0x3fc90fdc) {
                  fVar5 = mobyutil::g_FrameTime * 0.5235988 + *(float *)((int)pvVar12 + 0xb0);
                }
                else {
                  fVar5 = -(mobyutil::g_FrameTime * 0.5235988 - *(float *)((int)pvVar12 + 0xb0));
                }
                *(float *)((int)pvVar12 + 0xb0) = fVar5;
              }
            }
            else if ((bVar3 < 3) && (iVar17 = fastfunc::FastDecTimerS32(uVar21 + 0xb4), iVar17 != 0)
                    ) {
              moby->setByGroup = '\0';
            }
            *(float *)((int)pvVar12 + 0xa0) =
                 SQRT(pfVar19[2] * pfVar19[2] + *pfVar19 * *pfVar19 + pfVar19[1] * pfVar19[1]);
            if (dVar31 <= 22.0) {
              fVar5 = pfVar19[0x19] * 1.1;
            }
            else {
              fVar5 = pfVar19[0x19];
            }
            *(float *)((int)pvVar12 + 0xa0) = fVar5;
          }
        }
        else {
          moby->state = '\x04';
        }
      }
      else if (uVar2 == '\x01') {
        iVar16 = fastfunc::FastDecTimerS32(uVar21 + 0xb8);
        if ((((iVar16 != 0) && (pfVar19 != (float *)0x0)) &&
            (*(char *)(iVar17 + 0x20) == '\x04' && bVar15)) &&
           (fVar11 <= SQRT(fVar1 * fVar1 + fVar7 * fVar7) && pMVar20->enabled != '\0')) {
          fVar7 = pfVar19[4];
          dVar27 = 0.0;
          fVar1 = SQRT(pfVar19[6] * pfVar19[6] + fVar7 * fVar7 + pfVar19[5] * pfVar19[5]);
          if (fVar1 == 0.0) {
            (moby->pos).x = fVar7;
            (moby->pos).y = pfVar19[5];
            (moby->pos).z = pfVar19[6];
            fVar7 = pfVar19[7];
            dVar22 = dVar27;
            dVar24 = dVar27;
            dVar28 = dVar27;
          }
          else {
            fVar1 = -7.0 / fVar1;
            dVar24 = (double)(fVar7 * fVar1);
            (moby->pos).x = fVar7 * fVar1;
            dVar22 = (double)(pfVar19[5] * fVar1);
            (moby->pos).y = pfVar19[5] * fVar1;
            dVar28 = (double)(pfVar19[6] * fVar1);
            (moby->pos).z = pfVar19[6] * fVar1;
            fVar7 = pfVar19[7];
          }
          (moby->pos).w = fVar7;
          (moby->pos).x = (float)(dVar24 + (double)fVar8);
          (moby->pos).y = (float)(dVar22 + (double)fVar9);
          (moby->pos).z = (float)(dVar28 + (double)fVar10);
          dVar30 = (double)pfVar19[4];
          dVar29 = (double)pfVar19[5];
          fVar8 = (float)((double)pfVar19[6] * dVar30);
          fVar9 = (float)(dVar29 * (double)pfVar19[6]);
          fVar10 = -fVar9;
          dVar28 = -(double)(float)(dVar29 * dVar29);
          fVar7 = (float)(dVar30 * dVar30 - dVar28);
          fVar10 = SQRT(fVar7 * fVar7 + fVar10 * fVar10 + --(fVar8 * fVar8));
          fVar1 = 20.0 / fVar10;
          dVar24 = -(double)(fVar9 * fVar1);
          dVar22 = dVar27;
          if (0.0 - fVar10 < 0.0) {
            dVar22 = (double)(fVar7 * fVar1);
          }
          dVar25 = dVar27;
          if (0.0 - fVar10 < 0.0) {
            dVar25 = dVar24;
          }
          dVar26 = dVar27;
          if (0.0 - fVar10 < 0.0) {
            dVar26 = -(double)(fVar8 * fVar1);
          }
          if (fVar10 - 0.0 < 0.0) {
            dVar22 = (double)(fVar7 * fVar1);
          }
          if (fVar10 - 0.0 < 0.0) {
            dVar25 = dVar24;
          }
          if (fVar10 - 0.0 < 0.0) {
            dVar26 = -(double)(fVar8 * fVar1);
          }
          dVar24 = (double)mobyutil::MB_randRangeFloat(-14.0,14.0);
          fVar7 = (moby->pos).x;
          fVar8 = (moby->pos).y;
          fVar9 = (moby->pos).z;
          dVar23 = (double)SQRT((float)(dVar30 * dVar30 + -dVar28));
          moby->collision = moby->pClass->collision;
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
          (moby->pos).z = (float)((double)fVar9 + dVar22);
          dVar28 = (double)(float)(dVar30 * (double)(float)(dVar24 / dVar23));
          dVar24 = -(double)(float)(dVar29 * (double)(float)(dVar24 / dVar23));
          dVar22 = dVar27;
          if (dVar27 - dVar23 < 0.0) {
            dVar22 = dVar28;
          }
          dVar29 = dVar27;
          if (dVar27 - dVar23 < 0.0) {
            dVar29 = dVar24;
          }
          if (dVar23 - dVar27 < 0.0) {
            dVar22 = dVar28;
          }
          if (dVar23 - dVar27 < 0.0) {
            dVar29 = dVar24;
          }
          (moby->pos).y = (float)((double)(float)((double)fVar8 + dVar25) + dVar22);
          (moby->pos).x = (float)((double)(float)((double)fVar7 + dVar26) + dVar29);
          *(float *)((int)pvVar12 + 0xa0) = mobyutil::g_FrameTime * 40.0;
          dVar29 = (double)(fVar5 - (moby->pos).x);
          dVar28 = (double)(fVar6 - (moby->pos).y);
          dVar24 = (double)(fVar4 - (moby->pos).z);
          dVar22 = (double)FUN_005e8338(dVar29,dVar28);
          (moby->rotation).z = (float)dVar22;
          dVar22 = (double)FUN_005e8338((double)SQRT((float)(dVar29 * dVar29 +
                                                            (double)(float)(dVar28 * dVar28))),
                                        dVar24);
          (moby->rotation).y = (float)-dVar22;
          dVar22 = (double)mobyutil::MB_randRangeFloat(-1.0471976,1.0471976);
          (moby->rotation).x = (float)dVar22;
          fVar6 = (float)(dVar34 - (double)(moby->pos).x);
          *(float *)((int)pvVar12 + 0x70) = fVar6;
          fVar7 = (float)dVar33 - (moby->pos).y;
          *(float *)((int)pvVar12 + 0x74) = fVar7;
          fVar4 = (float)dVar32 - (moby->pos).z;
          *(float *)((int)pvVar12 + 0x78) = fVar4;
          dVar32 = (double)SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar7 * fVar7);
          *(float *)((int)pvVar12 + 0x7c) = (float)dVar31;
          fVar5 = (float)((double)*(float *)((int)pvVar12 + 0xa0) / dVar32);
          dVar31 = dVar27;
          if (dVar27 - dVar32 < 0.0) {
            dVar31 = (double)(fVar6 * fVar5);
          }
          dVar33 = dVar27;
          if (dVar27 - dVar32 < 0.0) {
            dVar33 = (double)(fVar7 * fVar5);
          }
          dVar34 = dVar27;
          if (dVar27 - dVar32 < 0.0) {
            dVar34 = (double)(fVar4 * fVar5);
          }
          if (dVar32 - dVar27 < 0.0) {
            dVar31 = (double)(fVar6 * fVar5);
          }
          if (dVar32 - dVar27 < 0.0) {
            dVar33 = (double)(fVar7 * fVar5);
          }
          if (dVar32 - dVar27 < 0.0) {
            dVar34 = (double)(fVar4 * fVar5);
          }
          *(float *)((int)pvVar12 + 0x70) = (float)dVar31;
          *(float *)((int)pvVar12 + 0x74) = (float)dVar33;
          *(float *)((int)pvVar12 + 0x78) = (float)dVar34;
          mobyupdate_helpers::M1215_002088c0
                    ((double)*(float *)((int)pvVar12 + 0x94),moby,uVar21,local_140);
          auVar35 = ZEXT416(0xffffffff);
          auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
          auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
          auVar35 = loadVectorLeftIndexed(100,0x209440);
          auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar35 = vectorMultiplyAddFloatingPoint
                              (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60
                               ,auVar36);
          auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
          auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar14 = storeVectorElementWordIndexed
                             (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x9c,
                              uVar21);
          *(undefined4 *)((int)pvVar12 + 0x9cU & 0xfffffffc) = uVar14;
          *(undefined4 *)((int)pvVar12 + 0xac) = 0x3f800000;
          moby->state = '\x02';
        }
      }
      else if (uVar2 == '\0') {
        dVar31 = (double)mobyutil::MB_randRangeFloat(-3.1415927,3.1415927);
        *(float *)((int)pvVar12 + 0xa4) = (float)dVar31;
        moby->collision = (ushort *)0x0;
        moby->state = '\x01';
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
      }
      fVar13 = (moby->pos).x;
      uVar18 = (int)fVar13 >> 0x1f;
      fVar5 = 20.0;
      fVar6 = (moby->pos).x;
      if ((int)((uVar18 >> 1 ^ (uint)fVar13) - uVar18) < 0x41a00000) {
        (moby->pos).x = 20.0;
        fVar6 = fVar5;
      }
      if (1003.0 < fVar6) {
        (moby->pos).x = 1003.0;
      }
      fVar13 = (moby->pos).y;
      uVar18 = (int)fVar13 >> 0x1f;
      fVar6 = (moby->pos).y;
      if ((int)((uVar18 >> 1 ^ (uint)fVar13) - uVar18) < 0x41a00000) {
        (moby->pos).y = 20.0;
        fVar6 = fVar5;
      }
      if (1003.0 < fVar6) {
        (moby->pos).y = 1003.0;
      }
      fVar13 = (moby->pos).z;
      uVar18 = (int)fVar13 >> 0x1f;
      fVar6 = (moby->pos).z;
      if ((int)((uVar18 >> 1 ^ (uint)fVar13) - uVar18) < 0x41a00000) {
        (moby->pos).z = 20.0;
        fVar6 = fVar5;
      }
      if (1003.0 < fVar6) {
        (moby->pos).z = 1003.0;
      }
      mobyutil::MB_RegisterLameShadow(3.0,moby);
    }
  }
  return;
}



//==== 0020ab3c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1220_0020ab3c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1220_0020ab3c(void)

{
  DAT_007669a0 = 0x10000;
  return;
}



//==== 0020ab50  ns=mobyupdate_helpers  size=0xf8
// sig: undefined M1215_0020ab50(void)
// callers(4): 00182998 mobyupdate_unsorted::UpdateMoby_1004; 00206cd8 mobyupdate_unsorted::UpdateMoby_1214; 00209508 mobyupdate_unsorted::UpdateMoby_1215; 002476e8 mobyupdate_unsorted::UpdateMoby_1319
// callees(4): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcc68 mobyutil::MB_randRot; 0010c000 mobyutil::MB_CopyHeroLights

MobyInstance *
mobyupdate_helpers::M1215_0020ab50(f32 *param_1,undefined4 *param_2,MOBY_OCLASSES param_3)

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
    mobyfunc::UpdateMobyTransform(pMVar3);
    mobyutil::MB_CopyHeroLights(pMVar3);
  }
  return pMVar3;
}



//==== 0020ac48  ns=mobyupdate_helpers  size=0x140
// sig: undefined M1220_0020ac48(void)
// callers(1): 0020ade8 mobyupdate_unsorted::UpdateMoby_{1218_1220}
// callees(3): 000f1114 mobyfunc::GetBonePosition; 000f31a8 mobyfunc::UpdateMobyTransform; 0020b6b0 mobyupdate_helpers::M1220_0020b6b0

undefined8 mobyupdate_helpers::M1220_0020ac48(int param_1,float *param_2)

{
  float fVar1;
  undefined4 *puVar2;
  MobyInstance *pMVar4;
  undefined8 uVar3;
  
  pMVar4 = (MobyInstance *)param_2[0xd];
  if (pMVar4 == (MobyInstance *)0x0) {
    pMVar4 = (MobyInstance *)M1220_0020b6b0(param_1);
    param_2[0xd] = (float)pMVar4;
  }
  if ((pMVar4 == (MobyInstance *)0x0) || (pMVar4->state == 0xfd || pMVar4->state == 0xfe)) {
    *param_2 = *(float *)(param_1 + 0x10);
    uVar3 = 0;
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
    (pMVar4->pos).x = *(f32 *)(param_1 + 0x10);
    (pMVar4->pos).y = *(f32 *)(param_1 + 0x14);
    (pMVar4->pos).z = *(f32 *)(param_1 + 0x18);
    (pMVar4->pos).w = *(f32 *)(param_1 + 0x1c);
    (pMVar4->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar4->rotation).y = *(f32 *)(param_1 + 0x44);
    (pMVar4->rotation).z = *(f32 *)(param_1 + 0x48);
    (pMVar4->rotation).w = *(f32 *)(param_1 + 0x4c);
    mobyfunc::UpdateMobyTransform(pMVar4);
    mobyfunc::GetBonePosition(param_2[0xd],0,param_2);
    fVar1 = param_2[0xd];
    uVar3 = 1;
    param_2[8] = *(float *)((int)fVar1 + 0x10) - *param_2;
    param_2[9] = *(float *)((int)fVar1 + 0x14) - param_2[1];
    param_2[10] = *(float *)((int)fVar1 + 0x18) - param_2[2];
    param_2[0xb] = *(float *)((int)fVar1 + 0x1c);
  }
  return uVar3;
}



//==== 0020ade8  ns=mobyupdate_unsorted  size=0x8b0
// sig: undefined UpdateMoby_{1218_1220}(MobyInstance * moby)
// callers(0): 
// callees(8): 00059e20 collproc::CollSphere; 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 00106150 mobyutil::MB_RegisterLameShadow; 0010e030 mobyutil::MB_genericExplosion; 0015d12c sound::PlayMobySound; 0020ac48 mobyupdate_helpers::M1220_0020ac48; 00502578 fastfunc::FastWrapRot

/* Moby 1218
   Moby 1220 */

void mobyupdate_unsorted::UpdateMoby__1218_1220_(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  MOBY_OCLASSES MVar7;
  float *pfVar8;
  f32 fVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  MobyInstance *pMVar19;
  int iVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_70 [16];
  
  pMVar19 = DAT_0096b2d0;
  bVar1 = false;
  dVar21 = 100000.0;
  pfVar8 = (float *)moby->pVar;
  dVar22 = dVar21;
  mobyfunc::GetBonePosition(moby,0,auStack_70);
  iVar20 = collproc::CollSphere(0x3fe19999a0000000,auStack_70);
  if (iVar20 != 0) {
    if (CollOutput.pMoby == (MobyInstance *)0x0) {
      mobyutil::MB_genericExplosion
                (0,0,0,0,0x4022000000000000,0x3ff0000000000000,0,moby,pfVar8 + 4,auStack_70,
                 &DAT_0020ad88,1,3,2,5);
      moby->state = '\x05';
    }
    else {
      MVar7 = (CollOutput.pMoby)->oClass;
      if ((MVar7 == FIGHTER_JET_0045 || MVar7 == JET_FIGHTER) || (MVar7 == FIGHTER_JET_0563)) {
        bVar1 = true;
      }
      else {
        mobyutil::MB_genericExplosion
                  (0,0,0,0,0x4022000000000000,0x3ff0000000000000,0,moby,pfVar8 + 4,auStack_70,1,
                   0xffffffffffffffff,3,2,5);
        moby->state = '\x05';
      }
    }
  }
  bVar2 = moby->state;
  if (bVar2 < 4) {
    if ((((g_heroState == TURRET_PLANE_UI) && (pMVar19 != (MobyInstance *)0x0)) &&
        (pMVar19->state != 0xfd && pMVar19->state != 0xfe)) &&
       ((MVar7 = pMVar19->oClass, MVar7 == FIGHTER_JET_0045 || MVar7 == JET_FIGHTER ||
        (MVar7 == FIGHTER_JET_0563)))) {
      fVar3 = (pMVar19->pos).y;
      fVar4 = (moby->pos).y;
      fVar5 = (pMVar19->pos).x;
      fVar11 = fVar3 - fVar4;
      fVar6 = (moby->pos).x;
      fVar12 = fVar5 - fVar6;
      fVar4 = -((fVar4 + pfVar8[1]) * 0.5 - fVar3);
      fVar3 = (pMVar19->pos).z - (moby->pos).z;
      fVar5 = -((fVar6 + *pfVar8) * 0.5 - fVar5);
      dVar22 = (double)SQRT(fVar3 * fVar3 + fVar12 * fVar12 + fVar11 * fVar11);
      dVar21 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4);
    }
    if (((!bVar1) && (4.0 <= dVar22)) && (4.0 <= dVar21)) goto LAB_0020b16c;
    moby->collision = (ushort *)0x0;
    if (pfVar8[0xd] != 0.0) {
      *(undefined4 *)((int)pfVar8[0xd] + 0x94) = 0;
    }
    MVar7 = moby->oClass;
    if ((short)MVar7 < 0x4c3) {
      if (0x4c1 < (short)MVar7) {
        DAT_0096b2d6 = DAT_0096b2d6 + 5;
        if ((DAT_0096b2d0 != (MobyInstance *)0x0) &&
           (DAT_0096b2d0->state != 0xfd && DAT_0096b2d0->state != 0xfe)) {
          sound::PlayMobySound(4,0,DAT_0096b2d0);
        }
        if (DAT_0096b2d7 < DAT_0096b2d6) {
          DAT_0096b2d6 = DAT_0096b2d7;
        }
      }
    }
    else if (MVar7 == JET_FIGHTER_HEALTH_CRATE_04C4) {
      DAT_0096b2dc = DAT_0096b2e0 * 0.25 + DAT_0096b2dc;
      if ((DAT_0096b2d0 != (MobyInstance *)0x0) &&
         (DAT_0096b2d0->state != 0xfd && DAT_0096b2d0->state != 0xfe)) {
        sound::PlayMobySound(5,0,DAT_0096b2d0);
      }
      if (DAT_0096b2e0 < DAT_0096b2dc) {
        DAT_0096b2dc = DAT_0096b2e0;
      }
    }
  }
  else {
LAB_0020b16c:
    if (bVar2 == 5) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
    if (bVar2 != 4) {
      if (bVar2 == 3) {
        pfVar8[6] = -(DAT_0071f418 * 9.8 - pfVar8[6]);
        (moby->pos).x = (moby->pos).x + pfVar8[4];
        (moby->pos).y = (moby->pos).y + pfVar8[5];
        (moby->pos).z = (moby->pos).z + pfVar8[6];
      }
      else if (bVar2 == 2) {
        dVar21 = (double)fastfunc::FastWrapRot
                                   ((moby->rotation).z,mobyutil::g_FrameTime * 0.034906585);
        (moby->rotation).z = (float)dVar21;
        dVar21 = (double)fastfunc::FastWrapRot(pfVar8[0xc],mobyutil::g_FrameTime * 1.5707964);
        fVar3 = (float)(dVar21 + 1.570796251296997);
        fVar4 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar4 = fVar3;
        }
        fVar5 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
          fVar5 = fVar4;
        }
        pfVar8[0xc] = (float)dVar21;
        fVar3 = fVar5 * fVar5;
        fVar4 = fVar3 * fVar3 * fVar5;
        fVar6 = fVar3 * fVar4;
        (moby->rotation).y =
             (fVar3 * fVar6 * 2.601887e-06 +
             fVar6 * -0.0001980741 + fVar4 * 0.0083330255 + fVar3 * fVar5 * -0.16666657 + fVar5) *
             0.7853982;
        fVar4 = pfVar8[4] * 0.8;
        fVar5 = pfVar8[5] * 0.8;
        pfVar8[4] = fVar4;
        pfVar8[5] = fVar5;
        fVar3 = *pfVar8;
        fVar6 = pfVar8[6] * 0.8 - DAT_0071f418 * 9.8;
        pfVar8[6] = fVar6;
        if ((dVar22 < 40.0) && (moby->enabled != '\0')) {
          fVar11 = (pMVar19->pos).y - (moby->pos).y;
          fVar12 = (pMVar19->pos).x - (moby->pos).x;
          fVar13 = (pMVar19->pos).z - (moby->pos).z;
          fVar14 = SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11);
          fVar15 = 0.0;
          fVar18 = (0.8 / (float)SQRT(dVar22)) / fVar14;
          fVar16 = fVar15;
          if (0.0 - fVar14 < 0.0) {
            fVar16 = fVar18 * fVar13;
          }
          fVar17 = fVar15;
          if (0.0 - fVar14 < 0.0) {
            fVar17 = fVar18 * fVar11;
          }
          if (0.0 - fVar14 < 0.0) {
            fVar15 = fVar18 * fVar12;
          }
          if (fVar14 - 0.0 < 0.0) {
            fVar16 = fVar18 * fVar13;
          }
          if (fVar14 - 0.0 < 0.0) {
            fVar17 = fVar18 * fVar11;
          }
          if (fVar14 - 0.0 < 0.0) {
            fVar15 = fVar18 * fVar12;
          }
          fVar6 = fVar6 + fVar16;
          fVar5 = fVar5 + fVar17;
          fVar4 = fVar4 + fVar15;
          pfVar8[6] = fVar6;
          pfVar8[5] = fVar5;
          pfVar8[4] = fVar4;
        }
        pfVar8[1] = pfVar8[1] + fVar5;
        *pfVar8 = fVar3 + fVar4;
        pfVar8[2] = pfVar8[2] + fVar6;
        (moby->pos).x = fVar3 + fVar4 + pfVar8[8];
        (moby->pos).y = pfVar8[1] + pfVar8[9];
        (moby->pos).z = pfVar8[2] + pfVar8[10];
        (moby->pos).w = pfVar8[3];
        iVar20 = mobyupdate_helpers::M1220_0020ac48(moby,pfVar8);
        if ((iVar20 != 0) && (*(char *)((int)pfVar8[0xd] + 0x20) == '\x02')) {
          moby->state = '\x02';
        }
      }
      else if (bVar2 == 1) {
        fVar3 = pfVar8[4];
        fVar4 = pfVar8[5];
        pfVar8[4] = fVar3 * 0.9;
        pfVar8[5] = fVar4 * 0.9;
        fVar5 = *pfVar8 + fVar3 * 0.9;
        fVar3 = DAT_0071f418 * 9.8;
        pfVar8[1] = pfVar8[1] + fVar4 * 0.9;
        *pfVar8 = fVar5;
        fVar3 = pfVar8[6] * 0.9 - fVar3;
        pfVar8[6] = fVar3;
        pfVar8[2] = pfVar8[2] + fVar3;
        (moby->pos).x = fVar5 + pfVar8[8];
        (moby->pos).y = pfVar8[1] + pfVar8[9];
        (moby->pos).z = pfVar8[2] + pfVar8[10];
        (moby->pos).w = pfVar8[3];
        iVar20 = mobyupdate_helpers::M1220_0020ac48(moby,pfVar8);
        if ((iVar20 != 0) && (*(char *)((int)pfVar8[0xd] + 0x52) == '\x01')) {
          pfVar8[4] = pfVar8[4] * 0.8;
          pfVar8[5] = pfVar8[5] * 0.8;
          pfVar8[6] = pfVar8[6] * 0.8;
          moby->state = '\x02';
        }
      }
      else if (bVar2 == 0) {
        pfVar8[0xd] = 0.0;
        mobyupdate_helpers::M1220_0020ac48(moby,pfVar8);
        pfVar8[0xc] = 0.0;
        moby->state = '\x01';
      }
      goto LAB_0020b54c;
    }
  }
  moby->state = '\x05';
LAB_0020b54c:
  fVar9 = (moby->pos).z;
  uVar10 = (int)fVar9 >> 0x1f;
  fVar3 = 20.0;
  bVar1 = (int)((uVar10 >> 1 ^ (uint)fVar9) - uVar10) < 0x41a00000;
  if (bVar1) {
    mobyfunc::DeleteMoby(moby);
  }
  else {
    fVar9 = (moby->pos).x;
    uVar10 = (int)fVar9 >> 0x1f;
    fVar4 = (moby->pos).x;
    if ((int)((uVar10 >> 1 ^ (uint)fVar9) - uVar10) < 0x41a00000) {
      (moby->pos).x = 20.0;
      fVar4 = fVar3;
    }
    if (1003.0 < fVar4) {
      (moby->pos).x = 1003.0;
    }
    fVar9 = (moby->pos).y;
    uVar10 = (int)fVar9 >> 0x1f;
    fVar4 = (moby->pos).y;
    if ((int)((uVar10 >> 1 ^ (uint)fVar9) - uVar10) < 0x41a00000) {
      (moby->pos).y = 20.0;
      fVar4 = fVar3;
    }
    if (1003.0 < fVar4) {
      (moby->pos).y = 1003.0;
    }
    fVar4 = (moby->pos).z;
    if (bVar1) {
      (moby->pos).z = 20.0;
      fVar4 = fVar3;
    }
    if (1003.0 < fVar4) {
      (moby->pos).z = 1003.0;
    }
    mobyutil::MB_RegisterLameShadow(0.5,moby);
  }
  return;
}



//==== 0020b698  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1220_0020b698(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1220_0020b698(void)

{
  DAT_00766a10 = 0x10000;
  return;
}



//==== 0020b6b0  ns=mobyupdate_helpers  size=0xf0
// sig: undefined M1220_0020b6b0(void)
// callers(2): 0020ac48 mobyupdate_helpers::M1220_0020ac48; 0021b6f0 mobyupdate_helpers::M1241_0021b6f0
// callees(4): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fddc0 mobyutil::MB_SetAnimation; 0010c000 mobyutil::MB_CopyHeroLights

MobyInstance * mobyupdate_helpers::M1220_0020b6b0(int param_1)

{
  u8 uVar1;
  f32 fVar2;
  void *pvVar3;
  MobyInstance *pMVar4;
  
  pMVar4 = mobyfunc::CreateMoby(0x4c3);
  if (pMVar4 != (MobyInstance *)0x0) {
    pMVar4->updateDistance = -1;
    pMVar4->enabled = '\x01';
    pMVar4->state = '\0';
    pMVar4->setByGroup = '\0';
    pvVar3 = pMVar4->pVar;
    (pMVar4->pos).x = *(f32 *)(param_1 + 0x10);
    (pMVar4->pos).y = *(f32 *)(param_1 + 0x14);
    (pMVar4->pos).z = *(f32 *)(param_1 + 0x18);
    fVar2 = *(f32 *)(param_1 + 0x1c);
    pMVar4->drawDistance = 0xff;
    (pMVar4->pos).w = fVar2;
    (pMVar4->rotation).x = *(f32 *)(param_1 + 0x40);
    fVar2 = *(f32 *)(param_1 + 0x44);
    *(int *)((int)pvVar3 + 0x70) = param_1;
    (pMVar4->rotation).y = fVar2;
    uVar1 = pMVar4->animationId;
    (pMVar4->rotation).z = *(f32 *)(param_1 + 0x48);
    (pMVar4->rotation).w = *(f32 *)(param_1 + 0x4c);
    if (uVar1 != '\x02') {
      mobyutil::MB_SetAnimation(pMVar4,2,0xd,0);
    }
    mobyfunc::UpdateMobyTransform(pMVar4);
    mobyutil::MB_CopyHeroLights(pMVar4);
  }
  return pMVar4;
}



//==== 0020b7a8  ns=mobyupdate_helpers  size=0x238
// sig: undefined M1219_0020b7a8(void)
// callers(1): 0020b9e8 mobyupdate_unsorted::UpdateMoby_1219
// callees(6): 000fddc0 mobyutil::MB_SetAnimation; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 005cd098 libc::printf
// strings: 00654f30: 'Moby class %d Damage Received: %f\n'

void mobyupdate_helpers::M1219_0020b7a8(MobyInstance *param_1,longlong param_2,undefined8 param_3)

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
  int local_30 [4];
  
  if (param_1->state != '\x04') {
    iVar5 = mobyutil::MB_damage(param_1,0x330000,0);
    if (iVar5 != 0) {
      libc::printf("Moby class %d Damage Received: %f\n",param_1->oClass,
                   (double)*(float *)(iVar5 + 0x2c));
    }
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
        auVar8 = loadVectorLeftIndexed(in_LR,0x20b7a0);
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
        if (param_1->animationId != '\x04') {
          mobyutil::MB_SetAnimation(param_1,4,0,3);
        }
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
        if (param_1->animationId != '\x02') {
          mobyutil::MB_SetAnimation(param_1,2,0,3);
        }
        iVar5 = *(int *)(iVar6 + 0x70);
        if ((iVar5 != 0) && (*(char *)(iVar5 + 0x20) != -3 && *(char *)(iVar5 + 0x20) != -2)) {
          *(undefined1 *)(iVar5 + 0x20) = 3;
        }
        param_1->state = '\x03';
      }
    }
    param_1->damage = -1;
  }
  mobyutil::MB_ColorDyingMoby(param_1,param_2 + 0x60);
  return;
}



//==== 0020b9e8  ns=mobyupdate_unsorted  size=0x174
// sig: undefined UpdateMoby_1219(MobyInstance * moby)
// callers(0): 
// callees(4): 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000fddc0 mobyutil::MB_SetAnimation; 0020b7a8 mobyupdate_helpers::M1219_0020b7a8

/* Moby 1219 */

void mobyupdate_unsorted::UpdateMoby_1219(MobyInstance *moby)

{
  byte bVar1;
  char cVar2;
  void *pvVar3;
  double dVar4;
  
  pvVar3 = moby->pVar;
  bVar1 = moby->state;
  if ((((*(int *)((int)pvVar3 + 0x70) == 0) ||
       (cVar2 = *(char *)(*(int *)((int)pvVar3 + 0x70) + 0x20), cVar2 == -2)) || (cVar2 == -3)) &&
     (bVar1 < 3)) {
    moby->state = '\x04';
  }
  else if (bVar1 != 4) {
    if (bVar1 == 3) {
      if (moby->alpha != '\0') {
        moby->alpha = moby->alpha + -1;
      }
      dVar4 = (double)mobyfunc::BlendAnimFrame(moby);
      if (dVar4 <= 13.5) {
        return;
      }
      moby->state = '\x04';
      return;
    }
    if (bVar1 != 2) {
      if (bVar1 == 1) {
        if ((moby->field43_0x70 & 2U) == 0) {
          return;
        }
        moby->damage = -1;
        moby->state = '\x02';
        return;
      }
      if (bVar1 != 0) {
        return;
      }
      if (moby->animationId != '\x01') {
        mobyutil::MB_SetAnimation(moby,1,0,0xf);
      }
      moby->state = '\x01';
      return;
    }
    mobyupdate_helpers::M1219_0020b7a8(moby,pvVar3,(int)pvVar3 + 0x20);
    if ((moby->field43_0x70 & 2U) == 0) {
      return;
    }
    if (moby->animationId == '\x01') {
      return;
    }
    mobyutil::MB_SetAnimation(moby,1,0,10);
    return;
  }
  mobyfunc::DeleteMoby(moby);
  return;
}



//==== 0020bb70  ns=Global  size=0x1a8
// sig: undefined FUN_0020bb70(void)
// callers(6): 000ed970 mobyattack::UpdateMoby_256_GC_Rocket; 0010e030 mobyutil::MB_genericExplosion; 00202b98 mobyupdate_unsorted::UpdateMoby_121; 00293c48 mobyupdate_unsorted::UpdateMoby_153; 0030f810 mobyupdate_unsorted::UpdateMoby_243; 0048b288 mobyupdate_helpers::M849_0048b288
// callees(4): 000efa28 mobyfunc::CreateMoby; 000f1ec8 mobyfunc::SetColorOfMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat

MobyInstance *
FUN_0020bb70(f32 *param_1,undefined4 *param_2,undefined2 param_3,int param_4,ulonglong param_5)

{
  float fVar1;
  undefined4 *puVar2;
  MobyInstance *pMVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  pMVar3 = mobyfunc::CreateMoby(0x7a);
  if (pMVar3 != (MobyInstance *)0x0) {
    puVar2 = (undefined4 *)pMVar3->pVar;
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = 0xff;
    pMVar3->enabled = '\x01';
    pMVar3->alpha = -0x80;
    mobyfunc::SetColorOfMoby(pMVar3,0x7f,0x7f,0x7f);
    (pMVar3->pos).x = *param_1;
    (pMVar3->pos).y = param_1[1];
    (pMVar3->pos).z = param_1[2];
    (pMVar3->pos).w = param_1[3];
    *puVar2 = *param_2;
    puVar2[1] = param_2[1];
    puVar2[2] = param_2[2];
    puVar2[3] = param_2[3];
    dVar6 = 6.2831854820251465;
    dVar5 = 12.566370964050293;
    dVar4 = (double)mobyutil::MB_randRangeFloat
                              (mobyutil::g_FrameTime * 6.2831855,mobyutil::g_FrameTime * 12.566371);
    puVar2[4] = (float)dVar4;
    dVar4 = (double)mobyutil::MB_randRangeFloat
                              ((float)((double)mobyutil::g_FrameTime * dVar6),
                               (float)((double)mobyutil::g_FrameTime * dVar5));
    puVar2[5] = (float)dVar4;
    *(undefined2 *)(puVar2 + 6) = param_3;
    *(undefined2 *)((int)puVar2 + 0x1a) = param_3;
    fVar1 = pMVar3->scale;
    if (param_4 == 0) {
      dVar4 = (double)mobyutil::MB_randRangeFloat(0.5,0.75);
      fVar1 = (float)((double)pMVar3->scale * dVar4);
      pMVar3->scale = fVar1;
    }
    puVar2[7] = fVar1;
    pMVar3->setByGroup = (byte)param_4 | (byte)((param_5 & 0xffffffff) << 1);
    mobyfunc::UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}



//==== 0020bd30  ns=mobyupdate_unsorted  size=0x3b8
// sig: undefined UpdateMoby_122(MobyInstance * moby)
// callers(0): 
// callees(8): 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 0010a668 mobyutil::ReorderRGB; 00121740 partupd::SpawnPart_4; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble

/* Moby 122 */

void mobyupdate_unsorted::UpdateMoby_122(MobyInstance *moby)

{
  ushort uVar1;
  float *pfVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 local_80 [16];
  int local_70 [4];
  longlong local_60;
  
  pfVar2 = (float *)moby->pVar;
  if ((moby->setByGroup & 1U) != 0) {
    iVar7 = 0;
    dVar8 = -1.0;
    dVar9 = 1.0;
    dVar10 = 45.5;
    do {
      local_70[0] = 0x2fffffff;
      local_70[3] = 0x2f004fff;
      local_70[1] = 0x2f00ffff;
      local_70[2] = 0x2f007fff;
      mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar9);
      mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar9);
      mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar9);
      if ((moby->setByGroup & 0xfeU) == 0) {
        lVar3 = mobyutil::MB_randInt(4);
        local_60 = (longlong)(int)((double)animationSpeed * dVar10);
        partupd::SpawnPart_4
                  ((longlong)(int)moby + 0x10,local_80,
                   *(undefined4 *)((int)local_70 + (int)(lVar3 << 2)),0x4fff,
                   (int)((double)animationSpeed * dVar10),0x32,0x78,1);
      }
      else {
        lVar3 = mobyutil::MB_randInt(4);
        iVar4 = mobyutil::ReorderRGB
                          (*(int *)((int)local_70 + (int)(lVar3 << 2)),
                           (uint)((byte)moby->setByGroup >> 1));
        iVar5 = mobyutil::ReorderRGB(0x4fff,(uint)((byte)moby->setByGroup >> 1));
        local_60 = (longlong)(int)((double)animationSpeed * dVar10);
        partupd::SpawnPart_4
                  ((longlong)(int)moby + 0x10,local_80,iVar4,iVar5,
                   (int)((double)animationSpeed * dVar10),0x32,0x78,1);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 1);
  }
  dVar8 = (double)fastfunc::FastWrapRot((moby->rotation).x,pfVar2[4]);
  (moby->rotation).x = (float)dVar8;
  dVar8 = (double)fastfunc::FastWrapRot((moby->rotation).y,pfVar2[5]);
  (moby->rotation).y = (float)dVar8;
  (moby->pos).x = (moby->pos).x + *pfVar2;
  (moby->pos).y = (moby->pos).y + pfVar2[1];
  (moby->pos).z = (moby->pos).z + pfVar2[2];
  pfVar2[2] = -(DAT_0071f418 * 14.6 - pfVar2[2]);
  if ((((int)(moby->pos).x < 0) || ((int)(moby->pos).y < 0)) || ((int)(moby->pos).z < 0)) {
    mobyfunc::DeleteMoby(moby);
  }
  else {
    uVar1 = *(ushort *)((int)pfVar2 + 0x1a);
    uVar6 = (uint)(short)uVar1;
    if ((int)*(short *)(pfVar2 + 6) <
        (int)(((int)uVar6 >> 2) + (uint)((short)uVar1 < 0 && (uVar1 & 3) != 0))) {
      dVar8 = (double)fastfunc::FastIntToDouble
                                (((int)uVar6 >> 2) + (uint)((int)uVar6 < 0 && (uVar6 & 3) != 0));
      dVar9 = (double)fastfunc::FastIntToDouble(*(undefined2 *)(pfVar2 + 6));
      moby->scale = (float)((double)(float)((double)pfVar2[7] * dVar9) / dVar8);
    }
    iVar7 = fastfunc::FastDecTimerS16(pfVar2 + 6);
    if (iVar7 != 0) {
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 0020c118  ns=mobyupdate_helpers  size=0x36c
// sig: undefined M1221_0020c118(void)
// callers(0): 
// callees(5): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 005023f0 fastfunc::FastVecAdd

MobyInstance * mobyupdate_helpers::M1221_0020c118(undefined8 param_1,f32 *param_2)

{
  f32 fVar1;
  undefined4 *puVar2;
  float fVar3;
  MobyInstance *pMVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  
  pMVar4 = mobyfunc::CreateMoby(0x4c5);
  if (pMVar4 != (MobyInstance *)0x0) {
    puVar2 = (undefined4 *)pMVar4->pVar;
    dVar14 = -3.1415927410125732;
    dVar12 = 3.1415927410125732;
    dVar11 = 0.0;
    dVar6 = (double)mobyutil::MB_randRangeFloat(-3.1415927,3.1415927);
    dVar7 = (double)mobyutil::MB_randRangeFloat((float)dVar14,(float)dVar12);
    dVar14 = (double)mobyutil::MB_randRangeFloat((float)dVar14,(float)dVar12);
    pMVar4->updateDistance = -1;
    pMVar4->drawDistance = 0xff;
    pMVar4->enabled = '\x01';
    pMVar4->state = '\0';
    (pMVar4->pos).x = *param_2;
    (pMVar4->pos).y = param_2[1];
    (pMVar4->pos).z = param_2[2];
    fVar1 = param_2[3];
    (pMVar4->rotation).z = (float)dVar14;
    (pMVar4->pos).w = fVar1;
    dVar13 = (double)SQRT((float)(dVar14 * dVar14 +
                                 (double)(float)(dVar6 * dVar6 + (double)(float)(dVar7 * dVar7))));
    fastfunc::FastVecAdd(&local_80,local_90,local_a0);
    *puVar2 = local_80;
    puVar2[1] = local_7c;
    puVar2[2] = local_78;
    puVar2[3] = local_74;
    fVar3 = mobyutil::g_FrameTime * 6.2831855;
    puVar2[7] = 0;
    dVar8 = (double)(float)((double)fVar3 / dVar13);
    dVar12 = dVar11;
    if (dVar11 - dVar13 < 0.0) {
      dVar12 = (double)(float)(dVar6 * dVar8);
    }
    dVar10 = dVar11;
    if (dVar11 - dVar13 < 0.0) {
      dVar10 = (double)(float)(dVar7 * dVar8);
    }
    dVar9 = dVar11;
    if (dVar11 - dVar13 < 0.0) {
      dVar9 = (double)(float)(dVar14 * dVar8);
    }
    if (dVar13 - dVar11 < 0.0) {
      dVar12 = (double)(float)(dVar6 * dVar8);
    }
    if (dVar13 - dVar11 < 0.0) {
      dVar10 = (double)(float)(dVar7 * dVar8);
    }
    if (dVar13 - dVar11 < 0.0) {
      dVar9 = (double)(float)(dVar14 * dVar8);
    }
    puVar2[4] = (float)dVar12;
    puVar2[5] = (float)dVar10;
    puVar2[6] = (float)dVar9;
    dVar14 = -45.0;
    dVar7 = 45.0;
    dVar12 = (double)mobyutil::MB_randRangeFloat(-45.0,45.0);
    dVar6 = 0.01745329238474369;
    puVar2[4] = (float)(dVar12 * 0.01745329238474369) * mobyutil::g_FrameTime;
    dVar12 = (double)mobyutil::MB_randRangeFloat((float)dVar14,(float)dVar7);
    fVar3 = mobyutil::g_FrameTime;
    puVar2[5] = (float)(dVar12 * dVar6) * mobyutil::g_FrameTime;
    puVar2[6] = fVar3 * 12.566371;
    uVar5 = mobyutil::MB_randRange((int)(animationSpeed * 60.5),(int)(animationSpeed * 90.5));
    puVar2[9] = uVar5;
    puVar2[8] = uVar5;
    mobyfunc::UpdateMobyTransform(pMVar4);
  }
  return pMVar4;
}



//==== 0020c490  ns=mobyupdate_unsorted  size=0x110
// sig: undefined UpdateMoby_1221(MobyInstance * moby)
// callers(0): 
// callees(6): 000efb38 mobyfunc::DeleteMoby; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 00502b08 fastfunc::FastVecAddSelf

/* Moby 1221 */

void mobyupdate_unsorted::UpdateMoby_1221(MobyInstance *moby)

{
  void *pvVar1;
  undefined4 uVar2;
  s8 sVar4;
  int iVar3;
  double dVar5;
  double dVar6;
  undefined1 auStack_30 [16];
  
  pvVar1 = moby->pVar;
  *(float *)((int)pvVar1 + 8) = -(DAT_0071f418 * 9.8 - *(float *)((int)pvVar1 + 8));
  fastfunc::FastVecAddSelf(auStack_30,(longlong)(int)moby + 0x10,pvVar1);
  dVar5 = (double)fastfunc::FastWrapRot((moby->rotation).x,*(float *)((int)pvVar1 + 0x10));
  (moby->rotation).x = (float)dVar5;
  dVar5 = (double)fastfunc::FastWrapRot((moby->rotation).y,*(float *)((int)pvVar1 + 0x14));
  (moby->rotation).y = (float)dVar5;
  dVar5 = (double)fastfunc::FastWrapRot((moby->rotation).z,*(float *)((int)pvVar1 + 0x18));
  uVar2 = *(undefined4 *)((int)pvVar1 + 0x20);
  (moby->rotation).z = (float)dVar5;
  dVar5 = (double)fastfunc::FastIntToDouble(uVar2);
  dVar6 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)pvVar1 + 0x24));
  sVar4 = fastfunc::FastDoubleToInt((double)(float)((double)(float)(dVar6 * 255.0) / dVar5));
  moby->alpha = sVar4;
  iVar3 = fastfunc::FastDecTimerS32((int)pvVar1 + 0x24);
  if (iVar3 != 0) {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 0020c5c0  ns=mobyupdate_helpers  size=0x31c
// sig: undefined M1222_0020c5c0(void)
// callers(0): 
// callees(5): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 005023f0 fastfunc::FastVecAdd

MobyInstance * mobyupdate_helpers::M1222_0020c5c0(undefined8 param_1,f32 *param_2)

{
  f32 fVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  MobyInstance *pMVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  
  pMVar5 = mobyfunc::CreateMoby(PROPELLER);
  if (pMVar5 != (MobyInstance *)0x0) {
    puVar2 = (undefined4 *)pMVar5->pVar;
    dVar11 = -3.1415927410125732;
    dVar10 = 3.1415927410125732;
    dVar9 = 0.0;
    dVar7 = (double)mobyutil::MB_randRangeFloat(-3.1415927,3.1415927);
    dVar8 = (double)mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar10);
    dVar10 = (double)mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar10);
    pMVar5->updateDistance = -1;
    pMVar5->drawDistance = 0xff;
    pMVar5->enabled = '\x01';
    pMVar5->state = '\0';
    (pMVar5->pos).x = *param_2;
    (pMVar5->pos).y = param_2[1];
    (pMVar5->pos).z = param_2[2];
    fVar1 = param_2[3];
    (pMVar5->rotation).x = (float)dVar7;
    (pMVar5->pos).w = fVar1;
    (pMVar5->rotation).y = (float)dVar8;
    (pMVar5->rotation).z = (float)dVar10;
    (pMVar5->rotation).w = 0.0;
    dVar12 = (double)SQRT((float)(dVar10 * dVar10 +
                                 (double)(float)(dVar7 * dVar7 + (double)(float)(dVar8 * dVar8))));
    fastfunc::FastVecAdd(&local_90,local_a0,local_b0);
    *puVar2 = local_90;
    puVar2[1] = local_8c;
    puVar2[2] = local_88;
    puVar2[3] = local_84;
    fVar4 = mobyutil::g_FrameTime;
    fVar3 = mobyutil::g_FrameTime * 1.5707964;
    puVar2[7] = 0;
    dVar10 = (double)(float)((double)fVar3 / dVar12);
    dVar11 = (double)(float)(dVar7 * dVar10);
    dVar8 = (double)(float)(dVar8 * dVar10);
    dVar7 = dVar9;
    if (dVar9 - dVar12 < 0.0) {
      dVar7 = dVar11;
    }
    dVar10 = dVar9;
    if (dVar9 - dVar12 < 0.0) {
      dVar10 = dVar8;
    }
    if (dVar12 - dVar9 < 0.0) {
      dVar7 = dVar11;
    }
    if (dVar12 - dVar9 < 0.0) {
      dVar10 = dVar8;
    }
    puVar2[4] = (float)dVar7;
    puVar2[5] = (float)dVar10;
    puVar2[6] = fVar4 * 12.566371;
    uVar6 = mobyutil::MB_randRange((int)(animationSpeed * 60.5),(int)(animationSpeed * 90.5));
    puVar2[9] = uVar6;
    puVar2[8] = uVar6;
    mobyfunc::UpdateMobyTransform(pMVar5);
  }
  return pMVar5;
}



//==== 0020c8e8  ns=mobyupdate_unsorted  size=0x110
// sig: undefined UpdateMoby_1222(MobyInstance * moby)
// callers(0): 
// callees(6): 000efb38 mobyfunc::DeleteMoby; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 00502b08 fastfunc::FastVecAddSelf

/* Moby 1222 */

void mobyupdate_unsorted::UpdateMoby_1222(MobyInstance *moby)

{
  void *pvVar1;
  undefined4 uVar2;
  s8 sVar4;
  int iVar3;
  double dVar5;
  double dVar6;
  undefined1 auStack_30 [16];
  
  pvVar1 = moby->pVar;
  *(float *)((int)pvVar1 + 8) = -(DAT_0071f418 * 9.8 - *(float *)((int)pvVar1 + 8));
  fastfunc::FastVecAddSelf(auStack_30,(longlong)(int)moby + 0x10,pvVar1);
  dVar5 = (double)fastfunc::FastWrapRot((moby->rotation).x,*(float *)((int)pvVar1 + 0x10));
  (moby->rotation).x = (float)dVar5;
  dVar5 = (double)fastfunc::FastWrapRot((moby->rotation).y,*(float *)((int)pvVar1 + 0x14));
  (moby->rotation).y = (float)dVar5;
  dVar5 = (double)fastfunc::FastWrapRot((moby->rotation).z,*(float *)((int)pvVar1 + 0x18));
  uVar2 = *(undefined4 *)((int)pvVar1 + 0x20);
  (moby->rotation).z = (float)dVar5;
  dVar5 = (double)fastfunc::FastIntToDouble(uVar2);
  dVar6 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)pvVar1 + 0x24));
  sVar4 = fastfunc::FastDoubleToInt((double)(float)((double)(float)(dVar6 * 255.0) / dVar5));
  moby->alpha = sVar4;
  iVar3 = fastfunc::FastDecTimerS32((int)pvVar1 + 0x24);
  if (iVar3 != 0) {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 0020ca00  ns=mobyupdate_helpers  size=0x260
// sig: undefined M1224_0020ca00(void)
// callers(1): 0020dd00 mobyupdate_unsorted::UpdateMoby_1224
// callees(2): 00502730 fastfunc::FastIntToDouble; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M1224_0020ca00(int param_1)

{
  short sVar1;
  int iVar2;
  undefined1 auVar3 [16];
  float *pfVar4;
  float *pfVar5;
  byte *pbVar6;
  int iVar7;
  float *pfVar8;
  undefined4 uVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  undefined4 *puVar13;
  byte in_cr6;
  undefined8 in_LR;
  longlong lVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  
  iVar2 = *(int *)(param_1 + 0x78);
  sVar1 = *(short *)(iVar2 + 0x12);
  if (sVar1 != 0) {
    iVar7 = iVar2 + 0x40;
    lVar14 = 0x17;
    *(short *)(iVar2 + 0x12) = sVar1 + -1;
    do {
      *(float *)(iVar7 + 0x20) = *(float *)(iVar7 + 0x20) + *(float *)(iVar7 + 0x220);
      *(float *)(iVar7 + 0x24) = *(float *)(iVar7 + 0x24) + *(float *)(iVar7 + 0x224);
      *(float *)(iVar7 + 0x28) = *(float *)(iVar7 + 0x28) + *(float *)(iVar7 + 0x228);
      iVar7 = iVar7 + 0x10;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    auVar3 = ZEXT416(0);
    iVar7 = 0;
    auVar17 = loadVectorLeftIndexed(in_LR,0x20c9f8);
    auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
    vectorCompareGreaterThanOrEqualToFloatingPoint
              (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,
               auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60);
    if ((bool)(in_cr6 >> 1 & 1)) {
      pfVar10 = (float *)(iVar2 + 0x420);
      pfVar8 = (float *)(iVar2 + 0x520);
      do {
        lVar14 = 3;
        pfVar4 = pfVar8;
        pfVar5 = pfVar10;
        do {
          pfVar12 = pfVar5 + 0x10;
          *pfVar12 = *pfVar12 + pfVar4[0x10];
          pfVar5[0x11] = pfVar5[0x11] + pfVar4[0x11];
          pfVar5[0x12] = pfVar5[0x12] + pfVar4[0x12];
          lVar14 = lVar14 + -1;
          pfVar4 = pfVar4 + 0x10;
          pfVar5 = pfVar12;
        } while (lVar14 != 0);
        iVar7 = iVar7 + 1;
        pfVar10 = pfVar10 + 4;
        pfVar8 = pfVar8 + 4;
      } while ((float)(longlong)iVar7 < 4.0);
    }
    lVar14 = 4;
    iVar7 = iVar2;
    iVar11 = iVar2;
    do {
      pbVar6 = (byte *)(iVar11 + 0x18);
      iVar11 = iVar11 + 1;
      puVar13 = (undefined4 *)((uint)*pbVar6 * 0x10 + iVar2 + 0x20);
      *(undefined4 *)(iVar7 + 0x420) = *puVar13;
      *(undefined4 *)(iVar7 + 0x424) = puVar13[1];
      *(undefined4 *)(iVar7 + 0x428) = puVar13[2];
      *(undefined4 *)(iVar7 + 0x42c) = puVar13[3];
      iVar7 = iVar7 + 0x10;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    sVar1 = *(short *)(iVar2 + 0x12);
  }
  if (DAT_00766a3c < sVar1) {
    dVar15 = (double)fastfunc::FastIntToDouble(sVar1 - DAT_00766a3c);
    dVar16 = (double)fastfunc::FastIntToDouble(*(int *)(iVar2 + 0x620) - DAT_00766a3c);
    uVar9 = fastfunc::FastLerpColor((double)(float)(dVar15 / dVar16),DAT_00766a50,DAT_00766a4c);
  }
  else {
    uVar9 = 0;
    if (DAT_00f08e3c < sVar1) {
      dVar15 = (double)fastfunc::FastIntToDouble(sVar1 - DAT_00f08e3c);
      dVar16 = (double)fastfunc::FastIntToDouble(DAT_00766a3c - DAT_00f08e3c);
      uVar9 = fastfunc::FastLerpColor((double)(float)(dVar15 / dVar16),DAT_00766a54,DAT_00766a50);
    }
  }
  *(undefined4 *)(iVar2 + 0x14) = uVar9;
  return;
}



//==== 0020cc88  ns=mobyupdate_helpers  size=0x738
// sig: undefined M1224_0020cc88(void)
// callers(1): 0020dd00 mobyupdate_unsorted::UpdateMoby_1224
// callees(1): 00057820 collproc::CollLine

void mobyupdate_helpers::M1224_0020cc88(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int *piVar8;
  float fVar9;
  int iVar10;
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [48];
  
  piVar8 = *(int **)(param_1 + 0x78);
  if (piVar8[7] != 0) {
    iVar10 = *piVar8;
    fVar1 = Cuboids[iVar10].pos.x;
    fVar2 = Cuboids[iVar10].pos.y;
    fVar3 = Cuboids[iVar10].pos.z;
    fVar4 = Cuboids[iVar10].pos.w;
    if (*(short *)(piVar8 + 2) != 0) {
      iVar10 = *piVar8;
      fVar5 = Cuboids[iVar10].matrix.v1.x;
      fVar6 = Cuboids[iVar10].matrix.v1.y;
      fVar7 = Cuboids[iVar10].matrix.v1.z;
      iVar10 = collproc::CollLine(local_d0,local_c0,0,param_1,0);
      if (iVar10 == 0) {
        piVar8[0x18c] = (int)(fVar1 + fVar5);
        piVar8[0x18d] = (int)(fVar2 + fVar6);
        piVar8[0x18e] = (int)(fVar3 + fVar7);
        piVar8[399] = (int)fVar4;
      }
      else {
        fVar5 = CollOutput.ip.y - fVar2;
        fVar6 = CollOutput.ip.x - fVar1;
        fVar7 = CollOutput.ip.z - fVar3;
        *(undefined2 *)(piVar8 + 2) = 0;
        fVar9 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
        fVar9 = (fVar9 * 0.98) / fVar9;
        piVar8[0x18c] = (int)(fVar6 * fVar9 + fVar1);
        piVar8[0x18d] = (int)(fVar5 * fVar9 + fVar2);
        piVar8[0x18e] = (int)(fVar7 * fVar9 + fVar3);
        piVar8[399] = (int)fVar4;
      }
    }
    if (*(short *)((int)piVar8 + 10) != 0) {
      iVar10 = *piVar8;
      fVar5 = Cuboids[iVar10].matrix.v1.x;
      fVar6 = Cuboids[iVar10].matrix.v1.y;
      fVar7 = Cuboids[iVar10].matrix.v1.z;
      iVar10 = collproc::CollLine(local_d0,local_b0,0,param_1,0);
      if (iVar10 == 0) {
        piVar8[400] = (int)(fVar1 - fVar5);
        piVar8[0x191] = (int)(fVar2 - fVar6);
        piVar8[0x192] = (int)(fVar3 - fVar7);
        piVar8[0x193] = (int)fVar4;
      }
      else {
        fVar5 = CollOutput.ip.y - fVar2;
        fVar6 = CollOutput.ip.x - fVar1;
        fVar7 = CollOutput.ip.z - fVar3;
        *(undefined2 *)((int)piVar8 + 10) = 0;
        fVar9 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
        fVar9 = (fVar9 * 0.98) / fVar9;
        piVar8[400] = (int)(fVar6 * fVar9 + fVar1);
        piVar8[0x191] = (int)(fVar5 * fVar9 + fVar2);
        piVar8[0x192] = (int)(fVar7 * fVar9 + fVar3);
        piVar8[0x193] = (int)fVar4;
      }
    }
    collproc::CollLine(local_a0,local_90,1,param_1,local_80);
    collproc::CollLine(local_a0,local_90,1,param_1,local_80);
    collproc::CollLine(local_a0,local_90,1,param_1,local_80);
    collproc::CollLine(local_a0,local_90,1,param_1,local_80);
  }
  return;
}



//==== 0020d3e0  ns=mobyupdate_helpers  size=0x914
// sig: undefined M1224_0020d3e0(void)
// callers(1): 0020dd00 mobyupdate_unsorted::UpdateMoby_1224
// callees(8): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 000fea60 mobyutil::MB_randSphere; 001206e8 partupd::SpawnPart_2; 00500ca4 fastfunc::FastEulerToMtx1; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M1224_0020d3e0(int param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  short sVar16;
  longlong lVar13;
  int *piVar14;
  int iVar15;
  int *piVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  int *piVar22;
  float *pfVar23;
  float *pfVar24;
  int *piVar25;
  int iVar26;
  int *piVar27;
  int iVar28;
  int iVar29;
  int *piVar30;
  double dVar31;
  double dVar32;
  undefined8 uVar33;
  double dVar34;
  double dVar35;
  undefined8 uVar36;
  float local_530;
  float local_52c;
  float local_528;
  float local_520;
  float local_51c;
  float local_518;
  undefined1 local_510 [16];
  undefined1 local_500 [16];
  undefined1 local_4f0 [16];
  undefined1 local_4e0 [16];
  undefined1 local_4d0 [48];
  float local_4a0 [4];
  float local_490 [124];
  float afStack_2a0 [4];
  float local_290 [128];
  longlong local_90;
  
  piVar30 = *(int **)(param_1 + 0x78);
  Cuboids[*piVar30].pos.w = 1.0;
  dVar34 = 0.5;
  iVar15 = (int)(animationSpeed * (float)((double)(longlong)DAT_00766a38 + 0.5));
  local_90 = (longlong)iVar15;
  sVar16 = mobyutil::MB_randRange
                     ((int)(animationSpeed * (float)((double)(longlong)DAT_00766a34 + 0.5)),iVar15);
  iVar15 = *piVar30;
  fVar2 = Cuboids[iVar15].matrix.v1.y;
  fVar3 = Cuboids[iVar15].matrix.v1.x;
  fVar4 = Cuboids[iVar15].matrix.v1.z;
  pfVar24 = local_490;
  *(short *)((int)piVar30 + 0x12) = sVar16;
  iVar26 = 0;
  pfVar23 = local_290;
  piVar30[0x188] = (int)sVar16;
  uVar33 = 0;
  dVar35 = (double)(SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) * 2.0);
  iVar15 = 0;
  do {
    dVar31 = (double)fastfunc::FastIntToDouble(iVar15);
    dVar32 = (double)fastfunc::FastIntToDouble(0x1f);
    dVar31 = (double)(float)(dVar34 - (double)(float)(dVar31 / dVar32));
    if ((iVar15 < 3) || (0x1c < iVar15)) {
      local_490[iVar15 * 4 + 3] = 0.0;
      local_490[iVar15 * 4 + 2] = 0.0;
      local_490[iVar15 * 4 + 1] = 0.0;
      pfVar24[iVar15 * 4] = 0.0;
      local_290[iVar15 * 4 + 3] = 0.0;
      local_290[iVar15 * 4 + 2] = 0.0;
      local_290[iVar15 * 4 + 1] = 0.0;
      pfVar23[iVar15 * 4] = 0.0;
    }
    else {
      mobyutil::MB_randSphere(uVar33,(double)DAT_00766a98);
      mobyutil::MB_randSphere
                (uVar33,(double)(DAT_00766a9c * mobyutil::g_FrameTime),pfVar23 + iVar15 * 4);
    }
    iVar28 = iVar15 + 1;
    local_490[iVar15 * 4 + 3] = 1.0;
    local_490[iVar15 * 4 + 1] = (float)(dVar31 * dVar35 + (double)local_490[iVar15 * 4 + 1]);
    iVar15 = iVar28;
  } while (iVar28 < 0x20);
  iVar15 = 0;
  pfVar21 = local_290;
  pfVar18 = local_4a0;
  pfVar19 = local_490;
  pfVar20 = afStack_2a0;
  piVar22 = piVar30;
  do {
    pfVar21 = pfVar21 + 4;
    pfVar19 = pfVar19 + 4;
    if ((iVar15 == 0) || (iVar15 == 0x1f)) {
      piVar22[8] = (int)*pfVar24;
      piVar22[9] = (int)pfVar24[1];
      piVar22[10] = (int)pfVar24[2];
      piVar22[0xb] = (int)pfVar24[3];
      piVar22[0x88] = (int)*pfVar23;
      piVar22[0x89] = (int)pfVar23[1];
      piVar22[0x8a] = (int)pfVar23[2];
      fVar2 = pfVar23[3];
    }
    else {
      fVar2 = *pfVar18;
      fVar3 = *pfVar24;
      fVar4 = pfVar18[1];
      fVar10 = pfVar24[1];
      fVar5 = pfVar18[2];
      fVar6 = pfVar24[2];
      fVar7 = *pfVar19;
      fVar8 = pfVar19[1];
      fVar9 = pfVar19[2];
      piVar22[0xb] = (int)pfVar18[3];
      piVar22[8] = (int)((fVar2 + fVar3 + fVar7) * 0.333);
      piVar22[9] = (int)((fVar4 + fVar10 + fVar8) * 0.333);
      piVar22[10] = (int)((fVar5 + fVar6 + fVar9) * 0.333);
      fVar3 = pfVar20[1];
      fVar4 = pfVar23[1];
      fVar10 = pfVar20[2];
      fVar5 = pfVar23[2];
      fVar6 = pfVar21[1];
      fVar7 = pfVar21[2];
      fVar2 = pfVar20[3];
      piVar22[0x88] = (int)((*pfVar20 + *pfVar23 + *pfVar21) * 0.333);
      piVar22[0x89] = (int)((fVar3 + fVar4 + fVar6) * 0.333);
      piVar22[0x8a] = (int)((fVar10 + fVar5 + fVar7) * 0.333);
    }
    iVar15 = iVar15 + 1;
    piVar22[0x8b] = (int)fVar2;
    pfVar18 = pfVar18 + 4;
    pfVar24 = pfVar24 + 4;
    pfVar20 = pfVar20 + 4;
    pfVar23 = pfVar23 + 4;
    piVar22 = piVar22 + 4;
  } while (iVar15 < 0x20);
  iVar15 = 0;
  piVar22 = piVar30;
  piVar27 = piVar30;
  do {
    mobyutil::MB_randSphere((double)DAT_00766a98,&local_530);
    lVar13 = (longlong)iVar15;
    iVar15 = iVar15 + 1;
    local_90 = (longlong)iVar15;
    mobyutil::MB_randRangeFloat((float)lVar13 * 6.0,(float)local_90 * 6.0);
    iVar28 = fastfunc::FastDoubleToInt();
    iVar28 = iVar28 + 4;
    piVar14 = piVar30 + iVar28 * 4 + 8;
    *(char *)(piVar27 + 6) = (char)iVar28;
    iVar29 = 1;
    piVar25 = piVar22 + 0x158;
    piVar17 = piVar30 + iVar28 * 4 + 0x88;
    pfVar24 = (float *)(piVar22 + 0x118);
    pfVar23 = (float *)(piVar22 + 0x108);
    piVar22[0x108] = *piVar14;
    piVar22[0x109] = piVar14[1];
    piVar22[0x10a] = piVar14[2];
    piVar22[0x10b] = piVar14[3];
    piVar22[0x148] = *piVar17;
    piVar22[0x149] = piVar17[1];
    piVar22[0x14a] = piVar17[2];
    piVar22[0x14b] = piVar17[3];
    uVar36 = 0x3fb99999a0000000;
    do {
      mobyutil::MB_randSphere(uVar36,uVar36,&local_520);
      mobyutil::MB_randSphere(uVar33,(double)(DAT_00766a9c * mobyutil::g_FrameTime),piVar25);
      fVar2 = *pfVar23;
      iVar29 = iVar29 + 1;
      piVar25 = piVar25 + 0x10;
      *pfVar24 = fVar2 + local_530;
      fVar3 = pfVar23[1];
      pfVar24[1] = fVar3 + local_52c;
      fVar4 = pfVar23[2];
      pfVar24[2] = fVar4 + local_528;
      fVar10 = pfVar23[3];
      pfVar24[3] = fVar10;
      pfVar23 = pfVar23 + 0x10;
      *pfVar24 = fVar2 + local_530 + local_520;
      pfVar24[1] = fVar3 + local_52c + local_51c;
      pfVar24[3] = fVar10;
      pfVar24[2] = fVar4 + local_528 + local_518;
      pfVar24 = pfVar24 + 0x10;
    } while (iVar29 < 4);
    piVar27 = (int *)((int)piVar27 + 1);
    piVar22 = piVar22 + 4;
  } while (iVar15 < 4);
  iVar15 = *piVar30;
  fVar2 = Cuboids[iVar15].pos.y - GameCamera.posY;
  fVar3 = Cuboids[iVar15].pos.x - GameCamera.posX;
  if (4.0 <= SQRT(fVar3 * fVar3 + fVar2 * fVar2)) {
    fastfunc::FastEulerToMtx1(local_4d0,&Cuboids[iVar15].rot);
    iVar15 = 0;
    do {
      mobyutil::MB_randInt(2);
      uVar12 = DAT_00766aa8;
      uVar11 = DAT_00766aa4;
      iVar28 = mobyutil::MB_randInt(10);
      iVar28 = (int)(animationSpeed * (float)((double)(longlong)(iVar28 + 0x14) + dVar34));
      local_90 = (longlong)iVar28;
      partupd::SpawnPart_2(local_510,local_500,local_500,uVar11,uVar12,iVar15 >> 1,0xf,iVar28);
      iVar15 = iVar15 + 8;
    } while (iVar15 < 0x20);
    do {
      mobyutil::MB_randInt(2);
      uVar12 = DAT_00766aa8;
      uVar11 = DAT_00766aa4;
      bVar1 = *(byte *)(piVar30 + 6);
      iVar15 = mobyutil::MB_randInt(10);
      iVar15 = (int)(animationSpeed * (float)((double)(longlong)(iVar15 + 0x14) + dVar34));
      local_90 = (longlong)iVar15;
      partupd::SpawnPart_2
                (local_4f0,local_4e0,local_4e0,uVar11,uVar12,((ulonglong)bVar1 << 0x20) >> 0x21,0xf,
                 iVar15);
      iVar26 = iVar26 + 1;
      piVar30 = (int *)((int)piVar30 + 1);
    } while (iVar26 < 2);
  }
  return;
}



//==== 0020dd00  ns=mobyupdate_unsorted  size=0x3f8
// sig: undefined UpdateMoby_1224(MobyInstance * moby)
// callers(0): 
// callees(6): 0006d7e0 draw::RegisterPostDraw; 0020ca00 mobyupdate_helpers::M1224_0020ca00; 0020cc88 mobyupdate_helpers::M1224_0020cc88; 0020d3e0 mobyupdate_helpers::M1224_0020d3e0; 004fffb4 fastfunc::FastDecTimerS16; 00502910 fastfunc::FastCheckBsphereInView

/* Moby 1224 */

void mobyupdate_unsorted::UpdateMoby_1224(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  int *piVar6;
  undefined2 uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 local_20 [16];
  
  bVar1 = moby->state;
  piVar6 = (int *)moby->pVar;
  uVar9 = ZEXT48(piVar6);
  if (bVar1 != 0) {
    iVar8 = fastfunc::FastCheckBsphereInView(0x404a000000000000,local_20);
    if (iVar8 < 0) {
      return;
    }
    bVar1 = moby->state;
  }
  if (DAT_00f08e40 == 0) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        mobyupdate_helpers::M1224_0020d3e0(moby);
        auVar11 = ZEXT416(0xffffffff);
        auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
        auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
        auVar11 = loadVectorLeftIndexed(0xc,uVar9);
        auVar10 = loadVectorRightIndexed(0x1c,uVar9);
        auVar10 = vectorConvertFromSignedFixedPointWord(auVar11 | auVar10,0);
        auVar11 = loadVectorLeftIndexed(4,0x20dcf4);
        auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar11 = vectorAddFloatingPoint
                            (auVar10,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
        auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar11,auVar12);
        auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
        auVar11 = vectorSplatHalfWord(auVar11,1);
        uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x10,uVar9);
        *(undefined2 *)(piVar6 + 4) = uVar7;
        moby->state = '\x02';
        iVar8 = *piVar6;
        fVar2 = Cuboids[iVar8].matrix.v1.y;
        fVar3 = Cuboids[iVar8].matrix.v1.x;
        fVar4 = Cuboids[iVar8].matrix.v1.z;
        *(undefined2 *)(piVar6 + 2) = 1;
        *(undefined2 *)((int)piVar6 + 10) = 1;
        piVar6[0x189] = (int)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      }
      else if ((DAT_00f08e38 != 0) && (*(short *)((int)piVar6 + 0x12) == 0)) {
        DAT_00f08e38 = DAT_00f08e38 + -1;
        mobyupdate_helpers::M1224_0020d3e0(moby);
      }
    }
    else if (bVar1 < 3) {
      iVar8 = fastfunc::FastDecTimerS16(uVar9 + 0x10);
      if (iVar8 != 0) {
        auVar11 = ZEXT416(0xffffffff);
        auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
        moby->state = '\x03';
        auVar10 = loadVectorLeftIndexed(4,uVar9);
        auVar12 = loadVectorRightIndexed(0x14,uVar9);
        auVar13 = vectorShiftLeftIntegerWord(auVar11,auVar11);
        auVar11 = ZEXT416(0xfffffff0);
        auVar10 = vectorShiftRightAlgebraicWord
                            (auVar10 | auVar12,
                             auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
        auVar11 = loadVectorLeftIndexed(4,0x20dcf4);
        auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar10 = vectorConvertFromSignedFixedPointWord(auVar10,0);
        auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar11 = vectorAddFloatingPoint
                            (auVar10,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
        auVar11 = vectorMultiplyAddFloatingPoint(auVar12,auVar11,auVar13);
        auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
        auVar11 = vectorSplatHalfWord(auVar11,1);
        uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x10,uVar9);
        *(undefined2 *)(piVar6 + 4) = uVar7;
        mobyupdate_helpers::M1224_0020d3e0(moby);
      }
    }
    else if (bVar1 < 4) {
      iVar8 = fastfunc::FastDecTimerS16(uVar9 + 0x10);
      if (iVar8 == 0) {
        if (*(short *)((int)piVar6 + 0x12) == 0) {
          mobyupdate_helpers::M1224_0020d3e0(moby);
        }
      }
      else if (*(short *)((int)piVar6 + 6) == 0) {
        auVar11 = ZEXT416(0xffffffff);
        auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
        auVar10 = loadVectorLeftIndexed(4,uVar9);
        auVar12 = loadVectorRightIndexed(0x14,uVar9);
        auVar13 = vectorShiftLeftIntegerWord(auVar11,auVar11);
        auVar11 = ZEXT416(0xfffffff0);
        auVar10 = vectorShiftRightAlgebraicWord
                            (auVar10 | auVar12,
                             auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
        auVar11 = loadVectorLeftIndexed(4,0x20dcf4);
        auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar10 = vectorConvertFromSignedFixedPointWord(auVar10,0);
        auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar11 = vectorAddFloatingPoint
                            (auVar10,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
        auVar11 = vectorMultiplyAddFloatingPoint(auVar12,auVar11,auVar13);
        auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
        auVar11 = vectorSplatHalfWord(auVar11,1);
        uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x10,uVar9);
        *(undefined2 *)(piVar6 + 4) = uVar7;
      }
      else {
        auVar11 = ZEXT416(0xffffffff);
        auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
        moby->state = '\x02';
        auVar10 = loadVectorLeftIndexed(6,uVar9);
        auVar12 = loadVectorRightIndexed(0x16,uVar9);
        auVar13 = vectorShiftLeftIntegerWord(auVar11,auVar11);
        auVar11 = ZEXT416(0xfffffff0);
        auVar10 = vectorShiftRightAlgebraicWord
                            (auVar10 | auVar12,
                             auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
        auVar11 = loadVectorLeftIndexed(4,0x20dcf4);
        auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar10 = vectorConvertFromSignedFixedPointWord(auVar10,0);
        auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar11 = vectorAddFloatingPoint
                            (auVar10,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
        auVar11 = vectorMultiplyAddFloatingPoint(auVar12,auVar11,auVar13);
        auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
        auVar11 = vectorSplatHalfWord(auVar11,1);
        uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x10,uVar9);
        *(undefined2 *)(piVar6 + 4) = uVar7;
      }
    }
    if ((DAT_00f08e4c == 0) &&
       (fVar2 = (moby->pos).y - g_heroPosition.y, fVar3 = (moby->pos).x - g_heroPosition.x,
       SQRT(fVar3 * fVar3 + fVar2 * fVar2) < 10.0)) {
      mobyupdate_helpers::M1224_0020cc88(moby);
    }
    sVar5 = *(short *)((int)piVar6 + 0x12);
    if (sVar5 != 0) {
      if (DAT_00f08e44 == 0) {
        mobyupdate_helpers::M1224_0020ca00(moby);
        sVar5 = *(short *)((int)piVar6 + 0x12);
      }
      if ((DAT_00f08e3c < sVar5) && (DAT_00f08e48 == 0)) {
        draw::RegisterPostDraw(&PTR_M1225_0020e108_00709530,moby);
      }
    }
  }
  return;
}



//==== 0020e108  ns=mobyupdate_helpers  size=0x808
// sig: undefined M1225_0020e108(void)
// callers(0): 
// callees(8): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00500ca4 fastfunc::FastEulerToMtx1; 005010c0 fastfunc::FastNormalizeRMtx4; 00502730 fastfunc::FastIntToDouble; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1225_0020e108(int param_1)

{
  longlong lVar1;
  float fVar2;
  undefined4 uVar3;
  int *piVar4;
  ulonglong *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  Cuboid *pCVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  undefined4 *puVar16;
  ulonglong unaff_r15;
  ulonglong unaff_r16;
  float *pfVar17;
  ulonglong unaff_r17;
  int iVar18;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  float *pfVar19;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  float *pfVar20;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  uint uVar21;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  longlong lVar22;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int *piVar23;
  ulonglong unaff_r29;
  uint uVar24;
  int iVar25;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f20;
  ulonglong in_f21;
  double dVar31;
  ulonglong in_f22;
  double dVar32;
  double dVar33;
  ulonglong in_f23;
  ulonglong in_f24;
  double dVar34;
  ulonglong in_f25;
  double dVar35;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar36;
  ulonglong in_f28;
  double dVar37;
  ulonglong in_f29;
  double dVar38;
  ulonglong in_f30;
  double dVar39;
  ulonglong in_f31;
  double dVar40;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar1 = uVar11 - 0x390;
  puVar5 = (ulonglong *)lVar1;
  *puVar5 = uVar11;
  puVar5[0x74] = in_LR;
  puVar5[0x66] = in_f20;
  puVar5[0x67] = in_f21;
  puVar5[0x68] = in_f22;
  puVar5[0x69] = in_f23;
  puVar5[0x6a] = in_f24;
  puVar5[0x6b] = in_f25;
  puVar5[0x6c] = in_f26;
  puVar5[0x6d] = in_f27;
  puVar5[0x6e] = in_f28;
  puVar5[0x6f] = in_f29;
  puVar5[0x70] = in_f30;
  puVar5[0x71] = in_f31;
  puVar5[100] = unaff_r30;
  puVar5[0x65] = unaff_r31;
  puVar5[0x60] = unaff_r26;
  piVar4 = *(int **)(param_1 + 0x78);
  puVar5[0x5f] = unaff_r25;
  lVar22 = uVar11 - 800;
  pCVar10 = Cuboids + *piVar4;
  puVar5[99] = unaff_r29;
  puVar5[0x62] = unaff_r28;
  puVar5[0x61] = unaff_r27;
  puVar5[0x5e] = unaff_r24;
  puVar5[0x5d] = unaff_r23;
  puVar5[0x5c] = unaff_r22;
  puVar5[0x5b] = unaff_r21;
  puVar5[0x5a] = unaff_r20;
  puVar5[0x59] = unaff_r19;
  puVar5[0x58] = unaff_r18;
  puVar5[0x57] = unaff_r17;
  puVar5[0x56] = unaff_r16;
  puVar5[0x55] = unaff_r15;
  fastfunc::FastEulerToMtx1(lVar22,&pCVar10->rot);
  fastfunc::FastNormalizeRMtx4(uVar11 - 0x2e0,lVar22);
  pCVar10 = Cuboids;
  iVar25 = *piVar4;
  *(float *)(puVar5 + 0x14) = Cuboids[iVar25].pos.x;
  *(float *)((int)puVar5 + 0xa4) = pCVar10[iVar25].pos.y;
  *(float *)(puVar5 + 0x15) = pCVar10[iVar25].pos.z;
  *(float *)((int)puVar5 + 0xac) = pCVar10[iVar25].pos.w;
  fVar6 = GameCamera.posY - pCVar10[iVar25].pos.y;
  fVar7 = GameCamera.posX - pCVar10[iVar25].pos.x;
  fVar8 = GameCamera.posZ - pCVar10[iVar25].pos.z;
  dVar40 = (double)(*(float *)(puVar5 + 0x1a) * fVar8 +
                   *(float *)(puVar5 + 0x16) * fVar7 + *(float *)(puVar5 + 0x18) * fVar6);
  dVar39 = (double)(*(float *)((int)puVar5 + 0xd4) * fVar8 +
                   *(float *)((int)puVar5 + 0xb4) * fVar7 + *(float *)((int)puVar5 + 0xc4) * fVar6);
  dVar38 = (double)(*(float *)(puVar5 + 0x1b) * fVar8 +
                   *(float *)(puVar5 + 0x17) * fVar7 + *(float *)(puVar5 + 0x19) * fVar6);
  uVar12 = draw::GetEffectTex(DAT_00766a40);
  puVar5[0x51] = uVar12;
  puVar5[0x3f] = uVar12;
  puVar5[0x2d] = uVar12;
  uVar12 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar5[0x52] = uVar12;
  puVar5[0x40] = uVar12;
  puVar5[0x2e] = uVar12;
  uVar12 = FUN_00502f08(0,0,0,0,0,0);
  puVar5[0x50] = uVar12;
  puVar5[0x3e] = uVar12;
  puVar5[0x2c] = uVar12;
  uVar12 = idol_draw::PackCmd(DAT_00f08e50,DAT_00766a44,DAT_00f08e54,DAT_00766a48,0x80);
  puVar5[0x53] = uVar12;
  puVar5[0x41] = uVar12;
  puVar5[0x2f] = uVar12;
  lVar26 = 4;
  puVar16 = &DAT_00766a5c;
  lVar13 = lVar1;
  lVar14 = lVar1;
  do {
    uVar3 = *puVar16;
    iVar25 = piVar4[5];
    puVar16 = puVar16 + 2;
    iVar18 = (int)lVar13;
    *(undefined4 *)(iVar18 + 0x264) = uVar3;
    *(undefined4 *)(iVar18 + 0x1d4) = uVar3;
    *(undefined4 *)(iVar18 + 0x144) = uVar3;
    iVar18 = (int)lVar14;
    *(int *)(iVar18 + 0x250) = iVar25;
    *(int *)(iVar18 + 0x1c0) = iVar25;
    lVar13 = lVar13 + 8;
    *(int *)(iVar18 + 0x130) = iVar25;
    lVar14 = lVar14 + 4;
    lVar26 = lVar26 + -1;
  } while (lVar26 != 0);
  dVar35 = 0.0;
  uVar24 = 0;
  iVar25 = 0;
  dVar32 = dVar35;
  dVar33 = dVar35;
  dVar31 = dVar35;
  piVar23 = piVar4;
  do {
    dVar27 = dVar31;
    dVar28 = dVar31;
    dVar30 = dVar31;
    if ((int)uVar24 < 0x1e) {
      fVar7 = ((float)piVar23[10] - (float)piVar23[0x12]) *
              (float)((double)(float)piVar23[0xc] - dVar40) -
              ((float)piVar23[8] - (float)piVar23[0x10]) *
              (float)((double)(float)piVar23[0xe] - dVar38);
      fVar8 = ((float)piVar23[9] - (float)piVar23[0x11]) *
              (float)((double)(float)piVar23[0xe] - dVar38) -
              ((float)piVar23[10] - (float)piVar23[0x12]) *
              (float)((double)(float)piVar23[0xd] - dVar39);
      fVar6 = ((float)piVar23[8] - (float)piVar23[0x10]) *
              (float)((double)(float)piVar23[0xd] - dVar39) -
              ((float)piVar23[9] - (float)piVar23[0x11]) *
              (float)((double)(float)piVar23[0xc] - dVar40);
      dVar29 = (double)SQRT(fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7);
      if (dVar29 != dVar31) {
        fVar2 = (float)(0.10000000149011612 / dVar29);
        dVar27 = (double)(fVar8 * fVar2);
        dVar28 = (double)(fVar7 * fVar2);
        dVar30 = (double)(fVar6 * fVar2);
      }
    }
    dVar34 = 0.25;
    pfVar20 = (float *)((int)piVar4 + iVar25 + 0x20);
    pfVar19 = (float *)((int)piVar4 + iVar25 + 0x30);
    uVar21 = 0;
    lVar13 = uVar11 - 0x2a0;
    lVar14 = lVar1;
    dVar29 = dVar33;
    dVar36 = dVar32;
    dVar37 = dVar35;
    pfVar17 = (float *)&DAT_00766a58;
    do {
      dVar33 = dVar30;
      dVar32 = dVar28;
      dVar35 = dVar27;
      pfVar9 = (float *)lVar13;
      if ((int)uVar21 < 2) {
        dVar27 = (double)*pfVar20;
        *pfVar9 = *pfVar20;
        dVar28 = (double)pfVar20[1];
        pfVar9[1] = pfVar20[1];
        dVar30 = (double)pfVar20[2];
        pfVar9[2] = pfVar20[2];
        if ((uVar21 & 1) == 0) {
          pfVar9[3] = pfVar20[3];
          *pfVar9 = (float)(dVar27 - dVar37);
          pfVar9[1] = (float)(dVar28 - dVar36);
          pfVar9[2] = (float)(dVar30 - dVar29);
        }
        else {
          pfVar9[3] = pfVar20[3];
          *pfVar9 = (float)(dVar27 + dVar37);
          pfVar9[1] = (float)(dVar28 + dVar36);
          pfVar9[2] = (float)(dVar30 + dVar29);
        }
      }
      else {
        dVar27 = (double)*pfVar19;
        *pfVar9 = *pfVar19;
        dVar28 = (double)pfVar19[1];
        pfVar9[1] = pfVar19[1];
        dVar30 = (double)pfVar19[2];
        pfVar9[2] = pfVar19[2];
        if ((uVar21 & 1) == 0) {
          pfVar9[3] = pfVar19[3];
          *pfVar9 = (float)(dVar27 - dVar35);
          pfVar9[1] = (float)(dVar28 - dVar32);
          pfVar9[2] = (float)(dVar30 - dVar33);
        }
        else {
          pfVar9[3] = pfVar19[3];
          *pfVar9 = (float)(dVar27 + dVar35);
          pfVar9[1] = (float)(dVar28 + dVar32);
          pfVar9[2] = (float)(dVar30 + dVar33);
        }
      }
      dVar28 = (double)*pfVar17;
      dVar27 = (double)fastfunc::FastIntToDouble
                                 (uVar24 + (((int)uVar24 >> 2) +
                                           (uint)((int)uVar24 < 0 && (uVar24 & 3) != 0)) * -4);
      uVar21 = uVar21 + 1;
      lVar13 = lVar13 + 0x10;
      pfVar17 = pfVar17 + 2;
      *(float *)((int)lVar14 + 0x140) = (float)(dVar27 * dVar34 + dVar28);
      lVar14 = lVar14 + 8;
      dVar27 = dVar35;
      dVar28 = dVar32;
      dVar30 = dVar33;
    } while ((int)uVar21 < 4);
    draw::FastDrawQuad(uVar11 - 0x2a0,lVar22,0,EffectTexHeaders,9);
    uVar24 = uVar24 + 1;
    iVar25 = iVar25 + 0x10;
    piVar23 = piVar23 + 4;
  } while ((int)uVar24 < 0x1f);
  iVar25 = 0;
  piVar23 = piVar4;
  do {
    dVar32 = dVar31;
    if (*(byte *)(piVar23 + 6) < 0x1f) {
      uVar24 = 0;
      iVar18 = 0;
      dVar33 = dVar31;
      dVar35 = dVar31;
      do {
        dVar27 = dVar32;
        dVar28 = dVar32;
        dVar30 = dVar32;
        if ((int)uVar24 < 2) {
          iVar15 = iVar25 * 0x10;
          pfVar19 = (float *)((int)piVar4 + iVar15 + iVar18 + 0x420);
          pfVar20 = (float *)((int)piVar4 + iVar15 + iVar18 + 0x4a0);
          pfVar17 = (float *)((int)piVar4 + iVar15 + iVar18 + 0x460);
          fVar7 = (pfVar19[2] - pfVar20[2]) * (float)((double)*pfVar17 - dVar40) -
                  (*pfVar19 - *pfVar20) * (float)((double)pfVar17[2] - dVar38);
          fVar8 = (pfVar19[1] - pfVar20[1]) * (float)((double)pfVar17[2] - dVar38) -
                  (pfVar19[2] - pfVar20[2]) * (float)((double)pfVar17[1] - dVar39);
          fVar6 = (*pfVar19 - *pfVar20) * (float)((double)pfVar17[1] - dVar39) -
                  (pfVar19[1] - pfVar20[1]) * (float)((double)*pfVar17 - dVar40);
          dVar29 = (double)SQRT(fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7);
          if (dVar29 != dVar32) {
            fVar2 = (float)(0.10000000149011612 / dVar29);
            dVar27 = (double)(fVar6 * fVar2);
            dVar28 = (double)(fVar7 * fVar2);
            dVar30 = (double)(fVar8 * fVar2);
          }
        }
        dVar29 = dVar31;
        dVar36 = dVar33;
        dVar37 = dVar35;
        if (uVar24 == 0) {
          dVar29 = dVar27;
          dVar36 = dVar28;
          dVar37 = dVar30;
        }
        pfVar20 = (float *)((int)piVar4 + iVar25 * 0x10 + iVar18 + 0x420);
        uVar21 = 0;
        pfVar19 = (float *)((int)piVar4 + iVar25 * 0x10 + iVar18 + 0x460);
        lVar13 = uVar11 - 0x2a0;
        lVar14 = lVar1;
        dVar31 = dVar27;
        dVar33 = dVar28;
        dVar35 = dVar30;
        pfVar17 = (float *)&DAT_00766a58;
        do {
          pfVar9 = (float *)lVar13;
          if ((int)uVar21 < 2) {
            dVar27 = (double)*pfVar20;
            *pfVar9 = *pfVar20;
            dVar28 = (double)pfVar20[1];
            pfVar9[1] = pfVar20[1];
            dVar30 = (double)pfVar20[2];
            pfVar9[2] = pfVar20[2];
            if ((uVar21 & 1) == 0) {
              pfVar9[3] = pfVar20[3];
              *pfVar9 = (float)(dVar27 - dVar37);
              pfVar9[1] = (float)(dVar28 - dVar36);
              pfVar9[2] = (float)(dVar30 - dVar29);
            }
            else {
              pfVar9[3] = pfVar20[3];
              *pfVar9 = (float)(dVar27 + dVar37);
              pfVar9[1] = (float)(dVar28 + dVar36);
              pfVar9[2] = (float)(dVar30 + dVar29);
            }
          }
          else {
            dVar27 = (double)*pfVar19;
            *pfVar9 = *pfVar19;
            dVar28 = (double)pfVar19[1];
            pfVar9[1] = pfVar19[1];
            dVar30 = (double)pfVar19[2];
            pfVar9[2] = pfVar19[2];
            if ((uVar21 & 1) == 0) {
              pfVar9[3] = pfVar19[3];
              *pfVar9 = (float)(dVar27 - dVar35);
              pfVar9[1] = (float)(dVar28 - dVar33);
              pfVar9[2] = (float)(dVar30 - dVar31);
            }
            else {
              pfVar9[3] = pfVar19[3];
              *pfVar9 = (float)(dVar27 + dVar35);
              pfVar9[1] = (float)(dVar28 + dVar33);
              pfVar9[2] = (float)(dVar30 + dVar31);
            }
          }
          dVar28 = (double)*pfVar17;
          dVar27 = (double)fastfunc::FastIntToDouble
                                     (uVar24 + (((int)uVar24 >> 2) +
                                               (uint)((int)uVar24 < 0 && (uVar24 & 3) != 0)) * -4);
          uVar21 = uVar21 + 1;
          lVar13 = lVar13 + 0x10;
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar14 + 0x140) = (float)(dVar27 * dVar34 + dVar28);
          lVar14 = lVar14 + 8;
        } while ((int)uVar21 < 4);
        draw::FastDrawQuad(uVar11 - 0x2a0,lVar22,0,EffectTexHeaders,9);
        uVar24 = uVar24 + 1;
        iVar18 = iVar18 + 0x40;
      } while ((int)uVar24 < 3);
    }
    iVar25 = iVar25 + 1;
    piVar23 = (int *)((int)piVar23 + 1);
    dVar31 = dVar32;
  } while (iVar25 < 4);
  return;
}



//==== 0020e910  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1225_0020e910(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1225_0020e910(void)

{
  DAT_00766b0c = 0x10000;
  return;
}



//==== 0020e950  ns=mobyupdate_helpers  size=0xe0
// sig: undefined M1225_0020e950(void)
// callers(0): 
// callees(3): 0017d488 stub::CALL_STUB_0017d488; 0017d4b8 water::WaterSheet_DrawAll; 00502730 fastfunc::FastIntToDouble

void mobyupdate_helpers::M1225_0020e950(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  
  stub::CALL_STUB_0017d488();
  water::WaterSheet_DrawAll(3,(WaterSheet *)&PTR_DAT_00768280);
  dVar5 = (double)fastfunc::FastIntToDouble(worldUpdateTime & 0x3f);
  fVar1 = (float)(dVar5 - 32.0) * 0.09817477;
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
  DAT_007682dc = (fVar1 * fVar4 * 2.601887e-06 +
                 fVar4 * -0.0001980741 + fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3)
                 * 0.5 + 0.5;
  DAT_0076833c = DAT_007682dc;
  DAT_0076839c = DAT_007682dc;
  return;
}



//==== 0020ea30  ns=mobyupdate_unsorted  size=0x3c
// sig: undefined UpdateMoby_1225(MobyInstance * moby)
// callers(0): 
// callees(1): 0006d720 RegisterFuncForMoby

/* Moby 1225 */

void mobyupdate_unsorted::UpdateMoby_1225(MobyInstance *moby)

{
  moby->drawDistance = 0xff;
  moby->updateDistance = -1;
  RegisterFuncForMoby(&PTR_M1225_0020e950_00709540,moby);
  return;
}



//==== 0020ea6c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1226_0020ea6c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1226_0020ea6c(void)

{
  DAT_007683ec = 0x10000;
  return;
}



//==== 0020ea80  ns=mobyupdate_helpers  size=0x150
// sig: undefined M1226_0020ea80(void)
// callers(1): 0020fda8 mobyupdate_unsorted::UpdateMoby_1226
// callees(1): 0021416c FUN_0021416c

undefined8 mobyupdate_helpers::M1226_0020ea80(int param_1)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  undefined8 uVar9;
  int iVar10;
  ushort *puVar11;
  MobyInstance *pMVar12;
  
  iVar10 = *(int *)(*(int *)(param_1 + 0x78) + 0x128);
  if (iVar10 == -1) {
    uVar9 = 0;
  }
  else {
    pMVar12 = MobyInstance + iVar10;
    iVar10 = FUN_0021416c(pMVar12);
    if (iVar10 == 0) {
      if (*(byte *)(param_1 + 0x21) == 0xff) {
        uVar9 = 1;
      }
      else {
        fVar1 = (pMVar12->pos).y;
        fVar4 = *(float *)(param_1 + 0x14) - fVar1;
        fVar2 = (pMVar12->pos).x;
        fVar6 = *(float *)(param_1 + 0x10) - fVar2;
        puVar11 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)];
        if (puVar11 == (ushort *)0x0) {
          uVar9 = 1;
        }
        else {
          do {
            uVar8 = *puVar11 & 0x7fff;
            if (MobyInstance[uVar8].state == '\x06') {
              return 0;
            }
            if ((MobyInstance[uVar8].setByGroup == '\x01') &&
               (fVar5 = MobyInstance[uVar8].pos.y - fVar1, fVar7 = MobyInstance[uVar8].pos.x - fVar2
               , SQRT(fVar7 * fVar7 + fVar5 * fVar5) < SQRT(fVar6 * fVar6 + fVar4 * fVar4))) {
              return 0;
            }
            uVar3 = *puVar11;
            puVar11 = puVar11 + 1;
          } while (-1 < (short)uVar3);
          uVar9 = 1;
        }
      }
    }
    else {
      uVar9 = 0;
    }
  }
  return uVar9;
}



//==== 0020ebd8  ns=mobyupdate_helpers  size=0x15c
// sig: undefined M1226_0020ebd8(void)
// callers(2): 0020f330 mobyupdate_helpers::M1226_0020f330; 0020fda8 mobyupdate_unsorted::UpdateMoby_1226
// callees(2): 00213dd8 mobyupdate_helpers::M1230_00213dd8; 0021416c FUN_0021416c

void mobyupdate_helpers::M1226_0020ebd8(int param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  ushort *puVar5;
  undefined8 in_LR;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  uVar2 = *(uint *)(param_1 + 0x78);
  if (*(int *)(uVar2 + 0x128) != -1) {
    iVar4 = FUN_0021416c(MobyInstance + *(int *)(uVar2 + 0x128));
    if (iVar4 != 0) {
      M1230_00213dd8(MobyInstance + *(int *)(uVar2 + 0x128),600);
    }
  }
  if (*(byte *)(param_1 + 0x21) == 0xff) {
    auVar6 = ZEXT416(0xffffffff);
    auVar6 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
    auVar7 = vectorShiftLeftIntegerWord(auVar6,auVar6);
    auVar6 = loadVectorLeftIndexed(in_LR,0x20ebd0);
    auVar8 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar6 = vectorMultiplyAddFloatingPoint
                       (auVar8,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar7);
    auVar6 = vectorConvertToSignedFixedPointWordSaturate(auVar6,0);
    auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar3 = storeVectorElementWordIndexed
                      (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,0x158,
                       (ulonglong)uVar2);
    *(undefined4 *)(uVar2 + 0x158 & 0xfffffffc) = uVar3;
  }
  else {
    puVar5 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)];
    if (puVar5 != (ushort *)0x0) {
      auVar6 = loadVectorLeftIndexed(in_LR,0x20ebd0);
      auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
      do {
        if (MobyInstance[*puVar5 & 0x7fff].state < 0x80) {
          auVar7 = ZEXT416(0xffffffff);
          auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
          auVar8 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar7 = vectorShiftLeftIntegerWord(auVar7,auVar7);
          auVar7 = vectorMultiplyAddFloatingPoint
                             (auVar8,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,
                              auVar7);
          auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
          auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar3 = storeVectorElementWordIndexed
                            (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,0x158,
                             ZEXT48(MobyInstance[*puVar5 & 0x7fff].pVar));
          *(undefined4 *)((int)MobyInstance[*puVar5 & 0x7fff].pVar + 0x158U & 0xfffffffc) = uVar3;
        }
        uVar1 = *puVar5;
        puVar5 = puVar5 + 1;
      } while (-1 < (short)uVar1);
    }
  }
  return;
}



//==== 0020ed70  ns=mobyupdate_helpers  size=0x59c
// sig: undefined M1226_0020ed70(void)
// callers(1): 0020fda8 mobyupdate_unsorted::UpdateMoby_1226
// callees(4): 001009b0 mobyutil::MB_MoveAndCollide; 00109af0 mobyutil::Delt; 0010a2e0 mobyutil::OrganicDeltAng; 005026a0 fastfunc::FastSubRots

bool mobyupdate_helpers::M1226_0020ed70
               (double param_1,int param_2,undefined8 param_3,float *param_4)

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
  float fVar11;
  float fVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar18;
  longlong lVar17;
  ulonglong uVar19;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong in_f29;
  double dVar24;
  ulonglong in_f30;
  double dVar25;
  ulonglong in_f31;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x110;
  puVar7 = (ulonglong *)lVar15;
  *puVar7 = uVar13;
  puVar7[0x24] = in_LR;
  puVar7[0x1f] = in_f29;
  puVar7[0x20] = in_f30;
  puVar7[0x21] = in_f31;
  puVar7[0x1e] = unaff_r31;
  fVar1 = *param_4;
  puVar7[0x1d] = unaff_r30;
  fVar2 = param_4[1];
  fVar3 = *(float *)(param_2 + 0x14);
  fVar1 = fVar1 - *(float *)(param_2 + 0x10);
  puVar7[0x1b] = unaff_r28;
  fVar2 = fVar2 - fVar3;
  fVar4 = ABS(fVar1);
  fVar3 = ABS(fVar2);
  *(float *)((int)puVar7 + 0x8c) = fVar1;
  puVar7[0x1c] = unaff_r29;
  *(float *)(puVar7 + 0x12) = fVar2;
  iVar6 = *(int *)(param_2 + 0x78);
  *(float *)((int)puVar7 + 0x94) = fVar4 - fVar3;
  dVar24 = 0.0;
  uVar19 = (ulonglong)(*(uint *)((int)puVar7 + 0x8c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x94) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar7 + 0x12) >> 0x1d) & 4;
  fVar1 = ABS(*(float *)((int)puVar7 + 0x8c));
  if (*(float *)((int)puVar7 + 0x94) - 0.0 < 0.0) {
    fVar1 = fVar3;
  }
  fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
  fVar2 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
  fVar5 = ABS(*(float *)(puVar7 + 0x12));
  if (*(float *)((int)puVar7 + 0x94) - 0.0 < 0.0) {
    fVar5 = fVar4;
  }
  dVar25 = 0.7853981852531433;
  dVar21 = dVar24;
  if (0.0 < fVar1) {
    lVar14 = uVar13 - 0x100;
    lVar17 = uVar13 - 0x48;
    lVar16 = uVar13 - 0x58;
    lVar20 = 2;
    fVar1 = (fVar5 - fVar1) / (fVar5 + fVar1);
    fVar4 = fVar1 * fVar1;
    *(float *)((int)puVar7 + 0xc4) = fVar1;
    *(float *)((int)puVar7 + 0xbc) = fVar1;
    *(float *)(puVar7 + 0x18) = fVar1;
    *(float *)(puVar7 + 0x17) = fVar1;
    fVar1 = fVar4 * fVar4;
    *(float *)((int)puVar7 + 0xbc) = *(float *)((int)puVar7 + 0xbc) * fVar4;
    *(float *)(puVar7 + 0x18) = *(float *)(puVar7 + 0x18) * fVar1;
    *(float *)((int)puVar7 + 0xc4) = *(float *)((int)puVar7 + 0xc4) * fVar1 * fVar4;
    do {
      *(float *)((int)lVar14 + 0xb8) = *(float *)((int)lVar14 + 0xa8) * fVar1 * fVar1;
      iVar8 = (int)lVar16;
      lVar16 = lVar16 + 8;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar8 + 4) * fVar1 * fVar1;
      lVar17 = lVar17 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar20 = 4;
    lVar17 = uVar13 - 0x58;
    pfVar18 = (float *)&DAT_007358e0;
    lVar14 = lVar15;
    lVar16 = lVar17;
    do {
      fVar1 = *pfVar18;
      fVar4 = pfVar18[1];
      pfVar18 = pfVar18 + 2;
      *(float *)((int)lVar14 + 0xb8) = *(float *)((int)lVar14 + 0xb8) * fVar1;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
      lVar16 = lVar16 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar16 = 2;
    lVar14 = lVar15;
    do {
      iVar8 = (int)lVar14;
      iVar9 = (int)lVar17;
      lVar14 = lVar14 + 0x10;
      lVar17 = lVar17 + 0x10;
      dVar21 = (double)((float)(dVar21 + (double)*(float *)(iVar8 + 0xb8)) + *(float *)(iVar9 + 4) +
                        *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar21 = (double)((float)(dVar21 + 0.7853981852531433) * fVar3 + fVar2);
  }
  mobyutil::OrganicDeltAng
            ((float)dVar21,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
             mobyutil::g_FrameTime * 6.2831855,(float *)(param_2 + 0x48),0x20ed34,
             (float *)(iVar6 + 0x138));
  fVar1 = *param_4 - *(float *)(param_2 + 0x10);
  fVar2 = param_4[1] - *(float *)(param_2 + 0x14);
  dVar22 = ABS((double)fVar1);
  dVar23 = ABS((double)fVar2);
  *(float *)(puVar7 + 0x10) = fVar1;
  *(float *)((int)puVar7 + 0x84) = fVar2;
  fVar1 = *(float *)(param_2 + 0x48);
  *(float *)(puVar7 + 0x11) = (float)(dVar22 - dVar23);
  uVar19 = (ulonglong)(*(uint *)(puVar7 + 0x10) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar7 + 0x11) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x84) >> 0x1d) & 4;
  dVar21 = ABS((double)*(float *)(puVar7 + 0x10));
  if ((double)*(float *)(puVar7 + 0x11) - dVar24 < 0.0) {
    dVar21 = dVar23;
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
  dVar23 = ABS((double)*(float *)((int)puVar7 + 0x84));
  if ((double)*(float *)(puVar7 + 0x11) - dVar24 < 0.0) {
    dVar23 = dVar22;
  }
  fVar3 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
  dVar22 = dVar24;
  if (dVar24 < dVar21) {
    lVar14 = uVar13 - 0x100;
    lVar17 = uVar13 - 0x68;
    lVar16 = uVar13 - 0x78;
    lVar20 = 2;
    fVar4 = (float)(dVar23 - dVar21) / (float)(dVar23 + dVar21);
    fVar5 = fVar4 * fVar4;
    *(float *)((int)puVar7 + 0xa4) = fVar4;
    *(float *)((int)puVar7 + 0x9c) = fVar4;
    *(float *)(puVar7 + 0x14) = fVar4;
    *(float *)(puVar7 + 0x13) = fVar4;
    fVar4 = fVar5 * fVar5;
    *(float *)((int)puVar7 + 0x9c) = *(float *)((int)puVar7 + 0x9c) * fVar5;
    *(float *)(puVar7 + 0x14) = *(float *)(puVar7 + 0x14) * fVar4;
    *(float *)((int)puVar7 + 0xa4) = *(float *)((int)puVar7 + 0xa4) * fVar4 * fVar5;
    do {
      *(float *)((int)lVar14 + 0x98) = *(float *)((int)lVar14 + 0x88) * fVar4 * fVar4;
      iVar8 = (int)lVar16;
      lVar16 = lVar16 + 8;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar8 + 4) * fVar4 * fVar4;
      lVar17 = lVar17 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar20 = 4;
    lVar17 = uVar13 - 0x78;
    pfVar18 = (float *)&DAT_007358e0;
    lVar14 = lVar15;
    lVar16 = lVar17;
    do {
      fVar4 = *pfVar18;
      fVar5 = pfVar18[1];
      pfVar18 = pfVar18 + 2;
      *(float *)((int)lVar14 + 0x98) = *(float *)((int)lVar14 + 0x98) * fVar4;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
      lVar16 = lVar16 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar14 = 2;
    dVar21 = dVar24;
    do {
      iVar8 = (int)lVar15;
      iVar9 = (int)lVar17;
      lVar15 = lVar15 + 0x10;
      lVar17 = lVar17 + 0x10;
      dVar21 = (double)((float)(dVar21 + (double)*(float *)(iVar8 + 0x98)) + *(float *)(iVar9 + 4) +
                        *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    dVar22 = (double)((float)(dVar21 + dVar25) * fVar2 + fVar3);
  }
  dVar21 = (double)fastfunc::FastSubRots(fVar1,(float)dVar22);
  if (dVar25 <= dVar21) {
    mobyutil::Delt((float)dVar24,DAT_0071f418 * 4.0,(float *)(iVar6 + 0x134));
  }
  else {
    mobyutil::Delt((float)param_1,DAT_0071f418 * 4.0,(float *)(iVar6 + 0x134));
  }
  fVar1 = *(float *)(param_2 + 0x48);
  fVar2 = fVar1 + 1.5707963;
  fVar3 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar3 = fVar1;
  }
  fVar4 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar4 = fVar2;
  }
  fVar5 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
    fVar5 = fVar3;
  }
  fVar1 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
    fVar1 = fVar4;
  }
  fVar2 = fVar5 * fVar5;
  fVar3 = fVar1 * fVar1;
  fVar11 = fVar2 * fVar2 * fVar5;
  fVar4 = fVar3 * fVar3 * fVar1;
  fVar12 = fVar2 * fVar11;
  fVar10 = fVar3 * fVar4;
  *(float *)(puVar7 + 0xe) =
       (fVar3 * fVar10 * 2.601887e-06 +
       fVar10 * -0.0001980741 + fVar4 * 0.0083330255 + fVar3 * fVar1 * -0.16666657 + fVar1) *
       *(float *)(iVar6 + 0x134);
  fVar1 = *(float *)(iVar6 + 0x134);
  *(undefined4 *)(puVar7 + 0xf) = 0;
  *(float *)((int)puVar7 + 0x74) =
       (fVar2 * fVar12 * 2.601887e-06 +
       fVar12 * -0.0001980741 + fVar11 * 0.0083330255 + fVar2 * fVar5 * -0.16666657 + fVar5) * fVar1
  ;
  mobyutil::MB_MoveAndCollide(0x3fe0000000000000,0x3fe0000000000000,dVar24,param_2,uVar13 - 0xa0);
  fVar1 = *(float *)(param_2 + 0x14) - param_4[1];
  fVar2 = *(float *)(param_2 + 0x10) - *param_4;
  return SQRT(fVar2 * fVar2 + fVar1 * fVar1) < 0.2;
}



//==== 0020f330  ns=mobyupdate_helpers  size=0xa38
// sig: undefined M1226_0020f330(void)
// callers(1): 0020fda8 mobyupdate_unsorted::UpdateMoby_1226
// callees(13): 00057820 collproc::CollLine; 000fcbe8 mobyutil::MB_randRangeFloat; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00111ba0 mobyutil::MB_getTargetInArea; 0020ebd8 mobyupdate_helpers::M1226_0020ebd8; 00500108 fastfunc::FastDecTimerF32; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M1226_0020f330(MobyInstance *param_1)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  f32 fVar6;
  f32 fVar7;
  float fVar8;
  void *pvVar9;
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
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar23;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f31;
  double dVar28;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x150;
  puVar11 = (ulonglong *)lVar15;
  *puVar11 = uVar13;
  puVar11[0x2c] = in_LR;
  puVar11[0x29] = in_f31;
  puVar11[0x28] = unaff_r31;
  uVar1 = param_1->state;
  puVar11[0x27] = unaff_r30;
  pvVar9 = param_1->pVar;
  uVar23 = ZEXT48(pvVar9);
  puVar11[0x26] = unaff_r29;
  puVar11[0x25] = unaff_r28;
  if (uVar1 == '\0') {
    return;
  }
  param_1->scale = param_1->pClass->gScale * DAT_00768420;
  dVar28 = 0.0;
  *(undefined4 *)((int)puVar11 + 0x84) = 0;
  iVar16 = mobyutil::MB_damage(param_1,0x330000,0);
  iVar17 = mobyutil::MB_HandleDamage
                     (param_1,iVar16,uVar23 + 0x20,0,puVar11 + 0x10,(int)puVar11 + 0x84,0,4);
  if ((*(int *)(puVar11 + 0x10) != 1) && (param_1->state != '\n')) {
    M1226_0020ebd8(param_1);
    fVar8 = *(float *)((int)pvVar9 + 0x20) - *(float *)((int)puVar11 + 0x84);
    *(float *)((int)pvVar9 + 0x20) = fVar8;
    iVar17 = iVar17 + ((uint)((LZCOUNT(0x47 - (uint)*(ushort *)(*(int *)(iVar16 + 0x20) + 0xa6)) <<
                              0x3a) >> 0x3f) & 3U - iVar17);
    if ((double)fVar8 <= dVar28) {
      iVar17 = 1;
    }
    uVar18 = fastfunc::FastDoubleToInt(0x4080000000000000);
    *(undefined4 *)((int)pvVar9 + 0x98) = 0x3f000000;
    fVar2 = DAT_00768424;
    fVar8 = DAT_0071f418;
    *(undefined4 *)((int)pvVar9 + 0x90) = uVar18;
    *(undefined1 *)((int)pvVar9 + 0xad) = 0;
    *(undefined4 *)((int)pvVar9 + 0x94) = 9;
    *(float *)((int)pvVar9 + 0x80) = fVar2 * fVar8;
    fVar8 = mobyutil::g_FrameTime;
    if (iVar17 < 3) {
      if ((-1 < iVar17) && (0 < iVar17)) {
        fVar8 = DAT_00768424 * DAT_0071f418;
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)((int)pvVar9 + 0x80) = fVar8;
        fVar8 = mobyutil::g_FrameTime;
        *(float *)((int)pvVar9 + 0x88) = DAT_00768434 * mobyutil::g_FrameTime;
        fVar2 = DAT_00768430;
        *(undefined4 *)((int)pvVar9 + 0xc0) = 0x41000000;
        *(undefined4 *)((int)pvVar9 + 0xc4) = 0x41800000;
        *(float *)((int)pvVar9 + 0x8c) = fVar2 * fVar8;
        fVar8 = (param_1->pos).x - *(float *)(*(int *)(iVar16 + 0x20) + 0x10);
        fVar2 = (param_1->pos).y - *(float *)(*(int *)(iVar16 + 0x20) + 0x14);
        dVar26 = ABS((double)fVar8);
        dVar27 = ABS((double)fVar2);
        *(float *)((int)puVar11 + 0x9c) = fVar8;
        *(float *)(puVar11 + 0x14) = fVar2;
        *(float *)((int)puVar11 + 0xa4) = (float)(dVar26 - dVar27);
        uVar21 = (ulonglong)(*(uint *)((int)puVar11 + 0x9c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar11 + 0xa4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar11 + 0x14) >> 0x1d) & 4;
        dVar25 = ABS((double)*(float *)((int)puVar11 + 0x9c));
        if ((double)*(float *)((int)puVar11 + 0xa4) - dVar28 < 0.0) {
          dVar25 = dVar27;
        }
        fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
        dVar27 = ABS((double)*(float *)(puVar11 + 0x14));
        if ((double)*(float *)((int)puVar11 + 0xa4) - dVar28 < 0.0) {
          dVar27 = dVar26;
        }
        fVar2 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
        dVar26 = dVar28;
        if (dVar28 < dVar25) {
          lVar14 = uVar13 - 0x140;
          lVar22 = uVar13 - 0x6c;
          lVar19 = uVar13 - 0x7c;
          lVar24 = 2;
          fVar3 = (float)(dVar27 - dVar25) / (float)(dVar27 + dVar25);
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
            *(float *)((int)lVar14 + 0xd4) = *(float *)((int)lVar14 + 0xc4) * fVar3 * fVar3;
            iVar17 = (int)lVar19;
            lVar19 = lVar19 + 8;
            lVar14 = lVar14 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)(iVar17 + 4) * fVar3 * fVar3;
            lVar22 = lVar22 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar24 = 4;
          lVar22 = uVar13 - 0x7c;
          pfVar20 = (float *)&DAT_007358e0;
          lVar14 = lVar15;
          lVar19 = lVar22;
          do {
            fVar3 = *pfVar20;
            fVar4 = pfVar20[1];
            pfVar20 = pfVar20 + 2;
            *(float *)((int)lVar14 + 0xd4) = *(float *)((int)lVar14 + 0xd4) * fVar3;
            lVar14 = lVar14 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar4;
            lVar19 = lVar19 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar19 = 2;
          lVar14 = lVar15;
          dVar25 = dVar28;
          do {
            iVar17 = (int)lVar14;
            iVar12 = (int)lVar22;
            lVar14 = lVar14 + 0x10;
            lVar22 = lVar22 + 0x10;
            dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar17 + 0xd4)) +
                              *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                             *(float *)(iVar12 + 0xc));
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          dVar26 = (double)((float)(dVar25 + 0.7853981852531433) * fVar8 + fVar2);
        }
        *(float *)((int)puVar11 + 0x8c) = (float)dVar26;
        uVar18 = *(undefined4 *)(iVar16 + 0x18);
        *(undefined4 *)(puVar11 + 6) = *(undefined4 *)(iVar16 + 0x10);
        *(undefined4 *)(puVar11 + 7) = uVar18;
        uVar18 = *(undefined4 *)(iVar16 + 0x1c);
        *(undefined4 *)((int)puVar11 + 0x34) = *(undefined4 *)(iVar16 + 0x14);
        *(undefined4 *)((int)puVar11 + 0x3c) = uVar18;
        mobyutil::MB_VecAtan2Angles(puVar11[6],puVar11[7],uVar13 - 0xc4,uVar23 + 0x88,uVar23 + 0x8c)
        ;
        mobyutil::MB_StartKick((double)*(float *)((int)puVar11 + 0x8c),param_1,uVar23 + 0x70);
        param_1->state = '\n';
        param_1->setByGroup = '\x02';
        *(undefined1 *)((int)pvVar9 + 0x67) = 0xf0;
      }
    }
    else if (iVar17 < 0xb) {
      if (iVar17 < 9) {
        *(float *)((int)pvVar9 + 0x88) = DAT_0076842c * mobyutil::g_FrameTime;
        fVar2 = DAT_00768428;
        *(undefined4 *)((int)pvVar9 + 0xc0) = 0x40a00000;
        *(undefined4 *)((int)pvVar9 + 0xc4) = 0x41200000;
        *(float *)((int)pvVar9 + 0x8c) = fVar2 * fVar8;
        fVar8 = (param_1->pos).x - *(float *)(*(int *)(iVar16 + 0x20) + 0x10);
        fVar2 = (param_1->pos).y - *(float *)(*(int *)(iVar16 + 0x20) + 0x14);
        dVar26 = ABS((double)fVar8);
        dVar27 = ABS((double)fVar2);
        *(float *)(puVar11 + 0x15) = fVar8;
        *(float *)((int)puVar11 + 0xac) = fVar2;
        *(float *)(puVar11 + 0x16) = (float)(dVar26 - dVar27);
        uVar21 = (ulonglong)(*(uint *)(puVar11 + 0x15) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar11 + 0x16) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar11 + 0xac) >> 0x1d) & 4;
        dVar25 = ABS((double)*(float *)(puVar11 + 0x15));
        if ((double)*(float *)(puVar11 + 0x16) - dVar28 < 0.0) {
          dVar25 = dVar27;
        }
        fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
        dVar27 = ABS((double)*(float *)((int)puVar11 + 0xac));
        if ((double)*(float *)(puVar11 + 0x16) - dVar28 < 0.0) {
          dVar27 = dVar26;
        }
        fVar2 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
        dVar26 = dVar28;
        if (dVar28 < dVar25) {
          lVar14 = uVar13 - 0x140;
          lVar22 = uVar13 - 0x4c;
          lVar19 = uVar13 - 0x5c;
          lVar24 = 2;
          fVar3 = (float)(dVar27 - dVar25) / (float)(dVar27 + dVar25);
          fVar4 = fVar3 * fVar3;
          *(float *)(puVar11 + 0x20) = fVar3;
          *(float *)(puVar11 + 0x1f) = fVar3;
          *(float *)((int)puVar11 + 0xfc) = fVar3;
          *(float *)((int)puVar11 + 0xf4) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)(puVar11 + 0x1f) = *(float *)(puVar11 + 0x1f) * fVar4;
          *(float *)((int)puVar11 + 0xfc) = *(float *)((int)puVar11 + 0xfc) * fVar3;
          *(float *)(puVar11 + 0x20) = *(float *)(puVar11 + 0x20) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar14 + 0xf4) = *(float *)((int)lVar14 + 0xe4) * fVar3 * fVar3;
            iVar17 = (int)lVar19;
            lVar19 = lVar19 + 8;
            lVar14 = lVar14 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)(iVar17 + 4) * fVar3 * fVar3;
            lVar22 = lVar22 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar24 = 4;
          lVar22 = uVar13 - 0x5c;
          pfVar20 = (float *)&DAT_007358e0;
          lVar14 = lVar15;
          lVar19 = lVar22;
          do {
            fVar3 = *pfVar20;
            fVar4 = pfVar20[1];
            pfVar20 = pfVar20 + 2;
            *(float *)((int)lVar14 + 0xf4) = *(float *)((int)lVar14 + 0xf4) * fVar3;
            lVar14 = lVar14 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar4;
            lVar19 = lVar19 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar19 = 2;
          lVar14 = lVar15;
          dVar25 = dVar28;
          do {
            iVar17 = (int)lVar14;
            iVar12 = (int)lVar22;
            lVar14 = lVar14 + 0x10;
            lVar22 = lVar22 + 0x10;
            dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar17 + 0xf4)) +
                              *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                             *(float *)(iVar12 + 0xc));
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          dVar26 = (double)((float)(dVar25 + 0.7853981852531433) * fVar8 + fVar2);
        }
        *(float *)(puVar11 + 0x11) = (float)dVar26;
        uVar18 = *(undefined4 *)(iVar16 + 0x18);
        *(undefined4 *)(puVar11 + 6) = *(undefined4 *)(iVar16 + 0x10);
        *(undefined4 *)(puVar11 + 7) = uVar18;
        uVar18 = *(undefined4 *)(iVar16 + 0x1c);
        *(undefined4 *)((int)puVar11 + 0x34) = *(undefined4 *)(iVar16 + 0x14);
        *(undefined4 *)((int)puVar11 + 0x3c) = uVar18;
        mobyutil::MB_VecAtan2Angles(puVar11[6],puVar11[7],uVar13 - 200,uVar23 + 0x88,uVar23 + 0x8c);
        mobyutil::MB_StartKick((double)*(float *)(puVar11 + 0x11),param_1,uVar23 + 0x70);
        param_1->state = '\b';
        param_1->setByGroup = '\x02';
        *(undefined1 *)((int)pvVar9 + 0x67) = 0x78;
      }
      else {
        *(undefined1 *)((int)pvVar9 + 0x67) = 0xfa;
      }
    }
    mobyutil::MB_UpdateLightsTransition(param_1,uVar23 + 0x60);
  }
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar23 + 0x60);
  if (*(int *)((int)pvVar9 + 0x38) != 0) {
    dVar25 = (double)mobyutil::MB_randRangeFloat(180.0,240.0);
    iVar16 = fastfunc::FastDoubleToInt((double)(float)(dVar25 * (double)animationSpeed));
    puVar11[0x23] = (longlong)iVar16;
    uVar21 = puVar11[0x23];
    *(undefined4 *)((int)pvVar9 + 0x38) = 0;
    *(float *)((int)pvVar9 + 0x130) = (float)(longlong)uVar21;
  }
  fastfunc::FastDecTimerF32(uVar23 + 0x130);
  pSVar10 = Splines[*(int *)((int)pvVar9 + 0x120)];
  iVar16 = mobyutil::MB_getTargetInArea
                     (0x4060000000000000,param_1,uVar23 + 0xd0,pSVar10,0,0,pSVar10->points,
                      pSVar10->cnt);
  if (iVar16 != 2) {
    fVar8 = *(float *)((int)pvVar9 + 0xd0) - (param_1->pos).x;
    fVar2 = *(float *)((int)pvVar9 + 0xd4) - (param_1->pos).y;
    dVar26 = ABS((double)fVar8);
    dVar27 = ABS((double)fVar2);
    *(float *)(puVar11 + 0x12) = fVar8;
    *(float *)((int)puVar11 + 0x94) = fVar2;
    fVar8 = (param_1->rotation).z;
    *(float *)(puVar11 + 0x13) = (float)(dVar26 - dVar27);
    uVar23 = (ulonglong)(*(uint *)(puVar11 + 0x12) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x13) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0x94) >> 0x1d) & 4;
    dVar25 = ABS((double)*(float *)(puVar11 + 0x12));
    if ((double)*(float *)(puVar11 + 0x13) - dVar28 < 0.0) {
      dVar25 = dVar27;
    }
    fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
    dVar27 = ABS((double)*(float *)((int)puVar11 + 0x94));
    if ((double)*(float *)(puVar11 + 0x13) - dVar28 < 0.0) {
      dVar27 = dVar26;
    }
    fVar3 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
    if (dVar28 < dVar25) {
      lVar14 = uVar13 - 0x140;
      lVar19 = uVar13 - 0x9c;
      lVar22 = uVar13 - 0x8c;
      lVar24 = 2;
      fVar4 = (float)(dVar27 - dVar25) / (float)(dVar27 + dVar25);
      fVar5 = fVar4 * fVar4;
      *(float *)(puVar11 + 0x18) = fVar4;
      *(float *)(puVar11 + 0x17) = fVar4;
      *(float *)((int)puVar11 + 0xbc) = fVar4;
      *(float *)((int)puVar11 + 0xb4) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)(puVar11 + 0x17) = *(float *)(puVar11 + 0x17) * fVar5;
      *(float *)((int)puVar11 + 0xbc) = *(float *)((int)puVar11 + 0xbc) * fVar4;
      *(float *)(puVar11 + 0x18) = *(float *)(puVar11 + 0x18) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar14 + 0xb4) = *(float *)((int)lVar14 + 0xa4) * fVar4 * fVar4;
        iVar16 = (int)lVar19;
        lVar14 = lVar14 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar16 + 4) * fVar4 * fVar4;
        lVar22 = lVar22 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar24 = 4;
      lVar22 = uVar13 - 0x9c;
      pfVar20 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar19 = lVar22;
      do {
        fVar4 = *pfVar20;
        fVar5 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar14 + 0xb4) = *(float *)((int)lVar14 + 0xb4) * fVar4;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
        lVar19 = lVar19 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar14 = 2;
      do {
        iVar16 = (int)lVar15;
        iVar17 = (int)lVar22;
        lVar15 = lVar15 + 0x10;
        lVar22 = lVar22 + 0x10;
        dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar16 + 0xb4)) +
                          *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc)
                         );
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar2 + fVar3);
    }
    dVar28 = (double)fastfunc::FastSubRots(fVar8,(float)dVar28);
    if (dVar28 < 1.5707963705062866) {
      fVar6 = (param_1->pos).y;
      *(f32 *)(puVar11 + 0xe) = (param_1->pos).x;
      fVar7 = (param_1->pos).w;
      *(f32 *)((int)puVar11 + 0x74) = fVar6;
      *(f32 *)((int)puVar11 + 0x7c) = fVar7;
      *(float *)(puVar11 + 0xf) = (param_1->pos).z + 1.0;
      iVar16 = collproc::CollLine(uVar13 - 0xe0,&hero::g_heroCGPos,2,0,0);
      if (iVar16 == 0) {
        if ((*(int *)((int)pvVar9 + 0x158) == 0) &&
           (*(short *)(*(int *)((int)pvVar9 + 0x110) + 0xa6) == 0x27a)) {
          *(undefined4 *)((int)pvVar9 + 0x114) = 2;
          *(undefined4 *)((int)pvVar9 + 0x15c) = 1;
        }
        goto LAB_0020fd28;
      }
    }
    *(undefined4 *)((int)pvVar9 + 0x15c) = 0;
    *(undefined4 *)((int)pvVar9 + 0x114) = 2;
  }
LAB_0020fd28:
  if (*(int *)((int)pvVar9 + 0x110) == 0) {
    *(MobyInstance **)((int)pvVar9 + 0x110) = g_heroMobyPtr;
  }
  return;
}



//==== 0020fda8  ns=mobyupdate_unsorted  size=0xe94
// sig: undefined UpdateMoby_1226(MobyInstance * moby)
// callers(0): 
// callees(17): 000efb38 mobyfunc::DeleteMoby; 000fddc0 mobyutil::MB_SetAnimation; 0010a2e0 mobyutil::OrganicDeltAng; 0010b030 mobyutil::MB_UpdateKick; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 0012d0e8 partupd::SpawnPart_41; 0020ea80 mobyupdate_helpers::M1226_0020ea80; 0020ebd8 mobyupdate_helpers::M1226_0020ebd8; 0020ed70 mobyupdate_helpers::M1226_0020ed70; 0020f330 mobyupdate_helpers::M1226_0020f330; 00213dd8 mobyupdate_helpers::M1230_00213dd8; 0021416c FUN_0021416c; 003a01e0 FUN_003a01e0; 00459ff0 mobyupdate_helpers::M78_00459ff0; 004fff60 fastfunc::FastDecTimerS32; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt

/* Moby 1226 */

void mobyupdate_unsorted::UpdateMoby_1226(MobyInstance *moby)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  f32 fVar6;
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
  MobyModeBit MVar18;
  void *pvVar19;
  undefined4 uVar20;
  ulonglong *puVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  ulonglong uVar28;
  longlong lVar29;
  uint uVar30;
  int iVar31;
  char cVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  float *pfVar36;
  longlong lVar37;
  ulonglong in_r7;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar38;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  
  lVar29 = (longlong)(int)moby;
  uVar28 = ZEXT48(&stack0x00000000);
  lVar33 = uVar28 - 0x120;
  puVar21 = (ulonglong *)lVar33;
  *puVar21 = uVar28;
  puVar21[0x26] = in_LR;
  puVar21[0x20] = in_f28;
  puVar21[0x21] = in_f29;
  puVar21[0x22] = in_f30;
  puVar21[0x23] = in_f31;
  puVar21[0x1f] = unaff_r31;
  puVar21[0x1e] = unaff_r30;
  puVar21[0x1d] = unaff_r29;
  pvVar19 = moby->pVar;
  uVar38 = ZEXT48(pvVar19);
  mobyupdate_helpers::M1226_0020f330();
  bVar5 = moby->state;
  if (bVar5 < 6) {
    if (bVar5 < 3) {
      if (bVar5 == 0) {
        if ((*(int *)((int)pvVar19 + 0x120) == -1) ||
           (Splines[*(int *)((int)pvVar19 + 0x120)]->cnt == 0)) {
          mobyfunc::DeleteMoby(moby);
          return;
        }
        if ((*(int *)((int)pvVar19 + 0x124) != -1) &&
           (Splines[*(int *)((int)pvVar19 + 0x124)]->cnt == 0)) {
          mobyfunc::DeleteMoby(moby);
          return;
        }
        *(undefined4 *)((int)pvVar19 + 0x20) = 0x40400000;
        *(undefined1 *)((int)pvVar19 + 0x28) = 2;
        fVar6 = (moby->pos).x;
        *(undefined2 *)((int)pvVar19 + 0x24) = 3;
        *(f32 *)((int)pvVar19 + 0x160) = fVar6;
        iVar31 = *(int *)((int)pvVar19 + 0x148);
        *(f32 *)((int)pvVar19 + 0x164) = (moby->pos).y;
        *(f32 *)((int)pvVar19 + 0x168) = (moby->pos).z;
        *(f32 *)((int)pvVar19 + 0x16c) = (moby->pos).w;
        MVar18 = moby->modeBits;
        *(f32 *)((int)pvVar19 + 0x16c) = (moby->rotation).z;
        *(undefined4 *)((int)pvVar19 + 0x144) = 1;
        *(uint *)((int)pvVar19 + 0x148) =
             iVar31 + ((uint)((longlong)iVar31 + -5 >> 0x3f) & 5U - iVar31);
        moby->state = '\x01';
        moby->modeBits = MVar18 | CAN_BE_AUTO_TARGETED;
        moby->setByGroup = '\0';
      }
      else if ((*(int *)((int)pvVar19 + 0x114) == 2) && (*(int *)((int)pvVar19 + 0x158) == 0)) {
        if (bVar5 == 1) {
          if (*(int *)((int)pvVar19 + 0x124) == -1) {
            if (((*(int *)((int)pvVar19 + 0x15c) != 0) && (g_heroState == HOLOGUISE_WAVE)) &&
               (*(int *)((int)pvVar19 + 0x150) != -1)) {
              mobyupdate_helpers::M78_00459ff0(MobyInstance + *(int *)((int)pvVar19 + 0x150));
              *(undefined4 *)((int)pvVar19 + 0x150) = 0xffffffff;
            }
          }
          else {
            iVar31 = *(int *)((int)pvVar19 + 0x13c) + 1;
            auVar47 = ZEXT416(0xffffffff);
            auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
            auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
            auVar47 = loadVectorLeftIndexed(0x148,uVar38);
            auVar45 = loadVectorRightIndexed(0x158,uVar38);
            *(int *)((int)pvVar19 + 0x13c) =
                 iVar31 - (iVar31 / Splines[*(int *)((int)pvVar19 + 0x124)]->cnt) *
                          Splines[*(int *)((int)pvVar19 + 0x124)]->cnt;
            auVar46 = loadVectorLeftIndexed(4,0x20fd68);
            auVar45 = vectorConvertFromSignedFixedPointWord(auVar47 | auVar45,0);
            auVar47 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar46 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar47 = vectorAddFloatingPoint
                                (auVar45,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 |
                                         auVar47 << 0x60);
            auVar47 = vectorMultiplyAddFloatingPoint(auVar46,auVar47,auVar48);
            auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
            auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar20 = storeVectorElementWordIndexed
                               (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x14c,
                                uVar38);
            *(undefined4 *)((int)pvVar19 + 0x14cU & 0xfffffffc) = uVar20;
            moby->state = '\x02';
          }
        }
        else if ((bVar5 == 2) && (iVar31 = fastfunc::FastDecTimerS32(uVar38 + 0x14c), iVar31 != 0))
        {
          *(undefined4 *)((int)pvVar19 + 0x144) = 0;
          moby->state = '\x03';
          if (moby->animationId != '\x02') {
            puVar21[0x1a] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar29,2,0,*(undefined4 *)((int)puVar21 + 0xd4));
          }
        }
      }
      else {
        moby->state = '\a';
        moby->setByGroup = '\x01';
        if (moby->animationId != '\x04') {
          puVar21[0x1a] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar29,4,0,*(undefined4 *)((int)puVar21 + 0xd4));
        }
      }
    }
    else if (bVar5 < 4) {
      lVar33 = ZEXT48(Splines[*(int *)((int)pvVar19 + 0x124)]) +
               ((ulonglong)*(uint *)((int)pvVar19 + 0x13c) & 0xfffffff) * 0x10;
      iVar31 = mobyupdate_helpers::M1226_0020ed70
                         ((double)(mobyutil::g_FrameTime * 2.0),lVar29,lVar33,
                          lVar33 + 0x10U & 0xffffffff);
      if (iVar31 == 0) {
        if ((*(int *)((int)pvVar19 + 0x114) != 2) || (*(int *)((int)pvVar19 + 0x158) != 0)) {
          moby->state = '\a';
          moby->setByGroup = '\x01';
          if (moby->animationId != '\x04') {
            puVar21[0x1a] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar29,4,0,*(undefined4 *)((int)puVar21 + 0xd4));
          }
        }
      }
      else {
        moby->state = '\x01';
        *(undefined4 *)((int)pvVar19 + 0x144) = 1;
        if (moby->animationId != '\0') {
          puVar21[0x1a] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar29,0,0,*(undefined4 *)((int)puVar21 + 0xd4));
        }
      }
    }
    else if (bVar5 < 5) {
      fVar49 = (moby->pos).y - *(float *)((int)pvVar19 + 0x164);
      fVar7 = (moby->pos).x - *(float *)((int)pvVar19 + 0x160);
      fVar17 = (moby->pos).z - *(float *)((int)pvVar19 + 0x168);
      if (SQRT(fVar17 * fVar17 + fVar7 * fVar7 + fVar49 * fVar49) <= 0.2) {
        mobyutil::OrganicDeltAng
                  (*(float *)((int)pvVar19 + 0x16c),DAT_0071f418 * 12.566371,
                   DAT_0071f418 * 12.566371,mobyutil::g_FrameTime * 6.2831855,&(moby->rotation).z,
                   0x720000,(float *)((int)pvVar19 + 0x138));
        dVar40 = (double)fastfunc::FastSubRots((moby->rotation).z,*(float *)((int)pvVar19 + 0x16c));
        if ((dVar40 < 0.009999999776482582) && (moby->state = '\x01', moby->animationId != '\0')) {
          puVar21[0x1a] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar29,0,0,*(undefined4 *)((int)puVar21 + 0xd4));
        }
      }
      else {
        mobyupdate_helpers::M1226_0020ed70
                  ((double)(mobyutil::g_FrameTime * 2.0),lVar29,&DAT_0020fd68,uVar38 + 0x160);
      }
    }
    else {
      fastfunc::FastDecTimerS32(uVar38 + 0x158);
      if (*(int *)((int)pvVar19 + 0x114) == 2) {
        if (*(int *)((int)pvVar19 + 0x158) == 0) {
          moby->state = '\x04';
          if (moby->animationId != '\x02') {
            puVar21[0x1a] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar29,2,0,*(undefined4 *)((int)puVar21 + 0xd4));
          }
          if (*(int *)((int)pvVar19 + 0x128) != -1) {
            mobyupdate_helpers::M1230_00213dd8(MobyInstance + *(int *)((int)pvVar19 + 0x128),0x3c);
          }
        }
      }
      else {
        moby->state = '\a';
        if (moby->animationId != '\x04') {
          puVar21[0x1a] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar29,4,0,*(undefined4 *)((int)puVar21 + 0xd4));
        }
      }
    }
  }
  else if (bVar5 < 9) {
    if (bVar5 < 7) {
      lVar33 = ZEXT48(MobyInstance) +
               ((ulonglong)*(uint *)((int)pvVar19 + 0x128) & 0xffffff) * 0x100;
      iVar31 = mobyupdate_helpers::M1226_0020ed70
                         ((double)(mobyutil::g_FrameTime * 4.0),lVar29,lVar33,
                          lVar33 + 0x10U & 0xffffffff);
      if (iVar31 != 0) {
        mobyupdate_helpers::M1230_00213dd8(MobyInstance + *(int *)((int)pvVar19 + 0x128),600);
        moby->state = '\a';
        if (moby->animationId != '\x04') {
          puVar21[0x1a] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar29,4,0,*(undefined4 *)((int)puVar21 + 0xd4));
        }
      }
    }
    else if (bVar5 < 8) {
      fVar49 = *(float *)(*(int *)((int)pvVar19 + 0x110) + 0x10) - (moby->pos).x;
      fVar7 = *(float *)(*(int *)((int)pvVar19 + 0x110) + 0x14) - (moby->pos).y;
      fVar8 = ABS(fVar49);
      fVar17 = ABS(fVar7);
      *(float *)(puVar21 + 0x14) = fVar49;
      *(float *)((int)puVar21 + 0xa4) = fVar7;
      *(float *)(puVar21 + 0x15) = fVar8 - fVar17;
      dVar40 = 0.0;
      in_r7 = (ulonglong)*(uint *)(puVar21 + 0x15);
      uVar38 = (ulonglong)(*(uint *)(puVar21 + 0x14) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar21 + 0x15) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar21 + 0xa4) >> 0x1d) & 4;
      fVar49 = ABS(*(float *)(puVar21 + 0x14));
      if (*(float *)(puVar21 + 0x15) - 0.0 < 0.0) {
        fVar49 = fVar17;
      }
      fVar17 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar38 << 2));
      fVar7 = *(float *)(((uint)(uVar38 << 2) | 0x735900) + 4);
      fVar9 = ABS(*(float *)((int)puVar21 + 0xa4));
      if (*(float *)(puVar21 + 0x15) - 0.0 < 0.0) {
        fVar9 = fVar8;
      }
      dVar42 = dVar40;
      if (0.0 < fVar49) {
        lVar34 = uVar28 - 0x110;
        in_r7 = 2;
        lVar35 = uVar28 - 0x74;
        lVar37 = uVar28 - 100;
        lVar39 = 2;
        fVar49 = (fVar9 - fVar49) / (fVar9 + fVar49);
        fVar8 = fVar49 * fVar49;
        *(float *)(puVar21 + 0x17) = fVar49;
        *(float *)(puVar21 + 0x16) = fVar49;
        *(float *)((int)puVar21 + 0xb4) = fVar49;
        *(float *)((int)puVar21 + 0xac) = fVar49;
        fVar49 = fVar8 * fVar8;
        *(float *)(puVar21 + 0x16) = *(float *)(puVar21 + 0x16) * fVar8;
        *(float *)((int)puVar21 + 0xb4) = *(float *)((int)puVar21 + 0xb4) * fVar49;
        *(float *)(puVar21 + 0x17) = *(float *)(puVar21 + 0x17) * fVar49 * fVar8;
        do {
          *(float *)((int)lVar34 + 0xac) = *(float *)((int)lVar34 + 0x9c) * fVar49 * fVar49;
          iVar31 = (int)lVar35;
          lVar34 = lVar34 + 8;
          lVar35 = lVar35 + 8;
          *(float *)((int)lVar37 + 4) = *(float *)(iVar31 + 4) * fVar49 * fVar49;
          lVar37 = lVar37 + 8;
          lVar39 = lVar39 + -1;
        } while (lVar39 != 0);
        lVar39 = 4;
        lVar37 = uVar28 - 0x74;
        pfVar36 = (float *)&DAT_007358e0;
        lVar34 = lVar33;
        lVar35 = lVar37;
        do {
          fVar49 = *pfVar36;
          fVar8 = pfVar36[1];
          pfVar36 = pfVar36 + 2;
          *(float *)((int)lVar34 + 0xac) = *(float *)((int)lVar34 + 0xac) * fVar49;
          lVar34 = lVar34 + 8;
          *(float *)((int)lVar35 + 4) = *(float *)((int)lVar35 + 4) * fVar8;
          lVar35 = lVar35 + 8;
          lVar39 = lVar39 + -1;
        } while (lVar39 != 0);
        lVar34 = 2;
        do {
          iVar31 = (int)lVar33;
          lVar33 = lVar33 + 0x10;
          iVar22 = (int)lVar37;
          lVar37 = lVar37 + 0x10;
          dVar42 = (double)((float)(dVar42 + (double)*(float *)(iVar31 + 0xac)) +
                            *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) +
                           *(float *)(iVar22 + 0xc));
          lVar34 = lVar34 + -1;
        } while (lVar34 != 0);
        dVar42 = (double)((float)(dVar42 + 0.7853981852531433) * fVar17 + fVar7);
      }
      fVar49 = mobyutil::OrganicDeltAng
                         ((float)dVar42,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                          mobyutil::g_FrameTime * 6.2831855,&(moby->rotation).z,0x20fd68,
                          (float *)((int)pvVar19 + 0x138));
      if (*(int *)((int)pvVar19 + 0x114) == 2) {
        moby->state = '\x05';
        if (moby->animationId != '\0') {
          puVar21[0x1a] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar29,0,0,*(undefined4 *)((int)puVar21 + 0xd4));
        }
      }
      else {
        mobyupdate_helpers::M1226_0020ebd8((double)fVar49,lVar29);
      }
      if ((moby->field43_0x70 & 2U) != 0) {
        if (((*(int *)((int)pvVar19 + 0x128) == -1) ||
            (iVar31 = FUN_0021416c(MobyInstance + *(int *)((int)pvVar19 + 0x128)), iVar31 != 0)) ||
           (iVar31 = mobyupdate_helpers::M1226_0020ea80(lVar29), iVar31 == 0)) {
          fVar27 = DAT_0076844c;
          fVar26 = DAT_00768448;
          fVar25 = DAT_00768444;
          fVar24 = DAT_00768440;
          fVar7 = (moby->transform).v0.y;
          fVar17 = (moby->transform).v0.x;
          fVar8 = (moby->transform).v0.z;
          fVar49 = (moby->transform).v0.w;
          fVar23 = (moby->transform).v1.w * DAT_00768444;
          fVar9 = (moby->transform).v2.w;
          fVar10 = (moby->transform).v1.x;
          fVar11 = (moby->transform).v2.x;
          fVar12 = (moby->transform).v1.y;
          fVar13 = (moby->transform).v2.y;
          fVar14 = (moby->transform).v1.z;
          fVar16 = fVar49 * DAT_00768440;
          fVar15 = (moby->transform).v2.z;
          *(float *)((int)puVar21 + 0x7c) = fVar49;
          dVar44 = (double)SQRT(fVar8 * fVar8 + fVar17 * fVar17 + fVar7 * fVar7);
          *(float *)((int)puVar21 + 0x8c) = fVar9 * fVar26 + fVar16 + fVar23 + fVar27;
          fVar9 = (moby->pos).y;
          fVar16 = (moby->pos).z;
          fVar49 = (float)((double)(DAT_00768438 * mobyutil::g_FrameTime) / dVar44);
          *(float *)(puVar21 + 0x10) =
               fVar11 * fVar26 + fVar17 * fVar24 + fVar10 * fVar25 + (moby->pos).x;
          *(float *)((int)puVar21 + 0x84) =
               fVar13 * fVar26 + fVar7 * fVar24 + fVar12 * fVar25 + fVar9;
          *(float *)(puVar21 + 0x11) = fVar15 * fVar26 + fVar8 * fVar24 + fVar14 * fVar25 + fVar16;
          dVar42 = dVar40;
          if (dVar40 - dVar44 < 0.0) {
            dVar42 = (double)(fVar17 * fVar49);
          }
          dVar41 = dVar40;
          if (dVar40 - dVar44 < 0.0) {
            dVar41 = (double)(fVar7 * fVar49);
          }
          dVar43 = dVar40;
          if (dVar40 - dVar44 < 0.0) {
            dVar43 = (double)(fVar8 * fVar49);
          }
          if (dVar44 - dVar40 < 0.0) {
            dVar42 = (double)(fVar17 * fVar49);
          }
          if (dVar44 - dVar40 < 0.0) {
            dVar41 = (double)(fVar7 * fVar49);
          }
          if (dVar44 - dVar40 < 0.0) {
            dVar43 = (double)(fVar8 * fVar49);
          }
          *(float *)(puVar21 + 0xe) = (float)dVar42;
          *(float *)((int)puVar21 + 0x74) = (float)dVar41;
          *(float *)(puVar21 + 0xf) = (float)dVar43;
          FUN_003a01e0(lVar29,uVar28 - 0xb0,uVar28 - 0xa0);
        }
        else {
          moby->state = '\x06';
          if (moby->animationId != '\x02') {
            puVar21[0x1a] = (longlong)(int)(animationSpeed * 20.5);
            mobyutil::MB_SetAnimation(lVar29,2,0,*(undefined4 *)((int)puVar21 + 0xd4));
          }
        }
      }
    }
    else {
      uVar30 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar19 + 0x70));
      if ((uVar30 & 0x40) != 0) {
        moby->state = '\a';
        moby->setByGroup = '\x01';
        if (moby->animationId != '\x02') {
          puVar21[0x1a] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar29,2,0,*(undefined4 *)((int)puVar21 + 0xd4));
          return;
        }
        return;
      }
      if ((uVar30 & 0x120) != 0) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
  }
  else if ((bVar5 == 10) &&
          (uVar30 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar19 + 0x70)),
          (uVar30 & 0x160) != 0)) {
    mobyutil::MB_SpawnExplosionSparks
              (0x3fe0000000000000,0x402a000000000000,lVar29,lVar29 + 0x10,&DAT_0020fd68,
               0xffffffffffffffff);
    mobyfunc::DeleteMoby(moby);
    return;
  }
  fVar49 = g_heroPosition.y;
  if (g_heroType == '\0') {
    return;
  }
  bVar4 = *(int *)((int)pvVar19 + 0x158) == 0;
  if ((bVar4) || (*(int *)((int)pvVar19 + 0x114) == 2)) {
    if ((DAT_00f08e60 != 2) && ((*(int *)((int)pvVar19 + 0x15c) != 0 || (!bVar4)))) {
      DAT_00f08e60 = 1;
    }
  }
  else {
    DAT_00f08e60 = 2;
  }
  if (DAT_00f08e64 != worldUpdateTime) {
    DAT_00f08e64 = worldUpdateTime;
    *(float *)(puVar21 + 0x12) = g_heroPosition.x;
    fVar7 = g_heroPosition.z;
    *(float *)((int)puVar21 + 0x94) = fVar49;
    fVar49 = g_heroPosition.w;
    *(float *)(puVar21 + 0x13) = fVar7;
    *(float *)((int)puVar21 + 0x9c) = fVar49;
    bVar4 = DAT_00f08e60 < 1;
    bVar1 = DAT_00f08e60 < 0;
    bVar2 = DAT_00f08e60 < 2;
    bVar3 = 2 < DAT_00f08e60;
    *(float *)(puVar21 + 0x13) = fVar7 + 1.5;
    if (bVar4) {
      if (bVar1) {
        DAT_00f08e60 = 0;
        return;
      }
      iVar31 = partupd::SpawnPart_41(0.333,puVar21 + 0x12,moby,0,0x8000ff00,in_r7,0x7f,2,0x44);
    }
    else if (bVar2) {
      iVar31 = partupd::SpawnPart_41(0.333,puVar21 + 0x12,moby,0,0x8000ffff,in_r7,0x7f,2,0x44);
    }
    else {
      if (bVar3) {
        DAT_00f08e60 = 0;
        return;
      }
      iVar31 = partupd::SpawnPart_41(0.333,puVar21 + 0x12,moby,0,0x800000ff,in_r7,0x7f,2,0x44);
    }
    if (iVar31 != 0) {
      cVar32 = fastfunc::FastDoubleToInt(0x3fd99999a0000000);
      *(char *)(iVar31 + 9) = cVar32 + '@';
    }
    DAT_00f08e60 = 0;
    return;
  }
  return;
}



