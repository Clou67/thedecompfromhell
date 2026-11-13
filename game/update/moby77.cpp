// game/update/moby77.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x453bc8-0x454328
#include "game/update/moby77.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update.h"
#include "game/update/moby408.h"
#include "idol/fastfunc.h"

// 0x0453bc8 (0x760 bytes)
// inlined: FastAtan2 @0x453f58
/* Moby 77 */

void UpdateMoby_77(MobyInstance *moby)

{
  u8 uVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  int *piVar9;
  undefined4 uVar10;
  ulonglong *puVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar20;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  float *pfVar24;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar25;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f31;
  double dVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  
  lVar17 = (longlong)(int)moby;
  uVar16 = ZEXT48(&stack0x00000000);
  lVar19 = uVar16 - 0x120;
  puVar11 = (ulonglong *)lVar19;
  *puVar11 = uVar16;
  puVar11[0x26] = in_LR;
  puVar11[0x23] = in_f31;
  puVar11[0x22] = unaff_r31;
  puVar11[0x21] = unaff_r30;
  puVar11[0x20] = unaff_r29;
  puVar11[0x1f] = unaff_r28;
  pvVar8 = moby->pVar;
  uVar25 = ZEXT48(pvVar8);
  iVar20 = MB_damage(lVar17,0x330000,0);
  if (iVar20 == 0) {
    if (moby->state == '\x01') goto LAB_00453d7c;
  }
  else {
    moby->state = '\x04';
    moby->damage = -1;
  }
  MB_randSphere(0,(double)(g_FrameTime * 2.0),uVar16 - 0xa0);
  fVar2 = (moby->pos).y;
  *(f32 *)(puVar11 + 0x12) = (moby->pos).x;
  fVar3 = (moby->pos).z;
  *(f32 *)((int)puVar11 + 0x94) = fVar2;
  fVar2 = (moby->pos).w;
  *(float *)(puVar11 + 0x13) = fVar3;
  fVar5 = DAT_00873660;
  *(f32 *)((int)puVar11 + 0x9c) = fVar2;
  if (DAT_010c5124 == 0) {
    moby->state = '\x01';
    moby->collision = (ushort *)0x0;
    return;
  }
  puVar11[0x1c] = (longlong)DAT_0087365c;
  *(float *)(puVar11 + 0x13) = fVar3 + fVar5;
  uVar10 = DAT_00873654;
  dVar31 = (double)DAT_00873658;
  FastDoubleToInt
            ((double)(longlong)(animationSpeed * ((float)(longlong)puVar11[0x1c] + 0.5)));
  MB_randInt(0xff);
  SpawnPart_60(dVar31,uVar16 - 0x90,uVar16 - 0xa0,uVar10);
  piVar9 = *(int **)((int)pvVar8 + 0x6c);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == worldUpdateTime) goto LAB_00453d7c;
    *piVar9 = worldUpdateTime;
  }
  RegisterMobyDraw(&PTR_M771_00454680_0070e8e8,moby);
LAB_00453d7c:
  uVar1 = moby->state;
  if (uVar1 == '\x04') {
    MB_SpawnExplosionSparks(0x3fd0000000000000,0x402a000000000000,lVar17,lVar17 + 0x10);
    puVar11[0xe] = 0;
    DamageSphereAtPos
              (0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,lVar17,lVar17 + 0x10);
    moby->collision = (ushort *)0x0;
    moby->enabled = '\0';
    moby->state = '\x01';
    moby->modeBits = moby->modeBits | DISABLED;
  }
  else if (uVar1 == '\x03') {
    fVar5 = g_heroPosition.x - (moby->pos).x;
    fVar4 = g_heroPosition.y - (moby->pos).y;
    fVar3 = *(float *)((int)pvVar8 + 100);
    fVar6 = ABS(fVar5);
    fVar7 = ABS(fVar4);
    *(float *)(puVar11 + 0x16) = fVar5;
    *(float *)((int)puVar11 + 0xb4) = fVar4;
    *(float *)(puVar11 + 0x17) = fVar6 - fVar7;
    dVar31 = 0.0;
    uVar18 = (ulonglong)(*(uint *)(puVar11 + 0x16) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x17) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0xb4) >> 0x1d) & 4;
    fVar5 = ABS(*(float *)(puVar11 + 0x16));
    if (*(float *)(puVar11 + 0x17) - 0.0 < 0.0) {
      fVar5 = fVar7;
    }
    fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar4 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    fVar13 = ABS(*(float *)((int)puVar11 + 0xb4));
    if (*(float *)(puVar11 + 0x17) - 0.0 < 0.0) {
      fVar13 = fVar6;
    }
    dVar29 = dVar31;
    if (0.0 < fVar5) {
      lVar23 = uVar16 - 0x110;
      lVar21 = uVar16 - 0x54;
      lVar22 = uVar16 - 100;
      lVar26 = 2;
      fVar5 = (fVar13 - fVar5) / (fVar13 + fVar5);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar11 + 0x19) = fVar5;
      *(float *)(puVar11 + 0x18) = fVar5;
      *(float *)((int)puVar11 + 0xc4) = fVar5;
      *(float *)((int)puVar11 + 0xbc) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar11 + 0x18) = *(float *)(puVar11 + 0x18) * fVar6;
      *(float *)((int)puVar11 + 0xc4) = *(float *)((int)puVar11 + 0xc4) * fVar5;
      *(float *)(puVar11 + 0x19) = *(float *)(puVar11 + 0x19) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar23 + 0xbc) = *(float *)((int)lVar23 + 0xac) * fVar5 * fVar5;
        iVar20 = (int)lVar22;
        lVar22 = lVar22 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar20 + 4) * fVar5 * fVar5;
        lVar21 = lVar21 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar23 = uVar16 - 100;
      lVar26 = 4;
      pfVar24 = (float *)&DAT_007358e0;
      lVar21 = lVar23;
      lVar22 = lVar19;
      do {
        fVar5 = *pfVar24;
        fVar6 = pfVar24[1];
        pfVar24 = pfVar24 + 2;
        *(float *)((int)lVar22 + 0xbc) = *(float *)((int)lVar22 + 0xbc) * fVar5;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
        lVar21 = lVar21 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar21 = 2;
      do {
        iVar20 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        iVar12 = (int)lVar23;
        lVar23 = lVar23 + 0x10;
        dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar20 + 0xbc)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar7 + fVar4);
    }
    dVar27 = (double)FastWrapRot(fVar3,(float)dVar29);
    fVar7 = DAT_00969da8;
    fVar4 = DAT_00873650;
    fVar5 = g_FrameTime;
    fVar3 = (float)(dVar27 + 1.570796251296997);
    dVar29 = (double)(float)(3.141592502593994 - dVar27);
    if (dVar27 - (double)(float)(3.141592502593994 - dVar27) < 0.0) {
      dVar29 = dVar27;
    }
    fVar6 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar6 = fVar3;
    }
    dVar28 = (double)(float)(-3.141592502593994 - dVar27);
    if ((double)(float)(-3.141592502593994 - dVar27) - dVar29 < 0.0) {
      dVar28 = dVar29;
    }
    fVar13 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar6 < 0.0) {
      fVar13 = fVar6;
    }
    dVar27 = (double)(float)(dVar28 * dVar28);
    fVar15 = fVar13 * fVar13;
    dVar30 = (double)(float)(dVar27 * (double)(float)(dVar27 * dVar28));
    fVar6 = fVar15 * fVar15 * fVar13;
    dVar29 = (double)(float)(dVar27 * dVar30);
    fVar14 = fVar15 * fVar6;
    fVar3 = (moby->pos).z;
    *(undefined4 *)(puVar11 + 0x15) = 0;
    fVar3 = fVar3 - fVar7;
    *(float *)((int)puVar11 + 0xa4) =
         fVar4 * fVar5 *
         ((float)(dVar27 * dVar29) * 2.601887e-06 +
         (float)(dVar29 * -0.0001980741071747616 +
                (double)(float)(dVar30 * 0.008333025500178337 +
                               (double)(float)((double)(float)(dVar27 * dVar28) *
                                               -0.16666656732559204 + dVar28))));
    *(float *)(puVar11 + 0x14) =
         fVar4 * fVar5 *
         (fVar15 * fVar14 * 2.601887e-06 +
         fVar14 * -0.0001980741 + fVar6 * 0.0083330255 + fVar15 * fVar13 * -0.16666657 + fVar13);
    if (fVar3 <= 0.6) {
      if (fVar3 < 0.4) {
        *(float *)(puVar11 + 0x15) = g_FrameTime * 3.0;
      }
    }
    else {
      *(float *)(puVar11 + 0x15) = g_FrameTime * -3.0;
    }
    MB_MoveAndCollide(0x3fd0000000000000,0x3fd0000000000000,dVar31,lVar17,uVar16 - 0x80);
    fVar3 = DAT_00969db4 - (moby->pos).y;
    fVar5 = g_heroCGPos - (moby->pos).x;
    if ((SQRT(fVar5 * fVar5 + fVar3 * fVar3) < 0.5) ||
       (iVar20 = FastDecTimerS32(uVar25 + 0x68), iVar20 != 0)) {
      moby->state = '\x04';
    }
    else if (((moby->animationId == '\x01') && ((moby->field43_0x70 & 2U) != 0)) &&
            (moby->animationId != '\x02')) {
      puVar11[0x1c] = (longlong)(int)(animationSpeed * 10.5);
      MB_SetAnimation(lVar17,2,0,*(undefined4 *)((int)puVar11 + 0xe4));
    }
  }
  else if (uVar1 == '\x02') {
    (moby->pos).z = g_FrameTime * 2.0 + (moby->pos).z;
    iVar20 = FastDecTimerS32(uVar25 + 0x68);
    if (iVar20 != 0) {
      moby->state = '\x03';
      if (moby->animationId != '\x01') {
        puVar11[0x1c] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar17,1,0,*(undefined4 *)((int)puVar11 + 0xe4));
      }
      auVar32 = ZEXT416(0xffffffff);
      auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
      auVar32 = loadVectorLeftIndexed(0x10,0x453b78);
      auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar32 = vectorMultiplyAddFloatingPoint
                          (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                           auVar33);
      auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
      auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar10 = storeVectorElementWordIndexed
                         (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x68,uVar25)
      ;
      *(undefined4 *)((int)pvVar8 + 0x68U & 0xfffffffc) = uVar10;
    }
  }
  else if (uVar1 == '\0') {
    moby->state = '\x01';
    moby->collision = (ushort *)0x0;
    moby->enabled = '\0';
    moby->modeBits = moby->modeBits | DISABLED;
  }
  return;
}


