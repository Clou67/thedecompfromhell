// game/update/moby869.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x49a3b8-0x49b850
#include "game/update/moby869.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x049a3b8 (0x78 bytes)
void M869_0049a3b8(MobyInstance *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 in_LR;
  GPiece<16> auVar2;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  
  if ((int)param_2 != 0) {
    auVar3 = ZEXT416(0xffffffff);
    auVar3 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
    auVar4 = vectorShiftLeftIntegerWord(auVar3,auVar3);
    auVar3 = loadVectorLeftIndexed(0x84,param_2);
    auVar2 = vectorConvertFromSignedFixedPointWord(auVar3,0);
    auVar3 = loadVectorLeftIndexed(in_LR,0x49a3b0);
    auVar3 = auVar3 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar5 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar3 = vectorAddFloatingPoint
                       (auVar2,auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60);
    auVar3 = vectorMultiplyAddFloatingPoint(auVar5,auVar3,auVar4);
    auVar3 = vectorConvertToSignedFixedPointWordSaturate(auVar3,0);
    auVar3 = auVar3 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar1 = storeVectorElementWordIndexed
                      (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x98,
                       ZEXT48(param_1->pVar));
    *(undefined4 *)((int)param_1->pVar + 0x98U & 0xfffffffc) = uVar1;
  }
  DeleteMoby(param_1);
  return;
}


// 0x049a478 (0x13d8 bytes)
// inlined: FastAtan2 @0x49a784, FastAtan2 @0x49a994, FastAtan2 @0x49ac18, FastAtan2 @0x49af68, FastAtan2 @0x49b184
/* Moby 869 */

void UpdateMoby_869(void *this_,MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  short sVar8;
  MOBY_OCLASSES MVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  ulonglong *puVar13;
  float fVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar20;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar21;
  ulonglong uVar22;
  float *pfVar23;
  longlong lVar24;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong uVar25;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar26;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f29;
  double dVar34;
  ulonglong in_f30;
  double dVar35;
  undefined8 uVar36;
  ulonglong in_f31;
  double dVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar18 = uVar16 - 0x280;
  puVar13 = (ulonglong *)lVar18;
  *puVar13 = uVar16;
  puVar13[0x52] = in_LR;
  puVar13[0x4d] = in_f29;
  puVar13[0x4e] = in_f30;
  puVar13[0x4f] = in_f31;
  puVar13[0x4c] = unaff_r31;
  puVar13[0x4b] = unaff_r30;
  puVar13[0x4a] = unaff_r29;
  puVar13[0x49] = unaff_r28;
  puVar13[0x48] = unaff_r27;
  puVar13[0x47] = unaff_r26;
  if (this_ != (void *)0x0) {
    uVar10 = *(uint *)((int)this_ + 0x78);
    uVar25 = (ulonglong)uVar10;
    if ((uVar10 != 0) && (*(int *)(uVar10 + 0xa0) != 0)) {
      uVar11 = *(uint *)(*(int *)(uVar10 + 0xa0) + 0x78);
      uVar26 = (ulonglong)uVar11;
      MB_getTarget((double)*(float *)(uVar11 + 0x8c),this_,moby,uVar16 - 0x180);
      iVar20 = MB_damage(this_,0x230000,0);
      MB_HandleDamage((MobyInstance *)this_,iVar20,uVar25 + 0x20,0,puVar13 + 0x2a,0,0,4);
      if ((1 < *(int *)(puVar13 + 0x2a)) &&
         (((iVar20 != 0 &&
           (sVar8 = *(short *)(*(int *)(iVar20 + 0x20) + 0xa6), sVar8 != 0x365 && sVar8 != 0x363))
          && (sVar8 != 0x367)))) {
        puVar13[0x12] = 0xffffffffffffffff;
        puVar13[0x14] = 0;
        puVar13[0x15] = 1;
        puVar13[0x16] = 0xffffffffffffffff;
        puVar13[0x17] = 0;
        MB_genericExplosion
                  (0,0,0x4000000000000000,0x3ff0000000000000,0x4010000000000000,0x3ff0000000000000,
                   0x401c000000000000,this_,uVar25 + 0x60,0,0,1,3,3,5);
        MB_SpawnBoltsFromCrate(this_,0,0xffffffffffffffff);
        if (uVar11 != 0) {
          auVar38 = ZEXT416(0xffffffff);
          auVar39 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
          auVar38 = loadVectorLeftIndexed(0x84,uVar26);
          auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
          auVar39 = loadVectorRightIndexed(0x94,uVar26);
          auVar39 = vectorConvertFromSignedFixedPointWord(auVar38 | auVar39,0);
          auVar38 = loadVectorLeftIndexed(0x14,0x49a430);
          auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar38 = vectorAddFloatingPoint
                              (auVar39,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60
                              );
          auVar38 = vectorMultiplyAddFloatingPoint(auVar41,auVar38,auVar40);
          auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
          auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar12 = storeVectorElementWordIndexed
                             (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x98,
                              (ulonglong)*(uint *)((int)this_ + 0x78));
          *(undefined4 *)(*(uint *)((int)this_ + 0x78) + 0x98 & 0xfffffffc) = uVar12;
        }
        DeleteMoby((MobyInstance *)this_);
      }
      bVar1 = *(byte *)((int)this_ + 0x20);
      if (bVar1 < 2) {
        if (bVar1 == 0) {
          if (uVar11 != 0) {
            *(ushort *)((int)this_ + 0x34) = *(ushort *)((int)this_ + 0x34) | 0x1000;
            fVar2 = 0.0;
            *(undefined4 *)(uVar10 + 0x6c) = 0;
            *(undefined4 *)(uVar10 + 0x68) = 0;
            *(undefined4 *)(uVar10 + 100) = 0;
            *(undefined4 *)(uVar10 + 0x60) = 0;
            *(undefined4 *)(uVar10 + 0x70) = *(undefined4 *)((int)this_ + 0x10);
            *(undefined4 *)(uVar10 + 0x74) = *(undefined4 *)((int)this_ + 0x14);
            *(undefined4 *)(uVar10 + 0x78) = *(undefined4 *)((int)this_ + 0x18);
            *(undefined4 *)(uVar10 + 0x7c) = *(undefined4 *)((int)this_ + 0x1c);
            *(undefined4 *)((int)this_ + 0x44) = 0;
            fVar3 = *(float *)(uVar10 + 0x80) - *(float *)((int)this_ + 0x10);
            fVar5 = *(float *)(uVar10 + 0x84) - *(float *)((int)this_ + 0x14);
            fVar7 = ABS(fVar3);
            fVar4 = ABS(fVar5);
            *(float *)((int)puVar13 + 0x184) = fVar3;
            *(float *)(puVar13 + 0x31) = fVar5;
            *(float *)((int)puVar13 + 0x18c) = fVar7 - fVar4;
            uVar25 = (ulonglong)(*(uint *)((int)puVar13 + 0x184) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar13 + 0x18c) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar13 + 0x31) >> 0x1d) & 4;
            fVar3 = ABS(*(float *)((int)puVar13 + 0x184));
            if (*(float *)((int)puVar13 + 0x18c) - 0.0 < 0.0) {
              fVar3 = fVar4;
            }
            fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
            fVar4 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
            fVar14 = ABS(*(float *)(puVar13 + 0x31));
            if (*(float *)((int)puVar13 + 0x18c) - 0.0 < 0.0) {
              fVar14 = fVar7;
            }
            if (0.0 < fVar3) {
              lVar17 = uVar16 - 0x270;
              lVar24 = uVar16 - 0x60;
              lVar21 = uVar16 - 0x70;
              lVar27 = 2;
              fVar3 = (fVar14 - fVar3) / (fVar14 + fVar3);
              fVar7 = fVar3 * fVar3;
              *(float *)((int)puVar13 + 0x21c) = fVar3;
              *(float *)((int)puVar13 + 0x214) = fVar3;
              *(float *)(puVar13 + 0x43) = fVar3;
              *(float *)(puVar13 + 0x42) = fVar3;
              fVar3 = fVar7 * fVar7;
              *(float *)((int)puVar13 + 0x214) = *(float *)((int)puVar13 + 0x214) * fVar7;
              *(float *)(puVar13 + 0x43) = *(float *)(puVar13 + 0x43) * fVar3;
              *(float *)((int)puVar13 + 0x21c) = *(float *)((int)puVar13 + 0x21c) * fVar3 * fVar7;
              do {
                *(float *)((int)lVar17 + 0x210) = *(float *)((int)lVar17 + 0x200) * fVar3 * fVar3;
                iVar20 = (int)lVar21;
                lVar21 = lVar21 + 8;
                lVar17 = lVar17 + 8;
                *(float *)((int)lVar24 + 4) = *(float *)(iVar20 + 4) * fVar3 * fVar3;
                lVar24 = lVar24 + 8;
                lVar27 = lVar27 + -1;
              } while (lVar27 != 0);
              lVar27 = 4;
              lVar24 = uVar16 - 0x70;
              pfVar23 = (float *)&DAT_007358e0;
              lVar17 = lVar18;
              lVar21 = lVar24;
              do {
                fVar3 = *pfVar23;
                fVar7 = pfVar23[1];
                pfVar23 = pfVar23 + 2;
                *(float *)((int)lVar17 + 0x210) = *(float *)((int)lVar17 + 0x210) * fVar3;
                lVar17 = lVar17 + 8;
                *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar7;
                lVar21 = lVar21 + 8;
                lVar27 = lVar27 + -1;
              } while (lVar27 != 0);
              lVar17 = 2;
              do {
                iVar20 = (int)lVar18;
                lVar18 = lVar18 + 0x10;
                iVar15 = (int)lVar24;
                lVar24 = lVar24 + 0x10;
                fVar2 = fVar2 + *(float *)(iVar20 + 0x210) + *(float *)(iVar15 + 4) +
                        *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc);
                lVar17 = lVar17 + -1;
              } while (lVar17 != 0);
              fVar2 = (fVar2 + 0.7853982) * fVar5 + fVar4;
            }
            *(float *)((int)this_ + 0x48) = fVar2;
            *(undefined1 *)((int)this_ + 0xbc) = 0;
            *(undefined1 *)((int)this_ + 0x20) = 1;
          }
        }
        else {
          *(float *)(uVar10 + 0x60) = *(float *)(uVar10 + 0x80) - *(float *)((int)this_ + 0x10);
          *(float *)(uVar10 + 100) = *(float *)(uVar10 + 0x84) - *(float *)((int)this_ + 0x14);
          fVar2 = *(float *)((int)this_ + 0x18);
          *(undefined4 *)(uVar10 + 0x6c) = *(undefined4 *)(uVar10 + 0x8c);
          *(float *)(uVar10 + 0x68) = *(float *)(uVar10 + 0x88) - fVar2;
          fVar2 = *(float *)(uVar10 + 0x80) - *(float *)((int)this_ + 0x10);
          fVar3 = *(float *)(uVar10 + 0x84) - *(float *)((int)this_ + 0x14);
          fVar4 = ABS(fVar2);
          fVar7 = ABS(fVar3);
          *(float *)(puVar13 + 0x2f) = fVar2;
          *(float *)((int)puVar13 + 0x17c) = fVar3;
          *(float *)(puVar13 + 0x30) = fVar4 - fVar7;
          dVar37 = 0.0;
          uVar26 = (ulonglong)(*(uint *)(puVar13 + 0x2f) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar13 + 0x30) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar13 + 0x17c) >> 0x1d) & 4;
          fVar2 = ABS(*(float *)(puVar13 + 0x2f));
          if (*(float *)(puVar13 + 0x30) - 0.0 < 0.0) {
            fVar2 = fVar7;
          }
          fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
          fVar3 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
          fVar5 = ABS(*(float *)((int)puVar13 + 0x17c));
          if (*(float *)(puVar13 + 0x30) - 0.0 < 0.0) {
            fVar5 = fVar4;
          }
          dVar28 = dVar37;
          if (0.0 < fVar2) {
            lVar17 = uVar16 - 0x270;
            lVar24 = uVar16 - 0x80;
            lVar21 = uVar16 - 0x90;
            lVar27 = 2;
            fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
            fVar4 = fVar2 * fVar2;
            *(float *)((int)puVar13 + 0x1fc) = fVar2;
            *(float *)((int)puVar13 + 500) = fVar2;
            *(float *)(puVar13 + 0x3f) = fVar2;
            *(float *)(puVar13 + 0x3e) = fVar2;
            fVar2 = fVar4 * fVar4;
            *(float *)((int)puVar13 + 500) = *(float *)((int)puVar13 + 500) * fVar4;
            *(float *)(puVar13 + 0x3f) = *(float *)(puVar13 + 0x3f) * fVar2;
            *(float *)((int)puVar13 + 0x1fc) = *(float *)((int)puVar13 + 0x1fc) * fVar2 * fVar4;
            do {
              *(float *)((int)lVar17 + 0x1f0) = *(float *)((int)lVar17 + 0x1e0) * fVar2 * fVar2;
              iVar20 = (int)lVar21;
              lVar21 = lVar21 + 8;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)(iVar20 + 4) * fVar2 * fVar2;
              lVar24 = lVar24 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar27 = 4;
            lVar24 = uVar16 - 0x90;
            pfVar23 = (float *)&DAT_007358e0;
            lVar17 = lVar18;
            lVar21 = lVar24;
            do {
              fVar2 = *pfVar23;
              fVar4 = pfVar23[1];
              pfVar23 = pfVar23 + 2;
              *(float *)((int)lVar17 + 0x1f0) = *(float *)((int)lVar17 + 0x1f0) * fVar2;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar4;
              lVar21 = lVar21 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar21 = 2;
            lVar17 = lVar18;
            do {
              iVar20 = (int)lVar17;
              iVar15 = (int)lVar24;
              lVar17 = lVar17 + 0x10;
              lVar24 = lVar24 + 0x10;
              dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar20 + 0x1f0)) +
                                *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                               *(float *)(iVar15 + 0xc));
              lVar21 = lVar21 + -1;
            } while (lVar21 != 0);
            dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar7 + fVar3);
          }
          OrganicDeltAngSpeed
                    (dVar28,(double)(g_FrameTimeSq * 6.2831855),
                     (double)(g_FrameTime * 3.1415927),
                     (double)(g_FrameTime * 6.2831855),this_,&DAT_00720000,uVar25 + 0xa4);
          fVar2 = *(float *)(uVar10 + 0x80);
          *(float *)((int)this_ + 0x10) = fVar2;
          fVar3 = *(float *)(uVar10 + 0x84);
          iVar20 = *(int *)(puVar13 + 0x28);
          *(float *)((int)this_ + 0x14) = fVar3;
          fVar7 = *(float *)(uVar10 + 0x88);
          *(float *)((int)this_ + 0x18) = fVar7;
          *(undefined4 *)((int)this_ + 0x1c) = *(undefined4 *)(uVar10 + 0x8c);
          if (iVar20 != 0) {
            fVar5 = fVar3 - *(float *)((int)puVar13 + 0x104);
            fVar4 = fVar2 - *(float *)(puVar13 + 0x20);
            fVar7 = fVar7 - *(float *)(puVar13 + 0x21);
            if ((SQRT(fVar7 * fVar7 + fVar4 * fVar4 + fVar5 * fVar5) < *(float *)(uVar11 + 0x8c)) &&
               (fVar4 = fVar3 - *(float *)(*(int *)(uVar10 + 0xa0) + 0x14),
               fVar7 = fVar2 - *(float *)(*(int *)(uVar10 + 0xa0) + 0x10),
               2.0 < SQRT(fVar7 * fVar7 + fVar4 * fVar4))) {
              fVar3 = *(float *)((int)puVar13 + 0x104) - fVar3;
              fVar2 = *(float *)(puVar13 + 0x20) - fVar2;
              dVar31 = ABS((double)fVar3);
              dVar30 = ABS((double)fVar2);
              *(float *)((int)puVar13 + 0x16c) = fVar2;
              *(float *)(puVar13 + 0x2e) = fVar3;
              fVar2 = *(float *)((int)this_ + 0x48);
              *(float *)((int)puVar13 + 0x174) = (float)(dVar30 - dVar31);
              uVar26 = (ulonglong)(*(uint *)((int)puVar13 + 0x16c) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)((int)puVar13 + 0x174) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)(puVar13 + 0x2e) >> 0x1d) & 4;
              dVar28 = ABS((double)*(float *)((int)puVar13 + 0x16c));
              if ((double)*(float *)((int)puVar13 + 0x174) - dVar37 < 0.0) {
                dVar28 = dVar31;
              }
              fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
              dVar31 = ABS((double)*(float *)(puVar13 + 0x2e));
              if ((double)*(float *)((int)puVar13 + 0x174) - dVar37 < 0.0) {
                dVar31 = dVar30;
              }
              fVar7 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
              if (dVar37 < dVar28) {
                lVar17 = uVar16 - 0x270;
                lVar21 = uVar16 - 0xb0;
                lVar24 = uVar16 - 0xa0;
                lVar27 = 2;
                fVar4 = (float)(dVar31 - dVar28) / (float)(dVar31 + dVar28);
                fVar5 = fVar4 * fVar4;
                *(float *)((int)puVar13 + 0x1dc) = fVar4;
                *(float *)((int)puVar13 + 0x1d4) = fVar4;
                *(float *)(puVar13 + 0x3b) = fVar4;
                *(float *)(puVar13 + 0x3a) = fVar4;
                fVar4 = fVar5 * fVar5;
                *(float *)((int)puVar13 + 0x1d4) = *(float *)((int)puVar13 + 0x1d4) * fVar5;
                *(float *)(puVar13 + 0x3b) = *(float *)(puVar13 + 0x3b) * fVar4;
                *(float *)((int)puVar13 + 0x1dc) = *(float *)((int)puVar13 + 0x1dc) * fVar4 * fVar5;
                do {
                  *(float *)((int)lVar17 + 0x1d0) = *(float *)((int)lVar17 + 0x1c0) * fVar4 * fVar4;
                  iVar20 = (int)lVar21;
                  lVar17 = lVar17 + 8;
                  lVar21 = lVar21 + 8;
                  *(float *)((int)lVar24 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
                  lVar24 = lVar24 + 8;
                  lVar27 = lVar27 + -1;
                } while (lVar27 != 0);
                lVar27 = 4;
                lVar24 = uVar16 - 0xb0;
                pfVar23 = (float *)&DAT_007358e0;
                lVar17 = lVar18;
                lVar21 = lVar24;
                do {
                  fVar4 = *pfVar23;
                  fVar5 = pfVar23[1];
                  pfVar23 = pfVar23 + 2;
                  *(float *)((int)lVar17 + 0x1d0) = *(float *)((int)lVar17 + 0x1d0) * fVar4;
                  lVar17 = lVar17 + 8;
                  *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar5;
                  lVar21 = lVar21 + 8;
                  lVar27 = lVar27 + -1;
                } while (lVar27 != 0);
                lVar17 = 2;
                do {
                  iVar20 = (int)lVar18;
                  iVar15 = (int)lVar24;
                  lVar18 = lVar18 + 0x10;
                  lVar24 = lVar24 + 0x10;
                  dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar20 + 0x1d0)) +
                                    *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                                   *(float *)(iVar15 + 0xc));
                  lVar17 = lVar17 + -1;
                } while (lVar17 != 0);
                dVar37 = (double)((float)(dVar37 + 0.7853981852531433) * fVar3 + fVar7);
              }
              dVar37 = (double)FastSubRots(fVar2,(float)dVar37);
              if (dVar37 < (double)(*(float *)(uVar11 + 0x88) * 0.017453292)) {
                auVar38 = ZEXT416(0xffffffff);
                auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
                auVar39 = vectorShiftLeftIntegerWord(auVar38,auVar38);
                *(float *)(uVar10 + 0x9c) = *(float *)(uVar11 + 0x7c) * g_FrameTime;
                auVar38 = loadVectorLeftIndexed(0x28,0x49a430);
                auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
                auVar39 = vectorMultiplyAddFloatingPoint
                                    (auVar40,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 |
                                             auVar38 << 0x60,auVar39);
                auVar38 = ZEXT416(0xffffffff);
                auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
                auVar40 = vectorShiftLeftIntegerWord(auVar38,auVar38);
                auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
                auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
                uVar12 = storeVectorElementWordIndexed
                                   (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,
                                    0x98,uVar25);
                *(undefined4 *)(uVar10 + 0x98 & 0xfffffffc) = uVar12;
                *(undefined1 *)((int)this_ + 0xbc) = 1;
                auVar38 = loadVectorLeftIndexed(0x2c,0x49a430);
                auVar39 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
                auVar38 = vectorMultiplyAddFloatingPoint
                                    (auVar39,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 |
                                             auVar38 << 0x60,auVar40);
                auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
                auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
                uVar12 = storeVectorElementWordIndexed
                                   (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,
                                    0xac,uVar25);
                *(undefined4 *)(uVar10 + 0xac & 0xfffffffc) = uVar12;
                *(undefined1 *)((int)this_ + 0x20) = 2;
              }
            }
          }
        }
      }
      else if (bVar1 < 3) {
        if (*(char *)((int)this_ + 0xbc) == '\x01') {
          *(float *)((int)this_ + 0x18) = DAT_0071f408 * 0.1 + *(float *)((int)this_ + 0x18);
          iVar20 = FastDecTimerS32(uVar25 + 0xac);
          if (iVar20 != 0) {
            auVar38 = ZEXT416(0xffffffff);
            auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
            auVar39 = vectorShiftLeftIntegerWord(auVar38,auVar38);
            auVar38 = loadVectorLeftIndexed(0x2c,0x49a430);
            auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar38 = vectorMultiplyAddFloatingPoint
                                (auVar40,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 |
                                         auVar38 << 0x60,auVar39);
            auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
            auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar12 = storeVectorElementWordIndexed
                               (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0xac,
                                uVar25);
            *(undefined4 *)(uVar10 + 0xac & 0xfffffffc) = uVar12;
            *(undefined1 *)((int)this_ + 0xbc) = 2;
          }
        }
        else if (*(char *)((int)this_ + 0xbc) == '\x02') {
          *(float *)((int)this_ + 0x18) = -(DAT_0071f408 * 0.1 - *(float *)((int)this_ + 0x18));
          iVar20 = FastDecTimerS32(uVar25 + 0xac);
          if (iVar20 != 0) {
            *(undefined1 *)((int)this_ + 0xbc) = 0;
          }
        }
        fVar2 = *(float *)(puVar13 + 0x20) - *(float *)((int)this_ + 0x10);
        fVar3 = *(float *)((int)puVar13 + 0x104) - *(float *)((int)this_ + 0x14);
        fVar4 = ABS(fVar2);
        fVar7 = ABS(fVar3);
        *(float *)(puVar13 + 0x2c) = fVar2;
        *(float *)((int)puVar13 + 0x164) = fVar3;
        *(float *)(puVar13 + 0x2d) = fVar4 - fVar7;
        dVar37 = 0.0;
        uVar19 = (ulonglong)(*(uint *)(puVar13 + 0x2c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar13 + 0x2d) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0x164) >> 0x1d) & 4;
        uVar22 = uVar19 << 2 | 0x735900;
        fVar2 = ABS(*(float *)(puVar13 + 0x2c));
        if (*(float *)(puVar13 + 0x2d) - 0.0 < 0.0) {
          fVar2 = fVar7;
        }
        fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
        fVar3 = *(float *)((int)uVar22 + 4);
        fVar5 = ABS(*(float *)((int)puVar13 + 0x164));
        if (*(float *)(puVar13 + 0x2d) - 0.0 < 0.0) {
          fVar5 = fVar4;
        }
        dVar28 = dVar37;
        if (0.0 < fVar2) {
          lVar17 = uVar16 - 0x270;
          lVar21 = uVar16 - 0xd0;
          lVar24 = uVar16 - 0xc0;
          lVar27 = 2;
          fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
          fVar4 = fVar2 * fVar2;
          *(float *)((int)puVar13 + 0x1bc) = fVar2;
          *(float *)((int)puVar13 + 0x1b4) = fVar2;
          *(float *)(puVar13 + 0x37) = fVar2;
          *(float *)(puVar13 + 0x36) = fVar2;
          fVar2 = fVar4 * fVar4;
          *(float *)((int)puVar13 + 0x1b4) = *(float *)((int)puVar13 + 0x1b4) * fVar4;
          *(float *)(puVar13 + 0x37) = *(float *)(puVar13 + 0x37) * fVar2;
          *(float *)((int)puVar13 + 0x1bc) = *(float *)((int)puVar13 + 0x1bc) * fVar2 * fVar4;
          do {
            *(float *)((int)lVar17 + 0x1b0) = *(float *)((int)lVar17 + 0x1a0) * fVar2 * fVar2;
            iVar20 = (int)lVar21;
            lVar17 = lVar17 + 8;
            lVar21 = lVar21 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)(iVar20 + 4) * fVar2 * fVar2;
            lVar24 = lVar24 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar24 = uVar16 - 0xd0;
          uVar22 = ZEXT48(&DAT_007358e0);
          lVar17 = lVar18;
          lVar21 = lVar24;
          do {
            pfVar23 = (float *)uVar22;
            fVar2 = pfVar23[1];
            uVar22 = uVar22 + 8;
            *(float *)((int)lVar17 + 0x1b0) = *(float *)((int)lVar17 + 0x1b0) * *pfVar23;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar2;
            lVar21 = lVar21 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar21 = 2;
          lVar17 = lVar18;
          do {
            iVar20 = (int)lVar17;
            lVar17 = lVar17 + 0x10;
            iVar15 = (int)lVar24;
            lVar24 = lVar24 + 0x10;
            dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar20 + 0x1b0)) +
                              *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                             *(float *)(iVar15 + 0xc));
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar7 + fVar3);
        }
        dVar35 = 3.1415927410125732;
        dVar34 = 6.2831854820251465;
        OrganicDeltAngSpeed
                  (dVar28,(double)(g_FrameTimeSq * 3.1415927),
                   (double)(g_FrameTime * 3.1415927),
                   (double)(g_FrameTime * 6.2831855),this_,uVar22,uVar25 + 0xa4);
        iVar20 = *(int *)(puVar13 + 0x28);
        fVar2 = *(float *)((int)this_ + 0x14) - *(float *)(iVar20 + 0x14);
        fVar3 = *(float *)((int)this_ + 0x10) - *(float *)(iVar20 + 0x10);
        fVar7 = *(float *)(iVar20 + 0x18) - *(float *)((int)this_ + 0x18);
        dVar33 = ABS((double)fVar7);
        fVar3 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
        fVar2 = *(float *)((int)this_ + 0x44);
        dVar30 = (double)g_FrameTimeSq;
        dVar31 = (double)g_FrameTime;
        *(float *)(puVar13 + 0x2b) = fVar7;
        dVar32 = ABS((double)fVar3);
        *(float *)((int)puVar13 + 0x154) = fVar3;
        *(float *)((int)puVar13 + 0x15c) = (float)(dVar32 - dVar33);
        uVar19 = (ulonglong)(*(uint *)((int)puVar13 + 0x154) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0x15c) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar13 + 0x2b) >> 0x1d) & 4;
        uVar22 = uVar19 << 2 | 0x735900;
        uVar19 = uVar19 << 2;
        dVar28 = ABS((double)*(float *)((int)puVar13 + 0x154));
        if ((double)*(float *)((int)puVar13 + 0x15c) - dVar37 < 0.0) {
          dVar28 = dVar33;
        }
        fVar3 = *(float *)(&g_atanQuadrantTable + (int)uVar19);
        dVar33 = ABS((double)*(float *)(puVar13 + 0x2b));
        if ((double)*(float *)((int)puVar13 + 0x15c) - dVar37 < 0.0) {
          dVar33 = dVar32;
        }
        fVar7 = *(float *)((int)uVar22 + 4);
        dVar32 = dVar37;
        if (dVar37 < dVar28) {
          lVar17 = uVar16 - 0x270;
          lVar24 = uVar16 - 0xe0;
          lVar21 = uVar16 - 0xf0;
          lVar27 = 2;
          fVar4 = (float)(dVar33 - dVar28) / (float)(dVar33 + dVar28);
          fVar5 = fVar4 * fVar4;
          *(float *)((int)puVar13 + 0x19c) = fVar4;
          *(float *)((int)puVar13 + 0x194) = fVar4;
          *(float *)(puVar13 + 0x33) = fVar4;
          *(float *)(puVar13 + 0x32) = fVar4;
          fVar4 = fVar5 * fVar5;
          *(float *)((int)puVar13 + 0x194) = *(float *)((int)puVar13 + 0x194) * fVar5;
          *(float *)(puVar13 + 0x33) = *(float *)(puVar13 + 0x33) * fVar4;
          *(float *)((int)puVar13 + 0x19c) = *(float *)((int)puVar13 + 0x19c) * fVar4 * fVar5;
          do {
            *(float *)((int)lVar17 + 400) = *(float *)((int)lVar17 + 0x180) * fVar4 * fVar4;
            iVar20 = (int)lVar21;
            lVar21 = lVar21 + 8;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
            lVar24 = lVar24 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar24 = uVar16 - 0xf0;
          uVar22 = ZEXT48(&DAT_007358e0);
          lVar17 = lVar18;
          lVar21 = lVar24;
          do {
            pfVar23 = (float *)uVar22;
            fVar4 = pfVar23[1];
            uVar22 = uVar22 + 8;
            *(float *)((int)lVar17 + 400) = *(float *)((int)lVar17 + 400) * *pfVar23;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar4;
            lVar21 = lVar21 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar17 = 2;
          dVar28 = dVar37;
          do {
            iVar20 = (int)lVar18;
            iVar15 = (int)lVar24;
            lVar18 = lVar18 + 0x10;
            lVar24 = lVar24 + 0x10;
            dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar20 + 400)) +
                              *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                             *(float *)(iVar15 + 0xc));
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          uVar19 = ZEXT48(&DAT_0049a430);
          dVar32 = (double)((float)(dVar28 + 0.7853981852531433) * fVar3 + fVar7);
        }
        dVar28 = (double)MB_DeltAngSpeed
                                   ((double)fVar2,dVar32,(double)(float)(dVar30 * dVar35),
                                    (double)(float)(dVar31 * dVar35),
                                    (double)(float)(dVar31 * dVar34),uVar19,uVar22,uVar25 + 0xa8);
        fVar2 = *(float *)(puVar13 + 0x20);
        *(float *)((int)this_ + 0x44) = (float)dVar28;
        fVar3 = g_FrameTime;
        dVar30 = (double)(fVar2 - *(float *)((int)this_ + 0x10));
        dVar31 = (double)(*(float *)((int)puVar13 + 0x104) - *(float *)((int)this_ + 0x14));
        dVar28 = (double)(*(float *)(puVar13 + 0x21) - *(float *)((int)this_ + 0x18));
        if (*(char *)((int)this_ + 0xbc) != '\0') {
          dVar28 = dVar37;
        }
        dVar34 = (double)SQRT((float)(dVar28 * dVar28 +
                                     (double)(float)(dVar30 * dVar30 +
                                                    (double)(float)(dVar31 * dVar31))));
        dVar33 = (double)(float)((double)(g_FrameTimeSq * 30.0) / dVar34);
        dVar32 = dVar37;
        if (dVar37 - dVar34 < 0.0) {
          dVar32 = (double)(float)(dVar31 * dVar33);
        }
        dVar35 = dVar37;
        if (dVar37 - dVar34 < 0.0) {
          dVar35 = (double)(float)(dVar30 * dVar33);
        }
        dVar29 = dVar37;
        if (dVar37 - dVar34 < 0.0) {
          dVar29 = (double)(float)(dVar28 * dVar33);
        }
        if (dVar34 - dVar37 < 0.0) {
          dVar32 = (double)(float)(dVar31 * dVar33);
        }
        if (dVar34 - dVar37 < 0.0) {
          dVar35 = (double)(float)(dVar30 * dVar33);
        }
        if (dVar34 - dVar37 < 0.0) {
          dVar29 = (double)(float)(dVar28 * dVar33);
        }
        fVar2 = (float)((double)*(float *)(uVar10 + 100) + dVar32);
        fVar7 = (float)((double)*(float *)(uVar10 + 0x60) + dVar35);
        fVar4 = (float)((double)*(float *)(uVar10 + 0x68) + dVar29);
        *(float *)(uVar10 + 0x60) = fVar7;
        *(float *)(uVar10 + 100) = fVar2;
        *(float *)(uVar10 + 0x68) = fVar4;
        fVar5 = SQRT(fVar4 * fVar4 + fVar7 * fVar7 + fVar2 * fVar2);
        if (fVar3 * 10.0 < fVar5) {
          fVar5 = (fVar3 * 10.0) / fVar5;
          fVar7 = fVar7 * fVar5;
          *(float *)(uVar10 + 0x60) = fVar7;
          *(float *)(uVar10 + 100) = fVar2 * fVar5;
          *(float *)(uVar10 + 0x68) = fVar4 * fVar5;
        }
        fVar7 = *(float *)((int)this_ + 0x10) + fVar7;
        *(float *)((int)this_ + 0x10) = fVar7;
        fVar2 = *(float *)((int)this_ + 0x14) + *(float *)(uVar10 + 100);
        *(float *)((int)this_ + 0x14) = fVar2;
        fVar3 = *(float *)((int)this_ + 0x18) + *(float *)(uVar10 + 0x68);
        *(float *)((int)this_ + 0x18) = fVar3;
        fVar2 = fVar2 - *(float *)(uVar10 + 0x74);
        fVar7 = fVar7 - *(float *)(uVar10 + 0x70);
        fVar3 = fVar3 - *(float *)(uVar10 + 0x78);
        if (64.0 < SQRT(fVar3 * fVar3 + fVar7 * fVar7 + fVar2 * fVar2)) {
          if (uVar11 != 0) {
            auVar38 = ZEXT416(0xffffffff);
            auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
            auVar40 = vectorShiftLeftIntegerWord(auVar38,auVar38);
            auVar38 = loadVectorLeftIndexed(0x84,uVar26);
            auVar39 = loadVectorRightIndexed(0x94,uVar26);
            auVar39 = vectorConvertFromSignedFixedPointWord(auVar38 | auVar39,0);
            auVar38 = loadVectorLeftIndexed(0x14,0x49a430);
            auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar38 = vectorAddFloatingPoint
                                (auVar39,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 |
                                         auVar38 << 0x60);
            auVar38 = vectorMultiplyAddFloatingPoint(auVar41,auVar38,auVar40);
            auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
            auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar12 = storeVectorElementWordIndexed
                               (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x98,
                                (ulonglong)*(uint *)((int)this_ + 0x78));
            *(undefined4 *)(*(uint *)((int)this_ + 0x78) + 0x98 & 0xfffffffc) = uVar12;
          }
          DeleteMoby((MobyInstance *)this_);
        }
        uVar36 = 0x3ff0000000000000;
        SetCollDamIn(0x3ff0000000000000,uVar16 - 0x1b0,this_,0x10001);
        uVar12 = *(undefined4 *)((int)this_ + 0x14);
        *(undefined4 *)(puVar13 + 0x18) = *(undefined4 *)((int)this_ + 0x10);
        uVar6 = *(undefined4 *)((int)this_ + 0x1c);
        *(undefined4 *)((int)puVar13 + 0xc4) = uVar12;
        *(undefined4 *)((int)puVar13 + 0xcc) = uVar6;
        *(float *)(puVar13 + 0x19) = *(float *)((int)this_ + 0x18) + 0.75;
        iVar20 = CollMobySphere(uVar16 - 0x1c0);
        if (((iVar20 != 0) && (g_CollOutput.pMoby != (MobyInstance *)0x0)) &&
           ((MVar9 = (g_CollOutput.pMoby)->oClass, MVar9 != 0x365 && MVar9 != 0x363 &&
            (MVar9 != BOLTCRATE_POSSIBLY_FOR_METAL_DETECTOR)))) {
          puVar13[0x12] = 0xffffffffffffffff;
          puVar13[0x14] = 0;
          puVar13[0x15] = 1;
          puVar13[0x16] = 0xffffffffffffffff;
          puVar13[0x17] = 0;
          MB_genericExplosion
                    (dVar37,dVar37,0x4000000000000000,uVar36,0x4010000000000000,uVar36,
                     0x401c000000000000,this_,uVar25 + 0x60,0,&DAT_0049a430,0,3,3,5);
          if (uVar11 != 0) {
            auVar38 = ZEXT416(0xffffffff);
            auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
            auVar40 = vectorShiftLeftIntegerWord(auVar38,auVar38);
            auVar38 = loadVectorLeftIndexed(0x84,uVar26);
            auVar39 = loadVectorRightIndexed(0x94,uVar26);
            auVar39 = vectorConvertFromSignedFixedPointWord(auVar38 | auVar39,0);
            auVar38 = loadVectorLeftIndexed(0x14,0x49a430);
            auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar38 = vectorAddFloatingPoint
                                (auVar39,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 |
                                         auVar38 << 0x60);
            auVar38 = vectorMultiplyAddFloatingPoint(auVar41,auVar38,auVar40);
            auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
            auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar12 = storeVectorElementWordIndexed
                               (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x98,
                                (ulonglong)*(uint *)((int)this_ + 0x78));
            *(undefined4 *)(*(uint *)((int)this_ + 0x78) + 0x98 & 0xfffffffc) = uVar12;
          }
          DeleteMoby((MobyInstance *)this_);
        }
        uVar12 = *(undefined4 *)((int)this_ + 0x14);
        *(undefined4 *)(puVar13 + 0x18) = *(undefined4 *)((int)this_ + 0x10);
        uVar6 = *(undefined4 *)((int)this_ + 0x1c);
        *(undefined4 *)((int)puVar13 + 0xc4) = uVar12;
        *(undefined4 *)((int)puVar13 + 0xcc) = uVar6;
        *(float *)(puVar13 + 0x19) = *(float *)((int)this_ + 0x18) + 0.55;
        iVar20 = CollSphere(uVar16 - 0x1c0);
        if (iVar20 != 0) {
          fVar2 = g_CollOutput.push.y - *(float *)((int)puVar13 + 0xc4);
          fVar3 = g_CollOutput.push.z - *(float *)(puVar13 + 0x19);
          *(float *)((int)this_ + 0x10) =
               *(float *)((int)this_ + 0x10) + (g_CollOutput.push.x - *(float *)(puVar13 + 0x18));
          *(float *)((int)this_ + 0x14) = *(float *)((int)this_ + 0x14) + fVar2;
          *(float *)((int)this_ + 0x18) = *(float *)((int)this_ + 0x18) + fVar3;
        }
        if (*(int *)(uVar10 + 0x98) == 0) {
          if (uVar11 != 0) {
            auVar38 = ZEXT416(0xffffffff);
            auVar39 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
            auVar38 = loadVectorLeftIndexed(0x84,uVar26);
            auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
            auVar39 = loadVectorRightIndexed(0x94,uVar26);
            auVar39 = vectorConvertFromSignedFixedPointWord(auVar38 | auVar39,0);
            auVar38 = loadVectorLeftIndexed(0x14,0x49a430);
            auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar38 = vectorAddFloatingPoint
                                (auVar39,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 |
                                         auVar38 << 0x60);
            auVar38 = vectorMultiplyAddFloatingPoint(auVar41,auVar38,auVar40);
            auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
            auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar12 = storeVectorElementWordIndexed
                               (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x98,
                                (ulonglong)*(uint *)((int)this_ + 0x78));
            *(undefined4 *)(*(uint *)((int)this_ + 0x78) + 0x98 & 0xfffffffc) = uVar12;
          }
          DeleteMoby((MobyInstance *)this_);
        }
      }
      else if (bVar1 < 4) {
        puVar13[0x12] = 0xffffffffffffffff;
        puVar13[0x14] = 0;
        puVar13[0x15] = 1;
        puVar13[0x16] = 0xffffffffffffffff;
        puVar13[0x17] = 0;
        MB_genericExplosion
                  (0,0,0x4000000000000000,0x3ff0000000000000,0x4010000000000000,0x3ff0000000000000,
                   0x401c000000000000,this_,uVar25 + 0x60,0,0,1,3,3,5);
        if (uVar11 != 0) {
          auVar38 = ZEXT416(0xffffffff);
          auVar39 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
          auVar38 = loadVectorLeftIndexed(0x84,uVar26);
          auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
          auVar39 = loadVectorRightIndexed(0x94,uVar26);
          auVar39 = vectorConvertFromSignedFixedPointWord(auVar38 | auVar39,0);
          auVar38 = loadVectorLeftIndexed(0x14,0x49a430);
          auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar38 = vectorAddFloatingPoint
                              (auVar39,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60
                              );
          auVar38 = vectorMultiplyAddFloatingPoint(auVar41,auVar38,auVar40);
          auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
          auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar12 = storeVectorElementWordIndexed
                             (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x98,
                              (ulonglong)*(uint *)((int)this_ + 0x78));
          *(undefined4 *)(*(uint *)((int)this_ + 0x78) + 0x98 & 0xfffffffc) = uVar12;
        }
        DeleteMoby((MobyInstance *)this_);
      }
      MB_RegisterLameShadow(1.0,(MobyInstance *)this_);
    }
  }
  return;
}


