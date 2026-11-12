// game/update/moby1567.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x29db20-0x29dffc
#include "game/update/moby1567.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/update.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"

// 0x029db20 (0x45c bytes)
void M1567_0029db20(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  ulonglong *puVar5;
  uint uVar6;
  float fVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  uint uVar11;
  int iVar12;
  ulonglong unaff_r25;
  float *pfVar13;
  uint uVar14;
  ulonglong unaff_r26;
  float *pfVar15;
  float *pfVar16;
  ulonglong unaff_r27;
  float *pfVar17;
  ulonglong unaff_r28;
  uint *puVar18;
  ulonglong unaff_r29;
  float *pfVar19;
  ulonglong unaff_r30;
  longlong lVar20;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar26;
  ulonglong in_f26;
  double dVar27;
  ulonglong in_f27;
  double dVar28;
  ulonglong in_f28;
  double dVar29;
  ulonglong in_f29;
  double dVar30;
  ulonglong in_f30;
  double dVar31;
  ulonglong in_f31;
  double dVar32;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar20 = uVar9 - 0x130;
  puVar5 = (ulonglong *)lVar20;
  *puVar5 = uVar9;
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
  uVar8 = worldUpdateTime;
  pfVar16 = *(float **)(param_1 + 0x78);
  puVar5[0x1d] = unaff_r31;
  puVar5[0x1a] = unaff_r28;
  puVar5[0x19] = unaff_r27;
  puVar5[0x18] = unaff_r26;
  puVar5[0x17] = unaff_r25;
  puVar5[0x16] = unaff_r24;
  puVar5[0x15] = unaff_r23;
  puVar5[0x13] = unaff_r21;
  dVar21 = (double)FastIntToDouble(uVar8);
  dVar32 = (double)(float)((double)(float)((double)DAT_007ac764 * (double)g_FrameTime) *
                          dVar21);
  uVar10 = GetEffectTex(dVar21,(double)DAT_007ac764,(double)g_FrameTime,DAT_007ac750
                             );
  SetGSReg(0x18,uVar10);
  uVar10 = idol_draw::PackCmd(0,1,0,1,DAT_007ac74c);
  SetGSReg(3,uVar10);
  uVar10 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  SetGSReg(6,uVar10);
  uVar10 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SetGSReg(0x1a,uVar10);
  *pfVar16 = pfVar16[1];
  dVar21 = (double)FastWrapRot
                             (pfVar16[1],
                              (360.0 / (DAT_007ac75c * animationSpeed)) * 0.017453292 *
                              g_FrameTime);
  pfVar16[1] = (float)dVar21;
  MB_GetLights(param_1,uVar9 - 0xc0,uVar9 - 0xbc,uVar9 - 0xb8);
  iVar12 = *(int *)(puVar5 + 0xf);
  iVar4 = *(int *)((int)puVar5 + 0x74);
  uVar11 = 0;
  pfVar13 = (float *)&DAT_00fae020;
  uVar14 = *(uint *)(puVar5 + 0xe);
  dVar21 = 6.2831854820251465;
  uVar6 = DAT_007ac754 << 0x18;
  dVar26 = 3.141592502593994;
  dVar27 = -3.141592502593994;
  dVar28 = -0.16666656732559204;
  dVar29 = 0.008333025500178337;
  dVar30 = -0.0001980741071747616;
  dVar31 = 2.601886990305502e-06;
  pfVar15 = (float *)&DAT_00fae024;
  pfVar17 = (float *)&DAT_00fae028;
  puVar18 = &DAT_00fae700;
  pfVar19 = (float *)&DAT_007abf00;
  do {
    dVar22 = (double)FastFMod((double)SQRT(*pfVar19 * *pfVar19 + pfVar19[1] * pfVar19[1]),
                                        (double)DAT_007ac758);
    dVar22 = (double)FastAddRots((float)(dVar22 * dVar21) / DAT_007ac758);
    dVar23 = (double)FastWrapRot((float)dVar22,pfVar16[1]);
    fVar7 = DAT_007ac768;
    fVar1 = *pfVar19;
    uVar11 = uVar11 + 1;
    dVar22 = (double)(float)(dVar26 - dVar23);
    if (dVar23 - (double)(float)(dVar26 - dVar23) < 0.0) {
      dVar22 = dVar23;
    }
    fVar2 = pfVar19[1];
    fVar3 = pfVar19[2];
    pfVar19 = pfVar19 + 3;
    *pfVar13 = DAT_007ac768 * fVar1 + *(float *)(param_1 + 0x10);
    fVar1 = DAT_007ac760;
    pfVar13 = pfVar13 + 3;
    dVar24 = (double)(float)(dVar27 - dVar23);
    if ((double)(float)(dVar27 - dVar23) - dVar22 < 0.0) {
      dVar24 = dVar22;
    }
    dVar22 = (double)(float)(dVar24 * dVar24);
    *pfVar15 = fVar7 * fVar2 + *(float *)(param_1 + 0x14);
    fVar2 = *(float *)(param_1 + 0x18);
    pfVar15 = pfVar15 + 3;
    *puVar18 = uVar6 | iVar12 << 0x10 | iVar4 << 8 | uVar14;
    puVar18 = puVar18 + 1;
    dVar23 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar24));
    dVar25 = (double)(float)(dVar22 * dVar23);
    *pfVar17 = fVar1 * (float)((double)(float)(dVar22 * dVar25) * dVar31 +
                              (double)(float)(dVar25 * dVar30 +
                                             (double)(float)(dVar23 * dVar29 +
                                                            (double)(float)((double)(float)(dVar22 *
                                                                                           dVar24) *
                                                                            dVar28 + dVar24)))) +
               fVar7 * fVar3 + fVar2;
    pfVar17 = pfVar17 + 3;
  } while (uVar11 < 0x58);
  iVar12 = 0;
  uVar10 = 0x3ff0000000000000;
  do {
    uVar14 = 0;
    pfVar16 = (float *)&DAT_007ac320;
    pfVar13 = (float *)&DAT_00fae440;
    pfVar15 = (float *)&DAT_007ac324;
    pfVar17 = (float *)&DAT_00fae444;
    do {
      *(undefined4 *)((int)puVar5 + 0x7c) = 0x3f800000;
      *(undefined4 *)((int)puVar5 + 0x84) = 0x3f800000;
      *(undefined4 *)(puVar5 + 0x10) = 0xbf20d97c;
      fVar1 = *(float *)((int)lVar20 + 0x7c);
      *(undefined4 *)(puVar5 + 0x11) = 0x3f20d97c;
      dVar21 = (double)FastFMod((double)(float)((double)fVar1 * dVar32),uVar10);
      fVar1 = *(float *)((int)lVar20 + 0x80);
      *pfVar13 = (float)((double)*pfVar16 + dVar21);
      dVar21 = (double)FastFMod((double)(float)((double)fVar1 * dVar32),uVar10);
      fVar1 = *pfVar15;
      uVar14 = uVar14 + 1;
      pfVar16 = pfVar16 + 2;
      pfVar13 = pfVar13 + 2;
      pfVar15 = pfVar15 + 2;
      *pfVar17 = (float)((double)fVar1 + dVar21);
      pfVar17 = pfVar17 + 2;
    } while (uVar14 < 0x58);
    STUB_00071170();
    DrawMeshSet(DAT_007abee0,PTR_DAT_007ac740,PTR_DAT_007ac748,PTR_DAT_007ac744,9);
    iVar12 = iVar12 + 1;
    lVar20 = lVar20 + 8;
  } while (iVar12 < 2);
  return;
}


// 0x029df7c (0x80 bytes)
/* Moby 1567 */

void UpdateMoby_1567(MobyInstance *moby)

{
  if (moby->state == '\0') {
    SetColorOfMoby(moby,0x40,0x40,0x40);
    moby->state = '\x01';
  }
  else {
    RegisterPostDraw(&PTR_M1567_0029db20_0070aae0,moby);
    moby->drawDistance = 0;
    moby->modeBits = moby->modeBits | DISABLED;
  }
  return;
}


