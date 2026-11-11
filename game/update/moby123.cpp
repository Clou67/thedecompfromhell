// game/update/moby123.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x212cc0-0x213910
#include <stdlib.h>
#include "game/update/moby123.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x0212cc0 (0xc50 bytes)
// inlined: FastRSqrt @0x213544
// strings: 00212cb0: '?fffA ' (raw)

/* Moby 123 */

void UpdateMoby_123(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  f32 *pfVar5;
  float fVar6;
  float fVar7;
  int iVar9;
  uint uVar10;
  longlong lVar8;
  longlong lVar11;
  double dVar12;
  undefined8 uVar13;
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
  GPiece<16> local_280;
  GPiece<16> local_270;
  GPiece<16> local_260;
  float afStack_250 [4];
  float local_240 [2];
  f32 local_238;
  undefined4 local_234;
  float local_230;
  float local_22c;
  undefined4 local_228;
  undefined4 local_220;
  float local_21c;
  float local_218;
  undefined4 local_214;
  f32 local_210;
  f32 local_20c;
  f32 local_208;
  f32 local_204;
  float afStack_200 [4];
  float local_1f0 [3];
  undefined4 local_1e4;
  float local_1e0;
  float local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d0;
  float local_1cc;
  float local_1c8;
  undefined4 local_1c4;
  f32 local_1c0;
  f32 local_1bc;
  f32 local_1b8;
  f32 local_1b4;
  float afStack_1b0 [4];
  f32 local_1a0;
  f32 local_19c;
  f32 local_198;
  f32 local_194;
  f32 local_190;
  f32 local_18c;
  f32 local_188;
  float local_184;
  GPiece<16> auStack_180;
  float local_170;
  float local_16c;
  float local_168;
  GPiece<16> auStack_160;
  float local_150;
  float local_14c;
  undefined4 local_148;
  undefined4 local_144;
  MobyInstance *local_140;
  undefined4 local_13c;
  undefined1 local_138;
  undefined1 local_137;
  MOBY_OCLASSES local_136;
  undefined4 local_134;
  undefined4 local_130;
  Vec4 aVStack_120 [4];
  Vec4 aVStack_e0 [4];
  
  lVar8 = (longlong)(int)moby;
  fVar2 = (moby->pos).x;
  pfVar5 = (f32 *)moby->pVar;
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (pfVar5[9] == 0.0) {
        pfVar5[9] = 4.0;
        fVar2 = (moby->pos).x;
      }
      *pfVar5 = fVar2;
      pfVar5[1] = (moby->pos).y;
      pfVar5[2] = (moby->pos).z;
      pfVar5[3] = (moby->pos).w;
      fVar2 = pfVar5[8];
      moby->unk58 = pfVar5[0xc] * 0.6666667;
      pfVar5[10] = pfVar5[10] * 0.017453292;
      if (fVar2 == 0.0) {
        fVar2 = (moby->rotation).z;
        moby->state = '\x01';
        pfVar5[0xb] = fVar2;
      }
      else if ((int)fVar2 < 3) {
        moby->state = '\x03';
      }
      else {
        fVar2 = (moby->rotation).z;
        moby->state = '\x02';
        pfVar5[0xb] = fVar2;
      }
    }
    else {
      local_240[0] = 0.0;
      local_240[1] = 0.0;
      local_234 = 0;
      local_238 = pfVar5[9];
      local_220 = 0;
      local_21c = 0.0;
      local_218 = 0.0;
      local_214 = 0;
      dVar12 = (double)FastWrapRot
                                 (pfVar5[10],
                                  (360.0 / ((pfVar5[9] * 6.2831855) / pfVar5[0xc])) * 0.017453292 *
                                  g_FrameTime);
      pfVar5[10] = (float)dVar12;
      moby->unk58 = pfVar5[0xc] * 0.6666667;
      fVar3 = pfVar5[0xb] + 1.5707963;
      fVar6 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar6 = fVar3;
      }
      fVar4 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar6 < 0.0) {
        fVar4 = fVar6;
      }
      fVar3 = fVar4 * fVar4;
      fVar6 = fVar3 * fVar3 * fVar4;
      fVar7 = fVar3 * fVar6;
      local_230 = fVar3 * fVar7 * 2.601887e-06 +
                  fVar7 * -0.0001980741 + fVar6 * 0.0083330255 + fVar3 * fVar4 * -0.16666657 + fVar4
      ;
      fVar3 = pfVar5[0xb];
      local_228 = 0;
      fVar6 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar6 = fVar3;
      }
      fVar4 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar6 < 0.0) {
        fVar4 = fVar6;
      }
      fVar3 = fVar4 * fVar4;
      fVar6 = fVar3 * fVar3 * fVar4;
      fVar7 = fVar3 * fVar6;
      local_22c = fVar3 * fVar7 * 2.601887e-06 +
                  fVar7 * -0.0001980741 + fVar6 * 0.0083330255 + fVar3 * fVar4 * -0.16666657 + fVar4
      ;
      MB_RotateQuatAxisAngle(pfVar5[10],afStack_250,local_240);
      FastVecAdd(&local_210,pfVar5,afStack_250);
      (moby->pos).x = local_210;
      (moby->pos).y = local_20c;
      (moby->pos).z = local_208;
      (moby->pos).w = local_204;
      dVar12 = (double)FastWrapRot(pfVar5[0xb],1.5707964);
      local_218 = (float)dVar12;
      dVar12 = (double)FastWrapRot(-pfVar5[10],3.1415927);
      local_21c = (float)dVar12;
      FastEulerToMtx1(aVStack_120,&local_220);
      FastApplyTransform((Vec4 *)(lVar8 + 0xc0),aVStack_120);
      MB_NormalizeMtx3Columns(lVar8 + 0xc0);
      moby->modeBits = moby->modeBits | LOCK_ROTATION;
    }
  }
  else if (bVar1 < 3) {
    dVar12 = 0.0;
    local_1f0[0] = 0.0;
    local_1f0[1] = 0.0;
    local_1e4 = 0;
    local_1d0 = 0;
    local_1f0[2] = -pfVar5[9];
    local_1cc = 0.0;
    local_1c8 = 0.0;
    local_1c4 = 0;
    dVar19 = 1.570796251296997;
    dVar24 = 3.141592502593994;
    fVar3 = pfVar5[10] + 1.5707963;
    dVar25 = -3.141592502593994;
    dVar23 = -0.16666656732559204;
    dVar16 = 0.008333025500178337;
    dVar15 = -0.0001980741071747616;
    dVar22 = 2.601886990305502e-06;
    dVar14 = 1.5707963705062866;
    fVar6 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar6 = fVar3;
    }
    fVar4 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar6 < 0.0) {
      fVar4 = fVar6;
    }
    fVar7 = fVar4 * fVar4;
    fVar3 = fVar7 * fVar7 * fVar4;
    fVar6 = fVar7 * fVar3;
    dVar21 = (double)FastAddRots
                               ((fVar7 * fVar6 * 2.601887e-06 +
                                fVar6 * -0.0001980741 +
                                fVar3 * 0.0083330255 + fVar7 * fVar4 * -0.16666657 + fVar4) *
                                1.5707964);
    dVar18 = dVar12;
    if (pfVar5[8] == 5.60519e-45) {
      dVar18 = dVar14;
    }
    uVar13 = FastWrapRot((float)dVar21,(float)dVar18);
    dVar18 = (double)FastWrapRot
                               (pfVar5[10],
                                (360.0 / ((pfVar5[9] * 6.2831855) / pfVar5[0xc])) * 0.017453292 *
                                g_FrameTime);
    dVar21 = (double)(float)(dVar18 + dVar19);
    pfVar5[10] = (float)dVar18;
    dVar18 = (double)(float)(dVar24 - dVar21);
    if (dVar21 - (double)(float)(dVar24 - dVar21) < 0.0) {
      dVar18 = dVar21;
    }
    dVar17 = (double)(float)(dVar25 - dVar21);
    if ((double)(float)(dVar25 - dVar21) - dVar18 < 0.0) {
      dVar17 = dVar18;
    }
    dVar21 = (double)(float)(dVar17 * dVar17);
    dVar18 = (double)(float)(dVar21 * (double)(float)(dVar21 * dVar17));
    dVar20 = (double)(float)(dVar21 * dVar18);
    dVar21 = (double)FastAddRots
                               ((float)((double)(float)((double)(float)(dVar21 * dVar20) * dVar22 +
                                                       (double)(float)(dVar20 * dVar15 +
                                                                      (double)(float)(dVar18 * 
                                                  dVar16 + (double)(float)((double)(float)(dVar21 * 
                                                  dVar17) * dVar23 + dVar17)))) * dVar14));
    dVar18 = dVar12;
    if (pfVar5[8] == 5.60519e-45) {
      dVar18 = dVar14;
    }
    dVar18 = (double)FastWrapRot((float)dVar21,(float)dVar18);
    dVar21 = (double)FastDiffRots(dVar18,uVar13);
    moby->unk58 = (float)((double)pfVar5[9] * dVar21) / (g_FrameTime * 1.5);
    dVar21 = (double)(float)((double)pfVar5[0xb] + dVar19);
    dVar19 = (double)(float)(dVar24 - dVar21);
    if (dVar21 - (double)(float)(dVar24 - dVar21) < 0.0) {
      dVar19 = dVar21;
    }
    dVar17 = (double)(float)(dVar25 - dVar21);
    if ((double)(float)(dVar25 - dVar21) - dVar19 < 0.0) {
      dVar17 = dVar19;
    }
    dVar19 = (double)(float)(dVar17 * dVar17);
    dVar20 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar17));
    dVar21 = (double)(float)(dVar19 * dVar20);
    local_1e0 = (float)((double)(float)(dVar19 * dVar21) * dVar22 +
                       (double)(float)(dVar21 * dVar15 +
                                      (double)(float)(dVar20 * dVar16 +
                                                     (double)(float)((double)(float)(dVar19 * dVar17
                                                                                    ) * dVar23 +
                                                                    dVar17))));
    dVar21 = (double)pfVar5[0xb];
    local_1d8 = 0;
    dVar19 = (double)(float)(dVar24 - dVar21);
    if (dVar21 - (double)(float)(dVar24 - dVar21) < 0.0) {
      dVar19 = dVar21;
    }
    dVar24 = (double)(float)(dVar25 - dVar21);
    if ((double)(float)(dVar25 - dVar21) - dVar19 < 0.0) {
      dVar24 = dVar19;
    }
    dVar19 = (double)(float)(dVar24 * dVar24);
    dVar21 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar24));
    dVar25 = (double)(float)(dVar19 * dVar21);
    local_1dc = (float)((double)(float)(dVar19 * dVar25) * dVar22 +
                       (double)(float)(dVar25 * dVar15 +
                                      (double)(float)(dVar21 * dVar16 +
                                                     (double)(float)((double)(float)(dVar19 * dVar24
                                                                                    ) * dVar23 +
                                                                    dVar24))));
    MB_RotateQuatAxisAngle((float)dVar18,afStack_200,local_1f0);
    FastVecAdd(&local_1c0,pfVar5,afStack_200);
    (moby->pos).x = local_1c0;
    (moby->pos).y = local_1bc;
    (moby->pos).z = local_1b8;
    (moby->pos).w = local_1b4;
    dVar19 = (double)FastWrapRot(pfVar5[0xb],(float)dVar14);
    local_1c8 = (float)dVar19;
    dVar12 = (double)FastWrapRot((float)-dVar18,(float)dVar12);
    local_1cc = (float)dVar12;
    FastEulerToMtx1(aVStack_e0,&local_1d0);
    FastApplyTransform((Vec4 *)(lVar8 + 0xc0),aVStack_e0);
    MB_NormalizeMtx3Columns(lVar8 + 0xc0);
    moby->modeBits = moby->modeBits | LOCK_ROTATION;
  }
  else if (bVar1 < 4) {
    dVar15 = (double)pfVar5[9];
    dVar16 = 1.570796251296997;
    dVar23 = 3.141592502593994;
    fVar3 = pfVar5[10] + 1.5707963;
    dVar25 = -3.141592502593994;
    dVar24 = -0.16666656732559204;
    dVar19 = 0.008333025500178337;
    dVar12 = -0.0001980741071747616;
    fVar6 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar6 = fVar3;
    }
    dVar22 = 2.601886990305502e-06;
    fVar4 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar6 < 0.0) {
      fVar4 = fVar6;
    }
    fVar7 = fVar4 * fVar4;
    fVar3 = fVar7 * fVar7 * fVar4;
    fVar6 = fVar7 * fVar3;
    dVar21 = (double)(fVar7 * fVar6 * 2.601887e-06 +
                     fVar6 * -0.0001980741 +
                     fVar3 * 0.0083330255 + fVar7 * fVar4 * -0.16666657 + fVar4);
    dVar14 = (double)FastWrapRot
                               (pfVar5[10],
                                (360.0 / ((float)(dVar15 * 6.2831854820251465) / pfVar5[0xc])) *
                                0.017453292 * g_FrameTime);
    dVar18 = (double)(float)(dVar14 + dVar16);
    pfVar5[10] = (float)dVar14;
    dVar16 = (double)(float)(dVar23 - dVar18);
    if (dVar18 - (double)(float)(dVar23 - dVar18) < 0.0) {
      dVar16 = dVar18;
    }
    dVar23 = (double)(float)(dVar25 - dVar18);
    if ((double)(float)(dVar25 - dVar18) - dVar16 < 0.0) {
      dVar23 = dVar16;
    }
    dVar25 = (double)(float)(dVar23 * dVar23);
    dVar14 = (double)(float)(dVar25 * (double)(float)(dVar25 * dVar23));
    dVar16 = (double)(float)(dVar25 * dVar14);
    fVar3 = (moby->rotation).z;
    fVar2 = pfVar5[8];
    fVar6 = (float)((double)(float)(dVar25 * dVar16) * dVar22 +
                   (double)(float)(dVar16 * dVar12 +
                                  (double)(float)(dVar14 * dVar19 +
                                                 (double)(float)((double)(float)(dVar25 * dVar23) *
                                                                 dVar24 + dVar23)))) * pfVar5[9];
    moby->unk58 = -(float)(dVar21 * dVar15 - (double)fVar6) / (g_FrameTime * 1.5);
    if (fVar2 == 2.8026e-45) {
      fVar3 = 0.0;
    }
    fVar4 = 0.0;
    if (fVar2 == 2.8026e-45) {
      fVar4 = 1.5707964;
    }
    MB_SphericalToVector(fVar6,fVar3,fVar4,afStack_1b0);
    FastVecAdd(&local_1a0,pfVar5,afStack_1b0);
    (moby->pos).x = local_1a0;
    (moby->pos).y = local_19c;
    (moby->pos).z = local_198;
    (moby->pos).w = local_194;
  }
  lVar11 = lVar8 + 0x10;
  fVar6 = (moby->transform).v2.x * 12.0;
  fVar4 = (moby->transform).v2.y * 12.0;
  fVar3 = (moby->transform).v2.z * 12.0;
  dVar24 = 0.0;
  FastVecAdd(&local_190,lVar11,local_260);
  fVar3 = fVar3 * fVar3 + fVar6 * fVar6 + fVar4 * fVar4;
  local_13c = 0x10001;
  dVar25 = 1.0;
  local_134 = 0x3f800000;
  local_130 = 1;
  local_136 = moby->oClass;
  dVar12 = dVar24;
  dVar19 = dVar24;
  if ((double)SQRT(fVar3) != dVar24) {
    fVar7 = 1.0 / SQRT(fVar3);
    fVar7 = -(fVar3 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    fVar7 = -(fVar3 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    fVar7 = -(fVar3 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    dVar12 = (double)(fVar6 * fVar7);
    dVar19 = (double)(fVar4 * fVar7);
  }
  local_150 = (float)dVar12;
  local_14c = (float)dVar19;
  local_148 = 0x3f800000;
  local_144 = 0x45afdf66;
  local_138 = 1;
  local_137 = 1;
  local_140 = moby;
  FastVecSub(auStack_180,lVar11,local_280);
  CollLine(lVar11,local_270,9,lVar8,&local_150);
  iVar9 = CollLine(lVar11,local_270,2,0,0);
  if (iVar9 == 0) {
    pfVar5[4] = local_190;
    pfVar5[5] = local_18c;
    pfVar5[6] = local_188;
  }
  else {
    pfVar5[4] = g_CollOutput.ip.x;
    pfVar5[5] = g_CollOutput.ip.y;
    pfVar5[6] = g_CollOutput.ip.z;
    local_184 = g_CollOutput.ip.w;
  }
  pfVar5[7] = local_184;
  iVar9 = 0;
  if (0 < DAT_007685ac) {
    dVar12 = 0.5;
    dVar19 = 0.8999999761581421;
    dVar23 = 10.0;
    do {
      uVar10 = rand();
      dVar16 = -1.0;
      if ((uVar10 & 1) != 0) {
        dVar16 = dVar25;
      }
      dVar15 = (double)MB_randRangeFloat
                                 ((float)((double)DAT_007685b4 * dVar12),DAT_007685b4);
      lVar8 = FastDoubleToInt((double)(float)(dVar15 * (double)animationSpeed));
      FastVecSub(&local_170,pfVar5 + 4,lVar11);
      dVar22 = (double)SQRT((float)((double)local_168 * dVar16) *
                            (float)((double)local_168 * dVar16) +
                            (float)((double)local_170 * dVar16) *
                            (float)((double)local_170 * dVar16) +
                            (float)((double)local_16c * dVar16) *
                            (float)((double)local_16c * dVar16));
      MB_randRangeFloat((float)dVar24,(float)dVar19);
      FastVecAddSelf(auStack_160,local_270,local_260);
      dVar15 = (double)(float)((double)g_FrameTime * dVar23);
      dVar16 = (double)FastIntToDouble((int)(lVar8 << 2));
      MB_randRangeFloat((float)dVar15,(float)(dVar22 / dVar16));
      dVar16 = (double)DAT_007685b0;
      MB_randInt(0xff);
      SpawnPart_60(dVar16,local_270,local_260,0x604040ff);
      iVar9 = iVar9 + 1;
    } while (iVar9 < DAT_007685ac);
  }
  RegisterFuncForMoby(&PTR_M1230_00213920_007095e0,moby);
  return;
}


