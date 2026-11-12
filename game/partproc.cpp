// game/partproc.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 11 functions, 0x11e448-0x11fb94
#include <math.h>
#include <stdio.h>
#include "game/partproc.h"
#include "game/boot.h"
#include "game/draw.h"
#include "game/hud.h"
#include "game/main.h"
#include "game/mission.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/partupd.h"
#include "game/pause.h"
#include "game/vendor.h"
#include "idol/idol_draw.h"
#include "idol/mUnk.h"

// 0x011e448 (0x14 bytes)
void SECTION_HEADER_PARTPROC(void)

{
  DAT_00729624 = 0x10000;
  return;
}


// 0x011e45c (0x11c bytes)
// strings: 006531a4: '*** frame %d ***\n' | 006531bc: 'class: %d\tcount: %d\tcycles: %d\n'

ulonglong UpdatePartsDebug(void)

{
  uint uVar1;
  ulonglong uVar2;
  int32_t iVar3;
  uint *puVar4;
  int iVar5;
  
  if (((g_Pad.downButtons & (R1|R2|L2)) == (R1|R2|L2)) && ((g_Pad.buttonsPressedThisFrame & L1) != 0)) {
    printf("\n");
    printf("*** frame %d ***\n",g_MainLoopFrames);
    printf("\n");
    *DAT_009271fc = 0x81;
    UpdateParts_NotUsed();
    iVar5 = 0;
    puVar4 = (uint *)&DAT_11004000;
    do {
      uVar1 = *puVar4;
      uVar2 = (ulonglong)uVar1;
      if (uVar1 != 0) {
        iVar3 = printf("class: %d\tcount: %d\tcycles: %d\n",iVar5,uVar1,
                             (int)(puVar4[1] << 5) / (int)uVar1);
        uVar2 = (ulonglong)iVar3;
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 2;
    } while (iVar5 < 0x80);
  }
  else {
    uVar2 = UpdateParts();
  }
  return uVar2;
}


// 0x011e580 (0x148 bytes)
PartInstance * CreatePartEx(int idx,int arg)

{
  undefined4 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  PartInstance *pPVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar4 = PartIndexNext;
  if ((int)PartIndexNext < 0x1000) {
    uVar6 = PartIndexNext + 1;
    iVar8 = (int)PartIndexNext >> 3;
    uVar2 = PartIndexNext & 7;
    PartActiveCnt = PartActiveCnt + 1;
    PartIndexNext = uVar6;
    (&DAT_00a52000)[iVar8] = (&DAT_00a52000)[iVar8] | (byte)(1 << uVar2);
    if ((int)uVar6 <= PartIndexTop) {
      PartIndexNext = uVar6 & 0xfffffff8;
      iVar8 = (int)uVar6 >> 3;
      while (uVar6 = PartIndexNext, (int)PartIndexNext < 0x1000) {
        uVar7 = 1;
        do {
          uVar6 = PartIndexNext;
          if (((uint)uVar7 & (uint)(byte)(&DAT_00a52000)[iVar8]) == 0) goto LAB_0011e650;
          PartIndexNext = PartIndexNext + 1;
          uVar3 = uVar7 & 0x7f;
          uVar7 = (uVar7 & 0x7fffffff) << 1;
        } while (uVar3 != 0);
        iVar8 = iVar8 + 1;
      }
    }
LAB_0011e650:
    iVar8 = uVar6 - 1;
    pPVar5 = (PartInstance *)((int)PartInstances + uVar4 * 0x40);
    PartIndexTop = iVar8 + ((uint)((longlong)iVar8 - (longlong)PartIndexTop >> 0x3f) &
                           PartIndexTop - iVar8);
    puVar1 = (undefined4 *)((uint)pPVar5 & 0xfffffff0);
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1 = (undefined4 *)((uint)&pPVar5->pos & 0xfffffff0);
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1 = (undefined4 *)((uint)pPVar5->update & 0xfffffff0);
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1 = (undefined4 *)((uint)(pPVar5->update + 4) & 0xfffffff0);
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    pPVar5->iClass = (char)idx;
  }
  else {
    pPVar5 = (PartInstance *)0x0;
  }
  return pPVar5;
}


// 0x011e6c8 (0x24 bytes)
PartInstance * CreatePart(int idx)

{
  PartInstance *pPVar1;
  
  pPVar1 = CreatePartEx(idx,0);
  return pPVar1;
}


// 0x011e6ec (0x104 bytes)
void DeletePart(int idx)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = idx - (int)PartInstances;
  uVar3 = ((int)uVar3 >> 6) + (uint)((int)uVar3 < 0 && (uVar3 & 0x3f) != 0);
  PartActiveCnt = PartActiveCnt + -1;
  (&DAT_00a52000)[(int)uVar3 >> 3] =
       (&DAT_00a52000)[(int)uVar3 >> 3] & ((byte)(1 << (uVar3 & 7)) ^ 0xff);
  if ((PartIndexTop == uVar3) && (uVar4 = PartIndexTop - 1, PartIndexTop = uVar4, -1 < (int)uVar4))
  {
    uVar5 = 1 << (uVar4 & 7);
    bVar1 = (&DAT_00a52000)[(int)uVar4 >> 3];
    iVar2 = (int)uVar4 >> 3;
    while( true ) {
      for (; uVar5 != 0; uVar5 = (int)uVar5 >> 1) {
        if ((uVar5 & bVar1) != 0) goto LAB_0011e7bc;
        uVar4 = uVar4 - 1;
        PartIndexTop = uVar4;
      }
      if ((int)uVar4 < 0) break;
      uVar5 = 0x80;
      bVar1 = *(byte *)(iVar2 + 0xa51fff);
      iVar2 = iVar2 + -1;
    }
  }
LAB_0011e7bc:
  *(undefined1 *)(idx + 1) = 0x80;
  PartIndexNext =
       uVar3 + ((uint)((longlong)PartIndexNext - (longlong)(int)uVar3 >> 0x3f) &
               PartIndexNext - uVar3);
  return;
}


// 0x011e7f0 (0x64 bytes)
int CountActiveParts(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar2 = 0;
  if (0 < PartIndexTop >> 3) {
    do {
      iVar3 = iVar1 + 1;
      iVar2 = iVar2 + (uint)(byte)(&DAT_00735570)[(byte)(&DAT_00a52000)[iVar1] & 0xf] +
              (uint)(byte)(&DAT_00735570)[(byte)(&DAT_00a52000)[iVar1] >> 4];
      iVar1 = iVar3;
    } while (iVar3 < PartIndexTop >> 3);
  }
  return iVar2;
}


// 0x011e8a0 (0x270 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UpdateParts(void)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  
  auVar6 = *(undefined1 (*) [16])(DAT_00902e9c + 0xa0U & 0xfffffff0);
  auVar7 = *(undefined1 (*) [16])(DAT_00902e9c + 0xb0U & 0xfffffff0);
  auVar8 = *(undefined1 (*) [16])(DAT_00902e9c + 0xc0U & 0xfffffff0);
  auVar12 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar9 = *(undefined1 (*) [16])(DAT_00902e9c + 0xd0U & 0xfffffff0);
  auVar5 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar14 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar10 = loadVectorLeftIndexed(0x10,0x11e860);
  auVar11 = loadVectorLeftIndexed(0x14,0x11e860);
  DAT_00a52b40 = storeVectorElementWordIndexed
                           (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,0x2b40,
                            0xa50000);
  DAT_00a52b44 = storeVectorElementWordIndexed
                           (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,4,0xa52b40);
  DAT_00a52b48 = storeVectorElementWordIndexed
                           (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,8,0xa52b40
                           );
  DAT_00a52b4c = 0;
  auVar12 = vectorPermute(auVar6,auVar8,_DAT_0011e880);
  auVar14 = vectorPermute(auVar7,auVar9,_DAT_0011e880);
  auVar16 = vectorPermute(auVar7,auVar8,_DAT_0011e880);
  auVar17 = vectorPermute(auVar9,auVar6,_DAT_0011e880);
  auVar5 = vectorPermute(auVar8,auVar9,_DAT_0011e880);
  auVar13 = vectorMergeHighWord(auVar12,auVar14);
  auVar12 = ZEXT416(0);
  auVar15 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  auVar16 = vectorPermute(auVar16,auVar17,_DAT_0011e860);
  auVar14 = vectorPermute(auVar6,auVar7,_DAT_0011e880);
  auVar17 = vectorMultiplyAddFloatingPoint(auVar13,auVar13,auVar15);
  auVar12 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar10 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  auVar5 = vectorPermute(auVar5,auVar14,_DAT_0011e860);
  auVar12 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar11 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  auVar12 = vectorMultiplyAddFloatingPoint(auVar16,auVar16,auVar17);
  auVar12 = vectorMultiplyAddFloatingPoint(auVar5,auVar5,auVar12);
  auVar12 = auVar12 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  auVar5 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar12);
  auVar12 = vectorMultiplyAddFloatingPoint(auVar5,auVar12,auVar15);
  auVar14 = vectorMultiplyAddFloatingPoint(auVar5,auVar10,auVar15);
  auVar12 = vectorNegativeMultiplySubtractFloatingPoint(auVar5,auVar12,auVar11);
  auVar12 = vectorMultiplyAddFloatingPoint(auVar12,auVar14,auVar5);
  auVar14 = vectorCompareEqualToFloatingPoint(auVar12,auVar12);
  auVar12 = vectorConditionalSelect(auVar5,auVar12,auVar14);
  auVar14 = vectorMultiplyAddFloatingPoint(auVar13,auVar12,auVar15);
  auVar12 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar5 = auVar14 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar14 = auVar14 >> 0x20 & (GPiece<16>)0xffffffff;
  DAT_00a52b50 = storeVectorElementWordIndexed
                           (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,0x2b50,
                            0xa50000);
  DAT_00a52b54 = storeVectorElementWordIndexed
                           (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,4,0xa52b50);
  DAT_00a52b58 = storeVectorElementWordIndexed
                           (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,8,0xa52b50
                           );
  DAT_00a52b5c = 0;
  auVar14 = vectorPermute(auVar6,auVar8,_DAT_0011e890);
  auVar13 = vectorPermute(auVar7,auVar9,_DAT_0011e890);
  auVar16 = vectorPermute(auVar7,auVar8,_DAT_0011e890);
  auVar12 = vectorPermute(auVar9,auVar6,_DAT_0011e890);
  auVar5 = vectorPermute(auVar6,auVar7,_DAT_0011e890);
  auVar6 = vectorMergeHighWord(auVar14,auVar13);
  auVar14 = vectorPermute(auVar8,auVar9,_DAT_0011e890);
  auVar7 = vectorPermute(auVar16,auVar12,_DAT_0011e860);
  auVar8 = vectorMultiplyAddFloatingPoint(auVar6,auVar6,auVar15);
  auVar12 = vectorPermute(auVar14,auVar5,_DAT_0011e860);
  auVar5 = vectorMultiplyAddFloatingPoint(auVar7,auVar7,auVar8);
  auVar12 = vectorMultiplyAddFloatingPoint(auVar12,auVar12,auVar5);
  auVar12 = auVar12 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  auVar5 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar12);
  auVar12 = vectorMultiplyAddFloatingPoint(auVar5,auVar12,auVar15);
  auVar14 = vectorMultiplyAddFloatingPoint(auVar5,auVar10,auVar15);
  auVar12 = vectorNegativeMultiplySubtractFloatingPoint(auVar5,auVar12,auVar11);
  auVar12 = vectorMultiplyAddFloatingPoint(auVar12,auVar14,auVar5);
  auVar14 = vectorCompareEqualToFloatingPoint(auVar12,auVar12);
  auVar12 = vectorConditionalSelect(auVar5,auVar12,auVar14);
  auVar14 = vectorMultiplyAddFloatingPoint(auVar6,auVar12,auVar15);
  auVar12 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar5 = auVar14 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar14 = auVar14 >> 0x20 & (GPiece<16>)0xffffffff;
  DAT_00a52b60 = storeVectorElementWordIndexed
                           (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,0x2b60,
                            0xa50000);
  DAT_00a52b64 = storeVectorElementWordIndexed
                           (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,4,0xa52b60);
  DAT_00a52b68 = storeVectorElementWordIndexed
                           (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,8,0xa52b60
                           );
  DAT_00a52b6c = 0;
  auVar14 = *(undefined1 (*) [16])(DAT_00902e9c + 0x20U & 0xfffffff0);
  auVar12 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar5 = auVar14 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar14 = auVar14 >> 0x20 & (GPiece<16>)0xffffffff;
  DAT_00a52b70 = storeVectorElementWordIndexed
                           (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,0x2b70,
                            0xa50000);
  DAT_00a52b74 = storeVectorElementWordIndexed
                           (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,4,0xa52b70);
  DAT_00a52b78 = storeVectorElementWordIndexed
                           (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,8,0xa52b70
                           );
  DAT_00a52b7c = 0;
  if (-1 < PartIndexTop) {
    iVar4 = 0;
    iVar3 = 0;
    iVar1 = PartIndexTop;
    do {
      pbVar2 = (byte *)((int)PartInstances + iVar4);
      if (-1 < (char)pbVar2[1]) {
        (**(code **)PartUpdates[*pbVar2])(pbVar2);
        iVar1 = PartIndexTop;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x40;
    } while (iVar3 <= iVar1);
  }
  return;
}


// 0x011eb10 (0xb4 bytes)
void UpdateParts_NotUsed(void)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (-1 < PartIndexTop) {
    iVar4 = 0;
    iVar1 = PartIndexTop;
    do {
      pbVar2 = (byte *)((int)PartInstances + iVar4);
      if (-1 < (char)pbVar2[1]) {
        (**(code **)PartUpdates[*pbVar2])(pbVar2);
        iVar1 = PartIndexTop;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x40;
    } while (iVar3 <= iVar1);
  }
  return;
}


// 0x011ebc4 (0x2f4 bytes)
void ____DrawParts_DepthPass(longlong param_1,int *param_2)

{
  bool bVar1;
  RsxCmd *pRVar2;
  int iVar3;
  RsxCmd RVar4;
  RenderingStep *pRVar5;
  ulonglong uVar6;
  RsxCmd RVar8;
  ulonglong uVar7;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  
  iVar3 = DAT_00a52b80;
  pRVar5 = DL_Pass;
  iVar12 = *param_2;
  bVar1 = DAT_00a52b80 != 0;
  *param_2 = iVar12 + (int)(param_1 << 5) * 3;
  if (bVar1) {
    idol_draw::DrawDepth(pRVar5,(longlong)iVar3);
  }
  pRVar2 = DAT_00a52b84;
  *pRVar5->command = NV4097_SET_TEXTURE_OFFSET_x7;
  pRVar5->command[1] = *pRVar2;
  pRVar5->command[2] = pRVar2[1];
  pRVar5->command[3] = 0x10303;
  pRVar5->command[4] = pRVar2[3];
  pRVar5->command[5] = pRVar2[4];
  pRVar5->command[6] = pRVar2[5];
  pRVar5->command[7] = pRVar2[6];
  pRVar5->command[8] = (RsxCmd)&DAT_00041840;
  pRVar5->command[9] = pRVar2[7];
  pRVar2 = pRVar5->command;
  pRVar5->command = pRVar2 + 10;
  iVar3 = *(int *)(g_viewMtxPtr + 0x4a8);
  pRVar2[10] = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
  RVar8 = iVar12 - iVar3;
  pRVar5->command[1] = RVar8 | 0x80000000;
  pRVar2 = pRVar5->command;
  pRVar5->command = pRVar2 + 2;
  pRVar2[2] = 0x41684;
  pRVar5->command[1] = RVar8 + 0xc | 0x80000000;
  pRVar2 = pRVar5->command;
  pRVar5->command = pRVar2 + 2;
  pRVar2[2] = 0x4168c;
  uVar9 = param_1 * 4 - 0x100;
  uVar10 = (uVar9 & (longlong)((int)uVar9 >> 0x1f)) + 0x100;
  pRVar5->command[1] = RVar8 + 0x14 | 0x80000000;
  pRVar2 = pRVar5->command;
  pRVar5->command = pRVar2 + 2;
  pRVar2[2] = 0x400c1714;
  uVar6 = param_1 * 4 - uVar10;
  pRVar5->command[1] = 0;
  uVar6 = uVar6 & ~(longlong)((int)uVar6 >> 0x1f);
  pRVar5->command[2] = 0;
  uVar11 = uVar6 - (uVar6 & 0xffffff00);
  iVar12 = (int)uVar11;
  uVar9 = (uVar6 << 0x20) >> 0x28;
  pRVar5->command[3] = 0;
  pRVar5->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar5->command[5] = 8;
  pRVar2 = pRVar5->command;
  pRVar5->command = pRVar2 + 7;
  pRVar2[6] = (((uint)uVar6 >> 8) + ((iVar12 != 0)) +
              (((int)uVar10 != 0))) * 0x40000 | 0x40001814;
  uVar7 = 0;
  if ((int)uVar10 != 0) {
    pRVar2 = pRVar5->command;
    pRVar5->command = pRVar2 + 1;
    *pRVar2 = (int)((uVar10 & 0xffffffff) << 0x18) - 0x1000000;
    uVar7 = uVar10;
  }
  RVar8 = (RsxCmd)uVar7;
  if ((uint)uVar6 >> 8 != 0) {
    do {
      pRVar2 = pRVar5->command;
      RVar4 = (RsxCmd)uVar7;
      uVar9 = uVar9 - 1;
      uVar7 = uVar7 + 0x100;
      RVar8 = (RsxCmd)uVar7;
      pRVar5->command = pRVar2 + 1;
      *pRVar2 = RVar4 | 0xff000000;
    } while (0 < (int)uVar9);
  }
  if (iVar12 != 0) {
    pRVar2 = pRVar5->command;
    pRVar5->command = pRVar2 + 1;
    *pRVar2 = RVar8 | (int)((uVar11 & 0xffffffff) << 0x18) - 0x1000000;
  }
  *pRVar5->command = NV4097_SET_BEGIN_END_x1;
  pRVar5->command[1] = 0;
  pRVar5->command = pRVar5->command + 2;
  return;
}


// 0x011ef18 (0x9f0 bytes)
void DrawParts(void)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  byte bVar7;
  RsxCmd *pRVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  RenderingStep *pRVar15;
  undefined4 uVar16;
  void *pvVar17;
  float *pfVar19;
  RsxCmd *pRVar20;
  undefined8 uVar18;
  RsxCmd *pRVar21;
  float *pfVar22;
  float fVar23;
  float fVar24;
  int iVar25;
  float *pfVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  longlong lVar30;
  double extraout_f1;
  double dVar31;
  double extraout_f1_00;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  RsxCmd local_f0 [16];
  GPiece<24> local_b0;
  
  pRVar15 = DL_Pass;
  pfVar19 = (float *)idol::AllocateMemAlign(FrameHeap,(PartIndexTop * 4 + 4) * 0x18,0x10);
  uVar16 = g_viewMtxPtr;
  idol_draw::BindVertexProgram(g_viewMtxPtr,pRVar15,5);
  idol_draw::BindFragmentProgram(uVar16,pRVar15,6);
  *pRVar15->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar15->command[1] = 0x1832;
  pRVar21 = pRVar15->command;
  pRVar15->command = pRVar21 + 2;
  lVar30 = 8;
  pRVar21[2] = 0x41744;
  pRVar15->command[1] = 0x1822;
  pRVar21 = pRVar15->command;
  pRVar15->command = pRVar21 + 2;
  pRVar21[2] = 0x4174c;
  pRVar20 = local_f0;
  pRVar15->command[1] = 0x1844;
  pRVar21 = pRVar15->command;
  pRVar15->command = pRVar21 + 2;
  pRVar21[2] = 0x441efc;
  pRVar15->command[1] = 4;
  pRVar21 = pRVar15->command + 2;
  pRVar15->command = pRVar21;
  do {
    *pRVar21 = *pRVar20;
    pRVar21 = pRVar15->command;
    pRVar15->command = pRVar21 + 1;
    pRVar8 = pRVar20 + 1;
    pRVar20 = pRVar20 + 2;
    pRVar21[1] = *pRVar8;
    pRVar21 = pRVar15->command + 1;
    pRVar15->command = pRVar21;
    lVar30 = lVar30 + -1;
  } while (lVar30 != 0);
  iVar29 = 0;
  if (-1 < PartIndexTop) {
    iVar25 = 0;
    pfVar26 = pfVar19;
    do {
      pvVar17 = PartInstances;
      iVar27 = EffectTexHeaders;
      bVar6 = *(byte *)((int)PartInstances + iVar25 + 1);
      if (-1 < (char)bVar6) {
        if ((bVar6 & 3) < 2) {
          iVar27 = 0;
          pfVar22 = (float *)&g_MissionState[0];
          dVar49 = (double)*(float *)((int)PartInstances + iVar25 + 0x10);
          dVar48 = (double)*(float *)((int)PartInstances + iVar25 + 0x14);
          dVar50 = (double)(*(float *)((int)PartInstances + iVar25 + 0xc) * 4.7619046e-06);
          dVar47 = (double)*(float *)((int)PartInstances + iVar25 + 0x18);
          dVar42 = 0.0;
          do {
            if ((float)((double)(float)((double)pfVar22[1] * dVar48 +
                                       (double)(float)((double)pfVar22[2] * dVar47 +
                                                      (double)(float)((double)*pfVar22 * dVar49 +
                                                                     (double)pfVar22[3]))) + dVar50)
                < 0.0) goto LAB_0011f80c;
            iVar27 = iVar27 + 1;
            pfVar22 = pfVar22 + 4;
          } while (iVar27 < 6);
          if ((PTR_DAT_008fa54c.piece<0,1>() == '\0') && (0.5 < dVar50)) {
            dVar44 = dVar50 * 0.6000000238418579;
            dVar50 = (double)(float)dVar44;
            if ((double)(float)dVar44 - 0.5 < 0.0) {
              dVar50 = 0.5;
            }
            *(float *)((int)PartInstances + iVar25 + 0xc) = (float)(dVar50 * 210000.0);
          }
          iVar27 = EffectTexHeaders;
          bVar6 = *(byte *)((int)pvVar17 + iVar25 + 3);
          lVar30 = GetEffectTexAddr(*(undefined1 *)((int)pvVar17 + iVar25 + 2));
          uVar28 = *(uint *)((int)pvVar17 + iVar25 + 4);
          fVar23 = (float)(uVar28 >> 0x18 |
                          uVar28 >> 8 & 0xff00 | uVar28 << 0x18 | (uVar28 & 0xff00) << 8);
          pfVar19[0x17] = fVar23;
          pfVar19[0x11] = fVar23;
          pfVar19[0xb] = fVar23;
          pfVar19[5] = fVar23;
          dVar44 = 1.0;
          pfVar19[9] = 1.0;
          pfVar19[10] = 1.0;
          pfVar19[3] = 1.0;
          pfVar19[4] = 0.0;
          pfVar19[0xf] = 0.0;
          pfVar19[0x10] = 1.0;
          pfVar19[0x15] = 0.0;
          pfVar19[0x16] = 0.0;
          iVar27 = iVar27 + (int)(lVar30 << 5) + (int)(lVar30 << 2);
          fVar23 = (float)(longlong)(int)(*(byte *)((int)pvVar17 + iVar25 + 8) + 0x20) * 3.1415927 *
                   0.0078125 + 3.1415927;
          if (*(char *)((int)pvVar17 + iVar25 + 1) == '\0') {
            dVar42 = (double)(fVar23 * 0.5);
            dVar43 = (double)DAT_00a52b60;
            dVar45 = (double)DAT_00a52b64;
            dVar44 = (double)DAT_00a52b68;
            uVar18 = _FSin(dVar42,&DAT_00a52b60,0);
            dVar41 = extraout_f1;
            dVar31 = (double)_FSin(dVar42,uVar18,1);
            dVar42 = (double)(float)(dVar45 * dVar41);
            dVar46 = (double)(float)(dVar44 * dVar41);
            dVar44 = (double)DAT_00a52b40;
            dVar45 = (double)DAT_00a52b44;
            dVar33 = (double)DAT_00a52b48;
            dVar34 = (double)DAT_00a52b50;
            dVar35 = (double)DAT_00a52b54;
            dVar37 = (double)DAT_00a52b58;
            dVar41 = (double)(float)(dVar43 * dVar41);
          }
          else {
            dVar45 = (double)(fVar23 * 0.5);
            uVar18 = _FSin(dVar45,&DAT_0011eec0,0);
            dVar46 = extraout_f1_00;
            dVar31 = (double)_FSin(dVar45,uVar18,1);
            dVar45 = dVar42;
            dVar33 = dVar42;
            dVar34 = dVar42;
            dVar35 = dVar44;
            dVar37 = dVar42;
            dVar41 = dVar42;
          }
          dVar32 = -(double)(float)(dVar46 * dVar45 -
                                   (double)(float)(dVar31 * dVar44 +
                                                  (double)(float)(dVar42 * dVar33)));
          dVar38 = -(double)(float)(dVar41 * dVar33 -
                                   (double)(float)(dVar31 * dVar45 +
                                                  (double)(float)(dVar46 * dVar44)));
          dVar43 = -(double)(float)(dVar42 * dVar44 -
                                   (double)(float)(dVar31 * dVar33 +
                                                  (double)(float)(dVar41 * dVar45)));
          dVar33 = (double)(float)(dVar46 * dVar33 +
                                  (double)(float)(dVar41 * dVar44 + (double)(float)(dVar42 * dVar45)
                                                 ));
          dVar36 = -(double)(float)(dVar46 * dVar35 -
                                   (double)(float)(dVar31 * dVar34 +
                                                  (double)(float)(dVar42 * dVar37)));
          dVar39 = -(double)(float)(dVar41 * dVar37 -
                                   (double)(float)(dVar31 * dVar35 +
                                                  (double)(float)(dVar46 * dVar34)));
          dVar40 = -(double)(float)(dVar42 * dVar34 -
                                   (double)(float)(dVar31 * dVar37 +
                                                  (double)(float)(dVar41 * dVar35)));
          dVar34 = (double)(float)(dVar46 * dVar37 +
                                  (double)(float)(dVar41 * dVar34 + (double)(float)(dVar42 * dVar35)
                                                 ));
          dVar44 = (double)(float)((double)(float)(dVar42 * dVar43 +
                                                  -(double)(float)(dVar46 * dVar38 -
                                                                  (double)(float)(dVar41 * dVar33 +
                                                                                 (double)(float)(
                                                  dVar31 * dVar32)))) * dVar50);
          dVar45 = (double)(float)((double)(float)(dVar46 * dVar32 +
                                                  -(double)(float)(dVar41 * dVar43 -
                                                                  (double)(float)(dVar42 * dVar33 +
                                                                                 (double)(float)(
                                                  dVar31 * dVar38)))) * dVar50);
          dVar33 = (double)(float)((double)(float)(dVar41 * dVar38 +
                                                  -(double)(float)(dVar42 * dVar32 -
                                                                  (double)(float)(dVar46 * dVar33 +
                                                                                 (double)(float)(
                                                  dVar31 * dVar43)))) * dVar50);
          fVar24 = (float)((double)(float)(dVar42 * dVar40 +
                                          -(double)(float)(dVar46 * dVar39 -
                                                          (double)(float)(dVar41 * dVar34 +
                                                                         (double)(float)(dVar31 * 
                                                  dVar36)))) * dVar50);
          fVar4 = (float)((double)(float)(dVar46 * dVar36 +
                                         -(double)(float)(dVar41 * dVar40 -
                                                         (double)(float)(dVar42 * dVar34 +
                                                                        (double)(float)(dVar31 * 
                                                  dVar39)))) * dVar50);
          fVar5 = (float)((double)(float)(dVar41 * dVar39 +
                                         -(double)(float)(dVar42 * dVar36 -
                                                         (double)(float)(dVar46 * dVar34 +
                                                                        (double)(float)(dVar31 * 
                                                  dVar40)))) * dVar50);
          dVar42 = -(double)(fVar24 * 0.5 - -(float)(dVar44 * 0.5 - dVar49));
          dVar48 = -(double)(fVar4 * 0.5 - -(float)(dVar45 * 0.5 - dVar48));
          dVar50 = -(double)(fVar5 * 0.5 - -(float)(dVar33 * 0.5 - dVar47));
          fVar23 = (float)(dVar42 + dVar44);
          fVar2 = (float)(dVar48 + dVar45);
          fVar3 = (float)(dVar50 + dVar33);
          pfVar19[6] = (float)dVar42;
          pfVar19[7] = (float)dVar48;
          pfVar19[8] = (float)dVar50;
          *pfVar19 = fVar23;
          pfVar19[1] = fVar2;
          pfVar19[2] = fVar3;
          uVar28 = (uint)bVar6;
          bVar1 = uVar28 != DAT_00a52b80;
          fVar23 = (float)((double)(fVar23 + fVar24) - dVar44);
          fVar2 = (float)((double)(fVar2 + fVar4) - dVar45);
          fVar3 = (float)((double)(fVar3 + fVar5) - dVar33);
          pfVar19[0xc] = fVar23;
          pfVar19[0xd] = fVar2;
          pfVar19[0xe] = fVar3;
          pfVar19[0x12] = (float)((double)fVar23 + dVar44);
          pfVar19[0x13] = (float)((double)fVar2 + dVar45);
          pfVar19[0x14] = (float)((double)fVar3 + dVar33);
          pfVar26 = pfVar26 + 0x18;
          if ((bVar1) || (DAT_00a52b84 != iVar27)) {
            if (DAT_00729648 != 0) {
              ____DrawParts_DepthPass(DAT_00729648,local_b0);
            }
            DAT_00729648 = 0;
          }
          DAT_00729648 = DAT_00729648 + 1;
          DAT_00a52b80 = uVar28;
          DAT_00a52b84 = iVar27;
          pfVar19 = pfVar26;
        }
        else if ((bVar6 & 3) < 4) {
          dVar47 = (double)*(float *)((int)PartInstances + iVar25 + 0x10);
          dVar42 = (double)*(float *)((int)PartInstances + iVar25 + 0x14);
          dVar50 = (double)*(float *)((int)PartInstances + iVar25 + 0x18);
          dVar44 = (double)*(float *)((int)PartInstances + iVar25 + 0x20);
          dVar49 = (double)*(float *)((int)PartInstances + iVar25 + 0x24);
          dVar48 = (double)*(float *)((int)PartInstances + iVar25 + 0x28);
          bVar7 = *(byte *)((int)PartInstances + iVar25 + 3);
          if (bVar6 == 3) {
            lVar30 = GetEffectTexAddr(*(undefined1 *)((int)PartInstances + iVar25 + 2));
          }
          else {
            *(undefined4 *)((int)PartInstances + iVar25 + 0x1c) = 0x3d4ccccd;
            iVar27 = EffectTexHeaders;
            lVar30 = GetEffectTex(0x16);
          }
          uVar28 = *(uint *)((int)pvVar17 + iVar25 + 4);
          fVar23 = (float)(dVar48 - dVar50);
          fVar2 = (float)(dVar49 - dVar42);
          fVar3 = (float)(dVar44 - dVar47);
          fVar24 = (float)(uVar28 >> 0x18 |
                          uVar28 >> 8 & 0xff00 | uVar28 << 0x18 | (uVar28 & 0xff00) << 8);
          pfVar19[0x11] = fVar24;
          pfVar19[0xb] = fVar24;
          uVar28 = *(uint *)((int)pvVar17 + iVar25 + 0xc);
          fVar24 = (float)(uVar28 >> 0x18 |
                          uVar28 >> 8 & 0xff00 | uVar28 << 0x18 | (uVar28 & 0xff00) << 8);
          pfVar19[0x17] = fVar24;
          pfVar19[5] = fVar24;
          fVar24 = (float)(dVar47 + dVar44) * 0.5 - DAT_00a52b70;
          fVar5 = (float)(dVar50 + dVar48) * 0.5 - DAT_00a52b78;
          fVar4 = (float)(dVar42 + dVar49) * 0.5 - DAT_00a52b74;
          fVar10 = fVar5 * fVar3 - fVar24 * fVar23;
          fVar13 = fVar4 * fVar23 - fVar5 * fVar2;
          fVar9 = fVar24 * fVar2 - fVar4 * fVar3;
          fVar24 = *(float *)((int)pvVar17 + iVar25 + 0x1c);
          pfVar19[4] = 0.0;
          pfVar19[0xf] = 0.0;
          pfVar19[0x15] = 0.0;
          pfVar19[0x16] = 0.0;
          pfVar19[9] = 1.0;
          pfVar19[10] = 1.0;
          pfVar19[3] = 1.0;
          pfVar19[0x10] = 1.0;
          fVar4 = *(float *)((int)pvVar17 + iVar25 + 0x10);
          fVar11 = SQRT(fVar9 * fVar9 + fVar13 * fVar13 + fVar10 * fVar10);
          iVar27 = iVar27 + (int)(lVar30 << 5) + (int)(lVar30 << 2);
          pfVar26 = pfVar26 + 0x18;
          uVar28 = (uint)bVar7;
          bVar1 = uVar28 != DAT_00a52b80;
          fVar5 = fVar9;
          if (0.0 - fVar11 < 0.0) {
            fVar5 = fVar9 / fVar11;
          }
          if (fVar11 - 0.0 < 0.0) {
            fVar5 = fVar9 / fVar11;
          }
          fVar9 = fVar10;
          if (0.0 - fVar11 < 0.0) {
            fVar9 = fVar10 / fVar11;
          }
          if (fVar11 - 0.0 < 0.0) {
            fVar9 = fVar10 / fVar11;
          }
          fVar12 = -(fVar5 * fVar24 * 0.5 - *(float *)((int)pvVar17 + iVar25 + 0x18));
          fVar10 = fVar13;
          if (0.0 - fVar11 < 0.0) {
            fVar10 = fVar13 / fVar11;
          }
          if (fVar11 - 0.0 < 0.0) {
            fVar10 = fVar13 / fVar11;
          }
          fVar13 = -(fVar9 * fVar24 * 0.5 - *(float *)((int)pvVar17 + iVar25 + 0x14));
          fVar11 = fVar12 + fVar23;
          fVar14 = fVar13 + fVar2;
          pfVar19[7] = fVar13;
          fVar13 = -(fVar10 * fVar24 * 0.5 - fVar4);
          fVar4 = (fVar11 + fVar5 * fVar24) - fVar23;
          fVar5 = fVar13 + fVar3;
          pfVar19[6] = fVar13;
          pfVar19[8] = fVar12;
          fVar13 = (fVar14 + fVar9 * fVar24) - fVar2;
          pfVar19[1] = fVar14;
          pfVar19[2] = fVar11;
          *pfVar19 = fVar5;
          pfVar19[0xe] = fVar4;
          pfVar19[0xd] = fVar13;
          pfVar19[0x14] = fVar4 + fVar23;
          fVar23 = (fVar5 + fVar10 * fVar24) - fVar3;
          pfVar19[0x13] = fVar13 + fVar2;
          pfVar19[0xc] = fVar23;
          pfVar19[0x12] = fVar23 + fVar3;
          if ((bVar1) || (DAT_00a52b84 != iVar27)) {
            if (DAT_00729648 != 0) {
              ____DrawParts_DepthPass(DAT_00729648,local_b0);
            }
            DAT_00729648 = 0;
          }
          DAT_00729648 = DAT_00729648 + 1;
          DAT_00a52b80 = uVar28;
          DAT_00a52b84 = iVar27;
          pfVar19 = pfVar19 + 0x18;
        }
      }
LAB_0011f80c:
      iVar29 = iVar29 + 1;
      iVar25 = iVar25 + 0x40;
    } while (iVar29 <= PartIndexTop);
  }
  if (DAT_00729648 != 0) {
    ____DrawParts_DepthPass(DAT_00729648,local_b0);
  }
  *pRVar15->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar15->command[1] = 2;
  pRVar21 = pRVar15->command;
  pRVar15->command = pRVar21 + 2;
  pRVar21[2] = 0x41744;
  DAT_00729648 = 0;
  pRVar15->command[1] = 2;
  pRVar21 = pRVar15->command;
  pRVar15->command = pRVar21 + 2;
  pRVar21[2] = 0x4174c;
  pRVar15->command[1] = 2;
  pRVar15->command = pRVar15->command + 2;
  return;
}


// 0x011f918 (0x27c bytes)
/* Part 22 */

void UpdatePart_22(PartInstance *part)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  undefined1 uVar5;
  short sVar6;
  longlong lVar7;
  undefined8 in_LR;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  
  lVar7 = (longlong)(int)part;
  auVar9 = ZEXT416(0xfffffff0);
  auVar8 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
  auVar9 = ZEXT416(1);
  auVar10 = loadVectorLeftIndexed(10,lVar7);
  sVar4 = part->timer;
  auVar10 = vectorShiftRightWord(auVar10,auVar8);
  auVar9 = vectorSubtractUnsignedWordModulo
                     (auVar10,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60);
  auVar10 = vectorSplatHalfWord(auVar9,1);
  auVar9 = vectorShiftLeftIntegerWord(auVar9,auVar8);
  auVar9 = vectorShiftRightAlgebraicWord(auVar9,auVar8);
  sVar6 = storeVectorElementHalfWordIndexed(auVar10,10,lVar7);
  part->timer = sVar6;
  if ((short)(sVar4 + -1) < 1) {
    DeletePart();
  }
  else {
    auVar8 = ZEXT416(0xfffffff0);
    auVar10 = ZEXT416(0xffffffff);
    auVar13 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    auVar10 = ZEXT416(8);
    auVar12 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    part->rot = part->rot + '\x01';
    auVar10 = loadVectorLeftIndexed(0x38,lVar7);
    auVar10 = vectorShiftRightAlgebraicWord
                        (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60);
    auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
    auVar8 = ZEXT416(0xffffffff);
    auVar19 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
    auVar8 = vectorCompareGreaterThanSignedWord(auVar9,auVar12);
    auVar13 = vectorConvertFromSignedFixedPointWord(auVar10,0);
    auVar10 = vectorConditionalSelect(auVar9,auVar12,auVar8);
    auVar8 = loadVectorLeftIndexed(4,0x11f908);
    auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar11 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
    auVar8 = ZEXT416(9);
    auVar20 = vectorShiftLeftIntegerWord(auVar19,auVar19);
    auVar12 = vectorConvertFromSignedFixedPointWord(auVar9,0);
    auVar19 = loadVectorLeftIndexed(in_LR,0x11f908);
    auVar9 = ZEXT416(0xfffffff8);
    auVar22 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    auVar9 = vectorShiftLeftIntegerWord
                       (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60);
    auVar8 = auVar19 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar16 = vectorReciprocalEstimateFloatingPoint(auVar13);
    auVar10 = vectorConvertFromSignedFixedPointWord(auVar9,0);
    auVar9 = ZEXT416(0xffffffff);
    auVar19 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    auVar21 = loadVectorLeftIndexed(0x33,lVar7);
    auVar9 = loadVectorLeftIndexed(0x30,lVar7);
    auVar19 = vectorShiftLeftIntegerWord(auVar19,auVar19);
    auVar18 = vectorNegativeMultiplySubtractFloatingPoint(auVar16,auVar13,auVar11);
    auVar19 = vectorMultiplyAddFloatingPoint
                        (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar19);
    auVar8 = loadVectorLeftIndexed(0x31,lVar7);
    auVar9 = vectorShiftRightWord(auVar9,auVar22);
    auVar8 = vectorShiftRightWord(auVar8,auVar22);
    auVar15 = vectorConvertFromSignedFixedPointWord(auVar9,0);
    auVar17 = vectorConvertFromSignedFixedPointWord(auVar8,0);
    auVar14 = vectorMultiplyAddFloatingPoint(auVar16,auVar18,auVar14);
    auVar8 = vectorShiftRightWord(auVar21,auVar22);
    auVar9 = ZEXT416(0xffffffff);
    auVar16 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    auVar10 = loadVectorLeftIndexed(0x32,lVar7);
    auVar9 = loadVectorLeftIndexed(0x37,lVar7);
    auVar21 = vectorShiftLeftIntegerWord(auVar16,auVar16);
    auVar16 = vectorConvertFromSignedFixedPointWord(auVar8,0);
    auVar23 = loadVectorLeftIndexed(0x34,lVar7);
    auVar24 = loadVectorLeftIndexed(0x35,lVar7);
    auVar25 = loadVectorLeftIndexed(0x36,lVar7);
    auVar8 = vectorNegativeMultiplySubtractFloatingPoint(auVar14,auVar13,auVar11);
    auVar9 = vectorShiftRightWord(auVar9,auVar22);
    auVar18 = vectorShiftRightWord(auVar10,auVar22);
    auVar23 = vectorShiftRightWord(auVar23,auVar22);
    auVar24 = vectorShiftRightWord(auVar24,auVar22);
    auVar10 = vectorConvertFromSignedFixedPointWord(auVar9,0);
    auVar18 = vectorConvertFromSignedFixedPointWord(auVar18,0);
    fVar1 = (float)part->update[1];
    fVar2 = (float)part->update[2];
    auVar24 = vectorConvertFromSignedFixedPointWord(auVar24,0);
    fVar3 = (float)part->update[3];
    auVar14 = vectorMultiplyAddFloatingPoint(auVar14,auVar8,auVar20);
    auVar20 = vectorShiftRightWord(auVar25,auVar22);
    auVar9 = ZEXT416(0xffffffff);
    auVar22 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    auVar9 = ZEXT416(0xffffffff);
    auVar8 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    auVar9 = ZEXT416(0xffffffff);
    auVar25 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    auVar20 = vectorConvertFromSignedFixedPointWord(auVar20,0);
    auVar22 = vectorShiftLeftIntegerWord(auVar22,auVar22);
    auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
    auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar19,auVar9);
    auVar11 = vectorNegativeMultiplySubtractFloatingPoint(auVar14,auVar13,auVar11);
    auVar13 = vectorConvertFromSignedFixedPointWord(auVar23,0);
    auVar9 = ZEXT416(0xffffffff);
    auVar23 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    auVar9 = loadVectorLeftIndexed(8,0x11f908);
    (part->pos).x = (float)part->update[0] + (part->pos).x;
    auVar8 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
    (part->pos).y = fVar1 + (part->pos).y;
    (part->pos).z = fVar2 + (part->pos).z;
    part->update[2] = (int)(fVar3 + fVar2);
    auVar11 = vectorMultiplyAddFloatingPoint(auVar14,auVar11,auVar21);
    auVar21 = vectorShiftLeftIntegerWord(auVar25,auVar25);
    auVar9 = ZEXT416(0xffffffff);
    auVar14 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    auVar9 = ZEXT416(0xffffffff);
    auVar25 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    auVar19 = vectorMultiplyAddFloatingPoint(auVar10,auVar19,auVar21);
    auVar9 = ZEXT416(0xffffffff);
    auVar21 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    auVar14 = vectorShiftLeftIntegerWord(auVar14,auVar14);
    auVar9 = vectorShiftLeftIntegerWord(auVar23,auVar23);
    auVar23 = vectorShiftLeftIntegerWord(auVar25,auVar25);
    auVar10 = vectorMultiplyAddFloatingPoint(auVar11,auVar12,auVar22);
    auVar12 = vectorShiftLeftIntegerWord(auVar21,auVar21);
    part->scale = part->scale + (float)part->update[7];
    auVar11 = vectorSubtractFloatingPoint
                        (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar10);
    auVar8 = vectorMultiplyAddFloatingPoint(auVar15,auVar10,auVar14);
    auVar14 = vectorMultiplyAddFloatingPoint(auVar17,auVar10,auVar9);
    auVar15 = vectorMultiplyAddFloatingPoint(auVar18,auVar10,auVar23);
    auVar9 = vectorMultiplyAddFloatingPoint(auVar16,auVar10,auVar12);
    auVar8 = vectorMultiplyAddFloatingPoint(auVar13,auVar11,auVar8);
    auVar10 = vectorMultiplyAddFloatingPoint(auVar24,auVar11,auVar14);
    auVar13 = vectorMultiplyAddFloatingPoint(auVar20,auVar11,auVar15);
    auVar9 = vectorMultiplyAddFloatingPoint(auVar19,auVar11,auVar9);
    auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
    auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
    auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
    auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
    auVar9 = auVar8 >> 0x60 & (GPiece<16>)0xff;
    auVar8 = auVar10 >> 0x60 & (GPiece<16>)0xff;
    auVar10 = auVar12 >> 0x60 & (GPiece<16>)0xff;
    auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xff;
    uVar5 = storeVectorElementByteIndexed
                      (auVar9 | auVar9 << 8 | auVar9 << 0x10 | auVar9 << 0x18 | auVar9 << 0x20 |
                       auVar9 << 0x28 | auVar9 << 0x30 | auVar9 << 0x38 | auVar9 << 0x40 |
                       auVar9 << 0x48 | auVar9 << 0x50 | auVar9 << 0x58 | auVar9 << 0x60 |
                       auVar9 << 0x68 | auVar9 << 0x70 | auVar9 << 0x78,4,lVar7);
    *(undefined1 *)&part->color = uVar5;
    uVar5 = storeVectorElementByteIndexed
                      (auVar8 | auVar8 << 8 | auVar8 << 0x10 | auVar8 << 0x18 | auVar8 << 0x20 |
                       auVar8 << 0x28 | auVar8 << 0x30 | auVar8 << 0x38 | auVar8 << 0x40 |
                       auVar8 << 0x48 | auVar8 << 0x50 | auVar8 << 0x58 | auVar8 << 0x60 |
                       auVar8 << 0x68 | auVar8 << 0x70 | auVar8 << 0x78,5,lVar7);
    *(undefined1 *)((int)&part->color + 1) = uVar5;
    uVar5 = storeVectorElementByteIndexed
                      (auVar10 | auVar10 << 8 | auVar10 << 0x10 | auVar10 << 0x18 | auVar10 << 0x20
                       | auVar10 << 0x28 | auVar10 << 0x30 | auVar10 << 0x38 | auVar10 << 0x40 |
                       auVar10 << 0x48 | auVar10 << 0x50 | auVar10 << 0x58 | auVar10 << 0x60 |
                       auVar10 << 0x68 | auVar10 << 0x70 | auVar10 << 0x78,6,lVar7);
    *(undefined1 *)((int)&part->color + 2) = uVar5;
    uVar5 = storeVectorElementByteIndexed
                      (auVar13 | auVar13 << 8 | auVar13 << 0x10 | auVar13 << 0x18 | auVar13 << 0x20
                       | auVar13 << 0x28 | auVar13 << 0x30 | auVar13 << 0x38 | auVar13 << 0x40 |
                       auVar13 << 0x48 | auVar13 << 0x50 | auVar13 << 0x58 | auVar13 << 0x60 |
                       auVar13 << 0x68 | auVar13 << 0x70 | auVar13 << 0x78,7,lVar7);
    *(undefined1 *)((int)&part->color + 3) = uVar5;
  }
  return;
}


