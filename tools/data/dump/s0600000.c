//==== 00600320  ns=Global  size=0x134
// sig: undefined FUN_00600320(void)
// callers(3): 00600320 FUN_00600320; 00600458 FUN_00600458; 00600860 FUN_00600860
// callees(4): 005fd9f8 FUN_005fd9f8; 005ffff0 FUN_005ffff0; 00600320 FUN_00600320; 00600458 FUN_00600458

void FUN_00600320(uint param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  
  while( true ) {
    uVar1 = (int)param_1 >> 2;
    FUN_005fd9f8(param_1,param_2,(param_3 + (uVar1 & 0x7fffffff) * -2) * 4 + param_4);
    if ((int)param_1 < 0x201) break;
    FUN_00600320(uVar1,param_2,param_3,param_4);
    FUN_00600458(uVar1,param_2 + (uVar1 & 0x3fffffff) * 4,param_3,param_4);
    FUN_00600320(uVar1,param_2 + uVar1 * 8,param_3,param_4);
    param_2 = param_2 + uVar1 * 0x10 + (uVar1 & 0x3fffffff) * -4;
    param_1 = uVar1;
  }
  FUN_005ffff0(param_1,param_2,param_3,param_4);
  return;
}



//==== 00600458  ns=Global  size=0x404
// sig: undefined FUN_00600458(void)
// callers(3): 00600320 FUN_00600320; 00600458 FUN_00600458; 00600860 FUN_00600860
// callees(6): 005fd9f8 FUN_005fd9f8; 005fde88 FUN_005fde88; 005ffe10 FUN_005ffe10; 005fff00 FUN_005fff00; 00600320 FUN_00600320; 00600458 FUN_00600458

void FUN_00600458(uint param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  while( true ) {
    uVar1 = (int)param_1 >> 2;
    FUN_005fde88(param_1,param_2,(param_3 - param_1) * 4 + param_4);
    if ((int)param_1 < 0x201) break;
    FUN_00600320(uVar1,param_2,param_3,param_4);
    FUN_00600458(uVar1,param_2 + (uVar1 & 0x3fffffff) * 4,param_3,param_4);
    FUN_00600320(uVar1,param_2 + uVar1 * 8,param_3,param_4);
    param_2 = param_2 + uVar1 * 0x10 + (uVar1 & 0x3fffffff) * -4;
    param_1 = uVar1;
  }
  iVar2 = (int)param_1 >> 1;
  for (; 0x80 < (int)uVar1; uVar1 = (int)uVar1 >> 2) {
    iVar3 = (param_3 - ((int)uVar1 >> 1)) * 4 + param_4;
    iVar8 = (param_3 - uVar1) * 4 + param_4;
    uVar7 = uVar1;
    while (uVar6 = uVar7, (int)uVar6 < iVar2) {
      iVar4 = uVar6 - uVar1;
      iVar5 = uVar6 * 2;
      if (iVar4 < iVar2) {
        iVar9 = param_2 + iVar4 * 4;
        iVar10 = param_2 + (iVar2 + iVar4) * 4;
        iVar4 = iVar5 + iVar4;
        do {
          iVar4 = iVar4 + iVar5;
          FUN_005fd9f8(uVar1,iVar9,iVar3);
          iVar9 = iVar9 + uVar6 * 8;
          FUN_005fd9f8(uVar1,iVar10,iVar3);
          iVar10 = iVar10 + uVar6 * 8;
        } while ((int)(iVar4 + uVar6 * -2) < iVar2);
      }
      iVar5 = iVar5 - uVar1;
      uVar7 = uVar6 * 4;
      if (iVar5 < iVar2) {
        iVar9 = param_2 + iVar5 * 4;
        iVar4 = param_2 + (iVar2 + iVar5) * 4;
        iVar5 = uVar7 + iVar5;
        do {
          iVar5 = iVar5 + uVar7;
          FUN_005fde88(uVar1,iVar9,iVar8);
          iVar9 = iVar9 + uVar6 * 0x10;
          FUN_005fde88(uVar1,iVar4,iVar8);
          iVar4 = iVar4 + uVar6 * 0x10;
        } while ((int)(iVar5 + uVar6 * -4) < iVar2);
      }
    }
  }
  if ((int)uVar1 < iVar2) {
    iVar8 = (param_3 - uVar1) * 4 + param_4;
    iVar3 = param_4 + (param_3 - ((int)uVar1 >> 1)) * 4;
    uVar7 = uVar1;
    do {
      iVar4 = uVar7 - uVar1;
      iVar5 = uVar7 * 2;
      if (iVar4 < iVar2) {
        iVar9 = param_2 + iVar4 * 4;
        iVar10 = iVar4 + iVar5;
        iVar4 = param_2 + (iVar2 + iVar4) * 4;
        do {
          FUN_005fd9f8(uVar1,iVar9,iVar3);
          iVar10 = iVar10 + iVar5;
          FUN_005fff00(uVar1,iVar9,param_3,param_4);
          iVar9 = iVar9 + uVar7 * 8;
          FUN_005fd9f8(uVar1,iVar4,iVar3);
          FUN_005fff00(uVar1,iVar4,param_3,param_4);
          iVar4 = iVar4 + uVar7 * 8;
        } while ((int)(iVar10 + uVar7 * -2) < iVar2);
      }
      iVar5 = iVar5 - uVar1;
      uVar6 = uVar7 * 4;
      if (iVar5 < iVar2) {
        iVar9 = param_2 + iVar5 * 4;
        iVar10 = iVar5 + uVar6;
        iVar4 = param_2 + (iVar2 + iVar5) * 4;
        do {
          FUN_005fde88(uVar1,iVar9,iVar8);
          iVar10 = iVar10 + uVar6;
          FUN_005ffe10(uVar1,iVar9,param_3,param_4);
          iVar9 = iVar9 + uVar7 * 0x10;
          FUN_005fde88(uVar1,iVar4,iVar8);
          FUN_005ffe10(uVar1,iVar4,param_3,param_4);
          iVar4 = iVar4 + uVar7 * 0x10;
        } while ((int)(iVar10 + uVar7 * -4) < iVar2);
      }
      uVar7 = uVar6;
    } while ((int)uVar6 < iVar2);
  }
  return;
}



//==== 00600860  ns=Global  size=0x1174
// sig: undefined FUN_00600860(void)
// callers(1): 006019d8 FUN_006019d8
// callees(6): 005fe460 FUN_005fe460; 005ff938 FUN_005ff938; 005fff00 FUN_005fff00; 005ffff0 FUN_005ffff0; 00600320 FUN_00600320; 00600458 FUN_00600458

void FUN_00600860(int param_1,ulonglong param_2,uint param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
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
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float *pfVar34;
  int *piVar35;
  float *pfVar36;
  float *pfVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  float *pfVar42;
  undefined4 *puVar43;
  int iVar44;
  float *pfVar45;
  undefined4 *puVar46;
  longlong lVar47;
  undefined4 *puVar48;
  undefined4 *puVar49;
  int iVar51;
  ulonglong uVar50;
  longlong lVar52;
  longlong lVar53;
  ulonglong uVar54;
  longlong lVar55;
  longlong lVar56;
  longlong lVar57;
  longlong lVar58;
  int iVar59;
  ulonglong uVar60;
  int iVar61;
  longlong lVar62;
  longlong lVar63;
  longlong lVar64;
  longlong lVar65;
  ulonglong uVar66;
  ulonglong uVar67;
  uint local_270 [64];
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  uint local_160;
  int local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  uint local_13c;
  int local_138;
  uint local_134;
  int local_130;
  
  pfVar45 = (float *)param_2;
  local_138 = param_1;
  local_134 = param_3;
  local_130 = param_4;
  if (param_1 < 0x21) {
    if (param_1 < 9) {
      if (param_1 == 8) {
        fVar3 = pfVar45[7];
        fVar4 = pfVar45[4];
        fVar5 = pfVar45[5];
        fVar9 = *pfVar45 - fVar4;
        fVar6 = pfVar45[1];
        fVar4 = *pfVar45 + fVar4;
        fVar7 = pfVar45[2];
        fVar11 = fVar6 - fVar5;
        fVar8 = pfVar45[6];
        fVar6 = fVar6 + fVar5;
        fVar5 = pfVar45[3];
        fVar12 = fVar7 - fVar8;
        fVar10 = fVar5 - fVar3;
        fVar7 = fVar7 + fVar8;
        fVar5 = fVar5 + fVar3;
        *pfVar45 = fVar4 + fVar7;
        pfVar45[1] = fVar6 + fVar5;
        pfVar45[4] = fVar4 - fVar7;
        pfVar45[5] = fVar6 - fVar5;
        pfVar45[2] = fVar9 - fVar10;
        pfVar45[3] = fVar11 + fVar12;
        pfVar45[6] = fVar9 + fVar10;
        pfVar45[7] = fVar11 - fVar12;
      }
      else if (param_1 == 4) {
        fVar3 = *pfVar45;
        fVar4 = pfVar45[2];
        pfVar34 = pfVar45 + 3;
        pfVar36 = pfVar45 + 1;
        fVar5 = *pfVar36;
        *pfVar45 = fVar3 + fVar4;
        *pfVar36 = *pfVar36 + *pfVar34;
        pfVar45[2] = fVar3 - fVar4;
        *pfVar34 = fVar5 - *pfVar34;
      }
    }
    else if (param_1 == 0x20) {
      FUN_005fe460(param_2 & 0xffffffff,param_4 + param_3 * 4 + -0x20);
      fVar3 = pfVar45[0xe];
      fVar4 = pfVar45[0xf];
      fVar5 = pfVar45[0x16];
      fVar6 = pfVar45[0x17];
      fVar7 = pfVar45[2];
      fVar8 = pfVar45[3];
      fVar9 = pfVar45[6];
      fVar10 = pfVar45[7];
      fVar11 = pfVar45[10];
      fVar12 = pfVar45[0xb];
      fVar13 = pfVar45[4];
      fVar14 = pfVar45[5];
      pfVar45[2] = pfVar45[0x10];
      pfVar45[3] = pfVar45[0x11];
      pfVar45[4] = pfVar45[8];
      pfVar45[5] = pfVar45[9];
      pfVar45[6] = pfVar45[0x18];
      pfVar45[7] = pfVar45[0x19];
      pfVar45[8] = fVar13;
      pfVar45[9] = fVar14;
      pfVar45[10] = pfVar45[0x14];
      pfVar45[0xb] = pfVar45[0x15];
      pfVar45[0xe] = pfVar45[0x1c];
      pfVar45[0xf] = pfVar45[0x1d];
      pfVar45[0x10] = fVar7;
      pfVar45[0x11] = fVar8;
      pfVar45[0x14] = fVar11;
      pfVar45[0x15] = fVar12;
      pfVar45[0x16] = pfVar45[0x1a];
      pfVar45[0x17] = pfVar45[0x1b];
      pfVar45[0x18] = fVar9;
      pfVar45[0x19] = fVar10;
      pfVar45[0x1a] = fVar5;
      pfVar45[0x1b] = fVar6;
      pfVar45[0x1c] = fVar3;
      pfVar45[0x1d] = fVar4;
    }
    else {
      FUN_005ff938(param_2 & 0xffffffff,param_4);
      fVar3 = pfVar45[2];
      fVar4 = pfVar45[3];
      fVar5 = pfVar45[6];
      fVar6 = pfVar45[7];
      pfVar45[2] = pfVar45[8];
      pfVar45[3] = pfVar45[9];
      pfVar45[6] = pfVar45[0xc];
      pfVar45[7] = pfVar45[0xd];
      pfVar45[8] = fVar3;
      pfVar45[9] = fVar4;
      pfVar45[0xc] = fVar5;
      pfVar45[0xd] = fVar6;
    }
  }
  else {
    local_160 = param_1 >> 3;
    lVar52 = ((ulonglong)local_160 & 0x7fffffff) * 2;
    uVar60 = lVar52 + ((ulonglong)local_160 & 0x3fffffff) * 4;
    lVar64 = param_2 + ((ulonglong)local_160 & 0xfffffff) * 0x10;
    lVar63 = param_2 + ((ulonglong)local_160 & 0x1fffffff) * 8;
    lVar62 = param_2 + (uVar60 & 0x3fffffff) * 4;
    local_15c = (int)lVar52;
    pfVar36 = (float *)lVar63;
    pfVar34 = (float *)lVar64;
    pfVar37 = (float *)lVar62;
    fVar3 = pfVar34[1];
    fVar4 = pfVar36[1];
    local_168 = local_160 - 2;
    fVar5 = pfVar37[1];
    uVar21 = param_1 >> 2;
    fVar8 = fVar4 - fVar5;
    fVar6 = *pfVar45 - *pfVar34;
    fVar4 = fVar4 + fVar5;
    fVar5 = pfVar45[1];
    fVar9 = *pfVar36 - *pfVar37;
    fVar7 = fVar5 - fVar3;
    fVar5 = fVar5 + fVar3;
    fVar10 = *pfVar36 + *pfVar37;
    fVar3 = *pfVar45 + *pfVar34;
    local_14c = 1.0;
    local_16c = param_4 + (int)(((ulonglong)param_3 - (longlong)(int)uVar21 & 0xffffffff) << 2);
    local_144 = 1.0;
    local_148 = 0.0;
    local_140 = 0.0;
    *pfVar45 = fVar3 + fVar10;
    pfVar45[1] = fVar5 + fVar4;
    *pfVar36 = fVar3 - fVar10;
    pfVar36[1] = fVar5 - fVar4;
    *pfVar34 = fVar6 - fVar8;
    pfVar34[1] = fVar7 + fVar9;
    *pfVar37 = fVar6 + fVar8;
    pfVar37[1] = fVar7 - fVar9;
    local_150 = *(float *)(local_16c + 0xc);
    local_158 = *(float *)(local_16c + 4);
    local_154 = *(float *)(local_16c + 8);
    if (2 < local_168) {
      lVar58 = param_2 + (lVar52 + uVar60 & 0x3fffffff) * 4;
      lVar65 = param_2 + 8;
      lVar55 = param_2 + 0xc;
      lVar56 = param_2 + 0x10;
      lVar57 = param_2 + 0x14;
      local_164 = 2;
      local_170 = 0;
      lVar52 = lVar62;
      lVar47 = lVar64;
      lVar53 = lVar63;
      fVar3 = DAT_0071a5d4;
      local_140 = DAT_0071a5d4;
      fVar4 = DAT_0071a5d0;
      fVar5 = DAT_0071a5d0;
      do {
        iVar44 = (int)lVar62;
        iVar61 = (int)lVar64;
        fVar6 = *(float *)lVar65;
        iVar51 = local_16c + local_170;
        fVar7 = *(float *)lVar55;
        iVar59 = (int)lVar53;
        iVar40 = (int)lVar63;
        iVar38 = (int)lVar52;
        iVar41 = (int)lVar47;
        local_148 = *(float *)(iVar51 + 0x14);
        iVar39 = (int)lVar58;
        fVar22 = local_140 - *(float *)(iVar51 + 0x1c);
        local_140 = -*(float *)(iVar51 + 0x1c);
        fVar12 = *(float *)(iVar59 + 0x10) - *(float *)(iVar44 + 0x10);
        fVar13 = *(float *)(iVar59 + 0x14) - *(float *)(iVar44 + 0x14);
        fVar10 = fVar6 - *(float *)(iVar61 + 8);
        fVar11 = fVar7 - *(float *)(iVar61 + 0xc);
        fVar6 = fVar6 + *(float *)(iVar61 + 8);
        fVar8 = *(float *)lVar56;
        fVar7 = fVar7 + *(float *)(iVar61 + 0xc);
        fVar9 = *(float *)lVar57;
        fVar17 = fVar8 - *(float *)(iVar61 + 0x10);
        fVar15 = fVar9 - *(float *)(iVar61 + 0x14);
        fVar8 = fVar8 + *(float *)(iVar61 + 0x10);
        fVar9 = fVar9 + *(float *)(iVar61 + 0x14);
        fVar26 = *(float *)(iVar59 + 8) - *(float *)(iVar44 + 8);
        fVar28 = *(float *)(iVar59 + 0xc) - *(float *)(iVar44 + 0xc);
        local_14c = *(float *)(iVar51 + 0x10);
        local_144 = *(float *)(iVar51 + 0x18);
        fVar27 = *(float *)(iVar59 + 8) + *(float *)(iVar44 + 8);
        fVar29 = *(float *)(iVar59 + 0xc) + *(float *)(iVar44 + 0xc);
        fVar23 = local_154 * (fVar3 + local_148);
        fVar14 = fVar15 - fVar12;
        fVar22 = local_150 * fVar22;
        fVar16 = fVar17 + fVar13;
        fVar25 = fVar11 - fVar26;
        fVar24 = fVar10 + fVar28;
        fVar10 = fVar10 - fVar28;
        fVar11 = fVar11 + fVar26;
        fVar17 = fVar17 - fVar13;
        fVar15 = fVar15 + fVar12;
        fVar3 = *(float *)(iVar59 + 0x10) + *(float *)(iVar44 + 0x10);
        fVar26 = local_154 * (fVar4 + local_14c);
        fVar4 = *(float *)(iVar59 + 0x14) + *(float *)(iVar44 + 0x14);
        lVar63 = lVar63 + -0x10;
        lVar52 = lVar52 + -0x10;
        fVar28 = local_150 * (fVar5 + local_144);
        lVar58 = lVar58 + -0x10;
        pfVar34 = (float *)(lVar47 + -0x10);
        lVar62 = lVar62 + 0x10;
        *(float *)lVar65 = fVar6 + fVar27;
        lVar65 = lVar65 + 0x10;
        *(float *)lVar55 = fVar7 + fVar29;
        lVar55 = lVar55 + 0x10;
        *(float *)lVar56 = fVar8 + fVar3;
        lVar56 = lVar56 + 0x10;
        *(float *)lVar57 = fVar9 + fVar4;
        lVar57 = lVar57 + 0x10;
        *(float *)(iVar59 + 0x14) = fVar9 - fVar4;
        *(float *)(iVar59 + 8) = fVar6 - fVar27;
        *(float *)(iVar59 + 0x10) = fVar8 - fVar3;
        *(float *)(iVar59 + 0xc) = fVar7 - fVar29;
        *(float *)(iVar61 + 0x14) = local_14c * fVar15 + local_148 * fVar17;
        *(float *)(iVar61 + 8) = fVar26 * fVar10 - fVar23 * fVar11;
        *(float *)(iVar61 + 0xc) = fVar26 * fVar11 + fVar23 * fVar10;
        *(float *)(iVar61 + 0x10) = local_14c * fVar17 - local_148 * fVar15;
        *(float *)(iVar44 + 8) = fVar28 * fVar24 + fVar22 * fVar25;
        *(float *)(iVar44 + 0xc) = fVar28 * fVar25 - fVar22 * fVar24;
        *(float *)(iVar44 + 0x14) = local_144 * fVar14 - local_140 * fVar16;
        *(float *)(iVar44 + 0x10) = local_144 * fVar16 + local_140 * fVar14;
        fVar3 = *(float *)(iVar38 + -8);
        fVar4 = *(float *)(iVar38 + -4);
        fVar5 = *(float *)lVar63;
        fVar6 = *(float *)lVar52;
        fVar7 = *(float *)(iVar38 + -0xc);
        fVar27 = fVar5 - fVar6;
        fVar8 = *(float *)(iVar39 + -8);
        fVar5 = fVar5 + fVar6;
        fVar6 = *(float *)(iVar39 + -4);
        fVar9 = *(float *)lVar58;
        fVar10 = *(float *)(iVar39 + -0xc);
        fVar11 = *(float *)(iVar40 + -8);
        fVar12 = *(float *)(iVar40 + -4);
        fVar24 = fVar11 - fVar3;
        fVar13 = *(float *)(iVar40 + -0xc);
        fVar25 = fVar12 - fVar4;
        fVar14 = *(float *)(iVar41 + -8);
        fVar29 = fVar13 - fVar7;
        fVar15 = *(float *)(iVar41 + -4);
        fVar30 = fVar14 - fVar8;
        fVar16 = *pfVar34;
        fVar31 = fVar15 - fVar6;
        fVar17 = *(float *)(iVar41 + -0xc);
        fVar32 = fVar16 - fVar9;
        fVar33 = fVar17 - fVar10;
        fVar12 = fVar12 + fVar4;
        fVar13 = fVar13 + fVar7;
        fVar14 = fVar14 + fVar8;
        local_164 = local_164 + 4;
        fVar15 = fVar15 + fVar6;
        fVar11 = fVar11 + fVar3;
        fVar16 = fVar16 + fVar9;
        fVar6 = fVar25 - fVar30;
        fVar4 = fVar24 + fVar31;
        fVar7 = fVar29 - fVar32;
        fVar3 = fVar27 + fVar33;
        fVar24 = fVar24 - fVar31;
        fVar25 = fVar25 + fVar30;
        fVar27 = fVar27 - fVar33;
        fVar29 = fVar29 + fVar32;
        fVar17 = fVar17 + fVar10;
        local_170 = local_170 + 0x10;
        lVar64 = lVar64 + 0x10;
        lVar53 = lVar53 + 0x10;
        *(float *)(iVar40 + -8) = fVar11 + fVar14;
        *(float *)(iVar40 + -4) = fVar12 + fVar15;
        *(float *)lVar63 = fVar5 + fVar16;
        *(float *)(iVar40 + -0xc) = fVar13 + fVar17;
        *(float *)(iVar41 + -8) = fVar11 - fVar14;
        *(float *)(iVar41 + -4) = fVar12 - fVar15;
        *pfVar34 = fVar5 - fVar16;
        *(float *)(iVar41 + -0xc) = fVar13 - fVar17;
        *(float *)(iVar38 + -8) = fVar23 * fVar24 - fVar26 * fVar25;
        *(float *)(iVar38 + -4) = fVar23 * fVar25 + fVar26 * fVar24;
        *(float *)lVar52 = local_148 * fVar27 - local_14c * fVar29;
        *(float *)(iVar38 + -0xc) = local_148 * fVar29 + local_14c * fVar27;
        *(float *)(iVar39 + -8) = fVar22 * fVar4 + fVar28 * fVar6;
        *(float *)(iVar39 + -4) = fVar22 * fVar6 - fVar28 * fVar4;
        *(float *)lVar58 = local_140 * fVar3 + local_144 * fVar7;
        *(float *)(iVar39 + -0xc) = local_140 * fVar7 - local_144 * fVar3;
        lVar47 = lVar47 + -0x10;
        fVar3 = local_148;
        fVar4 = local_14c;
        fVar5 = local_144;
      } while (local_164 < local_168);
    }
    iVar59 = local_15c + local_160 + local_15c;
    pfVar34 = pfVar45 + local_160;
    pfVar36 = pfVar45 + iVar59;
    pfVar37 = pfVar45 + local_160 + local_15c;
    pfVar42 = pfVar45 + local_15c + iVar59;
    fVar11 = local_154 * (local_148 + local_158);
    fVar13 = local_150 * (local_140 - local_158);
    fVar12 = local_154 * (local_14c + local_158);
    fVar14 = local_150 * (local_144 - local_158);
    fVar3 = pfVar34[-2];
    fVar4 = pfVar36[-2];
    fVar5 = pfVar37[-2];
    fVar6 = pfVar37[-1];
    fVar10 = fVar3 - fVar4;
    fVar7 = pfVar34[-1];
    fVar3 = fVar3 + fVar4;
    fVar4 = pfVar36[-1];
    fVar8 = pfVar42[-2];
    fVar17 = fVar7 - fVar4;
    fVar9 = pfVar42[-1];
    fVar15 = fVar5 - fVar8;
    fVar16 = fVar6 - fVar9;
    fVar5 = fVar5 + fVar8;
    fVar6 = fVar6 + fVar9;
    fVar7 = fVar7 + fVar4;
    fVar8 = fVar17 - fVar15;
    fVar4 = fVar10 + fVar16;
    fVar10 = fVar10 - fVar16;
    fVar17 = fVar17 + fVar15;
    pfVar34[-2] = fVar3 + fVar5;
    pfVar34[-1] = fVar7 + fVar6;
    pfVar37[-2] = fVar3 - fVar5;
    pfVar37[-1] = fVar7 - fVar6;
    pfVar36[-2] = fVar12 * fVar10 - fVar11 * fVar17;
    pfVar36[-1] = fVar12 * fVar17 + fVar11 * fVar10;
    pfVar42[-2] = fVar14 * fVar4 + fVar13 * fVar8;
    pfVar42[-1] = fVar14 * fVar8 - fVar13 * fVar4;
    fVar3 = pfVar36[1];
    fVar4 = pfVar42[1];
    fVar5 = pfVar34[1];
    fVar7 = *pfVar34 - *pfVar36;
    fVar8 = fVar5 - fVar3;
    fVar6 = pfVar37[1];
    fVar9 = *pfVar37 - *pfVar42;
    fVar15 = fVar6 - fVar4;
    fVar10 = *pfVar37 + *pfVar42;
    fVar6 = fVar6 + fVar4;
    fVar5 = fVar5 + fVar3;
    fVar3 = *pfVar34 + *pfVar36;
    fVar16 = fVar8 - fVar9;
    fVar4 = fVar7 + fVar15;
    fVar8 = fVar8 + fVar9;
    fVar7 = fVar7 - fVar15;
    *pfVar34 = fVar3 + fVar10;
    pfVar34[1] = fVar5 + fVar6;
    *pfVar37 = fVar3 - fVar10;
    pfVar37[1] = fVar5 - fVar6;
    *pfVar36 = local_158 * (fVar7 - fVar8);
    pfVar36[1] = local_158 * (fVar7 + fVar8);
    *pfVar42 = -local_158 * (fVar4 + fVar16);
    pfVar42[1] = local_158 * (fVar4 - fVar16);
    fVar3 = pfVar36[3];
    fVar4 = pfVar42[2];
    fVar5 = pfVar42[3];
    fVar6 = pfVar34[2];
    fVar7 = pfVar36[2];
    fVar8 = pfVar34[3];
    fVar22 = fVar6 - fVar7;
    fVar9 = pfVar37[2];
    fVar15 = fVar8 - fVar3;
    fVar10 = pfVar37[3];
    fVar16 = fVar9 - fVar4;
    fVar17 = fVar10 - fVar5;
    fVar9 = fVar9 + fVar4;
    fVar10 = fVar10 + fVar5;
    fVar8 = fVar8 + fVar3;
    fVar6 = fVar6 + fVar7;
    fVar4 = fVar15 - fVar16;
    fVar3 = fVar22 + fVar17;
    fVar15 = fVar15 + fVar16;
    fVar22 = fVar22 - fVar17;
    pfVar34[2] = fVar6 + fVar9;
    pfVar34[3] = fVar8 + fVar10;
    pfVar37[2] = fVar6 - fVar9;
    pfVar37[3] = fVar8 - fVar10;
    pfVar36[2] = fVar11 * fVar22 - fVar12 * fVar15;
    pfVar36[3] = fVar11 * fVar15 + fVar12 * fVar22;
    pfVar42[2] = fVar13 * fVar3 + fVar14 * fVar4;
    pfVar42[3] = fVar13 * fVar4 - fVar14 * fVar3;
    local_13c = uVar21;
    if (param_1 < 0x201) {
      if ((int)uVar21 < 0x21) {
        FUN_005fff00(param_1,param_2 & 0xffffffff,param_3,param_4);
      }
      else {
        FUN_005ffff0(param_1,param_2 & 0xffffffff,param_3,param_4);
      }
    }
    else {
      FUN_00600320(uVar21,param_2 & 0xffffffff,param_3,param_4);
      FUN_00600458(uVar21,param_2 + ((ulonglong)uVar21 & 0x3fffffff) * 4 & 0xffffffff,param_3,
                   param_4);
      FUN_00600320(uVar21,param_2 + ((ulonglong)local_13c & 0x1fffffff) * 8 & 0xffffffff,param_3,
                   param_4);
      FUN_00600320(uVar21,param_2 + ((ulonglong)local_13c & 0xfffffff) * 0x10 +
                                    ((ulonglong)uVar21 & 0x3fffffff) * -4 & 0xffffffff,param_3,
                   param_4);
    }
    uVar60 = 1;
    lVar52 = ZEXT48(&stack0x00000000) - 0x270;
    local_138 = local_138 >> 1;
    while( true ) {
      lVar62 = (uVar60 & 0x3fffffff) * 4 + lVar52;
      lVar64 = lVar52;
      uVar66 = uVar60;
      if ((int)uVar60 < 1) {
        uVar66 = 1;
      }
      do {
        piVar35 = (int *)lVar62;
        lVar62 = lVar62 + 4;
        *piVar35 = local_138 + *(int *)lVar64;
        uVar66 = uVar66 - 1;
        lVar64 = lVar64 + 4;
      } while (uVar66 != 0);
      uVar66 = uVar60 & 0x7fffffff;
      uVar60 = uVar66 << 1;
      iVar59 = (int)(uVar66 << 4);
      bVar2 = 0 < (int)uVar60;
      bVar1 = local_138 == iVar59;
      if (local_138 <= iVar59) break;
      while (local_138 = local_138 >> 1, !bVar2) {
        uVar66 = uVar60 & 0x7fffffff;
        uVar60 = uVar66 << 1;
        iVar59 = (int)(uVar66 << 4);
        bVar2 = 0 < (int)uVar60;
        bVar1 = local_138 == iVar59;
        if (local_138 <= iVar59) goto LAB_006012a4;
      }
    }
LAB_006012a4:
    lVar64 = (uVar60 & 0x7fffffff) * 2;
    iVar59 = (int)uVar60;
    if (bVar1) {
      lVar62 = (uVar60 & 0x3fffffff) * 4;
      uVar66 = 0;
      if (bVar2) {
        do {
          lVar47 = (uVar66 & 0x7fffffff) << 1;
          lVar63 = (uVar66 & 0x3fffffff) * 4 + lVar52;
          while( true ) {
            uVar66 = uVar66 + 1;
            uVar67 = lVar64 + lVar47 + (ulonglong)*(uint *)lVar63;
            puVar48 = (undefined4 *)((int)pfVar45 + (int)((uVar67 & 0xffffffff) << 2));
            puVar43 = (undefined4 *)((int)pfVar45 + (int)((lVar64 + uVar67 & 0xffffffff) << 2));
            uVar18 = puVar48[1];
            uVar19 = puVar43[1];
            uVar20 = *puVar48;
            *puVar48 = *puVar43;
            puVar48[1] = uVar19;
            *puVar43 = uVar20;
            puVar43[1] = uVar18;
            if (iVar59 <= (int)uVar66) {
              return;
            }
            if ((int)uVar66 < 1) break;
            uVar21 = ((uint *)lVar63)[1];
            lVar47 = lVar47 + 2;
            iVar61 = 0;
            uVar54 = lVar64 + (ulonglong)uVar21;
            uVar50 = lVar64 + uVar54;
            uVar67 = uVar66 & 0xffffffff;
            lVar57 = param_2 + ((ulonglong)uVar21 & 0x3fffffff) * 4;
            lVar53 = param_2 + (uVar54 & 0x3fffffff) * 4;
            lVar55 = param_2 + (uVar50 & 0x3fffffff) * 4;
            lVar56 = param_2 + (lVar64 + uVar50 & 0x3fffffff) * 4;
            do {
              iVar44 = iVar61 * 4;
              puVar46 = (undefined4 *)lVar57;
              uVar18 = *puVar46;
              uVar19 = puVar46[1];
              iVar61 = iVar61 + 1;
              lVar57 = lVar57 + 8;
              uVar50 = lVar47 + (ulonglong)*(uint *)(iVar44 + (int)lVar52);
              uVar54 = lVar62 + uVar50;
              puVar48 = (undefined4 *)((int)pfVar45 + (int)((uVar50 & 0xffffffff) << 2));
              uVar50 = uVar54 + (uVar60 & 0x7fffffff) * -2;
              puVar43 = (undefined4 *)((int)pfVar45 + (int)((uVar54 & 0xffffffff) << 2));
              uVar20 = *puVar48;
              puVar49 = (undefined4 *)((int)pfVar45 + (int)((uVar50 & 0xffffffff) << 2));
              puVar46[1] = puVar48[1];
              *puVar46 = uVar20;
              *puVar48 = uVar18;
              puVar46 = (undefined4 *)((int)pfVar45 + (int)((lVar62 + uVar50 & 0xffffffff) << 2));
              puVar48[1] = uVar19;
              puVar48 = (undefined4 *)lVar53;
              uVar18 = *puVar48;
              uVar19 = *puVar43;
              uVar20 = puVar48[1];
              puVar48[1] = puVar43[1];
              *puVar48 = uVar19;
              *puVar43 = uVar18;
              puVar43[1] = uVar20;
              uVar18 = puVar49[1];
              puVar48 = (undefined4 *)lVar55;
              uVar19 = *puVar48;
              uVar20 = puVar48[1];
              *puVar48 = *puVar49;
              puVar48[1] = uVar18;
              *puVar49 = uVar19;
              puVar49[1] = uVar20;
              uVar18 = puVar46[1];
              puVar48 = (undefined4 *)lVar56;
              uVar19 = *puVar48;
              uVar20 = puVar48[1];
              *puVar48 = *puVar46;
              puVar48[1] = uVar18;
              *puVar46 = uVar19;
              puVar46[1] = uVar20;
              uVar67 = uVar67 - 1;
              lVar53 = lVar53 + 8;
              lVar55 = lVar55 + 8;
              lVar56 = lVar56 + 8;
            } while (uVar67 != 0);
            lVar63 = lVar63 + 4;
          }
        } while( true );
      }
    }
    else {
      uVar66 = 1;
      if (1 < iVar59) {
        do {
          uVar67 = uVar66 & 0xffffffff;
          uVar21 = *(uint *)((int)local_270 + (int)((uVar66 & 0xffffffff) << 2));
          lVar63 = param_2 + ((ulonglong)uVar21 & 0x3fffffff) * 4;
          lVar47 = param_2 + (lVar64 + (ulonglong)uVar21 & 0x3fffffff) * 4;
          lVar62 = lVar52;
          if ((int)uVar66 < 1) {
            uVar67 = 1;
          }
          do {
            puVar49 = (undefined4 *)lVar63;
            uVar18 = *puVar49;
            uVar50 = (uVar66 & 0x7fffffff) * 2 + (ulonglong)*(uint *)lVar62;
            uVar19 = puVar49[1];
            puVar48 = (undefined4 *)((int)pfVar45 + (int)((uVar50 & 0xffffffff) << 2));
            puVar43 = (undefined4 *)((int)pfVar45 + (int)((lVar64 + uVar50 & 0xffffffff) << 2));
            uVar20 = puVar48[1];
            *puVar49 = *puVar48;
            puVar49[1] = uVar20;
            *puVar48 = uVar18;
            puVar48[1] = uVar19;
            uVar18 = puVar43[1];
            puVar48 = (undefined4 *)lVar47;
            uVar19 = *puVar48;
            uVar20 = puVar48[1];
            *puVar48 = *puVar43;
            puVar48[1] = uVar18;
            *puVar43 = uVar19;
            puVar43[1] = uVar20;
            uVar67 = uVar67 - 1;
            lVar62 = lVar62 + 4;
            lVar63 = lVar63 + 8;
            lVar47 = lVar47 + 8;
          } while (uVar67 != 0);
          uVar67 = uVar60 - uVar66 & 0xffffffff;
          if ((iVar59 < (int)uVar66 + 1) || (iVar59 == -0x80000000)) {
            uVar67 = 1;
          }
          do {
            uVar66 = uVar66 + 1;
            uVar67 = uVar67 - 1;
            if (uVar67 == 0) {
              return;
            }
          } while ((int)uVar66 < 1);
        } while( true );
      }
    }
  }
  return;
}



//==== 006019d8  ns=Global  size=0x300
// sig: undefined FUN_006019d8(void)
// callers(1): 005f5398 FUN_005f5398
// callees(1): 00600860 FUN_00600860

void FUN_006019d8(int param_1,float *param_2,ulonglong param_3,ulonglong param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  float *pfVar13;
  float *pfVar14;
  int iVar15;
  float *pfVar16;
  longlong lVar17;
  ulonglong uVar18;
  
  iVar15 = param_1 >> 1;
  uVar4 = (int)param_3 >> 2;
  lVar17 = ((ulonglong)uVar4 & 0x3fffffff) * 4 + param_4;
  uVar1 = (int)param_3 / param_1;
  if (1 < iVar15) {
    uVar9 = (ulonglong)uVar1 & 0x3fffffff;
    pfVar16 = param_2 + param_1;
    uVar18 = (longlong)iVar15 - 1U & 0xffffffff;
    lVar12 = lVar17 + (param_3 - (longlong)(int)uVar1 & 0x3fffffff) * 4;
    pfVar14 = param_2 + 1;
    lVar10 = lVar17;
    do {
      pfVar16 = pfVar16 + -1;
      lVar10 = lVar10 + uVar9 * 4;
      fVar2 = *pfVar14;
      pfVar7 = (float *)lVar12;
      lVar12 = lVar12 + uVar9 * -4;
      fVar5 = *(float *)lVar10 + *pfVar7;
      fVar3 = *pfVar16;
      fVar6 = *(float *)lVar10 - *pfVar7;
      *pfVar14 = fVar6 * fVar2 + fVar5 * fVar3;
      pfVar14 = pfVar14 + 1;
      *pfVar16 = fVar5 * fVar2 - fVar6 * fVar3;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  param_2[iVar15] = param_2[iVar15] * *(float *)lVar17;
  if (param_1 < 5) {
    if (param_1 == 4) {
      FUN_00600860(4,param_2,uVar4,param_4 & 0xffffffff);
      fVar2 = *param_2 - param_2[1];
      *param_2 = param_2[1] + *param_2;
    }
    else {
      fVar2 = *param_2 - param_2[1];
      *param_2 = *param_2 + param_2[1];
      if (param_1 < 3) goto LAB_00601b54;
    }
  }
  else {
    pfVar16 = param_2 + 2;
    FUN_00600860(param_1,param_2,uVar4,param_4 & 0xffffffff);
    fVar2 = DAT_0071a5d8;
    pfVar14 = param_2 + 3;
    uVar1 = (int)((param_3 & 0xffffffff) << 1) / iVar15;
    if (2 < iVar15) {
      uVar18 = (ulonglong)uVar1 & 0x3fffffff;
      lVar10 = lVar17 + (param_3 - (longlong)(int)uVar1 & 0x3fffffff) * 4;
      iVar11 = 2;
      pfVar7 = param_2 + param_1;
      do {
        lVar17 = lVar17 + uVar18 * 4;
        pfVar13 = pfVar7 + -2;
        pfVar7 = pfVar7 + -1;
        pfVar8 = (float *)lVar10;
        iVar11 = iVar11 + 2;
        lVar10 = lVar10 + uVar18 * -4;
        fVar5 = *pfVar16 - *pfVar13;
        fVar3 = fVar2 - *pfVar8;
        fVar6 = fVar3 * fVar5 - *(float *)lVar17 * (*pfVar14 + *pfVar7);
        fVar3 = fVar3 * (*pfVar14 + *pfVar7) + *(float *)lVar17 * fVar5;
        *pfVar16 = *pfVar16 - fVar6;
        pfVar16 = pfVar16 + 2;
        *pfVar14 = *pfVar14 - fVar3;
        pfVar14 = pfVar14 + 2;
        *pfVar13 = fVar6 + *pfVar13;
        *pfVar7 = *pfVar7 - fVar3;
        pfVar7 = pfVar13;
      } while (iVar11 < iVar15);
    }
    fVar2 = *param_2 - param_2[1];
    *param_2 = param_2[1] + *param_2;
  }
  pfVar16 = param_2 + 3;
  pfVar14 = param_2 + 2;
  iVar15 = 2;
  do {
    iVar15 = iVar15 + 2;
    pfVar14[-1] = *pfVar14 - *pfVar16;
    fVar3 = *pfVar16;
    pfVar16 = pfVar16 + 2;
    *pfVar14 = *pfVar14 + fVar3;
    pfVar14 = pfVar14 + 2;
  } while (iVar15 < param_1);
LAB_00601b54:
  param_2[param_1 + -1] = fVar2;
  return;
}



//==== 00601cd8  ns=Global  size=0x3a4
// sig: undefined FUN_00601cd8(void)
// callers(2): 00602080 FUN_00602080; 00602094 FUN_00602094
// callees(0): 

void FUN_00601cd8(undefined1 *param_1,int param_2,short *param_3,int *param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  longlong lVar16;
  int aiStack_150 [64];
  
  lVar16 = 8;
  piVar14 = aiStack_150;
  do {
    while( true ) {
      if (((param_3[0x18] != 0 || param_3[0x20] != 0) || param_3[0x30] != 0) ||
          (((param_3[8] != 0 || param_3[0x10] != 0) || param_3[0x28] != 0) || param_3[0x38] != 0))
      break;
      sVar1 = *param_3;
      iVar9 = *param_4;
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
      iVar9 = sVar1 * iVar9 >> 0xb;
      piVar14[0x38] = iVar9;
      *piVar14 = iVar9;
      piVar14[8] = iVar9;
      piVar14[0x10] = iVar9;
      piVar14[0x18] = iVar9;
      piVar14[0x20] = iVar9;
      piVar14[0x28] = iVar9;
      piVar14[0x30] = iVar9;
      lVar16 = lVar16 + -1;
      piVar14 = piVar14 + 1;
      if (lVar16 == 0) goto LAB_00601db0;
    }
    iVar9 = (int)param_3[0x28] * param_4[0x28] >> 0xb;
    iVar6 = (int)param_3[0x30] * param_4[0x30] >> 0xb;
    iVar2 = (int)param_3[0x20] * param_4[0x20] >> 0xb;
    iVar3 = (int)param_3[0x38] * param_4[0x38] >> 0xb;
    iVar4 = (int)param_3[8] * param_4[8] >> 0xb;
    piVar15 = param_4 + 0x10;
    iVar5 = (int)param_3[0x18] * param_4[0x18] >> 0xb;
    iVar8 = iVar9 - iVar5;
    iVar5 = iVar5 + iVar9;
    iVar9 = *param_4;
    param_4 = param_4 + 1;
    sVar1 = *param_3;
    iVar7 = (int)param_3[0x10] * *piVar15 >> 0xb;
    param_3 = param_3 + 1;
    iVar10 = iVar7 + iVar6;
    iVar9 = sVar1 * iVar9 >> 0xb;
    iVar6 = ((iVar7 - iVar6) * 0xb50 >> 0xb) - iVar10;
    iVar7 = iVar9 - iVar2;
    iVar9 = iVar9 + iVar2;
    iVar13 = iVar7 - iVar6;
    iVar7 = iVar7 + iVar6;
    iVar11 = iVar4 - iVar3;
    iVar4 = iVar4 + iVar3;
    iVar3 = iVar5 + iVar4;
    iVar12 = iVar9 - iVar10;
    iVar9 = iVar9 + iVar10;
    iVar6 = (iVar8 + iVar11) * 0xec8 >> 0xb;
    iVar2 = (iVar6 + (iVar8 * -0x14e8 >> 0xb)) - iVar3;
    iVar4 = ((iVar4 - iVar5) * 0xb50 >> 0xb) - iVar2;
    piVar14[0x38] = iVar9 - iVar3;
    iVar6 = ((iVar11 * 0x8a9 >> 0xb) - iVar6) + iVar4;
    *piVar14 = iVar9 + iVar3;
    piVar14[0x18] = iVar12 - iVar6;
    piVar14[8] = iVar7 + iVar2;
    piVar14[0x30] = iVar7 - iVar2;
    piVar14[0x10] = iVar13 + iVar4;
    piVar14[0x28] = iVar13 - iVar4;
    piVar14[0x20] = iVar12 + iVar6;
    lVar16 = lVar16 + -1;
    piVar14 = piVar14 + 1;
  } while (lVar16 != 0);
LAB_00601db0:
  piVar14 = aiStack_150;
  do {
    piVar15 = piVar14 + 8;
    iVar12 = piVar14[5] - piVar14[3];
    iVar8 = piVar14[1] - piVar14[7];
    iVar10 = piVar14[1] + piVar14[7];
    iVar2 = piVar14[5] + piVar14[3];
    iVar9 = (iVar12 + iVar8) * 0xec8 >> 0xb;
    iVar3 = iVar2 + iVar10;
    iVar13 = piVar14[2] + piVar14[6];
    iVar7 = *piVar14 - piVar14[4];
    iVar6 = ((piVar14[2] - piVar14[6]) * 0xb50 >> 0xb) - iVar13;
    iVar11 = *piVar14 + piVar14[4];
    iVar4 = iVar7 - iVar6;
    iVar5 = iVar11 - iVar13;
    iVar7 = iVar7 + iVar6;
    iVar11 = iVar11 + iVar13;
    param_1[7] = (char)((uint)((iVar11 - iVar3) + 0x7f) >> 8);
    *param_1 = (char)((uint)(iVar3 + iVar11 + 0x7f) >> 8);
    iVar3 = (iVar9 + (iVar12 * -0x14e8 >> 0xb)) - iVar3;
    iVar6 = ((iVar10 - iVar2) * 0xb50 >> 0xb) - iVar3;
    iVar9 = ((iVar8 * 0x8a9 >> 0xb) - iVar9) + iVar6;
    param_1[1] = (char)((uint)(iVar3 + iVar7 + 0x7f) >> 8);
    param_1[3] = (char)((uint)((iVar5 - iVar9) + 0x7f) >> 8);
    param_1[6] = (char)((uint)((iVar7 - iVar3) + 0x7f) >> 8);
    param_1[2] = (char)((uint)(iVar6 + iVar4 + 0x7f) >> 8);
    param_1[5] = (char)((uint)((iVar4 - iVar6) + 0x7f) >> 8);
    param_1[4] = (char)((uint)(iVar9 + iVar5 + 0x7f) >> 8);
    param_1 = param_1 + param_2;
    piVar14 = piVar15;
  } while ((int *)&stack0xffffffb0 != piVar15);
  return;
}



//==== 00602080  ns=Global  size=0x14
// sig: undefined FUN_00602080(void)
// callers(0): 
// callees(1): 00601cd8 FUN_00601cd8

void FUN_00602080(void)

{
  FUN_00601cd8();
  return;
}



//==== 00602094  ns=Global  size=0x18
// sig: undefined FUN_00602094(void)
// callers(0): 
// callees(1): 00601cd8 FUN_00601cd8

void FUN_00602094(void)

{
  FUN_00601cd8();
  return;
}



//==== 006020b0  ns=Global  size=0x3f4
// sig: undefined FUN_006020b0(void)
// callers(0): 
// callees(0): 

void FUN_006020b0(uint *param_1,int param_2,short *param_3,int param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  ulonglong uVar23;
  uint uVar24;
  int iVar25;
  uint *puVar26;
  uint *puVar27;
  uint *puVar28;
  int iVar29;
  longlong lVar30;
  int iVar31;
  longlong lVar32;
  int iVar33;
  int *piVar34;
  longlong lVar35;
  uint auStack_160 [64];
  uint auStack_60 [2];
  
  lVar35 = 8;
  piVar34 = (int *)(PTR_PTR_0071a5dc + param_4 * 0x100 + 0x1000);
  puVar28 = auStack_160;
  do {
    while( true ) {
      if (((param_3[0x18] != 0 || param_3[0x20] != 0) || param_3[0x30] != 0) ||
          (((param_3[8] != 0 || param_3[0x10] != 0) || param_3[0x28] != 0) || param_3[0x38] != 0))
      break;
      sVar1 = *param_3;
      param_3 = param_3 + 1;
      uVar10 = (int)sVar1 * *piVar34 >> 0xb;
      puVar28[0x38] = uVar10;
      *puVar28 = uVar10;
      puVar28[8] = uVar10;
      puVar28[0x10] = uVar10;
      puVar28[0x18] = uVar10;
      puVar28[0x20] = uVar10;
      puVar28[0x28] = uVar10;
      puVar28[0x30] = uVar10;
      lVar35 = lVar35 + -1;
      piVar34 = piVar34 + 1;
      puVar28 = puVar28 + 1;
      if (lVar35 == 0) goto LAB_0060219c;
    }
    iVar31 = (int)param_3[0x28] * piVar34[0x28] >> 0xb;
    iVar21 = (int)param_3[0x30] * piVar34[0x30] >> 0xb;
    iVar6 = (int)param_3[0x38] * piVar34[0x38] >> 0xb;
    iVar25 = (int)param_3[0x18] * piVar34[0x18] >> 0xb;
    iVar2 = iVar31 - iVar25;
    iVar25 = iVar25 + iVar31;
    iVar31 = (int)param_3[8] * piVar34[8] >> 0xb;
    iVar8 = (int)param_3[0x20] * piVar34[0x20] >> 0xb;
    sVar1 = *param_3;
    iVar14 = (int)param_3[0x10] * piVar34[0x10] >> 0xb;
    param_3 = param_3 + 1;
    iVar16 = iVar14 + iVar21;
    iVar3 = (int)sVar1 * *piVar34 >> 0xb;
    iVar21 = ((iVar14 - iVar21) * 0xb50 >> 0xb) - iVar16;
    iVar14 = iVar3 - iVar8;
    iVar3 = iVar3 + iVar8;
    iVar33 = iVar14 - iVar21;
    iVar14 = iVar14 + iVar21;
    iVar22 = iVar31 - iVar6;
    iVar31 = iVar31 + iVar6;
    iVar8 = iVar25 + iVar31;
    iVar29 = iVar3 - iVar16;
    iVar3 = iVar3 + iVar16;
    iVar21 = (iVar2 + iVar22) * 0xec8 >> 0xb;
    iVar6 = (iVar21 + (iVar2 * -0x14e8 >> 0xb)) - iVar8;
    iVar25 = ((iVar31 - iVar25) * 0xb50 >> 0xb) - iVar6;
    puVar28[0x38] = iVar3 - iVar8;
    iVar31 = ((iVar22 * 0x8a9 >> 0xb) - iVar21) + iVar25;
    *puVar28 = iVar3 + iVar8;
    puVar28[0x18] = iVar29 - iVar31;
    puVar28[8] = iVar14 + iVar6;
    puVar28[0x30] = iVar14 - iVar6;
    puVar28[0x10] = iVar33 + iVar25;
    puVar28[0x28] = iVar33 - iVar25;
    puVar28[0x20] = iVar29 + iVar31;
    lVar35 = lVar35 + -1;
    piVar34 = piVar34 + 1;
    puVar28 = puVar28 + 1;
  } while (lVar35 != 0);
LAB_0060219c:
  puVar28 = (uint *)((int)param_1 + param_2);
  puVar26 = auStack_160;
  do {
    puVar27 = puVar26 + 8;
    iVar31 = puVar26[5] - puVar26[3];
    iVar21 = puVar26[1] - puVar26[7];
    lVar4 = (ulonglong)puVar26[5] + (ulonglong)puVar26[3];
    lVar17 = (ulonglong)puVar26[1] + (ulonglong)puVar26[7];
    lVar30 = (longlong)((iVar31 + iVar21) * 0xec8 >> 0xb);
    lVar5 = lVar4 + lVar17;
    lVar32 = (ulonglong)puVar26[2] + (ulonglong)puVar26[6];
    lVar15 = (ulonglong)*puVar26 - (ulonglong)puVar26[4];
    lVar35 = ((int)((puVar26[2] - puVar26[6]) * 0xb50) >> 0xb) - lVar32;
    lVar18 = (ulonglong)*puVar26 + (ulonglong)puVar26[4];
    lVar11 = lVar15 - lVar35;
    lVar7 = lVar18 - lVar32;
    lVar15 = lVar15 + lVar35;
    lVar18 = lVar18 + lVar32;
    lVar32 = (lVar30 + (iVar31 * -0x14e8 >> 0xb)) - lVar5;
    lVar4 = (((int)lVar17 - (int)lVar4) * 0xb50 >> 0xb) - lVar32;
    lVar35 = ((iVar21 * 0x8a9 >> 0xb) - lVar30) + lVar4;
    uVar19 = (lVar5 + lVar18 + 0x7f & 0xff00U) << 8 |
             (ulonglong)(lVar32 + lVar15 + 0x7f) >> 8 & 0xff;
    uVar9 = (lVar18 - lVar5) + 0x7fU >> 8 & 0xff | ((lVar15 - lVar32) + 0x7fU & 0xff00) << 8;
    uVar12 = (lVar11 - lVar4) + 0x7fU >> 8 & 0xff | (lVar35 + lVar7 + 0x7f & 0xff00U) << 8;
    uVar23 = (lVar4 + lVar11 + 0x7f & 0xff00U) << 8 | (lVar7 - lVar35) + 0x7fU >> 8 & 0xff;
    uVar20 = (uint)uVar19 | (uint)(uVar19 << 8);
    uVar10 = (uint)uVar9 | (uint)(uVar9 << 8);
    uVar13 = (uint)uVar12 | (uint)(uVar12 << 8);
    uVar24 = (uint)uVar23 | (uint)(uVar23 << 8);
    param_1[3] = uVar10;
    *param_1 = uVar20;
    param_1[1] = uVar24;
    param_1[2] = uVar13;
    puVar28[3] = uVar10;
    *puVar28 = uVar20;
    puVar28[1] = uVar24;
    puVar28[2] = uVar13;
    param_1 = (uint *)((int)param_1 + param_2 * 2);
    puVar28 = (uint *)((int)puVar28 + param_2 * 2);
    puVar26 = puVar27;
  } while (auStack_60 != puVar27);
  return;
}



//==== 006024a8  ns=Global  size=0x410
// sig: undefined FUN_006024a8(void)
// callers(0): 
// callees(0): 

void FUN_006024a8(char *param_1,int param_2,short *param_3,int param_4,char *param_5,int param_6)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  longlong lVar17;
  int aiStack_160 [64];
  
  lVar17 = 8;
  piVar15 = (int *)(PTR_PTR_0071a5dc + param_4 * 0x100);
  piVar16 = aiStack_160;
  do {
    while( true ) {
      if (((param_3[0x18] != 0 || param_3[0x20] != 0) || param_3[0x30] != 0) ||
          (((param_3[8] != 0 || param_3[0x10] != 0) || param_3[0x28] != 0) || param_3[0x38] != 0))
      break;
      sVar1 = *param_3;
      param_3 = param_3 + 1;
      iVar6 = (int)sVar1 * *piVar15 >> 0xb;
      piVar16[0x38] = iVar6;
      *piVar16 = iVar6;
      piVar16[8] = iVar6;
      piVar16[0x10] = iVar6;
      piVar16[0x18] = iVar6;
      piVar16[0x20] = iVar6;
      piVar16[0x28] = iVar6;
      piVar16[0x30] = iVar6;
      lVar17 = lVar17 + -1;
      piVar15 = piVar15 + 1;
      piVar16 = piVar16 + 1;
      if (lVar17 == 0) goto LAB_0060259c;
    }
    iVar6 = (int)param_3[0x28] * piVar15[0x28] >> 0xb;
    iVar11 = (int)param_3[0x30] * piVar15[0x30] >> 0xb;
    iVar9 = (int)param_3[0x38] * piVar15[0x38] >> 0xb;
    iVar13 = (int)param_3[0x18] * piVar15[0x18] >> 0xb;
    iVar4 = iVar6 - iVar13;
    iVar13 = iVar13 + iVar6;
    iVar6 = (int)param_3[8] * piVar15[8] >> 0xb;
    iVar3 = (int)param_3[0x20] * piVar15[0x20] >> 0xb;
    sVar1 = *param_3;
    iVar2 = (int)param_3[0x10] * piVar15[0x10] >> 0xb;
    param_3 = param_3 + 1;
    iVar5 = iVar2 + iVar11;
    iVar8 = (int)sVar1 * *piVar15 >> 0xb;
    iVar11 = ((iVar2 - iVar11) * 0xb50 >> 0xb) - iVar5;
    iVar2 = iVar8 - iVar3;
    iVar8 = iVar8 + iVar3;
    iVar12 = iVar2 - iVar11;
    iVar2 = iVar2 + iVar11;
    iVar7 = iVar6 - iVar9;
    iVar6 = iVar6 + iVar9;
    iVar3 = iVar13 + iVar6;
    iVar10 = iVar8 - iVar5;
    iVar8 = iVar8 + iVar5;
    iVar11 = (iVar4 + iVar7) * 0xec8 >> 0xb;
    iVar9 = (iVar11 + (iVar4 * -0x14e8 >> 0xb)) - iVar3;
    iVar13 = ((iVar6 - iVar13) * 0xb50 >> 0xb) - iVar9;
    piVar16[0x38] = iVar8 - iVar3;
    iVar6 = ((iVar7 * 0x8a9 >> 0xb) - iVar11) + iVar13;
    *piVar16 = iVar8 + iVar3;
    piVar16[0x18] = iVar10 - iVar6;
    piVar16[8] = iVar2 + iVar9;
    piVar16[0x30] = iVar2 - iVar9;
    piVar16[0x10] = iVar12 + iVar13;
    piVar16[0x28] = iVar12 - iVar13;
    piVar16[0x20] = iVar10 + iVar6;
    lVar17 = lVar17 + -1;
    piVar15 = piVar15 + 1;
    piVar16 = piVar16 + 1;
  } while (lVar17 != 0);
LAB_0060259c:
  piVar15 = aiStack_160;
  do {
    piVar16 = piVar15 + 8;
    iVar12 = piVar15[5] - piVar15[3];
    iVar6 = piVar15[6];
    iVar5 = piVar15[1] - piVar15[7];
    iVar11 = piVar15[2];
    iVar9 = *piVar15;
    iVar8 = piVar15[5] + piVar15[3];
    iVar13 = piVar15[4];
    iVar7 = piVar15[1] + piVar15[7];
    iVar4 = iVar9 + iVar13;
    iVar14 = iVar11 + iVar6;
    iVar2 = iVar8 + iVar7;
    iVar10 = iVar4 + iVar14;
    iVar3 = (iVar12 + iVar5) * 0xec8 >> 0xb;
    *param_1 = (char)((uint)(iVar2 + iVar10 + 0x7f) >> 8) + *param_5;
    iVar12 = (iVar3 + (iVar12 * -0x14e8 >> 0xb)) - iVar2;
    iVar8 = ((iVar7 - iVar8) * 0xb50 >> 0xb) - iVar12;
    iVar7 = ((iVar11 - iVar6) * 0xb50 >> 0xb) - iVar14;
    iVar9 = iVar9 - iVar13;
    iVar4 = iVar4 - iVar14;
    param_1[7] = (char)((uint)((iVar10 - iVar2) + 0x7f) >> 8) + param_5[7];
    iVar11 = iVar9 + iVar7;
    iVar6 = ((iVar5 * 0x8a9 >> 0xb) - iVar3) + iVar8;
    iVar9 = iVar9 - iVar7;
    param_1[1] = (char)((uint)(iVar12 + iVar11 + 0x7f) >> 8) + param_5[1];
    param_1[6] = (char)((uint)((iVar11 - iVar12) + 0x7f) >> 8) + param_5[6];
    param_1[2] = (char)((uint)(iVar8 + iVar9 + 0x7f) >> 8) + param_5[2];
    param_1[5] = (char)((uint)((iVar9 - iVar8) + 0x7f) >> 8) + param_5[5];
    param_1[3] = (char)((uint)((iVar4 - iVar6) + 0x7f) >> 8) + param_5[3];
    param_1[4] = (char)((uint)(iVar6 + iVar4 + 0x7f) >> 8) + param_5[4];
    param_5 = param_5 + param_6;
    param_1 = param_1 + param_2;
    piVar15 = piVar16;
  } while ((int *)&stack0xffffffa0 != piVar16);
  return;
}



//==== 006028b8  ns=Global  size=0x60c
// sig: undefined FUN_006028b8(void)
// callers(2): 00602ec8 FUN_00602ec8; 006033fc FUN_006033fc
// callees(0): 

void FUN_006028b8(int param_1,uint *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  int iVar7;
  char cVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  byte bVar12;
  uint uVar15;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar16;
  char cVar17;
  byte *pbVar18;
  int iVar19;
  byte *pbVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  byte *pbVar24;
  uint *puVar25;
  uint *puVar26;
  byte local_150 [132];
  byte local_cc [76];
  uint uVar6;
  
  uVar11 = (ulonglong)param_2[2];
  puVar26 = (uint *)param_2[1];
  uVar9 = (ulonglong)*param_2;
  puVar25 = puVar26;
  if (uVar11 < 3) {
    puVar25 = puVar26 + 1;
    uVar13 = uVar11 & 0x7f;
    uVar11 = uVar11 + 0x20;
    uVar9 = uVar9 | (ulonglong)*puVar26 << uVar13;
  }
  uVar3 = (uint)uVar9 & 7;
  local_cc[0] = 0x10;
  local_cc[1] = 0x60;
  local_cc[2] = 0xb0;
  local_cc[3] = 2;
  lVar5 = uVar11 - 3;
  uVar6 = (uint)lVar5;
  uVar9 = uVar9 >> 3;
  uVar15 = (uint)uVar9;
  if (uVar3 != 0xffffffff) {
    iVar23 = 0;
    iVar19 = 1 << uVar3;
    pbVar18 = local_cc;
    pbVar20 = local_cc + 4;
    iVar21 = 0;
    uVar16 = 0;
    do {
      iVar10 = 0;
      cVar2 = (char)iVar19;
      iVar22 = iVar21;
      if (0 < iVar21) {
        do {
          iVar7 = (int)lVar5;
          lVar5 = lVar5 + -1;
          uVar11 = uVar9;
          if (iVar7 == 0) {
            uVar11 = (ulonglong)*puVar25;
            lVar5 = 0x1f;
            puVar25 = puVar25 + 1;
          }
          uVar6 = (uint)lVar5;
          pbVar24 = local_150 + iVar10;
          bVar1 = param_3 == iVar23;
          iVar10 = iVar10 + 1;
          uVar9 = (uVar11 << 0x20) >> 0x21;
          uVar15 = (uint)uVar11 >> 1;
          if ((uVar11 & 1) != 0) {
            iVar23 = iVar23 + 1;
            cVar17 = *(char *)(param_1 + (uint)*pbVar24);
            cVar8 = -cVar2;
            if (-1 < cVar17) {
              cVar8 = cVar2;
            }
            *(char *)(param_1 + (uint)*pbVar24) = cVar17 + cVar8;
            if (bVar1) goto LAB_00602af0;
          }
          iVar22 = iVar22 + -1;
        } while (iVar22 != 0);
      }
      if (pbVar18 < pbVar20) {
        cVar17 = -cVar2;
        pbVar24 = pbVar18;
LAB_00602a28:
        bVar12 = *pbVar24;
        uVar11 = (ulonglong)bVar12;
        iVar22 = iVar21;
        if (bVar12 == 0) {
LAB_00602a78:
          pbVar24 = pbVar24 + 1;
          iVar21 = iVar22;
        }
        else {
          if ((int)lVar5 == 0) {
            lVar5 = 0x1f;
            uVar9 = (ulonglong)*puVar25;
            puVar25 = puVar25 + 1;
          }
          else {
            lVar5 = lVar5 + -1;
          }
          uVar13 = uVar9 & 1;
          uVar9 = (uVar9 << 0x20) >> 0x21;
          if (uVar13 == 0) goto LAB_00602a78;
          bVar4 = bVar12 & 3;
          if (bVar4 == 1) {
            cVar8 = (char)(((uVar11 << 0x20) >> 0x22) << 2);
            *pbVar24 = cVar8 + 2;
            *pbVar20 = cVar8 + 0x12;
            pbVar20[1] = cVar8 + 0x22;
            pbVar20[2] = cVar8 + 0x32;
            pbVar20 = pbVar20 + 3;
            goto LAB_00602a7c;
          }
          if ((bVar12 & 3) == 0) {
            uVar11 = (uVar11 << 0x20) >> 0x22;
            *pbVar24 = (char)(uVar11 << 2) + 0x11;
          }
          else {
            if (bVar4 != 2) {
              if (bVar4 != 3) goto LAB_00602a78;
              if ((int)lVar5 == 0) {
                lVar5 = 0x1f;
                uVar9 = (ulonglong)*puVar25;
                puVar25 = puVar25 + 1;
              }
              else {
                lVar5 = lVar5 + -1;
              }
              uVar6 = (uint)lVar5;
              uVar15 = (uint)uVar9 >> 1;
              cVar8 = cVar17;
              if ((uVar9 & 1) == 0) {
                cVar8 = cVar2;
              }
              *(char *)((uint)(bVar12 >> 2) + param_1) = cVar8;
              if (param_3 == iVar23) break;
              iVar23 = iVar23 + 1;
              iVar22 = iVar21 + 1;
              local_150[iVar21] = (byte)((uVar11 << 0x20) >> 0x22);
              *pbVar24 = 0;
              uVar9 = (uVar9 << 0x20) >> 0x21;
              goto LAB_00602a78;
            }
            uVar11 = (uVar11 << 0x20) >> 0x22;
            *pbVar24 = 0;
            pbVar24 = pbVar24 + 1;
          }
          if ((int)lVar5 == 0) {
            lVar5 = 0x1f;
            puVar26 = puVar25 + 1;
            uVar9 = (ulonglong)*puVar25;
          }
          else {
            lVar5 = lVar5 + -1;
            puVar26 = puVar25;
          }
          uVar13 = (uVar9 << 0x20) >> 0x21;
          bVar12 = (byte)uVar11;
          puVar25 = puVar26;
          if ((uVar9 & 1) == 0) {
            if ((int)lVar5 == 0) {
              lVar5 = 0x1f;
              puVar25 = puVar26 + 1;
              uVar13 = (ulonglong)*puVar26;
            }
            else {
              lVar5 = lVar5 + -1;
            }
            uVar6 = (uint)lVar5;
            uVar9 = (uVar13 << 0x20) >> 0x21;
            uVar15 = (uint)uVar13 >> 1;
            cVar8 = cVar17;
            if ((uVar13 & 1) == 0) {
              cVar8 = cVar2;
            }
            *(char *)(param_1 + (int)uVar11) = cVar8;
            if (param_3 == iVar23) break;
            iVar23 = iVar23 + 1;
            iVar22 = iVar21 + 1;
            local_150[iVar21] = bVar12;
            if (uVar6 == 0) goto LAB_00602cd8;
LAB_00602ba8:
            lVar5 = lVar5 + -1;
            uVar13 = (uVar9 << 0x20) >> 0x21;
            uVar14 = uVar13;
            puVar26 = puVar25;
            if ((uVar9 & 1) != 0) goto LAB_00602bbc;
LAB_00602cf8:
            if ((int)lVar5 == 0) {
              lVar5 = 0x1f;
              puVar25 = puVar26 + 1;
              uVar13 = (ulonglong)*puVar26;
            }
            else {
              lVar5 = lVar5 + -1;
              puVar25 = puVar26;
            }
            uVar6 = (uint)lVar5;
            uVar14 = (uVar13 << 0x20) >> 0x21;
            uVar15 = (uint)uVar13 >> 1;
            cVar8 = cVar17;
            if ((uVar13 & 1) == 0) {
              cVar8 = cVar2;
            }
            *(char *)(param_1 + (int)(uVar11 + 1)) = cVar8;
            if (iVar23 == param_3) break;
            iVar23 = iVar23 + 1;
            iVar21 = iVar22 + 1;
            local_150[iVar22] = (byte)(uVar11 + 1);
            if (uVar6 == 0) goto LAB_00602d50;
LAB_00602bdc:
            lVar5 = lVar5 + -1;
            uVar9 = (uVar14 << 0x20) >> 0x21;
            uVar13 = uVar9;
            puVar26 = puVar25;
            if ((uVar14 & 1) != 0) goto LAB_00602bf0;
LAB_00602d70:
            if ((int)lVar5 == 0) {
              lVar5 = 0x1f;
              puVar25 = puVar26 + 1;
              uVar9 = (ulonglong)*puVar26;
            }
            else {
              lVar5 = lVar5 + -1;
              puVar25 = puVar26;
            }
            uVar6 = (uint)lVar5;
            uVar13 = (uVar9 << 0x20) >> 0x21;
            uVar15 = (uint)uVar9 >> 1;
            cVar8 = cVar17;
            if ((uVar9 & 1) == 0) {
              cVar8 = cVar2;
            }
            *(char *)(param_1 + (int)(uVar11 + 2)) = cVar8;
            if (iVar23 == param_3) break;
            iVar23 = iVar23 + 1;
            iVar22 = iVar21 + 1;
            local_150[iVar21] = (byte)(uVar11 + 2);
            if (uVar6 == 0) goto LAB_00602dc8;
LAB_00602c10:
            lVar5 = lVar5 + -1;
            uVar14 = (uVar13 << 0x20) >> 0x21;
            uVar9 = uVar14;
            puVar26 = puVar25;
            if ((uVar13 & 1) == 0) {
LAB_00602de8:
              if ((int)lVar5 == 0) {
                lVar5 = 0x1f;
                puVar25 = puVar26 + 1;
                uVar14 = (ulonglong)*puVar26;
              }
              else {
                lVar5 = lVar5 + -1;
                puVar25 = puVar26;
              }
              uVar6 = (uint)lVar5;
              uVar9 = (uVar14 << 0x20) >> 0x21;
              uVar15 = (uint)uVar14 >> 1;
              cVar8 = cVar17;
              if ((uVar14 & 1) == 0) {
                cVar8 = cVar2;
              }
              *(char *)(param_1 + (int)(uVar11 + 3)) = cVar8;
              if (iVar23 != param_3) {
                iVar23 = iVar23 + 1;
                iVar21 = iVar22 + 1;
                local_150[iVar22] = (byte)(uVar11 + 3);
                goto LAB_00602a7c;
              }
              break;
            }
          }
          else {
            pbVar18 = pbVar18 + -1;
            *pbVar18 = (char)(uVar11 << 2) + 3;
            uVar9 = uVar13;
            if ((int)lVar5 != 0) goto LAB_00602ba8;
LAB_00602cd8:
            lVar5 = 0x1f;
            puVar26 = puVar25 + 1;
            uVar13 = (ulonglong)(*puVar25 >> 1);
            uVar14 = uVar13;
            if ((*puVar25 & 1) == 0) goto LAB_00602cf8;
LAB_00602bbc:
            pbVar18 = pbVar18 + -1;
            *pbVar18 = (bVar12 + 1) * '\x04' + 3;
            iVar21 = iVar22;
            puVar25 = puVar26;
            if ((int)lVar5 != 0) goto LAB_00602bdc;
LAB_00602d50:
            lVar5 = 0x1f;
            puVar26 = puVar25 + 1;
            uVar9 = (ulonglong)(*puVar25 >> 1);
            uVar13 = uVar9;
            if ((*puVar25 & 1) == 0) goto LAB_00602d70;
LAB_00602bf0:
            pbVar18 = pbVar18 + -1;
            *pbVar18 = (bVar12 + 2) * '\x04' + 3;
            iVar22 = iVar21;
            puVar25 = puVar26;
            if ((int)lVar5 != 0) goto LAB_00602c10;
LAB_00602dc8:
            lVar5 = 0x1f;
            puVar26 = puVar25 + 1;
            uVar14 = (ulonglong)(*puVar25 >> 1);
            uVar9 = uVar14;
            if ((*puVar25 & 1) == 0) goto LAB_00602de8;
          }
          pbVar18 = pbVar18 + -1;
          *pbVar18 = (bVar12 + 3) * '\x04' + 3;
          iVar21 = iVar22;
          puVar25 = puVar26;
        }
LAB_00602a7c:
        if (pbVar20 <= pbVar24) goto LAB_00602a84;
        goto LAB_00602a28;
      }
LAB_00602a84:
      uVar15 = (uint)uVar9;
      uVar6 = (uint)lVar5;
      if (uVar3 == uVar16) break;
      iVar19 = iVar19 >> 1;
      uVar16 = uVar16 + 1;
    } while( true );
  }
LAB_00602af0:
  param_2[2] = uVar6;
  param_2[1] = (uint)puVar25;
  *param_2 = uVar15;
  return;
}



//==== 00602ec8  ns=Global  size=0x534
// sig: undefined FUN_00602ec8(void)
// callers(0): 
// callees(1): 006028b8 FUN_006028b8

void FUN_00602ec8(char *param_1,int param_2,undefined8 param_3,undefined8 param_4,char *param_5,
                 int param_6)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  undefined4 local_b0;
  char local_ac;
  char local_ab;
  char local_aa;
  char local_a9;
  char local_a8;
  char local_a7;
  char local_a6;
  char local_a5;
  char local_a4;
  char local_a3;
  char local_a2;
  char local_a1;
  char local_a0;
  char local_9f;
  char local_9e;
  char local_9d;
  char local_9c;
  char local_9b;
  char local_9a;
  char local_99;
  char local_98;
  char local_97;
  char local_96;
  char local_95;
  char local_94;
  char local_93;
  char local_92;
  char local_91;
  char local_90;
  char local_8f;
  char local_8e;
  char local_8d;
  char local_8c;
  char local_8b;
  char local_8a;
  char local_89;
  char local_88;
  char local_87;
  char local_86;
  char local_85;
  char local_84;
  char local_83;
  char local_82;
  char local_81;
  char local_80;
  char local_7f;
  char local_7e;
  char local_7d;
  char local_7c;
  char local_7b;
  char local_7a;
  char local_79;
  char local_78;
  char local_77;
  char local_76;
  char local_75;
  char local_74;
  char local_73;
  char local_72;
  char local_71;
  
  cVar3 = (char)local_b0;
  cVar2 = local_b0._2_1_;
  cVar1 = local_b0._1_1_;
  local_b0 = 0;
  FUN_006028b8(&local_b0,param_3,param_4);
  pcVar10 = param_5 + param_6;
  pcVar4 = param_1 + param_2;
  *param_1 = local_b0._0_1_ + *param_5;
  pcVar11 = pcVar10 + param_6;
  param_1[1] = cVar1 + param_5[1];
  param_1[2] = local_ac + param_5[2];
  param_1[3] = local_ab + param_5[3];
  param_1[4] = local_a8 + param_5[4];
  pcVar5 = pcVar4 + param_2;
  param_1[5] = local_a7 + param_5[5];
  param_1[6] = local_a4 + param_5[6];
  pcVar6 = pcVar5 + param_2;
  param_1[7] = local_a3 + param_5[7];
  pcVar12 = pcVar11 + param_6;
  *pcVar4 = cVar2 + *pcVar10;
  pcVar13 = pcVar12 + param_6;
  pcVar7 = pcVar6 + param_2;
  pcVar4[1] = cVar3 + pcVar10[1];
  pcVar14 = pcVar13 + param_6;
  pcVar4[2] = local_aa + pcVar10[2];
  pcVar15 = pcVar14 + param_6;
  pcVar8 = pcVar7 + param_2;
  pcVar4[3] = local_a9 + pcVar10[3];
  pcVar17 = pcVar15 + param_6;
  pcVar9 = pcVar8 + param_2;
  pcVar16 = pcVar9 + param_2;
  pcVar4[4] = local_a6 + pcVar10[4];
  pcVar4[5] = local_a5 + pcVar10[5];
  pcVar4[6] = local_a2 + pcVar10[6];
  pcVar4[7] = local_a1 + pcVar10[7];
  *pcVar5 = local_98 + *pcVar11;
  pcVar5[1] = local_97 + pcVar11[1];
  pcVar5[2] = local_84 + pcVar11[2];
  pcVar5[3] = local_83 + pcVar11[3];
  pcVar5[4] = local_a0 + pcVar11[4];
  pcVar5[5] = local_9f + pcVar11[5];
  pcVar5[6] = local_9c + pcVar11[6];
  pcVar5[7] = local_9b + pcVar11[7];
  *pcVar6 = local_96 + *pcVar12;
  pcVar6[1] = local_95 + pcVar12[1];
  pcVar6[2] = local_82 + pcVar12[2];
  pcVar6[3] = local_81 + pcVar12[3];
  pcVar6[4] = local_9e + pcVar12[4];
  pcVar6[5] = local_9d + pcVar12[5];
  pcVar6[6] = local_9a + pcVar12[6];
  pcVar6[7] = local_99 + pcVar12[7];
  *pcVar7 = local_94 + *pcVar13;
  pcVar7[1] = local_93 + pcVar13[1];
  pcVar7[2] = local_90 + pcVar13[2];
  pcVar7[3] = local_8f + pcVar13[3];
  pcVar7[4] = local_80 + pcVar13[4];
  pcVar7[5] = local_7f + pcVar13[5];
  pcVar7[6] = local_7c + pcVar13[6];
  pcVar7[7] = local_7b + pcVar13[7];
  *pcVar8 = local_92 + *pcVar14;
  pcVar8[1] = local_91 + pcVar14[1];
  pcVar8[2] = local_8e + pcVar14[2];
  pcVar8[3] = local_8d + pcVar14[3];
  pcVar8[4] = local_7e + pcVar14[4];
  pcVar8[5] = local_7d + pcVar14[5];
  pcVar8[6] = local_7a + pcVar14[6];
  pcVar8[7] = local_79 + pcVar14[7];
  *pcVar9 = local_8c + *pcVar15;
  pcVar9[1] = local_8b + pcVar15[1];
  pcVar9[2] = local_88 + pcVar15[2];
  pcVar9[3] = local_87 + pcVar15[3];
  pcVar9[4] = local_78 + pcVar15[4];
  pcVar9[5] = local_77 + pcVar15[5];
  pcVar9[6] = local_74 + pcVar15[6];
  pcVar9[7] = local_73 + pcVar15[7];
  *pcVar16 = local_8a + *pcVar17;
  pcVar16[1] = local_89 + pcVar17[1];
  pcVar16[2] = local_86 + pcVar17[2];
  pcVar16[3] = local_85 + pcVar17[3];
  pcVar16[4] = local_76 + pcVar17[4];
  pcVar16[5] = local_75 + pcVar17[5];
  pcVar16[6] = local_72 + pcVar17[6];
  pcVar16[7] = local_71 + pcVar17[7];
  return;
}



//==== 006033fc  ns=Global  size=0x198
// sig: undefined FUN_006033fc(void)
// callers(0): 
// callees(1): 006028b8 FUN_006028b8

void FUN_006033fc(undefined2 *param_1)

{
  undefined2 uVar1;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined2 local_9a;
  undefined2 local_98;
  undefined2 local_96;
  undefined2 local_94;
  undefined2 local_92;
  undefined2 local_90;
  undefined2 local_8e;
  undefined2 local_8c;
  undefined2 local_8a;
  undefined2 local_88;
  undefined2 local_86;
  undefined2 local_84;
  undefined2 local_82;
  undefined2 local_80;
  undefined2 local_7e;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined2 local_78;
  undefined2 local_76;
  undefined2 local_74;
  undefined2 local_72;
  undefined2 local_70;
  undefined2 local_6e;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined2 local_68;
  undefined2 local_66;
  undefined2 local_64;
  undefined2 local_62;
  
  uVar1 = local_a0._2_2_;
  local_a0 = 0;
  FUN_006028b8(&local_a0);
  *param_1 = local_a0._0_2_;
  param_1[1] = local_9c;
  param_1[2] = local_98;
  param_1[3] = local_94;
  param_1[4] = uVar1;
  param_1[5] = local_9a;
  param_1[6] = local_96;
  param_1[7] = local_92;
  param_1[8] = local_88;
  param_1[9] = local_74;
  param_1[10] = local_90;
  param_1[0xb] = local_8c;
  param_1[0xc] = local_86;
  param_1[0xd] = local_72;
  param_1[0xe] = local_8e;
  param_1[0xf] = local_8a;
  param_1[0x10] = local_84;
  param_1[0x1f] = local_62;
  param_1[0x11] = local_80;
  param_1[0x12] = local_70;
  param_1[0x13] = local_6c;
  param_1[0x14] = local_82;
  param_1[0x15] = local_7e;
  param_1[0x16] = local_6e;
  param_1[0x17] = local_6a;
  param_1[0x18] = local_7c;
  param_1[0x19] = local_78;
  param_1[0x1a] = local_68;
  param_1[0x1b] = local_64;
  param_1[0x1c] = local_7a;
  param_1[0x1d] = local_76;
  param_1[0x1e] = local_66;
  return;
}



//==== 00603598  ns=Global  size=0xab4
// sig: undefined FUN_00603598(void)
// callers(0): 
// callees(0): 

void FUN_00603598(int param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  ushort uVar5;
  byte bVar8;
  ushort uVar6;
  ushort uVar7;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ushort uVar15;
  longlong lVar14;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  uint *puVar22;
  uint *puVar23;
  byte *pbVar24;
  uint uVar25;
  ulonglong uVar26;
  byte *pbVar27;
  byte *pbVar28;
  byte *pbVar29;
  ushort auStack_1a0 [98];
  byte local_dc [6];
  byte abStack_d6 [78];
  
  uVar10 = (ulonglong)param_2[2];
  puVar23 = (uint *)param_2[1];
  uVar13 = (ulonglong)*param_2;
  puVar22 = puVar23;
  if (uVar10 < 4) {
    puVar22 = puVar23 + 1;
    uVar17 = uVar10 & 0x7f;
    uVar10 = uVar10 + 0x20;
    uVar13 = uVar13 | (ulonglong)*puVar23 << uVar17;
  }
  uVar17 = uVar13 & 0xf;
  uVar10 = uVar10 - 4;
  uVar25 = (uint)uVar10;
  uVar13 = uVar13 >> 4;
  uVar19 = (uint)uVar13;
  if (1 < uVar17) {
    iVar18 = 1 << ((int)uVar17 - 1U & 0x3f);
    lVar20 = uVar17 + 1;
    pbVar27 = local_dc;
    pbVar28 = abStack_d6;
    uVar11 = 0x1f - uVar17;
    do {
      uVar19 = (uint)(uVar17 - 1);
      uVar25 = 1 << (uVar19 & 0x3f);
      uVar5 = (short)uVar25 - 1;
      pbVar24 = pbVar27;
      if (pbVar27 < pbVar28) {
        puVar23 = puVar22;
        pbVar29 = pbVar28;
        do {
          bVar1 = *pbVar27;
          uVar16 = (ulonglong)bVar1;
          puVar22 = puVar23;
          pbVar28 = pbVar29;
          if (bVar1 == 0) {
LAB_00603730:
            pbVar27 = pbVar27 + 1;
          }
          else {
            if ((int)uVar10 == 0) {
              uVar10 = 0x1f;
              puVar22 = puVar23 + 1;
              uVar26 = (ulonglong)*puVar23;
            }
            else {
              uVar10 = uVar10 - 1;
              uVar26 = uVar13;
            }
            uVar13 = (uVar26 << 0x20) >> 0x21;
            if ((uVar26 & 1) == 0) goto LAB_00603730;
            bVar8 = bVar1 & 3;
            if (bVar8 == 1) {
              pbVar28 = pbVar29 + 3;
              cVar3 = (char)(((uVar16 << 0x20) >> 0x22) << 2);
              *pbVar27 = cVar3 + 2;
              *pbVar29 = cVar3 + 0x12;
              pbVar29[1] = cVar3 + 0x22;
              pbVar29[2] = cVar3 + 0x32;
            }
            else {
              uVar6 = (ushort)iVar18;
              if ((bVar1 & 3) == 0) {
                uVar16 = (uVar16 << 0x20) >> 0x22;
                *pbVar27 = (char)(uVar16 << 2) + 0x11;
              }
              else {
                if (bVar8 != 2) {
                  if (bVar8 == 3) {
                    if ((uVar10 & 0xffffffff) < (uVar17 & 0xffffffff)) {
                      uVar16 = uVar10 & 0x7f;
                      uVar10 = uVar10 + 0x20;
                      uVar13 = uVar13 | (ulonglong)*puVar22 << uVar16;
                      puVar22 = puVar22 + 1;
                    }
                    uVar16 = 0xffffffff >> ((uint)(uVar11 + 1) & 0x3f) & uVar13;
                    uVar6 = uVar5 & (ushort)uVar16 | uVar6;
                    uVar15 = -uVar6;
                    if ((uVar25 & (uint)uVar16) == 0) {
                      uVar15 = uVar6;
                    }
                    uVar13 = uVar13 >> (uVar17 & 0x7f);
                    uVar10 = uVar10 - uVar17;
                    *(ushort *)((int)auStack_1a0 + (bVar1 >> 1 & 0x7e)) = uVar15;
                    *pbVar27 = 0;
                  }
                  goto LAB_00603730;
                }
                uVar16 = (uVar16 << 0x20) >> 0x22;
                *pbVar27 = 0;
                pbVar27 = pbVar27 + 1;
              }
              uVar21 = (uint)lVar20;
              iVar4 = (int)uVar17;
              if ((int)uVar10 == 0) {
                puVar23 = puVar22 + 1;
                uVar2 = *puVar22;
                uVar12 = uVar2 >> 1;
                uVar9 = (ulonglong)uVar12;
                uVar13 = (ulonglong)(uVar2 >> (uVar21 & 0x3f));
                uVar10 = uVar11;
                puVar22 = puVar23;
                if ((uVar2 & 1) == 0) goto LAB_00603afc;
                uVar10 = 0x1f;
LAB_0060381c:
                pbVar24 = pbVar24 + -1;
                *pbVar24 = (char)(uVar16 << 2) + 3;
                uVar13 = uVar9;
              }
              else {
                uVar10 = uVar10 - 1;
                uVar9 = (uVar13 << 0x20) >> 0x21;
                if ((uVar13 & 1) != 0) goto LAB_0060381c;
                uVar12 = (uint)uVar26;
                if ((uVar10 & 0xffffffff) < (uVar17 & 0xffffffff)) {
                  uVar13 = (ulonglong)(*puVar22 >> (iVar4 - (uint)uVar10 & 0x3f));
                  uVar12 = uVar12 >> 2 | *puVar22 << ((uint)uVar10 & 0x3f);
                  uVar10 = (uVar10 - uVar17) + 0x20;
                  puVar22 = puVar22 + 1;
                }
                else {
                  uVar13 = (ulonglong)((uVar12 >> 1) >> (uVar21 & 0x3f));
                  uVar10 = uVar10 - uVar17;
                  uVar12 = uVar12 >> 2;
                }
LAB_00603afc:
                uVar7 = uVar5 & (ushort)uVar12 | uVar6;
                uVar15 = -uVar7;
                if ((uVar25 & uVar12) == 0) {
                  uVar15 = uVar7;
                }
                *(ushort *)((int)auStack_1a0 + (int)(uVar16 << 1)) = uVar15;
              }
              if ((int)uVar10 == 0) {
                puVar23 = puVar22 + 1;
                uVar2 = *puVar22;
                uVar12 = uVar2 >> 1;
                uVar26 = (ulonglong)uVar12;
                uVar13 = (ulonglong)(uVar2 >> (uVar21 & 0x3f));
                uVar10 = uVar11;
                puVar22 = puVar23;
                if ((uVar2 & 1) == 0) goto LAB_00603a88;
                uVar10 = 0x1f;
LAB_00603868:
                pbVar24 = pbVar24 + -1;
                *pbVar24 = (char)(uVar16 + 1) * '\x04' + 3;
                uVar13 = uVar26;
              }
              else {
                uVar10 = uVar10 - 1;
                uVar26 = (uVar13 << 0x20) >> 0x21;
                if ((uVar13 & 1) != 0) goto LAB_00603868;
                uVar12 = (uint)uVar13;
                if ((uVar10 & 0xffffffff) < (uVar17 & 0xffffffff)) {
                  uVar13 = (ulonglong)(*puVar22 >> (iVar4 - (uint)uVar10 & 0x3f));
                  uVar12 = uVar12 >> 1 | *puVar22 << ((uint)uVar10 & 0x3f);
                  uVar10 = (uVar10 - uVar17) + 0x20;
                  puVar22 = puVar22 + 1;
                }
                else {
                  uVar13 = (ulonglong)(uVar12 >> (uVar21 & 0x3f));
                  uVar10 = uVar10 - uVar17;
                  uVar12 = uVar12 >> 1;
                }
LAB_00603a88:
                uVar7 = uVar5 & (ushort)uVar12 | uVar6;
                uVar15 = -uVar7;
                if ((uVar25 & uVar12) == 0) {
                  uVar15 = uVar7;
                }
                auStack_1a0[(int)(uVar16 + 1)] = uVar15;
              }
              if ((int)uVar10 == 0) {
                puVar23 = puVar22 + 1;
                uVar2 = *puVar22;
                uVar12 = uVar2 >> 1;
                uVar26 = (ulonglong)uVar12;
                uVar13 = (ulonglong)(uVar2 >> (uVar21 & 0x3f));
                uVar10 = uVar11;
                puVar22 = puVar23;
                if ((uVar2 & 1) == 0) goto LAB_00603a14;
                uVar10 = 0x1f;
LAB_006038b4:
                pbVar24 = pbVar24 + -1;
                *pbVar24 = (char)(uVar16 + 2) * '\x04' + 3;
                uVar13 = uVar26;
              }
              else {
                uVar10 = uVar10 - 1;
                uVar26 = (uVar13 << 0x20) >> 0x21;
                if ((uVar13 & 1) != 0) goto LAB_006038b4;
                uVar12 = (uint)uVar13;
                if ((uVar10 & 0xffffffff) < (uVar17 & 0xffffffff)) {
                  uVar13 = (ulonglong)(*puVar22 >> (iVar4 - (uint)uVar10 & 0x3f));
                  uVar12 = uVar12 >> 1 | *puVar22 << ((uint)uVar10 & 0x3f);
                  uVar10 = (uVar10 - uVar17) + 0x20;
                  puVar22 = puVar22 + 1;
                }
                else {
                  uVar13 = (ulonglong)(uVar12 >> (uVar21 & 0x3f));
                  uVar10 = uVar10 - uVar17;
                  uVar12 = uVar12 >> 1;
                }
LAB_00603a14:
                uVar7 = uVar5 & (ushort)uVar12 | uVar6;
                uVar15 = -uVar7;
                if ((uVar25 & uVar12) == 0) {
                  uVar15 = uVar7;
                }
                auStack_1a0[(int)(uVar16 + 2)] = uVar15;
              }
              if ((int)uVar10 == 0) {
                puVar23 = puVar22 + 1;
                uVar2 = *puVar22;
                uVar12 = uVar2 >> 1;
                uVar26 = (ulonglong)uVar12;
                uVar13 = (ulonglong)(uVar2 >> (uVar21 & 0x3f));
                uVar10 = uVar11;
                puVar22 = puVar23;
                if ((uVar2 & 1) == 0) {
LAB_006039a0:
                  uVar6 = uVar5 & (ushort)uVar12 | uVar6;
                  uVar15 = -uVar6;
                  if ((uVar25 & uVar12) == 0) {
                    uVar15 = uVar6;
                  }
                  auStack_1a0[(int)(uVar16 + 3)] = uVar15;
                  goto LAB_00603734;
                }
                uVar10 = 0x1f;
              }
              else {
                uVar10 = uVar10 - 1;
                uVar26 = (uVar13 << 0x20) >> 0x21;
                if ((uVar13 & 1) == 0) {
                  uVar12 = (uint)uVar13;
                  if ((uVar10 & 0xffffffff) < (uVar17 & 0xffffffff)) {
                    uVar13 = (ulonglong)(*puVar22 >> (iVar4 - (uint)uVar10 & 0x3f));
                    uVar12 = uVar12 >> 1 | *puVar22 << ((uint)uVar10 & 0x3f);
                    uVar10 = (uVar10 - uVar17) + 0x20;
                    puVar22 = puVar22 + 1;
                  }
                  else {
                    uVar13 = (ulonglong)(uVar12 >> (uVar21 & 0x3f));
                    uVar10 = uVar10 - uVar17;
                    uVar12 = uVar12 >> 1;
                  }
                  goto LAB_006039a0;
                }
              }
              pbVar24 = pbVar24 + -1;
              *pbVar24 = (char)(uVar16 + 3) * '\x04' + 3;
              uVar13 = uVar26;
            }
          }
LAB_00603734:
          puVar23 = puVar22;
          pbVar29 = pbVar28;
        } while (pbVar27 < pbVar28);
      }
      pbVar27 = pbVar24;
      lVar20 = lVar20 + -1;
      if (uVar19 == 1) goto LAB_00603b90;
      iVar18 = iVar18 >> 1;
      uVar11 = uVar11 + 1;
      uVar17 = uVar17 - 1;
    } while( true );
  }
  if ((int)uVar17 != 0) {
    pbVar28 = abStack_d6;
    pbVar27 = local_dc;
LAB_00603b90:
    uVar19 = (uint)uVar13;
    uVar25 = (uint)uVar10;
    pbVar24 = pbVar27;
    if (pbVar27 < pbVar28) {
      do {
        bVar1 = *pbVar24;
        uVar17 = (ulonglong)bVar1;
        pbVar29 = pbVar28;
        if (bVar1 == 0) {
LAB_00603bf4:
          pbVar24 = pbVar24 + 1;
        }
        else {
          if ((int)uVar10 == 0) {
            uVar10 = 0x1f;
            uVar13 = (ulonglong)*puVar22;
            puVar22 = puVar22 + 1;
          }
          else {
            uVar10 = uVar10 - 1;
          }
          uVar11 = uVar13 & 1;
          uVar13 = (uVar13 << 0x20) >> 0x21;
          if (uVar11 == 0) goto LAB_00603bf4;
          bVar8 = bVar1 & 3;
          if (bVar8 == 1) {
            pbVar29 = pbVar28 + 3;
            cVar3 = (char)(((uVar17 << 0x20) >> 0x22) << 2);
            *pbVar24 = cVar3 + 2;
            *pbVar28 = cVar3 + 0x12;
            pbVar28[1] = cVar3 + 0x22;
            pbVar28[2] = cVar3 + 0x32;
          }
          else {
            if ((bVar1 & 3) == 0) {
              uVar17 = (uVar17 << 0x20) >> 0x22;
              *pbVar24 = (char)(uVar17 << 2) + 0x11;
            }
            else {
              if (bVar8 != 2) {
                if (bVar8 == 3) {
                  if ((int)uVar10 == 0) {
                    uVar10 = 0x1f;
                    uVar13 = (ulonglong)*puVar22;
                    puVar22 = puVar22 + 1;
                  }
                  else {
                    uVar10 = uVar10 - 1;
                  }
                  uVar5 = (ushort)uVar13;
                  uVar13 = (uVar13 << 0x20) >> 0x21;
                  *(ushort *)((int)auStack_1a0 + (bVar1 >> 1 & 0x7e)) = -(uVar5 & 1) | 1;
                  *pbVar24 = 0;
                }
                goto LAB_00603bf4;
              }
              uVar17 = (uVar17 << 0x20) >> 0x22;
              *pbVar24 = 0;
              pbVar24 = pbVar24 + 1;
            }
            lVar20 = uVar10 - 1;
            if ((int)uVar10 == 0) {
              lVar20 = 0x1f;
              puVar23 = puVar22 + 1;
              uVar10 = (ulonglong)(*puVar22 >> 1);
              if ((*puVar22 & 1) != 0) goto LAB_00603d98;
LAB_00603ec0:
              if ((int)lVar20 == 0) {
                lVar20 = 0x1f;
                puVar22 = puVar23 + 1;
                uVar10 = (ulonglong)*puVar23;
              }
              else {
                lVar20 = lVar20 + -1;
                puVar22 = puVar23;
              }
              uVar5 = (ushort)uVar10;
              uVar10 = (uVar10 << 0x20) >> 0x21;
              *(ushort *)((int)auStack_1a0 + (int)(uVar17 << 1)) = -(uVar5 & 1) | 1;
            }
            else {
              uVar10 = (uVar13 << 0x20) >> 0x21;
              puVar23 = puVar22;
              if ((uVar13 & 1) == 0) goto LAB_00603ec0;
LAB_00603d98:
              pbVar27 = pbVar27 + -1;
              *pbVar27 = (char)(uVar17 << 2) + 3;
              puVar22 = puVar23;
            }
            lVar14 = lVar20 + -1;
            puVar23 = puVar22;
            if ((int)lVar20 == 0) {
              lVar14 = 0x1f;
              puVar23 = puVar22 + 1;
              uVar10 = (ulonglong)*puVar22;
            }
            uVar13 = (uVar10 << 0x20) >> 0x21;
            puVar22 = puVar23;
            if ((uVar10 & 1) == 0) {
              if ((int)lVar14 == 0) {
                lVar14 = 0x1f;
                puVar22 = puVar23 + 1;
                uVar13 = (ulonglong)*puVar23;
              }
              else {
                lVar14 = lVar14 + -1;
              }
              uVar5 = (ushort)uVar13;
              uVar13 = (uVar13 << 0x20) >> 0x21;
              auStack_1a0[(int)(uVar17 + 1)] = -(uVar5 & 1) | 1;
            }
            else {
              pbVar27 = pbVar27 + -1;
              *pbVar27 = (char)(uVar17 + 1) * '\x04' + 3;
            }
            lVar20 = lVar14 + -1;
            puVar23 = puVar22;
            if ((int)lVar14 == 0) {
              lVar20 = 0x1f;
              puVar23 = puVar22 + 1;
              uVar13 = (ulonglong)*puVar22;
            }
            uVar11 = (uVar13 << 0x20) >> 0x21;
            puVar22 = puVar23;
            if ((uVar13 & 1) == 0) {
              if ((int)lVar20 == 0) {
                lVar20 = 0x1f;
                puVar22 = puVar23 + 1;
                uVar11 = (ulonglong)*puVar23;
              }
              else {
                lVar20 = lVar20 + -1;
              }
              uVar5 = (ushort)uVar11;
              uVar11 = (uVar11 << 0x20) >> 0x21;
              auStack_1a0[(int)(uVar17 + 2)] = -(uVar5 & 1) | 1;
            }
            else {
              pbVar27 = pbVar27 + -1;
              *pbVar27 = (char)(uVar17 + 2) * '\x04' + 3;
            }
            uVar10 = lVar20 - 1;
            puVar23 = puVar22;
            if ((int)lVar20 == 0) {
              uVar10 = 0x1f;
              puVar23 = puVar22 + 1;
              uVar11 = (ulonglong)*puVar22;
            }
            uVar13 = (uVar11 << 0x20) >> 0x21;
            puVar22 = puVar23;
            if ((uVar11 & 1) == 0) {
              if ((int)uVar10 == 0) {
                uVar10 = 0x1f;
                puVar22 = puVar23 + 1;
                uVar13 = (ulonglong)*puVar23;
              }
              else {
                uVar10 = uVar10 - 1;
              }
              uVar5 = (ushort)uVar13;
              uVar13 = (uVar13 << 0x20) >> 0x21;
              auStack_1a0[(int)(uVar17 + 3)] = -(uVar5 & 1) | 1;
            }
            else {
              pbVar27 = pbVar27 + -1;
              *pbVar27 = (char)(uVar17 + 3) * '\x04' + 3;
            }
          }
        }
        uVar19 = (uint)uVar13;
        uVar25 = (uint)uVar10;
        pbVar28 = pbVar29;
      } while (pbVar24 < pbVar29);
    }
  }
  param_2[2] = uVar25;
  param_2[1] = (uint)puVar22;
  *param_2 = uVar19;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}



//==== 00604050  ns=Global  size=0x34
// sig: undefined FUN_00604050(void)
// callers(0): 
// callees(0): 

char * FUN_00604050(char *param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = *param_2;
  while (cVar1 != '\0') {
    *param_1 = cVar1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    cVar1 = *param_2;
  }
  *param_1 = '\0';
  return param_1;
}



//==== 00604088  ns=Global  size=0x70
// sig: undefined FUN_00604088(void)
// callers(1): 005f6d90 FUN_005f6d90
// callees(0): 

void FUN_00604088(uint *param_1,ulonglong param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  if (((uint)param_1 & 2) != 0) {
    *(short *)param_1 = (short)param_2;
    param_3 = param_3 - 1;
    param_1 = (uint *)((int)param_1 + 2);
  }
  uVar1 = param_3 >> 1;
  puVar2 = param_1;
  uVar3 = uVar1;
  if (uVar1 != 0) {
    do {
      *puVar2 = (uint)((param_2 & 0xffffffff) << 0x10) | (uint)param_2;
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != 0);
    param_1 = param_1 + uVar1;
  }
  if ((param_3 & 1) != 0) {
    *(short *)param_1 = (short)param_2;
    return;
  }
  return;
}



//==== 006040f8  ns=Global  size=0x24
// sig: undefined FUN_006040f8(void)
// callers(0): 
// callees(0): 

void FUN_006040f8(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + param_3;
  if (puVar1 <= param_1) {
    return;
  }
  do {
    *param_1 = param_2;
    param_1 = param_1 + 1;
  } while (param_1 < puVar1);
  return;
}



//==== 00604120  ns=Global  size=0x30
// sig: undefined FUN_00604120(void)
// callers(0): 
// callees(0): 

int FUN_00604120(short *param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 0;
  sVar1 = *param_1;
  while (sVar1 != 0) {
    param_1 = param_1 + 1;
    iVar2 = iVar2 + 1;
    sVar1 = *param_1;
  }
  return iVar2;
}



//==== 00604150  ns=Global  size=0x5c
// sig: undefined FUN_00604150(void)
// callers(0): 
// callees(0): 

undefined4 FUN_00604150(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  uVar3 = uVar2;
  if (uVar2 == uVar1) {
    do {
      if (uVar3 == 0) {
        return 0;
      }
      param_1 = param_1 + 1;
      uVar1 = *param_1;
      param_2 = param_2 + 1;
      uVar2 = *param_2;
      uVar3 = uVar1;
    } while (uVar1 == uVar2);
  }
  uVar4 = 0xffffffff;
  if ((uVar2 <= uVar1) && (uVar4 = 1, uVar1 <= uVar2)) {
    return 0;
  }
  return uVar4;
}



//==== 006041ac  ns=Global  size=0x94
// sig: undefined FUN_006041ac(void)
// callers(0): 
// callees(0): 

undefined4 FUN_006041ac(ushort *param_1,ushort *param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_3 != 0) {
    uVar1 = *param_2;
    uVar2 = *param_1;
    if (uVar1 == uVar2) {
      uVar5 = (ulonglong)param_3;
      uVar4 = 0;
      do {
        if (uVar2 == 0) {
          return 0;
        }
        uVar4 = uVar4 + 1;
        uVar5 = uVar5 - 1;
        if (uVar5 == 0) {
          return 0;
        }
        iVar3 = (int)((uVar4 & 0xffffffff) << 1);
        uVar1 = *(ushort *)(iVar3 + (int)param_2);
        uVar2 = *(ushort *)(iVar3 + (int)param_1);
      } while (uVar2 == uVar1);
    }
    if (uVar2 < uVar1) {
      return 0xffffffff;
    }
    if (uVar1 < uVar2) {
      return 1;
    }
  }
  return 0;
}



//==== 00604240  ns=Global  size=0x10
// sig: undefined FUN_00604240(void)
// callers(0): 
// callees(0): 

void FUN_00604240(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_006663e8;
  return;
}



//==== 00604250  ns=Global  size=0x10
// sig: undefined FUN_00604250(void)
// callers(0): 
// callees(0): 

void FUN_00604250(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_006663e8;
  return;
}



//==== 00604260  ns=Global  size=0x40
// sig: undefined FUN_00604260(void)
// callers(0): 
// callees(1): 005e387c FUN_005e387c

void FUN_00604260(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_006663e8;
    FUN_005e387c();
  }
  return;
}



//==== 006042a0  ns=Global  size=0x40
// sig: undefined FUN_006042a0(void)
// callers(0): 
// callees(1): 005e387c FUN_005e387c

void FUN_006042a0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_006663e8;
    FUN_005e387c();
  }
  return;
}



//==== 006042e0  ns=Global  size=0x2c
// sig: undefined FUN_006042e0(void)
// callers(0): 
// callees(0): 

void FUN_006042e0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  return;
}



//==== 0060430c  ns=Global  size=0x4
// sig: undefined FUN_0060430c(void)
// callers(0): 
// callees(0): 

void FUN_0060430c(void)

{
  return;
}



//==== 00604310  ns=Global  size=0x4
// sig: undefined FUN_00604310(void)
// callers(0): 
// callees(0): 

void FUN_00604310(void)

{
  return;
}



//==== 00604314  ns=Global  size=0x10
// sig: undefined FUN_00604314(void)
// callers(0): 
// callees(0): 

void FUN_00604314(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_00666410;
  return;
}



//==== 00604324  ns=Global  size=0x40
// sig: undefined FUN_00604324(void)
// callers(0): 
// callees(1): 005e387c FUN_005e387c

void FUN_00604324(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_00666410;
    FUN_005e387c();
  }
  return;
}



//==== 00604364  ns=Global  size=0x8
// sig: undefined FUN_00604364(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00604364(void)

{
  return 0;
}



//==== 0060436c  ns=Global  size=0xe0
// sig: undefined FUN_0060436c(void)
// callers(1): 00508c10 shrubfunc::DrawShrub
// callees(0): 

void FUN_0060436c(uint param_1,uint param_2,uint param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
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
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  auVar2 = *(undefined1 (*) [16])(param_3 & 0xfffffff0);
  auVar10 = ZEXT416(0);
  auVar11 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
  auVar10 = auVar2 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar6 = auVar2 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar4 = *(undefined1 (*) [16])(param_2 & 0xfffffff0);
  auVar12 = *(undefined1 (*) [16])(param_2 + 0x10 & 0xfffffff0);
  auVar7 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,auVar11);
  auVar10 = auVar2 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar9 = vectorMultiplyAddFloatingPoint
                     (auVar12,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar11);
  auVar2 = auVar2 & (undefined1  [16])0xffffffff;
  auVar14 = *(undefined1 (*) [16])(param_3 + 0x10 & 0xfffffff0);
  auVar18 = *(undefined1 (*) [16])(param_3 + 0x20 & 0xfffffff0);
  auVar6 = auVar14 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar3 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar1 = *(undefined1 (*) [16])(param_2 + 0x20 & 0xfffffff0);
  auVar20 = *(undefined1 (*) [16])(param_2 + 0x30 & 0xfffffff0);
  auVar21 = *(undefined1 (*) [16])(param_3 + 0x30 & 0xfffffff0);
  auVar5 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar17 = vectorMultiplyAddFloatingPoint
                      (auVar12,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar11);
  auVar6 = auVar18 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar13 = auVar14 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar8 = vectorMultiplyAddFloatingPoint
                     (auVar1,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,auVar7);
  auVar7 = vectorMultiplyAddFloatingPoint
                     (auVar20,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,auVar9);
  auVar14 = auVar14 & (undefined1  [16])0xffffffff;
  auVar10 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar15 = vectorMultiplyAddFloatingPoint
                      (auVar4,auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,auVar11);
  auVar2 = auVar21 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar16 = vectorMultiplyAddFloatingPoint
                      (auVar4,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar11);
  auVar19 = vectorMultiplyAddFloatingPoint
                      (auVar12,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar11);
  auVar6 = auVar18 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar18 = auVar18 & (undefined1  [16])0xffffffff;
  auVar5 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,auVar11);
  auVar4 = vectorMultiplyAddFloatingPoint
                     (auVar12,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,auVar11);
  auVar10 = auVar21 & (undefined1  [16])0xffffffff;
  auVar9 = vectorMultiplyAddFloatingPoint
                     (auVar20,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,auVar17)
  ;
  auVar2 = auVar21 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar3 = vectorAddFloatingPoint(auVar8,auVar7);
  auVar14 = vectorMultiplyAddFloatingPoint
                      (auVar1,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar15);
  auVar7 = vectorMultiplyAddFloatingPoint
                     (auVar1,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,auVar16);
  auVar13 = vectorMultiplyAddFloatingPoint
                      (auVar20,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,auVar19
                      );
  auVar6 = vectorMultiplyAddFloatingPoint
                     (auVar1,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,auVar5);
  auVar10 = vectorMultiplyAddFloatingPoint
                      (auVar20,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,auVar4)
  ;
  auVar5 = vectorAddFloatingPoint(auVar7,auVar9);
  *(undefined1 (*) [16])(param_1 & 0xfffffff0) = auVar3;
  auVar2 = vectorAddFloatingPoint(auVar14,auVar13);
  auVar10 = vectorAddFloatingPoint(auVar6,auVar10);
  *(undefined1 (*) [16])(param_1 + 0x10 & 0xfffffff0) = auVar5;
  *(undefined1 (*) [16])(param_1 + 0x20 & 0xfffffff0) = auVar2;
  *(undefined1 (*) [16])(param_1 + 0x30 & 0xfffffff0) = auVar10;
  return;
}



//==== 0060444c  ns=Global  size=0x128
// sig: undefined FUN_0060444c(void)
// callers(1): 0050d240 FUN_0050d240
// callees(0): 

void FUN_0060444c(void)

{
  RsxCmd *pRVar1;
  RenderingStep *pRVar2;
  RenderingStep *pRVar3;
  RsxCmd *pRVar4;
  RsxCmd *pRVar5;
  RsxCmd *pRVar6;
  longlong lVar7;
  RsxCmd local_20 [8];
  
  pRVar3 = ForwardPass;
  pRVar4 = local_20;
  lVar7 = 4;
  *ForwardPass->command = NV4097_SET_OBJECT_x8|NV4097_SET_TRANSFORM_CONSTANT_LOAD_x1;
  pRVar3->command[1] = 8;
  pRVar6 = pRVar3->command + 2;
  pRVar3->command = pRVar6;
  pRVar5 = pRVar4;
  do {
    *pRVar6 = *pRVar5;
    pRVar6 = pRVar3->command;
    pRVar3->command = pRVar6 + 1;
    pRVar1 = pRVar5 + 1;
    pRVar5 = pRVar5 + 2;
    pRVar6[1] = *pRVar1;
    pRVar6 = pRVar3->command + 1;
    pRVar3->command = pRVar6;
    pRVar2 = DepthPass;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  lVar7 = 4;
  *DepthPass->command = NV4097_SET_OBJECT_x8|NV4097_SET_TRANSFORM_CONSTANT_LOAD_x1;
  pRVar2->command[1] = 8;
  pRVar5 = pRVar2->command + 2;
  pRVar2->command = pRVar5;
  do {
    *pRVar5 = *pRVar4;
    pRVar5 = pRVar2->command;
    pRVar2->command = pRVar5 + 1;
    pRVar6 = pRVar4 + 1;
    pRVar4 = pRVar4 + 2;
    pRVar5[1] = *pRVar6;
    pRVar5 = pRVar2->command + 1;
    pRVar2->command = pRVar5;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}



//==== 00604574  ns=fios  size=0x28
// sig: undefined check_magic2(void)
// callers(2): 00510794 FUN_00510794; 005107d0 fios::handle_invalidate_magic
// callees(0): 

uint fios::check_magic2(uint *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (uint *)0x0) {
    uVar1 = (uint)LZCOUNT(*param_1 ^ 0x46494f53) >> 5;
  }
  return uVar1;
}



//==== 0060459c  ns=Global  size=0x5c
// sig: undefined FUN_0060459c(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0060459c(int param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  piVar1 = *(int **)(param_1 + 0x40);
  if (piVar1 != (int *)0x0) {
    uVar2 = (*(code *)**(undefined4 **)(*piVar1 + 0x10))(piVar1);
  }
  return uVar2;
}



//==== 006045f8  ns=Global  size=0x68
// sig: undefined FUN_006045f8(void)
// callers(0): 
// callees(1): 0051ad94 FUN_0051ad94

void FUN_006045f8(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x40);
  if (piVar1 != (int *)0x0) {
    (*(code *)**(undefined4 **)(*piVar1 + 0x18))(piVar1);
  }
  FUN_0051ad94(param_1);
  return;
}



//==== 00604660  ns=Global  size=0x50
// sig: undefined FUN_00604660(void)
// callers(0): 
// callees(0): 

void FUN_00604660(int *param_1,int param_2)

{
  *(ushort *)(param_2 + 0x28) = *(ushort *)(param_2 + 0x28) | 1;
  (*(code *)**(undefined4 **)(*param_1 + 0x14))();
  return;
}



//==== 006046b0  ns=Global  size=0x60
// sig: undefined FUN_006046b0(void)
// callers(0): 
// callees(0): 

undefined4 FUN_006046b0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x40);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = (*(code *)**(undefined4 **)(*piVar1 + 0xc))(piVar1,param_2);
  }
  return uVar2;
}



//==== 00604710  ns=Global  size=0x28
// sig: undefined FUN_00604710(void)
// callers(27): 0051993c FUN_0051993c; 00519aa4 FUN_00519aa4; 00519c8c FUN_00519c8c; 0051a124 FUN_0051a124; 0051a35c FUN_0051a35c; 0051a3e4 FUN_0051a3e4; 0051a480 FUN_0051a480; 0051a754 FUN_0051a754; 0051a858 FUN_0051a858; 0051a9f0 FUN_0051a9f0; 0051ab68 FUN_0051ab68; 0051ad94 FUN_0051ad94; 0051ae6c FUN_0051ae6c; 0051aed4 FUN_0051aed4; 0051af40 FUN_0051af40; 0051afac FUN_0051afac; 0051b070 FUN_0051b070; 0051b1ec FUN_0051b1ec; 0051b318 FUN_0051b318; 0051b3cc FUN_0051b3cc; 0051b440 FUN_0051b440; 0051dcc4 FUN_0051dcc4; 0051e6cc FUN_0051e6cc; 0051ef8c FUN_0051ef8c; 0051f3e0 FUN_0051f3e0
// callees(0): 

uint FUN_00604710(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = (uint)LZCOUNT(*(uint *)(param_1 + 4) ^ 0x46494f53) >> 5;
  }
  return uVar1;
}



//==== 00604738  ns=fios  size=0x28
// sig: undefined check_magic(void)
// callers(11): 0051c030 fios::op_wait_result; 0051c0ec FUN_0051c0ec; 0051cda4 FUN_0051cda4; 0051f3e0 FUN_0051f3e0; 0051fd24 FUN_0051fd24; 00522e78 FUN_00522e78; 005238c0 FUN_005238c0; 00523f54 FUN_00523f54; 00525050 FUN_00525050; 00525184 FUN_00525184; 005258cc FUN_005258cc
// callees(0): 

uint fios::check_magic(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = (uint)LZCOUNT(*(uint *)(param_1 + 0xdc) ^ 0x46494f53) >> 5;
  }
  return uVar1;
}



//==== 00604760  ns=fios  size=0x28
// sig: undefined check_magic(void)
// callers(14): 0051cf28 FUN_0051cf28; 0051f3e0 FUN_0051f3e0; 005205b4 FUN_005205b4; 00521b58 fios::filehandle_close_setup; 005238c0 FUN_005238c0; 0052521c fios::read_req_setup; 00525524 FUN_00525524; 005258cc FUN_005258cc; 005390ac fios::handle_destroy; 005390e8 FUN_005390e8; 00539124 FUN_00539124; 005391f4 FUN_005391f4; 005392c4 FUN_005392c4; 00539358 FUN_00539358
// callees(0): 

uint fios::check_magic(uint *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (uint *)0x0) {
    uVar1 = (uint)LZCOUNT(*param_1 ^ 0x46494f53) >> 5;
  }
  return uVar1;
}



//==== 00604788  ns=Global  size=0x28
// sig: undefined FUN_00604788(void)
// callers(25): 0051cda4 FUN_0051cda4; 0051ce5c FUN_0051ce5c; 0051ced4 FUN_0051ced4; 0051cfd8 fios::op_alloc; 0051da34 FUN_0051da34; 0051dcc4 FUN_0051dcc4; 0051e6cc FUN_0051e6cc; 0051f1f4 FUN_0051f1f4; 0051f3e0 FUN_0051f3e0; 0051fa5c FUN_0051fa5c; 0051fd24 FUN_0051fd24; 00522e78 FUN_00522e78; 005231cc FUN_005231cc; 00523238 FUN_00523238; 005237dc FUN_005237dc; 005238c0 FUN_005238c0; 00523f54 FUN_00523f54; 005241b8 FUN_005241b8; 00525050 FUN_00525050; 00525184 FUN_00525184; 005257f8 FUN_005257f8; 005258cc FUN_005258cc; 00525f48 FUN_00525f48; 005392c4 FUN_005392c4; 00539358 FUN_00539358
// callees(0): 

uint FUN_00604788(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = (uint)LZCOUNT(*(uint *)(param_1 + 4) ^ 0x46494f53) >> 5;
  }
  return uVar1;
}



//==== 006047b0  ns=Global  size=0x28
// sig: undefined FUN_006047b0(void)
// callers(2): 0052835c FUN_0052835c; 00529748 FUN_00529748
// callees(0): 

uint FUN_006047b0(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = (uint)LZCOUNT(*(uint *)(param_1 + 4) ^ 0x46494f53) >> 5;
  }
  return uVar1;
}



//==== 006047d8  ns=Global  size=0x28
// sig: undefined FUN_006047d8(void)
// callers(2): 0052dfc4 FUN_0052dfc4; 0052e1dc FUN_0052e1dc
// callees(0): 

uint FUN_006047d8(uint *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (uint *)0x0) {
    uVar1 = (uint)LZCOUNT(*param_1 ^ 0x46494f53) >> 5;
  }
  return uVar1;
}



//==== 00604800  ns=Global  size=0x28
// sig: undefined FUN_00604800(void)
// callers(2): 0052d19c FUN_0052d19c; 0052e0b8 FUN_0052e0b8
// callees(0): 

uint FUN_00604800(uint *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (uint *)0x0) {
    uVar1 = (uint)LZCOUNT(*param_1 ^ 0x46494f53) >> 5;
  }
  return uVar1;
}



//==== 00604828  ns=Global  size=0x28
// sig: undefined FUN_00604828(void)
// callers(2): 0052d370 FUN_0052d370; 0052d478 FUN_0052d478
// callees(0): 

uint FUN_00604828(uint *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (uint *)0x0) {
    uVar1 = (uint)LZCOUNT(*param_1 ^ 0x46494f53) >> 5;
  }
  return uVar1;
}



//==== 00604850  ns=Global  size=0x28
// sig: undefined FUN_00604850(void)
// callers(2): 0052d90c FUN_0052d90c; 0052e828 FUN_0052e828
// callees(0): 

uint FUN_00604850(uint *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (uint *)0x0) {
    uVar1 = (uint)LZCOUNT(*param_1 ^ 0x46494f53) >> 5;
  }
  return uVar1;
}



//==== 00604878  ns=Global  size=0x4c
// sig: undefined FUN_00604878(void)
// callers(0): 
// callees(0): 

void FUN_00604878(int *param_1,undefined8 param_2)

{
  (*(code *)**(undefined4 **)(*param_1 + 0x28))(param_1,param_2,0,0x7fffffffffffffff);
  return;
}



//==== 006048c4  ns=Global  size=0x4
// sig: undefined FUN_006048c4(void)
// callers(0): 
// callees(0): 

void FUN_006048c4(void)

{
  return;
}



//==== 006048c8  ns=Global  size=0x4
// sig: undefined FUN_006048c8(void)
// callers(0): 
// callees(0): 

void FUN_006048c8(void)

{
  return;
}



//==== 006048cc  ns=Global  size=0x8
// sig: undefined FUN_006048cc(void)
// callers(0): 
// callees(0): 

void FUN_006048cc(void)

{
  return;
}



//==== 006048d4  ns=Global  size=0x8
// sig: undefined FUN_006048d4(void)
// callers(0): 
// callees(0): 

void FUN_006048d4(void)

{
  return;
}



//==== 006048dc  ns=Global  size=0xc
// sig: undefined FUN_006048dc(void)
// callers(0): 
// callees(0): 

void FUN_006048dc(void)

{
  return;
}



//==== 006048e8  ns=Global  size=0x30
// sig: undefined FUN_006048e8(void)
// callers(0): 
// callees(0): 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_006048e8(void)

{
  uint uVar1;
  
  uVar1 = (int)~**(uint **)(_DAT_0071afe8 + -0x8000) >> 0x1f;
  return uVar1 - (uVar1 ^ ~**(uint **)(_DAT_0071afe8 + -0x8000)) >> 0x1f;
}



//==== 00604918  ns=Global  size=0x18
// sig: undefined FUN_00604918(void)
// callers(8): 00604e98 FUN_00604e98; 0060a7e0 FUN_0060a7e0; 0061122c FUN_0061122c; 0061c280 FUN_0061c280; 006203e4 FUN_006203e4; 006218e0 FUN_006218e0; 00637d2c 989snd::snd_ProcessStreamTick; 0063a894 989snd::sndi_CloseAsyncFilePlayer
// callees(0): 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00604918(void)

{
  return **(undefined4 **)(_DAT_0071afe8 + -0x7ffc);
}



//==== 00604930  ns=Global  size=0xc
// sig: undefined FUN_00604930(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00604930(void)

{
  return 0x70033;
}



//==== 0060493c  ns=Global  size=0x18
// sig: undefined FUN_0060493c(void)
// callers(0): 
// callees(0): 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0060493c(void)

{
  return **(undefined4 **)(_DAT_0071afe8 + -0x7ff8);
}



//==== 00604954  ns=Global  size=0x18
// sig: undefined FUN_00604954(void)
// callers(0): 
// callees(0): 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00604954(void)

{
  return **(undefined4 **)(_DAT_0071afe8 + -0x7ff8);
}



//==== 0060496c  ns=Global  size=0x18
// sig: undefined FUN_0060496c(void)
// callers(0): 
// callees(0): 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0060496c(void)

{
  return **(undefined4 **)(_DAT_0071afe8 + -0x7ff4);
}



//==== 00604984  ns=Global  size=0x1c
// sig: undefined FUN_00604984(void)
// callers(0): 
// callees(0): 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_00604984(void)

{
  return **(undefined2 **)(_DAT_0071afe8 + -0x7ff0);
}



//==== 006049a0  ns=Global  size=0x40
// sig: undefined FUN_006049a0(void)
// callers(0): 
// callees(0): 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006049a0(double param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((double)*(float *)(_DAT_0071afe8 + -0x7fe0) < param_1) {
    uVar1 = (undefined4)(longlong)(param_1 * (double)*(float *)(_DAT_0071afe8 + -0x7fec));
  }
  **(undefined4 **)(_DAT_0071afe8 + -0x7fe4) = uVar1;
  return;
}



//==== 006049e0  ns=Global  size=0x2c
// sig: undefined FUN_006049e0(void)
// callers(0): 
// callees(0): 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_006049e0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = **(undefined4 **)(_DAT_0071afe8 + -0x7fd8);
  }
  return (double)**(float **)(iVar1 + -0x7fd4);
}



//==== 00604a0c  ns=Global  size=0x1c
// sig: undefined FUN_00604a0c(void)
// callers(0): 
// callees(0): 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00604a0c(void)

{
  return **(undefined4 **)(_DAT_0071afe8 + -0x7fd0);
}



//==== 00604a28  ns=Global  size=0x28
// sig: undefined FUN_00604a28(void)
// callers(0): 
// callees(0): 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00604a28(uint param_1)

{
  **(byte **)(_DAT_0071afe8 + -0x7fcc) =
       (byte)((longlong)((int)param_1 >> 0x1f) -
              ((longlong)((int)param_1 >> 0x1f) ^ (ulonglong)param_1) >> 0x18) >> 7;
  return;
}



//==== 00604a50  ns=Global  size=0x28
// sig: undefined FUN_00604a50(void)
// callers(0): 
// callees(0): 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00604a50(uint param_1)

{
  **(byte **)(_DAT_0071afe8 + -0x7fc8) =
       (byte)((longlong)((int)param_1 >> 0x1f) -
              ((longlong)((int)param_1 >> 0x1f) ^ (ulonglong)param_1) >> 0x18) >> 7;
  return;
}



//==== 00604a78  ns=Global  size=0x3c
// sig: undefined FUN_00604a78(void)
// callers(0): 
// callees(0): 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00604a78(void)

{
  bool bVar1;
  undefined4 *puVar2;
  
  bVar1 = **(int **)(_DAT_0071afe8 + -0x7fc4) == 0;
  if (bVar1) {
    puVar2 = *(undefined4 **)(_DAT_0071afe8 + -0x7fc0);
    **(int **)(_DAT_0071afe8 + -0x7fc4) = 1;
    *puVar2 = 0;
  }
  return bVar1;
}



//==== 00604ab4  ns=Global  size=0x34
// sig: undefined FUN_00604ab4(void)
// callers(0): 
// callees(0): 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00604ab4(void)

{
  bool bVar1;
  
  bVar1 = **(int **)(_DAT_0071afe8 + -0x7fc4) == 1;
  if (bVar1) {
    **(int **)(_DAT_0071afe8 + -0x7fc4) = 0;
  }
  return bVar1;
}



//==== 00604ae8  ns=Global  size=0x18
// sig: undefined FUN_00604ae8(void)
// callers(0): 
// callees(0): 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00604ae8(void)

{
  return **(undefined4 **)(_DAT_0071afe8 + -0x7fc4);
}



//==== 00604b00  ns=Global  size=0x84
// sig: undefined FUN_00604b00(void)
// callers(0): 
// callees(2): 0061a790 FUN_0061a790; 006272e8 989snd::snd_SynthLock

undefined4 FUN_00604b00(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  989snd::snd_SynthLock();
  iVar1 = FUN_0061a790(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    *param_2 = *(undefined1 *)(iVar1 + 0x164);
    param_2[1] = *(undefined1 *)(iVar1 + 0x165);
    param_2[2] = *(undefined1 *)(iVar1 + 0x166);
    param_2[3] = *(undefined1 *)(iVar1 + 0x167);
    uVar2 = param_1;
  }
  return uVar2;
}



//==== 00604b84  ns=Global  size=0xa0
// sig: undefined FUN_00604b84(void)
// callers(1): 00604b84 FUN_00604b84
// callees(5): 00604b84 FUN_00604b84; 0061a790 FUN_0061a790; 00621460 FUN_00621460; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock

void FUN_00604b84(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  989snd::snd_SynthLock();
  iVar2 = FUN_0061a790(param_1);
  if (iVar2 != 0) {
    for (puVar1 = *(undefined4 **)(iVar2 + 0x22c); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[0x8c]) {
      FUN_00604b84(*puVar1);
    }
    989snd::snd_SynthLock();
    FUN_00621460(iVar2);
    989snd::snd_SynthUnlock();
    *(undefined2 *)(iVar2 + 0x236) = 0xffff;
  }
  989snd::snd_SynthUnlock();
  return;
}



//==== 00604c24  ns=Global  size=0x88
// sig: undefined FUN_00604c24(void)
// callers(0): 
// callees(3): 0061a790 FUN_0061a790; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock

int FUN_00604c24(undefined4 param_1)

{
  byte *pbVar1;
  int iVar2;
  
  989snd::snd_SynthLock();
  iVar2 = -1;
  pbVar1 = (byte *)FUN_0061a790(param_1);
  if (((pbVar1 != (byte *)0x0) && ((*pbVar1 & 0x1f) != 4)) &&
     (iVar2 = (int)*(short *)(pbVar1 + 0x236),
     (int)(*(byte *)(*(int *)(pbVar1 + 0x244) + 4) - 1) < iVar2)) {
    iVar2 = -1;
  }
  989snd::snd_SynthUnlock();
  return iVar2;
}



//==== 00604cac  ns=Global  size=0x5c
// sig: undefined FUN_00604cac(void)
// callers(0): 
// callees(3): 0061a790 FUN_0061a790; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock

undefined1 FUN_00604cac(undefined4 param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  989snd::snd_SynthLock();
  uVar2 = 0xff;
  iVar1 = FUN_0061a790(param_1);
  if (iVar1 != 0) {
    uVar2 = *(undefined1 *)(iVar1 + 0x10);
  }
  989snd::snd_SynthUnlock();
  return uVar2;
}



//==== 00604d08  ns=Global  size=0x9c
// sig: undefined FUN_00604d08(void)
// callers(0): 
// callees(3): 0061a790 FUN_0061a790; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock

ushort FUN_00604d08(ulonglong param_1)

{
  ushort uVar1;
  int iVar2;
  
  989snd::snd_SynthLock();
  iVar2 = FUN_0061a790(param_1 & 0xffffffff);
  if ((iVar2 != 0) && (((uint)(param_1 >> 0x18) & 0x1f) == 5)) {
    uVar1 = *(ushort *)(*(int *)(iVar2 + 0x54) + 6);
    989snd::snd_SynthUnlock();
    return uVar1 & 1;
  }
  989snd::snd_SynthUnlock();
  return 0;
}



//==== 00604da4  ns=Global  size=0x74
// sig: undefined FUN_00604da4(void)
// callers(1): 005065dc FUN_005065dc
// callees(3): 0061a790 FUN_0061a790; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock

undefined4 FUN_00604da4(undefined4 param_1)

{
  int iVar1;
  
  989snd::snd_SynthLock();
  iVar1 = FUN_0061a790(param_1);
  if (iVar1 != 0) {
    989snd::snd_SynthUnlock();
    return param_1;
  }
  989snd::snd_SynthUnlock();
  return 0;
}



//==== 00604e18  ns=Global  size=0x80
// sig: undefined FUN_00604e18(void)
// callers(0): 
// callees(2): 0061a790 FUN_0061a790; 006271f4 989snd::snd_SynthUnlock

undefined4 FUN_00604e18(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0061a790();
  uVar2 = 0;
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x164) = *param_2;
    *(undefined1 *)(iVar1 + 0x165) = param_2[1];
    *(undefined1 *)(iVar1 + 0x166) = param_2[2];
    *(undefined1 *)(iVar1 + 0x167) = param_2[3];
    uVar2 = param_1;
  }
  989snd::snd_SynthUnlock();
  return uVar2;
}



//==== 00604e98  ns=Global  size=0x244
// sig: undefined FUN_00604e98(void)
// callers(0): 
// callees(11): 00604918 FUN_00604918; 0060dcd8 FUN_0060dcd8; 0060f5cc FUN_0060f5cc; 0060fabc FUN_0060fabc; 0060fb74 FUN_0060fb74; 006104e8 FUN_006104e8; 00619860 FUN_00619860; 0061aa54 FUN_0061aa54; 0061b218 FUN_0061b218; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00604e98(undefined4 param_1,uint param_2,undefined2 param_3,undefined1 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  
  iVar4 = _DAT_0071afe8;
  iVar1 = FUN_0060dcd8();
  puVar5 = (undefined1 *)(iVar1 + param_2 * 0x10 + (param_2 & 0x3fffffff) * -4);
  if (puVar5[4] != '\0') {
    uVar6 = FUN_0060fabc(*puVar5,0);
    FUN_0060fb74(*(undefined2 *)(puVar5 + 2));
    989snd::snd_SynthLock();
    puVar2 = (undefined4 *)FUN_0060f5cc(uVar6,puVar5);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = FUN_00604918();
      puVar2[3] = uVar3;
      989snd::snd_SynthUnlock();
      puVar2[0x91] = puVar5;
      *(undefined2 *)(puVar2 + 0x8d) = 0;
      *(undefined2 *)((int)puVar2 + 0x236) = param_3;
      puVar2[0x90] = param_1;
      *(undefined1 *)(puVar2 + 0x59) = *param_4;
      *(undefined1 *)((int)puVar2 + 0x165) = param_4[1];
      *(undefined1 *)((int)puVar2 + 0x166) = param_4[2];
      *(undefined1 *)((int)puVar2 + 0x167) = param_4[3];
      puVar2[0x87] = 0xfffffffe;
      FUN_006104e8(puVar2);
      *(undefined2 *)((int)puVar2 + 0x236) = 0xffff;
      if (*(short *)(puVar2 + 0x8d) == 0) {
        if (((**(int **)(iVar4 + -0x7fc4) == 0) && (iVar4 = FUN_00619860(puVar2), iVar4 == 0)) &&
           (puVar2[0x8b] == 0)) {
          FUN_0061b218(puVar2,0);
          return 0;
        }
        FUN_0061aa54(puVar2);
        uVar3 = *puVar2;
      }
      else {
        FUN_0061aa54(puVar2);
        uVar3 = *puVar2;
      }
      return uVar3;
    }
    989snd::snd_SynthUnlock();
  }
  return 0;
}



//==== 006050dc  ns=Global  size=0x68
// sig: undefined FUN_006050dc(void)
// callers(0): 
// callees(3): 0061bb5c FUN_0061bb5c; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_006050dc(void)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if (**(int **)(_DAT_0071afe8 + -0x7fc4) != 0) {
    989snd::snd_SynthLock();
    **(undefined4 **)(iVar1 + -0x7fc0) = 1;
    FUN_0061bb5c(0xffffffff);
    989snd::snd_SynthUnlock();
  }
  return 1;
}



//==== 00605144  ns=Global  size=0x34
// sig: undefined FUN_00605144(void)
// callers(0): 
// callees(1): 006187c8 FUN_006187c8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00605144(undefined8 param_1)

{
  FUN_006187c8(param_1,*(undefined4 *)(_DAT_0071afe8 + -0x7fbc));
  return;
}



//==== 00605178  ns=Global  size=0x34
// sig: undefined FUN_00605178(void)
// callers(0): 
// callees(1): 00617ea8 FUN_00617ea8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00605178(undefined8 param_1)

{
  FUN_00617ea8(param_1,*(undefined4 *)(_DAT_0071afe8 + -0x7fbc));
  return;
}



//==== 006051ac  ns=Global  size=0xa8
// sig: undefined FUN_006051ac(void)
// callers(1): 00505d30 FUN_00505d30
// callees(1): 005dd718 FUN_005dd718

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_006051ac(double param_1,undefined8 param_2)

{
  int iVar1;
  double dVar2;
  
  iVar1 = _DAT_0071afe8;
  dVar2 = (double)*(float *)(_DAT_0071afe8 + -0x7fb8);
  if (dVar2 <= param_1) {
    dVar2 = (double)FUN_005dd718(dVar2,param_2,0xffffffffffffffff);
    return (int)(dVar2 * (double)*(float *)(iVar1 + -0x7fb0));
  }
  dVar2 = (double)FUN_005dd718((double)(float)(dVar2 / (double)(float)(dVar2 - param_1)),param_2,
                               0xffffffffffffffff);
  return (int)(dVar2 * (double)*(float *)(iVar1 + -0x7fb0));
}



//==== 00605254  ns=Global  size=0xd0
// sig: undefined FUN_00605254(void)
// callers(0): 
// callees(1): 0061948c 989snd::snd_Printf
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00605254(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if (param_1 == (undefined4 *)0x0) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) == '\0') {
      trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
      return;
    }
  }
  else {
    (*(code *)**(undefined4 **)*param_1)(param_1,param_2,0x1ce4);
    (**(code **)**(undefined4 **)(iVar1 + -0x7f98))(param_1);
  }
  return;
}



//==== 00605324  ns=Global  size=0x134
// sig: undefined FUN_00605324(void)
// callers(0): 
// callees(4): 0061948c 989snd::snd_Printf; 0061a790 FUN_0061a790; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00605324(ulonglong param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  
  iVar2 = _DAT_0071afe8;
  if (((int)param_1 == 0) || (param_2 == (undefined1 *)0x0)) {
    uVar4 = 0;
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar2 + -0x7fa0) != '\0') goto LAB_00605398;
    trapWord(0x18,(ulonglong)**(byte **)(iVar2 + -0x7f9c),0);
  }
  989snd::snd_SynthLock();
  iVar2 = FUN_0061a790(param_1 & 0xffffffff);
  if (iVar2 == 0) {
    uVar4 = 0;
    989snd::snd_SynthUnlock();
  }
  else {
    uVar4 = 0;
    if ((((uint)(param_1 >> 0x18) & 0x1f) == 5) &&
       (puVar1 = *(undefined1 **)(iVar2 + 0x54), uVar4 = param_1, param_2 != (undefined1 *)0x0)) {
      uVar3 = 0xff;
      *param_2 = *puVar1;
      param_2[1] = puVar1[1];
      *(undefined2 *)(param_2 + 2) = *(undefined2 *)(puVar1 + 2);
      if ((*(ushort *)(puVar1 + 6) & 8) != 0) {
        uVar3 = puVar1[5];
      }
      param_2[4] = uVar3;
    }
    989snd::snd_SynthUnlock();
  }
LAB_00605398:
  return uVar4 & 0xffffffff;
}



//==== 00605458  ns=Global  size=0x158
// sig: undefined FUN_00605458(void)
// callers(1): 00606fb0 FUN_00606fb0
// callees(2): 0060dcd8 FUN_0060dcd8; 0061948c 989snd::snd_Printf
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00605458(int param_1,short param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  
  iVar1 = _DAT_0071afe8;
  if (((param_1 == 0) || (param_2 < 0)) || (param_3 == (undefined1 *)0x0)) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  if ((param_2 < *(short *)(param_1 + 0x16)) && (param_3 != (undefined1 *)0x0)) {
    iVar1 = FUN_0060dcd8(param_1);
    uVar3 = 0xff;
    puVar2 = (undefined1 *)(iVar1 + param_2 * 0x10 + ((int)param_2 & 0x3fffffffU) * -4);
    *param_3 = *puVar2;
    param_3[1] = puVar2[1];
    *(undefined2 *)(param_3 + 2) = *(undefined2 *)(puVar2 + 2);
    if ((*(ushort *)(puVar2 + 6) & 8) != 0) {
      uVar3 = puVar2[5];
    }
    param_3[4] = uVar3;
    return 1;
  }
  return 0;
}



//==== 006055b0  ns=Global  size=0xf0
// sig: undefined FUN_006055b0(void)
// callers(1): 0060709c FUN_0060709c
// callees(2): 0060dcd8 FUN_0060dcd8; 0061948c 989snd::snd_Printf
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_006055b0(int param_1,short param_2)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if ((param_1 == 0) || (param_2 < 0)) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0xff;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  if (*(short *)(param_1 + 0x16) <= param_2) {
    return 0xff;
  }
  iVar1 = FUN_0060dcd8(param_1);
  return *(undefined1 *)(param_2 * 0xc + iVar1 + 1);
}



//==== 006056a0  ns=Global  size=0x80
// sig: undefined FUN_006056a0(void)
// callers(0): 
// callees(1): 0061948c 989snd::snd_Printf
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_006056a0(int param_1)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if (param_1 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  return *(undefined2 *)(param_1 + 0x16);
}



//==== 00605720  ns=Global  size=0x138
// sig: undefined FUN_00605720(void)
// callers(0): 
// callees(3): 0061948c 989snd::snd_Printf; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_00605720(double param_1,uint param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  
  iVar3 = _DAT_0071afe8;
  dVar5 = param_1;
  if (param_1 <= (double)*(float *)(_DAT_0071afe8 + -0x7fe0)) {
    param_1 = (double)*(float *)(_DAT_0071afe8 + -0x7fe0);
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar3 + -0x7fa0) != '\0') {
      return param_1;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar3 + -0x7f9c),0);
  }
  if (0x1f < param_2) {
    989snd::snd_Printf((char)*(undefined4 *)(iVar3 + -0x7fa8));
    param_1 = (double)*(float *)(iVar3 + -0x7fe0);
    if (**(char **)(iVar3 + -0x7fa0) != '\0') {
      return param_1;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar3 + -0x7f9c),0);
  }
  if (dVar5 <= (double)*(float *)(iVar3 + -0x7fe0)) {
    iVar1 = *(int *)(iVar3 + -0x7f94);
    iVar4 = param_2 << 2;
  }
  else {
    iVar4 = param_2 * 4;
    989snd::snd_SynthLock(param_1);
    iVar1 = *(int *)(iVar3 + -0x7f94);
    puVar2 = *(undefined4 **)(iVar3 + -0x7f8c);
    iVar3 = *(int *)(iVar3 + -0x7f90);
    *(float *)(iVar1 + iVar4) = (float)dVar5;
    *puVar2 = 1;
    *(undefined4 *)(iVar3 + iVar4) = param_4;
    989snd::snd_SynthUnlock();
  }
  return (double)*(float *)(iVar1 + iVar4);
}



//==== 00605858  ns=Global  size=0xb4
// sig: undefined FUN_00605858(void)
// callers(0): 
// callees(1): 0061948c 989snd::snd_Printf
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_00605858(uint param_1,undefined4 *param_2)

{
  float fVar1;
  int iVar2;
  
  iVar2 = _DAT_0071afe8;
  if (0x1f < param_1) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    fVar1 = *(float *)(iVar2 + -0x7fe0);
    if (**(char **)(iVar2 + -0x7fa0) != '\0') goto LAB_006058b8;
    trapWord(0x18,(ulonglong)**(byte **)(iVar2 + -0x7f9c),0);
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(*(int *)(iVar2 + -0x7f90) + param_1 * 4);
  }
  fVar1 = *(float *)(*(int *)(iVar2 + -0x7f94) + param_1 * 4);
LAB_006058b8:
  return (double)fVar1;
}



//==== 0060590c  ns=Global  size=0xac
// sig: undefined FUN_0060590c(void)
// callers(0): 
// callees(1): 0061948c 989snd::snd_Printf
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0060590c(uint param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if ((0x10 < param_1) || (param_2 == 0)) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  uVar2 = 0xffffffff;
  if (param_1 < 0x10) {
    uVar2 = 1;
    *(int *)(*(int *)(iVar1 + -0x7f88) + param_1 * 4) = param_2;
  }
  return uVar2;
}



//==== 006059b8  ns=Global  size=0x98
// sig: undefined FUN_006059b8(void)
// callers(0): 
// callees(1): 0061948c 989snd::snd_Printf
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006059b8(uint param_1)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if (param_1 < 0x11) {
    if (param_1 != 0x10) {
      return *(undefined4 *)(*(int *)(_DAT_0071afe8 + -0x7f88) + param_1 * 4);
    }
  }
  else {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) == '\0') {
      trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
    }
  }
  return 0;
}



//==== 00605a50  ns=Global  size=0xdc
// sig: undefined FUN_00605a50(void)
// callers(0): 
// callees(3): 0061948c 989snd::snd_Printf; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_00605a50(double param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  float *pfVar4;
  double dVar5;
  
  iVar3 = _DAT_0071afe8;
  dVar5 = param_1;
  if (param_1 <= (double)*(float *)(_DAT_0071afe8 + -0x7fe0)) {
    param_1 = (double)*(float *)(_DAT_0071afe8 + -0x7fe0);
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar3 + -0x7fa0) != '\0') {
      return param_1;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar3 + -0x7f9c),0);
  }
  if (dVar5 <= (double)*(float *)(iVar3 + -0x7fe0)) {
    pfVar4 = *(float **)(iVar3 + -0x7fd4);
  }
  else {
    989snd::snd_SynthLock(param_1);
    pfVar4 = *(float **)(iVar3 + -0x7fd4);
    puVar1 = *(undefined4 **)(iVar3 + -0x7f8c);
    puVar2 = *(undefined4 **)(iVar3 + -0x7fd8);
    *pfVar4 = (float)dVar5;
    *puVar1 = 1;
    *puVar2 = param_3;
    989snd::snd_SynthUnlock();
  }
  return (double)*pfVar4;
}



//==== 00605b2c  ns=Global  size=0xd8
// sig: undefined FUN_00605b2c(void)
// callers(0): 
// callees(4): 0061948c 989snd::snd_Printf; 0061a790 FUN_0061a790; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00605b2c(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if (param_2 == (undefined1 *)0x0) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  989snd::snd_SynthLock();
  iVar1 = FUN_0061a790(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x164) = *param_2;
    *(undefined1 *)(iVar1 + 0x165) = param_2[1];
    *(undefined1 *)(iVar1 + 0x166) = param_2[2];
    *(undefined1 *)(iVar1 + 0x167) = param_2[3];
    uVar2 = param_1;
  }
  989snd::snd_SynthUnlock();
  return uVar2;
}



//==== 00605c04  ns=Global  size=0xd8
// sig: undefined FUN_00605c04(void)
// callers(0): 
// callees(4): 0061948c 989snd::snd_Printf; 0061a790 FUN_0061a790; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00605c04(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if (param_2 == (undefined1 *)0x0) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  989snd::snd_SynthLock();
  iVar1 = FUN_0061a790(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    *param_2 = *(undefined1 *)(iVar1 + 0x164);
    param_2[1] = *(undefined1 *)(iVar1 + 0x165);
    param_2[2] = *(undefined1 *)(iVar1 + 0x166);
    param_2[3] = *(undefined1 *)(iVar1 + 0x167);
    uVar2 = param_1;
  }
  989snd::snd_SynthUnlock();
  return uVar2;
}



//==== 00605cdc  ns=Global  size=0xd8
// sig: undefined FUN_00605cdc(void)
// callers(0): 
// callees(4): 0061948c 989snd::snd_Printf; 0061a790 FUN_0061a790; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00605cdc(undefined4 param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if (3 < param_2 - 1U) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  989snd::snd_SynthLock();
  iVar1 = FUN_0061a790(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + param_2 + 0x163) = param_3;
    uVar2 = param_1;
  }
  989snd::snd_SynthUnlock();
  return uVar2;
}



//==== 00605db4  ns=Global  size=0xe8
// sig: undefined FUN_00605db4(void)
// callers(0): 
// callees(4): 0061948c 989snd::snd_Printf; 0061a790 FUN_0061a790; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00605db4(undefined4 param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if ((3 < param_2 - 1U) || (param_3 == (undefined1 *)0x0)) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  989snd::snd_SynthLock();
  iVar1 = FUN_0061a790(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    *param_3 = *(undefined1 *)(iVar1 + param_2 + 0x163);
    uVar2 = param_1;
  }
  989snd::snd_SynthUnlock();
  return uVar2;
}



//==== 00605e9c  ns=Global  size=0x84
// sig: undefined FUN_00605e9c(void)
// callers(1): 0063ee28 FUN_0063ee28
// callees(1): 0061948c 989snd::snd_Printf
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00605e9c(int param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if (param_1 - 1U < 0x40) {
    *(undefined1 *)(*(int *)(_DAT_0071afe8 + -0x7f84) + (param_1 - 1U)) = param_2;
  }
  else {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) == '\0') {
      trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
      return;
    }
  }
  return;
}



//==== 00605f20  ns=Global  size=0x94
// sig: undefined FUN_00605f20(void)
// callers(1): 0063ee28 FUN_0063ee28
// callees(1): 0061948c 989snd::snd_Printf
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00605f20(int param_1)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if (param_1 - 1U < 0x40) {
    return *(undefined1 *)(*(int *)(_DAT_0071afe8 + -0x7f84) + (param_1 - 1U));
  }
  989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
  if (**(char **)(iVar1 + -0x7fa0) == '\0') {
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  return 0;
}



//==== 00605fb4  ns=Global  size=0xac
// sig: undefined FUN_00605fb4(void)
// callers(0): 
// callees(3): 0061948c 989snd::snd_Printf; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00605fb4(ulonglong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if ((param_1 & 0xffff) < 0xfa) {
    989snd::snd_SynthLock(param_1,param_2,0x416);
    **(undefined2 **)(iVar1 + -0x7ff0) = (short)param_1;
    989snd::snd_SynthUnlock();
    uVar2 = 0;
  }
  else {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    uVar2 = 0xffffffff;
    if (**(char **)(iVar1 + -0x7fa0) == '\0') {
      trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
      989snd::snd_SynthLock();
      989snd::snd_SynthUnlock();
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



//==== 00606060  ns=Global  size=0x90
// sig: undefined FUN_00606060(void)
// callers(0): 
// callees(2): 0061948c 989snd::snd_Printf; 00622a48 FUN_00622a48
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00606060(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if (param_1 != 0) {
    uVar2 = FUN_00622a48(param_1,param_2,0x1d0f);
    return uVar2;
  }
  989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
  if (**(char **)(iVar1 + -0x7fa0) == '\0') {
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  return 0;
}



//==== 006060f0  ns=989snd  size=0x144
// sig: undefined snd_PresetFileGetPresetName(void)
// callers(0): 
// callees(3): 0061948c 989snd::snd_Printf; 00622a48 FUN_00622a48; 00622b2c FUN_00622b2c
// strings: 00669c48: 'common/api.cpp' | 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c58: 'snd_PresetFileGetPresetName(): presetIndex out of range.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void 989snd::snd_PresetFileGetPresetName(int param_1,ulonglong param_2,int param_3,int param_4)

{
  int iVar1;
  ulonglong uVar2;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  
  iVar1 = _DAT_0071afe8;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if (((param_1 == 0) || (param_3 == 0)) || (param_4 == 0)) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
    if (param_1 == 0) {
      return;
    }
    uVar2 = FUN_00622a48(param_1);
    if ((uVar2 & 0xffffffff) <= (param_2 & 0xffffffff)) goto LAB_006061fc;
  }
  else {
    uVar2 = FUN_00622a48(param_1,param_2,0x1d3e);
    if ((uVar2 & 0xffffffff) <= (param_2 & 0xffffffff)) {
LAB_006061fc:
      snd_Printf((char)*(undefined4 *)(iVar1 + -0x7f80));
      return;
    }
  }
  FUN_00622b2c(param_1,(int)param_2,param_3,param_4);
  return;
}



//==== 00606234  ns=Global  size=0x128
// sig: undefined FUN_00606234(void)
// callers(0): 
// callees(3): 0061948c 989snd::snd_Printf; 006223a0 FUN_006223a0; 00622f28 FUN_00622f28
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00606234(int param_1,int param_2)

{
  int iVar1;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  
  iVar1 = _DAT_0071afe8;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if ((param_1 == 0) || (param_2 == 0)) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
    if (param_1 == 0) {
      return 0;
    }
    if (param_2 == 0) {
      return 0;
    }
  }
  iVar1 = (**(code **)**(undefined4 **)(iVar1 + -0x7f7c))(0x10,3);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_006223a0(iVar1);
  FUN_00622f28(iVar1,param_1,param_2);
  return iVar1;
}



//==== 0060637c  ns=Global  size=0x8c
// sig: undefined FUN_0060637c(void)
// callers(1): 00624044 FUN_00624044
// callees(2): 0061948c 989snd::snd_Printf; 00626884 FUN_00626884
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060637c(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if (param_2 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  FUN_00626884(param_1,param_2);
  return;
}



//==== 00606408  ns=989snd  size=0x128
// sig: undefined snd_PremasterSubmixSetCustomPreset(void)
// callers(0): 
// callees(4): 0061948c 989snd::snd_Printf; 00622a48 FUN_00622a48; 00622b2c FUN_00622b2c; 00623834 FUN_00623834
// strings: 00669c98: 'snd_PremasterSubmixSetCustomPreset(): presetIndex out of range.\n' | 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void 989snd::snd_PremasterSubmixSetCustomPreset(undefined4 param_1,ulonglong param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_130 [264];
  
  iVar2 = _DAT_0071afe8;
  uVar1 = param_2 & 0xffffffff;
  if ((int)param_2 == 0) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar2 + -0x7fa0) == '\0') {
      trapWord(0x18,(ulonglong)**(byte **)(iVar2 + -0x7f9c),0);
      return;
    }
  }
  else {
    uVar3 = FUN_00622a48(uVar1,param_2,0x1c18);
    if (param_3 < uVar3) {
      FUN_00622b2c(uVar1,param_3,auStack_130,0x100);
      FUN_00623834(param_1,uVar1,auStack_130);
      return;
    }
    snd_Printf((char)*(undefined4 *)(iVar2 + -0x7f78));
  }
  return;
}



//==== 00606530  ns=Global  size=0xac
// sig: undefined FUN_00606530(void)
// callers(1): 006065dc 989snd::snd_ReverbSetCustomPreset
// callees(2): 0061948c 989snd::snd_Printf; 00624044 FUN_00624044
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00606530(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  FUN_00624044(param_1,param_2,param_3);
  return;
}



//==== 006065dc  ns=989snd  size=0x15c
// sig: undefined snd_ReverbSetCustomPreset(void)
// callers(0): 
// callees(4): 00606530 FUN_00606530; 0061948c 989snd::snd_Printf; 00622a48 FUN_00622a48; 00622b2c FUN_00622b2c
// strings: 00669ce0: 'snd_ReverbSetCustomPreset(): presetIndex out of range.\n' | 00669c48: 'common/api.cpp' | 00669c28: '%s(%d) : Invalid parameter.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void 989snd::snd_ReverbSetCustomPreset(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  undefined1 auStack_130 [264];
  
  iVar1 = _DAT_0071afe8;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if ((param_1 == 0) || (param_2 == 0)) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
    if (param_1 == 0) {
      return;
    }
    if (param_2 == 0) {
      return;
    }
  }
  uVar2 = FUN_00622a48(param_2);
  if (uVar2 <= param_3) {
    snd_Printf((char)*(undefined4 *)(iVar1 + -0x7f74));
    return;
  }
  FUN_00622b2c(param_2,param_3,auStack_130,0x100);
  FUN_00606530(param_1,param_2,auStack_130);
  return;
}



//==== 00606738  ns=Global  size=0x24
// sig: undefined FUN_00606738(void)
// callers(0): 
// callees(1): 0062524c FUN_0062524c

void FUN_00606738(void)

{
  FUN_0062524c();
  return;
}



//==== 0060675c  ns=Global  size=0x24
// sig: undefined FUN_0060675c(void)
// callers(0): 
// callees(1): 006252e0 FUN_006252e0

void FUN_0060675c(void)

{
  FUN_006252e0();
  return;
}



//==== 00606780  ns=Global  size=0x80
// sig: undefined FUN_00606780(void)
// callers(0): 
// callees(2): 0061948c 989snd::snd_Printf; 00625374 FUN_00625374
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00606780(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if (8 < param_1) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  uVar2 = FUN_00625374(param_1);
  return uVar2;
}



//==== 00606800  ns=Global  size=0x94
// sig: undefined FUN_00606800(void)
// callers(0): 
// callees(2): 0061948c 989snd::snd_Printf; 0062a394 FUN_0062a394
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00606800(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if ((param_2 < -1) || (param_1 == 0)) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  FUN_0062a394(param_1,param_2);
  return;
}



//==== 00606894  ns=Global  size=0x10c
// sig: undefined FUN_00606894(void)
// callers(0): 
// callees(2): 0061948c 989snd::snd_Printf; 00626844 FUN_00626844
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00606894(double param_1,double param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,uint param_6,uint param_7)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if ((((param_1 < (double)*(float *)(_DAT_0071afe8 + -0x7fe0)) ||
       ((double)*(float *)(_DAT_0071afe8 + -0x7f70) < param_1)) ||
      (param_2 < (double)*(float *)(_DAT_0071afe8 + -0x7fe0))) ||
     ((((double)*(float *)(_DAT_0071afe8 + -0x7f70) < param_2 || (0x167 < param_6)) ||
      (0x168 < param_7)))) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  FUN_00626844(param_1,param_2,param_3);
  return;
}



//==== 006069a0  ns=Global  size=0x24
// sig: undefined FUN_006069a0(void)
// callers(0): 
// callees(1): 00626a3c FUN_00626a3c

void FUN_006069a0(void)

{
  FUN_00626a3c();
  return;
}



//==== 006069c4  ns=Global  size=0x9c
// sig: undefined FUN_006069c4(void)
// callers(0): 
// callees(4): 0061a6e0 FUN_0061a6e0; 0061a790 FUN_0061a790; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock

undefined4 FUN_006069c4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  989snd::snd_SynthLock();
  iVar1 = FUN_0061a790(param_1);
  uVar2 = 0;
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_0061a6e0(iVar1,1);
    uVar3 = param_1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = uVar2;
  }
  989snd::snd_SynthUnlock();
  return uVar3;
}



//==== 00606a60  ns=Global  size=0x3cc
// sig: undefined FUN_00606a60(void)
// callers(0): 
// callees(5): 006174b0 FUN_006174b0; 0061948c 989snd::snd_Printf; 0061a790 FUN_0061a790; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00606a60(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  float fVar2;
  uint uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  char asdf;
  byte *pbVar6;
  int iVar7;
  undefined2 uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined1 local_50 [32];
  
  iVar7 = _DAT_0071afe8;
  if (((param_2 == (byte *)0x0) || (*param_2 == 0)) || (4 < *param_2)) {
    asdf = (char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8);
    989snd::snd_Printf(asdf);
    989snd::snd_Printf(asdf);
    if (**(char **)(iVar7 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar7 + -0x7f9c),0);
  }
  989snd::snd_SynthLock();
  pbVar6 = (byte *)FUN_0061a790(param_1);
  if ((pbVar6 != (byte *)0x0) && ((*pbVar6 & 0x1f) == 5)) {
    pbVar4 = pbVar6 + (uint)*param_2 * 0x30;
    if (*(short *)(pbVar4 + 0x2c) == 0) {
      uVar3 = *(uint *)(param_2 + 0xc);
      uVar9 = (ulonglong)uVar3;
      if ((uVar3 & 0x1d) != 0x1d) {
        989snd::snd_SynthUnlock();
        return 0;
      }
      if ((((byte)(param_2[1] - 5) < 2) &&
          ((((uVar3 & 2) == 0 || (bVar1 = param_2[2], bVar1 == 0)) ||
           ((4 < bVar1 || (*param_2 == bVar1)))))) || ((param_2[4] == 2 && ((uVar3 & 0x40) == 0))))
      goto LAB_00606b28;
    }
    else {
      uVar9 = (ulonglong)*(uint *)(param_2 + 0xc);
    }
    fVar2 = *(float *)(param_2 + 8);
    uVar10 = 0;
    if ((*(float *)(iVar7 + -0x7fe0) <= fVar2) &&
       (uVar10 = 0x1aaaaaa, fVar2 <= *(float *)(iVar7 + -0x7f68))) {
      uVar10 = (undefined4)
               (longlong)
               (((fVar2 * *(float *)(iVar7 + -0x7f60)) / *(float *)(iVar7 + -0x7fec)) *
               *(float *)(iVar7 + -0x7f58));
    }
    bVar1 = param_2[5];
    uVar8 = 0;
    if ((-1 < (char)bVar1) && (uVar8 = 0x400, (char)bVar1 < 'e')) {
      uVar8 = (undefined2)
              ((ulonglong)((longlong)(int)(((int)(char)bVar1 & 0xffffU) << 10) * 0x51eb851f) >> 0x25
              );
    }
    if (((*(short *)(pbVar4 + 0x2c) != 0) && ((uVar9 & 0x18) != 0)) &&
       (uVar5 = (uVar9 & 7) << 0x1b | (uVar9 << 0x20) >> 0x25,
       (int)(uVar5 << 5) == 0 && (uint)uVar5 >> 0x1b == 0)) {
      if ((uVar9 & 8) != 0) {
        *(undefined4 *)(pbVar4 + 0x3c) = uVar10;
        uVar9 = (ulonglong)*(uint *)(param_2 + 0xc);
      }
      if ((uVar9 & 0x10) != 0) {
        *(undefined2 *)(pbVar4 + 0x32) = uVar8;
      }
      goto LAB_00606b2c;
    }
    iVar7 = FUN_006174b0(pbVar6,local_50);
    if (iVar7 == 0) goto LAB_00606b2c;
  }
LAB_00606b28:
  param_1 = 0;
LAB_00606b2c:
  989snd::snd_SynthUnlock();
  return param_1;
}



//==== 00606e2c  ns=Global  size=0x184
// sig: undefined FUN_00606e2c(void)
// callers(0): 
// callees(6): 005c5ad0 libc::memcpy; 005d0140 libc::memset; 0061948c 989snd::snd_Printf; 0061a790 FUN_0061a790; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 00669c48: 'common/api.cpp' | 00669d18: '%s(%d) : update to set size member.\n' | 00669c28: '%s(%d) : Invalid parameter.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00606e2c(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  
  iVar3 = _DAT_0071afe8;
  if (param_2 == (int *)0x0) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar3 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar3 + -0x7f9c),0);
  }
  if (*param_2 != 0xdc) {
    989snd::snd_Printf((char)*(undefined4 *)(iVar3 + -0x7f50));
  }
  libc::memset(param_2,0,0xdc);
  *param_2 = 0xdc;
  989snd::snd_SynthLock();
  iVar3 = FUN_0061a790(param_1);
  if (iVar3 == 0) {
    param_1 = 0;
    989snd::snd_SynthUnlock();
  }
  else {
    iVar1 = *(int *)(iVar3 + 0x120);
    param_2[5] = *(int *)(iVar3 + 300);
    iVar2 = *(int *)(iVar3 + 0x13c);
    param_2[4] = iVar1;
    param_2[6] = iVar2;
    iVar2 = *(int *)(iVar3 + 8);
    iVar1 = *(int *)(iVar3 + 0x154);
    param_2[7] = *(int *)(iVar3 + 0x144);
    param_2[8] = iVar1;
    param_2[3] = iVar2;
    *(undefined1 *)(param_2 + 9) = *(undefined1 *)(iVar3 + 0x164);
    *(undefined1 *)((int)param_2 + 0x25) = *(undefined1 *)(iVar3 + 0x165);
    *(undefined1 *)((int)param_2 + 0x26) = *(undefined1 *)(iVar3 + 0x166);
    *(undefined1 *)((int)param_2 + 0x27) = *(undefined1 *)(iVar3 + 0x167);
    pvVar4 = libc::memcpy(param_2 + 10,(void *)(iVar3 + 0x168),0xb4);
    param_2[1] = 0xf007f;
    989snd::snd_SynthUnlock(pvVar4);
  }
  return param_1;
}



//==== 00606fb0  ns=Global  size=0xec
// sig: undefined FUN_00606fb0(void)
// callers(0): 
// callees(3): 00605458 FUN_00605458; 0061838c FUN_0061838c; 0061948c 989snd::snd_Printf
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00606fb0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_30 [16];
  
  iVar1 = _DAT_0071afe8;
  if ((param_2 == 0) || (param_3 == 0)) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  iVar1 = FUN_0061838c(param_1,param_2,local_30);
  if (iVar1 < 0) {
    return 0;
  }
  uVar2 = FUN_00605458(param_1,(short)iVar1,param_3);
  return uVar2;
}



//==== 0060709c  ns=Global  size=0xc0
// sig: undefined FUN_0060709c(void)
// callers(0): 
// callees(3): 006055b0 FUN_006055b0; 0061838c FUN_0061838c; 0061948c 989snd::snd_Printf
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0060709c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_30 [24];
  
  iVar1 = _DAT_0071afe8;
  if ((param_1 == 0) || (param_2 == 0)) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0xffffffff;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  iVar1 = FUN_0061838c(param_1,param_2,local_30);
  uVar2 = 0xffffffff;
  if (-1 < iVar1) {
    uVar2 = FUN_006055b0(param_1,(short)iVar1);
  }
  return uVar2;
}



//==== 0060715c  ns=Global  size=0xf0
// sig: undefined FUN_0060715c(void)
// callers(1): 00607970 FUN_00607970
// callees(2): 0061838c FUN_0061838c; 0061948c 989snd::snd_Printf
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0060715c(undefined4 param_1,int param_2,ushort *param_3,undefined4 *param_4)

{
  int iVar1;
  ushort uVar2;
  undefined1 local_40 [16];
  
  iVar1 = _DAT_0071afe8;
  if ((param_2 == 0) || (param_3 == (ushort *)0x0)) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  uVar2 = FUN_0061838c(param_1,param_2,local_40);
  *param_3 = uVar2;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  return (uint)(-(ulonglong)(ushort)~uVar2 >> 0x3f);
}



//==== 0060724c  ns=Global  size=0xe8
// sig: undefined FUN_0060724c(void)
// callers(2): 00607334 FUN_00607334; 00607424 FUN_00607424
// callees(2): 0060d798 FUN_0060d798; 0061948c 989snd::snd_Printf
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0060724c(int *param_1,short param_2)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if ((param_1 == (int *)0x0) || (param_2 < 0)) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  if (((*param_1 == 0x6b6c4253) && (param_2 < *(short *)((int)param_1 + 0x16))) &&
     ((param_1[2] & 0x200U) != 0)) {
    iVar1 = FUN_0060d798(param_1);
    return iVar1 + param_2 * 0x40 + ((int)param_2 & 0xfffffffU) * -0x10;
  }
  return 0;
}



//==== 00607334  ns=Global  size=0xf0
// sig: undefined FUN_00607334(void)
// callers(0): 
// callees(6): 0060724c FUN_0060724c; 0060dcd8 FUN_0060dcd8; 0061948c 989snd::snd_Printf; 0061a790 FUN_0061a790; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 00669c48: 'common/api.cpp' | 00669c28: '%s(%d) : Invalid parameter.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00607334(ulonglong param_1)

{
  uint uVar1;
  int iVar3;
  longlong lVar2;
  undefined4 uVar4;
  
  iVar3 = _DAT_0071afe8;
  if ((int)param_1 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar3 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar3 + -0x7f9c),0);
  }
  989snd::snd_SynthLock();
  iVar3 = FUN_0061a790(param_1 & 0xffffffff);
  uVar4 = 0;
  if ((iVar3 != 0) && (((uint)(param_1 >> 0x18) & 0x1f) == 5)) {
    uVar4 = *(undefined4 *)(iVar3 + 0x240);
    uVar1 = *(uint *)(iVar3 + 0x54);
    lVar2 = FUN_0060dcd8(uVar4);
    uVar4 = FUN_0060724c(uVar4,(short)(((ulonglong)uVar1 - lVar2 & 0xffffffff) / 0xc));
  }
  989snd::snd_SynthUnlock();
  return uVar4;
}



//==== 00607424  ns=Global  size=0xe0
// sig: undefined FUN_00607424(void)
// callers(0): 
// callees(3): 0060724c FUN_0060724c; 0061838c FUN_0061838c; 0061948c 989snd::snd_Printf
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00607424(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_30 [16];
  
  iVar1 = _DAT_0071afe8;
  if (param_2 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  iVar1 = FUN_0061838c(param_1,param_2,local_30);
  if (iVar1 < 0) {
    return 0;
  }
  uVar2 = FUN_0060724c(param_1,(short)iVar1);
  return uVar2;
}



//==== 00607504  ns=Global  size=0xa8
// sig: undefined FUN_00607504(void)
// callers(0): 
// callees(4): 0060e084 FUN_0060e084; 0061a790 FUN_0061a790; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock

undefined4 FUN_00607504(ulonglong param_1)

{
  int iVar1;
  
  989snd::snd_SynthLock();
  iVar1 = FUN_0061a790(param_1 & 0xffffffff);
  if (((iVar1 != 0) && (((uint)(param_1 >> 0x18) & 0x1f) == 5)) &&
     (iVar1 = FUN_0060e084(iVar1), -1 < iVar1)) {
    989snd::snd_SynthUnlock();
    return 1;
  }
  989snd::snd_SynthUnlock();
  return 0;
}



//==== 006075ac  ns=Global  size=0x11c
// sig: undefined FUN_006075ac(void)
// callers(1): 006076c8 FUN_006076c8
// callees(3): 0060dcd8 FUN_0060dcd8; 0060df5c FUN_0060df5c; 0061948c 989snd::snd_Printf
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_006075ac(int *param_1,short param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = _DAT_0071afe8;
  if ((param_1 == (int *)0x0) || (param_2 < 0)) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  if ((*param_1 == 0x6b6c4253) && (param_2 < *(short *)((int)param_1 + 0x16))) {
    iVar1 = FUN_0060dcd8(param_1);
    uVar2 = FUN_0060df5c(param_1,iVar1 + param_2 * 0x10 + ((int)param_2 & 0x3fffffffU) * -4);
    return ~uVar2 >> 0x1f;
  }
  return 0;
}



//==== 006076c8  ns=Global  size=0xe4
// sig: undefined FUN_006076c8(void)
// callers(0): 
// callees(3): 006075ac FUN_006075ac; 0061838c FUN_0061838c; 0061948c 989snd::snd_Printf
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006076c8(undefined4 param_1,int param_2)

{
  int iVar1;
  short sVar3;
  undefined4 uVar2;
  undefined1 local_30 [16];
  
  iVar1 = _DAT_0071afe8;
  if (param_2 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  sVar3 = FUN_0061838c(param_1,param_2,local_30);
  if (sVar3 < 0) {
    return 0;
  }
  uVar2 = FUN_006075ac(param_1,sVar3);
  return uVar2;
}



//==== 006077ac  ns=Global  size=0xa8
// sig: undefined FUN_006077ac(void)
// callers(0): 
// callees(4): 0060debc FUN_0060debc; 0061a790 FUN_0061a790; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock

undefined4 FUN_006077ac(ulonglong param_1)

{
  int iVar1;
  
  989snd::snd_SynthLock();
  iVar1 = FUN_0061a790(param_1 & 0xffffffff);
  if (((iVar1 != 0) && (((uint)(param_1 >> 0x18) & 0x1f) == 5)) &&
     (iVar1 = FUN_0060debc(iVar1), -1 < iVar1)) {
    989snd::snd_SynthUnlock();
    return 1;
  }
  989snd::snd_SynthUnlock();
  return 0;
}



//==== 00607854  ns=Global  size=0x11c
// sig: undefined FUN_00607854(void)
// callers(1): 00607970 FUN_00607970
// callees(3): 0060dcd8 FUN_0060dcd8; 0060ddac FUN_0060ddac; 0061948c 989snd::snd_Printf
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00607854(int *param_1,short param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = _DAT_0071afe8;
  if ((param_1 == (int *)0x0) || (param_2 < 0)) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  if ((*param_1 == 0x6b6c4253) && (param_2 < *(short *)((int)param_1 + 0x16))) {
    iVar1 = FUN_0060dcd8(param_1);
    uVar2 = FUN_0060ddac(param_1,iVar1 + param_2 * 0x10 + ((int)param_2 & 0x3fffffffU) * -4);
    return ~uVar2 >> 0x1f;
  }
  return 0;
}



//==== 00607970  ns=Global  size=0xe0
// sig: undefined FUN_00607970(void)
// callers(0): 
// callees(3): 0060715c FUN_0060715c; 00607854 FUN_00607854; 0061948c 989snd::snd_Printf
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00607970(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_30 [4];
  undefined1 local_2c [20];
  
  iVar1 = _DAT_0071afe8;
  if (param_2 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  iVar1 = FUN_0060715c(param_1,param_2,local_30,local_2c);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_00607854(0,0);
  return uVar2;
}



//==== 00607a50  ns=Global  size=0xe4
// sig: undefined FUN_00607a50(void)
// callers(0): 
// callees(5): 0061948c 989snd::snd_Printf; 00619794 FUN_00619794; 0061a790 FUN_0061a790; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 00669c48: 'common/api.cpp' | 00669c28: '%s(%d) : Invalid parameter.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00607a50(undefined4 param_1,short param_2)

{
  int iVar1;
  byte *pbVar2;
  undefined4 uVar3;
  
  iVar1 = _DAT_0071afe8;
  if (param_2 < 0) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  989snd::snd_SynthLock();
  pbVar2 = (byte *)FUN_0061a790(param_1);
  uVar3 = 0;
  if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 0x1f) == 5)) {
    uVar3 = FUN_00619794(pbVar2,param_2);
  }
  989snd::snd_SynthUnlock();
  return uVar3;
}



//==== 00607b34  ns=Global  size=0x64
// sig: undefined FUN_00607b34(void)
// callers(0): 
// callees(4): 00619718 FUN_00619718; 0061a790 FUN_0061a790; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock

undefined4 FUN_00607b34(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  989snd::snd_SynthLock();
  uVar2 = 0;
  iVar1 = FUN_0061a790(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_00619718(iVar1);
  }
  989snd::snd_SynthUnlock();
  return uVar2;
}



//==== 00607b98  ns=Global  size=0x150
// sig: undefined FUN_00607b98(void)
// callers(1): 00607ce8 FUN_00607ce8
// callees(3): 0060dd64 FUN_0060dd64; 0061948c 989snd::snd_Printf; 00619914 FUN_00619914
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00607b98(int *param_1,short param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if ((param_1 == (int *)0x0) || (param_2 < 0)) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  if (*param_1 != 0x6b6c4253) {
    iVar1 = FUN_00619914(*param_1);
    if ((iVar1 != 0) && (*(undefined4 **)(iVar1 + 0x14) != (undefined4 *)0x0)) {
      uVar2 = (*(code *)**(undefined4 **)(iVar1 + 0x14))(param_1,param_2);
      return uVar2;
    }
    return 0;
  }
  uVar2 = FUN_0060dd64(param_1,param_2);
  return uVar2;
}



//==== 00607ce8  ns=Global  size=0xe4
// sig: undefined FUN_00607ce8(void)
// callers(0): 
// callees(3): 00607b98 FUN_00607b98; 0061838c FUN_0061838c; 0061948c 989snd::snd_Printf
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00607ce8(undefined4 param_1,int param_2)

{
  int iVar1;
  short sVar3;
  undefined4 uVar2;
  undefined1 local_30 [16];
  
  iVar1 = _DAT_0071afe8;
  if (param_2 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  sVar3 = FUN_0061838c(param_1,param_2,local_30);
  if (sVar3 < 0) {
    return 0;
  }
  uVar2 = FUN_00607b98(param_1,sVar3);
  return uVar2;
}



//==== 00607dcc  ns=Global  size=0x2e0
// sig: undefined FUN_00607dcc(void)
// callers(8): 00506294 FUN_00506294; 005063b0 FUN_005063b0; 006080ac FUN_006080ac; 00608578 FUN_00608578; 00608924 FUN_00608924; 00608cb8 FUN_00608cb8; 00609078 FUN_00609078; 00632404 FUN_00632404
// callees(11): 0061948c 989snd::snd_Printf; 00619b68 FUN_00619b68; 0061a34c FUN_0061a34c; 0061a790 FUN_0061a790; 0061ac6c FUN_0061ac6c; 0061ad24 FUN_0061ad24; 0061addc FUN_0061addc; 0061ae90 FUN_0061ae90; 0061c628 FUN_0061c628; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 00669c48: 'common/api.cpp' | 00669d18: '%s(%d) : update to set size member.\n' | 00669c28: '%s(%d) : Invalid parameter.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00607dcc(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = _DAT_0071afe8;
  if (param_2 == (int *)0x0) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  if (*param_2 != 0xdc) {
    989snd::snd_Printf((char)*(undefined4 *)(iVar1 + -0x7f50));
  }
  989snd::snd_SynthLock();
  iVar1 = FUN_0061a790(param_1);
  if (iVar1 != 0) {
    FUN_0061c628(iVar1,param_2);
    uVar3 = param_2[1];
    if ((uVar3 & 4) != 0) {
      iVar2 = FUN_00619b68(iVar1,2);
      if ((iVar2 != 0) && ((*(uint *)(iVar2 + 0x20) & 0x20) == 0)) {
        FUN_0061a34c(iVar1,2);
      }
      FUN_0061ae90(iVar1);
      if ((*(uint *)(iVar1 + 4) & 0x10000) == 0) {
        uVar3 = param_2[1];
      }
      else {
        FUN_0061addc(iVar1);
        uVar3 = param_2[1];
      }
    }
    if ((uVar3 & 0x18) != 0) {
      iVar2 = FUN_00619b68(iVar1,4);
      if ((iVar2 != 0) && ((*(uint *)(iVar2 + 0x24) & 0x20) == 0)) {
        FUN_0061a34c(iVar1,4);
      }
      FUN_0061addc(iVar1);
      uVar3 = param_2[1];
    }
    if ((uVar3 & 1) != 0) {
      iVar2 = FUN_00619b68(iVar1,8);
      if ((iVar2 != 0) && ((*(uint *)(iVar2 + 0x20) & 0x20) == 0)) {
        FUN_0061a34c(iVar1,8);
      }
      FUN_0061ad24(iVar1);
      uVar3 = param_2[1];
    }
    if ((uVar3 & 2) != 0) {
      iVar2 = FUN_00619b68(iVar1,0x10);
      if ((iVar2 != 0) && ((*(uint *)(iVar2 + 0x20) & 0x20) == 0)) {
        FUN_0061a34c(iVar1,0x10);
      }
      FUN_0061ad24(iVar1);
      uVar3 = param_2[1];
    }
    if ((uVar3 & 0x20) != 0) {
      FUN_0061ac6c(iVar1);
    }
    989snd::snd_SynthUnlock();
    return param_1;
  }
  989snd::snd_SynthUnlock();
  return 0;
}



//==== 006080ac  ns=Global  size=0x128
// sig: undefined FUN_006080ac(void)
// callers(0): 
// callees(5): 00607dcc FUN_00607dcc; 0060dcd8 FUN_0060dcd8; 0061948c 989snd::snd_Printf; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 00669c48: 'common/api.cpp' | 00669d40: '%s(%d) : Unsupported bank format.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006080ac(int *param_1,short param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = _DAT_0071afe8;
  989snd::snd_SynthLock();
  if (*param_1 != 0x6b6c4253) {
    989snd::snd_Printf((char)*(undefined4 *)(iVar2 + -0x7f4c));
    989snd::snd_SynthUnlock();
    return;
  }
  if (param_2 < *(short *)((int)param_1 + 0x16)) {
    iVar3 = FUN_0060dcd8(param_1);
    for (puVar1 = (undefined4 *)**(undefined4 **)(iVar2 + -0x7f48); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[0x89]) {
      if ((puVar1[0x8a] == 0) && (puVar1[0x15] == iVar3 + param_2 * 0xc)) {
        FUN_00607dcc(*puVar1,param_3);
      }
    }
  }
  989snd::snd_SynthUnlock();
  return;
}



//==== 006081d4  ns=Global  size=0xc8
// sig: undefined FUN_006081d4(void)
// callers(0): 
// callees(5): 0061948c 989snd::snd_Printf; 006199d8 FUN_006199d8; 0061a790 FUN_0061a790; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 00669c48: 'common/api.cpp' | 00669c28: '%s(%d) : Invalid parameter.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006081d4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if (param_2 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  989snd::snd_SynthLock();
  iVar1 = FUN_0061a790(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    FUN_006199d8(iVar1,param_2);
    uVar2 = param_1;
  }
  989snd::snd_SynthUnlock();
  return uVar2;
}



//==== 0060829c  ns=Global  size=0xc8
// sig: undefined FUN_0060829c(void)
// callers(0): 
// callees(5): 0061948c 989snd::snd_Printf; 006199b4 FUN_006199b4; 0061a790 FUN_0061a790; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 00669c48: 'common/api.cpp' | 00669c28: '%s(%d) : Invalid parameter.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0060829c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if (param_2 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  989snd::snd_SynthLock();
  iVar1 = FUN_0061a790(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    FUN_006199b4(iVar1,param_2);
    uVar2 = param_1;
  }
  989snd::snd_SynthUnlock();
  return uVar2;
}



//==== 00608364  ns=Global  size=0xc8
// sig: undefined FUN_00608364(void)
// callers(0): 
// callees(5): 0061948c 989snd::snd_Printf; 00619990 FUN_00619990; 0061a790 FUN_0061a790; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 00669c48: 'common/api.cpp' | 00669c28: '%s(%d) : Invalid parameter.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00608364(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if (param_2 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  989snd::snd_SynthLock();
  iVar1 = FUN_0061a790(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    FUN_00619990(iVar1,param_2);
    uVar2 = param_1;
  }
  989snd::snd_SynthUnlock();
  return uVar2;
}



//==== 0060842c  ns=Global  size=0xc8
// sig: undefined FUN_0060842c(void)
// callers(1): 00609cf4 FUN_00609cf4
// callees(5): 0061948c 989snd::snd_Printf; 006199fc FUN_006199fc; 0061a790 FUN_0061a790; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 00669c48: 'common/api.cpp' | 00669c28: '%s(%d) : Invalid parameter.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0060842c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if (param_2 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  989snd::snd_SynthLock();
  iVar1 = FUN_0061a790(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    FUN_006199fc(iVar1,param_2);
    uVar2 = param_1;
  }
  989snd::snd_SynthUnlock();
  return uVar2;
}



//==== 006084f4  ns=Global  size=0x84
// sig: undefined FUN_006084f4(void)
// callers(17): 00506638 FUN_00506638; 00608578 FUN_00608578; 00608924 FUN_00608924; 00608cb8 FUN_00608cb8; 00609078 FUN_00609078; 006094a0 FUN_006094a0; 00632674 FUN_00632674; 00632a38 FUN_00632a38; 00633ec0 FUN_00633ec0; 00634044 FUN_00634044; 006364a0 FUN_006364a0; 00637890 FUN_00637890; 00637a38 FUN_00637a38; 00637d2c 989snd::snd_ProcessStreamTick; 0063933c FUN_0063933c; 0063a480 FUN_0063a480; 0063be38 FUN_0063be38
// callees(4): 0061a790 FUN_0061a790; 0061b86c FUN_0061b86c; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock

undefined4 FUN_006084f4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  989snd::snd_SynthLock();
  iVar1 = FUN_0061a790(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    FUN_0061b86c(iVar1,1,param_2,0);
    uVar2 = param_1;
  }
  989snd::snd_SynthUnlock();
  return uVar2;
}



//==== 00608578  ns=Global  size=0x3ac
// sig: undefined FUN_00608578(void)
// callers(2): 00632508 FUN_00632508; 00637a38 FUN_00637a38
// callees(13): 005d0140 libc::memset; 00607dcc FUN_00607dcc; 006084f4 FUN_006084f4; 0060d3cc FUN_0060d3cc; 0061948c 989snd::snd_Printf; 00619a90 FUN_00619a90; 00619b68 FUN_00619b68; 0061a34c FUN_0061a34c; 0061a418 FUN_0061a418; 0061a790 FUN_0061a790; 0061ae90 FUN_0061ae90; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp' | 00669d68: '%s(%d) : Insufficient effect resources.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00608578(double param_1,double param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5,
            uint param_6)

{
  uint uVar1;
  char asdf;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined1 local_130 [232];
  
  iVar4 = _DAT_0071afe8;
  if ((param_1 < (double)*(float *)(_DAT_0071afe8 + -0x7fe0)) ||
     ((double)*(float *)(_DAT_0071afe8 + -0x7f70) < param_1)) {
    asdf = (char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8);
    989snd::snd_Printf(asdf);
    989snd::snd_Printf(asdf);
    if (**(char **)(iVar4 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar4 + -0x7f9c),0);
  }
  989snd::snd_SynthLock();
  iVar2 = FUN_0061a790(param_3);
  if (iVar2 == 0) {
    989snd::snd_SynthUnlock();
    param_3 = 0;
  }
  else {
    if (param_2 <= (double)*(float *)(iVar4 + -0x7fe0)) {
      iVar4 = FUN_00619b68(iVar2,2);
      if (iVar4 != 0) {
        FUN_0061a34c(iVar2,2);
      }
      if ((param_6 & 0x20) == 0) {
        libc::memset(local_130,0,0xdc);
        FUN_00607dcc(param_3,local_130);
      }
      else {
        FUN_0060d3cc(param_1,iVar2);
        FUN_0061ae90(iVar2);
      }
      if ((param_6 & 1) != 0) {
        FUN_006084f4(param_3,0);
      }
    }
    else {
      puVar3 = (uint *)FUN_00619b68(iVar2,2);
      if (puVar3 == (uint *)0x0) {
        puVar3 = (uint *)FUN_0061a418(*(undefined4 *)(iVar4 + -0x7f44),0x40,0x24);
        if (puVar3 == (uint *)0x0) {
          if ((param_6 & 0x20) == 0) {
            libc::memset(local_130,0,0xdc);
            FUN_00607dcc(param_3,local_130);
          }
          else {
            FUN_0060d3cc(param_1,iVar2);
            FUN_0061ae90(iVar2);
          }
          if ((param_6 & 1) != 0) {
            FUN_006084f4(param_3,0);
          }
          989snd::snd_Printf((char)*(undefined4 *)(iVar4 + -0x7f40));
          989snd::snd_SynthUnlock();
          return param_3;
        }
        FUN_00619a90(iVar2,puVar3);
      }
      else if ((param_6 & 2) != 0) {
        uVar1 = puVar3[7];
        puVar3[7] = puVar3[6];
        puVar3[6] = uVar1;
        puVar3[5] = (uint)-(float)puVar3[5];
        989snd::snd_SynthUnlock();
        return param_3;
      }
      *puVar3 = *puVar3 | 2;
      if ((param_6 & 0x20) == 0) {
        puVar3[5] = (uint)((float)(param_1 - (double)*(float *)(iVar2 + 0x120)) /
                          (float)(param_2 * (double)*(float *)(iVar4 + -0x7fec)));
        uVar1 = *(uint *)(iVar2 + 0x120);
      }
      else {
        puVar3[5] = (uint)((float)(param_1 - (double)*(float *)(iVar2 + 0x128)) /
                          (float)(param_2 * (double)*(float *)(iVar4 + -0x7fec)));
        uVar1 = *(uint *)(iVar2 + 0x128);
      }
      puVar3[8] = param_6;
      puVar3[6] = uVar1;
      puVar3[7] = (uint)(float)param_1;
    }
    989snd::snd_SynthUnlock();
  }
  return param_3;
}



//==== 00608924  ns=Global  size=0x394
// sig: undefined FUN_00608924(void)
// callers(0): 
// callees(13): 005d0140 libc::memset; 00607dcc FUN_00607dcc; 006084f4 FUN_006084f4; 0060cf34 FUN_0060cf34; 0061948c 989snd::snd_Printf; 00619a90 FUN_00619a90; 00619b68 FUN_00619b68; 0061a34c FUN_0061a34c; 0061a418 FUN_0061a418; 0061a790 FUN_0061a790; 0061ad24 FUN_0061ad24; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp' | 00669d68: '%s(%d) : Insufficient effect resources.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00608924(double param_1,double param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5,
            uint param_6)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  char asdf;
  int iVar4;
  uint *puVar5;
  int iVar6;
  undefined1 local_130 [232];
  
  iVar6 = _DAT_0071afe8;
  if (((double)*(float *)(_DAT_0071afe8 + -0x7f70) < param_1) ||
     (param_1 < (double)*(float *)(_DAT_0071afe8 + -0x7f3c))) {
    asdf = (char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8);
    989snd::snd_Printf(asdf);
    989snd::snd_Printf(asdf);
    if (**(char **)(iVar6 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar6 + -0x7f9c),0);
  }
  989snd::snd_SynthLock();
  iVar4 = FUN_0061a790(param_3);
  if (iVar4 == 0) {
    989snd::snd_SynthUnlock();
    param_3 = 0;
  }
  else {
    if (param_2 <= (double)*(float *)(iVar6 + -0x7fe0)) {
      iVar6 = FUN_00619b68(iVar4,0x10);
      if (iVar6 != 0) {
        FUN_0061a34c(iVar4,0x10);
      }
      if ((param_6 & 0x20) == 0) {
        libc::memset(local_130,0,0xdc);
        FUN_00607dcc(param_3,local_130);
      }
      else {
        FUN_0060cf34(param_1,iVar4);
        FUN_0061ad24(iVar4);
      }
      if ((param_6 & 1) != 0) {
        FUN_006084f4(param_3,0);
      }
    }
    else {
      puVar5 = (uint *)FUN_00619b68(iVar4,0x10);
      if (puVar5 == (uint *)0x0) {
        puVar5 = (uint *)FUN_0061a418(*(undefined4 *)(iVar6 + -0x7f34),0x40,0x24);
        if (puVar5 == (uint *)0x0) {
          if ((param_6 & 0x20) == 0) {
            libc::memset(local_130,0,0xdc);
            FUN_00607dcc(param_3,local_130);
          }
          else {
            FUN_0060cf34(param_1,iVar4);
            FUN_0061ad24(iVar4);
          }
          if ((param_6 & 1) != 0) {
            FUN_006084f4(param_3,0);
          }
          989snd::snd_Printf((char)*(undefined4 *)(iVar6 + -0x7f40));
          989snd::snd_SynthUnlock();
          return param_3;
        }
        FUN_00619a90(iVar4,puVar5);
      }
      else if ((param_6 & 2) != 0) {
        uVar3 = puVar5[7];
        puVar5[7] = puVar5[6];
        puVar5[6] = uVar3;
        puVar5[5] = (uint)-(float)puVar5[5];
        989snd::snd_SynthUnlock();
        return param_3;
      }
      if ((param_6 & 0x20) == 0) {
        fVar1 = *(float *)(iVar4 + 0x154);
      }
      else {
        fVar1 = *(float *)(iVar4 + 0x160);
      }
      fVar2 = *(float *)(iVar6 + -0x7fec);
      puVar5[8] = param_6;
      puVar5[6] = (uint)fVar1;
      puVar5[7] = (uint)(float)param_1;
      *puVar5 = *puVar5 | 0x10;
      puVar5[5] = (uint)((float)(param_1 - (double)fVar1) / (float)(param_2 * (double)fVar2));
    }
    989snd::snd_SynthUnlock();
  }
  return param_3;
}



//==== 00608cb8  ns=Global  size=0x3c0
// sig: undefined FUN_00608cb8(void)
// callers(0): 
// callees(13): 005d0140 libc::memset; 00607dcc FUN_00607dcc; 006084f4 FUN_006084f4; 0060d154 FUN_0060d154; 0061948c 989snd::snd_Printf; 00619a90 FUN_00619a90; 00619b68 FUN_00619b68; 0061a34c FUN_0061a34c; 0061a418 FUN_0061a418; 0061a790 FUN_0061a790; 0061ad24 FUN_0061ad24; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp' | 00669d68: '%s(%d) : Insufficient effect resources.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00608cb8(double param_1,undefined4 param_2,int param_3,undefined8 param_4,uint param_5)

{
  float fVar1;
  uint uVar2;
  char asdf;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined1 local_140 [248];
  
  iVar5 = _DAT_0071afe8;
  if (0x3c00 < param_3 + 0x1e00U) {
    asdf = (char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8);
    989snd::snd_Printf(asdf);
    989snd::snd_Printf(asdf);
    if (**(char **)(iVar5 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar5 + -0x7f9c),0);
  }
  989snd::snd_SynthLock();
  iVar3 = FUN_0061a790(param_2);
  if (iVar3 == 0) {
    989snd::snd_SynthUnlock();
    param_2 = 0;
  }
  else {
    if (param_1 <= (double)*(float *)(iVar5 + -0x7fe0)) {
      iVar5 = FUN_00619b68(iVar3,8);
      if (iVar5 != 0) {
        FUN_0061a34c(iVar3,8);
      }
      if ((param_5 & 0x20) == 0) {
        libc::memset(local_140,0,0xdc);
        FUN_00607dcc(param_2,local_140);
      }
      else {
        FUN_0060d154(iVar3,param_3);
        FUN_0061ad24(iVar3);
      }
      if ((param_5 & 1) != 0) {
        FUN_006084f4(param_2,0);
      }
    }
    else {
      puVar4 = (uint *)FUN_00619b68(iVar3,8);
      if (puVar4 == (uint *)0x0) {
        puVar4 = (uint *)FUN_0061a418(*(undefined4 *)(iVar5 + -0x7f30),0x40,0x24);
        if (puVar4 == (uint *)0x0) {
          if ((param_5 & 0x20) == 0) {
            libc::memset(local_140,0,0xdc);
            FUN_00607dcc(param_2,local_140);
          }
          else {
            FUN_0060d154(iVar3,param_3);
            FUN_0061ad24(iVar3);
          }
          if ((param_5 & 1) != 0) {
            FUN_006084f4(param_2,0);
          }
          989snd::snd_Printf((char)*(undefined4 *)(iVar5 + -0x7f40));
          989snd::snd_SynthUnlock();
          return param_2;
        }
        FUN_00619a90(iVar3,puVar4);
      }
      else if ((param_5 & 2) != 0) {
        uVar2 = puVar4[7];
        puVar4[7] = puVar4[6];
        puVar4[6] = uVar2;
        puVar4[5] = (uint)-(float)puVar4[5];
        989snd::snd_SynthUnlock();
        return param_2;
      }
      if ((param_5 & 0x20) == 0) {
        iVar3 = *(int *)(iVar3 + 0x144);
      }
      else {
        iVar3 = *(int *)(iVar3 + 0x150);
      }
      fVar1 = *(float *)(iVar5 + -0x7fec);
      puVar4[8] = param_5;
      *puVar4 = *puVar4 | 8;
      puVar4[6] = (uint)(float)(longlong)iVar3;
      puVar4[5] = (uint)((float)(longlong)(param_3 - iVar3) / (float)(param_1 * (double)fVar1));
      puVar4[7] = (uint)(float)(longlong)param_3;
    }
    989snd::snd_SynthUnlock();
  }
  return param_2;
}



//==== 00609078  ns=Global  size=0x428
// sig: undefined FUN_00609078(void)
// callers(1): 0063235c FUN_0063235c
// callees(12): 005d0140 libc::memset; 00607dcc FUN_00607dcc; 006084f4 FUN_006084f4; 0060cc50 FUN_0060cc50; 0061948c 989snd::snd_Printf; 00619a90 FUN_00619a90; 00619b68 FUN_00619b68; 0061a418 FUN_0061a418; 0061a790 FUN_0061a790; 0061addc FUN_0061addc; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp' | 00669d98: '%s(%d) : Unable to pan from SND_PAN_TO_SPEAKER.\n' | 00669d68: '%s(%d) : Insufficient effect resources.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00609078(double param_1,undefined4 param_2,uint param_3,undefined8 param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  char asdf;
  uint uVar7;
  undefined1 local_140 [248];
  
  iVar2 = _DAT_0071afe8;
  if ((0x167 < param_3) || ((param_5 & 0xc) == 0xc)) {
    asdf = (char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8);
    989snd::snd_Printf(asdf);
    989snd::snd_Printf(asdf);
    if (**(char **)(iVar2 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar2 + -0x7f9c),0);
  }
  989snd::snd_SynthLock();
  iVar5 = FUN_0061a790(param_2);
  if (iVar5 == 0) {
    989snd::snd_SynthUnlock();
    return 0;
  }
  if (*(int *)(iVar5 + 300) < 0) {
    989snd::snd_Printf((char)*(undefined4 *)(iVar2 + -0x7f2c));
    989snd::snd_SynthUnlock();
    return param_2;
  }
  if (param_1 <= (double)*(float *)(iVar2 + -0x7fe0)) {
    if ((param_5 & 0x20) == 0) {
      libc::memset(local_140,0,0xdc);
      FUN_00607dcc(param_2,local_140);
    }
    else {
      FUN_0060cc50(iVar5,param_3);
      FUN_0061addc(iVar5);
    }
    if ((param_5 & 1) != 0) {
      FUN_006084f4(param_2,0);
    }
  }
  else {
    puVar6 = (uint *)FUN_00619b68(iVar5,4);
    if (puVar6 == (uint *)0x0) {
      puVar6 = (uint *)FUN_0061a418(*(undefined4 *)(iVar2 + -0x7f28),0x40,0x28);
      if (puVar6 == (uint *)0x0) {
        if ((param_5 & 0x20) == 0) {
          libc::memset(local_140,0,0xdc);
          FUN_00607dcc(param_2,local_140);
        }
        else {
          FUN_0060cc50(iVar5,param_3);
          FUN_0061addc(iVar5);
        }
        if ((param_5 & 1) != 0) {
          FUN_006084f4(param_2,0);
        }
        989snd::snd_Printf((char)*(undefined4 *)(iVar2 + -0x7f40));
        989snd::snd_SynthUnlock();
        return param_2;
      }
      FUN_00619a90(iVar5,puVar6);
    }
    else if ((param_5 & 2) != 0) {
      uVar1 = puVar6[9];
      puVar6[7] = puVar6[6];
      puVar6[6] = puVar6[8];
      puVar6[5] = (uint)-(float)puVar6[5];
      if ((uVar1 & 4) == 0) {
        puVar6[9] = uVar1 | 4;
      }
      else {
        uVar3 = ((ulonglong)uVar1 & 3) << 0x1d | (ulonglong)(uVar1 >> 3);
        puVar6[9] = (uint)(uVar3 << 3) | (uint)uVar3 >> 0x1d;
      }
      goto LAB_00609174;
    }
    if ((param_5 & 0x20) == 0) {
      uVar1 = *(uint *)(iVar5 + 300);
    }
    else {
      uVar1 = *(uint *)(iVar5 + 0x138);
    }
    if ((param_5 & 8) != 0) {
      uVar4 = uVar1 - param_3;
      uVar7 = 0x168 - uVar4;
      if ((uVar1 <= param_3) && (uVar7 = param_3 - uVar1, uVar1 < param_3)) {
        uVar4 = 0x168 - uVar7;
      }
      if (uVar4 < uVar7) {
        param_5 = param_5 | 4;
      }
    }
    puVar6[9] = param_5;
    *puVar6 = *puVar6 | 4;
    puVar6[8] = (uint)(float)uVar1;
    puVar6[6] = (uint)(float)uVar1;
    puVar6[7] = (uint)(float)param_3;
    if ((param_5 & 4) == 0) {
      iVar5 = 0x168 - (uVar1 - param_3);
      if (uVar1 <= param_3) {
        iVar5 = param_3 - uVar1;
      }
    }
    else {
      iVar5 = uVar1 - param_3;
      if (uVar1 < param_3) {
        iVar5 = 0x168 - (param_3 - uVar1);
      }
      iVar5 = -iVar5;
    }
    puVar6[5] = (uint)((float)(longlong)iVar5 /
                      (float)(param_1 * (double)*(float *)(iVar2 + -0x7fec)));
  }
LAB_00609174:
  989snd::snd_SynthUnlock();
  return param_2;
}



//==== 006094a0  ns=Global  size=0x128
// sig: undefined FUN_006094a0(void)
// callers(0): 
// callees(5): 006084f4 FUN_006084f4; 0060dcd8 FUN_0060dcd8; 0061948c 989snd::snd_Printf; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 00669c48: 'common/api.cpp' | 00669d40: '%s(%d) : Unsupported bank format.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006094a0(int *param_1,short param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = _DAT_0071afe8;
  989snd::snd_SynthLock();
  if (*param_1 != 0x6b6c4253) {
    989snd::snd_Printf((char)*(undefined4 *)(iVar2 + -0x7f4c));
    989snd::snd_SynthUnlock();
    return;
  }
  if (param_2 < *(short *)((int)param_1 + 0x16)) {
    iVar3 = FUN_0060dcd8(param_1);
    for (puVar1 = (undefined4 *)**(undefined4 **)(iVar2 + -0x7f48); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[0x89]) {
      if ((puVar1[0x8a] == 0) && (puVar1[0x15] == iVar3 + param_2 * 0xc)) {
        FUN_006084f4(*puVar1,param_3);
      }
    }
  }
  989snd::snd_SynthUnlock();
  return;
}



//==== 006095c8  ns=Global  size=0x24c
// sig: undefined FUN_006095c8(void)
// callers(1): 00633ec0 FUN_00633ec0
// callees(8): 0060dcd8 FUN_0060dcd8; 0060f728 FUN_0060f728; 0060fabc FUN_0060fabc; 0060fb74 FUN_0060fb74; 0061838c FUN_0061838c; 0061948c 989snd::snd_Printf; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 00669d18: '%s(%d) : update to set size member.\n' | 00669c48: 'common/api.cpp' | 00669d40: '%s(%d) : Unsupported bank format.\n' | 00669c28: '%s(%d) : Invalid parameter.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006095c8(int *param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 local_60 [24];
  
  iVar2 = _DAT_0071afe8;
  if ((param_2 == 0) || (param_3 == (int *)0x0)) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar2 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar2 + -0x7f9c),0);
  }
  if (*param_3 != 0xdc) {
    989snd::snd_Printf((char)*(undefined4 *)(iVar2 + -0x7f50));
  }
  989snd::snd_SynthLock();
  if ((param_1 != (int *)0x0) && (*param_1 != 0x6b6c4253)) {
    989snd::snd_Printf((char)*(undefined4 *)(iVar2 + -0x7f4c));
    989snd::snd_SynthUnlock();
    return 0;
  }
  uVar1 = FUN_0061838c(param_1,param_2,local_60);
  if ((int)uVar1 < 0) {
    989snd::snd_SynthUnlock();
    return 0;
  }
  iVar2 = FUN_0060dcd8(param_1);
  puVar4 = (undefined1 *)(iVar2 + uVar1 * 0x10 + (uVar1 & 0x3fffffff) * -4);
  uVar5 = FUN_0060fabc(*puVar4,0);
  FUN_0060fb74(*(undefined2 *)(puVar4 + 2));
  uVar3 = FUN_0060f728(uVar5,param_1,uVar1,puVar4[1]);
  989snd::snd_SynthUnlock();
  return uVar3;
}



//==== 00609814  ns=Global  size=0x248
// sig: undefined FUN_00609814(void)
// callers(2): 005062f4 FUN_005062f4; 00634044 FUN_00634044
// callees(7): 0060dcd8 FUN_0060dcd8; 0060f728 FUN_0060f728; 0060fabc FUN_0060fabc; 0060fb74 FUN_0060fb74; 0061948c 989snd::snd_Printf; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 00669d18: '%s(%d) : update to set size member.\n' | 00669c48: 'common/api.cpp' | 00669d40: '%s(%d) : Unsupported bank format.\n' | 00669c28: '%s(%d) : Invalid parameter.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00609814(int *param_1,short param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  
  iVar1 = _DAT_0071afe8;
  if (((param_1 == (int *)0x0) || (param_2 < 0)) || (param_3 == (int *)0x0)) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  if (*param_3 != 0xdc) {
    989snd::snd_Printf((char)*(undefined4 *)(iVar1 + -0x7f50));
  }
  989snd::snd_SynthLock();
  if (*param_1 != 0x6b6c4253) {
    989snd::snd_Printf((char)*(undefined4 *)(iVar1 + -0x7f4c));
    989snd::snd_SynthUnlock();
    return 0;
  }
  if (param_2 < *(short *)((int)param_1 + 0x16)) {
    iVar1 = FUN_0060dcd8(param_1);
    puVar3 = (undefined1 *)(iVar1 + param_2 * 0x10 + ((int)param_2 & 0x3fffffffU) * -4);
    uVar4 = FUN_0060fabc(*puVar3,0);
    FUN_0060fb74(*(undefined2 *)(puVar3 + 2));
    uVar2 = FUN_0060f728(uVar4,param_1,param_2,puVar3[1]);
    989snd::snd_SynthUnlock();
    return uVar2;
  }
  989snd::snd_SynthUnlock();
  return 0;
}



//==== 00609a5c  ns=Global  size=0x74
// sig: undefined FUN_00609a5c(void)
// callers(3): 00505f18 FUN_00505f18; 00611fd0 FUN_00611fd0; 00633ec0 FUN_00633ec0
// callees(4): 0061a790 FUN_0061a790; 0061b0c8 FUN_0061b0c8; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock

undefined4 FUN_00609a5c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  989snd::snd_SynthLock();
  iVar1 = FUN_0061a790(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    FUN_0061b0c8(iVar1,1,2);
    uVar2 = param_1;
  }
  989snd::snd_SynthUnlock();
  return uVar2;
}



//==== 00609ad0  ns=Global  size=0x74
// sig: undefined FUN_00609ad0(void)
// callers(1): 00505cfc FUN_00505cfc
// callees(4): 0061a790 FUN_0061a790; 0061af44 FUN_0061af44; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock

undefined4 FUN_00609ad0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  989snd::snd_SynthLock();
  iVar1 = FUN_0061a790(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    FUN_0061af44(iVar1,1,2);
    uVar2 = param_1;
  }
  989snd::snd_SynthUnlock();
  return uVar2;
}



//==== 00609b44  ns=Global  size=0x1b0
// sig: undefined FUN_00609b44(void)
// callers(3): 00609cf4 FUN_00609cf4; 0060e57c FUN_0060e57c; 0060f728 FUN_0060f728
// callees(4): 005cd198 FUN_005cd198; 0060d824 FUN_0060d824; 0060d8b0 FUN_0060d8b0; 0061948c 989snd::snd_Printf
// strings: 00609c80: '}<KxB' (raw) | 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00609b44(int *param_1,short param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  
  iVar2 = _DAT_0071afe8;
  if ((param_1 == (int *)0x0) || (param_3 == 0)) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar2 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar2 + -0x7f9c),0);
  }
  if (((*param_1 == 0x6b6c4253) && ((param_1[2] & 0x100U) != 0)) &&
     (param_2 <= *(short *)((int)param_1 + 0x16))) {
    piVar3 = (int *)FUN_0060d8b0(param_1);
    iVar4 = FUN_0060d824(param_1);
    iVar5 = FUN_0060d824(param_1);
    if (0 < *(short *)((int)param_1 + 0x16)) {
      sVar1 = *(short *)(piVar3 + 3);
      uVar6 = (longlong)*(short *)((int)param_1 + 0x16) & 0xffffffff;
      while( true ) {
        if (sVar1 == param_2) {
          FUN_005cd198(param_3,0x7f,*(undefined4 *)(iVar2 + -0x7f24),
                       iVar4 + *(int *)(iVar5 + 0xc) + *piVar3);
          *(undefined1 *)(param_3 + 0x7f) = 0;
          return 1;
        }
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) break;
        sVar1 = *(short *)(piVar3 + 7);
        piVar3 = piVar3 + 4;
      }
    }
  }
  return 0;
}



//==== 00609cf4  ns=Global  size=0xaec
// sig: undefined FUN_00609cf4(void)
// callers(1): 0060a7e0 FUN_0060a7e0
// callees(12): 005cd198 FUN_005cd198; 005d0140 libc::memset; 0060842c FUN_0060842c; 00609b44 FUN_00609b44; 0060d824 FUN_0060d824; 0060dcd8 FUN_0060dcd8; 0061948c 989snd::snd_Printf; 0061a5b8 FUN_0061a5b8; 0061a790 FUN_0061a790; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock; 0062be38 FUN_0062be38
// strings: 0065fdf8: 'fioscachUnknown' | 0066a0a0: '\n---------- Handler Voices -----------\n' | 0066a0d8: '\nVoice index %d...\n' | 0066a0f0: '\tpriority               = %d\n' | 0066a110: '\tscaledPriority         = %d\n' | 0066a130: '\tvolGroup               = %d\n' | 0066a170: '\tpriorityReductionScale = %f\n' | 0066a190: '\tstatus                 = %d\n' | 0066a1b0: '\tstartTick              = %d\n' | 0066a1d0: '\tvoiceFlags             = %d\n' | 0066a2d8: '\tpanAzimuth             = %d\n' | 0066a318: '\tbakedPanAzimuth        = %d\n' | 0066a338: '\tpanFocus               = %d\n' | 0066a358: '\tbakedPanFocus          = %d\n' | 0066a378: '\tsampleRate             = %f\n' | 0066a398: '\tbakedSampleRate        = %f\n' | 0066a3b8: '\tBank_ID                = %d\n' | 0066a3d8: '\tsynVoiceCtx            = 0x%X\n' | 0066a3f8: '\tuserCtx                = %d\n' | 0066a418: '\n\tVoice context 0x%X...\n' | 0066a150: '\tsynthVoiceType         = %d\n' | 0066a1f0: '\ttransposeUpRange       = %d\n' | 0066a210: '\ttransposeDownRange     = %d\n' | 0066a230: '\towner                  = 0x%X\n' | 0066a278: '\tvolume                 = %f\n' | 0066a298: '\tbakedVolume            = %f\n' | 0066a2b8: '\tpanAzimuth             = 0x%X\n' | 0066a2f8: '\tbakedPanAzimuth        = 0x%X\n' | 00669e80: '\n--- Streaming Grain 0x%X of SCREAM handle 0x%X ---\n' | 00669ee0: 'Flags = '

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00609cf4(undefined4 param_1,ulonglong param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
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
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 *puVar24;
  int iVar25;
  int iVar26;
  byte *pbVar28;
  int iVar29;
  longlong lVar27;
  undefined4 uVar30;
  uint uVar31;
  undefined1 local_1a0 [12];
  undefined1 auStack_194 [36];
  undefined1 local_170 [8];
  undefined1 auStack_168 [216];
  
  iVar26 = _DAT_0071afe8;
  989snd::snd_SynthLock();
  pbVar28 = (byte *)FUN_0061a790(param_1);
  uVar30 = 0;
  if (pbVar28 == (byte *)0x0) goto LAB_00609e6c;
  bVar1 = *pbVar28;
  uVar31 = (uint)((ulonglong)bVar1 & 0x1f);
  if (*(int *)(pbVar28 + 0x228) == 0) {
    if (uVar31 == 5) {
      989snd::snd_Printf((char)*(undefined4 *)(iVar26 + -0x7f20));
      goto LAB_0060a6d0;
    }
    989snd::snd_Printf((char)*(undefined4 *)(iVar26 + -0x7f1c));
LAB_00609da4:
    libc::memset(auStack_168,0,0x78);
    if (uVar31 < 8) goto LAB_0060a348;
LAB_00609dd8:
    989snd::snd_Printf((char)*(undefined4 *)(iVar26 + -0x7f00));
    if ((param_2 & 1) == 0) goto LAB_00609df0;
LAB_0060a3a4:
    989snd::snd_Printf((char)*(undefined4 *)(iVar26 + -0x7efc));
    uVar31 = *(uint *)(pbVar28 + 4);
    if ((uVar31 & 2) != 0) {
      989snd::snd_Printf((char)*(undefined4 *)(iVar26 + -0x7ef8));
      uVar31 = *(uint *)(pbVar28 + 4);
    }
    if ((uVar31 & 4) != 0) {
      989snd::snd_Printf((char)*(undefined4 *)(iVar26 + -0x7ef4));
      uVar31 = *(uint *)(pbVar28 + 4);
    }
    if ((uVar31 & 8) != 0) {
      989snd::snd_Printf((char)*(undefined4 *)(iVar26 + -0x7ef0));
      uVar31 = *(uint *)(pbVar28 + 4);
    }
    if ((uVar31 & 0x80) != 0) {
      989snd::snd_Printf((char)*(undefined4 *)(iVar26 + -0x7eec));
      uVar31 = *(uint *)(pbVar28 + 4);
    }
    if ((uVar31 & 0x10000) != 0) {
      989snd::snd_Printf((char)*(undefined4 *)(iVar26 + -0x7ee8));
      uVar31 = *(uint *)(pbVar28 + 4);
    }
    if ((uVar31 & 0x20000) != 0) {
      989snd::snd_Printf((char)*(undefined4 *)(iVar26 + -0x7ee4));
    }
    989snd::snd_Printf((char)*(undefined4 *)(iVar26 + -0x7f00));
    FUN_0060842c(param_1,auStack_194);
  }
  else {
    if (uVar31 == 5) {
      989snd::snd_Printf((char)*(undefined4 *)(iVar26 + -0x7f18));
LAB_0060a6d0:
      libc::memset(auStack_168,0,0x78);
      if ((*(int *)(pbVar28 + 0x240) != 0) &&
         ((*(uint *)(*(int *)(pbVar28 + 0x240) + 8) & 0x100) != 0)) {
        uVar31 = *(uint *)(pbVar28 + 0x244);
        lVar27 = FUN_0060dcd8();
        uVar30 = FUN_0060d824(*(undefined4 *)(pbVar28 + 0x240));
        FUN_005cd198(local_1a0,8,*(undefined4 *)(iVar26 + -0x7f24),uVar30);
        FUN_00609b44(*(undefined4 *)(pbVar28 + 0x240),
                     (short)(((ulonglong)uVar31 - lVar27 & 0xffffffff) / 0xc),local_170);
      }
      989snd::snd_Printf((char)*(undefined4 *)(iVar26 + -0x7f0c));
      989snd::snd_Printf((char)*(undefined4 *)(iVar26 + -0x7f08));
      goto LAB_00609dd8;
    }
    if (uVar31 != 4) goto LAB_00609da4;
    989snd::snd_Printf((char)*(undefined4 *)(iVar26 + -0x7f14));
    libc::memset(auStack_168,0,0x78);
LAB_0060a348:
    iVar29 = *(int *)(*(int *)(iVar26 + -0x7f04) + (int)(((ulonglong)bVar1 & 0x1f) << 2));
    if ((iVar29 == 0) || (puVar24 = *(undefined4 **)(iVar29 + 0x28), puVar24 == (undefined4 *)0x0))
    goto LAB_00609dd8;
    (*(code *)*puVar24)(pbVar28);
    989snd::snd_Printf((char)*(undefined4 *)(iVar26 + -0x7f00));
    if ((param_2 & 1) != 0) goto LAB_0060a3a4;
LAB_00609df0:
    FUN_0060842c(param_1,auStack_194);
  }
  if ((param_2 & 2) != 0) {
    989snd::snd_Printf((char)*(undefined4 *)(iVar26 + -0x7ee0));
  }
  if ((param_2 & 4) != 0) {
    989snd::snd_Printf((char)*(undefined4 *)(iVar26 + -0x7edc));
  }
  if ((param_2 & 8) != 0) {
    989snd::snd_Printf((char)*(undefined4 *)(iVar26 + -0x7ed8));
  }
  if ((param_2 & 0x10) != 0) {
    989snd::snd_Printf((char)*(undefined4 *)(iVar26 + -0x7ed4));
  }
  if ((param_2 & 0x20) != 0) {
    989snd::snd_Printf((char)*(undefined4 *)(iVar26 + -0x7ed0));
  }
  if ((param_2 & 0x40) != 0) {
    989snd::snd_Printf((char)*(undefined4 *)(iVar26 + -0x7ecc));
  }
  if ((param_2 & 0x80) != 0) {
    989snd::snd_Printf((char)*(undefined4 *)(iVar26 + -0x7ec8));
  }
  if ((param_2 & 0x100) != 0) {
    iVar29 = 0;
    989snd::snd_Printf((char)*(undefined4 *)(iVar26 + -0x7ec4));
    uVar30 = *(undefined4 *)(iVar26 + -0x7ec0);
    do {
      iVar29 = iVar29 + 1;
      989snd::snd_Printf((char)uVar30);
    } while (iVar29 != 4);
    989snd::snd_Printf((char)*(undefined4 *)(iVar26 + -0x7f00));
  }
  uVar30 = param_1;
  if ((param_2 & 0x200) != 0) {
    iVar29 = FUN_0061a5b8(pbVar28,0);
    if (iVar29 < 0) {
      989snd::snd_Printf((char)*(undefined4 *)(iVar26 + -0x7eb8));
    }
    else {
      989snd::snd_Printf((char)*(undefined4 *)(iVar26 + -0x7ebc));
      uVar2 = *(undefined4 *)(iVar26 + -0x7eb4);
      piVar3 = *(int **)(iVar26 + -0x7eac);
      uVar4 = *(undefined4 *)(iVar26 + -0x7eb0);
      uVar5 = *(undefined4 *)(iVar26 + -0x7ea0);
      uVar6 = *(undefined4 *)(iVar26 + -0x7ea8);
      uVar7 = *(undefined4 *)(iVar26 + -0x7e8c);
      uVar8 = *(undefined4 *)(iVar26 + -0x7ea4);
      uVar9 = *(undefined4 *)(iVar26 + -0x7e88);
      uVar10 = *(undefined4 *)(iVar26 + -0x7e9c);
      uVar11 = *(undefined4 *)(iVar26 + -0x7e7c);
      uVar12 = *(undefined4 *)(iVar26 + -0x7e98);
      uVar13 = *(undefined4 *)(iVar26 + -0x7e78);
      uVar14 = *(undefined4 *)(iVar26 + -0x7e94);
      uVar15 = *(undefined4 *)(iVar26 + -0x7e64);
      uVar16 = *(undefined4 *)(iVar26 + -0x7e60);
      uVar17 = *(undefined4 *)(iVar26 + -0x7e90);
      uVar18 = *(undefined4 *)(iVar26 + -0x7e5c);
      uVar19 = *(undefined4 *)(iVar26 + -0x7e58);
      uVar20 = *(undefined4 *)(iVar26 + -0x7e54);
      uVar21 = *(undefined4 *)(iVar26 + -0x7e50);
      uVar22 = *(undefined4 *)(iVar26 + -0x7e4c);
      uVar23 = *(undefined4 *)(iVar26 + -0x7e48);
      do {
        iVar25 = iVar29 * 0x68;
        989snd::snd_Printf((char)uVar2);
        989snd::snd_Printf((char)uVar4);
        989snd::snd_Printf((char)uVar6);
        989snd::snd_Printf((char)uVar8);
        989snd::snd_Printf((char)uVar5);
        989snd::snd_Printf((char)uVar10);
        989snd::snd_Printf((char)uVar12);
        989snd::snd_Printf((char)uVar14);
        989snd::snd_Printf((char)uVar17);
        989snd::snd_Printf((char)uVar7);
        989snd::snd_Printf((char)uVar9);
        if (*(int *)(iVar25 + *piVar3 + 0x28) == 0) {
          989snd::snd_Printf((char)*(undefined4 *)(iVar26 + -0x7e80));
        }
        else {
          989snd::snd_Printf((char)*(undefined4 *)(iVar26 + -0x7e84));
        }
        989snd::snd_Printf((char)uVar11);
        989snd::snd_Printf((char)uVar13);
        if (*(int *)(iVar25 + *piVar3 + 0x38) < 0) {
          989snd::snd_Printf((char)*(undefined4 *)(iVar26 + -0x7e74));
          if (-1 < *(int *)(iVar25 + *piVar3 + 0x3c)) goto LAB_00609fa0;
LAB_0060a2f0:
          989snd::snd_Printf((char)*(undefined4 *)(iVar26 + -0x7e6c));
        }
        else {
          989snd::snd_Printf((char)*(undefined4 *)(iVar26 + -0x7e70));
          if (*(int *)(iVar25 + *piVar3 + 0x3c) < 0) goto LAB_0060a2f0;
LAB_00609fa0:
          989snd::snd_Printf((char)*(undefined4 *)(iVar26 + -0x7e68));
        }
        989snd::snd_Printf((char)uVar15);
        989snd::snd_Printf((char)uVar16);
        989snd::snd_Printf((char)uVar18);
        989snd::snd_Printf((char)uVar19);
        989snd::snd_Printf((char)uVar20);
        989snd::snd_Printf((char)uVar21);
        989snd::snd_Printf((char)uVar22);
        989snd::snd_Printf((char)uVar23);
        FUN_0062be38(*(undefined4 *)(iVar25 + *piVar3 + 0x60));
        989snd::snd_Printf((char)*(undefined4 *)(iVar26 + -0x7f00));
        iVar29 = FUN_0061a5b8(pbVar28,iVar29 + 1);
      } while (-1 < iVar29);
    }
  }
LAB_00609e6c:
  989snd::snd_SynthUnlock();
  return uVar30;
}



//==== 0060a7e0  ns=Global  size=0xb0
// sig: undefined FUN_0060a7e0(void)
// callers(0): 
// callees(5): 00604918 FUN_00604918; 00609cf4 FUN_00609cf4; 0061948c 989snd::snd_Printf; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066a438: '\n-----***-----***------ ACTIVE SCREAM SOUNDS ------***-----***-----\n' | 0066a480: '\n------ tick %d had %d sounds playing --------------------\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060a7e0(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = _DAT_0071afe8;
  989snd::snd_SynthLock();
  puVar1 = (undefined4 *)**(undefined4 **)(iVar2 + -0x7f48);
  989snd::snd_Printf((char)*(undefined4 *)(iVar2 + -0x7e44));
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[0x89]) {
    FUN_00609cf4(*puVar1,param_1);
  }
  FUN_00604918();
  989snd::snd_Printf((char)*(undefined4 *)(iVar2 + -0x7e40));
  989snd::snd_SynthUnlock();
  return;
}



//==== 0060a890  ns=Global  size=0x124
// sig: undefined FUN_0060a890(void)
// callers(0): 
// callees(2): 00617d50 FUN_00617d50; 0061948c 989snd::snd_Printf
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp' | 0066a4c0: '%s(%d) : Invalid bank handle %x.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0060a890(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if ((int)param_1 - 1U < 0xfffffffe) {
    if ((*param_1 == 0x6b6c4253) && ((param_1[2] & 0x20U) != 0)) {
      uVar2 = FUN_00617d50(param_1,param_2,0xd8d);
      return uVar2;
    }
  }
  else {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) == '\0') {
      trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
      989snd::snd_Printf((char)*(undefined4 *)(iVar1 + -0x7e3c));
      return 0;
    }
  }
  return 0;
}



//==== 0060a9b4  ns=989snd  size=0x214
// sig: undefined snd_UnloadBank(void)
// callers(4): 0004fe38 sound::UnloadSoundBanks; 000def78 loaders::LoadLevelFiles; 00164c58 space::DoSpaceTransition; 00618a28 FUN_00618a28
// callees(8): 00617d50 FUN_00617d50; 00617e14 FUN_00617e14; 00618938 FUN_00618938; 00618aa8 FUN_00618aa8; 0061948c 989snd::snd_Printf; 00623288 FUN_00623288; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp' | 0066a580: '%s(%d) : Attempt to unload invalid bank handle %x.\n' | 0066a4e8: 'snd_UnloadBank(): Banks cannot be loaded or unloaded when a bank relocation is in progress!\n' | 0066a548: '%s(%d) : Attempt to unload unloaded bank handle %x.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 989snd::snd_UnloadBank(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_0071afe8;
  if (0xfffffffd < (int)param_1 - 1U) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar2 + -0x7fa0) == '\0') {
      trapWord(0x18,(ulonglong)**(byte **)(iVar2 + -0x7f9c),0);
      snd_Printf((char)*(undefined4 *)(iVar2 + -0x7e30));
    }
    return 0;
  }
  iVar1 = FUN_00623288();
  if (iVar1 != 0) {
    snd_Printf((char)*(undefined4 *)(iVar2 + -0x7e38));
    return 0;
  }
  if (*param_1 == 0x6b6c4253) {
    FUN_00618938(param_1);
    if (param_2 != 0) {
      while (iVar2 = FUN_00617d50(param_1), iVar2 == 0) {
        syscall();
      }
    }
    return 1;
  }
  iVar1 = FUN_00617e14(param_1);
  if (iVar1 == 0) {
    snd_Printf((char)*(undefined4 *)(iVar2 + -0x7e34));
    return 0;
  }
  snd_SynthLock();
  FUN_00618aa8(param_1);
  snd_SynthUnlock();
  return 1;
}



//==== 0060abc8  ns=Global  size=0x17c
// sig: undefined FUN_0060abc8(void)
// callers(2): 006187c8 FUN_006187c8; 00618aa8 FUN_00618aa8
// callees(5): 0060dcd8 FUN_0060dcd8; 0061948c 989snd::snd_Printf; 0061bfb0 FUN_0061bfb0; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060abc8(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = _DAT_0071afe8;
  if (param_1 == (int *)0x0) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar2 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar2 + -0x7f9c),0);
  }
  989snd::snd_SynthLock();
  if (*param_1 == 0x6b6c4253) {
    if (0 < *(short *)((int)param_1 + 0x16)) {
      iVar2 = 0;
      iVar3 = 0;
      do {
        iVar2 = iVar2 + 1;
        iVar1 = FUN_0060dcd8(param_1);
        iVar1 = iVar1 + iVar3;
        iVar3 = iVar3 + 0xc;
        FUN_0061bfb0(iVar1,param_2,0);
      } while (iVar2 < *(short *)((int)param_1 + 0x16));
    }
  }
  else {
    iVar2 = 0;
    iVar3 = 0;
    if (0 < *(short *)((int)param_1 + 0x16)) {
      do {
        iVar2 = iVar2 + 1;
        iVar1 = FUN_0060dcd8(param_1);
        iVar1 = iVar1 + iVar3;
        iVar3 = iVar3 + 0xc;
        FUN_0061bfb0(iVar1,param_2,0);
      } while (iVar2 < *(short *)((int)param_1 + 0x16));
    }
  }
  989snd::snd_SynthUnlock();
  return;
}



//==== 0060ad44  ns=Global  size=0x28
// sig: undefined FUN_0060ad44(void)
// callers(0): 
// callees(1): 00617870 FUN_00617870

undefined4 FUN_0060ad44(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00617870();
  return uVar1;
}



//==== 0060ad6c  ns=Global  size=0x9c
// sig: undefined FUN_0060ad6c(void)
// callers(0): 
// callees(2): 006183e4 FUN_006183e4; 0061948c 989snd::snd_Printf
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0060ad6c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if ((param_1 == 0) || (param_2 == 0)) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  uVar2 = FUN_006183e4(param_1,param_2);
  return uVar2;
}



//==== 0060ae08  ns=Global  size=0x84
// sig: undefined FUN_0060ae08(void)
// callers(0): 
// callees(2): 00618548 FUN_00618548; 0061948c 989snd::snd_Printf
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0060ae08(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if (param_1 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  uVar2 = FUN_00618548(param_1);
  return uVar2;
}



//==== 0060ae8c  ns=989snd  size=0xe8
// sig: undefined snd_BankLoadFromMemEx(void)
// callers(2): 00505b0c FUN_00505b0c; 00505b30 FUN_00505b30
// callees(3): 00617fb0 FUN_00617fb0; 0061948c 989snd::snd_Printf; 00623288 FUN_00623288
// strings: 0066a620: 'snd_BankLoadFromMemEx(): Bank address (0x%p) is not 16-byte aligned!\n' | 0066a5b8: 'snd_BankLoadFromMemEx(): Banks cannot be loaded or unloaded when a bank relocation is in progress!\n' | 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 989snd::snd_BankLoadFromMemEx(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = _DAT_0071afe8;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar2 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar2 + -0x7f9c),0);
  }
  iVar3 = FUN_00623288();
  if (iVar3 == 0) {
    puVar1 = *(undefined4 **)(iVar2 + -0x7fd0);
    *puVar1 = 0;
    if ((param_1 & 1) == 0) {
      uVar4 = FUN_00617fb0(param_1);
    }
    else {
      snd_Printf((char)*(undefined4 *)(iVar2 + -0x7e28));
      uVar4 = 0;
      *puVar1 = 0x103;
    }
  }
  else {
    snd_Printf((char)*(undefined4 *)(iVar2 + -0x7e2c));
    uVar4 = 0;
  }
  return uVar4;
}



//==== 0060af74  ns=989snd  size=0x128
// sig: undefined snd_BankLoadEx(void)
// callers(2): 00505bac FUN_00505bac; 00505c6c FUN_00505c6c
// callees(5): 00618e78 FUN_00618e78; 00618fac FUN_00618fac; 00619000 FUN_00619000; 0061948c 989snd::snd_Printf; 00623288 FUN_00623288
// strings: 0066a668: 'snd_BankLoadEx(): Banks cannot be loaded or unloaded when a bank relocation is in progress!\n' | 00669c48: 'common/api.cpp' | 00669c28: '%s(%d) : Invalid parameter.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 989snd::snd_BankLoadEx(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = _DAT_0071afe8;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  iVar2 = FUN_00623288();
  uVar3 = 0;
  if (iVar2 == 0) {
    iVar2 = FUN_00619000(param_1,param_2);
    if (iVar2 == 0) {
      **(undefined4 **)(iVar1 + -0x7fd0) = 0x100;
      return 0;
    }
    **(undefined4 **)(iVar1 + -0x7fd0) = 0;
    uVar3 = FUN_00618e78();
    FUN_00618fac();
  }
  else {
    snd_Printf((char)*(undefined4 *)(iVar1 + -0x7e24));
  }
  return uVar3;
}



//==== 0060b09c  ns=Global  size=0x40
// sig: undefined FUN_0060b09c(void)
// callers(0): 
// callees(1): 00615ef4 FUN_00615ef4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060b09c(void)

{
  if (**(char **)(_DAT_0071afe8 + -0x7fcc) == '\0') {
    FUN_00615ef4();
  }
  return;
}



//==== 0060b0dc  ns=Global  size=0xb0
// sig: undefined FUN_0060b0dc(void)
// callers(0): 
// callees(2): 00616608 FUN_00616608; 0061948c 989snd::snd_Printf
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0060b0dc(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = _DAT_0071afe8;
  if ((param_1 == 0) || (param_2 == (uint *)0x0)) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar2 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar2 + -0x7f9c),0);
  }
  uVar3 = FUN_00616608(param_1);
  *param_2 = uVar3;
  uVar1 = (int)~uVar3 >> 0x1f;
  return uVar1 - (uVar1 ^ ~uVar3) >> 0x1f;
}



//==== 0060b18c  ns=Global  size=0x28
// sig: undefined FUN_0060b18c(void)
// callers(0): 
// callees(1): 0061543c 989snd::snd_gmxGetActiveSnapshotCount

undefined4 FUN_0060b18c(void)

{
  undefined4 uVar1;
  
  uVar1 = 989snd::snd_gmxGetActiveSnapshotCount();
  return uVar1;
}



//==== 0060b1b4  ns=Global  size=0x84
// sig: undefined FUN_0060b1b4(void)
// callers(0): 
// callees(2): 006166f4 FUN_006166f4; 0061948c 989snd::snd_Printf
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0060b1b4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if (param_1 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  uVar2 = FUN_006166f4(param_1);
  return uVar2;
}



//==== 0060b238  ns=Global  size=0xb8
// sig: undefined FUN_0060b238(void)
// callers(0): 
// callees(2): 00615f20 989snd::snd_gmxDeactivateAllSnapshots; 0061948c 989snd::snd_Printf
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060b238(double param_1)

{
  int iVar1;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uStack00000008;
  
  iVar1 = _DAT_0071afe8;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  dVar2 = (double)*(float *)(_DAT_0071afe8 + -0x7fe0);
  dVar3 = dVar2;
  dVar4 = param_1;
  if (param_1 < dVar2) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  if (**(char **)(iVar1 + -0x7fcc) == '\0') {
    if (param_1 < dVar2) {
      dVar4 = dVar3;
    }
    989snd::snd_gmxDeactivateAllSnapshots(dVar4);
  }
  return;
}



//==== 0060b2f0  ns=Global  size=0xac
// sig: undefined FUN_0060b2f0(void)
// callers(0): 
// callees(2): 00616748 989snd::snd_gmxDeactivateSnapshotByName; 0061948c 989snd::snd_Printf
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0060b2f0(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if (param_2 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  uVar2 = 1;
  if (**(char **)(iVar1 + -0x7fcc) == '\0') {
    uVar2 = 989snd::snd_gmxDeactivateSnapshotByName(param_1,param_2);
  }
  return uVar2;
}



//==== 0060b39c  ns=Global  size=0xf8
// sig: undefined FUN_0060b39c(void)
// callers(0): 
// callees(2): 006167dc 989snd::snd_gmxActivateSnapshotByName; 0061948c 989snd::snd_Printf
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0060b39c(double param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if (((param_3 == 0) || (param_1 <= (double)*(float *)(_DAT_0071afe8 + -0x7fe0))) ||
     ((double)*(float *)(_DAT_0071afe8 + -0x7f70) < param_1)) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  if (**(char **)(iVar1 + -0x7fcc) != '\0') {
    return 1;
  }
  uVar2 = 989snd::snd_gmxActivateSnapshotByName(param_1,param_2,param_3);
  return uVar2;
}



//==== 0060b494  ns=Global  size=0x80
// sig: undefined FUN_0060b494(void)
// callers(0): 
// callees(2): 0061948c 989snd::snd_Printf; 0061cf18 FUN_0061cf18
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0060b494(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if (0x1f < param_1) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  uVar2 = FUN_0061cf18(param_1);
  return uVar2;
}



//==== 0060b514  ns=Global  size=0x80
// sig: undefined FUN_0060b514(void)
// callers(0): 
// callees(2): 0061948c 989snd::snd_Printf; 0061cef8 FUN_0061cef8
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0060b514(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if (0x1f < param_1) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  uVar2 = FUN_0061cef8(param_1);
  return uVar2;
}



//==== 0060b594  ns=989snd  size=0x120
// sig: undefined snd_SetMasterVolumeDucker(void)
// callers(2): 00505fa8 FUN_00505fa8; 006112d8 FUN_006112d8
// callees(2): 0061948c 989snd::snd_Printf; 0061e448 FUN_0061e448
// strings: 0066a6c8: 'snd_SetMasterVolumeDucker():  Invalid ducking amount -- the ducking amount will be clamped.\n' | 0066a780: 'snd_SetMasterVolumeDucker():  Invalid release time -- the release time will be clamped.\n' | 0066a728: 'snd_SetMasterVolumeDucker():  Invalid attack time -- the attack time will be clamped.\n' | 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void 989snd::snd_SetMasterVolumeDucker(uint param_1,int param_2)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if (0x1f < param_1) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  if (param_2 != 0) {
    if ((*(float *)(param_2 + 8) < *(float *)(iVar1 + -0x7fe0)) ||
       (*(float *)(iVar1 + -0x7f70) < *(float *)(param_2 + 8))) {
      snd_Printf((char)*(undefined4 *)(iVar1 + -0x7e20));
    }
    if ((*(float *)(param_2 + 0xc) < *(float *)(iVar1 + -0x7fe0)) ||
       (*(float *)(iVar1 + -0x7e1c) < *(float *)(param_2 + 0xc))) {
      snd_Printf((char)*(undefined4 *)(iVar1 + -0x7e14));
    }
    if ((*(float *)(param_2 + 0x10) < *(float *)(iVar1 + -0x7fe0)) ||
       (*(float *)(iVar1 + -0x7e1c) < *(float *)(param_2 + 0x10))) {
      snd_Printf((char)*(undefined4 *)(iVar1 + -0x7e10));
    }
  }
  FUN_0061e448(param_1,param_2);
  return;
}



//==== 0060b6b4  ns=989snd  size=0x12c
// sig: undefined snd_SetMasterVolume(void)
// callers(3): 00505f58 sound::sound_SetMasterVolume; 0060c448 FUN_0060c448; 0060c518 FUN_0060c518
// callees(2): 0061948c 989snd::snd_Printf; 0061ee38 989snd::snd_UpdateGroupOrMasterVolume
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp' | 0066a7e0: '%s(%d) : Setting MASTER_VOLUME_EXTERNAL has no effect.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void 989snd::snd_SetMasterVolume(double param_1,uint param_2)

{
  int iVar1;
  double dVar2;
  
  iVar1 = _DAT_0071afe8;
  if ((((0x20 < param_2) || (param_2 == 0x1f)) ||
      (param_1 < (double)*(float *)(_DAT_0071afe8 + -0x7fe0))) ||
     (dVar2 = (double)*(float *)(_DAT_0071afe8 + -0x7f70), dVar2 < param_1)) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
    dVar2 = (double)*(float *)(iVar1 + -0x7f70);
  }
  if ((param_1 <= dVar2) && (dVar2 = (double)*(float *)(iVar1 + -0x7fe0), dVar2 <= param_1)) {
    dVar2 = param_1;
  }
  if (param_2 != 0x1f) {
    if (**(char **)(iVar1 + -0x7fc8) != '\0') {
      return;
    }
    snd_UpdateGroupOrMasterVolume(dVar2,param_2);
    return;
  }
  snd_Printf((char)*(undefined4 *)(iVar1 + -0x7e0c));
  return;
}



//==== 0060b7e0  ns=Global  size=0x7c
// sig: undefined FUN_0060b7e0(void)
// callers(0): 
// callees(2): 0061948c 989snd::snd_Printf; 0061db74 FUN_0061db74
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060b7e0(double param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if (0x20 < param_2) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    param_1 = (double)*(float *)(iVar1 + -0x7fe0);
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  FUN_0061db74(param_1,param_2);
  return;
}



//==== 0060b85c  ns=Global  size=0x44
// sig: undefined FUN_0060b85c(void)
// callers(0): 
// callees(3): 0061ecdc FUN_0061ecdc; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock

void FUN_0060b85c(undefined4 param_1)

{
  989snd::snd_SynthLock();
  FUN_0061ecdc(param_1);
  989snd::snd_SynthUnlock();
  return;
}



//==== 0060b8a0  ns=Global  size=0x44
// sig: undefined FUN_0060b8a0(void)
// callers(0): 
// callees(3): 0061ec2c FUN_0061ec2c; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock

void FUN_0060b8a0(undefined4 param_1)

{
  989snd::snd_SynthLock();
  FUN_0061ec2c(param_1);
  989snd::snd_SynthUnlock();
  return;
}



//==== 0060b8e4  ns=Global  size=0x44
// sig: undefined FUN_0060b8e4(void)
// callers(0): 
// callees(3): 0061ed8c FUN_0061ed8c; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock

void FUN_0060b8e4(undefined4 param_1)

{
  989snd::snd_SynthLock();
  FUN_0061ed8c(param_1);
  989snd::snd_SynthUnlock();
  return;
}



//==== 0060b928  ns=Global  size=0xa4
// sig: undefined FUN_0060b928(void)
// callers(0): 
// callees(2): 0061948c 989snd::snd_Printf; 0061ef28 FUN_0061ef28
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060b928(uint param_1,int param_2)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if (((0x1f < param_1) || (param_2 < -1)) || (**(int **)(_DAT_0071afe8 + -0x7e08) <= param_2)) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  FUN_0061ef28(param_1,param_2);
  return;
}



//==== 0060b9cc  ns=989snd  size=0xbc
// sig: undefined snd_SetGroupVoiceRange(void)
// callers(1): 0015bc00 sound::sound_Init
// callees(2): 0061948c 989snd::snd_Printf; 0061ef88 FUN_0061ef88
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void 989snd::snd_SetGroupVoiceRange(uint param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if ((((0x1f < param_1) || (param_2 < 0)) || (**(int **)(_DAT_0071afe8 + -0x7ff8) <= param_3)) ||
     (param_3 < param_2)) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  FUN_0061ef88(param_1,param_2,param_3);
  return;
}



//==== 0060ba88  ns=Global  size=0x108
// sig: undefined FUN_0060ba88(void)
// callers(0): 
// callees(5): 0061948c 989snd::snd_Printf; 00619848 FUN_00619848; 0061b86c FUN_0061b86c; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060ba88(uint param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = _DAT_0071afe8;
  if (param_1 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  989snd::snd_SynthLock();
  for (piVar2 = (int *)FUN_00619848(); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0x89]) {
    while (((1 << ((int)*(char *)(piVar2 + 4) & 0x3fU) & param_1) != 0 && (*piVar2 < 0))) {
      FUN_0061b86c(piVar2,1,param_2,0);
      piVar2 = (int *)piVar2[0x89];
      if (piVar2 == (int *)0x0) goto LAB_0060bb64;
    }
  }
LAB_0060bb64:
  989snd::snd_SynthUnlock();
  return;
}



//==== 0060bb90  ns=Global  size=0xfc
// sig: undefined FUN_0060bb90(void)
// callers(4): 00079b18 freeze::UpdateFreeze; 0013b838 pause::UpdatePause; 0016b038 vendor::Vendor_EndWeaponCutscene; 0016ba38 vendor::Vendor_RestoreHero
// callees(5): 0061948c 989snd::snd_Printf; 00619848 FUN_00619848; 0061af44 FUN_0061af44; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060bb90(uint param_1)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if (param_1 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  989snd::snd_SynthLock();
  for (iVar1 = FUN_00619848(); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x224)) {
    while (((1 << ((int)*(char *)(iVar1 + 0x10) & 0x3fU) & param_1) != 0 &&
           ((*(uint *)(iVar1 + 4) & 2) != 0))) {
      FUN_0061af44(iVar1,1,2);
      iVar1 = *(int *)(iVar1 + 0x224);
      if (iVar1 == 0) goto LAB_0060bc64;
    }
  }
LAB_0060bc64:
  989snd::snd_SynthUnlock();
  return;
}



//==== 0060bc8c  ns=Global  size=0xfc
// sig: undefined FUN_0060bc8c(void)
// callers(4): 00078178 freeze::DisplayPrompt; 0013abcc pause::BeginMenu; 0016a8f0 vendor::Spawn_Moby11_Vendor; 0016b650 vendor::StartGadgetPickupCutscene
// callees(5): 0061948c 989snd::snd_Printf; 00619848 FUN_00619848; 0061b0c8 FUN_0061b0c8; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060bc8c(uint param_1)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if (param_1 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  989snd::snd_SynthLock();
  for (iVar1 = FUN_00619848(); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x224)) {
    while (((1 << ((int)*(char *)(iVar1 + 0x10) & 0x3fU) & param_1) != 0 &&
           ((*(uint *)(iVar1 + 4) & 2) == 0))) {
      FUN_0061b0c8(iVar1,1,2);
      iVar1 = *(int *)(iVar1 + 0x224);
      if (iVar1 == 0) goto LAB_0060bd60;
    }
  }
LAB_0060bd60:
  989snd::snd_SynthUnlock();
  return;
}



//==== 0060bd88  ns=Global  size=0xac
// sig: undefined FUN_0060bd88(void)
// callers(0): 
// callees(5): 0061948c 989snd::snd_Printf; 0061e788 FUN_0061e788; 0061e854 FUN_0061e854; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 00669c48: 'common/api.cpp' | 00669c28: '%s(%d) : Invalid parameter.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060bd88(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if (param_1 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  989snd::snd_SynthLock();
  if (param_2 == 0) {
    FUN_0061e788(param_1);
  }
  else {
    FUN_0061e854(param_1);
  }
  989snd::snd_SynthUnlock();
  return;
}



//==== 0060be34  ns=Global  size=0xac
// sig: undefined FUN_0060be34(void)
// callers(0): 
// callees(5): 0061948c 989snd::snd_Printf; 0061e91c FUN_0061e91c; 0061e9e8 FUN_0061e9e8; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 00669c48: 'common/api.cpp' | 00669c28: '%s(%d) : Invalid parameter.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060be34(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if (param_1 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  989snd::snd_SynthLock();
  if (param_2 == 0) {
    FUN_0061e91c(param_1);
  }
  else {
    FUN_0061e9e8(param_1);
  }
  989snd::snd_SynthUnlock();
  return;
}



//==== 0060bee0  ns=Global  size=0xf8
// sig: undefined FUN_0060bee0(void)
// callers(0): 
// callees(6): 0061948c 989snd::snd_Printf; 00619848 FUN_00619848; 0061af44 FUN_0061af44; 0061eab0 FUN_0061eab0; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060bee0(uint param_1)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if (param_1 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  989snd::snd_SynthLock();
  FUN_0061eab0(param_1);
  for (iVar1 = FUN_00619848(); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x224)) {
    while ((1 << ((int)*(char *)(iVar1 + 0x10) & 0x3fU) & param_1) != 0) {
      FUN_0061af44(iVar1,1,4);
      iVar1 = *(int *)(iVar1 + 0x224);
      if (iVar1 == 0) goto LAB_0060bfb0;
    }
  }
LAB_0060bfb0:
  989snd::snd_SynthUnlock();
  return;
}



//==== 0060bfd8  ns=Global  size=0xf8
// sig: undefined FUN_0060bfd8(void)
// callers(0): 
// callees(6): 0061948c 989snd::snd_Printf; 00619848 FUN_00619848; 0061b0c8 FUN_0061b0c8; 0061eb70 FUN_0061eb70; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060bfd8(uint param_1)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if (param_1 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  989snd::snd_SynthLock();
  FUN_0061eb70(param_1);
  for (iVar1 = FUN_00619848(); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x224)) {
    while ((1 << ((int)*(char *)(iVar1 + 0x10) & 0x3fU) & param_1) != 0) {
      FUN_0061b0c8(iVar1,1,4);
      iVar1 = *(int *)(iVar1 + 0x224);
      if (iVar1 == 0) goto LAB_0060c0a8;
    }
  }
LAB_0060c0a8:
  989snd::snd_SynthUnlock();
  return;
}



//==== 0060c0d0  ns=Global  size=0x24
// sig: undefined FUN_0060c0d0(void)
// callers(2): 000def78 loaders::LoadLevelFiles; 0015d8b4 sound::sound_StopAllSounds
// callees(1): 0061c114 FUN_0061c114

void FUN_0060c0d0(void)

{
  FUN_0061c114();
  return;
}



//==== 0060c0f4  ns=Global  size=0x24
// sig: undefined FUN_0060c0f4(void)
// callers(0): 
// callees(1): 00619180 FUN_00619180

void FUN_0060c0f4(void)

{
  FUN_00619180();
  return;
}



//==== 0060c118  ns=Global  size=0x1d4
// sig: undefined FUN_0060c118(void)
// callers(2): 00506048 FUN_00506048; 0060c518 FUN_0060c518
// callees(2): 0061948c 989snd::snd_Printf; 0062a4c8 989snd::snd_SynthSetSpeakerMode
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0060c118(uint param_1,int param_2)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  char asdf;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  
  iVar6 = _DAT_0071afe8;
  if (param_1 == 6) {
    asdf = (char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8);
  }
  else {
    if (param_1 < 5) {
      if (param_2 != 0) {
        pcVar2 = *(char **)(_DAT_0071afe8 + -0x7fa0);
        uVar8 = 0x168;
        pbVar3 = *(byte **)(_DAT_0071afe8 + -0x7f9c);
        uVar10 = 1;
        iVar9 = 0;
        do {
          uVar4 = *(uint *)((int)((uVar10 & 0xffffffff) << 2) + param_2);
          if (uVar4 < uVar8) {
            if (uVar4 != 0) {
              uVar8 = uVar4;
            }
          }
          else {
            989snd::snd_Printf((char)*(undefined4 *)(iVar6 + -0x7fa8));
            if (*pcVar2 != '\0') goto LAB_0060c29c;
            bVar1 = *pbVar3;
            if (bVar1 != 0) {
              trapWord(0x1f,(ulonglong)bVar1,(ulonglong)bVar1);
              goto LAB_0060c218;
            }
          }
          if (iVar9 == 6) break;
          uVar10 = uVar10 + 1;
          iVar9 = iVar9 + 1;
          uVar5 = (uVar10 & 0xffffffff) * 0x24924925 >> 0x20;
          uVar5 = (uVar5 + ((uVar10 - uVar5 << 0x20) >> 0x21) << 0x20) >> 0x22;
          uVar10 = uVar10 - ((uVar5 & 0x1fffffff) * 8 - uVar5);
        } while ((uVar10 & 0xffffffff) < 7);
      }
      goto LAB_0060c248;
    }
LAB_0060c218:
    asdf = (char)*(undefined4 *)(iVar6 + -0x7fa8);
  }
  989snd::snd_Printf(asdf);
  if (**(char **)(iVar6 + -0x7fa0) != '\0') {
LAB_0060c29c:
    return **(undefined4 **)(iVar6 + -0x7ff4);
  }
  trapWord(0x18,(ulonglong)**(byte **)(iVar6 + -0x7f9c),0);
LAB_0060c248:
  uVar7 = 989snd::snd_SynthSetSpeakerMode(param_1,param_2);
  **(undefined4 **)(iVar6 + -0x7ff4) = uVar7;
  return uVar7;
}



//==== 0060c2ec  ns=Global  size=0x28
// sig: undefined FUN_0060c2ec(void)
// callers(0): 
// callees(1): 006246c4 FUN_006246c4

undefined4 FUN_0060c2ec(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_006246c4();
  return uVar1;
}



//==== 0060c314  ns=Global  size=0x80
// sig: undefined FUN_0060c314(void)
// callers(0): 
// callees(2): 0061948c 989snd::snd_Printf; 0061cf38 FUN_0061cf38
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0060c314(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if (4 < param_1) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  uVar2 = FUN_0061cf38(param_1);
  return uVar2;
}



//==== 0060c394  ns=Global  size=0xb4
// sig: undefined FUN_0060c394(void)
// callers(0): 
// callees(2): 0061948c 989snd::snd_Printf; 0062f048 FUN_0062f048
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060c394(double param_1,uint param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = _DAT_0071afe8;
  if (7 < param_2) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    param_1 = (double)*(float *)(iVar1 + -0x7fe0);
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  uVar2 = (ulonglong)((int)param_3 >> 0x1f);
  uVar3 = (ulonglong)((int)param_4 >> 0x1f);
  FUN_0062f048(param_1,param_2,uVar2 - (uVar2 ^ param_3) >> 0x1f & 1,
               uVar3 - (uVar3 ^ param_4) >> 0x1f & 1);
  return;
}



//==== 0060c448  ns=Global  size=0xd0
// sig: undefined FUN_0060c448(void)
// callers(2): 005057a0 FUN_005057a0; 005066e0 FUN_005066e0
// callees(7): 0060b6b4 989snd::snd_SetMasterVolume; 00616540 FUN_00616540; 006176ec FUN_006176ec; 00618a28 FUN_00618a28; 0061cdc8 FUN_0061cdc8; 00627334 FUN_00627334; 00627448 FUN_00627448

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0060c448(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = _DAT_0071afe8;
  uVar4 = 0xfffffffe;
  piVar1 = *(int **)(_DAT_0071afe8 + -0x8000);
  if (*piVar1 != -1) {
    FUN_00618a28();
    FUN_00627448();
    989snd::snd_SetMasterVolume((double)*(float *)(iVar3 + -0x7fe0),0x20);
    FUN_006176ec();
    *piVar1 = -1;
    FUN_00616540();
    FUN_00627334();
    FUN_0061cdc8();
    piVar1 = *(int **)(iVar3 + -0x7e04);
    uVar4 = 0;
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      (**(code **)**(undefined4 **)(iVar3 + -0x7f98))(iVar2);
      uVar4 = 0;
      *piVar1 = 0;
    }
  }
  return uVar4;
}



//==== 0060c518  ns=Global  size=0x520
// sig: undefined FUN_0060c518(void)
// callers(1): 00505810 FUN_00505810
// callees(19): 005d0140 libc::memset; 0060b6b4 989snd::snd_SetMasterVolume; 0060c118 FUN_0060c118; 0060cc14 FUN_0060cc14; 0060cef8 FUN_0060cef8; 0060d118 FUN_0060d118; 0060d390 FUN_0060d390; 00616378 989snd::snd_InitGroupMixer; 00616540 FUN_00616540; 0061768c FUN_0061768c; 006176ec FUN_006176ec; 0061948c 989snd::snd_Printf; 00619f60 FUN_00619f60; 0061c97c FUN_0061c97c; 0061cdc8 FUN_0061cdc8; 00622094 989snd::snd_InitVoiceAllocator; 0062a4c8 989snd::snd_SynthSetSpeakerMode; 0062c52c FUN_0062c52c; 0062f4b8 989snd::snd_SynthInit
// strings: 0066a818: '%s(%d) : External memory functions are required for this platform.\n' | 00669c48: 'common/api.cpp' | 00669c28: '%s(%d) : Invalid parameter.\n' | 0066a860: 'SCREAM Version %d.%d.%d ' | 0066a8a8: '12:14:27' | 0066a880: 'Built on %s at %s\n' | 0066a898: 'Mar  6 2012'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0060c518(uint *param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  char cVar18;
  int iVar19;
  float *pfVar21;
  ulonglong uVar20;
  int iVar22;
  longlong lVar23;
  ulonglong uVar24;
  double dVar25;
  
  iVar15 = _DAT_0071afe8;
  if ((param_1 == (uint *)0x0) || (param_1[0xb] == 0)) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar15 + -0x7fa0) != '\0') {
      return 0xfffffffc;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar15 + -0x7f9c),0);
    if (param_1[0xb] == 0) {
      return 0xfffffffd;
    }
  }
  piVar4 = *(int **)(iVar15 + -0x8000);
  uVar17 = 0xffffffff;
  if (*piVar4 == -1) {
    puVar5 = *(undefined1 **)(iVar15 + -0x7fc8);
    uVar6 = param_1[7];
    **(undefined1 **)(iVar15 + -0x7fcc) = 0;
    *puVar5 = 0;
    if ((uVar6 == 0) || (param_1[8] == 0)) {
      989snd::snd_Printf((char)*(undefined4 *)(iVar15 + -0x7dfc));
      return 0xffffffff;
    }
    puVar7 = *(uint **)(iVar15 + -0x7f7c);
    puVar8 = *(undefined4 **)(iVar15 + -0x7e00);
    iVar19 = 0;
    puVar9 = *(undefined4 **)(iVar15 + -0x7fc4);
    lVar23 = 0x20;
    puVar10 = *(undefined4 **)(iVar15 + -0x7fc0);
    pfVar21 = *(float **)(iVar15 + -0x7fd4);
    puVar11 = *(undefined4 **)(iVar15 + -0x7fd8);
    fVar2 = *(float *)(iVar15 + -0x7f70);
    dVar25 = (double)fVar2;
    iVar22 = *(int *)(iVar15 + -0x7f94);
    iVar16 = *(int *)(iVar15 + -0x7f90);
    **(uint **)(iVar15 + -0x7f98) = param_1[8];
    *puVar11 = 0;
    *puVar7 = uVar6;
    *puVar8 = 0;
    *puVar9 = 0;
    *puVar10 = 0;
    *pfVar21 = fVar2;
    do {
      pfVar21 = (float *)(iVar19 + iVar22);
      puVar8 = (undefined4 *)(iVar19 + iVar16);
      iVar19 = iVar19 + 4;
      *pfVar21 = fVar2;
      *puVar8 = 0;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    FUN_0061c97c(0);
    fVar2 = (float)param_1[6];
    fVar3 = *(float *)(iVar15 + -0x7fe0);
    puVar12 = *(uint **)(iVar15 + -0x7df8);
    pbVar13 = *(byte **)(iVar15 + -0x7fa0);
    pbVar14 = *(byte **)(iVar15 + -0x7f9c);
    uVar6 = *param_1;
    **(uint **)(iVar15 + -0x7df4) = param_1[2];
    *puVar12 = uVar6 >> 1 & 1;
    *pbVar13 = (byte)(uVar6 >> 2) & 1;
    *pbVar14 = (byte)(uVar6 >> 3) & 1;
    uVar17 = 0;
    if (fVar3 < fVar2) {
      uVar17 = (undefined4)(longlong)(fVar2 * *(float *)(iVar15 + -0x7fec));
    }
    puVar12 = *(uint **)(iVar15 + -0x7df0);
    puVar8 = *(undefined4 **)(iVar15 + -0x7fe4);
    puVar9 = (undefined4 *)*puVar7;
    uVar6 = param_1[0x17];
    *puVar12 = uVar6;
    *puVar8 = uVar17;
    uVar17 = (*(code *)*puVar9)(uVar6 << 2,0);
    uVar6 = *puVar12;
    **(undefined4 **)(iVar15 + -0x7e04) = uVar17;
    libc::memset(uVar17,0,((ulonglong)uVar6 & 0x3fffffff) << 2);
    if ((float)param_1[3] <= *(float *)(iVar15 + -0x7fe0)) {
      **(undefined4 **)(iVar15 + -0x7dec) = 0;
    }
    else {
      uVar24 = (ulonglong)((float)param_1[3] * *(float *)(iVar15 + -0x7fec));
      iVar16 = (int)uVar24;
      iVar22 = 1;
      if ((iVar16 != 0) && (iVar22 = iVar16, 0xf0 < (uVar24 & 0xffffffff))) {
        iVar22 = 0xf0;
      }
      **(int **)(iVar15 + -0x7dec) = iVar22;
    }
    if ((float)param_1[4] <= *(float *)(iVar15 + -0x7fe0)) {
      **(undefined4 **)(iVar15 + -0x7de8) = 0;
    }
    else {
      uVar24 = (ulonglong)((float)param_1[4] * *(float *)(iVar15 + -0x7fec));
      iVar16 = (int)uVar24;
      iVar22 = 1;
      if ((iVar16 != 0) && (iVar22 = iVar16, 0xf0 < (uVar24 & 0xffffffff))) {
        iVar22 = 0xf0;
      }
      **(int **)(iVar15 + -0x7de8) = iVar22;
    }
    if ((float)param_1[5] <= *(float *)(iVar15 + -0x7fe0)) {
      **(undefined4 **)(iVar15 + -0x7de4) = 0;
    }
    else {
      uVar24 = (ulonglong)((float)param_1[5] * *(float *)(iVar15 + -0x7fec));
      iVar16 = (int)uVar24;
      iVar22 = 1;
      if ((iVar16 != 0) && (iVar22 = iVar16, 0xf0 < (uVar24 & 0xffffffff))) {
        iVar22 = 0xf0;
      }
      **(int **)(iVar15 + -0x7de4) = iVar22;
    }
    uVar6 = *param_1;
    **(uint **)(iVar15 + -0x7de0) = param_1[9];
    cVar18 = 989snd::snd_SynthInit(uVar6,param_1 + 10);
    uVar17 = 0xfffffffc;
    if (cVar18 != '\0') {
      FUN_0061768c();
      uVar24 = ~(ulonglong)param_1[0x1a];
      uVar20 = (ulonglong)((int)uVar24 >> 0x1f);
      989snd::snd_InitGroupMixer
                (param_1[0x1a],param_1[0x19],((uVar20 ^ uVar24) - uVar20) - 1 >> 0x1f & 1);
      cVar18 = 989snd::snd_InitVoiceAllocator(param_1);
      uVar17 = 0xfffffffc;
      if (cVar18 != '\0') {
        FUN_00619f60();
        FUN_0060d390();
        FUN_0060cc14();
        FUN_0060cef8();
        FUN_0060d118();
        cVar18 = FUN_0062c52c();
        if (cVar18 == '\0') {
          FUN_00616540();
          FUN_0061cdc8();
          FUN_006176ec();
          uVar17 = 0xfffffffc;
        }
        else {
          uVar6 = param_1[1];
          *piVar4 = 1;
          if (uVar6 == 6) {
            989snd::snd_SynthSetSpeakerMode(**(undefined4 **)(iVar15 + -0x7ff4),0);
          }
          else {
            FUN_0060c118(uVar6,0);
          }
          iVar22 = 0;
          do {
            989snd::snd_SetMasterVolume(dVar25,iVar22);
            bVar1 = iVar22 != 0x1e;
            iVar22 = iVar22 + 1;
          } while (bVar1);
          989snd::snd_SetMasterVolume(dVar25,0x20);
          989snd::snd_Printf((char)*(undefined4 *)(iVar15 + -0x7ddc));
          989snd::snd_Printf((char)*(undefined4 *)(iVar15 + -0x7dd8));
          uVar17 = 0;
        }
      }
    }
  }
  return uVar17;
}



//==== 0060ca38  ns=Global  size=0xd0
// sig: undefined FUN_0060ca38(void)
// callers(1): 00505810 FUN_00505810
// callees(2): 0061948c 989snd::snd_Printf; 006246d8 FUN_006246d8
// strings: 00669c48: 'common/api.cpp' | 00669c28: '%s(%d) : Invalid parameter.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060ca38(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = _DAT_0071afe8;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(_DAT_0071afe8 + -0x7dc4);
    uVar2 = *(undefined4 *)(_DAT_0071afe8 + -0x7f70);
    *param_1 = 4;
    param_1[1] = 6;
    param_1[3] = *(undefined4 *)(iVar3 + -0x7dcc);
    param_1[2] = 10;
    param_1[0x17] = 0x400;
    param_1[5] = uVar1;
    param_1[6] = uVar2;
    param_1[0x18] = 0xc0;
    param_1[0x1b] = 0;
    param_1[0x19] = 0x20;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0x1a] = 0;
    param_1[4] = uVar1;
    FUN_006246d8(param_1 + 10,param_2,0x14c);
    return;
  }
  989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
  return;
}



//==== 0060cb08  ns=Global  size=0xec
// sig: undefined FUN_0060cb08(void)
// callers(0): 
// callees(3): 0061948c 989snd::snd_Printf; 006223a0 FUN_006223a0; 00622fbc FUN_00622fbc
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0060cb08(int param_1)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if (param_1 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  iVar1 = (**(code **)**(undefined4 **)(iVar1 + -0x7f7c))(0x10,3);
  if (iVar1 != 0) {
    FUN_006223a0(iVar1);
    FUN_00622fbc(iVar1,param_1);
  }
  return iVar1;
}



//==== 0060cc14  ns=Global  size=0x3c
// sig: undefined FUN_0060cc14(void)
// callers(1): 0060c518 FUN_0060c518
// callees(0): 

void FUN_0060cc14(void)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = 0x40;
  uVar1 = *(undefined4 *)(PTR_PTR_0071afec + -0x7ffc);
  iVar2 = *(int *)(PTR_PTR_0071afec + -0x8000);
  do {
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 0x10) = uVar1;
    *(undefined4 *)(iVar2 + 8) = 0;
    lVar3 = lVar3 + -1;
    iVar2 = iVar2 + 0x28;
  } while (lVar3 != 0);
  return;
}



//==== 0060cc50  ns=Global  size=0x74
// sig: undefined FUN_0060cc50(void)
// callers(3): 00609078 FUN_00609078; 0060cc50 FUN_0060cc50; 0060ccc4 FUN_0060ccc4
// callees(1): 0060cc50 FUN_0060cc50

void FUN_0060cc50(int param_1,undefined4 param_2)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x22c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x230)) {
    FUN_0060cc50(iVar1,param_2);
  }
  *(undefined4 *)(param_1 + 0x138) = param_2;
  return;
}



//==== 0060ccc4  ns=Global  size=0x234
// sig: undefined FUN_0060ccc4(void)
// callers(0): 
// callees(5): 0060cc50 FUN_0060cc50; 0061948c 989snd::snd_Printf; 0061a34c FUN_0061a34c; 0061addc FUN_0061addc; 0061c628 FUN_0061c628
// strings: 0066a8b8: '%s(%d) : Invalid parameter.\n' | 0066a8d8: 'common/autopan.cpp'

uint FUN_0060ccc4(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  undefined *puVar6;
  undefined1 auStack_110 [240];
  
  puVar6 = PTR_PTR_0071afec;
  if ((param_1 == 0) || (param_2 == 0)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071afec + -0x7ff8));
    if (**(char **)(puVar6 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar6 + -0x7fec),0);
  }
  uVar4 = *(uint *)(param_1 + 0x24);
  if ((uVar4 & 4) == 0) {
    fVar1 = *(float *)(param_1 + 0x20);
    fVar2 = *(float *)(param_1 + 0x18);
    if (fVar1 < fVar2) {
      fVar5 = *(float *)(puVar6 + -0x7fe8) - (fVar2 - fVar1);
    }
    else {
      fVar5 = fVar1 - fVar2;
    }
    fVar3 = *(float *)(param_1 + 0x1c);
    if (fVar3 < fVar2) {
      fVar3 = *(float *)(puVar6 + -0x7fe8) - (fVar2 - fVar3);
    }
    else {
      fVar3 = fVar3 - fVar2;
    }
  }
  else {
    fVar1 = *(float *)(param_1 + 0x20);
    fVar3 = *(float *)(param_1 + 0x18);
    if (fVar1 <= fVar3) {
      fVar5 = fVar3 - fVar1;
    }
    else {
      fVar5 = *(float *)(puVar6 + -0x7fe8) - (fVar1 - fVar3);
    }
    fVar2 = *(float *)(param_1 + 0x1c);
    if (fVar3 < fVar2) {
      if (fVar5 < *(float *)(puVar6 + -0x7fe8) - (fVar2 - fVar3)) goto LAB_0060cdc4;
      goto LAB_0060cd4c;
    }
    fVar3 = fVar3 - fVar2;
  }
  if (fVar5 < fVar3) {
LAB_0060cdc4:
    fVar1 = fVar1 + *(float *)(param_1 + 0x14);
    fVar3 = *(float *)(puVar6 + -0x7fe8);
    *(float *)(param_1 + 0x20) = fVar1;
    if (fVar3 <= fVar1) {
      *(float *)(param_1 + 0x20) = fVar1 - fVar3;
    }
    if (*(float *)(param_1 + 0x20) < *(float *)(puVar6 + -0x7fe0)) {
      *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + fVar3;
    }
    if ((uVar4 & 0x20) == 0) {
      FUN_0061c628(param_2,auStack_110);
    }
    else {
      FUN_0060cc50(param_2,(longlong)*(float *)(param_1 + 0x20) & 0xffffffff);
    }
    FUN_0061addc(param_2);
    return 0;
  }
LAB_0060cd4c:
  FUN_0061a34c(param_2,4);
  return uVar4 & 1;
}



//==== 0060cef8  ns=Global  size=0x3c
// sig: undefined FUN_0060cef8(void)
// callers(1): 0060c518 FUN_0060c518
// callees(0): 

void FUN_0060cef8(void)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = 0x40;
  uVar1 = *(undefined4 *)(PTR_PTR_0071aff0 + -0x8000);
  iVar2 = *(int *)(PTR_PTR_0071aff0 + -0x7ffc);
  do {
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 0x10) = uVar1;
    *(undefined4 *)(iVar2 + 8) = 0;
    lVar3 = lVar3 + -1;
    iVar2 = iVar2 + 0x24;
  } while (lVar3 != 0);
  return;
}



//==== 0060cf34  ns=Global  size=0x68
// sig: undefined FUN_0060cf34(void)
// callers(3): 00608924 FUN_00608924; 0060cf34 FUN_0060cf34; 0060cf9c FUN_0060cf9c
// callees(1): 0060cf34 FUN_0060cf34

void FUN_0060cf34(double param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_2 + 0x22c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x230)) {
    FUN_0060cf34(param_1,iVar1);
  }
  *(float *)(param_2 + 0x160) = (float)param_1;
  return;
}



//==== 0060cf9c  ns=Global  size=0x17c
// sig: undefined FUN_0060cf9c(void)
// callers(0): 
// callees(5): 0060cf34 FUN_0060cf34; 0061948c 989snd::snd_Printf; 0061a34c FUN_0061a34c; 0061ad24 FUN_0061ad24; 0061c628 FUN_0061c628
// strings: 0066a8f0: '%s(%d) : Invalid parameter.\n' | 0066a910: 'common/autopb.cpp'

uint FUN_0060cf9c(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  undefined1 auStack_110 [232];
  
  puVar3 = PTR_PTR_0071aff0;
  if ((param_1 == 0) || (param_2 == 0)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071aff0 + -0x7ff8));
    if (**(char **)(puVar3 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar3 + -0x7fec),0);
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  bVar1 = (uVar2 & 0x20) == 0;
  if (bVar1) {
    bVar4 = *(float *)(param_1 + 0x1c) < *(float *)(param_2 + 0x154);
    if (*(float *)(param_2 + 0x154) < *(float *)(param_1 + 0x1c)) goto joined_r0x0060d090;
  }
  else {
    bVar4 = *(float *)(param_1 + 0x1c) < *(float *)(param_2 + 0x160);
    if (*(float *)(param_2 + 0x160) < *(float *)(param_1 + 0x1c)) goto joined_r0x0060d090;
  }
  if (!bVar4) {
    FUN_0061a34c(param_2,0x10);
    return uVar2 & 1;
  }
joined_r0x0060d090:
  if (bVar1) {
    FUN_0061c628(param_2,auStack_110);
  }
  else {
    FUN_0060cf34(param_2);
  }
  FUN_0061ad24(param_2);
  return 0;
}



//==== 0060d118  ns=Global  size=0x3c
// sig: undefined FUN_0060d118(void)
// callers(1): 0060c518 FUN_0060c518
// callees(0): 

void FUN_0060d118(void)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = 0x40;
  uVar1 = *(undefined4 *)(PTR_PTR_0071aff4 + -0x8000);
  iVar2 = *(int *)(PTR_PTR_0071aff4 + -0x7ffc);
  do {
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 0x10) = uVar1;
    *(undefined4 *)(iVar2 + 8) = 0;
    lVar3 = lVar3 + -1;
    iVar2 = iVar2 + 0x24;
  } while (lVar3 != 0);
  return;
}



//==== 0060d154  ns=Global  size=0x74
// sig: undefined FUN_0060d154(void)
// callers(3): 00608cb8 FUN_00608cb8; 0060d154 FUN_0060d154; 0060d1c8 FUN_0060d1c8
// callees(1): 0060d154 FUN_0060d154

void FUN_0060d154(int param_1,undefined4 param_2)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x22c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x230)) {
    FUN_0060d154(iVar1,param_2);
  }
  *(undefined4 *)(param_1 + 0x150) = param_2;
  return;
}



//==== 0060d1c8  ns=Global  size=0x1c8
// sig: undefined FUN_0060d1c8(void)
// callers(0): 
// callees(5): 0060d154 FUN_0060d154; 0061948c 989snd::snd_Printf; 0061a34c FUN_0061a34c; 0061ad24 FUN_0061ad24; 0061c628 FUN_0061c628
// strings: 0066a928: '%s(%d) : Invalid parameter.\n' | 0066a948: 'common/autoptch.cpp'

uint FUN_0060d1c8(int param_1,int param_2)

{
  bool bVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  undefined *puVar5;
  bool bVar6;
  undefined1 auStack_130 [264];
  
  puVar5 = PTR_PTR_0071aff4;
  if ((param_1 == 0) || (param_2 == 0)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071aff4 + -0x7ff8));
    if (**(char **)(puVar5 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar5 + -0x7fec),0);
  }
  uVar3 = *(uint *)(param_1 + 0x20);
  bVar1 = (uVar3 & 0x20) == 0;
  if (bVar1) {
    fVar2 = *(float *)(param_1 + 0x1c);
    fVar4 = (float)(longlong)*(int *)(param_2 + 0x144);
    bVar6 = fVar2 < fVar4;
    if (fVar4 < fVar2) goto LAB_0060d244;
LAB_0060d2d8:
    if (!bVar6) {
      FUN_0061a34c(param_2,0x10);
      return uVar3 & 1;
    }
    fVar4 = fVar4 + *(float *)(param_1 + 0x14);
    if (fVar2 <= fVar4) goto joined_r0x0060d2f0;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x1c);
    fVar4 = (float)(longlong)*(int *)(param_2 + 0x150);
    bVar6 = fVar2 < fVar4;
    if (fVar2 <= fVar4) goto LAB_0060d2d8;
LAB_0060d244:
    fVar4 = fVar4 + *(float *)(param_1 + 0x14);
    if (fVar4 <= fVar2) goto joined_r0x0060d2f0;
  }
  fVar4 = fVar2;
joined_r0x0060d2f0:
  if (bVar1) {
    FUN_0061c628(param_2,auStack_130);
  }
  else {
    FUN_0060d154(param_2,(int)fVar4);
  }
  FUN_0061ad24(param_2);
  return 0;
}



//==== 0060d390  ns=Global  size=0x3c
// sig: undefined FUN_0060d390(void)
// callers(1): 0060c518 FUN_0060c518
// callees(0): 

void FUN_0060d390(void)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = 0x40;
  uVar1 = *(undefined4 *)(PTR_PTR_0071aff8 + -0x7ffc);
  iVar2 = *(int *)(PTR_PTR_0071aff8 + -0x8000);
  do {
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 0x10) = uVar1;
    *(undefined4 *)(iVar2 + 8) = 0;
    lVar3 = lVar3 + -1;
    iVar2 = iVar2 + 0x24;
  } while (lVar3 != 0);
  return;
}



//==== 0060d3cc  ns=Global  size=0x68
// sig: undefined FUN_0060d3cc(void)
// callers(3): 00608578 FUN_00608578; 0060d3cc FUN_0060d3cc; 0060d434 FUN_0060d434
// callees(1): 0060d3cc FUN_0060d3cc

void FUN_0060d3cc(double param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_2 + 0x22c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x230)) {
    FUN_0060d3cc(param_1,iVar1);
  }
  *(float *)(param_2 + 0x128) = (float)param_1;
  return;
}



//==== 0060d434  ns=Global  size=0x17c
// sig: undefined FUN_0060d434(void)
// callers(0): 
// callees(5): 0060d3cc FUN_0060d3cc; 0061948c 989snd::snd_Printf; 0061a34c FUN_0061a34c; 0061ae90 FUN_0061ae90; 0061c628 FUN_0061c628
// strings: 0066a960: '%s(%d) : Invalid parameter.\n' | 0066a980: 'common/autovol.cpp'

uint FUN_0060d434(int param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  bool bVar4;
  undefined1 auStack_110 [232];
  
  puVar3 = PTR_PTR_0071aff8;
  if ((param_1 == 0) || (param_2 == 0)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071aff8 + -0x7ff8));
    if (**(char **)(puVar3 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar3 + -0x7fec),0);
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  bVar2 = (uVar1 & 0x20) == 0;
  if (bVar2) {
    bVar4 = *(float *)(param_1 + 0x1c) < *(float *)(param_2 + 0x120);
    if (*(float *)(param_2 + 0x120) < *(float *)(param_1 + 0x1c)) goto joined_r0x0060d528;
  }
  else {
    bVar4 = *(float *)(param_1 + 0x1c) < *(float *)(param_2 + 0x128);
    if (*(float *)(param_2 + 0x128) < *(float *)(param_1 + 0x1c)) goto joined_r0x0060d528;
  }
  if (!bVar4) {
    FUN_0061a34c(param_2,2);
    return uVar1 & 1;
  }
joined_r0x0060d528:
  if (bVar2) {
    FUN_0061c628(param_2,auStack_110);
  }
  else {
    FUN_0060d3cc(param_2);
  }
  FUN_0061ae90(param_2);
  return 0;
}



//==== 0060d5b0  ns=Global  size=0x144
// sig: undefined FUN_0060d5b0(void)
// callers(0): 
// callees(4): 00616c14 FUN_00616c14; 0061948c 989snd::snd_Printf; 00619860 FUN_00619860; 0061b218 FUN_0061b218
// strings: 0066a9b8: 'common/blocksnd.cpp' | 0066a998: '%s(%d) : Invalid type id %d.\n' | 0066a9d0: '%s(%d) : Invalid voice callback type %d.\n'

void FUN_0060d5b0(undefined8 param_1,byte *param_2,int param_3)

{
  int iVar1;
  
  if (param_2 != (byte *)0x0) {
    if ((*param_2 & 0x1f) == 5) {
      if ((param_3 != 3) && (param_3 != 5)) {
        if ((1 < param_3 - 1U) && (param_3 != 4)) {
          989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff8));
          return;
        }
        iVar1 = FUN_00619860(param_2);
        if ((((iVar1 == 0) && (*(short *)(param_2 + 0x236) == -1)) &&
            ((*(int *)(param_2 + 0x228) != 0 || (*(int *)(param_2 + 0x22c) == 0)))) &&
           (FUN_00616c14(param_2), *(int *)param_2 < 0)) {
          FUN_0061b218(param_2,0);
        }
      }
    }
    else {
      989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x8000));
    }
  }
  return;
}



//==== 0060d6f4  ns=Global  size=0xa4
// sig: undefined FUN_0060d6f4(void)
// callers(14): 0060f128 FUN_0060f128; 00617870 FUN_00617870; 00617938 FUN_00617938; 00617b04 FUN_00617b04; 00617cac FUN_00617cac; 00617d50 FUN_00617d50; 00617e14 FUN_00617e14; 00617ea8 FUN_00617ea8; 00618098 FUN_00618098; 006183e4 FUN_006183e4; 00618548 FUN_00618548; 0061870c FUN_0061870c; 006187c8 FUN_006187c8; 00618aa8 FUN_00618aa8
// callees(1): 0061948c 989snd::snd_Printf
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp'

undefined4 FUN_0060d6f4(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_PTR_0071affc;
  if (param_1 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    if (**(char **)(puVar1 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fec),0);
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x30) * 4 + **(int **)(puVar1 + -0x7fe8) + -4);
  }
  return uVar2;
}



//==== 0060d798  ns=Global  size=0x8c
// sig: undefined FUN_0060d798(void)
// callers(1): 0060724c FUN_0060724c
// callees(1): 0061948c 989snd::snd_Printf
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp'

int FUN_0060d798(int param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071affc;
  if (param_1 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    if (**(char **)(puVar1 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fec),0);
  }
  return param_1 + *(int *)(param_1 + 0x3c);
}



//==== 0060d824  ns=Global  size=0x8c
// sig: undefined FUN_0060d824(void)
// callers(8): 00609b44 FUN_00609b44; 00609cf4 FUN_00609cf4; 0060d8b0 FUN_0060d8b0; 0060e57c FUN_0060e57c; 0060f728 FUN_0060f728; 00618098 FUN_00618098; 006183e4 FUN_006183e4; 00618548 FUN_00618548
// callees(1): 0061948c 989snd::snd_Printf
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp'

int FUN_0060d824(int param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071affc;
  if (param_1 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    if (**(char **)(puVar1 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fec),0);
  }
  return param_1 + *(int *)(param_1 + 0x38);
}



//==== 0060d8b0  ns=Global  size=0x88
// sig: undefined FUN_0060d8b0(void)
// callers(2): 00609b44 FUN_00609b44; 00618098 FUN_00618098
// callees(2): 0060d824 FUN_0060d824; 0061948c 989snd::snd_Printf
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp'

int FUN_0060d8b0(int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_PTR_0071affc;
  if (param_1 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    if (**(char **)(puVar1 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fec),0);
  }
  iVar2 = FUN_0060d824(param_1);
  return iVar2 + *(int *)(iVar2 + 8);
}



//==== 0060d938  ns=Global  size=0x8c
// sig: undefined FUN_0060d938(void)
// callers(14): 0060e810 FUN_0060e810; 00610c74 FUN_00610c74; 006112d8 FUN_006112d8; 006113e4 FUN_006113e4; 00611604 FUN_00611604; 0061183c FUN_0061183c; 00611d48 FUN_00611d48; 00612130 FUN_00612130; 006125e4 FUN_006125e4; 00612c5c FUN_00612c5c; 00613eb8 FUN_00613eb8; 00614140 FUN_00614140; 00614a2c FUN_00614a2c; 00614aa0 FUN_00614aa0
// callees(1): 0061948c 989snd::snd_Printf
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp'

int FUN_0060d938(int param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071affc;
  if (param_1 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    if (**(char **)(puVar1 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fec),0);
  }
  return param_1 + *(int *)(param_1 + 0x34);
}



//==== 0060d9c4  ns=Global  size=0x8c
// sig: undefined FUN_0060d9c4(void)
// callers(2): 0060da50 FUN_0060da50; 0060dae4 FUN_0060dae4
// callees(1): 0061948c 989snd::snd_Printf
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp'

int FUN_0060d9c4(int param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071affc;
  if (param_1 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    if (**(char **)(puVar1 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fec),0);
  }
  return param_1 + *(int *)(param_1 + 0x24);
}



//==== 0060da50  ns=Global  size=0x94
// sig: undefined FUN_0060da50(void)
// callers(1): 00610c74 FUN_00610c74
// callees(2): 0060d9c4 FUN_0060d9c4; 0061948c 989snd::snd_Printf
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp'

int FUN_0060da50(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_PTR_0071affc;
  if (param_2 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    if (**(char **)(puVar1 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fec),0);
  }
  iVar2 = FUN_0060d9c4(param_1);
  return iVar2 + *(int *)(param_2 + 0x10);
}



//==== 0060dae4  ns=Global  size=0x94
// sig: undefined FUN_0060dae4(void)
// callers(1): 00614aa0 FUN_00614aa0
// callees(2): 0060d9c4 FUN_0060d9c4; 0061948c 989snd::snd_Printf
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp'

int FUN_0060dae4(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_PTR_0071affc;
  if (param_2 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    if (**(char **)(puVar1 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fec),0);
  }
  iVar2 = FUN_0060d9c4(param_1);
  return iVar2 + *(int *)(param_2 + 0x10);
}



//==== 0060db78  ns=Global  size=0x8c
// sig: undefined FUN_0060db78(void)
// callers(1): 0060dc04 FUN_0060dc04
// callees(1): 0061948c 989snd::snd_Printf
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp'

int FUN_0060db78(int param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071affc;
  if (param_1 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    if (**(char **)(puVar1 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fec),0);
  }
  return param_1 + *(int *)(param_1 + 0x20);
}



//==== 0060dc04  ns=Global  size=0x94
// sig: undefined FUN_0060dc04(void)
// callers(12): 0060dc98 FUN_0060dc98; 0060ddac FUN_0060ddac; 0060df5c FUN_0060df5c; 0060e810 FUN_0060e810; 0060f728 FUN_0060f728; 006104e8 FUN_006104e8; 00612130 FUN_00612130; 00612c5c FUN_00612c5c; 006131fc FUN_006131fc; 006133fc FUN_006133fc; 006147cc FUN_006147cc; 006148dc FUN_006148dc
// callees(2): 0060db78 FUN_0060db78; 0061948c 989snd::snd_Printf
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp'

int FUN_0060dc04(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_PTR_0071affc;
  if (param_2 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    if (**(char **)(puVar1 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fec),0);
  }
  iVar2 = FUN_0060db78(param_1);
  return iVar2 + *(int *)(param_2 + 8);
}



//==== 0060dc98  ns=Global  size=0x40
// sig: undefined FUN_0060dc98(void)
// callers(1): 0060e160 FUN_0060e160
// callees(1): 0060dc04 FUN_0060dc04

int FUN_0060dc98(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0060dc04(*(undefined4 *)(param_1 + 0x240),*(undefined4 *)(param_1 + 0x54));
  return iVar1 + param_2 * 8;
}



//==== 0060dcd8  ns=Global  size=0x8c
// sig: undefined FUN_0060dcd8(void)
// callers(24): 00604e98 FUN_00604e98; 00605458 FUN_00605458; 006055b0 FUN_006055b0; 00607334 FUN_00607334; 006075ac FUN_006075ac; 00607854 FUN_00607854; 006080ac FUN_006080ac; 006094a0 FUN_006094a0; 006095c8 FUN_006095c8; 00609814 FUN_00609814; 00609cf4 FUN_00609cf4; 0060abc8 FUN_0060abc8; 0060dd64 FUN_0060dd64; 0060e57c FUN_0060e57c; 0060e718 FUN_0060e718; 0060e810 FUN_0060e810; 0060edc4 FUN_0060edc4; 0060efb4 FUN_0060efb4; 0060f1b0 FUN_0060f1b0; 0060f728 FUN_0060f728; 00610790 FUN_00610790; 006113e4 FUN_006113e4; 0061183c FUN_0061183c; 00612130 FUN_00612130
// callees(1): 0061948c 989snd::snd_Printf
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp'

int FUN_0060dcd8(int param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071affc;
  if (param_1 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    if (**(char **)(puVar1 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fec),0);
  }
  return param_1 + *(int *)(param_1 + 0x1c);
}



//==== 0060dd64  ns=Global  size=0x48
// sig: undefined FUN_0060dd64(void)
// callers(1): 00607b98 FUN_00607b98
// callees(1): 0060dcd8 FUN_0060dcd8

ushort FUN_0060dd64(undefined8 param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = FUN_0060dcd8();
  return *(ushort *)
          (((int)((param_2 & 0xffffffff) << 4) - (int)((param_2 & 0xffffffff) << 2)) + iVar1 + 6) &
         1;
}



//==== 0060ddac  ns=Global  size=0x110
// sig: undefined FUN_0060ddac(void)
// callers(2): 00607854 FUN_00607854; 0060debc FUN_0060debc
// callees(2): 0060dc04 FUN_0060dc04; 0061948c 989snd::snd_Printf
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp'

int FUN_0060ddac(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = PTR_PTR_0071affc;
  if (param_2 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    if (**(char **)(puVar1 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fec),0);
  }
  if (*(char *)(param_2 + 4) != '\0') {
    iVar3 = 0;
    do {
      iVar2 = FUN_0060dc04(param_1,param_2);
      if (*(char *)(iVar3 * 8 + iVar2) == '-') {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(byte *)(param_2 + 4));
  }
  return -1;
}



//==== 0060debc  ns=Global  size=0xa0
// sig: undefined FUN_0060debc(void)
// callers(1): 006077ac FUN_006077ac
// callees(2): 0060ddac FUN_0060ddac; 0061948c 989snd::snd_Printf
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp'

undefined8 FUN_0060debc(byte *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_0071affc;
  if ((param_1 == (byte *)0x0) || ((*param_1 & 0x1f) != 5)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    if (**(char **)(puVar1 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fec),0);
  }
  uVar2 = FUN_0060ddac(*(undefined4 *)(param_1 + 0x240),*(undefined4 *)(param_1 + 0x54));
  return uVar2;
}



//==== 0060df5c  ns=Global  size=0x128
// sig: undefined FUN_0060df5c(void)
// callers(2): 006075ac FUN_006075ac; 0060e084 FUN_0060e084
// callees(2): 0060dc04 FUN_0060dc04; 0061948c 989snd::snd_Printf
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp'

int FUN_0060df5c(int param_1,int param_2)

{
  byte bVar1;
  undefined *puVar2;
  char *pcVar3;
  int iVar4;
  ulonglong uVar5;
  
  puVar2 = PTR_PTR_0071affc;
  if ((param_1 == 0) || (param_2 == 0)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    if (**(char **)(puVar2 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fec),0);
  }
  pcVar3 = (char *)FUN_0060dc04(param_1,param_2);
  bVar1 = *(byte *)(param_2 + 4);
  if (bVar1 != 0) {
    iVar4 = 0;
    if (*pcVar3 != '+') {
      uVar5 = (ulonglong)bVar1;
      iVar4 = 0;
      do {
        iVar4 = iVar4 + 1;
        uVar5 = uVar5 - 1;
        if (uVar5 == 0) {
          return -1;
        }
      } while (pcVar3[iVar4 * 8] != '+');
    }
    if (bVar1 - 1 != iVar4) {
      return iVar4;
    }
  }
  return -1;
}



//==== 0060e084  ns=Global  size=0xdc
// sig: undefined FUN_0060e084(void)
// callers(2): 00607504 FUN_00607504; 0060e160 FUN_0060e160
// callees(3): 0060df5c FUN_0060df5c; 0061948c 989snd::snd_Printf; 00619860 FUN_00619860
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp'

undefined4 FUN_0060e084(byte *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = PTR_PTR_0071affc;
  if ((param_1 == (byte *)0x0) || ((*param_1 & 0x1f) != 5)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    if (**(char **)(puVar1 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fec),0);
  }
  if ((*(short *)(param_1 + 0x236) < 0) && (iVar3 = FUN_00619860(param_1), iVar3 == 0)) {
    return 0xffffffff;
  }
  uVar2 = FUN_0060df5c(*(undefined4 *)(param_1 + 0x240),*(undefined4 *)(param_1 + 0x54));
  return uVar2;
}



//==== 0060e160  ns=Global  size=0x1bc
// sig: undefined FUN_0060e160(void)
// callers(1): 0061b86c FUN_0061b86c
// callees(6): 0060dc98 FUN_0060dc98; 0060e084 FUN_0060e084; 0061948c 989snd::snd_Printf; 00619860 FUN_00619860; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp'

uint FUN_0060e160(uint *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  puVar1 = PTR_PTR_0071affc;
  if (((param_1 == (uint *)0x0) || (-1 < (int)*param_1)) || ((*param_1 >> 0x18 & 0x1f) != 5)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    if (**(char **)(puVar1 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fec),0);
    989snd::snd_SynthLock();
    iVar2 = FUN_00619860(param_1);
    if (iVar2 == 0) goto LAB_0060e288;
joined_r0x0060e29c:
    if ((param_2 == 0) && (iVar2 = FUN_0060e084(param_1), -1 < iVar2)) {
      *(short *)((int)param_1 + 0x236) = (short)(iVar2 + 1);
      iVar3 = FUN_0060dc98(param_1,iVar2);
      *(short *)(param_1 + 0x8d) = (short)*(undefined4 *)(iVar3 + 4);
      iVar2 = FUN_0060dc98(param_1,iVar2 + 1);
      *(short *)(param_1 + 0x8d) =
           (short)*(undefined4 *)(iVar2 + 4) + *(short *)(param_1 + 0x8d) + 1;
      goto LAB_0060e208;
    }
  }
  else {
    989snd::snd_SynthLock();
    iVar2 = FUN_00619860(param_1);
    if (iVar2 != 0) goto joined_r0x0060e29c;
LAB_0060e288:
    if ((*(ushort *)((int)param_1 + 0x23e) & 1) == 0) goto joined_r0x0060e29c;
  }
  *(undefined2 *)((int)param_1 + 0x236) = 0xffff;
LAB_0060e208:
  uVar4 = 1;
  if (param_1[0x8b] == 0) {
    uVar4 = FUN_00619860(param_1);
  }
  uVar5 = 0;
  if (*(short *)((int)param_1 + 0x236) == -1) {
    uVar5 = (((int)uVar4 >> 0x1f ^ uVar4) - ((int)uVar4 >> 0x1f)) - 1 >> 0x1f;
  }
  989snd::snd_SynthUnlock();
  return uVar5;
}



//==== 0060e31c  ns=Global  size=0x260
// sig: undefined FUN_0060e31c(void)
// callers(1): 0061bb5c FUN_0061bb5c
// callees(3): 006104e8 FUN_006104e8; 0061948c 989snd::snd_Printf; 00619860 FUN_00619860
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp'

uint FUN_0060e31c(uint *param_1)

{
  char cVar1;
  short sVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  
  puVar5 = PTR_PTR_0071affc;
  if ((param_1 == (uint *)0x0) || (-1 < (int)*param_1)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    cVar1 = **(char **)(puVar5 + -0x7ff0);
  }
  else {
    if ((*param_1 >> 0x18 & 0x1f) == 5) goto LAB_0060e394;
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    cVar1 = **(char **)(puVar5 + -0x7ff0);
  }
  if (cVar1 != '\0') {
    return 0;
  }
  trapWord(0x18,(ulonglong)**(byte **)(puVar5 + -0x7fec),0);
LAB_0060e394:
  if (*(short *)((int)param_1 + 0x236) == -1) {
    if (param_1[0x8b] != 0) {
      return 0;
    }
    uVar7 = FUN_00619860(param_1);
    return (uint)LZCOUNT(uVar7) >> 5;
  }
  puVar3 = *(undefined4 **)(puVar5 + -0x7fe4);
  uVar6 = 0;
  sVar2 = *(short *)(param_1 + 0x8d);
  piVar4 = *(int **)(puVar5 + -0x7fdc);
  param_1[1] = param_1[1] & 0xffffffaf;
  *puVar3 = 0;
  *(short *)(param_1 + 0x8d) = sVar2 + -1;
LAB_0060e3dc:
  if (uVar6 != 0) goto LAB_0060e464;
  do {
    if (*(short *)((int)param_1 + 0x236) == -1) goto LAB_0060e464;
    if (*(short *)(param_1 + 0x8d) != 0) goto LAB_0060e464;
    piVar8 = *(int **)(puVar5 + -0x7fe0);
    if (*piVar8 != 0) goto LAB_0060e464;
    while( true ) {
      if ((param_1[1] & 2) != 0) {
        *(short *)(param_1 + 0x8d) = *(short *)(param_1 + 0x8d) + 1;
        return uVar6;
      }
      uVar6 = FUN_006104e8(param_1);
      if (*(short *)(param_1 + 0x8d) < 0) {
        *(undefined2 *)(param_1 + 0x8d) = 0;
      }
      if ((*piVar8 == 0) || (*piVar4 < 1)) goto LAB_0060e3dc;
      *piVar4 = *piVar4 + -1;
      if (uVar6 == 0) break;
LAB_0060e464:
      if (*piVar4 < 1) {
        return uVar6;
      }
      piVar8 = *(int **)(puVar5 + -0x7fe0);
      if (*piVar8 == 0) {
        return uVar6;
      }
    }
  } while( true );
}



//==== 0060e57c  ns=Global  size=0x19c
// sig: undefined FUN_0060e57c(void)
// callers(0): 
// callees(6): 005cd198 FUN_005cd198; 005d0140 libc::memset; 00609b44 FUN_00609b44; 0060d824 FUN_0060d824; 0060dcd8 FUN_0060dcd8; 0061948c 989snd::snd_Printf
// strings: 0066aa88: 'handle %x started (stream)\n' | 0066aa58: 'handle %x started (index %i in bank at %p)\n' | 0066aa28: 'handle %x started ("%s" (%i) from bank "%s")\n'

void FUN_0060e57c(uint *param_1)

{
  uint uVar1;
  undefined *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 local_130 [2];
  undefined1 auStack_12e [126];
  undefined1 local_b0 [2];
  undefined1 auStack_ae [134];
  
  puVar2 = PTR_PTR_0071affc;
  if (**(int **)(PTR_PTR_0071affc + -0x7fd8) != 0) {
    uVar1 = *param_1 >> 0x18 & 0x1f;
    if (uVar1 == 5) {
      uVar1 = param_1[0x91];
      lVar3 = FUN_0060dcd8(param_1[0x90]);
      if ((*(uint *)(param_1[0x90] + 8) & 0x100) == 0) {
        989snd::snd_Printf((char)*(undefined4 *)(puVar2 + -0x7fc8));
      }
      else {
        libc::memset(auStack_12e,0,0x7e);
        libc::memset(auStack_ae,0,0x7e);
        uVar4 = FUN_0060d824(param_1[0x90]);
        FUN_005cd198(local_130,0x7f,*(undefined4 *)(puVar2 + -0x7fd0),uVar4);
        FUN_00609b44(param_1[0x90],(short)(((ulonglong)uVar1 - lVar3 & 0xffffffff) / 0xc),local_b0);
        989snd::snd_Printf((char)*(undefined4 *)(puVar2 + -0x7fcc));
      }
    }
    else if (uVar1 == 4) {
      989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7fc4));
      return;
    }
  }
  return;
}



//==== 0060e718  ns=Global  size=0xf8
// sig: undefined FUN_0060e718(void)
// callers(0): 
// callees(2): 0060dcd8 FUN_0060dcd8; 006247e0 FUN_006247e0

void FUN_0060e718(int param_1,ulonglong param_2)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  puVar2 = PTR_PTR_0071affc;
  iVar3 = FUN_0060dcd8(param_1);
  piVar6 = *(int **)(puVar2 + -0x7fc0);
  iVar4 = 0;
  piVar5 = piVar6 + -0x36;
  do {
    while ((((piVar6[-0x90] < 0 && (piVar6[-0x7b] != 0)) && (*piVar6 == param_1)) &&
           (piVar6[1] ==
            iVar3 + ((int)((param_2 & 0xffffffff) << 4) - (int)((param_2 & 0xffffffff) << 2))))) {
      FUN_006247e0(piVar5);
      bVar1 = iVar4 == 0xff;
      piVar5 = piVar5 + 0x93;
      piVar6 = piVar6 + 0x93;
      iVar4 = iVar4 + 1;
      if (bVar1) {
        return;
      }
    }
    bVar1 = iVar4 != 0xff;
    piVar5 = piVar5 + 0x93;
    piVar6 = piVar6 + 0x93;
    iVar4 = iVar4 + 1;
  } while (bVar1);
  return;
}



//==== 0060e810  ns=Global  size=0x5b4
// sig: undefined FUN_0060e810(void)
// callers(0): 
// callees(19): 0060d938 FUN_0060d938; 0060dc04 FUN_0060dc04; 0060dcd8 FUN_0060dcd8; 0060fa5c FUN_0060fa5c; 0060fabc FUN_0060fabc; 0060fb74 FUN_0060fb74; 0060fbb4 989snd::snd_NoteToSampleRate; 0060fec8 FUN_0060fec8; 00610224 FUN_00610224; 006102b0 FUN_006102b0; 00610494 FUN_00610494; 0061085c FUN_0061085c; 00610bb4 FUN_00610bb4; 0061a5b8 FUN_0061a5b8; 0061f100 FUN_0061f100; 0061f114 FUN_0061f114; 0061f128 FUN_0061f128; 00620290 FUN_00620290; 006299b8 FUN_006299b8

void FUN_0060e810(int param_1,uint param_2,int param_3)

{
  bool bVar1;
  ushort uVar2;
  short sVar3;
  int *piVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined *puVar8;
  int iVar10;
  int iVar11;
  longlong lVar9;
  undefined1 uVar15;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  uint *puVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  int iVar19;
  ulonglong uVar20;
  int *piVar21;
  double dVar22;
  undefined1 auStack_f0 [88];
  
  puVar8 = PTR_PTR_0071affc;
  iVar10 = FUN_0060dcd8(param_1);
  piVar21 = *(int **)(puVar8 + -0x7fc0);
  iVar19 = 0;
  puVar18 = (undefined1 *)(iVar10 + param_2 * 0x10 + (param_2 & 0x3fffffff) * -4);
  do {
    if ((((piVar21[-0x90] < 0) && (piVar21[-0x7b] != 0)) && (*piVar21 == param_1)) &&
       ((undefined1 *)piVar21[1] == puVar18)) {
      dVar22 = (double)FUN_0060fabc(*puVar18,0);
      iVar10 = FUN_0060fb74(*(undefined2 *)(puVar18 + 2));
      *(undefined1 *)(piVar21 + -0x8c) = puVar18[1];
      piVar21[-0x49] = (int)(float)dVar22;
      piVar21[-0x44] = iVar10;
      if (param_3 != -1) {
        iVar10 = FUN_0060dc04(param_1,puVar18);
        puVar16 = (uint *)(iVar10 + param_3 * 8);
        if ((*(char *)puVar16 == '\x01') || (*(char *)puVar16 == '-')) {
          iVar10 = iVar19 * 0x24c + *(int *)(puVar8 + -0x7fbc);
          iVar11 = FUN_0061a5b8(iVar10,0);
          if (iVar11 != -1) {
            piVar4 = *(int **)(puVar8 + -0x7fb8);
            do {
              iVar7 = iVar11 * 0x68;
              if (*(uint **)(iVar7 + *piVar4 + 100) == puVar16) {
                lVar9 = FUN_0060d938(param_1);
                iVar14 = iVar7 + *piVar4;
                uVar17 = lVar9 + ((ulonglong)*puVar16 & 0xffffff);
                uVar5 = *(uint *)(*(int *)(puVar8 + -0x7fb4) + (char)puVar18[1] * 4);
                puVar6 = (undefined1 *)uVar17;
                uVar2 = *(ushort *)(puVar6 + 0xe);
                *(uint *)(iVar14 + 0x18) =
                     (uVar5 & 1) << 5 | uVar2 >> 5 & 1 | (uint)(((ulonglong)uVar2 & 1 ^ 1) << 3) |
                     (uint)(((ulonglong)(uVar5 >> 2) & 1) << 6) |
                     (uint)(((ulonglong)(uVar2 >> 4) & 1) << 2) |
                     (uint)(((ulonglong)(uVar2 >> 9) & 1) << 4);
                *(int *)(iVar14 + 0x20) = (int)(char)puVar6[9] << 7;
                *(int *)(iVar14 + 0x24) = (int)(((longlong)(char)puVar6[8] & 0xffffffffU) << 7);
                uVar15 = FUN_00610bb4(iVar10,puVar6[1]);
                dVar22 = (double)FUN_0060fabc(uVar15,0);
                iVar13 = *piVar4;
                *(float *)(iVar14 + 0x30) = (float)dVar22;
                uVar12 = FUN_0061085c(iVar10,uVar17 & 0xffffffff);
                iVar14 = *piVar4;
                *(undefined4 *)(iVar7 + iVar13 + 0x38) = uVar12;
                dVar22 = (double)989snd::snd_NoteToSampleRate(puVar6[2],puVar6[3]);
                uVar2 = *(ushort *)(puVar6 + 0xe);
                iVar13 = *piVar4;
                *(float *)(iVar7 + iVar14 + 0x48) = (float)dVar22;
                if ((uVar2 & 0x4000) == 0) {
                  uVar12 = *(undefined4 *)(puVar8 + -0x7fb0);
                }
                else {
                  uVar12 = *(undefined4 *)(puVar6 + 0x18);
                }
                sVar3 = *(short *)(puVar6 + 0xe);
                iVar14 = *piVar4;
                *(undefined4 *)(iVar7 + iVar13 + 0x50) = uVar12;
                if (sVar3 < 0) {
                  uVar12 = *(undefined4 *)(puVar6 + 0x1c);
                }
                else {
                  uVar12 = *(undefined4 *)(puVar8 + -0x7fb0);
                }
                sVar3 = *(short *)(puVar6 + 0xe);
                iVar13 = *piVar4;
                *(undefined4 *)(iVar7 + iVar14 + 0x54) = uVar12;
                if (sVar3 < 0) {
                  uVar12 = *(undefined4 *)(puVar6 + 0x20);
                }
                else {
                  uVar12 = *(undefined4 *)(puVar8 + -0x7fb0);
                }
                iVar14 = *piVar4;
                uVar20 = 0;
                *(undefined4 *)(iVar7 + iVar13 + 0x58) = uVar12;
                *(undefined1 *)(iVar7 + iVar14 + 8) = *puVar6;
                iVar13 = *piVar4;
                dVar22 = (double)FUN_0060fa5c(uVar17 & 0xffffffff);
                uVar2 = *(ushort *)(puVar6 + 0xe);
                *(float *)(iVar7 + iVar13 + 0xc) = (float)dVar22;
                if ((uVar2 & 0x100) != 0) {
                  uVar20 = (longlong)((ulonglong)uVar2 << 0x31 | (ulonglong)(uVar2 >> 0xf)) >> 0x3f
                           & 4;
                  lVar9 = uVar20 + 0x20;
                  if (-1 < (short)uVar2) {
                    lVar9 = uVar20 + 0x18;
                  }
                  uVar20 = 0;
                  if ((int)(uVar17 + lVar9) != 0) {
                    uVar20 = uVar17 + lVar9 & 0xffffffff;
                    FUN_00620290(iVar11,uVar20,iVar10);
                  }
                }
                iVar13 = FUN_00610494(uVar20,4);
                iVar14 = FUN_00610494(uVar20,10);
                if (iVar14 == 0) {
                  if (iVar13 == 0) {
                    FUN_0060fec8(*(undefined2 *)(puVar6 + 10),*(undefined2 *)(puVar6 + 0xc),
                                 auStack_f0);
                  }
                  else {
                    FUN_00610224(iVar13,auStack_f0);
                  }
                }
                else {
                  FUN_006102b0(iVar14,auStack_f0);
                }
                FUN_006299b8(*(undefined4 *)(iVar7 + *piVar4 + 0x60),auStack_f0);
              }
              iVar11 = FUN_0061a5b8(iVar10,iVar11 + 1);
            } while (iVar11 != -1);
          }
        }
      }
      iVar10 = iVar19 * 0x24c + *(int *)(puVar8 + -0x7fbc);
      FUN_0061f128(iVar10);
      FUN_0061f114(iVar10);
      FUN_0061f100(iVar10);
      puVar16 = (uint *)piVar21[-5];
      if (puVar16 != (uint *)0x0) {
        piVar4 = *(int **)(puVar8 + -0x7fa8);
        do {
          if ((*puVar16 >> 0x18 & 0x1f) == 4) {
            (*(code *)**(undefined4 **)(*piVar4 + 4))(*puVar16,iVar10,puVar18);
          }
          puVar16 = (uint *)puVar16[0x8c];
        } while (puVar16 != (uint *)0x0);
      }
    }
    bVar1 = iVar19 != 0xff;
    piVar21 = piVar21 + 0x93;
    iVar19 = iVar19 + 1;
  } while (bVar1);
  return;
}



//==== 0060edc4  ns=Global  size=0x1f0
// sig: undefined FUN_0060edc4(void)
// callers(0): 
// callees(4): 0060dcd8 FUN_0060dcd8; 0061ceac FUN_0061ceac; 0061cfd0 FUN_0061cfd0; 0061cff0 FUN_0061cff0

void FUN_0060edc4(int param_1,uint param_2,int param_3)

{
  undefined *puVar1;
  ulonglong uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  int iVar7;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  longlong lVar8;
  uint uStack00000008;
  
  puVar1 = PTR_PTR_0071affc;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if (param_3 == 0) {
    iVar3 = FUN_0060dcd8(param_1);
    iVar7 = param_2 * 0x10 + (param_2 & 0x3fffffff) * -4;
    if ((*(ushort *)(iVar3 + iVar7 + 6) & 0x4000) == 0) {
      return;
    }
    iVar3 = FUN_0060dcd8(param_1);
    uVar2 = (ulonglong)*(ushort *)(iVar7 + iVar3 + 6);
    *(ushort *)(iVar7 + iVar3 + 6) =
         (ushort)(((uVar2 << 0x20) >> 0x2f) << 0xf) |
         (ushort)(((uVar2 & 0x3fff) << 0x11) >> 0x10) >> 1;
    FUN_0061cff0();
  }
  else {
    iVar3 = FUN_0060dcd8(param_1);
    iVar7 = param_2 * 0x10 + (param_2 & 0x3fffffff) * -4;
    if ((*(ushort *)(iVar3 + iVar7 + 6) & 0x4000) != 0) {
      return;
    }
    iVar3 = FUN_0060dcd8(param_1);
    *(ushort *)(iVar7 + iVar3 + 6) = *(ushort *)(iVar7 + iVar3 + 6) | 0x4000;
    FUN_0061cfd0();
  }
  iVar3 = FUN_0060dcd8(param_1);
  bVar6 = false;
  lVar8 = 0x100;
  piVar4 = *(int **)(puVar1 + -0x7fbc) + 0x90;
  piVar5 = *(int **)(puVar1 + -0x7fbc);
  do {
    while ((((-1 < *piVar5 || (piVar5[0x15] == 0)) || (*piVar4 != param_1)) ||
           ((piVar4[1] != iVar7 + iVar3 && (piVar5[0x15] != iVar7 + iVar3))))) {
LAB_0060eed0:
      piVar5 = piVar5 + 0x93;
      piVar4 = piVar4 + 0x93;
      lVar8 = lVar8 + -1;
      if (lVar8 == 0) goto LAB_0060ef3c;
    }
    bVar6 = true;
    if (param_3 == 0) {
      bVar6 = true;
      uVar2 = ((ulonglong)(uint)piVar5[1] & 0xfffff) << 0xb | (ulonglong)((uint)piVar5[1] >> 0x15);
      piVar5[1] = (uint)(uVar2 << 0x15) | (uint)uVar2 >> 0xb;
      goto LAB_0060eed0;
    }
    piVar4 = piVar4 + 0x93;
    piVar5[1] = piVar5[1] | 0x100000;
    lVar8 = lVar8 + -1;
    piVar5 = piVar5 + 0x93;
  } while (lVar8 != 0);
LAB_0060ef3c:
  if (!bVar6) {
    return;
  }
  FUN_0061ceac();
  return;
}



//==== 0060efb4  ns=Global  size=0x174
// sig: undefined FUN_0060efb4(void)
// callers(2): 0060f128 FUN_0060f128; 006187c8 FUN_006187c8
// callees(3): 0060dcd8 FUN_0060dcd8; 0061ceac FUN_0061ceac; 0061cfa8 FUN_0061cfa8

undefined4 FUN_0060efb4(int param_1,int param_2)

{
  bool bVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (0 < *(short *)(param_1 + 0x16)) {
    bVar1 = false;
    iVar4 = 0;
    iVar5 = 0;
    do {
      while( true ) {
        iVar4 = iVar4 + 1;
        iVar3 = FUN_0060dcd8(param_1);
        if ((*(ushort *)(iVar3 + iVar5 + 6) & 0x2000) == 0) break;
        iVar3 = FUN_0060dcd8(param_1);
        bVar1 = true;
        iVar3 = iVar3 + iVar5;
        iVar5 = iVar5 + 0xc;
        uVar2 = (ulonglong)*(ushort *)(iVar3 + 6);
        *(ushort *)(iVar3 + 6) =
             (ushort)(((uVar2 << 0x20) >> 0x2e) << 0xe) |
             (ushort)(((uVar2 & 0x1fff) << 0x12) >> 0x10) >> 2;
        FUN_0061cfa8();
        if (*(short *)(param_1 + 0x16) <= iVar4) goto LAB_0060f07c;
      }
      iVar5 = iVar5 + 0xc;
    } while (iVar4 < *(short *)(param_1 + 0x16));
LAB_0060f07c:
    if (bVar1) {
      if (param_2 == 0) {
        return 1;
      }
      FUN_0061ceac();
      return 1;
    }
  }
  return 0;
}



//==== 0060f128  ns=Global  size=0x88
// sig: undefined FUN_0060f128(void)
// callers(0): 
// callees(3): 0060d6f4 FUN_0060d6f4; 0060efb4 FUN_0060efb4; 0061ceac FUN_0061ceac

void FUN_0060f128(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = **(int **)(PTR_PTR_0071affc + -0x7fa4);
  if (iVar3 != 0) {
    bVar1 = false;
    do {
      iVar2 = FUN_0060efb4(iVar3,0);
      if (iVar2 != 0) {
        bVar1 = true;
      }
      iVar3 = FUN_0060d6f4(iVar3);
    } while (iVar3 != 0);
    if (bVar1) {
      FUN_0061ceac();
    }
  }
  return;
}



//==== 0060f1b0  ns=Global  size=0x1dc
// sig: undefined FUN_0060f1b0(void)
// callers(0): 
// callees(4): 0060dcd8 FUN_0060dcd8; 0061ceac FUN_0061ceac; 0061cf88 FUN_0061cf88; 0061cfa8 FUN_0061cfa8

void FUN_0060f1b0(int param_1,uint param_2,int param_3)

{
  undefined *puVar1;
  ulonglong uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  longlong lVar7;
  uint uStack00000008;
  
  puVar1 = PTR_PTR_0071affc;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if (param_3 == 0) {
    iVar3 = FUN_0060dcd8(param_1);
    iVar6 = param_2 * 0x10 + (param_2 & 0x3fffffff) * -4;
    if ((*(ushort *)(iVar3 + iVar6 + 6) & 0x2000) != 0) {
      iVar3 = FUN_0060dcd8(param_1);
      uVar2 = (ulonglong)*(ushort *)(iVar6 + iVar3 + 6);
      *(ushort *)(iVar6 + iVar3 + 6) =
           (ushort)(((uVar2 << 0x20) >> 0x2e) << 0xe) |
           (ushort)(((uVar2 & 0x1fff) << 0x12) >> 0x10) >> 2;
      FUN_0061cfa8();
      goto LAB_0060f298;
    }
  }
  else {
    iVar3 = FUN_0060dcd8(param_1);
    iVar6 = param_2 * 0x10 + (param_2 & 0x3fffffff) * -4;
    if ((*(ushort *)(iVar3 + iVar6 + 6) & 0x2000) == 0) {
      iVar3 = FUN_0060dcd8(param_1);
      *(ushort *)(iVar6 + iVar3 + 6) = *(ushort *)(iVar6 + iVar3 + 6) | 0x2000;
      FUN_0061cf88();
LAB_0060f298:
      iVar3 = FUN_0060dcd8(param_1);
      piVar5 = *(int **)(puVar1 + -0x7fbc);
      piVar4 = piVar5 + 0x90;
      lVar7 = 0x100;
      do {
        if ((((*piVar5 < 0) && (piVar5[0x15] != 0)) && (*piVar4 == param_1)) &&
           ((piVar4[1] == iVar3 + iVar6 || (piVar5[0x15] == iVar3 + iVar6)))) {
          if (param_3 == 0) {
            uVar2 = ((ulonglong)(uint)piVar5[1] & 0x7ffff) << 0xc |
                    (ulonglong)((uint)piVar5[1] >> 0x14);
            piVar5[1] = (uint)(uVar2 << 0x14) | (uint)uVar2 >> 0xc;
          }
          else {
            piVar5[1] = piVar5[1] | 0x80000;
          }
        }
        piVar4 = piVar4 + 0x93;
        piVar5 = piVar5 + 0x93;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      FUN_0061ceac();
      return;
    }
  }
  return;
}



//==== 0060f38c  ns=Global  size=0x240
// sig: undefined FUN_0060f38c(void)
// callers(2): 0060f5cc FUN_0060f5cc; 00612130 FUN_00612130
// callees(4): 0061948c 989snd::snd_Printf; 00619848 FUN_00619848; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp'

uint FUN_0060f38c(int param_1,int param_2,undefined4 *param_3)

{
  ushort uVar1;
  undefined *puVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  
  puVar2 = PTR_PTR_0071affc;
  if ((param_1 == 0) || (param_3 == (undefined4 *)0x0)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    if (**(char **)(puVar2 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fec),0);
    if (param_3 == (undefined4 *)0x0) goto LAB_0060f3e0;
  }
  *param_3 = 0;
LAB_0060f3e0:
  if (((*(ushort *)(param_1 + 6) & 0x38) == 0) || (*(char *)(param_1 + 5) == '\0')) {
    return 0;
  }
  989snd::snd_SynthLock();
  pbVar5 = (byte *)0x0;
  pbVar3 = (byte *)FUN_00619848();
  iVar4 = 0;
  if (pbVar3 != (byte *)0x0) {
    iVar4 = 0;
    pbVar5 = (byte *)0x0;
    do {
      if ((((*pbVar3 & 0x1f) == 5) &&
          (((param_2 != 0 && (*(int *)(pbVar3 + 0x244) == param_1)) ||
           (*(int *)(pbVar3 + 0x54) == param_1)))) && ((*(uint *)(pbVar3 + 4) & 0x80) == 0)) {
        uVar1 = *(ushort *)(param_1 + 6);
        iVar4 = iVar4 + 1;
        if (((uVar1 & 0x30) != 0) &&
           (((pbVar5 == (byte *)0x0 ||
             (((uVar1 & 0x10) != 0 &&
              (*(float *)(pbVar3 + 0x120) * *(float *)(pbVar3 + 0x128) * *(float *)(pbVar3 + 0x1d0)
               < *(float *)(pbVar5 + 0x120) * *(float *)(pbVar5 + 0x128) *
                 *(float *)(pbVar5 + 0x1d0))))) ||
            (((uVar1 & 0x20) != 0 && (*(uint *)(pbVar3 + 0xc) < *(uint *)(pbVar5 + 0xc))))))) {
          pbVar5 = pbVar3;
        }
      }
      pbVar3 = *(byte **)(pbVar3 + 0x224);
    } while (pbVar3 != (byte *)0x0);
  }
  if (*(char *)(param_1 + 5) <= iVar4) {
    if (pbVar5 != (byte *)0x0) {
      *param_3 = pbVar5;
    }
    989snd::snd_SynthUnlock();
    return ((int)pbVar5 >> 0x1f) - ((int)pbVar5 >> 0x1f ^ (uint)pbVar5) >> 0x1f;
  }
  989snd::snd_SynthUnlock();
  return 1;
}



//==== 0060f5cc  ns=Global  size=0x15c
// sig: undefined FUN_0060f5cc(void)
// callers(2): 00604e98 FUN_00604e98; 0060f728 FUN_0060f728
// callees(4): 0060f38c FUN_0060f38c; 0061948c 989snd::snd_Printf; 0061b86c FUN_0061b86c; 0061c280 FUN_0061c280
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp'

int FUN_0060f5cc(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 in_r8;
  int local_50 [4];
  
  puVar1 = PTR_PTR_0071affc;
  if (param_2 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    if (**(char **)(puVar1 + -0x7ff0) == '\0') {
      trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fec),0);
      goto LAB_0060f620;
    }
LAB_0060f6ec:
    iVar2 = 0;
  }
  else {
LAB_0060f620:
    if ((*(ushort *)(param_2 + 6) & 8) != 0) {
      iVar2 = FUN_0060f38c(param_2,in_r8,local_50);
      if (iVar2 == 0) goto LAB_0060f6ec;
      if (local_50[0] != 0) {
        FUN_0061b86c(local_50[0],1,0,1);
      }
    }
    iVar2 = FUN_0061c280(param_1,*(undefined4 *)(puVar1 + -0x7fbc),0x100,5,0x24c,param_2);
    if (iVar2 != 0) {
      *(undefined2 *)(iVar2 + 0x23e) = 0;
    }
  }
  return iVar2;
}



//==== 0060f728  ns=Global  size=0x334
// sig: undefined FUN_0060f728(void)
// callers(3): 006095c8 FUN_006095c8; 00609814 FUN_00609814; 0061183c FUN_0061183c
// callees(13): 005cd198 FUN_005cd198; 005d0140 libc::memset; 00609b44 FUN_00609b44; 0060d824 FUN_0060d824; 0060dc04 FUN_0060dc04; 0060dcd8 FUN_0060dcd8; 0060f5cc FUN_0060f5cc; 0061948c 989snd::snd_Printf; 0061aa54 FUN_0061aa54; 0061bfb0 FUN_0061bfb0; 0061c628 FUN_0061c628; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp' | 0065fe90: 'Unknown' | 0066aaa8: '%s(%d) : Attempt to play sound with no grains. (Bank: "%s", Sound: "%s")\n'

undefined4
FUN_0060f728(double param_1,int param_2,uint param_3,undefined8 param_4,undefined8 param_5,
            uint param_6,int param_7,undefined4 param_8)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 local_100 [16];
  undefined1 local_f0 [8];
  undefined1 auStack_e8 [120];
  
  puVar2 = PTR_PTR_0071affc;
  if ((((param_2 == 0) || ((int)param_3 < 0)) || ((int)*(short *)(param_2 + 0x16) <= (int)param_3))
     || ((((double)*(float *)(PTR_PTR_0071affc + -0x7fb0) < param_1 ||
          (param_1 < (double)*(float *)(PTR_PTR_0071affc + -0x7f9c))) ||
         ((0x167 < param_6 || (param_7 == 0)))))) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    if (**(char **)(puVar2 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fec),0);
  }
  iVar3 = FUN_0060dcd8(param_2);
  iVar3 = iVar3 + param_3 * 0x10 + (param_3 & 0x3fffffff) * -4;
  if (*(char *)(iVar3 + 4) == '\0') {
    libc::memset(auStack_e8,0,0x78);
    if ((*(uint *)(param_2 + 8) & 0x100) != 0) {
      uVar6 = FUN_0060d824(param_2);
      FUN_005cd198(local_100,8,*(undefined4 *)(puVar2 + -0x7fd0),uVar6);
    }
    FUN_00609b44(param_2,(short)param_3,local_f0);
    989snd::snd_Printf((char)*(undefined4 *)(puVar2 + -0x7fa0));
  }
  else {
    989snd::snd_SynthLock();
    if ((*(uint *)(param_2 + 8) & 0x400) == 0) {
      if ((*(ushort *)(iVar3 + 6) & 2) != 0) {
        FUN_0061bfb0(iVar3,0,1);
      }
      puVar4 = (undefined4 *)FUN_0060f5cc(param_1,iVar3);
      if (puVar4 != (undefined4 *)0x0) {
        FUN_0061c628(puVar4,param_7);
        iVar5 = FUN_0060dc04(param_2,iVar3);
        *(undefined2 *)((int)puVar4 + 0x236) = 0;
        uVar6 = *(undefined4 *)(iVar5 + 4);
        *(undefined2 *)(puVar4 + 0x8e) = 0;
        *(undefined2 *)((int)puVar4 + 0x23a) = 0;
        *(short *)(puVar4 + 0x8d) = (short)uVar6 + 1;
        *(undefined2 *)(puVar4 + 0x8f) = 0;
        uVar1 = *(ushort *)(iVar3 + 6);
        puVar4[0x90] = param_2;
        puVar4[0x91] = iVar3;
        puVar4[0x92] = 0;
        if ((uVar1 & 0x2000) != 0) {
          puVar4[1] = puVar4[1] | 0x80000;
        }
        if ((uVar1 & 0x4000) != 0) {
          puVar4[1] = puVar4[1] | 0x100000;
        }
        puVar4[0x87] = param_8;
        FUN_0061aa54(puVar4);
        uVar6 = *puVar4;
        989snd::snd_SynthUnlock();
        return uVar6;
      }
    }
    989snd::snd_SynthUnlock();
  }
  return 0;
}



//==== 0060fa5c  ns=Global  size=0x60
// sig: undefined FUN_0060fa5c(void)
// callers(3): 0060e810 FUN_0060e810; 00610c74 FUN_00610c74; 00614aa0 FUN_00614aa0
// callees(0): 

double FUN_0060fa5c(int param_1)

{
  ushort uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(ushort *)(param_1 + 0xe) >> 1 & 3;
    if (uVar1 == 2) {
      return (double)*(float *)(PTR_PTR_0071b000 + -0x7ff0);
    }
    if (uVar1 == 3) {
      return (double)*(float *)(PTR_PTR_0071b000 + -0x8000);
    }
    if (uVar1 == 1) {
      return (double)*(float *)(PTR_PTR_0071b000 + -0x7ff8);
    }
  }
  return (double)*(float *)(PTR_PTR_0071b000 + -0x7fe8);
}



//==== 0060fabc  ns=Global  size=0xb8
// sig: undefined FUN_0060fabc(void)
// callers(10): 00604e98 FUN_00604e98; 006095c8 FUN_006095c8; 00609814 FUN_00609814; 0060e810 FUN_0060e810; 00610c74 FUN_00610c74; 0061183c FUN_0061183c; 00611d48 FUN_00611d48; 00612130 FUN_00612130; 00614aa0 FUN_00614aa0; 006397c4 FUN_006397c4
// callees(0): 

double FUN_0060fabc(longlong param_1,char param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)param_1;
  if ((int)fVar2 < 0) {
    fVar2 = *(float *)(PTR_PTR_0071b000 + -0x7fe8);
  }
  else {
    fVar1 = *(float *)(PTR_PTR_0071b000 + -0x7fe0);
    if (fVar1 < fVar2) goto joined_r0x0060fb30;
  }
  fVar1 = fVar2;
joined_r0x0060fb30:
  if (param_2 == '\x02') {
    return (double)((fVar1 * fVar1) / *(float *)(PTR_PTR_0071b000 + -0x7fd8));
  }
  if (param_2 != '\x01') {
    return (double)(fVar1 / *(float *)(PTR_PTR_0071b000 + -0x7fe0));
  }
  return (double)(((*(float *)(PTR_PTR_0071b000 + -0x7fe0) - fVar1) *
                  (*(float *)(PTR_PTR_0071b000 + -0x7fe0) - fVar1)) /
                  *(float *)(PTR_PTR_0071b000 + -0x7fd0) + *(float *)(PTR_PTR_0071b000 + -0x8000));
}



//==== 0060fb74  ns=Global  size=0x40
// sig: undefined FUN_0060fb74(void)
// callers(6): 00604e98 FUN_00604e98; 006095c8 FUN_006095c8; 00609814 FUN_00609814; 0060e810 FUN_0060e810; 0061183c FUN_0061183c; 00612130 FUN_00612130
// callees(0): 

short FUN_0060fb74(int param_1)

{
  short sVar1;
  
  sVar1 = (short)param_1 +
          ((short)((ulonglong)((longlong)param_1 * 0xb60b60b7) >> 0x28) - (short)(param_1 >> 0x1f))
          * -0x168;
  if (sVar1 < 0) {
    sVar1 = sVar1 + 0x168;
  }
  return sVar1;
}



//==== 0060fbb4  ns=989snd  size=0x218
// sig: undefined snd_NoteToSampleRate(void)
// callers(2): 0060e810 FUN_0060e810; 00614aa0 FUN_00614aa0
// callees(0): 

double 989snd::snd_NoteToSampleRate(char param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)param_2 - 0x7f;
  lVar3 = 0x3c;
  if ((int)uVar4 < 0) {
    uVar6 = (~uVar4 & 0xffffffff) * 0x2040811 >> 0x20;
    lVar5 = ((((~uVar4 - uVar6 << 0x20) >> 0x21) + uVar6 << 0x20) >> 0x26) + 1;
    if (0x7e < (int)param_2) {
      lVar5 = 1;
    }
    do {
      lVar3 = lVar3 + -1;
      uVar4 = uVar4 + 0x7f;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  uVar4 = uVar4 & 0x7f;
  lVar3 = lVar3 - (((longlong)((int)param_1 >> 0x1f) ^ (longlong)param_1) -
                  (longlong)((int)param_1 >> 0x1f));
  iVar2 = (int)lVar3;
  iVar1 = iVar2 >> 0x1f;
  if (iVar2 < 0) {
    uVar7 = (longlong)iVar1 - (longlong)(iVar2 / 0xc + iVar1);
    uVar6 = lVar3 + (uVar7 & 0xfffffff) * 0x10 + (uVar7 & 0x3fffffff) * -4;
    if ((int)uVar6 == 0) {
      iVar1 = ((0x1000 >> ((uint)uVar7 & 0x3f)) *
               *(int *)(*(int *)(PTR_PTR_0071b000 + -0x7fc8) + (int)((uVar6 & 0xffffffff) << 2)) >>
              0xf) * *(int *)(*(int *)(PTR_PTR_0071b000 + -0x7fc4) + (int)(uVar4 << 2));
    }
    else {
      iVar1 = ((0x1000 >> ((uint)uVar7 + 1 & 0x3f)) *
               *(int *)(*(int *)(PTR_PTR_0071b000 + -0x7fc8) +
                       (int)((uVar6 + 0xc & 0xffffffff) << 2)) >> 0xf) *
              *(int *)(*(int *)(PTR_PTR_0071b000 + -0x7fc4) + (int)(uVar4 << 2));
    }
    return (double)((float)(longlong)(iVar1 >> 0xf) * *(float *)(PTR_PTR_0071b000 + -0x7fc0) *
                    *(float *)(PTR_PTR_0071b000 + -0x7fb8) * *(float *)(PTR_PTR_0071b000 + -0x7fb0)
                   * *(float *)(PTR_PTR_0071b000 + -0x7fa8));
  }
  uVar6 = (longlong)(iVar2 / 0xc + iVar1) - (longlong)iVar1;
  return (double)((float)(longlong)
                         (((0x1000 << ((uint)uVar6 & 0x3f)) *
                           *(int *)(*(int *)(PTR_PTR_0071b000 + -0x7fc8) +
                                   (int)((lVar3 - ((uVar6 & 0xfffffff) * 0x10 +
                                                  (uVar6 & 0x3fffffff) * -4) & 0xffffffff) << 2)) >>
                          0xf) * *(int *)(*(int *)(PTR_PTR_0071b000 + -0x7fc4) + (int)(uVar4 << 2))
                         >> 0xf) * *(float *)(PTR_PTR_0071b000 + -0x7fc0) *
                  *(float *)(PTR_PTR_0071b000 + -0x7fb8) * *(float *)(PTR_PTR_0071b000 + -0x7fb0) *
                 *(float *)(PTR_PTR_0071b000 + -0x7fa8));
}



//==== 0060fdcc  ns=Global  size=0x3c
// sig: undefined FUN_0060fdcc(void)
// callers(1): 0060fec8 FUN_0060fec8
// callees(0): 

undefined8 FUN_0060fdcc(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if ((param_1 != 0x8000) && (uVar1 = 0, param_1 == 0xc000)) {
    return 2;
  }
  return uVar1;
}



//==== 0060fe08  ns=Global  size=0xc0
// sig: undefined FUN_0060fe08(void)
// callers(1): 0060fec8 FUN_0060fec8
// callees(0): 

double FUN_0060fe08(uint param_1,int param_2)

{
  float fVar1;
  
  if (param_1 == 0x4000) {
    return (double)(*(float *)(*(int *)(PTR_PTR_0071b000 + -0x7f90) + param_2 * 4) *
                   *(float *)(PTR_PTR_0071b000 + -0x7f9c));
  }
  if (param_1 < 0x4001) {
    if (param_1 == 0) {
      return (double)(*(float *)(*(int *)(PTR_PTR_0071b000 + -0x7f8c) + param_2 * 4) *
                     *(float *)(PTR_PTR_0071b000 + -0x7f9c));
    }
  }
  else {
    if (param_1 == 0x8000) {
      return (double)(*(float *)(*(int *)(PTR_PTR_0071b000 + -0x7f94) + param_2 * 4) *
                     *(float *)(PTR_PTR_0071b000 + -0x7f9c));
    }
    if (param_1 == 0xc000) {
      fVar1 = *(float *)(*(int *)(PTR_PTR_0071b000 + -0x7fa0) + param_2 * 4) *
              *(float *)(PTR_PTR_0071b000 + -0x7f9c);
      goto LAB_0060fe3c;
    }
  }
  fVar1 = *(float *)(PTR_PTR_0071b000 + -0x7fe8);
LAB_0060fe3c:
  return (double)fVar1;
}



//==== 0060fec8  ns=Global  size=0x35c
// sig: undefined FUN_0060fec8(void)
// callers(3): 0060e810 FUN_0060e810; 00614aa0 FUN_00614aa0; 00633188 FUN_00633188
// callees(2): 0060fdcc FUN_0060fdcc; 0060fe08 FUN_0060fe08

void FUN_0060fec8(ulonglong param_1,ulonglong param_2,float *param_3)

{
  float fVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined *puVar4;
  float fVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  
  puVar4 = PTR_PTR_0071b000;
  uVar7 = (uint)param_1 & 0xf;
  uVar3 = param_2 & 0xe000;
  uVar6 = (param_1 & 0xffff) >> 8 & 0x7f;
  uVar2 = (uint)(param_2 >> 6) & 0x7f;
  if ((short)param_1 < 0) {
    iVar8 = *(int *)(PTR_PTR_0071b000 + -0x7f94);
    dVar10 = (double)*(float *)(PTR_PTR_0071b000 + -0x7f9c);
    param_3[1] = 1.4013e-45;
    dVar9 = (double)*(float *)(iVar8 + (int)(uVar6 << 2)) * dVar10;
  }
  else {
    iVar8 = *(int *)(PTR_PTR_0071b000 + -0x7f90);
    dVar10 = (double)*(float *)(PTR_PTR_0071b000 + -0x7f9c);
    param_3[1] = 0.0;
    dVar9 = (double)*(float *)(iVar8 + (int)(uVar6 << 2) + 4) * dVar10;
  }
  *param_3 = (float)dVar9;
  param_3[3] = 2.8026e-45;
  fVar5 = (float)FUN_0060fdcc(param_2 & 0xffff);
  param_3[7] = fVar5;
  iVar8 = (int)uVar3;
  if (uVar7 < 0xf) {
    uVar6 = (param_1 & 0xffff) >> 4 & 0xf;
    if ((iVar8 == 0x8000) || (iVar8 == 0)) {
      fVar5 = *(float *)(puVar4 + -0x7f88);
      fVar1 = *(float *)(*(int *)(puVar4 + -0x7f80) + (int)(uVar6 << 2));
      param_3[5] = *(float *)(puVar4 + -0x8000);
      param_3[2] = (float)((double)fVar1 * dVar10);
      param_3[4] = (float)(longlong)(int)(uVar7 + 1) * fVar5;
      dVar9 = (double)FUN_0060fe08(uVar3,uVar2);
      param_3[6] = (float)dVar9;
      *(undefined1 *)(param_3 + 8) = 1;
    }
    else if (uVar2 < 0x7f) {
      fVar5 = *(float *)(puVar4 + -0x7f88);
      fVar1 = *(float *)(*(int *)(puVar4 + -0x7f80) + (int)(uVar6 << 2));
      param_3[5] = 0.0;
      param_3[2] = (float)((double)fVar1 * dVar10);
      param_3[4] = (float)(longlong)(int)(uVar7 + 1) * fVar5;
      dVar9 = (double)FUN_0060fe08(uVar3,uVar2);
      param_3[6] = (float)dVar9;
      *(undefined1 *)(param_3 + 8) = 0;
    }
    else {
      fVar5 = *(float *)(puVar4 + -0x7f88);
      fVar1 = *(float *)(*(int *)(puVar4 + -0x7f80) + (int)(uVar6 << 2));
      param_3[6] = *(float *)(puVar4 + -0x8000);
      *(undefined1 *)(param_3 + 8) = 1;
      param_3[2] = (float)((double)fVar1 * dVar10);
      fVar5 = (float)(longlong)(int)(uVar7 + 1) * fVar5;
      param_3[5] = fVar5;
      param_3[4] = fVar5;
    }
  }
  else if ((iVar8 == 0x8000) || (iVar8 == 0)) {
    fVar5 = *(float *)(puVar4 + -0x8000);
    param_3[6] = fVar5;
    param_3[2] = 0.0;
    param_3[4] = fVar5;
    param_3[5] = fVar5;
    *(undefined1 *)(param_3 + 8) = 1;
  }
  else if (uVar2 < 0x7f) {
    dVar9 = (double)FUN_0060fe08(uVar3,uVar2);
    param_3[2] = (float)dVar9;
    fVar5 = (float)FUN_0060fdcc(uVar3);
    param_3[3] = fVar5;
    param_3[6] = 0.0;
    *(undefined1 *)(param_3 + 8) = 0;
    param_3[4] = 0.0;
    param_3[5] = 0.0;
  }
  else {
    fVar5 = *(float *)(puVar4 + -0x7f88);
    fVar1 = *(float *)(puVar4 + -0x8000);
    param_3[6] = fVar1;
    param_3[2] = 0.0;
    param_3[5] = fVar1;
    *(undefined1 *)(param_3 + 8) = 1;
    param_3[4] = (float)(longlong)(int)(uVar7 + 1) * fVar5;
  }
  if ((param_2 & 0x20) == 0) {
    iVar8 = *(int *)(puVar4 + -0x7f90);
    param_3[10] = (float)((uint)param_2 & 0x20);
    param_3[9] = (float)((double)*(float *)(iVar8 + (int)((param_2 & 0x1f) << 4)) * dVar10);
    return;
  }
  iVar8 = *(int *)(puVar4 + -0x7fa0);
  param_3[10] = 2.8026e-45;
  param_3[9] = (float)((double)*(float *)(iVar8 + (int)((param_2 & 0x1f) << 4)) * dVar10);
  return;
}



