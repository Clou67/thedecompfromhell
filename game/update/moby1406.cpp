// game/update/moby1406.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x26e9a0-0x26eea8
#include "game/update/moby1406.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/update.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"

// 0x026e9a0 (0x488 bytes)
void M1406_0026e9a0(int param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  ulonglong *puVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  int iVar11;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  uint *puVar12;
  ulonglong unaff_r23;
  float *pfVar14;
  longlong lVar13;
  ulonglong unaff_r24;
  float *pfVar15;
  float *pfVar16;
  ulonglong unaff_r25;
  float *pfVar17;
  float *pfVar18;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int iVar19;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  int iVar20;
  ulonglong unaff_r31;
  int iVar21;
  ulonglong in_LR;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar27;
  ulonglong in_f26;
  double dVar28;
  ulonglong in_f27;
  double dVar29;
  ulonglong in_f28;
  double dVar30;
  ulonglong in_f29;
  double dVar31;
  ulonglong in_f30;
  double dVar32;
  ulonglong in_f31;
  double dVar33;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar13 = uVar9 - 0x130;
  puVar6 = (ulonglong *)lVar13;
  *puVar6 = uVar9;
  puVar6[0x28] = in_LR;
  puVar6[0x1e] = in_f24;
  puVar6[0x1f] = in_f25;
  puVar6[0x20] = in_f26;
  puVar6[0x21] = in_f27;
  puVar6[0x22] = in_f28;
  puVar6[0x23] = in_f29;
  puVar6[0x24] = in_f30;
  puVar6[0x25] = in_f31;
  puVar6[0x1d] = unaff_r31;
  puVar6[0x1b] = unaff_r29;
  puVar6[0x1c] = unaff_r30;
  uVar8 = worldUpdateTime;
  pfVar16 = *(float **)(param_1 + 0x78);
  puVar6[0x1a] = unaff_r28;
  puVar6[0x19] = unaff_r27;
  puVar6[0x18] = unaff_r26;
  puVar6[0x17] = unaff_r25;
  puVar6[0x16] = unaff_r24;
  puVar6[0x15] = unaff_r23;
  puVar6[0x14] = unaff_r22;
  puVar6[0x13] = unaff_r21;
  puVar6[0x12] = unaff_r20;
  dVar22 = (double)FastIntToDouble(uVar8);
  dVar33 = (double)(float)((double)(float)((double)DAT_0079f5b8 * (double)g_FrameTime) *
                          dVar22);
  uVar10 = GetEffectTex(dVar22,(double)DAT_0079f5b8,(double)g_FrameTime,DAT_0079f5a4
                             );
  SetGSReg(0x18,uVar10);
  uVar10 = idol_draw::PackCmd(0,1,0,1,DAT_0079f5a0);
  SetGSReg(3,uVar10);
  uVar10 = FUN_00502f08(0,0,0,0,0,0);
  SetGSReg(6,uVar10);
  uVar10 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  SetGSReg(0x1a,uVar10);
  *pfVar16 = pfVar16[1];
  dVar22 = (double)FastWrapRot
                             (pfVar16[1],
                              (360.0 / (DAT_0079f5b0 * animationSpeed)) * 0.017453292 *
                              g_FrameTime);
  pfVar16[1] = (float)dVar22;
  MB_GetLights(param_1,uVar9 - 0xc0,uVar9 - 0xbc,uVar9 - 0xb8);
  iVar21 = *(int *)(puVar6 + 0xf);
  iVar20 = *(int *)((int)puVar6 + 0x74);
  iVar19 = 0;
  uVar5 = *(uint *)(puVar6 + 0xe);
  uVar7 = DAT_0079f5a8 << 0x18;
  iVar11 = DAT_0079ee80;
  if (0 < DAT_0079ee80) {
    pfVar17 = (float *)&DAT_00fa9acc;
    pfVar18 = (float *)&DAT_0079eea0;
    dVar32 = 6.2831854820251465;
    pfVar15 = (float *)&DAT_00fa9ad0;
    dVar31 = 3.141592502593994;
    pfVar14 = (float *)&DAT_00fa9ad4;
    dVar30 = -3.141592502593994;
    puVar12 = &DAT_00faa1c0;
    dVar29 = -0.16666656732559204;
    dVar28 = 0.008333025500178337;
    dVar27 = -0.0001980741071747616;
    dVar22 = 2.601886990305502e-06;
    do {
      dVar23 = (double)FastFMod((double)SQRT(*pfVar18 * *pfVar18 + pfVar18[1] * pfVar18[1]
                                                      ),(double)DAT_0079f5ac);
      dVar23 = (double)FastAddRots((float)(dVar23 * dVar32) / DAT_0079f5ac);
      dVar24 = (double)FastWrapRot((float)dVar23,pfVar16[1]);
      fVar2 = *pfVar18;
      iVar19 = iVar19 + 1;
      dVar23 = (double)(float)(dVar31 - dVar24);
      if (dVar24 - (double)(float)(dVar31 - dVar24) < 0.0) {
        dVar23 = dVar24;
      }
      fVar3 = pfVar18[1];
      fVar4 = pfVar18[2];
      pfVar18 = pfVar18 + 3;
      *pfVar17 = fVar2 + *(float *)(param_1 + 0x10);
      fVar2 = DAT_0079f5b4;
      iVar11 = DAT_0079ee80;
      pfVar17 = pfVar17 + 3;
      dVar25 = (double)(float)(dVar30 - dVar24);
      if ((double)(float)(dVar30 - dVar24) - dVar23 < 0.0) {
        dVar25 = dVar23;
      }
      bVar1 = iVar19 < DAT_0079ee80;
      dVar23 = (double)(float)(dVar25 * dVar25);
      *pfVar15 = fVar3 + *(float *)(param_1 + 0x14);
      fVar3 = *(float *)(param_1 + 0x18);
      pfVar15 = pfVar15 + 3;
      *puVar12 = uVar7 | iVar21 << 0x10 | iVar20 << 8 | uVar5;
      puVar12 = puVar12 + 1;
      dVar26 = (double)(float)(dVar23 * (double)(float)(dVar23 * dVar25));
      dVar24 = (double)(float)(dVar23 * dVar26);
      *pfVar14 = fVar2 * (float)((double)(float)(dVar23 * dVar24) * dVar22 +
                                (double)(float)(dVar24 * dVar27 +
                                               (double)(float)(dVar26 * dVar28 +
                                                              (double)(float)((double)(float)(dVar23
                                                                                             * 
                                                  dVar25) * dVar29 + dVar25)))) + fVar4 + fVar3;
      pfVar14 = pfVar14 + 3;
    } while (bVar1);
  }
  iVar21 = 0;
  uVar10 = 0x3ff0000000000000;
  do {
    iVar20 = 0;
    if (0 < iVar11) {
      pfVar15 = (float *)&DAT_0079f2cc;
      pfVar14 = (float *)&DAT_00fa9ef8;
      pfVar18 = (float *)&DAT_0079f2d0;
      pfVar16 = (float *)&DAT_00fa9efc;
      do {
        *(undefined4 *)((int)puVar6 + 0x7c) = 0x3f800000;
        *(undefined4 *)((int)puVar6 + 0x84) = 0x3f800000;
        *(undefined4 *)(puVar6 + 0x10) = 0xbf20d97c;
        fVar2 = *(float *)((int)lVar13 + 0x7c);
        *(undefined4 *)(puVar6 + 0x11) = 0x3f20d97c;
        dVar22 = (double)FastFMod((double)(float)((double)fVar2 * dVar33),uVar10);
        fVar2 = *(float *)((int)lVar13 + 0x80);
        *pfVar14 = (float)((double)*pfVar15 + dVar22);
        dVar22 = (double)FastFMod((double)(float)((double)fVar2 * dVar33),uVar10);
        fVar2 = *pfVar18;
        iVar20 = iVar20 + 1;
        pfVar15 = pfVar15 + 2;
        bVar1 = iVar20 < DAT_0079ee80;
        pfVar14 = pfVar14 + 2;
        pfVar18 = pfVar18 + 2;
        *pfVar16 = (float)((double)fVar2 + dVar22);
        pfVar16 = pfVar16 + 2;
      } while (bVar1);
    }
    STUB_00071170();
    DrawMeshSet(DAT_0079ee80,PTR_DAT_0079f594,PTR_DAT_0079f59c,PTR_DAT_0079f598,9);
    iVar21 = iVar21 + 1;
    lVar13 = lVar13 + 8;
    iVar11 = DAT_0079ee80;
  } while (iVar21 < 2);
  return;
}


// 0x026ee28 (0x80 bytes)
/* Moby 1406 */

void UpdateMoby_1406(MobyInstance *moby)

{
  if (moby->state == '\0') {
    SetColorOfMoby(moby,0x40,0x40,0x40);
    moby->state = '\x01';
  }
  else {
    RegisterPostDraw(&PTR_M1406_0026e9a0_0070a3c0,moby);
    moby->drawDistance = 0;
    moby->modeBits = moby->modeBits | DISABLED;
  }
  return;
}


