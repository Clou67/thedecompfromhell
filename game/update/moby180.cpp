// game/update/moby180.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x2ba398-0x2bab80
#include "game/update/moby180.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby177.h"
#include "idol/fastfunc.h"

// 0x02ba398 (0x14 bytes)
void M180_002ba398(void)

{
  DAT_007b7bec = 0x10000;
  return;
}


// 0x02ba3d8 (0x7a8 bytes)
/* Moby 180 */

void UpdateMoby_180(MobyInstance *moby)

{
  bool bVar1;
  u8 uVar2;
  ulonglong *puVar3;
  int iVar4;
  bool bVar5;
  byte bVar6;
  float fVar7;
  float fVar8;
  ulonglong uVar9;
  int iVar10;
  short sVar12;
  float *pfVar11;
  undefined2 *puVar13;
  short *psVar14;
  short *psVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  ulonglong unaff_r15;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  float *pfVar18;
  ulonglong unaff_r20;
  float *pfVar20;
  longlong lVar19;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  float *pfVar22;
  longlong lVar21;
  float *pfVar23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  int iVar24;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int iVar25;
  ulonglong unaff_r29;
  int iVar26;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  ulonglong in_f25;
  double dVar29;
  ulonglong in_f26;
  double dVar30;
  undefined8 uVar31;
  ulonglong in_f27;
  double dVar32;
  undefined8 uVar33;
  ulonglong in_f28;
  double dVar34;
  ulonglong in_f29;
  double dVar35;
  ulonglong in_f30;
  double dVar36;
  ulonglong in_f31;
  double dVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  float local_140 [80];
  
  uVar9 = ZEXT48(&stack0x00000000);
  puVar3 = (ulonglong *)(uVar9 - 0x1b0);
  *puVar3 = uVar9;
  puVar3[0x38] = in_LR;
  puVar3[0x2f] = in_f25;
  puVar3[0x30] = in_f26;
  puVar3[0x31] = in_f27;
  puVar3[0x32] = in_f28;
  puVar3[0x33] = in_f29;
  puVar3[0x34] = in_f30;
  puVar3[0x35] = in_f31;
  puVar3[0x2e] = unaff_r31;
  puVar3[0x2a] = unaff_r27;
  puVar3[0x2d] = unaff_r30;
  bVar5 = false;
  puVar3[0x27] = unaff_r24;
  bVar1 = g_heroState == WALLOPER_SOMETHING;
  uVar2 = g_heroMobyPtr->animationId;
  puVar3[0x2c] = unaff_r29;
  puVar3[0x2b] = unaff_r28;
  puVar3[0x29] = unaff_r26;
  puVar3[0x28] = unaff_r25;
  puVar3[0x26] = unaff_r23;
  puVar3[0x25] = unaff_r22;
  puVar3[0x24] = unaff_r21;
  puVar3[0x23] = unaff_r20;
  puVar3[0x22] = unaff_r19;
  puVar3[0x21] = unaff_r18;
  puVar3[0x20] = unaff_r17;
  puVar3[0x1f] = unaff_r16;
  puVar3[0x1e] = unaff_r15;
  if (uVar2 != 0x82) {
    DAT_0072240c = 0x3dcccccd;
  }
  if (moby->state == '\0') {
    moby->state = '\x02';
    lVar27 = 5;
    auVar38 = loadVectorLeftIndexed(0x7c38,0x7b0000);
    puVar13 = &DAT_010a0b70;
    puVar16 = &DAT_010a0b98;
    puVar17 = &DAT_010a0bac;
    do {
      *puVar13 = 0;
      *puVar16 = 2;
      *puVar17 = 1;
      puVar13[1] = 0;
      puVar16[1] = 2;
      puVar13 = puVar13 + 2;
      puVar17[1] = 1;
      puVar16 = puVar16 + 2;
      puVar17 = puVar17 + 2;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    auVar39 = vectorConvertFromSignedFixedPointWord(auVar38,0);
    auVar40 = loadVectorLeftIndexed(in_LR,0x2ba3b0);
    auVar38 = ZEXT416(0xffffffff);
    auVar41 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
    auVar38 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar40 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
    auVar38 = ZEXT416(0xffffffff);
    auVar43 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
    auVar38 = loadVectorLeftIndexed(0x7c3c,0x7b0000);
    auVar42 = vectorShiftLeftIntegerWord(auVar41,auVar41);
    auVar41 = vectorConvertFromSignedFixedPointWord(auVar38,0);
    auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar43 = vectorShiftLeftIntegerWord(auVar43,auVar43);
    auVar38 = vectorAddFloatingPoint(auVar39,auVar40);
    auVar39 = vectorAddFloatingPoint(auVar41,auVar40);
    auVar38 = vectorMultiplyAddFloatingPoint(auVar44,auVar38,auVar42);
    auVar39 = vectorMultiplyAddFloatingPoint(auVar44,auVar39,auVar43);
    auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
    auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
    auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
    DAT_010a0bc0 = storeVectorElementWordIndexed
                             (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0xbc0,
                              0x10a0000);
    auVar38 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
    DAT_010a0bc4 = storeVectorElementWordIndexed
                             (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0xbc4,
                              0x10a0000);
    fVar8 = DAT_010a0bc8;
  }
  else {
    fVar8 = DAT_010a0bc8;
    if (moby->state == '\x02') {
      if (bVar1) {
        dVar34 = (double)BlendAnimFrame(moby);
        fVar8 = DAT_010a0bc8;
        if (6.0 <= dVar34) {
          bVar5 = true;
          iVar10 = FastDecTimerS32(&DAT_010a0bc0);
          if (iVar10 == 0) {
            dVar34 = (double)FastIntToDouble(DAT_010a0bc0);
            puVar3[0x1c] = (longlong)DAT_007b7c38;
            puVar3[0x1c] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar3[0x1c] + 0.5));
            dVar35 = (double)FastIntToDouble(*(undefined4 *)((int)puVar3 + 0xe4));
            fVar8 = 1.0 - (float)(dVar34 / dVar35);
          }
          else if (dVar34 < 12.0) {
            fVar8 = 1.0;
          }
          else {
            iVar10 = FastDecTimerS32(&DAT_010a0bc4);
            fVar8 = 0.0;
            if (iVar10 == 0) {
              dVar34 = (double)FastIntToDouble(DAT_010a0bc4);
              puVar3[0x1c] = (longlong)DAT_007b7c3c;
              puVar3[0x1c] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar3[0x1c] + 0.5))
              ;
              dVar35 = (double)FastIntToDouble(*(undefined4 *)((int)puVar3 + 0xe4));
              fVar8 = (float)(dVar34 / dVar35);
            }
          }
        }
      }
      else {
        auVar38 = ZEXT416(0xffffffff);
        auVar39 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
        auVar38 = ZEXT416(0xffffffff);
        auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
        auVar42 = vectorShiftLeftIntegerWord(auVar39,auVar39);
        auVar43 = vectorShiftLeftIntegerWord(auVar38,auVar38);
        auVar38 = loadVectorLeftIndexed(0x7c38,0x7b0000);
        auVar40 = loadVectorLeftIndexed(in_LR,0x2ba3b0);
        auVar41 = loadVectorLeftIndexed(0x7c3c,0x7b0000);
        auVar39 = vectorConvertFromSignedFixedPointWord(auVar38,0);
        auVar38 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar40 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
        auVar41 = vectorConvertFromSignedFixedPointWord(auVar41,0);
        auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar38 = vectorAddFloatingPoint(auVar39,auVar40);
        auVar39 = vectorAddFloatingPoint(auVar41,auVar40);
        auVar38 = vectorMultiplyAddFloatingPoint(auVar44,auVar38,auVar42);
        auVar39 = vectorMultiplyAddFloatingPoint(auVar44,auVar39,auVar43);
        auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
        auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
        auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
        DAT_010a0bc0 = storeVectorElementWordIndexed
                                 (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,
                                  0xbc0,0x10a0000);
        DAT_010a0bc4 = storeVectorElementWordIndexed
                                 (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                                  0xbc4,0x10a0000);
        puVar3[0x1c] = (longlong)(int)(animationSpeed * 12.5);
        MB_SetAnimation(moby,1,0,*(undefined4 *)((int)puVar3 + 0xe4));
        fVar8 = DAT_010a0bc8;
      }
    }
  }
  DAT_010a0bc8 = fVar8;
  iVar10 = 0;
  psVar14 = &DAT_010a0b70;
  bVar6 = 0;
  dVar34 = (double)(moby->transform).v1.w;
  dVar37 = (double)((moby->transform).v1.x * -0.5 + (moby->pos).x);
  dVar36 = (double)((moby->transform).v1.y * -0.5 + (moby->pos).y);
  dVar35 = (double)((moby->transform).v1.z * -0.5 + (moby->pos).z);
  psVar15 = psVar14;
  do {
    if (*psVar15 != 0) {
      bVar6 = 1;
      break;
    }
    iVar10 = iVar10 + 1;
    psVar15 = psVar15 + 1;
  } while (iVar10 < 10);
  if ((bool)(bVar6 | bVar5)) {
    iVar26 = 0;
    iVar24 = 0;
    iVar10 = 0;
    do {
      sVar12 = *psVar14 + -1;
      *psVar14 = sVar12;
      if (sVar12 < 0) {
        sVar12 = 0;
        *psVar14 = 0;
      }
      if (sVar12 == 0 && bVar5) {
        *psVar14 = 2;
        *(undefined2 *)((int)&DAT_010a0b84 + iVar24) = 0x40;
        MB_randVector((double)DAT_007b7c34,(double)DAT_007b7c34,(Vec4 *)(puVar3 + 0xe));
        iVar25 = 1;
        pfVar23 = (float *)((int)&DAT_010a0850 + iVar10);
        pfVar22 = (float *)((int)&DAT_010a0860 + iVar10);
        *(float *)((int)&DAT_010a0850 + iVar10) = (float)dVar37;
        *(float *)((int)&DAT_010a0854 + iVar10) = (float)dVar36;
        *(float *)((int)&DAT_010a0858 + iVar10) = (float)dVar35;
        *(float *)((int)&DAT_010a085c + iVar10) = (float)dVar34;
        dVar32 = 1.0;
        dVar30 = 0.1745329201221466;
        dVar29 = 0.7853981852531433;
        do {
          fVar7 = GameCamera.posZ;
          fVar8 = GameCamera.posY;
          *(float *)(puVar3 + 0x10) = *pfVar23 - GameCamera.posX;
          *(float *)((int)puVar3 + 0x84) = pfVar23[1] - fVar8;
          *(float *)(puVar3 + 0x11) = pfVar23[2] - fVar7;
          *(float *)((int)puVar3 + 0x8c) = pfVar23[3];
          dVar28 = (double)MB_randRangeFloat((float)dVar30,(float)dVar29);
          dVar28 = dVar28 * dVar32;
          dVar32 = -dVar32;
          MB_RotateQuatAxisAngle((float)dVar28,local_140,local_140);
          iVar25 = iVar25 + 1;
          *pfVar22 = *pfVar23 + *(float *)(puVar3 + 0xe);
          pfVar22[1] = pfVar23[1] + *(float *)((int)puVar3 + 0x74);
          pfVar22[2] = pfVar23[2] + *(float *)(puVar3 + 0xf);
          pfVar11 = pfVar23 + 3;
          pfVar23 = pfVar23 + 4;
          pfVar22[3] = *pfVar11;
          pfVar22 = pfVar22 + 4;
        } while (iVar25 < 5);
      }
      else if (sVar12 != 0) {
        uVar33 = 0;
        lVar21 = uVar9 - 0x110;
        uVar31 = 0x3fb99999a0000000;
        pfVar11 = (float *)((int)&DAT_010a0850 + iVar10);
        iVar25 = 1;
        pfVar18 = (float *)((int)&DAT_010a0860 + iVar10);
        lVar19 = lVar21;
        lVar27 = uVar9 - 0x1b0;
        pfVar23 = pfVar18;
        pfVar22 = pfVar11;
        do {
          pfVar20 = (float *)lVar19;
          *pfVar20 = *pfVar23 - *pfVar22;
          pfVar20[1] = pfVar23[1] - pfVar22[1];
          pfVar20[2] = pfVar23[2] - pfVar22[2];
          pfVar20[3] = pfVar23[3];
          dVar29 = (double)MB_randRangeSigned(uVar33,uVar31);
          iVar4 = (int)lVar27;
          *(float *)(iVar4 + 0xa0) = (float)((double)*(float *)(iVar4 + 0xa0) + dVar29);
          dVar29 = (double)MB_randRangeSigned(uVar33,uVar31);
          *(float *)(iVar4 + 0xa4) = (float)((double)*(float *)(iVar4 + 0xa4) + dVar29);
          dVar29 = (double)MB_randRangeSigned(uVar33,uVar31);
          iVar25 = iVar25 + 1;
          lVar19 = lVar19 + 0x10;
          pfVar23 = pfVar23 + 4;
          pfVar22 = pfVar22 + 4;
          *(float *)(iVar4 + 0xa8) = (float)((double)*(float *)(iVar4 + 0xa8) + dVar29);
          lVar27 = lVar27 + 0x10;
        } while (iVar25 < 5);
        sVar12 = *psVar14;
        lVar27 = 4;
        *(float *)((int)&DAT_010a0850 + iVar10) = (float)dVar37;
        *(float *)((int)&DAT_010a0854 + iVar10) = (float)dVar36;
        *(float *)((int)&DAT_010a0858 + iVar10) = (float)dVar35;
        *(float *)((int)&DAT_010a085c + iVar10) = (float)dVar34;
        do {
          pfVar23 = (float *)lVar21;
          *pfVar18 = *pfVar11 + *pfVar23;
          pfVar18[1] = pfVar11[1] + pfVar23[1];
          lVar21 = lVar21 + 0x10;
          pfVar18[2] = pfVar11[2] + pfVar23[2];
          pfVar23 = pfVar11 + 3;
          pfVar11 = pfVar11 + 4;
          pfVar18[3] = *pfVar23;
          pfVar18 = pfVar18 + 4;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        *(ushort *)((int)&DAT_010a0b84 + iVar24) =
             ((ushort)((longlong)sVar12 + -1 >> 0x3f) & 0xffe0) + 0x20;
      }
      iVar26 = iVar26 + 1;
      psVar14 = psVar14 + 1;
      iVar10 = iVar10 + 0x50;
      iVar24 = iVar24 + 2;
    } while (iVar26 < 10);
    RegisterPostDraw(&PTR_M1805_002bb718_0070af60,moby);
  }
  return;
}


