//==== 00490188  ns=mobyupdate_helpers  size=0x2f0
// sig: undefined M857_00490188(void)
// callers(3): 00490480 mobyupdate_helpers::M857_00490480; 00490764 mobyupdate_helpers::M857_00490764; 00490928 mobyupdate_helpers::M857_00490928
// callees(1): 0012d0e8 partupd::SpawnPart_41

undefined8
mobyupdate_helpers::M857_00490188
          (longlong param_1,float *param_2,float *param_3,undefined8 param_4,undefined8 param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
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
  
  fVar1 = param_2[1];
  fVar2 = *param_2;
  fVar5 = param_3[1] - fVar1;
  fVar6 = *param_3 - fVar2;
  dVar19 = 1.0;
  iVar8 = (int)(param_1 << 2);
  dVar18 = 0.0;
  fVar7 = (param_3[2] - param_2[2]) * (param_3[2] - param_2[2]) + fVar6 * fVar6 + fVar5 * fVar5;
  piVar4 = *(int **)((int)Splines + iVar8);
  iVar11 = 0;
  fVar10 = 1.0 / SQRT(fVar7);
  fVar9 = SQRT(fVar7);
  fVar10 = -(fVar7 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
  fVar10 = -(fVar7 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
  fVar7 = (-(fVar7 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10) / fVar9;
  dVar17 = (double)((float)(piVar4 + *piVar4 * 4)[1] - fVar1);
  dVar22 = (double)((float)piVar4[*piVar4 * 4] - fVar2);
  dVar14 = (double)(fVar7 * fVar6);
  dVar13 = (double)(fVar7 * fVar5);
  dVar15 = dVar18;
  if (0.0 - fVar9 < 0.0) {
    dVar15 = dVar14;
  }
  dVar16 = dVar18;
  if (0.0 - fVar9 < 0.0) {
    dVar16 = dVar13;
  }
  if (fVar9 - 0.0 < 0.0) {
    dVar15 = dVar14;
  }
  if (fVar9 - 0.0 < 0.0) {
    dVar16 = dVar13;
  }
  if (0 < *piVar4) {
    iVar12 = 0;
    dVar20 = 0.3330000042915344;
    dVar13 = (double)(float)(dVar16 * dVar22 + -(double)(float)(dVar15 * dVar17));
    dVar14 = (double)(float)(dVar15 * dVar22 + (double)(float)(dVar16 * dVar17));
    do {
      dVar17 = (double)(*(float *)((int)piVar4 + iVar12 + 0x14) - fVar1);
      dVar22 = (double)(*(float *)((int)piVar4 + iVar12 + 0x10) - fVar2);
      dVar21 = (double)(float)(dVar15 * dVar22 + (double)(float)(dVar16 * dVar17));
      dVar17 = (double)(float)(dVar16 * dVar22 + -(double)(float)(dVar15 * dVar17));
      if ((double)(float)(dVar17 * dVar13) < dVar18) {
        if (DAT_010e03c4 != 0) {
          partupd::SpawnPart_41
                    ((float)dVar20,(int)piVar4 + iVar12 + 0x10,g_heroMobyPtr,2,0x800000ff,param_5,
                     0x7f,2,0xff);
          iVar3 = **(int **)((int)Splines + iVar8);
          partupd::SpawnPart_41
                    ((float)dVar20,
                     *(int **)((int)Splines + iVar8) +
                     ((iVar11 + 1) - ((iVar11 + 1) / iVar3) * iVar3) * 4 + 4,g_heroMobyPtr,2,
                     0x800000ff,param_5,0x7f,2,0xff);
          fVar2 = *param_2;
          fVar1 = param_2[1];
        }
        dVar13 = (double)(float)(-(double)(float)((double)((float)(dVar14 - dVar21) /
                                                          (float)(dVar13 - dVar17)) * dVar17) +
                                dVar21);
        if (dVar13 < dVar19 && dVar18 < dVar13) {
          return 1;
        }
      }
      piVar4 = *(int **)((int)Splines + iVar8);
      iVar11 = iVar11 + 1;
      iVar12 = iVar12 + 0x10;
      dVar13 = dVar17;
      dVar14 = dVar21;
    } while (iVar11 < *piVar4);
  }
  return 0;
}



//==== 00490480  ns=mobyupdate_helpers  size=0x260
// sig: undefined M857_00490480(void)
// callers(1): 00490928 mobyupdate_helpers::M857_00490928
// callees(1): 00490188 mobyupdate_helpers::M857_00490188

uint mobyupdate_helpers::M857_00490480
               (double param_1,undefined4 *param_2,int param_3,undefined8 param_4,longlong param_5,
               undefined4 param_6)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  double dVar9;
  undefined1 local_a0 [16];
  undefined1 local_90 [24];
  
  uVar5 = 0;
  piVar1 = *(int **)((int)Splines + (int)(param_5 << 2));
  uVar4 = 0;
  if (0 < *piVar1) {
    dVar9 = 0.0;
    piVar8 = piVar1;
    do {
      piVar8 = piVar8 + 4;
      iVar6 = 0;
      bVar2 = false;
      puVar7 = param_2;
      if (0 < param_3) {
        do {
          if (param_1 == dVar9) {
            iVar3 = M857_00490188(*puVar7,param_6,piVar8);
            if (iVar3 != 0) {
              bVar2 = true;
            }
          }
          else {
            iVar3 = M857_00490188(*puVar7,local_a0,piVar8);
            if (iVar3 == 0) {
              iVar3 = M857_00490188(*puVar7,local_90,piVar8);
              if (iVar3 != 0) {
                bVar2 = true;
              }
            }
            else {
              bVar2 = true;
            }
          }
          if (bVar2) goto LAB_00490678;
          iVar6 = iVar6 + 1;
          puVar7 = puVar7 + 1;
        } while (iVar6 < param_3);
      }
      uVar4 = uVar4 | 1 << (uVar5 & 0x3f);
LAB_00490678:
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < *piVar1);
  }
  return uVar4;
}



//==== 004906e0  ns=mobyupdate_helpers  size=0x84
// sig: undefined M857_004906e0(void)
// callers(0): 
// callees(0): 

uint mobyupdate_helpers::M857_004906e0(longlong param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = 0;
  do {
    if ((param_3 & param_2) != 0) {
      return param_3 & param_2;
    }
    uVar3 = 0;
    uVar4 = param_3;
    iVar2 = *(int *)((int)Splines + (int)(param_1 << 2));
    do {
      if ((1 << (uVar3 & 0x3f) & param_3) != 0) {
        uVar4 = uVar4 | *(uint *)(iVar2 + 0x1c);
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x10;
    } while ((int)uVar3 < 0x10);
    iVar1 = iVar1 + 1;
    param_3 = uVar4;
  } while (iVar1 < 0x10);
  return 0;
}



//==== 00490764  ns=mobyupdate_helpers  size=0x1c0
// sig: undefined M857_00490764(void)
// callers(0): 
// callees(1): 00490188 mobyupdate_helpers::M857_00490188

void mobyupdate_helpers::M857_00490764(undefined4 *param_1,int param_2,longlong param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  uint *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  
  iVar4 = 0;
  piVar1 = *(int **)((int)Splines + (int)(param_3 << 2));
  iVar6 = *piVar1;
  piVar5 = piVar1;
  if (0 < iVar6) {
    do {
      iVar4 = iVar4 + 1;
      iVar6 = *piVar1;
      piVar5[7] = 0;
      piVar5 = piVar5 + 4;
    } while (iVar4 < iVar6);
  }
  if (0 < iVar6) {
    piVar7 = piVar1 + 4;
    puVar10 = (uint *)(piVar1 + 7);
    uVar3 = 0;
    piVar5 = piVar1;
    piVar8 = piVar7;
    do {
      uVar12 = uVar3 + 1;
      piVar8 = piVar8 + 4;
      if ((int)uVar12 < iVar6) {
        uVar13 = uVar12;
        piVar2 = piVar5;
        piVar9 = piVar8;
        do {
          iVar6 = 0;
          puVar11 = param_1;
          if (0 < param_2) {
            do {
              iVar4 = M857_00490188(*puVar11,piVar7,piVar9);
              if (iVar4 != 0) goto LAB_004908a0;
              iVar6 = iVar6 + 1;
              puVar11 = puVar11 + 1;
            } while (iVar6 < param_2);
          }
          *puVar10 = *puVar10 | 1 << (uVar13 & 0x3f);
          piVar2[0xb] = piVar2[0xb] | 1 << (uVar3 & 0x3f);
LAB_004908a0:
          iVar6 = *piVar1;
          uVar13 = uVar13 + 1;
          piVar9 = piVar9 + 4;
          piVar2 = piVar2 + 4;
        } while ((int)uVar13 < iVar6);
      }
      puVar10 = puVar10 + 4;
      piVar5 = piVar5 + 4;
      piVar7 = piVar7 + 4;
      uVar3 = uVar12;
    } while ((int)uVar12 < iVar6);
  }
  return;
}



//==== 00490928  ns=mobyupdate_helpers  size=0x34c
// sig: undefined M857_00490928(void)
// callers(0): 
// callees(2): 00490188 mobyupdate_helpers::M857_00490188; 00490480 mobyupdate_helpers::M857_00490480

undefined8
mobyupdate_helpers::M857_00490928
          (double param_1,undefined4 *param_2,undefined8 param_3,longlong param_4,undefined8 param_5
          ,undefined4 param_6,undefined4 *param_7,undefined4 *param_8)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  int iVar10;
  double dVar11;
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  
  iVar10 = 0;
  uVar9 = 0;
  bVar2 = false;
  if ((int)param_3 < 1) {
LAB_00490c0c:
    *param_8 = *param_7;
    param_8[1] = param_7[1];
    param_8[2] = param_7[2];
    param_8[3] = param_7[3];
    return 1;
  }
  dVar11 = 0.0;
  puVar8 = param_2;
  while( true ) {
    if (param_1 == dVar11) {
      iVar3 = M857_00490188(*puVar8,param_6,param_7);
      if (iVar3 != 0) {
        bVar2 = true;
      }
    }
    else {
      iVar3 = M857_00490188(*puVar8,local_90,param_7);
      if (iVar3 == 0) {
        iVar3 = M857_00490188(*puVar8,local_80,param_7);
        if (iVar3 != 0) {
          bVar2 = true;
        }
      }
      else {
        bVar2 = true;
      }
    }
    if (bVar2) break;
    iVar10 = iVar10 + 1;
    puVar8 = puVar8 + 1;
    if ((int)param_3 <= iVar10) goto LAB_00490c0c;
  }
  iVar10 = (int)(param_4 << 2);
  piVar1 = *(int **)((int)Splines + iVar10);
  DAT_010e03c8 = M857_00490480(param_1,param_2,param_3);
  DAT_010e03cc = M857_00490480(param_1,param_2,param_3);
  iVar3 = 0;
  uVar4 = DAT_010e03cc;
  while ((uVar4 & DAT_010e03c8) == 0) {
    uVar6 = 0;
    iVar7 = *(int *)((int)Splines + iVar10);
    uVar5 = uVar4;
    do {
      if ((1 << (uVar6 & 0x3f) & uVar4) != 0) {
        uVar5 = uVar5 | *(uint *)(iVar7 + 0x1c);
      }
      uVar6 = uVar6 + 1;
      iVar7 = iVar7 + 0x10;
    } while ((int)uVar6 < 0x10);
    iVar3 = iVar3 + 1;
    uVar4 = uVar5;
    if (0xf < iVar3) {
      return 0;
    }
  }
  if (0 < *piVar1) {
    do {
      if ((uVar4 & DAT_010e03c8 & 1 << ((uint)uVar9 & 0x3f)) != 0) break;
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < *piVar1);
  }
  iVar10 = (int)((uVar9 & 0xffffffff) << 4);
  *param_8 = *(undefined4 *)((int)piVar1 + iVar10 + 0x10);
  param_8[1] = *(undefined4 *)((int)piVar1 + iVar10 + 0x14);
  param_8[2] = *(undefined4 *)((int)piVar1 + iVar10 + 0x18);
  param_8[3] = *(undefined4 *)((int)piVar1 + iVar10 + 0x1c);
  return 1;
}



//==== 00490c78  ns=mobyupdate_helpers  size=0x14
// sig: undefined M857_00490c78(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M857_00490c78(void)

{
  DAT_008c7c4c = 0x10000;
  return;
}



//==== 00490cb8  ns=mobyupdate_helpers  size=0x2ac
// sig: undefined M857_00490cb8(void)
// callers(1): 00492d98 mobyupdate_unsorted::UpdateMoby_857
// callees(5): 0006d720 RegisterFuncForMoby; 000f1114 mobyfunc::GetBonePosition; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M857_00490cb8(MobyInstance *param_1)

{
  u8 uVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  if (param_1->group != -1) {
    uVar1 = param_1->state;
    pvVar2 = param_1->pVar;
    uVar6 = 0x3228aaaa;
    if ((uVar1 == '\x03') || (uVar1 == '\x06')) {
      uVar6 = 0x3228aa28;
    }
    else if ((uVar1 == '\x05') || (uVar1 == '\t')) {
      uVar6 = 0x322828aa;
    }
    else if (uVar1 == '\a') {
      uVar6 = 0x32aa2828;
    }
    dVar9 = (double)fastfunc::FastWrapRot
                              (*(float *)((int)pvVar2 + 0x28c),mobyutil::g_FrameTime * 2.9670596);
    dVar11 = (double)(float)(3.141592502593994 - dVar9);
    if (dVar9 - (double)(float)(3.141592502593994 - dVar9) < 0.0) {
      dVar11 = dVar9;
    }
    dVar10 = (double)(float)(-3.141592502593994 - dVar9);
    if ((double)(float)(-3.141592502593994 - dVar9) - dVar11 < 0.0) {
      dVar10 = dVar11;
    }
    *(float *)((int)pvVar2 + 0x28c) = (float)dVar9;
    dVar11 = (double)(float)(dVar10 * dVar10);
    dVar12 = (double)(float)(dVar11 * (double)(float)(dVar11 * dVar10));
    dVar9 = (double)(float)(dVar11 * dVar12);
    dVar11 = (double)(((float)(dVar11 * dVar9) * 2.601887e-06 +
                      (float)(dVar9 * -0.0001980741071747616 +
                             (double)(float)(dVar12 * 0.008333025500178337 +
                                            (double)(float)((double)(float)(dVar11 * dVar10) *
                                                            -0.16666656732559204 + dVar10)))) * 0.5
                     + 1.0);
    lVar3 = fastfunc::FastDoubleToInt
                      ((double)(float)((double)(longlong)(int)(uVar6 & 0xff) * dVar11));
    lVar4 = fastfunc::FastDoubleToInt
                      ((double)(float)((double)(longlong)(int)(uVar6 >> 8 & 0xff) * dVar11));
    lVar5 = fastfunc::FastDoubleToInt
                      ((double)(float)((double)(longlong)(int)(uVar6 >> 0x10 & 0xff) * dVar11));
    uVar6 = fastfunc::FastLerpColor
                      (0x3fb99999a0000000,param_1->field60_0x90,
                       uVar6 & 0xff000000 |
                       (uint)((lVar5 + (0xff - lVar5 >> 0x3f & 0xffU - lVar5) & 0xffffffff) << 0x10)
                       | (uint)((lVar4 + (0xff - lVar4 >> 0x3f & 0xffU - lVar4) & 0xffffffff) << 8)
                         | (int)lVar3 + ((uint)(0xff - lVar3 >> 0x3f) & 0xffU - (int)lVar3));
    param_1->field60_0x90 = uVar6;
    iVar7 = 0;
    pvVar8 = pvVar2;
    do {
      iVar7 = iVar7 + 1;
      mobyfunc::GetBonePosition(param_1,iVar7,(int)pvVar8 + 0x140);
      pvVar8 = (void *)((int)pvVar8 + 0x10);
    } while (iVar7 < 3);
    *(uint *)((int)pvVar2 + 0x290) = param_1->field60_0x90;
    if ((worldUpdateTime != 0) && (worldUpdateTime != **(int **)((int)pvVar2 + 0x294))) {
      **(int **)((int)pvVar2 + 0x294) = worldUpdateTime;
      RegisterFuncForMoby(&PTR_M859_00495620_0070f208,param_1);
    }
  }
  return;
}



//==== 00490fb0  ns=mobyupdate_helpers  size=0x9e8
// sig: undefined M857_00490fb0(void)
// callers(1): 00491998 mobyupdate_helpers::M857_00491998
// callees(11): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 00114148 mobyutil::MB_SplineCrossCheck; 0012f8c0 partupd::SpawnPart_53; 0015d204 sound::sound_MobyPlay_oClass; 00502578 fastfunc::FastWrapRot; 00502648 fastfunc::FastAddRots; 00502730 fastfunc::FastIntToDouble; 00502b08 fastfunc::FastVecAddSelf
// strings: 00490fa0: '?333Ap' (raw)

undefined8
mobyupdate_helpers::M857_00490fb0
          (int param_1,int param_2,MobyInstance *param_3,int param_4,undefined4 *param_5)

{
  float fVar1;
  float fVar2;
  f32 fVar3;
  MOBY_OCLASSES MVar4;
  int *piVar5;
  MobyInstance *pMVar6;
  uint uVar9;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
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
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  float local_170;
  float local_16c;
  float local_168;
  undefined1 local_160 [16];
  undefined1 auStack_150 [16];
  float local_140;
  float local_13c;
  float local_138;
  undefined1 local_130 [16];
  undefined1 auStack_120 [40];
  
  MVar4 = param_3->oClass;
  fVar1 = (param_3->pos).x;
  fVar2 = (param_3->pos).y;
  if (MVar4 != GADGEBOT_TELEPOT_PAD && MVar4 != GADGEBOT_TELEPORTER_ENTRANCE) {
    fVar1 = fVar1 + (param_3->transform).v0.x;
    fVar2 = fVar2 + (param_3->transform).v0.y;
  }
  if (MVar4 == GADGEBOT_ENTRANCE) {
LAB_004918a0:
    if (((param_4 == 0) && (param_3->state != '\x02')) &&
       (fVar2 = *(float *)(param_1 + 0x14) - fVar2, fVar1 = *(float *)(param_1 + 0x10) - fVar1,
       SQRT(fVar1 * fVar1 + fVar2 * fVar2) < 1.0)) {
      *(undefined1 *)(param_1 + 0x20) = 8;
      *(MobyInstance **)(param_2 + 0x304) = param_3;
      *param_5 = 2;
    }
  }
  else {
    if (MVar4 != GADGEBOT_TELEPORTER_ENTRANCE) {
      if (MVar4 == 0x400) goto LAB_004918a0;
      if ((MVar4 != 0x3b1) && (MVar4 != GADGEBOT_TELEPOT_PAD)) {
        return 0;
      }
    }
    fVar2 = *(float *)(param_1 + 0x14) - fVar2;
    fVar1 = *(float *)(param_1 + 0x10) - fVar1;
    dVar38 = 1.0;
    if ((SQRT(fVar1 * fVar1 + fVar2 * fVar2) < 1.0) && (piVar5 = (int *)param_3->pVar, -1 < *piVar5)
       ) {
      iVar15 = 0;
      iVar14 = 0;
      if (MVar4 == 0x3b1) {
        iVar15 = piVar5[1];
        piVar5[1] = iVar15 + 1;
      }
      else if ((MVar4 == GADGEBOT_TELEPORTER_ENTRANCE) || (MVar4 == GADGEBOT_TELEPOT_PAD)) {
        iVar15 = piVar5[1];
        piVar5[1] = iVar15 + 1;
      }
      if (param_3->oClass == GADGEBOT_TELEPORTER_ENTRANCE) {
        sound::sound_MobyPlay_oClass(0,0,param_3,0x515);
      }
      iVar11 = 0;
      dVar37 = 0.10000000149011612;
      dVar36 = 1.570796251296997;
      dVar35 = 3.141592502593994;
      dVar34 = -3.141592502593994;
      dVar33 = -0.16666656732559204;
      dVar32 = 0.008333025500178337;
      dVar31 = -0.0001980741071747616;
      dVar30 = 2.601886990305502e-06;
      dVar29 = 0.0;
      dVar28 = 0.25;
      dVar27 = 0.5;
      dVar26 = 2.5;
      dVar25 = 5.0;
      dVar24 = 0.07000000029802322;
      dVar23 = 0.699999988079071;
      dVar22 = 15.0;
      do {
        dVar16 = (double)mobyutil::MB_randRangeFloat((float)dVar37,(float)dVar38);
        uVar9 = mobyutil::MB_randRange(0x40,0xff);
        uVar7 = mobyutil::MB_randRange(0x40,0xff);
        uVar8 = mobyutil::MB_randRange(0x40,0xff);
        mobyutil::MB_randRot();
        mobyutil::MB_randRangeFloat((float)dVar29,(float)dVar28);
        mobyutil::MB_randRot();
        mobyutil::MB_randRangeFloat((float)dVar29,(float)dVar28);
        mobyutil::MB_randRangeFloat((float)dVar29,(float)dVar27);
        fastfunc::FastVecAddSelf(auStack_150,local_160,param_1 + 0x10);
        dVar17 = (double)mobyutil::MB_randRangeFloat((float)dVar29,mobyutil::g_FrameTime);
        dVar21 = (double)SQRT(local_168 * local_168 + local_170 * local_170 + local_16c * local_16c)
        ;
        dVar20 = (double)(local_170 * (float)(dVar17 / dVar21));
        dVar18 = (double)(local_16c * (float)(dVar17 / dVar21));
        dVar17 = dVar29;
        if (dVar29 - dVar21 < 0.0) {
          dVar17 = dVar20;
        }
        dVar19 = dVar29;
        if (dVar29 - dVar21 < 0.0) {
          dVar19 = dVar18;
        }
        if (dVar21 - dVar29 < 0.0) {
          dVar17 = dVar20;
        }
        if (dVar21 - dVar29 < 0.0) {
          dVar19 = dVar18;
        }
        local_170 = (float)dVar17;
        local_16c = (float)dVar19;
        dVar17 = (double)mobyutil::MB_randRangeFloat
                                   ((float)((double)mobyutil::g_FrameTime * dVar26),
                                    (float)((double)mobyutil::g_FrameTime * dVar25));
        local_168 = (float)dVar17;
        iVar10 = mobyutil::MB_randRange(0xf,0x1e);
        dVar18 = (double)(float)(dVar16 * dVar24);
        dVar17 = (double)(float)(dVar16 * dVar23);
        fVar1 = animationSpeed * (float)((double)(longlong)iVar10 + dVar27);
        iVar10 = mobyutil::MB_randInt(2);
        uVar13 = (LZCOUNT(-iVar10) << 0x3a) >> 0x3f;
        uVar12 = uVar13 & 0xfffffffffffffffe;
        partupd::SpawnPart_53
                  (dVar18,dVar17,(double)(float)((double)DAT_0071f418 * dVar22),local_160,(int)fVar1
                   ,uVar12,uVar13,
                   (uint)((uVar7 & 0xffffffff) << 8) | uVar9 | (uint)((uVar8 & 0xffffffff) << 0x10)
                   | 0x7f000000,0,uVar12 + 1,&local_170);
        pMVar6 = MobyInstance;
        iVar11 = iVar11 + 1;
        dVar36 = (double)(float)dVar36;
      } while (iVar11 < 10);
      iVar11 = *piVar5;
      dVar17 = (double)fastfunc::FastIntToDouble(iVar15);
      dVar17 = (double)fastfunc::FastAddRots((float)(dVar17 * 60.0) * 0.017453292);
      dVar16 = (double)fastfunc::FastWrapRot(pMVar6[iVar11].rotation.z,(float)dVar17);
      dVar16 = (double)(float)(dVar16 + dVar36);
      dVar36 = (double)(float)(dVar35 - dVar16);
      if (dVar16 - (double)(float)(dVar35 - dVar16) < 0.0) {
        dVar36 = dVar16;
      }
      dVar18 = (double)(float)(dVar34 - dVar16);
      if ((double)(float)(dVar34 - dVar16) - dVar36 < 0.0) {
        dVar18 = dVar36;
      }
      dVar36 = (double)(float)(dVar18 * dVar18);
      dVar20 = (double)(float)(dVar36 * (double)(float)(dVar36 * dVar18));
      dVar16 = (double)(float)(dVar36 * dVar20);
      dVar16 = (double)(float)((double)(float)(dVar36 * dVar16) * dVar30 +
                              (double)(float)(dVar16 * dVar31 +
                                             (double)(float)(dVar20 * dVar32 +
                                                            (double)(float)((double)(float)(dVar36 *
                                                                                           dVar18) *
                                                                            dVar33 + dVar18))));
      dVar17 = (double)fastfunc::FastWrapRot(pMVar6[iVar11].rotation.z,(float)dVar17);
      dVar36 = (double)(float)(dVar35 - dVar17);
      if (dVar17 - (double)(float)(dVar35 - dVar17) < 0.0) {
        dVar36 = dVar17;
      }
      dVar35 = (double)(float)(dVar34 - dVar17) - dVar36;
      dVar34 = (double)(float)(dVar34 - dVar17);
      if (dVar35 < 0.0) {
        dVar34 = dVar36;
      }
      dVar36 = (double)(float)(dVar34 * dVar34);
      fVar1 = (float)(dVar16 + (double)pMVar6[iVar11].pos.x);
      iVar15 = 0;
      *(float *)(param_1 + 0x10) = fVar1;
      dVar17 = (double)(float)(dVar36 * (double)(float)(dVar36 * dVar34));
      dVar16 = (double)(float)(dVar36 * dVar17);
      fVar2 = (float)((double)(float)(dVar36 * dVar16) * dVar30 +
                     (double)(float)(dVar16 * dVar31 +
                                    (double)(float)(dVar17 * dVar32 +
                                                   (double)(float)((double)(float)(dVar36 * dVar34)
                                                                   * dVar33 + dVar34)))) +
              pMVar6[iVar11].pos.y;
      *(float *)(param_1 + 0x14) = fVar2;
      fVar3 = pMVar6[iVar11].pos.z;
      *(float *)(param_1 + 0x1c) = (float)dVar35;
      *(f32 *)(param_1 + 0x18) = fVar3;
      *(float *)(param_2 + 0x2e0) = fVar1;
      *(float *)(param_2 + 0x2e4) = fVar2;
      *(f32 *)(param_2 + 0x2e8) = fVar3;
      *(float *)(param_2 + 0x2ec) = (float)dVar35;
      *(float *)(param_2 + 0x2f0) = fVar1;
      *(float *)(param_2 + 0x2f4) = fVar2;
      *(f32 *)(param_2 + 0x2f8) = fVar3;
      *(float *)(param_2 + 0x2fc) = (float)dVar35;
      do {
        dVar31 = (double)mobyutil::MB_randRangeFloat((float)dVar37,(float)dVar38);
        mobyutil::MB_randRange(0x40,0xff);
        mobyutil::MB_randRange(0x40,0xff);
        mobyutil::MB_randRange(0x40,0xff);
        mobyutil::MB_randRot();
        mobyutil::MB_randRangeFloat((float)dVar29,(float)dVar28);
        mobyutil::MB_randRot();
        mobyutil::MB_randRangeFloat((float)dVar29,(float)dVar28);
        mobyutil::MB_randRangeFloat((float)dVar29,(float)dVar27);
        fastfunc::FastVecAddSelf(auStack_120,local_130,param_1 + 0x10);
        dVar30 = (double)mobyutil::MB_randRangeFloat((float)dVar29,mobyutil::g_FrameTime);
        dVar34 = (double)SQRT(local_138 * local_138 + local_140 * local_140 + local_13c * local_13c)
        ;
        dVar33 = (double)(local_140 * (float)(dVar30 / dVar34));
        dVar32 = (double)(local_13c * (float)(dVar30 / dVar34));
        dVar30 = dVar29;
        if (dVar29 - dVar34 < 0.0) {
          dVar30 = dVar33;
        }
        dVar35 = dVar29;
        if (dVar29 - dVar34 < 0.0) {
          dVar35 = dVar32;
        }
        if (dVar34 - dVar29 < 0.0) {
          dVar30 = dVar33;
        }
        if (dVar34 - dVar29 < 0.0) {
          dVar35 = dVar32;
        }
        local_140 = (float)dVar30;
        local_13c = (float)dVar35;
        dVar30 = (double)mobyutil::MB_randRangeFloat
                                   ((float)((double)mobyutil::g_FrameTime * dVar26),
                                    (float)((double)mobyutil::g_FrameTime * dVar25));
        local_138 = (float)dVar30;
        iVar11 = mobyutil::MB_randRange(0xf,0x1e);
        dVar32 = (double)(float)(dVar31 * dVar24);
        dVar30 = (double)(float)(dVar31 * dVar23);
        fVar1 = animationSpeed * (float)((double)(longlong)iVar11 + dVar27);
        mobyutil::MB_randInt(2);
        partupd::SpawnPart_53
                  (dVar32,dVar30,(double)(float)((double)DAT_0071f418 * dVar22),local_130,(int)fVar1
                  );
        iVar15 = iVar15 + 1;
      } while (iVar15 < 10);
      *(undefined1 *)(param_1 + 0x20) = 4;
      *param_5 = 1;
      iVar15 = param_2;
      if (1 < *(int *)(param_2 + 0x310)) {
        do {
          if ((-1 < *(int *)(iVar15 + 0x1e0)) &&
             (iVar11 = mobyutil::MB_SplineCrossCheck(dVar29,iVar15 + 0x1e0,1), iVar11 != 0)) {
            *(int *)(param_2 + 0x27c) = iVar14;
          }
          iVar14 = iVar14 + 1;
          iVar15 = iVar15 + 4;
        } while (iVar14 < 0x10);
      }
    }
  }
  return 0;
}



//==== 00491998  ns=mobyupdate_helpers  size=0x140
// sig: undefined M857_00491998(void)
// callers(1): 00492d98 mobyupdate_unsorted::UpdateMoby_857
// callees(3): 0010466c mobyutil::MB_GetNextMobyInGroup; 00104800 mobyutil::MB_GetFirstMobyInGroup; 00490fb0 mobyupdate_helpers::M857_00490fb0

undefined4 mobyupdate_helpers::M857_00491998(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_30 [4];
  MobyInstance *local_2c;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if (*(int *)(iVar1 + 0x30c) == -1) {
    if (DAT_00a49344 != 0) {
      iVar3 = 0;
      iVar2 = DAT_00a49344;
      do {
        iVar2 = M857_00490fb0(param_1,iVar1,iVar2,param_2,local_30);
        if (iVar2 != 0) {
          return 0;
        }
        iVar2 = *(int *)((int)&DAT_00a49348 + iVar3);
        iVar3 = iVar3 + 4;
      } while (iVar2 != 0);
    }
  }
  else {
    mobyutil::MB_GetFirstMobyInGroup(&local_2c,*(int *)(iVar1 + 0x30c),'\0','\0');
    while ((local_2c != (MobyInstance *)0x0 &&
           (iVar2 = M857_00490fb0(param_1,iVar1,local_2c,param_2,local_30), iVar2 == 0))) {
      mobyutil::MB_GetNextMobyInGroup(&local_2c,local_2c,'\0','\0');
    }
  }
  return 0;
}



//==== 00491ae8  ns=mobyupdate_helpers  size=0x268
// sig: undefined M857_00491ae8(void)
// callers(1): 00492d98 mobyupdate_unsorted::UpdateMoby_857
// callees(2): 0010466c mobyutil::MB_GetNextMobyInGroup; 00104800 mobyutil::MB_GetFirstMobyInGroup

void mobyupdate_helpers::M857_00491ae8(int param_1)

{
  MOBY_OCLASSES MVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  MobyInstance *local_30 [2];
  
  iVar3 = *(int *)(param_1 + 0x78);
  *(undefined4 *)(iVar3 + 0x174) = 0;
  dVar12 = 12.0;
  if (*(int *)(iVar3 + 0x30c) == -1) {
    if (DAT_00a49344 != 0) {
      iVar7 = 0;
      iVar4 = DAT_00a49344;
      do {
        sVar2 = *(short *)(iVar4 + 0xa6);
        if (((((sVar2 == 0x400 || sVar2 == 0x3b1) || (sVar2 == 0x515)) || (sVar2 == 0x516)) &&
            ((fVar5 = *(float *)(param_1 + 0x14) - *(float *)(iVar4 + 0x14),
             fVar6 = *(float *)(param_1 + 0x10) - *(float *)(iVar4 + 0x10),
             dVar10 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5), dVar10 <= dVar12 &&
             (fVar5 = ABS(*(float *)(param_1 + 0x18) - *(float *)(iVar4 + 0x18)),
             fVar5 <= 1.5 && fVar5 <= 0.2)))) &&
           ((((sVar2 != 0x400 && (sVar2 != 0x516)) || (*(char *)(iVar4 + 0x20) != '\x02')) &&
            ((sVar2 != 0x515 || (**(int **)(iVar4 + 0x78) != -1)))))) {
          *(int *)(iVar3 + 0x174) = iVar4;
          dVar12 = dVar10;
        }
        iVar4 = *(int *)((int)&DAT_00a49348 + iVar7);
        iVar7 = iVar7 + 4;
      } while (iVar4 != 0);
    }
  }
  else {
    mobyutil::MB_GetFirstMobyInGroup(local_30,*(int *)(iVar3 + 0x30c),'\0','\0');
    if (local_30[0] != (MobyInstance *)0x0) {
      dVar10 = 0.20000000298023224;
      dVar11 = 1.5;
      do {
        MVar1 = local_30[0]->oClass;
                    /* WARNING: Load size is inaccurate */
        if (((((MVar1 == 0x400 || MVar1 == 0x3b1) || (MVar1 == GADGEBOT_TELEPORTER_ENTRANCE)) ||
             (MVar1 == GADGEBOT_ENTRANCE)) &&
            ((fVar5 = *(float *)(param_1 + 0x14) - (local_30[0]->pos).y,
             fVar6 = *(float *)(param_1 + 0x10) - (local_30[0]->pos).x,
             dVar8 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5), dVar8 <= dVar12 &&
             (dVar9 = ABS((double)(*(float *)(param_1 + 0x18) - (local_30[0]->pos).z)),
             dVar9 <= dVar11 && dVar9 <= dVar10)))) &&
           ((((MVar1 != 0x400 && (MVar1 != GADGEBOT_ENTRANCE)) || (local_30[0]->state != '\x02')) &&
            ((MVar1 != GADGEBOT_TELEPORTER_ENTRANCE || (*local_30[0]->pVar != -1)))))) {
          *(MobyInstance **)(iVar3 + 0x174) = local_30[0];
          dVar12 = dVar8;
        }
        mobyutil::MB_GetNextMobyInGroup(local_30,local_30[0],'\0','\0');
      } while (local_30[0] != (MobyInstance *)0x0);
    }
  }
  *(undefined2 *)(iVar3 + 0x19a) = 1;
  return;
}



//==== 00491d68  ns=mobyupdate_helpers  size=0x454
// sig: undefined M857_00491d68(void)
// callers(1): 004921e0 mobyupdate_helpers::M857_004921e0
// callees(1): 005026a0 fastfunc::FastSubRots

double mobyupdate_helpers::M857_00491d68(int param_1,int param_2,int param_3)

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
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar16;
  longlong lVar15;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong in_f28;
  double dVar24;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar25;
  ulonglong in_f31;
  double dVar26;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0x110;
  puVar6 = (ulonglong *)lVar14;
  *puVar6 = uVar12;
  puVar6[0x24] = in_LR;
  puVar6[0x1e] = in_f28;
  puVar6[0x1f] = in_f29;
  puVar6[0x20] = in_f30;
  puVar6[0x21] = in_f31;
  fVar1 = *(float *)(param_1 + 0x14);
  fVar2 = *(float *)(param_2 + 0x14);
  fVar4 = *(float *)(param_2 + 0x10) - *(float *)(param_1 + 0x10);
  fVar3 = *(float *)(param_1 + 0x10) - *(float *)(param_2 + 0x10);
  fVar5 = fVar2 - fVar1;
  puVar6[0x1d] = unaff_r31;
  fVar1 = fVar1 - fVar2;
  puVar6[0x1a] = unaff_r28;
  fVar11 = GameCamera.rot.radius;
  fVar10 = ABS(fVar4);
  fVar9 = ABS(fVar5);
  *(float *)((int)puVar6 + 0x7c) = fVar4;
  puVar6[0x1c] = unaff_r30;
  *(float *)(puVar6 + 0x10) = fVar5;
  puVar6[0x1b] = unaff_r29;
  *(float *)((int)puVar6 + 0x84) = fVar10 - fVar9;
  dVar24 = 0.0;
  dVar25 = 0.7853981852531433;
  uVar18 = (ulonglong)(*(uint *)((int)puVar6 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar6 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar6 + 0x10) >> 0x1d) & 4;
  dVar26 = (double)SQRT(fVar3 * fVar3 + fVar1 * fVar1);
  fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
  fVar2 = ABS(*(float *)((int)puVar6 + 0x7c));
  if (*(float *)((int)puVar6 + 0x84) - 0.0 < 0.0) {
    fVar2 = fVar9;
  }
  fVar4 = ABS(*(float *)(puVar6 + 0x10));
  if (*(float *)((int)puVar6 + 0x84) - 0.0 < 0.0) {
    fVar4 = fVar10;
  }
  fVar3 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
  dVar21 = dVar24;
  if (0.0 < fVar2) {
    lVar13 = uVar12 - 0x100;
    lVar17 = uVar12 - 0x58;
    lVar15 = uVar12 - 0x68;
    lVar19 = 2;
    fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
    fVar4 = fVar2 * fVar2;
    *(float *)((int)puVar6 + 0xb4) = fVar2;
    *(float *)((int)puVar6 + 0xac) = fVar2;
    *(float *)(puVar6 + 0x16) = fVar2;
    *(float *)(puVar6 + 0x15) = fVar2;
    fVar2 = fVar4 * fVar4;
    *(float *)((int)puVar6 + 0xac) = *(float *)((int)puVar6 + 0xac) * fVar4;
    *(float *)(puVar6 + 0x16) = *(float *)(puVar6 + 0x16) * fVar2;
    *(float *)((int)puVar6 + 0xb4) = *(float *)((int)puVar6 + 0xb4) * fVar2 * fVar4;
    do {
      *(float *)((int)lVar13 + 0xa8) = *(float *)((int)lVar13 + 0x98) * fVar2 * fVar2;
      iVar7 = (int)lVar15;
      lVar15 = lVar15 + 8;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar7 + 4) * fVar2 * fVar2;
      lVar17 = lVar17 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar19 = 4;
    lVar17 = uVar12 - 0x68;
    pfVar16 = (float *)&DAT_007358e0;
    lVar13 = lVar14;
    lVar15 = lVar17;
    do {
      fVar2 = *pfVar16;
      fVar4 = pfVar16[1];
      pfVar16 = pfVar16 + 2;
      *(float *)((int)lVar13 + 0xa8) = *(float *)((int)lVar13 + 0xa8) * fVar2;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar4;
      lVar15 = lVar15 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar15 = 2;
    lVar13 = lVar14;
    do {
      iVar7 = (int)lVar13;
      iVar8 = (int)lVar17;
      lVar13 = lVar13 + 0x10;
      lVar17 = lVar17 + 0x10;
      dVar21 = (double)((float)(dVar21 + (double)*(float *)(iVar7 + 0xa8)) + *(float *)(iVar8 + 4) +
                        *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    dVar21 = (double)((float)(dVar21 + 0.7853981852531433) * fVar1 + fVar3);
  }
  dVar20 = (double)fastfunc::FastSubRots(fVar11,(float)dVar21);
  fVar1 = *(float *)(param_2 + 0x10) - *(float *)(param_1 + 0x10);
  fVar2 = *(float *)(param_2 + 0x14) - *(float *)(param_1 + 0x14);
  dVar22 = ABS((double)fVar1);
  dVar23 = ABS((double)fVar2);
  *(float *)(puVar6 + 0xe) = fVar1;
  *(float *)((int)puVar6 + 0x74) = fVar2;
  fVar1 = *(float *)(param_1 + 0x48);
  *(float *)(puVar6 + 0xf) = (float)(dVar22 - dVar23);
  uVar18 = (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar6 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar6 + 0x74) >> 0x1d) & 4;
  dVar21 = ABS((double)*(float *)(puVar6 + 0xe));
  if ((double)*(float *)(puVar6 + 0xf) - dVar24 < 0.0) {
    dVar21 = dVar23;
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
  dVar23 = ABS((double)*(float *)((int)puVar6 + 0x74));
  if ((double)*(float *)(puVar6 + 0xf) - dVar24 < 0.0) {
    dVar23 = dVar22;
  }
  fVar4 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
  if (dVar24 < dVar21) {
    lVar13 = uVar12 - 0x100;
    lVar17 = uVar12 - 0x78;
    lVar15 = uVar12 - 0x88;
    lVar19 = 2;
    fVar3 = (float)(dVar23 - dVar21) / (float)(dVar23 + dVar21);
    fVar5 = fVar3 * fVar3;
    *(float *)((int)puVar6 + 0x94) = fVar3;
    *(float *)((int)puVar6 + 0x8c) = fVar3;
    *(float *)(puVar6 + 0x12) = fVar3;
    *(float *)(puVar6 + 0x11) = fVar3;
    fVar3 = fVar5 * fVar5;
    *(float *)((int)puVar6 + 0x8c) = *(float *)((int)puVar6 + 0x8c) * fVar5;
    *(float *)(puVar6 + 0x12) = *(float *)(puVar6 + 0x12) * fVar3;
    *(float *)((int)puVar6 + 0x94) = *(float *)((int)puVar6 + 0x94) * fVar3 * fVar5;
    do {
      *(float *)((int)lVar13 + 0x88) = *(float *)((int)lVar13 + 0x78) * fVar3 * fVar3;
      iVar7 = (int)lVar15;
      lVar15 = lVar15 + 8;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar7 + 4) * fVar3 * fVar3;
      lVar17 = lVar17 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar19 = 4;
    lVar17 = uVar12 - 0x88;
    pfVar16 = (float *)&DAT_007358e0;
    lVar13 = lVar14;
    lVar15 = lVar17;
    do {
      fVar3 = *pfVar16;
      fVar5 = pfVar16[1];
      pfVar16 = pfVar16 + 2;
      *(float *)((int)lVar13 + 0x88) = *(float *)((int)lVar13 + 0x88) * fVar3;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar5;
      lVar15 = lVar15 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar13 = 2;
    do {
      iVar7 = (int)lVar14;
      iVar8 = (int)lVar17;
      lVar14 = lVar14 + 0x10;
      lVar17 = lVar17 + 0x10;
      dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar7 + 0x88)) + *(float *)(iVar8 + 4) +
                        *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    dVar24 = (double)((float)(dVar24 + dVar25) * fVar2 + fVar4);
  }
  dVar24 = (double)fastfunc::FastSubRots(fVar1,(float)dVar24);
  dVar24 = (double)(float)(dVar20 * 3.0 + (double)(float)(dVar24 * 10.0 + dVar26));
  if (*(char *)(param_2 + 0x31) == '\0') {
    dVar24 = (double)(float)(dVar24 + 10.0);
  }
  if (param_3 == 9) {
    dVar24 = (double)(float)(dVar24 + 100.0);
  }
  return dVar24;
}



//==== 004921e0  ns=mobyupdate_helpers  size=0x6e4
// sig: undefined M857_004921e0(void)
// callers(1): 00492d98 mobyupdate_unsorted::UpdateMoby_857
// callees(4): 00057820 collproc::CollLine; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 00491d68 mobyupdate_helpers::M857_00491d68; 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M857_004921e0(void)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  MobyInstance *pMVar7;
  ulonglong *puVar8;
  float fVar9;
  short *psVar10;
  int iVar12;
  longlong lVar11;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  char cVar19;
  longlong lVar16;
  int iVar18;
  longlong lVar17;
  int iVar21;
  short sVar23;
  longlong lVar20;
  int iVar22;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  int iVar28;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  longlong lVar29;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar30;
  ulonglong unaff_r30;
  int iVar31;
  ulonglong unaff_r31;
  int iVar32;
  ulonglong in_LR;
  double dVar33;
  double dVar34;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar35;
  ulonglong in_f29;
  double dVar36;
  ulonglong in_f30;
  double dVar37;
  ulonglong in_f31;
  double dVar38;
  
  uVar26 = ZEXT48(&stack0x00000000);
  lVar17 = uVar26 - 0x330;
  puVar8 = (ulonglong *)lVar17;
  *puVar8 = uVar26;
  puVar8[0x68] = in_LR;
  puVar8[0x61] = in_f27;
  puVar8[0x62] = in_f28;
  puVar8[99] = in_f29;
  puVar8[100] = in_f30;
  puVar8[0x65] = in_f31;
  puVar8[0x59] = unaff_r24;
  puVar8[0x5b] = unaff_r26;
  puVar8[0x5f] = unaff_r30;
  iVar31 = 0;
  puVar8[0x60] = unaff_r31;
  pMVar7 = DAT_00a49344;
  iVar32 = 0;
  puVar8[0x5e] = unaff_r29;
  puVar8[0x5d] = unaff_r28;
  puVar8[0x5c] = unaff_r27;
  puVar8[0x5a] = unaff_r25;
  puVar8[0x58] = unaff_r23;
  puVar8[0x57] = unaff_r22;
  puVar8[0x56] = unaff_r21;
  if (pMVar7 != (MobyInstance *)0x0) {
    lVar20 = lVar17;
    iVar21 = 0;
    do {
      lVar25 = lVar20;
      if ((((pMVar7->oClass == GADGEBOT_0359) && (pMVar7->state == '\x05')) &&
          (iVar32 != 0x32 && pMVar7->setByGroup != '\x02')) &&
         (((iVar30 = *(int *)((int)pMVar7->pVar + 0x174), iVar30 == 0 ||
           (cVar19 = *(char *)(iVar30 + 0x20), cVar19 == -2)) || (cVar19 == -3)))) {
        lVar25 = lVar20 + 4;
        iVar32 = iVar32 + 1;
        *(MobyInstance **)((int)lVar20 + 0xd0) = pMVar7;
      }
      pMVar7 = *(MobyInstance **)((int)&DAT_00a49348 + iVar21);
      lVar20 = lVar25;
      iVar21 = iVar21 + 4;
    } while (pMVar7 != (MobyInstance *)0x0);
  }
  iVar21 = 0;
  lVar20 = lVar17;
  if (0 < iVar32) {
    do {
      pMVar7 = DAT_00a49344;
      iVar30 = *(int *)((int)lVar20 + 0xd0);
      bVar1 = DAT_00a49344 != (MobyInstance *)0x0;
      uVar4 = *(uint *)(iVar30 + 0x78);
      *(undefined2 *)(uVar4 + 0x192) = 0;
      if (bVar1) {
        iVar13 = 0;
        do {
          if ((pMVar7->pClass != (MobyClass *)0x0) && ((short)pMVar7->pClass->mode_bits == 5)) {
            fVar2 = 12.0;
            if (*(short *)(uVar4 + 0x198) != 0) {
              fVar2 = 5.0;
            }
            fVar3 = *(float *)(iVar30 + 0x14) - (pMVar7->pos).y;
            fVar9 = *(float *)(iVar30 + 0x10) - (pMVar7->pos).x;
            if ((SQRT(fVar9 * fVar9 + fVar3 * fVar3) <= fVar2) &&
               (ABS(*(float *)(iVar30 + 0x18) - (pMVar7->pos).z) <= 1.0)) {
              *(float *)(puVar8 + 0x10) = *(float *)(iVar30 + 0x10);
              *(undefined4 *)((int)puVar8 + 0x84) = *(undefined4 *)(iVar30 + 0x14);
              fVar2 = *(float *)(iVar30 + 0x18);
              *(float *)(puVar8 + 0x11) = fVar2;
              *(undefined4 *)((int)puVar8 + 0x8c) = *(undefined4 *)(iVar30 + 0x1c);
              *(f32 *)(puVar8 + 0xe) = (pMVar7->pos).x;
              *(f32 *)((int)puVar8 + 0x74) = (pMVar7->pos).y;
              fVar3 = (pMVar7->pos).z;
              *(float *)(puVar8 + 0xf) = fVar3;
              *(f32 *)((int)puVar8 + 0x7c) = (pMVar7->pos).w;
              *(float *)(puVar8 + 0x11) = fVar2 + 0.25;
              *(float *)(puVar8 + 0xf) = fVar3 + 0.25;
              iVar12 = collproc::CollLine(uVar26 - 0x2b0,uVar26 - 0x2c0,2,iVar30,0);
              if ((iVar12 == 0) || (CollOutput.pMoby == pMVar7)) {
                dVar33 = (double)M857_00491d68(iVar30,pMVar7,5);
                sVar23 = *(short *)(uVar4 + 0x192);
                iVar12 = 0;
                uVar15 = (ulonglong)uVar4;
                if (0 < sVar23) {
                  do {
                    if (dVar33 < (double)*(float *)((int)uVar15 + 0x1c0)) {
                      lVar25 = (longlong)sVar23 + -1;
                      lVar25 = lVar25 + (6 - lVar25 >> 0x3f & 6U - lVar25);
                      if (iVar12 <= (int)lVar25) {
                        uVar15 = lVar25 * 4 + (ulonglong)uVar4 & 0xffffffff;
                        do {
                          iVar14 = (int)uVar15;
                          lVar25 = lVar25 + -1;
                          *(undefined4 *)(iVar14 + 0x1a4) = *(undefined4 *)(iVar14 + 0x1a0);
                          *(undefined4 *)(iVar14 + 0x1c4) = *(undefined4 *)(iVar14 + 0x1c0);
                          uVar15 = uVar15 - 4;
                        } while (iVar12 <= (int)lVar25);
                      }
                      break;
                    }
                    iVar12 = iVar12 + 1;
                    uVar15 = uVar15 + 4;
                  } while (iVar12 < sVar23);
                  if (7 < iVar12) goto LAB_004924e8;
                }
                sVar23 = *(short *)(uVar4 + 0x192) + 1;
                *(MobyInstance **)(iVar12 * 4 + uVar4 + 0x1a0) = pMVar7;
                *(float *)(iVar12 * 4 + uVar4 + 0x1c0) = (float)dVar33;
                *(short *)(uVar4 + 0x192) = sVar23;
                if (8 < sVar23) {
                  *(undefined2 *)(uVar4 + 0x192) = 8;
                }
              }
            }
          }
LAB_004924e8:
          pMVar7 = *(MobyInstance **)((int)&DAT_00a49348 + iVar13);
          iVar13 = iVar13 + 4;
        } while (pMVar7 != (MobyInstance *)0x0);
      }
      iVar21 = iVar21 + 1;
      lVar20 = lVar20 + 4;
    } while (iVar21 < iVar32);
  }
  iVar21 = 0;
  lVar25 = 0;
  lVar20 = lVar17;
  if (0 < iVar32) {
    do {
      iVar13 = 0;
      iVar30 = *(int *)(*(int *)((int)lVar20 + 0xd0) + 0x78);
      sVar23 = *(short *)(iVar30 + 0x192);
      if (0 < sVar23) {
        uVar26 = lVar25 + lVar17 & 0xffffffff;
        uVar15 = lVar25 * 4 + lVar17 & 0xffffffff;
        do {
          iVar12 = (int)lVar25;
          if (iVar12 < 0x32) {
            cVar19 = '\b' - (char)iVar13;
            iVar14 = 0;
            lVar11 = lVar17;
            if (0 < iVar12) {
              do {
                if (*(int *)((int)lVar11 + 0x198) == *(int *)(iVar30 + 0x1a0)) {
                  *(char *)((int)puVar8 + iVar14 + 0x260) =
                       *(char *)((int)puVar8 + iVar14 + 0x260) + cVar19;
                  break;
                }
                iVar14 = iVar14 + 1;
                lVar11 = lVar11 + 4;
              } while (iVar14 < iVar12);
            }
            if (iVar12 == iVar14) {
              uVar5 = *(undefined4 *)(iVar30 + 0x1a0);
              *(char *)((int)uVar26 + 0x260) = cVar19;
              lVar25 = lVar25 + 1;
              *(undefined4 *)((int)uVar15 + 0x198) = uVar5;
              uVar26 = uVar26 + 1;
              uVar15 = uVar15 + 4;
            }
          }
          iVar13 = iVar13 + 1;
          iVar30 = iVar30 + 4;
        } while (iVar13 < sVar23);
      }
      iVar21 = iVar21 + 1;
      lVar20 = lVar20 + 4;
      lVar11 = lVar17;
      iVar30 = iVar32;
    } while (iVar21 < iVar32);
    for (; 0 < iVar30; iVar30 = iVar30 + -1) {
      *(undefined4 *)(*(int *)(*(int *)((int)lVar11 + 0xd0) + 0x78) + 0x178) = 0;
      lVar11 = lVar11 + 4;
    }
  }
  iVar30 = (int)lVar25;
  iVar21 = 0;
  if (0 < iVar30) {
    dVar36 = 0.5235987901687622;
    dVar35 = 1.7453292608261108;
    dVar33 = -0.5;
    do {
      lVar11 = 0;
      lVar16 = 0;
      lVar29 = 0;
      lVar20 = lVar17;
      lVar24 = lVar25;
      iVar13 = iVar30;
      while (0 < iVar13) {
        iVar13 = (int)lVar11;
        lVar27 = (longlong)*(char *)((int)lVar20 + 0x260);
        uVar26 = lVar16 - lVar29;
        lVar24 = lVar24 + -1;
        lVar16 = lVar16 + 1;
        lVar20 = lVar20 + 1;
        lVar11 = lVar11 + (iVar13 - lVar27 >> 0x3f & lVar27 - lVar11);
        lVar29 = lVar29 + (iVar13 - lVar27 >> 0x3f & uVar26);
        iVar13 = (int)lVar24;
      }
      iVar12 = 1;
      *(undefined1 *)((int)puVar8 + (int)lVar29 + 0x260) = 0xff;
      pMVar7 = *(MobyInstance **)((int)puVar8 + (int)(lVar29 << 2) + 0x198);
      iVar13 = mobyutil::MB_GetPvarsIfMobyHasThem(pMVar7);
      if (iVar13 != 0) {
        iVar12 = (int)*(short *)(iVar13 + 4);
      }
      iVar13 = 0;
      lVar20 = lVar17;
      if (0 < iVar12) {
        do {
          iVar14 = 0;
          fVar2 = 9999999.0;
          iVar28 = 0;
          lVar11 = lVar17;
          if (0 < iVar32) {
            do {
              iVar6 = *(int *)((int)lVar11 + 0xd0);
              iVar18 = *(int *)(iVar6 + 0x78);
              if (*(int *)(iVar18 + 0x178) == 0) {
                psVar10 = (short *)(iVar18 + 0x192);
                iVar22 = 0;
                if (0 < *psVar10) {
                  do {
                    if ((*(MobyInstance **)(iVar18 + 0x1a0) == pMVar7) &&
                       (*(float *)(iVar18 + 0x1c0) < fVar2)) {
                      fVar2 = *(float *)(iVar18 + 0x1c0);
                      iVar14 = iVar6;
                    }
                    iVar22 = iVar22 + 1;
                    iVar18 = iVar18 + 4;
                  } while (iVar22 < *psVar10);
                }
              }
              iVar28 = iVar28 + 1;
              lVar11 = lVar11 + 4;
            } while (iVar28 < iVar32);
          }
          if (iVar14 == 0) break;
          iVar28 = *(int *)(iVar14 + 0x78);
          iVar13 = iVar13 + 1;
          *(int *)((int)lVar20 + 0x90) = iVar14;
          *(MobyInstance **)(iVar28 + 0x178) = pMVar7;
          lVar20 = lVar20 + 4;
        } while (iVar13 < iVar12);
        if (iVar13 != 0) {
          puVar8[0x53] = (longlong)(iVar13 + -1);
          fVar2 = 0.0;
          dVar37 = (double)(float)((double)(longlong)puVar8[0x53] * dVar36);
          if (dVar35 - dVar37 < 0.0) {
            dVar37 = dVar35;
          }
          if (1 < iVar13) {
            fVar2 = (float)(dVar37 / (double)(longlong)puVar8[0x53]);
          }
          dVar38 = (double)fVar2;
          iVar12 = 0;
          dVar37 = (double)(float)(dVar37 * dVar33);
          lVar20 = lVar17;
          if (0 < iVar13) {
            do {
              puVar8[0x53] = (longlong)iVar12;
              iVar14 = *(int *)(*(int *)((int)lVar20 + 0x90) + 0x78);
              dVar34 = (double)fastfunc::FastWrapRot
                                         ((float)dVar37,
                                          (float)((double)(longlong)puVar8[0x53] * dVar38));
              iVar12 = iVar12 + 1;
              *(float *)(iVar14 + 0x17c) = (float)dVar34;
              lVar20 = lVar20 + 4;
            } while (iVar12 < iVar13);
          }
        }
      }
      iVar21 = iVar21 + 1;
    } while (iVar21 < iVar30);
  }
  if (0 < iVar32) {
    do {
      iVar21 = *(int *)(*(int *)((int)lVar17 + 0xd0) + 0x78);
      *(undefined4 *)(iVar21 + 0x18c) = worldUpdateTime;
      *(int *)(iVar21 + 0x174) = *(int *)(iVar21 + 0x178);
      *(undefined2 *)(iVar21 + 0x19a) = 1;
      if (*(int *)(iVar21 + 0x178) != 0) {
        *(undefined2 *)(iVar21 + 0x198) = 1;
      }
      iVar31 = iVar31 + 1;
      lVar17 = lVar17 + 4;
    } while (iVar31 < iVar32);
  }
  return;
}



//==== 004928e0  ns=mobyupdate_helpers  size=0x3ec
// sig: undefined M857_004928e0(void)
// callers(1): 00492d98 mobyupdate_unsorted::UpdateMoby_857
// callees(5): 0010675c mobyutil::MB_damage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 001158b0 mobyutil::MB_SetupJumpArc; 0015d12c sound::PlayMobySound

void mobyupdate_helpers::M857_004928e0(MobyInstance *param_1)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  ulonglong *puVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  ulonglong uVar14;
  int iVar16;
  longlong lVar15;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  float *pfVar21;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar22;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  ulonglong in_f31;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar15 = uVar14 - 0xd0;
  puVar10 = (ulonglong *)lVar15;
  *puVar10 = uVar14;
  puVar10[0x1c] = in_LR;
  puVar10[0x19] = in_f31;
  puVar10[0x18] = unaff_r31;
  uVar1 = param_1->state;
  puVar10[0x16] = unaff_r29;
  pvVar6 = param_1->pVar;
  uVar22 = ZEXT48(pvVar6);
  puVar10[0x17] = unaff_r30;
  puVar10[0x15] = unaff_r28;
  puVar10[0x14] = unaff_r27;
  if ((((uVar1 != '\t') && (param_1->updateId != '\x02')) && (param_1->animationId != '\x02')) &&
     (iVar16 = mobyutil::MB_damage(param_1,0x330001,0), iVar16 != 0)) {
    uVar7 = *(uint *)(iVar16 + 0x10);
    uVar8 = *(uint *)(iVar16 + 0x14);
    fVar2 = ABS(*(float *)(iVar16 + 0x10));
    fVar4 = ABS(*(float *)(iVar16 + 0x14));
    *(float *)((int)puVar10 + 0x74) = fVar2 - fVar4;
    fVar13 = 0.0;
    uVar17 = (ulonglong)(uVar7 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x74) >> 0x1e) & 2 |
             (ulonglong)(uVar8 >> 0x1d) & 4;
    fVar3 = fVar2;
    if (*(float *)((int)puVar10 + 0x74) - 0.0 < 0.0) {
      fVar3 = fVar4;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
    if (*(float *)((int)puVar10 + 0x74) - 0.0 < 0.0) {
      fVar4 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    if (0.0 < fVar3) {
      lVar20 = uVar14 - 0xc0;
      lVar19 = uVar14 - 0x58;
      lVar18 = uVar14 - 0x48;
      lVar23 = 2;
      fVar3 = (fVar4 - fVar3) / (fVar4 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar10 + 0x84) = fVar3;
      *(float *)((int)puVar10 + 0x7c) = fVar3;
      *(float *)(puVar10 + 0x10) = fVar3;
      *(float *)(puVar10 + 0xf) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar10 + 0x7c) = *(float *)((int)puVar10 + 0x7c) * fVar4;
      *(float *)(puVar10 + 0x10) = *(float *)(puVar10 + 0x10) * fVar3;
      *(float *)((int)puVar10 + 0x84) = *(float *)((int)puVar10 + 0x84) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar20 + 0x78) = *(float *)((int)lVar20 + 0x68) * fVar3 * fVar3;
        iVar11 = (int)lVar19;
        lVar20 = lVar20 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar11 + 4) * fVar3 * fVar3;
        lVar18 = lVar18 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar20 = uVar14 - 0x58;
      pfVar21 = (float *)&DAT_007358e0;
      lVar23 = 4;
      lVar18 = lVar20;
      lVar19 = lVar15;
      do {
        fVar3 = *pfVar21;
        fVar4 = pfVar21[1];
        pfVar21 = pfVar21 + 2;
        *(float *)((int)lVar19 + 0x78) = *(float *)((int)lVar19 + 0x78) * fVar3;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
        lVar18 = lVar18 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar18 = 2;
      do {
        iVar11 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar12 = (int)lVar20;
        lVar20 = lVar20 + 0x10;
        fVar13 = fVar13 + *(float *)(iVar11 + 0x78) + *(float *)(iVar12 + 4) +
                 *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc);
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      fVar13 = (fVar13 + 0.7853982) * fVar5 + fVar2;
    }
    *(float *)(puVar10 + 0xe) = fVar13;
    if ((*(MobyInstance **)(iVar16 + 0x20) != g_heroMobyPtr) &&
       ((*(MobyInstance **)(iVar16 + 0x20))->oClass != param_1->oClass)) {
      auVar25 = ZEXT416(0xffffffff);
      auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
      auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
      auVar25 = loadVectorLeftIndexed(8,0x4928c8);
      auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar28 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar28 = vectorMultiplyAddFloatingPoint
                          (auVar28,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                           auVar26);
      auVar25 = ZEXT416(0xfffffff0);
      auVar27 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
      auVar25 = ZEXT416(0);
      auVar26 = loadVectorLeftIndexed(0x10,0x4928c8);
      auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar30 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      auVar28 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
      auVar26 = loadVectorLeftIndexed(0xc,0x4928c8);
      auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar31 = vectorRotateLeftIntegerWord(auVar28,auVar27);
      auVar32 = vectorMultiplyOddUnsignedHalfWord(auVar28,auVar28);
      auVar28 = vectorMultiplySumSignedHalfWordModulo
                          (auVar28,auVar31,
                           auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60);
      auVar25 = ZEXT416(0xffffffff);
      auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
      auVar28 = vectorShiftLeftIntegerWord(auVar28,auVar27);
      auVar31 = vectorShiftLeftIntegerWord(auVar25,auVar25);
      auVar25 = ZEXT416(0xffffffff);
      auVar29 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
      auVar25._0_4_ = auVar28._0_4_ + auVar32._0_4_;
      auVar25._8_8_ = auVar28._8_8_;
      auVar25._4_4_ = auVar28._4_4_ + auVar32._4_4_;
      auVar27._0_8_ = auVar25._0_8_;
      auVar27._12_4_ = auVar28._12_4_;
      auVar27._8_4_ = auVar28._8_4_ + auVar32._8_4_;
      auVar28._0_12_ = auVar27._0_12_;
      auVar28._12_4_ = auVar27._12_4_ + auVar32._12_4_;
      auVar25 = ZEXT416(0xffffffff);
      auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
      auVar29 = vectorShiftLeftIntegerWord(auVar29,auVar29);
      auVar28 = vectorConvertFromSignedFixedPointWord(auVar28,0);
      auVar32 = vectorShiftLeftIntegerWord(auVar25,auVar25);
      auVar25 = vectorReciprocalEstimateFloatingPoint(auVar28);
      auVar27 = vectorNegativeMultiplySubtractFloatingPoint(auVar25,auVar28,auVar30);
      auVar27 = vectorMultiplyAddFloatingPoint(auVar25,auVar27,auVar31);
      auVar25 = ZEXT416(0xffffffff);
      auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
      auVar31 = vectorShiftLeftIntegerWord(auVar25,auVar25);
      auVar25 = vectorNegativeMultiplySubtractFloatingPoint(auVar27,auVar28,auVar30);
      auVar27 = vectorMultiplyAddFloatingPoint(auVar27,auVar25,auVar29);
      auVar25 = vectorNegativeMultiplySubtractFloatingPoint(auVar27,auVar28,auVar30);
      auVar25 = vectorMultiplyAddFloatingPoint(auVar27,auVar25,auVar32);
      auVar25 = vectorMultiplyAddFloatingPoint
                          (auVar25,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,
                           auVar31);
      auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar9 = storeVectorElementWordIndexed
                        (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x90,uVar22);
      *(undefined4 *)((int)pvVar6 + 0x90U & 0xfffffffc) = uVar9;
      *(undefined1 *)((int)pvVar6 + 0xbd) = 0;
      *(undefined4 *)((int)pvVar6 + 0xa4) = 9;
      dVar24 = 2.0;
      mobyutil::MB_SetupJumpArc
                (0x4000000000000000,0x3fe0000000000000,&DAT_004928c8,0x90,uVar22 + 0x80);
      uVar9 = *(undefined4 *)(iVar16 + 0x18);
      *(undefined4 *)(puVar10 + 6) = *(undefined4 *)(iVar16 + 0x10);
      *(undefined4 *)(puVar10 + 7) = uVar9;
      uVar9 = *(undefined4 *)(iVar16 + 0x1c);
      *(undefined4 *)((int)puVar10 + 0x34) = *(undefined4 *)(iVar16 + 0x14);
      *(undefined4 *)((int)puVar10 + 0x3c) = uVar9;
      mobyutil::MB_VecAtan2Angles(puVar10[6],puVar10[7],uVar14 - 0x60,uVar22 + 0x98,uVar22 + 0x9c);
      mobyutil::MB_StartKick((double)*(float *)(puVar10 + 0xe),param_1,uVar22 + 0x80);
      *(undefined4 *)((int)pvVar6 + 0xd0) = 0x41200000;
      *(undefined4 *)((int)pvVar6 + 0xd4) = 0x41a00000;
      *(float *)((int)pvVar6 + 0xcc) = (float)((double)mobyutil::g_FrameTime * dVar24);
      sound::PlayMobySound(2,0,param_1);
      param_1->state = '\t';
    }
  }
  param_1->damage = -1;
  return;
}



//==== 00492d98  ns=mobyupdate_unsorted  size=0x2460
// sig: undefined UpdateMoby_857(MobyInstance * moby)
// callers(0): 
// callees(59): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere; 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f0ea8 mobyfunc::AttachManipulator; 000f0f1c mobyfunc::DetachManipulator; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 000fe4f0 mobyutil::MB_randRangeSigned; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 000ffb70 mobyutil::GetGroundZ; 00101058 mobyutil::MB_UpdateNavMove; 00104e44 mobyutil::PointInsideComplexPoly; 0010581c mobyutil::SetCollDamIn; 00105870 mobyutil::DamageSphereAtPos; 00105ab4 mobyutil::CollDamageMobyDirect; 00106360 mobyutil::MB_SetZBoundsFromGround; 00109af0 mobyutil::Delt; 00109b40 mobyutil::AccelDelt; 00109ec0 mobyutil::DeltAng; 0010af88 mobyutil::MB_isCrate; 0010b030 mobyutil::MB_UpdateKick; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00110b70 mobyutil::MB_IsPntInCuboid; 001136c8 mobyutil::DoMeander; 00113fa0 mobyutil::MB_LineCrossesSpline; 00114148 mobyutil::MB_SplineCrossCheck; 0011440c mobyutil::MB_SplineMarkCrossings; 001145d8 mobyutil::MB_PushOutOfSplineWalls; 00114d58 mobyutil::MB_SplineFindRouteNode; 00127ea8 partupd::SpawnPart_26; 0012f8c0 partupd::SpawnPart_53; 0015d204 sound::sound_MobyPlay_oClass; 00338ea8 FUN_00338ea8; 00339910 FUN_00339910; 00490cb8 mobyupdate_helpers::M857_00490cb8; 00491998 mobyupdate_helpers::M857_00491998
// strings: 0096c074: 'None'

/* Moby 857 */

void mobyupdate_unsorted::UpdateMoby_857(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  MobyModeBit MVar3;
  void *pvVar4;
  u16 *puVar5;
  f32 fVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  undefined4 uVar13;
  int iVar14;
  float *val;
  uint uVar15;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar16;
  bool bVar17;
  void *pvVar18;
  undefined4 *in_r5;
  ulonglong uVar19;
  longlong in_r6;
  ulonglong uVar20;
  Vec4 *point;
  MobyInstance *pMVar21;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined8 uVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  float fVar37;
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [8];
  float local_218;
  f32 local_210;
  f32 local_20c;
  float local_208;
  f32 local_204;
  f32 local_200;
  f32 local_1fc;
  float local_1f8;
  f32 local_1f4;
  f32 local_1f0;
  f32 local_1ec;
  f32 local_1e8;
  f32 local_1e4;
  float local_1e0;
  float local_1dc;
  Vec4 local_1d0;
  float local_1c0;
  float local_1bc;
  float local_1b0;
  float local_1ac;
  undefined4 local_1a8;
  Vec4 local_1a0;
  float local_190;
  float local_18c;
  float local_188;
  undefined1 auStack_180 [16];
  float local_170;
  float local_16c;
  undefined4 local_168;
  float local_160;
  float local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined1 auStack_150 [8];
  float local_148;
  float local_140;
  float local_13c;
  float local_138;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [8];
  f32 local_118;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [8];
  float local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float local_c0;
  float local_bc [3];
  
  lVar10 = (longlong)(int)moby;
  uVar15 = 0;
  lVar22 = lVar10 + 0x10;
  pvVar4 = moby->pVar;
  dVar23 = (double)FUN_005e8588(lVar22,&g_heroPosition);
  dVar28 = (double)(moby->pos).z;
  dVar36 = (double)(moby->pos).x;
  dVar35 = (double)(moby->pos).y;
  dVar34 = (double)(moby->pos).w;
  dVar30 = ABS((double)(float)(dVar28 - (double)DAT_00969f88));
  if (((moby->state != '\x01') && (mobyupdate_helpers::M857_004928e0(lVar10), dVar23 < 16.0)) &&
     (ABS((moby->pos).z - g_heroPosition.z) < 1.5)) {
    uVar1 = moby->state;
    if (((uVar1 == '\x05' || uVar1 == '\x02') || (uVar1 == '\x03')) ||
       ((uVar1 == '\x06' || ((uVar1 == '\a' || (uVar1 == '\x04')))))) {
      in_r5 = &DAT_00a1bfc0;
      in_r6 = (ulonglong)DAT_00a1bfe4 + 1;
      DAT_00a1bfe4 = (uint)in_r6;
      if (DAT_0096bfa0 < 3) {
        if (0 < DAT_0096bfa0) {
          if (DAT_0096bfa0 < 2) {
            if (uVar1 != '\x03') {
              moby->state = '\x03';
              moby->setByGroup = '\0';
            }
          }
          else {
            moby->state = '\x04';
          }
        }
      }
      else if (DAT_0096bfa0 < 4) {
        if (uVar1 != '\x05') {
          moby->state = '\x05';
          moby->setByGroup = '\0';
        }
      }
      else if (DAT_0096bfa0 < 5) {
        moby->state = '\a';
        moby->setByGroup = '\0';
      }
    }
  }
  if (Cheats[3] == '\0') {
    if (*(char *)((int)pvVar4 + 0x101) != '\0') {
      mobyfunc::DetachManipulator(moby,(int)pvVar4 + 0x100);
    }
  }
  else {
    if (*(char *)((int)pvVar4 + 0x101) == '\0') {
      mobyfunc::AttachManipulator(moby,0,(int)pvVar4 + 0x100);
    }
    if (moby->state == '\x01') {
      in_r5 = (undefined4 *)&DAT_00720000;
      mobyutil::Delt(1.0,DAT_0071f408 * 0.1,(float *)((int)pvVar4 + 0x308));
    }
    else {
      in_r5 = (undefined4 *)&DAT_00720000;
      mobyutil::Delt(2.3,DAT_0071f408 * 0.1,(float *)((int)pvVar4 + 0x308));
    }
    uVar13 = *(undefined4 *)((int)pvVar4 + 0x308);
    *(undefined4 *)((int)pvVar4 + 0x120) = uVar13;
    *(undefined4 *)((int)pvVar4 + 0x124) = uVar13;
    *(undefined4 *)((int)pvVar4 + 0x128) = uVar13;
  }
  bVar2 = moby->state;
  point = (Vec4 *)lVar22;
  if (4 < bVar2) {
    if (bVar2 < 8) {
      if (bVar2 < 6) {
        if (Level != Blarg) {
          iVar14 = 0;
          *(undefined4 *)((int)pvVar4 + 0x27c) = 0xffffffff;
          pvVar18 = pvVar4;
          do {
            if (((-1 < *(int *)((int)pvVar18 + 0x1e0)) &&
                (iVar16 = mobyutil::PointInsideComplexPoly
                                    (&g_heroPosition,
                                     (Vec4 *)Splines[*(int *)((int)pvVar18 + 0x1e0)]->points,
                                     Splines[*(int *)((int)pvVar18 + 0x1e0)]->cnt), iVar16 != 0)) &&
               (iVar16 = mobyutil::PointInsideComplexPoly
                                   (point,(Vec4 *)Splines[*(int *)((int)pvVar18 + 0x1e0)]->points,
                                    Splines[*(int *)((int)pvVar18 + 0x1e0)]->cnt), iVar16 != 0)) {
              *(int *)((int)pvVar4 + 0x27c) = iVar14;
            }
            iVar14 = iVar14 + 1;
            pvVar18 = (void *)((int)pvVar18 + 4);
          } while (iVar14 < 0x10);
        }
        bVar2 = moby->setByGroup;
        if (bVar2 == 0) {
          moby->setByGroup = '\x01';
          *(undefined4 *)((int)pvVar4 + 0x174) = 0;
          *(undefined2 *)((int)pvVar4 + 0x198) = 0;
          *(undefined2 *)((int)pvVar4 + 0x19a) = 0;
          dVar23 = (double)mobyutil::MB_randRangeSigned(0x3fc1df46a0000000,0x3fd6571840000000);
          *(float *)((int)pvVar4 + 0x17c) = (float)dVar23;
          *(uint *)((int)pvVar4 + 0x18c) = worldUpdateTime;
          bVar2 = moby->setByGroup;
        }
        if (bVar2 < 3) {
          if (bVar2 != 0) {
            if (bVar2 < 2) {
              if (*(int *)((int)pvVar4 + 0x18c) < (int)worldUpdateTime) {
                mobyupdate_helpers::M857_004921e0();
              }
              if (*(int *)((int)pvVar4 + 0x174) == 0) {
                if (*(short *)((int)pvVar4 + 0x19a) != 0) {
                  *(undefined2 *)((int)pvVar4 + 0x19a) = 0;
                  uVar13 = idol::GetAnimDuration(0x3c);
                  *(undefined4 *)((int)pvVar4 + 0x194) = uVar13;
                  moby->setByGroup = '\x04';
                }
              }
              else {
                if (moby->animationId != '\x05') {
                  in_r6 = idol::GetAnimDuration(7);
                  mobyutil::MB_SetAnimation(lVar10,5,0);
                }
                iVar14 = *(int *)((int)pvVar4 + 0x27c);
                if (iVar14 < 0) {
                  FUN_005e7e98(&local_1c0,(ulonglong)*(uint *)((int)pvVar4 + 0x174) + 0x10);
                }
                else {
                  iVar14 = mobyutil::MB_SplineFindRouteNode
                                     (0.1,(int)pvVar4 + iVar14 * 4 + 0x1e0,1,
                                      (longlong)*(int *)((int)pvVar4 + iVar14 * 4 + 0x220),in_r6,
                                      point,*(int *)((int)pvVar4 + 0x174) + 0x10,&local_1c0);
                  if (iVar14 == 0) {
                    FUN_005e7e98(&local_1c0,(ulonglong)*(uint *)((int)pvVar4 + 0x174) + 0x10);
                  }
                  local_1a0.x = (moby->pos).x;
                  local_1a0.y = (moby->pos).y;
                  local_1a0.z = (moby->pos).z;
                  local_1a0.w = (moby->pos).w;
                  uVar13 = *(undefined4 *)((int)pvVar4 + *(int *)((int)pvVar4 + 0x27c) * 4 + 0x1e0);
                  mobyutil::MB_PushOutOfSplineWalls
                            (0x3fc5c28f60000000,uVar13,uVar13,lVar22,&local_1a0);
                  iVar14 = mobyutil::PointInsideComplexPoly
                                     (&local_1a0,
                                      (Vec4 *)Splines[*(int *)((int)pvVar4 +
                                                              *(int *)((int)pvVar4 + 0x27c) * 4 +
                                                              0x1e0)]->points,
                                      Splines[*(int *)((int)pvVar4 +
                                                      *(int *)((int)pvVar4 + 0x27c) * 4 + 0x1e0)]->
                                      cnt);
                  if (iVar14 != 0) {
                    (moby->pos).x = local_1a0.x;
                    (moby->pos).y = local_1a0.y;
                    (moby->pos).z = local_1a0.z;
                    (moby->pos).w = local_1a0.w;
                  }
                }
                dVar23 = (double)FUN_005e8338((double)(local_1c0 - (moby->pos).x),
                                              (double)(local_1bc - (moby->pos).y));
                dVar23 = (double)fastfunc::FastWrapRot
                                           ((float)dVar23,*(float *)((int)pvVar4 + 0x17c));
                dVar30 = (double)mathfunc::cosf((float)dVar23);
                dVar33 = 3.0;
                local_1b0 = (float)(dVar30 * 3.0);
                dVar30 = (double)FUN_005e8128(dVar23);
                local_1ac = (float)(dVar30 * dVar33);
                dVar30 = 0.0;
                local_1a8 = 0;
                FUN_005e7f54(&local_1b0,&local_1b0,lVar22);
                if ((*(int *)((int)pvVar4 + 0x27c) != -1) &&
                   (iVar14 = mobyutil::MB_LineCrossesSpline
                                       (*(undefined4 *)
                                         ((int)pvVar4 + *(int *)((int)pvVar4 + 0x27c) * 4 + 0x1e0),
                                        lVar22,&local_1b0), iVar14 != 0)) {
                  mobyutil::DeltAng((float)dVar30,mobyutil::g_FrameTime * 1.5707964,
                                    (float *)((int)pvVar4 + 0x17c),0x492ccc,0x720000,0);
                }
                dVar30 = 0.30000001192092896;
                mobyutil::OrganicDeltAngSpeed
                          (dVar23,(double)(DAT_0071f40c * 0.07),(double)(DAT_0071f40c * 0.3),
                           (double)(mobyutil::g_FrameTime * 5.2359877),lVar10);
                *(float *)((int)pvVar4 + 0x54) = mobyutil::g_FrameTime * 4.5;
                uVar11 = mobyutil::MB_UpdateNavMove
                                   (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar4 + 0x30),
                                    *(int *)((int)pvVar4 + 0x174) + 0x10,auStack_230);
                if ((uVar11 & 0x20) != 0) {
                  (moby->pos).x = (float)dVar36;
                  (moby->pos).y = (float)dVar35;
                  (moby->pos).z = (float)dVar28;
                  (moby->pos).w = (float)dVar34;
                  moby->state = '\x04';
                }
                dVar23 = (double)FUN_005e8588(lVar22,(ulonglong)*(uint *)((int)pvVar4 + 0x174) +
                                                     0x10);
                if (dVar23 < 1.5) {
                  FUN_005e7e98(&local_190,lVar22);
                  dVar27 = (double)local_190;
                  dVar33 = 0.4000000059604645;
                  local_188 = local_188 + 0.4;
                  dVar23 = (double)mathfunc::cosf((moby->rotation).z);
                  local_190 = (float)(dVar23 * dVar33 + dVar27);
                  dVar27 = (double)local_18c;
                  dVar23 = (double)FUN_005e8128((double)(moby->rotation).z);
                  local_18c = (float)(dVar23 * dVar33 + dVar27);
                  FUN_005e7e98(auStack_180,&local_190);
                  dVar33 = (double)local_190;
                  dVar23 = (double)mathfunc::cosf((moby->rotation).z);
                  local_190 = (float)(dVar23 * dVar30 + dVar33);
                  dVar33 = (double)local_18c;
                  dVar23 = (double)FUN_005e8128((double)(moby->rotation).z);
                  local_18c = (float)(dVar23 * dVar30 + dVar33);
                  iVar14 = collproc::CollLine(&local_190,auStack_180,0,lVar10,0);
                  if ((iVar14 != 0) && (CollOutput.pMoby == *(MobyInstance **)((int)pvVar4 + 0x174))
                     ) {
                    moby->setByGroup = '\x02';
                  }
                }
              }
            }
            else {
              if (moby->animationId != '\x02') {
                uVar31 = idol::GetAnimDuration(7);
                mobyutil::MB_SetAnimation(lVar10,2,8,uVar31);
              }
              if (((*(int *)((int)pvVar4 + 0x174) != 0) &&
                  (dVar23 = (double)mobyfunc::BlendAnimFrame(moby), 12.0 <= dVar23)) &&
                 (dVar23 <= 15.0)) {
                dVar23 = (double)mathfunc::cosf((moby->rotation).z);
                local_170 = (float)dVar23;
                dVar23 = (double)FUN_005e8128((double)(moby->rotation).z);
                local_16c = (float)dVar23;
                local_168 = 0;
                mobyutil::SetCollDamIn
                          (0x4000000000000000,&uStack_f0,lVar10,0x10000,&DAT_00492ccc,&local_170);
                mobyutil::CollDamageMobyDirect
                          (*(undefined4 *)((int)pvVar4 + 0x174),0x40,CONCAT44(uStack_f0,uStack_ec),
                           CONCAT44(uStack_e8,uStack_e4),CONCAT44(uStack_e0,uStack_dc),
                           CONCAT44(uStack_d8,uStack_d4),CONCAT44(uStack_d0,uStack_cc),
                           CONCAT44(uStack_c8,uStack_c4));
              }
              if ((moby->field43_0x70 & 2U) != 0) {
                *(undefined2 *)((int)pvVar4 + 0x19a) = 0;
                uVar13 = idol::GetAnimDuration(0x1e);
                *(undefined4 *)((int)pvVar4 + 0x194) = uVar13;
                moby->setByGroup = '\x03';
              }
            }
          }
        }
        else if (bVar2 < 4) {
          if (moby->animationId != '\0') {
            uVar31 = idol::GetAnimDuration(7);
            mobyutil::MB_SetAnimation(lVar10,0,0,uVar31);
          }
          if ((*(short *)((int)pvVar4 + 0x19a) != 0) && (*(int *)((int)pvVar4 + 0x174) == 0)) {
            *(undefined2 *)((int)pvVar4 + 0x19a) = 0;
            uVar13 = idol::GetAnimDuration(0x3c);
            *(undefined4 *)((int)pvVar4 + 0x194) = uVar13;
            moby->setByGroup = '\x04';
          }
          iVar14 = fastfunc::FastDecTimerS32((int)pvVar4 + 0x194);
          if ((iVar14 != 0) && (*(int *)((int)pvVar4 + 0x174) != 0)) {
            moby->setByGroup = '\x01';
          }
        }
        else if (bVar2 < 5) {
          if (*(int *)((int)pvVar4 + 0x18c) < (int)worldUpdateTime) {
            mobyupdate_helpers::M857_004921e0();
          }
          if (moby->animationId != '\0') {
            uVar31 = idol::GetAnimDuration(7);
            mobyutil::MB_SetAnimation(lVar10,0,0,uVar31);
          }
          iVar14 = fastfunc::FastDecTimerS32((int)pvVar4 + 0x194);
          if (((iVar14 == 0) || (*(short *)((int)pvVar4 + 0x19a) == 0)) ||
             (*(int *)((int)pvVar4 + 0x174) != 0)) {
            if ((*(short *)((int)pvVar4 + 0x19a) != 0) && (*(int *)((int)pvVar4 + 0x174) == 0)) {
              *(undefined2 *)((int)pvVar4 + 0x19a) = 0;
            }
          }
          else {
            moby->state = '\x03';
            moby->setByGroup = '\0';
          }
          if (*(int *)((int)pvVar4 + 0x174) != 0) {
            moby->setByGroup = '\x01';
          }
        }
      }
      else if (6 < bVar2) {
        if (moby->setByGroup == 0) {
          moby->setByGroup = '\x01';
          mobyupdate_helpers::M857_00491ae8(lVar10);
        }
        else if ((byte)moby->setByGroup < 2) {
          iVar14 = *(int *)((int)pvVar4 + 0x174);
          if (iVar14 == 0) {
            if (*(short *)((int)pvVar4 + 0x19a) != 0) {
              moby->state = '\x03';
              moby->setByGroup = '\0';
            }
          }
          else {
            if (moby->animationId != '\x01') {
              uVar31 = idol::GetAnimDuration(7);
              mobyutil::MB_SetAnimation(lVar10,1,0,uVar31);
              iVar14 = *(int *)((int)pvVar4 + 0x174);
            }
            if (*(short *)(iVar14 + 0xa6) == 0x15f || *(short *)(iVar14 + 0xa6) == 0x515) {
              local_160 = *(float *)(iVar14 + 0x10);
              local_15c = *(float *)(iVar14 + 0x14);
              local_158 = *(undefined4 *)(iVar14 + 0x18);
              local_154 = *(undefined4 *)(iVar14 + 0x1c);
            }
            else {
              FUN_005e7f54(&local_160,iVar14 + 0x10,iVar14 + 0xc0);
            }
            uVar31 = FUN_005e8338((double)(local_160 - (moby->pos).x),
                                  (double)(local_15c - (moby->pos).y));
            mobyutil::OrganicDeltAngSpeed
                      (uVar31,(double)(DAT_0071f40c * 0.07),(double)(DAT_0071f40c * 0.3),
                       (double)(mobyutil::g_FrameTime * 5.2359877),lVar10,&DAT_00720000,
                       (int)pvVar4 + 0x44);
            uVar11 = mobyutil::MB_UpdateNavMove
                               (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar4 + 0x30),
                                &local_160,auStack_230);
            if ((uVar11 & 0x20) != 0) {
              (moby->pos).x = (float)dVar36;
              (moby->pos).y = (float)dVar35;
              (moby->pos).z = (float)dVar28;
              (moby->pos).w = (float)dVar34;
              moby->state = '\x04';
            }
          }
        }
      }
    }
    else {
      if (bVar2 < 9) {
        dVar23 = (double)FUN_005e8338((double)((moby->pos).x -
                                              *(float *)(*(int *)((int)pvVar4 + 0x304) + 0x10)),
                                      (double)((moby->pos).y -
                                              *(float *)(*(int *)((int)pvVar4 + 0x304) + 0x14)));
        local_c0 = (float)dVar23;
        dVar23 = (double)FUN_005e8588((ulonglong)*(uint *)((int)pvVar4 + 0x304) + 0x10,lVar22);
        mobyutil::DeltAng(*(float *)(*(int *)((int)pvVar4 + 0x304) + 0x48),
                          mobyutil::g_FrameTime * 6.2831855,&local_c0,*(int *)((int)pvVar4 + 0x304),
                          (int)in_r5,0);
        dVar23 = -(double)(float)((double)mobyutil::g_FrameTime * 4.0 - dVar23);
        if (dVar23 <= 0.0) {
          iVar14 = *(int *)(*(int *)((int)pvVar4 + 0x304) + 0x78);
          iVar16 = *(int *)(iVar14 + 0x14);
          if (0 < iVar16) {
            iVar16 = iVar16 + -1;
            *(int *)(iVar14 + 0x14) = iVar16;
          }
          if (iVar16 == 0) {
            sound::sound_MobyPlay_oClass(1,0,*(MobyInstance **)((int)pvVar4 + 0x304),0x516);
          }
          else {
            sound::sound_MobyPlay_oClass(0,0,*(MobyInstance **)((int)pvVar4 + 0x304),0x516);
          }
          mobyfunc::DeleteMoby(moby);
          return;
        }
        dVar28 = (double)mathfunc::cosf(local_c0);
        dVar30 = (double)FUN_005e8128((double)local_c0);
        iVar14 = *(int *)((int)pvVar4 + 0x304);
        (moby->pos).x = (float)(dVar28 * dVar23 + (double)*(float *)(iVar14 + 0x10));
        (moby->pos).y = (float)(dVar30 * dVar23 + (double)*(float *)(iVar14 + 0x14));
        if (dVar23 < 1.0) {
          moby->scale = (float)((double)moby->pClass->gScale * dVar23);
          dVar23 = (double)((float)(1.0 - dVar23) * 0.5);
          dVar28 = (double)(float)(dVar23 * 210000.0);
          idol::GetAnimDuration(dVar23,0x3fe0000000000000,0x4109a28000000000,2);
          partupd::SpawnPart_26(dVar28,lVar10);
        }
        if (moby->enabled != '\0') {
          mobyupdate_helpers::M857_00490cb8(lVar10);
        }
        moby->collision = (ushort *)0x0;
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        return;
      }
      if ((bVar2 < 10) &&
         (uVar15 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar4 + 0x80)),
         (uVar15 & 0x41) != 0)) {
        dVar24 = 0.5;
        mobyutil::MB_SpawnExplosionSparks(0x3fe0000000000000,0x402a000000000000,lVar10,lVar22);
        FUN_005e7e98(lVar22,(int)pvVar4 + 0xe0);
        moby->state = '\x04';
        dVar32 = 0.10000000149011612;
        iVar14 = 0;
        dVar27 = 1.0;
        dVar33 = 0.0;
        dVar36 = 0.25;
        dVar35 = 2.5;
        dVar34 = 5.0;
        dVar30 = 0.07000000029802322;
        dVar28 = 0.699999988079071;
        dVar23 = 15.0;
        do {
          dVar29 = (double)mobyutil::MB_randRangeFloat((float)dVar32,(float)dVar27);
          uVar15 = mobyutil::MB_randRange(0x40,0xff);
          uVar11 = mobyutil::MB_randRange(0x40,0xff);
          uVar12 = mobyutil::MB_randRange(0x40,0xff);
          dVar25 = (double)mobyutil::MB_randRot();
          dVar25 = (double)mathfunc::cosf((float)dVar25);
          dVar26 = (double)mobyutil::MB_randRangeFloat((float)dVar33,(float)dVar36);
          local_140 = (float)(dVar25 * dVar26);
          mobyutil::MB_randRot();
          dVar25 = (double)FUN_005e8128();
          dVar26 = (double)mobyutil::MB_randRangeFloat((float)dVar33,(float)dVar36);
          local_13c = (float)(dVar25 * dVar26);
          local_138 = 0.0;
          dVar25 = (double)mobyutil::MB_randRangeFloat((float)dVar33,(float)dVar24);
          local_138 = (float)((double)local_138 + dVar25);
          fastfunc::FastVecAddSelf(auStack_130,&local_140,lVar22);
          mobyutil::MB_randRangeFloat((float)dVar33,mobyutil::g_FrameTime);
          FUN_005e7f98(auStack_150,auStack_150);
          dVar25 = (double)mobyutil::MB_randRangeFloat
                                     ((float)((double)mobyutil::g_FrameTime * dVar35),
                                      (float)((double)mobyutil::g_FrameTime * dVar34));
          local_148 = (float)dVar25;
          mobyutil::MB_randRange(0xf,0x1e);
          uVar31 = idol::GetAnimDuration();
          dVar25 = (double)(float)(dVar29 * dVar30);
          dVar29 = (double)(float)(dVar29 * dVar28);
          iVar16 = mobyutil::MB_randInt(2);
          uVar20 = (LZCOUNT(-iVar16) << 0x3a) >> 0x3f;
          uVar19 = uVar20 & 0xfffffffffffffffe;
          partupd::SpawnPart_53
                    (dVar25,dVar29,(double)(float)((double)DAT_0071f418 * dVar23),&local_140,uVar31,
                     uVar19,uVar20,
                     (uint)((uVar11 & 0xffffffff) << 8) | uVar15 |
                     (uint)((uVar12 & 0xffffffff) << 0x10) | 0x7f000000,0,uVar19 + 1,auStack_150);
          iVar14 = iVar14 + 1;
        } while (iVar14 < 10);
        return;
      }
    }
    goto LAB_00494af4;
  }
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      *(undefined4 *)((int)pvVar4 + 0x308) = 0x3f800000;
      uVar31 = 0x3fe0000000000000;
      dVar23 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar22,0);
      (moby->pos).z = (float)dVar23;
      FUN_00339910(lVar10);
      *(f32 *)((int)pvVar4 + 0x2e0) = (moby->pos).x;
      *(f32 *)((int)pvVar4 + 0x2e4) = (moby->pos).y;
      *(f32 *)((int)pvVar4 + 0x2e8) = (moby->pos).z;
      *(f32 *)((int)pvVar4 + 0x2ec) = (moby->pos).w;
      *(f32 *)((int)pvVar4 + 0x2f0) = (moby->pos).x;
      *(f32 *)((int)pvVar4 + 0x2f4) = (moby->pos).y;
      *(f32 *)((int)pvVar4 + 0x2f8) = (moby->pos).z;
      *(f32 *)((int)pvVar4 + 0x2fc) = (moby->pos).w;
      if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      uVar13 = FUN_00338ea8(lVar10);
      *(undefined4 *)((int)pvVar4 + 0x170) = uVar13;
      dVar23 = (double)mobyutil::GetGroundZ(uVar31,lVar22,0);
      (moby->pos).z = (float)dVar23;
      FUN_005e7e98(pvVar4,lVar22);
      FUN_005e7e98((int)pvVar4 + 0xe0,lVar22);
      fVar9 = mobyutil::g_FrameTime;
      *(float *)((int)pvVar4 + 0x14) = mobyutil::g_FrameTime * 2.0;
      *(undefined4 *)((int)pvVar4 + 0x30) = 300;
      *(undefined4 *)((int)pvVar4 + 0x34) = 0x3f028f5c;
      *(undefined4 *)((int)pvVar4 + 0x38) = *(undefined4 *)((int)pvVar4 + 0x300);
      *(undefined4 *)((int)pvVar4 + 0x3c) = *(undefined4 *)((int)pvVar4 + 0x300);
      *(float *)((int)pvVar4 + 0x18) = fVar9 * 2.6179938;
      fVar8 = DAT_0071f40c;
      fVar37 = DAT_0071f40c * 0.3;
      *(float *)((int)pvVar4 + 0x50) = fVar37;
      *(float *)((int)pvVar4 + 0x54) = fVar9 * 3.0 + fVar9 * 0.1;
      *(undefined4 *)((int)pvVar4 + 0x58) = 0x3f32b8c2;
      *(undefined4 *)((int)pvVar4 + 0x5c) = 0x3e4ccccd;
      *(float *)((int)pvVar4 + 0x4c) = fVar8 * 0.02;
      *(float *)((int)pvVar4 + 0x70) = fVar37;
      *(float *)((int)pvVar4 + 0x6c) = fVar8 * 0.03;
      *(float *)((int)pvVar4 + 0x74) = fVar9 * 3.1415927;
      uVar13 = idol::GetAnimDuration(4);
      *(undefined4 *)((int)pvVar4 + 0x78) = uVar13;
      *(uint *)((int)pvVar4 + 0x68) = *(uint *)((int)pvVar4 + 0x68) | 1;
      iVar14 = 0;
      pvVar18 = pvVar4;
      do {
        if (-1 < *(int *)((int)pvVar18 + 0x1e0)) {
          *(int *)((int)pvVar4 + 0x310) = *(int *)((int)pvVar4 + 0x310) + 1;
        }
        iVar14 = iVar14 + 1;
        pvVar18 = (void *)((int)pvVar18 + 4);
      } while (iVar14 < 0x10);
      dVar23 = (double)mobyutil::MB_randRot();
      *(float *)((int)pvVar4 + 0x28c) = (float)dVar23;
      moby->collision = (ushort *)0x0;
      *(undefined4 *)((int)pvVar4 + 0x27c) = 0xffffffff;
      moby->state = '\x01';
    }
    else {
      if (((*(int *)((int)pvVar4 + 0x170) != 0) &&
          (bVar2 = *(byte *)(*(int *)((int)pvVar4 + 0x170) + 0x20), bVar2 != 0xfd && bVar2 != 0xfe))
         && (bVar2 < 2)) {
        if (g_heroType == '\0') {
          iVar14 = *(int *)((int)pvVar4 + 0x170);
          moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
          *(ushort *)(iVar14 + 0x34) = *(ushort *)(iVar14 + 0x34) | 0x41;
          iVar14 = *(int *)((int)pvVar4 + 0x170);
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
          *(ushort *)(iVar14 + 0x34) = *(ushort *)(iVar14 + 0x34) & 0xefff;
          *(undefined4 *)(*(int *)((int)pvVar4 + 0x170) + 0x94) = 0;
        }
        else {
          iVar14 = *(int *)((int)pvVar4 + 0x170);
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
          *(ushort *)(iVar14 + 0x34) = *(ushort *)(iVar14 + 0x34) & 0xffbe;
          iVar14 = *(int *)((int)pvVar4 + 0x170);
          moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
          *(ushort *)(iVar14 + 0x34) = *(ushort *)(iVar14 + 0x34) | 0x1000;
          *(undefined4 *)(*(int *)((int)pvVar4 + 0x170) + 0x94) =
               *(undefined4 *)(*(int *)(*(int *)((int)pvVar4 + 0x170) + 0x24) + 0x10);
        }
        if (moby->enabled == '\0') {
          return;
        }
        mobyupdate_helpers::M857_00490cb8(lVar10);
        return;
      }
      if (0 < *(int *)((int)pvVar4 + 0x310)) {
        uVar31 = 0;
        pvVar18 = pvVar4;
        do {
          if (-1 < *(int *)((int)pvVar18 + 0x1e0)) {
            mobyutil::MB_SplineMarkCrossings
                      ((int)pvVar18 + 0x1e0,1,*(undefined4 *)((int)pvVar18 + 0x220));
            iVar14 = mobyutil::MB_SplineCrossCheck(uVar31,(int)pvVar18 + 0x1e0,1);
            if (iVar14 != 0) {
              *(uint *)((int)pvVar4 + 0x27c) = uVar15;
            }
          }
          uVar15 = uVar15 + 1;
          pvVar18 = (void *)((int)pvVar18 + 4);
        } while ((int)uVar15 < 0x10);
      }
      if (Cheats[3] == '\0') {
        uVar13 = 300;
        DAT_008c7c70 = 0.27;
      }
      else {
        uVar13 = 0x177;
        DAT_008c7c70 = 0.35;
      }
      MVar3 = moby->modeBits;
      *(undefined4 *)((int)pvVar4 + 0x30) = uVar13;
      moby->modeBits =
           MVar3 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                    DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|
                    HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
      puVar5 = moby->pClass->collision;
      moby->state = '\x03';
      moby->collision = puVar5;
    }
    goto LAB_00494af4;
  }
  if (bVar2 < 3) {
    if (moby->animationId != '\x01') {
      uVar31 = idol::GetAnimDuration(7);
      mobyutil::MB_SetAnimation(lVar10,1,0,uVar31);
    }
    mobyutil::DoMeander(0x3fd6666660000000,0x3fd0000000000000,lVar10,pvVar4);
    goto LAB_00494af4;
  }
  if (3 < bVar2) {
    if (moby->animationId != '\0') {
      uVar31 = idol::GetAnimDuration(7);
      mobyutil::MB_SetAnimation(lVar10,0,0,uVar31);
    }
    uVar31 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                          (double)(g_heroPosition.y - (moby->pos).y));
    mobyutil::OrganicDeltAngSpeed
              (uVar31,(double)(DAT_0071f40c * 0.05),(double)(DAT_0071f40c * 0.3),
               (double)(mobyutil::g_FrameTime * 3.4906585),lVar10,&DAT_00720000,(int)pvVar4 + 0x44);
    goto LAB_00494af4;
  }
  FUN_005e7e98(&local_1f0,lVar22);
  if ((Level != Blarg) &&
     (*(undefined4 *)((int)pvVar4 + 0x27c) = 0xffffffff, 1 < *(int *)((int)pvVar4 + 0x310))) {
    iVar14 = 0;
    pvVar18 = pvVar4;
    do {
      if (((-1 < *(int *)((int)pvVar18 + 0x1e0)) &&
          (iVar16 = mobyutil::PointInsideComplexPoly
                              (&g_heroPosition,
                               (Vec4 *)Splines[*(int *)((int)pvVar18 + 0x1e0)]->points,
                               Splines[*(int *)((int)pvVar18 + 0x1e0)]->cnt), iVar16 != 0)) &&
         (iVar16 = mobyutil::PointInsideComplexPoly
                             (point,(Vec4 *)Splines[*(int *)((int)pvVar18 + 0x1e0)]->points,
                              Splines[*(int *)((int)pvVar18 + 0x1e0)]->cnt), iVar16 != 0)) {
        *(int *)((int)pvVar4 + 0x27c) = iVar14;
      }
      iVar14 = iVar14 + 1;
      pvVar18 = (void *)((int)pvVar18 + 4);
    } while (iVar14 < 0x10);
  }
  iVar14 = 0;
  pvVar18 = pvVar4;
  do {
    iVar16 = *(int *)((int)pvVar18 + 0x2a0);
    if ((iVar16 == -1) || (*(int *)((int)pvVar18 + 0x2c0) == -1)) break;
    if ((MobyInstance[iVar16].oClass == DOOR_03F7) &&
       (((MobyInstance[iVar16].state != '\x04' &&
         (iVar16 = mobyutil::MB_IsPntInCuboid
                             ((Vec4 *)&g_heroMobyPtr->pos,(longlong)*(int *)((int)pvVar18 + 0x2c0)),
         iVar16 != 0)) &&
        (iVar16 = mobyutil::MB_IsPntInCuboid(point,(longlong)*(int *)((int)pvVar18 + 0x2c0)),
        iVar16 == 0)))) {
      (moby->pos).x = local_1f0;
      (moby->pos).y = local_1ec;
      moby->state = '\x04';
      (moby->pos).z = local_1e8;
      (moby->pos).w = local_1e4;
      break;
    }
    iVar14 = iVar14 + 1;
    pvVar18 = (void *)((int)pvVar18 + 4);
  } while (iVar14 < 8);
  if (moby->state == '\x04') goto LAB_00494af4;
  bVar2 = moby->setByGroup;
  if (bVar2 == 0) {
    moby->setByGroup = '\x01';
    *(undefined4 *)((int)pvVar4 + 0x184) = 0;
    *(undefined2 *)((int)pvVar4 + 400) = 0;
    FUN_005e7e98((int)pvVar4 + 0xf0,lVar22);
    dVar30 = (double)mobyutil::MB_randRangeSigned(0x3fc1df46a0000000,0x3fd6571840000000);
    *(float *)((int)pvVar4 + 0x17c) = (float)dVar30;
LAB_004936b8:
    if (moby->animationId != '\x01') {
      in_r6 = idol::GetAnimDuration(7);
      mobyutil::MB_SetAnimation(lVar10,1,0);
    }
    iVar14 = *(int *)((int)pvVar4 + 0x27c);
    dVar32 = (double)(moby->pos).x;
    dVar27 = (double)(moby->pos).y;
    dVar33 = (double)(moby->pos).z;
    dVar30 = (double)(moby->pos).w;
    if (iVar14 < 0) {
      FUN_005e7e98(&local_1e0,&g_heroPosition);
    }
    else {
      iVar14 = mobyutil::MB_SplineFindRouteNode
                         (0.1,(int)pvVar4 + iVar14 * 4 + 0x1e0,1,
                          (longlong)*(int *)((int)pvVar4 + iVar14 * 4 + 0x220),in_r6,point,
                          &g_heroPosition,&local_1e0);
      if (iVar14 == 0) {
        FUN_005e7e98(&local_1e0,&g_heroPosition);
      }
      local_1d0.x = (moby->pos).x;
      local_1d0.y = (moby->pos).y;
      local_1d0.z = (moby->pos).z;
      local_1d0.w = (moby->pos).w;
      uVar13 = *(undefined4 *)((int)pvVar4 + *(int *)((int)pvVar4 + 0x27c) * 4 + 0x1e0);
      mobyutil::MB_PushOutOfSplineWalls(0x3fc5c28f60000000,uVar13,uVar13,lVar22,&local_1d0);
      iVar14 = mobyutil::PointInsideComplexPoly
                         (&local_1d0,
                          (Vec4 *)Splines[*(int *)((int)pvVar4 +
                                                  *(int *)((int)pvVar4 + 0x27c) * 4 + 0x1e0)]->
                                  points,
                          Splines[*(int *)((int)pvVar4 + *(int *)((int)pvVar4 + 0x27c) * 4 + 0x1e0)]
                          ->cnt);
      if (iVar14 != 0) {
        (moby->pos).x = local_1d0.x;
        (moby->pos).y = local_1d0.y;
        (moby->pos).z = local_1d0.z;
        (moby->pos).w = local_1d0.w;
      }
    }
    dVar24 = (double)FUN_005e8338((double)(local_1e0 - (moby->pos).x),
                                  (double)(local_1dc - (moby->pos).y));
    uVar31 = fastfunc::FastWrapRot((float)dVar24,*(float *)((int)pvVar4 + 0x17c));
    mobyutil::OrganicDeltAngSpeed
              (uVar31,(double)(DAT_0071f40c * 0.07),(double)(DAT_0071f40c * 0.3),
               (double)(mobyutil::g_FrameTime * 5.2359877),lVar10,&DAT_00720000,(int)pvVar4 + 0x44);
    val = (float *)((int)pvVar4 + 0x54);
    if (dVar23 <= 2.299999952316284) {
      if (1.2000000476837158 <= dVar23) {
        mobyutil::Delt(mobyutil::g_FrameTime * 3.0 * 0.95,DAT_0071f418,val);
      }
      else {
        mobyutil::Delt(mobyutil::g_FrameTime * 3.0 * 0.77,DAT_0071f418 * 2.0,val);
      }
    }
    else {
      mobyutil::Delt(mobyutil::g_FrameTime * 3.0 * 1.35,DAT_0071f418,val);
    }
    fVar37 = mobyutil::g_FrameTime * 3.0 * 1.35;
    if (fVar37 < *(float *)((int)pvVar4 + 0x54)) {
      *(float *)((int)pvVar4 + 0x54) = fVar37;
    }
    dVar24 = 0.800000011920929;
    if (0.800000011920929 < dVar23) {
      uVar15 = mobyutil::MB_UpdateNavMove
                         (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar4 + 0x30),
                          &g_heroPosition,auStack_230);
    }
    uVar7 = (int)moby >> 8;
    if (worldUpdateTime +
        (((int)worldUpdateTime >> 3) +
        (uint)((int)worldUpdateTime < 0 && (worldUpdateTime & 7) != 0)) * -8 ==
        uVar7 + (((int)moby >> 0xb) + (uint)((int)uVar7 < 0 && (uVar7 & 7) != 0)) * -8) {
      mobyutil::DamageSphereAtPos
                (0x3fd99999a0000000,0x3ff0000000000000,0x3ff0000000000000,lVar10,lVar22,
                 &DAT_00492ccc,0x1000000);
    }
    dVar23 = (double)FUN_005e8588(lVar22,&g_heroPosition);
    dVar29 = ABS((double)((moby->pos).z - DAT_00969f88));
    mobyutil::GetGroundZ(0x3fe0000000000000,lVar22,0);
    if ((CollOutput.pMoby != (MobyInstance *)0x0) && ((CollOutput.pMoby)->oClass == 0x3b1)) {
      (moby->pos).x = (float)dVar32;
      (moby->pos).y = (float)dVar27;
      (moby->pos).z = (float)dVar33;
      (moby->pos).w = (float)dVar30;
    }
    bVar17 = false;
    if (((uVar15 & 1) != 0) &&
       (*(int *)((int)pvVar4 + 0x184) == (*(int *)((int)pvVar4 + 0x184) / 0xe) * 0xe)) {
      dVar25 = (double)FUN_005e8588((int)pvVar4 + 0xf0,lVar22);
      bVar17 = dVar25 < (double)*(float *)((int)pvVar4 + 0x40);
      if (bVar17) {
        dVar25 = (double)FUN_005e8588(&g_heroPosition,lVar22);
        *(float *)((int)pvVar4 + 0x188) = (float)dVar25;
      }
      FUN_005e7e98((int)pvVar4 + 0xf0,lVar22);
    }
    if ((uVar15 & 0x20) != 0) {
      (moby->pos).x = (float)dVar32;
      (moby->pos).y = (float)dVar27;
      (moby->pos).z = (float)dVar33;
      (moby->pos).w = (float)dVar30;
      moby->state = '\x04';
    }
    if ((bVar17 || dVar23 < dVar24) || (1.75 < dVar29)) {
      FUN_005e7e98(pvVar4,lVar22);
      moby->setByGroup = '\x02';
    }
  }
  else {
    if (bVar2 < 2) goto LAB_004936b8;
    if (bVar2 < 3) {
      dVar23 = (double)FUN_005e8588(pvVar4,&g_heroPosition);
      if ((((*(short *)((int)pvVar4 + 400) == 0) && (1.7999999523162842 < dVar23)) ||
          ((*(short *)((int)pvVar4 + 400) != 0 &&
           ((double)(*(float *)((int)pvVar4 + 0x188) + 0.5) < dVar23)))) && (dVar30 < 1.75)) {
        moby->setByGroup = '\0';
      }
      if (moby->animationId != '\0') {
        uVar31 = idol::GetAnimDuration(7);
        mobyutil::MB_SetAnimation(lVar10,0,0,uVar31);
      }
      uVar31 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                            (double)(g_heroPosition.y - (moby->pos).y));
      mobyutil::OrganicDeltAngSpeed
                (uVar31,(double)(DAT_0071f40c * 0.05),(double)(DAT_0071f40c * 0.3),
                 (double)(mobyutil::g_FrameTime * 3.4906585),lVar10,&DAT_00720000,(int)pvVar4 + 0x44
                );
    }
  }
  *(int *)((int)pvVar4 + 0x184) = *(int *)((int)pvVar4 + 0x184) + 1;
LAB_00494af4:
  iVar14 = mobyupdate_helpers::M857_00491998
                     (lVar10,(ulonglong)(LZCOUNT(moby->state - 7) << 0x20) >> 0x25 ^ 1);
  if (iVar14 != 2) {
    if (moby->state != '\x01') {
      FUN_005e7e98(auStack_220,lVar22);
      local_218 = DAT_008c7c70 + 0.02 + local_218;
      FUN_005e7e98(auStack_120,lVar22);
      dVar30 = (double)*(float *)((int)pvVar4 + 0x40);
      dVar23 = (double)*(float *)((int)pvVar4 + 0x54);
      dVar33 = 0.0;
      *(undefined4 *)((int)pvVar4 + 0x40) = 0;
      *(undefined4 *)((int)pvVar4 + 0x54) = 0;
      mobyutil::MB_UpdateNavMove
                (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar4 + 0x30),point,auStack_230);
      *(float *)((int)pvVar4 + 0x40) = (float)dVar30;
      *(float *)((int)pvVar4 + 0x54) = (float)dVar23;
      (moby->pos).z = local_118;
      dVar23 = (double)FUN_005e8548(auStack_120,lVar22);
      if (dVar23 <= 0.004999999888241291) {
        *(undefined4 *)((int)pvVar4 + 0x284) = 0;
        FUN_005e7e98(lVar22,auStack_120);
      }
      else {
        FUN_005e81f0(auStack_110,lVar22,auStack_120);
        dVar23 = (double)FUN_005e8030(auStack_110);
        if (dVar23 < 0.25) {
          FUN_005e7f98(auStack_110,auStack_110);
        }
        FUN_005e7e98(lVar22,auStack_120);
        dVar30 = (double)(mobyutil::g_FrameTime * 3.0);
        dVar23 = (double)FUN_005e8030(auStack_110);
        local_bc[0] = (float)-dVar23;
        fVar37 = mobyutil::AccelDelt((float)dVar33,DAT_0071f40c * 0.025,DAT_0071f40c * 0.3,
                                     (float)dVar30,local_bc,0x720000,(float *)((int)pvVar4 + 0x284))
        ;
        dVar30 = (double)FUN_005e8030((double)fVar37,auStack_110);
        dVar23 = (double)*(float *)((int)pvVar4 + 0x284);
        if (dVar30 < (double)*(float *)((int)pvVar4 + 0x284)) {
          *(float *)((int)pvVar4 + 0x284) = (float)dVar30;
          dVar23 = dVar30;
        }
        if (dVar23 < dVar30) {
          FUN_005e7f98(auStack_110,auStack_110);
        }
        FUN_005e7f54(lVar22,lVar22,auStack_110);
      }
      if (moby->state != '\t') {
        if (iVar14 == 0) {
          dVar33 = (double)(moby->pos).z;
          iVar14 = 0;
          dVar30 = 0.0009765625;
          dVar23 = 0.5235987901687622;
          do {
            FUN_005e7e98(auStack_100,lVar22);
            local_f8 = local_f8 + *(float *)((int)pvVar4 + 0x34);
            dVar27 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)pvVar4 + 0x30));
            iVar16 = collproc::CollSphere((double)(float)(dVar27 * dVar30),auStack_100);
            if (iVar16 == 0) break;
            dVar27 = (double)CollOutput.normal.z;
            uVar31 = FUN_005e7ebc(0xa10980);
            dVar27 = (double)FUN_005e8338(dVar27,uVar31);
            if (dVar23 < dVar27) {
              FUN_005e7e98(lVar22,0xa10970);
              (moby->pos).z = (moby->pos).z - *(float *)((int)pvVar4 + 0x34);
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < 6);
          (moby->pos).z = (float)dVar33;
          dVar23 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar22,0);
          if (*(float *)((int)pvVar4 + 0x3c) <= ABS((float)(dVar28 - dVar23))) {
            (moby->pos).x = (float)dVar36;
            (moby->pos).y = (float)dVar35;
            (moby->pos).z = (float)dVar28;
            (moby->pos).w = (float)dVar34;
            *(undefined4 *)((int)pvVar4 + 0x284) = 0;
          }
        }
        fVar37 = -(DAT_0071f418 * 7.0 - *(float *)((int)pvVar4 + 0x48));
        *(float *)((int)pvVar4 + 0x48) = fVar37;
        if (fVar37 < mobyutil::g_FrameTime * -8.0) {
          *(float *)((int)pvVar4 + 0x48) = mobyutil::g_FrameTime * -8.0;
        }
        dVar30 = 0.25;
        (moby->pos).z = (moby->pos).z + 0.25;
        dVar23 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar22,0);
        fVar37 = (float)((double)(moby->pos).z - dVar30);
        dVar30 = (double)fVar37;
        (moby->pos).z = fVar37;
        if (dVar23 <= dVar30) {
          if ((dVar23 < dVar30) &&
             (fVar37 = (float)(dVar30 + (double)*(float *)((int)pvVar4 + 0x48)),
             (moby->pos).z = fVar37, (double)fVar37 < dVar23)) {
            (moby->pos).z = (float)dVar23;
          }
        }
        else {
          mobyutil::AccelDelt((float)dVar23,DAT_0071f40c * 0.04,DAT_0071f40c * 0.3,
                              mobyutil::g_FrameTime * 1.5,&(moby->pos).z,0x492ccc,
                              (float *)((int)pvVar4 + 0x288));
          *(undefined4 *)((int)pvVar4 + 0x48) = 0;
        }
      }
      fVar6 = (moby->pos).z;
      uVar15 = (int)fVar6 >> 0x1f;
      iVar14 = (uVar15 >> 1 ^ (uint)fVar6) - uVar15;
      if ((((moby->pos).z < *(float *)((int)pvVar4 + 0xe8) - 5.0) ||
          (fVar6 = (moby->pos).x, uVar15 = (int)fVar6 >> 0x1f,
          iVar16 = (uVar15 >> 1 ^ (uint)fVar6) - uVar15, iVar16 < 0x40000000)) ||
         ((0x447f4000 < iVar16 ||
          (((fVar6 = (moby->pos).y, uVar15 = (int)fVar6 >> 0x1f,
            iVar16 = (uVar15 >> 1 ^ (uint)fVar6) - uVar15,
            0x447f4000 < iVar16 || iVar16 < 0x40000000 || (iVar14 < 0x40000000)) ||
           (0x447f4000 < iVar14)))))) {
        FUN_005e7e98(lVar22,(int)pvVar4 + 0xe0);
        moby->state = '\x04';
        return;
      }
    }
    pMVar21 = (MobyInstance *)0x0;
    if ((CollOutput.pMoby != (MobyInstance *)0x0) && (0 < CollOutput.poly)) {
      pMVar21 = CollOutput.pMoby;
    }
    *(MobyInstance **)((int)pvVar4 + 0x19c) = pMVar21;
    local_210 = (moby->pos).x;
    local_20c = (moby->pos).y;
    local_204 = (moby->pos).w;
    local_1f8 = (moby->pos).z;
    local_208 = local_1f8 - 2.0;
    if (local_208 < 0.5) {
      local_208 = 0.5;
    }
    local_1f8 = local_1f8 + 1.0;
    local_200 = local_210;
    local_1fc = local_20c;
    local_1f4 = local_204;
    iVar14 = collproc::CollLine(&local_200,&local_210,0,lVar10,0);
    if (((iVar14 != 0) && (CollOutput.pMoby != (MobyInstance *)0x0)) &&
       (((CollOutput.pMoby)->oClass == GADGEBOT_0359 || (CollOutput.pMoby)->oClass == PLATFORM_0409
        || (bVar17 = mobyutil::MB_isCrate(CollOutput.pMoby), bVar17)))) {
      (moby->pos).x = (float)dVar36;
      (moby->pos).y = (float)dVar35;
      (moby->pos).z = (float)dVar28;
      (moby->pos).w = (float)dVar34;
    }
    if ((moby->enabled != '\0') && (dVar23 = (double)FUN_005e8548(lVar22,0x951500), dVar23 < 17.0))
    {
      mobyutil::MB_SetZBoundsFromGround(lVar10);
      moby->shadow = '\r';
    }
    if (moby->enabled != '\0') {
      mobyupdate_helpers::M857_00490cb8(lVar10);
    }
    *(undefined4 *)((int)pvVar4 + 0x2f0) = *(undefined4 *)((int)pvVar4 + 0x2e0);
    *(undefined4 *)((int)pvVar4 + 0x2f4) = *(undefined4 *)((int)pvVar4 + 0x2e4);
    *(undefined4 *)((int)pvVar4 + 0x2f8) = *(undefined4 *)((int)pvVar4 + 0x2e8);
    *(undefined4 *)((int)pvVar4 + 0x2fc) = *(undefined4 *)((int)pvVar4 + 0x2ec);
    *(f32 *)((int)pvVar4 + 0x2e0) = (moby->pos).x;
    *(f32 *)((int)pvVar4 + 0x2e4) = (moby->pos).y;
    *(f32 *)((int)pvVar4 + 0x2e8) = (moby->pos).z;
    *(f32 *)((int)pvVar4 + 0x2ec) = (moby->pos).w;
  }
  return;
}



//==== 00495208  ns=mobyupdate_helpers  size=0x288
// sig: undefined M859_00495208(void)
// callers(1): 00495490 FUN_00495490
// callees(1): 005026a0 fastfunc::FastSubRots

void mobyupdate_helpers::M859_00495208
               (double param_1,int param_2,int param_3,int param_4,int *param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong *puVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  ulonglong in_f31;
  double dVar20;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar12 = uVar11 - 0xd0;
  puVar7 = (ulonglong *)lVar12;
  *puVar7 = uVar11;
  puVar7[0x1c] = in_LR;
  puVar7[0x19] = in_f31;
  fVar1 = *(float *)(param_2 + 0x14);
  fVar2 = *(float *)(param_4 + 0x14);
  fVar3 = *(float *)(param_2 + 0x10);
  fVar6 = fVar1 - fVar2;
  fVar4 = *(float *)(param_4 + 0x10);
  puVar7[0x16] = unaff_r29;
  puVar7[0x15] = unaff_r28;
  fVar5 = fVar3 - fVar4;
  puVar7[0x17] = unaff_r30;
  puVar7[0x18] = unaff_r31;
  dVar20 = (double)SQRT(fVar5 * fVar5 + fVar6 * fVar6);
  if (dVar20 <= param_1) {
    fVar4 = fVar4 - fVar3;
    fVar2 = fVar2 - fVar1;
    fVar6 = ABS(fVar4);
    fVar5 = ABS(fVar2);
    *(float *)(puVar7 + 0xe) = fVar4;
    *(float *)((int)puVar7 + 0x74) = fVar2;
    *(float *)(puVar7 + 0xf) = fVar6 - fVar5;
    fVar1 = 0.0;
    fVar2 = *(float *)(param_2 + 0x48);
    uVar15 = (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar7 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar7 + 0x74) >> 0x1d) & 4;
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
    fVar4 = ABS(*(float *)(puVar7 + 0xe));
    if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
      fVar4 = fVar5;
    }
    fVar5 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    fVar8 = ABS(*(float *)((int)puVar7 + 0x74));
    if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
      fVar8 = fVar6;
    }
    if (0.0 < fVar4) {
      lVar16 = uVar11 - 0xc0;
      lVar13 = uVar11 - 0x44;
      lVar14 = uVar11 - 0x54;
      lVar18 = 2;
      fVar4 = (fVar8 - fVar4) / (fVar8 + fVar4);
      fVar6 = fVar4 * fVar4;
      *(float *)(puVar7 + 0x11) = fVar4;
      *(float *)(puVar7 + 0x10) = fVar4;
      *(float *)((int)puVar7 + 0x84) = fVar4;
      *(float *)((int)puVar7 + 0x7c) = fVar4;
      fVar4 = fVar6 * fVar6;
      *(float *)(puVar7 + 0x10) = *(float *)(puVar7 + 0x10) * fVar6;
      *(float *)((int)puVar7 + 0x84) = *(float *)((int)puVar7 + 0x84) * fVar4;
      *(float *)(puVar7 + 0x11) = *(float *)(puVar7 + 0x11) * fVar4 * fVar6;
      do {
        *(float *)((int)lVar16 + 0x7c) = *(float *)((int)lVar16 + 0x6c) * fVar4 * fVar4;
        iVar9 = (int)lVar14;
        lVar14 = lVar14 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar13 + 4) = *(float *)(iVar9 + 4) * fVar4 * fVar4;
        lVar13 = lVar13 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar16 = uVar11 - 0x54;
      lVar18 = 4;
      pfVar17 = (float *)&DAT_007358e0;
      lVar13 = lVar16;
      lVar14 = lVar12;
      do {
        fVar4 = *pfVar17;
        fVar6 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar14 + 0x7c) = *(float *)((int)lVar14 + 0x7c) * fVar4;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar6;
        lVar13 = lVar13 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar13 = 2;
      do {
        iVar9 = (int)lVar12;
        iVar10 = (int)lVar16;
        lVar12 = lVar12 + 0x10;
        lVar16 = lVar16 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar9 + 0x7c) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                *(float *)(iVar10 + 0xc);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar3 + fVar5;
    }
    dVar19 = (double)fastfunc::FastSubRots(fVar2,fVar1);
    fVar1 = (float)(dVar19 * 5.0 + dVar20);
    if (param_4 == param_3) {
      fVar1 = fVar1 - 2.0;
    }
    if (fVar1 < *param_6) {
      *param_5 = param_4;
      *param_6 = fVar1;
    }
  }
  return;
}



//==== 00495490  ns=Global  size=0x184
// sig: undefined FUN_00495490(void)
// callers(6): 001f6028 mobyupdate_unsorted::UpdateMoby_1197; 002113b8 mobyupdate_helpers::M1229_002113b8; 0047aa38 mobyupdate_helpers::M827_0047aa38; 00497300 mobyupdate_unsorted::UpdateMoby_860; 00497ff8 mobyupdate_unsorted::UpdateMoby_861; 004993b0 mobyupdate_unsorted::UpdateMoby_862
// callees(1): 00495208 mobyupdate_helpers::M859_00495208

void FUN_00495490(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  
  if (DAT_008c7c74 != worldUpdateTime) {
    iVar3 = 0;
    DAT_008c7c74 = worldUpdateTime;
    DAT_010e04a8 = 0;
    if (DAT_00a49344 != 0) {
      iVar4 = 0;
      iVar5 = 0;
      iVar2 = DAT_00a49344;
      do {
        bVar1 = *(short *)(iVar2 + 0xa6) != 0x359;
        if ((!bVar1) &&
           ((bVar1 || ((1 < *(byte *)(iVar2 + 0x20) && (*(byte *)(iVar2 + 0x20) != 9)))))) {
          iVar3 = iVar3 + 1;
          *(int *)((int)&DAT_010e03e0 + iVar4) = iVar2;
          iVar4 = iVar4 + 4;
          DAT_010e04a8 = iVar3;
        }
        iVar2 = *(int *)((int)&DAT_00a49348 + iVar5);
        iVar5 = iVar5 + 4;
      } while (iVar2 != 0);
    }
  }
  if (0 < DAT_010e04a8) {
    iVar3 = 0;
    puVar6 = &DAT_010e03e0;
    do {
      mobyupdate_helpers::M859_00495208(param_1,param_2,*param_3,*puVar6,local_2c,local_30);
      iVar3 = iVar3 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar3 < DAT_010e04a8);
  }
  mobyupdate_helpers::M859_00495208(param_1,param_2,*param_3,g_heroMobyPtr,local_2c,local_30);
  *param_3 = 0;
  return;
}



//==== 00495620  ns=mobyupdate_helpers  size=0x134
// sig: undefined M859_00495620(void)
// callers(0): 
// callees(3): 0010466c mobyutil::MB_GetNextMobyInGroup; 00104800 mobyutil::MB_GetFirstMobyInGroup; 00119028 mobyutil::MB_DrawGlowFX
// strings: 0096c074: 'None'

void mobyupdate_helpers::M859_00495620(int param_1)

{
  float fVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  double dVar5;
  undefined8 uVar6;
  MobyInstance *local_40 [4];
  
  fVar1 = 0.057;
  if (Cheats[3] != '\0') {
    fVar1 = 0.114;
  }
  dVar5 = (double)fVar1;
  mobyutil::MB_GetFirstMobyInGroup(local_40,(uint)*(byte *)(param_1 + 0x21),'\0','\0');
  if (local_40[0] != (MobyInstance *)0x0) {
    uVar6 = 0x3fb47ae140000000;
    do {
      if ((local_40[0]->enabled != '\0') &&
         (pvVar2 = local_40[0]->pVar, local_40[0]->oClass == *(MOBY_OCLASSES *)(param_1 + 0xa6))) {
        iVar3 = 0;
        pvVar4 = pvVar2;
        do {
          mobyutil::MB_DrawGlowFX
                    (dVar5,uVar6,(int)pvVar4 + 0x140,*(undefined4 *)((int)pvVar2 + 0x290));
          iVar3 = iVar3 + 1;
          pvVar4 = (void *)((int)pvVar4 + 0x10);
        } while (iVar3 < 3);
      }
      mobyutil::MB_GetNextMobyInGroup(local_40,local_40[0],'\0','\0');
    } while (local_40[0] != (MobyInstance *)0x0);
  }
  return;
}



//==== 00495754  ns=mobyupdate_helpers  size=0x14
// sig: undefined M859_00495754(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M859_00495754(void)

{
  DAT_008c7cc4 = 0x10000;
  return;
}



//==== 00495778  ns=Global  size=0x4dc
// sig: undefined FUN_00495778(void)
// callers(2): 0041fb90 mobyupdate_unsorted::UpdateMoby_691; 00497300 mobyupdate_unsorted::UpdateMoby_860
// callees(4): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fddc0 mobyutil::MB_SetAnimation; 00502758 fastfunc::FastDoubleToInt

MobyInstance *
FUN_00495778(double param_1,double param_2,double param_3,float param_4,f32 *param_5,float *param_6,
            undefined2 param_7,float param_8)

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
  undefined2 uVar15;
  ulonglong uVar16;
  longlong lVar17;
  float *pfVar19;
  longlong lVar18;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0x120;
  puVar6 = (ulonglong *)lVar13;
  *puVar6 = uVar11;
  puVar6[0x26] = in_LR;
  puVar6[0x21] = in_f29;
  puVar6[0x22] = in_f30;
  puVar6[0x23] = in_f31;
  puVar6[0x20] = unaff_r31;
  puVar6[0x1c] = unaff_r27;
  puVar6[0x1d] = unaff_r28;
  puVar6[0x1e] = unaff_r29;
  puVar6[0x1f] = unaff_r30;
  puVar6[0x1b] = unaff_r26;
  puVar6[0x1a] = unaff_r25;
  pMVar14 = mobyfunc::CreateMoby(0x35b);
  if (pMVar14 != (MobyInstance *)0x0) {
    pMVar14->updateDistance = -1;
    pMVar14->drawDistance = 0x7f;
    pMVar14->enabled = '\x01';
    fVar9 = 0.0;
    (pMVar14->rotation).x = 0.0;
    fVar4 = param_6[2];
    pfVar5 = (float *)pMVar14->pVar;
    fVar2 = ABS(param_6[2]);
    fVar3 = SQRT(*param_6 * *param_6 + param_6[1] * param_6[1]);
    fVar1 = ABS(fVar3);
    *(float *)((int)puVar6 + 0x74) = fVar3;
    *(float *)(puVar6 + 0xf) = fVar1 - fVar2;
    uVar16 = (ulonglong)(*(uint *)((int)puVar6 + 0x74) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0xf) >> 0x1e) & 2 | (ulonglong)((uint)fVar4 >> 0x1d) & 4
    ;
    fVar4 = ABS(*(float *)((int)puVar6 + 0x74));
    if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
      fVar4 = fVar2;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
    if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    fVar10 = fVar9;
    if (0.0 < fVar4) {
      lVar12 = uVar11 - 0x110;
      lVar17 = uVar11 - 0x84;
      lVar18 = uVar11 - 0x74;
      lVar20 = 2;
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
        iVar7 = (int)lVar17;
        lVar12 = lVar12 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar7 + 4) * fVar4 * fVar4;
        lVar18 = lVar18 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar18 = uVar11 - 0x84;
      pfVar19 = (float *)&DAT_007358e0;
      lVar20 = 4;
      lVar12 = lVar13;
      lVar17 = lVar18;
      do {
        fVar4 = *pfVar19;
        fVar2 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar12 + 0x9c) = *(float *)((int)lVar12 + 0x9c) * fVar4;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar2;
        lVar17 = lVar17 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar17 = 2;
      lVar12 = lVar13;
      fVar4 = fVar9;
      do {
        iVar7 = (int)lVar12;
        lVar12 = lVar12 + 0x10;
        iVar8 = (int)lVar18;
        lVar18 = lVar18 + 0x10;
        fVar4 = fVar4 + *(float *)(iVar7 + 0x9c) + *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                *(float *)(iVar8 + 0xc);
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      fVar10 = (fVar4 + 0.7853982) * fVar3 + fVar1;
    }
    (pMVar14->rotation).y = -fVar10;
    fVar4 = *param_6;
    fVar3 = param_6[1];
    fVar1 = ABS(*param_6);
    fVar2 = ABS(param_6[1]);
    *(float *)(puVar6 + 0xe) = fVar1 - fVar2;
    uVar16 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1e) & 2 | (ulonglong)((uint)fVar3 >> 0x1d) & 4
    ;
    fVar4 = fVar1;
    if (*(float *)(puVar6 + 0xe) - 0.0 < 0.0) {
      fVar4 = fVar2;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
    if (*(float *)(puVar6 + 0xe) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    if (0.0 < fVar4) {
      lVar12 = uVar11 - 0x110;
      lVar17 = uVar11 - 0xa4;
      lVar18 = uVar11 - 0x94;
      lVar20 = 2;
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
        iVar7 = (int)lVar17;
        lVar12 = lVar12 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar7 + 4) * fVar4 * fVar4;
        lVar18 = lVar18 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar18 = uVar11 - 0xa4;
      pfVar19 = (float *)&DAT_007358e0;
      lVar20 = 4;
      lVar12 = lVar13;
      lVar17 = lVar18;
      do {
        fVar4 = *pfVar19;
        fVar2 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar12 + 0x7c) = *(float *)((int)lVar12 + 0x7c) * fVar4;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar2;
        lVar17 = lVar17 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar12 = 2;
      do {
        iVar7 = (int)lVar13;
        iVar8 = (int)lVar18;
        lVar13 = lVar13 + 0x10;
        lVar18 = lVar18 + 0x10;
        fVar9 = fVar9 + *(float *)(iVar7 + 0x7c) + *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                *(float *)(iVar8 + 0xc);
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      fVar9 = (fVar9 + 0.7853982) * fVar3 + fVar1;
    }
    (pMVar14->rotation).z = fVar9;
    (pMVar14->pos).x = *param_5;
    (pMVar14->pos).y = param_5[1];
    (pMVar14->pos).z = param_5[2];
    (pMVar14->pos).w = param_5[3];
    *pfVar5 = *param_6;
    pfVar5[1] = param_6[1];
    pfVar5[2] = param_6[2];
    fVar4 = param_6[3];
    pfVar5[5] = param_8;
    pfVar5[3] = fVar4;
    *(undefined2 *)((int)pfVar5 + 0x12) = param_7;
    pfVar5[6] = (float)param_2;
    uVar15 = fastfunc::FastDoubleToInt
                       ((double)(float)(param_1 /
                                       (double)SQRT(param_6[2] * param_6[2] +
                                                    *param_6 * *param_6 + param_6[1] * param_6[1])))
    ;
    *(undefined2 *)(pfVar5 + 4) = uVar15;
    puVar6[0x18] = (longlong)(int)(animationSpeed * 5.5);
    mobyutil::MB_SetAnimation(pMVar14,1,0,*(undefined4 *)((int)puVar6 + 0xc4));
    pMVar14->modeBits = DRAW_TRANSPARENT_WEIRD;
    pfVar5[8] = param_4;
    pfVar5[7] = (float)param_3;
    mobyfunc::UpdateMobyTransform(pMVar14);
  }
  return pMVar14;
}



//==== 00495c60  ns=mobyupdate_helpers  size=0x38
// sig: undefined M859_00495c60(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M859_00495c60(double param_1,int param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (double)*(float *)(param_2 + 0x18);
  dVar1 = param_1;
  if ((float)(param_1 - dVar2) - -0.1 < 0.0) {
    dVar1 = (double)(float)(dVar2 - 0.10000000149011612);
  }
  if (0.1 - (float)(param_1 - dVar2) < 0.0) {
    dVar1 = (double)(float)(dVar2 + 0.10000000149011612);
  }
  *(float *)(param_2 + 0x18) = (float)dVar1;
  return;
}



//==== 00495cd0  ns=mobyupdate_unsorted  size=0x72c
// sig: undefined UpdateMoby_859(MobyInstance * moby)
// callers(0): 
// callees(9): 00057820 collproc::CollLine; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 0010581c mobyutil::SetCollDamIn; 001118d8 mobyutil::MB_getTarget; 00128248 partupd::SpawnPart_27; 004fffb4 fastfunc::FastDecTimerS16; 00500608 fastfunc::FastVecNormalize

/* Moby 859 */

void mobyupdate_unsorted::UpdateMoby_859(MobyInstance *moby)

{
  bool bVar1;
  char cVar2;
  float fVar3;
  short sVar4;
  float *pfVar5;
  f32 fVar6;
  f32 fVar7;
  f32 fVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  MobyInstance *pMVar15;
  longlong lVar16;
  int iVar18;
  undefined8 uVar17;
  int iVar19;
  int iVar20;
  int iVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined8 uVar27;
  double dVar28;
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  undefined1 local_150 [32];
  undefined1 local_130 [16];
  undefined4 local_120 [4];
  undefined1 auStack_110 [48];
  undefined1 auStack_e0 [8];
  float local_d8;
  int local_a0;
  
  lVar16 = (longlong)(int)moby;
  pfVar5 = (float *)moby->pVar;
  (moby->pos).x = (moby->pos).x + *pfVar5;
  (moby->pos).y = (moby->pos).y + pfVar5[1];
  (moby->pos).z = (moby->pos).z + pfVar5[2];
  mobyutil::MB_getTarget(0x4034000000000000,lVar16,&DAT_00495c98,auStack_e0);
  sVar4 = *(short *)((int)pfVar5 + 0x12);
  if (sVar4 < 2) {
    if (0 < sVar4) {
      fVar3 = (moby->pos).z;
      fVar13 = pfVar5[7] - fVar3;
      fVar14 = pfVar5[7];
      if (fVar13 - -0.1 < 0.0) {
        fVar14 = fVar3 - 0.1;
      }
      if (0.1 - fVar13 < 0.0) {
        fVar14 = fVar3 + 0.1;
      }
      (moby->pos).z = fVar14;
    }
  }
  else if (sVar4 < 3) {
    dVar28 = 0.10000000149011612;
    iVar18 = collproc::CollLine(local_160,local_150,2,lVar16,0);
    if (iVar18 == 0) {
      dVar23 = (double)(moby->pos).z;
      dVar22 = (double)(float)(dVar23 - dVar28);
      if (dVar28 - (double)(float)((double)(float)(dVar23 - dVar28) - dVar23) < 0.0) {
        dVar22 = (double)(float)(dVar23 + dVar28);
      }
      (moby->pos).z = (float)dVar22;
    }
    else {
      dVar23 = (double)(moby->pos).z;
      dVar24 = (double)(float)((double)(CollOutput.ip.z + pfVar5[7]) - dVar23);
      dVar22 = (double)(CollOutput.ip.z + pfVar5[7]);
      if (dVar24 - -0.10000000149011612 < 0.0) {
        dVar22 = (double)(float)(dVar23 - dVar28);
      }
      if (dVar28 - dVar24 < 0.0) {
        dVar22 = (double)(float)(dVar23 + dVar28);
      }
      (moby->pos).z = (float)dVar22;
    }
  }
  else if ((sVar4 < 4) && (local_a0 != 0)) {
    fVar3 = (moby->pos).z;
    fVar13 = (local_d8 + pfVar5[7]) - fVar3;
    fVar14 = local_d8 + pfVar5[7];
    if (fVar13 - -0.1 < 0.0) {
      fVar14 = fVar3 - 0.1;
    }
    if (0.1 - fVar13 < 0.0) {
      fVar14 = fVar3 + 0.1;
    }
    (moby->pos).z = fVar14;
  }
  dVar28 = 1.0;
  mobyutil::SetCollDamIn((double)pfVar5[6],auStack_110,lVar16,0x10001);
  iVar18 = fastfunc::FastDecTimerS16(pfVar5 + 4);
  if (iVar18 == 0) {
    iVar18 = collproc::CollLine(local_170,lVar16 + 0x10,0,pfVar5[8],auStack_110);
    pMVar15 = CollOutput.pMoby;
    fVar6 = (moby->pos).x;
    fVar7 = (moby->pos).y;
    fVar8 = (moby->pos).z;
    uVar10 = (int)fVar7 >> 0x1f;
    uVar11 = (int)fVar6 >> 0x1f;
    uVar12 = (int)fVar8 >> 0x1f;
    iVar20 = (uVar10 >> 1 ^ (uint)fVar7) - uVar10;
    iVar19 = (uVar11 >> 1 ^ (uint)fVar6) - uVar11;
    iVar21 = (uVar12 >> 1 ^ (uint)fVar8) - uVar12;
    if ((iVar18 == 0) ||
       ((bVar1 = CollOutput.pMoby != (MobyInstance *)0x0, bVar1 &&
        ((CollOutput.pMoby)->oClass == GADGEBOT_0359)))) {
      if ((iVar20 < 0x40000000 || iVar19 < 0x40000000) ||
         ((((iVar21 < 0x40000000 || (0x43ff0000 < iVar20 || 0x43ff0000 < iVar19)) ||
           (0x43ff0000 < iVar21)) ||
          (fVar13 = (moby->pos).y - GameCamera.posY, fVar3 = (moby->pos).x - GameCamera.posX,
          80.0 < SQRT(fVar3 * fVar3 + fVar13 * fVar13))))) {
        mobyfunc::DeleteMoby(moby);
      }
    }
    else {
      (moby->pos).x = CollOutput.ip.x;
      puVar9 = (undefined1 *)pfVar5[5];
      (moby->pos).y = CollOutput.ip.y;
      (moby->pos).z = CollOutput.ip.z;
      (moby->pos).w = CollOutput.ip.w;
      if (((puVar9 != (undefined1 *)0x0) && (bVar1)) &&
         ((pMVar15 == g_heroMobyPtr &&
          ((pfVar5[8] != 0.0 &&
           (cVar2 = *(char *)((int)pfVar5[8] + 0x20), cVar2 != -3 && cVar2 != -2)))))) {
        *puVar9 = 1;
      }
      iVar18 = 0;
      dVar22 = -1.0;
      dVar23 = 3.0;
      dVar24 = 6.0;
      dVar25 = 10.5;
      dVar26 = 15.5;
      uVar27 = 0x40dd4c0000000000;
      do {
        mobyutil::MB_randRangeFloat((float)dVar22,(float)dVar28);
        mobyutil::MB_randRangeFloat((float)dVar22,(float)dVar28);
        mobyutil::MB_randRangeFloat((float)dVar22,(float)dVar28);
        fastfunc::FastVecNormalize(local_120,pfVar5,0xa10980);
        mobyutil::MB_randRangeFloat
                  ((float)((double)mobyutil::g_FrameTime * dVar23),
                   (float)((double)mobyutil::g_FrameTime * dVar24));
        uVar17 = mobyutil::MB_randRange
                           ((int)((double)animationSpeed * dVar25),
                            (int)((double)animationSpeed * dVar26));
        partupd::SpawnPart_27(uVar27,lVar16 + 0x10,local_130,0x7f2f4f6f,uVar17);
        iVar18 = iVar18 + 1;
      } while (iVar18 < 5);
      mobyfunc::DeleteMoby(moby);
    }
  }
  else {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 004963fc  ns=mobyupdate_helpers  size=0x14
// sig: undefined M859_004963fc(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M859_004963fc(void)

{
  DAT_008c7d34 = 0x10000;
  return;
}



//==== 00496420  ns=mobyupdate_helpers  size=0x388
// sig: undefined M86_00496420(void)
// callers(1): 00496800 mobyupdate_unsorted::UpdateMoby_86
// callees(0): 

longlong mobyupdate_helpers::M86_00496420
                   (double param_1,int param_2,int *param_3,longlong param_4,longlong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  longlong lVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  iVar5 = (int)param_4;
  iVar13 = *param_3 + -1;
  iVar4 = iVar5 + (int)param_5;
  lVar12 = (longlong)
           (int)(iVar4 + ((uint)((LZCOUNT(-iVar5) << 0x3a) >> 0x3f) &
                         (iVar13 + ((uint)(-param_5 >> 0x3f) & (iVar5 + 1) - iVar13)) - iVar4));
  iVar4 = (int)(param_4 << 4);
  lVar12 = lVar12 + ((LZCOUNT(iVar13 - iVar5) << 0x3a) >> 0x3f &
                    ((longlong)(iVar5 + -1) + (-param_5 >> 0x3f & -(longlong)(iVar5 + -1))) - lVar12
                    );
  iVar5 = (int)lVar12;
  fVar1 = *(float *)((int)param_3 + iVar4 + 0x14);
  fVar2 = *(float *)((int)param_3 + iVar4 + 0x10);
  fVar6 = (float)param_3[iVar5 * 4 + 5] - fVar1;
  fVar7 = (float)param_3[iVar5 * 4 + 4] - fVar2;
  fVar3 = *(float *)((int)param_3 + iVar4 + 0x18);
  fVar9 = (float)param_3[iVar5 * 4 + 6] - fVar3;
  dVar14 = 0.0;
  iVar4 = param_3[iVar5 * 4 + 7];
  fVar8 = fVar9 * fVar9 + fVar7 * fVar7 + fVar6 * fVar6;
  fVar10 = SQRT(fVar8);
  dVar15 = dVar14;
  dVar18 = dVar14;
  dVar20 = dVar14;
  if (fVar10 != 0.0) {
    fVar11 = 1.0 / SQRT(fVar8);
    fVar11 = -(fVar8 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
    fVar11 = -(fVar8 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
    fVar11 = -(fVar8 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
    dVar20 = (double)(fVar7 * fVar11);
    dVar18 = (double)(fVar6 * fVar11);
    dVar15 = (double)(fVar9 * fVar11);
  }
  fVar1 = (float)(dVar18 * (double)(*(float *)(param_2 + 0x14) - fVar1) +
                 (double)(float)(dVar15 * (double)(*(float *)(param_2 + 0x18) - fVar3) +
                                (double)(float)(dVar20 * (double)(*(float *)(param_2 + 0x10) - fVar2
                                                                 ) + param_1)));
  if (fVar10 < fVar1) {
    iVar4 = iVar5 + (int)param_5;
    fVar1 = fVar1 - fVar10;
    iVar4 = iVar4 + ((uint)((LZCOUNT(-iVar5) << 0x3a) >> 0x3f) &
                    (iVar13 + ((uint)(-param_5 >> 0x3f) & (iVar5 + 1) - iVar13)) - iVar4);
    iVar4 = iVar4 + ((uint)((LZCOUNT(iVar13 - iVar5) << 0x3a) >> 0x3f) &
                    (iVar5 + -1 + ((uint)(-param_5 >> 0x3f) & -(iVar5 + -1))) - iVar4);
    fVar2 = (float)param_3[iVar4 * 4 + 5] - (float)param_3[iVar5 * 4 + 5];
    fVar3 = (float)param_3[iVar4 * 4 + 4] - (float)param_3[iVar5 * 4 + 4];
    fVar6 = (float)param_3[iVar4 * 4 + 6] - (float)param_3[iVar5 * 4 + 6];
    iVar4 = param_3[iVar4 * 4 + 7];
    fVar7 = fVar6 * fVar6 + fVar3 * fVar3 + fVar2 * fVar2;
    param_4 = lVar12;
    dVar15 = dVar14;
    dVar18 = dVar14;
    dVar20 = dVar14;
    if (SQRT(fVar7) != 0.0) {
      fVar8 = 1.0 / SQRT(fVar7);
      fVar8 = -(fVar7 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
      fVar8 = -(fVar7 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
      fVar8 = -(fVar7 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
      dVar15 = (double)(fVar6 * fVar8);
      dVar18 = (double)(fVar2 * fVar8);
      dVar20 = (double)(fVar3 * fVar8);
    }
  }
  iVar5 = (int)(param_4 << 4);
  fVar2 = SQRT((float)(dVar15 * dVar15 +
                      (double)(float)(dVar20 * dVar20 + (double)(float)(dVar18 * dVar18))));
  dVar16 = (double)(fVar1 / fVar2);
  dVar17 = dVar14;
  if (0.0 - fVar2 < 0.0) {
    dVar17 = (double)(float)(dVar20 * dVar16);
  }
  dVar19 = dVar14;
  if (0.0 - fVar2 < 0.0) {
    dVar19 = (double)(float)(dVar18 * dVar16);
  }
  if (0.0 - fVar2 < 0.0) {
    dVar14 = (double)(float)(dVar15 * dVar16);
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar17 = (double)(float)(dVar20 * dVar16);
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar19 = (double)(float)(dVar18 * dVar16);
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar14 = (double)(float)(dVar15 * dVar16);
  }
  *(float *)(param_2 + 0x10) = (float)(dVar17 + (double)*(float *)((int)param_3 + iVar5 + 0x10));
  *(float *)(param_2 + 0x14) = (float)(dVar19 + (double)*(float *)((int)param_3 + iVar5 + 0x14));
  fVar1 = *(float *)((int)param_3 + iVar5 + 0x18);
  *(int *)(param_2 + 0x1c) = iVar4;
  *(float *)(param_2 + 0x18) = (float)(dVar14 + (double)fVar1);
  return param_4;
}



//==== 00496800  ns=mobyupdate_unsorted  size=0x744
// sig: undefined UpdateMoby_86(MobyInstance * moby)
// callers(0): 
// callees(9): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 00496420 mobyupdate_helpers::M86_00496420; 004d0fd0 FUN_004d0fd0; 004d2438 FUN_004d2438; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble

/* Moby 86 */

void mobyupdate_unsorted::UpdateMoby_86(MobyInstance *moby)

{
  float *pfVar1;
  void *pvVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  MobyInstance *pMVar8;
  int iVar9;
  float *pfVar10;
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
  undefined8 uVar38;
  double dVar39;
  
  pfVar1 = (float *)moby->pVar;
  if (DAT_010e04b0 == '\0') {
    dVar12 = (double)fastfunc::FastIntToDouble(pfVar1[0x2a]);
    DAT_010e04b0 = '\x01';
    DAT_008c7d5c = (float)(dVar12 * 2.072999954223633);
  }
  if (pfVar1[0x25] == 0.0) {
    *pfVar1 = (moby->pos).x;
    pfVar1[1] = (moby->pos).y;
    pfVar1[2] = (moby->pos).z;
    fVar7 = (moby->pos).w;
    pfVar1[0x26] = 0.0;
    pfVar1[3] = fVar7;
  }
  else if (pfVar1[0x2a] == 0.0) {
    fVar7 = 0.0;
    for (iVar9 = MobyUpdateChainStart; iVar9 != 0; iVar9 = *(int *)(iVar9 + 0x28)) {
      if ((*(byte *)(iVar9 + 0x20) < 0x80) && (*(short *)(iVar9 + 0xa6) == 0x55)) {
        fVar7 = (float)((int)fVar7 + 1);
        pfVar1[0x2a] = fVar7;
      }
    }
    dVar12 = (double)fastfunc::FastIntToDouble(fVar7);
    DAT_008c7d5c = (float)(dVar12 * 2.072999954223633);
  }
  if (pfVar1[0x28] == -NAN) {
    dVar12 = (double)fastfunc::FastWrapRot(pfVar1[0x26],DAT_0071f408 * 0.0034906587);
    fVar7 = (float)(dVar12 + 1.570796251296997);
    fVar3 = 3.1415925 - fVar7;
    if (fVar7 - (3.1415925 - fVar7) < 0.0) {
      fVar3 = fVar7;
    }
    fVar5 = -3.1415925 - fVar7;
    if ((-3.1415925 - fVar7) - fVar3 < 0.0) {
      fVar5 = fVar3;
    }
    pfVar1[0x26] = (float)dVar12;
    fVar7 = fVar5 * fVar5;
    fVar3 = fVar7 * fVar7 * fVar5;
    fVar6 = fVar7 * fVar3;
    (moby->pos).x =
         pfVar1[0x27] *
         (fVar7 * fVar6 * 2.601887e-06 +
         fVar6 * -0.0001980741 + fVar3 * 0.0083330255 + fVar7 * fVar5 * -0.16666657 + fVar5) +
         *pfVar1;
    fVar7 = pfVar1[0x26];
    fVar3 = 3.1415925 - fVar7;
    if (fVar7 - (3.1415925 - fVar7) < 0.0) {
      fVar3 = fVar7;
    }
    fVar5 = -3.1415925 - fVar7;
    if ((-3.1415925 - fVar7) - fVar3 < 0.0) {
      fVar5 = fVar3;
    }
    fVar7 = fVar5 * fVar5;
    fVar3 = fVar7 * fVar7 * fVar5;
    fVar6 = fVar7 * fVar3;
    (moby->pos).y =
         pfVar1[0x27] *
         (fVar7 * fVar6 * 2.601887e-06 +
         fVar6 * -0.0001980741 + fVar3 * 0.0083330255 + fVar7 * fVar5 * -0.16666657 + fVar5) +
         pfVar1[1];
  }
  else if (pfVar1[0x25] != 0.0) {
    fVar7 = pfVar1[0x24];
    pfVar10 = pfVar1;
    fVar3 = 10000.0;
    while (0 < (int)fVar7) {
      fVar5 = (moby->pos).y - *(float *)((int)pfVar10[4] + 0x14);
      fVar6 = (moby->pos).x - *(float *)((int)pfVar10[4] + 0x10);
      fVar7 = (float)((int)fVar7 + -1);
      pfVar10 = pfVar10 + 1;
      fVar5 = SQRT(fVar6 * fVar6 + fVar5 * fVar5);
      if (fVar5 - fVar3 < 0.0) {
        fVar3 = fVar5;
      }
    }
    dVar12 = 0.0;
    if (fVar3 - 3.0 < 0.0) {
      dVar12 = (double)(3.0 - fVar3);
    }
    fVar7 = (float)mobyupdate_helpers::M86_00496420
                             (dVar12,moby,Splines[(int)pfVar1[0x28]],pfVar1[0x29],1);
    pfVar1[0x29] = fVar7;
  }
  if (pfVar1[0x25] == 0.0) {
    pfVar1[0x25] = 1.4013e-45;
    pfVar1[0x2a] = 0.0;
    if (0 < (int)pfVar1[0x24]) {
      iVar9 = 0;
      dVar12 = 0.699999988079071;
      dVar28 = 1.2999999523162842;
      dVar29 = 0.6000000238418579;
      dVar30 = 1.2000000476837158;
      dVar31 = 0.8999999761581421;
      dVar32 = 1.570796251296997;
      dVar33 = 3.141592502593994;
      dVar34 = -3.141592502593994;
      dVar35 = -0.16666656732559204;
      dVar36 = 0.008333025500178337;
      dVar37 = -0.0001980741071747616;
      dVar39 = 2.601886990305502e-06;
      pfVar10 = pfVar1;
      do {
        pfVar10[4] = 0.0;
        pMVar8 = mobyfunc::CreateMoby(BUTTERFLY);
        if (pMVar8 != (MobyInstance *)0x0) {
          pvVar2 = pMVar8->pVar;
          pfVar10[4] = (float)pMVar8;
          pMVar8->updateDistance = '\x7f';
          pMVar8->drawDistance = 0x7f;
          dVar13 = (double)mobyutil::MB_randRangeFloat((float)dVar12,(float)dVar28);
          pMVar8->scale = (float)((double)pMVar8->scale * dVar13);
          dVar13 = (double)mobyutil::MB_randRot();
          (pMVar8->rotation).z = (float)dVar13;
          dVar13 = (double)mobyutil::MB_randRangeFloat((float)dVar29,(float)dVar30);
          pMVar8->unk58 = (float)dVar13;
          *(undefined4 *)((int)pvVar2 + 0x1c) = 0;
          *(undefined4 *)((int)pvVar2 + 0x18) = 0;
          *(undefined4 *)((int)pvVar2 + 0x14) = 0;
          *(undefined4 *)((int)pvVar2 + 0x10) = 0;
          *(undefined2 *)((int)pvVar2 + 0x44) = 0;
          *(undefined4 *)((int)pvVar2 + 0x4c) = 0x41200000;
          (pMVar8->pos).x = (moby->pos).x;
          (pMVar8->pos).y = (moby->pos).y;
          (pMVar8->pos).z = (moby->pos).z;
          (pMVar8->pos).w = (moby->pos).w;
          dVar14 = (double)mobyutil::MB_randRot();
          dVar15 = (double)mobyutil::MB_randRot();
          dVar16 = (double)mobyutil::MB_randRangeFloat((float)dVar29,(float)dVar31);
          dVar17 = (double)(float)(dVar14 + dVar32);
          dVar19 = (double)(float)(dVar15 + dVar32);
          dVar13 = (double)(float)(dVar33 - dVar15);
          if (dVar15 - (double)(float)(dVar33 - dVar15) < 0.0) {
            dVar13 = dVar15;
          }
          dVar11 = (double)(float)(dVar33 - dVar14);
          if (dVar14 - (double)(float)(dVar33 - dVar14) < 0.0) {
            dVar11 = dVar14;
          }
          dVar20 = (double)(float)(dVar33 - dVar17);
          if (dVar17 - (double)(float)(dVar33 - dVar17) < 0.0) {
            dVar20 = dVar17;
          }
          dVar21 = (double)(float)(dVar33 - dVar19);
          if (dVar19 - (double)(float)(dVar33 - dVar19) < 0.0) {
            dVar21 = dVar19;
          }
          dVar18 = (double)(float)(dVar34 - dVar15);
          if ((double)(float)(dVar34 - dVar15) - dVar13 < 0.0) {
            dVar18 = dVar13;
          }
          dVar13 = (double)(float)(dVar34 - dVar14);
          if ((double)(float)(dVar34 - dVar14) - dVar11 < 0.0) {
            dVar13 = dVar11;
          }
          dVar14 = (double)(float)(dVar34 - dVar17);
          if ((double)(float)(dVar34 - dVar17) - dVar20 < 0.0) {
            dVar14 = dVar20;
          }
          dVar17 = (double)(float)(dVar18 * dVar18);
          dVar15 = (double)(float)(dVar34 - dVar19);
          if ((double)(float)(dVar34 - dVar19) - dVar21 < 0.0) {
            dVar15 = dVar21;
          }
          dVar21 = (double)(float)(dVar13 * dVar13);
          dVar20 = (double)(float)(dVar14 * dVar14);
          dVar23 = (double)(float)(dVar15 * dVar15);
          dVar25 = (double)(float)(dVar17 * (double)(float)(dVar17 * dVar18));
          dVar22 = (double)(float)(dVar21 * (double)(float)(dVar21 * dVar13));
          dVar19 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar14));
          dVar24 = (double)(float)(dVar17 * dVar25);
          dVar26 = (double)(float)(dVar21 * dVar22);
          dVar27 = (double)(float)(dVar20 * dVar19);
          dVar11 = (double)(float)(dVar23 * (double)(float)(dVar23 * dVar15));
          fVar7 = (float)((double)(float)(dVar17 * dVar24) * dVar39 +
                         (double)(float)(dVar24 * dVar37 +
                                        (double)(float)(dVar25 * dVar36 +
                                                       (double)(float)((double)(float)(dVar17 * 
                                                  dVar18) * dVar35 + dVar18))));
          dVar17 = (double)(float)(dVar23 * dVar11);
          (pMVar8->pos).y =
               (float)((double)((float)((double)(float)(dVar21 * dVar26) * dVar39 +
                                       (double)(float)(dVar26 * dVar37 +
                                                      (double)(float)(dVar22 * dVar36 +
                                                                     (double)(float)((double)(float)
                                                  (dVar21 * dVar13) * dVar35 + dVar13)))) * fVar7) *
                       dVar16 + (double)(pMVar8->pos).y);
          (pMVar8->pos).x =
               (float)((double)((float)((double)(float)(dVar20 * dVar27) * dVar39 +
                                       (double)(float)(dVar27 * dVar37 +
                                                      (double)(float)(dVar19 * dVar36 +
                                                                     (double)(float)((double)(float)
                                                  (dVar20 * dVar14) * dVar35 + dVar14)))) * fVar7) *
                       dVar16 + (double)(pMVar8->pos).x);
          (pMVar8->pos).z =
               (float)((double)(float)((double)(float)(dVar23 * dVar17) * dVar39 +
                                      (double)(float)(dVar17 * dVar37 +
                                                     (double)(float)(dVar11 * dVar36 +
                                                                    (double)(float)((double)(float)(
                                                  dVar23 * dVar15) * dVar35 + dVar15)))) * dVar16 +
                      (double)(pMVar8->pos).z);
          *(undefined4 *)((int)pvVar2 + 0x48) = 0x3f872b02;
          *(undefined2 *)((int)pvVar2 + 0x5c) = 0xffff;
          *(undefined4 *)((int)pvVar2 + 0x40) = 0x3b449ba6;
          *(undefined4 *)((int)pvVar2 + 0x50) = 0;
          *(vec4 **)((int)pvVar2 + 0x54) = &moby->pos;
          *(undefined4 *)((int)pvVar2 + 0x58) = 0;
          *(undefined2 *)((int)pvVar2 + 0x5e) = 2;
          *(undefined2 *)((int)pvVar2 + 0x60) = 0x55;
          *(undefined4 *)((int)pvVar2 + 0x70) = 0x3fd8d4fe;
          *(undefined4 *)((int)pvVar2 + 0x90) = 0x3f800000;
          *(undefined2 *)((int)pvVar2 + 0x62) = 0x1ee;
          *(undefined4 *)((int)pvVar2 + 0x74) = 0x3fd8d4fe;
          *(undefined4 *)((int)pvVar2 + 0x94) = 0x40a00000;
          mobyfunc::UpdateMobyTransform(pMVar8);
        }
        iVar9 = iVar9 + 1;
        pfVar10 = pfVar10 + 1;
      } while (iVar9 < (int)pfVar1[0x24]);
    }
  }
  else {
    iVar9 = 0;
    if (0 < (int)pfVar1[0x24]) {
      dVar12 = 1.0;
      dVar28 = 0.5;
      dVar29 = 0.05000000074505806;
      uVar38 = 0;
      dVar30 = 0.004307222086936235;
      pfVar10 = pfVar1;
      do {
        fVar3 = pfVar10[4];
        uVar4 = *(undefined4 *)((int)fVar3 + 0x78);
        fVar7 = (float)((double)(float)((double)*(float *)((int)fVar3 + 0x58) + dVar12) * dVar28);
        DAT_008c7d70 = (float)((double)((float)((double)pfVar1[0x27] * dVar30) * DAT_0071f408 *
                                       fVar7) * dVar29) * DAT_0071f40c * fVar7;
        DAT_008c7d74 = (float)((double)pfVar1[0x27] * dVar30) * DAT_0071f408 *
                       (float)((double)(float)((double)*(float *)((int)fVar3 + 0x58) + dVar12) *
                              dVar28);
        FUN_004d0fd0(pfVar1 + 4,pfVar1[0x24],fVar3,uVar4,&DAT_008c7d58);
        FUN_004d2438(uVar38,fVar3,uVar4,&DAT_008c7d58);
        iVar9 = iVar9 + 1;
        pfVar10 = pfVar10 + 1;
      } while (iVar9 < (int)pfVar1[0x24]);
    }
  }
  return;
}



//==== 00496f60  ns=mobyupdate_helpers  size=0x334
// sig: undefined M860_00496f60(void)
// callers(1): 00497300 mobyupdate_unsorted::UpdateMoby_860
// callees(3): 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010ad80 mobyutil::MB_StartKick

void mobyupdate_helpers::M860_00496f60(MobyInstance *param_1)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  ulonglong *puVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  ulonglong in_f31;
  double dVar23;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0xc0;
  puVar9 = (ulonglong *)lVar13;
  *puVar9 = uVar11;
  puVar9[0x1a] = in_LR;
  puVar9[0x17] = in_f31;
  puVar9[0x16] = unaff_r31;
  uVar1 = param_1->state;
  puVar9[0x15] = unaff_r30;
  puVar9[0x14] = unaff_r29;
  if (uVar1 != '\x05') {
    pvVar6 = param_1->pVar;
    dVar23 = 0.0;
    *(undefined4 *)((int)puVar9 + 0x74) = 0;
    iVar12 = mobyutil::MB_damage(param_1,0x10000,0);
    mobyutil::MB_HandleDamage
              (param_1,iVar12,ZEXT48(pvVar6) + 0x20,0,puVar9 + 0xe,(int)puVar9 + 0x74,0,4);
    fVar2 = *(float *)((int)puVar9 + 0x74);
    if (((iVar12 == 0) || (*(int *)(iVar12 + 0x20) == 0)) ||
       (*(short *)(*(int *)(iVar12 + 0x20) + 0xa6) != 0x35b)) {
      if ((*(int *)(puVar9 + 0xe) != 1) && (*(int *)((int)puVar9 + 0x74) != 0)) {
        *(undefined4 *)((int)pvVar6 + 0x80) = 0x200;
        *(undefined4 *)((int)pvVar6 + 0x88) = 0x3f000000;
        *(float *)((int)pvVar6 + 0x20) = *(float *)((int)pvVar6 + 0x20) - fVar2;
        fVar2 = DAT_0071f418;
        *(float *)((int)pvVar6 + 0x70) = DAT_0071f418 * 10.0;
        *(undefined1 *)((int)pvVar6 + 0x9d) = 0;
        *(undefined4 *)((int)pvVar6 + 0x84) = 0x29;
        *(float *)((int)pvVar6 + 0x74) = fVar2 * 1.5;
        fVar3 = mobyutil::g_FrameTime;
        fVar2 = mobyutil::g_FrameTime * 10.0;
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)((int)pvVar6 + 0x7c) = fVar2;
        *(float *)((int)pvVar6 + 0x78) = fVar3 * 8.0;
        uVar7 = *(uint *)(iVar12 + 0x10);
        uVar8 = *(uint *)(iVar12 + 0x14);
        dVar22 = ABS((double)*(float *)(iVar12 + 0x10));
        dVar20 = ABS((double)*(float *)(iVar12 + 0x14));
        *(float *)(puVar9 + 0xf) = (float)(dVar22 - dVar20);
        uVar14 = (ulonglong)(uVar7 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 | (ulonglong)(uVar8 >> 0x1d) & 4;
        lVar15 = uVar14 << 2;
        dVar21 = dVar22;
        if ((double)*(float *)(puVar9 + 0xf) - dVar23 < 0.0) {
          dVar21 = dVar20;
        }
        fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)lVar15);
        if ((double)*(float *)(puVar9 + 0xf) - dVar23 < 0.0) {
          dVar20 = dVar22;
        }
        fVar3 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
        if (dVar23 < dVar21) {
          lVar17 = uVar11 - 0xb0;
          lVar16 = uVar11 - 0x44;
          lVar15 = uVar11 - 0x34;
          lVar19 = 2;
          fVar4 = (float)(dVar20 - dVar21) / (float)(dVar20 + dVar21);
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
            *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x6c) * fVar4 * fVar4;
            iVar12 = (int)lVar16;
            lVar17 = lVar17 + 8;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar15 + 4) = *(float *)(iVar12 + 4) * fVar4 * fVar4;
            lVar15 = lVar15 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          lVar15 = uVar11 - 0x44;
          pfVar18 = (float *)&DAT_007358e0;
          lVar19 = 4;
          lVar16 = lVar15;
          lVar17 = lVar13;
          do {
            fVar4 = *pfVar18;
            fVar5 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x7c) * fVar4;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
            lVar16 = lVar16 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          lVar16 = 2;
          do {
            iVar12 = (int)lVar13;
            iVar10 = (int)lVar15;
            lVar13 = lVar13 + 0x10;
            lVar15 = lVar15 + 0x10;
            dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar12 + 0x7c)) +
                              *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                             *(float *)(iVar10 + 0xc));
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar2 + fVar3);
        }
        mobyutil::MB_StartKick(dVar23,param_1,ZEXT48(pvVar6) + 0x60,lVar15,5,1,0);
        *(undefined4 *)((int)pvVar6 + 0xb0) = 0x40400000;
        *(undefined4 *)((int)pvVar6 + 0xb4) = 0x40f00000;
        param_1->state = '\x05';
      }
      param_1->damage = -1;
    }
  }
  return;
}



//==== 00497300  ns=mobyupdate_unsorted  size=0x91c
// sig: undefined UpdateMoby_860(MobyInstance * moby)
// callers(0): 
// callees(12): 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00101cc0 mobyutil::MB_UpdateNavMoveTurning; 0010b030 mobyutil::MB_UpdateKick; 00113e88 mobyutil::MB_MayaFrameTrigger; 00495490 FUN_00495490; 00495778 FUN_00495778; 00496f60 mobyupdate_helpers::M860_00496f60; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot

/* Moby 860 */

void mobyupdate_unsorted::UpdateMoby_860(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  int iVar9;
  float fVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  float *pfVar18;
  longlong lVar19;
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
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  ulonglong in_f19;
  undefined8 uVar32;
  ulonglong in_f20;
  undefined8 uVar33;
  ulonglong in_f21;
  undefined8 uVar34;
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
  ulonglong in_f27;
  double dVar40;
  ulonglong in_f28;
  double dVar41;
  ulonglong in_f29;
  double dVar42;
  ulonglong in_f30;
  double dVar43;
  ulonglong in_f31;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar14 = uVar11 - 0x1a0;
  puVar8 = (ulonglong *)lVar14;
  *puVar8 = uVar11;
  puVar8[0x36] = in_LR;
  puVar8[0x27] = in_f19;
  puVar8[0x28] = in_f20;
  puVar8[0x29] = in_f21;
  puVar8[0x2a] = in_f22;
  puVar8[0x2b] = in_f23;
  puVar8[0x2c] = in_f24;
  puVar8[0x2d] = in_f25;
  puVar8[0x2e] = in_f26;
  puVar8[0x2f] = in_f27;
  puVar8[0x30] = in_f28;
  puVar8[0x31] = in_f29;
  puVar8[0x32] = in_f30;
  puVar8[0x33] = in_f31;
  puVar8[0x26] = unaff_r31;
  puVar8[0x24] = unaff_r29;
  puVar8[0x25] = unaff_r30;
  puVar8[0x23] = unaff_r28;
  pvVar6 = moby->pVar;
  uVar20 = ZEXT48(pvVar6);
  mobyupdate_helpers::M860_00496f60();
  FUN_00495490(0x4014000000000000,moby,uVar20 + 0x110);
  fastfunc::FastDecTimerS32(uVar20 + 0x114);
  uVar1 = moby->state;
  if (uVar1 == '\x05') {
    uVar16 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x60));
    if ((uVar16 & 0x140) != 0) {
      mobyfunc::DeleteMoby(moby);
    }
  }
  else if (uVar1 == '\x04') {
    iVar15 = *(int *)((int)pvVar6 + 0x110);
    if (iVar15 != 0) {
      fVar3 = *(float *)(iVar15 + 0x10) - (moby->pos).x;
      fVar2 = *(float *)(iVar15 + 0x14) - (moby->pos).y;
      pfVar18 = (float *)&mobyutil::g_atanQuadrantTable;
      fVar4 = ABS(fVar3);
      fVar5 = ABS(fVar2);
      *(float *)(puVar8 + 0x14) = fVar3;
      *(float *)((int)puVar8 + 0xa4) = fVar2;
      *(float *)(puVar8 + 0x15) = fVar4 - fVar5;
      dVar25 = 0.0;
      uVar12 = (ulonglong)(*(uint *)(puVar8 + 0x14) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar8 + 0x15) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar8 + 0xa4) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)(puVar8 + 0x14));
      if (*(float *)(puVar8 + 0x15) - 0.0 < 0.0) {
        fVar3 = fVar5;
      }
      fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar12 << 2));
      fVar2 = *(float *)(((uint)(uVar12 << 2) | 0x735900) + 4);
      fVar10 = ABS(*(float *)((int)puVar8 + 0xa4));
      if (*(float *)(puVar8 + 0x15) - 0.0 < 0.0) {
        fVar10 = fVar4;
      }
      if (0.0 < fVar3) {
        lVar13 = uVar11 - 400;
        lVar19 = uVar11 - 0xd8;
        lVar17 = uVar11 - 0xe8;
        lVar21 = 2;
        fVar3 = (fVar10 - fVar3) / (fVar10 + fVar3);
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
          *(float *)((int)lVar13 + 0xb8) = *(float *)((int)lVar13 + 0xa8) * fVar3 * fVar3;
          iVar15 = (int)lVar17;
          lVar17 = lVar17 + 8;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
          lVar19 = lVar19 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar19 = uVar11 - 0xe8;
        pfVar18 = (float *)&DAT_007358e0;
        lVar13 = lVar14;
        lVar17 = lVar19;
        do {
          fVar3 = *pfVar18;
          fVar4 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar13 + 0xb8) = *(float *)((int)lVar13 + 0xb8) * fVar3;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
          lVar17 = lVar17 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar13 = 2;
        do {
          iVar15 = (int)lVar14;
          lVar14 = lVar14 + 0x10;
          iVar9 = (int)lVar19;
          lVar19 = lVar19 + 0x10;
          dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar15 + 0xb8)) +
                            *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc))
          ;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar5 + fVar2);
      }
      mobyutil::OrganicDeltAngSpeed
                (dVar25,(double)*(float *)((int)pvVar6 + 0xfc),
                 (double)*(float *)((int)pvVar6 + 0x100),(double)*(float *)((int)pvVar6 + 0x104),
                 moby,pfVar18,uVar20 + 0xd4);
    }
    if (moby->animationId != '\a') {
      puVar8[0x20] = (longlong)(int)(animationSpeed * 7.5);
      mobyutil::MB_SetAnimation(moby,7,0,*(undefined4 *)((int)puVar8 + 0x104));
    }
    iVar15 = mobyutil::MB_MayaFrameTrigger(18.0,moby);
    if (iVar15 == 0) {
      if ((moby->field43_0x70 & 2U) != 0) {
        auVar44 = ZEXT416(0xffffffff);
        auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
        auVar45 = vectorShiftLeftIntegerWord(auVar44,auVar44);
        auVar44 = loadVectorLeftIndexed(100,0x497294);
        auVar44 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar46 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar44 = vectorMultiplyAddFloatingPoint
                            (auVar46,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,
                             auVar45);
        auVar44 = vectorConvertToSignedFixedPointWordSaturate(auVar44,0);
        auVar44 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,0x114,
                           uVar20);
        *(undefined4 *)((int)pvVar6 + 0x114U & 0xfffffffc) = uVar7;
        moby->state = '\x01';
      }
    }
    else {
      mobyfunc::GetBonePosition(moby,0,uVar11 - 0x120);
      dVar25 = (double)fastfunc::FastWrapRot((moby->rotation).z,-3.1415927);
      dVar43 = 0.05235987901687622;
      iVar15 = 0;
      dVar42 = 1.570796251296997;
      dVar41 = 3.141592502593994;
      dVar40 = -3.141592502593994;
      dVar39 = -0.16666656732559204;
      dVar38 = 0.008333025500178337;
      dVar37 = -0.0001980741071747616;
      dVar36 = 2.601886990305502e-06;
      dVar35 = 2.5;
      uVar34 = 0x401c000000000000;
      uVar33 = 0x3ff0000000000000;
      uVar32 = 0x3fd0000000000000;
      do {
        dVar25 = (double)fastfunc::FastWrapRot((float)dVar25,(float)dVar43);
        dVar22 = (double)(float)(dVar25 + dVar42);
        dVar23 = (double)(float)(dVar41 - dVar25);
        if (dVar25 - (double)(float)(dVar41 - dVar25) < 0.0) {
          dVar23 = dVar25;
        }
        dVar26 = (double)(float)(dVar41 - dVar22);
        if (dVar22 - (double)(float)(dVar41 - dVar22) < 0.0) {
          dVar26 = dVar22;
        }
        dVar24 = (double)(float)(dVar40 - dVar25);
        if ((double)(float)(dVar40 - dVar25) - dVar23 < 0.0) {
          dVar24 = dVar23;
        }
        dVar23 = (double)(float)(dVar40 - dVar22);
        if ((double)(float)(dVar40 - dVar22) - dVar26 < 0.0) {
          dVar23 = dVar26;
        }
        dVar22 = (double)(float)(dVar24 * dVar24);
        dVar27 = (double)mobyutil::g_FrameTime;
        *(undefined4 *)(puVar8 + 0x13) = 0;
        dVar26 = (double)(float)(dVar23 * dVar23);
        dVar29 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar24));
        dVar31 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar23));
        dVar28 = (double)(float)(dVar22 * dVar29);
        dVar30 = (double)(float)(dVar26 * dVar31);
        *(float *)((int)puVar8 + 0x94) =
             (float)(dVar27 * dVar35) *
             (float)((double)(float)(dVar22 * dVar28) * dVar36 +
                    (double)(float)(dVar28 * dVar37 +
                                   (double)(float)(dVar29 * dVar38 +
                                                  (double)(float)((double)(float)(dVar22 * dVar24) *
                                                                  dVar39 + dVar24))));
        *(float *)(puVar8 + 0x12) =
             (float)(dVar27 * dVar35) *
             (float)((double)(float)(dVar26 * dVar30) * dVar36 +
                    (double)(float)(dVar30 * dVar37 +
                                   (double)(float)(dVar31 * dVar38 +
                                                  (double)(float)((double)(float)(dVar26 * dVar23) *
                                                                  dVar39 + dVar23))));
        FUN_00495778(uVar34,uVar33,uVar32,moby,uVar11 - 0x120,uVar11 - 0x110,2,uVar11 - 0xa8);
        iVar15 = iVar15 + 1;
      } while (iVar15 < 0x78);
      moby->state = '\x04';
    }
  }
  else if (uVar1 == '\x02') {
    if (moby->animationId != '\x04') {
      puVar8[0x20] = (longlong)(int)(animationSpeed * 10.5);
      mobyutil::MB_SetAnimation(moby,4,0,*(undefined4 *)((int)puVar8 + 0x104));
    }
    if (*(uint *)((int)pvVar6 + 0x110) == 0) {
      moby->state = '\x01';
    }
    else {
      mobyutil::MB_UpdateNavMoveTurning
                (moby,uVar20 + 0xc0,(ulonglong)*(uint *)((int)pvVar6 + 0x110) + 0x10,uVar11 - 0x130)
      ;
      fVar3 = (moby->pos).y - *(float *)(*(int *)((int)pvVar6 + 0x110) + 0x14);
      fVar2 = (moby->pos).x - *(float *)(*(int *)((int)pvVar6 + 0x110) + 0x10);
      if (SQRT(fVar2 * fVar2 + fVar3 * fVar3) < 4.0) {
        moby->state = '\x04';
      }
    }
  }
  else if (uVar1 == '\x01') {
    if (moby->animationId != '\0') {
      puVar8[0x20] = (longlong)(int)(animationSpeed * 7.5);
      mobyutil::MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar8 + 0x104));
    }
    fVar3 = g_heroPosition.x - (moby->pos).x;
    fVar2 = g_heroPosition.y - (moby->pos).y;
    pfVar18 = (float *)&mobyutil::g_atanQuadrantTable;
    fVar4 = ABS(fVar3);
    fVar5 = ABS(fVar2);
    *(float *)((int)puVar8 + 0xac) = fVar3;
    *(float *)(puVar8 + 0x16) = fVar2;
    *(float *)((int)puVar8 + 0xb4) = fVar4 - fVar5;
    dVar25 = 0.0;
    uVar12 = (ulonglong)(*(uint *)((int)puVar8 + 0xac) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar8 + 0xb4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar8 + 0x16) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)((int)puVar8 + 0xac));
    if (*(float *)((int)puVar8 + 0xb4) - 0.0 < 0.0) {
      fVar3 = fVar5;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar12 << 2));
    fVar2 = *(float *)(((uint)(uVar12 << 2) | 0x735900) + 4);
    fVar10 = ABS(*(float *)(puVar8 + 0x16));
    if (*(float *)((int)puVar8 + 0xb4) - 0.0 < 0.0) {
      fVar10 = fVar4;
    }
    if (0.0 < fVar3) {
      lVar13 = uVar11 - 400;
      lVar19 = uVar11 - 0xb8;
      lVar17 = uVar11 - 200;
      lVar21 = 2;
      fVar3 = (fVar10 - fVar3) / (fVar10 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar8 + 0xe4) = fVar3;
      *(float *)((int)puVar8 + 0xdc) = fVar3;
      *(float *)(puVar8 + 0x1c) = fVar3;
      *(float *)(puVar8 + 0x1b) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar8 + 0xdc) = *(float *)((int)puVar8 + 0xdc) * fVar4;
      *(float *)(puVar8 + 0x1c) = *(float *)(puVar8 + 0x1c) * fVar3;
      *(float *)((int)puVar8 + 0xe4) = *(float *)((int)puVar8 + 0xe4) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar13 + 0xd8) = *(float *)((int)lVar13 + 200) * fVar3 * fVar3;
        iVar15 = (int)lVar17;
        lVar17 = lVar17 + 8;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
        lVar19 = lVar19 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar21 = 4;
      lVar19 = uVar11 - 200;
      pfVar18 = (float *)&DAT_007358e0;
      lVar13 = lVar14;
      lVar17 = lVar19;
      do {
        fVar3 = *pfVar18;
        fVar4 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar13 + 0xd8) = *(float *)((int)lVar13 + 0xd8) * fVar3;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar13 = 2;
      do {
        iVar15 = (int)lVar14;
        lVar14 = lVar14 + 0x10;
        iVar9 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar15 + 0xd8)) +
                          *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar5 + fVar2);
    }
    mobyutil::OrganicDeltAngSpeed
              (dVar25,(double)*(float *)((int)pvVar6 + 0xfc),(double)*(float *)((int)pvVar6 + 0x100)
               ,(double)*(float *)((int)pvVar6 + 0x104),moby,pfVar18,uVar20 + 0xd4);
    if ((*(int *)((int)pvVar6 + 0x114) == 0) && (*(int *)((int)pvVar6 + 0x110) != 0)) {
      moby->state = '\x02';
    }
  }
  else if (uVar1 == '\0') {
    *(undefined4 *)((int)pvVar6 + 0xc0) = 300;
    *(undefined4 *)((int)pvVar6 + 0xc4) = 0x3f000000;
    *(undefined4 *)((int)pvVar6 + 200) = 0x3e4ccccd;
    *(undefined4 *)((int)pvVar6 + 0xcc) = 0x3e4ccccd;
    fVar2 = DAT_0071f40c;
    fVar3 = DAT_0071f40c * 0.3;
    auVar44 = ZEXT416(0xffffffff);
    auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    auVar45 = vectorShiftLeftIntegerWord(auVar44,auVar44);
    *(float *)((int)pvVar6 + 0xe0) = fVar3;
    fVar5 = mobyutil::g_FrameTime;
    *(float *)((int)pvVar6 + 0xe4) = mobyutil::g_FrameTime * 2.0;
    *(undefined4 *)((int)pvVar6 + 0xe8) = 0x3f32b8c2;
    *(undefined4 *)((int)pvVar6 + 0xec) = 0x3e4ccccd;
    *(float *)((int)pvVar6 + 0x100) = fVar3;
    *(float *)((int)pvVar6 + 0xdc) = fVar2 * 0.05;
    *(float *)((int)pvVar6 + 0xfc) = fVar2 * 0.05;
    *(float *)((int)pvVar6 + 0x104) = fVar5 * 3.1415927;
    auVar44 = loadVectorLeftIndexed(0x14,0x497294);
    auVar46 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar44 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar44 = vectorMultiplyAddFloatingPoint
                        (auVar46,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,
                         auVar45);
    auVar44 = vectorConvertToSignedFixedPointWordSaturate(auVar44,0);
    auVar44 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,0x108,uVar20);
    *(undefined4 *)((int)pvVar6 + 0x108U & 0xfffffffc) = uVar7;
    moby->state = '\x01';
  }
  return;
}



//==== 00497c1c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M861_00497c1c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M861_00497c1c(void)

{
  DAT_008c7dc4 = 0x10000;
  return;
}



//==== 00497c48  ns=mobyupdate_helpers  size=0x368
// sig: undefined M861_00497c48(void)
// callers(1): 00497ff8 mobyupdate_unsorted::UpdateMoby_861
// callees(5): 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby

void mobyupdate_helpers::M861_00497c48(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  MobyModeBit MVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  ulonglong *puVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar19;
  ulonglong unaff_r30;
  longlong lVar20;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f31;
  double dVar25;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0xd0;
  puVar9 = (ulonglong *)lVar13;
  *puVar9 = uVar11;
  puVar9[0x1c] = in_LR;
  puVar9[0x19] = in_f31;
  puVar9[0x18] = unaff_r31;
  puVar9[0x16] = unaff_r29;
  puVar9[0x17] = unaff_r30;
  pvVar6 = param_1->pVar;
  uVar19 = ZEXT48(pvVar6);
  lVar20 = uVar19 + 0x110;
  puVar9[0x15] = unaff_r28;
  mobyutil::MB_ColorDyingMoby(param_1,lVar20);
  if (param_1->state != '\x06') {
    dVar25 = 0.0;
    *(undefined4 *)((int)puVar9 + 0x74) = 0;
    iVar12 = mobyutil::MB_damage(param_1,0x10000,0);
    mobyutil::MB_HandleDamage(param_1,iVar12,uVar19 + 0x20,0,puVar9 + 0xe,(int)puVar9 + 0x74,0,4);
    if ((*(int *)(puVar9 + 0xe) != 1) && (*(int *)((int)puVar9 + 0x74) != 0)) {
      fVar4 = *(float *)((int)pvVar6 + 0x20) - *(float *)((int)puVar9 + 0x74);
      *(float *)((int)pvVar6 + 0x20) = fVar4;
      if (dVar25 < (double)fVar4) {
        *(undefined1 *)((int)pvVar6 + 0x117) = 0xfa;
        mobyutil::MB_UpdateLightsTransition(param_1,lVar20);
      }
      else {
        *(undefined4 *)((int)pvVar6 + 0x80) = 0x200;
        *(undefined4 *)((int)pvVar6 + 0x88) = 0x3f000000;
        fVar4 = DAT_0071f418;
        *(float *)((int)pvVar6 + 0x70) = DAT_0071f418 * 10.0;
        *(undefined1 *)((int)pvVar6 + 0x9d) = 0;
        MVar5 = param_1->modeBits;
        *(undefined4 *)((int)pvVar6 + 0x84) = 0x29;
        param_1->modeBits =
             MVar5 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)((int)pvVar6 + 0x74) = fVar4 * 1.5;
        fVar4 = mobyutil::g_FrameTime * 8.0;
        *(float *)((int)pvVar6 + 0x7c) = mobyutil::g_FrameTime * 10.0;
        *(float *)((int)pvVar6 + 0x78) = fVar4;
        uVar7 = *(uint *)(iVar12 + 0x10);
        uVar8 = *(uint *)(iVar12 + 0x14);
        dVar24 = ABS((double)*(float *)(iVar12 + 0x10));
        dVar22 = ABS((double)*(float *)(iVar12 + 0x14));
        *(float *)(puVar9 + 0xf) = (float)(dVar24 - dVar22);
        uVar14 = (ulonglong)(uVar7 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 | (ulonglong)(uVar8 >> 0x1d) & 4;
        lVar15 = uVar14 << 2;
        dVar23 = dVar24;
        if ((double)*(float *)(puVar9 + 0xf) - dVar25 < 0.0) {
          dVar23 = dVar22;
        }
        fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)lVar15);
        if ((double)*(float *)(puVar9 + 0xf) - dVar25 < 0.0) {
          dVar22 = dVar24;
        }
        fVar1 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
        if (dVar25 < dVar23) {
          lVar17 = uVar11 - 0xc0;
          lVar16 = uVar11 - 0x54;
          lVar15 = uVar11 - 0x44;
          lVar21 = 2;
          fVar2 = (float)(dVar22 - dVar23) / (float)(dVar22 + dVar23);
          fVar3 = fVar2 * fVar2;
          *(float *)(puVar9 + 0x11) = fVar2;
          *(float *)(puVar9 + 0x10) = fVar2;
          *(float *)((int)puVar9 + 0x84) = fVar2;
          *(float *)((int)puVar9 + 0x7c) = fVar2;
          fVar2 = fVar3 * fVar3;
          *(float *)(puVar9 + 0x10) = *(float *)(puVar9 + 0x10) * fVar3;
          *(float *)((int)puVar9 + 0x84) = *(float *)((int)puVar9 + 0x84) * fVar2;
          *(float *)(puVar9 + 0x11) = *(float *)(puVar9 + 0x11) * fVar2 * fVar3;
          do {
            *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x6c) * fVar2 * fVar2;
            iVar12 = (int)lVar16;
            lVar17 = lVar17 + 8;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar15 + 4) = *(float *)(iVar12 + 4) * fVar2 * fVar2;
            lVar15 = lVar15 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar15 = uVar11 - 0x54;
          pfVar18 = (float *)&DAT_007358e0;
          lVar21 = 4;
          lVar16 = lVar15;
          lVar17 = lVar13;
          do {
            fVar2 = *pfVar18;
            fVar3 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x7c) * fVar2;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
            lVar16 = lVar16 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar16 = 2;
          do {
            iVar12 = (int)lVar13;
            iVar10 = (int)lVar15;
            lVar13 = lVar13 + 0x10;
            lVar15 = lVar15 + 0x10;
            dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar12 + 0x7c)) +
                              *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                             *(float *)(iVar10 + 0xc));
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar4 + fVar1);
        }
        mobyutil::MB_StartKick(dVar25,param_1,uVar19 + 0x60,lVar15,3,1,0);
        *(undefined4 *)((int)pvVar6 + 0xb0) = 0x41600000;
        *(undefined4 *)((int)pvVar6 + 0xb4) = 0x41c00000;
        *(undefined1 *)((int)pvVar6 + 0x117) = 0xfa;
        mobyutil::MB_UpdateLightsTransition(param_1,lVar20);
        param_1->state = '\x06';
      }
    }
    param_1->damage = -1;
  }
  return;
}



//==== 00497ff8  ns=mobyupdate_unsorted  size=0xfe8
// sig: undefined UpdateMoby_861(MobyInstance * moby)
// callers(0): 
// callees(11): 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00101cc0 mobyutil::MB_UpdateNavMoveTurning; 001059f0 mobyutil::DamageSphereAtBone; 0010b030 mobyutil::MB_UpdateKick; 00495490 FUN_00495490; 00497c48 mobyupdate_helpers::M861_00497c48; 004fff60 fastfunc::FastDecTimerS32; 005026a0 fastfunc::FastSubRots

/* Moby 861 */

void mobyupdate_unsorted::UpdateMoby_861(MobyInstance *moby)

{
  u8 uVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  int iVar10;
  undefined4 uVar11;
  ulonglong *puVar12;
  int iVar13;
  float fVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  float *pfVar21;
  longlong lVar20;
  longlong lVar22;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar23;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f30;
  ulonglong in_f31;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar18 = uVar15 - 0x1b0;
  puVar12 = (ulonglong *)lVar18;
  *puVar12 = uVar15;
  puVar12[0x38] = in_LR;
  puVar12[0x34] = in_f30;
  puVar12[0x35] = in_f31;
  puVar12[0x33] = unaff_r31;
  puVar12[0x31] = unaff_r29;
  puVar12[0x32] = unaff_r30;
  pvVar9 = moby->pVar;
  uVar23 = ZEXT48(pvVar9);
  mobyupdate_helpers::M861_00497c48();
  FUN_00495490(0x4014000000000000,moby,uVar23 + 0x120);
  fastfunc::FastDecTimerS32(uVar23 + 0x124);
  uVar1 = moby->state;
  if (uVar1 == '\x06') {
    uVar19 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x60));
    if ((uVar19 & 0x140) != 0) {
      mobyfunc::DeleteMoby(moby);
    }
  }
  else if (uVar1 == '\x04') {
    iVar10 = *(int *)((int)pvVar9 + 0x120);
    if (iVar10 != 0) {
      fVar3 = *(float *)(iVar10 + 0x10) - (moby->pos).x;
      fVar4 = *(float *)(iVar10 + 0x14) - (moby->pos).y;
      pfVar21 = (float *)&mobyutil::g_atanQuadrantTable;
      fVar5 = ABS(fVar3);
      fVar8 = ABS(fVar4);
      *(float *)(puVar12 + 0x12) = fVar3;
      *(float *)((int)puVar12 + 0x94) = fVar4;
      *(float *)(puVar12 + 0x13) = fVar5 - fVar8;
      dVar27 = 0.0;
      uVar16 = (ulonglong)(*(uint *)(puVar12 + 0x12) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0x13) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar12 + 0x94) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)(puVar12 + 0x12));
      if (*(float *)(puVar12 + 0x13) - 0.0 < 0.0) {
        fVar3 = fVar8;
      }
      fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
      fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
      fVar7 = ABS(*(float *)((int)puVar12 + 0x94));
      if (*(float *)(puVar12 + 0x13) - 0.0 < 0.0) {
        fVar7 = fVar5;
      }
      if (0.0 < fVar3) {
        lVar17 = uVar15 - 0x1a0;
        lVar22 = uVar15 - 0xd4;
        lVar20 = uVar15 - 0xe4;
        lVar24 = 2;
        fVar3 = (fVar7 - fVar3) / (fVar7 + fVar3);
        fVar5 = fVar3 * fVar3;
        *(float *)(puVar12 + 0x1b) = fVar3;
        *(float *)(puVar12 + 0x1a) = fVar3;
        *(float *)((int)puVar12 + 0xd4) = fVar3;
        *(float *)((int)puVar12 + 0xcc) = fVar3;
        fVar3 = fVar5 * fVar5;
        *(float *)(puVar12 + 0x1a) = *(float *)(puVar12 + 0x1a) * fVar5;
        *(float *)((int)puVar12 + 0xd4) = *(float *)((int)puVar12 + 0xd4) * fVar3;
        *(float *)(puVar12 + 0x1b) = *(float *)(puVar12 + 0x1b) * fVar3 * fVar5;
        do {
          *(float *)((int)lVar17 + 0xcc) = *(float *)((int)lVar17 + 0xbc) * fVar3 * fVar3;
          iVar10 = (int)lVar20;
          lVar20 = lVar20 + 8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)(iVar10 + 4) * fVar3 * fVar3;
          lVar22 = lVar22 + 8;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        lVar24 = 4;
        lVar22 = uVar15 - 0xe4;
        pfVar21 = (float *)&DAT_007358e0;
        lVar17 = lVar18;
        lVar20 = lVar22;
        do {
          fVar3 = *pfVar21;
          fVar5 = pfVar21[1];
          pfVar21 = pfVar21 + 2;
          *(float *)((int)lVar17 + 0xcc) = *(float *)((int)lVar17 + 0xcc) * fVar3;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar5;
          lVar20 = lVar20 + 8;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        lVar17 = 2;
        do {
          iVar10 = (int)lVar18;
          lVar18 = lVar18 + 0x10;
          iVar13 = (int)lVar22;
          lVar22 = lVar22 + 0x10;
          dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar10 + 0xcc)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar8 + fVar4);
      }
      mobyutil::OrganicDeltAngSpeed
                (dVar27,(double)*(float *)((int)pvVar9 + 0xfc),
                 (double)*(float *)((int)pvVar9 + 0x100),(double)*(float *)((int)pvVar9 + 0x104),
                 moby,pfVar21,uVar23 + 0xd4);
    }
    if (moby->animationId != '\x01') {
      puVar12[0x2e] = (longlong)(int)(animationSpeed * 7.5);
      mobyutil::MB_SetAnimation(moby,1,0,*(undefined4 *)((int)puVar12 + 0x174));
    }
    dVar27 = (double)mobyfunc::BlendAnimFrame(moby);
    if ((2.0 <= dVar27) && (dVar27 <= 6.0)) {
      puVar12[0xe] = 0;
      mobyutil::DamageSphereAtBone
                (0x3fd99999a0000000,0x3ff0000000000000,0x4000000000000000,moby,1,&DAT_00497fb0,
                 0x10001);
    }
    fVar3 = animationSpeed;
    if ((moby->field43_0x70 & 2U) != 0) {
      auVar28 = ZEXT416(0xffffffff);
      auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
      auVar29 = vectorShiftLeftIntegerWord(auVar28,auVar28);
      auVar28 = loadVectorLeftIndexed(0x44,0x497fb0);
      auVar28 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar28 = vectorMultiplyAddFloatingPoint
                          (auVar30,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,
                           auVar29);
      auVar28 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
      auVar28 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar11 = storeVectorElementWordIndexed
                         (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0x124,uVar23
                         );
      *(undefined4 *)((int)pvVar9 + 0x124U & 0xfffffffc) = uVar11;
      if (moby->animationId != '\0') {
        puVar12[0x2e] = (longlong)(int)(fVar3 * 7.5);
        mobyutil::MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar12 + 0x174));
      }
      moby->state = '\x01';
    }
  }
  else if (uVar1 == '\x03') {
    uVar1 = moby->animationId;
    if (uVar1 != '\x04') {
      puVar12[0x2e] = (longlong)(int)(animationSpeed * 10.5);
      mobyutil::MB_SetAnimation(moby,4,0,*(undefined4 *)((int)puVar12 + 0x174));
      uVar1 = moby->animationId;
    }
    if (*(uint *)((int)pvVar9 + 0x120) == 0) {
      if (uVar1 != '\0') {
        puVar12[0x2e] = (longlong)(int)(animationSpeed * 7.5);
        mobyutil::MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar12 + 0x174));
      }
      moby->state = '\x01';
    }
    else {
      mobyutil::MB_UpdateNavMoveTurning
                (moby,uVar23 + 0xc0,(ulonglong)*(uint *)((int)pvVar9 + 0x120) + 0x10,uVar15 - 0x130)
      ;
      fVar3 = (moby->pos).y - *(float *)(*(int *)((int)pvVar9 + 0x120) + 0x14);
      fVar4 = (moby->pos).x - *(float *)(*(int *)((int)pvVar9 + 0x120) + 0x10);
      if (SQRT(fVar4 * fVar4 + fVar3 * fVar3) < 2.0) {
        moby->state = '\x04';
      }
    }
  }
  else if (uVar1 == '\x02') {
    if (moby->animationId != '\x05') {
      puVar12[0x2e] = (longlong)(int)(animationSpeed * 7.5);
      mobyutil::MB_SetAnimation(moby,5,0,*(undefined4 *)((int)puVar12 + 0x174));
    }
    mobyutil::OrganicDeltAngSpeed
              ((double)*(float *)((int)pvVar9 + 300),(double)*(float *)((int)pvVar9 + 0xfc),
               (double)*(float *)((int)pvVar9 + 0x100),(double)*(float *)((int)pvVar9 + 0x104),moby)
    ;
    iVar10 = *(int *)((int)pvVar9 + 0x120);
    fVar3 = (moby->rotation).z;
    if (iVar10 != 0) {
      fVar4 = (moby->pos).y;
      fVar8 = (moby->pos).x;
      fVar5 = fVar4 - *(float *)(iVar10 + 0x14);
      fVar7 = fVar8 - *(float *)(iVar10 + 0x10);
      if (SQRT(fVar7 * fVar7 + fVar5 * fVar5) < 2.0) {
        dVar27 = 0.0;
        if (*(short *)(iVar10 + 0xa6) == 0x359) {
          dVar26 = 1.0;
        }
        else {
          dVar26 = dVar27;
          if (*(short *)(iVar10 + 0xa6) == 0x57) {
            if (g_heroState == CLANK_STANDING || g_heroState == UNK_50) {
              fVar8 = *(float *)(iVar10 + 0x10) - fVar8;
              fVar4 = *(float *)(iVar10 + 0x14) - fVar4;
              fVar7 = ABS(fVar8);
              fVar5 = ABS(fVar4);
              *(float *)(puVar12 + 0x18) = fVar8;
              *(float *)((int)puVar12 + 0xc4) = fVar4;
              *(float *)(puVar12 + 0x19) = fVar7 - fVar5;
              uVar23 = (ulonglong)(*(uint *)(puVar12 + 0x18) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)(puVar12 + 0x19) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)((int)puVar12 + 0xc4) >> 0x1d) & 4;
              fVar4 = ABS(*(float *)(puVar12 + 0x18));
              if (*(float *)(puVar12 + 0x19) - 0.0 < 0.0) {
                fVar4 = fVar5;
              }
              fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
              fVar5 = ABS(*(float *)((int)puVar12 + 0xc4));
              if (*(float *)(puVar12 + 0x19) - 0.0 < 0.0) {
                fVar5 = fVar7;
              }
              fVar7 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
              dVar25 = dVar27;
              if (0.0 < fVar4) {
                lVar17 = uVar15 - 0x1a0;
                lVar20 = uVar15 - 100;
                lVar22 = uVar15 - 0x54;
                lVar24 = 2;
                fVar4 = (fVar5 - fVar4) / (fVar5 + fVar4);
                fVar5 = fVar4 * fVar4;
                *(float *)(puVar12 + 0x2b) = fVar4;
                *(float *)(puVar12 + 0x2a) = fVar4;
                *(float *)((int)puVar12 + 0x154) = fVar4;
                *(float *)((int)puVar12 + 0x14c) = fVar4;
                fVar4 = fVar5 * fVar5;
                *(float *)(puVar12 + 0x2a) = *(float *)(puVar12 + 0x2a) * fVar5;
                *(float *)((int)puVar12 + 0x154) = *(float *)((int)puVar12 + 0x154) * fVar4;
                *(float *)(puVar12 + 0x2b) = *(float *)(puVar12 + 0x2b) * fVar4 * fVar5;
                do {
                  *(float *)((int)lVar17 + 0x14c) = *(float *)((int)lVar17 + 0x13c) * fVar4 * fVar4;
                  iVar10 = (int)lVar20;
                  lVar17 = lVar17 + 8;
                  lVar20 = lVar20 + 8;
                  *(float *)((int)lVar22 + 4) = *(float *)(iVar10 + 4) * fVar4 * fVar4;
                  lVar22 = lVar22 + 8;
                  lVar24 = lVar24 + -1;
                } while (lVar24 != 0);
                lVar24 = 4;
                lVar22 = uVar15 - 100;
                pfVar21 = (float *)&DAT_007358e0;
                lVar17 = lVar18;
                lVar20 = lVar22;
                do {
                  fVar4 = *pfVar21;
                  fVar5 = pfVar21[1];
                  pfVar21 = pfVar21 + 2;
                  *(float *)((int)lVar17 + 0x14c) = *(float *)((int)lVar17 + 0x14c) * fVar4;
                  lVar17 = lVar17 + 8;
                  *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar5;
                  lVar20 = lVar20 + 8;
                  lVar24 = lVar24 + -1;
                } while (lVar24 != 0);
                lVar17 = 2;
                do {
                  iVar10 = (int)lVar18;
                  lVar18 = lVar18 + 0x10;
                  iVar13 = (int)lVar22;
                  lVar22 = lVar22 + 0x10;
                  dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar10 + 0x14c)) +
                                    *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                                   *(float *)(iVar13 + 0xc));
                  lVar17 = lVar17 + -1;
                } while (lVar17 != 0);
                dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar8 + fVar7);
              }
              dVar25 = (double)fastfunc::FastSubRots(fVar3,(float)dVar25);
              if (1.0471975803375244 <= dVar25) {
                if ((DAT_00969f20 == moby) || (DAT_00969f1c == moby)) {
                  dVar26 = 1.0;
                }
              }
              else {
                dVar26 = 1.0;
              }
            }
            else {
              dVar26 = 1.0;
            }
          }
        }
        if (dVar26 != dVar27) {
          moby->state = '\x01';
        }
      }
    }
  }
  else if (uVar1 == '\x01') {
    if (moby->animationId != '\0') {
      puVar12[0x2e] = (longlong)(int)(animationSpeed * 7.5);
      mobyutil::MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar12 + 0x174));
    }
    iVar10 = *(int *)((int)pvVar9 + 0x120);
    if (iVar10 == 0) {
      fVar3 = (moby->pos).x;
      fVar4 = (moby->pos).y;
      fVar8 = g_heroPosition.y - fVar4;
      fVar7 = ABS(g_heroPosition.x - fVar3);
      fVar5 = ABS(fVar8);
      *(float *)(puVar12 + 0x15) = g_heroPosition.x - fVar3;
      *(float *)((int)puVar12 + 0xac) = fVar8;
      *(float *)(puVar12 + 0x16) = fVar7 - fVar5;
      dVar27 = 0.0;
      uVar16 = (ulonglong)(*(uint *)(puVar12 + 0x15) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0x16) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar12 + 0xac) >> 0x1d) & 4;
      fVar8 = ABS(*(float *)(puVar12 + 0x15));
      if (*(float *)(puVar12 + 0x16) - 0.0 < 0.0) {
        fVar8 = fVar5;
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
      fVar5 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
      fVar14 = ABS(*(float *)((int)puVar12 + 0xac));
      if (*(float *)(puVar12 + 0x16) - 0.0 < 0.0) {
        fVar14 = fVar7;
      }
      if (0.0 < fVar8) {
        lVar17 = uVar15 - 0x1a0;
        lVar22 = uVar15 - 0x94;
        lVar20 = uVar15 - 0xa4;
        lVar24 = 2;
        fVar8 = (fVar14 - fVar8) / (fVar14 + fVar8);
        fVar7 = fVar8 * fVar8;
        *(float *)(puVar12 + 0x23) = fVar8;
        *(float *)(puVar12 + 0x22) = fVar8;
        *(float *)((int)puVar12 + 0x114) = fVar8;
        *(float *)((int)puVar12 + 0x10c) = fVar8;
        fVar8 = fVar7 * fVar7;
        *(float *)(puVar12 + 0x22) = *(float *)(puVar12 + 0x22) * fVar7;
        *(float *)((int)puVar12 + 0x114) = *(float *)((int)puVar12 + 0x114) * fVar8;
        *(float *)(puVar12 + 0x23) = *(float *)(puVar12 + 0x23) * fVar8 * fVar7;
        do {
          *(float *)((int)lVar17 + 0x10c) = *(float *)((int)lVar17 + 0xfc) * fVar8 * fVar8;
          iVar10 = (int)lVar20;
          lVar20 = lVar20 + 8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)(iVar10 + 4) * fVar8 * fVar8;
          lVar22 = lVar22 + 8;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        lVar24 = 4;
        lVar22 = uVar15 - 0xa4;
        pfVar21 = (float *)&DAT_007358e0;
        lVar17 = lVar18;
        lVar20 = lVar22;
        do {
          fVar8 = *pfVar21;
          fVar7 = pfVar21[1];
          pfVar21 = pfVar21 + 2;
          *(float *)((int)lVar17 + 0x10c) = *(float *)((int)lVar17 + 0x10c) * fVar8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar7;
          lVar20 = lVar20 + 8;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        lVar20 = 2;
        lVar17 = lVar18;
        do {
          iVar10 = (int)lVar17;
          lVar17 = lVar17 + 0x10;
          iVar13 = (int)lVar22;
          lVar22 = lVar22 + 0x10;
          dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar10 + 0x10c)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar6 + fVar5);
      }
    }
    else {
      fVar3 = (moby->pos).x;
      fVar4 = (moby->pos).y;
      fVar8 = *(float *)(iVar10 + 0x10) - fVar3;
      fVar5 = *(float *)(iVar10 + 0x14) - fVar4;
      fVar6 = ABS(fVar8);
      fVar7 = ABS(fVar5);
      *(float *)((int)puVar12 + 0xb4) = fVar8;
      *(float *)(puVar12 + 0x17) = fVar5;
      *(float *)((int)puVar12 + 0xbc) = fVar6 - fVar7;
      dVar27 = 0.0;
      uVar16 = (ulonglong)(*(uint *)((int)puVar12 + 0xb4) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar12 + 0xbc) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar12 + 0x17) >> 0x1d) & 4;
      fVar8 = ABS(*(float *)((int)puVar12 + 0xb4));
      if (*(float *)((int)puVar12 + 0xbc) - 0.0 < 0.0) {
        fVar8 = fVar7;
      }
      fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
      fVar5 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
      fVar14 = ABS(*(float *)(puVar12 + 0x17));
      if (*(float *)((int)puVar12 + 0xbc) - 0.0 < 0.0) {
        fVar14 = fVar6;
      }
      if (0.0 < fVar8) {
        lVar17 = uVar15 - 0x1a0;
        lVar20 = uVar15 - 0x84;
        lVar22 = uVar15 - 0x74;
        lVar24 = 2;
        fVar8 = (fVar14 - fVar8) / (fVar14 + fVar8);
        fVar6 = fVar8 * fVar8;
        *(float *)(puVar12 + 0x27) = fVar8;
        *(float *)(puVar12 + 0x26) = fVar8;
        *(float *)((int)puVar12 + 0x134) = fVar8;
        *(float *)((int)puVar12 + 300) = fVar8;
        fVar8 = fVar6 * fVar6;
        *(float *)(puVar12 + 0x26) = *(float *)(puVar12 + 0x26) * fVar6;
        *(float *)((int)puVar12 + 0x134) = *(float *)((int)puVar12 + 0x134) * fVar8;
        *(float *)(puVar12 + 0x27) = *(float *)(puVar12 + 0x27) * fVar8 * fVar6;
        do {
          *(float *)((int)lVar17 + 300) = *(float *)((int)lVar17 + 0x11c) * fVar8 * fVar8;
          iVar10 = (int)lVar20;
          lVar17 = lVar17 + 8;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)(iVar10 + 4) * fVar8 * fVar8;
          lVar22 = lVar22 + 8;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        lVar24 = 4;
        lVar22 = uVar15 - 0x84;
        pfVar21 = (float *)&DAT_007358e0;
        lVar17 = lVar18;
        lVar20 = lVar22;
        do {
          fVar8 = *pfVar21;
          fVar6 = pfVar21[1];
          pfVar21 = pfVar21 + 2;
          *(float *)((int)lVar17 + 300) = *(float *)((int)lVar17 + 300) * fVar8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
          lVar20 = lVar20 + 8;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        lVar20 = 2;
        lVar17 = lVar18;
        do {
          iVar10 = (int)lVar17;
          iVar13 = (int)lVar22;
          lVar17 = lVar17 + 0x10;
          lVar22 = lVar22 + 0x10;
          dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar10 + 300)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar7 + fVar5);
      }
    }
    fVar4 = g_heroPosition.y - fVar4;
    pfVar21 = (float *)&mobyutil::g_atanQuadrantTable;
    fVar5 = ABS(g_heroPosition.x - fVar3);
    fVar8 = ABS(fVar4);
    *(float *)((int)puVar12 + 0x9c) = g_heroPosition.x - fVar3;
    *(float *)(puVar12 + 0x14) = fVar4;
    *(float *)((int)puVar12 + 0xa4) = fVar5 - fVar8;
    dVar26 = 0.0;
    uVar16 = (ulonglong)(*(uint *)((int)puVar12 + 0x9c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar12 + 0xa4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar12 + 0x14) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)((int)puVar12 + 0x9c));
    if (*(float *)((int)puVar12 + 0xa4) - 0.0 < 0.0) {
      fVar3 = fVar8;
    }
    fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
    fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    fVar7 = ABS(*(float *)(puVar12 + 0x14));
    if (*(float *)((int)puVar12 + 0xa4) - 0.0 < 0.0) {
      fVar7 = fVar5;
    }
    if (0.0 < fVar3) {
      lVar17 = uVar15 - 0x1a0;
      lVar22 = uVar15 - 0xb4;
      lVar20 = uVar15 - 0xc4;
      lVar24 = 2;
      fVar3 = (fVar7 - fVar3) / (fVar7 + fVar3);
      fVar5 = fVar3 * fVar3;
      *(float *)(puVar12 + 0x1f) = fVar3;
      *(float *)(puVar12 + 0x1e) = fVar3;
      *(float *)((int)puVar12 + 0xf4) = fVar3;
      *(float *)((int)puVar12 + 0xec) = fVar3;
      fVar3 = fVar5 * fVar5;
      *(float *)(puVar12 + 0x1e) = *(float *)(puVar12 + 0x1e) * fVar5;
      *(float *)((int)puVar12 + 0xf4) = *(float *)((int)puVar12 + 0xf4) * fVar3;
      *(float *)(puVar12 + 0x1f) = *(float *)(puVar12 + 0x1f) * fVar3 * fVar5;
      do {
        *(float *)((int)lVar17 + 0xec) = *(float *)((int)lVar17 + 0xdc) * fVar3 * fVar3;
        iVar10 = (int)lVar20;
        lVar20 = lVar20 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar10 + 4) * fVar3 * fVar3;
        lVar22 = lVar22 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar24 = 4;
      lVar22 = uVar15 - 0xc4;
      pfVar21 = (float *)&DAT_007358e0;
      lVar17 = lVar18;
      lVar20 = lVar22;
      do {
        fVar3 = *pfVar21;
        fVar5 = pfVar21[1];
        pfVar21 = pfVar21 + 2;
        *(float *)((int)lVar17 + 0xec) = *(float *)((int)lVar17 + 0xec) * fVar3;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar5;
        lVar20 = lVar20 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar17 = 2;
      do {
        iVar10 = (int)lVar18;
        lVar18 = lVar18 + 0x10;
        iVar13 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar10 + 0xec)) +
                          *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar8 + fVar4);
    }
    mobyutil::OrganicDeltAngSpeed
              (dVar26,(double)*(float *)((int)pvVar9 + 0xfc),(double)*(float *)((int)pvVar9 + 0x100)
               ,(double)*(float *)((int)pvVar9 + 0x104),moby,pfVar21,uVar23 + 0xd4);
    if (*(int *)((int)pvVar9 + 0x124) == 0) {
      iVar10 = *(int *)((int)pvVar9 + 0x120);
      if (((iVar10 == 0) ||
          (fVar3 = (moby->pos).y - *(float *)(iVar10 + 0x14),
          fVar4 = (moby->pos).x - *(float *)(iVar10 + 0x10),
          2.0 <= SQRT(fVar4 * fVar4 + fVar3 * fVar3))) ||
         (dVar26 = (double)fastfunc::FastSubRots((moby->rotation).z,(float)dVar27),
         0.2617993950843811 <= dVar26)) {
        if (((*(int *)((int)pvVar9 + 0x120) == 0) && (*(int *)((int)pvVar9 + 0x128) != 0)) &&
           (dVar27 = (double)fastfunc::FastSubRots((moby->rotation).z,(float)dVar27),
           dVar27 < 0.0872664600610733)) {
          moby->state = '\x02';
        }
      }
      else {
        moby->state = '\x04';
      }
    }
  }
  else if (uVar1 == '\0') {
    *(undefined4 *)((int)pvVar9 + 0xc0) = 300;
    *(undefined4 *)((int)pvVar9 + 0xc4) = 0x3f000000;
    *(undefined4 *)((int)pvVar9 + 200) = 0x3e4ccccd;
    *(undefined4 *)((int)pvVar9 + 0xcc) = 0x3e4ccccd;
    fVar4 = DAT_0071f40c;
    fVar3 = DAT_0071f40c * 0.3;
    auVar28 = ZEXT416(0xffffffff);
    auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
    auVar29 = vectorShiftLeftIntegerWord(auVar28,auVar28);
    *(float *)((int)pvVar9 + 0xe0) = fVar3;
    fVar8 = mobyutil::g_FrameTime;
    *(float *)((int)pvVar9 + 0xe4) = mobyutil::g_FrameTime * 3.0;
    *(undefined4 *)((int)pvVar9 + 0xe8) = 0x3f32b8c2;
    *(undefined4 *)((int)pvVar9 + 0xec) = 0x3e4ccccd;
    *(float *)((int)pvVar9 + 0x100) = fVar3;
    *(float *)((int)pvVar9 + 0xdc) = fVar4 * 0.05;
    *(float *)((int)pvVar9 + 0xfc) = fVar4 * 0.05;
    iVar10 = *(int *)((int)pvVar9 + 0x128);
    *(float *)((int)pvVar9 + 0x104) = fVar8 * 3.1415927;
    auVar28 = loadVectorLeftIndexed(0x14,0x497fb0);
    auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar28 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
    fVar2 = (moby->rotation).z;
    auVar28 = vectorMultiplyAddFloatingPoint
                        (auVar30,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,
                         auVar29);
    auVar28 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
    auVar28 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar11 = storeVectorElementWordIndexed
                       (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0x108,uVar23);
    *(undefined4 *)((int)pvVar9 + 0x108U & 0xfffffffc) = uVar11;
    *(f32 *)((int)pvVar9 + 300) = fVar2;
    if (iVar10 == 0) {
      moby->state = '\x01';
    }
    else {
      moby->state = '\x02';
    }
  }
  return;
}



//==== 00498fe0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M862_00498fe0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M862_00498fe0(void)

{
  DAT_008c7e34 = 0x10000;
  return;
}



//==== 00499010  ns=mobyupdate_helpers  size=0x340
// sig: undefined M862_00499010(void)
// callers(1): 004993b0 mobyupdate_unsorted::UpdateMoby_862
// callees(3): 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010ad80 mobyutil::MB_StartKick

void mobyupdate_helpers::M862_00499010(MobyInstance *param_1)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  ulonglong *puVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  ulonglong in_f31;
  double dVar23;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0xc0;
  puVar9 = (ulonglong *)lVar13;
  *puVar9 = uVar11;
  puVar9[0x1a] = in_LR;
  puVar9[0x17] = in_f31;
  puVar9[0x16] = unaff_r31;
  uVar1 = param_1->state;
  puVar9[0x15] = unaff_r30;
  puVar9[0x14] = unaff_r29;
  if (uVar1 != '\x04') {
    pvVar6 = param_1->pVar;
    dVar23 = 0.0;
    *(undefined4 *)((int)puVar9 + 0x74) = 0;
    iVar12 = mobyutil::MB_damage(param_1,0x10000,0);
    if (((iVar12 == 0) || (*(int *)(iVar12 + 0x20) == 0)) ||
       (*(MOBY_OCLASSES *)(*(int *)(iVar12 + 0x20) + 0xa6) != param_1->oClass)) {
      mobyutil::MB_HandleDamage
                (param_1,iVar12,ZEXT48(pvVar6) + 0x20,0,puVar9 + 0xe,(int)puVar9 + 0x74,0,4);
      if ((*(int *)(puVar9 + 0xe) != 1) &&
         (fVar2 = *(float *)((int)puVar9 + 0x74), *(int *)((int)puVar9 + 0x74) != 0)) {
        *(undefined4 *)((int)pvVar6 + 0x80) = 0x200;
        *(undefined4 *)((int)pvVar6 + 0x88) = 0x3f000000;
        *(float *)((int)pvVar6 + 0x20) = *(float *)((int)pvVar6 + 0x20) - fVar2;
        fVar2 = DAT_0071f418;
        *(float *)((int)pvVar6 + 0x70) = DAT_0071f418 * 10.0;
        *(undefined1 *)((int)pvVar6 + 0x9d) = 0;
        *(undefined4 *)((int)pvVar6 + 0x84) = 0x29;
        *(float *)((int)pvVar6 + 0x74) = fVar2 * 1.5;
        fVar5 = mobyutil::g_FrameTime;
        fVar2 = mobyutil::g_FrameTime * 10.0;
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)((int)pvVar6 + 0x7c) = fVar2;
        *(float *)((int)pvVar6 + 0x78) = fVar5 * 8.0;
        uVar7 = *(uint *)(iVar12 + 0x10);
        uVar8 = *(uint *)(iVar12 + 0x14);
        dVar21 = ABS((double)*(float *)(iVar12 + 0x10));
        dVar22 = ABS((double)*(float *)(iVar12 + 0x14));
        *(float *)(puVar9 + 0xf) = (float)(dVar21 - dVar22);
        uVar14 = (ulonglong)(uVar7 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 | (ulonglong)(uVar8 >> 0x1d) & 4;
        lVar15 = uVar14 << 2;
        dVar20 = dVar21;
        if ((double)*(float *)(puVar9 + 0xf) - dVar23 < 0.0) {
          dVar20 = dVar22;
        }
        fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)lVar15);
        fVar2 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
        if ((double)*(float *)(puVar9 + 0xf) - dVar23 < 0.0) {
          dVar22 = dVar21;
        }
        if (dVar23 < dVar20) {
          lVar17 = uVar11 - 0xb0;
          lVar15 = uVar11 - 0x34;
          lVar16 = uVar11 - 0x44;
          lVar19 = 2;
          fVar3 = (float)(dVar22 - dVar20) / (float)(dVar22 + dVar20);
          fVar4 = fVar3 * fVar3;
          *(float *)(puVar9 + 0x11) = fVar3;
          *(float *)(puVar9 + 0x10) = fVar3;
          *(float *)((int)puVar9 + 0x84) = fVar3;
          *(float *)((int)puVar9 + 0x7c) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)(puVar9 + 0x10) = *(float *)(puVar9 + 0x10) * fVar4;
          *(float *)((int)puVar9 + 0x84) = *(float *)((int)puVar9 + 0x84) * fVar3;
          *(float *)(puVar9 + 0x11) = *(float *)(puVar9 + 0x11) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x6c) * fVar3 * fVar3;
            iVar12 = (int)lVar16;
            lVar16 = lVar16 + 8;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar15 + 4) = *(float *)(iVar12 + 4) * fVar3 * fVar3;
            lVar15 = lVar15 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          lVar15 = uVar11 - 0x44;
          lVar19 = 4;
          pfVar18 = (float *)&DAT_007358e0;
          lVar16 = lVar15;
          lVar17 = lVar13;
          do {
            fVar3 = *pfVar18;
            fVar4 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x7c) * fVar3;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
            lVar16 = lVar16 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          lVar16 = 2;
          do {
            iVar12 = (int)lVar13;
            iVar10 = (int)lVar15;
            lVar13 = lVar13 + 0x10;
            lVar15 = lVar15 + 0x10;
            dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar12 + 0x7c)) +
                              *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                             *(float *)(iVar10 + 0xc));
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar5 + fVar2);
        }
        mobyutil::MB_StartKick(dVar23,param_1,ZEXT48(pvVar6) + 0x60,lVar15,3,1,0);
        *(undefined4 *)((int)pvVar6 + 0xb0) = 0x41300000;
        *(undefined4 *)((int)pvVar6 + 0xb4) = 0x418c0000;
        param_1->state = '\x04';
      }
      param_1->damage = -1;
    }
  }
  return;
}



//==== 004993b0  ns=mobyupdate_unsorted  size=0x844
// sig: undefined UpdateMoby_862(MobyInstance * moby)
// callers(0): 
// callees(14): 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00101cc0 mobyutil::MB_UpdateNavMoveTurning; 0010466c mobyutil::MB_GetNextMobyInGroup; 00104800 mobyutil::MB_GetFirstMobyInGroup; 001059f0 mobyutil::DamageSphereAtBone; 0010b030 mobyutil::MB_UpdateKick; 001136c8 mobyutil::DoMeander; 00495490 FUN_00495490; 00499010 mobyupdate_helpers::M862_00499010; 004fff60 fastfunc::FastDecTimerS32
// strings: 00499380: '?fff' (raw) | 004993a8: '?333B"'

/* Moby 862 */

void mobyupdate_unsorted::UpdateMoby_862(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  MobyInstance *cur;
  undefined4 uVar8;
  ulonglong *puVar9;
  int iVar10;
  float fVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  float *pfVar19;
  longlong lVar20;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar21;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar15 = uVar12 - 0xf0;
  puVar9 = (ulonglong *)lVar15;
  *puVar9 = uVar12;
  puVar9[0x20] = in_LR;
  puVar9[0x1d] = unaff_r31;
  puVar9[0x1b] = unaff_r29;
  puVar9[0x1c] = unaff_r30;
  pvVar7 = moby->pVar;
  uVar21 = ZEXT48(pvVar7);
  mobyupdate_helpers::M862_00499010();
  FUN_00495490(0x4028000000000000,moby,uVar21 + 0x140);
  fastfunc::FastDecTimerS32(uVar21 + 0x144);
  uVar1 = moby->state;
  if (uVar1 == '\x04') {
    uVar17 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar7 + 0x60));
    if ((uVar17 & 0x140) != 0) {
      mobyfunc::DeleteMoby(moby);
    }
  }
  else if (uVar1 == '\x03') {
    iVar16 = *(int *)((int)pvVar7 + 0x140);
    if (iVar16 != 0) {
      fVar4 = *(float *)(iVar16 + 0x10) - (moby->pos).x;
      fVar3 = *(float *)(iVar16 + 0x14) - (moby->pos).y;
      pfVar19 = (float *)&mobyutil::g_atanQuadrantTable;
      fVar5 = ABS(fVar4);
      fVar6 = ABS(fVar3);
      *(float *)((int)puVar9 + 0x94) = fVar4;
      *(float *)(puVar9 + 0x13) = fVar3;
      *(float *)((int)puVar9 + 0x9c) = fVar5 - fVar6;
      dVar23 = 0.0;
      uVar13 = (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x9c) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar9 + 0x13) >> 0x1d) & 4;
      fVar4 = ABS(*(float *)((int)puVar9 + 0x94));
      if (*(float *)((int)puVar9 + 0x9c) - 0.0 < 0.0) {
        fVar4 = fVar6;
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar13 << 2));
      fVar3 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
      fVar11 = ABS(*(float *)(puVar9 + 0x13));
      if (*(float *)((int)puVar9 + 0x9c) - 0.0 < 0.0) {
        fVar11 = fVar5;
      }
      if (0.0 < fVar4) {
        lVar14 = uVar12 - 0xe0;
        lVar20 = uVar12 - 0x40;
        lVar18 = uVar12 - 0x50;
        lVar22 = 2;
        fVar4 = (fVar11 - fVar4) / (fVar11 + fVar4);
        fVar5 = fVar4 * fVar4;
        *(float *)((int)puVar9 + 0xac) = fVar4;
        *(float *)((int)puVar9 + 0xa4) = fVar4;
        *(float *)(puVar9 + 0x15) = fVar4;
        *(float *)(puVar9 + 0x14) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)((int)puVar9 + 0xa4) = *(float *)((int)puVar9 + 0xa4) * fVar5;
        *(float *)(puVar9 + 0x15) = *(float *)(puVar9 + 0x15) * fVar4;
        *(float *)((int)puVar9 + 0xac) = *(float *)((int)puVar9 + 0xac) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar14 + 0xa0) = *(float *)((int)lVar14 + 0x90) * fVar4 * fVar4;
          iVar16 = (int)lVar18;
          lVar18 = lVar18 + 8;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)(iVar16 + 4) * fVar4 * fVar4;
          lVar20 = lVar20 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar22 = 4;
        lVar20 = uVar12 - 0x50;
        pfVar19 = (float *)&DAT_007358e0;
        lVar14 = lVar15;
        lVar18 = lVar20;
        do {
          fVar4 = *pfVar19;
          fVar5 = pfVar19[1];
          pfVar19 = pfVar19 + 2;
          *(float *)((int)lVar14 + 0xa0) = *(float *)((int)lVar14 + 0xa0) * fVar4;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar5;
          lVar18 = lVar18 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar14 = 2;
        do {
          iVar16 = (int)lVar15;
          lVar15 = lVar15 + 0x10;
          iVar10 = (int)lVar20;
          lVar20 = lVar20 + 0x10;
          dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar16 + 0xa0)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar6 + fVar3);
      }
      mobyutil::OrganicDeltAngSpeed
                (dVar23,(double)*(float *)((int)pvVar7 + 0xfc),
                 (double)*(float *)((int)pvVar7 + 0x100),(double)*(float *)((int)pvVar7 + 0x104),
                 moby,pfVar19,uVar21 + 0xd4);
    }
    bVar2 = moby->setByGroup;
    if (bVar2 == 0) {
      if (-1 < (int)(uint)bVar2) {
        if ((*(int *)((int)pvVar7 + 0x140) == 0) ||
           (*(short *)(*(int *)((int)pvVar7 + 0x140) + 0xa6) != 0x359)) {
          moby->setByGroup = '\x02';
        }
        else {
          iVar16 = mobyutil::MB_randRange(0x14,0x46);
          puVar9[0x18] = (longlong)iVar16;
          *(int *)((int)pvVar7 + 0x144) =
               (int)(animationSpeed * ((float)(longlong)puVar9[0x18] + 0.5));
          moby->setByGroup = '\x01';
        }
      }
    }
    else if (bVar2 < 2) {
      fVar4 = (moby->pos).y - *(float *)((int)pvVar7 + 0x114);
      fVar3 = (moby->pos).x - *(float *)((int)pvVar7 + 0x110);
      if (SQRT(fVar3 * fVar3 + fVar4 * fVar4) <= 5.5) {
        if (moby->animationId != '\0') {
          puVar9[0x18] = (longlong)(int)(animationSpeed * 7.5);
          mobyutil::MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar9 + 0xc4));
        }
        if (*(int *)((int)pvVar7 + 0x144) == 0) {
          auVar24 = ZEXT416(0xffffffff);
          auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
          moby->setByGroup = '\x02';
          auVar25 = vectorShiftLeftIntegerWord(auVar24,auVar24);
          auVar24 = loadVectorLeftIndexed(0x44,0x499350);
          auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar24 = vectorMultiplyAddFloatingPoint
                              (auVar26,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60
                               ,auVar25);
          auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
          auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar8 = storeVectorElementWordIndexed
                            (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x144,
                             uVar21);
          *(undefined4 *)((int)pvVar7 + 0x144U & 0xfffffffc) = uVar8;
        }
      }
      else {
        moby->state = '\x01';
      }
    }
    else if (bVar2 < 3) {
      if (moby->animationId != '\x02') {
        puVar9[0x18] = (longlong)(int)(animationSpeed * 7.5);
        mobyutil::MB_SetAnimation(moby,2,0,*(undefined4 *)((int)puVar9 + 0xc4));
      }
      dVar23 = (double)mobyfunc::BlendAnimFrame(moby);
      if ((7.0 <= dVar23) && (dVar23 <= 14.0)) {
        puVar9[0xe] = 0;
        mobyutil::DamageSphereAtBone
                  (0x3fc99999a0000000,0x3ff0000000000000,0x3fe6666660000000,moby,0,&DAT_00499350,
                   0x10001);
      }
      if ((moby->field43_0x70 & 2U) != 0) {
        auVar24 = ZEXT416(0xffffffff);
        auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
        auVar25 = vectorShiftLeftIntegerWord(auVar24,auVar24);
        auVar24 = loadVectorLeftIndexed(0x5c,0x499350);
        auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar24 = vectorMultiplyAddFloatingPoint
                            (auVar26,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,
                             auVar25);
        auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
        auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar8 = storeVectorElementWordIndexed
                          (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x144,
                           uVar21);
        *(undefined4 *)((int)pvVar7 + 0x144U & 0xfffffffc) = uVar8;
        moby->state = '\x01';
      }
    }
  }
  else if (uVar1 == '\x02') {
    if (moby->animationId != '\x01') {
      puVar9[0x18] = (longlong)(int)(animationSpeed * 10.5);
      mobyutil::MB_SetAnimation(moby,1,0,*(undefined4 *)((int)puVar9 + 0xc4));
    }
    if (*(uint *)((int)pvVar7 + 0x140) == 0) {
      moby->state = '\x01';
    }
    else {
      mobyutil::MB_UpdateNavMoveTurning
                (moby,uVar21 + 0xc0,(ulonglong)*(uint *)((int)pvVar7 + 0x140) + 0x10,uVar12 - 0x70);
      fVar4 = (moby->pos).y - *(float *)(*(int *)((int)pvVar7 + 0x140) + 0x14);
      fVar3 = (moby->pos).x - *(float *)(*(int *)((int)pvVar7 + 0x140) + 0x10);
      if (SQRT(fVar3 * fVar3 + fVar4 * fVar4) < 0.9) {
        moby->setByGroup = '\0';
        moby->state = '\x03';
      }
    }
  }
  else if (uVar1 == '\x01') {
    if (moby->animationId != '\x01') {
      puVar9[0x18] = (longlong)(int)(animationSpeed * 7.5);
      mobyutil::MB_SetAnimation(moby,1,0,*(undefined4 *)((int)puVar9 + 0xc4));
    }
    mobyutil::DoMeander(0x3fd6666660000000,0x3fd0000000000000,moby,uVar21 + 0x110);
    if (((*(int *)((int)pvVar7 + 0x144) == 0) &&
        (iVar16 = *(int *)((int)pvVar7 + 0x140), iVar16 != 0)) &&
       ((fVar4 = (moby->pos).y - *(float *)(iVar16 + 0x14),
        fVar3 = (moby->pos).x - *(float *)(iVar16 + 0x10), SQRT(fVar3 * fVar3 + fVar4 * fVar4) < 4.0
        || (*(int *)((int)pvVar7 + 0x148) != 0)))) {
      if ((byte)moby->group != 0xff) {
        mobyutil::MB_GetFirstMobyInGroup
                  ((MobyInstance **)(puVar9 + 0x12),(uint)(byte)moby->group,'\0','\0');
        cur = *(MobyInstance **)(puVar9 + 0x12);
        while (cur != (MobyInstance *)0x0) {
          *(undefined4 *)((int)cur->pVar + 0x148) = 1;
          mobyutil::MB_GetNextMobyInGroup((MobyInstance **)(puVar9 + 0x12),cur,'\0','\0');
          cur = *(MobyInstance **)(puVar9 + 0x12);
        }
      }
      *(undefined4 *)((int)pvVar7 + 0x148) = 0;
      moby->state = '\x02';
    }
  }
  else if (uVar1 == '\0') {
    *(undefined4 *)((int)pvVar7 + 0xc0) = 300;
    *(undefined4 *)((int)pvVar7 + 0xc4) = 0x3f000000;
    *(undefined4 *)((int)pvVar7 + 200) = 0x3e4ccccd;
    *(undefined4 *)((int)pvVar7 + 0xcc) = 0x3e4ccccd;
    fVar3 = DAT_0071f40c;
    fVar4 = DAT_0071f40c * 0.3;
    auVar24 = ZEXT416(0xffffffff);
    auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    auVar25 = vectorShiftLeftIntegerWord(auVar24,auVar24);
    *(float *)((int)pvVar7 + 0xe0) = fVar4;
    fVar6 = mobyutil::g_FrameTime;
    *(float *)((int)pvVar7 + 0xe4) = mobyutil::g_FrameTime * 3.0;
    *(undefined4 *)((int)pvVar7 + 0xe8) = 0x3f32b8c2;
    *(undefined4 *)((int)pvVar7 + 0xec) = 0x3e4ccccd;
    *(float *)((int)pvVar7 + 0x100) = fVar4;
    *(float *)((int)pvVar7 + 0xdc) = fVar3 * 0.05;
    *(float *)((int)pvVar7 + 0xfc) = fVar3 * 0.05;
    *(float *)((int)pvVar7 + 0x104) = fVar6 * 3.1415927;
    auVar24 = loadVectorLeftIndexed(0x14,0x499350);
    auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar24 = vectorMultiplyAddFloatingPoint
                        (auVar26,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,
                         auVar25);
    auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
    auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar8 = storeVectorElementWordIndexed
                      (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x108,uVar21);
    *(undefined4 *)((int)pvVar7 + 0x108U & 0xfffffffc) = uVar8;
    *(undefined4 *)((int)pvVar7 + 300) = 0x3f99999a;
    *(float *)((int)pvVar7 + 0x124) = fVar6 * 2.0;
    *(f32 *)((int)pvVar7 + 0x110) = (moby->pos).x;
    *(f32 *)((int)pvVar7 + 0x114) = (moby->pos).y;
    *(f32 *)((int)pvVar7 + 0x118) = (moby->pos).z;
    *(f32 *)((int)pvVar7 + 0x11c) = (moby->pos).w;
    moby->state = '\x01';
  }
  return;
}



//==== 00499bf4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M867_00499bf4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M867_00499bf4(void)

{
  DAT_008c7ea4 = 0x10000;
  return;
}



//==== 00499c40  ns=mobyupdate_unsorted  size=0x770
// sig: undefined UpdateMoby_867(MobyInstance * moby)
// callers(0): 
// callees(12): 00059e20 collproc::CollSphere; 0005e598 collproc::CollMobySphere; 000efb38 mobyfunc::DeleteMoby; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 001042ec mobyutil::MB_SetStateByGroup; 0010581c mobyutil::SetCollDamIn; 00106150 mobyutil::MB_RegisterLameShadow; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010e030 mobyutil::MB_genericExplosion; 001118d8 mobyutil::MB_getTarget; 004fff60 fastfunc::FastDecTimerS32

/* Moby 867 */

void mobyupdate_unsorted::UpdateMoby_867(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  f32 fVar5;
  short sVar6;
  MOBY_OCLASSES MVar7;
  void *pvVar8;
  u16 *puVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 auStack_c0 [48];
  float local_90;
  float local_8c;
  float local_88;
  int local_50;
  int local_40 [4];
  
  if (moby != (MobyInstance *)0x0) {
    pvVar8 = moby->pVar;
    uVar14 = ZEXT48(pvVar8);
    if (pvVar8 != (void *)0x0) {
      dVar21 = 8.0;
      mobyutil::MB_getTarget(0x4020000000000000,moby,&DAT_00499c08,&local_90);
      iVar13 = mobyutil::MB_damage(moby,0x230000,0);
      mobyutil::MB_HandleDamage(moby,iVar13,uVar14 + 0x20,0,local_40,0,0,4);
      bVar4 = moby->state;
      fVar5 = (moby->pos).x;
      if ((((local_40[0] < 2) || (iVar13 == 0)) ||
          (sVar6 = *(short *)(*(int *)(iVar13 + 0x20) + 0xa6), sVar6 == 0x365 || sVar6 == 0x363)) ||
         (sVar6 == 0x367)) {
        if (bVar4 == 0) {
          moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
          *(f32 *)((int)pvVar8 + 0x60) = fVar5;
          *(f32 *)((int)pvVar8 + 100) = (moby->pos).y;
          *(f32 *)((int)pvVar8 + 0x68) = (moby->pos).z;
          *(f32 *)((int)pvVar8 + 0x6c) = (moby->pos).w;
          puVar9 = moby->pClass->collision;
          moby->state = '\x01';
          moby->collision = puVar9;
        }
        else if (bVar4 < 2) {
          auVar23 = ZEXT416(0xffffffff);
          auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
          auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
          auVar23 = loadVectorLeftIndexed(0x18,0x499c08);
          auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar23 = vectorMultiplyAddFloatingPoint
                              (auVar25,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60
                               ,auVar24);
          auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
          auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
          uVar10 = storeVectorElementWordIndexed(auVar23,0x78,uVar14);
          *(undefined4 *)((int)pvVar8 + 0x78U & 0xfffffffc) = uVar10;
          if ((local_50 != 0) &&
             (fVar1 = (moby->pos).y - local_8c, fVar2 = (moby->pos).x - local_90,
             fVar3 = (moby->pos).z - local_88,
             (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < dVar21)) {
            *(undefined4 *)((int)pvVar8 + 0x70) = 0;
            uVar10 = storeVectorElementWordIndexed(auVar23,0x78,uVar14);
            *(undefined4 *)((int)pvVar8 + 0x78U & 0xfffffffc) = uVar10;
            auVar23 = ZEXT416(0xffffffff);
            auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
            moby->setByGroup = '\x01';
            auVar25 = loadVectorLeftIndexed(0x1c,0x499c08);
            auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
            auVar23 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar23 = vectorMultiplyAddFloatingPoint
                                (auVar25,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 |
                                         auVar23 << 0x60,auVar24);
            auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
            auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar10 = storeVectorElementWordIndexed
                               (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,0x7c,
                                uVar14);
            *(undefined4 *)((int)pvVar8 + 0x7cU & 0xfffffffc) = uVar10;
            moby->state = '\x02';
            if (*(int *)((int)pvVar8 + 0x74) != -1) {
              mobyutil::MB_SetStateByGroup(*(int *)((int)pvVar8 + 0x74),2);
            }
          }
        }
        else if (bVar4 < 3) {
          fVar1 = DAT_0071f418 * 30.0 + *(float *)((int)pvVar8 + 0x70);
          *(float *)((int)pvVar8 + 0x70) = fVar1;
          if (mobyutil::g_FrameTime * 6.0 < fVar1) {
            *(float *)((int)pvVar8 + 0x70) = mobyutil::g_FrameTime * 6.0;
          }
          if (moby->setByGroup == '\x01') {
            (moby->pos).z = DAT_0071f408 * 0.1 + (moby->pos).z;
            iVar13 = fastfunc::FastDecTimerS32(uVar14 + 0x7c);
            if (iVar13 != 0) {
              auVar23 = ZEXT416(0xffffffff);
              auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
              auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
              auVar23 = loadVectorLeftIndexed(0x1c,0x499c08);
              auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar23 = vectorMultiplyAddFloatingPoint
                                  (auVar25,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 |
                                           auVar23 << 0x60,auVar24);
              auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
              auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
              uVar10 = storeVectorElementWordIndexed
                                 (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,0x7c
                                  ,uVar14);
              *(undefined4 *)((int)pvVar8 + 0x7cU & 0xfffffffc) = uVar10;
              moby->setByGroup = '\x02';
            }
          }
          else if (moby->setByGroup == '\x02') {
            (moby->pos).z = -(DAT_0071f408 * 0.1 - (moby->pos).z);
            iVar13 = fastfunc::FastDecTimerS32(uVar14 + 0x7c);
            if (iVar13 != 0) {
              moby->setByGroup = '\0';
            }
          }
          dVar16 = (double)(moby->pos).y;
          fVar1 = (float)((double)local_8c - dVar16);
          dVar17 = (double)(moby->pos).x;
          fVar2 = (float)((double)local_90 - dVar17);
          dVar19 = (double)(moby->pos).z;
          fVar3 = (float)((double)local_88 - dVar19);
          dVar20 = 0.0;
          fVar11 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
          fVar12 = *(float *)((int)pvVar8 + 0x70) / fVar11;
          dVar21 = dVar20;
          if (0.0 - fVar11 < 0.0) {
            dVar21 = (double)(fVar2 * fVar12);
          }
          dVar15 = dVar20;
          if (0.0 - fVar11 < 0.0) {
            dVar15 = (double)(fVar1 * fVar12);
          }
          dVar18 = dVar20;
          if (0.0 - fVar11 < 0.0) {
            dVar18 = (double)(fVar3 * fVar12);
          }
          if (fVar11 - 0.0 < 0.0) {
            dVar21 = (double)(fVar2 * fVar12);
          }
          if (fVar11 - 0.0 < 0.0) {
            dVar15 = (double)(fVar1 * fVar12);
          }
          if (fVar11 - 0.0 < 0.0) {
            dVar18 = (double)(fVar3 * fVar12);
          }
          fVar1 = (float)(dVar17 + dVar21);
          fVar2 = (float)(dVar16 + dVar15);
          fVar3 = (float)(dVar19 + dVar18);
          (moby->pos).x = fVar1;
          (moby->pos).y = fVar2;
          (moby->pos).z = fVar3;
          fVar2 = fVar2 - *(float *)((int)pvVar8 + 100);
          fVar1 = fVar1 - *(float *)((int)pvVar8 + 0x60);
          fVar3 = fVar3 - *(float *)((int)pvVar8 + 0x68);
          if (64.0 < SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2)) {
            mobyfunc::DeleteMoby(moby);
            return;
          }
          uVar22 = 0x3ff0000000000000;
          mobyutil::SetCollDamIn(0x3ff0000000000000,auStack_c0,moby,0x10001);
          iVar13 = collproc::CollMobySphere(local_d0);
          fVar1 = (moby->pos).x;
          fVar2 = (moby->pos).y;
          fVar3 = (moby->pos).z;
          if (((iVar13 != 0) && (CollOutput.pMoby != (MobyInstance *)0x0)) &&
             ((MVar7 = (CollOutput.pMoby)->oClass, MVar7 != 0x365 && MVar7 != 0x363 &&
              (MVar7 != BOLTCRATE_POSSIBLY_FOR_METAL_DETECTOR)))) {
            mobyutil::MB_genericExplosion
                      (dVar20,dVar20,0x4000000000000000,uVar22,0x4010000000000000,uVar22,
                       0x401c000000000000,moby,local_e0,0,&DAT_00499c08,0,3,3,5);
            mobyfunc::DeleteMoby(moby);
            return;
          }
          iVar13 = collproc::CollSphere(local_d0);
          if (iVar13 != 0) {
            fVar2 = CollOutput.push.y - fVar2;
            fVar3 = CollOutput.push.z - (fVar3 + 0.55);
            (moby->pos).x = (moby->pos).x + (CollOutput.push.x - fVar1);
            (moby->pos).y = (moby->pos).y + fVar2;
            (moby->pos).z = (moby->pos).z + fVar3;
          }
          iVar13 = fastfunc::FastDecTimerS32(uVar14 + 0x78);
          if (iVar13 != 0) {
            mobyutil::MB_genericExplosion
                      (dVar20,dVar20,0x4000000000000000,uVar22,0x4010000000000000,uVar22,
                       0x401c000000000000,moby,local_e0,0,&DAT_00499c08,0,3,3,5);
            mobyfunc::DeleteMoby(moby);
            return;
          }
        }
        mobyutil::MB_RegisterLameShadow(1.0,moby);
      }
      else {
        mobyutil::MB_genericExplosion
                  (0,0,0x4000000000000000,0x3ff0000000000000,0x4010000000000000,0x3ff0000000000000,
                   0x401c000000000000,moby,local_f0,0,0,1,3,3,5);
        mobyutil::MB_SpawnBoltsFromCrate(moby,0,0xffffffffffffffff);
        mobyfunc::DeleteMoby(moby);
      }
    }
  }
  return;
}



//==== 0049a3b8  ns=mobyupdate_helpers  size=0x78
// sig: undefined M869_0049a3b8(void)
// callers(0): 
// callees(1): 000efb38 mobyfunc::DeleteMoby

void mobyupdate_helpers::M869_0049a3b8(MobyInstance *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 in_LR;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if ((int)param_2 != 0) {
    auVar3 = ZEXT416(0xffffffff);
    auVar3 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
    auVar4 = vectorShiftLeftIntegerWord(auVar3,auVar3);
    auVar3 = loadVectorLeftIndexed(0x84,param_2);
    auVar2 = vectorConvertFromSignedFixedPointWord(auVar3,0);
    auVar3 = loadVectorLeftIndexed(in_LR,0x49a3b0);
    auVar3 = auVar3 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar5 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar3 = vectorAddFloatingPoint
                       (auVar2,auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60);
    auVar3 = vectorMultiplyAddFloatingPoint(auVar5,auVar3,auVar4);
    auVar3 = vectorConvertToSignedFixedPointWordSaturate(auVar3,0);
    auVar3 = auVar3 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar1 = storeVectorElementWordIndexed
                      (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x98,
                       ZEXT48(param_1->pVar));
    *(undefined4 *)((int)param_1->pVar + 0x98U & 0xfffffffc) = uVar1;
  }
  mobyfunc::DeleteMoby(param_1);
  return;
}



//==== 0049a478  ns=mobyupdate_unsorted  size=0x13d8
// sig: undefined UpdateMoby_869(void * this, MobyInstance * moby)
// callers(0): 
// callees(14): 00059e20 collproc::CollSphere; 0005e598 collproc::CollMobySphere; 000efb38 mobyfunc::DeleteMoby; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000ff190 mobyutil::MB_DeltAngSpeed; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 0010581c mobyutil::SetCollDamIn; 00106150 mobyutil::MB_RegisterLameShadow; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010e030 mobyutil::MB_genericExplosion; 001118d8 mobyutil::MB_getTarget; 004fff60 fastfunc::FastDecTimerS32; 005026a0 fastfunc::FastSubRots

/* Moby 869 */

void __thiscall mobyupdate_unsorted::UpdateMoby_869(void *this,MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  short sVar8;
  MOBY_OCLASSES MVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  ulonglong *puVar13;
  float fVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar20;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar21;
  ulonglong uVar22;
  float *pfVar23;
  longlong lVar24;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong uVar25;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar26;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f29;
  double dVar34;
  ulonglong in_f30;
  double dVar35;
  undefined8 uVar36;
  ulonglong in_f31;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar18 = uVar16 - 0x280;
  puVar13 = (ulonglong *)lVar18;
  *puVar13 = uVar16;
  puVar13[0x52] = in_LR;
  puVar13[0x4d] = in_f29;
  puVar13[0x4e] = in_f30;
  puVar13[0x4f] = in_f31;
  puVar13[0x4c] = unaff_r31;
  puVar13[0x4b] = unaff_r30;
  puVar13[0x4a] = unaff_r29;
  puVar13[0x49] = unaff_r28;
  puVar13[0x48] = unaff_r27;
  puVar13[0x47] = unaff_r26;
  if (this != (void *)0x0) {
    uVar10 = *(uint *)((int)this + 0x78);
    uVar25 = (ulonglong)uVar10;
    if ((uVar10 != 0) && (*(int *)(uVar10 + 0xa0) != 0)) {
      uVar11 = *(uint *)(*(int *)(uVar10 + 0xa0) + 0x78);
      uVar26 = (ulonglong)uVar11;
      mobyutil::MB_getTarget((double)*(float *)(uVar11 + 0x8c),this,moby,uVar16 - 0x180);
      iVar20 = mobyutil::MB_damage(this,0x230000,0);
      mobyutil::MB_HandleDamage((MobyInstance *)this,iVar20,uVar25 + 0x20,0,puVar13 + 0x2a,0,0,4);
      if ((1 < *(int *)(puVar13 + 0x2a)) &&
         (((iVar20 != 0 &&
           (sVar8 = *(short *)(*(int *)(iVar20 + 0x20) + 0xa6), sVar8 != 0x365 && sVar8 != 0x363))
          && (sVar8 != 0x367)))) {
        puVar13[0x12] = 0xffffffffffffffff;
        puVar13[0x14] = 0;
        puVar13[0x15] = 1;
        puVar13[0x16] = 0xffffffffffffffff;
        puVar13[0x17] = 0;
        mobyutil::MB_genericExplosion
                  (0,0,0x4000000000000000,0x3ff0000000000000,0x4010000000000000,0x3ff0000000000000,
                   0x401c000000000000,this,uVar25 + 0x60,0,0,1,3,3,5);
        mobyutil::MB_SpawnBoltsFromCrate(this,0,0xffffffffffffffff);
        if (uVar11 != 0) {
          auVar38 = ZEXT416(0xffffffff);
          auVar39 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
          auVar38 = loadVectorLeftIndexed(0x84,uVar26);
          auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
          auVar39 = loadVectorRightIndexed(0x94,uVar26);
          auVar39 = vectorConvertFromSignedFixedPointWord(auVar38 | auVar39,0);
          auVar38 = loadVectorLeftIndexed(0x14,0x49a430);
          auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar38 = vectorAddFloatingPoint
                              (auVar39,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60
                              );
          auVar38 = vectorMultiplyAddFloatingPoint(auVar41,auVar38,auVar40);
          auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
          auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar12 = storeVectorElementWordIndexed
                             (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x98,
                              (ulonglong)*(uint *)((int)this + 0x78));
          *(undefined4 *)(*(uint *)((int)this + 0x78) + 0x98 & 0xfffffffc) = uVar12;
        }
        mobyfunc::DeleteMoby((MobyInstance *)this);
      }
      bVar1 = *(byte *)((int)this + 0x20);
      if (bVar1 < 2) {
        if (bVar1 == 0) {
          if (uVar11 != 0) {
            *(ushort *)((int)this + 0x34) = *(ushort *)((int)this + 0x34) | 0x1000;
            fVar2 = 0.0;
            *(undefined4 *)(uVar10 + 0x6c) = 0;
            *(undefined4 *)(uVar10 + 0x68) = 0;
            *(undefined4 *)(uVar10 + 100) = 0;
            *(undefined4 *)(uVar10 + 0x60) = 0;
            *(undefined4 *)(uVar10 + 0x70) = *(undefined4 *)((int)this + 0x10);
            *(undefined4 *)(uVar10 + 0x74) = *(undefined4 *)((int)this + 0x14);
            *(undefined4 *)(uVar10 + 0x78) = *(undefined4 *)((int)this + 0x18);
            *(undefined4 *)(uVar10 + 0x7c) = *(undefined4 *)((int)this + 0x1c);
            *(undefined4 *)((int)this + 0x44) = 0;
            fVar3 = *(float *)(uVar10 + 0x80) - *(float *)((int)this + 0x10);
            fVar5 = *(float *)(uVar10 + 0x84) - *(float *)((int)this + 0x14);
            fVar7 = ABS(fVar3);
            fVar4 = ABS(fVar5);
            *(float *)((int)puVar13 + 0x184) = fVar3;
            *(float *)(puVar13 + 0x31) = fVar5;
            *(float *)((int)puVar13 + 0x18c) = fVar7 - fVar4;
            uVar25 = (ulonglong)(*(uint *)((int)puVar13 + 0x184) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar13 + 0x18c) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar13 + 0x31) >> 0x1d) & 4;
            fVar3 = ABS(*(float *)((int)puVar13 + 0x184));
            if (*(float *)((int)puVar13 + 0x18c) - 0.0 < 0.0) {
              fVar3 = fVar4;
            }
            fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
            fVar4 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
            fVar14 = ABS(*(float *)(puVar13 + 0x31));
            if (*(float *)((int)puVar13 + 0x18c) - 0.0 < 0.0) {
              fVar14 = fVar7;
            }
            if (0.0 < fVar3) {
              lVar17 = uVar16 - 0x270;
              lVar24 = uVar16 - 0x60;
              lVar21 = uVar16 - 0x70;
              lVar27 = 2;
              fVar3 = (fVar14 - fVar3) / (fVar14 + fVar3);
              fVar7 = fVar3 * fVar3;
              *(float *)((int)puVar13 + 0x21c) = fVar3;
              *(float *)((int)puVar13 + 0x214) = fVar3;
              *(float *)(puVar13 + 0x43) = fVar3;
              *(float *)(puVar13 + 0x42) = fVar3;
              fVar3 = fVar7 * fVar7;
              *(float *)((int)puVar13 + 0x214) = *(float *)((int)puVar13 + 0x214) * fVar7;
              *(float *)(puVar13 + 0x43) = *(float *)(puVar13 + 0x43) * fVar3;
              *(float *)((int)puVar13 + 0x21c) = *(float *)((int)puVar13 + 0x21c) * fVar3 * fVar7;
              do {
                *(float *)((int)lVar17 + 0x210) = *(float *)((int)lVar17 + 0x200) * fVar3 * fVar3;
                iVar20 = (int)lVar21;
                lVar21 = lVar21 + 8;
                lVar17 = lVar17 + 8;
                *(float *)((int)lVar24 + 4) = *(float *)(iVar20 + 4) * fVar3 * fVar3;
                lVar24 = lVar24 + 8;
                lVar27 = lVar27 + -1;
              } while (lVar27 != 0);
              lVar27 = 4;
              lVar24 = uVar16 - 0x70;
              pfVar23 = (float *)&DAT_007358e0;
              lVar17 = lVar18;
              lVar21 = lVar24;
              do {
                fVar3 = *pfVar23;
                fVar7 = pfVar23[1];
                pfVar23 = pfVar23 + 2;
                *(float *)((int)lVar17 + 0x210) = *(float *)((int)lVar17 + 0x210) * fVar3;
                lVar17 = lVar17 + 8;
                *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar7;
                lVar21 = lVar21 + 8;
                lVar27 = lVar27 + -1;
              } while (lVar27 != 0);
              lVar17 = 2;
              do {
                iVar20 = (int)lVar18;
                lVar18 = lVar18 + 0x10;
                iVar15 = (int)lVar24;
                lVar24 = lVar24 + 0x10;
                fVar2 = fVar2 + *(float *)(iVar20 + 0x210) + *(float *)(iVar15 + 4) +
                        *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc);
                lVar17 = lVar17 + -1;
              } while (lVar17 != 0);
              fVar2 = (fVar2 + 0.7853982) * fVar5 + fVar4;
            }
            *(float *)((int)this + 0x48) = fVar2;
            *(undefined1 *)((int)this + 0xbc) = 0;
            *(undefined1 *)((int)this + 0x20) = 1;
          }
        }
        else {
          *(float *)(uVar10 + 0x60) = *(float *)(uVar10 + 0x80) - *(float *)((int)this + 0x10);
          *(float *)(uVar10 + 100) = *(float *)(uVar10 + 0x84) - *(float *)((int)this + 0x14);
          fVar2 = *(float *)((int)this + 0x18);
          *(undefined4 *)(uVar10 + 0x6c) = *(undefined4 *)(uVar10 + 0x8c);
          *(float *)(uVar10 + 0x68) = *(float *)(uVar10 + 0x88) - fVar2;
          fVar2 = *(float *)(uVar10 + 0x80) - *(float *)((int)this + 0x10);
          fVar3 = *(float *)(uVar10 + 0x84) - *(float *)((int)this + 0x14);
          fVar4 = ABS(fVar2);
          fVar7 = ABS(fVar3);
          *(float *)(puVar13 + 0x2f) = fVar2;
          *(float *)((int)puVar13 + 0x17c) = fVar3;
          *(float *)(puVar13 + 0x30) = fVar4 - fVar7;
          dVar37 = 0.0;
          uVar26 = (ulonglong)(*(uint *)(puVar13 + 0x2f) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar13 + 0x30) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar13 + 0x17c) >> 0x1d) & 4;
          fVar2 = ABS(*(float *)(puVar13 + 0x2f));
          if (*(float *)(puVar13 + 0x30) - 0.0 < 0.0) {
            fVar2 = fVar7;
          }
          fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
          fVar3 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
          fVar5 = ABS(*(float *)((int)puVar13 + 0x17c));
          if (*(float *)(puVar13 + 0x30) - 0.0 < 0.0) {
            fVar5 = fVar4;
          }
          dVar28 = dVar37;
          if (0.0 < fVar2) {
            lVar17 = uVar16 - 0x270;
            lVar24 = uVar16 - 0x80;
            lVar21 = uVar16 - 0x90;
            lVar27 = 2;
            fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
            fVar4 = fVar2 * fVar2;
            *(float *)((int)puVar13 + 0x1fc) = fVar2;
            *(float *)((int)puVar13 + 500) = fVar2;
            *(float *)(puVar13 + 0x3f) = fVar2;
            *(float *)(puVar13 + 0x3e) = fVar2;
            fVar2 = fVar4 * fVar4;
            *(float *)((int)puVar13 + 500) = *(float *)((int)puVar13 + 500) * fVar4;
            *(float *)(puVar13 + 0x3f) = *(float *)(puVar13 + 0x3f) * fVar2;
            *(float *)((int)puVar13 + 0x1fc) = *(float *)((int)puVar13 + 0x1fc) * fVar2 * fVar4;
            do {
              *(float *)((int)lVar17 + 0x1f0) = *(float *)((int)lVar17 + 0x1e0) * fVar2 * fVar2;
              iVar20 = (int)lVar21;
              lVar21 = lVar21 + 8;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)(iVar20 + 4) * fVar2 * fVar2;
              lVar24 = lVar24 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar27 = 4;
            lVar24 = uVar16 - 0x90;
            pfVar23 = (float *)&DAT_007358e0;
            lVar17 = lVar18;
            lVar21 = lVar24;
            do {
              fVar2 = *pfVar23;
              fVar4 = pfVar23[1];
              pfVar23 = pfVar23 + 2;
              *(float *)((int)lVar17 + 0x1f0) = *(float *)((int)lVar17 + 0x1f0) * fVar2;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar4;
              lVar21 = lVar21 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar21 = 2;
            lVar17 = lVar18;
            do {
              iVar20 = (int)lVar17;
              iVar15 = (int)lVar24;
              lVar17 = lVar17 + 0x10;
              lVar24 = lVar24 + 0x10;
              dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar20 + 0x1f0)) +
                                *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                               *(float *)(iVar15 + 0xc));
              lVar21 = lVar21 + -1;
            } while (lVar21 != 0);
            dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar7 + fVar3);
          }
          mobyutil::OrganicDeltAngSpeed
                    (dVar28,(double)(DAT_0071f418 * 6.2831855),
                     (double)(mobyutil::g_FrameTime * 3.1415927),
                     (double)(mobyutil::g_FrameTime * 6.2831855),this,&DAT_00720000,uVar25 + 0xa4);
          fVar2 = *(float *)(uVar10 + 0x80);
          *(float *)((int)this + 0x10) = fVar2;
          fVar3 = *(float *)(uVar10 + 0x84);
          iVar20 = *(int *)(puVar13 + 0x28);
          *(float *)((int)this + 0x14) = fVar3;
          fVar7 = *(float *)(uVar10 + 0x88);
          *(float *)((int)this + 0x18) = fVar7;
          *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(uVar10 + 0x8c);
          if (iVar20 != 0) {
            fVar5 = fVar3 - *(float *)((int)puVar13 + 0x104);
            fVar4 = fVar2 - *(float *)(puVar13 + 0x20);
            fVar7 = fVar7 - *(float *)(puVar13 + 0x21);
            if ((SQRT(fVar7 * fVar7 + fVar4 * fVar4 + fVar5 * fVar5) < *(float *)(uVar11 + 0x8c)) &&
               (fVar4 = fVar3 - *(float *)(*(int *)(uVar10 + 0xa0) + 0x14),
               fVar7 = fVar2 - *(float *)(*(int *)(uVar10 + 0xa0) + 0x10),
               2.0 < SQRT(fVar7 * fVar7 + fVar4 * fVar4))) {
              fVar3 = *(float *)((int)puVar13 + 0x104) - fVar3;
              fVar2 = *(float *)(puVar13 + 0x20) - fVar2;
              dVar31 = ABS((double)fVar3);
              dVar30 = ABS((double)fVar2);
              *(float *)((int)puVar13 + 0x16c) = fVar2;
              *(float *)(puVar13 + 0x2e) = fVar3;
              fVar2 = *(float *)((int)this + 0x48);
              *(float *)((int)puVar13 + 0x174) = (float)(dVar30 - dVar31);
              uVar26 = (ulonglong)(*(uint *)((int)puVar13 + 0x16c) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)((int)puVar13 + 0x174) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)(puVar13 + 0x2e) >> 0x1d) & 4;
              dVar28 = ABS((double)*(float *)((int)puVar13 + 0x16c));
              if ((double)*(float *)((int)puVar13 + 0x174) - dVar37 < 0.0) {
                dVar28 = dVar31;
              }
              fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
              dVar31 = ABS((double)*(float *)(puVar13 + 0x2e));
              if ((double)*(float *)((int)puVar13 + 0x174) - dVar37 < 0.0) {
                dVar31 = dVar30;
              }
              fVar7 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
              if (dVar37 < dVar28) {
                lVar17 = uVar16 - 0x270;
                lVar21 = uVar16 - 0xb0;
                lVar24 = uVar16 - 0xa0;
                lVar27 = 2;
                fVar4 = (float)(dVar31 - dVar28) / (float)(dVar31 + dVar28);
                fVar5 = fVar4 * fVar4;
                *(float *)((int)puVar13 + 0x1dc) = fVar4;
                *(float *)((int)puVar13 + 0x1d4) = fVar4;
                *(float *)(puVar13 + 0x3b) = fVar4;
                *(float *)(puVar13 + 0x3a) = fVar4;
                fVar4 = fVar5 * fVar5;
                *(float *)((int)puVar13 + 0x1d4) = *(float *)((int)puVar13 + 0x1d4) * fVar5;
                *(float *)(puVar13 + 0x3b) = *(float *)(puVar13 + 0x3b) * fVar4;
                *(float *)((int)puVar13 + 0x1dc) = *(float *)((int)puVar13 + 0x1dc) * fVar4 * fVar5;
                do {
                  *(float *)((int)lVar17 + 0x1d0) = *(float *)((int)lVar17 + 0x1c0) * fVar4 * fVar4;
                  iVar20 = (int)lVar21;
                  lVar17 = lVar17 + 8;
                  lVar21 = lVar21 + 8;
                  *(float *)((int)lVar24 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
                  lVar24 = lVar24 + 8;
                  lVar27 = lVar27 + -1;
                } while (lVar27 != 0);
                lVar27 = 4;
                lVar24 = uVar16 - 0xb0;
                pfVar23 = (float *)&DAT_007358e0;
                lVar17 = lVar18;
                lVar21 = lVar24;
                do {
                  fVar4 = *pfVar23;
                  fVar5 = pfVar23[1];
                  pfVar23 = pfVar23 + 2;
                  *(float *)((int)lVar17 + 0x1d0) = *(float *)((int)lVar17 + 0x1d0) * fVar4;
                  lVar17 = lVar17 + 8;
                  *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar5;
                  lVar21 = lVar21 + 8;
                  lVar27 = lVar27 + -1;
                } while (lVar27 != 0);
                lVar17 = 2;
                do {
                  iVar20 = (int)lVar18;
                  iVar15 = (int)lVar24;
                  lVar18 = lVar18 + 0x10;
                  lVar24 = lVar24 + 0x10;
                  dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar20 + 0x1d0)) +
                                    *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                                   *(float *)(iVar15 + 0xc));
                  lVar17 = lVar17 + -1;
                } while (lVar17 != 0);
                dVar37 = (double)((float)(dVar37 + 0.7853981852531433) * fVar3 + fVar7);
              }
              dVar37 = (double)fastfunc::FastSubRots(fVar2,(float)dVar37);
              if (dVar37 < (double)(*(float *)(uVar11 + 0x88) * 0.017453292)) {
                auVar38 = ZEXT416(0xffffffff);
                auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
                auVar39 = vectorShiftLeftIntegerWord(auVar38,auVar38);
                *(float *)(uVar10 + 0x9c) = *(float *)(uVar11 + 0x7c) * mobyutil::g_FrameTime;
                auVar38 = loadVectorLeftIndexed(0x28,0x49a430);
                auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
                auVar39 = vectorMultiplyAddFloatingPoint
                                    (auVar40,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 |
                                             auVar38 << 0x60,auVar39);
                auVar38 = ZEXT416(0xffffffff);
                auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
                auVar40 = vectorShiftLeftIntegerWord(auVar38,auVar38);
                auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
                auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
                uVar12 = storeVectorElementWordIndexed
                                   (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,
                                    0x98,uVar25);
                *(undefined4 *)(uVar10 + 0x98 & 0xfffffffc) = uVar12;
                *(undefined1 *)((int)this + 0xbc) = 1;
                auVar38 = loadVectorLeftIndexed(0x2c,0x49a430);
                auVar39 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
                auVar38 = vectorMultiplyAddFloatingPoint
                                    (auVar39,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 |
                                             auVar38 << 0x60,auVar40);
                auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
                auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
                uVar12 = storeVectorElementWordIndexed
                                   (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,
                                    0xac,uVar25);
                *(undefined4 *)(uVar10 + 0xac & 0xfffffffc) = uVar12;
                *(undefined1 *)((int)this + 0x20) = 2;
              }
            }
          }
        }
      }
      else if (bVar1 < 3) {
        if (*(char *)((int)this + 0xbc) == '\x01') {
          *(float *)((int)this + 0x18) = DAT_0071f408 * 0.1 + *(float *)((int)this + 0x18);
          iVar20 = fastfunc::FastDecTimerS32(uVar25 + 0xac);
          if (iVar20 != 0) {
            auVar38 = ZEXT416(0xffffffff);
            auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
            auVar39 = vectorShiftLeftIntegerWord(auVar38,auVar38);
            auVar38 = loadVectorLeftIndexed(0x2c,0x49a430);
            auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar38 = vectorMultiplyAddFloatingPoint
                                (auVar40,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 |
                                         auVar38 << 0x60,auVar39);
            auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
            auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar12 = storeVectorElementWordIndexed
                               (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0xac,
                                uVar25);
            *(undefined4 *)(uVar10 + 0xac & 0xfffffffc) = uVar12;
            *(undefined1 *)((int)this + 0xbc) = 2;
          }
        }
        else if (*(char *)((int)this + 0xbc) == '\x02') {
          *(float *)((int)this + 0x18) = -(DAT_0071f408 * 0.1 - *(float *)((int)this + 0x18));
          iVar20 = fastfunc::FastDecTimerS32(uVar25 + 0xac);
          if (iVar20 != 0) {
            *(undefined1 *)((int)this + 0xbc) = 0;
          }
        }
        fVar2 = *(float *)(puVar13 + 0x20) - *(float *)((int)this + 0x10);
        fVar3 = *(float *)((int)puVar13 + 0x104) - *(float *)((int)this + 0x14);
        fVar4 = ABS(fVar2);
        fVar7 = ABS(fVar3);
        *(float *)(puVar13 + 0x2c) = fVar2;
        *(float *)((int)puVar13 + 0x164) = fVar3;
        *(float *)(puVar13 + 0x2d) = fVar4 - fVar7;
        dVar37 = 0.0;
        uVar19 = (ulonglong)(*(uint *)(puVar13 + 0x2c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar13 + 0x2d) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0x164) >> 0x1d) & 4;
        uVar22 = uVar19 << 2 | 0x735900;
        fVar2 = ABS(*(float *)(puVar13 + 0x2c));
        if (*(float *)(puVar13 + 0x2d) - 0.0 < 0.0) {
          fVar2 = fVar7;
        }
        fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
        fVar3 = *(float *)((int)uVar22 + 4);
        fVar5 = ABS(*(float *)((int)puVar13 + 0x164));
        if (*(float *)(puVar13 + 0x2d) - 0.0 < 0.0) {
          fVar5 = fVar4;
        }
        dVar28 = dVar37;
        if (0.0 < fVar2) {
          lVar17 = uVar16 - 0x270;
          lVar21 = uVar16 - 0xd0;
          lVar24 = uVar16 - 0xc0;
          lVar27 = 2;
          fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
          fVar4 = fVar2 * fVar2;
          *(float *)((int)puVar13 + 0x1bc) = fVar2;
          *(float *)((int)puVar13 + 0x1b4) = fVar2;
          *(float *)(puVar13 + 0x37) = fVar2;
          *(float *)(puVar13 + 0x36) = fVar2;
          fVar2 = fVar4 * fVar4;
          *(float *)((int)puVar13 + 0x1b4) = *(float *)((int)puVar13 + 0x1b4) * fVar4;
          *(float *)(puVar13 + 0x37) = *(float *)(puVar13 + 0x37) * fVar2;
          *(float *)((int)puVar13 + 0x1bc) = *(float *)((int)puVar13 + 0x1bc) * fVar2 * fVar4;
          do {
            *(float *)((int)lVar17 + 0x1b0) = *(float *)((int)lVar17 + 0x1a0) * fVar2 * fVar2;
            iVar20 = (int)lVar21;
            lVar17 = lVar17 + 8;
            lVar21 = lVar21 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)(iVar20 + 4) * fVar2 * fVar2;
            lVar24 = lVar24 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar24 = uVar16 - 0xd0;
          uVar22 = ZEXT48(&DAT_007358e0);
          lVar17 = lVar18;
          lVar21 = lVar24;
          do {
            pfVar23 = (float *)uVar22;
            fVar2 = pfVar23[1];
            uVar22 = uVar22 + 8;
            *(float *)((int)lVar17 + 0x1b0) = *(float *)((int)lVar17 + 0x1b0) * *pfVar23;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar2;
            lVar21 = lVar21 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar21 = 2;
          lVar17 = lVar18;
          do {
            iVar20 = (int)lVar17;
            lVar17 = lVar17 + 0x10;
            iVar15 = (int)lVar24;
            lVar24 = lVar24 + 0x10;
            dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar20 + 0x1b0)) +
                              *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                             *(float *)(iVar15 + 0xc));
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar7 + fVar3);
        }
        dVar35 = 3.1415927410125732;
        dVar34 = 6.2831854820251465;
        mobyutil::OrganicDeltAngSpeed
                  (dVar28,(double)(DAT_0071f418 * 3.1415927),
                   (double)(mobyutil::g_FrameTime * 3.1415927),
                   (double)(mobyutil::g_FrameTime * 6.2831855),this,uVar22,uVar25 + 0xa4);
        iVar20 = *(int *)(puVar13 + 0x28);
        fVar2 = *(float *)((int)this + 0x14) - *(float *)(iVar20 + 0x14);
        fVar3 = *(float *)((int)this + 0x10) - *(float *)(iVar20 + 0x10);
        fVar7 = *(float *)(iVar20 + 0x18) - *(float *)((int)this + 0x18);
        dVar33 = ABS((double)fVar7);
        fVar3 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
        fVar2 = *(float *)((int)this + 0x44);
        dVar30 = (double)DAT_0071f418;
        dVar31 = (double)mobyutil::g_FrameTime;
        *(float *)(puVar13 + 0x2b) = fVar7;
        dVar32 = ABS((double)fVar3);
        *(float *)((int)puVar13 + 0x154) = fVar3;
        *(float *)((int)puVar13 + 0x15c) = (float)(dVar32 - dVar33);
        uVar19 = (ulonglong)(*(uint *)((int)puVar13 + 0x154) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0x15c) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar13 + 0x2b) >> 0x1d) & 4;
        uVar22 = uVar19 << 2 | 0x735900;
        uVar19 = uVar19 << 2;
        dVar28 = ABS((double)*(float *)((int)puVar13 + 0x154));
        if ((double)*(float *)((int)puVar13 + 0x15c) - dVar37 < 0.0) {
          dVar28 = dVar33;
        }
        fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)uVar19);
        dVar33 = ABS((double)*(float *)(puVar13 + 0x2b));
        if ((double)*(float *)((int)puVar13 + 0x15c) - dVar37 < 0.0) {
          dVar33 = dVar32;
        }
        fVar7 = *(float *)((int)uVar22 + 4);
        dVar32 = dVar37;
        if (dVar37 < dVar28) {
          lVar17 = uVar16 - 0x270;
          lVar24 = uVar16 - 0xe0;
          lVar21 = uVar16 - 0xf0;
          lVar27 = 2;
          fVar4 = (float)(dVar33 - dVar28) / (float)(dVar33 + dVar28);
          fVar5 = fVar4 * fVar4;
          *(float *)((int)puVar13 + 0x19c) = fVar4;
          *(float *)((int)puVar13 + 0x194) = fVar4;
          *(float *)(puVar13 + 0x33) = fVar4;
          *(float *)(puVar13 + 0x32) = fVar4;
          fVar4 = fVar5 * fVar5;
          *(float *)((int)puVar13 + 0x194) = *(float *)((int)puVar13 + 0x194) * fVar5;
          *(float *)(puVar13 + 0x33) = *(float *)(puVar13 + 0x33) * fVar4;
          *(float *)((int)puVar13 + 0x19c) = *(float *)((int)puVar13 + 0x19c) * fVar4 * fVar5;
          do {
            *(float *)((int)lVar17 + 400) = *(float *)((int)lVar17 + 0x180) * fVar4 * fVar4;
            iVar20 = (int)lVar21;
            lVar21 = lVar21 + 8;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
            lVar24 = lVar24 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar24 = uVar16 - 0xf0;
          uVar22 = ZEXT48(&DAT_007358e0);
          lVar17 = lVar18;
          lVar21 = lVar24;
          do {
            pfVar23 = (float *)uVar22;
            fVar4 = pfVar23[1];
            uVar22 = uVar22 + 8;
            *(float *)((int)lVar17 + 400) = *(float *)((int)lVar17 + 400) * *pfVar23;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar4;
            lVar21 = lVar21 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar17 = 2;
          dVar28 = dVar37;
          do {
            iVar20 = (int)lVar18;
            iVar15 = (int)lVar24;
            lVar18 = lVar18 + 0x10;
            lVar24 = lVar24 + 0x10;
            dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar20 + 400)) +
                              *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                             *(float *)(iVar15 + 0xc));
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          uVar19 = ZEXT48(&DAT_0049a430);
          dVar32 = (double)((float)(dVar28 + 0.7853981852531433) * fVar3 + fVar7);
        }
        dVar28 = (double)mobyutil::MB_DeltAngSpeed
                                   ((double)fVar2,dVar32,(double)(float)(dVar30 * dVar35),
                                    (double)(float)(dVar31 * dVar35),
                                    (double)(float)(dVar31 * dVar34),uVar19,uVar22,uVar25 + 0xa8);
        fVar2 = *(float *)(puVar13 + 0x20);
        *(float *)((int)this + 0x44) = (float)dVar28;
        fVar3 = mobyutil::g_FrameTime;
        dVar30 = (double)(fVar2 - *(float *)((int)this + 0x10));
        dVar31 = (double)(*(float *)((int)puVar13 + 0x104) - *(float *)((int)this + 0x14));
        dVar28 = (double)(*(float *)(puVar13 + 0x21) - *(float *)((int)this + 0x18));
        if (*(char *)((int)this + 0xbc) != '\0') {
          dVar28 = dVar37;
        }
        dVar34 = (double)SQRT((float)(dVar28 * dVar28 +
                                     (double)(float)(dVar30 * dVar30 +
                                                    (double)(float)(dVar31 * dVar31))));
        dVar33 = (double)(float)((double)(DAT_0071f418 * 30.0) / dVar34);
        dVar32 = dVar37;
        if (dVar37 - dVar34 < 0.0) {
          dVar32 = (double)(float)(dVar31 * dVar33);
        }
        dVar35 = dVar37;
        if (dVar37 - dVar34 < 0.0) {
          dVar35 = (double)(float)(dVar30 * dVar33);
        }
        dVar29 = dVar37;
        if (dVar37 - dVar34 < 0.0) {
          dVar29 = (double)(float)(dVar28 * dVar33);
        }
        if (dVar34 - dVar37 < 0.0) {
          dVar32 = (double)(float)(dVar31 * dVar33);
        }
        if (dVar34 - dVar37 < 0.0) {
          dVar35 = (double)(float)(dVar30 * dVar33);
        }
        if (dVar34 - dVar37 < 0.0) {
          dVar29 = (double)(float)(dVar28 * dVar33);
        }
        fVar2 = (float)((double)*(float *)(uVar10 + 100) + dVar32);
        fVar7 = (float)((double)*(float *)(uVar10 + 0x60) + dVar35);
        fVar4 = (float)((double)*(float *)(uVar10 + 0x68) + dVar29);
        *(float *)(uVar10 + 0x60) = fVar7;
        *(float *)(uVar10 + 100) = fVar2;
        *(float *)(uVar10 + 0x68) = fVar4;
        fVar5 = SQRT(fVar4 * fVar4 + fVar7 * fVar7 + fVar2 * fVar2);
        if (fVar3 * 10.0 < fVar5) {
          fVar5 = (fVar3 * 10.0) / fVar5;
          fVar7 = fVar7 * fVar5;
          *(float *)(uVar10 + 0x60) = fVar7;
          *(float *)(uVar10 + 100) = fVar2 * fVar5;
          *(float *)(uVar10 + 0x68) = fVar4 * fVar5;
        }
        fVar7 = *(float *)((int)this + 0x10) + fVar7;
        *(float *)((int)this + 0x10) = fVar7;
        fVar2 = *(float *)((int)this + 0x14) + *(float *)(uVar10 + 100);
        *(float *)((int)this + 0x14) = fVar2;
        fVar3 = *(float *)((int)this + 0x18) + *(float *)(uVar10 + 0x68);
        *(float *)((int)this + 0x18) = fVar3;
        fVar2 = fVar2 - *(float *)(uVar10 + 0x74);
        fVar7 = fVar7 - *(float *)(uVar10 + 0x70);
        fVar3 = fVar3 - *(float *)(uVar10 + 0x78);
        if (64.0 < SQRT(fVar3 * fVar3 + fVar7 * fVar7 + fVar2 * fVar2)) {
          if (uVar11 != 0) {
            auVar38 = ZEXT416(0xffffffff);
            auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
            auVar40 = vectorShiftLeftIntegerWord(auVar38,auVar38);
            auVar38 = loadVectorLeftIndexed(0x84,uVar26);
            auVar39 = loadVectorRightIndexed(0x94,uVar26);
            auVar39 = vectorConvertFromSignedFixedPointWord(auVar38 | auVar39,0);
            auVar38 = loadVectorLeftIndexed(0x14,0x49a430);
            auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar38 = vectorAddFloatingPoint
                                (auVar39,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 |
                                         auVar38 << 0x60);
            auVar38 = vectorMultiplyAddFloatingPoint(auVar41,auVar38,auVar40);
            auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
            auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar12 = storeVectorElementWordIndexed
                               (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x98,
                                (ulonglong)*(uint *)((int)this + 0x78));
            *(undefined4 *)(*(uint *)((int)this + 0x78) + 0x98 & 0xfffffffc) = uVar12;
          }
          mobyfunc::DeleteMoby((MobyInstance *)this);
        }
        uVar36 = 0x3ff0000000000000;
        mobyutil::SetCollDamIn(0x3ff0000000000000,uVar16 - 0x1b0,this,0x10001);
        uVar12 = *(undefined4 *)((int)this + 0x14);
        *(undefined4 *)(puVar13 + 0x18) = *(undefined4 *)((int)this + 0x10);
        uVar6 = *(undefined4 *)((int)this + 0x1c);
        *(undefined4 *)((int)puVar13 + 0xc4) = uVar12;
        *(undefined4 *)((int)puVar13 + 0xcc) = uVar6;
        *(float *)(puVar13 + 0x19) = *(float *)((int)this + 0x18) + 0.75;
        iVar20 = collproc::CollMobySphere(uVar16 - 0x1c0);
        if (((iVar20 != 0) && (CollOutput.pMoby != (MobyInstance *)0x0)) &&
           ((MVar9 = (CollOutput.pMoby)->oClass, MVar9 != 0x365 && MVar9 != 0x363 &&
            (MVar9 != BOLTCRATE_POSSIBLY_FOR_METAL_DETECTOR)))) {
          puVar13[0x12] = 0xffffffffffffffff;
          puVar13[0x14] = 0;
          puVar13[0x15] = 1;
          puVar13[0x16] = 0xffffffffffffffff;
          puVar13[0x17] = 0;
          mobyutil::MB_genericExplosion
                    (dVar37,dVar37,0x4000000000000000,uVar36,0x4010000000000000,uVar36,
                     0x401c000000000000,this,uVar25 + 0x60,0,&DAT_0049a430,0,3,3,5);
          if (uVar11 != 0) {
            auVar38 = ZEXT416(0xffffffff);
            auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
            auVar40 = vectorShiftLeftIntegerWord(auVar38,auVar38);
            auVar38 = loadVectorLeftIndexed(0x84,uVar26);
            auVar39 = loadVectorRightIndexed(0x94,uVar26);
            auVar39 = vectorConvertFromSignedFixedPointWord(auVar38 | auVar39,0);
            auVar38 = loadVectorLeftIndexed(0x14,0x49a430);
            auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar38 = vectorAddFloatingPoint
                                (auVar39,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 |
                                         auVar38 << 0x60);
            auVar38 = vectorMultiplyAddFloatingPoint(auVar41,auVar38,auVar40);
            auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
            auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar12 = storeVectorElementWordIndexed
                               (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x98,
                                (ulonglong)*(uint *)((int)this + 0x78));
            *(undefined4 *)(*(uint *)((int)this + 0x78) + 0x98 & 0xfffffffc) = uVar12;
          }
          mobyfunc::DeleteMoby((MobyInstance *)this);
        }
        uVar12 = *(undefined4 *)((int)this + 0x14);
        *(undefined4 *)(puVar13 + 0x18) = *(undefined4 *)((int)this + 0x10);
        uVar6 = *(undefined4 *)((int)this + 0x1c);
        *(undefined4 *)((int)puVar13 + 0xc4) = uVar12;
        *(undefined4 *)((int)puVar13 + 0xcc) = uVar6;
        *(float *)(puVar13 + 0x19) = *(float *)((int)this + 0x18) + 0.55;
        iVar20 = collproc::CollSphere(uVar16 - 0x1c0);
        if (iVar20 != 0) {
          fVar2 = CollOutput.push.y - *(float *)((int)puVar13 + 0xc4);
          fVar3 = CollOutput.push.z - *(float *)(puVar13 + 0x19);
          *(float *)((int)this + 0x10) =
               *(float *)((int)this + 0x10) + (CollOutput.push.x - *(float *)(puVar13 + 0x18));
          *(float *)((int)this + 0x14) = *(float *)((int)this + 0x14) + fVar2;
          *(float *)((int)this + 0x18) = *(float *)((int)this + 0x18) + fVar3;
        }
        if (*(int *)(uVar10 + 0x98) == 0) {
          if (uVar11 != 0) {
            auVar38 = ZEXT416(0xffffffff);
            auVar39 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
            auVar38 = loadVectorLeftIndexed(0x84,uVar26);
            auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
            auVar39 = loadVectorRightIndexed(0x94,uVar26);
            auVar39 = vectorConvertFromSignedFixedPointWord(auVar38 | auVar39,0);
            auVar38 = loadVectorLeftIndexed(0x14,0x49a430);
            auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar38 = vectorAddFloatingPoint
                                (auVar39,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 |
                                         auVar38 << 0x60);
            auVar38 = vectorMultiplyAddFloatingPoint(auVar41,auVar38,auVar40);
            auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
            auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar12 = storeVectorElementWordIndexed
                               (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x98,
                                (ulonglong)*(uint *)((int)this + 0x78));
            *(undefined4 *)(*(uint *)((int)this + 0x78) + 0x98 & 0xfffffffc) = uVar12;
          }
          mobyfunc::DeleteMoby((MobyInstance *)this);
        }
      }
      else if (bVar1 < 4) {
        puVar13[0x12] = 0xffffffffffffffff;
        puVar13[0x14] = 0;
        puVar13[0x15] = 1;
        puVar13[0x16] = 0xffffffffffffffff;
        puVar13[0x17] = 0;
        mobyutil::MB_genericExplosion
                  (0,0,0x4000000000000000,0x3ff0000000000000,0x4010000000000000,0x3ff0000000000000,
                   0x401c000000000000,this,uVar25 + 0x60,0,0,1,3,3,5);
        if (uVar11 != 0) {
          auVar38 = ZEXT416(0xffffffff);
          auVar39 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
          auVar38 = loadVectorLeftIndexed(0x84,uVar26);
          auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
          auVar39 = loadVectorRightIndexed(0x94,uVar26);
          auVar39 = vectorConvertFromSignedFixedPointWord(auVar38 | auVar39,0);
          auVar38 = loadVectorLeftIndexed(0x14,0x49a430);
          auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar38 = vectorAddFloatingPoint
                              (auVar39,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60
                              );
          auVar38 = vectorMultiplyAddFloatingPoint(auVar41,auVar38,auVar40);
          auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
          auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar12 = storeVectorElementWordIndexed
                             (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x98,
                              (ulonglong)*(uint *)((int)this + 0x78));
          *(undefined4 *)(*(uint *)((int)this + 0x78) + 0x98 & 0xfffffffc) = uVar12;
        }
        mobyfunc::DeleteMoby((MobyInstance *)this);
      }
      mobyutil::MB_RegisterLameShadow(1.0,(MobyInstance *)this);
    }
  }
  return;
}



//==== 0049b850  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_87(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 87 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_87(MobyInstance *moby)

{
  return moby;
}



//==== 0049b854  ns=mobyupdate_helpers  size=0x14
// sig: undefined M870_0049b854(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M870_0049b854(void)

{
  DAT_008c7f14 = 0x10000;
  return;
}



//==== 0049b880  ns=mobyupdate_helpers  size=0x6f8
// sig: undefined M870_0049b880(void)
// callers(1): 0049c7d8 mobyupdate_unsorted::UpdateMoby_870
// callees(3): 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots

double mobyupdate_helpers::M870_0049b880(int param_1)

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
  ushort uVar11;
  int iVar12;
  ulonglong *puVar13;
  int iVar14;
  float fVar15;
  int iVar16;
  uint uVar17;
  float fVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  float *pfVar24;
  ulonglong unaff_r28;
  longlong lVar25;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ushort *puVar26;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  ulonglong in_f26;
  double dVar32;
  ulonglong in_f27;
  double dVar33;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar34;
  ulonglong in_f30;
  double dVar35;
  ulonglong in_f31;
  double dVar36;
  
  uVar19 = ZEXT48(&stack0x00000000);
  lVar22 = uVar19 - 0x150;
  puVar13 = (ulonglong *)lVar22;
  *puVar13 = uVar19;
  puVar13[0x2c] = in_LR;
  puVar13[0x24] = in_f26;
  puVar13[0x25] = in_f27;
  puVar13[0x26] = in_f28;
  puVar13[0x27] = in_f29;
  puVar13[0x28] = in_f30;
  puVar13[0x29] = in_f31;
  puVar13[0x23] = unaff_r31;
  puVar13[0x20] = unaff_r28;
  iVar12 = *(int *)(param_1 + 0x78);
  puVar13[0x22] = unaff_r30;
  bVar1 = *(byte *)(param_1 + 0x21);
  dVar36 = 0.7853981852531433;
  fVar2 = *(float *)(param_1 + 0x18);
  puVar13[0x21] = unaff_r29;
  iVar12 = *(int *)(iVar12 + 0x160);
  if (bVar1 == 0xff) {
    fVar2 = *(float *)(param_1 + 0x10) - *(float *)(iVar12 + 0x10);
    fVar3 = *(float *)(param_1 + 0x14) - *(float *)(iVar12 + 0x14);
    fVar4 = ABS(fVar2);
    fVar9 = ABS(fVar3);
    *(float *)(puVar13 + 0x11) = fVar2;
    *(float *)((int)puVar13 + 0x8c) = fVar3;
    *(float *)(puVar13 + 0x12) = fVar4 - fVar9;
    dVar36 = 0.0;
    uVar20 = (ulonglong)(*(uint *)(puVar13 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar13 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar13 + 0x8c) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar13 + 0x11));
    if (*(float *)(puVar13 + 0x12) - 0.0 < 0.0) {
      fVar2 = fVar9;
    }
    fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    fVar5 = ABS(*(float *)((int)puVar13 + 0x8c));
    if (*(float *)(puVar13 + 0x12) - 0.0 < 0.0) {
      fVar5 = fVar4;
    }
    if (0.0 < fVar2) {
      lVar27 = 2;
      fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
      fVar4 = fVar2 * fVar2;
      *(float *)((int)puVar13 + 0xd4) = fVar2;
      *(float *)(puVar13 + 0x1b) = fVar2;
      *(float *)((int)puVar13 + 0xdc) = fVar2;
      *(float *)(puVar13 + 0x1c) = fVar2;
      lVar25 = uVar19 - 0x140;
      fVar2 = fVar4 * fVar4;
      lVar21 = uVar19 - 0x7c;
      lVar23 = uVar19 - 0x6c;
      *(float *)(puVar13 + 0x1b) = *(float *)(puVar13 + 0x1b) * fVar4;
      *(float *)((int)puVar13 + 0xdc) = *(float *)((int)puVar13 + 0xdc) * fVar2;
      *(float *)(puVar13 + 0x1c) = *(float *)(puVar13 + 0x1c) * fVar2 * fVar4;
      do {
        *(float *)((int)lVar25 + 0xd4) = *(float *)((int)lVar25 + 0xc4) * fVar2 * fVar2;
        iVar12 = (int)lVar21;
        lVar21 = lVar21 + 8;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)(iVar12 + 4) * fVar2 * fVar2;
        lVar23 = lVar23 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar25 = uVar19 - 0x7c;
      pfVar24 = (float *)&DAT_007358e0;
      lVar21 = lVar22;
      lVar23 = lVar25;
      do {
        fVar2 = *pfVar24;
        fVar4 = pfVar24[1];
        pfVar24 = pfVar24 + 2;
        *(float *)((int)lVar21 + 0xd4) = *(float *)((int)lVar21 + 0xd4) * fVar2;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar4;
        lVar23 = lVar23 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar21 = 2;
      do {
        iVar12 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        iVar14 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar12 + 0xd4)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar36 = (double)((float)(dVar36 + 0.7853981852531433) * fVar9 + fVar3);
    }
  }
  else {
    fVar3 = *(float *)(param_1 + 0x10);
    fVar9 = *(float *)(iVar12 + 0x10);
    fVar4 = *(float *)(param_1 + 0x14);
    fVar5 = *(float *)(iVar12 + 0x14);
    fVar10 = fVar3 - fVar9;
    fVar15 = fVar4 - fVar5;
    fVar8 = ABS(fVar10);
    fVar6 = ABS(fVar15);
    *(float *)((int)puVar13 + 0x7c) = fVar10;
    *(float *)(puVar13 + 0x10) = fVar15;
    *(float *)((int)puVar13 + 0x84) = fVar8 - fVar6;
    dVar32 = 0.0;
    dVar35 = (double)(DAT_008c7f64 * -0.017453292);
    fVar15 = DAT_008c7f64 * 0.017453292;
    uVar20 = (ulonglong)(*(uint *)((int)puVar13 + 0x7c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar13 + 0x84) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar13 + 0x10) >> 0x1d) & 4;
    fVar10 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar7 = ABS(*(float *)((int)puVar13 + 0x7c));
    if (*(float *)((int)puVar13 + 0x84) - 0.0 < 0.0) {
      fVar7 = fVar6;
    }
    fVar6 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    fVar18 = ABS(*(float *)(puVar13 + 0x10));
    if (*(float *)((int)puVar13 + 0x84) - 0.0 < 0.0) {
      fVar18 = fVar8;
    }
    dVar31 = dVar32;
    if (0.0 < fVar7) {
      lVar21 = uVar19 - 0x140;
      lVar25 = uVar19 - 0x8c;
      lVar23 = uVar19 - 0x9c;
      lVar27 = 2;
      fVar7 = (fVar18 - fVar7) / (fVar18 + fVar7);
      fVar8 = fVar7 * fVar7;
      *(float *)((int)puVar13 + 0xb4) = fVar7;
      *(float *)(puVar13 + 0x17) = fVar7;
      *(float *)((int)puVar13 + 0xbc) = fVar7;
      *(float *)(puVar13 + 0x18) = fVar7;
      fVar7 = fVar8 * fVar8;
      *(float *)(puVar13 + 0x17) = *(float *)(puVar13 + 0x17) * fVar8;
      *(float *)((int)puVar13 + 0xbc) = *(float *)((int)puVar13 + 0xbc) * fVar7;
      *(float *)(puVar13 + 0x18) = *(float *)(puVar13 + 0x18) * fVar7 * fVar8;
      do {
        *(float *)((int)lVar21 + 0xb4) = *(float *)((int)lVar21 + 0xa4) * fVar7 * fVar7;
        iVar14 = (int)lVar23;
        lVar23 = lVar23 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar14 + 4) * fVar7 * fVar7;
        lVar25 = lVar25 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar25 = uVar19 - 0x9c;
      pfVar24 = (float *)&DAT_007358e0;
      lVar21 = lVar22;
      lVar23 = lVar25;
      do {
        fVar7 = *pfVar24;
        fVar8 = pfVar24[1];
        pfVar24 = pfVar24 + 2;
        *(float *)((int)lVar21 + 0xb4) = *(float *)((int)lVar21 + 0xb4) * fVar7;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar8;
        lVar23 = lVar23 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar23 = 2;
      lVar21 = lVar22;
      do {
        iVar14 = (int)lVar21;
        iVar16 = (int)lVar25;
        lVar21 = lVar21 + 0x10;
        lVar25 = lVar25 + 0x10;
        dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar14 + 0xb4)) +
                          *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc)
                         );
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar10 + fVar6);
    }
    fVar5 = fVar5 - fVar4;
    fVar9 = fVar9 - fVar3;
    fVar2 = *(float *)(iVar12 + 0x18) - fVar2;
    puVar26 = (ushort *)(&mobyutil::g_MobyGroups)[bVar1];
    dVar33 = (double)SQRT(fVar2 * fVar2 + fVar9 * fVar9 + fVar5 * fVar5);
    dVar34 = (double)fVar15;
    do {
      uVar17 = *puVar26 & 0x7fff;
      if ((MobyInstance[uVar17].state == '\a') ||
         (fVar2 = MobyInstance[uVar17].pos.y - *(float *)(iVar12 + 0x14),
         fVar3 = MobyInstance[uVar17].pos.x - *(float *)(iVar12 + 0x10),
         fVar9 = MobyInstance[uVar17].pos.z - *(float *)(iVar12 + 0x18), dVar29 = dVar34,
         (double)SQRT(fVar9 * fVar9 + fVar3 * fVar3 + fVar2 * fVar2) < dVar33)) {
        fVar2 = MobyInstance[uVar17].pos.x - *(float *)(iVar12 + 0x10);
        fVar3 = MobyInstance[uVar17].pos.y - *(float *)(iVar12 + 0x14);
        dVar28 = ABS((double)fVar2);
        dVar30 = ABS((double)fVar3);
        *(float *)(puVar13 + 0xe) = fVar2;
        *(float *)((int)puVar13 + 0x74) = fVar3;
        *(float *)(puVar13 + 0xf) = (float)(dVar28 - dVar30);
        uVar20 = (ulonglong)(*(uint *)(puVar13 + 0xe) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar13 + 0xf) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0x74) >> 0x1d) & 4;
        dVar29 = ABS((double)*(float *)(puVar13 + 0xe));
        if ((double)*(float *)(puVar13 + 0xf) - dVar32 < 0.0) {
          dVar29 = dVar30;
        }
        fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
        dVar30 = ABS((double)*(float *)((int)puVar13 + 0x74));
        if ((double)*(float *)(puVar13 + 0xf) - dVar32 < 0.0) {
          dVar30 = dVar28;
        }
        fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
        dVar28 = dVar32;
        if (dVar32 < dVar29) {
          lVar21 = uVar19 - 0x140;
          lVar25 = uVar19 - 0xac;
          lVar23 = uVar19 - 0xbc;
          lVar27 = 2;
          fVar9 = (float)(dVar30 - dVar29) / (float)(dVar30 + dVar29);
          fVar4 = fVar9 * fVar9;
          *(float *)((int)puVar13 + 0x94) = fVar9;
          *(float *)(puVar13 + 0x13) = fVar9;
          *(float *)((int)puVar13 + 0x9c) = fVar9;
          *(float *)(puVar13 + 0x14) = fVar9;
          fVar9 = fVar4 * fVar4;
          *(float *)(puVar13 + 0x13) = *(float *)(puVar13 + 0x13) * fVar4;
          *(float *)((int)puVar13 + 0x9c) = *(float *)((int)puVar13 + 0x9c) * fVar9;
          *(float *)(puVar13 + 0x14) = *(float *)(puVar13 + 0x14) * fVar9 * fVar4;
          do {
            *(float *)((int)lVar21 + 0x94) = *(float *)((int)lVar21 + 0x84) * fVar9 * fVar9;
            iVar14 = (int)lVar23;
            lVar23 = lVar23 + 8;
            lVar21 = lVar21 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)(iVar14 + 4) * fVar9 * fVar9;
            lVar25 = lVar25 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar25 = uVar19 - 0xbc;
          pfVar24 = (float *)&DAT_007358e0;
          lVar21 = lVar22;
          lVar23 = lVar25;
          do {
            fVar9 = *pfVar24;
            fVar4 = pfVar24[1];
            pfVar24 = pfVar24 + 2;
            *(float *)((int)lVar21 + 0x94) = *(float *)((int)lVar21 + 0x94) * fVar9;
            lVar21 = lVar21 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar4;
            lVar23 = lVar23 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar23 = 2;
          lVar21 = lVar22;
          dVar29 = dVar32;
          do {
            iVar14 = (int)lVar21;
            iVar16 = (int)lVar25;
            lVar21 = lVar21 + 0x10;
            lVar25 = lVar25 + 0x10;
            dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar14 + 0x94)) +
                              *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                             *(float *)(iVar16 + 0xc));
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          dVar28 = (double)((float)(dVar29 + dVar36) * fVar2 + fVar3);
        }
        dVar28 = (double)fastfunc::FastDiffRots(dVar28,dVar31);
        if (((dVar28 <= dVar32) || (dVar29 = dVar28, dVar34 <= dVar28)) &&
           (dVar29 = dVar34, dVar35 < dVar28 && dVar28 < dVar32)) {
          dVar35 = dVar28;
        }
      }
      uVar11 = *puVar26;
      puVar26 = puVar26 + 1;
      dVar34 = dVar29;
    } while (-1 < (short)uVar11);
    dVar36 = (double)fastfunc::FastSubRots((float)dVar29,(float)dVar35);
    dVar36 = (double)fastfunc::FastWrapRot((float)dVar35,(float)(dVar36 * 0.5));
    dVar36 = (double)fastfunc::FastWrapRot((float)dVar36,(float)dVar31);
  }
  return dVar36;
}



//==== 0049bf78  ns=mobyupdate_helpers  size=0x5c
// sig: undefined M870_0049bf78(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M870_0049bf78(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)];
  do {
    if (MobyInstance[*puVar2 & 0x7fff].state == '\x01') {
      MobyInstance[*puVar2 & 0x7fff].state = '\x02';
    }
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
  } while (-1 < (short)uVar1);
  return;
}



//==== 0049bff8  ns=mobyupdate_helpers  size=0x760
// sig: undefined M870_0049bff8(void)
// callers(1): 0049c7d8 mobyupdate_unsorted::UpdateMoby_870
// callees(10): 000fcbe8 mobyutil::MB_randRangeFloat; 000fcd60 mobyutil::MB_DistributeBolts; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00111ba0 mobyutil::MB_getTargetInArea; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M870_0049bff8(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  Spline *pSVar8;
  undefined2 uVar9;
  ulonglong *puVar10;
  float fVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  ushort *puVar18;
  longlong lVar16;
  longlong lVar17;
  float *pfVar22;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar23;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar24;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f31;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar17 = uVar12 - 0xe0;
  puVar10 = (ulonglong *)lVar17;
  *puVar10 = uVar12;
  puVar10[0x1e] = in_LR;
  puVar10[0x1b] = in_f31;
  puVar10[0x19] = unaff_r30;
  puVar10[0x1a] = unaff_r31;
  pvVar5 = param_1->pVar;
  uVar24 = ZEXT48(pvVar5);
  iVar14 = *(int *)((int)pvVar5 + 0x38);
  puVar10[0x18] = unaff_r29;
  if (iVar14 != 0) {
    dVar26 = (double)mobyutil::MB_randRangeFloat(180.0,240.0);
    uVar13 = fastfunc::FastDoubleToInt((double)(float)(dVar26 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar5 + 0x1ac) = uVar13;
    *(undefined4 *)((int)pvVar5 + 0x38) = 0;
  }
  fastfunc::FastDecTimerS32(uVar24 + 0x1ac);
  dVar26 = 0.0;
  *(undefined4 *)((int)puVar10 + 0x74) = 0;
  iVar14 = mobyutil::MB_damage(param_1,0x330000,0);
  iVar15 = mobyutil::MB_HandleDamage
                     (param_1,iVar14,uVar24 + 0x20,0,puVar10 + 0xe,(int)puVar10 + 0x74,0,4);
  if ((*(int *)(puVar10 + 0xe) != 1) && (param_1->state != '\r')) {
    fVar3 = *(float *)((int)pvVar5 + 0x20) - *(float *)((int)puVar10 + 0x74);
    *(float *)((int)pvVar5 + 0x20) = fVar3;
    if ((double)fVar3 <= dVar26) {
      iVar15 = 1;
    }
    if (param_1->group != 0xff) {
      puVar18 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)param_1->group];
      do {
        if (MobyInstance[*puVar18 & 0x7fff].state == '\x01') {
          MobyInstance[*puVar18 & 0x7fff].state = '\x02';
        }
        uVar4 = *puVar18;
        puVar18 = puVar18 + 1;
      } while (-1 < (short)uVar4);
    }
    if (iVar15 < 3) {
      if ((-1 < iVar15) && (0 < iVar15)) {
        param_1->state = '\r';
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        fVar3 = mobyutil::g_FrameTime;
        *(float *)((int)pvVar5 + 0x88) = mobyutil::g_FrameTime * 8.0;
        *(undefined4 *)((int)pvVar5 + 0xc0) = 0x41600000;
        *(undefined4 *)((int)pvVar5 + 0xc4) = 0x41d80000;
        *(float *)((int)pvVar5 + 0x8c) = fVar3 * 10.0;
        uVar6 = *(uint *)(iVar14 + 0x10);
        uVar7 = *(uint *)(iVar14 + 0x14);
        dVar27 = ABS((double)*(float *)(iVar14 + 0x10));
        dVar29 = ABS((double)*(float *)(iVar14 + 0x14));
        *(float *)(puVar10 + 0xf) = (float)(dVar27 - dVar29);
        uVar19 = (ulonglong)(uVar6 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar10 + 0xf) >> 0x1e) & 2 | (ulonglong)(uVar7 >> 0x1d) & 4;
        uVar21 = uVar19 << 2;
        dVar28 = dVar27;
        if ((double)*(float *)(puVar10 + 0xf) - dVar26 < 0.0) {
          dVar28 = dVar29;
        }
        fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)uVar21);
        if ((double)*(float *)(puVar10 + 0xf) - dVar26 < 0.0) {
          dVar29 = dVar27;
        }
        fVar1 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
        dVar27 = dVar26;
        if (dVar26 < dVar28) {
          lVar16 = uVar12 - 0xd0;
          lVar23 = uVar12 - 0x50;
          lVar20 = uVar12 - 0x60;
          lVar25 = 2;
          fVar2 = (float)(dVar29 - dVar28) / (float)(dVar29 + dVar28);
          fVar11 = fVar2 * fVar2;
          *(float *)((int)puVar10 + 0x8c) = fVar2;
          *(float *)((int)puVar10 + 0x84) = fVar2;
          *(float *)(puVar10 + 0x11) = fVar2;
          *(float *)(puVar10 + 0x10) = fVar2;
          fVar2 = fVar11 * fVar11;
          *(float *)((int)puVar10 + 0x84) = *(float *)((int)puVar10 + 0x84) * fVar11;
          *(float *)(puVar10 + 0x11) = *(float *)(puVar10 + 0x11) * fVar2;
          *(float *)((int)puVar10 + 0x8c) = *(float *)((int)puVar10 + 0x8c) * fVar2 * fVar11;
          do {
            *(float *)((int)lVar16 + 0x80) = *(float *)((int)lVar16 + 0x70) * fVar2 * fVar2;
            iVar14 = (int)lVar20;
            lVar20 = lVar20 + 8;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)(iVar14 + 4) * fVar2 * fVar2;
            lVar23 = lVar23 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar25 = 4;
          lVar23 = uVar12 - 0x60;
          uVar21 = ZEXT48(&DAT_007358e0);
          lVar16 = lVar17;
          lVar20 = lVar23;
          do {
            pfVar22 = (float *)uVar21;
            fVar2 = pfVar22[1];
            uVar21 = uVar21 + 8;
            *(float *)((int)lVar16 + 0x80) = *(float *)((int)lVar16 + 0x80) * *pfVar22;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar2;
            lVar20 = lVar20 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar16 = 2;
          dVar29 = dVar26;
          do {
            iVar14 = (int)lVar17;
            iVar15 = (int)lVar23;
            lVar17 = lVar17 + 0x10;
            lVar23 = lVar23 + 0x10;
            dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar14 + 0x80)) +
                              *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                             *(float *)(iVar15 + 0xc));
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          dVar27 = (double)((float)(dVar29 + 0.7853981852531433) * fVar3 + fVar1);
        }
        mobyutil::MB_StartKick(dVar27,param_1,uVar24 + 0x70,uVar21,0x12,1,0);
        *(undefined1 *)((int)pvVar5 + 0x67) = 0xfa;
        mobyutil::MB_DistributeBolts(param_1,2,3,0,0xffffffffffffffff);
      }
    }
    else if (iVar15 < 0xb) {
      auVar30 = ZEXT416(0xffffffff);
      auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
      param_1->state = '\f';
      fVar1 = mobyutil::g_FrameTime;
      auVar31 = vectorShiftLeftIntegerWord(auVar30,auVar30);
      auVar30 = loadVectorLeftIndexed(0x10,0x49bfd4);
      auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar32 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar30 = vectorMultiplyAddFloatingPoint
                          (auVar32,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,
                           auVar31);
      fVar3 = DAT_008c7f40 * mobyutil::g_FrameTime;
      auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
      auVar30 = vectorSplatHalfWord(auVar30,1);
      uVar9 = storeVectorElementHalfWordIndexed(auVar30,0x26,uVar24);
      *(undefined2 *)((int)pvVar5 + 0x26) = uVar9;
      *(float *)((int)pvVar5 + 0x88) = fVar3;
      fVar3 = DAT_008c7f44;
      *(undefined4 *)((int)pvVar5 + 0xc0) = 0x41700000;
      *(undefined4 *)((int)pvVar5 + 0xc4) = 0x41e80000;
      *(float *)((int)pvVar5 + 0x8c) = fVar3 * fVar1;
      uVar6 = *(uint *)(iVar14 + 0x10);
      uVar7 = *(uint *)(iVar14 + 0x14);
      dVar27 = ABS((double)*(float *)(iVar14 + 0x10));
      dVar29 = ABS((double)*(float *)(iVar14 + 0x14));
      *(float *)((int)puVar10 + 0x7c) = (float)(dVar27 - dVar29);
      uVar19 = (ulonglong)(uVar6 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar10 + 0x7c) >> 0x1e) & 2 |
               (ulonglong)(uVar7 >> 0x1d) & 4;
      uVar21 = uVar19 << 2;
      dVar28 = dVar27;
      if ((double)*(float *)((int)puVar10 + 0x7c) - dVar26 < 0.0) {
        dVar28 = dVar29;
      }
      fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)uVar21);
      if ((double)*(float *)((int)puVar10 + 0x7c) - dVar26 < 0.0) {
        dVar29 = dVar27;
      }
      fVar1 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
      dVar27 = dVar26;
      if (dVar26 < dVar28) {
        lVar16 = uVar12 - 0xd0;
        lVar23 = uVar12 - 0x30;
        lVar20 = uVar12 - 0x40;
        lVar25 = 2;
        fVar2 = (float)(dVar29 - dVar28) / (float)(dVar29 + dVar28);
        fVar11 = fVar2 * fVar2;
        *(float *)((int)puVar10 + 0xac) = fVar2;
        *(float *)((int)puVar10 + 0xa4) = fVar2;
        *(float *)(puVar10 + 0x15) = fVar2;
        *(float *)(puVar10 + 0x14) = fVar2;
        fVar2 = fVar11 * fVar11;
        *(float *)((int)puVar10 + 0xa4) = *(float *)((int)puVar10 + 0xa4) * fVar11;
        *(float *)(puVar10 + 0x15) = *(float *)(puVar10 + 0x15) * fVar2;
        *(float *)((int)puVar10 + 0xac) = *(float *)((int)puVar10 + 0xac) * fVar2 * fVar11;
        do {
          *(float *)((int)lVar16 + 0xa0) = *(float *)((int)lVar16 + 0x90) * fVar2 * fVar2;
          iVar14 = (int)lVar20;
          lVar20 = lVar20 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)(iVar14 + 4) * fVar2 * fVar2;
          lVar23 = lVar23 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar23 = uVar12 - 0x40;
        uVar21 = ZEXT48(&DAT_007358e0);
        lVar16 = lVar17;
        lVar20 = lVar23;
        do {
          pfVar22 = (float *)uVar21;
          fVar2 = pfVar22[1];
          uVar21 = uVar21 + 8;
          *(float *)((int)lVar16 + 0xa0) = *(float *)((int)lVar16 + 0xa0) * *pfVar22;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar2;
          lVar20 = lVar20 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar16 = 2;
        dVar29 = dVar26;
        do {
          iVar14 = (int)lVar17;
          iVar15 = (int)lVar23;
          lVar17 = lVar17 + 0x10;
          lVar23 = lVar23 + 0x10;
          dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar14 + 0xa0)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar27 = (double)((float)(dVar29 + 0.7853981852531433) * fVar3 + fVar1);
      }
      mobyutil::MB_StartKick(dVar27,param_1,uVar24 + 0x70,uVar21,0xf,1,0);
      *(undefined1 *)((int)pvVar5 + 0x67) = 0xfa;
    }
    mobyutil::MB_UpdateLightsTransition(param_1,uVar24 + 0x60);
  }
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar24 + 0x60);
  if (*(int *)((int)pvVar5 + 0x1ac) == 0) {
    if (param_1->state == '\x01') {
      if ((param_1 == DAT_00969f20) || (param_1 == DAT_00969f1c)) {
        dVar26 = 6.0;
      }
    }
    else {
      dVar26 = (double)DAT_008c7f5c;
    }
  }
  else {
    dVar26 = (double)(DAT_008c7f5c + 6.0);
  }
  *(float *)((int)pvVar5 + 0x1a0) = (float)dVar26;
  pSVar8 = Splines[*(int *)((int)pvVar5 + 0x1b0)];
  iVar14 = mobyutil::MB_getTargetInArea
                     (dVar26,param_1,uVar24 + 0x120,pSVar8,0,0,pSVar8->points,pSVar8->cnt);
  if ((iVar14 != 2) &&
     ((fVar3 = *(float *)((int)pvVar5 + 0x174) - *(float *)((int)pvVar5 + 0x124),
      fVar1 = *(float *)((int)pvVar5 + 0x170) - *(float *)((int)pvVar5 + 0x120),
      *(float *)((int)pvVar5 + 0x1a0) < SQRT(fVar1 * fVar1 + fVar3 * fVar3) ||
      (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar5 + 0x128)))))) {
    *(undefined4 *)((int)pvVar5 + 0x164) = 2;
  }
  if (*(int *)((int)pvVar5 + 0x160) == 0) {
    *(MobyInstance **)((int)pvVar5 + 0x160) = g_heroMobyPtr;
  }
  return;
}



//==== 0049c7d8  ns=mobyupdate_unsorted  size=0x14a0
// sig: undefined UpdateMoby_870(MobyInstance * moby)
// callers(0): 
// callees(20): 0005e598 collproc::CollMobySphere; 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00100f8c mobyutil::MB_InitDefaultParams; 00101058 mobyutil::MB_UpdateNavMove; 00108180 mobyutil::MB_computeLobVelocity; 00109af0 mobyutil::Delt; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick; 00110b70 mobyutil::MB_IsPntInCuboid; 0049b880 mobyupdate_helpers::M870_0049b880; 0049bff8 mobyupdate_helpers::M870_0049bff8; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt; 005e8338 FUN_005e8338

/* Moby 870 */

void mobyupdate_unsorted::UpdateMoby_870(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  MobyModeBit MVar6;
  ushort uVar7;
  void *pvVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  Cuboid *pCVar14;
  longlong lVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  ushort *puVar21;
  double dVar22;
  undefined8 uVar23;
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
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float local_120;
  float local_11c;
  undefined4 local_118;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  undefined1 auStack_e0 [16];
  float local_d0;
  float local_cc;
  undefined4 local_c8;
  undefined1 auStack_c0 [16];
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  MobyInstance *local_a0;
  undefined4 local_9c;
  undefined4 local_94;
  undefined4 local_90;
  longlong local_80;
  
  lVar15 = (longlong)(int)moby;
  pvVar8 = moby->pVar;
  uVar20 = ZEXT48(pvVar8);
  mobyupdate_helpers::M870_0049bff8();
  iVar17 = *(int *)((int)pvVar8 + 0x160);
  bVar1 = moby->state;
  fVar3 = moby->pClass->gScale * DAT_008c7f38;
  moby->unk58 = 0.8;
  moby->scale = fVar3;
  if (bVar1 < 7) {
    if (bVar1 == 6) {
      iVar17 = fastfunc::FastDecTimerS32(uVar20 + 0x1a8);
      if (iVar17 != 0) {
        moby->state = '\a';
        dVar22 = (double)mobyutil::MB_randRangeFloat
                                   (*(float *)((int)pvVar8 + 0x198) * 0.017453292,
                                    *(float *)((int)pvVar8 + 0x198) * -0.017453292);
        *(float *)((int)pvVar8 + 0x194) = (float)dVar22;
        if (moby->animationId != '\x16') {
          local_80 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar15,0x16,0,(int)(animationSpeed * 10.5));
        }
      }
    }
    else if (bVar1 == 5) {
      uVar23 = FUN_005e8338((double)(*(float *)((int)pvVar8 + 0x120) - (moby->pos).x),
                            (double)(*(float *)((int)pvVar8 + 0x124) - (moby->pos).y));
      mobyutil::OrganicDeltAngSpeed
                (uVar23,0x3fa99999a0000000,0x3fd3333340000000,
                 (double)(mobyutil::g_FrameTime * 6.2831855),lVar15,&DAT_0049c758,uVar20 + 400);
      if (*(int *)((int)pvVar8 + 0x164) != 2) {
        moby->state = '\x06';
        local_80 = (longlong)*(int *)((int)pvVar8 + 0x1b8);
        mobyutil::MB_randRangeFloat(0.0,(float)local_80);
        uVar16 = fastfunc::FastDoubleToInt();
        *(undefined4 *)((int)pvVar8 + 0x1a8) = uVar16;
      }
    }
    else if (bVar1 == 4) {
      uVar18 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x70));
      if (((uVar18 & 1) != 0) && (moby->state = '\x05', moby->animationId != '\x14')) {
        mobyutil::MB_SetAnimation(lVar15,0x14,0,5);
      }
    }
    else if (bVar1 == 3) {
      if ((-1 < *(int *)((int)pvVar8 + 0x1c0)) &&
         (iVar17 = mobyutil::MB_IsPntInCuboid
                             (&g_heroPosition,(longlong)*(int *)((int)pvVar8 + 0x1c0)), iVar17 != 0)
         ) {
        moby->state = '\x04';
        pCVar14 = Cuboids;
        iVar17 = *(int *)((int)pvVar8 + 0x1bc);
        fVar3 = Cuboids[iVar17].pos.x;
        *(float *)((int)pvVar8 + 0x170) = fVar3;
        fVar4 = pCVar14[iVar17].pos.y;
        *(float *)((int)pvVar8 + 0x174) = fVar4;
        *(float *)((int)pvVar8 + 0x178) = pCVar14[iVar17].pos.z;
        *(float *)((int)pvVar8 + 0x17c) = pCVar14[iVar17].pos.w;
        fVar4 = (moby->pos).y - fVar4;
        fVar3 = (moby->pos).x - fVar3;
        fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4) / (float)(longlong)(animationSpeed * 60.5);
        *(float *)((int)pvVar8 + 0x88) = fVar3;
        dVar22 = (double)mobyutil::MB_computeLobVelocity
                                   ((double)fVar3,-(double)*(float *)((int)pvVar8 + 0x80),
                                    lVar15 + 0x10,uVar20 + 0x170);
        *(float *)((int)pvVar8 + 0x8c) = (float)dVar22;
        *(undefined1 *)((int)pvVar8 + 0xad) = 3;
        *(undefined4 *)((int)pvVar8 + 0x94) = 5;
        FUN_005e8338((double)(*(float *)((int)pvVar8 + 0x170) - (moby->pos).x),
                     (double)(*(float *)((int)pvVar8 + 0x174) - (moby->pos).y));
        mobyutil::MB_StartKick(lVar15,uVar20 + 0x70);
        if (moby->animationId != '\0') {
          mobyutil::MB_SetAnimation(lVar15,0,0,5);
        }
      }
    }
    else if (bVar1 == 2) {
      moby->unk58 = 1.5;
      if (moby->animationId == '\x06') {
        if (*(int *)((int)pvVar8 + 0x1a8) == 0) {
          dVar22 = (double)mobyutil::MB_randRangeFloat(0.0,20.0);
          uVar16 = fastfunc::FastDoubleToInt((double)(float)(dVar22 * (double)animationSpeed));
          *(undefined4 *)((int)pvVar8 + 0x1a8) = uVar16;
        }
        else {
          iVar17 = fastfunc::FastDecTimerS32(uVar20 + 0x1a8);
          if ((iVar17 != 0) && (moby->animationId != '\x15')) {
            local_80 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar15,0x15,0,(int)(animationSpeed * 10.5));
          }
        }
      }
      else if ((moby->field43_0x70 & 2U) != 0) {
        fVar3 = (moby->pos).y - g_heroPosition.y;
        fVar4 = (moby->pos).x - g_heroPosition.x;
        if (DAT_008c7f5c <= SQRT(fVar4 * fVar4 + fVar3 * fVar3)) {
          moby->state = '\x05';
          if (moby->animationId != '\x14') {
            local_80 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar15,0x14,0,(int)(animationSpeed * 10.5));
          }
        }
        else {
          moby->state = '\a';
          dVar22 = (double)mobyutil::MB_randRangeFloat
                                     (*(float *)((int)pvVar8 + 0x198) * 0.017453292,
                                      *(float *)((int)pvVar8 + 0x198) * -0.017453292);
          *(float *)((int)pvVar8 + 0x194) = (float)dVar22;
          if (moby->animationId != '\x16') {
            local_80 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar15,0x16,0,(int)(animationSpeed * 10.5));
          }
        }
      }
    }
    else if (bVar1 == 1) {
      iVar17 = *(int *)((int)pvVar8 + 0x164);
      moby->unk58 = 0.25;
      if (iVar17 != 2) {
        auVar37 = ZEXT416(0xffffffff);
        auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
        moby->state = '\x02';
        auVar38 = vectorShiftLeftIntegerWord(auVar37,auVar37);
        auVar37 = loadVectorLeftIndexed(8,0x49c758);
        auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar39 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar37 = vectorMultiplyAddFloatingPoint
                            (auVar39,auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,
                             auVar38);
        auVar37 = vectorConvertToSignedFixedPointWordSaturate(auVar37,0);
        auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar16 = storeVectorElementWordIndexed
                           (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0x1a8,
                            uVar20);
        *(undefined4 *)((int)pvVar8 + 0x1a8U & 0xfffffffc) = uVar16;
        if (moby->group != 0xff) {
          puVar21 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)moby->group];
          do {
            if (MobyInstance[*puVar21 & 0x7fff].state == '\x01') {
              MobyInstance[*puVar21 & 0x7fff].state = '\x02';
            }
            uVar7 = *puVar21;
            puVar21 = puVar21 + 1;
          } while (-1 < (short)uVar7);
        }
      }
    }
    else if (bVar1 == 0) {
      *(undefined4 *)((int)pvVar8 + 0x20) = 0x40800000;
      *(undefined1 *)((int)pvVar8 + 0x28) = 3;
      *(undefined2 *)((int)pvVar8 + 0x24) = 4;
      MVar6 = moby->modeBits;
      *(f32 *)((int)pvVar8 + 0x170) = (moby->pos).x;
      *(f32 *)((int)pvVar8 + 0x174) = (moby->pos).y;
      fVar2 = (moby->pos).z;
      moby->modeBits = MVar6 | (CAN_BE_DAMAGED|CAN_BE_AUTO_TARGETED);
      *(f32 *)((int)pvVar8 + 0x178) = fVar2;
      *(f32 *)((int)pvVar8 + 0x17c) = (moby->pos).w;
      mobyutil::MB_InitDefaultParams((float *)((int)pvVar8 + 0xd0));
      *(undefined4 *)((int)pvVar8 + 0xdc) = 0x3f000000;
      *(undefined4 *)((int)pvVar8 + 0xd8) = 0x40000000;
      uVar16 = fastfunc::FastDoubleToInt((double)(DAT_008c7f38 * 1024.0));
      *(float *)((int)pvVar8 + 0xd4) = DAT_008c7f38;
      fVar3 = mobyutil::g_FrameTime;
      *(undefined4 *)((int)pvVar8 + 0xd0) = uVar16;
      *(float *)((int)pvVar8 + 0xf4) = *(float *)((int)pvVar8 + 0x1a4) * fVar3;
      uVar16 = fastfunc::FastDoubleToInt(0x4088000000000000);
      *(undefined4 *)((int)pvVar8 + 0x98) = 0x3f400000;
      fVar4 = DAT_008c7f3c;
      fVar3 = DAT_0071f418;
      *(undefined4 *)((int)pvVar8 + 0x90) = uVar16;
      *(undefined4 *)((int)pvVar8 + 0x84) = 0x3a03126f;
      *(undefined1 *)((int)pvVar8 + 0xad) = 0;
      *(undefined4 *)((int)pvVar8 + 0x94) = 9;
      *(float *)((int)pvVar8 + 0x80) = fVar4 * fVar3;
      if (*(int *)((int)pvVar8 + 0x1c0) < 0) {
        if (*(int *)((int)pvVar8 + 0x1b4) == 0) {
          moby->state = '\x01';
          if (moby->animationId != '\x06') {
            mobyutil::MB_SetAnimation(lVar15,6,0,0);
          }
          *(float *)((int)pvVar8 + 0x1a0) = DAT_008c7f5c;
        }
        else {
          auVar37 = ZEXT416(0xffffffff);
          auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
          moby->state = '\x02';
          auVar38 = vectorShiftLeftIntegerWord(auVar37,auVar37);
          auVar37 = loadVectorLeftIndexed(8,0x49c758);
          auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar39 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar37 = vectorMultiplyAddFloatingPoint
                              (auVar39,auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60
                               ,auVar38);
          auVar37 = vectorConvertToSignedFixedPointWordSaturate(auVar37,0);
          auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar16 = storeVectorElementWordIndexed
                             (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0x1a8,
                              uVar20);
          *(undefined4 *)((int)pvVar8 + 0x1a8U & 0xfffffffc) = uVar16;
          if (moby->animationId != '\x06') {
            mobyutil::MB_SetAnimation(lVar15,6,0,0);
          }
          if (moby->group != 0xff) {
            puVar21 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)moby->group];
            do {
              if (MobyInstance[*puVar21 & 0x7fff].state == '\x01') {
                MobyInstance[*puVar21 & 0x7fff].state = '\x02';
              }
              uVar7 = *puVar21;
              puVar21 = puVar21 + 1;
            } while (-1 < (short)uVar7);
          }
        }
      }
      else {
        moby->state = '\x03';
      }
    }
  }
  else if (bVar1 == 0xd) {
    uVar18 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x70));
    if ((uVar18 & 0x40) == 0) {
      fVar2 = (moby->pos).z;
      uVar18 = (int)fVar2 >> 0x1f;
      if ((int)((uVar18 >> 1 ^ (uint)fVar2) - uVar18) < 0x40000000) {
        mobyfunc::DeleteMoby(moby);
      }
    }
    else {
      mobyfunc::DeleteMoby(moby);
    }
  }
  else if (bVar1 == 0xc) {
    uVar18 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x70));
    if ((uVar18 & 0x41) == 0) {
      if ((moby->pos).z < *(float *)((int)pvVar8 + 0x178) - 0.2) {
        mobyfunc::DeleteMoby(moby);
      }
    }
    else {
      moby->state = '\v';
      if (moby->animationId != '\x16') {
        local_80 = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(lVar15,0x16,0,(int)(animationSpeed * 20.5));
      }
      auVar37 = ZEXT416(0xffffffff);
      auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
      auVar38 = vectorShiftLeftIntegerWord(auVar37,auVar37);
      auVar37 = loadVectorLeftIndexed(0x78,0x49c758);
      auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar39 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar37 = vectorMultiplyAddFloatingPoint
                          (auVar39,auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,
                           auVar38);
      auVar37 = vectorConvertToSignedFixedPointWordSaturate(auVar37,0);
      auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar16 = storeVectorElementWordIndexed
                         (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0x1a8,uVar20
                         );
      *(undefined4 *)((int)pvVar8 + 0x1a8U & 0xfffffffc) = uVar16;
    }
  }
  else if (bVar1 == 0xb) {
    mobyutil::Delt(*(float *)((int)pvVar8 + 0x1a4) * 3.0 * mobyutil::g_FrameTime,DAT_0071f418 * 20.0
                   ,(float *)((int)pvVar8 + 0xf4));
    uVar23 = FUN_005e8338((double)(*(float *)(iVar17 + 0x10) - (moby->pos).x),
                          (double)(*(float *)(iVar17 + 0x14) - (moby->pos).y));
    mobyutil::OrganicDeltAngSpeed
              (uVar23,0x3fa99999a0000000,0x3fd3333340000000,
               (double)(mobyutil::g_FrameTime * 6.2831855),lVar15);
    dVar30 = (double)(moby->rotation).z;
    dVar22 = (double)FUN_005e8338((double)(*(float *)(iVar17 + 0x10) - (moby->pos).x),
                                  (double)(*(float *)(iVar17 + 0x14) - (moby->pos).y));
    dVar24 = (double)fastfunc::FastWrapRot((float)dVar22,3.14159);
    fVar3 = (float)(dVar24 + 1.570796251296997);
    dVar22 = (double)(float)(3.141592502593994 - dVar24);
    if (dVar24 - (double)(float)(3.141592502593994 - dVar24) < 0.0) {
      dVar22 = dVar24;
    }
    fVar4 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar4 = fVar3;
    }
    dVar31 = (double)(float)(-3.141592502593994 - dVar24);
    if ((double)(float)(-3.141592502593994 - dVar24) - dVar22 < 0.0) {
      dVar31 = dVar22;
    }
    local_e8 = 0;
    fVar5 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
      fVar5 = fVar4;
    }
    dVar22 = (double)(float)(dVar31 * dVar31);
    fVar9 = fVar5 * fVar5;
    dVar33 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar31));
    fVar3 = fVar9 * fVar9 * fVar5;
    dVar32 = (double)(float)(dVar22 * dVar33);
    fVar4 = fVar9 * fVar3;
    local_ec = ((float)(dVar22 * dVar32) * 2.601887e-06 +
               (float)(dVar32 * -0.0001980741071747616 +
                      (double)(float)(dVar33 * 0.008333025500178337 +
                                     (double)(float)((double)(float)(dVar22 * dVar31) *
                                                     -0.16666656732559204 + dVar31)))) * 2.0;
    local_f0 = (fVar9 * fVar4 * 2.601887e-06 +
               fVar4 * -0.0001980741 + fVar3 * 0.0083330255 + fVar9 * fVar5 * -0.16666657 + fVar5) *
               2.0;
    (moby->rotation).z = (float)dVar24;
    mobyutil::MB_UpdateNavMove
              (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar8 + 0xd0),&local_f0,auStack_e0);
    (moby->rotation).z = (float)dVar30;
    iVar19 = fastfunc::FastDecTimerS32(uVar20 + 0x1a8);
    if ((iVar19 != 0) ||
       (fVar3 = (moby->pos).y - *(float *)(iVar17 + 0x14),
       fVar4 = (moby->pos).x - *(float *)(iVar17 + 0x10),
       fVar5 = (moby->pos).z - *(float *)(iVar17 + 0x18),
       DAT_008c7f60 < SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3))) {
      moby->state = '\t';
      *(float *)((int)pvVar8 + 0xf4) = mobyutil::g_FrameTime * 5.0;
      if (DAT_008c7f68 == 0) {
        if (moby->animationId != '\x01') {
          local_80 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar15,1,10,(int)(animationSpeed * 10.5));
        }
      }
      else if (moby->animationId != '\x01') {
        local_80 = (longlong)(int)(animationSpeed * 5.5);
        mobyutil::MB_SetAnimation(lVar15,1,DAT_008c7f6c,(int)(animationSpeed * 5.5));
      }
    }
  }
  else if (bVar1 == 10) {
    mobyutil::Delt(*(float *)((int)pvVar8 + 0x1a4) * mobyutil::g_FrameTime,DAT_0071f418 * 6.0,
                   (float *)((int)pvVar8 + 0xf4));
    uVar23 = FUN_005e8338((double)(*(float *)((int)pvVar8 + 0x170) - (moby->pos).x),
                          (double)(*(float *)((int)pvVar8 + 0x174) - (moby->pos).y));
    mobyutil::OrganicDeltAngSpeed
              (uVar23,0x3fa99999a0000000,0x3fd3333340000000,
               (double)(mobyutil::g_FrameTime * 6.2831855),lVar15);
    fVar3 = (moby->rotation).z;
    fVar5 = fVar3 + 1.5707963;
    fVar4 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar4 = fVar3;
    }
    fVar9 = 3.1415925 - fVar5;
    if (fVar5 - (3.1415925 - fVar5) < 0.0) {
      fVar9 = fVar5;
    }
    fVar10 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
      fVar10 = fVar4;
    }
    local_c8 = 0;
    fVar3 = -3.1415925 - fVar5;
    if ((-3.1415925 - fVar5) - fVar9 < 0.0) {
      fVar3 = fVar9;
    }
    fVar5 = fVar10 * fVar10;
    fVar4 = fVar3 * fVar3;
    fVar9 = fVar5 * fVar5 * fVar10;
    fVar11 = fVar5 * fVar9;
    fVar12 = fVar4 * fVar4 * fVar3;
    fVar13 = fVar4 * fVar12;
    local_cc = (fVar5 * fVar11 * 2.601887e-06 +
               fVar11 * -0.0001980741 + fVar9 * 0.0083330255 + fVar5 * fVar10 * -0.16666657 + fVar10
               ) * 2.0;
    local_d0 = (fVar4 * fVar13 * 2.601887e-06 +
               fVar13 * -0.0001980741 + fVar12 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3)
               * 2.0;
    dVar22 = 1.0;
    mobyutil::MB_UpdateNavMove
              (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar8 + 0xd0),&local_d0,auStack_c0);
    fVar3 = (moby->pos).y - *(float *)((int)pvVar8 + 0x174);
    fVar4 = (moby->pos).x - *(float *)((int)pvVar8 + 0x170);
    fVar5 = (moby->pos).z - *(float *)((int)pvVar8 + 0x178);
    if (dVar22 <= (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3)) {
      if ((*(int *)((int)pvVar8 + 0x164) != 2) && (moby->state = '\a', moby->animationId != '\x16'))
      {
        local_80 = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(lVar15,0x16,0,(int)(animationSpeed * 20.5));
      }
    }
    else {
      moby->state = '\x05';
      if (moby->animationId != '\x14') {
        local_80 = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(lVar15,0x14,0,(int)(animationSpeed * 20.5));
      }
    }
  }
  else if (bVar1 == 9) {
    uVar23 = FUN_005e8338((double)(*(float *)(iVar17 + 0x10) - (moby->pos).x),
                          (double)(*(float *)(iVar17 + 0x14) - (moby->pos).y));
    mobyutil::OrganicDeltAngSpeed
              (uVar23,0x3fa99999a0000000,0x3fd3333340000000,
               (double)(mobyutil::g_FrameTime * 6.2831855),lVar15,&DAT_00720000,uVar20 + 400);
    dVar22 = (double)mobyfunc::BlendAnimFrame(moby);
    if ((dVar22 <= 18.0) || (dVar22 = (double)mobyfunc::BlendAnimFrame(moby), 24.0 <= dVar22)) {
      if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\a', moby->animationId != '\x16')) {
        local_80 = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(lVar15,0x16,0,(int)(animationSpeed * 20.5));
      }
    }
    else {
      dVar22 = 1.570796251296997;
      dVar36 = 3.141592502593994;
      dVar35 = -3.141592502593994;
      dVar34 = -0.16666656732559204;
      dVar33 = 0.008333025500178337;
      dVar31 = -0.0001980741071747616;
      dVar24 = 2.601886990305502e-06;
      mobyfunc::GetBonePosition(lVar15,0,auStack_100);
      dVar30 = (double)(moby->rotation).z;
      dVar32 = (double)(float)(dVar30 + dVar22);
      local_a8 = 0;
      dVar22 = (double)(float)(dVar36 - dVar30);
      if (dVar30 - (double)(float)(dVar36 - dVar30) < 0.0) {
        dVar22 = dVar30;
      }
      dVar25 = (double)(float)(dVar36 - dVar32);
      if (dVar32 - (double)(float)(dVar36 - dVar32) < 0.0) {
        dVar25 = dVar32;
      }
      dVar36 = (double)(float)(dVar35 - dVar30);
      if ((double)(float)(dVar35 - dVar30) - dVar22 < 0.0) {
        dVar36 = dVar22;
      }
      dVar22 = (double)(float)(dVar35 - dVar32);
      if ((double)(float)(dVar35 - dVar32) - dVar25 < 0.0) {
        dVar22 = dVar25;
      }
      dVar30 = (double)(float)(dVar36 * dVar36);
      dVar32 = (double)(float)(dVar22 * dVar22);
      dVar26 = (double)(float)(dVar30 * (double)(float)(dVar30 * dVar36));
      dVar35 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar22));
      dVar25 = (double)(float)(dVar30 * dVar26);
      dVar29 = (double)(float)(dVar32 * dVar35);
      local_ac = (float)((double)(float)(dVar30 * dVar25) * dVar24 +
                        (double)(float)(dVar25 * dVar31 +
                                       (double)(float)(dVar26 * dVar33 +
                                                      (double)(float)((double)(float)(dVar30 * 
                                                  dVar36) * dVar34 + dVar36))));
      local_b0 = (float)((double)(float)(dVar32 * dVar29) * dVar24 +
                        (double)(float)(dVar29 * dVar31 +
                                       (double)(float)(dVar35 * dVar33 +
                                                      (double)(float)((double)(float)(dVar32 * 
                                                  dVar22) * dVar34 + dVar22))));
      local_94 = 0x3f800000;
      local_90 = 1;
      local_9c = 1;
      local_a0 = moby;
      collproc::CollMobySphere(0x3fe0000000000000,auStack_100,1,0,lVar15,&local_b0);
    }
  }
  else if (bVar1 == 7) {
    fVar3 = (moby->pos).y - *(float *)(iVar17 + 0x14);
    fVar4 = (moby->pos).x - *(float *)(iVar17 + 0x10);
    fVar5 = (moby->pos).z - *(float *)(iVar17 + 0x18);
    if (SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) <= DAT_008c7f4c) {
      mobyutil::Delt(0.0,DAT_0071f418 * 20.0,(float *)((int)pvVar8 + 0xf4));
    }
    else {
      mobyutil::Delt(*(float *)((int)pvVar8 + 0x1a4) * mobyutil::g_FrameTime,DAT_0071f418 * 6.0,
                     (float *)((int)pvVar8 + 0xf4));
    }
    uVar23 = FUN_005e8338((double)(*(float *)(iVar17 + 0x10) - (moby->pos).x),
                          (double)(*(float *)(iVar17 + 0x14) - (moby->pos).y));
    mobyutil::OrganicDeltAngSpeed
              (uVar23,0x3fa99999a0000000,0x3fd3333340000000,
               (double)(mobyutil::g_FrameTime * 6.2831855),lVar15,&DAT_00720000,uVar20 + 400);
    dVar24 = (double)mobyupdate_helpers::M870_0049b880(lVar15);
    dVar36 = 1.570796251296997;
    dVar35 = 3.141592502593994;
    fVar3 = (float)(dVar24 + 1.570796251296997);
    dVar34 = -3.141592502593994;
    dVar33 = -0.16666656732559204;
    dVar32 = 0.008333025500178337;
    dVar31 = -0.0001980741071747616;
    dVar30 = 2.601886990305502e-06;
    dVar22 = (double)(float)(3.141592502593994 - dVar24);
    if (dVar24 - (double)(float)(3.141592502593994 - dVar24) < 0.0) {
      dVar22 = dVar24;
    }
    fVar4 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar4 = fVar3;
    }
    dVar25 = (double)(float)(-3.141592502593994 - dVar24);
    if ((double)(float)(-3.141592502593994 - dVar24) - dVar22 < 0.0) {
      dVar25 = dVar22;
    }
    fVar5 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
      fVar5 = fVar4;
    }
    dVar22 = (double)(float)(dVar25 * dVar25);
    fVar9 = fVar5 * fVar5;
    dVar24 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar25));
    fVar3 = fVar9 * fVar9 * fVar5;
    dVar26 = (double)(float)(dVar22 * dVar24);
    dVar29 = (double)(moby->rotation).z;
    fVar4 = fVar9 * fVar3;
    dVar24 = (double)FUN_005e8338((double)(((fVar9 * fVar4 * 2.601887e-06 +
                                            fVar4 * -0.0001980741 +
                                            fVar3 * 0.0083330255 +
                                            fVar9 * fVar5 * -0.16666657 + fVar5) * DAT_008c7f4c +
                                           *(float *)(iVar17 + 0x10)) - (moby->pos).x),
                                  (double)((((float)(dVar22 * dVar26) * 2.601887e-06 +
                                            (float)(dVar26 * -0.0001980741071747616 +
                                                   (double)(float)(dVar24 * 0.008333025500178337 +
                                                                  (double)(float)((double)(float)(
                                                  dVar22 * dVar25) * -0.16666656732559204 + dVar25))
                                                  )) * DAT_008c7f4c + *(float *)(iVar17 + 0x14)) -
                                          (moby->pos).y));
    dVar36 = (double)(float)(dVar24 + dVar36);
    dVar22 = (double)(float)(dVar35 - dVar24);
    if (dVar24 - (double)(float)(dVar35 - dVar24) < 0.0) {
      dVar22 = dVar24;
    }
    dVar25 = (double)(float)(dVar35 - dVar36);
    if (dVar36 - (double)(float)(dVar35 - dVar36) < 0.0) {
      dVar25 = dVar36;
    }
    dVar35 = (double)(float)(dVar34 - dVar24);
    if ((double)(float)(dVar34 - dVar24) - dVar22 < 0.0) {
      dVar35 = dVar22;
    }
    local_118 = 0;
    dVar22 = (double)(float)(dVar34 - dVar36);
    if ((double)(float)(dVar34 - dVar36) - dVar25 < 0.0) {
      dVar22 = dVar25;
    }
    dVar34 = (double)(float)(dVar35 * dVar35);
    dVar36 = (double)(float)(dVar22 * dVar22);
    dVar27 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar35));
    dVar25 = (double)(float)(dVar36 * (double)(float)(dVar36 * dVar22));
    dVar26 = (double)(float)(dVar34 * dVar27);
    dVar28 = (double)(float)(dVar36 * dVar25);
    local_11c = (float)((double)(float)(dVar34 * dVar26) * dVar30 +
                       (double)(float)(dVar26 * dVar31 +
                                      (double)(float)(dVar27 * dVar32 +
                                                     (double)(float)((double)(float)(dVar34 * dVar35
                                                                                    ) * dVar33 +
                                                                    dVar35)))) * 2.0;
    local_120 = (float)((double)(float)(dVar36 * dVar28) * dVar30 +
                       (double)(float)(dVar28 * dVar31 +
                                      (double)(float)(dVar25 * dVar32 +
                                                     (double)(float)((double)(float)(dVar36 * dVar22
                                                                                    ) * dVar33 +
                                                                    dVar22)))) * 2.0;
    dVar22 = 1.0;
    (moby->rotation).z = (float)dVar24;
    mobyutil::MB_UpdateNavMove
              (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar8 + 0xd0),&local_120,auStack_110);
    (moby->rotation).z = (float)dVar29;
    fVar3 = (moby->pos).y;
    fVar4 = (moby->pos).x;
    fVar10 = fVar3 - *(float *)((int)pvVar8 + 0x174);
    fVar11 = fVar4 - *(float *)((int)pvVar8 + 0x170);
    fVar5 = (moby->pos).z;
    fVar9 = fVar5 - *(float *)((int)pvVar8 + 0x178);
    if ((DAT_008c7f50 < SQRT(fVar9 * fVar9 + fVar11 * fVar11 + fVar10 * fVar10)) ||
       (*(int *)((int)pvVar8 + 0x164) == 2)) {
      moby->state = '\n';
    }
    else {
      fVar3 = fVar3 - *(float *)(iVar17 + 0x14);
      fVar4 = fVar4 - *(float *)(iVar17 + 0x10);
      if ((((SQRT(fVar4 * fVar4 + fVar3 * fVar3) < DAT_008c7f4c) &&
           (ABS((double)(*(float *)(iVar17 + 0x18) - fVar5)) < dVar22)) &&
          (DAT_00969ea0 < (int)(animationSpeed * 10.5))) &&
         (moby->state = '\t', moby->animationId != '\x01')) {
        local_80 = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar15,1,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  return;
}



//==== 0049dc78  ns=mobyupdate_helpers  size=0x14
// sig: undefined M871_0049dc78(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M871_0049dc78(void)

{
  DAT_008c7fbc = 0x10000;
  return;
}



//==== 0049dc90  ns=mobyupdate_helpers  size=0xec
// sig: undefined M871_0049dc90(void)
// callers(0): 
// callees(4): 000f25f4 mobyproc::UpdateMobyGrids; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 0010c000 mobyutil::MB_CopyHeroLights

void mobyupdate_helpers::M871_0049dc90(MobyInstance *param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  param_1->state = '\0';
  param_1->setByGroup = '\0';
  fVar1 = param_1->pClass->gScale;
  param_1->modeBits = *(MobyModeBit *)&param_1->pClass->mode_bits;
  param_1->scale = fVar1;
  param_1->updateDistance = -1;
  param_1->drawDistance = 0xff;
  param_1->enabled = '\x01';
  mobyproc::UpdateMobyGrids(param_1,0x80807f7f);
  param_1->field45_0x72 = -1;
  param_1->damage = -1;
  param_1->field44_0x71 = -1;
  param_1->occlIndex = 0x7f80;
  param_1->collision = param_1->pClass->collision;
  mobyutil::MB_CopyHeroLights(param_1);
  mobyfunc::UpdateMobyTransform(param_1);
  uVar3 = mobyutil::MB_GetPvarsIfMobyHasThem(param_1);
  if ((uint)uVar3 != 0) {
    auVar4 = ZEXT416(0xfffffff0);
    auVar5 = loadVectorLeftIndexed(4,uVar3);
    auVar6 = loadVectorRightIndexed(0x14,uVar3);
    auVar4 = vectorShiftRightAlgebraicWord
                       (auVar5 | auVar6,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60);
    auVar4 = vectorConvertFromSignedFixedPointWord(auVar4,0);
    auVar4 = auVar4 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,0,uVar3);
    *(undefined4 *)((uint)uVar3 & 0xfffffffc) = uVar2;
  }
  return;
}



//==== 0049dda0  ns=mobyupdate_unsorted  size=0x780
// sig: undefined UpdateMoby_871(MobyInstance * moby)
// callers(0): 
// callees(18): 000efb38 mobyfunc::DeleteMoby; 000f25f4 mobyproc::UpdateMobyGrids; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 001042ec mobyutil::MB_SetStateByGroup; 0010466c mobyutil::MB_GetNextMobyInGroup; 00104800 mobyutil::MB_GetFirstMobyInGroup; 00106150 mobyutil::MB_RegisterLameShadow; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c000 mobyutil::MB_CopyHeroLights; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0010ce18 mobyutil::MB_PathMoveDist; 0010e030 mobyutil::MB_genericExplosion; 001367d0 path::PathFindClosestPnt; 004fff60 fastfunc::FastDecTimerS32; 005cd098 libc::printf
// strings: 00658790: 'Moby 871 could not find mines for group %d\n' | 006587c0: 'Moby 871 short on mines at %d in group %d compared to mine count in pVar %d\n' | 00658810: 'Moby 871 mas extra mines in group %d compared to mine count in pVar %d\n'

/* Moby 871 */

void mobyupdate_unsorted::UpdateMoby_871(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  void *pvVar6;
  Spline *spline;
  uint uVar7;
  uint uVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  MobyInstance *moby_00;
  int iVar14;
  int iVar15;
  Spline *pSVar16;
  float *pfVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  int local_60;
  MobyInstance *local_5c;
  undefined4 local_58;
  int local_54;
  MobyInstance *local_50;
  float local_4c [3];
  
  if (moby != (MobyInstance *)0x0) {
    pvVar5 = moby->pVar;
    uVar18 = ZEXT48(pvVar5);
    if (pvVar5 != (void *)0x0) {
      if (*(char *)((int)pvVar5 + 0x94) != '\0') {
        iVar14 = mobyutil::MB_damage(moby,0x230000,0);
        iVar15 = mobyutil::MB_HandleDamage(moby,iVar14,uVar18 + 0x20,0,&local_60,0,0,4);
        if (((iVar15 < 3) && (-1 < iVar15)) && (0 < iVar15)) {
          *(undefined4 *)((int)pvVar5 + 0x20) = 0;
        }
        if (1 < local_60) {
          uVar7 = (int)*(uint *)((int)pvVar5 + 0x20) >> 0x1f;
          uVar8 = (int)*(uint *)(iVar14 + 0x2c) >> 0x1f;
          fVar1 = *(float *)(iVar14 + 0x2c);
          if ((int)((uVar7 >> 1 ^ *(uint *)((int)pvVar5 + 0x20)) - uVar7) <=
              (int)((uVar8 >> 1 ^ *(uint *)(iVar14 + 0x2c)) - uVar8)) {
            uVar19 = 0;
            *(undefined4 *)((int)pvVar5 + 0x20) = 0;
            mobyutil::MB_SetStateByGroup(0,*(undefined4 *)((int)pvVar5 + 0x74),3);
            mobyutil::MB_genericExplosion
                      (uVar19,uVar19,0x4010000000000000,0x4000000000000000,0x4022000000000000,
                       0x3ff0000000000000,0x402e000000000000,moby,local_80,0,1,0xffffffffffffffff,10
                       ,3,0x10);
            mobyfunc::DeleteMoby(moby);
            return;
          }
          auVar21 = ZEXT416(0xffffffff);
          auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
          *(undefined1 *)((int)pvVar5 + 0x67) = 0xfa;
          auVar22 = vectorShiftLeftIntegerWord(auVar21,auVar21);
          *(float *)((int)pvVar5 + 0x20) = *(float *)((int)pvVar5 + 0x20) - fVar1;
          auVar21 = loadVectorLeftIndexed(0x18,0x49dd7c);
          auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar21 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar21 = vectorMultiplyAddFloatingPoint
                              (auVar23,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60
                               ,auVar22);
          auVar21 = vectorConvertToSignedFixedPointWordSaturate(auVar21,0);
          auVar21 = vectorSplatHalfWord(auVar21,1);
          uVar9 = storeVectorElementHalfWordIndexed(auVar21,0x26,uVar18);
          *(undefined2 *)((int)pvVar5 + 0x26) = uVar9;
          mobyutil::MB_UpdateLightsTransition(moby,uVar18 + 0x60);
        }
        moby->damage = -1;
      }
      mobyutil::MB_ColorDyingMoby(moby,uVar18 + 0x60);
      if (*(int *)((int)pvVar5 + 0x70) != -1) {
        spline = Splines[*(int *)((int)pvVar5 + 0x70)];
        if (moby->state == 0) {
          local_5c = (MobyInstance *)0x0;
          dVar20 = 0.0;
          local_58 = 0;
          fVar1 = spline->points[0].x;
          fVar2 = spline->points[0].y;
          fVar3 = spline->points[0].z;
          fVar4 = spline->points[0].w;
          iVar14 = spline->cnt;
          if (0 < iVar14) {
            iVar15 = 0;
            pSVar16 = spline;
            do {
              iVar15 = iVar15 + 1;
              pfVar17 = (float *)((int)spline + (iVar15 - (iVar15 / iVar14) * iVar14) * 0x10 + 0x10)
              ;
              fVar11 = pSVar16->points[0].y - pfVar17[1];
              fVar12 = pSVar16->points[0].x - *pfVar17;
              fVar13 = pSVar16->points[0].z - pfVar17[2];
              pSVar16->points[0].w = SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11);
              iVar14 = spline->cnt;
              pSVar16 = (Spline *)pSVar16->points;
            } while (iVar15 < iVar14);
          }
          iVar14 = mobyutil::MB_GetFirstMobyInGroup
                             (&local_5c,*(int *)((int)pvVar5 + 0x74),'\x01','\0');
          if (iVar14 != 0) {
            libc::printf("Moby 871 could not find mines for group %d\n",
                         *(undefined4 *)((int)pvVar5 + 0x74));
            return;
          }
          local_54 = path::PathFindClosestPnt((float)dVar20,(Vec4 *)&moby->pos,spline);
          *(int *)((int)pvVar5 + 0x90) = local_54;
          if (0 < *(int *)((int)pvVar5 + 0x78)) {
            iVar14 = 0;
            do {
              pvVar6 = local_5c->pVar;
              *(MobyInstance **)((int)pvVar6 + 0xa0) = moby;
              (local_5c->pos).x = fVar1;
              (local_5c->pos).y = fVar2;
              (local_5c->pos).z = fVar3;
              (local_5c->pos).w = fVar4;
              *(float *)((int)pvVar6 + 0x80) = fVar1;
              *(float *)((int)pvVar6 + 0x84) = fVar2;
              *(float *)((int)pvVar6 + 0x88) = fVar3;
              *(float *)((int)pvVar6 + 0x8c) = fVar4;
              *(float *)((int)pvVar6 + 0x70) = fVar1;
              *(float *)((int)pvVar6 + 0x74) = fVar2;
              *(float *)((int)pvVar6 + 0x78) = fVar3;
              *(float *)((int)pvVar6 + 0x7c) = fVar4;
              *(int *)((int)pvVar6 + 0x90) = local_54;
              *(int *)((int)pvVar6 + 0x94) = local_54 + 1;
              iVar15 = mobyutil::MB_GetNextMobyInGroup(&local_5c,local_5c,'\x01','\0');
              if (iVar15 != 0) {
                iVar15 = *(int *)((int)pvVar5 + 0x78);
                if (iVar14 < iVar15 + -1) {
                  libc::printf("Moby 871 short on mines at %d in group %d compared to mine count in pVar %d\n"
                               ,iVar14 + 1,*(undefined4 *)((int)pvVar5 + 0x74),iVar15);
                }
                else if (iVar14 == iVar15 + -1) {
                  libc::printf("Moby 871 mas extra mines in group %d compared to mine count in pVar %d\n"
                               ,*(undefined4 *)((int)pvVar5 + 0x74),iVar15);
                }
                *(int *)((int)pvVar5 + 0x78) = iVar14 + 1;
                break;
              }
              mobyutil::MB_PathMoveDist
                        ((double)*(float *)((int)pvVar5 + 0x80),spline,local_70,&local_54,&local_58)
              ;
              iVar14 = iVar14 + 1;
            } while (iVar14 < *(int *)((int)pvVar5 + 0x78));
          }
          if (*(char *)((int)pvVar5 + 0x94) == '\0') {
            moby->collision = (ushort *)0x0;
            moby->modeBits =
                 moby->modeBits &
                 (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
          }
          if (*(char *)((int)pvVar5 + 0x95) == '\0') {
            moby->modeBits = moby->modeBits | DISABLED;
          }
          moby->state = '\x01';
        }
        else if (moby->state < 2) {
          local_50 = (MobyInstance *)0x0;
          mobyutil::MB_GetFirstMobyInGroup(&local_50,*(int *)((int)pvVar5 + 0x74),'\x01','\0');
          if (0 < *(int *)((int)pvVar5 + 0x78)) {
            iVar14 = 0;
            do {
              pvVar6 = local_50->pVar;
              iVar15 = *(int *)((int)pvVar6 + 0x90);
              fVar1 = *(float *)((int)pvVar6 + 0x84) - spline->points[iVar15].y;
              fVar2 = *(float *)((int)pvVar6 + 0x80) - spline->points[iVar15].x;
              fVar3 = *(float *)((int)pvVar6 + 0x88) - spline->points[iVar15].z;
              local_4c[0] = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
              mobyutil::MB_PathMoveDist
                        ((double)(*(float *)((int)pvVar5 + 0x7c) * mobyutil::g_FrameTime),spline,
                         (int)pvVar6 + 0x80,(int)pvVar6 + 0x90,local_4c,&DAT_00720000,1);
              *(int *)((int)pvVar6 + 0x94) = *(int *)((int)pvVar6 + 0x90) + 1;
              if ((((local_50 == (MobyInstance *)0x0) || (local_50->state == 0xfe)) ||
                  (local_50->state == 0xfd)) && (*(int *)((int)pvVar5 + 0x84) != -1)) {
                *(float *)((int)pvVar6 + 0x60) = *(float *)((int)pvVar6 + 0x80) - (local_50->pos).x;
                *(float *)((int)pvVar6 + 100) = *(float *)((int)pvVar6 + 0x84) - (local_50->pos).y;
                fVar1 = (local_50->pos).z;
                *(undefined4 *)((int)pvVar6 + 0x6c) = *(undefined4 *)((int)pvVar6 + 0x8c);
                *(float *)((int)pvVar6 + 0x68) = *(float *)((int)pvVar6 + 0x88) - fVar1;
                (local_50->pos).x = *(float *)((int)pvVar6 + 0x80);
                (local_50->pos).y = *(f32 *)((int)pvVar6 + 0x84);
                (local_50->pos).z = *(f32 *)((int)pvVar6 + 0x88);
                (local_50->pos).w = *(f32 *)((int)pvVar6 + 0x8c);
                iVar15 = fastfunc::FastDecTimerS32((int)pvVar6 + 0x98);
                moby_00 = local_50;
                if ((iVar15 != 0) && (*(int *)((int)pvVar6 + 0x90) == *(int *)((int)pvVar5 + 0x90)))
                {
                  local_50->state = '\0';
                  local_50->setByGroup = '\0';
                  local_50->modeBits = *(MobyModeBit *)&local_50->pClass->mode_bits;
                  fVar1 = local_50->pClass->gScale;
                  local_50->updateDistance = -1;
                  local_50->scale = fVar1;
                  local_50->drawDistance = 0xff;
                  local_50->enabled = '\x01';
                  mobyproc::UpdateMobyGrids(local_50,0x80807f7f);
                  moby_00->field45_0x72 = -1;
                  moby_00->damage = -1;
                  moby_00->occlIndex = 0x7f80;
                  moby_00->field44_0x71 = -1;
                  moby_00->collision = moby_00->pClass->collision;
                  mobyutil::MB_CopyHeroLights(moby_00);
                  mobyfunc::UpdateMobyTransform(moby_00);
                  uVar19 = mobyutil::MB_GetPvarsIfMobyHasThem(moby_00);
                  if ((uint)uVar19 != 0) {
                    auVar21 = ZEXT416(0xfffffff0);
                    auVar22 = loadVectorLeftIndexed(4,uVar19);
                    auVar23 = loadVectorRightIndexed(0x14,uVar19);
                    auVar21 = vectorShiftRightAlgebraicWord
                                        (auVar22 | auVar23,
                                         auVar21 | auVar21 << 0x20 | auVar21 << 0x40 |
                                         auVar21 << 0x60);
                    auVar21 = vectorConvertFromSignedFixedPointWord(auVar21,0);
                    auVar21 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
                    uVar10 = storeVectorElementWordIndexed
                                       (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 |
                                        auVar21 << 0x60,0,uVar19);
                    *(undefined4 *)((uint)uVar19 & 0xfffffffc) = uVar10;
                  }
                }
              }
              mobyutil::MB_GetNextMobyInGroup(&local_50,local_50,'\x01','\0');
              iVar14 = iVar14 + 1;
            } while (iVar14 < *(int *)((int)pvVar5 + 0x78));
          }
        }
        mobyutil::MB_RegisterLameShadow(1.5,moby);
      }
    }
  }
  return;
}



//==== 0049e520  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_{874_1104}(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 874
   Moby 1104 */

MobyInstance * mobyupdate_unsorted::UpdateMoby__874_1104_(MobyInstance *moby)

{
  return moby;
}



//==== 0049e528  ns=mobyupdate_helpers  size=0x58
// sig: undefined M1104_0049e528(void)
// callers(0): 
// callees(0): 

undefined8 mobyupdate_helpers::M1104_0049e528(int param_1)

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



//==== 0049e5d0  ns=mobyupdate_unsorted  size=0x48c
// sig: undefined UpdateMoby_{875_1080}(MobyInstance * moby)
// callers(0): 
// callees(8): 000efb38 mobyfunc::DeleteMoby; 000f1ec8 mobyfunc::SetColorOfMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 0010de78 mobyutil::MB_WrapRot; 00112900 mobyutil::MB_GetOrientation; 0015d12c sound::PlayMobySound; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble

/* Moby 875
   Moby 1080 */

void mobyupdate_unsorted::UpdateMoby__875_1080_(MobyInstance *moby)

{
  byte bVar1;
  void *pvVar2;
  undefined2 uVar3;
  float fVar4;
  float fVar5;
  int iVar6;
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
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  Vec4 local_80;
  
  if (moby == (MobyInstance *)0x0) {
    return;
  }
  pvVar2 = moby->pVar;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  bVar1 = moby->state;
  dVar14 = (double)(moby->pos).x;
  dVar15 = (double)(moby->pos).y;
  dVar16 = (double)(moby->pos).z;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined4 *)((int)pvVar2 + 0x20) = 0;
      *(undefined2 *)((int)pvVar2 + 0x24) = 0;
      *(undefined1 *)((int)pvVar2 + 0x28) = 4;
      *(undefined2 *)((int)pvVar2 + 0x3e) = 0xd;
      mobyfunc::SetColorOfMoby(moby,0x50,0x40,0x10);
      dVar17 = -0.03490658476948738;
      dVar12 = 0.03490658476948738;
      dVar7 = (double)mobyutil::MB_randRangeFloat(-0.034906585,0.034906585);
      (moby->rotation).x = (float)((double)(moby->rotation).x + dVar7);
      dVar7 = (double)mobyutil::MB_randRangeFloat((float)dVar17,(float)dVar12);
      (moby->rotation).y = (float)((double)(moby->rotation).y + dVar7);
      dVar7 = (double)mobyutil::MB_randRangeFloat(-0.02,0.02);
      fVar23 = (moby->pos).z;
      moby->state = '\x01';
      (moby->pos).z = (float)((double)fVar23 + dVar7);
    }
    else {
      if ((hero::g_heroStateType == 3) || (g_heroState == EDGE_JUMP)) {
        if (DAT_0096a1d8 != moby) goto LAB_0049e9d4;
      }
      else if ((g_framesNotGrounded != 0) || (g_standingOnMoby != moby)) goto LAB_0049e9d4;
      auVar19 = ZEXT416(0xffffffff);
      auVar19 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
      *(f32 *)((int)pvVar2 + 0xa8) = (moby->rotation).x;
      *(f32 *)((int)pvVar2 + 0xac) = (moby->rotation).y;
      auVar20 = vectorShiftLeftIntegerWord(auVar19,auVar19);
      auVar19 = loadVectorLeftIndexed(0x10,0x49e580);
      auVar19 = auVar19 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar21 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar19 = vectorMultiplyAddFloatingPoint
                          (auVar21,auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,
                           auVar20);
      auVar19 = vectorConvertToSignedFixedPointWordSaturate(auVar19,0);
      auVar19 = vectorSplatHalfWord(auVar19,1);
      uVar3 = storeVectorElementHalfWordIndexed(auVar19,0xa0,ZEXT48(pvVar2));
      *(undefined2 *)((int)pvVar2 + 0xa0) = uVar3;
      if (*(short *)((int)pvVar2 + 0xa2) != -1) {
        sound::PlayMobySound((int)*(short *)((int)pvVar2 + 0xa2),0,moby);
      }
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    dVar7 = (double)fastfunc::FastIntToDouble(*(undefined2 *)((int)pvVar2 + 0xa0));
    fVar22 = mobyutil::MB_WrapRot((float)(dVar7 * 0.75));
    dVar18 = 3.141592502593994;
    dVar13 = -3.141592502593994;
    dVar7 = -0.16666656732559204;
    dVar11 = 0.008333025500178337;
    dVar10 = -0.0001980741071747616;
    dVar17 = 2.601886990305502e-06;
    dVar12 = 0.01745329238474369;
    fVar23 = 3.1415925 - fVar22;
    if (fVar22 - (3.1415925 - fVar22) < 0.0) {
      fVar23 = fVar22;
    }
    fVar5 = -3.1415925 - fVar22;
    if ((-3.1415925 - fVar22) - fVar23 < 0.0) {
      fVar5 = fVar23;
    }
    fVar4 = fVar5 * fVar5;
    fVar23 = fVar4 * fVar4 * fVar5;
    fVar22 = fVar4 * fVar23;
    (moby->rotation).x =
         (fVar4 * fVar22 * 2.601887e-06 +
         fVar22 * -0.0001980741 + fVar23 * 0.0083330255 + fVar4 * fVar5 * -0.16666657 + fVar5) *
         0.017453292;
    dVar8 = (double)fastfunc::FastIntToDouble(*(undefined2 *)((int)pvVar2 + 0xa0));
    fVar23 = mobyutil::MB_WrapRot((float)(dVar8 * 0.8899999856948853));
    dVar9 = (double)(fVar23 + 1.5707963);
    dVar8 = (double)(float)(dVar18 - dVar9);
    if (dVar9 - (double)(float)(dVar18 - dVar9) < 0.0) {
      dVar8 = dVar9;
    }
    fVar23 = (moby->pos).z;
    dVar18 = (double)(float)(dVar13 - dVar9);
    if ((double)(float)(dVar13 - dVar9) - dVar8 < 0.0) {
      dVar18 = dVar8;
    }
    dVar13 = (double)(float)(dVar18 * dVar18);
    dVar9 = (double)(float)(dVar13 * (double)(float)(dVar13 * dVar18));
    dVar8 = (double)(float)(dVar13 * dVar9);
    (moby->rotation).y =
         (float)((double)(float)((double)(float)(dVar13 * dVar8) * dVar17 +
                                (double)(float)(dVar8 * dVar10 +
                                               (double)(float)(dVar9 * dVar11 +
                                                              (double)(float)((double)(float)(dVar13
                                                                                             * 
                                                  dVar18) * dVar7 + dVar18)))) * dVar12);
    dVar7 = 0.0020000000949949026;
    (moby->pos).z = -(DAT_0071f408 * 0.002 - fVar23);
    iVar6 = fastfunc::FastDecTimerS16(ZEXT48(pvVar2) + 0xa0);
    if (iVar6 != 0) {
      *(float *)((int)pvVar2 + 0xa4) = (float)((double)DAT_0071f408 * dVar7);
      moby->state = '\x03';
    }
  }
  else if (bVar1 < 4) {
    fVar23 = (moby->rotation).x;
    fVar5 = (1.3962634 - fVar23) * 0.05;
    fVar22 = 3.1415925 - fVar5;
    if (fVar5 - (3.1415925 - fVar5) < 0.0) {
      fVar22 = fVar5;
    }
    fVar4 = -3.1415925 - fVar5;
    if ((-3.1415925 - fVar5) - fVar22 < 0.0) {
      fVar4 = fVar22;
    }
    (moby->rotation).x = fVar23 + fVar5;
    fVar23 = fVar4 * fVar4;
    fVar22 = fVar23 * fVar23 * fVar4;
    fVar5 = fVar23 * fVar22;
    (moby->pos).z =
         -(float)((double)(fVar23 * fVar5 * 2.601887e-06 +
                          fVar5 * -0.0001980741 +
                          fVar22 * 0.0083330255 + fVar23 * fVar4 * -0.16666657 + fVar4) * 2.0 -
                 dVar16);
    fVar23 = DAT_0071f418 * 9.8 + *(float *)((int)pvVar2 + 0xa4);
    *(float *)((int)pvVar2 + 0xa4) = fVar23;
    fVar23 = (moby->pos).z - fVar23;
    (moby->pos).z = fVar23;
    if (fVar23 < 2.0) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
LAB_0049e9d4:
  local_80.x = (float)((double)(moby->pos).x - dVar14);
  local_80.y = (float)((double)(moby->pos).y - dVar15);
  local_80.w = (moby->pos).w;
  local_80.z = (float)((double)(moby->pos).z - dVar16);
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar2 + 0x60),&local_80,(longlong)(int)moby + 0x40,
             (longlong)(int)moby + 0x40);
  return;
}



//==== 0049ea5c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1080_0049ea5c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1080_0049ea5c(void)

{
  DAT_008c802c = 0x10000;
  return;
}



//==== 0049ea70  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_876(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 876 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_876(MobyInstance *moby)

{
  return moby;
}



//==== 0049eaa0  ns=mobyupdate_helpers  size=0x1d8
// sig: undefined M877_0049eaa0(void)
// callers(1): 0049ede8 mobyupdate_unsorted::UpdateMoby_877
// callees(1): 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M877_0049eaa0(int param_1)

{
  Spline *pSVar1;
  int iVar2;
  Spline *pSVar3;
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
  double dVar21;
  double dVar22;
  
  iVar2 = 0;
  pSVar1 = Splines[*(int *)(*(int *)(param_1 + 0x78) + 0x68)];
  dVar4 = 0.0;
  dVar13 = (double)(6.28318 / (float)(longlong)(pSVar1->cnt + -1));
  if (0 < pSVar1->cnt) {
    dVar15 = 1.570796251296997;
    dVar16 = 3.141592502593994;
    dVar17 = -3.141592502593994;
    dVar18 = -0.16666656732559204;
    dVar19 = 0.008333025500178337;
    dVar20 = -0.0001980741071747616;
    dVar21 = 2.601886990305502e-06;
    dVar22 = 3.5;
    dVar14 = dVar4;
    pSVar3 = pSVar1;
    do {
      dVar5 = (double)(float)(dVar4 + dVar15);
      dVar6 = (double)(float)(dVar16 - dVar4);
      if (dVar4 - (double)(float)(dVar16 - dVar4) < 0.0) {
        dVar6 = dVar4;
      }
      dVar8 = (double)(float)(dVar16 - dVar5);
      if (dVar5 - (double)(float)(dVar16 - dVar5) < 0.0) {
        dVar8 = dVar5;
      }
      dVar7 = (double)(float)(dVar17 - dVar4);
      if ((double)(float)(dVar17 - dVar4) - dVar6 < 0.0) {
        dVar7 = dVar6;
      }
      dVar6 = (double)(float)(dVar17 - dVar5);
      if ((double)(float)(dVar17 - dVar5) - dVar8 < 0.0) {
        dVar6 = dVar8;
      }
      dVar5 = (double)(float)(dVar7 * dVar7);
      dVar8 = (double)(float)(dVar6 * dVar6);
      dVar11 = (double)(float)(dVar5 * (double)(float)(dVar5 * dVar7));
      dVar9 = (double)(float)(dVar8 * (double)(float)(dVar8 * dVar6));
      dVar10 = (double)(float)(dVar5 * dVar11);
      dVar12 = (double)(float)(dVar8 * dVar9);
      pSVar3->points[0].x =
           (float)((double)(float)((double)(float)(dVar8 * dVar12) * dVar21 +
                                  (double)(float)(dVar12 * dVar20 +
                                                 (double)(float)(dVar9 * dVar19 +
                                                                (double)(float)((double)(float)(
                                                  dVar8 * dVar6) * dVar18 + dVar6)))) * dVar22 +
                  (double)*(float *)(param_1 + 0x10));
      pSVar3->points[0].y =
           (float)((double)(float)((double)(float)(dVar5 * dVar10) * dVar21 +
                                  (double)(float)(dVar10 * dVar20 +
                                                 (double)(float)(dVar11 * dVar19 +
                                                                (double)(float)((double)(float)(
                                                  dVar5 * dVar7) * dVar18 + dVar7)))) * dVar22 +
                  (double)*(float *)(param_1 + 0x14));
      pSVar3->points[0].z = (float)((double)*(float *)(param_1 + 0x18) + dVar14);
      dVar4 = (double)fastfunc::FastWrapRot((float)dVar4,(float)dVar13);
      iVar2 = iVar2 + 1;
      pSVar3 = (Spline *)pSVar3->points;
    } while (iVar2 < pSVar1->cnt);
  }
  return;
}



//==== 0049ec80  ns=mobyupdate_helpers  size=0x10c
// sig: undefined M877_0049ec80(void)
// callers(1): 0049ede8 mobyupdate_unsorted::UpdateMoby_877
// callees(0): 

void mobyupdate_helpers::M877_0049ec80(int param_1,float *param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_1 + 0xc0);
  fVar2 = 0.0;
  fVar3 = SQRT(*(float *)(param_1 + 200) * *(float *)(param_1 + 200) +
               fVar1 * fVar1 + *(float *)(param_1 + 0xc4) * *(float *)(param_1 + 0xc4));
  if (fVar3 == 0.0) {
    *param_2 = fVar1;
    param_2[1] = *(float *)(param_1 + 0xc4);
    param_2[2] = *(float *)(param_1 + 200);
    fVar1 = *(float *)(param_1 + 0xcc);
    param_2[2] = 0.0;
    param_2[3] = fVar1;
    param_2[1] = 0.0;
    *param_2 = 0.0;
    fVar3 = fVar2;
    fVar1 = fVar2;
  }
  else {
    fVar2 = DAT_008c8058 / fVar3;
    fVar1 = fVar1 * fVar2;
    *param_2 = fVar1;
    fVar3 = *(float *)(param_1 + 0xc4) * fVar2;
    param_2[1] = fVar3;
    fVar2 = *(float *)(param_1 + 200) * fVar2;
    param_2[2] = fVar2;
    param_2[3] = *(float *)(param_1 + 0xcc);
  }
  *param_2 = fVar1 + *(float *)(param_1 + 0x10);
  param_2[1] = fVar3 + *(float *)(param_1 + 0x14);
  fVar2 = fVar2 + *(float *)(param_1 + 0x18);
  param_2[2] = fVar2;
  fVar1 = DAT_008c8050;
  param_3[3] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  param_2[2] = fVar2 + fVar1;
  param_3[2] = 0;
  param_3[2] = *(undefined4 *)(param_1 + 0x48);
  param_3[1] = DAT_008c8054 * 0.017453292;
  return;
}



//==== 0049ede8  ns=mobyupdate_unsorted  size=0xaac
// sig: undefined UpdateMoby_877(MobyInstance * moby)
// callers(0): 
// callees(17): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00047f74 camera::SetCameraPosition; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 000fcc68 mobyutil::MB_randRot; 00109af0 mobyutil::Delt; 00109c30 mobyutil::OrganicDelt; 00112900 mobyutil::MB_GetOrientation; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 0049eaa0 mobyupdate_helpers::M877_0049eaa0; 0049ec80 mobyupdate_helpers::M877_0049ec80; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502758 fastfunc::FastDoubleToInt

/* Moby 877 */

void mobyupdate_unsorted::UpdateMoby_877(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  uint uVar7;
  undefined4 uVar8;
  float fVar9;
  short sVar10;
  Cuboid *pCVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar15;
  u8 uVar16;
  longlong lVar14;
  longlong lVar17;
  ulonglong uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  Vec4 local_a0;
  f32 local_90;
  f32 local_8c;
  f32 local_88;
  f32 local_84;
  longlong local_40;
  
  lVar13 = (longlong)(int)moby;
  uVar12 = ZEXT48(&stack0x00000000);
  local_a0.x = -(moby->pos).x;
  local_a0.y = -(moby->pos).y;
  local_a0.z = -(moby->pos).z;
  pvVar6 = moby->pVar;
  local_a0.w = (moby->pos).w;
  local_90 = (moby->rotation).x;
  local_8c = (moby->rotation).y;
  local_88 = (moby->rotation).z;
  local_84 = (moby->rotation).w;
  bVar2 = moby->state;
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      dVar19 = (double)mobyutil::MB_randRot();
      *(float *)((int)pvVar6 + 0x80) = (float)dVar19;
      *(f32 *)((int)pvVar6 + 0x84) = (moby->rotation).z;
      *(undefined4 *)((int)pvVar6 + 0x74) = 0xffffffff;
      moby->state = '\x03';
    }
    else {
      DAT_0096bfba = (undefined2)*(undefined4 *)((int)pvVar6 + 0x68);
      mobyutil::Delt(1.0,0.133,(float *)((int)pvVar6 + 0x78));
      boot::SceneScreenFade = *(float *)((int)pvVar6 + 0x78);
      if (*(int *)((int)pvVar6 + 0x78) == 0x3f800000) {
        mobyupdate_helpers::M877_0049ec80(lVar13,uVar12 - 0x80,uVar12 - 0x70);
        camera::SetCameraPosition(uVar12 - 0x80,uVar12 - 0x70,1,0,0);
        moby->state = moby->setByGroup;
        moby->setByGroup = '\x01';
      }
    }
  }
  else if (bVar2 < 6) {
    if (bVar2 < 4) {
      iVar15 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar6 + 0x74));
      if (iVar15 == 0) {
        iVar15 = sound::PlayMobySound(0,4,moby);
        *(int *)((int)pvVar6 + 0x74) = iVar15;
      }
      fVar4 = mobyutil::g_FrameTime;
      fVar5 = DAT_0071f418;
      if (moby->setByGroup != '\0') {
        DAT_0096bfba = (undefined2)*(undefined4 *)((int)pvVar6 + 0x68);
        mobyutil::Delt(0.0,0.133,(float *)((int)pvVar6 + 0x78));
        boot::SceneScreenFade = *(float *)((int)pvVar6 + 0x78);
        mobyupdate_helpers::M877_0049ec80(lVar13,uVar12 - 0x60,uVar12 - 0x50);
        camera::camera5::Camera_SetMobyDrivenTargetPos((float *)(uVar12 - 0x60));
        camera::camera5::Camera_SetMobyDrivenTargetRot((float *)(uVar12 - 0x50));
        fVar5 = 1.0 / (*(float *)((int)pvVar6 + 0x60) - *(float *)((int)pvVar6 + 100));
        if (moby->setByGroup == '\0') {
          fVar3 = 16.0;
        }
        else {
          fVar3 = 6.0;
        }
        fVar4 = mobyutil::g_FrameTime * fVar3 * fVar5;
        fVar5 = DAT_0071f418 * fVar3 * fVar5;
      }
      fVar3 = 0.0;
      if (moby->state == 2) {
        fVar3 = 1.0;
      }
      dVar20 = (double)fVar3;
      mobyutil::OrganicDelt
                (fVar3,fVar5,fVar5,fVar4,(float *)((int)pvVar6 + 0x70),(uint)moby->state,
                 (float *)((int)pvVar6 + 0x88));
      pCVar11 = Cuboids;
      iVar15 = *(int *)((int)pvVar6 + 0x6c);
      (moby->pos).z =
           (*(float *)((int)pvVar6 + 0x60) - *(float *)((int)pvVar6 + 100)) *
           *(float *)((int)pvVar6 + 0x70) + *(float *)((int)pvVar6 + 100);
      dVar19 = (double)fastfunc::FastDiffRots
                                 ((double)pCVar11[iVar15].rot.z,
                                  (double)*(float *)((int)pvVar6 + 0x84));
      fVar4 = (float)(dVar19 * (double)*(float *)((int)pvVar6 + 0x70));
      (moby->rotation).z = fVar4;
      dVar19 = (double)fastfunc::FastWrapRot(fVar4,*(float *)((int)pvVar6 + 0x84));
      (moby->rotation).z = (float)dVar19;
      if (ABS((float)((double)*(float *)((int)pvVar6 + 0x70) - dVar20)) < 0.01) {
        auVar24 = ZEXT416(0xffffffff);
        auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
        auVar25 = vectorShiftLeftIntegerWord(auVar24,auVar24);
        auVar24 = loadVectorLeftIndexed(0x18,0x49ed8c);
        auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        iVar15 = *(int *)((int)pvVar6 + 0x74);
        auVar24 = vectorMultiplyAddFloatingPoint
                            (auVar26,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,
                             auVar25);
        auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
        auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar8 = storeVectorElementWordIndexed
                          (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x7c,
                           ZEXT48(pvVar6));
        *(undefined4 *)((int)pvVar6 + 0x7cU & 0xfffffffc) = uVar8;
        if (((iVar15 != -1) && (sound::g_SoundChannels[iVar15].pMoby == moby)) &&
           (sound::g_SoundChannels[iVar15].state != '\0')) {
          sound::sound_Kill(iVar15);
        }
        *(undefined4 *)((int)pvVar6 + 0x74) = 0xffffffff;
        uVar7 = (int)*(uint *)((int)pvVar6 + 0x88) >> 0x1f;
        iVar15 = (uVar7 >> 1 ^ *(uint *)((int)pvVar6 + 0x88)) - uVar7;
        if (iVar15 < 0x3aa3d70b) {
          if (iVar15 < -0x3aa3d70a) {
            *(undefined4 *)((int)pvVar6 + 0x88) = 0xbaa3d70a;
          }
        }
        else {
          *(undefined4 *)((int)pvVar6 + 0x88) = 0x3aa3d70a;
        }
        if (moby->setByGroup == '\0') {
          uVar16 = (char)((LZCOUNT(2 - (uint)moby->state) << 0x3a) >> 0x3f) + '\x05';
        }
        else {
          uVar16 = (char)((LZCOUNT(2 - (uint)moby->state) << 0x3a) >> 0x3f) + '\a';
        }
        moby->state = uVar16;
      }
    }
    else {
      dVar20 = (double)fastfunc::FastWrapRot
                                 (*(float *)((int)pvVar6 + 0x80),mobyutil::g_FrameTime * 6.2831855);
      dVar19 = (double)(float)(3.141592502593994 - dVar20);
      if (dVar20 - (double)(float)(3.141592502593994 - dVar20) < 0.0) {
        dVar19 = dVar20;
      }
      dVar21 = (double)(float)(-3.141592502593994 - dVar20);
      if ((double)(float)(-3.141592502593994 - dVar20) - dVar19 < 0.0) {
        dVar21 = dVar19;
      }
      dVar19 = (double)(float)(dVar21 * dVar21);
      dVar23 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar21));
      *(float *)((int)pvVar6 + 0x80) = (float)dVar20;
      dVar20 = (double)(float)(dVar19 * dVar23);
      lVar14 = fastfunc::FastDoubleToInt
                         ((double)((((float)(dVar19 * dVar20) * 2.601887e-06 +
                                    (float)(dVar20 * -0.0001980741071747616 +
                                           (double)(float)(dVar23 * 0.008333025500178337 +
                                                          (double)(float)((double)(float)(dVar19 * 
                                                  dVar21) * -0.16666656732559204 + dVar21)))) * 4.0
                                   - 3.0) * 128.0));
      fVar3 = hero::g_heroGroundZ;
      fVar4 = (moby->pos).x;
      fVar5 = (moby->pos).y;
      lVar17 = lVar14 + (lVar14 + -0x20 >> 0x3f & 0x20U - lVar14);
      uVar18 = lVar17 + (0x80 - lVar14 >> 0x3f & 0x80U - lVar17);
      bVar1 = g_standingOnMoby != moby;
      moby->field60_0x90 =
           (uint)((uVar18 & 0xffffffff) << 8) | (uint)uVar18 | (uint)((uVar18 & 0xffffffff) << 0x10)
           | 0x80000000;
      if (((bVar1) || (g_framesNotGrounded != 0)) ||
         (0.5 <= SQRT((g_heroPosition.x - fVar4) * (g_heroPosition.x - fVar4) +
                      (g_heroPosition.y - fVar5) * (g_heroPosition.y - fVar5)))) {
        if (moby->state == '\x04') {
          fVar4 = SQRT((fVar4 - g_heroPosition.x) * (fVar4 - g_heroPosition.x) +
                       (fVar5 - g_heroPosition.y) * (fVar5 - g_heroPosition.y));
          if (((ABS(fVar3 - *(float *)((int)pvVar6 + 100)) < 2.0) && (fVar4 < 32.0)) &&
             (5.0 < fVar4)) {
            moby->state = '\x03';
            moby->setByGroup = '\0';
          }
        }
        else if (((moby->state == '\x05') &&
                 (fVar4 = SQRT((fVar4 - g_heroPosition.x) * (fVar4 - g_heroPosition.x) +
                               (fVar5 - g_heroPosition.y) * (fVar5 - g_heroPosition.y)),
                 ABS(fVar3 - *(float *)((int)pvVar6 + 0x60)) < 2.0)) &&
                ((fVar4 < 32.0 && (5.0 < fVar4)))) {
          moby->state = '\x02';
          moby->setByGroup = '\0';
        }
      }
      else {
        sound::PlayMobySound(1,0,moby);
        if (*(int *)((int)pvVar6 + 0x68) != -1) {
          mobyupdate_helpers::M877_0049eaa0(lVar13);
        }
        bVar2 = moby->state;
        moby->field60_0x90 = 0x80208020;
        moby->state = '\x01';
        moby->setByGroup = (char)((LZCOUNT(5 - (uint)bVar2) << 0x3a) >> 0x3f) + '\x03';
        *(undefined4 *)((int)pvVar6 + 0x78) = 0;
      }
    }
  }
  else if (bVar2 < 8) {
    iVar15 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar6 + 0x74));
    if (iVar15 != 0) {
      sound::sound_Kill(*(int *)((int)pvVar6 + 0x74));
      *(undefined4 *)((int)pvVar6 + 0x74) = 0xffffffff;
    }
    local_40 = (longlong)(int)(animationSpeed * 30.5);
    if (((int)(animationSpeed * 30.5) < *(int *)((int)pvVar6 + 0x7c)) ||
       (fVar4 = g_heroPosition.y - (moby->pos).y, fVar5 = g_heroPosition.x - (moby->pos).x,
       0.5 < SQRT(fVar5 * fVar5 + fVar4 * fVar4))) {
      fastfunc::FastDecTimerS32(ZEXT48(pvVar6) + 0x7c);
    }
    if (g_standingOnMoby == moby) {
      if (*(int *)((int)pvVar6 + 0x7c) == 0) {
        dVar20 = (double)fastfunc::FastWrapRot
                                   (*(float *)((int)pvVar6 + 0x80),mobyutil::g_FrameTime * 6.2831855
                                   );
        dVar19 = (double)(float)(3.141592502593994 - dVar20);
        if (dVar20 - (double)(float)(3.141592502593994 - dVar20) < 0.0) {
          dVar19 = dVar20;
        }
        dVar21 = (double)(float)(-3.141592502593994 - dVar20);
        if ((double)(float)(-3.141592502593994 - dVar20) - dVar19 < 0.0) {
          dVar21 = dVar19;
        }
        dVar19 = (double)(float)(dVar21 * dVar21);
        dVar22 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar21));
        dVar23 = (double)(float)(dVar19 * dVar22);
        *(float *)((int)pvVar6 + 0x80) = (float)dVar20;
        lVar14 = fastfunc::FastDoubleToInt
                           ((double)((((float)(dVar19 * dVar23) * 2.601887e-06 +
                                      (float)(dVar23 * -0.0001980741071747616 +
                                             (double)(float)(dVar22 * 0.008333025500178337 +
                                                            (double)(float)((double)(float)(dVar19 *
                                                                                           dVar21) *
                                                                            -0.16666656732559204 +
                                                                           dVar21)))) * 4.0 - 3.0) *
                                    128.0));
        sVar10 = g_framesNotGrounded;
        fVar9 = g_heroPosition.y;
        fVar3 = g_heroPosition.x;
        lVar17 = lVar14 + (lVar14 + -0x20 >> 0x3f & 0x20U - lVar14);
        fVar4 = (moby->pos).x;
        fVar5 = (moby->pos).y;
        bVar1 = g_standingOnMoby == moby;
        uVar18 = lVar17 + (0x80 - lVar14 >> 0x3f & 0x80U - lVar17);
        moby->field60_0x90 =
             (uint)((uVar18 & 0xffffffff) << 8) | (uint)uVar18 |
             (uint)((uVar18 & 0xffffffff) << 0x10) | 0x80000000;
        if (((bVar1) && (sVar10 == 0)) &&
           (fVar9 = fVar9 - fVar5, fVar3 = fVar3 - fVar4, SQRT(fVar3 * fVar3 + fVar9 * fVar9) < 0.5)
           ) {
          sound::PlayMobySound(1,0,moby);
          moby->field60_0x90 = 0x80208020;
          moby->state = (char)((LZCOUNT(7 - (uint)moby->state) << 0x3a) >> 0x3f) + '\x03';
        }
      }
    }
    else {
      camera::camera5::Camera_DeactivateMobyDrivenCam(1);
      moby->state = ((byte)((LZCOUNT(7 - (uint)moby->state) << 0x3a) >> 0x3f) & 1) + 4;
    }
  }
  local_a0.x = local_a0.x + (moby->pos).x;
  local_a0.y = local_a0.y + (moby->pos).y;
  local_a0.z = local_a0.z + (moby->pos).z;
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar6 + 0x20),&local_a0,uVar12 - 0x90,lVar13 + 0x40);
  return;
}



//==== 0049f894  ns=mobyupdate_helpers  size=0x14
// sig: undefined M879_0049f894(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M879_0049f894(void)

{
  DAT_008c80a8 = 0x10000;
  return;
}



//==== 0049f8a8  ns=mobyupdate_helpers  size=0x88
// sig: undefined M879_Rilgar_SubmitOcean(void)
// callers(0): 
// callees(2): 00110b70 mobyutil::MB_IsPntInCuboid; 0017e558 water::SubmitZone

void mobyupdate_helpers::M879_Rilgar_SubmitOcean(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = *(int **)(param_1 + 0x78);
  while ((*piVar3 == -1 ||
         (iVar1 = mobyutil::MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)*piVar3), iVar1 == 0
         ))) {
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
    if (7 < iVar2) {
      water::SubmitZone(&OCEAN_RILGAR);
      return;
    }
  }
  return;
}



//==== 0049f960  ns=mobyupdate_unsorted  size=0x210
// sig: undefined UpdateMoby_879_RilgarOcean(MobyInstance * moby)
// callers(0): 
// callees(2): 0006d760 draw::RegisterOceanUpdate; 0017e368 water::OceanPlane_SetDefaultDepth

/* Moby 879 */

void mobyupdate_unsorted::UpdateMoby_879_RilgarOcean(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (moby->state == 0) {
    water::OceanPlane_SetDefaultDepth(0x3ff0000000000000,&OCEAN_RILGAR);
    moby->state = '\x01';
    moby->updateDistance = -1;
  }
  else if (moby->state < 2) {
    if (hero::g_heroStateType == 0x16) {
      fVar2 = (float)(longlong)(worldUpdateTime % 0x168) * 0.017444445 - 3.14;
      fVar1 = 61.5;
      fVar3 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar3 = fVar2;
      }
      fVar4 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
        fVar4 = fVar3;
      }
    }
    else {
      fVar2 = (float)(longlong)(worldUpdateTime % 0x168) * 0.017444445 - 3.14;
      fVar1 = 59.5;
      fVar3 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar3 = fVar2;
      }
      fVar4 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
        fVar4 = fVar3;
      }
    }
    fVar5 = fVar4 * fVar4;
    fVar3 = fVar5 * fVar5 * fVar4;
    fVar2 = fVar5 * fVar3;
    OCEAN_RILGAR.z =
         (fVar5 * fVar2 * 2.601887e-06 +
         fVar2 * -0.0001980741 + fVar3 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4) * 0.25
         + fVar1;
    draw::RegisterOceanUpdate(&PTR_M879_Rilgar_SubmitOcean_0070f340,moby);
  }
  return;
}



//==== 0049fb70  ns=mobyupdate_helpers  size=0x14
// sig: undefined M880_0049fb70(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M880_0049fb70(void)

{
  DAT_008cbd8c = 0x10000;
  return;
}



//==== 0049fba0  ns=Global  size=0x56c
// sig: undefined FUN_0049fba0(void)
// callers(3): 001d6b28 mobyupdate_unsorted::UpdateMoby_1126; 001e91a0 mobyupdate_unsorted::UpdateMoby_1167; 001eb4f8 mobyupdate_unsorted::UpdateMoby_1169
// callees(4): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fddc0 mobyutil::MB_SetAnimation; 0010581c mobyutil::SetCollDamIn

MobyInstance * FUN_0049fba0(f32 *param_1,float *param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
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
  lVar13 = uVar11 - 0x110;
  puVar6 = (ulonglong *)lVar13;
  *puVar6 = uVar11;
  puVar6[0x24] = in_LR;
  puVar6[0x21] = unaff_r31;
  puVar6[0x1f] = unaff_r29;
  puVar6[0x1e] = unaff_r28;
  puVar6[0x20] = unaff_r30;
  puVar6[0x1d] = unaff_r27;
  puVar6[0x1c] = unaff_r26;
  pMVar14 = mobyfunc::CreateMoby(DOOR_LEFT|EXPLOSION_0070);
  if (pMVar14 != (MobyInstance *)0x0) {
    pMVar14->updateDistance = -1;
    pMVar14->drawDistance = 0x7f;
    pMVar14->enabled = '\x01';
    fVar9 = 0.0;
    (pMVar14->rotation).x = 0.0;
    fVar4 = param_2[2];
    pvVar5 = pMVar14->pVar;
    fVar2 = ABS(param_2[2]);
    fVar3 = SQRT(*param_2 * *param_2 + param_2[1] * param_2[1]);
    fVar1 = ABS(fVar3);
    *(float *)((int)puVar6 + 0x84) = fVar3;
    *(float *)(puVar6 + 0x11) = fVar1 - fVar2;
    uVar15 = (ulonglong)(*(uint *)((int)puVar6 + 0x84) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0x11) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar4 >> 0x1d) & 4;
    fVar4 = ABS(*(float *)((int)puVar6 + 0x84));
    if (*(float *)(puVar6 + 0x11) - 0.0 < 0.0) {
      fVar4 = fVar2;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
    if (*(float *)(puVar6 + 0x11) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    fVar10 = fVar9;
    if (0.0 < fVar4) {
      lVar12 = uVar11 - 0x100;
      lVar16 = uVar11 - 100;
      lVar17 = uVar11 - 0x54;
      lVar19 = 2;
      fVar4 = (fVar2 - fVar4) / (fVar2 + fVar4);
      fVar2 = fVar4 * fVar4;
      *(float *)(puVar6 + 0x17) = fVar4;
      *(float *)(puVar6 + 0x16) = fVar4;
      *(float *)((int)puVar6 + 0xb4) = fVar4;
      *(float *)((int)puVar6 + 0xac) = fVar4;
      fVar4 = fVar2 * fVar2;
      *(float *)(puVar6 + 0x16) = *(float *)(puVar6 + 0x16) * fVar2;
      *(float *)((int)puVar6 + 0xb4) = *(float *)((int)puVar6 + 0xb4) * fVar4;
      *(float *)(puVar6 + 0x17) = *(float *)(puVar6 + 0x17) * fVar4 * fVar2;
      do {
        *(float *)((int)lVar12 + 0xac) = *(float *)((int)lVar12 + 0x9c) * fVar4 * fVar4;
        iVar7 = (int)lVar16;
        lVar12 = lVar12 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)(iVar7 + 4) * fVar4 * fVar4;
        lVar17 = lVar17 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar19 = 4;
      lVar17 = uVar11 - 100;
      pfVar18 = (float *)&DAT_007358e0;
      lVar12 = lVar13;
      lVar16 = lVar17;
      do {
        fVar4 = *pfVar18;
        fVar2 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar12 + 0xac) = *(float *)((int)lVar12 + 0xac) * fVar4;
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
        fVar4 = fVar4 + *(float *)(iVar7 + 0xac) + *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
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
    *(float *)(puVar6 + 0x10) = fVar1 - fVar2;
    uVar15 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0x10) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar3 >> 0x1d) & 4;
    fVar4 = fVar1;
    if (*(float *)(puVar6 + 0x10) - 0.0 < 0.0) {
      fVar4 = fVar2;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
    if (*(float *)(puVar6 + 0x10) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    fVar10 = fVar9;
    if (0.0 < fVar4) {
      lVar12 = uVar11 - 0x100;
      lVar17 = uVar11 - 0x74;
      lVar16 = uVar11 - 0x84;
      lVar19 = 2;
      fVar4 = (fVar2 - fVar4) / (fVar2 + fVar4);
      fVar2 = fVar4 * fVar4;
      *(float *)(puVar6 + 0x13) = fVar4;
      *(float *)(puVar6 + 0x12) = fVar4;
      *(float *)((int)puVar6 + 0x94) = fVar4;
      *(float *)((int)puVar6 + 0x8c) = fVar4;
      fVar4 = fVar2 * fVar2;
      *(float *)(puVar6 + 0x12) = *(float *)(puVar6 + 0x12) * fVar2;
      *(float *)((int)puVar6 + 0x94) = *(float *)((int)puVar6 + 0x94) * fVar4;
      *(float *)(puVar6 + 0x13) = *(float *)(puVar6 + 0x13) * fVar4 * fVar2;
      do {
        *(float *)((int)lVar12 + 0x8c) = *(float *)((int)lVar12 + 0x7c) * fVar4 * fVar4;
        iVar7 = (int)lVar16;
        lVar16 = lVar16 + 8;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)(iVar7 + 4) * fVar4 * fVar4;
        lVar17 = lVar17 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar19 = 4;
      lVar17 = uVar11 - 0x84;
      pfVar18 = (float *)&DAT_007358e0;
      lVar12 = lVar13;
      lVar16 = lVar17;
      do {
        fVar4 = *pfVar18;
        fVar2 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar12 + 0x8c) = *(float *)((int)lVar12 + 0x8c) * fVar4;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar2;
        lVar16 = lVar16 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar12 = 2;
      fVar4 = fVar9;
      do {
        iVar7 = (int)lVar13;
        iVar8 = (int)lVar17;
        lVar13 = lVar13 + 0x10;
        lVar17 = lVar17 + 0x10;
        fVar4 = fVar4 + *(float *)(iVar7 + 0x8c) + *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                *(float *)(iVar8 + 0xc);
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      fVar10 = (fVar4 + 0.7853982) * fVar3 + fVar1;
    }
    (pMVar14->rotation).z = fVar10;
    (pMVar14->pos).x = *param_1;
    (pMVar14->pos).y = param_1[1];
    (pMVar14->pos).z = param_1[2];
    (pMVar14->pos).w = param_1[3];
    *(f32 *)((int)pvVar5 + 0x40) = *param_1;
    *(f32 *)((int)pvVar5 + 0x44) = param_1[1];
    *(f32 *)((int)pvVar5 + 0x48) = param_1[2];
    *(f32 *)((int)pvVar5 + 0x4c) = param_1[3];
    fVar4 = *param_2;
    *(float *)((int)pvVar5 + 0x30) = fVar4;
    *(float *)((int)pvVar5 + 0x34) = param_2[1];
    *(float *)((int)pvVar5 + 0x38) = param_2[2];
    *(float *)((int)pvVar5 + 0x3c) = param_2[3];
    *(float *)(puVar6 + 0xe) = fVar4;
    fVar3 = *(float *)((int)pvVar5 + 0x34);
    *(float *)((int)puVar6 + 0x74) = fVar3;
    *(undefined4 *)(puVar6 + 0xf) = *(undefined4 *)((int)pvVar5 + 0x38);
    fVar1 = fVar4 * fVar4 + fVar3 * fVar3;
    *(undefined4 *)((int)puVar6 + 0x7c) = *(undefined4 *)((int)pvVar5 + 0x3c);
    fVar2 = fVar9;
    if (SQRT(fVar1) != 0.0) {
      fVar9 = 1.0 / SQRT(fVar1);
      fVar9 = -(fVar1 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
      fVar9 = -(fVar1 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
      fVar9 = -(fVar1 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
      fVar2 = fVar4 * fVar9;
      fVar9 = fVar3 * fVar9;
    }
    *(float *)(puVar6 + 0xe) = fVar2;
    *(float *)((int)puVar6 + 0x74) = fVar9;
    *(undefined4 *)(puVar6 + 0xf) = 0x3f800000;
    mobyutil::SetCollDamIn(0x3ff0000000000000,pvVar5,pMVar14,0x10001,0x3f800000,uVar11 - 0xa0);
    *(undefined1 *)((int)pvVar5 + 0x18) = 1;
    *(undefined1 *)((int)pvVar5 + 0x19) = 1;
    puVar6[0x1a] = (longlong)(int)(animationSpeed * 5.5);
    mobyutil::MB_SetAnimation(pMVar14,1,0,*(undefined4 *)((int)puVar6 + 0xd4));
    pMVar14->modeBits = DRAW_TRANSPARENT_WEIRD|TRANSPARENT;
    *(undefined4 *)((int)pvVar5 + 0x50) = param_3;
    *(undefined4 *)((int)pvVar5 + 0x54) = param_4;
    pMVar14->alpha = '\x10';
    mobyfunc::UpdateMobyTransform(pMVar14);
  }
  return pMVar14;
}



