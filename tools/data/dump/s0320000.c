//==== 00320570  ns=mobyupdate_helpers  size=0x14
// sig: undefined M267_00320570(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M267_00320570(void)

{
  DAT_0080009c = 0x10000;
  return;
}



//==== 00320598  ns=mobyupdate_unsorted  size=0x5b4
// sig: undefined UpdateMoby_27(MobyInstance * moby)
// callers(0): 
// callees(5): 000fcbe8 mobyutil::MB_randRangeFloat; 00121c28 partupd::SpawnPart_6; 00500ca4 fastfunc::FastEulerToMtx1; 00502578 fastfunc::FastWrapRot; 00502910 fastfunc::FastCheckBsphereInView

/* Moby 27 */

void mobyupdate_unsorted::UpdateMoby_27(MobyInstance *moby)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  void *pvVar11;
  uint uVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double in_f30;
  double dVar25;
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
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
  
  pvVar11 = moby->pVar;
  if ((Level != Novalis) ||
     (iVar13 = fastfunc::FastCheckBsphereInView(0x406e000000000000,local_170), iVar13 != -1)) {
    *(MobyInstance **)((int)pvVar11 + 0x7c) = moby;
    if (*(int *)((int)pvVar11 + 200) < 1) {
      iVar13 = 0;
      *(uint *)((int)pvVar11 + 200) = (uint)*(byte *)((int)pvVar11 + 0xc5);
      if (*(char *)((int)pvVar11 + 0xc4) != '\0') {
        dVar23 = 3.1415927410125732;
        dVar24 = 0.0055555556900799274;
        dVar25 = in_f30;
        do {
          dVar19 = (double)(moby->pos).x;
          dVar20 = (double)(moby->pos).y;
          dVar21 = (double)(moby->pos).z;
          dVar22 = (double)(moby->pos).w;
          dVar14 = (double)mobyutil::MB_randRangeFloat
                                     (-*(float *)((int)pvVar11 + 0xcc),
                                      *(float *)((int)pvVar11 + 0xcc));
          dVar15 = (double)mobyutil::MB_randRangeFloat
                                     (-*(float *)((int)pvVar11 + 0xd0),
                                      *(float *)((int)pvVar11 + 0xd4));
          dVar16 = (double)mobyutil::MB_randRangeFloat
                                     (-*(float *)((int)pvVar11 + 0xd4),
                                      *(float *)((int)pvVar11 + 0xd4));
          uVar12 = *(uint *)((int)pvVar11 + 0x70);
          if ((uVar12 & 0x2000) != 0) {
            fastfunc::FastEulerToMtx1(&local_150,(longlong)(int)moby + 0x40);
            dVar4 = (double)local_140 * dVar15;
            dVar5 = (double)local_138 * dVar15;
            dVar6 = (double)local_134 * dVar15;
            dVar1 = (double)local_148 * dVar14;
            dVar2 = (double)local_144 * dVar14;
            dVar3 = (double)local_124 * dVar16;
            uVar12 = *(uint *)((int)pvVar11 + 0x70);
            dVar15 = (double)(float)((double)local_11c * in_f30 +
                                    (double)(float)((double)local_12c * dVar16 +
                                                   (double)(float)((double)local_14c * dVar14 +
                                                                  (double)(float)((double)local_13c
                                                                                 * dVar15))));
            dVar14 = (double)(float)((double)local_120 * in_f30 +
                                    (double)(float)((double)local_130 * dVar16 +
                                                   (double)(float)((double)local_150 * dVar14 +
                                                                  (double)(float)dVar4)));
            dVar16 = (double)(float)((double)local_118 * in_f30 +
                                    (double)(float)((double)local_128 * dVar16 +
                                                   (double)(float)(dVar1 + (double)(float)dVar5)));
            in_f30 = (double)(float)((double)local_114 * in_f30 +
                                    (double)(float)(dVar3 + (double)(float)(dVar2 + (double)(float)
                                                  dVar6)));
          }
          dVar19 = (double)(float)(dVar19 + dVar14);
          dVar14 = (double)(float)(dVar21 + dVar16);
          dVar15 = (double)(float)(dVar20 + dVar15);
          if ((uVar12 & 0x1000) == 0) {
            dVar16 = (double)mobyutil::MB_randRangeFloat
                                       (*(float *)((int)pvVar11 + 0x80),
                                        *(float *)((int)pvVar11 + 0x90));
            dVar21 = (double)(float)(dVar16 * (double)DAT_0071f408);
            dVar16 = (double)mobyutil::MB_randRangeFloat
                                       (*(float *)((int)pvVar11 + 0x84),
                                        *(float *)((int)pvVar11 + 0x94));
            dVar20 = (double)(float)(dVar16 * (double)DAT_0071f408);
            dVar16 = (double)mobyutil::MB_randRangeFloat
                                       (*(float *)((int)pvVar11 + 0x88),
                                        *(float *)((int)pvVar11 + 0x98));
            dVar16 = (double)(float)(dVar16 * (double)DAT_0071f408);
            if ((*(uint *)((int)pvVar11 + 0x70) & 0x4000) != 0) {
              fastfunc::FastEulerToMtx1(&local_d0,(longlong)(int)moby + 0x40);
              dVar5 = (double)local_b8 * dVar20;
              dVar6 = (double)local_b4 * dVar20;
              dVar1 = (double)local_cc * dVar21;
              dVar2 = (double)local_c8 * dVar21;
              dVar3 = (double)local_c4 * dVar21;
              dVar4 = (double)local_a4 * dVar16;
              dVar21 = (double)(float)((double)local_a0 * dVar25 +
                                      (double)(float)((double)local_b0 * dVar16 +
                                                     (double)(float)((double)local_d0 * dVar21 +
                                                                    (double)(float)((double)local_c0
                                                                                   * dVar20))));
              dVar20 = (double)(float)((double)local_9c * dVar25 +
                                      (double)(float)((double)local_ac * dVar16 +
                                                     (double)(float)(dVar1 + (double)(float)((double
                                                  )local_bc * dVar20))));
              dVar16 = (double)(float)((double)local_98 * dVar25 +
                                      (double)(float)((double)local_a8 * dVar16 +
                                                     (double)(float)(dVar2 + (double)(float)dVar5)))
              ;
              dVar25 = (double)(float)((double)local_94 * dVar25 +
                                      (double)(float)(dVar4 + (double)(float)(dVar3 + (double)(float
                                                  )dVar6)));
            }
            uVar17 = mobyutil::MB_randRangeFloat
                               (*(float *)((int)pvVar11 + 0xa8),*(float *)((int)pvVar11 + 0xac));
            uVar18 = mobyutil::MB_randRangeFloat
                               (*(float *)((int)pvVar11 + 0xa0),*(float *)((int)pvVar11 + 0xa4));
            partupd::SpawnPart_6
                      (dVar21,dVar20,dVar16,uVar17,uVar18,(double)*(float *)((int)pvVar11 + 0xb0),
                       (double)*(float *)((int)pvVar11 + 0xb4),
                       (double)*(float *)((int)pvVar11 + 0xb8),
                       (double)*(float *)((int)pvVar11 + 0xbc),pvVar11,0xff,
                       CONCAT44((float)dVar19,(float)dVar15),CONCAT44((float)dVar14,(float)dVar22));
          }
          else {
            dVar16 = (double)mobyutil::MB_randRangeFloat
                                       (-*(float *)((int)pvVar11 + 0x90),
                                        *(float *)((int)pvVar11 + 0x90));
            dVar16 = (double)(float)(dVar16 * dVar23) * dVar24;
            mobyutil::MB_randRangeFloat
                      (-*(float *)((int)pvVar11 + 0x94),*(float *)((int)pvVar11 + 0x94));
            mobyutil::MB_randRangeFloat
                      (-*(float *)((int)pvVar11 + 0x98),*(float *)((int)pvVar11 + 0x98));
            if ((*(uint *)((int)pvVar11 + 0x70) & 0x4000) != 0) {
              dVar16 = (double)fastfunc::FastWrapRot((float)dVar16,(moby->rotation).x);
              fastfunc::FastWrapRot((float)dVar16,(moby->rotation).y);
              fastfunc::FastWrapRot((float)dVar16,(moby->rotation).z);
            }
            fastfunc::FastEulerToMtx1(&local_110,local_160);
            fVar7 = *(float *)((int)pvVar11 + 0x84);
            fVar8 = *(float *)((int)pvVar11 + 0x80);
            fVar9 = *(float *)((int)pvVar11 + 0x88);
            fVar10 = *(float *)((int)pvVar11 + 0x8c);
            dVar21 = (double)(local_e0 * fVar10 +
                             local_f0 * fVar9 + local_110 * fVar8 + local_100 * fVar7);
            dVar20 = (double)(local_dc * fVar10 +
                             local_ec * fVar9 + local_10c * fVar8 + local_fc * fVar7);
            dVar16 = (double)(local_d8 * fVar10 +
                             local_e8 * fVar9 + local_108 * fVar8 + local_f8 * fVar7);
            uVar17 = mobyutil::MB_randRangeFloat
                               (*(float *)((int)pvVar11 + 0xa8),*(float *)((int)pvVar11 + 0xac));
            uVar18 = mobyutil::MB_randRangeFloat
                               (*(float *)((int)pvVar11 + 0xa0),*(float *)((int)pvVar11 + 0xa4));
            partupd::SpawnPart_6
                      (dVar21,dVar20,dVar16,uVar17,uVar18,(double)*(float *)((int)pvVar11 + 0xb0),
                       (double)*(float *)((int)pvVar11 + 0xb4),
                       (double)*(float *)((int)pvVar11 + 0xb8),
                       (double)*(float *)((int)pvVar11 + 0xbc),pvVar11,0xff,
                       CONCAT44((float)dVar19,(float)dVar15),CONCAT44((float)dVar14,(float)dVar22));
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < (int)(uint)*(byte *)((int)pvVar11 + 0xc4));
      }
    }
    else {
      *(int *)((int)pvVar11 + 200) = *(int *)((int)pvVar11 + 200) + -1;
    }
  }
  return;
}



//==== 00320b50  ns=mobyupdate_helpers  size=0x60
// sig: undefined M270_00320b50(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M270_00320b50(int param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x84) = 4;
    *(undefined4 *)(param_1 + 0x88) = 3;
    *(undefined4 *)(param_1 + 0x8c) = 0x3f200000;
    *(undefined4 *)(param_1 + 0x7c) = 0x3d4ccccd;
    *(undefined4 *)(param_1 + 0x80) = 0x3f5ced91;
    *(undefined2 *)(param_1 + 0x9c) = 0xffff;
    *(undefined2 *)(param_1 + 0x9e) = 0xffff;
    *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  }
  return;
}



//==== 00320bf8  ns=mobyupd::update270  size=0xaac
// sig: undefined SpawnMoby_270_Chicken(void)
// callers(1): 002c7328 mobyupdate_unsorted::UpdateMoby_185
// callees(13): 000efa28 mobyfunc::CreateMoby; 000efb38 mobyfunc::DeleteMoby; 000f1ec8 mobyfunc::SetColorOfMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fe484 mobyutil::MB_randRange; 000ffb70 mobyutil::GetGroundZ; 00121a40 partupd::SpawnPart_5; 0015d12c sound::PlayMobySound; 005001fc fastfunc::FastMemSet; 00502730 fastfunc::FastIntToDouble

longlong mobyupd::update270::SpawnMoby_270_Chicken(MobyInstance *param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  f32 fVar4;
  f32 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  MobyModeBit MVar10;
  void *pvVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong *puVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  bool bVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  undefined2 uVar27;
  int iVar26;
  ulonglong uVar28;
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
  double dVar37;
  double dVar38;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar39;
  MobyInstance *pMoby;
  
  uVar22 = ZEXT48(&stack0x00000000);
  lVar25 = uVar22 - 0x140;
  puVar15 = (ulonglong *)lVar25;
  *puVar15 = uVar22;
  puVar15[0x2a] = in_LR;
  puVar15[0x26] = in_f30;
  puVar15[0x27] = in_f31;
  puVar15[0x25] = unaff_r31;
  puVar15[0x24] = unaff_r30;
  puVar15[0x23] = unaff_r29;
  puVar15[0x22] = unaff_r28;
  puVar15[0x21] = unaff_r27;
  puVar15[0x20] = unaff_r26;
  pMoby = mobyfunc::CreateMoby(MORPH_O_RAY_CHICKEN);
  lVar23 = (longlong)(int)pMoby;
  if (pMoby == (MobyInstance *)0x0) {
    return lVar23;
  }
  MVar10 = param_1->modeBits;
  pvVar11 = pMoby->pVar;
  pMoby->updateDistance = '\x7f';
  pMoby->drawDistance = 0x7f;
  pMoby->enabled = '\x01';
  if ((MVar10 & HAS_SPECIAL_VARS) == NONE) {
    uVar12 = param_1->light;
    pMoby->color = param_1->color;
    pMoby->light = uVar12;
  }
  else {
    iVar26 = *(int *)((int)param_1->pVar + 0xc);
    if (iVar26 == 0) {
      uVar12 = param_1->light;
      pMoby->color = param_1->color;
      pMoby->light = uVar12;
    }
    else {
      mobyfunc::SetColorOfMoby
                (pMoby,(ulonglong)*(byte *)(iVar26 + 4),(ulonglong)*(byte *)(iVar26 + 5),
                 (ulonglong)*(byte *)(iVar26 + 6));
    }
  }
  dVar33 = (double)mobyutil::MB_randRangeFloat(0.85,1.15);
  fVar2 = (param_1->pos).x;
  pMoby->unk58 = (float)dVar33;
  fVar3 = (param_1->pos).y;
  (pMoby->pos).x = fVar2;
  fVar4 = (param_1->pos).z;
  (pMoby->pos).y = fVar3;
  fVar5 = (param_1->pos).w;
  (pMoby->pos).z = fVar4;
  (pMoby->pos).w = fVar5;
  dVar33 = 0.0;
  (pMoby->rotation).w = 0.0;
  (pMoby->rotation).z = 0.0;
  (pMoby->rotation).y = 0.0;
  (pMoby->rotation).x = 0.0;
  fVar2 = fVar2 - g_heroPosition.x;
  fVar3 = fVar3 - g_heroPosition.y;
  fVar6 = ABS(fVar2);
  fVar7 = ABS(fVar3);
  *(float *)((int)puVar15 + 0x84) = fVar2;
  *(float *)(puVar15 + 0x11) = fVar3;
  *(float *)((int)puVar15 + 0x8c) = fVar6 - fVar7;
  dVar39 = 0.7853981852531433;
  uVar28 = (ulonglong)(*(uint *)((int)puVar15 + 0x84) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar15 + 0x8c) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar15 + 0x11) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)((int)puVar15 + 0x84));
  if (*(float *)((int)puVar15 + 0x8c) - 0.0 < 0.0) {
    fVar2 = fVar7;
  }
  fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar28 << 2));
  fVar7 = ABS(*(float *)(puVar15 + 0x11));
  if (*(float *)((int)puVar15 + 0x8c) - 0.0 < 0.0) {
    fVar7 = fVar6;
  }
  fVar6 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
  dVar34 = dVar33;
  if (0.0 < fVar2) {
    lVar24 = uVar22 - 0x130;
    lVar31 = uVar22 - 0x60;
    lVar29 = uVar22 - 0x70;
    lVar32 = 2;
    fVar2 = (fVar7 - fVar2) / (fVar7 + fVar2);
    fVar7 = fVar2 * fVar2;
    *(float *)((int)puVar15 + 0xdc) = fVar2;
    *(float *)((int)puVar15 + 0xd4) = fVar2;
    *(float *)(puVar15 + 0x1b) = fVar2;
    *(float *)(puVar15 + 0x1a) = fVar2;
    fVar2 = fVar7 * fVar7;
    *(float *)((int)puVar15 + 0xd4) = *(float *)((int)puVar15 + 0xd4) * fVar7;
    *(float *)(puVar15 + 0x1b) = *(float *)(puVar15 + 0x1b) * fVar2;
    *(float *)((int)puVar15 + 0xdc) = *(float *)((int)puVar15 + 0xdc) * fVar2 * fVar7;
    do {
      *(float *)((int)lVar24 + 0xd0) = *(float *)((int)lVar24 + 0xc0) * fVar2 * fVar2;
      iVar26 = (int)lVar29;
      lVar29 = lVar29 + 8;
      lVar24 = lVar24 + 8;
      *(float *)((int)lVar31 + 4) = *(float *)(iVar26 + 4) * fVar2 * fVar2;
      lVar31 = lVar31 + 8;
      lVar32 = lVar32 + -1;
    } while (lVar32 != 0);
    lVar32 = 4;
    lVar31 = uVar22 - 0x70;
    pfVar30 = (float *)&DAT_007358e0;
    lVar24 = lVar25;
    lVar29 = lVar31;
    do {
      fVar2 = *pfVar30;
      fVar7 = pfVar30[1];
      pfVar30 = pfVar30 + 2;
      *(float *)((int)lVar24 + 0xd0) = *(float *)((int)lVar24 + 0xd0) * fVar2;
      lVar24 = lVar24 + 8;
      *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar7;
      lVar29 = lVar29 + 8;
      lVar32 = lVar32 + -1;
    } while (lVar32 != 0);
    lVar29 = 2;
    lVar24 = lVar25;
    do {
      iVar26 = (int)lVar24;
      iVar16 = (int)lVar31;
      lVar24 = lVar24 + 0x10;
      lVar31 = lVar31 + 0x10;
      dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar26 + 0xd0)) + *(float *)(iVar16 + 4)
                        + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc));
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
    dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar3 + fVar6);
  }
  (pMoby->rotation).z = (float)dVar34;
  dVar34 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar23 + 0x10,0);
  fVar3 = CollOutput.normal.z;
  fVar2 = CollOutput.ip.z;
  if ((double)(pMoby->pos).z <= dVar34) {
    fVar7 = (pMoby->rotation).z;
    fVar6 = fVar7 + 1.5707963;
    fVar8 = 3.1415925 - fVar7;
    if (fVar7 - (3.1415925 - fVar7) < 0.0) {
      fVar8 = fVar7;
    }
    fVar9 = 3.1415925 - fVar6;
    if (fVar6 - (3.1415925 - fVar6) < 0.0) {
      fVar9 = fVar6;
    }
    fVar17 = -3.1415925 - fVar7;
    if ((-3.1415925 - fVar7) - fVar8 < 0.0) {
      fVar17 = fVar8;
    }
    fVar7 = -3.1415925 - fVar6;
    if ((-3.1415925 - fVar6) - fVar9 < 0.0) {
      fVar7 = fVar9;
    }
    fVar6 = fVar17 * fVar17;
    dVar35 = (double)CollOutput.normal.z;
    fVar8 = fVar7 * fVar7;
    fVar19 = fVar6 * fVar6 * fVar17;
    fVar9 = fVar8 * fVar8 * fVar7;
    fVar20 = fVar6 * fVar19;
    fVar18 = fVar8 * fVar9;
    fVar17 = fVar6 * fVar20 * 2.601887e-06 +
             fVar20 * -0.0001980741 + fVar19 * 0.0083330255 + fVar6 * fVar17 * -0.16666657 + fVar17;
    fVar7 = fVar8 * fVar18 * 2.601887e-06 +
            fVar18 * -0.0001980741 + fVar9 * 0.0083330255 + fVar8 * fVar7 * -0.16666657 + fVar7;
    fVar6 = CollOutput.normal.x * fVar7 + CollOutput.normal.y * fVar17;
    dVar36 = (double)fVar6;
    fVar7 = CollOutput.normal.y * fVar7 - CollOutput.normal.x * fVar17;
    dVar37 = ABS((double)fVar7);
    *(float *)((int)puVar15 + 0x7c) = fVar7;
    fVar7 = SQRT((float)(dVar36 * dVar36 + (double)(float)(dVar35 * dVar35)));
    uVar12 = *(uint *)((int)puVar15 + 0x7c);
    dVar38 = ABS((double)fVar7);
    *(float *)(puVar15 + 0xf) = fVar7;
    *(float *)(puVar15 + 0x10) = (float)(dVar38 - dVar37);
    uVar13 = *(uint *)(puVar15 + 0xf);
    uVar14 = *(uint *)(puVar15 + 0x10);
    (pMoby->pos).z = fVar2;
    uVar28 = (ulonglong)(uVar13 >> 0x1c) & 8 |
             (ulonglong)(uVar14 >> 0x1e) & 2 | (ulonglong)(uVar12 >> 0x1d) & 4;
    fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar28 << 2));
    dVar34 = ABS((double)*(float *)(puVar15 + 0xf));
    if ((double)*(float *)(puVar15 + 0x10) - dVar33 < 0.0) {
      dVar34 = dVar37;
    }
    fVar7 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
    dVar37 = ABS((double)*(float *)((int)puVar15 + 0x7c));
    if ((double)*(float *)(puVar15 + 0x10) - dVar33 < 0.0) {
      dVar37 = dVar38;
    }
    dVar38 = dVar33;
    if (dVar33 < dVar34) {
      lVar24 = uVar22 - 0x130;
      lVar29 = uVar22 - 0x90;
      lVar31 = uVar22 - 0x80;
      lVar32 = 2;
      fVar8 = (float)(dVar37 - dVar34) / (float)(dVar37 + dVar34);
      fVar9 = fVar8 * fVar8;
      *(float *)((int)puVar15 + 0xbc) = fVar8;
      *(float *)((int)puVar15 + 0xb4) = fVar8;
      *(float *)(puVar15 + 0x17) = fVar8;
      *(float *)(puVar15 + 0x16) = fVar8;
      fVar8 = fVar9 * fVar9;
      *(float *)((int)puVar15 + 0xb4) = *(float *)((int)puVar15 + 0xb4) * fVar9;
      *(float *)(puVar15 + 0x17) = *(float *)(puVar15 + 0x17) * fVar8;
      *(float *)((int)puVar15 + 0xbc) = *(float *)((int)puVar15 + 0xbc) * fVar8 * fVar9;
      do {
        *(float *)((int)lVar24 + 0xb0) = *(float *)((int)lVar24 + 0xa0) * fVar8 * fVar8;
        iVar26 = (int)lVar29;
        lVar24 = lVar24 + 8;
        lVar29 = lVar29 + 8;
        *(float *)((int)lVar31 + 4) = *(float *)(iVar26 + 4) * fVar8 * fVar8;
        lVar31 = lVar31 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar32 = 4;
      lVar31 = uVar22 - 0x90;
      pfVar30 = (float *)&DAT_007358e0;
      lVar24 = lVar25;
      lVar29 = lVar31;
      do {
        fVar8 = *pfVar30;
        fVar9 = pfVar30[1];
        pfVar30 = pfVar30 + 2;
        *(float *)((int)lVar24 + 0xb0) = *(float *)((int)lVar24 + 0xb0) * fVar8;
        lVar24 = lVar24 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar9;
        lVar29 = lVar29 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar29 = 2;
      lVar24 = lVar25;
      dVar34 = dVar33;
      do {
        iVar26 = (int)lVar24;
        lVar24 = lVar24 + 0x10;
        iVar16 = (int)lVar31;
        lVar31 = lVar31 + 0x10;
        dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar26 + 0xb0)) +
                          *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc)
                         );
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      dVar38 = (double)((float)(dVar34 + dVar39) * fVar2 + fVar7);
    }
    dVar35 = ABS(dVar35);
    (pMoby->rotation).x = (float)-dVar38;
    *(float *)(puVar15 + 0xe) = fVar6;
    *(float *)((int)puVar15 + 0x74) = (float)(dVar35 - ABS(dVar36));
    uVar28 = (ulonglong)((uint)fVar3 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar15 + 0x74) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar15 + 0xe) >> 0x1d) & 4;
    dVar34 = dVar35;
    if ((double)*(float *)((int)puVar15 + 0x74) - dVar33 < 0.0) {
      dVar34 = ABS(dVar36);
    }
    dVar36 = ABS((double)*(float *)(puVar15 + 0xe));
    if ((double)*(float *)((int)puVar15 + 0x74) - dVar33 < 0.0) {
      dVar36 = dVar35;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar28 << 2));
    fVar2 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
    dVar35 = dVar33;
    if (dVar33 < dVar34) {
      lVar24 = uVar22 - 0x130;
      lVar31 = uVar22 - 0xa0;
      lVar29 = uVar22 - 0xb0;
      lVar32 = 2;
      fVar7 = (float)(dVar36 - dVar34) / (float)(dVar36 + dVar34);
      fVar6 = fVar7 * fVar7;
      *(float *)((int)puVar15 + 0x9c) = fVar7;
      *(float *)((int)puVar15 + 0x94) = fVar7;
      *(float *)(puVar15 + 0x13) = fVar7;
      *(float *)(puVar15 + 0x12) = fVar7;
      fVar7 = fVar6 * fVar6;
      *(float *)((int)puVar15 + 0x94) = *(float *)((int)puVar15 + 0x94) * fVar6;
      *(float *)(puVar15 + 0x13) = *(float *)(puVar15 + 0x13) * fVar7;
      *(float *)((int)puVar15 + 0x9c) = *(float *)((int)puVar15 + 0x9c) * fVar7 * fVar6;
      do {
        *(float *)((int)lVar24 + 0x90) = *(float *)((int)lVar24 + 0x80) * fVar7 * fVar7;
        iVar26 = (int)lVar29;
        lVar29 = lVar29 + 8;
        lVar24 = lVar24 + 8;
        *(float *)((int)lVar31 + 4) = *(float *)(iVar26 + 4) * fVar7 * fVar7;
        lVar31 = lVar31 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar32 = 4;
      lVar31 = uVar22 - 0xb0;
      pfVar30 = (float *)&DAT_007358e0;
      lVar24 = lVar25;
      lVar29 = lVar31;
      do {
        fVar7 = *pfVar30;
        fVar6 = pfVar30[1];
        pfVar30 = pfVar30 + 2;
        *(float *)((int)lVar24 + 0x90) = *(float *)((int)lVar24 + 0x90) * fVar7;
        lVar24 = lVar24 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar6;
        lVar29 = lVar29 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar24 = 2;
      dVar34 = dVar33;
      do {
        iVar26 = (int)lVar25;
        iVar16 = (int)lVar31;
        lVar25 = lVar25 + 0x10;
        lVar31 = lVar31 + 0x10;
        dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar26 + 0x90)) +
                          *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc)
                         );
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      dVar35 = (double)((float)(dVar34 + dVar39) * fVar3 + fVar2);
    }
    (pMoby->rotation).y = (float)dVar35;
  }
  pMoby->collision = pMoby->pClass->collision;
  sound::PlayMobySound(1,0,pMoby);
  pMoby->state = '\x01';
  *(undefined2 *)((int)pvVar11 + 0x66) = 0;
  fVar2 = animationSpeed;
  puVar15[0x1e] = (longlong)(int)(animationSpeed * 120.5);
  puVar15[0x1e] = (longlong)(int)(fVar2 * 300.5);
  uVar27 = mobyutil::MB_randRange
                     (*(undefined4 *)((int)puVar15 + 0xf4),*(undefined4 *)((int)puVar15 + 0xf4));
  *(undefined2 *)((int)pvVar11 + 100) = uVar27;
  dVar39 = (double)fastfunc::FastIntToDouble(g_goldWeaponsArray.morphORay);
  *(undefined4 *)((int)pvVar11 + 0x70) = 0xffffffff;
  *(float *)((int)pvVar11 + 0x78) = (float)(dVar39 * 3.0 + 1.0);
  bVar21 = g_goldWeaponsArray.morphORay;
  *(uint *)((int)pvVar11 + 0x74) = (uint)g_goldWeaponsArray.morphORay;
  pMoby->setByGroup = bVar21;
  mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
  iVar26 = mobyutil::MB_GetPvarsIfMobyHasThem(param_1);
  if ((iVar26 == 0) || (*(char *)(iVar26 + 0xe) != '\x01')) {
    mobyfunc::DeleteMoby(param_1);
  }
  else {
    *(undefined1 *)(iVar26 + 0xe) = 2;
  }
  puVar15[0x1e] = (longlong)(int)(animationSpeed * 15.5);
  partupd::SpawnPart_5(0x412e848000000000,dVar33,lVar23 + 0x10,0x7f,0x7f,0x7f);
  fastfunc::FastMemSet(pvVar11,0,0x20);
  iVar26 = (&DAT_010bb494)[DAT_010bca30];
  if ((iVar26 != 0) && (*(short *)(iVar26 + 0xa6) == 0x10e)) {
    cVar1 = *(char *)(iVar26 + 0x20);
    if (cVar1 != -3 && cVar1 != -2) {
      if (cVar1 == '\x05') {
        *(undefined4 *)((int)pvVar11 + 0x78) = 0;
        pMoby->modeBits =
             pMoby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE|DISABLED);
      }
      else if (*(int *)((int)pvVar11 + 0x74) == 0) {
        iVar26 = DAT_010bca30 * 0x60;
        *(int *)((int)pvVar11 + 0x14) = DAT_010bca30 * 0xb0 + 0x10bb4f0;
        *(int *)((int)pvVar11 + 0x10) = iVar26 + 0x10bc2b0;
        pMoby->modeBits = pMoby->modeBits | (CAN_BE_AUTO_TARGETED|HAS_SPECIAL_VARS);
        *(undefined **)(*(int *)((int)pvVar11 + 0x14) + 0x70) = &DAT_008000c0;
      }
      *(undefined4 *)(*(int *)((&DAT_010bb494)[DAT_010bca30] + 0x78) + 0x70) = 1;
      goto LAB_003215a4;
    }
  }
  if (*(int *)((int)pvVar11 + 0x74) == 0) {
    iVar26 = DAT_010bca30 * 0x60;
    *(int *)((int)pvVar11 + 0x14) = DAT_010bca30 * 0xb0 + 0x10bb4f0;
    *(int *)((int)pvVar11 + 0x10) = iVar26 + 0x10bc2b0;
    pMoby->modeBits = pMoby->modeBits | (CAN_BE_AUTO_TARGETED|HAS_SPECIAL_VARS);
    *(undefined **)(*(int *)((int)pvVar11 + 0x14) + 0x70) = &DAT_008000c0;
  }
LAB_003215a4:
  iVar26 = *(int *)((int)pvVar11 + 0x14);
  if (iVar26 != 0) {
    *(undefined4 *)(iVar26 + 0x78) = 0;
    *(undefined4 *)(iVar26 + 0x84) = 4;
    *(undefined4 *)(iVar26 + 0x88) = 3;
    *(undefined4 *)(iVar26 + 0x8c) = 0x3f200000;
    *(undefined4 *)(iVar26 + 0x7c) = 0x3d4ccccd;
    *(undefined4 *)(iVar26 + 0x80) = 0x3f5ced91;
    *(undefined2 *)(iVar26 + 0x9c) = 0xffff;
    *(undefined2 *)(iVar26 + 0x9e) = 0xffff;
    *(undefined4 *)(iVar26 + 0xa0) = 0xffffffff;
    *(undefined4 *)(iVar26 + 0xa4) = 0xffffffff;
    *(undefined4 *)(iVar26 + 0xa8) = 0xffffffff;
    *(undefined4 *)(iVar26 + 0xac) = 0xffffffff;
  }
  (&DAT_010bb494)[DAT_010bca30] = pMoby;
  DAT_010bca30 = (DAT_010bca30 + 1) % 0x14;
  if (*(int *)((int)pvVar11 + 0x74) != 0) {
    pMoby->modeBits =
         pMoby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
          NO_UPDATE|DISABLED);
  }
  mobyfunc::UpdateMobyTransform(pMoby);
  return lVar23;
}



//==== 003216b8  ns=Global  size=0x2b8
// sig: undefined FUN_003216b8(void)
// callers(1): 002dbf30 mobyupdate_unsorted::UpdateMoby_1923
// callees(7): 00059e20 collproc::CollSphere; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fddc0 mobyutil::MB_SetAnimation; 000fe610 mobyutil::MB_SphericalToVector; 0015d12c sound::PlayMobySound; 00370ff0 SpawnMoby_428_Feather

int FUN_003216b8(MobyInstance *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  u16 *puVar2;
  undefined2 uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  undefined1 local_80 [16];
  float afStack_70 [4];
  float local_60 [4];
  
  fStack00000044 = (f32)param_3;
  fStack0000004c = (f32)param_4;
  (param_1->pos).y = fStack00000044;
  (param_1->pos).w = fStack0000004c;
  fStack00000040 = (f32)((ulonglong)param_3 >> 0x20);
  fStack00000048 = (f32)((ulonglong)param_4 >> 0x20);
  (param_1->pos).x = fStack00000040;
  (param_1->pos).z = fStack00000048;
  _fStack00000040 = param_3;
  _fStack00000048 = param_4;
  iVar4 = collproc::CollSphere(0x3fc99999a0000000,local_80,&stack0x00000000,0,param_1);
  if (iVar4 == 0) {
    pvVar1 = param_1->pVar;
    *(undefined4 *)((int)pvVar1 + 0x78) = 0x3f800000;
    if (param_1->animationId != '\x02') {
      mobyutil::MB_SetAnimation(param_1,2,0,1);
    }
    auVar11 = ZEXT416(0xffffffff);
    auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
    param_1->modeBits =
         param_1->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
    puVar2 = param_1->pClass->collision;
    param_1->state = '\x04';
    param_1->collision = puVar2;
    auVar11 = loadVectorLeftIndexed(0x10,0x3216a4);
    auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    iVar4 = 0x66;
    auVar11 = vectorMultiplyAddFloatingPoint
                        (auVar13,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                         auVar12);
    auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
    auVar11 = vectorSplatHalfWord(auVar11,1);
    uVar3 = storeVectorElementHalfWordIndexed(auVar11,0x66,ZEXT48(pvVar1));
    *(undefined2 *)((int)pvVar1 + 0x66) = uVar3;
  }
  else {
    iVar4 = 0;
    dVar8 = 0.01745329238474369;
    dVar9 = 3.5;
    dVar10 = 5.5;
    do {
      dVar5 = (double)mobyutil::MB_randRangeFloat(DAT_010bca34,DAT_008000e0);
      dVar6 = (double)mobyutil::MB_randRot();
      dVar7 = (double)mobyutil::MB_randRot();
      mobyutil::MB_SphericalToVector((float)dVar5,(float)dVar6,(float)dVar7,local_60);
      dVar5 = (double)mobyutil::MB_randRangeFloat
                                (DAT_008000d4 * mobyutil::g_FrameTime,
                                 DAT_008000d8 * mobyutil::g_FrameTime);
      dVar6 = (double)mobyutil::MB_randRot();
      mobyutil::MB_SphericalToVector
                ((float)dVar5,(float)dVar6,(float)((double)DAT_008000d0 * dVar8),afStack_70);
      mobyutil::MB_randRangeFloat((float)dVar9,(float)dVar10);
      SpawnMoby_428_Feather(param_1,local_60,afStack_70);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 4);
    iVar4 = sound::PlayMobySound(1,0,param_1);
  }
  return iVar4;
}



//==== 00321970  ns=Global  size=0x1c
// sig: undefined FUN_00321970(void)
// callers(2): 002dbe78 mobyupdate_helpers::M1923_002dbe78; 002dbf30 mobyupdate_unsorted::UpdateMoby_1923
// callees(0): 

bool FUN_00321970(int param_1)

{
  return *(char *)(param_1 + 0x20) == '\x06';
}



//==== 00321a20  ns=mobyupdate_unsorted  size=0x1f7c
// sig: undefined UpdateMoby_270(MobyInstance * moby)
// callers(0): 
// callees(32): 0005e598 collproc::CollMobySphere; 00060780 collproc::CollHotspot; 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 000fe610 mobyutil::MB_SphericalToVector; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 000ffb70 mobyutil::GetGroundZ; 000ffc18 mobyutil::GetGroundZNoWater; 000ffcd0 mobyutil::CollMovingSphere; 0010675c mobyutil::MB_damage; 00107860 mobyutil::MB_DamageMobyList; 0010e030 mobyutil::MB_genericExplosion; 00119a18 mobyfunc::DoManipulator; 00126dd8 partupd::SpawnPart_22; 0015d12c sound::PlayMobySound; 00370ff0 SpawnMoby_428_Feather; 0048c188 FUN_0048c188; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005e7f98 FUN_005e7f98; 005e8078 mathfunc::cosf; 005e8128 FUN_005e8128; 005e8338 FUN_005e8338
// strings: 003219c8: '?333@' (raw)

/* Moby 270 */

void mobyupdate_unsorted::UpdateMoby_270(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  f32 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  MobyModeBit MVar9;
  void *pvVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined2 uVar21;
  int iVar18;
  undefined4 uVar19;
  longlong lVar16;
  undefined8 uVar17;
  uint uVar20;
  undefined *puVar22;
  ulonglong uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined8 extraout_f1;
  undefined8 extraout_f1_00;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined8 uVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined8 uVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  float afStack_120 [4];
  float local_110 [4];
  undefined1 local_100 [16];
  float afStack_f0 [4];
  float local_e0 [4];
  float afStack_d0 [4];
  float local_c0 [4];
  undefined1 local_b0 [32];
  
  lVar15 = (longlong)(int)moby;
  pvVar10 = moby->pVar;
  uVar23 = ZEXT48(pvVar10);
  dVar34 = (double)moby->unk58;
  dVar24 = (double)FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                                (double)((moby->pos).y - g_heroPosition.y));
  uVar1 = moby->state;
  if (uVar1 == '\0') {
    moby->state = '\x01';
    *(undefined2 *)((int)pvVar10 + 0x66) = 0;
    *(undefined4 *)((int)pvVar10 + 0x70) = 0xffffffff;
    uVar21 = mobyutil::MB_randRange((int)(animationSpeed * 120.5),(int)(animationSpeed * 300.5));
    *(undefined2 *)((int)pvVar10 + 100) = uVar21;
    *(undefined4 *)((int)pvVar10 + 0x78) = 0x3f800000;
    uVar1 = moby->state;
  }
  if (uVar1 == '\x06') {
    return;
  }
  if (g_goldWeaponsArray.morphORay == '\0') {
    mobyfunc::DoManipulator
              (0x401eccccc0000000,moby,(longlong)DAT_010bb490,(Manipulator *)((int)pvVar10 + 0x20U))
    ;
  }
  else {
    mobyfunc::DoManipulator
              (0x4014000000000000,moby,(longlong)DAT_010bb490,(Manipulator *)((int)pvVar10 + 0x20U))
    ;
  }
  fVar2 = (moby->pos).x;
  fVar3 = (moby->pos).y;
  fVar4 = (moby->pos).z;
  fVar5 = (moby->pos).w;
  if (((-1 < *(int *)((int)pvVar10 + 0x70)) &&
      (iVar18 = fastfunc::FastDecTimerS32(uVar23 + 0x70), iVar18 != 0)) && (moby->enabled == '\0'))
  {
    mobyfunc::DeleteMoby(moby);
    return;
  }
  uVar11 = (int)DAT_00a10718 >> 0x1f;
  uVar20 = (int)DAT_00a10714 >> 0x1f;
  if (*(int *)((int)pvVar10 + 0x70) < 0) {
    if ((0x3f800000 < (int)((uVar11 >> 1 ^ (uint)DAT_00a10718) - uVar11)) ||
       (0x3f800000 < (int)((uVar20 >> 1 ^ DAT_00a10714) - uVar20))) {
      if ((moby->enabled == '\0') && (iVar18 = mobyutil::MB_randInt(9), iVar18 == 0)) {
        uVar19 = 0;
      }
      else {
        uVar19 = mobyutil::MB_randRange(0x1e,0x32);
      }
      *(undefined4 *)((int)pvVar10 + 0x70) = uVar19;
    }
  }
  else {
    if (((0x3f666666 < (int)((uVar11 >> 1 ^ (uint)DAT_00a10718) - uVar11)) ||
        (0x3f666666 < (int)((uVar20 >> 1 ^ DAT_00a10714) - uVar20))) &&
       ((moby->enabled == '\0' && (*(int *)((int)pvVar10 + 0x70) != -1)))) {
      iVar18 = mobyutil::MB_randInt(199);
      if (iVar18 == 0) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      uVar19 = mobyutil::MB_randRange(0x14,0x1e);
      *(undefined4 *)((int)pvVar10 + 0x70) = uVar19;
    }
    if ((1.0 < DAT_00a10718) ||
       (0x3f800000 <
        (int)(((uint)((int)DAT_00a10714 >> 0x1f) >> 1 ^ DAT_00a10714) - ((int)DAT_00a10714 >> 0x1f))
       )) {
      if (moby->enabled == '\0') {
        iVar18 = mobyutil::MB_randInt(0x18);
        if (iVar18 == 0) {
          mobyfunc::DeleteMoby(moby);
          return;
        }
      }
      else {
        iVar18 = mobyutil::MB_randInt(99);
        if (iVar18 == 0) {
          *(undefined4 *)((int)pvVar10 + 0x78) = 0;
        }
        else {
          uVar19 = mobyutil::MB_randRange(0x14,0x1e);
          *(undefined4 *)((int)pvVar10 + 0x70) = uVar19;
        }
      }
    }
  }
  if (0 < *(int *)((int)pvVar10 + 0x74)) {
    dVar37 = (double)moby->scale;
    dVar25 = (double)fastfunc::FastIntToDouble(*(int *)((int)pvVar10 + 0x74));
    moby->scale = (float)((double)((float)(dVar25 * 3.0 + 1.0) * moby->pClass->gScale - moby->scale)
                          * 0.10000000149011612 + dVar37);
  }
  dVar25 = (double)(moby->scale / moby->pClass->gScale);
  iVar18 = fastfunc::FastDecTimerS32(uVar23 + 0x7c);
  if ((iVar18 != 0) && (iVar18 = mobyutil::MB_damage(lVar15,0xffffffffffffffff,0), iVar18 != 0)) {
    sound::PlayMobySound(1,0,moby);
    auVar38 = ZEXT416(0xffffffff);
    auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
    auVar39 = vectorShiftLeftIntegerWord(auVar38,auVar38);
    *(float *)((int)pvVar10 + 0x78) = *(float *)((int)pvVar10 + 0x78) - *(float *)(iVar18 + 0x2c);
    auVar38 = loadVectorLeftIndexed(0x1c,0x32198c);
    auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar38 = vectorMultiplyAddFloatingPoint
                        (auVar40,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,
                         auVar39);
    auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
    auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar19 = storeVectorElementWordIndexed
                       (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x7c,uVar23);
    *(undefined4 *)((int)pvVar10 + 0x7cU & 0xfffffffc) = uVar19;
  }
  moby->damage = -1;
  uVar11 = (int)*(uint *)((int)pvVar10 + 0x78) >> 0x1f;
  uVar31 = 0x3ff0000000000000;
  if ((int)((uVar11 >> 1 ^ *(uint *)((int)pvVar10 + 0x78)) - uVar11) < 0x3f800000) {
    if (*(int *)((int)pvVar10 + 0x74) == 0) {
      dVar35 = 0.0;
      dVar33 = 0.3700000047683716;
      dVar37 = (double)(float)(dVar25 * 150000.0);
      dVar32 = 0.25;
      dVar30 = 0.5;
      dVar29 = 0.10000000149011612;
      dVar34 = 30.5;
      dVar24 = 57.5;
      for (iVar18 = 0; lVar16 = fastfunc::FastDoubleToInt(dVar25),
          iVar18 < (int)(lVar16 << 4) + (int)(lVar16 << 2); iVar18 = iVar18 + 1) {
        dVar26 = (double)mobyutil::MB_randRangeFloat((float)dVar35,(float)dVar33);
        dVar28 = (double)(float)(dVar26 * dVar25);
        dVar26 = (double)mobyutil::MB_randRot();
        dVar27 = (double)mobyutil::MB_randRot();
        mobyutil::MB_SphericalToVector((float)dVar28,(float)dVar26,(float)dVar27,local_110);
        mobyutil::MB_randRangeFloat((float)dVar32,(float)dVar30);
        dVar26 = (double)mobyutil::MB_randRangeFloat
                                   ((float)((double)mobyutil::g_FrameTime * dVar29),
                                    mobyutil::g_FrameTime);
        dVar28 = (double)(float)(dVar26 * dVar25);
        dVar26 = (double)mobyutil::MB_randRot();
        dVar27 = (double)mobyutil::MB_randRot();
        mobyutil::MB_SphericalToVector((float)dVar28,(float)dVar26,(float)dVar27,afStack_120);
        mobyutil::MB_randRange
                  ((int)((double)animationSpeed * dVar34),(int)((double)animationSpeed * dVar24));
        partupd::SpawnPart_22(dVar37,local_110,afStack_120,0x3f7f7f7f,0x2f2f2f);
      }
    }
    else {
      uVar36 = 0x4008000000000000;
      mobyutil::MB_genericExplosion
                (0,0x4000000000000000,0x4010000000000000,0x4008000000000000,0x4022000000000000,
                 0x3ff0000000000000,0x4028000000000000,lVar15,local_100,0,&DAT_0032198c,
                 0xffffffffffffffff,0,0,0);
      uVar17 = collproc::CollMobySphere(uVar36,lVar15 + 0x10);
      uVar36._0_4_ = (moby->pos).x;
      uVar36._4_4_ = (moby->pos).y;
      uVar14._0_4_ = (moby->pos).z;
      uVar14._4_4_ = (moby->pos).w;
      mobyutil::MB_DamageMobyList
                (uVar31,uVar31,uVar31,lVar15,2,uVar36,uVar14,&DAT_00a14a00,uVar17,0,&DAT_00830000);
    }
    uVar20 = mobyutil::MB_randRange(5,8);
    iVar18 = ((uint)((int)DAT_00a10714 >> 0x1f) >> 1 ^ DAT_00a10714) - ((int)DAT_00a10714 >> 0x1f);
    uVar11 = (int)DAT_00a10718 >> 0x1f;
    if ((0x3f59999a < iVar18) || (0x3f59999a < (int)((uVar11 >> 1 ^ (uint)DAT_00a10718) - uVar11)))
    {
      if ((iVar18 < 0x3f800001) && ((int)((uVar11 >> 1 ^ (uint)DAT_00a10718) - uVar11) < 0x3f800001)
         ) {
        uVar20 = ((int)uVar20 >> 1) + (uint)((int)uVar20 < 0 && (uVar20 & 1) != 0);
      }
      else {
        uVar20 = 1;
      }
    }
    iVar18 = 0;
    if (0 < (int)uVar20) {
      dVar37 = 0.01745329238474369;
      dVar34 = 3.5;
      dVar24 = 5.5;
      do {
        dVar29 = (double)mobyutil::MB_randRangeFloat(DAT_010bca34,DAT_008000e0);
        dVar32 = (double)(float)(dVar29 * dVar25);
        dVar29 = (double)mobyutil::MB_randRot();
        dVar30 = (double)mobyutil::MB_randRot();
        mobyutil::MB_SphericalToVector((float)dVar32,(float)dVar29,(float)dVar30,local_e0);
        dVar29 = (double)mobyutil::MB_randRangeFloat
                                   (DAT_008000d4 * mobyutil::g_FrameTime,
                                    DAT_008000d8 * mobyutil::g_FrameTime);
        dVar30 = (double)mobyutil::MB_randRot();
        mobyutil::MB_SphericalToVector
                  ((float)dVar29,(float)dVar30,(float)((double)DAT_008000d0 * dVar37),afStack_f0);
        mobyutil::MB_randRangeFloat((float)dVar34,(float)dVar24);
        SpawnMoby_428_Feather(lVar15,local_e0,afStack_f0);
        iVar18 = iVar18 + 1;
      } while (iVar18 < (int)uVar20);
    }
    sound::PlayMobySound(1,0,moby);
    if (-1 < *(int *)((int)pvVar10 + 0x70)) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
    MVar9 = moby->modeBits;
    *(undefined4 *)((int)pvVar10 + 0x74) = 0;
    moby->collision = (ushort *)0x0;
    moby->setByGroup = '\0';
    moby->state = '\x06';
    moby->modeBits =
         MVar9 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
    return;
  }
  iVar18 = fastfunc::FastDecTimerS16(uVar23 + 100);
  uVar31 = extraout_f1;
  if (iVar18 != 0) {
    lVar16 = mobyutil::MB_randInt(100);
    sound::PlayMobySound((uint)((ulonglong)(lVar16 + -0x4b) >> 0x3f) ^ 1,0,moby);
    uVar21 = mobyutil::MB_randRange((int)(animationSpeed * 120.5),(int)(animationSpeed * 300.5));
    *(undefined2 *)((int)pvVar10 + 100) = uVar21;
    uVar31 = extraout_f1_00;
  }
  puVar22 = *(undefined **)((int)pvVar10 + 0x70);
  fVar6 = 0.333;
  if (-1 < (int)puVar22) {
    puVar22 = &DAT_00720000;
    uVar31 = 0x4000000000000000;
    fVar6 = (float)((double)(mobyutil::g_FrameTime * 2.0) * dVar25);
  }
  dVar37 = (double)fVar6;
  uVar1 = moby->state;
  if (uVar1 == '\x05') {
    iVar18 = FUN_0048c188(uVar31,lVar15,*(undefined4 *)((int)pvVar10 + 0x10));
    if (iVar18 != 0) {
      moby->state = '\0';
      *(undefined2 *)(*(int *)((int)pvVar10 + 0x14) + 0x68) = 0;
    }
    iVar18 = mobyutil::MB_randInt(4);
    if (iVar18 != 0) {
      return;
    }
    dVar24 = (double)mobyutil::MB_randRangeFloat(DAT_010bca34,DAT_008000e0);
    dVar25 = (double)(float)(dVar24 * dVar25);
    dVar24 = (double)mobyutil::MB_randRot();
    dVar34 = (double)mobyutil::MB_randRot();
    mobyutil::MB_SphericalToVector((float)dVar25,(float)dVar24,(float)dVar34,local_c0);
    dVar24 = (double)mobyutil::MB_randRangeFloat
                               (DAT_008000d4 * mobyutil::g_FrameTime,
                                DAT_008000d8 * mobyutil::g_FrameTime);
    dVar34 = (double)mobyutil::MB_randRot();
    mobyutil::MB_SphericalToVector
              ((float)dVar24,(float)dVar34,DAT_008000d0 * 0.017453292,afStack_d0);
    mobyutil::MB_randRangeFloat(3.5,5.5);
    SpawnMoby_428_Feather(lVar15,local_c0,afStack_d0);
    return;
  }
  if (uVar1 == '\x04') {
    iVar18 = fastfunc::FastDecTimerS16(uVar23 + 0x66);
    if ((iVar18 == 0) ||
       (fVar6 = (moby->pos).y - g_heroPosition.y, fVar7 = (moby->pos).x - g_heroPosition.x,
       SQRT(fVar7 * fVar7 + fVar6 * fVar6) <= (float)(dVar25 * 4.0))) {
      dVar29 = 1.5707963705062866;
      mobyutil::OrganicDeltAngSpeed
                (dVar24,(double)(DAT_0071f418 * 0.7853982),(double)(DAT_0071f418 * 1.5707964),
                 (double)(mobyutil::g_FrameTime * 0.7853982),lVar15);
      mathfunc::cosf((moby->rotation).z);
      FUN_005e8128((double)(moby->rotation).z);
      iVar18 = mobyutil::CollMovingSphere
                         ((double)(float)(dVar25 * 0.20000000298023224),
                          (double)(float)(dVar25 * 0.5),dVar37,0x3fd0c15240000000,lVar15,local_140,
                          local_130);
      if (iVar18 == 0) {
        dVar37 = (double)(moby->rotation).z;
        dVar24 = (double)FUN_005e8338((double)(fVar2 - (moby->pos).x),
                                      (double)(fVar3 - (moby->pos).y));
        dVar24 = (double)fastfunc::FastSubRots((float)dVar37,(float)dVar24);
        if ((dVar29 < dVar24) ||
           (fVar6 = (moby->pos).y - fVar3, fVar7 = (moby->pos).x - fVar2,
           fVar8 = (moby->pos).z - fVar4,
           SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6) <
           (float)(dVar25 * 0.009999999776482582))) {
          moby->state = '\x01';
          uVar21 = mobyutil::MB_randRange
                             ((int)(animationSpeed * 60.5),(int)(animationSpeed * 180.5));
          *(undefined2 *)((int)pvVar10 + 0x66) = uVar21;
          uVar19 = mobyutil::MB_randInt(2);
          mobyutil::MB_SetAnimation
                    (lVar15,(ulonglong)(LZCOUNT(uVar19) << 0x20) >> 0x25,0,
                     (int)(animationSpeed * 5.5));
        }
      }
    }
    else {
      dVar29 = 1.5707963705062866;
      mobyutil::OrganicDeltAngSpeed
                (dVar24,(double)(DAT_0071f418 * 0.7853982),(double)(DAT_0071f418 * 1.5707964),
                 (double)(mobyutil::g_FrameTime * 0.7853982),lVar15);
      mathfunc::cosf((moby->rotation).z);
      FUN_005e8128((double)(moby->rotation).z);
      iVar18 = mobyutil::CollMovingSphere
                         ((double)(float)(dVar25 * 0.20000000298023224),
                          (double)(float)(dVar25 * 0.5),dVar37,0x3fd0c15240000000,lVar15,local_140,
                          local_130);
      if (iVar18 == 0) {
        dVar37 = (double)(moby->rotation).z;
        dVar24 = (double)FUN_005e8338((double)(fVar2 - (moby->pos).x),
                                      (double)(fVar3 - (moby->pos).y));
        dVar24 = (double)fastfunc::FastSubRots((float)dVar37,(float)dVar24);
        if ((dVar29 < dVar24) ||
           (fVar6 = (moby->pos).y - fVar3, fVar7 = (moby->pos).x - fVar2,
           fVar8 = (moby->pos).z - fVar4,
           SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6) <
           (float)(dVar25 * 0.009999999776482582))) {
          moby->state = '\x01';
          uVar21 = mobyutil::MB_randRange
                             ((int)(animationSpeed * 60.5),(int)(animationSpeed * 180.5));
          *(undefined2 *)((int)pvVar10 + 0x66) = uVar21;
          uVar19 = mobyutil::MB_randInt(2);
          mobyutil::MB_SetAnimation
                    (lVar15,(ulonglong)(LZCOUNT(uVar19) << 0x20) >> 0x25,0,
                     (int)(animationSpeed * 5.5));
          goto LAB_00323660;
        }
      }
      moby->state = '\x03';
      mobyutil::MB_SetAnimation(lVar15,3,0,(int)(animationSpeed * 10.5));
    }
LAB_00323660:
    if (iVar18 != 0) {
      (moby->pos).x = fVar2;
      (moby->pos).y = fVar3;
      (moby->pos).z = fVar4;
      (moby->pos).w = fVar5;
      goto LAB_00323780;
    }
  }
  else if (uVar1 == '\x03') {
    fVar6 = (moby->pos).y - g_heroPosition.y;
    fVar7 = (moby->pos).x - g_heroPosition.x;
    fVar6 = SQRT(fVar7 * fVar7 + fVar6 * fVar6);
    if (fVar6 <= (float)(dVar25 * 6.0)) {
      if ((float)(dVar25 * 3.0) <= fVar6) {
        dVar29 = 1.5707963705062866;
        mobyutil::OrganicDeltAngSpeed
                  (dVar24,(double)(DAT_0071f418 * 0.7853982),(double)(DAT_0071f418 * 1.5707964),
                   (double)(mobyutil::g_FrameTime * 0.7853982),lVar15,puVar22,uVar23 + 0x68);
        mathfunc::cosf((moby->rotation).z);
        FUN_005e8128((double)(moby->rotation).z);
        iVar18 = mobyutil::CollMovingSphere
                           ((double)(float)(dVar25 * 0.20000000298023224),
                            (double)(float)(dVar25 * 0.5),dVar37,0x3fd0c15240000000,lVar15,local_140
                            ,local_130);
        if (iVar18 == 0) {
          dVar37 = (double)(moby->rotation).z;
          dVar24 = (double)FUN_005e8338((double)(fVar2 - (moby->pos).x),
                                        (double)(fVar3 - (moby->pos).y));
          dVar24 = (double)fastfunc::FastSubRots((float)dVar37,(float)dVar24);
          if ((dVar29 < dVar24) ||
             (fVar6 = (moby->pos).y - fVar3, fVar7 = (moby->pos).x - fVar2,
             fVar8 = (moby->pos).z - fVar4,
             SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6) <
             (float)(dVar25 * 0.009999999776482582))) {
            moby->state = '\x01';
            uVar21 = mobyutil::MB_randRange
                               ((int)(animationSpeed * 60.5),(int)(animationSpeed * 180.5));
            *(undefined2 *)((int)pvVar10 + 0x66) = uVar21;
            uVar19 = mobyutil::MB_randInt(2);
            mobyutil::MB_SetAnimation
                      (lVar15,(ulonglong)(LZCOUNT(uVar19) << 0x20) >> 0x25,0,
                       (int)(animationSpeed * 5.5));
          }
        }
      }
      else {
        dVar29 = 1.5707963705062866;
        mobyutil::OrganicDeltAngSpeed
                  (dVar24,(double)(DAT_0071f418 * 0.7853982),(double)(DAT_0071f418 * 1.5707964),
                   (double)(mobyutil::g_FrameTime * 0.7853982),lVar15,puVar22,uVar23 + 0x68);
        mathfunc::cosf((moby->rotation).z);
        FUN_005e8128((double)(moby->rotation).z);
        iVar18 = mobyutil::CollMovingSphere
                           ((double)(float)(dVar25 * 0.20000000298023224),
                            (double)(float)(dVar25 * 0.5),dVar37,0x3fd0c15240000000,lVar15,local_140
                            ,local_130);
        if (iVar18 == 0) {
          dVar37 = (double)(moby->rotation).z;
          dVar24 = (double)FUN_005e8338((double)(fVar2 - (moby->pos).x),
                                        (double)(fVar3 - (moby->pos).y));
          dVar24 = (double)fastfunc::FastSubRots((float)dVar37,(float)dVar24);
          if ((dVar29 < dVar24) ||
             (fVar6 = (moby->pos).y - fVar3, fVar7 = (moby->pos).x - fVar2,
             fVar8 = (moby->pos).z - fVar4,
             SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6) <
             (float)(dVar25 * 0.009999999776482582))) {
            moby->state = '\x01';
            uVar21 = mobyutil::MB_randRange
                               ((int)(animationSpeed * 60.5),(int)(animationSpeed * 180.5));
            *(undefined2 *)((int)pvVar10 + 0x66) = uVar21;
            uVar19 = mobyutil::MB_randInt(2);
            mobyutil::MB_SetAnimation
                      (lVar15,(ulonglong)(LZCOUNT(uVar19) << 0x20) >> 0x25,0,
                       (int)(animationSpeed * 5.5));
            goto LAB_00323660;
          }
        }
        moby->state = '\x04';
        mobyutil::MB_SetAnimation(lVar15,2,0,(int)(animationSpeed * 10.5));
      }
      goto LAB_00323660;
    }
    moby->state = '\x01';
    uVar21 = mobyutil::MB_randRange((int)(animationSpeed * 60.5),(int)(animationSpeed * 180.5));
    *(undefined2 *)((int)pvVar10 + 0x66) = uVar21;
    uVar19 = mobyutil::MB_randInt(2);
    mobyutil::MB_SetAnimation
              (lVar15,(ulonglong)(LZCOUNT(uVar19) << 0x20) >> 0x25,0,(int)(animationSpeed * 5.5));
    mobyutil::CollMovingSphere
              ((double)(float)(dVar25 * 0.20000000298023224),(double)(float)(dVar25 * 0.5),dVar37,
               0x3fd0c15240000000,lVar15,local_140,local_140);
  }
  else if (uVar1 == '\x02') {
    mobyutil::OrganicDeltAngSpeed
              (dVar24,(double)(DAT_0071f418 * 0.7853982),(double)(DAT_0071f418 * 1.5707964),
               (double)(mobyutil::g_FrameTime * 0.7853982),lVar15,&DAT_00720000,uVar23 + 0x68);
    uVar31 = 0x3fe0000000000000;
    mobyutil::CollMovingSphere
              ((double)(float)(dVar25 * 0.20000000298023224),(double)(float)(dVar25 * 0.5),dVar37,
               0x3fd0c15240000000,lVar15,local_140,local_140);
    iVar18 = fastfunc::FastDecTimerS16(uVar23 + 0x66);
    fVar6 = (moby->rotation).z;
    if ((iVar18 == 0) ||
       (fVar7 = (moby->pos).y - g_heroPosition.y, fVar8 = (moby->pos).x - g_heroPosition.x,
       (float)(dVar25 * 5.0) <= SQRT(fVar8 * fVar8 + fVar7 * fVar7))) {
      dVar24 = (double)fastfunc::FastSubRots((float)dVar24,fVar6);
      if ((dVar24 < 0.0872664600610733) ||
         (fVar6 = (moby->pos).y - g_heroPosition.y, fVar7 = (moby->pos).x - g_heroPosition.x,
         (float)(dVar25 * 6.0) < SQRT(fVar7 * fVar7 + fVar6 * fVar6))) {
        moby->state = '\x01';
        uVar21 = mobyutil::MB_randRange((int)(animationSpeed * 60.5),(int)(animationSpeed * 180.5));
        *(undefined2 *)((int)pvVar10 + 0x66) = uVar21;
        uVar19 = mobyutil::MB_randInt(2);
        mobyutil::MB_SetAnimation
                  (lVar15,(ulonglong)(LZCOUNT(uVar19) << 0x20) >> 0x25,0,(int)(animationSpeed * 5.5)
                  );
      }
    }
    else {
      mathfunc::cosf(fVar6);
      FUN_005e8128((double)(moby->rotation).z);
      dVar24 = (double)mobyutil::GetGroundZ(uVar31,local_130,0);
      if (ABS((float)(dVar24 - (double)fVar4)) <=
          (float)((double)(mobyutil::g_FrameTime * 2.0) * dVar25)) {
        moby->state = '\x03';
        mobyutil::MB_SetAnimation(lVar15,3,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  else if (uVar1 == '\x01') {
    if ((moby->field43_0x70 & 2U) != 0) {
      uVar19 = mobyutil::MB_randInt(2);
      mobyutil::MB_SetAnimation
                (lVar15,(ulonglong)(LZCOUNT(uVar19) << 0x20) >> 0x25,0,(int)(animationSpeed * 5.5));
    }
    iVar18 = fastfunc::FastDecTimerS16(uVar23 + 0x66);
    fVar6 = (moby->pos).x;
    fVar7 = (moby->pos).y;
    fVar8 = (moby->rotation).z;
    if ((iVar18 != 0) &&
       (fVar13 = fVar7 - g_heroPosition.y, fVar12 = fVar6 - g_heroPosition.x,
       SQRT(fVar12 * fVar12 + fVar13 * fVar13) < (float)(dVar25 * 5.0))) {
      mathfunc::cosf(fVar8);
      FUN_005e8128((double)(moby->rotation).z);
      iVar18 = mobyutil::CollMovingSphere
                         ((double)(float)(dVar25 * 0.20000000298023224),
                          (double)(float)(dVar25 * 0.5),dVar37,0x3fd0c15240000000,lVar15,local_140,
                          local_130);
      if (iVar18 == 0) {
        dVar37 = (double)(moby->rotation).z;
        dVar24 = (double)FUN_005e8338((double)(fVar2 - (moby->pos).x),
                                      (double)(fVar3 - (moby->pos).y));
        dVar24 = (double)fastfunc::FastSubRots((float)dVar37,(float)dVar24);
        if ((1.5707963705062866 <= dVar24) ||
           (fVar6 = (moby->pos).y - fVar3, fVar7 = (moby->pos).x - fVar2,
           fVar8 = (moby->pos).z - fVar4,
           SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6) <=
           (float)(dVar25 * 0.009999999776482582))) {
          uVar21 = mobyutil::MB_randRange
                             ((int)(animationSpeed * 60.5),(int)(animationSpeed * 180.5));
          *(undefined2 *)((int)pvVar10 + 0x66) = uVar21;
          goto LAB_00323660;
        }
      }
      moby->state = '\x03';
      mobyutil::MB_SetAnimation(lVar15,3,0,(int)(animationSpeed * 10.5));
      goto LAB_00323660;
    }
    fVar7 = fVar7 - g_heroPosition.y;
    fVar6 = fVar6 - g_heroPosition.x;
    if (((float)(dVar25 * 5.0) <= SQRT(fVar6 * fVar6 + fVar7 * fVar7)) ||
       (dVar24 = (double)fastfunc::FastSubRots((float)dVar24,fVar8), dVar24 <= 0.5235987901687622))
    {
      mobyutil::CollMovingSphere
                ((double)(float)(dVar25 * 0.20000000298023224),(double)(float)(dVar25 * 0.5),dVar37,
                 0x3fd0c15240000000,lVar15,local_140,local_140);
    }
    else {
      mobyutil::CollMovingSphere
                ((double)(float)(dVar25 * 0.20000000298023224),(double)(float)(dVar25 * 0.5),dVar37,
                 0x3fd0c15240000000,lVar15,local_140,local_140);
      moby->state = '\x02';
      mobyutil::MB_SetAnimation(lVar15,3,0,(int)(animationSpeed * 10.5));
    }
  }
  fVar6 = (moby->pos).y;
  fVar7 = (moby->pos).x;
  fVar3 = fVar3 - fVar6;
  fVar2 = fVar2 - fVar7;
  fVar8 = (moby->pos).z;
  fVar4 = fVar4 - fVar8;
  if ((float)((double)mobyutil::g_FrameTime * dVar25) <
      SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3)) {
    FUN_005e7f98(local_b0,local_b0);
    fVar7 = (moby->pos).x;
    fVar6 = (moby->pos).y;
    fVar8 = (moby->pos).z;
  }
  fVar5 = (moby->pos).w;
  dVar24 = (double)mobyutil::GetGroundZNoWater(local_140);
  if (ABS((float)(dVar24 - (double)(moby->pos).z)) <=
      (float)((double)mobyutil::g_FrameTime * dVar25)) {
    (moby->pos).x = fVar7 + fVar2;
    (moby->pos).y = fVar6 + fVar3;
    (moby->pos).z = fVar8 + fVar4;
    (moby->pos).w = fVar5;
  }
LAB_00323780:
  fVar2 = DAT_0071f418 * 9.8 + *(float *)((int)pvVar10 + 0x6c);
  *(float *)((int)pvVar10 + 0x6c) = fVar2;
  (moby->pos).z = (moby->pos).z - fVar2;
  dVar24 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar15 + 0x10,0);
  dVar37 = (double)(moby->pos).z;
  if ((dVar37 < dVar24) && (dVar24 < (double)(float)(dVar25 * 0.25 + dVar37))) {
    *(undefined4 *)((int)pvVar10 + 0x6c) = 0;
    (moby->pos).z = (float)dVar24;
  }
  iVar18 = collproc::CollHotspot();
  if (iVar18 == 0) {
    *(undefined4 *)((int)pvVar10 + 0x78) = 0;
  }
  if (moby->state != '\x05') {
    (moby->pos).z = CollOutput.ip.z;
    dVar32 = (double)CollOutput.normal.x;
    dVar30 = (double)CollOutput.normal.y;
    dVar29 = (double)CollOutput.normal.z;
    dVar24 = (double)mathfunc::cosf((moby->rotation).z);
    dVar25 = (double)FUN_005e8128((double)(moby->rotation).z);
    dVar37 = (double)(float)(dVar32 * dVar24 + (double)(float)(dVar30 * dVar25));
    dVar24 = (double)mathfunc::cosf((moby->rotation).z);
    dVar25 = (double)FUN_005e8128((double)(moby->rotation).z);
    dVar24 = (double)FUN_005e8338((double)SQRT((float)(dVar37 * dVar37 +
                                                      (double)(float)(dVar29 * dVar29))),
                                  (double)(float)(dVar30 * dVar24 - (double)(float)(dVar32 * dVar25)
                                                 ));
    dVar24 = -dVar24;
    uVar31 = FUN_005e8338(dVar29,dVar37);
    dVar25 = (double)(moby->rotation).x;
    dVar24 = (double)fastfunc::FastDiffRots(dVar24,dVar25);
    dVar37 = 6.2831854820251465;
    dVar24 = (double)fastfunc::FastWrapRot
                               ((float)dVar25,
                                (float)((double)(mobyutil::g_FrameTime * 6.2831855) * dVar24));
    dVar25 = (double)(moby->rotation).y;
    (moby->rotation).x = (float)dVar24;
    dVar24 = (double)fastfunc::FastDiffRots(uVar31,dVar25);
    dVar24 = (double)fastfunc::FastWrapRot
                               ((float)dVar25,
                                (float)((double)(float)((double)mobyutil::g_FrameTime * dVar37) *
                                       dVar24));
    (moby->rotation).y = (float)dVar24;
  }
  if ((int)(moby->pos).z < 0) {
    mobyfunc::DeleteMoby(moby);
  }
  else {
    moby->unk58 = (float)dVar34;
  }
  return;
}



//==== 0032399c  ns=mobyupdate_helpers  size=0x58
// sig: undefined M271_0032399c(MobyInstance * moby)
// callers(0): 
// callees(1): 0048a718 mobyupdate_helpers::M849_MB_Sucking

void mobyupdate_helpers::M271_0032399c(MobyInstance *moby)

{
  undefined8 uVar1;
  
  uVar1 = M849_MB_Sucking(moby);
  if ((int)uVar1 == 0) {
    if (moby->state == '\x05') {
      moby->state = '\x01';
    }
  }
  else {
    moby->state = '\x05';
  }
  return;
}



//==== 003239f4  ns=mobyupdate_helpers  size=0x58
// sig: undefined M271_003239f4(void)
// callers(0): 
// callees(1): 0048aa70 mobyupdate_helpers::M849_0048aa70

void mobyupdate_helpers::M271_003239f4(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\x05') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 5;
  }
  return;
}



//==== 00323a4c  ns=mobyupdate_helpers  size=0xc8
// sig: undefined M271_00323a4c(void)
// callers(0): 
// callees(3): 0015d12c sound::PlayMobySound; 00486828 FUN_00486828; 0048acb8 mobyupdate_helpers::M849_0048acb8

undefined8
mobyupdate_helpers::M271_00323a4c
          (undefined8 param_1,MobyInstance *param_2,undefined8 param_3,undefined8 param_4)

{
  short sVar1;
  int iVar3;
  undefined8 uVar2;
  
  iVar3 = FUN_00486828();
  uVar2 = M849_0048acb8(param_1,param_2,param_3,param_4);
  sVar1 = *(short *)(iVar3 + 0x68);
  if ((int)uVar2 == 0) {
    if (param_2->state == '\x05') {
      param_2->state = '\x01';
    }
  }
  else {
    param_2->state = '\x05';
  }
  if (sVar1 == 6) {
    sound::PlayMobySound(1,0,param_2);
  }
  return uVar2;
}



//==== 00323b14  ns=mobyupdate_helpers  size=0x38
// sig: undefined M271_00323b14(void)
// callers(0): 
// callees(1): 0048afe8 mobyupdate_helpers::M849_0048afe8

void mobyupdate_helpers::M271_00323b14(int param_1)

{
  M849_0048afe8();
  *(undefined1 *)(param_1 + 0x20) = 5;
  return;
}



//==== 00323b4c  ns=mobyupdate_helpers  size=0x2c
// sig: undefined M271_00323b4c(void)
// callers(0): 
// callees(0): 

undefined4 mobyupdate_helpers::M271_00323b4c(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x78) != 0) {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x14);
    }
  }
  return uVar1;
}



//==== 00323b78  ns=mobyupdate_helpers  size=0x14
// sig: undefined M271_00323b78(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M271_00323b78(void)

{
  DAT_00800130 = 0x10000;
  return;
}



//==== 00323bf8  ns=mobyupdate_unsorted  size=0x1cbc
// sig: undefined UpdateMoby_271(MobyInstance * moby)
// callers(0): 
// callees(15): 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f1ec8 mobyfunc::SetColorOfMoby; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00100f8c mobyutil::MB_InitDefaultParams; 00101058 mobyutil::MB_UpdateNavMove; 00105c08 mobyutil::CollDamageMobyDirect; 0010675c mobyutil::MB_damage; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 004fff60 fastfunc::FastDecTimerS32; 005026a0 fastfunc::FastSubRots

/* Moby 271 */

void mobyupdate_unsorted::UpdateMoby_271(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  MobyInstance *victim;
  ulonglong uVar14;
  int iVar18;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar19;
  longlong lVar20;
  float *pfVar21;
  float *pfVar23;
  longlong lVar22;
  ulonglong uVar24;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar25;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f31;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar17 = uVar14 - 0x240;
  puVar9 = (ulonglong *)lVar17;
  *puVar9 = uVar14;
  puVar9[0x4a] = in_LR;
  puVar9[0x47] = in_f31;
  puVar9[0x46] = unaff_r31;
  puVar9[0x45] = unaff_r30;
  puVar9[0x44] = unaff_r29;
  puVar9[0x43] = unaff_r28;
  pfVar21 = (float *)moby->pVar;
  uVar25 = ZEXT48(pfVar21);
  iVar18 = mobyutil::MB_damage(moby,0x10000,0);
  fastfunc::FastDecTimerS32(uVar25 + 0x124);
  if (((iVar18 != 0) && (moby->state != '\x05' && moby->state != '\t')) && (pfVar21[0x49] == 0.0)) {
    pfVar21[0x18] = 0.008;
    pfVar21[0x19] = 0.0005;
    dVar27 = 0.0;
    dVar28 = dVar27;
    if (pfVar21[0x4a] == 0.0) {
      dVar28 = (double)(mobyutil::g_FrameTime * 7.0);
    }
    pfVar21[0x1a] = (float)dVar28;
    fVar4 = mobyutil::g_FrameTime * 3.0;
    *(undefined1 *)((int)pfVar21 + 0x8d) = 0;
    pfVar21[0x1d] = 1.26117e-44;
    pfVar21[0x1b] = fVar4;
    fVar4 = *pfVar21 - *(float *)(iVar18 + 0x2c);
    *pfVar21 = fVar4;
    if (fVar4 <= 0.0) {
      *(undefined1 *)((int)pfVar21 + 0x47) = 0x5a;
      fVar4 = (moby->pos).x - g_heroPosition.x;
      fVar3 = (moby->pos).y - g_heroPosition.y;
      fVar5 = ABS(fVar4);
      fVar7 = ABS(fVar3);
      *(float *)(puVar9 + 0x1c) = fVar4;
      *(float *)((int)puVar9 + 0xe4) = fVar3;
      *(float *)(puVar9 + 0x1d) = fVar5 - fVar7;
      uVar24 = (ulonglong)(*(uint *)(puVar9 + 0x1c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x1d) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0xe4) >> 0x1d) & 4;
      uVar15 = uVar24 << 2 | 0x735900;
      fVar4 = ABS(*(float *)(puVar9 + 0x1c));
      if (*(float *)(puVar9 + 0x1d) - 0.0 < 0.0) {
        fVar4 = fVar7;
      }
      fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
      fVar7 = ABS(*(float *)((int)puVar9 + 0xe4));
      if (*(float *)(puVar9 + 0x1d) - 0.0 < 0.0) {
        fVar7 = fVar5;
      }
      fVar5 = *(float *)((int)uVar15 + 4);
      if (0.0 < fVar4) {
        lVar16 = uVar14 - 0x230;
        lVar22 = uVar14 - 0xa0;
        lVar20 = uVar14 - 0xb0;
        lVar26 = 2;
        fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
        fVar7 = fVar4 * fVar4;
        *(float *)((int)puVar9 + 0x19c) = fVar4;
        *(float *)((int)puVar9 + 0x194) = fVar4;
        *(float *)(puVar9 + 0x33) = fVar4;
        *(float *)(puVar9 + 0x32) = fVar4;
        fVar4 = fVar7 * fVar7;
        *(float *)((int)puVar9 + 0x194) = *(float *)((int)puVar9 + 0x194) * fVar7;
        *(float *)(puVar9 + 0x33) = *(float *)(puVar9 + 0x33) * fVar4;
        *(float *)((int)puVar9 + 0x19c) = *(float *)((int)puVar9 + 0x19c) * fVar4 * fVar7;
        do {
          *(float *)((int)lVar16 + 400) = *(float *)((int)lVar16 + 0x180) * fVar4 * fVar4;
          iVar18 = (int)lVar20;
          lVar20 = lVar20 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar4 * fVar4;
          lVar22 = lVar22 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar26 = 4;
        lVar22 = uVar14 - 0xb0;
        uVar15 = ZEXT48(&DAT_007358e0);
        lVar16 = lVar17;
        lVar20 = lVar22;
        do {
          pfVar23 = (float *)uVar15;
          fVar4 = pfVar23[1];
          uVar15 = uVar15 + 8;
          *(float *)((int)lVar16 + 400) = *(float *)((int)lVar16 + 400) * *pfVar23;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar4;
          lVar20 = lVar20 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar20 = 2;
        lVar16 = lVar17;
        do {
          iVar18 = (int)lVar16;
          iVar10 = (int)lVar22;
          lVar16 = lVar16 + 0x10;
          lVar22 = lVar22 + 0x10;
          dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar18 + 400)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar3 + fVar5);
      }
      mobyutil::MB_StartKick(dVar27,moby,uVar25 + 0x50,uVar15,4,5,0);
      pfVar21[0x28] = 2.0;
      pfVar21[0x29] = 8.0;
      moby->state = '\t';
    }
    else {
      uVar19 = *(uint *)(iVar18 + 0x2c);
      if ((int)(((uint)((int)uVar19 >> 0x1f) >> 1 ^ uVar19) - ((int)uVar19 >> 0x1f)) < 0x3f800000) {
        *(undefined1 *)((int)pfVar21 + 0x47) = 0x4b;
      }
      else if (uVar19 == 0x3f800000) {
        if (*(short *)(*(int *)(iVar18 + 0x20) + 0xa6) == 0xb0) {
          auVar31 = ZEXT416(0xffffffff);
          auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
          *(undefined1 *)((int)pfVar21 + 0x47) = 0x4b;
          auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
          auVar31 = loadVectorLeftIndexed(0xc,0x323b90);
          auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar31 = vectorMultiplyAddFloatingPoint
                              (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60
                               ,auVar32);
          auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
          auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar8 = storeVectorElementWordIndexed
                            (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x124,
                             uVar25);
          *(undefined4 *)((uint)(pfVar21 + 0x49) & 0xfffffffc) = uVar8;
        }
        else {
          *(undefined1 *)((int)pfVar21 + 0x47) = 0x4b;
          fVar4 = (moby->pos).x - g_heroPosition.x;
          fVar3 = (moby->pos).y - g_heroPosition.y;
          fVar5 = ABS(fVar4);
          fVar7 = ABS(fVar3);
          *(float *)((int)puVar9 + 0x104) = fVar4;
          *(float *)(puVar9 + 0x21) = fVar3;
          *(float *)((int)puVar9 + 0x10c) = fVar5 - fVar7;
          uVar24 = (ulonglong)(*(uint *)((int)puVar9 + 0x104) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar9 + 0x10c) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar9 + 0x21) >> 0x1d) & 4;
          uVar15 = uVar24 << 2 | 0x735900;
          fVar4 = ABS(*(float *)((int)puVar9 + 0x104));
          if (*(float *)((int)puVar9 + 0x10c) - 0.0 < 0.0) {
            fVar4 = fVar7;
          }
          fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
          fVar7 = ABS(*(float *)(puVar9 + 0x21));
          if (*(float *)((int)puVar9 + 0x10c) - 0.0 < 0.0) {
            fVar7 = fVar5;
          }
          fVar5 = *(float *)((int)uVar15 + 4);
          if (0.0 < fVar4) {
            lVar16 = uVar14 - 0x230;
            lVar22 = uVar14 - 0x40;
            lVar20 = uVar14 - 0x50;
            lVar26 = 2;
            fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
            fVar7 = fVar4 * fVar4;
            *(float *)((int)puVar9 + 0x1fc) = fVar4;
            *(float *)((int)puVar9 + 500) = fVar4;
            *(float *)(puVar9 + 0x3f) = fVar4;
            *(float *)(puVar9 + 0x3e) = fVar4;
            fVar4 = fVar7 * fVar7;
            *(float *)((int)puVar9 + 500) = *(float *)((int)puVar9 + 500) * fVar7;
            *(float *)(puVar9 + 0x3f) = *(float *)(puVar9 + 0x3f) * fVar4;
            *(float *)((int)puVar9 + 0x1fc) = *(float *)((int)puVar9 + 0x1fc) * fVar4 * fVar7;
            do {
              *(float *)((int)lVar16 + 0x1f0) = *(float *)((int)lVar16 + 0x1e0) * fVar4 * fVar4;
              iVar18 = (int)lVar20;
              lVar20 = lVar20 + 8;
              lVar16 = lVar16 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar4 * fVar4;
              lVar22 = lVar22 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar26 = 4;
            lVar22 = uVar14 - 0x50;
            uVar15 = ZEXT48(&DAT_007358e0);
            lVar16 = lVar17;
            lVar20 = lVar22;
            do {
              pfVar23 = (float *)uVar15;
              fVar4 = pfVar23[1];
              uVar15 = uVar15 + 8;
              *(float *)((int)lVar16 + 0x1f0) = *(float *)((int)lVar16 + 0x1f0) * *pfVar23;
              lVar16 = lVar16 + 8;
              *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar4;
              lVar20 = lVar20 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar20 = 2;
            lVar16 = lVar17;
            do {
              iVar18 = (int)lVar16;
              iVar10 = (int)lVar22;
              lVar16 = lVar16 + 0x10;
              lVar22 = lVar22 + 0x10;
              dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar18 + 0x1f0)) +
                                *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                               *(float *)(iVar10 + 0xc));
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
            dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar3 + fVar5);
          }
          mobyutil::MB_StartKick(dVar27,moby,uVar25 + 0x50,uVar15,3,5,0);
          auVar31 = ZEXT416(0xffffffff);
          auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
          pfVar21[0x28] = 4.0;
          auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
          pfVar21[0x29] = 9.0;
          moby->state = '\x05';
          auVar31 = loadVectorLeftIndexed(0xc,0x323b90);
          auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar31 = vectorMultiplyAddFloatingPoint
                              (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60
                               ,auVar32);
          auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
          auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar8 = storeVectorElementWordIndexed
                            (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x124,
                             uVar25);
          *(undefined4 *)((uint)(pfVar21 + 0x49) & 0xfffffffc) = uVar8;
        }
      }
      else if (uVar19 == 0x40000000) {
        auVar31 = ZEXT416(0xffffffff);
        auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
        auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
        auVar31 = loadVectorLeftIndexed(0xc,0x323b90);
        auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar31 = vectorMultiplyAddFloatingPoint
                            (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                             auVar32);
        auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
        auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar8 = storeVectorElementWordIndexed
                          (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x124,
                           uVar25);
        *(undefined4 *)((uint)(pfVar21 + 0x49) & 0xfffffffc) = uVar8;
        *(undefined1 *)((int)pfVar21 + 0x47) = 0x5a;
        fVar4 = (moby->pos).x - g_heroPosition.x;
        fVar3 = (moby->pos).y - g_heroPosition.y;
        fVar5 = ABS(fVar4);
        fVar7 = ABS(fVar3);
        *(float *)(puVar9 + 0x1f) = fVar4;
        *(float *)((int)puVar9 + 0xfc) = fVar3;
        *(float *)(puVar9 + 0x20) = fVar5 - fVar7;
        uVar24 = (ulonglong)(*(uint *)(puVar9 + 0x1f) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar9 + 0x20) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0xfc) >> 0x1d) & 4;
        uVar15 = uVar24 << 2 | 0x735900;
        fVar4 = ABS(*(float *)(puVar9 + 0x1f));
        if (*(float *)(puVar9 + 0x20) - 0.0 < 0.0) {
          fVar4 = fVar7;
        }
        fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
        fVar7 = ABS(*(float *)((int)puVar9 + 0xfc));
        if (*(float *)(puVar9 + 0x20) - 0.0 < 0.0) {
          fVar7 = fVar5;
        }
        fVar5 = *(float *)((int)uVar15 + 4);
        if (0.0 < fVar4) {
          lVar16 = uVar14 - 0x230;
          lVar20 = uVar14 - 0x70;
          lVar22 = uVar14 - 0x60;
          lVar26 = 2;
          fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
          fVar7 = fVar4 * fVar4;
          *(float *)((int)puVar9 + 0x1dc) = fVar4;
          *(float *)((int)puVar9 + 0x1d4) = fVar4;
          *(float *)(puVar9 + 0x3b) = fVar4;
          *(float *)(puVar9 + 0x3a) = fVar4;
          fVar4 = fVar7 * fVar7;
          *(float *)((int)puVar9 + 0x1d4) = *(float *)((int)puVar9 + 0x1d4) * fVar7;
          *(float *)(puVar9 + 0x3b) = *(float *)(puVar9 + 0x3b) * fVar4;
          *(float *)((int)puVar9 + 0x1dc) = *(float *)((int)puVar9 + 0x1dc) * fVar4 * fVar7;
          do {
            *(float *)((int)lVar16 + 0x1d0) = *(float *)((int)lVar16 + 0x1c0) * fVar4 * fVar4;
            iVar18 = (int)lVar20;
            lVar16 = lVar16 + 8;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar4 * fVar4;
            lVar22 = lVar22 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar26 = 4;
          lVar22 = uVar14 - 0x70;
          uVar15 = ZEXT48(&DAT_007358e0);
          lVar16 = lVar17;
          lVar20 = lVar22;
          do {
            pfVar23 = (float *)uVar15;
            fVar4 = pfVar23[1];
            uVar15 = uVar15 + 8;
            *(float *)((int)lVar16 + 0x1d0) = *(float *)((int)lVar16 + 0x1d0) * *pfVar23;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar4;
            lVar20 = lVar20 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar20 = 2;
          lVar16 = lVar17;
          do {
            iVar18 = (int)lVar16;
            iVar10 = (int)lVar22;
            lVar16 = lVar16 + 0x10;
            lVar22 = lVar22 + 0x10;
            dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar18 + 0x1d0)) +
                              *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                             *(float *)(iVar10 + 0xc));
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar3 + fVar5);
        }
        mobyutil::MB_StartKick(dVar27,moby,uVar25 + 0x50,uVar15,4,5,0);
        pfVar21[0x28] = 2.0;
        pfVar21[0x29] = 8.0;
        moby->state = '\x06';
      }
      else {
        auVar31 = ZEXT416(0xffffffff);
        auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
        auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
        auVar31 = loadVectorLeftIndexed(0xc,0x323b90);
        auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar31 = vectorMultiplyAddFloatingPoint
                            (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                             auVar32);
        auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
        auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar8 = storeVectorElementWordIndexed
                          (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x124,
                           uVar25);
        *(undefined4 *)((uint)(pfVar21 + 0x49) & 0xfffffffc) = uVar8;
        *(undefined1 *)((int)pfVar21 + 0x47) = 0x5a;
        fVar4 = (moby->pos).x - g_heroPosition.x;
        fVar3 = (moby->pos).y - g_heroPosition.y;
        fVar5 = ABS(fVar4);
        fVar7 = ABS(fVar3);
        *(float *)((int)puVar9 + 0xec) = fVar4;
        *(float *)(puVar9 + 0x1e) = fVar3;
        *(float *)((int)puVar9 + 0xf4) = fVar5 - fVar7;
        uVar24 = (ulonglong)(*(uint *)((int)puVar9 + 0xec) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0xf4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar9 + 0x1e) >> 0x1d) & 4;
        uVar15 = uVar24 << 2 | 0x735900;
        fVar4 = ABS(*(float *)((int)puVar9 + 0xec));
        if (*(float *)((int)puVar9 + 0xf4) - 0.0 < 0.0) {
          fVar4 = fVar7;
        }
        fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
        fVar7 = ABS(*(float *)(puVar9 + 0x1e));
        if (*(float *)((int)puVar9 + 0xf4) - 0.0 < 0.0) {
          fVar7 = fVar5;
        }
        fVar5 = *(float *)((int)uVar15 + 4);
        if (0.0 < fVar4) {
          lVar16 = uVar14 - 0x230;
          lVar22 = uVar14 - 0x80;
          lVar20 = uVar14 - 0x90;
          lVar26 = 2;
          fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
          fVar7 = fVar4 * fVar4;
          *(float *)((int)puVar9 + 0x1bc) = fVar4;
          *(float *)((int)puVar9 + 0x1b4) = fVar4;
          *(float *)(puVar9 + 0x37) = fVar4;
          *(float *)(puVar9 + 0x36) = fVar4;
          fVar4 = fVar7 * fVar7;
          *(float *)((int)puVar9 + 0x1b4) = *(float *)((int)puVar9 + 0x1b4) * fVar7;
          *(float *)(puVar9 + 0x37) = *(float *)(puVar9 + 0x37) * fVar4;
          *(float *)((int)puVar9 + 0x1bc) = *(float *)((int)puVar9 + 0x1bc) * fVar4 * fVar7;
          do {
            *(float *)((int)lVar16 + 0x1b0) = *(float *)((int)lVar16 + 0x1a0) * fVar4 * fVar4;
            iVar18 = (int)lVar20;
            lVar20 = lVar20 + 8;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar4 * fVar4;
            lVar22 = lVar22 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar26 = 4;
          lVar22 = uVar14 - 0x90;
          uVar15 = ZEXT48(&DAT_007358e0);
          lVar16 = lVar17;
          lVar20 = lVar22;
          do {
            pfVar23 = (float *)uVar15;
            fVar4 = pfVar23[1];
            uVar15 = uVar15 + 8;
            *(float *)((int)lVar16 + 0x1b0) = *(float *)((int)lVar16 + 0x1b0) * *pfVar23;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar4;
            lVar20 = lVar20 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar20 = 2;
          lVar16 = lVar17;
          do {
            iVar18 = (int)lVar16;
            iVar10 = (int)lVar22;
            lVar16 = lVar16 + 0x10;
            lVar22 = lVar22 + 0x10;
            dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar18 + 0x1b0)) +
                              *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                             *(float *)(iVar10 + 0xc));
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar3 + fVar5);
        }
        mobyutil::MB_StartKick(dVar27,moby,uVar25 + 0x50,uVar15,3,5,0);
        pfVar21[0x28] = 2.0;
        pfVar21[0x29] = 8.0;
        moby->state = '\a';
      }
    }
    mobyutil::MB_UpdateLightsTransition(moby,uVar25 + 0x40);
  }
  bVar1 = moby->state;
  moby->damage = -1;
  if (bVar1 < 5) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        moby->state = '\x01';
        mobyutil::MB_InitDefaultParams(pfVar21 + 0x2c);
        mobyfunc::SetColorOfMoby(moby,0x7f,0x7f,0x7f);
        auVar31 = ZEXT416(0xffffffff);
        auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
        pfVar21[0x2f] = 2.0;
        pfVar21[0x2e] = 2.0;
        auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
        fVar4 = pfVar21[0x48] * mobyutil::g_FrameTime;
        *pfVar21 = 5.0;
        pfVar21[0x49] = 0.0;
        pfVar21[0x2c] = 1.27378e-42;
        pfVar21[0x35] = fVar4;
        pfVar21[0x40] = (moby->pos).x;
        pfVar21[0x41] = (moby->pos).y;
        pfVar21[0x42] = (moby->pos).z;
        pfVar21[0x43] = (moby->pos).w;
        auVar31 = loadVectorLeftIndexed(0xc,0x323b90);
        auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar31 = vectorMultiplyAddFloatingPoint
                            (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                             auVar32);
        auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
        auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar8 = storeVectorElementWordIndexed
                          (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x110,
                           uVar25);
        *(undefined4 *)((uint)(pfVar21 + 0x44) & 0xfffffffc) = uVar8;
        if (moby->animationId != '\x01') {
          mobyutil::MB_SetAnimation(moby,1,0,3);
        }
      }
      else {
        fVar4 = g_heroPosition.x - (moby->pos).x;
        fVar3 = g_heroPosition.y - (moby->pos).y;
        pfVar21 = (float *)&mobyutil::g_atanQuadrantTable;
        fVar5 = ABS(fVar4);
        fVar7 = ABS(fVar3);
        *(float *)((int)puVar9 + 0xd4) = fVar4;
        *(float *)(puVar9 + 0x1b) = fVar3;
        *(float *)((int)puVar9 + 0xdc) = fVar5 - fVar7;
        dVar28 = 0.0;
        uVar15 = (ulonglong)(*(uint *)((int)puVar9 + 0xd4) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0xdc) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar9 + 0x1b) >> 0x1d) & 4;
        fVar4 = ABS(*(float *)((int)puVar9 + 0xd4));
        if (*(float *)((int)puVar9 + 0xdc) - 0.0 < 0.0) {
          fVar4 = fVar7;
        }
        fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
        fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
        fVar6 = ABS(*(float *)(puVar9 + 0x1b));
        if (*(float *)((int)puVar9 + 0xdc) - 0.0 < 0.0) {
          fVar6 = fVar5;
        }
        if (0.0 < fVar4) {
          lVar16 = uVar14 - 0x230;
          lVar22 = uVar14 - 0xc0;
          lVar20 = uVar14 - 0xd0;
          lVar26 = 2;
          fVar4 = (fVar6 - fVar4) / (fVar6 + fVar4);
          fVar5 = fVar4 * fVar4;
          *(float *)((int)puVar9 + 0x17c) = fVar4;
          *(float *)((int)puVar9 + 0x174) = fVar4;
          *(float *)(puVar9 + 0x2f) = fVar4;
          *(float *)(puVar9 + 0x2e) = fVar4;
          fVar4 = fVar5 * fVar5;
          *(float *)((int)puVar9 + 0x174) = *(float *)((int)puVar9 + 0x174) * fVar5;
          *(float *)(puVar9 + 0x2f) = *(float *)(puVar9 + 0x2f) * fVar4;
          *(float *)((int)puVar9 + 0x17c) = *(float *)((int)puVar9 + 0x17c) * fVar4 * fVar5;
          do {
            *(float *)((int)lVar16 + 0x170) = *(float *)((int)lVar16 + 0x160) * fVar4 * fVar4;
            iVar18 = (int)lVar20;
            lVar20 = lVar20 + 8;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar4 * fVar4;
            lVar22 = lVar22 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar26 = 4;
          lVar22 = uVar14 - 0xd0;
          pfVar21 = (float *)&DAT_007358e0;
          lVar16 = lVar17;
          lVar20 = lVar22;
          do {
            fVar4 = *pfVar21;
            fVar5 = pfVar21[1];
            pfVar21 = pfVar21 + 2;
            *(float *)((int)lVar16 + 0x170) = *(float *)((int)lVar16 + 0x170) * fVar4;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar5;
            lVar20 = lVar20 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar16 = 2;
          do {
            iVar18 = (int)lVar17;
            lVar17 = lVar17 + 0x10;
            iVar10 = (int)lVar22;
            lVar22 = lVar22 + 0x10;
            dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar18 + 0x170)) +
                              *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                             *(float *)(iVar10 + 0xc));
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar7 + fVar3);
        }
        mobyutil::OrganicDeltAngSpeed
                  (dVar28,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,moby,pfVar21,
                   uVar25 + 0x114);
        fVar4 = (moby->pos).y - g_heroPosition.y;
        fVar3 = (moby->pos).x - g_heroPosition.x;
        if ((SQRT(fVar3 * fVar3 + fVar4 * fVar4) < 8.0) &&
           (moby->state = '\x02', moby->animationId != '\0')) {
          mobyutil::MB_SetAnimation(moby,0,0,3);
        }
      }
    }
    else if (bVar1 < 3) {
      fVar4 = g_heroPosition.x - (moby->pos).x;
      fVar3 = g_heroPosition.y - (moby->pos).y;
      pfVar23 = (float *)&mobyutil::g_atanQuadrantTable;
      fVar5 = ABS(fVar4);
      fVar7 = ABS(fVar3);
      *(float *)(puVar9 + 0x19) = fVar4;
      *(float *)((int)puVar9 + 0xcc) = fVar3;
      *(float *)(puVar9 + 0x1a) = fVar5 - fVar7;
      dVar28 = 0.0;
      uVar15 = (ulonglong)(*(uint *)(puVar9 + 0x19) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x1a) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0xcc) >> 0x1d) & 4;
      fVar4 = ABS(*(float *)(puVar9 + 0x19));
      if (*(float *)(puVar9 + 0x1a) - 0.0 < 0.0) {
        fVar4 = fVar7;
      }
      fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
      fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      fVar6 = ABS(*(float *)((int)puVar9 + 0xcc));
      if (*(float *)(puVar9 + 0x1a) - 0.0 < 0.0) {
        fVar6 = fVar5;
      }
      if (0.0 < fVar4) {
        lVar16 = uVar14 - 0x230;
        lVar20 = uVar14 - 0xf0;
        lVar22 = uVar14 - 0xe0;
        lVar26 = 2;
        fVar4 = (fVar6 - fVar4) / (fVar6 + fVar4);
        fVar5 = fVar4 * fVar4;
        *(float *)((int)puVar9 + 0x15c) = fVar4;
        *(float *)((int)puVar9 + 0x154) = fVar4;
        *(float *)(puVar9 + 0x2b) = fVar4;
        *(float *)(puVar9 + 0x2a) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)((int)puVar9 + 0x154) = *(float *)((int)puVar9 + 0x154) * fVar5;
        *(float *)(puVar9 + 0x2b) = *(float *)(puVar9 + 0x2b) * fVar4;
        *(float *)((int)puVar9 + 0x15c) = *(float *)((int)puVar9 + 0x15c) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar16 + 0x150) = *(float *)((int)lVar16 + 0x140) * fVar4 * fVar4;
          iVar18 = (int)lVar20;
          lVar16 = lVar16 + 8;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar4 * fVar4;
          lVar22 = lVar22 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar26 = 4;
        lVar22 = uVar14 - 0xf0;
        pfVar23 = (float *)&DAT_007358e0;
        lVar16 = lVar17;
        lVar20 = lVar22;
        do {
          fVar4 = *pfVar23;
          fVar5 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar16 + 0x150) = *(float *)((int)lVar16 + 0x150) * fVar4;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar5;
          lVar20 = lVar20 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar16 = 2;
        do {
          iVar18 = (int)lVar17;
          iVar10 = (int)lVar22;
          lVar17 = lVar17 + 0x10;
          lVar22 = lVar22 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar18 + 0x150)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar7 + fVar3);
      }
      mobyutil::OrganicDeltAngSpeed
                (dVar28,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,moby,pfVar23,
                 uVar25 + 0x114);
      fVar4 = (moby->rotation).z;
      fVar3 = fVar4 + 1.5707963;
      fVar7 = 3.1415925 - fVar4;
      if (fVar4 - (3.1415925 - fVar4) < 0.0) {
        fVar7 = fVar4;
      }
      fVar5 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar5 = fVar3;
      }
      fVar6 = -3.1415925 - fVar4;
      if ((-3.1415925 - fVar4) - fVar7 < 0.0) {
        fVar6 = fVar7;
      }
      fVar4 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
        fVar4 = fVar5;
      }
      fVar3 = fVar6 * fVar6;
      fVar7 = fVar4 * fVar4;
      fVar12 = fVar3 * fVar3 * fVar6;
      *(undefined4 *)(puVar9 + 0xf) = 0;
      fVar5 = fVar7 * fVar7 * fVar4;
      fVar13 = fVar3 * fVar12;
      fVar11 = fVar7 * fVar5;
      *(float *)((int)puVar9 + 0x74) =
           (fVar3 * fVar13 * 2.601887e-06 +
           fVar13 * -0.0001980741 + fVar12 * 0.0083330255 + fVar3 * fVar6 * -0.16666657 + fVar6) *
           2.0;
      *(float *)(puVar9 + 0xe) =
           (fVar7 * fVar11 * 2.601887e-06 +
           fVar11 * -0.0001980741 + fVar5 * 0.0083330255 + fVar7 * fVar4 * -0.16666657 + fVar4) *
           2.0;
      mobyutil::MB_UpdateNavMove
                (0x3ff0000000000000,moby,(MobyInstance *)(pfVar21 + 0x2c),puVar9 + 0xe,puVar9 + 0x10
                );
      fVar4 = (moby->pos).y - g_heroPosition.y;
      fVar3 = (moby->pos).x - g_heroPosition.x;
      fVar4 = SQRT(fVar3 * fVar3 + fVar4 * fVar4);
      if (4.0 <= fVar4) {
        if ((8.0 < fVar4) && (moby->state = '\x01', moby->animationId != '\x01')) {
          mobyutil::MB_SetAnimation(moby,1,0,3);
        }
      }
      else {
        moby->state = '\x04';
        if (moby->animationId != '\x02') {
          mobyutil::MB_SetAnimation(moby,2,0,3);
        }
      }
    }
    else if (3 < bVar1) {
      fVar4 = g_heroPosition.x - (moby->pos).x;
      fVar3 = g_heroPosition.y - (moby->pos).y;
      fVar5 = ABS(fVar4);
      fVar7 = ABS(fVar3);
      *(float *)((int)puVar9 + 0xbc) = fVar4;
      *(float *)(puVar9 + 0x18) = fVar3;
      *(float *)((int)puVar9 + 0xc4) = fVar5 - fVar7;
      dVar28 = 0.0;
      uVar15 = (ulonglong)(*(uint *)((int)puVar9 + 0xbc) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar9 + 0xc4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar9 + 0x18) >> 0x1d) & 4;
      fVar4 = ABS(*(float *)((int)puVar9 + 0xbc));
      if (*(float *)((int)puVar9 + 0xc4) - 0.0 < 0.0) {
        fVar4 = fVar7;
      }
      fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
      fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      fVar6 = ABS(*(float *)(puVar9 + 0x18));
      if (*(float *)((int)puVar9 + 0xc4) - 0.0 < 0.0) {
        fVar6 = fVar5;
      }
      dVar27 = dVar28;
      if (0.0 < fVar4) {
        lVar16 = uVar14 - 0x230;
        lVar22 = uVar14 - 0x100;
        lVar20 = uVar14 - 0x110;
        lVar26 = 2;
        fVar4 = (fVar6 - fVar4) / (fVar6 + fVar4);
        fVar5 = fVar4 * fVar4;
        *(float *)((int)puVar9 + 0x13c) = fVar4;
        *(float *)((int)puVar9 + 0x134) = fVar4;
        *(float *)(puVar9 + 0x27) = fVar4;
        *(float *)(puVar9 + 0x26) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)((int)puVar9 + 0x134) = *(float *)((int)puVar9 + 0x134) * fVar5;
        *(float *)(puVar9 + 0x27) = *(float *)(puVar9 + 0x27) * fVar4;
        *(float *)((int)puVar9 + 0x13c) = *(float *)((int)puVar9 + 0x13c) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar16 + 0x130) = *(float *)((int)lVar16 + 0x120) * fVar4 * fVar4;
          iVar18 = (int)lVar20;
          lVar20 = lVar20 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar4 * fVar4;
          lVar22 = lVar22 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar26 = 4;
        lVar22 = uVar14 - 0x110;
        pfVar21 = (float *)&DAT_007358e0;
        lVar16 = lVar17;
        lVar20 = lVar22;
        do {
          fVar4 = *pfVar21;
          fVar5 = pfVar21[1];
          pfVar21 = pfVar21 + 2;
          *(float *)((int)lVar16 + 0x130) = *(float *)((int)lVar16 + 0x130) * fVar4;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar5;
          lVar20 = lVar20 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar20 = 2;
        lVar16 = lVar17;
        do {
          iVar18 = (int)lVar16;
          iVar10 = (int)lVar22;
          lVar16 = lVar16 + 0x10;
          lVar22 = lVar22 + 0x10;
          dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar18 + 0x130)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar7 + fVar3);
      }
      mobyutil::OrganicDeltAngSpeed
                (dVar27,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,moby,&DAT_00323b90,
                 uVar25 + 0x114);
      if ((moby->updateId == moby->animationId) &&
         (dVar27 = (double)mobyfunc::BlendAnimFrame(moby), 16.0 <= dVar27)) {
        dVar27 = (double)mobyfunc::BlendAnimFrame(moby);
        fVar4 = (moby->rotation).z;
        if ((dVar27 < 21.0) && (ABS((moby->pos).z - g_heroPosition.z) < 2.0)) {
          fVar3 = (moby->pos).y;
          fVar7 = (moby->pos).x;
          fVar5 = fVar3 - g_heroPosition.y;
          fVar6 = fVar7 - g_heroPosition.x;
          if (SQRT(fVar6 * fVar6 + fVar5 * fVar5) < 5.0) {
            fVar7 = g_heroPosition.x - fVar7;
            fVar3 = g_heroPosition.y - fVar3;
            dVar29 = ABS((double)fVar7);
            dVar30 = ABS((double)fVar3);
            *(float *)(puVar9 + 0x16) = fVar7;
            *(float *)((int)puVar9 + 0xb4) = fVar3;
            *(float *)(puVar9 + 0x17) = (float)(dVar29 - dVar30);
            uVar15 = (ulonglong)(*(uint *)(puVar9 + 0x16) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)(puVar9 + 0x17) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)((int)puVar9 + 0xb4) >> 0x1d) & 4;
            dVar27 = ABS((double)*(float *)(puVar9 + 0x16));
            if ((double)*(float *)(puVar9 + 0x17) - dVar28 < 0.0) {
              dVar27 = dVar30;
            }
            fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
            dVar30 = ABS((double)*(float *)((int)puVar9 + 0xb4));
            if ((double)*(float *)(puVar9 + 0x17) - dVar28 < 0.0) {
              dVar30 = dVar29;
            }
            fVar7 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
            if (dVar28 < dVar27) {
              lVar16 = uVar14 - 0x230;
              lVar20 = uVar14 - 0x130;
              lVar22 = uVar14 - 0x120;
              lVar26 = 2;
              fVar5 = (float)(dVar30 - dVar27) / (float)(dVar30 + dVar27);
              fVar6 = fVar5 * fVar5;
              *(float *)((int)puVar9 + 0x11c) = fVar5;
              *(float *)((int)puVar9 + 0x114) = fVar5;
              *(float *)(puVar9 + 0x23) = fVar5;
              *(float *)(puVar9 + 0x22) = fVar5;
              fVar5 = fVar6 * fVar6;
              *(float *)((int)puVar9 + 0x114) = *(float *)((int)puVar9 + 0x114) * fVar6;
              *(float *)(puVar9 + 0x23) = *(float *)(puVar9 + 0x23) * fVar5;
              *(float *)((int)puVar9 + 0x11c) = *(float *)((int)puVar9 + 0x11c) * fVar5 * fVar6;
              do {
                *(float *)((int)lVar16 + 0x110) = *(float *)((int)lVar16 + 0x100) * fVar5 * fVar5;
                iVar18 = (int)lVar20;
                lVar16 = lVar16 + 8;
                lVar20 = lVar20 + 8;
                *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
                lVar22 = lVar22 + 8;
                lVar26 = lVar26 + -1;
              } while (lVar26 != 0);
              lVar26 = 4;
              lVar22 = uVar14 - 0x130;
              pfVar21 = (float *)&DAT_007358e0;
              lVar16 = lVar17;
              lVar20 = lVar22;
              do {
                fVar5 = *pfVar21;
                fVar6 = pfVar21[1];
                pfVar21 = pfVar21 + 2;
                *(float *)((int)lVar16 + 0x110) = *(float *)((int)lVar16 + 0x110) * fVar5;
                lVar16 = lVar16 + 8;
                *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
                lVar20 = lVar20 + 8;
                lVar26 = lVar26 + -1;
              } while (lVar26 != 0);
              lVar16 = 2;
              do {
                iVar18 = (int)lVar17;
                iVar10 = (int)lVar22;
                lVar17 = lVar17 + 0x10;
                lVar22 = lVar22 + 0x10;
                dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar18 + 0x110)) +
                                  *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                                 *(float *)(iVar10 + 0xc));
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
              dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar3 + fVar7);
            }
            dVar28 = (double)fastfunc::FastSubRots((float)dVar28,fVar4);
            victim = g_heroMobyPtr;
            if (dVar28 < 0.2617993950843811) {
              fVar4 = (moby->rotation).z;
              fVar3 = fVar4 + 1.5707963;
              fVar7 = 3.1415925 - fVar4;
              if (fVar4 - (3.1415925 - fVar4) < 0.0) {
                fVar7 = fVar4;
              }
              fVar5 = 3.1415925 - fVar3;
              if (fVar3 - (3.1415925 - fVar3) < 0.0) {
                fVar5 = fVar3;
              }
              fVar6 = -3.1415925 - fVar4;
              if ((-3.1415925 - fVar4) - fVar7 < 0.0) {
                fVar6 = fVar7;
              }
              fVar4 = -3.1415925 - fVar3;
              if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
                fVar4 = fVar5;
              }
              fVar3 = fVar6 * fVar6;
              fVar7 = fVar4 * fVar4;
              fVar12 = fVar3 * fVar3 * fVar6;
              *(undefined4 *)(puVar9 + 0x13) = 0;
              fVar5 = fVar7 * fVar7 * fVar4;
              fVar13 = fVar3 * fVar12;
              fVar11 = fVar7 * fVar5;
              *(float *)((int)puVar9 + 0x94) =
                   (fVar3 * fVar13 * 2.601887e-06 +
                   fVar13 * -0.0001980741 +
                   fVar12 * 0.0083330255 + fVar3 * fVar6 * -0.16666657 + fVar6) * 0.2;
              *(float *)(puVar9 + 0x12) =
                   (fVar7 * fVar11 * 2.601887e-06 +
                   fVar11 * -0.0001980741 +
                   fVar5 * 0.0083330255 + fVar7 * fVar4 * -0.16666657 + fVar4) * 0.2;
              *(f32 *)(puVar9 + 0x14) = (victim->pos).x;
              *(f32 *)((int)puVar9 + 0xa4) = (victim->pos).y;
              fVar4 = (victim->pos).z;
              *(float *)(puVar9 + 0x15) = fVar4;
              *(f32 *)((int)puVar9 + 0xac) = (victim->pos).w;
              *(float *)(puVar9 + 0x15) = fVar4 + 0.75;
              mobyutil::CollDamageMobyDirect
                        (1.0,victim,moby,1,0x323b90,(float *)(puVar9 + 0x14),
                         (float *)(puVar9 + 0x12));
            }
          }
        }
      }
      if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x01', moby->animationId != '\x01')) {
        mobyutil::MB_SetAnimation(moby,1,0,3);
      }
    }
  }
  else if (bVar1 < 8) {
    if (bVar1 < 6) {
      uVar19 = mobyutil::MB_UpdateKick(moby,(KickVars *)(pfVar21 + 0x14));
      uVar2 = moby->animationId;
      if ((uVar19 & 1) != 0) {
        fVar3 = (moby->pos).y - g_heroPosition.y;
        fVar7 = (moby->pos).x - g_heroPosition.x;
        fVar4 = (moby->pos).z;
        fVar3 = SQRT(fVar7 * fVar7 + fVar3 * fVar3);
        if (((fVar3 < 5.0) && (ABS(fVar4 - g_heroPosition.z) < 4.0)) && (pfVar21[0x4a] == 0.0)) {
          moby->state = '\x04';
          if (uVar2 == '\x02') {
            return;
          }
          mobyutil::MB_SetAnimation(moby,2,5,3);
          return;
        }
        if (((fVar3 < 8.0) && (ABS(fVar4 - g_heroPosition.z) < 4.0)) && (pfVar21[0x4a] == 0.0)) {
          moby->state = '\x02';
          if (uVar2 == '\0') {
            return;
          }
          mobyutil::MB_SetAnimation(moby,0,5,3);
          return;
        }
        moby->state = '\x01';
        if (uVar2 == '\x01') {
          return;
        }
        mobyutil::MB_SetAnimation(moby,1,5,3);
        return;
      }
      if ((int)(moby->pos).z < 0) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
    else if (bVar1 < 7) {
      uVar19 = mobyutil::MB_UpdateKick(moby,(KickVars *)(pfVar21 + 0x14));
      uVar2 = moby->animationId;
      if ((uVar19 & 0x40) != 0) {
        fVar3 = (moby->pos).y - g_heroPosition.y;
        fVar7 = (moby->pos).x - g_heroPosition.x;
        fVar4 = (moby->pos).z;
        fVar3 = SQRT(fVar7 * fVar7 + fVar3 * fVar3);
        if (((fVar3 < 5.0) && (ABS(fVar4 - g_heroPosition.z) < 4.0)) && (pfVar21[0x4a] == 0.0)) {
          moby->state = '\x04';
          if (uVar2 == '\x02') {
            return;
          }
          mobyutil::MB_SetAnimation(moby,2,5,3);
          return;
        }
        if (((fVar3 < 8.0) && (ABS(fVar4 - g_heroPosition.z) < 4.0)) && (pfVar21[0x4a] == 0.0)) {
          moby->state = '\x02';
          if (uVar2 == '\0') {
            return;
          }
          mobyutil::MB_SetAnimation(moby,0,5,3);
          return;
        }
        moby->state = '\x01';
        if (uVar2 == '\x01') {
          return;
        }
        mobyutil::MB_SetAnimation(moby,1,5,3);
        return;
      }
      if ((int)(moby->pos).z < 0) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
    else {
      uVar19 = mobyutil::MB_UpdateKick(moby,(KickVars *)(pfVar21 + 0x14));
      if ((uVar19 & 0x40) == 0) {
        if ((int)(moby->pos).z < 0) {
          mobyfunc::DeleteMoby(moby);
          return;
        }
      }
      else {
        moby->state = '\b';
        if (moby->animationId != '\x01') {
          mobyutil::MB_SetAnimation(moby,1,0,3);
        }
      }
    }
  }
  else if (bVar1 < 9) {
    dVar28 = (double)mobyfunc::BlendAnimFrame(moby);
    uVar2 = moby->animationId;
    if (dVar28 == 20.0) {
      fVar3 = (moby->pos).y - g_heroPosition.y;
      fVar7 = (moby->pos).x - g_heroPosition.x;
      fVar4 = (moby->pos).z;
      fVar3 = SQRT(fVar7 * fVar7 + fVar3 * fVar3);
      if (((fVar3 < 5.0) && (ABS(fVar4 - g_heroPosition.z) < 4.0)) && (pfVar21[0x4a] == 0.0)) {
        moby->state = '\x04';
        if (uVar2 == '\x02') {
          return;
        }
        mobyutil::MB_SetAnimation(moby,2,5,3);
        return;
      }
      if (((fVar3 < 8.0) && (ABS(fVar4 - g_heroPosition.z) < 4.0)) && (pfVar21[0x4a] == 0.0)) {
        moby->state = '\x02';
        if (uVar2 == '\0') {
          return;
        }
        mobyutil::MB_SetAnimation(moby,0,5,3);
        return;
      }
      moby->state = '\x01';
      if (uVar2 == '\x01') {
        return;
      }
      mobyutil::MB_SetAnimation(moby,1,5,3);
      return;
    }
  }
  else if (bVar1 < 10) {
    uVar19 = mobyutil::MB_UpdateKick(moby,(KickVars *)(pfVar21 + 0x14));
    if ((uVar19 & 0x40) != 0) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
    if ((int)(moby->pos).z < 0) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  mobyutil::MB_ColorDyingMoby(moby,uVar25 + 0x40);
  return;
}



//==== 003258b4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1299_003258b4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1299_003258b4(void)

{
  DAT_008001a0 = 0x10000;
  return;
}



//==== 003258d0  ns=mobyupdate_helpers  size=0x13c
// sig: undefined M1299_003258d0(void)
// callers(1): 00325a50 mobyupdate_unsorted::UpdateMoby_{276_1298_1299}
// callees(4): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 0010c000 mobyutil::MB_CopyHeroLights; 005c8318 rand

longlong mobyupdate_helpers::M1299_003258d0(int param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  uint uVar4;
  undefined8 in_LR;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  MobyInstance *pMVar3;
  
  pMVar3 = mobyfunc::CreateMoby((MOBY_OCLASSES)param_2);
  lVar2 = (longlong)(int)pMVar3;
  if (pMVar3 != (MobyInstance *)0x0) {
    auVar5 = ZEXT416(0xffffffff);
    auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = 0xff;
    pMVar3->enabled = '\x01';
    pMVar3->state = '\0';
    auVar6 = vectorShiftLeftIntegerWord(auVar5,auVar5);
    (pMVar3->pos).x = *(f32 *)(param_1 + 0x10);
    (pMVar3->pos).y = *(f32 *)(param_1 + 0x14);
    (pMVar3->pos).z = *(f32 *)(param_1 + 0x18);
    (pMVar3->pos).w = *(f32 *)(param_1 + 0x1c);
    (pMVar3->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar3->rotation).y = *(f32 *)(param_1 + 0x44);
    (pMVar3->rotation).z = *(f32 *)(param_1 + 0x48);
    (pMVar3->rotation).w = *(f32 *)(param_1 + 0x4c);
    auVar5 = loadVectorLeftIndexed(in_LR,0x3258c8);
    auVar7 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar5 = vectorMultiplyAddFloatingPoint
                       (auVar7,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar6);
    auVar5 = vectorConvertToSignedFixedPointWordSaturate(auVar5,0);
    auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xff;
    cVar1 = storeVectorElementByteIndexed
                      (auVar5 | auVar5 << 8 | auVar5 << 0x10 | auVar5 << 0x18 | auVar5 << 0x20 |
                       auVar5 << 0x28 | auVar5 << 0x30 | auVar5 << 0x38 | auVar5 << 0x40 |
                       auVar5 << 0x48 | auVar5 << 0x50 | auVar5 << 0x58 | auVar5 << 0x60 |
                       auVar5 << 0x68 | auVar5 << 0x70 | auVar5 << 0x78,0xbc,lVar2);
    pMVar3->setByGroup = cVar1;
    mobyfunc::UpdateMobyTransform(pMVar3);
    mobyutil::MB_CopyHeroLights(lVar2);
    pMVar3->modeBits = *(MobyModeBit *)(param_1 + 0x34);
    if ((param_2 == 0x514) && (uVar4 = rand(), (uVar4 & 1) != 0)) {
      pMVar3->modeBits = pMVar3->modeBits | MIRROR;
    }
  }
  return lVar2;
}



//==== 00325a50  ns=mobyupdate_unsorted  size=0x774
// sig: undefined UpdateMoby_{276_1298_1299}(MobyInstance * moby)
// callers(0): 
// callees(12): 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 0010675c mobyutil::MB_damage; 0010e030 mobyutil::MB_genericExplosion; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00110950 mobyutil::MB_RandomizeVector; 0015d12c sound::PlayMobySound; 003258d0 mobyupdate_helpers::M1299_003258d0; 00341590 FUN_00341590; 00500060 fastfunc::FastDecTimerS8

/* Moby 276
   Moby 1298
   Moby 1299 */

void mobyupdate_unsorted::UpdateMoby__276_1298_1299_(MobyInstance *moby)

{
  MOBY_OCLASSES MVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  float fVar8;
  longlong lVar9;
  int iVar11;
  int iVar12;
  undefined8 uVar10;
  int iVar13;
  double dVar14;
  undefined8 uVar15;
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
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float local_110;
  float local_10c;
  float local_108;
  f32 local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  double local_e0;
  double local_d8;
  float local_d0;
  
  lVar9 = (longlong)(int)moby;
  if ((moby->levelFlagIdx == 0xff) || (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1)) {
    iVar11 = mobyutil::MB_damage(lVar9,0x40000,0);
    bVar7 = false;
    if (moby->state == '\0') {
      moby->state = '\x01';
    }
    iVar12 = fastfunc::FastDecTimerS8(lVar9 + 0xbc);
    if ((iVar12 != 0) && (iVar11 != 0)) {
      MVar1 = moby->oClass;
      if ((short)MVar1 < 0x514) {
        uVar10 = 0x512;
        if ((short)MVar1 < 0x513) {
          if (0x511 < (short)MVar1) {
            uVar10 = 0x513;
          }
        }
        else if ((short)MVar1 < 0x514) {
          dVar17 = (double)(moby->pos).z;
          dVar27 = (double)(moby->pos).x;
          dVar26 = (double)(moby->pos).y;
          dVar25 = (double)(moby->pos).w;
          (moby->pos).z = (float)(dVar17 + 4.0);
          mobyutil::MB_SpawnBoltsFromCrate(lVar9,0,0xffffffffffffffff);
          (moby->pos).x = (float)dVar27;
          uVar10 = 0x514;
          (moby->pos).y = (float)dVar26;
          (moby->pos).z = (float)dVar17;
          (moby->pos).w = (float)dVar25;
        }
        iVar12 = mobyupdate_helpers::M1299_003258d0(lVar9,uVar10);
        if (iVar12 != 0) {
          bVar7 = true;
        }
      }
      auVar28 = ZEXT416(0xffffffff);
      auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
      auVar29 = vectorShiftLeftIntegerWord(auVar28,auVar28);
      auVar28 = loadVectorLeftIndexed(4,0x325a0c);
      auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar28 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
      local_108 = (moby->pos).z;
      local_110 = (moby->pos).x;
      dVar27 = (double)local_110;
      local_10c = (moby->pos).y;
      dVar26 = (double)local_10c;
      auVar28 = vectorMultiplyAddFloatingPoint
                          (auVar30,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,
                           auVar29);
      local_104 = (moby->pos).w;
      auVar28 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
      auVar28 = auVar28 >> 0x60 & (undefined1  [16])0xff;
      cVar2 = storeVectorElementByteIndexed
                        (auVar28 | auVar28 << 8 | auVar28 << 0x10 | auVar28 << 0x18 |
                         auVar28 << 0x20 | auVar28 << 0x28 | auVar28 << 0x30 | auVar28 << 0x38 |
                         auVar28 << 0x40 | auVar28 << 0x48 | auVar28 << 0x50 | auVar28 << 0x58 |
                         auVar28 << 0x60 | auVar28 << 0x68 | auVar28 << 0x70 | auVar28 << 0x78,0xbc,
                         lVar9);
      moby->setByGroup = cVar2;
      local_108 = local_108 + 1.25;
      dVar25 = (double)local_108;
      mobyutil::MB_RandomizeVector(0.4,&local_110);
      local_e4 = (float)dVar25;
      local_e0 = dVar26;
      local_d8 = dVar27;
      if ((short)moby->oClass < 0x513) {
        sound::PlayMobySound(0,0,moby);
      }
      else {
        sound::PlayMobySound(0,0,moby);
      }
      moby->damage = -1;
      fVar3 = GameCamera.posY - local_10c;
      fVar4 = GameCamera.posX - local_110;
      fVar5 = GameCamera.posZ - local_108;
      dVar26 = 2.0;
      dVar27 = 0.0;
      fVar6 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      fVar8 = 2.0 / fVar6;
      dVar25 = dVar27;
      if (0.0 - fVar6 < 0.0) {
        dVar25 = (double)(fVar8 * fVar5);
      }
      dVar17 = dVar27;
      if (0.0 - fVar6 < 0.0) {
        dVar17 = (double)(fVar8 * fVar3);
      }
      dVar18 = dVar27;
      if (0.0 - fVar6 < 0.0) {
        dVar18 = (double)(fVar8 * fVar4);
      }
      if (fVar6 - 0.0 < 0.0) {
        dVar25 = (double)(fVar8 * fVar5);
      }
      if (fVar6 - 0.0 < 0.0) {
        dVar17 = (double)(fVar8 * fVar3);
      }
      if (fVar6 - 0.0 < 0.0) {
        dVar18 = (double)(fVar8 * fVar4);
      }
      local_e8 = (float)dVar25;
      local_ec = (float)dVar17;
      local_f0 = (float)dVar18;
      dVar25 = 4.0;
      if (moby->oClass != DISPLAY) {
        dVar25 = dVar26;
      }
      dVar20 = -dVar25;
      iVar12 = 0;
      dVar17 = -0.5;
      dVar18 = 0.5;
      dVar19 = -2.0;
      uVar10 = 0x4008000000000000;
      dVar21 = 6.0;
      dVar22 = 10.0;
      dVar24 = 1.0;
      dVar23 = 1.600000023841858;
      do {
        local_100 = 0.0;
        local_fc = 0.0;
        local_f8 = 0.0;
        local_f4 = 0.0;
        dVar14 = (double)mobyutil::MB_randRangeFloat((float)dVar17,(float)dVar18);
        local_100 = (float)dVar14;
        dVar14 = (double)mobyutil::MB_randRangeFloat((float)dVar19,(float)dVar26);
        local_fc = (float)dVar14;
        dVar14 = (double)mobyutil::MB_randRangeFloat((float)dVar20,(float)dVar25);
        dVar16 = (double)local_100;
        local_100 = (moby->transform).v1.x * local_fc +
                    (float)((double)(moby->transform).v2.x * dVar14 +
                           (double)(float)((double)(moby->transform).v0.x * dVar16 + local_d8));
        local_f8 = (moby->transform).v1.z * local_fc +
                   (float)((double)(moby->transform).v2.z * dVar14 +
                          (double)(float)((double)(moby->transform).v0.z * dVar16 + (double)local_e4
                                         ));
        local_f4 = (float)((double)(moby->transform).v2.w * dVar14 +
                          (double)(float)((double)(moby->transform).v0.w * dVar16 +
                                         (double)((moby->transform).v1.w * local_fc))) + local_f4;
        local_fc = (moby->transform).v1.y * local_fc +
                   (float)((double)(moby->transform).v2.y * dVar14 +
                          (double)(float)((double)(moby->transform).v0.y * dVar16 + local_e0));
        local_d0 = local_f4;
        mobyutil::MB_randRangeFloat((float)dVar21,(float)dVar22);
        local_100 = local_100 + local_f0;
        local_fc = local_fc + local_ec;
        local_f8 = local_f8 + local_e8;
        if ((moby->oClass == DISPLAY_DAMAGED_0514) ||
           (iVar13 = mobyutil::MB_randInt(4), iVar13 == 0)) {
          mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar26);
          FUN_00341590(lVar9);
        }
        if (iVar12 % 3 == 0) {
          uVar15 = mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar23);
          mobyutil::MB_SpawnExplosionSparks(uVar15,dVar27,lVar9,&local_100);
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < 0x14);
      local_110 = local_110 + local_f0;
      local_10c = local_10c + local_ec;
      local_108 = local_108 + local_e8;
      mobyutil::MB_genericExplosion
                (dVar27,dVar27,uVar10,dVar26,dVar24,dVar24,0x402e000000000000,lVar9,iVar11 + 0x10,
                 &local_110,&DAT_00325a0c,1,10,3,0x10);
      if ((moby->oClass == DISPLAY_DAMAGED_0514) || (bVar7)) {
        mobyfunc::DeleteMoby(moby);
      }
    }
  }
  else {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 003261c4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1299_003261c4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1299_003261c4(void)

{
  DAT_00800210 = 0x10000;
  return;
}



//==== 003261d8  ns=mobyupdate_helpers  size=0x114
// sig: undefined M1299_003261d8(void)
// callers(0): 
// callees(2): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance *
mobyupdate_helpers::M1299_003261d8
          (double param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  byte bVar1;
  f32 fVar2;
  f32 fVar3;
  f32 fVar4;
  undefined4 *puVar5;
  MobyInstance *pMVar6;
  undefined8 uVar7;
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  
  pMVar6 = mobyfunc::CreateMoby(0x117);
  if (pMVar6 != (MobyInstance *)0x0) {
    pMVar6->updateDistance = *(char *)(param_2 + 0x30);
    bVar1 = *(byte *)(param_2 + 0x30);
    pMVar6->enabled = '\x01';
    pMVar6->drawDistance = (ushort)bVar1;
    fStack00000044 = (f32)param_4;
    fStack0000004c = (f32)param_5;
    (pMVar6->pos).y = fStack00000044;
    fVar2 = *(f32 *)(param_2 + 0x40);
    (pMVar6->pos).w = fStack0000004c;
    fVar3 = *(f32 *)(param_2 + 0x44);
    fVar4 = *(f32 *)(param_2 + 0x48);
    (pMVar6->rotation).x = fVar2;
    (pMVar6->rotation).y = fVar3;
    fVar2 = *(f32 *)(param_2 + 0x4c);
    (pMVar6->rotation).z = fVar4;
    puVar5 = (undefined4 *)pMVar6->pVar;
    uVar7 = *(undefined8 *)(param_2 + 0x38);
    (pMVar6->rotation).w = fVar2;
    fStack00000040 = (f32)((ulonglong)param_4 >> 0x20);
    fStack00000048 = (f32)((ulonglong)param_5 >> 0x20);
    (pMVar6->pos).x = fStack00000040;
    (pMVar6->pos).z = fStack00000048;
    (pMVar6->rotation).z = (float)param_1;
    pMVar6->color = (int)((ulonglong)uVar7 >> 0x20);
    pMVar6->light = (int)uVar7;
    *puVar5 = 0x40a00000;
    *(undefined2 *)(puVar5 + 1) = 5;
    *(undefined1 *)(puVar5 + 2) = 4;
    mobyfunc::UpdateMobyTransform(pMVar6);
  }
  return pMVar6;
}



//==== 00326338  ns=mobyupdate_unsorted  size=0x41c
// sig: undefined UpdateMoby_279(MobyInstance * moby)
// callers(0): 
// callees(7): 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 0010675c mobyutil::MB_damage; 0010c808 mobyutil::MB_UpdateLightsTransition; 00128248 partupd::SpawnPart_27; 0032dadc FUN_0032dadc

/* Moby 279 */

void mobyupdate_unsorted::UpdateMoby_279(MobyInstance *moby)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  int iVar5;
  undefined8 uVar4;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 local_b0 [32];
  
  lVar3 = (longlong)(int)moby;
  pfVar1 = (float *)moby->pVar;
  iVar5 = mobyutil::MB_damage(lVar3,0x10000,0);
  if (iVar5 != 0) {
    fVar2 = *pfVar1 - *(float *)(iVar5 + 0x2c);
    *pfVar1 = fVar2;
    if (fVar2 <= 0.0) {
      iVar5 = 0;
      dVar6 = -1.0;
      dVar7 = 1.0;
      dVar8 = 3.0;
      dVar9 = 6.0;
      dVar10 = 5.5;
      dVar11 = 10.5;
      dVar12 = 20000.0;
      dVar13 = 50000.0;
      do {
        mobyutil::MB_randRangeFloat((float)dVar6,(float)dVar7);
        mobyutil::MB_randRangeFloat((float)dVar6,(float)dVar7);
        mobyutil::MB_randRangeFloat((float)dVar6,(float)dVar7);
        mobyutil::MB_randRangeFloat
                  ((float)((double)mobyutil::g_FrameTime * dVar8),
                   (float)((double)mobyutil::g_FrameTime * dVar9));
        uVar4 = mobyutil::MB_randRange
                          ((int)((double)animationSpeed * dVar10),
                           (int)((double)animationSpeed * dVar11));
        mobyutil::MB_randRangeFloat((float)dVar12,(float)dVar13);
        partupd::SpawnPart_27(lVar3 + 0x10,local_b0,0x5f7f4f2f,uVar4);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x19);
      FUN_0032dadc((double)(moby->rotation).z,lVar3);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    *(undefined1 *)((int)pfVar1 + 0x47) = 0x46;
    mobyutil::MB_UpdateLightsTransition(lVar3,pfVar1 + 0x10);
  }
  moby->damage = -1;
  return;
}



//==== 00326788  ns=mobyupdate_helpers  size=0x3f4
// sig: undefined M28_00326788(void)
// callers(1): 00327f50 mobyupdate_unsorted::UpdateMoby_28
// callees(9): 0006d7a0 draw::RegisterPostPreDraw; 0006d7e0 draw::RegisterPostDraw; 000f1038 mobyfunc::GetBoneTransformations; 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe788 mobyutil::MB_randVector; 00133580 partupd::SpawnPart_69; 00502730 fastfunc::FastIntToDouble

void mobyupdate_helpers::M28_00326788(void *param_1)

{
  float fVar1;
  int iVar2;
  undefined2 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar12;
  undefined8 uVar11;
  int iVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  Vec4 VStack_c0;
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
  undefined4 local_74;
  
  iVar2 = *(int *)((int)param_1 + 0x78);
  draw::RegisterPostPreDraw(&PTR_M280_0032aa00_0070bf28,param_1);
  mobyfunc::GetBonePosition(param_1,1,&local_d0);
  fVar4 = local_cc - GameCamera.posY;
  fVar5 = local_d0 - GameCamera.posX;
  fVar9 = local_c8 - GameCamera.posZ;
  fVar1 = 0.0;
  fVar10 = SQRT(fVar9 * fVar9 + fVar5 * fVar5 + fVar4 * fVar4);
  fVar8 = -0.5 / fVar10;
  fVar6 = fVar1;
  if (0.0 - fVar10 < 0.0) {
    fVar6 = fVar5 * fVar8;
  }
  fVar7 = fVar1;
  if (0.0 - fVar10 < 0.0) {
    fVar7 = fVar4 * fVar8;
  }
  if (0.0 - fVar10 < 0.0) {
    fVar1 = fVar9 * fVar8;
  }
  if (fVar10 - 0.0 < 0.0) {
    fVar6 = fVar5 * fVar8;
  }
  if (fVar10 - 0.0 < 0.0) {
    fVar7 = fVar4 * fVar8;
  }
  if (fVar10 - 0.0 < 0.0) {
    fVar1 = fVar9 * fVar8;
  }
  *(float *)(iVar2 + 0x1e0) = local_d0 + fVar6;
  *(float *)(iVar2 + 0x1e4) = local_cc + fVar7;
  *(float *)(iVar2 + 0x1e8) = local_c8 + fVar1;
  *(undefined4 *)(iVar2 + 0x1ec) = local_c4;
  mobyutil::MB_randVector(0.004999999888241291,0.029999999329447746,&VStack_c0);
  iVar12 = partupd::SpawnPart_69(&local_d0,&VStack_c0,0x7f,param_1);
  if (iVar12 != 0) {
    dVar15 = (double)mobyutil::MB_randRangeFloat(6000.0,32000.0);
    *(float *)(iVar12 + 0xc) = (float)dVar15;
  }
  dVar15 = 80000.0;
  dVar17 = 120000.0;
  iVar12 = 0;
  auVar22 = loadVectorLeftIndexed(0x20,0x326758);
  dVar18 = 2.5;
  auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
  dVar19 = 1.0;
  do {
    uVar11 = partupd::SpawnPart_69(&local_d0,&DAT_00a15d30,0x7f,param_1);
    iVar14 = (int)uVar11;
    if (iVar14 != 0) {
      if ((iVar12 == 2) && (iVar13 = mobyutil::MB_randInt(8), iVar13 == 0)) {
        dVar16 = 180000.0;
      }
      else {
        dVar16 = (double)mobyutil::MB_randRangeFloat((float)dVar15,(float)dVar17);
      }
      auVar20 = ZEXT416(0xffffffff);
      auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
      *(float *)(iVar14 + 0xc) = (float)dVar16;
      auVar20 = vectorShiftLeftIntegerWord(auVar20,auVar20);
      auVar21 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      dVar16 = (double)animationSpeed;
      auVar20 = vectorMultiplyAddFloatingPoint(auVar21,auVar22,auVar20);
      auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
      auVar20 = vectorSplatHalfWord(auVar20,1);
      uVar3 = storeVectorElementHalfWordIndexed(auVar20,10,uVar11);
      *(undefined2 *)(iVar14 + 10) = uVar3;
      dVar16 = (double)fastfunc::FastIntToDouble((short)(int)(dVar16 * dVar18));
      *(undefined2 *)(iVar14 + 0x36) = 3;
      *(undefined **)(iVar14 + 0x38) = &DAT_007f7f7f;
      *(float *)(iVar14 + 0x30) = (float)(dVar19 / dVar16);
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 < 3);
  mobyfunc::GetBonePosition(param_1,6,iVar2 + 0x200);
  mobyfunc::GetBoneTransformations(param_1,7,&local_b0);
  fVar1 = DAT_00800240;
  *(float *)(iVar2 + 0x1f0) = local_b0 * DAT_00800240 + local_80;
  *(float *)(iVar2 + 500) = local_ac * fVar1 + local_7c;
  *(float *)(iVar2 + 0x1f8) = local_a8 * fVar1 + local_78;
  *(undefined4 *)(iVar2 + 0x1fc) = local_74;
  mobyfunc::GetBoneTransformations(param_1,2,&local_b0);
  fVar7 = DAT_00800250;
  fVar10 = DAT_00800248;
  fVar1 = local_b0 * DAT_00800248 + local_80;
  fVar5 = local_a0 * DAT_0080024c;
  fVar6 = local_9c * DAT_0080024c;
  fVar8 = local_98 * DAT_0080024c;
  *(float *)(iVar2 + 0x210) = fVar1;
  fVar4 = local_ac * fVar10 + local_7c;
  fVar9 = local_90 * fVar7 + fVar1 + fVar5;
  *(float *)(iVar2 + 0x214) = fVar4;
  fVar1 = local_a8 * fVar10 + local_78;
  fVar4 = local_8c * fVar7 + fVar4 + fVar6;
  *(float *)(iVar2 + 0x218) = fVar1;
  *(float *)(iVar2 + 0x210) = fVar9;
  *(undefined4 *)(iVar2 + 0x21c) = local_74;
  fVar1 = local_88 * fVar7 + fVar1 + fVar8;
  *(float *)(iVar2 + 0x214) = fVar4;
  *(float *)(iVar2 + 0x218) = fVar1;
  *(undefined4 *)(iVar2 + 0x22c) = local_74;
  *(float *)(iVar2 + 0x220) = fVar5 * -2.0 + fVar9;
  *(float *)(iVar2 + 0x224) = fVar6 * -2.0 + fVar4;
  *(float *)(iVar2 + 0x228) = fVar8 * -2.0 + fVar1;
  draw::RegisterPostDraw(&PTR_M280_00329e48_0070bf20,param_1);
  return;
}



//==== 00326b90  ns=mobyupdate_helpers  size=0xe8
// sig: undefined M279_00326b90(void)
// callers(0): 
// callees(4): 0010a2e0 mobyutil::OrganicDeltAng; 00501980 fastfunc::FastQuaternionToEuler; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

void mobyupdate_helpers::M279_00326b90(undefined8 param_1,int param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  iVar1 = *(int *)(param_2 + 0x78);
  dVar3 = -(double)*(float *)(iVar1 + 0x268);
  dVar2 = (double)fastfunc::FastDiffRots(param_1,(double)*(float *)(param_2 + 0x48));
  dVar3 = (double)fastfunc::FastWrapRot((float)dVar3,(float)-dVar2);
  dVar2 = 1.2217304706573486;
  if ((dVar3 <= 1.2217304706573486) && (dVar2 = dVar3, dVar3 < -1.2217304706573486)) {
    dVar2 = -1.2217304706573486;
  }
  mobyutil::OrganicDeltAng
            ((float)dVar2,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
             mobyutil::g_FrameTime * 6.2831855,(float *)(iVar1 + 0x270),0x326b7c,
             (float *)(iVar1 + 0x274));
  fastfunc::FastQuaternionToEuler((double)*(float *)(iVar1 + 0x270),iVar1 + 0x130,2);
  return;
}



//==== 00326c98  ns=mobyupdate_helpers  size=0x390
// sig: undefined M28_00326c98(void)
// callers(1): 00327f50 mobyupdate_unsorted::UpdateMoby_28
// callees(5): 0010a2e0 mobyutil::OrganicDeltAng; 005017c4 fastfunc::FastQuaternionMult; 00501980 fastfunc::FastQuaternionToEuler; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots

void mobyupdate_helpers::M28_00326c98(undefined8 param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  MobyInstance *pMVar7;
  ulonglong *puVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float *unused;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  int iVar17;
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
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0x100;
  puVar8 = (ulonglong *)lVar13;
  *puVar8 = uVar11;
  puVar8[0x22] = in_LR;
  puVar8[0x1d] = in_f29;
  puVar8[0x1e] = in_f30;
  puVar8[0x1f] = in_f31;
  puVar8[0x1c] = unaff_r31;
  puVar8[0x1b] = unaff_r30;
  puVar8[0x18] = unaff_r27;
  puVar8[0x1a] = unaff_r29;
  iVar6 = *(int *)(param_2 + 0x78);
  puVar8[0x19] = unaff_r28;
  fVar1 = *(float *)(param_2 + 0x48);
  puVar8[0x17] = unaff_r26;
  puVar8[0x16] = unaff_r25;
  pMVar7 = *(MobyInstance **)(iVar6 + 0x110);
  dVar19 = (double)fastfunc::FastDiffRots(param_1,(double)fVar1);
  dVar20 = 1.2217304706573486;
  if ((dVar19 <= 1.2217304706573486) && (dVar20 = dVar19, dVar19 < -1.2217304706573486)) {
    dVar20 = -1.2217304706573486;
  }
  dVar23 = 12.566370964050293;
  dVar22 = 6.2831854820251465;
  mobyutil::OrganicDeltAng
            ((float)dVar20,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
             mobyutil::g_FrameTime * 6.2831855,(float *)(iVar6 + 0x268),param_3,
             (float *)(iVar6 + 0x26c));
  iVar17 = iVar6 + 0x170;
  fastfunc::FastQuaternionToEuler((double)*(float *)(iVar6 + 0x268),iVar17,2);
  dVar19 = (double)mobyutil::g_FrameTime;
  dVar21 = (double)DAT_0071f418;
  if (param_4 != 0) {
    fVar1 = (pMVar7->pos).z;
    if (g_heroMobyPtr == pMVar7) {
      fVar1 = fVar1 - hero::g_heroGroundDist;
    }
    fVar2 = (pMVar7->pos).y - *(float *)(param_2 + 0x14);
    fVar3 = (pMVar7->pos).x - *(float *)(param_2 + 0x10);
    unused = (float *)&mobyutil::g_atanQuadrantTable;
    fVar5 = (fVar1 - *(float *)(param_2 + 0x18)) + 1.5;
    fVar1 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
    *(float *)((int)puVar8 + 0x84) = fVar5;
    fVar5 = ABS(fVar5);
    fVar2 = ABS(fVar1);
    *(float *)(puVar8 + 0x10) = fVar1;
    *(float *)(puVar8 + 0x11) = fVar2 - fVar5;
    fVar1 = 0.0;
    uVar15 = (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0x11) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)(puVar8 + 0x10));
    if (*(float *)(puVar8 + 0x11) - 0.0 < 0.0) {
      fVar3 = fVar5;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
    fVar4 = ABS(*(float *)((int)puVar8 + 0x84));
    if (*(float *)(puVar8 + 0x11) - 0.0 < 0.0) {
      fVar4 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    if (0.0 < fVar3) {
      lVar12 = uVar11 - 0xf0;
      lVar16 = uVar11 - 100;
      lVar14 = uVar11 - 0x74;
      lVar18 = 2;
      fVar3 = (fVar4 - fVar3) / (fVar4 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar8 + 0x13) = fVar3;
      *(float *)(puVar8 + 0x12) = fVar3;
      *(float *)((int)puVar8 + 0x94) = fVar3;
      *(float *)((int)puVar8 + 0x8c) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) * fVar4;
      *(float *)((int)puVar8 + 0x94) = *(float *)((int)puVar8 + 0x94) * fVar3;
      *(float *)(puVar8 + 0x13) = *(float *)(puVar8 + 0x13) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar12 + 0x8c) = *(float *)((int)lVar12 + 0x7c) * fVar3 * fVar3;
        iVar9 = (int)lVar14;
        lVar14 = lVar14 + 8;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar9 + 4) * fVar3 * fVar3;
        lVar16 = lVar16 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar18 = 4;
      lVar16 = uVar11 - 0x74;
      unused = (float *)&DAT_007358e0;
      lVar12 = lVar13;
      lVar14 = lVar16;
      do {
        fVar3 = *unused;
        fVar4 = unused[1];
        unused = unused + 2;
        *(float *)((int)lVar12 + 0x8c) = *(float *)((int)lVar12 + 0x8c) * fVar3;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar4;
        lVar14 = lVar14 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar12 = 2;
      do {
        iVar9 = (int)lVar13;
        lVar13 = lVar13 + 0x10;
        iVar10 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar9 + 0x8c) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                *(float *)(iVar10 + 0xc);
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar2;
    }
    mobyutil::OrganicDeltAng
              (-fVar1,(float)(dVar21 * dVar23),(float)(dVar21 * dVar23),(float)(dVar19 * dVar22),
               (float *)(iVar6 + 0x280),(int)unused,(float *)(iVar6 + 0x284));
    fastfunc::FastQuaternionToEuler((double)*(float *)(iVar6 + 0x280),uVar11 - 0x90,1);
    fastfunc::FastQuaternionMult(iVar17,iVar17,uVar11 - 0x90);
  }
  fastfunc::FastSubRots((float)dVar20,*(float *)(iVar6 + 0x268));
  return;
}



//==== 00327030  ns=mobyupdate_helpers  size=0xb0
// sig: undefined M279_00327030(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M279_00327030(longlong param_1)

{
  ushort uVar1;
  void *pvVar2;
  undefined2 uVar3;
  MobyInstance *pMVar4;
  undefined8 in_r0;
  ushort *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  pMVar4 = MobyInstance;
  if ((int)param_1 != -1) {
    puVar5 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
    if (puVar5 != (ushort *)0x0) {
      auVar7 = ZEXT416(0xffffffff);
      auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
      auVar8 = vectorShiftLeftIntegerWord(auVar7,auVar7);
      auVar7 = loadVectorLeftIndexed(0x278,0x800000);
      auVar6 = vectorConvertFromSignedFixedPointWord(auVar7,0);
      auVar7 = loadVectorLeftIndexed(in_r0,0x327028);
      auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar7 = vectorAddFloatingPoint
                         (auVar6,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60);
      auVar7 = vectorMultiplyAddFloatingPoint(auVar9,auVar7,auVar8);
      auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
      auVar7 = vectorSplatHalfWord(auVar7,1);
      do {
        pvVar2 = pMVar4[*puVar5 & 0x7fff].pVar;
        if (pMVar4[*puVar5 & 0x7fff].oClass == PLASMABOT_001C) {
          uVar3 = storeVectorElementHalfWordIndexed(auVar7,0x260,ZEXT48(pvVar2));
          *(undefined2 *)((int)pvVar2 + 0x260) = uVar3;
        }
        uVar1 = *puVar5;
        puVar5 = puVar5 + 1;
      } while (-1 < (short)uVar1);
    }
  }
  return;
}



//==== 003270e0  ns=mobyupdate_helpers  size=0x94
// sig: undefined M279_003270e0(void)
// callers(0): 
// callees(0): 

int mobyupdate_helpers::M279_003270e0(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  
  if ((int)param_1 == -1) {
    iVar3 = 0;
  }
  else {
    puVar2 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
    if (puVar2 == (ushort *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = 0;
      do {
        if ((MobyInstance[*puVar2 & 0x7fff].oClass == PLASMABOT_001C) &&
           ((MobyInstance[*puVar2 & 0x7fff].state == '\x05' ||
            (MobyInstance[*puVar2 & 0x7fff].state == '\x06')))) {
          iVar3 = iVar3 + 1;
        }
        uVar1 = *puVar2;
        puVar2 = puVar2 + 1;
      } while (-1 < (short)uVar1);
    }
  }
  return iVar3;
}



//==== 00327178  ns=mobyupdate_helpers  size=0x60
// sig: undefined M279_00327178(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M279_00327178(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = *(int *)(param_1 + 0x78);
  fVar2 = (DAT_00800274 - 1.0) * DAT_0071f408 + 1.0;
  fVar3 = *(float *)(iVar1 + 0x254) * fVar2;
  *(float *)(iVar1 + 600) = *(float *)(iVar1 + 600) * fVar2;
  *(float *)(iVar1 + 0x254) = fVar3;
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + fVar3;
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + *(float *)(iVar1 + 600);
  return;
}



//==== 003271f0  ns=mobyupdate_helpers  size=0x328
// sig: undefined M28_003271f0(void)
// callers(1): 00327f50 mobyupdate_unsorted::UpdateMoby_28
// callees(3): 00109b40 mobyutil::AccelDelt; 0010a2e0 mobyutil::OrganicDeltAng; 0010ce18 mobyutil::MB_PathMoveDist

bool mobyupdate_helpers::M28_003271f0(int param_1)

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
  ulonglong uVar10;
  int iVar12;
  longlong lVar11;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  ulonglong in_f27;
  double dVar20;
  ulonglong in_f28;
  double dVar21;
  ulonglong in_f29;
  double dVar22;
  ulonglong in_f30;
  double dVar23;
  ulonglong in_f31;
  double dVar24;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar11 = uVar10 - 0x100;
  puVar8 = (ulonglong *)lVar11;
  *puVar8 = uVar10;
  puVar8[0x22] = in_LR;
  puVar8[0x1b] = in_f27;
  puVar8[0x1c] = in_f28;
  puVar8[0x1d] = in_f29;
  puVar8[0x1e] = in_f30;
  puVar8[0x1f] = in_f31;
  puVar8[0x1a] = unaff_r31;
  puVar8[0x17] = unaff_r28;
  puVar8[0x18] = unaff_r29;
  iVar6 = *(int *)(param_1 + 0x78);
  puVar8[0x16] = unaff_r27;
  lVar13 = uVar10 - 0x90;
  fVar5 = mobyutil::g_FrameTime * DAT_00800270;
  fVar1 = *(float *)(iVar6 + 0x27c);
  pSVar7 = Splines[*(int *)(iVar6 + 0x240)];
  puVar8[0x19] = unaff_r30;
  iVar12 = mobyutil::MB_PathMoveDist
                     ((double)(fVar5 * fVar1),pSVar7,lVar13,iVar6 + 0x24c,iVar6 + 0x250,Splines,0);
  dVar23 = 0.009999999776482582;
  dVar22 = 0.20000000298023224;
  dVar24 = 0.0;
  dVar21 = (double)*(float *)(param_1 + 0x10);
  dVar20 = (double)*(float *)(param_1 + 0x14);
  iVar14 = (int)lVar13;
  mobyutil::AccelDelt(*(float *)(puVar8 + 0xe),0.01,0.2,0.0,(float *)(param_1 + 0x10),iVar14,
                      (float *)(iVar6 + 0x254));
  mobyutil::AccelDelt(*(float *)((int)puVar8 + 0x74),(float)dVar23,(float)dVar22,(float)dVar24,
                      (float *)(param_1 + 0x14),iVar14,(float *)(iVar6 + 600));
  fVar1 = (float)((double)*(float *)((int)puVar8 + 0x74) - dVar20);
  dVar23 = ABS((double)(float)((double)*(float *)(puVar8 + 0xe) - dVar21));
  dVar22 = ABS((double)fVar1);
  *(float *)(puVar8 + 0x10) = (float)((double)*(float *)(puVar8 + 0xe) - dVar21);
  *(float *)((int)puVar8 + 0x84) = fVar1;
  *(float *)(puVar8 + 0x11) = (float)(dVar23 - dVar22);
  fVar1 = mobyutil::g_FrameTime;
  uVar15 = (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 0x11) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1d) & 4;
  dVar20 = ABS((double)*(float *)(puVar8 + 0x10));
  if ((double)*(float *)(puVar8 + 0x11) - dVar24 < 0.0) {
    dVar20 = dVar22;
  }
  fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
  dVar22 = ABS((double)*(float *)((int)puVar8 + 0x84));
  if ((double)*(float *)(puVar8 + 0x11) - dVar24 < 0.0) {
    dVar22 = dVar23;
  }
  fVar2 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  if (dVar24 < dVar20) {
    lVar17 = uVar10 - 0xf0;
    lVar13 = uVar10 - 100;
    lVar16 = uVar10 - 0x74;
    lVar19 = 2;
    fVar3 = (float)(dVar22 - dVar20) / (float)(dVar22 + dVar20);
    fVar4 = fVar3 * fVar3;
    *(float *)(puVar8 + 0x13) = fVar3;
    *(float *)(puVar8 + 0x12) = fVar3;
    *(float *)((int)puVar8 + 0x94) = fVar3;
    *(float *)((int)puVar8 + 0x8c) = fVar3;
    fVar3 = fVar4 * fVar4;
    *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) * fVar4;
    *(float *)((int)puVar8 + 0x94) = *(float *)((int)puVar8 + 0x94) * fVar3;
    *(float *)(puVar8 + 0x13) = *(float *)(puVar8 + 0x13) * fVar3 * fVar4;
    do {
      *(float *)((int)lVar17 + 0x8c) = *(float *)((int)lVar17 + 0x7c) * fVar3 * fVar3;
      iVar14 = (int)lVar16;
      lVar16 = lVar16 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar13 + 4) = *(float *)(iVar14 + 4) * fVar3 * fVar3;
      lVar13 = lVar13 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar17 = uVar10 - 0x74;
    lVar19 = 4;
    pfVar18 = (float *)&DAT_007358e0;
    lVar13 = lVar17;
    lVar16 = lVar11;
    do {
      fVar3 = *pfVar18;
      fVar4 = pfVar18[1];
      pfVar18 = pfVar18 + 2;
      *(float *)((int)lVar16 + 0x8c) = *(float *)((int)lVar16 + 0x8c) * fVar3;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar4;
      lVar13 = lVar13 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar13 = 2;
    do {
      iVar14 = (int)lVar11;
      iVar9 = (int)lVar17;
      lVar11 = lVar11 + 0x10;
      lVar17 = lVar17 + 0x10;
      dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar14 + 0x8c)) + *(float *)(iVar9 + 4)
                        + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar5 + fVar2);
  }
  mobyutil::OrganicDeltAng
            ((float)dVar24,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,fVar1 * 6.2831855,
             (float *)(param_1 + 0x48),0x3271d8,(float *)(iVar6 + 0x23c));
  return iVar12 != 0;
}



//==== 00327518  ns=mobyupdate_helpers  size=0x1c
// sig: undefined M28_00327518(void)
// callers(1): 00327f50 mobyupdate_unsorted::UpdateMoby_28
// callees(0): 

void mobyupdate_helpers::M28_00327518(int param_1)

{
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xefff | 0x41;
  return;
}



//==== 00327534  ns=mobyupdate_helpers  size=0x24
// sig: undefined M279_00327534(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M279_00327534(int param_1)

{
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x10);
  *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xffbe | 0x1000;
  return;
}



//==== 00327558  ns=mobyupdate_helpers  size=0x88
// sig: undefined M279_00327558(void)
// callers(0): 
// callees(0): 

undefined8 mobyupdate_helpers::M279_00327558(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  if ((*(byte *)(param_1 + 0x21) != 0xff) &&
     (puVar2 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)],
     puVar2 != (ushort *)0x0)) {
    do {
      if ((MobyInstance[*puVar2 & 0x7fff].oClass == PLASMABOT_001C) &&
         (MobyInstance[*puVar2 & 0x7fff].state == '\x02')) {
        return 0;
      }
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return 1;
}



//==== 003275e0  ns=mobyupdate_helpers  size=0xbc
// sig: undefined M28_003275e0(void)
// callers(1): 00327f50 mobyupdate_unsorted::UpdateMoby_28
// callees(0): 

void mobyupdate_helpers::M28_003275e0(int param_1)

{
  Spline *pSVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  Spline *pSVar7;
  int iVar8;
  
  iVar5 = *(int *)(param_1 + 0x78);
  *(undefined4 *)(iVar5 + 0x24c) = 0;
  *(undefined4 *)(iVar5 + 0x250) = 0;
  *(undefined4 *)(iVar5 + 0x25c) = 0;
  *(undefined4 *)(iVar5 + 600) = 0;
  *(undefined4 *)(iVar5 + 0x254) = 0;
  if (*(int *)(iVar5 + 0x240) != -1) {
    pSVar1 = Splines[*(int *)(iVar5 + 0x240)];
    iVar5 = pSVar1->cnt;
    if (0 < iVar5) {
      iVar8 = 0;
      pSVar7 = pSVar1;
      do {
        iVar8 = iVar8 + 1;
        pfVar6 = (float *)((int)pSVar1 + ((iVar8 - (iVar8 / iVar5) * iVar5) * 4 + 4) * 4);
        fVar2 = pSVar7->points[0].y - pfVar6[1];
        fVar3 = pSVar7->points[0].x - *pfVar6;
        fVar4 = pSVar7->points[0].z - pfVar6[2];
        pSVar7->points[0].w = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
        iVar5 = pSVar1->cnt;
        pSVar7 = (Spline *)pSVar7->points;
      } while (iVar8 < iVar5);
    }
  }
  return;
}



//==== 003276a8  ns=mobyupdate_helpers  size=0xac
// sig: undefined M28_003276a8(void)
// callers(1): 00327f50 mobyupdate_unsorted::UpdateMoby_28
// callees(3): 000fcbe8 mobyutil::MB_randRangeFloat; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M28_003276a8(int param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  double dVar4;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if (*(int *)(iVar1 + 0x38) != 0) {
    dVar4 = (double)mobyutil::MB_randRangeFloat(180.0,240.0);
    uVar3 = fastfunc::FastDoubleToInt((double)(float)(dVar4 * (double)animationSpeed));
    *(undefined4 *)(iVar1 + 0x238) = uVar3;
    *(undefined4 *)(iVar1 + 0x38) = 0;
  }
  fastfunc::FastDecTimerS32(iVar1 + 0x238);
  fVar2 = DAT_0080025c;
  if (*(int *)(iVar1 + 0x238) != 0) {
    fVar2 = DAT_0080025c + 6.0;
  }
  *(float *)(iVar1 + 0x234) = fVar2;
  return;
}



//==== 00327754  ns=mobyupdate_helpers  size=0xd8
// sig: undefined M28_00327754(void)
// callers(1): 00327f50 mobyupdate_unsorted::UpdateMoby_28
// callees(1): 00111ba0 mobyutil::MB_getTargetInArea

void mobyupdate_helpers::M28_00327754(int param_1)

{
  int iVar1;
  Spline *pSVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x78);
  pSVar2 = Splines[*(int *)(iVar1 + 0x244)];
  iVar5 = mobyutil::MB_getTargetInArea
                    ((double)*(float *)(iVar1 + 0x234),param_1,iVar1 + 0xd0,pSVar2,0,0,
                     pSVar2->points,pSVar2->cnt);
  if ((iVar5 != 2) &&
     (fVar3 = *(float *)(param_1 + 0x14) - *(float *)(iVar1 + 0xd4),
     fVar4 = *(float *)(param_1 + 0x10) - *(float *)(iVar1 + 0xd0),
     *(float *)(iVar1 + 0x234) < SQRT(fVar4 * fVar4 + fVar3 * fVar3))) {
    *(undefined4 *)(iVar1 + 0x114) = 2;
  }
  if (*(int *)(iVar1 + 0x110) == 0) {
    *(MobyInstance **)(iVar1 + 0x110) = g_heroMobyPtr;
  }
  return;
}



//==== 00327848  ns=mobyupdate_helpers  size=0x694
// sig: undefined M28_00327848(void)
// callers(1): 00327f50 mobyupdate_unsorted::UpdateMoby_28
// callees(8): 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0024d43c FUN_0024d43c; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M28_00327848(MobyInstance *param_1)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  MOBY_OCLASSES MVar6;
  MobyModeBit MVar7;
  void *pvVar8;
  uint uVar9;
  uint uVar10;
  undefined2 uVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  float *pfVar22;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar23;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar24;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  ulonglong in_f31;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar18 = uVar13 - 0x100;
  puVar12 = (ulonglong *)lVar18;
  *puVar12 = uVar13;
  puVar12[0x22] = in_LR;
  puVar12[0x1f] = in_f31;
  puVar12[0x1e] = unaff_r31;
  uVar1 = param_1->state;
  puVar12[0x1d] = unaff_r30;
  pvVar8 = param_1->pVar;
  uVar24 = ZEXT48(pvVar8);
  puVar12[0x1c] = unaff_r29;
  puVar12[0x1b] = unaff_r28;
  if ((uVar1 == '\0') || (uVar1 == '\v')) {
    if (uVar1 != '\v') {
      return;
    }
    param_1->damage = -1;
    mobyutil::MB_ColorDyingMoby(param_1,uVar24 + 0xc0);
    return;
  }
  dVar29 = 0.0;
  *(undefined4 *)((int)puVar12 + 0x74) = 0;
  iVar14 = mobyutil::MB_damage(param_1,0x330000,0);
  if (((iVar14 != 0) && (*(int *)(iVar14 + 0x20) != 0)) &&
     ((MVar6 = *(MOBY_OCLASSES *)(*(int *)(iVar14 + 0x20) + 0xa6), MVar6 == param_1->oClass ||
      (MVar6 == (DOOR_LEFT|EXPLOSION_0070))))) {
    iVar14 = 0;
  }
  iVar15 = mobyutil::MB_HandleDamage
                     (param_1,iVar14,uVar24 + 0x20,0,puVar12 + 0xe,(int)puVar12 + 0x74,0,4);
  if ((*(int *)(puVar12 + 0xe) == 1) || (param_1->state == '\v')) goto LAB_00327ea0;
  MVar7 = param_1->modeBits;
  fVar5 = *(float *)((int)pvVar8 + 0x20) - *(float *)((int)puVar12 + 0x74);
  *(float *)((int)pvVar8 + 0x20) = fVar5;
  if ((double)fVar5 <= dVar29) {
LAB_00327bd4:
    uVar9 = *(uint *)(iVar14 + 0x24);
    param_1->modeBits =
         MVar7 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
    param_1->state = (char)((LZCOUNT(-(uVar9 & 0x800000)) << 0x3a) >> 0x3f) + '\f';
    uVar16 = fastfunc::FastDoubleToInt((double)(*(float *)((int)pvVar8 + 0x88) * 1024.0));
    *(undefined4 *)((int)pvVar8 + 0x80) = uVar16;
    *(undefined4 *)((int)pvVar8 + 0x88) = 0x3e99999a;
    fVar5 = mobyutil::g_FrameTime * 10.0;
    *(undefined4 *)((int)pvVar8 + 0xb0) = 0x41100000;
    *(undefined4 *)((int)pvVar8 + 0xb4) = 0x41700000;
    *(float *)((int)pvVar8 + 0x78) = fVar5;
    *(float *)((int)pvVar8 + 0x7c) = fVar5;
    uVar9 = *(uint *)(iVar14 + 0x10);
    uVar10 = *(uint *)(iVar14 + 0x14);
    dVar26 = ABS((double)*(float *)(iVar14 + 0x10));
    dVar28 = ABS((double)*(float *)(iVar14 + 0x14));
    *(float *)(puVar12 + 0xf) = (float)(dVar26 - dVar28);
    uVar20 = (ulonglong)(uVar9 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar12 + 0xf) >> 0x1e) & 2 | (ulonglong)(uVar10 >> 0x1d) & 4;
    dVar27 = dVar26;
    if ((double)*(float *)(puVar12 + 0xf) - dVar29 < 0.0) {
      dVar27 = dVar28;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    if ((double)*(float *)(puVar12 + 0xf) - dVar29 < 0.0) {
      dVar28 = dVar26;
    }
    fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    if (dVar29 < dVar27) {
      lVar17 = uVar13 - 0xf0;
      lVar21 = uVar13 - 0x80;
      lVar23 = uVar13 - 0x70;
      lVar25 = 2;
      fVar3 = (float)(dVar28 - dVar27) / (float)(dVar28 + dVar27);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar12 + 0x8c) = fVar3;
      *(float *)((int)puVar12 + 0x84) = fVar3;
      *(float *)(puVar12 + 0x11) = fVar3;
      *(float *)(puVar12 + 0x10) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar12 + 0x84) = *(float *)((int)puVar12 + 0x84) * fVar4;
      *(float *)(puVar12 + 0x11) = *(float *)(puVar12 + 0x11) * fVar3;
      *(float *)((int)puVar12 + 0x8c) = *(float *)((int)puVar12 + 0x8c) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar17 + 0x80) = *(float *)((int)lVar17 + 0x70) * fVar3 * fVar3;
        iVar14 = (int)lVar21;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)(iVar14 + 4) * fVar3 * fVar3;
        lVar23 = lVar23 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar25 = 4;
      lVar23 = uVar13 - 0x80;
      pfVar22 = (float *)&DAT_007358e0;
      lVar17 = lVar18;
      lVar21 = lVar23;
      do {
        fVar3 = *pfVar22;
        fVar4 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar17 + 0x80) = *(float *)((int)lVar17 + 0x80) * fVar3;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar4;
        lVar21 = lVar21 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar17 = 2;
      do {
        iVar14 = (int)lVar18;
        iVar15 = (int)lVar23;
        lVar18 = lVar18 + 0x10;
        lVar23 = lVar23 + 0x10;
        dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar14 + 0x80)) +
                          *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar5 + fVar2);
    }
    puVar12[0x18] = (longlong)(int)(animationSpeed * 5.5);
    mobyutil::MB_StartKick
              (dVar29,param_1,uVar24 + 0x60,&DAT_00720000,8,*(undefined4 *)((int)puVar12 + 0xc4),0);
    *(undefined1 *)((int)pvVar8 + 199) = 0xfa;
    if (g_heroType == '\x02') {
      mobyutil::MB_SpawnBoltsFromCrate(param_1,0x200,0xffffffffffffffff);
    }
    else {
      mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
    }
    param_1->collision = (ushort *)0x0;
  }
  else if (iVar15 < 3) {
    if ((-1 < iVar15) && (0 < iVar15)) goto LAB_00327bd4;
  }
  else if (iVar15 < 0xb) {
    FUN_0024d43c(param_1);
    auVar30 = ZEXT416(0xffffffff);
    auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
    param_1->state = '\n';
    fVar5 = mobyutil::g_FrameTime;
    auVar31 = vectorShiftLeftIntegerWord(auVar30,auVar30);
    auVar30 = loadVectorLeftIndexed(4,0x32782c);
    auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar32 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar30 = vectorMultiplyAddFloatingPoint
                        (auVar32,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,
                         auVar31);
    auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
    auVar30 = vectorSplatHalfWord(auVar30,1);
    uVar11 = storeVectorElementHalfWordIndexed(auVar30,0x26,uVar24);
    *(undefined2 *)((int)pvVar8 + 0x26) = uVar11;
    *(float *)((int)pvVar8 + 0x78) = fVar5 * 8.0;
    fVar2 = DAT_00800260;
    *(undefined4 *)((int)pvVar8 + 0xb0) = 0x41300000;
    *(undefined4 *)((int)pvVar8 + 0xb4) = 0x41e80000;
    *(float *)((int)pvVar8 + 0x7c) = fVar5 * fVar2;
    uVar9 = *(uint *)(iVar14 + 0x10);
    uVar10 = *(uint *)(iVar14 + 0x14);
    dVar26 = ABS((double)*(float *)(iVar14 + 0x10));
    dVar28 = ABS((double)*(float *)(iVar14 + 0x14));
    *(float *)((int)puVar12 + 0x7c) = (float)(dVar26 - dVar28);
    uVar19 = (ulonglong)(uVar9 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar12 + 0x7c) >> 0x1e) & 2 |
             (ulonglong)(uVar10 >> 0x1d) & 4;
    uVar20 = uVar19 << 2;
    dVar27 = dVar26;
    if ((double)*(float *)((int)puVar12 + 0x7c) - dVar29 < 0.0) {
      dVar27 = dVar28;
    }
    fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)uVar20);
    fVar5 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    if ((double)*(float *)((int)puVar12 + 0x7c) - dVar29 < 0.0) {
      dVar28 = dVar26;
    }
    if (dVar29 < dVar27) {
      lVar17 = uVar13 - 0xf0;
      lVar23 = uVar13 - 0x50;
      lVar21 = uVar13 - 0x60;
      lVar25 = 2;
      fVar3 = (float)(dVar28 - dVar27) / (float)(dVar28 + dVar27);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar12 + 0xac) = fVar3;
      *(float *)((int)puVar12 + 0xa4) = fVar3;
      *(float *)(puVar12 + 0x15) = fVar3;
      *(float *)(puVar12 + 0x14) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar12 + 0xa4) = *(float *)((int)puVar12 + 0xa4) * fVar4;
      *(float *)(puVar12 + 0x15) = *(float *)(puVar12 + 0x15) * fVar3;
      *(float *)((int)puVar12 + 0xac) = *(float *)((int)puVar12 + 0xac) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar17 + 0xa0) = *(float *)((int)lVar17 + 0x90) * fVar3 * fVar3;
        iVar14 = (int)lVar21;
        lVar21 = lVar21 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)(iVar14 + 4) * fVar3 * fVar3;
        lVar23 = lVar23 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar25 = 4;
      lVar23 = uVar13 - 0x60;
      uVar20 = ZEXT48(&DAT_007358e0);
      lVar17 = lVar18;
      lVar21 = lVar23;
      do {
        pfVar22 = (float *)uVar20;
        fVar3 = pfVar22[1];
        uVar20 = uVar20 + 8;
        *(float *)((int)lVar17 + 0xa0) = *(float *)((int)lVar17 + 0xa0) * *pfVar22;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar3;
        lVar21 = lVar21 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar17 = 2;
      do {
        iVar14 = (int)lVar18;
        iVar15 = (int)lVar23;
        lVar18 = lVar18 + 0x10;
        lVar23 = lVar23 + 0x10;
        dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar14 + 0xa0)) +
                          *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar2 + fVar5);
    }
    mobyutil::MB_StartKick(dVar29,param_1,uVar24 + 0x60,uVar20,7,1,0);
    *(undefined1 *)((int)pvVar8 + 199) = 0xfa;
  }
  mobyutil::MB_UpdateLightsTransition(param_1,uVar24 + 0xc0);
LAB_00327ea0:
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar24 + 0xc0);
  return;
}



//==== 00327f50  ns=mobyupdate_unsorted  size=0x1ee0
// sig: undefined UpdateMoby_28(MobyInstance * moby)
// callers(0): 
// callees(41): 00057820 collproc::CollLine; 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f0ea8 mobyfunc::AttachManipulator; 000f1038 mobyfunc::GetBoneTransformations; 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fdcf0 mobyutil::MB_SetAnimationNoBlend; 000fddc0 mobyutil::MB_SetAnimation; 000ffb70 mobyutil::GetGroundZ; 00109b40 mobyutil::AccelDelt; 0010a2e0 mobyutil::OrganicDeltAng; 0010b030 mobyutil::MB_UpdateKick; 0010e030 mobyutil::MB_genericExplosion; 00113fa0 mobyutil::MB_LineCrossesSpline; 00119a18 mobyfunc::DoManipulator; 0024d2e4 FUN_0024d2e4; 0024d43c FUN_0024d43c; 0024d50c FUN_0024d50c; 00316b98 mobyupdate_helpers::M251_CheckPlasmabotHatchAvailability; 00326788 mobyupdate_helpers::M28_00326788; 00326c98 mobyupdate_helpers::M28_00326c98; 003271f0 mobyupdate_helpers::M28_003271f0; 00327518 mobyupdate_helpers::M28_00327518; 003275e0 mobyupdate_helpers::M28_003275e0; 003276a8 mobyupdate_helpers::M28_003276a8; 00327754 mobyupdate_helpers::M28_00327754; 00327848 mobyupdate_helpers::M28_00327848; 003426d8 FUN_003426d8; 00363aa0 FUN_00363aa0; 004fffb4 fastfunc::FastDecTimerS16; 00501980 fastfunc::FastQuaternionToEuler; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005cd098 libc::printf; 005e7e98 FUN_005e7e98
// strings: 00655fe0: '*Error: Moby 28(Footsoldier) with no introPath. UID: %d - RAR\n' | 00656020: '*Error: Moby 28(Footsoldier) with a intro path that has no points. UID: %d - RAR\n' | 00656078: '*Error: Moby 28(Footsoldier) with no boundPath. UID: %d - RAR\n' | 006560b8: '*Error: Moby 28(Footsoldier) with a bound path that has no points. UID: %d - RAR\n' | 00656110: '*Error: Moby 28(Footsoldier) with no hatch index. UID: %d - RAR\n'

/* Moby 28 */

void mobyupdate_unsorted::UpdateMoby_28(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ushort uVar7;
  MOBY_OCLASSES MVar8;
  void *pvVar9;
  u16 *puVar10;
  void *pvVar11;
  Spline *pSVar12;
  undefined2 uVar13;
  ulonglong *puVar14;
  float fVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  MobyInstance *pMVar19;
  ulonglong uVar20;
  longlong lVar21;
  int iVar25;
  undefined1 uVar30;
  ushort *puVar26;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar27;
  int iVar28;
  uint uVar29;
  undefined4 *unused;
  longlong lVar31;
  float *pfVar32;
  longlong lVar33;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong uVar34;
  ulonglong unaff_r29;
  bool bVar35;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar36;
  double dVar37;
  double extraout_f1;
  double extraout_f1_00;
  double extraout_f1_01;
  double dVar38;
  double extraout_f1_02;
  double extraout_f1_03;
  double extraout_f1_04;
  double extraout_f1_05;
  double extraout_f1_06;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar43;
  ulonglong in_f28;
  double dVar44;
  ulonglong in_f29;
  double dVar45;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  
  lVar21 = (longlong)(int)moby;
  uVar20 = ZEXT48(&stack0x00000000);
  lVar24 = uVar20 - 0x2c0;
  puVar14 = (ulonglong *)lVar24;
  *puVar14 = uVar20;
  puVar14[0x5a] = in_LR;
  puVar14[0x4d] = in_f21;
  puVar14[0x4e] = in_f22;
  puVar14[0x4f] = in_f23;
  puVar14[0x50] = in_f24;
  puVar14[0x51] = in_f25;
  puVar14[0x52] = in_f26;
  puVar14[0x53] = in_f27;
  puVar14[0x54] = in_f28;
  puVar14[0x55] = in_f29;
  puVar14[0x56] = in_f30;
  puVar14[0x57] = in_f31;
  puVar14[0x4c] = unaff_r31;
  puVar14[0x4b] = unaff_r30;
  iVar25 = 0;
  puVar14[0x49] = unaff_r28;
  puVar14[0x48] = unaff_r27;
  pvVar9 = moby->pVar;
  uVar34 = ZEXT48(pvVar9);
  puVar14[0x4a] = unaff_r29;
  iVar28 = 0;
  puVar14[0x47] = unaff_r26;
  puVar14[0x46] = unaff_r25;
  puVar14[0x45] = unaff_r24;
  dVar37 = (double)mobyfunc::DoManipulator
                             (0x4004000000000000,moby,2,(Manipulator *)((int)pvVar9 + 0x120U));
  if (*(int *)((int)pvVar9 + 0x288) != 0) {
    if (g_heroType != '\x02') {
      moby->collision = (ushort *)0x0;
      if (moby->animationId == '\x05') {
        moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
        FUN_0024d43c(lVar21);
        mobyutil::MB_SpawnBoltsFromCrate(lVar21,0,0xffffffffffffffff);
        mobyfunc::DeleteMoby(moby);
        return;
      }
      moby->updateDistance = -1;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
      return;
    }
    if (g_heroType == '\x02') {
      if (moby->state != '\v') {
        moby->collision = moby->pClass->collision;
      }
      moby->updateDistance = '@';
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
    }
  }
  bVar1 = moby->state;
  if (bVar1 != 0) {
    mobyupdate_helpers::M28_00327848(lVar21);
    mobyupdate_helpers::M28_00327754(lVar21);
    dVar37 = (double)mobyupdate_helpers::M28_003276a8(lVar21);
    iVar25 = *(int *)((int)pvVar9 + 0x110);
    bVar1 = moby->state;
  }
  if (g_gameMode == GAME_MODE_SCENE) {
    moby->enabled = '\0';
    moby->modeBits = moby->modeBits | DISABLED;
  }
  else if (bVar1 != 1) {
    moby->enabled = '\x01';
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
  }
  if (bVar1 < 7) {
    if (bVar1 == 6) {
      fVar51 = *(float *)(iVar25 + 0x10) - (moby->pos).x;
      fVar6 = *(float *)(iVar25 + 0x14) - (moby->pos).y;
      dVar38 = ABS((double)fVar51);
      dVar46 = ABS((double)fVar6);
      *(float *)((int)puVar14 + 0x164) = fVar51;
      *(float *)(puVar14 + 0x2d) = fVar6;
      *(float *)((int)puVar14 + 0x16c) = (float)(dVar38 - dVar46);
      dVar43 = 0.0;
      uVar22 = (ulonglong)(*(uint *)((int)puVar14 + 0x164) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar14 + 0x16c) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar14 + 0x2d) >> 0x1d) & 4;
      dVar37 = ABS((double)*(float *)((int)puVar14 + 0x164));
      if (*(float *)((int)puVar14 + 0x16c) - 0.0 < 0.0) {
        dVar37 = dVar46;
      }
      fVar51 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
      dVar44 = (double)*(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
      dVar46 = ABS((double)*(float *)(puVar14 + 0x2d));
      if (*(float *)((int)puVar14 + 0x16c) - 0.0 < 0.0) {
        dVar46 = dVar38;
      }
      dVar38 = dVar43;
      if (0.0 < dVar37) {
        lVar23 = uVar20 - 0x2b0;
        lVar31 = uVar20 - 300;
        lVar33 = uVar20 - 0x11c;
        lVar36 = 2;
        fVar6 = (float)(dVar46 - dVar37) / (float)(dVar46 + dVar37);
        fVar4 = fVar6 * fVar6;
        *(float *)(puVar14 + 0x34) = fVar6;
        *(float *)(puVar14 + 0x33) = fVar6;
        *(float *)((int)puVar14 + 0x19c) = fVar6;
        *(float *)((int)puVar14 + 0x194) = fVar6;
        fVar6 = fVar4 * fVar4;
        *(float *)(puVar14 + 0x33) = *(float *)(puVar14 + 0x33) * fVar4;
        *(float *)((int)puVar14 + 0x19c) = *(float *)((int)puVar14 + 0x19c) * fVar6;
        *(float *)(puVar14 + 0x34) = *(float *)(puVar14 + 0x34) * fVar6 * fVar4;
        do {
          *(float *)((int)lVar23 + 0x194) = *(float *)((int)lVar23 + 0x184) * fVar6 * fVar6;
          iVar28 = (int)lVar31;
          lVar23 = lVar23 + 8;
          lVar31 = lVar31 + 8;
          *(float *)((int)lVar33 + 4) = *(float *)(iVar28 + 4) * fVar6 * fVar6;
          lVar33 = lVar33 + 8;
          lVar36 = lVar36 + -1;
        } while (lVar36 != 0);
        lVar36 = 4;
        lVar33 = uVar20 - 300;
        pfVar32 = (float *)&DAT_007358e0;
        lVar23 = lVar24;
        lVar31 = lVar33;
        do {
          fVar6 = *pfVar32;
          fVar4 = pfVar32[1];
          pfVar32 = pfVar32 + 2;
          *(float *)((int)lVar23 + 0x194) = *(float *)((int)lVar23 + 0x194) * fVar6;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar31 + 4) = *(float *)((int)lVar31 + 4) * fVar4;
          lVar31 = lVar31 + 8;
          lVar36 = lVar36 + -1;
        } while (lVar36 != 0);
        lVar23 = 2;
        dVar37 = dVar43;
        do {
          iVar28 = (int)lVar24;
          lVar24 = lVar24 + 0x10;
          iVar27 = (int)lVar33;
          lVar33 = lVar33 + 0x10;
          dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar28 + 0x194)) +
                            *(float *)(iVar27 + 4) + *(float *)(iVar27 + 8) +
                           *(float *)(iVar27 + 0xc));
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        dVar46 = (double)(float)(dVar37 + 0.7853981852531433);
        dVar38 = (double)(float)(dVar46 * (double)fVar51 + dVar44);
      }
      dVar37 = (double)fastfunc::FastIntToDouble(dVar44,dVar46,*(undefined2 *)((int)pvVar9 + 0x262))
      ;
      puVar14[0x43] = (longlong)DAT_00800284;
      puVar14[0x43] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar14[0x43] + 0.5));
      dVar46 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)puVar14 + 0x21c));
      fastfunc::FastDiffRots
                ((double)*(float *)((int)pvVar9 + 0x278),
                 (double)((DAT_00800280 - -DAT_00800280) * (float)(dVar37 / dVar46) - DAT_00800280))
      ;
      bVar35 = false;
      if ((*(char *)((int)pvVar9 + 0x24b) != '\0') &&
         ((double)((*(float *)(iVar25 + 0x18) + 0.1) - (moby->pos).z) < dVar43)) {
        bVar35 = true;
      }
      mobyupdate_helpers::M28_00326c98(lVar21);
      pvVar9 = moby->pVar;
      dVar46 = -(double)*(float *)((int)pvVar9 + 0x268);
      dVar37 = (double)fastfunc::FastDiffRots(dVar38,(double)(moby->rotation).z);
      dVar46 = (double)fastfunc::FastWrapRot((float)dVar46,(float)-dVar37);
      dVar37 = 1.2217304706573486;
      if ((dVar46 <= 1.2217304706573486) && (dVar37 = dVar46, dVar46 < -1.2217304706573486)) {
        dVar37 = -1.2217304706573486;
      }
      mobyutil::OrganicDeltAng
                ((float)dVar37,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                 mobyutil::g_FrameTime * 6.2831855,(float *)((int)pvVar9 + 0x270),0x720000,
                 (float *)((int)pvVar9 + 0x274));
      fastfunc::FastQuaternionToEuler((double)*(float *)((int)pvVar9 + 0x270),(int)pvVar9 + 0x130,2)
      ;
      mobyfunc::GetBoneTransformations(lVar21,0,uVar20 - 0x1a0);
      dVar38 = (double)*(float *)(puVar14 + 0x26);
      dVar46 = (double)*(float *)((int)puVar14 + 0x134);
      fVar51 = (moby->rotation).z;
      MVar8 = moby->oClass;
      dVar37 = (double)*(float *)(puVar14 + 0x27);
      if (!bVar35) {
        dVar37 = dVar43;
      }
      dVar44 = (double)DAT_0080027c;
      *(undefined4 *)((int)puVar14 + 0xcc) = *(undefined4 *)((int)puVar14 + 0x15c);
      dVar40 = (double)SQRT((float)(dVar37 * dVar37 +
                                   (double)(float)(dVar38 * dVar38 +
                                                  (double)(float)(dVar46 * dVar46))));
      dVar45 = (double)DAT_0080028c;
      dVar41 = (double)(float)(dVar44 / dVar40);
      dVar44 = dVar43;
      if (dVar43 - dVar40 < 0.0) {
        dVar44 = (double)(float)(dVar46 * dVar41);
      }
      dVar42 = dVar43;
      if (dVar43 - dVar40 < 0.0) {
        dVar42 = (double)(float)(dVar38 * dVar41);
      }
      dVar39 = dVar43;
      if (dVar43 - dVar40 < 0.0) {
        dVar39 = (double)(float)(dVar37 * dVar41);
      }
      if (dVar40 - dVar43 < 0.0) {
        dVar44 = (double)(float)(dVar46 * dVar41);
      }
      if (dVar40 - dVar43 < 0.0) {
        dVar42 = (double)(float)(dVar38 * dVar41);
      }
      if (dVar40 - dVar43 < 0.0) {
        dVar39 = (double)(float)(dVar37 * dVar41);
      }
      *(float *)(puVar14 + 0x18) = (float)((double)*(float *)(puVar14 + 0x2a) + dVar42);
      *(float *)((int)puVar14 + 0xc4) = (float)((double)*(float *)((int)puVar14 + 0x154) + dVar44);
      *(float *)(puVar14 + 0x19) = (float)((double)*(float *)(puVar14 + 0x2b) + dVar39);
      fVar6 = fVar51 + 1.5707963;
      dVar37 = (double)SQRT((float)(dVar39 * dVar39 +
                                   (double)(float)(dVar42 * dVar42 +
                                                  (double)(float)(dVar44 * dVar44))));
      *(undefined4 *)(puVar14 + 0x1f) = 0x3f800000;
      *(undefined4 *)((int)puVar14 + 0xfc) = 0x45afdf66;
      *(undefined1 *)(puVar14 + 0x21) = 0;
      *(undefined1 *)((int)puVar14 + 0x109) = 1;
      *(MOBY_OCLASSES *)((int)puVar14 + 0x10a) = MVar8;
      *(undefined4 *)((int)puVar14 + 0x10c) = 0x3f800000;
      *(undefined4 *)(puVar14 + 0x22) = 1;
      fVar4 = 3.1415925 - fVar51;
      if (fVar51 - (3.1415925 - fVar51) < 0.0) {
        fVar4 = fVar51;
      }
      fVar3 = 3.1415925 - fVar6;
      if (fVar6 - (3.1415925 - fVar6) < 0.0) {
        fVar3 = fVar6;
      }
      fVar5 = -3.1415925 - fVar51;
      if ((-3.1415925 - fVar51) - fVar4 < 0.0) {
        fVar5 = fVar4;
      }
      dVar46 = (double)(float)(dVar45 / dVar37);
      fVar51 = -3.1415925 - fVar6;
      if ((-3.1415925 - fVar6) - fVar3 < 0.0) {
        fVar51 = fVar3;
      }
      fVar6 = fVar5 * fVar5;
      fVar4 = fVar51 * fVar51;
      fVar3 = fVar4 * fVar4 * fVar51;
      fVar17 = fVar6 * fVar6 * fVar5;
      fVar15 = fVar4 * fVar3;
      dVar38 = dVar43;
      if (dVar43 - dVar37 < 0.0) {
        dVar38 = (double)(float)(dVar39 * dVar46);
      }
      dVar45 = dVar43;
      if (dVar43 - dVar37 < 0.0) {
        dVar45 = (double)(float)(dVar44 * dVar46);
      }
      dVar40 = dVar43;
      if (dVar43 - dVar37 < 0.0) {
        dVar40 = (double)(float)(dVar42 * dVar46);
      }
      if (dVar37 - dVar43 < 0.0) {
        dVar38 = (double)(float)(dVar39 * dVar46);
      }
      if (dVar37 - dVar43 < 0.0) {
        dVar45 = (double)(float)(dVar44 * dVar46);
      }
      if (dVar37 - dVar43 < 0.0) {
        dVar40 = (double)(float)(dVar42 * dVar46);
      }
      fVar18 = fVar6 * fVar17;
      *(float *)(puVar14 + 0x1e) =
           fVar4 * fVar15 * 2.601887e-06 +
           fVar15 * -0.0001980741 + fVar3 * 0.0083330255 + fVar4 * fVar51 * -0.16666657 + fVar51;
      *(undefined4 *)((int)puVar14 + 0x104) = 0x10001;
      *(MobyInstance **)(puVar14 + 0x20) = moby;
      *(float *)(puVar14 + 0x2b) = (float)((double)*(float *)(puVar14 + 0x2b) + dVar38);
      *(float *)((int)puVar14 + 0x154) = (float)((double)*(float *)((int)puVar14 + 0x154) + dVar45);
      *(float *)(puVar14 + 0x2a) = (float)((double)*(float *)(puVar14 + 0x2a) + dVar40);
      *(float *)((int)puVar14 + 0xf4) =
           fVar6 * fVar18 * 2.601887e-06 +
           fVar18 * -0.0001980741 + fVar17 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5;
      iVar25 = collproc::CollLine(uVar20 - 0x170,uVar20 - 0x200,0,lVar21,uVar20 - 0x1d0);
      fVar51 = CollOutput.ip.y;
      if (iVar25 != 0) {
        *(float *)(puVar14 + 0x18) = CollOutput.ip.x;
        fVar6 = CollOutput.ip.z;
        *(float *)((int)puVar14 + 0xc4) = fVar51;
        fVar51 = CollOutput.ip.w;
        *(float *)(puVar14 + 0x19) = fVar6;
        *(float *)((int)puVar14 + 0xcc) = fVar51;
      }
      FUN_0024d50c(lVar21,uVar20 - 0x1a0,uVar20 - 0x200);
      iVar25 = fastfunc::FastDecTimerS16(uVar34 + 0x262);
      dVar37 = extraout_f1_06;
      if (iVar25 != 0) {
        puVar14[0x43] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar21,6,0,*(undefined4 *)((int)puVar14 + 0x21c));
        moby->state = '\a';
        dVar37 = (double)FUN_0024d43c(lVar21);
      }
    }
    else if (bVar1 == 5) {
      fVar51 = *(float *)(iVar25 + 0x10) - (moby->pos).x;
      fVar6 = *(float *)(iVar25 + 0x14) - (moby->pos).y;
      fVar3 = ABS(fVar51);
      fVar4 = ABS(fVar6);
      *(float *)(puVar14 + 0x2e) = fVar51;
      *(float *)((int)puVar14 + 0x174) = fVar6;
      *(float *)(puVar14 + 0x2f) = fVar3 - fVar4;
      dVar37 = 0.0;
      uVar34 = (ulonglong)(*(uint *)(puVar14 + 0x2e) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar14 + 0x2f) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar14 + 0x174) >> 0x1d) & 4;
      fVar51 = ABS(*(float *)(puVar14 + 0x2e));
      if (*(float *)(puVar14 + 0x2f) - 0.0 < 0.0) {
        fVar51 = fVar4;
      }
      fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar34 << 2));
      fVar6 = *(float *)(((uint)(uVar34 << 2) | 0x735900) + 4);
      fVar5 = ABS(*(float *)((int)puVar14 + 0x174));
      if (*(float *)(puVar14 + 0x2f) - 0.0 < 0.0) {
        fVar5 = fVar3;
      }
      if (0.0 < fVar51) {
        lVar23 = uVar20 - 0x2b0;
        lVar33 = uVar20 - 0xfc;
        lVar31 = uVar20 - 0x10c;
        lVar36 = 2;
        fVar51 = (fVar5 - fVar51) / (fVar5 + fVar51);
        fVar3 = fVar51 * fVar51;
        *(float *)(puVar14 + 0x38) = fVar51;
        *(float *)(puVar14 + 0x37) = fVar51;
        *(float *)((int)puVar14 + 0x1bc) = fVar51;
        *(float *)((int)puVar14 + 0x1b4) = fVar51;
        fVar51 = fVar3 * fVar3;
        *(float *)(puVar14 + 0x37) = *(float *)(puVar14 + 0x37) * fVar3;
        *(float *)((int)puVar14 + 0x1bc) = *(float *)((int)puVar14 + 0x1bc) * fVar51;
        *(float *)(puVar14 + 0x38) = *(float *)(puVar14 + 0x38) * fVar51 * fVar3;
        do {
          *(float *)((int)lVar23 + 0x1b4) = *(float *)((int)lVar23 + 0x1a4) * fVar51 * fVar51;
          iVar25 = (int)lVar31;
          lVar31 = lVar31 + 8;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar33 + 4) = *(float *)(iVar25 + 4) * fVar51 * fVar51;
          lVar33 = lVar33 + 8;
          lVar36 = lVar36 + -1;
        } while (lVar36 != 0);
        lVar36 = 4;
        lVar33 = uVar20 - 0x10c;
        pfVar32 = (float *)&DAT_007358e0;
        lVar23 = lVar24;
        lVar31 = lVar33;
        do {
          fVar51 = *pfVar32;
          fVar3 = pfVar32[1];
          pfVar32 = pfVar32 + 2;
          *(float *)((int)lVar23 + 0x1b4) = *(float *)((int)lVar23 + 0x1b4) * fVar51;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar31 + 4) = *(float *)((int)lVar31 + 4) * fVar3;
          lVar31 = lVar31 + 8;
          lVar36 = lVar36 + -1;
        } while (lVar36 != 0);
        lVar23 = 2;
        do {
          iVar25 = (int)lVar24;
          lVar24 = lVar24 + 0x10;
          iVar28 = (int)lVar33;
          lVar33 = lVar33 + 0x10;
          dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar25 + 0x1b4)) +
                            *(float *)(iVar28 + 4) + *(float *)(iVar28 + 8) +
                           *(float *)(iVar28 + 0xc));
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        dVar37 = (double)((float)(dVar37 + 0.7853981852531433) * fVar4 + fVar6);
      }
      fastfunc::FastDiffRots(dVar37,(double)DAT_00800280);
      mobyupdate_helpers::M28_00326c98(lVar21);
      pvVar9 = moby->pVar;
      dVar46 = -(double)*(float *)((int)pvVar9 + 0x268);
      dVar37 = (double)fastfunc::FastDiffRots(dVar37,(double)(moby->rotation).z);
      dVar46 = (double)fastfunc::FastWrapRot((float)dVar46,(float)-dVar37);
      dVar37 = 1.2217304706573486;
      if ((dVar46 <= 1.2217304706573486) && (dVar37 = dVar46, dVar46 < -1.2217304706573486)) {
        dVar37 = -1.2217304706573486;
      }
      mobyutil::OrganicDeltAng
                ((float)dVar37,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                 mobyutil::g_FrameTime * 6.2831855,(float *)((int)pvVar9 + 0x270),0x720000,
                 (float *)((int)pvVar9 + 0x274));
      dVar37 = (double)fastfunc::FastQuaternionToEuler
                                 ((double)*(float *)((int)pvVar9 + 0x270),(int)pvVar9 + 0x130,2);
      if (((moby->field43_0x70 & 2U) != 0) && (moby->updateId == moby->animationId)) {
        puVar14[0x43] = (longlong)(int)(animationSpeed * 10.5);
        dVar37 = (double)mobyutil::MB_SetAnimation(lVar21,5,0,*(undefined4 *)((int)puVar14 + 0x21c))
        ;
        moby->state = '\x06';
      }
    }
    else if (bVar1 == 4) {
      pvVar11 = moby->pVar;
      fVar51 = (DAT_00800274 - 1.0) * DAT_0071f408 + 1.0;
      fVar6 = *(float *)((int)pvVar11 + 0x254) * fVar51;
      *(float *)((int)pvVar11 + 600) = *(float *)((int)pvVar11 + 600) * fVar51;
      *(float *)((int)pvVar11 + 0x254) = fVar6;
      fVar6 = (moby->pos).x + fVar6;
      (moby->pos).x = fVar6;
      fVar51 = (moby->pos).y + *(float *)((int)pvVar11 + 600);
      pfVar32 = (float *)&mobyutil::g_atanQuadrantTable;
      (moby->pos).y = fVar51;
      fVar6 = *(float *)(iVar25 + 0x10) - fVar6;
      fVar51 = *(float *)(iVar25 + 0x14) - fVar51;
      fVar3 = ABS(fVar6);
      fVar4 = ABS(fVar51);
      *(float *)((int)puVar14 + 0x17c) = fVar6;
      *(float *)(puVar14 + 0x30) = fVar51;
      *(float *)((int)puVar14 + 0x184) = fVar3 - fVar4;
      dVar46 = 0.0;
      uVar22 = (ulonglong)(*(uint *)((int)puVar14 + 0x17c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar14 + 0x184) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar14 + 0x30) >> 0x1d) & 4;
      fVar51 = ABS(*(float *)((int)puVar14 + 0x17c));
      if (*(float *)((int)puVar14 + 0x184) - 0.0 < 0.0) {
        fVar51 = fVar4;
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
      fVar4 = ABS(*(float *)(puVar14 + 0x30));
      if (*(float *)((int)puVar14 + 0x184) - 0.0 < 0.0) {
        fVar4 = fVar3;
      }
      fVar3 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
      if (0.0 < fVar51) {
        lVar23 = uVar20 - 0x2b0;
        lVar33 = uVar20 - 0xdc;
        lVar31 = uVar20 - 0xec;
        lVar36 = 2;
        fVar51 = (fVar4 - fVar51) / (fVar4 + fVar51);
        fVar4 = fVar51 * fVar51;
        *(float *)(puVar14 + 0x3c) = fVar51;
        *(float *)(puVar14 + 0x3b) = fVar51;
        *(float *)((int)puVar14 + 0x1dc) = fVar51;
        *(float *)((int)puVar14 + 0x1d4) = fVar51;
        fVar51 = fVar4 * fVar4;
        *(float *)(puVar14 + 0x3b) = *(float *)(puVar14 + 0x3b) * fVar4;
        *(float *)((int)puVar14 + 0x1dc) = *(float *)((int)puVar14 + 0x1dc) * fVar51;
        *(float *)(puVar14 + 0x3c) = *(float *)(puVar14 + 0x3c) * fVar51 * fVar4;
        do {
          *(float *)((int)lVar23 + 0x1d4) = *(float *)((int)lVar23 + 0x1c4) * fVar51 * fVar51;
          iVar27 = (int)lVar31;
          lVar31 = lVar31 + 8;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar33 + 4) = *(float *)(iVar27 + 4) * fVar51 * fVar51;
          lVar33 = lVar33 + 8;
          lVar36 = lVar36 + -1;
        } while (lVar36 != 0);
        lVar36 = 4;
        lVar33 = uVar20 - 0xec;
        pfVar32 = (float *)&DAT_007358e0;
        lVar23 = lVar24;
        lVar31 = lVar33;
        do {
          fVar51 = *pfVar32;
          fVar4 = pfVar32[1];
          pfVar32 = pfVar32 + 2;
          *(float *)((int)lVar23 + 0x1d4) = *(float *)((int)lVar23 + 0x1d4) * fVar51;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar31 + 4) = *(float *)((int)lVar31 + 4) * fVar4;
          lVar31 = lVar31 + 8;
          lVar36 = lVar36 + -1;
        } while (lVar36 != 0);
        lVar23 = 2;
        do {
          iVar27 = (int)lVar24;
          lVar24 = lVar24 + 0x10;
          iVar16 = (int)lVar33;
          lVar33 = lVar33 + 0x10;
          dVar46 = (double)((float)(dVar46 + (double)*(float *)(iVar27 + 0x1d4)) +
                            *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                           *(float *)(iVar16 + 0xc));
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        dVar46 = (double)((float)(dVar46 + 0.7853981852531433) * fVar6 + fVar3);
      }
      dVar45 = 12.566370964050293;
      dVar44 = 6.2831854820251465;
      mobyutil::OrganicDeltAng
                ((float)dVar46,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                 mobyutil::g_FrameTime * 6.2831855,&(moby->rotation).z,(int)pfVar32,
                 (float *)((int)pvVar9 + 0x23c));
      dVar38 = (double)mobyupdate_helpers::M28_00326c98((double)(moby->rotation).z,lVar21);
      pvVar11 = moby->pVar;
      dVar43 = -(double)*(float *)((int)pvVar11 + 0x268);
      dVar37 = (double)fastfunc::FastDiffRots(dVar46,(double)(moby->rotation).z);
      dVar43 = (double)fastfunc::FastWrapRot((float)dVar43,(float)-dVar37);
      dVar37 = 1.2217304706573486;
      if ((dVar43 <= 1.2217304706573486) && (dVar37 = dVar43, dVar43 < -1.2217304706573486)) {
        dVar37 = -1.2217304706573486;
      }
      mobyutil::OrganicDeltAng
                ((float)dVar37,(float)((double)DAT_0071f418 * dVar45),
                 (float)((double)DAT_0071f418 * dVar45),
                 (float)((double)mobyutil::g_FrameTime * dVar44),(float *)((int)pvVar11 + 0x270),
                 (int)pfVar32,(float *)((int)pvVar11 + 0x274));
      dVar37 = (double)fastfunc::FastQuaternionToEuler
                                 ((double)*(float *)((int)pvVar11 + 0x270),(int)pvVar11 + 0x130,2);
      if (*(int *)((int)pvVar9 + 0x114) == 2) {
        if (*(int *)((int)pvVar9 + 0x240) != -1) {
          moby->state = '\b';
          if (moby->animationId != '\x03') {
            puVar14[0x43] = (longlong)(int)(animationSpeed * 20.5);
            mobyutil::MB_SetAnimation(lVar21,3,0,*(undefined4 *)((int)puVar14 + 0x21c));
          }
          iVar25 = *(int *)((int)pvVar9 + 0x24c);
          *(int *)((int)pvVar9 + 0x24c) = iVar25 + -1;
          fVar51 = Splines[*(int *)((int)pvVar9 + 0x240)]->points[iVar25 + -1].w;
          *(undefined4 *)((int)pvVar9 + 0x27c) = 0xbf800000;
          *(float *)((int)pvVar9 + 0x250) = fVar51;
          *(undefined4 *)((int)pvVar9 + 0x25c) = 0;
          *(undefined4 *)((int)pvVar9 + 600) = 0;
          *(undefined4 *)((int)pvVar9 + 0x254) = 0;
          dVar37 = (double)FUN_0024d43c(lVar21);
        }
      }
      else {
        iVar27 = fastfunc::FastDecTimerS16(uVar34 + 0x260);
        dVar37 = extraout_f1_02;
        if (iVar27 != 0) {
          if (((byte)moby->group != 0xffffffff) &&
             (puVar26 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)moby->group],
             puVar26 != (ushort *)0x0)) {
            do {
              if ((MobyInstance[*puVar26 & 0x7fff].oClass == PLASMABOT_001C) &&
                 ((MobyInstance[*puVar26 & 0x7fff].state == '\x05' ||
                  (MobyInstance[*puVar26 & 0x7fff].state == '\x06')))) {
                iVar28 = iVar28 + 1;
              }
              uVar7 = *puVar26;
              puVar26 = puVar26 + 1;
            } while (-1 < (short)uVar7);
            if (1 < iVar28) goto LAB_00329cd8;
          }
          iVar28 = FUN_0024d2e4(lVar21,1,0);
          dVar37 = extraout_f1_03;
          if ((iVar28 != 0) &&
             (iVar28 = mobyutil::MB_randInt(4), dVar37 = extraout_f1_04, iVar28 == 0)) {
            dVar43 = (double)fastfunc::FastSubRots((moby->rotation).z,(float)dVar46);
            dVar37 = 0.01745329238474369;
            if ((dVar43 < 0.01745329238474369) &&
               ((dVar38 < 0.01745329238474369 &&
                (iVar25 = mobyutil::MB_LineCrossesSpline
                                    (*(undefined4 *)((int)pvVar9 + 0x244),lVar21 + 0x10,
                                     iVar25 + 0x10), pMVar19 = MobyInstance, dVar37 = extraout_f1_05
                , iVar25 == 0)))) {
              if (((byte)moby->group != 0xffffffff) &&
                 (puVar26 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)moby->group],
                 puVar26 != (ushort *)0x0)) {
                auVar48 = ZEXT416(0xffffffff);
                auVar48 = auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60;
                auVar49 = vectorShiftLeftIntegerWord(auVar48,auVar48);
                auVar48 = loadVectorLeftIndexed(0x278,0x800000);
                auVar47 = vectorConvertFromSignedFixedPointWord(auVar48,0);
                auVar48 = loadVectorLeftIndexed(0xc,0x327edc);
                auVar48 = auVar48 >> 0x60 & (undefined1  [16])0xffffffff;
                auVar50 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                auVar48 = vectorAddFloatingPoint
                                    (auVar47,auVar48 | auVar48 << 0x20 | auVar48 << 0x40 |
                                             auVar48 << 0x60);
                auVar48 = vectorMultiplyAddFloatingPoint(auVar50,auVar48,auVar49);
                auVar48 = vectorConvertToSignedFixedPointWordSaturate(auVar48,0);
                auVar48 = vectorSplatHalfWord(auVar48,1);
                do {
                  pvVar11 = pMVar19[*puVar26 & 0x7fff].pVar;
                  if (pMVar19[*puVar26 & 0x7fff].oClass == PLASMABOT_001C) {
                    uVar13 = storeVectorElementHalfWordIndexed(auVar48,0x260,ZEXT48(pvVar11));
                    *(undefined2 *)((int)pvVar11 + 0x260) = uVar13;
                  }
                  uVar7 = *puVar26;
                  puVar26 = puVar26 + 1;
                } while (-1 < (short)uVar7);
              }
              *(float *)((int)pvVar9 + 0x278) = (float)dVar46;
              moby->state = '\x05';
              puVar14[0x43] = (longlong)(int)(animationSpeed * 5.5);
              dVar37 = (double)mobyutil::MB_SetAnimation
                                         (lVar21,4,0,*(undefined4 *)((int)puVar14 + 0x21c));
              auVar48 = ZEXT416(0xffffffff);
              auVar48 = auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60;
              auVar50 = vectorShiftLeftIntegerWord(auVar48,auVar48);
              auVar48 = loadVectorLeftIndexed(0x284,0x800000);
              auVar49 = loadVectorLeftIndexed(0xc,0x327edc);
              auVar47 = vectorConvertFromSignedFixedPointWord(auVar48,0);
              auVar48 = auVar49 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar48 = vectorAddFloatingPoint
                                  (auVar47,auVar48 | auVar48 << 0x20 | auVar48 << 0x40 |
                                           auVar48 << 0x60);
              auVar48 = vectorMultiplyAddFloatingPoint(auVar49,auVar48,auVar50);
              auVar48 = vectorConvertToSignedFixedPointWordSaturate(auVar48,0);
              auVar48 = vectorSplatHalfWord(auVar48,1);
              uVar13 = storeVectorElementHalfWordIndexed(auVar48,0x262,uVar34);
              *(undefined2 *)((int)pvVar9 + 0x262) = uVar13;
            }
          }
        }
      }
    }
    else if (bVar1 == 3) {
      iVar25 = mobyupdate_helpers::M28_003271f0(lVar21);
      dVar37 = extraout_f1_00;
      if (iVar25 != 0) {
        puVar14[0x43] = (longlong)(int)(animationSpeed * 10.5);
        dVar37 = (double)mobyutil::MB_SetAnimation(lVar21,0,0,*(undefined4 *)((int)puVar14 + 0x21c))
        ;
        moby->state = '\x04';
      }
    }
    else if (bVar1 == 2) {
      dVar37 = (double)mobyfunc::BlendAnimFrame(moby);
      if (3.0 <= dVar37) {
        dVar37 = (double)mobyupdate_helpers::M28_003271f0(lVar21);
      }
      if (((moby->field43_0x70 & 2U) != 0) && (moby->updateId == moby->animationId)) {
        moby->state = '\x03';
        puVar14[0x43] = (longlong)(int)(animationSpeed * 10.5);
        dVar37 = (double)mobyutil::MB_SetAnimation(lVar21,3,0,*(undefined4 *)((int)puVar14 + 0x21c))
        ;
        moby->unk58 = 1.0;
      }
    }
    else {
      if (bVar1 == 1) {
        if (*(int *)((int)pvVar9 + 0x114) == 2) {
          return;
        }
        iVar25 = fastfunc::FastDecTimerS16(uVar34 + 0x248);
        if (iVar25 == 0) {
          return;
        }
        iVar25 = mobyupdate_helpers::M251_CheckPlasmabotHatchAvailability
                           (*(undefined4 *)((int)pvVar9 + 0x264));
        if (iVar25 == 0) {
          return;
        }
        if ((moby->group != 0xff) &&
           (puVar26 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)moby->group],
           puVar26 != (ushort *)0x0)) {
          do {
            if ((MobyInstance[*puVar26 & 0x7fff].oClass == PLASMABOT_001C) &&
               (MobyInstance[*puVar26 & 0x7fff].state == '\x02')) {
              return;
            }
            uVar7 = *puVar26;
            puVar26 = puVar26 + 1;
          } while (-1 < (short)uVar7);
        }
        auVar48 = ZEXT416(0xffffffff);
        auVar48 = auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60;
        auVar49 = vectorShiftLeftIntegerWord(auVar48,auVar48);
        auVar48 = loadVectorLeftIndexed(0x288,0x800000);
        auVar47 = vectorConvertFromSignedFixedPointWord(auVar48,0);
        auVar48 = loadVectorLeftIndexed(0xc,0x327edc);
        auVar48 = auVar48 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar50 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar48 = vectorAddFloatingPoint
                            (auVar47,auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60);
        auVar48 = vectorMultiplyAddFloatingPoint(auVar50,auVar48,auVar49);
        auVar48 = vectorConvertToSignedFixedPointWordSaturate(auVar48,0);
        auVar48 = vectorSplatHalfWord(auVar48,1);
        uVar13 = storeVectorElementHalfWordIndexed(auVar48,0x248,uVar34);
        *(undefined2 *)((int)pvVar9 + 0x248) = uVar13;
        puVar10 = moby->pClass->collision;
        moby->state = '\x02';
        moby->collision = puVar10;
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
        mobyutil::MB_SetAnimationNoBlend(lVar21,1,0);
        pSVar12 = Splines[*(int *)((int)pvVar9 + 0x240)];
        dVar37 = (double)FUN_005e8338((double)(pSVar12->points[1].x - pSVar12->points[0].x),
                                      (double)(pSVar12->points[1].y - pSVar12->points[0].y));
        (moby->rotation).z = (float)dVar37;
        *(undefined4 *)((int)pvVar9 + 0x268) = 0;
        *(undefined4 *)((int)pvVar9 + 0x26c) = 0;
        *(undefined4 *)((int)pvVar9 + 0x270) = 0;
        *(undefined4 *)((int)pvVar9 + 0x274) = 0;
        *(undefined4 *)((int)pvVar9 + 0x27c) = 0x3f800000;
        *(undefined4 *)((int)pvVar9 + 0x24c) = 0;
        *(undefined4 *)((int)pvVar9 + 0x250) = 0;
        *(undefined4 *)((int)pvVar9 + 0x25c) = 0;
        *(undefined4 *)((int)pvVar9 + 600) = 0;
        *(undefined4 *)((int)pvVar9 + 0x254) = 0;
        return;
      }
      if (bVar1 == 0) {
        bVar35 = *(char *)((int)pvVar9 + 0x24a) != '\0';
        if (bVar35) {
          if (*(int *)((int)pvVar9 + 0x240) == -1) {
            libc::printf("*Error: Moby 28(Footsoldier) with no introPath. UID: %d - RAR\n",moby->uid
                        );
            mobyfunc::DeleteMoby(moby);
            return;
          }
          if (Splines[*(int *)((int)pvVar9 + 0x240)]->cnt == 0) {
            libc::printf("*Error: Moby 28(Footsoldier) with a intro path that has no points. UID: %d - RAR\n"
                         ,moby->uid);
            mobyfunc::DeleteMoby(moby);
            return;
          }
        }
        if (*(int *)((int)pvVar9 + 0x244) == -1) {
          libc::printf("*Error: Moby 28(Footsoldier) with no boundPath. UID: %d - RAR\n",moby->uid);
          mobyfunc::DeleteMoby(moby);
          return;
        }
        if (Splines[*(int *)((int)pvVar9 + 0x244)]->cnt == 0) {
          libc::printf("*Error: Moby 28(Footsoldier) with a bound path that has no points. UID: %d - RAR\n"
                       ,moby->uid);
          mobyfunc::DeleteMoby(moby);
          return;
        }
        if ((bVar35) && (*(int *)((int)pvVar9 + 0x264) < 0)) {
          libc::printf("*Error: Moby 28(Footsoldier) with no hatch index. UID: %d - RAR\n",moby->uid
                      );
          mobyfunc::DeleteMoby(moby);
          return;
        }
        iVar25 = mobyutil::MB_randInt(2);
        if (iVar25 != 0) {
          moby->modeBits = moby->modeBits | MIRROR;
        }
        mobyupdate_helpers::M28_003275e0(lVar21);
        if (*(int *)((int)pvVar9 + 0x240) != -1) {
          FUN_005e7e98(lVar21 + 0x10,ZEXT48(Splines[*(int *)((int)pvVar9 + 0x240)]) + 0x10);
        }
        *(undefined4 *)((int)pvVar9 + 0x20) = 0x40000000;
        *(undefined2 *)((int)pvVar9 + 0x24) = 2;
        *(undefined1 *)((int)pvVar9 + 0x28) = 1;
        *(undefined4 *)((int)pvVar9 + 0x30) = 0x3fa00000;
        *(undefined1 *)((int)pvVar9 + 0x29) = 0;
        uVar30 = fastfunc::FastDoubleToInt(0x402e000000000000);
        *(undefined1 *)((int)pvVar9 + 0x58) = uVar30;
        uVar30 = fastfunc::FastDoubleToInt(0x4030000000000000);
        *(undefined1 *)((int)pvVar9 + 0x5a) = uVar30;
        *(undefined2 *)((int)pvVar9 + 0x248) = 0;
        *(undefined4 *)((int)pvVar9 + 0x23c) = 0;
        *(undefined2 *)((int)pvVar9 + 0x260) = 0;
        *(undefined4 *)((int)pvVar9 + 0x268) = 0;
        *(undefined4 *)((int)pvVar9 + 0x26c) = 0;
        *(undefined4 *)((int)pvVar9 + 0x280) = 0;
        *(undefined4 *)((int)pvVar9 + 0x284) = 0;
        *(undefined4 *)((int)pvVar9 + 0x270) = 0;
        *(undefined4 *)((int)pvVar9 + 0x274) = 0;
        *(undefined4 *)((int)pvVar9 + 0x27c) = 0x3f800000;
        if (*(char *)((int)pvVar9 + 0x121) == '\0') {
          mobyfunc::AttachManipulator(moby,2,(Manipulator *)((int)pvVar9 + 0x120U));
        }
        if (*(char *)((int)pvVar9 + 0x161) == '\0') {
          mobyfunc::AttachManipulator(moby,3,(int)pvVar9 + 0x160);
        }
        if (*(char *)((int)pvVar9 + 0x24a) != '\0') {
          mobyupdate_helpers::M28_00327518(lVar21);
          moby->state = '\x01';
          return;
        }
        dVar37 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar21 + 0x10,0);
        iVar25 = *(int *)((int)pvVar9 + 0x240);
        (moby->pos).z = (float)dVar37;
        moby->state = ((byte)((LZCOUNT(-1 - iVar25) << 0x3a) >> 0x3f) & 0xf7) + 0xd;
        return;
      }
    }
  }
  else if (bVar1 == 0xd) {
    fVar51 = *(float *)(iVar25 + 0x10) - (moby->pos).x;
    fVar6 = *(float *)(iVar25 + 0x14) - (moby->pos).y;
    fVar4 = ABS(fVar51);
    fVar3 = ABS(fVar6);
    *(float *)(puVar14 + 0x31) = fVar51;
    *(float *)((int)puVar14 + 0x18c) = fVar6;
    *(float *)(puVar14 + 0x32) = fVar4 - fVar3;
    fVar51 = 0.0;
    uVar22 = (ulonglong)(*(uint *)(puVar14 + 0x31) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar14 + 0x32) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar14 + 0x18c) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)(puVar14 + 0x31));
    if (*(float *)(puVar14 + 0x32) - 0.0 < 0.0) {
      fVar6 = fVar3;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
    fVar3 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
    fVar15 = ABS(*(float *)((int)puVar14 + 0x18c));
    if (*(float *)(puVar14 + 0x32) - 0.0 < 0.0) {
      fVar15 = fVar4;
    }
    if (0.0 < fVar6) {
      lVar23 = uVar20 - 0x2b0;
      lVar33 = uVar20 - 0xbc;
      lVar31 = uVar20 - 0xcc;
      lVar36 = 2;
      fVar6 = (fVar15 - fVar6) / (fVar15 + fVar6);
      fVar4 = fVar6 * fVar6;
      *(float *)(puVar14 + 0x40) = fVar6;
      *(float *)(puVar14 + 0x3f) = fVar6;
      *(float *)((int)puVar14 + 0x1fc) = fVar6;
      *(float *)((int)puVar14 + 500) = fVar6;
      fVar6 = fVar4 * fVar4;
      *(float *)(puVar14 + 0x3f) = *(float *)(puVar14 + 0x3f) * fVar4;
      *(float *)((int)puVar14 + 0x1fc) = *(float *)((int)puVar14 + 0x1fc) * fVar6;
      *(float *)(puVar14 + 0x40) = *(float *)(puVar14 + 0x40) * fVar6 * fVar4;
      do {
        *(float *)((int)lVar23 + 500) = *(float *)((int)lVar23 + 0x1e4) * fVar6 * fVar6;
        iVar25 = (int)lVar31;
        lVar31 = lVar31 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar33 + 4) = *(float *)(iVar25 + 4) * fVar6 * fVar6;
        lVar33 = lVar33 + 8;
        lVar36 = lVar36 + -1;
      } while (lVar36 != 0);
      lVar36 = 4;
      lVar33 = uVar20 - 0xcc;
      pfVar32 = (float *)&DAT_007358e0;
      lVar23 = lVar24;
      lVar31 = lVar33;
      do {
        fVar6 = *pfVar32;
        fVar4 = pfVar32[1];
        pfVar32 = pfVar32 + 2;
        *(float *)((int)lVar23 + 500) = *(float *)((int)lVar23 + 500) * fVar6;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar31 + 4) = *(float *)((int)lVar31 + 4) * fVar4;
        lVar31 = lVar31 + 8;
        lVar36 = lVar36 + -1;
      } while (lVar36 != 0);
      lVar23 = 2;
      do {
        iVar25 = (int)lVar24;
        lVar24 = lVar24 + 0x10;
        iVar28 = (int)lVar33;
        lVar33 = lVar33 + 0x10;
        fVar51 = fVar51 + *(float *)(iVar25 + 500) + *(float *)(iVar28 + 4) + *(float *)(iVar28 + 8)
                 + *(float *)(iVar28 + 0xc);
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      fVar51 = (fVar51 + 0.7853982) * fVar5 + fVar3;
    }
    fVar51 = mobyutil::OrganicDeltAng
                       (fVar51,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                        mobyutil::g_FrameTime * 6.2831855,&(moby->rotation).z,0x720000,
                        (float *)((int)pvVar9 + 0x23c));
    dVar37 = (double)fVar51;
    if ((*(int *)((int)pvVar9 + 0x114) != 2) &&
       (iVar25 = fastfunc::FastDecTimerS16(dVar37,uVar34 + 0x248), dVar37 = extraout_f1, iVar25 != 0
       )) {
      moby->state = '\x03';
      puVar14[0x43] = (longlong)(int)(animationSpeed * 10.5);
      dVar37 = (double)mobyutil::MB_SetAnimation(lVar21,3,0,*(undefined4 *)((int)puVar14 + 0x21c));
      *(undefined4 *)((int)pvVar9 + 0x24c) = 0;
      moby->unk58 = 1.0;
      *(undefined4 *)((int)pvVar9 + 0x27c) = 0x3f800000;
      *(undefined4 *)((int)pvVar9 + 0x250) = 0;
      *(undefined4 *)((int)pvVar9 + 0x25c) = 0;
      *(undefined4 *)((int)pvVar9 + 600) = 0;
      *(undefined4 *)((int)pvVar9 + 0x254) = 0;
    }
  }
  else {
    if (bVar1 == 0xc) {
      mobyfunc::GetBonePosition(lVar21,2,uVar20 - 0x1e0);
      FUN_003426d8(lVar21,uVar20 - 0x1e0);
      *(undefined4 *)(puVar14 + 0x2c) = 0;
      FUN_00363aa0(lVar21,uVar20 - 0x160,1);
      FUN_0024d43c(lVar21);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    if (bVar1 == 0xb) {
      uVar29 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x60));
      if ((uVar29 & 0x160) == 0) {
        return;
      }
      FUN_0024d43c(lVar21);
      mobyfunc::GetBonePosition(lVar21,2,uVar20 - 0x1f0);
      FUN_003426d8(lVar21,uVar20 - 0x1f0);
      puVar14[0x12] = 0xffffffffffffffff;
      puVar14[0x14] = 1;
      puVar14[0x15] = 1;
      puVar14[0x16] = 0xffffffffffffffff;
      puVar14[0x17] = 0;
      mobyutil::MB_genericExplosion
                (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,lVar21,uVar34 + 0x40,lVar21 + 0x10,1,0xffffffffffffffff,5,2,4);
      if (g_heroType == '\x02') {
        mobyutil::MB_SpawnBoltsFromCrate(lVar21,0x200,0xffffffffffffffff);
      }
      else {
        mobyutil::MB_SpawnBoltsFromCrate(lVar21,0,0xffffffffffffffff);
      }
      mobyfunc::DeleteMoby(moby);
      return;
    }
    if (bVar1 == 10) {
      if (((moby->field43_0x70 & 2U) == 0) ||
         (moby->updateId != moby->animationId || moby->updateId != '\a')) {
        if ((moby->updateId != '\a') && (moby->animationId != '\a')) {
          dVar37 = (double)mobyutil::MB_SetAnimation(lVar21,0,0,10);
          moby->state = '\x04';
        }
      }
      else {
        dVar37 = (double)mobyutil::MB_SetAnimation(lVar21,0,0,10);
        moby->state = '\x04';
      }
    }
    else if (bVar1 == 9) {
      unused = &DAT_00327edc;
      dVar38 = 0.009999999776482582;
      dVar46 = 0.20000000298023224;
      dVar37 = 0.0;
      pSVar12 = Splines[*(int *)((int)pvVar9 + 0x240)];
      mobyutil::AccelDelt(pSVar12->points[0].x,0.01,0.2,0.0,&(moby->pos).x,0x327edc,
                          (float *)((int)pvVar9 + 0x254));
      fVar51 = mobyutil::AccelDelt(pSVar12->points[0].y,(float)dVar38,(float)dVar46,(float)dVar37,
                                   &(moby->pos).y,(int)unused,(float *)((int)pvVar9 + 600));
      dVar37 = (double)fVar51;
      if (((moby->field43_0x70 & 2U) != 0) && (moby->updateId == moby->animationId)) {
        puVar14[0x43] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar21,0,0,*(undefined4 *)((int)puVar14 + 0x21c));
        moby->collision = (ushort *)0x0;
        moby->unk58 = 1.0;
        moby->state = '\x01';
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
        return;
      }
    }
    else if (bVar1 == 8) {
      if (*(char *)((int)pvVar9 + 0x24a) != '\0') {
        mobyupdate_helpers::M251_CheckPlasmabotHatchAvailability
                  (*(undefined4 *)((int)pvVar9 + 0x264));
      }
      iVar25 = mobyupdate_helpers::M28_003271f0(lVar21);
      dVar37 = extraout_f1_01;
      if (iVar25 != 0) {
        if (*(char *)((int)pvVar9 + 0x24a) == '\0') {
          auVar48 = ZEXT416(0xffffffff);
          auVar48 = auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60;
          auVar49 = vectorShiftLeftIntegerWord(auVar48,auVar48);
          auVar48 = loadVectorLeftIndexed(0x288,0x800000);
          auVar47 = vectorConvertFromSignedFixedPointWord(auVar48,0);
          auVar48 = loadVectorLeftIndexed(0xc,0x327edc);
          auVar48 = auVar48 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar50 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar48 = vectorAddFloatingPoint
                              (auVar47,auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60
                              );
          auVar48 = vectorMultiplyAddFloatingPoint(auVar50,auVar48,auVar49);
          auVar48 = vectorConvertToSignedFixedPointWordSaturate(auVar48,0);
          auVar48 = vectorSplatHalfWord(auVar48,1);
          uVar13 = storeVectorElementHalfWordIndexed(auVar48,0x248,uVar34);
          *(undefined2 *)((int)pvVar9 + 0x248) = uVar13;
          moby->state = '\r';
        }
        else {
          puVar14[0x43] = (longlong)(int)(animationSpeed * 10.5);
          dVar37 = (double)mobyutil::MB_SetAnimation
                                     (lVar21,2,0,*(undefined4 *)((int)puVar14 + 0x21c));
          moby->state = '\t';
        }
      }
    }
    else if (((bVar1 == 7) && ((moby->field43_0x70 & 2U) != 0)) &&
            (moby->updateId == moby->animationId)) {
      puVar14[0x43] = (longlong)(int)(animationSpeed * 10.5);
      dVar37 = (double)mobyutil::MB_SetAnimation(lVar21,0,0,*(undefined4 *)((int)puVar14 + 0x21c));
      moby->state = '\x04';
    }
  }
LAB_00329cd8:
  uVar2 = moby->state;
  if ((((uVar2 != '\x05' && uVar2 != '\x04') && (uVar2 != '\x06')) && (uVar2 != '\a')) &&
     (uVar2 != '\x01')) {
    mobyupdate_helpers::M28_00326c98((double)(moby->rotation).z,lVar21);
    pvVar9 = moby->pVar;
    dVar37 = (double)(moby->rotation).z;
    dVar46 = -(double)*(float *)((int)pvVar9 + 0x268);
    dVar37 = (double)fastfunc::FastDiffRots(dVar37,dVar37);
    dVar46 = (double)fastfunc::FastWrapRot((float)dVar46,(float)-dVar37);
    dVar37 = 1.2217304706573486;
    if ((dVar46 <= 1.2217304706573486) && (dVar37 = dVar46, dVar46 < -1.2217304706573486)) {
      dVar37 = -1.2217304706573486;
    }
    mobyutil::OrganicDeltAng
              ((float)dVar37,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
               mobyutil::g_FrameTime * 6.2831855,(float *)((int)pvVar9 + 0x270),0x720000,
               (float *)((int)pvVar9 + 0x274));
    dVar37 = (double)fastfunc::FastQuaternionToEuler
                               ((double)*(float *)((int)pvVar9 + 0x270),(int)pvVar9 + 0x130,2);
  }
  mobyupdate_helpers::M28_00326788(dVar37,lVar21);
  return;
}



//==== 00329e48  ns=mobyupdate_helpers  size=0xbac
// sig: undefined M280_00329e48(void)
// callers(0): 
// callees(5): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M280_00329e48(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float fVar10;
  undefined4 uVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  longlong lVar16;
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
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  float local_150 [36];
  
  iVar9 = *(int *)(param_1 + 0x78);
  dVar33 = (double)*(float *)(iVar9 + 0x1e4);
  dVar35 = (double)*(float *)(iVar9 + 0x1e0);
  fVar5 = (float)((double)GameCamera.posY - dVar33);
  dVar32 = (double)*(float *)(iVar9 + 0x1e8);
  fVar6 = (float)((double)GameCamera.posX - dVar35);
  fVar7 = (float)((double)GameCamera.posZ - dVar32);
  dVar28 = 0.0;
  dVar31 = 1.0;
  dVar29 = (double)(float)GameCamera.field8_0x14c;
  dVar25 = 0.5;
  fVar8 = fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5;
  dVar21 = dVar28;
  dVar22 = dVar28;
  dVar23 = dVar28;
  if (SQRT(fVar8) != 0.0) {
    fVar1 = 1.0 / SQRT(fVar8);
    fVar1 = -(fVar8 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
    fVar1 = -(fVar8 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
    fVar1 = -(fVar8 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
    dVar23 = (double)(fVar6 * fVar1);
    dVar22 = (double)(fVar5 * fVar1);
    dVar21 = (double)(fVar7 * fVar1);
  }
  fVar5 = (float)((double)DAT_00969f78 * dVar23 -
                 (double)(float)((double)hero::g_heroGravityDir * dVar21));
  fVar6 = (float)((double)DAT_00969f74 * dVar21 - (double)(float)((double)DAT_00969f78 * dVar22));
  fVar7 = (float)((double)hero::g_heroGravityDir * dVar22 -
                 (double)(float)((double)DAT_00969f74 * dVar23));
  dVar24 = -1.0;
  fVar8 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
  fVar1 = -1.0 / fVar8;
  dVar34 = dVar28;
  if (0.0 - fVar8 < 0.0) {
    dVar34 = (double)(fVar6 * fVar1);
  }
  dVar17 = dVar28;
  if (0.0 - fVar8 < 0.0) {
    dVar17 = (double)(fVar5 * fVar1);
  }
  dVar36 = dVar28;
  if (0.0 - fVar8 < 0.0) {
    dVar36 = (double)(fVar7 * fVar1);
  }
  if (fVar8 - 0.0 < 0.0) {
    dVar34 = (double)(fVar6 * fVar1);
  }
  if (fVar8 - 0.0 < 0.0) {
    dVar17 = (double)(fVar5 * fVar1);
  }
  if (fVar8 - 0.0 < 0.0) {
    dVar36 = (double)(fVar7 * fVar1);
  }
  dVar26 = (double)(float)(dVar23 * dVar17 - (double)(float)(dVar22 * dVar34));
  dVar30 = (double)(float)(dVar22 * dVar36 - (double)(float)(dVar21 * dVar17));
  dVar27 = (double)(float)(dVar21 * dVar34 - (double)(float)(dVar23 * dVar36));
  draw::GetEffectTex(0xb);
  idol_draw::PackCmd(0,2,0,1,0x80);
  stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(1,1,0,0,0,0);
  pfVar15 = local_150;
  pfVar14 = (float *)&DAT_00800290;
  lVar16 = 4;
  pfVar13 = pfVar14;
  pfVar12 = pfVar15;
  do {
    fVar6 = *pfVar13;
    fVar5 = (float)((double)fVar6 * 0.4000000059604645);
    dVar18 = (double)fVar5;
    *pfVar12 = fVar5;
    fVar5 = pfVar13[1];
    pfVar12[1] = fVar5 * 0.4;
    dVar19 = (double)(pfVar13[2] * 0.4);
    pfVar12[2] = pfVar13[2] * 0.4;
    dVar20 = (double)pfVar13[3];
    pfVar13 = pfVar13 + 4;
    pfVar12[3] = (float)((double)fVar6 * (double)(float)(dVar29 * 0.4000000059604645) + dVar20);
    *pfVar12 = (float)(dVar20 * dVar35 +
                      (double)(float)(dVar19 * dVar30 +
                                     (double)(float)(dVar18 * dVar23 +
                                                    (double)(fVar5 * (float)(dVar34 * 
                                                  0.4000000059604645)))));
    pfVar12[1] = (float)(dVar20 * dVar33 +
                        (double)(float)(dVar19 * dVar27 +
                                       (double)(float)(dVar18 * dVar22 +
                                                      (double)(fVar5 * (float)(dVar17 * 
                                                  0.4000000059604645)))));
    pfVar12[2] = (float)(dVar20 * dVar32 +
                        (double)(float)(dVar19 * dVar26 +
                                       (double)(float)(dVar18 * dVar21 +
                                                      (double)(fVar5 * (float)(dVar36 * 
                                                  0.4000000059604645)))));
    pfVar12 = pfVar12 + 4;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  draw::FastDrawQuad(local_150,0,0,EffectTexHeaders,9);
  uVar11 = EffectTexHeaders;
  fVar5 = *(float *)(iVar9 + 0x204);
  fVar6 = *(float *)(iVar9 + 0x200);
  fVar1 = GameCamera.posY - fVar5;
  fVar7 = *(float *)(iVar9 + 0x208);
  fVar4 = GameCamera.posX - fVar6;
  fVar3 = GameCamera.posZ - fVar7;
  fVar8 = *(float *)(iVar9 + 0x20c);
  dVar29 = (double)(fVar3 * fVar3 + fVar4 * fVar4 + fVar1 * fVar1);
  dVar21 = dVar28;
  dVar22 = dVar28;
  dVar23 = dVar28;
  if ((double)(float)SQRT(dVar29) != dVar28) {
    dVar21 = 1.0 / SQRT(dVar29);
    dVar21 = (double)(float)(-(double)(float)((double)(float)(dVar29 * dVar21) * dVar21 - dVar31) *
                             (double)(float)(dVar25 * dVar21) + dVar21);
    dVar21 = (double)(float)(-(double)(float)((double)(float)(dVar29 * dVar21) * dVar21 - dVar31) *
                             (double)(float)(dVar25 * dVar21) + dVar21);
    fVar2 = (float)(-(double)(float)((double)(float)(dVar29 * dVar21) * dVar21 - dVar31) *
                    (double)(float)(dVar25 * dVar21) + dVar21);
    dVar22 = (double)(fVar4 * fVar2);
    dVar23 = (double)(fVar1 * fVar2);
    dVar21 = (double)(fVar3 * fVar2);
  }
  fVar3 = (float)((double)DAT_00969f78 * dVar22 -
                 (double)(float)((double)hero::g_heroGravityDir * dVar21));
  fVar4 = (float)((double)DAT_00969f74 * dVar21 - (double)(float)((double)DAT_00969f78 * dVar23));
  fVar2 = (float)((double)hero::g_heroGravityDir * dVar23 -
                 (double)(float)((double)DAT_00969f74 * dVar22));
  dVar33 = 0.20000000298023224;
  fVar10 = (float)GameCamera.field8_0x14c * 0.2;
  lVar16 = 4;
  dVar32 = (double)SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3);
  fVar1 = (float)(dVar24 / dVar32);
  dVar29 = dVar28;
  if (dVar28 - dVar32 < 0.0) {
    dVar29 = (double)(fVar4 * fVar1);
  }
  dVar35 = dVar28;
  if (dVar28 - dVar32 < 0.0) {
    dVar35 = (double)(fVar3 * fVar1);
  }
  dVar34 = dVar28;
  if (dVar28 - dVar32 < 0.0) {
    dVar34 = (double)(fVar2 * fVar1);
  }
  if (dVar32 - dVar28 < 0.0) {
    dVar29 = (double)(fVar4 * fVar1);
  }
  if (dVar32 - dVar28 < 0.0) {
    dVar35 = (double)(fVar3 * fVar1);
  }
  if (dVar32 - dVar28 < 0.0) {
    dVar34 = (double)(fVar2 * fVar1);
  }
  pfVar13 = pfVar14;
  pfVar12 = pfVar15;
  do {
    fVar1 = *pfVar13;
    fVar3 = fVar1 * 0.2;
    dVar32 = (double)fVar3;
    *pfVar12 = fVar3;
    fVar3 = pfVar13[1];
    pfVar12[1] = fVar3 * 0.2;
    fVar2 = pfVar13[2] * 0.2;
    pfVar12[2] = fVar2;
    fVar4 = pfVar13[3];
    pfVar13 = pfVar13 + 4;
    pfVar12[3] = fVar4 * fVar8 + fVar1 * fVar10;
    *pfVar12 = fVar4 * fVar6 +
               fVar2 * (float)(dVar23 * dVar34 - (double)(float)(dVar21 * dVar35)) +
               (float)(dVar32 * dVar22 + (double)(fVar3 * (float)(dVar29 * 0.20000000298023224)));
    pfVar12[1] = fVar4 * fVar5 +
                 fVar2 * (float)(dVar21 * dVar29 - (double)(float)(dVar22 * dVar34)) +
                 (float)(dVar32 * dVar23 + (double)(fVar3 * (float)(dVar35 * 0.20000000298023224)));
    pfVar12[2] = fVar4 * fVar7 +
                 fVar2 * (float)(dVar22 * dVar35 - (double)(float)(dVar23 * dVar29)) +
                 (float)(dVar32 * dVar21 + (double)(fVar3 * (float)(dVar34 * 0.20000000298023224)));
    pfVar12 = pfVar12 + 4;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  draw::FastDrawQuad(local_150,0,0,uVar11,9);
  uVar11 = EffectTexHeaders;
  fVar8 = *(float *)(iVar9 + 500);
  fVar1 = *(float *)(iVar9 + 0x1f0);
  fVar5 = (float)((double)GameCamera.posY - (double)fVar8);
  fVar3 = *(float *)(iVar9 + 0x1f8);
  fVar6 = (float)((double)GameCamera.posX - (double)fVar1);
  fVar7 = (float)((double)GameCamera.posZ - (double)fVar3);
  fVar4 = *(float *)(iVar9 + 0x1fc);
  dVar29 = (double)(float)GameCamera.field8_0x14c;
  dVar32 = (double)(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
  dVar21 = dVar28;
  dVar22 = dVar28;
  dVar23 = dVar28;
  if ((double)(float)SQRT(dVar32) != dVar28) {
    dVar21 = 1.0 / SQRT(dVar32);
    dVar21 = (double)(float)(-(double)(float)((double)(float)(dVar32 * dVar21) * dVar21 - dVar31) *
                             (double)(float)(dVar25 * dVar21) + dVar21);
    dVar21 = (double)(float)(-(double)(float)((double)(float)(dVar32 * dVar21) * dVar21 - dVar31) *
                             (double)(float)(dVar25 * dVar21) + dVar21);
    fVar2 = (float)(-(double)(float)((double)(float)(dVar32 * dVar21) * dVar21 - dVar31) *
                    (double)(float)(dVar25 * dVar21) + dVar21);
    dVar22 = (double)(fVar6 * fVar2);
    dVar23 = (double)(fVar5 * fVar2);
    dVar21 = (double)(fVar7 * fVar2);
  }
  fVar6 = (float)((double)DAT_00969f78 * dVar22 -
                 (double)(float)((double)hero::g_heroGravityDir * dVar21));
  fVar7 = (float)((double)DAT_00969f74 * dVar21 - (double)(float)((double)DAT_00969f78 * dVar23));
  fVar2 = (float)((double)hero::g_heroGravityDir * dVar23 -
                 (double)(float)((double)DAT_00969f74 * dVar22));
  dVar35 = (double)DAT_00800244;
  lVar16 = 4;
  dVar34 = (double)SQRT(fVar2 * fVar2 + fVar7 * fVar7 + fVar6 * fVar6);
  fVar5 = (float)(dVar24 / dVar34);
  dVar32 = dVar28;
  if (dVar28 - dVar34 < 0.0) {
    dVar32 = (double)(fVar7 * fVar5);
  }
  dVar17 = dVar28;
  if (dVar28 - dVar34 < 0.0) {
    dVar17 = (double)(fVar6 * fVar5);
  }
  dVar36 = dVar28;
  if (dVar28 - dVar34 < 0.0) {
    dVar36 = (double)(fVar2 * fVar5);
  }
  if (dVar34 - dVar28 < 0.0) {
    dVar32 = (double)(fVar7 * fVar5);
  }
  if (dVar34 - dVar28 < 0.0) {
    dVar17 = (double)(fVar6 * fVar5);
  }
  if (dVar34 - dVar28 < 0.0) {
    dVar36 = (double)(fVar2 * fVar5);
  }
  pfVar13 = pfVar14;
  pfVar12 = pfVar15;
  do {
    fVar6 = *pfVar13;
    fVar5 = (float)((double)fVar6 * dVar33);
    dVar26 = (double)fVar5;
    *pfVar12 = fVar5;
    dVar34 = (double)pfVar13[1];
    pfVar12[1] = (float)(dVar34 * dVar33);
    fVar5 = (float)((double)pfVar13[2] * dVar33);
    pfVar12[2] = fVar5;
    fVar7 = pfVar13[3];
    pfVar13 = pfVar13 + 4;
    pfVar12[3] = fVar7 * fVar4 + (float)((double)fVar6 * (double)(float)(dVar33 * dVar29));
    *pfVar12 = fVar7 * (float)(dVar22 * dVar35 + (double)fVar1) +
               fVar5 * (float)(dVar23 * dVar36 - (double)(float)(dVar21 * dVar17)) +
               (float)(dVar26 * dVar22 + (double)(float)(dVar34 * (double)(float)(dVar33 * dVar32)))
    ;
    pfVar12[1] = fVar7 * (float)(dVar23 * dVar35 + (double)fVar8) +
                 fVar5 * (float)(dVar21 * dVar32 - (double)(float)(dVar22 * dVar36)) +
                 (float)(dVar26 * dVar23 +
                        (double)(float)(dVar34 * (double)(float)(dVar33 * dVar17)));
    pfVar12[2] = fVar7 * (float)(dVar21 * dVar35 + (double)fVar3) +
                 fVar5 * (float)(dVar22 * dVar17 - (double)(float)(dVar23 * dVar32)) +
                 (float)(dVar26 * dVar21 +
                        (double)(float)(dVar34 * (double)(float)(dVar33 * dVar36)));
    pfVar12 = pfVar12 + 4;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  draw::FastDrawQuad(local_150,0,0,uVar11,9);
  uVar11 = EffectTexHeaders;
  fVar8 = *(float *)(iVar9 + 0x214);
  fVar1 = *(float *)(iVar9 + 0x210);
  fVar5 = (float)((double)GameCamera.posY - (double)fVar8);
  fVar3 = *(float *)(iVar9 + 0x218);
  fVar6 = (float)((double)GameCamera.posX - (double)fVar1);
  fVar7 = (float)((double)GameCamera.posZ - (double)fVar3);
  fVar4 = *(float *)(iVar9 + 0x21c);
  dVar29 = (double)(float)GameCamera.field8_0x14c;
  dVar32 = (double)(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
  dVar21 = dVar28;
  dVar22 = dVar28;
  dVar23 = dVar28;
  if ((double)(float)SQRT(dVar32) != dVar28) {
    dVar21 = 1.0 / SQRT(dVar32);
    dVar21 = (double)(float)(-(double)(float)((double)(float)(dVar32 * dVar21) * dVar21 - dVar31) *
                             (double)(float)(dVar25 * dVar21) + dVar21);
    dVar21 = (double)(float)(-(double)(float)((double)(float)(dVar32 * dVar21) * dVar21 - dVar31) *
                             (double)(float)(dVar25 * dVar21) + dVar21);
    fVar2 = (float)(-(double)(float)((double)(float)(dVar32 * dVar21) * dVar21 - dVar31) *
                    (double)(float)(dVar25 * dVar21) + dVar21);
    dVar22 = (double)(fVar6 * fVar2);
    dVar23 = (double)(fVar5 * fVar2);
    dVar21 = (double)(fVar7 * fVar2);
  }
  fVar6 = (float)((double)DAT_00969f78 * dVar22 -
                 (double)(float)((double)hero::g_heroGravityDir * dVar21));
  fVar7 = (float)((double)DAT_00969f74 * dVar21 - (double)(float)((double)DAT_00969f78 * dVar23));
  fVar2 = (float)((double)hero::g_heroGravityDir * dVar23 -
                 (double)(float)((double)DAT_00969f74 * dVar22));
  lVar16 = 4;
  dVar35 = (double)SQRT(fVar2 * fVar2 + fVar7 * fVar7 + fVar6 * fVar6);
  dVar33 = (double)DAT_00800254;
  fVar5 = (float)(dVar24 / dVar35);
  dVar32 = dVar28;
  if (dVar28 - dVar35 < 0.0) {
    dVar32 = (double)(fVar7 * fVar5);
  }
  dVar34 = dVar28;
  if (dVar28 - dVar35 < 0.0) {
    dVar34 = (double)(fVar6 * fVar5);
  }
  dVar17 = dVar28;
  if (dVar28 - dVar35 < 0.0) {
    dVar17 = (double)(fVar2 * fVar5);
  }
  if (dVar35 - dVar28 < 0.0) {
    dVar32 = (double)(fVar7 * fVar5);
  }
  if (dVar35 - dVar28 < 0.0) {
    dVar34 = (double)(fVar6 * fVar5);
  }
  if (dVar35 - dVar28 < 0.0) {
    dVar17 = (double)(fVar2 * fVar5);
  }
  pfVar13 = pfVar14;
  pfVar12 = pfVar15;
  do {
    dVar36 = (double)(*pfVar13 * DAT_00800258);
    *pfVar12 = *pfVar13 * DAT_00800258;
    dVar35 = (double)(pfVar13[1] * DAT_00800258);
    pfVar12[1] = pfVar13[1] * DAT_00800258;
    fVar6 = pfVar13[2] * DAT_00800258;
    pfVar12[2] = fVar6;
    fVar5 = pfVar13[3];
    pfVar13 = pfVar13 + 4;
    pfVar12[3] = fVar5 * fVar4 + (float)(dVar36 * dVar29);
    *pfVar12 = fVar5 * (float)(dVar22 * dVar33 + (double)fVar1) +
               fVar6 * (float)(dVar23 * dVar17 - (double)(float)(dVar21 * dVar34)) +
               (float)(dVar36 * dVar22 + (double)(float)(dVar35 * dVar32));
    pfVar12[1] = fVar5 * (float)(dVar23 * dVar33 + (double)fVar8) +
                 fVar6 * (float)(dVar21 * dVar32 - (double)(float)(dVar22 * dVar17)) +
                 (float)(dVar36 * dVar23 + (double)(float)(dVar35 * dVar34));
    pfVar12[2] = fVar5 * (float)(dVar21 * dVar33 + (double)fVar3) +
                 fVar6 * (float)(dVar22 * dVar34 - (double)(float)(dVar23 * dVar32)) +
                 (float)(dVar36 * dVar21 + (double)(float)(dVar35 * dVar17));
    pfVar12 = pfVar12 + 4;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  draw::FastDrawQuad(local_150,0,0,uVar11,9);
  uVar11 = EffectTexHeaders;
  fVar8 = *(float *)(iVar9 + 0x224);
  fVar1 = *(float *)(iVar9 + 0x220);
  fVar5 = (float)((double)GameCamera.posY - (double)fVar8);
  fVar3 = *(float *)(iVar9 + 0x228);
  fVar6 = (float)((double)GameCamera.posX - (double)fVar1);
  fVar7 = (float)((double)GameCamera.posZ - (double)fVar3);
  fVar4 = *(float *)(iVar9 + 0x22c);
  dVar29 = (double)(float)GameCamera.field8_0x14c;
  dVar32 = (double)DAT_00800254;
  dVar33 = (double)(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
  dVar21 = dVar28;
  dVar22 = dVar28;
  dVar23 = dVar28;
  if ((double)(float)SQRT(dVar33) != dVar28) {
    dVar21 = 1.0 / SQRT(dVar33);
    dVar21 = (double)(float)(-(double)(float)((double)(float)(dVar33 * dVar21) * dVar21 - dVar31) *
                             (double)(float)(dVar25 * dVar21) + dVar21);
    dVar21 = (double)(float)(-(double)(float)((double)(float)(dVar33 * dVar21) * dVar21 - dVar31) *
                             (double)(float)(dVar25 * dVar21) + dVar21);
    fVar2 = (float)(-(double)(float)((double)(float)(dVar33 * dVar21) * dVar21 - dVar31) *
                    (double)(float)(dVar25 * dVar21) + dVar21);
    dVar23 = (double)(fVar6 * fVar2);
    dVar22 = (double)(fVar5 * fVar2);
    dVar21 = (double)(fVar7 * fVar2);
  }
  fVar6 = (float)((double)DAT_00969f78 * dVar23 -
                 (double)(float)((double)hero::g_heroGravityDir * dVar21));
  fVar7 = (float)((double)DAT_00969f74 * dVar21 - (double)(float)((double)DAT_00969f78 * dVar22));
  fVar2 = (float)((double)hero::g_heroGravityDir * dVar22 -
                 (double)(float)((double)DAT_00969f74 * dVar23));
  lVar16 = 4;
  dVar31 = (double)SQRT(fVar2 * fVar2 + fVar7 * fVar7 + fVar6 * fVar6);
  fVar5 = (float)(dVar24 / dVar31);
  dVar25 = dVar28;
  if (dVar28 - dVar31 < 0.0) {
    dVar25 = (double)(fVar7 * fVar5);
  }
  dVar33 = dVar28;
  if (dVar28 - dVar31 < 0.0) {
    dVar33 = (double)(fVar6 * fVar5);
  }
  dVar35 = dVar28;
  if (dVar28 - dVar31 < 0.0) {
    dVar35 = (double)(fVar2 * fVar5);
  }
  if (dVar31 - dVar28 < 0.0) {
    dVar25 = (double)(fVar7 * fVar5);
  }
  if (dVar31 - dVar28 < 0.0) {
    dVar33 = (double)(fVar6 * fVar5);
  }
  if (dVar31 - dVar28 < 0.0) {
    dVar35 = (double)(fVar2 * fVar5);
  }
  do {
    dVar28 = (double)(*pfVar14 * DAT_00800258);
    *pfVar15 = *pfVar14 * DAT_00800258;
    dVar31 = (double)(pfVar14[1] * DAT_00800258);
    pfVar15[1] = pfVar14[1] * DAT_00800258;
    fVar6 = pfVar14[2] * DAT_00800258;
    pfVar15[2] = fVar6;
    fVar5 = pfVar14[3];
    pfVar14 = pfVar14 + 4;
    pfVar15[3] = fVar5 * fVar4 + (float)(dVar28 * dVar29);
    *pfVar15 = fVar5 * (float)(dVar23 * dVar32 + (double)fVar1) +
               fVar6 * (float)(dVar22 * dVar35 - (double)(float)(dVar21 * dVar33)) +
               (float)(dVar28 * dVar23 + (double)(float)(dVar31 * dVar25));
    pfVar15[1] = fVar5 * (float)(dVar22 * dVar32 + (double)fVar8) +
                 fVar6 * (float)(dVar21 * dVar25 - (double)(float)(dVar23 * dVar35)) +
                 (float)(dVar28 * dVar22 + (double)(float)(dVar31 * dVar33));
    pfVar15[2] = fVar5 * (float)(dVar21 * dVar32 + (double)fVar3) +
                 fVar6 * (float)(dVar23 * dVar33 - (double)(float)(dVar22 * dVar25)) +
                 (float)(dVar28 * dVar21 + (double)(float)(dVar31 * dVar35));
    pfVar15 = pfVar15 + 4;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  draw::FastDrawQuad(local_150,0,0,uVar11,9);
  return;
}



//==== 0032aa00  ns=mobyupdate_helpers  size=0x2c4
// sig: undefined M280_0032aa00(void)
// callers(0): 
// callees(8): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00174f80 vuchain::SetGSReg; 00502e50 FUN_00502e50; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f98 FUN_00502f98; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M280_0032aa00(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float local_b0 [36];
  
  dVar13 = (double)*(float *)(param_1 + 0x10);
  dVar14 = (double)*(float *)(param_1 + 0x14);
  dVar15 = (double)(*(float *)(param_1 + 0x18) + 0.01);
  draw::GetEffectTex(0xb);
  stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(0,0,0,0,0,0);
  idol_draw::PackCmd(0,2,0,1,0x80);
  uVar5 = FUN_00502e50(0);
  vuchain::SetGSReg(8,uVar5);
  uVar5 = FUN_00502f98(1,0,0,1,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar5);
  fVar2 = (float)((double)GameCamera.posY - dVar14);
  fVar3 = (float)((double)GameCamera.posX - dVar13);
  fVar4 = (float)((double)GameCamera.posZ - dVar15);
  dVar10 = 0.0;
  dVar12 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  if (0.0 < dVar12) {
    dVar9 = (double)(float)(dVar12 - (double)DAT_008002d8);
    dVar11 = (double)DAT_008002d4;
    if ((dVar9 < (double)DAT_008002d4) && (dVar11 = dVar9, dVar9 < 0.0)) {
      dVar11 = dVar10;
    }
    fVar1 = (float)(dVar11 / dVar12);
    dVar11 = dVar10;
    if (0.0 - dVar12 < 0.0) {
      dVar11 = (double)(fVar4 * fVar1);
    }
    dVar9 = dVar10;
    if (0.0 - dVar12 < 0.0) {
      dVar9 = (double)(fVar2 * fVar1);
    }
    if (0.0 - dVar12 < 0.0) {
      dVar10 = (double)(fVar3 * fVar1);
    }
    if (dVar12 - 0.0 < 0.0) {
      dVar11 = (double)(fVar4 * fVar1);
    }
    if (dVar12 - 0.0 < 0.0) {
      dVar9 = (double)(fVar2 * fVar1);
    }
    if (dVar12 - 0.0 < 0.0) {
      dVar10 = (double)(fVar3 * fVar1);
    }
    dVar15 = (double)(float)(dVar15 + dVar11);
    dVar14 = (double)(float)(dVar14 + dVar9);
    dVar13 = (double)(float)(dVar13 + dVar10);
  }
  lVar8 = 4;
  pfVar6 = (float *)&DAT_008002e0;
  pfVar7 = local_b0;
  do {
    fVar3 = *pfVar6 * DAT_008002d0;
    *pfVar7 = fVar3;
    fVar4 = pfVar6[1] * DAT_008002d0;
    pfVar7[1] = fVar4;
    fVar1 = pfVar6[2] * DAT_008002d0;
    pfVar7[2] = fVar1;
    fVar2 = pfVar6[3];
    *pfVar7 = (float)((double)fVar3 + dVar13);
    pfVar7[1] = (float)((double)fVar4 + dVar14);
    pfVar6 = pfVar6 + 4;
    pfVar7[3] = fVar2;
    pfVar7[2] = (float)((double)fVar1 + dVar15);
    pfVar7 = pfVar7 + 4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  draw::FastDrawQuad(local_b0,0,0,EffectTexHeaders,9);
  return;
}



//==== 0032acc4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M280_0032acc4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M280_0032acc4(void)

{
  DAT_0080036c = 0x10000;
  return;
}



//==== 0032acd8  ns=mobyupdate_helpers  size=0x80
// sig: undefined M280_0032acd8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M280_0032acd8(int param_1)

{
  if ((((Level == Novalis) && (*(short *)(param_1 + 0xb2) == 0x34)) &&
      (*(short *)(param_1 + 0xa6) == 0x118)) && (*(char *)(param_1 + 0x20) == '\x05')) {
    MiscLevelFlags.field12_0xc = 1;
  }
  if (((Level == Novalis) && (*(short *)(param_1 + 0xb2) == 0x35)) &&
     ((*(short *)(param_1 + 0xa6) == 0x118 && (*(char *)(param_1 + 0x20) == '\x05')))) {
    MiscLevelFlags.field13_0xd = 1;
  }
  return;
}



//==== 0032adf8  ns=mobyupdate_unsorted  size=0x1618
// sig: undefined UpdateMoby_280(MobyInstance * moby)
// callers(0): 
// callees(21): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00047e3c camera::camera5::Camera_SetMobyDrivenPolarRadiusCurve; 00047f74 camera::SetCameraPosition; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 00085300 hero::Hero_TransAnim; 000b72b0 hero::TransitionMovement; 000f1e50 mobyfunc::SetLevelFlag; 000ffb70 mobyutil::GetGroundZ; 00109af0 mobyutil::Delt; 00109b40 mobyutil::AccelDelt; 00109ec0 mobyutil::DeltAng; 0011dfe0 pad::PadRingBitsOn; 00151e70 respawn::SetSpawnPoint; 001523d8 respawn::SaveCheckpointMobyVar; 0015d12c sound::PlayMobySound; 00500250 fastfunc::FastMemSetZero; 00500ca4 fastfunc::FastEulerToMtx1; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots
// strings: 0096c074: 'None'

/* Moby 280 */

void mobyupdate_unsorted::UpdateMoby_280(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ushort uVar10;
  float *val;
  uint uVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  float *pfVar20;
  longlong lVar21;
  undefined4 *unused2;
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
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  double dVar33;
  ulonglong in_f21;
  double dVar34;
  ulonglong in_f22;
  double dVar35;
  ulonglong in_f23;
  double dVar36;
  ulonglong in_f24;
  double dVar37;
  ulonglong in_f25;
  double dVar38;
  ulonglong in_f26;
  double dVar39;
  double in_f27;
  ulonglong in_f28;
  double dVar40;
  ulonglong in_f29;
  double dVar41;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar16 = uVar13 - 0x1f0;
  puVar12 = (ulonglong *)lVar16;
  *puVar12 = uVar13;
  puVar12[0x40] = in_LR;
  puVar12[0x30] = in_f18;
  puVar12[0x31] = in_f19;
  puVar12[0x32] = in_f20;
  puVar12[0x33] = in_f21;
  puVar12[0x34] = in_f22;
  puVar12[0x35] = in_f23;
  puVar12[0x36] = in_f24;
  puVar12[0x37] = in_f25;
  puVar12[0x38] = in_f26;
  puVar12[0x39] = (ulonglong)in_f27;
  puVar12[0x3a] = in_f28;
  puVar12[0x3b] = in_f29;
  puVar12[0x3c] = in_f30;
  puVar12[0x3d] = in_f31;
  puVar12[0x2e] = unaff_r30;
  val = (float *)moby->pVar;
  puVar12[0x2f] = unaff_r31;
  fVar2 = (moby->pos).z;
  fVar3 = (moby->pos).x;
  puVar12[0x2d] = unaff_r29;
  puVar12[0x2c] = unaff_r28;
  fVar4 = (moby->pos).y;
  if (val == (float *)0x0) {
    dVar23 = (double)fastfunc::FastWrapRot((moby->rotation).z,mobyutil::g_FrameTime * 6.2831855);
    (moby->rotation).z = (float)dVar23;
    return;
  }
  uVar1 = moby->state;
  if (uVar1 == '\x03' && g_heroState != BOLT_CRANK_TURNING) {
    moby->state = '\x01';
    if (GameCamera.pCurrentUpdCam == (void *)0x0) {
      return;
    }
    camera::camera5::Camera_DeactivateMobyDrivenCam(4);
    return;
  }
  if (uVar1 == '\x05') {
    *val = 1.0;
  }
  else if (uVar1 == '\x04') {
    fVar2 = -(mobyutil::g_FrameTime * 0.5 - fVar2);
    (moby->pos).z = fVar2;
    if (fVar2 <= val[0xf] - 0.5) {
      (moby->pos).z = val[0xf] - 0.5;
      moby->state = '\x05';
      *val = 1.0;
    }
  }
  else if (uVar1 == '\x03') {
    dVar23 = 0.0;
    *(undefined4 *)(puVar12 + 0xe) = 0;
    *(undefined4 *)((int)puVar12 + 0x74) = 0;
    *(undefined4 *)(puVar12 + 0xf) = 0;
    *(undefined4 *)((int)puVar12 + 0x7c) = 0;
    *(float *)(puVar12 + 0xf) = GameCamera.rot.radius;
    fVar3 = g_heroPosition.x - fVar3;
    fVar4 = g_heroPosition.y - fVar4;
    fVar9 = ABS(fVar3);
    fVar5 = ABS(fVar4);
    *(float *)(puVar12 + 0x1a) = fVar3;
    *(float *)((int)puVar12 + 0xd4) = fVar4;
    *(float *)(puVar12 + 0x1b) = fVar9 - fVar5;
    uVar14 = (ulonglong)(*(uint *)(puVar12 + 0x1a) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar12 + 0x1b) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar12 + 0xd4) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar12 + 0x1a));
    if (*(float *)(puVar12 + 0x1b) - 0.0 < 0.0) {
      fVar2 = fVar5;
    }
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
    fVar3 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
    fVar5 = ABS(*(float *)((int)puVar12 + 0xd4));
    if (*(float *)(puVar12 + 0x1b) - 0.0 < 0.0) {
      fVar5 = fVar9;
    }
    dVar26 = dVar23;
    if (0.0 < fVar2) {
      lVar15 = uVar13 - 0x1e0;
      lVar19 = uVar13 - 0xe8;
      lVar21 = uVar13 - 0xd8;
      lVar22 = 2;
      fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
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
        *(float *)((int)lVar15 + 0x108) = *(float *)((int)lVar15 + 0xf8) * fVar2 * fVar2;
        iVar17 = (int)lVar19;
        lVar15 = lVar15 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar17 + 4) * fVar2 * fVar2;
        lVar21 = lVar21 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar21 = uVar13 - 0xe8;
      pfVar20 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar19 = lVar21;
      do {
        fVar2 = *pfVar20;
        fVar5 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar15 + 0x108) = *(float *)((int)lVar15 + 0x108) * fVar2;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
        lVar19 = lVar19 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar19 = 2;
      lVar15 = lVar16;
      do {
        iVar17 = (int)lVar15;
        iVar18 = (int)lVar21;
        lVar15 = lVar15 + 0x10;
        lVar21 = lVar21 + 0x10;
        dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar17 + 0x108)) +
                          *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) + *(float *)(iVar18 + 0xc)
                         );
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar4 + fVar3);
    }
    dVar41 = 7.5;
    puVar12[0x29] = (longlong)(int)(animationSpeed * 7.5);
    iVar18 = pad::PadRingBitsOn(0x80,*(int *)((int)puVar12 + 0x14c),(int *)0x0);
    iVar17 = hero::g_heroStateTimer;
    dVar27 = (double)hero::g_heroPadStick;
    dVar29 = (double)DAT_0096ba04;
    if (((iVar18 != 0) &&
        (puVar12[0x29] = (longlong)(int)(animationSpeed * 60.5),
        *(int *)((int)puVar12 + 0x14c) < iVar17)) || (dVar40 = 1.0, *val == 1.0)) {
      hero::TransitionMovement(0,1);
      if (val[0xe] == 0.0) {
        if (*val == 1.0) {
          respawn::SaveCheckpointMobyVar(val,4,moby,2,(int *)&DAT_00a53560);
          uVar10 = moby->uid;
          moby->state = '\x04';
          iVar18 = (int)((longlong)((int)(short)uVar10 >> 5) << 2);
          iVar17 = (int)((longlong)((int)(short)uVar10 >> 5) << 2);
          uVar11 = *(uint *)(&DAT_00a54dd0 + iVar17);
          *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar18) =
               *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar18) | 1 << (uVar10 & 0x1f);
          *(uint *)(&DAT_00a54dd0 + iVar17) = uVar11 | 1 << (uVar10 & 0x1f);
          sound::PlayMobySound(0,0,moby);
          if ((val[0xd] != -NAN) && (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1)) {
            respawn::SaveCheckpointMobyVar(val,4,moby,2,(int *)&DAT_00a53560);
            mobyfunc::SetLevelFlag(moby->levelFlagIdx);
            fVar2 = val[0xd];
            if (fVar2 != -NAN) {
              respawn::SetSpawnPoint
                        ((Vec4 *)&Cuboids[(int)fVar2].pos,(Vec4 *)&Cuboids[(int)fVar2].rot);
            }
          }
        }
      }
      else {
        moby->state = '\x01';
      }
      camera::camera5::Camera_DeactivateMobyDrivenCam(4);
      return;
    }
    dVar24 = (double)(--(float)(dVar29 * dVar29) + --(float)(dVar27 * dVar27));
    if (1.0 < (float)SQRT(dVar24)) {
      dVar30 = 1.0 / SQRT(dVar24);
      dVar30 = (double)(float)(-(double)(float)((double)(float)(dVar24 * dVar30) * dVar30 - 1.0) *
                               (double)(float)(dVar30 * 0.5) + dVar30);
      dVar30 = (double)(float)(-(double)(float)((double)(float)(dVar24 * dVar30) * dVar30 - 1.0) *
                               (double)(float)(dVar30 * 0.5) + dVar30);
      dVar24 = -(double)(float)((double)(float)(dVar24 * dVar30) * dVar30 - 1.0);
      dVar30 = (double)(float)(dVar24 * (double)(float)(dVar30 * 0.5) + dVar30);
      dVar29 = (double)(float)(dVar29 * dVar30);
      dVar27 = (double)(float)(dVar27 * dVar30);
      in_f27 = (double)(float)(dVar24 * dVar30);
    }
    dVar29 = -dVar29;
    fastfunc::FastEulerToMtx1(uVar13 - 0x170,uVar13 - 0x180);
    dVar24 = (double)*(float *)(puVar12 + 0x10);
    dVar30 = 1.570796251296997;
    dVar39 = 3.141592502593994;
    fVar2 = (g_heroMobyPtr->rotation).z;
    dVar38 = -3.141592502593994;
    dVar37 = -0.16666656732559204;
    dVar36 = 0.008333025500178337;
    fVar4 = fVar2 + 1.5707963;
    fVar3 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar3 = fVar2;
    }
    fVar5 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
      fVar5 = fVar3;
    }
    dVar35 = -0.0001980741071747616;
    dVar34 = 2.601886990305502e-06;
    fVar2 = 3.1415925 - fVar4;
    if (fVar4 - (3.1415925 - fVar4) < 0.0) {
      fVar2 = fVar4;
    }
    fVar3 = fVar5 * fVar5;
    fVar9 = -3.1415925 - fVar4;
    if ((-3.1415925 - fVar4) - fVar2 < 0.0) {
      fVar9 = fVar2;
    }
    fVar2 = fVar3 * fVar3 * fVar5;
    fVar7 = fVar9 * fVar9;
    fVar4 = fVar3 * fVar2;
    fVar6 = fVar7 * fVar7 * fVar9;
    fVar4 = fVar3 * fVar4 * 2.601887e-06 +
            fVar4 * -0.0001980741 + fVar2 * 0.0083330255 + fVar3 * fVar5 * -0.16666657 + fVar5;
    fVar2 = fVar7 * fVar6;
    fVar5 = fVar7 * fVar2 * 2.601887e-06 +
            fVar2 * -0.0001980741 + fVar6 * 0.0083330255 + fVar7 * fVar9 * -0.16666657 + fVar9;
    fVar3 = DAT_0071f418 * 5.5;
    dVar32 = (double)animationSpeed;
    fVar2 = (fVar5 * (float)((double)*(float *)(puVar12 + 0x16) * dVar24 +
                            (double)(float)((double)*(float *)(puVar12 + 0x14) * in_f27 +
                                           (double)(float)(dVar24 * dVar29 +
                                                          -(double)(float)(dVar27 * (double)*(float 
                                                  *)(puVar12 + 0x12))))) +
            fVar4 * (float)((double)*(float *)((int)puVar12 + 0xb4) * dVar24 +
                           (double)(float)((double)*(float *)((int)puVar12 + 0xa4) * in_f27 +
                                          (double)(float)((double)*(float *)((int)puVar12 + 0x84) *
                                                          dVar29 + -(double)(float)(dVar27 * (double
                                                  )*(float *)((int)puVar12 + 0x94)))))) - val[7];
    if (fVar3 - fVar2 < 0.0) {
      fVar2 = fVar3;
    }
    if (fVar2 - DAT_0071f418 * -5.5 < 0.0) {
      fVar2 = DAT_0071f418 * -5.5;
    }
    fVar2 = val[7] + fVar2;
    dVar27 = (double)fVar2;
    val[7] = fVar2;
    dVar29 = (double)mobyutil::g_FrameTime;
    dVar33 = 3.700000047683716;
    dVar24 = (double)(float)(dVar29 * 3.700000047683716);
    if (dVar24 < dVar27) {
      val[7] = (float)(dVar29 * 3.700000047683716);
      dVar27 = dVar24;
    }
    if (dVar27 < dVar23) {
      val[7] = 0.0;
      dVar27 = dVar23;
    }
    if (ABS(dVar27) < (double)(fVar3 * 0.25)) {
      val[7] = 0.0;
      dVar27 = dVar23;
    }
    dVar24 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4);
    dVar25 = (double)(fVar4 * (float)(dVar27 / dVar24));
    dVar28 = (double)(fVar5 * (float)(dVar27 / dVar24));
    dVar27 = dVar23;
    if (dVar23 - dVar24 < 0.0) {
      dVar27 = dVar25;
    }
    dVar31 = dVar23;
    if (dVar23 - dVar24 < 0.0) {
      dVar31 = dVar28;
    }
    if (dVar24 - dVar23 < 0.0) {
      dVar27 = dVar25;
    }
    if (dVar24 - dVar23 < 0.0) {
      dVar31 = dVar28;
    }
    if (((DAT_0096a778 & 2) != 0) && (g_heroMobyPtr->animationId == 'D')) {
      hero::Hero_TransAnim((float)(longlong)(dVar32 * dVar41),0x3f,0);
      dVar29 = (double)mobyutil::g_FrameTime;
      dVar32 = (double)animationSpeed;
    }
    if ((g_heroMobyPtr->animationId != 'D') && (DAT_0096a77c == 0)) {
      uVar1 = g_heroMobyPtr->updateId;
      if ((uVar1 != '@') || (ABS(val[7]) != 0.0)) {
        if (uVar1 == '?') {
          if (0 < (int)val[7]) {
            hero::Hero_TransAnim((float)(longlong)(dVar32 * 14.5),0x40,0);
          }
        }
        else if ((uVar1 != '@') || (val[7] <= (float)(dVar29 * dVar33) * 0.6)) {
          if ((uVar1 == 'A') && (val[7] < (float)(dVar29 * dVar33) * 0.4)) {
            hero::Hero_TransAnim((float)(longlong)(dVar32 * 16.5),0x40,0);
          }
        }
        else {
          hero::Hero_TransAnim((float)(longlong)(dVar32 * 14.5),0x41,0);
        }
      }
      else {
        hero::Hero_TransAnim((float)(longlong)(dVar32 * 14.5),0x3f,0);
      }
    }
    fVar2 = (float)((double)g_heroPosition.x + dVar31);
    fVar3 = (float)((double)g_heroPosition.y + dVar27);
    fVar4 = (moby->pos).x;
    fVar5 = (moby->pos).y;
    fVar9 = fVar2 - fVar4;
    fVar6 = fVar3 - fVar5;
    dVar29 = ABS((double)fVar9);
    dVar41 = ABS((double)fVar6);
    g_heroPosition.x = fVar2;
    g_heroPosition.y = fVar3;
    *(float *)((int)puVar12 + 0xc4) = fVar9;
    *(float *)(puVar12 + 0x19) = fVar6;
    dVar24 = (double)g_heroPosition.z;
    *(float *)((int)puVar12 + 0xcc) = (float)(dVar29 - dVar41);
    uVar14 = (ulonglong)(*(uint *)((int)puVar12 + 0xc4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar12 + 0xcc) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar12 + 0x19) >> 0x1d) & 4;
    dVar27 = ABS((double)*(float *)((int)puVar12 + 0xc4));
    if ((double)*(float *)((int)puVar12 + 0xcc) - dVar23 < 0.0) {
      dVar27 = dVar41;
    }
    fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
    dVar41 = ABS((double)*(float *)(puVar12 + 0x19));
    if ((double)*(float *)((int)puVar12 + 0xcc) - dVar23 < 0.0) {
      dVar41 = dVar29;
    }
    fVar6 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
    dVar29 = dVar23;
    if (dVar23 < dVar27) {
      lVar15 = uVar13 - 0x1e0;
      lVar21 = uVar13 - 0xf8;
      lVar19 = uVar13 - 0x108;
      lVar22 = 2;
      fVar7 = (float)(dVar41 - dVar27) / (float)(dVar41 + dVar27);
      fVar8 = fVar7 * fVar7;
      *(float *)((int)puVar12 + 0xf4) = fVar7;
      *(float *)((int)puVar12 + 0xec) = fVar7;
      *(float *)(puVar12 + 0x1e) = fVar7;
      *(float *)(puVar12 + 0x1d) = fVar7;
      fVar7 = fVar8 * fVar8;
      *(float *)((int)puVar12 + 0xec) = *(float *)((int)puVar12 + 0xec) * fVar8;
      *(float *)(puVar12 + 0x1e) = *(float *)(puVar12 + 0x1e) * fVar7;
      *(float *)((int)puVar12 + 0xf4) = *(float *)((int)puVar12 + 0xf4) * fVar7 * fVar8;
      do {
        *(float *)((int)lVar15 + 0xe8) = *(float *)((int)lVar15 + 0xd8) * fVar7 * fVar7;
        iVar17 = (int)lVar19;
        lVar19 = lVar19 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar17 + 4) * fVar7 * fVar7;
        lVar21 = lVar21 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar21 = uVar13 - 0x108;
      pfVar20 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar19 = lVar21;
      do {
        fVar7 = *pfVar20;
        fVar8 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar15 + 0xe8) = *(float *)((int)lVar15 + 0xe8) * fVar7;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar8;
        lVar19 = lVar19 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar15 = 2;
      dVar27 = dVar23;
      do {
        iVar17 = (int)lVar16;
        iVar18 = (int)lVar21;
        lVar16 = lVar16 + 0x10;
        lVar21 = lVar21 + 0x10;
        dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar17 + 0xe8)) +
                          *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) + *(float *)(iVar18 + 0xc)
                         );
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      dVar29 = (double)((float)(dVar27 + 0.7853981852531433) * fVar9 + fVar6);
    }
    fVar6 = mobyutil::g_FrameTime;
    fVar9 = DAT_0071f40c;
    dVar41 = (double)(float)(dVar29 + dVar30);
    dVar27 = (double)(float)(dVar39 - dVar29);
    if (dVar29 - (double)(float)(dVar39 - dVar29) < 0.0) {
      dVar27 = dVar29;
    }
    dVar30 = (double)(float)(dVar39 - dVar41);
    if (dVar41 - (double)(float)(dVar39 - dVar41) < 0.0) {
      dVar30 = dVar41;
    }
    unused2 = &DAT_010bca40;
    dVar39 = (double)(float)(dVar38 - dVar29);
    if ((double)(float)(dVar38 - dVar29) - dVar27 < 0.0) {
      dVar39 = dVar27;
    }
    dVar27 = (double)(float)(dVar38 - dVar41);
    if ((double)(float)(dVar38 - dVar41) - dVar30 < 0.0) {
      dVar27 = dVar30;
    }
    dVar41 = (double)(float)(dVar39 * dVar39);
    dVar30 = (double)(float)(dVar27 * dVar27);
    dVar33 = (double)(float)(dVar41 * (double)(float)(dVar41 * dVar39));
    dVar38 = (double)(float)(dVar30 * (double)(float)(dVar30 * dVar27));
    dVar32 = (double)(float)(dVar41 * dVar33);
    dVar25 = (double)(float)(dVar30 * dVar38);
    dVar41 = (double)(((float)((double)(float)(dVar41 * dVar32) * dVar34 +
                              (double)(float)(dVar32 * dVar35 +
                                             (double)(float)(dVar33 * dVar36 +
                                                            (double)(float)((double)(float)(dVar41 *
                                                                                           dVar39) *
                                                                            dVar37 + dVar39)))) *
                       1.05 + fVar5) - fVar3);
    dVar27 = (double)(((float)((double)(float)(dVar30 * dVar25) * dVar34 +
                              (double)(float)(dVar25 * dVar35 +
                                             (double)(float)(dVar38 * dVar36 +
                                                            (double)(float)((double)(float)(dVar30 *
                                                                                           dVar27) *
                                                                            dVar37 + dVar27)))) *
                       1.05 + fVar4) - fVar2);
    dVar30 = (double)SQRT((float)(dVar27 * dVar27 + (double)(float)(dVar41 * dVar41)));
    *(float *)(puVar12 + 0x18) = (float)-dVar30;
    mobyutil::AccelDelt((float)dVar23,fVar9 * 0.015,fVar9 * 0.3,fVar6 * 7.0,
                        (float *)(puVar12 + 0x18),0x32ad58,&DAT_010bca40);
    g_heroPosition.z = (float)dVar24;
    dVar24 = (double)(float)((double)(float)((double)DAT_010bca40 / dVar30) * dVar41);
    dVar41 = (double)(float)((double)(float)((double)DAT_010bca40 / dVar30) * dVar27);
    dVar27 = dVar23;
    if (dVar23 - dVar30 < 0.0) {
      dVar27 = dVar24;
    }
    dVar36 = dVar23;
    if (dVar23 - dVar30 < 0.0) {
      dVar36 = dVar41;
    }
    if (dVar30 - dVar23 < 0.0) {
      dVar27 = dVar24;
    }
    if (dVar30 - dVar23 < 0.0) {
      dVar36 = dVar41;
    }
    g_heroPosition.y = (float)((double)g_heroPosition.y + dVar27);
    g_heroPosition.x = (float)((double)g_heroPosition.x + dVar36);
    if (Cheats[5] == '\0') {
      dVar27 = (double)fastfunc::FastWrapRot(1.5707964,(float)dVar29);
    }
    else {
      dVar27 = (double)fastfunc::FastWrapRot(-1.5707964,(float)dVar29);
    }
    hero::g_heroIdealRotZ = (float)dVar27;
    dVar41 = 6.2831854820251465;
    mobyutil::DeltAng((float)dVar27,mobyutil::g_FrameTime * 6.2831855,&g_heroRotation.z,0x720000,
                      (int)unused2,0);
    fVar2 = DAT_0071f418 * 9.8 + val[9];
    val[9] = fVar2;
    dVar24 = 2.0;
    g_heroPosition.z = g_heroPosition.z - (fVar2 - 2.0);
    dVar27 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,&g_heroPosition,0);
    g_heroPosition.z = (float)((double)g_heroPosition.z - dVar24);
    if ((double)g_heroPosition.z < dVar27) {
      g_heroPosition.z = (float)dVar27;
      val[9] = 0.0;
    }
    if (g_heroMobyPtr->animationId != 'D') {
      dVar27 = (double)fastfunc::FastWrapRot(0.2617994,(float)dVar29);
      mobyutil::DeltAng((float)dVar27,mobyutil::g_FrameTime * 3.1415927,&(moby->rotation).z,0x720000
                        ,(int)unused2,0);
      dVar24 = (double)fastfunc::FastDiffRots((double)(moby->rotation).z,dVar27);
      dVar30 = 1.0471975803375244;
      if (dVar24 <= 1.0471975803375244) {
        dVar27 = (double)fastfunc::FastDiffRots((double)(moby->rotation).z,dVar27);
        if (dVar27 < -1.0471975803375244) {
          dVar27 = (double)fastfunc::FastWrapRot((moby->rotation).z,(float)dVar30);
          (moby->rotation).z = (float)dVar27;
        }
      }
      else {
        dVar27 = (double)fastfunc::FastDiffRots((double)(moby->rotation).z,0x3ff0c15240000000);
        (moby->rotation).z = (float)dVar27;
      }
    }
    dVar27 = (double)fastfunc::FastSubRots((float)dVar29,(float)dVar26);
    fVar2 = (float)((double)val[6] + dVar27) / (float)((double)val[0xc] * dVar41);
    dVar26 = (double)fVar2;
    val[6] = (float)((double)val[6] + dVar27);
    *val = fVar2;
    if (dVar40 < dVar26) {
      *val = 1.0;
      dVar26 = dVar40;
    }
    if (dVar26 < dVar23) {
      *val = 0.0;
    }
    fastfunc::FastMemSetZero(&hero::g_heroVelocity,0x90);
  }
  else if (uVar1 == '\x01') {
    uVar10 = moby->uid;
    if (((&DAT_00a545c4)[(short)uVar10] == '\0') &&
       ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar10 >> 5) << 2))
        & 1 << (uVar10 & 0x1f)) == 0)) {
      fVar4 = fVar4 - g_heroPosition.y;
      fVar3 = fVar3 - g_heroPosition.x;
      if ((SQRT(fVar3 * fVar3 + fVar4 * fVar4) < 1.75) && (g_heroType == '\0')) {
        *(float *)((int)puVar12 + 0xdc) = fVar3;
        *(float *)(puVar12 + 0x1c) = fVar4;
        *(float *)((int)puVar12 + 0xe4) = ABS(fVar3) - ABS(fVar4);
        fVar9 = g_heroRotation.z;
        fVar2 = 0.0;
        uVar14 = (ulonglong)(*(uint *)((int)puVar12 + 0xdc) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0xe4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar12 + 0x1c) >> 0x1d) & 4;
        fVar5 = ABS(*(float *)((int)puVar12 + 0xdc));
        if (*(float *)((int)puVar12 + 0xe4) - 0.0 < 0.0) {
          fVar5 = ABS(fVar4);
        }
        fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
        fVar6 = ABS(*(float *)(puVar12 + 0x1c));
        if (*(float *)((int)puVar12 + 0xe4) - 0.0 < 0.0) {
          fVar6 = ABS(fVar3);
        }
        fVar3 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
        if (0.0 < fVar5) {
          lVar15 = uVar13 - 0x1e0;
          lVar19 = uVar13 - 200;
          lVar21 = uVar13 - 0xb8;
          lVar22 = 2;
          fVar5 = (fVar6 - fVar5) / (fVar6 + fVar5);
          fVar6 = fVar5 * fVar5;
          *(float *)((int)puVar12 + 0x134) = fVar5;
          *(float *)((int)puVar12 + 300) = fVar5;
          *(float *)(puVar12 + 0x26) = fVar5;
          *(float *)(puVar12 + 0x25) = fVar5;
          fVar5 = fVar6 * fVar6;
          *(float *)((int)puVar12 + 300) = *(float *)((int)puVar12 + 300) * fVar6;
          *(float *)(puVar12 + 0x26) = *(float *)(puVar12 + 0x26) * fVar5;
          *(float *)((int)puVar12 + 0x134) = *(float *)((int)puVar12 + 0x134) * fVar5 * fVar6;
          do {
            *(float *)((int)lVar15 + 0x128) = *(float *)((int)lVar15 + 0x118) * fVar5 * fVar5;
            iVar17 = (int)lVar19;
            lVar15 = lVar15 + 8;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar21 + 4) = *(float *)(iVar17 + 4) * fVar5 * fVar5;
            lVar21 = lVar21 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar22 = 4;
          lVar21 = uVar13 - 200;
          pfVar20 = (float *)&DAT_007358e0;
          lVar15 = lVar16;
          lVar19 = lVar21;
          do {
            fVar5 = *pfVar20;
            fVar6 = pfVar20[1];
            pfVar20 = pfVar20 + 2;
            *(float *)((int)lVar15 + 0x128) = *(float *)((int)lVar15 + 0x128) * fVar5;
            lVar15 = lVar15 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar6;
            lVar19 = lVar19 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar15 = 2;
          do {
            iVar17 = (int)lVar16;
            iVar18 = (int)lVar21;
            lVar16 = lVar16 + 0x10;
            lVar21 = lVar21 + 0x10;
            fVar2 = fVar2 + *(float *)(iVar17 + 0x128) + *(float *)(iVar18 + 4) +
                    *(float *)(iVar18 + 8) + *(float *)(iVar18 + 0xc);
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          fVar2 = (fVar2 + 0.7853982) * fVar4 + fVar3;
        }
        dVar23 = (double)fastfunc::FastSubRots(fVar9,fVar2);
        if ((((dVar23 < 1.5707963705062866) && (ABS((g_heroPosition.z - 0.3) - (moby->pos).z) < 0.2)
             ) && (g_CurrentWeapon == 8)) && (g_currentWeaponMoby != (MobyInstance *)0x0)) {
          puVar12[0x29] = (longlong)(int)(animationSpeed * 7.5);
          iVar17 = pad::PadRingBitsOn(0x80,*(int *)((int)puVar12 + 0x14c),(int *)0x0);
          if (((iVar17 != 0) &&
              (fVar2 = val[5], puVar12[0x29] = (longlong)(int)(animationSpeed * 30.5),
              (uint)*(float *)((int)puVar12 + 0x14c) < (uint)fVar2)) &&
             (((moby->pos).z == val[0xf] &&
              (uVar11 = (int)*val >> 0x1f, (int)((uVar11 >> 1 ^ (uint)*val) - uVar11) < 0x3f800000))
             )) {
            val[5] = 0.0;
            DAT_010bca40 = 0.0;
            if (MobyUpdateChainStart != 0) {
              iVar17 = MobyUpdateChainStart;
              do {
                if (((*(ushort *)(iVar17 + 0x34) & 0x1000) != 0) &&
                   (fVar3 = (moby->pos).y - *(float *)(iVar17 + 0x14),
                   fVar2 = (moby->pos).x - *(float *)(iVar17 + 0x10),
                   SQRT(fVar2 * fVar2 + fVar3 * fVar3) < 3.25)) goto LAB_0032c344;
                iVar17 = *(int *)(iVar17 + 0x28);
              } while (iVar17 != 0);
            }
            hero::TransitionMovement(0x3b,1);
            puVar12[0x29] = (longlong)(int)(animationSpeed * 180.5);
            camera::SetCameraPosition(0x951500,0x951510,3,*(undefined4 *)((int)puVar12 + 0x14c),0);
            camera::camera5::Camera_SetMobyDrivenTargetRot(&Cuboids[(int)val[8]].rot.x);
            camera::camera5::Camera_SetMobyDrivenTargetPos(&Cuboids[(int)val[8]].pos.x);
            camera::camera5::Camera_SetMobyDrivenPolarRadiusCurve(val[10],val[0xb]);
            moby->state = '\x03';
            val[9] = 0.0;
            val[6] = val[0xc] * 6.2831855 * *val;
            goto LAB_0032c344;
          }
        }
      }
      uVar11 = (int)*val >> 0x1f;
      if ((int)((uVar11 >> 1 ^ (uint)*val) - uVar11) < 0x3f800000) {
        val[5] = (float)((int)val[5] + 1);
        dVar23 = 60.5;
        mobyutil::Delt(0.0,1.0 / (float)(longlong)(animationSpeed * 60.5),val);
        if (0 < (int)*val) {
          dVar23 = (double)fastfunc::FastDiffRots
                                     ((double)(moby->rotation).z,
                                      (double)((val[0xc] * 6.2831855) /
                                              (float)(longlong)((double)animationSpeed * dVar23)));
          (moby->rotation).z = (float)dVar23;
        }
        fVar2 = mobyutil::g_FrameTime * 0.5 + (moby->pos).z;
        (moby->pos).z = fVar2;
        if (val[0xf] <= fVar2) {
          (moby->pos).z = val[0xf];
        }
      }
      else if (val[0xe] != 0.0) {
        if ((val[0xd] != -NAN) && (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1)) {
          respawn::SaveCheckpointMobyVar(val,4,moby,2,(int *)&DAT_00a53560);
          mobyfunc::SetLevelFlag(moby->levelFlagIdx);
          fVar2 = val[0xd];
          if (fVar2 != -NAN) {
            respawn::SetSpawnPoint
                      ((Vec4 *)&Cuboids[(int)fVar2].pos,(Vec4 *)&Cuboids[(int)fVar2].rot);
          }
        }
        fVar2 = -(mobyutil::g_FrameTime * 0.5 - (moby->pos).z);
        (moby->pos).z = fVar2;
        if (fVar2 <= val[0xf] - 0.5) {
          (moby->pos).z = val[0xf] - 0.5;
        }
      }
    }
    else {
      moby->state = '\x05';
      (moby->pos).z = fVar2 - 0.5;
      *val = 1.0;
    }
  }
  else if (uVar1 == '\0') {
    val[0xf] = fVar2;
    moby->state = '\x01';
  }
LAB_0032c344:
  if ((((Level == Novalis) && (moby->uid == 0x34)) && (moby->oClass == BOLT_CRANK)) &&
     (moby->state == '\x05')) {
    MiscLevelFlags.field12_0xc = 1;
  }
  if (((Level == Novalis) && (moby->uid == 0x35)) &&
     ((moby->oClass == BOLT_CRANK && (moby->state == '\x05')))) {
    MiscLevelFlags.field13_0xd = 1;
  }
  return;
}



//==== 0032c410  ns=mobyupdate_helpers  size=0x14
// sig: undefined M281_0032c410(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M281_0032c410(void)

{
  DAT_008003dc = 0x10000;
  return;
}



//==== 0032c468  ns=mobyupdate_unsorted  size=0x5f4
// sig: undefined UpdateMoby_281(MobyInstance * moby)
// callers(0): 
// callees(9): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere; 000efb38 mobyfunc::DeleteMoby; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0010e030 mobyutil::MB_genericExplosion; 0015d12c sound::PlayMobySound; 004fff60 fastfunc::FastDecTimerS32; 00500608 fastfunc::FastVecNormalize

/* Moby 281 */

void mobyupdate_unsorted::UpdateMoby_281(MobyInstance *moby)

{
  byte bVar1;
  void *pvVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [8];
  float local_38;
  
  lVar8 = (longlong)(int)moby;
  bVar1 = moby->state;
  pvVar2 = moby->pVar;
  uVar10 = ZEXT48(pvVar2);
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      uVar3 = *(undefined4 *)((int)pvVar2 + 0x20);
      (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar2 + 0x10);
      (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar2 + 0x14);
      (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar2 + 0x18);
      iVar9 = collproc::CollLine(local_60,lVar8 + 0x10,5,uVar3,0);
      if (iVar9 != 0) {
        fVar4 = 0.0;
        fVar5 = CollOutput.normal.z * CollOutput.normal.z +
                CollOutput.normal.x * CollOutput.normal.x +
                CollOutput.normal.y * CollOutput.normal.y;
        fVar7 = fVar4;
        fVar6 = fVar4;
        if (SQRT(fVar5) != 0.0) {
          fVar6 = 1.0 / SQRT(fVar5);
          fVar6 = -(fVar5 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
          fVar6 = -(fVar5 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
          fVar6 = -(fVar5 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
          fVar4 = CollOutput.normal.z * fVar6;
          fVar7 = CollOutput.normal.y * fVar6;
          fVar6 = CollOutput.normal.x * fVar6;
        }
        if (fVar4 * *(float *)((int)pvVar2 + 0x18) +
            fVar6 * *(float *)((int)pvVar2 + 0x10) + fVar7 * *(float *)((int)pvVar2 + 0x14) < 0.0) {
          fastfunc::FastVecNormalize(uVar10 + 0x10,uVar10 + 0x10,local_50);
          *(float *)((int)pvVar2 + 0x10) = *(float *)((int)pvVar2 + 0x10) * 0.25;
          *(float *)((int)pvVar2 + 0x14) = *(float *)((int)pvVar2 + 0x14) * 0.25;
          *(float *)((int)pvVar2 + 0x18) = *(float *)((int)pvVar2 + 0x18) * 0.25;
        }
      }
      dVar12 = 0.3330000042915344;
      iVar9 = collproc::CollSphere(0x3fd54fdf40000000,lVar8 + 0x10,&DAT_0032c428,2,0);
      if (iVar9 != 0) {
        fVar4 = 0.0;
        dVar11 = (double)SQRT(CollOutput.normal.z * CollOutput.normal.z +
                              CollOutput.normal.x * CollOutput.normal.x +
                              CollOutput.normal.y * CollOutput.normal.y);
        if (dVar11 == 0.0) {
          local_38 = 0.0;
          fVar5 = fVar4;
        }
        else {
          local_38 = (float)(dVar12 / dVar11);
          fVar4 = CollOutput.normal.x * local_38;
          fVar5 = CollOutput.normal.y * local_38;
          local_38 = CollOutput.normal.z * local_38;
        }
        if (local_38 * *(float *)((int)pvVar2 + 0x18) +
            fVar4 * *(float *)((int)pvVar2 + 0x10) + fVar5 * *(float *)((int)pvVar2 + 0x14) < 0.0) {
          fastfunc::FastVecNormalize(uVar10 + 0x10,uVar10 + 0x10,local_40);
          *(float *)((int)pvVar2 + 0x10) = *(float *)((int)pvVar2 + 0x10) * 0.25;
          *(float *)((int)pvVar2 + 0x14) = *(float *)((int)pvVar2 + 0x14) * 0.25;
          *(float *)((int)pvVar2 + 0x18) = *(float *)((int)pvVar2 + 0x18) * 0.25;
        }
        (moby->pos).x = CollOutput.ip.x;
        (moby->pos).y = CollOutput.ip.y;
        fVar4 = CollOutput.ip.z + local_38;
        (moby->pos).w = CollOutput.ip.w;
        (moby->pos).z = fVar4;
        if ((0.3 <= local_38) &&
           (SQRT(*(float *)((int)pvVar2 + 0x18) * *(float *)((int)pvVar2 + 0x18) +
                 *(float *)((int)pvVar2 + 0x10) * *(float *)((int)pvVar2 + 0x10) +
                 *(float *)((int)pvVar2 + 0x14) * *(float *)((int)pvVar2 + 0x14)) <
            mobyutil::g_FrameTime * 0.25)) {
          auVar13 = ZEXT416(0xffffffff);
          auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
          moby->state = '\x02';
          auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
          auVar13 = loadVectorLeftIndexed(0x18,0x32c428);
          auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar13 = vectorMultiplyAddFloatingPoint
                              (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60
                               ,auVar14);
          auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
          auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar3 = storeVectorElementWordIndexed
                            (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0x28,
                             uVar10);
          *(undefined4 *)((int)pvVar2 + 0x28U & 0xfffffffc) = uVar3;
        }
      }
      iVar9 = fastfunc::FastDecTimerS32(uVar10 + 0x28);
      if (iVar9 == 0) {
        iVar9 = *(int *)((int)pvVar2 + 0x28);
        if ((iVar9 < (int)(animationSpeed * 45.5)) &&
           (iVar9 == (iVar9 / (int)(animationSpeed * 10.5)) * (int)(animationSpeed * 10.5))) {
          *(undefined1 *)((int)pvVar2 + 7) = 0xfa;
          mobyutil::MB_UpdateLightsTransition(lVar8,uVar10);
        }
      }
      else {
        moby->state = '\x03';
      }
      *(float *)((int)pvVar2 + 0x18) =
           *(float *)((int)pvVar2 + 0x18) - *(float *)((int)pvVar2 + 0x24);
    }
  }
  else if (bVar1 < 3) {
    iVar9 = fastfunc::FastDecTimerS32(uVar10 + 0x28);
    if (iVar9 == 0) {
      iVar9 = *(int *)((int)pvVar2 + 0x28);
      if ((iVar9 < (int)(animationSpeed * 61.5)) &&
         (iVar9 == (iVar9 / (int)(animationSpeed * 20.5)) * (int)(animationSpeed * 20.5))) {
        *(undefined1 *)((int)pvVar2 + 7) = 0xfa;
        mobyutil::MB_UpdateLightsTransition(lVar8,uVar10);
      }
    }
    else {
      moby->state = '\x03';
    }
  }
  else if (bVar1 < 4) {
    sound::PlayMobySound(0,0,moby);
    mobyutil::MB_genericExplosion
              (0x3ff8000000000000,0x3ff0000000000000,0x4008000000000000,0x3ffb333340000000,
               0x4010000000000000,0x3ff0000000000000,0x401c000000000000,lVar8,&DAT_00a15d30,0,0,7,7,
               10,0x14);
    mobyfunc::DeleteMoby(moby);
    return;
  }
  mobyutil::MB_ColorDyingMoby(lVar8,uVar10);
  return;
}



//==== 0032ca80  ns=Global  size=0x320
// sig: undefined FUN_0032ca80(void)
// callers(2): 001b33e0 mobyupdate_unsorted::UpdateMoby_107; 003ad150 mobyupdate_unsorted::UpdateMoby_541
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat

MobyInstance *
FUN_0032ca80(double param_1,undefined4 param_2,f32 *param_3,float *param_4,undefined8 param_5,
            undefined4 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  void *pvVar4;
  float fVar5;
  float fVar6;
  undefined2 uVar7;
  ulonglong *puVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  MobyInstance *pMVar13;
  longlong lVar12;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  double dVar20;
  ulonglong in_f31;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar12 = uVar11 - 0xd0;
  puVar8 = (ulonglong *)lVar12;
  *puVar8 = uVar11;
  puVar8[0x1c] = in_LR;
  puVar8[0x19] = in_f31;
  puVar8[0x14] = unaff_r27;
  puVar8[0x17] = unaff_r30;
  puVar8[0x16] = unaff_r29;
  puVar8[0x15] = unaff_r28;
  puVar8[0x18] = unaff_r31;
  puVar8[0x13] = unaff_r26;
  pMVar13 = mobyfunc::CreateMoby(BOMB_0119);
  if (pMVar13 != (MobyInstance *)0x0) {
    pvVar4 = pMVar13->pVar;
    auVar21 = ZEXT416(0xffffffff);
    auVar22 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
    pMVar13->updateDistance = -1;
    pMVar13->drawDistance = 0xff;
    pMVar13->enabled = '\x01';
    pMVar13->state = '\x01';
    *(undefined4 *)((int)pvVar4 + 0x20) = param_2;
    *(float *)((int)pvVar4 + 0x24) = (float)param_1;
    *(undefined4 *)((int)pvVar4 + 0x28) = param_6;
    auVar21 = loadVectorLeftIndexed(in_LR,0x32ca5c);
    auVar22 = vectorShiftLeftIntegerWord(auVar22,auVar22);
    auVar21 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar24 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar22 = vectorMultiplyAddFloatingPoint
                        (auVar24,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,
                         auVar22);
    auVar21 = ZEXT416(0xffffffff);
    auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
    auVar23 = vectorShiftLeftIntegerWord(auVar21,auVar21);
    auVar21 = vectorConvertToSignedFixedPointWordSaturate(auVar22,0);
    auVar21 = vectorSplatHalfWord(auVar21,1);
    uVar7 = storeVectorElementHalfWordIndexed(auVar21,0xc,ZEXT48(pvVar4));
    *(undefined2 *)((int)pvVar4 + 0xc) = uVar7;
    auVar21 = loadVectorLeftIndexed(4,0x32ca5c);
    auVar21 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar21 = vectorMultiplyAddFloatingPoint
                        (auVar24,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,
                         auVar23);
    auVar21 = vectorConvertToSignedFixedPointWordSaturate(auVar21,0);
    auVar21 = vectorSplatHalfWord(auVar21,1);
    uVar7 = storeVectorElementHalfWordIndexed(auVar21,0xe,ZEXT48(pvVar4));
    *(undefined2 *)((int)pvVar4 + 0xe) = uVar7;
    (pMVar13->pos).x = *param_3;
    (pMVar13->pos).y = param_3[1];
    (pMVar13->pos).z = param_3[2];
    (pMVar13->pos).w = param_3[3];
    *(float *)((int)pvVar4 + 0x10) = *param_4;
    *(float *)((int)pvVar4 + 0x14) = param_4[1];
    *(float *)((int)pvVar4 + 0x18) = param_4[2];
    *(float *)((int)pvVar4 + 0x1c) = param_4[3];
    dVar20 = (double)mobyutil::MB_randRangeFloat(-180.0,180.0);
    (pMVar13->rotation).x = (float)(dVar20 * 0.01745329238474369);
    fVar5 = *param_4;
    fVar6 = param_4[1];
    fVar2 = ABS(*param_4);
    fVar3 = ABS(param_4[1]);
    *(float *)(puVar8 + 0xe) = fVar2 - fVar3;
    fVar1 = 0.0;
    uVar14 = (ulonglong)((uint)fVar5 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1e) & 2 | (ulonglong)((uint)fVar6 >> 0x1d) & 4
    ;
    fVar5 = fVar2;
    if (*(float *)(puVar8 + 0xe) - 0.0 < 0.0) {
      fVar5 = fVar3;
    }
    fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
    if (*(float *)(puVar8 + 0xe) - 0.0 < 0.0) {
      fVar3 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
    if (0.0 < fVar5) {
      lVar17 = uVar11 - 0xc0;
      lVar16 = uVar11 - 0x5c;
      lVar15 = uVar11 - 0x4c;
      lVar19 = 2;
      fVar5 = (fVar3 - fVar5) / (fVar3 + fVar5);
      fVar3 = fVar5 * fVar5;
      *(float *)(puVar8 + 0x10) = fVar5;
      *(float *)(puVar8 + 0xf) = fVar5;
      *(float *)((int)puVar8 + 0x7c) = fVar5;
      *(float *)((int)puVar8 + 0x74) = fVar5;
      fVar5 = fVar3 * fVar3;
      *(float *)(puVar8 + 0xf) = *(float *)(puVar8 + 0xf) * fVar3;
      *(float *)((int)puVar8 + 0x7c) = *(float *)((int)puVar8 + 0x7c) * fVar5;
      *(float *)(puVar8 + 0x10) = *(float *)(puVar8 + 0x10) * fVar5 * fVar3;
      do {
        *(float *)((int)lVar17 + 0x74) = *(float *)((int)lVar17 + 100) * fVar5 * fVar5;
        iVar9 = (int)lVar16;
        lVar17 = lVar17 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)(iVar9 + 4) * fVar5 * fVar5;
        lVar15 = lVar15 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar17 = uVar11 - 0x5c;
      pfVar18 = (float *)&DAT_007358e0;
      lVar19 = 4;
      lVar15 = lVar17;
      lVar16 = lVar12;
      do {
        fVar5 = *pfVar18;
        fVar3 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar16 + 0x74) = *(float *)((int)lVar16 + 0x74) * fVar5;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar3;
        lVar15 = lVar15 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar15 = 2;
      do {
        iVar9 = (int)lVar12;
        iVar10 = (int)lVar17;
        lVar12 = lVar12 + 0x10;
        lVar17 = lVar17 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar9 + 0x74) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                *(float *)(iVar10 + 0xc);
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar6 + fVar2;
    }
    (pMVar13->rotation).z = fVar1 + 1.5707964;
    mobyfunc::UpdateMobyTransform(pMVar13);
  }
  return pMVar13;
}



//==== 0032cda0  ns=mobyupdate_helpers  size=0xf4
// sig: undefined M282_0032cda0(void)
// callers(0): 
// callees(1): 000f0ea8 mobyfunc::AttachManipulator
// strings: 0096c074: 'None'

void mobyupdate_helpers::M282_0032cda0(int param_1)

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
          mobyfunc::AttachManipulator((MobyInstance *)puVar3[0x5e],1,&DAT_00a1bf80);
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



//==== 0032cef0  ns=mobyupdate_unsorted  size=0xbd4
// sig: undefined UpdateMoby_282(MobyInstance * moby)
// callers(0): 
// callees(21): 000e8aa4 memcard::memcard_Save; 000efa28 mobyfunc::CreateMoby; 000efb38 mobyfunc::DeleteMoby; 000f0ea8 mobyfunc::AttachManipulator; 000f1e50 mobyfunc::SetLevelFlag; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe610 mobyutil::MB_SphericalToVector; 00106308 mobyutil::MB_SetZBoundsFromPos; 00112a38 mobyutil::MB_ToastMessage; 001167c8 mobyutil::MB_UpdateManipulatorRot; 00117f38 mobyutil::MB_AttachMobyToJoint; 00119488 mobyutil::MB_SetPointAheadOfMoby; 00151e70 respawn::SetSpawnPoint; 004d3720 FUN_004d3720; 004d3870 FUN_004d3870; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt
// strings: 0096c074: 'None'

/* Moby 282 */

void mobyupdate_unsorted::UpdateMoby_282(MobyInstance *moby)

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
  float fVar10;
  int iVar11;
  gameMode_t gVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar17;
  undefined4 uVar18;
  longlong lVar15;
  longlong lVar16;
  MobyInstance *pMVar19;
  short sVar22;
  float *pfVar21;
  longlong lVar20;
  longlong lVar23;
  ulonglong unaff_r26;
  undefined4 *puVar24;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar25;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar30;
  double dVar31;
  ulonglong in_f30;
  double dVar32;
  double dVar33;
  ulonglong in_f31;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar16 = uVar13 - 0x160;
  puVar9 = (ulonglong *)lVar16;
  *puVar9 = uVar13;
  puVar9[0x2e] = in_LR;
  puVar9[0x27] = in_f27;
  puVar9[0x28] = in_f28;
  puVar9[0x29] = in_f29;
  puVar9[0x2a] = in_f30;
  puVar9[0x2b] = in_f31;
  puVar9[0x26] = unaff_r31;
  puVar9[0x25] = unaff_r30;
  gVar12 = g_gameMode;
  pvVar8 = moby->pVar;
  uVar25 = ZEXT48(pvVar8);
  puVar9[0x24] = unaff_r29;
  puVar9[0x23] = unaff_r28;
  puVar9[0x22] = unaff_r27;
  puVar9[0x21] = unaff_r26;
  if ((gVar12 == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar17 = 0;
    puVar24 = &DAT_0095cd50;
    sVar22 = boot::g_SpaceSceneMobyCnt._0_2_;
    if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
      do {
        if ((((MobyInstance *)puVar24[0x5e])->oClass == moby->oClass) && (DAT_00a1bf81 == '\0')) {
          mobyfunc::AttachManipulator((MobyInstance *)puVar24[0x5e],1,&DAT_00a1bf80);
          DAT_00a1bfa0 = 0x40300000;
          DAT_00a1bfa4 = 0x40300000;
          DAT_00a1bfa8 = 0x40300000;
          sVar22 = boot::g_SpaceSceneMobyCnt._0_2_;
        }
        iVar17 = iVar17 + 1;
        puVar24 = puVar24 + 1;
      } while (iVar17 < sVar22);
    }
  }
  bVar1 = moby->state;
  if (bVar1 == 0) {
    if (MiscLevelFlags.Raritanium != false) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
    moby->state = '\x01';
    FUN_004d3720(moby,uVar25 + 0x20);
    mobyutil::MB_SetZBoundsFromPos(moby);
  }
  else if (bVar1 < 2) {
    if ((MiscLevelFlags.Raritanium == false) &&
       (iVar17 = FUN_004d3870(moby,uVar25 + 0x20), iVar17 != 0)) {
      mobyutil::MB_SetPointAheadOfMoby(0x4004000000000000,moby);
      moby->state = '\x02';
      moby->unk58 = 0.0;
    }
  }
  else if ((bVar1 < 3) && (g_gameMode != GAME_MODE_SCENE)) {
    moby->unk58 = 1.0;
    MiscLevelFlags.Raritanium = true;
    puVar9[0x1f] = (longlong)(int)(animationSpeed * 300.5);
    mobyutil::MB_ToastMessage(0x2ee7,*(undefined4 *)((int)puVar9 + 0xfc));
    MiscLevelFlags.field97_0x61 = 1;
    mobyfunc::SetLevelFlag(moby->levelFlagIdx);
    iVar17 = *(int *)((int)pvVar8 + 0x170);
    if (iVar17 != -1) {
      respawn::SetSpawnPoint((Vec4 *)&Cuboids[iVar17].pos,(Vec4 *)&Cuboids[iVar17].rot);
    }
    memcard::memcard_Save(0,-1);
    moby->state = '\x01';
  }
  dVar34 = 0.019999999552965164;
  if (moby->animationId != '\0') goto LAB_0032d97c;
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).x;
  fVar5 = fVar2 - g_heroPosition.y;
  fVar6 = fVar3 - g_heroPosition.x;
  if (8.0 <= SQRT(fVar6 * fVar6 + fVar5 * fVar5)) {
LAB_0032d428:
    if (*(int *)((int)pvVar8 + 0x178) != 0) {
      *(undefined4 *)((int)pvVar8 + 0x178) = 0;
      *(float *)((int)pvVar8 + 0x160) = hero::g_heroCGPos;
      *(float *)((int)pvVar8 + 0x164) = DAT_00969db4;
      *(float *)((int)pvVar8 + 0x168) = DAT_00969db8;
      *(undefined4 *)((int)pvVar8 + 0x16c) = DAT_00969dbc;
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
    uVar14 = (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)(puVar9 + 0x11));
    if (*(float *)(puVar9 + 0x12) - 0.0 < 0.0) {
      fVar6 = fVar4;
    }
    fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
    fVar4 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
    fVar10 = ABS(*(float *)((int)puVar9 + 0x8c));
    if (*(float *)(puVar9 + 0x12) - 0.0 < 0.0) {
      fVar10 = fVar5;
    }
    if (0.0 < fVar6) {
      lVar15 = uVar13 - 0x150;
      lVar23 = uVar13 - 0x7c;
      lVar20 = uVar13 - 0x8c;
      lVar26 = 2;
      fVar5 = (fVar10 - fVar6) / (fVar10 + fVar6);
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
        *(float *)((int)lVar15 + 0xd4) = *(float *)((int)lVar15 + 0xc4) * fVar5 * fVar5;
        iVar17 = (int)lVar20;
        lVar20 = lVar20 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)(iVar17 + 4) * fVar5 * fVar5;
        lVar23 = lVar23 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar26 = 4;
      lVar23 = uVar13 - 0x8c;
      pfVar21 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar20 = lVar23;
      do {
        fVar5 = *pfVar21;
        fVar6 = pfVar21[1];
        pfVar21 = pfVar21 + 2;
        *(float *)((int)lVar15 + 0xd4) = *(float *)((int)lVar15 + 0xd4) * fVar5;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
        lVar20 = lVar20 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar20 = 2;
      lVar15 = lVar16;
      do {
        iVar17 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar11 = (int)lVar23;
        lVar23 = lVar23 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar17 + 0xd4) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar7 + fVar4;
    }
    dVar27 = (double)fastfunc::FastSubRots(fVar2,fVar3);
    if (1.5707963705062866 <= dVar27) goto LAB_0032d428;
    if (SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) <= 0.01) {
      fastfunc::FastDecTimerS32(uVar25 + 0x178);
    }
    else {
      auVar35 = ZEXT416(0xffffffff);
      auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
      auVar35 = loadVectorLeftIndexed(0x20,0x32ce94);
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar35 = vectorMultiplyAddFloatingPoint
                          (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                           auVar36);
      auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar18 = storeVectorElementWordIndexed
                         (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x178,uVar25
                         );
      *(undefined4 *)((int)pvVar8 + 0x178U & 0xfffffffc) = uVar18;
    }
  }
  iVar17 = fastfunc::FastDecTimerS32(uVar25 + 0x17c);
  if (iVar17 != 0) {
    dVar27 = (double)mobyutil::MB_randRangeFloat(180.0,300.0);
    uVar18 = fastfunc::FastDoubleToInt((double)(float)(dVar27 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar8 + 0x17c) = uVar18;
    dVar32 = (double)(moby->rotation).z;
    dVar27 = (double)mobyutil::MB_randRangeFloat(-90.0,90.0);
    dVar30 = 0.01745329238474369;
    dVar27 = (double)fastfunc::FastWrapRot((float)dVar32,(float)(dVar27 * 0.01745329238474369));
    dVar32 = (double)mobyutil::MB_randRangeFloat(0.0,30.0);
    mobyutil::MB_SphericalToVector
              (6.0,(float)dVar27,(float)(dVar32 * dVar30),(float *)((int)pvVar8 + 0x160));
    *(float *)((int)pvVar8 + 0x160) = *(float *)((int)pvVar8 + 0x160) + (moby->pos).x;
    *(float *)((int)pvVar8 + 0x164) = *(float *)((int)pvVar8 + 0x164) + (moby->pos).y;
    *(float *)((int)pvVar8 + 0x168) = *(float *)((int)pvVar8 + 0x168) + (moby->pos).z;
  }
  if (*(int *)((int)pvVar8 + 0x178) == 0) {
    fVar2 = *(float *)((int)pvVar8 + 0x160);
    fVar3 = *(float *)((int)pvVar8 + 0x164);
    fVar5 = *(float *)((int)pvVar8 + 0x168);
  }
  else {
    dVar34 = 0.03999999910593033;
    fVar2 = hero::g_heroCGPos;
    fVar3 = DAT_00969db4;
    fVar5 = DAT_00969db8;
  }
  fVar2 = fVar2 - (moby->pos).x;
  dVar33 = (double)fVar2;
  fVar3 = fVar3 - (moby->pos).y;
  dVar31 = (double)fVar3;
  *(float *)((int)puVar9 + 0x7c) = fVar2;
  *(float *)(puVar9 + 0x10) = fVar3;
  dVar30 = (double)(fVar5 - ((moby->pos).z + 1.0));
  *(float *)((int)puVar9 + 0x84) = (float)(ABS(dVar33) - ABS(dVar31));
  dVar32 = 0.0;
  uVar14 = (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1d) & 4;
  dVar27 = ABS((double)*(float *)((int)puVar9 + 0x7c));
  if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
    dVar27 = ABS(dVar31);
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
  dVar29 = ABS((double)*(float *)(puVar9 + 0x10));
  if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
    dVar29 = ABS(dVar33);
  }
  fVar3 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  dVar28 = dVar32;
  if (0.0 < dVar27) {
    lVar15 = uVar13 - 0x150;
    lVar20 = uVar13 - 0xac;
    lVar23 = uVar13 - 0x9c;
    lVar26 = 2;
    fVar5 = (float)(dVar29 - dVar27) / (float)(dVar29 + dVar27);
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
      *(float *)((int)lVar15 + 0xb4) = *(float *)((int)lVar15 + 0xa4) * fVar5 * fVar5;
      iVar17 = (int)lVar20;
      lVar15 = lVar15 + 8;
      lVar20 = lVar20 + 8;
      *(float *)((int)lVar23 + 4) = *(float *)(iVar17 + 4) * fVar5 * fVar5;
      lVar23 = lVar23 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar26 = 4;
    lVar23 = uVar13 - 0xac;
    pfVar21 = (float *)&DAT_007358e0;
    lVar15 = lVar16;
    lVar20 = lVar23;
    do {
      fVar5 = *pfVar21;
      fVar6 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar15 + 0xb4) = *(float *)((int)lVar15 + 0xb4) * fVar5;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
      lVar20 = lVar20 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar20 = 2;
    lVar15 = lVar16;
    dVar27 = dVar32;
    do {
      iVar17 = (int)lVar15;
      lVar15 = lVar15 + 0x10;
      iVar11 = (int)lVar23;
      lVar23 = lVar23 + 0x10;
      dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar17 + 0xb4)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    dVar28 = (double)((float)(dVar27 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar29 = (double)fastfunc::FastDiffRots(dVar28,(double)(moby->rotation).z);
  *(float *)((int)puVar9 + 0x74) = (float)dVar30;
  fVar2 = SQRT((float)(dVar33 * dVar33 + (double)(float)(dVar31 * dVar31)));
  dVar31 = ABS((double)fVar2);
  *(float *)(puVar9 + 0xe) = fVar2;
  *(float *)(puVar9 + 0xf) = (float)(dVar31 - ABS(dVar30));
  uVar14 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
  dVar27 = ABS((double)*(float *)(puVar9 + 0xe));
  if ((double)*(float *)(puVar9 + 0xf) - dVar32 < 0.0) {
    dVar27 = ABS(dVar30);
  }
  fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
  fVar2 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  dVar30 = ABS((double)*(float *)((int)puVar9 + 0x74));
  if ((double)*(float *)(puVar9 + 0xf) - dVar32 < 0.0) {
    dVar30 = dVar31;
  }
  if (dVar32 < dVar27) {
    lVar15 = uVar13 - 0x150;
    lVar23 = uVar13 - 0xbc;
    lVar20 = uVar13 - 0xcc;
    lVar26 = 2;
    fVar5 = (float)(dVar30 - dVar27) / (float)(dVar30 + dVar27);
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
      *(float *)((int)lVar15 + 0x94) = *(float *)((int)lVar15 + 0x84) * fVar5 * fVar5;
      iVar17 = (int)lVar20;
      lVar20 = lVar20 + 8;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar23 + 4) = *(float *)(iVar17 + 4) * fVar5 * fVar5;
      lVar23 = lVar23 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar26 = 4;
    lVar23 = uVar13 - 0xcc;
    pfVar21 = (float *)&DAT_007358e0;
    lVar15 = lVar16;
    lVar20 = lVar23;
    do {
      fVar5 = *pfVar21;
      fVar6 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar15 + 0x94) = *(float *)((int)lVar15 + 0x94) * fVar5;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
      lVar20 = lVar20 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar15 = 2;
    do {
      iVar17 = (int)lVar16;
      iVar11 = (int)lVar23;
      lVar16 = lVar16 + 0x10;
      lVar23 = lVar23 + 0x10;
      dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar17 + 0x94)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar3 + fVar2);
  }
  dVar32 = -dVar32;
  dVar27 = 1.5707963705062866;
  if ((dVar29 <= 1.5707963705062866) && (dVar27 = dVar29, dVar29 < -1.5707963705062866)) {
    dVar27 = -1.5707963705062866;
  }
  dVar30 = 0.5235987901687622;
  if ((dVar32 <= 0.5235987901687622) && (dVar30 = dVar32, dVar32 < -0.5235987901687622)) {
    dVar30 = -0.5235987901687622;
  }
  *(float *)((int)pvVar8 + 200) = (float)(dVar27 * 0.30000001192092896);
  *(float *)((int)pvVar8 + 0xc4) = (float)dVar30;
  *(float *)((int)pvVar8 + 0x148) = (float)(dVar27 * 0.699999988079071);
LAB_0032d97c:
  if (Cheats[0] != '\0') {
    *(undefined4 *)((int)pvVar8 + 0xd0) = 0x40300000;
  }
  dVar27 = 0.30000001192092896;
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar34),
             (double)(float)((double)DAT_0071f40c * 0.30000001192092896),moby,uVar25 + 0x60,1);
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar34),
             (double)(float)((double)DAT_0071f40c * dVar27),moby,uVar25 + 0xe0,0);
  if (*(MobyInstance **)((int)pvVar8 + 0x180) == (MobyInstance *)0x0) {
    pMVar19 = mobyfunc::CreateMoby(DRILL_011F);
    *(MobyInstance **)((int)pvVar8 + 0x180) = pMVar19;
    if (pMVar19 != (MobyInstance *)0x0) {
      pMVar19->drawDistance = moby->drawDistance;
      *(undefined1 *)(*(int *)((int)pvVar8 + 0x180) + 0x31) = 1;
      iVar17 = *(int *)((int)pvVar8 + 0x180);
      *(f32 *)(iVar17 + 0x10) = (moby->pos).x;
      *(f32 *)(iVar17 + 0x14) = (moby->pos).y;
      *(f32 *)(iVar17 + 0x18) = (moby->pos).z;
      *(f32 *)(iVar17 + 0x1c) = (moby->pos).w;
      iVar17 = *(int *)((int)pvVar8 + 0x180);
      *(f32 *)(iVar17 + 0x40) = (moby->rotation).x;
      *(f32 *)(iVar17 + 0x44) = (moby->rotation).y;
      *(f32 *)(iVar17 + 0x48) = (moby->rotation).z;
      *(f32 *)(iVar17 + 0x4c) = (moby->rotation).w;
      mobyfunc::UpdateMobyTransform(moby);
    }
  }
  else {
    mobyutil::MB_AttachMobyToJoint(moby,*(MobyInstance **)((int)pvVar8 + 0x180),2);
  }
  return;
}



//==== 0032dac4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M283_0032dac4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M283_0032dac4(void)

{
  DAT_0080044c = 0x10000;
  return;
}



//==== 0032dad8  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_283(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 283 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_283(MobyInstance *moby)

{
  return moby;
}



//==== 0032dadc  ns=Global  size=0xf8
// sig: undefined FUN_0032dadc(void)
// callers(1): 00326338 mobyupdate_unsorted::UpdateMoby_279
// callees(2): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance *
FUN_0032dadc(double param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  byte bVar1;
  f32 fVar2;
  f32 fVar3;
  f32 fVar4;
  MobyInstance *pMVar5;
  undefined8 uVar6;
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  
  pMVar5 = mobyfunc::CreateMoby(0x11c);
  if (pMVar5 != (MobyInstance *)0x0) {
    pMVar5->updateDistance = *(char *)(param_2 + 0x30);
    bVar1 = *(byte *)(param_2 + 0x30);
    pMVar5->enabled = '\x01';
    pMVar5->drawDistance = (ushort)bVar1;
    fStack00000044 = (f32)param_4;
    fStack0000004c = (f32)param_5;
    (pMVar5->pos).y = fStack00000044;
    fVar2 = *(f32 *)(param_2 + 0x40);
    (pMVar5->pos).w = fStack0000004c;
    fVar3 = *(f32 *)(param_2 + 0x44);
    fVar4 = *(f32 *)(param_2 + 0x48);
    (pMVar5->rotation).x = fVar2;
    (pMVar5->rotation).y = fVar3;
    fVar2 = *(f32 *)(param_2 + 0x4c);
    (pMVar5->rotation).z = fVar4;
    uVar6 = *(undefined8 *)(param_2 + 0x38);
    (pMVar5->rotation).w = fVar2;
    fStack00000040 = (f32)((ulonglong)param_4 >> 0x20);
    fStack00000048 = (f32)((ulonglong)param_5 >> 0x20);
    (pMVar5->pos).x = fStack00000040;
    (pMVar5->pos).z = fStack00000048;
    (pMVar5->rotation).z = (float)param_1;
    pMVar5->color = (int)((ulonglong)uVar6 >> 0x20);
    pMVar5->light = (int)uVar6;
    mobyfunc::UpdateMobyTransform(pMVar5);
  }
  return pMVar5;
}



//==== 0032dbd4  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_284(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 284 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_284(MobyInstance *moby)

{
  return moby;
}



//==== 0032dbd8  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_286(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 286 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_286(MobyInstance *moby)

{
  return moby;
}



//==== 0032dbdc  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_288(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 288 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_288(MobyInstance *moby)

{
  return moby;
}



//==== 0032dbe0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M289_0032dbe0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M289_0032dbe0(void)

{
  DAT_008007c8 = 0x10000;
  return;
}



//==== 0032dc20  ns=mobyupdate_unsorted  size=0xaa8
// sig: undefined UpdateMoby_289(MobyInstance * moby)
// callers(0): 
// callees(8): 000efa28 mobyfunc::CreateMoby; 000efb38 mobyfunc::DeleteMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 0010675c mobyutil::MB_damage; 00109af0 mobyutil::Delt; 0010e030 mobyutil::MB_genericExplosion

/* Moby 289 */

void mobyupdate_unsorted::UpdateMoby_289(MobyInstance *moby)

{
  double dVar1;
  double dVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  Spline *pSVar10;
  ulonglong *puVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar16;
  longlong lVar14;
  longlong lVar15;
  MobyInstance *pMVar17;
  float *pfVar19;
  longlong lVar18;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar26;
  ulonglong in_f28;
  double dVar27;
  ulonglong in_f29;
  double dVar28;
  ulonglong in_f30;
  double dVar29;
  ulonglong in_f31;
  double dVar30;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x170;
  puVar11 = (ulonglong *)lVar15;
  *puVar11 = uVar13;
  puVar11[0x30] = in_LR;
  puVar11[0x28] = in_f26;
  puVar11[0x29] = in_f27;
  puVar11[0x2a] = in_f28;
  puVar11[0x2b] = in_f29;
  puVar11[0x2c] = in_f30;
  puVar11[0x2d] = in_f31;
  puVar11[0x27] = unaff_r31;
  puVar11[0x26] = unaff_r30;
  puVar11[0x25] = unaff_r29;
  pvVar9 = moby->pVar;
  iVar16 = mobyutil::MB_damage(moby,0xffffffffffffffff,0);
  if (iVar16 != 0) {
    if (*(MobyInstance **)((int)pvVar9 + 0x4c) != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar9 + 0x4c));
    }
    if (*(MobyInstance **)((int)pvVar9 + 0x50) != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar9 + 0x50));
    }
    puVar11[0x12] = 0xffffffffffffffff;
    puVar11[0x14] = 1;
    puVar11[0x15] = 1;
    puVar11[0x16] = 0xffffffffffffffff;
    puVar11[0x17] = 0;
    mobyutil::MB_genericExplosion
              (0,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,0x3ff0000000000000,
               0x402e000000000000,moby,(int)pvVar9 + 0x30,0,1,0xffffffffffffffff,10,3,0x10);
    mobyfunc::DeleteMoby(moby);
  }
  bVar3 = moby->state;
  if (bVar3 == 0) {
    iVar16 = *(int *)((int)pvVar9 + 0x14);
    (moby->rotation).y = 0.0;
    (moby->rotation).x = 0.0;
    *(undefined4 *)((int)pvVar9 + 0x3c) = 0;
    *(undefined4 *)((int)pvVar9 + 0x38) = 0;
    *(undefined4 *)((int)pvVar9 + 0x34) = 0;
    *(undefined4 *)((int)pvVar9 + 0x30) = 0;
    pSVar10 = Splines[iVar16];
    *(undefined4 *)((int)pvVar9 + 0x44) = 0;
    *(Spline **)((int)pvVar9 + 0x10) = pSVar10;
    moby->state = '\x01';
    if (moby->animationId != '\x02') {
      mobyutil::MB_SetAnimation(moby,2,0,0);
    }
  }
  else if (bVar3 < 2) {
    if (*(int *)((int)pvVar9 + 0x44) == 0) {
      iVar16 = *(int *)((int)pvVar9 + 0x10);
      fVar4 = *(float *)(iVar16 + 0x10);
      fVar5 = *(float *)(iVar16 + 0x14);
      fVar8 = *(float *)(iVar16 + 0x18);
      fVar6 = *(float *)(iVar16 + 0x1c);
    }
    else {
      pfVar19 = (float *)(*(int **)((int)pvVar9 + 0x10) + **(int **)((int)pvVar9 + 0x10) * 4);
      fVar4 = *pfVar19;
      fVar5 = pfVar19[1];
      fVar8 = pfVar19[2];
      fVar6 = pfVar19[3];
    }
    dVar29 = (double)fVar6;
    fVar5 = fVar5 - (moby->pos).y;
    fVar4 = fVar4 - (moby->pos).x;
    fVar8 = fVar8 - (moby->pos).z;
    if (SQRT(fVar8 * fVar8 + fVar4 * fVar4 + fVar5 * fVar5) <= 0.1) {
      moby->state = '\x02';
      if (moby->animationId != '\x01') {
        mobyutil::MB_SetAnimation(moby,1,0,3);
      }
      *(uint *)((int)pvVar9 + 0x44) = (uint)LZCOUNT(*(undefined4 *)((int)pvVar9 + 0x44)) >> 5;
    }
    else {
      dVar27 = (double)(DAT_008007f8 * fVar5);
      dVar30 = (double)(DAT_008007f8 * fVar4);
      dVar28 = (double)(DAT_008007f8 * fVar8);
      fVar4 = SQRT(*(float *)((int)pvVar9 + 0x38) * *(float *)((int)pvVar9 + 0x38) +
                   *(float *)((int)pvVar9 + 0x30) * *(float *)((int)pvVar9 + 0x30) +
                   *(float *)((int)pvVar9 + 0x34) * *(float *)((int)pvVar9 + 0x34));
      fVar5 = SQRT((float)(dVar28 * dVar28 +
                          (double)(float)(dVar30 * dVar30 + (double)(float)(dVar27 * dVar27))));
      dVar25 = (double)fVar5;
      if (dVar25 <= (double)fVar4) {
        *(float *)(puVar11 + 0x18) = fVar5;
        dVar26 = dVar25;
        dVar24 = dVar28;
      }
      else {
        *(float *)(puVar11 + 0x18) = fVar4;
        mobyutil::Delt(DAT_008007fc * mobyutil::g_FrameTime,DAT_008007f0 * DAT_0071f418,
                       (float *)(puVar11 + 0x18));
        dVar26 = (double)*(float *)(puVar11 + 0x18);
        dVar23 = (double)(float)(dVar26 / dVar25);
        dVar24 = 0.0;
        dVar1 = dVar30 * dVar23;
        dVar2 = dVar27 * dVar23;
        dVar30 = dVar24;
        if (0.0 - dVar25 < 0.0) {
          dVar30 = (double)(float)dVar1;
        }
        dVar27 = dVar24;
        if (0.0 - dVar25 < 0.0) {
          dVar27 = (double)(float)dVar2;
        }
        if (0.0 - dVar25 < 0.0) {
          dVar24 = (double)(float)(dVar28 * dVar23);
        }
        if (dVar25 - 0.0 < 0.0) {
          dVar30 = (double)(float)dVar1;
        }
        if (dVar25 - 0.0 < 0.0) {
          dVar27 = (double)(float)dVar2;
        }
        if (dVar25 - 0.0 < 0.0) {
          dVar24 = (double)(float)(dVar28 * dVar23);
        }
      }
      *(float *)((int)pvVar9 + 0x30) = (float)dVar30;
      *(float *)((int)pvVar9 + 0x34) = (float)dVar27;
      *(float *)((int)pvVar9 + 0x3c) = (float)dVar29;
      *(float *)((int)pvVar9 + 0x38) = (float)dVar24;
      if (*(int *)((int)pvVar9 + 0x4c) != 0) {
        *(float *)(*(int *)((int)pvVar9 + 0x4c) + 0x58) =
             (float)(dVar26 / (double)(mobyutil::g_FrameTime * DAT_008007ec));
        dVar26 = (double)*(float *)(puVar11 + 0x18);
      }
      if (*(int *)((int)pvVar9 + 0x50) != 0) {
        *(float *)(*(int *)((int)pvVar9 + 0x50) + 0x58) =
             (float)(dVar26 / (double)(mobyutil::g_FrameTime * DAT_008007ec));
      }
    }
    (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar9 + 0x30);
    (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar9 + 0x34);
    (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar9 + 0x38);
  }
  else if (bVar3 < 3) {
    if (*(int *)((int)pvVar9 + 0x44) == 0) {
      fVar4 = *(float *)(*(int *)((int)pvVar9 + 0x10) + 0x10);
      fVar5 = *(float *)(*(int *)((int)pvVar9 + 0x10) + 0x14);
    }
    else {
      pfVar19 = (float *)(*(int **)((int)pvVar9 + 0x10) + **(int **)((int)pvVar9 + 0x10) * 4);
      fVar4 = *pfVar19;
      fVar5 = pfVar19[1];
    }
    dVar30 = (double)fVar4;
    dVar29 = (double)fVar5;
    if (*(int *)((int)pvVar9 + 0x4c) != 0) {
      *(float *)(*(int *)((int)pvVar9 + 0x4c) + 0x58) =
           -*(float *)((int)pvVar9 + 0x48) / (mobyutil::g_FrameTime * DAT_008007ec * 2.0);
    }
    if (*(int *)((int)pvVar9 + 0x50) != 0) {
      *(float *)(*(int *)((int)pvVar9 + 0x50) + 0x58) =
           *(float *)((int)pvVar9 + 0x48) / (mobyutil::g_FrameTime * DAT_008007ec * 2.0);
    }
    fVar4 = (float)(dVar30 - (double)(moby->pos).x);
    fVar5 = (float)(dVar29 - (double)(moby->pos).y);
    fVar6 = ABS(fVar4);
    fVar8 = ABS(fVar5);
    *(float *)(puVar11 + 0x1a) = fVar4;
    *(float *)((int)puVar11 + 0xd4) = fVar5;
    *(float *)(puVar11 + 0x1b) = fVar6 - fVar8;
    dVar27 = 0.0;
    uVar20 = (ulonglong)(*(uint *)(puVar11 + 0x1a) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x1b) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0xd4) >> 0x1d) & 4;
    fVar4 = ABS(*(float *)(puVar11 + 0x1a));
    if (*(float *)(puVar11 + 0x1b) - 0.0 < 0.0) {
      fVar4 = fVar8;
    }
    fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar5 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    fVar7 = ABS(*(float *)((int)puVar11 + 0xd4));
    if (*(float *)(puVar11 + 0x1b) - 0.0 < 0.0) {
      fVar7 = fVar6;
    }
    dVar28 = 0.7853981852531433;
    dVar25 = dVar27;
    if (0.0 < fVar4) {
      lVar14 = uVar13 - 0x160;
      lVar18 = uVar13 - 0x74;
      lVar21 = uVar13 - 100;
      lVar22 = 2;
      fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
      fVar6 = fVar4 * fVar4;
      *(float *)(puVar11 + 0x21) = fVar4;
      *(float *)(puVar11 + 0x20) = fVar4;
      *(float *)((int)puVar11 + 0x104) = fVar4;
      *(float *)((int)puVar11 + 0xfc) = fVar4;
      fVar4 = fVar6 * fVar6;
      *(float *)(puVar11 + 0x20) = *(float *)(puVar11 + 0x20) * fVar6;
      *(float *)((int)puVar11 + 0x104) = *(float *)((int)puVar11 + 0x104) * fVar4;
      *(float *)(puVar11 + 0x21) = *(float *)(puVar11 + 0x21) * fVar4 * fVar6;
      do {
        *(float *)((int)lVar14 + 0xfc) = *(float *)((int)lVar14 + 0xec) * fVar4 * fVar4;
        iVar16 = (int)lVar18;
        lVar14 = lVar14 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar16 + 4) * fVar4 * fVar4;
        lVar21 = lVar21 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar21 = uVar13 - 0x74;
      pfVar19 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar18 = lVar21;
      do {
        fVar4 = *pfVar19;
        fVar6 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar14 + 0xfc) = *(float *)((int)lVar14 + 0xfc) * fVar4;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar6;
        lVar18 = lVar18 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar18 = 2;
      lVar14 = lVar15;
      do {
        iVar16 = (int)lVar14;
        lVar14 = lVar14 + 0x10;
        iVar12 = (int)lVar21;
        lVar21 = lVar21 + 0x10;
        dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar16 + 0xfc)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar8 + fVar5);
    }
    mobyutil::OrganicDeltAngSpeed
              (dVar25,0x3fc99999a0000000,0x3fe0000000000000,(double)DAT_008007f4,moby,0x800000,
               (int)pvVar9 + 0x48);
    fVar4 = (float)(dVar30 - (double)(moby->pos).x);
    fVar5 = (float)(dVar29 - (double)(moby->pos).y);
    dVar30 = ABS((double)fVar4);
    dVar25 = ABS((double)fVar5);
    *(float *)((int)puVar11 + 0xc4) = fVar4;
    *(float *)(puVar11 + 0x19) = fVar5;
    fVar4 = (moby->rotation).z;
    *(float *)((int)puVar11 + 0xcc) = (float)(dVar30 - dVar25);
    uVar20 = (ulonglong)(*(uint *)((int)puVar11 + 0xc4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar11 + 0xcc) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar11 + 0x19) >> 0x1d) & 4;
    dVar29 = ABS((double)*(float *)((int)puVar11 + 0xc4));
    if ((double)*(float *)((int)puVar11 + 0xcc) - dVar27 < 0.0) {
      dVar29 = dVar25;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    dVar25 = ABS((double)*(float *)(puVar11 + 0x19));
    if ((double)*(float *)((int)puVar11 + 0xcc) - dVar27 < 0.0) {
      dVar25 = dVar30;
    }
    fVar8 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    if (dVar27 < dVar29) {
      lVar14 = uVar13 - 0x160;
      lVar21 = uVar13 - 0x84;
      lVar18 = uVar13 - 0x94;
      lVar22 = 2;
      fVar6 = (float)(dVar25 - dVar29) / (float)(dVar25 + dVar29);
      fVar7 = fVar6 * fVar6;
      *(float *)(puVar11 + 0x1d) = fVar6;
      *(float *)(puVar11 + 0x1c) = fVar6;
      *(float *)((int)puVar11 + 0xe4) = fVar6;
      *(float *)((int)puVar11 + 0xdc) = fVar6;
      fVar6 = fVar7 * fVar7;
      *(float *)(puVar11 + 0x1c) = *(float *)(puVar11 + 0x1c) * fVar7;
      *(float *)((int)puVar11 + 0xe4) = *(float *)((int)puVar11 + 0xe4) * fVar6;
      *(float *)(puVar11 + 0x1d) = *(float *)(puVar11 + 0x1d) * fVar6 * fVar7;
      do {
        *(float *)((int)lVar14 + 0xdc) = *(float *)((int)lVar14 + 0xcc) * fVar6 * fVar6;
        iVar16 = (int)lVar18;
        lVar18 = lVar18 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar16 + 4) * fVar6 * fVar6;
        lVar21 = lVar21 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar21 = uVar13 - 0x94;
      pfVar19 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar18 = lVar21;
      do {
        fVar6 = *pfVar19;
        fVar7 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar14 + 0xdc) = *(float *)((int)lVar14 + 0xdc) * fVar6;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar7;
        lVar18 = lVar18 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar14 = 2;
      do {
        iVar16 = (int)lVar15;
        iVar12 = (int)lVar21;
        lVar15 = lVar15 + 0x10;
        lVar21 = lVar21 + 0x10;
        dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar16 + 0xdc)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar27 = (double)((float)(dVar27 + dVar28) * fVar5 + fVar8);
    }
    if ((double)fVar4 == dVar27) {
      *(undefined4 *)((int)pvVar9 + 0x3c) = 0;
      *(undefined4 *)((int)pvVar9 + 0x38) = 0;
      *(undefined4 *)((int)pvVar9 + 0x34) = 0;
      *(undefined4 *)((int)pvVar9 + 0x30) = 0;
      moby->state = '\x01';
      if (moby->animationId != '\x02') {
        mobyutil::MB_SetAnimation(moby,2,0,3);
      }
    }
  }
  iVar16 = *(int *)((int)pvVar9 + 0x4c);
  if (iVar16 == 0) {
    pMVar17 = mobyfunc::CreateMoby(QWARKS_STARFIGHTER_PART_018D);
    *(MobyInstance **)((int)pvVar9 + 0x4c) = pMVar17;
    pMVar17->updateDistance = '@';
    *(undefined2 *)(*(int *)((int)pvVar9 + 0x4c) + 0x32) = 0x40;
    *(undefined1 *)(*(int *)((int)pvVar9 + 0x4c) + 0x31) = 1;
    *(undefined1 *)(*(int *)((int)pvVar9 + 0x4c) + 0x20) = 1;
    *(undefined2 *)(*(int *)((int)pvVar9 + 0x4c) + 0x34) = 0;
    *(undefined8 *)(*(int *)((int)pvVar9 + 0x4c) + 0x38) = *(undefined8 *)&g_heroMobyPtr->color;
    iVar16 = *(int *)((int)pvVar9 + 0x4c);
    *(f32 *)(iVar16 + 0x10) = (moby->pos).x;
    *(f32 *)(iVar16 + 0x14) = (moby->pos).y;
    *(f32 *)(iVar16 + 0x18) = (moby->pos).z;
    *(f32 *)(iVar16 + 0x1c) = (moby->pos).w;
    iVar16 = *(int *)((int)pvVar9 + 0x4c);
    *(f32 *)(iVar16 + 0x40) = (moby->rotation).x;
    *(f32 *)(iVar16 + 0x44) = (moby->rotation).y;
    *(f32 *)(iVar16 + 0x48) = (moby->rotation).z;
    *(f32 *)(iVar16 + 0x4c) = (moby->rotation).w;
    mobyutil::MB_SetAnimation(*(undefined4 *)((int)pvVar9 + 0x4c),2,0,1);
    mobyfunc::UpdateMobyTransform(*(MobyInstance **)((int)pvVar9 + 0x4c));
  }
  else {
    *(f32 *)(iVar16 + 0x10) = (moby->pos).x;
    *(f32 *)(iVar16 + 0x14) = (moby->pos).y;
    *(f32 *)(iVar16 + 0x18) = (moby->pos).z;
    *(f32 *)(iVar16 + 0x1c) = (moby->pos).w;
    iVar16 = *(int *)((int)pvVar9 + 0x4c);
    *(f32 *)(iVar16 + 0x40) = (moby->rotation).x;
    *(f32 *)(iVar16 + 0x44) = (moby->rotation).y;
    *(f32 *)(iVar16 + 0x48) = (moby->rotation).z;
    *(f32 *)(iVar16 + 0x4c) = (moby->rotation).w;
  }
  iVar16 = *(int *)((int)pvVar9 + 0x50);
  if (iVar16 == 0) {
    pMVar17 = mobyfunc::CreateMoby(QWARKS_STARFIGHTER_PART_018E);
    *(MobyInstance **)((int)pvVar9 + 0x50) = pMVar17;
    pMVar17->updateDistance = '@';
    *(undefined2 *)(*(int *)((int)pvVar9 + 0x50) + 0x32) = 0x40;
    *(undefined1 *)(*(int *)((int)pvVar9 + 0x50) + 0x31) = 1;
    *(undefined1 *)(*(int *)((int)pvVar9 + 0x50) + 0x20) = 1;
    *(undefined2 *)(*(int *)((int)pvVar9 + 0x50) + 0x34) = 0;
    *(undefined8 *)(*(int *)((int)pvVar9 + 0x50) + 0x38) = *(undefined8 *)&g_heroMobyPtr->color;
    iVar16 = *(int *)((int)pvVar9 + 0x50);
    *(f32 *)(iVar16 + 0x10) = (moby->pos).x;
    *(f32 *)(iVar16 + 0x14) = (moby->pos).y;
    *(f32 *)(iVar16 + 0x18) = (moby->pos).z;
    *(f32 *)(iVar16 + 0x1c) = (moby->pos).w;
    iVar16 = *(int *)((int)pvVar9 + 0x50);
    *(f32 *)(iVar16 + 0x40) = (moby->rotation).x;
    *(f32 *)(iVar16 + 0x44) = (moby->rotation).y;
    *(f32 *)(iVar16 + 0x48) = (moby->rotation).z;
    *(f32 *)(iVar16 + 0x4c) = (moby->rotation).w;
    mobyutil::MB_SetAnimation(*(undefined4 *)((int)pvVar9 + 0x50),2,0,1);
    mobyfunc::UpdateMobyTransform(*(MobyInstance **)((int)pvVar9 + 0x50));
  }
  else {
    *(f32 *)(iVar16 + 0x10) = (moby->pos).x;
    *(f32 *)(iVar16 + 0x14) = (moby->pos).y;
    *(f32 *)(iVar16 + 0x18) = (moby->pos).z;
    *(f32 *)(iVar16 + 0x1c) = (moby->pos).w;
    iVar16 = *(int *)((int)pvVar9 + 0x50);
    *(f32 *)(iVar16 + 0x40) = (moby->rotation).x;
    *(f32 *)(iVar16 + 0x44) = (moby->rotation).y;
    *(f32 *)(iVar16 + 0x48) = (moby->rotation).z;
    *(f32 *)(iVar16 + 0x4c) = (moby->rotation).w;
  }
  return;
}



//==== 0032e6c8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M289_0032e6c8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M289_0032e6c8(void)

{
  DAT_0080084c = 0x10000;
  return;
}



//==== 0032e710  ns=mobyupdate_helpers  size=0x1ec
// sig: undefined M29_0032e710(void)
// callers(1): 0032e9e0 mobyupdate_unsorted::UpdateMoby_29
// callees(4): 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 0021a098 FUN_0021a098; 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M29_0032e710(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  
  iVar1 = *(int *)(param_1 + 0x78);
  if (worldUpdateTime == (worldUpdateTime / DAT_00800874) * DAT_00800874) {
    mobyfunc::GetBonePosition(param_1,0,local_40);
    iVar2 = *(int *)(iVar1 + 0x40);
    fVar3 = *(float *)(param_1 + 0x14) - *(float *)(iVar2 + 0x14);
    fVar4 = *(float *)(param_1 + 0x10) - *(float *)(iVar2 + 0x10);
    fVar3 = (20.0 - SQRT(fVar4 * fVar4 + fVar3 * fVar3)) * 0.05;
    dVar5 = (double)mobyutil::MB_randRangeFloat(-(fVar3 * 5.0 + 2.5),fVar3 * 5.0 + 2.5);
    fastfunc::FastWrapRot((float)(dVar5 * 0.01745329238474369),*(float *)(param_1 + 0x48));
    FUN_0021a098((double)*(float *)(iVar1 + 0x68),local_40,local_30,param_1);
  }
  return;
}



//==== 0032e908  ns=mobyupdate_helpers  size=0x94
// sig: undefined M289_0032e908(void)
// callers(0): 
// callees(1): 001118d8 mobyutil::MB_getTarget

void mobyupdate_helpers::M289_0032e908(int param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x78);
  fVar1 = 20.0;
  if (*(char *)(param_1 + 0x20) == '\x03') {
    fVar1 = 22.0;
  }
  mobyutil::MB_getTarget((double)fVar1,param_1,&DAT_0032e8fc,iVar2);
  if (*(int *)(iVar2 + 0x40) == 0) {
    *(MobyInstance **)(iVar2 + 0x40) = g_heroMobyPtr;
  }
  if (3 < *(byte *)(param_1 + 0xbc)) {
    *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0xbc);
  }
  return;
}



//==== 0032e9e0  ns=mobyupdate_unsorted  size=0xc08
// sig: undefined UpdateMoby_29(MobyInstance * moby)
// callers(0): 
// callees(16): 000efb38 mobyfunc::DeleteMoby; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 000fea60 mobyutil::MB_randSphere; 00109af0 mobyutil::Delt; 0010a2e0 mobyutil::OrganicDeltAng; 0010e030 mobyutil::MB_genericExplosion; 00110b70 mobyutil::MB_IsPntInCuboid; 001118d8 mobyutil::MB_getTarget; 00119a18 mobyfunc::DoManipulator; 0032e710 mobyupdate_helpers::M29_0032e710; 00354638 FUN_00354638; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots

/* Moby 29 */

void mobyupdate_unsorted::UpdateMoby_29(MobyInstance *moby)

{
  u8 uVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  MobyInstance *pMVar8;
  MobyInstance *pMVar9;
  ulonglong *puVar10;
  float fVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined4 uVar22;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar23;
  undefined8 uVar20;
  undefined8 uVar21;
  longlong lVar24;
  float *pfVar25;
  longlong lVar26;
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
  ulonglong in_f30;
  ulonglong in_f31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  float fVar42;
  
  lVar16 = (longlong)(int)moby;
  uVar15 = ZEXT48(&stack0x00000000);
  lVar19 = uVar15 - 400;
  puVar10 = (ulonglong *)lVar19;
  *puVar10 = uVar15;
  puVar10[0x34] = in_LR;
  puVar10[0x30] = in_f30;
  puVar10[0x31] = in_f31;
  puVar10[0x2f] = unaff_r31;
  uVar1 = moby->state;
  puVar10[0x2e] = unaff_r30;
  dVar28 = 20.0;
  pvVar7 = moby->pVar;
  puVar10[0x2d] = unaff_r29;
  puVar10[0x2c] = unaff_r28;
  dVar29 = dVar28;
  if (uVar1 == '\x03') {
    dVar29 = 22.0;
  }
  mobyutil::MB_getTarget(dVar29,lVar16,&DAT_0032e99c,pvVar7);
  pMVar9 = g_heroMobyPtr;
  pMVar8 = *(MobyInstance **)((int)pvVar7 + 0x40);
  if (*(MobyInstance **)((int)pvVar7 + 0x40) == (MobyInstance *)0x0) {
    *(MobyInstance **)((int)pvVar7 + 0x40) = g_heroMobyPtr;
    pMVar8 = pMVar9;
  }
  if (3 < (byte)moby->setByGroup) {
    moby->state = moby->setByGroup;
    pMVar8 = *(MobyInstance **)((int)pvVar7 + 0x40);
  }
  pMVar9 = *(MobyInstance **)((int)pvVar7 + 0x5c);
  if (((pMVar9 != (MobyInstance *)0x0) && (pMVar9->oClass == BLARG_GUNNER)) &&
     (pMVar9->state < 0x80)) {
    mobyfunc::DoManipulator(0x40059999a0000000,pMVar9,1,(Manipulator *)((int)pvVar7 + 0x70));
  }
  uVar1 = moby->state;
  if (uVar1 == '\x05') {
    mobyutil::OrganicDeltAng
              (*(float *)((int)pvVar7 + 0x54),DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
               mobyutil::g_FrameTime * 25.132742,&(moby->rotation).z,0x720000,
               (float *)((int)pvVar7 + 0x60));
    fVar42 = *(float *)((int)pvVar7 + 100) - 1.0;
    *(float *)((int)pvVar7 + 100) = fVar42;
    if (fVar42 <= 0.0) {
      moby->state = '\x04';
    }
  }
  else {
    if (uVar1 == '\x04') {
      uVar20 = 0x3ff0000000000000;
      mobyutil::MB_randSphere(0x3fe0000000000000,0x3ff0000000000000,uVar15 - 0xd0);
      mobyutil::MB_SpawnBoltsFromCrate(lVar16,0,0xffffffffffffffff);
      puVar10[0x12] = 0xffffffffffffffff;
      puVar10[0x14] = 1;
      puVar10[0x15] = 1;
      puVar10[0x16] = 0xffffffffffffffff;
      puVar10[0x17] = 0;
      mobyutil::MB_genericExplosion
                (0,0,0x4000000000000000,uVar20,0x4022000000000000,uVar20,0x402e000000000000,lVar16,
                 uVar15 - 0xd0,lVar16 + 0x10,1,0xffffffffffffffff,5,2,4);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    if (uVar1 == '\x03') {
      fVar42 = (pMVar8->pos).x - (moby->pos).x;
      fVar4 = (pMVar8->pos).y - (moby->pos).y;
      fVar3 = ABS(fVar42);
      fVar5 = ABS(fVar4);
      *(float *)((int)puVar10 + 0xdc) = fVar42;
      *(float *)(puVar10 + 0x1c) = fVar4;
      *(float *)((int)puVar10 + 0xe4) = fVar3 - fVar5;
      dVar29 = 0.0;
      uVar17 = (ulonglong)(*(uint *)((int)puVar10 + 0xdc) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar10 + 0xe4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar10 + 0x1c) >> 0x1d) & 4;
      fVar42 = ABS(*(float *)((int)puVar10 + 0xdc));
      if (*(float *)((int)puVar10 + 0xe4) - 0.0 < 0.0) {
        fVar42 = fVar5;
      }
      fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
      fVar4 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      fVar6 = ABS(*(float *)(puVar10 + 0x1c));
      if (*(float *)((int)puVar10 + 0xe4) - 0.0 < 0.0) {
        fVar6 = fVar3;
      }
      dVar30 = dVar29;
      if (0.0 < fVar42) {
        lVar18 = uVar15 - 0x180;
        lVar26 = uVar15 - 0x6c;
        lVar24 = uVar15 - 0x7c;
        lVar27 = 2;
        fVar42 = (fVar6 - fVar42) / (fVar6 + fVar42);
        fVar3 = fVar42 * fVar42;
        *(float *)(puVar10 + 0x24) = fVar42;
        *(float *)(puVar10 + 0x23) = fVar42;
        *(float *)((int)puVar10 + 0x11c) = fVar42;
        *(float *)((int)puVar10 + 0x114) = fVar42;
        fVar42 = fVar3 * fVar3;
        *(float *)(puVar10 + 0x23) = *(float *)(puVar10 + 0x23) * fVar3;
        *(float *)((int)puVar10 + 0x11c) = *(float *)((int)puVar10 + 0x11c) * fVar42;
        *(float *)(puVar10 + 0x24) = *(float *)(puVar10 + 0x24) * fVar42 * fVar3;
        do {
          *(float *)((int)lVar18 + 0x114) = *(float *)((int)lVar18 + 0x104) * fVar42 * fVar42;
          iVar23 = (int)lVar24;
          lVar24 = lVar24 + 8;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar23 + 4) * fVar42 * fVar42;
          lVar26 = lVar26 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar26 = uVar15 - 0x7c;
        pfVar25 = (float *)&DAT_007358e0;
        lVar18 = lVar19;
        lVar24 = lVar26;
        do {
          fVar42 = *pfVar25;
          fVar3 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar18 + 0x114) = *(float *)((int)lVar18 + 0x114) * fVar42;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar3;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar24 = 2;
        lVar18 = lVar19;
        do {
          iVar23 = (int)lVar18;
          iVar12 = (int)lVar26;
          lVar18 = lVar18 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar23 + 0x114)) +
                            *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                           *(float *)(iVar12 + 0xc));
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar5 + fVar4);
      }
      dVar30 = (double)fastfunc::FastSubRots((float)dVar30,*(float *)((int)pvVar7 + 0x54));
      if (((1.5707963705062866 <= dVar30) ||
          (fVar42 = (moby->pos).y - (pMVar8->pos).y, fVar4 = (moby->pos).x - (pMVar8->pos).x,
          22.0 < SQRT(fVar4 * fVar4 + fVar42 * fVar42))) ||
         ((*(int *)((int)pvVar7 + 0x50) != -1 &&
          (iVar23 = mobyutil::MB_IsPntInCuboid
                              ((Vec4 *)&hero::g_heroCGPos,(longlong)*(int *)((int)pvVar7 + 0x50)),
          iVar23 == 0)))) {
        if (moby->animationId != '\0') {
          uVar20 = mobyutil::MB_randRange(7,0xd);
          mobyutil::MB_SetAnimation(lVar16,0,0,uVar20);
        }
        moby->state = '\x01';
      }
      else {
        mobyutil::Delt((float)dVar28,mobyutil::g_FrameTime * 6.0,(float *)((int)pvVar7 + 0x68));
        fVar42 = (pMVar8->pos).x - (moby->pos).x;
        fVar4 = (pMVar8->pos).y - (moby->pos).y;
        dVar30 = ABS((double)fVar42);
        dVar31 = ABS((double)fVar4);
        *(float *)(puVar10 + 0x1a) = fVar42;
        *(float *)((int)puVar10 + 0xd4) = fVar4;
        *(float *)(puVar10 + 0x1b) = (float)(dVar30 - dVar31);
        fVar42 = *(float *)((int)pvVar7 + 0x54);
        uVar17 = (ulonglong)(*(uint *)(puVar10 + 0x1a) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar10 + 0x1b) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar10 + 0xd4) >> 0x1d) & 4;
        dVar28 = ABS((double)*(float *)(puVar10 + 0x1a));
        if ((double)*(float *)(puVar10 + 0x1b) - dVar29 < 0.0) {
          dVar28 = dVar31;
        }
        fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
        fVar4 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
        dVar31 = ABS((double)*(float *)((int)puVar10 + 0xd4));
        if ((double)*(float *)(puVar10 + 0x1b) - dVar29 < 0.0) {
          dVar31 = dVar30;
        }
        if (dVar29 < dVar28) {
          lVar18 = uVar15 - 0x180;
          lVar26 = uVar15 - 0x8c;
          lVar24 = uVar15 - 0x9c;
          lVar27 = 2;
          fVar3 = (float)(dVar31 - dVar28) / (float)(dVar31 + dVar28);
          fVar6 = fVar3 * fVar3;
          *(float *)(puVar10 + 0x20) = fVar3;
          *(float *)(puVar10 + 0x1f) = fVar3;
          *(float *)((int)puVar10 + 0xfc) = fVar3;
          *(float *)((int)puVar10 + 0xf4) = fVar3;
          fVar3 = fVar6 * fVar6;
          *(float *)(puVar10 + 0x1f) = *(float *)(puVar10 + 0x1f) * fVar6;
          *(float *)((int)puVar10 + 0xfc) = *(float *)((int)puVar10 + 0xfc) * fVar3;
          *(float *)(puVar10 + 0x20) = *(float *)(puVar10 + 0x20) * fVar3 * fVar6;
          do {
            *(float *)((int)lVar18 + 0xf4) = *(float *)((int)lVar18 + 0xe4) * fVar3 * fVar3;
            iVar23 = (int)lVar24;
            lVar24 = lVar24 + 8;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar26 + 4) = *(float *)(iVar23 + 4) * fVar3 * fVar3;
            lVar26 = lVar26 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar26 = uVar15 - 0x9c;
          pfVar25 = (float *)&DAT_007358e0;
          lVar18 = lVar19;
          lVar24 = lVar26;
          do {
            fVar3 = *pfVar25;
            fVar6 = pfVar25[1];
            pfVar25 = pfVar25 + 2;
            *(float *)((int)lVar18 + 0xf4) = *(float *)((int)lVar18 + 0xf4) * fVar3;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
            lVar24 = lVar24 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar18 = 2;
          do {
            iVar23 = (int)lVar19;
            iVar12 = (int)lVar26;
            lVar19 = lVar19 + 0x10;
            lVar26 = lVar26 + 0x10;
            dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar23 + 0xf4)) +
                              *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                             *(float *)(iVar12 + 0xc));
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
          dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar5 + fVar4);
        }
        dVar28 = (double)fastfunc::FastDiffRots(dVar29,(double)fVar42);
        dVar29 = (double)(*(float *)((int)pvVar7 + 0x6c) * 0.017453292);
        if ((dVar28 <= dVar29) &&
           (dVar30 = (double)(*(float *)((int)pvVar7 + 0x6c) * -0.017453292), dVar29 = dVar28,
           dVar28 < dVar30)) {
          dVar29 = dVar30;
        }
        dVar29 = (double)fastfunc::FastWrapRot((float)dVar29,*(float *)((int)pvVar7 + 0x54));
        fVar42 = mobyutil::OrganicDeltAng
                           ((float)dVar29,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                            mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                            (float *)((int)pvVar7 + 0x60));
        mobyupdate_helpers::M29_0032e710((double)fVar42,lVar16);
        iVar23 = *(int *)((int)pvVar7 + 0x5c);
        if ((((iVar23 == 0) || (*(short *)(iVar23 + 0xa6) != 0x24)) ||
            (cVar2 = *(char *)(iVar23 + 0x20), cVar2 == -3 || cVar2 == -2)) || (cVar2 == '\x02')) {
          if (moby->animationId != '\0') {
            uVar20 = mobyutil::MB_randRange(7,0xd);
            mobyutil::MB_SetAnimation(lVar16,0,0,uVar20);
          }
          *(undefined4 *)((int)pvVar7 + 100) = 0x3f800000;
          moby->state = '\x05';
        }
      }
    }
    else if (uVar1 == '\x01') {
      fVar42 = (pMVar8->pos).x - (moby->pos).x;
      fVar4 = (pMVar8->pos).y - (moby->pos).y;
      fVar5 = ABS(fVar42);
      fVar3 = ABS(fVar4);
      *(float *)(puVar10 + 0x1d) = fVar42;
      *(float *)((int)puVar10 + 0xec) = fVar4;
      *(float *)(puVar10 + 0x1e) = fVar5 - fVar3;
      fVar42 = 0.0;
      uVar17 = (ulonglong)(*(uint *)(puVar10 + 0x1d) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar10 + 0x1e) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar10 + 0xec) >> 0x1d) & 4;
      fVar4 = ABS(*(float *)(puVar10 + 0x1d));
      if (*(float *)(puVar10 + 0x1e) - 0.0 < 0.0) {
        fVar4 = fVar3;
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
      fVar3 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      fVar11 = ABS(*(float *)((int)puVar10 + 0xec));
      if (*(float *)(puVar10 + 0x1e) - 0.0 < 0.0) {
        fVar11 = fVar5;
      }
      if (0.0 < fVar4) {
        lVar18 = uVar15 - 0x180;
        lVar24 = uVar15 - 0x5c;
        lVar26 = uVar15 - 0x4c;
        lVar27 = 2;
        fVar4 = (fVar11 - fVar4) / (fVar11 + fVar4);
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar10 + 0x28) = fVar4;
        *(float *)(puVar10 + 0x27) = fVar4;
        *(float *)((int)puVar10 + 0x13c) = fVar4;
        *(float *)((int)puVar10 + 0x134) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar10 + 0x27) = *(float *)(puVar10 + 0x27) * fVar5;
        *(float *)((int)puVar10 + 0x13c) = *(float *)((int)puVar10 + 0x13c) * fVar4;
        *(float *)(puVar10 + 0x28) = *(float *)(puVar10 + 0x28) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar18 + 0x134) = *(float *)((int)lVar18 + 0x124) * fVar4 * fVar4;
          iVar23 = (int)lVar24;
          lVar18 = lVar18 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar23 + 4) * fVar4 * fVar4;
          lVar26 = lVar26 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar26 = uVar15 - 0x5c;
        pfVar25 = (float *)&DAT_007358e0;
        lVar18 = lVar19;
        lVar24 = lVar26;
        do {
          fVar4 = *pfVar25;
          fVar5 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar18 + 0x134) = *(float *)((int)lVar18 + 0x134) * fVar4;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar5;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar18 = 2;
        do {
          iVar23 = (int)lVar19;
          iVar12 = (int)lVar26;
          lVar19 = lVar19 + 0x10;
          lVar26 = lVar26 + 0x10;
          fVar42 = fVar42 + *(float *)(iVar23 + 0x134) + *(float *)(iVar12 + 4) +
                   *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc);
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        fVar42 = (fVar42 + 0.7853982) * fVar6 + fVar3;
      }
      dVar29 = (double)fastfunc::FastSubRots(fVar42,*(float *)((int)pvVar7 + 0x54));
      if (((dVar29 < 1.5707963705062866) &&
          (fVar42 = (moby->pos).y - (pMVar8->pos).y, fVar4 = (moby->pos).x - (pMVar8->pos).x,
          (double)SQRT(fVar4 * fVar4 + fVar42 * fVar42) < dVar28)) &&
         ((*(int *)((int)pvVar7 + 0x50) == -1 ||
          (iVar23 = mobyutil::MB_IsPntInCuboid
                              ((Vec4 *)&hero::g_heroCGPos,(longlong)*(int *)((int)pvVar7 + 0x50)),
          iVar23 != 0)))) {
        *(undefined4 *)((int)pvVar7 + 0x68) = 0x41000000;
        if (moby->animationId != '\x01') {
          uVar20 = mobyutil::MB_randRange(0,3);
          uVar21 = mobyutil::MB_randRange(7,0xd);
          mobyutil::MB_SetAnimation(lVar16,1,uVar20,uVar21);
        }
        moby->state = '\x03';
      }
      fVar42 = mobyutil::OrganicDeltAng
                         (*(float *)((int)pvVar7 + 0x54),DAT_0071f418 * 12.566371,
                          DAT_0071f418 * 12.566371,mobyutil::g_FrameTime * 12.566371,
                          &(moby->rotation).z,0x720000,(float *)((int)pvVar7 + 0x60));
      iVar23 = *(int *)((int)pvVar7 + 0x5c);
      if (((iVar23 == 0) || (*(short *)(iVar23 + 0xa6) != 0x24)) ||
         ((cVar2 = *(char *)(iVar23 + 0x20), cVar2 == -3 || cVar2 == -2 || (cVar2 == '\x02')))) {
        if (moby->animationId != '\0') {
          uVar20 = mobyutil::MB_randRange((double)fVar42,7,0xd);
          mobyutil::MB_SetAnimation(lVar16,0,0,uVar20);
        }
        *(undefined4 *)((int)pvVar7 + 100) = 0x3f800000;
        moby->state = '\x05';
      }
    }
    else if (uVar1 == '\0') {
      moby->scale = moby->pClass->gScale * 1.5;
      uVar22 = FUN_00354638(lVar16);
      *(undefined4 *)((int)pvVar7 + 0x5c) = uVar22;
      *(f32 *)((int)pvVar7 + 0x54) = (moby->rotation).z;
      if (moby->animationId != '\0') {
        mobyutil::MB_SetAnimation(lVar16,0,0,10);
      }
      moby->state = '\x01';
    }
  }
  iVar23 = *(int *)((int)pvVar7 + 0x5c);
  if (((iVar23 == 0) || (*(short *)(iVar23 + 0xa6) != 0x24)) ||
     (*(char *)(iVar23 + 0x20) == -3 || *(char *)(iVar23 + 0x20) == -2)) {
    *(undefined4 *)((int)pvVar7 + 0x5c) = 0;
  }
  else {
    *(f32 *)(iVar23 + 0x40) = (moby->rotation).x;
    *(f32 *)(iVar23 + 0x44) = (moby->rotation).y;
    *(f32 *)(iVar23 + 0x48) = (moby->rotation).z;
    *(f32 *)(iVar23 + 0x4c) = (moby->rotation).w;
    iVar23 = *(int *)((int)pvVar7 + 0x5c);
    puVar13 = (undefined4 *)((uint)&moby->transform & 0xfffffff0);
    uVar33 = puVar13[2];
    uVar32 = puVar13[1];
    uVar22 = *puVar13;
    puVar14 = (undefined4 *)((uint)&(moby->transform).v1 & 0xfffffff0);
    uVar37 = puVar14[3];
    uVar36 = puVar14[2];
    uVar35 = puVar14[1];
    uVar34 = *puVar14;
    puVar14 = (undefined4 *)((uint)&(moby->transform).v2 & 0xfffffff0);
    uVar41 = puVar14[3];
    uVar40 = puVar14[2];
    uVar39 = puVar14[1];
    uVar38 = *puVar14;
    puVar14 = (undefined4 *)(iVar23 + 0xc0U & 0xfffffff0);
    puVar14[3] = puVar13[3];
    puVar14[2] = uVar33;
    puVar14[1] = uVar32;
    *puVar14 = uVar22;
    puVar13 = (undefined4 *)(iVar23 + 0xd0U & 0xfffffff0);
    puVar13[3] = uVar37;
    puVar13[2] = uVar36;
    puVar13[1] = uVar35;
    *puVar13 = uVar34;
    puVar13 = (undefined4 *)(iVar23 + 0xe0U & 0xfffffff0);
    puVar13[3] = uVar41;
    puVar13[2] = uVar40;
    puVar13[1] = uVar39;
    *puVar13 = uVar38;
  }
  return;
}



//==== 0032f5e8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M291_0032f5e8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M291_0032f5e8(void)

{
  DAT_008008c4 = 0x10000;
  return;
}



//==== 0032f620  ns=mobyupdate_helpers  size=0x2a8
// sig: undefined M291_0032f620(void)
// callers(1): 0032f988 mobyupdate_unsorted::UpdateMoby_291
// callees(7): 000f1114 mobyfunc::GetBonePosition; 000f30a0 mobyfunc::PostUpdateMobyLockTransform; 00500ca4 fastfunc::FastEulerToMtx1; 00500f6c fastfunc::FastMtxCopyNoTranslate; 00500fa8 fastfunc::FastApplyTransform; 0050162c fastfunc::FastVecMtx4Mul; 00502730 fastfunc::FastIntToDouble

void mobyupdate_helpers::M291_0032f620(longlong param_1,int param_2)

{
  MobyInstance *pMoby;
  void *pvVar1;
  ulonglong uVar2;
  int iVar3;
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
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  Vec4 VStack_1a0;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  undefined1 auStack_160 [64];
  undefined1 auStack_120 [72];
  
  uVar2 = 0;
  dVar12 = 0.0;
  dVar13 = 100.0;
  dVar14 = -50.0;
  dVar15 = 0.3499999940395355;
  dVar16 = -1.5707963705062866;
  dVar18 = 0.3100000023841858;
  dVar19 = 4.5;
  dVar20 = 2.75;
  do {
    pMoby = *(MobyInstance **)((int)((uVar2 & 0xffffffff) << 2) + param_2 + 0xb8);
    if (pMoby != (MobyInstance *)0x0) {
      pvVar1 = pMoby->pVar;
      dVar4 = (double)fastfunc::FastIntToDouble(uVar2);
      dVar7 = (double)*(float *)((int)pvVar1 + 0xc);
      dVar17 = 0.0;
      dVar5 = dVar20;
      if (dVar12 - (double)*(float *)(param_2 + 0x10) < 0.0) {
        dVar5 = dVar19;
      }
      dVar6 = (double)DAT_0071f408;
      dVar5 = (double)(float)((double)(float)(dVar4 * dVar13 + dVar14) *
                              (double)*(float *)(param_2 + 0x14) + dVar5);
      if (dVar7 <= dVar5) {
        if (dVar7 < dVar5) {
          *(float *)((int)pvVar1 + 0xc) = (float)(dVar6 * dVar15 + dVar7);
        }
      }
      else {
        *(float *)((int)pvVar1 + 0xc) = -(float)(dVar6 * dVar15 - dVar7);
      }
      (pMoby->rotation).z = (float)(dVar6 * dVar16);
      fastfunc::FastEulerToMtx1(auStack_160,&pMoby->rotation);
      fastfunc::FastMtxCopyNoTranslate(auStack_120,param_1 + 0xc0);
      fastfunc::FastVecMtx4Mul(&VStack_1a0,auStack_120,auStack_160);
      fastfunc::FastApplyTransform(&(pMoby->transform).v0,&VStack_1a0);
      dVar10 = (double)local_170;
      dVar11 = (double)(float)((double)local_190 * dVar18);
      dVar9 = (double)(float)((double)local_18c * dVar18);
      dVar8 = (double)local_16c;
      dVar6 = (double)(float)((double)local_188 * dVar18);
      dVar7 = (double)local_168;
      dVar4 = (double)(float)((double)local_184 * dVar18);
      dVar5 = (double)local_164;
      mobyfunc::GetBonePosition(param_1,(int)uVar2 + 2,&local_1b0);
      (pMoby->pos).x = (float)(dVar10 * dVar17 + dVar11) + local_1b0;
      (pMoby->pos).y = (float)(dVar8 * dVar17 + dVar9) + local_1ac;
      (pMoby->pos).w = (float)(dVar5 * dVar17 + dVar4);
      (pMoby->pos).z = (float)(dVar7 * dVar17 + dVar6) + local_1a8;
      mobyfunc::PostUpdateMobyLockTransform(pMoby);
    }
    iVar3 = (int)uVar2 + 1;
    uVar2 = (ulonglong)iVar3;
  } while (iVar3 < 2);
  return;
}



//==== 0032f988  ns=mobyupdate_unsorted  size=0x1ac8
// sig: undefined UpdateMoby_291(MobyInstance * moby)
// callers(0): 
// callees(37): 00060ac0 debug::DebugFontPrintLeft; 00065468 stub::STUB_00065468; 000b72b0 hero::TransitionMovement; 000c8444 hud::RegisterHUDCallback; 000c8b28 hud::Hud_SetEntryValueById; 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000f20f0 mobyutil::MB_BSphereGap; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe610 mobyutil::MB_SphericalToVector; 000fe8c8 mobyutil::MB_randCircle; 0010675c mobyutil::MB_damage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0010dc70 mobyutil::MB_CheckCollPill; 0010e030 mobyutil::MB_genericExplosion; 0012bd28 partupd::SpawnPart_38; 0015d12c sound::PlayMobySound; 002b9870 FUN_002b9870; 0032f620 mobyupdate_helpers::M291_0032f620; 00342d38 FUN_00342d38; 00342d40 FUN_00342d40; 003487b8 FUN_003487b8; 004fff60 fastfunc::FastDecTimerS32; 005000b4 fastfunc::FastDecTimerU8; 00500608 fastfunc::FastVecNormalize; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble; 005cd2a8 libc::snprintf; 005e7ed8 FUN_005e7ed8; 005e7f98 FUN_005e7f98; 005e8078 mathfunc::cosf; 005e8128 FUN_005e8128; 005e8338 FUN_005e8338; 005e8e80 FUN_005e8e80; 005e8f4c FUN_005e8f4c
// strings: 00656184: 'SPEED: %f km/h'

/* Moby 291 */

void mobyupdate_unsorted::UpdateMoby_291(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  MOBY_OCLASSES MVar3;
  float *pfVar4;
  MobyInstance *pMVar5;
  f32 fVar6;
  uint uVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  float fVar10;
  float fVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  double dVar29;
  double dVar30;
  undefined8 uVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a0;
  float local_19c;
  float local_198;
  f32 local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_170;
  float local_16c;
  float local_168;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  f32 local_124;
  float local_120;
  float local_11c;
  float local_118;
  char acStack_110 [72];
  
  lVar14 = (longlong)(int)moby;
  uVar13 = ZEXT48(&stack0x00000000);
  puVar12 = (undefined4 *)(uVar13 - 0xe0);
  puVar12[3] = in_vr31_32_3;
  puVar12[2] = in_vr31_32_2;
  puVar12[1] = in_vr31_32_1;
  *puVar12 = in_vr31_32_0;
  if (moby == (MobyInstance *)0x0) {
    return;
  }
  pfVar4 = (float *)moby->pVar;
  uVar21 = ZEXT48(pfVar4);
  if (pfVar4 == (float *)0x0) {
    return;
  }
  if (DAT_0096b2d0 == moby) {
    auVar43 = ZEXT416(0xffffffff);
    auVar41 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
    auVar43 = ZEXT416(0xffffffff);
    auVar45 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
    auVar41 = vectorShiftLeftIntegerWord(auVar41,auVar41);
    auVar42 = loadVectorLeftIndexed(0x15fc,0x969ce0);
    auVar43 = loadVectorLeftIndexed(uVar13 - 0xe0,0x32f8c8);
    auVar44 = loadVectorLeftIndexed(4,0x32f8c8);
    auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar41 = vectorMultiplyAddFloatingPoint
                        (auVar42,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,
                         auVar41);
    auVar43 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar42 = vectorShiftLeftIntegerWord(auVar45,auVar45);
    auVar43 = vectorMultiplyAddFloatingPoint
                        (auVar41,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,
                         auVar42);
    auVar43 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
    auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
    DAT_0096b2e8 = storeVectorElementWordIndexed
                             (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x1608,
                              0x969ce0);
  }
  lVar19 = lVar14 + 0x10;
  dVar22 = (double)FUN_00342d38(lVar19);
  uVar1 = moby->state;
  dVar22 = (double)(float)(dVar22 + (double)pfVar4[0x28]);
  if ((((uVar1 != '\a') && (uVar1 != '\x01')) && (uVar1 != '\x02')) &&
     ((iVar15 = mobyutil::MB_damage(lVar14,0x30000,0), iVar15 != 0 && (moby->state == '\x04')))) {
    *(undefined1 *)((int)pfVar4 + 199) = 0x5a;
    mobyutil::MB_UpdateLightsTransition(lVar14,uVar21 + 0xc0);
    uVar7 = (int)*(uint *)(iVar15 + 0x2c) >> 0x1f;
    if ((int)((uVar7 >> 1 ^ *(uint *)(iVar15 + 0x2c)) - uVar7) <
        (int)(((uint)((int)DAT_0096b2dc >> 0x1f) >> 1 ^ (uint)DAT_0096b2dc) -
             ((int)DAT_0096b2dc >> 0x1f))) {
      DAT_0096b2dc = DAT_0096b2dc - *(float *)(iVar15 + 0x2c);
      if ((*(uint *)(iVar15 + 0x30) & 1) != 0) {
        FUN_005e7f98((double)(*(float *)(iVar15 + 0x2c) * 0.125),uVar13 - 0x1d0,iVar15 + 0x10);
        if (0x3e19999a <
            (int)(((uint)((int)local_1c8 >> 0x1f) >> 1 ^ (uint)local_1c8) - ((int)local_1c8 >> 0x1f)
                 )) {
          local_1c8 = 0.15;
        }
        FUN_005e8e80(0x3fd3333340000000,uVar13 - 0x1d0,uVar13 - 0x1d0);
        *pfVar4 = *pfVar4 + local_1d0;
        pfVar4[1] = pfVar4[1] + local_1cc;
        pfVar4[2] = pfVar4[2] + local_1c8;
      }
    }
    else {
      uVar28 = 0;
      DAT_0096b2dc = 0.0;
      moby->state = '\a';
      pfVar4[8] = 2.52234e-43;
      g_heroPosition.z = g_heroPosition.z + 0.2;
      g_heroMobyPtr->collisionMesh = (float *)0x0;
      hero::TransitionMovement(0,1);
      DAT_0096b2d0 = (MobyInstance *)0x0;
      DAT_0096b2d4 = ~RATCHET;
      mobyutil::MB_genericExplosion
                (uVar28,uVar28,0x4010000000000000,0x4000000000000000,0x4022000000000000,
                 0x3ff0000000000000,0x402e000000000000,lVar14,uVar21,0,0xffffffffffffffff,1,10,3,
                 0x10);
    }
    moby->damage = -1;
  }
  mobyutil::MB_ColorDyingMoby(lVar14,uVar21 + 0xc0);
  uVar1 = moby->state;
  if (uVar1 == '\a') {
    iVar15 = fastfunc::FastDecTimerS32(uVar21 + 0x20);
    if (iVar15 != 0) {
      hero::TransitionMovement(0,1);
      hud::Hud_SetEntryValueById((int)DAT_0096b2ec,0);
      DAT_0096b2d0 = (MobyInstance *)0x0;
      DAT_0096b2d4 = 0xffff;
      mobyfunc::DeleteMoby(moby);
      return;
    }
    pfVar4[4] = 0.0;
    dVar24 = (double)pfVar4[0x28];
    dVar23 = (double)fastfunc::FastIntToDouble(pfVar4[8]);
    pfVar4[0x28] = (float)(dVar24 - (double)(float)(1.0 / dVar23));
  }
  else if (uVar1 == '\x06') {
    pfVar4[4] = 0.0;
  }
  else if (uVar1 == '\x05') {
    iVar15 = fastfunc::FastDecTimerS32(uVar21 + 0x20);
    if (iVar15 != 0) {
      moby->state = '\x01';
      hud::Hud_SetEntryValueById((int)DAT_0096b2ec,0);
      DAT_0096b2d0 = (MobyInstance *)0x0;
      DAT_0096b2d4 = ~RATCHET;
    }
    pfVar4[4] = 0.0;
  }
  else if (uVar1 == '\x04') {
    if ((g_heroState == STANDING) || (g_heroState == NEUTRAL_JUMP)) {
      hero::TransitionMovement(0x32,1);
    }
    if ((g_downButtons & CROSS) == 0) {
      fVar16 = pfVar4[0x22];
      pfVar4[4] = 0.0;
      *pfVar4 = *pfVar4 * fVar16;
      pfVar4[1] = pfVar4[1] * fVar16;
      pfVar4[2] = pfVar4[2] * fVar16;
      fVar16 = 0.0;
    }
    else {
      fVar17 = (pfVar4[0x10] - pfVar4[0xf]) * pfVar4[0x12] + pfVar4[0xf];
      fVar16 = pfVar4[0x11];
      if (fVar17 - pfVar4[0x11] < 0.0) {
        fVar16 = fVar17;
      }
    }
    pfVar4[0xf] = fVar16;
    pfVar4[5] = (-(ANALOG_STICKS.z * (pfVar4[0x13] + fVar16)) - pfVar4[5]) * pfVar4[0x15] +
                pfVar4[5];
    if ((g_downButtons & (SQUARE|CIRCLE|R1)) != 0) {
      iVar15 = fastfunc::FastDecTimerU8(uVar21 + 0x93);
      if (iVar15 != 0) {
        auVar43 = ZEXT416(0xfffffff8);
        auVar41 = loadVectorLeftIndexed(0x90,uVar21);
        auVar43 = vectorShiftRightWord
                            (auVar41,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60);
        if ((g_downButtons & CIRCLE) != 0) {
          if (DAT_0096b2d6 == '\0') goto LAB_003305c8;
          DAT_0096b2d6 = DAT_0096b2d6 + -1;
          auVar41 = ZEXT416(2);
          auVar43 = vectorShiftLeftIntegerWord
                              (auVar43,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60
                              );
        }
        auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        mobyutil::MB_SphericalToVector
                  (pfVar4[0x27] * mobyutil::g_FrameTime,(moby->rotation).z,0.0,&local_1c0);
        local_1c0 = local_1c0 + *pfVar4;
        local_1bc = local_1bc + pfVar4[1];
        local_1b8 = local_1b8 + pfVar4[2];
        mobyfunc::GetBonePosition(lVar14,0,uVar13 - 0x1b0);
        local_1b0 = local_1b0 + local_1c0;
        local_1ac = local_1ac + local_1bc;
        local_1a8 = local_1a8 + local_1b8;
        uVar28 = 0x3fd0000000000000;
        uVar31 = 0xbff0000000000000;
        uVar27 = 0x3fb99999a0000000;
        uVar26 = 0x3fc99999a0000000;
        FUN_003487b8(0x3fd0000000000000,0xbff0000000000000,0x3fb99999a0000000,0x3fc99999a0000000,
                     lVar14);
        mobyfunc::GetBonePosition(lVar14,1,uVar13 - 0x1b0);
        local_1b0 = local_1b0 + local_1c0;
        local_1a8 = local_1a8 + local_1b8;
        local_1ac = local_1ac + local_1bc;
        FUN_003487b8(uVar28,uVar31,uVar27,uVar26,lVar14);
        sound::PlayMobySound(0,0,moby);
        auVar41 = vectorConvertFromSignedFixedPointWord(auVar43,0);
        auVar43 = ZEXT416(0xffffffff);
        auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar44 = loadVectorLeftIndexed(0x74,0x32f8c8);
        auVar42 = vectorShiftLeftIntegerWord(auVar43,auVar43);
        auVar43 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar43 = vectorAddFloatingPoint
                            (auVar41,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60);
        auVar43 = vectorMultiplyAddFloatingPoint(auVar44,auVar43,auVar42);
        auVar43 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
        auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xff;
        uVar8 = storeVectorElementByteIndexed
                          (auVar43 | auVar43 << 8 | auVar43 << 0x10 | auVar43 << 0x18 |
                           auVar43 << 0x20 | auVar43 << 0x28 | auVar43 << 0x30 | auVar43 << 0x38 |
                           auVar43 << 0x40 | auVar43 << 0x48 | auVar43 << 0x50 | auVar43 << 0x58 |
                           auVar43 << 0x60 | auVar43 << 0x68 | auVar43 << 0x70 | auVar43 << 0x78,
                           0x93,uVar21);
        *(undefined1 *)((int)pfVar4 + 0x93) = uVar8;
      }
    }
  }
  else if (uVar1 == '\x03') {
    dVar36 = (double)((moby->pos).y - g_heroPosition.y);
    dVar37 = (double)((moby->pos).x - g_heroPosition.x);
    dVar24 = (double)((moby->pos).z - g_heroPosition.z);
    dVar23 = (double)fastfunc::FastDiffRots((double)(moby->rotation).z,(double)g_heroRotation.z);
    fVar16 = g_heroRotation.z;
    if ((SQRT((float)(dVar24 * dVar24 +
                     (double)(float)(dVar37 * dVar37 + (double)(float)(dVar36 * dVar36)))) < 0.1) &&
       (dVar23 < 0.10000000149011612)) {
      moby->state = '\x04';
    }
    g_heroPosition.x = (float)(dVar37 * 0.10000000149011612 + (double)g_heroPosition.x);
    g_heroPosition.y = (float)(dVar36 * 0.10000000149011612 + (double)g_heroPosition.y);
    g_heroPosition.z = (float)(dVar24 * 0.10000000149011612 + (double)g_heroPosition.z);
    dVar23 = (double)fastfunc::FastWrapRot(fVar16,(float)(dVar23 * 0.10000000149011612));
    g_heroRotation.z = (float)dVar23;
  }
  else if (uVar1 == '\x02') {
    hero::TransitionMovement(0x32,1);
    g_heroMobyPtr->collisionMesh = (float *)0xffffffff;
    fVar16 = pfVar4[0x2e];
    pfVar4[4] = 0.0;
    if (fVar16 == 0.0) {
      fVar16 = (float)FUN_002b9870(lVar14);
      pfVar4[0x2e] = fVar16;
    }
    fVar17 = pfVar4[0x2f];
    if (fVar17 == 0.0) {
      fVar17 = (float)FUN_002b9870(lVar14);
      fVar16 = pfVar4[0x2e];
      pfVar4[0x2f] = fVar17;
    }
    if (fVar17 != 0.0 && fVar16 != 0.0) {
      moby->state = '\x03';
    }
    dVar24 = 0.10000000149011612;
    g_heroPosition.x = ((moby->pos).x - g_heroPosition.x) * 0.1 + g_heroPosition.x;
    g_heroPosition.y = ((moby->pos).y - g_heroPosition.y) * 0.1 + g_heroPosition.y;
    g_heroPosition.z = ((moby->pos).z - g_heroPosition.z) * 0.1 + g_heroPosition.z;
    dVar23 = (double)fastfunc::FastDiffRots((double)(moby->rotation).z,(double)g_heroRotation.z);
    dVar23 = (double)fastfunc::FastWrapRot(g_heroRotation.z,(float)(dVar23 * dVar24));
    g_heroRotation.z = (float)dVar23;
  }
  else if (uVar1 == '\x01') {
    dVar23 = (double)mobyutil::MB_BSphereGap(lVar14,g_heroMobyPtr);
    if (((dVar23 < 0.4000000059604645) &&
        (iVar15 = mobyutil::MB_CheckCollPill(moby,5,0,0), iVar15 != 0)) &&
       (CollOutput.pMoby == g_heroMobyPtr)) {
      moby->state = '\x02';
      DAT_0096b2d4 = moby->oClass;
      DAT_0096b2ee = 0;
      DAT_0096b2d6 = *(char *)((int)pfVar4 + 0x91);
      DAT_0096b2d7 = 100;
      DAT_0096b2d8 = 0x32;
      DAT_0096b2dc = pfVar4[0x26];
      DAT_0096b2e0 = 0x41200000;
      DAT_0096b2e4 = 0x40400000;
      DAT_0096b2d9 = *(undefined1 *)((int)pfVar4 + 0x92);
      DAT_0096b2da = 3;
      DAT_0096b2db = 3;
      DAT_0096b2ef = 0;
      DAT_0096b2d0 = moby;
      iVar15 = hud::RegisterHUDCallback
                         (0x10,0xffff,&PTR_HudEntry_InitCounter_007056a0,
                          &PTR_HudEntry_UpdateCounter_007056c8,&PTR_Draw_MobyMeterHud_00705840,
                          &DAT_0096b2e8,200);
      DAT_0096b2ec = (short)iVar15;
    }
    pfVar4[4] = 0.0;
  }
  else if (uVar1 == '\0') {
    moby->state = '\x01';
    pfVar4[4] = 0.0;
    fVar2 = DAT_0071f408;
    fVar16 = pfVar4[0x14];
    fVar17 = pfVar4[0x13];
    if (pfVar4[0xb] == 0.0) {
      fVar16 = DAT_0071f408 * 2.0;
      pfVar4[0xd] = 0.004;
      pfVar4[0xc] = fVar16;
      pfVar4[0x10] = 0.125;
      auVar43 = ZEXT416(0xffffffff);
      auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
      auVar41 = vectorShiftLeftIntegerWord(auVar43,auVar43);
      pfVar4[0xe] = fVar2 * 0.02;
      auVar43 = ZEXT416(0xffffffff);
      auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
      pfVar4[0x12] = fVar2 * 0.05;
      fVar17 = fVar2 * 0.021;
      auVar42 = vectorShiftLeftIntegerWord(auVar43,auVar43);
      pfVar4[0x13] = fVar17;
      fVar16 = fVar2 * 0.025;
      pfVar4[0x14] = fVar16;
      pfVar4[0x16] = 20.0;
      pfVar4[0x17] = 90.0;
      pfVar4[0x15] = fVar2 * 0.11;
      pfVar4[0x18] = fVar2 * 0.009;
      pfVar4[0x19] = fVar2 * 0.01;
      fVar10 = fVar2 * -0.060000002 + 1.0;
      pfVar4[0x1a] = fVar10;
      pfVar4[0x1b] = fVar10;
      pfVar4[0x1c] = fVar2 * -0.01999998 + 1.0;
      pfVar4[0x1d] = fVar2 * 0.55;
      pfVar4[0x1e] = fVar2 * 0.1;
      pfVar4[0x20] = 0.015;
      pfVar4[0x21] = 0.25;
      pfVar4[0x1f] = fVar2 * 0.4;
      pfVar4[0x22] = fVar2 * -0.00999999 + 1.0;
      pfVar4[0x23] = DAT_0071f418 * 9.8;
      auVar43 = loadVectorLeftIndexed(0x60,0x32f8c8);
      auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar43 = vectorMultiplyAddFloatingPoint
                          (auVar44,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,
                           auVar41);
      auVar43 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
      auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xff;
      uVar8 = storeVectorElementByteIndexed
                        (auVar43 | auVar43 << 8 | auVar43 << 0x10 | auVar43 << 0x18 |
                         auVar43 << 0x20 | auVar43 << 0x28 | auVar43 << 0x30 | auVar43 << 0x38 |
                         auVar43 << 0x40 | auVar43 << 0x48 | auVar43 << 0x50 | auVar43 << 0x58 |
                         auVar43 << 0x60 | auVar43 << 0x68 | auVar43 << 0x70 | auVar43 << 0x78,0x90,
                         uVar21);
      *(undefined1 *)(pfVar4 + 0x24) = uVar8;
      *(undefined1 *)((int)pfVar4 + 0x91) = 0x32;
      *(undefined1 *)((int)pfVar4 + 0x92) = 3;
      auVar43 = loadVectorLeftIndexed(100,0x32f8c8);
      auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar43 = vectorMultiplyAddFloatingPoint
                          (auVar44,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,
                           auVar42);
      auVar43 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
      auVar43 = vectorSplatHalfWord(auVar43,1);
      uVar9 = storeVectorElementHalfWordIndexed(auVar43,0x94,uVar21);
      *(undefined2 *)(pfVar4 + 0x25) = uVar9;
      pfVar4[0x26] = 10.0;
      pfVar4[0x27] = 30.0;
      pfVar4[0x28] = 0.21;
      pfVar4[0x29] = 0.1;
      pfVar4[0x2c] = 0.5;
      pfVar4[0x2d] = 70.0;
      pfVar4[0x2a] = fVar2 * 0.9;
    }
    pfVar4[0x2b] = 0.0;
    pfVar4[0x11] = fVar16 - fVar17;
  }
LAB_003305c8:
  dVar36 = (double)((moby->pos).z + pfVar4[2]);
  pfVar4[6] = -(pfVar4[5] * pfVar4[0x16]);
  fVar16 = (-(pfVar4[5] * pfVar4[0x16]) - (moby->rotation).x) * pfVar4[0x18] + pfVar4[7];
  pfVar4[7] = fVar16;
  fVar16 = (moby->rotation).x + fVar16;
  (moby->rotation).x = fVar16;
  (moby->rotation).x = fVar16 * pfVar4[0x1a];
  pfVar4[9] = -(pfVar4[4] * pfVar4[0x17]);
  fVar16 = (-(pfVar4[4] * pfVar4[0x17]) - (moby->rotation).y) * pfVar4[0x19] + pfVar4[10];
  pfVar4[10] = fVar16;
  fVar16 = (moby->rotation).y + fVar16;
  (moby->rotation).y = fVar16;
  (moby->rotation).y = fVar16 * pfVar4[0x1b];
  dVar23 = (double)fastfunc::FastWrapRot((moby->rotation).z,pfVar4[5]);
  (moby->rotation).z = (float)dVar23;
  dVar23 = (double)mathfunc::cosf((float)dVar23);
  dVar24 = (double)FUN_005e8128((double)(moby->rotation).z);
  fVar16 = (float)dVar24;
  dVar24 = 0.0;
  if (*(short *)((int)pfVar4 + 0x96) < 1) {
    if (dVar36 < dVar22) {
      dVar37 = (double)*pfVar4;
      dVar36 = (double)mathfunc::cosf((moby->rotation).z);
      dVar38 = (double)pfVar4[1];
      *pfVar4 = (float)((double)pfVar4[4] * dVar36 + dVar37);
      dVar36 = (double)FUN_005e8128((double)(moby->rotation).z);
      pfVar4[1] = (float)((double)pfVar4[4] * dVar36 + dVar38);
      dVar36 = (double)((moby->pos).z + pfVar4[2]);
    }
  }
  else {
    *(short *)((int)pfVar4 + 0x96) = *(short *)((int)pfVar4 + 0x96) + -1;
    dVar37 = (double)*pfVar4;
    dVar36 = (double)mathfunc::cosf((moby->rotation).z);
    dVar38 = (double)pfVar4[1];
    *pfVar4 = (float)((double)pfVar4[0x29] * dVar36 + dVar37);
    dVar36 = (double)FUN_005e8128((double)(moby->rotation).z);
    pfVar4[1] = (float)((double)pfVar4[0x29] * dVar36 + dVar38);
    dVar36 = (double)((moby->pos).z + pfVar4[2]);
  }
  pfVar4[5] = pfVar4[5] * pfVar4[0x1c];
  if (*(short *)((int)pfVar4 + 0x96) == 0) {
    FUN_005e7ed8((double)pfVar4[0x1d],uVar21,uVar21);
  }
  else {
    FUN_005e7ed8((double)pfVar4[0x2a],uVar21,uVar21);
  }
  iVar15 = mobyutil::MB_CheckCollPill(moby,4,0,0);
  if (dVar36 < dVar22) {
    fVar17 = pfVar4[1];
    fVar2 = *pfVar4;
    dVar38 = (double)(float)(dVar22 - dVar36);
    dVar37 = 1.0;
    dVar39 = (double)SQRT(fVar2 * fVar2 + fVar17 * fVar17);
    dVar36 = (double)((float)(dVar38 * (double)pfVar4[0x1e]) * pfVar4[0x2d]);
    if (1.0 - dVar36 < 0.0) {
      dVar36 = dVar37;
    }
    fVar10 = (float)(dVar38 * (double)pfVar4[0x1e]) *
             ((float)((double)pfVar4[0xc] * dVar39) / pfVar4[0x1d] + 1.0) + pfVar4[2];
    pfVar4[2] = fVar10;
    dVar34 = (double)(fVar10 * 0.0 + fVar2 * (float)dVar23 + fVar17 * fVar16);
    dVar25 = dVar24;
    dVar35 = dVar24;
    if (dVar24 < dVar34) {
      dVar25 = (double)(((float)(dVar34 / dVar39) - (1.0 - pfVar4[0xd])) * (1.0 / pfVar4[0xd]));
      if (dVar25 - (double)pfVar4[0x2c] < 0.0) {
        dVar25 = (double)pfVar4[0x2c];
      }
      dVar35 = dVar34;
      if (1.0 < dVar25) {
        dVar25 = dVar37;
      }
    }
    dVar32 = (double)(float)(1.0 - dVar36);
    FUN_005e7ed8((double)(pfVar4[0x1d] * (float)((double)(float)(1.0 - dVar25) * dVar32 + dVar25)),
                 uVar21,uVar21);
    dVar36 = (double)mathfunc::cosf((moby->rotation).z);
    dVar25 = (double)FUN_005e8128((double)(moby->rotation).z);
    dVar30 = 1.5707963705062866;
    dVar34 = (double)fastfunc::FastWrapRot((moby->rotation).z,1.5707964);
    dVar34 = (double)mathfunc::cosf((float)dVar34);
    local_180 = (float)dVar34;
    fastfunc::FastWrapRot((moby->rotation).z,(float)dVar30);
    dVar34 = (double)FUN_005e8128();
    local_17c = (float)dVar34;
    local_178 = 0.0;
    local_190 = *pfVar4 * 0.9;
    local_18c = pfVar4[1] * 0.9;
    local_188 = pfVar4[2] * 0.9;
    local_184 = pfVar4[3];
    dVar34 = (double)mobyutil::MB_randRangeFloat(-0.2,0.2);
    local_1a0 = (float)((double)local_180 * dVar34 + (double)(moby->pos).x);
    local_19c = (float)((double)local_17c * dVar34 + (double)(moby->pos).y);
    local_198 = (float)((double)local_178 * dVar34 + (double)(moby->pos).z);
    local_194 = (moby->pos).w;
    dVar34 = (double)mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar37);
    local_1a0 = (float)(dVar36 * dVar34 + (double)local_1a0);
    local_19c = (float)(dVar25 * dVar34 + (double)local_19c);
    uVar28 = 0x3fd99999a0000000;
    uVar31 = 0x3f747ae140000000;
    partupd::SpawnPart_38(0x3fd99999a0000000,0x3f747ae140000000,uVar13 - 0x1a0,uVar13 - 400);
    local_190 = *pfVar4 * 0.5;
    local_18c = pfVar4[1] * 0.5;
    local_188 = pfVar4[2] * 0.5;
    local_184 = pfVar4[3];
    dVar34 = (double)mobyutil::MB_randRangeFloat(-0.05,(float)dVar24);
    local_190 = (float)(dVar36 * dVar34 + (double)local_190);
    local_18c = (float)(dVar25 * dVar34 + (double)local_18c);
    dVar34 = (double)mobyutil::MB_randRangeFloat(-0.15,0.15);
    local_1a0 = (float)((double)local_180 * dVar34 + (double)(moby->pos).x);
    local_19c = (float)((double)local_17c * dVar34 + (double)(moby->pos).y);
    local_198 = (float)((double)local_178 * dVar34 + (double)(moby->pos).z);
    local_194 = (moby->pos).w;
    partupd::SpawnPart_38(uVar28,uVar31,uVar13 - 0x1a0,uVar13 - 400);
    if (dVar24 < dVar38) {
      dVar39 = (double)(float)(dVar38 * 16.0 + dVar39);
      dVar38 = (double)mobyutil::MB_randRangeFloat(-0.17,0.17);
      FUN_005e7f98((double)(float)(dVar39 + dVar38),uVar13 - 0x180,uVar13 - 0x180);
      dVar40 = (double)local_180;
      dVar33 = (double)local_17c;
      dVar29 = (double)local_178;
      local_1a0 = (float)((double)(moby->pos).x + dVar40);
      local_19c = (float)((double)(moby->pos).y + dVar33);
      dVar30 = 0.05000000074505806;
      local_198 = (float)((double)(moby->pos).z + dVar29);
      local_194 = (moby->pos).w;
      dVar34 = 1.2000000476837158;
      dVar38 = (double)mobyutil::MB_randRangeFloat((float)dVar24,1.2);
      local_1a0 = (float)(dVar36 * dVar38 + (double)local_1a0);
      local_19c = (float)(dVar25 * dVar38 + (double)local_19c);
      local_198 = (float)dVar22;
      dVar39 = 0.800000011920929;
      local_190 = (float)(dVar40 * dVar30 + (double)(*pfVar4 * 0.8));
      local_18c = (float)(dVar33 * dVar30 + (double)(pfVar4[1] * 0.8));
      local_188 = (float)(dVar29 * dVar30 + (double)(pfVar4[2] * 0.8));
      local_184 = pfVar4[3];
      uVar27 = 0x3f947ae140000000;
      mobyutil::MB_randCircle(0x3f947ae140000000,uVar13 - 0x170);
      local_190 = local_190 + local_170;
      local_18c = local_18c + local_16c;
      local_188 = local_188 + local_168;
      uVar28 = 0x3fd0000000000000;
      partupd::SpawnPart_38(0x3fd0000000000000,uVar31,uVar13 - 0x1a0,uVar13 - 400);
      local_1a0 = (moby->pos).x - local_180;
      local_19c = (moby->pos).y - local_17c;
      local_198 = (moby->pos).z - local_178;
      local_194 = (moby->pos).w;
      dVar38 = (double)mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar34);
      local_1a0 = (float)(dVar36 * dVar38 + (double)local_1a0);
      local_19c = (float)(dVar25 * dVar38 + (double)local_19c);
      local_198 = (float)dVar22;
      local_190 = -(float)(dVar40 * dVar30 - (double)(float)((double)*pfVar4 * dVar39));
      local_18c = -(float)(dVar33 * dVar30 - (double)(float)((double)pfVar4[1] * dVar39));
      local_188 = -(float)(dVar29 * dVar30 - (double)(float)((double)pfVar4[2] * dVar39));
      local_184 = pfVar4[3];
      mobyutil::MB_randCircle(uVar27,uVar13 - 0x170);
      local_190 = local_190 + local_170;
      local_18c = local_18c + local_16c;
      local_188 = local_188 + local_168;
      partupd::SpawnPart_38(uVar28,uVar31,uVar13 - 0x1a0,uVar13 - 400);
    }
    dVar38 = (double)pfVar4[2];
    pfVar4[2] = 0.0;
    dVar36 = (double)(float)((double)(float)(dVar37 - (double)pfVar4[0x1f]) * dVar32 +
                            (double)pfVar4[0x1f]);
    FUN_005e7f98(dVar35,uVar13 - 0x1e0,uVar13 - 0x1e0);
    dVar22 = (double)(float)dVar23;
    *pfVar4 = (float)(dVar36 * (double)(float)((double)*pfVar4 - dVar22) + dVar22);
    pfVar4[1] = (float)(dVar36 * (double)(pfVar4[1] - fVar16) + (double)fVar16);
    pfVar4[2] = 0.0;
    pfVar4[2] = (float)dVar38;
    pfVar4[3] = local_1d4;
  }
  if (iVar15 != 0) {
    if ((CollOutput.pMoby == (MobyInstance *)0x0) ||
       (pMVar5 = CollOutput.pMoby, (CollOutput.pMoby)->oClass != DEVESTATOR_AMMO)) {
      local_160 = CollOutput.push.x - (moby->pos).x;
      local_15c = CollOutput.push.y - (moby->pos).y;
      local_158 = CollOutput.push.z - (moby->pos).z;
      local_154 = CollOutput.push.w;
      FUN_005e7f98((double)pfVar4[0x20],uVar13 - 0x160,uVar13 - 0x160);
      pMVar5 = CollOutput.pMoby;
      (moby->pos).x = CollOutput.push.x + local_160;
      (moby->pos).y = CollOutput.push.y + local_15c;
      (moby->pos).z = CollOutput.push.z + local_158;
      (moby->pos).w = CollOutput.push.w;
    }
    if ((pMVar5 == (MobyInstance *)0x0) || (MVar3 = pMVar5->oClass, MVar3 == SHUTTLE_01A8)) {
      uVar28 = FUN_005e8338((double)(CollOutput.ip.x - (moby->pos).x),
                            (double)(CollOutput.ip.y - (moby->pos).y));
      dVar23 = (double)fastfunc::FastDiffRots(uVar28,(double)(moby->rotation).z);
      dVar22 = -1.0;
      if (dVar24 - (double)(float)(dVar23 * 0.31830987334251404) < 0.0) {
        dVar22 = 1.0;
      }
      dVar22 = (double)(float)(dVar22 - (double)(float)(dVar23 * 0.31830987334251404));
      if ((((int)pfVar4[5] < 0) && (dVar24 < dVar22)) || ((0 < (int)pfVar4[5] && (dVar22 < dVar24)))
         ) {
        dVar22 = (double)(float)(dVar22 * 0.10000000149011612);
      }
      pfVar4[5] = -(float)(dVar22 * 0.05000000074505806 - (double)pfVar4[5]);
      if ((CollOutput.pMoby == (MobyInstance *)0x0) || ((CollOutput.pMoby)->oClass != SHUTTLE_01A8))
      {
        fastfunc::FastVecNormalize(uVar21,uVar21,0xa10980);
        fVar16 = pfVar4[0x21];
        *pfVar4 = *pfVar4 * fVar16;
        pfVar4[1] = pfVar4[1] * fVar16;
        pfVar4[2] = pfVar4[2] * fVar16;
      }
      else {
        lVar18 = uVar13 - 0x120;
        FUN_005e7f98(0x3ff0000000000000,lVar18,0xa10980);
        lVar20 = uVar13 - 0x130;
        local_130 = (moby->pos).x + local_120;
        local_12c = (moby->pos).y + local_11c;
        local_128 = (moby->pos).z + local_118;
        local_124 = (moby->pos).w;
        stub::STUB_00065468(lVar19,lVar20);
        local_130 = (moby->pos).x + *pfVar4;
        local_124 = (moby->pos).w;
        local_12c = (moby->pos).y + pfVar4[1];
        local_128 = (moby->pos).z + pfVar4[2];
        stub::STUB_00065468(lVar19,lVar20);
        FUN_005e8f4c(uVar13 - 0x150,uVar21,lVar18);
        local_130 = (moby->pos).x + local_150;
        local_12c = (moby->pos).y + local_14c;
        local_128 = (moby->pos).z + local_148;
        local_124 = (moby->pos).w;
        stub::STUB_00065468(lVar19,lVar20);
        FUN_005e8f4c(uVar13 - 0x140,lVar18,uVar13 - 0x150);
        *pfVar4 = local_140;
        pfVar4[1] = local_13c;
        pfVar4[2] = local_138;
        pfVar4[3] = local_134;
        local_130 = (moby->pos).x + local_140;
        local_12c = (moby->pos).y + local_13c;
        local_128 = (moby->pos).z + local_138;
        local_124 = (moby->pos).w;
        stub::STUB_00065468(lVar19,lVar20);
      }
    }
    else if ((0xcc < (short)MVar3) && (MVar3 == 0x149)) {
      *pfVar4 = *pfVar4 * 0.8;
      pfVar4[1] = pfVar4[1] * 0.8;
      pfVar4[2] = pfVar4[2] * 0.8;
    }
  }
  pfVar4[2] = pfVar4[2] - pfVar4[0x23];
  fVar16 = (moby->pos).x + *pfVar4;
  uVar1 = moby->state;
  (moby->pos).x = fVar16;
  (moby->pos).y = (moby->pos).y + pfVar4[1];
  (moby->pos).z = (moby->pos).z + pfVar4[2];
  if (uVar1 == '\x04') {
    DAT_00969e44 = SQRT(*pfVar4 * *pfVar4 + pfVar4[1] * pfVar4[1]);
    libc::snprintf(acStack_110,"SPEED: %f km/h",(double)(DAT_00969e44 * 216.0));
    debug::DebugFontPrintLeft(0x119,0x15,0x80000000,acStack_110);
    debug::DebugFontPrintLeft(0x118,0x14,0x80f0f0f0,acStack_110);
    mobyupdate_helpers::M291_0032f620(lVar14,uVar21);
    fVar16 = (moby->pos).x;
  }
  iVar15 = mobyutil::g_NumLameShadows;
  if ((DAT_0083be04 != 0) && (mobyutil::g_NumLameShadows < 0x20)) {
    (&mobyutil::g_LameShadows)[mobyutil::g_NumLameShadows * 8] = fVar16;
    (&DAT_0095e5f4)[iVar15 * 8] = (moby->pos).y;
    (&DAT_0095e5f8)[iVar15 * 8] = (moby->pos).z;
    (&DAT_0095e5fc)[iVar15 * 8] = (moby->pos).w;
    dVar22 = (double)FUN_00342d38(lVar19);
    FUN_00342d40(lVar19,&DAT_0095e600 + mobyutil::g_NumLameShadows * 8);
    *(undefined4 *)(&DAT_0095e60c + mobyutil::g_NumLameShadows * 0x20) = 0;
    (&DAT_0095e5f8)[mobyutil::g_NumLameShadows * 8] = (float)(dVar22 + 0.07500000298023224);
    fVar16 = (8.0 - ABS((moby->pos).z - (float)(dVar22 + 0.07500000298023224))) * 0.125;
    if (fVar16 - 0.25 < 0.0) {
      fVar16 = 0.25;
    }
    iVar15 = mobyutil::g_NumLameShadows * 8;
    mobyutil::g_NumLameShadows = mobyutil::g_NumLameShadows + 1;
    (&DAT_0095e5fc)[iVar15] = fVar16 * 1.5;
    fVar16 = (moby->pos).x;
  }
  fVar17 = 5.0;
  if (fVar16 < 5.0) {
    (moby->pos).x = 5.0;
    fVar16 = fVar17;
  }
  fVar2 = 500.0;
  if (500.0 < fVar16) {
    (moby->pos).x = 500.0;
    fVar16 = fVar2;
  }
  fVar6 = (moby->pos).y;
  uVar7 = (int)fVar6 >> 0x1f;
  fVar10 = (moby->pos).y;
  if ((int)((uVar7 >> 1 ^ (uint)fVar6) - uVar7) < 0x40a00000) {
    (moby->pos).y = 5.0;
    fVar10 = fVar17;
  }
  if (500.0 < fVar10) {
    (moby->pos).y = 500.0;
    fVar10 = fVar2;
  }
  fVar6 = (moby->pos).z;
  uVar7 = (int)fVar6 >> 0x1f;
  fVar11 = (moby->pos).z;
  if ((int)((uVar7 >> 1 ^ (uint)fVar6) - uVar7) < 0x40a00000) {
    (moby->pos).z = 5.0;
    fVar11 = fVar17;
  }
  if (500.0 < fVar11) {
    (moby->pos).z = 500.0;
    fVar11 = fVar2;
  }
  if (moby->state == '\x04') {
    g_heroPosition.w = (moby->pos).w;
    g_heroRotation.x = (moby->rotation).x;
    g_heroRotation.y = (moby->rotation).y;
    g_heroRotation.z = (moby->rotation).z;
    g_heroRotation.w = (moby->rotation).w;
    g_heroPosition.x = fVar16;
    g_heroPosition.y = fVar10;
    g_heroPosition.z = fVar11;
  }
  return;
}



