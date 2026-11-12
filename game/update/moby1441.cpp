// game/update/moby1441.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x27ecd0-0x27f360
#include "game/update/moby1441.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update.h"
#include "idol/fastfunc.h"

// 0x027ecd0 (0x304 bytes)
// inlined: FastRSqrt @0x27ed70
void M1441_0027ecd0(void)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  GPiece<64> local_e0;
  float local_a0 [36];
  
  GetEffectTex(0xb);
  idol_draw::PackCmd(0,2,0,1,0x80);
  SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SCE_GS_SET_CLAMP(1,1,0,0,0,0);
  pfVar3 = local_a0;
  lVar4 = 4;
  pfVar2 = (float *)&DAT_007aa7e0;
  do {
    *pfVar3 = *pfVar2 * 0.2;
    pfVar3[1] = pfVar2[1] * 0.2;
    pfVar3[2] = pfVar2[2] * 0.2;
    pfVar1 = pfVar2 + 3;
    pfVar2 = pfVar2 + 4;
    pfVar3[3] = *pfVar1;
    pfVar3 = pfVar3 + 4;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  FastDrawQuad(local_a0,local_e0,0,EffectTexHeaders,9);
  return;
}


// 0x027efd4 (0x14 bytes)
void M1441_0027efd4(void)

{
  DAT_007aa86c = 0x10000;
  return;
}


// 0x027f018 (0x348 bytes)
/* Moby 1441 */

void UpdateMoby_1441(MobyInstance *moby)

{
  byte bVar1;
  void *pvVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  
  pvVar2 = moby->pVar;
  iVar10 = (int)(animationSpeed * 30.5);
  dVar11 = (double)FastIntToDouble(worldUpdateTime - (worldUpdateTime / iVar10) * iVar10);
  dVar12 = (double)FastIntToDouble(iVar10);
  fVar4 = (float)(dVar11 / dVar12) * 6.28318 - 3.14159;
  fVar5 = 3.1415925 - fVar4;
  if (fVar4 - (3.1415925 - fVar4) < 0.0) {
    fVar5 = fVar4;
  }
  fVar6 = -3.1415925 - fVar4;
  if ((-3.1415925 - fVar4) - fVar5 < 0.0) {
    fVar6 = fVar5;
  }
  fVar4 = fVar6 * fVar6;
  fVar5 = fVar4 * fVar4 * fVar6;
  fVar7 = fVar4 * fVar5;
  uVar9 = FastLerpColor
                    ((double)((fVar4 * fVar7 * 2.601887e-06 +
                              fVar7 * -0.0001980741 +
                              fVar5 * 0.0083330255 + fVar4 * fVar6 * -0.16666657 + fVar6) * 0.5 +
                             0.5),DAT_007aa8ac,DAT_007aa8b0);
  moby->field60_0x90 = uVar9;
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    fVar4 = (moby->pos).y - g_heroPosition.y;
    fVar5 = (moby->pos).x - g_heroPosition.x;
    fVar6 = (moby->pos).z - g_heroPosition.z;
    if (SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) < 16.0) {
      FastNormalizeRMtx4(&local_80,(longlong)(int)moby + 0xc0);
      fVar4 = g_heroPosition.y - (moby->pos).y;
      fVar5 = g_heroPosition.x - (moby->pos).x;
      fVar6 = g_heroPosition.z - (moby->pos).z;
      fVar8 = local_60 * fVar6 + local_80 * fVar5 + local_70 * fVar4;
      fVar7 = local_5c * fVar6 + local_7c * fVar5 + local_6c * fVar4;
      fVar4 = local_58 * fVar6 + local_78 * fVar5 + local_68 * fVar4;
      if (((((DAT_007aa894 < fVar8) && (fVar8 < DAT_007aa898)) && (DAT_007aa89c < fVar7)) &&
          ((fVar7 < DAT_007aa8a0 && (DAT_007aa8a4 < fVar4)))) && (fVar4 < DAT_007aa8a8)) {
        PlayMobySound(1,0,moby);
        auVar14 = ZEXT416(0xffffffff);
        auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
        moby->state = '\x02';
        moby->setByGroup = '\x01';
        auVar15 = vectorShiftLeftIntegerWord(auVar14,auVar14);
        auVar14 = loadVectorLeftIndexed(0xffffffffffffa890,0x7b0000);
        auVar13 = vectorConvertFromSignedFixedPointWord(auVar14,0);
        auVar14 = loadVectorLeftIndexed(0x24,0x27efe8);
        auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar14 = vectorAddFloatingPoint
                            (auVar13,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60);
        auVar14 = vectorMultiplyAddFloatingPoint(auVar16,auVar14,auVar15);
        auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
        auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar3 = storeVectorElementWordIndexed
                          (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,0,
                           ZEXT48(pvVar2));
        *(undefined4 *)((uint)pvVar2 & 0xfffffffc) = uVar3;
      }
    }
  }
  else if ((bVar1 < 3) && (iVar10 = FastDecTimerS32(ZEXT48(pvVar2)), iVar10 != 0)) {
    moby->state = '\x01';
    moby->setByGroup = '\0';
  }
  return;
}


