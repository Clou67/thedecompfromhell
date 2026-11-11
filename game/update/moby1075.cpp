// game/update/moby1075.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x1b5258-0x1b67c8
#include "game/update/moby1075.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/camera0.h"
#include "game/update/moby1248.h"
#include "idol/fastfunc.h"

// 0x01b5258 (0x14 bytes)
void M1075_001b5258(void)

{
  DAT_00757ea8 = 0x10000;
  return;
}


// 0x01b5270 (0xd0 bytes)
undefined8 M1075_001b5270(int param_1)

{
  ushort uVar1;
  MobyInstance *pMVar2;
  int iVar3;
  short sVar5;
  ushort *puVar4;
  
  sVar5 = (short)*(undefined4 *)(*(int *)(param_1 + 0x78) + 0xb4);
  if (((-1 < sVar5) && (sVar5 <= g_NumMobyGroups)) &&
     (puVar4 = *(ushort **)((int)&g_MobyGroups + (int)((longlong)sVar5 << 2)),
     puVar4 != (ushort *)0x0)) {
    do {
      pMVar2 = g_MobyInstance + (*puVar4 & 0x7fff);
      if (((pMVar2->state < 0x80) && (pMVar2->oClass == PUFFOID)) &&
         (iVar3 = MB_isSpecificState(pMVar2), iVar3 == 0)) {
        return 0;
      }
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
    } while (-1 < (short)uVar1);
  }
  return 1;
}


// 0x01b5398 (0x478 bytes)
void M1075_001b5398(MobyInstance *param_1)

{
  char cVar1;
  float fVar2;
  void *pvVar3;
  f32 fVar4;
  uint uVar5;
  float fVar6;
  char *pcVar7;
  float *pfVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
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
  undefined8 uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  double dVar40;
  float local_120;
  float local_11c;
  float local_118;
  Vec4 local_110;
  float local_100;
  float local_fc;
  float local_f8;
  undefined8 local_f0;
  
  pvVar3 = param_1->pVar;
  uVar12 = 0;
  do {
    lVar10 = (uVar12 & 0x3ffffff) * 0x40;
    iVar13 = (int)lVar10;
    pcVar7 = (char *)((int)pvVar3 + iVar13 + 0x101);
    cVar1 = *pcVar7;
    if (cVar1 == '\0') {
      AttachManipulator(param_1,(uint32_t)uVar12,(int)pvVar3 + iVar13 + 0x100);
      cVar1 = *pcVar7;
    }
    fVar2 = 12.217304;
    if (param_1->state == '\x01') {
      fVar2 = 2.6179938;
    }
    if (cVar1 != '\0') {
      pfVar8 = (float *)((int)pvVar3 + (int)((uVar12 & 0xffffffff) << 2) + 0xf0);
      dVar14 = (double)FastWrapRot(*pfVar8,g_FrameTime * fVar2);
      *pfVar8 = (float)dVar14;
      FastQuaternionToEuler(lVar10 + ZEXT48(pvVar3) + 0x110 & 0xffffffff,0);
    }
    iVar13 = (uint32_t)uVar12 + 1;
    uVar12 = (ulonglong)iVar13;
  } while (iVar13 < 4);
  fVar2 = (param_1->pos).y - GameCamera.posY;
  fVar6 = (param_1->pos).x - GameCamera.posX;
  if ((SQRT(fVar6 * fVar6 + fVar2 * fVar2) <= 38.0) &&
     (((param_1->state != '\x01' || ((worldUpdateTime & 1) == 0)) &&
      (fVar4 = (param_1->pos).z, uVar5 = (int)fVar4 >> 0x1f,
      (int)((uVar5 >> 1 ^ (uint)fVar4) - uVar5) < 0x43608000)))) {
    iVar13 = 0;
    do {
      GetBonePosition(param_1,iVar13,&local_120);
      iVar11 = 0;
      iVar9 = (int)(ZERO_MASK((1 - (uint)param_1->state))) + 2;
      if (0 < iVar9) {
        uVar39 = 0;
        uVar38 = 0x3fd3333340000000;
        dVar14 = 3.1415927410125732;
        dVar31 = 2.0;
        dVar24 = 5.0;
        dVar25 = 0.4000000059604645;
        dVar26 = 1.570796251296997;
        dVar32 = 3.141592502593994;
        dVar33 = -3.141592502593994;
        dVar34 = -0.16666656732559204;
        dVar35 = 0.008333025500178337;
        dVar36 = -0.0001980741071747616;
        local_f0 = 0x3fbf46bba0000000;
        dVar37 = 2.601886990305502e-06;
        dVar27 = -2.0;
        dVar28 = 6300.0;
        dVar29 = 14700.0;
        uVar30 = 0x406bd00000000000;
        do {
          dVar15 = (double)MB_randRangeSigned(uVar39,uVar38);
          local_110.x = (float)((double)local_120 + dVar15);
          dVar15 = (double)MB_randRangeSigned(uVar39,uVar38);
          local_110.y = (float)((double)local_11c + dVar15);
          dVar15 = (double)MB_randRangeSigned(uVar39,uVar38);
          local_110.z = (float)((double)local_118 + dVar15);
          dVar40 = (double)(param_1->rotation).z;
          dVar15 = (double)MB_randRangeSigned(uVar39,local_f0);
          dVar15 = (double)FastWrapRot((float)dVar40,(float)(dVar15 + dVar14));
          dVar40 = (double)MB_randRangeFloat((float)dVar31,(float)dVar24);
          dVar40 = (double)(float)(dVar40 * (double)g_FrameTime);
          if (param_1->state == '\x01') {
            dVar40 = (double)(float)(dVar40 * dVar25);
          }
          dVar16 = (double)(float)(dVar15 + dVar26);
          local_f8 = 0.0;
          dVar19 = (double)(float)(dVar32 - dVar15);
          if (dVar15 - (double)(float)(dVar32 - dVar15) < 0.0) {
            dVar19 = dVar15;
          }
          dVar20 = (double)(float)(dVar32 - dVar16);
          if (dVar16 - (double)(float)(dVar32 - dVar16) < 0.0) {
            dVar20 = dVar16;
          }
          dVar18 = (double)(float)(dVar33 - dVar15);
          if ((double)(float)(dVar33 - dVar15) - dVar19 < 0.0) {
            dVar18 = dVar19;
          }
          dVar15 = (double)(float)(dVar33 - dVar16);
          if ((double)(float)(dVar33 - dVar16) - dVar20 < 0.0) {
            dVar15 = dVar20;
          }
          dVar19 = (double)(float)(dVar18 * dVar18);
          dVar16 = (double)(float)(dVar15 * dVar15);
          dVar22 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar18));
          dVar20 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar15));
          dVar21 = (double)(float)(dVar19 * dVar22);
          dVar23 = (double)(float)(dVar16 * dVar20);
          local_fc = (float)((double)(float)((double)(float)(dVar19 * dVar21) * dVar37 +
                                            (double)(float)(dVar21 * dVar36 +
                                                           (double)(float)(dVar22 * dVar35 +
                                                                          (double)(float)((double)(
                                                  float)(dVar19 * dVar18) * dVar34 + dVar18)))) *
                            dVar40);
          local_100 = (float)((double)(float)((double)(float)(dVar16 * dVar23) * dVar37 +
                                             (double)(float)(dVar23 * dVar36 +
                                                            (double)(float)(dVar20 * dVar35 +
                                                                           (double)(float)((double)(
                                                  float)(dVar16 * dVar15) * dVar34 + dVar15)))) *
                             dVar40);
          dVar15 = (double)MB_randRangeFloat((float)dVar27,(float)dVar31);
          local_f8 = (float)(dVar15 * (double)g_FrameTime);
          uVar17 = MB_randRangeFloat((float)dVar28,(float)dVar29);
          SpawnPart_34(uVar17,uVar30,&local_110,&local_100);
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar9);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < 4);
  }
  return;
}


// 0x01b5860 (0xf68 bytes)
// inlined: FastAtan2 @0x1b5c38, FastAtan2 @0x1b61e4
/* Moby 1075 */

void UpdateMoby_1075(MobyInstance *moby)

{
  u8 uVar1;
  f32 fVar2;
  f32 fVar3;
  float fVar4;
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
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  ushort uVar24;
  void *pvVar25;
  int *piVar26;
  Spline *pSVar27;
  uint uVar28;
  ulonglong *puVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  int iVar33;
  ulonglong uVar34;
  longlong lVar35;
  ulonglong uVar36;
  longlong lVar37;
  longlong lVar38;
  int iVar39;
  MobyInstance *pMVar40;
  longlong lVar41;
  float *pfVar42;
  Spline *pSVar44;
  longlong lVar43;
  ulonglong unaff_r27;
  Spline *pSVar45;
  ulonglong unaff_r28;
  void *pvVar46;
  ulonglong unaff_r29;
  short sVar48;
  ushort *puVar47;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  ulonglong in_f17;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar54;
  ulonglong in_f28;
  undefined8 uVar55;
  double dVar56;
  ulonglong in_f29;
  double dVar57;
  ulonglong in_f30;
  double dVar58;
  ulonglong in_f31;
  double dVar59;
  
  lVar35 = (longlong)(int)moby;
  uVar34 = ZEXT48(&stack0x00000000);
  lVar38 = uVar34 - 0x1e0;
  puVar29 = (ulonglong *)lVar38;
  *puVar29 = uVar34;
  puVar29[0x3e] = in_LR;
  puVar29[0x2d] = in_f17;
  puVar29[0x2e] = in_f18;
  puVar29[0x2f] = in_f19;
  puVar29[0x30] = in_f20;
  puVar29[0x31] = in_f21;
  puVar29[0x32] = in_f22;
  puVar29[0x33] = in_f23;
  puVar29[0x34] = in_f24;
  puVar29[0x35] = in_f25;
  puVar29[0x36] = in_f26;
  puVar29[0x37] = in_f27;
  puVar29[0x38] = in_f28;
  puVar29[0x39] = in_f29;
  puVar29[0x3a] = in_f30;
  puVar29[0x3b] = in_f31;
  puVar29[0x2b] = unaff_r30;
  pvVar25 = moby->pVar;
  puVar29[0x2c] = unaff_r31;
  dVar59 = (double)(moby->pos).x;
  dVar58 = (double)(moby->pos).y;
  dVar57 = (double)(moby->pos).z;
  fVar2 = (moby->rotation).y;
  *(f32 *)(puVar29 + 0xe) = (moby->rotation).x;
  fVar3 = (moby->rotation).z;
  *(f32 *)((int)puVar29 + 0x74) = fVar2;
  fVar2 = (moby->rotation).w;
  uVar1 = moby->state;
  *(f32 *)(puVar29 + 0xf) = fVar3;
  puVar29[0x2a] = unaff_r29;
  puVar29[0x29] = unaff_r28;
  puVar29[0x28] = unaff_r27;
  *(f32 *)((int)puVar29 + 0x7c) = fVar2;
  if (uVar1 != '\0') {
    (moby->pos).z = *(f32 *)((int)pvVar25 + 0xe4);
  }
  M1075_001b5398(lVar35);
  uVar1 = moby->state;
  if (uVar1 == '\x05') {
    fVar4 = *(float *)(*(int *)((int)pvVar25 + 0xc4) + *(int *)((int)pvVar25 + 0xd4) * 0x10 + 0x18);
    if (*(int *)((int)pvVar25 + 0xb0) != 0) {
      fVar2 = (moby->pos).z;
      uVar28 = (int)fVar2 >> 0x1f;
      if ((int)(((uint)((int)g_heroPosition.z >> 0x1f) >> 1 ^ (uint)g_heroPosition.z) -
               ((int)g_heroPosition.z >> 0x1f)) < (int)((uVar28 >> 1 ^ (uint)fVar2) - uVar28)) {
        OrganicDelt
                  (fVar4 + 1.0,DAT_0071f418,DAT_0071f418,g_FrameTime,&(moby->pos).z,
                   0x1b5810,(float *)((int)pvVar25 + 0xd0));
      }
      else {
        OrganicDelt
                  (fVar4 + 8.0,DAT_0071f418,DAT_0071f418,g_FrameTime,&(moby->pos).z,
                   0x1b5810,(float *)((int)pvVar25 + 0xd0));
      }
    }
  }
  else if (uVar1 == '\x04') {
    dVar50 = (double)*(float *)(*(int *)((int)pvVar25 + 0xc4) + *(int *)((int)pvVar25 + 0xd4) * 0x10
                               + 0x18);
    OrganicDelt
              ((float)(dVar50 + 6.0),DAT_0071f418,DAT_0071f418,g_FrameTime,&(moby->pos).z,
               0x720000,(float *)((int)pvVar25 + 0xd0));
    if ((float)(dVar50 + 5.900000095367432) <= (moby->pos).z) {
      moby->state = '\x05';
    }
  }
  else if (uVar1 == '\x03') {
    sVar48 = (short)*(undefined4 *)((int)moby->pVar + 0xb4);
    if (((-1 < sVar48) && (sVar48 <= g_NumMobyGroups)) &&
       (puVar47 = *(ushort **)((int)&g_MobyGroups + (int)((longlong)sVar48 << 2)),
       puVar47 != (ushort *)0x0)) {
      do {
        pMVar40 = g_MobyInstance + (*puVar47 & 0x7fff);
        if (((pMVar40->state < 0x80) && (pMVar40->oClass == PUFFOID)) &&
           (iVar39 = MB_isSpecificState(pMVar40), iVar39 == 0))
        goto LAB_001b6660;
        uVar24 = *puVar47;
        puVar47 = puVar47 + 1;
      } while (-1 < (short)uVar24);
    }
    if (*(int *)((int)pvVar25 + 0xb0) == 0) {
      moby->state = '\x05';
    }
    else {
      *(undefined4 *)((int)pvVar25 + 0xd0) = 0;
      moby->state = '\x04';
    }
  }
  else if (uVar1 == '\x02') {
    iVar39 = *(int *)((int)pvVar25 + 0xc4) + *(int *)((int)pvVar25 + 0xd4) * 0x10;
    dVar56 = (double)*(float *)(iVar39 + 0x10);
    dVar54 = (double)*(float *)(iVar39 + 0x14);
    dVar51 = (double)*(float *)(iVar39 + 0x18);
    dVar50 = (double)*(float *)(iVar39 + 0x1c);
    if (g_standingOnMoby == moby) {
      iVar39 = IsMobyPlayingSound(moby,*(int *)((int)pvVar25 + 0xcc));
      if (iVar39 == 0) {
        iVar39 = PlayMobySound(1,4,moby);
        *(int *)((int)pvVar25 + 0xcc) = iVar39;
      }
      iVar39 = IsMobyPlayingSound(moby,*(int *)((int)pvVar25 + 200));
      if (iVar39 != 0) {
        iVar39 = *(int *)((int)pvVar25 + 200);
        if (((iVar39 != -1) && (g_SoundChannels[iVar39].pMoby == moby)) &&
           (g_SoundChannels[iVar39].state != '\0')) {
          sound_Kill(iVar39);
        }
        *(undefined4 *)((int)pvVar25 + 200) = 0xffffffff;
      }
      Delt(DAT_00757ecc * g_FrameTime,DAT_0071f418 * 6.0,
                     (float *)((int)pvVar25 + 0xd0));
    }
    else {
      iVar39 = IsMobyPlayingSound(moby,*(int *)((int)pvVar25 + 200));
      if (iVar39 == 0) {
        iVar39 = PlayMobySound(0,4,moby);
        *(int *)((int)pvVar25 + 200) = iVar39;
      }
      iVar39 = IsMobyPlayingSound(moby,*(int *)((int)pvVar25 + 0xcc));
      if (iVar39 != 0) {
        iVar39 = *(int *)((int)pvVar25 + 0xcc);
        if (((iVar39 != -1) && (g_SoundChannels[iVar39].pMoby == moby)) &&
           (g_SoundChannels[iVar39].state != '\0')) {
          sound_Kill(iVar39);
        }
        *(undefined4 *)((int)pvVar25 + 0xcc) = 0xffffffff;
      }
      Delt(0.0,DAT_0071f418 * 6.0,(float *)((int)pvVar25 + 0xd0));
    }
    fVar4 = (moby->pos).x;
    fVar5 = (moby->pos).y;
    fVar6 = (moby->pos).z;
    *(float *)((int)puVar29 + 0x9c) = (float)dVar50;
    *(float *)(puVar29 + 0x12) = (float)(dVar56 - (double)fVar4);
    *(float *)((int)puVar29 + 0x94) = (float)(dVar54 - (double)fVar5);
    *(float *)(puVar29 + 0x13) = (float)(dVar51 - (double)fVar6);
    ClampVec3Magnitude((double)*(float *)((int)pvVar25 + 0xd0),(Vec4 *)(puVar29 + 0x12));
    fVar4 = *(float *)(puVar29 + 0x12);
    fVar6 = (moby->pos).x + fVar4;
    fVar7 = (moby->pos).z + *(float *)(puVar29 + 0x13);
    fVar5 = *(float *)((int)puVar29 + 0x94);
    fVar8 = (moby->pos).y + fVar5;
    (moby->pos).x = fVar6;
    (moby->pos).z = fVar7;
    piVar26 = *(int **)((int)pvVar25 + 0xc4);
    (moby->pos).y = fVar8;
    if (*(int *)((int)pvVar25 + 0xd4) < *piVar26 + -1) {
      fVar4 = (float)((double)fVar8 - dVar54);
      fVar5 = (float)((double)fVar6 - dVar56);
      fVar6 = (float)((double)fVar7 - dVar51);
      if ((SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) <
           DAT_00757ecc * g_FrameTime) &&
         (iVar39 = *(int *)((int)pvVar25 + 0xd4) + 1, *(int *)((int)pvVar25 + 0xd4) = iVar39,
         piVar26[iVar39 * 4 + 7] == 0x42140000)) {
        *(undefined4 *)((int)pvVar25 + 0xc0) = 1;
      }
    }
    else if (SQRT(fVar4 * fVar4 + fVar5 * fVar5) < 0.001) {
      iVar39 = IsMobyPlayingSound(moby,*(int *)((int)pvVar25 + 0xcc));
      if (iVar39 != 0) {
        iVar39 = *(int *)((int)pvVar25 + 0xcc);
        if (((iVar39 != -1) && (g_SoundChannels[iVar39].pMoby == moby)) &&
           (g_SoundChannels[iVar39].state != '\0')) {
          sound_Kill(iVar39);
        }
        *(undefined4 *)((int)pvVar25 + 0xcc) = 0xffffffff;
      }
      iVar39 = IsMobyPlayingSound(moby,*(int *)((int)pvVar25 + 200));
      if (iVar39 != 0) {
        iVar39 = *(int *)((int)pvVar25 + 200);
        if (((iVar39 != -1) && (g_SoundChannels[iVar39].pMoby == moby)) &&
           (g_SoundChannels[iVar39].state != '\0')) {
          sound_Kill(iVar39);
        }
        *(undefined4 *)((int)pvVar25 + 200) = 0xffffffff;
      }
      moby->state = '\x03';
    }
    fVar4 = (float)(dVar56 - (double)(moby->pos).x);
    fVar5 = (float)(dVar54 - (double)(moby->pos).y);
    fVar6 = ABS(fVar4);
    fVar7 = ABS(fVar5);
    *(float *)(puVar29 + 0x1c) = fVar4;
    *(float *)((int)puVar29 + 0xe4) = fVar5;
    *(float *)(puVar29 + 0x1d) = fVar6 - fVar7;
    fVar4 = 0.0;
    uVar36 = (ulonglong)(*(uint *)(puVar29 + 0x1c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar29 + 0x1d) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar29 + 0xe4) >> 0x1d) & 4;
    fVar5 = ABS(*(float *)(puVar29 + 0x1c));
    if (*(float *)(puVar29 + 0x1d) - 0.0 < 0.0) {
      fVar5 = fVar7;
    }
    fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar36 << 2));
    fVar7 = *(float *)(((uint)(uVar36 << 2) | 0x735900) + 4);
    fVar9 = ABS(*(float *)((int)puVar29 + 0xe4));
    if (*(float *)(puVar29 + 0x1d) - 0.0 < 0.0) {
      fVar9 = fVar6;
    }
    if (0.0 < fVar5) {
      lVar37 = uVar34 - 0x1d0;
      lVar43 = uVar34 - 0xd8;
      lVar41 = uVar34 - 0xe8;
      lVar49 = 2;
      fVar5 = (fVar9 - fVar5) / (fVar9 + fVar5);
      fVar6 = fVar5 * fVar5;
      *(float *)((int)puVar29 + 0x104) = fVar5;
      *(float *)((int)puVar29 + 0xfc) = fVar5;
      *(float *)(puVar29 + 0x20) = fVar5;
      *(float *)(puVar29 + 0x1f) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)((int)puVar29 + 0xfc) = *(float *)((int)puVar29 + 0xfc) * fVar6;
      *(float *)(puVar29 + 0x20) = *(float *)(puVar29 + 0x20) * fVar5;
      *(float *)((int)puVar29 + 0x104) = *(float *)((int)puVar29 + 0x104) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar37 + 0xf8) = *(float *)((int)lVar37 + 0xe8) * fVar5 * fVar5;
        iVar39 = (int)lVar41;
        lVar41 = lVar41 + 8;
        lVar37 = lVar37 + 8;
        *(float *)((int)lVar43 + 4) = *(float *)(iVar39 + 4) * fVar5 * fVar5;
        lVar43 = lVar43 + 8;
        lVar49 = lVar49 + -1;
      } while (lVar49 != 0);
      lVar49 = 4;
      lVar43 = uVar34 - 0xe8;
      pfVar42 = (float *)&DAT_007358e0;
      lVar37 = lVar38;
      lVar41 = lVar43;
      do {
        fVar5 = *pfVar42;
        fVar6 = pfVar42[1];
        pfVar42 = pfVar42 + 2;
        *(float *)((int)lVar37 + 0xf8) = *(float *)((int)lVar37 + 0xf8) * fVar5;
        lVar37 = lVar37 + 8;
        *(float *)((int)lVar41 + 4) = *(float *)((int)lVar41 + 4) * fVar6;
        lVar41 = lVar41 + 8;
        lVar49 = lVar49 + -1;
      } while (lVar49 != 0);
      lVar37 = 2;
      do {
        iVar39 = (int)lVar38;
        lVar38 = lVar38 + 0x10;
        iVar33 = (int)lVar43;
        lVar43 = lVar43 + 0x10;
        fVar4 = fVar4 + *(float *)(iVar39 + 0xf8) + *(float *)(iVar33 + 4) + *(float *)(iVar33 + 8)
                + *(float *)(iVar33 + 0xc);
        lVar37 = lVar37 + -1;
      } while (lVar37 != 0);
      fVar4 = (fVar4 + 0.7853982) * fVar8 + fVar7;
    }
    fVar5 = DAT_00757ed0 * 0.017453292 * DAT_0071f418;
    OrganicDeltAng
              (fVar4,fVar5,fVar5,DAT_00757ed4 * 0.017453292 * g_FrameTime,
               &(moby->rotation).z,0x750000,(float *)((int)pvVar25 + 0xd8));
    if (*(int *)((int)pvVar25 + 0xc0) != 0) {
      uVar55 = 0x3f689374c0000000;
      Cam0_SetCamDist((double)DAT_00757ee0,0x3f689374c0000000,&DAT_001b5810,0);
      Cam0_SetCamHeight((double)DAT_00757ee4,uVar55);
    }
    iVar39 = 0;
    pSVar27 = Splines[*(int *)((int)pvVar25 + 0xa8)];
    pSVar45 = Splines[*(int *)((int)pvVar25 + 0xac)];
    pSVar44 = pSVar27;
    if (0 < pSVar27->cnt) {
      do {
        fVar4 = pSVar45->points[0].y;
        fVar5 = pSVar45->points[0].x;
        fVar6 = (moby->transform).v1.y;
        fVar7 = pSVar45->points[0].z;
        fVar8 = (moby->transform).v0.y;
        fVar9 = (moby->transform).v1.z;
        iVar39 = iVar39 + 1;
        fVar10 = (moby->transform).v2.y;
        fVar11 = (moby->transform).v1.w;
        fVar12 = (moby->transform).v0.z;
        fVar13 = (moby->transform).v0.w;
        fVar14 = (moby->transform).v2.z;
        fVar15 = (moby->transform).v2.w;
        fVar16 = pSVar45->points[0].w;
        pSVar45 = (Spline *)pSVar45->points;
        pSVar44->points[0].x =
             (moby->transform).v2.x * fVar7 +
             (moby->transform).v0.x * fVar5 + (moby->transform).v1.x * fVar4 + (moby->pos).x;
        pSVar44->points[0].y = fVar10 * fVar7 + fVar8 * fVar5 + fVar6 * fVar4 + (moby->pos).y;
        fVar6 = (moby->pos).z;
        pSVar44->points[0].w = fVar15 * fVar7 + fVar13 * fVar5 + fVar11 * fVar4 + fVar16;
        pSVar44->points[0].z = fVar14 * fVar7 + fVar12 * fVar5 + fVar9 * fVar4 + fVar6;
        pSVar44 = (Spline *)pSVar44->points;
      } while (iVar39 < pSVar27->cnt);
    }
  }
  else if (uVar1 == '\x01') {
    if (*(int *)((int)pvVar25 + 0xb8) != 0) {
      pSVar27 = Splines[*(int *)((int)pvVar25 + 0xa0)];
      *(Spline **)((int)pvVar25 + 0xc4) = pSVar27;
      iVar39 = pSVar27->cnt;
      fVar4 = pSVar27->points[iVar39 + -2].x;
      (moby->pos).x = fVar4;
      fVar5 = pSVar27->points[iVar39 + -2].y;
      (moby->pos).y = fVar5;
      (moby->pos).z = pSVar27->points[iVar39 + -2].z;
      piVar26 = *(int **)((int)pvVar25 + 0xc4);
      (moby->pos).w = pSVar27->points[iVar39 + -2].w;
      fVar4 = (float)piVar26[*piVar26 * 4] - fVar4;
      fVar5 = (float)piVar26[*piVar26 * 4 + 1] - fVar5;
      fVar6 = ABS(fVar4);
      *(float *)((int)puVar29 + 0xec) = fVar4;
      fVar7 = ABS(fVar5);
      *(float *)(puVar29 + 0x1e) = fVar5;
      *(float *)((int)puVar29 + 0xf4) = fVar6 - fVar7;
      fVar4 = 0.0;
      uVar36 = (ulonglong)(*(uint *)((int)puVar29 + 0xec) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar29 + 0xf4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar29 + 0x1e) >> 0x1d) & 4;
      fVar5 = ABS(*(float *)((int)puVar29 + 0xec));
      if (*(float *)((int)puVar29 + 0xf4) - 0.0 < 0.0) {
        fVar5 = fVar7;
      }
      fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar36 << 2));
      fVar7 = *(float *)(((uint)(uVar36 << 2) | 0x735900) + 4);
      fVar9 = ABS(*(float *)(puVar29 + 0x1e));
      if (*(float *)((int)puVar29 + 0xf4) - 0.0 < 0.0) {
        fVar9 = fVar6;
      }
      if (0.0 < fVar5) {
        lVar37 = uVar34 - 0x1d0;
        lVar41 = uVar34 - 200;
        lVar43 = uVar34 - 0xb8;
        lVar49 = 2;
        fVar5 = (fVar9 - fVar5) / (fVar9 + fVar5);
        fVar6 = fVar5 * fVar5;
        *(float *)((int)puVar29 + 0x124) = fVar5;
        *(float *)((int)puVar29 + 0x11c) = fVar5;
        *(float *)(puVar29 + 0x24) = fVar5;
        *(float *)(puVar29 + 0x23) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)((int)puVar29 + 0x11c) = *(float *)((int)puVar29 + 0x11c) * fVar6;
        *(float *)(puVar29 + 0x24) = *(float *)(puVar29 + 0x24) * fVar5;
        *(float *)((int)puVar29 + 0x124) = *(float *)((int)puVar29 + 0x124) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar37 + 0x118) = *(float *)((int)lVar37 + 0x108) * fVar5 * fVar5;
          iVar39 = (int)lVar41;
          lVar37 = lVar37 + 8;
          lVar41 = lVar41 + 8;
          *(float *)((int)lVar43 + 4) = *(float *)(iVar39 + 4) * fVar5 * fVar5;
          lVar43 = lVar43 + 8;
          lVar49 = lVar49 + -1;
        } while (lVar49 != 0);
        lVar49 = 4;
        lVar43 = uVar34 - 200;
        pfVar42 = (float *)&DAT_007358e0;
        lVar37 = lVar38;
        lVar41 = lVar43;
        do {
          fVar5 = *pfVar42;
          fVar6 = pfVar42[1];
          pfVar42 = pfVar42 + 2;
          *(float *)((int)lVar37 + 0x118) = *(float *)((int)lVar37 + 0x118) * fVar5;
          lVar37 = lVar37 + 8;
          *(float *)((int)lVar41 + 4) = *(float *)((int)lVar41 + 4) * fVar6;
          lVar41 = lVar41 + 8;
          lVar49 = lVar49 + -1;
        } while (lVar49 != 0);
        lVar37 = 2;
        do {
          iVar39 = (int)lVar38;
          iVar33 = (int)lVar43;
          lVar38 = lVar38 + 0x10;
          lVar43 = lVar43 + 0x10;
          fVar4 = fVar4 + *(float *)(iVar39 + 0x118) + *(float *)(iVar33 + 4) +
                  *(float *)(iVar33 + 8) + *(float *)(iVar33 + 0xc);
          lVar37 = lVar37 + -1;
        } while (lVar37 != 0);
        fVar4 = (fVar4 + 0.7853982) * fVar8 + fVar7;
      }
      (moby->rotation).z = fVar4;
      moby->state = '\x05';
    }
  }
  else if (uVar1 == '\0') {
    moby->drawDistance = 0xff;
    if (moby->animationId != '\x01') {
      MB_SetAnimation(lVar35,1,0,1);
    }
    pSVar27 = Splines[*(int *)((int)pvVar25 + 0xa8)];
    pSVar45 = Splines[*(int *)((int)pvVar25 + 0xac)];
    FastNormalizeRMtx4(uVar34 - 0x140,lVar35 + 0xc0);
    iVar39 = 0;
    if (0 < pSVar27->cnt) {
      fVar4 = (moby->pos).x;
      fVar5 = (moby->pos).y;
      fVar6 = (moby->pos).z;
      fVar7 = *(float *)(puVar29 + 0x14);
      fVar8 = *(float *)(puVar29 + 0x16);
      fVar9 = *(float *)(puVar29 + 0x18);
      fVar10 = *(float *)(puVar29 + 0x1a);
      fVar11 = *(float *)((int)puVar29 + 0xa4);
      fVar12 = *(float *)((int)puVar29 + 0xb4);
      fVar13 = *(float *)((int)puVar29 + 0xc4);
      fVar14 = *(float *)((int)puVar29 + 0xd4);
      fVar15 = *(float *)(puVar29 + 0x15);
      fVar16 = *(float *)(puVar29 + 0x17);
      fVar17 = *(float *)(puVar29 + 0x19);
      fVar18 = *(float *)(puVar29 + 0x1b);
      fVar19 = *(float *)((int)puVar29 + 0xac);
      fVar20 = *(float *)((int)puVar29 + 0xbc);
      fVar21 = *(float *)((int)puVar29 + 0xcc);
      fVar22 = *(float *)((int)puVar29 + 0xdc);
      pSVar44 = pSVar27;
      do {
        fVar31 = pSVar44->points[0].y - fVar5;
        fVar30 = pSVar44->points[0].x - fVar4;
        fVar23 = pSVar44->points[0].w;
        fVar32 = pSVar44->points[0].z - fVar6;
        iVar39 = iVar39 + 1;
        pSVar44 = (Spline *)pSVar44->points;
        pSVar45->points[0].x = fVar23 * fVar10 + fVar32 * fVar9 + fVar30 * fVar7 + fVar31 * fVar8;
        pSVar45->points[0].y = fVar23 * fVar14 + fVar32 * fVar13 + fVar30 * fVar11 + fVar31 * fVar12
        ;
        pSVar45->points[0].z = fVar23 * fVar18 + fVar32 * fVar17 + fVar30 * fVar15 + fVar31 * fVar16
        ;
        pSVar45->points[0].w = fVar23 * fVar22 + fVar32 * fVar21 + fVar30 * fVar19 + fVar31 * fVar20
        ;
        pSVar45 = (Spline *)pSVar45->points;
      } while (iVar39 < pSVar27->cnt);
    }
    pSVar27 = Splines[*(int *)((int)pvVar25 + 0xa0)];
    iVar39 = 0;
    *(Spline **)((int)pvVar25 + 0xc4) = pSVar27;
    (moby->pos).x = pSVar27->points[0].x;
    (moby->pos).y = pSVar27->points[0].y;
    (moby->pos).z = pSVar27->points[0].z;
    fVar4 = pSVar27->points[0].w;
    *(undefined4 *)((int)pvVar25 + 0xd4) = 1;
    (moby->pos).w = fVar4;
    moby->state = '\x01';
    pvVar46 = pvVar25;
    do {
      dVar50 = (double)MB_randRot();
      iVar39 = iVar39 + 1;
      *(float *)((int)pvVar46 + 0xf0) = (float)dVar50;
      pvVar46 = (void *)((int)pvVar46 + 4);
    } while (iVar39 < 4);
    *(undefined4 *)((int)pvVar25 + 200) = 0xffffffff;
    *(undefined4 *)((int)pvVar25 + 0xcc) = 0xffffffff;
    *(uint *)((int)pvVar25 + 0x9c) = *(uint *)((int)pvVar25 + 0x9c) | 1;
  }
LAB_001b6660:
  *(f32 *)((int)pvVar25 + 0xe4) = (moby->pos).z;
  dVar56 = (double)(g_FrameTime * 0.43633232);
  dVar54 = (double)(g_FrameTime * 0.61086524);
  dVar51 = (double)FastWrapRot
                             (*(float *)((int)pvVar25 + 0xe0),g_FrameTime * 1.5707964);
  *(float *)((int)pvVar25 + 0xe0) = (float)dVar51;
  dVar50 = (double)(float)(3.141592502593994 - dVar51);
  if (dVar51 - (double)(float)(3.141592502593994 - dVar51) < 0.0) {
    dVar50 = dVar51;
  }
  dVar52 = (double)(float)(-3.141592502593994 - dVar51);
  if ((double)(float)(-3.141592502593994 - dVar51) - dVar50 < 0.0) {
    dVar52 = dVar50;
  }
  dVar51 = (double)(float)(dVar52 * dVar52);
  dVar53 = (double)(float)(dVar51 * (double)(float)(dVar51 * dVar52));
  dVar50 = (double)(float)(dVar51 * dVar53);
  (moby->pos).z =
       ((float)(dVar51 * dVar50) * 2.601887e-06 +
       (float)(dVar50 * -0.0001980741071747616 +
              (double)(float)(dVar53 * 0.008333025500178337 +
                             (double)(float)((double)(float)(dVar51 * dVar52) * -0.16666656732559204
                                            + dVar52)))) * 0.13 + (moby->pos).z;
  MB_SwingMotion
            (0x3fa57254c0000000,dVar56,dVar54,lVar35,(int)pvVar25 + 0xe8,(int)pvVar25 + 0xec);
  fVar4 = (moby->pos).x;
  fVar5 = (moby->pos).y;
  fVar6 = (moby->pos).z;
  *(f32 *)((int)puVar29 + 0x8c) = (moby->pos).w;
  *(float *)(puVar29 + 0x10) = (float)((double)fVar4 - dVar59);
  *(float *)((int)puVar29 + 0x84) = (float)((double)fVar5 - dVar58);
  *(float *)(puVar29 + 0x11) = (float)((double)fVar6 - dVar57);
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar25 + 0x60),(Vec4 *)(puVar29 + 0x10),uVar34 - 0x170,
             lVar35 + 0x40);
  return;
}


