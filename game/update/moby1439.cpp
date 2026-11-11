// game/update/moby1439.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x27c788-0x27caec
#include "game/update/moby1439.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby1422.h"
#include "idol/fastfunc.h"

// 0x027c788 (0x364 bytes)
/* Moby 1439 */

undefined4 * UpdateMoby_1439(MobyInstance *moby)

{
  int iVar1;
  byte bVar2;
  void *pvVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  undefined4 *puVar11;
  double dVar12;
  double dVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  
  pvVar3 = moby->pVar;
  iVar1 = (int)(animationSpeed * 30.5);
  dVar12 = (double)FastIntToDouble(worldUpdateTime - (worldUpdateTime / iVar1) * iVar1);
  dVar13 = (double)FastIntToDouble(iVar1);
  fVar5 = (float)(dVar12 / dVar13) * 6.28318 - 3.14159;
  fVar6 = 3.1415925 - fVar5;
  if (fVar5 - (3.1415925 - fVar5) < 0.0) {
    fVar6 = fVar5;
  }
  fVar7 = -3.1415925 - fVar5;
  if ((-3.1415925 - fVar5) - fVar6 < 0.0) {
    fVar7 = fVar6;
  }
  fVar5 = fVar7 * fVar7;
  fVar6 = fVar5 * fVar5 * fVar7;
  fVar8 = fVar5 * fVar6;
  uVar10 = FastLerpColor
                     ((double)((fVar5 * fVar8 * 2.601887e-06 +
                               fVar8 * -0.0001980741 +
                               fVar6 * 0.0083330255 + fVar5 * fVar7 * -0.16666657 + fVar7) * 0.5 +
                              0.5),DAT_007aa740,DAT_007aa744);
  moby->field60_0x90 = uVar10;
  bVar2 = moby->state;
  puVar11 = (undefined4 *)(uint)bVar2;
  if (bVar2 == 0) {
    puVar11 = (undefined4 *)0xff;
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if (bVar2 < 2) {
    fVar5 = (moby->pos).y - g_heroPosition.y;
    fVar6 = (moby->pos).x - g_heroPosition.x;
    fVar7 = (moby->pos).z - g_heroPosition.z;
    puVar11 = &DAT_0027c758;
    if (SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5) < 16.0) {
      FastNormalizeRMtx4(&local_80,(longlong)(int)moby + 0xc0);
      fVar5 = g_heroPosition.y - (moby->pos).y;
      fVar6 = g_heroPosition.x - (moby->pos).x;
      fVar7 = g_heroPosition.z - (moby->pos).z;
      puVar11 = (undefined4 *)&DAT_007b0000;
      fVar9 = local_50 * g_heroPosition.w + local_60 * fVar7 + local_80 * fVar6 + local_70 * fVar5;
      fVar8 = local_4c * g_heroPosition.w + local_5c * fVar7 + local_7c * fVar6 + local_6c * fVar5;
      fVar5 = local_48 * g_heroPosition.w + local_58 * fVar7 + local_78 * fVar6 + local_68 * fVar5;
      if (((((DAT_007aa728 < fVar9) && (puVar11 = &DAT_007aa728, fVar9 < DAT_007aa72c)) &&
           (DAT_007aa730 < fVar8)) && ((fVar8 < DAT_007aa734 && (DAT_007aa738 < fVar5)))) &&
         (fVar5 < DAT_007aa73c)) {
        auVar15 = ZEXT416(0xffffffff);
        auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
        moby->state = '\x02';
        moby->setByGroup = '\x01';
        auVar16 = vectorShiftLeftIntegerWord(auVar15,auVar15);
        auVar15 = loadVectorLeftIndexed(0xffffffffffffa724,0x7b0000);
        auVar14 = vectorConvertFromSignedFixedPointWord(auVar15,0);
        auVar15 = loadVectorLeftIndexed(0x24,0x27c758);
        auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar17 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar15 = vectorAddFloatingPoint
                            (auVar14,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60);
        auVar15 = vectorMultiplyAddFloatingPoint(auVar17,auVar15,auVar16);
        auVar15 = vectorConvertToSignedFixedPointWordSaturate(auVar15,0);
        auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,0,
                           ZEXT48(pvVar3));
        *(undefined4 *)((uint)pvVar3 & 0xfffffffc) = uVar4;
        puVar11 = (undefined4 *)PlayMobySound(1,0,moby);
      }
    }
  }
  else if ((bVar2 < 3) &&
          (puVar11 = (undefined4 *)FastDecTimerS32(ZEXT48(pvVar3)),
          puVar11 != (undefined4 *)0x0)) {
    puVar11 = (undefined4 *)0x1;
    moby->state = '\x01';
    moby->setByGroup = '\0';
  }
  return puVar11;
}


