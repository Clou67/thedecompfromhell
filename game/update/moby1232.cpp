// game/update/moby1232.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x215778-0x216428
#include "game/update/moby1232.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby1233.h"
#include "idol/fastfunc.h"

// 0x0215778 (0x4 bytes)
void M1232_00215778(void)

{
  return;
}


// 0x021577c (0x14 bytes)
void M1232_0021577c(void)

{
  DAT_00768660 = 0x10000;
  return;
}


// 0x02157a0 (0x27c bytes)
void M1232_002157a0(MobyInstance *param_1)

{
  void *pvVar1;
  Spline *pSVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  double dVar8;
  int local_20;
  float local_1c;
  
  pvVar1 = param_1->pVar;
  uVar7 = ZEXT48(pvVar1);
  if (param_1->state == '\0') {
    return;
  }
  param_1->scale = param_1->pClass->gScale * DAT_00768684;
  dVar8 = 0.0;
  local_1c = 0.0;
  uVar5 = MB_damage(param_1,0x330000,0);
  iVar6 = MB_HandleDamage(param_1,uVar5,uVar7 + 0x20,0,&local_20,&local_1c,0,4);
  if (local_20 == 1) goto LAB_002158c0;
  fVar3 = *(float *)((int)pvVar1 + 0x20) - local_1c;
  *(float *)((int)pvVar1 + 0x20) = fVar3;
  if ((double)fVar3 <= dVar8) {
LAB_002158a0:
    param_1->state = '\a';
    *(undefined1 *)((int)pvVar1 + 0x67) = 0xf0;
  }
  else if (iVar6 < 3) {
    if ((-1 < iVar6) && (0 < iVar6)) goto LAB_002158a0;
  }
  else if (iVar6 < 0xb) {
    if (iVar6 < 9) {
      *(undefined1 *)((int)pvVar1 + 0x67) = 0x78;
    }
    else {
      *(undefined1 *)((int)pvVar1 + 0x67) = 0xfa;
    }
  }
  MB_UpdateLightsTransition(param_1,uVar7 + 0x60);
LAB_002158c0:
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar7 + 0x60);
  uVar5 = 0x42200000;
  if (param_1->state == '\x04') {
    uVar5 = 0x42480000;
  }
  *(undefined4 *)((int)pvVar1 + 0xd8) = uVar5;
  pSVar2 = Splines[*(int *)((int)pvVar1 + 0xd0)];
  iVar6 = MB_getTargetInArea(param_1,uVar7 + 0x70,pSVar2,0,0,pSVar2->points,pSVar2->cnt);
  if (iVar6 != 2) {
    fVar3 = (param_1->pos).y - *(float *)((int)pvVar1 + 0x74);
    fVar4 = (param_1->pos).x - *(float *)((int)pvVar1 + 0x70);
    if ((*(float *)((int)pvVar1 + 0xd8) < SQRT(fVar4 * fVar4 + fVar3 * fVar3)) ||
       (8.0 < ABS((param_1->pos).z - *(float *)((int)pvVar1 + 0x78)))) {
      *(undefined4 *)((int)pvVar1 + 0xb4) = 2;
    }
    else if ((param_1->state != '\x05') &&
            (iVar6 = CollLine(&param_1->pos,&g_heroCGPos,2,param_1,0), iVar6 != 0))
    {
      *(undefined4 *)((int)pvVar1 + 0xb4) = 2;
    }
  }
  if (*(int *)((int)pvVar1 + 0xb0) == 0) {
    *(MobyInstance **)((int)pvVar1 + 0xb0) = g_heroMobyPtr;
  }
  return;
}


// 0x0215a68 (0x9ac bytes)
// inlined: FastAtan2 @0x215dac, FastAtan2 @0x215fd4
/* Moby 1232 */

double UpdateMoby_1232(MobyInstance *moby)

{
  bool bVar1;
  u8 uVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  f32 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  MobyModeBit MVar11;
  void *pvVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  ulonglong *puVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  float *pfVar26;
  longlong lVar27;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double extraout_f1;
  double dVar32;
  double dVar33;
  ulonglong in_f27;
  double dVar34;
  ulonglong in_f28;
  double dVar35;
  ulonglong in_f29;
  double dVar36;
  ulonglong in_f30;
  double dVar37;
  ulonglong in_f31;
  double dVar38;
  double dVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  float fVar43;
  
  lVar23 = (longlong)(int)moby;
  uVar20 = ZEXT48(&stack0x00000000);
  lVar24 = uVar20 - 400;
  puVar16 = (ulonglong *)lVar24;
  *puVar16 = uVar20;
  puVar16[0x34] = in_LR;
  puVar16[0x2d] = in_f27;
  puVar16[0x2e] = in_f28;
  puVar16[0x2f] = in_f29;
  puVar16[0x30] = in_f30;
  puVar16[0x31] = in_f31;
  puVar16[0x2c] = unaff_r31;
  puVar16[0x2b] = unaff_r30;
  puVar16[0x2a] = unaff_r29;
  pvVar12 = moby->pVar;
  dVar30 = (double)M1232_002157a0();
  uVar2 = moby->state;
  iVar13 = *(int *)((int)pvVar12 + 0xb0);
  if (uVar2 == '\a') {
    *(undefined4 *)((int)puVar16 + 0xec) = 0;
    *(undefined4 *)(puVar16 + 0x1d) = 0;
    *(undefined4 *)((int)puVar16 + 0xe4) = 0;
    *(undefined4 *)(puVar16 + 0x1c) = 0;
    puVar16[0x12] = 0xffffffffffffffff;
    puVar16[0x14] = 1;
    puVar16[0x15] = 1;
    puVar16[0x16] = 0xffffffffffffffff;
    puVar16[0x17] = 0;
    MB_genericExplosion
              (0,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,0x3ff0000000000000,
               0x402e000000000000,lVar23,uVar20 - 0xb0,lVar23 + 0x10,0,&DAT_00215a1c,10,3,0x10);
    dVar30 = (double)DeleteMoby(moby);
  }
  else if (uVar2 == '\x06') {
    dVar38 = 0.0;
    *(undefined4 *)(puVar16 + 0x1e) = 0;
    iVar13 = *(int *)((int)pvVar12 + 0xd4);
    fVar43 = (moby->pos).y;
    fVar5 = (moby->pos).x;
    fVar6 = (moby->pos).z;
    fVar4 = Cuboids[iVar13].pos.y;
    fVar10 = Cuboids[iVar13].pos.x;
    fVar9 = fVar43 - fVar4;
    fVar8 = Cuboids[iVar13].pos.z;
    fVar17 = fVar5 - fVar10;
    fVar18 = fVar6 - fVar8;
    dVar36 = (double)(fVar4 - fVar43);
    dVar35 = (double)(fVar10 - fVar5);
    dVar34 = (double)(fVar8 - fVar6);
    fVar43 = SQRT(fVar18 * fVar18 + fVar17 * fVar17 + fVar9 * fVar9);
    dVar37 = (double)fVar43;
    OrganicDelt
              (fVar43,g_FrameTimeSq * 10.0,g_FrameTimeSq * 10.0,g_FrameTime * 20.0,
               (float *)(puVar16 + 0x1e),0x720000,(float *)((int)pvVar12 + 0xf0));
    dVar39 = (double)SQRT((float)(dVar34 * dVar34 +
                                 (double)(float)(dVar35 * dVar35 + (double)(float)(dVar36 * dVar36))
                                 ));
    dVar32 = (double)(float)((double)*(float *)((int)pvVar12 + 0xf0) / dVar39);
    dVar30 = dVar38;
    if (dVar38 - dVar39 < 0.0) {
      dVar30 = (double)(float)(dVar32 * dVar34);
    }
    dVar33 = dVar38;
    if (dVar38 - dVar39 < 0.0) {
      dVar33 = (double)(float)(dVar32 * dVar36);
    }
    dVar31 = dVar38;
    if (dVar38 - dVar39 < 0.0) {
      dVar31 = (double)(float)(dVar32 * dVar35);
    }
    if (dVar39 - dVar38 < 0.0) {
      dVar30 = (double)(float)(dVar32 * dVar34);
    }
    if (dVar39 - dVar38 < 0.0) {
      dVar33 = (double)(float)(dVar32 * dVar36);
    }
    if (dVar39 - dVar38 < 0.0) {
      dVar31 = (double)(float)(dVar32 * dVar35);
    }
    (moby->pos).z = (float)((double)(moby->pos).z + dVar30);
    (moby->pos).y = (float)((double)(moby->pos).y + dVar33);
    (moby->pos).x = (float)((double)(moby->pos).x + dVar31);
    dVar30 = 0.10000000149011612;
    if ((dVar37 < 0.10000000149011612) &&
       (uVar14 = (int)*(uint *)((int)pvVar12 + 0xf0) >> 0x1f,
       (int)((uVar14 >> 1 ^ *(uint *)((int)pvVar12 + 0xf0)) - uVar14) < 0x3c23d70a)) {
      moby->state = '\x02';
    }
  }
  else if (uVar2 == '\x05') {
    if (*(int *)((int)pvVar12 + 0xb4) != 2) {
      moby->state = '\x06';
    }
  }
  else if (uVar2 == '\x04') {
    fVar43 = *(float *)(iVar13 + 0x10) - (moby->pos).x;
    fVar5 = *(float *)(iVar13 + 0x14) - (moby->pos).y;
    fVar4 = ABS(fVar43);
    fVar6 = ABS(fVar5);
    *(float *)((int)puVar16 + 0xf4) = fVar43;
    *(float *)(puVar16 + 0x1f) = fVar5;
    *(float *)((int)puVar16 + 0xfc) = fVar4 - fVar6;
    dVar39 = 0.0;
    uVar22 = (ulonglong)(*(uint *)((int)puVar16 + 0xf4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar16 + 0xfc) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar16 + 0x1f) >> 0x1d) & 4;
    fVar43 = ABS(*(float *)((int)puVar16 + 0xf4));
    if (*(float *)((int)puVar16 + 0xfc) - 0.0 < 0.0) {
      fVar43 = fVar6;
    }
    fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
    fVar5 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
    fVar10 = ABS(*(float *)(puVar16 + 0x1f));
    if (*(float *)((int)puVar16 + 0xfc) - 0.0 < 0.0) {
      fVar10 = fVar4;
    }
    dVar30 = dVar39;
    if (0.0 < fVar43) {
      lVar25 = uVar20 - 0x180;
      lVar28 = uVar20 - 0x74;
      lVar27 = uVar20 - 0x84;
      lVar29 = 2;
      fVar43 = (fVar10 - fVar43) / (fVar10 + fVar43);
      fVar4 = fVar43 * fVar43;
      *(float *)(puVar16 + 0x23) = fVar43;
      *(float *)(puVar16 + 0x22) = fVar43;
      *(float *)((int)puVar16 + 0x114) = fVar43;
      *(float *)((int)puVar16 + 0x10c) = fVar43;
      fVar43 = fVar4 * fVar4;
      *(float *)(puVar16 + 0x22) = *(float *)(puVar16 + 0x22) * fVar4;
      *(float *)((int)puVar16 + 0x114) = *(float *)((int)puVar16 + 0x114) * fVar43;
      *(float *)(puVar16 + 0x23) = *(float *)(puVar16 + 0x23) * fVar43 * fVar4;
      do {
        *(float *)((int)lVar25 + 0x10c) = *(float *)((int)lVar25 + 0xfc) * fVar43 * fVar43;
        iVar21 = (int)lVar27;
        lVar27 = lVar27 + 8;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar28 + 4) = *(float *)(iVar21 + 4) * fVar43 * fVar43;
        lVar28 = lVar28 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar29 = 4;
      lVar28 = uVar20 - 0x84;
      pfVar26 = (float *)&DAT_007358e0;
      lVar25 = lVar24;
      lVar27 = lVar28;
      do {
        fVar43 = *pfVar26;
        fVar4 = pfVar26[1];
        pfVar26 = pfVar26 + 2;
        *(float *)((int)lVar25 + 0x10c) = *(float *)((int)lVar25 + 0x10c) * fVar43;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar4;
        lVar27 = lVar27 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar25 = 2;
      do {
        iVar21 = (int)lVar24;
        iVar19 = (int)lVar28;
        lVar24 = lVar24 + 0x10;
        lVar28 = lVar28 + 0x10;
        dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar21 + 0x10c)) +
                          *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) + *(float *)(iVar19 + 0xc)
                         );
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar6 + fVar5);
    }
    fVar43 = OrganicDeltAng
                       ((float)dVar30,g_FrameTimeSq * 12.566371,g_FrameTimeSq * 25.132742,
                        g_FrameTime * 6.2831855,&(moby->rotation).z,0x215a1c,
                        (float *)((int)pvVar12 + 0xdc));
    iVar21 = FastDecTimerS32((double)fVar43,ZEXT48(pvVar12) + 0xe8);
    dVar30 = extraout_f1;
    if (iVar21 != 0) {
      auVar40 = ZEXT416(0xffffffff);
      auVar40 = auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60;
      auVar41 = vectorShiftLeftIntegerWord(auVar40,auVar40);
      auVar40 = loadVectorLeftIndexed(0x2c,0x215a1c);
      auVar40 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar42 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar40 = vectorMultiplyAddFloatingPoint
                          (auVar42,auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60,
                           auVar41);
      bVar1 = *(int *)((int)pvVar12 + 0xf4) == 0;
      auVar40 = vectorConvertToSignedFixedPointWordSaturate(auVar40,0);
      auVar40 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar15 = storeVectorElementWordIndexed
                         (auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60,0xe8,
                          ZEXT48(pvVar12));
      *(undefined4 *)((int)pvVar12 + 0xe8U & 0xfffffffc) = uVar15;
      fVar3 = (moby->pos).y;
      *(f32 *)(puVar16 + 0x18) = (moby->pos).x;
      fVar7 = (moby->pos).z;
      *(f32 *)((int)puVar16 + 0xc4) = fVar3;
      fVar3 = (moby->pos).w;
      *(f32 *)(puVar16 + 0x19) = fVar7;
      *(f32 *)((int)puVar16 + 0xcc) = fVar3;
      if (bVar1) {
        fVar43 = (moby->transform).v1.x;
        fVar5 = (moby->transform).v1.y;
        fVar6 = (moby->transform).v1.z;
        fVar4 = 2.5;
      }
      else {
        fVar43 = (moby->transform).v1.x;
        fVar5 = (moby->transform).v1.y;
        fVar6 = (moby->transform).v1.z;
        fVar4 = -2.5;
      }
      fVar10 = *(float *)(puVar16 + 0x18);
      fVar8 = *(float *)((int)puVar16 + 0xc4);
      fVar9 = *(float *)(puVar16 + 0x19);
      fVar17 = DAT_00768690 * g_FrameTime;
      *(uint *)((int)pvVar12 + 0xf4) = (uint)bVar1;
      dVar32 = (double)SQRT(fVar6 * fVar6 + fVar43 * fVar43 + fVar5 * fVar5);
      fVar4 = (float)((double)fVar4 / dVar32);
      dVar30 = dVar39;
      if (dVar39 - dVar32 < 0.0) {
        dVar30 = (double)(fVar6 * fVar4);
      }
      dVar34 = dVar39;
      if (dVar39 - dVar32 < 0.0) {
        dVar34 = (double)(fVar5 * fVar4);
      }
      dVar35 = dVar39;
      if (dVar39 - dVar32 < 0.0) {
        dVar35 = (double)(fVar43 * fVar4);
      }
      if (dVar32 - dVar39 < 0.0) {
        dVar30 = (double)(fVar6 * fVar4);
      }
      if (dVar32 - dVar39 < 0.0) {
        dVar34 = (double)(fVar5 * fVar4);
      }
      if (dVar32 - dVar39 < 0.0) {
        dVar35 = (double)(fVar43 * fVar4);
      }
      fVar43 = (float)((double)fVar8 + dVar34);
      *(float *)(puVar16 + 0x19) = (float)((double)fVar9 + dVar30);
      *(float *)((int)puVar16 + 0xc4) = fVar43;
      *(float *)(puVar16 + 0x18) = (float)((double)fVar10 + dVar35);
      fVar4 = *(float *)(iVar13 + 0x10) - (float)((double)fVar10 + dVar35);
      *(float *)(puVar16 + 0x1a) = fVar4;
      fVar43 = *(float *)(iVar13 + 0x14) - fVar43;
      *(float *)((int)puVar16 + 0xd4) = fVar43;
      fVar6 = *(float *)(iVar13 + 0x18) - (float)((double)fVar9 + dVar30);
      *(float *)(puVar16 + 0x1b) = fVar6;
      *(undefined4 *)((int)puVar16 + 0xdc) = *(undefined4 *)(iVar13 + 0x1c);
      dVar32 = (double)SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar43 * fVar43);
      fVar5 = (float)((double)fVar17 / dVar32);
      dVar30 = dVar39;
      if (dVar39 - dVar32 < 0.0) {
        dVar30 = (double)(fVar4 * fVar5);
      }
      dVar34 = dVar39;
      if (dVar39 - dVar32 < 0.0) {
        dVar34 = (double)(fVar43 * fVar5);
      }
      dVar35 = dVar39;
      if (dVar39 - dVar32 < 0.0) {
        dVar35 = (double)(fVar6 * fVar5);
      }
      if (dVar32 - dVar39 < 0.0) {
        dVar30 = (double)(fVar4 * fVar5);
      }
      if (dVar32 - dVar39 < 0.0) {
        dVar34 = (double)(fVar43 * fVar5);
      }
      if (dVar32 - dVar39 < 0.0) {
        dVar35 = (double)(fVar6 * fVar5);
      }
      *(float *)(puVar16 + 0x1a) = (float)dVar30;
      *(float *)((int)puVar16 + 0xd4) = (float)dVar34;
      *(float *)(puVar16 + 0x1b) = (float)dVar35;
      M1232_00216430
                ((double)*(float *)((int)pvVar12 + 0xec),uVar20 - 0xd0,uVar20 - 0xc0,lVar23,
                 0xfffffffffffff410,iVar13);
      fVar43 = *(float *)((int)pvVar12 + 0xec) + 5.0;
      dVar30 = (double)fVar43;
      *(float *)((int)pvVar12 + 0xec) = fVar43;
      fVar43 = (moby->pos).y - *(float *)(iVar13 + 0x14);
      fVar5 = (moby->pos).x - *(float *)(iVar13 + 0x10);
      fVar43 = SQRT(fVar5 * fVar5 + fVar43 * fVar43);
      if ((double)fVar43 < dVar30) {
        *(float *)((int)pvVar12 + 0xec) = fVar43;
      }
    }
    if (*(int *)((int)pvVar12 + 0xb4) == 2) {
      moby->state = '\x02';
    }
  }
  else if (uVar2 == '\x02') {
    fVar43 = *(float *)(iVar13 + 0x10) - (moby->pos).x;
    fVar5 = *(float *)(iVar13 + 0x14) - (moby->pos).y;
    fVar6 = ABS(fVar43);
    fVar4 = ABS(fVar5);
    *(float *)(puVar16 + 0x20) = fVar43;
    *(float *)((int)puVar16 + 0x104) = fVar5;
    *(float *)(puVar16 + 0x21) = fVar6 - fVar4;
    fVar43 = 0.0;
    uVar22 = (ulonglong)(*(uint *)(puVar16 + 0x20) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar16 + 0x21) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar16 + 0x104) >> 0x1d) & 4;
    fVar5 = ABS(*(float *)(puVar16 + 0x20));
    if (*(float *)(puVar16 + 0x21) - 0.0 < 0.0) {
      fVar5 = fVar4;
    }
    fVar10 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
    fVar4 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
    fVar8 = ABS(*(float *)((int)puVar16 + 0x104));
    if (*(float *)(puVar16 + 0x21) - 0.0 < 0.0) {
      fVar8 = fVar6;
    }
    if (0.0 < fVar5) {
      lVar23 = uVar20 - 0x180;
      lVar27 = uVar20 - 0x54;
      lVar25 = uVar20 - 100;
      lVar28 = 2;
      fVar5 = (fVar8 - fVar5) / (fVar8 + fVar5);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar16 + 0x27) = fVar5;
      *(float *)(puVar16 + 0x26) = fVar5;
      *(float *)((int)puVar16 + 0x134) = fVar5;
      *(float *)((int)puVar16 + 300) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar16 + 0x26) = *(float *)(puVar16 + 0x26) * fVar6;
      *(float *)((int)puVar16 + 0x134) = *(float *)((int)puVar16 + 0x134) * fVar5;
      *(float *)(puVar16 + 0x27) = *(float *)(puVar16 + 0x27) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar23 + 300) = *(float *)((int)lVar23 + 0x11c) * fVar5 * fVar5;
        iVar13 = (int)lVar25;
        lVar25 = lVar25 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar13 + 4) * fVar5 * fVar5;
        lVar27 = lVar27 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar27 = uVar20 - 100;
      pfVar26 = (float *)&DAT_007358e0;
      lVar23 = lVar24;
      lVar25 = lVar27;
      do {
        fVar5 = *pfVar26;
        fVar6 = pfVar26[1];
        pfVar26 = pfVar26 + 2;
        *(float *)((int)lVar23 + 300) = *(float *)((int)lVar23 + 300) * fVar5;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar6;
        lVar25 = lVar25 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar23 = 2;
      do {
        iVar13 = (int)lVar24;
        lVar24 = lVar24 + 0x10;
        iVar21 = (int)lVar27;
        lVar27 = lVar27 + 0x10;
        fVar43 = fVar43 + *(float *)(iVar13 + 300) + *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8)
                 + *(float *)(iVar21 + 0xc);
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      fVar43 = (fVar43 + 0.7853982) * fVar10 + fVar4;
    }
    fVar43 = OrganicDeltAng
                       (fVar43,g_FrameTimeSq * 4.712389,g_FrameTimeSq * 4.712389,
                        g_FrameTime * 10.12291,&(moby->rotation).z,0x215a1c,
                        (float *)((int)pvVar12 + 0xdc));
    dVar30 = (double)fVar43;
    if (*(int *)((int)pvVar12 + 0xb4) != 2) {
      *(undefined4 *)((int)pvVar12 + 0xec) = 0x41700000;
      moby->state = '\x04';
    }
  }
  else if (uVar2 == '\0') {
    MVar11 = moby->modeBits;
    *(f32 *)((int)pvVar12 + 0xc0) = (moby->pos).x;
    *(f32 *)((int)pvVar12 + 0xc4) = (moby->pos).y;
    fVar3 = (moby->pos).z;
    moby->modeBits = MVar11 | (CAN_BE_DAMAGED|CAN_BE_AUTO_TARGETED);
    *(f32 *)((int)pvVar12 + 200) = fVar3;
    fVar3 = (moby->pos).w;
    *(undefined4 *)((int)pvVar12 + 0x20) = 0x40800000;
    *(f32 *)((int)pvVar12 + 0xcc) = fVar3;
    *(undefined2 *)((int)pvVar12 + 0x24) = 4;
    *(undefined1 *)((int)pvVar12 + 0x28) = 3;
    moby->drawDistance = 0xff;
    fVar43 = (moby->pos).z + 1.0;
    dVar30 = (double)fVar43;
    moby->state = ((byte)(ZERO_MASK((-1 - *(int *)((int)pvVar12 + 0xd4)))) & 0xfd) + 5
    ;
    (moby->pos).z = fVar43;
  }
  return dVar30;
}


// 0x0216414 (0x14 bytes)
void M1233_00216414(void)

{
  DAT_007686e0 = 0x10000;
  return;
}


