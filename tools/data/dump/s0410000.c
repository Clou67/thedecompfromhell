//==== 00410504  ns=mobyupdate_helpers  size=0x14
// sig: undefined M681_00410504(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M681_00410504(void)

{
  DAT_008571ac = 0x10000;
  return;
}



//==== 00410528  ns=Global  size=0x49c
// sig: undefined FUN_00410528(void)
// callers(1): 003371a0 mobyupdate_unsorted::UpdateMoby_30
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fddc0 mobyutil::MB_SetAnimation

MobyInstance * FUN_00410528(float *param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  ulonglong *puVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  MobyInstance *pMVar14;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar15;
  longlong lVar16;
  float *pfVar18;
  longlong lVar17;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0x100;
  puVar6 = (ulonglong *)lVar13;
  *puVar6 = uVar11;
  puVar6[0x22] = in_LR;
  puVar6[0x1f] = unaff_r31;
  puVar6[0x1d] = unaff_r29;
  puVar6[0x1c] = unaff_r28;
  puVar6[0x1e] = unaff_r30;
  puVar6[0x1b] = unaff_r27;
  puVar6[0x1a] = unaff_r26;
  pMVar14 = mobyfunc::CreateMoby(0x2a9);
  if (pMVar14 != (MobyInstance *)0x0) {
    pMVar14->updateDistance = -1;
    pMVar14->drawDistance = 0x7f;
    pMVar14->enabled = '\x01';
    fVar9 = 0.0;
    (pMVar14->rotation).x = 0.0;
    fVar4 = param_2[2];
    pfVar5 = (float *)pMVar14->pVar;
    fVar2 = ABS(param_2[2]);
    fVar3 = SQRT(*param_2 * *param_2 + param_2[1] * param_2[1]);
    fVar1 = ABS(fVar3);
    *(float *)((int)puVar6 + 0x74) = fVar3;
    *(float *)(puVar6 + 0xf) = fVar1 - fVar2;
    uVar15 = (ulonglong)(*(uint *)((int)puVar6 + 0x74) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0xf) >> 0x1e) & 2 | (ulonglong)((uint)fVar4 >> 0x1d) & 4
    ;
    fVar4 = ABS(*(float *)((int)puVar6 + 0x74));
    if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
      fVar4 = fVar2;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
    if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    fVar10 = fVar9;
    if (0.0 < fVar4) {
      lVar12 = uVar11 - 0xf0;
      lVar16 = uVar11 - 100;
      lVar17 = uVar11 - 0x54;
      lVar19 = 2;
      fVar4 = (fVar2 - fVar4) / (fVar2 + fVar4);
      fVar2 = fVar4 * fVar4;
      *(float *)(puVar6 + 0x15) = fVar4;
      *(float *)(puVar6 + 0x14) = fVar4;
      *(float *)((int)puVar6 + 0xa4) = fVar4;
      *(float *)((int)puVar6 + 0x9c) = fVar4;
      fVar4 = fVar2 * fVar2;
      *(float *)(puVar6 + 0x14) = *(float *)(puVar6 + 0x14) * fVar2;
      *(float *)((int)puVar6 + 0xa4) = *(float *)((int)puVar6 + 0xa4) * fVar4;
      *(float *)(puVar6 + 0x15) = *(float *)(puVar6 + 0x15) * fVar4 * fVar2;
      do {
        *(float *)((int)lVar12 + 0x9c) = *(float *)((int)lVar12 + 0x8c) * fVar4 * fVar4;
        iVar7 = (int)lVar16;
        lVar12 = lVar12 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)(iVar7 + 4) * fVar4 * fVar4;
        lVar17 = lVar17 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar17 = uVar11 - 100;
      pfVar18 = (float *)&DAT_007358e0;
      lVar19 = 4;
      lVar12 = lVar13;
      lVar16 = lVar17;
      do {
        fVar4 = *pfVar18;
        fVar2 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar12 + 0x9c) = *(float *)((int)lVar12 + 0x9c) * fVar4;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar2;
        lVar16 = lVar16 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar16 = 2;
      lVar12 = lVar13;
      fVar4 = fVar9;
      do {
        iVar7 = (int)lVar12;
        lVar12 = lVar12 + 0x10;
        iVar8 = (int)lVar17;
        lVar17 = lVar17 + 0x10;
        fVar4 = fVar4 + *(float *)(iVar7 + 0x9c) + *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                *(float *)(iVar8 + 0xc);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      fVar10 = (fVar4 + 0.7853982) * fVar3 + fVar1;
    }
    (pMVar14->rotation).y = -fVar10;
    fVar4 = *param_2;
    fVar3 = param_2[1];
    fVar1 = ABS(*param_2);
    fVar2 = ABS(param_2[1]);
    *(float *)(puVar6 + 0xe) = fVar1 - fVar2;
    uVar15 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1e) & 2 | (ulonglong)((uint)fVar3 >> 0x1d) & 4
    ;
    fVar4 = fVar1;
    if (*(float *)(puVar6 + 0xe) - 0.0 < 0.0) {
      fVar4 = fVar2;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
    if (*(float *)(puVar6 + 0xe) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    if (0.0 < fVar4) {
      lVar12 = uVar11 - 0xf0;
      lVar16 = uVar11 - 0x84;
      lVar17 = uVar11 - 0x74;
      lVar19 = 2;
      fVar4 = (fVar2 - fVar4) / (fVar2 + fVar4);
      fVar2 = fVar4 * fVar4;
      *(float *)(puVar6 + 0x11) = fVar4;
      *(float *)(puVar6 + 0x10) = fVar4;
      *(float *)((int)puVar6 + 0x84) = fVar4;
      *(float *)((int)puVar6 + 0x7c) = fVar4;
      fVar4 = fVar2 * fVar2;
      *(float *)(puVar6 + 0x10) = *(float *)(puVar6 + 0x10) * fVar2;
      *(float *)((int)puVar6 + 0x84) = *(float *)((int)puVar6 + 0x84) * fVar4;
      *(float *)(puVar6 + 0x11) = *(float *)(puVar6 + 0x11) * fVar4 * fVar2;
      do {
        *(float *)((int)lVar12 + 0x7c) = *(float *)((int)lVar12 + 0x6c) * fVar4 * fVar4;
        iVar7 = (int)lVar16;
        lVar12 = lVar12 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)(iVar7 + 4) * fVar4 * fVar4;
        lVar17 = lVar17 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar17 = uVar11 - 0x84;
      pfVar18 = (float *)&DAT_007358e0;
      lVar19 = 4;
      lVar12 = lVar13;
      lVar16 = lVar17;
      do {
        fVar4 = *pfVar18;
        fVar2 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar12 + 0x7c) = *(float *)((int)lVar12 + 0x7c) * fVar4;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar2;
        lVar16 = lVar16 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar12 = 2;
      do {
        iVar7 = (int)lVar13;
        iVar8 = (int)lVar17;
        lVar13 = lVar13 + 0x10;
        lVar17 = lVar17 + 0x10;
        fVar9 = fVar9 + *(float *)(iVar7 + 0x7c) + *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                *(float *)(iVar8 + 0xc);
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      fVar9 = (fVar9 + 0.7853982) * fVar3 + fVar1;
    }
    (pMVar14->rotation).z = fVar9;
    (pMVar14->pos).x = *param_1;
    (pMVar14->pos).y = param_1[1];
    (pMVar14->pos).z = param_1[2];
    (pMVar14->pos).w = param_1[3];
    pfVar5[4] = *param_1;
    pfVar5[5] = param_1[1];
    pfVar5[6] = param_1[2];
    pfVar5[7] = param_1[3];
    *pfVar5 = *param_2;
    pfVar5[1] = param_2[1];
    pfVar5[2] = param_2[2];
    pfVar5[3] = param_2[3];
    puVar6[0x18] = (longlong)(int)(animationSpeed * 5.5);
    mobyutil::MB_SetAnimation(pMVar14,1,0,*(undefined4 *)((int)puVar6 + 0xc4));
    pMVar14->modeBits = DRAW_TRANSPARENT_WEIRD|TRANSPARENT;
    pfVar5[8] = param_3;
    pfVar5[9] = param_4;
    pMVar14->alpha = '\x10';
    mobyfunc::UpdateMobyTransform(pMVar14);
  }
  return pMVar14;
}



//==== 004109f8  ns=mobyupdate_unsorted  size=0x778
// sig: undefined UpdateMoby_681(MobyInstance * moby)
// callers(0): 
// callees(9): 00057820 collproc::CollLine; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 0010581c mobyutil::SetCollDamIn; 00128248 partupd::SpawnPart_27; 0012f490 partupd::SpawnPart_51; 0015d12c sound::PlayMobySound; 00500608 fastfunc::FastVecNormalize

/* Moby 681 */

void mobyupdate_unsorted::UpdateMoby_681(MobyInstance *moby)

{
  char cVar1;
  float *pfVar2;
  MobyInstance *pMVar3;
  f32 fVar4;
  ulonglong uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  int iVar11;
  undefined8 uVar10;
  int iVar12;
  undefined8 in_r6;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  double dVar19;
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined4 local_f0 [4];
  undefined1 auStack_e0 [72];
  
  lVar9 = (longlong)(int)moby;
  pfVar2 = (float *)moby->pVar;
  (moby->pos).x = (moby->pos).x + *pfVar2;
  (moby->pos).y = (moby->pos).y + pfVar2[1];
  (moby->pos).z = (moby->pos).z + pfVar2[2];
  pMVar3 = (MobyInstance *)pfVar2[8];
  dVar19 = 1.0;
  mobyutil::SetCollDamIn(0x3ff0000000000000,auStack_e0,lVar9,0x10001,in_r6,local_120);
  fVar7 = (moby->pos).y - pfVar2[5];
  fVar8 = (moby->pos).x - pfVar2[4];
  iVar12 = 0;
  uVar5 = (ulonglong)(LZCOUNT(pfVar2[9]) << 0x20) >> 0x25;
  if (SQRT(fVar8 * fVar8 + fVar7 * fVar7) <= 30.0) {
    do {
      iVar11 = collproc::CollLine(local_140,local_130,uVar5,pMVar3,0);
      if (iVar11 == 0) break;
      iVar12 = iVar12 + 1;
      if ((CollOutput.pMoby == (MobyInstance *)0x0) || ((CollOutput.pMoby)->oClass != SCOUTBOT)) {
        collproc::CollLine(local_140,local_130,uVar5,pMVar3,auStack_e0);
        (moby->pos).x = CollOutput.ip.x;
        cVar1 = moby->enabled;
        (moby->pos).y = CollOutput.ip.y;
        (moby->pos).z = CollOutput.ip.z;
        (moby->pos).w = CollOutput.ip.w;
        if (cVar1 != '\0') {
          iVar12 = 0;
          dVar13 = -1.0;
          dVar15 = 3.0;
          dVar17 = 6.0;
          dVar14 = 10.5;
          dVar16 = 15.5;
          uVar18 = 0x40dd4c0000000000;
          do {
            mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar19);
            mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar19);
            mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar19);
            fastfunc::FastVecNormalize(local_f0,pfVar2,0xa10980);
            mobyutil::MB_randRangeFloat
                      ((float)((double)mobyutil::g_FrameTime * dVar15),
                       (float)((double)mobyutil::g_FrameTime * dVar17));
            uVar10 = mobyutil::MB_randRange
                               ((int)((double)animationSpeed * dVar14),
                                (int)((double)animationSpeed * dVar16));
            partupd::SpawnPart_27(uVar18,lVar9 + 0x10,local_100,0x7f2f4f6f,uVar10);
            iVar12 = iVar12 + 1;
          } while (iVar12 < 5);
        }
        sound::PlayMobySound(0,0,moby);
        mobyfunc::DeleteMoby(moby);
        return;
      }
      pMVar3 = CollOutput.pMoby;
    } while (iVar12 < 3);
    fVar4 = (moby->pos).x;
    uVar6 = (int)fVar4 >> 0x1f;
    iVar12 = (uVar6 >> 1 ^ (uint)fVar4) - uVar6;
    if ((((iVar12 < 0x40000000) || (0x447f4000 < iVar12)) ||
        (fVar4 = (moby->pos).y, uVar6 = (int)fVar4 >> 0x1f,
        iVar12 = (uVar6 >> 1 ^ (uint)fVar4) - uVar6, 0x447f4000 < iVar12 || iVar12 < 0x40000000)) ||
       ((fVar4 = (moby->pos).z, uVar6 = (int)fVar4 >> 0x1f,
        iVar12 = (uVar6 >> 1 ^ (uint)fVar4) - uVar6, iVar12 < 0x40000000 || (0x447f4000 < iVar12))))
    {
      mobyfunc::DeleteMoby(moby);
    }
  }
  else {
    if (moby->enabled != '\0') {
      iVar12 = 0;
      dVar13 = -1.0;
      dVar15 = 2.0;
      dVar17 = 4.0;
      do {
        mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar19);
        mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar19);
        mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar19);
        mobyutil::MB_randRangeFloat
                  ((float)((double)mobyutil::g_FrameTime * dVar15),
                   (float)((double)mobyutil::g_FrameTime * dVar17));
        partupd::SpawnPart_51(lVar9 + 0x10,local_110);
        iVar12 = iVar12 + 1;
      } while (iVar12 < 3);
    }
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 00411198  ns=mobyupdate_helpers  size=0x2c0
// sig: undefined M684_00411198(void)
// callers(1): 004114b0 mobyupdate_helpers::M684_004114b0
// callees(7): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe4f0 mobyutil::MB_randRangeSigned; 000fe610 mobyutil::MB_SphericalToVector; 0012f8c0 partupd::SpawnPart_53; 00502758 fastfunc::FastDoubleToInt
// strings: 00411190: '?333`'

void mobyupdate_helpers::M684_00411198
               (float *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  float afStack_b0 [10];
  
  iVar4 = 0;
  if (0 < param_2) {
    dVar9 = 0.3490658402442932;
    dVar10 = 1.535889744758606;
    uVar11 = 0;
    uVar12 = 0x3fc3333340000000;
    dVar13 = 60.5;
    dVar14 = 0.10000000149011612;
    uVar15 = 0x4010000000000000;
    dVar16 = 0.07000000029802322;
    dVar17 = 0.699999988079071;
    do {
      dVar5 = (double)mobyutil::MB_randRangeFloat(DAT_0085721c,DAT_00857220);
      lVar1 = mobyutil::MB_randInt(2);
      dVar6 = (double)mobyutil::MB_randRot();
      dVar7 = (double)mobyutil::MB_randRangeFloat((float)dVar9,(float)dVar10);
      dVar8 = (double)mobyutil::MB_randRangeFloat(DAT_00857210,DAT_00857214);
      mobyutil::MB_SphericalToVector((float)dVar8,(float)dVar6,(float)dVar7,afStack_b0);
      dVar6 = (double)mobyutil::MB_randRangeSigned(uVar11,uVar12);
      *param_1 = (float)((double)*param_1 + dVar6);
      dVar6 = (double)mobyutil::MB_randRangeSigned(uVar11,uVar12);
      param_1[1] = (float)((double)param_1[1] + dVar6);
      dVar6 = (double)mobyutil::MB_randRangeSigned(uVar11,uVar12);
      param_1[2] = (float)((double)param_1[2] + dVar6);
      iVar2 = partupd::SpawnPart_53
                        ((double)(float)(dVar5 * dVar14),dVar5,(double)DAT_00857218,param_1,
                         (int)((double)animationSpeed * dVar13),&DAT_00850000,param_4,0x7f7f2020,0,
                         lVar1 + ((LZCOUNT(-(int)lVar1) << 0x3a) >> 0x3f & ((int)lVar1 + -1) - lVar1
                                 ),afStack_b0);
      if (iVar2 != 0) {
        cVar3 = fastfunc::FastDoubleToInt(uVar15);
        *(char *)(iVar2 + 9) = cVar3 + 'p';
      }
      iVar2 = partupd::SpawnPart_53
                        ((double)(float)(dVar5 * dVar16),(double)(float)(dVar5 * dVar17),
                         (double)DAT_00857218,param_1,(int)((double)animationSpeed * dVar13));
      if (iVar2 != 0) {
        cVar3 = fastfunc::FastDoubleToInt(uVar15);
        *(char *)(iVar2 + 9) = cVar3 + 'p';
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_2);
  }
  return;
}



//==== 004114b0  ns=mobyupdate_helpers  size=0xa78
// sig: undefined M684_004114b0(void)
// callers(1): 00411f38 mobyupdate_unsorted::UpdateMoby_684
// callees(11): 0006d7e0 draw::RegisterPostDraw; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 000fe4f0 mobyutil::MB_randRangeSigned; 0015d380 sound::sound_LevelPlay; 00411198 mobyupdate_helpers::M684_00411198; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M684_004114b0(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined2 uVar8;
  int iVar6;
  int iVar7;
  longlong lVar5;
  short sVar9;
  int iVar10;
  ulonglong uVar11;
  undefined2 *puVar12;
  float *pfVar13;
  float *pfVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  short *psVar18;
  ushort uVar19;
  int iVar20;
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
  undefined8 uVar33;
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
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  
  if (DAT_010cc244 == 0) {
    DAT_010cc244 = 1;
    DAT_010cc55c = 1;
    dVar43 = 0.0;
    DAT_010cc548 = 0.0;
    dVar44 = (double)SQRT((DAT_010cc268 - DAT_010cc258) * (DAT_010cc268 - DAT_010cc258) +
                          (DAT_010cc260 - DAT_010cc250) * (DAT_010cc260 - DAT_010cc250) +
                          (DAT_010cc264 - DAT_010cc254) * (DAT_010cc264 - DAT_010cc254));
    DAT_010cc54c = param_1;
    dVar21 = (double)fastfunc::FastIntToDouble(0x28);
    DAT_010cc540 = 0;
    uVar15 = 0;
    DAT_008571e8 = (float)(dVar44 / dVar21);
    dVar21 = 1.0;
    dVar44 = 0.5;
    do {
      fVar1 = DAT_008571e8;
      iVar16 = (int)uVar15;
      iVar6 = (int)((uVar15 & 0xffffffff) << 4);
      *(undefined4 *)((int)&DAT_010cc278 + iVar6) = 0;
      *(undefined4 *)(&DAT_010cc274 + iVar6) = 0;
      *(undefined4 *)(&DAT_010cc27c + iVar6) = 0x3f800000;
      *(float *)(&DAT_010cc270 + iVar6) = fVar1 * (float)(longlong)iVar16;
      if (iVar16 < 0x27) {
        dVar22 = (double)mobyutil::MB_randRangeSigned((double)DAT_010cc550,(double)DAT_00857200);
        fVar2 = DAT_00857204;
        fVar1 = (float)((double)*(float *)((int)&DAT_010cc268 + iVar6) + dVar22);
        *(float *)((int)&DAT_010cc278 + iVar6) = fVar1;
        if (fVar1 <= fVar2) {
          if (fVar1 < -fVar2) {
            *(float *)((int)&DAT_010cc278 + iVar6) = -fVar2;
          }
        }
        else {
          *(float *)((int)&DAT_010cc278 + iVar6) = fVar2;
        }
      }
      dVar22 = (double)fastfunc::FastIntToDouble(uVar15);
      dVar23 = (double)fastfunc::FastIntToDouble(0x28);
      uVar8 = fastfunc::FastDoubleToInt
                        ((double)((float)(longlong)
                                         -(int)(animationSpeed *
                                               (float)((double)(longlong)DAT_008571e4 + dVar44)) *
                                 (float)(dVar22 / dVar23)));
      uVar11 = uVar15 & 0xffffffff;
      uVar15 = (ulonglong)(iVar16 + 1);
      *(undefined2 *)((int)&DAT_010cc4f0 + (int)(uVar11 << 1)) = uVar8;
    } while (iVar16 + 1 < 0x28);
    DAT_010cc4dc = DAT_010cc4ec;
    DAT_010cc4d0 = (float)((double)(float)((double)DAT_010cc4e0 - (double)DAT_010cc4c0) * dVar44 +
                          (double)DAT_010cc4c0);
    DAT_010cc4d4 = (float)((double)(float)((double)DAT_010cc4e4 - (double)DAT_010cc4c4) * dVar44 +
                          (double)DAT_010cc4c4);
    DAT_010cc4d8 = (float)((double)(float)((double)DAT_010cc4e8 - (double)DAT_010cc4c8) * dVar44 +
                          (double)DAT_010cc4c8);
    iVar6 = mobyutil::MB_randRange(DAT_00857208,DAT_0085720c);
    fVar1 = animationSpeed * (float)((double)(longlong)iVar6 + dVar44);
    DAT_010cc554 = (int)fVar1;
    DAT_010cc248 = (int)fVar1;
    dVar44 = (double)fastfunc::FastIntToDouble
                               ((int)fVar1 -
                                (int)(animationSpeed *
                                     (float)((double)(longlong)DAT_008571e4 + dVar44)));
    DAT_010cc558 = (float)(dVar21 / dVar44);
    iVar6 = mobyutil::MB_randInt(2);
    dVar44 = -1.0;
    if (iVar6 != 0) {
      dVar44 = dVar21;
    }
    iVar6 = 0;
    iVar16 = 0;
    iVar10 = 0;
    iVar17 = 0;
    do {
      uVar15 = mobyutil::MB_randRange(5,0x16);
      uVar8 = *(undefined2 *)((int)&DAT_010cc4f0 + (int)((uVar15 & 0xffffffff) << 1));
      *(int *)((int)&DAT_010cc8c0 + iVar10) = (int)uVar15;
      *(undefined4 *)((int)&DAT_010cc560 + iVar17) = 0;
      *(undefined2 *)((int)&DAT_010cc860 + iVar16) = uVar8;
      *(undefined4 *)((int)&DAT_010cc568 + iVar17) = 0;
      dVar42 = 10.0;
      dVar24 = (double)mobyutil::MB_randRangeFloat((float)dVar21,10.0);
      dVar41 = 1.3962633609771729;
      dVar22 = (double)mobyutil::MB_randRangeFloat(0.5235988,1.3962634);
      dVar23 = (double)(float)(dVar22 * dVar44);
      dVar40 = 1.570796251296997;
      dVar39 = 3.141592502593994;
      dVar38 = -3.141592502593994;
      dVar37 = -0.16666656732559204;
      dVar36 = 0.008333025500178337;
      dVar35 = -0.0001980741071747616;
      fVar1 = (float)(dVar23 + 1.570796251296997);
      dVar34 = 2.601886990305502e-06;
      pfVar13 = (float *)((int)&DAT_010cc560 + iVar17);
      puVar12 = (undefined2 *)((int)&DAT_010cc860 + iVar16);
      iVar20 = 1;
      pfVar14 = (float *)((int)&DAT_010cc578 + iVar17);
      dVar22 = (double)(float)(3.141592502593994 - dVar23);
      if (dVar23 - (double)(float)(3.141592502593994 - dVar23) < 0.0) {
        dVar22 = dVar23;
      }
      fVar2 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar2 = fVar1;
      }
      dVar25 = (double)(float)(-3.141592502593994 - dVar23);
      if ((double)(float)(-3.141592502593994 - dVar23) - dVar22 < 0.0) {
        dVar25 = dVar22;
      }
      fVar3 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
        fVar3 = fVar2;
      }
      dVar22 = (double)(float)(dVar25 * dVar25);
      fVar4 = fVar3 * fVar3;
      dVar30 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar25));
      fVar1 = fVar4 * fVar4 * fVar3;
      dVar28 = (double)(float)(dVar22 * dVar30);
      fVar2 = fVar4 * fVar1;
      *(float *)((int)&DAT_010cc568 + iVar17) =
           (float)(dVar24 * (double)((float)(dVar22 * dVar28) * 2.601887e-06 +
                                    (float)(dVar28 * -0.0001980741071747616 +
                                           (double)(float)(dVar30 * 0.008333025500178337 +
                                                          (double)(float)((double)(float)(dVar22 * 
                                                  dVar25) * -0.16666656732559204 + dVar25)))));
      *(float *)((int)&DAT_010cc560 + iVar17) =
           (float)(dVar24 * (double)(fVar4 * fVar2 * 2.601887e-06 +
                                    fVar2 * -0.0001980741 +
                                    fVar1 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3));
      uVar33 = 0x4044000000000000;
      dVar22 = 0.01745329238474369;
      do {
        pfVar13 = pfVar13 + 4;
        puVar12 = puVar12 + 1;
        dVar24 = (double)mobyutil::MB_randRangeFloat((float)dVar21,(float)dVar42);
        dVar25 = (double)mobyutil::MB_randRangeSigned(dVar43,uVar33);
        dVar28 = (double)(float)(dVar25 * dVar22);
        dVar25 = (double)fastfunc::FastWrapRot((float)dVar23,(float)(dVar25 * dVar22));
        if (((dVar41 < ABS(dVar25)) || ((dVar43 < dVar23 && (dVar25 < dVar43)))) ||
           ((dVar23 < dVar43 && (dVar43 < dVar25)))) {
          dVar25 = (double)fastfunc::FastWrapRot((float)dVar23,(float)-dVar28);
        }
        iVar7 = *(int *)((int)&DAT_010cc8c0 + iVar10) + iVar20;
        iVar20 = iVar20 + 1;
        dVar28 = (double)(float)(dVar25 + dVar40);
        *puVar12 = (&DAT_010cc4f0)[iVar7];
        dVar23 = (double)(float)(dVar39 - dVar25);
        if (dVar25 - (double)(float)(dVar39 - dVar25) < 0.0) {
          dVar23 = dVar25;
        }
        dVar30 = (double)(float)(dVar39 - dVar28);
        if (dVar28 - (double)(float)(dVar39 - dVar28) < 0.0) {
          dVar30 = dVar28;
        }
        dVar26 = (double)(float)(dVar38 - dVar25);
        if ((double)(float)(dVar38 - dVar25) - dVar23 < 0.0) {
          dVar26 = dVar23;
        }
        dVar23 = (double)(float)(dVar38 - dVar28);
        if ((double)(float)(dVar38 - dVar28) - dVar30 < 0.0) {
          dVar23 = dVar30;
        }
        dVar28 = (double)(float)(dVar26 * dVar26);
        dVar30 = (double)(float)(dVar23 * dVar23);
        dVar31 = (double)(float)(dVar28 * (double)(float)(dVar28 * dVar26));
        dVar27 = (double)(float)(dVar30 * (double)(float)(dVar30 * dVar23));
        dVar29 = (double)(float)(dVar28 * dVar31);
        dVar32 = (double)(float)(dVar30 * dVar27);
        *pfVar14 = (float)(dVar24 * (double)(float)((double)(float)(dVar28 * dVar29) * dVar34 +
                                                   (double)(float)(dVar29 * dVar35 +
                                                                  (double)(float)(dVar31 * dVar36 +
                                                                                 (double)(float)((
                                                  double)(float)(dVar28 * dVar26) * dVar37 + dVar26)
                                                  ))));
        pfVar14 = pfVar14 + 4;
        *pfVar13 = (float)(dVar24 * (double)(float)((double)(float)(dVar30 * dVar32) * dVar34 +
                                                   (double)(float)(dVar32 * dVar35 +
                                                                  (double)(float)(dVar27 * dVar36 +
                                                                                 (double)(float)((
                                                  double)(float)(dVar30 * dVar23) * dVar37 + dVar23)
                                                  ))));
        dVar23 = dVar25;
      } while (iVar20 < 0x10);
      iVar6 = iVar6 + 1;
      dVar44 = -dVar44;
      iVar17 = iVar17 + 0x100;
      iVar10 = iVar10 + 4;
      iVar16 = iVar16 + 0x20;
    } while (iVar6 < 3);
  }
  if (param_1 == DAT_010cc54c) {
    fastfunc::FastDecTimerS32(&DAT_010cc248);
    dVar43 = 0.5;
    iVar6 = 0;
    auVar48 = loadVectorLeftIndexed(8,0x411458);
    dVar21 = 0.20000000298023224;
    uVar15 = ZEXT48(&DAT_010cc4f0);
    auVar48 = auVar48 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar48 = auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60;
    pfVar13 = (float *)&DAT_010cc278;
    do {
      psVar18 = (short *)uVar15;
      sVar9 = *psVar18;
      lVar5 = (longlong)DAT_008571e4;
      auVar45 = ZEXT416(0xffffffff);
      auVar46 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
      auVar45 = loadVectorLeftIndexed(0x71e4,0x850000);
      auVar46 = vectorShiftLeftIntegerWord(auVar46,auVar46);
      auVar45 = vectorConvertFromSignedFixedPointWord(auVar45,0);
      *psVar18 = sVar9 + 1;
      auVar47 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar45 = vectorAddFloatingPoint(auVar45,auVar48);
      auVar45 = vectorMultiplyAddFloatingPoint(auVar47,auVar45,auVar46);
      auVar45 = vectorConvertToSignedFixedPointWordSaturate(auVar45,0);
      if ((int)(animationSpeed * (float)((double)lVar5 + dVar43)) < (int)(short)(sVar9 + 1)) {
        auVar45 = vectorSplatHalfWord(auVar45,1);
        sVar9 = storeVectorElementHalfWordIndexed(auVar45,0,uVar15);
        *psVar18 = sVar9;
      }
      if (0x22 < iVar6) {
        dVar44 = (double)fastfunc::FastIntToDouble(iVar6 + -0x23);
        *pfVar13 = *pfVar13 + -(*pfVar13 * (float)(dVar44 * dVar21));
      }
      fVar1 = animationSpeed;
      iVar6 = iVar6 + 1;
      uVar15 = uVar15 + 2;
      pfVar13 = pfVar13 + 4;
    } while (iVar6 < 0x28);
    auVar45 = loadVectorLeftIndexed(0x71e4,0x850000);
    auVar46 = vectorConvertFromSignedFixedPointWord(auVar45,0);
    auVar45 = ZEXT416(0xffffffff);
    auVar47 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
    iVar16 = 0;
    auVar45 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar47 = vectorShiftLeftIntegerWord(auVar47,auVar47);
    uVar15 = ZEXT48(&DAT_010cc860);
    auVar48 = vectorAddFloatingPoint(auVar46,auVar48);
    auVar48 = vectorMultiplyAddFloatingPoint(auVar48,auVar45,auVar47);
    auVar48 = vectorConvertToSignedFixedPointWordSaturate(auVar48,0);
    iVar6 = (int)((float)((double)(longlong)DAT_008571e4 + dVar43) * animationSpeed);
    auVar48 = vectorSplatHalfWord(auVar48,1);
    do {
      iVar10 = 0;
      uVar11 = uVar15;
      do {
        psVar18 = (short *)uVar11;
        sVar9 = *psVar18;
        *psVar18 = sVar9 + 1;
        if (iVar6 < (short)(sVar9 + 1)) {
          sVar9 = storeVectorElementHalfWordIndexed(auVar48,0,uVar11);
          *psVar18 = sVar9;
        }
        iVar10 = iVar10 + 1;
        uVar11 = uVar11 + 2;
      } while (iVar10 < 0x10);
      iVar16 = iVar16 + 1;
      uVar15 = uVar15 + 0x20;
    } while (iVar16 < 3);
    if (DAT_010cc248 < DAT_010cc554 - iVar6) {
      if (((int)(fVar1 * 60.5) < DAT_010cc554) &&
         ((int)(((uint)((int)DAT_010cc548 >> 0x1f) >> 1 ^ (uint)DAT_010cc548) -
               ((int)DAT_010cc548 >> 0x1f)) < 0x40c90fdb)) {
        fVar1 = 3.1415925 - DAT_010cc544;
        if (DAT_010cc544 - (3.1415925 - DAT_010cc544) < 0.0) {
          fVar1 = DAT_010cc544;
        }
        fVar2 = -3.1415925 - DAT_010cc544;
        if ((-3.1415925 - DAT_010cc544) - fVar1 < 0.0) {
          fVar2 = fVar1;
        }
        fVar1 = fVar2 * fVar2;
        fVar3 = fVar1 * fVar1 * fVar2;
        fVar4 = fVar1 * fVar3;
        DAT_010cc542 = fastfunc::FastDoubleToInt
                                 ((double)((fVar1 * fVar4 * 2.601887e-06 +
                                           fVar4 * -0.0001980741 +
                                           fVar3 * 0.0083330255 +
                                           fVar1 * fVar2 * -0.16666657 + fVar2) * 128.0));
        dVar21 = (double)fastfunc::FastWrapRot(DAT_010cc544,DAT_008571e0);
        DAT_010cc544 = (float)dVar21;
        DAT_010cc548 = DAT_0071f408 * DAT_008571e0 + DAT_010cc548;
      }
      else {
        DAT_010cc542 = 0;
      }
      dVar21 = (double)fastfunc::FastIntToDouble(DAT_010cc248);
      sVar9 = fastfunc::FastDoubleToInt
                        ((double)((float)(dVar21 * (double)DAT_010cc558) * -255.0 + 255.0));
      uVar19 = sVar9 + DAT_010cc542;
      DAT_010cc540 = (byte)uVar19;
      if (DAT_010cc55c != 0) {
        sound::sound_LevelPlay(0,0,param_1);
        DAT_010cc55c = 0;
        uVar19 = (ushort)DAT_010cc540;
      }
      if ((uVar19 & 0xff) < 0x32) {
        M684_00411198(&DAT_010cc250,3);
      }
    }
    else {
      DAT_010cc540 = 0;
    }
    draw::RegisterPostDraw(&PTR_M685_004122c8_0070e048,param_1);
    return;
  }
  return;
}



//==== 00411f38  ns=mobyupdate_unsorted  size=0x370
// sig: undefined UpdateMoby_684(MobyInstance * moby)
// callers(0): 
// callees(8): 000fc620 mobyutil::MB_randInt; 000fe4f0 mobyutil::MB_randRangeSigned; 0015e2c4 space::Space_DisableShip; 0015e400 space::Space_EnableShip; 00167e60 update::mode_sceneInit; 004114b0 mobyupdate_helpers::M684_004114b0; 004fff60 fastfunc::FastDecTimerS32; 00502910 fastfunc::FastCheckBsphereInView

/* Moby 684 */

void mobyupdate_unsorted::UpdateMoby_684(MobyInstance *moby)

{
  u8 uVar1;
  int *piVar2;
  Spline *pSVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 local_60 [16];
  int aiStack_50 [6];
  
  uVar1 = moby->state;
  piVar2 = (int *)moby->pVar;
  if (uVar1 == '\0') {
    if (Level == Oltanis) {
      g_hasClank = 1;
    }
    moby->state = '\x01';
    moby->updateDistance = -1;
    DAT_010cc244 = 0;
    DAT_010cc240 = 0;
    uVar1 = moby->state;
  }
  if (uVar1 == '\x01') {
    if ((g_gameMode == GAME_MODE_NORMAL) && (MiscLevelFlags.field104_0x68 == 0)) {
      update::mode_sceneInit(0);
      MiscLevelFlags.field104_0x68 = 1;
      moby->state = '\x02';
      space::Space_DisableShip();
    }
  }
  else if (uVar1 == '\x02') {
    if (g_gameMode != GAME_MODE_SCENE) {
      moby->state = '\x03';
      space::Space_EnableShip();
    }
  }
  else {
    iVar5 = fastfunc::FastDecTimerS32(&DAT_010cc240);
    if (iVar5 != 0) {
      if (DAT_010cc244 == 0) {
        iVar5 = 0;
        lVar7 = 0;
        uVar10 = 0x406fe00000000000;
        pSVar3 = Splines[*piVar2];
        while( true ) {
          iVar8 = (int)lVar7;
          if (pSVar3->cnt <= iVar5 || 4 < iVar8) break;
          iVar6 = fastfunc::FastCheckBsphereInView(uVar10,local_60);
          if (0 < iVar6) {
            lVar4 = lVar7 << 2;
            lVar7 = (longlong)(iVar8 + 1);
            *(int *)((int)aiStack_50 + (int)lVar4) = iVar5;
          }
          iVar5 = iVar5 + 1;
        }
        if (0 < iVar8) {
          lVar7 = mobyutil::MB_randInt(lVar7);
          iVar5 = *(int *)((int)aiStack_50 + (int)(lVar7 << 2));
          DAT_010cc250 = pSVar3->points[iVar5].x;
          DAT_010cc254 = pSVar3->points[iVar5].y;
          DAT_010cc258 = pSVar3->points[iVar5].z;
          DAT_010cc25c = 1.0;
          DAT_010cc26c = 0x3f800000;
          DAT_010cc268 = DAT_008571d4;
          uVar11 = 0;
          uVar10 = 0x4034000000000000;
          DAT_010cc260 = DAT_010cc250;
          DAT_010cc264 = DAT_010cc254;
          dVar9 = (double)mobyutil::MB_randRangeSigned(0,0x4034000000000000);
          DAT_010cc260 = (float)((double)DAT_010cc260 + dVar9);
          dVar9 = (double)mobyutil::MB_randRangeSigned(uVar11,uVar10);
          DAT_010cc264 = (float)((double)DAT_010cc264 + dVar9);
          (moby->pos).x = DAT_010cc250;
          (moby->pos).y = DAT_010cc254;
          (moby->pos).z = DAT_010cc258;
          (moby->pos).w = DAT_010cc25c;
        }
      }
      mobyupdate_helpers::M684_004114b0(moby);
      if (DAT_010cc248 == 0) {
        auVar13 = ZEXT416(0xffffffff);
        auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
        auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
        auVar13 = loadVectorLeftIndexed(0x71d0,0x850000);
        auVar12 = vectorConvertFromSignedFixedPointWord(auVar13,0);
        auVar13 = loadVectorLeftIndexed(0xc,0x411f28);
        auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar13 = vectorAddFloatingPoint
                            (auVar12,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60);
        auVar13 = vectorMultiplyAddFloatingPoint(auVar15,auVar13,auVar14);
        auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
        auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
        DAT_010cc240 = storeVectorElementWordIndexed
                                 (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,
                                  0xffffffffffffc240,0x10d0000);
        DAT_010cc244 = 0;
      }
    }
  }
  return;
}



//==== 004122c8  ns=mobyupdate_helpers  size=0x10b4
// sig: undefined M685_004122c8(void)
// callers(0): 
// callees(10): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 000fec94 mobyutil::MB_catmullRom; 005002cc fastfunc::FastMemCopy; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0; 005e825c FUN_005e825c

void mobyupdate_helpers::M685_004122c8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  undefined2 *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  undefined4 local_2f0 [4];
  undefined1 auStack_2e0 [16];
  undefined1 local_2d0 [16];
  undefined1 local_2c0 [16];
  undefined1 local_2b0 [16];
  undefined1 local_2a0 [64];
  undefined1 local_260 [64];
  undefined1 local_220 [16];
  undefined1 local_210 [16];
  undefined1 local_200 [16];
  undefined1 local_1f0 [96];
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  undefined1 local_160 [144];
  
  draw::GetEffectTex(0x2d);
  idol_draw::PackCmd(0,2,0,1,0x80);
  stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(0,0,0,0,0,0);
  dVar7 = (double)fastfunc::FastIntToDouble(DAT_010cc4f0);
  dVar12 = 0.5;
  dVar8 = (double)fastfunc::FastIntToDouble
                            ((int)(animationSpeed * (float)((double)(longlong)DAT_008571e4 + 0.5)));
  dVar11 = 255.0;
  fastfunc::FastDoubleToInt((double)((float)(dVar7 / dVar8) * 255.0));
  uVar10 = 0;
  uVar9 = 0x3ff0000000000000;
  fastfunc::FastMemCopy(local_190,local_220,0x90);
  draw::GetEffectTex(0x2c);
  FUN_005e825c(local_2f0,&DAT_010cc280,local_2a0);
  FUN_005e825c(auStack_2e0,&DAT_010cc290,local_2a0);
  FUN_005e825c(local_220,local_220,local_260);
  FUN_005e825c(local_210,local_210,local_260);
  FUN_005e825c(local_190,local_190,local_260);
  FUN_005e825c(local_180,local_180,local_260);
  uVar4 = 1;
  do {
    iVar5 = (int)uVar4;
    if (iVar5 != 0x27) {
      FUN_005e825c(local_2f0,ZEXT48(&DAT_010cc270) + (uVar4 & 0xfffffff) * 0x10 & 0xffffffff,
                   local_2a0);
    }
    FUN_005e825c(local_200,local_200,local_260);
    FUN_005e825c(local_1f0,local_1f0,local_260);
    FUN_005e825c(local_170,local_170,local_260);
    FUN_005e825c(local_160,local_160,local_260);
    if (iVar5 != 0x27) {
      dVar7 = (double)fastfunc::FastIntToDouble
                                (*(undefined2 *)
                                  ((int)&DAT_010cc4f0 + (int)((uVar4 & 0xffffffff) << 1)));
      dVar8 = (double)fastfunc::FastIntToDouble
                                ((int)(animationSpeed *
                                      (float)((double)(longlong)DAT_008571e4 + dVar12)));
      fastfunc::FastDoubleToInt((double)(float)((double)(float)(dVar7 / dVar8) * dVar11));
    }
    draw::FastDrawQuad(local_220,0,0,EffectTexHeaders,9);
    draw::FastDrawQuad(local_190,0,0,EffectTexHeaders,9);
    dVar7 = (double)fastfunc::FastIntToDouble(uVar4);
    dVar8 = (double)fastfunc::FastIntToDouble(0x28);
    mobyutil::MB_catmullRom(0xbff0000000000000,uVar10,uVar9,uVar10,(double)(float)(dVar7 / dVar8));
    uVar4 = (ulonglong)(iVar5 + 1);
  } while (iVar5 + 1 < 0x28);
  iVar1 = 0;
  iVar2 = 0;
  iVar5 = 0;
  do {
    dVar7 = (double)fastfunc::FastIntToDouble(*(undefined2 *)((int)&DAT_010cc860 + iVar2));
    dVar8 = (double)fastfunc::FastIntToDouble
                              ((int)(animationSpeed *
                                    (float)((double)(longlong)DAT_008571e4 + dVar12)));
    fastfunc::FastDoubleToInt((double)(float)((double)(float)(dVar7 / dVar8) * dVar11));
    dVar7 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)&DAT_010cc8c0 + iVar1));
    dVar8 = (double)fastfunc::FastIntToDouble(0x28);
    mobyutil::MB_catmullRom(0xbff0000000000000,uVar10,uVar9,uVar10,(double)(float)(dVar7 / dVar8));
    FUN_005e825c(local_2c0,local_2d0,local_2a0);
    FUN_005e825c(local_2b0,local_2d0,local_2a0);
    FUN_005e825c(local_220,local_220,local_260);
    FUN_005e825c(local_210,local_210,local_260);
    FUN_005e825c(local_190,local_190,local_260);
    FUN_005e825c(local_180,local_180,local_260);
    puVar6 = (undefined2 *)((int)&DAT_010cc860 + iVar2);
    iVar3 = 1;
    do {
      puVar6 = puVar6 + 1;
      FUN_005e825c(local_2b0,local_2d0,local_2a0);
      FUN_005e825c(local_200,local_200,local_260);
      FUN_005e825c(local_1f0,local_1f0,local_260);
      FUN_005e825c(local_170,local_170,local_260);
      FUN_005e825c(local_160,local_160,local_260);
      dVar7 = (double)fastfunc::FastIntToDouble(*puVar6);
      dVar8 = (double)fastfunc::FastIntToDouble
                                ((int)(animationSpeed *
                                      (float)((double)(longlong)DAT_008571e4 + dVar12)));
      fastfunc::FastDoubleToInt((double)(float)((double)(float)(dVar7 / dVar8) * dVar11));
      draw::FastDrawQuad(local_220,0,0,EffectTexHeaders,9);
      draw::FastDrawQuad(local_190,0,0,EffectTexHeaders,9);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x10);
    iVar5 = iVar5 + 1;
    iVar1 = iVar1 + 4;
    iVar2 = iVar2 + 0x20;
  } while (iVar5 < 3);
  return;
}



//==== 0041337c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M685_0041337c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M685_0041337c(void)

{
  DAT_00857270 = 0x10000;
  return;
}



//==== 004133a0  ns=mobyupdate_helpers  size=0x1e8
// sig: undefined M685_004133a0(void)
// callers(1): 00413d80 mobyupdate_unsorted::UpdateMoby_685
// callees(1): 00109b40 mobyutil::AccelDelt

double mobyupdate_helpers::M685_004133a0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  Spline *pSVar4;
  Vec4 *pVVar5;
  undefined4 *unused;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  
  iVar3 = *(int *)(param_1 + 0x78);
  if (*(char *)(param_1 + 0xbc) == '\0') {
    fVar14 = *(float *)(iVar3 + 0xe0);
    fVar1 = *(float *)(iVar3 + 0xe4);
    fVar2 = *(float *)(iVar3 + 0xe8);
    pSVar4 = Splines[*(int *)(iVar3 + 0xa0)];
  }
  else {
    fVar14 = *(float *)(iVar3 + 0xf0);
    fVar1 = *(float *)(iVar3 + 0xf4);
    fVar2 = *(float *)(iVar3 + 0xf8);
    pSVar4 = Splines[*(int *)(iVar3 + 0xb8)];
  }
  dVar8 = (double)fVar2;
  dVar7 = (double)fVar1;
  dVar6 = (double)fVar14;
  dVar9 = 0.0;
  if (*(int *)(iVar3 + 0xac) < 1) {
    fVar14 = pSVar4->points[0].x;
    fVar1 = pSVar4->points[0].y;
    fVar2 = pSVar4->points[0].z;
  }
  else {
    pVVar5 = pSVar4->points + pSVar4->cnt + -1;
    fVar14 = pVVar5->x;
    fVar1 = pVVar5->y;
    fVar2 = pVVar5->z;
  }
  dVar12 = (double)fVar2;
  dVar10 = (double)fVar1;
  unused = &DAT_00413390;
  dVar11 = 0.003000000026077032;
  dVar13 = 0.20000000298023224;
  mobyutil::AccelDelt(fVar14,0.003,0.2,0.0,(float *)(param_1 + 0x10),0x413390,
                      (float *)(iVar3 + 0xc0));
  mobyutil::AccelDelt((float)dVar10,(float)dVar11,(float)dVar13,(float)dVar9,
                      (float *)(param_1 + 0x14),(int)unused,(float *)(iVar3 + 0xc4));
  fVar14 = mobyutil::AccelDelt((float)dVar12,(float)dVar11,(float)dVar13,(float)dVar9,
                               (float *)(param_1 + 0x18),(int)unused,(float *)(iVar3 + 200));
  if (0 < *(int *)(iVar3 + 0xac)) {
    mobyutil::AccelDelt((float)dVar6,(float)dVar11,(float)dVar13,(float)dVar9,
                        (float *)(param_1 + 0x40),(int)unused,(float *)(iVar3 + 0x100));
    mobyutil::AccelDelt((float)dVar7,(float)dVar11,(float)dVar13,(float)dVar9,
                        (float *)(param_1 + 0x44),(int)unused,(float *)(iVar3 + 0x104));
    fVar14 = mobyutil::AccelDelt((float)dVar8,(float)dVar11,(float)dVar13,(float)dVar9,
                                 (float *)(param_1 + 0x48),(int)unused,(float *)(iVar3 + 0x108));
  }
  return (double)fVar14;
}



//==== 004135b8  ns=mobyupdate_helpers  size=0x1b8
// sig: undefined M685_004135b8(void)
// callers(1): 00413d80 mobyupdate_unsorted::UpdateMoby_685
// callees(3): 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M685_004135b8(int param_1)

{
  int iVar1;
  undefined4 uVar5;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  
  uVar10 = 0x3fb99999a0000000;
  iVar1 = *(int *)(param_1 + 0x78);
  if ((ABS(*(float *)(param_1 + 0x10) - g_heroPosition.x) <= 40.0) &&
     (ABS(*(float *)(param_1 + 0x14) - g_heroPosition.y) <= 40.0)) {
    dVar6 = (double)fastfunc::FastWrapRot
                              (*(float *)(iVar1 + 0x138),mobyutil::g_FrameTime * 6.2831855);
    dVar8 = (double)(float)(3.141592502593994 - dVar6);
    if (dVar6 - (double)(float)(3.141592502593994 - dVar6) < 0.0) {
      dVar8 = dVar6;
    }
    dVar7 = (double)(float)(-3.141592502593994 - dVar6);
    if ((double)(float)(-3.141592502593994 - dVar6) - dVar8 < 0.0) {
      dVar7 = dVar8;
    }
    dVar8 = (double)(float)(dVar7 * dVar7);
    dVar9 = (double)(float)(dVar8 * (double)(float)(dVar8 * dVar7));
    *(float *)(iVar1 + 0x138) = (float)dVar6;
    dVar6 = (double)(float)(dVar8 * dVar9);
    lVar2 = fastfunc::FastDoubleToInt
                      ((double)((((float)(dVar8 * dVar6) * 2.601887e-06 +
                                 (float)(dVar6 * -0.0001980741071747616 +
                                        (double)(float)(dVar9 * 0.008333025500178337 +
                                                       (double)(float)((double)(float)(dVar8 * dVar7
                                                                                      ) *
                                                                       -0.16666656732559204 + dVar7)
                                                       ))) * 4.0 - 3.0) * 128.0));
    lVar3 = lVar2 + (lVar2 + -0x20 >> 0x3f & 0x20U - lVar2);
    uVar4 = lVar3 + (0x80 - lVar2 >> 0x3f & 0x80U - lVar3);
    uVar5 = fastfunc::FastLerpColor
                      (uVar10,*(undefined4 *)(param_1 + 0x90),
                       (uint)((uVar4 & 0xffffffff) << 8) | (uint)uVar4 |
                       (uint)((uVar4 & 0xffffffff) << 0x10) | 0x80000000);
    *(undefined4 *)(param_1 + 0x90) = uVar5;
    return;
  }
  uVar5 = fastfunc::FastLerpColor
                    (0x3fb99999a0000000,*(undefined4 *)(param_1 + 0x90),0xffffffff80303030);
  *(undefined4 *)(param_1 + 0x90) = uVar5;
  return;
}



//==== 00413770  ns=mobyupdate_helpers  size=0xe4
// sig: undefined M685_00413770(void)
// callers(1): 00413d80 mobyupdate_unsorted::UpdateMoby_685
// callees(0): 

void mobyupdate_helpers::M685_00413770(int param_1)

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
  float fVar14;
  float fVar15;
  int iVar16;
  float *pfVar17;
  Spline *pSVar18;
  longlong lVar19;
  
  iVar16 = *(int *)(param_1 + 0x78);
  fVar1 = *(float *)(param_1 + 0xc0);
  pfVar17 = (float *)&DAT_008572b0;
  fVar2 = *(float *)(param_1 + 0xd0);
  lVar19 = 0xb;
  fVar3 = *(float *)(param_1 + 0xe0);
  fVar4 = *(float *)(param_1 + 0xc4);
  fVar5 = *(float *)(param_1 + 0xd4);
  pSVar18 = Splines[*(int *)(iVar16 + 0x114)];
  fVar6 = *(float *)(param_1 + 0xe4);
  fVar7 = *(float *)(param_1 + 200);
  fVar8 = *(float *)(param_1 + 0xd8);
  fVar9 = *(float *)(param_1 + 0xe8);
  fVar10 = *(float *)(param_1 + 0x10);
  fVar11 = *(float *)(param_1 + 0x14);
  fVar12 = *(float *)(param_1 + 0x18);
  do {
    fVar13 = *pfVar17;
    fVar14 = pfVar17[2];
    fVar15 = pfVar17[1];
    pSVar18->points[0].w = 1.0;
    pfVar17 = pfVar17 + 4;
    pSVar18->points[0].x = fVar15 * fVar2 + fVar14 * fVar3 + fVar13 * fVar1 + fVar10;
    pSVar18->points[0].y = fVar15 * fVar5 + fVar14 * fVar6 + fVar13 * fVar4 + fVar11;
    pSVar18->points[0].z = fVar15 * fVar8 + fVar14 * fVar9 + fVar13 * fVar7 + fVar12;
    pSVar18 = (Spline *)pSVar18->points;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  DAT_0096bfba = (short)*(undefined4 *)(iVar16 + 0x114);
  return;
}



//==== 00413870  ns=mobyupdate_helpers  size=0x29c
// sig: undefined M685_00413870(void)
// callers(1): 00413d80 mobyupdate_unsorted::UpdateMoby_685
// callees(3): 00103ab0 mobyutil::MB_LerpRot; 00109b40 mobyutil::AccelDelt; 0010ce18 mobyutil::MB_PathMoveDist

undefined8 mobyupdate_helpers::M685_00413870(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  Spline *pSVar6;
  int iVar8;
  undefined8 uVar7;
  int unused;
  undefined8 in_r7;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float local_80;
  float local_7c;
  float local_78;
  
  iVar5 = *(int *)(param_1 + 0x78);
  if (*(char *)(param_1 + 0xbc) == '\0') {
    fVar1 = *(float *)(iVar5 + 0xb4);
    fVar2 = *(float *)(iVar5 + 0xe0);
    fVar3 = *(float *)(iVar5 + 0xe4);
    fVar4 = *(float *)(iVar5 + 0xe8);
    pSVar6 = Splines[*(int *)(iVar5 + 0xa0)];
  }
  else {
    fVar1 = *(float *)(iVar5 + 0xbc);
    fVar2 = *(float *)(iVar5 + 0xf0);
    fVar3 = *(float *)(iVar5 + 0xf4);
    fVar4 = *(float *)(iVar5 + 0xf8);
    pSVar6 = Splines[*(int *)(iVar5 + 0xb8)];
  }
  dVar15 = (double)fVar1;
  dVar14 = (double)fVar4;
  dVar13 = (double)fVar3;
  dVar12 = (double)fVar2;
  dVar11 = (double)(mobyutil::g_FrameTime * DAT_008572a4);
  iVar8 = mobyutil::MB_PathMoveDist
                    ((double)(float)(dVar11 * (double)*(float *)(iVar5 + 0xac)),pSVar6,&local_80,
                     iVar5 + 0xa4,iVar5 + 0xa8,in_r7,0);
  unused = 0x410000;
  dVar10 = 0.003000000026077032;
  dVar9 = 0.20000000298023224;
  dVar16 = 0.0;
  mobyutil::AccelDelt(local_80,0.003,0.2,0.0,(float *)(param_1 + 0x10),0x410000,
                      (float *)(iVar5 + 0xc0));
  mobyutil::AccelDelt(local_7c,(float)dVar10,(float)dVar9,(float)dVar16,(float *)(param_1 + 0x14),
                      unused,(float *)(iVar5 + 0xc4));
  mobyutil::AccelDelt(local_78,(float)dVar10,(float)dVar9,(float)dVar16,(float *)(param_1 + 0x18),
                      unused,(float *)(iVar5 + 200));
  fVar1 = (float)((double)*(float *)(iVar5 + 0xb0) + dVar11);
  dVar9 = (double)(float)((double)fVar1 / dVar15);
  *(float *)(iVar5 + 0xb0) = fVar1;
  dVar10 = 1.0;
  if (1.0 - dVar9 < 0.0) {
    dVar9 = dVar10;
  }
  if (iVar8 != 0) {
    dVar9 = dVar10;
  }
  if ((double)*(float *)(iVar5 + 0xac) - dVar16 < 0.0) {
    dVar9 = (double)(float)(1.0 - dVar9);
  }
  dVar11 = (double)(float)(dVar9 * 2.0);
  if (0.5 - dVar9 < 0.0) {
    dVar11 = dVar10;
  }
  dVar15 = dVar16;
  if (0.5 - dVar9 < 0.0) {
    dVar15 = (double)((float)(dVar9 - 0.5) * 2.0);
  }
  if (dVar16 - (double)*(float *)(iVar5 + 0xac) < 0.0) {
    dVar11 = dVar15;
  }
  if (1.0 - dVar11 < 0.0) {
    dVar11 = dVar10;
  }
  dVar10 = (double)mobyutil::MB_LerpRot((double)*(float *)(iVar5 + 0xd0),dVar12,dVar11);
  *(float *)(param_1 + 0x40) = (float)dVar10;
  dVar10 = (double)mobyutil::MB_LerpRot((double)*(float *)(iVar5 + 0xd4),dVar13,dVar9);
  *(float *)(param_1 + 0x44) = (float)dVar10;
  dVar9 = (double)mobyutil::MB_LerpRot((double)*(float *)(iVar5 + 0xd8),dVar14,dVar9);
  *(float *)(param_1 + 0x48) = (float)dVar9;
  if (iVar8 == 0) {
    uVar7 = 0;
  }
  else {
    if (*(int *)(iVar5 + 0xac) < 1) {
      *(undefined4 *)(iVar5 + 0xa4) = 0;
    }
    else {
      iVar8 = pSVar6->cnt;
      *(int *)(iVar5 + 0xa4) = iVar8 + -2;
      dVar16 = (double)pSVar6->points[iVar8 + -2].w;
    }
    uVar7 = 1;
    *(float *)(iVar5 + 0xa8) = (float)dVar16;
  }
  return uVar7;
}



//==== 00413b0c  ns=mobyupdate_helpers  size=0x254
// sig: undefined M685_00413b0c(void)
// callers(1): 00413d80 mobyupdate_unsorted::UpdateMoby_685
// callees(1): 000efb38 mobyfunc::DeleteMoby

void mobyupdate_helpers::M685_00413b0c(MobyInstance *param_1)

{
  void *pvVar1;
  Spline *pSVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  Spline *pSVar8;
  
  pvVar1 = param_1->pVar;
  if (*(int *)((int)pvVar1 + 0xa0) == -1) {
    mobyfunc::DeleteMoby(param_1);
  }
  else {
    pSVar2 = Splines[*(int *)((int)pvVar1 + 0xa0)];
    if (pSVar2->cnt == 0) {
      mobyfunc::DeleteMoby(param_1);
    }
    else if (*(int *)((int)pvVar1 + 0x114) == -1) {
      mobyfunc::DeleteMoby(param_1);
    }
    else if (Splines[*(int *)((int)pvVar1 + 0x114)]->cnt == 0xb) {
      iVar6 = 0;
      *(undefined4 *)((int)pvVar1 + 0xb4) = 0;
      if (0 < pSVar2->cnt + -1) {
        iVar6 = 0;
        pSVar8 = pSVar2;
        do {
          fVar3 = pSVar8->points[0].y - pSVar8->points[1].y;
          fVar4 = pSVar8->points[0].x - pSVar8->points[1].x;
          fVar5 = pSVar8->points[0].z - pSVar8->points[1].z;
          iVar6 = iVar6 + 1;
          fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
          pSVar8->points[0].w = fVar3;
          pSVar8 = (Spline *)pSVar8->points;
          *(float *)((int)pvVar1 + 0xb4) = *(float *)((int)pvVar1 + 0xb4) + fVar3;
        } while (iVar6 < pSVar2->cnt + -1);
      }
      fVar3 = pSVar2->points[iVar6].y - pSVar2->points[0].y;
      fVar4 = pSVar2->points[iVar6].x - pSVar2->points[0].x;
      fVar5 = pSVar2->points[iVar6].z - pSVar2->points[0].z;
      iVar7 = 0;
      pSVar2->points[iVar6].w = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      *(undefined4 *)((int)pvVar1 + 0xbc) = 0;
      pSVar2 = Splines[*(int *)((int)pvVar1 + 0xb8)];
      pSVar8 = pSVar2;
      if (0 < pSVar2->cnt + -1) {
        do {
          fVar3 = pSVar8->points[0].y - pSVar8->points[1].y;
          fVar4 = pSVar8->points[0].x - pSVar8->points[1].x;
          fVar5 = pSVar8->points[0].z - pSVar8->points[1].z;
          iVar7 = iVar7 + 1;
          fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
          pSVar8->points[0].w = fVar3;
          *(float *)((int)pvVar1 + 0xbc) = *(float *)((int)pvVar1 + 0xbc) + fVar3;
          pSVar8 = (Spline *)pSVar8->points;
        } while (iVar7 < pSVar2->cnt + -1);
      }
      fVar3 = pSVar2->points[iVar7].y - pSVar2->points[0].y;
      fVar4 = pSVar2->points[iVar7].x - pSVar2->points[0].x;
      fVar5 = pSVar2->points[iVar7].z - pSVar2->points[0].z;
      pSVar2->points[iVar7].w = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
      *(undefined4 *)((int)pvVar1 + 0xa8) = 0;
      *(undefined4 *)((int)pvVar1 + 0xac) = 0xbf800000;
    }
    else {
      mobyfunc::DeleteMoby(param_1);
    }
  }
  return;
}



//==== 00413d80  ns=mobyupdate_unsorted  size=0x814
// sig: undefined UpdateMoby_685(MobyInstance * moby)
// callers(0): 
// callees(15): 00109b40 mobyutil::AccelDelt; 00110b70 mobyutil::MB_IsPntInCuboid; 00112900 mobyutil::MB_GetOrientation; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 0015d710 sound::sound_SetVol; 004133a0 mobyupdate_helpers::M685_004133a0; 004135b8 mobyupdate_helpers::M685_004135b8; 00413770 mobyupdate_helpers::M685_00413770; 00413870 mobyupdate_helpers::M685_00413870; 00413b0c mobyupdate_helpers::M685_00413b0c; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

/* Moby 685 */

void mobyupdate_unsorted::UpdateMoby_685(MobyInstance *moby)

{
  float fVar1;
  ushort uVar2;
  void *pvVar3;
  Spline *pSVar4;
  float fVar5;
  longlong lVar6;
  u8 uVar12;
  undefined2 uVar10;
  int iVar7;
  int iVar8;
  uint uVar9;
  short sVar11;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  Vec4 local_50;
  float local_40 [4];
  
  lVar6 = (longlong)(int)moby;
  uVar12 = moby->state;
  pvVar3 = moby->pVar;
  if (((uVar12 != '\0') && (moby->setByGroup == '\x02')) && (*(int *)((int)pvVar3 + 0xac) < 0)) {
    *(float *)((int)pvVar3 + 0xac) = -*(float *)((int)pvVar3 + 0xac);
    pSVar4 = Splines[*(int *)((int)pvVar3 + 0xb8)];
    iVar7 = pSVar4->cnt;
    *(int *)((int)pvVar3 + 0xa4) = iVar7 + -2;
    *(float *)((int)pvVar3 + 0xa8) = pSVar4->points[iVar7 + -2].w;
    moby->setByGroup = '\x01';
    uVar12 = moby->state;
  }
  dVar17 = (double)(moby->pos).x;
  dVar16 = (double)(moby->pos).y;
  dVar15 = (double)(moby->pos).z;
  if (uVar12 == '\x04') {
    mobyupdate_helpers::M685_004135b8(lVar6);
    if (g_standingOnMoby != moby) {
      moby->state = '\x01';
    }
  }
  else if (uVar12 == '\x03') {
    if (SQRT(*(float *)((int)pvVar3 + 200) * *(float *)((int)pvVar3 + 200) +
             *(float *)((int)pvVar3 + 0xc0) * *(float *)((int)pvVar3 + 0xc0) +
             *(float *)((int)pvVar3 + 0xc4) * *(float *)((int)pvVar3 + 0xc4)) < 0.001) {
      mobyupdate_helpers::M685_004135b8(lVar6);
      iVar7 = *(int *)((int)pvVar3 + 300);
      if (((iVar7 != -1) && (sound::g_SoundChannels[iVar7].pMoby == moby)) &&
         (sound::g_SoundChannels[iVar7].state != '\0')) {
        sound::sound_Kill(iVar7);
      }
      *(undefined4 *)((int)pvVar3 + 300) = 0xffffffff;
      iVar7 = sound::PlayMobySound(1,0,moby);
      if (-1 < iVar7) {
        sound::sound_SetVol(iVar7,*(int *)((int)pvVar3 + 0x134) / 3);
      }
      moby->state = '\x04';
      if (g_standingOnMoby != moby) {
        moby->state = '\x01';
      }
    }
    else {
      iVar7 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar3 + 300));
      if (iVar7 == 0) {
        iVar7 = sound::PlayMobySound(0,4,moby);
        *(int *)((int)pvVar3 + 300) = iVar7;
      }
      dVar14 = (double)fastfunc::FastIntToDouble(*(undefined2 *)((int)pvVar3 + 0x126));
      local_40[0] = (float)dVar14;
      dVar14 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)pvVar3 + 0x130));
      mobyutil::AccelDelt((float)(dVar14 * 0.25),0.003,0.2,0.0,local_40,0x413d60,
                          (float *)((int)pvVar3 + 0x128));
      sVar11 = fastfunc::FastDoubleToInt((double)local_40[0]);
      *(short *)((int)pvVar3 + 0x126) = sVar11;
      if (-1 < *(int *)((int)pvVar3 + 300)) {
        sound::sound_SetVol(*(int *)((int)pvVar3 + 300),(int)sVar11);
      }
      mobyupdate_helpers::M685_00413770(lVar6);
    }
  }
  else if (uVar12 == '\x02') {
    iVar7 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar3 + 300));
    if (iVar7 == 0) {
      iVar8 = sound::PlayMobySound(0,4,moby);
      *(int *)((int)pvVar3 + 300) = iVar8;
      iVar7 = sound::g_SoundChannels[0].vol;
      if (iVar8 != 0) {
        iVar13 = *(int *)((int)pvVar3 + 0x130);
        if (*(int *)((int)pvVar3 + 0x130) < 0) {
          *(int *)((int)pvVar3 + 0x130) = sound::g_SoundChannels[0].vol;
          iVar13 = iVar7;
        }
        sound::sound_SetVol(iVar8,iVar13);
      }
    }
    uVar9 = fastfunc::FastLerpColor(0x3fb99999a0000000,moby->field60_0x90,0xffffffff80808040);
    moby->field60_0x90 = uVar9;
    iVar7 = mobyupdate_helpers::M685_00413870(lVar6);
    if (iVar7 != 0) {
      moby->state = '\x03';
      *(short *)((int)pvVar3 + 0x126) = (short)*(undefined4 *)((int)pvVar3 + 0x130);
    }
    mobyupdate_helpers::M685_00413770(lVar6);
    local_50.x = (float)((double)(moby->pos).x - dVar17);
    local_50.y = (float)((double)(moby->pos).y - dVar16);
    local_50.w = (moby->pos).w;
    local_50.z = (float)((double)(moby->pos).z - dVar15);
    mobyutil::MB_GetOrientation
              ((MobyInstance *)((int)pvVar3 + 0x60),&local_50,ZEXT48(&stack0x00000000) - 0x60,
               lVar6 + 0x40);
  }
  else if (uVar12 == '\x01') {
    mobyupdate_helpers::M685_004135b8(lVar6);
    if ((-1 < *(int *)((int)pvVar3 + 0x118)) &&
       (iVar7 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0x118)),
       iVar7 != 0)) {
      moby->setByGroup = '\0';
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa8) = 0;
      *(undefined4 *)((int)pvVar3 + 0xac) = 0xbf800000;
    }
    if ((-1 < *(int *)((int)pvVar3 + 0x11c)) &&
       (iVar7 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0x11c)),
       iVar7 != 0)) {
      moby->setByGroup = '\0';
      pSVar4 = Splines[*(int *)((int)pvVar3 + 0xa0)];
      iVar7 = pSVar4->cnt;
      *(int *)((int)pvVar3 + 0xa4) = iVar7 + -2;
      fVar1 = pSVar4->points[iVar7 + -2].w;
      *(undefined4 *)((int)pvVar3 + 0xac) = 0x3f800000;
      *(float *)((int)pvVar3 + 0xa8) = fVar1;
    }
    if ((-1 < *(int *)((int)pvVar3 + 0x120)) &&
       (iVar7 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0x120)),
       iVar7 != 0)) {
      moby->setByGroup = '\x01';
      pSVar4 = Splines[*(int *)((int)pvVar3 + 0xb8)];
      iVar7 = pSVar4->cnt;
      *(int *)((int)pvVar3 + 0xa4) = iVar7 + -2;
      fVar1 = pSVar4->points[iVar7 + -2].w;
      *(undefined4 *)((int)pvVar3 + 0xac) = 0x3f800000;
      *(float *)((int)pvVar3 + 0xa8) = fVar1;
    }
    if ((g_standingOnMoby == moby) && (DAT_00969fec == 0)) {
      if ((0.0 < (moby->transform).v2.z * (g_heroMobyPtr->transform).v2.z +
                 (moby->transform).v2.x * (g_heroMobyPtr->transform).v2.x +
                 (moby->transform).v2.y * (g_heroMobyPtr->transform).v2.y) &&
         (fVar1 = g_heroPosition.y - (moby->pos).y, fVar5 = g_heroPosition.x - (moby->pos).x,
         SQRT(fVar5 * fVar5 + fVar1 * fVar1) < 1.0)) {
        iVar8 = sound::PlayMobySound(1,0,moby);
        iVar7 = sound::g_SoundChannels[1].vol;
        if (-1 < iVar8) {
          iVar13 = *(int *)((int)pvVar3 + 0x134);
          if (*(int *)((int)pvVar3 + 0x134) < 0) {
            *(int *)((int)pvVar3 + 0x134) = sound::g_SoundChannels[1].vol;
            iVar13 = iVar7;
          }
          sound::sound_SetVol(iVar8,iVar13);
        }
        if (*(int *)((int)pvVar3 + 0xac) == -0x40800000) {
          moby->setByGroup =
               ((byte)((LZCOUNT(-(uint)*(ushort *)((int)pvVar3 + 0x124)) << 0x3a) >> 0x3f) & 0xfe) +
               2;
        }
        moby->state = '\x02';
        *(undefined4 *)((int)pvVar3 + 0xb0) = 0;
        *(float *)((int)pvVar3 + 0xac) = -*(float *)((int)pvVar3 + 0xac);
      }
    }
  }
  else if (uVar12 == '\0') {
    moby->state = '\x01';
    moby->setByGroup = '\0';
    mobyupdate_helpers::M685_00413b0c(lVar6);
    pSVar4 = Splines[*(int *)((int)pvVar3 + 0xa0)];
    (moby->pos).x = pSVar4->points[0].x;
    (moby->pos).y = pSVar4->points[0].y;
    (moby->pos).z = pSVar4->points[0].z;
    uVar10 = 0;
    (moby->pos).w = pSVar4->points[0].w;
    (moby->rotation).x = *(f32 *)((int)pvVar3 + 0xd0);
    uVar2 = moby->uid;
    (moby->rotation).y = *(f32 *)((int)pvVar3 + 0xd4);
    (moby->rotation).z = *(f32 *)((int)pvVar3 + 0xd8);
    (moby->rotation).w = *(f32 *)((int)pvVar3 + 0xdc);
    if ((&DAT_00a545c4)[(short)uVar2] == '\0') {
      uVar10 = 0;
      if (((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar2 >> 5) << 2)
                     ) & 1 << (uVar2 & 0x1f)) == 0) &&
         (uVar10 = 0, g_LevelFlags[Level][*(int *)((int)pvVar3 + 0x110)] == -1)) {
        uVar10 = 1;
      }
    }
    *(undefined2 *)((int)pvVar3 + 0x124) = uVar10;
    moby->updateDistance = -1;
    *(undefined4 *)((int)pvVar3 + 0x138) = 0;
    moby->field60_0x90 = 0x80303030;
    *(undefined4 *)((int)pvVar3 + 300) = 0xffffffff;
    *(undefined4 *)((int)pvVar3 + 0x130) = 0xffffffff;
    *(undefined4 *)((int)pvVar3 + 0x134) = 0xffffffff;
  }
  if ((moby->state != '\0' && moby->state != '\x02') &&
     (mobyupdate_helpers::M685_004133a0(lVar6), g_standingOnMoby == moby)) {
    local_50.x = (float)((double)(moby->pos).x - dVar17);
    local_50.y = (float)((double)(moby->pos).y - dVar16);
    local_50.w = (moby->pos).w;
    local_50.z = (float)((double)(moby->pos).z - dVar15);
    mobyutil::MB_GetOrientation
              ((MobyInstance *)((int)pvVar3 + 0x60),&local_50,ZEXT48(&stack0x00000000) - 0x60,
               lVar6 + 0x40);
  }
  return;
}



//==== 00414594  ns=Global  size=0x3c
// sig: undefined FUN_00414594(void)
// callers(1): 0048d9d8 mobyupdate_unsorted::UpdateMoby_851
// callees(0): 

void FUN_00414594(int param_1)

{
  *(byte *)(param_1 + 0xbc) = ((byte)(*(int *)(*(int *)(param_1 + 0x78) + 0xac) >> 7) & 1) + 1;
  *(undefined2 *)(*(int *)(param_1 + 0x78) + 0x124) = 1;
  return;
}



//==== 004145d0  ns=Global  size=0x88
// sig: undefined FUN_004145d0(void)
// callers(1): 0048d9d8 mobyupdate_unsorted::UpdateMoby_851
// callees(0): 

void FUN_004145d0(int param_1)

{
  int iVar1;
  LevelId LVar2;
  
  *(undefined1 *)(param_1 + 0xbc) = 0;
  LVar2 = Level;
  *(undefined2 *)(*(int *)(param_1 + 0x78) + 0x124) = 0;
  iVar1 = (int)((longlong)((int)(short)*(ushort *)(param_1 + 0xb2) >> 5) << 2);
  *(uint *)(&DAT_00a0cd1c + LVar2 * 0x100 + iVar1) =
       *(uint *)(&DAT_00a0cd1c + LVar2 * 0x100 + iVar1) | 1 << (*(ushort *)(param_1 + 0xb2) & 0x1f);
  iVar1 = (int)((longlong)((int)(short)*(ushort *)(param_1 + 0xb2) >> 5) << 2);
  *(uint *)(&DAT_00a54dd0 + iVar1) =
       *(uint *)(&DAT_00a54dd0 + iVar1) | 1 << (*(ushort *)(param_1 + 0xb2) & 0x1f);
  return;
}



//==== 00414658  ns=mobyupdate_helpers  size=0x14
// sig: undefined M686_00414658(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M686_00414658(void)

{
  DAT_008573ac = 0x10000;
  return;
}



//==== 00414688  ns=mobyupdate_helpers  size=0x54c
// sig: undefined M686_00414688(void)
// callers(1): 00415f18 mobyupdate_helpers::M688_00415f18
// callees(4): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 00127ea8 partupd::SpawnPart_26; 0015d12c sound::PlayMobySound

MobyInstance *
mobyupdate_helpers::M686_00414688
          (float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulonglong param_5,
          ulonglong param_6,undefined8 param_7,undefined8 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  ulonglong *puVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  MobyInstance *pMoby;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  float *pfVar18;
  longlong lVar17;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar20;
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  float fStack00000050;
  float fStack00000054;
  float fStack00000058;
  float fStack0000005c;
  float fStack00000060;
  float fStack00000064;
  float fStack00000068;
  float fStack0000006c;
  float in_stack_00000074;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0x150;
  puVar7 = (ulonglong *)lVar14;
  *puVar7 = uVar12;
  puVar7[0x2c] = in_LR;
  puVar7[0x21] = in_f23;
  puVar7[0x22] = in_f24;
  puVar7[0x23] = in_f25;
  puVar7[0x24] = in_f26;
  puVar7[0x25] = in_f27;
  puVar7[0x26] = in_f28;
  puVar7[0x27] = in_f29;
  puVar7[0x28] = in_f30;
  puVar7[0x29] = in_f31;
  puVar7[0x20] = unaff_r31;
  puVar7[0x1b] = unaff_r26;
  puVar7[0x1e] = unaff_r29;
  puVar7[0x1f] = unaff_r30;
  puVar7[0x1d] = unaff_r28;
  puVar7[0x1c] = unaff_r27;
  _fStack00000040 = param_3;
  _fStack00000048 = param_4;
  _fStack00000060 = param_7;
  _fStack00000068 = param_8;
  pMoby = mobyfunc::CreateMoby(0x2ae);
  if (pMoby != (MobyInstance *)0x0) {
    pfVar6 = (float *)pMoby->pVar;
    pfVar6[0xc] = param_1;
    pMoby->updateDistance = -1;
    pMoby->drawDistance = 0xff;
    pMoby->enabled = '\x01';
    pMoby->scale = pMoby->scale * 0.25;
    fVar10 = 0.0;
    fStack00000054 = (float)param_5;
    fStack00000050 = (float)(param_5 >> 0x20);
    fStack00000058 = (float)(param_6 >> 0x20);
    (pMoby->rotation).x = 0.0;
    fVar2 = ABS(fStack00000058);
    fStack0000005c = (float)param_6;
    fVar11 = fStack00000050 * fStack00000050 + fStack00000054 * fStack00000054;
    fVar4 = SQRT(fVar11);
    fVar5 = ABS(fVar4);
    *(float *)((int)puVar7 + 0x74) = fVar4;
    *(float *)(puVar7 + 0xf) = fVar5 - fVar2;
    uVar15 = (ulonglong)(*(uint *)((int)puVar7 + 0x74) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar7 + 0xf) >> 0x1e) & 2 | param_6 >> 0x3d & 4;
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
    fVar3 = ABS(*(float *)((int)puVar7 + 0x74));
    if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
      fVar3 = fVar2;
    }
    fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
      fVar2 = fVar5;
    }
    fVar5 = fVar10;
    if (0.0 < fVar3) {
      lVar13 = uVar12 - 0x140;
      lVar17 = uVar12 - 0xa4;
      lVar16 = uVar12 - 0xb4;
      lVar19 = 2;
      fVar3 = (fVar2 - fVar3) / (fVar2 + fVar3);
      fVar2 = fVar3 * fVar3;
      *(float *)(puVar7 + 0x15) = fVar3;
      *(float *)(puVar7 + 0x14) = fVar3;
      *(float *)((int)puVar7 + 0xa4) = fVar3;
      *(float *)((int)puVar7 + 0x9c) = fVar3;
      fVar3 = fVar2 * fVar2;
      *(float *)(puVar7 + 0x14) = *(float *)(puVar7 + 0x14) * fVar2;
      *(float *)((int)puVar7 + 0xa4) = *(float *)((int)puVar7 + 0xa4) * fVar3;
      *(float *)(puVar7 + 0x15) = *(float *)(puVar7 + 0x15) * fVar3 * fVar2;
      do {
        *(float *)((int)lVar13 + 0x9c) = *(float *)((int)lVar13 + 0x8c) * fVar3 * fVar3;
        iVar8 = (int)lVar16;
        lVar16 = lVar16 + 8;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)(iVar8 + 4) * fVar3 * fVar3;
        lVar17 = lVar17 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar19 = 4;
      lVar17 = uVar12 - 0xb4;
      pfVar18 = (float *)&DAT_007358e0;
      lVar13 = lVar14;
      lVar16 = lVar17;
      do {
        fVar3 = *pfVar18;
        fVar2 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar13 + 0x9c) = *(float *)((int)lVar13 + 0x9c) * fVar3;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar2;
        lVar16 = lVar16 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar16 = 2;
      lVar13 = lVar14;
      fVar3 = fVar10;
      do {
        iVar8 = (int)lVar13;
        iVar9 = (int)lVar17;
        lVar13 = lVar13 + 0x10;
        lVar17 = lVar17 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar8 + 0x9c) + *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                *(float *)(iVar9 + 0xc);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      fVar5 = (fVar3 + 0.7853982) * fVar4 + fVar1;
    }
    fVar2 = ABS(fStack00000050);
    fVar3 = ABS(fStack00000054);
    (pMoby->rotation).y = -fVar5;
    *(float *)(puVar7 + 0xe) = fVar2 - fVar3;
    uVar15 = param_5 >> 0x3c & 8 |
             (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1e) & 2 | (param_5 << 0x20) >> 0x3d & 4;
    fVar4 = fVar2;
    if (*(float *)(puVar7 + 0xe) - 0.0 < 0.0) {
      fVar4 = fVar3;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
    if (*(float *)(puVar7 + 0xe) - 0.0 < 0.0) {
      fVar3 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    if (0.0 < fVar4) {
      lVar13 = uVar12 - 0x140;
      lVar17 = uVar12 - 0xc4;
      lVar16 = uVar12 - 0xd4;
      lVar19 = 2;
      fVar4 = (fVar3 - fVar4) / (fVar3 + fVar4);
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar7 + 0x11) = fVar4;
      *(float *)(puVar7 + 0x10) = fVar4;
      *(float *)((int)puVar7 + 0x84) = fVar4;
      *(float *)((int)puVar7 + 0x7c) = fVar4;
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar7 + 0x10) = *(float *)(puVar7 + 0x10) * fVar3;
      *(float *)((int)puVar7 + 0x84) = *(float *)((int)puVar7 + 0x84) * fVar4;
      *(float *)(puVar7 + 0x11) = *(float *)(puVar7 + 0x11) * fVar4 * fVar3;
      do {
        *(float *)((int)lVar13 + 0x7c) = *(float *)((int)lVar13 + 0x6c) * fVar4 * fVar4;
        iVar8 = (int)lVar16;
        lVar16 = lVar16 + 8;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)(iVar8 + 4) * fVar4 * fVar4;
        lVar17 = lVar17 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar19 = 4;
      lVar17 = uVar12 - 0xd4;
      pfVar18 = (float *)&DAT_007358e0;
      lVar13 = lVar14;
      lVar16 = lVar17;
      do {
        fVar4 = *pfVar18;
        fVar3 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar13 + 0x7c) = *(float *)((int)lVar13 + 0x7c) * fVar4;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
        lVar16 = lVar16 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar13 = 2;
      do {
        iVar8 = (int)lVar14;
        lVar14 = lVar14 + 0x10;
        iVar9 = (int)lVar17;
        lVar17 = lVar17 + 0x10;
        fVar10 = fVar10 + *(float *)(iVar8 + 0x7c) + *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                 *(float *)(iVar9 + 0xc);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      fVar10 = (fVar10 + 0.7853982) * fVar5 + fVar2;
    }
    (pMoby->rotation).z = fVar10;
    (pMoby->pos).x = fStack00000040;
    (pMoby->pos).y = fStack00000044;
    (pMoby->pos).z = fStack00000048;
    (pMoby->pos).w = fStack0000004c;
    *pfVar6 = fStack00000050;
    pfVar6[1] = fStack00000054;
    pfVar6[2] = fStack00000058;
    pfVar6[3] = fStack0000005c;
    pfVar6[4] = fStack00000060;
    pfVar6[5] = fStack00000064;
    pfVar6[6] = fStack00000068;
    pfVar6[7] = fStack0000006c;
    pfVar6[0xd] = in_stack_00000074;
    pfVar6[0xe] = SQRT(fStack00000058 * fStack00000058 + fVar11);
    dVar20 = 120.5;
    puVar7[0x18] = (longlong)(int)(animationSpeed * 120.5);
    partupd::SpawnPart_26
              (0x4119a28000000000,pMoby,pfVar6,0x2f4f7f7f,*(undefined4 *)((int)puVar7 + 0xc4),
               0xffffffffffffffff);
    puVar7[0x18] = (longlong)(int)((double)animationSpeed * dVar20);
    partupd::SpawnPart_26(0x4109a28000000000,pMoby);
    sound::PlayMobySound(0,0,pMoby);
    mobyfunc::UpdateMobyTransform(pMoby);
  }
  return pMoby;
}



//==== 00414c50  ns=mobyupdate_unsorted  size=0x1274
// sig: undefined UpdateMoby_686(MobyInstance * moby)
// callers(0): 
// callees(14): 0005e598 collproc::CollMobySphere; 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 00110b70 mobyutil::MB_IsPntInCuboid; 00121740 partupd::SpawnPart_4; 001229a8 partupd::SpawnPart_8; 00123390 partupd::SpawnPart_11; 00124e10 partupd::SpawnPart_15; 0015d12c sound::PlayMobySound; 001d4d88 FUN_001d4d88; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Moby 686 */

void mobyupdate_unsorted::UpdateMoby_686(MobyInstance *moby)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  float fVar9;
  longlong lVar10;
  int iVar12;
  int iVar13;
  uint uVar14;
  longlong lVar11;
  int iVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  float *pfVar19;
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
  double dVar37;
  double dVar38;
  undefined8 uVar39;
  double dVar40;
  undefined1 local_200 [16];
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [48];
  float local_190 [26];
  longlong local_128;
  float local_118;
  
  lVar10 = (longlong)(int)moby;
  pfVar19 = (float *)moby->pVar;
  iVar16 = 0;
  (moby->pos).x = (moby->pos).x + *pfVar19;
  iVar15 = -draw::LetterBoxOn;
  (moby->pos).y = (moby->pos).y + pfVar19[1];
  iVar15 = ((uint)((LZCOUNT(iVar15) << 0x3a) >> 0x3f) & 0xfffffffe) + 4;
  (moby->pos).z = (moby->pos).z + pfVar19[2];
  dVar35 = 0.0;
  dVar27 = -1.0;
  dVar28 = 1.0;
  dVar24 = 0.5;
  dVar37 = 0.10000000149011612;
  for (iVar18 = 0; iVar18 < (int)(((uint)((LZCOUNT(-draw::LetterBoxOn) << 0x3a) >> 0x3f) & 2) + 2);
      iVar18 = iVar18 + 1) {
    mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar28);
    mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar28);
    mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar28);
    mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar28);
    mobyutil::MB_randRangeFloat
              ((float)((double)mobyutil::g_FrameTime * dVar37),mobyutil::g_FrameTime);
    mobyutil::MB_randRangeFloat((float)dVar35,(float)dVar28);
    iVar12 = mobyutil::MB_randRange(0x1e,0x2d);
    iVar12 = (int)(animationSpeed * (float)((double)(longlong)iVar12 + dVar24));
    local_128 = (longlong)iVar12;
    iVar13 = mobyutil::MB_randRange(0x50,0x8c);
    partupd::SpawnPart_4(local_200,local_1f0,0x6f00afff,0xff,iVar12 / iVar15,0x50,iVar13 / iVar15,1)
    ;
    mobyutil::MB_randRangeFloat((float)dVar35,(float)dVar28);
    iVar12 = mobyutil::MB_randRange(0x3c,0x78);
    iVar12 = (int)(animationSpeed * (float)((double)(longlong)iVar12 + dVar24));
    local_128 = (longlong)iVar12;
    iVar13 = mobyutil::MB_randRange(200,300);
    partupd::SpawnPart_4
              (local_200,local_1f0,0x1fffffff,0x4f4f4f,iVar12 / iVar15,0x50,iVar13 / iVar15,0);
  }
  fVar2 = (moby->pos).x;
  if ((((int)(moby->pos).x < 0) || (fVar3 = (moby->pos).y, (int)(moby->pos).y < 0)) ||
     (fVar4 = (moby->pos).z, (int)(moby->pos).z < 0)) {
    mobyfunc::DeleteMoby(moby);
  }
  else {
    fVar5 = pfVar19[4];
    fVar9 = fVar5 - fVar2;
    if (SQRT((pfVar19[6] - fVar4) * (pfVar19[6] - fVar4) +
             fVar9 * fVar9 + (pfVar19[5] - fVar3) * (pfVar19[5] - fVar3)) < pfVar19[0xe]) {
      (moby->pos).x = fVar5;
      fVar3 = pfVar19[5];
      (moby->pos).y = fVar3;
      fVar4 = pfVar19[6];
      (moby->pos).z = fVar4;
      fVar2 = pfVar19[7];
      moby->state = '\x01';
      (moby->pos).w = fVar2;
      fVar2 = fVar5;
    }
    if (moby->state != '\0') {
      bVar1 = draw::LetterBoxOn != 0;
      dVar26 = 8.0;
      local_190[0x18] =
           SQRT((GameCamera.posZ - fVar4) * (GameCamera.posZ - fVar4) +
                (GameCamera.posX - fVar2) * (GameCamera.posX - fVar2) +
                (GameCamera.posY - fVar3) * (GameCamera.posY - fVar3));
      dVar37 = dVar26;
      if (bVar1) {
        dVar37 = 4.0;
      }
      *pfVar19 = *pfVar19 * -0.55;
      pfVar19[1] = pfVar19[1] * -0.55;
      pfVar19[2] = pfVar19[2] * -0.55;
      if (bVar1) {
        collproc::CollMobySphere(dVar28,lVar10 + 0x10,&hero::g_heroMtx,9,g_heroMobyPtr,local_1c0);
        if ((CollOutput.pMoby == (MobyInstance *)0x0) ||
           (0x2c7 < (short)(CollOutput.pMoby)->oClass || (short)(CollOutput.pMoby)->oClass < 0x2c5))
        {
          sound::PlayMobySound(1,0,moby);
        }
        else {
          sound::PlayMobySound(2,0,moby);
        }
      }
      fVar2 = (moby->pos).y - GameCamera.posY;
      fVar3 = (moby->pos).x - GameCamera.posX;
      fVar4 = (moby->pos).z - GameCamera.posZ;
      lVar17 = ((LZCOUNT(-draw::LetterBoxOn) << 0x3a) >> 0x3f & 3U) + 2;
      iVar18 = (int)lVar17;
      dVar23 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      dVar20 = (double)fastfunc::FastIntToDouble(lVar17);
      dVar22 = 2.0;
      if (dVar23 < (double)(float)(dVar20 * 2.0)) {
        uVar14 = fastfunc::FastDoubleToInt(dVar23);
        iVar18 = ((int)uVar14 >> 1) + (uint)((int)uVar14 < 0 && (uVar14 & 1) != 0);
      }
      iVar12 = 0;
      dVar20 = dVar35;
      if (dVar23 - 7.0 < 0.0) {
        dVar20 = (double)(float)(7.0 - dVar23);
      }
      if (0 < iVar18) {
        dVar29 = 10.0;
        dVar38 = 30.5;
        dVar34 = (double)(float)(dVar37 * dVar24);
        dVar40 = 40.5;
        dVar36 = (double)(float)(dVar37 * 400000.0);
        dVar30 = 60.5;
        dVar31 = 90.5;
        dVar32 = 10.5;
        dVar33 = 20.5;
        do {
          local_118 = (float)dVar26;
          dVar26 = (double)mobyutil::MB_randRangeFloat((float)dVar26,(float)dVar29);
          dVar21 = (double)mobyutil::g_FrameTime;
          local_190[0] = 2.1569206e+09;
          local_190[1] = 2.1569206e+09;
          local_190[3] = 2.1548234e+09;
          local_190[4] = 4.6566126e-10;
          local_190[2] = 2.155872e+09;
          local_190[5] = 4.6566126e-10;
          local_190[6] = 1.1675459e-10;
          dVar25 = (double)(float)(dVar26 * dVar21 - (double)(float)(dVar21 * dVar20));
          local_190[7] = 1.1669775e-10;
          local_190[8] = 1.166409e-10;
          local_190[9] = 1.1641642e-10;
          local_190[10] = 1.1641532e-10;
          local_190[0xb] = 0.5;
          lVar17 = mobyutil::MB_randInt(dVar26,dVar21,(double)(float)(dVar21 * dVar20),6);
          uVar6 = *(undefined4 *)((int)local_190 + (int)(lVar17 << 2));
          lVar17 = mobyutil::MB_randInt(6);
          uVar7 = *(undefined4 *)((int)local_190 + (int)(lVar17 << 2) + 0x18);
          iVar13 = (int)((double)animationSpeed * dVar40);
          local_128 = (longlong)iVar13;
          mobyutil::MB_randRange((int)((double)animationSpeed * dVar38),iVar13);
          iVar13 = (int)((double)animationSpeed * dVar31);
          local_128 = (longlong)iVar13;
          mobyutil::MB_randRange((int)((double)animationSpeed * dVar30),iVar13);
          partupd::SpawnPart_11
                    (dVar36,(double)(float)(dVar25 * dVar37),lVar10 + 0x10,pfVar19,uVar6,uVar7);
          iVar13 = (int)((double)animationSpeed * dVar33);
          local_128 = (longlong)iVar13;
          mobyutil::MB_randRange((int)((double)animationSpeed * dVar32),iVar13);
          iVar13 = (int)((double)animationSpeed * dVar40);
          local_128 = (longlong)iVar13;
          mobyutil::MB_randRange((int)((double)animationSpeed * dVar38),iVar13);
          partupd::SpawnPart_11
                    (dVar36,(double)(float)(dVar25 * dVar34),lVar10 + 0x10,pfVar19,0x7fffffff,
                     0xffffff);
          iVar12 = iVar12 + 1;
          dVar26 = (double)local_118;
        } while (iVar12 < iVar18);
      }
      dVar29 = 3.0;
      iVar18 = 0;
      uVar39 = 0x41086a0000000000;
      lVar17 = lVar10 + 0x10;
      dVar20 = 15.5;
      dVar26 = 20.5;
      do {
        local_190[0xc] = 2.1569206e+09;
        local_190[0xd] = 2.1569206e+09;
        local_190[0xe] = 2.155872e+09;
        local_190[0xf] = 2.1548234e+09;
        local_190[0x10] = 4.6566126e-10;
        local_190[0x11] = 4.6566126e-10;
        local_190[0x12] = 1.1675459e-10;
        local_190[0x13] = 1.1669775e-10;
        local_190[0x14] = 1.166409e-10;
        local_190[0x15] = 1.1641642e-10;
        local_190[0x16] = 1.1641532e-10;
        local_190[0x17] = 0.5;
        mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar28);
        mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar28);
        mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar28);
        mobyutil::MB_randRangeFloat((float)dVar35,(float)dVar29);
        lVar11 = mobyutil::MB_randInt(6);
        uVar6 = *(undefined4 *)((int)local_190 + (int)(lVar11 << 2) + 0x30);
        lVar11 = mobyutil::MB_randInt(6);
        uVar7 = *(undefined4 *)((int)local_190 + (int)(lVar11 << 2) + 0x48);
        iVar12 = (int)((double)animationSpeed * dVar26);
        local_128 = (longlong)iVar12;
        mobyutil::MB_randRange((int)((double)animationSpeed * dVar20),iVar12);
        partupd::SpawnPart_8(uVar39,lVar17,local_1e0,uVar6,uVar7);
        iVar18 = iVar18 + 1;
      } while (iVar18 < 5);
      uVar14 = (uint)((int)DAT_00a10714 >> 0x1f) >> 1;
      if (((int)((uVar14 ^ DAT_00a10714) - ((int)DAT_00a10714 >> 0x1f)) < 0x3f733333) &&
         (9.0 < dVar23)) {
        dVar35 = (double)(float)(dVar37 * 4.0);
        local_128 = (longlong)(int)((double)animationSpeed * dVar20);
        FUN_001d4d88(dVar35,lVar10,lVar17,pfVar19,uVar14,(int)((double)animationSpeed * dVar20),0x7f
                     ,0x7f,0x7f);
        local_128 = (longlong)(int)(animationSpeed * 24.5);
        FUN_001d4d88(dVar35,lVar10,lVar17,pfVar19);
      }
      dVar29 = (double)local_190[0x18];
      local_128 = (longlong)(int)((double)animationSpeed * dVar26);
      FUN_001d4d88((double)(float)(dVar37 * 4.0),lVar10,lVar17,pfVar19,0x30,
                   (int)((double)animationSpeed * dVar26),0x7f,0x7f,0);
      dVar35 = 19.5;
      local_128 = (longlong)(int)(animationSpeed * 19.5);
      FUN_001d4d88((double)(float)(dVar37 * dVar22),lVar10,lVar17,pfVar19,0x20,
                   (int)(animationSpeed * 19.5),0xff,0xff,0xff);
      if (100.0 < dVar29) {
        uVar39 = 0x403e000000000000;
        uVar14 = (uint)((int)DAT_00a10714 >> 0x1f) >> 1;
        if (((int)((uVar14 ^ DAT_00a10714) - ((int)DAT_00a10714 >> 0x1f)) < 0x3f733333) &&
           (9.0 < dVar23)) {
          local_128 = (longlong)(int)((double)animationSpeed * dVar20);
          FUN_001d4d88(0x403e000000000000,lVar10,lVar17,pfVar19,uVar14,
                       (int)((double)animationSpeed * dVar20),0x7f,0x7f,0x7f);
          local_128 = (longlong)(int)(animationSpeed * 24.5);
          FUN_001d4d88(uVar39,lVar10,lVar17,pfVar19);
        }
        local_128 = (longlong)(int)((double)animationSpeed * dVar26);
        FUN_001d4d88(uVar39,lVar10,lVar17,pfVar19,0x30,(int)((double)animationSpeed * dVar26),0x7f,
                     0x7f,0);
        local_128 = (longlong)(int)((double)animationSpeed * dVar35);
        FUN_001d4d88(0x402e000000000000,lVar10,lVar17,pfVar19,0x20,
                     (int)((double)animationSpeed * dVar35),0xff,0xff,0xff);
      }
      dVar22 = 10.0;
      dVar20 = 40.0;
      dVar26 = 105000.0;
      dVar37 = 90.5;
      dVar35 = 150.5;
      for (iVar18 = 0;
          iVar18 < (int)(((uint)((LZCOUNT(-draw::LetterBoxOn) << 0x3a) >> 0x3f) & 0x1e) + 10);
          iVar18 = iVar18 + 1) {
        mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar28);
        mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar28);
        mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar28);
        mobyutil::MB_randRangeFloat((float)dVar22,(float)dVar20);
        dVar23 = dVar28;
        if (draw::LetterBoxOn != 0) {
          dVar23 = 0.20000000298023224;
        }
        dVar23 = (double)(float)(dVar23 * dVar26);
        iVar12 = (int)((double)animationSpeed * dVar35);
        local_128 = (longlong)iVar12;
        iVar12 = mobyutil::MB_randRange((int)((double)animationSpeed * dVar37),iVar12);
        partupd::SpawnPart_15
                  (dVar23,lVar17,local_1d0,0x4f007fff,0x1f00007f,0x1f000000,iVar12 / iVar15,1,
                   0xffffffffffffffff);
      }
      do {
        if (((((draw::LetterBoxOn == 0) && (fVar2 = pfVar19[8], fVar2 != -NAN)) &&
             (MobyInstance[(int)fVar2].oClass == 700)) &&
            ((piVar8 = (int *)MobyInstance[(int)fVar2].pVar, *(short *)(piVar8 + 1) == 0 &&
             (*piVar8 == 0)))) &&
           ((iVar15 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar8[2]), iVar15 != 0
            && (iVar15 = mobyutil::MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)piVar8[2]),
               iVar15 != 0)))) {
          iVar15 = mobyutil::MB_randRange(0x3c,0xb4);
          local_128 = (longlong)iVar15;
          *piVar8 = (int)(animationSpeed * (float)((double)local_128 + dVar24));
        }
        iVar16 = iVar16 + 1;
        pfVar19 = pfVar19 + 1;
      } while (iVar16 < 4);
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 00415ec4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M688_00415ec4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M688_00415ec4(void)

{
  DAT_0085741c = 0x10000;
  return;
}



//==== 00415f18  ns=mobyupdate_helpers  size=0xd5c
// sig: undefined M688_00415f18(MobyInstance * moby)
// callers(0): 
// callees(18): 00047f74 camera::SetCameraPosition; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 00057820 collproc::CollLine; 000b72b0 hero::TransitionMovement; 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 0010675c mobyutil::MB_damage; 0010e030 mobyutil::MB_genericExplosion; 00110b70 mobyutil::MB_IsPntInCuboid; 0011b728 mobyutil::MB_UnlockSkillPoint; 0028e510 FUN_0028e510; 003a82b8 mobyupdate_unsorted::UpdateMoby_a_lot_10; 00414688 mobyupdate_helpers::M686_00414688; 004fffb4 fastfunc::FastDecTimerS16; 00502758 fastfunc::FastDoubleToInt; 00502a64 fastfunc::FastVecSub; 005cd098 libc::printf
// strings: 00657164: 'WARNING moby class %d instance %d has no path!\n'

/* Moby 688 */

void mobyupdate_helpers::M688_00415f18(MobyInstance *moby)

{
  longlong lVar1;
  float fVar2;
  undefined4 uVar3;
  MOBY_OCLASSES MVar4;
  short sVar5;
  void *pvVar6;
  f32 fVar7;
  void *pvVar8;
  int *piVar9;
  Spline *pSVar10;
  undefined2 uVar11;
  ulonglong *puVar12;
  float fVar13;
  float fVar14;
  Vec4 *pVVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  Cuboid *pCVar19;
  ulonglong uVar20;
  longlong lVar21;
  int iVar24;
  uint uVar25;
  undefined8 uVar22;
  s8 sVar30;
  longlong lVar23;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  ulonglong uVar31;
  longlong lVar32;
  ulonglong uVar33;
  Spline *pSVar34;
  ushort uVar35;
  MobyInstance *pMVar36;
  ulonglong unaff_r19;
  longlong lVar37;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  longlong lVar38;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar39;
  ulonglong unaff_r30;
  ulonglong uVar40;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar41;
  double dVar42;
  double dVar43;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar44;
  ulonglong in_f30;
  double dVar45;
  ulonglong in_f31;
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  
  lVar21 = (longlong)(int)moby;
  uVar20 = ZEXT48(&stack0x00000000);
  lVar1 = uVar20 - 0x1c0;
  puVar12 = (ulonglong *)lVar1;
  *puVar12 = uVar20;
  puVar12[0x3a] = in_LR;
  puVar12[0x32] = in_f26;
  puVar12[0x33] = in_f27;
  puVar12[0x34] = in_f28;
  puVar12[0x35] = in_f29;
  puVar12[0x36] = in_f30;
  puVar12[0x37] = in_f31;
  puVar12[0x31] = unaff_r31;
  puVar12[0x2e] = unaff_r28;
  puVar12[0x29] = unaff_r23;
  fVar18 = DAT_00857448;
  fVar2 = (moby->pos).y - GameCamera.posY;
  fVar13 = (moby->pos).x - GameCamera.posX;
  dVar45 = 1.0;
  fVar14 = (moby->pos).z - GameCamera.posZ;
  fVar17 = 1.0 - DAT_00857440;
  fVar16 = DAT_00857444 - DAT_00857448;
  puVar12[0x2f] = unaff_r29;
  puVar12[0x30] = unaff_r30;
  iVar39 = 0;
  pvVar6 = moby->pVar;
  uVar40 = ZEXT48(pvVar6);
  fVar17 = fVar17 / fVar16;
  puVar12[0x2d] = unaff_r27;
  puVar12[0x2c] = unaff_r26;
  puVar12[0x2b] = unaff_r25;
  puVar12[0x2a] = unaff_r24;
  puVar12[0x28] = unaff_r22;
  puVar12[0x27] = unaff_r21;
  puVar12[0x26] = unaff_r20;
  puVar12[0x25] = unaff_r19;
  dVar46 = (double)(-(fVar17 * SQRT(fVar14 * fVar14 + fVar13 * fVar13 + fVar2 * fVar2)) +
                   (1.0 - -(fVar17 * fVar18)));
  iVar24 = mobyutil::MB_damage(lVar21,0x800000,0);
  moby->damage = -1;
  if (iVar24 != 0) {
    mobyutil::MB_UnlockSkillPoint(0);
    fastfunc::FastVecSub(uVar20 - 0xf0,uVar40 + 0xd0,uVar40 + 0xe0);
    *(undefined4 *)(puVar12 + 0x18) = *(undefined4 *)(puVar12 + 0x1a);
    *(undefined4 *)((int)puVar12 + 0xc4) = *(undefined4 *)((int)puVar12 + 0xd4);
    *(undefined4 *)(puVar12 + 0x19) = *(undefined4 *)(puVar12 + 0x1b);
    *(undefined4 *)((int)puVar12 + 0xcc) = *(undefined4 *)((int)puVar12 + 0xdc);
    dVar45 = 2.0;
    puVar12[0x12] = 1;
    puVar12[0x14] = 1;
    puVar12[0x15] = 1;
    puVar12[0x16] = 0xffffffffffffffff;
    puVar12[0x17] = 0;
    mobyutil::MB_genericExplosion
              (0,0,0x4010000000000000,0x4000000000000000,0x40f86a0000000000,0x4008000000000000,
               0x402e000000000000,lVar21,uVar20 - 0x100,lVar21 + 0x10,1,0xffffffffffffffff,0x14,3,4)
    ;
    FUN_0028e510((double)(float)(dVar46 * dVar45),lVar21,uVar20 - 0x100);
    do {
      iVar24 = *(int *)((int)uVar40 + 0x140);
      if (iVar24 != -1) {
        mobyfunc::DeleteMoby(MobyInstance + iVar24);
      }
      iVar39 = iVar39 + 1;
      uVar40 = uVar40 + 4;
    } while (iVar39 < 4);
    mobyfunc::DeleteMoby(moby);
    return;
  }
  do {
    if (moby->state == '\0') {
      if (*(int *)((int)pvVar6 + 0x74) == -1) {
        uVar25 = (int)moby - (int)MobyInstance;
        puVar12[0x22] =
             (longlong)(int)(((int)uVar25 >> 8) + (uint)((int)uVar25 < 0 && (uVar25 & 0xff) != 0));
        MVar4 = moby->oClass;
        uVar22 = fastfunc::FastDoubleToInt((double)(longlong)puVar12[0x22]);
        libc::printf("WARNING moby class %d instance %d has no path!\n",MVar4,uVar22);
      }
      else {
        pSVar10 = Splines[*(int *)((int)pvVar6 + 0x74)];
        *(float *)((int)pvVar6 + 0xfc) = *(float *)((int)pvVar6 + 0xfc) * 2.0;
        iVar24 = pSVar10->cnt;
        pVVar15 = pSVar10->points + iVar24 + -1;
        fVar2 = pSVar10->points[0].y - pVVar15->y;
        fVar13 = pSVar10->points[0].x - pVVar15->x;
        fVar14 = pSVar10->points[0].z - pVVar15->z;
        if (SQRT(fVar14 * fVar14 + fVar13 * fVar13 + fVar2 * fVar2) < 0.5) {
          iVar24 = iVar24 + -1;
          pSVar10->cnt = iVar24;
        }
        iVar26 = 0;
        iVar28 = 0;
        uVar31 = uVar40;
        pSVar34 = pSVar10;
        if (0 < iVar24) {
          do {
            uVar33 = uVar31;
            if (pSVar34->points[0].w == 1.0) {
              iVar28 = iVar28 + 1;
              uVar33 = uVar31 + 1;
              *(char *)((int)uVar31 + 0x180) = (char)iVar26;
              if (3 < iVar28) break;
              iVar24 = pSVar10->cnt;
            }
            iVar26 = iVar26 + 1;
            uVar31 = uVar33;
            pSVar34 = (Spline *)pSVar34->points;
          } while (iVar26 < iVar24);
        }
        *(undefined2 *)((int)pvVar6 + 0x186) = 0xffff;
        *(undefined4 *)((int)pvVar6 + 0x16c) = 0xffffffff;
        fVar2 = moby->scale;
        *(undefined2 *)((int)pvVar6 + 0x184) = 0;
        *(float *)((int)pvVar6 + 0x178) = fVar2;
        *(undefined4 *)((int)pvVar6 + 0x17c) = *(undefined4 *)((int)pvVar6 + 0xfc);
      }
      moby->updateDistance = -1;
      moby->drawDistance = 0xff;
    }
    if (dVar45 - dVar46 < 0.0) {
      dVar46 = dVar45;
    }
    if (dVar46 - (double)DAT_00857440 < 0.0) {
      dVar46 = (double)DAT_00857440;
    }
    moby->scale = (float)((double)*(float *)((int)pvVar6 + 0x178) * dVar46);
    *(float *)((int)pvVar6 + 0xfc) = (float)((double)*(float *)((int)pvVar6 + 0x17c) * dVar46);
    fVar7 = (moby->pos).z;
    uVar25 = (int)fVar7 >> 0x1f;
    iVar24 = (uVar25 >> 1 ^ (uint)fVar7) - uVar25;
    if (iVar24 < 0x432f0000) {
      if ((iVar24 < 0x42fa0001) || (iVar24 >= 0x432f0000)) {
        if (iVar24 < 0x42fa0001) {
          moby->alpha = -0x80;
        }
      }
      else {
        sVar30 = fastfunc::FastDoubleToInt((double)((175.0 - (moby->pos).z) * 128.0 * 0.02));
        moby->alpha = sVar30;
      }
    }
    else {
      moby->alpha = '\0';
    }
    if (*(int *)((int)pvVar6 + 0x170) == -1) {
      mobyupdate_unsorted::UpdateMoby_a_lot_10(moby);
    }
    else {
      if (moby->state == '\0') {
        mobyupdate_unsorted::UpdateMoby_a_lot_10(moby);
      }
      if ((*(short *)((int)pvVar6 + 0x186) == -1) &&
         (iVar24 = mobyutil::MB_IsPntInCuboid
                             (&g_heroPosition,(longlong)*(int *)((int)pvVar6 + 0x170)), iVar24 != 0)
         ) {
        uVar35 = moby->uid;
        if (((&DAT_00a545c4)[(short)uVar35] != '\0') ||
           ((*(uint *)(&DAT_00a0cd1c +
                      Level * 0x100 + (int)((longlong)((int)(short)uVar35 >> 5) << 2)) &
            1 << (uVar35 & 0x1f)) != 0)) {
          auVar47 = loadVectorLeftIndexed(0x2c,0x415ed8);
          auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
          do {
            iVar24 = *(int *)((int)uVar40 + 0x1f0);
            if ((((iVar24 != -1) &&
                 (pMVar36 = MobyInstance + iVar24, pMVar36 != (MobyInstance *)0x0)) &&
                (pMVar36->oClass == BIRDBOT)) && (pMVar36->state != 0xfd && pMVar36->state != 0xfe))
            {
              auVar48 = ZEXT416(0xffffffff);
              auVar48 = auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60;
              pvVar6 = pMVar36->pVar;
              auVar48 = vectorShiftLeftIntegerWord(auVar48,auVar48);
              *(undefined4 *)((int)pvVar6 + 0x1e8) = 1;
              auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar48 = vectorMultiplyAddFloatingPoint
                                  (auVar49,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 |
                                           auVar47 << 0x60,auVar48);
              auVar48 = vectorConvertToSignedFixedPointWordSaturate(auVar48,0);
              auVar48 = vectorSplatHalfWord(auVar48,1);
              uVar11 = storeVectorElementHalfWordIndexed(auVar48,0x1ec,ZEXT48(pvVar6));
              *(undefined2 *)((int)pvVar6 + 0x1ec) = uVar11;
            }
            iVar39 = iVar39 + 1;
            uVar40 = uVar40 + 4;
          } while (iVar39 < 4);
          mobyfunc::DeleteMoby(moby);
          return;
        }
        iVar24 = *(int *)((int)pvVar6 + 0x174);
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
        if (iVar24 != -1) {
          hero::TransitionMovement(0x72,0);
          camera::SetCameraPosition
                    (&Cuboids[*(int *)((int)pvVar6 + 0x174)].pos,
                     &Cuboids[*(int *)((int)pvVar6 + 0x174)].rot,0,0,0);
          moby->collision = (ushort *)0x0;
          auVar47 = ZEXT416(0xffffffff);
          auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
          draw::LetterBoxOn = 1;
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
          auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
          auVar47 = loadVectorLeftIndexed(0x30,0x415ed8);
          auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar47 = vectorMultiplyAddFloatingPoint
                              (auVar49,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60
                               ,auVar48);
          auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
          auVar47 = vectorSplatHalfWord(auVar47,1);
          uVar11 = storeVectorElementHalfWordIndexed(auVar47,0x186,uVar40);
          *(undefined2 *)((int)pvVar6 + 0x186) = uVar11;
        }
      }
      else {
        if (*(short *)((int)pvVar6 + 0x186) == -1) {
          moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
          return;
        }
        iVar24 = fastfunc::FastDecTimerS16(uVar40 + 0x186);
        if (iVar24 != 0) {
          camera::camera5::Camera_DeactivateMobyDrivenCam(0);
          hero::TransitionMovement(0,1);
          uVar35 = moby->uid;
          iVar39 = (int)((longlong)((int)(short)uVar35 >> 5) << 2);
          draw::LetterBoxOn = 0;
          iVar24 = (int)((longlong)((int)(short)uVar35 >> 5) << 2);
          uVar25 = *(uint *)(&DAT_00a54dd0 + iVar24);
          *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar39) =
               *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar39) | 1 << (uVar35 & 0x1f);
          *(uint *)(&DAT_00a54dd0 + iVar24) = uVar25 | 1 << (uVar35 & 0x1f);
          mobyfunc::DeleteMoby(moby);
          return;
        }
        sVar5 = *(short *)((int)pvVar6 + 0x186);
        auVar47 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        puVar12[0x22] = (longlong)(int)(animationSpeed * 60.5);
        pMVar36 = MobyInstance;
        if ((int)sVar5 == *(int *)((int)puVar12 + 0x114)) {
          auVar48 = ZEXT416(0xffffffff);
          auVar48 = auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60;
          auVar50 = loadVectorLeftIndexed(0x2c,0x415ed8);
          auVar49 = vectorShiftLeftIntegerWord(auVar48,auVar48);
          iVar24 = 0;
          auVar48 = auVar50 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar47 = vectorMultiplyAddFloatingPoint
                              (auVar47,auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60
                               ,auVar49);
          auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
          auVar47 = vectorSplatHalfWord(auVar47,1);
          uVar31 = uVar40;
          do {
            iVar28 = *(int *)((int)uVar31 + 0x1f0);
            if ((iVar28 != -1) && (pMVar36[iVar28].oClass == BIRDBOT)) {
              pvVar8 = pMVar36[iVar28].pVar;
              *(undefined4 *)((int)pvVar8 + 0x1e8) = 1;
              uVar11 = storeVectorElementHalfWordIndexed(auVar47,0x1ec,ZEXT48(pvVar8));
              *(undefined2 *)((int)pvVar8 + 0x1ec) = uVar11;
            }
            iVar24 = iVar24 + 1;
            uVar31 = uVar31 + 4;
          } while (iVar24 < 4);
        }
        mobyupdate_unsorted::UpdateMoby_a_lot_10(moby);
      }
    }
    iVar24 = *(int *)((int)pvVar6 + 0x16c);
    iVar28 = *(int *)((int)pvVar6 + 0x60);
    moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
    *(undefined1 *)((int)pvVar6 + 0x2b) = 1;
    *(undefined1 *)((int)pvVar6 + 0x2c) = 0x2f;
    if (iVar24 != iVar28) {
      lVar23 = ((LZCOUNT((uint)*(byte *)((int)pvVar6 + 0x180) - iVar28) << 0x3a) >> 0x3f & 1U) - 1;
      lVar23 = lVar23 + ((LZCOUNT((uint)*(byte *)((int)pvVar6 + 0x181) - iVar28) << 0x3a) >> 0x3f &
                        1U - lVar23);
      lVar23 = lVar23 + ((LZCOUNT((uint)*(byte *)((int)pvVar6 + 0x182) - iVar28) << 0x3a) >> 0x3f &
                        2U - lVar23);
      lVar23 = lVar23 + ((LZCOUNT((uint)*(byte *)((int)pvVar6 + 0x183) - iVar28) << 0x3a) >> 0x3f &
                        3U - lVar23);
      iVar24 = (int)lVar23;
      if (iVar24 != -1) {
        *(undefined4 *)(puVar12 + 0x1e) = 0xffffffff;
        *(undefined4 *)((int)puVar12 + 0xf4) = 0xffffffff;
        *(undefined4 *)(puVar12 + 0x1f) = 0xffffffff;
        lVar38 = 0;
        *(undefined4 *)((int)puVar12 + 0xfc) = 0xffffffff;
        *(undefined4 *)(puVar12 + 0x20) = 0xffffffff;
        iVar28 = 0;
        *(undefined4 *)((int)puVar12 + 0x104) = 0xffffffff;
        uVar31 = lVar23 * 0x10 + uVar40 + 400 & 0xffffffff;
        *(undefined4 *)(puVar12 + 0x21) = 0xffffffff;
        *(undefined4 *)((int)puVar12 + 0x10c) = 0xffffffff;
        do {
          iVar26 = *(int *)uVar31;
          if (iVar26 != -1) {
            iVar27 = (int)(lVar38 << 2);
            lVar38 = (longlong)((int)lVar38 + 1);
            *(int *)((int)puVar12 + iVar27 + 0xf0) = iVar26;
            *(int *)((int)puVar12 + iVar27 + 0x100) = iVar26;
          }
          iVar28 = iVar28 + 1;
          uVar31 = uVar31 + 4;
        } while (iVar28 < 4);
        iVar28 = (int)lVar38;
        if (iVar28 == 0) {
          return;
        }
        iVar26 = mobyutil::MB_IsPntInCuboid
                           ((Vec4 *)&GameCamera.posX,(longlong)*(int *)((int)pvVar6 + 0x188));
        if (iVar26 != 0) {
          return;
        }
        lVar37 = lVar38 + -1;
        lVar23 = lVar38;
        if (-1 < (int)lVar37) {
          uVar31 = lVar37 * 4 + lVar1 & 0xffffffff;
          do {
            iVar26 = collproc::CollLine(0x951500,&Cuboids[*(int *)((int)uVar31 + 0xf0)].pos,0x86,
                                        lVar21,0);
            if ((iVar26 != 0) &&
               ((CollOutput.pMoby == (MobyInstance *)0x0 || (CollOutput.pMoby != moby)))) {
              *(undefined4 *)((int)puVar12 + (int)(lVar37 << 2) + 0x100) = 0xffffffff;
              lVar23 = (longlong)(iVar28 + -1);
              break;
            }
            lVar37 = lVar37 + -1;
            uVar31 = uVar31 - 4;
          } while (-1 < (int)lVar37);
        }
        if (((int)lVar23 != 0) &&
           (iVar26 = 0, lVar37 = lVar1, lVar32 = lVar1, lVar38 = lVar23, 0 < iVar28)) {
          do {
            iVar27 = *(int *)((int)lVar37 + 0x100);
            lVar23 = lVar32;
            if (iVar27 != -1) {
              lVar23 = lVar32 + 4;
              *(int *)((int)lVar32 + 0xf0) = iVar27;
            }
            iVar26 = iVar26 + 1;
            lVar37 = lVar37 + 4;
            lVar32 = lVar23;
          } while (iVar26 < iVar28);
        }
        if ((int)lVar38 != 0) {
          lVar23 = mobyutil::MB_randInt(lVar38);
          uVar35 = *(ushort *)((int)pvVar6 + 0x184) ^ 1;
          uVar25 = *(uint *)((int)puVar12 + (int)(lVar23 << 2) + 0xf0);
          *(ushort *)((int)pvVar6 + 0x184) = uVar35;
          mobyfunc::GetBonePosition(lVar21,uVar35,uVar20 - 0xe0);
          iVar28 = (int)(((ulonglong)uVar25 & 0x1ffffff) << 7);
          fVar2 = *(float *)((int)&(Cuboids->pos).y + iVar28) - *(float *)((int)puVar12 + 0xe4);
          fVar13 = *(float *)((int)&(Cuboids->pos).x + iVar28) - *(float *)(puVar12 + 0x1c);
          fVar14 = *(float *)((int)&(Cuboids->pos).z + iVar28) - *(float *)(puVar12 + 0x1d);
          dVar42 = 0.0;
          dVar44 = (double)*(float *)((int)&(Cuboids->pos).w + iVar28);
          fVar16 = SQRT(fVar14 * fVar14 + fVar13 * fVar13 + fVar2 * fVar2);
          fVar17 = (mobyutil::g_FrameTime * 160.0) / fVar16;
          dVar41 = dVar42;
          if (0.0 - fVar16 < 0.0) {
            dVar41 = (double)(fVar14 * fVar17);
          }
          dVar43 = dVar42;
          if (0.0 - fVar16 < 0.0) {
            dVar43 = (double)(fVar13 * fVar17);
          }
          if (0.0 - fVar16 < 0.0) {
            dVar42 = (double)(fVar2 * fVar17);
          }
          if (fVar16 - 0.0 < 0.0) {
            dVar41 = (double)(fVar14 * fVar17);
          }
          if (fVar16 - 0.0 < 0.0) {
            dVar43 = (double)(fVar13 * fVar17);
          }
          if (fVar16 - 0.0 < 0.0) {
            dVar42 = (double)(fVar2 * fVar17);
          }
          iVar27 = mobyutil::MB_IsPntInCuboid
                             (&g_heroPosition,(longlong)*(int *)((int)pvVar6 + 0x18c));
          pCVar19 = Cuboids;
          *(undefined4 *)(puVar12 + 8) = *(undefined4 *)(puVar12 + 0x1c);
          *(undefined4 *)(puVar12 + 9) = *(undefined4 *)(puVar12 + 0x1d);
          *(float *)(puVar12 + 10) = (float)dVar43;
          iVar26 = *(int *)((int)pvVar6 + 0x170);
          *(float *)(puVar12 + 0xb) = (float)dVar41;
          *(undefined4 *)(puVar12 + 0xc) = *(undefined4 *)((int)&(pCVar19->pos).x + iVar28);
          *(undefined4 *)(puVar12 + 0xd) = *(undefined4 *)((int)&(pCVar19->pos).z + iVar28);
          *(undefined4 *)((int)puVar12 + 0x44) = *(undefined4 *)((int)puVar12 + 0xe4);
          *(undefined4 *)((int)puVar12 + 0x4c) = *(undefined4 *)((int)puVar12 + 0xec);
          *(float *)((int)puVar12 + 0x54) = (float)dVar42;
          *(float *)((int)puVar12 + 0x5c) = (float)dVar44;
          *(undefined4 *)((int)puVar12 + 100) = *(undefined4 *)((int)&(pCVar19->pos).y + iVar28);
          uVar3 = *(undefined4 *)((int)&(pCVar19->pos).w + iVar28);
          puVar12[0xe] = (longlong)iVar27;
          *(undefined4 *)((int)puVar12 + 0x6c) = uVar3;
          puVar12[0xf] = (ulonglong)(LZCOUNT(iVar26 + 1) << 0x20) >> 0x25 ^ 1;
          iVar28 = M686_00414688(lVar21,puVar12[0xc],puVar12[8],puVar12[9],puVar12[10],puVar12[0xb],
                                 puVar12[0xc],puVar12[0xd]);
          if (iVar28 != 0) {
            iVar28 = *(int *)(iVar28 + 0x78);
            iVar26 = 0;
            iVar27 = 0;
            *(uint *)((int)pvVar6 + 0x16c) = (uint)*(byte *)((int)pvVar6 + iVar24 + 0x180);
            uVar31 = uVar40;
            do {
              iVar24 = *(int *)((int)uVar31 + 0x1d0);
              if ((iVar24 != -1) && (MobyInstance[iVar24].oClass == 700)) {
                piVar9 = (int *)MobyInstance[iVar24].pVar;
                iVar24 = iVar28;
                if (((*(short *)(piVar9 + 1) == 0) &&
                    (((*piVar9 == 0 && (iVar29 = mobyutil::MB_randInt(100), iVar29 < 100)) &&
                     (iVar29 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar9[2]),
                     iVar29 != 0)))) &&
                   (iVar29 = mobyutil::MB_IsPntInCuboid
                                       ((Vec4 *)&GameCamera.posX,(longlong)piVar9[2]), iVar29 != 0))
                {
                  iVar24 = iVar28 + 4;
                  iVar27 = iVar27 + 1;
                  *(undefined4 *)(iVar28 + 0x20) = *(undefined4 *)((int)uVar31 + 0x1d0);
                }
                iVar28 = iVar24;
                if (3 < iVar27) break;
              }
              iVar26 = iVar26 + 1;
              uVar31 = uVar31 + 4;
            } while (iVar26 < 8);
          }
        }
      }
    }
    fVar2 = animationSpeed;
    sVar5 = *(short *)((int)pvVar6 + 0x186);
    puVar12[0x22] = (longlong)(int)(animationSpeed * 510.5);
    puVar12[0x22] = (longlong)(int)(fVar2 * 120.5);
    if ((int)sVar5 <= *(int *)((int)puVar12 + 0x114) - *(int *)((int)puVar12 + 0x114)) {
      return;
    }
  } while( true );
}



//==== 00416c74  ns=mobyupdate_helpers  size=0x14
// sig: undefined M688_00416c74(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M688_00416c74(void)

{
  DAT_00857498 = 0x10000;
  return;
}



//==== 00416c90  ns=mobyupdate_helpers  size=0x1e8
// sig: undefined M688_00416c90(void)
// callers(1): 00417370 mobyupdate_unsorted::UpdateMoby_689
// callees(0): 

void mobyupdate_helpers::M688_00416c90(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  MobyInstance *pMVar12;
  
  uVar6 = (int)*(uint *)(param_1 + 0x10) >> 0x1f;
  uVar7 = (int)*(uint *)(param_1 + 0x14) >> 0x1f;
  fVar1 = 10.0;
  uVar8 = (int)*(uint *)(param_1 + 0x18) >> 0x1f;
  fVar2 = *(float *)(param_2 + 0x10);
  fVar3 = *(float *)(param_2 + 0x14);
  fVar4 = *(float *)(param_2 + 0x18);
  g_heroPosition.w = *(float *)(param_1 + 0x1c);
  fVar9 = *(float *)(param_1 + 0x10);
  if ((int)((uVar6 >> 1 ^ *(uint *)(param_1 + 0x10)) - uVar6) < 0x41200000) {
    *(undefined4 *)(param_1 + 0x10) = 0x41200000;
    fVar9 = fVar1;
  }
  fVar5 = 1013.0;
  if (1013.0 < fVar9) {
    *(undefined4 *)(param_1 + 0x10) = 0x447d4000;
    fVar9 = fVar5;
  }
  fVar11 = *(float *)(param_1 + 0x14);
  if ((int)((uVar7 >> 1 ^ *(uint *)(param_1 + 0x14)) - uVar7) < 0x41200000) {
    *(undefined4 *)(param_1 + 0x14) = 0x41200000;
    fVar11 = fVar1;
  }
  if (1013.0 < fVar11) {
    *(undefined4 *)(param_1 + 0x14) = 0x447d4000;
    fVar11 = fVar5;
  }
  fVar10 = *(float *)(param_1 + 0x18);
  if ((int)((uVar8 >> 1 ^ *(uint *)(param_1 + 0x18)) - uVar8) < 0x41200000) {
    *(undefined4 *)(param_1 + 0x18) = 0x41200000;
    fVar10 = fVar1;
  }
  if (1013.0 < fVar10) {
    *(undefined4 *)(param_1 + 0x18) = 0x447d4000;
    fVar10 = fVar5;
  }
  pMVar12 = g_heroMobyPtr;
  g_heroPosition.x =
       fVar9 - (*(float *)(param_1 + 0xe0) * fVar4 +
               *(float *)(param_1 + 0xc0) * fVar2 + *(float *)(param_1 + 0xd0) * fVar3);
  g_heroPosition.y =
       fVar11 - (*(float *)(param_1 + 0xe4) * fVar4 +
                *(float *)(param_1 + 0xc4) * fVar2 + *(float *)(param_1 + 0xd4) * fVar3);
  g_heroPosition.z =
       fVar10 - (*(float *)(param_1 + 0xe8) * fVar4 +
                *(float *)(param_1 + 200) * fVar2 + *(float *)(param_1 + 0xd8) * fVar3);
  (g_heroMobyPtr->rotation).x = *(f32 *)(param_1 + 0x40);
  (pMVar12->rotation).y = *(f32 *)(param_1 + 0x44);
  (pMVar12->rotation).z = *(f32 *)(param_1 + 0x48);
  (pMVar12->rotation).w = *(f32 *)(param_1 + 0x4c);
  g_heroRotation.x = *(float *)(param_1 + 0x40);
  g_heroRotation.y = *(float *)(param_1 + 0x44);
  g_heroRotation.z = *(float *)(param_1 + 0x48);
  g_heroRotation.w = *(float *)(param_1 + 0x4c);
  return;
}



//==== 00416e80  ns=mobyupdate_helpers  size=0x3a0
// sig: undefined M688_00416e80(void)
// callers(1): 00417370 mobyupdate_unsorted::UpdateMoby_689
// callees(3): 00109b40 mobyutil::AccelDelt; 0010a050 mobyutil::AccelDeltAng; 005025e0 fastfunc::FastDiffRots

void mobyupdate_helpers::M688_00416e80(double param_1,int param_2,int param_3)

{
  float fVar1;
  byte bVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  bVar2 = *(byte *)(param_2 + 0x20);
  fVar1 = DAT_00857530;
  if (bVar2 == 7) {
    fVar1 = DAT_00857540;
  }
  dVar6 = (double)(float)((double)((ANALOG_STICKS.z - DAT_00964a54) + DAT_00964a50) * param_1);
  dVar5 = (double)(float)((double)((ANALOG_STICKS.w - DAT_00964a58) + DAT_00964a5c) * param_1);
  dVar7 = param_1;
  if ((dVar6 <= param_1) && (dVar7 = dVar6, dVar6 < -param_1)) {
    dVar7 = -param_1;
  }
  if ((dVar5 <= param_1) && (dVar6 = -param_1, param_1 = dVar5, dVar5 < dVar6)) {
    param_1 = dVar6;
  }
  fVar3 = DAT_00857520;
  if ((g_downButtons & L3) != 0) {
    dVar7 = (double)(DAT_00857568 * (float)(dVar7 / (double)DAT_00857560));
    param_1 = (double)(DAT_00857564 * (float)(param_1 / (double)DAT_00857558));
    fVar1 = DAT_00857534;
    fVar3 = DAT_00857524;
  }
  dVar5 = (double)fVar3;
  if ((bVar2 != 6) && (4 < bVar2)) {
    if (bVar2 == 7) {
      mobyutil::AccelDelt((float)param_1,DAT_00857538 * DAT_0071f40c,DAT_0085753c * DAT_0071f40c,
                          DAT_0071f408 * fVar1,(float *)(param_3 + 0x40),0x850000,
                          (float *)(param_3 + 0x24));
      dVar4 = 0.01745329238474369;
      dVar6 = (double)fastfunc::FastDiffRots
                                ((double)*(float *)(param_2 + 0x44),
                                 (double)(DAT_0085755c * 0.017453292 * mobyutil::g_FrameTime *
                                         *(float *)(param_3 + 0x40)));
      *(float *)(param_2 + 0x44) = (float)dVar6;
      fVar1 = (float)((double)DAT_008574f8 * dVar4);
      if (dVar6 <= (double)fVar1) {
        fVar1 = (float)((double)DAT_008574f8 * -0.01745329238474369);
        if (dVar6 < (double)fVar1) {
          *(float *)(param_2 + 0x44) = fVar1;
        }
      }
      else {
        *(float *)(param_2 + 0x44) = fVar1;
      }
    }
    else {
      mobyutil::AccelDelt((float)param_1,DAT_00857528 * DAT_0071f40c,DAT_0085752c * DAT_0071f40c,
                          DAT_0071f408 * fVar1,(float *)(param_3 + 0x40),0x850000,
                          (float *)(param_3 + 0x24));
      dVar4 = 0.01745329238474369;
      dVar6 = (double)fastfunc::FastDiffRots
                                ((double)*(float *)(param_2 + 0x44),
                                 (double)(DAT_00857558 * 0.017453292 * mobyutil::g_FrameTime *
                                         *(float *)(param_3 + 0x40)));
      *(float *)(param_2 + 0x44) = (float)dVar6;
      fVar1 = (float)((double)DAT_008574f4 * dVar4);
      if (dVar6 <= (double)fVar1) {
        fVar1 = (float)((double)DAT_008574f4 * -0.01745329238474369);
        if (dVar6 < (double)fVar1) {
          *(float *)(param_2 + 0x44) = fVar1;
        }
      }
      else {
        *(float *)(param_2 + 0x44) = fVar1;
      }
    }
  }
  mobyutil::AccelDelt((float)dVar7,DAT_00857518 * DAT_0071f40c,DAT_0085751c * DAT_0071f40c,
                      (float)((double)DAT_0071f408 * dVar5),(float *)(param_3 + 0x3c),0x850000,
                      (float *)(param_3 + 0x28));
  mobyutil::AccelDeltAng
            ((double)(*(float *)(param_3 + 0x3c) * DAT_00857548),(double)DAT_0085754c,
             (double)DAT_00857550,(double)DAT_00857554,param_2 + 0x40,&DAT_00850000,param_3 + 0x20);
  dVar7 = (double)fastfunc::FastDiffRots
                            ((double)*(float *)(param_2 + 0x48),
                             (double)(DAT_00857560 * 0.017453292 * mobyutil::g_FrameTime *
                                     *(float *)(param_3 + 0x3c)));
  *(float *)(param_2 + 0x48) = (float)dVar7;
  return;
}



//==== 00417220  ns=mobyupdate_helpers  size=0xf4
// sig: undefined M688_00417220(void)
// callers(0): 
// callees(3): 0006a634 draw::DrawRectOverlay; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M688_00417220(int param_1)

{
  int iVar1;
  double dVar2;
  
  iVar1 = *(int *)(param_1 + 0x78);
  dVar2 = (double)fastfunc::FastIntToDouble((longlong)draw::g_FrameBufHeight + -0x40);
  dVar2 = (double)((float)(dVar2 * -(double)(DAT_0085750c * mobyutil::g_FrameTime -
                                            *(float *)(iVar1 + 0x34))) /
                  (DAT_00857514 * mobyutil::g_FrameTime - DAT_0085750c * mobyutil::g_FrameTime));
  draw::DrawRectOverlay
            (0x1e,draw::g_FrameBufHeight + -0x1e,draw::g_FrameBufWidth + -0x32,
             draw::g_FrameBufWidth + -0x1e,0x60800000);
  iVar1 = fastfunc::FastDoubleToInt(dVar2);
  draw::DrawRectOverlay
            ((draw::g_FrameBufHeight - iVar1) + -0x20,draw::g_FrameBufHeight + -0x20,
             draw::g_FrameBufWidth + -0x30,draw::g_FrameBufWidth + -0x20,0x40000080);
  return;
}



//==== 00417370  ns=mobyupdate_unsorted  size=0x13b4
// sig: undefined UpdateMoby_689(MobyInstance * moby)
// callers(0): 
// callees(16): 0002f414 camera0::Cam0_SetCamOfsZ; 00059e20 collproc::CollSphere; 0006d720 RegisterFuncForMoby; 00083950 hero::HandleHeroDeath; 00085300 hero::Hero_TransAnim; 000b72b0 hero::TransitionMovement; 000f1114 mobyfunc::GetBonePosition; 000fddc0 mobyutil::MB_SetAnimation; 000fe610 mobyutil::MB_SphericalToVector; 00126f50 partupd::SpawnPart_23; 00416c90 mobyupdate_helpers::M688_00416c90; 00416e80 mobyupdate_helpers::M688_00416e80; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble
// strings: 004186c0: '=@0`0a' (raw)

/* Moby 689 */

void mobyupdate_unsorted::UpdateMoby_689(MobyInstance *moby)

{
  int iVar1;
  byte bVar2;
  float fVar3;
  float *out;
  f32 fVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  MobyInstance *pMVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined4 uVar27;
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
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 auStack_60 [16];
  longlong local_50;
  
  pMVar15 = g_heroMobyPtr;
  lVar16 = (longlong)(int)moby;
  bVar2 = moby->state;
  out = (float *)moby->pVar;
  if (bVar2 < 5) {
    if (bVar2 < 2) {
      if (bVar2 == 0) {
        (moby->pos).z = (moby->pos).z + DAT_008574bc;
        mobyfunc::GetBonePosition(pMVar15,0xb,out + 4);
        out[4] = out[4] - g_heroPosition.x;
        out[5] = out[5] - g_heroPosition.y;
        out[6] = out[6] - g_heroPosition.z;
        if (moby->animationId != '\0') {
          mobyutil::MB_SetAnimation(lVar16,0,0,10);
        }
        moby->state = '\x01';
      }
      else {
        dVar20 = (double)fastfunc::FastWrapRot
                                   ((moby->rotation).z,
                                    DAT_008574c0 * 0.017453292 * mobyutil::g_FrameTime);
        (moby->rotation).z = (float)dVar20;
        fVar3 = (moby->pos).y - g_heroPosition.y;
        fVar8 = (moby->pos).x - g_heroPosition.x;
        if (SQRT(fVar8 * fVar8 + fVar3 * fVar3) < DAT_008574c4) {
          if (moby->animationId != '\0') {
            mobyutil::MB_SetAnimation(lVar16,0,0,10);
          }
          moby->state = '\x02';
        }
      }
    }
    else if (bVar2 < 3) {
      puVar6 = (undefined4 *)((uint)&(g_heroMobyPtr->transform).v1 & 0xfffffff0);
      uVar30 = puVar6[3];
      uVar29 = puVar6[2];
      uVar28 = puVar6[1];
      uVar27 = *puVar6;
      puVar6 = (undefined4 *)((uint)&(g_heroMobyPtr->transform).v2 & 0xfffffff0);
      uVar34 = puVar6[3];
      uVar33 = puVar6[2];
      uVar32 = puVar6[1];
      uVar31 = *puVar6;
      puVar6 = (undefined4 *)((uint)&g_heroMobyPtr->transform & 0xfffffff0);
      uVar37 = puVar6[2];
      uVar36 = puVar6[1];
      uVar35 = *puVar6;
      puVar7 = (undefined4 *)((uint)&moby->transform & 0xfffffff0);
      puVar7[3] = puVar6[3];
      puVar7[2] = uVar37;
      puVar7[1] = uVar36;
      *puVar7 = uVar35;
      puVar6 = (undefined4 *)((uint)&(moby->transform).v1 & 0xfffffff0);
      puVar6[3] = uVar30;
      puVar6[2] = uVar29;
      puVar6[1] = uVar28;
      *puVar6 = uVar27;
      puVar6 = (undefined4 *)((uint)&(moby->transform).v2 & 0xfffffff0);
      puVar6[3] = uVar34;
      puVar6[2] = uVar33;
      puVar6[1] = uVar32;
      *puVar6 = uVar31;
      pMVar15 = g_heroMobyPtr;
      (moby->rotation).x = (g_heroMobyPtr->rotation).x;
      (moby->rotation).y = (pMVar15->rotation).y;
      (moby->rotation).z = (pMVar15->rotation).z;
      (moby->rotation).w = (pMVar15->rotation).w;
      mobyfunc::GetBonePosition(pMVar15,0xb,lVar16 + 0x10);
      if ((g_buttonsPressedThisFrame & TRIANGLE) == 0) {
        if (((g_buttonsPressedThisFrame & CIRCLE) != 0) && (g_framesNotGrounded != 0)) {
          out[0xc] = DAT_008574cc;
          hero::TransitionMovement(0x32,1);
          g_heroMobyPtr->collisionMesh = (float *)0xffffffff;
          (moby->rotation).y = DAT_008574dc * 0.017453292;
          fVar3 = mobyutil::g_FrameTime * 5.0;
          *(undefined1 *)out = 0;
          *(undefined1 *)((int)out + 1) = 0;
          *(undefined1 *)((int)out + 2) = 0;
          *(undefined1 *)((int)out + 3) = 0;
          *(undefined1 *)(out + 1) = 0;
          *(undefined1 *)((int)out + 5) = 0;
          *(undefined1 *)((int)out + 6) = 0;
          *(undefined1 *)((int)out + 7) = 0;
          *(undefined1 *)(out + 2) = 0;
          *(undefined1 *)((int)out + 9) = 0;
          *(undefined1 *)((int)out + 10) = 0;
          *(undefined1 *)((int)out + 0xb) = 0;
          *(undefined1 *)(out + 3) = 0;
          *(undefined1 *)((int)out + 0xd) = 0;
          *(undefined1 *)((int)out + 0xe) = 0;
          *(undefined1 *)((int)out + 0xf) = 0;
          out[0xd] = fVar3 * 0.72;
          uVar17 = (ulonglong)moby->animationId;
          if (moby->animationId != 1) {
            uVar17 = mobyutil::MB_SetAnimation(lVar16,1,0,10);
          }
          out[0xe] = (moby->pos).z;
          camera0::Cam0_SetCamOfsZ(0x3fc99999a0000000,0x3f747ae140000000,uVar17,0);
          out[0x11] = 0.0;
          DAT_010cc8d4 = DAT_0071d508;
          DAT_010cc8d8 = DAT_0071d50c;
          DAT_0071d508 = DAT_008575b0;
          DAT_0071d50c = DAT_008575b4;
          moby->state = '\x04';
        }
      }
      else {
        if (moby->animationId != '\0') {
          mobyutil::MB_SetAnimation(lVar16,0,0,10);
        }
        moby->state = '\x03';
      }
    }
    else if (bVar2 < 4) {
      fVar3 = (moby->pos).y - g_heroPosition.y;
      fVar8 = (moby->pos).x - g_heroPosition.x;
      if (DAT_008574c8 < SQRT(fVar8 * fVar8 + fVar3 * fVar3)) {
        if (moby->animationId != '\0') {
          mobyutil::MB_SetAnimation(lVar16,0,0,10);
        }
        moby->state = '\x01';
      }
    }
    else {
      fVar3 = (moby->rotation).y;
      fVar8 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar8 = fVar3;
      }
      fVar9 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar8 < 0.0) {
        fVar9 = fVar8;
      }
      fVar3 = fVar9 * fVar9;
      fVar8 = fVar3 * fVar3 * fVar9;
      fVar10 = fVar3 * fVar8;
      out[2] = -((fVar3 * fVar10 * 2.601887e-06 +
                 fVar10 * -0.0001980741 + fVar8 * 0.0083330255 + fVar3 * fVar9 * -0.16666657 + fVar9
                 ) * out[0xd]);
      fVar3 = (moby->rotation).y + 1.5707963;
      fVar8 = (moby->rotation).z + 1.5707963;
      fVar9 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar9 = fVar3;
      }
      fVar10 = 3.1415925 - fVar8;
      if (fVar8 - (3.1415925 - fVar8) < 0.0) {
        fVar10 = fVar8;
      }
      fVar13 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar9 < 0.0) {
        fVar13 = fVar9;
      }
      fVar3 = -3.1415925 - fVar8;
      if ((-3.1415925 - fVar8) - fVar10 < 0.0) {
        fVar3 = fVar10;
      }
      fVar14 = fVar13 * fVar13;
      fVar8 = fVar3 * fVar3;
      fVar12 = fVar14 * fVar14 * fVar13;
      fVar9 = fVar8 * fVar8 * fVar3;
      fVar11 = fVar14 * fVar12;
      fVar10 = fVar8 * fVar9;
      fVar13 = out[0xd] *
               (fVar14 * fVar11 * 2.601887e-06 +
               fVar11 * -0.0001980741 +
               fVar12 * 0.0083330255 + fVar14 * fVar13 * -0.16666657 + fVar13);
      fVar8 = fVar13 * (fVar8 * fVar10 * 2.601887e-06 +
                       fVar10 * -0.0001980741 +
                       fVar9 * 0.0083330255 + fVar8 * fVar3 * -0.16666657 + fVar3);
      *out = fVar8;
      iVar19 = DAT_008574d0;
      fVar3 = (moby->rotation).z;
      lVar18 = (longlong)DAT_008574d0;
      fVar9 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar9 = fVar3;
      }
      fVar10 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar9 < 0.0) {
        fVar10 = fVar9;
      }
      fVar3 = fVar10 * fVar10;
      fVar9 = fVar3 * fVar3 * fVar10;
      fVar11 = fVar3 * fVar9;
      out[1] = fVar13 * (fVar3 * fVar11 * 2.601887e-06 +
                        fVar11 * -0.0001980741 +
                        fVar9 * 0.0083330255 + fVar3 * fVar10 * -0.16666657 + fVar10);
      dVar20 = 0.5;
      iVar1 = (int)(animationSpeed * (float)((double)lVar18 + 0.5));
      local_50 = (longlong)iVar1;
      if ((int)out[0xc] <= iVar1) {
        iVar19 = (int)(animationSpeed * (float)((double)(longlong)(iVar19 - (int)out[0xc]) + 0.5));
        local_50 = (longlong)iVar19;
        dVar21 = (double)fastfunc::FastIntToDouble(iVar19);
        dVar22 = (double)fastfunc::FastIntToDouble(DAT_008574d0);
        dVar23 = (double)(float)(dVar21 / dVar22);
        out[0x11] = (float)(dVar21 / dVar22);
        dVar21 = 1.0;
        if (dVar23 <= 1.0) {
          if (dVar23 < 0.0) {
            out[0x11] = 0.0;
            dVar23 = 0.0;
          }
        }
        else {
          out[0x11] = 1.0;
          dVar23 = dVar21;
        }
        mobyupdate_helpers::M688_00416e80(dVar23,lVar16,out);
        fVar3 = (float)(dVar21 - (double)out[0x11]);
        *out = *out * fVar3;
        out[1] = out[1] * fVar3;
        out[2] = out[2] * fVar3;
        mobyutil::MB_SphericalToVector(out[0xd],(moby->rotation).z,-(moby->rotation).y,&local_90);
        fVar3 = out[0x11];
        local_8c = local_8c * fVar3;
        local_90 = local_90 * fVar3;
        local_88 = local_88 * fVar3;
        fVar8 = *out + local_90;
        *out = fVar8;
        out[1] = out[1] + local_8c;
        out[2] = out[2] + local_88;
      }
      (moby->pos).x = (moby->pos).x + fVar8;
      pMVar15 = g_heroMobyPtr;
      (moby->pos).y = (moby->pos).y + out[1];
      (moby->pos).z = (moby->pos).z + out[2];
      iVar19 = collproc::CollSphere((double)DAT_008574e0,lVar16 + 0x10,&DAT_00850000,2,pMVar15);
      if (iVar19 == 0) {
        if (((DAT_00964ae8 & 0x20) == 0) ||
           (iVar19 = (int)(animationSpeed * (float)((double)(longlong)DAT_008574d4 + dVar20)),
           local_50 = (longlong)iVar19, (int)out[0xc] <= iVar19)) {
          mobyupdate_helpers::M688_00416c90(lVar16,out);
          fVar3 = DAT_008574e8 * DAT_0071f418 + out[0xd];
          out[0xd] = fVar3;
          fVar9 = mobyutil::g_FrameTime;
          fVar8 = animationSpeed;
          if (DAT_008574e4 * mobyutil::g_FrameTime < fVar3) {
            out[0xd] = DAT_008574e4 * mobyutil::g_FrameTime;
          }
          dVar23 = 0.01745329238474369;
          iVar19 = (int)(fVar8 * (float)((double)(longlong)((int)DAT_008574cc - DAT_008574d8) +
                                        dVar20));
          local_50 = (longlong)iVar19;
          if ((int)out[0xc] < iVar19) {
            dVar20 = (double)fastfunc::FastDiffRots
                                       ((double)(moby->rotation).y,
                                        (double)(DAT_008574ec * 0.017453292 * fVar9));
            (moby->rotation).y = (float)dVar20;
          }
          if ((int)(moby->rotation).y < 0) {
            (moby->rotation).y = 0.0;
          }
          iVar19 = fastfunc::FastDecTimerS32(out + 0xc);
          if (iVar19 != 0) {
            if (moby->animationId != '\x02') {
              mobyutil::MB_SetAnimation(lVar16,2,0,10);
            }
            hero::Hero_TransAnim(15.0,0x13,0);
            out[8] = 0.0;
            fVar3 = mobyutil::g_FrameTime;
            dVar20 = (double)DAT_008574ec;
            out[10] = 0.0;
            out[9] = -((float)(dVar20 * dVar23) * fVar3);
            moby->state = '\x05';
          }
        }
        else {
          hero::Hero_TransAnim(15.0,0xb,0);
          out[0xc] = 0.0;
          if (moby->animationId != '\x03') {
            mobyutil::MB_SetAnimation(lVar16,3,0,10);
          }
          moby->state = '\b';
        }
      }
      else {
        (moby->pos).x = CollOutput.push.x;
        (moby->pos).y = CollOutput.push.y;
        (moby->pos).z = CollOutput.push.z;
        (moby->pos).w = CollOutput.push.w;
        mobyupdate_helpers::M688_00416c90(lVar16,out);
        out[0xc] = 0.0;
        hero::TransitionMovement(0,1);
        if (moby->animationId != '\0') {
          mobyutil::MB_SetAnimation(lVar16,0,0,10);
        }
        moby->state = '\x02';
      }
    }
  }
  else if (bVar2 < 8) {
    if (bVar2 < 6) {
      dVar20 = 1.0;
      mobyupdate_helpers::M688_00416e80(0x3ff0000000000000,lVar16,out);
      fVar3 = (moby->pos).z;
      if (DAT_00857510 < fVar3 - out[0xe]) {
        dVar21 = (double)((DAT_00857508 + (out[0xe] - fVar3)) / (DAT_00857508 - DAT_00857510));
        dVar23 = dVar20;
        if ((dVar21 <= dVar20) && (dVar23 = dVar21, dVar21 < 0.0)) {
          dVar23 = 0.0;
        }
        fVar8 = DAT_00857514 * mobyutil::g_FrameTime;
        fVar3 = (((float)(dVar20 - dVar23) * (DAT_0085750c * mobyutil::g_FrameTime - fVar8) + fVar8)
                - out[0xd]) * 0.1 + out[0xd];
        out[0xd] = fVar3;
        if (fVar8 < fVar3) {
          out[0xd] = fVar8;
          fVar3 = fVar8;
        }
      }
      else {
        fVar3 = (DAT_00857514 * mobyutil::g_FrameTime - out[0xd]) * 0.1 + out[0xd];
        out[0xd] = fVar3;
      }
      uVar5 = (int)out[0x11] >> 0x1f;
      if ((int)((uVar5 >> 1 ^ (uint)out[0x11]) - uVar5) < 0x3f800000) {
        fVar8 = out[0x11] + DAT_008575ac;
        out[0x11] = fVar8;
        if (dVar20 < (double)fVar8) {
          out[0x11] = 1.0;
        }
        mobyutil::MB_SphericalToVector(fVar3,(moby->rotation).z,-(moby->rotation).y,&local_80);
        dVar23 = (double)out[0x11];
        fVar3 = (float)(dVar20 - dVar23);
        *out = *out * fVar3;
        out[1] = out[1] * fVar3;
        out[2] = out[2] * fVar3;
        local_7c = (float)((double)local_7c * dVar23);
        local_80 = (float)((double)local_80 * dVar23);
        local_78 = (float)((double)local_78 * dVar23);
        fVar3 = *out + local_80;
        *out = fVar3;
        out[1] = out[1] + local_7c;
        out[2] = out[2] + local_78;
      }
      else {
        mobyutil::MB_SphericalToVector(fVar3,(moby->rotation).z,-(moby->rotation).y,out);
        fVar3 = *out;
      }
      (moby->pos).x = (moby->pos).x + fVar3;
      (moby->pos).y = (moby->pos).y + out[1];
      (moby->pos).z = (moby->pos).z + out[2];
      mobyupdate_helpers::M688_00416c90(lVar16,out);
      if (DAT_00857508 < (moby->pos).z - out[0xe]) {
        if (moby->animationId != '\x03') {
          mobyutil::MB_SetAnimation(lVar16,3,0,3);
        }
        hero::Hero_TransAnim(15.0,0x35,0);
        out[0xc] = DAT_0085756c;
        fVar3 = 0.0;
        out[0x10] = 0.0;
        dVar20 = (double)(moby->rotation).y;
        if ((double)(DAT_00857574 * 0.017453292) < dVar20) {
          dVar20 = (double)fastfunc::FastDiffRots((double)(DAT_00857574 * 0.017453292),dVar20);
          dVar23 = (double)fastfunc::FastIntToDouble(DAT_0085756c);
          fVar3 = (float)(dVar20 / dVar23);
        }
        out[0x12] = fVar3;
        moby->state = '\x06';
      }
      iVar19 = collproc::CollSphere
                         ((double)DAT_008574e0,lVar16 + 0x10,&DAT_00850000,2,g_heroMobyPtr);
      if (iVar19 != 0) {
        out[0xc] = 0.0;
        DAT_0071d508 = DAT_010cc8d4;
        DAT_0071d50c = DAT_010cc8d8;
        hero::TransitionMovement(0,1);
        if (moby->animationId != '\0') {
          mobyutil::MB_SetAnimation(lVar16,0,0,10);
        }
        moby->state = '\x02';
      }
    }
    else if (bVar2 < 7) {
      iVar19 = fastfunc::FastDecTimerS32(out + 0xc);
      if (iVar19 != 0) {
        out[0xc] = DAT_00857578;
        moby->state = '\a';
      }
      out[2] = out[2] + -(DAT_00857570 * DAT_0071f418);
      (moby->pos).x = (moby->pos).x + *out;
      (moby->pos).y = (moby->pos).y + out[1];
      (moby->pos).z = (moby->pos).z + out[2];
      out[0xd] = SQRT(out[2] * out[2] + *out * *out + out[1] * out[1]);
      fastfunc::FastIntToDouble(out[0xc]);
      fastfunc::FastIntToDouble(DAT_0085756c);
      uVar24 = 0x3ff0000000000000;
      dVar20 = (double)fastfunc::FastWrapRot((moby->rotation).y,out[0x12]);
      (moby->rotation).y = (float)dVar20;
      mobyupdate_helpers::M688_00416e80(uVar24,lVar16,out);
      mobyupdate_helpers::M688_00416c90(lVar16,out);
      iVar19 = collproc::CollSphere
                         ((double)DAT_008574e0,lVar16 + 0x10,&DAT_00850000,2,g_heroMobyPtr);
      if (iVar19 != 0) {
        DAT_0071d508 = DAT_010cc8d4;
        DAT_0071d50c = DAT_010cc8d8;
        hero::TransitionMovement(0,1);
        if (moby->animationId != '\0') {
          mobyutil::MB_SetAnimation(lVar16,0,0,10);
        }
        moby->state = '\x02';
      }
    }
    else {
      if (((moby->rotation).y <= DAT_010cc8d0 * 0.017453292) ||
         (DAT_00857508 <= (moby->pos).z - out[0xe])) {
        iVar19 = fastfunc::FastDecTimerS32(out + 0xc);
        if (iVar19 != 0) {
          hero::Hero_TransAnim(15.0,0xb,0);
          moby->state = '\b';
        }
      }
      else {
        hero::Hero_TransAnim(15.0,0x13,0);
        if (moby->animationId != '\x02') {
          mobyutil::MB_SetAnimation(lVar16,2,0,10);
        }
        out[0x11] = 0.0;
        moby->state = '\x05';
      }
      out[2] = out[2] + -(DAT_00857570 * DAT_0071f418);
      (moby->pos).x = (moby->pos).x + *out;
      (moby->pos).y = (moby->pos).y + out[1];
      (moby->pos).z = (moby->pos).z + out[2];
      out[0xd] = SQRT(out[2] * out[2] + *out * *out + out[1] * out[1]);
      mobyupdate_helpers::M688_00416e80(0x3ff0000000000000,lVar16,out);
      mobyupdate_helpers::M688_00416c90(lVar16,out);
      iVar19 = collproc::CollSphere
                         ((double)DAT_008574e0,lVar16 + 0x10,&DAT_00850000,2,g_heroMobyPtr);
      if (iVar19 != 0) {
        DAT_0071d508 = DAT_010cc8d4;
        DAT_0071d50c = DAT_010cc8d8;
        out[0xc] = 0.0;
        hero::TransitionMovement(0,1);
        if (moby->animationId != '\0') {
          mobyutil::MB_SetAnimation(lVar16,0,0,10);
        }
        moby->state = '\x02';
      }
    }
  }
  else if (bVar2 < 9) {
    dVar20 = (double)fastfunc::FastWrapRot
                               ((moby->rotation).z,
                                DAT_0085757c * 0.017453292 * mobyutil::g_FrameTime);
    (moby->rotation).z = (float)dVar20;
    out[2] = out[2] + -(DAT_00857570 * DAT_0071f418);
    (moby->pos).x = (moby->pos).x + *out;
    (moby->pos).y = (moby->pos).y + out[1];
    (moby->pos).z = (moby->pos).z + out[2];
    mobyupdate_helpers::M688_00416c90(lVar16,out);
    fVar4 = (moby->pos).z;
    uVar5 = (int)fVar4 >> 0x1f;
    if ((int)((uVar5 >> 1 ^ (uint)fVar4) - uVar5) < 0x41400000) {
      hero::HandleHeroDeath();
    }
    iVar19 = collproc::CollSphere((double)DAT_008574e0,lVar16 + 0x10,&DAT_00850000,2,g_heroMobyPtr);
    if (iVar19 != 0) {
      DAT_0071d508 = DAT_010cc8d4;
      DAT_0071d50c = DAT_010cc8d8;
      out[0xc] = 0.0;
      hero::TransitionMovement(0,1);
      if (moby->animationId != '\0') {
        mobyutil::MB_SetAnimation(lVar16,0,0,10);
      }
      moby->state = '\x02';
    }
  }
  fVar4 = (moby->pos).x;
  uVar5 = (int)fVar4 >> 0x1f;
  fVar3 = 10.0;
  fVar8 = (moby->pos).x;
  if ((int)((uVar5 >> 1 ^ (uint)fVar4) - uVar5) < 0x41200000) {
    (moby->pos).x = 10.0;
    fVar8 = fVar3;
  }
  if (1013.0 < fVar8) {
    (moby->pos).x = 1013.0;
  }
  fVar4 = (moby->pos).y;
  uVar5 = (int)fVar4 >> 0x1f;
  fVar8 = (moby->pos).y;
  if ((int)((uVar5 >> 1 ^ (uint)fVar4) - uVar5) < 0x41200000) {
    (moby->pos).y = 10.0;
    fVar8 = fVar3;
  }
  if (1013.0 < fVar8) {
    (moby->pos).y = 1013.0;
  }
  fVar4 = (moby->pos).z;
  uVar5 = (int)fVar4 >> 0x1f;
  fVar8 = (moby->pos).z;
  if ((int)((uVar5 >> 1 ^ (uint)fVar4) - uVar5) < 0x41200000) {
    (moby->pos).z = 10.0;
    fVar8 = fVar3;
  }
  if (1013.0 < fVar8) {
    (moby->pos).z = 1013.0;
  }
  if (3 < moby->state) {
    RegisterFuncForMoby(&PTR_M688_00417220_0070e0d8,moby);
    local_70 = *out * 0.25;
    local_6c = out[1] * 0.25;
    local_68 = out[2] * 0.25;
    local_64 = out[3];
    iVar19 = 0;
    uVar24 = 0x3ff0000000000000;
    uVar25 = 0x3ff028f5c0000000;
    uVar26 = 0x40dd4c0000000000;
    do {
      mobyfunc::GetBonePosition(lVar16,iVar19,auStack_60);
      fVar3 = 0.0;
      if (5 < moby->state) {
        fVar3 = 0.07;
      }
      partupd::SpawnPart_23((double)fVar3,uVar24,uVar25,uVar26,auStack_60);
      iVar19 = iVar19 + 1;
    } while (iVar19 < 5);
  }
  return;
}



//==== 00418724  ns=mobyupdate_helpers  size=0x14
// sig: undefined M688_00418724(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M688_00418724(void)

{
  DAT_00857604 = 0x10000;
  return;
}



//==== 00418738  ns=mobyupdate_helpers  size=0x4
// sig: undefined M688_00418738(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M688_00418738(void)

{
  return;
}



//==== 0041873c  ns=mobyupdate_helpers  size=0x2a8
// sig: undefined M688_0041873c(void)
// callers(1): 0041b008 mobyupdate_helpers::M688_0041b008
// callees(3): 000685c4 draw::GetEffectTex; 004d6948 idol_draw::ResetPassState; 004d6d00 idol_draw::SetTextureUnitRegs

void mobyupdate_helpers::M688_0041873c
               (double param_1,double param_2,double param_3,longlong param_4,int param_5)

{
  undefined4 uVar1;
  RenderingStep *pRVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong in_r8;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  iVar3 = EffectTexHeaders;
  auVar12._0_4_ = (float)param_2;
  auVar12._4_4_ = (float)param_2;
  auVar12._8_4_ = (float)param_2;
  auVar12._12_4_ = (float)param_2;
  auVar11._0_4_ = (float)param_1;
  auVar11._4_4_ = (float)param_1;
  auVar11._8_4_ = (float)param_1;
  auVar11._12_4_ = (float)param_1;
  uVar4 = 0x70;
  auVar10._0_4_ = (float)param_3;
  auVar10._4_4_ = (float)param_3;
  auVar10._8_4_ = (float)param_3;
  auVar10._12_4_ = (float)param_3;
  iVar5 = draw::GetEffectTex(0x16);
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,iVar3 + iVar5 * 0x24);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = 0x41948;
  pRVar2->command[1] =
       (RsxCmd)((in_r8 >> 8 & 0xff) << 8) |
       (RsxCmd)((in_r8 >> 0x18 & 0xff) << 0x18) | (RsxCmd)((in_r8 >> 0x10 & 0xff) << 0x10) |
       (RsxCmd)in_r8 & 0xff;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar2->command[1] = 0;
  pRVar2->command[2] = 0;
  pRVar2->command[3] = 0;
  pRVar2->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar2->command[5] = 6;
  pRVar2->command = pRVar2->command + 6;
  if (0 < param_5) {
    auVar7 = ZEXT416(0xfffffff0);
    auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    lVar6 = param_4 + 2;
    do {
      pRVar2 = HUD_Pass;
      auVar8 = loadVectorLeftIndexed(uVar4,param_4);
      auVar9 = loadVectorLeftIndexed(uVar4,lVar6);
      auVar8 = vectorShiftRightAlgebraicWord(auVar8,auVar7);
      auVar9 = vectorShiftRightAlgebraicWord(auVar9,auVar7);
      auVar8 = vectorConvertFromSignedFixedPointWord(auVar8,0);
      auVar9 = vectorConvertFromSignedFixedPointWord(auVar9,0);
      param_5 = param_5 + -1;
      lVar6 = lVar6 + 4;
      *HUD_Pass->command = 0x41904;
      param_4 = param_4 + 4;
      pRVar2->command[1] = 0;
      auVar8 = vectorMultiplyAddFloatingPoint(auVar8,auVar10,auVar11);
      auVar9 = vectorMultiplyAddFloatingPoint(auVar9,auVar10,auVar12);
      pRVar2->command = pRVar2->command + 2;
      pRVar2 = HUD_Pass;
      auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
      *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
      uVar1 = storeVectorElementWordIndexed
                        (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,4,
                         ZEXT48(pRVar2->command));
      *(undefined4 *)((uint)(pRVar2->command + 1) & 0xfffffffc) = uVar1;
      uVar1 = storeVectorElementWordIndexed
                        (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,8,
                         ZEXT48(pRVar2->command));
      *(undefined4 *)((uint)(pRVar2->command + 2) & 0xfffffffc) = uVar1;
      pRVar2->command = pRVar2->command + 3;
    } while (0 < param_5);
  }
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar2->command[1] = 0;
  pRVar2->command = pRVar2->command + 2;
  return;
}



//==== 004189e4  ns=mobyupdate_helpers  size=0x314
// sig: undefined M688_004189e4(void)
// callers(2): 004190b8 mobyupdate_helpers::M688_004190b8; 00419b20 mobyupdate_helpers::M688_00419b20
// callees(4): 000685c4 draw::GetEffectTex; 004d6948 idol_draw::ResetPassState; 004d6d00 idol_draw::SetTextureUnitRegs; 00500ca4 fastfunc::FastEulerToMtx1

void mobyupdate_helpers::M688_004189e4
               (double param_1,double param_2,double param_3,double param_4,longlong param_5,
               int param_6)

{
  longlong lVar1;
  RsxCmd *pRVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  RenderingStep *pRVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong in_r8;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  longlong lVar10;
  ulonglong unaff_r31;
  ulonglong in_LR;
  ulonglong in_f31;
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
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar1 = uVar8 - 0x150;
  puVar4 = (ulonglong *)lVar1;
  *puVar4 = uVar8;
  puVar4[0x2c] = in_LR;
  puVar4[0x29] = in_f31;
  puVar4[0x28] = unaff_r31;
  puVar4[0x27] = unaff_r30;
  *(float *)(puVar4 + 0x18) = (float)param_2;
  *(float *)((int)puVar4 + 0xc4) = (float)param_2;
  *(float *)(puVar4 + 0x19) = (float)param_2;
  *(float *)((int)puVar4 + 0xcc) = (float)param_2;
  puVar4[0x25] = unaff_r28;
  puVar4[0x24] = unaff_r27;
  puVar4[0x23] = unaff_r26;
  puVar4[0x21] = unaff_r24;
  iVar6 = EffectTexHeaders;
  puVar4[0x22] = unaff_r25;
  auVar23 = *(undefined1 (*) [16])(puVar4 + 0x18);
  *(float *)(puVar4 + 0x18) = (float)param_1;
  *(float *)((int)puVar4 + 0xc4) = (float)param_1;
  *(float *)(puVar4 + 0x19) = (float)param_1;
  *(float *)((int)puVar4 + 0xcc) = (float)param_1;
  auVar22 = *(undefined1 (*) [16])(puVar4 + 0x18);
  uVar7 = 0xc0;
  *(float *)(puVar4 + 0x18) = (float)param_3;
  *(float *)((int)puVar4 + 0xc4) = (float)param_3;
  *(float *)(puVar4 + 0x19) = (float)param_3;
  *(float *)((int)puVar4 + 0xcc) = (float)param_3;
  puVar4[0x26] = unaff_r29;
  auVar21 = *(undefined1 (*) [16])(puVar4 + 0x18);
  iVar9 = draw::GetEffectTex(0x16);
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,iVar6 + iVar9 * 0x24);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar5 = HUD_Pass;
  *HUD_Pass->command = 0x41948;
  pRVar5->command[1] =
       (RsxCmd)((in_r8 >> 8 & 0xff) << 8) |
       (RsxCmd)((in_r8 >> 0x18 & 0xff) << 0x18) | (RsxCmd)((in_r8 >> 0x10 & 0xff) << 0x10) |
       (RsxCmd)in_r8 & 0xff;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar5->command[1] = 0;
  pRVar5->command[2] = 0;
  pRVar5->command[3] = 0;
  pRVar5->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar5->command[5] = 6;
  pRVar2 = pRVar5->command;
  *(undefined4 *)(puVar4 + 0xe) = 0;
  *(undefined4 *)((int)puVar4 + 0x74) = 0;
  *(undefined4 *)((int)puVar4 + 0x7c) = 0;
  pRVar5->command = pRVar2 + 6;
  *(float *)(puVar4 + 0xf) = (float)param_4;
  fastfunc::FastEulerToMtx1(uVar8 - 0xd0,uVar8 - 0xe0);
  if (0 < param_6) {
    auVar11 = ZEXT416(0xfffffff0);
    auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    auVar15 = loadVectorLeftIndexed(0x80,lVar1);
    auVar14 = loadVectorLeftIndexed(0x90,lVar1);
    auVar13 = loadVectorLeftIndexed(0x84,lVar1);
    lVar10 = param_5 + 2;
    auVar12 = loadVectorLeftIndexed(0x94,lVar1);
    do {
      pRVar5 = HUD_Pass;
      auVar18 = loadVectorLeftIndexed(uVar7,lVar10);
      auVar17 = ZEXT416(0xffffffff);
      auVar16 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      auVar18 = vectorShiftRightAlgebraicWord(auVar18,auVar11);
      auVar19 = loadVectorLeftIndexed(uVar7,param_5);
      auVar17 = ZEXT416(0xffffffff);
      auVar20 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      auVar17 = vectorShiftLeftIntegerWord(auVar16,auVar16);
      auVar16 = vectorConvertFromSignedFixedPointWord(auVar18,0);
      auVar18 = vectorShiftRightAlgebraicWord(auVar19,auVar11);
      auVar19 = vectorShiftLeftIntegerWord(auVar20,auVar20);
      auVar18 = vectorConvertFromSignedFixedPointWord(auVar18,0);
      param_6 = param_6 + -1;
      lVar10 = lVar10 + 4;
      param_5 = param_5 + 4;
      *HUD_Pass->command = 0x41904;
      auVar17 = vectorMultiplyAddFloatingPoint(auVar16,auVar14,auVar17);
      auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar12,auVar19);
      pRVar5->command[1] = 0;
      auVar17 = vectorMultiplyAddFloatingPoint(auVar18,auVar15,auVar17);
      auVar16 = vectorMultiplyAddFloatingPoint(auVar18,auVar13,auVar16);
      pRVar5->command = pRVar5->command + 2;
      pRVar5 = HUD_Pass;
      auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar21,auVar22);
      auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar21,auVar23);
      *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
      auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar3 = storeVectorElementWordIndexed
                        (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,4,
                         ZEXT48(pRVar5->command));
      *(undefined4 *)((uint)(pRVar5->command + 1) & 0xfffffffc) = uVar3;
      uVar3 = storeVectorElementWordIndexed
                        (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,8,
                         ZEXT48(pRVar5->command));
      *(undefined4 *)((uint)(pRVar5->command + 2) & 0xfffffffc) = uVar3;
      pRVar5->command = pRVar5->command + 3;
    } while (0 < param_6);
  }
  pRVar5 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar5->command[1] = 0;
  pRVar5->command = pRVar5->command + 2;
  return;
}



//==== 00418d00  ns=mobyupdate_helpers  size=0x84
// sig: undefined M688_00418d00(void)
// callers(0): 
// callees(1): 0006e740 draw::Sprite_DrawRotated

void mobyupdate_helpers::M688_00418d00
               (double param_1,double param_2,double param_3,double param_4,double param_5)

{
  draw::Sprite_DrawRotated((float)param_1,(float)param_2,param_3,param_4,param_5,0.0,0.0);
  return;
}



//==== 00418d90  ns=mobyupdate_helpers  size=0x228
// sig: undefined M688_00418d90(void)
// callers(1): 0041b008 mobyupdate_helpers::M688_0041b008
// callees(3): 000685c4 draw::GetEffectTex; 0006e740 draw::Sprite_DrawRotated; 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M688_00418d90(double param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  draw::GetEffectTex(0x37);
  dVar2 = 0.0;
  dVar4 = (double)(float)(param_3 * 20.0);
  draw::Sprite_DrawRotated((float)param_1,(float)param_2,dVar4,dVar4,param_4,0.0,0.0);
  dVar3 = 1.5707963705062866;
  dVar1 = (double)fastfunc::FastWrapRot((float)param_4,1.5707964);
  draw::Sprite_DrawRotated((float)param_1,(float)param_2,dVar4,dVar4,dVar1,dVar2,dVar2);
  dVar1 = (double)fastfunc::FastWrapRot((float)dVar1,(float)dVar3);
  draw::Sprite_DrawRotated((float)param_1,(float)param_2,dVar4,dVar4,dVar1,dVar2,dVar2);
  dVar1 = (double)fastfunc::FastWrapRot((float)dVar1,(float)dVar3);
  draw::Sprite_DrawRotated((float)param_1,(float)param_2,dVar4,dVar4,dVar1,dVar2,dVar2);
  return;
}



//==== 00418fc0  ns=mobyupdate_helpers  size=0xe0
// sig: undefined M688_00418fc0(void)
// callers(0): 
// callees(2): 00065490 draw::ScreenPosFromWorldSpace; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M688_00418fc0
               (undefined8 param_1,undefined4 *param_2,int *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  double dVar3;
  float local_50;
  float local_4c;
  
  draw::ScreenPosFromWorldSpace(&local_50,param_1);
  dVar3 = 0.0625;
  uVar1 = fastfunc::FastDoubleToInt
                    ((double)((local_50 - (float)(longlong)SCREEN_PROJECTION_MAP_X) * 0.0625));
  *param_2 = uVar1;
  iVar2 = fastfunc::FastDoubleToInt
                    ((double)(float)((double)(local_4c - (float)(longlong)SCREEN_PROJECTION_MAP_Y) *
                                    dVar3));
  *param_3 = iVar2 + param_4;
  return;
}



//==== 004190b8  ns=mobyupdate_helpers  size=0x284
// sig: undefined M688_004190b8(void)
// callers(0): 
// callees(5): 004189e4 mobyupdate_helpers::M688_004189e4; 00500ca4 fastfunc::FastEulerToMtx1; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M688_004190b8
               (undefined8 param_1,int param_2,float *param_3,int param_4,undefined8 param_5,
               undefined8 param_6,ulonglong param_7)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_b0 [16];
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_70;
  float local_6c;
  float local_68;
  
  dVar8 = (double)*(float *)(param_2 + 8);
  uVar2 = (int)*(uint *)(param_2 + 4) >> 0x1f;
  iVar6 = (uVar2 >> 1 ^ *(uint *)(param_2 + 4)) - uVar2;
  if ((0x3fc90fdb < iVar6) || (iVar6 < -0x3fc90fdb)) {
    dVar8 = -dVar8;
  }
  fastfunc::FastDiffRots(0x3ff921fb60000000,dVar8);
  fastfunc::FastEulerToMtx1(&local_a0,auStack_b0);
  fVar3 = *(float *)(param_4 + 0x14) - param_3[1];
  fVar4 = *(float *)(param_4 + 0x10) - *param_3;
  fVar1 = *(float *)(param_4 + 0x1c);
  dVar8 = (double)((local_6c * fVar1 + local_9c * fVar4 + local_8c * fVar3) * 0.14285715);
  fVar5 = (local_70 * fVar1 + local_a0 * fVar4 + local_90 * fVar3) * 0.14285715;
  fVar1 = (local_68 * fVar1 + local_98 * fVar4 + local_88 * fVar3) * 0.14285715;
  dVar9 = (double)SQRT(fVar1 * fVar1 + fVar5 * fVar5 + (float)(dVar8 * dVar8));
  iVar6 = fastfunc::FastDoubleToInt();
  iVar7 = fastfunc::FastDoubleToInt(-dVar8);
  if (dVar9 < 46.0) {
    if (38.0 < dVar9) {
      dVar9 = (double)(float)(46.0 - dVar9);
      dVar8 = (double)fastfunc::FastIntToDouble(param_7 >> 0x18 & 0xff);
      fastfunc::FastDoubleToInt((double)((float)(dVar8 * dVar9) * 0.125));
    }
    dVar8 = (double)fastfunc::FastDiffRots
                              ((double)*(float *)(param_4 + 0x48),(double)*(float *)(param_2 + 8));
    M688_004189e4((double)(longlong)(iVar6 + 0x1b0),
                  (double)(longlong)(iVar7 + draw::g_ScreenHeight + -0x50),param_1,-dVar8,param_5,
                  param_6);
  }
  return;
}



//==== 00419368  ns=mobyupdate_helpers  size=0x4f0
// sig: undefined M69_00419368(void)
// callers(1): 0041dad8 mobyupdate_unsorted::UpdateMoby_69
// callees(4): 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 00110950 mobyutil::MB_RandomizeVector; 001349f0 partupd::SpawnPart_74

void mobyupdate_helpers::M69_00419368(undefined8 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  float local_f0 [4];
  float local_e0 [4];
  float local_d0 [4];
  
  iVar2 = 1;
  dVar3 = 0.019999999552965164;
  dVar4 = 0.009999999776482582;
  dVar5 = 6.0;
  dVar6 = 7.0;
  do {
    mobyfunc::GetBonePosition(param_1,iVar2,local_100);
    mobyutil::MB_RandomizeVector
              ((float)((double)*(float *)(param_2 + 0xc4) * dVar3 + dVar3),local_f0);
    mobyutil::MB_RandomizeVector
              ((float)((double)*(float *)(param_2 + 0xc4) * dVar3 + dVar3),local_e0);
    mobyutil::MB_RandomizeVector
              ((float)((double)*(float *)(param_2 + 0xc4) * dVar4 + dVar3),local_d0);
    mobyutil::MB_randRangeFloat((float)dVar5,(float)dVar6);
    partupd::SpawnPart_74(param_1,local_f0,local_110,&DAT_00857794,1);
    mobyutil::MB_randRangeFloat((float)dVar5,(float)dVar6);
    partupd::SpawnPart_74(param_1,local_e0,local_110,&DAT_008577a4,1);
    mobyutil::MB_randRangeFloat((float)dVar5,(float)dVar6);
    partupd::SpawnPart_74(param_1,local_d0,local_110,&DAT_008577b4,1);
    uVar1 = (int)*(uint *)(param_2 + 0xc4) >> 0x1f;
    if (0x3f000000 < (int)((uVar1 >> 1 ^ *(uint *)(param_2 + 0xc4)) - uVar1)) {
      mobyutil::MB_RandomizeVector
                ((float)((double)*(float *)(param_2 + 0xc4) * dVar3 + dVar4),local_f0);
      mobyutil::MB_RandomizeVector
                ((float)((double)*(float *)(param_2 + 0xc4) * dVar3 + dVar4),local_e0);
      mobyutil::MB_RandomizeVector
                ((float)((double)*(float *)(param_2 + 0xc4) * dVar4 + dVar4),local_d0);
      mobyutil::MB_randRangeFloat((float)dVar5,(float)dVar6);
      partupd::SpawnPart_74(param_1,local_f0,local_110,&DAT_00857794,1);
      mobyutil::MB_randRangeFloat((float)dVar5,(float)dVar6);
      partupd::SpawnPart_74(param_1,local_e0,local_110,&DAT_008577a4,1);
      mobyutil::MB_randRangeFloat((float)dVar5,(float)dVar6);
      partupd::SpawnPart_74(param_1,local_d0,local_110,&DAT_008577b4,1);
      mobyutil::MB_randRangeFloat((float)dVar5,(float)dVar6);
      partupd::SpawnPart_74(param_1,local_f0,local_110,&DAT_008577c4,1);
      mobyutil::MB_randRangeFloat((float)dVar5,(float)dVar6);
      partupd::SpawnPart_74(param_1,local_100,local_110,&DAT_008577d4,1);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return;
}



//==== 00419870  ns=mobyupdate_helpers  size=0x254
// sig: undefined M688_00419870(void)
// callers(1): 00419b20 mobyupdate_helpers::M688_00419b20
// callees(6): 000685c4 draw::GetEffectTex; 0006a5c4 draw::Sprite_DrawShapeWrapper; 00500ca4 fastfunc::FastEulerToMtx1; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M688_00419870
               (undefined8 param_1,float *param_2,int param_3,longlong param_4,ulonglong param_5,
               int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_90 [16];
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_50;
  float local_4c;
  float local_48;
  
  fastfunc::FastDiffRots(0x3ff921fb60000000);
  fastfunc::FastEulerToMtx1(&local_80,auStack_90);
  fVar2 = *(float *)(param_3 + 0x14) - param_2[1];
  fVar3 = *(float *)(param_3 + 0x10) - *param_2;
  fVar1 = *(float *)(param_3 + 0x1c);
  dVar8 = (double)((local_4c * fVar1 + local_7c * fVar3 + local_6c * fVar2) * 0.071428575);
  fVar4 = (local_50 * fVar1 + local_80 * fVar3 + local_70 * fVar2) * 0.071428575;
  fVar1 = (local_48 * fVar1 + local_78 * fVar3 + local_68 * fVar2) * 0.071428575;
  dVar9 = (double)SQRT(fVar1 * fVar1 + fVar4 * fVar4 + (float)(dVar8 * dVar8));
  iVar6 = fastfunc::FastDoubleToInt();
  iVar7 = fastfunc::FastDoubleToInt(-dVar8);
  if (dVar9 < 46.0) {
    if (38.0 < dVar9) {
      dVar9 = (double)(float)(46.0 - dVar9);
      dVar8 = (double)fastfunc::FastIntToDouble(param_5 >> 0x18 & 0xff);
      fastfunc::FastDoubleToInt((double)((float)(dVar8 * dVar9) * 0.125));
    }
    iVar5 = (int)(param_4 << 4);
    iVar7 = iVar7 + draw::g_ScreenHeight;
    draw::GetEffectTex(param_6 + *(short *)(iVar5 + 0x8577e4) + 0x28);
    draw::Sprite_DrawShapeWrapper
              ((iVar6 - *(short *)(iVar5 + 0x8577f0)) + 0x1b0,
               (iVar7 - *(short *)(iVar5 + 0x8577f2)) + -0x50,*(undefined2 *)(iVar5 + 0x8577ea),
               *(undefined2 *)(iVar5 + 0x8577ec),*(undefined2 *)(iVar5 + 0x8577e6),
               *(undefined2 *)(iVar5 + 0x8577e8),*(undefined2 *)(iVar5 + 0x8577ea),
               *(undefined2 *)(iVar5 + 0x8577ec));
  }
  return;
}



//==== 00419b20  ns=mobyupdate_helpers  size=0x11e0
// sig: undefined M688_00419b20(void)
// callers(1): 0041ad10 mobyupdate_helpers::M688_0041ad10
// callees(9): 00065490 draw::ScreenPosFromWorldSpace; 0010de78 mobyutil::MB_WrapRot; 004189e4 mobyupdate_helpers::M688_004189e4; 00419870 mobyupdate_helpers::M688_00419870; 005010c0 fastfunc::FastNormalizeRMtx4; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

int mobyupdate_helpers::M688_00419b20(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  ulonglong *puVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  short sVar17;
  longlong lVar12;
  float *pfVar19;
  longlong lVar18;
  longlong lVar20;
  int in_r10;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  int iVar21;
  ulonglong unaff_r22;
  int iVar22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  int iVar23;
  ulonglong unaff_r25;
  int iVar24;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f30;
  double dVar34;
  double dVar35;
  ulonglong in_f31;
  double dVar36;
  double dVar37;
  undefined8 uVar38;
  float fVar39;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar1 = uVar11 - 0x240;
  puVar9 = (ulonglong *)lVar1;
  *puVar9 = uVar11;
  puVar9[0x4a] = in_LR;
  puVar9[0x41] = in_f25;
  puVar9[0x42] = in_f26;
  puVar9[0x43] = in_f27;
  puVar9[0x44] = in_f28;
  puVar9[0x45] = in_f29;
  puVar9[0x46] = in_f30;
  puVar9[0x47] = in_f31;
  puVar9[0x35] = unaff_r20;
  puVar9[0x39] = unaff_r24;
  puVar9[0x38] = unaff_r23;
  puVar9[0x3a] = unaff_r25;
  iVar8 = MobyUpdateChainStart;
  iVar24 = 0;
  *(undefined4 *)(param_2 + 0xe8) = 0;
  puVar9[0x3b] = unaff_r26;
  iVar23 = 0x7fffffff;
  puVar9[0x40] = unaff_r31;
  iVar7 = *(int *)((int)puVar9 + 0x2b4);
  puVar9[0x3f] = unaff_r30;
  puVar9[0x3e] = unaff_r29;
  puVar9[0x3d] = unaff_r28;
  puVar9[0x3c] = unaff_r27;
  puVar9[0x37] = unaff_r22;
  puVar9[0x36] = unaff_r21;
  puVar9[0x34] = unaff_r19;
  puVar9[0x33] = unaff_r18;
  puVar9[0x32] = unaff_r17;
  if (iVar8 != 0) {
    iVar24 = 0;
    do {
      uVar6 = *(ushort *)(iVar8 + 0x34);
      if ((((((uVar6 & 0x1000) != 0) && ((uVar6 & 1) == 0)) && ((uVar6 & 2) == 0)) &&
          ((*(char *)(iVar8 + 0x31) != '\0' && (*(int *)(iVar8 + 0x24) != 0)))) &&
         (*(short *)(*(int *)(iVar8 + 0x24) + 0x46) == 5)) {
        draw::ScreenPosFromWorldSpace(uVar11 - 0x1a0,iVar8 + 0x10);
        puVar9[0x2f] = (longlong)SCREEN_PROJECTION_MAP_X;
        dVar36 = 0.0625;
        iVar13 = fastfunc::FastDoubleToInt
                           ((double)((*(float *)(puVar9 + 0x14) - (float)(longlong)puVar9[0x2f]) *
                                    0.0625));
        puVar9[0x2f] = (longlong)SCREEN_PROJECTION_MAP_Y;
        iVar14 = fastfunc::FastDoubleToInt
                           ((double)(float)((double)(*(float *)((int)puVar9 + 0xa4) -
                                                    (float)(longlong)puVar9[0x2f]) * dVar36));
        fVar2 = GameCamera.orientMtx.right.y;
        fVar3 = GameCamera.orientMtx.right.x;
        *(float *)(puVar9 + 0xe) = GameCamera.orientMtx.right.x;
        fVar5 = GameCamera.orientMtx.right.z;
        *(float *)((int)puVar9 + 0x74) = fVar2;
        fVar4 = GameCamera.orientMtx.right.w;
        *(float *)(puVar9 + 0xf) = fVar5;
        *(float *)((int)puVar9 + 0x7c) = fVar4;
        fVar39 = *(float *)(iVar8 + 0xc);
        *(float *)((int)puVar9 + 0x7c) = fVar4;
        fVar39 = fVar39 * 0.00078125;
        iVar22 = iVar13 - *(int *)(param_2 + 0xe0);
        iVar21 = iVar14 - *(int *)(param_2 + 0xe4);
        fVar2 = fVar2 * fVar39;
        fVar5 = fVar5 * fVar39;
        iVar22 = iVar22 * ((iVar22 >> 0x1f & 0xfffffffeU) + 1);
        *(float *)(puVar9 + 0xe) = fVar3 * fVar39;
        *(float *)((int)puVar9 + 0x74) = fVar2;
        *(float *)(puVar9 + 0xf) = fVar5;
        iVar21 = iVar21 * ((iVar21 >> 0x1f & 0xfffffffeU) + 1);
        *(float *)(puVar9 + 0xe) = fVar3 * fVar39 + *(float *)(iVar8 + 0x10);
        *(float *)((int)puVar9 + 0x74) = fVar2 + *(float *)(iVar8 + 0x14);
        *(float *)(puVar9 + 0xf) = fVar5 + *(float *)(iVar8 + 0x18);
        draw::ScreenPosFromWorldSpace(uVar11 - 0x1b0,uVar11 - 0x1d0);
        puVar9[0x2f] = (longlong)SCREEN_PROJECTION_MAP_X;
        iVar15 = fastfunc::FastDoubleToInt
                           ((double)(float)((double)(*(float *)(puVar9 + 0x12) -
                                                    (float)(longlong)puVar9[0x2f]) * dVar36));
        puVar9[0x2f] = (longlong)SCREEN_PROJECTION_MAP_Y;
        iVar16 = fastfunc::FastDoubleToInt
                           ((double)(float)((double)(*(float *)((int)puVar9 + 0x94) -
                                                    (float)(longlong)puVar9[0x2f]) * dVar36));
        dVar36 = (double)fastfunc::FastIntToDouble
                                   ((iVar15 - iVar13) * (iVar15 - iVar13) +
                                    (iVar16 - iVar14) * (iVar16 - iVar14));
        iVar13 = fastfunc::FastDoubleToInt((double)(float)SQRT(dVar36));
        if ((iVar22 < iVar13 + 0x1c) && (iVar21 < iVar13 + 0x1c)) {
          if (in_r10 == 0) {
            if ((iVar8 != iVar7) && (iVar13 = iVar22 * iVar22 + iVar21 * iVar21, iVar13 < iVar23)) {
              iVar24 = iVar8;
              iVar23 = iVar13;
            }
          }
          else if (iVar8 == in_r10) {
            iVar24 = iVar8;
            iVar23 = 0;
          }
        }
      }
      sVar17 = *(short *)(iVar8 + 0xa6);
      if (sVar17 < 0x191) {
        if (sVar17 < 0x184) {
          if (sVar17 == 0xe4) {
LAB_00419f50:
            M688_00419870(param_4,param_3,iVar8,2,0x75808080,*(undefined4 *)(param_2 + 0x104));
          }
          else if (sVar17 == 0xe0) {
LAB_00419f28:
            M688_00419870(param_4,param_3,iVar8,2,0x75808080,*(undefined4 *)(param_2 + 0x104));
          }
          else if (sVar17 == 0x6f) {
LAB_0041aa58:
            if ((*(ushort *)(iVar8 + 0x34) & 1) == 0) {
              draw::ScreenPosFromWorldSpace(uVar11 - 0x1c0,iVar8 + 0x10);
              if (*(char *)(iVar8 + 0x31) != '\0') {
                puVar9[0x2f] = (longlong)SCREEN_PROJECTION_MAP_X;
                uVar27 = puVar9[0x2f];
                puVar9[0x2f] = (longlong)SCREEN_PROJECTION_MAP_Y;
                uVar38 = 0x3ff0000000000000;
                dVar35 = (double)((*(float *)(puVar9 + 0x10) - (float)(longlong)uVar27) * 0.0625);
                dVar36 = (double)(*(float *)((int)puVar9 + 0x84) - (float)(longlong)puVar9[0x2f]);
                dVar33 = (double)(float)(dVar36 * 0.0625);
                dVar36 = (double)fastfunc::FastIntToDouble
                                           (0x3fb0000000000000,dVar36,worldUpdateTime);
                fVar39 = mobyutil::MB_WrapRot((float)(dVar36 * 0.05000000074505806));
                M688_004189e4(dVar35,dVar33,uVar38,-(double)fVar39,&DAT_0085771c,0x1e);
              }
              M688_00419870(param_4,param_3,iVar8,1,0x75808080,*(undefined4 *)(param_2 + 0x104));
            }
          }
          else if (sVar17 == 0x53) {
            M688_00419870(param_4,param_3,iVar8,1,0x75007080,*(undefined4 *)(param_2 + 0x104));
          }
          else if (sVar17 == 0x52) {
            M688_00419870(param_4,param_3,iVar8,1,0x75004080,*(undefined4 *)(param_2 + 0x104));
          }
        }
        else if ((sVar17 < 0x18d) && (sVar17 < 0x185)) goto LAB_00419fc8;
      }
      else if (sVar17 < 0x4bf) {
        if (sVar17 < 0x192) {
LAB_00419fc8:
          draw::ScreenPosFromWorldSpace(uVar11 - 0x1c0,iVar8 + 0x10);
          sVar17 = *(short *)(iVar8 + 0xa6);
          if ((sVar17 != 0x184) && (*(char *)(iVar8 + 0x31) != '\0')) {
            puVar9[0x2f] = (longlong)SCREEN_PROJECTION_MAP_X;
            dVar37 = 0.0625;
            uVar27 = puVar9[0x2f];
            puVar9[0x2f] = (longlong)SCREEN_PROJECTION_MAP_Y;
            uVar38 = 0x3ff0000000000000;
            dVar31 = (double)((*(float *)(puVar9 + 0x10) - (float)(longlong)uVar27) * 0.0625);
            dVar36 = (double)(*(float *)((int)puVar9 + 0x84) - (float)(longlong)puVar9[0x2f]);
            dVar35 = (double)(float)(dVar36 * 0.0625);
            dVar36 = (double)fastfunc::FastIntToDouble(dVar36,worldUpdateTime);
            dVar33 = 0.05000000074505806;
            fVar39 = mobyutil::MB_WrapRot((float)(dVar36 * 0.05000000074505806));
            M688_004189e4(dVar31,dVar35,uVar38,(double)fVar39,&DAT_0085771c,0x1e);
            uVar27 = (ulonglong)SCREEN_PROJECTION_MAP_Y;
            puVar9[0x2f] = (longlong)SCREEN_PROJECTION_MAP_X;
            uVar10 = worldUpdateTime;
            uVar26 = puVar9[0x2f];
            puVar9[0x2f] = uVar27;
            uVar38 = 0x3ff4ccccc0000000;
            dVar35 = (double)(float)((double)(*(float *)(puVar9 + 0x10) - (float)(longlong)uVar26) *
                                    dVar37);
            dVar36 = (double)(*(float *)((int)puVar9 + 0x84) - (float)(longlong)puVar9[0x2f]);
            dVar31 = (double)(float)(dVar36 * dVar37);
            dVar36 = (double)fastfunc::FastIntToDouble(dVar36,uVar10);
            fVar39 = mobyutil::MB_WrapRot((float)(dVar36 * dVar33));
            M688_004189e4(dVar35,dVar31,uVar38,-(double)fVar39,&DAT_0085771c,0x1e);
            sVar17 = *(short *)(iVar8 + 0xa6);
          }
          if (sVar17 != 0x191) {
            if (*(char *)(iVar8 + 0x31) == '\0') {
              fastfunc::FastNormalizeRMtx4(uVar11 - 400,0x951710);
              fVar39 = *(float *)(iVar8 + 0x14) - g_heroPosition.y;
              fVar2 = *(float *)(iVar8 + 0x10) - g_heroPosition.x;
              fVar5 = *(float *)(iVar8 + 0x18) - g_heroPosition.z;
              dVar31 = 0.0;
              fVar3 = -(*(float *)(puVar9 + 0x1d) * *(float *)(iVar8 + 0x1c) +
                       *(float *)(puVar9 + 0x1b) * fVar5 +
                       *(float *)(puVar9 + 0x17) * fVar2 + *(float *)(puVar9 + 0x19) * fVar39);
              fVar39 = -(*(float *)((int)puVar9 + 0xe4) * *(float *)(iVar8 + 0x1c) +
                        *(float *)((int)puVar9 + 0xd4) * fVar5 +
                        *(float *)((int)puVar9 + 0xb4) * fVar2 +
                        *(float *)((int)puVar9 + 0xc4) * fVar39);
              fVar2 = SQRT(fVar39 * fVar39 + fVar3 * fVar3);
              dVar35 = (double)(fVar3 * (160.0 / fVar2));
              dVar33 = (double)(fVar39 * (160.0 / fVar2));
              dVar36 = dVar31;
              if (0.0 - fVar2 < 0.0) {
                dVar36 = dVar35;
              }
              dVar37 = dVar31;
              if (0.0 - fVar2 < 0.0) {
                dVar37 = dVar33;
              }
              if (fVar2 - 0.0 < 0.0) {
                dVar36 = dVar35;
              }
              if (fVar2 - 0.0 < 0.0) {
                dVar37 = dVar33;
              }
              *(float *)(puVar9 + 0x21) = (float)dVar37;
              *(float *)((int)puVar9 + 0x10c) = (float)dVar36;
              *(float *)(puVar9 + 0x22) = (float)(ABS(dVar37) - ABS(dVar36));
              dVar35 = 0.7853981852531433;
              uVar27 = (ulonglong)(*(uint *)(puVar9 + 0x21) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)(puVar9 + 0x22) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)((int)puVar9 + 0x10c) >> 0x1d) & 4;
              fVar39 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar27 << 2));
              dVar33 = ABS((double)*(float *)(puVar9 + 0x21));
              if (*(float *)(puVar9 + 0x22) - 0.0 < 0.0) {
                dVar33 = ABS(dVar36);
              }
              fVar2 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
              dVar29 = ABS((double)*(float *)((int)puVar9 + 0x10c));
              if (*(float *)(puVar9 + 0x22) - 0.0 < 0.0) {
                dVar29 = ABS(dVar37);
              }
              dVar32 = dVar31;
              if (0.0 < dVar33) {
                lVar12 = uVar11 - 0x230;
                lVar20 = uVar11 - 0xdc;
                lVar18 = uVar11 - 0xec;
                lVar25 = 2;
                fVar5 = (float)(dVar29 - dVar33) / (float)(dVar29 + dVar33);
                fVar3 = fVar5 * fVar5;
                *(float *)(puVar9 + 0x2c) = fVar5;
                *(float *)(puVar9 + 0x2b) = fVar5;
                *(float *)((int)puVar9 + 0x15c) = fVar5;
                *(float *)((int)puVar9 + 0x154) = fVar5;
                fVar5 = fVar3 * fVar3;
                *(float *)(puVar9 + 0x2b) = *(float *)(puVar9 + 0x2b) * fVar3;
                *(float *)((int)puVar9 + 0x15c) = *(float *)((int)puVar9 + 0x15c) * fVar5;
                *(float *)(puVar9 + 0x2c) = *(float *)(puVar9 + 0x2c) * fVar5 * fVar3;
                do {
                  *(float *)((int)lVar12 + 0x154) = *(float *)((int)lVar12 + 0x144) * fVar5 * fVar5;
                  iVar13 = (int)lVar18;
                  lVar18 = lVar18 + 8;
                  lVar12 = lVar12 + 8;
                  *(float *)((int)lVar20 + 4) = *(float *)(iVar13 + 4) * fVar5 * fVar5;
                  lVar20 = lVar20 + 8;
                  lVar25 = lVar25 + -1;
                } while (lVar25 != 0);
                lVar25 = 4;
                lVar20 = uVar11 - 0xec;
                pfVar19 = (float *)&DAT_007358e0;
                lVar12 = lVar1;
                lVar18 = lVar20;
                do {
                  fVar5 = *pfVar19;
                  fVar3 = pfVar19[1];
                  pfVar19 = pfVar19 + 2;
                  *(float *)((int)lVar12 + 0x154) = *(float *)((int)lVar12 + 0x154) * fVar5;
                  lVar12 = lVar12 + 8;
                  *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar3;
                  lVar18 = lVar18 + 8;
                  lVar25 = lVar25 + -1;
                } while (lVar25 != 0);
                lVar18 = 2;
                lVar12 = lVar1;
                dVar33 = dVar31;
                do {
                  iVar13 = (int)lVar12;
                  iVar14 = (int)lVar20;
                  lVar12 = lVar12 + 0x10;
                  lVar20 = lVar20 + 0x10;
                  dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar13 + 0x154)) +
                                    *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                                   *(float *)(iVar14 + 0xc));
                  lVar18 = lVar18 + -1;
                } while (lVar18 != 0);
                dVar32 = (double)((float)(dVar33 + 0.7853981852531433) * fVar39 + fVar2);
              }
              uVar38 = fastfunc::FastWrapRot((float)dVar32,1.5707964);
              fVar2 = *(float *)(iVar8 + 0x10) - *(float *)(param_1 + 0x10);
              fVar5 = *(float *)(param_1 + 0x10) - *(float *)(iVar8 + 0x10);
              fVar3 = *(float *)(iVar8 + 0x14) - *(float *)(param_1 + 0x14);
              fVar4 = *(float *)(param_1 + 0x14) - *(float *)(iVar8 + 0x14);
              fVar39 = *(float *)(iVar8 + 0x18);
              dVar29 = ABS((double)fVar2);
              dVar33 = ABS((double)fVar3);
              *(float *)((int)puVar9 + 0xfc) = fVar2;
              *(float *)(puVar9 + 0x20) = fVar3;
              fVar39 = *(float *)(param_1 + 0x18) - fVar39;
              dVar34 = (double)(float)(dVar37 + 256.0);
              *(float *)((int)puVar9 + 0x104) = (float)(dVar29 - dVar33);
              uVar27 = (ulonglong)(*(uint *)((int)puVar9 + 0xfc) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)((int)puVar9 + 0x104) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)(puVar9 + 0x20) >> 0x1d) & 4;
              fVar2 = *(float *)(param_2 + 0x38);
              dVar32 = (double)(float)(dVar36 + 208.0);
              dVar37 = (double)SQRT(fVar39 * fVar39 + fVar5 * fVar5 + fVar4 * fVar4);
              fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar27 << 2));
              fVar39 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
              dVar36 = ABS((double)*(float *)((int)puVar9 + 0xfc));
              if ((double)*(float *)((int)puVar9 + 0x104) - dVar31 < 0.0) {
                dVar36 = dVar33;
              }
              dVar33 = ABS((double)*(float *)(puVar9 + 0x20));
              if ((double)*(float *)((int)puVar9 + 0x104) - dVar31 < 0.0) {
                dVar33 = dVar29;
              }
              dVar29 = dVar31;
              if (dVar31 < dVar36) {
                lVar12 = uVar11 - 0x230;
                lVar20 = uVar11 - 0xfc;
                lVar18 = uVar11 - 0x10c;
                lVar25 = 2;
                fVar3 = (float)(dVar33 - dVar36) / (float)(dVar33 + dVar36);
                fVar4 = fVar3 * fVar3;
                *(float *)(puVar9 + 0x28) = fVar3;
                *(float *)(puVar9 + 0x27) = fVar3;
                *(float *)((int)puVar9 + 0x13c) = fVar3;
                *(float *)((int)puVar9 + 0x134) = fVar3;
                fVar3 = fVar4 * fVar4;
                *(float *)(puVar9 + 0x27) = *(float *)(puVar9 + 0x27) * fVar4;
                *(float *)((int)puVar9 + 0x13c) = *(float *)((int)puVar9 + 0x13c) * fVar3;
                *(float *)(puVar9 + 0x28) = *(float *)(puVar9 + 0x28) * fVar3 * fVar4;
                do {
                  *(float *)((int)lVar12 + 0x134) = *(float *)((int)lVar12 + 0x124) * fVar3 * fVar3;
                  iVar13 = (int)lVar18;
                  lVar18 = lVar18 + 8;
                  lVar12 = lVar12 + 8;
                  *(float *)((int)lVar20 + 4) = *(float *)(iVar13 + 4) * fVar3 * fVar3;
                  lVar20 = lVar20 + 8;
                  lVar25 = lVar25 + -1;
                } while (lVar25 != 0);
                lVar25 = 4;
                lVar20 = uVar11 - 0x10c;
                pfVar19 = (float *)&DAT_007358e0;
                lVar12 = lVar1;
                lVar18 = lVar20;
                do {
                  fVar3 = *pfVar19;
                  fVar4 = pfVar19[1];
                  pfVar19 = pfVar19 + 2;
                  *(float *)((int)lVar12 + 0x134) = *(float *)((int)lVar12 + 0x134) * fVar3;
                  lVar12 = lVar12 + 8;
                  *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
                  lVar18 = lVar18 + 8;
                  lVar25 = lVar25 + -1;
                } while (lVar25 != 0);
                lVar18 = 2;
                lVar12 = lVar1;
                dVar36 = dVar31;
                do {
                  iVar13 = (int)lVar12;
                  iVar14 = (int)lVar20;
                  lVar12 = lVar12 + 0x10;
                  lVar20 = lVar20 + 0x10;
                  dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar13 + 0x134)) +
                                    *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                                   *(float *)(iVar14 + 0xc));
                  lVar18 = lVar18 + -1;
                } while (lVar18 != 0);
                dVar29 = (double)((float)(dVar36 + dVar35) * fVar5 + fVar39);
              }
              dVar33 = (double)fastfunc::FastDiffRots(dVar29,(double)fVar2);
              fVar39 = *(float *)(param_1 + 0x14) - *(float *)(iVar8 + 0x14);
              fVar2 = *(float *)(param_1 + 0x10) - *(float *)(iVar8 + 0x10);
              dVar33 = ABS(dVar33);
              fVar5 = *(float *)(iVar8 + 0x18) - *(float *)(param_1 + 0x18);
              fVar2 = SQRT(fVar2 * fVar2 + fVar39 * fVar39);
              fVar39 = *(float *)(param_2 + 0x34);
              *(float *)((int)puVar9 + 0xf4) = fVar5;
              dVar28 = ABS((double)fVar5);
              dVar29 = ABS((double)fVar2);
              *(float *)(puVar9 + 0x1e) = fVar2;
              *(float *)(puVar9 + 0x1f) = (float)(dVar29 - dVar28);
              uVar27 = (ulonglong)(*(uint *)(puVar9 + 0x1e) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)(puVar9 + 0x1f) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)((int)puVar9 + 0xf4) >> 0x1d) & 4;
              dVar36 = ABS((double)*(float *)(puVar9 + 0x1e));
              if ((double)*(float *)(puVar9 + 0x1f) - dVar31 < 0.0) {
                dVar36 = dVar28;
              }
              fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar27 << 2));
              dVar28 = ABS((double)*(float *)((int)puVar9 + 0xf4));
              if ((double)*(float *)(puVar9 + 0x1f) - dVar31 < 0.0) {
                dVar28 = dVar29;
              }
              fVar5 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
              if (dVar31 < dVar36) {
                lVar12 = uVar11 - 0x230;
                lVar18 = uVar11 - 300;
                lVar20 = uVar11 - 0x11c;
                lVar25 = 2;
                fVar3 = (float)(dVar28 - dVar36) / (float)(dVar28 + dVar36);
                fVar4 = fVar3 * fVar3;
                *(float *)(puVar9 + 0x24) = fVar3;
                *(float *)(puVar9 + 0x23) = fVar3;
                *(float *)((int)puVar9 + 0x11c) = fVar3;
                *(float *)((int)puVar9 + 0x114) = fVar3;
                fVar3 = fVar4 * fVar4;
                *(float *)(puVar9 + 0x23) = *(float *)(puVar9 + 0x23) * fVar4;
                *(float *)((int)puVar9 + 0x11c) = *(float *)((int)puVar9 + 0x11c) * fVar3;
                *(float *)(puVar9 + 0x24) = *(float *)(puVar9 + 0x24) * fVar3 * fVar4;
                do {
                  *(float *)((int)lVar12 + 0x114) = *(float *)((int)lVar12 + 0x104) * fVar3 * fVar3;
                  iVar13 = (int)lVar18;
                  lVar12 = lVar12 + 8;
                  lVar18 = lVar18 + 8;
                  *(float *)((int)lVar20 + 4) = *(float *)(iVar13 + 4) * fVar3 * fVar3;
                  lVar20 = lVar20 + 8;
                  lVar25 = lVar25 + -1;
                } while (lVar25 != 0);
                lVar25 = 4;
                lVar20 = uVar11 - 300;
                pfVar19 = (float *)&DAT_007358e0;
                lVar12 = lVar1;
                lVar18 = lVar20;
                do {
                  fVar3 = *pfVar19;
                  fVar4 = pfVar19[1];
                  pfVar19 = pfVar19 + 2;
                  *(float *)((int)lVar12 + 0x114) = *(float *)((int)lVar12 + 0x114) * fVar3;
                  lVar12 = lVar12 + 8;
                  *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
                  lVar18 = lVar18 + 8;
                  lVar25 = lVar25 + -1;
                } while (lVar25 != 0);
                lVar18 = 2;
                lVar12 = lVar1;
                do {
                  iVar13 = (int)lVar12;
                  iVar14 = (int)lVar20;
                  lVar12 = lVar12 + 0x10;
                  lVar20 = lVar20 + 0x10;
                  dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar13 + 0x114)) +
                                    *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                                   *(float *)(iVar14 + 0xc));
                  lVar18 = lVar18 + -1;
                } while (lVar18 != 0);
                dVar31 = (double)((float)(dVar31 + dVar35) * fVar2 + fVar5);
              }
              dVar31 = (double)fastfunc::FastDiffRots(-dVar31,(double)fVar39);
              dVar31 = ABS(dVar31);
              dVar29 = (double)fastfunc::FastWrapRot
                                         (*(float *)(param_2 + 0x114),
                                          0.1 / (SQRT((float)(dVar33 * dVar33 +
                                                             (double)(float)(dVar31 * dVar31))) *
                                                0.31830987));
              dVar36 = (double)(float)(3.141592502593994 - dVar29);
              if (dVar29 - (double)(float)(3.141592502593994 - dVar29) < 0.0) {
                dVar36 = dVar29;
              }
              dVar28 = (double)(float)(-3.141592502593994 - dVar29);
              if ((double)(float)(-3.141592502593994 - dVar29) - dVar36 < 0.0) {
                dVar28 = dVar36;
              }
              *(float *)(param_2 + 0x114) = (float)dVar29;
              dVar36 = (double)(float)(dVar28 * dVar28);
              dVar30 = (double)(float)(dVar36 * (double)(float)(dVar36 * dVar28));
              dVar29 = (double)(float)(dVar36 * dVar30);
              uVar27 = fastfunc::FastDoubleToInt
                                 ((double)(((float)(dVar36 * dVar29) * 2.601887e-06 +
                                            (float)(dVar29 * -0.0001980741071747616 +
                                                   (double)(float)(dVar30 * 0.008333025500178337 +
                                                                  (double)(float)((double)(float)(
                                                  dVar36 * dVar28) * -0.16666656732559204 + dVar28))
                                                  ) + 1.4) * 53.0));
              if ((dVar35 <= dVar33) || (dVar35 <= dVar31)) {
                M688_004189e4(dVar34,dVar32,(double)((float)(240.0 / dVar37) + 1.5),uVar38,
                              &DAT_00857634,3,(uVar27 & 0xff) << 0x18 | 0x8000);
              }
              else {
                puVar9[0x2f] = (longlong)SCREEN_PROJECTION_MAP_X;
                dVar37 = 0.0625;
                uVar27 = puVar9[0x2f];
                puVar9[0x2f] = (longlong)SCREEN_PROJECTION_MAP_Y;
                uVar38 = 0x3ff0000000000000;
                dVar31 = (double)((*(float *)(puVar9 + 0x10) - (float)(longlong)uVar27) * 0.0625);
                dVar36 = (double)(*(float *)((int)puVar9 + 0x84) - (float)(longlong)puVar9[0x2f]);
                dVar35 = (double)(float)(dVar36 * 0.0625);
                dVar36 = (double)fastfunc::FastIntToDouble(dVar36,worldUpdateTime);
                dVar33 = 0.05000000074505806;
                fVar39 = mobyutil::MB_WrapRot((float)(dVar36 * 0.05000000074505806));
                M688_004189e4(dVar31,dVar35,uVar38,(double)fVar39,&DAT_0085771c,0x1e);
                uVar27 = (ulonglong)SCREEN_PROJECTION_MAP_Y;
                puVar9[0x2f] = (longlong)SCREEN_PROJECTION_MAP_X;
                uVar10 = worldUpdateTime;
                uVar26 = puVar9[0x2f];
                puVar9[0x2f] = uVar27;
                uVar38 = 0x3ff4ccccc0000000;
                dVar35 = (double)(float)((double)(*(float *)(puVar9 + 0x10) -
                                                 (float)(longlong)uVar26) * dVar37);
                dVar36 = (double)(*(float *)((int)puVar9 + 0x84) - (float)(longlong)puVar9[0x2f]);
                dVar31 = (double)(float)(dVar36 * dVar37);
                dVar36 = (double)fastfunc::FastIntToDouble(dVar36,uVar10);
                fVar39 = mobyutil::MB_WrapRot((float)(dVar36 * dVar33));
                M688_004189e4(dVar35,dVar31,uVar38,-(double)fVar39,&DAT_0085771c,0x1e);
              }
            }
            M688_00419870(param_4,param_3,iVar8,0,0x75808080,*(undefined4 *)(param_2 + 0x104));
            sVar17 = *(short *)(iVar8 + 0xa6);
          }
          if (sVar17 != 0x191) {
            *(int *)(param_2 + 0xe8) = *(int *)(param_2 + 0xe8) + 1;
          }
        }
        else if (sVar17 < 0x3ec) {
          if (0x3ea < sVar17) goto LAB_00419fc8;
        }
        else if (0x4bd < sVar17) goto LAB_0041aa58;
      }
      else if (sVar17 < 0x4c5) {
        if (sVar17 < 0x4c0) {
          if (((*(ushort *)(iVar8 + 0x34) & 1) == 0) && (1 < *(byte *)(iVar8 + 0x20))) {
            draw::ScreenPosFromWorldSpace(uVar11 - 0x1c0,iVar8 + 0x10);
            if (*(char *)(iVar8 + 0x31) != '\0') {
              puVar9[0x2f] = (longlong)SCREEN_PROJECTION_MAP_X;
              uVar27 = puVar9[0x2f];
              puVar9[0x2f] = (longlong)SCREEN_PROJECTION_MAP_Y;
              uVar38 = 0x3ff0000000000000;
              dVar35 = (double)((*(float *)(puVar9 + 0x10) - (float)(longlong)uVar27) * 0.0625);
              dVar36 = (double)(*(float *)((int)puVar9 + 0x84) - (float)(longlong)puVar9[0x2f]);
              dVar33 = (double)(float)(dVar36 * 0.0625);
              dVar36 = (double)fastfunc::FastIntToDouble(0x3fb0000000000000,dVar36,worldUpdateTime);
              fVar39 = mobyutil::MB_WrapRot((float)(dVar36 * 0.05000000074505806));
              M688_004189e4(dVar35,dVar33,uVar38,-(double)fVar39,&DAT_0085771c,0x1e);
            }
            M688_00419870(param_4,param_3,iVar8,1,0x75808080,*(undefined4 *)(param_2 + 0x104));
          }
        }
        else if (sVar17 < 0x4c3) {
          if (0x4c1 < sVar17) goto LAB_00419f28;
        }
        else if (0x4c3 < sVar17) goto LAB_00419f50;
      }
      else if ((sVar17 < 0x534) && (sVar17 == 0x504)) goto LAB_00419fc8;
      iVar8 = *(int *)(iVar8 + 0x28);
    } while (iVar8 != 0);
  }
  return iVar24;
}



//==== 0041ad10  ns=mobyupdate_helpers  size=0x2b4
// sig: undefined M688_0041ad10(void)
// callers(1): 0041b008 mobyupdate_helpers::M688_0041b008
// callees(2): 00419b20 mobyupdate_helpers::M688_00419b20; 004fff60 fastfunc::FastDecTimerS32

void mobyupdate_helpers::M688_0041ad10(undefined8 param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined1 local_40 [32];
  
  if (g_gameMode != GAME_MODE_FREEZE && g_gameMode != GAME_MODE_PAUSE) {
    fastfunc::FastDecTimerS32(param_2 + 0x8c);
  }
  if (((((*(int *)(param_2 + 0x8c) == 0) || (iVar3 = *(int *)(param_2 + 0x88), iVar3 == 0)) ||
       ((int)*(short *)(iVar3 + 0xa6) != *(int *)(param_2 + 0x124))) ||
      ((*(char *)(iVar3 + 0x20) == -3 || *(char *)(iVar3 + 0x20) == -2 ||
       (*(char *)(iVar3 + 0x31) == '\0')))) ||
     (((pad_Repeat & 0x2000) != 0 || (DAT_0096b2d6 == '\0')))) {
    *(undefined4 *)(param_2 + 0xec) = 0;
    *(undefined4 *)(param_2 + 0x88) = 0;
    *(undefined4 *)(param_2 + 0x124) = 0xffffffff;
  }
  iVar2 = M688_00419b20(0x3fc921fb60000000,0x3fc921fb60000000,0x406fe00000000000,param_1,param_2,
                        0x951500,local_40);
  iVar3 = *(int *)(param_2 + 0x88);
  if (((iVar2 != iVar3) && (500 < *(int *)(param_2 + 0x8c))) || (DAT_0096b2d6 == '\0')) {
    *(undefined4 *)(param_2 + 0xec) = 0;
    *(undefined4 *)(param_2 + 0x88) = 0;
    iVar3 = 0;
    *(undefined4 *)(param_2 + 0x124) = 0xffffffff;
  }
  if ((iVar2 != 0) &&
     (((iVar3 == 0 || ((*(short *)(iVar3 + 0xa6) != 0x3eb && (*(short *)(iVar2 + 0xa6) == 0x3eb))))
      && (DAT_0096b2d6 != '\0')))) {
    *(int *)(param_2 + 0x88) = iVar2;
    sVar1 = *(short *)(iVar2 + 0xa6);
    *(undefined4 *)(param_2 + 0x8c) = *(undefined4 *)(param_2 + 0x138);
    *(int *)(param_2 + 0x124) = (int)sVar1;
    iVar3 = iVar2;
  }
  if (iVar2 == iVar3) {
    *(undefined4 *)(param_2 + 0x118) = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 0x118) + 1;
    *(int *)(param_2 + 0x118) = iVar2;
    if ((int)(animationSpeed * 60.5) < iVar2) {
      *(undefined4 *)(param_2 + 0xec) = 0;
      *(undefined4 *)(param_2 + 0x88) = 0;
      *(undefined4 *)(param_2 + 0x124) = 0xffffffff;
      return;
    }
  }
  if (((iVar3 != 0) && (*(int *)(param_2 + 0x84) == 0)) &&
     (((int)*(short *)(iVar3 + 0xa6) != *(int *)(param_2 + 0x124) ||
      ((*(char *)(iVar3 + 0x20) == -2 || (*(char *)(iVar3 + 0x20) == -3)))))) {
    *(undefined4 *)(param_2 + 0x88) = 0;
    *(undefined4 *)(param_2 + 0x124) = 0xffffffff;
  }
  return;
}



//==== 0041b008  ns=mobyupdate_helpers  size=0x794
// sig: undefined M688_0041b008(void)
// callers(0): 
// callees(15): 00065490 draw::ScreenPosFromWorldSpace; 000685c4 draw::GetEffectTex; 0006a5c4 draw::Sprite_DrawShapeWrapper; 0006e740 draw::Sprite_DrawRotated; 00070834 draw::FontPrintSmallCenter; 0007b740 help::help_msg_string_by_index; 0010de78 mobyutil::MB_WrapRot; 0041873c mobyupdate_helpers::M688_0041873c; 00418d90 mobyupdate_helpers::M688_00418d90; 0041ad10 mobyupdate_helpers::M688_0041ad10; 004d82b8 idol_draw::BindFragmentProgram; 004dd6f0 idol_draw::Gfx_SubmitHudDrawCommands; 004de9c4 FUN_004de9c4; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt
// strings: 006571a4: 'minHealth'

void mobyupdate_helpers::M688_0041b008(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  float local_90;
  float local_8c;
  undefined1 local_80 [24];
  
  iVar1 = *(int *)(param_1 + 0x78);
  M688_0041ad10(param_1,iVar1);
  if (*(uint *)(iVar1 + 0x88) != 0) {
    draw::ScreenPosFromWorldSpace(&local_90,(ulonglong)*(uint *)(iVar1 + 0x88) + 0x10);
    dVar12 = 0.0625;
    uVar3 = fastfunc::FastDoubleToInt
                      ((double)((local_90 - (float)(longlong)SCREEN_PROJECTION_MAP_X) * 0.0625));
    uVar4 = fastfunc::FastDoubleToInt
                      ((double)(float)((double)(local_8c - (float)(longlong)SCREEN_PROJECTION_MAP_Y)
                                      * dVar12));
    if ((int)(animationSpeed * 500.5) < *(int *)(iVar1 + 0x8c)) {
      dVar12 = (double)fastfunc::FastIntToDouble
                                 (*(int *)(iVar1 + 0x8c) - (int)(animationSpeed * 500.5));
      dVar10 = (double)fastfunc::FastIntToDouble((int)(animationSpeed * 75.5));
      dVar13 = (double)((float)(dVar12 / dVar10) * 5.0 + 1.0);
      dVar12 = (double)((1.0 - (float)(dVar12 / dVar10)) * 2.0);
      dVar10 = 1.0 - dVar12;
      if (dVar10 < 0.0) {
        dVar12 = 1.0;
      }
      fastfunc::FastDoubleToInt
                ((double)(float)(dVar12 * 96.0),0x3ff0000000000000,dVar10,0x4014000000000000);
      uVar3 = fastfunc::FastIntToDouble(uVar3);
      uVar4 = fastfunc::FastIntToDouble(uVar4);
      dVar12 = (double)fastfunc::FastIntToDouble(worldUpdateTime);
      fVar15 = mobyutil::MB_WrapRot((float)(dVar12 * 0.03333333507180214));
      M688_00418d90(uVar3,uVar4,dVar13,(double)fVar15);
      *(undefined4 *)(iVar1 + 0xec) = 0;
    }
    else {
      uVar3 = fastfunc::FastIntToDouble(uVar3);
      uVar4 = fastfunc::FastIntToDouble(uVar4);
      M688_00418d90(uVar3,uVar4,0x3ff0000000000000,0);
      *(undefined4 *)(iVar1 + 0xec) = *(undefined4 *)(iVar1 + 0x88);
    }
  }
  iVar5 = 0;
  lVar8 = 0x40;
  lVar9 = 0x18;
  if (DAT_0096b2d7 != 0) {
    uVar3 = 0x3fe0000000000000;
    do {
      if (iVar5 < (int)(uint)DAT_0096b2d6) {
        M688_0041873c((double)(longlong)(int)lVar9,(double)(longlong)(int)lVar8,uVar3,&DAT_00857640,
                      0x19);
      }
      else {
        M688_0041873c((double)(longlong)(int)lVar9,(double)(longlong)(int)lVar8,uVar3,&DAT_00857640,
                      0x19);
      }
      iVar7 = ((int)(uint)DAT_0096b2d7 >> 1) - iVar5;
      iVar6 = ((int)(uint)DAT_0096b2d7 >> 1) - iVar5;
      iVar5 = iVar5 + 1;
      lVar8 = lVar8 + ((LZCOUNT(iVar7) << 0x3a) >> 0x3f & 0x2eU - lVar8) + 0x12;
      lVar9 = lVar9 + ((LZCOUNT(iVar6) << 0x3a) >> 0x3f & 0x1eU);
    } while (iVar5 < (int)(uint)DAT_0096b2d7);
  }
  iVar5 = *(int *)(iVar1 + 0xe0);
  iVar6 = *(int *)(iVar1 + 0xe4);
  draw::GetEffectTex(0x11);
  dVar14 = 40.0;
  dVar11 = 0.0;
  dVar13 = 0.5;
  dVar10 = (double)(longlong)iVar5;
  dVar12 = (double)(longlong)iVar6;
  draw::Sprite_DrawRotated((float)(longlong)iVar5,(float)(longlong)iVar6,40.0,40.0,0.0,0.5,0.5);
  draw::GetEffectTex(0x12);
  draw::Sprite_DrawRotated((float)dVar10,(float)dVar12,dVar14,dVar14,dVar11,dVar13,dVar13);
  draw::GetEffectTex(8);
  draw::Sprite_DrawRotated((float)dVar10,(float)dVar12,10.0,10.0,dVar11,dVar13,dVar13);
  if (DAT_0096b2dc < DAT_0096b2e0 * 0.1) {
    if ((worldUpdateTime / 0x5a & 1U) != 0) {
      uVar3 = help::help_msg_string_by_index(STR_WARNING_SHIP_NEEDS_REPAIR);
      draw::FontPrintSmallCenter(0x100,0x186,0x80000080,uVar3,100);
    }
  }
  fVar15 = (DAT_0096b2dc - *(float *)(iVar1 + 0xf0)) * 0.2;
  if (1.0 - ABS(fVar15) < 0.0) {
    fVar15 = fVar15 / ABS(fVar15);
  }
  fVar15 = *(float *)(iVar1 + 0xf0) + fVar15;
  *(float *)(iVar1 + 0xf0) = fVar15;
  iVar5 = fastfunc::FastDoubleToInt((double)((fVar15 * 251.0) / DAT_0096b2e0));
  uVar2 = g_viewMtxPtr;
  iVar5 = iVar5 + 2;
  iVar5 = iVar5 + ((uint)(0xfd - (longlong)iVar5 >> 0x3f) & 0xfdU - iVar5);
  idol_draw::BindFragmentProgram(g_viewMtxPtr,HUD_Pass,0xd);
  uVar3 = FUN_004de9c4(uVar2,0xd,"minHealth");
  idol_draw::Gfx_SubmitHudDrawCommands(uVar2,HUD_Pass,0xd,uVar3,local_80,1);
  draw::GetEffectTex(*(int *)(iVar1 + 0x104) + 0x28);
  draw::Sprite_DrawShapeWrapper(0x170,draw::g_ScreenHeight + -0x90,0x80,0x80,0,0,0x80,0x80);
  idol_draw::BindFragmentProgram(uVar2,HUD_Pass,0xc);
  draw::GetEffectTex(*(int *)(iVar1 + 0x104) + 0x29);
  draw::Sprite_DrawShapeWrapper(0x170,draw::g_ScreenHeight + -0x90,0x80,0x80,0,0,0x80,0x80);
  *(uint *)(iVar1 + 0xf4) = iVar5 + ((uint)((longlong)iVar5 + -2 >> 0x3f) & 2U - iVar5);
  return;
}



//==== 0041b7c0  ns=mobyupdate_helpers  size=0x328
// sig: undefined M688_0041b7c0(void)
// callers(1): 0041bf10 mobyupdate_helpers::M69_0041bf10
// callees(7): 00065490 draw::ScreenPosFromWorldSpace; 000f1114 mobyfunc::GetBonePosition; 000fe610 mobyutil::MB_SphericalToVector; 0015d12c sound::PlayMobySound; 00184670 mobyupdate_helpers::M1009_00184670; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M688_0041b7c0
               (double param_1,double param_2,MobyInstance *param_3,longlong param_4)

{
  byte bVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  float *pfVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  longlong local_50;
  
  mobyutil::MB_SphericalToVector
            (mobyutil::g_FrameTime * 400.0,(float)param_1,(float)param_2,&local_90);
  pfVar9 = (float *)param_4;
  local_90 = local_90 + *pfVar9;
  local_8c = local_8c + pfVar9[1];
  local_88 = local_88 + pfVar9[2];
  iVar7 = fastfunc::FastDecTimerS32(param_4 + 0x80);
  if ((iVar7 != 0) && ((pad_DownButtons & 0x84) != 0)) {
    sound::PlayMobySound(3,0,param_3);
    dVar10 = 0.0;
    fVar8 = SQRT(local_88 * local_88 + local_90 * local_90 + local_8c * local_8c);
    fVar3 = 2.2 / fVar8;
    dVar12 = dVar10;
    if (0.0 - fVar8 < 0.0) {
      dVar12 = (double)(local_88 * fVar3);
    }
    dVar11 = dVar10;
    if (0.0 - fVar8 < 0.0) {
      dVar11 = (double)(local_8c * fVar3);
    }
    if (0.0 - fVar8 < 0.0) {
      dVar10 = (double)(local_90 * fVar3);
    }
    if (fVar8 - 0.0 < 0.0) {
      dVar12 = (double)(local_88 * fVar3);
    }
    if (fVar8 - 0.0 < 0.0) {
      dVar11 = (double)(local_8c * fVar3);
    }
    if (fVar8 - 0.0 < 0.0) {
      dVar10 = (double)(local_90 * fVar3);
    }
    mobyfunc::GetBonePosition(param_3,(*(byte *)((int)pfVar9 + 0x61) & 1) + 3,&local_80);
    local_80 = (float)((double)local_80 + dVar10);
    local_7c = (float)((double)local_7c + dVar11);
    local_78 = (float)((double)local_78 + dVar12);
    M1009_00184670(0x4069000000000000,0xbff0000000000000,param_3,&local_90,&local_80);
    auVar13 = ZEXT416(0xffffffff);
    auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
    auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
    auVar13 = loadVectorLeftIndexed(0x14,0x41b79c);
    auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    bVar1 = *(byte *)((int)pfVar9 + 0x61);
    auVar13 = vectorMultiplyAddFloatingPoint
                        (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,
                         auVar14);
    auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
    auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0x80,param_4);
    *(undefined4 *)((uint)(pfVar9 + 0x20) & 0xfffffffc) = uVar2;
    *(byte *)((int)pfVar9 + 0x61) = bVar1 ^ 1;
  }
  fVar6 = 0.0;
  local_64 = local_84;
  fVar5 = SQRT(local_88 * local_88 + local_90 * local_90 + local_8c * local_8c);
  fVar4 = 23.0 / fVar5;
  fVar3 = local_90 * fVar4;
  fVar8 = local_8c * fVar4;
  fVar4 = local_88 * fVar4;
  local_90 = fVar6;
  if (0.0 - fVar5 < 0.0) {
    local_90 = fVar3;
  }
  local_8c = fVar6;
  if (0.0 - fVar5 < 0.0) {
    local_8c = fVar8;
  }
  if (0.0 - fVar5 < 0.0) {
    fVar6 = fVar4;
  }
  if (fVar5 - 0.0 < 0.0) {
    local_90 = fVar3;
  }
  if (fVar5 - 0.0 < 0.0) {
    local_8c = fVar8;
  }
  local_88 = fVar6;
  if (fVar5 - 0.0 < 0.0) {
    local_88 = fVar4;
  }
  local_70 = local_90 + (param_3->pos).x;
  local_6c = local_8c + (param_3->pos).y;
  local_68 = local_88 + (param_3->pos).z;
  draw::ScreenPosFromWorldSpace(&local_60,&local_70);
  local_50 = (longlong)SCREEN_PROJECTION_MAP_X;
  dVar12 = 0.0625;
  fVar8 = (float)fastfunc::FastDoubleToInt((double)((local_60 - (float)local_50) * 0.0625));
  pfVar9[0x38] = fVar8;
  local_50 = (longlong)SCREEN_PROJECTION_MAP_Y;
  fVar8 = (float)fastfunc::FastDoubleToInt
                           ((double)(float)((double)(local_5c - (float)local_50) * dVar12));
  pfVar9[0x39] = fVar8;
  return;
}



//==== 0041bb00  ns=mobyupdate_helpers  size=0x200
// sig: undefined M688_0041bb00(void)
// callers(1): 0041bf10 mobyupdate_helpers::M69_0041bf10
// callees(4): 000f1114 mobyfunc::GetBonePosition; 0015d12c sound::PlayMobySound; 00334aa8 mobyupdate_helpers::Spawn_Moby295; 004fff60 fastfunc::FastDecTimerS32

void mobyupdate_helpers::M688_0041bb00(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 local_50 [32];
  
  iVar3 = fastfunc::FastDecTimerS32(param_2 + 0x84);
  if (((iVar3 != 0) && ((pad_DownButtons & 0x28) != 0)) && (DAT_0096b2d6 != '\0')) {
    iVar3 = (int)param_2;
    uVar2 = *(short *)(iVar3 + 0x6a) + 1U & 3;
    *(ushort *)(iVar3 + 0x6a) = uVar2;
    mobyfunc::GetBonePosition(param_1,(longlong)(short)uVar2 + 7,local_50);
    iVar4 = Spawn_Moby295((double)(mobyutil::g_FrameTime * 100.0),param_1,local_50,
                          *(undefined4 *)(iVar3 + 0xec),param_1 + 0x40,&DAT_0041bae8,
                          (int)(animationSpeed * 300.5));
    if (iVar4 != 0) {
      sound::PlayMobySound(2,0,(MobyInstance *)param_1);
      auVar5 = ZEXT416(0xffffffff);
      auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
      DAT_0096b2d6 = DAT_0096b2d6 + -1;
      auVar6 = vectorShiftLeftIntegerWord(auVar5,auVar5);
      auVar5 = loadVectorLeftIndexed(0x10,0x41bae8);
      auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar7 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar5 = vectorMultiplyAddFloatingPoint
                         (auVar7,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar6);
      auVar5 = vectorConvertToSignedFixedPointWordSaturate(auVar5,0);
      auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar1 = storeVectorElementWordIndexed
                        (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0x84,param_2);
      *(undefined4 *)(iVar3 + 0x84U & 0xfffffffc) = uVar1;
    }
  }
  return;
}



//==== 0041bd08  ns=mobyupdate_helpers  size=0xcc
// sig: undefined M688_0041bd08(void)
// callers(0): 
// callees(2): 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

double mobyupdate_helpers::M688_0041bd08
                 (double param_1,double param_2,double param_3,double param_4,double param_5)

{
  char in_r6;
  int in_r9;
  double dVar1;
  double dVar2;
  
  if (param_4 < param_1) {
    dVar2 = (double)((float)(param_1 - param_4) / (float)(param_5 - param_4));
    if (dVar2 - 0.0 < 0.0) {
      dVar2 = 0.0;
    }
    if (1.0 - dVar2 < 0.0) {
      dVar2 = 1.0;
    }
    if (1 < in_r9) {
      in_r9 = in_r9 + -1;
      do {
        in_r9 = in_r9 + -1;
        dVar2 = (double)(float)(dVar2 * dVar2);
      } while (0 < in_r9);
    }
    if (in_r6 == '\0') {
      param_2 = (double)(float)((double)(float)(1.0 - dVar2) * param_2 +
                               (double)(float)(dVar2 * param_3));
    }
    else {
      dVar1 = (double)fastfunc::FastDiffRots(param_3,param_2);
      param_2 = (double)fastfunc::FastWrapRot((float)param_2,(float)(dVar2 * dVar1));
    }
  }
  return param_2;
}



//==== 0041bdd4  ns=mobyupdate_helpers  size=0x70
// sig: undefined M688_0041bdd4(void)
// callers(0): 
// callees(2): 00059e20 collproc::CollSphere; 000f1114 mobyfunc::GetBonePosition

void mobyupdate_helpers::M688_0041bdd4
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_30 [16];
  
  mobyfunc::GetBonePosition(param_2,param_3,auStack_30);
  collproc::CollSphere(param_1,auStack_30,param_3,param_5,param_6);
  return;
}



//==== 0041bf10  ns=mobyupdate_helpers  size=0x1b70
// sig: undefined M69_0041bf10(void)
// callers(1): 0041dad8 mobyupdate_unsorted::UpdateMoby_69
// callees(19): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00047f74 camera::SetCameraPosition; 00059e20 collproc::CollSphere; 000668d0 draw::UpdateViewContext; 0006d720 RegisterFuncForMoby; 000fe610 mobyutil::MB_SphericalToVector; 00109b40 mobyutil::AccelDelt; 0010a050 mobyutil::AccelDeltAng; 0010e030 mobyutil::MB_genericExplosion; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 0041b7c0 mobyupdate_helpers::M688_0041b7c0; 0041bb00 mobyupdate_helpers::M688_0041bb00; 00500608 fastfunc::FastVecNormalize; 00500b64 fastfunc::FastEulerToMtx; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005cd098 libc::printf
// strings: 006571b0: 'correcting camera mode!\n'

void mobyupdate_helpers::M69_0041bf10(MobyInstance *param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  u8 uVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  short sVar14;
  MOBY_OCLASSES MVar15;
  f32 fVar16;
  uint uVar17;
  uint uVar18;
  undefined2 uVar19;
  ulonglong *puVar20;
  int iVar21;
  Cuboid *pCVar22;
  float fVar23;
  float fVar24;
  ulonglong uVar25;
  int iVar27;
  longlong lVar26;
  undefined *unused;
  int iVar31;
  ulonglong uVar28;
  float *pfVar32;
  undefined4 *unused_00;
  longlong lVar29;
  longlong lVar30;
  longlong lVar33;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar34;
  double dVar35;
  undefined8 uVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  double dVar41;
  ulonglong in_f24;
  double dVar42;
  ulonglong in_f25;
  ulonglong in_f26;
  undefined8 uVar43;
  ulonglong in_f27;
  double dVar44;
  ulonglong in_f28;
  double dVar45;
  ulonglong in_f29;
  double dVar46;
  double dVar47;
  ulonglong in_f30;
  double dVar48;
  double dVar49;
  ulonglong in_f31;
  double dVar50;
  double dVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  
  uVar25 = ZEXT48(&stack0x00000000);
  lVar26 = uVar25 - 0x2f0;
  puVar20 = (ulonglong *)lVar26;
  *puVar20 = uVar25;
  puVar20[0x60] = in_LR;
  puVar20[0x52] = in_f20;
  puVar20[0x53] = in_f21;
  puVar20[0x54] = in_f22;
  puVar20[0x55] = in_f23;
  puVar20[0x56] = in_f24;
  puVar20[0x57] = in_f25;
  puVar20[0x58] = in_f26;
  puVar20[0x59] = in_f27;
  puVar20[0x5a] = in_f28;
  puVar20[0x5b] = in_f29;
  puVar20[0x5c] = in_f30;
  puVar20[0x5d] = in_f31;
  puVar20[0x51] = unaff_r31;
  puVar20[0x50] = unaff_r30;
  dVar44 = 0.0;
  *(undefined4 *)(puVar20 + 0x18) = 0;
  *(undefined4 *)((int)puVar20 + 0xc4) = 0;
  *(undefined4 *)(puVar20 + 0x19) = 0;
  *(undefined4 *)((int)puVar20 + 0xcc) = 0;
  uVar43 = 0x4020000000000000;
  fVar55 = mobyutil::g_FrameTime * 8.0;
  cVar2 = param_1->setByGroup;
  param_1->modeBits =
       param_1->modeBits &
       (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
        DRAW_TRANSPARENT_WEIRD|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
        NO_UPDATE|DISABLED);
  puVar20[0x4f] = unaff_r29;
  puVar20[0x4e] = unaff_r28;
  puVar20[0x4d] = unaff_r27;
  *(float *)(puVar20 + 0x19) = fVar55;
  iVar21 = (int)param_2;
  if (cVar2 == '\0') {
    sVar14 = *(short *)(iVar21 + 0x68);
    puVar20[0x4a] = (longlong)(int)(animationSpeed * 120.5);
    if (*(int *)((int)puVar20 + 0x254) < (int)sVar14) {
      if ((pad_Repeat & 0x40) == 0) {
        if ((DAT_00964af8 & 0x40) != 0) {
          iVar27 = *(int *)(iVar21 + 0x10c);
          if (((iVar27 != -1) && (sound::g_SoundChannels[iVar27].pMoby == param_1)) &&
             (sound::g_SoundChannels[iVar27].state != '\0')) {
            sound::sound_Kill(iVar27);
          }
          *(undefined4 *)(iVar21 + 0x10c) = 0xffffffff;
        }
      }
      else {
        iVar27 = *(int *)(iVar21 + 0x10c);
        if (((iVar27 != -1) && (sound::g_SoundChannels[iVar27].pMoby == param_1)) &&
           (sound::g_SoundChannels[iVar27].state != '\0')) {
          sound::sound_Kill(iVar27);
        }
        *(undefined4 *)(iVar21 + 0x10c) = 0xffffffff;
        iVar27 = sound::PlayMobySound(1,4,param_1);
        *(int *)(iVar21 + 0x10c) = iVar27;
      }
      if ((pad_DownButtons & 0x40) == 0) {
        fVar55 = *(float *)(iVar21 + 100);
        fVar5 = mobyutil::g_FrameTime * 24.0;
        if (mobyutil::g_FrameTime * 24.0 - fVar55 < 0.0) {
          fVar5 = DAT_0071f408 * 0.1 * (mobyutil::g_FrameTime * 24.0 - fVar55) + fVar55;
        }
        if (fVar55 - (mobyutil::g_FrameTime * 24.0 - DAT_0071f408 * 0.025) < 0.0) {
          fVar5 = DAT_0071f408 * 0.025 + fVar55;
        }
        *(float *)(iVar21 + 100) = fVar5;
      }
      else {
        fVar55 = DAT_0071f408 * 0.035 + *(float *)(iVar21 + 100);
        *(float *)(iVar21 + 100) = fVar55;
        if (mobyutil::g_FrameTime * 30.0 < fVar55) {
          *(float *)(iVar21 + 100) = mobyutil::g_FrameTime * 30.0;
        }
      }
    }
    else {
      *(short *)(iVar21 + 0x68) = sVar14 + 1;
      *(float *)(iVar21 + 100) = DAT_0071f408 * 0.003 + *(float *)(iVar21 + 100);
    }
  }
  else {
    *(undefined4 *)(iVar21 + 100) = 0x38d1b717;
  }
  sVar14 = *(short *)(iVar21 + 0x68);
  puVar20[0x4a] = (longlong)(int)(animationSpeed * 5.5);
  if (*(int *)((int)puVar20 + 0x254) < (int)sVar14) {
    unused = &DAT_00720000;
    fVar55 = 0.1;
    dVar35 = (double)hero::g_heroPadStick;
    dVar50 = (double)DAT_0096ba04;
    fVar5 = 0.25;
    if ((g_downButtons & L3) != 0) {
      fVar55 = 0.08;
      dVar35 = (double)(DAT_0071f408 * 0.015707964 *
                       (float)(dVar35 / (double)(DAT_0071f408 * 0.012271847)));
      dVar50 = (double)(DAT_0071f408 * 0.015707964 *
                       (float)(dVar50 / (double)(DAT_0071f408 * 0.012271847)));
      fVar5 = fVar55;
    }
    dVar48 = (double)(DAT_0071f408 * fVar5);
    dVar46 = 0.029999999329447746;
    mobyutil::AccelDelt((float)dVar35,DAT_0071f40c * 0.03,DAT_0071f40c,DAT_0071f408 * fVar55,
                        (float *)(iVar21 + 0x6c),0x720000,(float *)(iVar21 + 0x90));
    mobyutil::AccelDelt((float)dVar50,(float)((double)DAT_0071f40c * dVar46),DAT_0071f40c,
                        (float)dVar48,(float *)(iVar21 + 0x70),(int)unused,(float *)(iVar21 + 0x94))
    ;
    mobyutil::AccelDeltAng
              ((double)*(float *)(iVar21 + 0x6c),
               (double)(float)((double)DAT_0071f40c * 0.05000000074505806),(double)DAT_0071f40c,
               (double)DAT_0071f408,param_2 + 0x30);
    dVar50 = 0.012271846644580364;
    dVar35 = (double)fastfunc::FastDiffRots
                               ((double)*(float *)(iVar21 + 0x34),
                                (double)(DAT_0071f408 * 0.012271847 * *(float *)(iVar21 + 0x70)));
    *(float *)(iVar21 + 0x34) = (float)dVar35;
    dVar35 = (double)fastfunc::FastDiffRots
                               ((double)*(float *)(iVar21 + 0x38),
                                (double)((float)((double)DAT_0071f408 * dVar50) *
                                        *(float *)(iVar21 + 0x6c)));
    *(float *)(iVar21 + 0x38) = (float)dVar35;
    uVar17 = (int)*(uint *)(iVar21 + 0x34) >> 0x1f;
    fVar16 = (param_1->rotation).y;
    uVar18 = (int)fVar16 >> 0x1f;
    iVar31 = (uVar17 >> 1 ^ *(uint *)(iVar21 + 0x34)) - uVar17;
    iVar27 = (uVar18 >> 1 ^ (uint)fVar16) - uVar18;
    if (iVar31 < 0x3fb2b8c3) {
      if (iVar31 < -0x3fb2b8c2) {
        *(undefined4 *)(iVar21 + 0x34) = 0xbfb2b8c2;
      }
    }
    else {
      *(undefined4 *)(iVar21 + 0x34) = 0x3fb2b8c2;
    }
    if (iVar27 < 0x3fb2b8c3) {
      if (iVar27 < -0x3fb2b8c2) {
        (param_1->rotation).y = -1.3962634;
      }
    }
    else {
      (param_1->rotation).y = 1.3962634;
    }
  }
  fVar55 = 310.0;
  fVar5 = 500.0;
  fVar8 = DAT_00857828;
  fVar7 = DAT_00857824;
  fVar6 = DAT_00857820;
  if (*(int *)(iVar21 + 0x110) != -1) {
    pCVar22 = Cuboids + *(int *)(iVar21 + 0x110);
    fVar55 = (pCVar22->matrix).v2.y;
    fVar7 = (pCVar22->matrix).v0.y + (pCVar22->matrix).v1.y;
    fVar5 = (pCVar22->matrix).v2.x;
    fVar8 = (pCVar22->matrix).v0.x + (pCVar22->matrix).v1.x;
    fVar6 = (pCVar22->matrix).v2.z;
    fVar9 = (pCVar22->matrix).v0.z + (pCVar22->matrix).v1.z;
    fVar55 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar55 * fVar55);
    fVar5 = SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7);
    fVar8 = (pCVar22->pos).z;
    fVar7 = (pCVar22->pos).y;
    fVar6 = (pCVar22->pos).x;
  }
  dVar49 = (double)fVar55;
  dVar47 = (double)fVar5;
  dVar45 = (double)fVar6;
  dVar42 = (double)fVar7;
  dVar41 = (double)fVar8;
  dVar46 = (double)(param_1->pos).x;
  dVar48 = (double)(param_1->pos).y;
  dVar37 = (double)DAT_00857820;
  dVar39 = ABS((double)(float)(dVar45 - dVar46));
  dVar38 = ABS((double)(float)(dVar42 - dVar48));
  *(float *)(puVar20 + 0x30) = (float)(dVar45 - dVar46);
  dVar35 = (double)DAT_00857824;
  *(float *)((int)puVar20 + 0x184) = (float)(dVar42 - dVar48);
  *(float *)(puVar20 + 0x31) = (float)(dVar39 - dVar38);
  dVar50 = (double)*(float *)(iVar21 + 0x38);
  dVar51 = 0.7853981852531433;
  uVar28 = (ulonglong)(*(uint *)(puVar20 + 0x30) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar20 + 0x31) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar20 + 0x184) >> 0x1d) & 4;
  dVar37 = (double)SQRT((float)(dVar46 - dVar37) * (float)(dVar46 - dVar37) +
                        (float)(dVar48 - dVar35) * (float)(dVar48 - dVar35));
  dVar35 = ABS((double)*(float *)(puVar20 + 0x30));
  if ((double)*(float *)(puVar20 + 0x31) - dVar44 < 0.0) {
    dVar35 = dVar38;
  }
  fVar55 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar28 << 2));
  dVar38 = ABS((double)*(float *)((int)puVar20 + 0x184));
  if ((double)*(float *)(puVar20 + 0x31) - dVar44 < 0.0) {
    dVar38 = dVar39;
  }
  fVar5 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
  dVar39 = dVar44;
  if (dVar44 < dVar35) {
    lVar29 = uVar25 - 0x2e0;
    lVar30 = uVar25 - 0xc4;
    lVar33 = uVar25 - 0xb4;
    lVar34 = 2;
    fVar6 = (float)(dVar38 - dVar35) / (float)(dVar38 + dVar35);
    fVar7 = fVar6 * fVar6;
    *(float *)(puVar20 + 0x47) = fVar6;
    *(float *)(puVar20 + 0x46) = fVar6;
    *(float *)((int)puVar20 + 0x234) = fVar6;
    *(float *)((int)puVar20 + 0x22c) = fVar6;
    fVar6 = fVar7 * fVar7;
    *(float *)(puVar20 + 0x46) = *(float *)(puVar20 + 0x46) * fVar7;
    *(float *)((int)puVar20 + 0x234) = *(float *)((int)puVar20 + 0x234) * fVar6;
    *(float *)(puVar20 + 0x47) = *(float *)(puVar20 + 0x47) * fVar6 * fVar7;
    do {
      *(float *)((int)lVar29 + 0x22c) = *(float *)((int)lVar29 + 0x21c) * fVar6 * fVar6;
      iVar27 = (int)lVar30;
      lVar29 = lVar29 + 8;
      lVar30 = lVar30 + 8;
      *(float *)((int)lVar33 + 4) = *(float *)(iVar27 + 4) * fVar6 * fVar6;
      lVar33 = lVar33 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar34 = 4;
    lVar33 = uVar25 - 0xc4;
    pfVar32 = (float *)&DAT_007358e0;
    lVar29 = lVar26;
    lVar30 = lVar33;
    do {
      fVar6 = *pfVar32;
      fVar7 = pfVar32[1];
      pfVar32 = pfVar32 + 2;
      *(float *)((int)lVar29 + 0x22c) = *(float *)((int)lVar29 + 0x22c) * fVar6;
      lVar29 = lVar29 + 8;
      *(float *)((int)lVar30 + 4) = *(float *)((int)lVar30 + 4) * fVar7;
      lVar30 = lVar30 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar30 = 2;
    lVar29 = lVar26;
    dVar35 = dVar44;
    do {
      iVar27 = (int)lVar29;
      lVar29 = lVar29 + 0x10;
      iVar31 = (int)lVar33;
      lVar33 = lVar33 + 0x10;
      dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar27 + 0x22c)) +
                        *(float *)(iVar31 + 4) + *(float *)(iVar31 + 8) + *(float *)(iVar31 + 0xc));
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    dVar39 = (double)((float)(dVar35 + 0.7853981852531433) * fVar55 + fVar5);
  }
  dVar35 = 50.0;
  if (50.0 < dVar37) {
    dVar46 = (double)((float)(dVar37 - 50.0) / (float)(dVar47 - 50.0));
    if (dVar46 - dVar44 < 0.0) {
      dVar46 = dVar44;
    }
    if (1.0 - dVar46 < 0.0) {
      dVar46 = 1.0;
    }
    fVar55 = (float)(dVar46 * dVar46) * (float)(dVar46 * dVar46);
    fVar55 = fVar55 * fVar55;
    dVar48 = (double)(fVar55 * fVar55);
    dVar46 = (double)fastfunc::FastDiffRots(dVar39,dVar50);
    dVar50 = (double)fastfunc::FastWrapRot((float)dVar50,(float)(dVar48 * dVar46));
    dVar46 = (double)(param_1->pos).x;
    dVar48 = (double)(param_1->pos).y;
  }
  *(float *)(iVar21 + 0x38) = (float)dVar50;
  dVar40 = ABS((double)(float)(dVar42 - dVar48));
  dVar39 = ABS((double)(float)(dVar45 - dVar46));
  *(float *)((int)puVar20 + 0x174) = (float)(dVar45 - dVar46);
  *(float *)(puVar20 + 0x2f) = (float)(dVar42 - dVar48);
  dVar38 = (double)(param_1->rotation).z;
  *(float *)((int)puVar20 + 0x17c) = (float)(dVar39 - dVar40);
  uVar28 = (ulonglong)(*(uint *)((int)puVar20 + 0x174) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar20 + 0x17c) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar20 + 0x2f) >> 0x1d) & 4;
  dVar50 = ABS((double)*(float *)((int)puVar20 + 0x174));
  if ((double)*(float *)((int)puVar20 + 0x17c) - dVar44 < 0.0) {
    dVar50 = dVar40;
  }
  fVar55 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar28 << 2));
  dVar40 = ABS((double)*(float *)(puVar20 + 0x2f));
  if ((double)*(float *)((int)puVar20 + 0x17c) - dVar44 < 0.0) {
    dVar40 = dVar39;
  }
  fVar5 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
  dVar39 = dVar44;
  if (dVar44 < dVar50) {
    lVar29 = uVar25 - 0x2e0;
    lVar33 = uVar25 - 0xd4;
    lVar30 = uVar25 - 0xe4;
    lVar34 = 2;
    fVar6 = (float)(dVar40 - dVar50) / (float)(dVar40 + dVar50);
    fVar7 = fVar6 * fVar6;
    *(float *)(puVar20 + 0x43) = fVar6;
    *(float *)(puVar20 + 0x42) = fVar6;
    *(float *)((int)puVar20 + 0x214) = fVar6;
    *(float *)((int)puVar20 + 0x20c) = fVar6;
    fVar6 = fVar7 * fVar7;
    *(float *)(puVar20 + 0x42) = *(float *)(puVar20 + 0x42) * fVar7;
    *(float *)((int)puVar20 + 0x214) = *(float *)((int)puVar20 + 0x214) * fVar6;
    *(float *)(puVar20 + 0x43) = *(float *)(puVar20 + 0x43) * fVar6 * fVar7;
    do {
      *(float *)((int)lVar29 + 0x20c) = *(float *)((int)lVar29 + 0x1fc) * fVar6 * fVar6;
      iVar27 = (int)lVar30;
      lVar30 = lVar30 + 8;
      lVar29 = lVar29 + 8;
      *(float *)((int)lVar33 + 4) = *(float *)(iVar27 + 4) * fVar6 * fVar6;
      lVar33 = lVar33 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar34 = 4;
    lVar33 = uVar25 - 0xe4;
    pfVar32 = (float *)&DAT_007358e0;
    lVar29 = lVar26;
    lVar30 = lVar33;
    do {
      fVar6 = *pfVar32;
      fVar7 = pfVar32[1];
      pfVar32 = pfVar32 + 2;
      *(float *)((int)lVar29 + 0x20c) = *(float *)((int)lVar29 + 0x20c) * fVar6;
      lVar29 = lVar29 + 8;
      *(float *)((int)lVar30 + 4) = *(float *)((int)lVar30 + 4) * fVar7;
      lVar30 = lVar30 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar30 = 2;
    lVar29 = lVar26;
    dVar50 = dVar44;
    do {
      iVar27 = (int)lVar29;
      iVar31 = (int)lVar33;
      lVar29 = lVar29 + 0x10;
      lVar33 = lVar33 + 0x10;
      dVar50 = (double)((float)(dVar50 + (double)*(float *)(iVar27 + 0x20c)) +
                        *(float *)(iVar31 + 4) + *(float *)(iVar31 + 8) + *(float *)(iVar31 + 0xc));
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    dVar39 = (double)((float)(dVar50 + dVar51) * fVar55 + fVar5);
  }
  if (dVar35 < dVar37) {
    dVar50 = (double)((float)(dVar37 - dVar35) / (float)(dVar47 - dVar35));
    if (dVar50 - dVar44 < 0.0) {
      dVar50 = dVar44;
    }
    if (1.0 - dVar50 < 0.0) {
      dVar50 = 1.0;
    }
    fVar55 = (float)(dVar50 * dVar50) * (float)(dVar50 * dVar50);
    fVar55 = fVar55 * fVar55;
    dVar46 = (double)(fVar55 * fVar55);
    dVar50 = (double)fastfunc::FastDiffRots(dVar39,dVar38);
    dVar38 = (double)fastfunc::FastWrapRot((float)dVar38,(float)(dVar46 * dVar50));
    dVar46 = (double)(param_1->pos).x;
    dVar48 = (double)(param_1->pos).y;
  }
  dVar39 = (double)(param_1->pos).z;
  (param_1->rotation).z = (float)dVar38;
  dVar37 = (double)*(float *)(iVar21 + 0x34);
  *(float *)((int)puVar20 + 0x16c) = (float)(dVar41 - dVar39);
  fVar55 = SQRT((float)(dVar46 - dVar45) * (float)(dVar46 - dVar45) +
                (float)(dVar48 - dVar42) * (float)(dVar48 - dVar42));
  dVar38 = ABS((double)(float)(dVar41 - dVar39));
  dVar47 = ABS((double)fVar55);
  *(float *)(puVar20 + 0x2d) = fVar55;
  *(float *)(puVar20 + 0x2e) = (float)(dVar47 - dVar38);
  uVar28 = (ulonglong)(*(uint *)(puVar20 + 0x2d) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar20 + 0x2e) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar20 + 0x16c) >> 0x1d) & 4;
  dVar50 = ABS((double)*(float *)(puVar20 + 0x2d));
  if ((double)*(float *)(puVar20 + 0x2e) - dVar44 < 0.0) {
    dVar50 = dVar38;
  }
  fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar28 << 2));
  fVar55 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
  dVar40 = ABS((double)*(float *)((int)puVar20 + 0x16c));
  if ((double)*(float *)(puVar20 + 0x2e) - dVar44 < 0.0) {
    dVar40 = dVar47;
  }
  dVar47 = dVar44;
  if (dVar44 < dVar50) {
    lVar29 = uVar25 - 0x2e0;
    lVar30 = uVar25 - 0x104;
    lVar33 = uVar25 - 0xf4;
    lVar34 = 2;
    fVar6 = (float)(dVar40 - dVar50) / (float)(dVar40 + dVar50);
    fVar7 = fVar6 * fVar6;
    *(float *)(puVar20 + 0x3f) = fVar6;
    *(float *)(puVar20 + 0x3e) = fVar6;
    *(float *)((int)puVar20 + 500) = fVar6;
    *(float *)((int)puVar20 + 0x1ec) = fVar6;
    fVar6 = fVar7 * fVar7;
    *(float *)(puVar20 + 0x3e) = *(float *)(puVar20 + 0x3e) * fVar7;
    *(float *)((int)puVar20 + 500) = *(float *)((int)puVar20 + 500) * fVar6;
    *(float *)(puVar20 + 0x3f) = *(float *)(puVar20 + 0x3f) * fVar6 * fVar7;
    do {
      *(float *)((int)lVar29 + 0x1ec) = *(float *)((int)lVar29 + 0x1dc) * fVar6 * fVar6;
      iVar27 = (int)lVar30;
      lVar29 = lVar29 + 8;
      lVar30 = lVar30 + 8;
      *(float *)((int)lVar33 + 4) = *(float *)(iVar27 + 4) * fVar6 * fVar6;
      lVar33 = lVar33 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar34 = 4;
    lVar33 = uVar25 - 0x104;
    pfVar32 = (float *)&DAT_007358e0;
    lVar29 = lVar26;
    lVar30 = lVar33;
    do {
      fVar6 = *pfVar32;
      fVar7 = pfVar32[1];
      pfVar32 = pfVar32 + 2;
      *(float *)((int)lVar29 + 0x1ec) = *(float *)((int)lVar29 + 0x1ec) * fVar6;
      lVar29 = lVar29 + 8;
      *(float *)((int)lVar30 + 4) = *(float *)((int)lVar30 + 4) * fVar7;
      lVar30 = lVar30 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar30 = 2;
    lVar29 = lVar26;
    dVar50 = dVar44;
    do {
      iVar27 = (int)lVar29;
      lVar29 = lVar29 + 0x10;
      iVar31 = (int)lVar33;
      lVar33 = lVar33 + 0x10;
      dVar50 = (double)((float)(dVar50 + (double)*(float *)(iVar27 + 0x1ec)) +
                        *(float *)(iVar31 + 4) + *(float *)(iVar31 + 8) + *(float *)(iVar31 + 0xc));
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    dVar47 = (double)((float)(dVar50 + dVar51) * fVar5 + fVar55);
  }
  if (dVar35 < dVar38) {
    dVar50 = (double)((float)(dVar38 - dVar35) / (float)(dVar49 - dVar35));
    if (dVar50 - dVar44 < 0.0) {
      dVar50 = dVar44;
    }
    if (1.0 - dVar50 < 0.0) {
      dVar50 = 1.0;
    }
    fVar55 = (float)(dVar50 * dVar50) * (float)(dVar50 * dVar50);
    fVar55 = fVar55 * fVar55;
    dVar46 = (double)(fVar55 * fVar55);
    dVar50 = (double)fastfunc::FastDiffRots(-dVar47,dVar37);
    dVar37 = (double)fastfunc::FastWrapRot((float)dVar37,(float)(dVar46 * dVar50));
    dVar39 = (double)(param_1->pos).z;
    dVar46 = (double)(param_1->pos).x;
    dVar48 = (double)(param_1->pos).y;
  }
  fVar55 = SQRT((float)(dVar46 - dVar45) * (float)(dVar46 - dVar45) +
                (float)(dVar48 - dVar42) * (float)(dVar48 - dVar42));
  *(float *)(puVar20 + 0x2c) = (float)(dVar41 - dVar39);
  *(float *)(iVar21 + 0x34) = (float)dVar37;
  dVar48 = (double)(param_1->rotation).y;
  dVar46 = ABS((double)(float)(dVar41 - dVar39));
  dVar38 = ABS((double)fVar55);
  *(float *)((int)puVar20 + 0x15c) = fVar55;
  *(float *)((int)puVar20 + 0x164) = (float)(dVar38 - dVar46);
  uVar28 = (ulonglong)(*(uint *)((int)puVar20 + 0x15c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar20 + 0x164) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar20 + 0x2c) >> 0x1d) & 4;
  dVar50 = ABS((double)*(float *)((int)puVar20 + 0x15c));
  if ((double)*(float *)((int)puVar20 + 0x164) - dVar44 < 0.0) {
    dVar50 = dVar46;
  }
  fVar55 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar28 << 2));
  dVar39 = ABS((double)*(float *)(puVar20 + 0x2c));
  if ((double)*(float *)((int)puVar20 + 0x164) - dVar44 < 0.0) {
    dVar39 = dVar38;
  }
  fVar5 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
  dVar38 = dVar44;
  if (dVar44 < dVar50) {
    lVar29 = uVar25 - 0x2e0;
    lVar30 = uVar25 - 0x124;
    lVar33 = uVar25 - 0x114;
    lVar34 = 2;
    fVar6 = (float)(dVar39 - dVar50) / (float)(dVar39 + dVar50);
    fVar7 = fVar6 * fVar6;
    *(float *)(puVar20 + 0x3b) = fVar6;
    *(float *)(puVar20 + 0x3a) = fVar6;
    *(float *)((int)puVar20 + 0x1d4) = fVar6;
    *(float *)((int)puVar20 + 0x1cc) = fVar6;
    fVar6 = fVar7 * fVar7;
    *(float *)(puVar20 + 0x3a) = *(float *)(puVar20 + 0x3a) * fVar7;
    *(float *)((int)puVar20 + 0x1d4) = *(float *)((int)puVar20 + 0x1d4) * fVar6;
    *(float *)(puVar20 + 0x3b) = *(float *)(puVar20 + 0x3b) * fVar6 * fVar7;
    do {
      *(float *)((int)lVar29 + 0x1cc) = *(float *)((int)lVar29 + 0x1bc) * fVar6 * fVar6;
      iVar27 = (int)lVar30;
      lVar29 = lVar29 + 8;
      lVar30 = lVar30 + 8;
      *(float *)((int)lVar33 + 4) = *(float *)(iVar27 + 4) * fVar6 * fVar6;
      lVar33 = lVar33 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar34 = 4;
    lVar33 = uVar25 - 0x124;
    pfVar32 = (float *)&DAT_007358e0;
    lVar29 = lVar26;
    lVar30 = lVar33;
    do {
      fVar6 = *pfVar32;
      fVar7 = pfVar32[1];
      pfVar32 = pfVar32 + 2;
      *(float *)((int)lVar29 + 0x1cc) = *(float *)((int)lVar29 + 0x1cc) * fVar6;
      lVar29 = lVar29 + 8;
      *(float *)((int)lVar30 + 4) = *(float *)((int)lVar30 + 4) * fVar7;
      lVar30 = lVar30 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar30 = 2;
    lVar29 = lVar26;
    dVar50 = dVar44;
    do {
      iVar27 = (int)lVar29;
      lVar29 = lVar29 + 0x10;
      iVar31 = (int)lVar33;
      lVar33 = lVar33 + 0x10;
      dVar50 = (double)((float)(dVar50 + (double)*(float *)(iVar27 + 0x1cc)) +
                        *(float *)(iVar31 + 4) + *(float *)(iVar31 + 8) + *(float *)(iVar31 + 0xc));
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    dVar38 = (double)((float)(dVar50 + dVar51) * fVar55 + fVar5);
  }
  if (dVar35 < dVar46) {
    dVar50 = (double)((float)(dVar46 - dVar35) / (float)(dVar49 - dVar35));
    if (dVar50 - dVar44 < 0.0) {
      dVar50 = dVar44;
    }
    if (1.0 - dVar50 < 0.0) {
      dVar50 = 1.0;
    }
    fVar55 = (float)(dVar50 * dVar50) * (float)(dVar50 * dVar50);
    fVar55 = fVar55 * fVar55;
    dVar46 = (double)(fVar55 * fVar55);
    dVar50 = (double)fastfunc::FastDiffRots(-dVar38,dVar48);
    dVar48 = (double)fastfunc::FastWrapRot((float)dVar48,(float)(dVar46 * dVar50));
    dVar37 = (double)*(float *)(iVar21 + 0x34);
  }
  (param_1->rotation).y = (float)dVar48;
  mobyutil::MB_SphericalToVector
            (*(float *)(iVar21 + 100),*(float *)(iVar21 + 0x38),(float)-dVar37,
             (float *)(puVar20 + 0x1a));
  fVar55 = *(float *)((int)puVar20 + 0xd4);
  fVar5 = *(float *)(puVar20 + 0x1a);
  fVar6 = *(float *)(puVar20 + 0x1b);
  fVar7 = *(float *)(iVar21 + 100);
  fVar8 = *(float *)(iVar21 + 0x70);
  fVar9 = *(float *)(iVar21 + 0x6c);
  fVar10 = (param_1->pos).x;
  fVar11 = (param_1->pos).y;
  fVar12 = (param_1->pos).z;
  cVar2 = param_1->setByGroup;
  fVar23 = fVar6 * fVar6 + fVar5 * fVar5 + fVar55 * fVar55;
  uVar3 = param_1->state;
  bVar4 = *(byte *)(iVar21 + 0x60);
  if ((double)SQRT(fVar23) == dVar44) {
    uVar13 = *(undefined4 *)((int)puVar20 + 0xdc);
    dVar50 = dVar44;
    dVar46 = dVar44;
    dVar48 = dVar44;
  }
  else {
    fVar24 = 1.0 / SQRT(fVar23);
    fVar24 = -(fVar23 * fVar24 * fVar24 - 1.0) * fVar24 * 0.5 + fVar24;
    uVar13 = *(undefined4 *)((int)puVar20 + 0xdc);
    fVar24 = -(fVar23 * fVar24 * fVar24 - 1.0) * fVar24 * 0.5 + fVar24;
    fVar24 = -(fVar23 * fVar24 * fVar24 - 1.0) * fVar24 * 0.5 + fVar24;
    dVar48 = (double)(fVar5 * fVar24);
    dVar46 = (double)(fVar55 * fVar24);
    dVar50 = (double)(fVar6 * fVar24);
  }
  *(float *)(iVar21 + 0x10) = (float)dVar48;
  *(float *)(iVar21 + 0x14) = (float)dVar46;
  *(float *)(iVar21 + 0x18) = (float)dVar50;
  *(undefined4 *)(iVar21 + 0x1c) = uVar13;
  if (cVar2 == '\0') {
    (param_1->pos).x = fVar10 + fVar5;
    (param_1->pos).y = fVar11 + fVar55;
    (param_1->pos).z = fVar12 + fVar6;
  }
  fVar5 = mobyutil::g_FrameTime;
  dVar50 = -(double)(mobyutil::g_FrameTime * 24.0 - fVar7);
  fVar55 = mobyutil::g_FrameTime * 24.0;
  *(undefined4 *)((int)puVar20 + 0x10c) = 0;
  *(undefined4 *)(puVar20 + 0x22) = 0xbfa33333;
  *(undefined4 *)((int)puVar20 + 0x114) = 0;
  *(undefined4 *)((int)puVar20 + 0x11c) = 0;
  *(undefined4 *)(puVar20 + 0x23) = 0x3f266666;
  if (dVar50 - dVar44 < 0.0) {
    dVar50 = dVar44;
  }
  fVar55 = (float)(dVar50 / (double)(fVar5 * 30.0 - fVar55));
  dVar46 = (double)fVar55;
  *(float *)(iVar21 + 0xc4) = fVar55;
  *(float *)(puVar20 + 0x20) = -(float)(dVar46 * 4.0 - (double)(-15.0 - fVar8)) * 0.25;
  *(float *)((int)puVar20 + 0x104) = fVar9 * -3.0 * 0.25;
  dVar50 = 2.0;
  fVar55 = (fVar8 * 2.0 + 4.0) * 0.25;
  *(float *)(puVar20 + 0x21) = fVar55;
  if (uVar3 == '\x02') {
    fVar5 = *(float *)(puVar20 + (uint)bVar4 * 2 + 0x20);
    fVar6 = *(float *)((int)puVar20 + (uint)bVar4 * 0x10 + 0x104);
    *(float *)(iVar21 + 0xb4) = fVar5;
    fVar7 = *(float *)(puVar20 + (uint)bVar4 * 2 + 0x21);
    *(float *)(iVar21 + 0xb8) = fVar6;
    *(float *)(iVar21 + 0xbc) = fVar7;
  }
  else {
    dVar37 = 0.15000000596046448;
    dVar48 = 0.800000011920929;
    mobyutil::AccelDelt(*(float *)(puVar20 + (uint)bVar4 * 2 + 0x20),DAT_0071f40c * 0.15,
                        DAT_0071f40c * 0.8,DAT_0071f408,(float *)(iVar21 + 0xb4),0x41be44,
                        (float *)(iVar21 + 200));
    mobyutil::AccelDelt(*(float *)((int)(puVar20 + (uint)*(byte *)(iVar21 + 0x60) * 2) + 0x104),
                        (float)((double)DAT_0071f40c * dVar37),
                        (float)((double)DAT_0071f40c * dVar48),DAT_0071f408,(float *)(iVar21 + 0xb8)
                        ,(int)(puVar20 + (uint)*(byte *)(iVar21 + 0x60) * 2),
                        (float *)(iVar21 + 0xcc));
    fVar55 = mobyutil::AccelDelt(*(float *)(puVar20 + (uint)*(byte *)(iVar21 + 0x60) * 2 + 0x21),
                                 (float)((double)DAT_0071f40c * dVar37),
                                 (float)((double)DAT_0071f40c * dVar48),DAT_0071f408,
                                 (float *)(iVar21 + 0xbc),
                                 (int)(puVar20 + (uint)*(byte *)(iVar21 + 0x60) * 2),
                                 (float *)(iVar21 + 0xd0));
    fVar5 = *(float *)(iVar21 + 0xb4);
    fVar6 = *(float *)(iVar21 + 0xb8);
    fVar7 = *(float *)(iVar21 + 0xbc);
  }
  dVar38 = (double)fVar5;
  dVar37 = (double)fVar6;
  dVar48 = (double)fVar7;
  unused_00 = (undefined4 *)(iVar21 + 0x30);
  fastfunc::FastEulerToMtx((double)fVar55,uVar25 - 0x1d0);
  fVar55 = (param_1->pos).x;
  fVar5 = (param_1->pos).y;
  fVar6 = (param_1->pos).z;
  *(f32 *)((int)puVar20 + 0xfc) = (param_1->pos).w;
  *(float *)(puVar20 + 0x1e) =
       fVar55 + (float)((double)*(float *)(puVar20 + 0x28) * dVar48 +
                       (double)(float)((double)*(float *)(puVar20 + 0x24) * dVar38 +
                                      (double)(float)((double)*(float *)(puVar20 + 0x26) * dVar37)))
  ;
  *(float *)((int)puVar20 + 0xf4) =
       fVar5 + (float)((double)*(float *)((int)puVar20 + 0x144) * dVar48 +
                      (double)(float)((double)*(float *)((int)puVar20 + 0x124) * dVar38 +
                                     (double)(float)((double)*(float *)((int)puVar20 + 0x134) *
                                                    dVar37)));
  *(float *)(puVar20 + 0x1f) =
       fVar6 + (float)((double)*(float *)(puVar20 + 0x29) * dVar48 +
                      (double)(float)((double)*(float *)(puVar20 + 0x25) * dVar38 +
                                     (double)(float)((double)*(float *)(puVar20 + 0x27) * dVar37)));
  camera::camera5::Camera_SetMobyDrivenTargetPos((float *)(puVar20 + 0x1e));
  dVar39 = 0.5;
  dVar48 = (double)fastfunc::FastWrapRot
                             (*(float *)(iVar21 + 0x30) * 0.5,*(float *)(iVar21 + 0x6c) * 0.03125);
  uVar36 = fastfunc::FastWrapRot(*(float *)(iVar21 + 0x34),0.09817477);
  dVar37 = (double)fastfunc::FastDiffRots
                             (uVar36,(double)(DAT_0071f408 * 0.012271847 * *(float *)(iVar21 + 0x70)
                                             ));
  dVar38 = (double)*(float *)(iVar21 + 0x38);
  if (param_1->state == '\x02') {
    *(float *)(iVar21 + 0x20) = (float)dVar48;
    *(float *)(iVar21 + 0x24) = (float)dVar37;
    *(float *)(iVar21 + 0x28) = *(float *)(iVar21 + 0x38);
    *(float *)(iVar21 + 0x2c) = (float)dVar37;
  }
  else {
    unused_00 = &DAT_0041be44;
    dVar42 = 0.15000000596046448;
    dVar41 = 0.800000011920929;
    mobyutil::AccelDeltAng
              (dVar48,(double)(DAT_0071f40c * 0.15),(double)(DAT_0071f40c * 0.8),
               (double)DAT_0071f408,param_2 + 0x20,&DAT_0041be44,param_2 + 0xa0);
    mobyutil::AccelDeltAng
              (dVar37,(double)(float)((double)DAT_0071f40c * dVar42),
               (double)(float)((double)DAT_0071f40c * dVar41),(double)DAT_0071f408,param_2 + 0x24);
    mobyutil::AccelDeltAng
              (dVar38,(double)(float)((double)DAT_0071f40c * dVar42),
               (double)(float)((double)DAT_0071f40c * dVar41),(double)DAT_0071f408,param_2 + 0x28);
    dVar48 = (double)*(float *)(iVar21 + 0x20);
    dVar38 = (double)*(float *)(iVar21 + 0x28);
    dVar37 = (double)*(float *)(iVar21 + 0x24);
  }
  *(float *)(puVar20 + 0x1c) = (float)dVar48;
  *(float *)(puVar20 + 0x1d) = (float)dVar38;
  *(float *)((int)puVar20 + 0xe4) = (float)dVar37;
  camera::camera5::Camera_SetMobyDrivenTargetRot((float *)(puVar20 + 0x1c));
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) != 5) {
    libc::printf("correcting camera mode!\n");
    lVar29 = uVar25 - 0x210;
    camera::SetCameraPosition(uVar25 - 0x200,lVar29,0,0,0);
    unused_00 = (undefined4 *)lVar29;
  }
  uVar36 = 0x3ff0000000000000;
  mobyutil::AccelDelt((float)(dVar46 * 0.34906578063964844 + 1.1344640254974365),0.05,1.0,1.0,
                      (float *)(iVar21 + 0xb0),(int)unused_00,(float *)(iVar21 + 0xc0));
  fVar55 = (float)((double)*(float *)(iVar21 + 0xb0) * dVar39);
  fVar6 = fVar55 + 1.5707963;
  fVar5 = 3.1415925 - fVar55;
  if (fVar55 - (3.1415925 - fVar55) < 0.0) {
    fVar5 = fVar55;
  }
  fVar7 = 3.1415925 - fVar6;
  if (fVar6 - (3.1415925 - fVar6) < 0.0) {
    fVar7 = fVar6;
  }
  fVar8 = -3.1415925 - fVar55;
  if ((-3.1415925 - fVar55) - fVar5 < 0.0) {
    fVar8 = fVar5;
  }
  fVar5 = fVar8 * fVar8;
  fVar55 = -3.1415925 - fVar6;
  if ((-3.1415925 - fVar6) - fVar7 < 0.0) {
    fVar55 = fVar7;
  }
  fVar6 = fVar55 * fVar55;
  fVar7 = fVar5 * fVar5 * fVar8;
  fVar9 = fVar5 * fVar7;
  fVar10 = fVar6 * fVar6 * fVar55;
  fVar11 = fVar6 * fVar10;
  ViewContext.xratio =
       (fVar5 * fVar9 * 2.601887e-06 +
       fVar9 * -0.0001980741 + fVar7 * 0.0083330255 + fVar5 * fVar8 * -0.16666657 + fVar8) /
       (fVar6 * fVar11 * 2.601887e-06 +
       fVar11 * -0.0001980741 + fVar10 * 0.0083330255 + fVar6 * fVar55 * -0.16666657 + fVar55);
  draw::UpdateViewContext();
  dVar46 = (double)fastfunc::FastWrapRot
                             (*(float *)(iVar21 + 0x30),
                              (float)((double)*(float *)(iVar21 + 0x6c) * dVar39));
  (param_1->rotation).x = (float)dVar46;
  dVar46 = (double)fastfunc::FastWrapRot(*(float *)(iVar21 + 0x34),*(float *)(iVar21 + 0x70) * -0.5)
  ;
  (param_1->rotation).y = (float)dVar46;
  dVar46 = (double)fastfunc::FastWrapRot(*(float *)(iVar21 + 0x38),(float)dVar44);
  (param_1->rotation).z = (float)dVar46;
  iVar27 = collproc::CollSphere(0x3ff3333340000000,&param_1->pos);
  if ((iVar27 != 0) &&
     ((CollOutput.pMoby == (MobyInstance *)0x0 ||
      (((MVar15 = (CollOutput.pMoby)->oClass, MVar15 != 0x192 && MVar15 != RATCHET &&
        (MVar15 != AMMOCRATE_04C2)) &&
       ((MVar15 != 0x4c3 && ((MVar15 != ROCKET_0052 && (MVar15 != MINE_0053)))))))))) {
    (param_1->pos).x = CollOutput.push.x;
    (param_1->pos).y = CollOutput.push.y;
    (param_1->pos).z = CollOutput.push.z;
    (param_1->pos).w = CollOutput.push.w;
    fastfunc::FastVecNormalize(uVar25 - 0x220,uVar25 - 0x220,0xa10980);
    dVar37 = ABS((double)*(float *)(puVar20 + 0x1a));
    dVar38 = (double)*(float *)(iVar21 + 0x38);
    dVar46 = ABS((double)*(float *)((int)puVar20 + 0xd4));
    *(float *)(puVar20 + 0x2b) = (float)(dVar37 - dVar46);
    uVar28 = (ulonglong)(*(uint *)(puVar20 + 0x1a) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar20 + 0x2b) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar20 + 0xd4) >> 0x1d) & 4;
    dVar48 = dVar37;
    if ((double)*(float *)(puVar20 + 0x2b) - dVar44 < 0.0) {
      dVar48 = dVar46;
    }
    fVar55 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar28 << 2));
    if ((double)*(float *)(puVar20 + 0x2b) - dVar44 < 0.0) {
      dVar46 = dVar37;
    }
    fVar5 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
    dVar37 = dVar44;
    if (dVar44 < dVar48) {
      lVar29 = uVar25 - 0x2e0;
      lVar30 = uVar25 - 0x144;
      lVar33 = uVar25 - 0x134;
      lVar34 = 2;
      fVar6 = (float)(dVar46 - dVar48) / (float)(dVar46 + dVar48);
      fVar7 = fVar6 * fVar6;
      *(float *)(puVar20 + 0x37) = fVar6;
      *(float *)(puVar20 + 0x36) = fVar6;
      *(float *)((int)puVar20 + 0x1b4) = fVar6;
      *(float *)((int)puVar20 + 0x1ac) = fVar6;
      fVar6 = fVar7 * fVar7;
      *(float *)(puVar20 + 0x36) = *(float *)(puVar20 + 0x36) * fVar7;
      *(float *)((int)puVar20 + 0x1b4) = *(float *)((int)puVar20 + 0x1b4) * fVar6;
      *(float *)(puVar20 + 0x37) = *(float *)(puVar20 + 0x37) * fVar6 * fVar7;
      do {
        *(float *)((int)lVar29 + 0x1ac) = *(float *)((int)lVar29 + 0x19c) * fVar6 * fVar6;
        iVar27 = (int)lVar30;
        lVar29 = lVar29 + 8;
        lVar30 = lVar30 + 8;
        *(float *)((int)lVar33 + 4) = *(float *)(iVar27 + 4) * fVar6 * fVar6;
        lVar33 = lVar33 + 8;
        lVar34 = lVar34 + -1;
      } while (lVar34 != 0);
      lVar34 = 4;
      lVar33 = uVar25 - 0x144;
      pfVar32 = (float *)&DAT_007358e0;
      lVar29 = lVar26;
      lVar30 = lVar33;
      do {
        fVar6 = *pfVar32;
        fVar7 = pfVar32[1];
        pfVar32 = pfVar32 + 2;
        *(float *)((int)lVar29 + 0x1ac) = *(float *)((int)lVar29 + 0x1ac) * fVar6;
        lVar29 = lVar29 + 8;
        *(float *)((int)lVar30 + 4) = *(float *)((int)lVar30 + 4) * fVar7;
        lVar30 = lVar30 + 8;
        lVar34 = lVar34 + -1;
      } while (lVar34 != 0);
      lVar30 = 2;
      lVar29 = lVar26;
      dVar46 = dVar44;
      do {
        iVar27 = (int)lVar29;
        lVar29 = lVar29 + 0x10;
        iVar31 = (int)lVar33;
        lVar33 = lVar33 + 0x10;
        dVar46 = (double)((float)(dVar46 + (double)*(float *)(iVar27 + 0x1ac)) +
                          *(float *)(iVar31 + 4) + *(float *)(iVar31 + 8) + *(float *)(iVar31 + 0xc)
                         );
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      dVar37 = (double)((float)(dVar46 + dVar51) * fVar55 + fVar5);
    }
    dVar46 = (double)fastfunc::FastDiffRots(dVar37,dVar38);
    dVar39 = 0.10000000149011612;
    dVar46 = (double)fastfunc::FastWrapRot
                               ((float)dVar38,(float)((double)(DAT_0071f408 * 0.1) * dVar46));
    fVar55 = *(float *)((int)puVar20 + 0xd4);
    fVar5 = *(float *)(puVar20 + 0x1a);
    *(float *)(iVar21 + 0x38) = (float)dVar46;
    dVar38 = (double)*(float *)(iVar21 + 0x34);
    dVar46 = ABS((double)*(float *)(puVar20 + 0x1b));
    fVar55 = SQRT(fVar5 * fVar5 + fVar55 * fVar55);
    dVar37 = ABS((double)fVar55);
    *(float *)(puVar20 + 0x2a) = fVar55;
    *(float *)((int)puVar20 + 0x154) = (float)(dVar37 - dVar46);
    uVar28 = (ulonglong)(*(uint *)(puVar20 + 0x2a) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar20 + 0x154) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar20 + 0x1b) >> 0x1d) & 4;
    fVar55 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar28 << 2));
    dVar48 = ABS((double)*(float *)(puVar20 + 0x2a));
    if ((double)*(float *)((int)puVar20 + 0x154) - dVar44 < 0.0) {
      dVar48 = dVar46;
    }
    fVar5 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
    if ((double)*(float *)((int)puVar20 + 0x154) - dVar44 < 0.0) {
      dVar46 = dVar37;
    }
    dVar37 = dVar44;
    if (dVar44 < dVar48) {
      lVar29 = uVar25 - 0x2e0;
      lVar33 = uVar25 - 0x154;
      lVar30 = uVar25 - 0x164;
      lVar34 = 2;
      fVar6 = (float)(dVar46 - dVar48) / (float)(dVar46 + dVar48);
      fVar7 = fVar6 * fVar6;
      *(float *)(puVar20 + 0x33) = fVar6;
      *(float *)(puVar20 + 0x32) = fVar6;
      *(float *)((int)puVar20 + 0x194) = fVar6;
      *(float *)((int)puVar20 + 0x18c) = fVar6;
      fVar6 = fVar7 * fVar7;
      *(float *)(puVar20 + 0x32) = *(float *)(puVar20 + 0x32) * fVar7;
      *(float *)((int)puVar20 + 0x194) = *(float *)((int)puVar20 + 0x194) * fVar6;
      *(float *)(puVar20 + 0x33) = *(float *)(puVar20 + 0x33) * fVar6 * fVar7;
      do {
        *(float *)((int)lVar29 + 0x18c) = *(float *)((int)lVar29 + 0x17c) * fVar6 * fVar6;
        iVar27 = (int)lVar30;
        lVar30 = lVar30 + 8;
        lVar29 = lVar29 + 8;
        *(float *)((int)lVar33 + 4) = *(float *)(iVar27 + 4) * fVar6 * fVar6;
        lVar33 = lVar33 + 8;
        lVar34 = lVar34 + -1;
      } while (lVar34 != 0);
      lVar34 = 4;
      lVar33 = uVar25 - 0x164;
      pfVar32 = (float *)&DAT_007358e0;
      lVar29 = lVar26;
      lVar30 = lVar33;
      do {
        fVar6 = *pfVar32;
        fVar7 = pfVar32[1];
        pfVar32 = pfVar32 + 2;
        *(float *)((int)lVar29 + 0x18c) = *(float *)((int)lVar29 + 0x18c) * fVar6;
        lVar29 = lVar29 + 8;
        *(float *)((int)lVar30 + 4) = *(float *)((int)lVar30 + 4) * fVar7;
        lVar30 = lVar30 + 8;
        lVar34 = lVar34 + -1;
      } while (lVar34 != 0);
      lVar29 = 2;
      dVar46 = dVar44;
      do {
        iVar27 = (int)lVar26;
        iVar31 = (int)lVar33;
        lVar26 = lVar26 + 0x10;
        lVar33 = lVar33 + 0x10;
        dVar46 = (double)((float)(dVar46 + (double)*(float *)(iVar27 + 0x18c)) +
                          *(float *)(iVar31 + 4) + *(float *)(iVar31 + 8) + *(float *)(iVar31 + 0xc)
                         );
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      dVar37 = (double)((float)(dVar46 + dVar51) * fVar55 + fVar5);
    }
    dVar46 = (double)fastfunc::FastDiffRots(-dVar37,dVar38);
    dVar46 = (double)fastfunc::FastWrapRot
                               ((float)dVar38,
                                (float)((double)(float)((double)DAT_0071f408 * dVar39) * dVar46));
    *(float *)(iVar21 + 0x34) = (float)dVar46;
    bVar1 = CollOutput.pMoby == (MobyInstance *)0x0;
    *(float *)(iVar21 + 100) = *(float *)(iVar21 + 100) * 0.7;
    if (bVar1) {
      DAT_0096b2dc = 0.0;
      puVar20[0x12] = 6;
      puVar20[0x14] = 1;
      puVar20[0x15] = 1;
      puVar20[0x16] = 0xffffffffffffffff;
      puVar20[0x17] = 0;
      mobyutil::MB_genericExplosion
                (uVar43,0x4059000000000000,0x4030000000000000,uVar43,0x4022000000000000,uVar36,
                 dVar35,param_1,uVar25 - 0x230,0,0,0xffffffffffffffff,0x1e,10,0x18);
      auVar52 = ZEXT416(0xffffffff);
      auVar52 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
      auVar53 = vectorShiftLeftIntegerWord(auVar52,auVar52);
      param_1->modeBits = param_1->modeBits | (UNK_40|DISABLED);
      auVar52 = loadVectorLeftIndexed(0xb8,0x41be44);
      auVar54 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar52 = auVar52 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar52 = vectorMultiplyAddFloatingPoint
                          (auVar54,auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,
                           auVar53);
      auVar52 = vectorConvertToSignedFixedPointWordSaturate(auVar52,0);
      auVar52 = vectorSplatHalfWord(auVar52,1);
      uVar19 = storeVectorElementHalfWordIndexed(auVar52,0x62,param_2);
      *(undefined2 *)(iVar21 + 0x62) = uVar19;
      param_1->state = '\x06';
    }
    else if (*(int *)(iVar21 + 0xdc) == 0) {
      DAT_0096b2dc = DAT_0096b2dc - 5.0;
      if ((double)DAT_0096b2dc < dVar44) {
        fastfunc::FastVecNormalize(uVar25 - 0x230,uVar25 - 0x220,0xa10980);
        fVar5 = *(float *)((int)puVar20 + 0xc4);
        fVar6 = *(float *)(puVar20 + 0x18);
        fVar7 = *(float *)(puVar20 + 0x19);
        dVar46 = (double)mobyutil::g_FrameTime;
        puVar20[0x12] = 6;
        puVar20[0x14] = 1;
        puVar20[0x15] = 1;
        puVar20[0x16] = 0xffffffffffffffff;
        puVar20[0x17] = 0;
        dVar48 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
        fVar55 = (float)((double)(float)(dVar46 * dVar50) / dVar48);
        dVar50 = dVar44;
        if (dVar44 - dVar48 < 0.0) {
          dVar50 = (double)(fVar6 * fVar55);
        }
        dVar46 = dVar44;
        if (dVar44 - dVar48 < 0.0) {
          dVar46 = (double)(fVar5 * fVar55);
        }
        dVar37 = dVar44;
        if (dVar44 - dVar48 < 0.0) {
          dVar37 = (double)(fVar7 * fVar55);
        }
        if (dVar48 - dVar44 < 0.0) {
          dVar50 = (double)(fVar6 * fVar55);
        }
        if (dVar48 - dVar44 < 0.0) {
          dVar46 = (double)(fVar5 * fVar55);
        }
        if (dVar48 - dVar44 < 0.0) {
          dVar37 = (double)(fVar7 * fVar55);
        }
        *(float *)(puVar20 + 0x18) = (float)dVar50;
        *(float *)((int)puVar20 + 0xc4) = (float)dVar46;
        *(float *)(puVar20 + 0x19) = (float)dVar37;
        mobyutil::MB_genericExplosion
                  (uVar43,0x4059000000000000,0x4030000000000000,uVar43,0x4022000000000000,uVar36,
                   dVar35,param_1,uVar25 - 0x230,0,1,0xffffffffffffffff,0x1e,10,0x18);
        auVar52 = ZEXT416(0xffffffff);
        auVar52 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
        auVar54 = loadVectorLeftIndexed(0xb8,0x41be44);
        auVar53 = vectorShiftLeftIntegerWord(auVar52,auVar52);
        auVar52 = auVar54 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar54 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar52 = vectorMultiplyAddFloatingPoint
                            (auVar54,auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,
                             auVar53);
        auVar52 = vectorConvertToSignedFixedPointWordSaturate(auVar52,0);
        auVar52 = vectorSplatHalfWord(auVar52,1);
        uVar19 = storeVectorElementHalfWordIndexed(auVar52,0x62,param_2);
        *(undefined2 *)(iVar21 + 0x62) = uVar19;
        param_1->state = '\x06';
      }
      auVar52 = ZEXT416(0xffffffff);
      auVar52 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
      auVar53 = vectorShiftLeftIntegerWord(auVar52,auVar52);
      auVar52 = loadVectorLeftIndexed(0xbc,0x41be44);
      auVar52 = auVar52 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar54 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar52 = vectorMultiplyAddFloatingPoint
                          (auVar54,auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,
                           auVar53);
      auVar52 = vectorConvertToSignedFixedPointWordSaturate(auVar52,0);
      auVar52 = auVar52 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar13 = storeVectorElementWordIndexed
                         (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,0xdc,param_2
                         );
      *(undefined4 *)(iVar21 + 0xdcU & 0xfffffffc) = uVar13;
    }
  }
  RegisterFuncForMoby(&PTR_M688_0041b008_0070e148,param_1);
  M688_0041bb00(param_1,param_2);
  uVar43 = fastfunc::FastWrapRot
                     (*(float *)(iVar21 + 0x28),-(*(float *)(iVar21 + 0x6c) * 0.14285715));
  dVar44 = (double)fastfunc::FastWrapRot
                             (*(float *)(iVar21 + 0x24),
                              *(float *)(iVar21 + 0x70) * -0.14285715 - 0.1);
  M688_0041b7c0(uVar43,-dVar44,param_1,param_2);
  return;
}



//==== 0041dad8  ns=mobyupdate_unsorted  size=0x1c74
// sig: undefined UpdateMoby_69(MobyInstance * moby)
// callers(0): 
// callees(34): 00047f74 camera::SetCameraPosition; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 0007b7d8 help::Help_Suspend; 00083950 hero::HandleHeroDeath; 000a0c38 hero::Hero_Warp; 000b72b0 hero::TransitionMovement; 000c8b28 hud::Hud_SetEntryValueById; 000efb38 mobyfunc::DeleteMoby; 000f1e50 mobyfunc::SetLevelFlag; 000f20f0 mobyutil::MB_BSphereGap; 000f30a0 mobyfunc::PostUpdateMobyLockTransform; 000fe610 mobyutil::MB_SphericalToVector; 0010434c mobyutil::MB_SetGroupActive; 00104504 mobyutil::MB_SetStateForClass; 00104550 mobyutil::MB_SetClassListActive; 00106150 mobyutil::MB_RegisterLameShadow; 0010675c mobyutil::MB_damage; 00109af0 mobyutil::Delt; 0010e030 mobyutil::MB_genericExplosion; 00110b70 mobyutil::MB_IsPntInCuboid; 0011aeec mobyutil::MB_ShowPersistentMessage; 0011afac mobyutil::MB_RequestHelpMessage; 0011ccc8 music::music_SetTransition; 00151e70 respawn::SetSpawnPoint; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 00419368 mobyupdate_helpers::M69_00419368; 0041bf10 mobyupdate_helpers::M69_0041bf10; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 00500608 fastfunc::FastVecNormalize; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005cd098 libc::printf
// strings: 006571cc: 'no final place for jet during victory, so use init pos\n' | 00657204: 'no final place for hero during victory, so just fall\n'

/* Moby 69 */

void mobyupdate_unsorted::UpdateMoby_69(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  short sVar8;
  float *out;
  MobyClass *pMVar9;
  f32 fVar10;
  uint uVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  ulonglong *puVar14;
  float fVar15;
  int iVar16;
  MobyInstance *pMVar17;
  PlayerState PVar18;
  Cuboid *pCVar19;
  ulonglong uVar20;
  longlong lVar21;
  int iVar24;
  longlong lVar22;
  longlong lVar23;
  float fVar25;
  ulonglong uVar26;
  float *pfVar28;
  longlong lVar27;
  longlong lVar29;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f28;
  double dVar34;
  ulonglong in_f29;
  double dVar35;
  ulonglong in_f30;
  double dVar36;
  double dVar37;
  ulonglong in_f31;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  
  lVar21 = (longlong)(int)moby;
  uVar20 = ZEXT48(&stack0x00000000);
  lVar23 = uVar20 - 0x1f0;
  puVar14 = (ulonglong *)lVar23;
  *puVar14 = uVar20;
  puVar14[0x40] = in_LR;
  puVar14[0x3a] = in_f28;
  puVar14[0x3b] = in_f29;
  puVar14[0x3c] = in_f30;
  puVar14[0x3d] = in_f31;
  puVar14[0x36] = unaff_r28;
  puVar14[0x39] = unaff_r31;
  PVar18 = g_heroState;
  puVar14[0x38] = unaff_r30;
  puVar14[0x37] = unaff_r29;
  puVar14[0x35] = unaff_r27;
  puVar14[0x34] = unaff_r26;
  puVar14[0x33] = unaff_r25;
  puVar14[0x32] = unaff_r24;
  puVar14[0x31] = unaff_r23;
  if (PVar18 == MOVEMENT_LOCKED) {
    return;
  }
  out = (float *)moby->pVar;
  uVar30 = ZEXT48(out);
  out[0x48] = 0.0;
  fastfunc::FastDecTimerS32(uVar30 + 0xdc);
  uVar1 = moby->state;
  if (((((uVar1 != '\x06') && (uVar1 != '\a')) && (uVar1 != '\x01')) &&
      ((uVar1 != '\x02' && (iVar24 = mobyutil::MB_damage(lVar21,0x30001,0), iVar24 != 0)))) &&
     (moby->state == '\x04')) {
    uVar11 = (int)*(uint *)(iVar24 + 0x2c) >> 0x1f;
    if ((int)((uVar11 >> 1 ^ *(uint *)(iVar24 + 0x2c)) - uVar11) <
        (int)(((uint)((int)DAT_0096b2dc >> 0x1f) >> 1 ^ (uint)DAT_0096b2dc) -
             ((int)DAT_0096b2dc >> 0x1f))) {
      DAT_0096b2dc = DAT_0096b2dc - *(float *)(iVar24 + 0x2c);
      if (*(int *)(iVar24 + 0x20) != 0) {
        sVar8 = *(short *)(*(int *)(iVar24 + 0x20) + 0xa6);
        if ((sVar8 == 0x52) || (sVar8 == 0x53)) {
          out[0x48] = (float)(int)sVar8;
        }
      }
      if ((*(uint *)(iVar24 + 0x30) & 1) != 0) {
        auVar39 = ZEXT416(0xffffffff);
        auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
        GameCamera.offset0.amp = 1.0;
        auVar39 = loadVectorLeftIndexed(in_LR,0x41da80);
        auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar39 = vectorMultiplyAddFloatingPoint
                            (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                             auVar40);
        auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
        auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
        GameCamera.offset0.total =
             storeVectorElementWordIndexed
                       (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x168,0x9513c0
                       );
        dVar38 = (double)(*(float *)(iVar24 + 0x2c) * 0.05);
        mobyutil::MB_SphericalToVector(out[0x19],out[0xe],-out[0xd],(float *)(puVar14 + 0x18));
        fVar25 = *(float *)(iVar24 + 0x14);
        fVar3 = *(float *)(iVar24 + 0x10);
        fVar4 = *(float *)(iVar24 + 0x18);
        fVar5 = (moby->pos).x;
        fVar6 = (moby->pos).y;
        fVar7 = (moby->pos).z;
        fVar15 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar25 * fVar25);
        if (mobyutil::g_FrameTime * 3.0 < fVar15) {
          fVar15 = (mobyutil::g_FrameTime * 3.0) / fVar15;
          fVar3 = fVar3 * fVar15;
          fVar25 = fVar25 * fVar15;
          fVar4 = fVar4 * fVar15;
          *(float *)(iVar24 + 0x10) = fVar3;
          *(float *)(iVar24 + 0x14) = fVar25;
          *(float *)(iVar24 + 0x18) = fVar4;
        }
        (moby->pos).x = fVar5 + fVar3;
        (moby->pos).y = fVar6 + fVar25;
        (moby->pos).z = fVar7 + fVar4;
        fastfunc::FastVecNormalize(uVar20 - 0x130,uVar20 - 0x130,iVar24 + 0x10);
        fVar4 = ABS(*(float *)(puVar14 + 0x18));
        fVar3 = ABS(*(float *)((int)puVar14 + 0xc4));
        dVar36 = (double)out[0xe];
        *(float *)(puVar14 + 0x1f) = fVar4 - fVar3;
        dVar35 = 0.0;
        uVar26 = (ulonglong)(*(uint *)(puVar14 + 0x18) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar14 + 0x1f) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0xc4) >> 0x1d) & 4;
        fVar25 = fVar4;
        if (*(float *)(puVar14 + 0x1f) - 0.0 < 0.0) {
          fVar25 = fVar3;
        }
        fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
        fVar5 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
        if (*(float *)(puVar14 + 0x1f) - 0.0 < 0.0) {
          fVar3 = fVar4;
        }
        dVar32 = dVar35;
        if (0.0 < fVar25) {
          lVar22 = uVar20 - 0x1e0;
          lVar27 = uVar20 - 0x94;
          lVar29 = uVar20 - 0x84;
          lVar31 = 2;
          fVar25 = (fVar3 - fVar25) / (fVar3 + fVar25);
          fVar3 = fVar25 * fVar25;
          *(float *)(puVar14 + 0x2d) = fVar25;
          *(float *)(puVar14 + 0x2c) = fVar25;
          *(float *)((int)puVar14 + 0x164) = fVar25;
          *(float *)((int)puVar14 + 0x15c) = fVar25;
          fVar25 = fVar3 * fVar3;
          *(float *)(puVar14 + 0x2c) = *(float *)(puVar14 + 0x2c) * fVar3;
          *(float *)((int)puVar14 + 0x164) = *(float *)((int)puVar14 + 0x164) * fVar25;
          *(float *)(puVar14 + 0x2d) = *(float *)(puVar14 + 0x2d) * fVar25 * fVar3;
          do {
            *(float *)((int)lVar22 + 0x15c) = *(float *)((int)lVar22 + 0x14c) * fVar25 * fVar25;
            iVar24 = (int)lVar27;
            lVar22 = lVar22 + 8;
            lVar27 = lVar27 + 8;
            *(float *)((int)lVar29 + 4) = *(float *)(iVar24 + 4) * fVar25 * fVar25;
            lVar29 = lVar29 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar31 = 4;
          lVar29 = uVar20 - 0x94;
          pfVar28 = (float *)&DAT_007358e0;
          lVar22 = lVar23;
          lVar27 = lVar29;
          do {
            fVar25 = *pfVar28;
            fVar3 = pfVar28[1];
            pfVar28 = pfVar28 + 2;
            *(float *)((int)lVar22 + 0x15c) = *(float *)((int)lVar22 + 0x15c) * fVar25;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar3;
            lVar27 = lVar27 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar27 = 2;
          lVar22 = lVar23;
          do {
            iVar24 = (int)lVar22;
            lVar22 = lVar22 + 0x10;
            iVar16 = (int)lVar29;
            lVar29 = lVar29 + 0x10;
            dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar24 + 0x15c)) +
                              *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                             *(float *)(iVar16 + 0xc));
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar6 + fVar5);
        }
        dVar32 = (double)fastfunc::FastDiffRots(dVar32,dVar36);
        dVar37 = 0.10000000149011612;
        dVar36 = (double)fastfunc::FastWrapRot
                                   ((float)dVar36,
                                    (float)((double)(float)((double)(DAT_0071f408 * 0.1) * dVar32) *
                                           dVar38));
        out[0xe] = (float)dVar36;
        dVar34 = (double)out[0xd];
        dVar36 = ABS((double)*(float *)(puVar14 + 0x19));
        fVar25 = SQRT(*(float *)(puVar14 + 0x18) * *(float *)(puVar14 + 0x18) +
                      *(float *)((int)puVar14 + 0xc4) * *(float *)((int)puVar14 + 0xc4));
        dVar33 = ABS((double)fVar25);
        *(float *)(puVar14 + 0x1e) = fVar25;
        *(float *)((int)puVar14 + 0xf4) = (float)(dVar33 - dVar36);
        uVar26 = (ulonglong)(*(uint *)(puVar14 + 0x1e) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0xf4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar14 + 0x19) >> 0x1d) & 4;
        dVar32 = ABS((double)*(float *)(puVar14 + 0x1e));
        if ((double)*(float *)((int)puVar14 + 0xf4) - dVar35 < 0.0) {
          dVar32 = dVar36;
        }
        fVar25 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
        if ((double)*(float *)((int)puVar14 + 0xf4) - dVar35 < 0.0) {
          dVar36 = dVar33;
        }
        fVar3 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
        if (dVar35 < dVar32) {
          lVar22 = uVar20 - 0x1e0;
          lVar29 = uVar20 - 0xa4;
          lVar27 = uVar20 - 0xb4;
          lVar31 = 2;
          fVar4 = (float)(dVar36 - dVar32) / (float)(dVar36 + dVar32);
          fVar5 = fVar4 * fVar4;
          *(float *)(puVar14 + 0x29) = fVar4;
          *(float *)(puVar14 + 0x28) = fVar4;
          *(float *)((int)puVar14 + 0x144) = fVar4;
          *(float *)((int)puVar14 + 0x13c) = fVar4;
          fVar4 = fVar5 * fVar5;
          *(float *)(puVar14 + 0x28) = *(float *)(puVar14 + 0x28) * fVar5;
          *(float *)((int)puVar14 + 0x144) = *(float *)((int)puVar14 + 0x144) * fVar4;
          *(float *)(puVar14 + 0x29) = *(float *)(puVar14 + 0x29) * fVar4 * fVar5;
          do {
            *(float *)((int)lVar22 + 0x13c) = *(float *)((int)lVar22 + 300) * fVar4 * fVar4;
            iVar24 = (int)lVar27;
            lVar27 = lVar27 + 8;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar29 + 4) = *(float *)(iVar24 + 4) * fVar4 * fVar4;
            lVar29 = lVar29 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar31 = 4;
          lVar29 = uVar20 - 0xb4;
          pfVar28 = (float *)&DAT_007358e0;
          lVar22 = lVar23;
          lVar27 = lVar29;
          do {
            fVar4 = *pfVar28;
            fVar5 = pfVar28[1];
            pfVar28 = pfVar28 + 2;
            *(float *)((int)lVar22 + 0x13c) = *(float *)((int)lVar22 + 0x13c) * fVar4;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar5;
            lVar27 = lVar27 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar27 = 2;
          lVar22 = lVar23;
          do {
            iVar24 = (int)lVar22;
            iVar16 = (int)lVar29;
            lVar22 = lVar22 + 0x10;
            lVar29 = lVar29 + 0x10;
            dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar24 + 0x13c)) +
                              *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                             *(float *)(iVar16 + 0xc));
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          dVar35 = (double)((float)(dVar35 + 0.7853981852531433) * fVar25 + fVar3);
        }
        dVar36 = (double)fastfunc::FastDiffRots(dVar35,dVar34);
        dVar38 = (double)fastfunc::FastWrapRot
                                   ((float)dVar34,
                                    (float)((double)(float)((double)(float)((double)DAT_0071f408 *
                                                                           dVar37) * dVar36) *
                                           dVar38));
        out[0xd] = (float)dVar38;
      }
    }
    else {
      mobyutil::MB_SphericalToVector(out[0x19],out[0xe],-out[0xd],(float *)(puVar14 + 0x1a));
      if (*(int *)(iVar24 + 0x20) != 0) {
        sVar8 = *(short *)(*(int *)(iVar24 + 0x20) + 0xa6);
        if ((sVar8 == 0x52) || (sVar8 == 0x53)) {
          out[0x48] = (float)(sVar8 + 10000);
        }
      }
      auVar39 = ZEXT416(0xffffffff);
      auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
      auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
      GameCamera.offset0.amp = 0.2;
      auVar39 = loadVectorLeftIndexed(0x18,0x41da80);
      auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar39 = vectorMultiplyAddFloatingPoint
                          (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                           auVar40);
      auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
      auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
      GameCamera.offset0.total =
           storeVectorElementWordIndexed
                     (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x168,0x9513c0);
      DAT_0096b2dc = 0.0;
      moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
      puVar14[0x12] = 6;
      puVar14[0x14] = 1;
      puVar14[0x15] = 1;
      puVar14[0x16] = 0xffffffffffffffff;
      puVar14[0x17] = 0;
      mobyutil::MB_genericExplosion
                (0,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,lVar21,uVar20 - 0x120,0,&GameCamera,0x168,10,3,0x10);
      moby->collision = (ushort *)0x0;
      auVar39 = ZEXT416(0xffffffff);
      auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
      auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar42 = loadVectorLeftIndexed(0x30,0x41da80);
      auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
      auVar39 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar39 = vectorMultiplyAddFloatingPoint
                          (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                           auVar40);
      auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
      auVar39 = vectorSplatHalfWord(auVar39,1);
      uVar12 = storeVectorElementHalfWordIndexed(auVar39,0x62,uVar30);
      *(undefined2 *)((int)out + 0x62) = uVar12;
      moby->state = '\x06';
    }
  }
  moby->damage = -1;
  if (DAT_0096b2d0 == moby) {
    auVar39 = ZEXT416(0xffffffff);
    auVar40 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
    auVar39 = ZEXT416(0xffffffff);
    auVar43 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
    auVar40 = vectorShiftLeftIntegerWord(auVar40,auVar40);
    auVar39 = loadVectorLeftIndexed(0x34,0x41da80);
    auVar41 = loadVectorLeftIndexed(0x15fc,0x969ce0);
    auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar42 = loadVectorLeftIndexed(0x38,0x41da80);
    auVar40 = vectorMultiplyAddFloatingPoint
                        (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                         auVar40);
    auVar39 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar41 = vectorShiftLeftIntegerWord(auVar43,auVar43);
    auVar39 = vectorMultiplyAddFloatingPoint
                        (auVar40,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                         auVar41);
    auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
    auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
    DAT_0096b2e8 = storeVectorElementWordIndexed
                             (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x1608,
                              0x969ce0);
  }
  bVar2 = moby->state;
  if (4 < bVar2) {
    if (bVar2 < 8) {
      if (bVar2 < 6) {
        hero::g_heroInvisible = 0;
        g_heroMobyPtr->collisionMesh = (float *)0x0;
        hero::TransitionMovement(0,1);
        camera::camera5::Camera_DeactivateMobyDrivenCam(0);
        hud::Hud_SetEntryValueById((int)DAT_0096b2ec,0);
        (moby->pos).x = out[0x10];
        (moby->pos).y = out[0x11];
        (moby->pos).z = out[0x12];
        (moby->pos).w = out[0x13];
        (moby->rotation).x = out[0x14];
        pMVar9 = moby->pClass;
        (moby->rotation).y = out[0x15];
        (moby->rotation).z = out[0x16];
        (moby->rotation).w = out[0x17];
        moby->scale = pMVar9->gScale;
        mobyfunc::PostUpdateMobyLockTransform(moby);
        if (0 < (int)out[0x47]) {
          mobyutil::MB_SetGroupActive((int)out[0x47],0,0,0);
        }
        if (0 < (int)out[0x4f]) {
          mobyutil::MB_SetGroupActive((int)out[0x4f],0,0,0);
        }
        mobyutil::MB_SetClassListActive((MOBY_OCLASSES *)&DAT_00857830,1,1,-1);
        mobyutil::MB_SetClassListActive((MOBY_OCLASSES *)&DAT_008578b4,1,-1,-1);
        mobyutil::MB_SetStateForClass(0x102,0);
        fVar25 = out[0x4b];
        if (fVar25 == -NAN) {
          hero::Hero_Warp(out + 0x10,&Cuboids[(int)out[0x3f]].rot.x,0,1);
        }
        else {
          hero::Hero_Warp(&Cuboids[(int)fVar25].pos.x,&Cuboids[(int)fVar25].rot.x,0,1);
        }
        fVar25 = out[0x42];
        if (((fVar25 != -NAN) && (sound::g_SoundChannels[(int)fVar25].pMoby == moby)) &&
           (sound::g_SoundChannels[(int)fVar25].state != '\0')) {
          sound::sound_Kill((int)fVar25);
        }
        fVar25 = out[0x43];
        out[0x42] = -NAN;
        if (((fVar25 != -NAN) && (sound::g_SoundChannels[(int)fVar25].pMoby == moby)) &&
           (sound::g_SoundChannels[(int)fVar25].state != '\0')) {
          sound::sound_Kill((int)fVar25);
        }
        out[0x43] = -NAN;
        music::music_SetTransition(0,5);
        out[0x1f] = 0.99;
        boot::SceneScreenFade = 0.99;
        moby->state = '\x01';
      }
      else if (bVar2 < 7) {
        OcclMode = 2;
        fVar25 = out[0x42];
        if (((fVar25 != -NAN) && (sound::g_SoundChannels[(int)fVar25].pMoby == moby)) &&
           (sound::g_SoundChannels[(int)fVar25].state != '\0')) {
          sound::sound_Kill((int)fVar25);
        }
        fVar25 = out[0x43];
        out[0x42] = -NAN;
        if (((fVar25 != -NAN) && (sound::g_SoundChannels[(int)fVar25].pMoby == moby)) &&
           (sound::g_SoundChannels[(int)fVar25].state != '\0')) {
          sound::sound_Kill((int)fVar25);
        }
        out[0x43] = -NAN;
        moby->state = '\a';
      }
      else {
        OcclMode = 2;
        iVar24 = fastfunc::FastDecTimerS16(uVar30 + 0x62);
        if (((iVar24 != 0) && (music::g_SpeechPlaying.handle == 0)) &&
           (music::g_PendingSpeech == -1)) {
          hero::HandleHeroDeath();
          camera::camera5::Camera_DeactivateMobyDrivenCam(0);
          (moby->pos).x = out[0x10];
          (moby->pos).y = out[0x11];
          (moby->pos).z = out[0x12];
          (moby->pos).w = out[0x13];
          (moby->rotation).x = out[0x14];
          (moby->rotation).y = out[0x15];
          (moby->rotation).z = out[0x16];
          (moby->rotation).w = out[0x17];
          mobyfunc::PostUpdateMobyLockTransform(moby);
          fVar25 = out[0x42];
          if (((fVar25 != -NAN) && (sound::g_SoundChannels[(int)fVar25].pMoby == moby)) &&
             (sound::g_SoundChannels[(int)fVar25].state != '\0')) {
            sound::sound_Kill((int)fVar25);
          }
          fVar25 = out[0x43];
          out[0x42] = -NAN;
          if (((fVar25 != -NAN) && (sound::g_SoundChannels[(int)fVar25].pMoby == moby)) &&
             (sound::g_SoundChannels[(int)fVar25].state != '\0')) {
            sound::sound_Kill((int)fVar25);
          }
          out[0x43] = -NAN;
          moby->state = '\0';
        }
      }
    }
    else if (bVar2 < 9) {
      hero::g_heroInvisible = 0;
      g_heroMobyPtr->collisionMesh = (float *)0x0;
      hero::TransitionMovement(0,1);
      camera::camera5::Camera_DeactivateMobyDrivenCam(0);
      pCVar19 = Cuboids;
      fVar25 = out[0x40];
      if (fVar25 == -NAN) {
        libc::printf("no final place for jet during victory, so use init pos\n");
        (moby->pos).x = out[0x10];
        (moby->pos).y = out[0x11];
        (moby->pos).z = out[0x12];
        (moby->pos).w = out[0x13];
        (moby->rotation).x = out[0x14];
        (moby->rotation).y = out[0x15];
        (moby->rotation).z = out[0x16];
        fVar25 = out[0x17];
      }
      else {
        (moby->pos).x = Cuboids[(int)fVar25].pos.x;
        (moby->pos).y = pCVar19[(int)fVar25].pos.y;
        fVar3 = pCVar19[(int)fVar25].pos.z;
        (moby->pos).z = fVar3;
        (moby->pos).w = pCVar19[(int)fVar25].pos.w;
        fVar25 = out[0x40];
        (moby->rotation).x = pCVar19[(int)fVar25].rot.x;
        (moby->rotation).y = pCVar19[(int)fVar25].rot.y;
        (moby->rotation).z = pCVar19[(int)fVar25].rot.z;
        fVar25 = pCVar19[(int)fVar25].rot.w;
        (moby->pos).z = fVar3 + 0.57318;
      }
      pMVar9 = moby->pClass;
      (moby->rotation).w = fVar25;
      moby->scale = pMVar9->gScale;
      mobyfunc::PostUpdateMobyLockTransform(moby);
      if (out[0x3f] == -NAN) {
        libc::printf("no final place for hero during victory, so just fall\n");
      }
      else {
        if (0 < (int)out[0x47]) {
          mobyutil::MB_SetGroupActive((int)out[0x47],0,0,0);
        }
        if (0 < (int)out[0x4f]) {
          mobyutil::MB_SetGroupActive((int)out[0x4f],0,0,0);
        }
        mobyutil::MB_SetClassListActive((MOBY_OCLASSES *)&DAT_00857830,1,1,-1);
        mobyutil::MB_SetClassListActive((MOBY_OCLASSES *)&DAT_008578b4,1,-1,-1);
        mobyutil::MB_SetStateForClass(0x102,0);
        hero::Hero_Warp(&Cuboids[(int)out[0x3f]].pos.x,&Cuboids[(int)out[0x3f]].rot.x,0,1);
      }
      if (moby->levelFlagIdx != -1) {
        mobyfunc::SetLevelFlag();
      }
      fVar25 = out[0x42];
      if (((fVar25 != -NAN) && (sound::g_SoundChannels[(int)fVar25].pMoby == moby)) &&
         (sound::g_SoundChannels[(int)fVar25].state != '\0')) {
        sound::sound_Kill((int)fVar25);
      }
      fVar25 = out[0x43];
      out[0x42] = -NAN;
      if (((fVar25 != -NAN) && (sound::g_SoundChannels[(int)fVar25].pMoby == moby)) &&
         (sound::g_SoundChannels[(int)fVar25].state != '\0')) {
        sound::sound_Kill((int)fVar25);
      }
      out[0x43] = -NAN;
      respawn::SetSpawnPoint((Vec4 *)&g_heroPosition,(Vec4 *)&g_heroRotation);
      moby->state = '\t';
    }
    else if (bVar2 < 10) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
    goto LAB_0041f5c4;
  }
  if (1 < bVar2) {
    if (bVar2 < 3) {
      mobyutil::Delt(1.0,mobyutil::g_FrameTime * 4.0,out + 0x1f);
      boot::SceneScreenFade = out[0x1f];
      if (out[0x1f] == 1.0) {
        fVar25 = out[0x4c];
        if (fVar25 != -NAN) {
          hero::Hero_Warp(&Cuboids[(int)fVar25].pos.x,&Cuboids[(int)fVar25].rot.x,0x32,1);
          pCVar19 = Cuboids;
          fVar25 = out[0x4c];
          (moby->pos).x = Cuboids[(int)fVar25].pos.x;
          (moby->pos).y = pCVar19[(int)fVar25].pos.y;
          (moby->pos).z = pCVar19[(int)fVar25].pos.z;
          (moby->pos).w = pCVar19[(int)fVar25].pos.w;
          fVar25 = out[0x4c];
          (moby->rotation).x = pCVar19[(int)fVar25].rot.x;
          (moby->rotation).y = pCVar19[(int)fVar25].rot.y;
          (moby->rotation).z = pCVar19[(int)fVar25].rot.z;
          (moby->rotation).w = pCVar19[(int)fVar25].rot.w;
        }
        camera::SetCameraPosition(lVar21 + 0x10,lVar21 + 0x40,0,0,0);
        fVar25 = DAT_0071f408;
        *(undefined2 *)(out + 0x1a) = 0;
        out[0x1b] = 0.0;
        out[0x1c] = 0.0;
        out[0x21] = 0.0;
        out[0x20] = 0.0;
        out[0x19] = fVar25 * 0.1;
        moby->updateDistance = -1;
        pMVar17 = g_heroMobyPtr;
        moby->drawDistance = 0xff;
        pMVar17->collisionMesh = (float *)0xffffffff;
        out[8] = (moby->rotation).x;
        out[9] = (moby->rotation).y;
        out[10] = (moby->rotation).z;
        fVar25 = (moby->rotation).w;
        out[0x28] = 0.0;
        out[0xb] = fVar25;
        out[0x29] = 0.0;
        out[0x2a] = 0.0;
        out[0x32] = 0.0;
        out[0x33] = 0.0;
        out[0x34] = 0.0;
        DAT_0096b2d4 = moby->oClass;
        DAT_0096b2ee = 1;
        DAT_0096b2d6 = 10;
        DAT_0096b2d7 = 0x14;
        DAT_0096b2d8 = 0x14;
        DAT_0096b2dc = 255.0;
        DAT_0096b2d0 = moby;
        out[0x3c] = 0.0;
        out[0x3d] = 3.57331e-43;
        DAT_0096b2e0 = 0x43800000;
        DAT_0096b2e4 = 0x42c80000;
        DAT_0096b2d9 = 3;
        DAT_0096b2da = 3;
        DAT_0096b2db = 3;
        DAT_0096b2ef = 0;
        mobyutil::MB_SphericalToVector(DAT_0071f408 * 0.1,out[0xe],-out[0xd],out);
        if (0 < (int)out[0x47]) {
          mobyutil::MB_SetGroupActive((int)out[0x47],1,1,1);
        }
        if (0 < (int)out[0x4f]) {
          mobyutil::MB_SetGroupActive((int)out[0x4f],1,1,1);
        }
        mobyutil::MB_SetClassListActive((MOBY_OCLASSES *)&DAT_00857830,0,0,-1);
        mobyutil::MB_SetClassListActive((MOBY_OCLASSES *)&DAT_008578b4,0,-1,-1);
        mobyutil::MB_SetStateForClass(0x102,0);
        pMVar9 = moby->pClass;
        (moby->pos).z = (moby->pos).z + 3.0;
        moby->scale = pMVar9->gScale * 0.25;
        hero::g_heroInvisible = 1;
        if (out[0x42] == -NAN) {
          fVar25 = (float)sound::PlayMobySound(0,4,moby);
          out[0x42] = fVar25;
        }
        OcclMode = 2;
        mobyupdate_helpers::M69_0041bf10(lVar21,uVar30);
        help::Help_Suspend();
        music::music_SetTransition(2,4);
        moby->state = '\x04';
      }
    }
    else if (3 < bVar2) {
      if (out[0x1f] != 0.0) {
        mobyutil::Delt(0.0,mobyutil::g_FrameTime * 4.0,out + 0x1f);
        boot::SceneScreenFade = out[0x1f];
      }
      mobyutil::MB_RequestHelpMessage((MobyInstance *)0x6,STR_TO_USE_YOUR_BOMB_0x0000);
      OcclMode = 2;
      if ((sound::g_SoundChannels[(int)out[0x42]].pMoby != moby) ||
         (sound::g_SoundChannels[(int)out[0x42]].state == '\0')) {
        out[0x42] = -NAN;
        fVar25 = (float)sound::PlayMobySound(0,4,moby);
        out[0x42] = fVar25;
      }
      mobyupdate_helpers::M69_0041bf10(lVar21,uVar30);
      if ((DAT_0096b2ef & 1) != 0) {
        moby->state = '\x05';
      }
      if ((int)out[0x3a] < 1) {
        auVar39 = ZEXT416(0xffffffff);
        auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
        auVar39 = loadVectorLeftIndexed(0x48,0x41da80);
        auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar39 = vectorMultiplyAddFloatingPoint
                            (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                             auVar40);
        auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
        auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar13 = storeVectorElementWordIndexed
                           (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0xf8,
                            uVar30);
        *(undefined4 *)((uint)(out + 0x3e) & 0xfffffffc) = uVar13;
        moby->state = '\b';
      }
    }
    goto LAB_0041f5c4;
  }
  if (bVar2 == 0) {
    moby->state = '\x01';
    *(undefined1 *)(out + 0x18) = 0;
    moby->scale = moby->pClass->gScale;
    out[8] = out[0xc];
    out[9] = out[0xd];
    fVar4 = ABS(ViewContext.xratio);
    uVar11 = (uint)ViewContext.xratio >> 0x1d;
    *(undefined4 *)(puVar14 + 0x1d) = 0x3f800000;
    *(float *)((int)puVar14 + 0xec) = 1.0 - fVar4;
    fVar25 = 0.0;
    uVar26 = (ulonglong)(*(uint *)((int)puVar14 + 0xec) >> 0x1e) & 2 | (ulonglong)uVar11 & 4;
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
    fVar5 = ABS(*(float *)(puVar14 + 0x1d));
    if (*(float *)((int)puVar14 + 0xec) - 0.0 < 0.0) {
      fVar5 = fVar4;
    }
    if (*(float *)((int)puVar14 + 0xec) - 0.0 < 0.0) {
      fVar4 = 1.0;
    }
    fVar6 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
    if (0.0 < fVar5) {
      lVar22 = uVar20 - 0x1e0;
      lVar29 = uVar20 - 0xc4;
      lVar27 = uVar20 - 0xd4;
      lVar31 = 2;
      fVar4 = (fVar4 - fVar5) / (fVar4 + fVar5);
      fVar5 = fVar4 * fVar4;
      *(float *)(puVar14 + 0x25) = fVar4;
      *(float *)(puVar14 + 0x24) = fVar4;
      *(float *)((int)puVar14 + 0x124) = fVar4;
      *(float *)((int)puVar14 + 0x11c) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)(puVar14 + 0x24) = *(float *)(puVar14 + 0x24) * fVar5;
      *(float *)((int)puVar14 + 0x124) = *(float *)((int)puVar14 + 0x124) * fVar4;
      *(float *)(puVar14 + 0x25) = *(float *)(puVar14 + 0x25) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar22 + 0x11c) = *(float *)((int)lVar22 + 0x10c) * fVar4 * fVar4;
        iVar24 = (int)lVar27;
        lVar27 = lVar27 + 8;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar24 + 4) * fVar4 * fVar4;
        lVar29 = lVar29 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar29 = uVar20 - 0xd4;
      pfVar28 = (float *)&DAT_007358e0;
      lVar22 = lVar23;
      lVar27 = lVar29;
      do {
        fVar4 = *pfVar28;
        fVar5 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar22 + 0x11c) = *(float *)((int)lVar22 + 0x11c) * fVar4;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar5;
        lVar27 = lVar27 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar22 = 2;
      do {
        iVar24 = (int)lVar23;
        lVar23 = lVar23 + 0x10;
        iVar16 = (int)lVar29;
        lVar29 = lVar29 + 0x10;
        fVar25 = fVar25 + *(float *)(iVar24 + 0x11c) + *(float *)(iVar16 + 4) +
                 *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc);
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      fVar25 = (fVar25 + 0.7853982) * fVar3 + fVar6;
    }
    out[0x30] = 0.0;
    out[0x48] = 0.0;
    out[0x2b] = fVar25 * 2.0;
    out[0x2c] = fVar25 * 2.0;
    out[0xc] = (moby->rotation).x;
    out[0xd] = (moby->rotation).y;
    out[0xe] = (moby->rotation).z;
    out[0xf] = (moby->rotation).w;
    out[0x14] = (moby->rotation).x;
    out[0x15] = (moby->rotation).y;
    out[0x16] = (moby->rotation).z;
    out[0x17] = (moby->rotation).w;
    out[0x10] = (moby->pos).x;
    out[0x11] = (moby->pos).y;
    out[0x12] = (moby->pos).z;
    fVar25 = (moby->pos).w;
    out[0x1f] = 0.0;
    out[0x13] = fVar25;
    DAT_010cccdc = 1;
    out[0x3e] = 1.4013e-45;
    out[0x3a] = 1.4013e-45;
    if ((moby->levelFlagIdx != 0xff) && (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1)) {
      moby->state = '\t';
    }
    if (0 < (int)out[0x47]) {
      mobyutil::MB_SetGroupActive((int)out[0x47],0,0,0);
    }
    if (0 < (int)out[0x4f]) {
      mobyutil::MB_SetGroupActive((int)out[0x4f],0,0,0);
    }
    mobyutil::MB_SetClassListActive((MOBY_OCLASSES *)&DAT_00857830,1,1,-1);
    mobyutil::MB_SetClassListActive((MOBY_OCLASSES *)&DAT_008578b4,1,-1,-1);
    mobyutil::MB_SetStateForClass(0x102,0);
    auVar39 = ZEXT416(0xffffffff);
    auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
    out[0x4a] = -NAN;
    auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
    auVar39 = loadVectorLeftIndexed(0x3c,0x41da80);
    auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar39 = vectorMultiplyAddFloatingPoint
                        (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                         auVar40);
    auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
    auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar13 = storeVectorElementWordIndexed
                       (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x138,uVar30);
    *(undefined4 *)((uint)(out + 0x4e) & 0xfffffffc) = uVar13;
    goto LAB_0041f5c4;
  }
  if ((moby->levelFlagIdx == 0xff) || (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1)) {
    if ((out[0x4d] == -NAN) ||
       (iVar24 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)out[0x4d]), iVar24 == 0))
    {
      dVar38 = (double)mobyutil::MB_BSphereGap(lVar21,g_heroMobyPtr);
      if ((((2.0 <= dVar38) || (g_heroState == VISIBOMB_CONTROL || g_heroState == TURRET_PLANE_UI))
          || (g_heroType != '\0')) ||
         ((iVar24 = mobyutil::MB_ShowPersistentMessage(7,0x53e4),
          (g_buttonsPressedThisFrame & TRIANGLE) == 0 || (iVar24 == 0)))) goto LAB_0041e9a0;
    }
    else {
      out[0x1f] = 0.99;
      boot::SceneScreenFade = 0.99;
    }
    hero::TransitionMovement(0x32,1);
    moby->scale = moby->pClass->gScale;
    out[8] = out[0xc];
    out[9] = out[0xd];
    fVar4 = ABS(ViewContext.xratio);
    uVar11 = (uint)ViewContext.xratio >> 0x1d;
    *(undefined4 *)(puVar14 + 0x1c) = 0x3f800000;
    *(float *)((int)puVar14 + 0xe4) = 1.0 - fVar4;
    fVar25 = 0.0;
    uVar26 = (ulonglong)(*(uint *)((int)puVar14 + 0xe4) >> 0x1e) & 2 | (ulonglong)uVar11 & 4;
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
    fVar5 = ABS(*(float *)(puVar14 + 0x1c));
    if (*(float *)((int)puVar14 + 0xe4) - 0.0 < 0.0) {
      fVar5 = fVar4;
    }
    fVar6 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
    if (*(float *)((int)puVar14 + 0xe4) - 0.0 < 0.0) {
      fVar4 = 1.0;
    }
    if (0.0 < fVar5) {
      lVar22 = uVar20 - 0x1e0;
      lVar27 = uVar20 - 0xf4;
      lVar29 = uVar20 - 0xe4;
      lVar31 = 2;
      fVar4 = (fVar4 - fVar5) / (fVar4 + fVar5);
      fVar5 = fVar4 * fVar4;
      *(float *)(puVar14 + 0x21) = fVar4;
      *(float *)(puVar14 + 0x20) = fVar4;
      *(float *)((int)puVar14 + 0x104) = fVar4;
      *(float *)((int)puVar14 + 0xfc) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)(puVar14 + 0x20) = *(float *)(puVar14 + 0x20) * fVar5;
      *(float *)((int)puVar14 + 0x104) = *(float *)((int)puVar14 + 0x104) * fVar4;
      *(float *)(puVar14 + 0x21) = *(float *)(puVar14 + 0x21) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar22 + 0xfc) = *(float *)((int)lVar22 + 0xec) * fVar4 * fVar4;
        iVar24 = (int)lVar27;
        lVar22 = lVar22 + 8;
        lVar27 = lVar27 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar24 + 4) * fVar4 * fVar4;
        lVar29 = lVar29 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar29 = uVar20 - 0xf4;
      pfVar28 = (float *)&DAT_007358e0;
      lVar22 = lVar23;
      lVar27 = lVar29;
      do {
        fVar4 = *pfVar28;
        fVar5 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar22 + 0xfc) = *(float *)((int)lVar22 + 0xfc) * fVar4;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar5;
        lVar27 = lVar27 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar22 = 2;
      do {
        iVar24 = (int)lVar23;
        iVar16 = (int)lVar29;
        lVar23 = lVar23 + 0x10;
        lVar29 = lVar29 + 0x10;
        fVar25 = fVar25 + *(float *)(iVar24 + 0xfc) + *(float *)(iVar16 + 4) +
                 *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc);
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      fVar25 = (fVar25 + 0.7853982) * fVar3 + fVar6;
    }
    out[0x30] = 0.0;
    out[0x48] = 0.0;
    out[0x2b] = fVar25 * 2.0;
    out[0x2c] = fVar25 * 2.0;
    out[0xc] = (moby->rotation).x;
    out[0xd] = (moby->rotation).y;
    out[0xe] = (moby->rotation).z;
    fVar25 = (moby->rotation).w;
    out[0x3e] = 1.4013e-45;
    out[0xf] = fVar25;
    out[0x3a] = 1.4013e-45;
    moby->state = '\x02';
    out[0x4a] = -NAN;
  }
  else {
    moby->state = '\t';
LAB_0041e9a0:
    if (out[0x1f] != 0.0) {
      mobyutil::Delt(0.0,mobyutil::g_FrameTime * 4.0,out + 0x1f);
      boot::SceneScreenFade = out[0x1f];
    }
  }
  mobyutil::MB_RegisterLameShadow(1.5,moby);
LAB_0041f5c4:
  fVar10 = (moby->pos).x;
  uVar11 = (int)fVar10 >> 0x1f;
  fVar3 = 15.0;
  fVar25 = (moby->pos).x;
  if ((int)((uVar11 >> 1 ^ (uint)fVar10) - uVar11) < 0x41700000) {
    (moby->pos).x = 15.0;
    fVar25 = fVar3;
  }
  fVar4 = 1008.0;
  if (1008.0 < fVar25) {
    (moby->pos).x = 1008.0;
    fVar25 = fVar4;
  }
  fVar10 = (moby->pos).y;
  uVar11 = (int)fVar10 >> 0x1f;
  fVar5 = (moby->pos).y;
  if ((int)((uVar11 >> 1 ^ (uint)fVar10) - uVar11) < 0x41700000) {
    (moby->pos).y = 15.0;
    fVar5 = fVar3;
  }
  if (1008.0 < fVar5) {
    (moby->pos).y = 1008.0;
    fVar5 = fVar4;
  }
  fVar10 = (moby->pos).z;
  uVar11 = (int)fVar10 >> 0x1f;
  fVar6 = (moby->pos).z;
  if ((int)((uVar11 >> 1 ^ (uint)fVar10) - uVar11) < 0x41700000) {
    (moby->pos).z = 15.0;
    fVar6 = fVar3;
  }
  if (1008.0 < fVar6) {
    (moby->pos).z = 1008.0;
    fVar6 = fVar4;
  }
  bVar2 = moby->state;
  if (bVar2 == 4) {
    g_heroPosition.w = (moby->pos).w;
    g_heroRotation.x = out[0xc];
    g_heroRotation.y = out[0xd];
    g_heroRotation.z = out[0xe];
    g_heroRotation.w = out[0xf];
    g_heroPosition.x = fVar25;
    g_heroPosition.y = fVar5;
    g_heroPosition.z = fVar6;
  }
  if (((2 < bVar2) && (bVar2 < 5)) || (bVar2 == 8)) {
    mobyupdate_helpers::M69_00419368(lVar21,uVar30);
  }
  return;
}



//==== 0041f74c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M690_0041f74c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M690_0041f74c(void)

{
  DAT_0085790c = 0x10000;
  return;
}



//==== 0041f760  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_690(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 690 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_690(MobyInstance *moby)

{
  return moby;
}



//==== 0041f770  ns=mobyupdate_helpers  size=0x2a4
// sig: undefined M691_0041f770(void)
// callers(1): 0041fb90 mobyupdate_unsorted::UpdateMoby_691
// callees(2): 001367d0 path::PathFindClosestPnt; 005cd098 libc::printf
// strings: 0065723c: 'bad path! %d\n'

longlong mobyupdate_helpers::M691_0041f770
                   (int param_1,int param_2,Vec4 *param_3,char param_4,undefined4 *param_5)

{
  int iVar1;
  Spline *spline;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  
  iVar1 = *(int *)(param_2 + 0x174);
  if (iVar1 == -1) {
    libc::printf("bad path! %d\n",0xffffffffffffffff);
    lVar8 = -1;
  }
  else {
    lVar8 = -1;
    spline = Splines[iVar1];
    if (spline == (Spline *)0x0) {
      libc::printf("bad path! %d\n",iVar1);
    }
    else {
      dVar11 = 0.0;
      iVar6 = path::PathFindClosestPnt(0.0,(Vec4 *)(param_1 + 0x10),spline);
      lVar8 = (longlong)iVar6;
      *(int *)(param_2 + 0x180) = iVar6;
      iVar1 = spline->cnt;
      iVar7 = iVar6 + iVar1 + -1;
      lVar10 = (longlong)(iVar7 - (iVar7 / iVar1) * iVar1);
      lVar9 = (longlong)((iVar6 + 1) - ((iVar6 + 1) / iVar1) * iVar1);
      if (*(char *)(param_2 + 399) == '\0') {
        iVar1 = (int)(lVar9 << 4);
        iVar6 = (int)(lVar10 << 4);
        fVar2 = param_3->y - *(float *)((int)&spline->points[0].y + iVar1);
        fVar3 = param_3->y - *(float *)((int)&spline->points[0].y + iVar6);
        fVar4 = param_3->x - *(float *)((int)&spline->points[0].x + iVar1);
        fVar5 = param_3->x - *(float *)((int)&spline->points[0].x + iVar6);
        fVar2 = SQRT(fVar4 * fVar4 + fVar2 * fVar2);
        fVar3 = SQRT(fVar5 * fVar5 + fVar3 * fVar3);
        if (param_4 == '\0') {
          if ((fVar3 < fVar2) || (*(char *)(param_2 + 0x18d) == '\x01')) {
            *(undefined1 *)(param_2 + 0x18d) = 1;
            lVar8 = lVar9;
          }
          else if ((fVar2 < fVar3) || (*(char *)(param_2 + 0x18d) == -1)) {
            *(undefined1 *)(param_2 + 0x18d) = 0xff;
            lVar8 = lVar10;
          }
        }
        else if ((fVar2 < fVar3) || (*(char *)(param_2 + 0x18d) == '\x01')) {
          *(undefined1 *)(param_2 + 0x18d) = 1;
          lVar8 = lVar9;
        }
        else if ((fVar3 < fVar2) || (*(char *)(param_2 + 0x18d) == -1)) {
          *(undefined1 *)(param_2 + 0x18d) = 0xff;
          lVar8 = lVar10;
        }
      }
      else {
        iVar6 = path::PathFindClosestPnt((float)dVar11,param_3,spline);
        iVar1 = *(int *)(param_2 + 0x180);
        if (iVar6 < iVar1) {
          *(undefined1 *)(param_2 + 0x18d) = 0xff;
          lVar8 = lVar10;
        }
        else if (iVar1 < iVar6) {
          *(undefined1 *)(param_2 + 0x18d) = 1;
          lVar8 = lVar9;
        }
        else {
          lVar8 = (longlong)iVar1;
        }
      }
      if (((int)lVar8 != -1) && (param_5 != (undefined4 *)0x0)) {
        iVar1 = (int)(lVar8 << 4);
        *param_5 = *(undefined4 *)((int)&spline->points[0].x + iVar1);
        param_5[1] = *(undefined4 *)((int)&spline->points[0].y + iVar1);
        param_5[2] = *(undefined4 *)((int)&spline->points[0].z + iVar1);
        param_5[3] = *(undefined4 *)((int)&spline->points[0].w + iVar1);
      }
    }
  }
  return lVar8;
}



//==== 0041fa18  ns=mobyupdate_helpers  size=0x130
// sig: undefined M691_0041fa18(void)
// callers(1): 0041fb90 mobyupdate_unsorted::UpdateMoby_691
// callees(2): 001367d0 path::PathFindClosestPnt; 005cd098 libc::printf
// strings: 0065723c: 'bad path! %d\n'

longlong mobyupdate_helpers::M691_0041fa18
                   (int param_1,int param_2,undefined8 param_3,float *param_4)

{
  Spline *spline;
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_2 + 0x174);
  if (iVar1 == -1) {
    libc::printf("bad path! %d\n",0xffffffffffffffff);
    lVar2 = -1;
  }
  else {
    lVar2 = -1;
    spline = Splines[iVar1];
    if (spline == (Spline *)0x0) {
      libc::printf("bad path! %d\n",iVar1);
    }
    else {
      iVar1 = path::PathFindClosestPnt(0.0,(Vec4 *)(param_1 + 0x10),spline);
      *(int *)(param_2 + 0x180) = iVar1;
      lVar2 = (longlong)((iVar1 + 1) - ((iVar1 + 1) / spline->cnt) * spline->cnt);
      lVar2 = lVar2 + (lVar2 - iVar1 >> 0x3f & iVar1 - lVar2);
      iVar1 = (int)lVar2;
      if ((iVar1 != -1) && (param_4 != (float *)0x0)) {
        *param_4 = spline->points[iVar1].x;
        param_4[1] = spline->points[iVar1].y;
        param_4[2] = spline->points[iVar1].z;
        param_4[3] = spline->points[iVar1].w;
      }
    }
  }
  return lVar2;
}



//==== 0041fb90  ns=mobyupdate_unsorted  size=0x235c
// sig: undefined UpdateMoby_691(void * this, MobyInstance * moby)
// callers(0): 
// callees(38): 00057820 collproc::CollLine; 0005e598 collproc::CollMobySphere; 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f1114 mobyfunc::GetBonePosition; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00101cc0 mobyutil::MB_UpdateNavMoveTurning; 0010581c mobyutil::SetCollDamIn; 00106150 mobyutil::MB_RegisterLameShadow; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0010e030 mobyutil::MB_genericExplosion; 001118d8 mobyutil::MB_getTarget; 001367d0 path::PathFindClosestPnt; 003487b8 FUN_003487b8; 0041f770 mobyupdate_helpers::M691_0041f770; 0041fa18 mobyupdate_helpers::M691_0041fa18; 0047cba4 FUN_0047cba4; 00495778 FUN_00495778; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005026a0 fastfunc::FastSubRots; 00502730 fastfunc::FastIntToDouble; 005c8318 rand; 005e7e18 idol::GetAnimDuration; 005e7e98 FUN_005e7e98; 005e7f98 FUN_005e7f98; 005e8078 mathfunc::cosf; 005e8128 FUN_005e8128; 005e8338 FUN_005e8338; 005e8588 FUN_005e8588; 005e8e80 FUN_005e8e80

/* Moby 691 */

void __thiscall mobyupdate_unsorted::UpdateMoby_691(void *this,MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  undefined4 uVar10;
  float *pfVar11;
  int iVar12;
  undefined2 uVar15;
  undefined8 uVar9;
  int iVar13;
  uint uVar14;
  longlong lVar16;
  ushort *puVar17;
  Spline *spline;
  ulonglong uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 auStack_130 [48];
  undefined1 auStack_100 [48];
  Vec4 local_d0 [4];
  int local_90;
  int local_80;
  float local_7c;
  longlong local_78;
  
  lVar8 = (longlong)(int)this;
  if (this == (void *)0x0) {
    return;
  }
  uVar14 = *(uint *)((int)this + 0x78);
  uVar18 = (ulonglong)uVar14;
  if (uVar14 == 0) {
    return;
  }
  spline = (Spline *)0x0;
  if (*(int *)(uVar14 + 0x174) != -1) {
    spline = Splines[*(int *)(uVar14 + 0x174)];
    moby = (MobyInstance *)Splines;
  }
  dVar19 = (double)*(float *)(uVar14 + 0x148);
  if ((double)*(float *)(uVar14 + 0x148) - (double)*(float *)(uVar14 + 0x140) < 0.0) {
    dVar19 = (double)*(float *)(uVar14 + 0x140);
  }
  mobyutil::MB_getTarget(dVar19,lVar8,moby,local_d0);
  if (*(int *)(uVar14 + 0x38) != 0) {
    uVar10 = idol::GetAnimDuration(*(undefined4 *)(uVar14 + 0x15c));
    *(undefined4 *)(uVar14 + 0x178) = uVar10;
    *(undefined4 *)(uVar14 + 0x38) = 0;
  }
  fastfunc::FastDecTimerS32(uVar18 + 0x178);
  fastfunc::FastDecTimerS32(uVar18 + 0x17c);
  if (*(char *)((int)this + 0x20) != '\x0e') {
    local_7c = 0.0;
    pfVar11 = (float *)mobyutil::MB_damage(lVar8,0x330000,0);
    iVar12 = mobyutil::MB_HandleDamage((MobyInstance *)this,pfVar11,uVar18 + 0x20,0,&local_80,0,0,4)
    ;
    if (1 < local_80) {
      dVar19 = (double)FUN_005e8338((double)(*(float *)((int)this + 0x10) - *pfVar11),
                                    (double)(*(float *)((int)this + 0x14) - pfVar11[1]));
      local_7c = (float)dVar19;
      *(undefined4 *)(uVar14 + 0x90) = 0x3e75c28f;
      fVar2 = DAT_0071f418 * 32.0;
      *(undefined4 *)(uVar14 + 0x74) = 0x3a03126f;
      *(float *)(uVar14 + 0x70) = fVar2;
      fVar2 = mobyutil::g_FrameTime;
      *(float *)(uVar14 + 0x78) = mobyutil::g_FrameTime * 9.0;
      *(undefined1 *)(uVar14 + 0x9d) = 0;
      *(undefined4 *)(uVar14 + 0x80) = 0x200;
      *(undefined4 *)(uVar14 + 0x88) = 0x3f000000;
      *(undefined4 *)(uVar14 + 0x84) = 9;
      *(float *)(uVar14 + 0x7c) = fVar2 * 7.0;
    }
    if (iVar12 < 3) {
      if (0 < iVar12) {
        if (iVar12 < 2) {
          *(undefined4 *)(uVar14 + 0x20) = 0;
        }
        else {
          *(undefined4 *)(uVar14 + 0x20) = 0;
        }
      }
    }
    else if (iVar12 < 9) {
      if (iVar12 < 8) {
        mobyutil::MB_VecAtan2Angles
                  (*(undefined8 *)(pfVar11 + 4),*(undefined8 *)(pfVar11 + 6),&local_7c,uVar18 + 0x78
                   ,uVar18 + 0x7c);
        mobyutil::MB_StartKick((double)local_7c,lVar8,uVar18 + 0x60);
        *(undefined4 *)(uVar14 + 0xb0) = 0x40900000;
        *(undefined4 *)(uVar14 + 0xb4) = 0x41100000;
        *(undefined1 *)((int)this + 0x20) = 0xd;
      }
      else {
        if (*(char *)((int)this + 0x53) != '\r') {
          uVar9 = idol::GetAnimDuration(10);
          mobyutil::MB_SetAnimation(lVar8,0xd,0,uVar9);
        }
        *(undefined1 *)((int)this + 0x20) = 0xc;
      }
    }
    else if (iVar12 < 0xb) {
      if (*(char *)((int)this + 0x53) != '\x0e') {
        uVar9 = idol::GetAnimDuration(10);
        mobyutil::MB_SetAnimation(lVar8,0xe,0,uVar9);
      }
      *(undefined1 *)((int)this + 0x20) = 0xb;
    }
    if (1 < local_80) {
      *(undefined4 *)(uVar14 + 0x178) = 0;
      uVar4 = (int)*(uint *)(uVar14 + 0x20) >> 0x1f;
      uVar5 = (int)pfVar11[0xb] >> 0x1f;
      fVar2 = pfVar11[0xb];
      if ((int)((uVar5 >> 1 ^ (uint)pfVar11[0xb]) - uVar5) <
          (int)((uVar4 >> 1 ^ *(uint *)(uVar14 + 0x20)) - uVar4)) {
        *(undefined1 *)(uVar14 + 0x117) = 0xfa;
        *(float *)(uVar14 + 0x20) = *(float *)(uVar14 + 0x20) - fVar2;
        uVar15 = idol::GetAnimDuration(0x3c);
        *(undefined2 *)(uVar14 + 0x26) = uVar15;
        mobyutil::MB_UpdateLightsTransition(lVar8,uVar18 + 0x110);
      }
      else {
        *(undefined4 *)(uVar14 + 0x20) = 0;
        *(undefined1 *)((int)this + 0x20) = 0xe;
        *(ushort *)((int)this + 0x34) = *(ushort *)((int)this + 0x34) & 0xefff;
        if (((uint)pfVar11[0xc] & 1) != 0) {
          lVar16 = uVar18 + 0x130;
          FUN_005e7e98(lVar16,pfVar11 + 4);
          FUN_005e8e80((double)*(float *)(uVar14 + 0xe4),lVar16,lVar16);
        }
        fVar2 = mobyutil::g_FrameTime;
        *(float *)(uVar14 + 0x78) = mobyutil::g_FrameTime * 9.0;
        *(float *)(uVar14 + 0x7c) = fVar2 * 8.0;
        mobyutil::MB_VecAtan2Angles
                  (*(undefined8 *)(pfVar11 + 4),*(undefined8 *)(pfVar11 + 6),&local_7c,uVar18 + 0x78
                   ,uVar18 + 0x7c);
        mobyutil::MB_StartKick((double)local_7c,lVar8,uVar18 + 0x60);
        *(undefined4 *)(uVar14 + 0xb0) = 0x40400000;
        *(undefined4 *)(uVar14 + 0xb4) = 0x40f00000;
        *(undefined1 *)(uVar14 + 0x117) = 0x78;
        mobyutil::MB_UpdateLightsTransition(lVar8,uVar18 + 0x110);
        if (-1 < *(int *)(uVar14 + 0x1b0)) {
          puVar17 = (ushort *)(&mobyutil::g_MobyGroups)[*(int *)(uVar14 + 0x1b0)];
          do {
            FUN_0047cba4(MobyInstance + (*puVar17 & 0x7fff));
            uVar3 = *puVar17;
            puVar17 = puVar17 + 1;
          } while (-1 < (short)uVar3);
        }
      }
    }
    *(undefined1 *)((int)this + 0xa4) = 0xff;
  }
  mobyutil::MB_ColorDyingMoby(lVar8,uVar18 + 0x110);
  fVar2 = animationSpeed;
  bVar1 = *(byte *)((int)this + 0x20);
  if (bVar1 < 8) {
    if (bVar1 == 7) {
      if ((*(byte *)((int)this + 0x70) & 2) != 0) {
        uVar9 = FUN_005e8338((double)(local_d0[0].x - *(float *)((int)this + 0x10)),
                             (double)(local_d0[0].y - *(float *)((int)this + 0x14)));
        mobyutil::OrganicDeltAngSpeed
                  (uVar9,(double)*(float *)(uVar14 + 0xfc),(double)*(float *)(uVar14 + 0x100),
                   (double)*(float *)(uVar14 + 0x104),lVar8);
        if (*(char *)((int)this + 0x53) != '\x01') {
          local_78 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar8,1,0,(int)(animationSpeed * 10.5));
        }
        *(undefined1 *)((int)this + 0x20) = 3;
      }
    }
    else if (bVar1 == 6) {
      if (*(char *)(uVar14 + 399) == '\0') {
        mobyupdate_helpers::M691_0041f770(lVar8,uVar18,local_d0,0,auStack_1c0);
      }
      else {
        mobyupdate_helpers::M691_0041fa18(lVar8,uVar18,local_d0,auStack_1c0);
      }
      *(undefined4 *)(uVar14 + 0xf8) = 10;
      mobyutil::MB_UpdateNavMoveTurning(lVar8,uVar18 + 0xc0,auStack_1c0,uVar18 + 0x130);
      fVar2 = *(float *)((int)this + 0x14) - local_d0[0].y;
      fVar6 = *(float *)((int)this + 0x10) - local_d0[0].x;
      dVar19 = (double)SQRT(fVar6 * fVar6 + fVar2 * fVar2);
      iVar13 = path::PathFindClosestPnt(0.0,(Vec4 *)((int)this + 0x10),spline);
      iVar12 = (int)((longlong)iVar13 << 4);
      fVar2 = *(float *)((int)this + 0x14) - *(float *)((int)&spline->points[0].y + iVar12);
      fVar6 = *(float *)((int)this + 0x10) - *(float *)((int)&spline->points[0].x + iVar12);
      fVar2 = SQRT(fVar6 * fVar6 + fVar2 * fVar2);
      if (local_90 == 0) {
        if ((fVar2 < *(float *)(uVar14 + 0xec)) &&
           ((0 < *(int *)((int)&spline->points[0].w + iVar12) ||
            ((*(char *)(uVar14 + 399) == '\x01' && (iVar13 == spline->cnt + -1)))))) {
          if (*(char *)((int)this + 0x53) != '\b') {
            local_78 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar8,8,0,(int)(animationSpeed * 10.5));
          }
          *(undefined1 *)((int)this + 0x20) = 7;
        }
      }
      else if ((((*(char *)(uVar14 + 399) == '\x01') && (iVar13 == spline->cnt + -1)) &&
               (fVar2 < *(float *)(uVar14 + 0xec))) ||
              (((double)*(float *)(uVar14 + 0x154) < dVar19 || (0 < *(int *)(uVar14 + 0x178))))) {
        if (*(char *)((int)this + 0x53) != '\b') {
          local_78 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar8,8,0,(int)(animationSpeed * 10.5));
        }
        *(undefined1 *)((int)this + 0x20) = 7;
      }
    }
    else if (bVar1 == 5) {
      if ((*(byte *)((int)this + 0x70) & 2) != 0) {
        if (*(char *)((int)this + 0x53) != '\a') {
          local_78 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar8,7,0,(int)(animationSpeed * 10.5));
        }
        *(undefined1 *)((int)this + 0x20) = 6;
        *(undefined1 *)(uVar14 + 0x18d) = 0;
      }
    }
    else if (bVar1 == 4) {
      mobyupdate_helpers::M691_0041f770(lVar8,uVar18,local_d0,1,auStack_1d0);
      *(undefined4 *)(uVar14 + 0xf8) = 0;
      mobyutil::MB_UpdateNavMoveTurning(lVar8,uVar18 + 0xc0,auStack_1d0,uVar18 + 0x130);
      fVar2 = *(float *)((int)this + 0x14) - local_d0[0].y;
      fVar6 = *(float *)((int)this + 0x10) - local_d0[0].x;
      dVar19 = 0.0;
      dVar20 = (double)SQRT(fVar6 * fVar6 + fVar2 * fVar2);
      iVar13 = path::PathFindClosestPnt(0.0,local_d0,spline);
      iVar12 = path::PathFindClosestPnt((float)dVar19,(Vec4 *)((int)this + 0x10),spline);
      fVar7 = animationSpeed;
      iVar12 = (int)((longlong)iVar12 << 4);
      fVar2 = *(float *)((int)this + 0x14) - *(float *)((int)&spline->points[0].y + iVar12);
      fVar6 = *(float *)((int)this + 0x10) - *(float *)((int)&spline->points[0].x + iVar12);
      fVar2 = SQRT(fVar6 * fVar6 + fVar2 * fVar2);
      if (local_90 == 0) {
        if ((fVar2 < *(float *)(uVar14 + 0xec)) &&
           (0 < *(int *)((int)&spline->points[0].w + iVar12))) {
          if (*(char *)((int)this + 0x53) != '\x01') {
            local_78 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar8,1,0,(int)(animationSpeed * 10.5));
          }
          *(undefined1 *)((int)this + 0x20) = 3;
        }
      }
      else if ((((dVar20 < (double)*(float *)(uVar14 + 0x14c)) ||
                (*(int *)(uVar14 + 0x180) == iVar13)) ||
               (SQRT(*(float *)(uVar14 + 0x138) * *(float *)(uVar14 + 0x138) +
                     *(float *)(uVar14 + 0x130) * *(float *)(uVar14 + 0x130) +
                     *(float *)(uVar14 + 0x134) * *(float *)(uVar14 + 0x134)) <= 0.0001)) &&
              (fVar2 < *(float *)(uVar14 + 0xec))) {
        if ((double)*(float *)(uVar14 + 0x194) <= dVar20) {
          if ((double)*(float *)(uVar14 + 0x144) <= dVar20) {
            auVar25 = ZEXT416(0xffffffff);
            auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
            auVar27 = vectorShiftLeftIntegerWord(auVar25,auVar25);
            auVar25 = loadVectorLeftIndexed(0x160,uVar18);
            auVar26 = loadVectorRightIndexed(0x170,uVar18);
            auVar26 = vectorConvertFromSignedFixedPointWord(auVar25 | auVar26,0);
            auVar25 = loadVectorLeftIndexed(0x24,0x41fb48);
            auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar28 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar25 = vectorAddFloatingPoint
                                (auVar26,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 |
                                         auVar25 << 0x60);
            auVar25 = vectorMultiplyAddFloatingPoint(auVar28,auVar25,auVar27);
            auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
            auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar10 = storeVectorElementWordIndexed
                               (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x17c,
                                uVar18);
            *(undefined4 *)(uVar14 + 0x17c & 0xfffffffc) = uVar10;
            if (*(char *)((int)this + 0x53) != '\x01') {
              local_78 = (longlong)(int)(fVar7 * 10.5);
              mobyutil::MB_SetAnimation(lVar8,1,0,(int)(fVar7 * 10.5));
            }
            *(undefined1 *)((int)this + 0x20) = 3;
          }
          else {
            auVar25 = ZEXT416(0xffffffff);
            auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
            auVar27 = vectorShiftLeftIntegerWord(auVar25,auVar25);
            auVar25 = loadVectorLeftIndexed(0x160,uVar18);
            auVar26 = loadVectorRightIndexed(0x170,uVar18);
            auVar26 = vectorConvertFromSignedFixedPointWord(auVar25 | auVar26,0);
            auVar25 = loadVectorLeftIndexed(0x24,0x41fb48);
            auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar28 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar25 = vectorAddFloatingPoint
                                (auVar26,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 |
                                         auVar25 << 0x60);
            auVar25 = vectorMultiplyAddFloatingPoint(auVar28,auVar25,auVar27);
            auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
            auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar10 = storeVectorElementWordIndexed
                               (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x17c,
                                uVar18);
            *(undefined4 *)(uVar14 + 0x17c & 0xfffffffc) = uVar10;
            if (*(char *)((int)this + 0x53) != '\t') {
              local_78 = (longlong)(int)(fVar7 * 10.5);
              mobyutil::MB_SetAnimation(lVar8,9,0,(int)(fVar7 * 10.5));
            }
            *(undefined1 *)((int)this + 0x20) = 8;
          }
        }
        else {
          auVar25 = ZEXT416(0xffffffff);
          auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
          auVar27 = vectorShiftLeftIntegerWord(auVar25,auVar25);
          auVar25 = loadVectorLeftIndexed(0x19c,uVar18);
          auVar26 = loadVectorRightIndexed(0x1ac,uVar18);
          auVar26 = vectorConvertFromSignedFixedPointWord(auVar25 | auVar26,0);
          auVar25 = loadVectorLeftIndexed(0x24,0x41fb48);
          auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar28 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar25 = vectorAddFloatingPoint
                              (auVar26,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60
                              );
          auVar25 = vectorMultiplyAddFloatingPoint(auVar28,auVar25,auVar27);
          auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
          auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar10 = storeVectorElementWordIndexed
                             (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x17c,
                              uVar18);
          *(undefined4 *)(uVar14 + 0x17c & 0xfffffffc) = uVar10;
          if (*(char *)((int)this + 0x53) != '\x11') {
            local_78 = (longlong)(int)(fVar7 * 10.5);
            mobyutil::MB_SetAnimation(lVar8,0x11,0,(int)(fVar7 * 10.5));
          }
          *(undefined1 *)((int)this + 0x20) = 0xf;
        }
      }
    }
    else if (bVar1 == 3) {
      uVar9 = FUN_005e8338((double)(local_d0[0].x - *(float *)((int)this + 0x10)),
                           (double)(local_d0[0].y - *(float *)((int)this + 0x14)));
      mobyutil::OrganicDeltAngSpeed
                (uVar9,(double)*(float *)(uVar14 + 0xfc),(double)*(float *)(uVar14 + 0x100),
                 (double)*(float *)(uVar14 + 0x104),lVar8);
      if ((*(byte *)((int)this + 0x70) & 2) != 0) {
        iVar13 = rand();
        iVar12 = iVar13 / 3 + (iVar13 >> 0x1f);
        iVar13 = iVar13 + (iVar12 - (iVar12 >> 0x1f)) * -3;
        if (iVar13 < 1) {
          if ((-1 < iVar13) && (*(char *)((int)this + 0x53) != '\x01')) {
            uVar9 = idol::GetAnimDuration(10);
            mobyutil::MB_SetAnimation(lVar8,1,0,uVar9);
          }
        }
        else if (iVar13 < 2) {
          if (*(char *)((int)this + 0x53) != '\x03') {
            uVar9 = idol::GetAnimDuration(10);
            mobyutil::MB_SetAnimation(lVar8,3,0,uVar9);
          }
        }
        else if ((iVar13 < 3) && (*(char *)((int)this + 0x53) != '\x04')) {
          local_78 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar8,4,0,(int)(animationSpeed * 10.5));
        }
      }
      if (local_90 != 0) {
        dVar19 = (double)FUN_005e8588(lVar8 + 0x10,local_d0);
        fVar2 = animationSpeed;
        if ((double)*(float *)(uVar14 + 0x194) <= dVar19) {
          if (((double)*(float *)(uVar14 + 0x150) <= dVar19 || spline == (Spline *)0x0) ||
             ((*(char *)(uVar14 + 399) == '\x01' &&
              (iVar12 = path::PathFindClosestPnt(0.0,(Vec4 *)(lVar8 + 0x10),spline),
              iVar12 == spline->cnt + -1)))) {
            if (dVar19 < (double)*(float *)(uVar14 + 0x144)) {
              if (*(char *)((int)this + 0x53) != '\t') {
                local_78 = (longlong)(int)(animationSpeed * 10.5);
                mobyutil::MB_SetAnimation(lVar8,9,0,(int)(animationSpeed * 10.5));
              }
              *(undefined1 *)((int)this + 0x20) = 8;
            }
          }
          else {
            if (*(char *)((int)this + 0x53) != '\x06') {
              local_78 = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar8,6,0,(int)(animationSpeed * 10.5));
            }
            *(undefined1 *)((int)this + 0x20) = 5;
          }
        }
        else {
          auVar25 = ZEXT416(0xffffffff);
          auVar26 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
          auVar25 = loadVectorLeftIndexed(0x19c,uVar18);
          auVar27 = vectorShiftLeftIntegerWord(auVar26,auVar26);
          auVar26 = loadVectorRightIndexed(0x1ac,uVar18);
          auVar26 = vectorConvertFromSignedFixedPointWord(auVar25 | auVar26,0);
          auVar25 = loadVectorLeftIndexed(0x24,0x41fb48);
          auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar28 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar25 = vectorAddFloatingPoint
                              (auVar26,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60
                              );
          auVar25 = vectorMultiplyAddFloatingPoint(auVar28,auVar25,auVar27);
          auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
          auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar10 = storeVectorElementWordIndexed
                             (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x17c,
                              uVar18);
          *(undefined4 *)(uVar14 + 0x17c & 0xfffffffc) = uVar10;
          if (*(char *)((int)this + 0x53) != '\x11') {
            local_78 = (longlong)(int)(fVar2 * 10.5);
            mobyutil::MB_SetAnimation(lVar8,0x11,0,(int)(fVar2 * 10.5));
          }
          *(undefined1 *)((int)this + 0x20) = 0xf;
        }
        if (0 < *(int *)(uVar14 + 0x178)) {
          if (*(char *)((int)this + 0x53) != '\x05') {
            local_78 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar8,5,0,(int)(animationSpeed * 10.5));
          }
          *(undefined1 *)((int)this + 0x20) = 4;
        }
      }
    }
    else if (bVar1 == 2) {
      uVar9 = FUN_005e8338((double)(local_d0[0].x - *(float *)((int)this + 0x10)),
                           (double)(local_d0[0].y - *(float *)((int)this + 0x14)));
      mobyutil::OrganicDeltAngSpeed
                (uVar9,(double)*(float *)(uVar14 + 0xfc),(double)*(float *)(uVar14 + 0x100),
                 (double)*(float *)(uVar14 + 0x104),lVar8);
      if ((*(byte *)((int)this + 0x70) & 2) != 0) {
        dVar19 = (double)FUN_005e8588(lVar8 + 0x10,local_d0);
        if (((*(int *)(uVar14 + 0x17c) == 0) && (local_90 != 0)) &&
           (dVar19 < (double)*(float *)(uVar14 + 0x194))) {
          dVar23 = (double)*(float *)((int)this + 0x48);
          dVar20 = (double)FUN_005e8338((double)(local_d0[0].x - *(float *)((int)this + 0x10)),
                                        (double)(local_d0[0].y - *(float *)((int)this + 0x14)));
          dVar20 = (double)fastfunc::FastSubRots((float)dVar23,(float)dVar20);
          if (dVar20 < (double)(*(float *)(uVar14 + 0x170) * 0.017453292)) {
            uVar10 = idol::GetAnimDuration(*(undefined4 *)(uVar14 + 0x19c));
            *(undefined4 *)(uVar14 + 0x17c) = uVar10;
            if (*(char *)((int)this + 0x53) != '\x11') {
              uVar9 = idol::GetAnimDuration(10);
              mobyutil::MB_SetAnimation(lVar8,0x11,0,uVar9);
            }
            *(undefined1 *)((int)this + 0x20) = 0xf;
            goto LAB_00421e90;
          }
        }
        if (((*(int *)(uVar14 + 0x17c) == 0) && (local_90 != 0)) &&
           (dVar19 < (double)*(float *)(uVar14 + 0x144))) {
          dVar23 = (double)*(float *)((int)this + 0x48);
          dVar20 = (double)FUN_005e8338((double)(local_d0[0].x - *(float *)((int)this + 0x10)),
                                        (double)(local_d0[0].y - *(float *)((int)this + 0x14)));
          dVar20 = (double)fastfunc::FastSubRots((float)dVar23,(float)dVar20);
          if (dVar20 < (double)(*(float *)(uVar14 + 0x170) * 0.017453292)) {
            if (dVar19 <= (double)*(float *)(uVar14 + 0x150)) {
              if ((spline != (Spline *)0x0) &&
                 ((*(char *)(uVar14 + 399) != '\x01' ||
                  (iVar12 = path::PathFindClosestPnt(0.0,(Vec4 *)(lVar8 + 0x10),spline),
                  iVar12 != spline->cnt + -1)))) {
                if (*(char *)((int)this + 0x53) != '\x06') {
                  uVar9 = idol::GetAnimDuration(10);
                  mobyutil::MB_SetAnimation(lVar8,6,0,uVar9);
                }
                *(undefined1 *)((int)this + 0x20) = 5;
              }
            }
            else {
              uVar10 = idol::GetAnimDuration(*(undefined4 *)(uVar14 + 0x160));
              *(undefined4 *)(uVar14 + 0x17c) = uVar10;
              if (*(char *)((int)this + 0x53) != '\t') {
                uVar9 = idol::GetAnimDuration(10);
                mobyutil::MB_SetAnimation(lVar8,9,0,uVar9);
              }
              *(undefined1 *)((int)this + 0x20) = 8;
            }
            goto LAB_00421e90;
          }
        }
        if (*(int *)(uVar14 + 0x178) < 1) {
          if (*(char *)((int)this + 0x53) != '\x01') {
            uVar9 = idol::GetAnimDuration(10);
            mobyutil::MB_SetAnimation(lVar8,1,0,uVar9);
          }
          *(undefined1 *)((int)this + 0x20) = 3;
        }
        else {
          if (*(char *)((int)this + 0x53) != '\x05') {
            uVar9 = idol::GetAnimDuration(10);
            mobyutil::MB_SetAnimation(lVar8,5,0,uVar9);
          }
          *(undefined1 *)((int)this + 0x20) = 4;
        }
      }
    }
    else if (bVar1 == 1) {
      uVar9 = FUN_005e8338((double)(local_d0[0].x - *(float *)((int)this + 0x10)),
                           (double)(local_d0[0].y - *(float *)((int)this + 0x14)));
      mobyutil::OrganicDeltAngSpeed
                (uVar9,(double)*(float *)(uVar14 + 0xfc),(double)*(float *)(uVar14 + 0x100),
                 (double)*(float *)(uVar14 + 0x104),lVar8);
      if ((((local_90 != 0) &&
           (dVar19 = (double)FUN_005e8588(lVar8 + 0x10,local_d0),
           dVar19 < (double)*(float *)(uVar14 + 0x140))) || (0 < *(int *)(uVar14 + 0x178))) &&
         (*(undefined1 *)((int)this + 0x20) = 2, *(char *)((int)this + 0x53) != '\x02')) {
        uVar9 = idol::GetAnimDuration(10);
        mobyutil::MB_SetAnimation(lVar8,2,0,uVar9);
      }
    }
    else if (bVar1 == 0) {
      *(ushort *)((int)this + 0x34) = *(ushort *)((int)this + 0x34) | 0x1000;
      *(undefined1 *)(uVar14 + 0x130) = 0;
      *(undefined1 *)(uVar14 + 0x131) = 0;
      *(undefined1 *)(uVar14 + 0x132) = 0;
      *(undefined1 *)(uVar14 + 0x133) = 0;
      *(undefined1 *)(uVar14 + 0x134) = 0;
      *(undefined1 *)(uVar14 + 0x135) = 0;
      *(undefined1 *)(uVar14 + 0x136) = 0;
      *(undefined1 *)(uVar14 + 0x137) = 0;
      *(undefined1 *)(uVar14 + 0x138) = 0;
      *(undefined1 *)(uVar14 + 0x139) = 0;
      *(undefined1 *)(uVar14 + 0x13a) = 0;
      *(undefined1 *)(uVar14 + 0x13b) = 0;
      *(undefined1 *)(uVar14 + 0x13c) = 0;
      *(undefined1 *)(uVar14 + 0x13d) = 0;
      *(undefined1 *)(uVar14 + 0x13e) = 0;
      *(undefined1 *)(uVar14 + 0x13f) = 0;
      lVar16 = lVar8 + 0x10;
      FUN_005e7e98(auStack_1e0,lVar16);
      FUN_005e7e98(auStack_1f0,lVar16);
      iVar12 = collproc::CollLine(auStack_1e0,auStack_1f0,2,lVar8,0);
      if (iVar12 != 0) {
        FUN_005e7e98(lVar16,0xa10960);
        *(float *)((int)this + 0x18) = *(float *)((int)this + 0x18) + 0.01;
      }
      FUN_005e7e98(uVar18 + 0x120,lVar16);
      if (spline != (Spline *)0x0) {
        iVar12 = path::PathFindClosestPnt(0.0,(Vec4 *)lVar16,spline);
        *(int *)(uVar14 + 0x180) = iVar12;
      }
      if (*(char *)((int)this + 0x53) != '\x01') {
        uVar9 = idol::GetAnimDuration(10);
        mobyutil::MB_SetAnimation(lVar8,1,0,uVar9);
      }
      *(undefined1 *)((int)this + 0x20) = 1;
    }
  }
  else if (bVar1 == 0xf) {
    uVar9 = FUN_005e8338((double)(local_d0[0].x - *(float *)((int)this + 0x10)),
                         (double)(local_d0[0].y - *(float *)((int)this + 0x14)));
    mobyutil::OrganicDeltAngSpeed
              (uVar9,(double)(*(float *)(uVar14 + 0xfc) * 2.0),(double)*(float *)(uVar14 + 0x100),
               (double)*(float *)(uVar14 + 0x104),lVar8,&DAT_0041fb48,uVar18 + 0xd4);
    if ((*(char *)((int)this + 0x52) == '\x11') &&
       (dVar19 = (double)mobyfunc::BlendAnimFrame((MobyInstance *)this), 10.0 < dVar19)) {
      mobyfunc::GetBonePosition(lVar8,0,local_150);
      mobyfunc::GetBonePosition(lVar8,1,local_140);
      FUN_005e7f98(0x3ff0000000000000,local_160,local_160);
      mobyutil::SetCollDamIn((double)*(float *)(uVar14 + 0x198),auStack_100,lVar8,1);
      iVar12 = collproc::CollMobySphere((double)*(float *)(uVar14 + 0x16c),local_170);
      if ((iVar12 == 0) &&
         (iVar12 = collproc::CollMobySphere((double)*(float *)(uVar14 + 0x16c),local_140),
         iVar12 == 0)) {
        collproc::CollMobySphere((double)*(float *)(uVar14 + 0x16c),local_150);
      }
    }
    if ((*(byte *)((int)this + 0x70) & 2) != 0) {
      if (*(char *)((int)this + 0x53) != '\x01') {
        local_78 = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar8,1,0,(int)(animationSpeed * 10.5));
      }
      *(undefined1 *)((int)this + 0x20) = 3;
    }
  }
  else if (bVar1 == 0xe) {
    uVar14 = mobyutil::MB_UpdateKick((MobyInstance *)this,(KickVars *)(uVar14 + 0x60));
    if ((uVar14 & 0x40) != 0) {
      mobyutil::MB_genericExplosion
                (0,0,0x4000000000000000,0x3ff0000000000000,0x4010000000000000,0x3ff0000000000000,
                 0x401c000000000000,lVar8,uVar18 + 0x130,0,1,0xffffffffffffffff,3,3,5);
      mobyfunc::DeleteMoby((MobyInstance *)this);
      return;
    }
  }
  else if (bVar1 == 0xd) {
    uVar14 = mobyutil::MB_UpdateKick((MobyInstance *)this,(KickVars *)(uVar14 + 0x60));
    if ((uVar14 & 1) != 0) {
      if (*(char *)((int)this + 0x53) != '\x01') {
        local_78 = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar8,1,0,(int)(animationSpeed * 10.5));
      }
      *(undefined1 *)((int)this + 0x20) = 3;
    }
  }
  else if (bVar1 == 0xc) {
    if ((*(byte *)((int)this + 0x70) & 2) != 0) {
      if (*(char *)((int)this + 0x53) != '\x01') {
        local_78 = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar8,1,0,(int)(animationSpeed * 10.5));
      }
      *(undefined1 *)((int)this + 0x20) = 3;
    }
  }
  else if (bVar1 == 0xb) {
    if ((*(byte *)((int)this + 0x70) & 2) != 0) {
      if (*(char *)((int)this + 0x53) != '\x01') {
        local_78 = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar8,1,0,(int)(animationSpeed * 10.5));
      }
      *(undefined1 *)((int)this + 0x20) = 3;
    }
  }
  else if (bVar1 == 10) {
    if ((*(byte *)((int)this + 0x70) & 2) != 0) {
      fVar6 = *(float *)((int)this + 0x14) - local_d0[0].y;
      fVar7 = *(float *)((int)this + 0x10) - local_d0[0].x;
      if (((*(int *)(uVar14 + 0x17c) != 0) || (local_90 == 0)) ||
         (*(float *)(uVar14 + 0x194) <= SQRT(fVar7 * fVar7 + fVar6 * fVar6))) {
        if ((spline == (Spline *)0x0) ||
           ((*(char *)(uVar14 + 399) == '\x01' &&
            (iVar12 = path::PathFindClosestPnt(0.0,(Vec4 *)((int)this + 0x10),spline),
            iVar12 == spline->cnt + -1)))) {
          if (*(char *)((int)this + 0x53) != '\x01') {
            local_78 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar8,1,0,(int)(animationSpeed * 10.5));
          }
          *(undefined1 *)((int)this + 0x20) = 3;
        }
        else {
          if (*(char *)((int)this + 0x53) != '\x06') {
            local_78 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar8,6,0,(int)(animationSpeed * 10.5));
          }
          *(undefined1 *)((int)this + 0x20) = 5;
        }
      }
      else {
        auVar25 = ZEXT416(0xffffffff);
        auVar26 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar25 = loadVectorLeftIndexed(0x19c,uVar18);
        auVar27 = vectorShiftLeftIntegerWord(auVar26,auVar26);
        auVar26 = loadVectorRightIndexed(0x1ac,uVar18);
        auVar26 = vectorConvertFromSignedFixedPointWord(auVar25 | auVar26,0);
        auVar25 = loadVectorLeftIndexed(0x24,0x41fb48);
        auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar28 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar25 = vectorAddFloatingPoint
                            (auVar26,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60);
        auVar25 = vectorMultiplyAddFloatingPoint(auVar28,auVar25,auVar27);
        auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
        auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar10 = storeVectorElementWordIndexed
                           (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x17c,
                            uVar18);
        *(undefined4 *)(uVar14 + 0x17c & 0xfffffffc) = uVar10;
        if (*(char *)((int)this + 0x53) != '\x11') {
          local_78 = (longlong)(int)(fVar2 * 10.5);
          mobyutil::MB_SetAnimation(lVar8,0x11,0,(int)(fVar2 * 10.5));
        }
        *(undefined1 *)((int)this + 0x20) = 0xf;
      }
    }
  }
  else if (bVar1 == 9) {
    uVar9 = FUN_005e8338((double)(local_d0[0].x - *(float *)((int)this + 0x10)),
                         (double)(local_d0[0].y - *(float *)((int)this + 0x14)));
    mobyutil::OrganicDeltAngSpeed
              (uVar9,(double)(*(float *)(uVar14 + 0xfc) * 2.0),(double)*(float *)(uVar14 + 0x100),
               (double)*(float *)(uVar14 + 0x104),lVar8,&DAT_0041fb48,uVar18 + 0xd4);
    fVar2 = animationSpeed;
    if ((*(byte *)((int)this + 0x70) & 2) != 0) {
      auVar25 = ZEXT416(0xffffffff);
      auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
      auVar27 = vectorShiftLeftIntegerWord(auVar25,auVar25);
      auVar25 = loadVectorLeftIndexed(0x164,uVar18);
      auVar26 = loadVectorRightIndexed(0x174,uVar18);
      auVar26 = vectorConvertFromSignedFixedPointWord(auVar25 | auVar26,0);
      auVar25 = loadVectorLeftIndexed(0x24,0x41fb48);
      auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar28 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar25 = vectorAddFloatingPoint
                          (auVar26,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60);
      auVar25 = vectorMultiplyAddFloatingPoint(auVar28,auVar25,auVar27);
      auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
      auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar10 = storeVectorElementWordIndexed
                         (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x17c,uVar18
                         );
      *(undefined4 *)(uVar14 + 0x17c & 0xfffffffc) = uVar10;
      if (*(char *)(uVar14 + 0x18e) == '\0') {
        *(undefined1 *)(uVar14 + 0x18e) = 0;
        if (*(char *)((int)this + 0x53) != '\x01') {
          iVar12 = (int)(fVar2 * 10.5);
          local_78 = (longlong)iVar12;
          mobyutil::MB_SetAnimation(lVar8,1,0,iVar12);
        }
        *(undefined1 *)((int)this + 0x20) = 3;
      }
      else {
        *(undefined1 *)(uVar14 + 0x18e) = 0;
        if (*(char *)((int)this + 0x53) != '\f') {
          iVar12 = (int)(fVar2 * 10.5);
          local_78 = (longlong)iVar12;
          mobyutil::MB_SetAnimation(lVar8,0xc,0,iVar12);
        }
        *(undefined1 *)((int)this + 0x20) = 10;
      }
    }
  }
  else if (bVar1 == 8) {
    uVar9 = FUN_005e8338((double)(local_d0[0].x - *(float *)((int)this + 0x10)),
                         (double)(local_d0[0].y - *(float *)((int)this + 0x14)));
    mobyutil::OrganicDeltAngSpeed
              (uVar9,(double)(*(float *)(uVar14 + 0xfc) * 2.0),(double)*(float *)(uVar14 + 0x100),
               (double)*(float *)(uVar14 + 0x104),lVar8,&DAT_0041fb48,uVar18 + 0xd4);
    if (((*(byte *)((int)this + 0x70) & 2) != 0) && (*(char *)((int)this + 0x53) != '\n')) {
      local_78 = (longlong)(int)(animationSpeed * 10.5);
      mobyutil::MB_SetAnimation(lVar8,10,0,(int)(animationSpeed * 10.5));
    }
    *(undefined1 *)(uVar14 + 0x130) = 0;
    *(undefined1 *)(uVar14 + 0x131) = 0;
    *(undefined1 *)(uVar14 + 0x132) = 0;
    *(undefined1 *)(uVar14 + 0x133) = 0;
    *(undefined1 *)(uVar14 + 0x134) = 0;
    *(undefined1 *)(uVar14 + 0x135) = 0;
    *(undefined1 *)(uVar14 + 0x136) = 0;
    *(undefined1 *)(uVar14 + 0x137) = 0;
    *(undefined1 *)(uVar14 + 0x138) = 0;
    *(undefined1 *)(uVar14 + 0x139) = 0;
    *(undefined1 *)(uVar14 + 0x13a) = 0;
    *(undefined1 *)(uVar14 + 0x13b) = 0;
    *(undefined1 *)(uVar14 + 0x13c) = 0;
    *(undefined1 *)(uVar14 + 0x13d) = 0;
    *(undefined1 *)(uVar14 + 0x13e) = 0;
    *(undefined1 *)(uVar14 + 0x13f) = 0;
    fVar7 = animationSpeed;
    fVar2 = *(float *)((int)this + 0x14) - local_d0[0].y;
    fVar6 = *(float *)((int)this + 0x10) - local_d0[0].x;
    if (*(float *)(uVar14 + 0x194) <= SQRT(fVar6 * fVar6 + fVar2 * fVar2)) {
      iVar12 = fastfunc::FastDecTimerS32(uVar18 + 0x17c);
      if ((iVar12 != 0) && (*(char *)((int)this + 0x52) == '\n')) {
        dVar20 = (double)*(float *)((int)this + 0x48);
        dVar19 = (double)FUN_005e8338((double)(local_d0[0].x - *(float *)((int)this + 0x10)),
                                      (double)(local_d0[0].y - *(float *)((int)this + 0x14)));
        dVar19 = (double)fastfunc::FastSubRots((float)dVar20,(float)dVar19);
        dVar20 = 0.01745329238474369;
        if (dVar19 < (double)(*(float *)(uVar14 + 0x170) * 0.017453292)) {
          fVar2 = *(float *)((int)this + 0x14) - local_d0[0].y;
          fVar6 = *(float *)((int)this + 0x10) - local_d0[0].x;
          if (*(float *)(uVar14 + 0x144) <= SQRT(fVar6 * fVar6 + fVar2 * fVar2)) {
            if (*(char *)((int)this + 0x53) != '\x01') {
              local_78 = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar8,1,0,(int)(animationSpeed * 10.5));
            }
            *(undefined1 *)((int)this + 0x20) = 3;
          }
          else {
            *(undefined1 *)(uVar14 + 0x130) = 0;
            *(undefined1 *)(uVar14 + 0x131) = 0;
            *(undefined1 *)(uVar14 + 0x132) = 0;
            *(undefined1 *)(uVar14 + 0x133) = 0;
            *(undefined1 *)(uVar14 + 0x134) = 0;
            *(undefined1 *)(uVar14 + 0x135) = 0;
            *(undefined1 *)(uVar14 + 0x136) = 0;
            *(undefined1 *)(uVar14 + 0x137) = 0;
            *(undefined1 *)(uVar14 + 0x138) = 0;
            *(undefined1 *)(uVar14 + 0x139) = 0;
            *(undefined1 *)(uVar14 + 0x13a) = 0;
            *(undefined1 *)(uVar14 + 0x13b) = 0;
            *(undefined1 *)(uVar14 + 0x13c) = 0;
            *(undefined1 *)(uVar14 + 0x13d) = 0;
            *(undefined1 *)(uVar14 + 0x13e) = 0;
            *(undefined1 *)(uVar14 + 0x13f) = 0;
            if (*(char *)((int)this + 0x53) != '\v') {
              local_78 = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar8,0xb,0,(int)(animationSpeed * 10.5));
            }
            *(undefined1 *)((int)this + 0x20) = 9;
            *(undefined4 *)((int)this + 0x58) = 0x3f666666;
            *(undefined1 *)(uVar14 + 0x18e) = 0;
            dVar19 = (double)fastfunc::FastIntToDouble(*(undefined1 *)(uVar14 + 0x18c));
            dVar24 = (double)(float)((double)(float)((double)*(float *)(uVar14 + 0x184) * dVar20) /
                                    dVar19);
            mobyfunc::GetBonePosition(lVar8,0,local_1b0);
            dVar22 = 0.0;
            dVar23 = 1.0;
            FUN_005e7f98(0x3ff0000000000000,local_180,local_180);
            mobyutil::SetCollDamIn((double)*(float *)(uVar14 + 0x168),auStack_130,lVar8,1);
            collproc::CollMobySphere((double)*(float *)(uVar14 + 0x16c),local_1b0);
            dVar20 = (double)fastfunc::FastWrapRot
                                       (*(float *)((int)this + 0x48),
                                        *(float *)(uVar14 + 0x184) * -0.017453292 * 0.5);
            if (dVar22 < dVar19) {
              lVar16 = uVar18 + 0x18e;
              dVar21 = 0.25;
              do {
                dVar20 = (double)fastfunc::FastWrapRot((float)dVar20,(float)dVar24);
                mathfunc::cosf((float)dVar20);
                FUN_005e8128(dVar20);
                FUN_005e7f98((double)(*(float *)(uVar14 + 400) * mobyutil::g_FrameTime),local_1a0,
                             local_1a0);
                iVar12 = *(int *)(uVar14 + 0x1a8);
                if (iVar12 == 4) {
                  FUN_00495778((double)*(float *)(uVar14 + 0x158),dVar23,dVar21,lVar8,local_190,
                               local_1a0,3,lVar16);
                }
                else if (iVar12 == 3) {
                  FUN_00495778((double)*(float *)(uVar14 + 0x158),dVar23,dVar21,lVar8,local_190,
                               local_1a0,2,lVar16);
                }
                else if (iVar12 == 2) {
                  FUN_00495778((double)*(float *)(uVar14 + 0x158),dVar23,
                               (double)(float)((double)*(float *)((int)this + 0x18) + dVar21),lVar8,
                               local_190,local_1a0,1,lVar16);
                }
                else if (iVar12 == 1) {
                  FUN_00495778((double)*(float *)(uVar14 + 0x158),dVar23,dVar21,lVar8,local_190,
                               local_1a0,0,lVar16);
                }
                else if (iVar12 == 0) {
                  FUN_003487b8((double)*(float *)(uVar14 + 0x188),(double)*(float *)(uVar14 + 0x158)
                               ,(double)*(float *)(uVar14 + 0x1ac),lVar8);
                }
                dVar22 = (double)(float)(dVar22 + dVar23);
              } while (dVar22 < dVar19);
            }
          }
        }
      }
    }
    else {
      auVar25 = ZEXT416(0xffffffff);
      auVar26 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
      auVar25 = loadVectorLeftIndexed(0x19c,uVar18);
      auVar27 = vectorShiftLeftIntegerWord(auVar26,auVar26);
      auVar26 = loadVectorRightIndexed(0x1ac,uVar18);
      auVar26 = vectorConvertFromSignedFixedPointWord(auVar25 | auVar26,0);
      auVar25 = loadVectorLeftIndexed(0x24,0x41fb48);
      auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar28 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar25 = vectorAddFloatingPoint
                          (auVar26,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60);
      auVar25 = vectorMultiplyAddFloatingPoint(auVar28,auVar25,auVar27);
      auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
      auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar10 = storeVectorElementWordIndexed
                         (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x17c,uVar18
                         );
      *(undefined4 *)(uVar14 + 0x17c & 0xfffffffc) = uVar10;
      if (*(char *)((int)this + 0x53) != '\x11') {
        local_78 = (longlong)(int)(fVar7 * 5.5);
        mobyutil::MB_SetAnimation(lVar8,0x11,0,(int)(fVar7 * 5.5));
      }
      *(undefined1 *)((int)this + 0x20) = 0xf;
    }
  }
LAB_00421e90:
  mobyutil::MB_RegisterLameShadow(0.5,(MobyInstance *)this);
  return;
}



