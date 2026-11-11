// game/update/moby1408.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x26f400-0x26f994
#include "game/update/moby1408.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/update.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"

// 0x026f400 (0x514 bytes)
void M1408_0026f400(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  ulonglong *puVar7;
  uint uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  int iVar15;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  undefined **ppuVar16;
  ulonglong unaff_r22;
  undefined **ppuVar17;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  int iVar18;
  undefined **ppuVar19;
  ulonglong unaff_r25;
  int iVar20;
  int *piVar21;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int iVar22;
  int iVar23;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  longlong lVar24;
  ulonglong unaff_r31;
  int iVar25;
  ulonglong in_LR;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar31;
  ulonglong in_f26;
  double dVar32;
  ulonglong in_f27;
  double dVar33;
  ulonglong in_f28;
  double dVar34;
  ulonglong in_f29;
  double dVar35;
  ulonglong in_f30;
  double dVar36;
  ulonglong in_f31;
  double dVar37;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar24 = uVar10 - 0x150;
  puVar7 = (ulonglong *)lVar24;
  *puVar7 = uVar10;
  puVar7[0x2c] = in_LR;
  puVar7[0x22] = in_f24;
  puVar7[0x23] = in_f25;
  puVar7[0x24] = in_f26;
  puVar7[0x25] = in_f27;
  puVar7[0x26] = in_f28;
  puVar7[0x27] = in_f29;
  puVar7[0x28] = in_f30;
  puVar7[0x29] = in_f31;
  puVar7[0x21] = unaff_r31;
  puVar7[0x1c] = unaff_r26;
  puVar7[0x20] = unaff_r30;
  uVar9 = worldUpdateTime;
  pfVar4 = *(float **)(param_1 + 0x78);
  puVar7[0x1f] = unaff_r29;
  puVar7[0x1e] = unaff_r28;
  puVar7[0x1d] = unaff_r27;
  puVar7[0x1b] = unaff_r25;
  puVar7[0x1a] = unaff_r24;
  puVar7[0x19] = unaff_r23;
  puVar7[0x18] = unaff_r22;
  puVar7[0x17] = unaff_r21;
  puVar7[0x16] = unaff_r20;
  puVar7[0x15] = unaff_r19;
  puVar7[0x14] = unaff_r18;
  puVar7[0x13] = unaff_r17;
  puVar7[0x12] = unaff_r16;
  dVar26 = (double)FastIntToDouble(uVar9);
  dVar37 = (double)(float)((double)(float)((double)DAT_007a1988 * (double)g_FrameTime) *
                          dVar26);
  uVar11 = GetEffectTex(dVar26,(double)DAT_007a1988,(double)g_FrameTime,DAT_007a1974
                             );
  SetGSReg(0x18,uVar11);
  uVar11 = idol_draw::PackCmd(0,1,0,1,DAT_007a1970);
  SetGSReg(3,uVar11);
  uVar11 = FUN_00502f08(0,0,0,0,0,0);
  SetGSReg(6,uVar11);
  uVar11 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  SetGSReg(0x1a,uVar11);
  *pfVar4 = pfVar4[1];
  dVar26 = (double)FastWrapRot
                             (pfVar4[1],
                              (360.0 / (DAT_007a1980 * animationSpeed)) * 0.017453292 *
                              g_FrameTime);
  pfVar4[1] = (float)dVar26;
  MB_GetLights(param_1,uVar10 - 0xe0,uVar10 - 0xdc,uVar10 - 0xd8);
  iVar25 = *(int *)(puVar7 + 0xf);
  iVar15 = 0;
  iVar23 = *(int *)((int)puVar7 + 0x74);
  uVar5 = *(uint *)(puVar7 + 0xe);
  uVar8 = DAT_007a1978 << 0x18;
  iVar20 = 0;
  do {
    iVar22 = 0;
    if (0 < *(int *)((int)&DAT_0079fa40 + iVar20)) {
      dVar36 = 6.2831854820251465;
      dVar35 = 3.141592502593994;
      iVar13 = 0;
      dVar34 = -3.141592502593994;
      dVar33 = -0.16666656732559204;
      dVar32 = 0.008333025500178337;
      dVar31 = -0.0001980741071747616;
      iVar18 = 0;
      dVar26 = 2.601886990305502e-06;
      do {
        pfVar12 = (float *)(*(int *)((int)&PTR_DAT_007a194c + iVar20) + iVar13);
        dVar27 = (double)FastFMod((double)SQRT(*pfVar12 * *pfVar12 +
                                                         pfVar12[1] * pfVar12[1]),
                                            (double)DAT_007a197c);
        dVar27 = (double)FastAddRots((float)(dVar27 * dVar36) / DAT_007a197c);
        dVar28 = (double)FastWrapRot((float)dVar27,pfVar4[1]);
        fVar3 = DAT_007a1984;
        iVar14 = *(int *)((int)&PTR_DAT_007a1928 + iVar20) + iVar13;
        iVar22 = iVar22 + 1;
        dVar27 = (double)(float)(dVar35 - dVar28);
        if (dVar28 - (double)(float)(dVar35 - dVar28) < 0.0) {
          dVar27 = dVar28;
        }
        fVar1 = *(float *)(param_1 + 0x14);
        fVar2 = *(float *)(param_1 + 0x18);
        iVar6 = *(int *)((int)&PTR_DAT_007a1940 + iVar20);
        *(float *)(*(int *)((int)&PTR_DAT_007a1928 + iVar20) + iVar13) =
             *pfVar12 + *(float *)(param_1 + 0x10);
        iVar13 = iVar13 + 0xc;
        dVar29 = (double)(float)(dVar34 - dVar28);
        if ((double)(float)(dVar34 - dVar28) - dVar27 < 0.0) {
          dVar29 = dVar27;
        }
        dVar27 = (double)(float)(dVar29 * dVar29);
        *(float *)(iVar14 + 4) = pfVar12[1] + fVar1;
        dVar30 = (double)(float)(dVar27 * (double)(float)(dVar27 * dVar29));
        dVar28 = (double)(float)(dVar27 * dVar30);
        *(float *)(iVar14 + 8) =
             fVar3 * (float)((double)(float)(dVar27 * dVar28) * dVar26 +
                            (double)(float)(dVar28 * dVar31 +
                                           (double)(float)(dVar30 * dVar32 +
                                                          (double)(float)((double)(float)(dVar27 * 
                                                  dVar29) * dVar33 + dVar29)))) + pfVar12[2] + fVar2
        ;
        *(uint *)(iVar6 + iVar18) = uVar8 | iVar25 << 0x10 | iVar23 << 8 | uVar5;
        iVar18 = iVar18 + 4;
      } while (iVar22 < *(int *)((int)&DAT_0079fa40 + iVar20));
    }
    iVar15 = iVar15 + 1;
    iVar20 = iVar20 + 4;
  } while (iVar15 < 3);
  uVar11 = 0x3ff0000000000000;
  iVar25 = 0;
  do {
    iVar15 = 0;
    iVar23 = 0;
    piVar21 = &DAT_0079fa40;
    do {
      iVar20 = 0;
      if (0 < *piVar21) {
        iVar22 = 0;
        do {
          *(undefined4 *)((int)puVar7 + 0x7c) = 0x3f800000;
          *(undefined4 *)((int)puVar7 + 0x84) = 0x3f800000;
          *(undefined4 *)(puVar7 + 0x10) = 0xbf20d97c;
          fVar3 = *(float *)((int)lVar24 + 0x7c);
          *(undefined4 *)(puVar7 + 0x11) = 0x3f20d97c;
          dVar26 = (double)FastFMod((double)(float)((double)fVar3 * dVar37),uVar11);
          fVar3 = *(float *)((int)lVar24 + 0x80);
          *(float *)(*(int *)((int)&PTR_DAT_007a1934 + iVar23) + iVar22) =
               (float)((double)*(float *)(*(int *)((int)&PTR_DAT_007a1958 + iVar23) + iVar22) +
                      dVar26);
          dVar26 = (double)FastFMod((double)(float)((double)fVar3 * dVar37),uVar11);
          iVar20 = iVar20 + 1;
          iVar18 = *(int *)((int)&PTR_DAT_007a1958 + iVar23) + iVar22;
          iVar13 = *(int *)((int)&PTR_DAT_007a1934 + iVar23) + iVar22;
          iVar22 = iVar22 + 8;
          *(float *)(iVar13 + 4) = (float)((double)*(float *)(iVar18 + 4) + dVar26);
        } while (iVar20 < *(int *)((int)&DAT_0079fa40 + iVar23));
      }
      iVar15 = iVar15 + 1;
      iVar23 = iVar23 + 4;
      piVar21 = piVar21 + 1;
    } while (iVar15 < 3);
    STUB_00071170();
    iVar23 = 0;
    ppuVar19 = &PTR_DAT_007a1928;
    ppuVar17 = &PTR_DAT_007a1940;
    piVar21 = &DAT_0079fa40;
    ppuVar16 = &PTR_DAT_007a1934;
    do {
      DrawMeshSet(*piVar21,*ppuVar19,*ppuVar17,*ppuVar16,9);
      iVar23 = iVar23 + 1;
      piVar21 = piVar21 + 1;
      ppuVar19 = ppuVar19 + 1;
      ppuVar17 = ppuVar17 + 1;
      ppuVar16 = ppuVar16 + 1;
    } while (iVar23 < 3);
    iVar25 = iVar25 + 1;
    lVar24 = lVar24 + 8;
  } while (iVar25 < 2);
  return;
}


// 0x026f914 (0x80 bytes)
/* Moby 1408 */

void UpdateMoby_1408(MobyInstance *moby)

{
  if (moby->state == '\0') {
    SetColorOfMoby(moby,0x40,0x40,0x40);
    moby->state = '\x01';
  }
  else {
    RegisterPostDraw(&PTR_M1408_0026f400_0070a3e0,moby);
    moby->drawDistance = 0;
    moby->modeBits = moby->modeBits | DISABLED;
  }
  return;
}


