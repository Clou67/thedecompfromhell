// game/update/camera3.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x451c8-0x46828
#include "game/update/camera3.h"
#include "game/bloaders.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x00451c8 (0x14 bytes)
void SECTION_HEADER_CAMERA_UNK(void)

{
  DAT_0071e548 = 0x10000;
  return;
}


// 0x00451f0 (0x50c bytes)
void Cam3_InitSplinePos(int param_1)

{
  double dVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint uVar7;
  Spline *pSVar8;
  Spline *pSVar9;
  Spline *pSVar10;
  undefined4 uVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong unaff_r21;
  longlong lVar17;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  int iVar18;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong uVar19;
  ulonglong unaff_r27;
  ulonglong uVar20;
  ulonglong unaff_r28;
  ulonglong uVar21;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar22;
  ulonglong in_f29;
  undefined8 uVar23;
  ulonglong in_f30;
  undefined8 uVar24;
  ulonglong in_f31;
  double dVar25;
  GPiece<16> auVar26;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar16 = uVar13 - 0x110;
  puVar12 = (ulonglong *)lVar16;
  *puVar12 = uVar13;
  puVar12[0x24] = in_LR;
  puVar12[0x1f] = in_f29;
  puVar12[0x20] = in_f30;
  puVar12[0x21] = in_f31;
  puVar12[0x1e] = unaff_r31;
  puVar12[0x18] = unaff_r25;
  iVar18 = *(int *)(param_1 + 0x70);
  iVar3 = *(int *)(ImportCameras + (int)((longlong)*(short *)(param_1 + 0x84) << 5) + 0x1c);
  *(undefined4 *)(iVar18 + 0xc0) = 0;
  *(undefined4 *)(iVar18 + 0xcc) = 0x3fc00000;
  iVar4 = *(int *)(iVar3 + 0x30);
  puVar12[0x1d] = unaff_r30;
  puVar12[0x1c] = unaff_r29;
  puVar12[0x1b] = unaff_r28;
  puVar12[0x1a] = unaff_r27;
  puVar12[0x19] = unaff_r26;
  puVar12[0x17] = unaff_r24;
  puVar12[0x16] = unaff_r23;
  puVar12[0x15] = unaff_r22;
  puVar12[0x14] = unaff_r21;
  if (iVar4 == 3) {
    *(undefined4 *)(iVar18 + 0xcc) = 0x3f000000;
  }
  iVar4 = *(int *)(param_1 + 0x70);
  *(undefined4 *)(iVar18 + 200) = 0x3e567750;
  *(undefined4 *)(iVar4 + 0xe0) = 0x40c00000;
  *(undefined4 *)(iVar4 + 0xe4) = 0x3f000000;
  *(undefined4 *)(iVar4 + 0xf0) = 0x40000000;
  puVar5 = *(undefined4 **)(param_1 + 0x70);
  puVar5[4] = 0x3c23d70a;
  puVar5[5] = 0x3e333333;
  dVar25 = 0.0;
  puVar5[6] = 0;
  *(undefined2 *)(puVar5 + 7) = 0;
  puVar5[8] = 0x3a03126f;
  puVar5[9] = 0;
  puVar5[3] = 0;
  puVar5[2] = 0;
  puVar5[1] = 0;
  *puVar5 = 0;
  iVar18 = *(int *)(param_1 + 0x70);
  *(undefined4 *)(iVar18 + 0x50) = 0x3c23d70a;
  *(undefined4 *)(iVar18 + 0x54) = 0x3e99999a;
  *(undefined4 *)(iVar18 + 0x58) = 0x3e4ccccd;
  *(undefined2 *)(iVar18 + 0x5c) = 0;
  *(undefined4 *)(iVar18 + 0x3c) = 0;
  *(undefined4 *)(iVar18 + 0x38) = 0;
  *(undefined4 *)(iVar18 + 0x34) = 0;
  *(undefined4 *)(iVar18 + 0x30) = 0;
  iVar18 = *(int *)(param_1 + 0x70);
  *(undefined4 *)(iVar18 + 0x10c) = 0;
  *(undefined4 *)(iVar18 + 0x108) = 0;
  *(undefined4 *)(iVar18 + 0x104) = 0;
  *(undefined4 *)(iVar18 + 0x100) = 0;
  *(undefined4 *)(iVar18 + 300) = 0;
  *(undefined4 *)(iVar18 + 0x128) = 0;
  *(undefined4 *)(iVar18 + 0x124) = 0;
  *(undefined4 *)(iVar18 + 0x120) = 0;
  *(undefined4 *)(iVar18 + 0x140) = 0x40400000;
  *(undefined4 *)(iVar18 + 0x130) = 0x3b449ba6;
  *(undefined4 *)(iVar18 + 0x134) = 0x3dcccccd;
  *(undefined4 *)(iVar18 + 0x138) = 0x3e4ccccd;
  *(undefined4 *)(iVar18 + 0x13c) = 0;
  iVar18 = *(int *)(param_1 + 0x70);
  *(undefined4 *)(iVar18 + 0x150) = 0;
  *(undefined4 *)(iVar18 + 0x154) = 0;
  *(undefined4 *)(iVar18 + 0x158) = 0;
  *(undefined4 *)(iVar18 + 0x15c) = 0;
  *(undefined4 *)(iVar18 + 0x160) = 1;
  if ((*(int *)(iVar3 + 0x30) == 2) && (*(short *)(iVar3 + 0x34) == 0)) {
    pSVar8 = Splines[*(int *)(iVar3 + 0x28)];
    uVar21 = ZEXT48(pSVar8);
    puVar6 = *(uint **)(g_GrindPaths + *(int *)(iVar3 + 0x24) * 0x20 + 0x10);
    pSVar9 = Splines[*(int *)(iVar3 + 0x20)];
    *(undefined2 *)(iVar3 + 0x34) = 1;
    uVar7 = pSVar8->cnt;
    pSVar10 = Splines[*(int *)(iVar3 + 0x2c)];
    uVar20 = ZEXT48(pSVar10);
    if (0 < (int)uVar7) {
      iVar18 = 0;
      uVar24 = 0x4034000000000000;
      uVar23 = 0x4014000000000000;
      lVar14 = uVar21 + 0x1c;
      uVar19 = uVar21;
      do {
        MB_PathFollowToPos
                  (uVar24,uVar23,dVar25,pSVar9,uVar19 + 0x10,uVar13 - 0x90,uVar13 - 0x80,
                   uVar13 - 0x7c);
        iVar18 = iVar18 + 1;
        *(undefined4 *)((int)uVar19 + 0x10) = *(undefined4 *)((int)uVar19 + 0x1c);
        auVar26 = loadVectorLeftIndexed(0x90,lVar16);
        auVar26 = vectorConvertFromSignedFixedPointWord(auVar26,0);
        auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar11 = storeVectorElementWordIndexed
                           (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0,lVar14);
        *(undefined4 *)((uint)lVar14 & 0xfffffffc) = uVar11;
        uVar7 = pSVar8->cnt;
        lVar14 = lVar14 + 0x10;
        uVar19 = uVar19 + 0x10;
      } while (iVar18 < (int)uVar7);
    }
    if (0 < (int)uVar7) {
      lVar14 = 0;
      lVar15 = (ulonglong)uVar7 - 1;
      do {
        lVar17 = lVar14;
        lVar14 = FastDoubleToInt
                           ((double)*(float *)((int)&pSVar8->points[0].w + (int)(lVar15 << 4)));
        lVar15 = FastDoubleToInt((double)*(float *)((int)uVar21 + 0x1c));
        lVar15 = lVar15 - lVar14;
        if ((int)lVar15 < 0) {
          lVar15 = lVar15 + (ulonglong)(uint)pSVar9->cnt;
        }
        *(undefined4 *)((int)puVar12 + 0x94) = 0;
        dVar22 = dVar25;
        if (0 < (int)lVar15) {
          do {
            lVar15 = lVar15 + -1;
            fVar2 = (float)(dVar22 + (double)pSVar9->points
                                             [(int)((lVar17 + lVar14) -
                                                   (longlong)((int)(lVar17 + lVar14) / pSVar9->cnt)
                                                   * (longlong)pSVar9->cnt)].w);
            dVar22 = (double)fVar2;
            *(float *)((int)puVar12 + 0x94) = fVar2;
          } while (0 < (int)lVar15);
        }
        *(float *)((int)uVar21 + 0x14) = (float)dVar22;
        uVar21 = uVar21 + 0x10;
        lVar14 = lVar17 + 1;
        lVar15 = lVar17;
      } while ((int)(lVar17 + 1) < pSVar8->cnt);
    }
    uVar7 = pSVar10->cnt;
    if (0 < (int)uVar7) {
      iVar18 = 0;
      uVar24 = 0x4034000000000000;
      uVar23 = 0x4014000000000000;
      lVar14 = uVar20 + 0x1c;
      uVar21 = uVar20;
      do {
        MB_PathFollowToPos
                  (uVar24,uVar23,dVar25,puVar6,uVar21 + 0x10,uVar13 - 0x90,uVar13 - 0x80,
                   uVar13 - 0x7c);
        iVar18 = iVar18 + 1;
        *(undefined4 *)((int)uVar21 + 0x10) = *(undefined4 *)((int)uVar21 + 0x1c);
        auVar26 = loadVectorLeftIndexed(0x90,lVar16);
        auVar26 = vectorConvertFromSignedFixedPointWord(auVar26,0);
        auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar11 = storeVectorElementWordIndexed
                           (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0,lVar14);
        *(undefined4 *)((uint)lVar14 & 0xfffffffc) = uVar11;
        uVar7 = pSVar10->cnt;
        lVar14 = lVar14 + 0x10;
        uVar21 = uVar21 + 0x10;
      } while (iVar18 < (int)uVar7);
    }
    if (0 < (int)uVar7) {
      lVar16 = (ulonglong)uVar7 - 1;
      lVar14 = 0;
      do {
        lVar16 = FastDoubleToInt
                           ((double)*(float *)((int)&pSVar10->points[0].w + (int)(lVar16 << 4)));
        lVar15 = FastDoubleToInt((double)*(float *)((int)uVar20 + 0x1c));
        lVar15 = lVar15 - lVar16;
        if ((int)lVar15 < 0) {
          lVar15 = lVar15 + (ulonglong)*puVar6;
        }
        *(undefined4 *)((int)puVar12 + 0x94) = 0;
        dVar22 = dVar25;
        if (0 < (int)lVar15) {
          do {
            lVar15 = lVar15 + -1;
            dVar1 = dVar22 + (double)(float)puVar6[(int)((lVar14 + lVar16) -
                                                        (longlong)
                                                        ((int)(lVar14 + lVar16) / (int)*puVar6) *
                                                        (longlong)(int)*puVar6) * 4 + 7];
            dVar22 = (double)(float)dVar1;
            *(float *)((int)puVar12 + 0x94) = (float)dVar1;
          } while (0 < (int)lVar15);
        }
        *(float *)((int)uVar20 + 0x14) = (float)dVar22;
        lVar15 = lVar14 + 1;
        uVar20 = uVar20 + 0x10;
        lVar16 = lVar14;
        lVar14 = lVar15;
      } while ((int)lVar15 < pSVar10->cnt);
    }
  }
  *(undefined2 *)(param_1 + 0x7e) = 0;
  return;
}


// 0x0045728 (0xcd8 bytes)
// inlined: FastRSqrt @0x46208, FastRSqrt @0x46280, FastRSqrt @0x4631c
void UpdateCamera_3(UpdateCam *pCam)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  float *pfVar6;
  int *piVar7;
  Spline *pSVar8;
  Spline *pSVar9;
  Spline *pSVar10;
  Vec4 *speed;
  int iVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  int iVar15;
  undefined8 in_r7;
  Spline *pSVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  float fVar28;
  float fVar29;
  float local_120;
  float local_11c;
  float local_118;
  undefined4 local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  GPiece<4> local_c0;
  GPiece<4> local_bc;
  GPiece<4> local_b8;
  GPiece<4> local_b4;
  GPiece<4> local_b0;
  GPiece<4> local_ac;
  GPiece<4> local_a8;
  GPiece<12> local_a4;
  
  fVar28 = DAT_0096a248;
  iVar11 = DAT_0096a244;
  pvVar5 = pCam->control;
  dVar27 = 0.009999999776482582;
  pfVar6 = *(float **)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  dVar26 = (double)*pfVar6;
  fVar29 = pfVar6[8];
  if (pfVar6[0xc] == 0.0) {
    *(float *)((int)pvVar5 + 0x154) = DAT_0096a248;
    *(int *)((int)pvVar5 + 0x150) = iVar11;
    MB_PathMoveDist
              (0x3ff0000000000000,Splines[(int)fVar29],&local_120,(int)pvVar5 + 0x150,
               (int)pvVar5 + 0x154,in_r7,0);
    *(float *)((int)pvVar5 + 0x80) = local_120;
    *(float *)((int)pvVar5 + 0x84) = local_11c;
    *(float *)((int)pvVar5 + 0x88) = local_118;
    pSVar8 = Splines[(int)fVar29];
    *(undefined4 *)((int)pvVar5 + 0x8c) = local_114;
    speed = pSVar8->points + iVar11 + -1;
    fVar29 = (float)((double)speed[2].y - (double)speed[1].y);
    fVar1 = (float)((double)speed[2].x - (double)speed[1].x);
    fVar2 = (float)((double)speed[2].z - (double)speed[1].z);
    dVar25 = 0.0;
    fVar3 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar29 * fVar29);
    dVar24 = 0.17499999701976776;
    fVar28 = (speed[1].w * (fVar28 / *(float *)(g_heroGrindPath + iVar11 * 0x10 + 0x1c))) / fVar3;
    dVar22 = dVar25;
    if (0.0 - fVar3 < 0.0) {
      dVar22 = (double)(fVar28 * fVar29);
    }
    dVar20 = dVar25;
    if (0.0 - fVar3 < 0.0) {
      dVar20 = (double)(fVar28 * fVar2);
    }
    dVar21 = dVar25;
    if (0.0 - fVar3 < 0.0) {
      dVar21 = (double)(fVar28 * fVar1);
    }
    if (fVar3 - 0.0 < 0.0) {
      dVar22 = (double)(fVar28 * fVar29);
    }
    if (fVar3 - 0.0 < 0.0) {
      dVar20 = (double)(fVar28 * fVar2);
    }
    if (fVar3 - 0.0 < 0.0) {
      dVar21 = (double)(fVar28 * fVar1);
    }
    dVar23 = (double)(float)((double)speed[1].y + dVar22);
    dVar22 = (double)(float)((double)speed[1].z + dVar20);
    fVar28 = Cam_InterpValues(pCam->pos[0],(float)((double)speed[1].x + dVar21),(float)dVar27,0.175,
                              0.0,&speed->x);
    fVar29 = pCam->pos[1];
    pCam->pos[0] = fVar28;
    fVar29 = Cam_InterpValues(fVar29,(float)dVar23,(float)dVar27,(float)dVar24,(float)dVar25,
                              &speed->x);
    pCam->pos[1] = fVar29;
    fVar29 = Cam_InterpValues(pCam->pos[2],(float)dVar22,(float)dVar27,(float)dVar24,(float)dVar25,
                              &speed->x);
    pCam->pos[2] = fVar29;
  }
  else if (pfVar6[0xc] == 2.8026e-45) {
    uVar18 = 0;
    pSVar8 = Splines[(int)fVar29];
    pSVar9 = Splines[(int)pfVar6[0xb]];
    piVar7 = *(int **)(g_GrindPaths + (int)pfVar6[9] * 0x20 + 0x10);
    pSVar10 = Splines[(int)pfVar6[10]];
    uVar17 = (ulonglong)(uint)pSVar9->cnt - 1;
    uVar19 = uVar18;
    pSVar16 = pSVar9;
    if (0 < pSVar9->cnt) {
      do {
        iVar11 = FastDoubleToInt
                           ((double)*(float *)((int)&pSVar9->points[0].w + (int)(uVar17 << 4)));
        iVar12 = FastDoubleToInt((double)pSVar16->points[0].w);
        uVar19 = uVar18;
        if (iVar12 < iVar11) {
          if (iVar11 <= DAT_0096a244) break;
joined_r0x00045a4c:
          if (DAT_0096a244 < iVar12) break;
        }
        else if (iVar11 <= DAT_0096a244) goto joined_r0x00045a4c;
        uVar19 = uVar18 + 1;
        uVar17 = uVar18;
        uVar18 = uVar19;
        pSVar16 = (Spline *)pSVar16->points;
      } while ((int)uVar19 < pSVar9->cnt);
    }
    *(int *)((int)pvVar5 + 0x160) = (int)uVar19;
    iVar11 = pSVar9->cnt;
    iVar12 = (int)uVar19 + iVar11 + -1;
    iVar12 = iVar12 - (iVar12 / iVar11) * iVar11;
    dVar25 = 0.0;
    iVar11 = (int)((uVar19 & 0xfffffff) << 4);
    dVar24 = (double)*(float *)((int)pSVar9 + (iVar12 * 4 + 4) * 4);
    dVar21 = (double)*(float *)((int)&pSVar9->points[0].y + iVar11);
    dVar20 = (double)*(float *)((int)&pSVar10->points[0].y + iVar11);
    dVar22 = dVar26;
    if (0.0 - dVar24 < 0.0) {
      dVar22 = dVar24;
    }
    dVar26 = dVar22;
    if (dVar24 - 0.0 < 0.0) {
      dVar26 = dVar24;
    }
    iVar11 = FastDoubleToInt
                       ((double)*(float *)((int)pSVar9 + (iVar12 * 4 + 7) * 4),dVar22);
    iVar13 = DAT_0096a244 - iVar11;
    dVar22 = dVar25;
    if (iVar13 < 0) {
      iVar13 = iVar13 + *piVar7;
    }
    for (; 0 < iVar13; iVar13 = iVar13 + -1) {
      iVar15 = iVar11 - (iVar11 / *piVar7) * *piVar7;
      iVar11 = iVar11 + 1;
      dVar22 = (double)(float)(dVar22 + (double)(float)piVar7[iVar15 * 4 + 7]);
    }
    dVar22 = (double)(float)((double)(float)(dVar22 + (double)DAT_0096a248) / dVar21);
    dVar24 = (double)(float)(dVar20 * dVar22);
    FastDoubleToInt((double)*(float *)((int)pSVar10 + iVar12 * 0x10 + 0x1c),dVar22);
    MB_PathMoveDist(dVar24,pSVar8,&local_e0,local_b8,local_b4);
    dVar22 = (double)*(float *)((int)pSVar10 + iVar12 * 0x10 + 0x10);
    dVar24 = (double)*(float *)((int)pvVar5 + 0x10);
    pfVar14 = (float *)&DAT_000456fc;
    if (dVar25 - dVar22 < 0.0) {
      dVar27 = (double)(float)(dVar22 * dVar27);
    }
    dVar22 = dVar24 - 0.0001500000071246177;
    if (dVar24 - dVar27 < 0.0) {
      dVar22 = dVar24 + 0.0001500000071246177;
    }
    dVar22 = (double)(float)dVar22;
    if (ABS((float)(dVar24 - dVar27)) - 0.00015 < 0.0) {
      dVar22 = dVar27;
    }
    *(float *)((int)pvVar5 + 0x10) = (float)dVar22;
    dVar24 = 0.17499999701976776;
    fVar29 = Cam_InterpValues(pCam->pos[0],local_e0,(float)dVar22,0.175,(float)dVar25,
                              (float *)&DAT_000456fc);
    pCam->pos[0] = fVar29;
    fVar29 = Cam_InterpValues(pCam->pos[1],local_dc,*(float *)((int)pvVar5 + 0x10),(float)dVar24,
                              (float)dVar25,pfVar14);
    pCam->pos[1] = fVar29;
    fVar29 = Cam_InterpValues(pCam->pos[2],local_d8,*(float *)((int)pvVar5 + 0x10),(float)dVar24,
                              (float)dVar25,pfVar14);
    pCam->pos[2] = fVar29;
  }
  else {
    pSVar8 = Splines[(int)fVar29];
    if ((int)pfVar6[9] < 0) {
      MB_PathFollowToPos
                (0x4034000000000000,0x3ff0000000000000,0,pSVar8,&g_heroPosition,&local_110,local_c0,
                 local_bc,&DAT_000456fc,0);
      if (*(short *)((int)pfVar6 + 0x36) == 1) {
        fVar29 = pfVar6[0xe] * -4.0;
      }
      else {
        fVar29 = pfVar6[0xe];
      }
      MB_PathMoveDist((double)fVar29,pSVar8,&local_110,local_c0,local_bc);
      local_11c = local_10c;
      local_118 = local_108;
    }
    else {
      MB_PathMoveDist
                ((double)pfVar6[0xe],g_heroGrindPath,&local_110,local_b0,local_ac,g_heroGrindPath,1);
      MB_PathFollowToPos
                (0x4034000000000000,0x3ff0000000000000,0,pSVar8,&local_110,&local_120,local_c0,
                 local_bc,&DAT_000456fc,0);
      local_110 = local_120;
    }
    pfVar14 = (float *)&DAT_000456fc;
    dVar24 = 0.17499999701976776;
    dVar22 = 0.0;
    fVar28 = Cam_InterpValues(pCam->pos[0],local_110,(float)dVar27,0.175,0.0,(float *)&DAT_000456fc)
    ;
    fVar29 = pCam->pos[1];
    pCam->pos[0] = fVar28;
    fVar29 = Cam_InterpValues(fVar29,local_11c,(float)dVar27,(float)dVar24,(float)dVar22,pfVar14);
    pCam->pos[1] = fVar29;
    fVar29 = Cam_InterpValues(pCam->pos[2],local_118,(float)dVar27,(float)dVar24,(float)dVar22,
                              pfVar14);
    pCam->pos[2] = fVar29;
  }
  if ((int)pfVar6[9] < 0) {
    pSVar8 = Splines[(int)pfVar6[8]];
    MB_PathFollowToPos
              (0x4034000000000000,0x3ff0000000000000,0,pSVar8,&g_heroPosition,&local_100,local_c0,
               local_bc,&DAT_000456fc,0);
    if ((Level == Oltanis) && (pfVar6[0xc] == 0.0)) {
      MB_PathMoveDist(dVar26,pSVar8,&local_d0,local_c0,local_bc);
    }
    else {
      MB_PathMoveDist(dVar26,pSVar8,&local_d0,local_c0,local_bc);
    }
    local_100 = g_heroPosition.x + (local_d0 - local_100);
    local_fc = g_heroPosition.y + (local_cc - local_fc);
    local_f8 = g_heroPosition.z + (local_c8 - local_f8);
  }
  else {
    MB_PathMoveDist(dVar26,g_heroGrindPath,&local_100,local_a8,local_a4,&g_heroMtx,1);
  }
  dVar22 = 0.0;
  fVar29 = SQRT((float)GameCamera.camStatics.heroUp.z * (float)GameCamera.camStatics.heroUp.z +
                GameCamera.camStatics.heroUp.x * GameCamera.camStatics.heroUp.x +
                (float)GameCamera.camStatics.heroUp.y * (float)GameCamera.camStatics.heroUp.y);
  fVar28 = *(float *)((int)pvVar5 + 0xcc) / fVar29;
  dVar26 = dVar22;
  if (0.0 - fVar29 < 0.0) {
    dVar26 = (double)((float)GameCamera.camStatics.heroUp.y * fVar28);
  }
  dVar24 = dVar22;
  if (0.0 - fVar29 < 0.0) {
    dVar24 = (double)(GameCamera.camStatics.heroUp.x * fVar28);
  }
  dVar25 = dVar22;
  if (0.0 - fVar29 < 0.0) {
    dVar25 = (double)((float)GameCamera.camStatics.heroUp.z * fVar28);
  }
  if (fVar29 - 0.0 < 0.0) {
    dVar26 = (double)((float)GameCamera.camStatics.heroUp.y * fVar28);
  }
  if (fVar29 - 0.0 < 0.0) {
    dVar24 = (double)(GameCamera.camStatics.heroUp.x * fVar28);
  }
  if (fVar29 - 0.0 < 0.0) {
    dVar25 = (double)((float)GameCamera.camStatics.heroUp.z * fVar28);
  }
  fVar29 = (float)(dVar26 + (double)local_fc) - pCam->pos[1];
  fVar1 = (float)(dVar24 + (double)local_100) - pCam->pos[0];
  fVar28 = (float)(dVar25 + (double)local_f8) - pCam->pos[2];
  dVar24 = (double)*(float *)((int)pvVar5 + 0x50);
  fVar2 = fVar28 * fVar28 + fVar1 * fVar1 + fVar29 * fVar29;
  dVar26 = dVar22;
  if (SQRT(fVar2) != 0.0) {
    fVar3 = 1.0 / SQRT(fVar2);
    fVar3 = -(fVar2 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar3 = -(fVar2 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar3 = -(fVar2 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar28 = fVar28 * fVar3 * pCam->mtx[2] +
             fVar1 * fVar3 * pCam->mtx[0] + fVar29 * fVar3 * pCam->mtx[1];
    fVar29 = fVar28;
    if (fVar28 - 0.0 < 0.0) {
      fVar29 = ABS(fVar28);
    }
    dVar26 = (double)(1.0 - fVar29);
    if ((double)(1.0 - fVar29) - 0.0 < 0.0) {
      dVar26 = dVar22;
    }
    fVar1 = 1.0;
    if (fVar28 - 0.0 < 0.0) {
      fVar1 = -1.0;
    }
    dVar26 = -(double)(-((fVar29 * fVar29 * fVar29 * DAT_007358cc +
                         fVar29 * fVar29 * DAT_007358c8 + fVar29 * DAT_007358c4 + DAT_007358c0) *
                         (float)SQRT(dVar26) - 1.5707964) * fVar1 - 1.5707964);
  }
  dVar25 = dVar24 - 0.0001500000071246177;
  if (dVar24 - dVar27 < 0.0) {
    dVar25 = dVar24 + 0.0001500000071246177;
  }
  dVar25 = (double)(float)dVar25;
  if (ABS((float)(dVar24 - dVar27)) - 0.00015 < 0.0) {
    dVar25 = dVar27;
  }
  *(float *)((int)pvVar5 + 0x50) = (float)dVar25;
  dVar26 = (double)Cam_InterpAngles(0,dVar26,dVar25,0x3fc6666660000000,0);
  MB_RotateQuatAxisAngle((float)dVar26,pCam->mtx,pCam->rot);
  fVar29 = pCam->mtx[1];
  fVar28 = pCam->mtx[0];
  fVar1 = pCam->mtx[2];
  dVar26 = (double)(float)GameCamera.camStatics.heroUp.y;
  dVar27 = (double)(float)GameCamera.camStatics.heroUp.z;
  dVar24 = (double)GameCamera.camStatics.heroUp.x;
  fVar2 = fVar1 * fVar1 + fVar28 * fVar28 + fVar29 * fVar29;
  if ((double)SQRT(fVar2) == dVar22) {
    fVar3 = pCam->mtx[1];
    pCam->rot[0] = pCam->mtx[0];
    fVar4 = pCam->mtx[2];
    pCam->rot[1] = fVar3;
    fVar3 = pCam->mtx[3];
    pCam->rot[2] = fVar4;
    dVar25 = dVar22;
    dVar20 = dVar22;
    dVar21 = dVar22;
  }
  else {
    fVar4 = 1.0 / SQRT(fVar2);
    fVar4 = -(fVar2 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar3 = pCam->mtx[3];
    fVar4 = -(fVar2 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar2 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    dVar21 = (double)(fVar28 * fVar4);
    dVar20 = (double)(fVar29 * fVar4);
    dVar25 = (double)(fVar1 * fVar4);
  }
  pCam->rot[3] = fVar3;
  pCam->rot[2] = (float)dVar25;
  pCam->rot[1] = (float)dVar20;
  pCam->rot[0] = (float)dVar21;
  dVar25 = dVar22;
  dVar20 = dVar22;
  dVar21 = dVar22;
  if ((double)SQRT(fVar2) != dVar22) {
    fVar3 = 1.0 / SQRT(fVar2);
    fVar3 = -(fVar2 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar3 = -(fVar2 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar3 = -(fVar2 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    dVar21 = (double)(fVar28 * fVar3);
    dVar20 = (double)(fVar29 * fVar3);
    dVar25 = (double)(fVar1 * fVar3);
  }
  pCam->mtx[0] = (float)dVar21;
  pCam->mtx[1] = (float)dVar20;
  pCam->mtx[2] = (float)dVar25;
  fVar29 = (float)(dVar27 * dVar21 - (double)(float)(dVar24 * dVar25));
  fVar28 = (float)(dVar26 * dVar25 - (double)(float)(dVar27 * dVar20));
  fVar1 = (float)(dVar24 * dVar20 - (double)(float)(dVar26 * dVar21));
  pCam->mtx[7] = 0.0;
  fVar2 = fVar1 * fVar1 + fVar28 * fVar28 + fVar29 * fVar29;
  dVar26 = dVar22;
  dVar27 = dVar22;
  if ((double)SQRT(fVar2) != dVar22) {
    fVar3 = 1.0 / SQRT(fVar2);
    fVar3 = -(fVar2 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar3 = -(fVar2 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar3 = -(fVar2 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    dVar26 = (double)(fVar28 * fVar3);
    dVar22 = (double)(fVar29 * fVar3);
    dVar27 = (double)(fVar1 * fVar3);
  }
  pCam->mtx[4] = (float)dVar26;
  pCam->mtx[5] = (float)dVar22;
  pCam->mtx[6] = (float)dVar27;
  pCam->mtx[0xb] = 0.0;
  pCam->mtx[8] = (float)(dVar20 * dVar27 - (double)(float)(dVar25 * dVar22));
  pCam->mtx[9] = (float)(dVar25 * dVar26 - (double)(float)(dVar21 * dVar27));
  pCam->mtx[10] = (float)(dVar21 * dVar22 - (double)(float)(dVar20 * dVar26));
  return;
}


// 0x0046400 (0x8 bytes)
int ActivateCamera_3(UpdateCam *pCam,UpdateCam *pCurr)

{
  return 0;
}


// 0x0046418 (0x364 bytes)
// inlined: FastRSqrt @0x466d4
void InitCamera_3(UpdateCam *pCam)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  Spline *pSVar7;
  uint uVar8;
  void *pvVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  Spline *pSVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  GPiece<16> auStack_50;
  GPiece<4> local_40;
  GPiece<12> local_3c;
  
  pvVar9 = GameCamera.pLastUpdCam;
  iVar6 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  pCam->pos[0] = *(float *)((int)GameCamera.pLastUpdCam + 0x30);
  pCam->pos[1] = *(float *)((int)pvVar9 + 0x34);
  pCam->pos[2] = *(float *)((int)pvVar9 + 0x38);
  pCam->pos[3] = *(float *)((int)pvVar9 + 0x3c);
                    /* WARNING: Load size is inaccurate */
  fVar1 = *pvVar9;
  pCam->mtx[0] = fVar1;
  fVar2 = *(float *)((int)pvVar9 + 4);
  pCam->mtx[1] = fVar2;
  fVar3 = *(float *)((int)pvVar9 + 8);
  pCam->mtx[2] = fVar3;
  fVar4 = *(float *)((int)pvVar9 + 0xc);
  pCam->mtx[3] = fVar4;
  pCam->mtx[4] = *(float *)((int)pvVar9 + 0x10);
  pCam->mtx[5] = *(float *)((int)pvVar9 + 0x14);
  pCam->mtx[6] = *(float *)((int)pvVar9 + 0x18);
  pCam->mtx[7] = *(float *)((int)pvVar9 + 0x1c);
  pCam->mtx[8] = *(float *)((int)pvVar9 + 0x20);
  pCam->mtx[9] = *(float *)((int)pvVar9 + 0x24);
  iVar11 = *(int *)(iVar6 + 0x20);
  pCam->mtx[10] = *(float *)((int)pvVar9 + 0x28);
  fVar5 = *(float *)((int)pvVar9 + 0x2c);
  pCam->rot[0] = fVar1;
  pCam->mtx[0xb] = fVar5;
  pCam->rot[1] = fVar2;
  pCam->rot[2] = fVar3;
  pCam->rot[3] = fVar4;
  if (-1 < iVar11) {
    iVar12 = 0;
    pSVar7 = Splines[iVar11];
    iVar11 = pSVar7->cnt;
    pSVar13 = pSVar7;
    if (0 < iVar11) {
      do {
        iVar12 = iVar12 + 1;
        pfVar10 = (float *)((int)pSVar7 + ((iVar12 - (iVar12 / iVar11) * iVar11) * 4 + 4) * 4);
        fVar1 = pSVar13->points[0].y - pfVar10[1];
        fVar2 = pSVar13->points[0].x - *pfVar10;
        fVar3 = pSVar13->points[0].z - pfVar10[2];
        pSVar13->points[0].w = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
        iVar11 = pSVar7->cnt;
        pSVar13 = (Spline *)pSVar13->points;
      } while (iVar12 < iVar11);
    }
  }
  *(undefined2 *)(iVar6 + 0x36) = 0;
  if (*(int *)(iVar6 + 0x30) == 3) {
    dVar18 = 0.0;
    dVar19 = 1.0;
    pSVar7 = Splines[*(int *)(iVar6 + 0x20)];
    iVar11 = MB_PathFollowToPos
                       (0x4034000000000000,0x3ff0000000000000,0,pSVar7,&g_heroPosition,auStack_50,
                        local_40,local_3c);
    if (iVar11 != 0) {
      iVar11 = pSVar7->cnt;
      uVar8 = (uint)(1 - (longlong)iVar11 >> 0x3f) & 1U - (iVar11 + -1);
      fVar1 = pSVar7->points[uVar8 + iVar11 + -1].y - pSVar7->points[0].y;
      fVar2 = pSVar7->points[uVar8 + iVar11 + -1].x - pSVar7->points[0].x;
      fVar3 = pSVar7->points[uVar8 + iVar11 + -1].z - pSVar7->points[0].z;
      dVar15 = (double)(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      if (((double)(float)SQRT(dVar15) != dVar18) && (iVar11 + -1 + uVar8 != 0)) {
        dVar14 = dVar18;
        dVar16 = dVar18;
        dVar17 = dVar18;
        if ((double)(float)SQRT(dVar15) != dVar18) {
          dVar14 = 1.0 / SQRT(dVar15);
          dVar14 = (double)(float)(-(double)(float)((double)(float)(dVar15 * dVar14) * dVar14 -
                                                   dVar19) * (double)(float)(dVar14 * 0.5) + dVar14)
          ;
          dVar14 = (double)(float)(-(double)(float)((double)(float)(dVar15 * dVar14) * dVar14 -
                                                   dVar19) * (double)(float)(dVar14 * 0.5) + dVar14)
          ;
          fVar4 = (float)(-(double)(float)((double)(float)(dVar15 * dVar14) * dVar14 - dVar19) *
                          (double)(float)(dVar14 * 0.5) + dVar14);
          dVar17 = (double)(fVar2 * fVar4);
          dVar16 = (double)(fVar1 * fVar4);
          dVar14 = (double)(fVar3 * fVar4);
        }
        if (dVar18 < (double)(float)(dVar14 * (double)(pCam->pos[2] - g_heroPosition.z) +
                                    (double)(float)(dVar17 * (double)(pCam->pos[0] -
                                                                     g_heroPosition.x) +
                                                   (double)(float)(dVar16 * (double)(pCam->pos[1] -
                                                                                    g_heroPosition.y
                                                                                    ))))) {
          *(undefined2 *)(iVar6 + 0x36) = 1;
        }
      }
    }
  }
  Cam3_InitSplinePos(pCam);
  return;
}


// 0x004677c (0xac bytes)
void ExitCamera_3(UpdateCam *pCam)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  if ((g_HeroRequestedCamType != pCam->type) ||
     ((iVar2 = *(int *)(iVar1 + 0x24), -1 < iVar2 &&
      ((g_heroGrindPath != *(int *)(g_GrindPaths + iVar2 * 0x20 + 0x10) || (DAT_0096a250 != 0)))))) {
    (pCam->activation).deactivate =
         ((ushort)(ZERO_MASK((3 - *(int *)(iVar1 + 0x30)))) & 2) + 3;
  }
  return;
}


