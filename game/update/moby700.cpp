// game/update/moby700.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x427f88-0x428564
#include "game/update/moby700.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update/moby200.h"
#include "idol/fastfunc.h"

// 0x0427f88 (0x14 bytes)
void M700_00427f88(void)

{
  DAT_00857ae0 = 0x10000;
  return;
}


// 0x0427ff0 (0x574 bytes)
/* Moby 700 */

void UpdateMoby_700(MobyInstance *moby)

{
  float fVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar9;
  longlong lVar8;
  int iVar10;
  ulonglong uVar11;
  undefined8 in_LR;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> local_110;
  GPiece<16> local_100;
  undefined4 local_f0 [6];
  longlong local_d8;
  
  piVar2 = (int *)moby->pVar;
  uVar11 = ZEXT48(piVar2);
  FastDecTimerS16(uVar11 + 4);
  FastDecTimerS16(uVar11 + 6);
  if (*piVar2 != 0) {
    iVar9 = FastDecTimerS32(uVar11);
    if (iVar9 != 0) {
      auVar25 = ZEXT416(0xffffffff);
      auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
      auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
      auVar25 = loadVectorLeftIndexed(in_LR,0x427fa0);
      auVar27 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar25 = vectorMultiplyAddFloatingPoint
                          (auVar27,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                           auVar26);
      auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
      auVar25 = vectorSplatHalfWord(auVar25,1);
      uVar4 = storeVectorElementHalfWordIndexed(auVar25,4,uVar11);
      *(undefined2 *)(piVar2 + 1) = uVar4;
    }
    if ((*(short *)((int)piVar2 + 6) == 0) && (iVar9 = MB_randInt(100), iVar9 < 5)) {
      dVar24 = -0.5;
      dVar23 = 0.0;
      dVar16 = 0.5;
      dVar12 = (double)MB_randRangeFloat
                                 (g_FrameTime * -0.5,g_FrameTime * 0.5);
      dVar24 = (double)MB_randRangeFloat
                                 ((float)((double)g_FrameTime * dVar24),
                                  (float)((double)g_FrameTime * dVar16));
      dVar13 = (double)MB_randRangeFloat((float)dVar23,0.25);
      dVar14 = (double)MB_randRot();
      fVar1 = (float)(dVar14 + 1.570796251296997);
      dVar16 = (double)(float)(3.141592502593994 - dVar14);
      if (dVar14 - (double)(float)(3.141592502593994 - dVar14) < 0.0) {
        dVar16 = dVar14;
      }
      fVar5 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar5 = fVar1;
      }
      dVar20 = (double)(float)(-3.141592502593994 - dVar14);
      if ((double)(float)(-3.141592502593994 - dVar14) - dVar16 < 0.0) {
        dVar20 = dVar16;
      }
      dVar22 = (double)(moby->pos).x;
      dVar21 = (double)(moby->pos).y;
      dVar14 = (double)(moby->pos).z;
      dVar16 = (double)(float)piVar2[3];
      fVar6 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
        fVar6 = fVar5;
      }
      dVar17 = (double)(float)(dVar20 * dVar20);
      fVar7 = fVar6 * fVar6;
      dVar19 = (double)(float)(dVar17 * (double)(float)(dVar17 * dVar20));
      fVar1 = fVar7 * fVar7 * fVar6;
      dVar18 = (double)(float)(dVar17 * dVar19);
      fVar5 = fVar7 * fVar1;
      dVar17 = (double)((float)(dVar17 * dVar18) * 2.601887e-06 +
                       (float)(dVar18 * -0.0001980741071747616 +
                              (double)(float)(dVar19 * 0.008333025500178337 +
                                             (double)(float)((double)(float)(dVar17 * dVar20) *
                                                             -0.16666656732559204 + dVar20))));
      dVar20 = (double)(fVar7 * fVar5 * 2.601887e-06 +
                       fVar5 * -0.0001980741 +
                       fVar1 * 0.0083330255 + fVar7 * fVar6 * -0.16666657 + fVar6);
      lVar8 = MB_randInt(3);
      local_f0[2] = 0x2ba;
      local_f0[1] = 0x2b9;
      local_f0[0] = 0x2b8;
      uVar15 = 0x3fa99999a0000000;
      uVar3 = *(undefined4 *)((int)local_f0 + (int)(lVar8 << 2));
      MB_randRange(0x3fa99999a0000000,0xb4,300);
      fVar1 = (float)(dVar20 * dVar13 + dVar22);
      FUN_00425540(uVar15,0x3ff0000000000000,0x3ff0000000000000,0x3fe8000000000000,
                   CONCAT44(fVar1,(float)(dVar17 * dVar13 + dVar21)),
                   CONCAT44((float)(dVar14 + dVar16),fVar1),CONCAT44((float)dVar12,(float)dVar24),
                   CONCAT44((float)dVar23,(float)dVar23),uVar3);
    }
    iVar9 = 0;
    dVar16 = 0.0;
    dVar12 = -0.5;
    dVar24 = 0.5;
    dVar13 = 3.0;
    dVar14 = 0.25;
    dVar23 = 70000.0;
    dVar20 = 140000.0;
    dVar21 = 180.5;
    do {
      MB_randRangeFloat
                ((float)((double)g_FrameTime * dVar12),
                 (float)((double)g_FrameTime * dVar24));
      MB_randRangeFloat
                ((float)((double)g_FrameTime * dVar12),
                 (float)((double)g_FrameTime * dVar24));
      MB_randRangeFloat((float)dVar16,(float)((double)g_FrameTime * dVar13));
      MB_randRangeFloat((float)dVar16,(float)dVar14);
      MB_randRot();
      uVar15 = MB_randRangeFloat((float)dVar23,(float)dVar20);
      local_d8 = (longlong)(int)((double)animationSpeed * dVar21);
      MB_randInt(3);
      local_f0[3] = 0;
      local_f0[5] = 2;
      local_f0[4] = 1;
      iVar10 = SpawnPart_16(uVar15,local_100,local_110,0xf081020,&DAT_00081020);
      if (iVar10 != 0) {
        *(float *)(iVar10 + 0x2c) = (float)((double)(moby->pos).z - dVar24);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 2);
  }
  return;
}


