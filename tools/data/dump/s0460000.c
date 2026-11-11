//==== 004603ac  ns=mobyupdate_helpers  size=0x14
// sig: undefined M793_004603ac(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M793_004603ac(void)

{
  DAT_00873d4c = 0x10000;
  return;
}



//==== 004603c0  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_793(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 793 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_793(MobyInstance *moby)

{
  return moby;
}



//==== 004603c4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M794_004603c4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M794_004603c4(void)

{
  DAT_00873dbc = 0x10000;
  return;
}



//==== 004603e0  ns=mobyupdate_helpers  size=0x458
// sig: undefined M794_004603e0(void)
// callers(1): 00460838 mobyupdate_unsorted::UpdateMoby_794
// callees(5): 0005e598 collproc::CollMobySphere; 00105d2c mobyutil::CollDamageMobyDirect_wrap; 00500b64 fastfunc::FastEulerToMtx; 005010c0 fastfunc::FastNormalizeRMtx4; 005c5ad0 libc::memcpy

ulonglong mobyupdate_helpers::M794_004603e0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  float *pfVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  void *pvVar15;
  uint *puVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined8 in_LR;
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
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar1 = uVar11 - 0x1c0;
  puVar9 = (ulonglong *)lVar1;
  *puVar9 = uVar11;
  pfVar10 = (float *)param_2;
  uVar12 = (ulonglong)(uint)pfVar10[2] & 0x100;
  if ((int)uVar12 == 0) {
    fastfunc::FastEulerToMtx(uVar11 - 0x120,param_1 + 0x40);
    auVar30 = loadVectorLeftIndexed(in_LR,param_2);
    auVar31 = loadVectorLeftIndexed(in_LR,0x4603d8);
    auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar32 = loadVectorLeftIndexed(4,param_2);
    auVar33 = vectorCompareGreaterThanFloatingPoint(auVar30,auVar32);
    auVar32 = vectorConditionalSelect(auVar32,auVar30,auVar33);
    auVar30 = ZEXT416(0xffffffff);
    auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
    auVar33 = loadVectorLeftIndexed(0xc0,lVar1);
    auVar34 = loadVectorLeftIndexed(0xc4,lVar1);
    auVar35 = loadVectorLeftIndexed(0xcc,lVar1);
    auVar30 = vectorShiftLeftIntegerWord(auVar30,auVar30);
    auVar36 = loadVectorLeftIndexed(200,lVar1);
    auVar37 = loadVectorLeftIndexed(0x10,param_1);
    auVar31 = vectorMultiplyAddFloatingPoint
                        (auVar32,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                         auVar30);
    auVar30 = ZEXT416(0xffffffff);
    auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
    auVar32 = loadVectorLeftIndexed(0x14,param_1);
    auVar38 = loadVectorLeftIndexed(0x18,param_1);
    fVar2 = pfVar10[1];
    if (pfVar10[1] - *pfVar10 < 0.0) {
      fVar2 = *pfVar10;
    }
    auVar30 = vectorShiftLeftIntegerWord(auVar30,auVar30);
    dVar28 = 0.5;
    *(undefined4 *)((int)puVar9 + 0x8c) = 0;
    *(undefined4 *)(puVar9 + 0x11) = 0;
    *(undefined4 *)((int)puVar9 + 0x84) = 0;
    *(undefined4 *)(puVar9 + 0x10) = 0;
    auVar30 = vectorMultiplyAddFloatingPoint(auVar35,auVar31,auVar30);
    auVar35 = vectorMultiplyAddFloatingPoint(auVar33,auVar31,auVar37);
    auVar32 = vectorMultiplyAddFloatingPoint(auVar34,auVar31,auVar32);
    auVar33 = vectorMultiplyAddFloatingPoint(auVar36,auVar31,auVar38);
    auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar31 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar8 = storeVectorElementWordIndexed
                      (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0x8c,lVar1);
    *(undefined4 *)((int)puVar9 + 0x8c) = uVar8;
    uVar8 = storeVectorElementWordIndexed
                      (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x80,lVar1);
    *(undefined4 *)(puVar9 + 0x10) = uVar8;
    uVar8 = storeVectorElementWordIndexed
                      (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x84,lVar1);
    *(undefined4 *)((int)puVar9 + 0x84) = uVar8;
    uVar8 = storeVectorElementWordIndexed
                      (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x88,lVar1);
    *(undefined4 *)(puVar9 + 0x11) = uVar8;
    uVar12 = collproc::CollMobySphere((double)(fVar2 * 0.5),uVar11 - 0x140,0x80,0x10,param_1,0);
    iVar21 = (int)uVar12;
    if (iVar21 != 0) {
      lVar13 = -((longlong)(int)(uVar12 << 2) + 0x7fU & 0xfffffffffffffff0);
      uVar14 = lVar1 + lVar13;
      uVar17 = uVar14 & 0xffffffff;
      *(ulonglong *)((int)puVar9 + (int)lVar13) = *puVar9;
      pvVar15 = libc::memcpy((void *)((int)uVar14 + 0x70),&DAT_00a14a00,
                             (size_t)((uVar12 & 0xffffffff) << 2));
      uVar12 = (ulonglong)(int)pvVar15;
      iVar20 = 0;
      if (0 < iVar21) {
        do {
          uVar7 = *(uint *)((int)uVar17 + 0x70);
          if (uVar7 != 0) {
            bVar4 = *(byte *)(uVar7 + 0x20);
            uVar12 = (ulonglong)bVar4;
            if (bVar4 != 0xfd && bVar4 != 0xfe) {
              iVar18 = (int)param_1;
              dVar27 = (double)(*(float *)(uVar7 + 0x14) - *(float *)(iVar18 + 0x14));
              dVar26 = (double)(*(float *)(uVar7 + 0x10) - *(float *)(iVar18 + 0x10));
              dVar29 = (double)*(float *)(uVar7 + 0x1c);
              dVar25 = (double)(*(float *)(uVar7 + 0x18) - *(float *)(iVar18 + 0x18));
              fastfunc::FastNormalizeRMtx4(uVar11 - 0xf0,uVar11 - 0x120);
              dVar22 = (double)*pfVar10;
              dVar23 = (double)pfVar10[0x12];
              fVar2 = (float)((double)*(float *)(puVar9 + 0x20) * dVar29 +
                             (double)(float)((double)*(float *)(puVar9 + 0x1e) * dVar25 +
                                            (double)(float)((double)*(float *)(puVar9 + 0x1a) *
                                                            dVar26 + (double)(float)((double)*(float
                                                                                               *)(
                                                  puVar9 + 0x1c) * dVar27))));
              dVar24 = (double)pfVar10[1];
              fVar3 = (float)((double)*(float *)(puVar9 + 0x21) * dVar29 +
                             (double)(float)((double)*(float *)(puVar9 + 0x1f) * dVar25 +
                                            (double)(float)((double)*(float *)(puVar9 + 0x1b) *
                                                            dVar26 + (double)(float)((double)*(float
                                                                                               *)(
                                                  puVar9 + 0x1d) * dVar27))));
              fVar5 = *(float *)(iVar18 + 0x14);
              fVar6 = *(float *)(iVar18 + 0x18);
              if (-(float)(dVar22 * dVar28 + dVar23) <= fVar2) {
                if ((float)(dVar22 * dVar28 + dVar23) < fVar2) {
                  fVar2 = (float)(dVar22 * dVar28);
                }
              }
              else {
                fVar2 = (float)(dVar22 * -0.5);
              }
              if (-(float)(dVar24 * dVar28 + (double)pfVar10[0x13]) <= fVar3) {
                if ((float)(dVar24 * dVar28 + (double)pfVar10[0x13]) < fVar3) {
                  fVar3 = (float)(dVar24 * dVar28);
                }
              }
              else {
                fVar3 = (float)(dVar24 * -0.5);
              }
              *(float *)(puVar9 + 0x12) =
                   *(float *)(puVar9 + 0x14) * fVar2 +
                   *(float *)(puVar9 + 0x18) * fVar3 + *(float *)(iVar18 + 0x10);
              *(float *)((int)puVar9 + 0x94) =
                   *(float *)((int)puVar9 + 0xa4) * fVar2 +
                   *(float *)((int)puVar9 + 0xc4) * fVar3 + fVar5;
              *(float *)(puVar9 + 0x13) =
                   *(float *)(puVar9 + 0x15) * fVar2 + *(float *)(puVar9 + 0x19) * fVar3 + fVar6;
              *(float *)((int)puVar9 + 0x9c) =
                   *(float *)((int)puVar9 + 0xcc) * fVar3 + *(float *)((int)puVar9 + 0xac) * fVar2 +
                   (float)((double)*(float *)((int)puVar9 + 0x10c) * dVar29 +
                          (double)(float)((double)*(float *)((int)puVar9 + 0xfc) * dVar25 +
                                         (double)(float)((double)*(float *)((int)puVar9 + 0xdc) *
                                                         dVar26 + (double)(float)((double)*(float *)
                                                  ((int)puVar9 + 0xec) * dVar27))));
              uVar12 = collproc::CollMobySphere(dVar23,uVar11 - 0x130);
              iVar18 = 0;
              iVar19 = (int)uVar12;
              puVar16 = &DAT_00a14a00;
              if (0 < iVar19) {
                do {
                  uVar12 = (ulonglong)*puVar16;
                  if (*puVar16 == uVar7) {
                    uVar12 = mobyutil::CollDamageMobyDirect_wrap
                                       ((double)pfVar10[0x14],uVar7,param_1,0x10001);
                  }
                  iVar18 = iVar18 + 1;
                  puVar16 = puVar16 + 1;
                } while (iVar18 < iVar19);
              }
            }
          }
          iVar20 = iVar20 + 1;
          uVar17 = uVar17 + 4;
        } while (iVar20 < iVar21);
      }
    }
  }
  return uVar12;
}



//==== 00460838  ns=mobyupdate_unsorted  size=0x4e8
// sig: undefined UpdateMoby_794(MobyInstance * moby)
// callers(0): 
// callees(6): 000efb38 mobyfunc::DeleteMoby; 004603e0 mobyupdate_helpers::M794_004603e0; 004fff60 fastfunc::FastDecTimerS32; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005cd098 libc::printf
// strings: 00658368: 'Warning! moby 794 does not have effect moby!\n' | 00658398: 'M794 %d trigger %d = moby %d (oClass %d)\n' | 006583c8: 'M794 %d trigger %d = NO MOBY! (-1)\n'

/* Moby 794 */

void mobyupdate_unsorted::UpdateMoby_794(MobyInstance *moby)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  MOBY_OCLASSES MVar5;
  float *pfVar6;
  s8 sVar7;
  float fVar8;
  int iVar9;
  MobyInstance *pMVar10;
  uint uVar11;
  float *pfVar12;
  MobyInstance *moby_00;
  ulonglong uVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  
  iVar14 = 0;
  uVar13 = 0;
  pfVar6 = (float *)moby->pVar;
  moby_00 = (MobyInstance *)0x0;
  bVar1 = moby->state;
  if (pfVar6[4] != -NAN) {
    moby_00 = MobyInstance + (int)pfVar6[4];
  }
  if (((moby->levelFlagIdx == 0xff) || (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1)) &&
     (bVar1 != 0)) {
    iVar9 = 0;
    pfVar12 = pfVar6;
    iVar14 = 0;
    do {
      if ((((pfVar12[6] != -NAN) &&
           (pMVar10 = MobyInstance + (int)pfVar12[6], pMVar10 != (MobyInstance *)0x0)) &&
          ((pMVar10->oClass == *(MOBY_OCLASSES *)(pfVar12 + 7) &&
           ((bVar2 = pMVar10->state, bVar2 != 0xfd && bVar2 != 0xfe &&
            ((*(uint *)(&DAT_00a0cd1c +
                       Level * 0x100 + (int)((longlong)((int)(short)pMVar10->uid >> 5) << 2)) &
             1 << (pMVar10->uid & 0x1f)) == 0)))))) &&
         (((int)*(char *)((int)pfVar12 + 0x1e) == 0xffffffff ||
          ((uint)bVar2 != (int)*(char *)((int)pfVar12 + 0x1e))))) {
        iVar14 = iVar14 + 1;
      }
      iVar9 = iVar9 + 1;
      pfVar12 = pfVar12 + 2;
    } while (iVar9 < 5);
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (moby_00 == (MobyInstance *)0x0) {
        libc::printf("Warning! moby 794 does not have effect moby!\n");
      }
      else {
        *(MOBY_OCLASSES *)(pfVar6 + 5) = moby_00->oClass;
        dVar15 = (double)fastfunc::FastIntToDouble(moby_00->alpha);
        pfVar6[0x11] = (float)dVar15;
        if (((uint)pfVar6[2] & 0x10) == 0) {
          if (((uint)pfVar6[2] & 0x40) != 0) {
            (moby_00->pos).x = (moby->pos).x;
            (moby_00->pos).y = (moby->pos).y;
            (moby_00->pos).z = (moby->pos).z;
            (moby_00->pos).w = (moby->pos).w;
          }
        }
        else {
          (moby->pos).x = (moby_00->pos).x;
          (moby->pos).y = (moby_00->pos).y;
          (moby->pos).z = (moby_00->pos).z;
          (moby->pos).w = (moby_00->pos).w;
        }
        if (((uint)pfVar6[2] & 0x20) == 0) {
          if (((uint)pfVar6[2] & 0x80) != 0) {
            (moby_00->rotation).x = (moby->rotation).x;
            (moby_00->rotation).y = (moby->rotation).y;
            (moby_00->rotation).z = (moby->rotation).z;
            (moby_00->rotation).w = (moby->rotation).w;
          }
        }
        else {
          (moby->rotation).x = (moby_00->rotation).x;
          (moby->rotation).y = (moby_00->rotation).y;
          (moby->rotation).z = (moby_00->rotation).z;
          (moby->rotation).w = (moby_00->rotation).w;
        }
      }
      do {
        iVar9 = (int)((uVar13 & 0xffffffff) << 3);
        iVar14 = *(int *)((int)pfVar6 + iVar9 + 0x18);
        if (iVar14 == -1) {
          uVar11 = (int)moby - (int)MobyInstance;
          libc::printf("M794 %d trigger %d = NO MOBY! (-1)\n",
                       ((int)uVar11 >> 8) + (uint)((int)uVar11 < 0 && (uVar11 & 0xff) != 0),uVar13);
        }
        else {
          uVar11 = (int)moby - (int)MobyInstance;
          MVar5 = MobyInstance[iVar14].oClass;
          *(MOBY_OCLASSES *)((int)pfVar6 + iVar9 + 0x1c) = MVar5;
          libc::printf("M794 %d trigger %d = moby %d (oClass %d)\n",
                       ((int)uVar11 >> 8) + (uint)((int)uVar11 < 0 && (uVar11 & 0xff) != 0),uVar13,
                       *(undefined4 *)((int)pfVar6 + iVar9 + 0x18),MVar5);
        }
        iVar14 = (int)uVar13 + 1;
        uVar13 = (ulonglong)iVar14;
      } while (iVar14 < 5);
      fVar8 = pfVar6[1];
      fVar3 = *pfVar6;
      fVar4 = moby->pClass->gScale;
      moby->state = '\x01';
      if (fVar3 - fVar8 < 0.0) {
        fVar3 = fVar8;
      }
      moby->scale = fVar4 * fVar3;
    }
    else {
      if (iVar14 == 0) {
        if ((moby_00 != (MobyInstance *)0x0) && (*(u8 *)((int)pfVar6 + 0x16) != 0xff)) {
          moby_00->state = *(u8 *)((int)pfVar6 + 0x16);
        }
        pfVar6[0x10] = pfVar6[3];
        moby->state = '\x02';
      }
      mobyupdate_helpers::M794_004603e0(moby,pfVar6);
    }
  }
  else if (bVar1 < 3) {
    if ((moby_00 != (MobyInstance *)0x0) && (((uint)pfVar6[2] & 2) == 0)) {
      dVar15 = (double)fastfunc::FastIntToDouble(pfVar6[3]);
      dVar16 = (double)fastfunc::FastIntToDouble(pfVar6[0x10]);
      sVar7 = fastfunc::FastDoubleToInt
                        ((double)(float)((double)(float)((double)pfVar6[0x11] * dVar16) / dVar15));
      moby_00->alpha = sVar7;
    }
    fVar8 = pfVar6[2];
    if (((((uint)fVar8 & 4) == 0 && moby_00 != (MobyInstance *)0x0) &&
        ((int)*(char *)((int)pfVar6 + 0x17) != 0xffffffff)) &&
       ((uint)moby_00->state == (int)*(char *)((int)pfVar6 + 0x17))) {
      moby->state = '\x03';
      fVar8 = pfVar6[2];
    }
    if ((((uint)fVar8 & 8) == 0) && (iVar14 = fastfunc::FastDecTimerS32(pfVar6 + 0x10), iVar14 != 0)
       ) {
      moby->state = '\x03';
    }
    mobyupdate_helpers::M794_004603e0(moby,pfVar6);
  }
  else if (bVar1 < 4) {
    if ((moby_00 != (MobyInstance *)0x0) && (((uint)pfVar6[2] & 1) == 0)) {
      mobyfunc::DeleteMoby(moby_00);
    }
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 00460d20  ns=mobyupdate_helpers  size=0x14
// sig: undefined M794_00460d20(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M794_00460d20(void)

{
  DAT_00873e2c = 0x10000;
  return;
}



//==== 00460d48  ns=mobyupdate_helpers  size=0x270
// sig: undefined M8_00460d48(void)
// callers(1): 00462258 mobyupdate_unsorted::UpdateMoby_8
// callees(4): 000f1038 mobyfunc::GetBoneTransformations; 000fc620 mobyutil::MB_randInt; 00502730 fastfunc::FastIntToDouble; 00502910 fastfunc::FastCheckBsphereInView

void mobyupdate_helpers::M8_00460d48(int param_1)

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
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  undefined1 local_30 [16];
  
  iVar11 = *(int *)(param_1 + 0x78);
  iVar16 = mobyutil::MB_randInt(5);
  if (iVar16 != 0) {
    fastfunc::FastIntToDouble(*(undefined2 *)(param_1 + 0x32));
    iVar16 = fastfunc::FastCheckBsphereInView(local_30);
    if (-1 < iVar16) {
      mobyfunc::GetBoneTransformations(param_1,1,iVar11 + 0xa0);
      fVar1 = *(float *)(iVar11 + 0xa4);
      fVar2 = *(float *)(iVar11 + 0xa0);
      fVar3 = *(float *)(iVar11 + 0xa8);
      fVar4 = 0.0;
      fVar5 = *(float *)(iVar11 + 0xb0);
      fVar6 = *(float *)(iVar11 + 0xb4);
      fVar7 = *(float *)(iVar11 + 0xb8);
      fVar15 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
      fVar8 = *(float *)(iVar11 + 0xc0);
      fVar9 = *(float *)(iVar11 + 0xc4);
      fVar10 = *(float *)(iVar11 + 200);
      fVar14 = fVar4;
      fVar12 = fVar4;
      fVar13 = fVar4;
      if (SQRT(fVar15) != 0.0) {
        fVar14 = 1.0 / SQRT(fVar15);
        fVar14 = -(fVar15 * fVar14 * fVar14 - 1.0) * fVar14 * 0.5 + fVar14;
        fVar14 = -(fVar15 * fVar14 * fVar14 - 1.0) * fVar14 * 0.5 + fVar14;
        fVar14 = -(fVar15 * fVar14 * fVar14 - 1.0) * fVar14 * 0.5 + fVar14;
        fVar13 = fVar2 * fVar14;
        fVar12 = fVar1 * fVar14;
        fVar14 = fVar3 * fVar14;
      }
      *(float *)(iVar11 + 0xa4) = fVar12;
      *(float *)(iVar11 + 0xa0) = fVar13;
      *(float *)(iVar11 + 0xa8) = fVar14;
      fVar12 = fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6;
      fVar1 = fVar4;
      fVar2 = fVar4;
      fVar3 = fVar4;
      if (SQRT(fVar12) != 0.0) {
        fVar1 = 1.0 / SQRT(fVar12);
        fVar1 = -(fVar12 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
        fVar1 = -(fVar12 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
        fVar1 = -(fVar12 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
        fVar3 = fVar5 * fVar1;
        fVar2 = fVar6 * fVar1;
        fVar1 = fVar7 * fVar1;
      }
      *(float *)(iVar11 + 0xb8) = fVar1;
      *(float *)(iVar11 + 0xb0) = fVar3;
      *(float *)(iVar11 + 0xb4) = fVar2;
      fVar3 = fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9;
      fVar1 = fVar4;
      fVar2 = fVar4;
      if (SQRT(fVar3) != 0.0) {
        fVar1 = 1.0 / SQRT(fVar3);
        fVar1 = -(fVar3 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
        fVar1 = -(fVar3 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
        fVar1 = -(fVar3 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
        fVar4 = fVar8 * fVar1;
        fVar2 = fVar9 * fVar1;
        fVar1 = fVar10 * fVar1;
      }
      *(float *)(iVar11 + 0xc0) = fVar4;
      *(float *)(iVar11 + 0xc4) = fVar2;
      *(float *)(iVar11 + 200) = fVar1;
      *(undefined4 *)(iVar11 + 0x20c) = 2;
    }
  }
  return;
}



//==== 00460fd0  ns=mobyupdate_helpers  size=0x6a8
// sig: undefined M8_00460fd0(void)
// callers(1): 00462258 mobyupdate_unsorted::UpdateMoby_8
// callees(6): 0006d7a0 draw::RegisterPostPreDraw; 000f1038 mobyfunc::GetBoneTransformations; 00501980 fastfunc::FastQuaternionToEuler; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble; 00502910 fastfunc::FastCheckBsphereInView

undefined8 mobyupdate_helpers::M8_00460fd0(void *param_1,int param_2)

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
  undefined2 uVar11;
  int iVar12;
  ulonglong *puVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar18;
  longlong lVar16;
  longlong lVar17;
  longlong lVar19;
  float *pfVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  undefined8 uVar23;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
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
  double dVar33;
  ulonglong in_f31;
  double dVar34;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar17 = uVar15 - 0x130;
  puVar13 = (ulonglong *)lVar17;
  *puVar13 = uVar15;
  puVar13[0x28] = in_LR;
  puVar13[0x20] = in_f26;
  puVar13[0x21] = in_f27;
  puVar13[0x22] = in_f28;
  puVar13[0x23] = in_f29;
  puVar13[0x24] = in_f30;
  puVar13[0x25] = in_f31;
  puVar13[0x1f] = unaff_r31;
  puVar13[0x1d] = unaff_r29;
  iVar12 = *(int *)((int)param_1 + 0x78);
  dVar29 = 0.5;
  fVar2 = *(float *)(iVar12 + 0xd0);
  dVar33 = (double)((*(float *)(iVar12 + 0x174) - *(float *)(iVar12 + 0xd4)) * 0.5);
  dVar34 = (double)((float)((double)*(float *)(iVar12 + 0x170) - (double)fVar2) * 0.5);
  dVar32 = (double)((*(float *)(iVar12 + 0x178) - *(float *)(iVar12 + 0xd8)) * 0.5);
  puVar13[0x1b] = unaff_r27;
  puVar13[0x1e] = unaff_r30;
  puVar13[0x1c] = unaff_r28;
  uVar23 = 0;
  dVar31 = (double)(float)(dVar34 * dVar34 + (double)(float)(dVar33 * dVar33));
  *(float *)(puVar13 + 0xe) = (float)((double)fVar2 + dVar34);
  *(float *)((int)puVar13 + 0x74) = (float)((double)*(float *)(iVar12 + 0xd4) + dVar33);
  uVar11 = *(undefined2 *)((int)param_1 + 0x32);
  *(float *)(puVar13 + 0xf) = (float)((double)*(float *)(iVar12 + 0xd8) + dVar32);
  *(float *)((int)puVar13 + 0x7c) = SQRT((float)(dVar32 * dVar32 + dVar31)) + 2.0;
  fastfunc::FastIntToDouble(uVar11);
  iVar18 = fastfunc::FastCheckBsphereInView(uVar15 - 0xc0);
  if (-1 < iVar18) {
    mobyfunc::GetBoneTransformations(param_1,1,iVar12 + 0xa0);
    fVar2 = *(float *)(iVar12 + 0xa4);
    fVar3 = *(float *)(iVar12 + 0xa0);
    fVar4 = *(float *)(iVar12 + 0xa8);
    dVar30 = 0.0;
    fVar5 = *(float *)(iVar12 + 0xb0);
    fVar6 = *(float *)(iVar12 + 0xb4);
    fVar7 = *(float *)(iVar12 + 0xb8);
    fVar8 = *(float *)(iVar12 + 0xc0);
    fVar9 = *(float *)(iVar12 + 0xc4);
    dVar25 = (double)(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    fVar10 = *(float *)(iVar12 + 200);
    dVar26 = dVar30;
    dVar27 = dVar30;
    dVar28 = dVar30;
    if ((float)SQRT(dVar25) != 0.0) {
      dVar26 = 1.0 / SQRT(dVar25);
      dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar25 * dVar26) * dVar26 - 1.0) *
                               (double)(float)(dVar29 * dVar26) + dVar26);
      dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar25 * dVar26) * dVar26 - 1.0) *
                               (double)(float)(dVar29 * dVar26) + dVar26);
      fVar1 = (float)(-(double)(float)((double)(float)(dVar25 * dVar26) * dVar26 - 1.0) *
                      (double)(float)(dVar29 * dVar26) + dVar26);
      dVar28 = (double)(fVar3 * fVar1);
      dVar27 = (double)(fVar2 * fVar1);
      dVar26 = (double)(fVar4 * fVar1);
    }
    *(float *)(iVar12 + 0xa8) = (float)dVar26;
    *(float *)(iVar12 + 0xa0) = (float)dVar28;
    *(float *)(iVar12 + 0xa4) = (float)dVar27;
    dVar25 = (double)(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
    dVar26 = dVar30;
    dVar27 = dVar30;
    dVar28 = dVar30;
    if ((float)SQRT(dVar25) != 0.0) {
      dVar26 = 1.0 / SQRT(dVar25);
      dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar25 * dVar26) * dVar26 - 1.0) *
                               (double)(float)(dVar29 * dVar26) + dVar26);
      dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar25 * dVar26) * dVar26 - 1.0) *
                               (double)(float)(dVar29 * dVar26) + dVar26);
      fVar2 = (float)(-(double)(float)((double)(float)(dVar25 * dVar26) * dVar26 - 1.0) *
                      (double)(float)(dVar29 * dVar26) + dVar26);
      dVar28 = (double)(fVar5 * fVar2);
      dVar27 = (double)(fVar6 * fVar2);
      dVar26 = (double)(fVar7 * fVar2);
    }
    *(float *)(iVar12 + 0xb8) = (float)dVar26;
    *(float *)(iVar12 + 0xb4) = (float)dVar27;
    *(float *)(iVar12 + 0xb0) = (float)dVar28;
    dVar25 = (double)(fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9);
    dVar26 = dVar30;
    dVar27 = dVar30;
    dVar28 = dVar30;
    if ((float)SQRT(dVar25) != 0.0) {
      dVar26 = 1.0 / SQRT(dVar25);
      dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar25 * dVar26) * dVar26 - 1.0) *
                               (double)(float)(dVar29 * dVar26) + dVar26);
      dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar25 * dVar26) * dVar26 - 1.0) *
                               (double)(float)(dVar29 * dVar26) + dVar26);
      fVar2 = (float)(-(double)(float)((double)(float)(dVar25 * dVar26) * dVar26 - 1.0) *
                      (double)(float)(dVar29 * dVar26) + dVar26);
      dVar28 = (double)(fVar8 * fVar2);
      dVar27 = (double)(fVar9 * fVar2);
      dVar26 = (double)(fVar10 * fVar2);
    }
    *(float *)(iVar12 + 0xc0) = (float)dVar28;
    *(float *)(iVar12 + 0xc4) = (float)dVar27;
    *(float *)(iVar12 + 200) = (float)dVar26;
    *(float *)((int)puVar13 + 0x8c) = (float)dVar34;
    *(float *)(puVar13 + 0x12) = (float)dVar33;
    *(float *)((int)puVar13 + 0x94) = (float)(ABS(dVar34) - ABS(dVar33));
    uVar21 = (ulonglong)(*(uint *)((int)puVar13 + 0x8c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar13 + 0x94) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar13 + 0x12) >> 0x1d) & 4;
    fVar2 = *(float *)((int)param_1 + 0x48);
    dVar29 = ABS((double)*(float *)((int)puVar13 + 0x8c));
    if (*(float *)((int)puVar13 + 0x94) - 0.0 < 0.0) {
      dVar29 = ABS(dVar33);
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
    dVar33 = ABS((double)*(float *)(puVar13 + 0x12));
    if (*(float *)((int)puVar13 + 0x94) - 0.0 < 0.0) {
      dVar33 = ABS(dVar34);
    }
    fVar4 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
    dVar26 = 0.7853981852531433;
    dVar34 = dVar30;
    if (0.0 < dVar29) {
      lVar16 = uVar15 - 0x120;
      lVar19 = uVar15 - 0x78;
      lVar22 = uVar15 - 0x68;
      lVar24 = 2;
      fVar5 = (float)(dVar33 - dVar29) / (float)(dVar33 + dVar29);
      fVar6 = fVar5 * fVar5;
      *(float *)((int)puVar13 + 0xc4) = fVar5;
      *(float *)((int)puVar13 + 0xbc) = fVar5;
      *(float *)(puVar13 + 0x18) = fVar5;
      *(float *)(puVar13 + 0x17) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)((int)puVar13 + 0xbc) = *(float *)((int)puVar13 + 0xbc) * fVar6;
      *(float *)(puVar13 + 0x18) = *(float *)(puVar13 + 0x18) * fVar5;
      *(float *)((int)puVar13 + 0xc4) = *(float *)((int)puVar13 + 0xc4) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar16 + 0xb8) = *(float *)((int)lVar16 + 0xa8) * fVar5 * fVar5;
        iVar18 = (int)lVar19;
        lVar16 = lVar16 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
        lVar22 = lVar22 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar24 = 4;
      lVar22 = uVar15 - 0x78;
      pfVar20 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar19 = lVar22;
      do {
        fVar5 = *pfVar20;
        fVar6 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar16 + 0xb8) = *(float *)((int)lVar16 + 0xb8) * fVar5;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar6;
        lVar19 = lVar19 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar19 = 2;
      lVar16 = lVar17;
      dVar29 = dVar30;
      do {
        iVar18 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        iVar14 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar18 + 0xb8)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      dVar34 = (double)((float)(dVar29 + 0.7853981852531433) * fVar3 + fVar4);
    }
    dVar29 = (double)fastfunc::FastDiffRots(dVar34,(double)fVar2);
    fastfunc::FastQuaternionToEuler(iVar12 + 0xf0,2);
    *(float *)(iVar12 + 0x1bc) = (float)dVar29;
    *(float *)((int)puVar13 + 0x84) = (float)dVar32;
    dVar33 = ABS((double)(float)SQRT(dVar31));
    *(float *)(puVar13 + 0x10) = (float)SQRT(dVar31);
    *(float *)(puVar13 + 0x11) = (float)(dVar33 - ABS(dVar32));
    uVar21 = (ulonglong)(*(uint *)(puVar13 + 0x10) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar13 + 0x11) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar13 + 0x84) >> 0x1d) & 4;
    dVar29 = ABS((double)*(float *)(puVar13 + 0x10));
    if ((double)*(float *)(puVar13 + 0x11) - dVar30 < 0.0) {
      dVar29 = ABS(dVar32);
    }
    fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
    dVar31 = ABS((double)*(float *)((int)puVar13 + 0x84));
    if ((double)*(float *)(puVar13 + 0x11) - dVar30 < 0.0) {
      dVar31 = dVar33;
    }
    fVar3 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
    if (dVar30 < dVar29) {
      lVar16 = uVar15 - 0x120;
      lVar19 = uVar15 - 0x98;
      lVar22 = uVar15 - 0x88;
      lVar24 = 2;
      fVar4 = (float)(dVar31 - dVar29) / (float)(dVar31 + dVar29);
      fVar5 = fVar4 * fVar4;
      *(float *)((int)puVar13 + 0xa4) = fVar4;
      *(float *)((int)puVar13 + 0x9c) = fVar4;
      *(float *)(puVar13 + 0x14) = fVar4;
      *(float *)(puVar13 + 0x13) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)((int)puVar13 + 0x9c) = *(float *)((int)puVar13 + 0x9c) * fVar5;
      *(float *)(puVar13 + 0x14) = *(float *)(puVar13 + 0x14) * fVar4;
      *(float *)((int)puVar13 + 0xa4) = *(float *)((int)puVar13 + 0xa4) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar16 + 0x98) = *(float *)((int)lVar16 + 0x88) * fVar4 * fVar4;
        iVar18 = (int)lVar19;
        lVar16 = lVar16 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar4 * fVar4;
        lVar22 = lVar22 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar24 = 4;
      lVar22 = uVar15 - 0x98;
      pfVar20 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar19 = lVar22;
      do {
        fVar4 = *pfVar20;
        fVar5 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar16 + 0x98) = *(float *)((int)lVar16 + 0x98) * fVar4;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
        lVar19 = lVar19 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar16 = 2;
      do {
        iVar18 = (int)lVar17;
        iVar14 = (int)lVar22;
        lVar17 = lVar17 + 0x10;
        lVar22 = lVar22 + 0x10;
        dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar18 + 0x98)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      dVar30 = (double)((float)(dVar30 + dVar26) * fVar2 + fVar3);
    }
    dVar30 = -dVar30;
    fastfunc::FastQuaternionToEuler(dVar30,iVar12 + 0x130,1);
    *(float *)(iVar12 + 0x1c0) = (float)dVar30;
    uVar23 = 1;
    *(undefined4 *)(iVar12 + 0x90) = *(undefined4 *)(iVar12 + 0x170);
    *(undefined4 *)(iVar12 + 0x94) = *(undefined4 *)(iVar12 + 0x174);
    *(undefined4 *)(iVar12 + 0x98) = *(undefined4 *)(iVar12 + 0x178);
    *(undefined4 *)(iVar12 + 0x9c) = *(undefined4 *)(iVar12 + 0x17c);
    if (param_2 != 0) {
      draw::RegisterPostPreDraw(&PTR_M800_00465380_0070eaf8,param_1);
      *(uint *)(iVar12 + 0x20c) = *(uint *)(iVar12 + 0x20c) | 2;
    }
  }
  return uVar23;
}



//==== 00461680  ns=mobyupdate_helpers  size=0x15c
// sig: undefined M794_00461680(void)
// callers(0): 
// callees(6): 000fc620 mobyutil::MB_randInt; 00109b40 mobyutil::AccelDelt; 00116a68 mobyutil::MB_BobMotion; 00116b70 mobyutil::MB_SwingMotion; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot

double mobyupdate_helpers::M794_00461680(MobyInstance *param_1)

{
  void *pvVar1;
  undefined2 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 in_LR;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  
  pvVar1 = param_1->pVar;
  uVar4 = ZEXT48(pvVar1);
  mobyutil::MB_BobMotion
            (DAT_00873e60,DAT_00873e64,param_1,(float *)((int)pvVar1 + 0x1a0),
             (float *)((int)pvVar1 + 0x1a4));
  dVar5 = (double)mobyutil::MB_SwingMotion
                            ((double)DAT_00873e68,(double)DAT_00873e6c,(double)DAT_00873e70,param_1,
                             uVar4 + 0x1a8,uVar4 + 0x1ac);
  if (param_1->state == '\x01') {
    iVar3 = fastfunc::FastDecTimerS16(uVar4 + 0x1b4);
    dVar5 = (double)*(float *)((int)pvVar1 + 0x1b0);
    if (iVar3 != 0) {
      auVar7 = ZEXT416(0xffffffff);
      auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
      auVar8 = vectorShiftLeftIntegerWord(auVar7,auVar7);
      auVar7 = loadVectorLeftIndexed(0x3e74,0x870000);
      auVar6 = vectorConvertFromSignedFixedPointWord(auVar7,0);
      auVar7 = loadVectorLeftIndexed(in_LR,0x461678);
      auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar7 = vectorAddFloatingPoint
                         (auVar6,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60);
      auVar7 = vectorMultiplyAddFloatingPoint(auVar9,auVar7,auVar8);
      auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
      auVar7 = vectorSplatHalfWord(auVar7,1);
      uVar2 = storeVectorElementHalfWordIndexed(auVar7,0x1b4,uVar4);
      *(undefined2 *)((int)pvVar1 + 0x1b4) = uVar2;
      dVar5 = (double)DAT_00873e78;
      iVar3 = mobyutil::MB_randInt(2);
      if (iVar3 != 0) {
        dVar5 = -dVar5;
      }
      dVar5 = (double)fastfunc::FastWrapRot((param_1->rotation).z,(float)dVar5);
      *(float *)((int)pvVar1 + 0x1b0) = (float)dVar5;
    }
    fVar10 = mobyutil::AccelDelt((float)dVar5,DAT_00873e7c,DAT_00873e80,DAT_00873e84,
                                 &(param_1->rotation).z,0x870000,(float *)((int)pvVar1 + 0x1b8));
    dVar5 = (double)fVar10;
  }
  return dVar5;
}



//==== 004617e0  ns=mobyupdate_helpers  size=0x154
// sig: undefined M8_004617e0(void)
// callers(1): 00462258 mobyupdate_unsorted::UpdateMoby_8
// callees(2): 00109b40 mobyutil::AccelDelt; 0010ce18 mobyutil::MB_PathMoveDist

double mobyupdate_helpers::M8_004617e0(double param_1,double param_2,double param_3,int param_4)

{
  int iVar1;
  Spline *pSVar2;
  Vec4 *pVVar3;
  int iVar4;
  undefined4 *unused;
  undefined8 in_r7;
  double dVar5;
  float fVar6;
  float local_40;
  float local_3c;
  float local_38;
  
  iVar1 = *(int *)(param_4 + 0x78);
  pSVar2 = Splines[*(int *)(iVar1 + 0x204)];
  if (*(short *)(iVar1 + 0x208) == 0) {
    iVar4 = mobyutil::MB_PathMoveDist
                      ((double)(float)((double)(float)((double)mobyutil::g_FrameTime * param_2) *
                                      param_3),pSVar2,&local_40,iVar1 + 0x80,iVar1 + 0x8c,in_r7,0);
    if (iVar4 != 0) {
      *(undefined2 *)(iVar1 + 0x208) = 1;
    }
  }
  else {
    pVVar3 = pSVar2->points + pSVar2->cnt + -1;
    local_40 = pVVar3->x;
    local_3c = pVVar3->y;
    local_38 = pVVar3->z;
  }
  unused = &DAT_004617dc;
  dVar5 = 0.0;
  mobyutil::AccelDelt(local_40,(float)param_1,DAT_00873eb4,0.0,(float *)(param_4 + 0x10),0x4617dc,
                      (float *)(iVar1 + 0x194));
  mobyutil::AccelDelt(local_3c,(float)param_1,DAT_00873eb4,(float)dVar5,(float *)(param_4 + 0x14),
                      (int)unused,(float *)(iVar1 + 0x198));
  fVar6 = mobyutil::AccelDelt(local_38,(float)param_1,DAT_00873eb4,(float)dVar5,
                              (float *)(param_4 + 0x18),(int)unused,(float *)(iVar1 + 0x19c));
  return (double)fVar6;
}



//==== 00461938  ns=mobyupdate_helpers  size=0x154
// sig: undefined M8_00461938(void)
// callers(1): 00462258 mobyupdate_unsorted::UpdateMoby_8
// callees(2): 00109b40 mobyutil::AccelDelt; 0010ce18 mobyutil::MB_PathMoveDist

double mobyupdate_helpers::M8_00461938(int param_1)

{
  int iVar1;
  Vec4 *pVVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  Spline *pSVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  float local_40;
  float local_3c;
  float local_38;
  
  uVar3 = ZEXT48(&stack0x00000000);
  iVar1 = *(int *)(param_1 + 0x78);
  dVar7 = 0.0;
  pSVar6 = Splines[*(int *)(iVar1 + 0x78)];
  dVar8 = dVar7;
  for (iVar5 = *(int *)(iVar1 + 0x84); 0 < iVar5; iVar5 = iVar5 + -1) {
    pVVar2 = pSVar6->points;
    pSVar6 = (Spline *)pSVar6->points;
    dVar8 = (double)(float)(dVar8 + (double)pVVar2->w);
  }
  lVar4 = uVar3 - 0x40;
  mobyutil::MB_PathMoveDist
            ((double)(((float)(dVar8 + (double)*(float *)(iVar1 + 0x1cc)) /
                      *(float *)(iVar1 + 0x16c)) * *(float *)(iVar1 + 400)),
             Splines[*(int *)(iVar1 + 0x74)],lVar4,uVar3 - 0x30,uVar3 - 0x2c,Splines,
             *(undefined2 *)(iVar1 + 0x8a));
  iVar5 = (int)lVar4;
  mobyutil::AccelDelt(local_40,DAT_00873e58,DAT_00873e5c,(float)dVar7,(float *)(param_1 + 0x10),
                      iVar5,(float *)(iVar1 + 0x194));
  mobyutil::AccelDelt(local_3c,DAT_00873e58,DAT_00873e5c,(float)dVar7,(float *)(param_1 + 0x14),
                      iVar5,(float *)(iVar1 + 0x198));
  fVar9 = mobyutil::AccelDelt(local_38,DAT_00873e58,DAT_00873e5c,(float)dVar7,
                              (float *)(param_1 + 0x18),iVar5,(float *)(iVar1 + 0x19c));
  return (double)fVar9;
}



//==== 00461a90  ns=mobyupdate_helpers  size=0x138
// sig: undefined M8_00461a90(void)
// callers(1): 00462258 mobyupdate_unsorted::UpdateMoby_8
// callees(2): 00109b40 mobyutil::AccelDelt; 0010ce18 mobyutil::MB_PathMoveDist

double mobyupdate_helpers::M8_00461a90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  int unused;
  double dVar5;
  double dVar6;
  float fVar7;
  float local_50;
  float local_4c;
  float local_48;
  
  iVar1 = *(int *)(param_1 + 0x78);
  lVar4 = ZEXT48(&stack0x00000000) - 0x50;
  dVar6 = (double)*(float *)(iVar1 + 0x1cc);
  uVar2 = *(undefined4 *)(iVar1 + 0x84);
  iVar3 = mobyutil::MB_PathMoveDist
                    ((double)*(float *)(iVar1 + 0x168),Splines[*(int *)(iVar1 + 0x78)],lVar4,
                     iVar1 + 0x84,iVar1 + 0x1cc,*(int *)(iVar1 + 0x78) * 4,
                     *(undefined2 *)(iVar1 + 0x8a));
  dVar5 = 0.0;
  unused = (int)lVar4;
  mobyutil::AccelDelt(local_50,DAT_00873e58,DAT_00873e5c,0.0,(float *)(iVar1 + 0x170),unused,
                      (float *)(iVar1 + 0x180));
  mobyutil::AccelDelt(local_4c,DAT_00873e58,DAT_00873e5c,(float)dVar5,(float *)(iVar1 + 0x174),
                      unused,(float *)(iVar1 + 0x184));
  fVar7 = mobyutil::AccelDelt(local_48,DAT_00873e58,DAT_00873e5c,(float)dVar5,
                              (float *)(iVar1 + 0x178),unused,(float *)(iVar1 + 0x188));
  dVar5 = (double)fVar7;
  if ((*(short *)(iVar1 + 0x8a) == 0) && (iVar3 != 0)) {
    *(undefined4 *)(iVar1 + 0x84) = uVar2;
    dVar5 = -(double)*(float *)(iVar1 + 0x168);
    *(float *)(iVar1 + 0x1cc) = (float)dVar6;
    *(float *)(iVar1 + 0x168) = (float)dVar5;
  }
  return dVar5;
}



//==== 00461bc8  ns=mobyupdate_helpers  size=0x2f8
// sig: undefined M8_00461bc8(void)
// callers(1): 00462258 mobyupdate_unsorted::UpdateMoby_8
// callees(1): 0010ce18 mobyutil::MB_PathMoveDist

void mobyupdate_helpers::M8_00461bc8(int param_1)

{
  int iVar1;
  Spline *pSVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  Spline *pSVar9;
  int iVar10;
  
  iVar1 = *(int *)(param_1 + 0x78);
  *(undefined4 *)(iVar1 + 0x16c) = 0;
  pSVar2 = Splines[*(int *)(iVar1 + 0x78)];
  iVar7 = pSVar2->cnt;
  if (0 < iVar7) {
    pSVar9 = pSVar2;
    iVar10 = 0;
    do {
      iVar6 = iVar10 + 1;
      pfVar8 = (float *)((int)pSVar2 + ((iVar6 - (iVar6 / iVar7) * iVar7) * 4 + 4) * 4);
      fVar3 = pSVar9->points[0].y - pfVar8[1];
      fVar4 = pSVar9->points[0].x - *pfVar8;
      fVar5 = pSVar9->points[0].z - pfVar8[2];
      fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      pSVar9->points[0].w = fVar3;
      iVar7 = pSVar2->cnt;
      if (iVar10 != iVar7 + -1) {
        *(float *)(iVar1 + 0x16c) = *(float *)(iVar1 + 0x16c) + fVar3;
        iVar7 = pSVar2->cnt;
      }
      pSVar9 = (Spline *)pSVar9->points;
      iVar10 = iVar6;
    } while (iVar6 < iVar7);
  }
  iVar10 = 0;
  *(undefined4 *)(iVar1 + 400) = 0;
  pSVar2 = Splines[*(int *)(iVar1 + 0x74)];
  iVar7 = pSVar2->cnt;
  pSVar9 = pSVar2;
  if (0 < iVar7) {
    do {
      iVar6 = iVar10 + 1;
      pfVar8 = (float *)((int)pSVar2 + ((iVar6 - (iVar6 / iVar7) * iVar7) * 4 + 4) * 4);
      fVar3 = pSVar9->points[0].y - pfVar8[1];
      fVar4 = pSVar9->points[0].x - *pfVar8;
      fVar5 = pSVar9->points[0].z - pfVar8[2];
      fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      pSVar9->points[0].w = fVar3;
      iVar7 = pSVar2->cnt;
      if (iVar10 != iVar7 + -1) {
        *(float *)(iVar1 + 400) = *(float *)(iVar1 + 400) + fVar3;
        iVar7 = pSVar2->cnt;
      }
      pSVar9 = (Spline *)pSVar9->points;
      iVar10 = iVar6;
    } while (iVar6 < iVar7);
  }
  iVar10 = 0;
  pSVar2 = Splines[*(int *)(iVar1 + 0x204)];
  iVar7 = pSVar2->cnt;
  pSVar9 = pSVar2;
  if (0 < iVar7) {
    do {
      iVar10 = iVar10 + 1;
      pfVar8 = (float *)((int)pSVar2 + ((iVar10 - (iVar10 / iVar7) * iVar7) * 4 + 4) * 4);
      fVar3 = pSVar9->points[0].y - pfVar8[1];
      fVar4 = pSVar9->points[0].x - *pfVar8;
      fVar5 = pSVar9->points[0].z - pfVar8[2];
      pSVar9->points[0].w = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      iVar7 = pSVar2->cnt;
      pSVar9 = (Spline *)pSVar9->points;
    } while (iVar10 < iVar7);
  }
  if (*(int *)(iVar1 + 0x210) == 0) {
    *(undefined4 *)(iVar1 + 0x80) = 0;
    *(undefined4 *)(iVar1 + 0x84) = 0;
    *(undefined4 *)(iVar1 + 0x8c) = 0;
    *(undefined4 *)(iVar1 + 0x1cc) = 0;
  }
  else {
    pSVar2 = Splines[*(int *)(iVar1 + 0x78)];
    *(undefined4 *)(iVar1 + 0x84) = 0;
    *(undefined4 *)(iVar1 + 0x1cc) = 0;
    mobyutil::MB_PathMoveDist
              ((double)(*(float *)(iVar1 + 0x210) * *(float *)(iVar1 + 0x16c)),pSVar2,param_1 + 0x10
               ,iVar1 + 0x84,iVar1 + 0x1cc,Splines,*(undefined2 *)(iVar1 + 0x8a));
    *(undefined4 *)(iVar1 + 0x80) = 0;
    *(undefined4 *)(iVar1 + 0x8c) = 0;
    mobyutil::MB_PathMoveDist
              ((double)(*(float *)(iVar1 + 0x210) * *(float *)(iVar1 + 400)),pSVar2,param_1 + 0x10,
               iVar1 + 0x80,iVar1 + 0x8c);
  }
  return;
}



//==== 00461ec0  ns=mobyupdate_helpers  size=0x4c
// sig: undefined M794_00461ec0(void)
// callers(0): 
// callees(0): 

int mobyupdate_helpers::M794_00461ec0(int param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  
  psVar2 = (short *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)];
  if (psVar2 == (short *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    do {
      sVar1 = *psVar2;
      iVar3 = iVar3 + 1;
      psVar2 = psVar2 + 1;
    } while (-1 < sVar1);
  }
  return iVar3;
}



//==== 00461f10  ns=mobyupdate_helpers  size=0x1b0
// sig: undefined M8_00461f10(void)
// callers(1): 00462258 mobyupdate_unsorted::UpdateMoby_8
// callees(6): 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby

void mobyupdate_helpers::M8_00461f10(MobyInstance *param_1)

{
  MobyModeBit MVar1;
  void *pvVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  double dVar7;
  int local_20;
  float local_1c;
  
  pvVar2 = param_1->pVar;
  uVar6 = ZEXT48(pvVar2);
  dVar7 = 0.0;
  local_1c = 0.0;
  uVar4 = mobyutil::MB_damage(param_1,0x330000,0);
  iVar5 = mobyutil::MB_HandleDamage(param_1,uVar4,uVar6 + 0x20,0,&local_20,&local_1c,0,4);
  if ((local_20 != 1) && (param_1->state < 7)) {
    MVar1 = param_1->modeBits;
    fVar3 = *(float *)((int)pvVar2 + 0x20) - local_1c;
    *(float *)((int)pvVar2 + 0x20) = fVar3;
    if ((double)fVar3 <= dVar7) {
      iVar5 = 1;
    }
    if (param_1->state == '\x01') {
      param_1->state = '\x02';
    }
    if (local_20 == 3) {
      param_1->setByGroup = '\x01';
    }
    if (iVar5 < 3) {
      if ((-1 < iVar5) && (0 < iVar5)) {
        param_1->state = '\a';
        param_1->modeBits =
             MVar1 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
      }
    }
    else if (iVar5 < 0xb) {
      if (iVar5 < 9) {
        *(undefined1 *)((int)pvVar2 + 0x67) = 200;
        mobyutil::MB_SetAnimation(param_1,1,0,5);
      }
      else {
        *(undefined1 *)((int)pvVar2 + 0x67) = 100;
        mobyutil::MB_SetAnimation(param_1,1,0,5);
      }
    }
    mobyutil::MB_UpdateLightsTransition(param_1,uVar6 + 0x60);
  }
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar6 + 0x60);
  return;
}



//==== 004620c8  ns=mobyupdate_helpers  size=0x10c
// sig: undefined M794_004620c8(void)
// callers(0): 
// callees(1): 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M794_004620c8(int param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  uint *puVar5;
  longlong lVar6;
  int iVar7;
  
  iVar1 = *(int *)(param_1 + 0x78);
  *(float *)(iVar1 + 0x164) = *(float *)(iVar1 + 0x164) + 0.5;
  lVar3 = fastfunc::FastDoubleToInt();
  uVar2 = (int)*(uint *)(iVar1 + 0x164) >> 0x1f;
  if (0x3f7fffff < (int)((uVar2 >> 1 ^ *(uint *)(iVar1 + 0x164)) - uVar2)) {
    *(undefined4 *)(iVar1 + 0x164) = 0;
  }
  iVar1 = DAT_00873ecc;
  iVar7 = 0;
  if (0 < DAT_00873ecc) {
    puVar5 = &DAT_00874680;
    puVar4 = &DAT_00874538;
    do {
      if (*puVar5 != 0) {
        lVar6 = (ulonglong)*puVar5 + lVar3;
        lVar6 = lVar6 + (0x90 - (longlong)(int)lVar6 >> 0x3f & 0xffffffffffffff80U);
        uVar2 = *puVar4;
        *puVar5 = (uint)lVar6;
        *puVar4 = (uint)((lVar6 + (0x50 - (longlong)(int)(uint)lVar6 >> 0x3f & lVar6 * -2 + 0xa0U) &
                         0xffffffff) << 0x18) | uVar2 & 0xffffff;
      }
      iVar7 = iVar7 + 1;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar7 < iVar1);
  }
  return;
}



//==== 00462258  ns=mobyupdate_unsorted  size=0x1c98
// sig: undefined UpdateMoby_8(MobyInstance * moby)
// callers(0): 
// callees(45): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere; 0005e598 collproc::CollMobySphere; 00065470 stub::STUB_00065470; 0006d7e0 draw::RegisterPostDraw; 000efb38 mobyfunc::DeleteMoby; 000f0ea8 mobyfunc::AttachManipulator; 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 000fe4f0 mobyutil::MB_randRangeSigned; 00106360 mobyutil::MB_SetZBoundsFromGround; 00109b40 mobyutil::AccelDelt; 0010aa50 mobyutil::MB_MistDeathEffect; 0010ce18 mobyutil::MB_PathMoveDist; 0010d7a0 mobyutil::MB_PathFollowToPos; 0010e030 mobyutil::MB_genericExplosion; 001113e0 mobyutil::MB_RotateQuatAxisAngle; 00116a68 mobyutil::MB_BobMotion; 00116b70 mobyutil::MB_SwingMotion; 001268f8 partupd::SpawnPart_21; 00126f50 partupd::SpawnPart_23; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 00338150 FUN_00338150; 003381c0 FUN_003381c0; 00338438 FUN_00338438; 00460d48 mobyupdate_helpers::M8_00460d48; 00460fd0 mobyupdate_helpers::M8_00460fd0; 004617e0 mobyupdate_helpers::M8_004617e0; 00461938 mobyupdate_helpers::M8_00461938; 00461a90 mobyupdate_helpers::M8_00461a90; 00461bc8 mobyupdate_helpers::M8_00461bc8; 00461f10 mobyupdate_helpers::M8_00461f10; 004fffb4 fastfunc::FastDecTimerS16; 005001fc fastfunc::FastMemSet

/* Moby 8 */

void mobyupdate_unsorted::UpdateMoby_8(MobyInstance *moby)

{
  u8 uVar1;
  f32 fVar2;
  float fVar3;
  short sVar4;
  void *pvVar5;
  void *pvVar6;
  uint uVar7;
  undefined2 uVar8;
  float fVar9;
  Vec4 *pVVar10;
  longlong lVar11;
  undefined4 *puVar12;
  byte bVar17;
  undefined1 uVar18;
  short sVar16;
  int iVar13;
  int iVar14;
  Spline *pSVar15;
  longlong lVar19;
  uint *puVar21;
  longlong lVar20;
  uint *puVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  short *psVar26;
  double dVar27;
  double extraout_f1;
  double extraout_f1_00;
  double extraout_f1_01;
  double extraout_f1_02;
  double dVar28;
  undefined8 uVar29;
  double dVar30;
  double dVar31;
  undefined8 uVar32;
  double dVar33;
  undefined8 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  float fVar39;
  float local_fc;
  float local_f8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  f32 local_94;
  undefined4 local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_80;
  
  lVar19 = (longlong)(int)moby;
  uVar24 = ZEXT48(&stack0x00000000);
  lVar11 = uVar24 - 0x70;
  puVar12 = (undefined4 *)lVar11;
  puVar12[3] = in_vr31_32_3;
  puVar12[2] = in_vr31_32_2;
  puVar12[1] = in_vr31_32_1;
  *puVar12 = in_vr31_32_0;
  pvVar5 = moby->pVar;
  uVar25 = ZEXT48(pvVar5);
  if (*(char *)((int)pvVar5 + 0x2e) == '\x02') {
    *(undefined4 *)((int)pvVar5 + 0x20c) = 0;
    mobyfunc::DeleteMoby(moby);
    return;
  }
  if (moby->state == '\b') {
    *(float *)((int)pvVar5 + 0x164) = *(float *)((int)pvVar5 + 0x164) + 0.5;
    lVar11 = fastfunc::FastDoubleToInt();
    uVar7 = (int)*(uint *)((int)pvVar5 + 0x164) >> 0x1f;
    if (0x3f7fffff < (int)((uVar7 >> 1 ^ *(uint *)((int)pvVar5 + 0x164)) - uVar7)) {
      *(undefined4 *)((int)pvVar5 + 0x164) = 0;
    }
    iVar13 = DAT_00873ecc;
    iVar14 = 0;
    if (0 < DAT_00873ecc) {
      puVar21 = &DAT_00874680;
      puVar22 = &DAT_00874538;
      do {
        if (*puVar21 != 0) {
          lVar19 = (ulonglong)*puVar21 + lVar11;
          lVar19 = lVar19 + (0x90 - (longlong)(int)lVar19 >> 0x3f & 0xffffffffffffff80U);
          uVar7 = *puVar22;
          *puVar21 = (uint)lVar19;
          *puVar22 = (uint)((lVar19 + (0x50 - (longlong)(int)(uint)lVar19 >> 0x3f &
                                      lVar19 * -2 + 0xa0U) & 0xffffffff) << 0x18) | uVar7 & 0xffffff
          ;
        }
        iVar14 = iVar14 + 1;
        puVar21 = puVar21 + 1;
        puVar22 = puVar22 + 1;
      } while (iVar14 < iVar13);
    }
    draw::RegisterPostDraw(&PTR_M800_0046573c_0070eb08,moby);
    return;
  }
  *(undefined4 *)((int)pvVar5 + 0x20c) = 0;
  if ((moby->field43_0x70 & 2U) != 0) {
    uVar1 = moby->updateId;
    if (uVar1 == moby->animationId) {
      if (uVar1 == '\x02') {
        mobyutil::MB_SetAnimation(lVar19,3,0,3);
        uVar1 = moby->updateId;
      }
      if (uVar1 == '\x01') {
        mobyutil::MB_SetAnimation(lVar19,2,0,10);
      }
    }
  }
  dVar27 = (double)mobyupdate_helpers::M8_00461f10(lVar19);
  bVar17 = moby->state;
  if ((bVar17 != 0) && (bVar17 < 7)) {
    fVar39 = (moby->pos).y - GameCamera.posY;
    fVar3 = (moby->pos).x - GameCamera.posX;
    fVar9 = (moby->pos).z - GameCamera.posZ;
    dVar27 = (double)SQRT(fVar9 * fVar9 + fVar3 * fVar3 + fVar39 * fVar39);
    if (dVar27 < 40.0) {
      dVar27 = (double)mobyutil::MB_SetZBoundsFromGround(lVar19);
    }
    *(undefined2 *)((int)pvVar5 + 0x200) = 0;
    bVar17 = moby->state;
  }
  if (4 < bVar17) {
    if (bVar17 < 8) {
      if (bVar17 < 6) {
        pvVar6 = moby->pVar;
        uVar25 = ZEXT48(pvVar6);
        mobyutil::MB_BobMotion
                  (DAT_00873e60,DAT_00873e64,moby,(float *)((int)pvVar6 + 0x1a0),
                   (float *)((int)pvVar6 + 0x1a4));
        mobyutil::MB_SwingMotion
                  ((double)DAT_00873e68,(double)DAT_00873e6c,(double)DAT_00873e70,lVar19,
                   uVar25 + 0x1a8,uVar25 + 0x1ac);
        if (moby->state == '\x01') {
          iVar13 = fastfunc::FastDecTimerS16(uVar25 + 0x1b4);
          dVar27 = (double)*(float *)((int)pvVar6 + 0x1b0);
          if (iVar13 != 0) {
            auVar36 = ZEXT416(0xffffffff);
            auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
            auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
            auVar36 = loadVectorLeftIndexed(0x3e74,0x870000);
            auVar35 = vectorConvertFromSignedFixedPointWord(auVar36,0);
            auVar36 = loadVectorLeftIndexed(lVar11,0x4621d4);
            auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar36 = vectorAddFloatingPoint
                                (auVar35,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 |
                                         auVar36 << 0x60);
            auVar36 = vectorMultiplyAddFloatingPoint(auVar38,auVar36,auVar37);
            auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
            auVar36 = vectorSplatHalfWord(auVar36,1);
            uVar8 = storeVectorElementHalfWordIndexed(auVar36,0x1b4,uVar25);
            *(undefined2 *)((int)pvVar6 + 0x1b4) = uVar8;
            dVar27 = (double)DAT_00873e78;
            iVar13 = mobyutil::MB_randInt(2);
            if (iVar13 != 0) {
              dVar27 = -dVar27;
            }
            dVar27 = (double)fastfunc::FastWrapRot((moby->rotation).z,(float)dVar27);
            *(float *)((int)pvVar6 + 0x1b0) = (float)dVar27;
          }
          mobyutil::AccelDelt((float)dVar27,DAT_00873e7c,DAT_00873e80,DAT_00873e84,
                              &(moby->rotation).z,0x870000,(float *)((int)pvVar6 + 0x1b8));
        }
        uVar34 = 0x4014000000000000;
        dVar27 = (double)mobyupdate_helpers::M8_004617e0
                                   (0x3f847ae140000000,0x4014000000000000,0xbff0000000000000,lVar19)
        ;
        if (*(short *)((int)pvVar5 + 0x208) != 0) {
          local_90 = 0;
          local_8c = 0.0;
          mobyutil::MB_PathFollowToPos
                    (0x4044000000000000,uVar34,0,Splines[*(int *)((int)pvVar5 + 0x78)],lVar19 + 0x10
                     ,uVar24 - 0xc0,uVar24 - 0x90,uVar24 - 0x8c,&DAT_004621d4,0);
          *(undefined4 *)((int)pvVar5 + 0x84) = local_90;
          dVar27 = (double)local_8c;
          *(undefined2 *)((int)pvVar5 + 0x200) = 0;
          *(float *)((int)pvVar5 + 0x1cc) = local_8c;
          moby->state = '\x06';
        }
      }
      else {
        if (6 < bVar17) {
          auVar36 = ZEXT416(0xffffffff);
          auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
          auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
          auVar36 = loadVectorLeftIndexed(0x3e8c,0x870000);
          auVar35 = vectorConvertFromSignedFixedPointWord(auVar36,0);
          auVar36 = loadVectorLeftIndexed(lVar11,0x4621d4);
          auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar36 = vectorAddFloatingPoint
                              (auVar35,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60
                              );
          auVar36 = vectorMultiplyAddFloatingPoint(auVar38,auVar36,auVar37);
          auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
          auVar36 = vectorSplatHalfWord(auVar36,1);
          uVar8 = storeVectorElementHalfWordIndexed(auVar36,0x1f0,uVar25);
          *(undefined2 *)((int)pvVar5 + 0x1f0) = uVar8;
          FUN_00338150(*(undefined4 *)((int)pvVar5 + 0x70));
          iVar13 = *(int *)((int)pvVar5 + 0x1d0);
          if (((iVar13 != -1) && (sound::g_SoundChannels[iVar13].pMoby == moby)) &&
             (sound::g_SoundChannels[iVar13].state != '\0')) {
            sound::sound_Kill(iVar13);
          }
          *(undefined4 *)((int)pvVar5 + 0x1d0) = 0xffffffff;
          dVar33 = 0.0;
          mobyutil::MB_genericExplosion
                    (0,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,0x3ff0000000000000
                     ,0x402e000000000000,lVar19,uVar25 + 0x40,lVar19 + 0x10,0xffffffffffffffff,1,5,2
                     ,4);
          local_94 = (moby->pos).w;
          local_a0 = (moby->pos).x - g_heroPosition.x;
          local_9c = (moby->pos).y - g_heroPosition.y;
          local_98 = 0.0;
          dVar27 = (double)mobyutil::MB_randRangeFloat
                                     (DAT_0071f408 * DAT_00873e90,DAT_0071f408 * DAT_00873e94);
          dVar31 = (double)SQRT(local_98 * local_98 + local_a0 * local_a0 + local_9c * local_9c);
          fVar39 = (float)(dVar27 / dVar31);
          dVar27 = dVar33;
          if (dVar33 - dVar31 < 0.0) {
            dVar27 = (double)(local_a0 * fVar39);
          }
          dVar30 = dVar33;
          if (dVar33 - dVar31 < 0.0) {
            dVar30 = (double)(local_9c * fVar39);
          }
          dVar28 = dVar33;
          if (dVar33 - dVar31 < 0.0) {
            dVar28 = (double)(local_98 * fVar39);
          }
          if (dVar31 - dVar33 < 0.0) {
            dVar27 = (double)(local_a0 * fVar39);
          }
          if (dVar31 - dVar33 < 0.0) {
            dVar30 = (double)(local_9c * fVar39);
          }
          if (dVar31 - dVar33 < 0.0) {
            dVar28 = (double)(local_98 * fVar39);
          }
          local_a0 = (float)dVar27;
          local_9c = (float)dVar30;
          local_98 = (float)dVar28;
          dVar27 = (double)mobyutil::MB_randRangeSigned(0x3fe6571840000000,0x3ff38c3540000000);
          mobyutil::MB_RotateQuatAxisAngle((float)dVar27,(float *)((int)pvVar5 + 0x1e0),&local_a0);
          dVar27 = (double)mobyutil::MB_randRangeFloat
                                     (DAT_0071f408 * DAT_00873e98,DAT_0071f408 * DAT_00873e9c);
          *(float *)((int)pvVar5 + 0x1e8) = (float)dVar27;
          moby->scale = moby->scale * 0.1;
          *(undefined4 *)((int)pvVar5 + 0x140) = 0x41200000;
          *(undefined4 *)((int)pvVar5 + 0x144) = 0x41200000;
          *(undefined4 *)((int)pvVar5 + 0x148) = 0x41200000;
          uVar34 = 0x3fb6571840000000;
          dVar27 = (double)mobyutil::MB_randRangeSigned(dVar33,0x3fb6571840000000);
          *(float *)((int)pvVar5 + 500) = (float)dVar27;
          dVar27 = (double)mobyutil::MB_randRangeSigned(dVar33,uVar34);
          *(float *)((int)pvVar5 + 0x1f8) = (float)dVar27;
          dVar27 = (double)mobyutil::MB_randRangeSigned(dVar33,uVar34);
          *(float *)((int)pvVar5 + 0x1fc) = (float)dVar27;
          uVar34 = 0x3fe921fb60000000;
          dVar31 = (double)(moby->rotation).x;
          dVar27 = (double)mobyutil::MB_randRangeSigned(dVar33,0x3fe921fb60000000);
          dVar27 = (double)fastfunc::FastWrapRot((float)dVar31,(float)dVar27);
          (moby->rotation).x = (float)dVar27;
          dVar31 = (double)(moby->rotation).y;
          dVar27 = (double)mobyutil::MB_randRangeSigned(dVar33,uVar34);
          dVar27 = (double)fastfunc::FastWrapRot((float)dVar31,(float)dVar27);
          (moby->rotation).y = (float)dVar27;
          moby->state = '\t';
          mobyupdate_helpers::M8_00460d48(lVar19);
          return;
        }
        pvVar6 = moby->pVar;
        uVar23 = ZEXT48(pvVar6);
        mobyutil::MB_BobMotion
                  (DAT_00873e60,DAT_00873e64,moby,(float *)((int)pvVar6 + 0x1a0),
                   (float *)((int)pvVar6 + 0x1a4));
        mobyutil::MB_SwingMotion
                  ((double)DAT_00873e68,(double)DAT_00873e6c,(double)DAT_00873e70,lVar19,
                   uVar23 + 0x1a8,uVar23 + 0x1ac);
        if (moby->state == '\x01') {
          iVar13 = fastfunc::FastDecTimerS16(uVar23 + 0x1b4);
          dVar27 = (double)*(float *)((int)pvVar6 + 0x1b0);
          if (iVar13 != 0) {
            auVar36 = ZEXT416(0xffffffff);
            auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
            auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
            auVar36 = loadVectorLeftIndexed(0x3e74,0x870000);
            auVar35 = vectorConvertFromSignedFixedPointWord(auVar36,0);
            auVar36 = loadVectorLeftIndexed(lVar11,0x4621d4);
            auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar36 = vectorAddFloatingPoint
                                (auVar35,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 |
                                         auVar36 << 0x60);
            auVar36 = vectorMultiplyAddFloatingPoint(auVar38,auVar36,auVar37);
            auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
            auVar36 = vectorSplatHalfWord(auVar36,1);
            uVar8 = storeVectorElementHalfWordIndexed(auVar36,0x1b4,uVar23);
            *(undefined2 *)((int)pvVar6 + 0x1b4) = uVar8;
            dVar27 = (double)DAT_00873e78;
            iVar13 = mobyutil::MB_randInt(2);
            if (iVar13 != 0) {
              dVar27 = -dVar27;
            }
            dVar27 = (double)fastfunc::FastWrapRot((moby->rotation).z,(float)dVar27);
            *(float *)((int)pvVar6 + 0x1b0) = (float)dVar27;
          }
          mobyutil::AccelDelt((float)dVar27,DAT_00873e7c,DAT_00873e80,DAT_00873e84,
                              &(moby->rotation).z,0x870000,(float *)((int)pvVar6 + 0x1b8));
        }
        dVar31 = 0.0;
        pSVar15 = Splines[*(int *)((int)pvVar5 + 0x78)];
        dVar27 = dVar31;
        for (iVar13 = *(int *)((int)pvVar5 + 0x84); 0 < iVar13; iVar13 = iVar13 + -1) {
          pVVar10 = pSVar15->points;
          pSVar15 = (Spline *)pSVar15->points;
          dVar27 = (double)(float)(dVar27 + (double)pVVar10->w);
        }
        lVar11 = uVar24 - 0xb0;
        local_88 = 0;
        lVar20 = ((ulonglong)*(uint *)((int)pvVar5 + 0x74) & 0x3fffffff) << 2;
        local_84 = 0;
        mobyutil::MB_PathMoveDist
                  ((double)(((float)(dVar27 + (double)*(float *)((int)pvVar5 + 0x1cc)) /
                            *(float *)((int)pvVar5 + 0x16c)) * *(float *)((int)pvVar5 + 400)),
                   *(undefined4 *)((int)Splines + (int)lVar20),lVar11,uVar24 - 0x88,uVar24 - 0x84,
                   lVar20,*(undefined2 *)((int)pvVar5 + 0x8a));
        dVar27 = 0.004999999888241291;
        iVar13 = (int)lVar11;
        mobyutil::AccelDelt(local_b0,0.005,DAT_00873e5c,(float)dVar31,&(moby->pos).x,iVar13,
                            (float *)((int)pvVar5 + 0x194));
        mobyutil::AccelDelt(local_ac,(float)dVar27,DAT_00873e5c,(float)dVar31,&(moby->pos).y,iVar13,
                            (float *)((int)pvVar5 + 0x198));
        fVar39 = mobyutil::AccelDelt(local_a8,(float)dVar27,DAT_00873e5c,(float)dVar31,
                                     &(moby->pos).z,iVar13,(float *)((int)pvVar5 + 0x19c));
        mobyupdate_helpers::M8_00460fd0((double)fVar39,lVar19,0);
        fVar39 = (moby->pos).y - local_ac;
        fVar3 = (moby->pos).x - local_b0;
        fVar9 = (moby->pos).z - local_a8;
        if (SQRT(fVar9 * fVar9 + fVar3 * fVar3 + fVar39 * fVar39) < 0.5) {
          moby->state = '\x01';
        }
        lVar11 = uVar24 - 0xb0;
        mobyutil::MB_PathMoveDist
                  (dVar31,Splines[*(int *)((int)pvVar5 + 0x78)],lVar11,uVar25 + 0x84,uVar25 + 0x1cc)
        ;
        iVar13 = (int)lVar11;
        mobyutil::AccelDelt(local_b0,DAT_00873e58,DAT_00873e5c,(float)dVar31,
                            (float *)((int)pvVar5 + 0x170),iVar13,(float *)((int)pvVar5 + 0x180));
        mobyutil::AccelDelt(local_ac,DAT_00873e58,DAT_00873e5c,(float)dVar31,
                            (float *)((int)pvVar5 + 0x174),iVar13,(float *)((int)pvVar5 + 0x184));
        fVar39 = mobyutil::AccelDelt(local_a8,DAT_00873e58,DAT_00873e5c,(float)dVar31,
                                     (float *)((int)pvVar5 + 0x178),iVar13,
                                     (float *)((int)pvVar5 + 0x188));
        dVar27 = (double)fVar39;
      }
    }
    else if (bVar17 == 9) {
      (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar5 + 0x1e0);
      (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar5 + 0x1e4);
      (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar5 + 0x1e8);
      fVar9 = DAT_0071f408;
      fVar3 = DAT_0071f408 * DAT_00873ea8;
      fVar39 = *(float *)((int)pvVar5 + 0x1e8);
      if (fVar3 < ABS(*(float *)((int)pvVar5 + 0x1e0))) {
        *(float *)((int)pvVar5 + 0x1e0) =
             *(float *)((int)pvVar5 + 0x1e0) * ((DAT_00873ea4 - 1.0) * DAT_0071f408 + 1.0);
      }
      if (fVar3 < ABS(*(float *)((int)pvVar5 + 0x1e4))) {
        *(float *)((int)pvVar5 + 0x1e4) =
             *(float *)((int)pvVar5 + 0x1e4) * ((DAT_00873ea4 - 1.0) * fVar9 + 1.0);
      }
      if (0 < *(int *)((int)pvVar5 + 0x1e8)) {
        fVar39 = fVar39 * ((DAT_00873ea4 - 1.0) * fVar9 + 1.0);
      }
      *(float *)((int)pvVar5 + 0x1e8) = -(DAT_0071f40c * DAT_00873ea0 - fVar39);
      dVar27 = (double)fastfunc::FastWrapRot((moby->rotation).z,*(float *)((int)pvVar5 + 0x1fc));
      (moby->rotation).z = (float)dVar27;
      *(undefined4 *)((int)pvVar5 + 0x140) = 0x41200000;
      *(undefined4 *)((int)pvVar5 + 0x144) = 0x41200000;
      *(undefined4 *)((int)pvVar5 + 0x148) = 0x41200000;
      fVar2 = (moby->pos).x;
      uVar7 = (int)fVar2 >> 0x1f;
      uVar34 = 0x4000000000000000;
      iVar13 = (uVar7 >> 1 ^ (uint)fVar2) - uVar7;
      if ((((0x3fffffff < iVar13) && (iVar13 < 0x447f4001)) &&
          (fVar2 = (moby->pos).y, uVar7 = (int)fVar2 >> 0x1f,
          iVar13 = (uVar7 >> 1 ^ (uint)fVar2) - uVar7, iVar13 < 0x447f4001 && 0x3fffffff < iVar13))
         && ((fVar2 = (moby->pos).z, uVar7 = (int)fVar2 >> 0x1f,
             iVar13 = (uVar7 >> 1 ^ (uint)fVar2) - uVar7, 0x3fffffff < iVar13 &&
             (iVar13 < 0x447f4001)))) {
        iVar13 = fastfunc::FastDecTimerS16(uVar25 + 0x1f0);
        if (iVar13 == 0) {
          lVar11 = lVar19 + 0x10;
          iVar13 = collproc::CollSphere(0x3fe0000000000000,lVar11,&DAT_004621d4,0,lVar19);
          if (iVar13 == 0) {
            dVar27 = (double)animationSpeed;
            uVar34 = 0x40ed4c0000000000;
            local_80 = (longlong)(int)(dVar27 * 20.5);
            mobyutil::MB_randRange
                      (local_80,dVar27,0x40ed4c0000000000,(int)(dVar27 * 10.5),(int)(dVar27 * 20.5))
            ;
            partupd::SpawnPart_21(uVar34,lVar11,&DAT_00a15d30,0x4f007fff,0x1fffffff);
            dVar31 = 40000.0;
            iVar13 = 0;
            dVar27 = 100000.0;
            uVar32 = 0x3f999999a0000000;
            uVar34 = 0x3ff0000000000000;
            auVar36 = loadVectorLeftIndexed(0x7c,0x4621d4);
            auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
            do {
              mobyutil::MB_randInt(6);
              mobyutil::MB_randInt(2);
              uVar29 = mobyutil::MB_randRangeFloat((float)dVar31,(float)dVar27);
              mobyutil::MB_randRange(0x30,0xff);
              uVar29 = partupd::SpawnPart_23(uVar32,uVar34,uVar34,uVar29,lVar11);
              iVar14 = (int)uVar29;
              if (iVar14 != 0) {
                auVar35 = ZEXT416(0xffffffff);
                auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
                auVar35 = vectorShiftLeftIntegerWord(auVar35,auVar35);
                *(undefined1 *)(iVar14 + 3) = 0x44;
                auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                auVar35 = vectorMultiplyAddFloatingPoint(auVar37,auVar36,auVar35);
                auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
                auVar37 = vectorSplatHalfWord(auVar35,1);
                auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xff;
                uVar8 = storeVectorElementHalfWordIndexed(auVar37,10,uVar29);
                *(undefined2 *)(iVar14 + 10) = uVar8;
                *(undefined4 *)(iVar14 + 0x24) = 2;
                *(undefined1 *)(iVar14 + 0x2a) = 0x60;
                uVar18 = storeVectorElementByteIndexed
                                   (auVar35 | auVar35 << 8 | auVar35 << 0x10 | auVar35 << 0x18 |
                                    auVar35 << 0x20 | auVar35 << 0x28 | auVar35 << 0x30 |
                                    auVar35 << 0x38 | auVar35 << 0x40 | auVar35 << 0x48 |
                                    auVar35 << 0x50 | auVar35 << 0x58 | auVar35 << 0x60 |
                                    auVar35 << 0x68 | auVar35 << 0x70 | auVar35 << 0x78,0x2b,uVar29)
                ;
                *(undefined1 *)(iVar14 + 0x2b) = uVar18;
              }
              iVar13 = iVar13 + 1;
            } while (iVar13 < 2);
            mobyupdate_helpers::M8_00460d48(lVar19);
            return;
          }
        }
        mobyutil::MB_genericExplosion
                  (uVar34,0x3ff0000000000000,uVar34,0x3ff0000000000000,0x4022000000000000,
                   0x3ff0000000000000,0x402e000000000000,lVar19,uVar25 + 0x40,lVar19 + 0x10,5,
                   0xffffffffffffffff,5,2,4);
        mobyfunc::DeleteMoby(moby);
        return;
      }
      mobyfunc::DeleteMoby(moby);
      return;
    }
    goto LAB_00463dd8;
  }
  if (bVar17 < 2) {
    if (bVar17 == 0) {
      iVar13 = mobyutil::MB_GetPvarsIfMobyHasThem(moby);
      *(undefined1 *)(iVar13 + 0xe) = 1;
      if (*(short *)((int)pvVar5 + 0x1b6) == 1) {
        moby->updateDistance = -1;
        moby->collision = (ushort *)0x0;
        moby->state = '\b';
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
        uVar18 = fastfunc::FastDoubleToInt(0x4031000000000000);
        *(undefined1 *)((int)pvVar5 + 0x58) = uVar18;
        uVar18 = fastfunc::FastDoubleToInt(0x4018000000000000);
        *(undefined1 *)((int)pvVar5 + 0x5a) = uVar18;
        psVar26 = (short *)(&mobyutil::g_MobyGroups)[(byte)moby->group];
        if (psVar26 == (short *)0x0) {
          sVar16 = 0;
        }
        else {
          sVar16 = 0;
          do {
            sVar4 = *psVar26;
            sVar16 = sVar16 + 1;
            psVar26 = psVar26 + 1;
          } while (-1 < sVar4);
        }
        *(short *)((int)pvVar5 + 0x20a) = sVar16;
        return;
      }
      if (*(int *)((int)pvVar5 + 0x74) == -1) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      if (Splines[*(int *)((int)pvVar5 + 0x74)]->cnt == 0) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      if (*(int *)((int)pvVar5 + 0x78) == -1) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      if (Splines[*(int *)((int)pvVar5 + 0x78)]->cnt == 0) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      if (*(int *)((int)pvVar5 + 0x70) < 0) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      if (*(int *)((int)pvVar5 + 0x204) == -1) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      if (Splines[*(int *)((int)pvVar5 + 0x204)]->cnt == 0) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      moby->shadow = ' ';
      *(undefined1 *)((int)pvVar5 + 0x28) = 3;
      *(undefined4 *)((int)pvVar5 + 0x20) = 0x40800000;
      *(undefined2 *)((int)pvVar5 + 0x24) = 4;
      pSVar15 = Splines[*(int *)((int)pvVar5 + 0x74)];
      (moby->pos).x = pSVar15->points[0].x;
      (moby->pos).y = pSVar15->points[0].y;
      (moby->pos).z = pSVar15->points[0].z;
      iVar13 = *(int *)((int)pvVar5 + 0x78);
      (moby->pos).w = pSVar15->points[0].w;
      pSVar15 = Splines[iVar13];
      *(float *)((int)pvVar5 + 0x170) = pSVar15->points[0].x;
      *(float *)((int)pvVar5 + 0x174) = pSVar15->points[0].y;
      *(float *)((int)pvVar5 + 0x178) = pSVar15->points[0].z;
      *(float *)((int)pvVar5 + 0x17c) = pSVar15->points[0].w;
      mobyupdate_helpers::M8_00461bc8(lVar19);
      *(undefined4 *)((int)pvVar5 + 0x188) = 0;
      *(undefined4 *)((int)pvVar5 + 0x184) = 0;
      *(undefined4 *)((int)pvVar5 + 0x180) = 0;
      *(undefined4 *)((int)pvVar5 + 0x19c) = 0;
      *(undefined4 *)((int)pvVar5 + 0x198) = 0;
      *(undefined4 *)((int)pvVar5 + 0x194) = 0;
      *(undefined4 *)((int)pvVar5 + 0x21c) = 0xbf800000;
      *(undefined4 *)((int)pvVar5 + 0x160) = 0;
      *(undefined4 *)((int)pvVar5 + 0x20c) = 0;
      *(undefined2 *)((int)pvVar5 + 0x88) = 1;
      *(undefined4 *)((int)pvVar5 + 0x164) = 0;
      *(undefined4 *)((int)pvVar5 + 0x1a0) = 0;
      *(undefined4 *)((int)pvVar5 + 0x1a4) = 0;
      *(undefined4 *)((int)pvVar5 + 0x1a8) = 0;
      *(undefined4 *)((int)pvVar5 + 0x1ac) = 0;
      fVar2 = (moby->rotation).z;
      *(undefined2 *)((int)pvVar5 + 0x1b4) = 0;
      *(f32 *)((int)pvVar5 + 0x1b0) = fVar2;
      *(undefined4 *)((int)pvVar5 + 0x1b8) = 0;
      fastfunc::FastMemSet(uVar25 + 0xe0,0,0x40);
      fastfunc::FastMemSet(uVar25 + 0x120,0,0x40);
      mobyfunc::AttachManipulator(moby,0,(int)(uVar25 + 0xe0));
      dVar27 = (double)mobyfunc::AttachManipulator(moby,1,(int)(uVar25 + 0x120));
      *(undefined4 *)((int)pvVar5 + 0x1c4) = 0;
      *(undefined4 *)((int)pvVar5 + 0x1c8) = 0;
      *(undefined4 *)((int)pvVar5 + 0x18c) = 0;
      moby->state = '\x01';
      moby->setByGroup = '\0';
      goto LAB_00463dd8;
    }
    moby->field60_0x90 = DAT_00873ebc << 8 | DAT_00873eb8 | DAT_00873ec0 << 0x10 | 0xff000000;
    iVar13 = FUN_00338438(*(undefined4 *)((int)pvVar5 + 0x70));
    if (iVar13 != 0) {
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      moby->state = '\x03';
      auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = loadVectorLeftIndexed(0x3e88,0x870000);
      auVar35 = vectorConvertFromSignedFixedPointWord(auVar36,0);
      auVar36 = loadVectorLeftIndexed(lVar11,0x4621d4);
      auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar36 = vectorAddFloatingPoint
                          (auVar35,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar38,auVar36,auVar37);
      auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36 = vectorSplatHalfWord(auVar36,1);
      uVar8 = storeVectorElementHalfWordIndexed(auVar36,0x1f2,uVar25);
      *(undefined2 *)((int)pvVar5 + 0x1f2) = uVar8;
    }
    *(undefined2 *)((int)pvVar5 + 0x200) = 1;
    *(undefined2 *)((int)pvVar5 + 0x202) = 0;
    iVar13 = mobyupdate_helpers::M8_00460fd0(lVar19,1);
    mobyupdate_helpers::M8_00461a90(lVar19);
    mobyupdate_helpers::M8_00461938(lVar19);
    pvVar6 = moby->pVar;
    uVar23 = ZEXT48(pvVar6);
    mobyutil::MB_BobMotion
              (DAT_00873e60,DAT_00873e64,moby,(float *)((int)pvVar6 + 0x1a0),
               (float *)((int)pvVar6 + 0x1a4));
    dVar27 = (double)mobyutil::MB_SwingMotion
                               ((double)DAT_00873e68,(double)DAT_00873e6c,(double)DAT_00873e70,
                                lVar19,uVar23 + 0x1a8,uVar23 + 0x1ac);
    if (moby->state == '\x01') {
      iVar14 = fastfunc::FastDecTimerS16(uVar23 + 0x1b4);
      dVar27 = (double)*(float *)((int)pvVar6 + 0x1b0);
      if (iVar14 != 0) {
        auVar36 = ZEXT416(0xffffffff);
        auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
        auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
        auVar36 = loadVectorLeftIndexed(0x3e74,0x870000);
        auVar35 = vectorConvertFromSignedFixedPointWord(auVar36,0);
        auVar36 = loadVectorLeftIndexed(lVar11,0x4621d4);
        auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar36 = vectorAddFloatingPoint
                            (auVar35,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60);
        auVar36 = vectorMultiplyAddFloatingPoint(auVar38,auVar36,auVar37);
        auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
        auVar36 = vectorSplatHalfWord(auVar36,1);
        uVar8 = storeVectorElementHalfWordIndexed(auVar36,0x1b4,uVar23);
        *(undefined2 *)((int)pvVar6 + 0x1b4) = uVar8;
        dVar27 = (double)DAT_00873e78;
        iVar14 = mobyutil::MB_randInt(2);
        if (iVar14 != 0) {
          dVar27 = -dVar27;
        }
        dVar27 = (double)fastfunc::FastWrapRot((moby->rotation).z,(float)dVar27);
        *(float *)((int)pvVar6 + 0x1b0) = (float)dVar27;
      }
      fVar39 = mobyutil::AccelDelt((float)dVar27,DAT_00873e7c,DAT_00873e80,DAT_00873e84,
                                   &(moby->rotation).z,0x870000,(float *)((int)pvVar6 + 0x1b8));
      dVar27 = (double)fVar39;
    }
    if (iVar13 == 0) goto LAB_00463dd8;
    stub::STUB_00065470((double)(*(float *)((int)pvVar5 + 0x214) * 0.8),uVar24 - 0x110);
    dVar27 = 0.47999998927116394;
    stub::STUB_00065470((double)(*(float *)((int)pvVar5 + 0x214) * 0.48),uVar24 - 0x120);
    iVar13 = collproc::CollMobySphere
                       ((double)(float)((double)*(float *)((int)pvVar5 + 0x214) * dVar27),
                        uVar24 - 0x120);
    dVar27 = extraout_f1;
    if (((iVar13 == 0) &&
        (iVar13 = collproc::CollMobySphere
                            ((double)(*(float *)((int)pvVar5 + 0x214) * 0.9),uVar24 - 0x110,
                             &DAT_004621d4,0,0,0), dVar27 = extraout_f1_00, iVar13 == 0)) ||
       ((CollOutput.pMoby != g_heroMobyPtr &&
        ((CollOutput.pMoby == (MobyInstance *)0x0 ||
         (((CollOutput.pMoby)->oClass != DECOY &&
          ((CollOutput.pMoby)->oClass != MORPH_O_RAY_CHICKEN)))))))) goto LAB_00463dd8;
    *(MobyInstance **)((int)pvVar5 + 0x18c) = CollOutput.pMoby;
  }
  else if (2 < bVar17) {
    if (bVar17 < 4) {
      iVar13 = *(int *)((int)pvVar5 + 0x18c);
      moby->field60_0x90 = DAT_00873ec8 << 8 | DAT_00873ec4 | DAT_010ccee0 << 0x10 | 0xff000000;
      if (iVar13 == 0) {
        *(undefined4 *)((int)pvVar5 + 0x80) = 0;
        *(undefined4 *)((int)pvVar5 + 0x8c) = 0;
        *(undefined2 *)((int)pvVar5 + 0x208) = 0;
        moby->state = '\x04';
      }
      else {
        *(undefined2 *)((int)pvVar5 + 0x200) = 1;
        *(undefined2 *)((int)pvVar5 + 0x202) = 1;
        mobyupdate_helpers::M8_00460fd0(lVar19,1);
        iVar13 = *(int *)((int)pvVar5 + 0x18c);
        fVar39 = *(float *)(iVar13 + 0x10);
        local_fc = *(float *)(iVar13 + 0x14);
        fVar3 = *(float *)(iVar13 + 0x18);
        dVar27 = 0.5;
        iVar13 = collproc::CollLine(uVar24 - 0x100,uVar24 - 0xf0,0x12,0,0);
        if (iVar13 == 0) {
          local_f8 = (float)((double)(fVar3 + 0.5) - dVar27);
        }
        else {
          local_fc = CollOutput.ip.y;
          local_f8 = CollOutput.ip.z;
          fVar39 = CollOutput.ip.x;
        }
        puVar12 = &DAT_004621d4;
        dVar33 = 0.003000000026077032;
        dVar31 = 0.20000000298023224;
        dVar27 = 0.0;
        mobyutil::AccelDelt(fVar39,0.003,0.2,0.0,(float *)((int)pvVar5 + 0x170),0x4621d4,
                            (float *)((int)pvVar5 + 0x180));
        mobyutil::AccelDelt(local_fc,(float)dVar33,(float)dVar31,(float)dVar27,
                            (float *)((int)pvVar5 + 0x174),(int)puVar12,
                            (float *)((int)pvVar5 + 0x184));
        fVar39 = mobyutil::AccelDelt(local_f8,(float)dVar33,(float)dVar31,(float)dVar27,
                                     (float *)((int)pvVar5 + 0x178),(int)puVar12,
                                     (float *)((int)pvVar5 + 0x188));
        mobyupdate_helpers::M8_00461938((double)fVar39,lVar19);
        if ((0x7f < *(byte *)(*(int *)((int)pvVar5 + 0x18c) + 0x20)) ||
           (iVar13 = fastfunc::FastDecTimerS16(uVar25 + 0x1f2), iVar13 != 0)) {
          *(undefined4 *)((int)pvVar5 + 0x80) = 0;
          *(undefined4 *)((int)pvVar5 + 0x8c) = 0;
          *(undefined2 *)((int)pvVar5 + 0x208) = 0;
          moby->state = '\x04';
        }
      }
    }
    moby->field60_0x90 = DAT_00873ec8 << 8 | DAT_00873ec4 | DAT_010ccee0 << 0x10 | 0xff000000;
    fastfunc::FastIntToDouble(moby->drawDistance);
    iVar13 = fastfunc::FastCheckBsphereInView(uVar24 - 0xe0);
    dVar27 = extraout_f1_01;
    if (-1 < iVar13) {
      mobyfunc::GetBonePosition(lVar19,2,uVar24 - 0xd0);
      *(undefined4 *)((int)pvVar5 + 0x1d4) = local_d0;
      *(undefined4 *)((int)pvVar5 + 0x1d8) = local_cc;
      pvVar6 = moby->pVar;
      uVar24 = ZEXT48(pvVar6);
      *(undefined4 *)((int)pvVar5 + 0x1dc) = local_c8;
      *(uint *)((int)pvVar5 + 0x20c) = *(uint *)((int)pvVar5 + 0x20c) | 8;
      mobyutil::MB_BobMotion
                (DAT_00873e60,DAT_00873e64,moby,(float *)((int)pvVar6 + 0x1a0),
                 (float *)((int)pvVar6 + 0x1a4));
      dVar27 = (double)mobyutil::MB_SwingMotion
                                 ((double)DAT_00873e68,(double)DAT_00873e6c,(double)DAT_00873e70,
                                  lVar19,uVar24 + 0x1a8,uVar24 + 0x1ac);
      if (moby->state == '\x01') {
        iVar13 = fastfunc::FastDecTimerS16(uVar24 + 0x1b4);
        dVar27 = (double)*(float *)((int)pvVar6 + 0x1b0);
        if (iVar13 != 0) {
          auVar36 = ZEXT416(0xffffffff);
          auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
          auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
          auVar36 = loadVectorLeftIndexed(0x3e74,0x870000);
          auVar35 = vectorConvertFromSignedFixedPointWord(auVar36,0);
          auVar36 = loadVectorLeftIndexed(lVar11,0x4621d4);
          auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar36 = vectorAddFloatingPoint
                              (auVar35,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60
                              );
          auVar36 = vectorMultiplyAddFloatingPoint(auVar38,auVar36,auVar37);
          auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
          auVar36 = vectorSplatHalfWord(auVar36,1);
          uVar8 = storeVectorElementHalfWordIndexed(auVar36,0x1b4,uVar24);
          *(undefined2 *)((int)pvVar6 + 0x1b4) = uVar8;
          dVar27 = (double)DAT_00873e78;
          iVar13 = mobyutil::MB_randInt(2);
          if (iVar13 != 0) {
            dVar27 = -dVar27;
          }
          dVar27 = (double)fastfunc::FastWrapRot((moby->rotation).z,(float)dVar27);
          *(float *)((int)pvVar6 + 0x1b0) = (float)dVar27;
        }
        fVar39 = mobyutil::AccelDelt((float)dVar27,DAT_00873e7c,DAT_00873e80,DAT_00873e84,
                                     &(moby->rotation).z,0x870000,(float *)((int)pvVar6 + 0x1b8));
        dVar27 = (double)fVar39;
      }
    }
    if (moby->state == '\x04') {
      if (moby->animationId == '\0') {
        mobyutil::MB_SetAnimation(dVar27,lVar19,2,0,5);
      }
      mobyupdate_helpers::M8_004617e0
                ((double)DAT_00873eb0,(double)DAT_00873eac,0x3ff0000000000000,lVar19);
      dVar27 = 0.0;
      if ((*(int *)((int)pvVar5 + 0x1c0) != 0) || (*(int *)((int)pvVar5 + 0x1bc) != 0)) {
        puVar12 = &DAT_004621d4;
        dVar33 = 0.004000000189989805;
        dVar31 = 0.20000000298023224;
        mobyutil::AccelDelt(0.0,0.004,0.2,0.0,(float *)((int)pvVar5 + 0x1c0),0x4621d4,
                            (float *)((int)pvVar5 + 0x1c8));
        mobyutil::AccelDelt((float)dVar27,(float)dVar33,(float)dVar31,(float)dVar27,
                            (float *)((int)pvVar5 + 0x1bc),(int)puVar12,
                            (float *)((int)pvVar5 + 0x1c4));
        if ((*(uint *)((int)pvVar5 + 0x1c0) & 0x7fffffff) < 0x38d1b717) {
          *(undefined4 *)((int)pvVar5 + 0x1c0) = 0;
        }
        dVar31 = (double)*(float *)((int)pvVar5 + 0x1bc);
        if ((*(uint *)((int)pvVar5 + 0x1bc) & 0x7fffffff) < 0x38d1b717) {
          *(undefined4 *)((int)pvVar5 + 0x1bc) = 0;
          dVar31 = dVar27;
        }
        fastfunc::FastQuaternionToEuler(dVar31,uVar25 + 0xf0,2);
        fastfunc::FastQuaternionToEuler((double)*(float *)((int)pvVar5 + 0x1c0),uVar25 + 0x130,1);
      }
      iVar13 = FUN_003381c0(*(undefined4 *)((int)pvVar5 + 0x70));
      dVar27 = extraout_f1_02;
      if (iVar13 != 0) {
        pSVar15 = Splines[*(int *)((int)pvVar5 + 0x204)];
        moby->state = '\x05';
        iVar13 = pSVar15->cnt;
        *(int *)((int)pvVar5 + 0x80) = iVar13 + -2;
        fVar39 = pSVar15->points[iVar13 + -2].w;
        *(undefined2 *)((int)pvVar5 + 0x208) = 0;
        *(float *)((int)pvVar5 + 0x8c) = fVar39;
        mobyupdate_helpers::M8_004617e0
                  (0x3f847ae140000000,0x4014000000000000,0xbff0000000000000,lVar19);
        local_80 = (longlong)(int)(animationSpeed * 10.5);
        dVar27 = (double)mobyutil::MB_SetAnimation(lVar19,0,0,(int)(animationSpeed * 10.5));
      }
    }
    goto LAB_00463dd8;
  }
  iVar13 = *(int *)((int)pvVar5 + 0x1d0);
  if (((iVar13 != -1) && (sound::g_SoundChannels[iVar13].pMoby == moby)) &&
     (sound::g_SoundChannels[iVar13].state != '\0')) {
    sound::sound_Kill(iVar13);
  }
  *(undefined4 *)((int)pvVar5 + 0x1d0) = 0xffffffff;
  dVar27 = (double)FUN_00338150(*(undefined4 *)((int)pvVar5 + 0x70));
  auVar36 = ZEXT416(0xffffffff);
  auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
  moby->state = '\x03';
  auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
  auVar36 = loadVectorLeftIndexed(0x3e88,0x870000);
  auVar35 = vectorConvertFromSignedFixedPointWord(auVar36,0);
  auVar36 = loadVectorLeftIndexed(lVar11,0x4621d4);
  auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar36 = vectorAddFloatingPoint
                      (auVar35,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60);
  auVar36 = vectorMultiplyAddFloatingPoint(auVar38,auVar36,auVar37);
  auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
  auVar36 = vectorSplatHalfWord(auVar36,1);
  uVar8 = storeVectorElementHalfWordIndexed(auVar36,0x1f2,uVar25);
  *(undefined2 *)((int)pvVar5 + 0x1f2) = uVar8;
LAB_00463dd8:
  bVar17 = moby->state;
  if ((bVar17 < 0x80) && (moby->animationId == '\x01')) {
    if (moby->setByGroup == '\x01') {
      mobyutil::MB_MistDeathEffect(dVar27,lVar19,&DAT_00a15d30,0xffff);
      bVar17 = moby->state;
    }
  }
  else {
    moby->setByGroup = '\0';
  }
  if ((bVar17 == 1) &&
     (iVar13 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar5 + 0x1d0)), iVar13 == 0)) {
    iVar13 = sound::PlayMobySound(0,4,moby);
    *(int *)((int)pvVar5 + 0x1d0) = iVar13;
  }
  if (((moby->state == '\x03') || (moby->state == '\x04')) &&
     (iVar13 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar5 + 0x1d0)), iVar13 == 0)) {
    iVar13 = sound::PlayMobySound(2,4,moby);
    *(int *)((int)pvVar5 + 0x1d0) = iVar13;
  }
  return;
}



//==== 00463ef8  ns=mobyupdate_helpers  size=0x688
// sig: undefined M800_00463ef8(void)
// callers(1): 00464590 mobyupdate_helpers::M800_00464590
// callees(8): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00174f80 vuchain::SetGSReg; 00500b64 fastfunc::FastEulerToMtx; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f98 FUN_00502f98; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M800_00463ef8(int param_1)

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
  float fVar16;
  float fVar17;
  ushort uVar18;
  ulonglong *puVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined8 uVar27;
  longlong lVar28;
  int iVar29;
  float *pfVar31;
  longlong lVar30;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  longlong lVar32;
  float *pfVar33;
  ulonglong in_LR;
  longlong lVar34;
  longlong lVar35;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar25 = ZEXT48(&stack0x00000000);
  lVar32 = uVar25 - 0x200;
  puVar19 = (ulonglong *)lVar32;
  *puVar19 = uVar25;
  puVar19[0x42] = in_LR;
  puVar19[0x37] = in_f23;
  puVar19[0x38] = in_f24;
  puVar19[0x39] = in_f25;
  puVar19[0x3a] = in_f26;
  puVar19[0x3b] = in_f27;
  puVar19[0x3c] = in_f28;
  puVar19[0x3d] = in_f29;
  puVar19[0x3e] = in_f30;
  puVar19[0x3f] = in_f31;
  puVar19[0x36] = unaff_r31;
  iVar29 = *(int *)(param_1 + 0x78);
  puVar19[0x35] = unaff_r30;
  fVar7 = DAT_00874b40;
  fVar1 = *(float *)(iVar29 + 0xd0);
  *(float *)(puVar19 + 0x16) = fVar1;
  fVar2 = *(float *)(iVar29 + 0xd4);
  *(float *)((int)puVar19 + 0xb4) = fVar2;
  fVar3 = *(float *)(iVar29 + 0xd8);
  *(undefined4 *)((int)puVar19 + 0xbc) = 0x3f800000;
  *(float *)(puVar19 + 0x17) = fVar3;
  fVar4 = *(float *)(iVar29 + 0xa4);
  fVar5 = *(float *)(iVar29 + 0xa8);
  *(float *)(puVar19 + 0x16) = *(float *)(iVar29 + 0xa0) * fVar7 + fVar1;
  *(float *)((int)puVar19 + 0xb4) = fVar4 * fVar7 + fVar2;
  *(float *)(puVar19 + 0x17) = fVar5 * fVar7 + fVar3;
  uVar26 = draw::GetEffectTex(0xb);
  puVar19[0x27] = uVar26;
  uVar26 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar19[0x28] = uVar26;
  uVar26 = FUN_00502f08(0,0,0,0,0,0);
  puVar19[0x26] = uVar26;
  uVar26 = idol_draw::PackCmd(0,2,0,1,0x80);
  puVar19[0x29] = uVar26;
  uVar27 = FUN_00502f98(1,0,0,1,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar27);
  fVar2 = GameCamera.posX - *(float *)(puVar19 + 0x16);
  fVar3 = GameCamera.posY - *(float *)((int)puVar19 + 0xb4);
  *(float *)((int)puVar19 + 0x15c) = fVar2;
  *(float *)(puVar19 + 0x2c) = fVar3;
  fVar7 = GameCamera.posZ;
  fVar1 = *(float *)(puVar19 + 0x17);
  *(float *)((int)puVar19 + 0x164) = ABS(fVar2) - ABS(fVar3);
  fVar5 = 0.0;
  uVar26 = (ulonglong)(*(uint *)((int)puVar19 + 0x15c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar19 + 0x164) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar19 + 0x2c) >> 0x1d) & 4;
  fVar4 = ABS(*(float *)((int)puVar19 + 0x15c));
  if (*(float *)((int)puVar19 + 0x164) - 0.0 < 0.0) {
    fVar4 = ABS(fVar3);
  }
  fVar17 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
  fVar8 = ABS(*(float *)(puVar19 + 0x2c));
  if (*(float *)((int)puVar19 + 0x164) - 0.0 < 0.0) {
    fVar8 = ABS(fVar2);
  }
  fVar6 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
  fVar9 = fVar5;
  if (0.0 < fVar4) {
    lVar35 = uVar25 - 0x1f0;
    lVar28 = uVar25 - 0x78;
    lVar30 = uVar25 - 0x68;
    lVar34 = 2;
    fVar4 = (fVar8 - fVar4) / (fVar8 + fVar4);
    fVar8 = fVar4 * fVar4;
    *(float *)((int)puVar19 + 0x194) = fVar4;
    *(float *)((int)puVar19 + 0x18c) = fVar4;
    *(float *)(puVar19 + 0x32) = fVar4;
    *(float *)(puVar19 + 0x31) = fVar4;
    fVar4 = fVar8 * fVar8;
    *(float *)((int)puVar19 + 0x18c) = *(float *)((int)puVar19 + 0x18c) * fVar8;
    *(float *)(puVar19 + 0x32) = *(float *)(puVar19 + 0x32) * fVar4;
    *(float *)((int)puVar19 + 0x194) = *(float *)((int)puVar19 + 0x194) * fVar4 * fVar8;
    do {
      *(float *)((int)lVar35 + 0x188) = *(float *)((int)lVar35 + 0x178) * fVar4 * fVar4;
      iVar20 = (int)lVar28;
      lVar35 = lVar35 + 8;
      lVar28 = lVar28 + 8;
      *(float *)((int)lVar30 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
      lVar30 = lVar30 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar34 = 4;
    lVar30 = uVar25 - 0x78;
    pfVar31 = (float *)&DAT_007358e0;
    lVar35 = lVar32;
    lVar28 = lVar30;
    do {
      fVar4 = *pfVar31;
      fVar8 = pfVar31[1];
      pfVar31 = pfVar31 + 2;
      *(float *)((int)lVar35 + 0x188) = *(float *)((int)lVar35 + 0x188) * fVar4;
      lVar35 = lVar35 + 8;
      *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar8;
      lVar28 = lVar28 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar28 = 2;
    lVar35 = lVar32;
    fVar4 = fVar5;
    do {
      iVar20 = (int)lVar35;
      lVar35 = lVar35 + 0x10;
      iVar21 = (int)lVar30;
      lVar30 = lVar30 + 0x10;
      fVar4 = fVar4 + *(float *)(iVar20 + 0x188) + *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) +
              *(float *)(iVar21 + 0xc);
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    fVar9 = (fVar4 + 0.7853982) * fVar17 + fVar6;
  }
  *(float *)(puVar19 + 0xf) = fVar9;
  fVar2 = SQRT(fVar2 * fVar2 + fVar3 * fVar3);
  *(float *)((int)puVar19 + 0x154) = fVar7 - fVar1;
  fVar4 = ABS(fVar7 - fVar1);
  fVar3 = ABS(fVar2);
  *(float *)(puVar19 + 0x2a) = fVar2;
  *(float *)(puVar19 + 0x2b) = fVar3 - fVar4;
  uVar26 = (ulonglong)(*(uint *)(puVar19 + 0x2a) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar19 + 0x2b) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar19 + 0x154) >> 0x1d) & 4;
  fVar1 = ABS(*(float *)(puVar19 + 0x2a));
  if (*(float *)(puVar19 + 0x2b) - 0.0 < 0.0) {
    fVar1 = fVar4;
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
  fVar4 = ABS(*(float *)((int)puVar19 + 0x154));
  if (*(float *)(puVar19 + 0x2b) - 0.0 < 0.0) {
    fVar4 = fVar3;
  }
  fVar3 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
  if (0.0 < fVar1) {
    lVar35 = uVar25 - 0x1f0;
    lVar28 = uVar25 - 0x98;
    lVar30 = uVar25 - 0x88;
    lVar34 = 2;
    fVar1 = (fVar4 - fVar1) / (fVar4 + fVar1);
    fVar4 = fVar1 * fVar1;
    *(float *)((int)puVar19 + 0x174) = fVar1;
    *(float *)((int)puVar19 + 0x16c) = fVar1;
    *(float *)(puVar19 + 0x2e) = fVar1;
    *(float *)(puVar19 + 0x2d) = fVar1;
    fVar1 = fVar4 * fVar4;
    *(float *)((int)puVar19 + 0x16c) = *(float *)((int)puVar19 + 0x16c) * fVar4;
    *(float *)(puVar19 + 0x2e) = *(float *)(puVar19 + 0x2e) * fVar1;
    *(float *)((int)puVar19 + 0x174) = *(float *)((int)puVar19 + 0x174) * fVar1 * fVar4;
    do {
      *(float *)((int)lVar35 + 0x168) = *(float *)((int)lVar35 + 0x158) * fVar1 * fVar1;
      iVar20 = (int)lVar28;
      lVar35 = lVar35 + 8;
      lVar28 = lVar28 + 8;
      *(float *)((int)lVar30 + 4) = *(float *)(iVar20 + 4) * fVar1 * fVar1;
      lVar30 = lVar30 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar34 = 4;
    lVar30 = uVar25 - 0x98;
    pfVar31 = (float *)&DAT_007358e0;
    lVar35 = lVar32;
    lVar28 = lVar30;
    do {
      fVar1 = *pfVar31;
      fVar4 = pfVar31[1];
      pfVar31 = pfVar31 + 2;
      *(float *)((int)lVar35 + 0x168) = *(float *)((int)lVar35 + 0x168) * fVar1;
      lVar35 = lVar35 + 8;
      *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar4;
      lVar28 = lVar28 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar35 = 2;
    do {
      iVar20 = (int)lVar32;
      iVar21 = (int)lVar30;
      lVar32 = lVar32 + 0x10;
      lVar30 = lVar30 + 0x10;
      fVar5 = fVar5 + *(float *)(iVar20 + 0x168) + *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) +
              *(float *)(iVar21 + 0xc);
      lVar35 = lVar35 + -1;
    } while (lVar35 != 0);
    fVar5 = (fVar5 + 0.7853982) * fVar2 + fVar3;
  }
  *(undefined4 *)(puVar19 + 0xe) = 0;
  *(float *)((int)puVar19 + 0x74) = -fVar5;
  fastfunc::FastEulerToMtx(uVar25 - 0x180,uVar25 - 400);
  uVar18 = *(ushort *)(iVar29 + 0x202);
  *(undefined4 *)(puVar19 + 0x23) = 0;
  *(undefined4 *)((int)puVar19 + 0x124) = 0;
  *(undefined4 *)(puVar19 + 0x22) = 0x3f800000;
  *(undefined4 *)((int)puVar19 + 0x114) = 0x3f800000;
  *(undefined4 *)((int)puVar19 + 0x11c) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x24) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x25) = 0;
  *(undefined4 *)((int)puVar19 + 300) = 0;
  fVar1 = *(float *)(puVar19 + 0x10);
  fVar2 = *(float *)(puVar19 + 0x12);
  lVar32 = uVar25 - 0x140;
  fVar3 = *(float *)(puVar19 + 0x14);
  fVar4 = *(float *)(puVar19 + 0x16);
  fVar5 = *(float *)((int)puVar19 + 0x84);
  fVar7 = *(float *)((int)puVar19 + 0x94);
  iVar29 = ((uint)((LZCOUNT(-(uint)uVar18) << 0x3a) >> 0x3f) & 0x3f3f00) + 0x7f40407f;
  fVar17 = *(float *)((int)puVar19 + 0xa4);
  fVar8 = *(float *)((int)puVar19 + 0xb4);
  fVar6 = *(float *)(puVar19 + 0x11);
  pfVar31 = (float *)&DAT_00874a80;
  fVar9 = *(float *)(puVar19 + 0x13);
  lVar35 = 4;
  fVar10 = *(float *)(puVar19 + 0x15);
  fVar11 = *(float *)(puVar19 + 0x17);
  fVar12 = *(float *)((int)puVar19 + 0x8c);
  fVar13 = *(float *)((int)puVar19 + 0x9c);
  fVar14 = *(float *)((int)puVar19 + 0xac);
  fVar15 = *(float *)((int)puVar19 + 0xbc);
  *(int *)((int)puVar19 + 0x10c) = iVar29;
  *(int *)(puVar19 + 0x21) = iVar29;
  *(int *)((int)puVar19 + 0x104) = iVar29;
  *(int *)(puVar19 + 0x20) = iVar29;
  do {
    fVar22 = *pfVar31 * DAT_00874b3c;
    pfVar33 = (float *)lVar32;
    *pfVar33 = fVar22;
    fVar23 = pfVar31[1] * DAT_00874b3c;
    pfVar33[1] = fVar23;
    fVar24 = pfVar31[2] * DAT_00874b3c;
    pfVar33[2] = fVar24;
    fVar16 = pfVar31[3];
    pfVar31 = pfVar31 + 4;
    *pfVar33 = fVar16 * fVar4 + fVar24 * fVar3 + fVar22 * fVar1 + fVar23 * fVar2;
    pfVar33[1] = fVar16 * fVar8 + fVar24 * fVar17 + fVar22 * fVar5 + fVar23 * fVar7;
    pfVar33[2] = fVar16 * fVar11 + fVar24 * fVar10 + fVar22 * fVar6 + fVar23 * fVar9;
    pfVar33[3] = fVar16 * fVar15 + fVar24 * fVar14 + fVar22 * fVar12 + fVar23 * fVar13;
    lVar32 = lVar32 + 0x10;
    lVar35 = lVar35 + -1;
  } while (lVar35 != 0);
  draw::FastDrawQuad(uVar25 - 0x140,0,0,EffectTexHeaders,9);
  return;
}



//==== 00464590  ns=mobyupdate_helpers  size=0x4ac
// sig: undefined M800_00464590(void)
// callers(1): 0046573c mobyupdate_helpers::M800_0046573c
// callees(10): 000685c4 draw::GetEffectTex; 00071170 stub::STUB_00071170; 00074604 draw::DrawMeshSet; 00174f80 vuchain::SetGSReg; 00463ef8 mobyupdate_helpers::M800_00463ef8; 00502e50 FUN_00502e50; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f98 FUN_00502f98; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M800_00464590(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  ulonglong *puVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  int iVar12;
  longlong lVar11;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  uint *puVar17;
  float *pfVar18;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar19;
  double dVar20;
  double dVar21;
  ulonglong in_f17;
  ulonglong in_f18;
  double dVar22;
  ulonglong in_f19;
  double dVar23;
  double dVar24;
  ulonglong in_f20;
  double dVar25;
  ulonglong in_f21;
  double dVar26;
  ulonglong in_f22;
  double dVar27;
  ulonglong in_f23;
  double dVar28;
  ulonglong in_f24;
  double dVar29;
  ulonglong in_f25;
  double dVar30;
  ulonglong in_f26;
  double dVar31;
  ulonglong in_f27;
  double dVar32;
  ulonglong in_f28;
  double dVar33;
  ulonglong in_f29;
  double dVar34;
  ulonglong in_f30;
  double dVar35;
  ulonglong in_f31;
  double dVar36;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar11 = uVar9 - 0x620;
  puVar5 = (ulonglong *)lVar11;
  *puVar5 = uVar9;
  puVar5[0xc6] = in_LR;
  puVar5[0xb5] = in_f17;
  puVar5[0xb6] = in_f18;
  puVar5[0xb7] = in_f19;
  puVar5[0xb8] = in_f20;
  puVar5[0xb9] = in_f21;
  puVar5[0xba] = in_f22;
  puVar5[0xbb] = in_f23;
  puVar5[0xbc] = in_f24;
  puVar5[0xbd] = in_f25;
  puVar5[0xbe] = in_f26;
  puVar5[0xbf] = in_f27;
  puVar5[0xc0] = in_f28;
  puVar5[0xc1] = in_f29;
  puVar5[0xc2] = in_f30;
  puVar5[0xc3] = in_f31;
  puVar5[0xb4] = unaff_r31;
  puVar5[0xb3] = unaff_r30;
  iVar4 = *(int *)(param_1 + 0x78);
  puVar5[0xb2] = unaff_r29;
  M800_00463ef8();
  dVar27 = (double)*(float *)(iVar4 + 0xd0);
  dVar34 = (double)*(float *)(iVar4 + 0xa8);
  dVar25 = (double)*(float *)(iVar4 + 0xd8);
  dVar36 = (double)*(float *)(iVar4 + 0xa0);
  dVar35 = (double)*(float *)(iVar4 + 0xa4);
  dVar26 = (double)*(float *)(iVar4 + 0xd4);
  dVar23 = 0.0;
  fVar1 = (float)((double)(float)(dVar25 - (double)GameCamera.posZ) * dVar36 -
                 (double)(float)((double)(float)(dVar27 - (double)GameCamera.posX) * dVar34));
  fVar2 = (float)((double)(float)(dVar26 - (double)GameCamera.posY) * dVar34 -
                 (double)(float)((double)(float)(dVar25 - (double)GameCamera.posZ) * dVar35));
  fVar3 = (float)((double)(float)(dVar27 - (double)GameCamera.posX) * dVar35 -
                 (double)(float)((double)(float)(dVar26 - (double)GameCamera.posY) * dVar36));
  fVar6 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  dVar22 = dVar23;
  dVar24 = dVar23;
  if (SQRT(fVar6) != 0.0) {
    fVar7 = 1.0 / SQRT(fVar6);
    fVar7 = -(fVar6 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    fVar7 = -(fVar6 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    fVar7 = -(fVar6 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    dVar23 = (double)(fVar2 * fVar7);
    dVar22 = (double)(fVar1 * fVar7);
    dVar24 = (double)(fVar3 * fVar7);
  }
  dVar33 = (double)(float)(dVar34 * dVar22);
  dVar31 = (double)(float)(dVar36 * dVar24);
  dVar29 = (double)(float)(dVar35 * dVar23);
  dVar32 = (double)(float)(dVar35 * dVar24 - dVar33);
  dVar30 = (double)(float)(dVar34 * dVar23 - dVar31);
  dVar28 = (double)(float)(dVar36 * dVar22 - dVar29);
  uVar10 = draw::GetEffectTex(0x16);
  vuchain::SetGSReg(0x18,uVar10);
  uVar10 = idol_draw::PackCmd(0,2,0,1,0x80);
  vuchain::SetGSReg(3,uVar10);
  uVar10 = FUN_00502f08(1,1,0,0,0,0);
  vuchain::SetGSReg(6,uVar10);
  uVar10 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  vuchain::SetGSReg(0x1a,uVar10);
  uVar10 = FUN_00502f98(0,0,0,0,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar10);
  uVar10 = FUN_00502e50(0);
  vuchain::SetGSReg(8,uVar10);
  stub::STUB_00071170();
  iVar8 = DAT_00873ecc;
  iVar12 = 0;
  if (0 < DAT_00873ecc) {
    lVar15 = uVar9 - 0x464;
    pfVar18 = (float *)&DAT_00873ed0;
    lVar16 = uVar9 - 0x460;
    puVar17 = &DAT_00874538;
    lVar13 = lVar11;
    lVar14 = lVar11;
    do {
      dVar19 = (double)*pfVar18;
      dVar20 = (double)pfVar18[2];
      dVar21 = (double)pfVar18[1];
      *(float *)((int)lVar13 + 0x1b8) =
           (float)(dVar21 * dVar23 +
                  (double)(float)(dVar20 * dVar32 + (double)(float)(dVar19 * dVar36 + dVar27)));
      *(float *)lVar15 =
           (float)(dVar21 * dVar22 +
                  (double)(float)(dVar20 * dVar30 + (double)(float)(dVar19 * dVar35 + dVar26)));
      *(float *)lVar16 =
           (float)(dVar21 * dVar24 +
                  (double)(float)(dVar20 * dVar28 + (double)(float)(dVar19 * dVar34 + dVar25)));
      if (*(short *)(iVar4 + 0x202) != 0) {
        *(uint *)((int)lVar14 + 0x70) = *puVar17 & 0xff0000ff;
      }
      iVar12 = iVar12 + 1;
      pfVar18 = pfVar18 + 3;
      puVar17 = puVar17 + 1;
      lVar15 = lVar15 + 0xc;
      lVar16 = lVar16 + 0xc;
      lVar13 = lVar13 + 0xc;
      lVar14 = lVar14 + 4;
    } while (iVar12 < iVar8);
  }
  lVar13 = uVar9 - 0x468;
  if (*(short *)(iVar4 + 0x202) == 0) {
    draw::DrawMeshSet(iVar8,lVar13,&DAT_00874538,&DAT_008742a8,9);
  }
  else {
    draw::DrawMeshSet(iVar8,lVar13,uVar9 - 0x5b0,&DAT_008742a8,9);
  }
  iVar8 = DAT_00873ecc;
  if (0 < DAT_00873ecc) {
    pfVar18 = (float *)&DAT_00873ed0;
    lVar14 = uVar9 - 0x464;
    lVar15 = uVar9 - 0x460;
    iVar12 = DAT_00873ecc;
    do {
      dVar28 = (double)pfVar18[1];
      dVar30 = (double)*pfVar18;
      fVar1 = pfVar18[2];
      iVar12 = iVar12 + -1;
      pfVar18 = pfVar18 + 3;
      *(float *)((int)lVar11 + 0x1b8) =
           (float)((double)(fVar1 * -(float)(dVar35 * dVar24 - dVar33) +
                           (float)(dVar30 * dVar36 + -(double)(float)(dVar28 * dVar23))) + dVar27);
      *(float *)lVar14 =
           (float)((double)(fVar1 * -(float)(dVar34 * dVar23 - dVar31) +
                           (float)(dVar30 * dVar35 + -(double)(float)(dVar28 * dVar22))) + dVar26);
      lVar11 = lVar11 + 0xc;
      *(float *)lVar15 =
           (float)((double)(fVar1 * -(float)(dVar36 * dVar22 - dVar29) +
                           (float)(dVar30 * dVar34 + -(double)(float)(dVar28 * dVar24))) + dVar25);
      lVar14 = lVar14 + 0xc;
      lVar15 = lVar15 + 0xc;
    } while (0 < iVar12);
  }
  if (*(short *)(iVar4 + 0x202) == 0) {
    draw::DrawMeshSet(iVar8,lVar13,&DAT_00874538,&DAT_008742a8,9);
  }
  else {
    draw::DrawMeshSet(iVar8,lVar13,uVar9 - 0x5b0,&DAT_008742a8,9);
  }
  return;
}



//==== 00464a70  ns=mobyupdate_helpers  size=0x904
// sig: undefined M800_00464a70(void)
// callers(1): 0046573c mobyupdate_helpers::M800_0046573c
// callees(9): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00174f80 vuchain::SetGSReg; 00500b64 fastfunc::FastEulerToMtx; 00502578 fastfunc::FastWrapRot; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f98 FUN_00502f98; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M800_00464a70(int param_1)

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
  int iVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  float *pfVar17;
  longlong lVar16;
  longlong lVar18;
  uint uVar19;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  longlong lVar20;
  float *pfVar21;
  ulonglong unaff_r27;
  int iVar22;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar23;
  ulonglong unaff_r30;
  ulonglong uVar24;
  ulonglong unaff_r31;
  ulonglong uVar25;
  ulonglong in_LR;
  longlong lVar26;
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
  ulonglong in_f14;
  ulonglong in_f15;
  double dVar37;
  ulonglong in_f16;
  double dVar38;
  ulonglong in_f17;
  ulonglong in_f18;
  double dVar39;
  ulonglong in_f19;
  double dVar40;
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
  ulonglong in_f27;
  double dVar46;
  ulonglong in_f28;
  double dVar47;
  ulonglong in_f29;
  double dVar48;
  ulonglong in_f30;
  double dVar49;
  ulonglong in_f31;
  double dVar50;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar16 = uVar13 - 0x2b0;
  puVar7 = (ulonglong *)lVar16;
  *puVar7 = uVar13;
  puVar7[0x58] = in_LR;
  puVar7[0x44] = in_f14;
  puVar7[0x45] = in_f15;
  puVar7[0x46] = in_f16;
  puVar7[0x47] = in_f17;
  puVar7[0x48] = in_f18;
  puVar7[0x49] = in_f19;
  puVar7[0x4a] = in_f20;
  puVar7[0x4b] = in_f21;
  puVar7[0x4c] = in_f22;
  puVar7[0x4d] = in_f23;
  puVar7[0x4e] = in_f24;
  puVar7[0x4f] = in_f25;
  puVar7[0x50] = in_f26;
  puVar7[0x51] = in_f27;
  puVar7[0x52] = in_f28;
  puVar7[0x53] = in_f29;
  puVar7[0x54] = in_f30;
  puVar7[0x55] = in_f31;
  puVar7[0x42] = unaff_r30;
  puVar7[0x43] = unaff_r31;
  iVar22 = *(int *)(param_1 + 0x78);
  fVar2 = *(float *)(iVar22 + 0x160);
  fVar1 = fVar2 + 1.5707963;
  fVar6 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar6 = fVar2;
  }
  fVar8 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar8 = fVar1;
  }
  fVar3 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar6 < 0.0) {
    fVar3 = fVar6;
  }
  fVar6 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar8 < 0.0) {
    fVar6 = fVar8;
  }
  fVar1 = fVar3 * fVar3;
  dVar50 = (double)*(float *)(iVar22 + 0x1d4);
  dVar48 = (double)(*(float *)(iVar22 + 0x1dc) + 0.125);
  dVar49 = (double)*(float *)(iVar22 + 0x1d8);
  fVar8 = fVar6 * fVar6;
  fVar9 = fVar1 * fVar1 * fVar3;
  fVar5 = fVar8 * fVar8 * fVar6;
  fVar10 = fVar1 * fVar9;
  fVar4 = fVar8 * fVar5;
  dVar46 = (double)(fVar1 * fVar10 * 2.601887e-06 +
                   fVar10 * -0.0001980741 +
                   fVar9 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3);
  puVar7[0x41] = unaff_r29;
  puVar7[0x40] = unaff_r28;
  puVar7[0x3f] = unaff_r27;
  puVar7[0x3e] = unaff_r26;
  puVar7[0x3d] = unaff_r25;
  puVar7[0x3c] = unaff_r24;
  dVar47 = (double)(fVar8 * fVar4 * 2.601887e-06 +
                   fVar4 * -0.0001980741 +
                   fVar5 * 0.0083330255 + fVar8 * fVar6 * -0.16666657 + fVar6);
  dVar29 = (double)fastfunc::FastWrapRot(fVar2,-0.06981317);
  *(float *)(iVar22 + 0x160) = (float)dVar29;
  uVar14 = draw::GetEffectTex(0xb);
  puVar7[0x25] = uVar14;
  uVar14 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar7[0x26] = uVar14;
  uVar14 = FUN_00502f08(0,0,0,0,0,0);
  puVar7[0x24] = uVar14;
  uVar14 = idol_draw::PackCmd(0,2,0,1,0x80);
  fVar2 = (float)((double)GameCamera.posX - dVar50);
  fVar1 = (float)((double)GameCamera.posY - dVar49);
  puVar7[0x27] = uVar14;
  *(float *)((int)puVar7 + 0x14c) = fVar2;
  *(float *)(puVar7 + 0x2a) = fVar1;
  dVar29 = (double)GameCamera.posZ;
  *(float *)((int)puVar7 + 0x154) = ABS(fVar2) - ABS(fVar1);
  fVar8 = 0.0;
  uVar14 = (ulonglong)(*(uint *)((int)puVar7 + 0x14c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x154) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar7 + 0x2a) >> 0x1d) & 4;
  fVar6 = ABS(*(float *)((int)puVar7 + 0x14c));
  if (*(float *)((int)puVar7 + 0x154) - 0.0 < 0.0) {
    fVar6 = ABS(fVar1);
  }
  fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
  fVar3 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  fVar4 = ABS(*(float *)(puVar7 + 0x2a));
  if (*(float *)((int)puVar7 + 0x154) - 0.0 < 0.0) {
    fVar4 = ABS(fVar2);
  }
  fVar9 = fVar8;
  if (0.0 < fVar6) {
    lVar20 = uVar13 - 0x2a0;
    lVar27 = uVar13 - 0x138;
    lVar18 = uVar13 - 0x128;
    lVar26 = 2;
    fVar6 = (fVar4 - fVar6) / (fVar4 + fVar6);
    fVar4 = fVar6 * fVar6;
    *(float *)((int)puVar7 + 0x184) = fVar6;
    *(float *)((int)puVar7 + 0x17c) = fVar6;
    *(float *)(puVar7 + 0x30) = fVar6;
    *(float *)(puVar7 + 0x2f) = fVar6;
    fVar6 = fVar4 * fVar4;
    *(float *)((int)puVar7 + 0x17c) = *(float *)((int)puVar7 + 0x17c) * fVar4;
    *(float *)(puVar7 + 0x30) = *(float *)(puVar7 + 0x30) * fVar6;
    *(float *)((int)puVar7 + 0x184) = *(float *)((int)puVar7 + 0x184) * fVar6 * fVar4;
    do {
      *(float *)((int)lVar20 + 0x178) = *(float *)((int)lVar20 + 0x168) * fVar6 * fVar6;
      iVar22 = (int)lVar27;
      lVar20 = lVar20 + 8;
      lVar27 = lVar27 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)(iVar22 + 4) * fVar6 * fVar6;
      lVar18 = lVar18 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar26 = 4;
    lVar18 = uVar13 - 0x138;
    pfVar21 = (float *)&DAT_007358e0;
    lVar20 = lVar16;
    lVar27 = lVar18;
    do {
      fVar6 = *pfVar21;
      fVar4 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar20 + 0x178) = *(float *)((int)lVar20 + 0x178) * fVar6;
      lVar20 = lVar20 + 8;
      *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar4;
      lVar27 = lVar27 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar27 = 2;
    lVar20 = lVar16;
    fVar6 = fVar8;
    do {
      iVar22 = (int)lVar20;
      lVar20 = lVar20 + 0x10;
      iVar11 = (int)lVar18;
      lVar18 = lVar18 + 0x10;
      fVar6 = fVar6 + *(float *)(iVar22 + 0x178) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
              *(float *)(iVar11 + 0xc);
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    fVar9 = (fVar6 + 0.7853982) * fVar5 + fVar3;
  }
  *(float *)((int)puVar7 + 0x144) = (float)(dVar29 - dVar48);
  *(float *)(puVar7 + 0xf) = fVar9;
  fVar6 = ABS((float)(dVar29 - dVar48));
  fVar2 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
  fVar1 = ABS(fVar2);
  *(float *)(puVar7 + 0x28) = fVar2;
  *(float *)(puVar7 + 0x29) = fVar1 - fVar6;
  uVar14 = (ulonglong)(*(uint *)(puVar7 + 0x28) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar7 + 0x29) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x144) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)(puVar7 + 0x28));
  if (*(float *)(puVar7 + 0x29) - 0.0 < 0.0) {
    fVar2 = fVar6;
  }
  fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
  fVar3 = ABS(*(float *)((int)puVar7 + 0x144));
  if (*(float *)(puVar7 + 0x29) - 0.0 < 0.0) {
    fVar3 = fVar1;
  }
  fVar1 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  if (0.0 < fVar2) {
    lVar20 = uVar13 - 0x2a0;
    lVar27 = uVar13 - 0x158;
    lVar18 = uVar13 - 0x148;
    lVar26 = 2;
    fVar2 = (fVar3 - fVar2) / (fVar3 + fVar2);
    fVar3 = fVar2 * fVar2;
    *(float *)((int)puVar7 + 0x164) = fVar2;
    *(float *)((int)puVar7 + 0x15c) = fVar2;
    *(float *)(puVar7 + 0x2c) = fVar2;
    *(float *)(puVar7 + 0x2b) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)((int)puVar7 + 0x15c) = *(float *)((int)puVar7 + 0x15c) * fVar3;
    *(float *)(puVar7 + 0x2c) = *(float *)(puVar7 + 0x2c) * fVar2;
    *(float *)((int)puVar7 + 0x164) = *(float *)((int)puVar7 + 0x164) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar20 + 0x158) = *(float *)((int)lVar20 + 0x148) * fVar2 * fVar2;
      iVar22 = (int)lVar27;
      lVar20 = lVar20 + 8;
      lVar27 = lVar27 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)(iVar22 + 4) * fVar2 * fVar2;
      lVar18 = lVar18 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar26 = 4;
    lVar18 = uVar13 - 0x158;
    pfVar21 = (float *)&DAT_007358e0;
    lVar20 = lVar16;
    lVar27 = lVar18;
    do {
      fVar2 = *pfVar21;
      fVar3 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar20 + 0x158) = *(float *)((int)lVar20 + 0x158) * fVar2;
      lVar20 = lVar20 + 8;
      *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar3;
      lVar27 = lVar27 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar20 = 2;
    do {
      iVar22 = (int)lVar16;
      iVar11 = (int)lVar18;
      lVar16 = lVar16 + 0x10;
      lVar18 = lVar18 + 0x10;
      fVar8 = fVar8 + *(float *)(iVar22 + 0x158) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
              *(float *)(iVar11 + 0xc);
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    fVar8 = (fVar8 + 0.7853982) * fVar6 + fVar1;
  }
  iVar22 = 0;
  *(undefined4 *)(puVar7 + 0xe) = 0;
  *(float *)((int)puVar7 + 0x74) = -fVar8;
  fastfunc::FastEulerToMtx(uVar13 - 0x230,uVar13 - 0x240);
  puVar7[0x3a] = (ulonglong)(double)*(float *)(puVar7 + 0x10);
  puVar7[0x39] = (ulonglong)(double)*(float *)((int)puVar7 + 0x84);
  puVar7[0x38] = (ulonglong)(double)*(float *)(puVar7 + 0x11);
  puVar7[0x37] = (ulonglong)(double)*(float *)((int)puVar7 + 0x8c);
  puVar7[0x36] = (ulonglong)(double)*(float *)(puVar7 + 0x12);
  dVar45 = (double)*(float *)(puVar7 + 0x14);
  puVar7[0x35] = (ulonglong)(double)*(float *)((int)puVar7 + 0x94);
  dVar44 = (double)*(float *)((int)puVar7 + 0xa4);
  puVar7[0x34] = (ulonglong)(double)*(float *)(puVar7 + 0x13);
  dVar43 = (double)*(float *)(puVar7 + 0x15);
  puVar7[0x33] = (ulonglong)(double)*(float *)((int)puVar7 + 0x9c);
  dVar42 = (double)*(float *)((int)puVar7 + 0xac);
  *(undefined4 *)(puVar7 + 0x20) = 0x3f800000;
  *(undefined4 *)((int)puVar7 + 0x104) = 0x3f800000;
  *(undefined4 *)(puVar7 + 0x21) = 0;
  *(undefined4 *)((int)puVar7 + 0x10c) = 0x3f800000;
  *(undefined4 *)(puVar7 + 0x22) = 0x3f800000;
  *(undefined4 *)((int)puVar7 + 0x114) = 0;
  *(undefined4 *)(puVar7 + 0x23) = 0;
  dVar41 = (double)DAT_00874b08;
  *(undefined4 *)((int)puVar7 + 0x11c) = 0;
  dVar29 = (double)DAT_00874b00;
  uVar25 = (ulonglong)DAT_00874b10;
  uVar24 = (ulonglong)DAT_00874b14;
  uVar23 = (ulonglong)DAT_00874b18;
  uVar14 = (ulonglong)DAT_00874b1c;
  uVar15 = FUN_00502f98(1,0,0,1,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar15);
  do {
    dVar34 = (double)puVar7[0x3a];
    dVar35 = (double)puVar7[0x36];
    dVar36 = (double)puVar7[0x39];
    lVar20 = uVar13 - 0x200;
    uVar19 = (uint)((uVar24 & 0xffffffff) << 8) | (uint)uVar25 |
             (uint)((uVar14 & 0xffffffff) << 0x18) | (uint)((uVar23 & 0xffffffff) << 0x10);
    *(uint *)((int)puVar7 + 0xfc) = uVar19;
    pfVar21 = (float *)&DAT_00874a80;
    *(uint *)(puVar7 + 0x1f) = uVar19;
    lVar27 = 4;
    *(uint *)((int)puVar7 + 0xf4) = uVar19;
    *(uint *)(puVar7 + 0x1e) = uVar19;
    dVar28 = (double)puVar7[0x35];
    dVar39 = (double)puVar7[0x34];
    dVar40 = (double)puVar7[0x38];
    dVar38 = (double)puVar7[0x37];
    dVar37 = (double)puVar7[0x33];
    lVar16 = lVar20;
    do {
      dVar30 = (double)*pfVar21;
      pfVar17 = (float *)lVar16;
      *pfVar17 = (float)(dVar30 * dVar41);
      dVar31 = (double)pfVar21[1];
      pfVar17[1] = (float)(dVar31 * dVar41);
      dVar32 = (double)pfVar21[2];
      pfVar17[2] = (float)(dVar32 * dVar41);
      dVar33 = (double)pfVar21[3];
      pfVar21 = pfVar21 + 4;
      pfVar17[2] = (float)(dVar33 * dVar48 +
                          (double)(float)(dVar32 * (double)(float)(dVar41 * dVar43) +
                                         (double)(float)(dVar30 * (double)(float)(dVar41 * dVar40) +
                                                        (double)(float)(dVar31 * (double)(float)(
                                                  dVar41 * dVar39)))));
      *pfVar17 = (float)(dVar29 * dVar47 +
                        (double)(float)(dVar33 * dVar50 +
                                       (double)(float)(dVar32 * (double)(float)(dVar41 * dVar45) +
                                                      (double)(float)(dVar30 * (double)(float)(
                                                  dVar41 * dVar34) +
                                                  (double)(float)(dVar31 * (double)(float)(dVar41 * 
                                                  dVar35))))));
      pfVar17[1] = (float)(dVar29 * dVar46 +
                          (double)(float)(dVar33 * dVar49 +
                                         (double)(float)(dVar32 * (double)(float)(dVar41 * dVar44) +
                                                        (double)(float)(dVar30 * (double)(float)(
                                                  dVar41 * dVar36) +
                                                  (double)(float)(dVar31 * (double)(float)(dVar41 * 
                                                  dVar28))))));
      pfVar17[3] = (float)(dVar31 * (double)(float)(dVar41 * dVar37) +
                          (double)(float)(dVar32 * (double)(float)(dVar41 * dVar42) +
                                         (double)(float)(dVar30 * (double)(float)(dVar41 * dVar38) +
                                                        dVar33)));
      lVar16 = lVar16 + 0x10;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    draw::FastDrawQuad(uVar13 - 0x200,0,0,EffectTexHeaders,9);
    uVar12 = EffectTexHeaders;
    lVar16 = 4;
    do {
      pfVar21 = (float *)lVar20;
      *pfVar21 = (float)((double)(float)(dVar29 * -2.0) * dVar47 + (double)*pfVar21);
      pfVar21[1] = (float)((double)(float)(dVar29 * -2.0) * dVar46 + (double)pfVar21[1]);
      lVar20 = lVar20 + 0x10;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    draw::FastDrawQuad(uVar13 - 0x200,0,0,uVar12,9);
    lVar16 = uVar25 - DAT_010ccf34;
    dVar41 = (double)(float)((double)DAT_00874b0c + dVar41);
    dVar29 = (double)(float)((double)DAT_00874b04 + dVar29);
    lVar27 = uVar24 - DAT_00874b20;
    lVar20 = uVar23 - DAT_00874b24;
    uVar25 = lVar16 + ((longlong)(int)lVar16 >> 0x3f & -lVar16);
    lVar16 = uVar14 - DAT_00874b28;
    uVar24 = lVar27 + ((longlong)(int)lVar27 >> 0x3f & -lVar27);
    iVar22 = iVar22 + 1;
    uVar23 = lVar20 + ((longlong)(int)lVar20 >> 0x3f & -lVar20);
    uVar14 = lVar16 + ((longlong)(int)lVar16 >> 0x3f & -lVar16);
  } while (iVar22 < 0x10);
  return;
}



//==== 00465380  ns=mobyupdate_helpers  size=0x2e4
// sig: undefined M800_00465380(void)
// callers(0): 
// callees(8): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00174f80 vuchain::SetGSReg; 00502e50 FUN_00502e50; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f98 FUN_00502f98; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M800_00465380(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined8 uVar7;
  float *pfVar8;
  float *pfVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float local_c0 [38];
  
  iVar6 = *(int *)(param_1 + 0x78);
  dVar15 = (double)*(float *)(iVar6 + 0x90);
  dVar16 = (double)*(float *)(iVar6 + 0x94);
  dVar17 = (double)(*(float *)(iVar6 + 0x98) + 0.01);
  draw::GetEffectTex(0xb);
  stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(0,0,0,0,0,0);
  idol_draw::PackCmd(0,2,0,1,0x80);
  uVar7 = FUN_00502e50(0);
  vuchain::SetGSReg(8,uVar7);
  uVar7 = FUN_00502f98(1,0,0,1,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar7);
  fVar2 = (float)((double)GameCamera.posY - dVar16);
  fVar3 = (float)((double)GameCamera.posX - dVar15);
  fVar4 = (float)((double)GameCamera.posZ - dVar17);
  dVar12 = 0.0;
  dVar14 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  if (0.0 < dVar14) {
    dVar11 = (double)(float)(dVar14 - (double)DAT_00874b44);
    dVar13 = (double)*(float *)(iVar6 + 0x218);
    if ((dVar11 < (double)*(float *)(iVar6 + 0x218)) && (dVar13 = dVar11, dVar11 < 0.0)) {
      dVar13 = dVar12;
    }
    fVar1 = (float)(dVar13 / dVar14);
    dVar13 = dVar12;
    if (0.0 - dVar14 < 0.0) {
      dVar13 = (double)(fVar4 * fVar1);
    }
    dVar11 = dVar12;
    if (0.0 - dVar14 < 0.0) {
      dVar11 = (double)(fVar2 * fVar1);
    }
    if (0.0 - dVar14 < 0.0) {
      dVar12 = (double)(fVar3 * fVar1);
    }
    if (dVar14 - 0.0 < 0.0) {
      dVar13 = (double)(fVar4 * fVar1);
    }
    if (dVar14 - 0.0 < 0.0) {
      dVar11 = (double)(fVar2 * fVar1);
    }
    if (dVar14 - 0.0 < 0.0) {
      dVar12 = (double)(fVar3 * fVar1);
    }
    dVar17 = (double)(float)(dVar17 + dVar13);
    dVar16 = (double)(float)(dVar16 + dVar11);
    dVar15 = (double)(float)(dVar15 + dVar12);
  }
  pfVar8 = (float *)&DAT_00874ac0;
  lVar10 = 4;
  pfVar9 = local_c0;
  do {
    fVar2 = *(float *)(iVar6 + 0x214);
    fVar3 = *pfVar8;
    *pfVar9 = fVar3 * fVar2;
    fVar4 = pfVar8[1];
    pfVar9[1] = fVar4 * fVar2;
    fVar1 = pfVar8[2];
    pfVar9[2] = fVar1 * fVar2;
    fVar5 = pfVar8[3];
    *pfVar9 = (float)((double)(fVar3 * fVar2) + dVar15);
    pfVar9[1] = (float)((double)(fVar4 * fVar2) + dVar16);
    pfVar8 = pfVar8 + 4;
    pfVar9[3] = fVar5;
    pfVar9[2] = (float)((double)(fVar1 * fVar2) + dVar17);
    pfVar9 = pfVar9 + 4;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  draw::FastDrawQuad(local_c0,0,0,EffectTexHeaders,9);
  return;
}



//==== 00465668  ns=mobyupdate_helpers  size=0xd4
// sig: undefined M800_00465668(void)
// callers(1): 0046573c mobyupdate_helpers::M800_0046573c
// callees(0): 

MobyInstance * mobyupdate_helpers::M800_00465668(longlong param_1)

{
  float fVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  ushort *puVar5;
  MobyInstance *pMVar6;
  int *piVar7;
  int iVar8;
  MobyInstance *pMVar9;
  
  pMVar6 = (MobyInstance *)0x0;
  puVar5 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  if (puVar5 != (ushort *)0x0) {
    fVar1 = 0.0;
    do {
      iVar8 = 0;
      piVar7 = &DAT_010ccee4;
      pMVar9 = MobyInstance + (*puVar5 & 0x7fff);
      do {
        if ((int)(short)pMVar9->uid == *piVar7) goto LAB_00465720;
        iVar8 = iVar8 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar8 < 0x14);
      fVar4 = GameCamera.posY - (pMVar9->pos).y;
      fVar3 = GameCamera.posX - (pMVar9->pos).x;
      fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4);
      if (fVar1 < fVar3) {
        fVar1 = fVar3;
        pMVar6 = pMVar9;
      }
LAB_00465720:
      uVar2 = *puVar5;
      puVar5 = puVar5 + 1;
    } while (-1 < (short)uVar2);
  }
  return pMVar6;
}



//==== 0046573c  ns=mobyupdate_helpers  size=0x110
// sig: undefined M800_0046573c(void)
// callers(0): 
// callees(3): 00464590 mobyupdate_helpers::M800_00464590; 00464a70 mobyupdate_helpers::M800_00464a70; 00465668 mobyupdate_helpers::M800_00465668

void mobyupdate_helpers::M800_0046573c(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  
  piVar7 = &DAT_010ccee4;
  iVar1 = *(int *)(param_1 + 0x78);
  lVar8 = 5;
  piVar4 = piVar7;
  do {
    *piVar4 = -1;
    piVar4[1] = -1;
    piVar4[2] = -1;
    piVar4[3] = -1;
    piVar4 = piVar4 + 4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  iVar6 = 0;
  if (0 < *(short *)(iVar1 + 0x20a)) {
    do {
      iVar5 = M800_00465668(*(undefined1 *)(param_1 + 0x21),&DAT_010ccee4);
      *piVar7 = (int)*(short *)(iVar5 + 0xb2);
      iVar2 = *(int *)(iVar5 + 0x78);
      uVar3 = *(uint *)(iVar2 + 0x20c);
      if ((uVar3 & 8) != 0) {
        M800_00464a70(iVar5);
        uVar3 = *(uint *)(iVar2 + 0x20c);
      }
      if ((uVar3 & 2) != 0) {
        M800_00464590(iVar5);
      }
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar6 < *(short *)(iVar1 + 0x20a));
  }
  return;
}



//==== 0046584c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M800_0046584c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M800_0046584c(void)

{
  DAT_00874b98 = 0x10000;
  return;
}



//==== 00465860  ns=mobyupdate_unsorted  size=0xfc
// sig: undefined UpdateMoby_800(MobyInstance * moby)
// callers(0): 
// callees(6): 000efb38 mobyfunc::DeleteMoby; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 0010675c mobyutil::MB_damage; 0011a100 mobyutil::MB_DistributeBoltsNearHero; 0011aa78 mobyutil::MB_SpawnDebris; 0015d12c sound::PlayMobySound

/* Moby 800 */

void mobyupdate_unsorted::UpdateMoby_800(MobyInstance *moby)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = mobyutil::MB_damage(moby,0x10000,0);
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    if ((iVar2 != 0) && (0 < *(int *)(iVar2 + 0x2c))) {
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    sound::PlayMobySound(0,0,moby);
    mobyutil::MB_SpawnBoltsFromCrate(moby,0,0xffffffffffffffff);
    mobyutil::MB_DistributeBoltsNearHero(moby);
    mobyutil::MB_SpawnDebris(moby,0x74e,1,0x74e,1,0xb,2);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 00465968  ns=mobyupdate_helpers  size=0x168
// sig: undefined M804_00465968(void)
// callers(0): 
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f1ec8 mobyfunc::SetColorOfMoby; 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance * mobyupdate_helpers::M804_00465968(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  f32 fVar3;
  f32 fVar4;
  f32 fVar5;
  f32 fVar6;
  int *piVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  MobyInstance *pMVar12;
  
  pMVar12 = mobyfunc::CreateMoby(DOOR_LEFT|BLARG_GUNNER);
  if (pMVar12 != (MobyInstance *)0x0) {
    piVar7 = (int *)pMVar12->pVar;
    *piVar7 = param_1;
    pMVar12->updateDistance = '\x7f';
    pMVar12->drawDistance = 0x7f;
    pMVar12->enabled = '\x01';
    (pMVar12->pos).w = 0.0;
    (pMVar12->pos).z = 0.0;
    (pMVar12->pos).y = 0.0;
    (pMVar12->pos).x = 0.0;
    fVar1 = (float)piVar7[1];
    fVar2 = *(float *)(param_1 + 0xdc);
    pfVar8 = *(float **)(param_1 + 0x78);
    fVar9 = -(fVar1 * *(float *)(param_1 + 0xd0));
    fVar10 = -(fVar1 * *(float *)(param_1 + 0xd4));
    fVar11 = -(fVar1 * *(float *)(param_1 + 0xd8));
    (pMVar12->pos).y = -fVar1;
    (pMVar12->pos).x = fVar9;
    (pMVar12->pos).y = fVar10;
    (pMVar12->pos).z = fVar11;
    (pMVar12->pos).w = -(fVar1 * fVar2);
    fVar3 = *(f32 *)(param_1 + 0x40);
    fVar4 = *(f32 *)(param_1 + 0x44);
    fVar5 = *(f32 *)(param_1 + 0x48);
    fVar6 = *(f32 *)(param_1 + 0x4c);
    (pMVar12->pos).x = fVar9 + *pfVar8;
    (pMVar12->pos).y = fVar10 + pfVar8[1];
    fVar1 = pfVar8[2];
    (pMVar12->rotation).x = fVar3;
    (pMVar12->rotation).y = fVar4;
    (pMVar12->rotation).z = fVar5;
    (pMVar12->rotation).w = fVar6;
    (pMVar12->pos).z = fVar11 + fVar1;
    piVar7[2] = param_2;
    piVar7[1] = 0;
    piVar7[3] = (int)pMVar12->scale;
    pMVar12->scale = pMVar12->scale * 0.1;
    mobyfunc::SetColorOfMoby(pMVar12,0,0x40,0x80);
    mobyfunc::UpdateMobyTransform(pMVar12);
  }
  return pMVar12;
}



//==== 00465ae8  ns=mobyupdate_unsorted  size=0x21c
// sig: undefined UpdateMoby_804(MobyInstance * moby)
// callers(0): 
// callees(3): 000efb38 mobyfunc::DeleteMoby; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

/* Moby 804 */

void mobyupdate_unsorted::UpdateMoby_804(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  float *pfVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  s8 sVar10;
  
  piVar3 = (int *)moby->pVar;
  piVar3[1] = (int)(DAT_007bd344 * 2.0 * mobyutil::g_FrameTime + (float)piVar3[1]);
  iVar9 = fastfunc::FastDecTimerS32(piVar3 + 2);
  if ((((iVar9 != 0) || (DAT_007bd344 * 1.1 <= (float)piVar3[1])) || (iVar9 = *piVar3, iVar9 == 0))
     || (((*(short *)(iVar9 + 0xa6) != 0xb9 || (*(char *)(iVar9 + 0x20) == -2)) ||
         (*(char *)(iVar9 + 0x20) == -3)))) {
    mobyfunc::DeleteMoby(moby);
  }
  else {
    pfVar4 = *(float **)(iVar9 + 0x78);
    (moby->pos).w = 0.0;
    (moby->pos).z = 0.0;
    (moby->pos).y = 0.0;
    (moby->pos).x = 0.0;
    fVar1 = (float)piVar3[1];
    iVar9 = *piVar3;
    (moby->pos).y = -fVar1;
    fVar2 = *(float *)(iVar9 + 0xdc);
    fVar6 = -(fVar1 * *(float *)(iVar9 + 0xd0));
    fVar7 = -(fVar1 * *(float *)(iVar9 + 0xd4));
    fVar8 = -(fVar1 * *(float *)(iVar9 + 0xd8));
    (moby->pos).x = fVar6;
    (moby->pos).y = fVar7;
    (moby->pos).z = fVar8;
    (moby->pos).w = -(fVar1 * fVar2);
    iVar9 = *piVar3;
    (moby->pos).x = fVar6 + *pfVar4;
    (moby->pos).y = fVar7 + pfVar4[1];
    (moby->pos).z = fVar8 + pfVar4[2];
    (moby->rotation).x = *(f32 *)(iVar9 + 0x40);
    (moby->rotation).y = *(f32 *)(iVar9 + 0x44);
    (moby->rotation).z = *(f32 *)(iVar9 + 0x48);
    (moby->rotation).w = *(f32 *)(iVar9 + 0x4c);
    uVar5 = piVar3[1] >> 0x1f;
    fVar1 = (float)piVar3[1];
    if ((int)(((uint)((int)DAT_007bd344 >> 0x1f) >> 1 ^ (uint)DAT_007bd344) -
             ((int)DAT_007bd344 >> 0x1f)) < (int)((uVar5 >> 1 ^ piVar3[1]) - uVar5)) {
      sVar10 = fastfunc::FastDoubleToInt((double)(-((fVar1 - DAT_007bd344) * 10.0 - 1.0) * 127.0));
      moby->alpha = sVar10;
      fVar1 = (float)piVar3[1];
    }
    moby->scale = (float)piVar3[3] * 0.1 + ((float)piVar3[3] * fVar1) / DAT_007bd344;
  }
  return;
}



//==== 00465d10  ns=mobyupdate_unsorted  size=0x380
// sig: undefined UpdateMoby_805_CheckpointManager(MobyInstance * moby)
// callers(0): 
// callees(4): 000f1e50 mobyfunc::SetLevelFlag; 000ffb70 mobyutil::GetGroundZ; 00110b70 mobyutil::MB_IsPntInCuboid; 00151e70 respawn::SetSpawnPoint

/* Moby 805 */

void mobyupdate_unsorted::UpdateMoby_805_CheckpointManager(MobyInstance *moby)

{
  float fVar1;
  ushort uVar2;
  ushort uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  LevelId LVar7;
  int iVar9;
  ulonglong uVar8;
  uint uVar10;
  double dVar11;
  Vec4 local_30;
  
  uVar10 = 0;
  piVar4 = (int *)moby->pVar;
  uVar5 = piVar4[2];
  if ((uVar5 & 8) != 0) {
    return;
  }
  if (moby->setByGroup == '\0') {
    moby->setByGroup = '\x01';
    piVar4[5] = 0;
    return;
  }
  if ((piVar4[6] != -1) && (g_LevelFlags[Level][piVar4[6]] != -1)) {
    return;
  }
  if (((uVar5 & 2) != 0) && (g_heroType != '\x01')) {
    return;
  }
  if ((((uVar5 & 4) != 0) && (g_heroType != '\x03')) && (g_heroType != '\0')) {
    return;
  }
  if ((((uVar5 & 0x10) != 0) && (1 < hero::g_heroStateType)) && (hero::g_heroStateType != 9)) {
    return;
  }
  if ((Level == Quartu) && (g_heroType == '\x02')) {
    return;
  }
  iVar9 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar4);
  LVar7 = Level;
  uVar8 = (ulonglong)Level;
  if (iVar9 != 0) {
    uVar10 = (uint)((LZCOUNT(-piVar4[5]) << 0x3a) >> 0x3f) & 1;
  }
  piVar4[5] = (uint)(iVar9 != 0);
  if (((uVar10 == 0) && (uVar2 = moby->uid, (&DAT_00a545c4)[(short)uVar2] == '\0')) &&
     ((*(uint *)(&DAT_00a0cd1c + LVar7 * 0x100 + (int)((longlong)((int)(short)uVar2 >> 5) << 2)) &
      1 << (uVar2 & 0x1f)) == 0)) {
    piVar4[3] = 0;
  }
  else if ((piVar4[3] == 0) || (piVar4[4] != 0)) {
    piVar4[3] = 1;
    mobyfunc::SetLevelFlag(moby->levelFlagIdx);
    local_30.x = (moby->pos).x;
    local_30.y = (moby->pos).y;
    local_30.z = (moby->pos).z;
    local_30.w = (moby->pos).w;
    dVar11 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,&local_30,0);
    fVar1 = (moby->pos).z;
    local_30.z = (float)dVar11;
    if (2.0 < ABS((float)((double)fVar1 - dVar11))) {
      local_30.z = fVar1;
    }
    respawn::SetSpawnPoint(&local_30,(Vec4 *)&moby->rotation);
    uVar2 = moby->uid;
    (&DAT_00a53964)[(short)uVar2] = 0;
    (&DAT_00a545c4)[(short)uVar2] = 0;
    iVar6 = (int)((longlong)((int)(short)uVar2 >> 5) << 2);
    uVar8 = (ulonglong)Level;
    uVar3 = moby->uid;
    iVar9 = (int)((longlong)((int)(short)uVar3 >> 5) << 2);
    uVar5 = *(uint *)(&DAT_00a54dd0 + iVar9);
    *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar6) =
         *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar6) & ~(1 << (uVar2 & 0x1f));
    *(uint *)(&DAT_00a54dd0 + iVar9) = uVar5 & ~(1 << (uVar3 & 0x1f));
  }
  if ((moby->state == '\0') &&
     (g_LevelFlags[0][(int)(uVar8 << 4) + (uint)(byte)moby->levelFlagIdx] == -1)) {
    moby->state = '\x01';
  }
  return;
}



//==== 00466090  ns=mobyupdate_helpers  size=0x14
// sig: undefined M806_00466090(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M806_00466090(void)

{
  DAT_00874c0c = 0x10000;
  return;
}



//==== 004660a8  ns=Global  size=0x1c
// sig: undefined FUN_004660a8(void)
// callers(1): 0024f118 mobyupdate_unsorted::UpdateMoby_1341
// callees(0): 

bool FUN_004660a8(int param_1)

{
  return *(char *)(param_1 + 0x20) == '\x01';
}



//==== 004660c4  ns=Global  size=0x98
// sig: undefined Spawn_Moby806_NanotechBall(void)
// callers(1): 003a7360 mobyupdate_unsorted::UpdateMoby_500_Crate
// callees(1): 000efa28 mobyfunc::CreateMoby

MobyInstance * Spawn_Moby806_NanotechBall(int param_1)

{
  f32 fVar1;
  MobyModeBit MVar2;
  void *pvVar3;
  MobyInstance *pMVar4;
  
  if (*(byte *)(param_1 + 0x20) < 0x80) {
    pMVar4 = mobyfunc::CreateMoby(NANOTECH_BALL);
    if (pMVar4 != (MobyInstance *)0x0) {
      pMVar4->state = '\0';
      pMVar4->updateDistance = '@';
      pvVar3 = pMVar4->pVar;
      MVar2 = pMVar4->modeBits;
      (pMVar4->pos).x = *(f32 *)(param_1 + 0x10);
      fVar1 = *(f32 *)(param_1 + 0x14);
      *(int *)((int)pvVar3 + 0xc) = param_1;
      (pMVar4->pos).y = fVar1;
      fVar1 = *(f32 *)(param_1 + 0x18);
      pMVar4->modeBits = MVar2 | (UNK_40|DISABLED);
      pMVar4->collision = (ushort *)0x0;
      (pMVar4->pos).z = fVar1;
      (pMVar4->pos).w = *(f32 *)(param_1 + 0x1c);
    }
  }
  else {
    pMVar4 = (MobyInstance *)0x0;
  }
  return pMVar4;
}



//==== 0046615c  ns=Global  size=0xb4
// sig: undefined FUN_0046615c(void)
// callers(1): 003d1180 mobyupdate_unsorted::UpdateMoby_582
// callees(2): 000efa28 mobyfunc::CreateMoby; 00500b64 fastfunc::FastEulerToMtx

longlong FUN_0046615c(f32 *param_1)

{
  f32 fVar1;
  MobyModeBit MVar2;
  void *pvVar3;
  longlong lVar4;
  MobyInstance *pMVar5;
  
  pMVar5 = mobyfunc::CreateMoby(NANOTECH_BALL);
  lVar4 = (longlong)(int)pMVar5;
  if (pMVar5 != (MobyInstance *)0x0) {
    pMVar5->state = '\0';
    pMVar5->updateDistance = '@';
    pvVar3 = pMVar5->pVar;
    MVar2 = pMVar5->modeBits;
    (pMVar5->pos).x = *param_1;
    fVar1 = param_1[1];
    *(MobyInstance **)((int)pvVar3 + 0xc) = pMVar5;
    (pMVar5->pos).y = fVar1;
    fVar1 = param_1[2];
    pMVar5->modeBits = MVar2 | (UNK_40|DISABLED);
    pMVar5->collision = (ushort *)0x0;
    (pMVar5->pos).z = fVar1;
    fVar1 = param_1[3];
    (pMVar5->rotation).w = 0.0;
    (pMVar5->pos).w = fVar1;
    (pMVar5->rotation).z = 0.0;
    (pMVar5->rotation).y = 0.0;
    (pMVar5->rotation).x = 0.0;
    fastfunc::FastEulerToMtx(lVar4 + 0xc0,lVar4 + 0x40);
  }
  return lVar4;
}



//==== 00466220  ns=mobyupdate_helpers  size=0x248
// sig: undefined M806_00466220(void)
// callers(1): 00466e98 mobyupdate_unsorted::UpdateMoby_806
// callees(2): 00057820 collproc::CollLine; 0010af88 mobyutil::MB_isCrate

void mobyupdate_helpers::M806_00466220(int param_1)

{
  float fVar1;
  f32 fVar2;
  short sVar3;
  int iVar4;
  MobyInstance *pMVar5;
  int iVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  dVar9 = 0.5;
  fVar1 = *(float *)(param_1 + 0x18);
  iVar4 = *(int *)(param_1 + 0x78);
  iVar6 = collproc::CollLine(local_50,local_40,2,param_1,0);
  if (iVar6 == 0) {
    dVar10 = (double)((fVar1 + 0.5) - 1.5);
  }
  else {
    dVar10 = (double)CollOutput.ip.z;
    if (CollOutput.pMoby != (MobyInstance *)0x0) {
      bVar7 = mobyutil::MB_isCrate(CollOutput.pMoby);
      pMVar5 = CollOutput.pMoby;
      if (bVar7) {
        fVar2 = ((CollOutput.pMoby)->pos).x;
        *(f32 *)(iVar4 + 0x10) = fVar2;
        *(f32 *)(param_1 + 0x10) = fVar2;
        fVar2 = (pMVar5->pos).y;
        *(f32 *)(iVar4 + 0x14) = fVar2;
        *(f32 *)(param_1 + 0x14) = fVar2;
        dVar8 = (double)CollOutput.ip.z;
        *(float *)(param_1 + 0x18) = CollOutput.ip.z;
        *(float *)(iVar4 + 0x18) = (float)(dVar8 + dVar9);
      }
      else if (*(short *)(iVar4 + 10) == 0) {
        *(undefined2 *)(iVar4 + 10) = 1;
        *(float *)(iVar4 + 0x70) = *(float *)(param_1 + 0x10) - (pMVar5->pos).x;
        *(float *)(iVar4 + 0x74) = *(float *)(param_1 + 0x14) - (pMVar5->pos).y;
        *(float *)(iVar4 + 0x78) = *(float *)(param_1 + 0x18) - (pMVar5->pos).z;
      }
      else {
        fVar1 = ((CollOutput.pMoby)->pos).x + *(float *)(iVar4 + 0x70);
        *(float *)(iVar4 + 0x10) = fVar1;
        *(float *)(param_1 + 0x10) = fVar1;
        fVar1 = (pMVar5->pos).y + *(float *)(iVar4 + 0x74);
        *(float *)(iVar4 + 0x14) = fVar1;
        *(float *)(param_1 + 0x14) = fVar1;
        fVar1 = (pMVar5->pos).z + *(float *)(iVar4 + 0x78);
        *(float *)(param_1 + 0x18) = fVar1;
        *(float *)(iVar4 + 0x18) = (float)((double)fVar1 + dVar9);
      }
    }
  }
  dVar9 = (double)*(float *)(param_1 + 0x18);
  if (dVar10 < dVar9) {
    *(undefined1 *)(param_1 + 0xbc) = 1;
    sVar3 = *(short *)(iVar4 + 10);
    *(float *)(param_1 + 0x18) = (float)(dVar9 - (double)*(float *)(iVar4 + 0x50));
    fVar1 = DAT_0071f418 * 9.8 + *(float *)(iVar4 + 0x50);
    if (0.3 - fVar1 < 0.0) {
      fVar1 = 0.3;
    }
    *(float *)(iVar4 + 0x50) = fVar1;
    if (sVar3 != 0) {
      *(float *)(iVar4 + 0x78) = *(float *)(iVar4 + 0x78) - fVar1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xbc) = 0;
    if (*(short *)(iVar4 + 10) != 0) {
      *(float *)(iVar4 + 0x78) = *(float *)(iVar4 + 0x78) + (float)(dVar10 - dVar9);
    }
    *(float *)(param_1 + 0x18) = (float)dVar10;
    *(undefined4 *)(iVar4 + 0x50) = 0;
  }
  return;
}



//==== 00466468  ns=mobyupdate_helpers  size=0x1b0
// sig: undefined M806_00466468(void)
// callers(0): 
// callees(5): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 001113e0 mobyutil::MB_RotateQuatAxisAngle; 00131100 partupd::SpawnPart_60

void mobyupdate_helpers::M806_00466468(int param_1)

{
  undefined4 uVar1;
  double dVar2;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float afStack_40 [4];
  
  dVar2 = (double)mobyutil::MB_randRangeFloat
                            (mobyutil::g_FrameTime * DAT_00874cb4,
                             mobyutil::g_FrameTime * DAT_00874cb8);
  local_50 = (float)((double)hero::g_heroGravityDir * dVar2);
  local_4c = (float)((double)DAT_00969f74 * dVar2);
  local_48 = (float)((double)DAT_00969f78 * dVar2);
  local_44 = DAT_00969f7c;
  dVar2 = (double)mobyutil::MB_randRot();
  mobyutil::MB_RotateQuatAxisAngle((float)dVar2,afStack_40,&local_50);
  uVar1 = DAT_00874cc0;
  dVar2 = (double)DAT_00874cc8;
  mobyutil::MB_randInt(0xff);
  partupd::SpawnPart_60(dVar2,param_1 + 0x10,afStack_40,uVar1);
  uVar1 = DAT_00874cc4;
  dVar2 = (double)DAT_00874ccc;
  mobyutil::MB_randInt(0xff);
  partupd::SpawnPart_60(dVar2,param_1 + 0x10,afStack_40,uVar1);
  return;
}



//==== 00466640  ns=mobyupdate_helpers  size=0x4fc
// sig: undefined M806_00466640(void)
// callers(1): 00466e98 mobyupdate_unsorted::UpdateMoby_806
// callees(5): 00130ed0 partupd::SpawnPart_59; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor
// strings: 00466638: '?333`'

undefined4 mobyupdate_helpers::M806_00466640(int param_1)

{
  undefined1 auVar1 [16];
  float fVar2;
  longlong lVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  int iVar7;
  uint uVar8;
  ulonglong uVar6;
  undefined1 uVar10;
  int iVar9;
  undefined8 in_r9;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  float *pfVar15;
  float *pfVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar31 [16];
  
  uVar5 = ZEXT48(&stack0x00000000);
  lVar3 = uVar5 - 0xb0;
  puVar4 = (undefined4 *)lVar3;
  puVar4[3] = in_vr31_32_3;
  puVar4[2] = in_vr31_32_2;
  puVar4[1] = in_vr31_32_1;
  *puVar4 = in_vr31_32_0;
  dVar20 = 0.0;
  auVar31 = ZEXT416(0);
  auVar26 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  pfVar15 = (float *)&DAT_00874cdc;
  iVar12 = 0;
  pfVar16 = (float *)&DAT_00874cec;
  uVar13 = (ulonglong)*(uint *)(param_1 + 0x78);
  auVar31 = loadVectorLeftIndexed(0xc,0x466618);
  dVar21 = 255.0;
  dVar22 = 255.5;
  dVar23 = 0.5;
  dVar24 = 1.0;
  auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  dVar25 = 0.699999988079071;
  uVar14 = uVar13;
  do {
    lVar11 = uVar13 + 0x58;
    auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    iVar7 = fastfunc::FastDecTimerS16(lVar11);
    if (iVar7 == 0) {
      auVar1 = ZEXT416(0xffffffff);
      auVar27 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
      auVar1 = ZEXT416(1);
      auVar27 = vectorShiftLeftIntegerWord(auVar27,auVar27);
      auVar28 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      iVar7 = (int)uVar14;
      auVar28 = vectorMultiplyAddFloatingPoint(auVar28,auVar31,auVar27);
      fVar2 = *(float *)(iVar7 + 0x60) + *pfVar15;
      dVar17 = (double)fVar2;
      auVar29 = loadVectorLeftIndexed(lVar3,lVar11);
      auVar30 = loadVectorRightIndexed(0x10,lVar11);
      dVar18 = (double)animationSpeed;
      auVar27 = ZEXT416(0xfffffff0);
      auVar29 = vectorShiftRightAlgebraicWord
                          (auVar29 | auVar30,
                           auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60);
      auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
      *(float *)(iVar7 + 0x60) = fVar2;
      auVar27 = vectorCompareGreaterThanSignedWord(auVar29,auVar27);
      auVar26 = vectorConditionalSelect
                          (auVar26,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar27
                          );
      if (dVar17 < dVar21) {
        if (dVar17 <= dVar20) {
          *(float *)(iVar7 + 0x60) = (float)(dVar17 + dVar21);
        }
      }
      else {
        *(float *)(iVar7 + 0x60) = (float)(dVar17 - dVar21);
      }
      dVar17 = (double)fastfunc::FastIntToDouble
                                 ((int)(dVar18 * dVar22) - (int)*(short *)((int)uVar13 + 0x58));
      uVar8 = fastfunc::FastLerpColor
                        (ABS((double)(float)(dVar23 - (double)(float)(dVar17 / (double)(longlong)
                                                                                       ((double)
                                                  animationSpeed * dVar22)))),DAT_00874cd0,
                         DAT_00874cd4);
      dVar17 = (double)fastfunc::FastIntToDouble
                                 ((int)(animationSpeed *
                                       (float)((double)(longlong)DAT_00874c8c + dVar23)));
      dVar18 = (double)(longlong)(int)*(short *)((int)uVar13 + 0x58);
      dVar19 = (double)(float)(dVar24 - (double)(float)(dVar18 / dVar17));
      dVar17 = (double)fastfunc::FastIntToDouble(dVar17,dVar18,(int)uVar8 >> 0x18);
      uVar6 = fastfunc::FastDoubleToInt((double)(float)(dVar17 * (double)(float)(dVar24 - dVar19)));
      uVar10 = fastfunc::FastDoubleToInt((double)*(float *)(iVar7 + 0x60));
      iVar9 = partupd::SpawnPart_59
                        ((double)(float)((double)*pfVar16 * dVar19),uVar5 - 0xf0,
                         (uint)((uVar6 & 0xffffffff) << 0x18) | uVar8 & 0xffffff,uVar10,DAT_00874cd8
                         ,0,2,in_r9,1);
      if (iVar9 != 0) {
        *(undefined1 *)(iVar9 + 2) = *DAT_00a528fc;
      }
      uVar10 = fastfunc::FastDoubleToInt((double)*(float *)(iVar7 + 0x60));
      iVar7 = partupd::SpawnPart_59
                        ((double)((float)(dVar19 * dVar25) * *pfVar16),uVar5 - 0xf0,
                         (uint)((uVar6 & 0xffffffff) << 0x18) | 0xffffff,uVar10,DAT_00874cd8,
                         DAT_010cd080,2,in_r9,1);
      if (iVar7 != 0) {
        *(undefined1 *)(iVar7 + 2) = *DAT_00a528fc;
      }
    }
    iVar12 = iVar12 + 1;
    pfVar15 = pfVar15 + 1;
    pfVar16 = pfVar16 + 1;
    uVar13 = uVar13 + 2;
    uVar14 = uVar14 + 4;
  } while (iVar12 < 4);
  return auVar26._0_4_;
}



//==== 00466b40  ns=mobyupdate_helpers  size=0x154
// sig: undefined M806_00466b40(void)
// callers(1): 00466e98 mobyupdate_unsorted::UpdateMoby_806
// callees(1): 001113e0 mobyutil::MB_RotateQuatAxisAngle

void mobyupdate_helpers::M806_00466b40(int param_1,float *param_2,longlong param_3)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_30;
  float local_2c;
  float local_28;
  
  pfVar2 = *(float **)(param_1 + 0x78);
  mobyutil::MB_RotateQuatAxisAngle
            (pfVar2[0xb],&local_30,(float *)((int)&DAT_010ccf80 + (int)(param_3 << 4)));
  iVar3 = *(int *)((int)pfVar2 + (int)(param_3 << 2) + 0x30);
  if ((iVar3 != 0) && (*(char *)(param_1 + 0x20) == '\x02')) {
    fVar1 = 0.0;
    fVar7 = SQRT(local_28 * local_28 + local_30 * local_30 + local_2c * local_2c);
    fVar6 = *(float *)(iVar3 + 0x28) / fVar7;
    fVar5 = local_30 * fVar6;
    fVar4 = local_2c * fVar6;
    fVar6 = local_28 * fVar6;
    local_30 = fVar1;
    if (0.0 - fVar7 < 0.0) {
      local_30 = fVar5;
    }
    local_2c = fVar1;
    if (0.0 - fVar7 < 0.0) {
      local_2c = fVar4;
    }
    if (0.0 - fVar7 < 0.0) {
      fVar1 = fVar6;
    }
    if (fVar7 - 0.0 < 0.0) {
      local_30 = fVar5;
    }
    if (fVar7 - 0.0 < 0.0) {
      local_2c = fVar4;
    }
    local_28 = fVar1;
    if (fVar7 - 0.0 < 0.0) {
      local_28 = fVar6;
    }
  }
  *param_2 = pfVar2[4] + local_30;
  param_2[1] = pfVar2[5] + local_2c;
  fVar1 = pfVar2[6];
  param_2[2] = fVar1 + local_28;
  param_2[3] = pfVar2[7];
  param_2[2] = fVar1 + local_28 + *pfVar2;
  return;
}



//==== 00466c98  ns=mobyupdate_helpers  size=0xf4
// sig: undefined M806_00466c98(void)
// callers(1): 00466e98 mobyupdate_unsorted::UpdateMoby_806
// callees(1): 001113e0 mobyutil::MB_RotateQuatAxisAngle

void mobyupdate_helpers::M806_00466c98(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *outQuat;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  outQuat = (float *)&DAT_010ccf80;
  iVar5 = 0;
  dVar9 = 0.0;
  do {
    mobyutil::MB_RotateQuatAxisAngle(DAT_00874c30,outQuat,outQuat);
    fVar2 = outQuat[1];
    fVar3 = *outQuat;
    fVar4 = outQuat[2];
    dVar7 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    if (dVar7 == dVar9) {
      fVar3 = outQuat[3];
      dVar7 = dVar9;
      dVar6 = dVar9;
      dVar8 = dVar9;
    }
    else {
      fVar1 = (float)((double)DAT_00874c4c / dVar7);
      dVar8 = (double)(fVar4 * fVar1);
      dVar7 = (double)(fVar3 * fVar1);
      fVar3 = outQuat[3];
      dVar6 = (double)(fVar2 * fVar1);
    }
    *outQuat = (float)dVar7;
    iVar5 = iVar5 + 1;
    outQuat[1] = (float)dVar6;
    outQuat[2] = (float)dVar8;
    outQuat[3] = fVar3;
    outQuat = outQuat + 4;
  } while (iVar5 < 8);
  return;
}



//==== 00466d90  ns=mobyupdate_helpers  size=0xb0
// sig: undefined M806_00466d90(void)
// callers(0): 
// callees(1): 00057820 collproc::CollLine

bool mobyupdate_helpers::M806_00466d90(void)

{
  int iVar1;
  undefined1 local_20 [16];
  undefined1 local_10 [16];
  
  iVar1 = collproc::CollLine(local_20,local_10,0x12,0,0);
  return iVar1 == 0;
}



//==== 00466e98  ns=mobyupdate_unsorted  size=0x1924
// sig: undefined UpdateMoby_806(MobyInstance * moby)
// callers(0): 
// callees(24): 00057820 collproc::CollLine; 0006d720 RegisterFuncForMoby; 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 000fe4f0 mobyutil::MB_randRangeSigned; 000fe610 mobyutil::MB_SphericalToVector; 000fec94 mobyutil::MB_catmullRom; 001113e0 mobyutil::MB_RotateQuatAxisAngle; 0011e6ec partproc::DeletePart; 00131100 partupd::SpawnPart_60; 00131ac0 partupd::SpawnPart_62; 0015d204 sound::sound_MobyPlay_oClass; 00466220 mobyupdate_helpers::M806_00466220; 00466640 mobyupdate_helpers::M806_00466640; 00466b40 mobyupdate_helpers::M806_00466b40; 00466c98 mobyupdate_helpers::M806_00466c98; 004fffb4 fastfunc::FastDecTimerS16; 00500b64 fastfunc::FastEulerToMtx; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble; 00502910 fastfunc::FastCheckBsphereInView
// strings: 0096c074: 'None'

/* Moby 806 */

void mobyupdate_unsorted::UpdateMoby_806(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  void *pvVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined2 uVar16;
  int iVar15;
  MobyInstance *pMVar17;
  float *pfVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined8 in_LR;
  double dVar21;
  double extraout_f1;
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
  undefined8 uVar37;
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 local_190 [16];
  float local_180;
  float local_17c;
  float local_178;
  undefined4 local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_130;
  float local_12c;
  float local_128;
  char local_124 [4];
  float local_120;
  float local_11c;
  float local_118;
  undefined4 local_114;
  float afStack_110 [4];
  float local_100;
  float local_fc;
  float local_f8;
  f32 local_f4;
  f32 local_f0;
  f32 local_ec;
  float local_e8;
  f32 local_e4;
  longlong local_e0;
  
  lVar11 = (longlong)(int)moby;
  uVar1 = moby->state;
  pfVar4 = (float *)moby->pVar;
  uVar20 = ZEXT48(pfVar4);
  if (uVar1 == '\x04') {
    if (DAT_00a15c7c == moby) {
      mobyupdate_helpers::M806_00466c98();
    }
  }
  else if (uVar1 == '\x03') {
    if (DAT_00a15c7c == moby) {
      mobyupdate_helpers::M806_00466c98();
    }
    if (*(short *)((int)pfVar4 + 0x56) != 0) {
      fVar2 = DAT_00874c88 * DAT_00969f74;
      fVar5 = DAT_00874c88 * DAT_00969f78;
      (moby->pos).x = g_heroPosition.x + -(DAT_00874c88 * hero::g_heroGravityDir);
      (moby->pos).y = g_heroPosition.y + -fVar2;
      (moby->pos).z = g_heroPosition.z + -fVar5;
      fVar2 = g_heroPosition.w;
      (moby->rotation).w = 0.5235988;
      (moby->pos).w = fVar2;
      iVar13 = mobyupdate_helpers::M806_00466640(lVar11);
      if ((iVar13 != 0) && (iVar13 = mobyutil::MB_randInt(5), iVar13 == 0)) {
        local_130 = GameCamera.posX - (moby->pos).x;
        local_12c = GameCamera.posY - (moby->pos).y;
        local_128 = GameCamera.posZ - (moby->pos).z;
        local_124[0] = GameCamera.field8_0x14c[0];
        local_124[1] = GameCamera.field8_0x14c[1];
        local_124[2] = GameCamera.field8_0x14c[2];
        local_124[3] = GameCamera.field8_0x14c[3];
        dVar21 = (double)mobyutil::MB_randRangeFloat
                                   (mobyutil::g_FrameTime * DAT_00874cb4,
                                    mobyutil::g_FrameTime * DAT_00874cb8);
        local_120 = (float)((double)hero::g_heroGravityDir * dVar21);
        local_11c = (float)((double)DAT_00969f74 * dVar21);
        local_118 = (float)((double)DAT_00969f78 * dVar21);
        local_114 = DAT_00969f7c;
        dVar21 = (double)mobyutil::MB_randRot();
        mobyutil::MB_RotateQuatAxisAngle((float)dVar21,afStack_110,&local_120);
        uVar10 = DAT_00874cc0;
        dVar21 = (double)DAT_00874cc8;
        mobyutil::MB_randInt(0xff);
        partupd::SpawnPart_60(dVar21,lVar11 + 0x10,afStack_110,uVar10);
        uVar10 = DAT_00874cc4;
        dVar21 = (double)DAT_00874ccc;
        mobyutil::MB_randInt(0xff);
        partupd::SpawnPart_60(dVar21,lVar11 + 0x10,afStack_110,uVar10);
      }
    }
    if (((g_heroHealth ==
          g_heroMaxNanotech +
          ((uint)((LZCOUNT(1 - (uint)g_heroType) << 0x3a) >> 0x3f) & 4U - g_heroMaxNanotech)) &&
        (DAT_00969ea0 != 0)) && (Cheats[6] != '\0')) {
      auVar42 = ZEXT416(0xffffffff);
      auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
      auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
      auVar42 = loadVectorLeftIndexed(0x4c74,0x870000);
      auVar41 = loadVectorLeftIndexed(in_LR,0x466e40);
      auVar40 = vectorConvertFromSignedFixedPointWord(auVar42,0);
      auVar42 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar42 = vectorAddFloatingPoint
                          (auVar40,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60);
      auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar42 = vectorMultiplyAddFloatingPoint(auVar40,auVar42,auVar43);
      auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
      iVar13 = (int)(animationSpeed * ((float)(longlong)DAT_00874c74 + 0.5));
      local_e0 = (longlong)iVar13;
      if (*(short *)(pfVar4 + 0x15) < iVar13) {
        auVar42 = vectorSplatHalfWord(auVar42,1);
        uVar16 = storeVectorElementHalfWordIndexed(auVar42,0x54,uVar20);
        *(undefined2 *)(pfVar4 + 0x15) = uVar16;
        *(short *)(pfVar4 + 0x16) = *(short *)(pfVar4 + 0x16) + 1;
        *(short *)((int)pfVar4 + 0x5a) = *(short *)((int)pfVar4 + 0x5a) + 1;
        *(short *)(pfVar4 + 0x17) = *(short *)(pfVar4 + 0x17) + 1;
        *(short *)((int)pfVar4 + 0x5e) = *(short *)((int)pfVar4 + 0x5e) + 1;
      }
    }
    iVar13 = fastfunc::FastDecTimerS16(uVar20 + 0x54);
    if (iVar13 == 0) {
      iVar13 = 0;
      dVar23 = 1.0;
      uVar33 = 0;
      uVar37 = 0x3f847ae140000000;
      dVar22 = 20.5;
      dVar39 = 0.5;
      dVar21 = -(double)(DAT_00874c88 * DAT_00969f78);
      dVar25 = (double)(g_heroPosition.x + -(DAT_00874c88 * hero::g_heroGravityDir));
      dVar24 = (double)(g_heroPosition.y + -(DAT_00874c88 * DAT_00969f74));
      dVar38 = (double)(float)((double)g_heroPosition.z + dVar21);
      do {
        iVar12 = *(int *)((int)uVar20 + 0x30);
        if (iVar12 != 0) {
          iVar14 = fastfunc::FastDecTimerS16(dVar21,iVar12 + 0x3e);
          if (iVar14 == 0) {
            dVar36 = (double)*(float *)(iVar12 + 0x10);
            dVar35 = (double)*(float *)(iVar12 + 0x14);
            dVar34 = (double)*(float *)(iVar12 + 0x18);
            dVar21 = (double)fastfunc::FastIntToDouble(*(undefined2 *)(iVar12 + 0x3c));
            local_e0 = (longlong)(int)*(short *)(iVar12 + 0x3e);
            dVar32 = (double)*(float *)(iVar12 + 0x34);
            dVar31 = (double)*(float *)(iVar12 + 0x38);
            dVar30 = (double)(float)(dVar32 - (double)*(float *)(iVar12 + 0x28));
            dVar27 = (double)(float)(dVar24 - (double)*(float *)(iVar12 + 0x28));
            dVar29 = (double)(float)(dVar31 - (double)*(float *)(iVar12 + 0x2c));
            dVar28 = (double)(float)(dVar38 - (double)*(float *)(iVar12 + 0x2c));
            dVar26 = (double)(float)(dVar23 - (double)(float)((double)local_e0 / dVar21));
            dVar21 = (double)mobyutil::MB_catmullRom
                                       ((double)(float)((double)*(float *)(iVar12 + 0x30) -
                                                       (double)*(float *)(iVar12 + 0x24)),
                                        (double)*(float *)(iVar12 + 0x30),dVar25,
                                        (double)(float)(dVar25 - (double)*(float *)(iVar12 + 0x24)),
                                        dVar26);
            *(float *)(iVar12 + 0x10) = (float)dVar21;
            dVar21 = (double)mobyutil::MB_catmullRom(dVar30,dVar32,dVar24,dVar27,dVar26);
            *(float *)(iVar12 + 0x14) = (float)dVar21;
            dVar21 = (double)mobyutil::MB_catmullRom(dVar29,dVar31,dVar38,dVar28,dVar26);
            *(float *)(iVar12 + 0x18) = (float)dVar21;
            dVar21 = (double)mobyutil::MB_randRangeSigned(uVar33,uVar37);
            local_140 = (float)(dVar21 + (double)*(float *)(iVar12 + 0x10));
            dVar21 = (double)mobyutil::MB_randRangeSigned(uVar33,uVar37);
            local_13c = (float)(dVar21 + (double)*(float *)(iVar12 + 0x14));
            dVar21 = (double)mobyutil::MB_randRangeSigned(uVar33,uVar37);
            local_138 = (float)(dVar21 + (double)*(float *)(iVar12 + 0x18));
            local_e0 = (longlong)(int)((double)animationSpeed * dVar22);
            iVar14 = partupd::SpawnPart_62(&local_140,(int)((double)animationSpeed * dVar22),0);
            if (iVar14 != 0) {
              *(undefined4 *)(iVar14 + 4) = DAT_00874c40;
              *(float *)(iVar14 + 0xc) = DAT_00874c38;
            }
            dVar27 = (double)(float)((double)*(float *)(iVar12 + 0x10) + dVar36);
            dVar28 = (double)(float)((double)*(float *)(iVar12 + 0x14) + dVar35);
            dVar26 = (double)(float)((double)*(float *)(iVar12 + 0x18) + dVar34);
            dVar21 = (double)mobyutil::MB_randRangeSigned(uVar33,uVar37);
            local_140 = (float)(dVar27 * dVar39 + dVar21);
            dVar21 = (double)mobyutil::MB_randRangeSigned(uVar33,uVar37);
            local_13c = (float)(dVar28 * dVar39 + dVar21);
            dVar21 = (double)mobyutil::MB_randRangeSigned(uVar33,uVar37);
            local_138 = (float)(dVar26 * dVar39 + dVar21);
            local_e0 = (longlong)(int)((double)animationSpeed * dVar22);
            iVar12 = partupd::SpawnPart_62(&local_140,(int)((double)animationSpeed * dVar22),0);
            dVar21 = extraout_f1;
            if (iVar12 != 0) {
              *(undefined4 *)(iVar12 + 4) = DAT_00874c40;
              dVar21 = (double)DAT_00874c38;
              *(float *)(iVar12 + 0xc) = DAT_00874c38;
            }
          }
          else {
            if (*(short *)((int)pfVar4 + 0x56) == 0) {
              iVar14 = g_heroMaxNanotech +
                       ((uint)((LZCOUNT(1 - (uint)g_heroType) << 0x3a) >> 0x3f) &
                       4U - g_heroMaxNanotech);
              if (g_heroHealth != 0) {
                iVar15 = g_heroHealth + 1;
                g_heroHealth = iVar15 + ((uint)((longlong)iVar14 - (longlong)iVar15 >> 0x3f) &
                                        iVar14 - iVar15);
              }
              pvVar6 = DAT_00a15c7c->pVar;
              iVar14 = *(int *)((int)pvVar6 + 0x7c) + -1;
              *(int *)((int)pvVar6 + 0x7c) = iVar14;
              if (iVar14 < 0) {
                *(undefined4 *)((int)pvVar6 + 0x7c) = 0;
              }
              sound::sound_MobyPlay_oClass(1,0,moby,0x1f5);
              *(undefined2 *)((int)pfVar4 + 0x56) = 1;
            }
            dVar21 = (double)partproc::DeletePart(iVar12);
            *(undefined4 *)((int)uVar20 + 0x30) = 0;
          }
        }
        iVar13 = iVar13 + 1;
        uVar20 = uVar20 + 4;
      } while (iVar13 < 8);
    }
    else {
      iVar13 = 0;
      do {
        if (*(int *)((int)uVar20 + 0x30) != 0) {
          partproc::DeletePart();
          *(undefined4 *)((int)uVar20 + 0x30) = 0;
        }
        iVar13 = iVar13 + 1;
        uVar20 = uVar20 + 4;
      } while (iVar13 < 8);
      if (DAT_00a15c7c == moby) {
        moby->state = '\x04';
      }
      else {
        mobyfunc::DeleteMoby(moby);
      }
    }
  }
  else {
    if (uVar1 != '\x02') {
      if (uVar1 != '\x01') {
        if (uVar1 != '\0') {
          return;
        }
        iVar13 = 0;
        moby->collision = (ushort *)0x0;
        moby->state = '\x01';
        moby->setByGroup = '\0';
        fVar5 = pfVar4[3];
        moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
        fVar2 = *(float *)((int)fVar5 + 0x10);
        (moby->pos).x = fVar2;
        (moby->pos).y = *(f32 *)((int)fVar5 + 0x14);
        (moby->pos).z = *(f32 *)((int)fVar5 + 0x18);
        (moby->pos).w = *(f32 *)((int)fVar5 + 0x1c);
        (moby->rotation).x = *(f32 *)((int)fVar5 + 0x40);
        (moby->rotation).y = *(f32 *)((int)fVar5 + 0x44);
        (moby->rotation).z = *(f32 *)((int)fVar5 + 0x48);
        (moby->rotation).w = *(f32 *)((int)fVar5 + 0x4c);
        pfVar4[4] = fVar2;
        pfVar4[5] = (moby->pos).y;
        fVar2 = (moby->pos).z;
        pfVar4[6] = fVar2;
        pfVar4[7] = (moby->pos).w;
        *(undefined2 *)(pfVar4 + 2) = 0;
        pfVar4[6] = fVar2 + 0.5;
        dVar39 = 0.0;
        *pfVar4 = 0.0;
        dVar21 = (double)mobyutil::MB_randRangeFloat(0.0,3.1415927);
        pfVar4[1] = (float)dVar21;
        *(undefined2 *)((int)pfVar4 + 0x56) = 0;
        *(undefined2 *)((int)pfVar4 + 10) = 0;
        uVar19 = uVar20;
        do {
          iVar12 = mobyutil::MB_randInt(0xff);
          local_e0 = (longlong)iVar12;
          iVar13 = iVar13 + 1;
          *(float *)((int)uVar19 + 0x60) = (float)local_e0;
          uVar19 = uVar19 + 4;
        } while (iVar13 < 4);
        auVar42 = ZEXT416(0xffffffff);
        auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
        auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
        auVar42 = loadVectorLeftIndexed(0x4c8c,0x870000);
        auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar40 = vectorConvertFromSignedFixedPointWord
                            (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0);
        auVar42 = loadVectorLeftIndexed(in_LR,0x466e40);
        auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar42 = vectorAddFloatingPoint
                            (auVar40,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60);
        auVar42 = vectorMultiplyAddFloatingPoint(auVar42,auVar41,auVar43);
        auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
        auVar42 = vectorSplatHalfWord(auVar42,1);
        uVar16 = storeVectorElementHalfWordIndexed(auVar42,0,uVar20 + 0x58);
        *(undefined2 *)(uVar20 + 0x58) = uVar16;
        uVar16 = storeVectorElementHalfWordIndexed(auVar42,0,uVar20 + 0x5a);
        *(undefined2 *)(uVar20 + 0x5a) = uVar16;
        uVar16 = storeVectorElementHalfWordIndexed(auVar42,0,uVar20 + 0x5c);
        *(undefined2 *)(uVar20 + 0x5c) = uVar16;
        uVar16 = storeVectorElementHalfWordIndexed(auVar42,0,uVar20 + 0x5e);
        *(undefined2 *)(uVar20 + 0x5e) = uVar16;
        pfVar4[0xc] = 0.0;
        pfVar4[0xd] = 0.0;
        pfVar4[0xe] = 0.0;
        pfVar4[0xf] = 0.0;
        pfVar4[0x10] = 0.0;
        pfVar4[0x11] = 0.0;
        pfVar4[0x12] = 0.0;
        pfVar4[0x13] = 0.0;
        if (DAT_00a15c7c == (MobyInstance *)0x0) {
          fastfunc::FastEulerToMtx(lVar11 + 0xc0,lVar11 + 0x40);
          fVar2 = (moby->transform).v0.y;
          fVar5 = (moby->transform).v0.x;
          fVar3 = (moby->transform).v0.z;
          DAT_00a15c7c = moby;
          moby->updateDistance = -1;
          pfVar4[0x1f] = 0.0;
          dVar22 = (double)DAT_00874c4c;
          dVar21 = (double)SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar2 * fVar2);
          if (dVar21 == dVar39) {
            DAT_010ccf8c = (moby->transform).v0.w;
            DAT_010ccf88 = 0.0;
            DAT_010ccf84 = 0.0;
            DAT_010ccf80 = 0.0;
          }
          else {
            fVar2 = (float)(dVar22 / dVar21);
            DAT_010ccf80 = fVar5 * fVar2;
            DAT_010ccf84 = (moby->transform).v0.y * fVar2;
            DAT_010ccf88 = (moby->transform).v0.z * fVar2;
            DAT_010ccf8c = (moby->transform).v0.w;
          }
          DAT_010cd000 = (moby->transform).v2.x;
          DAT_010cd004 = (moby->transform).v2.y;
          DAT_010cd008 = (moby->transform).v2.z;
          DAT_010cd00c = (moby->transform).v2.w;
          fVar2 = (moby->transform).v1.y;
          fVar5 = (moby->transform).v1.x;
          fVar3 = (moby->transform).v1.z;
          dVar21 = (double)SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar2 * fVar2);
          if (dVar21 == dVar39) {
            DAT_010ccf9c = (moby->transform).v1.w;
            DAT_010ccf98 = 0.0;
            DAT_010ccf94 = 0.0;
            DAT_010ccf90 = 0.0;
          }
          else {
            fVar2 = (float)(dVar22 / dVar21);
            DAT_010ccf90 = fVar5 * fVar2;
            DAT_010ccf94 = (moby->transform).v1.y * fVar2;
            DAT_010ccf98 = (moby->transform).v1.z * fVar2;
            DAT_010ccf9c = (moby->transform).v1.w;
          }
          DAT_010cd010 = (moby->transform).v0.x;
          DAT_010cd014 = (moby->transform).v0.y;
          DAT_010cd018 = (moby->transform).v0.z;
          DAT_010cd01c = (moby->transform).v0.w;
          fVar2 = (moby->transform).v2.y;
          fVar5 = (moby->transform).v2.x;
          fVar3 = (moby->transform).v2.z;
          dVar21 = (double)SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar2 * fVar2);
          if (dVar21 == dVar39) {
            DAT_010ccfac = (moby->transform).v2.w;
            DAT_010ccfa8 = 0.0;
            DAT_010ccfa4 = 0.0;
            DAT_010ccfa0 = 0.0;
          }
          else {
            fVar2 = (float)(dVar22 / dVar21);
            DAT_010ccfa0 = fVar5 * fVar2;
            DAT_010ccfa4 = (moby->transform).v2.y * fVar2;
            DAT_010ccfa8 = (moby->transform).v2.z * fVar2;
            DAT_010ccfac = (moby->transform).v2.w;
          }
          DAT_010cd020 = (moby->transform).v1.x;
          DAT_010cd024 = (moby->transform).v1.y;
          DAT_010cd028 = (moby->transform).v1.z;
          DAT_010cd02c = (moby->transform).v1.w;
          fVar5 = (moby->transform).v0.x + (moby->transform).v2.x;
          fVar3 = (moby->transform).v0.y + (moby->transform).v2.y;
          fVar7 = (moby->transform).v0.z + (moby->transform).v2.z;
          DAT_010ccfbc = (moby->transform).v0.w;
          dVar23 = (double)SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar3 * fVar3);
          fVar2 = (float)(dVar22 / dVar23);
          dVar21 = dVar39;
          if (dVar39 - dVar23 < 0.0) {
            dVar21 = (double)(fVar5 * fVar2);
          }
          dVar38 = dVar39;
          if (dVar39 - dVar23 < 0.0) {
            dVar38 = (double)(fVar3 * fVar2);
          }
          dVar24 = dVar39;
          if (dVar39 - dVar23 < 0.0) {
            dVar24 = (double)(fVar7 * fVar2);
          }
          if (dVar23 - dVar39 < 0.0) {
            dVar21 = (double)(fVar5 * fVar2);
          }
          if (dVar23 - dVar39 < 0.0) {
            dVar38 = (double)(fVar3 * fVar2);
          }
          if (dVar23 - dVar39 < 0.0) {
            dVar24 = (double)(fVar7 * fVar2);
          }
          DAT_010ccfb0 = (float)dVar21;
          DAT_010ccfb4 = (float)dVar38;
          DAT_010ccfb8 = (float)dVar24;
          dVar23 = (double)(moby->transform).v1.y;
          dVar25 = (double)(moby->transform).v1.z;
          dVar26 = (double)(moby->transform).v1.x;
          DAT_010cd03c = 0;
          DAT_010cd030 = (float)(dVar23 * dVar24 - (double)(float)(dVar25 * dVar38));
          DAT_010cd034 = (float)(dVar25 * dVar21 - (double)(float)(dVar26 * dVar24));
          DAT_010cd038 = (float)(dVar26 * dVar38 - (double)(float)(dVar23 * dVar21));
          fVar5 = (moby->transform).v0.x + (moby->transform).v1.x;
          fVar3 = (moby->transform).v0.y + (moby->transform).v1.y;
          fVar7 = (moby->transform).v0.z + (moby->transform).v1.z;
          DAT_010ccfcc = (moby->transform).v0.w;
          dVar23 = (double)SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar3 * fVar3);
          fVar2 = (float)(dVar22 / dVar23);
          dVar21 = dVar39;
          if (dVar39 - dVar23 < 0.0) {
            dVar21 = (double)(fVar5 * fVar2);
          }
          dVar38 = dVar39;
          if (dVar39 - dVar23 < 0.0) {
            dVar38 = (double)(fVar3 * fVar2);
          }
          dVar24 = dVar39;
          if (dVar39 - dVar23 < 0.0) {
            dVar24 = (double)(fVar7 * fVar2);
          }
          if (dVar23 - dVar39 < 0.0) {
            dVar21 = (double)(fVar5 * fVar2);
          }
          if (dVar23 - dVar39 < 0.0) {
            dVar38 = (double)(fVar3 * fVar2);
          }
          if (dVar23 - dVar39 < 0.0) {
            dVar24 = (double)(fVar7 * fVar2);
          }
          DAT_010ccfc0 = (float)dVar21;
          DAT_010ccfc4 = (float)dVar38;
          DAT_010ccfc8 = (float)dVar24;
          dVar23 = (double)(moby->transform).v2.y;
          dVar25 = (double)(moby->transform).v2.z;
          dVar26 = (double)(moby->transform).v2.x;
          DAT_010cd04c = 0;
          DAT_010cd040 = (float)(dVar23 * dVar24 - (double)(float)(dVar25 * dVar38));
          DAT_010cd044 = (float)(dVar25 * dVar21 - (double)(float)(dVar26 * dVar24));
          DAT_010cd048 = (float)(dVar26 * dVar38 - (double)(float)(dVar23 * dVar21));
          fVar5 = (moby->transform).v1.x - (moby->transform).v2.x;
          fVar3 = (moby->transform).v1.y - (moby->transform).v2.y;
          fVar7 = (moby->transform).v1.z - (moby->transform).v2.z;
          DAT_010ccfdc = (moby->transform).v1.w;
          dVar23 = (double)SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar3 * fVar3);
          fVar2 = (float)(dVar22 / dVar23);
          dVar21 = dVar39;
          if (dVar39 - dVar23 < 0.0) {
            dVar21 = (double)(fVar5 * fVar2);
          }
          dVar38 = dVar39;
          if (dVar39 - dVar23 < 0.0) {
            dVar38 = (double)(fVar3 * fVar2);
          }
          dVar24 = dVar39;
          if (dVar39 - dVar23 < 0.0) {
            dVar24 = (double)(fVar7 * fVar2);
          }
          if (dVar23 - dVar39 < 0.0) {
            dVar21 = (double)(fVar5 * fVar2);
          }
          if (dVar23 - dVar39 < 0.0) {
            dVar38 = (double)(fVar3 * fVar2);
          }
          if (dVar23 - dVar39 < 0.0) {
            dVar24 = (double)(fVar7 * fVar2);
          }
          DAT_010ccfd0 = (float)dVar21;
          DAT_010ccfd4 = (float)dVar38;
          DAT_010ccfd8 = (float)dVar24;
          dVar23 = (double)(moby->transform).v0.y;
          dVar25 = (double)(moby->transform).v0.z;
          dVar26 = (double)(moby->transform).v0.x;
          DAT_010cd05c = 0;
          DAT_010cd050 = (float)(dVar23 * dVar24 - (double)(float)(dVar25 * dVar38));
          DAT_010cd054 = (float)(dVar25 * dVar21 - (double)(float)(dVar26 * dVar24));
          DAT_010cd058 = (float)(dVar26 * dVar38 - (double)(float)(dVar23 * dVar21));
          fVar5 = (moby->transform).v0.x - (moby->transform).v2.x;
          fVar3 = (moby->transform).v0.y - (moby->transform).v2.y;
          fVar7 = (moby->transform).v0.z - (moby->transform).v2.z;
          DAT_010ccfec = (moby->transform).v0.w;
          dVar23 = (double)SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar3 * fVar3);
          fVar2 = (float)(dVar22 / dVar23);
          dVar21 = dVar39;
          if (dVar39 - dVar23 < 0.0) {
            dVar21 = (double)(fVar5 * fVar2);
          }
          dVar38 = dVar39;
          if (dVar39 - dVar23 < 0.0) {
            dVar38 = (double)(fVar3 * fVar2);
          }
          dVar24 = dVar39;
          if (dVar39 - dVar23 < 0.0) {
            dVar24 = (double)(fVar7 * fVar2);
          }
          if (dVar23 - dVar39 < 0.0) {
            dVar21 = (double)(fVar5 * fVar2);
          }
          if (dVar23 - dVar39 < 0.0) {
            dVar38 = (double)(fVar3 * fVar2);
          }
          if (dVar23 - dVar39 < 0.0) {
            dVar24 = (double)(fVar7 * fVar2);
          }
          DAT_010ccfe0 = (float)dVar21;
          DAT_010ccfe4 = (float)dVar38;
          DAT_010ccfe8 = (float)dVar24;
          dVar23 = (double)(moby->transform).v1.y;
          dVar25 = (double)(moby->transform).v1.z;
          dVar26 = (double)(moby->transform).v1.x;
          DAT_010cd06c = 0;
          DAT_010cd060 = (float)(dVar23 * dVar24 - (double)(float)(dVar25 * dVar38));
          DAT_010cd064 = (float)(dVar25 * dVar21 - (double)(float)(dVar26 * dVar24));
          DAT_010cd068 = (float)(dVar26 * dVar38 - (double)(float)(dVar23 * dVar21));
          fVar5 = (moby->transform).v0.x - (moby->transform).v1.x;
          fVar3 = (moby->transform).v0.y - (moby->transform).v1.y;
          fVar7 = (moby->transform).v0.z - (moby->transform).v1.z;
          DAT_010ccffc = (moby->transform).v0.w;
          dVar23 = (double)SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar3 * fVar3);
          fVar2 = (float)(dVar22 / dVar23);
          dVar21 = dVar39;
          if (dVar39 - dVar23 < 0.0) {
            dVar21 = (double)(fVar5 * fVar2);
          }
          dVar22 = dVar39;
          if (dVar39 - dVar23 < 0.0) {
            dVar22 = (double)(fVar3 * fVar2);
          }
          dVar38 = dVar39;
          if (dVar39 - dVar23 < 0.0) {
            dVar38 = (double)(fVar7 * fVar2);
          }
          if (dVar23 - dVar39 < 0.0) {
            dVar21 = (double)(fVar5 * fVar2);
          }
          if (dVar23 - dVar39 < 0.0) {
            dVar22 = (double)(fVar3 * fVar2);
          }
          if (dVar23 - dVar39 < 0.0) {
            dVar38 = (double)(fVar7 * fVar2);
          }
          DAT_010ccff0 = (float)dVar21;
          DAT_010ccff4 = (float)dVar22;
          DAT_010ccff8 = (float)dVar38;
          dVar23 = (double)(moby->transform).v2.y;
          dVar24 = (double)(moby->transform).v2.z;
          dVar25 = (double)(moby->transform).v2.x;
          DAT_010cd07c = 0;
          DAT_010cd070 = (float)(dVar23 * dVar38 - (double)(float)(dVar24 * dVar22));
          DAT_010cd074 = (float)(dVar24 * dVar21 - (double)(float)(dVar25 * dVar38));
          DAT_010cd078 = (float)(dVar25 * dVar22 - (double)(float)(dVar23 * dVar21));
        }
        dVar22 = 1.0;
        dVar21 = (double)mobyutil::MB_randRangeFloat((float)dVar39,6.2831855);
        uVar37 = 0x3ff921fb60000000;
        dVar39 = (double)mobyutil::MB_randRangeFloat(-1.5707964,1.5707964);
        mobyutil::MB_SphericalToVector((float)dVar22,(float)dVar21,(float)dVar39,pfVar4 + 8);
        dVar21 = (double)mobyutil::MB_randRangeSigned(0x3fe921fb00000000,uVar37);
        pfVar4[0xb] = (float)dVar21;
      }
      fVar2 = pfVar4[3];
      pMVar17 = (MobyInstance *)pfVar4[3];
      (moby->pos).x = *(f32 *)((int)fVar2 + 0x10);
      (moby->pos).y = *(f32 *)((int)fVar2 + 0x14);
      (moby->pos).z = *(f32 *)((int)fVar2 + 0x18);
      (moby->pos).w = *(f32 *)((int)fVar2 + 0x1c);
      pfVar4[4] = (pMVar17->pos).x;
      pfVar4[5] = (pMVar17->pos).y;
      fVar2 = (pMVar17->pos).z;
      pfVar4[6] = fVar2;
      pfVar4[7] = (pMVar17->pos).w;
      pfVar4[6] = fVar2 + 0.5;
      if ((0x7f < pMVar17->state) || (pMVar17 == moby)) {
        moby->state = '\x02';
        pfVar4[0x14] = 0.0;
      }
    }
    if (moby->state == '\x02') {
      pfVar4[4] = (moby->pos).x;
      pfVar4[5] = (moby->pos).y;
      fVar2 = (moby->pos).z;
      pfVar4[6] = fVar2;
      pfVar4[7] = (moby->pos).w;
      pfVar4[6] = fVar2 + 0.5;
      mobyupdate_helpers::M806_00466220(lVar11);
      dVar24 = 3.141592502593994;
      dVar38 = -3.141592502593994;
      dVar23 = -0.16666656732559204;
      iVar13 = 0;
      dVar22 = 0.008333025500178337;
      dVar39 = -0.0001980741071747616;
      pfVar18 = (float *)&DAT_00874c94;
      dVar21 = 2.601886990305502e-06;
      uVar19 = uVar20;
      do {
        iVar12 = *(int *)((int)uVar19 + 0x30);
        if (iVar12 != 0) {
          dVar26 = (double)*(float *)(iVar12 + 0x2c);
          dVar25 = (double)(float)(dVar24 - dVar26);
          if (dVar26 - (double)(float)(dVar24 - dVar26) < 0.0) {
            dVar25 = dVar26;
          }
          dVar28 = (double)(float)(dVar38 - dVar26);
          if ((double)(float)(dVar38 - dVar26) - dVar25 < 0.0) {
            dVar28 = dVar25;
          }
          dVar25 = (double)(float)(dVar28 * dVar28);
          dVar27 = (double)(float)(dVar25 * (double)(float)(dVar25 * dVar28));
          dVar26 = (double)(float)(dVar25 * dVar27);
          *(float *)(iVar12 + 0x28) =
               DAT_00874c90 *
               (float)((double)(float)(dVar25 * dVar26) * dVar21 +
                      (double)(float)(dVar26 * dVar39 +
                                     (double)(float)(dVar27 * dVar22 +
                                                    (double)(float)((double)(float)(dVar25 * dVar28)
                                                                    * dVar23 + dVar28)))) +
               DAT_00874c4c;
          dVar25 = (double)fastfunc::FastWrapRot(*(float *)(iVar12 + 0x2c),*pfVar18);
          *(float *)(iVar12 + 0x2c) = (float)dVar25;
        }
        iVar13 = iVar13 + 1;
        pfVar18 = pfVar18 + 1;
        uVar19 = uVar19 + 4;
      } while (iVar13 < 8);
    }
    if ((((moby->state != '\x01') && (DAT_00a15c7c != (MobyInstance *)0x0)) &&
        ((DAT_00a15c7c->pVar != (void *)0x0 && (g_heroHealth != 0)))) &&
       ((g_heroHealth + *(int *)((int)DAT_00a15c7c->pVar + 0x7c) <
         (int)(g_heroMaxNanotech +
              ((uint)((LZCOUNT(1 - (uint)g_heroType) << 0x3a) >> 0x3f) & 4U - g_heroMaxNanotech)) ||
        ((Cheats[6] != '\0' && (DAT_00969ea0 == 0)))))) {
      fVar2 = (moby->pos).y;
      fVar5 = (moby->pos).x;
      fVar7 = fVar2 - g_heroPosition.y;
      fVar8 = fVar5 - g_heroPosition.x;
      fVar3 = (moby->pos).z;
      fVar9 = fVar3 - g_heroPosition.z;
      if (SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7) < 10.0) {
        local_f4 = (moby->pos).w;
        dVar21 = 0.5;
        local_f8 = fVar3 + 0.5;
        local_f0 = (g_heroMobyPtr->pos).x;
        local_ec = (g_heroMobyPtr->pos).y;
        local_e8 = (g_heroMobyPtr->pos).z + 0.5;
        local_e4 = (g_heroMobyPtr->pos).w;
        local_100 = fVar5;
        local_fc = fVar2;
        iVar13 = collproc::CollLine(&local_100,&local_f0,0x12,0,0);
        pMVar17 = DAT_00a15c7c;
        if (iVar13 == 0) {
          moby->state = '\x03';
          *(int *)((int)pMVar17->pVar + 0x7c) = *(int *)((int)pMVar17->pVar + 0x7c) + 1;
          if (Cheats[6] != '\0') {
            auVar42 = ZEXT416(0xffffffff);
            auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
            auVar40 = vectorShiftLeftIntegerWord(auVar42,auVar42);
            auVar42 = loadVectorLeftIndexed(0x3c,0x466e40);
            auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar42 = vectorMultiplyAddFloatingPoint
                                (auVar41,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 |
                                         auVar42 << 0x60,auVar40);
            auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
            auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
            DAT_00969ea0 = storeVectorElementWordIndexed
                                     (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
                                      0x1c0,0x969ce0);
          }
          auVar42 = ZEXT416(0xffffffff);
          auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
          auVar41 = vectorShiftLeftIntegerWord(auVar42,auVar42);
          auVar42 = loadVectorLeftIndexed(0x4c70,0x870000);
          auVar40 = vectorConvertFromSignedFixedPointWord(auVar42,0);
          auVar42 = loadVectorLeftIndexed(in_LR,0x466e40);
          auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar42 = vectorAddFloatingPoint
                              (auVar40,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60
                              );
          auVar42 = vectorMultiplyAddFloatingPoint(auVar43,auVar42,auVar41);
          auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
          auVar42 = vectorSplatHalfWord(auVar42,1);
          uVar16 = storeVectorElementHalfWordIndexed(auVar42,0x54,uVar20);
          *(undefined2 *)(pfVar4 + 0x15) = uVar16;
          local_160 = (g_heroPosition.x + -(DAT_00874c88 * hero::g_heroGravityDir)) - (moby->pos).x;
          local_15c = (g_heroPosition.y + -(DAT_00874c88 * DAT_00969f74)) - (moby->pos).y;
          iVar13 = 0;
          local_158 = (float)((double)((g_heroPosition.z + -(DAT_00874c88 * DAT_00969f78)) -
                                      (moby->pos).z) - dVar21);
          local_154 = g_heroPosition.w;
          dVar23 = 0.0;
          local_174 = 0;
          fVar5 = -(DAT_00874c84 * hero::g_heroGravityDir * local_15c) -
                  -(DAT_00874c84 * DAT_00969f74 * local_160);
          fVar3 = -(DAT_00874c84 * DAT_00969f74 * local_158) -
                  -(DAT_00874c84 * DAT_00969f78 * local_15c);
          fVar2 = -(DAT_00874c84 * DAT_00969f78 * local_160) -
                  -(DAT_00874c84 * hero::g_heroGravityDir * local_158);
          local_17c = local_158 * fVar3 - local_160 * fVar5;
          local_178 = local_160 * fVar2 - local_15c * fVar3;
          local_180 = local_15c * fVar5 - local_158 * fVar2;
          mobyutil::MB_RotateQuatAxisAngle(-1.5707964,&local_180,&local_180);
          dVar25 = (double)local_160;
          dVar24 = (double)local_15c;
          dVar38 = (double)local_158;
          dVar22 = (double)SQRT(local_178 * local_178 +
                                local_180 * local_180 + local_17c * local_17c);
          fVar2 = (float)((double)DAT_00874c84 / dVar22);
          dVar39 = dVar23;
          if (dVar23 - dVar22 < 0.0) {
            dVar39 = (double)(local_180 * fVar2);
          }
          dVar26 = dVar23;
          if (dVar23 - dVar22 < 0.0) {
            dVar26 = (double)(local_17c * fVar2);
          }
          dVar28 = dVar23;
          if (dVar23 - dVar22 < 0.0) {
            dVar28 = (double)(local_178 * fVar2);
          }
          if (dVar22 - dVar23 < 0.0) {
            dVar39 = (double)(local_180 * fVar2);
          }
          if (dVar22 - dVar23 < 0.0) {
            dVar26 = (double)(local_17c * fVar2);
          }
          if (dVar22 - dVar23 < 0.0) {
            dVar28 = (double)(local_178 * fVar2);
          }
          local_180 = (float)dVar39;
          local_17c = (float)dVar26;
          local_178 = (float)dVar28;
          dVar39 = 0.44854962825775146;
          do {
            iVar12 = *(int *)((int)uVar20 + 0x30);
            if (iVar12 != 0) {
              local_e0 = (longlong)iVar13;
              mobyutil::MB_RotateQuatAxisAngle
                        ((float)((double)local_e0 * dVar39),&local_170,&local_180);
              *(float *)(iVar12 + 0x24) = (float)(dVar25 * dVar21 + (double)local_170);
              *(float *)(iVar12 + 0x28) = (float)(dVar24 * dVar21 + (double)local_16c);
              *(float *)(iVar12 + 0x2c) = (float)(dVar38 * dVar21 + (double)local_168);
              iVar14 = *(int *)((int)uVar20 + 0x30);
              *(undefined4 *)(iVar12 + 0x30) = *(undefined4 *)(iVar14 + 0x10);
              *(undefined4 *)(iVar12 + 0x34) = *(undefined4 *)(iVar14 + 0x14);
              *(undefined4 *)(iVar12 + 0x38) = *(undefined4 *)(iVar14 + 0x18);
              iVar14 = mobyutil::MB_randRange(DAT_00874c78,DAT_00874c7c);
              iVar14 = (int)(animationSpeed * (float)((double)(longlong)iVar14 + dVar21));
              local_e0 = (longlong)iVar14;
              uVar16 = (undefined2)iVar14;
              *(undefined2 *)(iVar12 + 0x3c) = uVar16;
              *(undefined2 *)(iVar12 + 0x3e) = uVar16;
            }
            iVar13 = iVar13 + 1;
            uVar20 = uVar20 + 4;
          } while (iVar13 < 8);
        }
      }
    }
    fVar2 = pfVar4[1];
    fVar5 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar5 = fVar2;
    }
    fVar3 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
      fVar3 = fVar5;
    }
    fVar5 = fVar3 * fVar3;
    fVar7 = fVar5 * fVar5 * fVar3;
    fVar8 = fVar5 * fVar7;
    *pfVar4 = DAT_00874c48 *
              (fVar5 * fVar8 * 2.601887e-06 +
              fVar8 * -0.0001980741 + fVar7 * 0.0083330255 + fVar5 * fVar3 * -0.16666657 + fVar3);
    dVar21 = (double)fastfunc::FastWrapRot(fVar2,DAT_00874c44);
    pfVar4[1] = (float)dVar21;
    if (DAT_00a15c7c == moby) {
      mobyupdate_helpers::M806_00466c98();
    }
    iVar13 = fastfunc::FastCheckBsphereInView(0x4050000000000000,local_190);
    if (-1 < iVar13) {
      RegisterFuncForMoby(&PTR_M807_004687d8_0070eb90,moby);
      fVar2 = (moby->pos).y - GameCamera.posY;
      fVar5 = (moby->pos).x - GameCamera.posX;
      if (SQRT(fVar5 * fVar5 + fVar2 * fVar2) <= 10.0) {
        fVar2 = 40.5;
      }
      else {
        fVar2 = 5.5;
      }
      fVar2 = animationSpeed * fVar2;
      uVar20 = 0;
      local_e0 = (longlong)(int)fVar2;
      do {
        mobyupdate_helpers::M806_00466b40(lVar11,&local_150,uVar20);
        iVar13 = partupd::SpawnPart_62(&local_150,(int)fVar2,2);
        if (iVar13 != 0) {
          *(float *)(iVar13 + 0x30) = *(float *)(iVar13 + 0x10) - (moby->pos).x;
          *(float *)(iVar13 + 0x34) = *(float *)(iVar13 + 0x14) - (moby->pos).y;
          *(float *)(iVar13 + 0x38) = *(float *)(iVar13 + 0x18) - (moby->pos).z;
          pMVar17 = moby;
          if (moby->state != '\x02') {
            pMVar17 = (MobyInstance *)pfVar4[3];
          }
          *(MobyInstance **)(iVar13 + 0x24) = pMVar17;
          *(undefined4 *)(iVar13 + 4) = DAT_00874c40;
          *(float *)(iVar13 + 0xc) = DAT_00874c38;
        }
        iVar12 = (int)((uVar20 & 0xffffffff) << 2);
        iVar13 = *(int *)((int)pfVar4 + iVar12 + 0x30);
        if (iVar13 == 0) {
          iVar13 = partupd::SpawnPart_62(&local_150,0,1);
          *(int *)((int)pfVar4 + iVar12 + 0x30) = iVar13;
          fVar5 = DAT_00874c4c;
          if (iVar13 != 0) {
            *(undefined4 *)(iVar13 + 0x2c) = 0;
            *(float *)(iVar13 + 0x28) = fVar5;
            *(undefined4 *)(*(int *)((int)pfVar4 + iVar12 + 0x30) + 0xc) = DAT_00874c3c;
            *(undefined4 *)(*(int *)((int)pfVar4 + iVar12 + 0x30) + 4) = DAT_00874c40;
          }
        }
        else {
          *(undefined4 *)(iVar13 + 0x10) = local_150;
          *(undefined4 *)(iVar13 + 0x14) = local_14c;
          *(undefined4 *)(iVar13 + 0x18) = local_148;
          *(undefined4 *)(iVar13 + 0x1c) = local_144;
          iVar13 = *(int *)((int)pfVar4 + iVar12 + 0x30);
          *(char *)(iVar13 + 8) = *(char *)(iVar13 + 8) + (char)DAT_00874c34;
        }
        iVar13 = (int)uVar20 + 1;
        uVar20 = (ulonglong)iVar13;
      } while (iVar13 < 8);
    }
  }
  return;
}



//==== 004687d8  ns=mobyupdate_helpers  size=0x9ac
// sig: undefined M807_004687d8(void)
// callers(0): 
// callees(12): 000685c4 draw::GetEffectTex; 00071170 stub::STUB_00071170; 00072280 draw::FastDrawQuad; 00074604 draw::DrawMeshSet; 00174f80 vuchain::SetGSReg; 00502758 fastfunc::FastDoubleToInt; 00502798 fastfunc::FastFMod; 00502e50 FUN_00502e50; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f7c idol_draw::Blend; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M807_004687d8(int param_1)

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
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  ulonglong *puVar19;
  int iVar20;
  undefined *puVar21;
  char acVar22 [4];
  ulonglong uVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  float *pfVar26;
  int iVar27;
  uint uVar28;
  float *pfVar29;
  short *psVar30;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  longlong lVar31;
  float *pfVar32;
  ulonglong unaff_r25;
  int iVar33;
  ulonglong unaff_r26;
  short *psVar34;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  int iVar35;
  ulonglong in_LR;
  longlong lVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar42;
  ulonglong in_f30;
  double dVar43;
  ulonglong in_f31;
  double dVar44;
  double dVar45;
  
  uVar23 = ZEXT48(&stack0x00000000);
  puVar19 = (ulonglong *)(uVar23 - 0x1d0);
  *puVar19 = uVar23;
  puVar19[0x3c] = in_LR;
  puVar19[0x33] = in_f25;
  puVar19[0x34] = in_f26;
  puVar19[0x35] = in_f27;
  puVar19[0x36] = in_f28;
  puVar19[0x37] = in_f29;
  puVar19[0x38] = in_f30;
  puVar19[0x39] = in_f31;
  puVar19[0x31] = unaff_r30;
  puVar19[0x30] = unaff_r29;
  puVar19[0x32] = unaff_r31;
  uVar16 = DAT_008774fc;
  pfVar32 = *(float **)(param_1 + 0x78);
  dVar44 = (double)DAT_00874c48;
  fVar1 = *pfVar32;
  puVar19[0x2f] = unaff_r28;
  puVar19[0x2e] = unaff_r27;
  puVar19[0x2d] = unaff_r26;
  puVar19[0x2c] = unaff_r25;
  puVar19[0x2b] = unaff_r24;
  puVar19[0x2a] = unaff_r23;
  puVar19[0x29] = unaff_r22;
  puVar19[0x28] = unaff_r21;
  dVar45 = (double)(float)((double)fVar1 / dVar44);
  uVar24 = draw::GetEffectTex((double)fVar1,uVar16);
  puVar19[0x25] = uVar24;
  uVar24 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar19[0x26] = uVar24;
  uVar24 = FUN_00502f08(0,0,0,0,0,0);
  puVar19[0x24] = uVar24;
  uVar24 = idol_draw::PackCmd(DAT_010cde1c,DAT_008774f0,DAT_010cde20,DAT_008774f4,DAT_008774f8);
  puVar19[0x27] = uVar24;
  uVar25 = idol_draw::Blend(1,0,0,3,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar25);
  fVar1 = *(float *)(param_1 + 0x10);
  fVar2 = *(float *)(param_1 + 0x14);
  *(float *)(puVar19 + 0x14) = fVar1;
  *(float *)((int)puVar19 + 0xa4) = fVar2;
  fVar5 = DAT_010ccf58;
  fVar6 = GameCamera.posZ;
  fVar4 = GameCamera.posY;
  fVar3 = GameCamera.posX;
  dVar43 = 0.5;
  fVar18 = *(float *)(param_1 + 0x18) + 0.5;
  fVar1 = fVar1 + DAT_010ccf50;
  fVar2 = fVar2 + DAT_010ccf54;
  *(float *)(puVar19 + 0x15) = fVar18;
  fVar18 = fVar18 + *pfVar32;
  fVar4 = fVar4 - fVar2;
  fVar3 = fVar3 - fVar1;
  fVar5 = fVar18 + fVar5;
  *(float *)(puVar19 + 0x15) = fVar18;
  *(float *)(puVar19 + 0x14) = fVar1;
  *(undefined4 *)((int)puVar19 + 0xac) = 0x3f800000;
  *(float *)((int)puVar19 + 0xa4) = fVar2;
  fVar6 = fVar6 - fVar5;
  *(float *)(puVar19 + 0x15) = fVar5;
  acVar22 = GameCamera.field8_0x14c;
  dVar42 = 0.0;
  fVar1 = fVar6 * fVar6 + fVar3 * fVar3 + fVar4 * fVar4;
  dVar44 = dVar42;
  dVar40 = dVar42;
  dVar41 = dVar42;
  if (SQRT(fVar1) != 0.0) {
    fVar2 = 1.0 / SQRT(fVar1);
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    dVar41 = (double)(fVar3 * fVar2);
    dVar40 = (double)(fVar4 * fVar2);
    dVar44 = (double)(fVar6 * fVar2);
  }
  fVar18 = pfVar32[3];
  *(float *)(puVar19 + 0xe) = (float)dVar41;
  *(float *)((int)puVar19 + 0x74) = (float)dVar40;
  *(float *)(puVar19 + 0xf) = (float)dVar44;
  *(char (*) [4])((int)puVar19 + 0x7c) = acVar22;
  fVar1 = (float)((double)*(float *)((int)fVar18 + 0xe8) * dVar41 -
                 (double)(float)((double)*(float *)((int)fVar18 + 0xe0) * dVar44));
  fVar2 = (float)((double)*(float *)((int)fVar18 + 0xe4) * dVar44 -
                 (double)(float)((double)*(float *)((int)fVar18 + 0xe8) * dVar40));
  fVar18 = (float)((double)*(float *)((int)fVar18 + 0xe0) * dVar40 -
                  (double)(float)((double)*(float *)((int)fVar18 + 0xe4) * dVar41));
  *(undefined4 *)((int)puVar19 + 0x8c) = 0;
  fVar3 = fVar18 * fVar18 + fVar2 * fVar2 + fVar1 * fVar1;
  dVar37 = dVar42;
  dVar38 = dVar42;
  dVar39 = dVar42;
  if (SQRT(fVar3) != 0.0) {
    fVar4 = 1.0 / SQRT(fVar3);
    fVar4 = -(fVar3 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar3 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar3 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    dVar39 = (double)(fVar2 * fVar4);
    dVar38 = (double)(fVar1 * fVar4);
    dVar37 = (double)(fVar18 * fVar4);
  }
  *(float *)(puVar19 + 0x10) = (float)dVar39;
  *(float *)((int)puVar19 + 0x84) = (float)dVar38;
  *(float *)(puVar19 + 0x11) = (float)dVar37;
  *(undefined4 *)((int)puVar19 + 0x9c) = 0;
  *(float *)(puVar19 + 0x12) = (float)(dVar40 * dVar37 - (double)(float)(dVar44 * dVar38));
  *(float *)((int)puVar19 + 0x94) = (float)(dVar44 * dVar39 - (double)(float)(dVar41 * dVar37));
  *(float *)(puVar19 + 0x13) = (float)(dVar41 * dVar38 - (double)(float)(dVar40 * dVar39));
  uVar17 = DAT_00877500;
  uVar16 = DAT_008774fc;
  *(undefined4 *)((int)puVar19 + 0xfc) = DAT_00877500;
  *(undefined4 *)(puVar19 + 0x1f) = uVar17;
  *(undefined4 *)((int)puVar19 + 0xf4) = uVar17;
  *(undefined4 *)(puVar19 + 0x1e) = uVar17;
  uVar25 = draw::GetEffectTex(uVar16);
  vuchain::SetGSReg(0x18,uVar25);
  uVar25 = idol_draw::PackCmd(0,1,0,1,0x80);
  vuchain::SetGSReg(3,uVar25);
  uVar25 = FUN_00502f08(0,0,0,0,0,0);
  vuchain::SetGSReg(6,uVar25);
  uVar25 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  vuchain::SetGSReg(0x1a,uVar25);
  uVar25 = FUN_00502e50(0);
  vuchain::SetGSReg(8,uVar25);
  stub::STUB_00071170();
  fVar1 = *(float *)(puVar19 + 0xe);
  fVar2 = *(float *)(puVar19 + 0x10);
  fVar18 = *(float *)(puVar19 + 0x12);
  fVar3 = *(float *)(puVar19 + 0x14);
  pfVar29 = (float *)&DAT_010cd084;
  fVar4 = *(float *)((int)puVar19 + 0x74);
  fVar5 = *(float *)((int)puVar19 + 0x84);
  pfVar26 = (float *)&DAT_00874d10;
  fVar6 = *(float *)((int)puVar19 + 0x94);
  fVar7 = *(float *)((int)puVar19 + 0xa4);
  lVar36 = 0x122;
  fVar8 = *(float *)(puVar19 + 0xf);
  fVar9 = *(float *)(puVar19 + 0x11);
  fVar10 = *(float *)(puVar19 + 0x13);
  fVar11 = *(float *)(puVar19 + 0x15);
  do {
    fVar12 = pfVar26[1];
    fVar13 = *pfVar26;
    fVar14 = pfVar26[2];
    fVar15 = pfVar26[3];
    pfVar26 = pfVar26 + 4;
    *pfVar29 = fVar15 * fVar3 + fVar14 * fVar18 + fVar13 * fVar1 + fVar12 * fVar2;
    pfVar29[1] = fVar15 * fVar7 + fVar14 * fVar6 + fVar13 * fVar4 + fVar12 * fVar5;
    pfVar29[2] = fVar15 * fVar11 + fVar14 * fVar10 + fVar13 * fVar8 + fVar12 * fVar9;
    pfVar29 = pfVar29 + 3;
    lVar36 = lVar36 + -1;
  } while (lVar36 != 0);
  draw::DrawMeshSet(0x94,&DAT_010cd084,&DAT_00876840,&DAT_00875f30,9);
  draw::DrawMeshSet(0x6d,&DAT_010cd75c,&DAT_00876a88,&DAT_008763c0,9);
  draw::DrawMeshSet(0x24,&DAT_010cdc6c,&DAT_00876c38,&DAT_00876720,9);
  uVar24 = draw::GetEffectTex(0xb);
  puVar19[0x25] = uVar24;
  uVar24 = idol_draw::PackCmd(0,2,0,1,0x80);
  puVar19[0x27] = uVar24;
  iVar27 = fastfunc::FastDoubleToInt((double)(float)(dVar45 * 64.0 + 128.0));
  *(undefined4 *)((int)puVar19 + 0xfc) = 0;
  puVar21 = PTR_DAT_00877508;
  psVar34 = &DAT_008772d0;
  iVar33 = 0;
  iVar27 = iVar27 + DAT_010ccf70;
  *(undefined4 *)(puVar19 + 0x1f) = 0;
  uVar28 = iVar27 * 0x1000000 | (uint)puVar21;
  *(uint *)((int)puVar19 + 0xf4) = uVar28;
  *(uint *)(puVar19 + 0x1e) = uVar28;
  do {
    iVar27 = 0;
    lVar36 = uVar23 - 0x120;
    psVar30 = psVar34;
    do {
      pfVar26 = (float *)lVar36;
      iVar35 = (int)((longlong)*psVar30 << 4);
      if (iVar27 < 2) {
        *pfVar26 = *(float *)(iVar35 + 0x876cd0) * DAT_00877504;
        pfVar26[1] = *(float *)(iVar35 + 0x876cd4) * DAT_00877504;
        fVar1 = *(float *)(iVar35 + 0x876cd8);
        fVar2 = *(float *)(iVar35 + 0x876cdc);
        fVar18 = DAT_00877504;
      }
      else {
        fVar18 = DAT_00877514 * DAT_00877504;
        *pfVar26 = *(float *)(iVar35 + 0x876cd0) * fVar18;
        pfVar26[1] = *(float *)(iVar35 + 0x876cd4) * fVar18;
        fVar1 = *(float *)(iVar35 + 0x876cd8);
        fVar2 = *(float *)(iVar35 + 0x876cdc);
      }
      iVar27 = iVar27 + 1;
      pfVar26[3] = fVar2;
      psVar30 = psVar30 + 1;
      pfVar26[2] = fVar1 * fVar18;
      lVar36 = lVar36 + 0x10;
    } while (iVar27 < 4);
    *(undefined4 *)(puVar19 + 0x20) = 0x3f000000;
    *(undefined4 *)((int)puVar19 + 0x104) = 0x3f000000;
    *(undefined4 *)(puVar19 + 0x21) = 0x3f000000;
    *(undefined4 *)((int)puVar19 + 0x10c) = 0x3f000000;
    *(undefined4 *)(puVar19 + 0x22) = 0x3f000000;
    *(undefined4 *)((int)puVar19 + 0x114) = 0x3f800000;
    uVar16 = EffectTexHeaders;
    *(undefined4 *)(puVar19 + 0x23) = 0x3f000000;
    *(undefined4 *)((int)puVar19 + 0x11c) = 0x3f800000;
    draw::FastDrawQuad(uVar23 - 0x120,uVar23 - 0x160,0,uVar16,9);
    iVar33 = iVar33 + 1;
    psVar34 = psVar34 + 4;
  } while (iVar33 < 0x20);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    uVar24 = draw::GetEffectTex(DAT_0087750c);
    puVar19[0x25] = uVar24;
    uVar24 = idol_draw::PackCmd(0,1,0,1,0x80);
    puVar19[0x27] = uVar24;
    fVar1 = pfVar32[3];
    *(undefined4 *)((int)puVar19 + 0xfc) = 0x107f7f7f;
    *(undefined4 *)(puVar19 + 0x1f) = 0x107f7f7f;
    *(undefined4 *)((int)puVar19 + 0xf4) = 0x107f7f7f;
    *(undefined4 *)(puVar19 + 0x1e) = 0x107f7f7f;
    *(undefined4 *)(puVar19 + 0xe) = *(undefined4 *)((int)fVar1 + 0xc0);
    *(undefined4 *)((int)puVar19 + 0x74) = *(undefined4 *)((int)fVar1 + 0xc4);
    *(undefined4 *)(puVar19 + 0xf) = *(undefined4 *)((int)fVar1 + 200);
    *(undefined4 *)((int)puVar19 + 0x7c) = *(undefined4 *)((int)fVar1 + 0xcc);
    *(undefined4 *)(puVar19 + 0x10) = *(undefined4 *)((int)fVar1 + 0xd0);
    *(undefined4 *)((int)puVar19 + 0x84) = *(undefined4 *)((int)fVar1 + 0xd4);
    *(undefined4 *)(puVar19 + 0x11) = *(undefined4 *)((int)fVar1 + 0xd8);
    *(undefined4 *)((int)puVar19 + 0x8c) = *(undefined4 *)((int)fVar1 + 0xdc);
    *(undefined4 *)(puVar19 + 0x12) = *(undefined4 *)((int)fVar1 + 0xe0);
    uVar16 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((int)puVar19 + 0x94) = *(undefined4 *)((int)fVar1 + 0xe4);
    iVar33 = 0;
    iVar27 = 0;
    *(undefined4 *)(puVar19 + 0x13) = *(undefined4 *)((int)fVar1 + 0xe8);
    uVar17 = *(undefined4 *)((int)fVar1 + 0xec);
    *(undefined4 *)(puVar19 + 0x15) = uVar16;
    *(undefined4 *)((int)puVar19 + 0x9c) = uVar17;
    do {
      uVar25 = 0x4020000000000000;
      lVar31 = uVar23 - 0x120;
      iVar35 = 0;
      psVar34 = (short *)((int)&DAT_008774d0 + iVar27);
      lVar36 = uVar23 - 0x1d0;
      do {
        fVar1 = *(float *)((int)puVar19 + 0x84);
        iVar20 = (int)((longlong)*psVar34 << 4);
        fVar2 = *(float *)(iVar20 + 0x8773d4);
        fVar18 = *(float *)(iVar20 + 0x8773d0);
        fVar3 = *(float *)((int)puVar19 + 0x74);
        fVar4 = *(float *)((int)puVar19 + 0x8c);
        fVar5 = *(float *)(iVar20 + 0x8773d8);
        fVar6 = *(float *)((int)puVar19 + 0x7c);
        fVar7 = *(float *)((int)puVar19 + 0x94);
        fVar8 = *(float *)(iVar20 + 0x8773dc);
        fVar9 = *(float *)((int)puVar19 + 0x9c);
        fVar10 = *(float *)((int)puVar19 + 0xa4);
        fVar11 = *(float *)((int)puVar19 + 0xac);
        fVar12 = *(float *)(puVar19 + 0x14) * fVar8 +
                 *(float *)(puVar19 + 0x12) * fVar5 +
                 *(float *)(puVar19 + 0xe) * fVar18 + *(float *)(puVar19 + 0x10) * fVar2;
        fVar13 = *(float *)(puVar19 + 0x15) * fVar8 +
                 *(float *)(puVar19 + 0x13) * fVar5 +
                 *(float *)(puVar19 + 0xf) * fVar18 + *(float *)(puVar19 + 0x11) * fVar2;
        pfVar32 = (float *)lVar31;
        *pfVar32 = fVar12;
        pfVar32[1] = fVar10 * fVar8 + fVar7 * fVar5 + fVar3 * fVar18 + fVar1 * fVar2;
        pfVar32[2] = fVar13;
        pfVar32[3] = fVar11 * fVar8 + fVar9 * fVar5 + fVar6 * fVar18 + fVar4 * fVar2;
        fVar13 = fVar13 - GameCamera.posZ;
        fVar12 = fVar12 - GameCamera.posX;
        dVar45 = (double)SQRT(fVar12 * fVar12 + fVar13 * fVar13);
        dVar40 = (double)(fVar12 * (float)((double)DAT_00877510 / dVar45));
        dVar41 = (double)(fVar13 * (float)((double)DAT_00877510 / dVar45));
        dVar44 = dVar42;
        if (dVar42 - dVar45 < 0.0) {
          dVar44 = dVar40;
        }
        dVar37 = dVar42;
        if (dVar42 - dVar45 < 0.0) {
          dVar37 = dVar41;
        }
        if (dVar45 - dVar42 < 0.0) {
          dVar44 = dVar40;
        }
        if (dVar45 - dVar42 < 0.0) {
          dVar37 = dVar41;
        }
        fVar1 = (float)(dVar44 * dVar43 + dVar43);
        iVar20 = (int)lVar36;
        *(float *)(iVar20 + 0x100) = fVar1;
        dVar44 = (double)fastfunc::FastFMod((double)fVar1,uVar25);
        *(float *)(iVar20 + 0x100) = (float)dVar44;
        fVar1 = (float)(dVar37 * dVar43 + dVar43);
        *(float *)(iVar20 + 0x104) = fVar1;
        dVar44 = (double)fastfunc::FastFMod((double)fVar1,uVar25);
        iVar35 = iVar35 + 1;
        *(float *)(iVar20 + 0x104) = (float)dVar44;
        psVar34 = psVar34 + 1;
        lVar31 = lVar31 + 0x10;
        lVar36 = lVar36 + 8;
      } while (iVar35 < 4);
      draw::FastDrawQuad(uVar23 - 0x120,0,0,EffectTexHeaders,9);
      iVar33 = iVar33 + 1;
      iVar27 = iVar27 + 8;
    } while (iVar33 < 4);
  }
  uVar25 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar25);
  return;
}



//==== 00469184  ns=mobyupdate_helpers  size=0x14
// sig: undefined M807_00469184(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M807_00469184(void)

{
  DAT_00877564 = 0x10000;
  return;
}



//==== 004691b8  ns=mobyupdate_helpers  size=0x3a4
// sig: undefined M807_004691b8(void)
// callers(1): 00469880 mobyupdate_unsorted::UpdateMoby_807
// callees(4): 001009b0 mobyutil::MB_MoveAndCollide; 00109c30 mobyutil::OrganicDelt; 0010a2e0 mobyutil::OrganicDeltAng; 00502578 fastfunc::FastWrapRot

double mobyupdate_helpers::M807_004691b8(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  int iVar7;
  ulonglong *puVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float *pfVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
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
  double dVar24;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0xf0;
  puVar8 = (ulonglong *)lVar12;
  *puVar8 = uVar10;
  puVar8[0x20] = in_LR;
  puVar8[0x1b] = in_f29;
  puVar8[0x1c] = in_f30;
  puVar8[0x1d] = in_f31;
  fVar1 = *param_2 - *(float *)(param_1 + 0x10);
  fVar4 = param_2[1] - *(float *)(param_1 + 0x14);
  puVar8[0x1a] = unaff_r31;
  puVar8[0x19] = unaff_r30;
  fVar2 = ABS(fVar1);
  fVar6 = ABS(fVar4);
  *(float *)((int)puVar8 + 0x84) = fVar1;
  puVar8[0x18] = unaff_r29;
  *(float *)(puVar8 + 0x11) = fVar4;
  iVar7 = *(int *)(param_1 + 0x78);
  *(float *)((int)puVar8 + 0x8c) = fVar2 - fVar6;
  dVar23 = 0.0;
  fVar1 = *(float *)(iVar7 + 0x1f8);
  uVar16 = (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x8c) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar8 + 0x11) >> 0x1d) & 4;
  fVar4 = ABS(*(float *)((int)puVar8 + 0x84));
  if (*(float *)((int)puVar8 + 0x8c) - 0.0 < 0.0) {
    fVar4 = fVar6;
  }
  fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
  fVar3 = ABS(*(float *)(puVar8 + 0x11));
  if (*(float *)((int)puVar8 + 0x8c) - 0.0 < 0.0) {
    fVar3 = fVar2;
  }
  fVar2 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  puVar8[0x17] = unaff_r28;
  puVar8[0x16] = unaff_r27;
  dVar19 = dVar23;
  if (0.0 < fVar4) {
    lVar11 = uVar10 - 0xe0;
    lVar17 = uVar10 - 0x50;
    lVar13 = uVar10 - 0x60;
    lVar18 = 2;
    fVar4 = (fVar3 - fVar4) / (fVar3 + fVar4);
    fVar3 = fVar4 * fVar4;
    *(float *)((int)puVar8 + 0x9c) = fVar4;
    *(float *)((int)puVar8 + 0x94) = fVar4;
    *(float *)(puVar8 + 0x13) = fVar4;
    *(float *)(puVar8 + 0x12) = fVar4;
    fVar4 = fVar3 * fVar3;
    *(float *)((int)puVar8 + 0x94) = *(float *)((int)puVar8 + 0x94) * fVar3;
    *(float *)(puVar8 + 0x13) = *(float *)(puVar8 + 0x13) * fVar4;
    *(float *)((int)puVar8 + 0x9c) = *(float *)((int)puVar8 + 0x9c) * fVar4 * fVar3;
    do {
      *(float *)((int)lVar11 + 0x90) = *(float *)((int)lVar11 + 0x80) * fVar4 * fVar4;
      iVar15 = (int)lVar13;
      lVar13 = lVar13 + 8;
      lVar11 = lVar11 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar15 + 4) * fVar4 * fVar4;
      lVar17 = lVar17 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar18 = 4;
    lVar17 = uVar10 - 0x60;
    pfVar14 = (float *)&DAT_007358e0;
    lVar11 = lVar12;
    lVar13 = lVar17;
    do {
      fVar4 = *pfVar14;
      fVar3 = pfVar14[1];
      pfVar14 = pfVar14 + 2;
      *(float *)((int)lVar11 + 0x90) = *(float *)((int)lVar11 + 0x90) * fVar4;
      lVar11 = lVar11 + 8;
      *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar3;
      lVar13 = lVar13 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar11 = 2;
    do {
      iVar15 = (int)lVar12;
      iVar9 = (int)lVar17;
      lVar12 = lVar12 + 0x10;
      lVar17 = lVar17 + 0x10;
      dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar15 + 0x90)) + *(float *)(iVar9 + 4)
                        + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    dVar19 = (double)((float)(dVar19 + 0.7853981852531433) * fVar6 + fVar2);
  }
  dVar19 = (double)fastfunc::FastWrapRot((float)dVar19,fVar1);
  fVar4 = *(float *)(param_1 + 0x14) - param_2[1];
  dVar22 = (double)*(float *)(param_1 + 0x18);
  fVar6 = *(float *)(param_1 + 0x10) - *param_2;
  fVar1 = param_2[2];
  iVar15 = 0x470000;
  *(undefined4 *)(puVar8 + 0x10) = 0;
  dVar24 = (double)SQRT((float)(dVar22 - (double)fVar1) * (float)(dVar22 - (double)fVar1) +
                        fVar6 * fVar6 + fVar4 * fVar4);
  mobyutil::OrganicDeltAng
            ((float)dVar19,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
             mobyutil::g_FrameTime * 12.566371,(float *)(param_1 + 0x48),0x470000,
             (float *)(iVar7 + 0x1f0));
  mobyutil::OrganicDelt
            ((float)dVar24,DAT_0071f418 * 8.0,DAT_0071f418 * 12.0,mobyutil::g_FrameTime * 4.0,
             (float *)(puVar8 + 0x10),iVar15,(float *)(iVar7 + 500));
  fVar1 = *(float *)(param_1 + 0xc4);
  fVar4 = *(float *)(param_1 + 0xc0);
  fVar6 = *(float *)(param_1 + 200);
  dVar19 = (double)SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar1 * fVar1);
  if (dVar19 == dVar23) {
    uVar5 = *(undefined4 *)(param_1 + 0xcc);
    dVar19 = dVar23;
    dVar20 = dVar23;
    dVar21 = dVar23;
  }
  else {
    fVar2 = (float)((double)*(float *)(iVar7 + 500) / dVar19);
    uVar5 = *(undefined4 *)(param_1 + 0xcc);
    dVar21 = (double)(fVar4 * fVar2);
    dVar20 = (double)(fVar1 * fVar2);
    dVar19 = (double)(fVar6 * fVar2);
  }
  *(float *)(puVar8 + 0xe) = (float)dVar21;
  *(float *)((int)puVar8 + 0x74) = (float)dVar20;
  *(float *)(puVar8 + 0xf) = (float)dVar19;
  *(undefined4 *)((int)puVar8 + 0x7c) = uVar5;
  *(float *)(puVar8 + 0xf) = -(DAT_0071f418 * 10.0 - *(float *)(iVar7 + 0x1fc));
  mobyutil::MB_MoveAndCollide(0x3fe0000000000000,0x3fe0000000000000,dVar23,param_1,uVar10 - 0x80);
  *(float *)(iVar7 + 0x1fc) = (float)(dVar22 - (double)*(float *)(param_1 + 0x18));
  return dVar24;
}



//==== 00469568  ns=mobyupdate_helpers  size=0x2e4
// sig: undefined M807_00469568(void)
// callers(1): 00469880 mobyupdate_unsorted::UpdateMoby_807
// callees(8): 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00111ba0 mobyutil::MB_getTargetInArea

void mobyupdate_helpers::M807_00469568(MobyInstance *param_1)

{
  void *pvVar1;
  Spline *pSVar2;
  float fVar3;
  float fVar4;
  MobyInstance *pMVar5;
  int iVar6;
  ulonglong uVar7;
  int local_30;
  float local_2c;
  float local_28 [4];
  
  pvVar1 = param_1->pVar;
  uVar7 = ZEXT48(pvVar1);
  if (param_1->state != '\0') {
    local_2c = 0.0;
    iVar6 = mobyutil::MB_damage(param_1,0x330000,0);
    mobyutil::MB_HandleDamage(param_1,iVar6,uVar7 + 0x20,0,&local_30,&local_2c,0,4);
    if (((local_30 != 1) && (param_1->state != '\v')) && (local_2c != 0.0)) {
      *(undefined4 *)((int)pvVar1 + 0x98) = 0x3f000000;
      *(float *)((int)pvVar1 + 0x20) = *(float *)((int)pvVar1 + 0x20) - local_2c;
      fVar4 = DAT_0071f418;
      fVar3 = DAT_0087759c * DAT_0071f418;
      *(undefined4 *)((int)pvVar1 + 0x90) = 0x200;
      *(float *)((int)pvVar1 + 0x80) = fVar3;
      *(float *)((int)pvVar1 + 0x84) = DAT_008775a0 * fVar4;
      fVar3 = mobyutil::g_FrameTime;
      *(float *)((int)pvVar1 + 0x88) = DAT_008775a4 * mobyutil::g_FrameTime;
      fVar4 = DAT_008775a8;
      *(undefined1 *)((int)pvVar1 + 0xad) = 0;
      *(float *)((int)pvVar1 + 0x8c) = fVar4 * fVar3;
      *(undefined4 *)((int)pvVar1 + 0x94) = 0x29;
      param_1->modeBits =
           param_1->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED);
      *(float *)((int)pvVar1 + 0xbc) = fVar3 * 2.0;
      mobyutil::MB_VecAtan2Angles
                (*(undefined8 *)(iVar6 + 0x10),*(undefined8 *)(iVar6 + 0x18),local_28,uVar7 + 0x88,
                 uVar7 + 0x8c);
      mobyutil::MB_StartKick((double)local_28[0],param_1,uVar7 + 0x70);
      *(undefined4 *)((int)pvVar1 + 0xc0) = 0x40e00000;
      *(undefined4 *)((int)pvVar1 + 0xc4) = 0x41600000;
      param_1->state = '\v';
      *(undefined1 *)((int)pvVar1 + 0x67) = 0x78;
      mobyutil::MB_UpdateLightsTransition(param_1,uVar7 + 0x60);
      mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
    }
    param_1->damage = -1;
    mobyutil::MB_ColorDyingMoby(param_1,uVar7 + 0x60);
    if (param_1->state == '\x03') {
      pSVar2 = Splines[*(int *)((int)pvVar1 + 0x1e4)];
      mobyutil::MB_getTargetInArea
                (0x4050000000000000,param_1,uVar7 + 0x180,pSVar2,0,0,pSVar2->points,pSVar2->cnt);
    }
    else {
      pSVar2 = Splines[*(int *)((int)pvVar1 + 0x1e0)];
      mobyutil::MB_getTargetInArea
                (0x4038000000000000,param_1,uVar7 + 0x180,pSVar2,0,0,pSVar2->points,pSVar2->cnt);
    }
    pMVar5 = g_heroMobyPtr;
    if (*(int *)((int)pvVar1 + 0x1c0) == 0) {
      *(float *)((int)pvVar1 + 0x180) = g_heroPosition.x;
      fVar3 = g_heroPosition.y;
      *(MobyInstance **)((int)pvVar1 + 0x1c0) = pMVar5;
      *(float *)((int)pvVar1 + 0x184) = fVar3;
      *(float *)((int)pvVar1 + 0x188) = g_heroPosition.z;
      *(float *)((int)pvVar1 + 0x18c) = g_heroPosition.w;
    }
  }
  return;
}



//==== 00469880  ns=mobyupdate_unsorted  size=0xe00
// sig: undefined UpdateMoby_807(MobyInstance * moby)
// callers(0): 
// callees(13): 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 001059f0 mobyutil::DamageSphereAtBone; 0010a2e0 mobyutil::OrganicDeltAng; 0010b030 mobyutil::MB_UpdateKick; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00113e88 mobyutil::MB_MayaFrameTrigger; 004691b8 mobyupdate_helpers::M807_004691b8; 00469568 mobyupdate_helpers::M807_00469568; 0048c188 FUN_0048c188

/* Moby 807 */

void mobyupdate_unsorted::UpdateMoby_807(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  Spline *pSVar9;
  ulonglong *puVar10;
  MobyInstance *pMVar11;
  float fVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  Vec4 *pVVar21;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar22;
  float *pfVar23;
  longlong lVar24;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  float fVar27;
  
  lVar14 = (longlong)(int)moby;
  uVar13 = ZEXT48(&stack0x00000000);
  lVar20 = uVar13 - 0x100;
  puVar10 = (ulonglong *)lVar20;
  *puVar10 = uVar13;
  puVar10[0x22] = in_LR;
  puVar10[0x1f] = unaff_r31;
  puVar10[0x1e] = unaff_r30;
  puVar10[0x1d] = unaff_r29;
  pvVar8 = moby->pVar;
  mobyupdate_helpers::M807_00469568();
  bVar1 = moby->state;
  iVar15 = *(int *)((int)pvVar8 + 0x1c0);
  if (bVar1 < 6) {
    if (bVar1 == 5) {
      fVar27 = *(float *)(iVar15 + 0x10) - (moby->pos).x;
      fVar5 = *(float *)(iVar15 + 0x14) - (moby->pos).y;
      fVar6 = ABS(fVar27);
      fVar4 = ABS(fVar5);
      *(float *)(puVar10 + 0x10) = fVar27;
      *(float *)((int)puVar10 + 0x84) = fVar5;
      *(float *)(puVar10 + 0x11) = fVar6 - fVar4;
      fVar27 = 0.0;
      uVar18 = (ulonglong)(*(uint *)(puVar10 + 0x10) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar10 + 0x11) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar10 + 0x84) >> 0x1d) & 4;
      fVar5 = ABS(*(float *)(puVar10 + 0x10));
      if (*(float *)(puVar10 + 0x11) - 0.0 < 0.0) {
        fVar5 = fVar4;
      }
      fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar4 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      fVar12 = ABS(*(float *)((int)puVar10 + 0x84));
      if (*(float *)(puVar10 + 0x11) - 0.0 < 0.0) {
        fVar12 = fVar6;
      }
      if (0.0 < fVar5) {
        lVar19 = uVar13 - 0xf0;
        lVar22 = uVar13 - 0x68;
        lVar24 = uVar13 - 0x58;
        lVar25 = 2;
        fVar5 = (fVar12 - fVar5) / (fVar12 + fVar5);
        fVar6 = fVar5 * fVar5;
        *(float *)((int)puVar10 + 0xa4) = fVar5;
        *(float *)((int)puVar10 + 0x9c) = fVar5;
        *(float *)(puVar10 + 0x14) = fVar5;
        *(float *)(puVar10 + 0x13) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)((int)puVar10 + 0x9c) = *(float *)((int)puVar10 + 0x9c) * fVar6;
        *(float *)(puVar10 + 0x14) = *(float *)(puVar10 + 0x14) * fVar5;
        *(float *)((int)puVar10 + 0xa4) = *(float *)((int)puVar10 + 0xa4) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar19 + 0x98) = *(float *)((int)lVar19 + 0x88) * fVar5 * fVar5;
          iVar15 = (int)lVar22;
          lVar19 = lVar19 + 8;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)(iVar15 + 4) * fVar5 * fVar5;
          lVar24 = lVar24 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar24 = uVar13 - 0x68;
        pfVar23 = (float *)&DAT_007358e0;
        lVar19 = lVar20;
        lVar22 = lVar24;
        do {
          fVar5 = *pfVar23;
          fVar6 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar19 + 0x98) = *(float *)((int)lVar19 + 0x98) * fVar5;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
          lVar22 = lVar22 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar19 = 2;
        do {
          iVar15 = (int)lVar20;
          iVar16 = (int)lVar24;
          lVar20 = lVar20 + 0x10;
          lVar24 = lVar24 + 0x10;
          fVar27 = fVar27 + *(float *)(iVar15 + 0x98) + *(float *)(iVar16 + 4) +
                   *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc);
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        fVar27 = (fVar27 + 0.7853982) * fVar7 + fVar4;
      }
      mobyutil::OrganicDeltAng
                (fVar27,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                 mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x46984c,
                 (float *)((int)pvVar8 + 0x1f0));
      if (*(int *)((int)pvVar8 + 0x1c4) != 2) {
        dVar26 = (double)mobyutil::MB_randRangeFloat(-20.0,20.0);
        *(float *)((int)pvVar8 + 0x1f8) = (float)(dVar26 * 0.01745329238474369);
        moby->state = '\x06';
        if (moby->animationId != '\x02') {
          puVar10[0x1b] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar14,2,0,*(undefined4 *)((int)puVar10 + 0xdc));
        }
      }
    }
    else if (bVar1 == 4) {
      pSVar9 = Splines[*(int *)((int)pvVar8 + 0x1e8)];
      dVar26 = (double)mobyupdate_helpers::M807_004691b8
                                 (lVar14,pSVar9->points + *(int *)((int)pvVar8 + 0x200));
      if (1.0 <= dVar26) {
        if ((*(int *)((int)pvVar8 + 0x1c4) != 2) &&
           (moby->state = '\x06', moby->animationId != '\x02')) {
          puVar10[0x1b] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar14,2,0,*(undefined4 *)((int)puVar10 + 0xdc));
        }
      }
      else if (*(int *)((int)pvVar8 + 0x200) < pSVar9->cnt + -1) {
        *(int *)((int)pvVar8 + 0x200) = *(int *)((int)pvVar8 + 0x200) + 1;
      }
      else {
        moby->state = '\x05';
        if (moby->animationId != '\0') {
          puVar10[0x1b] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar14,0,0,*(undefined4 *)((int)puVar10 + 0xdc));
        }
      }
    }
    else if (bVar1 == 3) {
      if ((*(int *)((int)pvVar8 + 0x1c4) != 2) &&
         (moby->state = '\x04', moby->animationId != '\x02')) {
        puVar10[0x1b] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar14,2,0,*(undefined4 *)((int)puVar10 + 0xdc));
      }
    }
    else if (bVar1 == 2) {
      dVar26 = (double)mobyupdate_helpers::M807_004691b8
                                 (lVar14,Splines[*(int *)((int)pvVar8 + 0x1e8)]->points +
                                         *(int *)((int)pvVar8 + 0x200));
      if ((dVar26 < 1.0) && (moby->state = '\x01', moby->animationId != '\x01')) {
        puVar10[0x1b] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar14,1,0,*(undefined4 *)((int)puVar10 + 0xdc));
      }
    }
    else if (bVar1 == 1) {
      pMVar11 = MobyInstance + *(int *)((int)pvVar8 + 0x1ec);
      if ((pMVar11 == (MobyInstance *)0x0) || (pMVar11->state == 0xfd || pMVar11->state == 0xfe)) {
        moby->state = '\b';
        if (moby->animationId != '\x02') {
          puVar10[0x1b] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar14,2,0,*(undefined4 *)((int)puVar10 + 0xdc));
        }
      }
      else {
        fVar27 = (pMVar11->pos).x - (moby->pos).x;
        fVar5 = (pMVar11->pos).y - (moby->pos).y;
        fVar6 = ABS(fVar27);
        fVar4 = ABS(fVar5);
        *(float *)((int)puVar10 + 0x8c) = fVar27;
        *(float *)(puVar10 + 0x12) = fVar5;
        *(float *)((int)puVar10 + 0x94) = fVar6 - fVar4;
        fVar27 = 0.0;
        uVar18 = (ulonglong)(*(uint *)((int)puVar10 + 0x8c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar10 + 0x94) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1d) & 4;
        fVar5 = ABS(*(float *)((int)puVar10 + 0x8c));
        if (*(float *)((int)puVar10 + 0x94) - 0.0 < 0.0) {
          fVar5 = fVar4;
        }
        fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
        fVar4 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
        fVar12 = ABS(*(float *)(puVar10 + 0x12));
        if (*(float *)((int)puVar10 + 0x94) - 0.0 < 0.0) {
          fVar12 = fVar6;
        }
        if (0.0 < fVar5) {
          lVar19 = uVar13 - 0xf0;
          lVar24 = uVar13 - 0x38;
          lVar22 = uVar13 - 0x48;
          lVar25 = 2;
          fVar5 = (fVar12 - fVar5) / (fVar12 + fVar5);
          fVar6 = fVar5 * fVar5;
          *(float *)((int)puVar10 + 0xc4) = fVar5;
          *(float *)((int)puVar10 + 0xbc) = fVar5;
          *(float *)(puVar10 + 0x18) = fVar5;
          *(float *)(puVar10 + 0x17) = fVar5;
          fVar5 = fVar6 * fVar6;
          *(float *)((int)puVar10 + 0xbc) = *(float *)((int)puVar10 + 0xbc) * fVar6;
          *(float *)(puVar10 + 0x18) = *(float *)(puVar10 + 0x18) * fVar5;
          *(float *)((int)puVar10 + 0xc4) = *(float *)((int)puVar10 + 0xc4) * fVar5 * fVar6;
          do {
            *(float *)((int)lVar19 + 0xb8) = *(float *)((int)lVar19 + 0xa8) * fVar5 * fVar5;
            iVar15 = (int)lVar22;
            lVar22 = lVar22 + 8;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)(iVar15 + 4) * fVar5 * fVar5;
            lVar24 = lVar24 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar25 = 4;
          lVar24 = uVar13 - 0x48;
          pfVar23 = (float *)&DAT_007358e0;
          lVar19 = lVar20;
          lVar22 = lVar24;
          do {
            fVar5 = *pfVar23;
            fVar6 = pfVar23[1];
            pfVar23 = pfVar23 + 2;
            *(float *)((int)lVar19 + 0xb8) = *(float *)((int)lVar19 + 0xb8) * fVar5;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
            lVar22 = lVar22 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar19 = 2;
          do {
            iVar15 = (int)lVar20;
            lVar20 = lVar20 + 0x10;
            iVar16 = (int)lVar24;
            lVar24 = lVar24 + 0x10;
            fVar27 = fVar27 + *(float *)(iVar15 + 0xb8) + *(float *)(iVar16 + 4) +
                     *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc);
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          fVar27 = (fVar27 + 0.7853982) * fVar7 + fVar4;
        }
        fVar27 = mobyutil::OrganicDeltAng
                           (fVar27,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                            mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x46984c,
                            (float *)((int)pvVar8 + 0x1f0));
        if (((moby->field43_0x70 & 2U) != 0) &&
           (iVar15 = mobyutil::MB_randInt((double)fVar27,3), iVar15 == 0)) {
          *(uint *)((int)pvVar8 + 0x200) = *(int *)((int)pvVar8 + 0x200) + 1U & 1;
          moby->state = '\x02';
          if (moby->animationId != '\x02') {
            puVar10[0x1b] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar14,2,0,*(undefined4 *)((int)puVar10 + 0xdc));
          }
        }
      }
    }
    else if (bVar1 == 0) {
      *(f32 *)((int)pvVar8 + 0x1d0) = (moby->pos).x;
      *(f32 *)((int)pvVar8 + 0x1d4) = (moby->pos).y;
      iVar15 = *(int *)((int)pvVar8 + 0x1e8);
      *(f32 *)((int)pvVar8 + 0x1d8) = (moby->pos).z;
      fVar3 = (moby->pos).w;
      *(undefined **)((int)pvVar8 + 0x140) = &DAT_00877590;
      *(f32 *)((int)pvVar8 + 0x1dc) = fVar3;
      if (iVar15 < 0) {
        moby->state = '\x05';
      }
      else if (*(int *)((int)pvVar8 + 0x1e4) < 0) {
        if (*(int *)((int)pvVar8 + 0x1ec) < 0) {
          mobyfunc::DeleteMoby(moby);
        }
        else {
          *(f32 *)((int)pvVar8 + 0x1d0) = (moby->pos).x;
          pSVar9 = Splines[iVar15];
          *(f32 *)((int)pvVar8 + 0x1d4) = (moby->pos).y;
          *(f32 *)((int)pvVar8 + 0x1d8) = (moby->pos).z;
          *(f32 *)((int)pvVar8 + 0x1dc) = (moby->pos).w;
          (moby->pos).x = pSVar9->points[0].x;
          (moby->pos).y = pSVar9->points[0].y;
          uVar2 = moby->animationId;
          (moby->pos).z = pSVar9->points[0].z;
          fVar27 = pSVar9->points[0].w;
          moby->state = '\x01';
          (moby->pos).w = fVar27;
          if (uVar2 != '\x01') {
            puVar10[0x1b] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar14,1,0,*(undefined4 *)((int)puVar10 + 0xdc));
          }
        }
      }
      else {
        pSVar9 = Splines[iVar15];
        pVVar21 = pSVar9->points + pSVar9->cnt + -1;
        *(float *)((int)pvVar8 + 0x1d0) = pVVar21->x;
        *(float *)((int)pvVar8 + 0x1d4) = pVVar21->y;
        *(float *)((int)pvVar8 + 0x1d8) = pVVar21->z;
        *(float *)((int)pvVar8 + 0x1dc) = pVVar21->w;
        (moby->pos).x = pSVar9->points[0].x;
        (moby->pos).y = pSVar9->points[0].y;
        (moby->pos).z = pSVar9->points[0].z;
        fVar27 = pSVar9->points[0].w;
        moby->state = '\x03';
        (moby->pos).w = fVar27;
      }
    }
  }
  else if (bVar1 == 0xb) {
    uVar17 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x70));
    if ((uVar17 & 0x140) != 0) {
      mobyutil::MB_SpawnExplosionSparks
                (0x3fe0000000000000,0x402a000000000000,lVar14,lVar14 + 0x10,&DAT_0046984c,
                 0xffffffffffffffff);
      mobyutil::MB_SpawnBoltsFromCrate(lVar14,0,0xffffffffffffffff);
      mobyfunc::DeleteMoby(moby);
    }
  }
  else if (bVar1 == 10) {
    uVar17 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x70));
    if (((uVar17 & 0x140) != 0) && (moby->state = '\x05', moby->animationId != '\0')) {
      puVar10[0x1b] = (longlong)(int)(animationSpeed * 10.5);
      mobyutil::MB_SetAnimation(lVar14,0,0,*(undefined4 *)((int)puVar10 + 0xdc));
    }
  }
  else if (bVar1 == 9) {
    iVar15 = FUN_0048c188(lVar14,(int)pvVar8 + 0x70);
    if (iVar15 != 0) {
      moby->state = '\x05';
      *(undefined2 *)((int)pvVar8 + 0x138) = 0;
    }
  }
  else if (bVar1 == 8) {
    dVar26 = (double)mobyupdate_helpers::M807_004691b8(lVar14,(int)pvVar8 + 0x1d0);
    if (1.5 <= dVar26) {
      if ((*(int *)((int)pvVar8 + 0x1c4) != 2) &&
         (moby->state = '\x06', moby->animationId != '\x02')) {
        puVar10[0x1b] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar14,2,0,*(undefined4 *)((int)puVar10 + 0xdc));
      }
    }
    else {
      moby->state = '\x05';
      if (moby->animationId != '\0') {
        puVar10[0x1b] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar14,0,0,*(undefined4 *)((int)puVar10 + 0xdc));
      }
    }
  }
  else if (bVar1 == 7) {
    iVar16 = mobyutil::MB_MayaFrameTrigger(13.0,moby);
    if (iVar16 == 0) {
      if ((moby->field43_0x70 & 2U) != 0) {
        if (*(int *)((int)pvVar8 + 0x1c4) == 2) {
          moby->state = '\b';
          if (moby->animationId != '\x02') {
            puVar10[0x1b] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar14,2,0,*(undefined4 *)((int)puVar10 + 0xdc));
          }
        }
        else {
          fVar27 = (moby->pos).y - *(float *)(iVar15 + 0x14);
          fVar5 = (moby->pos).x - *(float *)(iVar15 + 0x10);
          if ((1.5 < SQRT(fVar5 * fVar5 + fVar27 * fVar27)) &&
             (moby->state = '\x06', moby->animationId != '\x02')) {
            puVar10[0x1b] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar14,2,0,*(undefined4 *)((int)puVar10 + 0xdc));
          }
        }
      }
    }
    else {
      puVar10[0xe] = 0;
      mobyutil::DamageSphereAtBone
                (0x3fd54fdf40000000,0x3ff0000000000000,0x3ff0000000000000,lVar14,0,0,1);
    }
  }
  else if (bVar1 == 6) {
    dVar26 = (double)mobyupdate_helpers::M807_004691b8(lVar14,(int)pvVar8 + 0x180);
    if (1.5 <= dVar26) {
      if ((*(int *)((int)pvVar8 + 0x1c4) == 2) && (moby->state = '\b', moby->animationId != '\x02'))
      {
        puVar10[0x1b] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar14,2,0,*(undefined4 *)((int)puVar10 + 0xdc));
      }
    }
    else {
      moby->state = '\a';
      if (moby->animationId != '\x03') {
        puVar10[0x1b] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar14,3,0,*(undefined4 *)((int)puVar10 + 0xdc));
      }
    }
  }
  return;
}



//==== 0046a680  ns=mobyupdate_helpers  size=0x58
// sig: undefined M808_0046a680(void)
// callers(0): 
// callees(1): 0048a718 mobyupdate_helpers::M849_MB_Sucking

void mobyupdate_helpers::M808_0046a680(MobyInstance *param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_MB_Sucking(param_1);
  if ((int)uVar1 == 0) {
    if (param_1->state == '\t') {
      param_1->state = '\x05';
    }
  }
  else {
    param_1->state = '\t';
  }
  return;
}



//==== 0046a6d8  ns=mobyupdate_helpers  size=0x58
// sig: undefined M808_0046a6d8(void)
// callers(0): 
// callees(1): 0048aa70 mobyupdate_helpers::M849_0048aa70

void mobyupdate_helpers::M808_0046a6d8(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\t') {
      *(undefined1 *)(param_1 + 0x20) = 5;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 9;
  }
  return;
}



//==== 0046a730  ns=mobyupdate_helpers  size=0x58
// sig: undefined M808_0046a730(void)
// callers(0): 
// callees(1): 0048acb8 mobyupdate_helpers::M849_0048acb8

void mobyupdate_helpers::M808_0046a730(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048acb8();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\t') {
      *(undefined1 *)(param_1 + 0x20) = 5;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 9;
  }
  return;
}



//==== 0046a788  ns=mobyupdate_helpers  size=0x38
// sig: undefined M808_0046a788(void)
// callers(0): 
// callees(1): 0048afe8 mobyupdate_helpers::M849_0048afe8

void mobyupdate_helpers::M808_0046a788(int param_1)

{
  M849_0048afe8();
  *(undefined1 *)(param_1 + 0x20) = 9;
  return;
}



//==== 0046a7c0  ns=mobyupdate_helpers  size=0x40
// sig: undefined M808_0046a7c0(void)
// callers(0): 
// callees(0): 

longlong mobyupdate_helpers::M808_0046a7c0(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x78) + 0xd0;
    lVar1 = lVar1 + ((LZCOUNT(-*(uint *)(param_1 + 0x78)) << 0x3a) >> 0x3f & -lVar1);
  }
  return lVar1;
}



//==== 0046a800  ns=mobyupdate_helpers  size=0x14
// sig: undefined M808_0046a800(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M808_0046a800(void)

{
  DAT_008775f8 = 0x10000;
  return;
}



//==== 0046a830  ns=mobyupdate_helpers  size=0x640
// sig: undefined M808_0046a830(void)
// callers(1): 0046aec0 mobyupdate_unsorted::UpdateMoby_808
// callees(8): 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00111ba0 mobyutil::MB_getTargetInArea

void mobyupdate_helpers::M808_0046a830(MobyInstance *param_1)

{
  u8 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  f32 fVar6;
  MobyModeBit MVar7;
  void *pvVar8;
  uint uVar9;
  uint uVar10;
  MobyInstance *pMVar11;
  Spline *pSVar12;
  undefined2 uVar13;
  ulonglong *puVar14;
  float fVar15;
  int iVar16;
  MobyInstance *pMVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  float *pfVar25;
  longlong lVar26;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar27;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  ulonglong in_f31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  
  uVar18 = ZEXT48(&stack0x00000000);
  lVar21 = uVar18 - 0xd0;
  puVar14 = (ulonglong *)lVar21;
  *puVar14 = uVar18;
  puVar14[0x1c] = in_LR;
  puVar14[0x19] = in_f31;
  puVar14[0x18] = unaff_r31;
  uVar1 = param_1->state;
  puVar14[0x17] = unaff_r30;
  pvVar8 = param_1->pVar;
  uVar27 = ZEXT48(pvVar8);
  puVar14[0x16] = unaff_r29;
  puVar14[0x15] = unaff_r28;
  if (uVar1 != '\0') {
    dVar32 = 0.0;
    *(undefined4 *)((int)puVar14 + 0x74) = 0;
    iVar19 = mobyutil::MB_damage(param_1,0x330000,0);
    mobyutil::MB_HandleDamage(param_1,iVar19,uVar27 + 0x20,0,puVar14 + 0xe,(int)puVar14 + 0x74,0,4);
    if (((*(int *)(puVar14 + 0xe) != 1) && (param_1->state != '\b')) &&
       (*(int *)((int)puVar14 + 0x74) != 0)) {
      fVar4 = *(float *)((int)pvVar8 + 0x20) - *(float *)((int)puVar14 + 0x74);
      *(undefined4 *)((int)pvVar8 + 0x98) = 0x3f000000;
      *(float *)((int)pvVar8 + 0x20) = fVar4;
      fVar3 = DAT_0071f418;
      fVar5 = DAT_00877620 * DAT_0071f418;
      *(undefined4 *)((int)pvVar8 + 0x90) = 0x200;
      *(float *)((int)pvVar8 + 0x80) = fVar5;
      *(float *)((int)pvVar8 + 0x84) = DAT_00877624 * fVar3;
      fVar5 = mobyutil::g_FrameTime;
      *(float *)((int)pvVar8 + 0x88) = DAT_00877628 * mobyutil::g_FrameTime;
      fVar3 = DAT_0087762c;
      *(undefined1 *)((int)pvVar8 + 0xad) = 0;
      *(float *)((int)pvVar8 + 0x8c) = fVar3 * fVar5;
      *(float *)((int)pvVar8 + 0xbc) = fVar5 * 2.0;
      if (dVar32 < (double)fVar4) {
        *(undefined4 *)((int)pvVar8 + 0x94) = 9;
        uVar2 = *(undefined4 *)(iVar19 + 0x18);
        *(undefined4 *)(puVar14 + 6) = *(undefined4 *)(iVar19 + 0x10);
        *(undefined4 *)(puVar14 + 7) = uVar2;
        uVar2 = *(undefined4 *)(iVar19 + 0x1c);
        *(undefined4 *)((int)puVar14 + 0x34) = *(undefined4 *)(iVar19 + 0x14);
        *(undefined4 *)((int)puVar14 + 0x3c) = uVar2;
        mobyutil::MB_VecAtan2Angles(puVar14[6],puVar14[7],uVar18 - 0x54,uVar27 + 0x88,uVar27 + 0x8c)
        ;
        uVar9 = *(uint *)(iVar19 + 0x10);
        uVar10 = *(uint *)(iVar19 + 0x14);
        dVar30 = ABS((double)*(float *)(iVar19 + 0x10));
        dVar29 = ABS((double)*(float *)(iVar19 + 0x14));
        *(float *)(puVar14 + 0x10) = (float)(dVar30 - dVar29);
        uVar22 = (ulonglong)(uVar9 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar14 + 0x10) >> 0x1e) & 2 |
                 (ulonglong)(uVar10 >> 0x1d) & 4;
        uVar24 = uVar22 << 2;
        dVar31 = dVar30;
        if ((double)*(float *)(puVar14 + 0x10) - dVar32 < 0.0) {
          dVar31 = dVar29;
        }
        fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)uVar24);
        if ((double)*(float *)(puVar14 + 0x10) - dVar32 < 0.0) {
          dVar29 = dVar30;
        }
        fVar5 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
        if (dVar32 < dVar31) {
          lVar20 = uVar18 - 0xc0;
          lVar26 = uVar18 - 0x3c;
          lVar23 = uVar18 - 0x4c;
          lVar28 = 2;
          fVar3 = (float)(dVar29 - dVar31) / (float)(dVar29 + dVar31);
          fVar15 = fVar3 * fVar3;
          *(float *)(puVar14 + 0x12) = fVar3;
          *(float *)(puVar14 + 0x11) = fVar3;
          *(float *)((int)puVar14 + 0x8c) = fVar3;
          *(float *)((int)puVar14 + 0x84) = fVar3;
          fVar3 = fVar15 * fVar15;
          *(float *)(puVar14 + 0x11) = *(float *)(puVar14 + 0x11) * fVar15;
          *(float *)((int)puVar14 + 0x8c) = *(float *)((int)puVar14 + 0x8c) * fVar3;
          *(float *)(puVar14 + 0x12) = *(float *)(puVar14 + 0x12) * fVar3 * fVar15;
          do {
            *(float *)((int)lVar20 + 0x84) = *(float *)((int)lVar20 + 0x74) * fVar3 * fVar3;
            iVar19 = (int)lVar23;
            lVar23 = lVar23 + 8;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar26 + 4) = *(float *)(iVar19 + 4) * fVar3 * fVar3;
            lVar26 = lVar26 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar28 = 4;
          lVar26 = uVar18 - 0x4c;
          uVar24 = ZEXT48(&DAT_007358e0);
          lVar20 = lVar21;
          lVar23 = lVar26;
          do {
            pfVar25 = (float *)uVar24;
            fVar3 = pfVar25[1];
            uVar24 = uVar24 + 8;
            *(float *)((int)lVar20 + 0x84) = *(float *)((int)lVar20 + 0x84) * *pfVar25;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar3;
            lVar23 = lVar23 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar20 = 2;
          do {
            iVar19 = (int)lVar21;
            iVar16 = (int)lVar26;
            lVar21 = lVar21 + 0x10;
            lVar26 = lVar26 + 0x10;
            dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar19 + 0x84)) +
                              *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                             *(float *)(iVar16 + 0xc));
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar4 + fVar5);
        }
        mobyutil::MB_StartKick(dVar32,param_1,uVar27 + 0x70,uVar24,0xb,1,0);
        auVar33 = ZEXT416(0xffffffff);
        auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
        *(undefined4 *)((int)pvVar8 + 0xc0) = 0x40a00000;
        *(undefined4 *)((int)pvVar8 + 0xc4) = 0x41200000;
        param_1->state = '\a';
        auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
        *(undefined1 *)((int)pvVar8 + 0x67) = 0xfa;
        auVar33 = loadVectorLeftIndexed(0xc,0x46a818);
        auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar33 = vectorMultiplyAddFloatingPoint
                            (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,
                             auVar34);
        auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
        auVar33 = vectorSplatHalfWord(auVar33,1);
        uVar13 = storeVectorElementHalfWordIndexed(auVar33,0x26,uVar27);
        *(undefined2 *)((int)pvVar8 + 0x26) = uVar13;
        mobyutil::MB_UpdateLightsTransition(param_1,uVar27 + 0x60);
      }
      else {
        MVar7 = param_1->modeBits;
        *(undefined4 *)((int)pvVar8 + 0x94) = 0x29;
        param_1->modeBits =
             MVar7 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        uVar2 = *(undefined4 *)(iVar19 + 0x18);
        *(undefined4 *)(puVar14 + 6) = *(undefined4 *)(iVar19 + 0x10);
        *(undefined4 *)(puVar14 + 7) = uVar2;
        uVar2 = *(undefined4 *)(iVar19 + 0x1c);
        *(undefined4 *)((int)puVar14 + 0x34) = *(undefined4 *)(iVar19 + 0x14);
        *(undefined4 *)((int)puVar14 + 0x3c) = uVar2;
        mobyutil::MB_VecAtan2Angles(puVar14[6],puVar14[7],uVar18 - 0x58,uVar27 + 0x88,uVar27 + 0x8c)
        ;
        mobyutil::MB_StartKick((double)*(float *)(puVar14 + 0xf),param_1,uVar27 + 0x70);
        param_1->collision = (ushort *)0x0;
        *(undefined4 *)((int)pvVar8 + 0xc0) = 0x40e00000;
        *(undefined4 *)((int)pvVar8 + 0xc4) = 0x41600000;
        param_1->state = '\b';
        *(undefined1 *)((int)pvVar8 + 0x67) = 0x78;
        mobyutil::MB_UpdateLightsTransition(param_1,uVar27 + 0x60);
        mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
      }
    }
    param_1->damage = -1;
    mobyutil::MB_ColorDyingMoby(param_1,uVar27 + 0x60);
    if (param_1->state == '\x01') {
      pSVar12 = Splines[*(int *)((int)pvVar8 + 0x134)];
      mobyutil::MB_getTargetInArea
                (0x4050000000000000,param_1,uVar27 + 0xd0,pSVar12,0,0,pSVar12->points,pSVar12->cnt);
    }
    else {
      pSVar12 = Splines[*(int *)((int)pvVar8 + 0x130)];
      mobyutil::MB_getTargetInArea
                (0x4038000000000000,param_1,uVar27 + 0xd0,pSVar12,0,0,pSVar12->points,pSVar12->cnt);
    }
    pMVar17 = g_heroMobyPtr;
    pMVar11 = *(MobyInstance **)((int)pvVar8 + 0x110);
    if (*(MobyInstance **)((int)pvVar8 + 0x110) == (MobyInstance *)0x0) {
      *(float *)((int)pvVar8 + 0xd0) = g_heroPosition.x;
      fVar4 = g_heroPosition.y;
      *(MobyInstance **)((int)pvVar8 + 0x110) = pMVar17;
      *(float *)((int)pvVar8 + 0xd4) = fVar4;
      *(float *)((int)pvVar8 + 0xd8) = g_heroPosition.z;
      *(float *)((int)pvVar8 + 0xdc) = g_heroPosition.w;
      pMVar11 = pMVar17;
    }
    if (-1 < *(int *)((int)pvVar8 + 0x13c)) {
      pMVar17 = MobyInstance + *(int *)((int)pvVar8 + 0x13c);
      if (((pMVar17 == (MobyInstance *)0x0) || (pMVar17->state == 0xfe)) || (pMVar17->state == 0xfd)
         ) {
        *(undefined4 *)((int)pvVar8 + 0x13c) = 0xffffffff;
      }
      else {
        fVar4 = (param_1->pos).y;
        fVar3 = fVar4 - (pMVar17->pos).y;
        fVar4 = fVar4 - (pMVar11->pos).y;
        fVar5 = (param_1->pos).x;
        fVar15 = fVar5 - (pMVar17->pos).x;
        fVar5 = fVar5 - (pMVar11->pos).x;
        if (SQRT(fVar15 * fVar15 + fVar3 * fVar3) < SQRT(fVar5 * fVar5 + fVar4 * fVar4)) {
          *(MobyInstance **)((int)pvVar8 + 0x110) = pMVar17;
          *(f32 *)((int)pvVar8 + 0xd0) = (pMVar17->pos).x;
          *(f32 *)((int)pvVar8 + 0xd4) = (pMVar17->pos).y;
          *(f32 *)((int)pvVar8 + 0xd8) = (pMVar17->pos).z;
          fVar6 = (pMVar17->pos).w;
          *(undefined4 *)((int)pvVar8 + 0x114) = 1;
          *(f32 *)((int)pvVar8 + 0xdc) = fVar6;
        }
      }
    }
  }
  return;
}



//==== 0046aec0  ns=mobyupdate_unsorted  size=0x146c
// sig: undefined UpdateMoby_808(MobyInstance * moby)
// callers(0): 
// callees(11): 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 000ffb70 mobyutil::GetGroundZ; 00109c30 mobyutil::OrganicDelt; 0010a2e0 mobyutil::OrganicDeltAng; 0010b030 mobyutil::MB_UpdateKick; 00434898 FUN_00434898; 0046a830 mobyupdate_helpers::M808_0046a830

/* Moby 808 */

void mobyupdate_unsorted::UpdateMoby_808(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  void *pvVar14;
  Spline *pSVar15;
  undefined4 uVar16;
  ulonglong *puVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  ulonglong uVar21;
  int iVar22;
  Vec4 *pVVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  float *pfVar29;
  longlong lVar28;
  longlong lVar30;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar34;
  ulonglong in_f29;
  double dVar35;
  double dVar36;
  ulonglong in_f30;
  double dVar37;
  double dVar38;
  ulonglong in_f31;
  double dVar39;
  double dVar40;
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
  
  uVar21 = ZEXT48(&stack0x00000000);
  lVar27 = uVar21 - 0x210;
  puVar17 = (ulonglong *)lVar27;
  *puVar17 = uVar21;
  puVar17[0x44] = in_LR;
  puVar17[0x3d] = in_f27;
  puVar17[0x3e] = in_f28;
  puVar17[0x3f] = in_f29;
  puVar17[0x40] = in_f30;
  puVar17[0x41] = in_f31;
  puVar17[0x3c] = unaff_r31;
  puVar17[0x3b] = unaff_r30;
  puVar17[0x3a] = unaff_r29;
  puVar17[0x39] = unaff_r28;
  puVar17[0x38] = unaff_r27;
  pvVar14 = moby->pVar;
  mobyupdate_helpers::M808_0046a830();
  bVar1 = moby->state;
  iVar22 = *(int *)((int)pvVar14 + 0x110);
  if (bVar1 < 4) {
    if (bVar1 == 0) {
      *(f32 *)((int)pvVar14 + 0x120) = (moby->pos).x;
      *(f32 *)((int)pvVar14 + 0x124) = (moby->pos).y;
      *(f32 *)((int)pvVar14 + 0x128) = (moby->pos).z;
      *(f32 *)((int)pvVar14 + 300) = (moby->pos).w;
      iVar22 = mobyutil::MB_randInt(2);
      if (iVar22 != 0) {
        moby->modeBits = moby->modeBits | MIRROR;
      }
      if (*(int *)((int)pvVar14 + 0x138) < 0) {
        moby->state = '\x03';
      }
      else if (*(int *)((int)pvVar14 + 0x134) == -1) {
        mobyfunc::DeleteMoby(moby);
      }
      else {
        pSVar15 = Splines[*(int *)((int)pvVar14 + 0x138)];
        (moby->pos).x = pSVar15->points[0].x;
        (moby->pos).y = pSVar15->points[0].y;
        (moby->pos).z = pSVar15->points[0].z;
        fVar3 = pSVar15->points[0].w;
        moby->state = '\x01';
        (moby->pos).w = fVar3;
      }
    }
    else if (bVar1 < 2) {
      if ((*(int *)((int)pvVar14 + 0x114) != 2) &&
         (moby->state = '\x02', moby->animationId != '\x05')) {
        puVar17[0x36] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(moby,5,0,*(undefined4 *)((int)puVar17 + 0x1b4));
      }
    }
    else if (bVar1 < 3) {
      dVar34 = 0.0;
      *(undefined4 *)(puVar17 + 0x14) = 0;
      pVVar23 = Splines[*(int *)((int)pvVar14 + 0x138)]->points +
                Splines[*(int *)((int)pvVar14 + 0x138)]->cnt + -1;
      dVar39 = (double)pVVar23->x;
      dVar37 = (double)pVVar23->y;
      fVar3 = (float)(dVar39 - (double)(moby->pos).x);
      dVar35 = (double)pVVar23->z;
      fVar5 = (float)(dVar37 - (double)(moby->pos).y);
      fVar4 = ABS(fVar3);
      fVar6 = ABS(fVar5);
      *(float *)(puVar17 + 0x1c) = fVar3;
      *(float *)((int)puVar17 + 0xe4) = fVar5;
      *(float *)(puVar17 + 0x1d) = fVar4 - fVar6;
      uVar25 = (ulonglong)(*(uint *)(puVar17 + 0x1c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar17 + 0x1d) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar17 + 0xe4) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)(puVar17 + 0x1c));
      if (*(float *)(puVar17 + 0x1d) - 0.0 < 0.0) {
        fVar3 = fVar6;
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
      fVar5 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      fVar11 = ABS(*(float *)((int)puVar17 + 0xe4));
      if (*(float *)(puVar17 + 0x1d) - 0.0 < 0.0) {
        fVar11 = fVar4;
      }
      dVar36 = dVar34;
      if (0.0 < fVar3) {
        lVar26 = uVar21 - 0x200;
        lVar28 = uVar21 - 0x84;
        lVar30 = uVar21 - 0x74;
        lVar31 = 2;
        fVar3 = (fVar11 - fVar3) / (fVar11 + fVar3);
        fVar4 = fVar3 * fVar3;
        *(float *)(puVar17 + 0x33) = fVar3;
        *(float *)(puVar17 + 0x32) = fVar3;
        *(float *)((int)puVar17 + 0x194) = fVar3;
        *(float *)((int)puVar17 + 0x18c) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)(puVar17 + 0x32) = *(float *)(puVar17 + 0x32) * fVar4;
        *(float *)((int)puVar17 + 0x194) = *(float *)((int)puVar17 + 0x194) * fVar3;
        *(float *)(puVar17 + 0x33) = *(float *)(puVar17 + 0x33) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar26 + 0x18c) = *(float *)((int)lVar26 + 0x17c) * fVar3 * fVar3;
          iVar22 = (int)lVar28;
          lVar26 = lVar26 + 8;
          lVar28 = lVar28 + 8;
          *(float *)((int)lVar30 + 4) = *(float *)(iVar22 + 4) * fVar3 * fVar3;
          lVar30 = lVar30 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar30 = uVar21 - 0x84;
        pfVar29 = (float *)&DAT_007358e0;
        lVar26 = lVar27;
        lVar28 = lVar30;
        do {
          fVar3 = *pfVar29;
          fVar4 = pfVar29[1];
          pfVar29 = pfVar29 + 2;
          *(float *)((int)lVar26 + 0x18c) = *(float *)((int)lVar26 + 0x18c) * fVar3;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar4;
          lVar28 = lVar28 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar26 = 2;
        do {
          iVar22 = (int)lVar27;
          lVar27 = lVar27 + 0x10;
          iVar18 = (int)lVar30;
          lVar30 = lVar30 + 0x10;
          dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar22 + 0x18c)) +
                            *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) +
                           *(float *)(iVar18 + 0xc));
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        dVar36 = (double)((float)(dVar36 + 0.7853981852531433) * fVar6 + fVar5);
      }
      iVar22 = 0x470000;
      mobyutil::OrganicDeltAng
                ((float)dVar36,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                 mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x470000,
                 (float *)((int)pvVar14 + 0x140));
      dVar38 = (double)(float)(dVar37 - (double)(moby->pos).y);
      dVar40 = (double)(float)(dVar39 - (double)(moby->pos).x);
      dVar36 = (double)(float)(dVar35 - (double)(moby->pos).z);
      fVar3 = SQRT((float)(dVar36 * dVar36 +
                          (double)(float)(dVar40 * dVar40 + (double)(float)(dVar38 * dVar38))));
      dVar39 = (double)fVar3;
      mobyutil::OrganicDelt
                (fVar3,DAT_0071f418 * 8.0,DAT_0071f418 * 16.0,mobyutil::g_FrameTime * 12.0,
                 (float *)(puVar17 + 0x14),iVar22,(float *)((int)pvVar14 + 0x144));
      dVar37 = (double)(float)((double)*(float *)((int)pvVar14 + 0x144) / dVar39);
      uVar2 = moby->animationId;
      dVar35 = dVar34;
      if (dVar34 - dVar39 < 0.0) {
        dVar35 = (double)(float)(dVar36 * dVar37);
      }
      dVar33 = dVar34;
      if (dVar34 - dVar39 < 0.0) {
        dVar33 = (double)(float)(dVar38 * dVar37);
      }
      dVar32 = dVar34;
      if (dVar34 - dVar39 < 0.0) {
        dVar32 = (double)(float)(dVar40 * dVar37);
      }
      if (dVar39 - dVar34 < 0.0) {
        dVar35 = (double)(float)(dVar36 * dVar37);
      }
      if (dVar39 - dVar34 < 0.0) {
        dVar33 = (double)(float)(dVar38 * dVar37);
      }
      if (dVar39 - dVar34 < 0.0) {
        dVar32 = (double)(float)(dVar40 * dVar37);
      }
      (moby->pos).z = (float)((double)(moby->pos).z + dVar35);
      (moby->pos).y = (float)((double)(moby->pos).y + dVar33);
      (moby->pos).x = (float)((double)(moby->pos).x + dVar32);
      if ((dVar39 < 0.009999999776482582) && (moby->state = '\x03', uVar2 != '\0')) {
        puVar17[0x36] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar17 + 0x1b4));
      }
    }
    else {
      fVar3 = *(float *)(iVar22 + 0x10) - (moby->pos).x;
      fVar5 = *(float *)(iVar22 + 0x14) - (moby->pos).y;
      fVar6 = ABS(fVar3);
      fVar4 = ABS(fVar5);
      *(float *)((int)puVar17 + 0xd4) = fVar3;
      *(float *)(puVar17 + 0x1b) = fVar5;
      *(float *)((int)puVar17 + 0xdc) = fVar6 - fVar4;
      fVar3 = 0.0;
      uVar25 = (ulonglong)(*(uint *)((int)puVar17 + 0xd4) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar17 + 0xdc) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar17 + 0x1b) >> 0x1d) & 4;
      fVar5 = ABS(*(float *)((int)puVar17 + 0xd4));
      if (*(float *)((int)puVar17 + 0xdc) - 0.0 < 0.0) {
        fVar5 = fVar4;
      }
      fVar11 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
      fVar4 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      fVar19 = ABS(*(float *)(puVar17 + 0x1b));
      if (*(float *)((int)puVar17 + 0xdc) - 0.0 < 0.0) {
        fVar19 = fVar6;
      }
      if (0.0 < fVar5) {
        lVar26 = uVar21 - 0x200;
        lVar28 = uVar21 - 0xa4;
        lVar30 = uVar21 - 0x94;
        lVar31 = 2;
        fVar5 = (fVar19 - fVar5) / (fVar19 + fVar5);
        fVar6 = fVar5 * fVar5;
        *(float *)(puVar17 + 0x2f) = fVar5;
        *(float *)(puVar17 + 0x2e) = fVar5;
        *(float *)((int)puVar17 + 0x174) = fVar5;
        *(float *)((int)puVar17 + 0x16c) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)(puVar17 + 0x2e) = *(float *)(puVar17 + 0x2e) * fVar6;
        *(float *)((int)puVar17 + 0x174) = *(float *)((int)puVar17 + 0x174) * fVar5;
        *(float *)(puVar17 + 0x2f) = *(float *)(puVar17 + 0x2f) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar26 + 0x16c) = *(float *)((int)lVar26 + 0x15c) * fVar5 * fVar5;
          iVar22 = (int)lVar28;
          lVar26 = lVar26 + 8;
          lVar28 = lVar28 + 8;
          *(float *)((int)lVar30 + 4) = *(float *)(iVar22 + 4) * fVar5 * fVar5;
          lVar30 = lVar30 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar30 = uVar21 - 0xa4;
        pfVar29 = (float *)&DAT_007358e0;
        lVar26 = lVar27;
        lVar28 = lVar30;
        do {
          fVar5 = *pfVar29;
          fVar6 = pfVar29[1];
          pfVar29 = pfVar29 + 2;
          *(float *)((int)lVar26 + 0x16c) = *(float *)((int)lVar26 + 0x16c) * fVar5;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar6;
          lVar28 = lVar28 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar26 = 2;
        do {
          iVar22 = (int)lVar27;
          iVar18 = (int)lVar30;
          lVar27 = lVar27 + 0x10;
          lVar30 = lVar30 + 0x10;
          fVar3 = fVar3 + *(float *)(iVar22 + 0x16c) + *(float *)(iVar18 + 4) +
                  *(float *)(iVar18 + 8) + *(float *)(iVar18 + 0xc);
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        fVar3 = (fVar3 + 0.7853982) * fVar11 + fVar4;
      }
      mobyutil::OrganicDeltAng
                (fVar3,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                 mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x46ae70,
                 (float *)((int)pvVar14 + 0x140));
      if ((*(int *)((int)pvVar14 + 0x114) != 2) && (moby->state = '\x04', moby->animationId != '\a')
         ) {
        puVar17[0x36] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(moby,7,0,*(undefined4 *)((int)puVar17 + 0x1b4));
      }
    }
  }
  else if (bVar1 < 7) {
    if (bVar1 < 5) {
      fVar3 = *(float *)(iVar22 + 0x10) - (moby->pos).x;
      fVar5 = *(float *)(iVar22 + 0x14) - (moby->pos).y;
      fVar6 = ABS(fVar3);
      fVar4 = ABS(fVar5);
      *(float *)(puVar17 + 0x19) = fVar3;
      *(float *)((int)puVar17 + 0xcc) = fVar5;
      *(float *)(puVar17 + 0x1a) = fVar6 - fVar4;
      fVar3 = 0.0;
      uVar25 = (ulonglong)(*(uint *)(puVar17 + 0x19) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar17 + 0x1a) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar17 + 0xcc) >> 0x1d) & 4;
      fVar5 = ABS(*(float *)(puVar17 + 0x19));
      if (*(float *)(puVar17 + 0x1a) - 0.0 < 0.0) {
        fVar5 = fVar4;
      }
      fVar11 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
      fVar4 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      fVar19 = ABS(*(float *)((int)puVar17 + 0xcc));
      if (*(float *)(puVar17 + 0x1a) - 0.0 < 0.0) {
        fVar19 = fVar6;
      }
      if (0.0 < fVar5) {
        lVar26 = uVar21 - 0x200;
        lVar28 = uVar21 - 0xc4;
        lVar30 = uVar21 - 0xb4;
        lVar31 = 2;
        fVar5 = (fVar19 - fVar5) / (fVar19 + fVar5);
        fVar6 = fVar5 * fVar5;
        *(float *)(puVar17 + 0x2b) = fVar5;
        *(float *)(puVar17 + 0x2a) = fVar5;
        *(float *)((int)puVar17 + 0x154) = fVar5;
        *(float *)((int)puVar17 + 0x14c) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)(puVar17 + 0x2a) = *(float *)(puVar17 + 0x2a) * fVar6;
        *(float *)((int)puVar17 + 0x154) = *(float *)((int)puVar17 + 0x154) * fVar5;
        *(float *)(puVar17 + 0x2b) = *(float *)(puVar17 + 0x2b) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar26 + 0x14c) = *(float *)((int)lVar26 + 0x13c) * fVar5 * fVar5;
          iVar22 = (int)lVar28;
          lVar26 = lVar26 + 8;
          lVar28 = lVar28 + 8;
          *(float *)((int)lVar30 + 4) = *(float *)(iVar22 + 4) * fVar5 * fVar5;
          lVar30 = lVar30 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar30 = uVar21 - 0xc4;
        pfVar29 = (float *)&DAT_007358e0;
        lVar26 = lVar27;
        lVar28 = lVar30;
        do {
          fVar5 = *pfVar29;
          fVar6 = pfVar29[1];
          pfVar29 = pfVar29 + 2;
          *(float *)((int)lVar26 + 0x14c) = *(float *)((int)lVar26 + 0x14c) * fVar5;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar6;
          lVar28 = lVar28 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar26 = 2;
        do {
          iVar22 = (int)lVar27;
          iVar18 = (int)lVar30;
          lVar27 = lVar27 + 0x10;
          lVar30 = lVar30 + 0x10;
          fVar3 = fVar3 + *(float *)(iVar22 + 0x14c) + *(float *)(iVar18 + 4) +
                  *(float *)(iVar18 + 8) + *(float *)(iVar18 + 0xc);
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        fVar3 = (fVar3 + 0.7853982) * fVar11 + fVar4;
      }
      mobyutil::OrganicDeltAng
                (fVar3,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                 mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x46ae70,
                 (float *)((int)pvVar14 + 0x140));
      if ((moby->field43_0x70 & 2U) != 0) {
        *(undefined4 *)((int)pvVar14 + 0x148) = 0;
        moby->state = '\x05';
        if (moby->animationId != '\b') {
          puVar17[0x36] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(moby,8,0,*(undefined4 *)((int)puVar17 + 0x1b4));
        }
      }
    }
    else if (bVar1 < 6) {
      if ((moby->field43_0x70 & 2U) != 0) {
        mobyfunc::GetBonePosition(moby,0,uVar21 - 400);
        fVar4 = DAT_0087761c;
        fVar3 = (moby->rotation).z;
        fVar5 = fVar3 + 1.5707963;
        fVar6 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar6 = fVar3;
        }
        fVar11 = 3.1415925 - fVar5;
        if (fVar5 - (3.1415925 - fVar5) < 0.0) {
          fVar11 = fVar5;
        }
        fVar19 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar6 < 0.0) {
          fVar19 = fVar6;
        }
        fVar3 = -3.1415925 - fVar5;
        if ((-3.1415925 - fVar5) - fVar11 < 0.0) {
          fVar3 = fVar11;
        }
        fVar5 = fVar19 * fVar19;
        fVar6 = fVar3 * fVar3;
        fVar10 = fVar5 * fVar5 * fVar19;
        fVar11 = fVar6 * fVar6 * fVar3;
        fVar12 = fVar5 * fVar10;
        fVar20 = fVar6 * fVar11;
        *(undefined4 *)((int)puVar17 + 0x9c) = *(undefined4 *)((int)puVar17 + 0x8c);
        *(float *)((int)puVar17 + 0x94) = *(float *)((int)puVar17 + 0x84);
        *(undefined4 *)(puVar17 + 0x13) = *(undefined4 *)(puVar17 + 0x11);
        *(float *)(puVar17 + 0x12) = *(float *)(puVar17 + 0x10);
        *(float *)((int)puVar17 + 0x94) =
             (fVar5 * fVar12 * 2.601887e-06 +
             fVar12 * -0.0001980741 + fVar10 * 0.0083330255 + fVar5 * fVar19 * -0.16666657 + fVar19)
             * fVar4 + *(float *)((int)puVar17 + 0x84);
        *(float *)(puVar17 + 0x12) =
             (fVar6 * fVar20 * 2.601887e-06 +
             fVar20 * -0.0001980741 + fVar11 * 0.0083330255 + fVar6 * fVar3 * -0.16666657 + fVar3) *
             fVar4 + *(float *)(puVar17 + 0x10);
        dVar34 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,uVar21 - 0x180,0);
        fVar3 = (moby->pos).z;
        dVar35 = (double)fVar3;
        fVar5 = *(float *)(puVar17 + 0x10);
        auVar41 = loadVectorLeftIndexed(0x90,lVar27);
        auVar44 = loadVectorLeftIndexed(0x84,lVar27);
        auVar42 = loadVectorLeftIndexed(0x80,lVar27);
        auVar43 = loadVectorLeftIndexed(0x94,lVar27);
        *(float *)(puVar17 + 0x13) = (float)dVar34;
        fVar6 = *(float *)((int)puVar17 + 0x84);
        fVar4 = *(float *)(puVar17 + 0x11);
        uVar7 = *(undefined4 *)((int)puVar17 + 0x9c);
        uVar8 = *(undefined4 *)((int)puVar17 + 0x8c);
        if (dVar34 < dVar35) {
          *(float *)(puVar17 + 0x13) = fVar3;
          dVar34 = dVar35;
        }
        auVar45 = ZEXT416(0xffffffff);
        auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
        auVar46 = vectorShiftLeftIntegerWord(auVar45,auVar45);
        auVar45 = loadVectorLeftIndexed(0x40,0x46ae70);
        fVar20 = animationSpeed * 20.5;
        auVar45 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar47 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar46 = vectorMultiplyAddFloatingPoint
                            (auVar47,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,
                             auVar46);
        auVar45 = ZEXT416(0xffffffff);
        auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
        auVar44 = vectorSubtractFloatingPoint(auVar43,auVar44);
        auVar43 = ZEXT416(0xffffffff);
        auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar42 = vectorSubtractFloatingPoint(auVar41,auVar42);
        auVar48 = vectorShiftLeftIntegerWord(auVar45,auVar45);
        auVar41 = loadVectorLeftIndexed(0x48,0x46ae70);
        auVar45 = vectorShiftLeftIntegerWord(auVar43,auVar43);
        auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar47 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar41 = ZEXT416(0xffffffff);
        auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar46 = vectorConvertToSignedFixedPointWordSaturate(auVar46,0);
        auVar43 = vectorShiftLeftIntegerWord(auVar41,auVar41);
        auVar41 = ZEXT416(0xffffffff);
        auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar49 = vectorShiftLeftIntegerWord(auVar41,auVar41);
        auVar46 = vectorConvertFromSignedFixedPointWord(auVar46,0);
        auVar41 = vectorReciprocalEstimateFloatingPoint(auVar46);
        fVar19 = 1.0 / (float)(longlong)fVar20;
        auVar50 = vectorNegativeMultiplySubtractFloatingPoint(auVar41,auVar46,auVar47);
        auVar48 = vectorMultiplyAddFloatingPoint(auVar41,auVar50,auVar48);
        auVar41 = ZEXT416(0xffffffff);
        auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar50 = vectorShiftLeftIntegerWord(auVar41,auVar41);
        auVar41 = vectorNegativeMultiplySubtractFloatingPoint(auVar48,auVar46,auVar47);
        auVar41 = vectorMultiplyAddFloatingPoint(auVar48,auVar41,auVar43);
        auVar43 = vectorNegativeMultiplySubtractFloatingPoint(auVar41,auVar46,auVar47);
        fVar3 = (*(float *)(puVar17 + 0x12) - fVar5) * fVar19;
        fVar11 = (*(float *)((int)puVar17 + 0x94) - fVar6) * fVar19;
        auVar43 = vectorMultiplyAddFloatingPoint(auVar41,auVar43,auVar49);
        auVar41 = vectorMultiplyAddFloatingPoint(auVar42,auVar43,auVar45);
        auVar42 = vectorMultiplyAddFloatingPoint(auVar44,auVar43,auVar50);
        auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar16 = storeVectorElementWordIndexed
                           (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,0xbc,
                            lVar27);
        *(undefined4 *)((int)puVar17 + 0xbc) = uVar16;
        uVar16 = storeVectorElementWordIndexed
                           (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0xc0,
                            lVar27);
        *(undefined4 *)(puVar17 + 0x18) = uVar16;
        *(float *)((int)puVar17 + 0xc4) = ABS(fVar3) - ABS(fVar11);
        dVar35 = 0.0;
        fVar19 = (float)(dVar34 - (double)fVar4) * fVar19;
        uVar25 = (ulonglong)(*(uint *)((int)puVar17 + 0xbc) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar17 + 0xc4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar17 + 0x18) >> 0x1d) & 4;
        fVar10 = ABS(*(float *)((int)puVar17 + 0xbc));
        if (*(float *)((int)puVar17 + 0xc4) - 0.0 < 0.0) {
          fVar10 = ABS(fVar11);
        }
        fVar12 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
        fVar13 = ABS(*(float *)(puVar17 + 0x18));
        if (*(float *)((int)puVar17 + 0xc4) - 0.0 < 0.0) {
          fVar13 = ABS(fVar3);
        }
        fVar9 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
        dVar34 = dVar35;
        if (0.0 < fVar10) {
          lVar26 = uVar21 - 0x200;
          lVar30 = uVar21 - 0xd4;
          lVar28 = uVar21 - 0xe4;
          lVar31 = 2;
          fVar10 = (fVar13 - fVar10) / (fVar13 + fVar10);
          fVar13 = fVar10 * fVar10;
          *(float *)(puVar17 + 0x27) = fVar10;
          *(float *)(puVar17 + 0x26) = fVar10;
          *(float *)((int)puVar17 + 0x134) = fVar10;
          *(float *)((int)puVar17 + 300) = fVar10;
          fVar10 = fVar13 * fVar13;
          *(float *)(puVar17 + 0x26) = *(float *)(puVar17 + 0x26) * fVar13;
          *(float *)((int)puVar17 + 0x134) = *(float *)((int)puVar17 + 0x134) * fVar10;
          *(float *)(puVar17 + 0x27) = *(float *)(puVar17 + 0x27) * fVar10 * fVar13;
          do {
            *(float *)((int)lVar26 + 300) = *(float *)((int)lVar26 + 0x11c) * fVar10 * fVar10;
            iVar22 = (int)lVar28;
            lVar28 = lVar28 + 8;
            lVar26 = lVar26 + 8;
            *(float *)((int)lVar30 + 4) = *(float *)(iVar22 + 4) * fVar10 * fVar10;
            lVar30 = lVar30 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar31 = 4;
          lVar30 = uVar21 - 0xe4;
          pfVar29 = (float *)&DAT_007358e0;
          lVar26 = lVar27;
          lVar28 = lVar30;
          do {
            fVar10 = *pfVar29;
            fVar13 = pfVar29[1];
            pfVar29 = pfVar29 + 2;
            *(float *)((int)lVar26 + 300) = *(float *)((int)lVar26 + 300) * fVar10;
            lVar26 = lVar26 + 8;
            *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar13;
            lVar28 = lVar28 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar28 = 2;
          lVar26 = lVar27;
          do {
            iVar22 = (int)lVar26;
            iVar18 = (int)lVar30;
            lVar26 = lVar26 + 0x10;
            lVar30 = lVar30 + 0x10;
            dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar22 + 300)) +
                              *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) +
                             *(float *)(iVar18 + 0xc));
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar12 + fVar9);
        }
        *(float *)((int)puVar17 + 0xb4) = fVar19;
        fVar10 = SQRT(fVar3 * fVar3 + fVar11 * fVar11);
        fVar12 = ABS(fVar10);
        *(float *)(puVar17 + 0x16) = fVar10;
        *(float *)(puVar17 + 0x17) = fVar12 - ABS(fVar19);
        uVar25 = (ulonglong)(*(uint *)(puVar17 + 0x16) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar17 + 0x17) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar17 + 0xb4) >> 0x1d) & 4;
        fVar10 = ABS(*(float *)(puVar17 + 0x16));
        if (*(float *)(puVar17 + 0x17) - 0.0 < 0.0) {
          fVar10 = ABS(fVar19);
        }
        fVar13 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
        fVar9 = ABS(*(float *)((int)puVar17 + 0xb4));
        if (*(float *)(puVar17 + 0x17) - 0.0 < 0.0) {
          fVar9 = fVar12;
        }
        fVar12 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
        if (0.0 < fVar10) {
          lVar26 = uVar21 - 0x200;
          lVar30 = uVar21 - 0xf4;
          lVar28 = uVar21 - 0x104;
          lVar31 = 2;
          fVar10 = (fVar9 - fVar10) / (fVar9 + fVar10);
          fVar9 = fVar10 * fVar10;
          *(float *)(puVar17 + 0x23) = fVar10;
          *(float *)(puVar17 + 0x22) = fVar10;
          *(float *)((int)puVar17 + 0x114) = fVar10;
          *(float *)((int)puVar17 + 0x10c) = fVar10;
          fVar10 = fVar9 * fVar9;
          *(float *)(puVar17 + 0x22) = *(float *)(puVar17 + 0x22) * fVar9;
          *(float *)((int)puVar17 + 0x114) = *(float *)((int)puVar17 + 0x114) * fVar10;
          *(float *)(puVar17 + 0x23) = *(float *)(puVar17 + 0x23) * fVar10 * fVar9;
          do {
            *(float *)((int)lVar26 + 0x10c) = *(float *)((int)lVar26 + 0xfc) * fVar10 * fVar10;
            iVar22 = (int)lVar28;
            lVar28 = lVar28 + 8;
            lVar26 = lVar26 + 8;
            *(float *)((int)lVar30 + 4) = *(float *)(iVar22 + 4) * fVar10 * fVar10;
            lVar30 = lVar30 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar31 = 4;
          lVar30 = uVar21 - 0x104;
          pfVar29 = (float *)&DAT_007358e0;
          lVar26 = lVar27;
          lVar28 = lVar30;
          do {
            fVar10 = *pfVar29;
            fVar9 = pfVar29[1];
            pfVar29 = pfVar29 + 2;
            *(float *)((int)lVar26 + 0x10c) = *(float *)((int)lVar26 + 0x10c) * fVar10;
            lVar26 = lVar26 + 8;
            *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar9;
            lVar28 = lVar28 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar26 = 2;
          do {
            iVar22 = (int)lVar27;
            lVar27 = lVar27 + 0x10;
            iVar18 = (int)lVar30;
            lVar30 = lVar30 + 0x10;
            dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar22 + 0x10c)) +
                              *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) +
                             *(float *)(iVar18 + 0xc));
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          dVar35 = (double)((float)(dVar35 + 0.7853981852531433) * fVar13 + fVar12);
        }
        *(float *)(puVar17 + 8) = fVar5;
        *(float *)(puVar17 + 9) = fVar4;
        *(float *)(puVar17 + 10) = fVar3;
        *(float *)(puVar17 + 0xb) = fVar19;
        *(float *)((int)puVar17 + 0x44) = fVar6;
        *(undefined4 *)((int)puVar17 + 0x4c) = uVar8;
        puVar17[0x36] = (longlong)(int)fVar20;
        *(float *)((int)puVar17 + 0x54) = fVar11;
        *(undefined4 *)((int)puVar17 + 0x5c) = uVar7;
        puVar17[0xe] = (longlong)*(int *)((int)puVar17 + 0x1b4);
        FUN_00434898(dVar34,dVar35,moby,(longlong)*(int *)((int)puVar17 + 0x1b4),puVar17[8],
                     puVar17[9],puVar17[10],puVar17[0xb]);
        iVar22 = *(int *)((int)pvVar14 + 0x148);
        *(int *)((int)pvVar14 + 0x148) = iVar22 + 1;
        if (iVar22 == 5) {
          moby->state = '\x06';
          iVar22 = mobyutil::MB_randInt(2);
          if (iVar22 == 0) {
            if (moby->animationId != '\n') {
              puVar17[0x36] = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(moby,10,0,*(undefined4 *)((int)puVar17 + 0x1b4));
            }
          }
          else if (moby->animationId != '\t') {
            puVar17[0x36] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(moby,9,0,*(undefined4 *)((int)puVar17 + 0x1b4));
          }
        }
      }
    }
    else {
      fVar3 = *(float *)(iVar22 + 0x10) - (moby->pos).x;
      fVar5 = *(float *)(iVar22 + 0x14) - (moby->pos).y;
      fVar6 = ABS(fVar3);
      fVar4 = ABS(fVar5);
      *(float *)((int)puVar17 + 0xa4) = fVar3;
      *(float *)(puVar17 + 0x15) = fVar5;
      *(float *)((int)puVar17 + 0xac) = fVar6 - fVar4;
      fVar3 = 0.0;
      uVar25 = (ulonglong)(*(uint *)((int)puVar17 + 0xa4) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar17 + 0xac) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar17 + 0x15) >> 0x1d) & 4;
      fVar5 = ABS(*(float *)((int)puVar17 + 0xa4));
      if (*(float *)((int)puVar17 + 0xac) - 0.0 < 0.0) {
        fVar5 = fVar4;
      }
      fVar11 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
      fVar4 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      fVar19 = ABS(*(float *)(puVar17 + 0x15));
      if (*(float *)((int)puVar17 + 0xac) - 0.0 < 0.0) {
        fVar19 = fVar6;
      }
      if (0.0 < fVar5) {
        lVar26 = uVar21 - 0x200;
        lVar30 = uVar21 - 0x114;
        lVar28 = uVar21 - 0x124;
        lVar31 = 2;
        fVar5 = (fVar19 - fVar5) / (fVar19 + fVar5);
        fVar6 = fVar5 * fVar5;
        *(float *)(puVar17 + 0x1f) = fVar5;
        *(float *)(puVar17 + 0x1e) = fVar5;
        *(float *)((int)puVar17 + 0xf4) = fVar5;
        *(float *)((int)puVar17 + 0xec) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)(puVar17 + 0x1e) = *(float *)(puVar17 + 0x1e) * fVar6;
        *(float *)((int)puVar17 + 0xf4) = *(float *)((int)puVar17 + 0xf4) * fVar5;
        *(float *)(puVar17 + 0x1f) = *(float *)(puVar17 + 0x1f) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar26 + 0xec) = *(float *)((int)lVar26 + 0xdc) * fVar5 * fVar5;
          iVar22 = (int)lVar28;
          lVar28 = lVar28 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar30 + 4) = *(float *)(iVar22 + 4) * fVar5 * fVar5;
          lVar30 = lVar30 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar30 = uVar21 - 0x124;
        pfVar29 = (float *)&DAT_007358e0;
        lVar26 = lVar27;
        lVar28 = lVar30;
        do {
          fVar5 = *pfVar29;
          fVar6 = pfVar29[1];
          pfVar29 = pfVar29 + 2;
          *(float *)((int)lVar26 + 0xec) = *(float *)((int)lVar26 + 0xec) * fVar5;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar6;
          lVar28 = lVar28 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar26 = 2;
        do {
          iVar22 = (int)lVar27;
          lVar27 = lVar27 + 0x10;
          iVar18 = (int)lVar30;
          lVar30 = lVar30 + 0x10;
          fVar3 = fVar3 + *(float *)(iVar22 + 0xec) + *(float *)(iVar18 + 4) +
                  *(float *)(iVar18 + 8) + *(float *)(iVar18 + 0xc);
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        fVar3 = (fVar3 + 0.7853982) * fVar11 + fVar4;
      }
      mobyutil::OrganicDeltAng
                (fVar3,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                 mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x46ae70,
                 (float *)((int)pvVar14 + 0x140));
      if ((moby->field43_0x70 & 2U) != 0) {
        if (*(int *)((int)pvVar14 + 0x114) == 2) {
          moby->state = '\x03';
          if (moby->animationId != '\0') {
            puVar17[0x36] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar17 + 0x1b4));
          }
        }
        else {
          *(undefined4 *)((int)pvVar14 + 0x148) = 0;
          moby->state = '\x05';
          if (moby->animationId != '\b') {
            puVar17[0x36] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(moby,8,0,*(undefined4 *)((int)puVar17 + 0x1b4));
          }
        }
      }
    }
  }
  else if (bVar1 < 8) {
    uVar24 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar14 + 0x70));
    if (((uVar24 & 0x140) != 0) && (moby->state = '\x03', moby->animationId != '\0')) {
      puVar17[0x36] = (longlong)(int)(animationSpeed * 10.5);
      mobyutil::MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar17 + 0x1b4));
    }
  }
  else if ((bVar1 < 9) &&
          (uVar24 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar14 + 0x70)),
          (uVar24 & 0x140) != 0)) {
    mobyutil::MB_SpawnBoltsFromCrate(moby,0,0xffffffffffffffff);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 0046c32c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M809_0046c32c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M809_0046c32c(void)

{
  DAT_0087767c = 0x10000;
  return;
}



//==== 0046c358  ns=mobyupdate_unsorted  size=0x234
// sig: undefined UpdateMoby_809(MobyInstance * moby)
// callers(0): 
// callees(1): 00502730 fastfunc::FastIntToDouble

/* Moby 809 */

void mobyupdate_unsorted::UpdateMoby_809(MobyInstance *moby)

{
  undefined4 *puVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar9 [16];
  
  puVar1 = (undefined4 *)(ZEXT48(&stack0x00000000) - 0x30);
  puVar1[3] = in_vr31_32_3;
  puVar1[2] = in_vr31_32_2;
  puVar1[1] = in_vr31_32_1;
  *puVar1 = in_vr31_32_0;
  if (moby->state == 0) {
    DAT_010d99c8 = 0;
    moby->updateDistance = -1;
    moby->state = '\x01';
    auVar3 = loadVectorLeftIndexed(0x76a0,0x870000);
    auVar4 = vectorConvertFromSignedFixedPointWord(auVar3,0);
    auVar3 = loadVectorLeftIndexed(ZEXT48(&stack0x00000000) - 0x30,0x46c340);
    auVar6 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar3 = auVar3 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar9 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
    auVar3 = ZEXT416(0xffffffff);
    auVar3 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
    auVar5 = vectorShiftLeftIntegerWord(auVar3,auVar3);
    auVar3 = vectorAddFloatingPoint(auVar4,auVar9);
    auVar3 = vectorMultiplyAddFloatingPoint(auVar6,auVar3,auVar5);
    auVar4 = loadVectorLeftIndexed(0x76a4,0x870000);
    auVar4 = vectorConvertFromSignedFixedPointWord(auVar4,0);
    auVar3 = vectorConvertToSignedFixedPointWordSaturate(auVar3,0);
    auVar3 = auVar3 >> 0x60 & (undefined1  [16])0xffffffff;
    DAT_010d99b0 = storeVectorElementWordIndexed
                             (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,
                              0xffffffffffff99b0,0x10e0000);
    auVar4 = vectorAddFloatingPoint(auVar4,auVar9);
    auVar3 = ZEXT416(0xffffffff);
    auVar3 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
    auVar3 = vectorShiftLeftIntegerWord(auVar3,auVar3);
    auVar3 = vectorMultiplyAddFloatingPoint(auVar6,auVar4,auVar3);
    auVar3 = vectorConvertToSignedFixedPointWordSaturate(auVar3,0);
    auVar3 = auVar3 >> 0x60 & (undefined1  [16])0xffffffff;
    DAT_010d99b4 = storeVectorElementWordIndexed
                             (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,
                              0xffffffffffff99b4,0x10e0000);
    dVar2 = (double)fastfunc::FastIntToDouble
                              ((int)(animationSpeed * ((float)(longlong)DAT_008776a4 + 0.5)));
    DAT_010d99b8 = (float)(1.0 / dVar2);
    auVar3 = ZEXT416(0xffffffff);
    auVar3 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
    auVar4 = vectorShiftLeftIntegerWord(auVar3,auVar3);
    auVar3 = ZEXT416(0xffffffff);
    auVar5 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
    auVar3 = ZEXT416(0xffffffff);
    auVar6 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
    auVar3 = ZEXT416(0xffffffff);
    auVar3 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
    auVar5 = vectorShiftLeftIntegerWord(auVar5,auVar5);
    auVar6 = vectorShiftLeftIntegerWord(auVar6,auVar6);
    auVar7 = vectorShiftLeftIntegerWord(auVar3,auVar3);
    auVar3 = loadVectorLeftIndexed(0x76a8,0x870000);
    auVar8 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar3 = vectorConvertFromSignedFixedPointWord(auVar3,0);
    auVar3 = vectorAddFloatingPoint(auVar3,auVar9);
    auVar3 = vectorMultiplyAddFloatingPoint(auVar8,auVar3,auVar4);
    auVar3 = vectorConvertToSignedFixedPointWordSaturate(auVar3,0);
    auVar8 = vectorConvertFromSignedFixedPointWord(auVar3,0);
    auVar3 = auVar3 >> 0x60 & (undefined1  [16])0xffffffff;
    DAT_010d99bc = storeVectorElementWordIndexed
                             (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,
                              0xffffffffffff99bc,0x10e0000);
    auVar3 = loadVectorLeftIndexed(8,0x46c340);
    auVar3 = auVar3 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar3 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
    auVar4 = vectorReciprocalEstimateFloatingPoint(auVar8);
    auVar9 = vectorNegativeMultiplySubtractFloatingPoint(auVar4,auVar8,auVar3);
    auVar4 = vectorMultiplyAddFloatingPoint(auVar4,auVar9,auVar5);
    auVar5 = vectorNegativeMultiplySubtractFloatingPoint(auVar4,auVar8,auVar3);
    auVar4 = vectorMultiplyAddFloatingPoint(auVar4,auVar5,auVar6);
    auVar3 = vectorNegativeMultiplySubtractFloatingPoint(auVar4,auVar8,auVar3);
    auVar3 = vectorMultiplyAddFloatingPoint(auVar4,auVar3,auVar7);
    auVar3 = auVar3 >> 0x60 & (undefined1  [16])0xffffffff;
    DAT_010d99c0 = storeVectorElementWordIndexed
                             (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,
                              0xffffffffffff99c0,0x10e0000);
  }
  else if ((moby->state < 2) &&
          (DAT_010d99c4 = -(DAT_0071f408 * DAT_008776ac - DAT_010d99c4), DAT_010d99c4 <= -8.0)) {
    DAT_010d99c4 = DAT_010d99c4 + 8.0;
  }
  return;
}



//==== 0046c58c  ns=Global  size=0x18
// sig: undefined FUN_0046c58c(void)
// callers(1): 0044f670 mobyupdate_unsorted::UpdateMoby_760
// callees(0): 

int FUN_0046c58c(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_010d99c8;
  DAT_010d99c8 = DAT_010d99c8 + param_1;
  return iVar1;
}



//==== 0046c5a8  ns=mobyupdate_helpers  size=0x60
// sig: undefined M809_0046c5a8(void)
// callers(0): 
// callees(2): 000da9e8 lights::DeletePointLight; 000efb38 mobyfunc::DeleteMoby

void mobyupdate_helpers::M809_0046c5a8(MobyInstance *param_1)

{
  void *pvVar1;
  
  pvVar1 = param_1->pVar;
  if (*(short *)((int)pvVar1 + 0x12) != -1) {
    lights::DeletePointLight();
    *(undefined2 *)((int)pvVar1 + 0x12) = 0xffff;
  }
  mobyfunc::DeleteMoby(param_1);
  return;
}



//==== 0046c660  ns=mobyupdate_unsorted  size=0x8ac
// sig: undefined UpdateMoby_{81_88}(MobyInstance * moby)
// callers(0): 
// callees(15): 00059e20 collproc::CollSphere; 000da4ac lights::CreatePointLight2; 000da9e8 lights::DeletePointLight; 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 000fe4f0 mobyutil::MB_randRangeSigned; 0010e030 mobyutil::MB_genericExplosion; 001268f8 partupd::SpawnPart_21; 00126f50 partupd::SpawnPart_23; 0015d204 sound::sound_MobyPlay_oClass; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot

/* Moby 81
   Moby 88 */

void mobyupdate_unsorted::UpdateMoby__81_88_(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  void *pvVar8;
  f32 fVar9;
  uint uVar10;
  undefined1 uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  undefined2 uVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  double dVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float local_d0;
  float local_cc;
  float local_c8;
  Vec4 local_c0;
  undefined1 local_b0 [16];
  undefined1 local_a0 [48];
  
  lVar12 = (longlong)(int)moby;
  pfVar7 = (float *)moby->pVar;
  iVar13 = fastfunc::FastDecTimerS16(pfVar7 + 4);
  if (iVar13 == 0) {
    (moby->pos).x = (moby->pos).x + *pfVar7;
    (moby->pos).y = (moby->pos).y + pfVar7[1];
    (moby->pos).z = (moby->pos).z + pfVar7[2];
    fVar3 = DAT_0071f408;
    fVar2 = DAT_0071f408 * DAT_008776b8;
    fVar1 = pfVar7[2];
    if (fVar2 < ABS(*pfVar7)) {
      *pfVar7 = *pfVar7 * ((DAT_008776b4 - 1.0) * DAT_0071f408 + 1.0);
    }
    if (fVar2 < ABS(pfVar7[1])) {
      pfVar7[1] = pfVar7[1] * ((DAT_008776b4 - 1.0) * fVar3 + 1.0);
    }
    uVar23 = 0;
    if (0 < (int)pfVar7[2]) {
      fVar1 = fVar1 * ((DAT_008776b4 - 1.0) * fVar3 + 1.0);
    }
    pvVar8 = moby->pVar;
    pfVar7[2] = -(DAT_0071f40c * DAT_008776b0 - fVar1);
    fVar9 = (moby->pos).x;
    uVar21 = 0x4000000000000000;
    uVar10 = (int)fVar9 >> 0x1f;
    iVar13 = (uVar10 >> 1 ^ (uint)fVar9) - uVar10;
    if ((((iVar13 < 0x40000000) || (0x447f4000 < iVar13)) ||
        (fVar9 = (moby->pos).y, uVar10 = (int)fVar9 >> 0x1f,
        iVar13 = (uVar10 >> 1 ^ (uint)fVar9) - uVar10, 0x447f4000 < iVar13 || iVar13 < 0x40000000))
       || ((fVar9 = (moby->pos).z, uVar10 = (int)fVar9 >> 0x1f,
           iVar13 = (uVar10 >> 1 ^ (uint)fVar9) - uVar10, iVar13 < 0x40000000 ||
           (0x447f4000 < iVar13)))) {
      if (*(short *)((int)pvVar8 + 0x12) != -1) {
        lights::DeletePointLight();
        *(undefined2 *)((int)pvVar8 + 0x12) = 0xffff;
      }
      mobyfunc::DeleteMoby(moby);
    }
    else {
      iVar13 = collproc::CollSphere(0x3fe8000000000000,lVar12 + 0x10,&DAT_0046c608,0,0);
      if ((iVar13 != 0) ||
         ((ABS((moby->pos).x - g_heroPosition.x) < 10.0 &&
          (ABS((moby->pos).y - g_heroPosition.y) < 10.0)))) {
        sound::sound_MobyPlay_oClass(1,0,moby,(int)*(short *)((int)pfVar7[8] + 0xa6));
        mobyutil::MB_genericExplosion
                  (uVar21,0x4010000000000000,0x3ff0000000000000,0x3fe0000000000000,
                   0x4022000000000000,0x3ff0000000000000,0x4014000000000000,lVar12,local_a0,
                   lVar12 + 0x10,&DAT_0046c608,2,5,2,4);
        pvVar8 = moby->pVar;
        if (*(short *)((int)pvVar8 + 0x12) != -1) {
          lights::DeletePointLight();
          *(undefined2 *)((int)pvVar8 + 0x12) = 0xffff;
        }
        mobyfunc::DeleteMoby(moby);
      }
      else {
        dVar16 = (double)fastfunc::FastWrapRot((moby->rotation).x,pfVar7[5]);
        (moby->rotation).x = (float)dVar16;
        dVar16 = (double)fastfunc::FastWrapRot((moby->rotation).y,pfVar7[6]);
        (moby->rotation).y = (float)dVar16;
        dVar16 = (double)fastfunc::FastWrapRot((moby->rotation).z,pfVar7[7]);
        (moby->rotation).z = (float)dVar16;
        mobyfunc::GetBonePosition(lVar12,0,&local_d0);
        uVar22 = 0x3f847ae140000000;
        uVar20 = 0x3fe0000000000000;
        mobyutil::MB_randRangeSigned(0x3f847ae140000000,0x3fe0000000000000);
        dVar16 = (double)animationSpeed;
        uVar21 = 0x40e3880000000000;
        mobyutil::MB_randRange
                  ((int)(dVar16 * 20.5),dVar16,0x40e3880000000000,(int)(dVar16 * 10.5),
                   (int)(dVar16 * 20.5));
        partupd::SpawnPart_21(uVar21,&local_c0,local_b0,0x4f007fff,0x1fffffff);
        dVar19 = 20000.0;
        dVar16 = 100000.0;
        iVar13 = 0;
        uVar18 = 0x3f999999a0000000;
        uVar21 = 0x3ff0000000000000;
        auVar26 = loadVectorLeftIndexed(0x44,0x46c608);
        auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
        do {
          if (iVar13 != 2) {
            mobyutil::MB_randRangeSigned(uVar22,uVar20);
            mobyutil::MB_randRangeSigned(uVar22,uVar20);
          }
          mobyutil::MB_randInt(6);
          mobyutil::MB_randInt(2);
          uVar17 = mobyutil::MB_randRangeFloat((float)dVar19,(float)dVar16);
          mobyutil::MB_randRange(0x10,0xff);
          uVar17 = partupd::SpawnPart_23(uVar18,uVar21,uVar21,uVar17,&local_c0);
          iVar14 = (int)uVar17;
          if (iVar14 != 0) {
            auVar24 = ZEXT416(0xffffffff);
            auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
            auVar24 = vectorShiftLeftIntegerWord(auVar24,auVar24);
            *(undefined1 *)(iVar14 + 3) = 0x44;
            auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar24 = vectorMultiplyAddFloatingPoint(auVar25,auVar26,auVar24);
            auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
            auVar25 = vectorSplatHalfWord(auVar24,1);
            auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xff;
            uVar15 = storeVectorElementHalfWordIndexed(auVar25,10,uVar17);
            *(undefined2 *)(iVar14 + 10) = uVar15;
            *(undefined4 *)(iVar14 + 0x24) = 2;
            *(undefined1 *)(iVar14 + 0x2a) = 0x60;
            uVar11 = storeVectorElementByteIndexed
                               (auVar24 | auVar24 << 8 | auVar24 << 0x10 | auVar24 << 0x18 |
                                auVar24 << 0x20 | auVar24 << 0x28 | auVar24 << 0x30 |
                                auVar24 << 0x38 | auVar24 << 0x40 | auVar24 << 0x48 |
                                auVar24 << 0x50 | auVar24 << 0x58 | auVar24 << 0x60 |
                                auVar24 << 0x68 | auVar24 << 0x70 | auVar24 << 0x78,0x2b,uVar17);
            *(undefined1 *)(iVar14 + 0x2b) = uVar11;
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < 3);
        fVar1 = (moby->pos).x;
        fVar2 = (moby->pos).y;
        fVar3 = (moby->pos).z;
        iVar13 = mobyutil::MB_randInt(2);
        if (iVar13 == 0) {
          fVar4 = (moby->transform).v2.x;
          fVar5 = (moby->transform).v2.y;
          fVar6 = (moby->transform).v2.z;
        }
        else {
          fVar4 = -(moby->transform).v2.x;
          fVar5 = -(moby->transform).v2.y;
          fVar6 = -(moby->transform).v2.z;
        }
        if (*(short *)((int)pfVar7 + 0x12) == -1) {
          uVar15 = lights::CreatePointLight2
                             (3.0,uVar23,uVar21,0x3fe99999a0000000,0x3fc99999a0000000,&local_c0);
          *(undefined2 *)((int)pfVar7 + 0x12) = uVar15;
        }
        else {
          iVar13 = (int)((longlong)*(short *)((int)pfVar7 + 0x12) << 5);
          *(float *)((int)&PointLights[0].pos.x + iVar13) = (local_d0 - fVar1) * 2.5 + fVar1 + fVar4
          ;
          *(float *)((int)&PointLights[0].pos.y + iVar13) = (local_cc - fVar2) * 2.5 + fVar2 + fVar5
          ;
          *(undefined4 *)((int)&PointLights[0].pos.w + iVar13) = 0x40400000;
          *(float *)((int)&PointLights[0].pos.z + iVar13) = (local_c8 - fVar3) * 2.5 + fVar3 + fVar6
          ;
          *(undefined4 *)((int)&PointLights[0].color.x + iVar13) = 0x3f800000;
          *(undefined4 *)((int)&PointLights[0].color.y + iVar13) = 0x3f4ccccd;
          *(undefined4 *)((int)&PointLights[0].color.z + iVar13) = 0x3e4ccccd;
        }
      }
    }
  }
  else {
    pvVar8 = moby->pVar;
    if (*(short *)((int)pvVar8 + 0x12) != -1) {
      lights::DeletePointLight();
      *(undefined2 *)((int)pvVar8 + 0x12) = 0xffff;
    }
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 0046cf30  ns=Global  size=0x268
// sig: undefined FUN_0046cf30(void)
// callers(1): 0033dad8 mobyupdate_unsorted::UpdateMoby_31
// callees(5): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe4f0 mobyutil::MB_randRangeSigned; 001113e0 mobyutil::MB_RotateQuatAxisAngle

MobyInstance *
FUN_0046cf30(double param_1,float param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  float fVar1;
  float *outQuat;
  undefined2 uVar2;
  MobyInstance *pMVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fStack00000040;
  float fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  float local_50;
  float local_4c;
  float local_48;
  f32 local_44;
  
  pMVar3 = mobyfunc::CreateMoby(0x51);
  if (pMVar3 != (MobyInstance *)0x0) {
    fStack00000044 = (float)param_4;
    (pMVar3->pos).y = fStack00000044;
    local_4c = *(float *)((int)param_2 + 0x14);
    fStack0000004c = (f32)param_5;
    (pMVar3->rotation).z = (float)param_1;
    local_4c = fStack00000044 - local_4c;
    (pMVar3->pos).w = fStack0000004c;
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = 0xff;
    pMVar3->enabled = '\x01';
    pMVar3->state = '\0';
    outQuat = (float *)pMVar3->pVar;
    fStack00000040 = (float)((ulonglong)param_4 >> 0x20);
    (pMVar3->pos).x = fStack00000040;
    fStack00000048 = (f32)((ulonglong)param_5 >> 0x20);
    local_50 = fStack00000040 - *(float *)((int)param_2 + 0x10);
    (pMVar3->pos).z = fStack00000048;
    local_44 = fStack0000004c;
    dVar9 = 0.0;
    local_48 = 0.0;
    dVar4 = (double)mobyutil::MB_randRangeFloat(DAT_0071f408 * 0.075,DAT_0071f408 * 0.2);
    dVar6 = (double)SQRT(local_48 * local_48 + local_50 * local_50 + local_4c * local_4c);
    fVar1 = (float)(dVar4 / dVar6);
    dVar4 = dVar9;
    if (dVar9 - dVar6 < 0.0) {
      dVar4 = (double)(local_50 * fVar1);
    }
    dVar5 = dVar9;
    if (dVar9 - dVar6 < 0.0) {
      dVar5 = (double)(local_4c * fVar1);
    }
    dVar7 = dVar9;
    if (dVar9 - dVar6 < 0.0) {
      dVar7 = (double)(local_48 * fVar1);
    }
    if (dVar6 - dVar9 < 0.0) {
      dVar4 = (double)(local_50 * fVar1);
    }
    if (dVar6 - dVar9 < 0.0) {
      dVar5 = (double)(local_4c * fVar1);
    }
    if (dVar6 - dVar9 < 0.0) {
      dVar7 = (double)(local_48 * fVar1);
    }
    local_50 = (float)dVar4;
    local_4c = (float)dVar5;
    local_48 = (float)dVar7;
    dVar4 = (double)mobyutil::MB_randRangeSigned(dVar9,0x3fe921fb60000000,&DAT_00970000);
    mobyutil::MB_RotateQuatAxisAngle((float)dVar4,outQuat,&local_50);
    dVar4 = (double)mobyutil::MB_randRangeFloat(DAT_0071f408 * 0.05,DAT_0071f408 * 0.32);
    outQuat[2] = (float)dVar4;
    uVar8 = 0x3fa1df46a0000000;
    dVar4 = (double)mobyutil::MB_randRangeSigned(dVar9,0x3fa1df46a0000000);
    outQuat[5] = (float)dVar4;
    dVar4 = (double)mobyutil::MB_randRangeSigned(dVar9,uVar8);
    outQuat[6] = (float)dVar4;
    dVar4 = (double)mobyutil::MB_randRangeSigned(dVar9,uVar8);
    auVar10 = ZEXT416(0xffffffff);
    auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    outQuat[7] = (float)dVar4;
    auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
    auVar10 = loadVectorLeftIndexed(0x1c,0x46cf0c);
    auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar10 = vectorMultiplyAddFloatingPoint
                        (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                         auVar11);
    auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
    auVar10 = vectorSplatHalfWord(auVar10,1);
    uVar2 = storeVectorElementHalfWordIndexed(auVar10,0x10,ZEXT48(outQuat));
    *(undefined2 *)(outQuat + 4) = uVar2;
    outQuat[8] = param_2;
    *(undefined2 *)((int)outQuat + 0x12) = 0xffff;
    mobyfunc::UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}



//==== 0046d198  ns=mobyupdate_helpers  size=0x14
// sig: undefined M810_0046d198(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M810_0046d198(void)

{
  DAT_00877708 = 0x10000;
  return;
}



//==== 0046d1d0  ns=mobyupdate_unsorted  size=0x30c
// sig: undefined UpdateMoby_810(MobyInstance * moby)
// callers(0): 
// callees(7): 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 00112900 mobyutil::MB_GetOrientation; 0015d12c sound::PlayMobySound; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt

/* Moby 810 */

void mobyupdate_unsorted::UpdateMoby_810(MobyInstance *moby)

{
  float fVar1;
  void *pvVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  Vec4 local_60;
  longlong local_50;
  
  pvVar2 = moby->pVar;
  if (moby->state == 0) {
    local_50 = (longlong)DAT_00877744;
    dVar8 = (double)mobyutil::MB_randRangeFloat((float)(longlong)DAT_00877740,(float)local_50);
    uVar6 = fastfunc::FastDoubleToInt((double)(float)(dVar8 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar2 + 0x78) = uVar6;
    dVar8 = (double)mobyutil::MB_randRot();
    *(float *)((int)pvVar2 + 0x60) = (float)dVar8;
    dVar8 = (double)mobyutil::MB_randRot();
    *(float *)((int)pvVar2 + 0x6c) = (float)dVar8;
    moby->state = '\x01';
  }
  else if (moby->state < 2) {
    iVar7 = fastfunc::FastDecTimerS32((int)pvVar2 + 0x78);
    if (iVar7 != 0) {
      sound::PlayMobySound(0,0,moby);
      local_50 = (longlong)DAT_00877744;
      dVar8 = (double)mobyutil::MB_randRangeFloat((float)(longlong)DAT_00877740,(float)local_50);
      uVar6 = fastfunc::FastDoubleToInt((double)(float)(dVar8 * (double)animationSpeed));
      *(undefined4 *)((int)pvVar2 + 0x78) = uVar6;
    }
    dVar12 = 0.01745329238474369;
    dVar11 = (double)(moby->pos).x;
    dVar10 = (double)(moby->pos).y;
    dVar9 = (double)(moby->pos).z;
    dVar8 = (double)fastfunc::FastWrapRot
                              (*(float *)((int)pvVar2 + 0x60),
                               DAT_00877730 * 0.017453292 * mobyutil::g_FrameTime);
    *(float *)((int)pvVar2 + 0x60) = (float)dVar8;
    dVar8 = (double)fastfunc::FastWrapRot
                              (*(float *)((int)pvVar2 + 0x6c),
                               (float)((double)DAT_00877734 * dVar12) * mobyutil::g_FrameTime);
    *(float *)((int)pvVar2 + 0x6c) = (float)dVar8;
    fVar1 = *(float *)((int)pvVar2 + 0x60);
    fVar3 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar3 = fVar1;
    }
    fVar4 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
      fVar4 = fVar3;
    }
    fVar1 = fVar4 * fVar4;
    fVar3 = fVar1 * fVar1 * fVar4;
    fVar5 = fVar1 * fVar3;
    (moby->rotation).y =
         (float)((double)DAT_00877738 * dVar12) *
         (fVar1 * fVar5 * 2.601887e-06 +
         fVar5 * -0.0001980741 + fVar3 * 0.0083330255 + fVar1 * fVar4 * -0.16666657 + fVar4);
    fVar1 = *(float *)((int)pvVar2 + 0x6c);
    fVar3 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar3 = fVar1;
    }
    local_60.x = (float)((double)(moby->pos).x - dVar11);
    local_60.y = (float)((double)(moby->pos).y - dVar10);
    fVar4 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
      fVar4 = fVar3;
    }
    local_60.w = (moby->pos).w;
    fVar1 = fVar4 * fVar4;
    fVar3 = fVar1 * fVar1 * fVar4;
    local_60.z = (float)((double)(moby->pos).z - dVar9);
    fVar5 = fVar1 * fVar3;
    (moby->rotation).x =
         (float)((double)DAT_0087773c * dVar12) *
         (fVar1 * fVar5 * 2.601887e-06 +
         fVar5 * -0.0001980741 + fVar3 * 0.0083330255 + fVar1 * fVar4 * -0.16666657 + fVar4);
    mobyutil::MB_GetOrientation
              ((MobyInstance *)((int)pvVar2 + 0x20),&local_60,ZEXT48(&stack0x00000000) - 0x70,
               (longlong)(int)moby + 0x40);
  }
  return;
}



//==== 0046d4e0  ns=mobyupdate_unsorted  size=0x178
// sig: undefined UpdateMoby_812(MobyInstance * moby)
// callers(0): 
// callees(3): 001124c0 mobyutil::MB_PlatformWorldToLocal; 00112678 mobyutil::MB_PlatformGetDelta; 00112900 mobyutil::MB_GetOrientation

/* Moby 812 */

void mobyupdate_unsorted::UpdateMoby_812(MobyInstance *moby)

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  Vec4 local_40;
  
  lVar2 = (longlong)(int)moby;
  lVar3 = lVar2 + 0x40;
  pvVar1 = moby->pVar;
  if (moby->state == 0) {
    *(undefined4 *)((int)pvVar1 + 0x5c) = 1;
    if (-1 < *(int *)((int)pvVar1 + 0x80)) {
      mobyutil::MB_PlatformWorldToLocal
                (lVar2,MobyInstance + *(int *)((int)pvVar1 + 0x80),lVar2 + 0x10,lVar3,
                 (int)pvVar1 + 0x60,(int)pvVar1 + 0x70);
      moby->state = '\x01';
    }
  }
  else if (moby->state < 2) {
    dVar6 = (double)(moby->pos).x;
    dVar5 = (double)(moby->pos).y;
    dVar4 = (double)(moby->pos).z;
    mobyutil::MB_PlatformGetDelta
              (lVar2,MobyInstance + *(int *)((int)pvVar1 + 0x80),(int)pvVar1 + 0x60,
               (int)pvVar1 + 0x70,lVar2 + 0x10,lVar3);
    local_40.x = (float)((double)(moby->pos).x - dVar6);
    local_40.y = (float)((double)(moby->pos).y - dVar5);
    local_40.w = (moby->pos).w;
    local_40.z = (float)((double)(moby->pos).z - dVar4);
    mobyutil::MB_GetOrientation
              ((MobyInstance *)((int)pvVar1 + 0x20),&local_40,ZEXT48(&stack0x00000000) - 0x50,lVar3)
    ;
  }
  return;
}



//==== 0046d660  ns=mobyupdate_helpers  size=0x148
// sig: undefined M815_0046d660(void)
// callers(1): 0046d7c0 mobyupdate_unsorted::UpdateMoby_815
// callees(3): 000f31a8 mobyfunc::UpdateMobyTransform; 00104800 mobyutil::MB_GetFirstMobyInGroup; 00502758 fastfunc::FastDoubleToInt

MobyInstance * mobyupdate_helpers::M815_0046d660(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  MobyInstance *local_20 [2];
  
  local_20[0] = (MobyInstance *)0x0;
  mobyutil::MB_GetFirstMobyInGroup(local_20,**(int **)(param_1 + 0x78),'\0','\0');
  local_20[0]->updateDistance = -0x80;
  pvVar1 = local_20[0]->pVar;
  local_20[0]->drawDistance = 0x80;
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  local_20[0]->color = (int)((ulonglong)uVar3 >> 0x20);
  local_20[0]->light = (int)uVar3;
  local_20[0]->enabled = '\x01';
  local_20[0]->collision = local_20[0]->pClass->collision;
  local_20[0]->modeBits = local_20[0]->modeBits | (CAN_BE_AUTO_TARGETED|HAS_SPECIAL_VARS);
  local_20[0]->scale = local_20[0]->pClass->gScale;
  (local_20[0]->pos).x = *(f32 *)(param_1 + 0x10);
  (local_20[0]->pos).y = *(f32 *)(param_1 + 0x14);
  (local_20[0]->pos).z = *(f32 *)(param_1 + 0x18);
  (local_20[0]->pos).w = *(f32 *)(param_1 + 0x1c);
  (local_20[0]->rotation).x = *(f32 *)(param_1 + 0x40);
  (local_20[0]->rotation).y = *(f32 *)(param_1 + 0x44);
  (local_20[0]->rotation).z = *(f32 *)(param_1 + 0x48);
  (local_20[0]->rotation).w = *(f32 *)(param_1 + 0x4c);
  *(undefined4 *)((int)pvVar1 + 0x20) = 0x40400000;
  *(undefined4 *)((int)pvVar1 + 0x250) = 0x3f800000;
  uVar2 = fastfunc::FastDoubleToInt(0x40899999a0000000);
  *(undefined4 *)((int)pvVar1 + 0x170) = uVar2;
  *(undefined4 *)((int)pvVar1 + 0x224) = 0x41f00000;
  mobyfunc::UpdateMobyTransform(local_20[0]);
  return local_20[0];
}



//==== 0046d7c0  ns=mobyupdate_unsorted  size=0x330
// sig: undefined UpdateMoby_815(MobyInstance * moby)
// callers(0): 
// callees(5): 00104214 mobyutil::MB_CountActiveMobysByGroup; 0010ad80 mobyutil::MB_StartKick; 0046d660 mobyupdate_helpers::M815_0046d660; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt

/* Moby 815 */

void mobyupdate_unsorted::UpdateMoby_815(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  int iVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar14;
  undefined4 uVar15;
  longlong lVar13;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  float *pfVar20;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  ulonglong in_f31;
  double dVar22;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar13 = uVar12 - 0xd0;
  puVar9 = (ulonglong *)lVar13;
  *puVar9 = uVar12;
  puVar9[0x1c] = in_LR;
  puVar9[0x19] = in_f31;
  puVar9[0x17] = unaff_r30;
  bVar1 = moby->state;
  puVar9[0x18] = unaff_r31;
  piVar7 = (int *)moby->pVar;
  puVar9[0x16] = unaff_r29;
  puVar9[0x15] = unaff_r28;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if ((((bVar1 < 2) && (-1 < *piVar7)) &&
           (iVar14 = mobyutil::MB_CountActiveMobysByGroup(*piVar7,0xc), iVar14 == 0)) &&
          (piVar7[2] < DAT_00877748)) {
    piVar7[2] = piVar7[2] + 1;
    iVar14 = mobyupdate_helpers::M815_0046d660(moby);
    if (iVar14 != 0) {
      iVar8 = *(int *)(iVar14 + 0x78);
      *(undefined4 *)(iVar8 + 0x84) = 8;
      dVar22 = 0.800000011920929;
      uVar15 = fastfunc::FastDoubleToInt((double)(*(float *)(iVar8 + 0x250) * 0.8 * 1024.0));
      *(undefined4 *)(iVar8 + 0x80) = uVar15;
      *(float *)(iVar8 + 0x88) = (float)((double)*(float *)(iVar8 + 0x250) * dVar22);
      fVar2 = 0.0;
      *(undefined4 *)(iVar8 + 0x78) = 0;
      *(undefined4 *)(iVar8 + 0x7c) = 0;
      *(undefined4 *)(iVar8 + 0xb0) = 0x40e00000;
      *(undefined4 *)(iVar8 + 0xb4) = 0x41500000;
      fVar4 = g_heroPosition.x - (moby->pos).x;
      fVar5 = g_heroPosition.y - (moby->pos).y;
      fVar3 = ABS(fVar4);
      fVar6 = ABS(fVar5);
      *(float *)(puVar9 + 0xe) = fVar4;
      *(float *)((int)puVar9 + 0x74) = fVar5;
      *(float *)(puVar9 + 0xf) = fVar3 - fVar6;
      uVar17 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
      fVar4 = ABS(*(float *)(puVar9 + 0xe));
      if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
        fVar4 = fVar6;
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
      fVar5 = ABS(*(float *)((int)puVar9 + 0x74));
      if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
        fVar5 = fVar3;
      }
      fVar3 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      if (0.0 < fVar4) {
        lVar19 = uVar12 - 0xc0;
        lVar18 = uVar12 - 0x54;
        lVar16 = uVar12 - 0x44;
        lVar21 = 2;
        fVar4 = (fVar5 - fVar4) / (fVar5 + fVar4);
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
          *(float *)((int)lVar19 + 0x7c) = *(float *)((int)lVar19 + 0x6c) * fVar4 * fVar4;
          iVar10 = (int)lVar18;
          lVar19 = lVar19 + 8;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)(iVar10 + 4) * fVar4 * fVar4;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar19 = uVar12 - 0x54;
        pfVar20 = (float *)&DAT_007358e0;
        lVar21 = 4;
        lVar16 = lVar19;
        lVar18 = lVar13;
        do {
          fVar4 = *pfVar20;
          fVar5 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar18 + 0x7c) = *(float *)((int)lVar18 + 0x7c) * fVar4;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar16 = 2;
        do {
          iVar10 = (int)lVar13;
          lVar13 = lVar13 + 0x10;
          iVar11 = (int)lVar19;
          lVar19 = lVar19 + 0x10;
          fVar2 = fVar2 + *(float *)(iVar10 + 0x7c) + *(float *)(iVar11 + 4) +
                  *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc);
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        fVar2 = (fVar2 + 0.7853982) * fVar6 + fVar3;
      }
      fastfunc::FastWrapRot(fVar2,3.1415927);
      mobyutil::MB_StartKick(iVar14,iVar8 + 0x60);
      *(undefined1 *)(iVar14 + 0x20) = 9;
    }
  }
  return;
}



//==== 0046daf0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M816_0046daf0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M816_0046daf0(void)

{
  DAT_00877798 = 0x10000;
  return;
}



//==== 0046db08  ns=mobyupdate_helpers  size=0x38
// sig: undefined M816_0046db08(void)
// callers(0): 
// callees(0): 

undefined8 mobyupdate_helpers::M816_0046db08(int param_1)

{
  undefined8 uVar1;
  
  if (*(short *)(param_1 + 0xa6) == 0x330) {
    if (*(byte *)(param_1 + 0x20) < 2 || 6 < *(byte *)(param_1 + 0x20)) {
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



//==== 0046db40  ns=mobyupdate_helpers  size=0x48
// sig: undefined M816_0046db40(void)
// callers(0): 
// callees(1): 0011aeec mobyutil::MB_ShowPersistentMessage

void mobyupdate_helpers::M816_0046db40(undefined8 param_1,int param_2)

{
  if (param_2 == 1) {
    mobyutil::MB_ShowPersistentMessage(8,0xbc9);
  }
  else {
    mobyutil::MB_ShowPersistentMessage(8,0xbc9);
  }
  return;
}



//==== 0046db88  ns=mobyupdate_helpers  size=0x58
// sig: undefined M816_0046db88(void)
// callers(0): 
// callees(0): 

undefined8 mobyupdate_helpers::M816_0046db88(int param_1)

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



//==== 0046dbe8  ns=mobyupdate_helpers  size=0xc0
// sig: undefined M816_0046dbe8(void)
// callers(0): 
// callees(2): 00116a68 mobyutil::MB_BobMotion; 00116b70 mobyutil::MB_SwingMotion

void mobyupdate_helpers::M816_0046dbe8(MobyInstance *param_1)

{
  void *pvVar1;
  double dVar2;
  
  dVar2 = 0.01745329238474369;
  pvVar1 = param_1->pVar;
  mobyutil::MB_BobMotion
            (DAT_008777bc,DAT_008777c0 * 0.017453292 * mobyutil::g_FrameTime,param_1,
             (float *)((int)pvVar1 + 0xec),(float *)((int)pvVar1 + 0xe8));
  mobyutil::MB_SwingMotion
            ((double)DAT_008777c4,
             (double)((float)((double)DAT_008777c8 * dVar2) * mobyutil::g_FrameTime),
             (double)((float)((double)DAT_008777cc * dVar2) * mobyutil::g_FrameTime),param_1,
             ZEXT48(pvVar1) + 0xf0,ZEXT48(pvVar1) + 0xf4);
  return;
}



//==== 0046dcc8  ns=mobyupdate_helpers  size=0x73c
// sig: undefined M816_MoveAlongSpline(MobyInstance * moby, undefined8 splineId, undefined4 param_3)
// callers(2): 00186e60 mobyupdate_unsorted::UpdateMoby_1012; 0046e420 mobyupdate_unsorted::UpdateMoby_816
// callees(5): 00109c30 mobyutil::OrganicDelt; 0010a2e0 mobyutil::OrganicDeltAng; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d204 sound::sound_MobyPlay_oClass

int mobyupdate_helpers::M816_MoveAlongSpline(MobyInstance *moby,longlong splineId,int *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  uint uVar8;
  ulonglong *puVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  float *pfVar15;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  int *piVar19;
  ulonglong unaff_r28;
  int iVar20;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  ulonglong in_f24;
  double dVar24;
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
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar14 = uVar11 - 0x140;
  puVar9 = (ulonglong *)lVar14;
  *puVar9 = uVar11;
  puVar9[0x2a] = in_LR;
  puVar9[0x20] = in_f24;
  puVar9[0x21] = in_f25;
  puVar9[0x22] = in_f26;
  puVar9[0x23] = in_f27;
  puVar9[0x24] = in_f28;
  puVar9[0x25] = in_f29;
  puVar9[0x26] = in_f30;
  puVar9[0x27] = in_f31;
  puVar9[0x1f] = unaff_r31;
  puVar9[0x1e] = unaff_r30;
  puVar9[0x1c] = unaff_r28;
  puVar9[0x1d] = unaff_r29;
  iVar20 = 0;
  pvVar7 = moby->pVar;
  iVar10 = (int)(splineId << 2);
  dVar27 = 0.0;
  *(undefined4 *)(puVar9 + 0xe) = 0;
  iVar12 = *(int *)((int)pvVar7 + 100);
  puVar9[0x1b] = unaff_r27;
  piVar19 = *(int **)((int)Splines + iVar10);
  dVar30 = (double)(float)piVar19[iVar12 * 4 + 5];
  dVar31 = (double)(float)piVar19[iVar12 * 4 + 4];
  dVar25 = (double)(float)(dVar30 - (double)(moby->pos).y);
  dVar26 = (double)(float)(dVar31 - (double)(moby->pos).x);
  dVar24 = (double)((float)piVar19[iVar12 * 4 + 6] - (moby->pos).z);
  fVar1 = DAT_008777d0 * mobyutil::g_FrameTime;
  dVar29 = (double)(float)piVar19[iVar12 * 4 + 7];
  dVar28 = (double)SQRT((float)(dVar24 * dVar24 +
                               (double)(float)(dVar26 * dVar26 + (double)(float)(dVar25 * dVar25))))
  ;
  puVar9[0x1a] = unaff_r26;
  if (dVar28 < (double)(fVar1 * 2.0)) {
    piVar19 = *(int **)((int)Splines + iVar10);
    *(int *)((int)pvVar7 + 100) = iVar12 + 1;
    if (iVar12 + 1 == *piVar19) {
      iVar20 = 1;
    }
  }
  pfVar15 = (float *)(piVar19 + *piVar19 * 4);
  fVar2 = (moby->pos).y - pfVar15[1];
  fVar3 = (moby->pos).x - *pfVar15;
  fVar4 = (moby->pos).z - pfVar15[2];
  mobyutil::OrganicDelt
            (SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2),DAT_008777d4 * DAT_0071f418,
             DAT_008777d4 * DAT_0071f418,fVar1,(float *)(puVar9 + 0xe),iVar10,
             (float *)((int)pvVar7 + 0x60));
  dVar22 = (double)(float)((double)*(float *)((int)pvVar7 + 0x60) / dVar28);
  fVar1 = (moby->pos).x;
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).z;
  (moby->pos).w = (float)dVar29;
  dVar29 = dVar27;
  if (dVar27 - dVar28 < 0.0) {
    dVar29 = (double)(float)(dVar25 * dVar22);
  }
  dVar23 = dVar27;
  if (dVar27 - dVar28 < 0.0) {
    dVar23 = (double)(float)(dVar26 * dVar22);
  }
  if (dVar28 - dVar27 < 0.0) {
    dVar29 = (double)(float)(dVar25 * dVar22);
  }
  if (dVar28 - dVar27 < 0.0) {
    dVar23 = (double)(float)(dVar26 * dVar22);
  }
  dVar25 = dVar27;
  if (dVar27 - dVar28 < 0.0) {
    dVar25 = (double)(float)(dVar24 * dVar22);
  }
  if (dVar28 - dVar27 < 0.0) {
    dVar25 = (double)(float)(dVar24 * dVar22);
  }
  *(float *)((int)puVar9 + 0x84) = (float)dVar25;
  fVar6 = SQRT((float)(dVar23 * dVar23 + (double)(float)(dVar29 * dVar29)));
  uVar8 = *(uint *)((int)puVar9 + 0x84);
  fVar4 = *(float *)((int)puVar9 + 0x84);
  (moby->pos).x = (float)(dVar23 + (double)fVar1);
  (moby->pos).y = (float)(dVar29 + (double)fVar2);
  (moby->pos).z = (float)(dVar25 + (double)fVar3);
  fVar1 = DAT_0071f418;
  fVar2 = mobyutil::g_FrameTime;
  dVar26 = ABS((double)fVar6);
  *(float *)(puVar9 + 0x10) = fVar6;
  *(float *)(puVar9 + 0x11) = (float)(dVar26 - ABS(dVar25));
  dVar28 = 0.7853981852531433;
  uVar16 = (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1e) & 2 | (ulonglong)(uVar8 >> 0x1d) & 4;
  dVar24 = ABS((double)*(float *)(puVar9 + 0x10));
  if ((double)*(float *)(puVar9 + 0x11) - dVar27 < 0.0) {
    dVar24 = ABS(dVar25);
  }
  fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
  fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  dVar25 = ABS((double)fVar4);
  if ((double)*(float *)(puVar9 + 0x11) - dVar27 < 0.0) {
    dVar25 = dVar26;
  }
  dVar26 = dVar27;
  if (dVar27 < dVar24) {
    lVar13 = uVar11 - 0x130;
    lVar17 = uVar11 - 0x94;
    lVar18 = uVar11 - 0x84;
    lVar21 = 2;
    fVar4 = (float)(dVar25 - dVar24) / (float)(dVar25 + dVar24);
    fVar5 = fVar4 * fVar4;
    *(float *)(puVar9 + 0x17) = fVar4;
    *(float *)(puVar9 + 0x16) = fVar4;
    *(float *)((int)puVar9 + 0xb4) = fVar4;
    *(float *)((int)puVar9 + 0xac) = fVar4;
    fVar4 = fVar5 * fVar5;
    *(float *)(puVar9 + 0x16) = *(float *)(puVar9 + 0x16) * fVar5;
    *(float *)((int)puVar9 + 0xb4) = *(float *)((int)puVar9 + 0xb4) * fVar4;
    *(float *)(puVar9 + 0x17) = *(float *)(puVar9 + 0x17) * fVar4 * fVar5;
    do {
      *(float *)((int)lVar13 + 0xac) = *(float *)((int)lVar13 + 0x9c) * fVar4 * fVar4;
      iVar12 = (int)lVar17;
      lVar13 = lVar13 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)(iVar12 + 4) * fVar4 * fVar4;
      lVar18 = lVar18 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar21 = 4;
    lVar18 = uVar11 - 0x94;
    pfVar15 = (float *)&DAT_007358e0;
    lVar13 = lVar14;
    lVar17 = lVar18;
    do {
      fVar4 = *pfVar15;
      fVar5 = pfVar15[1];
      pfVar15 = pfVar15 + 2;
      *(float *)((int)lVar13 + 0xac) = *(float *)((int)lVar13 + 0xac) * fVar4;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar5;
      lVar17 = lVar17 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar17 = 2;
    lVar13 = lVar14;
    dVar24 = dVar27;
    do {
      iVar12 = (int)lVar13;
      lVar13 = lVar13 + 0x10;
      iVar10 = (int)lVar18;
      lVar18 = lVar18 + 0x10;
      dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar12 + 0xac)) + *(float *)(iVar10 + 4)
                        + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc));
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    dVar26 = (double)((float)(dVar24 + 0.7853981852531433) * fVar6 + fVar3);
  }
  dVar26 = -dVar26;
  dVar24 = 0.2617993950843811;
  if ((dVar26 <= 0.2617993950843811) && (dVar24 = dVar26, dVar26 < -0.2617993950843811)) {
    dVar24 = -0.2617993950843811;
  }
  dVar22 = 0.01745329238474369;
  dVar29 = 12.566370964050293;
  fVar1 = DAT_008777d8 * 0.017453292 * fVar1;
  mobyutil::OrganicDeltAng
            ((float)dVar24,fVar1,fVar1,fVar2 * 12.566371,&(moby->rotation).y,0x870000,
             (float *)((int)pvVar7 + 0x6c));
  fVar1 = (float)(dVar31 - (double)(moby->pos).x);
  fVar2 = (float)(dVar30 - (double)(moby->pos).y);
  dVar26 = ABS((double)fVar1);
  dVar30 = ABS((double)fVar2);
  *(float *)((int)puVar9 + 0x74) = fVar1;
  *(float *)(puVar9 + 0xf) = fVar2;
  fVar1 = DAT_0071f418;
  *(float *)((int)puVar9 + 0x7c) = (float)(dVar26 - dVar30);
  dVar25 = (double)mobyutil::g_FrameTime;
  uVar16 = (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1d) & 4;
  dVar24 = ABS((double)*(float *)((int)puVar9 + 0x74));
  if ((double)*(float *)((int)puVar9 + 0x7c) - dVar27 < 0.0) {
    dVar24 = dVar30;
  }
  fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
  fVar2 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  dVar30 = ABS((double)*(float *)(puVar9 + 0xf));
  if ((double)*(float *)((int)puVar9 + 0x7c) - dVar27 < 0.0) {
    dVar30 = dVar26;
  }
  if (dVar27 < dVar24) {
    lVar13 = uVar11 - 0x130;
    lVar18 = uVar11 - 0xa4;
    lVar17 = uVar11 - 0xb4;
    lVar21 = 2;
    fVar4 = (float)(dVar30 - dVar24) / (float)(dVar30 + dVar24);
    fVar6 = fVar4 * fVar4;
    *(float *)(puVar9 + 0x13) = fVar4;
    *(float *)(puVar9 + 0x12) = fVar4;
    *(float *)((int)puVar9 + 0x94) = fVar4;
    *(float *)((int)puVar9 + 0x8c) = fVar4;
    fVar4 = fVar6 * fVar6;
    *(float *)(puVar9 + 0x12) = *(float *)(puVar9 + 0x12) * fVar6;
    *(float *)((int)puVar9 + 0x94) = *(float *)((int)puVar9 + 0x94) * fVar4;
    *(float *)(puVar9 + 0x13) = *(float *)(puVar9 + 0x13) * fVar4 * fVar6;
    do {
      *(float *)((int)lVar13 + 0x8c) = *(float *)((int)lVar13 + 0x7c) * fVar4 * fVar4;
      iVar12 = (int)lVar17;
      lVar17 = lVar17 + 8;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)(iVar12 + 4) * fVar4 * fVar4;
      lVar18 = lVar18 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar21 = 4;
    lVar18 = uVar11 - 0xb4;
    pfVar15 = (float *)&DAT_007358e0;
    lVar13 = lVar14;
    lVar17 = lVar18;
    do {
      fVar4 = *pfVar15;
      fVar6 = pfVar15[1];
      pfVar15 = pfVar15 + 2;
      *(float *)((int)lVar13 + 0x8c) = *(float *)((int)lVar13 + 0x8c) * fVar4;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar6;
      lVar17 = lVar17 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar13 = 2;
    do {
      iVar12 = (int)lVar14;
      iVar10 = (int)lVar18;
      lVar14 = lVar14 + 0x10;
      lVar18 = lVar18 + 0x10;
      dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar12 + 0x8c)) + *(float *)(iVar10 + 4)
                        + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc));
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    dVar27 = (double)((float)(dVar27 + dVar28) * fVar3 + fVar2);
  }
  fVar1 = (float)((double)DAT_008777dc * dVar22) * fVar1;
  mobyutil::OrganicDeltAng
            ((float)dVar27,fVar1,fVar1,(float)(dVar25 * dVar29),&(moby->rotation).z,0x870000,
             (float *)((int)pvVar7 + 0x68));
  fVar1 = (float)((double)DAT_008777e0 * dVar22) * DAT_0071f418;
  mobyutil::OrganicDeltAng
            (*(float *)((int)pvVar7 + 0x68) * *(float *)((int)pvVar7 + 0x60) * DAT_008777e4,fVar1,
             fVar1,(float)((double)mobyutil::g_FrameTime * dVar29),&(moby->rotation).x,0x720000,
             (float *)((int)pvVar7 + 0x70));
  if (iVar20 == 0) {
    iVar12 = sound::IsMobyPlayingSound(moby,*param_3);
    if (iVar12 == 0) {
      iVar12 = sound::sound_MobyPlay_oClass(0,4,moby,0x330);
      *param_3 = iVar12;
    }
  }
  else {
    iVar12 = *param_3;
    if (((iVar12 != -1) && (sound::g_SoundChannels[iVar12].pMoby == moby)) &&
       (sound::g_SoundChannels[iVar12].state != '\0')) {
      sound::sound_Kill(iVar12);
    }
    *param_3 = -1;
  }
  return iVar20;
}



//==== 0046e420  ns=mobyupdate_unsorted  size=0x1170
// sig: undefined UpdateMoby_816(MobyInstance * moby)
// callers(0): 
// callees(12): 00085a10 hero::Hero_GetSpecialStateKind; 000aa368 hero::Hero_WalkToPos; 000efb38 mobyfunc::DeleteMoby; 0010a2e0 mobyutil::OrganicDeltAng; 00110b70 mobyutil::MB_IsPntInCuboid; 00112900 mobyutil::MB_GetOrientation; 00116a68 mobyutil::MB_BobMotion; 00116b70 mobyutil::MB_SwingMotion; 0011aeec mobyutil::MB_ShowPersistentMessage; 0012d0e8 partupd::SpawnPart_41; 0046dcc8 mobyupdate_helpers::M816_MoveAlongSpline; 004d407c FUN_004d407c

/* Moby 816 */

void mobyupdate_unsorted::UpdateMoby_816(MobyInstance *moby)

{
  u8 uVar1;
  f32 fVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  MOBY_OCLASSES MVar8;
  ushort uVar9;
  void *pvVar10;
  Spline *pSVar11;
  Spline *pSVar12;
  ulonglong *puVar13;
  float fVar14;
  MobyInstance *pMVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  float *pfVar25;
  longlong lVar26;
  undefined8 in_r7;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  int iVar27;
  void *pvVar28;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  int iVar29;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar31;
  ulonglong in_f28;
  double dVar32;
  double dVar33;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar34;
  ulonglong in_f31;
  double dVar35;
  double dVar36;
  float fVar37;
  
  lVar17 = (longlong)(int)moby;
  uVar16 = ZEXT48(&stack0x00000000);
  lVar21 = uVar16 - 0x1b0;
  puVar13 = (ulonglong *)lVar21;
  *puVar13 = uVar16;
  puVar13[0x38] = in_LR;
  puVar13[0x30] = in_f26;
  puVar13[0x31] = in_f27;
  puVar13[0x32] = in_f28;
  puVar13[0x33] = in_f29;
  puVar13[0x34] = in_f30;
  puVar13[0x35] = in_f31;
  puVar13[0x2f] = unaff_r31;
  MVar8 = moby->oClass;
  puVar13[0x2d] = unaff_r29;
  pvVar10 = moby->pVar;
  puVar13[0x2e] = unaff_r30;
  puVar13[0x2c] = unaff_r28;
  puVar13[0x2b] = unaff_r27;
  puVar13[0x2a] = unaff_r26;
  puVar13[0x29] = unaff_r25;
  if (MVar8 == TAXI_0330) {
    if (moby->state < 2 || 6 < moby->state) {
      uVar18 = 0;
    }
    else {
      uVar18 = 1;
    }
  }
  else {
    uVar18 = 0;
  }
  FUN_004d407c(lVar17,uVar18);
  if (DAT_010d99d0 != 0) {
    iVar23 = *(int *)((int)pvVar10 + 0x94);
    iVar29 = 0;
    iVar22 = 0;
    if (0 < Splines[iVar23]->cnt) {
      iVar27 = 0;
      dVar35 = 0.3330000042915344;
      do {
        partupd::SpawnPart_41
                  ((float)dVar35,(int)&Splines[iVar23]->points[0].x + iVar27,moby,4,0x800000ff,in_r7
                   ,0x7f,2,0xff);
        iVar23 = *(int *)((int)pvVar10 + 0x94);
        iVar29 = iVar29 + 1;
        iVar27 = iVar27 + 0x10;
      } while (iVar29 < Splines[iVar23]->cnt);
    }
    iVar23 = *(int *)((int)pvVar10 + 0xa8);
    iVar29 = 0;
    if (0 < Splines[iVar23]->cnt) {
      iVar27 = 0;
      dVar35 = 0.3330000042915344;
      do {
        partupd::SpawnPart_41
                  ((float)dVar35,(int)&Splines[iVar23]->points[0].x + iVar27,moby,4,0x8000ff00,in_r7
                   ,0x7f,2,0xff);
        iVar23 = *(int *)((int)pvVar10 + 0xa8);
        iVar29 = iVar29 + 1;
        iVar27 = iVar27 + 0x10;
      } while (iVar29 < Splines[iVar23]->cnt);
    }
    iVar23 = *(int *)((int)pvVar10 + 0xbc);
    iVar29 = 0;
    if (0 < Splines[iVar23]->cnt) {
      dVar35 = 0.3330000042915344;
      do {
        partupd::SpawnPart_41
                  ((float)dVar35,(int)&Splines[iVar23]->points[0].x + iVar22,moby,4,0x80ff0000,in_r7
                   ,0x7f,2,0xff);
        iVar23 = *(int *)((int)pvVar10 + 0xbc);
        iVar29 = iVar29 + 1;
        iVar22 = iVar22 + 0x10;
      } while (iVar29 < Splines[iVar23]->cnt);
    }
  }
  dVar36 = (double)(moby->pos).x;
  dVar34 = (double)(moby->pos).y;
  dVar35 = (double)(moby->pos).z;
  fVar2 = (moby->rotation).y;
  *(f32 *)(puVar13 + 0xe) = (moby->rotation).x;
  fVar3 = (moby->rotation).z;
  *(f32 *)((int)puVar13 + 0x74) = fVar2;
  fVar2 = (moby->rotation).w;
  uVar1 = moby->state;
  *(f32 *)(puVar13 + 0xf) = fVar3;
  *(f32 *)((int)puVar13 + 0x7c) = fVar2;
  if (uVar1 == '\a') {
    iVar23 = mobyupdate_helpers::M816_MoveAlongSpline
                       (moby,(longlong)
                             *(int *)((int)pvVar10 + (uint)(byte)moby->setByGroup * 4 + 0xbc),
                        (int)pvVar10 + 0x78);
    if (iVar23 != 0) {
      moby->state = '\x01';
      moby->drawDistance = 0;
      moby->collision = (ushort *)0x0;
    }
  }
  else if (uVar1 == '\x06') {
    dVar32 = 0.01745329238474369;
    dVar31 = 0.0;
    dVar33 = 12.566370964050293;
    fVar37 = DAT_008777d8 * 0.017453292 * DAT_0071f418;
    mobyutil::OrganicDeltAng
              (0.0,fVar37,fVar37,mobyutil::g_FrameTime * 12.566371,&(moby->rotation).y,0x46e404,
               (float *)((int)pvVar10 + 0x6c));
    fVar37 = (float)((double)DAT_008777e0 * dVar32) * DAT_0071f418;
    mobyutil::OrganicDeltAng
              ((float)dVar31,fVar37,fVar37,(float)((double)mobyutil::g_FrameTime * dVar33),
               &(moby->rotation).x,0x870000,(float *)((int)pvVar10 + 0x70));
    fVar37 = (moby->pos).x;
    fVar4 = (moby->pos).y;
    if ((*(int *)((int)pvVar10 + (uint)(byte)moby->setByGroup * 4 + 0xbc) == -1) ||
       (fVar5 = fVar4 - g_heroPosition.y, fVar6 = fVar37 - g_heroPosition.x,
       fVar7 = (moby->pos).z - g_heroPosition.z,
       SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5) <= 15.0)) {
      if ((*(int *)((int)pvVar10 + (uint)(byte)moby->setByGroup * 4 + 0xbc) == -1) &&
         (fVar4 = fVar4 - g_heroPosition.y, fVar37 = fVar37 - g_heroPosition.x,
         5.0 < SQRT(fVar37 * fVar37 + fVar4 * fVar4))) {
        moby->state = '\x01';
      }
    }
    else {
      moby->state = '\a';
      *(undefined4 *)((int)pvVar10 + 100) = 1;
    }
  }
  else if (uVar1 == '\x05') {
    pMVar15 = DAT_0096a1d8;
    if ((((hero::g_heroStateType == 3) || (g_heroState == EDGE_JUMP)) ||
        (pMVar15 = g_standingOnMoby, g_framesNotGrounded == 0)) && (pMVar15 == moby)) {
      DAT_00969ed2 = 4;
      DAT_00969ed4 = 4;
    }
    iVar23 = mobyupdate_helpers::M816_MoveAlongSpline
                       (moby,(longlong)
                             *(int *)((int)pvVar10 + (uint)(byte)moby->setByGroup * 4 + 0xa8),
                        (int)pvVar10 + 0x78);
    if (iVar23 != 0) {
      moby->state = '\x06';
    }
  }
  else if (uVar1 == '\x04') {
    iVar23 = hero::Hero_GetSpecialStateKind();
    if (iVar23 == 0) {
      moby->state = '\x05';
    }
  }
  else if (uVar1 == '\x03') {
    dVar32 = 0.01745329238474369;
    dVar31 = 0.0;
    dVar33 = 12.566370964050293;
    fVar37 = DAT_008777d8 * 0.017453292 * DAT_0071f418;
    mobyutil::OrganicDeltAng
              (0.0,fVar37,fVar37,mobyutil::g_FrameTime * 12.566371,&(moby->rotation).y,0x46e404,
               (float *)((int)pvVar10 + 0x6c));
    fVar37 = (float)((double)DAT_008777e0 * dVar32) * DAT_0071f418;
    fVar37 = mobyutil::OrganicDeltAng
                       ((float)dVar31,fVar37,fVar37,(float)((double)mobyutil::g_FrameTime * dVar33),
                        &(moby->rotation).x,0x870000,(float *)((int)pvVar10 + 0x70));
    if ((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) {
      if (*(int *)((int)pvVar10 + (uint)(byte)moby->setByGroup * 4 + 0xd0) == 1) {
        lVar21 = 0xbc9;
        mobyutil::MB_ShowPersistentMessage((double)fVar37,8);
      }
      else {
        lVar21 = 0xbc9;
        mobyutil::MB_ShowPersistentMessage((double)fVar37,8);
      }
      if (((g_buttonsPressedThisFrame & TRIANGLE) != 0) && (mobyutil::g_HelpMsgOwner == 8)) {
        hero::Hero_WalkToPos((moby->rotation).z,&(moby->pos).x,lVar21,0);
        moby->state = '\x04';
        *(undefined4 *)((int)pvVar10 + 100) = 1;
      }
    }
  }
  else if (uVar1 == '\x02') {
    if ((*(int *)((int)pvVar10 + (uint)(byte)moby->setByGroup * 4 + 0x94) == -1) ||
       (iVar23 = mobyupdate_helpers::M816_MoveAlongSpline
                           (moby,(longlong)
                                 *(int *)((int)pvVar10 + (uint)(byte)moby->setByGroup * 4 + 0x94),
                            (int)pvVar10 + 0x78), iVar23 != 0)) {
      moby->state = '\x03';
      *(undefined4 *)((int)pvVar10 + 0xe4) = 0xffffffff;
    }
  }
  else if (uVar1 == '\x01') {
    if (*(int *)((int)pvVar10 + 0x7c) != 0) {
      iVar23 = 0;
      pvVar28 = pvVar10;
      do {
        if (((*(int *)((int)pvVar28 + 0x80) != -1) || (*(int *)((int)pvVar10 + 0x74) == iVar23)) &&
           ((iVar22 = mobyutil::MB_IsPntInCuboid
                                (&g_heroPosition,(longlong)*(int *)((int)pvVar28 + 0x80)),
            iVar22 != 0 || (*(int *)((int)pvVar10 + 0x74) == iVar23)))) {
          iVar22 = *(int *)((int)pvVar10 + iVar23 * 4 + 0x94);
          moby->collision = moby->pClass->collision;
          if (iVar22 == -1) {
            iVar22 = *(int *)((int)pvVar10 + iVar23 * 4 + 0xa8);
            if (iVar22 != -1) {
              iVar29 = *(int *)((int)pvVar10 + iVar23 * 4 + 0xa8);
              pSVar11 = Splines[iVar22];
              fVar37 = pSVar11->points[0].x;
              (moby->pos).x = fVar37;
              fVar4 = pSVar11->points[0].y;
              (moby->pos).y = fVar4;
              pSVar12 = Splines[iVar29];
              (moby->pos).z = pSVar11->points[0].z;
              (moby->pos).w = pSVar11->points[0].w;
              fVar37 = pSVar12->points[1].x - fVar37;
              fVar4 = pSVar12->points[1].y - fVar4;
              fVar6 = ABS(fVar37);
              fVar5 = ABS(fVar4);
              *(float *)(puVar13 + 0x12) = fVar37;
              *(float *)((int)puVar13 + 0x94) = fVar4;
              *(float *)(puVar13 + 0x13) = fVar6 - fVar5;
              fVar37 = 0.0;
              uVar19 = (ulonglong)(*(uint *)(puVar13 + 0x12) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)(puVar13 + 0x13) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)((int)puVar13 + 0x94) >> 0x1d) & 4;
              fVar4 = ABS(*(float *)(puVar13 + 0x12));
              if (*(float *)(puVar13 + 0x13) - 0.0 < 0.0) {
                fVar4 = fVar5;
              }
              fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
              fVar5 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
              fVar14 = ABS(*(float *)((int)puVar13 + 0x94));
              if (*(float *)(puVar13 + 0x13) - 0.0 < 0.0) {
                fVar14 = fVar6;
              }
              if (0.0 < fVar4) {
                lVar20 = uVar16 - 0x1a0;
                lVar24 = uVar16 - 0xf0;
                lVar26 = uVar16 - 0xe0;
                lVar30 = 2;
                fVar4 = (fVar14 - fVar4) / (fVar14 + fVar4);
                fVar6 = fVar4 * fVar4;
                *(float *)((int)puVar13 + 0xcc) = fVar4;
                *(float *)((int)puVar13 + 0xc4) = fVar4;
                *(float *)(puVar13 + 0x19) = fVar4;
                *(float *)(puVar13 + 0x18) = fVar4;
                fVar4 = fVar6 * fVar6;
                *(float *)((int)puVar13 + 0xc4) = *(float *)((int)puVar13 + 0xc4) * fVar6;
                *(float *)(puVar13 + 0x19) = *(float *)(puVar13 + 0x19) * fVar4;
                *(float *)((int)puVar13 + 0xcc) = *(float *)((int)puVar13 + 0xcc) * fVar4 * fVar6;
                do {
                  *(float *)((int)lVar20 + 0xc0) = *(float *)((int)lVar20 + 0xb0) * fVar4 * fVar4;
                  iVar22 = (int)lVar24;
                  lVar20 = lVar20 + 8;
                  lVar24 = lVar24 + 8;
                  *(float *)((int)lVar26 + 4) = *(float *)(iVar22 + 4) * fVar4 * fVar4;
                  lVar26 = lVar26 + 8;
                  lVar30 = lVar30 + -1;
                } while (lVar30 != 0);
                lVar30 = 4;
                lVar26 = uVar16 - 0xf0;
                pfVar25 = (float *)&DAT_007358e0;
                lVar20 = lVar21;
                lVar24 = lVar26;
                do {
                  fVar4 = *pfVar25;
                  fVar6 = pfVar25[1];
                  pfVar25 = pfVar25 + 2;
                  *(float *)((int)lVar20 + 0xc0) = *(float *)((int)lVar20 + 0xc0) * fVar4;
                  lVar20 = lVar20 + 8;
                  *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
                  lVar24 = lVar24 + 8;
                  lVar30 = lVar30 + -1;
                } while (lVar30 != 0);
                lVar20 = 2;
                do {
                  iVar22 = (int)lVar21;
                  iVar29 = (int)lVar26;
                  lVar21 = lVar21 + 0x10;
                  lVar26 = lVar26 + 0x10;
                  fVar37 = fVar37 + *(float *)(iVar22 + 0xc0) + *(float *)(iVar29 + 4) +
                           *(float *)(iVar29 + 8) + *(float *)(iVar29 + 0xc);
                  lVar20 = lVar20 + -1;
                } while (lVar20 != 0);
                fVar37 = (fVar37 + 0.7853982) * fVar7 + fVar5;
              }
              (moby->rotation).z = fVar37;
            }
          }
          else {
            iVar29 = *(int *)((int)pvVar10 + iVar23 * 4 + 0x94);
            pSVar11 = Splines[iVar22];
            fVar37 = pSVar11->points[0].x;
            (moby->pos).x = fVar37;
            fVar4 = pSVar11->points[0].y;
            (moby->pos).y = fVar4;
            pSVar12 = Splines[iVar29];
            (moby->pos).z = pSVar11->points[0].z;
            (moby->pos).w = pSVar11->points[0].w;
            fVar37 = pSVar12->points[1].x - fVar37;
            fVar4 = pSVar12->points[1].y - fVar4;
            fVar6 = ABS(fVar37);
            fVar5 = ABS(fVar4);
            *(float *)((int)puVar13 + 0x9c) = fVar37;
            *(float *)(puVar13 + 0x14) = fVar4;
            *(float *)((int)puVar13 + 0xa4) = fVar6 - fVar5;
            fVar37 = 0.0;
            uVar19 = (ulonglong)(*(uint *)((int)puVar13 + 0x9c) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar13 + 0xa4) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar13 + 0x14) >> 0x1d) & 4;
            fVar4 = ABS(*(float *)((int)puVar13 + 0x9c));
            if (*(float *)((int)puVar13 + 0xa4) - 0.0 < 0.0) {
              fVar4 = fVar5;
            }
            fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
            fVar5 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
            fVar14 = ABS(*(float *)(puVar13 + 0x14));
            if (*(float *)((int)puVar13 + 0xa4) - 0.0 < 0.0) {
              fVar14 = fVar6;
            }
            if (0.0 < fVar4) {
              lVar20 = uVar16 - 0x1a0;
              lVar26 = uVar16 - 0xc0;
              lVar24 = uVar16 - 0xd0;
              lVar30 = 2;
              fVar4 = (fVar14 - fVar4) / (fVar14 + fVar4);
              fVar6 = fVar4 * fVar4;
              *(float *)((int)puVar13 + 0xec) = fVar4;
              *(float *)((int)puVar13 + 0xe4) = fVar4;
              *(float *)(puVar13 + 0x1d) = fVar4;
              *(float *)(puVar13 + 0x1c) = fVar4;
              fVar4 = fVar6 * fVar6;
              *(float *)((int)puVar13 + 0xe4) = *(float *)((int)puVar13 + 0xe4) * fVar6;
              *(float *)(puVar13 + 0x1d) = *(float *)(puVar13 + 0x1d) * fVar4;
              *(float *)((int)puVar13 + 0xec) = *(float *)((int)puVar13 + 0xec) * fVar4 * fVar6;
              do {
                *(float *)((int)lVar20 + 0xe0) = *(float *)((int)lVar20 + 0xd0) * fVar4 * fVar4;
                iVar22 = (int)lVar24;
                lVar24 = lVar24 + 8;
                lVar20 = lVar20 + 8;
                *(float *)((int)lVar26 + 4) = *(float *)(iVar22 + 4) * fVar4 * fVar4;
                lVar26 = lVar26 + 8;
                lVar30 = lVar30 + -1;
              } while (lVar30 != 0);
              lVar30 = 4;
              lVar26 = uVar16 - 0xd0;
              pfVar25 = (float *)&DAT_007358e0;
              lVar20 = lVar21;
              lVar24 = lVar26;
              do {
                fVar4 = *pfVar25;
                fVar6 = pfVar25[1];
                pfVar25 = pfVar25 + 2;
                *(float *)((int)lVar20 + 0xe0) = *(float *)((int)lVar20 + 0xe0) * fVar4;
                lVar20 = lVar20 + 8;
                *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
                lVar24 = lVar24 + 8;
                lVar30 = lVar30 + -1;
              } while (lVar30 != 0);
              lVar20 = 2;
              do {
                iVar22 = (int)lVar21;
                lVar21 = lVar21 + 0x10;
                iVar29 = (int)lVar26;
                lVar26 = lVar26 + 0x10;
                fVar37 = fVar37 + *(float *)(iVar22 + 0xe0) + *(float *)(iVar29 + 4) +
                         *(float *)(iVar29 + 8) + *(float *)(iVar29 + 0xc);
                lVar20 = lVar20 + -1;
              } while (lVar20 != 0);
              fVar37 = (fVar37 + 0.7853982) * fVar7 + fVar5;
            }
            (moby->rotation).z = fVar37;
          }
          moby->state = '\x02';
          moby->setByGroup = (char)iVar23;
          fVar4 = DAT_008777d0;
          fVar37 = mobyutil::g_FrameTime;
          moby->drawDistance = 0x80;
          *(undefined4 *)((int)pvVar10 + 100) = 1;
          *(undefined4 *)((int)pvVar10 + 0x74) = 0xffffffff;
          *(float *)((int)pvVar10 + 0x60) = fVar4 * fVar37;
          break;
        }
        iVar23 = iVar23 + 1;
        pvVar28 = (void *)((int)pvVar28 + 4);
      } while (iVar23 < 5);
    }
  }
  else if (uVar1 == '\0') {
    if (*(int *)((int)pvVar10 + 0x94) == -1) {
      if (*(int *)((int)pvVar10 + 0xa8) != -1) {
        iVar23 = *(int *)((int)pvVar10 + 0xa8);
        pSVar11 = Splines[*(int *)((int)pvVar10 + 0xa8)];
        fVar37 = pSVar11->points[0].x;
        (moby->pos).x = fVar37;
        fVar4 = pSVar11->points[0].y;
        (moby->pos).y = fVar4;
        pSVar12 = Splines[iVar23];
        (moby->pos).z = pSVar11->points[0].z;
        (moby->pos).w = pSVar11->points[0].w;
        fVar37 = pSVar12->points[1].x - fVar37;
        fVar4 = pSVar12->points[1].y - fVar4;
        fVar6 = ABS(fVar37);
        fVar5 = ABS(fVar4);
        *(float *)(puVar13 + 0x15) = fVar37;
        *(float *)((int)puVar13 + 0xac) = fVar4;
        *(float *)(puVar13 + 0x16) = fVar6 - fVar5;
        fVar37 = 0.0;
        uVar19 = (ulonglong)(*(uint *)(puVar13 + 0x15) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar13 + 0x16) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0xac) >> 0x1d) & 4;
        fVar4 = ABS(*(float *)(puVar13 + 0x15));
        if (*(float *)(puVar13 + 0x16) - 0.0 < 0.0) {
          fVar4 = fVar5;
        }
        fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
        fVar5 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
        fVar14 = ABS(*(float *)((int)puVar13 + 0xac));
        if (*(float *)(puVar13 + 0x16) - 0.0 < 0.0) {
          fVar14 = fVar6;
        }
        if (0.0 < fVar4) {
          lVar20 = uVar16 - 0x1a0;
          lVar24 = uVar16 - 0xb0;
          lVar26 = uVar16 - 0xa0;
          lVar30 = 2;
          fVar4 = (fVar14 - fVar4) / (fVar14 + fVar4);
          fVar6 = fVar4 * fVar4;
          *(float *)((int)puVar13 + 0x10c) = fVar4;
          *(float *)((int)puVar13 + 0x104) = fVar4;
          *(float *)(puVar13 + 0x21) = fVar4;
          *(float *)(puVar13 + 0x20) = fVar4;
          fVar4 = fVar6 * fVar6;
          *(float *)((int)puVar13 + 0x104) = *(float *)((int)puVar13 + 0x104) * fVar6;
          *(float *)(puVar13 + 0x21) = *(float *)(puVar13 + 0x21) * fVar4;
          *(float *)((int)puVar13 + 0x10c) = *(float *)((int)puVar13 + 0x10c) * fVar4 * fVar6;
          do {
            *(float *)((int)lVar20 + 0x100) = *(float *)((int)lVar20 + 0xf0) * fVar4 * fVar4;
            iVar23 = (int)lVar24;
            lVar20 = lVar20 + 8;
            lVar24 = lVar24 + 8;
            *(float *)((int)lVar26 + 4) = *(float *)(iVar23 + 4) * fVar4 * fVar4;
            lVar26 = lVar26 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar30 = 4;
          lVar26 = uVar16 - 0xb0;
          pfVar25 = (float *)&DAT_007358e0;
          lVar20 = lVar21;
          lVar24 = lVar26;
          do {
            fVar4 = *pfVar25;
            fVar6 = pfVar25[1];
            pfVar25 = pfVar25 + 2;
            *(float *)((int)lVar20 + 0x100) = *(float *)((int)lVar20 + 0x100) * fVar4;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
            lVar24 = lVar24 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar20 = 2;
          do {
            iVar23 = (int)lVar21;
            iVar22 = (int)lVar26;
            lVar21 = lVar21 + 0x10;
            lVar26 = lVar26 + 0x10;
            fVar37 = fVar37 + *(float *)(iVar23 + 0x100) + *(float *)(iVar22 + 4) +
                     *(float *)(iVar22 + 8) + *(float *)(iVar22 + 0xc);
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          fVar37 = (fVar37 + 0.7853982) * fVar7 + fVar5;
        }
        (moby->rotation).z = fVar37;
      }
    }
    else {
      iVar23 = *(int *)((int)pvVar10 + 0x94);
      pSVar11 = Splines[*(int *)((int)pvVar10 + 0x94)];
      fVar37 = pSVar11->points[0].x;
      (moby->pos).x = fVar37;
      fVar4 = pSVar11->points[0].y;
      (moby->pos).y = fVar4;
      pSVar12 = Splines[iVar23];
      (moby->pos).z = pSVar11->points[0].z;
      (moby->pos).w = pSVar11->points[0].w;
      fVar37 = pSVar12->points[1].x - fVar37;
      fVar4 = pSVar12->points[1].y - fVar4;
      fVar6 = ABS(fVar37);
      fVar5 = ABS(fVar4);
      *(float *)((int)puVar13 + 0xb4) = fVar37;
      *(float *)(puVar13 + 0x17) = fVar4;
      *(float *)((int)puVar13 + 0xbc) = fVar6 - fVar5;
      fVar37 = 0.0;
      uVar19 = (ulonglong)(*(uint *)((int)puVar13 + 0xb4) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar13 + 0xbc) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar13 + 0x17) >> 0x1d) & 4;
      fVar4 = ABS(*(float *)((int)puVar13 + 0xb4));
      if (*(float *)((int)puVar13 + 0xbc) - 0.0 < 0.0) {
        fVar4 = fVar5;
      }
      fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
      fVar5 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
      fVar14 = ABS(*(float *)(puVar13 + 0x17));
      if (*(float *)((int)puVar13 + 0xbc) - 0.0 < 0.0) {
        fVar14 = fVar6;
      }
      if (0.0 < fVar4) {
        lVar20 = uVar16 - 0x1a0;
        lVar26 = uVar16 - 0x80;
        lVar24 = uVar16 - 0x90;
        lVar30 = 2;
        fVar4 = (fVar14 - fVar4) / (fVar14 + fVar4);
        fVar6 = fVar4 * fVar4;
        *(float *)((int)puVar13 + 300) = fVar4;
        *(float *)((int)puVar13 + 0x124) = fVar4;
        *(float *)(puVar13 + 0x25) = fVar4;
        *(float *)(puVar13 + 0x24) = fVar4;
        fVar4 = fVar6 * fVar6;
        *(float *)((int)puVar13 + 0x124) = *(float *)((int)puVar13 + 0x124) * fVar6;
        *(float *)(puVar13 + 0x25) = *(float *)(puVar13 + 0x25) * fVar4;
        *(float *)((int)puVar13 + 300) = *(float *)((int)puVar13 + 300) * fVar4 * fVar6;
        do {
          *(float *)((int)lVar20 + 0x120) = *(float *)((int)lVar20 + 0x110) * fVar4 * fVar4;
          iVar23 = (int)lVar24;
          lVar24 = lVar24 + 8;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar23 + 4) * fVar4 * fVar4;
          lVar26 = lVar26 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar30 = 4;
        lVar26 = uVar16 - 0x90;
        pfVar25 = (float *)&DAT_007358e0;
        lVar20 = lVar21;
        lVar24 = lVar26;
        do {
          fVar4 = *pfVar25;
          fVar6 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar20 + 0x120) = *(float *)((int)lVar20 + 0x120) * fVar4;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
          lVar24 = lVar24 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar20 = 2;
        do {
          iVar23 = (int)lVar21;
          lVar21 = lVar21 + 0x10;
          iVar22 = (int)lVar26;
          lVar26 = lVar26 + 0x10;
          fVar37 = fVar37 + *(float *)(iVar23 + 0x120) + *(float *)(iVar22 + 4) +
                   *(float *)(iVar22 + 8) + *(float *)(iVar22 + 0xc);
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        fVar37 = (fVar37 + 0.7853982) * fVar7 + fVar5;
      }
      (moby->rotation).z = fVar37;
    }
    moby->updateDistance = -1;
    uVar9 = moby->uid;
    moby->drawDistance = 0;
    *(undefined4 *)((int)pvVar10 + 0x74) = 0xffffffff;
    moby->collision = (ushort *)0x0;
    moby->state = '\x01';
    if (((&DAT_00a545c4)[(short)uVar9] != '\0') ||
       ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar9 >> 5) << 2)) &
        1 << (uVar9 & 0x1f)) != 0)) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  dVar33 = 0.01745329238474369;
  pvVar28 = moby->pVar;
  mobyutil::MB_BobMotion
            (DAT_008777bc,DAT_008777c0 * 0.017453292 * mobyutil::g_FrameTime,moby,
             (float *)((int)pvVar28 + 0xec),(float *)((int)pvVar28 + 0xe8));
  mobyutil::MB_SwingMotion
            ((double)DAT_008777c4,
             (double)((float)((double)DAT_008777c8 * dVar33) * mobyutil::g_FrameTime),
             (double)((float)((double)DAT_008777cc * dVar33) * mobyutil::g_FrameTime),lVar17,
             ZEXT48(pvVar28) + 0xf0,ZEXT48(pvVar28) + 0xf4);
  fVar37 = (moby->pos).x;
  fVar4 = (moby->pos).y;
  fVar6 = (moby->pos).z;
  *(f32 *)((int)puVar13 + 0x8c) = (moby->pos).w;
  *(float *)(puVar13 + 0x10) = (float)((double)fVar37 - dVar36);
  *(float *)((int)puVar13 + 0x84) = (float)((double)fVar4 - dVar34);
  *(float *)(puVar13 + 0x11) = (float)((double)fVar6 - dVar35);
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar10 + 0x20),(Vec4 *)(puVar13 + 0x10),uVar16 - 0x140,
             lVar17 + 0x40);
  return;
}



//==== 0046f590  ns=mobyupdate_helpers  size=0x14
// sig: undefined M817_0046f590(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M817_0046f590(void)

{
  DAT_00877834 = 0x10000;
  return;
}



//==== 0046f5b0  ns=mobyupdate_unsorted  size=0x190
// sig: undefined UpdateMoby_817(MobyInstance * moby)
// callers(0): 
// callees(5): 000efb38 mobyfunc::DeleteMoby; 0010675c mobyutil::MB_damage; 0011a100 mobyutil::MB_DistributeBoltsNearHero; 0011a560 mobyutil::MB_SpawnDebrisMoby; 0015d12c sound::PlayMobySound

/* Moby 817 */

void mobyupdate_unsorted::UpdateMoby_817(MobyInstance *moby)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  undefined8 in_r9;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  lVar2 = (longlong)(int)moby;
  iVar3 = mobyutil::MB_damage(lVar2,0x10000,0);
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    if ((iVar3 != 0) && (0 < *(int *)(iVar3 + 0x2c))) {
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    sound::PlayMobySound(0,0,moby);
    mobyutil::MB_DistributeBoltsNearHero(lVar2);
    lVar5 = lVar2 + 0x10;
    lVar4 = lVar2 + 0x40;
    uVar6 = 0;
    mobyutil::MB_SpawnDebrisMoby(0,lVar2,0x727,lVar5,lVar4,0,0,in_r9,&DAT_00a15d30);
    mobyutil::MB_SpawnDebrisMoby(uVar6,lVar2,0x728,lVar5,lVar4,0,0,in_r9,&DAT_00a15d30);
    mobyutil::MB_SpawnDebrisMoby(uVar6,lVar2,0x729,lVar5,lVar4,0,0,in_r9,&DAT_00a15d30);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 0046f7b0  ns=mobyupdate_unsorted  size=0xed0
// sig: undefined UpdateMoby_{818_847}(MobyInstance * moby)
// callers(0): 
// callees(6): 000fcbe8 mobyutil::MB_randRangeFloat; 00109c30 mobyutil::OrganicDelt; 0010a2e0 mobyutil::OrganicDeltAng; 004fff60 fastfunc::FastDecTimerS32; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt

/* Moby 818
   Moby 847 */

void mobyupdate_unsorted::UpdateMoby__818_847_(MobyInstance *moby)

{
  u8 uVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  float fVar10;
  f32 fVar11;
  uint uVar12;
  uint uVar13;
  ulonglong *puVar14;
  int iVar15;
  Cylinder *pCVar16;
  ulonglong uVar17;
  float fVar21;
  int iVar22;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar23;
  float *pfVar24;
  int iVar25;
  int iVar26;
  longlong lVar27;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f31;
  
  uVar17 = ZEXT48(&stack0x00000000);
  lVar20 = uVar17 - 0x160;
  puVar14 = (ulonglong *)lVar20;
  *puVar14 = uVar17;
  puVar14[0x2e] = in_LR;
  puVar14[0x2b] = in_f31;
  puVar14[0x29] = unaff_r30;
  puVar14[0x2a] = unaff_r31;
  pfVar9 = (float *)moby->pVar;
  fVar2 = (moby->pos).z;
  puVar14[0x28] = unaff_r29;
  puVar14[0x27] = unaff_r28;
  puVar14[0x26] = unaff_r27;
  if (pfVar9 != (float *)0x0) {
    uVar1 = moby->state;
    if (uVar1 == '\x05') {
      fVar21 = pfVar9[8] - (moby->pos).x;
      fVar10 = pfVar9[9] - (moby->pos).y;
      fVar4 = ABS(fVar21);
      fVar3 = ABS(fVar10);
      *(float *)((int)puVar14 + 0x84) = fVar21;
      *(float *)(puVar14 + 0x11) = fVar10;
      *(float *)((int)puVar14 + 0x8c) = fVar4 - fVar3;
      dVar29 = 0.0;
      uVar18 = (ulonglong)(*(uint *)((int)puVar14 + 0x84) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar14 + 0x8c) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar14 + 0x11) >> 0x1d) & 4;
      fVar21 = ABS(*(float *)((int)puVar14 + 0x84));
      if (*(float *)((int)puVar14 + 0x8c) - 0.0 < 0.0) {
        fVar21 = fVar3;
      }
      fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar10 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      fVar6 = ABS(*(float *)(puVar14 + 0x11));
      if (*(float *)((int)puVar14 + 0x8c) - 0.0 < 0.0) {
        fVar6 = fVar4;
      }
      dVar32 = dVar29;
      if (0.0 < fVar21) {
        lVar19 = uVar17 - 0x150;
        lVar27 = uVar17 - 0x88;
        lVar23 = uVar17 - 0x98;
        lVar28 = 2;
        fVar21 = (fVar6 - fVar21) / (fVar6 + fVar21);
        fVar4 = fVar21 * fVar21;
        *(float *)((int)puVar14 + 0xd4) = fVar21;
        *(float *)((int)puVar14 + 0xcc) = fVar21;
        *(float *)(puVar14 + 0x1a) = fVar21;
        *(float *)(puVar14 + 0x19) = fVar21;
        fVar21 = fVar4 * fVar4;
        *(float *)((int)puVar14 + 0xcc) = *(float *)((int)puVar14 + 0xcc) * fVar4;
        *(float *)(puVar14 + 0x1a) = *(float *)(puVar14 + 0x1a) * fVar21;
        *(float *)((int)puVar14 + 0xd4) = *(float *)((int)puVar14 + 0xd4) * fVar21 * fVar4;
        do {
          *(float *)((int)lVar19 + 200) = *(float *)((int)lVar19 + 0xb8) * fVar21 * fVar21;
          iVar22 = (int)lVar23;
          lVar23 = lVar23 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar21 * fVar21;
          lVar27 = lVar27 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar27 = uVar17 - 0x98;
        pfVar24 = (float *)&DAT_007358e0;
        lVar19 = lVar20;
        lVar23 = lVar27;
        do {
          fVar21 = *pfVar24;
          fVar4 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar19 + 200) = *(float *)((int)lVar19 + 200) * fVar21;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar4;
          lVar23 = lVar23 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar23 = 2;
        lVar19 = lVar20;
        do {
          iVar22 = (int)lVar19;
          iVar26 = (int)lVar27;
          lVar19 = lVar19 + 0x10;
          lVar27 = lVar27 + 0x10;
          dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar22 + 200)) +
                            *(float *)(iVar26 + 4) + *(float *)(iVar26 + 8) +
                           *(float *)(iVar26 + 0xc));
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar3 + fVar10);
      }
      *(f32 *)((int)puVar14 + 0x74) = fVar2;
      mobyutil::OrganicDeltAng
                ((float)dVar32,DAT_0071f418 * 3.1415927,DAT_0071f418 * 3.1415927,
                 mobyutil::g_FrameTime * 25.132742,&(moby->rotation).z,0x720000,pfVar9 + 4);
      (moby->rotation).x = pfVar9[4] * DAT_00877858;
      fVar21 = (moby->pos).x;
      fVar10 = (moby->pos).y;
      fVar3 = pfVar9[2];
      dVar32 = ABS((double)pfVar9[2]);
      fVar4 = SQRT(*pfVar9 * *pfVar9 + pfVar9[1] * pfVar9[1]);
      dVar30 = ABS((double)fVar4);
      *(float *)((int)puVar14 + 0x7c) = fVar4;
      *(float *)(puVar14 + 0x10) = (float)(dVar30 - dVar32);
      uVar18 = (ulonglong)(*(uint *)((int)puVar14 + 0x7c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar14 + 0x10) >> 0x1e) & 2 |
               (ulonglong)((uint)fVar3 >> 0x1d) & 4;
      fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
      dVar31 = ABS((double)*(float *)((int)puVar14 + 0x7c));
      if ((double)*(float *)(puVar14 + 0x10) - dVar29 < 0.0) {
        dVar31 = dVar32;
      }
      if ((double)*(float *)(puVar14 + 0x10) - dVar29 < 0.0) {
        dVar32 = dVar30;
      }
      fVar4 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      if (dVar29 < dVar31) {
        lVar19 = uVar17 - 0x150;
        lVar23 = uVar17 - 0xb8;
        lVar27 = uVar17 - 0xa8;
        lVar28 = 2;
        fVar6 = (float)(dVar32 - dVar31) / (float)(dVar32 + dVar31);
        fVar8 = fVar6 * fVar6;
        *(float *)((int)puVar14 + 0xb4) = fVar6;
        *(float *)((int)puVar14 + 0xac) = fVar6;
        *(float *)(puVar14 + 0x16) = fVar6;
        *(float *)(puVar14 + 0x15) = fVar6;
        fVar6 = fVar8 * fVar8;
        *(float *)((int)puVar14 + 0xac) = *(float *)((int)puVar14 + 0xac) * fVar8;
        *(float *)(puVar14 + 0x16) = *(float *)(puVar14 + 0x16) * fVar6;
        *(float *)((int)puVar14 + 0xb4) = *(float *)((int)puVar14 + 0xb4) * fVar6 * fVar8;
        do {
          *(float *)((int)lVar19 + 0xa8) = *(float *)((int)lVar19 + 0x98) * fVar6 * fVar6;
          iVar22 = (int)lVar23;
          lVar19 = lVar19 + 8;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar6 * fVar6;
          lVar27 = lVar27 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar27 = uVar17 - 0xb8;
        pfVar24 = (float *)&DAT_007358e0;
        lVar19 = lVar20;
        lVar23 = lVar27;
        do {
          fVar6 = *pfVar24;
          fVar8 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar19 + 0xa8) = *(float *)((int)lVar19 + 0xa8) * fVar6;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar8;
          lVar23 = lVar23 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar19 = 2;
        do {
          iVar22 = (int)lVar20;
          iVar26 = (int)lVar27;
          lVar20 = lVar20 + 0x10;
          lVar27 = lVar27 + 0x10;
          dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar22 + 0xa8)) +
                            *(float *)(iVar26 + 4) + *(float *)(iVar26 + 8) +
                           *(float *)(iVar26 + 0xc));
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar3 + fVar4);
      }
      iVar22 = 0x470000;
      *(undefined4 *)(puVar14 + 0xf) = 0;
      (moby->rotation).y = (float)-dVar29;
      fVar10 = fVar10 - pfVar9[9];
      dVar29 = 5.0;
      fVar21 = fVar21 - pfVar9[8];
      mobyutil::OrganicDelt
                (SQRT(fVar21 * fVar21 + fVar10 * fVar10),DAT_0071f418 * 5.0,DAT_0071f418 * 5.0,
                 mobyutil::g_FrameTime * 50.0,(float *)(puVar14 + 0xf),0x470000,pfVar9 + 5);
      mobyutil::OrganicDelt
                (pfVar9[10],(float)((double)DAT_0071f418 * dVar29),
                 (float)((double)DAT_0071f418 * 100.0),mobyutil::g_FrameTime * 150.0,
                 (float *)((int)puVar14 + 0x74),iVar22,pfVar9 + 2);
      fVar21 = (moby->rotation).z + 1.5707963;
      fVar10 = 3.1415925 - fVar21;
      if (fVar21 - (3.1415925 - fVar21) < 0.0) {
        fVar10 = fVar21;
      }
      fVar3 = -3.1415925 - fVar21;
      if ((-3.1415925 - fVar21) - fVar10 < 0.0) {
        fVar3 = fVar10;
      }
      fVar21 = fVar3 * fVar3;
      fVar10 = fVar21 * fVar21 * fVar3;
      fVar4 = fVar21 * fVar10;
      fVar3 = (fVar21 * fVar4 * 2.601887e-06 +
              fVar4 * -0.0001980741 + fVar10 * 0.0083330255 + fVar21 * fVar3 * -0.16666657 + fVar3)
              * pfVar9[5];
      *pfVar9 = fVar3;
      fVar21 = (moby->rotation).z;
      fVar10 = 3.1415925 - fVar21;
      if (fVar21 - (3.1415925 - fVar21) < 0.0) {
        fVar10 = fVar21;
      }
      fVar4 = -3.1415925 - fVar21;
      if ((-3.1415925 - fVar21) - fVar10 < 0.0) {
        fVar4 = fVar10;
      }
      fVar21 = fVar4 * fVar4;
      fVar10 = fVar21 * fVar21 * fVar4;
      fVar6 = fVar21 * fVar10;
      pfVar9[1] = (fVar21 * fVar6 * 2.601887e-06 +
                  fVar6 * -0.0001980741 +
                  fVar10 * 0.0083330255 + fVar21 * fVar4 * -0.16666657 + fVar4) * pfVar9[5];
      fVar3 = (moby->pos).x + fVar3;
      (moby->pos).x = fVar3;
      fVar21 = (moby->pos).y + pfVar9[1];
      (moby->pos).y = fVar21;
      (moby->pos).z = (moby->pos).z + pfVar9[2];
      fVar21 = fVar21 - pfVar9[9];
      fVar3 = fVar3 - pfVar9[8];
      if (SQRT(fVar3 * fVar3 + fVar21 * fVar21) < 0.5) {
        moby->state = '\x01';
        dVar29 = (double)mobyutil::MB_randRangeFloat(90.0,360.0);
        fVar21 = (float)fastfunc::FastDoubleToInt((double)(float)(dVar29 * (double)animationSpeed));
        pfVar9[0xc] = fVar21;
      }
    }
    else if (uVar1 == '\x04') {
      iVar22 = fastfunc::FastDecTimerS32(pfVar9 + 0xc);
      if (iVar22 != 0) {
        moby->state = '\x05';
        pCVar16 = Cylinders;
        fVar21 = pfVar9[6];
        pfVar9[8] = Cylinders[(int)fVar21].pos.x;
        pfVar9[9] = pCVar16[(int)fVar21].pos.y;
        pfVar9[10] = pCVar16[(int)fVar21].pos.z;
        fVar21 = pCVar16[(int)fVar21].pos.w;
        moby->drawDistance = 0xff;
        pfVar9[0xb] = fVar21;
        fVar21 = 0.0;
        (moby->rotation).w = 0.0;
        (moby->rotation).z = 0.0;
        (moby->rotation).y = 0.0;
        (moby->rotation).x = 0.0;
        pfVar9[3] = 0.0;
        pfVar9[1] = 0.0;
        *pfVar9 = 0.0;
        pfVar9[2] = mobyutil::g_FrameTime * -75.0;
        fVar10 = pfVar9[8] - (moby->pos).x;
        fVar6 = pfVar9[9] - (moby->pos).y;
        fVar3 = ABS(fVar10);
        fVar4 = ABS(fVar6);
        *(float *)(puVar14 + 0x12) = fVar10;
        *(float *)((int)puVar14 + 0x94) = fVar6;
        *(float *)(puVar14 + 0x13) = fVar3 - fVar4;
        uVar18 = (ulonglong)(*(uint *)(puVar14 + 0x12) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar14 + 0x13) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0x94) >> 0x1d) & 4;
        fVar10 = ABS(*(float *)(puVar14 + 0x12));
        if (*(float *)(puVar14 + 0x13) - 0.0 < 0.0) {
          fVar10 = fVar4;
        }
        fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
        fVar6 = ABS(*(float *)((int)puVar14 + 0x94));
        if (*(float *)(puVar14 + 0x13) - 0.0 < 0.0) {
          fVar6 = fVar3;
        }
        fVar3 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
        if (0.0 < fVar10) {
          lVar19 = uVar17 - 0x150;
          lVar27 = uVar17 - 0x68;
          lVar23 = uVar17 - 0x78;
          lVar28 = 2;
          fVar10 = (fVar6 - fVar10) / (fVar6 + fVar10);
          fVar6 = fVar10 * fVar10;
          *(float *)((int)puVar14 + 0xf4) = fVar10;
          *(float *)((int)puVar14 + 0xec) = fVar10;
          *(float *)(puVar14 + 0x1e) = fVar10;
          *(float *)(puVar14 + 0x1d) = fVar10;
          fVar10 = fVar6 * fVar6;
          *(float *)((int)puVar14 + 0xec) = *(float *)((int)puVar14 + 0xec) * fVar6;
          *(float *)(puVar14 + 0x1e) = *(float *)(puVar14 + 0x1e) * fVar10;
          *(float *)((int)puVar14 + 0xf4) = *(float *)((int)puVar14 + 0xf4) * fVar10 * fVar6;
          do {
            *(float *)((int)lVar19 + 0xe8) = *(float *)((int)lVar19 + 0xd8) * fVar10 * fVar10;
            iVar22 = (int)lVar23;
            lVar23 = lVar23 + 8;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar10 * fVar10;
            lVar27 = lVar27 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar28 = 4;
          lVar27 = uVar17 - 0x78;
          pfVar24 = (float *)&DAT_007358e0;
          lVar19 = lVar20;
          lVar23 = lVar27;
          do {
            fVar10 = *pfVar24;
            fVar6 = pfVar24[1];
            pfVar24 = pfVar24 + 2;
            *(float *)((int)lVar19 + 0xe8) = *(float *)((int)lVar19 + 0xe8) * fVar10;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar6;
            lVar23 = lVar23 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar19 = 2;
          do {
            iVar22 = (int)lVar20;
            lVar20 = lVar20 + 0x10;
            iVar26 = (int)lVar27;
            lVar27 = lVar27 + 0x10;
            fVar21 = fVar21 + *(float *)(iVar22 + 0xe8) + *(float *)(iVar26 + 4) +
                     *(float *)(iVar26 + 8) + *(float *)(iVar26 + 0xc);
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          fVar21 = (fVar21 + 0.7853982) * fVar4 + fVar3;
        }
        (moby->rotation).z = fVar21;
        pfVar9[5] = 0.0;
      }
    }
    else if (uVar1 == '\x03') {
      dVar29 = -1.5707963705062866;
      mobyutil::OrganicDeltAng
                (-1.5707964,DAT_0071f418 * 3.1415927,DAT_0071f418 * 3.1415927,
                 mobyutil::g_FrameTime * 25.132742,&(moby->rotation).y,0x720000,pfVar9 + 4);
      dVar29 = (double)fastfunc::FastSubRots((moby->rotation).y,(float)dVar29);
      if (dVar29 < 0.01745329238474369) {
        mobyutil::OrganicDelt
                  (501.0,DAT_0071f418 * 50.0,DAT_0071f418 * 400.0,mobyutil::g_FrameTime * 200.0,
                   &(moby->pos).z,0x720000,pfVar9 + 5);
      }
      fVar2 = (moby->pos).z;
      uVar12 = (int)fVar2 >> 0x1f;
      if (0x43f9ffff < (int)((uVar12 >> 1 ^ (uint)fVar2) - uVar12)) {
        moby->state = '\x04';
        moby->drawDistance = 0;
        dVar29 = (double)mobyutil::MB_randRangeFloat(90.0,360.0);
        fVar21 = (float)fastfunc::FastDoubleToInt((double)(float)(dVar29 * (double)animationSpeed));
        pfVar9[0xc] = fVar21;
      }
    }
    else if (uVar1 == '\x02') {
      fVar2 = (moby->pos).x;
      fVar21 = pfVar9[8];
      fVar10 = (moby->pos).x;
      fVar11 = (moby->pos).y;
      fVar3 = pfVar9[9];
      fVar4 = (moby->pos).y;
      fVar6 = fVar21 - fVar10;
      fVar8 = fVar3 - fVar4;
      uVar12 = (int)fVar2 >> 0x1f;
      uVar13 = (int)fVar11 >> 0x1f;
      fVar5 = ABS(fVar6);
      iVar26 = (uVar12 >> 1 ^ (uint)fVar2) - uVar12;
      fVar7 = ABS(fVar8);
      *(float *)((int)puVar14 + 0x9c) = fVar6;
      *(float *)(puVar14 + 0x14) = fVar8;
      *(float *)((int)puVar14 + 0xa4) = fVar5 - fVar7;
      dVar29 = 0.0;
      uVar18 = (ulonglong)(*(uint *)((int)puVar14 + 0x9c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar14 + 0xa4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar14 + 0x14) >> 0x1d) & 4;
      iVar22 = (uVar13 >> 1 ^ (uint)fVar11) - uVar13;
      fVar6 = ABS(*(float *)((int)puVar14 + 0x9c));
      if (*(float *)((int)puVar14 + 0xa4) - 0.0 < 0.0) {
        fVar6 = fVar7;
      }
      fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar7 = ABS(*(float *)(puVar14 + 0x14));
      if (*(float *)((int)puVar14 + 0xa4) - 0.0 < 0.0) {
        fVar7 = fVar5;
      }
      fVar5 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      dVar32 = dVar29;
      if (0.0 < fVar6) {
        lVar19 = uVar17 - 0x150;
        lVar27 = uVar17 - 0x48;
        lVar23 = uVar17 - 0x58;
        lVar28 = 2;
        fVar6 = (fVar7 - fVar6) / (fVar7 + fVar6);
        fVar7 = fVar6 * fVar6;
        *(float *)((int)puVar14 + 0x114) = fVar6;
        *(float *)((int)puVar14 + 0x10c) = fVar6;
        *(float *)(puVar14 + 0x22) = fVar6;
        *(float *)(puVar14 + 0x21) = fVar6;
        fVar6 = fVar7 * fVar7;
        *(float *)((int)puVar14 + 0x10c) = *(float *)((int)puVar14 + 0x10c) * fVar7;
        *(float *)(puVar14 + 0x22) = *(float *)(puVar14 + 0x22) * fVar6;
        *(float *)((int)puVar14 + 0x114) = *(float *)((int)puVar14 + 0x114) * fVar6 * fVar7;
        do {
          *(float *)((int)lVar19 + 0x108) = *(float *)((int)lVar19 + 0xf8) * fVar6 * fVar6;
          iVar25 = (int)lVar23;
          lVar23 = lVar23 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar25 + 4) * fVar6 * fVar6;
          lVar27 = lVar27 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar27 = uVar17 - 0x58;
        pfVar24 = (float *)&DAT_007358e0;
        lVar19 = lVar20;
        lVar23 = lVar27;
        do {
          fVar6 = *pfVar24;
          fVar7 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar19 + 0x108) = *(float *)((int)lVar19 + 0x108) * fVar6;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar7;
          lVar23 = lVar23 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar19 = 2;
        do {
          iVar25 = (int)lVar20;
          iVar15 = (int)lVar27;
          lVar20 = lVar20 + 0x10;
          lVar27 = lVar27 + 0x10;
          dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar25 + 0x108)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar8 + fVar5);
      }
      fVar4 = fVar4 - fVar3;
      fVar21 = fVar10 - fVar21;
      iVar25 = 0x470000;
      *(undefined4 *)(puVar14 + 0xe) = 0;
      dVar31 = (double)SQRT(fVar21 * fVar21 + fVar4 * fVar4);
      if (((((0.5 <= dVar31) && (iVar26 < 0x43fa0001)) && (0x411fffff < iVar26)) &&
          ((iVar22 < 0x43fa0001 && (0x411fffff < iVar22)))) ||
         (uVar12 = (int)pfVar9[5] >> 0x1f, iVar25 = (uVar12 >> 1 ^ (uint)pfVar9[5]) - uVar12,
         dVar31 = dVar29, 0x3dcccccc < iVar25)) {
        mobyutil::OrganicDeltAng
                  ((float)dVar32,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                   mobyutil::g_FrameTime * 25.132742,&(moby->rotation).z,iVar25,pfVar9 + 4);
        (moby->rotation).x = pfVar9[4] * DAT_00877858;
        mobyutil::OrganicDelt
                  ((float)dVar31,DAT_0071f418 * 15.0,DAT_0071f418 * 50.0,
                   mobyutil::g_FrameTime * 50.0,(float *)(puVar14 + 0xe),0x870000,pfVar9 + 5);
        fVar21 = (moby->rotation).z + 1.5707963;
        fVar10 = 3.1415925 - fVar21;
        if (fVar21 - (3.1415925 - fVar21) < 0.0) {
          fVar10 = fVar21;
        }
        fVar3 = -3.1415925 - fVar21;
        if ((-3.1415925 - fVar21) - fVar10 < 0.0) {
          fVar3 = fVar10;
        }
        fVar21 = fVar3 * fVar3;
        fVar10 = fVar21 * fVar21 * fVar3;
        fVar4 = fVar21 * fVar10;
        fVar3 = (fVar21 * fVar4 * 2.601887e-06 +
                fVar4 * -0.0001980741 + fVar10 * 0.0083330255 + fVar21 * fVar3 * -0.16666657 + fVar3
                ) * pfVar9[5];
        *pfVar9 = fVar3;
        fVar21 = (moby->rotation).z;
        pfVar9[2] = 0.0;
        fVar10 = 3.1415925 - fVar21;
        if (fVar21 - (3.1415925 - fVar21) < 0.0) {
          fVar10 = fVar21;
        }
        fVar4 = -3.1415925 - fVar21;
        if ((-3.1415925 - fVar21) - fVar10 < 0.0) {
          fVar4 = fVar10;
        }
        fVar21 = fVar4 * fVar4;
        fVar10 = fVar21 * fVar21 * fVar4;
        fVar6 = fVar21 * fVar10;
        pfVar9[1] = (fVar21 * fVar6 * 2.601887e-06 +
                    fVar6 * -0.0001980741 +
                    fVar10 * 0.0083330255 + fVar21 * fVar4 * -0.16666657 + fVar4) * pfVar9[5];
        (moby->pos).x = (moby->pos).x + fVar3;
        (moby->pos).y = (moby->pos).y + pfVar9[1];
        (moby->pos).z = (moby->pos).z + pfVar9[2];
      }
      else {
        moby->state = '\x03';
        pfVar9[8] = fVar10;
        pfVar9[9] = (moby->pos).y;
        pfVar9[10] = (moby->pos).z;
        fVar21 = (moby->pos).w;
        pfVar9[10] = 500.0;
        pfVar9[0xb] = fVar21;
      }
    }
    else if (uVar1 == '\x01') {
      iVar22 = fastfunc::FastDecTimerS32(pfVar9 + 0xc);
      if (iVar22 != 0) {
        moby->state = '\x02';
        pCVar16 = Cylinders;
        fVar21 = pfVar9[7];
        fVar10 = pfVar9[6];
        fVar3 = Cylinders[(int)fVar10].pos.x - Cylinders[(int)fVar21].pos.x;
        pfVar9[8] = fVar3;
        fVar4 = pCVar16[(int)fVar10].pos.y - pCVar16[(int)fVar21].pos.y;
        pfVar9[9] = fVar4;
        fVar6 = pCVar16[(int)fVar10].pos.z - pCVar16[(int)fVar21].pos.z;
        pfVar9[10] = fVar6;
        pfVar9[0xb] = pCVar16[(int)fVar10].pos.w;
        fVar3 = fVar3 * 10.0;
        fVar4 = fVar4 * 10.0;
        fVar6 = fVar6 * 10.0;
        pfVar9[8] = fVar3;
        pfVar9[9] = fVar4;
        pfVar9[10] = fVar6;
        pfVar9[8] = fVar3 + pCVar16[(int)fVar21].pos.x;
        pfVar9[9] = fVar4 + pCVar16[(int)fVar21].pos.y;
        pfVar9[10] = fVar6 + pCVar16[(int)fVar21].pos.z;
      }
    }
    else if (uVar1 == '\0') {
      dVar29 = (double)mobyutil::MB_randRangeFloat(360.0,720.0);
      fVar21 = (float)fastfunc::FastDoubleToInt((double)(float)(dVar29 * (double)animationSpeed));
      pfVar9[0xc] = fVar21;
      moby->state = '\x01';
      moby->updateDistance = -1;
      moby->drawDistance = 0xff;
    }
  }
  return;
}



