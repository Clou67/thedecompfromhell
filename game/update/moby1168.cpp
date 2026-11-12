// game/update/moby1168.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x1e99b4-0x1ea368
#include <stdio.h>
#include "game/update/moby1168.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x01e99b4 (0x60 bytes)
void M1168_001e99b4(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
  if (puVar2 != (ushort *)0x0) {
    do {
      if (g_MobyInstance[*puVar2 & 0x7fff].state == '\x01') {
        g_MobyInstance[*puVar2 & 0x7fff].state = '\x02';
      }
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}


// 0x01e9a20 (0x190 bytes)
void M1168_001e9a20(MobyInstance *param_1)

{
  MobyModeBit MVar1;
  void *pvVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  double dVar7;
  int local_20;
  float local_1c;
  
  pvVar2 = param_1->pVar;
  uVar6 = ZEXT48(pvVar2);
  param_1->scale = param_1->pClass->gScale * DAT_00765b30;
  dVar7 = 0.0;
  local_1c = 0.0;
  uVar4 = MB_damage(param_1,0x330000,0);
  iVar5 = MB_HandleDamage(param_1,uVar4,uVar6 + 0x20,0,&local_20,&local_1c,0,4);
  if ((local_20 != 1) && (param_1->state != '\x04')) {
    MVar1 = param_1->modeBits;
    fVar3 = *(float *)((int)pvVar2 + 0x20) - local_1c;
    *(float *)((int)pvVar2 + 0x20) = fVar3;
    if ((double)fVar3 <= dVar7) {
      iVar5 = 1;
    }
    if (param_1->state == '\x01') {
      param_1->state = '\x02';
    }
    if (iVar5 < 3) {
      if ((-1 < iVar5) && (0 < iVar5)) {
        param_1->state = '\x04';
        param_1->modeBits =
             MVar1 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(undefined1 *)((int)pvVar2 + 0x67) = 0xf0;
        MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
      }
    }
    else if (iVar5 < 0xb) {
      if (iVar5 < 9) {
        *(undefined1 *)((int)pvVar2 + 0x67) = 200;
      }
      else {
        *(undefined1 *)((int)pvVar2 + 0x67) = 100;
      }
    }
    MB_UpdateLightsTransition(param_1,uVar6 + 0x60);
  }
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar6 + 0x60);
  return;
}


// 0x01e9be8 (0x780 bytes)
// strings: 00654990: 'AlarmBot with no path. UID: %d\n' | 006549b0: 'AlarmBot with a path that has no points. UID: %d\n'

/* Moby 1168 */

void UpdateMoby_1168(MobyInstance *moby)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  u8 uVar7;
  float fVar8;
  f32 fVar9;
  void *pvVar10;
  Spline *pSVar11;
  Vec4 *pVVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
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
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  float local_90 [4];
  
  lVar13 = (longlong)(int)moby;
  pvVar10 = moby->pVar;
  M1168_001e9a20();
  uVar7 = moby->state;
  if (uVar7 == '\x04') {
    MB_genericExplosion
              (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
               0x402e000000000000,lVar13,(int)pvVar10 + 0x40,lVar13 + 0x10,1,0xffffffffffffffff,5,2,
               4);
    DeleteMoby(moby);
  }
  else if (uVar7 != '\x03') {
    if (uVar7 == '\x02') {
      if (*(int *)((int)pvVar10 + 0x78) != -1) {
        M1168_001e99b4(*(int *)((int)pvVar10 + 0x78));
      }
      moby->state = '\x03';
    }
    else if (uVar7 == '\x01') {
      dVar31 = 0.0;
      local_90[0] = 0.0;
      pSVar11 = Splines[*(int *)((int)pvVar10 + 0x70)];
      pVVar12 = pSVar11->points + (pSVar11->cnt - 1);
      fVar8 = pSVar11->points[0].y - pVVar12->y;
      fVar2 = pSVar11->points[0].x - pVVar12->x;
      fVar3 = pSVar11->points[0].z - pVVar12->z;
      dVar32 = 3.0;
      bVar1 = 3.0 <= SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar8 * fVar8);
      iVar14 = *(int *)((int)pvVar10 + 0x7c);
      iVar15 = (int)((-(longlong)*(int *)((int)pvVar10 + 0xa4) >> 0x3f &
                     (ulonglong)(uint)pSVar11->cnt - 1) << 4);
      dVar18 = (double)*(float *)((int)pvVar10 + 0x84);
      dVar20 = (double)*(float *)((int)pvVar10 + 0x80);
      dVar16 = (double)*(float *)((int)pvVar10 + 0x88);
      fVar8 = (float)((double)pSVar11->points[iVar14].y - dVar18);
      fVar2 = (float)((double)pSVar11->points[iVar14].x - dVar20);
      fVar3 = (float)((double)*(float *)((int)&pSVar11->points[0].y + iVar15) - dVar18);
      fVar4 = (float)((double)*(float *)((int)&pSVar11->points[0].x + iVar15) - dVar20);
      fVar5 = (float)((double)pSVar11->points[iVar14].z - dVar16);
      fVar6 = (float)((double)*(float *)((int)&pSVar11->points[0].z + iVar15) - dVar16);
      dVar28 = (double)SQRT(fVar5 * fVar5 + fVar2 * fVar2 + fVar8 * fVar8);
      if (bVar1) {
        OrganicDelt
                  (SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar3 * fVar3),DAT_00765b34 * g_FrameTimeSq,
                   DAT_00765b34 * g_FrameTimeSq,*(float *)((int)pvVar10 + 0x74),local_90,0x760000,
                   (float *)((int)pvVar10 + 0xa0));
        iVar14 = *(int *)((int)pvVar10 + 0x7c);
        fVar8 = *(float *)((int)pvVar10 + 0xa0);
        dVar20 = (double)*(float *)((int)pvVar10 + 0x80);
        dVar18 = (double)*(float *)((int)pvVar10 + 0x84);
        dVar16 = (double)*(float *)((int)pvVar10 + 0x88);
      }
      else {
        fVar8 = *(float *)((int)pvVar10 + 0x74);
        *(float *)((int)pvVar10 + 0xa0) = fVar8;
      }
      fVar3 = (float)((double)pSVar11->points[iVar14].y - dVar18);
      fVar4 = (float)((double)pSVar11->points[iVar14].x - dVar20);
      fVar5 = (float)((double)pSVar11->points[iVar14].z - dVar16);
      dVar23 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      fVar2 = (float)((double)fVar8 / dVar23);
      dVar29 = dVar31;
      if (dVar31 - dVar23 < 0.0) {
        dVar29 = (double)(fVar2 * fVar5);
      }
      dVar17 = dVar31;
      if (dVar31 - dVar23 < 0.0) {
        dVar17 = (double)(fVar2 * fVar3);
      }
      dVar19 = dVar31;
      if (dVar31 - dVar23 < 0.0) {
        dVar19 = (double)(fVar2 * fVar4);
      }
      if (dVar23 - dVar31 < 0.0) {
        dVar29 = (double)(fVar2 * fVar5);
      }
      if (dVar23 - dVar31 < 0.0) {
        dVar17 = (double)(fVar2 * fVar3);
      }
      if (dVar23 - dVar31 < 0.0) {
        dVar19 = (double)(fVar2 * fVar4);
      }
      *(float *)((int)pvVar10 + 0x88) = (float)(dVar16 + dVar29);
      *(float *)((int)pvVar10 + 0x84) = (float)(dVar18 + dVar17);
      *(float *)((int)pvVar10 + 0x80) = (float)(dVar20 + dVar19);
      if (dVar28 < (double)fVar8) {
        iVar15 = *(int *)((int)pvVar10 + 0xa4);
        if ((iVar15 < 1) || (iVar14 != pSVar11->cnt + -1)) {
          if (iVar15 < 0 && iVar14 == 0) {
            iVar15 = 1;
            *(undefined4 *)((int)pvVar10 + 0xa4) = 1;
          }
        }
        else if (bVar1) {
          iVar15 = -1;
          *(undefined4 *)((int)pvVar10 + 0xa4) = 0xffffffff;
        }
        else {
          iVar14 = 0;
        }
        *(int *)((int)pvVar10 + 0x7c) = iVar14 + iVar15;
      }
      fVar8 = *(float *)((int)pvVar10 + 0x90);
      dVar23 = 3.141592502593994;
      dVar29 = -3.141592502593994;
      dVar31 = -0.16666656732559204;
      dVar28 = 0.008333025500178337;
      dVar20 = -0.0001980741071747616;
      dVar18 = 0.01745329238474369;
      dVar16 = 2.601886990305502e-06;
      fVar2 = 3.1415925 - fVar8;
      if (fVar8 - (3.1415925 - fVar8) < 0.0) {
        fVar2 = fVar8;
      }
      fVar3 = -3.1415925 - fVar8;
      if ((-3.1415925 - fVar8) - fVar2 < 0.0) {
        fVar3 = fVar2;
      }
      dVar27 = (double)DAT_00765b48;
      fVar5 = fVar3 * fVar3;
      fVar2 = fVar5 * fVar5 * fVar3;
      fVar4 = fVar5 * fVar2;
      dVar26 = (double)(fVar5 * fVar4 * 2.601887e-06 +
                       fVar4 * -0.0001980741 +
                       fVar2 * 0.0083330255 + fVar5 * fVar3 * -0.16666657 + fVar3);
      dVar17 = (double)FastWrapRot
                                 (fVar8,DAT_00765b3c * 0.017453292 * g_FrameTime);
      fVar8 = g_FrameTime;
      dVar19 = (double)*(float *)((int)pvVar10 + 0x94);
      dVar22 = (double)DAT_00765b40;
      dVar25 = (double)DAT_00765b4c;
      *(float *)((int)pvVar10 + 0x90) = (float)dVar17;
      dVar17 = (double)(float)(dVar23 - dVar19);
      if (dVar19 - (double)(float)(dVar23 - dVar19) < 0.0) {
        dVar17 = dVar19;
      }
      dVar24 = (double)(float)(dVar29 - dVar19);
      if ((double)(float)(dVar29 - dVar19) - dVar17 < 0.0) {
        dVar24 = dVar17;
      }
      dVar19 = (double)(float)(dVar24 * dVar24);
      dVar21 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar24));
      dVar17 = (double)(float)(dVar19 * dVar21);
      dVar24 = (double)(float)((double)(float)(dVar19 * dVar17) * dVar16 +
                              (double)(float)(dVar17 * dVar20 +
                                             (double)(float)(dVar21 * dVar28 +
                                                            (double)(float)((double)(float)(dVar19 *
                                                                                           dVar24) *
                                                                            dVar31 + dVar24))));
      dVar19 = (double)FastWrapRot
                                 (*(float *)((int)pvVar10 + 0x94),(float)(dVar22 * dVar18) * fVar8);
      fVar8 = g_FrameTime;
      dVar22 = (double)*(float *)((int)pvVar10 + 0x98);
      dVar17 = (double)(float)(dVar23 - dVar22);
      if (dVar22 - (double)(float)(dVar23 - dVar22) < 0.0) {
        dVar17 = dVar22;
      }
      dVar21 = (double)(float)(dVar29 - dVar22);
      if ((double)(float)(dVar29 - dVar22) - dVar17 < 0.0) {
        dVar21 = dVar17;
      }
      dVar29 = (double)(float)(dVar21 * dVar21);
      dVar22 = (double)DAT_00765b44;
      dVar30 = (double)DAT_00765b50;
      *(float *)((int)pvVar10 + 0x94) = (float)dVar19;
      dVar19 = (double)(float)(dVar29 * (double)(float)(dVar29 * dVar21));
      dVar17 = (double)(float)(dVar29 * dVar19);
      dVar20 = (double)(float)((double)(float)(dVar29 * dVar17) * dVar16 +
                              (double)(float)(dVar17 * dVar20 +
                                             (double)(float)(dVar19 * dVar28 +
                                                            (double)(float)((double)(float)(dVar29 *
                                                                                           dVar21) *
                                                                            dVar31 + dVar21))));
      dVar16 = (double)FastWrapRot
                                 (*(float *)((int)pvVar10 + 0x98),(float)(dVar22 * dVar18) * fVar8);
      *(float *)((int)pvVar10 + 0x98) = (float)dVar16;
      (moby->pos).x = (float)(dVar26 * dVar27 + (double)*(float *)((int)pvVar10 + 0x80));
      (moby->pos).y = (float)(dVar24 * dVar25 + (double)*(float *)((int)pvVar10 + 0x84));
      fVar8 = *(float *)((int)pvVar10 + 0x88);
      (moby->pos).w = (float)dVar23;
      (moby->pos).z = (float)(dVar20 * dVar30 + dVar32) + fVar8;
      iVar14 = CollLine(lVar13 + 0x10,(int)pvVar10 + 0x80,0,lVar13,0);
      if (iVar14 == 0) {
        iVar14 = CollMobySphere
                           (0x3ff0000000000000,(int)pvVar10 + 0x80,&DAT_001e9bb0,0,0,0);
        if (iVar14 != 0) {
          if (g_CollOutput.pMoby == g_heroMobyPtr) {
            moby->state = '\x02';
          }
          else if ((g_CollOutput.pMoby != (MobyInstance *)0x0) &&
                  (((g_CollOutput.pMoby)->oClass == DECOY ||
                   ((g_CollOutput.pMoby)->oClass == MORPH_O_RAY_CHICKEN)))) {
            moby->state = '\x02';
          }
        }
      }
      else if (g_CollOutput.pMoby == g_heroMobyPtr) {
        moby->state = '\x02';
      }
      else if ((g_CollOutput.pMoby != (MobyInstance *)0x0) &&
              (((g_CollOutput.pMoby)->oClass == DECOY ||
               ((g_CollOutput.pMoby)->oClass == MORPH_O_RAY_CHICKEN)))) {
        moby->state = '\x02';
      }
      RegisterFuncForMoby(&PTR_M1169_001ea390_00709118,moby);
    }
    else if (uVar7 == '\0') {
      if (*(int *)((int)pvVar10 + 0x70) == -1) {
        printf("AlarmBot with no path. UID: %d\n",moby->uid);
        DeleteMoby(moby);
      }
      else {
        pSVar11 = Splines[*(int *)((int)pvVar10 + 0x70)];
        if (pSVar11->cnt == 0) {
          printf("AlarmBot with a path that has no points. UID: %d\n",moby->uid);
          DeleteMoby(moby);
        }
        else {
          fVar8 = pSVar11->points[0].x;
          (moby->pos).x = fVar8;
          (moby->pos).y = pSVar11->points[0].y;
          (moby->pos).z = pSVar11->points[0].z;
          (moby->pos).w = pSVar11->points[0].w;
          *(float *)((int)pvVar10 + 0x80) = fVar8;
          *(undefined2 *)((int)pvVar10 + 0x24) = 4;
          *(undefined4 *)((int)pvVar10 + 0xa4) = 1;
          *(undefined4 *)((int)pvVar10 + 0x7c) = 1;
          *(f32 *)((int)pvVar10 + 0x84) = (moby->pos).y;
          *(f32 *)((int)pvVar10 + 0x88) = (moby->pos).z;
          fVar9 = (moby->pos).w;
          *(undefined4 *)((int)pvVar10 + 0x20) = 0x40800000;
          *(f32 *)((int)pvVar10 + 0x8c) = fVar9;
          *(undefined1 *)((int)pvVar10 + 0x28) = 2;
          dVar16 = (double)MB_randRot();
          *(float *)((int)pvVar10 + 0x90) = (float)dVar16;
          dVar16 = (double)MB_randRot();
          *(float *)((int)pvVar10 + 0x94) = (float)dVar16;
          dVar16 = (double)MB_randRot();
          *(float *)((int)pvVar10 + 0x98) = (float)dVar16;
          moby->state = '\x01';
        }
      }
    }
  }
  return;
}


