// game/update/moby1426.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x27ac98-0x27b16c
#include "game/update/moby1426.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/update.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"

// 0x027ac98 (0x454 bytes)
void M1426_0027ac98(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  ulonglong *puVar5;
  uint uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  uint uVar10;
  int iVar11;
  ulonglong unaff_r25;
  float *pfVar12;
  uint uVar13;
  ulonglong unaff_r26;
  float *pfVar14;
  float *pfVar15;
  ulonglong unaff_r27;
  float *pfVar16;
  ulonglong unaff_r28;
  uint *puVar17;
  ulonglong unaff_r29;
  float *pfVar18;
  ulonglong unaff_r30;
  longlong lVar19;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar25;
  ulonglong in_f26;
  double dVar26;
  ulonglong in_f27;
  double dVar27;
  ulonglong in_f28;
  double dVar28;
  ulonglong in_f29;
  double dVar29;
  ulonglong in_f30;
  double dVar30;
  ulonglong in_f31;
  double dVar31;
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar19 = uVar8 - 0x130;
  puVar5 = (ulonglong *)lVar19;
  *puVar5 = uVar8;
  puVar5[0x28] = in_LR;
  puVar5[0x1e] = in_f24;
  puVar5[0x1f] = in_f25;
  puVar5[0x20] = in_f26;
  puVar5[0x21] = in_f27;
  puVar5[0x22] = in_f28;
  puVar5[0x23] = in_f29;
  puVar5[0x24] = in_f30;
  puVar5[0x25] = in_f31;
  puVar5[0x1c] = unaff_r30;
  puVar5[0x1b] = unaff_r29;
  puVar5[0x14] = unaff_r22;
  uVar7 = worldUpdateTime;
  pfVar15 = *(float **)(param_1 + 0x78);
  puVar5[0x1d] = unaff_r31;
  puVar5[0x1a] = unaff_r28;
  puVar5[0x19] = unaff_r27;
  puVar5[0x18] = unaff_r26;
  puVar5[0x17] = unaff_r25;
  puVar5[0x16] = unaff_r24;
  puVar5[0x15] = unaff_r23;
  puVar5[0x13] = unaff_r21;
  dVar20 = (double)FastIntToDouble(uVar7);
  dVar31 = (double)(float)((double)(float)((double)DAT_007aa63c * (double)g_FrameTime) *
                          dVar20);
  uVar9 = GetEffectTex(dVar20,(double)DAT_007aa63c,(double)g_FrameTime,DAT_007aa628)
  ;
  SetGSReg(0x18,uVar9);
  uVar9 = idol_draw::PackCmd(0,1,0,1,DAT_007aa624);
  SetGSReg(3,uVar9);
  uVar9 = FUN_00502f08(0,0,0,0,0,0);
  SetGSReg(6,uVar9);
  uVar9 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  SetGSReg(0x1a,uVar9);
  *pfVar15 = pfVar15[1];
  dVar20 = (double)FastWrapRot
                             (pfVar15[1],
                              (360.0 / (DAT_007aa634 * animationSpeed)) * 0.017453292 *
                              g_FrameTime);
  pfVar15[1] = (float)dVar20;
  MB_GetLights(param_1,uVar8 - 0xc0,uVar8 - 0xbc,uVar8 - 0xb8);
  iVar11 = *(int *)(puVar5 + 0xf);
  iVar4 = *(int *)((int)puVar5 + 0x74);
  uVar10 = 0;
  pfVar12 = (float *)&DAT_00facc90;
  uVar13 = *(uint *)(puVar5 + 0xe);
  dVar20 = 6.2831854820251465;
  uVar6 = DAT_007aa62c << 0x18;
  dVar25 = 3.141592502593994;
  dVar26 = -3.141592502593994;
  dVar27 = -0.16666656732559204;
  dVar28 = 0.008333025500178337;
  dVar29 = -0.0001980741071747616;
  dVar30 = 2.601886990305502e-06;
  pfVar14 = (float *)&DAT_00facc94;
  pfVar16 = (float *)&DAT_00facc98;
  puVar17 = &DAT_00fad014;
  pfVar18 = (float *)&DAT_007aa1e0;
  do {
    dVar21 = (double)FastFMod((double)SQRT(*pfVar18 * *pfVar18 + pfVar18[1] * pfVar18[1]),
                                        (double)DAT_007aa630);
    dVar21 = (double)FastAddRots((float)(dVar21 * dVar20) / DAT_007aa630);
    dVar22 = (double)FastWrapRot((float)dVar21,pfVar15[1]);
    fVar1 = *pfVar18;
    fVar2 = pfVar18[1];
    uVar10 = uVar10 + 1;
    dVar21 = (double)(float)(dVar25 - dVar22);
    if (dVar22 - (double)(float)(dVar25 - dVar22) < 0.0) {
      dVar21 = dVar22;
    }
    fVar3 = pfVar18[2];
    pfVar18 = pfVar18 + 3;
    *pfVar12 = fVar1 + *(float *)(param_1 + 0x10);
    fVar1 = DAT_007aa638;
    pfVar12 = pfVar12 + 3;
    dVar23 = (double)(float)(dVar26 - dVar22);
    if ((double)(float)(dVar26 - dVar22) - dVar21 < 0.0) {
      dVar23 = dVar21;
    }
    *pfVar14 = fVar2 + *(float *)(param_1 + 0x14);
    fVar2 = *(float *)(param_1 + 0x18);
    dVar21 = (double)(float)(dVar23 * dVar23);
    *puVar17 = uVar6 | iVar11 << 0x10 | iVar4 << 8 | uVar13;
    pfVar14 = pfVar14 + 3;
    puVar17 = puVar17 + 1;
    dVar22 = (double)(float)(dVar21 * (double)(float)(dVar21 * dVar23));
    dVar24 = (double)(float)(dVar21 * dVar22);
    *pfVar16 = fVar1 * (float)((double)(float)(dVar21 * dVar24) * dVar30 +
                              (double)(float)(dVar24 * dVar29 +
                                             (double)(float)(dVar22 * dVar28 +
                                                            (double)(float)((double)(float)(dVar21 *
                                                                                           dVar23) *
                                                                            dVar27 + dVar23)))) +
               fVar3 + fVar2;
    pfVar16 = pfVar16 + 3;
  } while (uVar10 < 0x2d);
  iVar11 = 0;
  uVar9 = 0x3ff0000000000000;
  do {
    uVar13 = 0;
    pfVar15 = (float *)&DAT_007aa3fc;
    pfVar12 = (float *)&DAT_00faceac;
    pfVar14 = (float *)&DAT_007aa400;
    pfVar16 = (float *)&DAT_00faceb0;
    do {
      *(undefined4 *)((int)puVar5 + 0x7c) = 0x3f800000;
      *(undefined4 *)((int)puVar5 + 0x84) = 0x3f800000;
      *(undefined4 *)(puVar5 + 0x10) = 0xbf20d97c;
      fVar1 = *(float *)((int)lVar19 + 0x7c);
      *(undefined4 *)(puVar5 + 0x11) = 0x3f20d97c;
      dVar20 = (double)FastFMod((double)(float)((double)fVar1 * dVar31),uVar9);
      fVar1 = *(float *)((int)lVar19 + 0x80);
      *pfVar12 = (float)((double)*pfVar15 + dVar20);
      dVar20 = (double)FastFMod((double)(float)((double)fVar1 * dVar31),uVar9);
      fVar1 = *pfVar14;
      uVar13 = uVar13 + 1;
      pfVar15 = pfVar15 + 2;
      pfVar12 = pfVar12 + 2;
      pfVar14 = pfVar14 + 2;
      *pfVar16 = (float)((double)fVar1 + dVar20);
      pfVar16 = pfVar16 + 2;
    } while (uVar13 < 0x2d);
    STUB_00071170();
    DrawMeshSet(DAT_007aa1c0,PTR_DAT_007aa618,PTR_DAT_007aa620,PTR_DAT_007aa61c,9);
    iVar11 = iVar11 + 1;
    lVar19 = lVar19 + 8;
  } while (iVar11 < 2);
  return;
}


// 0x027b0ec (0x80 bytes)
/* Moby 1426 */

void UpdateMoby_1426(MobyInstance *moby)

{
  if (moby->state == '\0') {
    SetColorOfMoby(moby,0x40,0x40,0x40);
    moby->state = '\x01';
  }
  else {
    RegisterPostDraw(&PTR_M1426_0027ac98_0070a5d8,moby);
    moby->drawDistance = 0;
    moby->modeBits = moby->modeBits | DISABLED;
  }
  return;
}


