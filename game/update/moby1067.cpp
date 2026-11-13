// game/update/moby1067.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x1ae034-0x1ae5cc
#include <math.h>
#include <stdio.h>
#include "game/update/moby1067.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/moby1068.h"
#include "idol/fastfunc.h"

// 0x01ae034 (0x14 bytes)
void M1067_001ae034(void)

{
  DAT_007579ac = 0x10000;
  return;
}


// 0x01ae060 (0x56c bytes)
// strings: 00654524: 'moby class 1067 REQUIRES a link to dataProcessor class 1073!!\n' | 00654564: '\tMoby Maya Index %d deleted.\n'

/* Moby 1067 */

void UpdateMoby_1067(MobyInstance *moby)

{
  byte bVar1;
  undefined1 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  undefined4 uVar7;
  GPiece<16> auVar8;
  ulonglong *puVar9;
  float fVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  longlong lVar15;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  int iVar16;
  ulonglong unaff_r28;
  longlong lVar17;
  ulonglong unaff_r29;
  int iVar18;
  ulonglong unaff_r30;
  ulonglong uVar19;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar15 = uVar11 - 0xe0;
  puVar9 = (ulonglong *)lVar15;
  *puVar9 = uVar11;
  puVar9[0x1e] = in_LR;
  puVar9[0x1a] = unaff_r30;
  puVar9[0x1b] = unaff_r31;
  pfVar6 = (float *)moby->pVar;
  uVar19 = ZEXT48(pfVar6);
  fVar14 = pfVar6[3];
  puVar9[0x19] = unaff_r29;
  puVar9[0x18] = unaff_r28;
  puVar9[0x17] = unaff_r27;
  puVar9[0x16] = unaff_r26;
  if (fVar14 == -NAN) {
    printf("moby class 1067 REQUIRES a link to dataProcessor class 1073!!\n");
    printf("\tMoby Maya Index %d deleted.\n",moby->uid);
    DeleteMoby(moby);
  }
  bVar1 = moby->state;
  if (bVar1 == 0) {
    if ((Level == Orxon) && (g_heroType == '\x01')) {
      DeleteMoby(moby);
    }
    else {
      iVar18 = 0;
      *(undefined1 *)(puVar9 + 0x12) = 0;
      *(undefined1 *)((int)puVar9 + 0x91) = 1;
      *(undefined1 *)((int)puVar9 + 0x92) = 2;
      *(undefined1 *)((int)puVar9 + 0x94) = 4;
      *(undefined1 *)((int)puVar9 + 0x93) = 3;
      *(undefined1 *)((int)puVar9 + 0x95) = 5;
      *(undefined1 *)((int)puVar9 + 0x96) = 6;
      iVar13 = 0;
      *(undefined1 *)((int)puVar9 + 0x97) = 7;
      *(undefined1 *)(puVar9 + 0x13) = 8;
      *(undefined1 *)((int)puVar9 + 0x99) = 9;
      do {
        lVar17 = lVar15;
        for (iVar16 = 0; iVar12 = MB_randInt(9), iVar16 < iVar12; iVar16 = iVar16 + 1) {
          iVar12 = (int)lVar17;
          uVar2 = *(undefined1 *)(iVar12 + 0x90);
          *(undefined1 *)(iVar12 + 0x90) = *(undefined1 *)(iVar12 + 0x91);
          *(undefined1 *)(iVar12 + 0x91) = uVar2;
          lVar17 = lVar17 + 1;
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < 10);
      if (0 < (int)pfVar6[1]) {
        do {
          iVar18 = iVar18 + 1;
          fVar14 = pfVar6[1];
          *(undefined1 *)((int)uVar19 + 0x10) = *(undefined1 *)((int)lVar15 + 0x90);
          lVar15 = lVar15 + 1;
          uVar19 = uVar19 + 1;
        } while (iVar18 < (int)fVar14);
      }
      dVar20 = (double)FastWrapRot((moby->rotation).z,1.5707964);
      (moby->rotation).z = (float)dVar20;
      moby->updateDistance = '`';
      moby->state = '\x01';
      pfVar6[0xc] = -NAN;
      iVar13 = FastDoubleToInt((double)(DAT_00757a90 * 60.0));
      puVar9[0x14] = (longlong)iVar13;
      pfVar6[0xd] = (float)(int)(animationSpeed * ((float)(longlong)puVar9[0x14] + 0.5));
      moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    }
  }
  else if (bVar1 < 2) {
    puVar9[0x14] = (longlong)(int)pfVar6[1];
    fVar14 = pfVar6[2];
    auVar21 = loadVectorLeftIndexed(8,uVar19);
    auVar22 = loadVectorRightIndexed(0x18,uVar19);
    auVar23 = loadVectorLeftIndexed(8,0x1ae048);
    fVar3 = *pfVar6;
    fVar4 = (moby->pos).x;
    *(float *)(puVar9 + 0xe) = fVar4;
    fVar10 = GameCamera.posY;
    fVar5 = (moby->pos).y;
    *(float *)((int)puVar9 + 0x74) = fVar5;
    fVar5 = fVar5 - fVar10;
    fVar4 = fVar4 - GameCamera.posX;
    auVar8 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
    fVar10 = (moby->pos).z - GameCamera.posZ;
    auVar24 = loadVectorLeftIndexed(4,uVar19);
    auVar25 = loadVectorRightIndexed(0x14,uVar19);
    auVar23 = ZEXT416(0xffffffff);
    auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
    fVar14 = (float)(longlong)puVar9[0x14] * fVar14 * 0.5;
    auVar24 = vectorConvertFromSignedFixedPointWord(auVar24 | auVar25,0);
    auVar23 = vectorShiftLeftIntegerWord(auVar23,auVar23);
    auVar23 = vectorMultiplyAddFloatingPoint(auVar24,auVar21 | auVar22,auVar23);
    auVar21 = loadVectorLeftIndexed(0x18,(longlong)(int)moby);
    auVar23 = vectorMultiplyAddFloatingPoint
                        (auVar23,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar21);
    auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,0x78,lVar15);
    *(undefined4 *)(puVar9 + 0xf) = uVar7;
    *(float *)((int)puVar9 + 0x7c) = SQRT(fVar14 * fVar14 + fVar3 * 0.5 * fVar3 * 0.5);
    if (SQRT(fVar10 * fVar10 + fVar4 * fVar4 + fVar5 * fVar5) < 80.0) {
      iVar13 = FastCheckBsphereInView(uVar11 - 0x70);
      puVar9[0x14] = (longlong)iVar13;
      if (0.0 <= (float)(longlong)puVar9[0x14]) {
        RegisterPostDraw(&PTR_M1068_001ae5f0_007088f8,moby);
      }
    }
    iVar13 = IsMobyPlayingSound(moby,(int)pfVar6[0xc]);
    if (iVar13 == 0) {
      fVar14 = (float)PlayMobySound(0,4,moby);
      pfVar6[0xc] = fVar14;
    }
  }
  else if (bVar1 < 3) {
    FastDecTimerS32(uVar19 + 0x34);
    fVar14 = pfVar6[0xc];
    if (((fVar14 != -NAN) && (g_SoundChannels[(int)fVar14].pMoby == moby)) &&
       (g_SoundChannels[(int)fVar14].state != '\0')) {
      sound_Kill((int)fVar14);
    }
    pfVar6[0xc] = -NAN;
    puVar9[0x14] = (longlong)(int)pfVar6[1];
    fVar14 = pfVar6[2];
    auVar21 = loadVectorLeftIndexed(8,uVar19);
    auVar22 = loadVectorRightIndexed(0x18,uVar19);
    fVar3 = *pfVar6;
    auVar23 = loadVectorLeftIndexed(8,0x1ae048);
    fVar4 = (moby->pos).x;
    *(float *)(puVar9 + 0x10) = fVar4;
    fVar10 = GameCamera.posY;
    fVar5 = (moby->pos).y;
    *(float *)((int)puVar9 + 0x84) = fVar5;
    fVar5 = fVar5 - fVar10;
    fVar4 = fVar4 - GameCamera.posX;
    auVar24 = loadVectorLeftIndexed(4,uVar19);
    auVar8 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar23 = loadVectorRightIndexed(0x14,uVar19);
    fVar10 = (moby->pos).z - GameCamera.posZ;
    auVar24 = vectorConvertFromSignedFixedPointWord(auVar24 | auVar23,0);
    auVar23 = ZEXT416(0xffffffff);
    auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
    auVar23 = vectorShiftLeftIntegerWord(auVar23,auVar23);
    fVar14 = (float)(longlong)puVar9[0x14] * fVar14 * 0.5;
    auVar23 = vectorMultiplyAddFloatingPoint(auVar24,auVar21 | auVar22,auVar23);
    auVar21 = loadVectorLeftIndexed(0x18,(longlong)(int)moby);
    auVar23 = vectorMultiplyAddFloatingPoint
                        (auVar23,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar21);
    auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,0x88,lVar15);
    *(undefined4 *)(puVar9 + 0x11) = uVar7;
    *(float *)((int)puVar9 + 0x8c) = SQRT(fVar14 * fVar14 + fVar3 * 0.5 * fVar3 * 0.5);
    if (SQRT(fVar10 * fVar10 + fVar4 * fVar4 + fVar5 * fVar5) < 80.0) {
      iVar13 = FastCheckBsphereInView(uVar11 - 0x60);
      puVar9[0x14] = (longlong)iVar13;
      if (0.0 <= (float)(longlong)puVar9[0x14]) {
        RegisterPostDraw(&PTR_M1068_001ae5f0_007088f8,moby);
      }
    }
  }
  return;
}


