// game/update/moby875.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x49e5d0-0x49ea70
// shared update function UpdateMoby_{875_1080}; registered for oClasses 875, 1080
#include "game/update/moby875.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// shared update function, registered for oClasses 875, 1080
// 0x049e5d0 (0x48c bytes)
/* Moby 875
   Moby 1080 */

void UpdateMoby_875(MobyInstance *moby)

{
  byte bVar1;
  void *pvVar2;
  undefined2 uVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  float fVar22;
  float fVar23;
  Vec4 local_80;
  
  if (moby == (MobyInstance *)0x0) {
    return;
  }
  pvVar2 = moby->pVar;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  bVar1 = moby->state;
  dVar14 = (double)(moby->pos).x;
  dVar15 = (double)(moby->pos).y;
  dVar16 = (double)(moby->pos).z;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined4 *)((int)pvVar2 + 0x20) = 0;
      *(undefined2 *)((int)pvVar2 + 0x24) = 0;
      *(undefined1 *)((int)pvVar2 + 0x28) = 4;
      *(undefined2 *)((int)pvVar2 + 0x3e) = 0xd;
      SetColorOfMoby(moby,0x50,0x40,0x10);
      dVar17 = -0.03490658476948738;
      dVar12 = 0.03490658476948738;
      dVar7 = (double)MB_randRangeFloat(-0.034906585,0.034906585);
      (moby->rotation).x = (float)((double)(moby->rotation).x + dVar7);
      dVar7 = (double)MB_randRangeFloat((float)dVar17,(float)dVar12);
      (moby->rotation).y = (float)((double)(moby->rotation).y + dVar7);
      dVar7 = (double)MB_randRangeFloat(-0.02,0.02);
      fVar23 = (moby->pos).z;
      moby->state = '\x01';
      (moby->pos).z = (float)((double)fVar23 + dVar7);
    }
    else {
      if ((g_heroStateType == 3) || (g_heroState == EDGE_JUMP)) {
        if (DAT_0096a1d8 != moby) goto LAB_0049e9d4;
      }
      else if ((g_framesNotGrounded != 0) || (g_standingOnMoby != moby)) goto LAB_0049e9d4;
      auVar19 = ZEXT416(0xffffffff);
      auVar19 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
      *(f32 *)((int)pvVar2 + 0xa8) = (moby->rotation).x;
      *(f32 *)((int)pvVar2 + 0xac) = (moby->rotation).y;
      auVar20 = vectorShiftLeftIntegerWord(auVar19,auVar19);
      auVar19 = loadVectorLeftIndexed(0x10,0x49e580);
      auVar19 = auVar19 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar21 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar19 = vectorMultiplyAddFloatingPoint
                          (auVar21,auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,
                           auVar20);
      auVar19 = vectorConvertToSignedFixedPointWordSaturate(auVar19,0);
      auVar19 = vectorSplatHalfWord(auVar19,1);
      uVar3 = storeVectorElementHalfWordIndexed(auVar19,0xa0,ZEXT48(pvVar2));
      *(undefined2 *)((int)pvVar2 + 0xa0) = uVar3;
      if (*(short *)((int)pvVar2 + 0xa2) != -1) {
        PlayMobySound((int)*(short *)((int)pvVar2 + 0xa2),0,moby);
      }
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    dVar7 = (double)FastIntToDouble(*(undefined2 *)((int)pvVar2 + 0xa0));
    fVar22 = MB_WrapRot((float)(dVar7 * 0.75));
    dVar18 = 3.141592502593994;
    dVar13 = -3.141592502593994;
    dVar7 = -0.16666656732559204;
    dVar11 = 0.008333025500178337;
    dVar10 = -0.0001980741071747616;
    dVar17 = 2.601886990305502e-06;
    dVar12 = 0.01745329238474369;
    fVar23 = 3.1415925 - fVar22;
    if (fVar22 - (3.1415925 - fVar22) < 0.0) {
      fVar23 = fVar22;
    }
    fVar5 = -3.1415925 - fVar22;
    if ((-3.1415925 - fVar22) - fVar23 < 0.0) {
      fVar5 = fVar23;
    }
    fVar4 = fVar5 * fVar5;
    fVar23 = fVar4 * fVar4 * fVar5;
    fVar22 = fVar4 * fVar23;
    (moby->rotation).x =
         (fVar4 * fVar22 * 2.601887e-06 +
         fVar22 * -0.0001980741 + fVar23 * 0.0083330255 + fVar4 * fVar5 * -0.16666657 + fVar5) *
         0.017453292;
    dVar8 = (double)FastIntToDouble(*(undefined2 *)((int)pvVar2 + 0xa0));
    fVar23 = MB_WrapRot((float)(dVar8 * 0.8899999856948853));
    dVar9 = (double)(fVar23 + 1.5707963);
    dVar8 = (double)(float)(dVar18 - dVar9);
    if (dVar9 - (double)(float)(dVar18 - dVar9) < 0.0) {
      dVar8 = dVar9;
    }
    fVar23 = (moby->pos).z;
    dVar18 = (double)(float)(dVar13 - dVar9);
    if ((double)(float)(dVar13 - dVar9) - dVar8 < 0.0) {
      dVar18 = dVar8;
    }
    dVar13 = (double)(float)(dVar18 * dVar18);
    dVar9 = (double)(float)(dVar13 * (double)(float)(dVar13 * dVar18));
    dVar8 = (double)(float)(dVar13 * dVar9);
    (moby->rotation).y =
         (float)((double)(float)((double)(float)(dVar13 * dVar8) * dVar17 +
                                (double)(float)(dVar8 * dVar10 +
                                               (double)(float)(dVar9 * dVar11 +
                                                              (double)(float)((double)(float)(dVar13
                                                                                             * 
                                                  dVar18) * dVar7 + dVar18)))) * dVar12);
    dVar7 = 0.0020000000949949026;
    (moby->pos).z = -(DAT_0071f408 * 0.002 - fVar23);
    iVar6 = FastDecTimerS16(ZEXT48(pvVar2) + 0xa0);
    if (iVar6 != 0) {
      *(float *)((int)pvVar2 + 0xa4) = (float)((double)DAT_0071f408 * dVar7);
      moby->state = '\x03';
    }
  }
  else if (bVar1 < 4) {
    fVar23 = (moby->rotation).x;
    fVar5 = (1.3962634 - fVar23) * 0.05;
    fVar22 = 3.1415925 - fVar5;
    if (fVar5 - (3.1415925 - fVar5) < 0.0) {
      fVar22 = fVar5;
    }
    fVar4 = -3.1415925 - fVar5;
    if ((-3.1415925 - fVar5) - fVar22 < 0.0) {
      fVar4 = fVar22;
    }
    (moby->rotation).x = fVar23 + fVar5;
    fVar23 = fVar4 * fVar4;
    fVar22 = fVar23 * fVar23 * fVar4;
    fVar5 = fVar23 * fVar22;
    (moby->pos).z =
         -(float)((double)(fVar23 * fVar5 * 2.601887e-06 +
                          fVar5 * -0.0001980741 +
                          fVar22 * 0.0083330255 + fVar23 * fVar4 * -0.16666657 + fVar4) * 2.0 -
                 dVar16);
    fVar23 = DAT_0071f418 * 9.8 + *(float *)((int)pvVar2 + 0xa4);
    *(float *)((int)pvVar2 + 0xa4) = fVar23;
    fVar23 = (moby->pos).z - fVar23;
    (moby->pos).z = fVar23;
    if (fVar23 < 2.0) {
      DeleteMoby(moby);
      return;
    }
  }
LAB_0049e9d4:
  local_80.x = (float)((double)(moby->pos).x - dVar14);
  local_80.y = (float)((double)(moby->pos).y - dVar15);
  local_80.w = (moby->pos).w;
  local_80.z = (float)((double)(moby->pos).z - dVar16);
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar2 + 0x60),&local_80,(longlong)(int)moby + 0x40,
             (longlong)(int)moby + 0x40);
  return;
}


// 0x049ea5c (0x14 bytes)
void M1080_0049ea5c(void)

{
  DAT_008c802c = 0x10000;
  return;
}


