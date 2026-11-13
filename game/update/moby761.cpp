// game/update/moby761.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x44fea8-0x450eb4
#include "game/update/moby761.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update.h"
#include "game/update/moby760.h"
#include "game/update/moby809.h"
#include "game/vuchain.h"
#include "game/water.h"
#include "idol/fastfunc.h"

// 0x044fea8 (0xd6c bytes)
// inlined: FastRSqrt @0x44ffec, FastRSqrt @0x450070, FastRSqrt @0x450150
void M761_0044fea8(ulonglong param_1)

{
  longlong lVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
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
  float fVar18;
  float fVar19;
  float fVar20;
  short sVar21;
  short sVar22;
  short *psVar23;
  short *psVar24;
  uint uVar25;
  ulonglong *puVar26;
  Cuboid *pCVar27;
  float *pfVar28;
  int iVar29;
  int iVar30;
  float *pfVar31;
  uint uVar32;
  uint uVar33;
  char acVar34 [4];
  undefined4 uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  undefined8 uVar38;
  int iVar40;
  int iVar41;
  undefined1 uVar42;
  ulonglong uVar39;
  longlong lVar43;
  longlong lVar44;
  int iVar45;
  longlong lVar46;
  int *piVar47;
  ulonglong unaff_r14;
  ulonglong unaff_r15;
  longlong lVar48;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong uVar49;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  int iVar50;
  ulonglong unaff_r31;
  int iVar51;
  ulonglong in_LR;
  longlong lVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar59;
  ulonglong in_f29;
  double dVar60;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar61;
  GPiece<64> local_200;
  float local_1c0 [112];
  
  uVar36 = ZEXT48(&stack0x00000000);
  lVar1 = uVar36 - 0x270;
  puVar26 = (ulonglong *)lVar1;
  *puVar26 = uVar36;
  puVar26[0x50] = in_LR;
  puVar26[0x46] = in_f24;
  puVar26[0x47] = in_f25;
  puVar26[0x48] = in_f26;
  puVar26[0x49] = in_f27;
  puVar26[0x4a] = in_f28;
  puVar26[0x4b] = in_f29;
  puVar26[0x4c] = in_f30;
  puVar26[0x4d] = in_f31;
  iVar50 = (int)param_1;
  fVar7 = *(float *)(iVar50 + 0x14);
  fVar8 = *(float *)(iVar50 + 0x10);
  fVar11 = GameCamera.posY - fVar7;
  fVar9 = *(float *)(iVar50 + 0x18);
  fVar2 = GameCamera.posX - fVar8;
  fVar12 = GameCamera.posZ - fVar9;
  puVar26[0x3c] = unaff_r22;
  psVar23 = *(short **)(iVar50 + 0x78);
  puVar26[0x42] = unaff_r28;
  bVar3 = *(byte *)(psVar23 + 0x2e);
  bVar4 = *(byte *)((int)psVar23 + 0x5f);
  puVar26[0x41] = unaff_r27;
  acVar34 = GameCamera.posW;
  bVar5 = *(byte *)(psVar23 + 0x2f);
  bVar6 = *(byte *)((int)psVar23 + 0x5d);
  dVar60 = 1.0;
  *(char (*) [4])((int)puVar26 + 0x7c) = GameCamera.posW;
  dVar59 = 0.0;
  puVar26[0x31] = param_1;
  pCVar27 = Cuboids;
  fVar10 = fVar12 * fVar12 + fVar2 * fVar2 + fVar11 * fVar11;
  iVar50 = *(int *)(psVar23 + 2);
  uVar32 = (uint)bVar4 << 0x10 | (uint)bVar5 << 8 | (uint)bVar6;
  puVar26[0x36] = unaff_r16;
  sVar21 = *psVar23;
  pCVar27 = pCVar27 + iVar50;
  sVar22 = psVar23[1];
  puVar26[0x35] = unaff_r15;
  iVar50 = *(int *)(psVar23 + 0x2a);
  puVar26[0x32] = (longlong)sVar21 + (longlong)sVar22 + (longlong)psVar23[0x20];
  puVar26[0x45] = unaff_r31;
  puVar26[0x44] = unaff_r30;
  puVar26[0x43] = unaff_r29;
  puVar26[0x40] = unaff_r26;
  puVar26[0x3f] = unaff_r25;
  puVar26[0x3e] = unaff_r24;
  puVar26[0x3d] = unaff_r23;
  puVar26[0x3b] = unaff_r21;
  puVar26[0x3a] = unaff_r20;
  puVar26[0x39] = unaff_r19;
  puVar26[0x38] = unaff_r18;
  puVar26[0x37] = unaff_r17;
  puVar26[0x34] = unaff_r14;
  dVar55 = dVar59;
  dVar56 = dVar59;
  dVar58 = dVar59;
  if (SQRT(fVar10) != 0.0) {
    fVar13 = 1.0 / SQRT(fVar10);
    fVar13 = -(fVar10 * fVar13 * fVar13 - 1.0) * fVar13 * 0.5 + fVar13;
    fVar13 = -(fVar10 * fVar13 * fVar13 - 1.0) * fVar13 * 0.5 + fVar13;
    fVar13 = -(fVar10 * fVar13 * fVar13 - 1.0) * fVar13 * 0.5 + fVar13;
    dVar58 = (double)(fVar2 * fVar13);
    dVar56 = (double)(fVar11 * fVar13);
    dVar55 = (double)(fVar12 * fVar13);
  }
  *(float *)(puVar26 + 0xe) = (float)dVar58;
  *(float *)((int)puVar26 + 0x74) = (float)dVar56;
  *(float *)(puVar26 + 0xf) = (float)dVar55;
  *(undefined4 *)((int)puVar26 + 0x8c) = 0;
  fVar2 = (float)(dVar58 * dVar58 + --(double)(float)(dVar56 * dVar56));
  dVar54 = dVar59;
  dVar53 = dVar59;
  if (SQRT(fVar2) != 0.0) {
    fVar10 = 1.0 / SQRT(fVar2);
    fVar10 = -(fVar2 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar10 = -(fVar2 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    dVar53 = (double)(-(fVar2 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10);
    dVar54 = (double)(float)(dVar58 * dVar53);
    dVar53 = -(double)(float)(dVar56 * dVar53);
  }
  *(char (*) [4])((int)puVar26 + 0xbc) = acVar34;
  *(float *)((int)puVar26 + 0x84) = (float)dVar54;
  *(float *)(puVar26 + 0x10) = (float)dVar53;
  *(float *)(puVar26 + 0x14) = fVar8;
  uVar49 = 0x3f800000;
  fVar2 = (float)(----(double)(float)(dVar56 * dVar56) + --(double)(float)(dVar58 * dVar58));
  *(float *)(puVar26 + 0x13) = (float)(dVar58 * dVar54 - (double)(float)(dVar56 * dVar53));
  *(undefined4 *)(puVar26 + 0x11) = 0;
  *(undefined4 *)((int)puVar26 + 0x9c) = 0;
  *(float *)((int)puVar26 + 0xa4) = fVar7;
  *(float *)(puVar26 + 0x15) = fVar9;
  *(undefined4 *)((int)puVar26 + 0xac) = 0x3f800000;
  *(undefined4 *)((int)puVar26 + 0xcc) = 0;
  *(float *)(puVar26 + 0x12) = (float)(dVar56 * 0.0 - (double)(float)(dVar55 * dVar54));
  *(float *)((int)puVar26 + 0x94) = (float)(dVar55 * dVar53 - 0.0);
  *(float *)(puVar26 + 0x16) = (float)-dVar58;
  *(float *)((int)puVar26 + 0xb4) = (float)-dVar56;
  *(float *)(puVar26 + 0x17) = (float)-dVar55;
  dVar54 = dVar59;
  dVar53 = dVar59;
  if (SQRT(fVar2) != 0.0) {
    fVar10 = 1.0 / SQRT(fVar2);
    fVar10 = -(fVar2 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar10 = -(fVar2 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    dVar54 = (double)(-(fVar2 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10);
    dVar54 = -(double)(float)(dVar58 * dVar54);
    dVar53 = --(double)(float)(dVar56 * dVar54);
  }
  *(float *)(puVar26 + 0x18) = (float)dVar53;
  *(float *)((int)puVar26 + 0xc4) = (float)dVar54;
  *(undefined4 *)(puVar26 + 0x19) = 0;
  *(undefined4 *)((int)puVar26 + 0xdc) = 0;
  *(float *)(puVar26 + 0x1c) = fVar8;
  *(float *)((int)puVar26 + 0xe4) = fVar7;
  *(float *)(puVar26 + 0x1d) = fVar9;
  *(float *)((int)puVar26 + 0xd4) = -(float)(dVar55 * dVar53);
  *(undefined4 *)((int)puVar26 + 0xec) = 0x3f800000;
  *(float *)(puVar26 + 0x1a) = --(float)(dVar55 * dVar54);
  *(float *)(puVar26 + 0x1b) = -(float)(dVar58 * dVar54) - -(float)(dVar56 * dVar53);
  uVar37 = GetEffectTex(iVar50 + 0x28);
  puVar26[0x2d] = uVar37;
  uVar37 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar26[0x2e] = uVar37;
  uVar37 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar26[0x2c] = uVar37;
  uVar37 = idol_draw::PackCmd(0,2,0,1,0x80);
  puVar26[0x2f] = uVar37;
  uVar38 = FUN_00502e50(0);
  SetGSReg(8,uVar38);
  uVar38 = FUN_00502f98(1,0,0,1,0,0,1,2);
  SetGSReg(0x16,uVar38);
  lVar48 = (longlong)*psVar23;
  if ((int)*psVar23 < (int)puVar26[0x32]) {
    do {
      iVar50 = (int)(lVar48 << 2);
      fVar7 = -(*(float *)(&DAT_010d6ad0 + iVar50) * DAT_0071f408 -
               *(float *)(&DAT_010d5810 + iVar50));
      iVar51 = (int)lVar48;
      bVar4 = (&DAT_010d4eb0)[iVar51];
      puVar26[0x30] = ZEXT48(&DAT_010d4eb0);
      *(float *)(&DAT_010d5810 + iVar50) = fVar7;
      uVar33 = (uint)(ZERO_MASK((uint)bVar4)) & (uint)(local_200 + -(int)local_1c0)
      ;
      pfVar28 = (float *)((int)local_1c0 + uVar33);
      if (fVar7 <= -8.0) {
        *(float *)(&DAT_010d5810 + iVar50) = fVar7 + 8.0;
      }
      iVar45 = (int)(lVar48 << 4);
      fVar7 = *(float *)(&DAT_010cde34 + iVar45);
      fVar8 = *(float *)(&DAT_010cde30 + iVar45);
      fVar9 = *(float *)(&DAT_010cde38 + iVar45);
      fVar2 = *(float *)(&DAT_010cde3c + iVar45);
      fVar10 = (pCVar27->pos).x * fVar2 +
               (pCVar27->matrix).v2.x * fVar9 +
               (pCVar27->matrix).v0.x * fVar8 + (pCVar27->matrix).v1.x * fVar7;
      dVar54 = (double)fVar10;
      fVar12 = (pCVar27->pos).y * fVar2 +
               (pCVar27->matrix).v2.y * fVar9 +
               (pCVar27->matrix).v0.y * fVar8 + (pCVar27->matrix).v1.y * fVar7;
      dVar58 = (double)fVar12;
      fVar11 = (pCVar27->pos).z * fVar2 +
               (pCVar27->matrix).v2.z * fVar9 +
               (pCVar27->matrix).v0.z * fVar8 + (pCVar27->matrix).v1.z * fVar7;
      dVar56 = (double)fVar11;
      fVar7 = (pCVar27->pos).w * fVar2 +
              (pCVar27->matrix).v2.w * fVar9 +
              (pCVar27->matrix).v0.w * fVar8 + (pCVar27->matrix).v1.w * fVar7;
      dVar55 = (double)fVar7;
      *(float *)((int)local_1c0 + uVar33 + 0x30) = fVar10;
      *(float *)((int)local_1c0 + uVar33 + 0x34) = fVar12;
      *(float *)((int)local_1c0 + uVar33 + 0x38) = fVar11;
      *(float *)((int)local_1c0 + uVar33 + 0x3c) = fVar7;
      dVar61 = (double)*(float *)(&DAT_010d2930 + iVar50);
      dVar53 = (double)*(float *)(&DAT_010d3bf0 + iVar50);
      if ((&DAT_010d5360)[iVar51] == '\0') {
        lVar43 = lVar48 * 2;
        iVar40 = (int)lVar43;
        if (*(short *)(&DAT_010d7d90 + iVar40) == 0) {
          if (*(short *)(&DAT_010d86f0 + iVar40) == 0) {
            iVar45 = FastDecTimerS16(ZEXT48(&DAT_010d9050) + lVar43 & 0xffffffff);
            if (iVar45 != 0) {
              *(short *)(&DAT_010d86f0 + iVar40) = (short)DAT_010d99bc;
            }
            uVar37 = (ulonglong)DAT_00871d80;
          }
          else {
            iVar41 = FastDecTimerS16(ZEXT48(&DAT_010d86f0) + lVar43 & 0xffffffff);
            if (iVar41 == 0) {
              dVar57 = (double)FastIntToDouble(*(undefined2 *)(&DAT_010d86f0 + iVar40));
              uVar37 = FastDoubleToInt
                                 ((double)(DAT_00871d84 * (float)(dVar57 * (double)DAT_010d99c0)));
            }
            else {
              puVar26[0x33] = uVar49;
              psVar24 = *(short **)((int)puVar26[0x31] + 0x78);
              dVar57 = (double)MB_randRangeSigned(dVar59,dVar60);
              *(float *)(&DAT_010cde30 + iVar45) = (float)dVar57;
              dVar57 = (double)MB_randRangeSigned(dVar59,dVar60);
              *(float *)(&DAT_010cde34 + iVar45) = (float)dVar57;
              dVar57 = (double)MB_randRangeSigned(dVar59,dVar60);
              *(float *)(&DAT_010cde38 + iVar45) = (float)dVar57;
              dVar57 = (double)MB_randRangeFloat
                                         (*(float *)(psVar24 + 8),*(float *)(psVar24 + 10));
              *(float *)(&DAT_010d2930 + iVar50) = (float)dVar57;
              dVar57 = (double)MB_randRangeFloat
                                         (*(float *)(psVar24 + 0xc),*(float *)(psVar24 + 0xe));
              *(float *)(&DAT_010d3bf0 + iVar50) = (float)dVar57;
              *(undefined4 *)(&DAT_010d5810 + iVar50) = 0;
              dVar57 = (double)MB_randRangeFloat
                                         (*(float *)(psVar24 + 4),*(float *)(psVar24 + 6));
              *(float *)(&DAT_010d6ad0 + iVar50) = (float)dVar57;
              *(undefined2 *)(&DAT_010d86f0 + iVar40) = 0;
              uVar35 = DAT_010d99b0;
              *(short *)(&DAT_010d7d90 + iVar40) = (short)DAT_010d99b4;
              sVar21 = *psVar24;
              (&DAT_010d5360)[iVar51] = 0;
              *(short *)(&DAT_010d9050 + iVar40) =
                   ((short)lVar48 - sVar21) * (short)uVar35 + (short)uVar35;
              uVar42 = MB_randInt(2);
              uVar37 = 0;
              *(undefined1 *)((int)puVar26[0x30] + iVar51) = uVar42;
              uVar49 = puVar26[0x33];
            }
          }
        }
        else {
          FastDecTimerS16(ZEXT48(&DAT_010d7d90) + lVar43 & 0xffffffff);
          dVar57 = (double)FastIntToDouble(*(undefined2 *)(&DAT_010d7d90 + iVar40));
          uVar37 = FastDoubleToInt
                             ((double)(DAT_00871d84 *
                                      -(float)(dVar57 * (double)DAT_010d99b8 - dVar60)));
        }
        uVar39 = idol_draw::PackCmd(0,2,0,1,0x80);
        puVar26[0x2f] = uVar39;
        fVar7 = *(float *)(&DAT_010d5810 + iVar50);
        uVar39 = 0;
        do {
          iVar50 = (int)uVar39;
          iVar45 = iVar50 * 0x10;
          bVar4 = (&DAT_00871dd0)[iVar50];
          iVar40 = (int)((uVar39 & 0x1fffffff) << 3);
          fVar8 = *(float *)(&DAT_00871d94 + iVar45);
          fVar9 = *(float *)(&DAT_00871d98 + iVar45);
          fVar2 = *(float *)(&DAT_00871dd4 + iVar40);
          *(undefined4 *)(puVar26 + iVar50 * 2 + 0x1e) = *(undefined4 *)(&DAT_00871d90 + iVar45);
          *(int *)((int)puVar26 + iVar45 + 0xfc) = (int)uVar49;
          uVar25 = *(uint *)(psVar23 + 0x1c);
          *(undefined4 *)((int)puVar26 + iVar40 + 0x144) = *(undefined4 *)(&DAT_00871dd8 + iVar40);
          *(float *)((int)puVar26 + iVar45 + 0xf4) = (float)((double)fVar8 * dVar61);
          *(float *)(puVar26 + iVar50 * 2 + 0x1f) = (float)((double)fVar9 * dVar53);
          *(float *)((int)puVar26 + iVar40 + 0x140) = fVar2 - fVar7;
          *(uint *)((int)puVar26 + (int)((uVar39 & 0xffffffff) << 2) + 0x130) =
               (uint)bVar4 * (int)((uVar37 & 0xffffffff) << 0x18) | uVar25;
          fVar8 = *(float *)((int)local_1c0 + uVar33 + 0x14);
          fVar9 = local_1c0[iVar50 * 4 + 0x11];
          fVar2 = local_1c0[iVar50 * 4 + 0x10];
          fVar10 = *(float *)((int)local_1c0 + uVar33 + 0x18);
          fVar11 = *(float *)((int)local_1c0 + uVar33 + 4);
          fVar12 = *(float *)((int)local_1c0 + uVar33 + 0x1c);
          fVar13 = *(float *)((int)local_1c0 + uVar33 + 8);
          fVar14 = local_1c0[iVar50 * 4 + 0x12];
          fVar15 = *(float *)((int)local_1c0 + uVar33 + 0xc);
          fVar16 = *(float *)((int)local_1c0 + uVar33 + 0x24);
          fVar17 = *(float *)((int)local_1c0 + uVar33 + 0x28);
          uVar39 = (ulonglong)(iVar50 + 1);
          dVar57 = (double)local_1c0[iVar50 * 4 + 0x13];
          fVar18 = *(float *)((int)local_1c0 + uVar33 + 0x2c);
          local_1c0[iVar50 * 4 + 0x10] =
               (float)(dVar57 * dVar54 +
                      (double)(*(float *)((int)local_1c0 + uVar33 + 0x20) * fVar14 +
                              *pfVar28 * fVar2 + *(float *)((int)local_1c0 + uVar33 + 0x10) * fVar9)
                      );
          local_1c0[iVar50 * 4 + 0x11] =
               (float)(dVar57 * dVar58 + (double)(fVar16 * fVar14 + fVar11 * fVar2 + fVar8 * fVar9))
          ;
          local_1c0[iVar50 * 4 + 0x12] =
               (float)(dVar57 * dVar56 + (double)(fVar17 * fVar14 + fVar13 * fVar2 + fVar10 * fVar9)
                      );
          local_1c0[iVar50 * 4 + 0x13] =
               (float)(dVar57 * dVar55 + (double)(fVar18 * fVar14 + fVar15 * fVar2 + fVar12 * fVar9)
                      );
        } while (iVar50 + 1 < 4);
        FastDrawQuad(uVar36 - 0x180,0,0,EffectTexHeaders,9);
      }
      else {
        uVar37 = idol_draw::PackCmd(0,1,0,1,0x80);
        iVar45 = 2;
        puVar26[0x2f] = uVar37;
        iVar40 = 0x20;
        do {
          lVar46 = uVar36 - 0x180;
          piVar47 = (int *)((int)&DAT_00871f80 + iVar40);
          lVar52 = 4;
          lVar48 = lVar1;
          lVar43 = lVar1;
          lVar44 = lVar1;
          do {
            iVar41 = *piVar47;
            iVar29 = (int)lVar48;
            *(int *)(iVar29 + 0xfc) = (int)uVar49;
            iVar30 = iVar41 * 0x10;
            fVar7 = *(float *)(iVar30 + 0x871ec4);
            fVar8 = *(float *)(iVar30 + 0x871ec8);
            *(undefined4 *)(iVar29 + 0xf0) = *(undefined4 *)(iVar30 + 0x871ec0);
            piVar47 = piVar47 + 1;
            *(float *)(iVar29 + 0xf4) = (float)((double)fVar7 * dVar61);
            *(float *)(iVar29 + 0xf8) = (float)((double)fVar8 * dVar53);
            pfVar31 = (float *)lVar46;
            fVar7 = pfVar31[1];
            fVar8 = *(float *)((int)local_1c0 + uVar33 + 0x14);
            fVar9 = *pfVar31;
            fVar2 = *(float *)((int)local_1c0 + uVar33 + 0x18);
            fVar10 = *(float *)((int)local_1c0 + uVar33 + 4);
            fVar11 = *(float *)((int)local_1c0 + uVar33 + 0x1c);
            fVar12 = *(float *)((int)local_1c0 + uVar33 + 8);
            fVar13 = pfVar31[2];
            lVar48 = lVar48 + 0x10;
            fVar14 = *(float *)((int)local_1c0 + uVar33 + 0xc);
            fVar15 = *(float *)((int)local_1c0 + uVar33 + 0x24);
            fVar16 = *(float *)((int)local_1c0 + uVar33 + 0x28);
            dVar57 = (double)pfVar31[3];
            fVar17 = *(float *)((int)local_1c0 + uVar33 + 0x2c);
            *pfVar31 = (float)(dVar57 * dVar54 +
                              (double)(*(float *)((int)local_1c0 + uVar33 + 0x20) * fVar13 +
                                      *pfVar28 * fVar9 +
                                      *(float *)((int)local_1c0 + uVar33 + 0x10) * fVar7));
            pfVar31[1] = (float)(dVar57 * dVar58 +
                                (double)(fVar15 * fVar13 + fVar10 * fVar9 + fVar8 * fVar7));
            pfVar31[2] = (float)(dVar57 * dVar56 +
                                (double)(fVar16 * fVar13 + fVar12 * fVar9 + fVar2 * fVar7));
            pfVar31[3] = (float)(dVar57 * dVar55 +
                                (double)(fVar17 * fVar13 + fVar14 * fVar9 + fVar11 * fVar7));
            bVar4 = (&DAT_008720a0)[iVar41];
            fVar7 = *(float *)(iVar41 * 8 + 0x872044);
            fVar8 = *(float *)(&DAT_010d5810 + iVar50);
            lVar46 = lVar46 + 0x10;
            *(undefined4 *)((int)lVar43 + 0x144) = *(undefined4 *)(&DAT_00872040 + iVar41 * 8);
            *(uint *)((int)lVar44 + 0x130) = (uint)bVar4 * (uint)bVar3 * 0x1000000 | uVar32;
            lVar44 = lVar44 + 4;
            *(float *)((int)lVar43 + 0x140) = fVar7 + fVar8;
            lVar43 = lVar43 + 8;
            lVar52 = lVar52 + -1;
          } while (lVar52 != 0);
          FastDrawQuad(uVar36 - 0x180,0,0,EffectTexHeaders,9);
          iVar45 = iVar45 + 1;
          iVar40 = iVar40 + 0x10;
        } while (iVar45 < 4);
      }
      lVar48 = (longlong)(iVar51 + 1);
    } while (iVar51 + 1 < (int)puVar26[0x32]);
  }
  uVar37 = GetEffectTex(*(int *)(psVar23 + 0x2c) + 0x28);
  puVar26[0x2d] = uVar37;
  uVar37 = idol_draw::PackCmd(0,1,0,1,0x80);
  puVar26[0x2f] = uVar37;
  dVar59 = (double)(pCVar27->pos).x;
  dVar58 = (double)(pCVar27->pos).y;
  dVar56 = (double)(pCVar27->pos).w;
  dVar55 = (double)((pCVar27->pos).z - *(float *)(psVar23 + 0x28));
  if (psVar23[0x21] == 0) {
    iVar50 = 0;
    iVar51 = 0;
    do {
      lVar52 = 4;
      lVar46 = uVar36 - 0x180;
      piVar47 = (int *)((int)&DAT_00871f80 + iVar50);
      lVar48 = lVar1;
      lVar43 = lVar1;
      lVar44 = lVar1;
      do {
        iVar45 = *piVar47;
        iVar40 = iVar45 * 0x10;
        iVar41 = (int)lVar48;
        *(undefined4 *)(iVar41 + 0xf0) = *(undefined4 *)(&DAT_00871e00 + iVar40);
        fVar7 = *(float *)(&DAT_00871e08 + iVar40);
        fVar8 = *(float *)(puVar26 + 0x10);
        fVar9 = *(float *)((int)puVar26 + 0x84);
        fVar2 = *(float *)(puVar26 + 0xe);
        fVar10 = *(float *)(puVar26 + 0x11);
        fVar11 = *(float *)((int)puVar26 + 0x74);
        piVar47 = piVar47 + 1;
        *(float *)(iVar41 + 0xf4) = *(float *)(&DAT_00871e04 + iVar40) * *(float *)(psVar23 + 0x24);
        fVar12 = *(float *)(psVar23 + 0x26);
        *(int *)(iVar41 + 0xfc) = (int)uVar49;
        fVar13 = *(float *)((int)puVar26 + 0x8c);
        fVar14 = *(float *)(puVar26 + 0xf);
        fVar15 = *(float *)(puVar26 + 0x12);
        fVar16 = *(float *)((int)puVar26 + 0x7c);
        fVar17 = *(float *)((int)puVar26 + 0x94);
        fVar18 = *(float *)(puVar26 + 0x13);
        *(float *)(iVar41 + 0xf8) = fVar7 * fVar12;
        pfVar28 = (float *)lVar46;
        fVar7 = pfVar28[1];
        fVar12 = *pfVar28;
        fVar19 = pfVar28[2];
        dVar60 = (double)pfVar28[3];
        fVar20 = *(float *)((int)puVar26 + 0x9c);
        lVar48 = lVar48 + 0x10;
        *pfVar28 = (float)(dVar60 * dVar59 +
                          (double)(fVar15 * fVar19 + fVar2 * fVar12 + fVar8 * fVar7));
        pfVar28[1] = (float)(dVar60 * dVar58 +
                            (double)(fVar17 * fVar19 + fVar11 * fVar12 + fVar9 * fVar7));
        pfVar28[2] = (float)(dVar60 * dVar55 +
                            (double)(fVar18 * fVar19 + fVar14 * fVar12 + fVar10 * fVar7));
        pfVar28[3] = (float)(dVar60 * dVar56 +
                            (double)(fVar20 * fVar19 + fVar16 * fVar12 + fVar13 * fVar7));
        bVar3 = (&DAT_008720a0)[iVar45];
        lVar46 = lVar46 + 0x10;
        fVar7 = *(float *)(&DAT_00871fe4 + iVar45 * 8) + DAT_010d99c4;
        *(undefined4 *)((int)lVar43 + 0x144) = *(undefined4 *)(&DAT_00871fe0 + iVar45 * 8);
        *(uint *)((int)lVar44 + 0x130) = (uint)bVar3 * -0x1000000 | uVar32;
        lVar44 = lVar44 + 4;
        *(float *)((int)lVar43 + 0x140) = fVar7;
        lVar43 = lVar43 + 8;
        lVar52 = lVar52 + -1;
      } while (lVar52 != 0);
      FastDrawQuad(uVar36 - 0x180,0,0,EffectTexHeaders,9);
      iVar51 = iVar51 + 1;
      iVar50 = iVar50 + 0x10;
    } while (iVar51 < 6);
  }
  return;
}


// 0x0450c14 (0x14 bytes)
void M761_00450c14(void)

{
  DAT_00872124 = 0x10000;
  return;
}


// 0x0450c28 (0x38 bytes)
void M761_00450c28(void)

{
  CALL_STUB_0017d488();
  WaterSheet_DrawAll(4,(WaterSheet *)&PTR_DAT_008732e0);
  return;
}


// 0x0450c90 (0x224 bytes)
/* Moby 761 */

void UpdateMoby_761(MobyInstance *moby)

{
  float fVar1;
  undefined *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  int iVar11;
  undefined *puVar12;
  int iVar13;
  double dVar14;
  
  if (DAT_010ccec4 == 0) {
    DAT_010ccec4 = 1;
    ppuVar6 = &PTR_DAT_008732e0;
    iVar13 = 0;
    piVar8 = &DAT_008732ec;
    ppuVar7 = ppuVar6;
    piVar9 = piVar8;
    do {
      puVar12 = *ppuVar7;
      iVar11 = 0;
      if (0 < *piVar9) {
        do {
          fVar1 = *(float *)(puVar12 + 8);
          iVar11 = iVar11 + 1;
          puVar2 = ppuVar7[3];
          *(float *)(puVar12 + 8) = fVar1 - 0.45;
          *(float *)(puVar12 + 0xc) = fVar1 - 0.45;
          puVar12 = puVar12 + 0x10;
        } while (iVar11 < (int)puVar2);
      }
      iVar13 = iVar13 + 1;
      piVar9 = piVar9 + 0x18;
      ppuVar7 = ppuVar7 + 0x18;
    } while (iVar13 < 4);
    bVar10 = true;
    iVar13 = 0;
    do {
      puVar12 = *ppuVar6;
      iVar11 = 0;
      bVar10 = (bool)(bVar10 ^ 1);
      if (0 < *piVar8) {
        do {
          if (bVar10) {
            fVar1 = *(float *)(puVar12 + 8) + 0.05;
            fVar3 = *(float *)(puVar12 + 0xc) - 0.05;
            fVar4 = *(float *)(puVar12 + 0x18) - 0.05;
            fVar5 = *(float *)(puVar12 + 0x1c) + 0.05;
          }
          else {
            fVar1 = *(float *)(puVar12 + 8) - 0.05;
            fVar3 = *(float *)(puVar12 + 0xc) + 0.05;
            fVar4 = *(float *)(puVar12 + 0x18) + 0.05;
            fVar5 = *(float *)(puVar12 + 0x1c) - 0.05;
          }
          *(float *)(puVar12 + 8) = fVar1;
          *(float *)(puVar12 + 0xc) = fVar3;
          iVar11 = iVar11 + 2;
          *(float *)(puVar12 + 0x18) = fVar4;
          bVar10 = (bool)(bVar10 ^ 1);
          *(float *)(puVar12 + 0x1c) = fVar5;
          puVar12 = puVar12 + 0x20;
        } while (iVar11 < (int)ppuVar6[3]);
      }
      iVar13 = iVar13 + 1;
      piVar8 = piVar8 + 0x18;
      ppuVar6 = ppuVar6 + 0x18;
    } while (iVar13 < 4);
  }
  dVar14 = (double)FastIntToDouble(worldUpdateTime & 0x3f);
  fVar1 = (float)(dVar14 - 32.0) * 0.09817477;
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
  DAT_0087333c = (fVar1 * fVar5 * 2.601887e-06 +
                 fVar5 * -0.0001980741 + fVar3 * 0.0083330255 + fVar1 * fVar4 * -0.16666657 + fVar4)
                 * 0.5 + 0.5;
  DAT_0087339c = DAT_0087333c;
  DAT_008733fc = DAT_0087333c;
  DAT_0087345c = DAT_0087333c;
  RegisterFuncForMoby(&PTR_M761_00450c28_0070e850,moby);
  return;
}


