// game/update/moby1225.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x20e108-0x20ea6c
#include "game/update/moby1225.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mesh.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update.h"
#include "game/water.h"
#include "idol/fastfunc.h"

// 0x020e108 (0x808 bytes)
void M1225_0020e108(int param_1)

{
  longlong lVar1;
  float fVar2;
  undefined4 uVar3;
  int *piVar4;
  ulonglong *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  Cuboid *pCVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  undefined4 *puVar16;
  ulonglong unaff_r15;
  ulonglong unaff_r16;
  float *pfVar17;
  ulonglong unaff_r17;
  int iVar18;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  float *pfVar19;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  float *pfVar20;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  uint uVar21;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  longlong lVar22;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int *piVar23;
  ulonglong unaff_r29;
  uint uVar24;
  int iVar25;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f20;
  ulonglong in_f21;
  double dVar31;
  ulonglong in_f22;
  double dVar32;
  double dVar33;
  ulonglong in_f23;
  ulonglong in_f24;
  double dVar34;
  ulonglong in_f25;
  double dVar35;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar36;
  ulonglong in_f28;
  double dVar37;
  ulonglong in_f29;
  double dVar38;
  ulonglong in_f30;
  double dVar39;
  ulonglong in_f31;
  double dVar40;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar1 = uVar11 - 0x390;
  puVar5 = (ulonglong *)lVar1;
  *puVar5 = uVar11;
  puVar5[0x74] = in_LR;
  puVar5[0x66] = in_f20;
  puVar5[0x67] = in_f21;
  puVar5[0x68] = in_f22;
  puVar5[0x69] = in_f23;
  puVar5[0x6a] = in_f24;
  puVar5[0x6b] = in_f25;
  puVar5[0x6c] = in_f26;
  puVar5[0x6d] = in_f27;
  puVar5[0x6e] = in_f28;
  puVar5[0x6f] = in_f29;
  puVar5[0x70] = in_f30;
  puVar5[0x71] = in_f31;
  puVar5[100] = unaff_r30;
  puVar5[0x65] = unaff_r31;
  puVar5[0x60] = unaff_r26;
  piVar4 = *(int **)(param_1 + 0x78);
  puVar5[0x5f] = unaff_r25;
  lVar22 = uVar11 - 800;
  pCVar10 = Cuboids + *piVar4;
  puVar5[99] = unaff_r29;
  puVar5[0x62] = unaff_r28;
  puVar5[0x61] = unaff_r27;
  puVar5[0x5e] = unaff_r24;
  puVar5[0x5d] = unaff_r23;
  puVar5[0x5c] = unaff_r22;
  puVar5[0x5b] = unaff_r21;
  puVar5[0x5a] = unaff_r20;
  puVar5[0x59] = unaff_r19;
  puVar5[0x58] = unaff_r18;
  puVar5[0x57] = unaff_r17;
  puVar5[0x56] = unaff_r16;
  puVar5[0x55] = unaff_r15;
  FastEulerToMtx1(lVar22,&pCVar10->rot);
  FastNormalizeRMtx4(uVar11 - 0x2e0,lVar22);
  pCVar10 = Cuboids;
  iVar25 = *piVar4;
  *(float *)(puVar5 + 0x14) = Cuboids[iVar25].pos.x;
  *(float *)((int)puVar5 + 0xa4) = pCVar10[iVar25].pos.y;
  *(float *)(puVar5 + 0x15) = pCVar10[iVar25].pos.z;
  *(float *)((int)puVar5 + 0xac) = pCVar10[iVar25].pos.w;
  fVar6 = GameCamera.posY - pCVar10[iVar25].pos.y;
  fVar7 = GameCamera.posX - pCVar10[iVar25].pos.x;
  fVar8 = GameCamera.posZ - pCVar10[iVar25].pos.z;
  dVar40 = (double)(*(float *)(puVar5 + 0x1a) * fVar8 +
                   *(float *)(puVar5 + 0x16) * fVar7 + *(float *)(puVar5 + 0x18) * fVar6);
  dVar39 = (double)(*(float *)((int)puVar5 + 0xd4) * fVar8 +
                   *(float *)((int)puVar5 + 0xb4) * fVar7 + *(float *)((int)puVar5 + 0xc4) * fVar6);
  dVar38 = (double)(*(float *)(puVar5 + 0x1b) * fVar8 +
                   *(float *)(puVar5 + 0x17) * fVar7 + *(float *)(puVar5 + 0x19) * fVar6);
  uVar12 = GetEffectTex(DAT_00766a40);
  puVar5[0x51] = uVar12;
  puVar5[0x3f] = uVar12;
  puVar5[0x2d] = uVar12;
  uVar12 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar5[0x52] = uVar12;
  puVar5[0x40] = uVar12;
  puVar5[0x2e] = uVar12;
  uVar12 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar5[0x50] = uVar12;
  puVar5[0x3e] = uVar12;
  puVar5[0x2c] = uVar12;
  uVar12 = idol_draw::PackCmd(DAT_00f08e50,DAT_00766a44,DAT_00f08e54,DAT_00766a48,0x80);
  puVar5[0x53] = uVar12;
  puVar5[0x41] = uVar12;
  puVar5[0x2f] = uVar12;
  lVar26 = 4;
  puVar16 = &DAT_00766a5c;
  lVar13 = lVar1;
  lVar14 = lVar1;
  do {
    uVar3 = *puVar16;
    iVar25 = piVar4[5];
    puVar16 = puVar16 + 2;
    iVar18 = (int)lVar13;
    *(undefined4 *)(iVar18 + 0x264) = uVar3;
    *(undefined4 *)(iVar18 + 0x1d4) = uVar3;
    *(undefined4 *)(iVar18 + 0x144) = uVar3;
    iVar18 = (int)lVar14;
    *(int *)(iVar18 + 0x250) = iVar25;
    *(int *)(iVar18 + 0x1c0) = iVar25;
    lVar13 = lVar13 + 8;
    *(int *)(iVar18 + 0x130) = iVar25;
    lVar14 = lVar14 + 4;
    lVar26 = lVar26 + -1;
  } while (lVar26 != 0);
  dVar35 = 0.0;
  uVar24 = 0;
  iVar25 = 0;
  dVar32 = dVar35;
  dVar33 = dVar35;
  dVar31 = dVar35;
  piVar23 = piVar4;
  do {
    dVar27 = dVar31;
    dVar28 = dVar31;
    dVar30 = dVar31;
    if ((int)uVar24 < 0x1e) {
      fVar7 = ((float)piVar23[10] - (float)piVar23[0x12]) *
              (float)((double)(float)piVar23[0xc] - dVar40) -
              ((float)piVar23[8] - (float)piVar23[0x10]) *
              (float)((double)(float)piVar23[0xe] - dVar38);
      fVar8 = ((float)piVar23[9] - (float)piVar23[0x11]) *
              (float)((double)(float)piVar23[0xe] - dVar38) -
              ((float)piVar23[10] - (float)piVar23[0x12]) *
              (float)((double)(float)piVar23[0xd] - dVar39);
      fVar6 = ((float)piVar23[8] - (float)piVar23[0x10]) *
              (float)((double)(float)piVar23[0xd] - dVar39) -
              ((float)piVar23[9] - (float)piVar23[0x11]) *
              (float)((double)(float)piVar23[0xc] - dVar40);
      dVar29 = (double)SQRT(fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7);
      if (dVar29 != dVar31) {
        fVar2 = (float)(0.10000000149011612 / dVar29);
        dVar27 = (double)(fVar8 * fVar2);
        dVar28 = (double)(fVar7 * fVar2);
        dVar30 = (double)(fVar6 * fVar2);
      }
    }
    dVar34 = 0.25;
    pfVar20 = (float *)((int)piVar4 + iVar25 + 0x20);
    pfVar19 = (float *)((int)piVar4 + iVar25 + 0x30);
    uVar21 = 0;
    lVar13 = uVar11 - 0x2a0;
    lVar14 = lVar1;
    dVar29 = dVar33;
    dVar36 = dVar32;
    dVar37 = dVar35;
    pfVar17 = (float *)&DAT_00766a58;
    do {
      dVar33 = dVar30;
      dVar32 = dVar28;
      dVar35 = dVar27;
      pfVar9 = (float *)lVar13;
      if ((int)uVar21 < 2) {
        dVar27 = (double)*pfVar20;
        *pfVar9 = *pfVar20;
        dVar28 = (double)pfVar20[1];
        pfVar9[1] = pfVar20[1];
        dVar30 = (double)pfVar20[2];
        pfVar9[2] = pfVar20[2];
        if ((uVar21 & 1) == 0) {
          pfVar9[3] = pfVar20[3];
          *pfVar9 = (float)(dVar27 - dVar37);
          pfVar9[1] = (float)(dVar28 - dVar36);
          pfVar9[2] = (float)(dVar30 - dVar29);
        }
        else {
          pfVar9[3] = pfVar20[3];
          *pfVar9 = (float)(dVar27 + dVar37);
          pfVar9[1] = (float)(dVar28 + dVar36);
          pfVar9[2] = (float)(dVar30 + dVar29);
        }
      }
      else {
        dVar27 = (double)*pfVar19;
        *pfVar9 = *pfVar19;
        dVar28 = (double)pfVar19[1];
        pfVar9[1] = pfVar19[1];
        dVar30 = (double)pfVar19[2];
        pfVar9[2] = pfVar19[2];
        if ((uVar21 & 1) == 0) {
          pfVar9[3] = pfVar19[3];
          *pfVar9 = (float)(dVar27 - dVar35);
          pfVar9[1] = (float)(dVar28 - dVar32);
          pfVar9[2] = (float)(dVar30 - dVar33);
        }
        else {
          pfVar9[3] = pfVar19[3];
          *pfVar9 = (float)(dVar27 + dVar35);
          pfVar9[1] = (float)(dVar28 + dVar32);
          pfVar9[2] = (float)(dVar30 + dVar33);
        }
      }
      dVar28 = (double)*pfVar17;
      dVar27 = (double)FastIntToDouble
                                 (uVar24 + (((int)uVar24 >> 2) +
                                           (uint)((int)uVar24 < 0 && (uVar24 & 3) != 0)) * -4);
      uVar21 = uVar21 + 1;
      lVar13 = lVar13 + 0x10;
      pfVar17 = pfVar17 + 2;
      *(float *)((int)lVar14 + 0x140) = (float)(dVar27 * dVar34 + dVar28);
      lVar14 = lVar14 + 8;
      dVar27 = dVar35;
      dVar28 = dVar32;
      dVar30 = dVar33;
    } while ((int)uVar21 < 4);
    FastDrawQuad(uVar11 - 0x2a0,lVar22,0,EffectTexHeaders,9);
    uVar24 = uVar24 + 1;
    iVar25 = iVar25 + 0x10;
    piVar23 = piVar23 + 4;
  } while ((int)uVar24 < 0x1f);
  iVar25 = 0;
  piVar23 = piVar4;
  do {
    dVar32 = dVar31;
    if (*(byte *)(piVar23 + 6) < 0x1f) {
      uVar24 = 0;
      iVar18 = 0;
      dVar33 = dVar31;
      dVar35 = dVar31;
      do {
        dVar27 = dVar32;
        dVar28 = dVar32;
        dVar30 = dVar32;
        if ((int)uVar24 < 2) {
          iVar15 = iVar25 * 0x10;
          pfVar19 = (float *)((int)piVar4 + iVar15 + iVar18 + 0x420);
          pfVar20 = (float *)((int)piVar4 + iVar15 + iVar18 + 0x4a0);
          pfVar17 = (float *)((int)piVar4 + iVar15 + iVar18 + 0x460);
          fVar7 = (pfVar19[2] - pfVar20[2]) * (float)((double)*pfVar17 - dVar40) -
                  (*pfVar19 - *pfVar20) * (float)((double)pfVar17[2] - dVar38);
          fVar8 = (pfVar19[1] - pfVar20[1]) * (float)((double)pfVar17[2] - dVar38) -
                  (pfVar19[2] - pfVar20[2]) * (float)((double)pfVar17[1] - dVar39);
          fVar6 = (*pfVar19 - *pfVar20) * (float)((double)pfVar17[1] - dVar39) -
                  (pfVar19[1] - pfVar20[1]) * (float)((double)*pfVar17 - dVar40);
          dVar29 = (double)SQRT(fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7);
          if (dVar29 != dVar32) {
            fVar2 = (float)(0.10000000149011612 / dVar29);
            dVar27 = (double)(fVar6 * fVar2);
            dVar28 = (double)(fVar7 * fVar2);
            dVar30 = (double)(fVar8 * fVar2);
          }
        }
        dVar29 = dVar31;
        dVar36 = dVar33;
        dVar37 = dVar35;
        if (uVar24 == 0) {
          dVar29 = dVar27;
          dVar36 = dVar28;
          dVar37 = dVar30;
        }
        pfVar20 = (float *)((int)piVar4 + iVar25 * 0x10 + iVar18 + 0x420);
        uVar21 = 0;
        pfVar19 = (float *)((int)piVar4 + iVar25 * 0x10 + iVar18 + 0x460);
        lVar13 = uVar11 - 0x2a0;
        lVar14 = lVar1;
        dVar31 = dVar27;
        dVar33 = dVar28;
        dVar35 = dVar30;
        pfVar17 = (float *)&DAT_00766a58;
        do {
          pfVar9 = (float *)lVar13;
          if ((int)uVar21 < 2) {
            dVar27 = (double)*pfVar20;
            *pfVar9 = *pfVar20;
            dVar28 = (double)pfVar20[1];
            pfVar9[1] = pfVar20[1];
            dVar30 = (double)pfVar20[2];
            pfVar9[2] = pfVar20[2];
            if ((uVar21 & 1) == 0) {
              pfVar9[3] = pfVar20[3];
              *pfVar9 = (float)(dVar27 - dVar37);
              pfVar9[1] = (float)(dVar28 - dVar36);
              pfVar9[2] = (float)(dVar30 - dVar29);
            }
            else {
              pfVar9[3] = pfVar20[3];
              *pfVar9 = (float)(dVar27 + dVar37);
              pfVar9[1] = (float)(dVar28 + dVar36);
              pfVar9[2] = (float)(dVar30 + dVar29);
            }
          }
          else {
            dVar27 = (double)*pfVar19;
            *pfVar9 = *pfVar19;
            dVar28 = (double)pfVar19[1];
            pfVar9[1] = pfVar19[1];
            dVar30 = (double)pfVar19[2];
            pfVar9[2] = pfVar19[2];
            if ((uVar21 & 1) == 0) {
              pfVar9[3] = pfVar19[3];
              *pfVar9 = (float)(dVar27 - dVar35);
              pfVar9[1] = (float)(dVar28 - dVar33);
              pfVar9[2] = (float)(dVar30 - dVar31);
            }
            else {
              pfVar9[3] = pfVar19[3];
              *pfVar9 = (float)(dVar27 + dVar35);
              pfVar9[1] = (float)(dVar28 + dVar33);
              pfVar9[2] = (float)(dVar30 + dVar31);
            }
          }
          dVar28 = (double)*pfVar17;
          dVar27 = (double)FastIntToDouble
                                     (uVar24 + (((int)uVar24 >> 2) +
                                               (uint)((int)uVar24 < 0 && (uVar24 & 3) != 0)) * -4);
          uVar21 = uVar21 + 1;
          lVar13 = lVar13 + 0x10;
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar14 + 0x140) = (float)(dVar27 * dVar34 + dVar28);
          lVar14 = lVar14 + 8;
        } while ((int)uVar21 < 4);
        FastDrawQuad(uVar11 - 0x2a0,lVar22,0,EffectTexHeaders,9);
        uVar24 = uVar24 + 1;
        iVar18 = iVar18 + 0x40;
      } while ((int)uVar24 < 3);
    }
    iVar25 = iVar25 + 1;
    piVar23 = (int *)((int)piVar23 + 1);
    dVar31 = dVar32;
  } while (iVar25 < 4);
  return;
}


// 0x020e910 (0x14 bytes)
void M1225_0020e910(void)

{
  DAT_00766b0c = 0x10000;
  return;
}


// 0x020e950 (0xe0 bytes)
void M1225_0020e950(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  
  CALL_STUB_0017d488();
  WaterSheet_DrawAll(3,(WaterSheet *)&PTR_DAT_00768280);
  dVar5 = (double)FastIntToDouble(worldUpdateTime & 0x3f);
  fVar1 = (float)(dVar5 - 32.0) * 0.09817477;
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
  DAT_007682dc = (fVar1 * fVar4 * 2.601887e-06 +
                 fVar4 * -0.0001980741 + fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3)
                 * 0.5 + 0.5;
  DAT_0076833c = DAT_007682dc;
  DAT_0076839c = DAT_007682dc;
  return;
}


// 0x020ea30 (0x3c bytes)
/* Moby 1225 */

void UpdateMoby_1225(MobyInstance *moby)

{
  moby->drawDistance = 0xff;
  moby->updateDistance = -1;
  RegisterFuncForMoby(&PTR_M1225_0020e950_00709540,moby);
  return;
}


