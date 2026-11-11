// game/update/moby281.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x32c410-0x32ca5c
#include "game/update/moby281.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x032c410 (0x14 bytes)
void M281_0032c410(void)

{
  DAT_008003dc = 0x10000;
  return;
}


// 0x032c468 (0x5f4 bytes)
// inlined: FastRSqrt @0x32c594
/* Moby 281 */

void UpdateMoby_281(MobyInstance *moby)

{
  byte bVar1;
  void *pvVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> local_60;
  GPiece<16> local_50;
  GPiece<8> local_40;
  float local_38;
  
  lVar8 = (longlong)(int)moby;
  bVar1 = moby->state;
  pvVar2 = moby->pVar;
  uVar10 = ZEXT48(pvVar2);
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      uVar3 = *(undefined4 *)((int)pvVar2 + 0x20);
      (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar2 + 0x10);
      (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar2 + 0x14);
      (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar2 + 0x18);
      iVar9 = CollLine(local_60,lVar8 + 0x10,5,uVar3,0);
      if (iVar9 != 0) {
        fVar4 = 0.0;
        fVar5 = g_CollOutput.normal.z * g_CollOutput.normal.z +
                g_CollOutput.normal.x * g_CollOutput.normal.x +
                g_CollOutput.normal.y * g_CollOutput.normal.y;
        fVar7 = fVar4;
        fVar6 = fVar4;
        if (SQRT(fVar5) != 0.0) {
          fVar6 = 1.0 / SQRT(fVar5);
          fVar6 = -(fVar5 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
          fVar6 = -(fVar5 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
          fVar6 = -(fVar5 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
          fVar4 = g_CollOutput.normal.z * fVar6;
          fVar7 = g_CollOutput.normal.y * fVar6;
          fVar6 = g_CollOutput.normal.x * fVar6;
        }
        if (fVar4 * *(float *)((int)pvVar2 + 0x18) +
            fVar6 * *(float *)((int)pvVar2 + 0x10) + fVar7 * *(float *)((int)pvVar2 + 0x14) < 0.0) {
          FastVecNormalize(uVar10 + 0x10,uVar10 + 0x10,local_50);
          *(float *)((int)pvVar2 + 0x10) = *(float *)((int)pvVar2 + 0x10) * 0.25;
          *(float *)((int)pvVar2 + 0x14) = *(float *)((int)pvVar2 + 0x14) * 0.25;
          *(float *)((int)pvVar2 + 0x18) = *(float *)((int)pvVar2 + 0x18) * 0.25;
        }
      }
      dVar12 = 0.3330000042915344;
      iVar9 = CollSphere(0x3fd54fdf40000000,lVar8 + 0x10,&DAT_0032c428,2,0);
      if (iVar9 != 0) {
        fVar4 = 0.0;
        dVar11 = (double)SQRT(g_CollOutput.normal.z * g_CollOutput.normal.z +
                              g_CollOutput.normal.x * g_CollOutput.normal.x +
                              g_CollOutput.normal.y * g_CollOutput.normal.y);
        if (dVar11 == 0.0) {
          local_38 = 0.0;
          fVar5 = fVar4;
        }
        else {
          local_38 = (float)(dVar12 / dVar11);
          fVar4 = g_CollOutput.normal.x * local_38;
          fVar5 = g_CollOutput.normal.y * local_38;
          local_38 = g_CollOutput.normal.z * local_38;
        }
        if (local_38 * *(float *)((int)pvVar2 + 0x18) +
            fVar4 * *(float *)((int)pvVar2 + 0x10) + fVar5 * *(float *)((int)pvVar2 + 0x14) < 0.0) {
          FastVecNormalize(uVar10 + 0x10,uVar10 + 0x10,local_40);
          *(float *)((int)pvVar2 + 0x10) = *(float *)((int)pvVar2 + 0x10) * 0.25;
          *(float *)((int)pvVar2 + 0x14) = *(float *)((int)pvVar2 + 0x14) * 0.25;
          *(float *)((int)pvVar2 + 0x18) = *(float *)((int)pvVar2 + 0x18) * 0.25;
        }
        (moby->pos).x = g_CollOutput.ip.x;
        (moby->pos).y = g_CollOutput.ip.y;
        fVar4 = g_CollOutput.ip.z + local_38;
        (moby->pos).w = g_CollOutput.ip.w;
        (moby->pos).z = fVar4;
        if ((0.3 <= local_38) &&
           (SQRT(*(float *)((int)pvVar2 + 0x18) * *(float *)((int)pvVar2 + 0x18) +
                 *(float *)((int)pvVar2 + 0x10) * *(float *)((int)pvVar2 + 0x10) +
                 *(float *)((int)pvVar2 + 0x14) * *(float *)((int)pvVar2 + 0x14)) <
            g_FrameTime * 0.25)) {
          auVar13 = ZEXT416(0xffffffff);
          auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
          moby->state = '\x02';
          auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
          auVar13 = loadVectorLeftIndexed(0x18,0x32c428);
          auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar13 = vectorMultiplyAddFloatingPoint
                              (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60
                               ,auVar14);
          auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
          auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar3 = storeVectorElementWordIndexed
                            (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0x28,
                             uVar10);
          *(undefined4 *)((int)pvVar2 + 0x28U & 0xfffffffc) = uVar3;
        }
      }
      iVar9 = FastDecTimerS32(uVar10 + 0x28);
      if (iVar9 == 0) {
        iVar9 = *(int *)((int)pvVar2 + 0x28);
        if ((iVar9 < (int)(animationSpeed * 45.5)) &&
           (iVar9 == (iVar9 / (int)(animationSpeed * 10.5)) * (int)(animationSpeed * 10.5))) {
          *(undefined1 *)((int)pvVar2 + 7) = 0xfa;
          MB_UpdateLightsTransition(lVar8,uVar10);
        }
      }
      else {
        moby->state = '\x03';
      }
      *(float *)((int)pvVar2 + 0x18) =
           *(float *)((int)pvVar2 + 0x18) - *(float *)((int)pvVar2 + 0x24);
    }
  }
  else if (bVar1 < 3) {
    iVar9 = FastDecTimerS32(uVar10 + 0x28);
    if (iVar9 == 0) {
      iVar9 = *(int *)((int)pvVar2 + 0x28);
      if ((iVar9 < (int)(animationSpeed * 61.5)) &&
         (iVar9 == (iVar9 / (int)(animationSpeed * 20.5)) * (int)(animationSpeed * 20.5))) {
        *(undefined1 *)((int)pvVar2 + 7) = 0xfa;
        MB_UpdateLightsTransition(lVar8,uVar10);
      }
    }
    else {
      moby->state = '\x03';
    }
  }
  else if (bVar1 < 4) {
    PlayMobySound(0,0,moby);
    MB_genericExplosion
              (0x3ff8000000000000,0x3ff0000000000000,0x4008000000000000,0x3ffb333340000000,
               0x4010000000000000,0x3ff0000000000000,0x401c000000000000,lVar8,&DAT_00a15d30,0,0,7,7,
               10,0x14);
    DeleteMoby(moby);
    return;
  }
  MB_ColorDyingMoby(lVar8,uVar10);
  return;
}


