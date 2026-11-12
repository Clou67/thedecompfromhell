// game/update/moby585.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x3d24a8-0x3d3cec
#include "game/update/moby585.h"
#include "game/camera.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mesh.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/sound.h"
#include "game/update/moby1300.h"
#include "idol/fastfunc.h"

// 0x03d24a8 (0x690 bytes)
// inlined: FastRSqrt @0x3d2690, FastRSqrt @0x3d2700, FastRSqrt @0x3d2784, FastRSqrt @0x3d2820, FastRSqrt @0x3d2824, FastRSqrt @0x3d2828
void M585_003d24a8(int param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  GPiece<176> local_170;
  
  iVar3 = *(int *)(param_1 + 0x78);
  GetEffectTex(DAT_008465c0);
  SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SCE_GS_SET_CLAMP(0,1,0,0,0,0);
  idol_draw::PackCmd(DAT_010c9f90,DAT_008465b0,DAT_010c9f94,DAT_008465b4,DAT_008465b8);
  dVar11 = 0.0;
  dVar7 = 1.0;
  fVar4 = *(float *)(iVar3 + 0x24) + g_FrameTime;
  dVar5 = (double)fVar4;
  *(float *)(iVar3 + 0x24) = fVar4;
  if (1.0 < dVar5) {
    dVar9 = dVar5 - 1.0;
    dVar5 = (double)(float)dVar9;
    *(float *)(iVar3 + 0x24) = (float)dVar9;
  }
  if ((double)*(float *)(iVar3 + 0x28) < dVar5) {
    *(float *)(iVar3 + 0x28) = (float)dVar5;
  }
  if ((double)(float)(dVar5 - 1.0) < dVar5) {
    dVar8 = 0.10000000149011612;
    dVar6 = -0.8999999761581421;
    dVar9 = dVar5;
    dVar10 = dVar5;
    do {
      if (dVar10 <= (double)*(float *)(iVar3 + 0x28)) {
        FastDoubleToInt((double)((float)(dVar7 - dVar10) * 255.0));
        FastDrawQuad(local_170,0,1,EffectTexHeaders,9);
        dVar5 = (double)*(float *)(iVar3 + 0x24);
      }
      dVar9 = (double)(float)(dVar9 - dVar8);
      dVar1 = dVar10 - dVar8;
      dVar2 = dVar10 - dVar6;
      dVar10 = (double)(float)dVar1;
      if ((double)(float)dVar1 - dVar11 < 0.0) {
        dVar10 = (double)(float)dVar2;
      }
    } while ((double)(float)(dVar5 - dVar7) < dVar9);
  }
  return;
}


// 0x03d2b38 (0xc8 bytes)
void M585_003d2b38(int param_1)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  if ((int)Level < 0x14) {
    iVar2 = Level * 0x10;
    uVar4 = *(byte *)(param_1 + 0xbc) - 1;
    if ((uVar4 & 1) == 0) {
      iVar5 = ((int)uVar4 >> 1) + (uint)((int)uVar4 < 0 && (uVar4 & 1) != 0);
      bVar1 = (&DAT_00a0cbc4)[iVar2 + iVar5];
      lVar6 = (((ulonglong)bVar1 << 0x20) >> 0x24) + 1;
      (&DAT_00a0cbc4)[iVar2 + iVar5] =
           (byte)((lVar6 + (0xf - lVar6 >> 0x3f & 0xfU - lVar6) & 0xffffffff) << 4) | bVar1 & 0xf;
    }
    else {
      iVar5 = ((int)uVar4 >> 1) + (uint)((int)uVar4 < 0 && (uVar4 & 1) != 0);
      bVar1 = (&DAT_00a0cbc4)[iVar2 + iVar5];
      lVar6 = ((ulonglong)bVar1 & 0xf) + 1;
      cVar3 = (char)lVar6;
      (&DAT_00a0cbc4)[iVar2 + iVar5] =
           cVar3 + ((byte)(0xf - lVar6 >> 0x3f) & 0xfU - cVar3) | bVar1 & 0xf0;
    }
  }
  return;
}


// 0x03d2c48 (0x10a4 bytes)
// inlined: FastAtan2 @0x3d2e88, FastAtan2 @0x3d3024, FastRSqrt @0x3d3438, FastRSqrt @0x3d34b4, FastRSqrt @0x3d352c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Moby 585 */

void UpdateMoby_585(MobyInstance *moby)

{
  bool bVar1;
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
  int *piVar12;
  void *pvVar13;
  ulonglong *puVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  int iVar18;
  MobyInstance *pMVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar23;
  int iVar24;
  ulonglong uVar22;
  vec4 *v;
  longlong lVar25;
  ulonglong uVar26;
  float *pfVar28;
  longlong lVar27;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar33;
  ulonglong in_f30;
  double dVar34;
  double dVar35;
  ulonglong in_f31;
  double dVar36;
  
  uVar22 = ZEXT48(&stack0x00000000);
  lVar21 = uVar22 - 0x2c0;
  puVar14 = (ulonglong *)lVar21;
  *puVar14 = uVar22;
  puVar14[0x5a] = in_LR;
  puVar14[0x53] = in_f27;
  puVar14[0x54] = in_f28;
  puVar14[0x55] = in_f29;
  puVar14[0x56] = in_f30;
  puVar14[0x57] = in_f31;
  puVar14[0x52] = unaff_r31;
  puVar14[0x51] = unaff_r30;
  puVar14[0x50] = unaff_r29;
  puVar14[0x4f] = unaff_r28;
  puVar14[0x4e] = unaff_r27;
  if ((moby != (MobyInstance *)0x0) && (piVar12 = (int *)moby->pVar, piVar12 != (int *)0x0)) {
    GetBonePosition(moby,0,piVar12 + 4);
    if (moby->state == 0) {
      DAT_0096bd24 = 100000.0;
      DAT_0096bd20 = (MobyInstance *)0x0;
      *piVar12 = -1;
      piVar12[1] = -1;
      piVar12[3] = -1;
      piVar12[2] = 0x7fff;
      *(undefined1 *)(piVar12 + 8) = g_Pad.unk089;
      piVar12[9] = 0;
      piVar12[10] = 0;
      uRam010c9fac = 0;
      uRam010c9fa8 = 0;
      uRam010c9fa4 = 0;
      _DAT_010c9fa0 = 0;
      AttachManipulator(moby,3,&DAT_010c9fa0);
      moby->state = '\x01';
    }
    else if (moby->state < 3) {
      dVar33 = 0.0;
      *(undefined4 *)(puVar14 + 0x10) = 0;
      *(undefined4 *)((int)puVar14 + 0x84) = 0;
      pMVar19 = DAT_0096bd20;
      dVar36 = 1.0;
      *(undefined4 *)(puVar14 + 0x11) = 0x3f800000;
      *(undefined4 *)((int)puVar14 + 0x8c) = 0;
      dVar31 = (double)g_heroRotation.z;
      if (((pMVar19 == (MobyInstance *)0x0) || (pMVar19->oClass != METAL_DETECTOR_SPOT_MESHLESS)) ||
         (pMVar19->state == 0xfd || pMVar19->state == 0xfe)) {
        *(undefined4 *)(puVar14 + 0x14) = 0;
        *(undefined4 *)((int)puVar14 + 0xa4) = 0;
        *(undefined4 *)(puVar14 + 0x15) = 0;
        *(undefined4 *)((int)puVar14 + 0xac) = 0;
        MB_EulerToQuat((float *)(puVar14 + 0xe),(Vec3 *)(puVar14 + 0x14));
      }
      else {
        fVar3 = (float)piVar12[5];
        fVar4 = (pMVar19->pos).y;
        fVar5 = (float)piVar12[4];
        fVar11 = fVar3 - fVar4;
        fVar6 = (pMVar19->pos).x;
        fVar8 = fVar5 - fVar6;
        fVar9 = (pMVar19->pos).z - (float)piVar12[6];
        fVar11 = SQRT(fVar8 * fVar8 + fVar11 * fVar11);
        *(float *)(puVar14 + 0x42) = fVar9;
        fVar9 = ABS(fVar9);
        fVar7 = ABS(fVar11);
        *(float *)((int)puVar14 + 0x20c) = fVar11;
        *(float *)((int)puVar14 + 0x214) = fVar7 - fVar9;
        uVar26 = (ulonglong)(*(uint *)((int)puVar14 + 0x20c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0x214) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar14 + 0x42) >> 0x1d) & 4;
        fVar11 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
        fVar8 = ABS(*(float *)((int)puVar14 + 0x20c));
        if (*(float *)((int)puVar14 + 0x214) - 0.0 < 0.0) {
          fVar8 = fVar9;
        }
        fVar9 = ABS(*(float *)(puVar14 + 0x42));
        if (*(float *)((int)puVar14 + 0x214) - 0.0 < 0.0) {
          fVar9 = fVar7;
        }
        fVar7 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
        dVar30 = dVar33;
        if (0.0 < fVar8) {
          lVar20 = uVar22 - 0x2b0;
          lVar27 = uVar22 - 0x78;
          lVar25 = uVar22 - 0x88;
          lVar29 = 2;
          fVar8 = (fVar9 - fVar8) / (fVar9 + fVar8);
          fVar9 = fVar8 * fVar8;
          *(float *)((int)puVar14 + 0x244) = fVar8;
          *(float *)((int)puVar14 + 0x23c) = fVar8;
          *(float *)(puVar14 + 0x48) = fVar8;
          *(float *)(puVar14 + 0x47) = fVar8;
          fVar8 = fVar9 * fVar9;
          *(float *)((int)puVar14 + 0x23c) = *(float *)((int)puVar14 + 0x23c) * fVar9;
          *(float *)(puVar14 + 0x48) = *(float *)(puVar14 + 0x48) * fVar8;
          *(float *)((int)puVar14 + 0x244) = *(float *)((int)puVar14 + 0x244) * fVar8 * fVar9;
          do {
            *(float *)((int)lVar20 + 0x238) = *(float *)((int)lVar20 + 0x228) * fVar8 * fVar8;
            iVar24 = (int)lVar25;
            lVar25 = lVar25 + 8;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar27 + 4) = *(float *)(iVar24 + 4) * fVar8 * fVar8;
            lVar27 = lVar27 + 8;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          lVar29 = 4;
          lVar27 = uVar22 - 0x88;
          pfVar28 = (float *)&DAT_007358e0;
          lVar20 = lVar21;
          lVar25 = lVar27;
          do {
            fVar8 = *pfVar28;
            fVar9 = pfVar28[1];
            pfVar28 = pfVar28 + 2;
            *(float *)((int)lVar20 + 0x238) = *(float *)((int)lVar20 + 0x238) * fVar8;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar9;
            lVar25 = lVar25 + 8;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          lVar25 = 2;
          lVar20 = lVar21;
          do {
            iVar24 = (int)lVar20;
            iVar23 = (int)lVar27;
            lVar20 = lVar20 + 0x10;
            lVar27 = lVar27 + 0x10;
            dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar24 + 0x238)) +
                              *(float *)(iVar23 + 4) + *(float *)(iVar23 + 8) +
                             *(float *)(iVar23 + 0xc));
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar11 + fVar7);
        }
        fVar6 = fVar6 - fVar5;
        fVar4 = fVar4 - fVar3;
        fVar11 = ABS(fVar6);
        fVar5 = ABS(fVar4);
        *(float *)(puVar14 + 0x40) = fVar6;
        *(float *)((int)puVar14 + 0x204) = fVar4;
        *(float *)(puVar14 + 0x41) = fVar11 - fVar5;
        uVar26 = (ulonglong)(*(uint *)(puVar14 + 0x40) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar14 + 0x41) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0x204) >> 0x1d) & 4;
        fVar3 = ABS(*(float *)(puVar14 + 0x40));
        if (*(float *)(puVar14 + 0x41) - 0.0 < 0.0) {
          fVar3 = fVar5;
        }
        fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
        fVar5 = ABS(*(float *)((int)puVar14 + 0x204));
        if (*(float *)(puVar14 + 0x41) - 0.0 < 0.0) {
          fVar5 = fVar11;
        }
        fVar6 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
        dVar34 = dVar33;
        if (0.0 < fVar3) {
          lVar20 = uVar22 - 0x2b0;
          lVar25 = uVar22 - 0xa8;
          lVar27 = uVar22 - 0x98;
          lVar29 = 2;
          fVar3 = (fVar5 - fVar3) / (fVar5 + fVar3);
          fVar5 = fVar3 * fVar3;
          *(float *)((int)puVar14 + 0x224) = fVar3;
          *(float *)((int)puVar14 + 0x21c) = fVar3;
          *(float *)(puVar14 + 0x44) = fVar3;
          *(float *)(puVar14 + 0x43) = fVar3;
          fVar3 = fVar5 * fVar5;
          *(float *)((int)puVar14 + 0x21c) = *(float *)((int)puVar14 + 0x21c) * fVar5;
          *(float *)(puVar14 + 0x44) = *(float *)(puVar14 + 0x44) * fVar3;
          *(float *)((int)puVar14 + 0x224) = *(float *)((int)puVar14 + 0x224) * fVar3 * fVar5;
          do {
            *(float *)((int)lVar20 + 0x218) = *(float *)((int)lVar20 + 0x208) * fVar3 * fVar3;
            iVar24 = (int)lVar25;
            lVar20 = lVar20 + 8;
            lVar25 = lVar25 + 8;
            *(float *)((int)lVar27 + 4) = *(float *)(iVar24 + 4) * fVar3 * fVar3;
            lVar27 = lVar27 + 8;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          lVar29 = 4;
          lVar27 = uVar22 - 0xa8;
          pfVar28 = (float *)&DAT_007358e0;
          lVar20 = lVar21;
          lVar25 = lVar27;
          do {
            fVar3 = *pfVar28;
            fVar5 = pfVar28[1];
            pfVar28 = pfVar28 + 2;
            *(float *)((int)lVar20 + 0x218) = *(float *)((int)lVar20 + 0x218) * fVar3;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar5;
            lVar25 = lVar25 + 8;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          lVar20 = 2;
          do {
            iVar24 = (int)lVar21;
            lVar21 = lVar21 + 0x10;
            iVar23 = (int)lVar27;
            lVar27 = lVar27 + 0x10;
            dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar24 + 0x218)) +
                              *(float *)(iVar23 + 4) + *(float *)(iVar23 + 8) +
                             *(float *)(iVar23 + 0xc));
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar4 + fVar6);
        }
        dVar31 = (double)FastDiffRots(dVar34,dVar31);
        dVar34 = -1.5707963705062866;
        dVar30 = (double)FastDiffRots(dVar30,0xbff921fb60000000);
        if ((double)(DAT_008465f0 * 0.017453292) - ABS(dVar31) < 0.0) {
          dVar31 = (double)(float)((double)(DAT_008465f0 * 0.017453292) *
                                  (double)(float)(dVar31 / ABS(dVar31)));
        }
        if ((double)(DAT_008465f4 * 0.017453292) - ABS(dVar30) < 0.0) {
          dVar30 = (double)(float)((double)(DAT_008465f4 * 0.017453292) *
                                  (double)(float)(dVar30 / ABS(dVar30)));
        }
        dVar31 = (double)FastWrapRot((float)dVar31,g_heroRotation.z);
        dVar30 = (double)FastWrapRot((float)dVar30,(float)dVar34);
        MB_SphericalToVector(-3.0,(float)dVar31,(float)dVar30,(float *)(puVar14 + 0x10));
        *(float *)(puVar14 + 0x12) = (float)piVar12[4] + *(float *)(puVar14 + 0x10);
        *(float *)((int)puVar14 + 0x94) = (float)piVar12[5] + *(float *)((int)puVar14 + 0x84);
        *(float *)(puVar14 + 0x13) = (float)piVar12[6] + *(float *)(puVar14 + 0x11);
        *(int *)((int)puVar14 + 0x9c) = piVar12[7];
        STUB_00065468(piVar12 + 4,uVar22 - 0x230);
        fVar4 = *(float *)((int)puVar14 + 0x84);
        fVar5 = *(float *)(puVar14 + 0x10);
        fVar6 = *(float *)(puVar14 + 0x11);
        puVar14[0x4b] = (longlong)DAT_008465d0;
        iVar23 = DAT_010c9fe0;
        dVar30 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
        uVar26 = puVar14[0x4b];
        iVar24 = DAT_010c9fe0 * 2;
        *(undefined4 *)((int)puVar14 + DAT_010c9fe0 * 0x10 + 0xcc) =
             *(undefined4 *)((int)puVar14 + 0x8c);
        fVar3 = (float)((double)(longlong)uVar26 / dVar30);
        dVar31 = dVar33;
        if (dVar33 - dVar30 < 0.0) {
          dVar31 = (double)(fVar5 * fVar3);
        }
        dVar34 = dVar33;
        if (dVar33 - dVar30 < 0.0) {
          dVar34 = (double)(fVar4 * fVar3);
        }
        dVar35 = dVar33;
        if (dVar33 - dVar30 < 0.0) {
          dVar35 = (double)(fVar6 * fVar3);
        }
        if (dVar30 - dVar33 < 0.0) {
          dVar31 = (double)(fVar5 * fVar3);
        }
        if (dVar30 - dVar33 < 0.0) {
          dVar34 = (double)(fVar4 * fVar3);
        }
        if (dVar30 - dVar33 < 0.0) {
          dVar35 = (double)(fVar6 * fVar3);
        }
        *(float *)(puVar14 + iVar24 + 0x18) = (float)dVar31;
        *(float *)((int)puVar14 + iVar23 * 0x10 + 0xc4) = (float)dVar34;
        *(float *)(puVar14 + iVar23 * 2 + 0x19) = (float)dVar35;
        fVar4 = (float)((double)DAT_008465e8 * dVar31 -
                       (double)(float)((double)DAT_008465e0 * dVar35));
        fVar5 = (float)((double)DAT_008465e4 * dVar35 -
                       (double)(float)((double)DAT_008465e8 * dVar34));
        fVar6 = (float)((double)DAT_008465e0 * dVar34 -
                       (double)(float)((double)DAT_008465e4 * dVar31));
        puVar14[0x4b] = (longlong)DAT_008465d4;
        iVar18 = DAT_008465c8;
        uVar26 = puVar14[0x4b];
        dVar30 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
        iVar17 = DAT_008465c8 * 2;
        *(undefined4 *)((int)puVar14 + DAT_008465c8 * 0x10 + 0xcc) = 0;
        fVar3 = (float)((double)(longlong)uVar26 / dVar30);
        dVar31 = dVar33;
        if (dVar33 - dVar30 < 0.0) {
          dVar31 = (double)(fVar5 * fVar3);
        }
        dVar34 = dVar33;
        if (dVar33 - dVar30 < 0.0) {
          dVar34 = (double)(fVar4 * fVar3);
        }
        dVar35 = dVar33;
        if (dVar33 - dVar30 < 0.0) {
          dVar35 = (double)(fVar6 * fVar3);
        }
        if (dVar30 - dVar33 < 0.0) {
          dVar31 = (double)(fVar5 * fVar3);
        }
        if (dVar30 - dVar33 < 0.0) {
          dVar34 = (double)(fVar4 * fVar3);
        }
        if (dVar30 - dVar33 < 0.0) {
          dVar35 = (double)(fVar6 * fVar3);
        }
        *(float *)(puVar14 + iVar17 + 0x18) = (float)dVar31;
        *(float *)((int)puVar14 + iVar18 * 0x10 + 0xc4) = (float)dVar34;
        *(float *)(puVar14 + iVar18 * 2 + 0x19) = (float)dVar35;
        iVar17 = DAT_008465c4;
        dVar30 = (double)*(float *)((int)puVar14 + iVar23 * 0x10 + 0xc4);
        fVar3 = *(float *)(puVar14 + iVar23 * 2 + 0x19);
        dVar32 = (double)*(float *)(puVar14 + iVar24 + 0x18);
        iVar24 = DAT_008465c4 * 2;
        *(undefined4 *)((int)puVar14 + DAT_008465c4 * 0x10 + 0xcc) = 0;
        *(float *)(puVar14 + iVar24 + 0x18) =
             (float)(dVar30 * dVar35 - (double)(float)((double)fVar3 * dVar34));
        *(float *)((int)puVar14 + iVar17 * 0x10 + 0xc4) =
             (float)((double)fVar3 * dVar31 - (double)(float)(dVar32 * dVar35));
        *(float *)(puVar14 + iVar17 * 2 + 0x19) =
             (float)(dVar32 * dVar34 - (double)(float)(dVar30 * dVar31));
        *(undefined4 *)(puVar14 + 0x1f) = 0;
        *(undefined4 *)((int)puVar14 + 0xf4) = 0;
        *(undefined4 *)(puVar14 + 0x1e) = 0;
        *(undefined4 *)((int)puVar14 + 0xfc) = 0x3f800000;
        GetBoneTransformations(moby,2,uVar22 - 0x1c0);
        fVar3 = *(float *)((int)puVar14 + 0x104);
        fVar4 = *(float *)(puVar14 + 0x20);
        fVar5 = *(float *)(puVar14 + 0x21);
        fVar6 = *(float *)(puVar14 + 0x22);
        fVar11 = *(float *)((int)puVar14 + 0x114);
        fVar8 = *(float *)(puVar14 + 0x23);
        fVar9 = *(float *)(puVar14 + 0x24);
        fVar7 = *(float *)((int)puVar14 + 0x124);
        fVar10 = *(float *)(puVar14 + 0x25);
        dVar35 = (double)(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
        dVar31 = dVar33;
        dVar30 = dVar33;
        dVar34 = dVar33;
        if ((double)(float)SQRT(dVar35) != dVar33) {
          dVar31 = 1.0 / SQRT(dVar35);
          dVar31 = (double)(float)(-(double)(float)((double)(float)(dVar35 * dVar31) * dVar31 -
                                                   dVar36) * (double)(float)(dVar31 * 0.5) + dVar31)
          ;
          dVar31 = (double)(float)(-(double)(float)((double)(float)(dVar35 * dVar31) * dVar31 -
                                                   dVar36) * (double)(float)(dVar31 * 0.5) + dVar31)
          ;
          fVar2 = (float)(-(double)(float)((double)(float)(dVar35 * dVar31) * dVar31 - dVar36) *
                          (double)(float)(dVar31 * 0.5) + dVar31);
          dVar34 = (double)(fVar4 * fVar2);
          dVar30 = (double)(fVar3 * fVar2);
          dVar31 = (double)(fVar5 * fVar2);
        }
        *(float *)(puVar14 + 0x21) = (float)dVar31;
        *(float *)(puVar14 + 0x20) = (float)dVar34;
        *(float *)((int)puVar14 + 0x104) = (float)dVar30;
        dVar35 = (double)(fVar8 * fVar8 + fVar6 * fVar6 + fVar11 * fVar11);
        dVar31 = dVar33;
        dVar30 = dVar33;
        dVar34 = dVar33;
        if ((double)(float)SQRT(dVar35) != dVar33) {
          dVar31 = 1.0 / SQRT(dVar35);
          dVar31 = (double)(float)(-(double)(float)((double)(float)(dVar35 * dVar31) * dVar31 -
                                                   dVar36) * (double)(float)(dVar31 * 0.5) + dVar31)
          ;
          dVar31 = (double)(float)(-(double)(float)((double)(float)(dVar35 * dVar31) * dVar31 -
                                                   dVar36) * (double)(float)(dVar31 * 0.5) + dVar31)
          ;
          fVar3 = (float)(-(double)(float)((double)(float)(dVar35 * dVar31) * dVar31 - dVar36) *
                          (double)(float)(dVar31 * 0.5) + dVar31);
          dVar34 = (double)(fVar6 * fVar3);
          dVar30 = (double)(fVar11 * fVar3);
          dVar31 = (double)(fVar8 * fVar3);
        }
        *(float *)(puVar14 + 0x23) = (float)dVar31;
        *(float *)((int)puVar14 + 0x114) = (float)dVar30;
        *(float *)(puVar14 + 0x22) = (float)dVar34;
        dVar34 = (double)(fVar10 * fVar10 + fVar9 * fVar9 + fVar7 * fVar7);
        dVar31 = dVar33;
        dVar30 = dVar33;
        if ((double)(float)SQRT(dVar34) != dVar33) {
          dVar31 = 1.0 / SQRT(dVar34);
          dVar31 = (double)(float)(-(double)(float)((double)(float)(dVar34 * dVar31) * dVar31 -
                                                   dVar36) * (double)(float)(dVar31 * 0.5) + dVar31)
          ;
          dVar31 = (double)(float)(-(double)(float)((double)(float)(dVar34 * dVar31) * dVar31 -
                                                   dVar36) * (double)(float)(dVar31 * 0.5) + dVar31)
          ;
          fVar3 = (float)(-(double)(float)((double)(float)(dVar34 * dVar31) * dVar31 - dVar36) *
                          (double)(float)(dVar31 * 0.5) + dVar31);
          dVar31 = (double)(fVar9 * fVar3);
          dVar33 = (double)(fVar7 * fVar3);
          dVar30 = (double)(fVar10 * fVar3);
        }
        *(float *)(puVar14 + 0x24) = (float)dVar31;
        *(float *)((int)puVar14 + 0x124) = (float)dVar33;
        *(float *)(puVar14 + 0x25) = (float)dVar30;
        FastNormalizeRMtx4(uVar22 - 0x180,uVar22 - 0x1c0);
        *(undefined4 *)(puVar14 + 0x2f) = 0;
        *(undefined4 *)((int)puVar14 + 0x174) = 0;
        *(undefined4 *)(puVar14 + 0x2e) = 0;
        *(undefined4 *)((int)puVar14 + 0x17c) = 0x3f800000;
        FastVecMtx4Mul(uVar22 - 0x140,uVar22 - 0x180,uVar22 - 0x200);
        MB_MtxToQuat((float *)(puVar14 + 0xe),(float *)(uVar22 - 0x140));
      }
      piVar12[0xc] = *(int *)(puVar14 + 0x10);
      piVar12[0xd] = *(int *)((int)puVar14 + 0x84);
      piVar12[0xe] = *(int *)(puVar14 + 0x11);
      piVar12[0xf] = *(int *)((int)puVar14 + 0x8c);
      dVar31 = 0.10000000149011612;
      FastSlerp(0x3fb99999a0000000,&DAT_010c9fb0,&DAT_010c9fb0,uVar22 - 0x250);
      GetBoneTransformations(moby,3,uVar22 - 0x100);
      piVar12[0xc] = *(int *)(puVar14 + 0x38);
      piVar12[0xd] = *(int *)((int)puVar14 + 0x1c4);
      piVar12[0xe] = *(int *)(puVar14 + 0x39);
      piVar12[0xf] = *(int *)((int)puVar14 + 0x1cc);
      if ((g_Pad.buttonsPressedThisFrame & CIRCLE) != 0) {
        piVar12[9] = 0;
        piVar12[10] = 0;
      }
      iVar24 = DAT_0096ad90;
      if (((g_Pad.downButtons & CIRCLE) == 0) ||
         (puVar14[0x4b] = (longlong)(int)(animationSpeed * 15.5),
         iVar24 <= *(int *)((int)puVar14 + 0x25c))) {
        moby->glowRgba = 0x80808080;
        iVar24 = *piVar12;
        if ((iVar24 != -1) &&
           ((g_SoundChannels[iVar24].pMoby == moby &&
            (g_SoundChannels[iVar24].state != '\0')))) {
          sound_Kill(iVar24);
        }
        iVar24 = piVar12[1];
        *piVar12 = -1;
        if (((iVar24 != -1) && (g_SoundChannels[iVar24].pMoby == moby)) &&
           (g_SoundChannels[iVar24].state != '\0')) {
          sound_Kill(iVar24);
        }
        iVar24 = piVar12[3];
        piVar12[1] = -1;
        if (((iVar24 != -1) && (g_SoundChannels[iVar24].pMoby == moby)) &&
           (g_SoundChannels[iVar24].state != '\0')) {
          sound_Kill(iVar24);
        }
        piVar12[3] = -1;
      }
      else {
        dVar33 = 10.0;
        if ((int)(FLOAT_ORDER(DAT_0096bd24)) < 0x41200000) {
          iVar23 = IsMobyPlayingSound(moby,piVar12[3]);
          iVar24 = piVar12[3];
          if ((iVar23 == 0) && (iVar24 == -1)) {
            iVar24 = PlayMobySound(1,4,moby);
            piVar12[3] = iVar24;
          }
          if (iVar24 != -1) {
            iVar23 = FastDoubleToInt
                               ((double)(-(float)((double)DAT_0096bd24 * 2.0 - dVar33) * 0.016666668
                                        ));
            puVar14[0x4b] = (longlong)iVar23;
            puVar14[0x4b] = (longlong)(int)((float)(longlong)puVar14[0x4b] - 0.25);
            sound_SetPitch(iVar24,*(int *)((int)puVar14 + 0x25c));
          }
          uVar22 = FastDoubleToInt
                             ((double)(float)((double)(DAT_0096bd24 * 255.0) * dVar31));
          pMVar19 = DAT_0096bd20;
          bVar1 = DAT_0096bd20 != (MobyInstance *)0x0;
          moby->glowRgba =
               (uint)((uVar22 & 0xffffffff) << 0x10) | 0xff000000 |
               (uint)((uVar22 & 0xffffffff) << 8) | 0xff;
          if ((((bVar1) && (pMVar19->oClass == METAL_DETECTOR_SPOT_MESHLESS)) &&
              (pMVar19->state != 0xfd && pMVar19->state != 0xfe)) &&
             ((int)(FLOAT_ORDER(DAT_0096bd24)) < 0x3f800000)) {
            pvVar13 = pMVar19->pVar;
            if (0 < *(int *)((int)pvVar13 + 0x18)) {
              dVar34 = -10.0;
              dVar30 = 12.0;
              dVar31 = 0.20000000298023224;
              do {
                dVar35 = (double)MB_randRangeFloat((float)dVar36,(float)dVar33);
                *(float *)(puVar14 + 0x16) = (float)(dVar35 * (double)g_FrameTime);
                dVar35 = (double)MB_randRangeFloat((float)dVar34,(float)dVar33);
                *(float *)((int)puVar14 + 0xb4) = (float)(dVar35 * (double)g_FrameTime);
                dVar35 = (double)MB_randRangeFloat((float)dVar36,(float)dVar30);
                fVar3 = (float)(dVar35 * (double)g_FrameTime);
                fVar4 = *(float *)((int)puVar14 + 0xb4);
                fVar5 = *(float *)(puVar14 + 0x16);
                *(float *)(puVar14 + 0x17) = fVar3;
                pMVar19 = DAT_0096bd20;
                fVar9 = DAT_00969cfc * fVar4;
                fVar7 = DAT_00969cf4 * fVar4;
                fVar10 = DAT_00969cf8 * fVar4;
                fVar2 = DAT_00969cec * fVar5;
                fVar15 = DAT_00969ce4 * fVar5;
                fVar16 = DAT_00969ce8 * fVar5;
                v = &DAT_0096bd20->pos;
                fVar6 = DAT_00969d0c * fVar3;
                fVar11 = DAT_00969d04 * fVar3;
                fVar8 = DAT_00969d08 * fVar3;
                *(float *)(puVar14 + 0x16) =
                     DAT_00969d00 * fVar3 + g_heroMtx * fVar5 + DAT_00969cf0 * fVar4;
                *(float *)((int)puVar14 + 0xb4) = fVar11 + fVar15 + fVar7;
                *(float *)(puVar14 + 0x17) = fVar8 + fVar16 + fVar10;
                *(float *)((int)puVar14 + 0xbc) =
                     fVar6 + fVar2 + fVar9 + *(float *)((int)puVar14 + 0xbc);
                (pMVar19->pos).x = (f32)piVar12[4];
                (pMVar19->pos).y = (f32)piVar12[5];
                (pMVar19->pos).z = (f32)piVar12[6];
                (pMVar19->pos).w = (f32)piVar12[7];
                MB_RandomizeVector((float)dVar31,&v->x);
                MB_SpawnBolts(DAT_0096bd20,(Vec4 *)&DAT_0096bd20->pos,puVar14 + 0x16,0x13,5,0);
                pMVar19 = DAT_0096bd20;
                (DAT_0096bd20->pos).x = (f32)piVar12[4];
                (pMVar19->pos).y = (f32)piVar12[5];
                (pMVar19->pos).z = (f32)piVar12[6];
                (pMVar19->pos).w = (f32)piVar12[7];
                if (pvVar13 == (void *)0x0) {
                  M585_003d2b38();
                }
                else if (*(int *)((int)pvVar13 + 0x18) < 1) {
                  M585_003d2b38();
                }
                else {
                  *(int *)((int)pvVar13 + 0x18) = *(int *)((int)pvVar13 + 0x18) + -5;
                  M585_003d2b38(DAT_0096bd20);
                }
              } while (0 < *(int *)((int)pvVar13 + 0x18));
            }
            DeleteMoby(DAT_0096bd20);
            DAT_0096bd20 = (MobyInstance *)0x0;
            DAT_0096bd24 = 100000.0;
            piVar12[2] = 0x7fff;
            PlayMobySound(3,0,moby);
            iVar24 = piVar12[3];
            if (((iVar24 != -1) && (g_SoundChannels[iVar24].pMoby == moby)) &&
               (g_SoundChannels[iVar24].state != '\0')) {
              sound_Kill(iVar24);
            }
            piVar12[3] = -1;
          }
        }
        else {
          moby->glowRgba = 0x80808080;
          iVar24 = *piVar12;
          if (((iVar24 != -1) && (g_SoundChannels[iVar24].pMoby == moby)) &&
             (g_SoundChannels[iVar24].state != '\0')) {
            sound_Kill(iVar24);
          }
          iVar24 = piVar12[1];
          *piVar12 = -1;
          if (((iVar24 != -1) && (g_SoundChannels[iVar24].pMoby == moby)) &&
             (g_SoundChannels[iVar24].state != '\0')) {
            sound_Kill(iVar24);
          }
          iVar24 = piVar12[3];
          piVar12[1] = -1;
          if (((iVar24 != -1) && (g_SoundChannels[iVar24].pMoby == moby)) &&
             (g_SoundChannels[iVar24].state != '\0')) {
            sound_Kill(iVar24);
          }
          piVar12[3] = -1;
        }
        RegisterFuncForMoby(&PTR_M585_003d24a8_0070d758,moby);
      }
    }
  }
  return;
}


