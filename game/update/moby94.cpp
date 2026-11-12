// game/update/moby94.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x4c49b0-0x4c4cf0
#include "game/update/moby94.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby982.h"
#include "idol/fastfunc.h"

// 0x04c49b0 (0x340 bytes)
/* Moby 94 */

void UpdateMoby_94(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  
  pvVar3 = moby->pVar;
  if (moby->state == 0) {
    moby->state = '\x01';
    dVar11 = (double)MB_randRot();
    *(float *)((int)pvVar3 + 0x10) = (float)dVar11;
  }
  else if ((moby->state < 2) && (iVar8 = FastDecTimerS32((int)pvVar3 + 0x14), iVar8 != 0))
  {
    fVar1 = (moby->pos).y;
    fVar2 = (moby->pos).x;
    fVar6 = fVar1 - g_heroPosition.y;
    fVar7 = fVar2 - g_heroPosition.x;
    if ((SQRT(fVar7 * fVar7 + fVar6 * fVar6) < 4.0) && (g_heroState == GRINDRAIL_USE)) {
      if (((DAT_0096a288 != -1) &&
          (fVar6 = ((moby->transform).v1.y * DAT_008f4cf4 +
                   (moby->transform).v2.y * DAT_008f4cf8 +
                   (moby->transform).v0.y * DAT_008f4cf0 + fVar1) - g_heroPosition.y,
          fVar1 = ((moby->transform).v1.x * DAT_008f4cf4 +
                  (moby->transform).v2.x * DAT_008f4cf8 +
                  (moby->transform).v0.x * DAT_008f4cf0 + fVar2) - g_heroPosition.x,
          fVar2 = ((moby->transform).v2.z * DAT_008f4cf8 +
                   (moby->transform).v0.z * DAT_008f4cf0 + (moby->transform).v1.z * DAT_008f4cf4 +
                  (moby->pos).z) - g_heroPosition.z,
          fVar7 = DAT_00969d40 * fVar2 + g_heroGravityMtx * fVar1 + DAT_00969d30 * fVar6,
          ABS(DAT_00969d44 * fVar2 + DAT_00969d24 * fVar1 + DAT_00969d34 * fVar6) < 0.1)) &&
         (((0.0 < fVar7 && (DAT_0096a288 == 3)) || ((fVar7 < 0.0 && (DAT_0096a288 == 2)))))) {
        pvVar4 = moby->pVar;
        uVar10 = ZEXT48(pvVar4);
        auVar15 = ZEXT416(0xffffffff);
        auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
        auVar16 = vectorShiftLeftIntegerWord(auVar15,auVar15);
        *(undefined4 *)((int)pvVar4 + 0x10) = 0xc0490fda;
        iVar8 = 0;
        auVar15 = loadVectorLeftIndexed(0xc,0x4c4978);
        auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar17 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar15 = vectorMultiplyAddFloatingPoint
                            (auVar17,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,
                             auVar16);
        auVar15 = vectorConvertToSignedFixedPointWordSaturate(auVar15,0);
        auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar5 = storeVectorElementWordIndexed
                          (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,0x14,uVar10
                          );
        *(undefined4 *)((int)pvVar4 + 0x14U & 0xfffffffc) = uVar5;
        moby->setByGroup =
             (char)((ulonglong)(LZCOUNT((uint)(byte)moby->setByGroup) << 0x20) >> 0x25);
        do {
          if (*(int *)uVar10 != -1) {
            FUN_004c82d0(g_MobyInstance + *(int *)uVar10);
          }
          iVar8 = iVar8 + 1;
          uVar10 = uVar10 + 4;
        } while (iVar8 < 4);
      }
    }
  }
  dVar12 = (double)FastWrapRot
                             (*(float *)((int)pvVar3 + 0x10),g_FrameTime * 12.566371);
  *(float *)((int)pvVar3 + 0x10) = (float)dVar12;
  dVar11 = (double)(float)(3.141592502593994 - dVar12);
  if (dVar12 - (double)(float)(3.141592502593994 - dVar12) < 0.0) {
    dVar11 = dVar12;
  }
  dVar13 = (double)(float)(-3.141592502593994 - dVar12);
  if ((double)(float)(-3.141592502593994 - dVar12) - dVar11 < 0.0) {
    dVar13 = dVar11;
  }
  dVar11 = (double)(float)(dVar13 * dVar13);
  dVar14 = (double)(float)(dVar11 * (double)(float)(dVar11 * dVar13));
  dVar12 = (double)(float)(dVar11 * dVar14);
  dVar11 = (double)(((float)(dVar11 * dVar12) * 2.601887e-06 +
                     (float)(dVar12 * -0.0001980741071747616 +
                            (double)(float)(dVar14 * 0.008333025500178337 +
                                           (double)(float)((double)(float)(dVar11 * dVar13) *
                                                           -0.16666656732559204 + dVar13))) + 1.0) *
                   0.5);
  if (moby->setByGroup == '\0') {
    uVar9 = FastLerpColor(dVar11,0xffffffff80202080,0xffffffff80202020);
  }
  else {
    uVar9 = FastLerpColor(dVar11,0xffffffff80208020,0xffffffff80202020);
  }
  moby->glowRgba = uVar9;
  return;
}


