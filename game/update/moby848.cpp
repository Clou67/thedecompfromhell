// game/update/moby848.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x484a18-0x486008
#include "game/update/moby848.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x0484a18 (0x15f0 bytes)
// inlined: FastRSqrt @0x484b68, FastRSqrt @0x484c34, FastAtan2 @0x484da4, FastAtan2 @0x484f54, FastAtan2 @0x485134
/* Moby 848 */

void UpdateMoby_848(MobyInstance *moby)

{
  float fVar1;
  byte bVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  MOBY_OCLASSES MVar8;
  float *pfVar9;
  float fVar10;
  MobyInstance *pMoby;
  ulonglong *puVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar20;
  undefined8 uVar19;
  int iVar21;
  float *pfVar23;
  longlong lVar22;
  longlong lVar24;
  uint unused2;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  longlong lVar25;
  ulonglong unaff_r27;
  int *piVar26;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  ulonglong in_f17;
  ulonglong in_f18;
  ulonglong in_f19;
  double dVar40;
  ulonglong in_f20;
  double dVar41;
  ulonglong in_f21;
  ulonglong in_f22;
  double dVar42;
  ulonglong in_f23;
  double dVar43;
  ulonglong in_f24;
  double dVar44;
  ulonglong in_f25;
  double dVar45;
  ulonglong in_f26;
  double dVar46;
  ulonglong in_f27;
  double dVar47;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar48;
  ulonglong in_f30;
  double dVar49;
  undefined8 uVar50;
  ulonglong in_f31;
  double dVar51;
  double dVar52;
  
  lVar16 = (longlong)(int)moby;
  uVar15 = ZEXT48(&stack0x00000000);
  lVar25 = uVar15 - 0x2e0;
  puVar11 = (ulonglong *)lVar25;
  *puVar11 = uVar15;
  puVar11[0x5e] = in_LR;
  puVar11[0x4d] = in_f17;
  puVar11[0x4e] = in_f18;
  puVar11[0x4f] = in_f19;
  puVar11[0x50] = in_f20;
  puVar11[0x51] = in_f21;
  puVar11[0x52] = in_f22;
  puVar11[0x53] = in_f23;
  puVar11[0x54] = in_f24;
  puVar11[0x55] = in_f25;
  puVar11[0x56] = in_f26;
  puVar11[0x57] = in_f27;
  puVar11[0x58] = in_f28;
  puVar11[0x59] = in_f29;
  puVar11[0x5a] = in_f30;
  puVar11[0x5b] = in_f31;
  puVar11[0x4c] = unaff_r31;
  puVar11[0x4b] = unaff_r30;
  pfVar9 = (float *)moby->pVar;
  puVar11[0x4a] = unaff_r29;
  puVar11[0x49] = unaff_r28;
  puVar11[0x48] = unaff_r27;
  puVar11[0x47] = unaff_r26;
  puVar11[0x46] = unaff_r25;
  puVar11[0x45] = unaff_r24;
  puVar11[0x44] = unaff_r23;
  MB_getTarget(0x4034000000000000,lVar16,&DAT_00484978,uVar15 - 0x1a0);
  fVar10 = pfVar9[4];
  piVar26 = (int *)0x0;
  iVar21 = 0;
  if (*(short *)((int)fVar10 + 0xa6) == 0x277) {
    piVar26 = (int *)(*(int *)((int)fVar10 + 0x78) + 0x250);
  }
  else if (*(short *)((int)fVar10 + 0xa6) == 0xe9) {
    piVar26 = (int *)(*(int *)((int)fVar10 + 0x78) + 0x1b8);
    if ((*(char *)((int)fVar10 + 0x20) == '@') || (*(char *)((int)fVar10 + 0x20) == '\x01')) {
      moby->state = '\x02';
    }
  }
  bVar2 = moby->state;
  if (bVar2 < 2) {
    if (bVar2 != 0) {
      fVar10 = *pfVar9;
      fVar4 = fVar10 * fVar10 + pfVar9[1] * pfVar9[1];
      dVar44 = 0.0;
      if (SQRT(fVar4) == 0.0) {
        *(float *)(puVar11 + 0xe) = fVar10;
        *(float *)((int)puVar11 + 0x74) = pfVar9[1];
        *(float *)(puVar11 + 0xf) = pfVar9[2];
        fVar10 = pfVar9[3];
        *(undefined4 *)((int)puVar11 + 0x74) = 0;
        *(undefined4 *)(puVar11 + 0xe) = 0;
      }
      else {
        fVar5 = 1.0 / SQRT(fVar4);
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        *(float *)(puVar11 + 0xe) = fVar10 * fVar5;
        *(float *)((int)puVar11 + 0x74) = pfVar9[1] * fVar5;
        *(float *)(puVar11 + 0xf) = pfVar9[2];
        fVar10 = pfVar9[3];
      }
      *(float *)((int)puVar11 + 0x7c) = fVar10;
      dVar43 = 1.0;
      pfVar9[2] = 1.0;
      dVar40 = 2.0;
      SetCollDamIn(0x4000000000000000,uVar15 - 0x1d0,lVar16,0x10003);
      fVar10 = *(float *)((int)puVar11 + 0x114);
      fVar4 = *(float *)(puVar11 + 0x22);
      fVar5 = (moby->pos).z;
      MVar8 = moby->oClass;
      dVar30 = (double)(fVar4 * fVar4 + fVar10 * fVar10);
      dVar28 = dVar44;
      dVar29 = dVar44;
      if ((double)(float)SQRT(dVar30) != dVar44) {
        dVar28 = 1.0 / SQRT(dVar30);
        dVar28 = (double)(float)(-(double)(float)((double)(float)(dVar30 * dVar28) * dVar28 - dVar43
                                                 ) * (double)(float)(dVar28 * 0.5) + dVar28);
        dVar28 = (double)(float)(-(double)(float)((double)(float)(dVar30 * dVar28) * dVar28 - dVar43
                                                 ) * (double)(float)(dVar28 * 0.5) + dVar28);
        fVar1 = (float)(-(double)(float)((double)(float)(dVar30 * dVar28) * dVar28 - dVar43) *
                        (double)(float)(dVar28 * 0.5) + dVar28);
        dVar28 = (double)(fVar4 * fVar1);
        dVar29 = (double)(fVar10 * fVar1);
      }
      *(float *)(puVar11 + 0x22) = (float)dVar28;
      *(float *)((int)puVar11 + 0x114) = (float)dVar29;
      *(undefined4 *)(puVar11 + 0x23) = 0x3f800000;
      *(undefined4 *)((int)puVar11 + 0x11c) = 0x45afdf66;
      *(undefined1 *)(puVar11 + 0x25) = 1;
      *(undefined1 *)((int)puVar11 + 0x129) = 1;
      *(MOBY_OCLASSES *)((int)puVar11 + 0x12a) = MVar8;
      fVar10 = *pfVar9;
      fVar4 = pfVar9[1];
      fVar5 = (pfVar9[3] - fVar5) * 0.1;
      pfVar9[2] = fVar5;
      if (fVar5 <= g_FrameTime * 8.0) {
        if (fVar5 < g_FrameTime * -8.0) {
          pfVar9[2] = g_FrameTime * -8.0;
        }
      }
      else {
        pfVar9[2] = g_FrameTime * 8.0;
      }
      dVar30 = ABS((double)*pfVar9);
      dVar28 = ABS((double)pfVar9[1]);
      *(float *)((int)puVar11 + 0x1ac) = (float)(dVar30 - dVar28);
      dVar51 = 0.7853981852531433;
      uVar17 = (ulonglong)((uint)fVar10 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar11 + 0x1ac) >> 0x1e) & 2 |
               (ulonglong)((uint)fVar4 >> 0x1d) & 4;
      fVar10 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
      dVar29 = dVar30;
      if ((double)*(float *)((int)puVar11 + 0x1ac) - dVar44 < 0.0) {
        dVar29 = dVar28;
      }
      if ((double)*(float *)((int)puVar11 + 0x1ac) - dVar44 < 0.0) {
        dVar28 = dVar30;
      }
      fVar4 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      dVar30 = dVar44;
      if (dVar44 < dVar29) {
        lVar18 = uVar15 - 0x2d0;
        lVar22 = uVar15 - 0xf0;
        lVar24 = uVar15 - 0xe0;
        lVar27 = 2;
        fVar5 = (float)(dVar28 - dVar29) / (float)(dVar28 + dVar29);
        fVar1 = fVar5 * fVar5;
        *(float *)((int)puVar11 + 0x1fc) = fVar5;
        *(float *)((int)puVar11 + 500) = fVar5;
        *(float *)(puVar11 + 0x3f) = fVar5;
        *(float *)(puVar11 + 0x3e) = fVar5;
        fVar5 = fVar1 * fVar1;
        *(float *)((int)puVar11 + 500) = *(float *)((int)puVar11 + 500) * fVar1;
        *(float *)(puVar11 + 0x3f) = *(float *)(puVar11 + 0x3f) * fVar5;
        *(float *)((int)puVar11 + 0x1fc) = *(float *)((int)puVar11 + 0x1fc) * fVar5 * fVar1;
        do {
          *(float *)((int)lVar18 + 0x1f0) = *(float *)((int)lVar18 + 0x1e0) * fVar5 * fVar5;
          iVar20 = (int)lVar22;
          lVar18 = lVar18 + 8;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)(iVar20 + 4) * fVar5 * fVar5;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar24 = uVar15 - 0xf0;
        pfVar23 = (float *)&DAT_007358e0;
        lVar18 = lVar25;
        lVar22 = lVar24;
        do {
          fVar5 = *pfVar23;
          fVar1 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar18 + 0x1f0) = *(float *)((int)lVar18 + 0x1f0) * fVar5;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar1;
          lVar22 = lVar22 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar22 = 2;
        lVar18 = lVar25;
        dVar28 = dVar44;
        do {
          iVar20 = (int)lVar18;
          iVar12 = (int)lVar24;
          lVar18 = lVar18 + 0x10;
          lVar24 = lVar24 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar20 + 0x1f0)) +
                            *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                           *(float *)(iVar12 + 0xc));
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        dVar30 = (double)((float)(dVar28 + 0.7853981852531433) * fVar10 + fVar4);
      }
      fVar10 = *(float *)(puVar11 + 0x28) - (moby->pos).x;
      fVar4 = *(float *)((int)puVar11 + 0x144) - (moby->pos).y;
      dVar29 = ABS((double)fVar10);
      dVar31 = ABS((double)fVar4);
      *(float *)(puVar11 + 0x34) = fVar10;
      *(float *)((int)puVar11 + 0x1a4) = fVar4;
      *(float *)(puVar11 + 0x32) = (float)dVar30;
      *(float *)(puVar11 + 0x35) = (float)(dVar29 - dVar31);
      uVar17 = (ulonglong)(*(uint *)(puVar11 + 0x34) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar11 + 0x35) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar11 + 0x1a4) >> 0x1d) & 4;
      dVar28 = ABS((double)*(float *)(puVar11 + 0x34));
      if ((double)*(float *)(puVar11 + 0x35) - dVar44 < 0.0) {
        dVar28 = dVar31;
      }
      fVar10 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
      dVar31 = ABS((double)*(float *)((int)puVar11 + 0x1a4));
      if ((double)*(float *)(puVar11 + 0x35) - dVar44 < 0.0) {
        dVar31 = dVar29;
      }
      fVar4 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      dVar29 = dVar44;
      if (dVar44 < dVar28) {
        lVar18 = uVar15 - 0x2d0;
        lVar22 = uVar15 - 0x110;
        lVar24 = uVar15 - 0x100;
        lVar27 = 2;
        fVar5 = (float)(dVar31 - dVar28) / (float)(dVar31 + dVar28);
        fVar1 = fVar5 * fVar5;
        *(float *)((int)puVar11 + 0x1dc) = fVar5;
        *(float *)((int)puVar11 + 0x1d4) = fVar5;
        *(float *)(puVar11 + 0x3b) = fVar5;
        *(float *)(puVar11 + 0x3a) = fVar5;
        fVar5 = fVar1 * fVar1;
        *(float *)((int)puVar11 + 0x1d4) = *(float *)((int)puVar11 + 0x1d4) * fVar1;
        *(float *)(puVar11 + 0x3b) = *(float *)(puVar11 + 0x3b) * fVar5;
        *(float *)((int)puVar11 + 0x1dc) = *(float *)((int)puVar11 + 0x1dc) * fVar5 * fVar1;
        do {
          *(float *)((int)lVar18 + 0x1d0) = *(float *)((int)lVar18 + 0x1c0) * fVar5 * fVar5;
          iVar20 = (int)lVar22;
          lVar18 = lVar18 + 8;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)(iVar20 + 4) * fVar5 * fVar5;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar24 = uVar15 - 0x110;
        pfVar23 = (float *)&DAT_007358e0;
        lVar18 = lVar25;
        lVar22 = lVar24;
        do {
          fVar5 = *pfVar23;
          fVar1 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar18 + 0x1d0) = *(float *)((int)lVar18 + 0x1d0) * fVar5;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar1;
          lVar22 = lVar22 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar22 = 2;
        lVar18 = lVar25;
        dVar28 = dVar44;
        do {
          iVar20 = (int)lVar18;
          lVar18 = lVar18 + 0x10;
          iVar12 = (int)lVar24;
          lVar24 = lVar24 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar20 + 0x1d0)) +
                            *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                           *(float *)(iVar12 + 0xc));
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        dVar29 = (double)((float)(dVar28 + 0.7853981852531433) * fVar10 + fVar4);
      }
      dVar28 = (double)FastSubRots((float)dVar30,(float)dVar29);
      fVar4 = g_FrameTime;
      fVar10 = *pfVar9;
      dVar29 = 1.5707963705062866;
      if (dVar28 < 1.5707963705062866) {
        fVar10 = *(float *)(puVar11 + 0x28) - (moby->pos).x;
        fVar5 = *(float *)((int)puVar11 + 0x144) - (moby->pos).y;
        dVar30 = ABS((double)fVar10);
        dVar31 = ABS((double)fVar5);
        *(float *)((int)puVar11 + 0x194) = fVar10;
        *(float *)(puVar11 + 0x33) = fVar5;
        *(float *)((int)puVar11 + 0x19c) = (float)(dVar30 - dVar31);
        unused2 = *(uint *)((int)puVar11 + 0x19c);
        uVar17 = (ulonglong)(*(uint *)((int)puVar11 + 0x194) >> 0x1c) & 8 |
                 (ulonglong)(unused2 >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar11 + 0x33) >> 0x1d) & 4;
        pfVar23 = (float *)(uVar17 << 2);
        dVar28 = ABS((double)*(float *)((int)puVar11 + 0x194));
        if ((double)*(float *)((int)puVar11 + 0x19c) - dVar44 < 0.0) {
          dVar28 = dVar31;
        }
        fVar10 = pfVar23[0x1cd640];
        dVar31 = ABS((double)*(float *)(puVar11 + 0x33));
        if ((double)*(float *)((int)puVar11 + 0x19c) - dVar44 < 0.0) {
          dVar31 = dVar30;
        }
        fVar5 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
        dVar30 = dVar44;
        if (dVar44 < dVar28) {
          lVar18 = uVar15 - 0x2d0;
          lVar22 = uVar15 - 0x130;
          lVar24 = uVar15 - 0x120;
          lVar27 = 2;
          fVar1 = (float)(dVar31 - dVar28) / (float)(dVar31 + dVar28);
          fVar6 = fVar1 * fVar1;
          *(float *)((int)puVar11 + 0x1bc) = fVar1;
          *(float *)((int)puVar11 + 0x1b4) = fVar1;
          *(float *)(puVar11 + 0x37) = fVar1;
          *(float *)(puVar11 + 0x36) = fVar1;
          fVar1 = fVar6 * fVar6;
          *(float *)((int)puVar11 + 0x1b4) = *(float *)((int)puVar11 + 0x1b4) * fVar6;
          *(float *)(puVar11 + 0x37) = *(float *)(puVar11 + 0x37) * fVar1;
          *(float *)((int)puVar11 + 0x1bc) = *(float *)((int)puVar11 + 0x1bc) * fVar1 * fVar6;
          do {
            *(float *)((int)lVar18 + 0x1b0) = *(float *)((int)lVar18 + 0x1a0) * fVar1 * fVar1;
            iVar20 = (int)lVar22;
            lVar18 = lVar18 + 8;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)(iVar20 + 4) * fVar1 * fVar1;
            lVar24 = lVar24 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar24 = uVar15 - 0x130;
          pfVar23 = (float *)&DAT_007358e0;
          lVar18 = lVar25;
          lVar22 = lVar24;
          do {
            fVar1 = *pfVar23;
            fVar6 = pfVar23[1];
            pfVar23 = pfVar23 + 2;
            *(float *)((int)lVar18 + 0x1b0) = *(float *)((int)lVar18 + 0x1b0) * fVar1;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
            lVar22 = lVar22 + 8;
            unused2 = (uint)lVar22;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar18 = 2;
          dVar28 = dVar44;
          do {
            iVar20 = (int)lVar25;
            lVar25 = lVar25 + 0x10;
            iVar12 = (int)lVar24;
            lVar24 = lVar24 + 0x10;
            dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar20 + 0x1b0)) +
                              *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                             *(float *)(iVar12 + 0xc));
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
          dVar30 = (double)((float)(dVar28 + dVar51) * fVar10 + fVar5);
        }
        DeltAng((float)dVar30,DAT_008ad0bc * 0.017453292 * fVar4,(float *)(puVar11 + 0x32)
                          ,(int)pfVar23,unused2,0);
        fVar10 = *(float *)(puVar11 + 0x32);
        fVar4 = fVar10 + 1.5707963;
        fVar1 = pfVar9[1] * pfVar9[1];
        fVar5 = 3.1415925 - fVar4;
        if (fVar4 - (3.1415925 - fVar4) < 0.0) {
          fVar5 = fVar4;
        }
        fVar6 = 3.1415925 - fVar10;
        if (fVar10 - (3.1415925 - fVar10) < 0.0) {
          fVar6 = fVar10;
        }
        fVar7 = -3.1415925 - fVar4;
        if ((-3.1415925 - fVar4) - fVar5 < 0.0) {
          fVar7 = fVar5;
        }
        fVar4 = fVar7 * fVar7;
        fVar13 = fVar4 * fVar4 * fVar7;
        fVar14 = fVar4 * fVar13;
        fVar5 = -3.1415925 - fVar10;
        if ((-3.1415925 - fVar10) - fVar6 < 0.0) {
          fVar5 = fVar6;
        }
        fVar10 = (fVar4 * fVar14 * 2.601887e-06 +
                 fVar14 * -0.0001980741 +
                 fVar13 * 0.0083330255 + fVar4 * fVar7 * -0.16666657 + fVar7) *
                 SQRT(*pfVar9 * *pfVar9 + fVar1);
        fVar4 = fVar5 * fVar5;
        *pfVar9 = fVar10;
        fVar6 = fVar4 * fVar4 * fVar5;
        fVar7 = fVar4 * fVar6;
        pfVar9[1] = (fVar4 * fVar7 * 2.601887e-06 +
                    fVar7 * -0.0001980741 +
                    fVar6 * 0.0083330255 + fVar4 * fVar5 * -0.16666657 + fVar5) *
                    SQRT(fVar10 * fVar10 + fVar1);
      }
      fVar10 = (moby->pos).x + fVar10;
      pMoby = (MobyInstance *)pfVar9[4];
      (moby->pos).x = fVar10;
      fVar4 = (moby->pos).y + pfVar9[1];
      (moby->pos).y = fVar4;
      (moby->pos).z = (moby->pos).z + pfVar9[2];
      fVar4 = fVar4 - (pMoby->pos).y;
      fVar10 = fVar10 - (pMoby->pos).x;
      dVar28 = (double)SQRT(fVar10 * fVar10 + fVar4 * fVar4);
      if (piVar26 != (int *)0x0) {
        if (dVar28 <= (double)((pMoby->pos).z - *(float *)(puVar11 + 0x29))) {
          iVar20 = *piVar26;
          if (((iVar20 != -1) && (g_SoundChannels[iVar20].pMoby == pMoby)) &&
             (g_SoundChannels[iVar20].state != '\0')) {
            sound_Kill(iVar20);
          }
          *piVar26 = -1;
        }
        else {
          iVar20 = IsMobyPlayingSound(pMoby,*piVar26);
          if (iVar20 == 0) {
            iVar20 = PlayMobySound(0,4,(MobyInstance *)pfVar9[4]);
            *piVar26 = iVar20;
          }
        }
      }
      if (((double)(*(float *)((int)pfVar9[4] + 0x18) - *(float *)(puVar11 + 0x29)) < dVar28) &&
         (fVar10 = pfVar9[5], puVar11[0x42] = (longlong)(int)(animationSpeed * 6.5),
         fVar10 == (float)(((int)fVar10 / *(int *)((int)puVar11 + 0x214)) *
                          *(int *)((int)puVar11 + 0x214)))) {
        fVar10 = pfVar9[6];
        pfVar9[6] = (float)((uint)fVar10 ^ 1);
        dVar28 = -1.5707963705062866;
        dVar30 = dVar28;
        if ((float)((uint)fVar10 ^ 1) != 0.0) {
          dVar30 = dVar29;
        }
        dVar30 = (double)FastWrapRot(*(float *)(puVar11 + 0x32),(float)dVar30);
        dVar51 = 3.141592502593994;
        fVar10 = (float)(dVar30 + 1.570796251296997);
        dVar30 = -3.141592502593994;
        dVar31 = -0.16666656732559204;
        dVar48 = 0.008333025500178337;
        dVar49 = -0.0001980741071747616;
        fVar4 = 3.1415925 - fVar10;
        if (fVar10 - (3.1415925 - fVar10) < 0.0) {
          fVar4 = fVar10;
        }
        fVar5 = -3.1415925 - fVar10;
        if ((-3.1415925 - fVar10) - fVar4 < 0.0) {
          fVar5 = fVar4;
        }
        dVar52 = 2.601886990305502e-06;
        dVar42 = 0.25;
        fVar1 = fVar5 * fVar5;
        fVar10 = fVar1 * fVar1 * fVar5;
        fVar4 = fVar1 * fVar10;
        dVar41 = (double)(fVar1 * fVar4 * 2.601887e-06 +
                         fVar4 * -0.0001980741 +
                         fVar10 * 0.0083330255 + fVar1 * fVar5 * -0.16666657 + fVar5);
        if (pfVar9[6] != 0.0) {
          dVar28 = dVar29;
        }
        dVar29 = (double)FastWrapRot(*(float *)(puVar11 + 0x32),(float)dVar28);
        lVar25 = uVar15 - 0x260;
        dVar28 = (double)(float)(dVar51 - dVar29);
        if (dVar29 - (double)(float)(dVar51 - dVar29) < 0.0) {
          dVar28 = dVar29;
        }
        dVar51 = (double)(float)(dVar30 - dVar29);
        if ((double)(float)(dVar30 - dVar29) - dVar28 < 0.0) {
          dVar51 = dVar28;
        }
        dVar45 = (double)(float)(dVar41 * dVar42 + (double)(moby->pos).x);
        dVar29 = (double)(float)(dVar51 * dVar51);
        dVar47 = (double)(moby->pos).z;
        dVar46 = (double)(moby->pos).w;
        dVar28 = (double)(float)(dVar29 * (double)(float)(dVar29 * dVar51));
        dVar30 = (double)(float)(dVar29 * dVar28);
        dVar28 = (double)(float)((double)(float)(dVar29 * dVar30) * dVar52 +
                                (double)(float)(dVar30 * dVar49 +
                                               (double)(float)(dVar28 * dVar48 +
                                                              (double)(float)((double)(float)(dVar29
                                                                                             * 
                                                  dVar51) * dVar31 + dVar51))));
        dVar29 = (double)(float)(dVar28 * dVar42 + (double)(moby->pos).y);
        GetBonePosition(pfVar9[4],3 - (int)pfVar9[6],lVar25);
        fVar10 = (float)(dVar45 - (double)*(float *)(puVar11 + 0x10));
        fVar4 = (float)(dVar29 - (double)*(float *)((int)puVar11 + 0x84));
        *(float *)((int)puVar11 + 0x9c) = (float)dVar46;
        fVar5 = (float)(dVar47 - (double)*(float *)(puVar11 + 0x11));
        *(float *)((int)puVar11 + 0xac) = (float)dVar46;
        iVar20 = 0;
        *(float *)(puVar11 + 0x12) = fVar10;
        *(float *)((int)puVar11 + 0x94) = fVar4;
        *(float *)(puVar11 + 0x13) = fVar5;
        *(float *)(puVar11 + 0x14) =
             (float)((double)fVar10 * dVar40 + (double)*(float *)(puVar11 + 0x10));
        *(float *)((int)puVar11 + 0xa4) =
             (float)((double)fVar4 * dVar40 + (double)*(float *)((int)puVar11 + 0x84));
        *(float *)(puVar11 + 0x15) =
             (float)((double)fVar5 * dVar40 + (double)*(float *)(puVar11 + 0x11));
        dVar49 = -1.0;
        dVar29 = 0.6499999761581421;
        dVar30 = 5.0;
        dVar51 = 15.0;
        dVar31 = 5.5;
        dVar48 = 10.5;
        uVar50 = 0x40e86a0000000000;
        do {
          *(undefined4 *)(puVar11 + 0x16) = 0;
          *(undefined4 *)((int)puVar11 + 0xb4) = 0;
          *(undefined4 *)(puVar11 + 0x17) = 0;
          *(undefined4 *)((int)puVar11 + 0xbc) = 0;
          dVar52 = (double)MB_randRangeFloat((float)dVar49,(float)dVar43);
          *(float *)(puVar11 + 0x16) = (float)dVar52;
          dVar52 = (double)MB_randRangeFloat((float)dVar49,(float)dVar43);
          *(float *)((int)puVar11 + 0xb4) = (float)dVar52;
          dVar45 = (double)MB_randRangeFloat((float)dVar49,(float)dVar43);
          dVar46 = (double)*(float *)((int)puVar11 + 0x94);
          dVar47 = (double)*(float *)(puVar11 + 0x12);
          dVar32 = (double)*(float *)((int)puVar11 + 0xb4);
          dVar34 = (double)*(float *)(puVar11 + 0x13);
          dVar37 = (double)*(float *)(puVar11 + 0x16);
          dVar39 = (double)g_FrameTime;
          *(undefined4 *)((int)puVar11 + 0xbc) = *(undefined4 *)((int)puVar11 + 0x9c);
          dVar35 = (double)SQRT((float)(dVar45 * dVar45 +
                                       (double)(float)(dVar37 * dVar37 +
                                                      (double)(float)(dVar32 * dVar32))));
          dVar38 = (double)(float)((double)(float)((double)SQRT((float)(dVar34 * dVar34 +
                                                                       (double)(float)(dVar47 * 
                                                  dVar47 + (double)(float)(dVar46 * dVar46)))) *
                                                  dVar29) / dVar35);
          dVar52 = dVar44;
          if (dVar44 - dVar35 < 0.0) {
            dVar52 = (double)(float)(dVar45 * dVar38);
          }
          dVar33 = dVar44;
          if (dVar44 - dVar35 < 0.0) {
            dVar33 = (double)(float)(dVar32 * dVar38);
          }
          dVar36 = dVar44;
          if (dVar44 - dVar35 < 0.0) {
            dVar36 = (double)(float)(dVar37 * dVar38);
          }
          if (dVar35 - dVar44 < 0.0) {
            dVar52 = (double)(float)(dVar45 * dVar38);
          }
          if (dVar35 - dVar44 < 0.0) {
            dVar33 = (double)(float)(dVar32 * dVar38);
          }
          if (dVar35 - dVar44 < 0.0) {
            dVar36 = (double)(float)(dVar37 * dVar38);
          }
          *(float *)(puVar11 + 0x17) = (float)(dVar34 + dVar52);
          *(float *)((int)puVar11 + 0xb4) = (float)(dVar46 + dVar33);
          *(float *)(puVar11 + 0x16) = (float)(dVar47 + dVar36);
          dVar52 = (double)MB_randRangeFloat
                                     ((float)(dVar39 * dVar30),(float)(dVar39 * dVar51));
          fVar4 = *(float *)((int)puVar11 + 0xb4);
          fVar5 = *(float *)(puVar11 + 0x16);
          fVar1 = *(float *)(puVar11 + 0x17);
          dVar46 = (double)animationSpeed;
          dVar45 = (double)SQRT(fVar1 * fVar1 + fVar5 * fVar5 + fVar4 * fVar4);
          puVar11[0x42] = (longlong)(int)(dVar46 * dVar31);
          puVar11[0x42] = (longlong)(int)(dVar46 * dVar48);
          fVar10 = (float)(dVar52 / dVar45);
          dVar52 = dVar44;
          if (dVar44 - dVar45 < 0.0) {
            dVar52 = (double)(fVar5 * fVar10);
          }
          dVar46 = dVar44;
          if (dVar44 - dVar45 < 0.0) {
            dVar46 = (double)(fVar4 * fVar10);
          }
          dVar47 = dVar44;
          if (dVar44 - dVar45 < 0.0) {
            dVar47 = (double)(fVar1 * fVar10);
          }
          if (dVar45 - dVar44 < 0.0) {
            dVar52 = (double)(fVar5 * fVar10);
          }
          if (dVar45 - dVar44 < 0.0) {
            dVar46 = (double)(fVar4 * fVar10);
          }
          if (dVar45 - dVar44 < 0.0) {
            dVar47 = (double)(fVar1 * fVar10);
          }
          *(float *)(puVar11 + 0x16) = (float)dVar52;
          *(float *)((int)puVar11 + 0xb4) = (float)dVar46;
          *(float *)(puVar11 + 0x17) = (float)dVar47;
          uVar19 = MB_randRange
                             (*(undefined4 *)((int)puVar11 + 0x214),
                              *(undefined4 *)((int)puVar11 + 0x214));
          SpawnPart_27(uVar50,lVar25,uVar15 - 0x230,0x5f2f4f6f,uVar19);
          fVar10 = animationSpeed;
          iVar20 = iVar20 + 1;
        } while (iVar20 < 5);
        fVar5 = *(float *)((int)puVar11 + 0x94);
        fVar1 = *(float *)(puVar11 + 0x12);
        fVar6 = *(float *)(puVar11 + 0x13);
        dVar51 = 0.5;
        dVar30 = (double)SQRT(fVar6 * fVar6 + fVar1 * fVar1 + fVar5 * fVar5);
        fVar4 = (float)((double)(g_FrameTime * 0.5) / dVar30);
        dVar29 = dVar44;
        if (dVar44 - dVar30 < 0.0) {
          dVar29 = (double)(fVar1 * fVar4);
        }
        dVar31 = dVar44;
        if (dVar44 - dVar30 < 0.0) {
          dVar31 = (double)(fVar5 * fVar4);
        }
        dVar48 = dVar44;
        if (dVar44 - dVar30 < 0.0) {
          dVar48 = (double)(fVar6 * fVar4);
        }
        if (dVar30 - dVar44 < 0.0) {
          dVar29 = (double)(fVar1 * fVar4);
        }
        if (dVar30 - dVar44 < 0.0) {
          dVar31 = (double)(fVar5 * fVar4);
        }
        if (dVar30 - dVar44 < 0.0) {
          dVar48 = (double)(fVar6 * fVar4);
        }
        *(float *)(puVar11 + 0x12) = (float)dVar29;
        *(float *)((int)puVar11 + 0x94) = (float)dVar31;
        *(float *)(puVar11 + 0x13) = (float)dVar48;
        puVar11[0x42] = (longlong)(int)(fVar10 * 4.5);
        puVar11[0x42] = (longlong)(int)(fVar10 * 7.5);
        uVar50 = MB_randRange
                           (*(undefined4 *)((int)puVar11 + 0x214),
                            *(undefined4 *)((int)puVar11 + 0x214));
        SpawnPart_27(0x41186a0000000000,lVar25,uVar15 - 0x250,0x2f4f7f7f,uVar50);
        dVar30 = 6.0;
        fVar10 = *pfVar9;
        fVar13 = animationSpeed * 6.0;
        fVar4 = (moby->pos).y;
        fVar5 = (moby->pos).x;
        fVar1 = (moby->pos).z;
        *(float *)(puVar11 + 0x1a) = fVar10 * fVar13;
        fVar6 = pfVar9[1];
        *(float *)((int)puVar11 + 0xd4) = fVar6 * fVar13;
        fVar7 = pfVar9[2];
        fVar5 = -(float)(dVar41 * dVar42 - (double)(fVar10 * fVar13 + fVar5)) -
                *(float *)(puVar11 + 0x10);
        fVar4 = -(float)(dVar28 * dVar42 - (double)(fVar6 * fVar13 + fVar4)) -
                *(float *)((int)puVar11 + 0x84);
        *(float *)(puVar11 + 0x1b) = fVar7 * fVar13;
        fVar10 = pfVar9[3];
        fVar1 = (fVar7 * fVar13 + fVar1) - *(float *)(puVar11 + 0x11);
        *(float *)((int)puVar11 + 0xdc) = fVar10;
        *(float *)((int)puVar11 + 0xec) = fVar10;
        *(float *)(puVar11 + 0x1d) = fVar1;
        *(float *)((int)puVar11 + 0xe4) = fVar4;
        *(float *)(puVar11 + 0x1c) = fVar5;
        dVar29 = (double)SQRT(fVar1 * fVar1 + fVar5 * fVar5 + fVar4 * fVar4);
        fVar10 = (float)(dVar40 / dVar29);
        dVar28 = dVar44;
        if (dVar44 - dVar29 < 0.0) {
          dVar28 = (double)(fVar5 * fVar10);
        }
        dVar31 = dVar44;
        if (dVar44 - dVar29 < 0.0) {
          dVar31 = (double)(fVar4 * fVar10);
        }
        dVar48 = dVar44;
        if (dVar44 - dVar29 < 0.0) {
          dVar48 = (double)(fVar1 * fVar10);
        }
        if (dVar29 - dVar44 < 0.0) {
          dVar28 = (double)(fVar5 * fVar10);
        }
        if (dVar29 - dVar44 < 0.0) {
          dVar31 = (double)(fVar4 * fVar10);
        }
        if (dVar29 - dVar44 < 0.0) {
          dVar48 = (double)(fVar1 * fVar10);
        }
        *(float *)(puVar11 + 0x1a) = (float)dVar28;
        *(float *)((int)puVar11 + 0xd4) = (float)dVar31;
        *(float *)(puVar11 + 0x1b) = (float)dVar48;
        FastVecSub(uVar15 - 0x1f0,lVar25,uVar15 - 0x210);
        fVar4 = *(float *)((int)puVar11 + 0xe4);
        fVar5 = *(float *)(puVar11 + 0x1c);
        fVar1 = *(float *)(puVar11 + 0x1d);
        *(float *)(puVar11 + 0x18) = *(float *)(puVar11 + 0x1e);
        *(float *)((int)puVar11 + 0xc4) = *(float *)((int)puVar11 + 0xf4);
        *(float *)(puVar11 + 0x19) = *(float *)(puVar11 + 0x1f);
        *(undefined4 *)((int)puVar11 + 0xcc) = *(undefined4 *)((int)puVar11 + 0xfc);
        *(float *)(puVar11 + 0x1a) = *(float *)(puVar11 + 0x1a) + *(float *)(puVar11 + 0x1e);
        *(float *)((int)puVar11 + 0xd4) =
             *(float *)((int)puVar11 + 0xd4) + *(float *)((int)puVar11 + 0xf4);
        *(float *)(puVar11 + 0x1b) = *(float *)(puVar11 + 0x1b) + *(float *)(puVar11 + 0x1f);
        fVar7 = animationSpeed;
        dVar29 = (double)SQRT(fVar1 * fVar1 + fVar5 * fVar5 + fVar4 * fVar4);
        fVar6 = pfVar9[4];
        fVar10 = (float)((double)(g_FrameTime * 100.0) / dVar29);
        dVar28 = dVar44;
        if (dVar44 - dVar29 < 0.0) {
          dVar28 = (double)(fVar5 * fVar10);
        }
        dVar31 = dVar44;
        if (dVar44 - dVar29 < 0.0) {
          dVar31 = (double)(fVar4 * fVar10);
        }
        dVar48 = dVar44;
        if (dVar44 - dVar29 < 0.0) {
          dVar48 = (double)(fVar1 * fVar10);
        }
        if (dVar29 - dVar44 < 0.0) {
          dVar28 = (double)(fVar5 * fVar10);
        }
        if (dVar29 - dVar44 < 0.0) {
          dVar31 = (double)(fVar4 * fVar10);
        }
        if (dVar29 - dVar44 < 0.0) {
          dVar48 = (double)(fVar1 * fVar10);
        }
        *(float *)(puVar11 + 0x1c) = (float)dVar28;
        *(float *)((int)puVar11 + 0xe4) = (float)dVar31;
        *(float *)(puVar11 + 0x1d) = (float)dVar48;
        puVar11[0x42] = (longlong)(int)(fVar7 * 45.5);
        SpawnPart_49
                  (fVar6,uVar15 - 0x220,uVar15 - 0x210,uVar15 - 0x200,
                   *(undefined4 *)((int)puVar11 + 0x214));
        iVar20 = CollLine(lVar25,uVar15 - 0x240,0,pfVar9[4],0);
        fVar10 = g_CollOutput.ip.y;
        if (iVar20 != 0) {
          fVar4 = *(float *)((int)puVar11 + 0x94);
          fVar5 = *(float *)(puVar11 + 0x12);
          fVar1 = *(float *)(puVar11 + 0x13);
          *(float *)(puVar11 + 0x10) = g_CollOutput.ip.x;
          fVar6 = g_CollOutput.ip.z;
          *(float *)((int)puVar11 + 0x84) = fVar10;
          fVar10 = g_CollOutput.ip.w;
          *(float *)(puVar11 + 0x11) = fVar6;
          *(float *)((int)puVar11 + 0x8c) = fVar10;
          dVar29 = (double)SQRT(fVar1 * fVar1 + fVar5 * fVar5 + fVar4 * fVar4);
          fVar10 = (float)((double)(g_FrameTime * 10.0) / dVar29);
          dVar28 = dVar44;
          if (dVar44 - dVar29 < 0.0) {
            dVar28 = (double)(fVar5 * fVar10);
          }
          dVar31 = dVar44;
          if (dVar44 - dVar29 < 0.0) {
            dVar31 = (double)(fVar4 * fVar10);
          }
          dVar48 = dVar44;
          if (dVar44 - dVar29 < 0.0) {
            dVar48 = (double)(fVar1 * fVar10);
          }
          if (dVar29 - dVar44 < 0.0) {
            dVar28 = (double)(fVar5 * fVar10);
          }
          if (dVar29 - dVar44 < 0.0) {
            dVar31 = (double)(fVar4 * fVar10);
          }
          if (dVar29 - dVar44 < 0.0) {
            dVar48 = (double)(fVar1 * fVar10);
          }
          *(float *)(puVar11 + 0x12) = (float)dVar28;
          *(float *)((int)puVar11 + 0x94) = (float)dVar31;
          *(float *)(puVar11 + 0x13) = (float)dVar48;
          dVar31 = 3.0;
          dVar29 = 15.5;
          dVar28 = 20.5;
          uVar50 = 0x40dd4c0000000000;
          do {
            dVar41 = (double)MB_randRangeFloat((float)dVar49,(float)dVar43);
            dVar42 = (double)MB_randRangeFloat((float)dVar49,(float)dVar43);
            dVar52 = (double)MB_randRangeFloat((float)dVar49,(float)dVar43);
            FastVecReflect(uVar15 - 0x1e0,uVar15 - 0x250,0xa10980);
            dVar45 = (double)*(float *)((int)puVar11 + 0x104);
            dVar46 = (double)*(float *)(puVar11 + 0x20);
            dVar47 = (double)*(float *)(puVar11 + 0x21);
            dVar32 = (double)g_FrameTime;
            dVar35 = (double)SQRT((float)(dVar52 * dVar52 +
                                         (double)(float)(dVar41 * dVar41 +
                                                        (double)(float)(dVar42 * dVar42))));
            dVar34 = (double)(float)((double)(float)((double)SQRT((float)(dVar47 * dVar47 +
                                                                         (double)(float)(dVar46 * 
                                                  dVar46 + (double)(float)(dVar45 * dVar45)))) *
                                                  dVar51) / dVar35);
            dVar48 = dVar44;
            if (dVar44 - dVar35 < 0.0) {
              dVar48 = (double)(float)(dVar52 * dVar34);
            }
            dVar37 = dVar44;
            if (dVar44 - dVar35 < 0.0) {
              dVar37 = (double)(float)(dVar42 * dVar34);
            }
            dVar38 = dVar44;
            if (dVar44 - dVar35 < 0.0) {
              dVar38 = (double)(float)(dVar41 * dVar34);
            }
            if (dVar35 - dVar44 < 0.0) {
              dVar48 = (double)(float)(dVar52 * dVar34);
            }
            if (dVar35 - dVar44 < 0.0) {
              dVar37 = (double)(float)(dVar42 * dVar34);
            }
            if (dVar35 - dVar44 < 0.0) {
              dVar38 = (double)(float)(dVar41 * dVar34);
            }
            *(float *)(puVar11 + 0x21) = (float)(dVar47 + dVar48);
            *(float *)((int)puVar11 + 0x104) = (float)(dVar45 + dVar37);
            *(float *)(puVar11 + 0x20) = (float)(dVar46 + dVar38);
            dVar48 = (double)MB_randRangeFloat
                                       ((float)(dVar32 * dVar31),(float)(dVar32 * dVar30));
            fVar4 = *(float *)((int)puVar11 + 0x104);
            fVar5 = *(float *)(puVar11 + 0x20);
            fVar1 = *(float *)(puVar11 + 0x21);
            dVar42 = (double)animationSpeed;
            puVar11[0x42] = (longlong)(int)(dVar42 * dVar29);
            dVar41 = (double)SQRT(fVar1 * fVar1 + fVar5 * fVar5 + fVar4 * fVar4);
            puVar11[0x42] = (longlong)(int)(dVar42 * dVar28);
            fVar10 = (float)(dVar48 / dVar41);
            dVar48 = dVar44;
            if (dVar44 - dVar41 < 0.0) {
              dVar48 = (double)(fVar5 * fVar10);
            }
            dVar42 = dVar44;
            if (dVar44 - dVar41 < 0.0) {
              dVar42 = (double)(fVar4 * fVar10);
            }
            dVar52 = dVar44;
            if (dVar44 - dVar41 < 0.0) {
              dVar52 = (double)(fVar1 * fVar10);
            }
            if (dVar41 - dVar44 < 0.0) {
              dVar48 = (double)(fVar5 * fVar10);
            }
            if (dVar41 - dVar44 < 0.0) {
              dVar42 = (double)(fVar4 * fVar10);
            }
            if (dVar41 - dVar44 < 0.0) {
              dVar52 = (double)(fVar1 * fVar10);
            }
            *(float *)(puVar11 + 0x20) = (float)dVar48;
            *(float *)((int)puVar11 + 0x104) = (float)dVar42;
            *(float *)(puVar11 + 0x21) = (float)dVar52;
            uVar19 = MB_randRange
                               (*(undefined4 *)((int)puVar11 + 0x214),
                                *(undefined4 *)((int)puVar11 + 0x214));
            SpawnPart_27(uVar50,lVar25,uVar15 - 0x1e0,0x7f2f4f6f,uVar19);
            iVar21 = iVar21 + 1;
          } while (iVar21 < 10);
          fVar4 = *(float *)((int)puVar11 + 0x94);
          fVar5 = *(float *)(puVar11 + 0x12);
          fVar1 = *(float *)(puVar11 + 0x13);
          *(undefined4 *)((int)puVar11 + 0xac) = *(undefined4 *)((int)puVar11 + 0x8c);
          fVar6 = pfVar9[4];
          dVar29 = (double)SQRT(fVar1 * fVar1 + fVar5 * fVar5 + fVar4 * fVar4);
          fVar10 = (float)(dVar49 / dVar29);
          dVar28 = dVar44;
          if (dVar44 - dVar29 < 0.0) {
            dVar28 = (double)(fVar5 * fVar10);
          }
          dVar30 = dVar44;
          if (dVar44 - dVar29 < 0.0) {
            dVar30 = (double)(fVar4 * fVar10);
          }
          dVar43 = dVar44;
          if (dVar44 - dVar29 < 0.0) {
            dVar43 = (double)(fVar1 * fVar10);
          }
          if (dVar29 - dVar44 < 0.0) {
            dVar28 = (double)(fVar5 * fVar10);
          }
          if (dVar29 - dVar44 < 0.0) {
            dVar30 = (double)(fVar4 * fVar10);
          }
          if (dVar29 - dVar44 < 0.0) {
            dVar43 = (double)(fVar1 * fVar10);
          }
          *(float *)(puVar11 + 0x12) = (float)dVar28;
          *(float *)((int)puVar11 + 0x94) = (float)dVar30;
          *(float *)(puVar11 + 0x13) = (float)dVar43;
          *(float *)(puVar11 + 0x14) = (float)((double)*(float *)(puVar11 + 0x10) + dVar28);
          *(float *)((int)puVar11 + 0xa4) =
               (float)((double)*(float *)((int)puVar11 + 0x84) + dVar30);
          *(float *)(puVar11 + 0x15) = (float)((double)*(float *)(puVar11 + 0x11) + dVar43);
          iVar21 = CollLine(lVar25,uVar15 - 0x240,0x10,fVar6,uVar15 - 0x1d0);
          if (((iVar21 != 0) && (g_CollOutput.pMoby != (MobyInstance *)0x0)) &&
             ((g_CollOutput.pMoby == g_heroMobyPtr || ((g_CollOutput.pMoby)->oClass == DRONE)))) {
            moby->state = '\x02';
          }
          *(undefined4 *)(puVar11 + 0x14) = *(undefined4 *)(puVar11 + 0x10);
          *(undefined4 *)((int)puVar11 + 0xa4) = *(undefined4 *)((int)puVar11 + 0x84);
          *(undefined4 *)((int)puVar11 + 0xac) = *(undefined4 *)((int)puVar11 + 0x8c);
          fVar10 = pfVar9[4];
          *(float *)(puVar11 + 0x15) = (float)((double)*(float *)(puVar11 + 0x11) + dVar40);
          iVar21 = CollLine(lVar25,uVar15 - 0x240,0x10,fVar10,uVar15 - 0x1d0);
          if (((iVar21 != 0) && (g_CollOutput.pMoby != (MobyInstance *)0x0)) &&
             ((g_CollOutput.pMoby == g_heroMobyPtr || ((g_CollOutput.pMoby)->oClass == DRONE)))) {
            moby->state = '\x02';
          }
          iVar21 = CollMobySphere(dVar51,lVar16 + 0x10);
          if (((iVar21 != 0) && (g_CollOutput.pMoby != (MobyInstance *)0x0)) &&
             ((g_CollOutput.pMoby == g_heroMobyPtr || ((g_CollOutput.pMoby)->oClass == DRONE)))) {
            moby->state = '\x02';
          }
        }
      }
      iVar21 = FastDecTimerS32(pfVar9 + 5);
      if ((((iVar21 != 0) || (pfVar9[4] == 0.0)) ||
          (cVar3 = *(char *)((int)pfVar9[4] + 0x20), cVar3 == -2)) || (cVar3 == -3)) {
        moby->state = '\x02';
      }
    }
  }
  else if (bVar2 < 3) {
    if (piVar26 != (int *)0x0) {
      iVar21 = *piVar26;
      if (((iVar21 != -1) && (g_SoundChannels[iVar21].pMoby == (MobyInstance *)pfVar9[4])) &&
         (g_SoundChannels[iVar21].state != '\0')) {
        sound_Kill(iVar21);
      }
      *piVar26 = -1;
    }
    DeleteMoby(moby);
  }
  return;
}


