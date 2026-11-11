//==== 002e2e70  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1943_002e2e70(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1943_002e2e70(void)

{
  DAT_007f3f78 = 0x10000;
  return;
}



//==== 002e2e98  ns=mobyupdate_helpers  size=0x21c
// sig: undefined M1943_002e2e98(void)
// callers(1): 002e30b8 mobyupdate_helpers::M1943_002e30b8
// callees(0): 

void mobyupdate_helpers::M1943_002e2e98
               (int param_1,float *param_2,float *param_3,undefined8 param_4,float *param_5)

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
  int iVar12;
  
  iVar12 = 0;
  if (0 < param_1) {
    fVar1 = 0.0;
    do {
      fVar2 = param_3[1] - GameCamera.posY;
      fVar3 = *param_3 - GameCamera.posX;
      fVar8 = param_3[2] - GameCamera.posZ;
      fVar4 = fVar8 * fVar8 + fVar3 * fVar3 + fVar2 * fVar2;
      fVar6 = fVar1;
      fVar5 = fVar1;
      fVar7 = fVar1;
      if (SQRT(fVar4) != 0.0) {
        fVar5 = 1.0 / SQRT(fVar4);
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar6 = fVar3 * fVar5;
        fVar7 = fVar2 * fVar5;
        fVar5 = fVar8 * fVar5;
      }
      fVar2 = param_2[1];
      fVar3 = *param_2;
      fVar4 = param_2[2];
      fVar11 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
      fVar9 = fVar1;
      fVar10 = fVar1;
      fVar8 = fVar1;
      if (SQRT(fVar11) != 0.0) {
        fVar8 = 1.0 / SQRT(fVar11);
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar9 = fVar8 * fVar3;
        fVar10 = fVar8 * fVar2;
        fVar8 = fVar8 * fVar4;
      }
      fVar2 = (fVar5 * fVar8 + fVar6 * fVar9 + fVar7 * fVar10) * 2.0;
      fVar3 = -(fVar2 * fVar10 - fVar7);
      fVar9 = -(fVar2 * fVar9 - fVar6);
      fVar2 = -(fVar2 * fVar8 - fVar5);
      fVar4 = fVar2 * fVar2 + fVar9 * fVar9 + fVar3 * fVar3;
      fVar5 = fVar1;
      fVar6 = fVar1;
      fVar7 = fVar1;
      if (SQRT(fVar4) != 0.0) {
        fVar7 = 1.0 / SQRT(fVar4);
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar5 = fVar7 * fVar9;
        fVar6 = fVar7 * fVar3;
        fVar7 = fVar7 * fVar2;
      }
      iVar12 = iVar12 + 1;
      param_3 = param_3 + 3;
      param_2 = param_2 + 3;
      fVar7 = SQRT((fVar7 + 1.0) * (fVar7 + 1.0) + fVar5 * fVar5 + fVar6 * fVar6) * 2.0;
      *param_5 = (fVar5 / fVar7 + 0.5) * 2.0;
      param_5[1] = (fVar6 / fVar7 + 0.5) * 2.0;
      param_5 = param_5 + 2;
    } while (iVar12 < param_1);
  }
  return;
}



//==== 002e30b8  ns=mobyupdate_helpers  size=0x1dc
// sig: undefined M1943_002e30b8(void)
// callers(0): 
// callees(9): 000685c4 draw::GetEffectTex; 00071170 stub::STUB_00071170; 00074604 draw::DrawMeshSet; 00174f80 vuchain::SetGSReg; 002e2e98 mobyupdate_helpers::M1943_002e2e98; 00502910 fastfunc::FastCheckBsphereInView; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1943_002e30b8(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined4 *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined4 *puVar9;
  
  uVar1 = draw::GetEffectTex(0x29);
  vuchain::SetGSReg(0x18,uVar1);
  uVar1 = idol_draw::PackCmd(0,1,2,1,0x40);
  vuchain::SetGSReg(3,uVar1);
  uVar1 = FUN_00502f08(0,0,0,0,0,0);
  vuchain::SetGSReg(6,uVar1);
  uVar1 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  vuchain::SetGSReg(0x1a,uVar1);
  stub::STUB_00071170();
  uVar1 = 0x4080000000000000;
  iVar3 = 0;
  ppuVar4 = &PTR_DAT_007f6d20;
  puVar6 = &DAT_007f3fa0;
  ppuVar8 = &PTR_DAT_007f6d2c;
  ppuVar5 = &PTR_DAT_007f6d14;
  puVar9 = &DAT_010b9c10;
  ppuVar7 = &PTR_DAT_007f6d08;
  do {
    iVar2 = fastfunc::FastCheckBsphereInView(uVar1,puVar9);
    if (iVar2 != -1) {
      M1943_002e2e98(*puVar6,*ppuVar4,*ppuVar7,*ppuVar5,&DAT_010b9c40);
      draw::DrawMeshSet(*puVar6,*ppuVar7,*ppuVar8,&DAT_010b9c40,9);
    }
    iVar3 = iVar3 + 1;
    puVar9 = puVar9 + 4;
    ppuVar4 = ppuVar4 + 1;
    ppuVar5 = ppuVar5 + 1;
    puVar6 = puVar6 + 1;
    ppuVar7 = ppuVar7 + 1;
    ppuVar8 = ppuVar8 + 1;
  } while (iVar3 < 3);
  return;
}



//==== 002e32a0  ns=mobyupdate_unsorted  size=0x1e4
// sig: undefined UpdateMoby_1943(MobyInstance * moby)
// callers(0): 
// callees(1): 0006d720 RegisterFuncForMoby

/* Moby 1943 */

void mobyupdate_unsorted::UpdateMoby_1943(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  
  if (moby->state == 0) {
    iVar14 = 0;
    piVar12 = &DAT_007f3fa0;
    iVar13 = 0;
    pfVar11 = (float *)&DAT_010b9c10;
    do {
      fVar1 = -1024.0;
      fVar2 = 1024.0;
      iVar7 = *piVar12;
      fVar8 = fVar2;
      fVar5 = fVar1;
      fVar9 = fVar2;
      fVar10 = fVar1;
      if (0 < iVar7) {
        iVar17 = 0;
        iVar15 = iVar7;
        do {
          iVar15 = iVar15 + -1;
          iVar16 = *(int *)((int)&PTR_DAT_007f6d08 + iVar13) + iVar17;
          fVar6 = *(float *)(*(int *)((int)&PTR_DAT_007f6d08 + iVar13) + iVar17);
          iVar17 = iVar17 + 0xc;
          fVar3 = *(float *)(iVar16 + 4);
          fVar4 = *(float *)(iVar16 + 8);
          if (fVar5 - fVar6 < 0.0) {
            fVar5 = fVar6;
          }
          if (fVar6 - fVar8 < 0.0) {
            fVar8 = fVar6;
          }
          if (fVar1 - fVar3 < 0.0) {
            fVar1 = fVar3;
          }
          if (fVar10 - fVar4 < 0.0) {
            fVar10 = fVar4;
          }
          if (fVar3 - fVar2 < 0.0) {
            fVar2 = fVar3;
          }
          if (fVar4 - fVar9 < 0.0) {
            fVar9 = fVar4;
          }
        } while (0 < iVar15);
      }
      pfVar11[3] = 0.0;
      iVar15 = 0;
      fVar8 = (fVar5 + fVar8) * 0.5;
      fVar1 = (fVar1 + fVar2) * 0.5;
      fVar2 = (fVar10 + fVar9) * 0.5;
      *pfVar11 = fVar8;
      pfVar11[1] = fVar1;
      pfVar11[2] = fVar2;
      if (0 < iVar7) {
        iVar17 = 0;
        fVar5 = pfVar11[3];
        do {
          iVar16 = *(int *)((int)&PTR_DAT_007f6d08 + iVar13) + iVar17;
          fVar9 = *(float *)(*(int *)((int)&PTR_DAT_007f6d08 + iVar13) + iVar17) - fVar8;
          fVar10 = *(float *)(iVar16 + 4) - fVar1;
          fVar3 = *(float *)(iVar16 + 8) - fVar2;
          fVar9 = SQRT(fVar3 * fVar3 + fVar9 * fVar9 + fVar10 * fVar10);
          if (fVar5 < fVar9) {
            pfVar11[3] = fVar9;
            fVar5 = fVar9;
          }
          iVar15 = iVar15 + 1;
          iVar17 = iVar17 + 0xc;
        } while (iVar15 < iVar7);
      }
      iVar14 = iVar14 + 1;
      piVar12 = piVar12 + 1;
      iVar13 = iVar13 + 4;
      pfVar11 = pfVar11 + 4;
    } while (iVar14 < 3);
    moby->state = '\x01';
  }
  else if (moby->state < 2) {
    RegisterFuncForMoby(&PTR_M1943_002e30b8_0070b600,moby);
  }
  return;
}



//==== 002e3498  ns=mobyupdate_helpers  size=0x21c
// sig: undefined M1947_002e3498(void)
// callers(1): 002e36b8 mobyupdate_helpers::M1947_002e36b8
// callees(0): 

void mobyupdate_helpers::M1947_002e3498
               (int param_1,float *param_2,float *param_3,undefined8 param_4,float *param_5)

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
  int iVar12;
  
  iVar12 = 0;
  if (0 < param_1) {
    fVar1 = 0.0;
    do {
      fVar2 = param_3[1] - GameCamera.posY;
      fVar3 = *param_3 - GameCamera.posX;
      fVar8 = param_3[2] - GameCamera.posZ;
      fVar4 = fVar8 * fVar8 + fVar3 * fVar3 + fVar2 * fVar2;
      fVar6 = fVar1;
      fVar5 = fVar1;
      fVar7 = fVar1;
      if (SQRT(fVar4) != 0.0) {
        fVar5 = 1.0 / SQRT(fVar4);
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar6 = fVar3 * fVar5;
        fVar7 = fVar2 * fVar5;
        fVar5 = fVar8 * fVar5;
      }
      fVar2 = param_2[1];
      fVar3 = *param_2;
      fVar4 = param_2[2];
      fVar11 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
      fVar9 = fVar1;
      fVar10 = fVar1;
      fVar8 = fVar1;
      if (SQRT(fVar11) != 0.0) {
        fVar8 = 1.0 / SQRT(fVar11);
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar9 = fVar8 * fVar3;
        fVar10 = fVar8 * fVar2;
        fVar8 = fVar8 * fVar4;
      }
      fVar2 = (fVar5 * fVar8 + fVar6 * fVar9 + fVar7 * fVar10) * 2.0;
      fVar3 = -(fVar2 * fVar10 - fVar7);
      fVar9 = -(fVar2 * fVar9 - fVar6);
      fVar2 = -(fVar2 * fVar8 - fVar5);
      fVar4 = fVar2 * fVar2 + fVar9 * fVar9 + fVar3 * fVar3;
      fVar5 = fVar1;
      fVar6 = fVar1;
      fVar7 = fVar1;
      if (SQRT(fVar4) != 0.0) {
        fVar7 = 1.0 / SQRT(fVar4);
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar5 = fVar7 * fVar9;
        fVar6 = fVar7 * fVar3;
        fVar7 = fVar7 * fVar2;
      }
      iVar12 = iVar12 + 1;
      param_3 = param_3 + 3;
      param_2 = param_2 + 3;
      fVar7 = SQRT((fVar7 + 1.0) * (fVar7 + 1.0) + fVar5 * fVar5 + fVar6 * fVar6) * 2.0;
      *param_5 = (fVar5 / fVar7 + 0.5) * 2.0;
      param_5[1] = (fVar6 / fVar7 + 0.5) * 2.0;
      param_5 = param_5 + 2;
    } while (iVar12 < param_1);
  }
  return;
}



//==== 002e36b8  ns=mobyupdate_helpers  size=0x1dc
// sig: undefined M1947_002e36b8(void)
// callers(0): 
// callees(9): 000685c4 draw::GetEffectTex; 00071170 stub::STUB_00071170; 00074604 draw::DrawMeshSet; 00174f80 vuchain::SetGSReg; 002e3498 mobyupdate_helpers::M1947_002e3498; 00502910 fastfunc::FastCheckBsphereInView; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1947_002e36b8(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined4 *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined4 *puVar9;
  
  uVar1 = draw::GetEffectTex(0x29);
  vuchain::SetGSReg(0x18,uVar1);
  uVar1 = idol_draw::PackCmd(0,1,2,1,0x40);
  vuchain::SetGSReg(3,uVar1);
  uVar1 = FUN_00502f08(0,0,0,0,0,0);
  vuchain::SetGSReg(6,uVar1);
  uVar1 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  vuchain::SetGSReg(0x1a,uVar1);
  stub::STUB_00071170();
  uVar1 = 0x4080000000000000;
  iVar3 = 0;
  ppuVar4 = &PTR_DAT_007f7f00;
  puVar6 = &DAT_007f6d40;
  ppuVar8 = &PTR_DAT_007f7f04;
  ppuVar5 = &PTR_DAT_007f7efc;
  puVar9 = &DAT_010ba0f0;
  ppuVar7 = &PTR_DAT_007f7ef8;
  do {
    iVar2 = fastfunc::FastCheckBsphereInView(uVar1,puVar9);
    if (iVar2 != -1) {
      M1947_002e3498(*puVar6,*ppuVar4,*ppuVar7,*ppuVar5,&DAT_010ba100);
      draw::DrawMeshSet(*puVar6,*ppuVar7,*ppuVar8,&DAT_010ba100,9);
    }
    iVar3 = iVar3 + 1;
    puVar9 = puVar9 + 4;
    ppuVar4 = ppuVar4 + 1;
    ppuVar5 = ppuVar5 + 1;
    puVar6 = puVar6 + 1;
    ppuVar7 = ppuVar7 + 1;
    ppuVar8 = ppuVar8 + 1;
  } while (iVar3 < 1);
  return;
}



//==== 002e38a0  ns=mobyupdate_unsorted  size=0x1f0
// sig: undefined UpdateMoby_1947(MobyInstance * moby)
// callers(0): 
// callees(1): 0006d720 RegisterFuncForMoby

/* Moby 1947 */

void mobyupdate_unsorted::UpdateMoby_1947(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  
  if (moby->state == 0) {
    iVar14 = 0;
    piVar12 = &DAT_007f6d40;
    iVar13 = 0;
    pfVar11 = (float *)&DAT_010ba0f0;
    do {
      fVar1 = -1024.0;
      fVar2 = 1024.0;
      iVar7 = *piVar12;
      fVar8 = fVar2;
      fVar5 = fVar1;
      fVar9 = fVar2;
      fVar10 = fVar1;
      if (0 < iVar7) {
        iVar17 = 0;
        iVar15 = iVar7;
        do {
          iVar15 = iVar15 + -1;
          iVar16 = *(int *)((int)&PTR_DAT_007f7ef8 + iVar13) + iVar17;
          fVar6 = *(float *)(*(int *)((int)&PTR_DAT_007f7ef8 + iVar13) + iVar17);
          iVar17 = iVar17 + 0xc;
          fVar3 = *(float *)(iVar16 + 4);
          fVar4 = *(float *)(iVar16 + 8);
          if (fVar5 - fVar6 < 0.0) {
            fVar5 = fVar6;
          }
          if (fVar6 - fVar8 < 0.0) {
            fVar8 = fVar6;
          }
          if (fVar1 - fVar3 < 0.0) {
            fVar1 = fVar3;
          }
          if (fVar10 - fVar4 < 0.0) {
            fVar10 = fVar4;
          }
          if (fVar3 - fVar2 < 0.0) {
            fVar2 = fVar3;
          }
          if (fVar4 - fVar9 < 0.0) {
            fVar9 = fVar4;
          }
        } while (0 < iVar15);
      }
      pfVar11[3] = 0.0;
      iVar15 = 0;
      fVar8 = (fVar5 + fVar8) * 0.5;
      fVar1 = (fVar1 + fVar2) * 0.5;
      fVar2 = (fVar10 + fVar9) * 0.5;
      *pfVar11 = fVar8;
      pfVar11[1] = fVar1;
      pfVar11[2] = fVar2;
      if (0 < iVar7) {
        iVar17 = 0;
        fVar5 = pfVar11[3];
        do {
          iVar16 = *(int *)((int)&PTR_DAT_007f7ef8 + iVar13) + iVar17;
          fVar9 = *(float *)(*(int *)((int)&PTR_DAT_007f7ef8 + iVar13) + iVar17) - fVar8;
          fVar10 = *(float *)(iVar16 + 4) - fVar1;
          fVar3 = *(float *)(iVar16 + 8) - fVar2;
          fVar9 = SQRT(fVar3 * fVar3 + fVar9 * fVar9 + fVar10 * fVar10);
          if (fVar5 < fVar9) {
            pfVar11[3] = fVar9;
            fVar5 = fVar9;
          }
          iVar15 = iVar15 + 1;
          iVar17 = iVar17 + 0xc;
        } while (iVar15 < iVar7);
      }
      iVar14 = iVar14 + 1;
      piVar12 = piVar12 + 1;
      iVar13 = iVar13 + 4;
      pfVar11 = pfVar11 + 4;
    } while (iVar14 < 1);
    moby->state = '\x01';
    moby->drawDistance = 0xff;
    moby->updateDistance = -1;
  }
  else if (moby->state < 2) {
    RegisterFuncForMoby(&PTR_M1947_002e36b8_0070b618,moby);
  }
  return;
}



//==== 002e3aa0  ns=mobyupdate_helpers  size=0x21c
// sig: undefined M1948_002e3aa0(void)
// callers(1): 002e3cc0 mobyupdate_helpers::M1948_002e3cc0
// callees(0): 

void mobyupdate_helpers::M1948_002e3aa0
               (int param_1,float *param_2,float *param_3,undefined8 param_4,float *param_5)

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
  int iVar12;
  
  iVar12 = 0;
  if (0 < param_1) {
    fVar1 = 0.0;
    do {
      fVar2 = param_3[1] - GameCamera.posY;
      fVar3 = *param_3 - GameCamera.posX;
      fVar8 = param_3[2] - GameCamera.posZ;
      fVar4 = fVar8 * fVar8 + fVar3 * fVar3 + fVar2 * fVar2;
      fVar6 = fVar1;
      fVar5 = fVar1;
      fVar7 = fVar1;
      if (SQRT(fVar4) != 0.0) {
        fVar5 = 1.0 / SQRT(fVar4);
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar6 = fVar3 * fVar5;
        fVar7 = fVar2 * fVar5;
        fVar5 = fVar8 * fVar5;
      }
      fVar2 = param_2[1];
      fVar3 = *param_2;
      fVar4 = param_2[2];
      fVar11 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
      fVar9 = fVar1;
      fVar10 = fVar1;
      fVar8 = fVar1;
      if (SQRT(fVar11) != 0.0) {
        fVar8 = 1.0 / SQRT(fVar11);
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar9 = fVar8 * fVar3;
        fVar10 = fVar8 * fVar2;
        fVar8 = fVar8 * fVar4;
      }
      fVar2 = (fVar5 * fVar8 + fVar6 * fVar9 + fVar7 * fVar10) * 2.0;
      fVar3 = -(fVar2 * fVar10 - fVar7);
      fVar9 = -(fVar2 * fVar9 - fVar6);
      fVar2 = -(fVar2 * fVar8 - fVar5);
      fVar4 = fVar2 * fVar2 + fVar9 * fVar9 + fVar3 * fVar3;
      fVar5 = fVar1;
      fVar6 = fVar1;
      fVar7 = fVar1;
      if (SQRT(fVar4) != 0.0) {
        fVar7 = 1.0 / SQRT(fVar4);
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar5 = fVar7 * fVar9;
        fVar6 = fVar7 * fVar3;
        fVar7 = fVar7 * fVar2;
      }
      iVar12 = iVar12 + 1;
      param_3 = param_3 + 3;
      param_2 = param_2 + 3;
      fVar7 = SQRT((fVar7 + 1.0) * (fVar7 + 1.0) + fVar5 * fVar5 + fVar6 * fVar6) * 2.0;
      *param_5 = (fVar5 / fVar7 + 0.5) * 2.0;
      param_5[1] = (fVar6 / fVar7 + 0.5) * 2.0;
      param_5 = param_5 + 2;
    } while (iVar12 < param_1);
  }
  return;
}



//==== 002e3cc0  ns=mobyupdate_helpers  size=0x1dc
// sig: undefined M1948_002e3cc0(void)
// callers(0): 
// callees(9): 000685c4 draw::GetEffectTex; 00071170 stub::STUB_00071170; 00074604 draw::DrawMeshSet; 00174f80 vuchain::SetGSReg; 002e3aa0 mobyupdate_helpers::M1948_002e3aa0; 00502910 fastfunc::FastCheckBsphereInView; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1948_002e3cc0(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined4 *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined4 *puVar9;
  
  uVar1 = draw::GetEffectTex(0x29);
  vuchain::SetGSReg(0x18,uVar1);
  uVar1 = idol_draw::PackCmd(0,1,2,1,0x40);
  vuchain::SetGSReg(3,uVar1);
  uVar1 = FUN_00502f08(0,0,0,0,0,0);
  vuchain::SetGSReg(6,uVar1);
  uVar1 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  vuchain::SetGSReg(0x1a,uVar1);
  stub::STUB_00071170();
  uVar1 = 0x4080000000000000;
  iVar3 = 0;
  ppuVar4 = &PTR_DAT_007f90a8;
  puVar6 = &DAT_007f7f10;
  ppuVar8 = &PTR_DAT_007f90b0;
  ppuVar5 = &PTR_DAT_007f90a0;
  puVar9 = &DAT_010ba5b0;
  ppuVar7 = &PTR_DAT_007f9098;
  do {
    iVar2 = fastfunc::FastCheckBsphereInView(uVar1,puVar9);
    if (iVar2 != -1) {
      M1948_002e3aa0(*puVar6,*ppuVar4,*ppuVar7,*ppuVar5,&DAT_010ba5d0);
      draw::DrawMeshSet(*puVar6,*ppuVar7,*ppuVar8,&DAT_010ba5d0,9);
    }
    iVar3 = iVar3 + 1;
    puVar9 = puVar9 + 4;
    ppuVar4 = ppuVar4 + 1;
    ppuVar5 = ppuVar5 + 1;
    puVar6 = puVar6 + 1;
    ppuVar7 = ppuVar7 + 1;
    ppuVar8 = ppuVar8 + 1;
  } while (iVar3 < 2);
  return;
}



//==== 002e3ea8  ns=mobyupdate_unsorted  size=0x1f0
// sig: undefined UpdateMoby_1948(MobyInstance * moby)
// callers(0): 
// callees(1): 0006d720 RegisterFuncForMoby

/* Moby 1948 */

void mobyupdate_unsorted::UpdateMoby_1948(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  
  if (moby->state == 0) {
    iVar14 = 0;
    piVar12 = &DAT_007f7f10;
    iVar13 = 0;
    pfVar11 = (float *)&DAT_010ba5b0;
    do {
      fVar1 = -1024.0;
      fVar2 = 1024.0;
      iVar7 = *piVar12;
      fVar8 = fVar2;
      fVar5 = fVar1;
      fVar9 = fVar2;
      fVar10 = fVar1;
      if (0 < iVar7) {
        iVar17 = 0;
        iVar15 = iVar7;
        do {
          iVar15 = iVar15 + -1;
          iVar16 = *(int *)((int)&PTR_DAT_007f9098 + iVar13) + iVar17;
          fVar6 = *(float *)(*(int *)((int)&PTR_DAT_007f9098 + iVar13) + iVar17);
          iVar17 = iVar17 + 0xc;
          fVar3 = *(float *)(iVar16 + 4);
          fVar4 = *(float *)(iVar16 + 8);
          if (fVar5 - fVar6 < 0.0) {
            fVar5 = fVar6;
          }
          if (fVar6 - fVar8 < 0.0) {
            fVar8 = fVar6;
          }
          if (fVar1 - fVar3 < 0.0) {
            fVar1 = fVar3;
          }
          if (fVar10 - fVar4 < 0.0) {
            fVar10 = fVar4;
          }
          if (fVar3 - fVar2 < 0.0) {
            fVar2 = fVar3;
          }
          if (fVar4 - fVar9 < 0.0) {
            fVar9 = fVar4;
          }
        } while (0 < iVar15);
      }
      pfVar11[3] = 0.0;
      iVar15 = 0;
      fVar8 = (fVar5 + fVar8) * 0.5;
      fVar1 = (fVar1 + fVar2) * 0.5;
      fVar2 = (fVar10 + fVar9) * 0.5;
      *pfVar11 = fVar8;
      pfVar11[1] = fVar1;
      pfVar11[2] = fVar2;
      if (0 < iVar7) {
        iVar17 = 0;
        fVar5 = pfVar11[3];
        do {
          iVar16 = *(int *)((int)&PTR_DAT_007f9098 + iVar13) + iVar17;
          fVar9 = *(float *)(*(int *)((int)&PTR_DAT_007f9098 + iVar13) + iVar17) - fVar8;
          fVar10 = *(float *)(iVar16 + 4) - fVar1;
          fVar3 = *(float *)(iVar16 + 8) - fVar2;
          fVar9 = SQRT(fVar3 * fVar3 + fVar9 * fVar9 + fVar10 * fVar10);
          if (fVar5 < fVar9) {
            pfVar11[3] = fVar9;
            fVar5 = fVar9;
          }
          iVar15 = iVar15 + 1;
          iVar17 = iVar17 + 0xc;
        } while (iVar15 < iVar7);
      }
      iVar14 = iVar14 + 1;
      piVar12 = piVar12 + 1;
      iVar13 = iVar13 + 4;
      pfVar11 = pfVar11 + 4;
    } while (iVar14 < 2);
    moby->state = '\x01';
    moby->drawDistance = 0xff;
    moby->updateDistance = -1;
  }
  else if (moby->state < 2) {
    RegisterFuncForMoby(&PTR_M1948_002e3cc0_0070b630,moby);
  }
  return;
}



//==== 002e40a8  ns=mobyupdate_helpers  size=0x21c
// sig: undefined M1952_002e40a8(void)
// callers(1): 002e42c4 mobyupdate_helpers::M1952_002e42c4
// callees(0): 

void mobyupdate_helpers::M1952_002e40a8
               (int param_1,float *param_2,float *param_3,undefined8 param_4,float *param_5)

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
  int iVar12;
  
  iVar12 = 0;
  if (0 < param_1) {
    fVar1 = 0.0;
    do {
      fVar2 = param_3[1] - GameCamera.posY;
      fVar3 = *param_3 - GameCamera.posX;
      fVar8 = param_3[2] - GameCamera.posZ;
      fVar4 = fVar8 * fVar8 + fVar3 * fVar3 + fVar2 * fVar2;
      fVar6 = fVar1;
      fVar5 = fVar1;
      fVar7 = fVar1;
      if (SQRT(fVar4) != 0.0) {
        fVar5 = 1.0 / SQRT(fVar4);
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar6 = fVar3 * fVar5;
        fVar7 = fVar2 * fVar5;
        fVar5 = fVar8 * fVar5;
      }
      fVar2 = param_2[1];
      fVar3 = *param_2;
      fVar4 = param_2[2];
      fVar11 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
      fVar9 = fVar1;
      fVar10 = fVar1;
      fVar8 = fVar1;
      if (SQRT(fVar11) != 0.0) {
        fVar8 = 1.0 / SQRT(fVar11);
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar9 = fVar8 * fVar3;
        fVar10 = fVar8 * fVar2;
        fVar8 = fVar8 * fVar4;
      }
      fVar2 = (fVar5 * fVar8 + fVar6 * fVar9 + fVar7 * fVar10) * 2.0;
      fVar3 = -(fVar2 * fVar10 - fVar7);
      fVar9 = -(fVar2 * fVar9 - fVar6);
      fVar2 = -(fVar2 * fVar8 - fVar5);
      fVar4 = fVar2 * fVar2 + fVar9 * fVar9 + fVar3 * fVar3;
      fVar5 = fVar1;
      fVar6 = fVar1;
      fVar7 = fVar1;
      if (SQRT(fVar4) != 0.0) {
        fVar7 = 1.0 / SQRT(fVar4);
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar5 = fVar7 * fVar9;
        fVar6 = fVar7 * fVar3;
        fVar7 = fVar7 * fVar2;
      }
      iVar12 = iVar12 + 1;
      param_3 = param_3 + 3;
      param_2 = param_2 + 3;
      fVar7 = SQRT((fVar7 + 1.0) * (fVar7 + 1.0) + fVar5 * fVar5 + fVar6 * fVar6) * 2.0;
      *param_5 = (fVar5 / fVar7 + 0.5) * 2.0;
      param_5[1] = (fVar6 / fVar7 + 0.5) * 2.0;
      param_5 = param_5 + 2;
    } while (iVar12 < param_1);
  }
  return;
}



//==== 002e42c4  ns=mobyupdate_helpers  size=0x19c
// sig: undefined M1952_002e42c4(void)
// callers(0): 
// callees(8): 000685c4 draw::GetEffectTex; 00071170 stub::STUB_00071170; 00074604 draw::DrawMeshSet; 00174f80 vuchain::SetGSReg; 002e40a8 mobyupdate_helpers::M1952_002e40a8; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1952_002e42c4(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined4 *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  
  uVar1 = draw::GetEffectTex(0x29);
  vuchain::SetGSReg(0x18,uVar1);
  uVar1 = idol_draw::PackCmd(0,1,2,1,0x40);
  vuchain::SetGSReg(3,uVar1);
  uVar1 = FUN_00502f08(0,0,0,0,0,0);
  vuchain::SetGSReg(6,uVar1);
  uVar1 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  vuchain::SetGSReg(0x1a,uVar1);
  stub::STUB_00071170();
  iVar2 = 0;
  ppuVar3 = &PTR_DAT_007fc230;
  puVar5 = &DAT_007f90c0;
  ppuVar4 = &PTR_DAT_007fc224;
  ppuVar7 = &PTR_DAT_007fc23c;
  ppuVar6 = &PTR_DAT_007fc218;
  do {
    M1952_002e40a8(*puVar5,*ppuVar3,*ppuVar6,*ppuVar4,&DAT_010baa80);
    draw::DrawMeshSet(*puVar5,*ppuVar6,*ppuVar7,&DAT_010baa80,9);
    iVar2 = iVar2 + 1;
    ppuVar3 = ppuVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
    puVar5 = puVar5 + 1;
    ppuVar6 = ppuVar6 + 1;
    ppuVar7 = ppuVar7 + 1;
  } while (iVar2 < 3);
  return;
}



//==== 002e4460  ns=mobyupdate_unsorted  size=0x60
// sig: undefined UpdateMoby_1952(MobyInstance * moby)
// callers(0): 
// callees(1): 0006d720 RegisterFuncForMoby

/* Moby 1952 */

void mobyupdate_unsorted::UpdateMoby_1952(MobyInstance *moby)

{
  if (moby->state == 0) {
    moby->state = '\x01';
  }
  else if (moby->state < 2) {
    RegisterFuncForMoby(&PTR_M1952_002e42c4_0070b648,moby);
  }
  return;
}



//==== 002e44d0  ns=mobyupdate_helpers  size=0x21c
// sig: undefined M1953_002e44d0(void)
// callers(1): 002e46f0 mobyupdate_helpers::M1953_002e46f0
// callees(0): 

void mobyupdate_helpers::M1953_002e44d0
               (int param_1,float *param_2,float *param_3,undefined8 param_4,float *param_5)

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
  int iVar12;
  
  iVar12 = 0;
  if (0 < param_1) {
    fVar1 = 0.0;
    do {
      fVar2 = param_3[1] - GameCamera.posY;
      fVar3 = *param_3 - GameCamera.posX;
      fVar8 = param_3[2] - GameCamera.posZ;
      fVar4 = fVar8 * fVar8 + fVar3 * fVar3 + fVar2 * fVar2;
      fVar6 = fVar1;
      fVar5 = fVar1;
      fVar7 = fVar1;
      if (SQRT(fVar4) != 0.0) {
        fVar5 = 1.0 / SQRT(fVar4);
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar6 = fVar3 * fVar5;
        fVar7 = fVar2 * fVar5;
        fVar5 = fVar8 * fVar5;
      }
      fVar2 = param_2[1];
      fVar3 = *param_2;
      fVar4 = param_2[2];
      fVar11 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
      fVar9 = fVar1;
      fVar10 = fVar1;
      fVar8 = fVar1;
      if (SQRT(fVar11) != 0.0) {
        fVar8 = 1.0 / SQRT(fVar11);
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar9 = fVar8 * fVar3;
        fVar10 = fVar8 * fVar2;
        fVar8 = fVar8 * fVar4;
      }
      fVar2 = (fVar5 * fVar8 + fVar6 * fVar9 + fVar7 * fVar10) * 2.0;
      fVar3 = -(fVar2 * fVar10 - fVar7);
      fVar9 = -(fVar2 * fVar9 - fVar6);
      fVar2 = -(fVar2 * fVar8 - fVar5);
      fVar4 = fVar2 * fVar2 + fVar9 * fVar9 + fVar3 * fVar3;
      fVar5 = fVar1;
      fVar6 = fVar1;
      fVar7 = fVar1;
      if (SQRT(fVar4) != 0.0) {
        fVar7 = 1.0 / SQRT(fVar4);
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar5 = fVar7 * fVar9;
        fVar6 = fVar7 * fVar3;
        fVar7 = fVar7 * fVar2;
      }
      iVar12 = iVar12 + 1;
      param_3 = param_3 + 3;
      param_2 = param_2 + 3;
      fVar7 = SQRT((fVar7 + 1.0) * (fVar7 + 1.0) + fVar5 * fVar5 + fVar6 * fVar6) * 2.0;
      *param_5 = (fVar5 / fVar7 + 0.5) * 2.0;
      param_5[1] = (fVar6 / fVar7 + 0.5) * 2.0;
      param_5 = param_5 + 2;
    } while (iVar12 < param_1);
  }
  return;
}



//==== 002e46f0  ns=mobyupdate_helpers  size=0x1dc
// sig: undefined M1953_002e46f0(void)
// callers(0): 
// callees(9): 000685c4 draw::GetEffectTex; 00071170 stub::STUB_00071170; 00074604 draw::DrawMeshSet; 00174f80 vuchain::SetGSReg; 002e44d0 mobyupdate_helpers::M1953_002e44d0; 00502910 fastfunc::FastCheckBsphereInView; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1953_002e46f0(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined4 *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined4 *puVar9;
  
  uVar1 = draw::GetEffectTex(0x29);
  vuchain::SetGSReg(0x18,uVar1);
  uVar1 = idol_draw::PackCmd(0,1,2,1,0x40);
  vuchain::SetGSReg(3,uVar1);
  uVar1 = FUN_00502f08(0,0,0,0,0,0);
  vuchain::SetGSReg(6,uVar1);
  uVar1 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  vuchain::SetGSReg(0x1a,uVar1);
  stub::STUB_00071170();
  uVar1 = 0x4080000000000000;
  iVar3 = 0;
  ppuVar4 = &PTR_DAT_007fe860;
  puVar6 = &DAT_007fc250;
  ppuVar8 = &PTR_DAT_007fe86c;
  ppuVar5 = &PTR_DAT_007fe854;
  puVar9 = &DAT_010baf30;
  ppuVar7 = &PTR_DAT_007fe848;
  do {
    iVar2 = fastfunc::FastCheckBsphereInView(uVar1,puVar9);
    if (iVar2 != -1) {
      M1953_002e44d0(*puVar6,*ppuVar4,*ppuVar7,*ppuVar5,&DAT_010baf60);
      draw::DrawMeshSet(*puVar6,*ppuVar7,*ppuVar8,&DAT_010baf60,9);
    }
    iVar3 = iVar3 + 1;
    puVar9 = puVar9 + 4;
    ppuVar4 = ppuVar4 + 1;
    ppuVar5 = ppuVar5 + 1;
    puVar6 = puVar6 + 1;
    ppuVar7 = ppuVar7 + 1;
    ppuVar8 = ppuVar8 + 1;
  } while (iVar3 < 3);
  return;
}



//==== 002e48d8  ns=mobyupdate_unsorted  size=0x1f0
// sig: undefined UpdateMoby_1953(MobyInstance * moby)
// callers(0): 
// callees(1): 0006d720 RegisterFuncForMoby

/* Moby 1953 */

void mobyupdate_unsorted::UpdateMoby_1953(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  
  if (moby->state == 0) {
    iVar14 = 0;
    piVar12 = &DAT_007fc250;
    iVar13 = 0;
    pfVar11 = (float *)&DAT_010baf30;
    do {
      fVar1 = -1024.0;
      fVar2 = 1024.0;
      iVar7 = *piVar12;
      fVar8 = fVar2;
      fVar5 = fVar1;
      fVar9 = fVar2;
      fVar10 = fVar1;
      if (0 < iVar7) {
        iVar17 = 0;
        iVar15 = iVar7;
        do {
          iVar15 = iVar15 + -1;
          iVar16 = *(int *)((int)&PTR_DAT_007fe848 + iVar13) + iVar17;
          fVar6 = *(float *)(*(int *)((int)&PTR_DAT_007fe848 + iVar13) + iVar17);
          iVar17 = iVar17 + 0xc;
          fVar3 = *(float *)(iVar16 + 4);
          fVar4 = *(float *)(iVar16 + 8);
          if (fVar5 - fVar6 < 0.0) {
            fVar5 = fVar6;
          }
          if (fVar6 - fVar8 < 0.0) {
            fVar8 = fVar6;
          }
          if (fVar1 - fVar3 < 0.0) {
            fVar1 = fVar3;
          }
          if (fVar10 - fVar4 < 0.0) {
            fVar10 = fVar4;
          }
          if (fVar3 - fVar2 < 0.0) {
            fVar2 = fVar3;
          }
          if (fVar4 - fVar9 < 0.0) {
            fVar9 = fVar4;
          }
        } while (0 < iVar15);
      }
      pfVar11[3] = 0.0;
      iVar15 = 0;
      fVar8 = (fVar5 + fVar8) * 0.5;
      fVar1 = (fVar1 + fVar2) * 0.5;
      fVar2 = (fVar10 + fVar9) * 0.5;
      *pfVar11 = fVar8;
      pfVar11[1] = fVar1;
      pfVar11[2] = fVar2;
      if (0 < iVar7) {
        iVar17 = 0;
        fVar5 = pfVar11[3];
        do {
          iVar16 = *(int *)((int)&PTR_DAT_007fe848 + iVar13) + iVar17;
          fVar9 = *(float *)(*(int *)((int)&PTR_DAT_007fe848 + iVar13) + iVar17) - fVar8;
          fVar10 = *(float *)(iVar16 + 4) - fVar1;
          fVar3 = *(float *)(iVar16 + 8) - fVar2;
          fVar9 = SQRT(fVar3 * fVar3 + fVar9 * fVar9 + fVar10 * fVar10);
          if (fVar5 < fVar9) {
            pfVar11[3] = fVar9;
            fVar5 = fVar9;
          }
          iVar15 = iVar15 + 1;
          iVar17 = iVar17 + 0xc;
        } while (iVar15 < iVar7);
      }
      iVar14 = iVar14 + 1;
      piVar12 = piVar12 + 1;
      iVar13 = iVar13 + 4;
      pfVar11 = pfVar11 + 4;
    } while (iVar14 < 3);
    moby->state = '\x01';
    moby->drawDistance = 0xff;
    moby->updateDistance = -1;
  }
  else if (moby->state < 2) {
    RegisterFuncForMoby(&PTR_M1953_002e46f0_0070b660,moby);
  }
  return;
}



//==== 002e4af8  ns=mobyupdate_unsorted  size=0x534
// sig: undefined UpdateMoby_{196_197_1958}(MobyInstance * moby)
// callers(0): 
// callees(4): 000efb38 mobyfunc::DeleteMoby; 00110b70 mobyutil::MB_IsPntInCuboid; 0015d12c sound::PlayMobySound; 005023f0 fastfunc::FastVecAdd

/* Moby 196
   Moby 197
   Moby 1958 */

void mobyupdate_unsorted::UpdateMoby__196_197_1958_(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  f32 *pfVar4;
  f32 fVar5;
  MobyClass *pMVar6;
  bool bVar7;
  int iVar8;
  double dVar9;
  undefined1 local_60 [16];
  f32 local_50;
  f32 local_4c;
  f32 local_48;
  f32 local_44;
  undefined1 local_40 [16];
  f32 local_30;
  f32 local_2c;
  f32 local_28;
  f32 local_24;
  
  bVar7 = false;
  pfVar4 = (f32 *)moby->pVar;
  if ((moby->oClass == DOOR_00C4) || (moby->oClass == UNDERWATER_DOOR)) {
    bVar7 = true;
  }
  fVar5 = pfVar4[4];
  if ((fVar5 == -NAN) && ((pfVar4[6] == -NAN || (pfVar4[7] == -NAN)))) {
    mobyfunc::DeleteMoby(moby);
  }
  else {
    uVar1 = moby->state;
    if (uVar1 == '\x06') {
      fVar2 = ((moby->scale * 3.0) / moby->pClass->gScale) * 0.33333334 * mobyutil::g_FrameTime;
      if (ABS(pfVar4[5]) <= fVar2) {
        fVar2 = 0.0;
      }
      else {
        fVar3 = -1.0;
        if (!bVar7) {
          fVar3 = 1.0;
        }
        fVar2 = -(fVar2 * fVar3 - pfVar4[5]);
      }
      pfVar4[5] = fVar2;
      fastfunc::FastVecAdd(&local_30,pfVar4,local_40);
      (moby->pos).x = local_30;
      (moby->pos).y = local_2c;
      (moby->pos).z = local_28;
      (moby->pos).w = local_24;
      if (pfVar4[5] == 0.0) {
        moby->state = '\x04';
      }
    }
    else if (uVar1 == '\x05') {
      iVar8 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar4[7]);
      if (iVar8 == 0) {
        if (bVar7) {
          sound::PlayMobySound(0,0,moby);
        }
        moby->state = '\x06';
      }
    }
    else if (uVar1 == '\x04') {
      pfVar4[5] = 0.0;
      iVar8 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar4[6]);
      if (iVar8 != 0) {
        if (bVar7) {
          sound::PlayMobySound(0,0,moby);
        }
        moby->state = '\x02';
      }
    }
    else if (uVar1 != '\x03') {
      if (uVar1 == '\x02') {
        dVar9 = 3.0;
        fVar2 = -1.0;
        if (!bVar7) {
          fVar2 = 1.0;
        }
        pfVar4[5] = ((moby->scale * 3.0) / moby->pClass->gScale) * 0.33333334 *
                    mobyutil::g_FrameTime * fVar2 + pfVar4[5];
        fastfunc::FastVecAdd(&local_50,pfVar4,local_60);
        fVar2 = moby->scale;
        (moby->pos).x = local_50;
        (moby->pos).y = local_4c;
        pMVar6 = moby->pClass;
        (moby->pos).z = local_48;
        (moby->pos).w = local_44;
        if ((float)((double)fVar2 * dVar9) / pMVar6->gScale < ABS(pfVar4[5])) {
          moby->state = ((byte)((LZCOUNT(-1 - (int)pfVar4[4]) << 0x3a) >> 0x3f) & 2) + 3;
        }
      }
      else if (uVar1 == '\x01') {
        if (MobyInstance[(int)fVar5].state == '\x04') {
          if (bVar7) {
            sound::PlayMobySound(0,0,moby);
          }
          moby->state = '\x02';
        }
      }
      else if (uVar1 == '\0') {
        *pfVar4 = (moby->pos).x;
        pfVar4[1] = (moby->pos).y;
        pfVar4[2] = (moby->pos).z;
        pfVar4[3] = (moby->pos).w;
        moby->state = ((byte)((LZCOUNT(-(int)fVar5) << 0x3a) >> 0x3f) & 3) + 1;
      }
    }
  }
  return;
}



//==== 002e502c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1978_002e502c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1978_002e502c(void)

{
  DAT_007fe8cc = 0x10000;
  return;
}



//==== 002e5040  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1978(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1978 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1978(MobyInstance *moby)

{
  return moby;
}



//==== 002e5088  ns=mobyupdate_unsorted  size=0x5a0
// sig: undefined UpdateMoby_198(MobyInstance * moby)
// callers(0): 
// callees(3): 000fcbe8 mobyutil::MB_randRangeFloat; 0010675c mobyutil::MB_damage; 004fff60 fastfunc::FastDecTimerS32

/* Moby 198 */

void mobyupdate_unsorted::UpdateMoby_198(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  MobyClass *pMVar8;
  int iVar9;
  void *pvVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  MobyInstance *pMVar17;
  int iVar19;
  longlong lVar18;
  longlong lVar20;
  ulonglong uVar21;
  int iVar22;
  ulonglong uVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  pvVar7 = moby->pVar;
  uVar23 = ZEXT48(pvVar7);
  iVar19 = mobyutil::MB_damage(moby,0x10000,0);
  bVar1 = moby->state;
  if ((iVar19 == 0) || (bVar1 == 2)) {
    if (bVar1 == 0) {
      moby->state = '\x01';
      auVar25 = loadVectorLeftIndexed(0x30,uVar23);
      auVar26 = loadVectorRightIndexed(0x40,uVar23);
      if (*(int *)((int)pvVar7 + 0x30) != 0) {
        auVar26 = vectorConvertFromSignedFixedPointWord(auVar25 | auVar26,0);
        auVar25 = ZEXT416(0xffffffff);
        auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar27 = vectorShiftLeftIntegerWord(auVar25,auVar25);
        auVar25 = loadVectorLeftIndexed(4,0x2e5048);
        auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar28 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar25 = vectorAddFloatingPoint
                            (auVar26,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60);
        auVar25 = vectorMultiplyAddFloatingPoint(auVar28,auVar25,auVar27);
        auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
        auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar11 = storeVectorElementWordIndexed
                           (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x34,
                            uVar23);
        *(undefined4 *)((int)pvVar7 + 0x34U & 0xfffffffc) = uVar11;
        return;
      }
      moby->collision = (ushort *)0x0;
      moby->drawDistance = 0;
      moby->scale = moby->pClass->gScale * 0.01;
      return;
    }
    if (2 < bVar1) {
      return;
    }
  }
  else {
    moby->state = '\x02';
    moby->collision = (ushort *)0x0;
    moby->drawDistance = 0;
    moby->scale = moby->pClass->gScale * 0.01;
  }
  iVar19 = fastfunc::FastDecTimerS32(uVar23 + 0x34);
  if (((iVar19 != 0) && (*(int *)((int)pvVar7 + 0x30) != 0)) && (moby->state == '\x01')) {
    auVar25 = ZEXT416(0xffffffff);
    auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
    auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
    auVar25 = loadVectorLeftIndexed(8,0x2e5048);
    auVar27 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
    iVar19 = 0;
    auVar25 = vectorMultiplyAddFloatingPoint
                        (auVar27,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                         auVar26);
    auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
    auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar11 = storeVectorElementWordIndexed
                       (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x34,uVar23);
    *(undefined4 *)((int)pvVar7 + 0x34U & 0xfffffffc) = uVar11;
    uVar21 = uVar23;
    do {
      pMVar17 = MobyInstance;
      iVar22 = *(int *)uVar21;
      if (((-1 < iVar22) && ((MobyInstance[iVar22].state & 0x80) != 0)) &&
         (MobyInstance[iVar22].oClass == 199)) {
        fVar2 = (moby->rotation).z;
        fVar4 = fVar2 + 1.5707963;
        fVar5 = 3.1415925 - fVar4;
        if (fVar4 - (3.1415925 - fVar4) < 0.0) {
          fVar5 = fVar4;
        }
        fVar6 = 3.1415925 - fVar2;
        if (fVar2 - (3.1415925 - fVar2) < 0.0) {
          fVar6 = fVar2;
        }
        fVar12 = -3.1415925 - fVar4;
        if ((-3.1415925 - fVar4) - fVar5 < 0.0) {
          fVar12 = fVar5;
        }
        fVar4 = -3.1415925 - fVar2;
        if ((-3.1415925 - fVar2) - fVar6 < 0.0) {
          fVar4 = fVar6;
        }
        fVar6 = fVar12 * fVar12;
        fVar13 = fVar6 * fVar6 * fVar12;
        fVar14 = fVar6 * fVar13;
        fVar15 = fVar6 * fVar14;
        fVar5 = fVar4 * fVar4;
        fVar2 = (moby->pos).y;
        fVar16 = fVar5 * fVar5 * fVar4;
        fVar3 = (moby->pos).z;
        MobyInstance[iVar22].pos.x =
             (fVar15 * 2.601887e-06 +
             fVar14 * -0.0001980741 + fVar13 * 0.0083330255 + fVar6 * fVar12 * -0.16666657 + fVar12)
             * 2.0 + (moby->pos).x;
        pMVar8 = pMVar17[iVar22].pClass;
        pMVar17[iVar22].pos.z = fVar3;
        pMVar17[iVar22].pos.w = fVar15;
        pMVar17[iVar22].state = '\x04';
        fVar6 = fVar5 * fVar16;
        pMVar17[iVar22].pos.y =
             (fVar5 * fVar6 * 2.601887e-06 +
             fVar6 * -0.0001980741 + fVar16 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4) *
             2.0 + fVar2;
        pMVar17[iVar22].collision = pMVar8->collision;
      }
      iVar19 = iVar19 + 1;
      uVar21 = uVar21 + 4;
    } while (iVar19 < 10);
  }
  iVar19 = 0;
  iVar22 = 0;
  fVar2 = 99.0;
  uVar21 = uVar23;
  do {
    iVar9 = *(int *)uVar21;
    if ((-1 < iVar9) && (MobyInstance[iVar9].state != 'c')) {
      pvVar10 = MobyInstance[iVar9].pVar;
      if (MobyInstance[iVar9].oClass == CHOMPER_00C1) {
        fVar4 = *(float *)((int)pvVar10 + 0x1d0);
        fVar5 = *(float *)((int)pvVar10 + 0x1d4);
        fVar6 = *(float *)((int)pvVar10 + 0x1d8);
      }
      else {
        if (MobyInstance[iVar9].oClass != 199) goto LAB_002e5420;
        fVar4 = *(float *)((int)pvVar10 + 0xb0);
        fVar5 = *(float *)((int)pvVar10 + 0xb4);
        fVar6 = *(float *)((int)pvVar10 + 0xb8);
      }
      fVar4 = SQRT((fVar6 - g_heroPosition.z) * (fVar6 - g_heroPosition.z) +
                   (fVar4 - g_heroPosition.x) * (fVar4 - g_heroPosition.x) +
                   (fVar5 - g_heroPosition.y) * (fVar5 - g_heroPosition.y));
      if (fVar4 < fVar2) {
        fVar2 = fVar4;
      }
    }
LAB_002e5420:
    iVar19 = iVar19 + 1;
    uVar21 = uVar21 + 4;
    if (9 < iVar19) {
      if ((fVar2 < *(float *)((int)pvVar7 + 0x38)) ||
         (((fVar2 < *(float *)((int)pvVar7 + 0x3c) && (g_heroState == UNK_17)) &&
          (g_CurrentWeapon == 0xe)))) {
        iVar19 = *(int *)((int)pvVar7 + 0x28);
        *(undefined4 *)((int)pvVar7 + 0x2c) = 1;
        *(int *)((int)pvVar7 + 0x28) = iVar19 + 1;
        if (10 < iVar19) {
          lVar18 = 99;
          lVar20 = 0;
          fVar2 = 1024.0;
          do {
            iVar19 = *(int *)uVar23;
            if (((-1 < iVar19) &&
                (MobyInstance[iVar19].setByGroup != '\x01' &&
                 MobyInstance[iVar19].setByGroup != '\x03')) &&
               (fVar5 = MobyInstance[iVar19].pos.y - g_heroPosition.y,
               fVar4 = MobyInstance[iVar19].pos.x - g_heroPosition.x,
               fVar4 = SQRT(fVar4 * fVar4 + fVar5 * fVar5), fVar4 < fVar2)) {
              lVar18 = lVar20;
              fVar2 = fVar4;
            }
            lVar20 = lVar20 + 1;
            uVar23 = uVar23 + 4;
          } while ((int)lVar20 < 10);
          if ((int)lVar18 != 99) {
            iVar19 = (int)(lVar18 << 2);
            pvVar10 = MobyInstance[*(int *)((int)pvVar7 + iVar19)].pVar;
            dVar24 = (double)mobyutil::MB_randRangeFloat
                                       (*(float *)((int)pvVar7 + 0x40) * -0.017453292,
                                        *(float *)((int)pvVar7 + 0x40) * 0.017453292);
            *(float *)((int)pvVar10 + 500) = (float)dVar24;
            MobyInstance[*(int *)((int)pvVar7 + iVar19)].setByGroup = '\x01';
          }
          *(undefined4 *)((int)pvVar7 + 0x28) = 0;
        }
      }
      else if (((*(float *)((int)pvVar7 + 0x38) < fVar2) ||
               (((fVar2 < *(float *)((int)pvVar7 + 0x3c) && (g_heroState == UNK_17)) &&
                (g_CurrentWeapon == 0xe)))) && (*(int *)((int)pvVar7 + 0x2c) != 0)) {
        *(undefined4 *)((int)pvVar7 + 0x2c) = 0;
        do {
          iVar19 = *(int *)uVar23;
          if ((-1 < iVar19) && (MobyInstance[iVar19].state < 0x80)) {
            MobyInstance[iVar19].setByGroup = '\x02';
          }
          iVar22 = iVar22 + 1;
          uVar23 = uVar23 + 4;
        } while (iVar22 < 10);
      }
      return;
    }
  } while( true );
}



//==== 002e5628  ns=mobyupdate_helpers  size=0x14
// sig: undefined M199_002e5628(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M199_002e5628(void)

{
  DAT_007fe93c = 0x10000;
  return;
}



//==== 002e5698  ns=mobyupdate_unsorted  size=0x10b4
// sig: undefined UpdateMoby_199(MobyInstance * moby)
// callers(0): 
// callees(12): 000efe40 mobyfunc::BlendAnimFrame; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00100f8c mobyutil::MB_InitDefaultParams; 00101058 mobyutil::MB_UpdateNavMove; 00105c08 mobyutil::CollDamageMobyDirect; 0010675c mobyutil::MB_damage; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick; 005026a0 fastfunc::FastSubRots

/* Moby 199 */

void mobyupdate_unsorted::UpdateMoby_199(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  KickVars *kv;
  ulonglong *puVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  MobyInstance *victim;
  int iVar15;
  ulonglong uVar11;
  u8 uVar17;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar16;
  float *pfVar19;
  longlong lVar18;
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
  double dVar26;
  ulonglong in_f30;
  double dVar27;
  ulonglong in_f31;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0x1e0;
  puVar6 = (ulonglong *)lVar14;
  *puVar6 = uVar12;
  puVar6[0x3e] = in_LR;
  puVar6[0x3a] = in_f30;
  puVar6[0x3b] = in_f31;
  puVar6[0x39] = unaff_r31;
  puVar6[0x38] = unaff_r30;
  puVar6[0x37] = unaff_r29;
  puVar6[0x36] = unaff_r28;
  kv = (KickVars *)moby->pVar;
  iVar15 = mobyutil::MB_damage(moby,0x10000,0);
  uVar17 = moby->state;
  if ((iVar15 != 0) && (uVar17 != 'c')) {
    kv->grav = 0.008;
    kv->zSpeed = 0.2;
    kv->drag = 0.0005;
    kv->xySpeed = 0.125;
    kv->type = '\0';
    fVar2 = (moby->pos).x - g_heroPosition.x;
    fVar1 = (moby->pos).y - g_heroPosition.y;
    fVar3 = ABS(fVar2);
    fVar4 = ABS(fVar1);
    *(float *)(puVar6 + 0x20) = fVar2;
    *(float *)((int)puVar6 + 0x104) = fVar1;
    *(float *)(puVar6 + 0x21) = fVar3 - fVar4;
    dVar24 = 0.0;
    uVar11 = (ulonglong)(*(uint *)(puVar6 + 0x20) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0x21) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar6 + 0x104) >> 0x1d) & 4;
    uVar20 = uVar11 << 2 | 0x735900;
    fVar2 = ABS(*(float *)(puVar6 + 0x20));
    if (*(float *)(puVar6 + 0x21) - 0.0 < 0.0) {
      fVar2 = fVar4;
    }
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar11 << 2));
    fVar1 = *(float *)((int)uVar20 + 4);
    fVar5 = ABS(*(float *)((int)puVar6 + 0x104));
    if (*(float *)(puVar6 + 0x21) - 0.0 < 0.0) {
      fVar5 = fVar3;
    }
    if (0.0 < fVar2) {
      lVar13 = uVar12 - 0x1d0;
      lVar21 = uVar12 - 0x44;
      lVar18 = uVar12 - 0x54;
      lVar22 = 2;
      fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
      fVar3 = fVar2 * fVar2;
      *(float *)(puVar6 + 0x33) = fVar2;
      *(float *)(puVar6 + 0x32) = fVar2;
      *(float *)((int)puVar6 + 0x194) = fVar2;
      *(float *)((int)puVar6 + 0x18c) = fVar2;
      fVar2 = fVar3 * fVar3;
      *(float *)(puVar6 + 0x32) = *(float *)(puVar6 + 0x32) * fVar3;
      *(float *)((int)puVar6 + 0x194) = *(float *)((int)puVar6 + 0x194) * fVar2;
      *(float *)(puVar6 + 0x33) = *(float *)(puVar6 + 0x33) * fVar2 * fVar3;
      do {
        *(float *)((int)lVar13 + 0x18c) = *(float *)((int)lVar13 + 0x17c) * fVar2 * fVar2;
        iVar15 = (int)lVar18;
        lVar18 = lVar18 + 8;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar15 + 4) * fVar2 * fVar2;
        lVar21 = lVar21 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar18 = 4;
      uVar11 = uVar12 - 0x54;
      pfVar19 = (float *)&DAT_007358e0;
      lVar13 = lVar14;
      uVar20 = uVar11;
      do {
        fVar2 = *pfVar19;
        fVar3 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar13 + 0x18c) = *(float *)((int)lVar13 + 0x18c) * fVar2;
        lVar13 = lVar13 + 8;
        *(float *)((int)uVar20 + 4) = *(float *)((int)uVar20 + 4) * fVar3;
        uVar20 = uVar20 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar18 = 2;
      lVar13 = lVar14;
      do {
        iVar15 = (int)lVar13;
        lVar13 = lVar13 + 0x10;
        iVar7 = (int)uVar11;
        uVar11 = uVar11 + 0x10;
        dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar15 + 0x18c)) +
                          *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar4 + fVar1);
    }
    mobyutil::MB_StartKick(dVar24,moby,kv,uVar20,3,5,0);
    uVar17 = 'c';
    moby->state = 'c';
  }
  moby->damage = -1;
  if (uVar17 == 'c') {
    uVar16 = mobyutil::MB_UpdateKick(moby,kv);
    if ((uVar16 & 0x40) != 0) {
      moby->state = 0xfd;
      moby->collision = (ushort *)0x0;
    }
  }
  else if (uVar17 == '\x04') {
    fVar2 = kv[1].peakFrame - (moby->pos).x;
    fVar1 = *(float *)&kv[1].field_0x54 - (moby->pos).y;
    pfVar19 = (float *)&mobyutil::g_atanQuadrantTable;
    fVar3 = ABS(fVar2);
    fVar4 = ABS(fVar1);
    *(float *)(puVar6 + 0x1a) = fVar2;
    *(float *)((int)puVar6 + 0xd4) = fVar1;
    *(float *)(puVar6 + 0x1b) = fVar3 - fVar4;
    dVar24 = 0.0;
    uVar20 = (ulonglong)(*(uint *)(puVar6 + 0x1a) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0x1b) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar6 + 0xd4) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar6 + 0x1a));
    if (*(float *)(puVar6 + 0x1b) - 0.0 < 0.0) {
      fVar2 = fVar4;
    }
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar1 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    fVar5 = ABS(*(float *)((int)puVar6 + 0xd4));
    if (*(float *)(puVar6 + 0x1b) - 0.0 < 0.0) {
      fVar5 = fVar3;
    }
    if (0.0 < fVar2) {
      lVar13 = uVar12 - 0x1d0;
      lVar21 = uVar12 - 0xc4;
      lVar18 = uVar12 - 0xd4;
      lVar22 = 2;
      fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
      fVar3 = fVar2 * fVar2;
      *(float *)(puVar6 + 0x23) = fVar2;
      *(float *)(puVar6 + 0x22) = fVar2;
      *(float *)((int)puVar6 + 0x114) = fVar2;
      *(float *)((int)puVar6 + 0x10c) = fVar2;
      fVar2 = fVar3 * fVar3;
      *(float *)(puVar6 + 0x22) = *(float *)(puVar6 + 0x22) * fVar3;
      *(float *)((int)puVar6 + 0x114) = *(float *)((int)puVar6 + 0x114) * fVar2;
      *(float *)(puVar6 + 0x23) = *(float *)(puVar6 + 0x23) * fVar2 * fVar3;
      do {
        *(float *)((int)lVar13 + 0x10c) = *(float *)((int)lVar13 + 0xfc) * fVar2 * fVar2;
        iVar15 = (int)lVar18;
        lVar18 = lVar18 + 8;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar15 + 4) * fVar2 * fVar2;
        lVar21 = lVar21 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar21 = uVar12 - 0xd4;
      pfVar19 = (float *)&DAT_007358e0;
      lVar13 = lVar14;
      lVar18 = lVar21;
      do {
        fVar2 = *pfVar19;
        fVar3 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar13 + 0x10c) = *(float *)((int)lVar13 + 0x10c) * fVar2;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar3;
        lVar18 = lVar18 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar13 = 2;
      do {
        iVar15 = (int)lVar14;
        lVar14 = lVar14 + 0x10;
        iVar7 = (int)lVar21;
        lVar21 = lVar21 + 0x10;
        dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar15 + 0x10c)) +
                          *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar4 + fVar1);
    }
    mobyutil::OrganicDeltAngSpeed
              (dVar24,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,moby,pfVar19,kv + 2);
    fVar2 = (moby->rotation).z;
    fVar1 = fVar2 + 1.5707963;
    fVar4 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar4 = fVar2;
    }
    fVar3 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar3 = fVar1;
    }
    fVar5 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
      fVar5 = fVar4;
    }
    fVar2 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
      fVar2 = fVar3;
    }
    fVar1 = fVar5 * fVar5;
    fVar4 = fVar2 * fVar2;
    fVar9 = fVar1 * fVar1 * fVar5;
    dVar24 = 2.0;
    *(undefined4 *)(puVar6 + 0x17) = 0;
    fVar3 = fVar4 * fVar4 * fVar2;
    fVar10 = fVar1 * fVar9;
    fVar8 = fVar4 * fVar3;
    *(float *)((int)puVar6 + 0xb4) =
         (fVar1 * fVar10 * 2.601887e-06 +
         fVar10 * -0.0001980741 + fVar9 * 0.0083330255 + fVar1 * fVar5 * -0.16666657 + fVar5) * 2.0;
    *(float *)(puVar6 + 0x16) =
         (fVar4 * fVar8 * 2.601887e-06 +
         fVar8 * -0.0001980741 + fVar3 * 0.0083330255 + fVar4 * fVar2 * -0.16666657 + fVar2) * 2.0;
    mobyutil::MB_UpdateNavMove
              (0x3ff0000000000000,moby,(MobyInstance *)(kv + 1),puVar6 + 0x16,puVar6 + 0x18);
    fVar2 = (moby->pos).y - *(float *)&kv[1].field_0x54;
    fVar1 = (moby->pos).x - kv[1].peakFrame;
    if (((double)SQRT(fVar1 * fVar1 + fVar2 * fVar2) < dVar24) &&
       (moby->state = '\x01', moby->animationId != '\x01')) {
      mobyutil::MB_SetAnimation(moby,1,0,3);
    }
    if ((moby->setByGroup == '\x01') && (moby->state = '\x02', moby->animationId != '\0')) {
      mobyutil::MB_SetAnimation(moby,0,0,3);
    }
  }
  else if (uVar17 == '\x03') {
    fVar2 = g_heroPosition.x - (moby->pos).x;
    fVar1 = g_heroPosition.y - (moby->pos).y;
    fVar3 = ABS(fVar2);
    fVar4 = ABS(fVar1);
    *(float *)(puVar6 + 0x1d) = fVar2;
    *(float *)((int)puVar6 + 0xec) = fVar1;
    *(float *)(puVar6 + 0x1e) = fVar3 - fVar4;
    dVar24 = 0.0;
    uVar20 = (ulonglong)(*(uint *)(puVar6 + 0x1d) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0x1e) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar6 + 0xec) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar6 + 0x1d));
    if (*(float *)(puVar6 + 0x1e) - 0.0 < 0.0) {
      fVar2 = fVar4;
    }
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar1 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    fVar5 = ABS(*(float *)((int)puVar6 + 0xec));
    if (*(float *)(puVar6 + 0x1e) - 0.0 < 0.0) {
      fVar5 = fVar3;
    }
    dVar27 = dVar24;
    if (0.0 < fVar2) {
      lVar13 = uVar12 - 0x1d0;
      lVar18 = uVar12 - 0x94;
      lVar21 = uVar12 - 0x84;
      lVar22 = 2;
      fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
      fVar3 = fVar2 * fVar2;
      *(float *)(puVar6 + 0x2b) = fVar2;
      *(float *)(puVar6 + 0x2a) = fVar2;
      *(float *)((int)puVar6 + 0x154) = fVar2;
      *(float *)((int)puVar6 + 0x14c) = fVar2;
      fVar2 = fVar3 * fVar3;
      *(float *)(puVar6 + 0x2a) = *(float *)(puVar6 + 0x2a) * fVar3;
      *(float *)((int)puVar6 + 0x154) = *(float *)((int)puVar6 + 0x154) * fVar2;
      *(float *)(puVar6 + 0x2b) = *(float *)(puVar6 + 0x2b) * fVar2 * fVar3;
      do {
        *(float *)((int)lVar13 + 0x14c) = *(float *)((int)lVar13 + 0x13c) * fVar2 * fVar2;
        iVar15 = (int)lVar18;
        lVar13 = lVar13 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar15 + 4) * fVar2 * fVar2;
        lVar21 = lVar21 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar21 = uVar12 - 0x94;
      pfVar19 = (float *)&DAT_007358e0;
      lVar13 = lVar14;
      lVar18 = lVar21;
      do {
        fVar2 = *pfVar19;
        fVar3 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar13 + 0x14c) = *(float *)((int)lVar13 + 0x14c) * fVar2;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar3;
        lVar18 = lVar18 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar18 = 2;
      lVar13 = lVar14;
      do {
        iVar15 = (int)lVar13;
        lVar13 = lVar13 + 0x10;
        iVar7 = (int)lVar21;
        lVar21 = lVar21 + 0x10;
        dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar15 + 0x14c)) +
                          *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar4 + fVar1);
    }
    mobyutil::OrganicDeltAngSpeed
              (dVar27,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,moby,&DAT_002e5640,
               kv + 2);
    if ((moby->updateId == moby->animationId) &&
       (dVar27 = (double)mobyfunc::BlendAnimFrame(moby), 16.0 <= dVar27)) {
      dVar27 = (double)mobyfunc::BlendAnimFrame(moby);
      fVar2 = (moby->rotation).z;
      if ((dVar27 < 21.0) &&
         (dVar27 = 0.20000000298023224, ABS((moby->pos).z - g_heroPosition.z) < 0.2)) {
        fVar1 = (moby->pos).y;
        fVar4 = (moby->pos).x;
        fVar3 = fVar1 - g_heroPosition.y;
        fVar5 = fVar4 - g_heroPosition.x;
        if (SQRT(fVar5 * fVar5 + fVar3 * fVar3) < 2.0) {
          fVar4 = g_heroPosition.x - fVar4;
          fVar1 = g_heroPosition.y - fVar1;
          dVar23 = ABS((double)fVar4);
          dVar25 = ABS((double)fVar1);
          *(float *)((int)puVar6 + 0xdc) = fVar4;
          *(float *)(puVar6 + 0x1c) = fVar1;
          *(float *)((int)puVar6 + 0xe4) = (float)(dVar23 - dVar25);
          uVar20 = (ulonglong)(*(uint *)((int)puVar6 + 0xdc) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar6 + 0xe4) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar6 + 0x1c) >> 0x1d) & 4;
          dVar26 = ABS((double)*(float *)((int)puVar6 + 0xdc));
          if ((double)*(float *)((int)puVar6 + 0xe4) - dVar24 < 0.0) {
            dVar26 = dVar25;
          }
          fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
          dVar25 = ABS((double)*(float *)(puVar6 + 0x1c));
          if ((double)*(float *)((int)puVar6 + 0xe4) - dVar24 < 0.0) {
            dVar25 = dVar23;
          }
          fVar4 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
          if (dVar24 < dVar26) {
            lVar13 = uVar12 - 0x1d0;
            lVar21 = uVar12 - 0xa4;
            lVar18 = uVar12 - 0xb4;
            lVar22 = 2;
            fVar3 = (float)(dVar25 - dVar26) / (float)(dVar25 + dVar26);
            fVar5 = fVar3 * fVar3;
            *(float *)(puVar6 + 0x27) = fVar3;
            *(float *)(puVar6 + 0x26) = fVar3;
            *(float *)((int)puVar6 + 0x134) = fVar3;
            *(float *)((int)puVar6 + 300) = fVar3;
            fVar3 = fVar5 * fVar5;
            *(float *)(puVar6 + 0x26) = *(float *)(puVar6 + 0x26) * fVar5;
            *(float *)((int)puVar6 + 0x134) = *(float *)((int)puVar6 + 0x134) * fVar3;
            *(float *)(puVar6 + 0x27) = *(float *)(puVar6 + 0x27) * fVar3 * fVar5;
            do {
              *(float *)((int)lVar13 + 300) = *(float *)((int)lVar13 + 0x11c) * fVar3 * fVar3;
              iVar15 = (int)lVar18;
              lVar18 = lVar18 + 8;
              lVar13 = lVar13 + 8;
              *(float *)((int)lVar21 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
              lVar21 = lVar21 + 8;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            lVar22 = 4;
            lVar21 = uVar12 - 0xb4;
            pfVar19 = (float *)&DAT_007358e0;
            lVar13 = lVar14;
            lVar18 = lVar21;
            do {
              fVar3 = *pfVar19;
              fVar5 = pfVar19[1];
              pfVar19 = pfVar19 + 2;
              *(float *)((int)lVar13 + 300) = *(float *)((int)lVar13 + 300) * fVar3;
              lVar13 = lVar13 + 8;
              *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar5;
              lVar18 = lVar18 + 8;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            lVar13 = 2;
            do {
              iVar15 = (int)lVar14;
              iVar7 = (int)lVar21;
              lVar14 = lVar14 + 0x10;
              lVar21 = lVar21 + 0x10;
              dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar15 + 300)) +
                                *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) +
                               *(float *)(iVar7 + 0xc));
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
            dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar1 + fVar4);
          }
          dVar24 = (double)fastfunc::FastSubRots((float)dVar24,fVar2);
          victim = g_heroMobyPtr;
          if (dVar24 < 0.2617993950843811) {
            fVar2 = (moby->rotation).z;
            fVar1 = fVar2 + 1.5707963;
            fVar4 = 3.1415925 - fVar2;
            if (fVar2 - (3.1415925 - fVar2) < 0.0) {
              fVar4 = fVar2;
            }
            fVar3 = 3.1415925 - fVar1;
            if (fVar1 - (3.1415925 - fVar1) < 0.0) {
              fVar3 = fVar1;
            }
            fVar5 = -3.1415925 - fVar2;
            if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
              fVar5 = fVar4;
            }
            *(undefined4 *)(puVar6 + 0x13) = 0;
            fVar2 = -3.1415925 - fVar1;
            if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
              fVar2 = fVar3;
            }
            fVar1 = fVar5 * fVar5;
            fVar4 = fVar2 * fVar2;
            fVar9 = fVar1 * fVar1 * fVar5;
            fVar3 = fVar4 * fVar4 * fVar2;
            fVar10 = fVar1 * fVar9;
            fVar8 = fVar4 * fVar3;
            *(float *)((int)puVar6 + 0x94) =
                 (float)((double)(fVar1 * fVar10 * 2.601887e-06 +
                                 fVar10 * -0.0001980741 +
                                 fVar9 * 0.0083330255 + fVar1 * fVar5 * -0.16666657 + fVar5) *
                        dVar27);
            *(float *)(puVar6 + 0x12) =
                 (float)((double)(fVar4 * fVar8 * 2.601887e-06 +
                                 fVar8 * -0.0001980741 +
                                 fVar3 * 0.0083330255 + fVar4 * fVar2 * -0.16666657 + fVar2) *
                        dVar27);
            *(f32 *)(puVar6 + 0x14) = (victim->pos).x;
            *(f32 *)((int)puVar6 + 0xa4) = (victim->pos).y;
            fVar2 = (victim->pos).z;
            *(float *)(puVar6 + 0x15) = fVar2;
            *(f32 *)((int)puVar6 + 0xac) = (victim->pos).w;
            *(float *)(puVar6 + 0x15) = fVar2 + 0.75;
            mobyutil::CollDamageMobyDirect
                      (1.0,victim,moby,1,0x2e5640,(float *)(puVar6 + 0x14),(float *)(puVar6 + 0x12))
            ;
          }
        }
      }
    }
    if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x02', moby->animationId != '\0')) {
      mobyutil::MB_SetAnimation(moby,0,0,3);
    }
  }
  else if (uVar17 == '\x02') {
    fVar2 = g_heroPosition.x - (moby->pos).x;
    fVar1 = g_heroPosition.y - (moby->pos).y;
    pfVar19 = (float *)&mobyutil::g_atanQuadrantTable;
    fVar4 = ABS(fVar2);
    fVar3 = ABS(fVar1);
    *(float *)((int)puVar6 + 0xf4) = fVar2;
    *(float *)(puVar6 + 0x1f) = fVar1;
    *(float *)((int)puVar6 + 0xfc) = fVar4 - fVar3;
    fVar2 = 0.0;
    uVar20 = (ulonglong)(*(uint *)((int)puVar6 + 0xf4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar6 + 0xfc) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar6 + 0x1f) >> 0x1d) & 4;
    fVar1 = ABS(*(float *)((int)puVar6 + 0xf4));
    if (*(float *)((int)puVar6 + 0xfc) - 0.0 < 0.0) {
      fVar1 = fVar3;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    fVar8 = ABS(*(float *)(puVar6 + 0x1f));
    if (*(float *)((int)puVar6 + 0xfc) - 0.0 < 0.0) {
      fVar8 = fVar4;
    }
    if (0.0 < fVar1) {
      lVar13 = uVar12 - 0x1d0;
      lVar18 = uVar12 - 0x74;
      lVar21 = uVar12 - 100;
      lVar22 = 2;
      fVar1 = (fVar8 - fVar1) / (fVar8 + fVar1);
      fVar4 = fVar1 * fVar1;
      *(float *)(puVar6 + 0x2f) = fVar1;
      *(float *)(puVar6 + 0x2e) = fVar1;
      *(float *)((int)puVar6 + 0x174) = fVar1;
      *(float *)((int)puVar6 + 0x16c) = fVar1;
      fVar1 = fVar4 * fVar4;
      *(float *)(puVar6 + 0x2e) = *(float *)(puVar6 + 0x2e) * fVar4;
      *(float *)((int)puVar6 + 0x174) = *(float *)((int)puVar6 + 0x174) * fVar1;
      *(float *)(puVar6 + 0x2f) = *(float *)(puVar6 + 0x2f) * fVar1 * fVar4;
      do {
        *(float *)((int)lVar13 + 0x16c) = *(float *)((int)lVar13 + 0x15c) * fVar1 * fVar1;
        iVar15 = (int)lVar18;
        lVar13 = lVar13 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar15 + 4) * fVar1 * fVar1;
        lVar21 = lVar21 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar21 = uVar12 - 0x74;
      pfVar19 = (float *)&DAT_007358e0;
      lVar13 = lVar14;
      lVar18 = lVar21;
      do {
        fVar1 = *pfVar19;
        fVar4 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar13 + 0x16c) = *(float *)((int)lVar13 + 0x16c) * fVar1;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
        lVar18 = lVar18 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar13 = 2;
      do {
        iVar15 = (int)lVar14;
        iVar7 = (int)lVar21;
        lVar14 = lVar14 + 0x10;
        lVar21 = lVar21 + 0x10;
        fVar2 = fVar2 + *(float *)(iVar15 + 0x16c) + *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) +
                *(float *)(iVar7 + 0xc);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      fVar2 = (fVar2 + 0.7853982) * fVar5 + fVar3;
    }
    dVar24 = 0.10000000149011612;
    mobyutil::OrganicDeltAngSpeed
              ((double)(fVar2 + kv[2].kickVel[1]),0x3f947ae140000000,0x3fd3333340000000,
               0x3fb99999a0000000,moby,pfVar19,kv + 2);
    fVar2 = (moby->rotation).z;
    fVar1 = fVar2 + 1.5707963;
    fVar4 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar4 = fVar2;
    }
    fVar3 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar3 = fVar1;
    }
    fVar5 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
      fVar5 = fVar4;
    }
    fVar2 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
      fVar2 = fVar3;
    }
    fVar1 = fVar5 * fVar5;
    fVar4 = fVar2 * fVar2;
    fVar9 = fVar1 * fVar1 * fVar5;
    dVar27 = 2.0;
    *(undefined4 *)(puVar6 + 0xf) = 0;
    fVar3 = fVar4 * fVar4 * fVar2;
    fVar10 = fVar1 * fVar9;
    fVar8 = fVar4 * fVar3;
    *(float *)((int)puVar6 + 0x74) =
         (fVar1 * fVar10 * 2.601887e-06 +
         fVar10 * -0.0001980741 + fVar9 * 0.0083330255 + fVar1 * fVar5 * -0.16666657 + fVar5) * 2.0;
    *(float *)(puVar6 + 0xe) =
         (fVar4 * fVar8 * 2.601887e-06 +
         fVar8 * -0.0001980741 + fVar3 * 0.0083330255 + fVar4 * fVar2 * -0.16666657 + fVar2) * 2.0;
    mobyutil::MB_UpdateNavMove
              (0x3ff0000000000000,moby,(MobyInstance *)(kv + 1),puVar6 + 0xe,puVar6 + 0x10);
    fVar2 = (moby->pos).y - g_heroPosition.y;
    fVar1 = (moby->pos).x - g_heroPosition.x;
    if (((double)SQRT(fVar1 * fVar1 + fVar2 * fVar2) < dVar27) &&
       (moby->state = '\x03', moby->animationId != '\x02')) {
      mobyutil::MB_SetAnimation(moby,2,0,3);
    }
    if (dVar24 < (double)((moby->pos).z - *(float *)&kv[1].field_0x58)) {
      moby->state = '\x01';
    }
    if (moby->setByGroup == '\x02') {
      moby->state = '\x04';
    }
  }
  else if (uVar17 == '\x01') {
    if ((moby->setByGroup == '\x01') && (moby->state = '\x02', moby->animationId != '\0')) {
      mobyutil::MB_SetAnimation(moby,0,0,3);
    }
  }
  else if (uVar17 == '\0') {
    fVar2 = moby->pClass->gScale;
    moby->state = '\x01';
    moby->scale = fVar2 * 0.5;
    uVar12 = mobyutil::MB_randInt(0xff);
    if ((uVar12 & 1) != 0) {
      moby->modeBits = moby->modeBits | MIRROR;
    }
    mobyutil::MB_InitDefaultParams(kv[1].kickVel);
    kv[1].kickVel[3] = 2.0;
    kv[1].kickVel[0] = 1.27378e-42;
    kv[1].flag = (int)(DAT_0071f408 * 0.15);
    dVar24 = (double)mobyutil::MB_randRangeFloat(-0.7853982,0.7853982);
    kv[2].kickVel[1] = (float)dVar24;
    kv[1].peakFrame = (moby->pos).x;
    *(f32 *)&kv[1].field_0x54 = (moby->pos).y;
    *(f32 *)&kv[1].field_0x58 = (moby->pos).z;
    *(f32 *)&kv[1].field_0x5c = (moby->pos).w;
    if (moby->animationId != '\x01') {
      mobyutil::MB_SetAnimation(moby,1,0,3);
    }
  }
  return;
}



//==== 002e674c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M199_002e674c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M199_002e674c(void)

{
  DAT_007fe9ac = 0x10000;
  return;
}



//==== 002e6768  ns=mobyupdate_unsorted  size=0x138
// sig: undefined UpdateMoby_20(MobyInstance * moby)
// callers(0): 
// callees(2): 00112e18 mobyutil::MB_UnlockItem; 0011aeec mobyutil::MB_ShowPersistentMessage

/* Moby 20 */

void mobyupdate_unsorted::UpdateMoby_20(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  fVar1 = (moby->pos).x;
  fVar2 = (moby->pos).y;
  if (moby->state == 0) {
    moby->state = '\x01';
  }
  else if (1 < moby->state) {
    return;
  }
  fVar2 = fVar2 - g_heroPosition.y;
  fVar1 = fVar1 - g_heroPosition.x;
  if ((4.0 <= SQRT(fVar1 * fVar1 + fVar2 * fVar2)) || (UnlockableItems.hydroPack != '\0')) {
    *(undefined4 *)moby->pVar = 0xffffffff;
  }
  else if (g_boltCount < 4000) {
    mobyutil::MB_ShowPersistentMessage(4,0x2ee9);
  }
  else {
    iVar3 = mobyutil::MB_ShowPersistentMessage(4,0x2ee8);
    if (((g_buttonsPressedThisFrame & TRIANGLE) != 0) && (iVar3 != 0)) {
      g_boltCount = g_boltCount + -4000;
      mobyutil::MB_UnlockItem(4,1);
      moby->state = '\x02';
    }
  }
  return;
}



//==== 002e68a0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M2000_002e68a0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M2000_002e68a0(void)

{
  DAT_007fea1c = 0x10000;
  return;
}



//==== 002e68b8  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_2000(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 2000 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_2000(MobyInstance *moby)

{
  return moby;
}



//==== 002e68bc  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_202(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 202 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_202(MobyInstance *moby)

{
  return moby;
}



//==== 002e68e0  ns=mobyupdate_helpers  size=0x61c
// sig: undefined M1900_002e68e0(void)
// callers(0): 
// callees(10): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00500ca4 fastfunc::FastEulerToMtx1; 0050162c fastfunc::FastVecMtx4Mul; 00502578 fastfunc::FastWrapRot; 00502648 fastfunc::FastAddRots; 00502730 fastfunc::FastIntToDouble; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1900_002e68e0(int param_1)

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
      uVar8 = *(uint *)(iVar7 + 0x34);
      fVar6 = ABS(*(float *)(iVar7 + 0x34));
      fVar3 = SQRT(*(float *)(iVar7 + 0x30) * *(float *)(iVar7 + 0x30) +
                   *(float *)(iVar7 + 0x38) * *(float *)(iVar7 + 0x38));
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
      uVar8 = *(uint *)(iVar7 + 0x38);
      uVar9 = *(uint *)(iVar7 + 0x30);
      dVar23 = ABS((double)*(float *)(iVar7 + 0x38));
      dVar22 = ABS((double)*(float *)(iVar7 + 0x30));
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
      *(undefined4 *)(puVar10 + 0x18) = *(undefined4 *)(iVar7 + 0x20);
      *(undefined4 *)((int)puVar10 + 0xc4) = *(undefined4 *)(iVar7 + 0x24);
      *(undefined4 *)(puVar10 + 0x19) = *(undefined4 *)(iVar7 + 0x28);
      uVar4 = *(undefined4 *)(iVar7 + 0x2c);
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



//==== 002e6f18  ns=mobyupdate_helpers  size=0x210
// sig: undefined M1900_002e6f18(void)
// callers(1): 002e89ec mobyupdate_helpers::M1900_002e89ec
// callees(5): 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 00110798 mobyutil::MB_DeleteMobyFromDynamicGroup; 00121a40 partupd::SpawnPart_5; 005c8318 rand

void mobyupdate_helpers::M1900_002e6f18(MobyInstance *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 in_r7;
  int iVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined1 local_80 [32];
  
  iVar5 = 0;
  dVar7 = -0.20000000298023224;
  dVar8 = 0.20000000298023224;
  dVar9 = 100000.0;
  dVar10 = 600000.0;
  dVar11 = 0.5;
  uVar12 = 0;
  do {
    mobyutil::MB_randRangeFloat((float)dVar7,(float)dVar8);
    mobyutil::MB_randRangeFloat((float)dVar7,(float)dVar8);
    mobyutil::MB_randRangeFloat((float)dVar7,(float)dVar8);
    iVar1 = rand();
    iVar2 = rand();
    uVar3 = rand();
    uVar6 = mobyutil::MB_randRangeFloat((float)dVar9,(float)dVar10);
    iVar4 = rand();
    partupd::SpawnPart_5
              (uVar6,uVar12,local_80,(longlong)iVar1 + 0x30U & 0x3f,(longlong)iVar2 + 0x20U & 0x3f,
               uVar3 & 0x2f,in_r7,
               (int)(animationSpeed * (float)((double)(longlong)(iVar4 % 0x28 + 10) + dVar11)));
    iVar5 = iVar5 + 1;
  } while (iVar5 < 10);
  mobyutil::MB_DeleteMobyFromDynamicGroup(param_1,&DAT_00a51f68);
  mobyfunc::DeleteMoby(param_1);
  return;
}



//==== 002e7140  ns=Global  size=0x334
// sig: undefined FUN_002e7140(void)
// callers(1): 003b7c48 mobyupdate_unsorted::UpdateMoby_562
// callees(8): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 0010c000 mobyutil::MB_CopyHeroLights; 00110724 mobyutil::MB_AddMobyToDynamicGroup; 00110798 mobyutil::MB_DeleteMobyFromDynamicGroup; 00502730 fastfunc::FastIntToDouble

MobyInstance * FUN_002e7140(undefined4 param_1,f32 *param_2,undefined4 *param_3)

{
  f32 fVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  int iVar4;
  MobyInstance *pMoby;
  int iVar5;
  int iVar6;
  MobyInstance *pMVar7;
  short sVar8;
  short *psVar9;
  MobyInstance *pMoby_00;
  double dVar10;
  double dVar11;
  
  pMoby = mobyfunc::CreateMoby
                    (((ushort)((LZCOUNT(-(uint)g_goldWeaponsArray.decoyGlove) << 0x3a) >> 0x3f) &
                     0xf95f) + GOLD_DECOY);
  if (pMoby != (MobyInstance *)0x0) {
    pMoby->state = '\0';
    pMoby->updateDistance = -1;
    pMoby->enabled = '\x01';
    puVar3 = (undefined2 *)pMoby->pVar;
    (pMoby->pos).x = *param_2;
    (pMoby->pos).y = param_2[1];
    (pMoby->pos).z = param_2[2];
    fVar1 = param_2[3];
    pMoby->drawDistance = 0xff;
    (pMoby->pos).w = fVar1;
    *(undefined4 *)(puVar3 + 8) = *param_3;
    *(undefined4 *)(puVar3 + 10) = param_3[1];
    uVar2 = param_3[2];
    *(undefined4 *)(puVar3 + 0x20) = param_1;
    *(undefined4 *)(puVar3 + 0xc) = uVar2;
    uVar2 = param_3[3];
    puVar3[0x22] = 0;
    *(undefined4 *)(puVar3 + 0xe) = uVar2;
    *(undefined4 *)(puVar3 + 0x2a) = 0;
    dVar11 = 1.0;
    pMoby->scale = pMoby->pClass->gScale * (DAT_0071f408 * -0.5 + 1.0);
    dVar10 = (double)fastfunc::FastIntToDouble(g_goldWeaponsArray.decoyGlove);
    *(float *)(puVar3 + 0x24) = (float)(dVar10 + dVar11) * 4.0;
    if (pMoby->animationId != '\0') {
      mobyutil::MB_SetAnimation(pMoby,0,0,(int)(animationSpeed * 0.5));
    }
    pMoby->collision = (ushort *)0x0;
    pMoby->collisionMesh = (float *)0xffffffff;
    dVar10 = (double)mobyutil::MB_randRangeFloat(-3.1415927,3.1415927);
    (pMoby->rotation).z = (float)dVar10;
    *(undefined4 *)(puVar3 + 0x2c) = 0;
    *(undefined4 *)(puVar3 + 0x2e) = 0;
    if (5 < DAT_00a51f68) {
      sVar8 = DAT_00a51f68;
      do {
        if (0 < sVar8) {
          pMoby_00 = (MobyInstance *)0x0;
          iVar6 = 1;
          iVar5 = 0;
          psVar9 = &DAT_00a51f68;
          do {
            psVar9 = psVar9 + 1;
            pMVar7 = MobyInstance + *psVar9;
            if ((pMVar7 != (MobyInstance *)0x0) &&
               (((pMVar7->oClass == DECOY || (pMVar7->oClass == GOLD_DECOY)) && (pMVar7->state < 5))
               )) {
              iVar4 = *(int *)((int)pMVar7->pVar + 0x54);
              if (iVar5 <= iVar4) {
                iVar5 = iVar4;
                pMoby_00 = pMVar7;
              }
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 <= sVar8);
          if (pMoby_00 != (MobyInstance *)0x0) {
            mobyutil::MB_DeleteMobyFromDynamicGroup(pMoby_00,&DAT_00a51f68);
            pMoby_00->state = '\x06';
            sVar8 = DAT_00a51f68;
          }
        }
      } while (5 < sVar8);
    }
    mobyfunc::UpdateMobyTransform(pMoby);
    mobyutil::MB_CopyHeroLights(pMoby);
    *puVar3 = 0;
    *(undefined1 *)(puVar3 + 4) = 0;
    *(undefined1 *)((int)puVar3 + 9) = 0;
    *(undefined1 *)((int)puVar3 + 7) = 0x80;
    puVar3[6] = 4;
    puVar3[7] = 0xf;
    mobyutil::MB_AddMobyToDynamicGroup(pMoby,&DAT_00a51f68,0x1f);
    if ((hero::g_heroInvisible != '\0') || (DAT_0096bd8f != '\0')) {
      pMoby->modeBits = pMoby->modeBits | (UNK_40|DISABLED);
    }
  }
  return pMoby;
}



//==== 002e74a8  ns=Global  size=0x71c
// sig: undefined FUN_002e74a8(void)
// callers(1): 003b7c48 mobyupdate_unsorted::UpdateMoby_562
// callees(4): 00057820 collproc::CollLine; 001122ac mobyutil::MB_GetPlatformParent; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

void FUN_002e74a8(float *param_1,int param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  undefined2 uVar8;
  ulonglong *puVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  MobyInstance *pMVar15;
  ulonglong uVar16;
  int iVar19;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  float *pfVar23;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar18 = uVar16 - 0x110;
  puVar9 = (ulonglong *)lVar18;
  *puVar9 = uVar16;
  puVar9[0x24] = in_LR;
  puVar9[0x20] = in_f30;
  puVar9[0x21] = in_f31;
  puVar9[0x1c] = unaff_r28;
  puVar9[0x1d] = unaff_r29;
  puVar9[0x1f] = unaff_r31;
  uVar7 = *(uint *)(param_2 + 0x78);
  puVar9[0x1e] = unaff_r30;
  iVar19 = g_standingOnMoby;
  *(undefined4 *)(uVar7 + 0x10) = *param_3;
  *(undefined4 *)(uVar7 + 0x14) = param_3[1];
  *(undefined4 *)(uVar7 + 0x18) = param_3[2];
  *(undefined4 *)(uVar7 + 0x1c) = param_3[3];
  if ((iVar19 != 0) && (iVar19 = mobyutil::MB_GetPlatformParent(), iVar19 != 0)) {
    *(float *)(uVar7 + 0x10) = *(float *)(uVar7 + 0x10) + DAT_00969de0;
    *(float *)(uVar7 + 0x14) = *(float *)(uVar7 + 0x14) + DAT_00969de4;
    *(float *)(uVar7 + 0x18) = *(float *)(uVar7 + 0x18) + DAT_00969de8;
  }
  *(float *)(param_2 + 0x10) = *param_1;
  pMVar15 = g_heroMobyPtr;
  *(float *)(param_2 + 0x14) = param_1[1];
  *(float *)(param_2 + 0x18) = param_1[2];
  *(float *)(param_2 + 0x1c) = param_1[3];
  fVar3 = (pMVar15->pos).x;
  dVar25 = (double)fVar3;
  *(float *)(puVar9 + 0xe) = fVar3;
  fVar4 = (pMVar15->pos).y;
  dVar27 = (double)fVar4;
  fVar3 = (float)((double)param_1[1] - dVar27);
  fVar1 = (float)((double)*param_1 - dVar25);
  fVar5 = param_1[2];
  dVar29 = (double)fVar5;
  fVar2 = (float)(dVar29 - dVar29);
  *(float *)((int)puVar9 + 0x74) = fVar4;
  *(f32 *)(puVar9 + 0xf) = (pMVar15->pos).z;
  *(f32 *)((int)puVar9 + 0x7c) = (pMVar15->pos).w;
  *(float *)(puVar9 + 0xf) = fVar5;
  dVar31 = 0.0;
  fVar4 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
  fVar5 = (fVar4 + 0.2) / fVar4;
  dVar26 = dVar31;
  if (0.0 - fVar4 < 0.0) {
    dVar26 = (double)(fVar2 * fVar5);
  }
  dVar30 = dVar31;
  if (0.0 - fVar4 < 0.0) {
    dVar30 = (double)(fVar3 * fVar5);
  }
  dVar28 = dVar31;
  if (0.0 - fVar4 < 0.0) {
    dVar28 = (double)(fVar1 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar26 = (double)(fVar2 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar30 = (double)(fVar3 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar28 = (double)(fVar1 * fVar5);
  }
  param_1[2] = (float)(dVar26 + dVar29);
  param_1[1] = (float)(dVar30 + dVar27);
  *param_1 = (float)(dVar28 + dVar25);
  iVar19 = collproc::CollLine(uVar16 - 0xa0,param_1,0,pMVar15,0);
  if (iVar19 == 0) {
    *(undefined1 *)(param_2 + 0x20) = 2;
  }
  else {
    auVar32 = ZEXT416(0xffffffff);
    auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
    auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
    *(float *)(param_2 + 0x10) = CollOutput.ip.x;
    *(float *)(param_2 + 0x14) = CollOutput.ip.y;
    *(float *)(param_2 + 0x18) = CollOutput.ip.z;
    *(float *)(param_2 + 0x1c) = CollOutput.ip.w;
    *(undefined1 *)(uVar7 + 0x10) = 0;
    *(undefined1 *)(uVar7 + 0x11) = 0;
    *(undefined1 *)(uVar7 + 0x12) = 0;
    *(undefined1 *)(uVar7 + 0x13) = 0;
    *(undefined1 *)(uVar7 + 0x14) = 0;
    *(undefined1 *)(uVar7 + 0x15) = 0;
    *(undefined1 *)(uVar7 + 0x16) = 0;
    *(undefined1 *)(uVar7 + 0x17) = 0;
    *(undefined1 *)(uVar7 + 0x18) = 0;
    *(undefined1 *)(uVar7 + 0x19) = 0;
    *(undefined1 *)(uVar7 + 0x1a) = 0;
    *(undefined1 *)(uVar7 + 0x1b) = 0;
    *(undefined1 *)(uVar7 + 0x1c) = 0;
    *(undefined1 *)(uVar7 + 0x1d) = 0;
    *(undefined1 *)(uVar7 + 0x1e) = 0;
    *(undefined1 *)(uVar7 + 0x1f) = 0;
    *(undefined1 *)(param_2 + 0x20) = 4;
    auVar32 = loadVectorLeftIndexed(8,0x2e7474);
    auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    fVar3 = *(float *)(param_2 + 0x48);
    auVar32 = vectorMultiplyAddFloatingPoint
                        (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                         auVar33);
    auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
    auVar32 = vectorSplatHalfWord(auVar32,1);
    uVar8 = storeVectorElementHalfWordIndexed(auVar32,0x44,(ulonglong)uVar7);
    *(undefined2 *)(uVar7 + 0x44) = uVar8;
    fVar5 = CollOutput.normal.z;
    fVar4 = CollOutput.ip.z;
    fVar1 = fVar3 + 1.5707963;
    fVar2 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar2 = fVar3;
    }
    fVar6 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar6 = fVar1;
    }
    fVar11 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar2 < 0.0) {
      fVar11 = fVar2;
    }
    fVar3 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar6 < 0.0) {
      fVar3 = fVar6;
    }
    fVar1 = fVar11 * fVar11;
    dVar25 = (double)CollOutput.normal.z;
    fVar2 = fVar3 * fVar3;
    fVar13 = fVar1 * fVar1 * fVar11;
    fVar6 = fVar2 * fVar2 * fVar3;
    fVar14 = fVar1 * fVar13;
    fVar12 = fVar2 * fVar6;
    fVar11 = fVar1 * fVar14 * 2.601887e-06 +
             fVar14 * -0.0001980741 + fVar13 * 0.0083330255 + fVar1 * fVar11 * -0.16666657 + fVar11;
    fVar3 = fVar2 * fVar12 * 2.601887e-06 +
            fVar12 * -0.0001980741 + fVar6 * 0.0083330255 + fVar2 * fVar3 * -0.16666657 + fVar3;
    fVar1 = CollOutput.normal.x * fVar3 + CollOutput.normal.y * fVar11;
    dVar27 = (double)fVar1;
    fVar3 = CollOutput.normal.y * fVar3 - CollOutput.normal.x * fVar11;
    dVar30 = ABS((double)fVar3);
    *(float *)((int)puVar9 + 0x8c) = fVar3;
    *(float *)(param_2 + 0x18) = fVar4;
    fVar3 = SQRT((float)(dVar27 * dVar27 + (double)(float)(dVar25 * dVar25)));
    dVar29 = ABS((double)fVar3);
    *(float *)(puVar9 + 0x11) = fVar3;
    *(float *)(puVar9 + 0x12) = (float)(dVar29 - dVar30);
    uVar20 = (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1d) & 4;
    dVar26 = ABS((double)*(float *)(puVar9 + 0x11));
    if ((double)*(float *)(puVar9 + 0x12) - dVar31 < 0.0) {
      dVar26 = dVar30;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    dVar30 = ABS((double)*(float *)((int)puVar9 + 0x8c));
    if ((double)*(float *)(puVar9 + 0x12) - dVar31 < 0.0) {
      dVar30 = dVar29;
    }
    fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    dVar29 = dVar31;
    if (dVar31 < dVar26) {
      lVar17 = uVar16 - 0x100;
      lVar21 = uVar16 - 0x5c;
      lVar22 = uVar16 - 0x4c;
      lVar24 = 2;
      fVar4 = (float)(dVar30 - dVar26) / (float)(dVar30 + dVar26);
      fVar6 = fVar4 * fVar4;
      *(float *)(puVar9 + 0x18) = fVar4;
      *(float *)(puVar9 + 0x17) = fVar4;
      *(float *)((int)puVar9 + 0xbc) = fVar4;
      *(float *)((int)puVar9 + 0xb4) = fVar4;
      fVar4 = fVar6 * fVar6;
      *(float *)(puVar9 + 0x17) = *(float *)(puVar9 + 0x17) * fVar6;
      *(float *)((int)puVar9 + 0xbc) = *(float *)((int)puVar9 + 0xbc) * fVar4;
      *(float *)(puVar9 + 0x18) = *(float *)(puVar9 + 0x18) * fVar4 * fVar6;
      do {
        *(float *)((int)lVar17 + 0xb4) = *(float *)((int)lVar17 + 0xa4) * fVar4 * fVar4;
        iVar19 = (int)lVar21;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar19 + 4) * fVar4 * fVar4;
        lVar22 = lVar22 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar24 = 4;
      lVar22 = uVar16 - 0x5c;
      pfVar23 = (float *)&DAT_007358e0;
      lVar17 = lVar18;
      lVar21 = lVar22;
      do {
        fVar4 = *pfVar23;
        fVar6 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar17 + 0xb4) = *(float *)((int)lVar17 + 0xb4) * fVar4;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
        lVar21 = lVar21 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar21 = 2;
      lVar17 = lVar18;
      dVar26 = dVar31;
      do {
        iVar19 = (int)lVar17;
        lVar17 = lVar17 + 0x10;
        iVar10 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar19 + 0xb4)) +
                          *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar29 = (double)((float)(dVar26 + 0.7853981852531433) * fVar3 + fVar2);
    }
    dVar25 = ABS(dVar25);
    *(float *)(uVar7 + 0x4c) = (float)-dVar29;
    *(float *)(puVar9 + 0x10) = fVar1;
    *(float *)((int)puVar9 + 0x84) = (float)(dVar25 - ABS(dVar27));
    uVar20 = (ulonglong)((uint)fVar5 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1d) & 4;
    dVar26 = dVar25;
    if ((double)*(float *)((int)puVar9 + 0x84) - dVar31 < 0.0) {
      dVar26 = ABS(dVar27);
    }
    dVar27 = ABS((double)*(float *)(puVar9 + 0x10));
    if ((double)*(float *)((int)puVar9 + 0x84) - dVar31 < 0.0) {
      dVar27 = dVar25;
    }
    fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    if (dVar31 < dVar26) {
      lVar17 = uVar16 - 0x100;
      lVar21 = uVar16 - 0x7c;
      lVar22 = uVar16 - 0x6c;
      lVar24 = 2;
      fVar2 = (float)(dVar27 - dVar26) / (float)(dVar27 + dVar26);
      fVar4 = fVar2 * fVar2;
      *(float *)(puVar9 + 0x14) = fVar2;
      *(float *)(puVar9 + 0x13) = fVar2;
      *(float *)((int)puVar9 + 0x9c) = fVar2;
      *(float *)((int)puVar9 + 0x94) = fVar2;
      fVar2 = fVar4 * fVar4;
      *(float *)(puVar9 + 0x13) = *(float *)(puVar9 + 0x13) * fVar4;
      *(float *)((int)puVar9 + 0x9c) = *(float *)((int)puVar9 + 0x9c) * fVar2;
      *(float *)(puVar9 + 0x14) = *(float *)(puVar9 + 0x14) * fVar2 * fVar4;
      do {
        *(float *)((int)lVar17 + 0x94) = *(float *)((int)lVar17 + 0x84) * fVar2 * fVar2;
        iVar19 = (int)lVar21;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar19 + 4) * fVar2 * fVar2;
        lVar22 = lVar22 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar24 = 4;
      lVar22 = uVar16 - 0x7c;
      pfVar23 = (float *)&DAT_007358e0;
      lVar17 = lVar18;
      lVar21 = lVar22;
      do {
        fVar2 = *pfVar23;
        fVar4 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar17 + 0x94) = *(float *)((int)lVar17 + 0x94) * fVar2;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar4;
        lVar21 = lVar21 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar17 = 2;
      do {
        iVar19 = (int)lVar18;
        iVar10 = (int)lVar22;
        lVar18 = lVar18 + 0x10;
        lVar22 = lVar22 + 0x10;
        dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar19 + 0x94)) +
                          *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar1 + fVar3);
    }
    *(float *)(uVar7 + 0x50) = (float)dVar31;
    dVar27 = (double)*(float *)(param_2 + 0x40);
    dVar26 = (double)fastfunc::FastDiffRots(-dVar29,dVar27);
    dVar25 = 0.10000000149011612;
    dVar26 = (double)fastfunc::FastWrapRot
                               ((float)dVar27,(float)((double)(DAT_0071f408 * 0.1) * dVar26));
    *(float *)(param_2 + 0x40) = (float)dVar26;
    dVar27 = (double)*(float *)(param_2 + 0x44);
    dVar26 = (double)fastfunc::FastDiffRots((double)*(float *)(uVar7 + 0x50),dVar27);
    dVar26 = (double)fastfunc::FastWrapRot
                               ((float)dVar27,
                                (float)((double)(float)((double)DAT_0071f408 * dVar25) * dVar26));
    *(float *)(param_2 + 0x44) = (float)dVar26;
  }
  return;
}



//==== 002e7c08  ns=mobyupdate_helpers  size=0xa84
// sig: undefined M1900_002e7c08(void)
// callers(1): 002e8af8 mobyupdate_unsorted::UpdateMoby_{203_1900}
// callees(7): 00057820 collproc::CollLine; 00060780 collproc::CollHotspot; 0006d720 RegisterFuncForMoby; 000ffb70 mobyutil::GetGroundZ; 001122ac mobyutil::MB_GetPlatformParent; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot

undefined8 mobyupdate_helpers::M1900_002e7c08(int param_1,MobyInstance *param_2,int param_3)

{
  bool bVar1;
  float fVar2;
  u8 uVar3;
  f32 fVar4;
  f32 fVar5;
  f32 fVar6;
  f32 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  short sVar11;
  undefined4 uVar12;
  ulonglong *puVar13;
  int iVar14;
  uint uVar15;
  float fVar16;
  bool bVar17;
  MobyInstance *pMVar18;
  PlayerState PVar19;
  ulonglong uVar20;
  longlong lVar21;
  int iVar23;
  undefined8 uVar22;
  ulonglong uVar24;
  float *pfVar26;
  longlong lVar25;
  longlong lVar27;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f22;
  double dVar33;
  ulonglong in_f23;
  double dVar34;
  ulonglong in_f24;
  double dVar35;
  ulonglong in_f25;
  double dVar36;
  ulonglong in_f26;
  double dVar37;
  ulonglong in_f27;
  double dVar38;
  ulonglong in_f28;
  double dVar39;
  ulonglong in_f29;
  double dVar40;
  ulonglong in_f30;
  double dVar41;
  ulonglong in_f31;
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  
  uVar20 = ZEXT48(&stack0x00000000);
  lVar29 = uVar20 - 0x1b0;
  puVar13 = (ulonglong *)lVar29;
  *puVar13 = uVar20;
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
  puVar13[0x25] = unaff_r25;
  puVar13[0x2b] = unaff_r31;
  puVar13[0x26] = unaff_r26;
  puVar13[0x28] = unaff_r28;
  bVar17 = false;
  puVar13[0x2a] = unaff_r30;
  puVar13[0x24] = unaff_r24;
  PVar19 = g_heroState;
  puVar13[0x29] = unaff_r29;
  puVar13[0x27] = unaff_r27;
  if ((PVar19 == MOVEMENT_LOCKED) || (g_gameMode != GAME_MODE_NORMAL)) {
    return 0;
  }
  fVar4 = (param_2->pos).x;
  fVar5 = (param_2->pos).y;
  *(f32 *)(puVar13 + 0x10) = fVar4;
  fVar6 = (param_2->pos).z;
  *(f32 *)((int)puVar13 + 0x84) = fVar5;
  fVar7 = (param_2->pos).w;
  uVar3 = param_2->state;
  *(f32 *)(puVar13 + 0x11) = fVar6;
  *(f32 *)((int)puVar13 + 0x8c) = fVar7;
  fVar2 = DAT_0096a350;
  if (uVar3 == '\x01') {
    fVar8 = ABS(DAT_0096a350);
    fVar10 = ABS(DAT_0096a354);
    dVar42 = -0.3619680106639862;
    uVar15 = (uint)DAT_0096a354 >> 0x1d;
    *(float *)(puVar13 + 0x19) = fVar8 - fVar10;
    dVar33 = 0.0;
    dVar34 = 0.7853981852531433;
    uVar24 = (ulonglong)((uint)fVar2 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar13 + 0x19) >> 0x1e) & 2 | (ulonglong)uVar15 & 4;
    fVar2 = fVar8;
    if (*(float *)(puVar13 + 0x19) - 0.0 < 0.0) {
      fVar2 = fVar10;
    }
    fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
    if (*(float *)(puVar13 + 0x19) - 0.0 < 0.0) {
      fVar10 = fVar8;
    }
    fVar8 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
    dVar30 = dVar33;
    if (0.0 < fVar2) {
      lVar21 = uVar20 - 0x1a0;
      lVar27 = uVar20 - 0xb4;
      lVar25 = uVar20 - 0xc4;
      lVar28 = 2;
      fVar2 = (fVar10 - fVar2) / (fVar10 + fVar2);
      fVar10 = fVar2 * fVar2;
      *(float *)(puVar13 + 0x1f) = fVar2;
      *(float *)(puVar13 + 0x1e) = fVar2;
      *(float *)((int)puVar13 + 0xf4) = fVar2;
      *(float *)((int)puVar13 + 0xec) = fVar2;
      fVar2 = fVar10 * fVar10;
      *(float *)(puVar13 + 0x1e) = *(float *)(puVar13 + 0x1e) * fVar10;
      *(float *)((int)puVar13 + 0xf4) = *(float *)((int)puVar13 + 0xf4) * fVar2;
      *(float *)(puVar13 + 0x1f) = *(float *)(puVar13 + 0x1f) * fVar2 * fVar10;
      do {
        *(float *)((int)lVar21 + 0xec) = *(float *)((int)lVar21 + 0xdc) * fVar2 * fVar2;
        iVar23 = (int)lVar25;
        lVar25 = lVar25 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar23 + 4) * fVar2 * fVar2;
        lVar27 = lVar27 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar27 = uVar20 - 0xc4;
      pfVar26 = (float *)&DAT_007358e0;
      lVar21 = lVar29;
      lVar25 = lVar27;
      do {
        fVar2 = *pfVar26;
        fVar10 = pfVar26[1];
        pfVar26 = pfVar26 + 2;
        *(float *)((int)lVar21 + 0xec) = *(float *)((int)lVar21 + 0xec) * fVar2;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar10;
        lVar25 = lVar25 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar25 = 2;
      lVar21 = lVar29;
      do {
        iVar23 = (int)lVar21;
        iVar14 = (int)lVar27;
        lVar21 = lVar21 + 0x10;
        lVar27 = lVar27 + 0x10;
        dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar23 + 0xec)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar9 + fVar8);
    }
    dVar30 = (double)fastfunc::FastWrapRot(-0.361968,(float)dVar30);
    fVar8 = DAT_0096a350;
    dVar41 = 3.141592502593994;
    fVar2 = (float)(dVar30 + 1.570796251296997);
    dVar40 = -3.141592502593994;
    dVar32 = ABS((double)DAT_0096a350);
    dVar39 = -0.16666656732559204;
    dVar30 = ABS((double)DAT_0096a354);
    dVar38 = 0.008333025500178337;
    dVar37 = -0.0001980741071747616;
    dVar36 = 2.601886990305502e-06;
    dVar35 = 0.8590390086174011;
    uVar15 = (uint)DAT_0096a354 >> 0x1d;
    fVar10 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar10 = fVar2;
    }
    *(float *)((int)puVar13 + 0xc4) = (float)(dVar32 - dVar30);
    fVar9 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar10 < 0.0) {
      fVar9 = fVar10;
    }
    fVar16 = fVar9 * fVar9;
    uVar24 = (ulonglong)((uint)fVar8 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar13 + 0xc4) >> 0x1e) & 2 | (ulonglong)uVar15 & 4;
    fVar2 = fVar16 * fVar16 * fVar9;
    fVar10 = fVar16 * fVar2;
    dVar31 = dVar32;
    if ((double)*(float *)((int)puVar13 + 0xc4) - dVar33 < 0.0) {
      dVar31 = dVar30;
    }
    if ((double)*(float *)((int)puVar13 + 0xc4) - dVar33 < 0.0) {
      dVar30 = dVar32;
    }
    *(float *)(puVar13 + 0xe) =
         (fVar16 * fVar10 * 2.601887e-06 +
         fVar10 * -0.0001980741 + fVar2 * 0.0083330255 + fVar16 * fVar9 * -0.16666657 + fVar9) *
         0.859039;
    fVar10 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
    fVar2 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
    if (dVar33 < dVar31) {
      lVar21 = uVar20 - 0x1a0;
      lVar27 = uVar20 - 0xd4;
      lVar25 = uVar20 - 0xe4;
      lVar28 = 2;
      fVar8 = (float)(dVar30 - dVar31) / (float)(dVar30 + dVar31);
      fVar9 = fVar8 * fVar8;
      *(float *)(puVar13 + 0x1b) = fVar8;
      *(float *)(puVar13 + 0x1a) = fVar8;
      *(float *)((int)puVar13 + 0xd4) = fVar8;
      *(float *)((int)puVar13 + 0xcc) = fVar8;
      fVar8 = fVar9 * fVar9;
      *(float *)(puVar13 + 0x1a) = *(float *)(puVar13 + 0x1a) * fVar9;
      *(float *)((int)puVar13 + 0xd4) = *(float *)((int)puVar13 + 0xd4) * fVar8;
      *(float *)(puVar13 + 0x1b) = *(float *)(puVar13 + 0x1b) * fVar8 * fVar9;
      do {
        *(float *)((int)lVar21 + 0xcc) = *(float *)((int)lVar21 + 0xbc) * fVar8 * fVar8;
        iVar23 = (int)lVar25;
        lVar25 = lVar25 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar23 + 4) * fVar8 * fVar8;
        lVar27 = lVar27 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar27 = uVar20 - 0xe4;
      pfVar26 = (float *)&DAT_007358e0;
      lVar21 = lVar29;
      lVar25 = lVar27;
      do {
        fVar8 = *pfVar26;
        fVar9 = pfVar26[1];
        pfVar26 = pfVar26 + 2;
        *(float *)((int)lVar21 + 0xcc) = *(float *)((int)lVar21 + 0xcc) * fVar8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar9;
        lVar25 = lVar25 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar25 = 2;
      lVar21 = lVar29;
      do {
        iVar23 = (int)lVar21;
        iVar14 = (int)lVar27;
        lVar21 = lVar21 + 0x10;
        lVar27 = lVar27 + 0x10;
        dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar23 + 0xcc)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      dVar33 = (double)((float)(dVar33 + dVar34) * fVar10 + fVar2);
    }
    dVar34 = (double)fastfunc::FastWrapRot((float)dVar42,(float)dVar33);
    fVar2 = g_heroPosition.y;
    dVar33 = (double)(float)(dVar41 - dVar34);
    if (dVar34 - (double)(float)(dVar41 - dVar34) < 0.0) {
      dVar33 = dVar34;
    }
    dVar30 = (double)(float)(dVar40 - dVar34);
    if ((double)(float)(dVar40 - dVar34) - dVar33 < 0.0) {
      dVar30 = dVar33;
    }
    fVar10 = *(float *)(puVar13 + 0xe) + g_heroPosition.x;
    *(undefined4 *)(puVar13 + 0xf) = 0;
    dVar32 = (double)(float)(dVar30 * dVar30);
    *(float *)(puVar13 + 0xe) = fVar10;
    fVar8 = g_heroPosition.z;
    dVar33 = (double)*(float *)(param_1 + 0x10);
    dVar42 = (double)*(float *)(param_1 + 0x14);
    dVar34 = (double)*(float *)(param_1 + 0x18);
    dVar41 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar30));
    dVar40 = (double)(float)(dVar32 * dVar41);
    bVar1 = hero::g_heroStateType == 0xf;
    fVar10 = (float)((double)(float)((double)(float)(dVar32 * dVar40) * dVar36 +
                                    (double)(float)(dVar40 * dVar37 +
                                                   (double)(float)(dVar41 * dVar38 +
                                                                  (double)(float)((double)(float)(
                                                  dVar32 * dVar30) * dVar39 + dVar30)))) * dVar35);
    *(float *)((int)puVar13 + 0x74) = fVar10;
    iVar23 = g_standingOnMoby;
    *(float *)((int)puVar13 + 0x74) = fVar10 + fVar2;
    *(float *)(puVar13 + 0xf) = fVar8 + 0.39082;
    if (bVar1) {
      dVar33 = (double)(float)(dVar33 + (double)DAT_00969de0);
      dVar42 = (double)(float)(dVar42 + (double)DAT_00969de4);
      dVar34 = (double)(float)(dVar34 + (double)DAT_00969de8);
    }
    if (((iVar23 != 0) && (iVar23 = mobyutil::MB_GetPlatformParent(), iVar23 != 0)) &&
       (param_3 != 0)) {
      dVar33 = (double)(float)(dVar33 + (double)DAT_00969de0);
      dVar42 = (double)(float)(dVar42 + (double)DAT_00969de4);
      dVar34 = (double)(float)(dVar34 + (double)DAT_00969de8);
    }
    auVar43 = ZEXT416(0xffffffff);
    auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
    auVar44 = vectorShiftLeftIntegerWord(auVar43,auVar43);
    auVar43 = loadVectorLeftIndexed(0x30,0x2e7bc4);
    auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar45 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar43 = vectorMultiplyAddFloatingPoint
                        (auVar45,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,
                         auVar44);
    auVar43 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
    auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar12 = storeVectorElementWordIndexed
                       (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0xc0,lVar29);
    *(undefined4 *)(puVar13 + 0x18) = uVar12;
  }
  else {
    sVar11 = *(short *)(param_1 + 0x44);
    dVar33 = (double)*(float *)(param_1 + 0x10);
    iVar23 = *(int *)(*(int *)(param_1 + 0x40) + 0x78);
    *(f32 *)(puVar13 + 0xe) = fVar4;
    *(f32 *)((int)puVar13 + 0x74) = fVar5;
    *(f32 *)(puVar13 + 0xf) = fVar6;
    *(f32 *)((int)puVar13 + 0x7c) = fVar7;
    dVar42 = (double)*(float *)(param_1 + 0x14);
    dVar34 = (double)*(float *)(param_1 + 0x18);
    *(int *)(puVar13 + 0x18) = (int)sVar11;
    if (*(int *)(iVar23 + 0x50) != 0) {
      *(undefined2 *)(param_1 + 0x46) = 1;
    }
  }
  pMVar18 = g_heroMobyPtr;
  dVar30 = 0.5;
  dVar34 = -(double)(float)((double)mobyutil::g_FrameTime * 0.5 - dVar34);
  *(f32 *)(puVar13 + 0x12) = (g_heroMobyPtr->pos).x;
  *(f32 *)((int)puVar13 + 0x94) = (pMVar18->pos).y;
  *(f32 *)(puVar13 + 0x13) = (pMVar18->pos).z;
  fVar4 = (pMVar18->pos).w;
  *(undefined4 *)(puVar13 + 0x13) = *(undefined4 *)(puVar13 + 0xf);
  *(f32 *)((int)puVar13 + 0x9c) = fVar4;
  iVar23 = collproc::CollLine(uVar20 - 0x120,uVar20 - 0x140,0x10,pMVar18,0);
  if (iVar23 != 0) {
    iVar23 = collproc::CollHotspot();
    fVar2 = animationSpeed;
    if ((iVar23 != 0) || (0.0 < dVar34)) {
      if ((CollOutput.pMoby == (MobyInstance *)0x0) || (0 < CollOutput.poly)) {
        if (0 < CollOutput.poly) {
          bVar17 = true;
          *(float *)(param_1 + 0x20) = CollOutput.ip.x;
          *(float *)(param_1 + 0x24) = CollOutput.ip.y;
          *(float *)(param_1 + 0x28) = CollOutput.ip.z;
          *(float *)(param_1 + 0x2c) = CollOutput.ip.w;
        }
      }
      else {
        if ((CollOutput.pMoby == g_heroMobyPtr) ||
           (CollOutput.pMoby == *(MobyInstance **)(param_1 + 0x40))) {
          puVar13[0x22] = (longlong)(int)(animationSpeed * 300.5);
          puVar13[0x22] = (longlong)(int)(fVar2 * 10.5);
          if (*(int *)((int)puVar13 + 0x114) - *(int *)((int)puVar13 + 0x114) <=
              *(int *)(puVar13 + 0x18)) goto LAB_002e835c;
        }
        pMVar18 = CollOutput.pMoby;
        *(undefined4 *)(puVar13 + 0x14) = 0;
        *(undefined4 *)((int)puVar13 + 0xa4) = 0;
        *(undefined4 *)(puVar13 + 0x15) = 0x3f000000;
        *(undefined4 *)((int)puVar13 + 0xac) = 0;
        fVar4 = (pMVar18->pos).x;
        *(f32 *)(param_1 + 0x20) = fVar4;
        fVar5 = (pMVar18->pos).y;
        *(f32 *)(param_1 + 0x24) = fVar5;
        fVar2 = (pMVar18->pos).z;
        *(float *)(param_1 + 0x28) = fVar2;
        fVar6 = (pMVar18->pos).w;
        *(f32 *)(puVar13 + 0x14) = fVar4;
        *(f32 *)(param_1 + 0x2c) = fVar6;
        *(f32 *)((int)puVar13 + 0xa4) = fVar5;
        *(float *)(puVar13 + 0x15) = (float)(dVar30 + (double)fVar2);
        mobyutil::GetGroundZ(dVar30,uVar20 - 0x110,0);
        bVar17 = true;
      }
    }
  }
LAB_002e835c:
  do {
    while( true ) {
      do {
        do {
          iVar23 = fastfunc::FastDecTimerS32(uVar20 - 0xf0);
          if (iVar23 != 0 || bVar17) goto LAB_002e8510;
          fVar2 = *(float *)(puVar13 + 0xe);
          fVar10 = *(float *)((int)puVar13 + 0x74);
          fVar8 = *(float *)(puVar13 + 0xf);
          lVar29 = 10;
          *(undefined4 *)((int)puVar13 + 0x8c) = *(undefined4 *)((int)puVar13 + 0x7c);
          *(float *)(puVar13 + 0x10) = fVar2;
          *(float *)((int)puVar13 + 0x84) = fVar10;
          *(float *)(puVar13 + 0x11) = fVar8;
          do {
            fVar2 = (float)((double)fVar2 + dVar33);
            fVar10 = (float)((double)fVar10 + dVar42);
            fVar8 = (float)((double)fVar8 + dVar34);
            dVar34 = -(double)(float)((double)DAT_0071f418 * 9.0 - dVar34);
            *(float *)(puVar13 + 0xe) = fVar2;
            *(float *)((int)puVar13 + 0x74) = fVar10;
            *(float *)(puVar13 + 0xf) = fVar8;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          iVar23 = collproc::CollLine(uVar20 - 0x130,uVar20 - 0x140,0x10,param_2,0);
        } while (iVar23 == 0);
        iVar23 = collproc::CollHotspot();
        fVar2 = animationSpeed;
      } while ((iVar23 == 0) && (0.0 < dVar34));
      if ((CollOutput.pMoby != (MobyInstance *)0x0) && (CollOutput.poly < 1)) break;
      if (0 < CollOutput.poly) {
        *(float *)(param_1 + 0x20) = CollOutput.ip.x;
        *(float *)(param_1 + 0x24) = CollOutput.ip.y;
        *(float *)(param_1 + 0x28) = CollOutput.ip.z;
        *(float *)(param_1 + 0x2c) = CollOutput.ip.w;
        goto LAB_002e8510;
      }
    }
    if ((CollOutput.pMoby != g_heroMobyPtr) &&
       (CollOutput.pMoby != *(MobyInstance **)(param_1 + 0x40))) break;
    puVar13[0x22] = (longlong)(int)(animationSpeed * 300.5);
    puVar13[0x22] = (longlong)(int)(fVar2 * 10.5);
  } while (*(int *)((int)puVar13 + 0x114) - *(int *)((int)puVar13 + 0x114) <=
           *(int *)(puVar13 + 0x18));
  pMVar18 = CollOutput.pMoby;
  *(undefined4 *)(puVar13 + 0x16) = 0;
  *(undefined4 *)((int)puVar13 + 0xb4) = 0;
  *(undefined4 *)(puVar13 + 0x17) = 0x3f000000;
  *(undefined4 *)((int)puVar13 + 0xbc) = 0;
  fVar4 = (pMVar18->pos).x;
  *(f32 *)(param_1 + 0x20) = fVar4;
  fVar5 = (pMVar18->pos).y;
  *(f32 *)(param_1 + 0x24) = fVar5;
  fVar2 = (pMVar18->pos).z;
  *(float *)(param_1 + 0x28) = fVar2;
  fVar6 = (pMVar18->pos).w;
  *(f32 *)(puVar13 + 0x16) = fVar4;
  *(f32 *)(param_1 + 0x2c) = fVar6;
  *(f32 *)((int)puVar13 + 0xb4) = fVar5;
  *(float *)(puVar13 + 0x17) = (float)(dVar30 + (double)fVar2);
  mobyutil::GetGroundZ(dVar30,uVar20 - 0x100,0);
LAB_002e8510:
  if ((*(int *)(puVar13 + 0x18) == 0) ||
     ((param_3 == 0 &&
      ((CollOutput.pMoby == (MobyInstance *)0x0 ||
       (iVar23 = mobyutil::MB_GetPlatformParent(), iVar23 == 0)))))) {
    uVar22 = 0;
  }
  else {
    if (((param_3 != 2) || (CollOutput.pMoby == (MobyInstance *)0x0)) ||
       (iVar23 = mobyutil::MB_GetPlatformParent(), iVar23 == 0)) {
      RegisterFuncForMoby(&PTR_M1900_002e68e0_0070b6c8,param_2);
    }
    *(float *)(param_1 + 0x30) = CollOutput.normal.x;
    *(float *)(param_1 + 0x34) = CollOutput.normal.y;
    *(float *)(param_1 + 0x38) = CollOutput.normal.z;
    *(float *)(param_1 + 0x3c) = CollOutput.normal.w;
    fVar9 = GameCamera.posX;
    fVar2 = *(float *)(param_1 + 0x20) - GameCamera.posX;
    fVar10 = *(float *)(param_1 + 0x24) - GameCamera.posY;
    *(undefined4 *)((int)puVar13 + 0x8c) = *(undefined4 *)(param_1 + 0x2c);
    uVar22 = 1;
    fVar8 = *(float *)(param_1 + 0x28) - GameCamera.posZ;
    *(float *)(puVar13 + 0x10) = fVar2;
    *(float *)((int)puVar13 + 0x84) = fVar10;
    fVar2 = fVar2 * 0.95;
    fVar10 = fVar10 * 0.95;
    fVar8 = fVar8 * 0.95;
    *(float *)(puVar13 + 0x10) = fVar2;
    *(float *)((int)puVar13 + 0x84) = fVar10;
    *(float *)(puVar13 + 0x11) = fVar8;
    *(float *)(param_1 + 0x20) = fVar2 + fVar9;
    *(float *)(param_1 + 0x24) = fVar10 + GameCamera.posY;
    *(float *)(param_1 + 0x28) = fVar8 + GameCamera.posZ;
  }
  return uVar22;
}



//==== 002e86b8  ns=mobyupdate_helpers  size=0x334
// sig: undefined M1900_002e86b8(void)
// callers(1): 002e8af8 mobyupdate_unsorted::UpdateMoby_{203_1900}
// callees(3): 000ffb70 mobyutil::GetGroundZ; 001009b0 mobyutil::MB_MoveAndCollide; 00109b40 mobyutil::AccelDelt

void mobyupdate_helpers::M1900_002e86b8(int param_1)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined1 local_40 [16];
  float local_30 [2];
  
  iVar2 = *(int *)(param_1 + 0x78);
  bVar1 = DAT_00969ec2 == 0;
  if (*(int *)(iVar2 + 0x68) != 0 || DAT_00969ec2 != 0) {
    if (*(int *)(iVar2 + 0x68) == 0) {
      fVar3 = g_heroPosition.y - *(float *)(param_1 + 0x14);
      fVar4 = g_heroPosition.x - *(float *)(param_1 + 0x10);
      if (1.0 <= SQRT(fVar4 * fVar4 + fVar3 * fVar3)) {
        return;
      }
      if (1.3 <= ABS(g_heroPosition.z - *(float *)(param_1 + 0x18))) {
        return;
      }
      *(undefined4 *)(iVar2 + 0x68) = 1;
    }
    fVar3 = *(float *)(param_1 + 0x14) - g_heroPosition.y;
    fVar4 = *(float *)(param_1 + 0x10) - g_heroPosition.x;
    uVar7 = 0;
    local_30[0] = SQRT(fVar4 * fVar4 + fVar3 * fVar3) - 1.4;
    if (0.0 < local_30[0]) {
      local_30[0] = 0.0;
    }
    if (bVar1) {
      local_30[0] = 0.0;
    }
    dVar6 = 0.019999999552965164;
    mobyutil::AccelDelt(0.0,DAT_0071f40c * 0.02,DAT_0071f40c * 0.3,mobyutil::g_FrameTime * 4.0,
                        local_30,0x2e868c,(float *)(iVar2 + 0x60));
    if (((local_30[0] == 0.0) && (*(int *)(iVar2 + 0x60) == 0)) &&
       (dVar5 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,param_1 + 0x10,0),
       ABS((double)(float)((double)*(float *)(param_1 + 0x18) - dVar5)) < dVar6)) {
      *(undefined4 *)(iVar2 + 0x68) = 0;
    }
    fVar3 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + 0.0);
    if (fVar3 < *(float *)(iVar2 + 0x60)) {
      *(float *)(iVar2 + 0x60) = fVar3;
    }
    mobyutil::MB_MoveAndCollide(0x3fe0000000000000,0x3fd99999a0000000,uVar7,param_1,local_40);
    dVar6 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,param_1 + 0x10,0);
    if (dVar6 <= (double)*(float *)(param_1 + 0x18)) {
      fVar3 = -(DAT_0071f418 * 24.0 - *(float *)(iVar2 + 100));
      *(float *)(iVar2 + 100) = fVar3;
      fVar3 = *(float *)(param_1 + 0x18) + fVar3;
      *(float *)(param_1 + 0x18) = fVar3;
      if ((double)fVar3 < dVar6) {
        *(float *)(param_1 + 0x18) = (float)dVar6;
      }
    }
    else {
      *(float *)(param_1 + 0x18) = (float)dVar6;
      *(undefined4 *)(iVar2 + 100) = 0;
    }
  }
  return;
}



//==== 002e89ec  ns=mobyupdate_helpers  size=0x7c
// sig: undefined M1900_002e89ec(void)
// callers(1): 002e8af8 mobyupdate_unsorted::UpdateMoby_{203_1900}
// callees(2): 00060780 collproc::CollHotspot; 002e6f18 mobyupdate_helpers::M1900_002e6f18

void mobyupdate_helpers::M1900_002e89ec(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = collproc::CollHotspot();
  if (iVar1 < 4) {
    if (iVar1 < 2) {
      if (iVar1 < 0) {
        return;
      }
    }
    else if (iVar1 < 3) {
      return;
    }
  }
  else if (iVar1 < 0xb) {
    if (iVar1 != 8) {
      return;
    }
  }
  else if (0xd < iVar1) {
    return;
  }
  M1900_002e6f18(param_1);
  return;
}



//==== 002e8af8  ns=mobyupdate_unsorted  size=0x1c40
// sig: undefined UpdateMoby_{203_1900}(MobyInstance * moby)
// callers(0): 
// callees(31): 00059e20 collproc::CollSphere; 0005e598 collproc::CollMobySphere; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 000ffb70 mobyutil::GetGroundZ; 001009b0 mobyutil::MB_MoveAndCollide; 001057f4 mobyutil::SetCollDamIn; 00105d2c mobyutil::CollDamageMobyDirect_wrap; 0010675c mobyutil::MB_damage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0010e030 mobyutil::MB_genericExplosion; 00110798 mobyutil::MB_DeleteMobyFromDynamicGroup; 00110950 mobyutil::MB_RandomizeVector; 001122ac mobyutil::MB_GetPlatformParent; 001122e0 mobyutil::MB_PlatformLocalToWorld; 0015d12c sound::PlayMobySound; 002e7c08 mobyupdate_helpers::M1900_002e7c08; 002e86b8 mobyupdate_helpers::M1900_002e86b8; 002e89ec mobyupdate_helpers::M1900_002e89ec; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 005000b4 fastfunc::FastDecTimerU8; 00500608 fastfunc::FastVecNormalize; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble; 005e7f54 FUN_005e7f54; 005e8030 FUN_005e8030; 005e81f0 FUN_005e81f0

/* Moby 203
   Moby 1900 */

void mobyupdate_unsorted::UpdateMoby__203_1900_(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  MOBY_OCLASSES MVar9;
  void *pvVar10;
  f32 fVar11;
  float fVar12;
  u16 *puVar13;
  uint uVar14;
  uint uVar15;
  undefined1 uVar16;
  undefined2 uVar17;
  undefined4 uVar18;
  ulonglong *puVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ulonglong uVar25;
  longlong lVar26;
  MobyModeBit MVar30;
  MobyInstance *pMVar29;
  short sVar31;
  longlong lVar27;
  longlong lVar28;
  int iVar33;
  float *pfVar34;
  longlong lVar32;
  longlong lVar35;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  short *psVar36;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar37;
  longlong lVar38;
  ulonglong unaff_r30;
  ulonglong uVar39;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  ulonglong in_f28;
  ulonglong in_f29;
  undefined8 uVar46;
  ulonglong in_f30;
  double dVar47;
  ulonglong in_f31;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  
  lVar26 = (longlong)(int)moby;
  uVar25 = ZEXT48(&stack0x00000000);
  lVar28 = uVar25 - 0x280;
  puVar19 = (ulonglong *)lVar28;
  *puVar19 = uVar25;
  puVar19[0x52] = in_LR;
  puVar19[0x4c] = in_f28;
  puVar19[0x4d] = in_f29;
  puVar19[0x4e] = in_f30;
  puVar19[0x4f] = in_f31;
  puVar19[0x4b] = unaff_r31;
  puVar19[0x48] = unaff_r28;
  MVar9 = moby->oClass;
  puVar19[0x49] = unaff_r29;
  uVar37 = (ulonglong)g_goldWeaponsArray.decoyGlove;
  puVar19[0x4a] = unaff_r30;
  pvVar10 = moby->pVar;
  uVar39 = ZEXT48(pvVar10);
  uVar37 = uVar37 + ((LZCOUNT(0xcb - (uint)MVar9) << 0x3a) >> 0x3f & -uVar37);
  puVar19[0x47] = unaff_r27;
  puVar19[0x46] = unaff_r26;
  puVar19[0x45] = unaff_r25;
  puVar19[0x44] = unaff_r24;
  puVar19[0x43] = unaff_r23;
  dVar41 = (double)fastfunc::FastIntToDouble(uVar37);
  fVar11 = (moby->pos).x;
  dVar47 = 2.0;
  uVar14 = (int)fVar11 >> 0x1f;
  iVar33 = (uVar14 >> 1 ^ (uint)fVar11) - uVar14;
  if ((((iVar33 < 0x40000000) || (0x447f4000 < iVar33)) ||
      (fVar11 = (moby->pos).y, uVar14 = (int)fVar11 >> 0x1f,
      iVar33 = (uVar14 >> 1 ^ (uint)fVar11) - uVar14, 0x447f4000 < iVar33 || iVar33 < 0x40000000))
     || ((fVar11 = (moby->pos).z, uVar14 = (int)fVar11 >> 0x1f,
         iVar33 = (uVar14 >> 1 ^ (uint)fVar11) - uVar14, iVar33 < 0x40000000 ||
         (0x447f4000 < iVar33)))) {
    mobyutil::MB_DeleteMobyFromDynamicGroup(moby,&DAT_00a51f68);
    mobyfunc::DeleteMoby(moby);
  }
  else if (((g_currentWeaponMoby == (MobyInstance *)0x0) ||
           (g_currentWeaponMoby->oClass != DECOY_GLOVE)) && (moby->state == '\x01')) {
    mobyutil::MB_DeleteMobyFromDynamicGroup(moby,&DAT_00a51f68);
    mobyfunc::DeleteMoby(moby);
  }
  else if ((g_heroType == '\0') || (moby->state != '\x01')) {
    MVar30 = moby->modeBits;
    *(int *)((int)pvVar10 + 0x54) = *(int *)((int)pvVar10 + 0x54) + 1;
    if ((hero::g_heroInvisible == '\0') || (1 < moby->state)) {
      MVar30 = MVar30 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                         DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|
                         HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
    }
    else {
      MVar30 = MVar30 | (UNK_40|DISABLED);
    }
    iVar33 = *(int *)((int)pvVar10 + 0x40);
    moby->modeBits = MVar30;
    if (((*(short *)(iVar33 + 0xa6) == 0x232) && (*(short *)((int)pvVar10 + 0x46) == 0)) &&
       (dVar42 = (double)FUN_005e8030(uVar39 + 0x10), 0.0 < dVar42)) {
      if ((g_standingOnMoby == 0) || (iVar33 = mobyutil::MB_GetPlatformParent(), iVar33 == 0)) {
        mobyupdate_helpers::M1900_002e7c08(uVar39,lVar26,1);
      }
      else {
        iVar33 = mobyupdate_helpers::M1900_002e7c08(uVar39,lVar26,0);
        if (iVar33 == 0) {
          mobyupdate_helpers::M1900_002e7c08(uVar39,lVar26,2);
        }
      }
    }
    bVar1 = moby->state;
    if (bVar1 < 3) {
      if (bVar1 == 0) {
        moby->state = '\x01';
        *(undefined2 *)((int)pvVar10 + 0x44) = 0;
        moby->collisionMesh = (float *)0xffffffff;
        *(undefined2 *)((int)pvVar10 + 0x6c) = 0;
        *(undefined1 *)((int)pvVar10 + 0x6e) = 0;
      }
      else if (bVar1 < 2) {
        *(undefined2 *)((int)pvVar10 + 0x44) = 0;
        if ((((*(int *)((int)pvVar10 + 0x40) == 0) ||
             ((*(byte *)(*(int *)((int)pvVar10 + 0x40) + 0x20) & 0xf0) == 0xf0)) ||
            (g_currentWeaponMoby == (MobyInstance *)0x0)) ||
           (g_currentWeaponMoby->oClass != DECOY_GLOVE)) {
          mobyutil::MB_DeleteMobyFromDynamicGroup(moby,&DAT_00a51f68);
          mobyfunc::DeleteMoby(moby);
        }
      }
      else {
        uVar14 = (int)moby->scale >> 0x1f;
        fVar12 = moby->pClass->gScale;
        uVar15 = (int)fVar12 >> 0x1f;
        if ((int)((uVar14 >> 1 ^ (uint)moby->scale) - uVar14) <
            (int)((uVar15 >> 1 ^ (uint)fVar12) - uVar15)) {
          moby->scale = DAT_0071f408 * 0.02 + moby->scale;
        }
        iVar33 = 1;
        *(float *)((int)pvVar10 + 0x18) = -(DAT_0071f418 * 9.0 - *(float *)((int)pvVar10 + 0x18));
        if (0 < DAT_00a51f68) {
          psVar36 = &DAT_00a51f6a;
          dVar47 = 1.7999999523162842;
          dVar41 = 0.014999999664723873;
          do {
            pMVar29 = MobyInstance + *psVar36;
            if (pMVar29 != moby) {
              bVar1 = pMVar29->state;
              if (((1 < bVar1) && (pMVar29 != (MobyInstance *)0x0)) &&
                 ((bVar1 != 0xfe && (bVar1 != 0xfd)))) {
                FUN_005e81f0(uVar25 - 0x1c0,lVar26 + 0x10,&pMVar29->pos);
                *(undefined4 *)(puVar19 + 0x19) = 0;
                dVar42 = (double)FUN_005e8030(uVar25 - 0x1c0);
                if (dVar42 < dVar47) {
                  fVar12 = (float)((double)(float)(dVar47 - dVar42) * dVar41);
                  *(float *)(puVar19 + 0x18) = *(float *)(puVar19 + 0x18) * fVar12;
                  *(float *)((int)puVar19 + 0xc4) = *(float *)((int)puVar19 + 0xc4) * fVar12;
                  *(float *)(puVar19 + 0x19) = *(float *)(puVar19 + 0x19) * fVar12;
                  FUN_005e7f54(uVar39 + 0x10,uVar39 + 0x10,uVar25 - 0x1c0);
                }
              }
            }
            iVar33 = iVar33 + 1;
            psVar36 = psVar36 + 1;
          } while (iVar33 <= DAT_00a51f68);
        }
        if (g_heroState == WEAPON_FIRST_PERSON_VIEW) {
          g_heroMobyPtr->collision = (ushort *)0x0;
        }
        lVar38 = uVar39 + 0x10;
        dVar41 = 0.20000000298023224;
        dVar47 = 0.0;
        uVar37 = mobyutil::MB_MoveAndCollide(0x3fc99999a0000000,0x3fc99999a0000000,0,lVar26,lVar38);
        if ((uVar37 & 1) != 0) {
          fVar12 = (moby->pos).z;
          fVar11 = (moby->pos).y;
          *(f32 *)(puVar19 + 0x1a) = (moby->pos).x;
          fVar3 = (moby->pos).w;
          *(f32 *)((int)puVar19 + 0xd4) = fVar11;
          *(f32 *)((int)puVar19 + 0xdc) = fVar3;
          *(float *)(puVar19 + 0x1b) = (float)((double)fVar12 + dVar41);
          iVar33 = collproc::CollSphere(0x3fcd70a3e0000000,uVar25 - 0x1b0,&DAT_002e8a68,0,lVar26);
          if (iVar33 != 0) {
            if (*(int *)((int)pvVar10 + 0x18) < 0) {
              FUN_005e81f0(uVar25 - 0x1a0,lVar26 + 0x10,&g_heroPosition);
              fVar12 = *(float *)((int)puVar19 + 0xe4);
              fVar4 = *(float *)(puVar19 + 0x1c);
              *(undefined4 *)(puVar19 + 0x1d) = 0;
              fVar5 = SQRT(fVar4 * fVar4 + fVar12 * fVar12);
              if (fVar5 < 1.8) {
                fVar5 = (1.8 - fVar5) * 0.015;
                *(undefined4 *)(puVar19 + 0x1d) = 0;
                fVar4 = fVar4 * fVar5;
                *(float *)((int)puVar19 + 0xe4) = fVar12 * fVar5;
                *(float *)(puVar19 + 0x1c) = fVar4;
                *(float *)((int)pvVar10 + 0x10) = *(float *)((int)pvVar10 + 0x10) + fVar4;
                *(float *)((int)pvVar10 + 0x14) =
                     *(float *)((int)pvVar10 + 0x14) + *(float *)((int)puVar19 + 0xe4);
                *(float *)((int)pvVar10 + 0x18) =
                     *(float *)((int)pvVar10 + 0x18) + *(float *)(puVar19 + 0x1d);
              }
            }
            fastfunc::FastVecNormalize(lVar38,lVar38,0xa10980);
            if ((CollOutput.pMoby == (MobyInstance *)0x0) || (0 < CollOutput.poly)) {
              fVar4 = *(float *)((int)pvVar10 + 0x10);
              fVar12 = *(float *)((int)pvVar10 + 0x14);
              fVar5 = *(float *)((int)pvVar10 + 0x18);
            }
            else {
              fVar4 = *(float *)((int)pvVar10 + 0x10);
              fVar12 = *(float *)((int)pvVar10 + 0x14);
              dVar41 = 1.0499999523162842;
              fVar5 = *(float *)((int)pvVar10 + 0x18);
            }
            fVar12 = (float)((double)fVar12 * dVar41);
            fVar4 = (float)((double)fVar4 * dVar41);
            fVar5 = (float)((double)fVar5 * dVar41);
            *(float *)((int)pvVar10 + 0x10) = fVar4;
            *(float *)((int)pvVar10 + 0x14) = fVar12;
            *(float *)((int)pvVar10 + 0x18) = fVar5;
            dVar41 = 0.009999999776482582;
            if ((SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar12 * fVar12) < DAT_0071f408 * 0.01) ||
               (((g_standingOnMoby != 0 && (iVar33 = mobyutil::MB_GetPlatformParent(), iVar33 != 0))
                && (SQRT(*(float *)((int)pvVar10 + 0x18) * *(float *)((int)pvVar10 + 0x18) +
                         *(float *)((int)pvVar10 + 0x10) * *(float *)((int)pvVar10 + 0x10) +
                         *(float *)((int)pvVar10 + 0x14) * *(float *)((int)pvVar10 + 0x14)) <
                    (float)((double)DAT_0071f408 * dVar41 +
                           (double)SQRT(DAT_00969de8 * DAT_00969de8 +
                                        DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4)))
                ))) {
              fVar4 = CollOutput.normal.z;
              dVar42 = ABS((double)CollOutput.normal.z);
              fVar12 = SQRT(CollOutput.normal.x * CollOutput.normal.x +
                            CollOutput.normal.y * CollOutput.normal.y);
              dVar43 = ABS((double)fVar12);
              *(float *)(puVar19 + 0x2b) = fVar12;
              *(float *)((int)puVar19 + 0x15c) = (float)(dVar42 - dVar43);
              uVar37 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)((int)puVar19 + 0x15c) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)(puVar19 + 0x2b) >> 0x1d) & 4;
              dVar41 = dVar42;
              if ((double)*(float *)((int)puVar19 + 0x15c) - dVar47 < 0.0) {
                dVar41 = dVar43;
              }
              fVar12 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar37 << 2));
              dVar43 = ABS((double)*(float *)(puVar19 + 0x2b));
              if ((double)*(float *)((int)puVar19 + 0x15c) - dVar47 < 0.0) {
                dVar43 = dVar42;
              }
              fVar4 = *(float *)(((uint)(uVar37 << 2) | 0x735900) + 4);
              dVar42 = dVar47;
              if (dVar47 < dVar41) {
                lVar27 = uVar25 - 0x270;
                lVar32 = uVar25 - 0xa0;
                lVar35 = uVar25 - 0x90;
                lVar40 = 2;
                fVar5 = (float)(dVar43 - dVar41) / (float)(dVar43 + dVar41);
                fVar7 = fVar5 * fVar5;
                *(float *)((int)puVar19 + 0x1ec) = fVar5;
                *(float *)((int)puVar19 + 0x1e4) = fVar5;
                *(float *)(puVar19 + 0x3d) = fVar5;
                *(float *)(puVar19 + 0x3c) = fVar5;
                fVar5 = fVar7 * fVar7;
                *(float *)((int)puVar19 + 0x1e4) = *(float *)((int)puVar19 + 0x1e4) * fVar7;
                *(float *)(puVar19 + 0x3d) = *(float *)(puVar19 + 0x3d) * fVar5;
                *(float *)((int)puVar19 + 0x1ec) = *(float *)((int)puVar19 + 0x1ec) * fVar5 * fVar7;
                do {
                  *(float *)((int)lVar27 + 0x1e0) = *(float *)((int)lVar27 + 0x1d0) * fVar5 * fVar5;
                  iVar33 = (int)lVar32;
                  lVar27 = lVar27 + 8;
                  lVar32 = lVar32 + 8;
                  *(float *)((int)lVar35 + 4) = *(float *)(iVar33 + 4) * fVar5 * fVar5;
                  lVar35 = lVar35 + 8;
                  lVar40 = lVar40 + -1;
                } while (lVar40 != 0);
                lVar40 = 4;
                lVar35 = uVar25 - 0xa0;
                pfVar34 = (float *)&DAT_007358e0;
                lVar27 = lVar28;
                lVar32 = lVar35;
                do {
                  fVar5 = *pfVar34;
                  fVar7 = pfVar34[1];
                  pfVar34 = pfVar34 + 2;
                  *(float *)((int)lVar27 + 0x1e0) = *(float *)((int)lVar27 + 0x1e0) * fVar5;
                  lVar27 = lVar27 + 8;
                  *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar7;
                  lVar32 = lVar32 + 8;
                  lVar40 = lVar40 + -1;
                } while (lVar40 != 0);
                lVar32 = 2;
                lVar27 = lVar28;
                dVar41 = dVar47;
                do {
                  iVar33 = (int)lVar27;
                  lVar27 = lVar27 + 0x10;
                  iVar20 = (int)lVar35;
                  lVar35 = lVar35 + 0x10;
                  dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar33 + 0x1e0)) +
                                    *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) +
                                   *(float *)(iVar20 + 0xc));
                  lVar32 = lVar32 + -1;
                } while (lVar32 != 0);
                dVar42 = (double)((float)(dVar41 + 0.7853981852531433) * fVar12 + fVar4);
              }
              if (dVar42 < 0.6108652353286743) {
                sVar31 = *(short *)((int)pvVar10 + 0x44) + 1;
                *(short *)((int)pvVar10 + 0x44) = sVar31;
                uVar2 = moby->animationId;
                if (((CollOutput.pMoby == (MobyInstance *)0x0) || (0 < CollOutput.poly)) ||
                   (puVar19[0x40] = (longlong)(int)(animationSpeed * 240.5),
                   *(int *)((int)puVar19 + 0x204) < (int)sVar31)) {
                  if (uVar2 != '\x01') {
                    puVar19[0x40] = (longlong)(int)(animationSpeed * 10.5);
                    mobyutil::MB_SetAnimation(lVar26,1,0,*(undefined4 *)((int)puVar19 + 0x204));
                  }
                  auVar48 = ZEXT416(0xffffffff);
                  auVar48 = auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60;
                  puVar13 = moby->pClass->collision;
                  moby->collisionMesh = (float *)0x0;
                  moby->collision = puVar13;
                  *(undefined1 *)((int)pvVar10 + 0x10) = 0;
                  *(undefined1 *)((int)pvVar10 + 0x11) = 0;
                  *(undefined1 *)((int)pvVar10 + 0x12) = 0;
                  *(undefined1 *)((int)pvVar10 + 0x13) = 0;
                  *(undefined1 *)((int)pvVar10 + 0x14) = 0;
                  *(undefined1 *)((int)pvVar10 + 0x15) = 0;
                  *(undefined1 *)((int)pvVar10 + 0x16) = 0;
                  *(undefined1 *)((int)pvVar10 + 0x17) = 0;
                  *(undefined1 *)((int)pvVar10 + 0x18) = 0;
                  *(undefined1 *)((int)pvVar10 + 0x19) = 0;
                  *(undefined1 *)((int)pvVar10 + 0x1a) = 0;
                  *(undefined1 *)((int)pvVar10 + 0x1b) = 0;
                  *(undefined1 *)((int)pvVar10 + 0x1c) = 0;
                  *(undefined1 *)((int)pvVar10 + 0x1d) = 0;
                  *(undefined1 *)((int)pvVar10 + 0x1e) = 0;
                  *(undefined1 *)((int)pvVar10 + 0x1f) = 0;
                  moby->state = '\x03';
                  auVar49 = vectorShiftLeftIntegerWord(auVar48,auVar48);
                  auVar48 = loadVectorLeftIndexed(0x38,0x2e8a68);
                  auVar48 = auVar48 >> 0x60 & (undefined1  [16])0xffffffff;
                  auVar50 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                  auVar48 = vectorMultiplyAddFloatingPoint
                                      (auVar50,auVar48 | auVar48 << 0x20 | auVar48 << 0x40 |
                                               auVar48 << 0x60,auVar49);
                  auVar48 = vectorConvertToSignedFixedPointWordSaturate(auVar48,0);
                  auVar48 = vectorSplatHalfWord(auVar48,1);
                  uVar17 = storeVectorElementHalfWordIndexed(auVar48,0x44,uVar39);
                  *(undefined2 *)((int)pvVar10 + 0x44) = uVar17;
                  fVar8 = CollOutput.normal.z;
                  fVar7 = CollOutput.ip.z;
                  fVar12 = (moby->rotation).z;
                  fVar4 = fVar12 + 1.5707963;
                  fVar5 = 3.1415925 - fVar12;
                  if (fVar12 - (3.1415925 - fVar12) < 0.0) {
                    fVar5 = fVar12;
                  }
                  fVar6 = 3.1415925 - fVar4;
                  if (fVar4 - (3.1415925 - fVar4) < 0.0) {
                    fVar6 = fVar4;
                  }
                  fVar21 = -3.1415925 - fVar12;
                  if ((-3.1415925 - fVar12) - fVar5 < 0.0) {
                    fVar21 = fVar5;
                  }
                  fVar12 = -3.1415925 - fVar4;
                  if ((-3.1415925 - fVar4) - fVar6 < 0.0) {
                    fVar12 = fVar6;
                  }
                  fVar4 = fVar21 * fVar21;
                  dVar43 = (double)CollOutput.normal.z;
                  fVar5 = fVar12 * fVar12;
                  fVar23 = fVar4 * fVar4 * fVar21;
                  fVar6 = fVar5 * fVar5 * fVar12;
                  fVar24 = fVar4 * fVar23;
                  fVar22 = fVar5 * fVar6;
                  fVar21 = fVar4 * fVar24 * 2.601887e-06 +
                           fVar24 * -0.0001980741 +
                           fVar23 * 0.0083330255 + fVar4 * fVar21 * -0.16666657 + fVar21;
                  fVar12 = fVar5 * fVar22 * 2.601887e-06 +
                           fVar22 * -0.0001980741 +
                           fVar6 * 0.0083330255 + fVar5 * fVar12 * -0.16666657 + fVar12;
                  fVar4 = CollOutput.normal.x * fVar12 + CollOutput.normal.y * fVar21;
                  dVar42 = (double)fVar4;
                  fVar12 = CollOutput.normal.y * fVar12 - CollOutput.normal.x * fVar21;
                  dVar44 = ABS((double)fVar12);
                  *(float *)(puVar19 + 0x2a) = fVar12;
                  (moby->pos).z = fVar7;
                  fVar12 = SQRT((float)(dVar42 * dVar42 + (double)(float)(dVar43 * dVar43)));
                  dVar45 = ABS((double)fVar12);
                  *(float *)((int)puVar19 + 0x14c) = fVar12;
                  *(float *)((int)puVar19 + 0x154) = (float)(dVar45 - dVar44);
                  uVar37 = (ulonglong)(*(uint *)((int)puVar19 + 0x14c) >> 0x1c) & 8 |
                           (ulonglong)(*(uint *)((int)puVar19 + 0x154) >> 0x1e) & 2 |
                           (ulonglong)(*(uint *)(puVar19 + 0x2a) >> 0x1d) & 4;
                  dVar41 = ABS((double)*(float *)((int)puVar19 + 0x14c));
                  if ((double)*(float *)((int)puVar19 + 0x154) - dVar47 < 0.0) {
                    dVar41 = dVar44;
                  }
                  fVar12 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar37 << 2));
                  dVar44 = ABS((double)*(float *)(puVar19 + 0x2a));
                  if ((double)*(float *)((int)puVar19 + 0x154) - dVar47 < 0.0) {
                    dVar44 = dVar45;
                  }
                  fVar5 = *(float *)(((uint)(uVar37 << 2) | 0x735900) + 4);
                  dVar45 = dVar47;
                  if (dVar47 < dVar41) {
                    lVar27 = uVar25 - 0x270;
                    lVar35 = uVar25 - 0xb0;
                    lVar32 = uVar25 - 0xc0;
                    lVar40 = 2;
                    fVar7 = (float)(dVar44 - dVar41) / (float)(dVar44 + dVar41);
                    fVar6 = fVar7 * fVar7;
                    *(float *)((int)puVar19 + 0x1cc) = fVar7;
                    *(float *)((int)puVar19 + 0x1c4) = fVar7;
                    *(float *)(puVar19 + 0x39) = fVar7;
                    *(float *)(puVar19 + 0x38) = fVar7;
                    fVar7 = fVar6 * fVar6;
                    *(float *)((int)puVar19 + 0x1c4) = *(float *)((int)puVar19 + 0x1c4) * fVar6;
                    *(float *)(puVar19 + 0x39) = *(float *)(puVar19 + 0x39) * fVar7;
                    *(float *)((int)puVar19 + 0x1cc) =
                         *(float *)((int)puVar19 + 0x1cc) * fVar7 * fVar6;
                    do {
                      *(float *)((int)lVar27 + 0x1c0) =
                           *(float *)((int)lVar27 + 0x1b0) * fVar7 * fVar7;
                      iVar33 = (int)lVar32;
                      lVar32 = lVar32 + 8;
                      lVar27 = lVar27 + 8;
                      *(float *)((int)lVar35 + 4) = *(float *)(iVar33 + 4) * fVar7 * fVar7;
                      lVar35 = lVar35 + 8;
                      lVar40 = lVar40 + -1;
                    } while (lVar40 != 0);
                    lVar40 = 4;
                    lVar35 = uVar25 - 0xc0;
                    pfVar34 = (float *)&DAT_007358e0;
                    lVar27 = lVar28;
                    lVar32 = lVar35;
                    do {
                      fVar7 = *pfVar34;
                      fVar6 = pfVar34[1];
                      pfVar34 = pfVar34 + 2;
                      *(float *)((int)lVar27 + 0x1c0) = *(float *)((int)lVar27 + 0x1c0) * fVar7;
                      lVar27 = lVar27 + 8;
                      *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar6;
                      lVar32 = lVar32 + 8;
                      lVar40 = lVar40 + -1;
                    } while (lVar40 != 0);
                    lVar32 = 2;
                    lVar27 = lVar28;
                    dVar41 = dVar47;
                    do {
                      iVar33 = (int)lVar27;
                      iVar20 = (int)lVar35;
                      lVar27 = lVar27 + 0x10;
                      lVar35 = lVar35 + 0x10;
                      dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar33 + 0x1c0)) +
                                        *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) +
                                       *(float *)(iVar20 + 0xc));
                      lVar32 = lVar32 + -1;
                    } while (lVar32 != 0);
                    dVar45 = (double)((float)(dVar41 + 0.7853981852531433) * fVar12 + fVar5);
                  }
                  dVar43 = ABS(dVar43);
                  *(float *)((int)pvVar10 + 0x4c) = (float)-dVar45;
                  *(float *)((int)puVar19 + 0x144) = fVar4;
                  *(float *)(puVar19 + 0x29) = (float)(dVar43 - ABS(dVar42));
                  uVar37 = (ulonglong)((uint)fVar8 >> 0x1c) & 8 |
                           (ulonglong)(*(uint *)(puVar19 + 0x29) >> 0x1e) & 2 |
                           (ulonglong)(*(uint *)((int)puVar19 + 0x144) >> 0x1d) & 4;
                  dVar41 = dVar43;
                  if ((double)*(float *)(puVar19 + 0x29) - dVar47 < 0.0) {
                    dVar41 = ABS(dVar42);
                  }
                  dVar42 = ABS((double)*(float *)((int)puVar19 + 0x144));
                  if ((double)*(float *)(puVar19 + 0x29) - dVar47 < 0.0) {
                    dVar42 = dVar43;
                  }
                  fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar37 << 2));
                  fVar12 = *(float *)(((uint)(uVar37 << 2) | 0x735900) + 4);
                  if (dVar47 < dVar41) {
                    lVar27 = uVar25 - 0x270;
                    lVar32 = uVar25 - 0xe0;
                    lVar35 = uVar25 - 0xd0;
                    lVar40 = 2;
                    fVar5 = (float)(dVar42 - dVar41) / (float)(dVar42 + dVar41);
                    fVar7 = fVar5 * fVar5;
                    *(float *)((int)puVar19 + 0x1ac) = fVar5;
                    *(float *)((int)puVar19 + 0x1a4) = fVar5;
                    *(float *)(puVar19 + 0x35) = fVar5;
                    *(float *)(puVar19 + 0x34) = fVar5;
                    fVar5 = fVar7 * fVar7;
                    *(float *)((int)puVar19 + 0x1a4) = *(float *)((int)puVar19 + 0x1a4) * fVar7;
                    *(float *)(puVar19 + 0x35) = *(float *)(puVar19 + 0x35) * fVar5;
                    *(float *)((int)puVar19 + 0x1ac) =
                         *(float *)((int)puVar19 + 0x1ac) * fVar5 * fVar7;
                    do {
                      *(float *)((int)lVar27 + 0x1a0) =
                           *(float *)((int)lVar27 + 400) * fVar5 * fVar5;
                      iVar33 = (int)lVar32;
                      lVar27 = lVar27 + 8;
                      lVar32 = lVar32 + 8;
                      *(float *)((int)lVar35 + 4) = *(float *)(iVar33 + 4) * fVar5 * fVar5;
                      lVar35 = lVar35 + 8;
                      lVar40 = lVar40 + -1;
                    } while (lVar40 != 0);
                    lVar40 = 4;
                    lVar35 = uVar25 - 0xe0;
                    pfVar34 = (float *)&DAT_007358e0;
                    lVar27 = lVar28;
                    lVar32 = lVar35;
                    do {
                      fVar5 = *pfVar34;
                      fVar7 = pfVar34[1];
                      pfVar34 = pfVar34 + 2;
                      *(float *)((int)lVar27 + 0x1a0) = *(float *)((int)lVar27 + 0x1a0) * fVar5;
                      lVar27 = lVar27 + 8;
                      *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar7;
                      lVar32 = lVar32 + 8;
                      lVar40 = lVar40 + -1;
                    } while (lVar40 != 0);
                    lVar27 = 2;
                    do {
                      iVar33 = (int)lVar28;
                      iVar20 = (int)lVar35;
                      lVar28 = lVar28 + 0x10;
                      lVar35 = lVar35 + 0x10;
                      dVar47 = (double)((float)(dVar47 + (double)*(float *)(iVar33 + 0x1a0)) +
                                        *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) +
                                       *(float *)(iVar20 + 0xc));
                      lVar27 = lVar27 + -1;
                    } while (lVar27 != 0);
                    dVar47 = (double)((float)(dVar47 + 0.7853981852531433) * fVar4 + fVar12);
                  }
                  *(float *)((int)pvVar10 + 0x50) = (float)dVar47;
                  dVar42 = (double)(moby->rotation).x;
                  dVar41 = (double)fastfunc::FastDiffRots(-dVar45,dVar42);
                  dVar47 = 0.10000000149011612;
                  dVar41 = (double)fastfunc::FastWrapRot
                                             ((float)dVar42,
                                              (float)((double)(DAT_0071f408 * 0.1) * dVar41));
                  (moby->rotation).x = (float)dVar41;
                  dVar42 = (double)(moby->rotation).y;
                  dVar41 = (double)fastfunc::FastDiffRots
                                             ((double)*(float *)((int)pvVar10 + 0x50),dVar42);
                  dVar41 = (double)fastfunc::FastWrapRot
                                             ((float)dVar42,
                                              (float)((double)(float)((double)DAT_0071f408 * dVar47)
                                                     * dVar41));
                  (moby->rotation).y = (float)dVar41;
                }
              }
            }
            mobyupdate_helpers::M1900_002e89ec(lVar26);
            iVar33 = fastfunc::FastDecTimerU8(uVar39 + 0x6f);
            if (iVar33 == 0) {
              mobyutil::MB_RandomizeVector(mobyutil::g_FrameTime,(float *)lVar38);
            }
            else {
              sound::PlayMobySound(0,0,moby);
              auVar48 = ZEXT416(0xffffffff);
              auVar48 = auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60;
              auVar49 = vectorShiftLeftIntegerWord(auVar48,auVar48);
              auVar48 = loadVectorLeftIndexed(0x5c,0x2e8a68);
              auVar48 = auVar48 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar50 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar48 = vectorMultiplyAddFloatingPoint
                                  (auVar50,auVar48 | auVar48 << 0x20 | auVar48 << 0x40 |
                                           auVar48 << 0x60,auVar49);
              auVar48 = vectorConvertToSignedFixedPointWordSaturate(auVar48,0);
              auVar48 = auVar48 >> 0x60 & (undefined1  [16])0xff;
              uVar16 = storeVectorElementByteIndexed
                                 (auVar48 | auVar48 << 8 | auVar48 << 0x10 | auVar48 << 0x18 |
                                  auVar48 << 0x20 | auVar48 << 0x28 | auVar48 << 0x30 |
                                  auVar48 << 0x38 | auVar48 << 0x40 | auVar48 << 0x48 |
                                  auVar48 << 0x50 | auVar48 << 0x58 | auVar48 << 0x60 |
                                  auVar48 << 0x68 | auVar48 << 0x70 | auVar48 << 0x78,0x6f,uVar39);
              *(undefined1 *)((int)pvVar10 + 0x6f) = uVar16;
            }
          }
        }
        if (g_heroState == WEAPON_FIRST_PERSON_VIEW) {
          g_heroMobyPtr->collision = g_heroMobyPtr->pClass->collision;
        }
      }
    }
    else if (bVar1 < 6) {
      if (bVar1 < 5) {
        if ((g_heroState == WATER_SLIDING) &&
           (fVar12 = (moby->pos).y - g_heroPosition.y, fVar4 = (moby->pos).x - g_heroPosition.x,
           SQRT(fVar4 * fVar4 + fVar12 * fVar12) < 1.5)) {
          mobyutil::CollDamageMobyDirect_wrap(0x408f400000000000,lVar26,lVar26,0x10000);
        }
        iVar33 = mobyutil::MB_damage(lVar26,0x30001,0);
        dVar44 = (double)(moby->rotation).x;
        dVar42 = (double)fastfunc::FastDiffRots((double)*(float *)((int)pvVar10 + 0x4c),dVar44);
        dVar43 = 0.10000000149011612;
        dVar42 = (double)fastfunc::FastWrapRot
                                   ((float)dVar44,(float)((double)(DAT_0071f408 * 0.1) * dVar42));
        (moby->rotation).x = (float)dVar42;
        dVar44 = (double)(moby->rotation).y;
        dVar42 = (double)fastfunc::FastDiffRots((double)*(float *)((int)pvVar10 + 0x50),dVar44);
        dVar42 = (double)fastfunc::FastWrapRot
                                   ((float)dVar44,
                                    (float)((double)(float)((double)DAT_0071f408 * dVar43) * dVar42)
                                   );
        (moby->rotation).y = (float)dVar42;
        mobyupdate_helpers::M1900_002e86b8(lVar26);
        fastfunc::FastDecTimerS32(uVar39 + 0x5c);
        fastfunc::FastDecTimerS16(uVar39 + 0x6c);
        if ((iVar33 != 0) &&
           ((*(int *)(iVar33 + 0x20) != *(int *)((int)pvVar10 + 0x58) ||
            (*(int *)((int)pvVar10 + 0x5c) < 1)))) {
          auVar48 = ZEXT416(0xffffffff);
          auVar48 = auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60;
          *(int *)((int)pvVar10 + 0x58) = *(int *)(iVar33 + 0x20);
          auVar50 = vectorShiftLeftIntegerWord(auVar48,auVar48);
          auVar48 = loadVectorLeftIndexed(0x68,0x2e8a68);
          auVar48 = auVar48 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          sVar31 = *(short *)((int)pvVar10 + 0x6c);
          auVar48 = vectorMultiplyAddFloatingPoint
                              (auVar49,auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60
                               ,auVar50);
          auVar48 = vectorConvertToSignedFixedPointWordSaturate(auVar48,0);
          auVar48 = auVar48 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar18 = storeVectorElementWordIndexed
                             (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60,0x5c,
                              uVar39);
          *(undefined4 *)((int)pvVar10 + 0x5cU & 0xfffffffc) = uVar18;
          if (sVar31 == 0) {
            if (((*(char *)(iVar33 + 0x28) == '\x01') && (*(char *)(iVar33 + 0x29) == '\x01')) &&
               (*(char *)((int)pvVar10 + 0x6e) == '\0')) {
              auVar48 = ZEXT416(0xffffffff);
              auVar48 = auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60;
              auVar50 = vectorShiftLeftIntegerWord(auVar48,auVar48);
              auVar48 = loadVectorLeftIndexed(0x6c,0x2e8a68);
              auVar48 = auVar48 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar48 = vectorMultiplyAddFloatingPoint
                                  (auVar49,auVar48 | auVar48 << 0x20 | auVar48 << 0x40 |
                                           auVar48 << 0x60,auVar50);
              auVar48 = vectorConvertToSignedFixedPointWordSaturate(auVar48,0);
              auVar48 = vectorSplatHalfWord(auVar48,1);
              uVar17 = storeVectorElementHalfWordIndexed(auVar48,0x6c,uVar39);
              *(undefined2 *)((int)pvVar10 + 0x6c) = uVar17;
              *(undefined1 *)((int)pvVar10 + 0x6e) = 1;
            }
            else {
              *(undefined1 *)((int)pvVar10 + 0x6e) = 0;
            }
            sound::PlayMobySound(0,0,moby);
            fVar12 = *(float *)(iVar33 + 0x2c);
            *(undefined1 *)((int)pvVar10 + 7) = 0xfa;
            *(float *)((int)pvVar10 + 0x48) = *(float *)((int)pvVar10 + 0x48) - fVar12;
            mobyutil::MB_UpdateLightsTransition(lVar26,uVar39);
            uVar46 = 0;
            if (*(int *)((int)pvVar10 + 0x48) < 0) {
              *(undefined4 *)(puVar19 + 0x1e) = 0;
              *(undefined4 *)((int)puVar19 + 0xf4) = 0;
              *(undefined4 *)(puVar19 + 0x1f) = 0;
              *(undefined4 *)((int)puVar19 + 0xfc) = 0;
              fVar5 = DAT_0071f408;
              fVar12 = DAT_0071f408 * 0.5;
              fVar4 = DAT_0071f408 * 0.5;
              *(float *)(puVar19 + 0x1e) = DAT_0071f408 * 0.5;
              *(float *)((int)puVar19 + 0xf4) = fVar12;
              *(float *)(puVar19 + 0x1f) = fVar5 * 0.7;
              mobyutil::MB_RandomizeVector(fVar4,(float *)(uVar25 - 400));
              dVar42 = 3.0;
              puVar19[0x12] = 2;
              puVar19[0x14] = 1;
              puVar19[0x15] = 1;
              puVar19[0x16] = 0xffffffffffffffff;
              puVar19[0x17] = uVar37;
              mobyutil::MB_genericExplosion
                        (uVar46,uVar46,0x4010000000000000,0x4008000000000000,0x4022000000000000,
                         0x3ff0000000000000,0x4028000000000000,lVar26,uVar25 - 400,0,2,1,0,0,0);
              if ((int)uVar37 != 0) {
                mobyutil::SetCollDamIn
                          ((double)(float)(dVar41 * dVar47),uVar25 - 0x180,lVar26,&DAT_00810000);
                MVar9 = moby->oClass;
                *(undefined1 *)(puVar19 + 0x23) = 2;
                *(undefined1 *)((int)puVar19 + 0x119) = 1;
                *(MOBY_OCLASSES *)((int)puVar19 + 0x11a) = MVar9;
                collproc::CollMobySphere
                          ((double)(float)(dVar41 * dVar42),lVar26 + 0x10,2,0x10,lVar26,
                           uVar25 - 0x180);
              }
              mobyutil::MB_DeleteMobyFromDynamicGroup(moby,&DAT_00a51f68);
              mobyfunc::DeleteMoby(moby);
              return;
            }
          }
        }
        moby->damage = -1;
        mobyutil::MB_ColorDyingMoby(lVar26,uVar39);
        if ((moby->field43_0x70 & 2U) != 0) {
          if (moby->animationId != '\x02') {
            puVar19[0x40] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar26,2,0,*(undefined4 *)((int)puVar19 + 0x204));
          }
          dVar41 = (double)mobyutil::MB_randRangeFloat(0.7,1.05);
          moby->unk58 = (float)dVar41;
        }
        if (moby->state == '\x04') {
          uVar14 = (int)moby->scale >> 0x1f;
          fVar12 = moby->pClass->gScale;
          uVar15 = (int)fVar12 >> 0x1f;
          if ((int)((uVar14 >> 1 ^ (uint)moby->scale) - uVar14) <
              (int)((uVar15 >> 1 ^ (uint)fVar12) - uVar15)) {
            moby->scale = DAT_0071f408 * 0.02 + moby->scale;
          }
          iVar33 = fastfunc::FastDecTimerS16(uVar39 + 0x44);
          if (iVar33 != 0) {
            if (moby->animationId != '\0') {
              puVar19[0x40] = (longlong)(int)(animationSpeed * 60.5);
              mobyutil::MB_SetAnimation(lVar26,0,0,*(undefined4 *)((int)puVar19 + 0x204));
            }
            mobyutil::MB_DeleteMobyFromDynamicGroup(moby,&DAT_00a51f68);
            moby->state = '\x05';
          }
        }
        else {
          lVar38 = lVar26 + 0x10;
          uVar46 = 0x3fe0000000000000;
          dVar41 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar38,0);
          dVar47 = 0.0;
          if (dVar41 != 0.0) {
            mobyupdate_helpers::M1900_002e89ec(lVar26);
            if ((moby->pos).z <= (float)(dVar41 + 0.019999999552965164)) {
              *(undefined1 *)((int)pvVar10 + 0x10) = 0;
              *(undefined1 *)((int)pvVar10 + 0x11) = 0;
              *(undefined1 *)((int)pvVar10 + 0x12) = 0;
              *(undefined1 *)((int)pvVar10 + 0x13) = 0;
              *(undefined1 *)((int)pvVar10 + 0x14) = 0;
              *(undefined1 *)((int)pvVar10 + 0x15) = 0;
              *(undefined1 *)((int)pvVar10 + 0x16) = 0;
              *(undefined1 *)((int)pvVar10 + 0x17) = 0;
              *(undefined1 *)((int)pvVar10 + 0x18) = 0;
              *(undefined1 *)((int)pvVar10 + 0x19) = 0;
              *(undefined1 *)((int)pvVar10 + 0x1a) = 0;
              *(undefined1 *)((int)pvVar10 + 0x1b) = 0;
              *(undefined1 *)((int)pvVar10 + 0x1c) = 0;
              *(undefined1 *)((int)pvVar10 + 0x1d) = 0;
              *(undefined1 *)((int)pvVar10 + 0x1e) = 0;
              *(undefined1 *)((int)pvVar10 + 0x1f) = 0;
            }
            else {
              *(float *)((int)pvVar10 + 0x18) =
                   -(DAT_0071f418 * 9.8 - *(float *)((int)pvVar10 + 0x18));
              (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar10 + 0x10);
              (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar10 + 0x14);
              (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar10 + 0x18);
              dVar41 = (double)mobyutil::GetGroundZ(uVar46,lVar38,0);
              if ((double)(moby->pos).z < dVar41) {
                (moby->pos).z = (float)dVar41;
                *(undefined1 *)((int)pvVar10 + 0x10) = 0;
                *(undefined1 *)((int)pvVar10 + 0x11) = 0;
                *(undefined1 *)((int)pvVar10 + 0x12) = 0;
                *(undefined1 *)((int)pvVar10 + 0x13) = 0;
                *(undefined1 *)((int)pvVar10 + 0x14) = 0;
                *(undefined1 *)((int)pvVar10 + 0x15) = 0;
                *(undefined1 *)((int)pvVar10 + 0x16) = 0;
                *(undefined1 *)((int)pvVar10 + 0x17) = 0;
                *(undefined1 *)((int)pvVar10 + 0x18) = 0;
                *(undefined1 *)((int)pvVar10 + 0x19) = 0;
                *(undefined1 *)((int)pvVar10 + 0x1a) = 0;
                *(undefined1 *)((int)pvVar10 + 0x1b) = 0;
                *(undefined1 *)((int)pvVar10 + 0x1c) = 0;
                *(undefined1 *)((int)pvVar10 + 0x1d) = 0;
                *(undefined1 *)((int)pvVar10 + 0x1e) = 0;
                *(undefined1 *)((int)pvVar10 + 0x1f) = 0;
                fVar7 = CollOutput.normal.z;
                fVar12 = (moby->rotation).z;
                fVar4 = fVar12 + 1.5707963;
                fVar5 = 3.1415925 - fVar12;
                if (fVar12 - (3.1415925 - fVar12) < 0.0) {
                  fVar5 = fVar12;
                }
                fVar8 = 3.1415925 - fVar4;
                if (fVar4 - (3.1415925 - fVar4) < 0.0) {
                  fVar8 = fVar4;
                }
                fVar6 = -3.1415925 - fVar12;
                if ((-3.1415925 - fVar12) - fVar5 < 0.0) {
                  fVar6 = fVar5;
                }
                fVar12 = -3.1415925 - fVar4;
                if ((-3.1415925 - fVar4) - fVar8 < 0.0) {
                  fVar12 = fVar8;
                }
                fVar4 = fVar6 * fVar6;
                dVar43 = (double)CollOutput.normal.z;
                fVar5 = fVar12 * fVar12;
                fVar22 = fVar4 * fVar4 * fVar6;
                fVar8 = fVar5 * fVar5 * fVar12;
                fVar23 = fVar4 * fVar22;
                fVar21 = fVar5 * fVar8;
                fVar6 = fVar4 * fVar23 * 2.601887e-06 +
                        fVar23 * -0.0001980741 +
                        fVar22 * 0.0083330255 + fVar4 * fVar6 * -0.16666657 + fVar6;
                fVar12 = fVar5 * fVar21 * 2.601887e-06 +
                         fVar21 * -0.0001980741 +
                         fVar8 * 0.0083330255 + fVar5 * fVar12 * -0.16666657 + fVar12;
                fVar4 = CollOutput.normal.x * fVar12 + CollOutput.normal.y * fVar6;
                dVar42 = (double)fVar4;
                fVar12 = CollOutput.normal.y * fVar12 - CollOutput.normal.x * fVar6;
                dVar44 = ABS((double)fVar12);
                *(float *)((int)puVar19 + 0x13c) = fVar12;
                fVar12 = SQRT((float)(dVar42 * dVar42 + (double)(float)(dVar43 * dVar43)));
                dVar45 = ABS((double)fVar12);
                *(float *)(puVar19 + 0x27) = fVar12;
                *(float *)(puVar19 + 0x28) = (float)(dVar45 - dVar44);
                uVar37 = (ulonglong)(*(uint *)(puVar19 + 0x27) >> 0x1c) & 8 |
                         (ulonglong)(*(uint *)(puVar19 + 0x28) >> 0x1e) & 2 |
                         (ulonglong)(*(uint *)((int)puVar19 + 0x13c) >> 0x1d) & 4;
                dVar41 = ABS((double)*(float *)(puVar19 + 0x27));
                if ((double)*(float *)(puVar19 + 0x28) - dVar47 < 0.0) {
                  dVar41 = dVar44;
                }
                fVar12 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar37 << 2));
                dVar44 = ABS((double)*(float *)((int)puVar19 + 0x13c));
                if ((double)*(float *)(puVar19 + 0x28) - dVar47 < 0.0) {
                  dVar44 = dVar45;
                }
                fVar5 = *(float *)(((uint)(uVar37 << 2) | 0x735900) + 4);
                dVar45 = dVar47;
                if (dVar47 < dVar41) {
                  lVar27 = uVar25 - 0x270;
                  lVar35 = uVar25 - 0xf0;
                  lVar32 = uVar25 - 0x100;
                  lVar40 = 2;
                  fVar8 = (float)(dVar44 - dVar41) / (float)(dVar44 + dVar41);
                  fVar6 = fVar8 * fVar8;
                  *(float *)((int)puVar19 + 0x18c) = fVar8;
                  *(float *)((int)puVar19 + 0x184) = fVar8;
                  *(float *)(puVar19 + 0x31) = fVar8;
                  *(float *)(puVar19 + 0x30) = fVar8;
                  fVar8 = fVar6 * fVar6;
                  *(float *)((int)puVar19 + 0x184) = *(float *)((int)puVar19 + 0x184) * fVar6;
                  *(float *)(puVar19 + 0x31) = *(float *)(puVar19 + 0x31) * fVar8;
                  *(float *)((int)puVar19 + 0x18c) =
                       *(float *)((int)puVar19 + 0x18c) * fVar8 * fVar6;
                  do {
                    *(float *)((int)lVar27 + 0x180) =
                         *(float *)((int)lVar27 + 0x170) * fVar8 * fVar8;
                    iVar33 = (int)lVar32;
                    lVar32 = lVar32 + 8;
                    lVar27 = lVar27 + 8;
                    *(float *)((int)lVar35 + 4) = *(float *)(iVar33 + 4) * fVar8 * fVar8;
                    lVar35 = lVar35 + 8;
                    lVar40 = lVar40 + -1;
                  } while (lVar40 != 0);
                  lVar40 = 4;
                  lVar35 = uVar25 - 0x100;
                  pfVar34 = (float *)&DAT_007358e0;
                  lVar27 = lVar28;
                  lVar32 = lVar35;
                  do {
                    fVar8 = *pfVar34;
                    fVar6 = pfVar34[1];
                    pfVar34 = pfVar34 + 2;
                    *(float *)((int)lVar27 + 0x180) = *(float *)((int)lVar27 + 0x180) * fVar8;
                    lVar27 = lVar27 + 8;
                    *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar6;
                    lVar32 = lVar32 + 8;
                    lVar40 = lVar40 + -1;
                  } while (lVar40 != 0);
                  lVar32 = 2;
                  lVar27 = lVar28;
                  dVar41 = dVar47;
                  do {
                    iVar33 = (int)lVar27;
                    iVar20 = (int)lVar35;
                    lVar27 = lVar27 + 0x10;
                    lVar35 = lVar35 + 0x10;
                    dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar33 + 0x180)) +
                                      *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) +
                                     *(float *)(iVar20 + 0xc));
                    lVar32 = lVar32 + -1;
                  } while (lVar32 != 0);
                  dVar45 = (double)((float)(dVar41 + 0.7853981852531433) * fVar12 + fVar5);
                }
                dVar43 = ABS(dVar43);
                *(float *)((int)pvVar10 + 0x4c) = (float)-dVar45;
                *(float *)(puVar19 + 0x26) = fVar4;
                *(float *)((int)puVar19 + 0x134) = (float)(dVar43 - ABS(dVar42));
                uVar37 = (ulonglong)((uint)fVar7 >> 0x1c) & 8 |
                         (ulonglong)(*(uint *)((int)puVar19 + 0x134) >> 0x1e) & 2 |
                         (ulonglong)(*(uint *)(puVar19 + 0x26) >> 0x1d) & 4;
                dVar41 = dVar43;
                if ((double)*(float *)((int)puVar19 + 0x134) - dVar47 < 0.0) {
                  dVar41 = ABS(dVar42);
                }
                dVar42 = ABS((double)*(float *)(puVar19 + 0x26));
                if ((double)*(float *)((int)puVar19 + 0x134) - dVar47 < 0.0) {
                  dVar42 = dVar43;
                }
                fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar37 << 2));
                fVar12 = *(float *)(((uint)(uVar37 << 2) | 0x735900) + 4);
                if (dVar47 < dVar41) {
                  lVar27 = uVar25 - 0x270;
                  lVar32 = uVar25 - 0x120;
                  lVar35 = uVar25 - 0x110;
                  lVar40 = 2;
                  fVar5 = (float)(dVar42 - dVar41) / (float)(dVar42 + dVar41);
                  fVar7 = fVar5 * fVar5;
                  *(float *)((int)puVar19 + 0x16c) = fVar5;
                  *(float *)((int)puVar19 + 0x164) = fVar5;
                  *(float *)(puVar19 + 0x2d) = fVar5;
                  *(float *)(puVar19 + 0x2c) = fVar5;
                  fVar5 = fVar7 * fVar7;
                  *(float *)((int)puVar19 + 0x164) = *(float *)((int)puVar19 + 0x164) * fVar7;
                  *(float *)(puVar19 + 0x2d) = *(float *)(puVar19 + 0x2d) * fVar5;
                  *(float *)((int)puVar19 + 0x16c) =
                       *(float *)((int)puVar19 + 0x16c) * fVar5 * fVar7;
                  do {
                    *(float *)((int)lVar27 + 0x160) =
                         *(float *)((int)lVar27 + 0x150) * fVar5 * fVar5;
                    iVar33 = (int)lVar32;
                    lVar27 = lVar27 + 8;
                    lVar32 = lVar32 + 8;
                    *(float *)((int)lVar35 + 4) = *(float *)(iVar33 + 4) * fVar5 * fVar5;
                    lVar35 = lVar35 + 8;
                    lVar40 = lVar40 + -1;
                  } while (lVar40 != 0);
                  lVar40 = 4;
                  lVar35 = uVar25 - 0x120;
                  pfVar34 = (float *)&DAT_007358e0;
                  lVar27 = lVar28;
                  lVar32 = lVar35;
                  do {
                    fVar5 = *pfVar34;
                    fVar7 = pfVar34[1];
                    pfVar34 = pfVar34 + 2;
                    *(float *)((int)lVar27 + 0x160) = *(float *)((int)lVar27 + 0x160) * fVar5;
                    lVar27 = lVar27 + 8;
                    *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar7;
                    lVar32 = lVar32 + 8;
                    lVar40 = lVar40 + -1;
                  } while (lVar40 != 0);
                  lVar27 = 2;
                  do {
                    iVar33 = (int)lVar28;
                    iVar20 = (int)lVar35;
                    lVar28 = lVar28 + 0x10;
                    lVar35 = lVar35 + 0x10;
                    dVar47 = (double)((float)(dVar47 + (double)*(float *)(iVar33 + 0x160)) +
                                      *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) +
                                     *(float *)(iVar20 + 0xc));
                    lVar27 = lVar27 + -1;
                  } while (lVar27 != 0);
                  dVar47 = (double)((float)(dVar47 + 0.7853981852531433) * fVar4 + fVar12);
                }
                *(float *)((int)pvVar10 + 0x50) = (float)dVar47;
              }
            }
            if (CollOutput.pMoby != (MobyInstance *)0x0) {
              mobyutil::MB_PlatformLocalToWorld
                        (lVar26,CollOutput.pMoby,lVar38,lVar26 + 0x40,lVar38,lVar26 + 0x40);
            }
          }
        }
      }
      else {
        lVar28 = lVar26 + 0x10;
        dVar41 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar28,0);
        if ((dVar41 != 0.0) && (CollOutput.pMoby != (MobyInstance *)0x0)) {
          mobyutil::MB_PlatformLocalToWorld
                    (lVar26,CollOutput.pMoby,lVar28,lVar26 + 0x40,lVar28,lVar26 + 0x40);
        }
        if ((moby->field43_0x70 & 2U) != 0) {
          moby->unk58 = 0.0;
        }
        iVar33 = fastfunc::FastDecTimerS16(uVar39 + 0x44);
        if ((iVar33 != 0) || ((moby->field43_0x70 & 2U) != 0)) {
          moby->state = '\x06';
        }
      }
    }
    else if (bVar1 < 7) {
      lVar28 = lVar26 + 0x10;
      dVar41 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar28,0);
      if ((dVar41 != 0.0) && (CollOutput.pMoby != (MobyInstance *)0x0)) {
        mobyutil::MB_PlatformLocalToWorld
                  (lVar26,CollOutput.pMoby,lVar28,lVar26 + 0x40,lVar28,lVar26 + 0x40);
      }
      fVar12 = -(DAT_0071f408 * 0.02 * moby->scale - moby->scale);
      moby->scale = fVar12;
      if (fVar12 < moby->pClass->gScale * 0.1) {
        mobyfunc::DeleteMoby(moby);
      }
    }
    else {
      moby->state = '\0';
    }
  }
  else {
    mobyutil::MB_DeleteMobyFromDynamicGroup(moby,&DAT_00a51f68);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 002ea73c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1900_002ea73c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1900_002ea73c(void)

{
  DAT_007fea8c = 0x10000;
  return;
}



//==== 002ea758  ns=Global  size=0x19c
// sig: undefined FUN_002ea758(void)
// callers(5): 0019aea0 mobyupdate_unsorted::UpdateMoby_1045; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 001def78 mobyupdate_unsorted::UpdateMoby_1142; 003a4da0 mobyupdate_helpers::M511_003a4da0; 00408328 mobyupdate_unsorted::UpdateMoby_661
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 0010c000 mobyutil::MB_CopyHeroLights

MobyInstance * FUN_002ea758(f32 *param_1,longlong param_2,uint param_3,undefined4 param_4)

{
  f32 fVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  MobyInstance *pMVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  pMVar5 = (MobyInstance *)0x0;
  uVar4 = 0x70;
  auVar7._0_4_ = param_4;
  auVar7._4_4_ = param_4;
  auVar7._8_4_ = param_4;
  auVar7._12_4_ = param_4;
  if (0 < (short)*(MOBY_OCLASSES *)
                  (&DAT_0072103a + (uint)param_2 * 0x10 + (int)(param_2 * -0xf) * -4)) {
    pMVar5 = mobyfunc::CreateMoby
                       (*(MOBY_OCLASSES *)
                         (&DAT_0072103a + (uint)param_2 * 0x10 + (int)(param_2 * -0xf) * -4));
    if (pMVar5 != (MobyInstance *)0x0) {
      pMVar5->updateDistance = -1;
      pMVar5->enabled = '\x01';
      pMVar5->state = '\x01';
      pMVar5->setByGroup = '\0';
      puVar2 = (uint *)pMVar5->pVar;
      (pMVar5->pos).x = *param_1;
      fVar1 = param_1[1];
      pMVar5->drawDistance = 0xff;
      (pMVar5->pos).y = fVar1;
      (pMVar5->pos).z = param_1[2];
      (pMVar5->pos).w = param_1[3];
      if (param_3 == 0xffffffff) {
        param_3 = (uint)*(ushort *)(&DAT_00737d3c + (int)(param_2 << 3) * 3);
      }
      auVar6 = vectorConvertFromSignedFixedPointWord(auVar7,0);
      auVar7 = ZEXT416(0xffffffff);
      auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
      *puVar2 = param_3;
      puVar2[2] = (uint)param_2;
      auVar8 = vectorShiftLeftIntegerWord(auVar7,auVar7);
      uVar3 = storeVectorElementWordIndexed(auVar6,0xc,ZEXT48(puVar2));
      *(undefined4 *)((uint)(puVar2 + 3) & 0xfffffffc) = uVar3;
      auVar7 = loadVectorLeftIndexed(uVar4,0x2ea750);
      auVar6 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
      fVar1 = (pMVar5->pos).z;
      auVar7 = vectorMultiplyAddFloatingPoint
                         (auVar6,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,auVar8);
      auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
      auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar3 = storeVectorElementWordIndexed
                        (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,0x20,
                         ZEXT48(puVar2));
      *(undefined4 *)((uint)(puVar2 + 8) & 0xfffffffc) = uVar3;
      puVar2[10] = (uint)fVar1;
      mobyfunc::UpdateMobyTransform(pMVar5);
      mobyutil::MB_CopyHeroLights(pMVar5);
    }
  }
  return pMVar5;
}



//==== 002ea970  ns=mobyupdate_unsorted  size=0xa80
// sig: undefined UpdateMoby_a_lot_5(MobyInstance * moby)
// callers(0): 
// callees(10): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere; 000aa2e8 hero::hero_GiveAmmo; 000efb38 mobyfunc::DeleteMoby; 000f20f0 mobyutil::MB_BSphereGap; 00109af0 mobyutil::Delt; 0011a458 mobyutil::MB_ToastMessageFmt; 0015d204 sound::sound_MobyPlay_oClass; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

/* Moby 58
   Moby 59
   Moby 61
   Moby 204
   Moby 213
   Moby 214
   Moby 222
   Moby 223
   Moby 225
   Moby 226
   Moby 1006
   Moby 1438
   Moby 1447
   Moby 1449 */

void mobyupdate_unsorted::UpdateMoby_a_lot_5(MobyInstance *moby)

{
  longlong lVar1;
  float fVar2;
  u8 uVar3;
  f32 fVar4;
  float fVar5;
  f32 fVar6;
  float fVar7;
  float fVar8;
  int *piVar9;
  MobyClass *pMVar10;
  uint uVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  ulonglong *puVar14;
  float fVar15;
  longlong lVar16;
  int iVar18;
  char cVar19;
  ulonglong uVar17;
  int arg;
  s8 sVar20;
  short sVar21;
  uint uVar22;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  lVar16 = (longlong)(int)moby;
  uVar17 = ZEXT48(&stack0x00000000);
  lVar1 = uVar17 - 0xe0;
  puVar14 = (ulonglong *)lVar1;
  *puVar14 = uVar17;
  puVar14[0x1e] = in_LR;
  puVar14[0x1a] = in_f30;
  puVar14[0x1b] = in_f31;
  puVar14[0x19] = unaff_r31;
  puVar14[0x18] = unaff_r30;
  piVar9 = (int *)moby->pVar;
  puVar14[0x17] = unaff_r29;
  puVar14[0x16] = unaff_r28;
  fastfunc::FastDecTimerS32(ZEXT48(piVar9) + 0x20);
  uVar3 = moby->state;
  fVar4 = (moby->pos).y;
  fVar5 = (moby->pos).z;
  fVar6 = (moby->pos).w;
  if (((uVar3 == '\x01') || (uVar3 == '\x04')) || (uVar3 == '\x03')) {
    if (SQRT((float)piVar9[6] * (float)piVar9[6] +
             (float)piVar9[4] * (float)piVar9[4] + (float)piVar9[5] * (float)piVar9[5]) != 0.0) {
      *(f32 *)(puVar14 + 0xe) = (moby->pos).x;
      *(f32 *)((int)puVar14 + 0x74) = fVar4;
      *(f32 *)((int)puVar14 + 0x7c) = fVar6;
      dVar27 = 0.5;
      *(float *)(puVar14 + 0xf) = fVar5 + 0.5;
      iVar18 = collproc::CollSphere(0x3fd99999a0000000,uVar17 - 0x70,&DAT_002ea8f4,2,0);
      if (iVar18 != 0) {
        (moby->pos).x = CollOutput.push.x;
        (moby->pos).y = CollOutput.push.y;
        dVar23 = (double)CollOutput.push.z;
        (moby->pos).w = CollOutput.push.w;
        (moby->pos).z = (float)(dVar23 - dVar27);
      }
    }
    piVar9[6] = (int)-(DAT_0071f418 * 4.9 - (float)piVar9[6]);
    fVar8 = DAT_0071f418;
    fVar5 = (moby->pos).y;
    fVar7 = (moby->pos).z;
    fVar4 = (moby->pos).w;
    *(float *)(puVar14 + 0x10) = (moby->pos).x + (float)piVar9[4];
    *(float *)((int)puVar14 + 0x84) = fVar5 + (float)piVar9[5];
    fVar5 = (float)piVar9[6];
    *(f32 *)((int)puVar14 + 0x8c) = fVar4;
    *(float *)(puVar14 + 0x11) = fVar7 + fVar5;
    piVar9[6] = (int)-(fVar8 * 4.9 - (float)piVar9[6]);
    fVar4 = (moby->pos).y;
    *(f32 *)(puVar14 + 0xe) = (moby->pos).x;
    fVar6 = (moby->pos).w;
    *(f32 *)((int)puVar14 + 0x74) = fVar4;
    *(f32 *)((int)puVar14 + 0x7c) = fVar6;
    *(float *)(puVar14 + 0xf) = (moby->pos).z + 0.1;
    iVar18 = collproc::CollLine(uVar17 - 0x70,uVar17 - 0x60,2,0,0);
    if (iVar18 == 0) {
      fVar4 = *(f32 *)((int)puVar14 + 0x84);
      (moby->pos).x = *(f32 *)(puVar14 + 0x10);
      fVar6 = *(f32 *)(puVar14 + 0x11);
      (moby->pos).y = fVar4;
      fVar4 = *(f32 *)((int)puVar14 + 0x8c);
      (moby->pos).z = fVar6;
      (moby->pos).w = fVar4;
    }
    else {
      piVar9[7] = 0;
      piVar9[6] = 0;
      piVar9[5] = 0;
      piVar9[4] = 0;
      (moby->pos).x = CollOutput.ip.x;
      (moby->pos).y = CollOutput.ip.y;
      (moby->pos).z = CollOutput.ip.z;
      (moby->pos).w = CollOutput.ip.w;
    }
  }
  fVar5 = animationSpeed;
  uVar3 = moby->state;
  if (uVar3 == '\x04') {
    fVar5 = moby->pClass->gScale;
    fVar7 = DAT_0071f408 * 0.03 * (fVar5 - moby->scale) + moby->scale;
    moby->scale = fVar7;
    if ((fVar5 - fVar7) / fVar5 < 0.01) {
      moby->scale = fVar5;
      moby->state = '\x01';
      moby->collision = moby->pClass->collision;
    }
  }
  else if (uVar3 == '\x03') {
    puVar14[0x13] = (longlong)(worldUpdateTime % 0x3c);
    auVar29 = ZEXT416(0xfffffff8);
    fVar5 = ((float)(longlong)puVar14[0x13] * 0.016666668 * 6.28318 - 3.14159) + 1.5707963;
    fVar7 = 3.1415925 - fVar5;
    if (fVar5 - (3.1415925 - fVar5) < 0.0) {
      fVar7 = fVar5;
    }
    auVar30 = loadVectorLeftIndexed(0x23,lVar16);
    auVar29 = vectorShiftRightWord
                        (auVar30,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60);
    auVar29 = vectorConvertFromUnsignedFixedPointWord(auVar29,0);
    fVar8 = -3.1415925 - fVar5;
    if ((-3.1415925 - fVar5) - fVar7 < 0.0) {
      fVar8 = fVar7;
    }
    auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
    fVar5 = fVar8 * fVar8;
    uVar13 = storeVectorElementWordIndexed
                       (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0x90,lVar1);
    *(undefined4 *)(puVar14 + 0x12) = uVar13;
    fVar7 = fVar5 * fVar5 * fVar8;
    fVar2 = fVar5 * fVar7;
    iVar18 = fastfunc::FastDoubleToInt
                       ((double)((fVar5 * fVar2 * 2.601887e-06 +
                                 fVar2 * -0.0001980741 +
                                 fVar7 * 0.0083330255 + fVar5 * fVar8 * -0.16666657 + fVar8) * 5.0 +
                                5.0));
    puVar14[0x13] = (longlong)(iVar18 + 10);
    uVar17 = puVar14[0x13];
    puVar14[0x13] = (longlong)(int)(animationSpeed * 30.5);
    puVar14[0x13] = (longlong)(0x80 / *(int *)((int)puVar14 + 0x9c));
    mobyutil::Delt((float)(longlong)uVar17,(float)(longlong)puVar14[0x13],(float *)(puVar14 + 0x12))
    ;
    sVar20 = fastfunc::FastDoubleToInt((double)*(float *)(puVar14 + 0x12));
    moby->alpha = sVar20;
    dVar27 = (double)mobyutil::MB_BSphereGap(lVar16,g_heroMobyPtr);
    if ((0.0 <= dVar27) ||
       ((int)(&currentAmmoArray.field0_0x0)[piVar9[2]] <
        (int)(uint)(ushort)(&DAT_00737d3e)[piVar9[2] * 0xc])) {
      moby->state = '\x01';
    }
  }
  else if (uVar3 == '\x02') {
    dVar28 = 0.0;
    dVar23 = 24.0;
    mobyutil::Delt(0.0,DAT_0071f418 * 24.0,(float *)(piVar9 + 9));
    (moby->pos).z = (moby->pos).z + (float)piVar9[9];
    fVar5 = mobyutil::g_FrameTime;
    dVar27 = (double)DAT_0071f418;
    *(float *)((int)puVar14 + 0x94) =
         SQRT((float)piVar9[6] * (float)piVar9[6] +
              (float)piVar9[4] * (float)piVar9[4] + (float)piVar9[5] * (float)piVar9[5]);
    mobyutil::Delt(fVar5 * 64.0,(float)(dVar27 * dVar23),(float *)((int)puVar14 + 0x94));
    fVar5 = hero::g_heroCGPos - (moby->pos).x;
    piVar9[4] = (int)fVar5;
    fVar7 = DAT_00969db4 - (moby->pos).y;
    piVar9[5] = (int)fVar7;
    fVar8 = DAT_00969db8 - (moby->pos).z;
    piVar9[6] = (int)fVar8;
    piVar9[7] = DAT_00969dbc;
    if (moby->scale != 0.0) {
      dVar27 = (double)*(float *)((int)puVar14 + 0x94);
      dVar23 = (double)SQRT(fVar8 * fVar8 + fVar5 * fVar5 + fVar7 * fVar7);
      if (dVar27 <= dVar23) {
        fVar2 = (float)(dVar27 / dVar23);
        pMVar10 = moby->pClass;
        dVar25 = dVar28;
        if (dVar28 - dVar23 < 0.0) {
          dVar25 = (double)(fVar7 * fVar2);
        }
        dVar26 = dVar28;
        if (dVar28 - dVar23 < 0.0) {
          dVar26 = (double)(fVar5 * fVar2);
        }
        dVar24 = dVar28;
        if (dVar28 - dVar23 < 0.0) {
          dVar24 = (double)(fVar8 * fVar2);
        }
        if (dVar23 - dVar28 < 0.0) {
          dVar25 = (double)(fVar7 * fVar2);
        }
        if (dVar23 - dVar28 < 0.0) {
          dVar26 = (double)(fVar5 * fVar2);
        }
        if (dVar23 - dVar28 < 0.0) {
          dVar24 = (double)(fVar8 * fVar2);
        }
        piVar9[5] = (int)(float)dVar25;
        piVar9[4] = (int)(float)dVar26;
        piVar9[6] = (int)(float)dVar24;
        fVar5 = (float)((double)(moby->pos).x + dVar26);
        (moby->pos).x = fVar5;
        fVar2 = (moby->pos).y + (float)piVar9[5];
        (moby->pos).y = fVar2;
        fVar15 = (moby->pos).z + (float)piVar9[6];
        (moby->pos).z = fVar15;
        fVar2 = fVar2 - DAT_00969db4;
        fVar5 = fVar5 - hero::g_heroCGPos;
        fVar15 = fVar15 - DAT_00969db8;
        fVar7 = 1.0;
        fVar8 = pMVar10->gScale;
        fVar5 = SQRT(fVar15 * fVar15 + fVar5 * fVar5 + fVar2 * fVar2) /
                (float)((double)(longlong)(animationSpeed * 30.5) * dVar27 + 0.009999999776482582);
        if ((fVar5 <= 1.0) && (fVar7 = fVar5, fVar5 < 0.3)) {
          fVar7 = 0.3;
        }
        mobyutil::Delt(fVar8 * fVar7,fVar8 * 0.1,&moby->scale);
        return;
      }
    }
    mobyfunc::DeleteMoby(moby);
  }
  else if (uVar3 == '\x01') {
    auVar29 = ZEXT416(0xfffffff8);
    auVar30 = loadVectorLeftIndexed(0x23,lVar16);
    auVar29 = vectorShiftRightWord
                        (auVar30,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60);
    auVar29 = vectorConvertFromUnsignedFixedPointWord(auVar29,0);
    auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar13 = storeVectorElementWordIndexed
                       (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0x90,lVar1);
    *(undefined4 *)(puVar14 + 0x12) = uVar13;
    puVar14[0x13] = (longlong)(int)(fVar5 * 30.5);
    puVar14[0x13] = (longlong)(0x80 / *(int *)((int)puVar14 + 0x9c));
    mobyutil::Delt(128.0,(float)(longlong)puVar14[0x13],(float *)(puVar14 + 0x12));
    cVar19 = fastfunc::FastDoubleToInt((double)*(float *)(puVar14 + 0x12));
    moby->alpha = cVar19;
    if ((piVar9[8] < 1) &&
       (SQRT((float)piVar9[6] * (float)piVar9[6] +
             (float)piVar9[4] * (float)piVar9[4] + (float)piVar9[5] * (float)piVar9[5]) == 0.0)) {
      fVar5 = (moby->pos).z;
      uVar22 = 1;
      if ((DAT_0096bf6c < ABS(fVar5 - g_heroPosition.z)) ||
         (fVar7 = (moby->pos).y - g_heroPosition.y, fVar8 = (moby->pos).x - g_heroPosition.x,
         DAT_0096bf68 < SQRT(fVar8 * fVar8 + fVar7 * fVar7))) {
        uVar22 = 0;
      }
      iVar18 = piVar9[2];
      uVar11 = (&currentAmmoArray.field0_0x0)[iVar18];
      uVar22 = (uint)((longlong)
                      ((longlong)(int)uVar11 - (ulonglong)(ushort)(&DAT_00737d3e)[iVar18 * 0xc]) >>
                     0x3f) & uVar22;
      if (fVar5 < (float)piVar9[10] - 2.0) {
        uVar22 = 1;
      }
      if ((g_heroHealth == 0) || (uVar22 == 0)) {
        if (cVar19 != -1) {
          moby->alpha = cVar19 + '\x01';
        }
        dVar27 = (double)mobyutil::MB_BSphereGap(lVar16,g_heroMobyPtr);
        if (dVar27 <= -0.20000000298023224) {
          auVar29 = ZEXT416(0xffffffff);
          auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
          moby->state = '\x03';
          auVar30 = vectorShiftLeftIntegerWord(auVar29,auVar29);
          auVar29 = loadVectorLeftIndexed(0x34,0x2ea8f4);
          auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar31 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar29 = vectorMultiplyAddFloatingPoint
                              (auVar31,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60
                               ,auVar30);
          auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
          auVar29 = vectorSplatHalfWord(auVar29,1);
          uVar12 = storeVectorElementHalfWordIndexed(auVar29,6,ZEXT48(piVar9));
          *(undefined2 *)((int)piVar9 + 6) = uVar12;
        }
      }
      else {
        hero::hero_GiveAmmo(iVar18,*piVar9);
        uVar22 = piVar9[2];
        uVar17 = (ulonglong)uVar22;
        if ((int)uVar11 < (int)(&currentAmmoArray.field0_0x0)[uVar22]) {
          arg = (&currentAmmoArray.field0_0x0)[uVar22] - uVar11;
          iVar18 = (int)(uVar17 * -0xf);
          if (arg == 1) {
            sVar21 = *(short *)((int)&DAT_00721034 + uVar22 * 0x10 + iVar18 * -4 + 2);
          }
          else {
            sVar21 = *(short *)(&DAT_00721034 + (uVar22 * 4 - iVar18));
          }
          mobyutil::MB_ToastMessageFmt((int)sVar21,arg,-1);
          uVar17 = (ulonglong)(uint)piVar9[2];
        }
        iVar18 = (int)(uVar17 << 2);
        *(uint *)(&DAT_00a0f5b0 + iVar18) =
             *(int *)(&DAT_00a0f5b0 + iVar18) +
             (*(int *)((int)&currentAmmoArray.field0_0x0 + iVar18) - uVar11);
        moby->state = '\x02';
        moby->scale = moby->scale * (DAT_0071f408 * 0.20000005 + 1.0);
        piVar9[7] = 0;
        piVar9[6] = 0;
        piVar9[5] = 0;
        piVar9[4] = 0;
        piVar9[9] = (int)(mobyutil::g_FrameTime * 8.0);
        iVar18 = worldUpdateTime - DAT_010bb410;
        puVar14[0x13] = (longlong)(int)(animationSpeed * 10.5);
        if (*(int *)((int)puVar14 + 0x9c) < iVar18 + (iVar18 >> 0x1f & iVar18 * -2)) {
          sound::sound_MobyPlay_oClass(0,0,moby,0xd5);
          DAT_010bb410 = worldUpdateTime;
        }
      }
    }
  }
  else if (uVar3 == '\0') {
    moby->state = '\x01';
  }
  return;
}



//==== 002eb3f0  ns=mobyupdate_helpers  size=0x50
// sig: undefined M1449_002eb3f0(void)
// callers(0): 
// callees(0): 

bool mobyupdate_helpers::M1449_002eb3f0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x78) + 8);
  return (int)(&currentAmmoArray.field0_0x0)[iVar1] <
         (int)(uint)(ushort)(&DAT_00737d3e)[iVar1 * 0xc];
}



//==== 002eb450  ns=mobyupdate_helpers  size=0x238
// sig: undefined M1449_CollectAmmo(MobyInstance * moby)
// callers(2): 0042bc38 mobyupdate_helpers::M71_ClosestMobyDistance; 00486608 mobyupdate_helpers::M849_00486608
// callees(3): 000aa2e8 hero::hero_GiveAmmo; 0011a458 mobyutil::MB_ToastMessageFmt; 0015d204 sound::sound_MobyPlay_oClass

undefined8 mobyupdate_helpers::M1449_CollectAmmo(MobyInstance *moby)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  short sVar6;
  int iVar5;
  double dVar7;
  
  piVar1 = (int *)moby->pVar;
  if (moby->state == '\x02') {
    uVar3 = 0;
  }
  else {
    uVar2 = (&currentAmmoArray.field0_0x0)[piVar1[2]];
    iVar4 = hero::hero_GiveAmmo(piVar1[2],*piVar1);
    iVar5 = piVar1[2];
    dVar7 = (double)(longlong)iVar4;
    if ((int)uVar2 < (int)(&currentAmmoArray.field0_0x0)[iVar5]) {
      iVar4 = (&currentAmmoArray.field0_0x0)[iVar5] - uVar2;
      if (iVar4 == 1) {
        sVar6 = *(short *)((int)&DAT_00721034 + iVar5 * 0x4c + 2);
      }
      else {
        sVar6 = *(short *)(&DAT_00721034 + iVar5 * 0x13);
      }
      mobyutil::MB_ToastMessageFmt((int)sVar6,iVar4,-1);
      if (dVar7 < (double)(longlong)*piVar1) {
        iVar5 = piVar1[2] * 4;
        *(uint *)(&DAT_00a0f5b0 + iVar5) =
             *(int *)(&DAT_00a0f5b0 + iVar5) + ((&currentAmmoArray.field0_0x0)[piVar1[2]] - uVar2);
        moby->state = '\x02';
        moby->scale = moby->scale * (DAT_0071f408 * 0.20000005 + 1.0);
        piVar1[7] = 0;
        piVar1[6] = 0;
        piVar1[5] = 0;
        piVar1[4] = 0;
        iVar5 = DAT_010bb410;
        piVar1[9] = (int)(mobyutil::g_FrameTime * 8.0);
        iVar5 = worldUpdateTime - iVar5;
        if ((int)(animationSpeed * 10.5) < iVar5 + (iVar5 >> 0x1f & iVar5 * -2)) {
          sound::sound_MobyPlay_oClass(0,0,moby,0xd5);
          DAT_010bb410 = worldUpdateTime;
        }
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



//==== 002eb688  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1449_002eb688(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1449_002eb688(void)

{
  DAT_007feafc = 0x10000;
  return;
}



//==== 002eb6d8  ns=mobyupdate_helpers  size=0x678
// sig: undefined M1449_002eb6d8(void)
// callers(0): 
// callees(7): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 000f1114 mobyfunc::GetBonePosition; 00502648 fastfunc::FastAddRots; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1449_002eb6d8(int param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  undefined1 local_1b0 [248];
  
  if ((param_1 != 0) && (iVar2 = *(int *)(param_1 + 0x78), iVar2 != 0)) {
    draw::GetEffectTex(0xf);
    stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
    FUN_00502f08(1,1,0,0,0,0);
    idol_draw::PackCmd(0,1,0,1,0xff);
    dVar12 = 0.0;
    mobyfunc::GetBonePosition(param_1,0,&local_1c0);
    iVar3 = *(int *)(iVar2 + 0x14);
    dVar11 = (double)(local_1bc - *(float *)(iVar3 + 0x14));
    dVar10 = (double)(local_1c0 - *(float *)(iVar3 + 0x10));
    dVar9 = (double)(local_1b8 - *(float *)(iVar3 + 0x18));
    fVar4 = SQRT((float)(dVar9 * dVar9 +
                        (double)(float)(dVar10 * dVar10 + (double)(float)(dVar11 * dVar11))));
    dVar8 = (double)fVar4;
    fastfunc::FastAddRots(*(float *)(iVar2 + 0x18));
    dVar13 = dVar12;
    if (dVar12 < dVar8) {
      do {
        dVar8 = 0.20000000298023224;
        if ((double)(float)((double)fVar4 - dVar12) - 0.20000000298023224 < 0.0) {
          dVar8 = (double)(float)((double)fVar4 - dVar12);
        }
        dVar12 = (double)(float)(dVar8 + dVar12);
        fastfunc::FastAddRots((float)(dVar12 * 3.1415927410125732) / *(float *)(iVar2 + 0x1c));
        dVar5 = (double)SQRT((float)(dVar9 * dVar9 +
                                    (double)(float)(dVar10 * dVar10 +
                                                   (double)(float)(dVar11 * dVar11))));
        dVar7 = (double)(float)(dVar8 / dVar5);
        dVar8 = dVar9 * dVar7;
        dVar1 = dVar11 * dVar7;
        dVar9 = dVar13;
        if (dVar13 - dVar5 < 0.0) {
          dVar9 = (double)(float)dVar8;
        }
        dVar11 = dVar13;
        if (dVar13 - dVar5 < 0.0) {
          dVar11 = (double)(float)dVar1;
        }
        dVar6 = dVar13;
        if (dVar13 - dVar5 < 0.0) {
          dVar6 = (double)(float)(dVar10 * dVar7);
        }
        if (dVar5 - dVar13 < 0.0) {
          dVar9 = (double)(float)dVar8;
        }
        if (dVar5 - dVar13 < 0.0) {
          dVar11 = (double)(float)dVar1;
        }
        if (dVar5 - dVar13 < 0.0) {
          dVar6 = (double)(float)(dVar10 * dVar7);
        }
        draw::FastDrawQuad(local_1b0,0,1,EffectTexHeaders,9);
        dVar10 = (double)(float)dVar6;
      } while (dVar12 < (double)fVar4);
    }
  }
  return;
}



//==== 002ebd98  ns=mobyupdate_unsorted  size=0x13ac
// sig: undefined UpdateMoby_208(MobyInstance * moby)
// callers(0): 
// callees(10): 00055284 camera::DrawTargetCrosshair; 00057820 collproc::CollLine; 0006d720 RegisterFuncForMoby; 0007f45c hero::Hero_GetIdleAnim; 00085300 hero::Hero_TransAnim; 000b72b0 hero::TransitionMovement; 000f1114 mobyfunc::GetBonePosition; 000fddc0 mobyutil::MB_SetAnimation; 0015d12c sound::PlayMobySound; 002ed160 mobyupdate_helpers::M208_002ed160

/* Moby 208 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_208(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  MobyInstance *pMVar16;
  int iVar17;
  MobyInstance *pMVar18;
  int iVar19;
  int iVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined4 uVar26;
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
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  
  pMVar18 = moby;
  if (moby != (MobyInstance *)0x0) {
    pMVar18 = (MobyInstance *)g_heroState;
    if (g_heroState == FIRST_PERSON_VIEW) {
      pMVar18 = (MobyInstance *)hero::TransitionMovement(0x1e,1);
    }
    pvVar6 = moby->pVar;
    if (pvVar6 != (void *)0x0) {
      iVar19 = *(int *)((int)pvVar6 + 0x14);
      iVar20 = 0;
      if (iVar19 == 0) {
        iVar19 = mobyupdate_helpers::M208_002ed160((double)(mobyutil::g_FrameTime * 24.0),moby);
        *(int *)((int)pvVar6 + 0x14) = iVar19;
      }
      if (iVar19 != 0) {
        iVar20 = *(int *)(iVar19 + 0x78);
      }
      if (((g_heroState == FIRST_PERSON_VIEW) || (g_heroState == WEAPON_FIRST_PERSON_VIEW)) &&
         (1 < hero::g_heroStateTimer)) {
        camera::DrawTargetCrosshair(1.0,moby,0xff0000ff,4);
        if ((DAT_0096a648 == 0) || (DAT_0096a644 == (MobyInstance *)0x0)) {
          if (DAT_0096a670 != 0) {
            camera::DrawTargetCrosshair(0.5,moby,0xff00ff00,4);
          }
        }
        else {
          camera::DrawTargetCrosshair(0.5,moby,0xff00ff00,0x2ebd50);
        }
      }
      iVar19 = DAT_0096a674;
      pMVar16 = DAT_0096a644;
      bVar1 = moby->state;
      pMVar18 = (MobyInstance *)(uint)bVar1;
      if (bVar1 < 8) {
        if (bVar1 < 4) {
          if (bVar1 < 2) {
            if ((moby->field43_0x70 & 2U) != 0) {
              if (moby->animationId != '\x01') {
                mobyutil::MB_SetAnimation(moby,1,0,(int)(animationSpeed * 10.5));
              }
              moby->state = '\x01';
            }
            if (*(uint *)((int)pvVar6 + 0x14) != 0) {
              mobyfunc::GetBonePosition(moby,0,(ulonglong)*(uint *)((int)pvVar6 + 0x14) + 0x10);
              iVar19 = *(int *)((int)pvVar6 + 0x14);
              puVar7 = (undefined4 *)((uint)&moby->transform & 0xfffffff0);
              uVar28 = puVar7[2];
              uVar27 = puVar7[1];
              uVar26 = *puVar7;
              puVar8 = (undefined4 *)((uint)&(moby->transform).v1 & 0xfffffff0);
              uVar32 = puVar8[3];
              uVar31 = puVar8[2];
              uVar30 = puVar8[1];
              uVar29 = *puVar8;
              puVar8 = (undefined4 *)((uint)&(moby->transform).v2 & 0xfffffff0);
              uVar36 = puVar8[3];
              uVar35 = puVar8[2];
              uVar34 = puVar8[1];
              uVar33 = *puVar8;
              puVar8 = (undefined4 *)(iVar19 + 0xc0U & 0xfffffff0);
              puVar8[3] = puVar7[3];
              puVar8[2] = uVar28;
              puVar8[1] = uVar27;
              *puVar8 = uVar26;
              puVar7 = (undefined4 *)(iVar19 + 0xd0U & 0xfffffff0);
              puVar7[3] = uVar32;
              puVar7[2] = uVar31;
              puVar7[1] = uVar30;
              *puVar7 = uVar29;
              puVar7 = (undefined4 *)(iVar19 + 0xe0U & 0xfffffff0);
              puVar7[3] = uVar36;
              puVar7[2] = uVar35;
              puVar7[1] = uVar34;
              *puVar7 = uVar33;
            }
            if (((g_heroState == THROWING_GREEN_SWINGSHOT) ||
                ((hero::g_heroStateType == 0xf && (DAT_0096a294 != 0)))) && (iVar20 != 0)) {
              *(undefined4 *)((int)pvVar6 + 0x1c) = 0x3f800000;
              *(undefined4 *)((int)pvVar6 + 0x20) = 0x3e8f5c29;
              *(undefined4 *)((int)pvVar6 + 0x18) = 0;
              *(float *)(iVar20 + 4) = mobyutil::g_FrameTime * 24.0;
              if (moby->animationId != '\x03') {
                mobyutil::MB_SetAnimation(moby,3,0,(int)(animationSpeed * 10.5));
              }
              sound::PlayMobySound(0,0,moby);
              moby->state = '\x02';
            }
            fVar3 = animationSpeed;
            pMVar18 = (MobyInstance *)g_heroState;
            if (g_heroState == SWINGING_YELLOW_SWINGSHOT && iVar20 != 0) {
              iVar19 = *(int *)((int)pvVar6 + 0x14);
              fVar4 = *(float *)(DAT_0096a674 + 0x14) - *(float *)(iVar19 + 0x14);
              fVar9 = *(float *)(DAT_0096a674 + 0x10) - *(float *)(iVar19 + 0x10);
              fVar5 = *(float *)(DAT_0096a674 + 0x18) - *(float *)(iVar19 + 0x18);
              fVar2 = 7.5;
              if (DAT_0096ad90 < (int)(animationSpeed * 30.5)) {
                fVar2 = 5.5;
              }
              *(float *)(iVar20 + 4) =
                   SQRT(fVar5 * fVar5 + fVar9 * fVar9 + fVar4 * fVar4) /
                   (float)(longlong)(animationSpeed * fVar2);
              *(undefined4 *)((int)pvVar6 + 0x20) = 0x3e8f5c29;
              *(undefined4 *)((int)pvVar6 + 0x1c) = 0x3f800000;
              *(undefined4 *)((int)pvVar6 + 0x18) = 0;
              if (moby->animationId != '\x03') {
                mobyutil::MB_SetAnimation(moby,3,0,(int)(fVar3 * 10.5));
              }
              sound::PlayMobySound(0,0,moby);
              pMVar18 = (MobyInstance *)0x9;
              moby->state = '\t';
            }
          }
          else if (bVar1 < 3) {
            RegisterFuncForMoby(&PTR_M1449_002eb6d8_0070b750,moby);
            if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\x04')) {
              mobyutil::MB_SetAnimation(moby,4,0,(int)(animationSpeed * 10.5));
            }
            iVar19 = *(int *)((int)pvVar6 + 0x14);
            dVar22 = (double)*(float *)(iVar20 + 4);
            dVar25 = (double)((DAT_0096a644->pos).x - *(float *)(iVar19 + 0x10));
            dVar24 = (double)((DAT_0096a644->pos).y - *(float *)(iVar19 + 0x14));
            dVar23 = (double)((DAT_0096a644->pos).z - *(float *)(iVar19 + 0x18));
            if (hero::g_heroStateType == 0xf) {
              dVar22 = (double)(float)(dVar22 + (double)DAT_0096a254);
            }
            else if (((DAT_0096bd74 == 4) || (DAT_0096bd74 == 2)) &&
                    (0x40000000 <
                     (int)(((uint)((int)hero::g_heroGroundDist >> 0x1f) >> 1 ^
                           hero::g_heroGroundDist) - ((int)hero::g_heroGroundDist >> 0x1f)))) {
              dVar22 = (double)(mobyutil::g_FrameTime * 48.0);
            }
            iVar19 = collproc::CollLine(local_a0,&DAT_0096a644->pos,2,0,0);
            pMVar18 = DAT_0096a644;
            if (iVar19 == 0) {
              iVar19 = *(int *)((int)pvVar6 + 0x14);
              fVar9 = *(float *)(iVar19 + 0x14) - (DAT_0096a644->pos).y;
              fVar3 = (DAT_0096a644->pos).x;
              fVar4 = *(float *)(iVar19 + 0x10) - fVar3;
              fVar2 = *(float *)(iVar19 + 0x18) - (DAT_0096a644->pos).z;
              if ((double)SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar9 * fVar9) <= dVar22) {
                *(float *)(iVar19 + 0x10) = fVar3;
                *(f32 *)(iVar19 + 0x14) = (pMVar18->pos).y;
                *(f32 *)(iVar19 + 0x18) = (pMVar18->pos).z;
                *(f32 *)(iVar19 + 0x1c) = (pMVar18->pos).w;
                moby->state = '\x03';
              }
              else {
                pMVar18 = (MobyInstance *)&DAT_002ebd50;
                fVar2 = 0.0;
                dVar21 = (double)SQRT((float)(dVar23 * dVar23 +
                                             (double)(float)(dVar25 * dVar25 +
                                                            (double)(float)(dVar24 * dVar24))));
                dVar22 = (double)(float)(dVar22 / dVar21);
                fVar3 = fVar2;
                if (0.0 - dVar21 < 0.0) {
                  fVar3 = (float)(dVar23 * dVar22);
                }
                fVar4 = fVar2;
                if (0.0 - dVar21 < 0.0) {
                  fVar4 = (float)(dVar24 * dVar22);
                }
                if (0.0 - dVar21 < 0.0) {
                  fVar2 = (float)(dVar25 * dVar22);
                }
                if (dVar21 - 0.0 < 0.0) {
                  fVar3 = (float)(dVar23 * dVar22);
                }
                if (dVar21 - 0.0 < 0.0) {
                  fVar4 = (float)(dVar24 * dVar22);
                }
                if (dVar21 - 0.0 < 0.0) {
                  fVar2 = (float)(dVar25 * dVar22);
                }
                *(float *)(iVar19 + 0x18) = *(float *)(iVar19 + 0x18) + fVar3;
                *(float *)(iVar19 + 0x14) = *(float *)(iVar19 + 0x14) + fVar4;
                *(float *)(iVar19 + 0x10) = *(float *)(iVar19 + 0x10) + fVar2;
              }
            }
            else {
              if ((int)(((uint)((int)hero::g_heroGroundDist >> 0x1f) >> 1 ^ hero::g_heroGroundDist)
                       - ((int)hero::g_heroGroundDist >> 0x1f)) < 0x3f000001) {
                hero::TransitionMovement(0,0);
                iVar19 = hero::Hero_GetIdleAnim(0);
                hero::Hero_TransAnim((float)(longlong)(animationSpeed * 14.5),iVar19,0);
              }
              else {
                hero::TransitionMovement(6,1);
              }
              pMVar18 = (MobyInstance *)0x6;
              moby->state = '\x06';
            }
          }
          else {
            sound::PlayMobySound(1,0,moby);
            RegisterFuncForMoby(&PTR_M1449_002eb6d8_0070b750,moby);
            pMVar18 = DAT_0096a644;
            iVar19 = *(int *)((int)pvVar6 + 0x14);
            *(f32 *)(iVar19 + 0x10) = (DAT_0096a644->pos).x;
            *(f32 *)(iVar19 + 0x14) = (pMVar18->pos).y;
            *(f32 *)(iVar19 + 0x18) = (pMVar18->pos).z;
            *(f32 *)(iVar19 + 0x1c) = (pMVar18->pos).w;
            moby->state = '\x04';
          }
        }
        else if (bVar1 < 6) {
          if (bVar1 < 5) {
            mobyfunc::GetBonePosition(moby,0,local_90);
            iVar19 = collproc::CollLine(local_90,&DAT_0096a644->pos,2,0,0);
            if (iVar19 == 0) {
              if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\x04')) {
                mobyutil::MB_SetAnimation(moby,4,0,(int)(animationSpeed * 10.5));
              }
              RegisterFuncForMoby(&PTR_M1449_002eb6d8_0070b750,moby);
              pMVar18 = (MobyInstance *)&DAT_002ebd50;
              fVar3 = *(float *)((int)pvVar6 + 0x20) * (DAT_0071f408 * -0.100000024 + 1.0);
              *(float *)((int)pvVar6 + 0x20) = fVar3;
              *(float *)((int)pvVar6 + 0x18) = *(float *)((int)pvVar6 + 0x18) + 0.6981317;
              if (fVar3 < 0.16800001) {
                DAT_0096a294 = 0;
                iVar19 = *(int *)((int)pvVar6 + 0x14);
                if ((iVar19 == 0) ||
                   (fVar3 = *(float *)(iVar19 + 0x14) - g_heroPosition.y,
                   fVar2 = *(float *)(iVar19 + 0x10) - g_heroPosition.x,
                   fVar4 = *(float *)(iVar19 + 0x18) - g_heroPosition.z,
                   SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3) <= 3.5)) {
                  hero::TransitionMovement(0,1);
                  pMVar18 = (MobyInstance *)0x6;
                  moby->state = '\x06';
                }
                else if ((g_downButtons & DAT_0096ad80) == 0) {
                  DAT_0096a668 = 1;
                  hero::TransitionMovement(0,0);
                  iVar19 = hero::Hero_GetIdleAnim(0);
                  hero::Hero_TransAnim((float)(longlong)(animationSpeed * 14.5),iVar19,0);
                  pMVar18 = (MobyInstance *)0x6;
                  moby->state = '\x06';
                }
                else {
                  sound::PlayMobySound(2,0,moby);
                  if (DAT_0096a658 == 0) {
                    hero::TransitionMovement(0x25,1);
                  }
                  else {
                    hero::TransitionMovement(0x26,1);
                  }
                  pMVar18 = (MobyInstance *)0x5;
                  moby->state = '\x05';
                }
              }
            }
            else {
              if (g_framesNotGrounded == 0) {
                hero::TransitionMovement(0,1);
              }
              else {
                hero::TransitionMovement(6,1);
              }
              pMVar18 = (MobyInstance *)0x6;
              moby->state = '\x06';
            }
          }
          else {
            iVar19 = *(int *)((int)pvVar6 + 0x14);
            *(f32 *)(iVar19 + 0x10) = (DAT_0096a644->pos).x;
            *(f32 *)(iVar19 + 0x14) = (pMVar16->pos).y;
            *(f32 *)(iVar19 + 0x18) = (pMVar16->pos).z;
            *(f32 *)(iVar19 + 0x1c) = (pMVar16->pos).w;
            if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\x04')) {
              mobyutil::MB_SetAnimation(moby,4,0,(int)(animationSpeed * 10.5));
            }
            *(float *)((int)pvVar6 + 0x20) =
                 *(float *)((int)pvVar6 + 0x20) * (DAT_0071f408 * -0.100000024 + 1.0);
            *(float *)((int)pvVar6 + 0x18) = *(float *)((int)pvVar6 + 0x18) + 0.6981317;
            pMVar18 = (MobyInstance *)RegisterFuncForMoby(&PTR_M1449_002eb6d8_0070b750,moby);
            if ((g_heroState != PULLING_GREEN_SWINGSHOT) && (g_heroState != UNK_26)) {
              pMVar18 = (MobyInstance *)0x6;
              moby->state = '\x06';
            }
          }
        }
        else if (bVar1 < 7) {
          RegisterFuncForMoby(&PTR_M1449_002eb6d8_0070b750,moby);
          pMVar18 = (MobyInstance *)0x7;
          *(float *)(iVar20 + 4) = mobyutil::g_FrameTime * 80.0;
          moby->state = '\a';
        }
        else {
          mobyfunc::GetBonePosition(moby,0,&local_80);
          iVar19 = *(int *)((int)pvVar6 + 0x14);
          fVar3 = *(float *)(iVar19 + 0x14);
          fVar2 = *(float *)(iVar19 + 0x10);
          fVar4 = *(float *)(iVar19 + 0x18);
          fVar9 = local_7c - fVar3;
          fVar12 = local_78 - fVar4;
          fVar5 = local_80 - fVar2;
          if (SQRT((fVar4 - local_78) * (fVar4 - local_78) +
                   (fVar2 - local_80) * (fVar2 - local_80) + (fVar3 - local_7c) * (fVar3 - local_7c)
                  ) <= *(float *)(iVar20 + 4)) {
            *(float *)(iVar19 + 0x10) = local_80;
            *(float *)(iVar19 + 0x14) = local_7c;
            *(float *)(iVar19 + 0x18) = local_78;
            *(undefined4 *)(iVar19 + 0x1c) = local_74;
            if (moby->animationId != '\x01') {
              mobyutil::MB_SetAnimation(moby,1,0,(int)(animationSpeed * 10.5));
            }
            pMVar18 = (MobyInstance *)0x1;
            moby->state = '\x01';
          }
          else {
            fVar11 = 0.0;
            fVar10 = SQRT(fVar12 * fVar12 + fVar5 * fVar5 + fVar9 * fVar9);
            fVar15 = *(float *)(iVar20 + 4) / fVar10;
            fVar14 = fVar11;
            if (0.0 - fVar10 < 0.0) {
              fVar14 = fVar12 * fVar15;
            }
            fVar13 = fVar11;
            if (0.0 - fVar10 < 0.0) {
              fVar13 = fVar9 * fVar15;
            }
            if (0.0 - fVar10 < 0.0) {
              fVar11 = fVar5 * fVar15;
            }
            if (fVar10 - 0.0 < 0.0) {
              fVar14 = fVar12 * fVar15;
            }
            if (fVar10 - 0.0 < 0.0) {
              fVar13 = fVar9 * fVar15;
            }
            if (fVar10 - 0.0 < 0.0) {
              fVar11 = fVar5 * fVar15;
            }
            *(float *)(iVar19 + 0x18) = fVar4 + fVar14;
            *(float *)(iVar19 + 0x14) = fVar3 + fVar13;
            *(float *)(iVar19 + 0x10) = fVar2 + fVar11;
            pMVar18 = (MobyInstance *)RegisterFuncForMoby(&PTR_M1449_002eb6d8_0070b750,moby);
          }
        }
      }
      else if (bVar1 == 0xe) {
        if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\x04')) {
          mobyutil::MB_SetAnimation(moby,4,0,(int)(animationSpeed * 10.5));
        }
        mobyfunc::GetBonePosition(moby,0,&local_70);
        iVar19 = *(int *)((int)pvVar6 + 0x14);
        fVar3 = *(float *)(iVar19 + 0x14);
        fVar2 = *(float *)(iVar19 + 0x10);
        fVar4 = *(float *)(iVar19 + 0x18);
        fVar9 = local_6c - fVar3;
        fVar12 = local_68 - fVar4;
        fVar5 = local_70 - fVar2;
        if (SQRT((fVar4 - local_68) * (fVar4 - local_68) +
                 (fVar2 - local_70) * (fVar2 - local_70) + (fVar3 - local_6c) * (fVar3 - local_6c))
            <= *(float *)(iVar20 + 4)) {
          *(float *)(iVar19 + 0x10) = local_70;
          *(float *)(iVar19 + 0x14) = local_6c;
          *(float *)(iVar19 + 0x18) = local_68;
          *(undefined4 *)(iVar19 + 0x1c) = local_64;
          if (moby->animationId != '\x01') {
            mobyutil::MB_SetAnimation(moby,1,0,(int)(animationSpeed * 10.5));
          }
          moby->state = '\x01';
        }
        else {
          fVar11 = 0.0;
          fVar10 = SQRT(fVar12 * fVar12 + fVar5 * fVar5 + fVar9 * fVar9);
          fVar15 = *(float *)(iVar20 + 4) / fVar10;
          fVar14 = fVar11;
          if (0.0 - fVar10 < 0.0) {
            fVar14 = fVar12 * fVar15;
          }
          fVar13 = fVar11;
          if (0.0 - fVar10 < 0.0) {
            fVar13 = fVar9 * fVar15;
          }
          if (0.0 - fVar10 < 0.0) {
            fVar11 = fVar5 * fVar15;
          }
          if (fVar10 - 0.0 < 0.0) {
            fVar14 = fVar12 * fVar15;
          }
          if (fVar10 - 0.0 < 0.0) {
            fVar13 = fVar9 * fVar15;
          }
          if (fVar10 - 0.0 < 0.0) {
            fVar11 = fVar5 * fVar15;
          }
          *(float *)(iVar19 + 0x18) = fVar4 + fVar14;
          *(float *)(iVar19 + 0x14) = fVar3 + fVar13;
          *(float *)(iVar19 + 0x10) = fVar2 + fVar11;
          RegisterFuncForMoby(&PTR_M1449_002eb6d8_0070b750,moby);
        }
        pMVar18 = (MobyInstance *)g_heroState;
        if (g_heroState == SWINGING_YELLOW_SWINGSHOT && iVar20 != 0) {
          iVar19 = *(int *)((int)pvVar6 + 0x14);
          fVar3 = *(float *)(DAT_0096a674 + 0x14) - *(float *)(iVar19 + 0x14);
          fVar2 = *(float *)(DAT_0096a674 + 0x10) - *(float *)(iVar19 + 0x10);
          fVar4 = *(float *)(DAT_0096a674 + 0x18) - *(float *)(iVar19 + 0x18);
          *(float *)(iVar20 + 4) = SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3) * 0.1;
          *(undefined4 *)((int)pvVar6 + 0x20) = 0;
          *(undefined4 *)((int)pvVar6 + 0x1c) = 0x3f800000;
          *(undefined4 *)((int)pvVar6 + 0x18) = 0;
          if (moby->animationId != '\x03') {
            mobyutil::MB_SetAnimation(moby,3,0,(int)(animationSpeed * 10.5));
          }
          pMVar18 = (MobyInstance *)0x9;
          moby->state = '\t';
        }
      }
      else if (bVar1 == 0xd) {
        if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\x04')) {
          mobyutil::MB_SetAnimation(moby,4,0,(int)(animationSpeed * 10.5));
        }
        RegisterFuncForMoby(&PTR_M1449_002eb6d8_0070b750,moby);
        pMVar18 = (MobyInstance *)0xe;
        *(float *)(iVar20 + 4) = mobyutil::g_FrameTime * 80.0;
        moby->state = '\x0e';
      }
      else if (bVar1 == 0xc) {
        if (DAT_0096a674 != 0) {
          iVar20 = *(int *)((int)pvVar6 + 0x14);
          *(undefined4 *)(iVar20 + 0x10) = *(undefined4 *)(DAT_0096a674 + 0x10);
          *(undefined4 *)(iVar20 + 0x14) = *(undefined4 *)(iVar19 + 0x14);
          *(undefined4 *)(iVar20 + 0x18) = *(undefined4 *)(iVar19 + 0x18);
          *(undefined4 *)(iVar20 + 0x1c) = *(undefined4 *)(iVar19 + 0x1c);
        }
        if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\x04')) {
          mobyutil::MB_SetAnimation(moby,4,0,(int)(animationSpeed * 10.5));
        }
        *(float *)((int)pvVar6 + 0x20) =
             *(float *)((int)pvVar6 + 0x20) * (DAT_0071f408 * -0.6 + 1.0);
        *(float *)((int)pvVar6 + 0x18) = *(float *)((int)pvVar6 + 0x18) + 0.6981317;
        RegisterFuncForMoby(&PTR_M1449_002eb6d8_0070b750,moby);
        pMVar18 = (MobyInstance *)g_heroState;
        if (g_heroState != SWINGING_YELLOW_SWINGSHOT) {
          pMVar18 = (MobyInstance *)0xd;
          moby->state = '\r';
        }
      }
      else if (bVar1 == 0xb) {
        if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\x04')) {
          mobyutil::MB_SetAnimation(moby,4,0,(int)(animationSpeed * 10.5));
        }
        RegisterFuncForMoby(&PTR_M1449_002eb6d8_0070b750,moby);
        pMVar18 = (MobyInstance *)&DAT_002ebd50;
        fVar3 = *(float *)((int)pvVar6 + 0x20) * (DAT_0071f408 * -0.6 + 1.0);
        *(float *)((int)pvVar6 + 0x20) = fVar3;
        *(float *)((int)pvVar6 + 0x18) = *(float *)((int)pvVar6 + 0x18) + 0.6981317;
        if (fVar3 < 0.16800001) {
          pMVar18 = (MobyInstance *)0x1;
          DAT_0096a67c = 1;
          moby->state = '\f';
        }
      }
      else if (bVar1 == 10) {
        RegisterFuncForMoby(&PTR_M1449_002eb6d8_0070b750,moby);
        pMVar18 = (MobyInstance *)0xb;
        moby->state = '\v';
      }
      else if (bVar1 == 9) {
        RegisterFuncForMoby(&PTR_M1449_002eb6d8_0070b750,moby);
        if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\x04')) {
          mobyutil::MB_SetAnimation(moby,4,0,(int)(animationSpeed * 10.5));
        }
        iVar17 = DAT_0096a674;
        iVar19 = *(int *)((int)pvVar6 + 0x14);
        fVar3 = *(float *)(DAT_0096a674 + 0x14) - *(float *)(iVar19 + 0x14);
        fVar2 = *(float *)(DAT_0096a674 + 0x10) - *(float *)(iVar19 + 0x10);
        fVar4 = *(float *)(DAT_0096a674 + 0x18) - *(float *)(iVar19 + 0x18);
        fVar9 = SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3);
        if (fVar9 <= *(float *)(iVar20 + 4)) {
          *(float *)(iVar19 + 0x10) = *(float *)(DAT_0096a674 + 0x10);
          *(undefined4 *)(iVar19 + 0x14) = *(undefined4 *)(iVar17 + 0x14);
          *(undefined4 *)(iVar19 + 0x18) = *(undefined4 *)(iVar17 + 0x18);
          *(undefined4 *)(iVar19 + 0x1c) = *(undefined4 *)(iVar17 + 0x1c);
          moby->state = '\v';
          pMVar18 = (MobyInstance *)sound::PlayMobySound(1,0,moby);
        }
        else {
          fVar10 = *(float *)(iVar20 + 4) / fVar9;
          pMVar18 = (MobyInstance *)&DAT_002ebd50;
          fVar5 = 0.0;
          fVar12 = fVar5;
          if (0.0 - fVar9 < 0.0) {
            fVar12 = fVar4 * fVar10;
          }
          fVar11 = fVar5;
          if (0.0 - fVar9 < 0.0) {
            fVar11 = fVar3 * fVar10;
          }
          if (0.0 - fVar9 < 0.0) {
            fVar5 = fVar2 * fVar10;
          }
          if (fVar9 - 0.0 < 0.0) {
            fVar12 = fVar4 * fVar10;
          }
          if (fVar9 - 0.0 < 0.0) {
            fVar11 = fVar3 * fVar10;
          }
          if (fVar9 - 0.0 < 0.0) {
            fVar5 = fVar2 * fVar10;
          }
          *(float *)(iVar19 + 0x18) = *(float *)(iVar19 + 0x18) + fVar12;
          *(float *)(iVar19 + 0x14) = *(float *)(iVar19 + 0x14) + fVar11;
          *(float *)(iVar19 + 0x10) = *(float *)(iVar19 + 0x10) + fVar5;
        }
      }
    }
  }
  return pMVar18;
}



//==== 002ed144  ns=mobyupdate_helpers  size=0x14
// sig: undefined M209_002ed144(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M209_002ed144(void)

{
  DAT_007feb6c = 0x10000;
  return;
}



//==== 002ed160  ns=mobyupdate_helpers  size=0x134
// sig: undefined M208_002ed160(void)
// callers(1): 002ebd98 mobyupdate_unsorted::UpdateMoby_208
// callees(5): 000efa28 mobyfunc::CreateMoby; 000f1114 mobyfunc::GetBonePosition; 000f1ec8 mobyfunc::SetColorOfMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fddc0 mobyutil::MB_SetAnimation

longlong mobyupdate_helpers::M208_002ed160(double param_1,undefined8 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int iVar6;
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
  MobyInstance *pMVar5;
  
  pMVar5 = mobyfunc::CreateMoby(SWINGSHOT_HOOK);
  lVar4 = (longlong)(int)pMVar5;
  if (pMVar5 != (MobyInstance *)0x0) {
    piVar1 = (int *)pMVar5->pVar;
    iVar6 = (int)param_2;
    *piVar1 = iVar6;
    piVar1[1] = (int)(float)param_1;
    pMVar5->updateDistance = -1;
    pMVar5->drawDistance = 0xff;
    pMVar5->enabled = '\x01';
    mobyfunc::SetColorOfMoby(pMVar5,0x80,0x80,0x80);
    mobyfunc::GetBonePosition(param_2,0,lVar4 + 0x10);
    puVar2 = (undefined4 *)(iVar6 + 0xc0U & 0xfffffff0);
    uVar9 = puVar2[2];
    uVar8 = puVar2[1];
    uVar7 = *puVar2;
    puVar3 = (undefined4 *)(iVar6 + 0xd0U & 0xfffffff0);
    uVar13 = puVar3[3];
    uVar12 = puVar3[2];
    uVar11 = puVar3[1];
    uVar10 = *puVar3;
    puVar3 = (undefined4 *)(iVar6 + 0xe0U & 0xfffffff0);
    uVar17 = puVar3[3];
    uVar16 = puVar3[2];
    uVar15 = puVar3[1];
    uVar14 = *puVar3;
    puVar3 = (undefined4 *)((uint)&pMVar5->transform & 0xfffffff0);
    puVar3[3] = puVar2[3];
    puVar3[2] = uVar9;
    puVar3[1] = uVar8;
    *puVar3 = uVar7;
    puVar2 = (undefined4 *)((uint)&(pMVar5->transform).v1 & 0xfffffff0);
    puVar2[3] = uVar13;
    puVar2[2] = uVar12;
    puVar2[1] = uVar11;
    *puVar2 = uVar10;
    puVar2 = (undefined4 *)((uint)&(pMVar5->transform).v2 & 0xfffffff0);
    puVar2[3] = uVar17;
    puVar2[2] = uVar16;
    puVar2[1] = uVar15;
    *puVar2 = uVar14;
    if (pMVar5->animationId != '\0') {
      mobyutil::MB_SetAnimation(lVar4,0,0,(int)(animationSpeed * 10.5));
    }
    mobyfunc::UpdateMobyTransform(pMVar5);
    pMVar5->state = '\0';
    pMVar5->modeBits = pMVar5->modeBits | NO_POST_UPDATE;
  }
  return lVar4;
}



//==== 002ed298  ns=mobyupdate_unsorted  size=0x48c
// sig: undefined UpdateMoby_209(MobyInstance * moby)
// callers(0): 
// callees(3): 000efb38 mobyfunc::DeleteMoby; 000f30a0 mobyfunc::PostUpdateMobyLockTransform; 000fddc0 mobyutil::MB_SetAnimation

/* Moby 209 */

void mobyupdate_unsorted::UpdateMoby_209(MobyInstance *moby)

{
  u8 uVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  MobyModeBit MVar5;
  
  if ((moby != (MobyInstance *)0x0) && (piVar3 = (int *)moby->pVar, piVar3 != (int *)0x0)) {
    iVar4 = *piVar3;
    if ((iVar4 == 0) ||
       (((*(short *)(iVar4 + 0xa6) != 0xd0 ||
         (*(char *)(iVar4 + 0x20) == -3 || *(char *)(iVar4 + 0x20) == -2)) ||
        (*(MobyInstance **)(*(int *)(iVar4 + 0x78) + 0x14) != moby)))) {
      mobyfunc::DeleteMoby(moby);
    }
    else {
      if (((*(ushort *)(iVar4 + 0x34) & 1) == 0) && (DAT_0096bd8f == '\0')) {
        MVar5 = moby->modeBits &
                (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                 DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|
                 TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
      }
      else {
        MVar5 = moby->modeBits | (UNK_40|DISABLED);
      }
      moby->modeBits = MVar5;
      uVar1 = moby->state;
      if (uVar1 == '\a') {
        if ((moby->field43_0x70 & 2U) != 0) {
          if (moby->animationId != '\x01') {
            mobyutil::MB_SetAnimation(moby,1,0,(int)(animationSpeed * 10.5));
          }
          moby->state = '\x01';
        }
      }
      else if (uVar1 != '\x06') {
        if (uVar1 == '\x05') {
          if ((moby->field43_0x70 & 2U) != 0) {
            moby->unk58 = 0.0;
          }
          if ((*(char *)(*piVar3 + 0x20) == '\x06') || (*(char *)(*piVar3 + 0x20) == '\a')) {
            moby->unk58 = 1.0;
            if (moby->animationId != '\a') {
              mobyutil::MB_SetAnimation(moby,7,0,(int)(animationSpeed * 10.5));
            }
            moby->state = '\a';
          }
        }
        else if (uVar1 == '\x04') {
          cVar2 = *(char *)(*piVar3 + 0x20);
          if ((cVar2 == '\x04' || cVar2 == '\x03') || (cVar2 == '\x05')) {
            if (moby->animationId != '\x05') {
              mobyutil::MB_SetAnimation(moby,5,0,(int)(animationSpeed * 10.5));
            }
            moby->state = '\x05';
          }
        }
        else if (uVar1 == '\x03') {
          if ((moby->field43_0x70 & 2U) != 0) {
            if (moby->animationId != '\x04') {
              mobyutil::MB_SetAnimation(moby,4,0,(int)(animationSpeed * 10.5));
            }
            moby->state = '\x04';
          }
        }
        else if (uVar1 == '\x02') {
          if ((moby->field43_0x70 & 2U) != 0) {
            mobyfunc::DeleteMoby(moby);
            return;
          }
        }
        else if (uVar1 == '\x01') {
          if (*(char *)(*piVar3 + 0x20) == '\x02') {
            if (moby->animationId != '\x03') {
              mobyutil::MB_SetAnimation(moby,3,0,(int)(animationSpeed * 10.5));
            }
            moby->state = '\x03';
            moby->unk58 = 1.0;
          }
          else if (*(char *)(*piVar3 + 0x20) == '\b') {
            if (moby->animationId != '\x02') {
              mobyutil::MB_SetAnimation(moby,2,0,(int)(animationSpeed * 10.5));
            }
            moby->state = '\x02';
            moby->unk58 = 1.0;
          }
        }
        else if (uVar1 == '\0') {
          if ((moby->field43_0x70 & 2U) != 0) {
            if (moby->animationId != '\x01') {
              mobyutil::MB_SetAnimation(moby,1,0,(int)(animationSpeed * 10.5));
            }
            moby->state = '\x01';
            moby->unk58 = 1.0;
          }
        }
        else {
          if (moby->animationId != '\x01') {
            mobyutil::MB_SetAnimation(moby,1,0,(int)(animationSpeed * 10.5));
          }
          moby->state = '\x01';
        }
      }
      mobyfunc::PostUpdateMobyLockTransform(moby);
    }
  }
  return;
}



//==== 002ed724  ns=mobyupdate_helpers  size=0x14
// sig: undefined M211_002ed724(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M211_002ed724(void)

{
  DAT_007febdc = 0x10000;
  return;
}



//==== 002ed768  ns=mobyupdate_helpers  size=0x368
// sig: undefined M211_002ed768(void)
// callers(1): 002ef340 mobyupdate_unsorted::UpdateMoby_211
// callees(8): 0006d7e0 draw::RegisterPostDraw; 000da4ac lights::CreatePointLight2; 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe788 mobyutil::MB_randVector; 00133580 partupd::SpawnPart_69; 00502730 fastfunc::FastIntToDouble

void mobyupdate_helpers::M211_002ed768(void *param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  int iVar14;
  undefined8 uVar13;
  int iVar15;
  int iVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  Vec4 local_a0;
  Vec4 aVStack_90 [3];
  
  iVar2 = *(int *)((int)param_1 + 0x78);
  mobyfunc::GetBonePosition(param_1,1,&local_a0);
  fVar4 = local_a0.y - GameCamera.posY;
  fVar7 = local_a0.x - GameCamera.posX;
  fVar5 = local_a0.z - GameCamera.posZ;
  fVar6 = SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar4 * fVar4);
  fVar9 = 0.0;
  fVar11 = -0.5 / fVar6;
  fVar8 = fVar9;
  if (0.0 - fVar6 < 0.0) {
    fVar8 = fVar7 * fVar11;
  }
  fVar10 = fVar9;
  if (0.0 - fVar6 < 0.0) {
    fVar10 = fVar4 * fVar11;
  }
  if (0.0 - fVar6 < 0.0) {
    fVar9 = fVar5 * fVar11;
  }
  if (fVar6 - 0.0 < 0.0) {
    fVar8 = fVar7 * fVar11;
  }
  if (fVar6 - 0.0 < 0.0) {
    fVar10 = fVar4 * fVar11;
  }
  if (fVar6 - 0.0 < 0.0) {
    fVar9 = fVar5 * fVar11;
  }
  *(float *)(iVar2 + 0xe0) = local_a0.x + fVar8;
  *(float *)(iVar2 + 0xe4) = local_a0.y + fVar10;
  *(float *)(iVar2 + 0xe8) = local_a0.z + fVar9;
  *(float *)(iVar2 + 0xec) = local_a0.w;
  cVar1 = *(char *)((int)param_1 + 0x20);
  if (((cVar1 == '\x03') || (cVar1 == '\x04')) || (cVar1 == '\x05')) {
    uVar12 = (ulonglong)*(uint *)(iVar2 + 0xf0);
    if (*(uint *)(iVar2 + 0xf0) == 0xffffffff) {
      uVar12 = lights::CreatePointLight2
                         (DAT_007fec34,0,0x3fe0000000000000,0x3fe0000000000000,0x3ff0000000000000,
                          &local_a0);
      *(int *)(iVar2 + 0xf0) = (int)uVar12;
    }
    if (-1 < (int)uVar12) {
      iVar14 = (int)(uVar12 << 5);
      *(float *)((int)&PointLights[0].pos.x + iVar14) = local_a0.x;
      *(float *)((int)&PointLights[0].pos.y + iVar14) = local_a0.y;
      *(float *)((int)&PointLights[0].pos.z + iVar14) = local_a0.z + 1.0;
      *(float *)((int)&PointLights[0].pos.w + iVar14) = DAT_007fec34;
    }
  }
  mobyutil::MB_randVector(0.004999999888241291,0.029999999329447746,aVStack_90);
  iVar14 = partupd::SpawnPart_69(&local_a0,aVStack_90,0x7f,param_1);
  if (iVar14 != 0) {
    dVar17 = (double)mobyutil::MB_randRangeFloat(6000.0,32000.0);
    *(float *)(iVar14 + 0xc) = (float)dVar17;
  }
  dVar17 = 80000.0;
  dVar19 = 120000.0;
  iVar14 = 0;
  auVar24 = loadVectorLeftIndexed(0x28,0x2ed738);
  dVar20 = 2.5;
  auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
  dVar21 = 1.0;
  do {
    uVar13 = partupd::SpawnPart_69(&local_a0,&DAT_00a15d30,0x7f,param_1);
    iVar16 = (int)uVar13;
    if (iVar16 != 0) {
      if ((iVar14 == 2) && (iVar15 = mobyutil::MB_randInt(8), iVar15 == 0)) {
        dVar18 = 180000.0;
      }
      else {
        dVar18 = (double)mobyutil::MB_randRangeFloat((float)dVar17,(float)dVar19);
      }
      auVar22 = ZEXT416(0xffffffff);
      auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
      *(float *)(iVar16 + 0xc) = (float)dVar18;
      auVar22 = vectorShiftLeftIntegerWord(auVar22,auVar22);
      auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      dVar18 = (double)animationSpeed;
      auVar22 = vectorMultiplyAddFloatingPoint(auVar23,auVar24,auVar22);
      auVar22 = vectorConvertToSignedFixedPointWordSaturate(auVar22,0);
      auVar22 = vectorSplatHalfWord(auVar22,1);
      uVar3 = storeVectorElementHalfWordIndexed(auVar22,10,uVar13);
      *(undefined2 *)(iVar16 + 10) = uVar3;
      dVar18 = (double)fastfunc::FastIntToDouble((short)(int)(dVar18 * dVar20));
      *(undefined2 *)(iVar16 + 0x36) = 3;
      *(undefined **)(iVar16 + 0x38) = &DAT_007f7f7f;
      *(float *)(iVar16 + 0x30) = (float)(dVar21 / dVar18);
    }
    iVar14 = iVar14 + 1;
  } while (iVar14 < 3);
  mobyfunc::GetBonePosition(param_1,6,iVar2 + 0x200);
  draw::RegisterPostDraw(&PTR_M1412_002effe0_0070b7b8,param_1);
  return;
}



//==== 002edb38  ns=mobyupdate_helpers  size=0x14a0
// sig: undefined M211_002edb38(void)
// callers(1): 002ef340 mobyupdate_unsorted::UpdateMoby_211
// callees(21): 00057820 collproc::CollLine; 000da4ac lights::CreatePointLight2; 000da9e8 lights::DeletePointLight; 000f1038 mobyfunc::GetBoneTransformations; 000f1114 mobyfunc::GetBonePosition; 00109b40 mobyutil::AccelDelt; 0010bcf0 mobyutil::MB_MtxToQuat; 0010ce18 mobyutil::MB_PathMoveDist; 0010d7a0 mobyutil::MB_PathFollowToPos; 00133580 partupd::SpawnPart_69; 0024d2e4 FUN_0024d2e4; 0024d50c FUN_0024d50c; 004fff60 fastfunc::FastDecTimerS32; 005010c0 fastfunc::FastNormalizeRMtx4; 0050162c fastfunc::FastVecMtx4Mul; 00501848 fastfunc::FastSlerp; 00501980 fastfunc::FastQuaternionToEuler; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005c5ad0 libc::memcpy

void mobyupdate_helpers::M211_002edb38(int param_1)

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
  short sVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  ulonglong *puVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar20;
  undefined8 uVar18;
  undefined2 uVar21;
  longlong lVar19;
  ulonglong uVar22;
  float *pfVar24;
  longlong lVar23;
  int iVar26;
  char cVar27;
  longlong lVar25;
  undefined8 in_r8;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  longlong lVar28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar29;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  double dVar35;
  ulonglong in_f23;
  double dVar36;
  ulonglong in_f24;
  double dVar37;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar38;
  ulonglong in_f27;
  double dVar39;
  ulonglong in_f28;
  double dVar40;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar41;
  double dVar42;
  ulonglong in_f31;
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  
  uVar17 = ZEXT48(&stack0x00000000);
  lVar19 = uVar17 - 0x460;
  puVar15 = (ulonglong *)lVar19;
  *puVar15 = uVar17;
  puVar15[0x8e] = in_LR;
  puVar15[0x80] = in_f20;
  puVar15[0x81] = in_f21;
  puVar15[0x82] = in_f22;
  puVar15[0x83] = in_f23;
  puVar15[0x84] = in_f24;
  puVar15[0x85] = in_f25;
  puVar15[0x86] = in_f26;
  puVar15[0x87] = in_f27;
  puVar15[0x88] = in_f28;
  puVar15[0x89] = in_f29;
  puVar15[0x8a] = in_f30;
  puVar15[0x8b] = in_f31;
  puVar15[0x7f] = unaff_r31;
  puVar15[0x7e] = unaff_r30;
  uVar12 = *(uint *)(param_1 + 0x78);
  uVar29 = (ulonglong)uVar12;
  sVar11 = *(short *)(uVar12 + 0x8e);
  iVar20 = *(int *)(uVar12 + 100);
  iVar16 = DAT_00a1a85c + *(int *)(uVar12 + 0x60) * 0x20;
  puVar15[0x7d] = unaff_r29;
  puVar15[0x7c] = unaff_r28;
  puVar15[0x7b] = unaff_r27;
  puVar15[0x7a] = unaff_r26;
  puVar15[0x79] = unaff_r25;
  puVar15[0x78] = unaff_r24;
  iVar16 = *(int *)(iVar16 + 0x10);
  if (sVar11 <= iVar20) {
    fVar2 = 0.0;
    if (sVar11 < iVar20) {
      iVar20 = iVar20 - sVar11;
      iVar26 = iVar16 + sVar11 * 0x10;
      do {
        iVar20 = iVar20 + -1;
        pfVar24 = (float *)(iVar26 + 0x1c);
        iVar26 = iVar26 + 0x10;
        fVar2 = fVar2 + *pfVar24;
      } while (0 < iVar20);
    }
    fVar2 = (fVar2 + *(float *)(uVar12 + 0x68)) / *(float *)(uVar12 + 0x78);
    if (1.0 - fVar2 < 0.0) {
      fVar2 = 1.0;
    }
    *(float *)(uVar12 + 0x74) = (-3.0 - DAT_007fec0c) * fVar2 + DAT_007fec0c;
  }
  lVar28 = uVar17 - 0x3e0;
  *(undefined4 *)(uVar12 + 100) = 0;
  dVar36 = 0.0;
  *(undefined4 *)(uVar12 + 0x68) = 0;
  mobyutil::MB_PathFollowToPos
            (0x4034000000000000,0x4014000000000000,0,iVar16,&g_heroPosition,lVar28,uVar29 + 100,
             uVar29 + 0x68,in_r8,0);
  mobyutil::MB_PathMoveDist
            (-(double)*(float *)(uVar12 + 0x74),iVar16,lVar28,uVar29 + 100,uVar29 + 0x68);
  dVar43 = 0.009999999776482582;
  dVar41 = 0.20000000298023224;
  iVar20 = (int)lVar28;
  mobyutil::AccelDelt(*(float *)(puVar15 + 0x10),0.01,0.2,(float)dVar36,(float *)(param_1 + 0x10),
                      iVar20,(float *)(uVar12 + 0x90));
  mobyutil::AccelDelt(*(float *)((int)puVar15 + 0x84),(float)dVar43,(float)dVar41,(float)dVar36,
                      (float *)(param_1 + 0x14),iVar20,(float *)(uVar12 + 0x94));
  mobyutil::AccelDelt(*(float *)(puVar15 + 0x11),(float)dVar43,(float)dVar41,(float)dVar36,
                      (float *)(param_1 + 0x18),iVar20,(float *)(uVar12 + 0x98));
  iVar20 = iVar16 + *(int *)(uVar12 + 100) * 0x10;
  fVar2 = *(float *)(iVar20 + 0x60) - *(float *)(iVar20 + 0x10);
  fVar3 = *(float *)(iVar20 + 100) - *(float *)(iVar20 + 0x14);
  dVar43 = ABS((double)fVar2);
  dVar34 = ABS((double)fVar3);
  *(float *)(puVar15 + 0x68) = fVar2;
  *(float *)((int)puVar15 + 0x344) = fVar3;
  *(float *)(puVar15 + 0x69) = (float)(dVar43 - dVar34);
  cVar27 = *(char *)(param_1 + 0xbc);
  dVar44 = 0.7853981852531433;
  uVar22 = (ulonglong)(*(uint *)(puVar15 + 0x68) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar15 + 0x69) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar15 + 0x344) >> 0x1d) & 4;
  dVar41 = ABS((double)*(float *)(puVar15 + 0x68));
  if ((double)*(float *)(puVar15 + 0x69) - dVar36 < 0.0) {
    dVar41 = dVar34;
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
  dVar34 = ABS((double)*(float *)((int)puVar15 + 0x344));
  if ((double)*(float *)(puVar15 + 0x69) - dVar36 < 0.0) {
    dVar34 = dVar43;
  }
  fVar3 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
  dVar43 = dVar36;
  if (dVar36 < dVar41) {
    lVar28 = uVar17 - 0x450;
    lVar25 = uVar17 - 0xc4;
    lVar23 = uVar17 - 0xd4;
    lVar30 = 2;
    fVar4 = (float)(dVar34 - dVar41) / (float)(dVar34 + dVar41);
    fVar5 = fVar4 * fVar4;
    *(float *)(puVar15 + 0x73) = fVar4;
    *(float *)(puVar15 + 0x72) = fVar4;
    *(float *)((int)puVar15 + 0x394) = fVar4;
    *(float *)((int)puVar15 + 0x38c) = fVar4;
    fVar4 = fVar5 * fVar5;
    *(float *)(puVar15 + 0x72) = *(float *)(puVar15 + 0x72) * fVar5;
    *(float *)((int)puVar15 + 0x394) = *(float *)((int)puVar15 + 0x394) * fVar4;
    *(float *)(puVar15 + 0x73) = *(float *)(puVar15 + 0x73) * fVar4 * fVar5;
    do {
      *(float *)((int)lVar28 + 0x38c) = *(float *)((int)lVar28 + 0x37c) * fVar4 * fVar4;
      iVar20 = (int)lVar23;
      lVar23 = lVar23 + 8;
      lVar28 = lVar28 + 8;
      *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
      lVar25 = lVar25 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar30 = 4;
    lVar25 = uVar17 - 0xd4;
    pfVar24 = (float *)&DAT_007358e0;
    lVar28 = lVar19;
    lVar23 = lVar25;
    do {
      fVar4 = *pfVar24;
      fVar5 = pfVar24[1];
      pfVar24 = pfVar24 + 2;
      *(float *)((int)lVar28 + 0x38c) = *(float *)((int)lVar28 + 0x38c) * fVar4;
      lVar28 = lVar28 + 8;
      *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar5;
      lVar23 = lVar23 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar23 = 2;
    lVar28 = lVar19;
    dVar41 = dVar36;
    do {
      iVar20 = (int)lVar28;
      iVar26 = (int)lVar25;
      lVar28 = lVar28 + 0x10;
      lVar25 = lVar25 + 0x10;
      dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar20 + 0x38c)) +
                        *(float *)(iVar26 + 4) + *(float *)(iVar26 + 8) + *(float *)(iVar26 + 0xc));
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    dVar43 = (double)((float)(dVar41 + 0.7853981852531433) * fVar2 + fVar3);
  }
  *(float *)(param_1 + 0x48) = (float)dVar43;
  if (cVar27 == '\x05') {
    iVar20 = fastfunc::FastDecTimerS32(uVar29 + 0x1c8);
    cVar27 = *(char *)(param_1 + 0xbc);
    if (iVar20 != 0) {
      cVar27 = '\x01';
      *(undefined1 *)(param_1 + 0xbc) = 1;
    }
  }
  if (cVar27 == '\x01') {
    auVar46 = ZEXT416(0xffffffff);
    auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
    auVar47 = vectorShiftLeftIntegerWord(auVar46,auVar46);
    auVar46 = loadVectorLeftIndexed(0xffffffffffffec10,0x800000);
    auVar45 = vectorConvertFromSignedFixedPointWord(auVar46,0);
    auVar46 = loadVectorLeftIndexed(0x20,0x2edad0);
    auVar46 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar48 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    dVar42 = 0.5;
    auVar46 = vectorAddFloatingPoint
                        (auVar45,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60);
    auVar46 = vectorMultiplyAddFloatingPoint(auVar48,auVar46,auVar47);
    auVar46 = vectorConvertToSignedFixedPointWordSaturate(auVar46,0);
    auVar46 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar14 = storeVectorElementWordIndexed
                       (auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,0x1c0,uVar29);
    *(undefined4 *)(uVar12 + 0x1c0 & 0xfffffffc) = uVar14;
    *(undefined4 *)(uVar12 + 0x1c4) = 0;
    *(undefined1 *)(param_1 + 0xbc) = 2;
    mobyfunc::GetBoneTransformations(param_1,4,uVar17 - 0x340);
    mobyfunc::GetBoneTransformations(param_1,5,uVar17 - 0x300);
    fVar2 = *(float *)((int)puVar15 + 0x164);
    fVar3 = *(float *)(puVar15 + 0x2c);
    fVar4 = *(float *)(puVar15 + 0x2d);
    fVar5 = *(float *)(puVar15 + 0x2e);
    fVar6 = *(float *)((int)puVar15 + 0x174);
    fVar7 = *(float *)(puVar15 + 0x2f);
    fVar8 = *(float *)(puVar15 + 0x30);
    fVar9 = *(float *)((int)puVar15 + 0x184);
    fVar10 = *(float *)(puVar15 + 0x31);
    dVar31 = (double)(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    dVar41 = dVar36;
    dVar43 = dVar36;
    dVar34 = dVar36;
    if ((double)(float)SQRT(dVar31) != dVar36) {
      dVar41 = 1.0 / SQRT(dVar31);
      dVar41 = (double)(float)(-(double)(float)((double)(float)(dVar31 * dVar41) * dVar41 - 1.0) *
                               (double)(float)(dVar42 * dVar41) + dVar41);
      dVar41 = (double)(float)(-(double)(float)((double)(float)(dVar31 * dVar41) * dVar41 - 1.0) *
                               (double)(float)(dVar42 * dVar41) + dVar41);
      fVar1 = (float)(-(double)(float)((double)(float)(dVar31 * dVar41) * dVar41 - 1.0) *
                      (double)(float)(dVar42 * dVar41) + dVar41);
      dVar34 = (double)(fVar3 * fVar1);
      dVar43 = (double)(fVar2 * fVar1);
      dVar41 = (double)(fVar4 * fVar1);
    }
    *(float *)(puVar15 + 0x2d) = (float)dVar41;
    *(float *)(puVar15 + 0x2c) = (float)dVar34;
    *(float *)((int)puVar15 + 0x164) = (float)dVar43;
    dVar31 = (double)(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
    dVar41 = dVar36;
    dVar43 = dVar36;
    dVar34 = dVar36;
    if ((double)(float)SQRT(dVar31) != dVar36) {
      dVar41 = 1.0 / SQRT(dVar31);
      dVar41 = (double)(float)(-(double)(float)((double)(float)(dVar31 * dVar41) * dVar41 - 1.0) *
                               (double)(float)(dVar42 * dVar41) + dVar41);
      dVar41 = (double)(float)(-(double)(float)((double)(float)(dVar31 * dVar41) * dVar41 - 1.0) *
                               (double)(float)(dVar42 * dVar41) + dVar41);
      fVar2 = (float)(-(double)(float)((double)(float)(dVar31 * dVar41) * dVar41 - 1.0) *
                      (double)(float)(dVar42 * dVar41) + dVar41);
      dVar34 = (double)(fVar5 * fVar2);
      dVar43 = (double)(fVar6 * fVar2);
      dVar41 = (double)(fVar7 * fVar2);
    }
    *(float *)(puVar15 + 0x2f) = (float)dVar41;
    *(float *)((int)puVar15 + 0x174) = (float)dVar43;
    *(float *)(puVar15 + 0x2e) = (float)dVar34;
    dVar31 = (double)(fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9);
    dVar41 = dVar36;
    dVar43 = dVar36;
    dVar34 = dVar36;
    if ((double)(float)SQRT(dVar31) != dVar36) {
      dVar41 = 1.0 / SQRT(dVar31);
      dVar41 = (double)(float)(-(double)(float)((double)(float)(dVar31 * dVar41) * dVar41 - 1.0) *
                               (double)(float)(dVar42 * dVar41) + dVar41);
      dVar41 = (double)(float)(-(double)(float)((double)(float)(dVar31 * dVar41) * dVar41 - 1.0) *
                               (double)(float)(dVar42 * dVar41) + dVar41);
      fVar2 = (float)(-(double)(float)((double)(float)(dVar31 * dVar41) * dVar41 - 1.0) *
                      (double)(float)(dVar42 * dVar41) + dVar41);
      dVar34 = (double)(fVar8 * fVar2);
      dVar43 = (double)(fVar9 * fVar2);
      dVar41 = (double)(fVar10 * fVar2);
    }
    *(float *)(puVar15 + 0x30) = (float)dVar34;
    *(float *)((int)puVar15 + 0x184) = (float)dVar43;
    *(float *)(puVar15 + 0x31) = (float)dVar41;
    fastfunc::FastNormalizeRMtx4(uVar17 - 0x2c0,uVar17 - 0x300);
    *(undefined4 *)(puVar15 + 0x3b) = 0;
    *(undefined4 *)((int)puVar15 + 0x1d4) = 0;
    *(undefined4 *)(puVar15 + 0x3a) = 0;
    *(undefined4 *)((int)puVar15 + 0x1dc) = 0x3f800000;
    fastfunc::FastVecMtx4Mul(uVar17 - 0x280,uVar17 - 0x2c0,uVar17 - 0x340);
    mobyutil::MB_MtxToQuat((float *)(uVar12 + 0x1d0),(float *)(uVar17 - 0x280));
    cVar27 = *(char *)(param_1 + 0xbc);
  }
  dVar41 = (double)*(float *)(param_1 + 0x48);
  if (((cVar27 == '\x02') || (cVar27 == '\x03')) || (cVar27 == '\x04')) {
    mobyfunc::GetBoneTransformations(param_1,0,uVar29 + 0xa0);
    dVar42 = 1.0;
    dVar34 = dVar42;
    dVar41 = (double)fastfunc::FastIntToDouble(*(undefined4 *)(uVar12 + 0x1c0));
    puVar15[0x76] = (longlong)DAT_007fec10;
    dVar35 = 0.5;
    puVar15[0x76] = (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar15[0x76] + 0.5))
    ;
    dVar43 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)puVar15 + 0x3b4));
    dVar31 = (double)DAT_007fec14;
    uVar14 = *(undefined4 *)(uVar12 + 100);
    *(undefined4 *)(puVar15 + 100) = uVar14;
    *(undefined4 *)((int)puVar15 + 0x324) = *(undefined4 *)(uVar12 + 0x68);
    mobyutil::MB_PathMoveDist
              ((double)(float)((double)(float)(dVar42 - dVar31) * (double)(float)(dVar41 / dVar43) +
                              dVar31),iVar16,uVar17 - 0x3d0,uVar17 - 0x140,uVar17 - 0x13c,uVar14,0);
    *(undefined4 *)(uVar12 + 0x1e0) = *(undefined4 *)(puVar15 + 0x12);
    *(undefined4 *)(uVar12 + 0x1e4) = *(undefined4 *)((int)puVar15 + 0x94);
    *(undefined4 *)(uVar12 + 0x1e8) = *(undefined4 *)(puVar15 + 0x13);
    *(undefined4 *)(uVar12 + 0x1ec) = *(undefined4 *)((int)puVar15 + 0x9c);
    fVar2 = *(float *)(puVar15 + 0x12) - *(float *)(param_1 + 0x10);
    dVar39 = (double)fVar2;
    fVar3 = *(float *)((int)puVar15 + 0x94) - *(float *)(param_1 + 0x14);
    dVar38 = (double)fVar3;
    *(float *)((int)puVar15 + 0x334) = fVar2;
    *(float *)(puVar15 + 0x67) = fVar3;
    dVar40 = (double)*(float *)((int)puVar15 + 0x9c);
    dVar31 = (double)(*(float *)(puVar15 + 0x13) - *(float *)(param_1 + 0x18));
    *(float *)((int)puVar15 + 0x33c) = (float)(ABS(dVar39) - ABS(dVar38));
    fVar2 = *(float *)(param_1 + 0x48);
    uVar22 = (ulonglong)(*(uint *)((int)puVar15 + 0x334) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar15 + 0x33c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar15 + 0x67) >> 0x1d) & 4;
    dVar43 = ABS((double)*(float *)((int)puVar15 + 0x334));
    if ((double)*(float *)((int)puVar15 + 0x33c) - dVar36 < 0.0) {
      dVar43 = ABS(dVar38);
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
    dVar32 = ABS((double)*(float *)(puVar15 + 0x67));
    if ((double)*(float *)((int)puVar15 + 0x33c) - dVar36 < 0.0) {
      dVar32 = ABS(dVar39);
    }
    fVar4 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
    dVar41 = dVar36;
    if (dVar36 < dVar43) {
      lVar28 = uVar17 - 0x450;
      lVar23 = uVar17 - 0xf4;
      lVar25 = uVar17 - 0xe4;
      lVar30 = 2;
      fVar5 = (float)(dVar32 - dVar43) / (float)(dVar32 + dVar43);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar15 + 0x6f) = fVar5;
      *(float *)(puVar15 + 0x6e) = fVar5;
      *(float *)((int)puVar15 + 0x374) = fVar5;
      *(float *)((int)puVar15 + 0x36c) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar15 + 0x6e) = *(float *)(puVar15 + 0x6e) * fVar6;
      *(float *)((int)puVar15 + 0x374) = *(float *)((int)puVar15 + 0x374) * fVar5;
      *(float *)(puVar15 + 0x6f) = *(float *)(puVar15 + 0x6f) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar28 + 0x36c) = *(float *)((int)lVar28 + 0x35c) * fVar5 * fVar5;
        iVar20 = (int)lVar23;
        lVar28 = lVar28 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar5 * fVar5;
        lVar25 = lVar25 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar30 = 4;
      lVar25 = uVar17 - 0xf4;
      pfVar24 = (float *)&DAT_007358e0;
      lVar28 = lVar19;
      lVar23 = lVar25;
      do {
        fVar5 = *pfVar24;
        fVar6 = pfVar24[1];
        pfVar24 = pfVar24 + 2;
        *(float *)((int)lVar28 + 0x36c) = *(float *)((int)lVar28 + 0x36c) * fVar5;
        lVar28 = lVar28 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar6;
        lVar23 = lVar23 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar23 = 2;
      lVar28 = lVar19;
      do {
        iVar20 = (int)lVar28;
        lVar28 = lVar28 + 0x10;
        iVar16 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar20 + 0x36c)) +
                          *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc)
                         );
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      dVar41 = (double)((float)(dVar41 + dVar44) * fVar3 + fVar4);
    }
    dVar32 = (double)fastfunc::FastDiffRots(dVar41,(double)fVar2);
    fVar2 = animationSpeed;
    dVar43 = 1.2217304706573486;
    if ((dVar32 <= 1.2217304706573486) && (dVar43 = dVar32, dVar32 < -1.2217304706573486)) {
      dVar43 = -1.2217304706573486;
    }
    iVar20 = *(int *)(uVar12 + 0x1c4) + 1;
    *(int *)(uVar12 + 0x1c4) = iVar20;
    dVar32 = 30.5;
    puVar15[0x76] = (longlong)(int)(fVar2 * 30.5);
    if (*(int *)((int)puVar15 + 0x3b4) < iVar20) {
      if (*(char *)(param_1 + 0xbc) == '\x04') {
        *(undefined1 *)(param_1 + 0xbc) = 0;
      }
      else {
        FUN_0024d2e4(param_1,3,1);
        *(undefined1 *)(param_1 + 0xbc) = 3;
      }
      auVar46 = ZEXT416(0xffffffff);
      auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
      auVar45 = vectorShiftLeftIntegerWord(auVar46,auVar46);
      auVar46 = loadVectorLeftIndexed(0x2c,0x2edad0);
      auVar46 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar47 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar46 = vectorMultiplyAddFloatingPoint
                          (auVar47,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,
                           auVar45);
      auVar46 = vectorConvertToSignedFixedPointWordSaturate(auVar46,0);
      puVar15[0x76] = (longlong)(int)((double)animationSpeed * dVar32);
      auVar46 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
      iVar20 = *(int *)((int)puVar15 + 0x3b4);
      uVar14 = storeVectorElementWordIndexed
                         (auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,0x1c4,uVar29
                         );
      *(undefined4 *)(uVar12 + 0x1c4 & 0xfffffffc) = uVar14;
    }
    if ((*(char *)(param_1 + 0xbc) == '\x02') || (*(char *)(param_1 + 0xbc) == '\x04')) {
      dVar34 = (double)fastfunc::FastIntToDouble(iVar20);
      puVar15[0x76] = (longlong)(int)((double)animationSpeed * dVar32);
      dVar32 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)puVar15 + 0x3b4));
      dVar34 = (double)(float)(dVar34 / dVar32);
      if (*(char *)(param_1 + 0xbc) == '\x04') {
        dVar34 = (double)(float)(dVar42 - dVar34);
      }
      dVar43 = (double)(float)(dVar34 * dVar43);
    }
    fastfunc::FastQuaternionToEuler(dVar43,uVar29 + 0x150,2);
    mobyfunc::GetBonePosition(param_1,4,uVar17 - 0x3c0);
    dVar33 = (double)(float)(dVar31 * dVar31 +
                            (double)(float)(dVar39 * dVar39 + (double)(float)(dVar38 * dVar38)));
    dVar43 = dVar36;
    dVar32 = dVar36;
    dVar37 = dVar36;
    if ((double)(float)SQRT(dVar33) != dVar36) {
      dVar43 = 1.0 / SQRT(dVar33);
      dVar43 = (double)(float)(-(double)(float)((double)(float)(dVar33 * dVar43) * dVar43 - dVar42)
                               * (double)(float)(dVar35 * dVar43) + dVar43);
      dVar43 = (double)(float)(-(double)(float)((double)(float)(dVar33 * dVar43) * dVar43 - dVar42)
                               * (double)(float)(dVar35 * dVar43) + dVar43);
      dVar37 = (double)(float)(-(double)(float)((double)(float)(dVar33 * dVar43) * dVar43 - dVar42)
                               * (double)(float)(dVar35 * dVar43) + dVar43);
      dVar32 = (double)(float)(dVar39 * dVar37);
      dVar43 = (double)(float)(dVar38 * dVar37);
      dVar37 = (double)(float)(dVar31 * dVar37);
    }
    *(float *)((int)puVar15 + 0x23c) = (float)dVar40;
    *(float *)(puVar15 + 0x46) = (float)dVar32;
    *(float *)((int)puVar15 + 0x234) = (float)dVar43;
    *(float *)(puVar15 + 0x47) = (float)dVar37;
    *(undefined4 *)((int)puVar15 + 0x24c) = 0;
    dVar39 = (double)(float)(dVar32 * dVar32 + --(double)(float)(dVar43 * dVar43));
    dVar31 = dVar36;
    dVar38 = dVar36;
    if ((double)(float)SQRT(dVar39) != dVar36) {
      dVar31 = 1.0 / SQRT(dVar39);
      dVar31 = (double)(float)(-(double)(float)((double)(float)(dVar39 * dVar31) * dVar31 - dVar42)
                               * (double)(float)(dVar35 * dVar31) + dVar31);
      dVar31 = (double)(float)(-(double)(float)((double)(float)(dVar39 * dVar31) * dVar31 - dVar42)
                               * (double)(float)(dVar35 * dVar31) + dVar31);
      dVar31 = (double)(float)(-(double)(float)((double)(float)(dVar39 * dVar31) * dVar31 - dVar42)
                               * (double)(float)(dVar35 * dVar31) + dVar31);
      dVar38 = (double)(float)(dVar32 * dVar31);
      dVar31 = -(double)(float)(dVar43 * dVar31);
    }
    *(float *)(puVar15 + 0x48) = (float)dVar31;
    *(float *)((int)puVar15 + 0x244) = (float)dVar38;
    *(undefined4 *)(puVar15 + 0x49) = 0;
    *(undefined4 *)((int)puVar15 + 0x22c) = 0;
    *(undefined4 *)(puVar15 + 0x4b) = 0;
    *(float *)((int)puVar15 + 0x224) = (float)(dVar37 * dVar31 - dVar36);
    *(undefined4 *)((int)puVar15 + 0x254) = 0;
    *(undefined4 *)(puVar15 + 0x4a) = 0;
    *(float *)((int)puVar15 + 0x25c) = (float)dVar42;
    *(float *)(puVar15 + 0x44) = (float)(dVar43 * dVar36 - (double)(float)(dVar37 * dVar38));
    *(float *)(puVar15 + 0x45) = (float)(dVar32 * dVar38 - (double)(float)(dVar43 * dVar31));
    mobyfunc::GetBoneTransformations(param_1,5,uVar17 - 0x200);
    fVar2 = *(float *)((int)puVar15 + 0x264);
    fVar3 = *(float *)(puVar15 + 0x4c);
    fVar4 = *(float *)(puVar15 + 0x4d);
    fVar5 = *(float *)(puVar15 + 0x4e);
    fVar6 = *(float *)((int)puVar15 + 0x274);
    fVar7 = *(float *)(puVar15 + 0x4f);
    fVar8 = *(float *)(puVar15 + 0x50);
    fVar9 = *(float *)((int)puVar15 + 0x284);
    fVar10 = *(float *)(puVar15 + 0x51);
    dVar39 = (double)(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    dVar43 = dVar36;
    dVar31 = dVar36;
    dVar38 = dVar36;
    if ((double)(float)SQRT(dVar39) != dVar36) {
      dVar43 = 1.0 / SQRT(dVar39);
      dVar43 = (double)(float)(-(double)(float)((double)(float)(dVar39 * dVar43) * dVar43 - dVar42)
                               * (double)(float)(dVar35 * dVar43) + dVar43);
      dVar43 = (double)(float)(-(double)(float)((double)(float)(dVar39 * dVar43) * dVar43 - dVar42)
                               * (double)(float)(dVar35 * dVar43) + dVar43);
      fVar1 = (float)(-(double)(float)((double)(float)(dVar39 * dVar43) * dVar43 - dVar42) *
                      (double)(float)(dVar35 * dVar43) + dVar43);
      dVar38 = (double)(fVar3 * fVar1);
      dVar31 = (double)(fVar2 * fVar1);
      dVar43 = (double)(fVar4 * fVar1);
    }
    *(float *)(puVar15 + 0x4d) = (float)dVar43;
    *(float *)(puVar15 + 0x4c) = (float)dVar38;
    *(float *)((int)puVar15 + 0x264) = (float)dVar31;
    dVar39 = (double)(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
    dVar43 = dVar36;
    dVar31 = dVar36;
    dVar38 = dVar36;
    if ((double)(float)SQRT(dVar39) != dVar36) {
      dVar43 = 1.0 / SQRT(dVar39);
      dVar43 = (double)(float)(-(double)(float)((double)(float)(dVar39 * dVar43) * dVar43 - dVar42)
                               * (double)(float)(dVar35 * dVar43) + dVar43);
      dVar43 = (double)(float)(-(double)(float)((double)(float)(dVar39 * dVar43) * dVar43 - dVar42)
                               * (double)(float)(dVar35 * dVar43) + dVar43);
      fVar2 = (float)(-(double)(float)((double)(float)(dVar39 * dVar43) * dVar43 - dVar42) *
                      (double)(float)(dVar35 * dVar43) + dVar43);
      dVar38 = (double)(fVar5 * fVar2);
      dVar31 = (double)(fVar6 * fVar2);
      dVar43 = (double)(fVar7 * fVar2);
    }
    *(float *)(puVar15 + 0x4f) = (float)dVar43;
    *(float *)((int)puVar15 + 0x274) = (float)dVar31;
    *(float *)(puVar15 + 0x4e) = (float)dVar38;
    dVar39 = (double)(fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9);
    dVar43 = dVar36;
    dVar31 = dVar36;
    dVar38 = dVar36;
    if ((double)(float)SQRT(dVar39) != dVar36) {
      dVar43 = 1.0 / SQRT(dVar39);
      dVar43 = (double)(float)(-(double)(float)((double)(float)(dVar39 * dVar43) * dVar43 - dVar42)
                               * (double)(float)(dVar35 * dVar43) + dVar43);
      dVar43 = (double)(float)(-(double)(float)((double)(float)(dVar39 * dVar43) * dVar43 - dVar42)
                               * (double)(float)(dVar35 * dVar43) + dVar43);
      fVar2 = (float)(-(double)(float)((double)(float)(dVar39 * dVar43) * dVar43 - dVar42) *
                      (double)(float)(dVar35 * dVar43) + dVar43);
      dVar38 = (double)(fVar8 * fVar2);
      dVar31 = (double)(fVar9 * fVar2);
      dVar43 = (double)(fVar10 * fVar2);
    }
    *(float *)(puVar15 + 0x50) = (float)dVar38;
    *(float *)((int)puVar15 + 0x284) = (float)dVar31;
    *(float *)(puVar15 + 0x51) = (float)dVar43;
    fastfunc::FastNormalizeRMtx4(uVar17 - 0x1c0,uVar17 - 0x200);
    *(float *)((int)puVar15 + 0x2dc) = (float)dVar42;
    *(undefined4 *)(puVar15 + 0x5b) = 0;
    *(undefined4 *)((int)puVar15 + 0x2d4) = 0;
    *(undefined4 *)(puVar15 + 0x5a) = 0;
    fastfunc::FastVecMtx4Mul(uVar17 - 0x180,uVar17 - 0x1c0,uVar17 - 0x240);
    dVar43 = (double)(512.0 / *(float *)(param_1 + 0x2c));
    mobyutil::MB_MtxToQuat((float *)(puVar15 + 0x16),(float *)(uVar17 - 0x180));
    if ((*(char *)(param_1 + 0xbc) == '\x02') || (*(char *)(param_1 + 0xbc) == '\x04')) {
      fastfunc::FastSlerp(dVar34,uVar29 + 400,uVar29 + 0x1d0,uVar17 - 0x3b0);
    }
    else {
      *(undefined4 *)(uVar12 + 400) = *(undefined4 *)(puVar15 + 0x16);
      *(undefined4 *)(uVar12 + 0x194) = *(undefined4 *)((int)puVar15 + 0xb4);
      *(undefined4 *)(uVar12 + 0x198) = *(undefined4 *)(puVar15 + 0x17);
      *(undefined4 *)(uVar12 + 0x19c) = *(undefined4 *)((int)puVar15 + 0xbc);
    }
    *(undefined1 *)(uVar12 + 0x183) = 1;
    *(float *)(uVar12 + 0x18c) = (float)dVar42;
    *(float *)(puVar15 + 0x18) = (float)dVar42;
    *(float *)((int)puVar15 + 0xc4) = (float)dVar42;
    *(float *)(puVar15 + 0x19) = (float)dVar42;
    *(float *)((int)puVar15 + 0xcc) = (float)dVar42;
    libc::memcpy((void *)(uVar12 + 0x1a0),puVar15 + 0x18,0x10);
    *(float *)(uVar12 + 0x1b4) = (float)dVar43;
    *(float *)(uVar12 + 0x1bc) = (float)dVar42;
    *(undefined4 *)(uVar12 + 0x1b0) = 0;
    *(undefined4 *)(uVar12 + 0x1b8) = 0;
    iVar20 = fastfunc::FastDecTimerS32(uVar29 + 0x1c0);
    if (iVar20 != 0) {
      *(undefined1 *)(param_1 + 0xbc) = 4;
      *(undefined4 *)(uVar12 + 0x1c4) = 0;
    }
    fVar2 = DAT_007fec18;
    cVar27 = *(char *)(param_1 + 0xbc);
    if (cVar27 == '\x03') {
      iVar20 = FUN_0024d50c(param_1,uVar29 + 0xa0,uVar29 + 0x1e0);
      if (iVar20 == 0) {
        FUN_0024d2e4(param_1,3,1);
      }
      fVar2 = *(float *)(param_1 + 0x48);
      fVar3 = fVar2 + 1.5707963;
      fVar4 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar4 = fVar2;
      }
      fVar5 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar5 = fVar3;
      }
      fVar6 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
        fVar6 = fVar4;
      }
      *(float *)(puVar15 + 0x1f) = (float)dVar42;
      fVar2 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
        fVar2 = fVar5;
      }
      fVar3 = fVar6 * fVar6;
      uVar21 = *(undefined2 *)(param_1 + 0xa6);
      *(undefined4 *)((int)puVar15 + 0xfc) = 0x45afdf66;
      *(undefined1 *)(puVar15 + 0x21) = 0;
      *(undefined1 *)((int)puVar15 + 0x109) = 1;
      *(undefined2 *)((int)puVar15 + 0x10a) = uVar21;
      fVar4 = fVar2 * fVar2;
      fVar8 = fVar3 * fVar3 * fVar6;
      fVar5 = fVar4 * fVar4 * fVar2;
      fVar9 = fVar3 * fVar8;
      fVar7 = fVar4 * fVar5;
      *(float *)((int)puVar15 + 0xf4) =
           fVar3 * fVar9 * 2.601887e-06 +
           fVar9 * -0.0001980741 + fVar8 * 0.0083330255 + fVar3 * fVar6 * -0.16666657 + fVar6;
      *(float *)((int)puVar15 + 0x10c) = (float)dVar42;
      *(undefined4 *)(puVar15 + 0x22) = 1;
      *(undefined4 *)((int)puVar15 + 0x104) = 0x10001;
      *(int *)(puVar15 + 0x20) = param_1;
      *(float *)(puVar15 + 0x1e) =
           fVar4 * fVar7 * 2.601887e-06 +
           fVar7 * -0.0001980741 + fVar5 * 0.0083330255 + fVar4 * fVar2 * -0.16666657 + fVar2;
      collproc::CollLine(uVar29 + 0xd0,uVar29 + 0x1e0,9,param_1,uVar17 - 0x370);
    }
    else if ((cVar27 == '\x02') || (cVar27 == '\x04')) {
      fVar3 = *(float *)(uVar12 + 0xa0) * DAT_007fec18;
      *(float *)(puVar15 + 0x1a) = fVar3;
      fVar4 = *(float *)(uVar12 + 0xa4) * fVar2;
      *(float *)((int)puVar15 + 0xd4) = fVar4;
      fVar2 = *(float *)(uVar12 + 0xa8) * fVar2;
      *(float *)(puVar15 + 0x1b) = fVar2;
      *(undefined4 *)((int)puVar15 + 0xdc) = *(undefined4 *)(uVar12 + 0xac);
      *(float *)(puVar15 + 0x1a) = fVar3 + *(float *)(uVar12 + 0xd0);
      *(float *)((int)puVar15 + 0xd4) = fVar4 + *(float *)(uVar12 + 0xd4);
      *(float *)(puVar15 + 0x1b) = fVar2 + *(float *)(uVar12 + 0xd8);
      uVar18 = partupd::SpawnPart_69(uVar17 - 0x390,&DAT_00a15d30,0x7f,param_1);
      iVar20 = (int)uVar18;
      if (iVar20 != 0) {
        *(float *)(iVar20 + 0xc) = (float)((double)(DAT_007fec1c - 1000.0) * dVar34 + 1000.0);
        uVar21 = fastfunc::FastDoubleToInt((double)(float)(dVar34 * 111.0 + 16.0));
        *(undefined2 *)(iVar20 + 0x34) = uVar21;
        auVar46 = ZEXT416(0xffffffff);
        auVar45 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
        *(undefined2 *)(iVar20 + 0x36) = 1;
        auVar46 = loadVectorLeftIndexed(0x5c,0x2edad0);
        auVar45 = vectorShiftLeftIntegerWord(auVar45,auVar45);
        auVar46 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar47 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar46 = vectorMultiplyAddFloatingPoint
                            (auVar47,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,
                             auVar45);
        auVar46 = vectorConvertToSignedFixedPointWordSaturate(auVar46,0);
        puVar15[0x76] = (longlong)(int)(animationSpeed * 4.5);
        auVar46 = vectorSplatHalfWord(auVar46,1);
        uVar14 = *(undefined4 *)((int)puVar15 + 0x3b4);
        uVar21 = storeVectorElementHalfWordIndexed(auVar46,10,uVar18);
        *(undefined2 *)(iVar20 + 10) = uVar21;
        dVar43 = (double)fastfunc::FastIntToDouble((short)uVar14);
        *(undefined **)(iVar20 + 0x38) = &DAT_007f7f7f;
        *(float *)(iVar20 + 0x30) = (float)(dVar42 / dVar43);
      }
      uVar14 = *(undefined4 *)(uVar12 + 0xd0);
      *(undefined4 *)(puVar15 + 0x1c) = uVar14;
      *(undefined4 *)((int)puVar15 + 0xe4) = *(undefined4 *)(uVar12 + 0xd4);
      fVar2 = *(float *)(uVar12 + 0xd8);
      *(float *)(puVar15 + 0x1d) = fVar2;
      *(undefined4 *)((int)puVar15 + 0xec) = *(undefined4 *)(uVar12 + 0xdc);
      fVar3 = DAT_007fec20;
      uVar13 = *(uint *)(uVar12 + 0xf0);
      uVar22 = (ulonglong)uVar13;
      *(float *)(puVar15 + 0x1d) = (float)((double)fVar2 - dVar35);
      fVar2 = (float)((double)(fVar3 - 0.1) * dVar34 + 0.10000000149011612);
      dVar43 = (double)fVar2;
      if (uVar13 == 0xffffffff) {
        uVar22 = lights::CreatePointLight2
                           (fVar2,dVar36,(double)DAT_007fec24,(double)DAT_007fec28,
                            (double)DAT_007fec2c,(Vec4 *)(puVar15 + 0x1c));
        uVar14 = *(undefined4 *)(puVar15 + 0x1c);
        *(int *)(uVar12 + 0xf0) = (int)uVar22;
      }
      if (-1 < (int)uVar22) {
        iVar20 = (int)(uVar22 << 5);
        *(undefined4 *)((int)&PointLights[0].pos.x + iVar20) = uVar14;
        *(undefined4 *)((int)&PointLights[0].pos.y + iVar20) = *(undefined4 *)((int)puVar15 + 0xe4);
        uVar14 = *(undefined4 *)(puVar15 + 0x1d);
        *(float *)((int)&PointLights[0].pos.w + iVar20) = (float)dVar43;
        *(undefined4 *)((int)&PointLights[0].pos.z + iVar20) = uVar14;
        *(float *)((int)&PointLights[0].color.x + iVar20) = DAT_007fec24;
        *(float *)((int)&PointLights[0].color.y + iVar20) = DAT_007fec28;
        *(float *)((int)&PointLights[0].color.z + iVar20) = DAT_007fec2c;
      }
    }
    else if (*(int *)(uVar12 + 0xf0) != -1) {
      lights::DeletePointLight(*(int *)(uVar12 + 0xf0));
      *(undefined4 *)(uVar12 + 0xf0) = 0xffffffff;
    }
  }
  else if (*(int *)(uVar12 + 0xf0) != -1) {
    lights::DeletePointLight(*(int *)(uVar12 + 0xf0));
    *(undefined4 *)(uVar12 + 0xf0) = 0xffffffff;
  }
  fVar2 = g_heroPosition.x - *(float *)(param_1 + 0x10);
  fVar3 = g_heroPosition.y - *(float *)(param_1 + 0x14);
  dVar34 = ABS((double)fVar2);
  dVar31 = ABS((double)fVar3);
  *(float *)(puVar15 + 0x65) = fVar2;
  *(float *)((int)puVar15 + 0x32c) = fVar3;
  *(float *)(puVar15 + 0x66) = (float)(dVar34 - dVar31);
  uVar22 = (ulonglong)(*(uint *)(puVar15 + 0x65) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar15 + 0x66) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar15 + 0x32c) >> 0x1d) & 4;
  dVar43 = ABS((double)*(float *)(puVar15 + 0x65));
  if ((double)*(float *)(puVar15 + 0x66) - dVar36 < 0.0) {
    dVar43 = dVar31;
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
  dVar31 = ABS((double)*(float *)((int)puVar15 + 0x32c));
  if ((double)*(float *)(puVar15 + 0x66) - dVar36 < 0.0) {
    dVar31 = dVar34;
  }
  fVar3 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
  if (dVar36 < dVar43) {
    lVar28 = uVar17 - 0x450;
    lVar23 = uVar17 - 0x114;
    lVar25 = uVar17 - 0x104;
    lVar30 = 2;
    fVar4 = (float)(dVar31 - dVar43) / (float)(dVar31 + dVar43);
    fVar5 = fVar4 * fVar4;
    *(float *)(puVar15 + 0x6b) = fVar4;
    *(float *)(puVar15 + 0x6a) = fVar4;
    *(float *)((int)puVar15 + 0x354) = fVar4;
    *(float *)((int)puVar15 + 0x34c) = fVar4;
    fVar4 = fVar5 * fVar5;
    *(float *)(puVar15 + 0x6a) = *(float *)(puVar15 + 0x6a) * fVar5;
    *(float *)((int)puVar15 + 0x354) = *(float *)((int)puVar15 + 0x354) * fVar4;
    *(float *)(puVar15 + 0x6b) = *(float *)(puVar15 + 0x6b) * fVar4 * fVar5;
    do {
      *(float *)((int)lVar28 + 0x34c) = *(float *)((int)lVar28 + 0x33c) * fVar4 * fVar4;
      iVar20 = (int)lVar23;
      lVar28 = lVar28 + 8;
      lVar23 = lVar23 + 8;
      *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
      lVar25 = lVar25 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar30 = 4;
    lVar25 = uVar17 - 0x114;
    pfVar24 = (float *)&DAT_007358e0;
    lVar28 = lVar19;
    lVar23 = lVar25;
    do {
      fVar4 = *pfVar24;
      fVar5 = pfVar24[1];
      pfVar24 = pfVar24 + 2;
      *(float *)((int)lVar28 + 0x34c) = *(float *)((int)lVar28 + 0x34c) * fVar4;
      lVar28 = lVar28 + 8;
      *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar5;
      lVar23 = lVar23 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar28 = 2;
    do {
      iVar20 = (int)lVar19;
      iVar16 = (int)lVar25;
      lVar19 = lVar19 + 0x10;
      lVar25 = lVar25 + 0x10;
      dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar20 + 0x34c)) +
                        *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc));
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    dVar36 = (double)((float)(dVar36 + dVar44) * fVar2 + fVar3);
  }
  dVar43 = (double)fastfunc::FastDiffRots(dVar36,dVar41);
  dVar41 = 1.2217304706573486;
  if ((dVar43 <= 1.2217304706573486) && (dVar41 = dVar43, dVar43 < -1.2217304706573486)) {
    dVar41 = -1.2217304706573486;
  }
  fastfunc::FastQuaternionToEuler(dVar41,uVar29 + 0x110,2);
  return;
}



//==== 002eefd8  ns=mobyupdate_helpers  size=0x68
// sig: undefined M211_002eefd8(void)
// callers(0): 
// callees(1): 0010ce18 mobyutil::MB_PathMoveDist

void mobyupdate_helpers::M211_002eefd8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  mobyutil::MB_PathMoveDist
            ((double)(mobyutil::g_FrameTime * DAT_007fec04),
             *(undefined4 *)(DAT_00a1a85c + *(int *)(iVar1 + 0x60) * 0x20 + 0x10),param_1 + 0x10,
             iVar1 + 100,iVar1 + 0x68,iVar1,0);
  return;
}



//==== 002ef040  ns=mobyupdate_helpers  size=0x10c
// sig: undefined M211_002ef040(void)
// callers(1): 002ef340 mobyupdate_unsorted::UpdateMoby_211
// callees(2): 004fff60 fastfunc::FastDecTimerS32; 00502730 fastfunc::FastIntToDouble

longlong mobyupdate_helpers::M211_002ef040(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  Spline *pSVar10;
  int iVar11;
  double dVar12;
  
  iVar8 = *(int *)(param_1 + 0x78);
  iVar9 = *(int *)(DAT_00a1a85c + *(int *)(iVar8 + 0x60) * 0x20 + 0x10);
  iVar11 = fastfunc::FastDecTimerS32(iVar8 + 0x6c);
  dVar12 = (double)fastfunc::FastIntToDouble(*(undefined4 *)(iVar8 + 0x6c));
  fVar1 = (float)(dVar12 * (double)*(float *)(iVar8 + 0x70));
  fVar2 = *(float *)(iVar9 + 0x10);
  fVar3 = *(float *)(iVar9 + 0x14);
  fVar4 = *(float *)(iVar9 + 0x18);
  pSVar10 = Splines[*(int *)(iVar8 + 0x84)];
  fVar5 = pSVar10->points[0].x;
  fVar6 = pSVar10->points[0].y;
  fVar7 = pSVar10->points[0].z;
  *(float *)(param_1 + 0x1c) = pSVar10->points[0].w;
  *(float *)(param_1 + 0x10) = fVar1 * (fVar5 - fVar2) + fVar2;
  *(float *)(param_1 + 0x14) = fVar1 * (fVar6 - fVar3) + fVar3;
  *(float *)(param_1 + 0x18) = fVar1 * (fVar7 - fVar4) + fVar4;
  return ((LZCOUNT(-iVar11) << 0x3a) >> 0x3f) + 1;
}



//==== 002ef158  ns=mobyupdate_helpers  size=0x1a8
// sig: undefined M211_002ef158(void)
// callers(1): 002ef340 mobyupdate_unsorted::UpdateMoby_211
// callees(1): 0010d7a0 mobyutil::MB_PathFollowToPos

void mobyupdate_helpers::M211_002ef158(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 in_r8;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined1 auStack_70 [16];
  undefined1 local_60 [4];
  undefined1 local_5c [12];
  
  iVar2 = *(int *)(param_1 + 0x78);
  iVar4 = *(int *)(DAT_00a1a85c + *(int *)(iVar2 + 0x60) * 0x20 + 0x10);
  *(undefined4 *)(iVar2 + 100) = 0;
  dVar7 = 0.0;
  *(undefined4 *)(iVar2 + 0x68) = 0;
  *(undefined4 *)(iVar2 + 0x74) = DAT_007fec0c;
  uVar6 = 0x4034000000000000;
  uVar5 = 0x4014000000000000;
  mobyutil::MB_PathFollowToPos
            (0x4034000000000000,0x4014000000000000,0,iVar4,
             ZEXT48(Splines[*(int *)(iVar2 + 0x88)]) + 0x30,auStack_70,local_5c,local_60,in_r8,0);
  *(undefined2 *)(iVar2 + 0x8c) = 0;
  mobyutil::MB_PathFollowToPos
            (uVar6,uVar5,dVar7,iVar4,ZEXT48(Splines[*(int *)(iVar2 + 0x88)]) + 0x20,auStack_70,
             local_5c,local_60,in_r8,0);
  *(undefined2 *)(iVar2 + 0x8e) = 0;
  *(undefined4 *)(iVar2 + 0x78) = 0;
  iVar3 = (int)*(short *)(iVar2 + 0x8c);
  if (0 < *(short *)(iVar2 + 0x8c)) {
    do {
      iVar3 = iVar3 + -1;
      fVar1 = (float)(dVar7 + (double)*(float *)(iVar4 + 0x1c));
      dVar7 = (double)fVar1;
      iVar4 = iVar4 + 0x10;
      *(float *)(iVar2 + 0x78) = fVar1;
    } while (0 < iVar3);
  }
  return;
}



//==== 002ef340  ns=mobyupdate_unsorted  size=0x674
// sig: undefined UpdateMoby_211(MobyInstance * moby)
// callers(0): 
// callees(18): 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f0ea8 mobyfunc::AttachManipulator; 000f1114 mobyfunc::GetBonePosition; 000fdcf0 mobyutil::MB_SetAnimationNoBlend; 000fddc0 mobyutil::MB_SetAnimation; 0010ce18 mobyutil::MB_PathMoveDist; 0010e030 mobyutil::MB_genericExplosion; 00110b70 mobyutil::MB_IsPntInCuboid; 002ed768 mobyupdate_helpers::M211_002ed768; 002edb38 mobyupdate_helpers::M211_002edb38; 002ef040 mobyupdate_helpers::M211_002ef040; 002ef158 mobyupdate_helpers::M211_002ef158; 003426d8 FUN_003426d8; 00363aa0 FUN_00363aa0; 004fff60 fastfunc::FastDecTimerS32; 005001fc fastfunc::FastMemSet; 00502730 fastfunc::FastIntToDouble

/* Moby 211 */

void mobyupdate_unsorted::UpdateMoby_211(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  MobyModeBit MVar3;
  void *pvVar4;
  u16 *puVar5;
  float *pfVar6;
  Spline *pSVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined8 in_LR;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_40 [32];
  
  lVar17 = (longlong)(int)moby;
  uVar1 = moby->state;
  pvVar4 = moby->pVar;
  uVar20 = ZEXT48(pvVar4);
  if (uVar1 == '\x06') {
    mobyupdate_helpers::M211_002edb38(lVar17);
    iVar18 = mobyutil::MB_IsPntInCuboid
                       ((Vec4 *)(lVar17 + 0x10),(longlong)*(int *)((int)pvVar4 + 0x1cc));
    if (iVar18 != 0) {
      mobyfunc::GetBonePosition(lVar17,2,auStack_40);
      iVar18 = FUN_003426d8(lVar17,auStack_40);
      if (iVar18 != 0) {
        fVar2 = (moby->rotation).z;
        fVar9 = fVar2 + 1.5707963;
        fVar10 = 3.1415925 - fVar2;
        if (fVar2 - (3.1415925 - fVar2) < 0.0) {
          fVar10 = fVar2;
        }
        fVar12 = 3.1415925 - fVar9;
        if (fVar9 - (3.1415925 - fVar9) < 0.0) {
          fVar12 = fVar9;
        }
        fVar11 = -3.1415925 - fVar2;
        if ((-3.1415925 - fVar2) - fVar10 < 0.0) {
          fVar11 = fVar10;
        }
        fVar2 = -3.1415925 - fVar9;
        if ((-3.1415925 - fVar9) - fVar12 < 0.0) {
          fVar2 = fVar12;
        }
        fVar9 = fVar11 * fVar11;
        fVar10 = fVar2 * fVar2;
        fVar14 = fVar9 * fVar9 * fVar11;
        fVar12 = fVar10 * fVar10 * fVar2;
        fVar15 = fVar9 * fVar14;
        fVar16 = DAT_0071f408 * 0.4;
        pfVar6 = *(float **)(iVar18 + 0x78);
        fVar13 = fVar10 * fVar12;
        pfVar6[1] = fVar16 * (fVar9 * fVar15 * 2.601887e-06 +
                             fVar15 * -0.0001980741 +
                             fVar14 * 0.0083330255 + fVar9 * fVar11 * -0.16666657 + fVar11);
        *pfVar6 = fVar16 * (fVar10 * fVar13 * 2.601887e-06 +
                           fVar13 * -0.0001980741 +
                           fVar12 * 0.0083330255 + fVar10 * fVar2 * -0.16666657 + fVar2);
      }
      FUN_00363aa0(lVar17,&DAT_007fec30,0);
      mobyutil::MB_genericExplosion
                (0,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,lVar17,uVar20 + 0x40,lVar17 + 0x10,1,5,5,2,4);
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  else if (uVar1 == '\x05') {
    mobyutil::MB_PathMoveDist
              ((double)(mobyutil::g_FrameTime * DAT_007fec04),
               *(undefined4 *)(DAT_00a1a85c + *(int *)((int)pvVar4 + 0x60) * 0x20 + 0x10),
               lVar17 + 0x10,uVar20 + 100,uVar20 + 0x68,0x800000,0);
  }
  else if (uVar1 == '\x04') {
    iVar18 = mobyupdate_helpers::M211_002ef040(lVar17);
    if (iVar18 != 0) {
      auVar22 = ZEXT416(0xffffffff);
      auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
      moby->state = '\x05';
      auVar23 = vectorShiftLeftIntegerWord(auVar22,auVar22);
      auVar22 = loadVectorLeftIndexed(0xffffffffffffec08,0x800000);
      auVar24 = vectorConvertFromSignedFixedPointWord(auVar22,0);
      auVar22 = loadVectorLeftIndexed(in_LR,0x2ef300);
      auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar22 = vectorAddFloatingPoint
                          (auVar24,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60);
      auVar22 = vectorMultiplyAddFloatingPoint(auVar25,auVar22,auVar23);
      auVar22 = vectorConvertToSignedFixedPointWordSaturate(auVar22,0);
      auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,0x6c,uVar20);
      *(undefined4 *)((int)pvVar4 + 0x6cU & 0xfffffffc) = uVar8;
    }
  }
  else {
    if (uVar1 != '\x03') {
      if (uVar1 != '\x02') {
        if (uVar1 == '\x01') {
          if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) != 0x14) {
            return;
          }
          auVar22 = ZEXT416(0xffffffff);
          auVar24 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
          auVar22 = loadVectorLeftIndexed(0x80,uVar20);
          auVar25 = vectorShiftLeftIntegerWord(auVar24,auVar24);
          auVar24 = loadVectorRightIndexed(0x90,uVar20);
          auVar23 = loadVectorLeftIndexed(in_LR,0x2ef300);
          auVar24 = vectorConvertFromSignedFixedPointWord(auVar22 | auVar24,0);
          auVar22 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar22 = vectorAddFloatingPoint
                              (auVar24,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60
                              );
          auVar22 = vectorMultiplyAddFloatingPoint(auVar23,auVar22,auVar25);
          auVar22 = vectorConvertToSignedFixedPointWordSaturate(auVar22,0);
          auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar8 = storeVectorElementWordIndexed
                            (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,0x6c,
                             uVar20);
          *(undefined4 *)((int)pvVar4 + 0x6cU & 0xfffffffc) = uVar8;
          moby->state = '\x02';
          return;
        }
        if (uVar1 == '\0') {
          if (*(int *)((int)pvVar4 + 0x60) == -1) {
            mobyfunc::DeleteMoby(moby);
            return;
          }
          if (**(int **)(DAT_00a1a85c + *(int *)((int)pvVar4 + 0x60) * 0x20 + 0x10) == 0) {
            mobyfunc::DeleteMoby(moby);
            return;
          }
          if (*(int *)((int)pvVar4 + 0x88) == -1) {
            mobyfunc::DeleteMoby(moby);
            return;
          }
          if (Splines[*(int *)((int)pvVar4 + 0x88)]->cnt != 3) {
            mobyfunc::DeleteMoby(moby);
            return;
          }
          if (*(int *)((int)pvVar4 + 0x1cc) == -1) {
            mobyfunc::DeleteMoby(moby);
            return;
          }
          mobyupdate_helpers::M211_002ef158(lVar17);
          MVar3 = moby->modeBits;
          moby->collision = (ushort *)0x0;
          moby->state = '\x01';
          *(undefined4 *)((int)pvVar4 + 0xf4) = 0xffffffff;
          *(undefined4 *)((int)pvVar4 + 0xf0) = 0xffffffff;
          moby->modeBits =
               MVar3 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                        DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                        HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
          fastfunc::FastMemSet(uVar20 + 0x100,0,0x40);
          mobyfunc::AttachManipulator(moby,2,(int)(uVar20 + 0x100));
          fastfunc::FastMemSet(uVar20 + 0x140,0,0x40);
          mobyfunc::AttachManipulator(moby,3,(int)(uVar20 + 0x140));
          fastfunc::FastMemSet(uVar20 + 0x180,0,0x40);
          mobyfunc::AttachManipulator(moby,4,(int)(uVar20 + 0x180));
          return;
        }
        goto LAB_002ef98c;
      }
      iVar18 = fastfunc::FastDecTimerS32(uVar20 + 0x6c);
      if (iVar18 == 0) {
        return;
      }
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
      puVar5 = moby->pClass->collision;
      moby->state = '\x03';
      moby->collision = puVar5;
      mobyutil::MB_SetAnimationNoBlend(lVar17,2,0);
      auVar22 = ZEXT416(0xffffffff);
      auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
      lVar19 = (longlong)DAT_007fec00;
      auVar23 = vectorShiftLeftIntegerWord(auVar22,auVar22);
      auVar22 = loadVectorLeftIndexed(in_LR,0x2ef300);
      moby->unk58 = 0.5;
      auVar24 = loadVectorLeftIndexed(0xffffffffffffec00,0x800000);
      auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar24 = vectorConvertFromSignedFixedPointWord(auVar24,0);
      auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar22 = vectorAddFloatingPoint
                          (auVar24,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60);
      auVar22 = vectorMultiplyAddFloatingPoint(auVar25,auVar22,auVar23);
      auVar22 = vectorConvertToSignedFixedPointWordSaturate(auVar22,0);
      fVar2 = animationSpeed * ((float)lVar19 + 0.5);
      auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,0x6c,uVar20);
      *(undefined4 *)((int)pvVar4 + 0x6cU & 0xfffffffc) = uVar8;
      dVar21 = (double)fastfunc::FastIntToDouble((int)fVar2);
      pSVar7 = Splines[*(int *)((int)pvVar4 + 0x84)];
      *(float *)((int)pvVar4 + 0x70) = (float)(1.0 / dVar21);
      (moby->pos).x = pSVar7->points[0].x;
      (moby->pos).y = pSVar7->points[0].y;
      (moby->pos).z = pSVar7->points[0].z;
      (moby->pos).w = pSVar7->points[0].w;
    }
    dVar21 = (double)mobyfunc::BlendAnimFrame(moby);
    if (3.0 <= dVar21) {
      mobyupdate_helpers::M211_002ef040(lVar17);
    }
    if (((moby->field43_0x70 & 2U) != 0) && (moby->updateId == moby->animationId)) {
      moby->state = '\x04';
      mobyutil::MB_SetAnimation(lVar17,0,0,10);
      moby->unk58 = 1.0;
    }
  }
LAB_002ef98c:
  mobyupdate_helpers::M211_002ed768(lVar17);
  return;
}



//==== 002ef9c8  ns=mobyupdate_helpers  size=0x5fc
// sig: undefined M1412_002ef9c8(void)
// callers(1): 00041850 camera::camera20::UpdateCamera_20
// callees(5): 000a0c38 hero::Hero_Warp; 000da9e8 lights::DeletePointLight; 0010ce18 mobyutil::MB_PathMoveDist; 0010d7a0 mobyutil::MB_PathFollowToPos; 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M1412_002ef9c8(int param_1)

{
  longlong lVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ushort uVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  ulonglong *puVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  ulonglong uVar16;
  float *pfVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  MobyInstance *pMVar22;
  int iVar23;
  ulonglong unaff_r29;
  ushort *puVar24;
  ulonglong unaff_r30;
  longlong lVar25;
  int iVar26;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f30;
  double dVar31;
  ulonglong in_f31;
  double dVar32;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar1 = uVar16 - 0x160;
  puVar12 = (ulonglong *)lVar1;
  *puVar12 = uVar16;
  puVar12[0x2e] = in_LR;
  puVar12[0x2a] = in_f30;
  puVar12[0x2b] = in_f31;
  puVar12[0x29] = unaff_r31;
  bVar2 = *(byte *)(param_1 + 0x21);
  puVar12[0x27] = unaff_r29;
  puVar24 = (ushort *)(&mobyutil::g_MobyGroups)[bVar2];
  puVar12[0x28] = unaff_r30;
  puVar12[0x26] = unaff_r28;
  puVar12[0x25] = unaff_r27;
  puVar12[0x24] = unaff_r26;
  puVar12[0x23] = unaff_r25;
  if (puVar24 != (ushort *)0x0) {
    lVar25 = 0;
    do {
      pMVar22 = MobyInstance + (*puVar24 & 0x7fff);
      pvVar8 = pMVar22->pVar;
      dVar32 = 0.7853981852531433;
      iVar23 = *(int *)(DAT_00a1a85c + *(int *)((int)pvVar8 + 0x60) * 0x20 + 0x10);
      if (DAT_0096a240 == iVar23) {
        dVar31 = 0.0;
        *(undefined4 *)((int)puVar12 + 0xa4) = 0;
        mobyutil::MB_PathFollowToPos
                  (0x4034000000000000,0x4014000000000000,0,iVar23,
                   ZEXT48(Splines[*(int *)((int)pvVar8 + 0x88)]) + 0x10,uVar16 - 0xe0,uVar16 - 0xc0,
                   uVar16 - 0xbc,Splines,0);
        iVar26 = iVar23 + *(int *)(puVar12 + 0x14) * 0x10;
        fVar5 = *(float *)(iVar26 + 0x40) - *(float *)(iVar26 + 0x10);
        fVar3 = *(float *)(iVar26 + 0x44) - *(float *)(iVar26 + 0x14);
        dVar29 = ABS((double)fVar5);
        dVar30 = ABS((double)fVar3);
        *(float *)((int)puVar12 + 0xb4) = fVar5;
        *(float *)(puVar12 + 0x17) = fVar3;
        *(undefined4 *)(puVar12 + 0x12) = 0;
        *(undefined4 *)((int)puVar12 + 0x94) = 0;
        *(float *)((int)puVar12 + 0xbc) = (float)(dVar29 - dVar30);
        uVar18 = (ulonglong)(*(uint *)((int)puVar12 + 0xb4) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0xbc) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar12 + 0x17) >> 0x1d) & 4;
        dVar28 = ABS((double)*(float *)((int)puVar12 + 0xb4));
        if ((double)*(float *)((int)puVar12 + 0xbc) - dVar31 < 0.0) {
          dVar28 = dVar30;
        }
        fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
        dVar30 = ABS((double)*(float *)(puVar12 + 0x17));
        if ((double)*(float *)((int)puVar12 + 0xbc) - dVar31 < 0.0) {
          dVar30 = dVar29;
        }
        fVar3 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
        if (dVar31 < dVar28) {
          lVar19 = uVar16 - 0x150;
          lVar20 = uVar16 - 0x74;
          lVar21 = uVar16 - 100;
          lVar27 = 2;
          fVar6 = (float)(dVar30 - dVar28) / (float)(dVar30 + dVar28);
          fVar4 = fVar6 * fVar6;
          *(float *)(puVar12 + 0x1f) = fVar6;
          *(float *)(puVar12 + 0x1e) = fVar6;
          *(float *)((int)puVar12 + 0xf4) = fVar6;
          *(float *)((int)puVar12 + 0xec) = fVar6;
          fVar6 = fVar4 * fVar4;
          *(float *)(puVar12 + 0x1e) = *(float *)(puVar12 + 0x1e) * fVar4;
          *(float *)((int)puVar12 + 0xf4) = *(float *)((int)puVar12 + 0xf4) * fVar6;
          *(float *)(puVar12 + 0x1f) = *(float *)(puVar12 + 0x1f) * fVar6 * fVar4;
          do {
            *(float *)((int)lVar19 + 0xec) = *(float *)((int)lVar19 + 0xdc) * fVar6 * fVar6;
            iVar26 = (int)lVar20;
            lVar19 = lVar19 + 8;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar21 + 4) = *(float *)(iVar26 + 4) * fVar6 * fVar6;
            lVar21 = lVar21 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar21 = uVar16 - 0x74;
          pfVar17 = (float *)&DAT_007358e0;
          lVar19 = lVar1;
          lVar20 = lVar21;
          do {
            fVar6 = *pfVar17;
            fVar4 = pfVar17[1];
            pfVar17 = pfVar17 + 2;
            *(float *)((int)lVar19 + 0xec) = *(float *)((int)lVar19 + 0xec) * fVar6;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar4;
            lVar20 = lVar20 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar20 = 2;
          lVar19 = lVar1;
          do {
            iVar26 = (int)lVar19;
            iVar9 = (int)lVar21;
            lVar19 = lVar19 + 0x10;
            lVar21 = lVar21 + 0x10;
            dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar26 + 0xec)) +
                              *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                             *(float *)(iVar9 + 0xc));
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          dVar31 = (double)((float)(dVar31 + dVar32) * fVar5 + fVar3);
        }
        dVar28 = (double)fastfunc::FastWrapRot((float)dVar31,-1.5707964);
        DAT_0096a244 = *(int *)(puVar12 + 0x14);
        *(float *)(puVar12 + 0x13) = (float)dVar28;
        *(undefined4 *)((int)puVar12 + 0x9c) = 0;
        DAT_0096a248 = 0;
        hero::Hero_Warp((float *)(iVar23 + DAT_0096a244 * 0x10 + 0x10),(float *)(puVar12 + 0x12),
                        0x28,0);
      }
      lVar19 = lVar25 << 2;
      uVar7 = *puVar24;
      lVar25 = (longlong)(short)((short)lVar25 + 1);
      puVar24 = puVar24 + 1;
      *(MobyInstance **)((int)puVar12 + (int)lVar19 + 0xc0) = pMVar22;
    } while (-1 < (short)uVar7);
    iVar26 = 0;
    iVar23 = 0;
    lVar25 = lVar1;
    do {
      iVar9 = *(int *)((int)lVar25 + 0xc0);
      iVar10 = *(int *)(iVar9 + 0x78);
      uVar11 = *(undefined4 *)(DAT_00a1a85c + *(int *)(iVar10 + 0x60) * 0x20 + 0x10);
      *(undefined1 *)(iVar9 + 0x20) = 6;
      fVar5 = g_heroPosition.x - *(float *)(param_1 + 0x10);
      fVar3 = g_heroPosition.y - *(float *)(param_1 + 0x14);
      fVar4 = ABS(fVar5);
      fVar6 = ABS(fVar3);
      *(float *)(puVar12 + 0x15) = fVar5;
      *(float *)((int)puVar12 + 0xac) = fVar3;
      *(float *)(puVar12 + 0x16) = fVar4 - fVar6;
      dVar28 = 0.0;
      uVar18 = (ulonglong)(*(uint *)(puVar12 + 0x15) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0x16) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar12 + 0xac) >> 0x1d) & 4;
      fVar5 = ABS(*(float *)(puVar12 + 0x15));
      if (*(float *)(puVar12 + 0x16) - 0.0 < 0.0) {
        fVar5 = fVar6;
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar3 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      fVar15 = ABS(*(float *)((int)puVar12 + 0xac));
      if (*(float *)(puVar12 + 0x16) - 0.0 < 0.0) {
        fVar15 = fVar4;
      }
      if (0.0 < fVar5) {
        lVar19 = uVar16 - 0x150;
        lVar21 = uVar16 - 0x84;
        lVar20 = uVar16 - 0x94;
        lVar27 = 2;
        fVar5 = (fVar15 - fVar5) / (fVar15 + fVar5);
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar12 + 0x1b) = fVar5;
        *(float *)(puVar12 + 0x1a) = fVar5;
        *(float *)((int)puVar12 + 0xd4) = fVar5;
        *(float *)((int)puVar12 + 0xcc) = fVar5;
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar12 + 0x1a) = *(float *)(puVar12 + 0x1a) * fVar4;
        *(float *)((int)puVar12 + 0xd4) = *(float *)((int)puVar12 + 0xd4) * fVar5;
        *(float *)(puVar12 + 0x1b) = *(float *)(puVar12 + 0x1b) * fVar5 * fVar4;
        do {
          *(float *)((int)lVar19 + 0xcc) = *(float *)((int)lVar19 + 0xbc) * fVar5 * fVar5;
          iVar13 = (int)lVar20;
          lVar20 = lVar20 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar13 + 4) * fVar5 * fVar5;
          lVar21 = lVar21 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar21 = uVar16 - 0x94;
        pfVar17 = (float *)&DAT_007358e0;
        lVar19 = lVar1;
        lVar20 = lVar21;
        do {
          fVar5 = *pfVar17;
          fVar4 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar19 + 0xcc) = *(float *)((int)lVar19 + 0xcc) * fVar5;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar4;
          lVar20 = lVar20 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar20 = 2;
        lVar19 = lVar1;
        do {
          iVar13 = (int)lVar19;
          lVar19 = lVar19 + 0x10;
          iVar14 = (int)lVar21;
          lVar21 = lVar21 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar13 + 0xcc)) +
                            *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                           *(float *)(iVar14 + 0xc));
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        dVar28 = (double)((float)(dVar28 + dVar32) * fVar6 + fVar3);
      }
      *(float *)(iVar9 + 0x48) = (float)dVar28;
      *(int *)(iVar10 + 100) = DAT_0096a244;
      *(undefined4 *)(iVar10 + 0x68) = DAT_0096a248;
      mobyutil::MB_PathMoveDist
                (-(double)DAT_007fec0c,uVar11,iVar9 + 0x10,iVar10 + 100,iVar10 + 0x68,0x800000,0);
      *(undefined4 *)(iVar10 + 0x9c) = 0;
      *(undefined4 *)(iVar10 + 0x98) = 0;
      *(undefined4 *)(iVar10 + 0x94) = 0;
      *(undefined4 *)(iVar10 + 0x90) = 0;
      *(int *)(iVar10 + 0xf8) = iVar23;
      *(int *)(iVar10 + 0xfc) = iVar23 + 1;
      if (*(int *)(iVar10 + 0xf0) != -1) {
        lights::DeletePointLight(*(int *)(iVar10 + 0xf0));
        *(undefined4 *)(iVar10 + 0xf0) = 0xffffffff;
      }
      iVar26 = iVar26 + 1;
      iVar23 = iVar23 + 2;
      lVar25 = lVar25 + 4;
    } while (iVar26 < 3);
  }
  return;
}



//==== 002effe0  ns=mobyupdate_helpers  size=0x5b4
// sig: undefined M1412_002effe0(void)
// callers(0): 
// callees(5): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1412_002effe0(int param_1)

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
  float local_150 [38];
  
  iVar9 = *(int *)(param_1 + 0x78);
  dVar34 = (double)*(float *)(iVar9 + 0xe4);
  dVar35 = (double)*(float *)(iVar9 + 0xe0);
  fVar5 = (float)((double)GameCamera.posY - dVar34);
  dVar33 = (double)*(float *)(iVar9 + 0xe8);
  fVar6 = (float)((double)GameCamera.posX - dVar35);
  fVar7 = (float)((double)GameCamera.posZ - dVar33);
  dVar27 = 0.0;
  dVar28 = 1.0;
  dVar31 = (double)(float)GameCamera.field8_0x14c;
  fVar8 = fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5;
  dVar23 = dVar27;
  dVar24 = dVar27;
  dVar25 = dVar27;
  if (SQRT(fVar8) != 0.0) {
    fVar1 = 1.0 / SQRT(fVar8);
    fVar1 = -(fVar8 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
    fVar1 = -(fVar8 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
    fVar1 = -(fVar8 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
    dVar25 = (double)(fVar6 * fVar1);
    dVar24 = (double)(fVar5 * fVar1);
    dVar23 = (double)(fVar7 * fVar1);
  }
  fVar5 = (float)((double)DAT_00969f78 * dVar25 -
                 (double)(float)((double)hero::g_heroGravityDir * dVar23));
  fVar6 = (float)((double)DAT_00969f74 * dVar23 - (double)(float)((double)DAT_00969f78 * dVar24));
  fVar7 = (float)((double)hero::g_heroGravityDir * dVar24 -
                 (double)(float)((double)DAT_00969f74 * dVar25));
  dVar26 = -1.0;
  fVar8 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
  fVar1 = -1.0 / fVar8;
  dVar17 = dVar27;
  if (0.0 - fVar8 < 0.0) {
    dVar17 = (double)(fVar6 * fVar1);
  }
  dVar18 = dVar27;
  if (0.0 - fVar8 < 0.0) {
    dVar18 = (double)(fVar5 * fVar1);
  }
  dVar19 = dVar27;
  if (0.0 - fVar8 < 0.0) {
    dVar19 = (double)(fVar7 * fVar1);
  }
  if (fVar8 - 0.0 < 0.0) {
    dVar17 = (double)(fVar6 * fVar1);
  }
  if (fVar8 - 0.0 < 0.0) {
    dVar18 = (double)(fVar5 * fVar1);
  }
  if (fVar8 - 0.0 < 0.0) {
    dVar19 = (double)(fVar7 * fVar1);
  }
  dVar29 = (double)(float)(dVar25 * dVar18 - (double)(float)(dVar24 * dVar17));
  dVar32 = (double)(float)(dVar24 * dVar19 - (double)(float)(dVar23 * dVar18));
  dVar30 = (double)(float)(dVar23 * dVar17 - (double)(float)(dVar25 * dVar19));
  draw::GetEffectTex(0xb);
  idol_draw::PackCmd(0,2,0,1,0x80);
  stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(1,1,0,0,0,0);
  pfVar14 = (float *)&DAT_007fec40;
  lVar16 = 4;
  pfVar15 = local_150;
  pfVar13 = pfVar14;
  pfVar12 = pfVar15;
  do {
    fVar6 = *pfVar13;
    fVar5 = (float)((double)fVar6 * 0.4000000059604645);
    dVar20 = (double)fVar5;
    *pfVar12 = fVar5;
    fVar5 = pfVar13[1];
    pfVar12[1] = fVar5 * 0.4;
    dVar21 = (double)(pfVar13[2] * 0.4);
    pfVar12[2] = pfVar13[2] * 0.4;
    dVar22 = (double)pfVar13[3];
    pfVar13 = pfVar13 + 4;
    pfVar12[3] = (float)((double)fVar6 * (double)(float)(dVar31 * 0.4000000059604645) + dVar22);
    *pfVar12 = (float)(dVar22 * dVar35 +
                      (double)(float)(dVar21 * dVar32 +
                                     (double)(float)(dVar20 * dVar25 +
                                                    (double)(fVar5 * (float)(dVar17 * 
                                                  0.4000000059604645)))));
    pfVar12[1] = (float)(dVar22 * dVar34 +
                        (double)(float)(dVar21 * dVar30 +
                                       (double)(float)(dVar20 * dVar24 +
                                                      (double)(fVar5 * (float)(dVar18 * 
                                                  0.4000000059604645)))));
    pfVar12[2] = (float)(dVar22 * dVar33 +
                        (double)(float)(dVar21 * dVar29 +
                                       (double)(float)(dVar20 * dVar23 +
                                                      (double)(fVar5 * (float)(dVar19 * 
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
  dVar31 = (double)(fVar3 * fVar3 + fVar4 * fVar4 + fVar1 * fVar1);
  dVar23 = dVar27;
  dVar24 = dVar27;
  dVar25 = dVar27;
  if ((double)(float)SQRT(dVar31) != dVar27) {
    dVar23 = 1.0 / SQRT(dVar31);
    dVar23 = (double)(float)(-(double)(float)((double)(float)(dVar31 * dVar23) * dVar23 - dVar28) *
                             (double)(float)(dVar23 * 0.5) + dVar23);
    dVar23 = (double)(float)(-(double)(float)((double)(float)(dVar31 * dVar23) * dVar23 - dVar28) *
                             (double)(float)(dVar23 * 0.5) + dVar23);
    fVar2 = (float)(-(double)(float)((double)(float)(dVar31 * dVar23) * dVar23 - dVar28) *
                    (double)(float)(dVar23 * 0.5) + dVar23);
    dVar25 = (double)(fVar4 * fVar2);
    dVar24 = (double)(fVar1 * fVar2);
    dVar23 = (double)(fVar3 * fVar2);
  }
  fVar3 = (float)((double)DAT_00969f78 * dVar25 -
                 (double)(float)((double)hero::g_heroGravityDir * dVar23));
  fVar4 = (float)((double)DAT_00969f74 * dVar23 - (double)(float)((double)DAT_00969f78 * dVar24));
  fVar2 = (float)((double)hero::g_heroGravityDir * dVar24 -
                 (double)(float)((double)DAT_00969f74 * dVar25));
  lVar16 = 4;
  dVar28 = (double)SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3);
  fVar10 = (float)GameCamera.field8_0x14c * 0.2;
  fVar1 = (float)(dVar26 / dVar28);
  dVar31 = dVar27;
  if (dVar27 - dVar28 < 0.0) {
    dVar31 = (double)(fVar4 * fVar1);
  }
  dVar33 = dVar27;
  if (dVar27 - dVar28 < 0.0) {
    dVar33 = (double)(fVar3 * fVar1);
  }
  dVar34 = dVar27;
  if (dVar27 - dVar28 < 0.0) {
    dVar34 = (double)(fVar2 * fVar1);
  }
  if (dVar28 - dVar27 < 0.0) {
    dVar31 = (double)(fVar4 * fVar1);
  }
  if (dVar28 - dVar27 < 0.0) {
    dVar33 = (double)(fVar3 * fVar1);
  }
  if (dVar28 - dVar27 < 0.0) {
    dVar34 = (double)(fVar2 * fVar1);
  }
  do {
    fVar1 = *pfVar14;
    fVar3 = fVar1 * 0.2;
    dVar27 = (double)fVar3;
    *pfVar15 = fVar3;
    fVar3 = pfVar14[1];
    pfVar15[1] = fVar3 * 0.2;
    fVar2 = pfVar14[2] * 0.2;
    pfVar15[2] = fVar2;
    fVar4 = pfVar14[3];
    pfVar14 = pfVar14 + 4;
    pfVar15[3] = fVar4 * fVar8 + fVar1 * fVar10;
    *pfVar15 = fVar4 * fVar6 +
               fVar2 * (float)(dVar24 * dVar34 - (double)(float)(dVar23 * dVar33)) +
               (float)(dVar27 * dVar25 + (double)(fVar3 * (float)(dVar31 * 0.20000000298023224)));
    pfVar15[1] = fVar4 * fVar5 +
                 fVar2 * (float)(dVar23 * dVar31 - (double)(float)(dVar25 * dVar34)) +
                 (float)(dVar27 * dVar24 + (double)(fVar3 * (float)(dVar33 * 0.20000000298023224)));
    pfVar15[2] = fVar4 * fVar7 +
                 fVar2 * (float)(dVar25 * dVar33 - (double)(float)(dVar24 * dVar31)) +
                 (float)(dVar27 * dVar23 + (double)(fVar3 * (float)(dVar34 * 0.20000000298023224)));
    pfVar15 = pfVar15 + 4;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  draw::FastDrawQuad(local_150,0,0,uVar11,9);
  return;
}



