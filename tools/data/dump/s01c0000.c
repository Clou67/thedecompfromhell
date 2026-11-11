//==== 001c00b8  ns=mobyupdate_helpers  size=0x948
// sig: undefined M1106_001c00b8(void)
// callers(0): 
// callees(11): 00057820 collproc::CollLine; 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 000f1114 mobyfunc::GetBonePosition; 0010de78 mobyutil::MB_WrapRot; 00130810 partupd::SpawnPart_58; 00502730 fastfunc::FastIntToDouble; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0; 005c8318 rand

void mobyupdate_helpers::M1106_001c00b8(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  undefined1 local_1b0 [16];
  float local_1a0 [4];
  undefined4 local_190 [4];
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  undefined1 local_160 [168];
  
  iVar1 = *(int *)(param_1 + 0x78);
  dVar8 = (double)fastfunc::FastIntToDouble(worldUpdateTime);
  dVar10 = 0.10000000149011612;
  fVar14 = mobyutil::MB_WrapRot((float)(dVar8 * 0.09090909361839294));
  fVar14 = fVar14 + 1.5707963;
  fVar4 = 3.1415925 - fVar14;
  if (fVar14 - (3.1415925 - fVar14) < 0.0) {
    fVar4 = fVar14;
  }
  fVar5 = -3.1415925 - fVar14;
  if ((-3.1415925 - fVar14) - fVar4 < 0.0) {
    fVar5 = fVar4;
  }
  fVar2 = fVar5 * fVar5;
  fVar14 = fVar2 * fVar2 * fVar5;
  fVar4 = fVar2 * fVar14;
  mobyutil::MB_WrapRot
            ((float)(dVar8 * dVar10 +
                    (double)((fVar2 * fVar4 * 2.601887e-06 +
                             fVar4 * -0.0001980741 +
                             fVar14 * 0.0083330255 + fVar2 * fVar5 * -0.16666657 + fVar5) *
                            1.5707964)));
  mobyfunc::GetBonePosition(param_1,2,local_1a0);
  dVar8 = 0.0;
  iVar6 = collproc::CollLine(local_1a0,local_1b0,2,param_1,0);
  fVar5 = CollOutput.ip.z;
  fVar4 = CollOutput.ip.y;
  fVar14 = CollOutput.ip.x;
  if (iVar6 != 0) {
    uVar7 = rand();
    dVar10 = 0.5;
    fVar2 = animationSpeed * (float)((double)(longlong)(int)((uVar7 & 1) + 0x2d) + 0.5);
    uVar7 = rand();
    fVar3 = animationSpeed * (float)((double)(longlong)(int)((uVar7 & 7) + 0x37) + dVar10);
    uVar7 = rand();
    dVar8 = 1.0;
    partupd::SpawnPart_58
              (0x3ff0000000000000,0x3ff0000000000000,local_1b0,0,(int)fVar2 & 0xff,(int)fVar3 & 0xff
               ,1,(int)(animationSpeed *
                       (float)((double)(longlong)(int)((uVar7 & 3) + 0xd) + dVar10)) & 0xff,param_1)
    ;
    if (*(int *)(iVar1 + 0x15c) != 0) {
      dVar13 = 45.5;
      iVar6 = 0;
      dVar12 = 55.5;
      dVar11 = 13.5;
      do {
        collproc::CollLine(local_180,local_170,2,param_1,0);
        if (iVar6 == 2) {
          uVar7 = rand();
          fVar2 = animationSpeed * (float)((double)(longlong)(int)((uVar7 & 1) + 0x2d) + dVar10);
          uVar7 = rand();
          fVar3 = animationSpeed * (float)((double)(longlong)(int)((uVar7 & 7) + 0x37) + dVar10);
          uVar7 = rand();
          partupd::SpawnPart_58
                    (dVar8,dVar8,local_190,0,(int)fVar2 & 0xff,(int)fVar3 & 0xff,1,
                     (int)(animationSpeed *
                          (float)((double)(longlong)(int)((uVar7 & 3) + 0xd) + dVar10)) & 0xff,
                     param_1);
        }
        else {
          dVar9 = (double)animationSpeed;
          partupd::SpawnPart_58
                    (dVar8,dVar8,local_190,1,(int)(dVar9 * dVar13) & 0xff,
                     (int)(dVar9 * dVar12) & 0xff,1,(int)(dVar9 * dVar11) & 0xff,param_1);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 4);
    }
    *(float *)(iVar1 + 0x150) = fVar14;
    *(float *)(iVar1 + 0x154) = fVar4;
    *(float *)(iVar1 + 0x158) = fVar5;
  }
  *(float *)(iVar1 + 0x15c) = (float)dVar8;
  draw::GetEffectTex(0x3b);
  stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(0,1,0,0,0,0);
  idol_draw::PackCmd(0,2,0,1,0x80);
  draw::FastDrawQuad(local_160,0,1,EffectTexHeaders,9);
  return;
}



//==== 001c0a10  ns=mobyupdate_helpers  size=0x30c
// sig: undefined M1106_001c0a10(void)
// callers(0): 
// callees(6): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 000f1114 mobyfunc::GetBonePosition; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1106_001c0a10(undefined4 param_1)

{
  float local_100 [4];
  undefined1 local_f0 [152];
  
  mobyfunc::GetBonePosition(param_1,4,local_100);
  draw::GetEffectTex(0x3c);
  stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(0,1,0,0,0,0);
  idol_draw::PackCmd(0,2,0,1,0x80);
  draw::FastDrawQuad(local_f0,0,1,EffectTexHeaders,9);
  return;
}



//==== 001c0d58  ns=mobyupdate_helpers  size=0x660
// sig: undefined M1106_001c0d58(void)
// callers(1): 001c13d0 mobyupdate_helpers::M1106_001c13d0
// callees(14): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 000f1114 mobyfunc::GetBonePosition; 000fe610 mobyutil::MB_SphericalToVector; 0010de78 mobyutil::MB_WrapRot; 00174f80 vuchain::SetGSReg; 00502578 fastfunc::FastWrapRot; 005026dc fastfunc::FastFrac; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0; 00502ffc stub::VU1_addGSregister

void mobyupdate_helpers::M1106_001c0d58
               (double param_1,double param_2,double param_3,double param_4,double param_5,
               int param_6,int param_7)

{
  byte bVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  double dVar10;
  double extraout_f1;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float ang1;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  undefined1 local_1c0 [32];
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  uint local_180;
  uint local_17c;
  uint local_178;
  uint local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 auStack_130 [8];
  ulonglong local_128;
  double local_120;
  double local_118;
  double local_110;
  float local_108;
  float local_104;
  ulonglong local_100;
  double local_f8;
  double local_f0;
  float local_e8;
  double local_e0;
  float local_d8;
  float local_d4;
  
  local_e8 = (float)param_3;
  bVar1 = *(byte *)(*(int *)(param_6 + 0x78) + 0x1c6);
  uVar9 = (ulonglong)bVar1 << 0x18 | (ulonglong)bVar1 << 0x10 | (ulonglong)CONCAT11(bVar1,bVar1);
  local_128 = ZEXT48(&GSmem);
  local_100 = uVar9;
  local_f8 = param_4;
  uVar3 = stub::VU1_addGSregister(GSmem.zbuf >> 0xd,1,1);
  vuchain::SetGSReg(0x21,uVar3);
  uVar3 = draw::GetEffectTex(0x3c);
  uVar4 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  uVar5 = FUN_00502f08(0,0,0,0,0,0);
  uVar6 = idol_draw::PackCmd(1,2,2,0,0xa0);
  dVar10 = (double)fastfunc::FastIntToDouble(0);
  uVar7 = fastfunc::FastDoubleToInt((double)(float)(dVar10 * param_4));
  local_180 = (uint)((uVar7 & 0xffffffff) << 0x18) | 0x404040 | (uint)uVar9;
  local_17c = local_180;
  local_178 = local_180;
  local_174 = local_180;
  local_150 = uVar5;
  local_148 = uVar3;
  local_140 = uVar4;
  local_138 = uVar6;
  dVar10 = (double)fastfunc::FastIntToDouble(param_7 + worldUpdateTime);
  local_104 = (float)(dVar10 * param_1);
  dVar10 = (double)local_104;
  uVar3 = mobyfunc::GetBonePosition(param_6,9,&local_1d0);
  local_118 = (double)local_1d0;
  local_d4 = local_1cc;
  local_110 = (double)local_1c4;
  local_108 = local_1c8 - (float)(param_2 - 0.800000011920929);
  uVar3 = fastfunc::FastFrac((double)(float)(dVar10 * -0.009999999776482582),uVar3,auStack_130);
  local_170 = (float)extraout_f1;
  local_160 = (float)extraout_f1;
  dVar13 = 1.0;
  local_168 = (float)(extraout_f1 + 1.0);
  local_158 = local_168;
  dVar10 = (double)fastfunc::FastFrac((double)(float)(dVar10 * -0.019999999552965164),uVar3,
                                      auStack_130);
  local_15c = (float)(dVar10 + dVar13);
  local_16c = (float)dVar10;
  local_164 = (float)dVar10;
  local_e0 = (double)(float)(param_5 - param_4);
  dVar10 = 0.0625;
  local_d8 = -2.7488937;
  local_120 = 3.1415927410125732;
  local_154 = local_15c;
  do {
    local_19c = local_d4;
    local_1a0 = (float)local_118;
    local_198 = local_108;
    local_194 = (float)local_110;
    local_190 = (float)local_118;
    local_18c = local_d4;
    local_188 = local_108;
    local_184 = (float)local_110;
    dVar13 = local_f8;
    dVar11 = (double)fastfunc::FastIntToDouble(0);
    uVar7 = fastfunc::FastDoubleToInt((double)(float)(dVar11 * dVar13));
    uVar9 = local_100 | 0x404040;
    uVar7 = (uVar7 & 0xff) << 0x18 | uVar9;
    local_178 = (uint)uVar7;
    dVar11 = (double)(float)((double)local_e8 * dVar10 + -1.5707963705062866);
    local_f0 = (double)(float)((double)local_e8 - 1.5707963705062866);
    local_174 = local_178;
    if (dVar11 <= local_f0) {
      dVar15 = 0.39269909262657166;
      dVar16 = 0.0;
      dVar14 = (double)(local_104 * 0.02 + local_d8);
      dVar17 = 0.6000000238418579;
      dVar18 = 0.375;
      uVar8 = uVar7;
      do {
        dVar13 = (double)(float)(local_e0 * dVar10 + dVar13);
        local_180 = (uint)uVar7;
        local_17c = (uint)uVar8;
        dVar12 = (double)fastfunc::FastIntToDouble(0);
        uVar7 = fastfunc::FastDoubleToInt((double)(float)(dVar12 * dVar13));
        local_178 = (uint)((uVar7 & 0xffffffff) << 0x18) | (uint)uVar9;
        local_174 = local_178;
        ang1 = mobyutil::MB_WrapRot((float)dVar14);
        dVar12 = (double)ang1;
        mobyutil::MB_SphericalToVector((float)param_2,ang1,(float)dVar11,&local_1a0);
        dVar12 = (double)fastfunc::FastWrapRot((float)dVar12,(float)dVar15);
        mobyutil::MB_SphericalToVector((float)param_2,(float)dVar12,(float)dVar11,&local_190);
        dVar12 = (double)local_188 - dVar18;
        if (dVar16 - dVar11 < 0.0) {
          dVar12 = (double)local_188 + dVar17;
        }
        local_190 = local_190 + local_1d0;
        dVar2 = (double)local_198 - dVar18;
        if (dVar16 - dVar11 < 0.0) {
          dVar2 = (double)local_198 + dVar17;
        }
        local_1a0 = local_1a0 + local_1d0;
        local_19c = local_19c + local_1cc;
        local_180 = local_180 >> 0x18 |
                    local_180 >> 8 & 0xff00 | local_180 << 0x18 | (local_180 & 0xff00) << 8;
        local_18c = local_18c + local_1cc;
        local_17c = local_17c >> 0x18 |
                    local_17c >> 8 & 0xff00 | local_17c << 0x18 | (local_17c & 0xff00) << 8;
        local_188 = (float)dVar12 + local_1c8;
        local_178 = local_178 >> 0x18 |
                    local_178 >> 8 & 0xff00 | local_178 << 0x18 | (local_178 & 0xff00) << 8;
        local_198 = (float)dVar2 + local_1c8;
        local_174 = local_174 >> 0x18 |
                    local_174 >> 8 & 0xff00 | local_174 << 0x18 | (local_174 & 0xff00) << 8;
        draw::FastDrawQuad(local_1c0,0,1,EffectTexHeaders,9);
        dVar11 = (double)(float)((double)local_e8 * dVar10 + dVar11);
        local_180 = local_180 >> 0x18 |
                    local_180 >> 8 & 0xff00 | local_180 << 0x18 | (local_180 & 0xff00) << 8;
        local_17c = local_17c >> 0x18 |
                    local_17c >> 8 & 0xff00 | local_17c << 0x18 | (local_17c & 0xff00) << 8;
        uVar7 = (ulonglong)(local_178 >> 0x18) |
                (ulonglong)(local_178 >> 8) & 0xff00 |
                ((ulonglong)local_178 & 0xff) << 0x18 | ((ulonglong)local_178 & 0xff00) << 8;
        uVar8 = (ulonglong)(local_174 >> 0x18) |
                (ulonglong)(local_174 >> 8) & 0xff00 |
                ((ulonglong)local_174 & 0xff) << 0x18 | ((ulonglong)local_174 & 0xff00) << 8;
        local_178 = (uint)uVar7;
        local_174 = (uint)uVar8;
      } while (dVar11 <= local_f0);
    }
    local_d8 = local_d8 + 0.3926991;
  } while ((double)local_d8 < local_120);
  uVar3 = stub::VU1_addGSregister(*(int *)((int)local_128 + 8) >> 0xd,1,0);
  vuchain::SetGSReg(0x21,uVar3);
  return;
}



//==== 001c13d0  ns=mobyupdate_helpers  size=0xa8
// sig: undefined M1106_001c13d0(void)
// callers(0): 
// callees(1): 001c0d58 mobyupdate_helpers::M1106_001c0d58

void mobyupdate_helpers::M1106_001c13d0(int param_1)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x78) + 0x1c8);
  dVar3 = (double)*(float *)(*(int *)(param_1 + 0x78) + 0x1c8);
  uVar2 = (int)uVar1 >> 0x1f;
  dVar4 = 3.1415927410125732;
  if (((int)((uVar2 >> 1 ^ uVar1) - uVar2) < 0x3f4ccccd) &&
     (dVar4 = (double)((float)(dVar3 * 3.0434179306030273) * 1.25 + 0.09817477),
     3.1415927410125732 < dVar4)) {
    dVar4 = 3.1415927410125732;
  }
  M1106_001c0d58(0x3ff0000000000000,0x4017333340000000,dVar4,0x3ff0000000000000,dVar3,param_1,0);
  return;
}



//==== 001c14d0  ns=mobyupdate_helpers  size=0x560
// sig: undefined M1106_001c14d0(void)
// callers(1): 001c1a58 mobyupdate_helpers::M1106_001c1a58
// callees(8): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 0010de78 mobyutil::MB_WrapRot; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mobyupdate_helpers::M1106_001c14d0
               (double param_1,double param_2,int param_3,undefined8 param_4,int param_5,
               undefined8 param_6,uint param_7)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
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
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  double dVar26;
  ulonglong in_f21;
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
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  
  uVar10 = ZEXT48(&stack0x00000000);
  puVar9 = (ulonglong *)(uVar10 - 0x230);
  *puVar9 = uVar10;
  puVar9[0x48] = in_LR;
  puVar9[0x38] = in_f18;
  puVar9[0x39] = in_f19;
  puVar9[0x3a] = in_f20;
  puVar9[0x3b] = in_f21;
  puVar9[0x3c] = in_f22;
  puVar9[0x3d] = in_f23;
  puVar9[0x3e] = in_f24;
  puVar9[0x3f] = in_f25;
  puVar9[0x40] = in_f26;
  puVar9[0x41] = in_f27;
  puVar9[0x42] = in_f28;
  puVar9[0x43] = in_f29;
  puVar9[0x44] = in_f30;
  puVar9[0x45] = in_f31;
  puVar9[0x37] = unaff_r31;
  puVar9[0x35] = unaff_r29;
  puVar9[0x36] = unaff_r30;
  uVar7 = *(uint *)(param_3 + 0x78);
  param_5 = param_5 + worldUpdateTime;
  puVar9[0x34] = unaff_r28;
  puVar9[0x33] = unaff_r27;
  puVar9[0x32] = unaff_r26;
  dVar15 = (double)fastfunc::FastIntToDouble(param_5);
  dVar15 = (double)(float)(dVar15 * param_2);
  if (*(int *)(uVar7 + 0x164) == 4) {
    dVar16 = (double)fastfunc::FastIntToDouble((int)param_7 >> 0x18);
    dVar17 = (double)fastfunc::FastIntToDouble(*(undefined4 *)(uVar7 + 0x160));
    dVar16 = (double)(float)(dVar16 * (double)(float)(dVar17 / (double)(longlong)
                                                                       (animationSpeed * 20.5)));
    if (dVar16 - 0.0 < 0.0) {
      dVar16 = 0.0;
    }
    uVar11 = fastfunc::FastDoubleToInt(dVar16);
    param_7 = (uint)((uVar11 & 0xff) << 0x18) | param_7 & 0xffffff;
  }
  else if (4 < *(int *)(uVar7 + 0x164)) {
    return;
  }
  uVar11 = draw::GetEffectTex(0x3d);
  uVar12 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  uVar13 = FUN_00502f08(0,1,0,0,0,0);
  uVar14 = idol_draw::PackCmd(0,2,0,1,0x80);
  puVar9[0x1d] = uVar11;
  *(undefined4 *)(puVar9 + 0x18) = 0;
  *(undefined4 *)(puVar9 + 0x1a) = 0;
  *(undefined4 *)(puVar9 + 0x19) = 0x3f800000;
  *(undefined4 *)(puVar9 + 0x1b) = 0x3f800000;
  *(undefined4 *)((int)puVar9 + 0xc4) = 0;
  *(undefined4 *)((int)puVar9 + 0xcc) = 0;
  *(undefined4 *)((int)puVar9 + 0xd4) = 0x3f000000;
  *(undefined4 *)((int)puVar9 + 0xdc) = 0x3f000000;
  uVar2 = *(undefined4 *)(uVar7 + 0x110);
  puVar9[0x1e] = uVar12;
  puVar9[0x1c] = uVar13;
  *(undefined4 *)(puVar9 + 0x10) = uVar2;
  puVar9[0x1f] = uVar14;
  *(undefined4 *)((int)puVar9 + 0x84) = *(undefined4 *)(uVar7 + 0x114);
  *(undefined4 *)(puVar9 + 0x11) = *(undefined4 *)(uVar7 + 0x118);
  uVar2 = *(undefined4 *)(uVar7 + 0x11c);
  *(uint *)((int)puVar9 + 0xbc) = param_7;
  *(undefined4 *)((int)puVar9 + 0x8c) = uVar2;
  uVar2 = *(undefined4 *)(uVar7 + 0x140);
  *(uint *)(puVar9 + 0x17) = param_7;
  *(undefined4 *)(puVar9 + 0x14) = uVar2;
  *(uint *)((int)puVar9 + 0xb4) = param_7;
  uVar2 = *(undefined4 *)(uVar7 + 0x144);
  *(uint *)(puVar9 + 0x16) = param_7;
  *(undefined4 *)((int)puVar9 + 0xa4) = uVar2;
  *(undefined4 *)(puVar9 + 0x15) = *(undefined4 *)(uVar7 + 0x148);
  auVar36 = loadVectorLeftIndexed(0x14c,(ulonglong)uVar7);
  auVar38 = loadVectorRightIndexed(0x15c,(ulonglong)uVar7);
  uVar2 = *(undefined4 *)(uVar7 + 0x14c);
  auVar37 = (auVar36 | auVar38) >> 0x60 & (undefined1  [16])0xffffffff;
  uVar8 = storeVectorElementWordIndexed
                    (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0xac,
                     uVar10 - 0x230);
  *(undefined4 *)((int)puVar9 + 0xac) = uVar8;
  auVar37 = vectorPermute(*(undefined1 (*) [16])(puVar9 + 0x14),auVar36 | auVar38,_DAT_001c1490);
  *(undefined4 *)((int)puVar9 + 0x10c) = *(undefined4 *)((int)puVar9 + 0x7c);
  *(undefined4 *)(puVar9 + 0x21) = *(undefined4 *)(puVar9 + 0xf);
  *(undefined4 *)((int)puVar9 + 0x104) = *(undefined4 *)((int)puVar9 + 0x74);
  *(undefined4 *)(puVar9 + 0x20) = *(undefined4 *)(puVar9 + 0xe);
  *(undefined4 *)((int)puVar9 + 0x11c) = *(undefined4 *)((int)puVar9 + 0x8c);
  *(undefined4 *)(puVar9 + 0x23) = *(undefined4 *)(puVar9 + 0x11);
  *(undefined4 *)((int)puVar9 + 0x114) = *(undefined4 *)((int)puVar9 + 0x84);
  *(undefined4 *)(puVar9 + 0x22) = *(undefined4 *)(puVar9 + 0x10);
  *(undefined4 *)((int)puVar9 + 300) = *(undefined4 *)((int)puVar9 + 0x9c);
  *(undefined4 *)(puVar9 + 0x25) = *(undefined4 *)(puVar9 + 0x13);
  *(undefined4 *)((int)puVar9 + 0x124) = *(undefined4 *)((int)puVar9 + 0x94);
  *(undefined4 *)(puVar9 + 0x24) = *(undefined4 *)(puVar9 + 0x12);
  *(undefined1 (*) [16])(puVar9 + 0x26) = auVar37;
  *(undefined4 *)((int)puVar9 + 0x14c) = *(undefined4 *)((int)puVar9 + 0xbc);
  *(undefined4 *)(puVar9 + 0x29) = *(undefined4 *)(puVar9 + 0x17);
  *(undefined4 *)((int)puVar9 + 0x144) = *(undefined4 *)((int)puVar9 + 0xb4);
  *(undefined4 *)(puVar9 + 0x28) = *(undefined4 *)(puVar9 + 0x16);
  *(undefined4 *)((int)puVar9 + 0x15c) = *(undefined4 *)((int)puVar9 + 0xcc);
  *(undefined4 *)(puVar9 + 0x2b) = *(undefined4 *)(puVar9 + 0x19);
  *(undefined4 *)((int)puVar9 + 0x154) = *(undefined4 *)((int)puVar9 + 0xc4);
  *(undefined4 *)(puVar9 + 0x2a) = *(undefined4 *)(puVar9 + 0x18);
  *(undefined4 *)((int)puVar9 + 0x16c) = *(undefined4 *)((int)puVar9 + 0xdc);
  *(undefined4 *)(puVar9 + 0x2d) = *(undefined4 *)(puVar9 + 0x1b);
  *(undefined4 *)((int)puVar9 + 0x164) = *(undefined4 *)((int)puVar9 + 0xd4);
  *(undefined4 *)(puVar9 + 0x2c) = *(undefined4 *)(puVar9 + 0x1a);
  *(undefined4 *)((int)puVar9 + 0x17c) = *(undefined4 *)((int)puVar9 + 0xec);
  *(undefined4 *)(puVar9 + 0x2f) = *(undefined4 *)(puVar9 + 0x1d);
  *(undefined4 *)((int)puVar9 + 0x174) = *(undefined4 *)((int)puVar9 + 0xe4);
  *(undefined4 *)(puVar9 + 0x2e) = *(undefined4 *)(puVar9 + 0x1c);
  *(undefined4 *)((int)puVar9 + 0x18c) = *(undefined4 *)((int)puVar9 + 0xfc);
  *(undefined4 *)(puVar9 + 0x31) = *(undefined4 *)(puVar9 + 0x1f);
  *(undefined4 *)((int)puVar9 + 0x184) = *(undefined4 *)((int)puVar9 + 0xf4);
  *(undefined4 *)(puVar9 + 0x30) = *(undefined4 *)(puVar9 + 0x1e);
  *(undefined4 *)(puVar9 + 0x20) = *(undefined4 *)(uVar7 + 0x120);
  *(undefined4 *)((int)puVar9 + 0x104) = *(undefined4 *)(uVar7 + 0x124);
  *(undefined4 *)(puVar9 + 0x21) = *(undefined4 *)(uVar7 + 0x128);
  *(undefined4 *)((int)puVar9 + 0x10c) = *(undefined4 *)(uVar7 + 300);
  *(undefined4 *)(puVar9 + 0x22) = *(undefined4 *)(uVar7 + 0x120);
  *(undefined4 *)((int)puVar9 + 0x114) = *(undefined4 *)(uVar7 + 0x124);
  *(undefined4 *)(puVar9 + 0x23) = *(undefined4 *)(uVar7 + 0x128);
  *(undefined4 *)((int)puVar9 + 0x11c) = *(undefined4 *)(uVar7 + 300);
  dVar17 = -3.1415927410125732;
  dVar26 = 3.665191650390625;
  dVar27 = 0.019999999552965164;
  dVar28 = 1.570796251296997;
  dVar29 = 3.141592502593994;
  dVar30 = -3.141592502593994;
  dVar31 = -0.16666656732559204;
  dVar32 = 0.008333025500178337;
  dVar33 = -0.0001980741071747616;
  dVar34 = 2.601886990305502e-06;
  dVar35 = 0.5235987901687622;
  dVar16 = dVar17;
  do {
    *(undefined4 *)(puVar9 + 0xe) = *(undefined4 *)(puVar9 + 0x10);
    *(undefined4 *)((int)puVar9 + 0x74) = *(undefined4 *)((int)puVar9 + 0x84);
    *(undefined4 *)(puVar9 + 0xf) = *(undefined4 *)(puVar9 + 0x11);
    *(undefined4 *)((int)puVar9 + 0x7c) = *(undefined4 *)((int)puVar9 + 0x8c);
    *(undefined4 *)(puVar9 + 0x12) = *(undefined4 *)(puVar9 + 0x14);
    *(undefined4 *)((int)puVar9 + 0x94) = *(undefined4 *)((int)puVar9 + 0xa4);
    *(undefined4 *)(puVar9 + 0x13) = *(undefined4 *)(puVar9 + 0x15);
    *(undefined4 *)((int)puVar9 + 0x9c) = uVar2;
    fVar39 = mobyutil::MB_WrapRot((float)(dVar27 * dVar15 + dVar17));
    uVar8 = EffectTexHeaders;
    dVar21 = (double)fVar39;
    dVar20 = (double)(float)(dVar21 + dVar28);
    dVar18 = (double)(float)(dVar29 - dVar21);
    if (dVar21 - (double)(float)(dVar29 - dVar21) < 0.0) {
      dVar18 = dVar21;
    }
    dVar22 = (double)(float)(dVar29 - dVar20);
    if (dVar20 - (double)(float)(dVar29 - dVar20) < 0.0) {
      dVar22 = dVar20;
    }
    dVar19 = (double)(float)(dVar30 - dVar21);
    if ((double)(float)(dVar30 - dVar21) - dVar18 < 0.0) {
      dVar19 = dVar18;
    }
    dVar18 = (double)(float)(dVar30 - dVar20);
    if ((double)(float)(dVar30 - dVar20) - dVar22 < 0.0) {
      dVar18 = dVar22;
    }
    dVar21 = (double)(float)(dVar19 * dVar19);
    dVar20 = (double)(float)(dVar18 * dVar18);
    dVar24 = (double)(float)(dVar21 * (double)(float)(dVar21 * dVar19));
    dVar22 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar18));
    dVar23 = (double)(float)(dVar21 * dVar24);
    fVar3 = *(float *)(param_3 + 0xe4);
    dVar25 = (double)(float)(dVar20 * dVar22);
    fVar4 = *(float *)(param_3 + 0xd4);
    fVar5 = *(float *)(param_3 + 0xe8);
    fVar39 = (float)((double)(float)((double)(float)(dVar21 * dVar23) * dVar34 +
                                    (double)(float)(dVar23 * dVar33 +
                                                   (double)(float)(dVar24 * dVar32 +
                                                                  (double)(float)((double)(float)(
                                                  dVar21 * dVar19) * dVar31 + dVar19)))) * param_1);
    fVar1 = (float)((double)(float)((double)(float)(dVar20 * dVar25) * dVar34 +
                                   (double)(float)(dVar25 * dVar33 +
                                                  (double)(float)(dVar22 * dVar32 +
                                                                 (double)(float)((double)(float)(
                                                  dVar20 * dVar18) * dVar31 + dVar18)))) * param_1);
    fVar6 = *(float *)(param_3 + 0xd8);
    *(float *)(puVar9 + 0x14) =
         *(float *)(param_3 + 0xd0) * fVar1 +
         *(float *)(param_3 + 0xe0) * fVar39 + *(float *)(uVar7 + 0x140);
    *(float *)((int)puVar9 + 0xa4) = fVar4 * fVar1 + fVar3 * fVar39 + *(float *)(uVar7 + 0x144);
    *(float *)(puVar9 + 0x15) = fVar6 * fVar1 + fVar5 * fVar39 + *(float *)(uVar7 + 0x148);
    uVar2 = *(undefined4 *)(uVar7 + 0x14c);
    *(undefined4 *)((int)puVar9 + 0xac) = uVar2;
    if (dVar17 != dVar16) {
      draw::FastDrawQuad(uVar10 - 0x1c0,0,1,uVar8,9);
      *(undefined4 *)(puVar9 + 0x24) = *(undefined4 *)(puVar9 + 0x12);
      *(undefined4 *)((int)puVar9 + 0x124) = *(undefined4 *)((int)puVar9 + 0x94);
      *(undefined4 *)(puVar9 + 0x25) = *(undefined4 *)(puVar9 + 0x13);
      *(undefined4 *)((int)puVar9 + 300) = *(undefined4 *)((int)puVar9 + 0x9c);
      *(undefined4 *)(puVar9 + 0x26) = *(undefined4 *)(puVar9 + 0x14);
      *(undefined4 *)((int)puVar9 + 0x134) = *(undefined4 *)((int)puVar9 + 0xa4);
      *(undefined4 *)(puVar9 + 0x27) = *(undefined4 *)(puVar9 + 0x15);
      uVar2 = EffectTexHeaders;
      *(undefined4 *)((int)puVar9 + 0x13c) = *(undefined4 *)((int)puVar9 + 0xac);
      draw::FastDrawQuad(uVar10 - 0x130,0,0,uVar2,9);
      uVar2 = *(undefined4 *)((int)puVar9 + 0xac);
    }
    dVar17 = (double)(float)(dVar17 + dVar35);
  } while (dVar17 < dVar26);
                    /* WARNING: Read-only address (ram,0x001c1490) is written */
  return;
}



//==== 001c1a58  ns=mobyupdate_helpers  size=0x2d0
// sig: undefined M1106_001c1a58(void)
// callers(0): 
// callees(4): 00057820 collproc::CollLine; 0005e598 collproc::CollMobySphere; 0010581c mobyutil::SetCollDamIn; 001c14d0 mobyupdate_helpers::M1106_001c14d0
// strings: 001c1a3c: '?333@' (raw)

void mobyupdate_helpers::M1106_001c1a58
               (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 local_70 [16];
  undefined1 auStack_60 [56];
  
  iVar5 = *(int *)(param_1 + 0x78);
  fVar1 = *(float *)(iVar5 + 0x134);
  fVar2 = *(float *)(iVar5 + 0x130);
  fVar3 = *(float *)(iVar5 + 0x138);
  dVar14 = 0.0;
  fVar6 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (fVar6 == 0.0) {
    uVar4 = *(undefined4 *)(iVar5 + 0x13c);
    dVar10 = dVar14;
    dVar12 = dVar14;
    dVar13 = dVar14;
  }
  else {
    fVar6 = (*(float *)(iVar5 + 0x16c) * 0.8) / fVar6;
    uVar4 = *(undefined4 *)(iVar5 + 0x13c);
    dVar10 = (double)(fVar2 * fVar6);
    dVar13 = (double)(fVar1 * fVar6);
    dVar12 = (double)(fVar3 * fVar6);
  }
  *(undefined4 *)(iVar5 + 0x14c) = uVar4;
  *(undefined4 *)(iVar5 + 300) = uVar4;
  *(float *)(iVar5 + 0x140) = (float)(dVar10 + (double)*(float *)(iVar5 + 0x110));
  *(float *)(iVar5 + 0x144) = (float)(dVar13 + (double)*(float *)(iVar5 + 0x114));
  *(float *)(iVar5 + 0x148) = (float)(dVar12 + (double)*(float *)(iVar5 + 0x118));
  fVar1 = SQRT((float)(dVar12 * dVar12 +
                      (double)(float)(dVar10 * dVar10 + (double)(float)(dVar13 * dVar13))));
  dVar8 = (double)(*(float *)(iVar5 + 0x16c) / fVar1);
  dVar9 = dVar14;
  if (0.0 - fVar1 < 0.0) {
    dVar9 = (double)(float)(dVar10 * dVar8);
  }
  dVar11 = dVar14;
  if (0.0 - fVar1 < 0.0) {
    dVar11 = (double)(float)(dVar13 * dVar8);
  }
  if (0.0 - fVar1 < 0.0) {
    dVar14 = (double)(float)(dVar12 * dVar8);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar9 = (double)(float)(dVar10 * dVar8);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar11 = (double)(float)(dVar13 * dVar8);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar14 = (double)(float)(dVar12 * dVar8);
  }
  *(float *)(iVar5 + 0x120) = (float)(dVar9 + (double)*(float *)(iVar5 + 0x110));
  *(float *)(iVar5 + 0x124) = (float)(dVar11 + (double)*(float *)(iVar5 + 0x114));
  *(float *)(iVar5 + 0x128) = (float)(dVar14 + (double)*(float *)(iVar5 + 0x118));
  M1106_001c14d0(0x3ff0000000000000,0x3ff0000000000000,param_1,&DAT_001c1a30,0,param_4,0x20000080);
  M1106_001c14d0(0x3fe6666660000000,0x4000000000000000,param_1);
  M1106_001c14d0(0x3fd99999a0000000,0x4008000000000000,param_1);
  mobyutil::SetCollDamIn(0x3ff0008100000000,auStack_60,param_1,0x30000,&DAT_001c1a30,local_70);
  iVar7 = collproc::CollLine(iVar5 + 0x110,iVar5 + 0x120,0,param_1,auStack_60);
  if (iVar7 == 0) {
    collproc::CollMobySphere(0x3fe0000000000000,iVar5 + 0x120,&DAT_001c1a30,0,param_1,auStack_60);
  }
  return;
}



//==== 001c1d28  ns=mobyupdate_helpers  size=0xc4
// sig: undefined M1106_001c1d28(void)
// callers(2): 001c2500 mobyupdate_helpers::M1106_001c2500; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106
// callees(0): 

ulonglong mobyupdate_helpers::M1106_001c1d28(undefined8 param_1,int param_2,int *param_3)

{
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  
  bVar1 = *(int *)(param_2 + 0x170) != -1;
  if (bVar1) {
    *param_3 = *(int *)(param_2 + 0x170);
  }
  uVar3 = (ulonglong)bVar1;
  if (*(int *)(param_2 + 0x174) != -1) {
    uVar3 = uVar3 + 1;
    param_3[bVar1] = *(int *)(param_2 + 0x174);
  }
  if (*(int *)(param_2 + 0x178) != -1) {
    lVar2 = uVar3 << 2;
    uVar3 = uVar3 + 1;
    *(int *)((int)param_3 + (int)lVar2) = *(int *)(param_2 + 0x178);
  }
  bVar4 = *(byte *)(param_2 + 0x19c);
  if (((bVar4 & 1) == 0) && (*(int *)(param_2 + 0x17c) != -1)) {
    lVar2 = uVar3 << 2;
    uVar3 = uVar3 + 1;
    *(int *)((int)param_3 + (int)lVar2) = *(int *)(param_2 + 0x17c);
    bVar4 = *(byte *)(param_2 + 0x19c);
  }
  if (((bVar4 & 2) == 0) && (*(int *)(param_2 + 0x180) != -1)) {
    lVar2 = uVar3 << 2;
    uVar3 = uVar3 + 1;
    *(int *)((int)param_3 + (int)lVar2) = *(int *)(param_2 + 0x180);
    bVar4 = *(byte *)(param_2 + 0x19c);
  }
  if (((bVar4 & 4) == 0) && (*(int *)(param_2 + 0x184) != -1)) {
    lVar2 = uVar3 << 2;
    uVar3 = uVar3 + 1;
    *(int *)((int)param_3 + (int)lVar2) = *(int *)(param_2 + 0x184);
  }
  return uVar3;
}



//==== 001c1e18  ns=mobyupdate_helpers  size=0x668
// sig: undefined M1106_001c1e18(void)
// callers(1): 001c50b0 mobyupdate_unsorted::UpdateMoby_1106
// callees(14): 000b72b0 hero::TransitionMovement; 000f1e50 mobyfunc::SetLevelFlag; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00151e70 respawn::SetSpawnPoint; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 004d407c FUN_004d407c; 005026dc fastfunc::FastFrac

void mobyupdate_helpers::M1106_001c1e18(MobyInstance *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  u8 uVar2;
  float fVar3;
  short sVar4;
  MobyModeBit MVar5;
  uint uVar6;
  uint uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  ulonglong *puVar10;
  int iVar11;
  longlong lVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int iVar17;
  float *pfVar18;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  byte in_cr6;
  ulonglong in_LR;
  ulonglong uVar19;
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
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar31 [16];
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar1 = uVar14 - 0x120;
  puVar10 = (ulonglong *)lVar1;
  *puVar10 = uVar14;
  puVar10[0x26] = in_LR;
  puVar10[0x21] = unaff_r29;
  lVar12 = uVar14 - 0x40;
  puVar13 = (undefined4 *)lVar12;
  puVar13[3] = in_vr31_32_3;
  puVar13[2] = in_vr31_32_2;
  puVar13[1] = in_vr31_32_1;
  *puVar13 = in_vr31_32_0;
  puVar10[0x22] = unaff_r30;
  uVar2 = param_1->state;
  puVar10[0x23] = unaff_r31;
  puVar10[0x20] = unaff_r28;
  puVar10[0x1f] = unaff_r27;
  iVar11 = (int)param_2;
  if (uVar2 == '\n') goto LAB_001c23ec;
  uVar15 = mobyutil::MB_damage(param_1,0x330000,0);
  iVar17 = (int)uVar15;
  mobyutil::MB_HandleDamage(param_1,iVar17,param_3,0,puVar10 + 0xe,0,0,4);
  if (iVar17 != 0) {
    if (0 < *(int *)(iVar17 + 0x2c)) {
      sVar4 = *(short *)(iVar17 + 0x2a);
      in_cr6 = (sVar4 == 0xba) << 1;
      if (sVar4 == 0x131) {
        *(undefined4 *)(iVar17 + 0x2c) = 0x3e4ccccd;
      }
      else if (sVar4 == 0xba) {
        *(undefined4 *)(iVar17 + 0x2c) = 0x3f800000;
      }
      else if (sVar4 == 0x79) {
        *(undefined4 *)(iVar17 + 0x2c) = 0x3f800000;
      }
    }
    if (((*(int *)(iVar17 + 0x20) == 0) ||
        (sVar4 = *(short *)(*(int *)(iVar17 + 0x20) + 0xa6), sVar4 == 0x419)) || (sVar4 == 0x416)) {
      *(undefined4 *)(puVar10 + 0xe) = 1;
    }
  }
  if ((*(int *)(iVar11 + 0x1c8) < 1) && (*(char *)(iVar11 + 0x1c5) == '\0')) {
    if (1 < *(int *)(puVar10 + 0xe)) {
      auVar20 = loadVectorLeftIndexed(0x2c,uVar15);
      auVar30 = loadVectorLeftIndexed(lVar12,param_3);
      auVar21 = loadVectorRightIndexed(0x3c,uVar15);
      auVar22 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar31 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
      pfVar18 = (float *)param_3;
      fVar3 = *pfVar18;
      auVar22 = (auVar20 | auVar21) >> 0x60 & (undefined1  [16])0xffffffff;
      vectorCompareGreaterThanFloatingPoint
                (auVar31,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60);
      if ((bool)(in_cr6 >> 1 & 1)) {
        MVar5 = param_1->modeBits;
        *pfVar18 = 0.0;
        param_1->modeBits =
             MVar5 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
        *(undefined1 *)(iVar11 + 0x67) = 0x78;
        mobyutil::MB_UpdateLightsTransition(param_1,param_2 + 0x60);
        if (param_1->animationId != '\x02') {
          uVar15 = mobyutil::MB_randRange(10,0xd);
          mobyutil::MB_SetAnimation(param_1,2,0,uVar15);
        }
        if (g_heroState == UNK_78) {
          hero::TransitionMovement(0,1);
        }
        if (*(int *)(iVar11 + 0x1f0) != -1) {
          FUN_004d407c(param_1,1);
          mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
          mobyfunc::SetLevelFlag(param_1->levelFlagIdx);
          respawn::SetSpawnPoint
                    ((Vec4 *)&Cuboids[*(int *)(iVar11 + 0x1f0)].pos,
                     (Vec4 *)&Cuboids[*(int *)(iVar11 + 0x1f0)].rot);
        }
        param_1->state = '\n';
      }
      else {
        auVar22 = ZEXT416(0xffffffff);
        auVar23 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar22 = ZEXT416(0xfffffff0);
        auVar29 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar22 = ZEXT416(0xffffffff);
        auVar25 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar22 = loadVectorLeftIndexed(4,param_3);
        auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
        auVar23 = vectorShiftRightAlgebraicWord(auVar22,auVar29);
        puVar10[0xf] = (longlong)(int)*(short *)(pfVar18 + 1);
        auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
        auVar22 = loadVectorLeftIndexed(0xc,0x1c1dec);
        auVar28 = loadVectorLeftIndexed(lVar12,0x1c1dec);
        auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar27 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar25 = vectorConvertFromSignedFixedPointWord(auVar23,0);
        auVar22 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar23 = vectorMultiplyAddFloatingPoint(auVar20 | auVar21,auVar27,auVar24);
        auVar20 = loadVectorLeftIndexed(4,0x1c1dec);
        uVar19 = puVar10[0xf];
        auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar21 = loadVectorLeftIndexed(0x10,0x1c1dec);
        auVar21 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar28 = vectorMultiplyAddFloatingPoint
                            (auVar25,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,
                             auVar26);
        auVar22 = ZEXT416(0xffffffff);
        auVar25 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar26 = loadVectorLeftIndexed(8,0x1c1dec);
        auVar22 = vectorCompareGreaterThanFloatingPoint(auVar23,auVar27);
        auVar24 = vectorShiftLeftIntegerWord(auVar25,auVar25);
        auVar23 = vectorConditionalSelect(auVar23,auVar27,auVar22);
        auVar22 = ZEXT416(0xffffffff);
        auVar25 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar22 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar25 = vectorShiftLeftIntegerWord(auVar25,auVar25);
        auVar26 = vectorMultiplyAddFloatingPoint
                            (auVar28,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,
                             auVar24);
        auVar20 = ((auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) ^ auVar23) >>
                  0x60 & (undefined1  [16])0xffffffff;
        auVar27 = vectorMultiplyAddFloatingPoint
                            (auVar28,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,
                             auVar25);
        uVar9 = storeVectorElementWordIndexed
                          (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,0x1fc,
                           param_2);
        *(undefined4 *)(iVar11 + 0x1fcU & 0xfffffffc) = uVar9;
        fastfunc::FastFrac((double)(fVar3 / ((float)(longlong)uVar19 * 0.16666667)),0x1fc,
                           uVar14 - 0xac);
        auVar22 = ZEXT416(0xffffffff);
        auVar23 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar22 = loadVectorLeftIndexed(0x24,param_2);
        auVar21 = loadVectorLeftIndexed(0x14,0x1c1dec);
        auVar20 = vectorShiftRightAlgebraicWord(auVar22,auVar29);
        auVar22 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar25 = vectorShiftLeftIntegerWord(auVar23,auVar23);
        auVar21 = vectorConvertFromSignedFixedPointWord(auVar20,0);
        auVar20 = loadVectorLeftIndexed(0x18,0x1c1dec);
        auVar24 = loadVectorLeftIndexed(0x74,lVar1);
        auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
        fVar3 = *pfVar18;
        auVar21 = vectorSubtractFloatingPoint
                            (auVar21,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60);
        auVar22 = ZEXT416(0xffffffff);
        auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar23 = vectorShiftLeftIntegerWord(auVar22,auVar22);
        auVar22 = vectorCompareGreaterThanFloatingPoint(auVar30,auVar21);
        auVar22 = vectorConditionalSelect
                            (auVar24,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,
                             auVar22);
        auVar22 = vectorMultiplyAddFloatingPoint(auVar28,auVar22,auVar25);
        auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar9 = storeVectorElementWordIndexed
                          (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,0x74,lVar1)
        ;
        *(undefined4 *)((int)puVar10 + 0x74) = uVar9;
        *pfVar18 = fVar3 - *(float *)(iVar17 + 0x2c);
        *(undefined1 *)(iVar11 + 0x67) = 0xfa;
        auVar22 = loadVectorLeftIndexed(0x1c,0x1c1dec);
        auVar20 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar22 = vectorMultiplyAddFloatingPoint
                            (auVar20,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,
                             auVar23);
        auVar22 = vectorConvertToSignedFixedPointWordSaturate(auVar22,0);
        auVar22 = vectorSplatHalfWord(auVar22,1);
        uVar8 = storeVectorElementHalfWordIndexed(auVar22,0x26,param_2);
        *(undefined2 *)(iVar11 + 0x26) = uVar8;
        mobyutil::MB_UpdateLightsTransition(param_1,param_2 + 0x60);
        if ((param_1->state < 10) &&
           (uVar6 = (int)*pfVar18 >> 0x1f, uVar7 = (int)*(uint *)((int)puVar10 + 0x74) >> 0x1f,
           (int)((uVar6 >> 1 ^ (uint)*pfVar18) - uVar6) <
           (int)((uVar7 >> 1 ^ *(uint *)((int)puVar10 + 0x74)) - uVar7))) {
          if (g_heroState == UNK_78) {
            hero::TransitionMovement(0,1);
          }
          if (param_1->animationId != '\x02') {
            uVar15 = mobyutil::MB_randRange(0,2);
            uVar16 = mobyutil::MB_randRange(0x14,0x16);
            mobyutil::MB_SetAnimation(param_1,2,uVar15,uVar16);
          }
          iVar17 = *(int *)(iVar11 + 0x1f8);
          *(undefined4 *)(iVar11 + 0x1c8) = 0;
          *(undefined1 *)(iVar11 + 0x1c5) = 1;
          if (((iVar17 != -1) && (sound::g_SoundChannels[iVar17].pMoby == param_1)) &&
             (sound::g_SoundChannels[iVar17].state != '\0')) {
            sound::sound_Kill(iVar17);
          }
          *(undefined4 *)(iVar11 + 0x1f8) = 0xffffffff;
          iVar17 = sound::PlayMobySound(0xf,4,param_1);
          *(int *)(iVar11 + 0x1f8) = iVar17;
          param_1->state = '\v';
          param_1->setByGroup = param_1->setByGroup + '\x01';
        }
        auVar22 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        vectorCompareGreaterThanFloatingPoint(auVar31,auVar22);
        if (!(bool)(in_cr6 >> 1 & 1)) {
          auVar20 = loadVectorLeftIndexed(lVar12,param_3);
          auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
          vectorCompareGreaterThanFloatingPoint
                    (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,auVar22);
          if ((bool)(in_cr6 >> 1 & 1)) {
            *(undefined1 *)(iVar11 + 0x1c7) = 1;
            goto LAB_001c23bc;
          }
        }
        auVar22 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        vectorCompareGreaterThanFloatingPoint(auVar31,auVar22);
        if (!(bool)(in_cr6 >> 1 & 1)) {
          auVar20 = loadVectorLeftIndexed(lVar12,param_3);
          auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
          vectorCompareGreaterThanFloatingPoint
                    (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,auVar22);
          if ((bool)(in_cr6 >> 1 & 1)) {
            *(undefined1 *)(iVar11 + 0x1c7) = 1;
          }
        }
      }
    }
  }
  else if (1 < *(int *)(puVar10 + 0xe)) {
    *(undefined1 *)(iVar11 + 0x1c6) = 0xff;
  }
LAB_001c23bc:
  *(byte *)(iVar11 + 0x1c6) =
       (byte)((longlong)(0x14 - (ulonglong)*(byte *)(iVar11 + 0x1c6)) >> 0x3f) &
       *(byte *)(iVar11 + 0x1c6) - 0x14;
  param_1->damage = -1;
LAB_001c23ec:
  mobyutil::MB_ColorDyingMoby(param_1,param_2 + 0x60);
  fVar3 = *(float *)(iVar11 + 0x1fc) + 0.3;
  *(float *)(iVar11 + 0x1fc) = fVar3;
  if (0.0 < fVar3) {
    *(undefined4 *)(iVar11 + 0x1fc) = 0;
  }
  return;
}



//==== 001c2480  ns=mobyupdate_helpers  size=0x78
// sig: undefined M1106_001c2480(void)
// callers(1): 001c50b0 mobyupdate_unsorted::UpdateMoby_1106
// callees(1): 000fcbe8 mobyutil::MB_randRangeFloat

void mobyupdate_helpers::M1106_001c2480(double param_1,float *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = -param_1;
  dVar1 = (double)mobyutil::MB_randRangeFloat((float)dVar2,(float)param_1);
  *param_2 = (float)((double)*param_2 + dVar1);
  dVar1 = (double)mobyutil::MB_randRangeFloat((float)dVar2,(float)param_1);
  param_2[1] = (float)((double)param_2[1] + dVar1);
  return;
}



//==== 001c2500  ns=mobyupdate_helpers  size=0x1c4
// sig: undefined M1106_001c2500(void)
// callers(1): 001c50b0 mobyupdate_unsorted::UpdateMoby_1106
// callees(3): 00114d58 mobyutil::MB_SplineFindRouteNode; 001367d0 path::PathFindClosestPnt; 001c1d28 mobyupdate_helpers::M1106_001c1d28

void mobyupdate_helpers::M1106_001c2500
               (undefined8 param_1,int param_2,Vec4 *param_3,undefined8 param_4)

{
  Spline *pSVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  Vec4 *position;
  undefined4 *puVar6;
  double dVar7;
  undefined1 auStack_60 [32];
  
  uVar4 = param_4;
  uVar2 = M1106_001c1d28(param_1,param_2,auStack_60);
  dVar7 = 0.0;
  position = (Vec4 *)((int)param_1 + 0x10);
  puVar6 = (undefined4 *)param_4;
  iVar3 = mobyutil::MB_SplineFindRouteNode
                    (0.0,auStack_60,uVar2,(longlong)*(int *)(param_2 + 0x188),uVar4,position,param_3
                     ,puVar6);
  if (iVar3 == 0) {
    iVar3 = path::PathFindClosestPnt((float)dVar7,param_3,Splines[*(int *)(param_2 + 0x290)]);
    iVar3 = path::PathFindClosestPnt
                      ((float)dVar7,
                       (Vec4 *)((int)&Splines[*(int *)(param_2 + 0x290)]->points[0].x +
                               (int)((longlong)iVar3 << 4)),Splines[*(int *)(param_2 + 0x188)]);
    lVar5 = ZEXT48(Splines[*(int *)(param_2 + 0x188)]) + (longlong)iVar3 * 0x10;
    iVar3 = mobyutil::MB_SplineFindRouteNode
                      ((float)dVar7,auStack_60,uVar2,(longlong)*(int *)(param_2 + 0x188),lVar5,
                       position,(int)lVar5 + 0x10,puVar6);
    if (iVar3 == 0) {
      iVar3 = path::PathFindClosestPnt((float)dVar7,position,Splines[*(int *)(param_2 + 0x188)]);
      iVar3 = (int)((longlong)iVar3 << 4);
      pSVar1 = Splines[*(int *)(param_2 + 0x188)];
      *puVar6 = *(undefined4 *)((int)&pSVar1->points[0].x + iVar3);
      puVar6[1] = *(undefined4 *)((int)&pSVar1->points[0].y + iVar3);
      puVar6[2] = *(undefined4 *)((int)&pSVar1->points[0].z + iVar3);
      puVar6[3] = *(undefined4 *)((int)&pSVar1->points[0].w + iVar3);
    }
  }
  return;
}



//==== 001c26e0  ns=mobyupdate_helpers  size=0x42c
// sig: undefined M1106_001c26e0(void)
// callers(1): 001c50b0 mobyupdate_unsorted::UpdateMoby_1106
// callees(4): 000ff2e8 mobyutil::OrganicDeltAngSpeed; 000ff6b8 mobyutil::CollLineValidate; 00101cc0 mobyutil::MB_UpdateNavMoveTurning; 001367d0 path::PathFindClosestPnt

ulonglong mobyupdate_helpers::M1106_001c26e0
                    (double param_1,int param_2,int param_3,float *param_4,undefined8 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  Spline *spline;
  ulonglong *puVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  MobyInstance *pMVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar14;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  double dVar20;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar13 = uVar10 - 0xc0;
  puVar5 = (ulonglong *)lVar13;
  *puVar5 = uVar10;
  puVar5[0x1a] = in_LR;
  fVar1 = *(float *)(param_2 + 0x14);
  fVar2 = *(float *)(param_2 + 0x10);
  fVar4 = fVar1 - param_4[1];
  fVar3 = *param_4;
  puVar5[0x17] = unaff_r31;
  fVar3 = fVar2 - fVar3;
  iVar14 = *(int *)(param_3 + 0x290);
  puVar5[0x14] = unaff_r28;
  puVar5[0x15] = unaff_r29;
  puVar5[0x16] = unaff_r30;
  spline = Splines[iVar14];
  if ((double)SQRT(fVar3 * fVar3 + fVar4 * fVar4) <= param_1) {
    uVar11 = 4;
    fVar2 = g_heroPosition.x - fVar2;
    fVar1 = g_heroPosition.y - fVar1;
    fVar4 = ABS(fVar2);
    fVar3 = ABS(fVar1);
    *(float *)(puVar5 + 0xe) = fVar2;
    *(float *)((int)puVar5 + 0x74) = fVar1;
    *(float *)(puVar5 + 0xf) = fVar4 - fVar3;
    dVar20 = 0.0;
    uVar12 = (ulonglong)(*(uint *)(puVar5 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar5 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar5 + 0x74) >> 0x1d) & 4;
    fVar1 = ABS(*(float *)(puVar5 + 0xe));
    if (*(float *)(puVar5 + 0xf) - 0.0 < 0.0) {
      fVar1 = fVar3;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar12 << 2));
    fVar2 = *(float *)(((uint)(uVar12 << 2) | 0x735900) + 4);
    fVar6 = ABS(*(float *)((int)puVar5 + 0x74));
    if (*(float *)(puVar5 + 0xf) - 0.0 < 0.0) {
      fVar6 = fVar4;
    }
    if (0.0 < fVar1) {
      lVar17 = uVar10 - 0xb0;
      lVar16 = uVar10 - 0x44;
      lVar15 = uVar10 - 0x34;
      lVar19 = 2;
      fVar1 = (fVar6 - fVar1) / (fVar6 + fVar1);
      fVar4 = fVar1 * fVar1;
      *(float *)(puVar5 + 0x11) = fVar1;
      *(float *)(puVar5 + 0x10) = fVar1;
      *(float *)((int)puVar5 + 0x84) = fVar1;
      *(float *)((int)puVar5 + 0x7c) = fVar1;
      fVar1 = fVar4 * fVar4;
      *(float *)(puVar5 + 0x10) = *(float *)(puVar5 + 0x10) * fVar4;
      *(float *)((int)puVar5 + 0x84) = *(float *)((int)puVar5 + 0x84) * fVar1;
      *(float *)(puVar5 + 0x11) = *(float *)(puVar5 + 0x11) * fVar1 * fVar4;
      do {
        *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x6c) * fVar1 * fVar1;
        iVar14 = (int)lVar16;
        lVar17 = lVar17 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)(iVar14 + 4) * fVar1 * fVar1;
        lVar15 = lVar15 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar17 = uVar10 - 0x44;
      lVar19 = 4;
      pfVar18 = (float *)&DAT_007358e0;
      lVar15 = lVar17;
      lVar16 = lVar13;
      do {
        fVar1 = *pfVar18;
        fVar4 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar16 + 0x7c) = *(float *)((int)lVar16 + 0x7c) * fVar1;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar4;
        lVar15 = lVar15 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar15 = 2;
      do {
        iVar14 = (int)lVar13;
        iVar8 = (int)lVar17;
        lVar13 = lVar13 + 0x10;
        lVar17 = lVar17 + 0x10;
        dVar20 = (double)((float)(dVar20 + (double)*(float *)(iVar14 + 0x7c)) +
                          *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      dVar20 = (double)((float)(dVar20 + 0.7853981852531433) * fVar3 + fVar2);
    }
    mobyutil::OrganicDeltAngSpeed
              (dVar20,(double)(DAT_0071f418 * 2.0943952),(double)(DAT_0071f418 * 0.6981317),
               (double)(mobyutil::g_FrameTime * 2.0943952),param_2,&DAT_00720000,param_3 + 0x168);
  }
  else {
    uVar11 = mobyutil::MB_UpdateNavMoveTurning(param_2,param_3 + 0x70,param_5,param_3 + 0x100);
    if ((uVar11 & 2) != 0) {
      iVar14 = path::PathFindClosestPnt(0.0,(Vec4 *)(param_2 + 0x10),spline);
      iVar14 = (int)((longlong)iVar14 << 4);
      fVar2 = *(float *)((int)&spline->points[0].y + iVar14) - *(float *)(param_2 + 0x14);
      fVar3 = *(float *)((int)&spline->points[0].x + iVar14) - *(float *)(param_2 + 0x10);
      fVar4 = *(float *)((int)&spline->points[0].z + iVar14) - *(float *)(param_2 + 0x18);
      fVar1 = *(float *)(param_3 + 0x94);
      fVar7 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      fVar6 = fVar1 / fVar7;
      if (fVar1 - fVar7 < 0.0) {
        fVar4 = fVar4 * fVar6;
      }
      if (fVar1 - fVar7 < 0.0) {
        fVar2 = fVar2 * fVar6;
      }
      if (fVar1 - fVar7 < 0.0) {
        fVar3 = fVar3 * fVar6;
      }
      *(float *)(param_2 + 0x18) = *(float *)(param_2 + 0x18) + fVar4;
      *(float *)(param_2 + 0x14) = *(float *)(param_2 + 0x14) + fVar2;
      *(float *)(param_2 + 0x10) = *(float *)(param_2 + 0x10) + fVar3;
    }
  }
  if (((((worldUpdateTime & 3) == 3) &&
       (iVar14 = mobyutil::CollLineValidate(0x3fb99999a0000000,0x3ff0000000000000,param_2 + 0x10),
       pMVar9 = CollOutput.pMoby, iVar14 != 0)) && (CollOutput.pMoby != (MobyInstance *)0x0)) &&
     (((0 < CollOutput.poly && ((CollOutput.pMoby)->oClass == 0x42d)) &&
      ((CollOutput.pMoby)->setByGroup == '\0')))) {
    if (*(char *)((int)(CollOutput.pMoby)->pVar + 0xbe) != '\0') {
      fVar1 = ((CollOutput.pMoby)->pos).y;
      *(float *)(param_2 + 0x10) =
           (((CollOutput.pMoby)->pos).x - *(float *)(param_2 + 0x10)) * 0.5 +
           *(float *)(param_2 + 0x10);
      *(float *)(param_2 + 0x14) =
           (fVar1 - *(float *)(param_2 + 0x14)) * 0.5 + *(float *)(param_2 + 0x14);
    }
    pMVar9->setByGroup = '\x01';
  }
  return uVar11;
}



//==== 001c2b20  ns=mobyupdate_helpers  size=0x8c
// sig: undefined M1106_001c2b20(void)
// callers(1): 001c50b0 mobyupdate_unsorted::UpdateMoby_1106
// callees(0): 

double mobyupdate_helpers::M1106_001c2b20
                 (double param_1,double param_2,double param_3,int param_4,int param_5)

{
  float fVar1;
  double dVar2;
  
  dVar2 = (double)(float)((double)DAT_0071f408 * 0.05999999865889549);
  if (param_2 < param_1) {
    fVar1 = (float)(param_1 - param_2);
    if (50.0 - (float)(param_1 - param_2) < 0.0) {
      fVar1 = 50.0;
    }
    if (fVar1 - 0.0 < 0.0) {
      fVar1 = 0.0;
    }
    dVar2 = (double)(float)((double)(fVar1 * 0.02 * fVar1 * 0.02) *
                            (double)(float)((double)DAT_0071f408 * 0.10000000149011612 - dVar2) +
                           dVar2);
  }
  *(float *)(param_5 + 0x1bc) = (float)dVar2;
  *(float *)(param_5 + 0x94) = (float)dVar2;
  *(float *)(param_4 + 0x58) =
       (float)((double)(*(float *)(param_5 + 0x80) / (DAT_0071f408 * 0.06)) * param_3);
  return dVar2;
}



//==== 001c2bb8  ns=mobyupdate_helpers  size=0x4f0
// sig: undefined M1106_001c2bb8(void)
// callers(1): 001c50b0 mobyupdate_unsorted::UpdateMoby_1106
// callees(3): 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 005026a0 fastfunc::FastSubRots

undefined8
mobyupdate_helpers::M1106_001c2bb8
          (int param_1,int param_2,float *param_3,undefined1 param_4,undefined1 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong *puVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float *pfVar15;
  longlong lVar14;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong unaff_r26;
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
  ulonglong in_f30;
  double dVar22;
  ulonglong in_f31;
  double dVar23;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar11 = uVar9 - 0x110;
  puVar6 = (ulonglong *)lVar11;
  *puVar6 = uVar9;
  puVar6[0x24] = in_LR;
  puVar6[0x20] = in_f30;
  puVar6[0x21] = in_f31;
  fVar1 = param_3[1];
  fVar2 = *(float *)(param_1 + 0x14);
  fVar5 = *param_3 - *(float *)(param_1 + 0x10);
  puVar6[0x1a] = unaff_r26;
  fVar1 = fVar1 - fVar2;
  puVar6[0x1f] = unaff_r31;
  puVar6[0x1e] = unaff_r30;
  fVar3 = ABS(fVar5);
  fVar4 = ABS(fVar1);
  *(float *)((int)puVar6 + 0x7c) = fVar5;
  *(float *)(puVar6 + 0x10) = fVar1;
  puVar6[0x1d] = unaff_r29;
  fVar1 = *(float *)(param_1 + 0x48);
  puVar6[0x1c] = unaff_r28;
  puVar6[0x1b] = unaff_r27;
  *(float *)((int)puVar6 + 0x84) = fVar3 - fVar4;
  dVar22 = 0.0;
  dVar23 = 0.7853981852531433;
  uVar17 = (ulonglong)(*(uint *)((int)puVar6 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar6 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar6 + 0x10) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)((int)puVar6 + 0x7c));
  if (*(float *)((int)puVar6 + 0x84) - 0.0 < 0.0) {
    fVar2 = fVar4;
  }
  fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
  fVar4 = ABS(*(float *)(puVar6 + 0x10));
  if (*(float *)((int)puVar6 + 0x84) - 0.0 < 0.0) {
    fVar4 = fVar3;
  }
  fVar3 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
  dVar19 = dVar22;
  if (0.0 < fVar2) {
    lVar10 = uVar9 - 0x100;
    lVar14 = uVar9 - 0x68;
    lVar16 = uVar9 - 0x58;
    lVar18 = 2;
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
      *(float *)((int)lVar10 + 0xa8) = *(float *)((int)lVar10 + 0x98) * fVar2 * fVar2;
      iVar7 = (int)lVar14;
      lVar10 = lVar10 + 8;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)(iVar7 + 4) * fVar2 * fVar2;
      lVar16 = lVar16 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar16 = uVar9 - 0x68;
    pfVar15 = (float *)&DAT_007358e0;
    lVar18 = 4;
    lVar10 = lVar11;
    lVar14 = lVar16;
    do {
      fVar2 = *pfVar15;
      fVar4 = pfVar15[1];
      pfVar15 = pfVar15 + 2;
      *(float *)((int)lVar10 + 0xa8) = *(float *)((int)lVar10 + 0xa8) * fVar2;
      lVar10 = lVar10 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar4;
      lVar14 = lVar14 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar14 = 2;
    lVar10 = lVar11;
    do {
      iVar7 = (int)lVar10;
      lVar10 = lVar10 + 0x10;
      iVar8 = (int)lVar16;
      lVar16 = lVar16 + 0x10;
      dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar7 + 0xa8)) + *(float *)(iVar8 + 4) +
                        *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    dVar19 = (double)((float)(dVar19 + 0.7853981852531433) * fVar5 + fVar3);
  }
  dVar19 = (double)fastfunc::FastSubRots(fVar1,(float)dVar19);
  if (dVar19 <= (double)*(float *)(param_2 + 0x98)) {
    uVar12 = 0;
  }
  else {
    *(undefined4 *)(param_2 + 0x168) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
    *(undefined1 *)(param_2 + 500) = *(undefined1 *)(param_1 + 0x20);
    *(undefined1 *)(param_2 + 0x1f6) = param_4;
    *(undefined1 *)(param_2 + 0x1f5) = param_5;
    *(float *)(param_2 + 0xc0) = *param_3;
    *(float *)(param_2 + 0xc4) = param_3[1];
    *(float *)(param_2 + 200) = param_3[2];
    *(float *)(param_2 + 0xcc) = param_3[3];
    fVar1 = *param_3 - *(float *)(param_1 + 0x10);
    fVar2 = param_3[1] - *(float *)(param_1 + 0x14);
    dVar20 = ABS((double)fVar1);
    dVar21 = ABS((double)fVar2);
    *(float *)(puVar6 + 0xe) = fVar1;
    *(float *)((int)puVar6 + 0x74) = fVar2;
    *(float *)(puVar6 + 0xf) = (float)(dVar20 - dVar21);
    uVar17 = (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar6 + 0x74) >> 0x1d) & 4;
    dVar19 = ABS((double)*(float *)(puVar6 + 0xe));
    if ((double)*(float *)(puVar6 + 0xf) - dVar22 < 0.0) {
      dVar19 = dVar21;
    }
    fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
    dVar21 = ABS((double)*(float *)((int)puVar6 + 0x74));
    if ((double)*(float *)(puVar6 + 0xf) - dVar22 < 0.0) {
      dVar21 = dVar20;
    }
    fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    dVar20 = dVar22;
    if (dVar22 < dVar19) {
      lVar10 = uVar9 - 0x100;
      lVar16 = uVar9 - 0x78;
      lVar14 = uVar9 - 0x88;
      lVar18 = 2;
      fVar5 = (float)(dVar21 - dVar19) / (float)(dVar21 + dVar19);
      fVar4 = fVar5 * fVar5;
      *(float *)((int)puVar6 + 0x94) = fVar5;
      *(float *)((int)puVar6 + 0x8c) = fVar5;
      *(float *)(puVar6 + 0x12) = fVar5;
      *(float *)(puVar6 + 0x11) = fVar5;
      fVar5 = fVar4 * fVar4;
      *(float *)((int)puVar6 + 0x8c) = *(float *)((int)puVar6 + 0x8c) * fVar4;
      *(float *)(puVar6 + 0x12) = *(float *)(puVar6 + 0x12) * fVar5;
      *(float *)((int)puVar6 + 0x94) = *(float *)((int)puVar6 + 0x94) * fVar5 * fVar4;
      do {
        *(float *)((int)lVar10 + 0x88) = *(float *)((int)lVar10 + 0x78) * fVar5 * fVar5;
        iVar7 = (int)lVar14;
        lVar14 = lVar14 + 8;
        lVar10 = lVar10 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar7 + 4) * fVar5 * fVar5;
        lVar16 = lVar16 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar18 = 4;
      lVar16 = uVar9 - 0x88;
      pfVar15 = (float *)&DAT_007358e0;
      lVar10 = lVar11;
      lVar14 = lVar16;
      do {
        fVar5 = *pfVar15;
        fVar4 = pfVar15[1];
        pfVar15 = pfVar15 + 2;
        *(float *)((int)lVar10 + 0x88) = *(float *)((int)lVar10 + 0x88) * fVar5;
        lVar10 = lVar10 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar4;
        lVar14 = lVar14 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar10 = 2;
      dVar19 = dVar22;
      do {
        iVar7 = (int)lVar11;
        iVar8 = (int)lVar16;
        lVar11 = lVar11 + 0x10;
        lVar16 = lVar16 + 0x10;
        dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar7 + 0x88)) + *(float *)(iVar8 + 4)
                          + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      dVar20 = (double)((float)(dVar19 + dVar23) * fVar1 + fVar2);
    }
    if (dVar22 <= dVar20) {
      if (*(char *)(param_1 + 0x53) != '\x0e') {
        uVar12 = mobyutil::MB_randRange(0,1);
        uVar13 = mobyutil::MB_randRange(0xf,0x14);
        mobyutil::MB_SetAnimation(param_1,0xe,uVar12,uVar13);
      }
    }
    else if (*(char *)(param_1 + 0x53) != '\x03') {
      uVar12 = mobyutil::MB_randRange(0,1);
      uVar13 = mobyutil::MB_randRange(0xf,0x14);
      mobyutil::MB_SetAnimation(param_1,3,uVar12,uVar13);
    }
    uVar12 = 1;
    *(undefined1 *)(param_1 + 0x20) = 7;
  }
  return uVar12;
}



//==== 001c30c0  ns=mobyupdate_helpers  size=0x2b0
// sig: undefined M1106_001c30c0(void)
// callers(1): 001c50b0 mobyupdate_unsorted::UpdateMoby_1106
// callees(2): 001167c8 mobyutil::MB_UpdateManipulatorRot; 005025e0 fastfunc::FastDiffRots

void mobyupdate_helpers::M1106_001c30c0(int param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong *puVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar16;
  double dVar17;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar11 = uVar9 - 0xb0;
  puVar5 = (ulonglong *)lVar11;
  *puVar5 = uVar9;
  puVar5[0x18] = in_LR;
  puVar5[0x14] = unaff_r30;
  puVar5[0x15] = unaff_r31;
  if (*(byte *)(param_1 + 0x20) < 10) {
    fVar2 = *param_3 - *(float *)(param_1 + 0x10);
    fVar1 = param_3[1] - *(float *)(param_1 + 0x14);
    fVar3 = ABS(fVar2);
    fVar4 = ABS(fVar1);
    *(float *)(puVar5 + 0xe) = fVar2;
    *(float *)((int)puVar5 + 0x74) = fVar1;
    *(float *)(puVar5 + 0xf) = fVar3 - fVar4;
    dVar17 = 0.0;
    uVar10 = (ulonglong)(*(uint *)(puVar5 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar5 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar5 + 0x74) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar5 + 0xe));
    if (*(float *)(puVar5 + 0xf) - 0.0 < 0.0) {
      fVar2 = fVar4;
    }
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar10 << 2));
    fVar1 = *(float *)(((uint)(uVar10 << 2) | 0x735900) + 4);
    fVar8 = ABS(*(float *)((int)puVar5 + 0x74));
    if (*(float *)(puVar5 + 0xf) - 0.0 < 0.0) {
      fVar8 = fVar3;
    }
    if (0.0 < fVar2) {
      lVar14 = uVar9 - 0xa0;
      lVar12 = uVar9 - 0x24;
      lVar13 = uVar9 - 0x34;
      lVar16 = 2;
      fVar2 = (fVar8 - fVar2) / (fVar8 + fVar2);
      fVar3 = fVar2 * fVar2;
      *(float *)(puVar5 + 0x11) = fVar2;
      *(float *)(puVar5 + 0x10) = fVar2;
      *(float *)((int)puVar5 + 0x84) = fVar2;
      *(float *)((int)puVar5 + 0x7c) = fVar2;
      fVar2 = fVar3 * fVar3;
      *(float *)(puVar5 + 0x10) = *(float *)(puVar5 + 0x10) * fVar3;
      *(float *)((int)puVar5 + 0x84) = *(float *)((int)puVar5 + 0x84) * fVar2;
      *(float *)(puVar5 + 0x11) = *(float *)(puVar5 + 0x11) * fVar2 * fVar3;
      do {
        *(float *)((int)lVar14 + 0x7c) = *(float *)((int)lVar14 + 0x6c) * fVar2 * fVar2;
        iVar6 = (int)lVar13;
        lVar13 = lVar13 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar12 + 4) = *(float *)(iVar6 + 4) * fVar2 * fVar2;
        lVar12 = lVar12 + 8;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      lVar14 = uVar9 - 0x34;
      lVar16 = 4;
      pfVar15 = (float *)&DAT_007358e0;
      lVar12 = lVar14;
      lVar13 = lVar11;
      do {
        fVar2 = *pfVar15;
        fVar3 = pfVar15[1];
        pfVar15 = pfVar15 + 2;
        *(float *)((int)lVar13 + 0x7c) = *(float *)((int)lVar13 + 0x7c) * fVar2;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar12 + 4) = *(float *)((int)lVar12 + 4) * fVar3;
        lVar12 = lVar12 + 8;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      lVar12 = 2;
      do {
        iVar6 = (int)lVar11;
        iVar7 = (int)lVar14;
        lVar11 = lVar11 + 0x10;
        lVar14 = lVar14 + 0x10;
        dVar17 = (double)((float)(dVar17 + (double)*(float *)(iVar6 + 0x7c)) + *(float *)(iVar7 + 4)
                          + *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      dVar17 = (double)((float)(dVar17 + 0.7853981852531433) * fVar4 + fVar1);
    }
    dVar17 = (double)fastfunc::FastDiffRots(dVar17,(double)*(float *)(param_1 + 0x48));
  }
  else {
    dVar17 = 0.0;
  }
  *(float *)(param_2 + 0x268) = (float)dVar17;
  if (dVar17 <= 1.3962633609771729) {
    if (dVar17 < -1.3962633609771729) {
      *(undefined4 *)(param_2 + 0x268) = 0xbfb2b8c2;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x268) = 0x3fb2b8c2;
  }
  *(undefined4 *)(param_2 + 0x264) = *(undefined4 *)(param_2 + 0x1fc);
  mobyutil::MB_UpdateManipulatorRot
            ((double)(DAT_0071f40c * 0.03),(double)(DAT_0071f40c * 0.3),param_1,param_2 + 0x200,0xb)
  ;
  return;
}



//==== 001c3370  ns=mobyupdate_helpers  size=0x108
// sig: undefined M1106_001c3370(void)
// callers(1): 001c50b0 mobyupdate_unsorted::UpdateMoby_1106
// callees(1): 000f0ea8 mobyfunc::AttachManipulator
// strings: 0096c074: 'None'

void mobyupdate_helpers::M1106_001c3370(int param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((g_gameMode == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar3 = 0;
    puVar4 = &DAT_0095cd50;
    sVar1 = boot::g_SpaceSceneMobyCnt._0_2_;
    cVar2 = Cheats[0];
    if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
      do {
        if (((((MobyInstance *)puVar4[0x5e])->oClass == *(MOBY_OCLASSES *)(param_1 + 0xa6)) &&
            (cVar2 != '\0')) && (DAT_00763fd1 == '\0')) {
          mobyfunc::AttachManipulator((MobyInstance *)puVar4[0x5e],0xb,&DAT_00763fd0);
          DAT_00763ff0 = 0x40300000;
          DAT_00763ff4 = 0x40300000;
          DAT_00763ff8 = 0x40300000;
          sVar1 = boot::g_SpaceSceneMobyCnt._0_2_;
          cVar2 = Cheats[0];
        }
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar3 < sVar1);
    }
  }
  return;
}



//==== 001c3478  ns=mobyupdate_helpers  size=0x88
// sig: undefined M1106_001c3478(void)
// callers(1): 001c50b0 mobyupdate_unsorted::UpdateMoby_1106
// callees(1): 0006d720 RegisterFuncForMoby

void mobyupdate_helpers::M1106_001c3478(MobyInstance *param_1)

{
  short sVar1;
  short *psVar2;
  longlong lVar3;
  
  if (0 < DAT_00ef0db8) {
    psVar2 = &DAT_00ef0db8;
    lVar3 = 10;
    do {
      sVar1 = *psVar2;
      *psVar2 = sVar1 + ((ushort)(0x40 - (longlong)sVar1 >> 0x3f) & 0x40U - sVar1) + -4;
      psVar2 = psVar2 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    RegisterFuncForMoby(&PTR_M1107_001c90b0_00708cb0,param_1);
  }
  return;
}



//==== 001c3510  ns=mobyupdate_helpers  size=0x254
// sig: undefined M1106_001c3510(void)
// callers(1): 001c50b0 mobyupdate_unsorted::UpdateMoby_1106
// callees(2): 0006d720 RegisterFuncForMoby; 0015d12c sound::PlayMobySound

void mobyupdate_helpers::M1106_001c3510(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  short sVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  float *pfVar18;
  short *psVar19;
  int *piVar20;
  int iVar21;
  longlong lVar22;
  
  DAT_00764010 = 1;
  DAT_00764018 = DAT_00764018 * 0.5;
  DAT_00764014 = 1;
  sound::PlayMobySound(10,0,param_1);
  fVar1 = 0.0;
  iVar21 = 0;
  psVar19 = &DAT_00eefa28;
  piVar20 = &DAT_00eefa3c;
  pfVar18 = (float *)&DAT_00eefa2c;
  do {
    iVar10 = *piVar20;
    if (iVar10 != 0) {
      iVar17 = (int)((longlong)*psVar19 << 4);
      fVar2 = *(float *)((int)&DAT_00ef0cf4 + iVar17);
      fVar13 = *(float *)((int)&DAT_00ef0ce4 + iVar17) - fVar2;
      fVar3 = *(float *)((int)&DAT_00ef0cf0 + iVar17);
      fVar15 = *(float *)((int)&DAT_00ef0ce0 + iVar17) - fVar3;
      fVar4 = *(float *)((int)&DAT_00ef0cf8 + iVar17);
      fVar14 = *(float *)((int)&DAT_00ef0ce8 + iVar17) - fVar4;
      fVar5 = *pfVar18;
      fVar6 = *(float *)(iVar10 + 0x14);
      fVar7 = *(float *)(iVar10 + 0x10);
      fVar8 = *(float *)(iVar10 + 0x18);
      fVar16 = SQRT(fVar14 * fVar14 + fVar15 * fVar15 + fVar13 * fVar13);
      *piVar20 = 0;
      *(undefined4 *)(iVar10 + 0x3c) = *(undefined4 *)(iVar10 + 0x1c);
      *(undefined2 *)(iVar10 + 10) = 0x46;
      fVar5 = fVar5 / fVar16;
      fVar16 = 0.1 / fVar16;
      fVar6 = fVar6 - (fVar2 + fVar13 * fVar5);
      fVar7 = fVar7 - (fVar3 + fVar15 * fVar5);
      fVar8 = fVar8 - (fVar4 + fVar14 * fVar5);
      fVar4 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
      fVar3 = 0.03 / fVar4;
      fVar2 = fVar1;
      if (0.0 - fVar4 < 0.0) {
        fVar2 = fVar3 * fVar8;
      }
      fVar12 = fVar1;
      if (0.0 - fVar4 < 0.0) {
        fVar12 = fVar3 * fVar6;
      }
      fVar11 = fVar1;
      if (0.0 - fVar4 < 0.0) {
        fVar11 = fVar3 * fVar7;
      }
      if (fVar4 - 0.0 < 0.0) {
        fVar2 = fVar3 * fVar8;
      }
      if (fVar4 - 0.0 < 0.0) {
        fVar12 = fVar3 * fVar6;
      }
      if (fVar4 - 0.0 < 0.0) {
        fVar11 = fVar3 * fVar7;
      }
      *(float *)(iVar10 + 0x38) = fVar14 * fVar5 * fVar16 + fVar2;
      *(float *)(iVar10 + 0x34) = fVar13 * fVar5 * fVar16 + fVar12;
      *(float *)(iVar10 + 0x30) = fVar15 * fVar5 * fVar16 + fVar11;
    }
    iVar21 = iVar21 + 1;
    piVar20 = piVar20 + 6;
    psVar19 = psVar19 + 0xc;
    pfVar18 = pfVar18 + 6;
  } while (iVar21 < 200);
  if (0 < DAT_00ef0db8) {
    psVar19 = &DAT_00ef0db8;
    lVar22 = 10;
    do {
      sVar9 = *psVar19;
      *psVar19 = sVar9 + ((ushort)(0x40 - (longlong)sVar9 >> 0x3f) & 0x40U - sVar9) + -4;
      psVar19 = psVar19 + 1;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    RegisterFuncForMoby(&PTR_M1107_001c90b0_00708cb0,param_1);
  }
  return;
}



//==== 001c3770  ns=mobyupdate_helpers  size=0x21c
// sig: undefined M1106_001c3770(void)
// callers(1): 001c3a18 mobyupdate_helpers::M1106_001c3a18
// callees(2): 000fcc68 mobyutil::MB_randRot; 001113e0 mobyutil::MB_RotateQuatAxisAngle
// strings: 001c3768: '@333`'

void mobyupdate_helpers::M1106_001c3770(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  undefined4 *puVar11;
  float *pfVar12;
  undefined2 *puVar13;
  longlong lVar14;
  double dVar15;
  float local_30 [8];
  
  if (DAT_00764010 != 0) {
    fVar1 = *(float *)(param_1 + 0xc4);
    fVar2 = *(float *)(param_1 + 0xc0);
    fVar3 = *(float *)(param_1 + 200);
    DAT_00764010 = 0;
    fVar7 = 0.0;
    DAT_00ef0cf0 = *param_2;
    pfVar10 = (float *)&DAT_00ef0cf0;
    DAT_00ef0cf4 = param_2[1];
    DAT_00ef0cf8 = param_2[2];
    puVar13 = &DAT_00ef0dba;
    fVar4 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
    DAT_00ef0cfc = param_2[3];
    pfVar12 = (float *)&DAT_00ef0d00;
    DAT_00ef0db8 = 0;
    lVar14 = 9;
    fVar6 = 2.8 / fVar4;
    fVar8 = fVar7;
    if (0.0 - fVar4 < 0.0) {
      fVar8 = fVar3 * fVar6;
    }
    fVar9 = fVar7;
    if (0.0 - fVar4 < 0.0) {
      fVar9 = fVar1 * fVar6;
    }
    if (0.0 - fVar4 < 0.0) {
      fVar7 = fVar2 * fVar6;
    }
    if (fVar4 - 0.0 < 0.0) {
      fVar8 = fVar3 * fVar6;
    }
    if (fVar4 - 0.0 < 0.0) {
      fVar9 = fVar1 * fVar6;
    }
    if (fVar4 - 0.0 < 0.0) {
      fVar7 = fVar2 * fVar6;
    }
    do {
      *pfVar12 = *pfVar10 + fVar7;
      pfVar12[1] = pfVar10[1] + fVar9;
      pfVar12[2] = pfVar10[2] + fVar8;
      pfVar5 = pfVar10 + 3;
      pfVar10 = pfVar10 + 4;
      pfVar12[3] = *pfVar5;
      *puVar13 = 0;
      pfVar12 = pfVar12 + 4;
      puVar13 = puVar13 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    DAT_00eefa00 = 0;
    local_30[0] = 0.0;
    local_30[1] = 0.0;
    DAT_00eefa0c = 0;
    DAT_00eefa08 = 0;
    DAT_00eefa04 = 0;
    local_30[2] = 0.1;
    local_30[3] = 1.0;
    local_30[4] = 1.0;
    local_30[5] = 0.0;
    local_30[6] = 0.0;
    local_30[7] = 1.0;
    dVar15 = (double)mobyutil::MB_randRot();
    mobyutil::MB_RotateQuatAxisAngle((float)dVar15,(float *)&DAT_00eefa10,local_30);
    DAT_00eefa20 = (float)dVar15;
    DAT_00eef9f0 = 0;
    DAT_00eefa24 = 0;
    DAT_00764018 = 0x3bc49ba6;
    if (DAT_00764014 != 0) {
      puVar11 = &DAT_00eefa3c;
      lVar14 = 0x19;
      DAT_00764014 = 0;
      do {
        *puVar11 = 0;
        puVar11[6] = 0;
        puVar11[0xc] = 0;
        puVar11[0x12] = 0;
        puVar11[0x18] = 0;
        puVar11[0x1e] = 0;
        puVar11[0x24] = 0;
        puVar11[0x2a] = 0;
        puVar11 = puVar11 + 0x30;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
  }
  return;
}



//==== 001c3a18  ns=mobyupdate_helpers  size=0x1550
// sig: undefined M1106_001c3a18(void)
// callers(1): 001c50b0 mobyupdate_unsorted::UpdateMoby_1106
// callees(16): 00050288 camera::Cam_InterpAngles; 0006d720 RegisterFuncForMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 001099f8 mobyutil::Lerp_vec4; 001113e0 mobyutil::MB_RotateQuatAxisAngle; 0011e6ec partproc::DeletePart; 00126f50 partupd::SpawnPart_23; 00137238 path::ClosestPntOnSegmentAtDist; 001c3770 mobyupdate_helpers::M1106_001c3770; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005e7d64 FUN_005e7d64; 005e8e08 FUN_005e8e08
// strings: 001c3994: '@333Br' (raw)

double mobyupdate_helpers::M1106_001c3a18(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  Vec4 *start;
  short *psVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  undefined2 uVar10;
  short sVar11;
  short *psVar12;
  Vec4 *end;
  float *pfVar13;
  float *pfVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined8 uVar28;
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
  double dVar39;
  double dVar40;
  double dVar41;
  undefined8 uVar42;
  double dVar43;
  double dVar44;
  Vec4 local_290;
  float local_280;
  float local_27c;
  float local_278;
  float local_270;
  float local_26c;
  float local_268;
  float local_260 [9];
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  undefined4 local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  Vec4 VStack_1f0;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b0 [4];
  float local_1a0;
  float local_19c;
  float local_198;
  undefined4 local_194;
  float local_190;
  float local_18c;
  float local_188;
  undefined4 local_184;
  float local_180;
  float local_17c;
  float local_178;
  undefined4 local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  undefined4 local_154;
  float local_150;
  float local_14c;
  float local_148;
  undefined4 local_144;
  double local_140;
  float local_138;
  longlong local_130;
  
  M1106_001c3770();
  fVar5 = g_heroPosition.z;
  fVar2 = g_heroPosition.y;
  fVar1 = g_heroPosition.x;
  psVar6 = &DAT_00ef0db8;
  lVar19 = 9;
  local_290.x = g_heroPosition.x;
  local_290.y = g_heroPosition.y;
  local_290.z = g_heroPosition.z + 0.6;
  DAT_00ef0db8 = DAT_00ef0db8 + 4;
  local_290.w = g_heroPosition.w;
  DAT_00ef0cf0 = *param_2;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  dVar40 = (double)g_heroPosition.w;
  psVar12 = psVar6;
  do {
    psVar12 = psVar12 + 1;
    sVar11 = *psVar6;
    psVar6 = psVar6 + 1;
    *psVar12 = sVar11 + -0x20;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  fVar2 = fVar2 - fVar3;
  fVar1 = fVar1 - DAT_00ef0cf0;
  dVar35 = 2.799999952316284;
  dVar38 = 0.0;
  fVar3 = (fVar5 - fVar4) + 0.6;
  DAT_00ef0cf4 = param_2[1];
  DAT_00ef0cf8 = param_2[2];
  DAT_00ef0cfc = param_2[3];
  fVar4 = SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
  fVar5 = 2.8 / fVar4;
  dVar20 = dVar38;
  if (0.0 - fVar4 < 0.0) {
    dVar20 = (double)(fVar1 * fVar5);
  }
  dVar43 = dVar38;
  if (0.0 - fVar4 < 0.0) {
    dVar43 = (double)(fVar2 * fVar5);
  }
  dVar41 = dVar38;
  if (0.0 - fVar4 < 0.0) {
    dVar41 = (double)(fVar3 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar20 = (double)(fVar1 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar43 = (double)(fVar2 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar41 = (double)(fVar3 * fVar5);
  }
  FUN_005e7d64(&local_280,&DAT_00eefa00,param_1 + 0xc0);
  local_280 = (float)((double)local_280 + dVar20);
  local_27c = (float)((double)local_27c + dVar43);
  local_278 = (float)((double)local_278 + dVar41);
  FUN_005e7d64(&local_270,&DAT_00eefa10,param_1 + 0xc0);
  local_270 = (float)((double)local_270 + dVar20);
  local_26c = (float)((double)local_26c + dVar43);
  local_268 = (float)((double)local_268 + dVar41);
  dVar44 = 60.5;
  local_130 = (longlong)(int)(animationSpeed * 60.5);
  dVar20 = (double)fastfunc::FastIntToDouble((int)(animationSpeed * 60.5));
  lVar19 = (longlong)DAT_00eef9f0;
  DAT_00eef9f0 = DAT_00eef9f0 + 1;
  local_130 = (longlong)(int)((double)animationSpeed * dVar44);
  fVar3 = (float)((double)lVar19 / dVar20);
  dVar20 = (double)((local_270 - local_280) * fVar3 + local_280);
  dVar43 = (double)((local_26c - local_27c) * fVar3 + local_27c);
  dVar41 = (double)((local_268 - local_278) * fVar3 + local_278);
  if ((int)((double)animationSpeed * dVar44) <= DAT_00eef9f0) {
    DAT_00eefa00 = DAT_00eefa10;
    DAT_00eefa04 = DAT_00eefa14;
    DAT_00eefa08 = DAT_00eefa18;
    DAT_00eefa0c = DAT_00eefa1c;
    local_260[0] = 0.0;
    local_260[1] = 0.0;
    local_260[2] = 0.1;
    local_260[3] = 1.0;
    local_260[4] = 1.0;
    local_260[5] = 0.0;
    local_260[6] = 0.0;
    local_260[7] = 1.0;
    dVar44 = (double)mobyutil::MB_randRangeFloat(45.0,315.0);
    dVar44 = (double)fastfunc::FastWrapRot(DAT_00eefa20,(float)(dVar44 * 0.01745329238474369));
    mobyutil::MB_RotateQuatAxisAngle((float)dVar44,(float *)&DAT_00eefa10,local_260);
    DAT_00eefa20 = (float)dVar44;
    DAT_00eef9f0 = 0;
  }
  local_138 = 0.1;
  dVar44 = (double)fastfunc::FastWrapRot(DAT_00eefa24,0.1);
  DAT_00eefa24 = (float)dVar44;
  dVar33 = -1.0;
  dVar21 = (double)SQRT(DAT_00969f78 * DAT_00969f78 +
                        hero::g_heroGravityDir * hero::g_heroGravityDir +
                        DAT_00969f74 * DAT_00969f74);
  local_174 = DAT_00969f7c;
  local_184 = 0;
  fVar3 = (float)(-1.0 / dVar21);
  dVar44 = dVar38;
  if (dVar38 - dVar21 < 0.0) {
    dVar44 = (double)(hero::g_heroGravityDir * fVar3);
  }
  dVar37 = dVar38;
  if (dVar38 - dVar21 < 0.0) {
    dVar37 = (double)(DAT_00969f78 * fVar3);
  }
  dVar36 = dVar38;
  if (dVar38 - dVar21 < 0.0) {
    dVar36 = (double)(DAT_00969f74 * fVar3);
  }
  if (dVar21 - dVar38 < 0.0) {
    dVar44 = (double)(hero::g_heroGravityDir * fVar3);
  }
  if (dVar21 - dVar38 < 0.0) {
    dVar37 = (double)(DAT_00969f78 * fVar3);
  }
  if (dVar21 - dVar38 < 0.0) {
    dVar36 = (double)(DAT_00969f74 * fVar3);
  }
  local_180 = (float)dVar44;
  local_17c = (float)dVar36;
  local_178 = (float)dVar37;
  fVar3 = (float)(dVar37 * dVar20 - (double)(float)(dVar44 * dVar41));
  fVar4 = (float)(dVar36 * dVar41 - (double)(float)(dVar37 * dVar43));
  fVar1 = (float)(dVar44 * dVar43 - (double)(float)(dVar36 * dVar20));
  fVar2 = fVar1 * fVar1 + fVar4 * fVar4 + fVar3 * fVar3;
  dVar21 = dVar38;
  dVar25 = dVar38;
  dVar34 = dVar38;
  if ((double)SQRT(fVar2) != dVar38) {
    fVar5 = 1.0 / SQRT(fVar2);
    fVar5 = -(fVar2 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar2 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar2 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    dVar25 = (double)(fVar4 * fVar5);
    dVar21 = (double)(fVar3 * fVar5);
    dVar34 = (double)(fVar1 * fVar5);
  }
  local_190 = (float)dVar25;
  local_18c = (float)dVar21;
  local_188 = (float)dVar34;
  local_194 = 0;
  pfVar8 = (float *)&DAT_00ef0dd0;
  iVar16 = 0;
  local_1a0 = (float)(dVar21 * dVar37 - (double)(float)(dVar34 * dVar36));
  local_19c = (float)(dVar34 * dVar44 - (double)(float)(dVar25 * dVar37));
  local_198 = (float)(dVar25 * dVar36 - (double)(float)(dVar21 * dVar44));
  dVar21 = 0.019999999552965164;
  pfVar14 = (float *)&DAT_00764020;
  pfVar13 = pfVar8;
  do {
    local_260[8] = (float)((double)*pfVar14 * dVar21);
    local_23c = (float)((double)pfVar14[1] * dVar21);
    local_238 = (float)((double)pfVar14[2] * dVar21);
    local_234 = pfVar14[3];
    FUN_005e7d64(local_260 + 8,local_260 + 8,&local_1a0);
    iVar16 = iVar16 + 1;
    pfVar14 = pfVar14 + 4;
    *pfVar13 = DAT_00ef0cf0 + local_260[8];
    pfVar13[1] = DAT_00ef0cf4 + local_23c;
    pfVar13[2] = DAT_00ef0cf8 + local_238;
    pfVar13[3] = DAT_00ef0cfc;
    pfVar13 = pfVar13 + 4;
  } while (iVar16 < 0x14);
  iVar16 = 1;
  dVar25 = 1000.0;
  start = (Vec4 *)&DAT_00ef0cf0;
  do {
    end = start + 1;
    pfVar8 = pfVar8 + 0x50;
    local_230 = end->x - start->x;
    dVar34 = (double)local_230;
    local_22c = start[1].y - start->y;
    dVar26 = (double)local_22c;
    local_228 = start[1].z - start->z;
    dVar30 = (double)local_228;
    local_224 = start[1].w;
    local_214 = 0;
    local_220 = (float)(dVar26 * dVar41 - (double)(float)(dVar30 * dVar43));
    local_21c = (float)(dVar30 * dVar20 - (double)(float)(dVar34 * dVar41));
    local_218 = (float)(dVar34 * dVar43 - (double)(float)(dVar26 * dVar20));
    dVar34 = (double)FUN_005e8e08((double)((float)(dVar30 * dVar41 +
                                                  (double)(float)(dVar34 * dVar20 +
                                                                 (double)(float)(dVar26 * dVar43)))
                                          / (float)((double)SQRT((float)(dVar30 * dVar30 +
                                                                        (double)(float)(dVar34 * 
                                                  dVar34 + (double)(float)(dVar26 * dVar26)))) *
                                                  dVar35)));
    dVar30 = 0.20000000298023224;
    dVar26 = (double)(float)(1.5707963705062866 - dVar34);
    dVar34 = (double)camera::Cam_InterpAngles
                               (dVar38,dVar26,0x3faeb851e0000000,0x3fc99999a0000000,dVar38);
    dVar26 = (double)fastfunc::FastDiffRots(dVar26,dVar34);
    if (0.3141592741012573 < ABS(dVar26)) {
      dVar26 = (double)fastfunc::FastDiffRots();
      dVar34 = (double)fastfunc::FastWrapRot((float)dVar34,(float)dVar26);
    }
    mobyutil::MB_RotateQuatAxisAngle((float)dVar34,&local_210,&local_230);
    dVar26 = (double)local_20c;
    dVar39 = (double)local_210;
    dVar29 = (double)local_208;
    dVar27 = (double)SQRT((float)(dVar29 * dVar29 +
                                 (double)(float)(dVar39 * dVar39 + (double)(float)(dVar26 * dVar26))
                                 ));
    dVar31 = (double)(float)(dVar35 / dVar27);
    dVar34 = dVar38;
    if (dVar38 - dVar27 < 0.0) {
      dVar34 = (double)(float)(dVar26 * dVar31);
    }
    dVar22 = dVar38;
    if (dVar38 - dVar27 < 0.0) {
      dVar22 = (double)(float)(dVar39 * dVar31);
    }
    dVar23 = dVar38;
    if (dVar38 - dVar27 < 0.0) {
      dVar23 = (double)(float)(dVar29 * dVar31);
    }
    if (dVar27 - dVar38 < 0.0) {
      dVar34 = (double)(float)(dVar26 * dVar31);
    }
    if (dVar27 - dVar38 < 0.0) {
      dVar22 = (double)(float)(dVar39 * dVar31);
    }
    if (dVar27 - dVar38 < 0.0) {
      dVar23 = (double)(float)(dVar29 * dVar31);
    }
    local_20c = (float)((double)(float)(dVar34 - dVar26) + dVar26);
    local_210 = (float)((double)(float)(dVar22 - dVar39) + dVar39);
    local_208 = (float)((double)(float)(dVar23 - dVar29) + dVar29);
    fVar3 = SQRT(local_208 * local_208 + local_210 * local_210 + local_20c * local_20c);
    if (3.9 < fVar3) {
      fVar3 = 3.9 / fVar3;
      local_210 = local_210 * fVar3;
      local_20c = local_20c * fVar3;
      local_208 = local_208 * fVar3;
    }
    if (5 < iVar16) {
      dVar34 = (double)fastfunc::FastIntToDouble(10);
      local_130 = (longlong)iVar16;
      fVar3 = (float)((double)local_130 / dVar34);
      local_204 = local_224;
      local_210 = fVar3 * (local_230 - local_210) + local_210;
      local_20c = fVar3 * (local_22c - local_20c) + local_20c;
      local_208 = fVar3 * (local_228 - local_208) + local_208;
    }
    fVar3 = start->y;
    fVar4 = start->z;
    fVar1 = start->w;
    end->x = start->x + local_210;
    start[1].y = fVar3 + local_20c;
    start[1].w = fVar1;
    start[1].z = fVar4 + local_208;
    dVar34 = path::ClosestPntOnSegmentAtDist
                       ((float)dVar38,&VStack_1f0,&local_290,&local_290,start,end);
    local_140 = dVar25;
    if (dVar34 - dVar25 < 0.0) {
      local_140 = dVar34;
    }
    if (ABS(dVar41) <= 2.0999999046325684) {
      dVar25 = (double)SQRT(DAT_00969f78 * DAT_00969f78 +
                            hero::g_heroGravityDir * hero::g_heroGravityDir +
                            DAT_00969f74 * DAT_00969f74);
      dVar37 = dVar38;
      dVar44 = dVar38;
      dVar36 = dVar38;
      if (dVar25 != dVar38) {
        fVar3 = (float)(dVar33 / dVar25);
        dVar44 = (double)(hero::g_heroGravityDir * fVar3);
        dVar36 = (double)(DAT_00969f74 * fVar3);
        dVar37 = (double)(DAT_00969f78 * fVar3);
      }
    }
    else {
      dVar25 = (double)(start[-1].x - start->x);
      dVar34 = (double)(start[-1].z - start->z);
      dVar26 = (double)(start[-1].y - start->y);
      if (dVar38 < (double)((float)(dVar20 * dVar36 - (double)(float)(dVar43 * dVar44)) *
                            (float)(dVar25 * dVar36 - (double)(float)(dVar26 * dVar44)) +
                           (float)(dVar43 * dVar37 - (double)(float)(dVar41 * dVar36)) *
                           (float)(dVar26 * dVar37 - (double)(float)(dVar34 * dVar36)) +
                           (float)(dVar41 * dVar44 - (double)(float)(dVar20 * dVar37)) *
                           (float)(dVar34 * dVar44 - (double)(float)(dVar25 * dVar37)))) {
        dVar37 = -dVar37;
        dVar44 = -dVar44;
        dVar36 = -dVar36;
      }
    }
    fVar3 = (float)(dVar41 * dVar41 +
                   (double)(float)(dVar20 * dVar20 + (double)(float)(dVar43 * dVar43)));
    dVar25 = dVar38;
    dVar34 = dVar38;
    dVar26 = dVar38;
    if ((double)SQRT(fVar3) != dVar38) {
      fVar4 = 1.0 / SQRT(fVar3);
      fVar4 = -(fVar3 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
      fVar4 = -(fVar3 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
      dVar25 = (double)(-(fVar3 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4);
      dVar26 = (double)(float)(dVar20 * dVar25);
      dVar34 = (double)(float)(dVar43 * dVar25);
      dVar25 = (double)(float)(dVar41 * dVar25);
    }
    local_164 = (float)dVar40;
    local_170 = (float)dVar26;
    local_16c = (float)dVar34;
    fVar3 = (float)(dVar37 * dVar26 - (double)(float)(dVar44 * dVar25));
    fVar4 = (float)(dVar36 * dVar25 - (double)(float)(dVar37 * dVar34));
    fVar1 = (float)(dVar44 * dVar34 - (double)(float)(dVar36 * dVar26));
    local_168 = (float)dVar25;
    local_154 = 0;
    fVar2 = fVar1 * fVar1 + fVar4 * fVar4 + fVar3 * fVar3;
    dVar40 = dVar38;
    dVar20 = dVar38;
    dVar43 = dVar38;
    if ((double)SQRT(fVar2) != dVar38) {
      fVar5 = 1.0 / SQRT(fVar2);
      fVar5 = -(fVar2 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
      fVar5 = -(fVar2 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
      fVar5 = -(fVar2 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
      dVar20 = (double)(fVar4 * fVar5);
      dVar40 = (double)(fVar3 * fVar5);
      dVar43 = (double)(fVar1 * fVar5);
    }
    local_130 = (longlong)iVar16;
    local_160 = (float)dVar20;
    local_15c = (float)dVar40;
    local_158 = (float)dVar43;
    local_144 = 0;
    iVar15 = 0;
    local_150 = (float)(dVar34 * dVar43 - (double)(float)(dVar25 * dVar40));
    dVar44 = (double)local_150;
    local_14c = (float)(dVar25 * dVar20 - (double)(float)(dVar26 * dVar43));
    dVar36 = (double)local_14c;
    local_148 = (float)(dVar26 * dVar40 - (double)(float)(dVar34 * dVar20));
    dVar37 = (double)local_148;
    dVar40 = 0.699999988079071;
    dVar20 = 3.141592502593994;
    dVar43 = -3.141592502593994;
    dVar41 = -0.16666656732559204;
    dVar25 = 0.008333025500178337;
    dVar34 = -0.0001980741071747616;
    dVar26 = 2.601886990305502e-06;
    dVar29 = (double)local_130;
    dVar31 = (double)(float)(dVar29 * dVar30 + dVar21);
    dVar27 = (double)(float)(dVar31 * 0.25);
    pfVar14 = (float *)&DAT_00764020;
    pfVar13 = pfVar8;
    do {
      dVar22 = (double)fastfunc::FastWrapRot
                                 ((float)(dVar29 * dVar40 + (double)DAT_00eefa24),(float)dVar38);
      dVar39 = (double)(float)(dVar20 - dVar22);
      if (dVar22 - (double)(float)(dVar20 - dVar22) < 0.0) {
        dVar39 = dVar22;
      }
      dVar23 = (double)(float)(dVar43 - dVar22);
      if ((double)(float)(dVar43 - dVar22) - dVar39 < 0.0) {
        dVar23 = dVar39;
      }
      dVar39 = (double)(float)(dVar23 * dVar23);
      dVar32 = (double)(float)(dVar39 * (double)(float)(dVar39 * dVar23));
      dVar22 = (double)(float)(dVar39 * dVar32);
      local_1f8 = (float)((double)(float)((double)(float)(dVar39 * dVar22) * dVar26 +
                                         (double)(float)(dVar22 * dVar34 +
                                                        (double)(float)(dVar32 * dVar25 +
                                                                       (double)(float)((double)(
                                                  float)(dVar39 * dVar23) * dVar41 + dVar23)))) *
                          dVar27 + dVar31);
      local_200 = *pfVar14 * local_1f8;
      local_1fc = pfVar14[1] * local_1f8;
      local_1f8 = pfVar14[2] * local_1f8;
      local_1f4 = pfVar14[3];
      FUN_005e7d64(&local_200,&local_200,&local_170);
      iVar15 = iVar15 + 1;
      pfVar14 = pfVar14 + 4;
      *pfVar13 = end->x + local_200;
      pfVar13[1] = start[1].y + local_1fc;
      pfVar13[2] = start[1].z + local_1f8;
      pfVar13[3] = start[1].w;
      pfVar13 = pfVar13 + 4;
    } while (iVar15 < 0x14);
    iVar16 = iVar16 + 1;
    dVar40 = (double)local_204;
    dVar25 = (double)SQRT(local_208 * local_208 + local_210 * local_210 + local_20c * local_20c);
    fVar3 = (float)(dVar35 / dVar25);
    dVar20 = dVar38;
    if (dVar38 - dVar25 < 0.0) {
      dVar20 = (double)(local_210 * fVar3);
    }
    dVar43 = dVar38;
    if (dVar38 - dVar25 < 0.0) {
      dVar43 = (double)(local_20c * fVar3);
    }
    dVar41 = dVar38;
    if (dVar38 - dVar25 < 0.0) {
      dVar41 = (double)(local_208 * fVar3);
    }
    if (dVar25 - dVar38 < 0.0) {
      dVar20 = (double)(local_210 * fVar3);
    }
    if (dVar25 - dVar38 < 0.0) {
      dVar43 = (double)(local_20c * fVar3);
    }
    if (dVar25 - dVar38 < 0.0) {
      dVar41 = (double)(local_208 * fVar3);
    }
    dVar25 = local_140;
    start = end;
  } while (iVar16 < 10);
  RegisterFuncForMoby(&PTR_M1107_001c90b0_00708cb0,(MobyInstance *)param_1);
  iVar17 = 0;
  iVar15 = 0;
  iVar18 = 0;
  iVar16 = 0;
  do {
    iVar9 = *(int *)((int)&DAT_00eefa3c + iVar16);
    if (iVar18 < 5 && iVar9 == 0) {
      lVar19 = 9;
      iVar7 = 0x12;
      do {
        if (0x3f < *(short *)((int)&DAT_00ef0db8 + iVar7)) break;
        lVar19 = lVar19 + -1;
        iVar7 = iVar7 + -2;
      } while (-1 < (int)lVar19);
      if (0 < (int)lVar19) {
        if (iVar17 < 2 && 1 < (int)lVar19) {
          iVar7 = mobyutil::MB_randInt(0x14);
          uVar42 = 0x3ff0000000000000;
          dVar40 = (double)mobyutil::MB_randRangeFloat((float)dVar30,1.0);
          pfVar8 = (float *)((int)(&DAT_00ef0dd0 + iVar7 * 4) +
                            (int)(lVar19 << 8) + (int)(lVar19 << 6));
          dVar20 = (double)(float)(&DAT_00ef0dd0)[iVar7 * 4];
          local_1d4 = pfVar8[3];
          iVar9 = (int)(lVar19 << 4);
          local_1e0 = (float)(dVar40 * (double)(float)((double)*pfVar8 - dVar20) + dVar20);
          local_1dc = (float)(dVar40 * (double)(pfVar8[1] - (float)(&DAT_00ef0dd4)[iVar7 * 4]) +
                             (double)(float)(&DAT_00ef0dd4)[iVar7 * 4]);
          local_1d8 = (float)(dVar40 * (double)(pfVar8[2] - (float)(&DAT_00ef0dd8)[iVar7 * 4]) +
                             (double)(float)(&DAT_00ef0dd8)[iVar7 * 4]);
          dVar35 = (double)(float)(dVar40 * (double)(float)((double)*(float *)((int)&DAT_00ef0cf0 +
                                                                              iVar9) -
                                                           (double)DAT_00ef0cf0) +
                                  (double)DAT_00ef0cf0);
          dVar20 = (double)(float)(dVar40 * (double)(float)((double)*(float *)((int)&DAT_00ef0cf4 +
                                                                              iVar9) -
                                                           (double)DAT_00ef0cf4) +
                                  (double)DAT_00ef0cf4);
          dVar40 = (double)(float)(dVar40 * (double)(float)((double)*(float *)((int)&DAT_00ef0cf8 +
                                                                              iVar9) -
                                                           (double)DAT_00ef0cf8) +
                                  (double)DAT_00ef0cf8);
          uVar24 = mobyutil::MB_randRangeFloat(60000.0,180000.0);
          uVar28 = 0x3ff07ae140000000;
          mobyutil::MB_randInt(uVar24,0x3ff07ae140000000,5);
          iVar9 = partupd::SpawnPart_23(dVar38,uVar42,uVar28,uVar24,&local_1e0);
          if (iVar9 != 0) {
            fVar4 = (float)((double)local_1dc - dVar20);
            fVar1 = (float)((double)local_1e0 - dVar35);
            fVar2 = (float)((double)local_1d8 - dVar40);
            *(float *)(iVar9 + 0x3c) = local_1d4;
            iVar17 = iVar17 + 1;
            dVar20 = (double)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar4 * fVar4);
            fVar3 = (float)(0.009999999776482582 / dVar20);
            dVar40 = dVar38;
            if (dVar38 - dVar20 < 0.0) {
              dVar40 = (double)(fVar2 * fVar3);
            }
            dVar35 = dVar38;
            if (dVar38 - dVar20 < 0.0) {
              dVar35 = (double)(fVar1 * fVar3);
            }
            dVar43 = dVar38;
            if (dVar38 - dVar20 < 0.0) {
              dVar43 = (double)(fVar4 * fVar3);
            }
            if (dVar20 - dVar38 < 0.0) {
              dVar40 = (double)(fVar2 * fVar3);
            }
            if (dVar20 - dVar38 < 0.0) {
              dVar35 = (double)(fVar1 * fVar3);
            }
            if (dVar20 - dVar38 < 0.0) {
              dVar43 = (double)(fVar4 * fVar3);
            }
            *(float *)(iVar9 + 0x30) = (float)dVar35;
            *(float *)(iVar9 + 0x34) = (float)dVar43;
            *(float *)(iVar9 + 0x38) = (float)(dVar40 + dVar21);
          }
        }
        iVar9 = (int)(lVar19 << 4);
        local_1e0 = *(float *)((int)&DAT_00ef0cf0 + iVar9);
        local_1dc = *(float *)((int)&DAT_00ef0cf4 + iVar9);
        local_1d8 = *(float *)((int)&DAT_00ef0cf8 + iVar9);
        local_1d4 = *(float *)((int)&DAT_00ef0cfc + iVar9);
        local_1c4 = 0;
        local_1c8 = 0;
        local_1cc = 0;
        local_1d0 = 0;
        uVar24 = mobyutil::MB_randRangeFloat(60000.0,180000.0);
        iVar9 = partupd::SpawnPart_23
                          (dVar38,0x3ff0000000000000,0x3ff0000000000000,uVar24,&local_1e0);
        *(int *)((int)&DAT_00eefa3c + iVar16) = iVar9;
        if (iVar9 != 0) {
          iVar18 = iVar18 + 1;
          *(undefined2 *)(iVar9 + 10) = 200;
          *(undefined4 *)(iVar9 + 0x24) = 2;
          *(undefined1 *)(iVar9 + 0x2a) = 0x7f;
          *(undefined1 *)(iVar9 + 0x2b) = 200;
        }
        dVar20 = (double)local_138;
        *(short *)((int)&DAT_00eefa28 + iVar16) = (short)lVar19;
        *(undefined4 *)((int)&DAT_00eefa2c + iVar16) = 0;
        *(undefined4 *)((int)&DAT_00eefa30 + iVar16) = 0;
        uVar10 = mobyutil::MB_randInt(0x14);
        *(undefined2 *)((int)&DAT_00eefa2a + iVar16) = uVar10;
        dVar40 = (double)mobyutil::MB_randRangeFloat((float)dVar20,0.8);
        *(float *)((int)&DAT_00eefa34 + iVar16) = (float)dVar40;
        dVar40 = (double)mobyutil::MB_randRangeFloat((float)dVar20,0.4);
        iVar9 = *(int *)((int)&DAT_00eefa3c + iVar16);
        *(float *)((int)&DAT_00eefa38 + iVar16) = (float)dVar40;
      }
    }
    if (iVar9 != 0) {
      iVar7 = (int)((longlong)*(short *)((int)&DAT_00eefa28 + iVar16) << 4);
      dVar35 = (double)(*(float *)((int)&DAT_00ef0ce4 + iVar7) -
                       *(float *)((int)&DAT_00ef0cf4 + iVar7));
      dVar43 = (double)(*(float *)((int)&DAT_00ef0ce0 + iVar7) -
                       *(float *)((int)&DAT_00ef0cf0 + iVar7));
      dVar20 = (double)(*(float *)((int)&DAT_00ef0ce8 + iVar7) -
                       *(float *)((int)&DAT_00ef0cf8 + iVar7));
      dVar40 = (double)SQRT((float)(dVar20 * dVar20 +
                                   (double)(float)(dVar43 * dVar43 +
                                                  (double)(float)(dVar35 * dVar35))));
      *(float *)((int)&DAT_00eefa2c + iVar16) =
           *(float *)((int)&DAT_00eefa2c + iVar16) + *(float *)((int)&DAT_00eefa38 + iVar16);
      *(undefined2 *)(iVar9 + 10) = 200;
      if (dVar40 < (double)*(float *)((int)&DAT_00eefa2c + iVar16)) {
        sVar11 = *(short *)((int)&DAT_00eefa28 + iVar16) + -1;
        *(short *)((int)&DAT_00eefa28 + iVar16) = sVar11;
        if (sVar11 < 1) {
          partproc::DeletePart(*(undefined4 *)((int)&DAT_00eefa3c + iVar16));
          *(undefined4 *)((int)&DAT_00eefa3c + iVar16) = 0;
        }
        else {
          iVar9 = (int)((longlong)*(short *)((int)&DAT_00eefa28 + iVar16) << 4);
          *(float *)((int)&DAT_00eefa2c + iVar16) =
               (float)((double)*(float *)((int)&DAT_00eefa2c + iVar16) - dVar40);
          dVar35 = (double)(*(float *)((int)&DAT_00ef0ce4 + iVar9) -
                           *(float *)((int)&DAT_00ef0cf4 + iVar9));
          dVar43 = (double)(*(float *)((int)&DAT_00ef0ce0 + iVar9) -
                           *(float *)((int)&DAT_00ef0cf0 + iVar9));
          dVar20 = (double)(*(float *)((int)&DAT_00ef0ce8 + iVar9) -
                           *(float *)((int)&DAT_00ef0cf8 + iVar9));
          dVar40 = (double)SQRT((float)(dVar20 * dVar20 +
                                       (double)(float)(dVar43 * dVar43 +
                                                      (double)(float)(dVar35 * dVar35))));
        }
      }
      if (*(int *)((int)&DAT_00eefa3c + iVar16) != 0) {
        dVar40 = (double)(float)((double)*(float *)((int)&DAT_00eefa2c + iVar16) / dVar40);
        if (*(short *)((int)&DAT_00eefa28 + iVar16) == 2) {
          *(undefined2 *)(*(int *)((int)&DAT_00eefa3c + iVar16) + 10) = 100;
        }
        else if (*(short *)((int)&DAT_00eefa28 + iVar16) < 2) {
          uVar10 = fastfunc::FastDoubleToInt((double)((float)(1.0 - dVar40) * 100.0));
          *(undefined2 *)(*(int *)((int)&DAT_00eefa3c + iVar16) + 10) = uVar10;
          if (*(short *)(*(int *)((int)&DAT_00eefa3c + iVar16) + 10) < 0x3d) {
            *(undefined2 *)(*(int *)((int)&DAT_00eefa3c + iVar16) + 10) = 0x3c;
          }
        }
        if (*(short *)((int)&DAT_00eefa28 + iVar16) == 1) {
          iVar9 = *(int *)((int)&DAT_00eefa3c + iVar16);
          fVar4 = (float)((double)param_2[1] - (double)*(float *)(iVar9 + 0x14));
          fVar1 = (float)((double)*param_2 - (double)*(float *)(iVar9 + 0x10));
          fVar2 = (float)((double)param_2[2] - (double)*(float *)(iVar9 + 0x18));
          dVar20 = (double)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar4 * fVar4);
          fVar3 = (float)((double)*(float *)((int)&DAT_00eefa38 + iVar16) / dVar20);
          dVar40 = dVar38;
          if (dVar38 - dVar20 < 0.0) {
            dVar40 = (double)(fVar3 * fVar2);
          }
          dVar35 = dVar38;
          if (dVar38 - dVar20 < 0.0) {
            dVar35 = (double)(fVar3 * fVar4);
          }
          dVar43 = dVar38;
          if (dVar38 - dVar20 < 0.0) {
            dVar43 = (double)(fVar3 * fVar1);
          }
          if (dVar20 - dVar38 < 0.0) {
            dVar40 = (double)(fVar3 * fVar2);
          }
          if (dVar20 - dVar38 < 0.0) {
            dVar35 = (double)(fVar3 * fVar4);
          }
          if (dVar20 - dVar38 < 0.0) {
            dVar43 = (double)(fVar3 * fVar1);
          }
          *(float *)(iVar9 + 0x18) = (float)((double)*(float *)(iVar9 + 0x18) + dVar40);
          *(float *)(iVar9 + 0x14) = (float)((double)*(float *)(iVar9 + 0x14) + dVar35);
          *(float *)(iVar9 + 0x10) = (float)((double)*(float *)(iVar9 + 0x10) + dVar43);
          *(float *)(*(int *)((int)&DAT_00eefa3c + iVar16) + 0xc) =
               *(float *)(*(int *)((int)&DAT_00eefa3c + iVar16) + 0xc) *
               (DAT_0071f408 * -0.050000012 + 1.0);
        }
        else {
          iVar9 = *(int *)((int)&DAT_00eefa3c + iVar16);
          iVar7 = (int)((longlong)*(short *)((int)&DAT_00eefa28 + iVar16) << 4);
          *(float *)(iVar9 + 0x10) =
               (float)(dVar43 * dVar40 + (double)*(float *)((int)&DAT_00ef0cf0 + iVar7));
          *(float *)(iVar9 + 0x14) =
               (float)(dVar35 * dVar40 + (double)*(float *)((int)&DAT_00ef0cf4 + iVar7));
          *(float *)(iVar9 + 0x18) =
               (float)(dVar20 * dVar40 + (double)*(float *)((int)&DAT_00ef0cf8 + iVar7));
          *(undefined4 *)(iVar9 + 0x1c) = *(undefined4 *)((int)&DAT_00ef0cfc + iVar7);
          sVar11 = *(short *)((int)&DAT_00eefa2a + iVar16);
          mobyutil::Lerp_vec4((float)dVar40,&local_1c0);
          iVar7 = sVar11 + 0x13;
          mobyutil::Lerp_vec4((float)dVar40,local_1b0);
          mobyutil::Lerp_vec4(*(float *)((int)&DAT_00eefa30 + iVar16),&local_1c0);
          fVar3 = *(float *)((int)&DAT_00eefa30 + iVar16) + *(float *)((int)&DAT_00eefa34 + iVar16);
          iVar9 = *(int *)((int)&DAT_00eefa3c + iVar16);
          *(float *)((int)&DAT_00eefa30 + iVar16) = fVar3;
          if (1.0 <= fVar3) {
            *(short *)((int)&DAT_00eefa2a + iVar16) = (short)iVar7 + (short)(iVar7 / 0x14) * -0x14;
            *(float *)((int)&DAT_00eefa30 + iVar16) = fVar3 - 1.0;
          }
          *(float *)(iVar9 + 0x10) = *(float *)(iVar9 + 0x10) + local_1c0;
          *(float *)(iVar9 + 0x14) = *(float *)(iVar9 + 0x14) + local_1bc;
          *(float *)(iVar9 + 0x18) = *(float *)(iVar9 + 0x18) + local_1b8;
        }
      }
    }
    iVar15 = iVar15 + 1;
    iVar16 = iVar16 + 0x18;
    if (199 < iVar15) {
      return local_140;
    }
  } while( true );
}



//==== 001c4f68  ns=mobyupdate_helpers  size=0x24
// sig: undefined M1106_001c4f68(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1106_001c4f68(void)

{
  DAT_00764010 = 1;
  DAT_00764014 = 1;
  DAT_00ef0db8 = 0;
  return;
}



//==== 001c50b0  ns=mobyupdate_unsorted  size=0x3fec
// sig: undefined UpdateMoby_1106(MobyInstance * moby)
// callers(0): 
// callees(81): 0006d720 RegisterFuncForMoby; 000b72b0 hero::TransitionMovement; 000c8444 hud::RegisterHUDCallback; 000c8b28 hud::Hud_SetEntryValueById; 000da9e8 lights::DeletePointLight; 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f1114 mobyfunc::GetBonePosition; 000f1e50 mobyfunc::SetLevelFlag; 000f9d18 mobyfunc::MB_ComputeSelectedJoints; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 000fe610 mobyutil::MB_SphericalToVector; 000fea60 mobyutil::MB_randSphere; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 000ffb70 mobyutil::GetGroundZ; 00106150 mobyutil::MB_RegisterLameShadow; 00106360 mobyutil::MB_SetZBoundsFromGround; 00108180 mobyutil::MB_computeLobVelocity; 0010c1e8 mobyutil::MB_MtxToEuler; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010ce18 mobyutil::MB_PathMoveDist; 0010e030 mobyutil::MB_genericExplosion; 00110b70 mobyutil::MB_IsPntInCuboid; 001118d8 mobyutil::MB_getTarget; 00113e88 mobyutil::MB_MayaFrameTrigger; 0011440c mobyutil::MB_SplineMarkCrossings; 00119a18 mobyfunc::DoManipulator; 0012aee8 partupd::SpawnPart_45; 001314c8 partupd::SpawnPart_61; 00132650 partupd::SpawnPart_65; 001367d0 path::PathFindClosestPnt; 00151e70 respawn::SetSpawnPoint; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 0019ddd0 mobyupdate_helpers::Spawn_Moby1046
// strings: 001c508c: '?fffA@' (raw)

/* WARNING: Removing unreachable block (ram,0x001c7350) */
/* WARNING: Removing unreachable block (ram,0x001c7360) */
/* WARNING: Removing unreachable block (ram,0x001c736c) */
/* WARNING: Removing unreachable block (ram,0x001c7374) */
/* WARNING: Type propagation algorithm not settling */
/* Moby 1106 */

void mobyupdate_unsorted::UpdateMoby_1106(MobyInstance *moby)

{
  bool bVar1;
  float fVar2;
  MobyModeBit MVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  f32 fVar7;
  Spline *pSVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  longlong lVar12;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  char cVar24;
  ulonglong uVar13;
  byte bVar25;
  undefined1 uVar26;
  u8 uVar27;
  undefined2 uVar21;
  short sVar22;
  short sVar23;
  uint uVar20;
  int iVar28;
  int iVar29;
  char *pcVar30;
  longlong lVar31;
  longlong lVar32;
  char *pcVar33;
  void **ppvVar34;
  uint uVar35;
  Spline *pSVar36;
  Vec4 *pVVar37;
  u8 *puVar38;
  vec4 *pvVar39;
  uint *puVar40;
  double dVar41;
  undefined8 uVar42;
  double dVar43;
  undefined8 uVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined8 uVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  undefined1 auStack_3b0 [16];
  undefined1 auStack_3a0 [16];
  float afStack_390 [4];
  undefined1 auStack_380 [16];
  undefined1 auStack_370 [16];
  undefined1 auStack_360 [16];
  undefined1 auStack_350 [16];
  undefined1 local_340 [16];
  undefined1 auStack_330 [16];
  undefined1 auStack_320 [16];
  undefined1 auStack_310 [16];
  undefined1 auStack_300 [16];
  undefined1 auStack_2f0 [16];
  float local_2e0;
  float local_2dc;
  Vec4 VStack_2d0;
  undefined1 auStack_2c0 [16];
  undefined1 auStack_2b0 [16];
  undefined1 auStack_2a0 [16];
  undefined1 auStack_290 [16];
  undefined1 auStack_280 [16];
  MobyInstance MStack_270;
  float local_168;
  undefined1 auStack_150 [16];
  MobyInstance *local_140;
  undefined4 local_130;
  int local_12c [2];
  undefined1 auStack_124 [24];
  undefined1 auStack_10c [28];
  longlong local_f0;
  
  lVar12 = (longlong)(int)moby;
  pvVar4 = moby->pVar;
  dVar51 = 2.5;
  mobyfunc::DoManipulator(0x4004000000000000,moby,0xb,(Manipulator *)((int)pvVar4 + 0x2a0));
  mobyupdate_helpers::M1106_001c3370(lVar12);
  if (g_gameMode == GAME_MODE_SCENE) {
    return;
  }
  if ((*(int *)((int)pvVar4 + 0x1a4) != -1) &&
     (iVar14 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar4 + 0x1a4)),
     iVar14 == 0)) {
    return;
  }
  if ((moby->enabled != '\0') &&
     (dVar41 = (double)FUN_005e8548(lVar12 + 0x10,0x951500), dVar41 < 35.0)) {
    mobyutil::MB_SetZBoundsFromGround(lVar12);
    moby->shadow = '\x1c';
  }
  lVar32 = lVar12 + 0x10;
  FUN_005e7e98(auStack_3b0,lVar32);
  mobyupdate_helpers::M1106_001c1e18(lVar12,pvVar4,(int)pvVar4 + 0x20);
  pVVar37 = &MStack_270.transform.v3;
  dVar50 = 30.0;
  mobyutil::MB_getTarget(0x403e000000000000,lVar12,&DAT_001c4f8c,pVVar37);
  dVar41 = (double)FUN_005e8588(pVVar37,lVar32);
  uVar42 = FUN_005e8338((double)(MStack_270.transform.v3.x - (moby->pos).x),
                        (double)(MStack_270.transform.v3.y - (moby->pos).y));
  dVar43 = (double)FUN_005e8588(lVar32,&g_heroPosition);
  uVar44 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                        (double)(g_heroPosition.y - (moby->pos).y));
  iVar14 = 0;
  iVar15 = fastfunc::FastDecTimerU8((int)pvVar4 + 0x1f7);
  if ((iVar15 != 0) &&
     (((dVar45 = (double)FUN_005e8588(lVar32,&g_heroPosition), 8.0 < dVar45 &&
       (moby->state != '\x05')) ||
      ((dVar45 = (double)FUN_005e8588(lVar32,&g_heroPosition), 6.0 < dVar45 &&
       ((moby->state == '\x05' ||
        ((uint)(byte)moby->setByGroup + (((byte)moby->setByGroup + 1) * 0x55 >> 8) * -3 == 1))))))))
  {
    iVar14 = 1;
  }
  uVar16 = fastfunc::FastDecTimerS16((int)pvVar4 + 0x194);
  bVar1 = false;
  uVar35 = (uint)LZCOUNT(uVar16) >> 5 ^ 1;
  iVar15 = fastfunc::FastDecTimerS16((int)pvVar4 + 0x19a);
  if ((iVar15 != 0) && (9.0 < dVar41)) {
    bVar1 = true;
  }
  bVar9 = false;
  if ((((*(char *)((int)pvVar4 + 0x1c7) != '\0') && (local_140 == g_heroMobyPtr)) &&
      (dVar41 < dVar50)) &&
     (dVar45 = (double)fastfunc::FastDiffRots(uVar42,(double)(moby->rotation).z),
     ABS(dVar45) < 1.3962633609771729)) {
    bVar9 = true;
  }
  uVar20 = 0;
  iVar15 = fastfunc::FastDecTimerS16((int)pvVar4 + 0x198);
  uVar27 = moby->state;
  if ((iVar15 != 0) &&
     ((((uVar27 == '\x05' ||
        ((uint)(byte)moby->setByGroup + (((byte)moby->setByGroup + 1) * 0x55 >> 8) * -3 == 1)) &&
       (dVar41 < 14.0)) || ((uVar27 != '\x05' && (dVar41 < 10.0)))))) {
    uVar20 = 1;
  }
  iVar15 = 0;
  bVar11 = false;
  dVar45 = 1.0;
  if ((((moby->pos).z + 1.0 < hero::g_heroGroundZ) && (g_standingOnMoby != 0)) &&
     (*(short *)(g_standingOnMoby + 0xa6) < 0x45d && 0x458 < *(short *)(g_standingOnMoby + 0xa6))) {
    bVar11 = true;
  }
  bVar25 = moby->setByGroup;
  if (bVar25 < 4) {
    if (bVar25 == 0) {
      bVar9 = false;
      iVar14 = 0;
    }
    else if (bVar25 < 2) {
      bVar9 = false;
      uVar35 = 0;
      if (uVar27 != '\x01') {
        bVar1 = false;
      }
    }
    else if (bVar25 < 3) {
      uVar20 = 0;
      uVar35 = 0;
      bVar9 = false;
      bVar1 = false;
    }
    else {
      iVar14 = *(int *)((int)pvVar4 + 0x1a8);
      uVar35 = (uint)((LZCOUNT(-1 - iVar14) << 0x3a) >> 0x3f) & uVar35;
      uVar20 = (uint)((LZCOUNT(-1 - iVar14) << 0x3a) >> 0x3f) & uVar20;
      iVar15 = (int)((LZCOUNT(-1 - iVar14) << 0x3a) >> 0x3f) + 1;
      bVar9 = false;
      iVar14 = iVar15;
    }
  }
  else if (bVar25 < 7) {
    if (bVar25 < 5) {
      bVar9 = false;
      uVar35 = 0;
      if (uVar27 != '\x01') {
        bVar1 = false;
      }
    }
    else if (bVar25 < 6) {
      uVar20 = 0;
      uVar35 = 0;
      bVar9 = false;
      bVar1 = false;
    }
    else if (*(int *)((int)pvVar4 + 0x1a8) == -1) {
      iVar14 = 0;
    }
    else {
      iVar15 = 1;
      uVar20 = 0;
      iVar14 = 1;
      uVar35 = 0;
    }
  }
  else if (bVar25 < 8) {
    bVar9 = false;
    uVar35 = 0;
    if (uVar27 != '\x01') {
      bVar1 = false;
    }
  }
  else if (bVar25 < 9) {
    uVar20 = 0;
    uVar35 = 0;
    bVar1 = false;
    bVar9 = false;
  }
  dVar49 = 16.0;
  uVar17 = fastfunc::FastDoubleToInt((double)(*(float *)((int)pvVar4 + 0x20) * 16.0));
  local_f0 = (longlong)(int)*(short *)((int)pvVar4 + 0x24);
  *(uint *)((int)pvVar4 + 0x1b4) = uVar17 & 0xfff0;
  uVar48 = 0x3fe0000000000000;
  iVar18 = fastfunc::FastDoubleToInt
                     ((double)(float)((double)(float)((double)local_f0 - 0.5) * dVar49));
  if (iVar18 <= (int)(uVar17 & 0xfff0)) {
    *(uint *)((int)pvVar4 + 0x1b4) = *(uint *)((int)pvVar4 + 0x1b4) | 0xf;
  }
  if ((uint)(byte)moby->setByGroup + (((byte)moby->setByGroup + 1) * 0x55 >> 8) * -3 == 0) {
    uVar17 = (int)*(uint *)((int)pvVar4 + 0x20) >> 0x1f;
    if ((int)((uVar17 >> 1 ^ *(uint *)((int)pvVar4 + 0x20)) - uVar17) < 0x3f000001) {
      *(undefined4 *)((int)pvVar4 + 0x1b4) = 0;
    }
    else {
      iVar19 = fastfunc::FastDoubleToInt((double)*(float *)((int)pvVar4 + 0x20));
      iVar28 = (int)*(short *)((int)pvVar4 + 0x24);
      iVar18 = iVar28 >> 0x1f;
      iVar29 = (int)*(short *)((int)pvVar4 + 0x24);
      iVar18 = ((iVar19 - (iVar19 / ((iVar28 / 6 + iVar18) - (iVar28 / 6 + iVar18 >> 0x1f))) *
                          ((iVar28 / 6 + iVar18) - (iVar28 / 6 + iVar18 >> 0x1f))) * 0x10) /
               ((iVar29 / 6 + (iVar29 >> 0x1f)) - (iVar29 / 6 + (iVar29 >> 0x1f) >> 0x1f));
      *(uint *)((int)pvVar4 + 0x1b4) =
           *(int *)((int)pvVar4 + 0x1b4) + (iVar18 + (iVar18 >> 0x1f & -iVar18) & 0xfU);
    }
  }
  if ((uint)(byte)moby->setByGroup + (((byte)moby->setByGroup + 1) * 0x55 >> 8) * -3 == 2) {
    *(int *)((int)pvVar4 + 0x1b4) = *(int *)((int)pvVar4 + 0x1b4) + 0xf;
  }
  if (moby->state != '\0' && moby->state != '\b') {
    mobyupdate_helpers::M1106_001c3478(lVar12);
  }
  cVar24 = *(char *)((int)pvVar4 + 0x1c5);
  if (cVar24 == '\x01') {
    cVar24 = '\x01';
    if (*(int *)((int)pvVar4 + 0x1f8) == -1) {
      iVar18 = sound::PlayMobySound(0xf,4,moby);
      *(int *)((int)pvVar4 + 0x1f8) = iVar18;
      cVar24 = *(char *)((int)pvVar4 + 0x1c5);
    }
    fVar2 = DAT_0071f408 * 0.01 + *(float *)((int)pvVar4 + 0x1c8);
    dVar46 = (double)fVar2;
    *(float *)((int)pvVar4 + 0x1c8) = fVar2;
    if (dVar45 <= dVar46) {
      cVar24 = '\0';
      *(undefined1 *)((int)pvVar4 + 0x1c5) = 0;
    }
    if (dVar45 < dVar46) {
      *(undefined4 *)((int)pvVar4 + 0x1c8) = 0x3f800000;
    }
  }
  if (cVar24 == '\x02') {
    uVar13 = (ulonglong)*(uint *)((int)pvVar4 + 0x1f8);
    if (*(uint *)((int)pvVar4 + 0x1f8) == 0xffffffff) {
      iVar18 = sound::PlayMobySound(0xf,4,moby);
      uVar13 = (ulonglong)iVar18;
      *(int *)((int)pvVar4 + 0x1f8) = iVar18;
    }
    dVar46 = -(double)(DAT_0071f408 * 0.01 - *(float *)((int)pvVar4 + 0x1c8));
    *(float *)((int)pvVar4 + 0x1c8) = (float)dVar46;
    dVar47 = 0.0;
    if (dVar46 <= 0.0) {
      if ((((int)uVar13 != -1) &&
          (iVar18 = (int)(uVar13 << 7) - (int)(uVar13 << 4),
          *(MobyInstance **)((int)sound::g_SoundChannels + iVar18 + 0x18) == moby)) &&
         (*(char *)((int)sound::g_SoundChannels + iVar18 + 4) != '\0')) {
        sound::sound_Kill((int)uVar13);
        dVar46 = (double)*(float *)((int)pvVar4 + 0x1c8);
      }
      *(undefined4 *)((int)pvVar4 + 0x1f8) = 0xffffffff;
      *(undefined1 *)((int)pvVar4 + 0x1c5) = 0;
    }
    if (dVar46 < dVar47) {
      *(undefined4 *)((int)pvVar4 + 0x1c8) = 0;
    }
  }
  dVar46 = 0.0;
  if (0 < *(int *)((int)pvVar4 + 0x1c8)) {
    RegisterFuncForMoby(&PTR_M1106_001c13d0_00708ba8,moby);
  }
  mobyupdate_helpers::M1106_001c30c0(lVar12,pvVar4,&g_heroPosition);
  bVar25 = moby->state;
  if ((bVar25 != 0) && (bVar25 != 0x10 && bVar25 != 10)) {
    iVar18 = hud::RegisterHUDCallback
                       (0x16,0xffff,&PTR_HudEntry_InitCounter_007056a0,
                        &PTR_HudEntry_UpdateCounter_007056c8,&PTR_Draw_MobyHealthBarHud_00705868,
                        (int *)((int)pvVar4 + 0x1b4),
                        (int)((longlong)*(short *)((int)pvVar4 + 0x24) << 4) + 0xf);
    *(int *)((int)pvVar4 + 0x1b0) = iVar18;
    bVar25 = moby->state;
  }
  iVar18 = g_standingOnMoby;
  if (8 < bVar25) {
    if (bVar25 < 0xe) {
      if (bVar25 < 0xb) {
        if (bVar25 < 10) {
          if ((0 < *(int *)((int)pvVar4 + 0x164)) ||
             (iVar14 = mobyupdate_helpers::M1106_001c2bb8(lVar12,pvVar4,(int)pvVar4 + 0x150,7,1),
             iVar14 == 0)) {
            uVar42 = FUN_005e8338((double)(*(float *)((int)pvVar4 + 0x150) - (moby->pos).x),
                                  (double)(*(float *)((int)pvVar4 + 0x154) - (moby->pos).y));
            mobyutil::OrganicDeltAngSpeed
                      (uVar42,(double)(DAT_0071f418 * 2.0943952),(double)(DAT_0071f418 * 0.6981317),
                       (double)(mobyutil::g_FrameTime * 2.0943952),lVar12,&DAT_00720000,
                       (int)pvVar4 + 0x168);
            iVar14 = *(int *)((int)pvVar4 + 0x164);
            if (iVar14 == 5) {
              moby->unk58 = 1.0;
              *(undefined4 *)((int)pvVar4 + 0x164) = 0;
              *(undefined4 *)((int)pvVar4 + 0x160) = 0;
              bVar25 = moby->animationId;
              uVar35 = rand();
              if ((uint)bVar25 != (uVar35 & 1)) {
                uVar35 = rand();
                uVar42 = mobyutil::MB_randRange(0,7);
                uVar44 = mobyutil::MB_randRange(0x1b,0x2d);
                mobyutil::MB_SetAnimation(lVar12,uVar35 & 1,uVar42,uVar44);
              }
              moby->state = '\x01';
            }
            else if (iVar14 == 4) {
              iVar14 = (int)pvVar4 + 0x110;
              puVar40 = &MStack_270.field60_0x90;
              FUN_005e81f0(puVar40,(int)pvVar4 + 0x120,iVar14);
              FUN_005e7f98((double)DAT_0071f408,puVar40,puVar40);
              FUN_005e7f54(iVar14,iVar14,puVar40);
              uVar21 = idol::GetAnimDuration(0x1e);
              mobyupdate_helpers::M1106_001bf8b0
                        (10.0,lVar12,pvVar4,3,iVar14,uVar21,0xffffffff800060ff,0);
              if ((*(int *)((int)pvVar4 + 0x164) != 0) &&
                 (iVar14 = fastfunc::FastDecTimerS32((int)pvVar4 + 0x160), iVar14 != 0)) {
                *(undefined4 *)((int)pvVar4 + 0x164) = 5;
              }
              RegisterFuncForMoby(&PTR_M1106_001c1a58_00708bb8,moby);
            }
            else if (iVar14 == 3) {
              dVar41 = (double)FUN_005e8588(lVar32,auStack_150);
              fVar2 = *(float *)((int)pvVar4 + 0x16c) + DAT_0071f408;
              *(float *)((int)pvVar4 + 0x16c) = fVar2;
              if (dVar41 <= (double)fVar2) {
                *(undefined4 *)((int)pvVar4 + 0x164) = 4;
              }
              iVar14 = fastfunc::FastDecTimerS32((int)pvVar4 + 0x160);
              if (iVar14 != 0) {
                uVar16 = idol::GetAnimDuration(0x14);
                *(undefined4 *)((int)pvVar4 + 0x160) = uVar16;
              }
              RegisterFuncForMoby(&PTR_M1106_001c1a58_00708bb8,moby);
            }
            else if (iVar14 == 2) {
              bVar1 = moby->animationId != '\a';
              if (((moby->updateId != '\a') || (bVar1)) && (bVar1)) {
                uVar42 = mobyutil::MB_randRange(7,10);
                mobyutil::MB_SetAnimation(lVar12,7,0,uVar42);
              }
              iVar14 = fastfunc::FastDecTimerS32((int)pvVar4 + 0x160);
              if (iVar14 != 0) {
                uVar16 = idol::GetAnimDuration(10);
                *(undefined4 *)((int)pvVar4 + 0x160) = uVar16;
                uVar44 = 0x41286a0000000000;
                uVar42 = 0x4014000000000000;
                partupd::SpawnPart_61(0x41286a0000000000,0x4014000000000000,lVar12,0);
                partupd::SpawnPart_61(uVar44,uVar42,lVar12,1);
              }
              dVar41 = (double)mobyfunc::BlendAnimFrame(moby);
              if (31.5 <= dVar41) {
                *(undefined4 *)((int)pvVar4 + 0x16c) = 0;
                *(undefined4 *)((int)pvVar4 + 0x164) = 3;
                *(undefined4 *)((int)pvVar4 + 0x11c) = 0;
              }
            }
            else if (iVar14 == 1) {
              uVar27 = moby->updateId;
              bVar1 = moby->animationId != '\a';
              if (((uVar27 != '\a') || (bVar1)) && (bVar1)) {
                uVar42 = mobyutil::MB_randRange(10,0xd);
                mobyutil::MB_SetAnimation(lVar12,7,0,uVar42);
                uVar27 = moby->updateId;
              }
              if ((uVar27 == '\a') &&
                 (dVar41 = (double)mobyfunc::BlendAnimFrame(moby), 9.5 <= dVar41)) {
                mobyfunc::GetBonePosition(lVar12,0,&MStack_270.field43_0x70);
                mobyfunc::GetBonePosition(lVar12,1,&MStack_270.colorManipulator);
                ppvVar34 = &MStack_270.pAnimationLayers;
                FUN_005e7f54(ppvVar34,&MStack_270.field43_0x70,&MStack_270.colorManipulator);
                FUN_005e822c(uVar48,ppvVar34,ppvVar34);
                FUN_005e7e98((int)pvVar4 + 0x110,ppvVar34);
                iVar14 = (int)pvVar4 + 0x130;
                FUN_005e81f0(iVar14,(int)pvVar4 + 0x150,(int)pvVar4 + 0x110);
                FUN_005e7f98((double)DAT_0071f408,iVar14,iVar14);
                *(undefined4 *)((int)pvVar4 + 0x164) = 2;
              }
            }
            else if (iVar14 == 0) {
              if (moby->animationId != '\a') {
                uVar42 = mobyutil::MB_randRange(10,0xd);
                mobyutil::MB_SetAnimation(lVar12,7,0,uVar42);
              }
              *(undefined4 *)((int)pvVar4 + 0x160) = 0;
              *(undefined4 *)((int)pvVar4 + 0x164) = 1;
            }
          }
        }
        else {
          if (*(int *)((int)pvVar4 + 0x1b0) != -1) {
            hud::Hud_SetEntryValueById(*(int *)((int)pvVar4 + 0x1b0),0);
            *(undefined4 *)((int)pvVar4 + 0x1b0) = 0xffffffff;
          }
          if ((moby->field43_0x70 & 2U) != 0) {
            iVar14 = (int)pvVar4 + 0x100;
            FUN_005e7f98(dVar45,iVar14,iVar14);
            *(undefined4 *)((int)pvVar4 + 0x108) = 0x3f800000;
            FUN_005e7e98(&MStack_270.collCount,lVar32);
            MStack_270.field71_0xa8 = (int)(float)((double)*(float *)((int)pvVar4 + 0x1b8) + dVar45)
            ;
            mobyutil::MB_genericExplosion
                      (dVar46,dVar46,0x401c000000000000,0x4014000000000000,0x4024000000000000,dVar45
                       ,0x4049000000000000,lVar12,iVar14,&MStack_270.collCount,&DAT_001c4f8c,1,0x14,
                       0xc,0x40);
            iVar14 = *(int *)((int)pvVar4 + 0x1cc);
            moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
            if (iVar14 != -1) {
              FUN_0044cddc(MobyInstance + iVar14);
            }
            (moby->pos).z = 20.0;
            moby->state = '\x10';
          }
        }
      }
      else if (bVar25 < 0xc) {
        if ((moby->field43_0x70 & 2U) != 0) {
          if (bVar11) {
            *(undefined4 *)((int)pvVar4 + 0x164) = 0;
            FUN_005e7e98((int)pvVar4 + 0x150,iVar18 + 0x10);
            *(float *)((int)pvVar4 + 0x158) = *(float *)((int)pvVar4 + 0x158) + 3.0;
            moby->state = '\t';
          }
          else {
            moby->state = '\x01';
          }
        }
      }
      else if (bVar25 < 0xd) {
        dVar43 = (double)*(float *)((int)pvVar4 + 0x20);
        iVar14 = (int)*(short *)((int)pvVar4 + 0x24);
        dVar41 = (double)fastfunc::FastIntToDouble
                                   ((iVar14 / 6 + (iVar14 >> 0x1f)) -
                                    (iVar14 / 6 + (iVar14 >> 0x1f) >> 0x1f));
        if (dVar41 < dVar43) {
          if (moby->animationId != '\v') {
            mobyutil::MB_SetAnimation(lVar12,0xb,0x3d,1);
          }
        }
        else if (moby->animationId != '\b') {
          uVar42 = mobyutil::MB_randRange(10,0xd);
          mobyutil::MB_SetAnimation(lVar12,8,0x35,uVar42);
        }
        moby->state = '\r';
        *(undefined4 *)((int)pvVar4 + 0x108) = 0;
        bVar25 = moby->setByGroup;
        uVar20 = bVar25 + 1;
        uVar35 = (uint)bVar25;
        if ((int)((uint)bVar25 + (uVar20 * 0x55 >> 8) * -3) < 2) {
          moby->setByGroup = (char)uVar20;
          uVar35 = uVar20;
        }
        uVar35 = uVar35 & 0xff;
        uVar20 = uVar35 + 1;
        if ((int)(uVar35 - ((uVar20 * 0x55 >> 8) + (uVar20 * 0x55 >> 8) * 2)) < 2) {
          moby->setByGroup = (char)uVar20;
          uVar35 = uVar20;
        }
        if (7 < (uVar35 & 0xff)) {
          moby->setByGroup = '\b';
        }
        bVar25 = *(byte *)((int)pvVar4 + 0x19d);
        uVar13 = (ulonglong)bVar25;
        iVar14 = *(int *)((int)pvVar4 + (uint)bVar25 * 4 + 0x1d8);
        if (iVar14 != -1) {
          if ((iVar14 != -1) &&
             (iVar15 = *(int *)((int)pvVar4 + (uint)bVar25 * 4 + 0x1e4), iVar15 != -1)) {
            pvVar5 = MobyInstance[iVar14].pVar;
            pvVar6 = MobyInstance[iVar15].pVar;
            iVar14 = *(int *)((int)pvVar5 + 0x28);
            if ((iVar14 != -1) && (*(int *)((int)pvVar6 + 0x28) != -1)) {
              dVar41 = (double)FUN_005e8588(&g_heroPosition,&Cuboids[iVar14].pos);
              dVar43 = (double)FUN_005e8588(&g_heroPosition,
                                            &Cuboids[*(int *)((int)pvVar6 + 0x28)].pos);
              if (dVar41 <= dVar43) {
                iVar14 = *(int *)((int)pvVar5 + 0x28);
                dVar41 = (double)FUN_005e8338((double)(Cuboids[iVar14].pos.x - (moby->pos).x),
                                              (double)(Cuboids[iVar14].pos.y - (moby->pos).y));
                (moby->rotation).z = (float)dVar41;
              }
              else {
                uVar13 = uVar13 + 3;
                dVar41 = (double)FUN_005e8338((double)(Cuboids[*(int *)((int)pvVar6 + 0x28)].pos.x -
                                                      (moby->pos).x),
                                              (double)(Cuboids[*(int *)((int)pvVar6 + 0x28)].pos.y -
                                                      (moby->pos).y));
                (moby->rotation).z = (float)dVar41;
              }
            }
          }
          MobyInstance[*(int *)((int)pvVar4 + (int)(uVar13 << 2) + 0x1d8)].setByGroup = '\x01';
        }
      }
      else {
        dVar41 = (double)mobyfunc::BlendAnimFrame(moby);
        if (10.0 < dVar41) {
          mobyfunc::GetBonePosition(lVar12,10,auStack_2c0);
          iVar14 = mobyutil::MB_randInt(0x1a);
          if (iVar14 == 0) {
            partupd::SpawnPart_45
                      (0x3ff99999a0000000,0x40ccb60000000000,auStack_2c0,&DAT_001c4f8c,0,0x40103080)
            ;
          }
        }
        if (moby->setByGroup == '\b') {
          dVar41 = (double)*(float *)((int)pvVar4 + 0x108);
          iVar14 = (int)pvVar4 + 0x100;
          FUN_005e822c(0x3fe6666660000000,iVar14,iVar14);
          *(float *)((int)pvVar4 + 0x108) =
               -(float)((double)mobyutil::g_FrameTime * 9.800000190734863 - dVar41);
          FUN_005e7f54(lVar32,lVar32,iVar14);
          fVar7 = (moby->pos).z;
          uVar35 = (int)fVar7 >> 0x1f;
          uVar20 = (int)*(uint *)((int)pvVar4 + 0x1b8) >> 0x1f;
          if ((int)((uVar20 >> 1 ^ *(uint *)((int)pvVar4 + 0x1b8)) - uVar20) <=
              (int)((uVar35 >> 1 ^ (uint)fVar7) - uVar35)) goto LAB_001c8fe8;
        }
        else {
          dVar41 = (double)mobyfunc::BlendAnimFrame(moby);
          if (dVar41 <= 79.0) goto LAB_001c8fe8;
        }
        uVar16 = idol::GetAnimDuration(10);
        *(undefined4 *)((int)pvVar4 + 0x160) = uVar16;
        *(undefined1 *)((int)pvVar4 + 0x1c5) = 2;
        moby->state = '\x0e';
        *(int *)((int)pvVar4 + 0x164) = (int)*(short *)((int)pvVar4 + 0x24) / 6;
      }
    }
    else if (bVar25 < 0x10) {
      if (bVar25 < 0xf) {
        iVar14 = (int)pvVar4 + 0x100;
        FUN_005e822c(0x3fd99999a0000000,iVar14,iVar14);
        FUN_005e7f54(lVar32,lVar32,iVar14);
        dVar41 = (double)mobyfunc::BlendAnimFrame(moby);
        dVar43 = 168.0;
        if (dVar41 < 168.0) {
          mobyfunc::GetBonePosition(lVar12,10,auStack_2b0);
          iVar14 = mobyutil::MB_randInt(0x1a);
          if (iVar14 == 0) {
            partupd::SpawnPart_45
                      (0x3ff99999a0000000,0x40ccb60000000000,auStack_2b0,&DAT_001c4f8c,0,0x40103080)
            ;
          }
        }
        iVar14 = mobyutil::MB_MayaFrameTrigger((float)dVar43,moby);
        if (iVar14 != 0) {
          mobyfunc::GetBonePosition(lVar12,5,auStack_2a0);
          mobyupdate_helpers::Spawn_Moby1046
                    (dVar45,0x4039000000000000,0x4000000000000000,
                     (double)(mobyutil::g_FrameTime * 8.0),dVar45,lVar12,auStack_2a0);
        }
        iVar14 = mobyutil::MB_MayaFrameTrigger(168.5,moby);
        if (iVar14 != 0) {
          mobyfunc::GetBonePosition(lVar12,6,auStack_290);
          mobyupdate_helpers::Spawn_Moby1046
                    (dVar45,0x4039000000000000,0x4000000000000000,
                     (double)(mobyutil::g_FrameTime * 8.0),dVar45,lVar12,auStack_290);
          mobyupdate_helpers::M1106_001bfb58(lVar12);
        }
        if (*(int *)((int)pvVar4 + 0x164) < 1) {
          iVar14 = fastfunc::FastDecTimerS32((int)pvVar4 + 0x160);
          if (iVar14 != 0) {
            bVar25 = *(byte *)((int)pvVar4 + 0x19d);
            if (bVar25 == 0) {
              FUN_005e7e98((int)pvVar4 + 0x120,ZEXT48(Splines[*(int *)((int)pvVar4 + 0x1a0)]) + 0x10
                          );
              *(byte *)((int)pvVar4 + 0x19c) = *(byte *)((int)pvVar4 + 0x19c) & 0xfe;
            }
            else if (bVar25 < 2) {
              FUN_005e7e98((int)pvVar4 + 0x120,ZEXT48(Splines[*(int *)((int)pvVar4 + 0x1a0)]) + 0x20
                          );
              *(byte *)((int)pvVar4 + 0x19c) = *(byte *)((int)pvVar4 + 0x19c) & 0xfd;
            }
            else if (bVar25 < 3) {
              dVar41 = (double)FUN_005e8588(&g_heroPosition,
                                            ZEXT48(Splines[*(int *)((int)pvVar4 + 0x1a0)]) + 0x30);
              dVar43 = (double)FUN_005e8588(&g_heroPosition,
                                            ZEXT48(Splines[*(int *)((int)pvVar4 + 0x1a0)]) + 0x40);
              if (dVar41 <= dVar43) {
                FUN_005e7e98((int)pvVar4 + 0x120,
                             ZEXT48(Splines[*(int *)((int)pvVar4 + 0x1a0)]) + 0x40);
              }
              else {
                FUN_005e7e98((int)pvVar4 + 0x120,
                             ZEXT48(Splines[*(int *)((int)pvVar4 + 0x1a0)]) + 0x30);
              }
              *(byte *)((int)pvVar4 + 0x19c) = *(byte *)((int)pvVar4 + 0x19c) & 0xfb;
            }
            *(uint *)((int)pvVar4 + 0x1a8) =
                 (uint)*(byte *)((int)pvVar4 + *(byte *)((int)pvVar4 + 0x19d) + 0x1d4);
            uVar42 = mobyupdate_helpers::M1106_001c1d28(lVar12,pvVar4,auStack_10c);
            mobyutil::MB_SplineMarkCrossings
                      (auStack_10c,uVar42,*(undefined4 *)((int)pvVar4 + 0x188));
            moby->state = '\x0f';
          }
        }
        else {
          iVar14 = fastfunc::FastDecTimerS32((int)pvVar4 + 0x160);
          if (iVar14 != 0) {
            *(undefined1 *)((int)pvVar4 + 0x67) = 0xfa;
            *(int *)((int)pvVar4 + 0x164) = *(int *)((int)pvVar4 + 0x164) + -1;
            *(float *)((int)pvVar4 + 0x20) =
                 (float)((double)*(float *)((int)pvVar4 + 0x20) - dVar45);
            mobyutil::MB_UpdateLightsTransition(lVar12,(int)pvVar4 + 0x60);
            if (*(int *)((int)pvVar4 + 0x20) < 1) {
              *(undefined4 *)((int)pvVar4 + 0x20) = 0;
              if (moby->animationId != '\b') {
                uVar42 = mobyutil::MB_randRange(10,0xd);
                mobyutil::MB_SetAnimation(lVar12,8,0,uVar42);
              }
              if (*(int *)((int)pvVar4 + 0x1f0) != -1) {
                FUN_004d407c(lVar12,1);
                mobyutil::MB_SpawnBoltsFromCrate(lVar12,0,0xffffffffffffffff);
                mobyfunc::SetLevelFlag(moby->levelFlagIdx);
                respawn::SetSpawnPoint
                          ((Vec4 *)&Cuboids[*(int *)((int)pvVar4 + 0x1f0)].pos,
                           (Vec4 *)&Cuboids[*(int *)((int)pvVar4 + 0x1f0)].rot);
              }
              moby->state = '\n';
            }
            else {
              if (*(int *)((int)pvVar4 + 0x164) < 1) {
                uVar16 = idol::GetAnimDuration(0x14);
              }
              else {
                uVar16 = idol::GetAnimDuration(10);
              }
              *(undefined4 *)((int)pvVar4 + 0x160) = uVar16;
            }
          }
        }
      }
      else {
        dVar41 = (double)mobyfunc::BlendAnimFrame(moby);
        if (198.0 < dVar41) {
          if (moby->animationId != '\n') {
            mobyutil::MB_SetAnimation(lVar12,10,0,0);
          }
          mobyfunc::GetBonePosition(lVar12,10,auStack_280);
          FUN_005e7e98((int)pvVar4 + 0xc0,auStack_280);
          *(undefined4 *)((int)pvVar4 + 200) = *(undefined4 *)((int)pvVar4 + 0x128);
          local_130 = 10;
          mobyfunc::MB_ComputeSelectedJoints(lVar12,1,&local_130,&MStack_270.levelFlagIdx);
          mobyutil::MB_MtxToEuler((int)&MStack_270.levelFlagIdx,&MStack_270);
          dVar41 = (double)fastfunc::FastWrapRot((moby->rotation).z,MStack_270.bSphere.z);
          *(float *)((int)pvVar4 + 0xcc) = (float)dVar41;
        }
        if (moby->updateId == '\n') {
          FUN_005e7e98(lVar32,(int)pvVar4 + 0xc0);
          (moby->rotation).z = *(f32 *)((int)pvVar4 + 0xcc);
          if (*(int *)((int)pvVar4 + (uint)*(byte *)((int)pvVar4 + 0x19d) * 4 + 0x1d8) != -1) {
            MobyInstance[*(int *)((int)pvVar4 + (uint)*(byte *)((int)pvVar4 + 0x19d) * 4 + 0x1d8)].
            setByGroup = '\0';
          }
          moby->unk58 = 1.5;
          moby->setByGroup = moby->setByGroup + '\x01';
          *(undefined4 *)((int)pvVar4 + 0x298) = 0;
          moby->state = '\x06';
          uVar16 = idol::GetAnimDuration(0x37);
          *(undefined4 *)((int)pvVar4 + 0x160) = uVar16;
        }
      }
    }
    else if (bVar25 < 0x11) {
      if (*(short *)((int)pvVar4 + 0x280) != -1) {
        lights::DeletePointLight();
      }
      iVar14 = *(int *)((int)pvVar4 + 0x1d0);
      if (iVar14 == -1) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      fVar7 = MobyInstance[iVar14].pos.z;
      fVar2 = MobyInstance[iVar14].pos.z;
      uVar35 = (int)fVar7 >> 0x1f;
      if (0x4209ffff < (int)((uVar35 >> 1 ^ (uint)fVar7) - uVar35)) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      MobyInstance[iVar14].pos.z = (34.6 - fVar2) * 0.1 + fVar2;
    }
    goto LAB_001c8fe8;
  }
  if (2 < bVar25) {
    if (bVar25 < 5) {
      if (bVar25 < 4) {
        mobyutil::OrganicDeltAngSpeed
                  (uVar42,(double)(DAT_0071f418 * 1.5707964),(double)(DAT_0071f418 * 0.6981317),
                   (double)(mobyutil::g_FrameTime * 1.0471976),lVar12);
        iVar14 = mobyutil::MB_MayaFrameTrigger(31.0,moby);
        if (((iVar14 != 0) || (iVar14 = mobyutil::MB_MayaFrameTrigger(67.0,moby), iVar14 != 0)) ||
           (iVar14 = mobyutil::MB_MayaFrameTrigger(101.0,moby), iVar14 != 0)) {
          *(int *)((int)pvVar4 + 0x164) = *(int *)((int)pvVar4 + 0x164) + 1;
          FUN_005e7e98(auStack_3a0,lVar32);
          *(undefined4 *)((int)pvVar4 + 0x168) = 0;
          mobyupdate_helpers::Spawn_Moby1046
                    (dVar45,0x4039000000000000,0x4000000000000000,
                     (double)(mobyutil::g_FrameTime * 8.0),dVar45,lVar12,auStack_3a0);
          mobyfunc::GetBonePosition(lVar12,(*(uint *)((int)pvVar4 + 0x164) & 1) + 5,auStack_3a0);
          uVar21 = idol::GetAnimDuration(0x1e);
          mobyupdate_helpers::M1106_001bf8b0
                    (10.0,lVar12,pvVar4,1,auStack_3a0,uVar21,0xffffffff800060ff,0);
          iVar14 = 0;
          dVar41 = 0.39269909262657166;
          dVar50 = 0.7853981852531433;
          dVar43 = 5.0;
          uVar42 = 0x3fe8000000000000;
          do {
            dVar45 = (double)mobyutil::MB_randRot();
            dVar49 = (double)mobyutil::MB_randRangeFloat((float)dVar41,(float)dVar50);
            mobyutil::MB_SphericalToVector
                      ((float)((double)mobyutil::g_FrameTime * dVar43),(float)dVar45,(float)dVar49,
                       afStack_390);
            FUN_005e7f98(uVar42,auStack_380,afStack_390);
            FUN_005e7f54(auStack_380,auStack_380,auStack_3a0);
            partupd::SpawnPart_65(auStack_380,afStack_390);
            iVar14 = iVar14 + 1;
          } while (iVar14 < 0x37);
          mobyupdate_helpers::M1106_001bfb58(lVar12);
        }
        if ((2 < *(int *)((int)pvVar4 + 0x164)) &&
           (iVar14 = mobyutil::MB_MayaFrameTrigger(51.0,moby), iVar14 != 0)) {
          if (bVar1) {
            *(undefined2 *)((int)pvVar4 + 0x194) = 0xc0;
            *(undefined4 *)((int)pvVar4 + 0x160) = 0xaa;
          }
          else {
            uVar21 = idol::GetAnimDuration(0x3c);
            *(undefined2 *)((int)pvVar4 + 0x194) = uVar21;
            uVar16 = idol::GetAnimDuration(0x37);
            sVar23 = *(short *)((int)pvVar4 + 0x19a);
            *(undefined4 *)((int)pvVar4 + 0x160) = uVar16;
            sVar22 = idol::GetAnimDuration(0x37);
            if (sVar23 <= sVar22) {
              sVar23 = idol::GetAnimDuration(0x3c);
              *(short *)((int)pvVar4 + 0x19a) = *(short *)((int)pvVar4 + 0x19a) + sVar23;
            }
          }
          moby->unk58 = 1.0;
          bVar25 = moby->animationId;
          uVar35 = rand();
          if ((uint)bVar25 != (uVar35 & 1)) {
            uVar35 = rand();
            uVar42 = mobyutil::MB_randRange(0,0xf);
            uVar44 = mobyutil::MB_randRange(0x1e,0x2a);
            mobyutil::MB_SetAnimation(lVar12,uVar35 & 1,uVar42,uVar44);
          }
          moby->state = '\x01';
        }
      }
      else {
        iVar14 = mobyupdate_helpers::M1106_001c2bb8(lVar12,pvVar4,&g_heroPosition,5,0);
        if (iVar14 == 0) {
          iVar14 = *(int *)((int)pvVar4 + 0x160);
          uVar35 = idol::GetAnimDuration(0x3c);
          if (iVar14 < (int)(((int)uVar35 >> 1) + (uint)((int)uVar35 < 0 && (uVar35 & 1) != 0))) {
            mobyfunc::GetBonePosition(lVar12,2,auStack_370);
            uVar21 = idol::GetAnimDuration(0x1e);
            mobyupdate_helpers::M1106_001bf8b0
                      (10.0,lVar12,pvVar4,2,auStack_370,uVar21,0xffffffff800060ff,0);
            uVar42 = 0x3fc99999a0000000;
            if (worldUpdateTime ==
                (((int)worldUpdateTime >> 3) +
                (uint)((int)worldUpdateTime < 0 && (worldUpdateTime & 7) != 0)) * 8) {
              partupd::SpawnPart_61(dVar46,0x3fc99999a0000000,lVar12,2);
            }
            uVar35 = worldUpdateTime - 4;
            if (uVar35 == (((int)uVar35 >> 3) + (uint)((int)uVar35 < 0 && (uVar35 & 7) != 0)) * 8) {
              partupd::SpawnPart_61(dVar46,uVar42,lVar12,3);
            }
          }
          if (moby->updateId == '\x05') {
            FUN_005e7e98(auStack_360,&MStack_270.transform.v3);
            mobyutil::GetGroundZ(uVar48,auStack_360,0);
            iVar14 = *(int *)((int)pvVar4 + 0x160) + 1;
            *(int *)((int)pvVar4 + 0x160) = iVar14;
            if (*(int *)((int)pvVar4 + 0x164) == 0) {
              FUN_005e81f0(auStack_350,lVar32,auStack_360);
              FUN_005e7f98(dVar45,auStack_350,auStack_350);
              FUN_005e7f98(0x3fb3333340000000,auStack_310,auStack_350);
              mathfunc::cosf(local_168);
              FUN_005e8128((double)local_168);
              FUN_005e81c0(local_340,auStack_350);
              FUN_005e7f98(auStack_300,auStack_350);
              FUN_005e81f0(local_340,local_340,auStack_300);
              uVar42 = 0x4020000000000000;
              FUN_005e7f98(0x4020000000000000,auStack_330,auStack_350);
              FUN_005e7f98(0x4010000000000000,local_340,local_340);
              FUN_005e7f54(auStack_330,auStack_330,auStack_360);
              FUN_005e81f0(auStack_330,auStack_330,local_340);
              FUN_005e7f98(uVar42,local_340,local_340);
              FUN_005e7f54(local_340,local_340,auStack_360);
              FUN_005e7f98(0x4000000000000000,auStack_350,auStack_350);
              FUN_005e81f0(local_340,local_340,auStack_350);
              FUN_005e7e98(auStack_2f0,&DAT_00969de0);
              iVar14 = idol::GetAnimDuration(0x28);
              local_f0 = (longlong)iVar14;
              FUN_005e822c((double)local_f0,auStack_320,auStack_2f0);
              FUN_005e81f0(auStack_350,local_340,auStack_330);
              FUN_005e822c(uVar48,auStack_350,auStack_350);
              FUN_005e7f54(auStack_350,auStack_350,auStack_330);
              FUN_005e81f0(auStack_350,auStack_350,auStack_360);
              FUN_005e81f0(auStack_350,auStack_350,auStack_310);
              FUN_005e81f0(auStack_350,auStack_320,auStack_350);
              FUN_005e7f54(auStack_330,auStack_330,auStack_350);
              FUN_005e7f54(local_340,local_340,auStack_350);
              FUN_005e7e98((int)pvVar4 + 0x110,auStack_330);
              FUN_005e7e98((int)pvVar4 + 0x120,local_340);
              FUN_005e7e98((int)pvVar4 + 0x140,auStack_330);
              iVar15 = (int)pvVar4 + 0x130;
              FUN_005e81f0(iVar15,local_340,auStack_330);
              iVar14 = idol::GetAnimDuration(0x3c);
              local_f0 = (longlong)iVar14;
              FUN_005e822c((double)(float)(dVar45 / (double)local_f0),iVar15,iVar15);
              FUN_005e7e98((int)pvVar4 + 0x150,(int)pvVar4 + 0x140);
              *(undefined4 *)((int)pvVar4 + 0x15c) = 0;
              *(undefined4 *)((int)pvVar4 + 0x164) = 1;
            }
            else {
              iVar15 = idol::GetAnimDuration(0x3c);
              if (iVar14 < iVar15) {
                FUN_005e7f54((int)pvVar4 + 0x140,(int)pvVar4 + 0x140,(int)pvVar4 + 0x130);
                RegisterFuncForMoby(&PTR_M1106_001c00b8_00708b90,moby);
                *(undefined4 *)((int)pvVar4 + 0x164) = 2;
              }
              else {
                *(undefined4 *)((int)pvVar4 + 0x164) = 0;
                uVar21 = idol::GetAnimDuration(0xf0);
                *(undefined2 *)((int)pvVar4 + 0x19a) = uVar21;
                uVar16 = idol::GetAnimDuration(200);
                *(undefined4 *)((int)pvVar4 + 0x160) = uVar16;
                moby->state = '\x01';
              }
            }
          }
        }
      }
    }
    else if (bVar25 < 7) {
      dVar43 = (double)(moby->rotation).z;
      uVar42 = 0x4000000000000000;
      mobyupdate_helpers::M1106_001c1d28(lVar12,pvVar4,auStack_124);
      if (iVar15 == 0) {
        uVar42 = 0x4018000000000000;
        if (((*(int *)((int)pvVar4 + 0x29c) == -1) || ((*(byte *)((int)pvVar4 + 0x19c) & 3) != 0))
           || (iVar18 = mobyutil::MB_IsPntInCuboid
                                  (&MStack_270.transform.v3,(longlong)*(int *)((int)pvVar4 + 0x29c))
              , iVar18 == 0)) {
          FUN_005e7e98(&VStack_2d0,&MStack_270.transform.v3);
          iVar18 = path::PathFindClosestPnt
                             ((float)dVar46,&VStack_2d0,Splines[*(int *)((int)pvVar4 + 0x290)]);
          FUN_005e7e98(&VStack_2d0,Splines[*(int *)((int)pvVar4 + 0x290)]->points + iVar18);
          dVar50 = (double)FUN_005e8588(lVar32,&VStack_2d0);
          if (dVar50 < (double)(float)((double)*(float *)((int)pvVar4 + 0x9c) + dVar45)) {
            FUN_005e7e98(&VStack_2d0,&MStack_270.transform.v3);
          }
        }
        else {
          iVar18 = path::PathFindClosestPnt
                             ((float)dVar46,(Vec4 *)&MStack_270.transform.v3,
                              Splines[*(int *)((int)pvVar4 + 0x1a0)]);
          FUN_005e7e98(&VStack_2d0,Splines[*(int *)((int)pvVar4 + 0x1a0)]->points + iVar18);
          dVar50 = (double)FUN_005e8588(lVar32,&VStack_2d0);
        }
      }
      else {
        FUN_005e7e98(&VStack_2d0,
                     Splines[*(int *)((int)pvVar4 + 0x188)]->points + *(int *)((int)pvVar4 + 0x1a8))
        ;
        dVar50 = (double)FUN_005e8588(lVar32,&VStack_2d0);
      }
      mobyupdate_helpers::M1106_001c2b20(dVar50,uVar42,0x3ff8000000000000,lVar12,pvVar4);
      if ((*(uint *)((int)pvVar4 + 0x298) & 3) == 0) {
        mobyupdate_helpers::M1106_001c2500(lVar12,pvVar4,&VStack_2d0,(int)pvVar4 + 0x140);
      }
      FUN_005e7e98(&local_2e0,(int)pvVar4 + 0x140);
      dVar45 = (double)(moby->rotation).z;
      fVar2 = (moby->pos).x;
      *(int *)((int)pvVar4 + 0x298) = *(int *)((int)pvVar4 + 0x298) + 1;
      dVar50 = (double)FUN_005e8338((double)(local_2e0 - fVar2),(double)(local_2dc - (moby->pos).y))
      ;
      dVar50 = (double)fastfunc::FastSubRots((float)dVar45,(float)dVar50);
      if (dVar50 <= (double)*(float *)((int)pvVar4 + 0x98)) {
        uVar20 = mobyupdate_helpers::M1106_001c26e0(uVar42,lVar12,pvVar4,&VStack_2d0,&local_2e0);
        fastfunc::FastSubRots((moby->rotation).z,(float)dVar43);
        dVar43 = (double)FUN_005e8030((int)pvVar4 + 0x100);
        bVar10 = false;
        if ((iVar15 == 0) && (dVar41 < 20.0)) {
          bVar10 = true;
        }
        if (((uVar20 & 4) != 0) || (dVar43 <= (double)(mobyutil::g_FrameTime * 0.01))) {
          uVar26 = idol::GetAnimDuration(0x5a);
          *(undefined1 *)((int)pvVar4 + 0x1f7) = uVar26;
          bVar25 = moby->animationId;
          uVar35 = rand();
          if ((uint)bVar25 != (uVar35 & 1)) {
            uVar35 = rand();
            uVar42 = mobyutil::MB_randRange(0,9);
            uVar44 = mobyutil::MB_randRange(0x14,0x28);
            mobyutil::MB_SetAnimation(lVar12,uVar35 & 1,uVar42,uVar44);
          }
          *(undefined4 *)((int)pvVar4 + 0x1a8) = 0xffffffff;
          moby->state = '\x01';
          goto LAB_001c8fe8;
        }
        if (moby->animationId == '\n') {
          if ((bVar10) && ((moby->field43_0x70 & 2U) != 0)) {
            uVar42 = mobyutil::MB_randRange(10,0xd);
            mobyutil::MB_SetAnimation(lVar12,0xc,5,uVar42);
          }
        }
        else if (((!bVar10) && ((moby->field43_0x70 & 2U) != 0)) && (moby->animationId != '\n')) {
          uVar42 = mobyutil::MB_randRange(10,0xd);
          mobyutil::MB_SetAnimation(lVar12,10,5,uVar42);
        }
        iVar15 = fastfunc::FastDecTimerS32((int)pvVar4 + 0x160);
        if (iVar15 != 0) {
          if (bVar1) {
            *(undefined4 *)((int)pvVar4 + 0x164) = 0;
            *(undefined4 *)((int)pvVar4 + 0x160) = 0;
            moby->unk58 = 1.0;
            if (moby->animationId != '\x05') {
              uVar42 = mobyutil::MB_randRange(0,2);
              uVar44 = mobyutil::MB_randRange(0x14,0x19);
              mobyutil::MB_SetAnimation(lVar12,5,uVar42,uVar44);
            }
            moby->state = '\x04';
          }
          if (uVar35 != 0) {
            *(undefined4 *)((int)pvVar4 + 0x164) = 0;
            if (moby->animationId != '\x04') {
              uVar42 = mobyutil::MB_randRange(0,5);
              uVar44 = mobyutil::MB_randRange(0x14,0x28);
              mobyutil::MB_SetAnimation(lVar12,4,uVar42,uVar44);
            }
            moby->unk58 = 1.0;
            moby->state = '\x03';
          }
          iVar15 = g_standingOnMoby;
          if (bVar11) {
            *(undefined4 *)((int)pvVar4 + 0x164) = 0;
            FUN_005e7e98((int)pvVar4 + 0x150,iVar15 + 0x10);
            *(float *)((int)pvVar4 + 0x158) = *(float *)((int)pvVar4 + 0x158) + 3.0;
            moby->state = '\t';
          }
          if (bVar9) {
            moby->unk58 = 1.0;
            if (moby->animationId != '\x06') {
              uVar42 = mobyutil::MB_randRange(0,2);
              uVar44 = mobyutil::MB_randRange(0x14,0x19);
              mobyutil::MB_SetAnimation(lVar12,6,uVar42,uVar44);
            }
            *(undefined4 *)((int)pvVar4 + 0x164) = 0;
            *(undefined4 *)((int)pvVar4 + 0x16c) = 0;
            *(undefined1 *)((int)pvVar4 + 0x1c4) = 0;
            *(undefined4 *)((int)pvVar4 + 0x294) = 0;
            moby->state = '\b';
            iVar15 = sound::PlayMobySound(9,4,moby);
            *(int *)((int)pvVar4 + 0x1f8) = iVar15;
          }
        }
        if (iVar14 == 0) {
          moby->unk58 = 1.0;
          bVar25 = moby->animationId;
          uVar35 = rand();
          if ((uint)bVar25 != (uVar35 & 1)) {
            uVar35 = rand();
            uVar42 = mobyutil::MB_randRange(0,2);
            uVar44 = mobyutil::MB_randRange(0x1c,0x28);
            mobyutil::MB_SetAnimation(lVar12,uVar35 & 1,uVar42,uVar44);
          }
          moby->state = '\x01';
        }
        if (moby->updateId == '\f') {
          mobyupdate_helpers::M1106_001bfdb8(lVar12,pvVar4,&MStack_270.transform.v3);
        }
      }
      else {
        moby->unk58 = 1.0;
        *(u8 *)((int)pvVar4 + 500) = moby->state;
        *(undefined1 *)((int)pvVar4 + 0x1f6) = 10;
        *(undefined1 *)((int)pvVar4 + 0x1f5) = 1;
        FUN_005e7e98((int)pvVar4 + 0xc0,&local_2e0);
        if (moby->animationId != '\x03') {
          uVar42 = mobyutil::MB_randRange(0,1);
          uVar44 = mobyutil::MB_randRange(0xf,0x16);
          mobyutil::MB_SetAnimation(lVar12,3,uVar42,uVar44);
        }
        moby->state = '\a';
      }
      if ((moby->updateId == '\n') || (moby->updateId == '\f')) {
        iVar14 = mobyutil::MB_MayaFrameTrigger(27.5,moby);
        if (iVar14 != 0) {
          mobyupdate_helpers::M1106_001bfb58(lVar12);
        }
        iVar14 = mobyutil::MB_MayaFrameTrigger(73.0,moby);
        if (iVar14 != 0) {
          mobyupdate_helpers::M1106_001bfb58(lVar12);
        }
      }
    }
    else if (bVar25 < 8) {
      if (*(char *)((int)pvVar4 + 0x1f5) == '\0') {
        FUN_005e7e98((int)pvVar4 + 0xc0,&g_heroPosition);
      }
      uVar42 = FUN_005e8338((double)(*(float *)((int)pvVar4 + 0xc0) - (moby->pos).x),
                            (double)(*(float *)((int)pvVar4 + 0xc4) - (moby->pos).y));
      dVar41 = (double)fastfunc::FastDiffRots(uVar42,(double)(moby->rotation).z);
      if ((uVar20 == 0) && ((moby->field43_0x70 & 2U) != 0)) {
        if (9.999999747378752e-05 <= dVar41) {
          if (moby->animationId != '\x0e') {
            uVar42 = mobyutil::MB_randRange(10,0xd);
            mobyutil::MB_SetAnimation(lVar12,0xe,5,uVar42);
          }
        }
        else if (moby->animationId != '\x03') {
          uVar42 = mobyutil::MB_randRange(10,0xd);
          mobyutil::MB_SetAnimation(lVar12,3,5,uVar42);
        }
      }
      uVar27 = moby->updateId;
      if ((uVar27 == '\x0e' || uVar27 == '\x03') || (uVar27 == '\r')) {
        dVar43 = (double)mobyfunc::BlendAnimFrame(moby);
        if ((dVar43 < 14.5) || (((19.0 < dVar43 && (dVar43 < 35.5)) || (40.5 < dVar43)))) {
          uVar42 = FUN_005e8338((double)(*(float *)((int)pvVar4 + 0xc0) - (moby->pos).x),
                                (double)(*(float *)((int)pvVar4 + 0xc4) - (moby->pos).y));
          mobyutil::OrganicDeltAngSpeed
                    (uVar42,(double)(DAT_0071f418 * 2.0943952),(double)(DAT_0071f418 * 0.6981317),
                     (double)(mobyutil::g_FrameTime * 2.0943952),lVar12,&DAT_001c4f8c,
                     (int)pvVar4 + 0x168);
        }
        if ((dVar41 <= 0.0010000000474974513) || (moby->animationId != '\x03')) {
          if ((dVar41 < 0.0010000000474974513) && (moby->animationId == '\x0e')) {
            uVar42 = mobyutil::MB_randRange(10,0xd);
            mobyutil::MB_SetAnimation(lVar12,3,5,uVar42);
          }
        }
        else if (moby->animationId != '\x0e') {
          uVar42 = mobyutil::MB_randRange(10,0xd);
          mobyutil::MB_SetAnimation(lVar12,0xe,5,uVar42);
        }
      }
      else {
        *(undefined4 *)((int)pvVar4 + 0x84) = 0;
      }
      dVar43 = (double)(moby->rotation).z;
      dVar41 = (double)FUN_005e8338((double)(*(float *)((int)pvVar4 + 0xc0) - (moby->pos).x),
                                    (double)(*(float *)((int)pvVar4 + 0xc4) - (moby->pos).y));
      dVar41 = (double)fastfunc::FastSubRots((float)dVar43,(float)dVar41);
      if (dVar41 < (double)(*(float *)((int)pvVar4 + 0x98) * 0.25)) {
        *(undefined1 *)((int)pvVar4 + 0x100) = 0;
        *(undefined1 *)((int)pvVar4 + 0x101) = 0;
        *(undefined1 *)((int)pvVar4 + 0x102) = 0;
        *(undefined1 *)((int)pvVar4 + 0x103) = 0;
        *(undefined1 *)((int)pvVar4 + 0x104) = 0;
        *(undefined1 *)((int)pvVar4 + 0x105) = 0;
        *(undefined1 *)((int)pvVar4 + 0x106) = 0;
        *(undefined1 *)((int)pvVar4 + 0x107) = 0;
        *(undefined1 *)((int)pvVar4 + 0x108) = 0;
        *(undefined1 *)((int)pvVar4 + 0x109) = 0;
        *(undefined1 *)((int)pvVar4 + 0x10a) = 0;
        *(undefined1 *)((int)pvVar4 + 0x10b) = 0;
        *(undefined1 *)((int)pvVar4 + 0x10c) = 0;
        *(undefined1 *)((int)pvVar4 + 0x10d) = 0;
        *(undefined1 *)((int)pvVar4 + 0x10e) = 0;
        *(undefined1 *)((int)pvVar4 + 0x10f) = 0;
        uVar27 = *(u8 *)((int)pvVar4 + 0x1f6);
        if (moby->animationId != uVar27) {
          uVar42 = mobyutil::MB_randRange(0,2);
          uVar44 = mobyutil::MB_randRange(0xf,0x1b);
          mobyutil::MB_SetAnimation(lVar12,uVar27,uVar42,uVar44);
        }
        moby->state = *(u8 *)((int)pvVar4 + 500);
      }
      uVar27 = moby->updateId;
      if ((uVar27 == '\x03') || (uVar27 == '\x0e')) {
        iVar14 = mobyutil::MB_MayaFrameTrigger((float)dVar49,moby);
        if (iVar14 != 0) {
          mobyupdate_helpers::M1106_001bfb58(lVar12);
        }
        iVar14 = mobyutil::MB_MayaFrameTrigger(37.0,moby);
        if (iVar14 != 0) {
          mobyupdate_helpers::M1106_001bfb58(lVar12);
        }
      }
      else if (uVar27 == '\r') {
        iVar14 = mobyutil::MB_MayaFrameTrigger(13.0,moby);
        if (iVar14 != 0) {
          mobyupdate_helpers::M1106_001bfb58(lVar12);
        }
        iVar14 = mobyutil::MB_MayaFrameTrigger(34.0,moby);
        if (iVar14 != 0) {
          mobyupdate_helpers::M1106_001bfb58(lVar12);
        }
      }
    }
    else if ((0 < *(int *)((int)pvVar4 + 0x294)) ||
            (iVar14 = mobyupdate_helpers::M1106_001c2bb8(lVar12,pvVar4,&g_heroPosition,6,0),
            iVar14 == 0)) {
      *(undefined4 *)((int)pvVar4 + 0x294) = 1;
      mobyutil::OrganicDeltAngSpeed
                (uVar44,(double)(DAT_0071f418 * 2.0943952),(double)(DAT_0071f418 * 0.6981317),
                 (double)(mobyutil::g_FrameTime * 2.0943952),lVar12,&DAT_001c4f8c,
                 (int)pvVar4 + 0x168);
      mobyfunc::GetBonePosition(lVar12,4,&MStack_270.pos);
      dVar41 = (double)mobyupdate_helpers::M1106_001c3a18(lVar12,&MStack_270.pos);
      if (moby->updateId == '\x06') {
        FUN_005e7e98((int)pvVar4 + 0x140,&g_heroPosition);
        dVar50 = 0.6000000238418579;
        *(float *)((int)pvVar4 + 0x148) = *(float *)((int)pvVar4 + 0x148) + 0.6;
        if (dVar43 <= (double)*(float *)((int)pvVar4 + 0x16c)) {
          if ((*(char *)((int)pvVar4 + 0x1c4) != '\0') ||
             ((iVar14 = fastfunc::FastDecTimerS32((int)pvVar4 + 0x160), iVar14 != 0 &&
              (dVar41 < dVar50)))) {
            *(undefined1 *)((int)pvVar4 + 0x1c4) = 1;
            if (g_heroState != UNK_78) {
              FUN_005e7e98((int)pvVar4 + 0x110,&g_heroPosition);
              FUN_005e7e98((int)pvVar4 + 0x120,&g_heroPosition);
              fVar2 = (moby->pos).z;
              if (fVar2 - g_heroPosition.z < 0.0) {
                fVar2 = g_heroPosition.z;
              }
              *(float *)((int)pvVar4 + 0x128) = fVar2 + 2.0;
              hero::TransitionMovement(0x78,1);
              *(undefined4 *)((int)pvVar4 + 0x164) = 0;
              *(undefined2 *)((int)pvVar4 + 0x19e) = 0;
              *(undefined4 *)((int)pvVar4 + 0x1ac) = 0x41a00000;
            }
            puVar38 = &MStack_270.state;
            iVar14 = (int)pvVar4 + 0x110;
            FUN_005e81f0(puVar38,(int)pvVar4 + 0x120,iVar14);
            FUN_005e822c((double)(DAT_0071f408 * 0.1),puVar38,puVar38);
            FUN_005e7f54(iVar14,iVar14,puVar38);
            FUN_005e7e98(&DAT_0096ba10,iVar14);
            FUN_005e7e98(&g_heroPosition,iVar14);
            dVar50 = 25.132741928100586;
            dVar41 = (double)fastfunc::FastWrapRot(DAT_0096ba28,mobyutil::g_FrameTime * 25.132742);
            DAT_0096ba28 = (float)dVar41;
            dVar41 = (double)fastfunc::FastWrapRot
                                       ((float)dVar41,
                                        (float)((double)mobyutil::g_FrameTime * dVar50));
            g_heroRotation.z = (float)dVar41;
            *(float *)((int)pvVar4 + 0x16c) = (float)dVar43;
            iVar14 = *(int *)(&DAT_00763f04 + *(int *)((int)pvVar4 + 0x164) * 0x10);
            if (iVar14 == -1) {
              *(undefined4 *)((int)pvVar4 + 0x164) = 0;
              uVar21 = idol::GetAnimDuration(800);
              *(undefined2 *)((int)pvVar4 + 0x196) = uVar21;
              uVar16 = idol::GetAnimDuration(0xf0);
              *(undefined4 *)((int)pvVar4 + 0x160) = uVar16;
              mobyupdate_helpers::M1106_001c3510(lVar12);
              if (g_heroState == UNK_78) {
                hero::TransitionMovement(0,1);
              }
              iVar14 = *(int *)((int)pvVar4 + 0x1f8);
              *(undefined1 *)((int)pvVar4 + 0x1c7) = 0;
              if (((iVar14 != -1) && (sound::g_SoundChannels[iVar14].pMoby == moby)) &&
                 (sound::g_SoundChannels[iVar14].state != '\0')) {
                sound::sound_Kill(iVar14);
              }
              *(undefined4 *)((int)pvVar4 + 0x1f8) = 0xffffffff;
              moby->state = '\x01';
            }
            else {
              sVar23 = *(short *)((int)pvVar4 + 0x19e);
              sVar22 = *(short *)(&DAT_0072103c +
                                 iVar14 * 0x10 + (int)((longlong)iVar14 * -0xf) * -4);
              if (sVar23 == 0) {
                uVar35 = (&currentAmmoArray.field0_0x0)[iVar14];
                sVar23 = (short)((int)uVar35 >> 3) + (ushort)((int)uVar35 < 0 && (uVar35 & 7) != 0);
                *(short *)((int)pvVar4 + 0x19e) = sVar23;
                if (sVar23 < sVar22) {
                  *(short *)((int)pvVar4 + 0x19e) = sVar22;
                }
                dVar41 = (double)mobyutil::MB_randRangeFloat
                                           (*(float *)((int)pvVar4 + 0x1ac) + 20.0,
                                            *(float *)((int)pvVar4 + 0x1ac) + 100.0);
                *(float *)((int)pvVar4 + 0x1ac) = (float)dVar41;
                sVar23 = *(short *)((int)pvVar4 + 0x19e);
              }
              lVar31 = (longlong)sVar23;
              uVar35 = (&currentAmmoArray.field0_0x0)[iVar14];
              if ((int)uVar35 < (int)sVar23) {
                lVar31 = (longlong)(int)uVar35;
                *(undefined2 *)((int)pvVar4 + 0x19e) = 0;
                *(int *)((int)pvVar4 + 0x164) = *(int *)((int)pvVar4 + 0x164) + 1;
                uVar35 = (&currentAmmoArray.field0_0x0)[iVar14];
              }
              iVar15 = uVar35 - (int)(lVar31 << 3);
              lVar31 = lVar31 + (-(longlong)iVar15 >> 0x3f & ((int)lVar31 + iVar15) - lVar31);
              iVar15 = (int)lVar31;
              if (0 < iVar15) {
                if (*(int *)((int)pvVar4 + 0x18c) == -1) {
                  mobyutil::MB_randSphere
                            ((double)(mobyutil::g_FrameTime * 4.0),
                             (double)(mobyutil::g_FrameTime * 10.0),&MStack_270.updateDistance);
                  if ((float)MStack_270.color < mobyutil::g_FrameTime * 2.0) {
                    dVar41 = (double)mobyutil::MB_randRangeFloat
                                               (mobyutil::g_FrameTime * 3.0,
                                                mobyutil::g_FrameTime * 6.0);
                    MStack_270.color = (uint)(float)dVar41;
                  }
                  pvVar39 = &MStack_270.rotation;
                  FUN_005e7f98(0x3fecccccc0000000,pvVar39,&MStack_270.updateDistance);
                  FUN_005e7f54(pvVar39,pvVar39,&g_heroPosition);
                }
                else {
                  local_12c[0] = 0;
                  local_12c[1] = 0;
                  pSVar8 = Splines[*(int *)((int)pvVar4 + 0x18c)];
                  local_12c[0] = path::PathFindClosestPnt
                                           ((float)dVar46,(Vec4 *)&g_heroPosition,pSVar8);
                  pcVar33 = &MStack_270.previousAnimationFrame;
                  dVar41 = 8.0;
                  dVar50 = 12.0;
                  dVar43 = 10.0;
                  do {
                    do {
                      *(float *)((int)pvVar4 + 0x1ac) =
                           (float)((double)*(float *)((int)pvVar4 + 0x1ac) + dVar43);
                      mobyutil::MB_PathMoveDist(pSVar8,pcVar33,local_12c,local_12c + 1);
                      dVar45 = (double)FUN_005e8588(&g_heroPosition,pcVar33);
                      dVar49 = (double)FUN_005e8588(lVar32,pcVar33);
                    } while (dVar45 < dVar41);
                  } while (dVar49 < dVar50);
                  mobyupdate_helpers::M1106_001c2480(uVar48,pcVar33);
                  pvVar39 = &MStack_270.rotation;
                  FUN_005e81f0(pvVar39,pcVar33,&g_heroPosition);
                  dVar46 = (double)MStack_270.unk58;
                  FUN_005e7f98(0x3fecccccc0000000,pvVar39,pvVar39);
                  pcVar30 = &MStack_270.updateDistance;
                  FUN_005e7e98(pcVar30,pvVar39);
                  MStack_270.color = 0;
                  dVar41 = 15.0;
                  FUN_005e7f98((double)(mobyutil::g_FrameTime * 15.0),pcVar30,pcVar30);
                  FUN_005e7f54(pvVar39,pvVar39,&g_heroPosition);
                  dVar41 = (double)mobyutil::MB_computeLobVelocity
                                             ((double)(float)((double)mobyutil::g_FrameTime * dVar41
                                                             ),(double)(DAT_0071f418 * -9.8),pvVar39
                                              ,pcVar33);
                  MStack_270.color = (uint)(float)dVar41;
                  dVar41 = (double)mobyutil::MB_randRangeFloat(0.7,2.0);
                  *(float *)((int)pvVar4 + 0x1ac) =
                       (float)((double)*(float *)((int)pvVar4 + 0x1ac) + dVar41);
                }
                sound::PlayMobySound(0xb,0,moby);
                iVar18 = FUN_002ea758(&MStack_270.rotation,(longlong)iVar14,lVar31,0);
                if (iVar18 != 0) {
                  iVar18 = *(int *)(iVar18 + 0x78);
                  FUN_005e7e98(iVar18 + 0x10,&MStack_270.updateDistance);
                  *(float *)(iVar18 + 0x28) = (float)dVar46;
                  (&currentAmmoArray.field0_0x0)[iVar14] =
                       (&currentAmmoArray.field0_0x0)[iVar14] - iVar15;
                  uVar16 = idol::GetAnimDuration(0);
                  *(undefined4 *)((int)pvVar4 + 0x160) = uVar16;
                }
              }
            }
          }
        }
        else {
          dVar41 = (double)mobyutil::g_FrameTime;
          *(undefined4 *)((int)pvVar4 + 0x160) = 0;
          *(float *)((int)pvVar4 + 0x16c) =
               (float)(dVar41 * 15.0 + (double)*(float *)((int)pvVar4 + 0x16c));
        }
        if (!bVar9) {
          *(undefined4 *)((int)pvVar4 + 0x164) = 0;
          uVar21 = idol::GetAnimDuration(0xf);
          *(undefined2 *)((int)pvVar4 + 0x196) = uVar21;
          mobyupdate_helpers::M1106_001c3510(lVar12);
          if (g_heroState == UNK_78) {
            hero::TransitionMovement(0,1);
          }
          uVar16 = idol::GetAnimDuration(0x46);
          *(undefined1 *)((int)pvVar4 + 0x1c7) = 0;
          iVar14 = *(int *)((int)pvVar4 + 0x1f8);
          *(undefined4 *)((int)pvVar4 + 0x160) = uVar16;
          if (((iVar14 != -1) && (sound::g_SoundChannels[iVar14].pMoby == moby)) &&
             (sound::g_SoundChannels[iVar14].state != '\0')) {
            sound::sound_Kill(iVar14);
          }
          *(undefined4 *)((int)pvVar4 + 0x1f8) = 0xffffffff;
          moby->state = '\x01';
        }
        if (uVar20 != 0) {
          uVar21 = idol::GetAnimDuration(0x1e);
          *(undefined2 *)((int)pvVar4 + 0x196) = uVar21;
          if (moby->animationId != '\t') {
            uVar42 = mobyutil::MB_randRange(0,2);
            uVar44 = mobyutil::MB_randRange(0x10,0x19);
            mobyutil::MB_SetAnimation(lVar12,9,uVar42,uVar44);
          }
          mobyupdate_helpers::M1106_001c3510(lVar12);
          if (g_heroState == UNK_78) {
            hero::TransitionMovement(0,1);
          }
          iVar14 = *(int *)((int)pvVar4 + 0x1f8);
          if (((iVar14 != -1) && (sound::g_SoundChannels[iVar14].pMoby == moby)) &&
             (sound::g_SoundChannels[iVar14].state != '\0')) {
            sound::sound_Kill(iVar14);
          }
          *(undefined4 *)((int)pvVar4 + 0x1f8) = 0xffffffff;
          moby->state = '\x02';
        }
      }
    }
    goto LAB_001c8fe8;
  }
  if (bVar25 == 0) {
    DAT_00eef9e0 = 0;
    moby->state = '\x01';
    moby->setByGroup = '\0';
    iVar14 = *(int *)((int)pvVar4 + 0x18c);
    *(undefined4 *)((int)pvVar4 + 400) = 0;
    *(undefined2 *)((int)pvVar4 + 0x280) = 0xffff;
    if ((iVar14 != -1) && (iVar15 = 0, 0 < Splines[iVar14]->cnt)) {
      iVar18 = 0;
      do {
        iVar15 = iVar15 + 1;
        pSVar8 = Splines[iVar14];
        dVar41 = (double)FUN_005e8548((int)&pSVar8->points[0].x + iVar18,
                                      (int)pSVar8 +
                                      ((iVar15 - (iVar15 / pSVar8->cnt) * pSVar8->cnt) * 4 + 4) * 4)
        ;
        *(float *)((int)&Splines[*(int *)((int)pvVar4 + 0x18c)]->points[0].w + iVar18) =
             (float)dVar41;
        iVar14 = *(int *)((int)pvVar4 + 0x18c);
        pSVar8 = Splines[iVar14];
        *(float *)((int)pvVar4 + 400) =
             *(float *)((int)pvVar4 + 400) + *(float *)((int)&pSVar8->points[0].w + iVar18);
        iVar18 = iVar18 + 0x10;
      } while (iVar15 < pSVar8->cnt);
    }
    if (*(int *)((int)pvVar4 + 0x290) != -1) {
      iVar15 = 0;
      pSVar8 = Splines[*(int *)((int)pvVar4 + 0x290)];
      iVar14 = pSVar8->cnt;
      pSVar36 = pSVar8;
      if (0 < iVar14) {
        do {
          iVar15 = iVar15 + 1;
          dVar41 = (double)FUN_005e8548(pSVar36->points,
                                        (int)pSVar8 +
                                        ((iVar15 - (iVar15 / iVar14) * iVar14) * 4 + 4) * 4);
          pSVar36->points[0].w = (float)dVar41;
          iVar14 = pSVar8->cnt;
          pSVar36 = (Spline *)pSVar36->points;
        } while (iVar15 < iVar14);
      }
    }
    iVar14 = *(int *)((int)pvVar4 + 0x188);
    if ((iVar14 != -1) && (iVar15 = 0, 0 < Splines[iVar14]->cnt)) {
      iVar18 = 0;
      do {
        iVar14 = fastfunc::FastDoubleToInt
                           ((double)*(float *)((int)&Splines[iVar14]->points[0].w + iVar18));
        if ((-1 < iVar14) && (iVar14 < 4)) {
          *(char *)((int)pvVar4 + iVar14 + 0x1d4) = (char)iVar15;
        }
        iVar14 = *(int *)((int)pvVar4 + 0x188);
        iVar15 = iVar15 + 1;
        iVar18 = iVar18 + 0x10;
      } while (iVar15 < Splines[iVar14]->cnt);
    }
    MVar3 = moby->modeBits;
    uVar16 = *(undefined4 *)((int)pvVar4 + 0x188);
    *(uint *)((int)pvVar4 + 0xa8) = *(uint *)((int)pvVar4 + 0xa8) & 0xfffffff7;
    moby->modeBits = MVar3 | CAN_BE_AUTO_TARGETED;
    mobyutil::MB_SplineMarkCrossings((int)pvVar4 + 0x170,3,uVar16);
    *(undefined1 *)((int)pvVar4 + 0x19c) = 7;
    moby->updateDistance = -1;
    iVar14 = *(int *)((int)pvVar4 + 0x188);
    moby->drawDistance = 0xff;
    *(undefined4 *)((int)pvVar4 + 0x1a8) = 0xffffffff;
    *(undefined4 *)((int)pvVar4 + 0x1b0) = 0xffffffff;
    iVar14 = path::PathFindClosestPnt((float)dVar46,(Vec4 *)lVar32,Splines[iVar14]);
    *(int *)((int)pvVar4 + 0x1c0) = iVar14;
    DAT_00764010 = 1;
    DAT_00764014 = 1;
    DAT_00ef0db8 = 0;
    moby->scale = moby->scale * 1.75;
    *(undefined1 *)((int)pvVar4 + 0x1c7) = 0;
    *(undefined4 *)((int)pvVar4 + 0x98) = 0x3fdf66f3;
    *(undefined1 *)((int)pvVar4 + 0x29) = 1;
    uVar26 = fastfunc::FastDoubleToInt(dVar50);
    *(undefined1 *)((int)pvVar4 + 0x58) = uVar26;
    uVar26 = fastfunc::FastDoubleToInt(0x4044000000000000);
    *(undefined1 *)((int)pvVar4 + 0x5a) = uVar26;
    goto LAB_001c8fe8;
  }
  if (bVar25 < 2) {
    if (((moby->field43_0x70 & 2U) != 0) &&
       (bVar25 = moby->animationId, uVar17 = rand(), (uint)bVar25 != (uVar17 & 1))) {
      uVar17 = rand();
      uVar42 = mobyutil::MB_randRange(0,0xf);
      uVar44 = mobyutil::MB_randRange(0x1e,0x2a);
      mobyutil::MB_SetAnimation(lVar12,uVar17 & 1,uVar42,uVar44);
    }
    iVar15 = fastfunc::FastDecTimerS32((int)pvVar4 + 0x160);
    if (iVar15 != 0) {
      uVar27 = moby->state;
      if (bVar1) {
        *(undefined4 *)((int)pvVar4 + 0x164) = 0;
        *(undefined4 *)((int)pvVar4 + 0x160) = 0;
        if (moby->animationId != '\x05') {
          uVar42 = mobyutil::MB_randRange(0,2);
          uVar44 = mobyutil::MB_randRange(0x12,0x14);
          mobyutil::MB_SetAnimation(lVar12,5,uVar42,uVar44);
        }
        uVar27 = '\x04';
        moby->state = '\x04';
      }
      if ((uVar35 != 0) && ((uVar27 != '\x05' || (iVar15 = mobyutil::MB_randInt(4), iVar15 == 0))))
      {
        *(undefined4 *)((int)pvVar4 + 0x164) = 0;
        if (moby->animationId != '\x04') {
          uVar42 = mobyutil::MB_randRange(0,9);
          uVar44 = mobyutil::MB_randRange(0x14,0x28);
          mobyutil::MB_SetAnimation(lVar12,4,uVar42,uVar44);
        }
        moby->unk58 = 1.0;
        moby->state = '\x03';
      }
      if (bVar9) {
        if (moby->animationId != '\x06') {
          uVar42 = mobyutil::MB_randRange(0,2);
          uVar44 = mobyutil::MB_randRange(0xf,0x19);
          mobyutil::MB_SetAnimation(lVar12,6,uVar42,uVar44);
        }
        *(undefined4 *)((int)pvVar4 + 0x164) = 0;
        *(undefined4 *)((int)pvVar4 + 0x16c) = 0;
        *(undefined1 *)((int)pvVar4 + 0x1c4) = 0;
        moby->state = '\b';
        *(undefined4 *)((int)pvVar4 + 0x294) = 0;
        iVar15 = sound::PlayMobySound(9,4,moby);
        *(int *)((int)pvVar4 + 0x1f8) = iVar15;
      }
      if (uVar20 != 0) {
        if (moby->animationId != '\t') {
          uVar42 = mobyutil::MB_randRange(0,2);
          uVar44 = mobyutil::MB_randRange(0x11,0x19);
          mobyutil::MB_SetAnimation(lVar12,9,uVar42,uVar44);
        }
        moby->state = '\x02';
      }
    }
    if ((iVar14 != 0) && (moby->state != '\b')) {
      if (moby->animationId != '\n') {
        uVar42 = mobyutil::MB_randRange(0,4);
        uVar44 = mobyutil::MB_randRange(0x14,0x1e);
        mobyutil::MB_SetAnimation(lVar12,10,uVar42,uVar44);
      }
      *(undefined4 *)((int)pvVar4 + 0x298) = 0;
      moby->unk58 = 1.5;
      moby->state = '\x05';
    }
    goto LAB_001c8fe8;
  }
  dVar41 = (double)(moby->rotation).z;
  if ((int)worldUpdateTime % 6 == 0) {
    partupd::SpawnPart_61(0x41224f8000000000,0x4014000000000000,lVar12,0);
  }
  if ((int)(worldUpdateTime - 2) % 6 == 0) {
    partupd::SpawnPart_61(0x41224f8000000000,0x4014000000000000,lVar12,1);
  }
  iVar14 = mobyupdate_helpers::M1106_001c2bb8(lVar12,pvVar4,&g_heroPosition,9,0);
  if (iVar14 != 0) goto LAB_001c8fe8;
  mobyutil::OrganicDeltAngSpeed
            (uVar42,(double)(DAT_0071f418 * 2.0943952),(double)(DAT_0071f418 * 0.6981317),
             (double)(mobyutil::g_FrameTime * 2.0943952),lVar12);
  dVar41 = (double)fastfunc::FastSubRots((moby->rotation).z,(float)dVar41);
  if (dVar41 <= (double)(mobyutil::g_FrameTime * 0.17453292)) {
    bVar1 = moby->animationId != '\t';
    if ((bVar1) && (bVar1)) {
      uVar42 = mobyutil::MB_randRange(0,1);
      uVar44 = mobyutil::MB_randRange(0xf,0x16);
      mobyutil::MB_SetAnimation(lVar12,9,uVar42,uVar44);
    }
  }
  else {
    bVar1 = moby->animationId != '\r';
    if ((bVar1) && (bVar1)) {
      uVar42 = mobyutil::MB_randRange(0,1);
      uVar44 = mobyutil::MB_randRange(0xf,0x16);
      mobyutil::MB_SetAnimation(lVar12,0xd,uVar42,uVar44);
    }
  }
  if ((moby->updateId == '\t') || (moby->updateId == '\r')) {
    uVar27 = mobyupdate_helpers::M1106_001bfdb8(lVar12,pvVar4,&MStack_270.transform.v3);
    moby->state = uVar27;
  }
  bVar25 = moby->setByGroup;
  uVar35 = (bVar25 + 1) * 0x55;
  if ((uint)bVar25 == (uVar35 >> 8) + (uVar35 >> 8) * 2) {
    dVar41 = (double)FUN_005e8588(&MStack_270.transform.v3,lVar32);
    if (dVar41 <= 13.0) {
      bVar25 = moby->setByGroup;
      goto LAB_001c6290;
    }
  }
  else {
LAB_001c6290:
    uVar35 = (bVar25 + 1) * 0x55;
    if (((uint)bVar25 - ((uVar35 >> 8) + (uVar35 >> 8) * 2) != 1) ||
       (dVar41 = (double)FUN_005e8588(&MStack_270.transform.v3,lVar32), dVar41 <= 20.0))
    goto LAB_001c8fe8;
  }
  uVar21 = idol::GetAnimDuration(0x23);
  *(undefined2 *)((int)pvVar4 + 0x198) = uVar21;
  uVar16 = idol::GetAnimDuration(0x1e);
  *(undefined4 *)((int)pvVar4 + 0x160) = uVar16;
  moby->state = '\x01';
LAB_001c8fe8:
  FUN_005e81f0((int)pvVar4 + 0x100,lVar32,auStack_3b0);
  if (moby->state < 10) {
    mobyutil::MB_RegisterLameShadow((float)dVar51,moby);
  }
  mobyupdate_helpers::M1106_001bfbd8(pvVar4);
  return;
}



//==== 001c90b0  ns=mobyupdate_helpers  size=0x450
// sig: undefined M1107_001c90b0(void)
// callers(0): 
// callees(8): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00174f80 vuchain::SetGSReg; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f7c idol_draw::Blend; 00502fd4 stub::STUB_00502fd4_RET_0; 00502ffc stub::VU1_addGSregister

void mobyupdate_helpers::M1107_001c90b0(void)

{
  float fVar1;
  short sVar2;
  ulonglong *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined4 *puVar11;
  undefined4 *puVar12;
  longlong lVar10;
  undefined4 *puVar14;
  longlong lVar13;
  uint uVar15;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int iVar16;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  int iVar17;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar20;
  ulonglong in_f30;
  double dVar21;
  ulonglong in_f31;
  double dVar22;
  
  uVar7 = ZEXT48(&stack0x00000000);
  puVar3 = (ulonglong *)(uVar7 - 0x150);
  *puVar3 = uVar7;
  puVar3[0x2c] = in_LR;
  puVar3[0x26] = in_f28;
  puVar3[0x27] = in_f29;
  puVar3[0x28] = in_f30;
  puVar3[0x29] = in_f31;
  puVar3[0x23] = unaff_r29;
  puVar3[0x25] = unaff_r31;
  puVar3[0x24] = unaff_r30;
  puVar3[0x22] = unaff_r28;
  puVar3[0x21] = unaff_r27;
  uVar8 = draw::GetEffectTex(0x15);
  puVar3[0x1d] = uVar8;
  uVar8 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar3[0x1e] = uVar8;
  uVar8 = FUN_00502f08(0,0,0,0,0,0);
  puVar3[0x1c] = uVar8;
  uVar8 = idol_draw::PackCmd(0,2,0,1,0x80);
  puVar3[0x1f] = uVar8;
  fVar1 = DAT_00eef9e8;
  DAT_00eef9e8 = DAT_00eef9e8 + 0.001;
  dVar22 = 7.0;
  if (7.0 < DAT_00eef9e8) {
    DAT_00eef9e8 = DAT_00eef9e8 - 7.0;
  }
  dVar21 = 0.30000001192092896;
  dVar20 = (double)(fVar1 + 0.3);
  uVar9 = idol_draw::Blend(1,5,1,3,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar9);
  uVar9 = stub::VU1_addGSregister(GSmem.zbuf >> 0xd,1,1);
  vuchain::SetGSReg(0x21,uVar9);
  uVar8 = 1;
  do {
    dVar19 = (double)DAT_00eef9ec;
    DAT_00eef9ec = (float)(dVar19 + (double)DAT_00764018);
    if (dVar22 < (double)DAT_00eef9ec) {
      DAT_00eef9ec = (float)((double)DAT_00eef9ec - dVar22);
    }
    iVar16 = 0;
    iVar17 = 0;
    do {
      iVar16 = iVar16 + 1;
      iVar5 = (int)uVar8;
      iVar4 = iVar5 * 0x140;
      puVar11 = (undefined4 *)((int)&DAT_00ef0dd0 + iVar4 + iVar17);
      *(undefined4 *)(puVar3 + 0xe) = *puVar11;
      *(undefined4 *)((int)puVar3 + 0x74) = puVar11[1];
      *(undefined4 *)(puVar3 + 0xf) = puVar11[2];
      *(undefined4 *)((int)puVar3 + 0x7c) = puVar11[3];
      puVar12 = &DAT_00ef0dd0 + (iVar16 % 0x14) * 4 + iVar5 * 0x50;
      puVar14 = (undefined4 *)(iVar17 + 0xef0c90 + iVar4);
      puVar11 = (undefined4 *)((iVar16 % 0x14) * 0x10 + 0xef0c90 + iVar4);
      *(undefined4 *)(puVar3 + 0x10) = *puVar12;
      *(undefined4 *)((int)puVar3 + 0x84) = puVar12[1];
      iVar4 = (int)((uVar8 & 0xffffffff) << 1);
      *(undefined4 *)(puVar3 + 0x11) = puVar12[2];
      *(undefined4 *)((int)puVar3 + 0x8c) = puVar12[3];
      *(undefined4 *)(puVar3 + 0x12) = *puVar14;
      *(undefined4 *)((int)puVar3 + 0x94) = puVar14[1];
      *(undefined4 *)(puVar3 + 0x13) = puVar14[2];
      *(undefined4 *)((int)puVar3 + 0x9c) = puVar14[3];
      *(undefined4 *)(puVar3 + 0x14) = *puVar11;
      *(undefined4 *)((int)puVar3 + 0xa4) = puVar11[1];
      sVar2 = *(short *)((int)&DAT_00ef0db8 + iVar4);
      *(undefined4 *)(puVar3 + 0x15) = puVar11[2];
      *(undefined4 *)((int)puVar3 + 0xac) = puVar11[3];
      lVar18 = 2;
      lVar10 = uVar7 - 0x150;
      do {
        lVar13 = (longlong)sVar2;
        lVar13 = lVar13 + (lVar13 >> 0x3f & -lVar13);
        sVar2 = *(short *)(iVar4 + 0xef0db6);
        uVar15 = (uint)((lVar13 + (0x40 - lVar13 >> 0x3f & 0x40U - lVar13) & 0xffffffff) << 0x18) |
                 0x404040;
        *(uint *)((int)lVar10 + 0xb0) = uVar15;
        *(uint *)((int)lVar10 + 0xb4) = uVar15;
        lVar10 = lVar10 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      if (iVar5 == 1) {
        *(undefined4 *)((int)puVar3 + 0xbc) = 0x20404040;
        *(undefined4 *)(puVar3 + 0x17) = 0x20404040;
      }
      else if (iVar5 == 9) {
        *(undefined4 *)((int)puVar3 + 0xb4) = 0x404040;
        *(undefined4 *)(puVar3 + 0x16) = 0x404040;
      }
      *(float *)(puVar3 + 0x18) = (float)dVar20;
      *(float *)((int)puVar3 + 0xc4) = (float)dVar19;
      *(float *)(puVar3 + 0x19) = (float)dVar20;
      *(float *)((int)puVar3 + 0xd4) = (float)dVar19;
      fVar1 = (float)(dVar19 + 0.05000000074505806);
      dVar19 = (double)fVar1;
      *(float *)(puVar3 + 0x1a) = (float)(dVar20 - dVar21);
      *(float *)(puVar3 + 0x1b) = (float)(dVar20 - dVar21);
      uVar6 = EffectTexHeaders;
      *(float *)((int)puVar3 + 0xcc) = fVar1;
      *(float *)((int)puVar3 + 0xdc) = fVar1;
      draw::FastDrawQuad(uVar7 - 0xe0,0,0,uVar6,9);
      iVar17 = iVar17 + 0x10;
    } while (iVar16 < 0x14);
    uVar8 = uVar8 + 1;
    dVar20 = (double)(float)(dVar20 + dVar21);
  } while ((int)uVar8 < 10);
  uVar9 = stub::VU1_addGSregister(GSmem.zbuf >> 0xd,1,0);
  vuchain::SetGSReg(0x21,uVar9);
  uVar9 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar9);
  return;
}



//==== 001c9500  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1107_001c9500(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1107_001c9500(void)

{
  DAT_007641ac = 0x10000;
  return;
}



//==== 001c9520  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1107(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1107 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1107(MobyInstance *moby)

{
  return moby;
}



//==== 001c9528  ns=mobyupdate_helpers  size=0x168
// sig: undefined M1108_001c9528(void)
// callers(1): 001c96c0 mobyupdate_unsorted::UpdateMoby_1108
// callees(1): 000fc620 mobyutil::MB_randInt

void mobyupdate_helpers::M1108_001c9528(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x78);
  iVar3 = g_Language + -1 +
          ((uint)((LZCOUNT(-g_Language) << 0x3a) >> 0x3f) & g_Language - (g_Language + -1));
  if (param_2 < 1) {
    if (param_2 < 0) {
      return;
    }
    iVar7 = *(int *)(iVar7 + iVar3 * 4 + 0x38);
  }
  else if (param_2 < 2) {
    lVar4 = mobyutil::MB_randInt(3);
    iVar6 = 0;
    do {
      iVar2 = (int)(lVar4 << 2);
      if (*(int *)((int)&DAT_00ef1a58 + iVar2) == 0) {
        *(undefined4 *)((int)&DAT_00ef1a58 + iVar2) = 1;
        break;
      }
      lVar1 = (longlong)(int)(lVar4 + 1);
      uVar5 = lVar1 / 3 + (lVar1 >> 0x3f) & 0xffffffff;
      lVar4 = lVar4 + 1 + (uVar5 - ((longlong)(uVar5 << 0x20) >> 0x3f)) * -3;
      if (iVar6 == 2) {
        DAT_00ef1a58 = 0;
        DAT_00ef1a5c = 0;
        DAT_00ef1a60 = 0;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 4);
    iVar7 = *(int *)(iVar7 + (int)(lVar4 << 3) * 3 + iVar3 * 4 + 0x68);
  }
  else {
    if (2 < param_2) {
      return;
    }
    iVar7 = *(int *)(iVar7 + iVar3 * 4 + 0x50);
  }
  if (iVar7 != -1) {
    music::g_PendingSpeech = iVar7 + 20000;
  }
  return;
}



//==== 001c96c0  ns=mobyupdate_unsorted  size=0xed4
// sig: undefined UpdateMoby_1108(MobyInstance * moby)
// callers(0): 
// callees(30): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00047f48 camera::camera5::Camera_SetCurrentAccel; 00047f74 camera::SetCameraPosition; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 0006d720 RegisterFuncForMoby; 00083950 hero::HandleHeroDeath; 000a0c38 hero::Hero_Warp; 000b72b0 hero::TransitionMovement; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 00104214 mobyutil::MB_CountActiveMobysByGroup; 00109af0 mobyutil::Delt; 0011c830 music::music_PlayPreseekedSpeech; 0011ccc8 music::music_SetTransition; 0015d380 sound::sound_LevelPlay; 001a1e24 FUN_001a1e24; 001a1e90 FUN_001a1e90; 001a87d8 FUN_001a87d8; 001b22f4 FUN_001b22f4; 001c9528 mobyupdate_helpers::M1108_001c9528; 001ce0fc FUN_001ce0fc; 001d4cb0 FUN_001d4cb0; 001d4cf8 FUN_001d4cf8; 00290158 FUN_00290158; 0047cbc8 FUN_0047cbc8; 004ad264 FUN_004ad264; 004ad2bc FUN_004ad2bc; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

/* Moby 1108 */

void mobyupdate_unsorted::UpdateMoby_1108(MobyInstance *moby)

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
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 *puVar13;
  int iVar14;
  Spline *pSVar15;
  Spline *pSVar16;
  ulonglong *puVar17;
  float fVar18;
  ulonglong uVar19;
  int iVar22;
  longlong lVar20;
  longlong lVar21;
  undefined4 uVar23;
  longlong lVar24;
  float *pfVar26;
  longlong lVar25;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar27;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  ulonglong in_f31;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  uVar19 = ZEXT48(&stack0x00000000);
  lVar21 = uVar19 - 0x1a0;
  puVar17 = (ulonglong *)lVar21;
  *puVar17 = uVar19;
  puVar17[0x36] = in_LR;
  puVar17[0x33] = in_f31;
  puVar17[0x32] = unaff_r31;
  puVar17[0x31] = unaff_r30;
  uVar1 = moby->state;
  puVar13 = (undefined4 *)moby->pVar;
  uVar27 = ZEXT48(puVar13);
  puVar17[0x30] = unaff_r29;
  puVar17[0x2f] = unaff_r28;
  fVar2 = animationSpeed;
  if (uVar1 == '\x05') {
    dVar29 = 1.0;
    if (puVar13[0x2e] == 0x3f800000) {
      hero::HandleHeroDeath();
      DAT_0095cf14 = 0;
    }
    else {
      iVar22 = fastfunc::FastDecTimerS32(uVar27 + 0xbc);
      if (iVar22 != 0) {
        mobyutil::Delt((float)dVar29,mobyutil::g_FrameTime * 6.0,(float *)(puVar13 + 0x2e));
        DAT_0095cf14 = puVar13[0x2e];
      }
    }
  }
  else if (uVar1 == '\x04') {
    iVar22 = puVar13[0x2d];
    puVar17[0x2c] = (longlong)(int)(animationSpeed * 1800.5);
    if (iVar22 == *(int *)((int)puVar17 + 0x164)) {
      if (music::g_SpeechPlaying.status == 3) {
        music::music_PlayPreseekedSpeech();
      }
    }
    else {
      puVar17[0x2c] = (longlong)(int)(fVar2 * 900.5);
      if (iVar22 == *(int *)((int)puVar17 + 0x164)) {
        mobyupdate_helpers::M1108_001c9528(moby,2);
      }
      else {
        puVar17[0x2c] = (longlong)(int)(fVar2 * 300.5);
        if ((iVar22 == *(int *)((int)puVar17 + 0x164)) && (music::g_SpeechPlaying.status == 3)) {
          music::music_PlayPreseekedSpeech();
        }
      }
    }
    iVar22 = fastfunc::FastDecTimerS32(uVar27 + 0xc0);
    if (iVar22 != 0) {
      sound::sound_LevelPlay(0,0,g_heroMobyPtr);
      dVar29 = (double)mobyutil::MB_randRangeFloat(480.0,600.0);
      uVar23 = fastfunc::FastDoubleToInt((double)(float)(dVar29 * (double)animationSpeed));
      puVar13[0x30] = uVar23;
      auVar30 = ZEXT416(0xffffffff);
      auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
      auVar31 = vectorShiftLeftIntegerWord(auVar30,auVar30);
      GameCamera.offset0.amp = 0.4;
      auVar30 = loadVectorLeftIndexed(0x20,0x1c9690);
      auVar32 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar30 = vectorMultiplyAddFloatingPoint
                          (auVar32,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,
                           auVar31);
      auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
      auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
      GameCamera.offset0.total =
           storeVectorElementWordIndexed
                     (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0x168,0x9513c0);
    }
    if (g_gameMode == GAME_MODE_NORMAL) {
      RegisterFuncForMoby(&PTR_M1109_001ca5d8_00708cd8,moby);
    }
    if (g_heroState == MOVEMENT_LOCKED) {
      moby->state = '\x06';
    }
    else if ((g_gameMode == GAME_MODE_NORMAL) &&
            (iVar22 = fastfunc::FastDecTimerS32(uVar27 + 0xb4), iVar22 != 0)) {
      auVar30 = ZEXT416(0xffffffff);
      auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
      moby->state = '\x05';
      auVar31 = vectorShiftLeftIntegerWord(auVar30,auVar30);
      auVar30 = loadVectorLeftIndexed(0x24,0x1c9690);
      auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar32 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      iVar22 = puVar13[0xc];
      auVar30 = vectorMultiplyAddFloatingPoint
                          (auVar32,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,
                           auVar31);
      auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
      auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar23 = storeVectorElementWordIndexed
                         (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0xbc,uVar27)
      ;
      *(undefined4 *)((uint)(puVar13 + 0x2f) & 0xfffffffc) = uVar23;
      puVar13[0x2e] = 0;
      FUN_001ce0fc(MobyInstance + iVar22);
      sound::sound_LevelPlay(1,0,g_heroMobyPtr);
    }
  }
  else if (uVar1 == '\x03') {
    iVar22 = puVar13[9];
    iVar14 = puVar13[0x2c];
    pSVar15 = Splines[iVar22];
    *(float *)(puVar17 + 0x14) = pSVar15->points[iVar14].x;
    *(float *)((int)puVar17 + 0xa4) = pSVar15->points[iVar14].y;
    pSVar16 = Splines[iVar22];
    *(float *)(puVar17 + 0x15) = pSVar15->points[iVar14].z;
    fVar2 = pSVar15->points[iVar14].w;
    puVar13[0x2c] = iVar14 + 1;
    *(float *)((int)puVar17 + 0xac) = fVar2;
    if (iVar14 + 1 == pSVar16->cnt + -1) {
      moby->state = '\x04';
      mobyupdate_helpers::M1108_001c9528(moby,1);
      uVar23 = fastfunc::FastDoubleToInt((double)(DAT_007641e0 * animationSpeed));
      puVar13[0x2d] = uVar23;
      camera::camera5::Camera_DeactivateMobyDrivenCam(2);
      hero::TransitionMovement(0,1);
      draw::LetterBoxOn = 0;
    }
    else {
      FUN_00290158(puVar13[0xd]);
      iVar22 = puVar13[0x2c] + -0x1e;
      fVar2 = *(float *)(puVar17 + 0x14);
      fVar3 = *(float *)((int)puVar17 + 0xa4);
      pSVar15 = Splines[puVar13[9]];
      iVar22 = iVar22 + (iVar22 >> 0x1f & -iVar22);
      fVar4 = *(float *)((int)pSVar15 + iVar22 * 0x10 + 0x10);
      fVar5 = *(float *)((int)pSVar15 + iVar22 * 0x10 + 0x14);
      fVar9 = fVar4 - fVar2;
      fVar6 = *(float *)((int)pSVar15 + iVar22 * 0x10 + 0x18);
      fVar12 = fVar5 - fVar3;
      fVar7 = 0.0;
      fVar11 = ABS(fVar9);
      fVar8 = ABS(fVar12);
      *(float *)((int)puVar17 + 0xbc) = fVar9;
      *(float *)(puVar17 + 0x18) = fVar12;
      fVar9 = *(float *)(puVar17 + 0x15);
      *(float *)((int)puVar17 + 0xc4) = fVar11 - fVar8;
      *(undefined4 *)((int)puVar17 + 0x9c) = 0;
      *(undefined4 *)(puVar17 + 0x12) = 0;
      uVar27 = (ulonglong)(*(uint *)((int)puVar17 + 0xbc) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar17 + 0xc4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar17 + 0x18) >> 0x1d) & 4;
      fVar12 = ABS(*(float *)((int)puVar17 + 0xbc));
      if (*(float *)((int)puVar17 + 0xc4) - 0.0 < 0.0) {
        fVar12 = fVar8;
      }
      fVar10 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar27 << 2));
      fVar8 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
      fVar18 = ABS(*(float *)(puVar17 + 0x18));
      if (*(float *)((int)puVar17 + 0xc4) - 0.0 < 0.0) {
        fVar18 = fVar11;
      }
      fVar11 = fVar7;
      if (0.0 < fVar12) {
        lVar20 = uVar19 - 400;
        lVar24 = uVar19 - 0xa0;
        lVar25 = uVar19 - 0x90;
        lVar28 = 2;
        fVar12 = (fVar18 - fVar12) / (fVar18 + fVar12);
        fVar11 = fVar12 * fVar12;
        *(float *)((int)puVar17 + 0x10c) = fVar12;
        *(float *)((int)puVar17 + 0x104) = fVar12;
        *(float *)(puVar17 + 0x21) = fVar12;
        *(float *)(puVar17 + 0x20) = fVar12;
        fVar12 = fVar11 * fVar11;
        *(float *)((int)puVar17 + 0x104) = *(float *)((int)puVar17 + 0x104) * fVar11;
        *(float *)(puVar17 + 0x21) = *(float *)(puVar17 + 0x21) * fVar12;
        *(float *)((int)puVar17 + 0x10c) = *(float *)((int)puVar17 + 0x10c) * fVar12 * fVar11;
        do {
          *(float *)((int)lVar20 + 0x100) = *(float *)((int)lVar20 + 0xf0) * fVar12 * fVar12;
          iVar22 = (int)lVar24;
          lVar20 = lVar20 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)(iVar22 + 4) * fVar12 * fVar12;
          lVar25 = lVar25 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar25 = uVar19 - 0xa0;
        pfVar26 = (float *)&DAT_007358e0;
        lVar20 = lVar21;
        lVar24 = lVar25;
        do {
          fVar12 = *pfVar26;
          fVar11 = pfVar26[1];
          pfVar26 = pfVar26 + 2;
          *(float *)((int)lVar20 + 0x100) = *(float *)((int)lVar20 + 0x100) * fVar12;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar11;
          lVar24 = lVar24 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar24 = 2;
        lVar20 = lVar21;
        fVar12 = fVar7;
        do {
          iVar22 = (int)lVar20;
          lVar20 = lVar20 + 0x10;
          iVar14 = (int)lVar25;
          lVar25 = lVar25 + 0x10;
          fVar12 = fVar12 + *(float *)(iVar22 + 0x100) + *(float *)(iVar14 + 4) +
                   *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc);
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        fVar11 = (fVar12 + 0.7853982) * fVar10 + fVar8;
      }
      fVar3 = fVar3 - fVar5;
      fVar2 = fVar2 - fVar4;
      *(float *)(puVar17 + 0x13) = fVar11;
      fVar6 = fVar6 - fVar9;
      fVar2 = SQRT(fVar2 * fVar2 + fVar3 * fVar3);
      *(float *)((int)puVar17 + 0xb4) = fVar6;
      fVar6 = ABS(fVar6);
      fVar3 = ABS(fVar2);
      *(float *)(puVar17 + 0x16) = fVar2;
      *(float *)(puVar17 + 0x17) = fVar3 - fVar6;
      uVar27 = (ulonglong)(*(uint *)(puVar17 + 0x16) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar17 + 0x17) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar17 + 0xb4) >> 0x1d) & 4;
      fVar2 = ABS(*(float *)(puVar17 + 0x16));
      if (*(float *)(puVar17 + 0x17) - 0.0 < 0.0) {
        fVar2 = fVar6;
      }
      fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar27 << 2));
      fVar5 = ABS(*(float *)((int)puVar17 + 0xb4));
      if (*(float *)(puVar17 + 0x17) - 0.0 < 0.0) {
        fVar5 = fVar3;
      }
      fVar3 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
      if (0.0 < fVar2) {
        lVar20 = uVar19 - 400;
        lVar24 = uVar19 - 0xc0;
        lVar25 = uVar19 - 0xb0;
        lVar28 = 2;
        fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
        fVar5 = fVar2 * fVar2;
        *(float *)((int)puVar17 + 0xec) = fVar2;
        *(float *)((int)puVar17 + 0xe4) = fVar2;
        *(float *)(puVar17 + 0x1d) = fVar2;
        *(float *)(puVar17 + 0x1c) = fVar2;
        fVar2 = fVar5 * fVar5;
        *(float *)((int)puVar17 + 0xe4) = *(float *)((int)puVar17 + 0xe4) * fVar5;
        *(float *)(puVar17 + 0x1d) = *(float *)(puVar17 + 0x1d) * fVar2;
        *(float *)((int)puVar17 + 0xec) = *(float *)((int)puVar17 + 0xec) * fVar2 * fVar5;
        do {
          *(float *)((int)lVar20 + 0xe0) = *(float *)((int)lVar20 + 0xd0) * fVar2 * fVar2;
          iVar22 = (int)lVar24;
          lVar20 = lVar20 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)(iVar22 + 4) * fVar2 * fVar2;
          lVar25 = lVar25 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar25 = uVar19 - 0xc0;
        pfVar26 = (float *)&DAT_007358e0;
        lVar20 = lVar21;
        lVar24 = lVar25;
        do {
          fVar2 = *pfVar26;
          fVar5 = pfVar26[1];
          pfVar26 = pfVar26 + 2;
          *(float *)((int)lVar20 + 0xe0) = *(float *)((int)lVar20 + 0xe0) * fVar2;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar5;
          lVar24 = lVar24 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar20 = 2;
        do {
          iVar22 = (int)lVar21;
          iVar14 = (int)lVar25;
          lVar21 = lVar21 + 0x10;
          lVar25 = lVar25 + 0x10;
          fVar7 = fVar7 + *(float *)(iVar22 + 0xe0) + *(float *)(iVar14 + 4) +
                  *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc);
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        fVar7 = (fVar7 + 0.7853982) * fVar4 + fVar3;
      }
      *(float *)((int)puVar17 + 0x94) = -fVar7;
      camera::camera5::Camera_SetMobyDrivenTargetPos((float *)(puVar17 + 0x14));
      camera::camera5::Camera_SetMobyDrivenTargetRot((float *)(puVar17 + 0x12));
    }
  }
  else if (uVar1 == '\x02') {
    iVar22 = FUN_001d4cf8(MobyInstance + puVar13[0xb]);
    if (iVar22 == 2) {
      moby->state = '\x03';
      puVar13[0x2c] = 1;
      music::music_SetTransition(6,9);
      if (music::g_SpeechPlaying.status == 3) {
        music::music_PlayPreseekedSpeech();
      }
      FUN_001b22f4(puVar13[4]);
      FUN_0047cbc8(puVar13[5]);
      FUN_0047cbc8(puVar13[6]);
      FUN_004ad264(*puVar13);
      FUN_001a1e90(puVar13[1]);
      FUN_001a1e90(puVar13[2]);
      FUN_001a87d8(MobyInstance + puVar13[8]);
      Cuboids[puVar13[3]].pos.z = Cuboids[puVar13[3]].pos.z + 10.0;
      iVar22 = puVar13[9];
      pSVar15 = Splines[iVar22];
      fVar2 = pSVar15->points[1].x;
      *(float *)(puVar17 + 0xe) = fVar2;
      fVar3 = pSVar15->points[1].y;
      *(float *)((int)puVar17 + 0x74) = fVar3;
      fVar4 = pSVar15->points[1].z;
      pSVar16 = Splines[iVar22];
      *(float *)(puVar17 + 0xf) = fVar4;
      *(float *)((int)puVar17 + 0x7c) = pSVar15->points[1].w;
      fVar5 = pSVar16->points[0].x;
      fVar6 = pSVar16->points[0].y;
      fVar9 = fVar5 - fVar2;
      fVar12 = fVar6 - fVar3;
      fVar7 = pSVar16->points[0].z;
      fVar11 = 0.0;
      fVar8 = ABS(fVar9);
      fVar10 = ABS(fVar12);
      *(float *)((int)puVar17 + 0xd4) = fVar9;
      *(float *)(puVar17 + 0x1b) = fVar12;
      *(float *)((int)puVar17 + 0xdc) = fVar8 - fVar10;
      *(undefined4 *)((int)puVar17 + 0x8c) = 0;
      *(undefined4 *)(puVar17 + 0x10) = 0;
      uVar27 = (ulonglong)(*(uint *)((int)puVar17 + 0xd4) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar17 + 0xdc) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar17 + 0x1b) >> 0x1d) & 4;
      fVar9 = ABS(*(float *)((int)puVar17 + 0xd4));
      if (*(float *)((int)puVar17 + 0xdc) - 0.0 < 0.0) {
        fVar9 = fVar10;
      }
      fVar12 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar27 << 2));
      fVar10 = ABS(*(float *)(puVar17 + 0x1b));
      if (*(float *)((int)puVar17 + 0xdc) - 0.0 < 0.0) {
        fVar10 = fVar8;
      }
      fVar8 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
      fVar18 = fVar11;
      if (0.0 < fVar9) {
        lVar20 = uVar19 - 400;
        lVar24 = uVar19 - 0x60;
        lVar25 = uVar19 - 0x50;
        lVar28 = 2;
        fVar9 = (fVar10 - fVar9) / (fVar10 + fVar9);
        fVar10 = fVar9 * fVar9;
        *(float *)((int)puVar17 + 0x14c) = fVar9;
        *(float *)((int)puVar17 + 0x144) = fVar9;
        *(float *)(puVar17 + 0x29) = fVar9;
        *(float *)(puVar17 + 0x28) = fVar9;
        fVar9 = fVar10 * fVar10;
        *(float *)((int)puVar17 + 0x144) = *(float *)((int)puVar17 + 0x144) * fVar10;
        *(float *)(puVar17 + 0x29) = *(float *)(puVar17 + 0x29) * fVar9;
        *(float *)((int)puVar17 + 0x14c) = *(float *)((int)puVar17 + 0x14c) * fVar9 * fVar10;
        do {
          *(float *)((int)lVar20 + 0x140) = *(float *)((int)lVar20 + 0x130) * fVar9 * fVar9;
          iVar22 = (int)lVar24;
          lVar20 = lVar20 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)(iVar22 + 4) * fVar9 * fVar9;
          lVar25 = lVar25 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar25 = uVar19 - 0x60;
        pfVar26 = (float *)&DAT_007358e0;
        lVar20 = lVar21;
        lVar24 = lVar25;
        do {
          fVar9 = *pfVar26;
          fVar10 = pfVar26[1];
          pfVar26 = pfVar26 + 2;
          *(float *)((int)lVar20 + 0x140) = *(float *)((int)lVar20 + 0x140) * fVar9;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar10;
          lVar24 = lVar24 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar24 = 2;
        lVar20 = lVar21;
        fVar9 = fVar11;
        do {
          iVar22 = (int)lVar20;
          lVar20 = lVar20 + 0x10;
          iVar14 = (int)lVar25;
          lVar25 = lVar25 + 0x10;
          fVar9 = fVar9 + *(float *)(iVar22 + 0x140) + *(float *)(iVar14 + 4) +
                  *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc);
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        fVar18 = (fVar9 + 0.7853982) * fVar12 + fVar8;
      }
      fVar3 = fVar3 - fVar6;
      fVar2 = fVar2 - fVar5;
      *(float *)(puVar17 + 0x11) = fVar18;
      fVar7 = fVar7 - fVar4;
      fVar2 = SQRT(fVar2 * fVar2 + fVar3 * fVar3);
      *(float *)((int)puVar17 + 0xcc) = fVar7;
      fVar7 = ABS(fVar7);
      fVar3 = ABS(fVar2);
      *(float *)(puVar17 + 0x19) = fVar2;
      *(float *)(puVar17 + 0x1a) = fVar3 - fVar7;
      uVar27 = (ulonglong)(*(uint *)(puVar17 + 0x19) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar17 + 0x1a) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar17 + 0xcc) >> 0x1d) & 4;
      fVar2 = ABS(*(float *)(puVar17 + 0x19));
      if (*(float *)(puVar17 + 0x1a) - 0.0 < 0.0) {
        fVar2 = fVar7;
      }
      fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar27 << 2));
      fVar5 = ABS(*(float *)((int)puVar17 + 0xcc));
      if (*(float *)(puVar17 + 0x1a) - 0.0 < 0.0) {
        fVar5 = fVar3;
      }
      fVar3 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
      if (0.0 < fVar2) {
        lVar20 = uVar19 - 400;
        lVar24 = uVar19 - 0x80;
        lVar25 = uVar19 - 0x70;
        lVar28 = 2;
        fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
        fVar5 = fVar2 * fVar2;
        *(float *)((int)puVar17 + 300) = fVar2;
        *(float *)((int)puVar17 + 0x124) = fVar2;
        *(float *)(puVar17 + 0x25) = fVar2;
        *(float *)(puVar17 + 0x24) = fVar2;
        fVar2 = fVar5 * fVar5;
        *(float *)((int)puVar17 + 0x124) = *(float *)((int)puVar17 + 0x124) * fVar5;
        *(float *)(puVar17 + 0x25) = *(float *)(puVar17 + 0x25) * fVar2;
        *(float *)((int)puVar17 + 300) = *(float *)((int)puVar17 + 300) * fVar2 * fVar5;
        do {
          *(float *)((int)lVar20 + 0x120) = *(float *)((int)lVar20 + 0x110) * fVar2 * fVar2;
          iVar22 = (int)lVar24;
          lVar20 = lVar20 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)(iVar22 + 4) * fVar2 * fVar2;
          lVar25 = lVar25 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar25 = uVar19 - 0x80;
        pfVar26 = (float *)&DAT_007358e0;
        lVar20 = lVar21;
        lVar24 = lVar25;
        do {
          fVar2 = *pfVar26;
          fVar5 = pfVar26[1];
          pfVar26 = pfVar26 + 2;
          *(float *)((int)lVar20 + 0x120) = *(float *)((int)lVar20 + 0x120) * fVar2;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar5;
          lVar24 = lVar24 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar20 = 2;
        do {
          iVar22 = (int)lVar21;
          iVar14 = (int)lVar25;
          lVar21 = lVar21 + 0x10;
          lVar25 = lVar25 + 0x10;
          fVar11 = fVar11 + *(float *)(iVar22 + 0x120) + *(float *)(iVar14 + 4) +
                   *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc);
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        fVar11 = (fVar11 + 0.7853982) * fVar4 + fVar3;
      }
      fVar2 = animationSpeed;
      *(float *)((int)puVar17 + 0x84) = -fVar11;
      puVar17[0x2c] = (longlong)(int)(fVar2 * 300.5);
      camera::SetCameraPosition
                (uVar19 - 0x130,uVar19 - 0x120,2,*(undefined4 *)((int)puVar17 + 0x164),0);
      camera::camera5::Camera_SetCurrentAccel
                (DAT_007641d0,DAT_007641d4,DAT_00ef1a50,DAT_007641d8,DAT_007641dc,DAT_00ef1a54);
      camera::camera5::Camera_SetMobyDrivenTargetPos((float *)(uVar19 - 0x130));
      camera::camera5::Camera_SetMobyDrivenTargetRot((float *)(uVar19 - 0x120));
      hero::Hero_Warp(&Cuboids[puVar13[10]].pos.x,&Cuboids[puVar13[10]].rot.x,0x72,0);
    }
  }
  else if (uVar1 == '\x01') {
    iVar22 = mobyutil::MB_CountActiveMobysByGroup(puVar13[7],0xffffffffffffffff);
    if (iVar22 == 0) {
      FUN_001d4cb0(MobyInstance + puVar13[0xb]);
      iVar22 = FUN_001d4cf8(MobyInstance + puVar13[0xb]);
      if (iVar22 == 1) {
        moby->state = '\x02';
        mobyupdate_helpers::M1108_001c9528(moby,0);
      }
    }
  }
  else if (uVar1 == '\0') {
    if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == '\0') {
      FUN_004ad2bc(*puVar13);
      FUN_001a1e24(puVar13[1]);
      FUN_001a1e24(puVar13[2]);
      moby->state = '\x01';
      moby->updateDistance = -1;
    }
    else {
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 001ca5d8  ns=mobyupdate_helpers  size=0x308
// sig: undefined M1109_001ca5d8(void)
// callers(0): 
// callees(6): 0006a718 draw::DrawRoundedRect; 00070998 draw::FontPrintLargeCenter; 000fc620 mobyutil::MB_randInt; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M1109_001ca5d8(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  undefined1 local_30 [32];
  
  draw::DrawRoundedRect
            (DAT_007641e8 + DAT_007641f4,DAT_007641f8 + DAT_007641e8,DAT_007641e4 + DAT_007641fc,
             DAT_007641e4 + DAT_00764200,DAT_00764204);
  dVar7 = (double)fastfunc::FastIntToDouble(worldUpdateTime % 0x3c);
  fVar1 = (float)(dVar7 * 0.01666666753590107) * 6.28318;
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  dVar7 = 1.0;
  fVar1 = fVar3 * fVar3;
  fVar2 = fVar1 * fVar1 * fVar3;
  fVar4 = fVar1 * fVar2;
  dVar8 = (double)((fVar1 * fVar4 * 2.601887e-06 +
                   fVar4 * -0.0001980741 +
                   fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3) * 3.0 + 0.5);
  if ((dVar8 <= 1.0) && (dVar7 = dVar8, dVar8 < 0.0)) {
    dVar7 = 0.0;
  }
  uVar5 = fastfunc::FastLerpColor(dVar7,DAT_007641ec,DAT_007641f0);
  iVar6 = mobyutil::MB_randInt(10);
  fastfunc::FastDoubleToInt((double)(longlong)iVar6);
  draw::FontPrintLargeCenter(DAT_007641e4,DAT_007641e8,uVar5,local_30,8);
  return;
}



//==== 001ca8e8  ns=mobyupdate_helpers  size=0x44
// sig: undefined M1109_001ca8e8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1109_001ca8e8(void)

{
  DAT_00764254 = 0x10000;
  DAT_00ef1a50 = mobyutil::g_FrameTime * 12.0;
  DAT_00ef1a54 = mobyutil::g_FrameTime * 3.1415927;
  return;
}



//==== 001ca968  ns=mobyupdate_helpers  size=0x5fc
// sig: undefined M1109_001ca968(void)
// callers(2): 001caf98 mobyupdate_helpers::M1109_001caf98; 001cb618 mobyupdate_helpers::M1109_001cb618
// callees(9): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 000fea60 mobyutil::MB_randSphere; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 001206e8 partupd::SpawnPart_2; 00123390 partupd::SpawnPart_11; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M1109_001ca968
               (double param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined4 local_d0 [12];
  longlong local_a0;
  
  mobyutil::MB_SpawnExplosionSparks(0x4000000000000000,0x402a000000000000);
  local_d0[0] = 0x4f008fff;
  local_d0[1] = 0x4f008fff;
  local_d0[2] = 0x4f007fff;
  iVar11 = 0;
  local_d0[3] = 0x4f006fff;
  local_d0[4] = 0x2fffffff;
  local_d0[5] = 0x2fffffff;
  local_d0[6] = 0x2f005f7f;
  local_d0[7] = 0x2f004f7f;
  local_d0[8] = 0x2f003f7f;
  local_d0[9] = 0x2f00004f;
  iVar10 = 0;
  local_d0[10] = 0x2f000000;
  local_d0[0xb] = 0x3f000000;
  if (0 < param_5) {
    dVar13 = 15.5;
    dVar12 = (double)(float)(param_1 * 400000.0);
    dVar14 = 20.5;
    dVar18 = (double)(float)(param_1 * 10.0);
    dVar15 = 25.5;
    dVar17 = 30.5;
    do {
      lVar4 = mobyutil::MB_randInt(6);
      uVar2 = *(undefined4 *)((int)local_d0 + (int)(lVar4 << 2));
      lVar4 = mobyutil::MB_randInt(6);
      uVar3 = *(undefined4 *)((int)local_d0 + (int)(lVar4 << 2) + 0x18);
      iVar1 = (int)((double)animationSpeed * dVar14);
      local_a0 = (longlong)iVar1;
      mobyutil::MB_randRange((int)((double)animationSpeed * dVar13),iVar1);
      iVar1 = (int)((double)animationSpeed * dVar17);
      local_a0 = (longlong)iVar1;
      mobyutil::MB_randRange((int)((double)animationSpeed * dVar15),iVar1);
      partupd::SpawnPart_11
                (dVar12,(double)(float)((double)mobyutil::g_FrameTime * dVar18),param_3,param_4,
                 uVar2,uVar3);
      iVar11 = iVar11 + 1;
    } while (iVar11 < param_5);
  }
  if (0 < DAT_007642c4 * param_5) {
    dVar12 = 0.0;
    dVar13 = 1.0;
    uVar16 = 0x3fecccccc0000000;
    dVar14 = 1.2000000476837158;
    dVar15 = 0.800000011920929;
    do {
      mobyutil::MB_randSphere(dVar12,dVar13,local_110);
      mobyutil::MB_randSphere(dVar12,uVar16,local_100);
      mobyutil::MB_randRangeFloat(DAT_00ef1a70,DAT_00764290);
      mobyutil::MB_randSphere(dVar12,uVar16,local_100);
      mobyutil::MB_randRangeFloat(DAT_00ef1a74,DAT_0076429c);
      mobyutil::MB_randRangeFloat(DAT_00764294,DAT_00764298);
      mobyutil::MB_randRangeFloat(DAT_007642a0,DAT_007642a4);
      uVar3 = DAT_007642ac;
      uVar2 = DAT_007642a8;
      mobyutil::MB_randRangeFloat((float)dVar12,(float)dVar13);
      uVar5 = fastfunc::FastLerpColor(uVar2,uVar3);
      uVar3 = DAT_007642b4;
      uVar2 = DAT_007642b0;
      mobyutil::MB_randRangeFloat((float)dVar12,(float)dVar13);
      uVar6 = fastfunc::FastLerpColor(uVar2,uVar3);
      local_a0 = (longlong)(DAT_007642b8 << 1);
      dVar17 = (double)mobyutil::MB_randRangeFloat((float)(longlong)DAT_007642b8,(float)local_a0);
      uVar7 = fastfunc::FastDoubleToInt((double)(float)(dVar17 * (double)animationSpeed));
      local_a0 = (longlong)DAT_007642bc;
      dVar17 = (double)mobyutil::MB_randRangeFloat
                                 ((float)local_a0,(float)((double)local_a0 * dVar14));
      uVar8 = fastfunc::FastDoubleToInt((double)(float)(dVar17 * (double)animationSpeed));
      local_a0 = (longlong)DAT_007642c0;
      dVar17 = (double)mobyutil::MB_randRangeFloat
                                 ((float)((double)local_a0 * dVar15),(float)local_a0);
      uVar9 = fastfunc::FastDoubleToInt((double)(float)(dVar17 * (double)animationSpeed));
      partupd::SpawnPart_2(local_110,local_f0,local_e0,uVar5,uVar6,uVar7,uVar8,uVar9);
      iVar10 = iVar10 + 1;
    } while (iVar10 < DAT_007642c4 * param_5);
  }
  return;
}



//==== 001caf98  ns=mobyupdate_helpers  size=0x644
// sig: undefined M1109_001caf98(void)
// callers(1): 001cb618 mobyupdate_helpers::M1109_001cb618
// callees(9): 000fcbe8 mobyutil::MB_randRangeFloat; 000fea60 mobyutil::MB_randSphere; 001206e8 partupd::SpawnPart_2; 001bc7c0 mobyupdate_helpers::M1103_001bc7c0; 001ca968 mobyupdate_helpers::M1109_001ca968; 002d1440 FUN_002d1440; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M1109_001caf98(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  char cVar11;
  short sVar13;
  int iVar12;
  ushort *puVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  undefined1 auStack_130 [16];
  undefined1 local_120 [16];
  undefined1 auStack_110 [16];
  undefined1 local_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 local_e0 [32];
  
  dVar18 = 0.0;
  iVar12 = *(int *)(param_1 + 0x78);
  FUN_002d1440(0x43d50000433dc000,0x432d11ec00000000,
               (int)(animationSpeed * ((float)(longlong)DAT_00764284 + 0.5)),DAT_00764288,
               PTR_DAT_0076428c);
  dVar20 = 1.0;
  sVar13 = 0;
  puVar14 = (ushort *)(&mobyutil::g_MobyGroups)[*(int *)(iVar12 + 0xcc)];
  uVar17 = 0x4000000000000000;
  uVar21 = 0x403e000000000000;
  dVar19 = dVar18;
  do {
    uVar1 = *puVar14;
    mobyutil::MB_randSphere(dVar20,uVar17,auStack_130);
    M1109_001ca968(uVar21,param_1,&MobyInstance[uVar1 & 0x7fff].pos,auStack_130,1);
    uVar2 = *puVar14;
    sVar13 = sVar13 + 1;
    puVar14 = puVar14 + 1;
    dVar15 = (double)MobyInstance[uVar1 & 0x7fff].bSphere.rad;
    if (dVar18 - dVar15 < 0.0) {
      dVar18 = dVar15;
    }
  } while (-1 < (short)uVar2);
  fastfunc::FastIntToDouble(sVar13);
  puVar14 = (ushort *)(&mobyutil::g_MobyGroups)[*(int *)(iVar12 + 0xcc)];
  do {
    uVar3 = *puVar14 & 0x7fff;
    mobyutil::MB_randSphere
              ((double)(mobyutil::g_FrameTime * 0.2617994),
               (double)(mobyutil::g_FrameTime * 0.08726646),auStack_110);
    M1103_001bc7c0(MobyInstance + uVar3,local_120,auStack_110);
    iVar12 = 0;
    if (0 < DAT_00764304) {
      dVar18 = 0.00048828125;
      uVar17 = 0x4010000000000000;
      do {
        mobyutil::MB_randSphere
                  (dVar19,(double)(float)((double)MobyInstance[uVar3].bSphere.rad * dVar18),
                   local_100);
        mobyutil::MB_randSphere(dVar19,(double)(DAT_007642d0 * mobyutil::g_FrameTime),auStack_f0);
        mobyutil::MB_randRangeFloat(DAT_007642e4,DAT_007642e8);
        mobyutil::MB_randRangeFloat(DAT_007642ec,DAT_007642f0);
        uVar5 = DAT_007642f8;
        uVar4 = DAT_007642f4;
        mobyutil::MB_randRangeFloat((float)dVar19,(float)dVar20);
        uVar21 = fastfunc::FastLerpColor(uVar4,uVar5);
        uVar5 = DAT_00764300;
        uVar4 = DAT_007642fc;
        mobyutil::MB_randRangeFloat((float)dVar19,(float)dVar20);
        uVar6 = fastfunc::FastLerpColor(uVar4,uVar5);
        dVar15 = (double)mobyutil::MB_randRangeFloat((float)dVar19,(float)dVar20);
        uVar7 = fastfunc::FastDoubleToInt
                          ((double)(animationSpeed *
                                   (float)((double)(longlong)DAT_007642d4 * dVar15 + dVar20)));
        dVar16 = (double)(longlong)DAT_007642d8;
        dVar15 = (double)mobyutil::MB_randRangeFloat(-DAT_007642e0,DAT_007642e0);
        uVar8 = fastfunc::FastDoubleToInt
                          ((double)(animationSpeed *
                                   (float)(dVar16 * (double)(float)(dVar15 + dVar20))));
        dVar16 = (double)(longlong)DAT_007642dc;
        dVar15 = (double)mobyutil::MB_randRangeFloat(-DAT_007642e0,DAT_007642e0);
        uVar9 = fastfunc::FastDoubleToInt
                          ((double)(animationSpeed *
                                   (float)(dVar16 * (double)(float)(dVar15 + dVar20))));
        iVar10 = partupd::SpawnPart_2(local_100,auStack_f0,local_e0,uVar21,uVar6,uVar7,uVar8,uVar9);
        if (iVar10 != 0) {
          cVar11 = fastfunc::FastDoubleToInt(uVar17);
          *(char *)(iVar10 + 9) = cVar11 + -0x20;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < DAT_00764304);
    }
    uVar1 = *puVar14;
    puVar14 = puVar14 + 1;
  } while (-1 < (short)uVar1);
  MobyInstance[uVar3].setByGroup = '\x1e';
  return;
}



//==== 001cb618  ns=mobyupdate_helpers  size=0x16a0
// sig: undefined M1109_001cb618(void)
// callers(1): 001ccf10 mobyupdate_unsorted::UpdateMoby_1109
// callees(10): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00109af0 mobyutil::Delt; 0010a2e0 mobyutil::OrganicDeltAng; 0015d380 sound::sound_LevelPlay; 001ca968 mobyupdate_helpers::M1109_001ca968; 001caf98 mobyupdate_helpers::M1109_001caf98; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502758 fastfunc::FastDoubleToInt

ulonglong mobyupdate_helpers::M1109_001cb618(MobyInstance *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  void *pvVar12;
  int iVar13;
  uint uVar14;
  Spline *pSVar15;
  Spline *pSVar16;
  Spline *pSVar17;
  uint uVar18;
  ulonglong *puVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  int iVar27;
  float *pfVar28;
  float *pfVar29;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  int iVar30;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar31;
  longlong lVar32;
  double dVar33;
  double dVar34;
  ulonglong uVar35;
  double dVar36;
  double dVar37;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar38;
  ulonglong in_f31;
  double dVar39;
  double dVar40;
  
  uVar22 = ZEXT48(&stack0x00000000);
  lVar26 = uVar22 - 0x2d0;
  puVar19 = (ulonglong *)lVar26;
  *puVar19 = uVar22;
  puVar19[0x5c] = in_LR;
  puVar19[0x56] = in_f28;
  puVar19[0x57] = in_f29;
  puVar19[0x58] = in_f30;
  puVar19[0x59] = in_f31;
  puVar19[0x55] = unaff_r31;
  puVar19[0x4c] = unaff_r22;
  iVar30 = (int)(param_2 << 2);
  puVar19[0x52] = unaff_r28;
  fVar1 = animationSpeed;
  puVar19[0x54] = unaff_r30;
  pvVar12 = param_1->pVar;
  iVar13 = *(int *)((int)pvVar12 + iVar30 + 0x60);
  iVar27 = *(int *)((int)pvVar12 + iVar30 + 0x74);
  iVar30 = *(int *)((int)pvVar12 + iVar30 + 0x88);
  puVar19[0x53] = unaff_r29;
  puVar19[0x4f] = unaff_r25;
  pSVar15 = Splines[iVar13];
  pSVar16 = Splines[iVar27];
  pSVar17 = Splines[iVar30];
  puVar19[0x51] = unaff_r27;
  puVar19[0x50] = unaff_r26;
  puVar19[0x4e] = unaff_r24;
  puVar19[0x4d] = unaff_r23;
  puVar19[0x4b] = unaff_r21;
  mobyutil::Delt(1.0,1.0 / (float)(longlong)(fVar1 * 1200.5),(float *)((int)pvVar12 + 0xf4));
  puVar19[0x49] = (longlong)(pSVar15->cnt + -1);
  dVar39 = (double)(*(float *)((int)pvVar12 + 0xf4) * (float)(longlong)puVar19[0x49]);
  lVar23 = fastfunc::FastDoubleToInt(dVar39);
  iVar13 = pSVar16->cnt;
  iVar30 = (int)lVar23;
  puVar19[0x49] = (longlong)iVar30;
  fVar1 = *(float *)((int)pvVar12 + 0xf4);
  uVar35 = puVar19[0x49];
  puVar19[0x49] = (longlong)(iVar13 + -1);
  dVar38 = (double)(longlong)uVar35;
  dVar39 = (double)(float)(dVar39 - dVar38);
  lVar24 = fastfunc::FastDoubleToInt((double)(fVar1 * (float)(longlong)puVar19[0x49]));
  puVar19[0x49] = (longlong)(pSVar17->cnt + -1);
  dVar40 = (double)(*(float *)((int)pvVar12 + 0xf4) * (float)(longlong)puVar19[0x49]);
  lVar25 = fastfunc::FastDoubleToInt(dVar40);
  iVar13 = (int)(lVar23 << 4);
  dVar40 = (double)(float)(dVar40 - dVar38);
  dVar38 = (double)*(float *)((int)&pSVar15->points[0].x + iVar13);
  fVar1 = *(float *)((int)&pSVar15->points[1].y + iVar13);
  fVar2 = *(float *)((int)&pSVar15->points[0].y + iVar13);
  iVar27 = (int)(lVar25 << 4);
  pfVar29 = (float *)((int)&((Spline *)(pSVar17->points + -1))->cnt + iVar27);
  fVar3 = *(float *)((int)&pSVar15->points[1].z + iVar13);
  fVar4 = *(float *)((int)&pSVar15->points[0].z + iVar13);
  uVar5 = *(undefined4 *)((int)&pSVar15->points[1].w + iVar13);
  *(float *)(puVar19 + 0x10) =
       (float)(dVar39 * (double)(float)((double)*(float *)((int)&pSVar15->points[1].x + iVar13) -
                                       dVar38) + dVar38);
  *(float *)((int)puVar19 + 0x84) =
       (float)(dVar39 * (double)(fVar1 - fVar2) +
              (double)*(float *)((int)&pSVar15->points[0].y + iVar13));
  fVar1 = *(float *)((int)&pSVar15->points[0].z + iVar13);
  *(undefined4 *)((int)puVar19 + 0x8c) = uVar5;
  *(float *)(puVar19 + 0x11) = (float)(dVar39 * (double)(fVar3 - fVar4) + (double)fVar1);
  fVar1 = pfVar29[8];
  fVar2 = pfVar29[4];
  fVar3 = pfVar29[9];
  fVar4 = pfVar29[5];
  fVar6 = pfVar29[10];
  fVar7 = pfVar29[6];
  (param_1->pos).w = pfVar29[0xb];
  (param_1->pos).x =
       (float)(dVar40 * (double)(float)((double)fVar1 - (double)fVar2) + (double)fVar2);
  (param_1->pos).y =
       (float)(dVar40 * (double)(float)((double)fVar3 - (double)fVar4) + (double)fVar4);
  (param_1->pos).z =
       (float)(dVar40 * (double)(float)((double)fVar6 - (double)fVar7) + (double)fVar7);
  camera::camera5::Camera_SetMobyDrivenTargetPos((float *)(puVar19 + 0x10));
  dVar38 = 0.7853981852531433;
  if ((int)lVar25 < 1) {
    fVar1 = pSVar17->points[0].y;
    fVar2 = pSVar17->points[1].y;
    fVar3 = pSVar17->points[0].x;
    fVar6 = fVar1 - fVar2;
    fVar4 = pSVar17->points[1].x;
    fVar7 = fVar3 - fVar4;
    fVar11 = pSVar17->points[1].z - pSVar17->points[0].z;
    fVar6 = SQRT(fVar7 * fVar7 + fVar6 * fVar6);
    *(float *)(puVar19 + 0x1a) = fVar11;
    fVar11 = ABS(fVar11);
    fVar7 = ABS(fVar6);
    *(float *)((int)puVar19 + 0xcc) = fVar6;
    *(float *)((int)puVar19 + 0xd4) = fVar7 - fVar11;
    dVar39 = 0.0;
    uVar35 = (ulonglong)(*(uint *)((int)puVar19 + 0xcc) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar19 + 0xd4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar19 + 0x1a) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)((int)puVar19 + 0xcc));
    if (*(float *)((int)puVar19 + 0xd4) - 0.0 < 0.0) {
      fVar6 = fVar11;
    }
    fVar11 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar35 << 2));
    fVar8 = ABS(*(float *)(puVar19 + 0x1a));
    if (*(float *)((int)puVar19 + 0xd4) - 0.0 < 0.0) {
      fVar8 = fVar7;
    }
    fVar7 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    dVar34 = dVar39;
    if (0.0 < fVar6) {
      lVar23 = uVar22 - 0x2c0;
      lVar32 = uVar22 - 0x118;
      lVar25 = uVar22 - 0x128;
      lVar31 = 2;
      fVar6 = (fVar8 - fVar6) / (fVar8 + fVar6);
      fVar8 = fVar6 * fVar6;
      *(float *)((int)puVar19 + 0x1b4) = fVar6;
      *(float *)((int)puVar19 + 0x1ac) = fVar6;
      *(float *)(puVar19 + 0x36) = fVar6;
      *(float *)(puVar19 + 0x35) = fVar6;
      fVar6 = fVar8 * fVar8;
      *(float *)((int)puVar19 + 0x1ac) = *(float *)((int)puVar19 + 0x1ac) * fVar8;
      *(float *)(puVar19 + 0x36) = *(float *)(puVar19 + 0x36) * fVar6;
      *(float *)((int)puVar19 + 0x1b4) = *(float *)((int)puVar19 + 0x1b4) * fVar6 * fVar8;
      do {
        *(float *)((int)lVar23 + 0x1a8) = *(float *)((int)lVar23 + 0x198) * fVar6 * fVar6;
        iVar27 = (int)lVar25;
        lVar25 = lVar25 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar32 + 4) = *(float *)(iVar27 + 4) * fVar6 * fVar6;
        lVar32 = lVar32 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar32 = uVar22 - 0x128;
      pfVar29 = (float *)&DAT_007358e0;
      lVar23 = lVar26;
      lVar25 = lVar32;
      do {
        fVar6 = *pfVar29;
        fVar8 = pfVar29[1];
        pfVar29 = pfVar29 + 2;
        *(float *)((int)lVar23 + 0x1a8) = *(float *)((int)lVar23 + 0x1a8) * fVar6;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar8;
        lVar25 = lVar25 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar25 = 2;
      lVar23 = lVar26;
      do {
        iVar27 = (int)lVar23;
        iVar20 = (int)lVar32;
        lVar23 = lVar23 + 0x10;
        lVar32 = lVar32 + 0x10;
        dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar27 + 0x1a8)) +
                          *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) + *(float *)(iVar20 + 0xc)
                         );
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar11 + fVar7);
    }
    fVar4 = fVar4 - fVar3;
    fVar2 = fVar2 - fVar1;
    fVar6 = ABS(fVar4);
    fVar3 = ABS(fVar2);
    *(float *)(puVar19 + 0x18) = fVar4;
    *(float *)((int)puVar19 + 0xc4) = fVar2;
    *(float *)(puVar19 + 0x19) = fVar6 - fVar3;
    uVar18 = *(uint *)(puVar19 + 0x18);
    fVar1 = *(float *)(puVar19 + 0x18);
    uVar14 = *(uint *)((int)puVar19 + 0xc4);
    (param_1->rotation).y = (float)-dVar34;
    uVar35 = (ulonglong)(uVar18 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar19 + 0x19) >> 0x1e) & 2 | (ulonglong)(uVar14 >> 0x1d) & 4;
    fVar1 = ABS(fVar1);
    if (*(float *)(puVar19 + 0x19) - 0.0 < 0.0) {
      fVar1 = fVar3;
    }
    fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar35 << 2));
    fVar3 = ABS(*(float *)((int)puVar19 + 0xc4));
    if (*(float *)(puVar19 + 0x19) - 0.0 < 0.0) {
      fVar3 = fVar6;
    }
    fVar4 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    if (0.0 < fVar1) {
      lVar23 = uVar22 - 0x2c0;
      lVar32 = uVar22 - 0x138;
      lVar25 = uVar22 - 0x148;
      lVar31 = 2;
      fVar1 = (fVar3 - fVar1) / (fVar3 + fVar1);
      fVar3 = fVar1 * fVar1;
      *(float *)((int)puVar19 + 0x194) = fVar1;
      *(float *)((int)puVar19 + 0x18c) = fVar1;
      *(float *)(puVar19 + 0x32) = fVar1;
      *(float *)(puVar19 + 0x31) = fVar1;
      fVar1 = fVar3 * fVar3;
      *(float *)((int)puVar19 + 0x18c) = *(float *)((int)puVar19 + 0x18c) * fVar3;
      *(float *)(puVar19 + 0x32) = *(float *)(puVar19 + 0x32) * fVar1;
      *(float *)((int)puVar19 + 0x194) = *(float *)((int)puVar19 + 0x194) * fVar1 * fVar3;
      do {
        *(float *)((int)lVar23 + 0x188) = *(float *)((int)lVar23 + 0x178) * fVar1 * fVar1;
        iVar27 = (int)lVar25;
        lVar25 = lVar25 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar32 + 4) = *(float *)(iVar27 + 4) * fVar1 * fVar1;
        lVar32 = lVar32 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar32 = uVar22 - 0x148;
      pfVar29 = (float *)&DAT_007358e0;
      lVar23 = lVar26;
      lVar25 = lVar32;
      do {
        fVar1 = *pfVar29;
        fVar3 = pfVar29[1];
        pfVar29 = pfVar29 + 2;
        *(float *)((int)lVar23 + 0x188) = *(float *)((int)lVar23 + 0x188) * fVar1;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar3;
        lVar25 = lVar25 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar25 = 2;
      lVar23 = lVar26;
      do {
        iVar27 = (int)lVar23;
        iVar20 = (int)lVar32;
        lVar23 = lVar23 + 0x10;
        lVar32 = lVar32 + 0x10;
        dVar39 = (double)((float)(dVar39 + (double)*(float *)(iVar27 + 0x188)) +
                          *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) + *(float *)(iVar20 + 0xc)
                         );
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      dVar39 = (double)((float)(dVar39 + 0.7853981852531433) * fVar2 + fVar4);
    }
  }
  else {
    fVar1 = pfVar29[4];
    fVar2 = pfVar29[5];
    fVar3 = fVar1 - *(float *)((int)&((Spline *)(pSVar17->points + -1))->cnt + iVar27);
    fVar4 = fVar2 - pfVar29[1];
    fVar7 = ABS(fVar3);
    fVar6 = ABS(fVar4);
    *(float *)((int)puVar19 + 0xfc) = fVar3;
    *(float *)(puVar19 + 0x20) = fVar4;
    *(float *)((int)puVar19 + 0x104) = fVar7 - fVar6;
    dVar39 = 0.0;
    uVar35 = (ulonglong)(*(uint *)((int)puVar19 + 0xfc) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar19 + 0x104) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar19 + 0x20) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)((int)puVar19 + 0xfc));
    if (*(float *)((int)puVar19 + 0x104) - 0.0 < 0.0) {
      fVar3 = fVar6;
    }
    fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar35 << 2));
    fVar4 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    fVar11 = ABS(*(float *)(puVar19 + 0x20));
    if (*(float *)((int)puVar19 + 0x104) - 0.0 < 0.0) {
      fVar11 = fVar7;
    }
    dVar34 = dVar39;
    if (0.0 < fVar3) {
      lVar23 = uVar22 - 0x2c0;
      lVar25 = uVar22 - 0xa8;
      lVar32 = uVar22 - 0x98;
      lVar31 = 2;
      fVar3 = (fVar11 - fVar3) / (fVar11 + fVar3);
      fVar7 = fVar3 * fVar3;
      *(float *)((int)puVar19 + 0x234) = fVar3;
      *(float *)((int)puVar19 + 0x22c) = fVar3;
      *(float *)(puVar19 + 0x46) = fVar3;
      *(float *)(puVar19 + 0x45) = fVar3;
      fVar3 = fVar7 * fVar7;
      *(float *)((int)puVar19 + 0x22c) = *(float *)((int)puVar19 + 0x22c) * fVar7;
      *(float *)(puVar19 + 0x46) = *(float *)(puVar19 + 0x46) * fVar3;
      *(float *)((int)puVar19 + 0x234) = *(float *)((int)puVar19 + 0x234) * fVar3 * fVar7;
      do {
        *(float *)((int)lVar23 + 0x228) = *(float *)((int)lVar23 + 0x218) * fVar3 * fVar3;
        iVar27 = (int)lVar25;
        lVar23 = lVar23 + 8;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar32 + 4) = *(float *)(iVar27 + 4) * fVar3 * fVar3;
        lVar32 = lVar32 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar32 = uVar22 - 0xa8;
      pfVar28 = (float *)&DAT_007358e0;
      lVar23 = lVar26;
      lVar25 = lVar32;
      do {
        fVar3 = *pfVar28;
        fVar7 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar23 + 0x228) = *(float *)((int)lVar23 + 0x228) * fVar3;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar7;
        lVar25 = lVar25 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar25 = 2;
      lVar23 = lVar26;
      do {
        iVar27 = (int)lVar23;
        lVar23 = lVar23 + 0x10;
        iVar20 = (int)lVar32;
        lVar32 = lVar32 + 0x10;
        dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar27 + 0x228)) +
                          *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) + *(float *)(iVar20 + 0xc)
                         );
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar6 + fVar4);
    }
    fVar1 = pfVar29[8] - fVar1;
    fVar2 = pfVar29[9] - fVar2;
    fVar4 = ABS(fVar1);
    fVar3 = ABS(fVar2);
    *(float *)(puVar19 + 0x1e) = fVar1;
    *(float *)((int)puVar19 + 0xf4) = fVar2;
    *(float *)(puVar19 + 0x1f) = fVar4 - fVar3;
    uVar35 = (ulonglong)(*(uint *)(puVar19 + 0x1e) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar19 + 0x1f) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar19 + 0xf4) >> 0x1d) & 4;
    fVar1 = ABS(*(float *)(puVar19 + 0x1e));
    if (*(float *)(puVar19 + 0x1f) - 0.0 < 0.0) {
      fVar1 = fVar3;
    }
    fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar35 << 2));
    fVar3 = ABS(*(float *)((int)puVar19 + 0xf4));
    if (*(float *)(puVar19 + 0x1f) - 0.0 < 0.0) {
      fVar3 = fVar4;
    }
    fVar4 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    dVar33 = dVar39;
    if (0.0 < fVar1) {
      lVar23 = uVar22 - 0x2c0;
      lVar32 = uVar22 - 0xb8;
      lVar25 = uVar22 - 200;
      lVar31 = 2;
      fVar1 = (fVar3 - fVar1) / (fVar3 + fVar1);
      fVar3 = fVar1 * fVar1;
      *(float *)((int)puVar19 + 0x214) = fVar1;
      *(float *)((int)puVar19 + 0x20c) = fVar1;
      *(float *)(puVar19 + 0x42) = fVar1;
      *(float *)(puVar19 + 0x41) = fVar1;
      fVar1 = fVar3 * fVar3;
      *(float *)((int)puVar19 + 0x20c) = *(float *)((int)puVar19 + 0x20c) * fVar3;
      *(float *)(puVar19 + 0x42) = *(float *)(puVar19 + 0x42) * fVar1;
      *(float *)((int)puVar19 + 0x214) = *(float *)((int)puVar19 + 0x214) * fVar1 * fVar3;
      do {
        *(float *)((int)lVar23 + 0x208) = *(float *)((int)lVar23 + 0x1f8) * fVar1 * fVar1;
        iVar27 = (int)lVar25;
        lVar25 = lVar25 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar32 + 4) = *(float *)(iVar27 + 4) * fVar1 * fVar1;
        lVar32 = lVar32 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar32 = uVar22 - 200;
      pfVar28 = (float *)&DAT_007358e0;
      lVar23 = lVar26;
      lVar25 = lVar32;
      do {
        fVar1 = *pfVar28;
        fVar3 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar23 + 0x208) = *(float *)((int)lVar23 + 0x208) * fVar1;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar3;
        lVar25 = lVar25 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar25 = 2;
      lVar23 = lVar26;
      do {
        iVar27 = (int)lVar23;
        iVar20 = (int)lVar32;
        lVar23 = lVar23 + 0x10;
        lVar32 = lVar32 + 0x10;
        dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar27 + 0x208)) +
                          *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) + *(float *)(iVar20 + 0xc)
                         );
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar2 + fVar4);
    }
    dVar33 = (double)fastfunc::FastDiffRots(dVar33,dVar34);
    dVar34 = (double)fastfunc::FastWrapRot((float)(dVar40 * dVar33),(float)dVar34);
    (param_1->rotation).z = (float)dVar34;
    fVar1 = pfVar29[5];
    fVar4 = pfVar29[1] - fVar1;
    fVar2 = pfVar29[4];
    fVar6 = *pfVar29 - fVar2;
    fVar3 = pfVar29[6];
    fVar7 = fVar3 - pfVar29[2];
    fVar4 = SQRT(fVar6 * fVar6 + fVar4 * fVar4);
    *(float *)(puVar19 + 0x1d) = fVar7;
    dVar37 = ABS((double)fVar7);
    dVar33 = ABS((double)fVar4);
    *(float *)((int)puVar19 + 0xe4) = fVar4;
    *(float *)((int)puVar19 + 0xec) = (float)(dVar33 - dVar37);
    fVar4 = pfVar29[8];
    fVar6 = pfVar29[9];
    fVar7 = pfVar29[10];
    uVar35 = (ulonglong)(*(uint *)((int)puVar19 + 0xe4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar19 + 0xec) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar19 + 0x1d) >> 0x1d) & 4;
    dVar34 = ABS((double)*(float *)((int)puVar19 + 0xe4));
    if ((double)*(float *)((int)puVar19 + 0xec) - dVar39 < 0.0) {
      dVar34 = dVar37;
    }
    fVar11 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar35 << 2));
    dVar37 = ABS((double)*(float *)(puVar19 + 0x1d));
    if ((double)*(float *)((int)puVar19 + 0xec) - dVar39 < 0.0) {
      dVar37 = dVar33;
    }
    fVar8 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    dVar33 = dVar39;
    if (dVar39 < dVar34) {
      lVar23 = uVar22 - 0x2c0;
      lVar32 = uVar22 - 0xd8;
      lVar25 = uVar22 - 0xe8;
      lVar31 = 2;
      fVar9 = (float)(dVar37 - dVar34) / (float)(dVar37 + dVar34);
      fVar10 = fVar9 * fVar9;
      *(float *)((int)puVar19 + 500) = fVar9;
      *(float *)((int)puVar19 + 0x1ec) = fVar9;
      *(float *)(puVar19 + 0x3e) = fVar9;
      *(float *)(puVar19 + 0x3d) = fVar9;
      fVar9 = fVar10 * fVar10;
      *(float *)((int)puVar19 + 0x1ec) = *(float *)((int)puVar19 + 0x1ec) * fVar10;
      *(float *)(puVar19 + 0x3e) = *(float *)(puVar19 + 0x3e) * fVar9;
      *(float *)((int)puVar19 + 500) = *(float *)((int)puVar19 + 500) * fVar9 * fVar10;
      do {
        *(float *)((int)lVar23 + 0x1e8) = *(float *)((int)lVar23 + 0x1d8) * fVar9 * fVar9;
        iVar27 = (int)lVar25;
        lVar25 = lVar25 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar32 + 4) = *(float *)(iVar27 + 4) * fVar9 * fVar9;
        lVar32 = lVar32 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar32 = uVar22 - 0xe8;
      pfVar29 = (float *)&DAT_007358e0;
      lVar23 = lVar26;
      lVar25 = lVar32;
      do {
        fVar9 = *pfVar29;
        fVar10 = pfVar29[1];
        pfVar29 = pfVar29 + 2;
        *(float *)((int)lVar23 + 0x1e8) = *(float *)((int)lVar23 + 0x1e8) * fVar9;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar10;
        lVar25 = lVar25 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar25 = 2;
      lVar23 = lVar26;
      dVar34 = dVar39;
      do {
        iVar27 = (int)lVar23;
        iVar20 = (int)lVar32;
        lVar23 = lVar23 + 0x10;
        lVar32 = lVar32 + 0x10;
        dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar27 + 0x1e8)) +
                          *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) + *(float *)(iVar20 + 0xc)
                         );
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      dVar33 = (double)((float)(dVar34 + dVar38) * fVar11 + fVar8);
    }
    fVar1 = fVar1 - fVar6;
    fVar2 = fVar2 - fVar4;
    fVar7 = fVar7 - fVar3;
    fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
    *(float *)((int)puVar19 + 0xdc) = fVar7;
    dVar36 = ABS((double)fVar7);
    dVar37 = ABS((double)fVar1);
    *(float *)(puVar19 + 0x1b) = fVar1;
    *(float *)(puVar19 + 0x1c) = (float)(dVar37 - dVar36);
    uVar35 = (ulonglong)(*(uint *)(puVar19 + 0x1b) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar19 + 0x1c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar19 + 0xdc) >> 0x1d) & 4;
    dVar34 = ABS((double)*(float *)(puVar19 + 0x1b));
    if ((double)*(float *)(puVar19 + 0x1c) - dVar39 < 0.0) {
      dVar34 = dVar36;
    }
    fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar35 << 2));
    dVar36 = ABS((double)*(float *)((int)puVar19 + 0xdc));
    if ((double)*(float *)(puVar19 + 0x1c) - dVar39 < 0.0) {
      dVar36 = dVar37;
    }
    fVar2 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    if (dVar39 < dVar34) {
      lVar23 = uVar22 - 0x2c0;
      lVar32 = uVar22 - 0xf8;
      lVar25 = uVar22 - 0x108;
      lVar31 = 2;
      fVar3 = (float)(dVar36 - dVar34) / (float)(dVar36 + dVar34);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar19 + 0x1d4) = fVar3;
      *(float *)((int)puVar19 + 0x1cc) = fVar3;
      *(float *)(puVar19 + 0x3a) = fVar3;
      *(float *)(puVar19 + 0x39) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar19 + 0x1cc) = *(float *)((int)puVar19 + 0x1cc) * fVar4;
      *(float *)(puVar19 + 0x3a) = *(float *)(puVar19 + 0x3a) * fVar3;
      *(float *)((int)puVar19 + 0x1d4) = *(float *)((int)puVar19 + 0x1d4) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar23 + 0x1c8) = *(float *)((int)lVar23 + 0x1b8) * fVar3 * fVar3;
        iVar27 = (int)lVar25;
        lVar25 = lVar25 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar32 + 4) = *(float *)(iVar27 + 4) * fVar3 * fVar3;
        lVar32 = lVar32 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar32 = uVar22 - 0x108;
      pfVar29 = (float *)&DAT_007358e0;
      lVar23 = lVar26;
      lVar25 = lVar32;
      do {
        fVar3 = *pfVar29;
        fVar4 = pfVar29[1];
        pfVar29 = pfVar29 + 2;
        *(float *)((int)lVar23 + 0x1c8) = *(float *)((int)lVar23 + 0x1c8) * fVar3;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar4;
        lVar25 = lVar25 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar25 = 2;
      lVar23 = lVar26;
      do {
        iVar27 = (int)lVar23;
        iVar20 = (int)lVar32;
        lVar23 = lVar23 + 0x10;
        lVar32 = lVar32 + 0x10;
        dVar39 = (double)((float)(dVar39 + (double)*(float *)(iVar27 + 0x1c8)) +
                          *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) + *(float *)(iVar20 + 0xc)
                         );
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      dVar39 = (double)((float)(dVar39 + dVar38) * fVar1 + fVar2);
    }
    dVar33 = -dVar33;
    dVar39 = (double)fastfunc::FastDiffRots(-dVar39,dVar33);
    dVar39 = (double)fastfunc::FastWrapRot((float)(dVar40 * dVar39),(float)dVar33);
    (param_1->rotation).y = (float)dVar39;
    fVar1 = *(float *)((int)pvVar12 + 0xb0) + 1.5707963;
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
    (param_1->rotation).y =
         (float)(dVar39 * (double)(fVar1 * fVar4 * 2.601887e-06 +
                                  fVar4 * -0.0001980741 +
                                  fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3));
    dVar39 = (double)fastfunc::FastWrapRot((param_1->rotation).z,*(float *)((int)pvVar12 + 0xb0));
  }
  (param_1->rotation).z = (float)dVar39;
  if ((0 < iVar30) && (0 < (int)lVar24)) {
    iVar27 = (int)(lVar24 << 4);
    dVar39 = 0.0;
    *(undefined4 *)((int)puVar19 + 0x7c) = 0;
    *(undefined4 *)(puVar19 + 0xf) = 0;
    *(undefined4 *)((int)puVar19 + 0x74) = 0;
    *(undefined4 *)(puVar19 + 0xe) = 0;
    fVar1 = *(float *)(puVar19 + 0x10);
    fVar2 = *(float *)((int)puVar19 + 0x84);
    fVar3 = *(float *)((int)&pSVar16->points[0].x + iVar27) - fVar1;
    fVar4 = *(float *)((int)&pSVar16->points[0].y + iVar27) - fVar2;
    fVar11 = ABS(fVar3);
    fVar7 = ABS(fVar4);
    *(float *)((int)puVar19 + 0xb4) = fVar3;
    *(float *)(puVar19 + 0x17) = fVar4;
    *(float *)((int)puVar19 + 0xbc) = fVar11 - fVar7;
    fVar3 = *(float *)((int)&pSVar16->points[1].x + iVar27);
    fVar4 = *(float *)((int)&pSVar16->points[1].y + iVar27);
    uVar35 = (ulonglong)(*(uint *)((int)puVar19 + 0xb4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar19 + 0xbc) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar19 + 0x17) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)((int)puVar19 + 0xb4));
    if (*(float *)((int)puVar19 + 0xbc) - 0.0 < 0.0) {
      fVar6 = fVar7;
    }
    fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar35 << 2));
    fVar7 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    fVar9 = ABS(*(float *)(puVar19 + 0x17));
    if (*(float *)((int)puVar19 + 0xbc) - 0.0 < 0.0) {
      fVar9 = fVar11;
    }
    dVar34 = dVar39;
    if (0.0 < fVar6) {
      lVar23 = uVar22 - 0x2c0;
      lVar24 = uVar22 - 0x168;
      lVar25 = uVar22 - 0x158;
      lVar32 = 2;
      fVar6 = (fVar9 - fVar6) / (fVar9 + fVar6);
      fVar11 = fVar6 * fVar6;
      *(float *)((int)puVar19 + 0x174) = fVar6;
      *(float *)((int)puVar19 + 0x16c) = fVar6;
      *(float *)(puVar19 + 0x2e) = fVar6;
      *(float *)(puVar19 + 0x2d) = fVar6;
      fVar6 = fVar11 * fVar11;
      *(float *)((int)puVar19 + 0x16c) = *(float *)((int)puVar19 + 0x16c) * fVar11;
      *(float *)(puVar19 + 0x2e) = *(float *)(puVar19 + 0x2e) * fVar6;
      *(float *)((int)puVar19 + 0x174) = *(float *)((int)puVar19 + 0x174) * fVar6 * fVar11;
      do {
        *(float *)((int)lVar23 + 0x168) = *(float *)((int)lVar23 + 0x158) * fVar6 * fVar6;
        iVar20 = (int)lVar24;
        lVar23 = lVar23 + 8;
        lVar24 = lVar24 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar6 * fVar6;
        lVar25 = lVar25 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar32 = 4;
      lVar25 = uVar22 - 0x168;
      pfVar29 = (float *)&DAT_007358e0;
      lVar23 = lVar26;
      lVar24 = lVar25;
      do {
        fVar6 = *pfVar29;
        fVar11 = pfVar29[1];
        pfVar29 = pfVar29 + 2;
        *(float *)((int)lVar23 + 0x168) = *(float *)((int)lVar23 + 0x168) * fVar6;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar11;
        lVar24 = lVar24 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar24 = 2;
      lVar23 = lVar26;
      do {
        iVar20 = (int)lVar23;
        lVar23 = lVar23 + 0x10;
        iVar21 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar20 + 0x168)) +
                          *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) + *(float *)(iVar21 + 0xc)
                         );
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      dVar34 = (double)((float)(dVar34 + dVar38) * fVar8 + fVar7);
    }
    fVar3 = fVar3 - fVar1;
    fVar4 = fVar4 - fVar2;
    fVar6 = ABS(fVar3);
    fVar2 = ABS(fVar4);
    *(float *)(puVar19 + 0x15) = fVar3;
    *(float *)((int)puVar19 + 0xac) = fVar4;
    *(float *)(puVar19 + 0x16) = fVar6 - fVar2;
    uVar35 = (ulonglong)(*(uint *)(puVar19 + 0x15) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar19 + 0x16) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar19 + 0xac) >> 0x1d) & 4;
    fVar1 = ABS(*(float *)(puVar19 + 0x15));
    if (*(float *)(puVar19 + 0x16) - 0.0 < 0.0) {
      fVar1 = fVar2;
    }
    fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar35 << 2));
    fVar3 = ABS(*(float *)((int)puVar19 + 0xac));
    if (*(float *)(puVar19 + 0x16) - 0.0 < 0.0) {
      fVar3 = fVar6;
    }
    fVar4 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    dVar33 = dVar39;
    if (0.0 < fVar1) {
      lVar23 = uVar22 - 0x2c0;
      lVar25 = uVar22 - 0x178;
      lVar24 = uVar22 - 0x188;
      lVar32 = 2;
      fVar1 = (fVar3 - fVar1) / (fVar3 + fVar1);
      fVar3 = fVar1 * fVar1;
      *(float *)((int)puVar19 + 0x154) = fVar1;
      *(float *)((int)puVar19 + 0x14c) = fVar1;
      *(float *)(puVar19 + 0x2a) = fVar1;
      *(float *)(puVar19 + 0x29) = fVar1;
      fVar1 = fVar3 * fVar3;
      *(float *)((int)puVar19 + 0x14c) = *(float *)((int)puVar19 + 0x14c) * fVar3;
      *(float *)(puVar19 + 0x2a) = *(float *)(puVar19 + 0x2a) * fVar1;
      *(float *)((int)puVar19 + 0x154) = *(float *)((int)puVar19 + 0x154) * fVar1 * fVar3;
      do {
        *(float *)((int)lVar23 + 0x148) = *(float *)((int)lVar23 + 0x138) * fVar1 * fVar1;
        iVar20 = (int)lVar24;
        lVar24 = lVar24 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar1 * fVar1;
        lVar25 = lVar25 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar32 = 4;
      lVar25 = uVar22 - 0x188;
      pfVar29 = (float *)&DAT_007358e0;
      lVar23 = lVar26;
      lVar24 = lVar25;
      do {
        fVar1 = *pfVar29;
        fVar3 = pfVar29[1];
        pfVar29 = pfVar29 + 2;
        *(float *)((int)lVar23 + 0x148) = *(float *)((int)lVar23 + 0x148) * fVar1;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar3;
        lVar24 = lVar24 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar24 = 2;
      lVar23 = lVar26;
      do {
        iVar20 = (int)lVar23;
        iVar21 = (int)lVar25;
        lVar23 = lVar23 + 0x10;
        lVar25 = lVar25 + 0x10;
        dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar20 + 0x148)) +
                          *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) + *(float *)(iVar21 + 0xc)
                         );
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      dVar33 = (double)((float)(dVar33 + dVar38) * fVar2 + fVar4);
    }
    dVar33 = (double)fastfunc::FastDiffRots(dVar33,dVar34);
    dVar34 = (double)fastfunc::FastWrapRot((float)(dVar40 * dVar33),(float)dVar34);
    *(float *)(puVar19 + 0xf) = (float)dVar34;
    fVar1 = *(float *)((int)puVar19 + 0x84);
    fVar2 = *(float *)(puVar19 + 0x10);
    fVar4 = fVar1 - *(float *)((int)&pSVar16->points[0].y + iVar27);
    fVar6 = fVar2 - *(float *)((int)&pSVar16->points[0].x + iVar27);
    fVar3 = *(float *)(puVar19 + 0x11);
    fVar7 = *(float *)((int)&pSVar16->points[0].z + iVar27) - fVar3;
    fVar4 = SQRT(fVar6 * fVar6 + fVar4 * fVar4);
    *(float *)(puVar19 + 0x14) = fVar7;
    dVar37 = ABS((double)fVar7);
    dVar33 = ABS((double)fVar4);
    *(float *)((int)puVar19 + 0x9c) = fVar4;
    *(float *)((int)puVar19 + 0xa4) = (float)(dVar33 - dVar37);
    fVar4 = *(float *)((int)&pSVar16->points[1].x + iVar27);
    fVar6 = *(float *)((int)&pSVar16->points[1].y + iVar27);
    fVar7 = *(float *)((int)&pSVar16->points[1].z + iVar27);
    uVar35 = (ulonglong)(*(uint *)((int)puVar19 + 0x9c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar19 + 0xa4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar19 + 0x14) >> 0x1d) & 4;
    dVar34 = ABS((double)*(float *)((int)puVar19 + 0x9c));
    if ((double)*(float *)((int)puVar19 + 0xa4) - dVar39 < 0.0) {
      dVar34 = dVar37;
    }
    fVar11 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar35 << 2));
    dVar37 = ABS((double)*(float *)(puVar19 + 0x14));
    if ((double)*(float *)((int)puVar19 + 0xa4) - dVar39 < 0.0) {
      dVar37 = dVar33;
    }
    fVar8 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    dVar33 = dVar39;
    if (dVar39 < dVar34) {
      lVar23 = uVar22 - 0x2c0;
      lVar25 = uVar22 - 0x198;
      lVar24 = uVar22 - 0x1a8;
      lVar32 = 2;
      fVar9 = (float)(dVar37 - dVar34) / (float)(dVar37 + dVar34);
      fVar10 = fVar9 * fVar9;
      *(float *)((int)puVar19 + 0x134) = fVar9;
      *(float *)((int)puVar19 + 300) = fVar9;
      *(float *)(puVar19 + 0x26) = fVar9;
      *(float *)(puVar19 + 0x25) = fVar9;
      fVar9 = fVar10 * fVar10;
      *(float *)((int)puVar19 + 300) = *(float *)((int)puVar19 + 300) * fVar10;
      *(float *)(puVar19 + 0x26) = *(float *)(puVar19 + 0x26) * fVar9;
      *(float *)((int)puVar19 + 0x134) = *(float *)((int)puVar19 + 0x134) * fVar9 * fVar10;
      do {
        *(float *)((int)lVar23 + 0x128) = *(float *)((int)lVar23 + 0x118) * fVar9 * fVar9;
        iVar27 = (int)lVar24;
        lVar24 = lVar24 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar27 + 4) * fVar9 * fVar9;
        lVar25 = lVar25 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar32 = 4;
      lVar25 = uVar22 - 0x1a8;
      pfVar29 = (float *)&DAT_007358e0;
      lVar23 = lVar26;
      lVar24 = lVar25;
      do {
        fVar9 = *pfVar29;
        fVar10 = pfVar29[1];
        pfVar29 = pfVar29 + 2;
        *(float *)((int)lVar23 + 0x128) = *(float *)((int)lVar23 + 0x128) * fVar9;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar10;
        lVar24 = lVar24 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar24 = 2;
      lVar23 = lVar26;
      dVar34 = dVar39;
      do {
        iVar27 = (int)lVar23;
        iVar20 = (int)lVar25;
        lVar23 = lVar23 + 0x10;
        lVar25 = lVar25 + 0x10;
        dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar27 + 0x128)) +
                          *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) + *(float *)(iVar20 + 0xc)
                         );
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      dVar33 = (double)((float)(dVar34 + dVar38) * fVar11 + fVar8);
    }
    fVar1 = fVar1 - fVar6;
    fVar2 = fVar2 - fVar4;
    fVar7 = fVar7 - fVar3;
    fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
    *(float *)((int)puVar19 + 0x94) = fVar7;
    dVar36 = ABS((double)fVar7);
    dVar37 = ABS((double)fVar1);
    *(float *)(puVar19 + 0x12) = fVar1;
    *(float *)(puVar19 + 0x13) = (float)(dVar37 - dVar36);
    uVar35 = (ulonglong)(*(uint *)(puVar19 + 0x12) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar19 + 0x13) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar19 + 0x94) >> 0x1d) & 4;
    dVar34 = ABS((double)*(float *)(puVar19 + 0x12));
    if ((double)*(float *)(puVar19 + 0x13) - dVar39 < 0.0) {
      dVar34 = dVar36;
    }
    fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar35 << 2));
    dVar36 = ABS((double)*(float *)((int)puVar19 + 0x94));
    if ((double)*(float *)(puVar19 + 0x13) - dVar39 < 0.0) {
      dVar36 = dVar37;
    }
    fVar2 = *(float *)(((uint)(uVar35 << 2) | 0x735900) + 4);
    if (dVar39 < dVar34) {
      lVar23 = uVar22 - 0x2c0;
      lVar25 = uVar22 - 0x1b8;
      lVar24 = uVar22 - 0x1c8;
      lVar32 = 2;
      fVar3 = (float)(dVar36 - dVar34) / (float)(dVar36 + dVar34);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar19 + 0x114) = fVar3;
      *(float *)((int)puVar19 + 0x10c) = fVar3;
      *(float *)(puVar19 + 0x22) = fVar3;
      *(float *)(puVar19 + 0x21) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar19 + 0x10c) = *(float *)((int)puVar19 + 0x10c) * fVar4;
      *(float *)(puVar19 + 0x22) = *(float *)(puVar19 + 0x22) * fVar3;
      *(float *)((int)puVar19 + 0x114) = *(float *)((int)puVar19 + 0x114) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar23 + 0x108) = *(float *)((int)lVar23 + 0xf8) * fVar3 * fVar3;
        iVar27 = (int)lVar24;
        lVar24 = lVar24 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar27 + 4) * fVar3 * fVar3;
        lVar25 = lVar25 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar32 = 4;
      lVar25 = uVar22 - 0x1c8;
      pfVar29 = (float *)&DAT_007358e0;
      lVar23 = lVar26;
      lVar24 = lVar25;
      do {
        fVar3 = *pfVar29;
        fVar4 = pfVar29[1];
        pfVar29 = pfVar29 + 2;
        *(float *)((int)lVar23 + 0x108) = *(float *)((int)lVar23 + 0x108) * fVar3;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar4;
        lVar24 = lVar24 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar23 = 2;
      do {
        iVar27 = (int)lVar26;
        iVar20 = (int)lVar25;
        lVar26 = lVar26 + 0x10;
        lVar25 = lVar25 + 0x10;
        dVar39 = (double)((float)(dVar39 + (double)*(float *)(iVar27 + 0x108)) +
                          *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) + *(float *)(iVar20 + 0xc)
                         );
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      dVar39 = (double)((float)(dVar39 + dVar38) * fVar1 + fVar2);
    }
    dVar33 = -dVar33;
    dVar38 = (double)fastfunc::FastDiffRots(-dVar39,dVar33);
    dVar38 = (double)fastfunc::FastWrapRot((float)(dVar40 * dVar38),(float)dVar33);
    *(float *)((int)puVar19 + 0x74) = (float)dVar38;
    camera::camera5::Camera_SetMobyDrivenTargetRot((float *)(puVar19 + 0xe));
  }
  param_1->scale =
       param_1->pClass->gScale *
       -((*(float *)((int)pvVar12 + 0xc4) - *(float *)((int)pvVar12 + 200)) *
         *(float *)((int)pvVar12 + 0xf4) - *(float *)((int)pvVar12 + 0xc4));
  uVar18 = (int)*(uint *)((int)pvVar12 + 0xf4) >> 0x1f;
  if (0x3f4ccccd < (int)((uVar18 >> 1 ^ *(uint *)((int)pvVar12 + 0xf4)) - uVar18)) {
    mobyutil::OrganicDeltAng
              (3.1415927,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
               mobyutil::g_FrameTime * 6.2831855,(float *)((int)pvVar12 + 0xb0),0x1cb5dc,
               (float *)((int)pvVar12 + 0xb4));
  }
  lVar26 = fastfunc::FastDoubleToInt((double)*(float *)((int)&pSVar15->points[0].w + iVar13));
  iVar27 = -1;
  if (iVar30 != 0) {
    iVar27 = fastfunc::FastDoubleToInt((double)*(float *)((int)pSVar15->points + iVar13 + -4));
  }
  iVar30 = (int)lVar26;
  if ((-1 < iVar30) || (-1 < iVar27)) {
    *(undefined4 *)((int)&pSVar15->points[0].w + iVar13) = 0xbf800000;
    *(undefined4 *)((int)pSVar15->points + iVar13 + -4) = 0xbf800000;
    if (iVar30 < 8 && iVar27 < 8) {
      sound::sound_LevelPlay(0,0,param_1);
      M1109_001ca968(0x4018000000000000,param_1,
                     &Cuboids[*(int *)((int)pvVar12 + (int)(lVar26 << 2) + 0xd0)].pos,
                     Cuboids + *(int *)((int)pvVar12 + (int)(lVar26 << 2) + 0xd0),6);
    }
    else if ((iVar30 == 10) || (iVar27 == 10)) {
      sound::sound_LevelPlay(1,0,param_1);
      M1109_001caf98(param_1);
    }
  }
  return (LZCOUNT(0x3f800000 - *(int *)((int)pvVar12 + 0xf4)) << 0x3a) >> 0x3f & 1;
}



//==== 001cccb8  ns=mobyupdate_helpers  size=0x1b0
// sig: undefined M1109_001cccb8(void)
// callers(1): 001ccf10 mobyupdate_unsorted::UpdateMoby_1109
// callees(2): 0007b310 help::Help_QueueMessage; 0011aeec mobyutil::MB_ShowPersistentMessage
// strings: 00a1000c: 'None'

void mobyupdate_helpers::M1109_001cccb8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x78);
  iVar2 = *(int *)(iVar1 + 0xbc);
  if (iVar2 < 1) {
    if (-1 < iVar2) {
      iVar2 = 0;
      if (g_LevelFlags[Level][*(int *)(iVar1 + 0xf8)] == -1) {
        iVar2 = ((uint)((LZCOUNT(0xff - (uint)(byte)g_LevelFlags[Level][*(int *)(iVar1 + 0xfc)]) <<
                        0x3a) >> 0x3f) & 4) - 1;
      }
      *(int *)(iVar1 + 0x9c) = iVar2;
    }
  }
  else if (iVar2 < 2) {
    *(undefined4 *)(iVar1 + 0x9c) = 1;
  }
  else if (iVar2 < 3) {
    *(undefined4 *)(iVar1 + 0x9c) = 4;
  }
  if (((CHAR_ARRAY_00a1000c._664_2_ == 0) && (*(int *)(iVar1 + 0x9c) == 0)) &&
     ((DAT_0071fb59 != '\0' || (DAT_0071fb58 != '\0')))) {
    help::Help_QueueMessage(STR_THIS_SHUTTLE_HAS_AN_0x177A,0x53);
    *(undefined4 *)(iVar1 + 0x9c) = 0xffffffff;
    return;
  }
  iVar1 = *(int *)(iVar1 + 0x9c);
  if (iVar1 != 4) {
    if (iVar1 == 3) {
      mobyutil::MB_ShowPersistentMessage(10,0x1784);
      return;
    }
    if (iVar1 == 2) {
      mobyutil::MB_ShowPersistentMessage(10,0x1786);
      return;
    }
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        return;
      }
      mobyutil::MB_ShowPersistentMessage(10,0x1782);
      return;
    }
  }
  mobyutil::MB_ShowPersistentMessage(10,0x1785);
  return;
}



//==== 001cce68  ns=mobyupdate_helpers  size=0x74
// sig: undefined M1109_001cce68(void)
// callers(0): 
// callees(1): 000efb38 mobyfunc::DeleteMoby

void mobyupdate_helpers::M1109_001cce68(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)(&mobyutil::g_MobyGroups)[*(int *)(*(int *)(param_1 + 0x78) + 0xcc)];
  do {
    mobyfunc::DeleteMoby(MobyInstance + (*puVar2 & 0x7fff));
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
  } while (-1 < (short)uVar1);
  return;
}



//==== 001ccf10  ns=mobyupdate_unsorted  size=0x11e0
// sig: undefined UpdateMoby_1109(MobyInstance * moby)
// callers(0): 
// callees(28): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00047f48 camera::camera5::Camera_SetCurrentAccel; 00047f74 camera::SetCameraPosition; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 0006dad0 draw::FadeToBlack; 000a0c38 hero::Hero_Warp; 000a2560 hero::Hero_TransitionToDefault; 000e8aa4 memcard::memcard_Save; 000efb38 mobyfunc::DeleteMoby; 000f1e50 mobyfunc::SetLevelFlag; 000fddc0 mobyutil::MB_SetAnimation; 00110b70 mobyutil::MB_IsPntInCuboid; 00112900 mobyutil::MB_GetOrientation; 00112af0 mobyutil::MB_ToastMessageByIndex; 00112c20 mobyutil::MB_UnlockLevel; 0011b0b0 mobyutil::MB_ClearHelpMessage; 0011ccc8 music::music_SetTransition; 00151e70 respawn::SetSpawnPoint; 0015d12c sound::PlayMobySound; 00167e60 update::mode_sceneInit; 00168dec update::PlayInfobotMovie; 001cb618 mobyupdate_helpers::M1109_001cb618; 001cccb8 mobyupdate_helpers::M1109_001cccb8; 002d1440 FUN_002d1440; 0044cddc FUN_0044cddc; 00500b64 fastfunc::FastEulerToMtx; 00502578 fastfunc::FastWrapRot

/* Moby 1109 */

void mobyupdate_unsorted::UpdateMoby_1109(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  f32 fVar3;
  f32 fVar4;
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
  ushort uVar16;
  MobyClass *pMVar17;
  void *pvVar18;
  int iVar19;
  Spline *pSVar20;
  Spline *pSVar21;
  ulonglong *puVar22;
  MobyInstance *moby_00;
  float fVar23;
  uint uVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined *puVar27;
  Cuboid *pCVar28;
  ulonglong uVar29;
  longlong lVar30;
  int iVar34;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  float *pfVar36;
  longlong lVar35;
  longlong lVar37;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ushort *puVar38;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar39;
  double dVar40;
  ulonglong in_f25;
  double dVar41;
  ulonglong in_f26;
  double dVar42;
  ulonglong in_f27;
  double dVar43;
  ulonglong in_f28;
  double dVar44;
  ulonglong in_f29;
  double dVar45;
  ulonglong in_f30;
  double dVar46;
  ulonglong in_f31;
  double dVar47;
  Vec4 local_f0;
  Vec4 local_e0 [14];
  
  lVar30 = (longlong)(int)moby;
  uVar29 = ZEXT48(&stack0x00000000);
  lVar33 = uVar29 - 0x1c0;
  puVar22 = (ulonglong *)lVar33;
  *puVar22 = uVar29;
  puVar22[0x3a] = in_LR;
  puVar22[0x31] = in_f25;
  puVar22[0x32] = in_f26;
  puVar22[0x33] = in_f27;
  puVar22[0x34] = in_f28;
  puVar22[0x35] = in_f29;
  puVar22[0x36] = in_f30;
  puVar22[0x37] = in_f31;
  fVar3 = (moby->rotation).y;
  *(f32 *)(puVar22 + 0xe) = (moby->rotation).x;
  puVar22[0x30] = unaff_r31;
  fVar4 = (moby->rotation).z;
  pMVar17 = moby->pClass;
  *(f32 *)((int)puVar22 + 0x74) = fVar3;
  fVar3 = (moby->rotation).w;
  *(f32 *)(puVar22 + 0xf) = fVar4;
  *(f32 *)((int)puVar22 + 0x7c) = fVar3;
  fVar5 = pMVar17->gScale;
  puVar22[0x2e] = unaff_r29;
  pvVar18 = moby->pVar;
  fVar5 = fVar5 * DAT_0076427c;
  dVar47 = (double)(moby->pos).x;
  dVar46 = (double)(moby->pos).y;
  dVar45 = (double)(moby->pos).z;
  bVar1 = DAT_00ef1a6c != 0;
  puVar22[0x2f] = unaff_r30;
  puVar22[0x2d] = unaff_r28;
  puVar22[0x2c] = unaff_r27;
  moby->scale = fVar5;
  if (bVar1) {
    puVar22[0x29] = (longlong)DAT_00764284;
    uVar26 = DAT_00969db8;
    fVar5 = animationSpeed;
    DAT_00ef1a6c = 0;
    *(undefined4 *)(puVar22 + 6) = hero::g_heroCGPos;
    *(undefined4 *)(puVar22 + 7) = uVar26;
    puVar27 = PTR_DAT_0076428c;
    uVar26 = DAT_00764288;
    *(undefined4 *)((int)puVar22 + 0x34) = DAT_00969db4;
    *(undefined4 *)((int)puVar22 + 0x3c) = DAT_00969dbc;
    puVar22[0x29] = (longlong)(int)(fVar5 * ((float)(longlong)puVar22[0x29] + 0.5));
    FUN_002d1440(puVar22[6],puVar22[7],*(undefined4 *)((int)puVar22 + 0x14c),uVar26,puVar27);
  }
  bVar2 = moby->state;
  if (bVar2 < 5) {
    if (bVar2 < 2) {
      if (bVar2 == 0) {
        DAT_00a20820 = 0;
        if (g_LevelFlags[Level][*(int *)((int)pvVar18 + 0xf8)] == -1) {
          puVar38 = (ushort *)(&mobyutil::g_MobyGroups)[*(int *)((int)moby->pVar + 0xcc)];
          do {
            mobyfunc::DeleteMoby(MobyInstance + (*puVar38 & 0x7fff));
            uVar16 = *puVar38;
            puVar38 = puVar38 + 1;
          } while (-1 < (short)uVar16);
        }
        else {
          MiscLevelFlags.field36_0x24 = 0;
        }
        moby->updateDistance = -1;
        moby->drawDistance = 0x80;
        uVar24 = g_heroMobyPtr->color;
        uVar25 = g_heroMobyPtr->light;
        moby->state = '\x01';
        moby->color = uVar24;
        moby->light = uVar25;
        if (moby->animationId != '\x02') {
          mobyutil::MB_SetAnimation(lVar30,2,0,0);
        }
        *(undefined4 *)((int)pvVar18 + 0xbc) = 0;
        *(undefined4 *)((int)pvVar18 + 0xc0) = 0;
      }
      else {
        if (((((DAT_0071fb59 == '\0') && (DAT_0071fb58 == '\0')) ||
             ((help::g_HelpState == 0 && (help::g_HelpCurId == -1)))) &&
            ((g_standingOnMoby == moby && (g_framesNotGrounded == 0)))) || (DAT_00ef1a68 != 0)) {
          mobyupdate_helpers::M1109_001cccb8(lVar30);
          fVar5 = DAT_0076427c;
          if ((DAT_00ef1a68 != 0) ||
             ((((g_buttonsPressedThisFrame & TRIANGLE) != 0 && (mobyutil::g_HelpMsgOwner == 10)) &&
              (-1 < *(int *)((int)pvVar18 + 0x9c))))) {
            bVar1 = DAT_00ef1a68 != 0;
            *(undefined4 *)((int)pvVar18 + 0x110) = 1;
            DAT_00a20820 = 0;
            if (bVar1) {
              *(undefined4 *)((int)pvVar18 + 0x9c) = 2;
              DAT_00ef1a68 = 0;
            }
            iVar34 = *(int *)((int)pvVar18 + 0x9c);
            if (iVar34 == 4) {
              *(undefined4 *)((int)pvVar18 + 0xc0) = 4;
              *(undefined4 *)((int)pvVar18 + 0xbc) = 0;
              *(float *)((int)pvVar18 + 0xc4) = fVar5;
              *(float *)((int)pvVar18 + 200) = fVar5;
            }
            else if (iVar34 == 3) {
              *(undefined4 *)((int)pvVar18 + 0xc0) = 3;
              *(undefined4 *)((int)pvVar18 + 0xbc) = 2;
              *(float *)((int)pvVar18 + 0xc4) = fVar5;
              *(float *)((int)pvVar18 + 200) = fVar5;
            }
            else if (iVar34 == 2) {
              *(undefined4 *)((int)pvVar18 + 0xc0) = 2;
              uVar26 = DAT_00764278;
              *(undefined4 *)((int)pvVar18 + 0xbc) = 0;
              *(undefined4 *)((int)pvVar18 + 0xc4) = uVar26;
              *(float *)((int)pvVar18 + 200) = fVar5;
            }
            else if (iVar34 == 1) {
              *(undefined4 *)((int)pvVar18 + 0xc0) = 1;
              uVar26 = DAT_00764278;
              *(undefined4 *)((int)pvVar18 + 0xbc) = 0;
              *(undefined4 *)((int)pvVar18 + 0xc4) = uVar26;
              *(float *)((int)pvVar18 + 200) = fVar5;
              music::music_SetTransition(0,10);
            }
            else if (iVar34 == 0) {
              *(float *)((int)pvVar18 + 0xc4) = fVar5;
              *(undefined4 *)((int)pvVar18 + 0xc0) = 0;
              *(undefined4 *)((int)pvVar18 + 0xbc) = 1;
              *(undefined4 *)((int)pvVar18 + 200) = DAT_00764278;
              music::music_SetTransition(4,8);
            }
          }
        }
        else if (*(int *)((int)pvVar18 + 0x110) == 0) {
          if ((*(int *)((int)pvVar18 + 0xbc) == 0) &&
             (iVar34 = mobyutil::MB_IsPntInCuboid
                                 (&g_heroPosition,(longlong)*(int *)((int)pvVar18 + 0x100)),
             pCVar28 = Cuboids, iVar34 != 0)) {
            iVar34 = *(int *)((int)pvVar18 + 0xa8);
            (moby->pos).x = Cuboids[iVar34].pos.x;
            (moby->pos).y = pCVar28[iVar34].pos.y;
            (moby->pos).z = pCVar28[iVar34].pos.z;
            (moby->pos).w = pCVar28[iVar34].pos.w;
            (moby->rotation).x = pCVar28[iVar34].rot.x;
            (moby->rotation).y = pCVar28[iVar34].rot.y;
            (moby->rotation).z = pCVar28[iVar34].rot.z;
            fVar5 = pCVar28[iVar34].rot.w;
            *(undefined4 *)((int)pvVar18 + 0xbc) = 2;
            (moby->rotation).w = fVar5;
            DAT_00a20820 = 0;
          }
          else if ((*(int *)((int)pvVar18 + 0xbc) == 2) &&
                  (iVar34 = mobyutil::MB_IsPntInCuboid
                                      (&g_heroPosition,(longlong)*(int *)((int)pvVar18 + 0x104)),
                  pCVar28 = Cuboids, iVar34 != 0)) {
            iVar34 = *(int *)((int)pvVar18 + 0xa0);
            (moby->pos).x = Cuboids[iVar34].pos.x;
            (moby->pos).y = pCVar28[iVar34].pos.y;
            (moby->pos).z = pCVar28[iVar34].pos.z;
            (moby->pos).w = pCVar28[iVar34].pos.w;
            (moby->rotation).x = pCVar28[iVar34].rot.x;
            (moby->rotation).y = pCVar28[iVar34].rot.y;
            (moby->rotation).z = pCVar28[iVar34].rot.z;
            fVar5 = pCVar28[iVar34].rot.w;
            *(undefined4 *)((int)pvVar18 + 0xbc) = 0;
            (moby->rotation).w = fVar5;
            DAT_00a20820 = 0;
          }
          else if ((*(int *)((int)pvVar18 + 0xbc) != 1) &&
                  (iVar34 = mobyutil::MB_IsPntInCuboid
                                      (&g_heroPosition,(longlong)*(int *)((int)pvVar18 + 0x108)),
                  pCVar28 = Cuboids, iVar34 != 0)) {
            iVar34 = *(int *)((int)pvVar18 + 0xa4);
            (moby->pos).x = Cuboids[iVar34].pos.x;
            (moby->pos).y = pCVar28[iVar34].pos.y;
            (moby->pos).z = pCVar28[iVar34].pos.z;
            (moby->pos).w = pCVar28[iVar34].pos.w;
            (moby->rotation).x = pCVar28[iVar34].rot.x;
            (moby->rotation).y = pCVar28[iVar34].rot.y;
            (moby->rotation).z = pCVar28[iVar34].rot.z;
            fVar5 = pCVar28[iVar34].rot.w;
            *(undefined4 *)((int)pvVar18 + 0xbc) = 1;
            (moby->rotation).w = fVar5;
            DAT_00a20820 = 1;
            if (MiscLevelFlags.field33_0x21 == 0) {
              MiscLevelFlags.field33_0x21 = 1;
            }
          }
        }
        if (*(int *)((int)pvVar18 + 0x110) != 0) {
          *(undefined4 *)((int)pvVar18 + 0x110) = 0;
          moby->state = '\x03';
          mobyutil::MB_ClearHelpMessage((MobyInstance *)0xa);
          if (moby->animationId != '\0') {
            mobyutil::MB_SetAnimation(lVar30,0,0,0);
          }
          puVar22[0x29] = (longlong)(int)(animationSpeed * 10.5);
          draw::FadeToBlack(*(undefined4 *)((int)puVar22 + 0x14c));
          fVar14 = 0.0;
          *(undefined4 *)((int)pvVar18 + 0xb0) = 0;
          pSVar20 = Splines[*(int *)((int)pvVar18 + *(int *)((int)pvVar18 + 0xc0) * 4 + 0x60)];
          iVar34 = *(int *)((int)pvVar18 + *(int *)((int)pvVar18 + 0xc0) * 4 + 0x74);
          fVar5 = pSVar20->points[0].x;
          *(float *)(puVar22 + 0x14) = fVar5;
          fVar6 = pSVar20->points[0].y;
          *(float *)((int)puVar22 + 0xa4) = fVar6;
          fVar7 = pSVar20->points[0].z;
          pSVar21 = Splines[iVar34];
          *(float *)(puVar22 + 0x15) = fVar7;
          *(float *)((int)puVar22 + 0xac) = pSVar20->points[0].w;
          fVar8 = pSVar21->points[0].x;
          fVar9 = pSVar21->points[0].y;
          fVar12 = fVar8 - fVar5;
          fVar11 = fVar9 - fVar6;
          fVar10 = pSVar21->points[0].z;
          fVar13 = ABS(fVar12);
          fVar15 = ABS(fVar11);
          *(float *)((int)puVar22 + 0xfc) = fVar12;
          *(float *)(puVar22 + 0x20) = fVar11;
          *(undefined4 *)((int)puVar22 + 0x9c) = 0;
          *(undefined4 *)(puVar22 + 0x13) = 0;
          *(undefined4 *)((int)puVar22 + 0x94) = 0;
          *(undefined4 *)(puVar22 + 0x12) = 0;
          *(float *)((int)puVar22 + 0x104) = fVar13 - fVar15;
          uVar31 = (ulonglong)(*(uint *)((int)puVar22 + 0xfc) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar22 + 0x104) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar22 + 0x20) >> 0x1d) & 4;
          fVar12 = ABS(*(float *)((int)puVar22 + 0xfc));
          if (*(float *)((int)puVar22 + 0x104) - 0.0 < 0.0) {
            fVar12 = fVar15;
          }
          fVar15 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar31 << 2));
          fVar11 = *(float *)(((uint)(uVar31 << 2) | 0x735900) + 4);
          fVar23 = ABS(*(float *)(puVar22 + 0x20));
          if (*(float *)((int)puVar22 + 0x104) - 0.0 < 0.0) {
            fVar23 = fVar13;
          }
          fVar13 = fVar14;
          if (0.0 < fVar12) {
            lVar32 = uVar29 - 0x1b0;
            lVar35 = uVar29 - 0x98;
            lVar37 = uVar29 - 0x88;
            lVar39 = 2;
            fVar12 = (fVar23 - fVar12) / (fVar23 + fVar12);
            fVar13 = fVar12 * fVar12;
            *(float *)((int)puVar22 + 0x134) = fVar12;
            *(float *)((int)puVar22 + 300) = fVar12;
            *(float *)(puVar22 + 0x26) = fVar12;
            *(float *)(puVar22 + 0x25) = fVar12;
            fVar12 = fVar13 * fVar13;
            *(float *)((int)puVar22 + 300) = *(float *)((int)puVar22 + 300) * fVar13;
            *(float *)(puVar22 + 0x26) = *(float *)(puVar22 + 0x26) * fVar12;
            *(float *)((int)puVar22 + 0x134) = *(float *)((int)puVar22 + 0x134) * fVar12 * fVar13;
            do {
              *(float *)((int)lVar32 + 0x128) = *(float *)((int)lVar32 + 0x118) * fVar12 * fVar12;
              iVar34 = (int)lVar35;
              lVar32 = lVar32 + 8;
              lVar35 = lVar35 + 8;
              *(float *)((int)lVar37 + 4) = *(float *)(iVar34 + 4) * fVar12 * fVar12;
              lVar37 = lVar37 + 8;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
            lVar39 = 4;
            lVar37 = uVar29 - 0x98;
            pfVar36 = (float *)&DAT_007358e0;
            lVar32 = lVar33;
            lVar35 = lVar37;
            do {
              fVar12 = *pfVar36;
              fVar13 = pfVar36[1];
              pfVar36 = pfVar36 + 2;
              *(float *)((int)lVar32 + 0x128) = *(float *)((int)lVar32 + 0x128) * fVar12;
              lVar32 = lVar32 + 8;
              *(float *)((int)lVar35 + 4) = *(float *)((int)lVar35 + 4) * fVar13;
              lVar35 = lVar35 + 8;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
            lVar35 = 2;
            lVar32 = lVar33;
            fVar12 = fVar14;
            do {
              iVar34 = (int)lVar32;
              lVar32 = lVar32 + 0x10;
              iVar19 = (int)lVar37;
              lVar37 = lVar37 + 0x10;
              fVar12 = fVar12 + *(float *)(iVar34 + 0x128) + *(float *)(iVar19 + 4) +
                       *(float *)(iVar19 + 8) + *(float *)(iVar19 + 0xc);
              lVar35 = lVar35 + -1;
            } while (lVar35 != 0);
            fVar13 = (fVar12 + 0.7853982) * fVar15 + fVar11;
          }
          fVar6 = fVar6 - fVar9;
          fVar5 = fVar5 - fVar8;
          *(float *)(puVar22 + 0x13) = fVar13;
          fVar10 = fVar10 - fVar7;
          fVar5 = SQRT(fVar5 * fVar5 + fVar6 * fVar6);
          *(float *)((int)puVar22 + 0xf4) = fVar10;
          fVar10 = ABS(fVar10);
          fVar6 = ABS(fVar5);
          *(float *)(puVar22 + 0x1e) = fVar5;
          *(float *)(puVar22 + 0x1f) = fVar6 - fVar10;
          uVar31 = (ulonglong)(*(uint *)(puVar22 + 0x1e) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar22 + 0x1f) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar22 + 0xf4) >> 0x1d) & 4;
          fVar5 = ABS(*(float *)(puVar22 + 0x1e));
          if (*(float *)(puVar22 + 0x1f) - 0.0 < 0.0) {
            fVar5 = fVar10;
          }
          fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar31 << 2));
          fVar8 = ABS(*(float *)((int)puVar22 + 0xf4));
          if (*(float *)(puVar22 + 0x1f) - 0.0 < 0.0) {
            fVar8 = fVar6;
          }
          fVar6 = *(float *)(((uint)(uVar31 << 2) | 0x735900) + 4);
          if (0.0 < fVar5) {
            lVar32 = uVar29 - 0x1b0;
            lVar37 = uVar29 - 0xa8;
            lVar35 = uVar29 - 0xb8;
            lVar39 = 2;
            fVar5 = (fVar8 - fVar5) / (fVar8 + fVar5);
            fVar8 = fVar5 * fVar5;
            *(float *)((int)puVar22 + 0x114) = fVar5;
            *(float *)((int)puVar22 + 0x10c) = fVar5;
            *(float *)(puVar22 + 0x22) = fVar5;
            *(float *)(puVar22 + 0x21) = fVar5;
            fVar5 = fVar8 * fVar8;
            *(float *)((int)puVar22 + 0x10c) = *(float *)((int)puVar22 + 0x10c) * fVar8;
            *(float *)(puVar22 + 0x22) = *(float *)(puVar22 + 0x22) * fVar5;
            *(float *)((int)puVar22 + 0x114) = *(float *)((int)puVar22 + 0x114) * fVar5 * fVar8;
            do {
              *(float *)((int)lVar32 + 0x108) = *(float *)((int)lVar32 + 0xf8) * fVar5 * fVar5;
              iVar34 = (int)lVar35;
              lVar35 = lVar35 + 8;
              lVar32 = lVar32 + 8;
              *(float *)((int)lVar37 + 4) = *(float *)(iVar34 + 4) * fVar5 * fVar5;
              lVar37 = lVar37 + 8;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
            lVar39 = 4;
            lVar37 = uVar29 - 0xb8;
            pfVar36 = (float *)&DAT_007358e0;
            lVar32 = lVar33;
            lVar35 = lVar37;
            do {
              fVar5 = *pfVar36;
              fVar8 = pfVar36[1];
              pfVar36 = pfVar36 + 2;
              *(float *)((int)lVar32 + 0x108) = *(float *)((int)lVar32 + 0x108) * fVar5;
              lVar32 = lVar32 + 8;
              *(float *)((int)lVar35 + 4) = *(float *)((int)lVar35 + 4) * fVar8;
              lVar35 = lVar35 + 8;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
            lVar32 = 2;
            do {
              iVar34 = (int)lVar33;
              iVar19 = (int)lVar37;
              lVar33 = lVar33 + 0x10;
              lVar37 = lVar37 + 0x10;
              fVar14 = fVar14 + *(float *)(iVar34 + 0x108) + *(float *)(iVar19 + 4) +
                       *(float *)(iVar19 + 8) + *(float *)(iVar19 + 0xc);
              lVar32 = lVar32 + -1;
            } while (lVar32 != 0);
            fVar14 = (fVar14 + 0.7853982) * fVar7 + fVar6;
          }
          fVar5 = animationSpeed;
          *(float *)((int)puVar22 + 0x94) = -fVar14;
          puVar22[0x29] = (longlong)(int)(fVar5 * 300.5);
          camera::SetCameraPosition
                    (uVar29 - 0x120,uVar29 - 0x130,2,*(undefined4 *)((int)puVar22 + 0x14c),0);
          camera::camera5::Camera_SetCurrentAccel(0.001,1.0,1.0,0.001,1.0,1.0);
          camera::camera5::Camera_SetMobyDrivenTargetPos((float *)(uVar29 - 0x120));
          camera::camera5::Camera_SetMobyDrivenTargetRot((float *)(uVar29 - 0x130));
          hero::Hero_Warp(&Cuboids[*(int *)((int)pvVar18 + 0xac)].pos.x,
                          &Cuboids[*(int *)((int)pvVar18 + 0xac)].rot.x,0x72,0);
          dVar44 = (double)(moby->pos).x;
          dVar43 = (double)(moby->pos).y;
          dVar42 = (double)(moby->pos).z;
          dVar41 = (double)(moby->pos).w;
          (moby->pos).x = GameCamera.posX;
          (moby->pos).y = GameCamera.posY;
          (moby->pos).z = GameCamera.posZ;
          (moby->pos).w = (f32)GameCamera.field8_0x14c;
          sound::PlayMobySound(2,0,moby);
          (moby->pos).x = (float)dVar44;
          (moby->pos).y = (float)dVar43;
          (moby->pos).z = (float)dVar42;
          (moby->pos).w = (float)dVar41;
        }
      }
    }
    else if (bVar2 < 3) {
      iVar34 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar18 + 0xf0));
      uVar26 = DAT_00764278;
      if (iVar34 != 0) {
        *(undefined4 *)((int)pvVar18 + 0xc0) = 2;
        *(undefined4 *)((int)pvVar18 + 0xc4) = uVar26;
        *(undefined4 *)((int)pvVar18 + 0xbc) = 0;
        fVar5 = DAT_0076427c;
        *(undefined4 *)((int)pvVar18 + 0x110) = 1;
        *(float *)((int)pvVar18 + 200) = fVar5;
        *(undefined4 *)((int)pvVar18 + 0x114) = 1;
        moby->state = '\x01';
      }
    }
    else if (bVar2 < 4) {
      iVar34 = mobyupdate_helpers::M1109_001cb618(lVar30,*(undefined4 *)((int)pvVar18 + 0xc0));
      if (iVar34 != 0) {
        moby->state = '\x04';
        pCVar28 = Cuboids;
        dVar41 = 0.0;
        *(undefined4 *)((int)pvVar18 + 0xf4) = 0;
        iVar34 = *(int *)((int)pvVar18 + *(int *)((int)pvVar18 + 0xbc) * 4 + 0xa0);
        iVar19 = *(int *)((int)pvVar18 + *(int *)((int)pvVar18 + 0xbc) * 4 + 0xa0);
        (moby->pos).x = pCVar28[iVar34].pos.x;
        (moby->pos).y = pCVar28[iVar34].pos.y;
        (moby->pos).z = pCVar28[iVar34].pos.z;
        (moby->pos).w = pCVar28[iVar34].pos.w;
        (moby->rotation).x = pCVar28[iVar19].rot.x;
        (moby->rotation).y = pCVar28[iVar19].rot.y;
        (moby->rotation).z = pCVar28[iVar19].rot.z;
        (moby->rotation).w = pCVar28[iVar19].rot.w;
        fastfunc::FastEulerToMtx(lVar30 + 0xc0,lVar30 + 0x40);
        iVar34 = *(int *)((int)pvVar18 + 0xbc);
        moby->scale = moby->pClass->gScale;
        if (iVar34 == 1) {
          DAT_00a20820 = 1;
          if (MiscLevelFlags.field33_0x21 == 0) {
            MiscLevelFlags.field33_0x21 = 1;
          }
        }
        else {
          DAT_00a20820 = 0;
        }
        fVar6 = (moby->transform).v0.y;
        fVar7 = (moby->transform).v0.x;
        fVar8 = (moby->transform).v0.z;
        *(f32 *)((int)puVar22 + 0xbc) = (moby->pos).w;
        fVar9 = (moby->pos).x;
        fVar10 = (moby->pos).y;
        fVar12 = (moby->pos).z;
        fVar11 = (moby->transform).v2.x;
        fVar14 = (moby->transform).v2.y;
        fVar13 = (moby->transform).v2.z;
        dVar43 = (double)SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
        fVar15 = (moby->rotation).z;
        *(undefined4 *)((int)puVar22 + 0xcc) = 0;
        *(undefined4 *)(puVar22 + 0x19) = 0;
        *(undefined4 *)((int)puVar22 + 0xc4) = 0;
        *(undefined4 *)(puVar22 + 0x18) = 0;
        fVar5 = (float)(-2.0 / dVar43);
        dVar42 = dVar41;
        if (dVar41 - dVar43 < 0.0) {
          dVar42 = (double)(fVar8 * fVar5);
        }
        dVar44 = dVar41;
        if (dVar41 - dVar43 < 0.0) {
          dVar44 = (double)(fVar6 * fVar5);
        }
        dVar40 = dVar41;
        if (dVar41 - dVar43 < 0.0) {
          dVar40 = (double)(fVar7 * fVar5);
        }
        if (dVar43 - dVar41 < 0.0) {
          dVar42 = (double)(fVar8 * fVar5);
        }
        if (dVar43 - dVar41 < 0.0) {
          dVar44 = (double)(fVar6 * fVar5);
        }
        if (dVar43 - dVar41 < 0.0) {
          dVar40 = (double)(fVar7 * fVar5);
        }
        *(float *)(puVar22 + 0x17) = fVar12 + (float)(dVar42 + (double)fVar13);
        *(float *)((int)puVar22 + 0xb4) = fVar10 + (float)(dVar44 + (double)fVar14);
        *(float *)(puVar22 + 0x16) = fVar9 + (float)(dVar40 + (double)fVar11);
        dVar41 = (double)fastfunc::FastWrapRot(fVar15,3.1415927);
        *(float *)(puVar22 + 0x19) = (float)dVar41;
        hero::Hero_Warp((float *)(puVar22 + 0x16),(float *)(puVar22 + 0x18),0,0);
        if (*(int *)((int)pvVar18 + 0x114) != 0) {
          MiscLevelFlags.field36_0x24 = 1;
          FUN_0044cddc(MobyInstance + *(int *)((int)pvVar18 + 0x10c));
          *(undefined4 *)((int)pvVar18 + 0x114) = 0;
          moby->state = '\x06';
          if (moby->animationId != '\x02') {
            puVar22[0x29] = (longlong)(int)(animationSpeed * 30.5);
            mobyutil::MB_SetAnimation(lVar30,2,0,*(undefined4 *)((int)puVar22 + 0x14c));
          }
        }
        camera::camera5::Camera_DeactivateMobyDrivenCam(0);
      }
    }
    else {
      moby->state = '\x01';
      if (moby->animationId != '\x02') {
        puVar22[0x29] = (longlong)(int)(animationSpeed * 30.5);
        mobyutil::MB_SetAnimation(lVar30,2,0,*(undefined4 *)((int)puVar22 + 0x14c));
      }
    }
  }
  else if (bVar2 < 8) {
    if (5 < bVar2) {
      if (bVar2 < 7) {
        moby_00 = MobyInstance + *(int *)((int)pvVar18 + 0x10c);
        fVar5 = (moby_00->pos).x;
        fVar6 = g_heroPosition.y - (moby_00->pos).y;
        fVar7 = g_heroPosition.x - fVar5;
        if (SQRT(fVar7 * fVar7 + fVar6 * fVar6) < 3.5) {
          *(float *)(puVar22 + 0x1a) = fVar5;
          *(f32 *)((int)puVar22 + 0xd4) = (moby_00->pos).y;
          *(f32 *)(puVar22 + 0x1b) = (moby_00->pos).z;
          *(f32 *)((int)puVar22 + 0xdc) = (moby_00->pos).w;
          *(f32 *)(puVar22 + 0x1c) = (moby_00->rotation).x;
          *(f32 *)((int)puVar22 + 0xe4) = (moby_00->rotation).y;
          fVar5 = (moby_00->rotation).z;
          *(float *)(puVar22 + 0x1d) = fVar5;
          *(f32 *)((int)puVar22 + 0xec) = (moby_00->rotation).w;
          dVar41 = (double)fastfunc::FastWrapRot(fVar5,3.14159);
          *(float *)(puVar22 + 0x1d) = (float)dVar41;
          hero::Hero_Warp(&local_f0.x,&local_e0[0].x,0x72,1);
          music::music_SetTransition(0,10);
          update::mode_sceneInit(0xc);
          mobyfunc::DeleteMoby(moby_00);
          mobyutil::MB_UnlockLevel(Rilgar);
          moby->state = '\b';
          mobyfunc::SetLevelFlag(*(undefined4 *)((int)pvVar18 + 0xf8));
          respawn::SetSpawnPoint(&local_f0,local_e0);
        }
      }
      else if (g_gameMode != GAME_MODE_SCENE) {
        if (UnlockableItems.hoverboard == '\0') {
          mobyutil::MB_ToastMessageByIndex(5);
          moby->state = '\x01';
          hero::Hero_TransitionToDefault();
          memcard::memcard_Save(0,-1);
        }
        else {
          update::mode_sceneInit(5);
          moby->state = '\t';
        }
      }
    }
  }
  else if (bVar2 < 9) {
    if (g_gameMode != GAME_MODE_SCENE) {
      update::PlayInfobotMovie(5);
      moby->state = '\a';
    }
  }
  else if ((bVar2 < 10) && (g_gameMode != GAME_MODE_SCENE)) {
    mobyutil::MB_ToastMessageByIndex(5);
    memcard::memcard_Save(0,-1);
    moby->state = '\x01';
  }
  fVar5 = (moby->pos).x;
  fVar6 = (moby->pos).y;
  fVar7 = (moby->pos).z;
  *(f32 *)((int)puVar22 + 0x8c) = (moby->pos).w;
  *(float *)(puVar22 + 0x10) = (float)((double)fVar5 - dVar47);
  *(float *)((int)puVar22 + 0x84) = (float)((double)fVar6 - dVar46);
  *(float *)(puVar22 + 0x11) = (float)((double)fVar7 - dVar45);
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar18 + 0x20),(Vec4 *)(puVar22 + 0x10),uVar29 - 0x150,
             lVar30 + 0x40);
  return;
}



//==== 001ce0f0  ns=Global  size=0xc
// sig: undefined FUN_001ce0f0(void)
// callers(1): 001d4308 mobyupdate_unsorted::UpdateMoby_1118
// callees(0): 

void FUN_001ce0f0(int param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 2;
  return;
}



//==== 001ce0fc  ns=Global  size=0xc
// sig: undefined FUN_001ce0fc(void)
// callers(1): 001c96c0 mobyupdate_unsorted::UpdateMoby_1108
// callees(0): 

void FUN_001ce0fc(int param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 5;
  return;
}



//==== 001ce108  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1109_001ce108(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1109_001ce108(void)

{
  DAT_00764358 = 0x10000;
  return;
}



//==== 001ce130  ns=mobyupdate_helpers  size=0x2a8
// sig: undefined M111_001ce130(void)
// callers(1): 001cf4f0 mobyupdate_unsorted::UpdateMoby_111
// callees(5): 000fea60 mobyutil::MB_randSphere; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby

void mobyupdate_helpers::M111_001ce130(MobyInstance *param_1,longlong param_2,undefined8 param_3)

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
  
  if (param_1->state != '\x03') {
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
        auVar8 = loadVectorLeftIndexed(in_LR,0x1ce120);
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
        param_1->state = '\x03';
      }
    }
    param_1->damage = -1;
  }
  mobyutil::MB_ColorDyingMoby(param_1,param_2 + 0x60);
  return;
}



//==== 001ce3f0  ns=mobyupdate_helpers  size=0x120
// sig: undefined M1109_001ce3f0(void)
// callers(1): 001ce738 mobyupdate_helpers::M1109_001ce738
// callees(3): 000ff190 mobyutil::MB_DeltAngSpeed; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 0010de78 mobyutil::MB_WrapRot

double mobyupdate_helpers::M1109_001ce3f0
                 (undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  double dVar1;
  double dVar2;
  float fVar3;
  
  dVar2 = 25.132741928100586;
  dVar1 = 6.2831854820251465;
  mobyutil::OrganicDeltAngSpeed
            (param_1,(double)(DAT_0071f418 * 25.132742),(double)(DAT_0071f418 * 6.2831855),
             (double)(mobyutil::g_FrameTime * 25.132742),param_3,param_4,param_4 + 0x88);
  dVar1 = (double)mobyutil::MB_DeltAngSpeed
                            ((double)*(float *)(param_3 + 0x44),param_2,
                             (double)(float)((double)DAT_0071f418 * dVar2),
                             (double)(float)((double)DAT_0071f418 * dVar1),
                             (double)(float)((double)mobyutil::g_FrameTime * dVar2));
  *(float *)(param_3 + 0x44) = (float)dVar1;
  fVar3 = *(float *)(param_3 + 0x40) +
          -(*(float *)(param_4 + 0x88) * (1.5707964 - ABS(*(float *)(param_3 + 0x40))) * 0.63661975)
  ;
  if (1.5707964 - fVar3 < 0.0) {
    fVar3 = 1.5707964;
  }
  if (fVar3 - -1.5707964 < 0.0) {
    fVar3 = -1.5707964;
  }
  *(float *)(param_3 + 0x40) = fVar3 * 0.98;
  fVar3 = mobyutil::MB_WrapRot(fVar3 * 0.98);
  return (double)fVar3;
}



//==== 001ce520  ns=mobyupdate_helpers  size=0x208
// sig: undefined M1109_001ce520(void)
// callers(1): 001ceea0 mobyupdate_helpers::M111_001ceea0
// callees(1): 00502730 fastfunc::FastIntToDouble

longlong mobyupdate_helpers::M1109_001ce520
                   (double param_1,float *param_2,uint *param_3,longlong param_4)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  iVar6 = 0;
  dVar10 = 99999997952.0;
  uVar2 = *param_3;
  lVar5 = param_4;
  if (0 < (int)(((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0))) {
    dVar11 = 0.4000000059604645;
    dVar12 = 0.10000000149011612;
    do {
      iVar3 = iVar6 + (int)param_4;
      lVar4 = (longlong)(int)(iVar3 - (iVar3 / (int)uVar2) * uVar2);
      pfVar1 = (float *)((int)param_3 + (int)(lVar4 << 4) + 0x10);
      dVar9 = (double)SQRT((pfVar1[2] - param_2[2]) * (pfVar1[2] - param_2[2]) +
                           (*pfVar1 - *param_2) * (*pfVar1 - *param_2) +
                           (pfVar1[1] - param_2[1]) * (pfVar1[1] - param_2[1]));
      dVar8 = ABS((double)(float)(dVar9 - param_1));
      dVar7 = (double)fastfunc::FastIntToDouble(iVar6);
      dVar8 = (double)(float)(dVar7 * dVar11 + dVar8);
      dVar7 = (double)fastfunc::FastIntToDouble(iVar6);
      uVar2 = *param_3;
      if (dVar8 < (double)(float)(dVar7 * dVar12 + dVar10)) {
        lVar5 = lVar4;
        dVar10 = dVar9;
      }
      iVar3 = (uVar2 + (int)param_4) - iVar6;
      lVar4 = (longlong)(int)(iVar3 - (iVar3 / (int)uVar2) * uVar2);
      pfVar1 = (float *)((int)param_3 + (int)(lVar4 << 4) + 0x10);
      dVar9 = (double)SQRT((pfVar1[2] - param_2[2]) * (pfVar1[2] - param_2[2]) +
                           (*pfVar1 - *param_2) * (*pfVar1 - *param_2) +
                           (pfVar1[1] - param_2[1]) * (pfVar1[1] - param_2[1]));
      dVar8 = ABS((double)(float)(dVar9 - param_1));
      dVar7 = (double)fastfunc::FastIntToDouble(iVar6);
      uVar2 = *param_3;
      if ((double)(float)(dVar7 * dVar11 + dVar8) < dVar10) {
        lVar5 = lVar4;
        dVar10 = dVar9;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)(((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0)));
  }
  return lVar5;
}



//==== 001ce738  ns=mobyupdate_helpers  size=0x63c
// sig: undefined M1109_001ce738(void)
// callers(1): 001ceea0 mobyupdate_helpers::M111_001ceea0
// callees(1): 001ce3f0 mobyupdate_helpers::M1109_001ce3f0

bool mobyupdate_helpers::M1109_001ce738(int param_1,int param_2,char param_3)

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
  Spline *pSVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  short sVar17;
  longlong lVar16;
  float *pfVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong unaff_r31;
  bool bVar21;
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
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0x100;
  puVar11 = (ulonglong *)lVar14;
  *puVar11 = uVar12;
  puVar11[0x22] = in_LR;
  puVar11[0x1a] = in_f26;
  puVar11[0x1b] = in_f27;
  puVar11[0x1c] = in_f28;
  puVar11[0x1d] = in_f29;
  puVar11[0x1e] = in_f30;
  puVar11[0x1f] = in_f31;
  sVar17 = *(short *)(param_2 + 0xb4);
  dVar25 = (double)*(float *)(param_1 + 0x14);
  iVar9 = (int)((longlong)*(short *)(param_2 + 0xb6) << 4);
  pSVar10 = Splines[*(int *)(param_2 + 0xa0)];
  dVar24 = (double)*(float *)(param_1 + 0x10);
  iVar20 = (int)((longlong)sVar17 << 4);
  dVar23 = (double)*(float *)((int)&pSVar10->points[0].y + iVar9);
  dVar26 = (double)*(float *)((int)&pSVar10->points[0].x + iVar9);
  dVar30 = (double)*(float *)((int)&pSVar10->points[0].z + iVar9);
  fVar1 = (float)(dVar23 - dVar25);
  fVar2 = (float)(dVar26 - dVar24);
  fVar3 = (float)(dVar23 - (double)*(float *)((int)&pSVar10->points[0].y + iVar20));
  fVar4 = (float)(dVar26 - (double)*(float *)((int)&pSVar10->points[0].x + iVar20));
  dVar23 = (double)*(float *)(param_1 + 0x18);
  fVar5 = (float)(dVar30 - dVar23);
  fVar6 = (float)(dVar30 - (double)*(float *)((int)&pSVar10->points[0].z + iVar20));
  puVar11[0x19] = unaff_r31;
  bVar21 = false;
  dVar26 = 0.0;
  fVar1 = SQRT(fVar5 * fVar5 + fVar2 * fVar2 + fVar1 * fVar1);
  fVar2 = SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar3 * fVar3);
  fVar3 = fVar2 - fVar1;
  if (((0.0 <= fVar3) && (fVar4 = *(float *)(param_2 + 0xcc), fVar3 < fVar4)) ||
     (fVar4 = *(float *)(param_2 + 0xcc), fVar2 < fVar4)) {
    *(short *)(param_2 + 0xb6) = sVar17;
    iVar9 = pSVar10->cnt;
    sVar17 = sVar17 + *(char *)(param_2 + 0xd0);
    iVar20 = (int)sVar17;
    *(short *)(param_2 + 0xb4) = sVar17;
    if (iVar9 <= iVar20) {
      sVar17 = 0;
      *(undefined2 *)(param_2 + 0xb4) = 0;
    }
    bVar21 = sVar17 < 0;
    if (bVar21) {
      sVar17 = (short)iVar9 + -1;
      *(short *)(param_2 + 0xb4) = sVar17;
    }
    bVar21 = bVar21 || iVar9 <= iVar20;
    dVar30 = dVar26;
  }
  else {
    dVar30 = (double)(fVar1 / fVar2);
  }
  iVar9 = (int)((longlong)sVar17 << 4);
  fVar1 = (float)((double)*(float *)((int)&pSVar10->points[0].y + iVar9) - dVar25);
  fVar2 = (float)((double)*(float *)((int)&pSVar10->points[0].x + iVar9) - dVar24);
  fVar3 = (float)((double)*(float *)((int)&pSVar10->points[0].z + iVar9) - dVar23);
  if (dVar30 - 0.05000000074505806 < 0.0) {
    dVar30 = 0.05000000074505806;
  }
  fVar5 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (1.0 - dVar30 < 0.0) {
    dVar30 = 1.0;
  }
  fVar6 = (float)(1.0 - dVar30);
  fVar7 = fVar4 / fVar5;
  dVar28 = dVar26;
  if (0.0 - fVar5 < 0.0) {
    dVar28 = (double)(fVar1 * fVar7);
  }
  dVar29 = dVar26;
  if (0.0 - fVar5 < 0.0) {
    dVar29 = (double)(fVar2 * fVar7);
  }
  dVar27 = dVar26;
  if (0.0 - fVar5 < 0.0) {
    dVar27 = (double)(fVar3 * fVar7);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar28 = (double)(fVar1 * fVar7);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar29 = (double)(fVar2 * fVar7);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar27 = (double)(fVar3 * fVar7);
  }
  fVar1 = *(float *)(param_2 + 0x74) * fVar6 + (float)(dVar28 * dVar30);
  fVar3 = *(float *)(param_2 + 0x70) * fVar6 + (float)(dVar29 * dVar30);
  fVar2 = *(float *)(param_2 + 0x78) * fVar6 + (float)(dVar27 * dVar30);
  fVar5 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  fVar4 = fVar4 / fVar5;
  dVar30 = dVar26;
  if (0.0 - fVar5 < 0.0) {
    dVar30 = (double)(fVar3 * fVar4);
  }
  dVar28 = dVar26;
  if (0.0 - fVar5 < 0.0) {
    dVar28 = (double)(fVar1 * fVar4);
  }
  dVar29 = dVar26;
  if (0.0 - fVar5 < 0.0) {
    dVar29 = (double)(fVar2 * fVar4);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar30 = (double)(fVar3 * fVar4);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar28 = (double)(fVar1 * fVar4);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar29 = (double)(fVar2 * fVar4);
  }
  fVar1 = (float)(dVar24 + dVar30);
  fVar2 = (float)(dVar25 + dVar28);
  *(float *)(param_2 + 0x70) = (float)dVar30;
  *(float *)(param_2 + 0x74) = (float)dVar28;
  *(float *)(param_2 + 0x78) = (float)dVar29;
  *(float *)(param_1 + 0x10) = fVar1;
  *(float *)(param_1 + 0x14) = fVar2;
  *(float *)(param_1 + 0x18) = (float)(dVar23 + dVar29);
  fVar4 = g_heroPosition.y;
  fVar3 = g_heroPosition.x;
  if (param_3 != '\0') {
    fVar5 = g_heroPosition.y - fVar2;
    fVar7 = ABS(g_heroPosition.x - fVar1);
    fVar6 = ABS(fVar5);
    *(float *)((int)puVar11 + 0x7c) = g_heroPosition.x - fVar1;
    *(float *)(puVar11 + 0x10) = fVar5;
    *(float *)((int)puVar11 + 0x84) = fVar7 - fVar6;
    uVar19 = (ulonglong)(*(uint *)((int)puVar11 + 0x7c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar11 + 0x84) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar11 + 0x10) >> 0x1d) & 4;
    fVar5 = ABS(*(float *)((int)puVar11 + 0x7c));
    if (*(float *)((int)puVar11 + 0x84) - 0.0 < 0.0) {
      fVar5 = fVar6;
    }
    fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
    fVar8 = ABS(*(float *)(puVar11 + 0x10));
    if (*(float *)((int)puVar11 + 0x84) - 0.0 < 0.0) {
      fVar8 = fVar7;
    }
    fVar7 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    dVar24 = dVar26;
    if (0.0 < fVar5) {
      lVar13 = uVar12 - 0xf0;
      lVar16 = uVar12 - 0x48;
      lVar15 = uVar12 - 0x58;
      lVar22 = 2;
      fVar5 = (fVar8 - fVar5) / (fVar8 + fVar5);
      fVar8 = fVar5 * fVar5;
      *(float *)((int)puVar11 + 0xb4) = fVar5;
      *(float *)((int)puVar11 + 0xac) = fVar5;
      *(float *)(puVar11 + 0x16) = fVar5;
      *(float *)(puVar11 + 0x15) = fVar5;
      fVar5 = fVar8 * fVar8;
      *(float *)((int)puVar11 + 0xac) = *(float *)((int)puVar11 + 0xac) * fVar8;
      *(float *)(puVar11 + 0x16) = *(float *)(puVar11 + 0x16) * fVar5;
      *(float *)((int)puVar11 + 0xb4) = *(float *)((int)puVar11 + 0xb4) * fVar5 * fVar8;
      do {
        *(float *)((int)lVar13 + 0xa8) = *(float *)((int)lVar13 + 0x98) * fVar5 * fVar5;
        iVar9 = (int)lVar15;
        lVar15 = lVar15 + 8;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar9 + 4) * fVar5 * fVar5;
        lVar16 = lVar16 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar16 = uVar12 - 0x58;
      pfVar18 = (float *)&DAT_007358e0;
      lVar13 = lVar14;
      lVar15 = lVar16;
      do {
        fVar5 = *pfVar18;
        fVar8 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar13 + 0xa8) = *(float *)((int)lVar13 + 0xa8) * fVar5;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar8;
        lVar15 = lVar15 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar15 = 2;
      lVar13 = lVar14;
      do {
        iVar9 = (int)lVar13;
        iVar20 = (int)lVar16;
        lVar13 = lVar13 + 0x10;
        lVar16 = lVar16 + 0x10;
        dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar9 + 0xa8)) +
                          *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) + *(float *)(iVar20 + 0xc)
                         );
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar6 + fVar7);
    }
    fVar5 = g_heroPosition.z - (float)(dVar23 + dVar29);
    fVar1 = SQRT((fVar1 - fVar3) * (fVar1 - fVar3) + (fVar2 - fVar4) * (fVar2 - fVar4));
    *(float *)((int)puVar11 + 0x74) = fVar5;
    fVar5 = ABS(fVar5);
    fVar2 = ABS(fVar1);
    *(float *)(puVar11 + 0xe) = fVar1;
    *(float *)(puVar11 + 0xf) = fVar2 - fVar5;
    uVar19 = (ulonglong)(*(uint *)(puVar11 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0x74) >> 0x1d) & 4;
    fVar1 = ABS(*(float *)(puVar11 + 0xe));
    if (*(float *)(puVar11 + 0xf) - 0.0 < 0.0) {
      fVar1 = fVar5;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
    fVar4 = ABS(*(float *)((int)puVar11 + 0x74));
    if (*(float *)(puVar11 + 0xf) - 0.0 < 0.0) {
      fVar4 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    if (0.0 < fVar1) {
      lVar13 = uVar12 - 0xf0;
      lVar15 = uVar12 - 0x78;
      lVar16 = uVar12 - 0x68;
      lVar22 = 2;
      fVar1 = (fVar4 - fVar1) / (fVar4 + fVar1);
      fVar4 = fVar1 * fVar1;
      *(float *)((int)puVar11 + 0x94) = fVar1;
      *(float *)((int)puVar11 + 0x8c) = fVar1;
      *(float *)(puVar11 + 0x12) = fVar1;
      *(float *)(puVar11 + 0x11) = fVar1;
      fVar1 = fVar4 * fVar4;
      *(float *)((int)puVar11 + 0x8c) = *(float *)((int)puVar11 + 0x8c) * fVar4;
      *(float *)(puVar11 + 0x12) = *(float *)(puVar11 + 0x12) * fVar1;
      *(float *)((int)puVar11 + 0x94) = *(float *)((int)puVar11 + 0x94) * fVar1 * fVar4;
      do {
        *(float *)((int)lVar13 + 0x88) = *(float *)((int)lVar13 + 0x78) * fVar1 * fVar1;
        iVar9 = (int)lVar15;
        lVar13 = lVar13 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar9 + 4) * fVar1 * fVar1;
        lVar16 = lVar16 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar16 = uVar12 - 0x78;
      pfVar18 = (float *)&DAT_007358e0;
      lVar13 = lVar14;
      lVar15 = lVar16;
      do {
        fVar1 = *pfVar18;
        fVar4 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar13 + 0x88) = *(float *)((int)lVar13 + 0x88) * fVar1;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar4;
        lVar15 = lVar15 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar13 = 2;
      do {
        iVar9 = (int)lVar14;
        iVar20 = (int)lVar16;
        lVar14 = lVar14 + 0x10;
        lVar16 = lVar16 + 0x10;
        dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar9 + 0x88)) +
                          *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) + *(float *)(iVar20 + 0xc)
                         );
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar3 + fVar2);
    }
    M1109_001ce3f0(dVar24,-dVar26);
  }
  return bVar21;
}



//==== 001ced74  ns=mobyupdate_helpers  size=0x100
// sig: undefined M1109_001ced74(void)
// callers(1): 001ceea0 mobyupdate_helpers::M111_001ceea0
// callees(2): 000fe610 mobyutil::MB_SphericalToVector; 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M1109_001ced74(double param_1,float *param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  if (DAT_0096b2d0 == 0) {
    *param_2 = g_heroPosition.x;
    param_2[1] = g_heroPosition.y;
    param_2[2] = g_heroPosition.z;
    param_2[3] = g_heroPosition.w;
  }
  else {
    iVar1 = *(int *)(DAT_0096b2d0 + 0x78);
    dVar2 = (double)fastfunc::FastWrapRot(*(float *)(DAT_0096b2d0 + 0x48),*(float *)(iVar1 + 0x90));
    dVar3 = (double)fastfunc::FastWrapRot(*(float *)(DAT_0096b2d0 + 0x44),*(float *)(iVar1 + 0x94));
    mobyutil::MB_SphericalToVector
              ((float)(param_1 * (double)*(float *)(iVar1 + 100)),(float)dVar2,(float)-dVar3,param_2
              );
    iVar1 = DAT_0096b2d0;
    *param_2 = *param_2 + *(float *)(DAT_0096b2d0 + 0x10);
    param_2[1] = param_2[1] + *(float *)(iVar1 + 0x14);
    param_2[2] = param_2[2] + *(float *)(iVar1 + 0x18);
  }
  return;
}



//==== 001ceea0  ns=mobyupdate_helpers  size=0x5d0
// sig: undefined M111_001ceea0(void)
// callers(1): 001cf4f0 mobyupdate_unsorted::UpdateMoby_111
// callees(4): 001ce520 mobyupdate_helpers::M1109_001ce520; 001ce738 mobyupdate_helpers::M1109_001ce738; 001ced74 mobyupdate_helpers::M1109_001ced74; 004fffb4 fastfunc::FastDecTimerS16

undefined8 mobyupdate_helpers::M111_001ceea0(int param_1,int param_2,undefined1 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  undefined2 uVar5;
  uint uVar6;
  Spline *pSVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  longlong lVar12;
  int iVar14;
  undefined8 uVar13;
  MobyInstance *pMVar15;
  longlong lVar16;
  char cVar17;
  longlong lVar18;
  int iVar19;
  double dVar20;
  float local_50;
  float local_4c;
  float local_48;
  
  pSVar7 = Splines[*(int *)(param_2 + 0xa0)];
  if (pSVar7 == (Spline *)0x0) {
    return 0;
  }
  if ((DAT_0096b2d0 == 0) || (*(short *)(DAT_0096b2d0 + 0xa6) != 0x45)) {
    if ((*(int *)(param_2 + 0xbc) == -1) ||
       ((pMVar15 = MobyInstance + *(int *)(param_2 + 0xbc), pMVar15 == (MobyInstance *)0x0 ||
        (pMVar15->state == 0xfd || pMVar15->state == 0xfe)))) {
      local_50 = g_heroPosition.x;
      local_4c = g_heroPosition.y;
      local_48 = g_heroPosition.z;
    }
    else {
      local_50 = (pMVar15->pos).x;
      local_4c = (pMVar15->pos).y;
      local_48 = (pMVar15->pos).z;
    }
  }
  else if (((*(int *)(param_2 + 0xbc) == -1) ||
           (pMVar15 = MobyInstance + *(int *)(param_2 + 0xbc), pMVar15 == (MobyInstance *)0x0)) ||
          (pMVar15->state == 0xfd || pMVar15->state == 0xfe)) {
    M1109_001ced74(0x4061800000000000,&local_50);
  }
  else {
    fVar2 = (*(float *)(DAT_0096b2d0 + 0x14) - (pMVar15->pos).y) * 0.5;
    fVar1 = (*(float *)(DAT_0096b2d0 + 0x10) - (pMVar15->pos).x) * 0.5;
    fVar3 = (*(float *)(DAT_0096b2d0 + 0x18) - (pMVar15->pos).z) * 0.5;
    fVar8 = SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
    if (100.0 < fVar8) {
      fVar8 = 100.0 / fVar8;
      fVar1 = fVar1 * fVar8;
      fVar2 = fVar2 * fVar8;
      fVar3 = fVar3 * fVar8;
    }
    local_50 = fVar1 + (pMVar15->pos).x;
    local_4c = fVar2 + (pMVar15->pos).y;
    local_48 = fVar3 + (pMVar15->pos).z;
  }
  lVar12 = M1109_001ce520(0,&local_50,pSVar7,*(undefined2 *)(param_2 + 0xb4));
  uVar6 = pSVar7->cnt;
  lVar16 = lVar12 + 5;
  lVar18 = lVar16 - (ulonglong)uVar6;
  lVar18 = lVar18 + ((longlong)(int)lVar16 - (longlong)(int)uVar6 >> 0x3f & lVar16 - lVar18);
  iVar19 = (int)lVar18;
  lVar12 = lVar12 + -5 + ((longlong)(int)(lVar12 + -5) >> 0x3f & (ulonglong)uVar6);
  iVar14 = (int)lVar12;
  fVar1 = pSVar7->points[iVar19].y - g_heroPosition.y;
  fVar3 = pSVar7->points[iVar19].x - g_heroPosition.x;
  fVar9 = pSVar7->points[iVar19].z - g_heroPosition.z;
  fVar2 = pSVar7->points[iVar14].y - g_heroPosition.y;
  fVar8 = pSVar7->points[iVar14].x - g_heroPosition.x;
  fVar10 = pSVar7->points[iVar14].z - g_heroPosition.z;
  sVar4 = *(short *)(param_2 + 0xb4);
  fVar1 = SQRT(fVar9 * fVar9 + fVar3 * fVar3 + fVar1 * fVar1);
  fVar2 = SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar2 * fVar2);
  cVar17 = *(char *)(param_2 + 0xd0);
  if (fVar1 <= fVar2) {
    if (fVar2 <= fVar1) {
      if (cVar17 == '\x01') {
        lVar16 = 1;
        lVar12 = lVar18;
      }
      else {
        lVar16 = -1;
      }
    }
    else {
      lVar16 = -1;
    }
  }
  else {
    lVar16 = 1;
    lVar12 = lVar18;
  }
  iVar19 = 0;
  while( true ) {
    iVar14 = (int)(lVar12 << 4);
    fVar1 = *(float *)((int)&pSVar7->points[0].y + iVar14);
    fVar2 = *(float *)((int)&pSVar7->points[0].x + iVar14);
    fVar9 = local_4c - fVar1;
    fVar3 = *(float *)((int)&pSVar7->points[0].z + iVar14);
    fVar8 = local_50 - fVar2;
    fVar10 = local_48 - fVar3;
    if ((int)uVar6 <= iVar19 || 30.0 <= SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9))
    break;
    iVar19 = iVar19 + 1;
    lVar12 = (lVar16 + lVar12) -
             (longlong)((int)(lVar16 + lVar12) / (int)uVar6) * (longlong)(int)uVar6;
  }
  fVar1 = *(float *)(param_1 + 0x14) - fVar1;
  fVar2 = *(float *)(param_1 + 0x10) - fVar2;
  iVar19 = (int)lVar12;
  fVar3 = *(float *)(param_1 + 0x18) - fVar3;
  lVar12 = ((longlong)(sVar4 - iVar19) - (longlong)(int)((uVar6 - (int)sVar4) + iVar19) >> 0x3f &
           0xfffffffffffffffeU) + 1;
  lVar12 = lVar12 + ((longlong)sVar4 - (longlong)iVar19 >> 0x3f &
                    (((longlong)(iVar19 - sVar4) - (longlong)(int)((uVar6 - iVar19) + (int)sVar4) >>
                      0x3f & 2U) - 1) - lVar12);
  iVar19 = (int)lVar12;
  dVar20 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (iVar19 != cVar17) {
    iVar14 = fastfunc::FastDecTimerS16(param_2 + 0xd2);
    cVar17 = *(char *)(param_2 + 0xd0);
    if (iVar14 != 0) {
      *(undefined2 *)(param_2 + 0xd2) = 10;
      bVar11 = false;
      fVar1 = *(float *)(param_2 + 0xcc) * (DAT_0071f408 * -0.04000002 + 1.0);
      *(float *)(param_2 + 0xcc) = fVar1;
      if ((fVar1 < DAT_0071f408 * 0.1) || (*(char *)(param_1 + 0x31) == '\0')) {
        bVar11 = true;
      }
      fVar1 = *(float *)(param_1 + 0x14) - g_heroPosition.y;
      fVar2 = *(float *)(param_1 + 0x10) - g_heroPosition.x;
      if (bVar11 || SQRT(fVar2 * fVar2 + fVar1 * fVar1) < 40.0) {
        uVar5 = *(undefined2 *)(param_2 + 0xb4);
        *(char *)(param_2 + 0xd0) = (char)lVar12;
        *(undefined2 *)(param_2 + 0xb4) = *(undefined2 *)(param_2 + 0xb6);
        *(undefined2 *)(param_2 + 0xb6) = uVar5;
      }
      goto LAB_001cf42c;
    }
  }
  if (iVar19 == cVar17) {
    fVar1 = (float)((double)(DAT_0071f408 * 0.07) *
                    (double)(float)(dVar20 * 0.01666666753590107 -
                                   (double)*(float *)(param_2 + 0xcc)) +
                   (double)*(float *)(param_2 + 0xcc));
    *(float *)(param_2 + 0xcc) = fVar1;
    if (mobyutil::g_FrameTime * 100.0 < fVar1) {
      *(float *)(param_2 + 0xcc) = mobyutil::g_FrameTime * 100.0;
    }
  }
LAB_001cf42c:
  uVar13 = M1109_001ce738(param_1,param_2,param_3);
  return uVar13;
}



//==== 001cf4f0  ns=mobyupdate_unsorted  size=0x109c
// sig: undefined UpdateMoby_111(MobyInstance * moby)
// callers(0): 
// callees(15): 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 0010e030 mobyutil::MB_genericExplosion; 00110950 mobyutil::MB_RandomizeVector; 001367d0 path::PathFindClosestPnt; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 00187e00 FUN_00187e00; 001ce130 mobyupdate_helpers::M111_001ce130; 001ceea0 mobyupdate_helpers::M111_001ceea0; 002f9610 FUN_002f9610; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand; 005cd098 libc::printf
// strings: 00654690: 'no path for moby 111 #%d: killing\n'

/* Moby 111 */

void mobyupdate_unsorted::UpdateMoby_111(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  u8 uVar3;
  char cVar4;
  float fVar5;
  f32 fVar6;
  float fVar7;
  MobyModeBit MVar8;
  void *pvVar9;
  MobyClass *pMVar10;
  u16 *puVar11;
  void *pvVar12;
  Spline *pSVar13;
  Spline *pSVar14;
  uint uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  bool bVar28;
  float fVar29;
  int iVar30;
  MobyInstance *pMVar31;
  int iVar32;
  short sVar33;
  byte bVar34;
  Spline *spline;
  int iVar35;
  ulonglong uVar36;
  undefined8 in_LR;
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
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  Vec4 local_100;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  char local_c4 [4];
  float local_c0;
  float local_bc;
  float local_b8;
  f32 local_b4;
  longlong local_b0;
  
  iVar30 = DAT_0096b2d0;
  iVar35 = 0;
  pvVar9 = moby->pVar;
  uVar36 = ZEXT48(pvVar9);
  uVar3 = moby->state;
  bVar28 = false;
  iVar32 = *(int *)((int)pvVar9 + 0xa0);
  spline = (Spline *)0x0;
  if (iVar32 != -1) {
    spline = Splines[iVar32];
  }
  if (uVar3 == '\x04') {
    if ((((*(int *)((int)pvVar9 + 0xbc) != -1) &&
         (pMVar31 = MobyInstance + *(int *)((int)pvVar9 + 0xbc), pMVar31 != (MobyInstance *)0x0)) &&
        (pMVar31->state != 0xfd && pMVar31->state != 0xfe)) && (pMVar31->setByGroup != '\x04')) {
      auVar47 = ZEXT416(0xfffffff0);
      auVar48 = loadVectorLeftIndexed(0x24,uVar36);
      auVar49 = loadVectorRightIndexed(0x34,uVar36);
      auVar47 = vectorShiftRightAlgebraicWord
                          (auVar48 | auVar49,
                           auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60);
      auVar47 = vectorConvertFromSignedFixedPointWord(auVar47,0);
      auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar16 = storeVectorElementWordIndexed
                         (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x20,uVar36)
      ;
      *(undefined4 *)((int)pvVar9 + 0x20U & 0xfffffffc) = uVar16;
      moby->state = '\0';
    }
  }
  else if (uVar3 == '\x03') {
    iVar32 = *(int *)((int)pvVar9 + 0xd4);
    if (iVar32 != -1) {
      if (((iVar32 != -1) && (sound::g_SoundChannels[iVar32].pMoby == moby)) &&
         (sound::g_SoundChannels[iVar32].state != '\0')) {
        sound::sound_Kill(iVar32);
      }
      *(undefined4 *)((int)pvVar9 + 0xd4) = 0xffffffff;
    }
    local_d0 = GameCamera.posX - (moby->pos).x;
    local_cc = GameCamera.posY - (moby->pos).y;
    local_c8 = GameCamera.posZ - (moby->pos).z;
    local_c4[0] = GameCamera.field8_0x14c[0];
    local_c4[1] = GameCamera.field8_0x14c[1];
    local_c4[2] = GameCamera.field8_0x14c[2];
    local_c4[3] = GameCamera.field8_0x14c[3];
    dVar45 = 0.0;
    dVar43 = 4.0;
    mobyutil::MB_genericExplosion
              (0,0,0x4010000000000000,0x4008000000000000,0x4022000000000000,0x3ff19999a0000000,
               0x4034000000000000,moby,&local_d0,0,1,0xffffffffffffffff,5,3,10);
    local_b4 = (moby->pos).w;
    dVar44 = (double)SQRT(local_c8 * local_c8 + local_d0 * local_d0 + local_cc * local_cc);
    fVar5 = (float)(dVar43 / dVar44);
    dVar43 = dVar45;
    if (dVar45 - dVar44 < 0.0) {
      dVar43 = (double)(local_d0 * fVar5);
    }
    dVar46 = dVar45;
    if (dVar45 - dVar44 < 0.0) {
      dVar46 = (double)(local_cc * fVar5);
    }
    dVar41 = dVar45;
    if (dVar45 - dVar44 < 0.0) {
      dVar41 = (double)(local_c8 * fVar5);
    }
    if (dVar44 - dVar45 < 0.0) {
      dVar43 = (double)(local_d0 * fVar5);
    }
    if (dVar44 - dVar45 < 0.0) {
      dVar46 = (double)(local_cc * fVar5);
    }
    if (dVar44 - dVar45 < 0.0) {
      dVar41 = (double)(local_c8 * fVar5);
    }
    local_c0 = (float)((double)(moby->pos).x - dVar43);
    local_bc = (float)((double)(moby->pos).y - dVar46);
    local_b8 = (float)((double)(moby->pos).z - dVar41);
    local_d0 = *(float *)((int)pvVar9 + 0x70) * 0.5;
    local_cc = *(float *)((int)pvVar9 + 0x74) * 0.5;
    local_c8 = *(float *)((int)pvVar9 + 0x78) * 0.5;
    local_c4 = *(char (*) [4])((int)pvVar9 + 0x7c);
    iVar32 = rand();
    iVar32 = iVar32 % 10;
    if (iVar32 < 1) {
      if (-1 < iVar32) {
        FUN_002f9610(&local_c0,0xe0);
      }
    }
    else if (iVar32 < 7) {
      FUN_002f9610(&local_c0,0xe4);
    }
    if (((*(int *)((int)pvVar9 + 0xbc) != -1) &&
        (pMVar31 = MobyInstance + *(int *)((int)pvVar9 + 0xbc), pMVar31 != (MobyInstance *)0x0)) &&
       ((pMVar31->state != 0xfd && pMVar31->state != 0xfe &&
        ((pMVar31 != (MobyInstance *)0x0 &&
         (cVar4 = *(char *)((int)pMVar31->pVar + 0x10e), cVar4 != '\0')))))) {
      *(char *)((int)pMVar31->pVar + 0x10e) = cVar4 + -1;
    }
    moby->collision = (ushort *)0x0;
    moby->state = '\x04';
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
          LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
          NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
  }
  else {
    if (uVar3 == '\x02') {
      mobyupdate_helpers::M111_001ce130(moby,uVar36,uVar36 + 0x20);
      dVar46 = (double)g_heroPosition.x;
      dVar45 = (double)g_heroPosition.y;
      dVar44 = (double)g_heroPosition.z;
      dVar43 = (double)g_heroPosition.w;
      if ((iVar30 != 0) && (*(char *)(iVar30 + 0x20) != -3 && *(char *)(iVar30 + 0x20) != -2)) {
        bVar28 = false;
        dVar45 = (double)*(float *)(DAT_0096b2d0 + 0x14);
        dVar46 = (double)*(float *)(DAT_0096b2d0 + 0x10);
        fVar5 = (float)((double)(moby->pos).y - dVar45);
        dVar44 = (double)*(float *)(DAT_0096b2d0 + 0x18);
        fVar1 = (float)((double)(moby->pos).x - dVar46);
        fVar2 = (float)((double)(moby->pos).z - dVar44);
        iVar35 = *(int *)(iVar30 + 0x78);
        dVar43 = (double)*(float *)(DAT_0096b2d0 + 0x1c);
        if ((g_heroState == TURRET_PLANE_UI) &&
           (((*(short *)(iVar30 + 0xa6) == 0x45 || (*(short *)(iVar30 + 0xa6) == 0x4da)) &&
            (SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar5 * fVar5) < 110.0)))) {
          bVar28 = true;
        }
      }
      if (moby->enabled == '\0') {
        *(int *)((int)pvVar9 + 0xa8) = *(int *)((int)pvVar9 + 0xa8) + 1;
      }
      else if (bVar28) {
        *(undefined4 *)((int)pvVar9 + 0xa8) = 0;
      }
      if ((*(int *)((int)pvVar9 + 0xbc) != -1) &&
         (pMVar31 = MobyInstance + *(int *)((int)pvVar9 + 0xbc), pMVar31 != (MobyInstance *)0x0)) {
        uVar3 = pMVar31->state;
        if ((((uVar3 != 0xfd && uVar3 != 0xfe) &&
             ((pvVar12 = pMVar31->pVar, pMVar31 != (MobyInstance *)0x0 && (uVar3 != 0xfe)))) &&
            (uVar3 != 0xfd)) && (uVar3 != '\x01')) {
          iVar32 = *(int *)((int)pvVar9 + 0xd4);
          if (((iVar32 == -1) || (sound::g_SoundChannels[iVar32].pMoby != moby)) ||
             (sound::g_SoundChannels[iVar32].state == '\0')) {
            *(undefined4 *)((int)pvVar9 + 0xd4) = 0xffffffff;
            iVar32 = sound::PlayMobySound(1,4,moby);
            *(int *)((int)pvVar9 + 0xd4) = iVar32;
          }
          mobyupdate_helpers::M111_001ceea0(moby,uVar36,1);
          bVar34 = moby->setByGroup;
          if (bVar34 == 0) {
            if ((((iVar35 != 0) && (*(char *)(iVar30 + 0x20) == '\x04')) &&
                (bVar28 && moby->enabled != '\0')) && (*(byte *)((int)pvVar12 + 0x10f) < 3)) {
              auVar47 = ZEXT416(0xffffffff);
              auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
              auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
              auVar47 = loadVectorLeftIndexed(0x10,0x1cf470);
              auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar47 = vectorMultiplyAddFloatingPoint
                                  (auVar49,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 |
                                           auVar47 << 0x60,auVar48);
              auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
              auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
              uVar16 = storeVectorElementWordIndexed
                                 (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0xb8
                                  ,uVar36);
              *(undefined4 *)((int)pvVar9 + 0xb8U & 0xfffffffc) = uVar16;
              *(undefined4 *)((int)pvVar9 + 0xa8) = 0;
              *(undefined4 *)((int)pvVar9 + 0xac) = 0x3f800000;
              moby->setByGroup = '\x01';
            }
          }
          else if (bVar34 < 2) {
            bVar34 = *(char *)((int)pvVar12 + 0x10f) + 1;
            *(byte *)((int)pvVar12 + 0x10f) = bVar34;
            if (bVar34 < 4) {
              cVar4 = moby->enabled;
              if (cVar4 == '\0') {
                *(int *)((int)pvVar9 + 0xa8) = *(int *)((int)pvVar9 + 0xa8) + 1;
                cVar4 = moby->enabled;
              }
              if ((!bVar28 || cVar4 == '\0') ||
                 (local_b0 = (longlong)(int)(animationSpeed * 20.5),
                 (int)(animationSpeed * 20.5) <= *(int *)((int)pvVar9 + 0xa8))) {
                auVar47 = ZEXT416(0xffffffff);
                auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
                auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
                auVar47 = loadVectorLeftIndexed(0x14,0x1cf470);
                auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
                auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                auVar47 = vectorMultiplyAddFloatingPoint
                                    (auVar49,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 |
                                             auVar47 << 0x60,auVar48);
                auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
                auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
                uVar16 = storeVectorElementWordIndexed
                                   (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,
                                    0xb8,uVar36);
                *(undefined4 *)((int)pvVar9 + 0xb8U & 0xfffffffc) = uVar16;
                moby->setByGroup = '\x02';
              }
              iVar32 = fastfunc::FastDecTimerS32(uVar36 + 0xb8);
              if (iVar32 != 0) {
                auVar47 = ZEXT416(0xffffffff);
                auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
                auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
                auVar47 = loadVectorLeftIndexed(0x18,0x1cf470);
                auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
                auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                auVar47 = vectorMultiplyAddFloatingPoint
                                    (auVar49,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 |
                                             auVar47 << 0x60,auVar48);
                auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
                auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
                uVar16 = storeVectorElementWordIndexed
                                   (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,
                                    0xb8,uVar36);
                *(undefined4 *)((int)pvVar9 + 0xb8U & 0xfffffffc) = uVar16;
                moby->setByGroup = '\x02';
              }
              iVar32 = fastfunc::FastDecTimerS32(uVar36 + 0xa4);
              if (((iVar32 != 0) &&
                  ((int)(((uint)((int)DAT_00a10714 >> 0x1f) >> 1 ^ (uint)DAT_00a10714) -
                        ((int)DAT_00a10714 >> 0x1f)) < 0x3f666666)) &&
                 ((int)(((uint)((int)DAT_00a10718 >> 0x1f) >> 1 ^ (uint)DAT_00a10718) -
                       ((int)DAT_00a10718 >> 0x1f)) < 0x3f666666)) {
                fVar5 = animationSpeed * 6.5;
                local_b0 = (longlong)(int)fVar5;
                iVar32 = fastfunc::FastDoubleToInt((double)((DAT_00a10718 + DAT_00a10714) * 1.3));
                *(int *)((int)pvVar9 + 0xa4) = (int)fVar5 + iVar32;
                if (iVar35 != 0) {
                  fVar5 = *(float *)(iVar35 + 0x10);
                  fVar7 = *(float *)(iVar35 + 0x18) * fVar5;
                  fVar1 = *(float *)((int)pvVar9 + 0xb0);
                  fVar2 = *(float *)(iVar35 + 0x14);
                  fVar17 = fVar2 * *(float *)(iVar35 + 0x18);
                  fVar23 = fVar1 + 1.5707963;
                  fVar19 = -fVar17;
                  fVar21 = 3.1415925 - fVar1;
                  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
                    fVar21 = fVar1;
                  }
                  fVar18 = fVar5 * fVar5 - -(fVar2 * fVar2);
                  fVar20 = -3.1415925 - fVar1;
                  if ((-3.1415925 - fVar1) - fVar21 < 0.0) {
                    fVar20 = fVar21;
                  }
                  fVar1 = 3.1415925 - fVar23;
                  if (fVar23 - (3.1415925 - fVar23) < 0.0) {
                    fVar1 = fVar23;
                  }
                  fVar21 = fVar20 * fVar20;
                  uVar42 = 0x4014000000000000;
                  fVar27 = SQRT(fVar18 * fVar18 + fVar19 * fVar19 + --(fVar7 * fVar7));
                  dVar41 = 0.0;
                  local_e4 = (float)dVar43;
                  fVar29 = *(float *)((int)pvVar9 + 0xac) * 5.0;
                  fVar22 = fVar21 * fVar21 * fVar20;
                  fVar19 = -3.1415925 - fVar23;
                  if ((-3.1415925 - fVar23) - fVar1 < 0.0) {
                    fVar19 = fVar1;
                  }
                  fVar26 = SQRT(fVar5 * fVar5 + --(fVar2 * fVar2));
                  fVar23 = fVar21 * fVar22;
                  fVar1 = fVar19 * fVar19;
                  fVar24 = fVar1 * fVar1 * fVar19;
                  fVar25 = fVar1 * fVar24;
                  fVar21 = (fVar29 * (fVar21 * fVar23 * 2.601887e-06 +
                                     fVar23 * -0.0001980741 +
                                     fVar22 * 0.0083330255 + fVar21 * fVar20 * -0.16666657 + fVar20)
                           ) / fVar27;
                  fVar1 = (fVar29 * (fVar1 * fVar25 * 2.601887e-06 +
                                    fVar25 * -0.0001980741 +
                                    fVar24 * 0.0083330255 + fVar1 * fVar19 * -0.16666657 + fVar19))
                          / fVar26;
                  dVar37 = -(double)(fVar17 * fVar21);
                  dVar43 = dVar41;
                  if (0.0 - fVar27 < 0.0) {
                    dVar43 = (double)(fVar18 * fVar21);
                  }
                  dVar38 = dVar41;
                  if (0.0 - fVar27 < 0.0) {
                    dVar38 = dVar37;
                  }
                  dVar40 = dVar41;
                  if (0.0 - fVar27 < 0.0) {
                    dVar40 = -(double)(fVar7 * fVar21);
                  }
                  if (fVar27 - 0.0 < 0.0) {
                    dVar43 = (double)(fVar18 * fVar21);
                  }
                  if (fVar27 - 0.0 < 0.0) {
                    dVar38 = dVar37;
                  }
                  if (fVar27 - 0.0 < 0.0) {
                    dVar40 = -(double)(fVar7 * fVar21);
                  }
                  local_e8 = (float)(dVar44 + dVar43);
                  dVar44 = (double)(fVar5 * fVar1);
                  dVar37 = -(double)(fVar2 * fVar1);
                  dVar43 = dVar41;
                  if (0.0 - fVar26 < 0.0) {
                    dVar43 = dVar44;
                  }
                  dVar39 = dVar41;
                  if (0.0 - fVar26 < 0.0) {
                    dVar39 = dVar37;
                  }
                  if (fVar26 - 0.0 < 0.0) {
                    dVar43 = dVar44;
                  }
                  if (fVar26 - 0.0 < 0.0) {
                    dVar39 = dVar37;
                  }
                  local_ec = (float)((double)(float)(dVar45 + dVar38) + dVar43);
                  local_f0 = (float)((double)(float)(dVar46 + dVar40) + dVar39);
                  mobyutil::MB_RandomizeVector(0.6,&local_f0);
                  dVar45 = (double)(moby->pos).y;
                  dVar46 = (double)(moby->pos).x;
                  fVar1 = *(float *)(iVar35 + 0x14);
                  fVar2 = *(float *)(iVar35 + 0x10);
                  fVar7 = *(float *)(iVar35 + 0x18);
                  dVar37 = (double)SQRT(fVar7 * fVar7 + fVar2 * fVar2 + fVar1 * fVar1);
                  dVar44 = (double)(moby->pos).z;
                  fVar5 = (float)((double)(*(float *)(iVar35 + 100) *
                                          (SQRT((float)(dVar46 - (double)g_heroPosition.x) *
                                                (float)(dVar46 - (double)g_heroPosition.x) +
                                                (float)(dVar45 - (double)g_heroPosition.y) *
                                                (float)(dVar45 - (double)g_heroPosition.y)) /
                                          (mobyutil::g_FrameTime * 50.0 + *(float *)(iVar35 + 100)))
                                          ) / dVar37);
                  local_d4 = local_e4;
                  dVar43 = dVar41;
                  if (dVar41 - dVar37 < 0.0) {
                    dVar43 = (double)(fVar1 * fVar5);
                  }
                  dVar38 = dVar41;
                  if (dVar41 - dVar37 < 0.0) {
                    dVar38 = (double)(fVar2 * fVar5);
                  }
                  dVar40 = dVar41;
                  if (dVar41 - dVar37 < 0.0) {
                    dVar40 = (double)(fVar7 * fVar5);
                  }
                  if (dVar37 - dVar41 < 0.0) {
                    dVar43 = (double)(fVar1 * fVar5);
                  }
                  if (dVar37 - dVar41 < 0.0) {
                    dVar38 = (double)(fVar2 * fVar5);
                  }
                  if (dVar37 - dVar41 < 0.0) {
                    dVar40 = (double)(fVar7 * fVar5);
                  }
                  local_ec = (float)((double)(float)((double)local_ec + dVar43) - dVar45);
                  local_f0 = (float)((double)(float)((double)local_f0 + dVar38) - dVar46);
                  local_e8 = (float)((double)(float)((double)local_e8 + dVar40) - dVar44);
                  dVar37 = (double)SQRT(local_e8 * local_e8 +
                                        local_f0 * local_f0 + local_ec * local_ec);
                  fVar5 = (float)(2.5999999046325684 / dVar37);
                  dVar43 = dVar41;
                  if (dVar41 - dVar37 < 0.0) {
                    dVar43 = (double)(local_e8 * fVar5);
                  }
                  dVar38 = dVar41;
                  if (dVar41 - dVar37 < 0.0) {
                    dVar38 = (double)(local_ec * fVar5);
                  }
                  dVar40 = dVar41;
                  if (dVar41 - dVar37 < 0.0) {
                    dVar40 = (double)(local_f0 * fVar5);
                  }
                  if (dVar37 - dVar41 < 0.0) {
                    dVar43 = (double)(local_e8 * fVar5);
                  }
                  if (dVar37 - dVar41 < 0.0) {
                    dVar38 = (double)(local_ec * fVar5);
                  }
                  if (dVar37 - dVar41 < 0.0) {
                    dVar40 = (double)(local_f0 * fVar5);
                  }
                  local_d8 = (float)(dVar43 + dVar44);
                  local_dc = (float)(dVar38 + dVar45);
                  local_e0 = (float)(dVar40 + dVar46);
                  FUN_00187e00(0x405e400000000000,(double)(mobyutil::g_FrameTime * 50.0),uVar42,moby
                               ,&local_f0,&local_e0);
                  sound::PlayMobySound(0,0,moby);
                }
                dVar45 = (double)*(float *)((int)pvVar9 + 0xac);
                dVar43 = (double)mobyutil::MB_randRangeFloat(0.92,0.94);
                uVar15 = (int)*(uint *)((int)pvVar9 + 0xb0) >> 0x1f;
                dVar44 = (double)*(float *)((int)pvVar9 + 0xb0);
                *(float *)((int)pvVar9 + 0xac) =
                     (float)(dVar45 * (double)((float)(dVar43 - 1.0) * DAT_0071f408 + 1.0));
                dVar43 = 0.01745329238474369;
                if ((int)((uVar15 >> 1 ^ *(uint *)((int)pvVar9 + 0xb0)) - uVar15) < 0x3fc90fdc) {
                  dVar45 = (double)mobyutil::MB_randRangeFloat(20.0,40.0);
                  fVar5 = (float)((double)(float)(dVar45 * dVar43) * (double)mobyutil::g_FrameTime +
                                 dVar44);
                }
                else {
                  dVar45 = (double)mobyutil::MB_randRangeFloat(20.0,40.0);
                  fVar5 = -(float)((double)(float)(dVar45 * dVar43) * (double)mobyutil::g_FrameTime
                                  - dVar44);
                }
                *(float *)((int)pvVar9 + 0xb0) = fVar5;
              }
            }
          }
          else if ((bVar34 < 3) && (iVar32 = fastfunc::FastDecTimerS32(uVar36 + 0xb8), iVar32 != 0))
          {
            moby->setByGroup = '\0';
          }
          goto LAB_001d0450;
        }
      }
      moby->collision = (ushort *)0x0;
      moby->state = '\x04';
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
      return;
    }
    if (uVar3 == '\x01') {
      if (((*(int *)((int)pvVar9 + 0xbc) == -1) ||
          (pMVar31 = MobyInstance + *(int *)((int)pvVar9 + 0xbc), pMVar31 == (MobyInstance *)0x0))
         || ((pMVar31->state == 0xfd || pMVar31->state == 0xfe || (pMVar31->setByGroup == '\x04'))))
      {
        local_100.z = 0.0;
        fVar5 = SQRT(GameCamera.orientMtx.forward.z * GameCamera.orientMtx.forward.z +
                     GameCamera.orientMtx.forward.x * GameCamera.orientMtx.forward.x +
                     GameCamera.orientMtx.forward.y * GameCamera.orientMtx.forward.y);
        local_100.y = local_100.z;
        local_100.x = local_100.z;
        if (fVar5 != 0.0) {
          fVar5 = 40.0 / fVar5;
          local_100.z = GameCamera.orientMtx.forward.z * fVar5;
          local_100.y = GameCamera.orientMtx.forward.y * fVar5;
          local_100.x = GameCamera.orientMtx.forward.x * fVar5;
        }
        local_100.x = GameCamera.posX - local_100.x;
        local_100.y = GameCamera.posY - local_100.y;
        local_100.z = GameCamera.posZ - local_100.z;
        local_100.w = (float)GameCamera.field8_0x14c;
        iVar32 = path::PathFindClosestPnt(0.0,&local_100,spline);
        sVar33 = (short)iVar32;
        *(short *)((int)pvVar9 + 0xb4) = sVar33;
        *(short *)((int)pvVar9 + 0xb6) = sVar33;
        iVar32 = (int)((longlong)sVar33 << 4);
        fVar6 = *(f32 *)((int)&spline->points[0].x + iVar32);
        *(f32 *)((int)pvVar9 + 0x90) = fVar6;
        *(undefined4 *)((int)pvVar9 + 0x94) = *(undefined4 *)((int)&spline->points[0].y + iVar32);
        *(undefined4 *)((int)pvVar9 + 0x98) = *(undefined4 *)((int)&spline->points[0].z + iVar32);
        *(undefined4 *)((int)pvVar9 + 0x9c) = *(undefined4 *)((int)&spline->points[0].w + iVar32);
        (moby->pos).x = fVar6;
        pMVar10 = moby->pClass;
        MVar8 = moby->modeBits;
        (moby->pos).y = *(f32 *)((int)pvVar9 + 0x94);
        (moby->pos).z = *(f32 *)((int)pvVar9 + 0x98);
        (moby->pos).w = *(f32 *)((int)pvVar9 + 0x9c);
        puVar11 = pMVar10->collision;
        moby->enabled = '\x01';
        moby->collision = puVar11;
        moby->modeBits =
             MVar8 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                      DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|
                      HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) |
             CAN_BE_AUTO_TARGETED;
        moby->state = '\x02';
      }
    }
    else if (uVar3 == '\0') {
      if ((moby->drawDistance == 0) && (moby->updateDistance == '\0')) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      if (spline == (Spline *)0x0) {
        libc::printf("no path for moby 111 #%d: killing\n",moby->uid);
        mobyfunc::DeleteMoby(moby);
        return;
      }
      iVar35 = *(int *)((int)pvVar9 + 0xa0);
      auVar47 = ZEXT416(0xffffffff);
      auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
      pSVar13 = Splines[iVar32];
      auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
      (moby->pos).x = pSVar13->points[0].x;
      (moby->pos).y = pSVar13->points[0].y;
      pSVar14 = Splines[iVar35];
      (moby->pos).z = pSVar13->points[0].z;
      fVar5 = pSVar13->points[0].w;
      *(undefined2 *)((int)pvVar9 + 0xb4) = 1;
      (moby->pos).w = fVar5;
      *(short *)((int)pvVar9 + 0xb6) = (short)pSVar14->cnt + -1;
      fVar6 = spline->points[1].x;
      *(f32 *)((int)pvVar9 + 0x90) = fVar6;
      *(float *)((int)pvVar9 + 0x94) = spline->points[1].y;
      *(float *)((int)pvVar9 + 0x98) = spline->points[1].z;
      *(float *)((int)pvVar9 + 0x9c) = spline->points[1].w;
      (moby->pos).x = fVar6;
      (moby->pos).y = *(f32 *)((int)pvVar9 + 0x94);
      (moby->pos).z = *(f32 *)((int)pvVar9 + 0x98);
      (moby->pos).w = *(f32 *)((int)pvVar9 + 0x9c);
      auVar47 = loadVectorLeftIndexed(in_LR,0x1cf470);
      auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
      MVar8 = moby->modeBits;
      auVar47 = vectorMultiplyAddFloatingPoint
                          (auVar49,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,
                           auVar48);
      auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
      auVar47 = ZEXT416(auVar47._0_4_ + 5) & (undefined1  [16])0xffffffff;
      uVar16 = storeVectorElementWordIndexed
                         (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0xa8,uVar36)
      ;
      *(undefined4 *)((int)pvVar9 + 0xa8U & 0xfffffffc) = uVar16;
      moby->state = '\x01';
      moby->setByGroup = '\0';
      moby->updateDistance = -1;
      moby->drawDistance = 0xff;
      moby->collision = (ushort *)0x0;
      moby->enabled = '\0';
      moby->modeBits =
           MVar8 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                    DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                    TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | DISABLED;
      *(undefined1 *)((int)pvVar9 + 0xd0) = 1;
    }
  }
LAB_001d0450:
  fVar6 = (moby->pos).x;
  uVar15 = (int)fVar6 >> 0x1f;
  fVar5 = 20.0;
  fVar1 = (moby->pos).x;
  if ((int)((uVar15 >> 1 ^ (uint)fVar6) - uVar15) < 0x41a00000) {
    (moby->pos).x = 20.0;
    fVar1 = fVar5;
  }
  if (1003.0 < fVar1) {
    (moby->pos).x = 1003.0;
  }
  fVar6 = (moby->pos).y;
  uVar15 = (int)fVar6 >> 0x1f;
  fVar1 = (moby->pos).y;
  if ((int)((uVar15 >> 1 ^ (uint)fVar6) - uVar15) < 0x41a00000) {
    (moby->pos).y = 20.0;
    fVar1 = fVar5;
  }
  if (1003.0 < fVar1) {
    (moby->pos).y = 1003.0;
  }
  fVar6 = (moby->pos).z;
  uVar15 = (int)fVar6 >> 0x1f;
  fVar1 = (moby->pos).z;
  if ((int)((uVar15 >> 1 ^ (uint)fVar6) - uVar15) < 0x41a00000) {
    (moby->pos).z = 20.0;
    fVar1 = fVar5;
  }
  if (1003.0 < fVar1) {
    (moby->pos).z = 1003.0;
  }
  return;
}



