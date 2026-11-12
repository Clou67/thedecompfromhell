// game/update/moby635.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 17 functions, 0x3f5b10-0x3f9bac
// shared update function UpdateMoby_{635_1382}; registered for oClasses 635, 1382
#include "game/update/moby635.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby633.h"
#include "game/update/moby849.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"

// 0x03f5b10 (0x238 bytes)
// inlined: FastRSqrt @0x3f5bcc
undefined8
M1382_003f5b10(double param_1,undefined4 param_2,MobyInstance *param_3)

{
  void *pvVar1;
  float fVar2;
  undefined8 uVar3;
  GPiece<16> local_a0;
  GPiece<88> auStack_90;
  
  if (param_3->state == '\x03') {
    uVar3 = 0;
  }
  else {
    FastEulerToMtx1(auStack_90,ZEXT48(param_3->pVar) + 0x10);
    pvVar1 = param_3->pVar;
    MB_MtxFromDir
              ((double)(DAT_00854468 * 0.017453292 * g_FrameTime),pvVar1,local_a0);
    param_3->modeBits = param_3->modeBits | LOCK_ROTATION;
    *(undefined4 *)((int)pvVar1 + 0x4c) = 0;
    *(undefined4 *)((int)pvVar1 + 0x44) = 0;
    *(undefined4 *)((int)pvVar1 + 0x40) = 0;
    fVar2 = g_FrameTime;
    *(undefined4 *)((int)pvVar1 + 0x74) = 0;
    *(undefined4 *)((int)pvVar1 + 0x78) = param_2;
    *(float *)((int)pvVar1 + 100) = (float)param_1;
    *(undefined4 *)((int)pvVar1 + 0x7c) = 0x3f000000;
    *(float *)((int)pvVar1 + 0x48) = fVar2 * 8.0;
    *(float *)((int)pvVar1 + 0x70) = fVar2 * 8.0;
    if (DAT_010cbbd4 + (int)(animationSpeed * 3.5) < worldUpdateTime) {
      DAT_010cbbd4 = worldUpdateTime;
      PlayMobySound(0,0x20,param_3);
    }
    uVar3 = 1;
    param_3->state = '\x03';
  }
  return uVar3;
}


// 0x03f5d90 (0x7e0 bytes)
void M1382_003f5d90(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
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
  GPiece<32> local_100;
  GPiece<16> local_e0;
  GPiece<24> local_d0;
  
  iVar8 = *(int *)(param_1 + 0x78);
  if (*(short *)(iVar8 + 0x6c) != 0) {
    fVar1 = *(float *)(param_1 + 0xe4);
    fVar2 = *(float *)(param_1 + 0xe0);
    fVar3 = *(float *)(param_1 + 0xe8);
    fVar4 = *(float *)(param_1 + 0xc4);
    fVar5 = *(float *)(param_1 + 0xc0);
    fVar6 = *(float *)(param_1 + 200);
    fVar14 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
    fVar7 = 0.0;
    fVar15 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
    fVar9 = DAT_00854430 / fVar14;
    fVar13 = DAT_00854434 / fVar15;
    fVar12 = fVar7;
    if (0.0 - fVar14 < 0.0) {
      fVar12 = fVar1 * fVar9;
    }
    fVar11 = fVar7;
    if (0.0 - fVar14 < 0.0) {
      fVar11 = fVar2 * fVar9;
    }
    fVar10 = fVar7;
    if (0.0 - fVar14 < 0.0) {
      fVar10 = fVar3 * fVar9;
    }
    if (fVar14 - 0.0 < 0.0) {
      fVar12 = fVar1 * fVar9;
    }
    if (fVar14 - 0.0 < 0.0) {
      fVar11 = fVar2 * fVar9;
    }
    if (fVar14 - 0.0 < 0.0) {
      fVar10 = fVar3 * fVar9;
    }
    fVar1 = fVar7;
    if (0.0 - fVar15 < 0.0) {
      fVar1 = fVar4 * fVar13;
    }
    fVar2 = fVar7;
    if (0.0 - fVar15 < 0.0) {
      fVar2 = fVar5 * fVar13;
    }
    if (0.0 - fVar15 < 0.0) {
      fVar7 = fVar6 * fVar13;
    }
    if (fVar15 - 0.0 < 0.0) {
      fVar1 = fVar4 * fVar13;
    }
    if (fVar15 - 0.0 < 0.0) {
      fVar2 = fVar5 * fVar13;
    }
    if (fVar15 - 0.0 < 0.0) {
      fVar7 = fVar6 * fVar13;
    }
    fVar4 = (*(float *)(param_1 + 0x14) + fVar12 + fVar1) - GameCamera.posY;
    fVar5 = (*(float *)(param_1 + 0x10) + fVar11 + fVar2) - GameCamera.posX;
    fVar6 = (*(float *)(param_1 + 0x18) + fVar10 + fVar7) - GameCamera.posZ;
    fVar1 = fVar4 * 1024.0;
    fVar2 = fVar5 * 1024.0;
    fVar3 = fVar6 * 1024.0;
    dVar20 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
    dVar34 = 16.0;
    fVar4 = g_ViewContext.perspScale /
            (GameCamera.matrix.v2.w * fVar3 +
             GameCamera.matrix.v0.w * fVar2 + GameCamera.matrix.v1.w * fVar1 +
            GameCamera.matrix.v3.w);
    dVar32 = (double)((GameCamera.matrix.v2.y * fVar3 +
                       GameCamera.matrix.v0.y * fVar2 + GameCamera.matrix.v1.y * fVar1 +
                      GameCamera.matrix.v3.y) * fVar4);
    dVar31 = (double)((GameCamera.matrix.v2.z * fVar3 +
                       GameCamera.matrix.v0.z * fVar2 + GameCamera.matrix.v1.z * fVar1 +
                      GameCamera.matrix.v3.z) * fVar4);
    FastDoubleToInt
              ((double)((GameCamera.matrix.v2.x * fVar3 +
                         GameCamera.matrix.v0.x * fVar2 + GameCamera.matrix.v1.x * fVar1 +
                        GameCamera.matrix.v3.x) * fVar4 * 16.0));
    FastDoubleToInt((double)(float)(dVar32 * dVar34));
    FastDoubleToInt
              ((double)(float)(dVar31 * 0.9997000098228455 + (double)g_ViewContext.hvdf[2]));
    if ((dVar20 <= dVar34) && (dVar34 = dVar20, dVar20 < 4.0)) {
      dVar34 = 4.0;
    }
    dVar20 = (double)FastIntToDouble((*(int *)(iVar8 + 0x78) >> 0x18) + 0x10);
    fVar1 = *(float *)(iVar8 + 0x74);
    dVar35 = 3.141592502593994;
    dVar33 = 1.570796251296997;
    dVar32 = -3.141592502593994;
    fVar3 = fVar1 + 1.5707963;
    dVar31 = -0.16666656732559204;
    fVar2 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar2 = fVar1;
    }
    fVar4 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar4 = fVar3;
    }
    dVar30 = 0.008333025500178337;
    dVar29 = -0.0001980741071747616;
    dVar27 = 2.601886990305502e-06;
    fVar5 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
      fVar5 = fVar2;
    }
    dVar25 = 1.5707963705062866;
    fVar2 = fVar5 * fVar5;
    fVar6 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
      fVar6 = fVar4;
    }
    dVar28 = (double)((float)(dVar20 * 0.015625) * -(float)(dVar34 * 2.5 - 50.0));
    fVar12 = fVar6 * fVar6;
    fVar3 = fVar2 * fVar2 * fVar5;
    fVar4 = fVar2 * fVar3;
    fVar7 = fVar12 * fVar12 * fVar6;
    fVar9 = fVar12 * fVar7;
    dVar24 = (double)(float)(dVar28 * (double)(fVar2 * fVar4 * 2.601887e-06 +
                                              fVar4 * -0.0001980741 +
                                              fVar3 * 0.0083330255 +
                                              fVar2 * fVar5 * -0.16666657 + fVar5));
    dVar23 = (double)(float)(dVar28 * (double)(fVar12 * fVar9 * 2.601887e-06 +
                                              fVar9 * -0.0001980741 +
                                              fVar7 * 0.0083330255 +
                                              fVar12 * fVar6 * -0.16666657 + fVar6));
    dVar20 = (double)FastWrapRot(fVar1,1.5707964);
    dVar34 = (double)(float)(dVar35 - dVar20);
    if (dVar20 - (double)(float)(dVar35 - dVar20) < 0.0) {
      dVar34 = dVar20;
    }
    dVar26 = (double)(float)(dVar32 - dVar20);
    if ((double)(float)(dVar32 - dVar20) - dVar34 < 0.0) {
      dVar26 = dVar34;
    }
    dVar20 = (double)(float)(dVar26 * dVar26);
    dVar17 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar26));
    dVar34 = (double)(float)(dVar20 * dVar17);
    dVar26 = (double)(float)(dVar28 * (double)(float)((double)(float)(dVar20 * dVar34) * dVar27 +
                                                     (double)(float)(dVar34 * dVar29 +
                                                                    (double)(float)(dVar17 * dVar30
                                                                                   + (double)(float)
                                                  ((double)(float)(dVar20 * dVar26) * dVar31 +
                                                  dVar26)))));
    dVar34 = (double)FastWrapRot(*(float *)(iVar8 + 0x74),(float)dVar25);
    dVar20 = (double)(float)(dVar34 + dVar33);
    dVar34 = (double)(float)(dVar35 - dVar20);
    if (dVar20 - (double)(float)(dVar35 - dVar20) < 0.0) {
      dVar34 = dVar20;
    }
    dVar25 = (double)(float)(dVar32 - dVar20);
    if ((double)(float)(dVar32 - dVar20) - dVar34 < 0.0) {
      dVar25 = dVar34;
    }
    dVar22 = 4.71238899230957;
    dVar20 = (double)(float)(dVar25 * dVar25);
    dVar34 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar25));
    dVar17 = (double)(float)(dVar20 * dVar34);
    dVar25 = (double)(float)(dVar28 * (double)(float)((double)(float)(dVar20 * dVar17) * dVar27 +
                                                     (double)(float)(dVar17 * dVar29 +
                                                                    (double)(float)(dVar34 * dVar30
                                                                                   + (double)(float)
                                                  ((double)(float)(dVar20 * dVar25) * dVar31 +
                                                  dVar25)))));
    dVar20 = (double)FastWrapRot(*(float *)(iVar8 + 0x74),4.712389);
    dVar34 = (double)(float)(dVar35 - dVar20);
    if (dVar20 - (double)(float)(dVar35 - dVar20) < 0.0) {
      dVar34 = dVar20;
    }
    dVar17 = (double)(float)(dVar32 - dVar20);
    if ((double)(float)(dVar32 - dVar20) - dVar34 < 0.0) {
      dVar17 = dVar34;
    }
    dVar34 = (double)(float)(dVar17 * dVar17);
    dVar18 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar17));
    dVar20 = (double)(float)(dVar34 * dVar18);
    dVar17 = (double)(float)(dVar28 * (double)(float)((double)(float)(dVar34 * dVar20) * dVar27 +
                                                     (double)(float)(dVar20 * dVar29 +
                                                                    (double)(float)(dVar18 * dVar30
                                                                                   + (double)(float)
                                                  ((double)(float)(dVar34 * dVar17) * dVar31 +
                                                  dVar17)))));
    dVar34 = (double)FastWrapRot(*(float *)(iVar8 + 0x74),(float)dVar22);
    dVar20 = (double)(float)(dVar34 + dVar33);
    dVar34 = (double)(float)(dVar35 - dVar20);
    if (dVar20 - (double)(float)(dVar35 - dVar20) < 0.0) {
      dVar34 = dVar20;
    }
    dVar22 = (double)(float)(dVar32 - dVar20);
    if ((double)(float)(dVar32 - dVar20) - dVar34 < 0.0) {
      dVar22 = dVar34;
    }
    dVar21 = 3.1415927410125732;
    dVar34 = (double)(float)(dVar22 * dVar22);
    dVar18 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar22));
    dVar20 = (double)(float)(dVar34 * dVar18);
    dVar22 = (double)(float)(dVar28 * (double)(float)((double)(float)(dVar34 * dVar20) * dVar27 +
                                                     (double)(float)(dVar20 * dVar29 +
                                                                    (double)(float)(dVar18 * dVar30
                                                                                   + (double)(float)
                                                  ((double)(float)(dVar34 * dVar22) * dVar31 +
                                                  dVar22)))));
    dVar20 = (double)FastWrapRot(*(float *)(iVar8 + 0x74),3.1415927);
    dVar34 = (double)(float)(dVar35 - dVar20);
    if (dVar20 - (double)(float)(dVar35 - dVar20) < 0.0) {
      dVar34 = dVar20;
    }
    dVar18 = (double)(float)(dVar32 - dVar20);
    if ((double)(float)(dVar32 - dVar20) - dVar34 < 0.0) {
      dVar18 = dVar34;
    }
    dVar20 = (double)(float)(dVar18 * dVar18);
    dVar19 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar18));
    dVar34 = (double)(float)(dVar20 * dVar19);
    dVar18 = (double)(float)(dVar28 * (double)(float)((double)(float)(dVar20 * dVar34) * dVar27 +
                                                     (double)(float)(dVar34 * dVar29 +
                                                                    (double)(float)(dVar19 * dVar30
                                                                                   + (double)(float)
                                                  ((double)(float)(dVar20 * dVar18) * dVar31 +
                                                  dVar18)))));
    dVar34 = (double)FastWrapRot(*(float *)(iVar8 + 0x74),(float)dVar21);
    dVar20 = (double)(float)(dVar34 + dVar33);
    dVar34 = (double)(float)(dVar35 - dVar20);
    if (dVar20 - (double)(float)(dVar35 - dVar20) < 0.0) {
      dVar34 = dVar20;
    }
    dVar33 = (double)(float)(dVar32 - dVar20);
    if ((double)(float)(dVar32 - dVar20) - dVar34 < 0.0) {
      dVar33 = dVar34;
    }
    dVar34 = (double)(float)(dVar33 * dVar33);
    dVar32 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar33));
    dVar20 = (double)(float)(dVar34 * dVar32);
    dVar34 = (double)(float)((double)(float)(dVar34 * dVar20) * dVar27 +
                            (double)(float)(dVar20 * dVar29 +
                                           (double)(float)(dVar32 * dVar30 +
                                                          (double)(float)((double)(float)(dVar34 * 
                                                  dVar33) * dVar31 + dVar33))));
    dVar20 = (double)(float)(dVar28 * dVar34);
    FastDoubleToInt(dVar23,dVar34);
    FastDoubleToInt(dVar24);
    FastDoubleToInt(dVar25);
    FastDoubleToInt(dVar26);
    FastDoubleToInt(dVar22);
    FastDoubleToInt(dVar17);
    FastDoubleToInt(dVar20);
    FastDoubleToInt(dVar18);
    uVar16 = idol_draw::PackCmd(0,2,0,1,0x80);
    SetGSReg(3,uVar16);
    uVar16 = GetEffectTex(0x13);
    DrawTexturedQuadHud(local_100,local_d0,local_e0,uVar16,1);
    uVar16 = idol_draw::PackCmd(0,1,0,1,0x80);
    SetGSReg(3,uVar16);
  }
  return;
}


// 0x03f65a0 (0x338 bytes)
MobyInstance * M1382_003f65a0(MobyInstance *param_1,uint param_2,int param_3)

{
  float fVar1;
  MOBY_OCLASSES MVar2;
  MobyInstance *pMVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  MobyInstance *pMVar7;
  MobyInstance *pMVar8;
  double dVar9;
  double dVar10;
  GPiece<16> local_40;
  
  if (param_3 < 6) {
    if (4 < param_3) {
      pMVar7 = CreateMoby(0x3dc);
      goto LAB_003f6620;
    }
  }
  else if (param_3 == 10) {
    pMVar7 = CreateMoby(0x3dd);
    goto LAB_003f6620;
  }
  pMVar7 = CreateMoby(TREE);
LAB_003f6620:
  if (pMVar7 != (MobyInstance *)0x0) {
    pMVar8 = param_1;
    if (param_1 != (MobyInstance *)0x0) {
      pMVar3 = param_1->field80_0xb8;
      while (pMVar3 != (MobyInstance *)0x0) {
        pMVar8 = pMVar8->field80_0xb8;
        pMVar3 = pMVar8->field80_0xb8;
      }
    }
    MVar2 = pMVar7->oClass;
    pvVar4 = pMVar7->pVar;
    if ((short)MVar2 < 0x3dc) {
      if (MVar2 == TREE) {
        pMVar7->scale = pMVar7->pClass->gScale * DAT_00854488;
      }
    }
    else if ((short)MVar2 < 0x3dd) {
      pMVar7->scale = pMVar7->pClass->gScale * DAT_0085448c;
    }
    else if ((short)MVar2 < 0x3de) {
      pMVar7->scale = pMVar7->pClass->gScale * DAT_00854490;
    }
    pMVar7->field80_0xb8 = pMVar8;
    pMVar7->updateDistance = ' ';
    pMVar7->drawDistance = 0x40;
    pMVar7->enabled = '\x01';
    pMVar7->state = '\x04';
    uVar5 = g_heroMobyPtr->color;
    uVar6 = g_heroMobyPtr->light;
    pMVar7->modeBits = pMVar7->modeBits | LOCK_ROTATION;
    pMVar7->color = uVar5;
    pMVar7->light = uVar6;
    dVar9 = (double)MB_randRot();
    (pMVar7->rotation).x = (float)dVar9;
    dVar9 = (double)MB_randRot();
    (pMVar7->rotation).z = (float)dVar9;
    FastEulerToMtx(&pMVar7->transform,&pMVar7->rotation);
    (pMVar7->pos).x = (param_1->pos).x;
    (pMVar7->pos).y = (param_1->pos).y;
    (pMVar7->pos).z = (param_1->pos).z;
    (pMVar7->pos).w = (param_1->pos).w;
    MB_randRot();
    dVar9 = 0.01745329238474369;
    MB_MtxFromDir
              ((double)(DAT_0085446c * 0.017453292 * g_FrameTime),pvVar4,local_40);
    *(f32 *)((int)pvVar4 + 0x60) = (pMVar7->pos).z;
    if ((param_2 & 2) != 0) {
      fVar1 = 0.0;
      if ((param_2 & 0x10) != 0) {
        dVar10 = (double)MB_randRangeFloat(-30.0,30.0);
        fVar1 = (float)(dVar10 * dVar9);
      }
      M1382_003f5b10((double)fVar1,g_heroMobyPtr,pMVar7);
    }
    UpdateMobyTransform(pMVar7);
  }
  return pMVar7;
}


// 0x03f68d8 (0x14 bytes)
void M1382_003f68d8(void)

{
  DAT_008544f0 = 0x10000;
  return;
}


// 0x03f6930 (0x3c0 bytes)
// inlined: FastAtan2 @0x3f6a34
bool M1382_003f6930
               (double param_1,int param_2,undefined8 param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  ulonglong *puVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  float *pfVar20;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  ulonglong in_f30;
  double dVar23;
  ulonglong in_f31;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar16 = uVar14 - 0xf0;
  puVar6 = (ulonglong *)lVar16;
  *puVar6 = uVar14;
  puVar6[0x20] = in_LR;
  puVar6[0x1c] = in_f30;
  puVar6[0x1d] = in_f31;
  puVar6[0x1a] = unaff_r30;
  fVar1 = *param_4;
  puVar6[0x1b] = unaff_r31;
  fVar1 = fVar1 - *(float *)(param_2 + 0x10);
  fVar2 = param_4[1] - *(float *)(param_2 + 0x14);
  fVar3 = ABS(fVar1);
  fVar4 = ABS(fVar2);
  *(float *)(puVar6 + 0x10) = fVar1;
  puVar6[0x19] = unaff_r29;
  *(float *)((int)puVar6 + 0x84) = fVar2;
  iVar5 = *(int *)(param_2 + 0x78);
  *(float *)(puVar6 + 0x11) = fVar3 - fVar4;
  dVar23 = 0.0;
  uVar15 = (ulonglong)(*(uint *)(puVar6 + 0x10) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar6 + 0x11) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar6 + 0x84) >> 0x1d) & 4;
  fVar1 = ABS(*(float *)(puVar6 + 0x10));
  if (*(float *)(puVar6 + 0x11) - 0.0 < 0.0) {
    fVar1 = fVar4;
  }
  fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
  fVar2 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  fVar10 = ABS(*(float *)((int)puVar6 + 0x84));
  if (*(float *)(puVar6 + 0x11) - 0.0 < 0.0) {
    fVar10 = fVar3;
  }
  puVar6[0x18] = unaff_r28;
  puVar6[0x17] = unaff_r27;
  puVar6[0x16] = unaff_r26;
  dVar22 = dVar23;
  if (0.0 < fVar1) {
    lVar19 = uVar14 - 0xe0;
    lVar18 = uVar14 - 100;
    lVar17 = uVar14 - 0x54;
    lVar21 = 2;
    fVar1 = (fVar10 - fVar1) / (fVar10 + fVar1);
    fVar3 = fVar1 * fVar1;
    *(float *)(puVar6 + 0x13) = fVar1;
    *(float *)(puVar6 + 0x12) = fVar1;
    *(float *)((int)puVar6 + 0x94) = fVar1;
    *(float *)((int)puVar6 + 0x8c) = fVar1;
    fVar1 = fVar3 * fVar3;
    *(float *)(puVar6 + 0x12) = *(float *)(puVar6 + 0x12) * fVar3;
    *(float *)((int)puVar6 + 0x94) = *(float *)((int)puVar6 + 0x94) * fVar1;
    *(float *)(puVar6 + 0x13) = *(float *)(puVar6 + 0x13) * fVar1 * fVar3;
    do {
      *(float *)((int)lVar19 + 0x8c) = *(float *)((int)lVar19 + 0x7c) * fVar1 * fVar1;
      iVar7 = (int)lVar18;
      lVar19 = lVar19 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar7 + 4) * fVar1 * fVar1;
      lVar17 = lVar17 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar19 = uVar14 - 100;
    pfVar20 = (float *)&DAT_007358e0;
    lVar21 = 4;
    lVar17 = lVar19;
    lVar18 = lVar16;
    do {
      fVar1 = *pfVar20;
      fVar3 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar18 + 0x8c) = *(float *)((int)lVar18 + 0x8c) * fVar1;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar3;
      lVar17 = lVar17 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar17 = 2;
    do {
      iVar7 = (int)lVar16;
      iVar8 = (int)lVar19;
      lVar16 = lVar16 + 0x10;
      lVar19 = lVar19 + 0x10;
      dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar7 + 0x8c)) + *(float *)(iVar8 + 4) +
                        *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar4 + fVar2);
  }
  OrganicDeltAng
            ((float)dVar22,g_FrameTimeSq * 12.566371,g_FrameTimeSq * 12.566371,
             g_FrameTime * 7.330383,(float *)(param_2 + 0x48),0x3f0000,
             (float *)(iVar5 + 0x1dc));
  Delt((float)param_1,g_FrameTimeSq * 13.0,(float *)(iVar5 + 0x1d8));
  fVar3 = g_FrameTime;
  fVar1 = *(float *)(param_2 + 0x48);
  fVar2 = fVar1 + 1.5707963;
  fVar4 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar4 = fVar1;
  }
  fVar10 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar10 = fVar2;
  }
  fVar9 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
    fVar9 = fVar4;
  }
  fVar1 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar10 < 0.0) {
    fVar1 = fVar10;
  }
  fVar2 = fVar9 * fVar9;
  fVar4 = fVar1 * fVar1;
  fVar12 = fVar2 * fVar2 * fVar9;
  fVar10 = fVar4 * fVar4 * fVar1;
  fVar13 = fVar2 * fVar12;
  fVar11 = fVar4 * fVar10;
  *(float *)(puVar6 + 0xe) =
       (fVar4 * fVar11 * 2.601887e-06 +
       fVar11 * -0.0001980741 + fVar10 * 0.0083330255 + fVar4 * fVar1 * -0.16666657 + fVar1) *
       *(float *)(iVar5 + 0x1d8);
  fVar1 = *(float *)(iVar5 + 0x1d8);
  *(undefined4 *)(puVar6 + 0xf) = 0;
  *(float *)((int)puVar6 + 0x74) =
       (fVar2 * fVar13 * 2.601887e-06 +
       fVar13 * -0.0001980741 + fVar12 * 0.0083330255 + fVar2 * fVar9 * -0.16666657 + fVar9) * fVar1
  ;
  *(float *)(puVar6 + 0xf) = fVar3 * -0.5;
  MB_MoveAndCollide(0x3fe0000000000000,0x3fe0000000000000,dVar23,param_2,uVar14 - 0x80);
  fVar1 = *(float *)(param_2 + 0x14) - param_4[1];
  fVar2 = *(float *)(param_2 + 0x10) - *param_4;
  return SQRT(fVar2 * fVar2 + fVar1 * fVar1) < 0.2;
}


// 0x03f6d30 (0x2e8 bytes)
void M1382_003f6d30(MobyInstance *param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar8;
  longlong lVar6;
  longlong lVar7;
  uint uVar9;
  ulonglong uVar10;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  double dVar15;
  uint uVar11;
  
  iVar12 = 0;
  iVar14 = 0;
  bVar1 = param_1->state;
  uVar13 = ZEXT48(param_1->pVar);
  iVar8 = (int)(animationSpeed * 170.5);
  if (bVar1 < 7) {
    if (3 < bVar1) {
      iVar12 = 1;
      iVar8 = (int)(animationSpeed * 90.5);
    }
  }
  else {
    if (bVar1 < 0xd) {
      if (0xb < bVar1) {
        return;
      }
    }
    else if (0xf < bVar1) goto LAB_003f6e14;
    iVar12 = 2;
    iVar8 = (int)(animationSpeed * 50.5);
  }
LAB_003f6e14:
  dVar15 = (double)FastIntToDouble(iVar8);
  fVar2 = (float)((double)(longlong)(worldUpdateTime - (worldUpdateTime / iVar8) * iVar8) / dVar15)
          * 2.0 * 3.1415927 + -3.1415927;
  fVar3 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar3 = fVar2;
  }
  fVar4 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
    fVar4 = fVar3;
  }
  fVar2 = fVar4 * fVar4;
  fVar3 = fVar2 * fVar2 * fVar4;
  fVar5 = fVar2 * fVar3;
  dVar15 = (double)(fVar2 * fVar5 * 2.601887e-06 +
                   fVar5 * -0.0001980741 +
                   fVar3 * 0.0083330255 + fVar2 * fVar4 * -0.16666657 + fVar4);
  iVar8 = FastDoubleToInt((double)(float)(dVar15 * 20.0));
  lVar6 = FastDoubleToInt((double)(float)(dVar15 * 70.0));
  lVar7 = FastDoubleToInt((double)(float)(dVar15 * 10.0));
  iVar8 = iVar8 + 0x32;
  lVar6 = lVar6 + 0xb4;
  uVar9 = iVar8 + ((uint)(0xff - (longlong)iVar8 >> 0x3f) & 0xffU - iVar8);
  uVar10 = lVar6 + (0xff - (longlong)(int)lVar6 >> 0x3f & 0xffU - lVar6);
  uVar11 = (uint)uVar10;
  if (iVar12 == 2) {
    uVar10 = (longlong)((int)uVar9 >> 1) + (ulonglong)((int)uVar9 < 0 && (uVar9 & 1) != 0);
    uVar9 = uVar11;
  }
  else if (iVar12 != 0) {
    uVar10 = (longlong)((int)uVar9 >> 1) + (ulonglong)((int)uVar9 < 0 && (uVar9 & 1) != 0);
    uVar9 = uVar11;
  }
  uVar9 = FastLerpColor
                    (0x3fb99999a0000000,param_1->glowRgba,
                     (uint)((uVar10 & 0xffffffff) << 8) | uVar9 |
                     (uint)((lVar7 + 0x14U & 0xffffffff) << 0x10) | 0x80000000);
  param_1->glowRgba = uVar9;
  do {
    iVar14 = iVar14 + 1;
    GetBonePosition(param_1,iVar14,uVar13 + 0x200);
    uVar13 = uVar13 + 0x10;
  } while (iVar14 < 3);
  RegisterFuncForMoby(&PTR_M1382_003f9a38_0070dcd0,param_1);
  return;
}


// 0x03f7040 (0x4a8 bytes)
// inlined: FastAtan2 @0x3f715c, FastAtan2 @0x3f7304
void M1382_003f7040(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  ulonglong *puVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float *pfVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  ulonglong in_f26;
  double dVar21;
  ulonglong in_f27;
  double dVar22;
  ulonglong in_f28;
  double dVar23;
  ulonglong in_f29;
  double dVar24;
  ulonglong in_f30;
  double dVar25;
  ulonglong in_f31;
  double dVar26;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0x110;
  puVar7 = (ulonglong *)lVar12;
  *puVar7 = uVar10;
  puVar7[0x24] = in_LR;
  puVar7[0x1c] = in_f26;
  puVar7[0x1d] = in_f27;
  puVar7[0x1e] = in_f28;
  puVar7[0x1f] = in_f29;
  puVar7[0x20] = in_f30;
  puVar7[0x21] = in_f31;
  fVar1 = *(float *)(param_1 + 0x10);
  fVar2 = *(float *)(param_1 + 0x14);
  puVar7[0x1b] = unaff_r31;
  fVar1 = g_heroCGPos - fVar1;
  dVar25 = (double)fVar1;
  fVar2 = DAT_00969db4 - fVar2;
  dVar24 = (double)fVar2;
  puVar7[0x19] = unaff_r29;
  *(float *)((int)puVar7 + 0x7c) = fVar1;
  *(float *)(puVar7 + 0x10) = fVar2;
  puVar7[0x1a] = unaff_r30;
  iVar6 = *(int *)(param_1 + 0x78);
  dVar26 = (double)(*(float *)(param_1 + 0x18) + 0.5);
  *(float *)((int)puVar7 + 0x84) = (float)(ABS(dVar25) - ABS(dVar24));
  dVar21 = 0.0;
  dVar23 = (double)DAT_00969db8;
  fVar1 = *(float *)(param_1 + 0x48);
  uVar16 = (ulonglong)(*(uint *)((int)puVar7 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar7 + 0x10) >> 0x1d) & 4;
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
  dVar19 = ABS((double)*(float *)((int)puVar7 + 0x7c));
  if (*(float *)((int)puVar7 + 0x84) - 0.0 < 0.0) {
    dVar19 = ABS(dVar24);
  }
  fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  dVar18 = ABS((double)*(float *)(puVar7 + 0x10));
  if (*(float *)((int)puVar7 + 0x84) - 0.0 < 0.0) {
    dVar18 = ABS(dVar25);
  }
  dVar22 = 0.7853981852531433;
  dVar20 = dVar21;
  if (0.0 < dVar19) {
    lVar11 = uVar10 - 0x100;
    lVar15 = uVar10 - 0x58;
    lVar13 = uVar10 - 0x68;
    lVar17 = 2;
    fVar5 = (float)(dVar18 - dVar19) / (float)(dVar18 + dVar19);
    fVar4 = fVar5 * fVar5;
    *(float *)((int)puVar7 + 0xb4) = fVar5;
    *(float *)((int)puVar7 + 0xac) = fVar5;
    *(float *)(puVar7 + 0x16) = fVar5;
    *(float *)(puVar7 + 0x15) = fVar5;
    fVar5 = fVar4 * fVar4;
    *(float *)((int)puVar7 + 0xac) = *(float *)((int)puVar7 + 0xac) * fVar4;
    *(float *)(puVar7 + 0x16) = *(float *)(puVar7 + 0x16) * fVar5;
    *(float *)((int)puVar7 + 0xb4) = *(float *)((int)puVar7 + 0xb4) * fVar5 * fVar4;
    do {
      *(float *)((int)lVar11 + 0xa8) = *(float *)((int)lVar11 + 0x98) * fVar5 * fVar5;
      iVar8 = (int)lVar13;
      lVar13 = lVar13 + 8;
      lVar11 = lVar11 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)(iVar8 + 4) * fVar5 * fVar5;
      lVar15 = lVar15 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    lVar17 = 4;
    lVar15 = uVar10 - 0x68;
    pfVar14 = (float *)&DAT_007358e0;
    lVar11 = lVar12;
    lVar13 = lVar15;
    do {
      fVar5 = *pfVar14;
      fVar4 = pfVar14[1];
      pfVar14 = pfVar14 + 2;
      *(float *)((int)lVar11 + 0xa8) = *(float *)((int)lVar11 + 0xa8) * fVar5;
      lVar11 = lVar11 + 8;
      *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar4;
      lVar13 = lVar13 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    lVar13 = 2;
    lVar11 = lVar12;
    dVar19 = dVar21;
    do {
      iVar8 = (int)lVar11;
      iVar9 = (int)lVar15;
      lVar11 = lVar11 + 0x10;
      lVar15 = lVar15 + 0x10;
      dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar8 + 0xa8)) + *(float *)(iVar9 + 4) +
                        *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    dVar20 = (double)((float)(dVar19 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar18 = (double)FastDiffRots(dVar20,(double)fVar1);
  dVar20 = ABS((double)(float)(dVar23 - dVar26));
  *(float *)((int)puVar7 + 0x74) = (float)(dVar23 - dVar26);
  fVar1 = SQRT((float)(dVar25 * dVar25 + (double)(float)(dVar24 * dVar24)));
  dVar23 = ABS((double)fVar1);
  *(float *)(puVar7 + 0xe) = fVar1;
  *(float *)(puVar7 + 0xf) = (float)(dVar23 - dVar20);
  uVar16 = (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar7 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x74) >> 0x1d) & 4;
  dVar19 = ABS((double)*(float *)(puVar7 + 0xe));
  if ((double)*(float *)(puVar7 + 0xf) - dVar21 < 0.0) {
    dVar19 = dVar20;
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
  fVar1 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  dVar24 = ABS((double)*(float *)((int)puVar7 + 0x74));
  if ((double)*(float *)(puVar7 + 0xf) - dVar21 < 0.0) {
    dVar24 = dVar23;
  }
  if (dVar21 < dVar19) {
    lVar11 = uVar10 - 0x100;
    lVar15 = uVar10 - 0x78;
    lVar13 = uVar10 - 0x88;
    lVar17 = 2;
    fVar3 = (float)(dVar24 - dVar19) / (float)(dVar24 + dVar19);
    fVar5 = fVar3 * fVar3;
    *(float *)((int)puVar7 + 0x94) = fVar3;
    *(float *)((int)puVar7 + 0x8c) = fVar3;
    *(float *)(puVar7 + 0x12) = fVar3;
    *(float *)(puVar7 + 0x11) = fVar3;
    fVar3 = fVar5 * fVar5;
    *(float *)((int)puVar7 + 0x8c) = *(float *)((int)puVar7 + 0x8c) * fVar5;
    *(float *)(puVar7 + 0x12) = *(float *)(puVar7 + 0x12) * fVar3;
    *(float *)((int)puVar7 + 0x94) = *(float *)((int)puVar7 + 0x94) * fVar3 * fVar5;
    do {
      *(float *)((int)lVar11 + 0x88) = *(float *)((int)lVar11 + 0x78) * fVar3 * fVar3;
      iVar8 = (int)lVar13;
      lVar13 = lVar13 + 8;
      lVar11 = lVar11 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)(iVar8 + 4) * fVar3 * fVar3;
      lVar15 = lVar15 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    lVar17 = 4;
    lVar15 = uVar10 - 0x88;
    pfVar14 = (float *)&DAT_007358e0;
    lVar11 = lVar12;
    lVar13 = lVar15;
    do {
      fVar3 = *pfVar14;
      fVar5 = pfVar14[1];
      pfVar14 = pfVar14 + 2;
      *(float *)((int)lVar11 + 0x88) = *(float *)((int)lVar11 + 0x88) * fVar3;
      lVar11 = lVar11 + 8;
      *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar5;
      lVar13 = lVar13 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    lVar11 = 2;
    do {
      iVar8 = (int)lVar12;
      iVar9 = (int)lVar15;
      lVar12 = lVar12 + 0x10;
      lVar15 = lVar15 + 0x10;
      dVar21 = (double)((float)(dVar21 + (double)*(float *)(iVar8 + 0x88)) + *(float *)(iVar9 + 4) +
                        *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    dVar21 = (double)((float)(dVar21 + dVar22) * fVar2 + fVar1);
  }
  dVar21 = -dVar21;
  dVar19 = 1.0471975803375244;
  if ((dVar18 <= 1.0471975803375244) && (dVar19 = dVar18, dVar18 < -1.0471975803375244)) {
    dVar19 = -1.0471975803375244;
  }
  dVar23 = 0.5235987901687622;
  if ((dVar21 <= 0.5235987901687622) && (dVar23 = dVar21, dVar21 < -0.5235987901687622)) {
    dVar23 = -0.5235987901687622;
  }
  *(float *)(iVar6 + 0x298) = (float)dVar19;
  *(float *)(iVar6 + 0x294) = (float)dVar23;
  MB_UpdateManipulatorRot
            ((double)(DAT_0071f40c * 0.02),(double)(DAT_0071f40c * 0.3),param_1,iVar6 + 0x230,0);
  return;
}


// 0x03f7518 (0x6c8 bytes)
// inlined: FastAtan2 @0x3f77a8, FastAtan2 @0x3f7a34
void M1382_003f7518(MobyInstance *param_1,int param_2)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  f32 fVar5;
  f32 fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  ulonglong *puVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar15;
  longlong lVar13;
  longlong lVar14;
  undefined4 uVar16;
  float *pfVar18;
  longlong lVar17;
  longlong lVar19;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar20;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  ulonglong uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f31;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0x120;
  puVar10 = (ulonglong *)lVar14;
  *puVar10 = uVar12;
  puVar10[0x26] = in_LR;
  puVar10[0x23] = in_f31;
  puVar10[0x21] = unaff_r30;
  puVar10[0x22] = unaff_r31;
  uVar1 = param_1->state;
  puVar10[0x20] = unaff_r29;
  pvVar9 = param_1->pVar;
  uVar20 = ZEXT48(pvVar9);
  puVar10[0x1f] = unaff_r28;
  if (uVar1 != '\0') {
    if (*(int *)((int)pvVar9 + 0x38) != 0) {
      dVar22 = (double)MB_randRangeFloat(180.0,240.0);
      iVar15 = FastDoubleToInt((double)(float)(dVar22 * (double)animationSpeed));
      puVar10[0x1d] = (longlong)iVar15;
      uVar23 = puVar10[0x1d];
      *(undefined4 *)((int)pvVar9 + 0x38) = 0;
      *(float *)((int)pvVar9 + 0x1d4) = (float)(longlong)uVar23;
    }
    FastDecTimerF32(uVar20 + 0x1d4);
    dVar22 = 0.0;
    *(undefined4 *)((int)puVar10 + 0x84) = 0;
    iVar15 = MB_damage(param_1,0x330000,0);
    MB_HandleDamage(param_1,iVar15,uVar20 + 0x20,0,puVar10 + 0x10,(int)puVar10 + 0x84,0,4)
    ;
    if ((*(int *)(puVar10 + 0x10) != 1) && (param_1->state != '\x0f')) {
      *(float *)((int)pvVar9 + 0x20) =
           *(float *)((int)pvVar9 + 0x20) - *(float *)((int)puVar10 + 0x84);
      fVar7 = g_FrameTimeSq;
      *(float *)((int)pvVar9 + 0x130) = g_FrameTimeSq * 42.0;
      *(undefined1 *)((int)pvVar9 + 0x15d) = 0;
      *(undefined4 *)((int)pvVar9 + 0x144) = 9;
      *(float *)((int)pvVar9 + 0x134) = fVar7 * 24.0;
      fVar7 = g_FrameTime;
      *(float *)((int)pvVar9 + 0x13c) = g_FrameTime * 15.7;
      *(undefined4 *)((int)pvVar9 + 0x170) = 0xbf800000;
      *(undefined4 *)((int)pvVar9 + 0x174) = 0xbf800000;
      *(float *)((int)pvVar9 + 0x138) = fVar7 * 19.0;
      uVar16 = *(undefined4 *)(iVar15 + 0x18);
      *(undefined4 *)(puVar10 + 6) = *(undefined4 *)(iVar15 + 0x10);
      *(undefined4 *)(puVar10 + 7) = uVar16;
      uVar16 = *(undefined4 *)(iVar15 + 0x1c);
      *(undefined4 *)((int)puVar10 + 0x34) = *(undefined4 *)(iVar15 + 0x14);
      *(undefined4 *)((int)puVar10 + 0x3c) = uVar16;
      MB_VecAtan2Angles(puVar10[6],puVar10[7],uVar12 - 0x98,uVar20 + 0x138,uVar20 + 0x13c)
      ;
      if ((iVar15 != 0) &&
         ((*(int *)(iVar15 + 0x20) != 0 && (*(short *)(*(int *)(iVar15 + 0x20) + 0xa6) == 99)))) {
        fVar7 = *(float *)((int)pvVar9 + 0x1f0) - (param_1->pos).x;
        fVar2 = *(float *)((int)pvVar9 + 500) - (param_1->pos).y;
        dVar24 = ABS((double)fVar7);
        dVar26 = ABS((double)fVar2);
        *(float *)(puVar10 + 0x13) = fVar7;
        *(float *)((int)puVar10 + 0x9c) = fVar2;
        *(float *)(puVar10 + 0x14) = (float)(dVar24 - dVar26);
        uVar23 = (ulonglong)(*(uint *)(puVar10 + 0x13) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar10 + 0x14) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar10 + 0x9c) >> 0x1d) & 4;
        dVar25 = ABS((double)*(float *)(puVar10 + 0x13));
        if ((double)*(float *)(puVar10 + 0x14) - dVar22 < 0.0) {
          dVar25 = dVar26;
        }
        fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
        dVar26 = ABS((double)*(float *)((int)puVar10 + 0x9c));
        if ((double)*(float *)(puVar10 + 0x14) - dVar22 < 0.0) {
          dVar26 = dVar24;
        }
        fVar2 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
        dVar24 = dVar22;
        if (dVar22 < dVar25) {
          lVar13 = uVar12 - 0x110;
          lVar17 = uVar12 - 0x5c;
          lVar19 = uVar12 - 0x4c;
          lVar21 = 2;
          fVar8 = (float)(dVar26 - dVar25) / (float)(dVar26 + dVar25);
          fVar3 = fVar8 * fVar8;
          *(float *)(puVar10 + 0x1a) = fVar8;
          *(float *)(puVar10 + 0x19) = fVar8;
          *(float *)((int)puVar10 + 0xcc) = fVar8;
          *(float *)((int)puVar10 + 0xc4) = fVar8;
          fVar8 = fVar3 * fVar3;
          *(float *)(puVar10 + 0x19) = *(float *)(puVar10 + 0x19) * fVar3;
          *(float *)((int)puVar10 + 0xcc) = *(float *)((int)puVar10 + 0xcc) * fVar8;
          *(float *)(puVar10 + 0x1a) = *(float *)(puVar10 + 0x1a) * fVar8 * fVar3;
          do {
            *(float *)((int)lVar13 + 0xc4) = *(float *)((int)lVar13 + 0xb4) * fVar8 * fVar8;
            iVar15 = (int)lVar17;
            lVar13 = lVar13 + 8;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)(iVar15 + 4) * fVar8 * fVar8;
            lVar19 = lVar19 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar21 = 4;
          lVar19 = uVar12 - 0x5c;
          pfVar18 = (float *)&DAT_007358e0;
          lVar13 = lVar14;
          lVar17 = lVar19;
          do {
            fVar8 = *pfVar18;
            fVar3 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar13 + 0xc4) = *(float *)((int)lVar13 + 0xc4) * fVar8;
            lVar13 = lVar13 + 8;
            *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar3;
            lVar17 = lVar17 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar17 = 2;
          lVar13 = lVar14;
          dVar25 = dVar22;
          do {
            iVar15 = (int)lVar13;
            lVar13 = lVar13 + 0x10;
            iVar11 = (int)lVar19;
            lVar19 = lVar19 + 0x10;
            dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar15 + 0xc4)) +
                              *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                             *(float *)(iVar11 + 0xc));
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          dVar24 = (double)((float)(dVar25 + 0.7853981852531433) * fVar7 + fVar2);
        }
        *(float *)(puVar10 + 0x11) = (float)dVar24;
      }
      MB_StartKick((double)*(float *)(puVar10 + 0x11),param_1,uVar20 + 0x120);
      param_1->state = '\x0f';
      *(undefined1 *)((int)pvVar9 + 0x117) = 0xf0;
      MB_UpdateLightsTransition(param_1,uVar20 + 0x110);
    }
    param_1->damage = -1;
    if ((param_2 == 0) &&
       (iVar15 = MB_getTargetInArea
                           (0x4060000000000000,param_1,uVar20 + 0x180,&DAT_003f74e8,0,0,0,0),
       iVar15 != 2)) {
      fVar7 = (param_1->pos).y;
      fVar2 = (param_1->pos).x;
      fVar8 = fVar7 - *(float *)((int)pvVar9 + 0x1b4);
      fVar3 = fVar2 - *(float *)((int)pvVar9 + 0x1b0);
      fVar4 = (param_1->pos).z - *(float *)((int)pvVar9 + 0x1b8);
      if (SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar8 * fVar8) < 64.0) {
        fVar2 = *(float *)((int)pvVar9 + 0x180) - fVar2;
        fVar7 = *(float *)((int)pvVar9 + 0x184) - fVar7;
        dVar24 = ABS((double)fVar2);
        dVar26 = ABS((double)fVar7);
        *(float *)((int)puVar10 + 0x8c) = fVar2;
        *(float *)(puVar10 + 0x12) = fVar7;
        fVar7 = (param_1->rotation).z;
        *(float *)((int)puVar10 + 0x94) = (float)(dVar24 - dVar26);
        uVar20 = (ulonglong)(*(uint *)((int)puVar10 + 0x8c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar10 + 0x94) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1d) & 4;
        dVar25 = ABS((double)*(float *)((int)puVar10 + 0x8c));
        if ((double)*(float *)((int)puVar10 + 0x94) - dVar22 < 0.0) {
          dVar25 = dVar26;
        }
        fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
        fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
        dVar26 = ABS((double)*(float *)(puVar10 + 0x12));
        if ((double)*(float *)((int)puVar10 + 0x94) - dVar22 < 0.0) {
          dVar26 = dVar24;
        }
        if (dVar22 < dVar25) {
          lVar13 = uVar12 - 0x110;
          lVar19 = uVar12 - 0x6c;
          lVar17 = uVar12 - 0x7c;
          lVar21 = 2;
          fVar3 = (float)(dVar26 - dVar25) / (float)(dVar26 + dVar25);
          fVar4 = fVar3 * fVar3;
          *(float *)(puVar10 + 0x16) = fVar3;
          *(float *)(puVar10 + 0x15) = fVar3;
          *(float *)((int)puVar10 + 0xac) = fVar3;
          *(float *)((int)puVar10 + 0xa4) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)(puVar10 + 0x15) = *(float *)(puVar10 + 0x15) * fVar4;
          *(float *)((int)puVar10 + 0xac) = *(float *)((int)puVar10 + 0xac) * fVar3;
          *(float *)(puVar10 + 0x16) = *(float *)(puVar10 + 0x16) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar13 + 0xa4) = *(float *)((int)lVar13 + 0x94) * fVar3 * fVar3;
            iVar15 = (int)lVar17;
            lVar17 = lVar17 + 8;
            lVar13 = lVar13 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
            lVar19 = lVar19 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar21 = 4;
          lVar19 = uVar12 - 0x7c;
          pfVar18 = (float *)&DAT_007358e0;
          lVar13 = lVar14;
          lVar17 = lVar19;
          do {
            fVar3 = *pfVar18;
            fVar4 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar13 + 0xa4) = *(float *)((int)lVar13 + 0xa4) * fVar3;
            lVar13 = lVar13 + 8;
            *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
            lVar17 = lVar17 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar13 = 2;
          do {
            iVar15 = (int)lVar14;
            iVar11 = (int)lVar19;
            lVar14 = lVar14 + 0x10;
            lVar19 = lVar19 + 0x10;
            dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar15 + 0xa4)) +
                              *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                             *(float *)(iVar11 + 0xc));
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar8 + fVar2);
        }
        dVar22 = (double)FastSubRots(fVar7,(float)dVar22);
        fVar5 = (param_1->pos).y;
        *(f32 *)(puVar10 + 0xe) = (param_1->pos).x;
        fVar6 = (param_1->pos).w;
        *(f32 *)((int)puVar10 + 0x74) = fVar5;
        *(f32 *)((int)puVar10 + 0x7c) = fVar6;
        *(float *)(puVar10 + 0xf) = (param_1->pos).z + 1.0;
        uVar16 = CollLine(uVar12 - 0xb0,&g_heroCGPos,2,0,0);
        *(char *)((int)pvVar9 + 0x1e4) = (char)((ulonglong)(LZCOUNT(uVar16) << 0x20) >> 0x25);
        if (dVar22 < 1.0471975803375244) {
          *(byte *)((int)pvVar9 + 0x1e4) = (byte)((ulonglong)(LZCOUNT(uVar16) << 0x20) >> 0x24) & 2;
        }
      }
    }
  }
  return;
}


// shared update function, registered for oClasses 635, 1382
// 0x03f7c78 (0x1b18 bytes)
// inlined: FastAtan2 @0x3f82d8, FastAtan2 @0x3f8b40, FastAtan2 @0x3f9070
/* Moby 635
   Moby 1382 */

void UpdateMoby_635(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  MobyModeBit MVar10;
  void *pvVar11;
  MobyClass *pMVar12;
  MobyInstance *victim;
  undefined2 uVar13;
  ulonglong *puVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  int iVar20;
  int iVar21;
  uint uVar22;
  undefined8 uVar18;
  longlong lVar19;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  float *pfVar27;
  longlong lVar28;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar29;
  ulonglong unaff_r30;
  ulonglong uVar30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f31;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  
  lVar19 = (longlong)(int)moby;
  uVar17 = ZEXT48(&stack0x00000000);
  lVar25 = uVar17 - 0x170;
  puVar14 = (ulonglong *)lVar25;
  *puVar14 = uVar17;
  puVar14[0x30] = in_LR;
  puVar14[0x2d] = in_f31;
  puVar14[0x2a] = unaff_r29;
  uVar1 = moby->state;
  puVar14[0x2b] = unaff_r30;
  uVar29 = 0;
  pvVar11 = moby->pVar;
  uVar30 = ZEXT48(pvVar11);
  puVar14[0x2c] = unaff_r31;
  puVar14[0x28] = unaff_r27;
  puVar14[0x29] = unaff_r28;
  if (uVar1 != '\f') {
    if (*(int *)((int)pvVar11 + 0x2b0) == -1) {
      if (*(int *)((int)pvVar11 + 0x2b8) != -1) {
        uVar23 = MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,0xffffffffffffffff);
        uVar29 = (ulonglong)(int)uVar23;
        if (*(int *)((int)pvVar11 + 700) != -1) {
          uVar22 = MB_IsPntInCuboid
                             ((Vec4 *)&GameCamera.posX,(longlong)*(int *)((int)pvVar11 + 700));
          uVar29 = (ulonglong)(int)(uVar23 | uVar22);
        }
      }
    }
    else {
      iVar20 = MB_IsPntInCuboid
                         ((Vec4 *)&GameCamera.posX,(longlong)*(int *)((int)pvVar11 + 0x2b0));
      uVar29 = (ulonglong)(LZCOUNT(iVar20) << 0x20) >> 0x25;
      if (*(int *)((int)pvVar11 + 0x2b4) != -1) {
        iVar21 = MB_IsPntInCuboid
                           ((Vec4 *)&GameCamera.posX,(longlong)*(int *)((int)pvVar11 + 0x2b4));
        uVar29 = (ulonglong)((LZCOUNT(iVar20) & LZCOUNT(iVar21)) << 0x20) >> 0x25;
      }
    }
  }
  M1382_003f7518(lVar19,uVar29);
  if (((int)uVar29 == 0) || (moby->state == '\x0f')) {
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
    moby->enabled = '\x01';
    M1382_003f7040(lVar19);
    M1382_003f6d30(lVar19);
    iVar20 = *(int *)((int)pvVar11 + 0x1c0);
    MB_SetScaleCheat(0x4000ccccc0000000,uVar30 + 0x230);
    if ((moby->enabled != '\0') &&
       (fVar4 = (moby->pos).y - GameCamera.posY, fVar6 = (moby->pos).x - GameCamera.posX,
       fVar7 = (moby->pos).z - GameCamera.posZ,
       SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar4 * fVar4) < 29.0)) {
      MB_SetZBoundsFromGround(lVar19);
      moby->shadow = '\x17';
    }
    bVar2 = moby->state;
    if (bVar2 < 8) {
      if (bVar2 < 3) {
        if (bVar2 == 0) {
          MVar10 = moby->modeBits;
          *(f32 *)((int)pvVar11 + 0x1f0) = (moby->pos).x;
          *(f32 *)((int)pvVar11 + 500) = (moby->pos).y;
          fVar3 = (moby->pos).z;
          moby->modeBits = MVar10 | CAN_BE_AUTO_TARGETED;
          *(f32 *)((int)pvVar11 + 0x1f8) = fVar3;
          fVar3 = (moby->pos).w;
          *(undefined **)((int)pvVar11 + 0xd0) = &DAT_00854514;
          *(f32 *)((int)pvVar11 + 0x1fc) = fVar3;
          *(undefined4 *)((int)pvVar11 + 0x20) = 0x3f800000;
          *(undefined2 *)((int)pvVar11 + 0x24) = 1;
          *(undefined1 *)((int)pvVar11 + 0x58) = 8;
          *(undefined1 *)((int)pvVar11 + 0x5a) = 7;
          *(undefined1 *)((int)pvVar11 + 0x29) = 0;
          dVar32 = (double)MB_randRangeFloat
                                     (g_FrameTime * 7.2,g_FrameTime * 8.7);
          pMVar12 = moby->pClass;
          *(float *)((int)pvVar11 + 0x1ec) = (float)dVar32;
          moby->state = '\x01';
          uVar18 = MB_randInt(*(undefined1 *)(*(int *)&pMVar12->type + 0x10));
          MB_SetAnimation(lVar19,0,uVar18,0);
          if (*(int *)((int)pvVar11 + 0x1e8) == -1) {
            *(undefined4 *)((int)pvVar11 + 0x1e8) = *(undefined4 *)((int)pvVar11 + 0x1d0);
          }
        }
        else if (bVar2 < 2) {
          if (((*(char *)((int)pvVar11 + 0x1e4) != '\0') &&
              (iVar20 = MB_randInt(0x1f), iVar20 == 0)) &&
             (moby->state = '\x02', moby->animationId != '\x01')) {
            puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar19,1,0,*(undefined4 *)((int)puVar14 + 300));
          }
        }
        else if ((moby->field43_0x70 & 2U) != 0) {
          if (*(char *)((int)pvVar11 + 0x1e4) == '\x02') {
            iVar20 = MB_randInt(3);
            if (iVar20 == 0) {
              if (g_heroType == '\x03') {
                moby->state = '\x06';
                if (moby->animationId != '\a') {
                  puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
                  MB_SetAnimation(lVar19,7,0,*(undefined4 *)((int)puVar14 + 300));
                }
              }
              else {
                moby->state = '\a';
                if (moby->animationId != '\b') {
                  puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
                  MB_SetAnimation(lVar19,8,0,*(undefined4 *)((int)puVar14 + 300));
                }
              }
            }
            else if (moby->animationId != '\x02') {
              puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar19,2,0,*(undefined4 *)((int)puVar14 + 300));
            }
          }
          else {
            moby->state = '\x05';
            if (moby->animationId != '\x03') {
              puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar19,3,0,*(undefined4 *)((int)puVar14 + 300));
            }
            auVar34 = ZEXT416(0xffffffff);
            auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
            auVar34 = loadVectorLeftIndexed(0x14,0x3f7be0);
            auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar34 = vectorMultiplyAddFloatingPoint
                                (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 |
                                         auVar34 << 0x60,auVar35);
            auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
            auVar34 = vectorSplatHalfWord(auVar34,1);
            uVar13 = storeVectorElementHalfWordIndexed(auVar34,0x1e0,uVar30);
            *(undefined2 *)((int)pvVar11 + 0x1e0) = uVar13;
            uVar13 = storeVectorElementHalfWordIndexed(auVar34,0x1e2,uVar30);
            *(undefined2 *)((int)pvVar11 + 0x1e2) = uVar13;
          }
        }
      }
      else if (bVar2 < 5) {
        if (bVar2 < 4) {
          if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x01', moby->animationId != '\0'))
          {
            uVar18 = MB_randInt
                               ((ulonglong)*(byte *)(*(int *)&moby->pClass->type + 0x10) - 1);
            puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar19,0,uVar18,*(undefined4 *)((int)puVar14 + 300));
          }
        }
        else {
          uVar23 = MB_UpdateKick(moby,(KickVars *)((int)pvVar11 + 0x120));
          if ((uVar23 & 0x60) == 0) {
            fVar3 = (moby->pos).z;
            uVar23 = (int)fVar3 >> 0x1f;
            if ((int)((uVar23 >> 1 ^ (uint)fVar3) - uVar23) < 0x40000000) {
              MB_SpawnBoltsFromCrate(lVar19,0,0xffffffffffffffff);
              DeleteMoby(moby);
            }
          }
          else {
            moby->state = '\x05';
            if (moby->animationId != '\x03') {
              puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar19,3,0,*(undefined4 *)((int)puVar14 + 300));
            }
            auVar34 = ZEXT416(0xffffffff);
            auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
            auVar34 = loadVectorLeftIndexed(0x14,0x3f7be0);
            auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar34 = vectorMultiplyAddFloatingPoint
                                (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 |
                                         auVar34 << 0x60,auVar35);
            auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
            auVar34 = vectorSplatHalfWord(auVar34,1);
            uVar13 = storeVectorElementHalfWordIndexed(auVar34,0x1e2,uVar30);
            *(undefined2 *)((int)pvVar11 + 0x1e2) = uVar13;
            uVar13 = storeVectorElementHalfWordIndexed(auVar34,0x1e0,uVar30);
            *(undefined2 *)((int)pvVar11 + 0x1e0) = uVar13;
          }
        }
      }
      else if (bVar2 < 6) {
        if (iVar20 == 0) {
          iVar20 = MB_randInt(0x1f);
          if ((iVar20 == 0) && (moby->state = '\x03', moby->animationId != '\0')) {
            uVar18 = MB_randInt(*(undefined1 *)(*(int *)&moby->pClass->type + 0x10));
            puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar19,0,uVar18,*(undefined4 *)((int)puVar14 + 300));
          }
        }
        else {
          fVar4 = *(float *)(iVar20 + 0x10) - (moby->pos).x;
          fVar6 = *(float *)(iVar20 + 0x14) - (moby->pos).y;
          fVar7 = ABS(fVar4);
          fVar5 = ABS(fVar6);
          *(float *)(puVar14 + 0x17) = fVar4;
          *(float *)((int)puVar14 + 0xbc) = fVar6;
          *(float *)(puVar14 + 0x18) = fVar7 - fVar5;
          fVar4 = 0.0;
          uVar29 = (ulonglong)(*(uint *)(puVar14 + 0x17) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar14 + 0x18) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar14 + 0xbc) >> 0x1d) & 4;
          fVar6 = ABS(*(float *)(puVar14 + 0x17));
          if (*(float *)(puVar14 + 0x18) - 0.0 < 0.0) {
            fVar6 = fVar5;
          }
          fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar29 << 2));
          fVar5 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
          fVar9 = ABS(*(float *)((int)puVar14 + 0xbc));
          if (*(float *)(puVar14 + 0x18) - 0.0 < 0.0) {
            fVar9 = fVar7;
          }
          if (0.0 < fVar6) {
            lVar24 = uVar17 - 0x160;
            lVar28 = uVar17 - 0x5c;
            lVar26 = uVar17 - 0x6c;
            lVar31 = 2;
            fVar6 = (fVar9 - fVar6) / (fVar9 + fVar6);
            fVar7 = fVar6 * fVar6;
            *(float *)(puVar14 + 0x22) = fVar6;
            *(float *)(puVar14 + 0x21) = fVar6;
            *(float *)((int)puVar14 + 0x10c) = fVar6;
            *(float *)((int)puVar14 + 0x104) = fVar6;
            fVar6 = fVar7 * fVar7;
            *(float *)(puVar14 + 0x21) = *(float *)(puVar14 + 0x21) * fVar7;
            *(float *)((int)puVar14 + 0x10c) = *(float *)((int)puVar14 + 0x10c) * fVar6;
            *(float *)(puVar14 + 0x22) = *(float *)(puVar14 + 0x22) * fVar6 * fVar7;
            do {
              *(float *)((int)lVar24 + 0x104) = *(float *)((int)lVar24 + 0xf4) * fVar6 * fVar6;
              iVar20 = (int)lVar26;
              lVar26 = lVar26 + 8;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar28 + 4) = *(float *)(iVar20 + 4) * fVar6 * fVar6;
              lVar28 = lVar28 + 8;
              lVar31 = lVar31 + -1;
            } while (lVar31 != 0);
            lVar31 = 4;
            lVar28 = uVar17 - 0x6c;
            pfVar27 = (float *)&DAT_007358e0;
            lVar24 = lVar25;
            lVar26 = lVar28;
            do {
              fVar6 = *pfVar27;
              fVar7 = pfVar27[1];
              pfVar27 = pfVar27 + 2;
              *(float *)((int)lVar24 + 0x104) = *(float *)((int)lVar24 + 0x104) * fVar6;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar7;
              lVar26 = lVar26 + 8;
              lVar31 = lVar31 + -1;
            } while (lVar31 != 0);
            lVar24 = 2;
            do {
              iVar20 = (int)lVar25;
              lVar25 = lVar25 + 0x10;
              iVar21 = (int)lVar28;
              lVar28 = lVar28 + 0x10;
              fVar4 = fVar4 + *(float *)(iVar20 + 0x104) + *(float *)(iVar21 + 4) +
                      *(float *)(iVar21 + 8) + *(float *)(iVar21 + 0xc);
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            fVar4 = (fVar4 + 0.7853982) * fVar8 + fVar5;
          }
          OrganicDeltAng
                    (fVar4,g_FrameTimeSq * 4.712389,g_FrameTimeSq * 4.712389,
                     g_FrameTime * 3.4906585,&(moby->rotation).z,0x720000,
                     (float *)((int)pvVar11 + 0x1dc));
          if (ABS(*(float *)((int)pvVar11 + 0x1dc)) <= g_FrameTime * 0.08726646) {
            if (moby->animationId != '\x03') {
              puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar19,3,0,*(undefined4 *)((int)puVar14 + 300));
            }
          }
          else if (*(int *)((int)pvVar11 + 0x1dc) < 0) {
            if (moby->animationId != '\x04') {
              puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar19,4,0,*(undefined4 *)((int)puVar14 + 300));
            }
          }
          else if (moby->animationId != '\x05') {
            puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar19,5,0,*(undefined4 *)((int)puVar14 + 300));
          }
          moby->unk58 = 1.7;
          if ((*(char *)((int)pvVar11 + 0x1e4) == '\x02') &&
             ((iVar20 = FastDecTimerS16(uVar30 + 0x1e2), iVar20 != 0 ||
              (g_heroType != '\x03')))) {
            iVar20 = MB_randInt(3);
            if (iVar20 == 0) {
              if (moby->animationId != '\x02') {
                puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
                MB_SetAnimation(lVar19,2,0,*(undefined4 *)((int)puVar14 + 300));
              }
            }
            else if (g_heroType == '\x03') {
              moby->state = '\x06';
              if (moby->animationId != '\a') {
                puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
                MB_SetAnimation(lVar19,7,0,*(undefined4 *)((int)puVar14 + 300));
              }
            }
            else {
              moby->state = '\a';
              if (moby->animationId != '\b') {
                puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
                MB_SetAnimation(lVar19,8,0,*(undefined4 *)((int)puVar14 + 300));
              }
            }
          }
          else if ((*(char *)((int)pvVar11 + 0x1e4) == '\0') &&
                  ((*(short *)((int)pvVar11 + 0x1e0) == 0 &&
                   (moby->state = '\x03', moby->animationId != '\0')))) {
            uVar18 = MB_randInt(*(undefined1 *)(*(int *)&moby->pClass->type + 0x10));
            puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar19,0,uVar18,*(undefined4 *)((int)puVar14 + 300));
          }
        }
      }
      else if (*(char *)((int)pvVar11 + 0x1e4) == '\x02') {
        if ((*(int *)((int)pvVar11 + 0x1d4) == 0) &&
           (iVar20 = PointInsideComplexPoly
                               (&g_heroPosition,
                                (Vec4 *)Splines[*(int *)((int)pvVar11 + 0x1d0)]->points,
                                Splines[*(int *)((int)pvVar11 + 0x1d0)]->cnt), iVar20 == 0)) {
          if ((moby->field43_0x70 & 2U) != 0) {
            iVar20 = MB_randInt(3);
            if (iVar20 == 0) {
              if (moby->animationId != '\x02') {
                puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
                MB_SetAnimation(lVar19,2,0,*(undefined4 *)((int)puVar14 + 300));
              }
            }
            else {
              iVar20 = MB_randInt(7);
              if (iVar20 == 0) {
                if (moby->animationId != '\b') {
                  puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
                  MB_SetAnimation(lVar19,8,0,*(undefined4 *)((int)puVar14 + 300));
                }
              }
              else if (moby->animationId != '\a') {
                puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
                MB_SetAnimation(lVar19,7,0,*(undefined4 *)((int)puVar14 + 300));
              }
            }
          }
        }
        else {
          iVar20 = MB_randInt(0x14);
          if ((iVar20 == 0) && (moby->state = '\b', moby->animationId != '\x01')) {
            puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar19,1,0,*(undefined4 *)((int)puVar14 + 300));
          }
        }
      }
      else {
        iVar20 = MB_randInt(0x14);
        if (iVar20 == 0) {
          moby->state = '\x05';
          if (moby->animationId != '\x03') {
            puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar19,3,0,*(undefined4 *)((int)puVar14 + 300));
          }
          auVar34 = ZEXT416(0xffffffff);
          auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
          auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
          auVar34 = loadVectorLeftIndexed(0x14,0x3f7be0);
          auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar34 = vectorMultiplyAddFloatingPoint
                              (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60
                               ,auVar35);
          auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
          auVar34 = vectorSplatHalfWord(auVar34,1);
          uVar13 = storeVectorElementHalfWordIndexed(auVar34,0x1e2,uVar30);
          *(undefined2 *)((int)pvVar11 + 0x1e2) = uVar13;
          uVar13 = storeVectorElementHalfWordIndexed(auVar34,0x1e0,uVar30);
          *(undefined2 *)((int)pvVar11 + 0x1e0) = uVar13;
        }
      }
    }
    else if (bVar2 == 0xf) {
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED);
      uVar23 = MB_UpdateKick(moby,(KickVars *)((int)pvVar11 + 0x120));
      if ((uVar23 & 0x60) == 0) {
        fVar3 = (moby->pos).z;
        uVar23 = (int)fVar3 >> 0x1f;
        if ((int)((uVar23 >> 1 ^ (uint)fVar3) - uVar23) < 0x40000000) {
          MB_SpawnBoltsFromCrate(lVar19,0,0xffffffffffffffff);
          DeleteMoby(moby);
        }
      }
      else {
        lVar25 = lVar19 + 0x10;
        MB_SpawnExplosionSparks(0x3fe0000000000000,0x402a000000000000,lVar19,lVar25);
        uVar18 = 0;
        puVar14[0xe] = ZEXT48(&DAT_00a15d30);
        puVar14[0xf] = ZEXT48(&DAT_00a15d30);
        MB_SpawnDebrisMoby(0,lVar19,0x6ce,lVar25,lVar19 + 0x40,0,0);
        puVar14[0xe] = ZEXT48(&DAT_00a15d30);
        puVar14[0xf] = ZEXT48(&DAT_00a15d30);
        MB_SpawnDebrisMoby(uVar18,lVar19,0x6cf,lVar25,lVar19 + 0x40,0,0);
        MB_SpawnDebris(lVar19,0x77d,1,0x77d,1,3,2);
        MB_SpawnBoltsFromCrate(lVar19,0,0xffffffffffffffff);
        DeleteMoby(moby);
      }
    }
    else if (bVar2 == 0xc) {
      iVar20 = FUN_0048c188(lVar19,uVar30 + 0x120);
      if (iVar20 != 0) {
        moby->state = '\0';
        *(undefined2 *)((int)pvVar11 + 200) = 0;
      }
    }
    else if (bVar2 == 0xb) {
      M1382_003f6930((double)(g_FrameTime * 5.0),lVar19);
      fVar4 = (moby->pos).y;
      fVar6 = (moby->pos).x;
      moby->unk58 = 1.35;
      fVar5 = fVar4 - *(float *)((int)pvVar11 + 500);
      fVar7 = fVar6 - *(float *)((int)pvVar11 + 0x1f0);
      fVar7 = SQRT(fVar7 * fVar7 + fVar5 * fVar5);
      if (((fVar7 < 1.4) && ((moby->field43_0x70 & 2U) != 0)) || (fVar7 < 0.3)) {
        moby->state = '\x05';
        if (moby->animationId != '\x03') {
          puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar19,3,0,*(undefined4 *)((int)puVar14 + 300));
        }
        auVar34 = ZEXT416(0xffffffff);
        auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
        auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
        auVar34 = loadVectorLeftIndexed(0x14,0x3f7be0);
        auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar34 = vectorMultiplyAddFloatingPoint
                            (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,
                             auVar35);
        auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
        auVar34 = vectorSplatHalfWord(auVar34,1);
        uVar13 = storeVectorElementHalfWordIndexed(auVar34,0x1e2,uVar30);
        *(undefined2 *)((int)pvVar11 + 0x1e2) = uVar13;
        uVar13 = storeVectorElementHalfWordIndexed(auVar34,0x1e0,uVar30);
        *(undefined2 *)((int)pvVar11 + 0x1e0) = uVar13;
      }
      else if ((((moby->field43_0x70 & 2U) != 0) &&
               (fVar4 = fVar4 - *(float *)((int)pvVar11 + 0x184),
               fVar6 = fVar6 - *(float *)((int)pvVar11 + 0x180),
               fVar7 = *(float *)((int)pvVar11 + 0x1d8) * g_FrameTime,
               SQRT(fVar6 * fVar6 + fVar4 * fVar4) <
               fVar7 * animationSpeed * 40.0 * 0.5 + fVar7 * animationSpeed * 10.0 + 1.5)) &&
              ((iVar20 = PointInsideComplexPoly
                                   (&g_heroPosition,
                                    (Vec4 *)Splines[*(int *)((int)pvVar11 + 0x1d0)]->points,
                                    Splines[*(int *)((int)pvVar11 + 0x1d0)]->cnt), iVar20 != 0 &&
               (moby->state = '\n', moby->animationId != '\n')))) {
        puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar19,10,0,*(undefined4 *)((int)puVar14 + 300));
      }
    }
    else if (bVar2 == 10) {
      if ((moby->field43_0x70 & 2U) == 0) {
        dVar32 = (double)BlendAnimFrame(moby);
        fVar4 = (moby->rotation).z;
        if ((ABS((float)(dVar32 - 17.5)) <= 0.25) &&
           (dVar32 = 1.0, ABS(*(float *)((int)pvVar11 + 0x188) - (moby->pos).z) < 1.0)) {
          fVar6 = *(float *)((int)pvVar11 + 0x180) - (moby->pos).x;
          fVar7 = *(float *)((int)pvVar11 + 0x184) - (moby->pos).y;
          fVar5 = ABS(fVar6);
          fVar8 = ABS(fVar7);
          *(float *)(puVar14 + 0x14) = fVar6;
          *(float *)((int)puVar14 + 0xa4) = fVar7;
          *(float *)(puVar14 + 0x15) = fVar5 - fVar8;
          fVar6 = 0.0;
          uVar23 = *(uint *)(puVar14 + 0x15);
          uVar29 = (ulonglong)(*(uint *)(puVar14 + 0x14) >> 0x1c) & 8 |
                   (ulonglong)(uVar23 >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar14 + 0xa4) >> 0x1d) & 4;
          fVar7 = ABS(*(float *)(puVar14 + 0x14));
          if (*(float *)(puVar14 + 0x15) - 0.0 < 0.0) {
            fVar7 = fVar8;
          }
          fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar29 << 2));
          fVar8 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
          fVar15 = ABS(*(float *)((int)puVar14 + 0xa4));
          if (*(float *)(puVar14 + 0x15) - 0.0 < 0.0) {
            fVar15 = fVar5;
          }
          if (0.0 < fVar7) {
            lVar19 = uVar17 - 0x160;
            uVar23 = 2;
            lVar24 = uVar17 - 0xac;
            lVar26 = uVar17 - 0x9c;
            lVar28 = 2;
            fVar7 = (fVar15 - fVar7) / (fVar15 + fVar7);
            fVar5 = fVar7 * fVar7;
            *(float *)(puVar14 + 0x1a) = fVar7;
            *(float *)(puVar14 + 0x19) = fVar7;
            *(float *)((int)puVar14 + 0xcc) = fVar7;
            *(float *)((int)puVar14 + 0xc4) = fVar7;
            fVar7 = fVar5 * fVar5;
            *(float *)(puVar14 + 0x19) = *(float *)(puVar14 + 0x19) * fVar5;
            *(float *)((int)puVar14 + 0xcc) = *(float *)((int)puVar14 + 0xcc) * fVar7;
            *(float *)(puVar14 + 0x1a) = *(float *)(puVar14 + 0x1a) * fVar7 * fVar5;
            do {
              *(float *)((int)lVar19 + 0xc4) = *(float *)((int)lVar19 + 0xb4) * fVar7 * fVar7;
              iVar20 = (int)lVar24;
              lVar19 = lVar19 + 8;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar26 + 4) = *(float *)(iVar20 + 4) * fVar7 * fVar7;
              lVar26 = lVar26 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar28 = 4;
            lVar26 = uVar17 - 0xac;
            pfVar27 = (float *)&DAT_007358e0;
            lVar19 = lVar25;
            lVar24 = lVar26;
            do {
              fVar7 = *pfVar27;
              fVar5 = pfVar27[1];
              pfVar27 = pfVar27 + 2;
              *(float *)((int)lVar19 + 0xc4) = *(float *)((int)lVar19 + 0xc4) * fVar7;
              lVar19 = lVar19 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar5;
              lVar24 = lVar24 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar19 = 2;
            do {
              iVar20 = (int)lVar25;
              iVar21 = (int)lVar26;
              lVar25 = lVar25 + 0x10;
              lVar26 = lVar26 + 0x10;
              fVar6 = fVar6 + *(float *)(iVar20 + 0xc4) + *(float *)(iVar21 + 4) +
                      *(float *)(iVar21 + 8) + *(float *)(iVar21 + 0xc);
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
            fVar6 = (fVar6 + 0.7853982) * fVar9 + fVar8;
          }
          dVar33 = (double)FastSubRots(fVar6,fVar4);
          if (((dVar33 < 0.2617993950843811) && (*(int *)((int)pvVar11 + 0x1c0) != 0)) &&
             (fVar4 = (moby->pos).y - *(float *)((int)pvVar11 + 0x184),
             fVar6 = (moby->pos).x - *(float *)((int)pvVar11 + 0x180),
             SQRT(fVar6 * fVar6 + fVar4 * fVar4) < 2.75)) {
            fVar4 = (moby->rotation).z;
            fVar6 = fVar4 + 1.5707963;
            fVar7 = 3.1415925 - fVar4;
            if (fVar4 - (3.1415925 - fVar4) < 0.0) {
              fVar7 = fVar4;
            }
            fVar5 = 3.1415925 - fVar6;
            if (fVar6 - (3.1415925 - fVar6) < 0.0) {
              fVar5 = fVar6;
            }
            fVar8 = -3.1415925 - fVar4;
            if ((-3.1415925 - fVar4) - fVar7 < 0.0) {
              fVar8 = fVar7;
            }
            fVar4 = -3.1415925 - fVar6;
            if ((-3.1415925 - fVar6) - fVar5 < 0.0) {
              fVar4 = fVar5;
            }
            fVar6 = fVar8 * fVar8;
            fVar7 = fVar4 * fVar4;
            fVar15 = fVar6 * fVar6 * fVar8;
            *(undefined4 *)(puVar14 + 0x11) = 0;
            fVar5 = fVar7 * fVar7 * fVar4;
            fVar16 = fVar6 * fVar15;
            fVar9 = fVar7 * fVar5;
            *(float *)((int)puVar14 + 0x84) =
                 (fVar6 * fVar16 * 2.601887e-06 +
                 fVar16 * -0.0001980741 +
                 fVar15 * 0.0083330255 + fVar6 * fVar8 * -0.16666657 + fVar8) * 0.2;
            victim = *(MobyInstance **)((int)pvVar11 + 0x1c0);
            *(float *)(puVar14 + 0x10) =
                 (fVar7 * fVar9 * 2.601887e-06 +
                 fVar9 * -0.0001980741 + fVar5 * 0.0083330255 + fVar7 * fVar4 * -0.16666657 + fVar4)
                 * 0.2;
            *(undefined4 *)(puVar14 + 0x12) = *(undefined4 *)((int)pvVar11 + 0x180);
            *(undefined4 *)((int)puVar14 + 0x94) = *(undefined4 *)((int)pvVar11 + 0x184);
            fVar4 = *(float *)((int)pvVar11 + 0x188);
            *(float *)(puVar14 + 0x13) = fVar4;
            *(undefined4 *)((int)puVar14 + 0x9c) = *(undefined4 *)((int)pvVar11 + 0x18c);
            *(float *)(puVar14 + 0x13) = fVar4 + 0.75;
            CollDamageMobyDirect
                      ((float)dVar32,victim,moby,1,uVar23,(float *)(puVar14 + 0x12),
                       (float *)(puVar14 + 0x10));
          }
        }
      }
      else {
        moby->state = '\v';
        if (moby->animationId != '\t') {
          puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar19,9,0,*(undefined4 *)((int)puVar14 + 300));
        }
      }
    }
    else if (bVar2 == 9) {
      M1382_003f6930((double)*(float *)((int)pvVar11 + 0x1ec),lVar19);
      iVar20 = *(int *)((int)pvVar11 + 0x1d0);
      dVar32 = 1.7999999523162842;
      moby->unk58 = 1.8;
      iVar20 = PointInsideComplexPoly
                         (&g_heroPosition,(Vec4 *)Splines[iVar20]->points,Splines[iVar20]->cnt);
      if ((iVar20 == 0) && (*(int *)((int)pvVar11 + 0x1d4) == 0)) {
        moby->state = '\v';
      }
      else {
        fVar4 = (moby->pos).x - *(float *)((int)pvVar11 + 0x180);
        fVar6 = (moby->pos).y - *(float *)((int)pvVar11 + 0x184);
        if (dVar32 <= (double)SQRT(fVar4 * fVar4 + fVar6 * fVar6)) {
          fVar6 = *(float *)((int)pvVar11 + 0x184) - *(float *)((int)pvVar11 + 500);
          fVar4 = *(float *)((int)pvVar11 + 0x180) - *(float *)((int)pvVar11 + 0x1f0);
          fVar7 = *(float *)((int)pvVar11 + 0x188) - *(float *)((int)pvVar11 + 0x1f8);
          if ((32.0 < SQRT(fVar7 * fVar7 + fVar4 * fVar4 + fVar6 * fVar6)) ||
             (3.0 < ABS(*(float *)((int)pvVar11 + 0x188) - (moby->pos).z))) {
            moby->state = '\v';
          }
        }
        else {
          moby->state = '\n';
          if (moby->animationId != '\n') {
            puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar19,10,5,*(undefined4 *)((int)puVar14 + 300));
          }
        }
      }
    }
    else if (bVar2 == 8) {
      fVar4 = *(float *)((int)pvVar11 + 0x180) - (moby->pos).x;
      fVar6 = *(float *)((int)pvVar11 + 0x184) - (moby->pos).y;
      fVar5 = ABS(fVar4);
      fVar7 = ABS(fVar6);
      *(float *)((int)puVar14 + 0xac) = fVar4;
      *(float *)(puVar14 + 0x16) = fVar6;
      *(float *)((int)puVar14 + 0xb4) = fVar5 - fVar7;
      dVar32 = 0.0;
      uVar29 = (ulonglong)(*(uint *)((int)puVar14 + 0xac) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar14 + 0xb4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar14 + 0x16) >> 0x1d) & 4;
      fVar4 = ABS(*(float *)((int)puVar14 + 0xac));
      if (*(float *)((int)puVar14 + 0xb4) - 0.0 < 0.0) {
        fVar4 = fVar7;
      }
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar29 << 2));
      fVar6 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
      fVar8 = ABS(*(float *)(puVar14 + 0x16));
      if (*(float *)((int)puVar14 + 0xb4) - 0.0 < 0.0) {
        fVar8 = fVar5;
      }
      if (0.0 < fVar4) {
        lVar24 = uVar17 - 0x160;
        lVar28 = uVar17 - 0x7c;
        lVar26 = uVar17 - 0x8c;
        lVar31 = 2;
        fVar4 = (fVar8 - fVar4) / (fVar8 + fVar4);
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar14 + 0x1e) = fVar4;
        *(float *)(puVar14 + 0x1d) = fVar4;
        *(float *)((int)puVar14 + 0xec) = fVar4;
        *(float *)((int)puVar14 + 0xe4) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar14 + 0x1d) = *(float *)(puVar14 + 0x1d) * fVar5;
        *(float *)((int)puVar14 + 0xec) = *(float *)((int)puVar14 + 0xec) * fVar4;
        *(float *)(puVar14 + 0x1e) = *(float *)(puVar14 + 0x1e) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar24 + 0xe4) = *(float *)((int)lVar24 + 0xd4) * fVar4 * fVar4;
          iVar20 = (int)lVar26;
          lVar26 = lVar26 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
          lVar28 = lVar28 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar28 = uVar17 - 0x8c;
        pfVar27 = (float *)&DAT_007358e0;
        lVar24 = lVar25;
        lVar26 = lVar28;
        do {
          fVar4 = *pfVar27;
          fVar5 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar24 + 0xe4) = *(float *)((int)lVar24 + 0xe4) * fVar4;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar5;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar24 = 2;
        do {
          iVar20 = (int)lVar25;
          lVar25 = lVar25 + 0x10;
          iVar21 = (int)lVar28;
          lVar28 = lVar28 + 0x10;
          dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar20 + 0xe4)) +
                            *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) +
                           *(float *)(iVar21 + 0xc));
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar7 + fVar6);
      }
      OrganicDeltAngSpeed
                (dVar32,0x3f9eb851e0000000,0x3fd3333340000000,
                 (double)(g_FrameTime * 7.8539815),lVar19,&DAT_003f7be0,uVar30 + 0x1dc);
      if ((moby->field43_0x70 & 2U) != 0) {
        if ((*(int *)((int)pvVar11 + 0x1d4) == 0) &&
           (iVar20 = PointInsideComplexPoly
                               (&g_heroPosition,
                                (Vec4 *)Splines[*(int *)((int)pvVar11 + 0x1d0)]->points,
                                Splines[*(int *)((int)pvVar11 + 0x1d0)]->cnt), iVar20 == 0)) {
          moby->state = '\v';
          if (moby->animationId != '\t') {
            puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar19,9,0,*(undefined4 *)((int)puVar14 + 300));
          }
        }
        else {
          moby->state = '\t';
          if (moby->animationId != '\t') {
            puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar19,9,0,*(undefined4 *)((int)puVar14 + 300));
          }
        }
      }
    }
  }
  else {
    moby->modeBits = moby->modeBits | DISABLED;
    moby->enabled = '\0';
  }
  return;
}


// 0x03f9798 (0xb0 bytes)
undefined8 M1382_003f9798(MobyInstance *param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_MB_Sucking(param_1);
  if ((int)uVar1 == 0) {
    if ((param_1->state == '\f') && (param_1->state = '\x06', param_1->animationId != '\a')) {
      MB_SetAnimation(param_1,7,0,(int)(animationSpeed * 10.5));
    }
  }
  else {
    param_1->state = '\f';
  }
  return uVar1;
}


// 0x03f9850 (0xb0 bytes)
undefined8 M1382_003f9850(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_0048aa70();
  if ((int)uVar1 == 0) {
    if ((*(char *)(param_1 + 0x20) == '\f') &&
       (*(undefined1 *)(param_1 + 0x20) = 6, *(char *)(param_1 + 0x53) != '\a')) {
      MB_SetAnimation(param_1,7,0,(int)(animationSpeed * 10.5));
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 0xc;
  }
  return uVar1;
}


// 0x03f9908 (0xb0 bytes)
undefined8 M1382_003f9908(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_0048acb8();
  if ((int)uVar1 == 0) {
    if ((*(char *)(param_1 + 0x20) == '\f') &&
       (*(undefined1 *)(param_1 + 0x20) = 6, *(char *)(param_1 + 0x53) != '\a')) {
      MB_SetAnimation(param_1,7,0,(int)(animationSpeed * 10.5));
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 0xc;
  }
  return uVar1;
}


// 0x03f99b8 (0x38 bytes)
void M1382_003f99b8(int param_1)

{
  M849_0048afe8();
  *(undefined1 *)(param_1 + 0x20) = 0xc;
  return;
}


// 0x03f99f0 (0x40 bytes)
longlong M1382_003f99f0(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x78) + 0x60;
    lVar1 = lVar1 + (ZERO_MASK(*(uint *)(param_1 + 0x78)) & -lVar1);
  }
  return lVar1;
}


// 0x03f9a38 (0x90 bytes)
void M1382_003f9a38(int param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x78);
  uVar1 = *(uint *)(param_1 + 0x90);
  iVar2 = 0;
  uVar4 = 0x3fc99999a0000000;
  uVar5 = 0x3fb47ae140000000;
  do {
    MB_DrawGlowFX(uVar4,uVar5,uVar3 + 0x200,uVar1 & 0xffffff | 0x30000000);
    iVar2 = iVar2 + 1;
    uVar3 = uVar3 + 0x10;
  } while (iVar2 < 3);
  return;
}


// 0x03f9ac8 (0x14 bytes)
void M1382_003f9ac8(void)

{
  DAT_0085456c = 0x10000;
  return;
}


// 0x03f9ae0 (0xcc bytes)
MobyInstance * M1382_003f9ae0(f32 *param_1,undefined4 *param_2)

{
  f32 fVar1;
  undefined4 *puVar2;
  MobyInstance *pMVar3;
  
  pMVar3 = CreateMoby(THRUSTERPACK|PLASMABOT_001C);
  if (pMVar3 != (MobyInstance *)0x0) {
    pMVar3->updateDistance = ' ';
    pMVar3->enabled = '\x01';
    puVar2 = (undefined4 *)pMVar3->pVar;
    (pMVar3->pos).x = *param_1;
    (pMVar3->pos).y = param_1[1];
    (pMVar3->pos).z = param_1[2];
    fVar1 = param_1[3];
    pMVar3->drawDistance = 0x40;
    (pMVar3->pos).w = fVar1;
    *puVar2 = *param_2;
    puVar2[1] = param_2[1];
    puVar2[2] = param_2[2];
    puVar2[3] = param_2[3];
    MB_CopyHeroLights(pMVar3);
    UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}


