// game/update/moby987.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x3f3260-0x3f3d58
#include "game/update/moby987.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/update/moby633.h"
#include "idol/fastfunc.h"

// 0x03f3260 (0xec bytes)
MobyInstance *
M987_003f3260
          (double param_1,undefined4 *param_2,f32 *param_3,undefined4 param_4,undefined4 param_5)

{
  f32 fVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  MobyInstance *pMVar4;
  
  pMVar4 = CreateMoby(THRUSTERPACK|BOLT_CIRCLENUT|BLARG_HEAVY_INTERCEPTOR_0008);
  if (pMVar4 != (MobyInstance *)0x0) {
    pMVar4->updateDistance = -1;
    pMVar4->enabled = '\x01';
    pMVar4->state = '\x01';
    puVar3 = (undefined4 *)pMVar4->pVar;
    (pMVar4->pos).x = *param_3;
    (pMVar4->pos).y = param_3[1];
    fVar1 = param_3[2];
    pMVar4->drawDistance = 0x7e;
    (pMVar4->pos).z = fVar1;
    (pMVar4->pos).w = param_3[3];
    *puVar3 = *param_2;
    uVar2 = param_2[1];
    puVar3[5] = param_5;
    puVar3[1] = uVar2;
    uVar2 = param_2[2];
    puVar3[3] = (float)param_1;
    puVar3[2] = uVar2;
    puVar3[4] = param_4;
    UpdateMobyTransform(pMVar4);
  }
  return pMVar4;
}


// 0x03f334c (0x14 bytes)
void M987_003f334c(void)

{
  DAT_00854404 = 0x10000;
  return;
}


// 0x03f3388 (0x8f4 bytes)
void M987_003f3388(int param_1,float *param_2,MobyInstance *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  float *pfVar6;
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
  float local_180;
  float local_17c;
  float local_178;
  undefined4 local_174;
  float local_170;
  float local_16c;
  float local_168;
  undefined4 local_164;
  float local_160;
  float local_15c;
  float local_158;
  undefined4 local_154;
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
  float local_120;
  float local_11c;
  float local_118;
  double local_100;
  double local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  float local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  
  sVar5 = *(short *)(param_1 + 0xa6);
  pfVar6 = *(float **)(param_1 + 0x78);
  if (sVar5 < 0x3dd) {
    if (0x3db < sVar5) {
      dVar26 = (double)DAT_0085443c;
      dVar27 = (double)DAT_0085448c;
      local_100 = (double)DAT_00854448;
      local_f8 = (double)DAT_00854454;
      goto LAB_003f34a0;
    }
  }
  else if (sVar5 < 0x3de) {
    dVar26 = (double)DAT_00854440;
    dVar27 = (double)DAT_00854490;
    local_100 = (double)DAT_0085444c;
    local_f8 = (double)DAT_00854458;
    goto LAB_003f34a0;
  }
  dVar26 = (double)DAT_00854438;
  dVar27 = (double)DAT_00854488;
  local_100 = (double)DAT_00854444;
  local_f8 = (double)DAT_00854450;
LAB_003f34a0:
  dVar26 = (double)(float)(dVar26 * dVar27);
  local_ec = (float)(local_f8 * dVar27);
  local_f0 = (float)(local_100 * dVar27);
  FastEulerToMtx1(&local_140,pfVar6 + 4);
  fVar4 = pfVar6[0x18];
  fVar3 = fVar4 + 1.5707963;
  fVar1 = 3.1415925 - fVar4;
  if (fVar4 - (3.1415925 - fVar4) < 0.0) {
    fVar1 = fVar4;
  }
  fVar14 = SQRT(local_138 * local_138 + local_140 * local_140 + local_13c * local_13c);
  fVar2 = 3.1415925 - fVar3;
  if (fVar3 - (3.1415925 - fVar3) < 0.0) {
    fVar2 = fVar3;
  }
  fVar7 = -3.1415925 - fVar4;
  if ((-3.1415925 - fVar4) - fVar1 < 0.0) {
    fVar7 = fVar1;
  }
  fVar16 = SQRT(local_128 * local_128 + local_130 * local_130 + local_12c * local_12c);
  dVar27 = 0.0;
  fVar4 = fVar7 * fVar7;
  fVar1 = -3.1415925 - fVar3;
  if ((-3.1415925 - fVar3) - fVar2 < 0.0) {
    fVar1 = fVar2;
  }
  fVar8 = fVar1 * fVar1;
  fVar3 = (float)(dVar26 * 0.01745329238474369);
  local_e0 = 0xb94fb21d;
  fVar12 = fVar4 * fVar4 * fVar7;
  fVar13 = fVar4 * fVar12;
  fVar11 = fVar8 * fVar8 * fVar1;
  fVar2 = fVar8 * fVar11;
  local_e8 = -(fVar4 * fVar13 * 2.601887e-06 +
              fVar13 * -0.0001980741 + fVar12 * 0.0083330255 + fVar4 * fVar7 * -0.16666657 + fVar7);
  fVar4 = fVar8 * fVar2;
  fVar1 = fVar2 * -0.0001980741 + fVar11 * 0.0083330255 + fVar8 * fVar1 * -0.16666657 + fVar1;
  fVar2 = local_e8 / fVar14;
  fVar7 = (fVar4 * 2.601887e-06 + fVar1) / fVar16;
  dVar26 = dVar27;
  if (0.0 - fVar14 < 0.0) {
    dVar26 = (double)(local_140 * fVar2);
  }
  dVar23 = dVar27;
  if (0.0 - fVar14 < 0.0) {
    dVar23 = (double)(local_13c * fVar2);
  }
  dVar24 = dVar27;
  if (0.0 - fVar14 < 0.0) {
    dVar24 = (double)(local_138 * fVar2);
  }
  if (fVar14 - 0.0 < 0.0) {
    dVar26 = (double)(local_140 * fVar2);
  }
  if (fVar14 - 0.0 < 0.0) {
    dVar23 = (double)(local_13c * fVar2);
  }
  if (fVar14 - 0.0 < 0.0) {
    dVar24 = (double)(local_138 * fVar2);
  }
  fVar2 = fVar3 + 1.5707963;
  dVar20 = dVar27;
  if (0.0 - fVar16 < 0.0) {
    dVar20 = (double)(local_12c * fVar7);
  }
  dVar22 = dVar27;
  if (0.0 - fVar16 < 0.0) {
    dVar22 = (double)(local_130 * fVar7);
  }
  dVar18 = dVar27;
  if (0.0 - fVar16 < 0.0) {
    dVar18 = (double)(local_128 * fVar7);
  }
  if (fVar16 - 0.0 < 0.0) {
    dVar20 = (double)(local_12c * fVar7);
  }
  if (fVar16 - 0.0 < 0.0) {
    dVar22 = (double)(local_130 * fVar7);
  }
  if (fVar16 - 0.0 < 0.0) {
    dVar18 = (double)(local_128 * fVar7);
  }
  local_c4 = (float)(dVar23 + dVar20);
  local_c8 = (float)(dVar24 + dVar18);
  fVar7 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar7 = fVar2;
  }
  local_c0 = (float)(dVar26 + dVar22);
  local_cc = 0xc0490fda;
  fVar11 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar7 < 0.0) {
    fVar11 = fVar7;
  }
  fVar2 = 3.1415925 - fVar3;
  if (fVar3 - (3.1415925 - fVar3) < 0.0) {
    fVar2 = fVar3;
  }
  fVar12 = fVar11 * fVar11;
  fVar13 = SQRT(local_118 * local_118 + local_120 * local_120 + local_11c * local_11c);
  local_d0 = 0xbe2aaaa4;
  local_d4 = 0x3c08873e;
  local_d8 = SQRT(local_c8 * local_c8 + local_c0 * local_c0 + local_c4 * local_c4);
  fVar7 = -3.1415925 - fVar3;
  if ((-3.1415925 - fVar3) - fVar2 < 0.0) {
    fVar7 = fVar2;
  }
  fVar9 = fVar12 * fVar12 * fVar11;
  fVar3 = fVar7 * fVar7;
  fVar10 = fVar12 * fVar9;
  fVar2 = fVar3 * fVar3 * fVar7;
  fVar8 = fVar3 * fVar2;
  local_dc = 0x362e9c14;
  fVar1 = -(fVar4 * 2.601887e-06 + fVar1) / fVar14;
  fVar11 = (fVar12 * fVar10 * 2.601887e-06 +
           fVar10 * -0.0001980741 + fVar9 * 0.0083330255 + fVar12 * fVar11 * -0.16666657 + fVar11) /
           local_d8;
  fVar4 = local_e8 / fVar16;
  fVar3 = (fVar3 * fVar8 * 2.601887e-06 +
          fVar8 * -0.0001980741 + fVar2 * 0.0083330255 + fVar3 * fVar7 * -0.16666657 + fVar7) /
          fVar13;
  dVar26 = dVar27;
  if (0.0 - fVar14 < 0.0) {
    dVar26 = (double)(local_140 * fVar1);
  }
  dVar23 = dVar27;
  if (0.0 - local_d8 < 0.0) {
    dVar23 = (double)(local_c4 * fVar11);
  }
  dVar24 = dVar27;
  if (0.0 - local_d8 < 0.0) {
    dVar24 = (double)(local_c8 * fVar11);
  }
  dVar20 = dVar27;
  if (0.0 - local_d8 < 0.0) {
    dVar20 = (double)(local_c0 * fVar11);
  }
  if (local_d8 - 0.0 < 0.0) {
    dVar23 = (double)(local_c4 * fVar11);
  }
  if (local_d8 - 0.0 < 0.0) {
    dVar24 = (double)(local_c8 * fVar11);
  }
  if (local_d8 - 0.0 < 0.0) {
    dVar20 = (double)(local_c0 * fVar11);
  }
  dVar22 = dVar27;
  if (0.0 - fVar14 < 0.0) {
    dVar22 = (double)(local_138 * fVar1);
  }
  if (fVar14 - 0.0 < 0.0) {
    dVar26 = (double)(local_140 * fVar1);
  }
  dVar18 = dVar27;
  if (0.0 - fVar13 < 0.0) {
    dVar18 = (double)(local_118 * fVar3);
  }
  dVar19 = dVar27;
  if (0.0 - fVar13 < 0.0) {
    dVar19 = (double)(local_11c * fVar3);
  }
  dVar21 = dVar27;
  if (0.0 - fVar13 < 0.0) {
    dVar21 = (double)(local_120 * fVar3);
  }
  if (fVar13 - 0.0 < 0.0) {
    dVar18 = (double)(local_118 * fVar3);
  }
  if (fVar13 - 0.0 < 0.0) {
    dVar19 = (double)(local_11c * fVar3);
  }
  if (fVar13 - 0.0 < 0.0) {
    dVar21 = (double)(local_120 * fVar3);
  }
  dVar25 = dVar27;
  if (0.0 - fVar16 < 0.0) {
    dVar25 = (double)(local_130 * fVar4);
  }
  local_158 = (float)(dVar24 + dVar18);
  local_15c = (float)(dVar23 + dVar19);
  local_160 = (float)(dVar20 + dVar21);
  if (fVar14 - 0.0 < 0.0) {
    dVar22 = (double)(local_138 * fVar1);
  }
  dVar23 = dVar27;
  if (0.0 - fVar16 < 0.0) {
    dVar23 = (double)(local_128 * fVar4);
  }
  dVar24 = dVar27;
  if (0.0 - fVar14 < 0.0) {
    dVar24 = (double)(local_13c * fVar1);
  }
  if (fVar16 - 0.0 < 0.0) {
    dVar25 = (double)(local_130 * fVar4);
  }
  if (fVar16 - 0.0 < 0.0) {
    dVar23 = (double)(local_128 * fVar4);
  }
  if (fVar14 - 0.0 < 0.0) {
    dVar24 = (double)(local_13c * fVar1);
  }
  fVar3 = pfVar6[0x19];
  dVar20 = dVar27;
  if (0.0 - fVar16 < 0.0) {
    dVar20 = (double)(local_12c * fVar4);
  }
  fVar14 = fVar3 + 1.5707963;
  fVar1 = (float)(dVar26 + dVar25);
  fVar2 = (float)(dVar22 + dVar23);
  if (fVar16 - 0.0 < 0.0) {
    dVar20 = (double)(local_12c * fVar4);
  }
  fVar4 = (float)(dVar24 + dVar20);
  local_e4 = fVar2 * local_160 - fVar1 * local_158;
  fVar16 = fVar4 * local_158 - fVar2 * local_15c;
  fVar7 = 3.1415925 - fVar14;
  if (fVar14 - (3.1415925 - fVar14) < 0.0) {
    fVar7 = fVar14;
  }
  local_174 = 0;
  fVar12 = fVar1 * local_15c - fVar4 * local_160;
  fVar11 = -3.1415925 - fVar14;
  if ((-3.1415925 - fVar14) - fVar7 < 0.0) {
    fVar11 = fVar7;
  }
  fVar14 = 3.1415925 - fVar3;
  if (fVar3 - (3.1415925 - fVar3) < 0.0) {
    fVar14 = fVar3;
  }
  fVar7 = fVar11 * fVar11;
  fVar8 = SQRT(fVar12 * fVar12 + fVar16 * fVar16 + local_e4 * local_e4);
  fVar13 = -3.1415925 - fVar3;
  if ((-3.1415925 - fVar3) - fVar14 < 0.0) {
    fVar13 = fVar14;
  }
  fVar17 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar4 * fVar4);
  fVar9 = fVar7 * fVar7 * fVar11;
  fVar15 = fVar13 * fVar13;
  fVar10 = fVar7 * fVar9;
  fVar14 = fVar15 * fVar15 * fVar13;
  fVar3 = fVar15 * fVar14;
  fVar7 = (fVar7 * fVar10 * 2.601887e-06 +
          fVar10 * -0.0001980741 + fVar9 * 0.0083330255 + fVar7 * fVar11 * -0.16666657 + fVar11) /
          fVar8;
  fVar3 = (fVar15 * fVar3 * 2.601887e-06 +
          fVar3 * -0.0001980741 + fVar14 * 0.0083330255 + fVar15 * fVar13 * -0.16666657 + fVar13) /
          fVar17;
  dVar26 = dVar27;
  if (0.0 - fVar8 < 0.0) {
    dVar26 = (double)(fVar12 * fVar7);
  }
  dVar23 = dVar27;
  if (0.0 - fVar8 < 0.0) {
    dVar23 = (double)(local_e4 * fVar7);
  }
  dVar24 = dVar27;
  if (0.0 - fVar8 < 0.0) {
    dVar24 = (double)(fVar16 * fVar7);
  }
  if (fVar8 - 0.0 < 0.0) {
    dVar26 = (double)(fVar12 * fVar7);
  }
  if (fVar8 - 0.0 < 0.0) {
    dVar23 = (double)(local_e4 * fVar7);
  }
  if (fVar8 - 0.0 < 0.0) {
    dVar24 = (double)(fVar16 * fVar7);
  }
  dVar20 = dVar27;
  if (0.0 - fVar17 < 0.0) {
    dVar20 = (double)(fVar3 * fVar2);
  }
  dVar22 = dVar27;
  if (0.0 - fVar17 < 0.0) {
    dVar22 = (double)(fVar3 * fVar4);
  }
  dVar18 = dVar27;
  if (0.0 - fVar17 < 0.0) {
    dVar18 = (double)(fVar3 * fVar1);
  }
  if (fVar17 - 0.0 < 0.0) {
    dVar20 = (double)(fVar3 * fVar2);
  }
  if (fVar17 - 0.0 < 0.0) {
    dVar22 = (double)(fVar3 * fVar4);
  }
  if (fVar17 - 0.0 < 0.0) {
    dVar18 = (double)(fVar3 * fVar1);
  }
  local_178 = (float)(dVar26 + dVar20);
  local_17c = (float)(dVar23 + dVar22);
  local_180 = (float)(dVar24 + dVar18);
  fVar3 = pfVar6[0x19];
  fVar14 = fVar3 + 1.5707963;
  fVar7 = 3.1415925 - fVar3;
  if (fVar3 - (3.1415925 - fVar3) < 0.0) {
    fVar7 = fVar3;
  }
  fVar11 = 3.1415925 - fVar14;
  if (fVar14 - (3.1415925 - fVar14) < 0.0) {
    fVar11 = fVar14;
  }
  fVar13 = -3.1415925 - fVar3;
  if ((-3.1415925 - fVar3) - fVar7 < 0.0) {
    fVar13 = fVar7;
  }
  fVar7 = fVar13 * fVar13;
  fVar3 = -3.1415925 - fVar14;
  if ((-3.1415925 - fVar14) - fVar11 < 0.0) {
    fVar3 = fVar11;
  }
  fVar14 = fVar3 * fVar3;
  fVar11 = fVar7 * fVar7 * fVar13;
  fVar9 = fVar7 * fVar11;
  fVar10 = fVar14 * fVar14 * fVar3;
  fVar15 = fVar14 * fVar10;
  local_164 = 0;
  local_154 = 0;
  local_148 = 0;
  local_14c = 0;
  local_150 = 0;
  local_144 = 0x3f800000;
  fVar7 = -(fVar7 * fVar9 * 2.601887e-06 +
           fVar9 * -0.0001980741 + fVar11 * 0.0083330255 + fVar7 * fVar13 * -0.16666657 + fVar13) /
          fVar8;
  fVar3 = (fVar14 * fVar15 * 2.601887e-06 +
          fVar15 * -0.0001980741 + fVar10 * 0.0083330255 + fVar14 * fVar3 * -0.16666657 + fVar3) /
          fVar17;
  dVar26 = dVar27;
  if (0.0 - fVar8 < 0.0) {
    dVar26 = (double)(fVar12 * fVar7);
  }
  dVar23 = dVar27;
  if (0.0 - fVar8 < 0.0) {
    dVar23 = (double)(local_e4 * fVar7);
  }
  dVar24 = dVar27;
  if (0.0 - fVar8 < 0.0) {
    dVar24 = (double)(fVar16 * fVar7);
  }
  if (fVar8 - 0.0 < 0.0) {
    dVar26 = (double)(fVar12 * fVar7);
  }
  if (fVar8 - 0.0 < 0.0) {
    dVar23 = (double)(local_e4 * fVar7);
  }
  if (fVar8 - 0.0 < 0.0) {
    dVar24 = (double)(fVar16 * fVar7);
  }
  dVar20 = dVar27;
  if (0.0 - fVar17 < 0.0) {
    dVar20 = (double)(fVar3 * fVar2);
  }
  dVar22 = dVar27;
  if (0.0 - fVar17 < 0.0) {
    dVar22 = (double)(fVar3 * fVar4);
  }
  dVar18 = dVar27;
  if (0.0 - fVar17 < 0.0) {
    dVar18 = (double)(fVar3 * fVar1);
  }
  if (fVar17 - 0.0 < 0.0) {
    dVar20 = (double)(fVar3 * fVar2);
  }
  if (fVar17 - 0.0 < 0.0) {
    dVar22 = (double)(fVar3 * fVar4);
  }
  if (fVar17 - 0.0 < 0.0) {
    dVar18 = (double)(fVar3 * fVar1);
  }
  local_168 = (float)(dVar26 + dVar20);
  local_16c = (float)(dVar23 + dVar22);
  local_170 = (float)(dVar24 + dVar18);
  MB_MtxToEuler((int)&local_180,param_3);
  (param_3->bSphere).rad = 0.0;
  fVar3 = *pfVar6;
  dVar24 = (double)local_d8;
  fVar4 = (float)((double)local_ec / dVar24);
  dVar23 = (double)SQRT(local_118 * local_118 + local_120 * local_120 + local_11c * local_11c);
  dVar26 = dVar27;
  if (dVar27 - dVar24 < 0.0) {
    dVar26 = (double)(local_c8 * fVar4);
  }
  dVar20 = dVar27;
  if (dVar27 - dVar24 < 0.0) {
    dVar20 = (double)(local_c0 * fVar4);
  }
  dVar22 = dVar27;
  if (dVar27 - dVar24 < 0.0) {
    dVar22 = (double)(local_c4 * fVar4);
  }
  if (dVar24 - dVar27 < 0.0) {
    dVar26 = (double)(local_c8 * fVar4);
  }
  if (dVar24 - dVar27 < 0.0) {
    dVar20 = (double)(local_c0 * fVar4);
  }
  if (dVar24 - dVar27 < 0.0) {
    dVar22 = (double)(local_c4 * fVar4);
  }
  fVar4 = (float)((double)local_f0 / dVar23);
  dVar24 = dVar27;
  if (dVar27 - dVar23 < 0.0) {
    dVar24 = (double)(local_120 * fVar4);
  }
  dVar18 = dVar27;
  if (dVar27 - dVar23 < 0.0) {
    dVar18 = (double)(local_11c * fVar4);
  }
  dVar19 = dVar27;
  if (dVar27 - dVar23 < 0.0) {
    dVar19 = (double)(local_118 * fVar4);
  }
  if (dVar23 - dVar27 < 0.0) {
    dVar24 = (double)(local_120 * fVar4);
  }
  if (dVar23 - dVar27 < 0.0) {
    dVar18 = (double)(local_11c * fVar4);
  }
  if (dVar23 - dVar27 < 0.0) {
    dVar19 = (double)(local_118 * fVar4);
  }
  *param_2 = (float)((double)fVar3 + dVar24);
  fVar4 = pfVar6[1];
  param_2[1] = (float)((double)fVar4 + dVar18);
  fVar1 = pfVar6[2];
  param_2[2] = (float)((double)fVar1 + dVar19);
  param_2[3] = pfVar6[3];
  *param_2 = (float)((double)(float)((double)fVar3 + dVar24) + dVar20);
  param_2[1] = (float)((double)(float)((double)fVar4 + dVar18) + dVar22);
  param_2[2] = (float)((double)(float)((double)fVar1 + dVar19) + dVar26);
  return;
}


// 0x03f3c7c (0xdc bytes)
void M987_003f3c7c(int param_1,float *param_2)

{
  longlong lVar1;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  GPiece<72> auStack_50;
  
  local_6c = param_2[1];
  local_68 = param_2[2];
  local_70 = *param_2;
  lVar1 = (ulonglong)*(uint *)(param_1 + 0x78) + 0x10;
  local_84 = 0;
  local_90 = local_68 * local_68 - local_70 * local_6c;
  local_88 = -(local_68 * local_70 - -(local_6c * local_6c));
  local_8c = local_70 * local_70 - -(local_6c * local_68);
  local_78 = local_70 * local_8c - local_6c * local_90;
  local_74 = 0;
  local_7c = local_68 * local_90 - local_70 * local_88;
  local_80 = local_6c * local_88 - local_68 * local_8c;
  local_64 = param_2[3];
  local_58 = 0;
  local_5c = 0;
  local_60 = 0;
  local_54 = 0x3f800000;
  MB_MtxToEuler((int)&local_90,(MobyInstance *)lVar1);
  FastEulerToMtx1(auStack_50,lVar1);
  return;
}


