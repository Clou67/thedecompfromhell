// game/update/moby240.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 7 functions, 0x30b548-0x30d034
#include "game/update/moby240.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x030b548 (0x14 bytes)
void M240_0030b548(void)

{
  DAT_007ff61c = 0x10000;
  return;
}


// 0x030b568 (0x154 bytes)
MobyInstance * FUN_0030b568(f32 *param_1,undefined4 *param_2,u8 param_3,undefined4 param_4)

{
  void *pvVar1;
  uint uVar2;
  MobyInstance *pMVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  pMVar3 = CreateMoby(PLATFORM_00F0);
  if (pMVar3 != (MobyInstance *)0x0) {
    pMVar3->updateDistance = '\x7f';
    pMVar3->drawDistance = 0x7f;
    pMVar3->enabled = '\x01';
    dVar6 = -6.2831854820251465;
    pvVar1 = pMVar3->pVar;
    dVar5 = 6.2831854820251465;
    dVar4 = (double)MB_randRangeFloat
                              (g_FrameTime * -6.2831855,g_FrameTime * 6.2831855)
    ;
    *(float *)((int)pvVar1 + 0xe8) = (float)dVar4;
    dVar4 = (double)MB_randRangeFloat
                              ((float)((double)g_FrameTime * dVar6),
                               (float)((double)g_FrameTime * dVar5));
    *(float *)((int)pvVar1 + 0xec) = (float)dVar4;
    uVar2 = g_heroMobyPtr->light;
    pMVar3->color = g_heroMobyPtr->color;
    pMVar3->light = uVar2;
    (pMVar3->pos).x = *param_1;
    (pMVar3->pos).y = param_1[1];
    (pMVar3->pos).z = param_1[2];
    (pMVar3->pos).w = param_1[3];
    *(undefined4 *)((int)pvVar1 + 0x40) = *param_2;
    *(undefined4 *)((int)pvVar1 + 0x44) = param_2[1];
    *(undefined4 *)((int)pvVar1 + 0x48) = param_2[2];
    *(undefined4 *)((int)pvVar1 + 0x4c) = param_2[3];
    pMVar3->state = param_3;
    *(undefined4 *)((int)pvVar1 + 0xe4) = param_4;
    UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}


// 0x030b6bc (0x58 bytes)
undefined8 M240_0030b6bc(int param_1)

{
  if ((g_heroStateType == 3) || (g_heroState == EDGE_JUMP)) {
    if (DAT_0096a1d8 == param_1) {
      return 1;
    }
  }
  else if ((g_framesNotGrounded == 0) && (g_standingOnMoby == param_1)) {
    return 1;
  }
  return 0;
}


// 0x030b740 (0x474 bytes)
void M240_0030b740(int param_1)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  GPiece<32> local_b0;
  GPiece<16> local_90;
  GPiece<32> local_80;
  
  if (*(char *)(param_1 + 0x31) != '\0') {
    dVar8 = 0.0;
    MB_randRangeFloat(0.0,g_FrameTime * 5.0);
    dVar6 = -2.0;
    dVar1 = 2.0;
    MB_randRangeFloat(g_FrameTime * -2.0,g_FrameTime * 2.0);
    MB_randRangeFloat
              ((float)((double)g_FrameTime * dVar6),
               (float)((double)g_FrameTime * dVar1));
    MB_randRangeFloat((float)dVar8,g_FrameTime);
    MB_randRangeFloat(-g_FrameTime,g_FrameTime);
    MB_randRangeFloat(-g_FrameTime,g_FrameTime);
    dVar6 = 8.5;
    uVar7 = 0x40c3880000000000;
    dVar1 = 17.5;
    MB_randRange((int)(animationSpeed * 8.5),(int)(animationSpeed * 17.5));
    SpawnPart_21(uVar7,local_90,local_b0,0x4f007fff,0x1fffffff);
    uVar5 = 0x3fa99999a0000000;
    uVar4 = 0x3ff028f5c0000000;
    uVar3 = 0x3ff07ae140000000;
    uVar2 = 0x40dd4c0000000000;
    SpawnPart_23
              (0x3fa99999a0000000,0x3ff028f5c0000000,0x3ff07ae140000000,0x40dd4c0000000000,local_90)
    ;
    MB_randRange
              ((int)((double)animationSpeed * dVar6),(int)((double)animationSpeed * dVar1));
    SpawnPart_21(uVar7,local_80,local_b0,0x4f007fff,0x1fffffff);
    SpawnPart_23(uVar5,uVar4,uVar3,uVar2,local_80);
  }
  return;
}


// 0x030bbd0 (0x2b8 bytes)
void M240_0030bbd0
               (int param_1,float *param_2,float *param_3,undefined8 param_4,int param_5)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  
  iVar2 = *(int *)(param_1 + 0x78);
  fVar3 = param_3[1] - *(float *)(param_1 + 0x14);
  fVar4 = *param_3 - *(float *)(param_1 + 0x10);
  fVar5 = param_3[2] - *(float *)(param_1 + 0x18);
  fVar6 = SQRT(*(float *)(iVar2 + 0x48) * *(float *)(iVar2 + 0x48) +
               *(float *)(iVar2 + 0x40) * *(float *)(iVar2 + 0x40) +
               *(float *)(iVar2 + 0x44) * *(float *)(iVar2 + 0x44));
  fVar7 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
  if (param_5 == 0) {
    fVar1 = *(float *)(iVar2 + 0xd0) * g_FrameTime;
    if (fVar1 <= fVar6) {
      if (fVar1 < fVar6) {
        fVar6 = -(*(float *)(iVar2 + 0xd4) * g_FrameTimeSq - fVar6);
      }
    }
    else {
      fVar6 = *(float *)(iVar2 + 0xd4) * g_FrameTimeSq + fVar6;
    }
  }
  else {
    if (fVar6 == 0.0) {
      fVar6 = g_FrameTime * 0.01;
    }
    fVar1 = *(float *)(iVar2 + 0xd4);
    if ((fVar6 * fVar6) / (fVar7 * 2.0) <= fVar1 * g_FrameTimeSq) {
      if (fVar6 < *(float *)(iVar2 + 0xd0) * g_FrameTime) {
        fVar6 = fVar1 * g_FrameTimeSq + fVar6;
      }
    }
    else {
      fVar6 = -(fVar1 * g_FrameTimeSq - fVar6);
    }
  }
  fVar6 = fVar6 / fVar7;
  fVar1 = 0.0;
  *(float *)(iVar2 + 0x4c) = param_3[3];
  fVar9 = fVar1;
  if (0.0 - fVar7 < 0.0) {
    fVar9 = fVar4 * fVar6;
  }
  fVar8 = fVar1;
  if (0.0 - fVar7 < 0.0) {
    fVar8 = fVar3 * fVar6;
  }
  if (0.0 - fVar7 < 0.0) {
    fVar1 = fVar5 * fVar6;
  }
  if (fVar7 - 0.0 < 0.0) {
    fVar9 = fVar4 * fVar6;
  }
  if (fVar7 - 0.0 < 0.0) {
    fVar8 = fVar3 * fVar6;
  }
  if (fVar7 - 0.0 < 0.0) {
    fVar1 = fVar5 * fVar6;
  }
  *(float *)(iVar2 + 0x40) = fVar9;
  *(float *)(iVar2 + 0x44) = fVar8;
  *(float *)(iVar2 + 0x48) = fVar1;
  dVar11 = (double)*param_2;
  dVar10 = (double)FastSubRots(*param_2,*(float *)(param_1 + 0x40));
  Delt((float)dVar11,(float)(dVar10 / (double)DAT_007ff658),(float *)(param_1 + 0x40));
  dVar11 = (double)param_2[1];
  dVar10 = (double)FastSubRots(param_2[1],*(float *)(param_1 + 0x44));
  Delt((float)dVar11,(float)(dVar10 / (double)DAT_007ff658),(float *)(param_1 + 0x44));
  AccelDeltAng
            ((double)param_2[2],(double)(DAT_0071f40c * 0.005),(double)(DAT_0071f40c * 0.3),
             (double)(g_FrameTime * 1.9198622),param_1 + 0x48,&DAT_00720000,iVar2 + 0xf8);
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + *(float *)(iVar2 + 0x40);
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + *(float *)(iVar2 + 0x44);
  *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + *(float *)(iVar2 + 0x48);
  return;
}


// 0x030be90 (0x120 bytes)
void M240_0030be90(int param_1,float *param_2,int param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  GPiece<16> local_80;
  float local_70;
  float local_6c;
  float local_60;
  float local_5c;
  float local_50;
  float local_4c;
  float local_40;
  float local_3c;
  
  if (param_3 == 0) {
    *param_2 = 0.0;
    fVar1 = 0.0;
  }
  else {
    dVar5 = (double)(g_heroPosition.y - *(float *)(param_1 + 0x14));
    dVar4 = (double)(g_heroPosition.x - *(float *)(param_1 + 0x10));
    dVar3 = (double)g_heroPosition.w;
    dVar2 = (double)(g_heroPosition.z - *(float *)(param_1 + 0x18));
    FastEulerToMtx1(&local_70,local_80);
    *param_2 = -(float)((double)local_3c * dVar3 +
                       (double)(float)((double)local_4c * dVar2 +
                                      (double)(float)((double)local_6c * dVar4 +
                                                     (double)(float)((double)local_5c * dVar5)))) /
               DAT_007ff654;
    fVar1 = (float)((double)local_40 * dVar3 +
                   (double)(float)((double)local_50 * dVar2 +
                                  (double)(float)((double)local_70 * dVar4 +
                                                 (double)(float)((double)local_60 * dVar5)))) /
            DAT_007ff654;
  }
  param_2[1] = fVar1;
  return;
}


// 0x030c010 (0x1024 bytes)
// inlined: FastAtan2 @0x30c52c
/* Moby 240 */

void UpdateMoby_240(MobyInstance *moby)

{
  bool bVar1;
  char cVar2;
  float fVar3;
  f32 fVar4;
  f32 fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  void *pvVar11;
  int *piVar12;
  Spline *pSVar13;
  ulonglong *puVar14;
  float fVar15;
  MobyInstance *pMVar16;
  MobyInstance *pMVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar22;
  byte bVar24;
  int iVar23;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar25;
  float *pfVar26;
  longlong lVar27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  longlong lVar28;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar29;
  double dVar30;
  double dVar31;
  ulonglong in_f29;
  double dVar32;
  double dVar33;
  ulonglong in_f30;
  double dVar34;
  double dVar35;
  ulonglong in_f31;
  double dVar36;
  double dVar37;
  
  lVar19 = (longlong)(int)moby;
  uVar18 = ZEXT48(&stack0x00000000);
  lVar28 = uVar18 - 0x1c0;
  puVar14 = (ulonglong *)lVar28;
  *puVar14 = uVar18;
  puVar14[0x3a] = in_LR;
  puVar14[0x35] = in_f29;
  puVar14[0x36] = in_f30;
  puVar14[0x37] = in_f31;
  puVar14[0x34] = unaff_r31;
  fVar3 = (moby->rotation).z;
  dVar36 = (double)(moby->pos).x;
  puVar14[0x33] = unaff_r30;
  dVar34 = (double)(moby->pos).y;
  pvVar11 = moby->pVar;
  dVar32 = (double)(moby->pos).z;
  fVar4 = (moby->pos).w;
  fVar5 = (moby->rotation).y;
  *(f32 *)(puVar14 + 0x18) = (moby->rotation).x;
  bVar24 = moby->state;
  *(f32 *)((int)puVar14 + 0xc4) = fVar5;
  fVar5 = (moby->rotation).w;
  *(float *)(puVar14 + 0x19) = fVar3;
  puVar14[0x32] = unaff_r29;
  puVar14[0x31] = unaff_r28;
  *(f32 *)((int)puVar14 + 0xcc) = fVar5;
  dVar33 = dVar32;
  dVar35 = dVar34;
  dVar37 = dVar36;
  if (bVar24 != 0) {
    if ((*(int *)((int)pvVar11 + 0xfc) != -1) &&
       (g_MobyInstance[*(int *)((int)pvVar11 + 0xfc)].state < 0x80)) {
      M240_0030b740(lVar19);
      return;
    }
    if (*(int *)((int)pvVar11 + 0xdc) != -1) {
      iVar22 = MB_CountActiveMobysByGroup
                         (*(int *)((int)pvVar11 + 0xdc),0xffffffffffffffff);
      dVar36 = (double)(moby->pos).x;
      fVar3 = (moby->rotation).z;
      dVar34 = (double)(moby->pos).y;
      dVar32 = (double)(moby->pos).z;
      fVar4 = (moby->pos).w;
      bVar24 = moby->state;
      if (iVar22 != 0) {
        M240_0030b740(lVar19);
        return;
      }
    }
  }
  pMVar17 = g_MobyInstance;
  if (4 < bVar24) {
    if (7 < bVar24) {
      if (bVar24 < 9) {
        (moby->pos).x = (float)(dVar36 + (double)*(float *)((int)pvVar11 + 0x40));
        (moby->pos).y = (float)(dVar34 + (double)*(float *)((int)pvVar11 + 0x44));
        (moby->pos).z = (float)(dVar32 + (double)*(float *)((int)pvVar11 + 0x48));
        iVar22 = STUB_00055ac0_RET_0(lVar19 + 0x10,0x600,0,lVar19,0);
        if ((iVar22 != 0) && (*(int *)((int)pvVar11 + 0xb0) == 0)) {
          puVar14[0x12] = 0xffffffffffffffff;
          puVar14[0x14] = 1;
          puVar14[0x15] = 1;
          puVar14[0x16] = 0xffffffffffffffff;
          puVar14[0x17] = 0;
          MB_genericExplosion
                    (0x4000000000000000,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,
                     0x3ff0000000000000,0x402e000000000000,lVar19,(int)pvVar11 + 0x40,0,1,
                     0xffffffffffffffff,10,3,0x10);
          DeleteMoby(moby);
          return;
        }
        *(float *)((int)pvVar11 + 0x48) = -(g_FrameTimeSq * 7.0 - *(float *)((int)pvVar11 + 0x48));
        dVar36 = (double)FastWrapRot(*(float *)((int)pvVar11 + 0xe8),(moby->rotation).x);
        (moby->rotation).x = (float)dVar36;
        dVar36 = (double)FastWrapRot(*(float *)((int)pvVar11 + 0xec),(moby->rotation).y);
        iVar22 = *(int *)((int)pvVar11 + 0xb0);
        (moby->rotation).y = (float)dVar36;
        fVar4 = (moby->pos).z;
        if ((iVar22 != 0) &&
           (fVar3 = (moby->pos).y - *(float *)(iVar22 + 0x14),
           fVar8 = (moby->pos).x - *(float *)(iVar22 + 0x10),
           SQRT(fVar8 * fVar8 + fVar3 * fVar3) < 0.5)) {
          moby->state = '\0';
        }
        if ((int)fVar4 < 0) {
          DeleteMoby(moby);
        }
        goto LAB_0030cfc4;
      }
      if (9 < bVar24) goto LAB_0030cfc4;
      iVar22 = *(int *)((int)pvVar11 + 0xf0);
      *(float *)(puVar14 + 0x26) = (float)dVar36;
      *(float *)((int)puVar14 + 0x134) = (float)dVar34;
      *(float *)(puVar14 + 0x27) = (float)dVar32;
      *(f32 *)((int)puVar14 + 0x13c) = fVar4;
      pMVar16 = DAT_0096a1d8;
      bVar1 = g_heroStateType == 3;
      fVar8 = pMVar17[iVar22].pos.z;
      *(undefined4 *)((int)puVar14 + 0x14c) = 0;
      *(float *)(puVar14 + 0x27) = fVar8;
      *(undefined4 *)((int)puVar14 + 0x144) = 0;
      *(undefined4 *)(puVar14 + 0x28) = 0;
      *(float *)(puVar14 + 0x29) = fVar3;
      if ((bVar1) || (g_heroState == EDGE_JUMP)) {
        if (pMVar16 != moby) goto LAB_0030cf34;
        bVar1 = true;
      }
      else if ((g_framesNotGrounded == 0) && (g_standingOnMoby == moby)) {
        bVar1 = true;
      }
      else {
LAB_0030cf34:
        bVar1 = false;
      }
      if (bVar1) {
        *(float *)(puVar14 + 0x27) = fVar8 + 0.2;
        M240_0030be90(lVar19,uVar18 - 0x80,1);
        M240_0030bbd0(lVar19,uVar18 - 0x80,uVar18 - 0x90,1,1);
      }
      else {
        *(float *)(puVar14 + 0x27) = fVar8 + 0.4;
        M240_0030be90(lVar19,uVar18 - 0x80,0);
        M240_0030bbd0(lVar19,uVar18 - 0x80,uVar18 - 0x90,0,1);
      }
      goto LAB_0030cfc4;
    }
    if (bVar24 < 6) {
      iVar22 = FastDecTimerS32((int)pvVar11 + 0xe0);
      if (iVar22 != 0) {
        *(byte *)((int)pvVar11 + 0xa4) =
             ((byte)(ZERO_MASK((1 - (uint)*(byte *)((int)pvVar11 + 0xa4)))) & 1) + 1;
        moby->state = '\x04';
      }
      if (*(char *)((int)pvVar11 + 0xa4) == '\x02') {
        M240_0030b740(lVar19);
      }
      fVar4 = (moby->rotation).y;
      *(f32 *)(puVar14 + 0x24) = (moby->rotation).x;
      fVar5 = (moby->rotation).z;
      *(f32 *)((int)puVar14 + 0x124) = fVar4;
      fVar4 = (moby->rotation).w;
      *(f32 *)(puVar14 + 0x25) = fVar5;
      *(f32 *)((int)puVar14 + 300) = fVar4;
      M240_0030bbd0(lVar19,uVar18 - 0xa0,lVar19 + 0x10,0,1);
      goto LAB_0030cfc4;
    }
    if (bVar24 < 7) {
      dVar30 = (double)*(float *)((int)pvVar11 + 0x40);
      fVar3 = *(float *)((int)pvVar11 + 0x48);
      if (SQRT(fVar3 * fVar3 +
               (float)(dVar30 * dVar30 +
                      (double)(*(float *)((int)pvVar11 + 0x44) * *(float *)((int)pvVar11 + 0x44))))
          < g_FrameTime * 6.0) {
        *(float *)((int)pvVar11 + 0x48) = g_FrameTimeSq * 6.0 + fVar3;
        dVar36 = (double)(moby->pos).x;
        dVar34 = (double)(moby->pos).y;
        dVar32 = (double)(moby->pos).z;
      }
      cVar2 = moby->enabled;
      (moby->pos).x = (float)(dVar36 + dVar30);
      (moby->pos).y = (float)(dVar34 + (double)*(float *)((int)pvVar11 + 0x44));
      (moby->pos).z = (float)(dVar32 + (double)*(float *)((int)pvVar11 + 0x48));
      if (cVar2 == '\0') {
        DeleteMoby(moby);
      }
      goto LAB_0030cfc4;
    }
    M240_0030b740(lVar19);
    piVar12 = *(int **)((int)pvVar11 + 0xb0);
    iVar22 = *piVar12;
    iVar23 = *(int *)((int)pvVar11 + 0xa0) + iVar22 + (int)*(char *)((int)pvVar11 + 0xa4);
    iVar23 = iVar23 - (iVar23 / iVar22) * iVar22;
    *(int *)(puVar14 + 0x1e) = piVar12[iVar23 * 4 + 4];
    *(int *)((int)puVar14 + 0xf4) = piVar12[iVar23 * 4 + 5];
    *(int *)(puVar14 + 0x1f) = piVar12[iVar23 * 4 + 6];
    *(int *)((int)puVar14 + 0xfc) = piVar12[iVar23 * 4 + 7];
    iVar22 = *(int *)((int)pvVar11 + 0xb0) + iVar23 * 0x10;
    fVar3 = (moby->pos).y - *(float *)(iVar22 + 0x14);
    fVar8 = (moby->pos).x - *(float *)(iVar22 + 0x10);
    fVar9 = (moby->pos).z - *(float *)(iVar22 + 0x18);
    if (SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar3 * fVar3) < 0.5) {
      *(int *)((int)pvVar11 + 0xa0) = iVar23;
      if (*(int *)(iVar22 + 0x1c) != -0x40800000) {
        *(undefined4 *)((int)pvVar11 + 0xd0) = *(undefined4 *)(iVar22 + 0x1c);
      }
    }
    fVar3 = *(float *)(puVar14 + 0x1e) - (moby->pos).x;
    fVar8 = *(float *)((int)puVar14 + 0xf4) - (moby->pos).y;
    fVar9 = ABS(fVar3);
    fVar6 = ABS(fVar8);
    *(float *)(puVar14 + 0x2a) = fVar3;
    *(float *)((int)puVar14 + 0x154) = fVar8;
    *(float *)(puVar14 + 0x2b) = fVar9 - fVar6;
    fVar8 = 0.0;
    uVar20 = (ulonglong)(*(uint *)(puVar14 + 0x2a) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar14 + 0x2b) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar14 + 0x154) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)(puVar14 + 0x2a));
    if (*(float *)(puVar14 + 0x2b) - 0.0 < 0.0) {
      fVar3 = fVar6;
    }
    fVar10 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar6 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    fVar15 = ABS(*(float *)((int)puVar14 + 0x154));
    if (*(float *)(puVar14 + 0x2b) - 0.0 < 0.0) {
      fVar15 = fVar9;
    }
    if (0.0 < fVar3) {
      lVar21 = uVar18 - 0x1b0;
      lVar25 = uVar18 - 100;
      lVar27 = uVar18 - 0x54;
      lVar29 = 2;
      fVar3 = (fVar15 - fVar3) / (fVar15 + fVar3);
      fVar9 = fVar3 * fVar3;
      *(float *)(puVar14 + 0x2d) = fVar3;
      *(float *)(puVar14 + 0x2c) = fVar3;
      *(float *)((int)puVar14 + 0x164) = fVar3;
      *(float *)((int)puVar14 + 0x15c) = fVar3;
      fVar3 = fVar9 * fVar9;
      *(float *)(puVar14 + 0x2c) = *(float *)(puVar14 + 0x2c) * fVar9;
      *(float *)((int)puVar14 + 0x164) = *(float *)((int)puVar14 + 0x164) * fVar3;
      *(float *)(puVar14 + 0x2d) = *(float *)(puVar14 + 0x2d) * fVar3 * fVar9;
      do {
        *(float *)((int)lVar21 + 0x15c) = *(float *)((int)lVar21 + 0x14c) * fVar3 * fVar3;
        iVar22 = (int)lVar25;
        lVar21 = lVar21 + 8;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar3 * fVar3;
        lVar27 = lVar27 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar29 = 4;
      lVar27 = uVar18 - 100;
      pfVar26 = (float *)&DAT_007358e0;
      lVar21 = lVar28;
      lVar25 = lVar27;
      do {
        fVar3 = *pfVar26;
        fVar9 = pfVar26[1];
        pfVar26 = pfVar26 + 2;
        *(float *)((int)lVar21 + 0x15c) = *(float *)((int)lVar21 + 0x15c) * fVar3;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar9;
        lVar25 = lVar25 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar21 = 2;
      do {
        iVar22 = (int)lVar28;
        iVar23 = (int)lVar27;
        lVar28 = lVar28 + 0x10;
        lVar27 = lVar27 + 0x10;
        fVar8 = fVar8 + *(float *)(iVar22 + 0x15c) + *(float *)(iVar23 + 4) + *(float *)(iVar23 + 8)
                + *(float *)(iVar23 + 0xc);
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      fVar8 = (fVar8 + 0.7853982) * fVar10 + fVar6;
    }
    *(float *)(puVar14 + 0x1d) = fVar8;
    if ((g_heroStateType == 3) || (g_heroState == EDGE_JUMP)) {
      if (DAT_0096a1d8 != moby) goto LAB_0030c688;
      bVar1 = true;
    }
    else if ((g_framesNotGrounded == 0) && (g_standingOnMoby == moby)) {
      bVar1 = true;
    }
    else {
LAB_0030c688:
      bVar1 = false;
    }
    if (bVar1) {
      M240_0030be90(lVar19,uVar18 - 0xe0,1);
      M240_0030bbd0(lVar19,uVar18 - 0xe0,uVar18 - 0xd0,1,0);
    }
    else {
      M240_0030be90(lVar19,uVar18 - 0xe0,0);
      M240_0030bbd0(lVar19,uVar18 - 0xe0,uVar18 - 0xd0,0,0);
    }
    goto LAB_0030cfc4;
  }
  if (bVar24 < 2) {
    if (bVar24 == 0) {
      iVar22 = *(int *)((int)pvVar11 + 0xe4);
      if (iVar22 == 4) {
        moby->state = '\t';
        *(undefined4 *)((int)pvVar11 + 0xd4) = 0x40800000;
        *(undefined4 *)((int)pvVar11 + 0xd0) = 0x40800000;
        *(ushort *)((int)pvVar11 + 0x3e) = *(ushort *)((int)pvVar11 + 0x3e) & 0xfffe;
      }
      else if (iVar22 == 3) {
        moby->state = '\x01';
        moby->drawDistance = 0;
        moby->collision = (ushort *)0x0;
      }
      else if (iVar22 == 2) {
        moby->collision = moby->pClass->collision;
        iVar22 = *(int *)((int)pvVar11 + 0xb4);
        (moby->rotation).y = -1.5707964;
        pSVar13 = Splines[iVar22];
        *(undefined4 *)((int)pvVar11 + 0xa0) = 0;
        *(Spline **)((int)pvVar11 + 0xb0) = pSVar13;
        (moby->rotation).z = fVar3 + 3.1415927;
        *(undefined1 *)((int)pvVar11 + 0xa4) = 1;
        if (*(int *)((int)pvVar11 + 0xd4) == 0) {
          *(undefined4 *)((int)pvVar11 + 0xd4) = 0x41000000;
        }
        if (*(int *)((int)pvVar11 + 0xd0) == 0) {
          *(undefined4 *)((int)pvVar11 + 0xd0) = 0x41000000;
        }
        *(undefined4 *)((int)pvVar11 + 0x4c) = 0;
        *(undefined4 *)((int)pvVar11 + 0x48) = 0;
        *(undefined4 *)((int)pvVar11 + 0x44) = 0;
        *(undefined4 *)((int)pvVar11 + 0x40) = 0;
        moby->state = '\x04';
      }
      else if (iVar22 == 1) {
        iVar22 = *(int *)((int)pvVar11 + 0xb4);
        iVar23 = *(int *)((int)pvVar11 + 0xd4);
        moby->collision = moby->pClass->collision;
        pSVar13 = Splines[iVar22];
        *(undefined1 *)((int)pvVar11 + 0xa4) = 1;
        *(Spline **)((int)pvVar11 + 0xb0) = pSVar13;
        *(undefined4 *)((int)pvVar11 + 0xa0) = 0;
        if (iVar23 == 0) {
          *(undefined4 *)((int)pvVar11 + 0xd4) = 0x40000000;
        }
        if (*(int *)((int)pvVar11 + 0xd0) == 0) {
          *(undefined4 *)((int)pvVar11 + 0xd0) = 0x40800000;
        }
        dVar36 = (double)MB_randRot();
        *(float *)((int)pvVar11 + 0xd8) = (float)dVar36;
        *(undefined4 *)((int)pvVar11 + 0x4c) = 0;
        *(ushort *)((int)pvVar11 + 0x3e) = *(ushort *)((int)pvVar11 + 0x3e) | 9;
        *(undefined4 *)((int)pvVar11 + 0x48) = 0;
        *(undefined4 *)((int)pvVar11 + 0x44) = 0;
        *(undefined4 *)((int)pvVar11 + 0x40) = 0;
        moby->state = '\x02';
      }
      else if (iVar22 == 0) {
        iVar22 = *(int *)((int)pvVar11 + 0xb4);
        moby->collision = moby->pClass->collision;
        pSVar13 = Splines[iVar22];
        *(undefined1 *)((int)pvVar11 + 0xa4) = 1;
        *(Spline **)((int)pvVar11 + 0xb0) = pSVar13;
        *(undefined4 *)((int)pvVar11 + 0xa0) = 0;
        if (*(int *)((int)pvVar11 + 0xd0) == 0) {
          *(undefined4 *)((int)pvVar11 + 0xd0) = 0x40c00000;
        }
        if (*(int *)((int)pvVar11 + 0xd4) == 0) {
          *(undefined4 *)((int)pvVar11 + 0xd4) = 0x40c00000;
        }
        *(ushort *)((int)pvVar11 + 0x3e) = *(ushort *)((int)pvVar11 + 0x3e) | 9;
        *(undefined4 *)((int)pvVar11 + 0x4c) = 0;
        *(undefined4 *)((int)pvVar11 + 0x48) = 0;
        *(undefined4 *)((int)pvVar11 + 0x44) = 0;
        *(undefined4 *)((int)pvVar11 + 0x40) = 0;
        moby->state = '\a';
      }
    }
    goto LAB_0030cfc4;
  }
  if (2 < bVar24) {
    if (3 < bVar24) {
      iVar22 = *(int *)((int)pvVar11 + 0xb0);
      dVar34 = (double)FastWrapRot
                                 (*(float *)((int)pvVar11 + 0xd8),g_FrameTime * 1.2217305)
      ;
      *(float *)((int)pvVar11 + 0xd8) = (float)dVar34;
      dVar36 = (double)(float)(3.141592502593994 - dVar34);
      if (dVar34 - (double)(float)(3.141592502593994 - dVar34) < 0.0) {
        dVar36 = dVar34;
      }
      dVar32 = (double)(float)(-3.141592502593994 - dVar34);
      if ((double)(float)(-3.141592502593994 - dVar34) - dVar36 < 0.0) {
        dVar32 = dVar36;
      }
      dVar30 = (double)(float)(dVar32 * dVar32);
      dVar31 = (double)(float)(dVar30 * (double)(float)(dVar30 * dVar32));
      dVar36 = (double)(float)(dVar30 * dVar31);
      fVar3 = (float)(dVar30 * dVar36) * 2.601887e-06 +
              (float)(dVar36 * -0.0001980741071747616 +
                     (double)(float)(dVar31 * 0.008333025500178337 +
                                    (double)(float)((double)(float)(dVar30 * dVar32) *
                                                    -0.16666656732559204 + dVar32)));
      if ((1.5707963705062866 < dVar34) && (dVar34 < 3.1415927410125732)) {
        fVar3 = 2.0 - fVar3;
      }
      if ((-3.1415927410125732 < dVar34) && (dVar34 < -1.5707963705062866)) {
        fVar3 = 2.0 - fVar3;
      }
      fVar3 = fVar3 * 0.5 + 0.5;
      *(undefined4 *)(puVar14 + 8) = *(undefined4 *)(iVar22 + 0x10);
      uVar7 = *(undefined4 *)(iVar22 + 0x20);
      *(undefined4 *)(puVar14 + 9) = *(undefined4 *)(iVar22 + 0x18);
      *(undefined4 *)(puVar14 + 10) = uVar7;
      *(undefined4 *)(puVar14 + 0xb) = *(undefined4 *)(iVar22 + 0x28);
      uVar7 = *(undefined4 *)(iVar22 + 0x1c);
      *(undefined4 *)((int)puVar14 + 0x44) = *(undefined4 *)(iVar22 + 0x14);
      *(undefined4 *)((int)puVar14 + 0x4c) = uVar7;
      *(undefined4 *)((int)puVar14 + 0x54) = *(undefined4 *)(iVar22 + 0x24);
      if (1.0 - fVar3 < 0.0) {
        fVar3 = fVar3 - 2.0;
      }
      *(undefined4 *)((int)puVar14 + 0x5c) = *(undefined4 *)(iVar22 + 0x2c);
      Lerp_vec4(ABS(fVar3),&(moby->pos).x);
      (moby->rotation).y = -1.5707964;
      goto LAB_0030cfc4;
    }
    *(float *)(puVar14 + 0x23) = fVar3;
    iVar22 = FastDecTimerS32((int)pvVar11 + 0xe0);
    if (iVar22 != 0) {
      *(byte *)((int)pvVar11 + 0xa4) =
           ((byte)(ZERO_MASK((1 - (uint)*(byte *)((int)pvVar11 + 0xa4)))) & 1) + 1;
      moby->state = '\x02';
    }
    if ((g_heroStateType == 3) || (g_heroState == EDGE_JUMP)) {
      if (DAT_0096a1d8 != moby) goto LAB_0030cb80;
      bVar1 = true;
    }
    else if ((g_framesNotGrounded == 0) && (g_standingOnMoby == moby)) {
      bVar1 = true;
    }
    else {
LAB_0030cb80:
      bVar1 = false;
    }
    if (bVar1) {
      M240_0030be90(lVar19,uVar18 - 0xb0,1);
      M240_0030bbd0(lVar19,uVar18 - 0xb0,lVar19 + 0x10,1,1);
    }
    else {
      M240_0030be90(lVar19,uVar18 - 0xb0,0);
      M240_0030bbd0(lVar19,uVar18 - 0xb0,lVar19 + 0x10,0,1);
    }
    goto LAB_0030cfc4;
  }
  *(undefined4 *)((int)pvVar11 + 0xd4) = 0;
  iVar22 = *(int *)((int)pvVar11 + 0xb0);
  dVar34 = (double)FastWrapRot
                             (*(float *)((int)pvVar11 + 0xd8),g_FrameTime * 1.2217305);
  *(float *)((int)pvVar11 + 0xd8) = (float)dVar34;
  dVar36 = (double)(float)(3.141592502593994 - dVar34);
  if (dVar34 - (double)(float)(3.141592502593994 - dVar34) < 0.0) {
    dVar36 = dVar34;
  }
  dVar32 = (double)(float)(-3.141592502593994 - dVar34);
  if ((double)(float)(-3.141592502593994 - dVar34) - dVar36 < 0.0) {
    dVar32 = dVar36;
  }
  dVar30 = (double)(float)(dVar32 * dVar32);
  dVar31 = (double)(float)(dVar30 * (double)(float)(dVar30 * dVar32));
  dVar36 = (double)(float)(dVar30 * dVar31);
  fVar3 = (float)(dVar30 * dVar36) * 2.601887e-06 +
          (float)(dVar36 * -0.0001980741071747616 +
                 (double)(float)(dVar31 * 0.008333025500178337 +
                                (double)(float)((double)(float)(dVar30 * dVar32) *
                                                -0.16666656732559204 + dVar32)));
  if ((1.5707963705062866 < dVar34) && (dVar34 < 3.1415927410125732)) {
    fVar3 = 2.0 - fVar3;
  }
  if ((-3.1415927410125732 < dVar34) && (dVar34 < -1.5707963705062866)) {
    fVar3 = 2.0 - fVar3;
  }
  lVar28 = lVar19 + 0x10;
  fVar3 = fVar3 * 0.5 + 0.5;
  *(undefined4 *)(puVar14 + 8) = *(undefined4 *)(iVar22 + 0x10);
  uVar7 = *(undefined4 *)(iVar22 + 0x20);
  *(undefined4 *)(puVar14 + 9) = *(undefined4 *)(iVar22 + 0x18);
  *(undefined4 *)(puVar14 + 10) = uVar7;
  *(undefined4 *)(puVar14 + 0xb) = *(undefined4 *)(iVar22 + 0x28);
  *(undefined4 *)((int)puVar14 + 0x44) = *(undefined4 *)(iVar22 + 0x14);
  uVar7 = *(undefined4 *)(iVar22 + 0x24);
  *(undefined4 *)((int)puVar14 + 0x4c) = *(undefined4 *)(iVar22 + 0x1c);
  *(undefined4 *)((int)puVar14 + 0x54) = uVar7;
  if (1.0 - fVar3 < 0.0) {
    fVar3 = fVar3 - 2.0;
  }
  *(undefined4 *)((int)puVar14 + 0x5c) = *(undefined4 *)(iVar22 + 0x2c);
  Lerp_vec4(ABS(fVar3),(float *)lVar28);
  *(f32 *)(puVar14 + 0x21) = (moby->rotation).z;
  if ((g_heroStateType == 3) || (g_heroState == EDGE_JUMP)) {
    if (DAT_0096a1d8 != moby) goto LAB_0030c8e0;
    bVar1 = true;
  }
  else if ((g_framesNotGrounded == 0) && (g_standingOnMoby == moby)) {
    bVar1 = true;
  }
  else {
LAB_0030c8e0:
    bVar1 = false;
  }
  if (bVar1) {
    M240_0030be90(lVar19,uVar18 - 0xc0,1);
    M240_0030bbd0(lVar19,uVar18 - 0xc0,lVar28,1,1);
  }
  else {
    M240_0030be90(lVar19,uVar18 - 0xc0,0);
    M240_0030bbd0(lVar19,uVar18 - 0xc0,lVar28,0,1);
  }
LAB_0030cfc4:
  fVar3 = (moby->pos).x;
  fVar8 = (moby->pos).y;
  fVar9 = (moby->pos).z;
  *(f32 *)((int)puVar14 + 0xdc) = (moby->pos).w;
  *(float *)(puVar14 + 0x1a) = (float)((double)fVar3 - dVar37);
  *(float *)((int)puVar14 + 0xd4) = (float)((double)fVar8 - dVar35);
  *(float *)(puVar14 + 0x1b) = (float)((double)fVar9 - dVar33);
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar11 + 0x60),(Vec4 *)(puVar14 + 0x1a),uVar18 - 0x100,
             lVar19 + 0x40);
  return;
}


