// game/skyfunc.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 33 functions, 0x15350c-0x15aa0c
#include <stdlib.h>
#include "game/skyfunc.h"
#include "game/boot.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/loaders.h"
#include "game/mesh.h"
#include "game/mobyutil.h"
#include "game/pause.h"
#include "game/rUnk.h"
#include "game/skyproc.h"
#include "game/space.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"
#include "idol/shrubfunc.h"
#include "sdk/rUnk.h"

// 0x015350c (0x14 bytes)
void SECTION_HEADER_SKYFUNC(void)

{
  DAT_00731a6c = 0x10000;
  return;
}


// 0x0153550 (0x37c bytes)
void SkyInitNightSprites(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  SKY *pSVar4;
  int iVar7;
  undefined2 uVar9;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar8;
  int iVar10;
  undefined1 *puVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
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
  
  pSVar4 = Sky;
  iVar10 = 0;
  puVar11 = (undefined1 *)Sky->tex_defs;
  Sky->sprite_cnt = (short)(param_2 + param_1);
  if ((param_2 + param_1 & 0xffffU) != 0) {
    dVar28 = 0.00390625;
    dVar29 = 1.570796251296997;
    dVar30 = 3.141592502593994;
    dVar31 = -3.141592502593994;
    dVar32 = -0.16666656732559204;
    dVar33 = 0.008333025500178337;
    dVar34 = -0.0001980741071747616;
    dVar35 = 2.601886990305502e-06;
    dVar36 = 50.0;
    dVar37 = 36.0;
    dVar38 = 16.0;
    do {
      if (iVar10 < param_1) {
        *puVar11 = 1;
        uVar9 = MB_randInt(0x100);
        *(undefined2 *)(puVar11 + 0xc) = uVar9;
        iVar7 = rand();
        puVar11[2] = (byte)((uint)iVar7 >> 0x10) & 1;
        puVar11[3] = 0x48;
        dVar12 = (double)MB_randRot();
        *(float *)(puVar11 + 8) = (float)dVar12;
        iVar7 = MB_randInt(0x30);
        dVar12 = (double)FastIntToDouble(iVar7 + 0x20);
        *(float *)(puVar11 + 0x1c) = (float)(dVar12 * dVar28);
        dVar13 = (double)MB_randRot();
        dVar14 = (double)MB_randRot();
        dVar16 = (double)(float)(dVar13 + dVar29);
        dVar17 = (double)(float)(dVar14 + dVar29);
        dVar12 = (double)(float)(dVar30 - dVar14);
        if (dVar14 - (double)(float)(dVar30 - dVar14) < 0.0) {
          dVar12 = dVar14;
        }
        dVar19 = (double)(float)(dVar30 - dVar13);
        if (dVar13 - (double)(float)(dVar30 - dVar13) < 0.0) {
          dVar19 = dVar13;
        }
        dVar18 = (double)(float)(dVar30 - dVar16);
        if (dVar16 - (double)(float)(dVar30 - dVar16) < 0.0) {
          dVar18 = dVar16;
        }
        dVar20 = (double)(float)(dVar30 - dVar17);
        if (dVar17 - (double)(float)(dVar30 - dVar17) < 0.0) {
          dVar20 = dVar17;
        }
        dVar15 = (double)(float)(dVar31 - dVar14);
        if ((double)(float)(dVar31 - dVar14) - dVar12 < 0.0) {
          dVar15 = dVar12;
        }
        dVar12 = (double)(float)(dVar31 - dVar13);
        if ((double)(float)(dVar31 - dVar13) - dVar19 < 0.0) {
          dVar12 = dVar19;
        }
        dVar13 = (double)(float)(dVar31 - dVar16);
        if ((double)(float)(dVar31 - dVar16) - dVar18 < 0.0) {
          dVar13 = dVar18;
        }
        dVar16 = (double)(float)(dVar15 * dVar15);
        dVar19 = (double)(float)(dVar12 * dVar12);
        dVar14 = (double)(float)(dVar31 - dVar17);
        if ((double)(float)(dVar31 - dVar17) - dVar20 < 0.0) {
          dVar14 = dVar20;
        }
        dVar18 = (double)(float)(dVar13 * dVar13);
        dVar24 = (double)(float)(dVar14 * dVar14);
        dVar26 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar15));
        dVar20 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar12));
        dVar22 = (double)(float)(dVar18 * (double)(float)(dVar18 * dVar13));
        dVar25 = (double)(float)(dVar16 * dVar26);
        dVar27 = (double)(float)(dVar19 * dVar20);
        dVar17 = (double)(float)(dVar24 * (double)(float)(dVar24 * dVar14));
        dVar21 = (double)(float)(dVar18 * dVar22);
        dVar23 = (double)(float)(dVar24 * dVar17);
        fVar1 = (float)((double)(float)(dVar16 * dVar25) * dVar35 +
                       (double)(float)(dVar25 * dVar34 +
                                      (double)(float)(dVar26 * dVar33 +
                                                     (double)(float)((double)(float)(dVar16 * dVar15
                                                                                    ) * dVar32 +
                                                                    dVar15))));
        fVar2 = (float)((double)(float)(dVar24 * dVar23) * dVar35 +
                       (double)(float)(dVar23 * dVar34 +
                                      (double)(float)(dVar17 * dVar33 +
                                                     (double)(float)((double)(float)(dVar24 * dVar14
                                                                                    ) * dVar32 +
                                                                    dVar14))));
        *(float *)(puVar11 + 0x14) =
             (float)((double)((float)((double)(float)(dVar19 * dVar27) * dVar35 +
                                     (double)(float)(dVar27 * dVar34 +
                                                    (double)(float)(dVar20 * dVar33 +
                                                                   (double)(float)((double)(float)(
                                                  dVar19 * dVar12) * dVar32 + dVar12)))) * fVar1) *
                    dVar36);
        *(float *)(puVar11 + 0x10) =
             (float)((double)((float)((double)(float)(dVar18 * dVar21) * dVar35 +
                                     (double)(float)(dVar21 * dVar34 +
                                                    (double)(float)(dVar22 * dVar33 +
                                                                   (double)(float)((double)(float)(
                                                  dVar18 * dVar13) * dVar32 + dVar13)))) * fVar1) *
                    dVar36);
        *(float *)(puVar11 + 0x18) = (float)((double)(fVar2 * fVar2) * dVar37 + dVar38);
        uVar5 = MB_randInt(0x18);
        uVar6 = MB_randInt(0x20);
        uVar8 = rand();
        iVar3 = (int)((uVar6 & 0xff) << 0x18);
        iVar7 = iVar3 + (int)((uVar5 & 0xffffffff) << 0x10) + 0x30505050;
        *(uint *)(puVar11 + 0xc) =
             iVar7 + ((uint)(ZERO_MASK((uVar8 & 0x10000))) &
                     (iVar3 + (int)((uVar5 & 0xffffffff) << 8) + 0x30505050U | (uint)uVar5) - iVar7)
        ;
      }
      else {
        *puVar11 = 0;
        iVar7 = rand();
        *(short *)(puVar11 + 0xc) = (short)((uint)iVar7 >> 0x10);
        iVar7 = rand();
        *(short *)(puVar11 + 0xe) = (short)((uint)iVar7 >> 0x10);
        puVar11[2] = 1;
        puVar11[3] = 0x48;
        *(undefined4 *)(puVar11 + 0x1c) = 0x3e23d70a;
      }
      iVar10 = iVar10 + 1;
      puVar11 = puVar11 + 0x20;
    } while (iVar10 < (int)(uint)(ushort)pSVar4->sprite_cnt);
  }
  return;
}


// 0x01538f0 (0x2c8 bytes)
void SkyUpdateNightSprites(void)

{
  float fVar1;
  ushort uVar2;
  uint uVar3;
  SKY *pSVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  
  pSVar4 = Sky;
  iVar6 = 0;
  pcVar7 = (char *)Sky->tex_defs;
  if (Sky->sprite_cnt != 0) {
    dVar24 = 0.0015339808305725455;
    dVar25 = 1.570796251296997;
    dVar26 = 3.141592502593994;
    dVar27 = -3.141592502593994;
    dVar28 = -0.16666656732559204;
    dVar29 = 0.008333025500178337;
    dVar30 = -0.0001980741071747616;
    dVar31 = 2.601886990305502e-06;
    dVar32 = 50.0;
    do {
      if (*pcVar7 == '\0') {
        uVar2 = *(ushort *)(pcVar7 + 0xc);
        *(short *)(pcVar7 + 0xc) = (short)((ulonglong)uVar2 + 1);
        *(short *)(pcVar7 + 0xe) = *(short *)(pcVar7 + 0xe) + 1;
        dVar8 = (double)FastIntToDouble(((ulonglong)uVar2 + 1 & 0xfff) - 0x800);
        dVar23 = (double)(float)(dVar8 * dVar24);
        dVar8 = (double)FastIntToDouble
                                  (((ulonglong)*(ushort *)(pcVar7 + 0xe) & 0xfff) - 0x800);
        dVar10 = (double)(float)(dVar23 + dVar25);
        dVar9 = (double)(float)(dVar8 * dVar24);
        dVar16 = (double)(float)(dVar9 + dVar25);
        dVar8 = (double)(float)(dVar26 - dVar23);
        if (dVar23 - (double)(float)(dVar26 - dVar23) < 0.0) {
          dVar8 = dVar23;
        }
        dVar17 = (double)(float)(dVar26 - dVar10);
        if (dVar10 - (double)(float)(dVar26 - dVar10) < 0.0) {
          dVar17 = dVar10;
        }
        dVar18 = (double)(float)(dVar26 - dVar9);
        if (dVar9 - (double)(float)(dVar26 - dVar9) < 0.0) {
          dVar18 = dVar9;
        }
        dVar12 = (double)(float)(dVar26 - dVar16);
        if (dVar16 - (double)(float)(dVar26 - dVar16) < 0.0) {
          dVar12 = dVar16;
        }
        dVar11 = (double)(float)(dVar27 - dVar23);
        if ((double)(float)(dVar27 - dVar23) - dVar8 < 0.0) {
          dVar11 = dVar8;
        }
        dVar8 = (double)(float)(dVar27 - dVar10);
        if ((double)(float)(dVar27 - dVar10) - dVar17 < 0.0) {
          dVar8 = dVar17;
        }
        dVar10 = (double)(float)(dVar27 - dVar9);
        if ((double)(float)(dVar27 - dVar9) - dVar18 < 0.0) {
          dVar10 = dVar18;
        }
        dVar23 = (double)(float)(dVar11 * dVar11);
        dVar17 = (double)(float)(dVar8 * dVar8);
        dVar18 = (double)(float)(dVar10 * dVar10);
        dVar9 = (double)(float)(dVar27 - dVar16);
        if ((double)(float)(dVar27 - dVar16) - dVar12 < 0.0) {
          dVar9 = dVar12;
        }
        dVar19 = (double)(float)(dVar9 * dVar9);
        dVar20 = (double)(float)(dVar23 * (double)(float)(dVar23 * dVar11));
        dVar16 = (double)(float)(dVar17 * (double)(float)(dVar17 * dVar8));
        dVar13 = (double)(float)(dVar18 * (double)(float)(dVar18 * dVar10));
        dVar22 = (double)(float)(dVar23 * dVar20);
        dVar21 = (double)(float)(dVar17 * dVar16);
        dVar12 = (double)(float)(dVar18 * dVar13);
        dVar14 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar9));
        dVar15 = (double)(float)(dVar19 * dVar14);
        fVar1 = (float)((double)(float)(dVar18 * dVar12) * dVar31 +
                       (double)(float)(dVar12 * dVar30 +
                                      (double)(float)(dVar13 * dVar29 +
                                                     (double)(float)((double)(float)(dVar18 * dVar10
                                                                                    ) * dVar28 +
                                                                    dVar10))));
        *(float *)(pcVar7 + 0x10) =
             (float)((double)((float)((double)(float)(dVar17 * dVar21) * dVar31 +
                                     (double)(float)(dVar21 * dVar30 +
                                                    (double)(float)(dVar16 * dVar29 +
                                                                   (double)(float)((double)(float)(
                                                  dVar17 * dVar8) * dVar28 + dVar8)))) * fVar1) *
                    dVar32);
        *(float *)(pcVar7 + 0x14) =
             (float)((double)((float)((double)(float)(dVar23 * dVar22) * dVar31 +
                                     (double)(float)(dVar22 * dVar30 +
                                                    (double)(float)(dVar20 * dVar29 +
                                                                   (double)(float)((double)(float)(
                                                  dVar23 * dVar11) * dVar28 + dVar11)))) * fVar1) *
                    dVar32);
        *(uint *)(pcVar7 + 4) =
             ((uint)((longlong)(((ulonglong)*(ushort *)(pcVar7 + 0xc) & 0x3f) - 8) >> 0x3f) &
             0x50000000) + 0x202020f0;
        *(float *)(pcVar7 + 0x18) =
             (float)(ABS((double)(float)((double)(float)(dVar19 * dVar15) * dVar31 +
                                        (double)(float)(dVar15 * dVar30 +
                                                       (double)(float)(dVar14 * dVar29 +
                                                                      (double)(float)((double)(float
                                                  )(dVar19 * dVar9) * dVar28 + dVar9))))) * dVar32);
      }
      else if (*pcVar7 == '\x01') {
        iVar5 = rand();
        uVar3 = iVar5 >> 0x10;
        *(uint *)(pcVar7 + 4) =
             *(int *)(pcVar7 + 0xc) + (uVar3 & 0x1f00) * 0x400 + (uVar3 & 0x1f0) * 0x40 +
             (uVar3 & 0x1f) * 4 + -0x202020;
      }
      iVar6 = iVar6 + 1;
      pcVar7 = pcVar7 + 0x20;
    } while (iVar6 < (int)(uint)(ushort)pSVar4->sprite_cnt);
  }
  return;
}


// 0x0153bb8 (0xa8 bytes)
void SkyDrawShell(undefined8 param_1)

{
  idol_draw::DrawSkyShell
            (Sky,param_1,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  return;
}


// 0x0153c60 (0x190 bytes)
void SkyLevelNone(void)

{
  RsxCmd *pRVar1;
  RenderingStep *pRVar2;
  longlong id;
  int iVar3;
  
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar2->command[1] = 0xff000000;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar2->command[1] = 0xffffff00;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar2->command[1] = 0xf3;
  pRVar1 = pRVar2->command;
  pRVar2->command = pRVar1 + 2;
  pRVar1[2] = NV4097_NO_OPERATION_x1;
  pRVar2->command[1] = 0;
  pRVar2->command = pRVar2->command + 2;
  FastMtx4Identity((float *)&outMatrix);
  if (Sky->shell_cnt != 0) {
    id = 0;
    do {
      idol_draw::DrawSkyShell
                (Sky,id,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
                 CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
                 CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
      iVar3 = (int)id + 1;
      id = (longlong)iVar3;
    } while (iVar3 < (int)(uint)(ushort)Sky->shell_cnt);
  }
  return;
}


// 0x0153e00 (0x3e4 bytes)
void SkyLevel_00(void)

{
  RsxCmd *pRVar1;
  ulonglong *puVar2;
  RenderingStep *pRVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  SKY *SKY;
  undefined4 outmtx;
  
  uVar18 = ZEXT48(&stack0x00000000);
  puVar2 = (ulonglong *)(uVar18 - 0x100);
  *puVar2 = uVar18;
  puVar2[0x22] = in_LR;
  puVar2[0x1e] = unaff_r30;
  pRVar3 = DepthPass;
  puVar2[0x1d] = unaff_r29;
  puVar2[0x1b] = unaff_r27;
  pRVar1 = pRVar3->command;
  puVar2[0x19] = unaff_r25;
  puVar2[0x18] = unaff_r24;
  *pRVar1 = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar1 = pRVar3->command;
  puVar2[0x1c] = unaff_r28;
  pRVar1[1] = 0xff000000;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = DepthPass;
  puVar2[0x1a] = unaff_r26;
  puVar2[0x16] = unaff_r22;
  pRVar1 = pRVar3->command;
  puVar2[0x15] = unaff_r21;
  puVar2[0x14] = unaff_r20;
  puVar2[0x12] = unaff_r18;
  *pRVar1 = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar1 = pRVar3->command;
  puVar2[0x17] = unaff_r23;
  puVar2[0x13] = unaff_r19;
  pRVar1[1] = 0xffffff00;
  pRVar1 = pRVar3->command;
  puVar2[0x1f] = unaff_r31;
  pRVar3->command = pRVar1 + 2;
  pRVar3 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar3->command[1] = 0xf3;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = NV4097_NO_OPERATION_x1;
  pRVar3->command[1] = 0;
  pRVar3->command = pRVar3->command + 2;
  uVar17 = DAT_00a561bc;
  uVar16 = DAT_00a561b8;
  uVar15 = DAT_00a561b4;
  uVar14 = DAT_00a561b0;
  uVar13 = DAT_00a561ac;
  uVar12 = DAT_00a561a8;
  uVar11 = DAT_00a561a4;
  uVar10 = DAT_00a561a0;
  uVar9 = DAT_00a5619c;
  uVar8 = DAT_00a56198;
  uVar7 = DAT_00a56194;
  uVar6 = DAT_00a56190;
  uVar5 = DAT_00a56188;
  uVar4 = DAT_00a56184;
  outmtx = outMatrix;
  SKY = Sky;
  *(undefined4 *)((int)puVar2 + 0x4c) = DAT_00a5618c;
  *(undefined4 *)(puVar2 + 9) = uVar5;
  *(undefined4 *)((int)puVar2 + 0x44) = uVar4;
  *(undefined4 *)(puVar2 + 8) = outmtx;
  *(undefined4 *)((int)puVar2 + 0x5c) = uVar9;
  *(undefined4 *)(puVar2 + 0xb) = uVar8;
  *(undefined4 *)((int)puVar2 + 0x54) = uVar7;
  *(undefined4 *)(puVar2 + 10) = uVar6;
  *(undefined4 *)((int)puVar2 + 0x6c) = uVar13;
  *(undefined4 *)(puVar2 + 0xd) = uVar12;
  *(undefined4 *)((int)puVar2 + 100) = uVar11;
  *(undefined4 *)(puVar2 + 0xc) = uVar10;
  *(undefined4 *)((int)puVar2 + 0x7c) = uVar17;
  *(undefined4 *)(puVar2 + 0xf) = uVar16;
  *(undefined4 *)((int)puVar2 + 0x74) = uVar15;
  *(undefined4 *)(puVar2 + 0xe) = uVar14;
  idol_draw::DrawSkyShell(SKY,0,puVar2[8],puVar2[9],puVar2[10],puVar2[0xb],puVar2[0xc],puVar2[0xd]);
  uVar13 = DAT_00a561ac;
  uVar12 = DAT_00a561a8;
  uVar11 = DAT_00a561a4;
  uVar10 = DAT_00a561a0;
  uVar9 = DAT_00a5619c;
  uVar8 = DAT_00a56198;
  uVar7 = DAT_00a56194;
  uVar6 = DAT_00a56190;
  uVar5 = DAT_00a56188;
  uVar4 = DAT_00a56184;
  outmtx = outMatrix;
  SKY = Sky;
  *(undefined4 *)((int)puVar2 + 0x4c) = DAT_00a5618c;
  *(undefined4 *)(puVar2 + 9) = uVar5;
  *(undefined4 *)((int)puVar2 + 0x44) = uVar4;
  *(undefined4 *)(puVar2 + 8) = outmtx;
  uVar14 = DAT_00a561bc;
  uVar5 = DAT_00a561b8;
  uVar4 = DAT_00a561b4;
  outmtx = DAT_00a561b0;
  *(undefined4 *)((int)puVar2 + 0x5c) = uVar9;
  *(undefined4 *)(puVar2 + 0xb) = uVar8;
  *(undefined4 *)((int)puVar2 + 0x54) = uVar7;
  *(undefined4 *)(puVar2 + 10) = uVar6;
  *(undefined4 *)((int)puVar2 + 0x6c) = uVar13;
  *(undefined4 *)(puVar2 + 0xd) = uVar12;
  *(undefined4 *)((int)puVar2 + 100) = uVar11;
  *(undefined4 *)(puVar2 + 0xc) = uVar10;
  *(undefined4 *)((int)puVar2 + 0x7c) = uVar14;
  *(undefined4 *)(puVar2 + 0xf) = uVar5;
  *(undefined4 *)((int)puVar2 + 0x74) = uVar4;
  *(undefined4 *)(puVar2 + 0xe) = outmtx;
  idol_draw::DrawSkyShell(SKY,1,puVar2[8],puVar2[9],puVar2[10],puVar2[0xb],puVar2[0xc],puVar2[0xd]);
  if (Sky->sprite_cnt == 0) {
    SkyInitNightSprites(0xf4,0xc);
  }
  SkyUpdateNightSprites();
  SkySpriteProc();
  uVar19 = idol_draw::PackCmd(0,1,0,1,0x80);
  SetGSReg(3,uVar19);
  uVar17 = DAT_00a561bc;
  uVar16 = DAT_00a561b8;
  uVar15 = DAT_00a561b4;
  uVar14 = DAT_00a561b0;
  uVar13 = DAT_00a561ac;
  uVar12 = DAT_00a561a8;
  uVar11 = DAT_00a561a4;
  uVar10 = DAT_00a561a0;
  uVar9 = DAT_00a5619c;
  uVar8 = DAT_00a56198;
  uVar7 = DAT_00a56194;
  uVar6 = DAT_00a56190;
  uVar5 = DAT_00a56188;
  uVar4 = DAT_00a56184;
  outmtx = outMatrix;
  SKY = Sky;
  *(undefined4 *)((int)puVar2 + 0x4c) = DAT_00a5618c;
  *(undefined4 *)(puVar2 + 9) = uVar5;
  *(undefined4 *)((int)puVar2 + 0x44) = uVar4;
  *(undefined4 *)(puVar2 + 8) = outmtx;
  *(undefined4 *)((int)puVar2 + 0x5c) = uVar9;
  *(undefined4 *)(puVar2 + 0xb) = uVar8;
  *(undefined4 *)((int)puVar2 + 0x54) = uVar7;
  *(undefined4 *)(puVar2 + 10) = uVar6;
  *(undefined4 *)((int)puVar2 + 0x6c) = uVar13;
  *(undefined4 *)(puVar2 + 0xd) = uVar12;
  *(undefined4 *)((int)puVar2 + 100) = uVar11;
  *(undefined4 *)(puVar2 + 0xc) = uVar10;
  *(undefined4 *)((int)puVar2 + 0x7c) = uVar17;
  *(undefined4 *)(puVar2 + 0xf) = uVar16;
  *(undefined4 *)((int)puVar2 + 0x74) = uVar15;
  *(undefined4 *)(puVar2 + 0xe) = uVar14;
  idol_draw::DrawSkyShell(SKY,2,puVar2[8],puVar2[9],puVar2[10],puVar2[0xb],puVar2[0xc],puVar2[0xd]);
  *(undefined4 *)((int)puVar2 + 0x8c) = 0;
  *(undefined4 *)(puVar2 + 0x11) = 0;
  *(undefined4 *)((int)puVar2 + 0x84) = 0;
  *(undefined4 *)(puVar2 + 0x10) = 0;
  auVar20 = loadVectorLeftIndexed(in_LR,0x153df0);
  auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar22 = loadVectorLeftIndexed(0x710,0xa10000);
  auVar23 = loadVectorLeftIndexed(8,0x153df0);
  auVar22 = vectorLogicalAnd(auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60);
  auVar20 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar23 = loadVectorLeftIndexed(4,0x153df0);
  auVar24 = loadVectorLeftIndexed(0xc,0x153df0);
  auVar21 = vectorConvertFromSignedFixedPointWord(auVar22,0);
  auVar22 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar23 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar20 = vectorNegativeMultiplySubtractFloatingPoint
                      (auVar21,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,
                       auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60);
  auVar20 = (auVar20 ^ SPLAT(auVar23)) >> 0x60 &
            (GPiece<16>)0xffffffff;
  outmtx = storeVectorElementWordIndexed
                     (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,0x88,
                      uVar18 - 0x100);
  *(undefined4 *)(puVar2 + 0x11) = outmtx;
  FastEulerToMtx2(&outMatrix,uVar18 - 0x80);
  uVar13 = DAT_00a561ac;
  uVar12 = DAT_00a561a8;
  uVar11 = DAT_00a561a4;
  uVar10 = DAT_00a561a0;
  uVar9 = DAT_00a5619c;
  uVar8 = DAT_00a56198;
  uVar7 = DAT_00a56194;
  uVar6 = DAT_00a56190;
  uVar5 = DAT_00a56188;
  uVar4 = DAT_00a56184;
  outmtx = outMatrix;
  SKY = Sky;
  *(undefined4 *)((int)puVar2 + 0x4c) = DAT_00a5618c;
  *(undefined4 *)(puVar2 + 9) = uVar5;
  *(undefined4 *)((int)puVar2 + 0x44) = uVar4;
  *(undefined4 *)(puVar2 + 8) = outmtx;
  uVar14 = DAT_00a561bc;
  uVar5 = DAT_00a561b8;
  uVar4 = DAT_00a561b4;
  outmtx = DAT_00a561b0;
  *(undefined4 *)((int)puVar2 + 0x5c) = uVar9;
  *(undefined4 *)(puVar2 + 0xb) = uVar8;
  *(undefined4 *)((int)puVar2 + 0x54) = uVar7;
  *(undefined4 *)(puVar2 + 10) = uVar6;
  *(undefined4 *)((int)puVar2 + 0x6c) = uVar13;
  *(undefined4 *)(puVar2 + 0xd) = uVar12;
  *(undefined4 *)((int)puVar2 + 100) = uVar11;
  *(undefined4 *)(puVar2 + 0xc) = uVar10;
  *(undefined4 *)((int)puVar2 + 0x7c) = uVar14;
  *(undefined4 *)(puVar2 + 0xf) = uVar5;
  *(undefined4 *)((int)puVar2 + 0x74) = uVar4;
  *(undefined4 *)(puVar2 + 0xe) = outmtx;
  idol_draw::DrawSkyShell(SKY,3,puVar2[8],puVar2[9],puVar2[10],puVar2[0xb],puVar2[0xc],puVar2[0xd]);
  FastMtx4Identity((float *)&outMatrix);
  uVar13 = DAT_00a561ac;
  uVar12 = DAT_00a561a8;
  uVar11 = DAT_00a561a4;
  uVar10 = DAT_00a561a0;
  uVar9 = DAT_00a5619c;
  uVar8 = DAT_00a56198;
  uVar7 = DAT_00a56194;
  uVar6 = DAT_00a56190;
  uVar5 = DAT_00a56188;
  uVar4 = DAT_00a56184;
  outmtx = outMatrix;
  SKY = Sky;
  *(undefined4 *)((int)puVar2 + 0x4c) = DAT_00a5618c;
  *(undefined4 *)(puVar2 + 9) = uVar5;
  *(undefined4 *)((int)puVar2 + 0x44) = uVar4;
  *(undefined4 *)(puVar2 + 8) = outmtx;
  uVar14 = DAT_00a561bc;
  uVar5 = DAT_00a561b8;
  uVar4 = DAT_00a561b4;
  outmtx = DAT_00a561b0;
  *(undefined4 *)((int)puVar2 + 0x5c) = uVar9;
  *(undefined4 *)(puVar2 + 0xb) = uVar8;
  *(undefined4 *)((int)puVar2 + 0x54) = uVar7;
  *(undefined4 *)(puVar2 + 10) = uVar6;
  *(undefined4 *)((int)puVar2 + 0x6c) = uVar13;
  *(undefined4 *)(puVar2 + 0xd) = uVar12;
  *(undefined4 *)((int)puVar2 + 100) = uVar11;
  *(undefined4 *)(puVar2 + 0xc) = uVar10;
  *(undefined4 *)((int)puVar2 + 0x7c) = uVar14;
  *(undefined4 *)(puVar2 + 0xf) = uVar5;
  *(undefined4 *)((int)puVar2 + 0x74) = uVar4;
  *(undefined4 *)(puVar2 + 0xe) = outmtx;
  idol_draw::DrawSkyShell(SKY,4,puVar2[8],puVar2[9],puVar2[10],puVar2[0xb],puVar2[0xc],puVar2[0xd]);
  return;
}


// 0x0154208 (0x37c bytes)
void SkyLevel_01(void)

{
  longlong lVar1;
  short sVar2;
  RsxCmd *pRVar3;
  undefined4 uVar4;
  ulonglong *puVar5;
  RenderingStep *pRVar6;
  SKY *sky;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  ulonglong uVar22;
  ulonglong unaff_r28;
  longlong lVar23;
  ulonglong unaff_r29;
  longlong id;
  int iVar24;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar33;
  
  uVar22 = ZEXT48(&stack0x00000000);
  lVar1 = uVar22 - 0x130;
  puVar5 = (ulonglong *)lVar1;
  *puVar5 = uVar22;
  puVar5[0x28] = in_LR;
  puVar21 = (undefined4 *)(uVar22 - 0x30);
  puVar21[3] = in_vr31_32_3;
  puVar21[2] = in_vr31_32_2;
  puVar21[1] = in_vr31_32_1;
  *puVar21 = in_vr31_32_0;
  puVar5[0x24] = unaff_r30;
  pRVar6 = DepthPass;
  puVar5[0x22] = unaff_r28;
  lVar23 = uVar22 - 0xb0;
  *pRVar6->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar6->command[1] = 0xff000000;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar6->command[1] = 0xffffff00;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar6->command[1] = 0xf3;
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 2;
  pRVar3[2] = NV4097_NO_OPERATION_x1;
  pRVar6->command[1] = 0;
  pRVar6->command = pRVar6->command + 2;
  *(undefined4 *)((int)puVar5 + 0x8c) = 0;
  *(undefined4 *)(puVar5 + 0x11) = 0;
  *(undefined4 *)((int)puVar5 + 0x84) = 0;
  *(undefined4 *)(puVar5 + 0x10) = 0;
  sVar2 = Sky->shell_cnt;
  puVar5[0x25] = unaff_r31;
  puVar5[0x23] = unaff_r29;
  if (sVar2 != 0) {
    auVar26 = loadVectorLeftIndexed(uVar22 - 0x30,0x1541e4);
    auVar25 = loadVectorLeftIndexed(4,0x1541e4);
    auVar28 = loadVectorLeftIndexed(8,0x1541e4);
    auVar29 = loadVectorLeftIndexed(0xc,0x1541e4);
    auVar30 = loadVectorLeftIndexed(0x10,0x1541e4);
    id = 0;
    auVar31 = loadVectorLeftIndexed(0x14,0x1541e4);
    auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar27 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar32 = loadVectorLeftIndexed(0x18,0x1541e4);
    auVar33 = loadVectorLeftIndexed(0x1c,0x1541e4);
    auVar26 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar25 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar26 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar28 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar26 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar29 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar26 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar30 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar26 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar31 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar26 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar32 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar26 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    do {
      iVar24 = (int)id;
      if (iVar24 < 3) {
        if (iVar24 < 2) {
LAB_00154484:
          FastMtx4Identity((float *)&outMatrix);
        }
        else {
          auVar33 = loadVectorLeftIndexed(0x710,0xa10000);
          auVar33 = vectorLogicalAnd(auVar33,auVar31);
          auVar33 = vectorConvertFromSignedFixedPointWord(auVar33,0);
          auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar33,auVar25,auVar27);
          auVar33 = (auVar33 ^ auVar30) >> 0x60 & (GPiece<16>)0xffffffff;
          uVar4 = storeVectorElementWordIndexed
                            (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x88,
                             lVar1);
          *(undefined4 *)(puVar5 + 0x11) = uVar4;
          FastEulerToMtx2(&outMatrix,lVar23);
        }
      }
      else if (iVar24 < 4) {
        auVar33 = loadVectorLeftIndexed(0x710,0xa10000);
        auVar33 = vectorLogicalAnd(auVar33,auVar32);
        auVar33 = vectorConvertFromSignedFixedPointWord(auVar33,0);
        auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar33,auVar28,auVar27);
        auVar33 = (auVar33 ^ auVar30) >> 0x60 & (GPiece<16>)0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x88,lVar1)
        ;
        *(undefined4 *)(puVar5 + 0x11) = uVar4;
        FastEulerToMtx2(&outMatrix,lVar23);
      }
      else {
        if (4 < iVar24) goto LAB_00154484;
        auVar33 = loadVectorLeftIndexed(0x710,0xa10000);
        auVar33 = vectorLogicalAnd(auVar33,auVar26);
        auVar33 = vectorConvertFromSignedFixedPointWord(auVar33,0);
        auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar33,auVar29,auVar27);
        auVar33 = (auVar33 ^ auVar30) >> 0x60 & (GPiece<16>)0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x88,lVar1)
        ;
        *(undefined4 *)(puVar5 + 0x11) = uVar4;
        FastEulerToMtx2(&outMatrix,lVar23);
      }
      uVar20 = DAT_00a561bc;
      uVar19 = DAT_00a561b8;
      uVar18 = DAT_00a561b4;
      uVar17 = DAT_00a561b0;
      uVar16 = DAT_00a561ac;
      uVar15 = DAT_00a561a8;
      uVar14 = DAT_00a561a4;
      uVar13 = DAT_00a561a0;
      uVar12 = DAT_00a5619c;
      uVar11 = DAT_00a56198;
      uVar10 = DAT_00a56194;
      uVar9 = DAT_00a56190;
      uVar8 = DAT_00a56188;
      uVar7 = DAT_00a56184;
      uVar4 = outMatrix;
      sky = Sky;
      *(undefined4 *)((int)puVar5 + 0x4c) = DAT_00a5618c;
      *(undefined4 *)(puVar5 + 9) = uVar8;
      *(undefined4 *)((int)puVar5 + 0x44) = uVar7;
      *(undefined4 *)(puVar5 + 8) = uVar4;
      *(undefined4 *)((int)puVar5 + 0x5c) = uVar12;
      *(undefined4 *)(puVar5 + 0xb) = uVar11;
      *(undefined4 *)((int)puVar5 + 0x54) = uVar10;
      *(undefined4 *)(puVar5 + 10) = uVar9;
      *(undefined4 *)((int)puVar5 + 0x6c) = uVar16;
      *(undefined4 *)(puVar5 + 0xd) = uVar15;
      *(undefined4 *)((int)puVar5 + 100) = uVar14;
      *(undefined4 *)(puVar5 + 0xc) = uVar13;
      *(undefined4 *)((int)puVar5 + 0x7c) = uVar20;
      *(undefined4 *)(puVar5 + 0xf) = uVar19;
      *(undefined4 *)((int)puVar5 + 0x74) = uVar18;
      *(undefined4 *)(puVar5 + 0xe) = uVar17;
      idol_draw::DrawSkyShell
                (sky,id,puVar5[8],puVar5[9],puVar5[10],puVar5[0xb],puVar5[0xc],puVar5[0xd]);
      id = (longlong)(iVar24 + 1);
    } while (iVar24 + 1 < (int)(uint)(ushort)Sky->shell_cnt);
  }
  return;
}


// 0x01545b8 (0x858 bytes)
void SkyLevel_02(void)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  RsxCmd *pRVar4;
  int iVar5;
  RenderingStep *pRVar6;
  int iVar10;
  undefined2 uVar13;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar11;
  int iVar12;
  undefined8 uVar9;
  char *pcVar14;
  char *pcVar15;
  int iVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
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
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  
  pRVar6 = DepthPass;
  iVar16 = 0;
  *DepthPass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar6->command[1] = 0xff000000;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar6->command[1] = 0xffffff00;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar6->command[1] = 0xf3;
  pRVar4 = pRVar6->command;
  pRVar6->command = pRVar4 + 2;
  pRVar4[2] = NV4097_NO_OPERATION_x1;
  pRVar6->command[1] = 0;
  pRVar6->command = pRVar6->command + 2;
  FastMtx4Identity((float *)&outMatrix);
  idol_draw::DrawSkyShell
            (Sky,0,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  idol_draw::DrawSkyShell
            (Sky,1,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  pcVar15 = (char *)Sky->tex_defs;
  if (Sky->sprite_cnt == 0) {
    iVar12 = 0;
    Sky->sprite_cnt = 0x100;
    dVar32 = 0.00390625;
    dVar33 = 1.570796251296997;
    dVar35 = 3.141592502593994;
    dVar36 = -3.141592502593994;
    dVar37 = -0.16666656732559204;
    dVar38 = 0.008333025500178337;
    dVar39 = -0.0001980741071747616;
    dVar40 = 2.601886990305502e-06;
    dVar41 = 50.0;
    dVar42 = 36.0;
    dVar43 = 16.0;
    pcVar14 = pcVar15;
    do {
      if (iVar12 < 0xf6) {
        *pcVar14 = '\x03';
        uVar13 = MB_randInt(0x100);
        *(undefined2 *)(pcVar14 + 0xc) = uVar13;
        iVar10 = rand();
        pcVar14[3] = 'H';
        pcVar14[2] = ((byte)((uint)iVar10 >> 0x10) & 1) + 2;
        dVar17 = (double)MB_randRot();
        *(float *)(pcVar14 + 8) = (float)dVar17;
        iVar10 = MB_randInt(0x30);
        dVar17 = (double)FastIntToDouble(iVar10 + 0x20);
        *(float *)(pcVar14 + 0x1c) = (float)(dVar17 * dVar32);
        dVar23 = (double)MB_randRot();
        dVar34 = (double)MB_randRot();
        dVar24 = (double)(float)(dVar23 + dVar33);
        dVar25 = (double)(float)(dVar34 + dVar33);
        dVar17 = (double)(float)(dVar35 - dVar34);
        if (dVar34 - (double)(float)(dVar35 - dVar34) < 0.0) {
          dVar17 = dVar34;
        }
        dVar18 = (double)(float)(dVar35 - dVar23);
        if (dVar23 - (double)(float)(dVar35 - dVar23) < 0.0) {
          dVar18 = dVar23;
        }
        dVar19 = (double)(float)(dVar35 - dVar24);
        if (dVar24 - (double)(float)(dVar35 - dVar24) < 0.0) {
          dVar19 = dVar24;
        }
        dVar20 = (double)(float)(dVar35 - dVar25);
        if (dVar25 - (double)(float)(dVar35 - dVar25) < 0.0) {
          dVar20 = dVar25;
        }
        dVar21 = (double)(float)(dVar36 - dVar34);
        if ((double)(float)(dVar36 - dVar34) - dVar17 < 0.0) {
          dVar21 = dVar17;
        }
        dVar17 = (double)(float)(dVar36 - dVar23);
        if ((double)(float)(dVar36 - dVar23) - dVar18 < 0.0) {
          dVar17 = dVar18;
        }
        dVar23 = (double)(float)(dVar36 - dVar24);
        if ((double)(float)(dVar36 - dVar24) - dVar19 < 0.0) {
          dVar23 = dVar19;
        }
        dVar24 = (double)(float)(dVar21 * dVar21);
        dVar18 = (double)(float)(dVar17 * dVar17);
        dVar34 = (double)(float)(dVar36 - dVar25);
        if ((double)(float)(dVar36 - dVar25) - dVar20 < 0.0) {
          dVar34 = dVar20;
        }
        dVar19 = (double)(float)(dVar23 * dVar23);
        dVar30 = (double)(float)(dVar34 * dVar34);
        dVar27 = (double)(float)(dVar24 * (double)(float)(dVar24 * dVar21));
        dVar20 = (double)(float)(dVar18 * (double)(float)(dVar18 * dVar17));
        dVar26 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar23));
        dVar31 = (double)(float)(dVar24 * dVar27);
        dVar28 = (double)(float)(dVar18 * dVar20);
        dVar25 = (double)(float)(dVar30 * (double)(float)(dVar30 * dVar34));
        dVar22 = (double)(float)(dVar19 * dVar26);
        dVar29 = (double)(float)(dVar30 * dVar25);
        fVar2 = (float)((double)(float)(dVar24 * dVar31) * dVar40 +
                       (double)(float)(dVar31 * dVar39 +
                                      (double)(float)(dVar27 * dVar38 +
                                                     (double)(float)((double)(float)(dVar24 * dVar21
                                                                                    ) * dVar37 +
                                                                    dVar21))));
        fVar1 = (float)((double)(float)(dVar30 * dVar29) * dVar40 +
                       (double)(float)(dVar29 * dVar39 +
                                      (double)(float)(dVar25 * dVar38 +
                                                     (double)(float)((double)(float)(dVar30 * dVar34
                                                                                    ) * dVar37 +
                                                                    dVar34))));
        *(float *)(pcVar14 + 0x14) =
             (float)((double)((float)((double)(float)(dVar18 * dVar28) * dVar40 +
                                     (double)(float)(dVar28 * dVar39 +
                                                    (double)(float)(dVar20 * dVar38 +
                                                                   (double)(float)((double)(float)(
                                                  dVar18 * dVar17) * dVar37 + dVar17)))) * fVar2) *
                    dVar41);
        *(float *)(pcVar14 + 0x10) =
             (float)((double)((float)((double)(float)(dVar19 * dVar22) * dVar40 +
                                     (double)(float)(dVar22 * dVar39 +
                                                    (double)(float)(dVar26 * dVar38 +
                                                                   (double)(float)((double)(float)(
                                                  dVar19 * dVar23) * dVar37 + dVar23)))) * fVar2) *
                    dVar41);
        *(float *)(pcVar14 + 0x18) = (float)((double)(fVar1 * fVar1) * dVar42 + dVar43);
        uVar7 = MB_randInt(0x18);
        uVar8 = MB_randInt(0x20);
        uVar11 = rand();
        iVar5 = (int)((uVar8 & 0xff) << 0x18);
        iVar10 = iVar5 + (int)((uVar7 & 0xffffffff) << 0x10) + 0x30505050;
        *(uint *)(pcVar14 + 0xc) =
             iVar10 + ((uint)(ZERO_MASK((uVar11 & 0x10000))) &
                      (iVar5 + (int)((uVar7 & 0xffffffff) << 8) + 0x30505050U | (uint)uVar7) -
                      iVar10);
      }
      else {
        *pcVar14 = '\0';
        iVar10 = rand();
        *(short *)(pcVar14 + 0xc) = (short)((uint)iVar10 >> 0x10);
        iVar10 = rand();
        *(short *)(pcVar14 + 0xe) = (short)((uint)iVar10 >> 0x10);
        pcVar14[2] = '\x03';
        pcVar14[3] = 'H';
        pcVar14[0x1c] = '>';
        pcVar14[0x1d] = '#';
        pcVar14[0x1e] = -0x29;
        pcVar14[0x1f] = '\n';
      }
      iVar12 = iVar12 + 1;
      pcVar14 = pcVar14 + 0x20;
    } while (iVar12 < (int)(uint)(ushort)Sky->sprite_cnt);
  }
  if (Sky->sprite_cnt != 0) {
    dVar32 = 0.0015339808305725455;
    dVar33 = 1.570796251296997;
    dVar35 = 3.141592502593994;
    dVar36 = -3.141592502593994;
    dVar37 = -0.16666656732559204;
    dVar38 = 0.008333025500178337;
    dVar39 = -0.0001980741071747616;
    dVar40 = 2.601886990305502e-06;
    dVar41 = 50.0;
    do {
      if (*pcVar15 == '\0') {
        uVar3 = *(ushort *)(pcVar15 + 0xc);
        *(short *)(pcVar15 + 0xc) = (short)((ulonglong)uVar3 + 1);
        *(short *)(pcVar15 + 0xe) = *(short *)(pcVar15 + 0xe) + 1;
        dVar42 = (double)FastIntToDouble(((ulonglong)uVar3 + 1 & 0xfff) - 0x800);
        dVar34 = (double)(float)(dVar42 * dVar32);
        dVar42 = (double)FastIntToDouble
                                   (((ulonglong)*(ushort *)(pcVar15 + 0xe) & 0xfff) - 0x800);
        dVar17 = (double)(float)(dVar34 + dVar33);
        dVar43 = (double)(float)(dVar42 * dVar32);
        dVar23 = (double)(float)(dVar43 + dVar33);
        dVar42 = (double)(float)(dVar35 - dVar34);
        if (dVar34 - (double)(float)(dVar35 - dVar34) < 0.0) {
          dVar42 = dVar34;
        }
        dVar24 = (double)(float)(dVar35 - dVar17);
        if (dVar17 - (double)(float)(dVar35 - dVar17) < 0.0) {
          dVar24 = dVar17;
        }
        dVar25 = (double)(float)(dVar35 - dVar43);
        if (dVar43 - (double)(float)(dVar35 - dVar43) < 0.0) {
          dVar25 = dVar43;
        }
        dVar18 = (double)(float)(dVar35 - dVar23);
        if (dVar23 - (double)(float)(dVar35 - dVar23) < 0.0) {
          dVar18 = dVar23;
        }
        dVar19 = (double)(float)(dVar36 - dVar34);
        if ((double)(float)(dVar36 - dVar34) - dVar42 < 0.0) {
          dVar19 = dVar42;
        }
        dVar42 = (double)(float)(dVar36 - dVar17);
        if ((double)(float)(dVar36 - dVar17) - dVar24 < 0.0) {
          dVar42 = dVar24;
        }
        dVar17 = (double)(float)(dVar36 - dVar43);
        if ((double)(float)(dVar36 - dVar43) - dVar25 < 0.0) {
          dVar17 = dVar25;
        }
        dVar34 = (double)(float)(dVar19 * dVar19);
        dVar24 = (double)(float)(dVar42 * dVar42);
        dVar25 = (double)(float)(dVar17 * dVar17);
        dVar43 = (double)(float)(dVar36 - dVar23);
        if ((double)(float)(dVar36 - dVar23) - dVar18 < 0.0) {
          dVar43 = dVar18;
        }
        dVar26 = (double)(float)(dVar43 * dVar43);
        dVar29 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar19));
        dVar23 = (double)(float)(dVar24 * (double)(float)(dVar24 * dVar42));
        dVar20 = (double)(float)(dVar25 * (double)(float)(dVar25 * dVar17));
        dVar31 = (double)(float)(dVar34 * dVar29);
        dVar30 = (double)(float)(dVar24 * dVar23);
        dVar18 = (double)(float)(dVar25 * dVar20);
        dVar21 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar43));
        dVar22 = (double)(float)(dVar26 * dVar21);
        fVar2 = (float)((double)(float)(dVar25 * dVar18) * dVar40 +
                       (double)(float)(dVar18 * dVar39 +
                                      (double)(float)(dVar20 * dVar38 +
                                                     (double)(float)((double)(float)(dVar25 * dVar17
                                                                                    ) * dVar37 +
                                                                    dVar17))));
        *(float *)(pcVar15 + 0x10) =
             (float)((double)((float)((double)(float)(dVar24 * dVar30) * dVar40 +
                                     (double)(float)(dVar30 * dVar39 +
                                                    (double)(float)(dVar23 * dVar38 +
                                                                   (double)(float)((double)(float)(
                                                  dVar24 * dVar42) * dVar37 + dVar42)))) * fVar2) *
                    dVar41);
        *(float *)(pcVar15 + 0x14) =
             (float)((double)((float)((double)(float)(dVar34 * dVar31) * dVar40 +
                                     (double)(float)(dVar31 * dVar39 +
                                                    (double)(float)(dVar29 * dVar38 +
                                                                   (double)(float)((double)(float)(
                                                  dVar34 * dVar19) * dVar37 + dVar19)))) * fVar2) *
                    dVar41);
        *(uint *)(pcVar15 + 4) =
             ((uint)((longlong)(((ulonglong)*(ushort *)(pcVar15 + 0xc) & 0x3f) - 8) >> 0x3f) &
             0x50000000) + 0x202020f0;
        *(float *)(pcVar15 + 0x18) =
             (float)(ABS((double)(float)((double)(float)(dVar26 * dVar22) * dVar40 +
                                        (double)(float)(dVar22 * dVar39 +
                                                       (double)(float)(dVar21 * dVar38 +
                                                                      (double)(float)((double)(float
                                                  )(dVar26 * dVar43) * dVar37 + dVar43))))) * dVar41
                    );
      }
      else if (*pcVar15 == '\x03') {
        iVar12 = rand();
        uVar11 = iVar12 >> 0x10;
        *(uint *)(pcVar15 + 4) =
             *(int *)(pcVar15 + 0xc) + (uVar11 & 0x1f00) * 0x400 + (uVar11 & 0x1f0) * 0x40 +
             (uVar11 & 0x1f) * 4 + -0x202020;
      }
      iVar16 = iVar16 + 1;
      pcVar15 = pcVar15 + 0x20;
    } while (iVar16 < (int)(uint)(ushort)Sky->sprite_cnt);
  }
  SkySpriteProc();
  uVar9 = idol_draw::PackCmd(0,1,0,1,0x80);
  SetGSReg(3,uVar9);
  idol_draw::DrawSkyShell
            (Sky,2,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  idol_draw::DrawSkyShell
            (Sky,3,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  return;
}


// 0x0154e28 (0x354 bytes)
void SkyLevel_03(void)

{
  longlong lVar1;
  RsxCmd *pRVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  RenderingStep *pRVar5;
  SKY *pSVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  longlong lVar21;
  undefined4 *puVar22;
  ulonglong uVar23;
  ulonglong unaff_r14;
  ulonglong unaff_r15;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar28;
  
  uVar23 = ZEXT48(&stack0x00000000);
  lVar1 = uVar23 - 0x140;
  puVar4 = (ulonglong *)lVar1;
  *puVar4 = uVar23;
  puVar4[0x2a] = in_LR;
  lVar21 = uVar23 - 0xa0;
  puVar22 = (undefined4 *)lVar21;
  puVar22[3] = in_vr31_32_3;
  puVar22[2] = in_vr31_32_2;
  puVar22[1] = in_vr31_32_1;
  *puVar22 = in_vr31_32_0;
  puVar4[0x26] = unaff_r30;
  pRVar5 = DepthPass;
  puVar4[0x25] = unaff_r29;
  *pRVar5->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar5->command[1] = 0xff000000;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar5->command[1] = 0xffffff00;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = DepthPass;
  puVar4[0x27] = unaff_r31;
  *pRVar5->command = NV4097_CLEAR_SURFACE_x1;
  pRVar5->command[1] = 0xf3;
  pRVar2 = pRVar5->command;
  pRVar5->command = pRVar2 + 2;
  pRVar2[2] = NV4097_NO_OPERATION_x1;
  pRVar5->command[1] = 0;
  pRVar2 = pRVar5->command;
  puVar4[0x24] = unaff_r28;
  puVar4[0x23] = unaff_r27;
  puVar4[0x22] = unaff_r26;
  puVar4[0x21] = unaff_r25;
  puVar4[0x20] = unaff_r24;
  puVar4[0x1f] = unaff_r23;
  puVar4[0x1e] = unaff_r22;
  puVar4[0x1d] = unaff_r21;
  puVar4[0x1c] = unaff_r20;
  puVar4[0x1b] = unaff_r19;
  puVar4[0x1a] = unaff_r18;
  puVar4[0x19] = unaff_r17;
  puVar4[0x18] = unaff_r16;
  puVar4[0x17] = unaff_r15;
  puVar4[0x16] = unaff_r14;
  pRVar5->command = pRVar2 + 2;
  FastMtx4Identity((float *)&outMatrix);
  uVar20 = DAT_00a561bc;
  uVar19 = DAT_00a561b8;
  uVar18 = DAT_00a561b4;
  uVar17 = DAT_00a561b0;
  uVar16 = DAT_00a561ac;
  uVar15 = DAT_00a561a8;
  uVar14 = DAT_00a561a4;
  uVar13 = DAT_00a561a0;
  uVar12 = DAT_00a5619c;
  uVar11 = DAT_00a56198;
  uVar10 = DAT_00a56194;
  uVar9 = DAT_00a56190;
  uVar8 = DAT_00a56188;
  uVar7 = DAT_00a56184;
  uVar3 = outMatrix;
  pSVar6 = Sky;
  *(undefined4 *)((int)puVar4 + 0x4c) = DAT_00a5618c;
  *(undefined4 *)(puVar4 + 9) = uVar8;
  *(undefined4 *)((int)puVar4 + 0x44) = uVar7;
  *(undefined4 *)(puVar4 + 8) = uVar3;
  *(undefined4 *)((int)puVar4 + 0x5c) = uVar12;
  *(undefined4 *)(puVar4 + 0xb) = uVar11;
  *(undefined4 *)((int)puVar4 + 0x54) = uVar10;
  *(undefined4 *)(puVar4 + 10) = uVar9;
  *(undefined4 *)((int)puVar4 + 0x6c) = uVar16;
  *(undefined4 *)(puVar4 + 0xd) = uVar15;
  *(undefined4 *)((int)puVar4 + 100) = uVar14;
  *(undefined4 *)(puVar4 + 0xc) = uVar13;
  *(undefined4 *)((int)puVar4 + 0x7c) = uVar20;
  *(undefined4 *)(puVar4 + 0xf) = uVar19;
  *(undefined4 *)((int)puVar4 + 0x74) = uVar18;
  *(undefined4 *)(puVar4 + 0xe) = uVar17;
  idol_draw::DrawSkyShell
            (pSVar6,0,puVar4[8],puVar4[9],puVar4[10],puVar4[0xb],puVar4[0xc],puVar4[0xd]);
  *(undefined4 *)((int)puVar4 + 0x8c) = 0;
  *(undefined4 *)(puVar4 + 0x11) = 0;
  *(undefined4 *)((int)puVar4 + 0x84) = 0;
  *(undefined4 *)(puVar4 + 0x10) = 0;
  auVar24 = loadVectorLeftIndexed(lVar21,0x154e10);
  auVar25 = loadVectorLeftIndexed(0x710,0xa10000);
  auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar26 = loadVectorLeftIndexed(4,0x154e10);
  auVar25 = vectorLogicalAnd(auVar25,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60);
  auVar24 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar27 = loadVectorLeftIndexed(8,0x154e10);
  auVar26 = vectorConvertFromSignedFixedPointWord(auVar25,0);
  auVar25 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar28 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
  auVar25 = loadVectorLeftIndexed(0xc,0x154e10);
  auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar27 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
  auVar24 = vectorNegativeMultiplySubtractFloatingPoint
                      (auVar26,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,auVar28
                      );
  auVar24 = (auVar24 ^ auVar27) >> 0x60 & (GPiece<16>)0xffffffff;
  uVar3 = storeVectorElementWordIndexed
                    (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x88,lVar1);
  *(undefined4 *)(puVar4 + 0x11) = uVar3;
  FastEulerToMtx2(&outMatrix,uVar23 - 0xc0);
  uVar16 = DAT_00a561ac;
  uVar15 = DAT_00a561a8;
  uVar14 = DAT_00a561a4;
  uVar13 = DAT_00a561a0;
  uVar12 = DAT_00a5619c;
  uVar11 = DAT_00a56198;
  uVar10 = DAT_00a56194;
  uVar9 = DAT_00a56190;
  uVar8 = DAT_00a56188;
  uVar7 = DAT_00a56184;
  uVar3 = outMatrix;
  pSVar6 = Sky;
  *(undefined4 *)((int)puVar4 + 0x4c) = DAT_00a5618c;
  *(undefined4 *)(puVar4 + 9) = uVar8;
  *(undefined4 *)((int)puVar4 + 0x44) = uVar7;
  *(undefined4 *)(puVar4 + 8) = uVar3;
  uVar17 = DAT_00a561bc;
  uVar8 = DAT_00a561b8;
  uVar7 = DAT_00a561b4;
  uVar3 = DAT_00a561b0;
  *(undefined4 *)((int)puVar4 + 0x5c) = uVar12;
  *(undefined4 *)(puVar4 + 0xb) = uVar11;
  *(undefined4 *)((int)puVar4 + 0x54) = uVar10;
  *(undefined4 *)(puVar4 + 10) = uVar9;
  *(undefined4 *)((int)puVar4 + 0x6c) = uVar16;
  *(undefined4 *)(puVar4 + 0xd) = uVar15;
  *(undefined4 *)((int)puVar4 + 100) = uVar14;
  *(undefined4 *)(puVar4 + 0xc) = uVar13;
  *(undefined4 *)((int)puVar4 + 0x7c) = uVar17;
  *(undefined4 *)(puVar4 + 0xf) = uVar8;
  *(undefined4 *)((int)puVar4 + 0x74) = uVar7;
  *(undefined4 *)(puVar4 + 0xe) = uVar3;
  idol_draw::DrawSkyShell
            (pSVar6,1,puVar4[8],puVar4[9],puVar4[10],puVar4[0xb],puVar4[0xc],puVar4[0xd]);
  auVar25 = loadVectorLeftIndexed(0x710,0xa10000);
  auVar24 = loadVectorLeftIndexed(0x10,0x154e10);
  auVar26 = loadVectorLeftIndexed(0x14,0x154e10);
  auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar25 = vectorLogicalAnd(auVar25,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60);
  auVar24 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar25 = vectorConvertFromSignedFixedPointWord(auVar25,0);
  auVar24 = vectorNegativeMultiplySubtractFloatingPoint
                      (auVar25,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,auVar28
                      );
  auVar24 = (auVar24 ^ auVar27) >> 0x60 & (GPiece<16>)0xffffffff;
  uVar3 = storeVectorElementWordIndexed
                    (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x88,lVar1);
  *(undefined4 *)(puVar4 + 0x11) = uVar3;
  FastEulerToMtx2(&outMatrix,uVar23 - 0xc0);
  uVar16 = DAT_00a561ac;
  uVar15 = DAT_00a561a8;
  uVar14 = DAT_00a561a4;
  uVar13 = DAT_00a561a0;
  uVar12 = DAT_00a5619c;
  uVar11 = DAT_00a56198;
  uVar10 = DAT_00a56194;
  uVar9 = DAT_00a56190;
  uVar8 = DAT_00a56188;
  uVar7 = DAT_00a56184;
  uVar3 = outMatrix;
  pSVar6 = Sky;
  *(undefined4 *)((int)puVar4 + 0x4c) = DAT_00a5618c;
  *(undefined4 *)(puVar4 + 9) = uVar8;
  *(undefined4 *)((int)puVar4 + 0x44) = uVar7;
  *(undefined4 *)(puVar4 + 8) = uVar3;
  uVar17 = DAT_00a561bc;
  uVar8 = DAT_00a561b8;
  uVar7 = DAT_00a561b4;
  uVar3 = DAT_00a561b0;
  *(undefined4 *)((int)puVar4 + 0x5c) = uVar12;
  *(undefined4 *)(puVar4 + 0xb) = uVar11;
  *(undefined4 *)((int)puVar4 + 0x54) = uVar10;
  *(undefined4 *)(puVar4 + 10) = uVar9;
  *(undefined4 *)((int)puVar4 + 0x6c) = uVar16;
  *(undefined4 *)(puVar4 + 0xd) = uVar15;
  *(undefined4 *)((int)puVar4 + 100) = uVar14;
  *(undefined4 *)(puVar4 + 0xc) = uVar13;
  *(undefined4 *)((int)puVar4 + 0x7c) = uVar17;
  *(undefined4 *)(puVar4 + 0xf) = uVar8;
  *(undefined4 *)((int)puVar4 + 0x74) = uVar7;
  *(undefined4 *)(puVar4 + 0xe) = uVar3;
  idol_draw::DrawSkyShell
            (pSVar6,2,puVar4[8],puVar4[9],puVar4[10],puVar4[0xb],puVar4[0xc],puVar4[0xd]);
  return;
}


// 0x0155198 (0x300 bytes)
void SkyLevel_04(void)

{
  longlong lVar1;
  short sVar2;
  RsxCmd *pRVar3;
  undefined4 uVar4;
  ulonglong *puVar5;
  RenderingStep *pRVar6;
  SKY *sky;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  ulonglong uVar22;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  longlong id;
  int iVar23;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar30;
  
  uVar22 = ZEXT48(&stack0x00000000);
  lVar1 = uVar22 - 0x110;
  puVar5 = (ulonglong *)lVar1;
  *puVar5 = uVar22;
  puVar5[0x24] = in_LR;
  puVar21 = (undefined4 *)(uVar22 - 0x30);
  puVar21[3] = in_vr31_32_3;
  puVar21[2] = in_vr31_32_2;
  puVar21[1] = in_vr31_32_1;
  *puVar21 = in_vr31_32_0;
  puVar5[0x20] = unaff_r30;
  pRVar6 = DepthPass;
  puVar5[0x1e] = unaff_r28;
  *pRVar6->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar6->command[1] = 0xff000000;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar6->command[1] = 0xffffff00;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar6->command[1] = 0xf3;
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 2;
  pRVar3[2] = NV4097_NO_OPERATION_x1;
  pRVar6->command[1] = 0;
  pRVar6->command = pRVar6->command + 2;
  *(undefined4 *)((int)puVar5 + 0x8c) = 0;
  *(undefined4 *)(puVar5 + 0x11) = 0;
  *(undefined4 *)((int)puVar5 + 0x84) = 0;
  *(undefined4 *)(puVar5 + 0x10) = 0;
  sVar2 = Sky->shell_cnt;
  puVar5[0x21] = unaff_r31;
  puVar5[0x1f] = unaff_r29;
  if (sVar2 != 0) {
    auVar25 = loadVectorLeftIndexed(uVar22 - 0x30,0x15517c);
    auVar24 = loadVectorLeftIndexed(4,0x15517c);
    auVar27 = loadVectorLeftIndexed(8,0x15517c);
    id = 0;
    auVar28 = loadVectorLeftIndexed(0xc,0x15517c);
    auVar29 = loadVectorLeftIndexed(0x10,0x15517c);
    auVar30 = loadVectorLeftIndexed(0x14,0x15517c);
    auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar26 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
    auVar25 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar24 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
    auVar25 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar27 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
    auVar25 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar28 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
    auVar25 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar29 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
    auVar25 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
    do {
      iVar23 = (int)id;
      if (iVar23 < 2) {
        if (iVar23 < 1) {
LAB_001553a8:
          FastMtx4Identity((float *)&outMatrix);
        }
        else {
          auVar30 = loadVectorLeftIndexed(0x710,0xa10000);
          auVar30 = vectorLogicalAnd(auVar30,auVar29);
          auVar30 = vectorConvertFromSignedFixedPointWord(auVar30,0);
          auVar30 = vectorNegativeMultiplySubtractFloatingPoint(auVar30,auVar24,auVar26);
          auVar30 = (auVar30 ^ auVar28) >> 0x60 & (GPiece<16>)0xffffffff;
          uVar4 = storeVectorElementWordIndexed
                            (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0x88,
                             lVar1);
          *(undefined4 *)(puVar5 + 0x11) = uVar4;
          FastEulerToMtx2(&outMatrix,uVar22 - 0x90);
        }
      }
      else {
        if (2 < iVar23) goto LAB_001553a8;
        auVar30 = loadVectorLeftIndexed(0x710,0xa10000);
        auVar30 = vectorLogicalAnd(auVar30,auVar25);
        auVar30 = vectorConvertFromSignedFixedPointWord(auVar30,0);
        auVar30 = vectorNegativeMultiplySubtractFloatingPoint(auVar30,auVar27,auVar26);
        auVar30 = (auVar30 ^ auVar28) >> 0x60 & (GPiece<16>)0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0x88,lVar1)
        ;
        *(undefined4 *)(puVar5 + 0x11) = uVar4;
        FastEulerToMtx2(&outMatrix,uVar22 - 0x90);
      }
      uVar20 = DAT_00a561bc;
      uVar19 = DAT_00a561b8;
      uVar18 = DAT_00a561b4;
      uVar17 = DAT_00a561b0;
      uVar16 = DAT_00a561ac;
      uVar15 = DAT_00a561a8;
      uVar14 = DAT_00a561a4;
      uVar13 = DAT_00a561a0;
      uVar12 = DAT_00a5619c;
      uVar11 = DAT_00a56198;
      uVar10 = DAT_00a56194;
      uVar9 = DAT_00a56190;
      uVar8 = DAT_00a56188;
      uVar7 = DAT_00a56184;
      uVar4 = outMatrix;
      sky = Sky;
      *(undefined4 *)((int)puVar5 + 0x4c) = DAT_00a5618c;
      *(undefined4 *)(puVar5 + 9) = uVar8;
      *(undefined4 *)((int)puVar5 + 0x44) = uVar7;
      *(undefined4 *)(puVar5 + 8) = uVar4;
      *(undefined4 *)((int)puVar5 + 0x5c) = uVar12;
      *(undefined4 *)(puVar5 + 0xb) = uVar11;
      *(undefined4 *)((int)puVar5 + 0x54) = uVar10;
      *(undefined4 *)(puVar5 + 10) = uVar9;
      *(undefined4 *)((int)puVar5 + 0x6c) = uVar16;
      *(undefined4 *)(puVar5 + 0xd) = uVar15;
      *(undefined4 *)((int)puVar5 + 100) = uVar14;
      *(undefined4 *)(puVar5 + 0xc) = uVar13;
      *(undefined4 *)((int)puVar5 + 0x7c) = uVar20;
      *(undefined4 *)(puVar5 + 0xf) = uVar19;
      *(undefined4 *)((int)puVar5 + 0x74) = uVar18;
      *(undefined4 *)(puVar5 + 0xe) = uVar17;
      idol_draw::DrawSkyShell
                (sky,id,puVar5[8],puVar5[9],puVar5[10],puVar5[0xb],puVar5[0xc],puVar5[0xd]);
      id = (longlong)(iVar23 + 1);
    } while (iVar23 + 1 < (int)(uint)(ushort)Sky->shell_cnt);
  }
  return;
}


// 0x01554a0 (0x2bc bytes)
void SkyLevel_05(void)

{
  RsxCmd *pRVar1;
  RenderingStep *pRVar2;
  undefined8 uVar3;
  GPiece<40> auStack_40;
  
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar2->command[1] = 0xff000014;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar2->command[1] = 0xffffff00;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar2->command[1] = 0xf3;
  pRVar1 = pRVar2->command;
  pRVar2->command = pRVar1 + 2;
  pRVar1[2] = NV4097_NO_OPERATION_x1;
  pRVar2->command[1] = 0;
  pRVar2->command = pRVar2->command + 2;
  FastMtx4Identity((float *)&outMatrix);
  idol_draw::DrawSkyShell
            (Sky,0,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  if (Sky->sprite_cnt == 0) {
    SkyInitNightSprites(0x78,8);
  }
  SkyUpdateNightSprites();
  SkySpriteProc();
  uVar3 = idol_draw::PackCmd(0,1,0,1,0x80);
  SetGSReg(3,uVar3);
  FastEulerToMtx2(&outMatrix,auStack_40);
  idol_draw::DrawSkyShell
            (Sky,1,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  return;
}


// 0x0155788 (0x9a0 bytes)
void SkyLevel_06(void)

{
  float fVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  ushort uVar5;
  RsxCmd *pRVar6;
  RenderingStep *pRVar7;
  int iVar11;
  undefined2 uVar14;
  ulonglong uVar8;
  uint uVar12;
  ulonglong uVar9;
  int iVar13;
  undefined8 uVar10;
  longlong lVar15;
  char *pcVar16;
  char *pcVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
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
  double dVar40;
  double dVar41;
  double dVar42;
  
  pRVar7 = DepthPass;
  *DepthPass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar7->command[1] = 0xff000000;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar7->command[1] = 0xffffff00;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar7->command[1] = 0xf3;
  pRVar6 = pRVar7->command;
  pRVar7->command = pRVar6 + 2;
  pRVar6[2] = NV4097_NO_OPERATION_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  FastMtx4Identity((float *)&outMatrix);
  idol_draw::DrawSkyShell
            (Sky,0,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  pcVar17 = (char *)Sky->tex_defs;
  if (Sky->sprite_cnt == 0) {
    Sky->sprite_cnt = 0x100;
    dVar33 = 0.00390625;
    dVar34 = 1.570796251296997;
    dVar35 = 3.141592502593994;
    lVar15 = 0;
    dVar36 = -3.141592502593994;
    dVar37 = -0.16666656732559204;
    dVar38 = 0.008333025500178337;
    dVar39 = -0.0001980741071747616;
    dVar40 = 2.601886990305502e-06;
    dVar41 = 50.0;
    pcVar16 = pcVar17;
    do {
      if ((int)lVar15 < 0xf0) {
        if ((int)lVar15 < 0xea) {
          *pcVar16 = '\x03';
          uVar14 = MB_randInt(0x100);
          *(undefined2 *)(pcVar16 + 0xc) = uVar14;
          iVar11 = rand();
          pcVar16[2] = (byte)((uint)iVar11 >> 0x10) & 1;
          pcVar16[3] = 'H';
          dVar42 = (double)MB_randRot();
          *(float *)(pcVar16 + 8) = (float)dVar42;
          iVar11 = MB_randInt(0x30);
          dVar42 = (double)FastIntToDouble(iVar11 + 0x20);
          *(float *)(pcVar16 + 0x1c) = (float)(dVar42 * dVar33);
          dVar19 = (double)MB_randRot();
          dVar20 = (double)MB_randRot();
          dVar21 = (double)(float)(dVar19 + dVar34);
          dVar26 = (double)(float)(dVar20 + dVar34);
          dVar42 = (double)(float)(dVar35 - dVar20);
          if (dVar20 - (double)(float)(dVar35 - dVar20) < 0.0) {
            dVar42 = dVar20;
          }
          dVar32 = (double)(float)(dVar35 - dVar19);
          if (dVar19 - (double)(float)(dVar35 - dVar19) < 0.0) {
            dVar32 = dVar19;
          }
          dVar22 = (double)(float)(dVar35 - dVar21);
          if (dVar21 - (double)(float)(dVar35 - dVar21) < 0.0) {
            dVar22 = dVar21;
          }
          dVar23 = (double)(float)(dVar35 - dVar26);
          if (dVar26 - (double)(float)(dVar35 - dVar26) < 0.0) {
            dVar23 = dVar26;
          }
          dVar18 = (double)(float)(dVar36 - dVar20);
          if ((double)(float)(dVar36 - dVar20) - dVar42 < 0.0) {
            dVar18 = dVar42;
          }
          dVar42 = (double)(float)(dVar36 - dVar19);
          if ((double)(float)(dVar36 - dVar19) - dVar32 < 0.0) {
            dVar42 = dVar32;
          }
          dVar19 = (double)(float)(dVar36 - dVar21);
          if ((double)(float)(dVar36 - dVar21) - dVar22 < 0.0) {
            dVar19 = dVar22;
          }
          dVar21 = (double)(float)(dVar18 * dVar18);
          dVar32 = (double)(float)(dVar42 * dVar42);
          dVar20 = (double)(float)(dVar36 - dVar26);
          if ((double)(float)(dVar36 - dVar26) - dVar23 < 0.0) {
            dVar20 = dVar23;
          }
          dVar26 = (double)(float)(dVar19 * dVar19);
          dVar24 = (double)(float)(dVar20 * dVar20);
          dVar28 = (double)(float)(dVar21 * (double)(float)(dVar21 * dVar18));
          dVar22 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar42));
          dVar30 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar19));
          dVar25 = (double)(float)(dVar21 * dVar28);
          dVar29 = (double)(float)(dVar32 * dVar22);
          dVar23 = (double)(float)(dVar26 * dVar30);
          dVar27 = (double)(float)(dVar24 * (double)(float)(dVar24 * dVar20));
          fVar1 = (float)((double)(float)(dVar21 * dVar25) * dVar40 +
                         (double)(float)(dVar25 * dVar39 +
                                        (double)(float)(dVar28 * dVar38 +
                                                       (double)(float)((double)(float)(dVar21 * 
                                                  dVar18) * dVar37 + dVar18))));
          dVar21 = (double)(float)(dVar24 * dVar27);
          *(float *)(pcVar16 + 0x14) =
               (float)((double)((float)((double)(float)(dVar32 * dVar29) * dVar40 +
                                       (double)(float)(dVar29 * dVar39 +
                                                      (double)(float)(dVar22 * dVar38 +
                                                                     (double)(float)((double)(float)
                                                  (dVar32 * dVar42) * dVar37 + dVar42)))) * fVar1) *
                      dVar41);
          *(float *)(pcVar16 + 0x10) =
               (float)((double)((float)((double)(float)(dVar26 * dVar23) * dVar40 +
                                       (double)(float)(dVar23 * dVar39 +
                                                      (double)(float)(dVar30 * dVar38 +
                                                                     (double)(float)((double)(float)
                                                  (dVar26 * dVar19) * dVar37 + dVar19)))) * fVar1) *
                      dVar41);
          *(float *)(pcVar16 + 0x18) =
               (float)((double)(float)((double)(float)(dVar24 * dVar21) * dVar40 +
                                      (double)(float)(dVar21 * dVar39 +
                                                     (double)(float)(dVar27 * dVar38 +
                                                                    (double)(float)((double)(float)(
                                                  dVar24 * dVar20) * dVar37 + dVar20)))) * dVar41);
          uVar9 = MB_randInt(0x18);
          uVar8 = MB_randInt(0x20);
          uVar12 = rand();
          iVar13 = (int)((uVar8 & 0xff) << 0x18);
          iVar11 = iVar13 + (int)((uVar9 & 0xffffffff) << 0x10) + 0x30585050;
          *(uint *)(pcVar16 + 0xc) =
               iVar11 + ((uint)(ZERO_MASK((uVar12 & 0x10000))) &
                        (iVar13 + (int)((uVar9 & 0xffffffff) << 8) + 0x30505850U | (int)uVar9 + 8U)
                        - iVar11);
        }
        else {
          iVar11 = (int)(lVar15 - 0xeaU) >> 1;
          uVar9 = lVar15 - 0xeaU & 1;
          pcVar16[2] = '\x02';
          pcVar16[3] = 'H';
          dVar42 = (double)MB_randRot();
          *(float *)(pcVar16 + 8) = (float)dVar42;
          *pcVar16 = '\x02';
          iVar13 = (int)((longlong)iVar11 << 4);
          *(undefined4 *)(pcVar16 + 4) =
               *(undefined4 *)(&DAT_00731ae0 + (int)((longlong)iVar11 << 2));
          *(undefined4 *)(pcVar16 + 0x10) = *(undefined4 *)(iVar13 + 0x731ab0);
          *(undefined4 *)(pcVar16 + 0x14) = *(undefined4 *)(iVar13 + 0x731ab4);
          *(undefined4 *)(pcVar16 + 0x18) = *(undefined4 *)(iVar13 + 0x731ab8);
          uVar4 = *(undefined4 *)(iVar13 + 0x731abc);
          pcVar16[0xc] = (char)iVar11;
          *(undefined4 *)(pcVar16 + 0x1c) = uVar4;
          pcVar16[0xd] = (char)uVar9;
          pcVar16[0xe] = (char)(uVar9 << 3) * '\x03';
        }
      }
      else {
        *pcVar16 = '\0';
        iVar11 = rand();
        *(short *)(pcVar16 + 0xc) = (short)((uint)iVar11 >> 0x10);
        iVar11 = rand();
        *(short *)(pcVar16 + 0xe) = (short)((uint)iVar11 >> 0x10);
        pcVar16[2] = '\x01';
        pcVar16[3] = 'H';
        pcVar16[0x1c] = '>';
        pcVar16[0x1d] = '8';
        pcVar16[0x1e] = 'Q';
        pcVar16[0x1f] = -0x14;
        iVar11 = rand();
        *(undefined4 *)(pcVar16 + 4) = *(undefined4 *)(&DAT_00731aec + (iVar11 >> 0x10 & 3U) * 4);
      }
      lVar15 = lVar15 + 1;
      pcVar16 = pcVar16 + 0x20;
    } while ((int)lVar15 < (int)(uint)(ushort)Sky->sprite_cnt);
  }
  if (Sky->sprite_cnt != 0) {
    iVar11 = 0;
    dVar33 = 0.0015339808305725455;
    dVar34 = 1.570796251296997;
    dVar35 = 3.141592502593994;
    dVar36 = -3.141592502593994;
    dVar37 = -0.16666656732559204;
    dVar38 = 0.008333025500178337;
    dVar39 = -0.0001980741071747616;
    dVar40 = 2.601886990305502e-06;
    dVar41 = 50.0;
    dVar42 = 0.02454369328916073;
    do {
      cVar2 = *pcVar17;
      if (cVar2 == '\0') {
        uVar5 = *(ushort *)(pcVar17 + 0xc);
        *(short *)(pcVar17 + 0xc) = (short)((ulonglong)uVar5 + 1);
        *(short *)(pcVar17 + 0xe) = *(short *)(pcVar17 + 0xe) + 1;
        dVar19 = (double)FastIntToDouble(((ulonglong)uVar5 + 1 & 0xfff) - 0x800);
        dVar32 = (double)(float)(dVar19 * dVar33);
        dVar19 = (double)FastIntToDouble
                                   (((ulonglong)*(ushort *)(pcVar17 + 0xe) & 0xfff) - 0x800);
        dVar21 = (double)(float)(dVar32 + dVar34);
        dVar20 = (double)(float)(dVar19 * dVar33);
        dVar26 = (double)(float)(dVar20 + dVar34);
        dVar19 = (double)(float)(dVar35 - dVar32);
        if (dVar32 - (double)(float)(dVar35 - dVar32) < 0.0) {
          dVar19 = dVar32;
        }
        uVar12 = *(uint *)(pcVar17 + 4) & 0xffffff | 0x24000000;
        dVar22 = (double)(float)(dVar35 - dVar21);
        if (dVar21 - (double)(float)(dVar35 - dVar21) < 0.0) {
          dVar22 = dVar21;
        }
        dVar23 = (double)(float)(dVar35 - dVar20);
        if (dVar20 - (double)(float)(dVar35 - dVar20) < 0.0) {
          dVar23 = dVar20;
        }
        dVar18 = (double)(float)(dVar36 - dVar32);
        if ((double)(float)(dVar36 - dVar32) - dVar19 < 0.0) {
          dVar18 = dVar19;
        }
        dVar19 = (double)(float)(dVar35 - dVar26);
        if (dVar26 - (double)(float)(dVar35 - dVar26) < 0.0) {
          dVar19 = dVar26;
        }
        dVar32 = (double)(float)(dVar36 - dVar21);
        if ((double)(float)(dVar36 - dVar21) - dVar22 < 0.0) {
          dVar32 = dVar22;
        }
        dVar21 = (double)(float)(dVar36 - dVar20);
        if ((double)(float)(dVar36 - dVar20) - dVar23 < 0.0) {
          dVar21 = dVar23;
        }
        dVar22 = (double)(float)(dVar18 * dVar18);
        dVar23 = (double)(float)(dVar32 * dVar32);
        dVar24 = (double)(float)(dVar21 * dVar21);
        dVar20 = (double)(float)(dVar36 - dVar26);
        if ((double)(float)(dVar36 - dVar26) - dVar19 < 0.0) {
          dVar20 = dVar19;
        }
        dVar29 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar18));
        dVar31 = (double)(float)(dVar20 * dVar20);
        dVar27 = (double)(float)(dVar23 * (double)(float)(dVar23 * dVar32));
        dVar19 = (double)(float)(dVar24 * (double)(float)(dVar24 * dVar21));
        dVar26 = (double)(float)(dVar22 * dVar29);
        dVar30 = (double)(float)(dVar23 * dVar27);
        dVar28 = (double)(float)(dVar24 * dVar19);
        dVar25 = (double)(float)(dVar31 * (double)(float)(dVar31 * dVar20));
        fVar1 = (float)((double)(float)(dVar24 * dVar28) * dVar40 +
                       (double)(float)(dVar28 * dVar39 +
                                      (double)(float)(dVar19 * dVar38 +
                                                     (double)(float)((double)(float)(dVar24 * dVar21
                                                                                    ) * dVar37 +
                                                                    dVar21))));
        dVar19 = (double)(float)(dVar31 * dVar25);
        *(float *)(pcVar17 + 0x10) =
             (float)((double)((float)((double)(float)(dVar23 * dVar30) * dVar40 +
                                     (double)(float)(dVar30 * dVar39 +
                                                    (double)(float)(dVar27 * dVar38 +
                                                                   (double)(float)((double)(float)(
                                                  dVar23 * dVar32) * dVar37 + dVar32)))) * fVar1) *
                    dVar41);
        *(float *)(pcVar17 + 0x14) =
             (float)((double)((float)((double)(float)(dVar22 * dVar26) * dVar40 +
                                     (double)(float)(dVar26 * dVar39 +
                                                    (double)(float)(dVar29 * dVar38 +
                                                                   (double)(float)((double)(float)(
                                                  dVar22 * dVar18) * dVar37 + dVar18)))) * fVar1) *
                    dVar41);
        *(uint *)(pcVar17 + 4) =
             uVar12 + ((uint)((longlong)(((ulonglong)*(ushort *)(pcVar17 + 0xc) & 0x3f) - 8) >> 0x3f
                             ) & (*(uint *)(pcVar17 + 4) & 0xffffff | 0x70000000) - uVar12);
        *(float *)(pcVar17 + 0x18) =
             (float)((double)(float)((double)(float)(dVar31 * dVar19) * dVar40 +
                                    (double)(float)(dVar19 * dVar39 +
                                                   (double)(float)(dVar25 * dVar38 +
                                                                  (double)(float)((double)(float)(
                                                  dVar31 * dVar20) * dVar37 + dVar20)))) * dVar41);
      }
      else if (cVar2 == '\x02') {
        uVar9 = (ulonglong)(byte)pcVar17[0xe] +
                ((((ulonglong)(byte)pcVar17[0xe] + 2) * 0x55 << 0x20) >> 0x2c) * -0x30 + 1;
        pcVar17[0xe] = (char)uVar9;
        if ((uVar9 & 0xff) == 0) {
          bVar3 = pcVar17[0xd];
          iVar13 = rand();
          dVar19 = (double)FastIntToDouble
                                     (((ulonglong)bVar3 << 5 |
                                      (ulonglong)(uint)(iVar13 >> 0x10) & 0xf) - 8);
          uVar9 = (ulonglong)(byte)pcVar17[0xe];
          *(float *)(pcVar17 + 8) = (float)(dVar19 * dVar42);
        }
        uVar9 = uVar9 & 0xff;
        iVar13 = rand();
        uVar12 = iVar13 >> 0x10;
        *(uint *)(pcVar17 + 4) =
             *(int *)(&DAT_00731ae0 + (uint)(byte)pcVar17[0xc] * 4) + (uVar12 & 0xf00) * 0x100 +
             (uVar12 & 0xf0) * 0x10 + (uVar12 & 0xf) +
             (int)((uVar9 * 4 + ((longlong)(uVar9 * -4 + 0x60) >> 0x3f & uVar9 * -8 + 0xc0) &
                   0xffffffff) << 0x18);
      }
      else if (cVar2 == '\x03') {
        iVar13 = rand();
        uVar12 = iVar13 >> 0x10;
        *(uint *)(pcVar17 + 4) =
             *(int *)(pcVar17 + 0xc) + (uVar12 & 0x1f00) * 0x400 + (uVar12 & 0x1f0) * 0x40 +
             (uVar12 & 0x1f) * 4 + -0x202020;
      }
      iVar11 = iVar11 + 1;
      pcVar17 = pcVar17 + 0x20;
    } while (iVar11 < (int)(uint)(ushort)Sky->sprite_cnt);
  }
  SkySpriteProc();
  uVar10 = idol_draw::PackCmd(0,1,0,1,0x80);
  SetGSReg(3,uVar10);
  idol_draw::DrawSkyShell
            (Sky,1,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  idol_draw::DrawSkyShell
            (Sky,2,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  return;
}


// 0x0156148 (0x400 bytes)
void SkyLevel_07(void)

{
  RsxCmd *pRVar1;
  undefined4 uVar2;
  RenderingStep *pRVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 in_LR;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<32> auStack_90;
  
  pRVar3 = DepthPass;
  auVar8 = ZEXT416(0xffffffff);
  auVar7 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  auVar8 = ZEXT416(0xffffffff);
  auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  auVar7 = vectorShiftLeftIntegerWord(auVar7,auVar7);
  auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
  auVar8 = loadVectorLeftIndexed(in_LR,0x156128);
  uVar5 = (ulonglong)DAT_00a15f64;
  auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar6 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  auVar8 = ZEXT416(8);
  auVar10 = loadVectorLeftIndexed(0x10,uVar5);
  auVar12 = loadVectorLeftIndexed(0x14,uVar5);
  auVar10 = vectorMultiplyAddFloatingPoint(auVar10,auVar6,auVar7);
  auVar7 = ZEXT416(0xffffffff);
  auVar11 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
  auVar12 = vectorMultiplyAddFloatingPoint(auVar12,auVar6,auVar9);
  auVar13 = loadVectorLeftIndexed(0x18,uVar5);
  auVar7 = ZEXT416(0xfffffff0);
  auVar9 = vectorShiftLeftIntegerWord(auVar11,auVar11);
  auVar9 = vectorMultiplyAddFloatingPoint(auVar13,auVar6,auVar9);
  auVar6 = loadVectorLeftIndexed(4,0x156128);
  auVar11 = vectorConvertToUnsignedFixedPointWordSaturate(auVar10,0);
  auVar6 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar12 = vectorConvertToUnsignedFixedPointWordSaturate(auVar12,0);
  auVar10 = loadVectorLeftIndexed(8,0x156128);
  auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar13 = loadVectorLeftIndexed(0xc,0x156128);
  auVar14 = loadVectorLeftIndexed(0x10,0x156128);
  auVar9 = vectorConvertToUnsignedFixedPointWordSaturate(auVar9,0);
  auVar11 = vectorRotateLeftIntegerWord
                      (auVar11,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60);
  auVar7 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar12 = vectorRotateLeftIntegerWord
                      (auVar12,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60);
  *DepthPass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  auVar6 = vectorConditionalSelect
                     (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar11,
                      auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60);
  auVar8 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar7 = vectorConditionalSelect
                     (auVar6,auVar12,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60);
  auVar8 = vectorConditionalSelect
                     (auVar7,auVar9,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60);
  auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar2 = storeVectorElementWordIndexed
                    (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,4,
                     ZEXT48(pRVar3->command));
  *(undefined4 *)((uint)(pRVar3->command + 1) & 0xfffffffc) = uVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar3->command[1] = 0xffffff00;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar3->command[1] = 0xf3;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = NV4097_NO_OPERATION_x1;
  pRVar3->command[1] = 0;
  pRVar3->command = pRVar3->command + 2;
  FastMtx4Identity((float *)&outMatrix);
  idol_draw::DrawSkyShell
            (Sky,0,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  if (Sky->sprite_cnt == 0) {
    SkyInitNightSprites(0x78,8);
  }
  SkyUpdateNightSprites();
  SkySpriteProc();
  uVar4 = idol_draw::PackCmd(0,1,0,1,0x80);
  SetGSReg(3,uVar4);
  idol_draw::DrawSkyShell
            (Sky,1,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  FastEulerToMtx2(&outMatrix,auStack_90);
  idol_draw::DrawSkyShell
            (Sky,2,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  return;
}


// 0x0156550 (0x2e8 bytes)
void SkyLevel_08(void)

{
  RsxCmd *pRVar1;
  RenderingStep *pRVar2;
  GPiece<40> auStack_a0;
  
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar2->command[1] = 0xff0d0d13;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar2->command[1] = 0xffffff00;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar2->command[1] = 0xf3;
  pRVar1 = pRVar2->command;
  pRVar2->command = pRVar1 + 2;
  pRVar1[2] = NV4097_NO_OPERATION_x1;
  pRVar2->command[1] = 0;
  pRVar2->command = pRVar2->command + 2;
  FastMtx4Identity((float *)&outMatrix);
  idol_draw::DrawSkyShell
            (Sky,0,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  FastEulerToMtx2(&outMatrix,auStack_a0);
  idol_draw::DrawSkyShell
            (Sky,1,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  FastMtx4Identity((float *)&outMatrix);
  idol_draw::DrawSkyShell
            (Sky,2,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  return;
}


// 0x0156840 (0x378 bytes)
void SkyLevel_09(void)

{
  RsxCmd *pRVar1;
  RenderingStep *pRVar2;
  GPiece<32> local_a0;
  
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar2->command[1] = 0xff000000;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar2->command[1] = 0xffffff00;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar2->command[1] = 0xf3;
  pRVar1 = pRVar2->command;
  pRVar2->command = pRVar1 + 2;
  pRVar1[2] = NV4097_NO_OPERATION_x1;
  pRVar2->command[1] = 0;
  pRVar2->command = pRVar2->command + 2;
  FastMtx4Identity((float *)&outMatrix);
  idol_draw::DrawSkyShell
            (Sky,0,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  idol_draw::DrawSkyShell
            (Sky,1,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  idol_draw::DrawSkyShell
            (Sky,2,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  FastEulerToMtx2(&outMatrix,local_a0);
  idol_draw::DrawSkyShell
            (Sky,3,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  FastMtx4Identity((float *)&outMatrix);
  idol_draw::DrawSkyShell
            (Sky,4,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  return;
}


// 0x0156bd8 (0x434 bytes)
void SkyLevel_10(void)

{
  longlong lVar1;
  short sVar2;
  RsxCmd *pRVar3;
  undefined4 uVar4;
  ulonglong *puVar5;
  RenderingStep *pRVar6;
  SKY *sky;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  ulonglong uVar22;
  ulonglong unaff_r28;
  longlong lVar23;
  ulonglong unaff_r29;
  longlong id;
  int iVar24;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  GPiece<16> auVar25;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar42;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar30;
  
  uVar22 = ZEXT48(&stack0x00000000);
  lVar1 = uVar22 - 0x140;
  puVar5 = (ulonglong *)lVar1;
  *puVar5 = uVar22;
  puVar5[0x2a] = in_LR;
  puVar21 = (undefined4 *)(uVar22 - 0x30);
  puVar21[3] = in_vr31_32_3;
  puVar21[2] = in_vr31_32_2;
  puVar21[1] = in_vr31_32_1;
  *puVar21 = in_vr31_32_0;
  puVar5[0x26] = unaff_r30;
  pRVar6 = DepthPass;
  puVar5[0x24] = unaff_r28;
  lVar23 = uVar22 - 0xc0;
  *pRVar6->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar6->command[1] = 0xff000000;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar6->command[1] = 0xffffff00;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar6->command[1] = 0xf3;
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 2;
  pRVar3[2] = NV4097_NO_OPERATION_x1;
  pRVar6->command[1] = 0;
  pRVar6->command = pRVar6->command + 2;
  *(undefined4 *)((int)puVar5 + 0x8c) = 0;
  *(undefined4 *)(puVar5 + 0x11) = 0;
  *(undefined4 *)((int)puVar5 + 0x84) = 0;
  *(undefined4 *)(puVar5 + 0x10) = 0;
  sVar2 = Sky->shell_cnt;
  puVar5[0x27] = unaff_r31;
  puVar5[0x25] = unaff_r29;
  if (sVar2 != 0) {
    auVar34 = ZEXT416(10);
    auVar33 = ZEXT416(0xfffffff0);
    auVar38 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    auVar33 = ZEXT416(5);
    auVar41 = vectorRotateLeftIntegerWord
                        (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,auVar38);
    auVar39 = vectorRotateLeftIntegerWord
                        (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,auVar38);
    auVar34 = loadVectorLeftIndexed(uVar22 - 0x30,0x156bb8);
    auVar33 = loadVectorLeftIndexed(4,0x156bb8);
    id = 0;
    auVar35 = loadVectorLeftIndexed(8,0x156bb8);
    auVar36 = loadVectorLeftIndexed(0xc,0x156bb8);
    auVar37 = loadVectorLeftIndexed(0x10,0x156bb8);
    auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar38 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    auVar34 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar33 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    auVar40 = loadVectorLeftIndexed(0x14,0x156bb8);
    auVar42 = loadVectorLeftIndexed(0x18,0x156bb8);
    auVar34 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar35 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    auVar34 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar36 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    auVar34 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar37 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    auVar34 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar40 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    auVar34 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    do {
      iVar24 = (int)id;
      if (iVar24 < 2) {
        if (iVar24 < 0) {
LAB_00156f04:
          FastMtx4Identity((float *)&outMatrix);
        }
        else if (iVar24 < 1) {
          auVar42 = ZEXT416(1);
          auVar31 = loadVectorLeftIndexed(0x710,0xa10000);
          auVar42 = vectorRotateLeftIntegerWord
                              (auVar31,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60
                              );
          auVar42 = vectorLogicalAnd(auVar42,auVar37);
          auVar42 = vectorConvertFromSignedFixedPointWord(auVar42,0);
          auVar42 = vectorNegativeMultiplySubtractFloatingPoint(auVar42,auVar33,auVar38);
          auVar42 = (auVar42 ^ auVar36) >> 0x60 & (GPiece<16>)0xffffffff;
          uVar4 = storeVectorElementWordIndexed
                            (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0x88,
                             lVar1);
          *(undefined4 *)(puVar5 + 0x11) = uVar4;
          FastEulerToMtx2(&outMatrix,lVar23);
        }
        else {
          auVar42 = ZEXT416(0);
          auVar31 = ZEXT416(5);
          auVar28 = ZEXT416(0xfffffff0);
          auVar32 = loadVectorLeftIndexed(0x710,0xa10000);
          auVar42 = vectorMultiplySumSignedHalfWordModulo
                              (auVar32,auVar39,
                               auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60);
          auVar31 = vectorMultiplyOddUnsignedHalfWord
                              (auVar32,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60
                              );
          auVar42 = vectorShiftLeftIntegerWord
                              (auVar42,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60
                              );
          auVar25.piece<0,4>() = auVar42.piece<0,4>() + auVar31.piece<0,4>();
          auVar25.piece<8,8>() = auVar42.piece<8,8>();
          auVar25.piece<4,4>() = auVar42.piece<4,4>() + auVar31.piece<4,4>();
          auVar26.piece<0,8>() = auVar25.piece<0,8>();
          auVar26.piece<12,4>() = auVar42.piece<12,4>();
          auVar26.piece<8,4>() = auVar42.piece<8,4>() + auVar31.piece<8,4>();
          auVar27.piece<0,12>() = auVar26.piece<0,12>();
          auVar27.piece<12,4>() = auVar26.piece<12,4>() + auVar31.piece<12,4>();
          auVar42 = vectorLogicalAnd(auVar27,auVar40);
          auVar42 = vectorConvertFromSignedFixedPointWord(auVar42,0);
          auVar42 = vectorNegativeMultiplySubtractFloatingPoint(auVar42,auVar33,auVar38);
          auVar42 = (auVar42 ^ auVar36) >> 0x60 & (GPiece<16>)0xffffffff;
          uVar4 = storeVectorElementWordIndexed
                            (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0x88,
                             lVar1);
          *(undefined4 *)(puVar5 + 0x11) = uVar4;
          FastEulerToMtx2(&outMatrix,lVar23);
        }
      }
      else if (iVar24 < 3) {
        auVar42 = ZEXT416(0);
        auVar31 = ZEXT416(10);
        auVar28 = ZEXT416(0xfffffff0);
        auVar32 = loadVectorLeftIndexed(0x710,0xa10000);
        auVar42 = vectorMultiplySumSignedHalfWordModulo
                            (auVar32,auVar41,
                             auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60);
        auVar32 = vectorMultiplyOddUnsignedHalfWord
                            (auVar32,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60);
        auVar42 = vectorShiftLeftIntegerWord
                            (auVar42,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60);
        auVar28.piece<0,4>() = auVar42.piece<0,4>() + auVar32.piece<0,4>();
        auVar28.piece<8,8>() = auVar42.piece<8,8>();
        auVar28.piece<4,4>() = auVar42.piece<4,4>() + auVar32.piece<4,4>();
        auVar31.piece<0,8>() = auVar28.piece<0,8>();
        auVar31.piece<12,4>() = auVar42.piece<12,4>();
        auVar31.piece<8,4>() = auVar42.piece<8,4>() + auVar32.piece<8,4>();
        auVar42.piece<0,12>() = auVar31.piece<0,12>();
        auVar42.piece<12,4>() = auVar31.piece<12,4>() + auVar32.piece<12,4>();
        auVar42 = vectorLogicalAnd(auVar42,auVar34);
        auVar42 = vectorConvertFromSignedFixedPointWord(auVar42,0);
        auVar42 = vectorNegativeMultiplySubtractFloatingPoint(auVar42,auVar35,auVar38);
        auVar42 = (auVar42 ^ auVar36) >> 0x60 & (GPiece<16>)0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0x88,lVar1)
        ;
        *(undefined4 *)(puVar5 + 0x11) = uVar4;
        FastEulerToMtx2(&outMatrix,lVar23);
      }
      else {
        if (3 < iVar24) goto LAB_00156f04;
        auVar42 = ZEXT416(0);
        auVar31 = ZEXT416(10);
        auVar28 = ZEXT416(0xfffffff0);
        auVar32 = loadVectorLeftIndexed(0x710,0xa10000);
        auVar42 = vectorMultiplySumSignedHalfWordModulo
                            (auVar32,auVar41,
                             auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60);
        auVar31 = vectorMultiplyOddUnsignedHalfWord
                            (auVar32,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60);
        auVar42 = vectorShiftLeftIntegerWord
                            (auVar42,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60);
        auVar32.piece<0,4>() = auVar42.piece<0,4>() + auVar31.piece<0,4>();
        auVar32.piece<8,8>() = auVar42.piece<8,8>();
        auVar32.piece<4,4>() = auVar42.piece<4,4>() + auVar31.piece<4,4>();
        auVar29.piece<0,8>() = auVar32.piece<0,8>();
        auVar29.piece<12,4>() = auVar42.piece<12,4>();
        auVar29.piece<8,4>() = auVar42.piece<8,4>() + auVar31.piece<8,4>();
        auVar30.piece<0,12>() = auVar29.piece<0,12>();
        auVar30.piece<12,4>() = auVar29.piece<12,4>() + auVar31.piece<12,4>();
        auVar42 = vectorLogicalAnd(auVar30,auVar40);
        auVar42 = vectorConvertFromSignedFixedPointWord(auVar42,0);
        auVar42 = vectorNegativeMultiplySubtractFloatingPoint(auVar42,auVar33,auVar38);
        auVar42 = (auVar42 ^ auVar36) >> 0x60 & (GPiece<16>)0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0x88,lVar1)
        ;
        *(undefined4 *)(puVar5 + 0x11) = uVar4;
        FastEulerToMtx2(&outMatrix,lVar23);
      }
      uVar20 = DAT_00a561bc;
      uVar19 = DAT_00a561b8;
      uVar18 = DAT_00a561b4;
      uVar17 = DAT_00a561b0;
      uVar16 = DAT_00a561ac;
      uVar15 = DAT_00a561a8;
      uVar14 = DAT_00a561a4;
      uVar13 = DAT_00a561a0;
      uVar12 = DAT_00a5619c;
      uVar11 = DAT_00a56198;
      uVar10 = DAT_00a56194;
      uVar9 = DAT_00a56190;
      uVar8 = DAT_00a56188;
      uVar7 = DAT_00a56184;
      uVar4 = outMatrix;
      sky = Sky;
      *(undefined4 *)((int)puVar5 + 0x4c) = DAT_00a5618c;
      *(undefined4 *)(puVar5 + 9) = uVar8;
      *(undefined4 *)((int)puVar5 + 0x44) = uVar7;
      *(undefined4 *)(puVar5 + 8) = uVar4;
      *(undefined4 *)((int)puVar5 + 0x5c) = uVar12;
      *(undefined4 *)(puVar5 + 0xb) = uVar11;
      *(undefined4 *)((int)puVar5 + 0x54) = uVar10;
      *(undefined4 *)(puVar5 + 10) = uVar9;
      *(undefined4 *)((int)puVar5 + 0x6c) = uVar16;
      *(undefined4 *)(puVar5 + 0xd) = uVar15;
      *(undefined4 *)((int)puVar5 + 100) = uVar14;
      *(undefined4 *)(puVar5 + 0xc) = uVar13;
      *(undefined4 *)((int)puVar5 + 0x7c) = uVar20;
      *(undefined4 *)(puVar5 + 0xf) = uVar19;
      *(undefined4 *)((int)puVar5 + 0x74) = uVar18;
      *(undefined4 *)(puVar5 + 0xe) = uVar17;
      idol_draw::DrawSkyShell
                (sky,id,puVar5[8],puVar5[9],puVar5[10],puVar5[0xb],puVar5[0xc],puVar5[0xd]);
      id = (longlong)(iVar24 + 1);
    } while (iVar24 + 1 < (int)(uint)(ushort)Sky->shell_cnt);
  }
  return;
}


// 0x0157030 (0x37c bytes)
void SkyLevel_11(void)

{
  longlong lVar1;
  short sVar2;
  RsxCmd *pRVar3;
  undefined4 uVar4;
  ulonglong *puVar5;
  RenderingStep *pRVar6;
  SKY *sky;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  ulonglong uVar22;
  ulonglong unaff_r28;
  longlong lVar23;
  ulonglong unaff_r29;
  longlong id;
  int iVar24;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar33;
  
  uVar22 = ZEXT48(&stack0x00000000);
  lVar1 = uVar22 - 0x130;
  puVar5 = (ulonglong *)lVar1;
  *puVar5 = uVar22;
  puVar5[0x28] = in_LR;
  puVar21 = (undefined4 *)(uVar22 - 0x30);
  puVar21[3] = in_vr31_32_3;
  puVar21[2] = in_vr31_32_2;
  puVar21[1] = in_vr31_32_1;
  *puVar21 = in_vr31_32_0;
  puVar5[0x24] = unaff_r30;
  pRVar6 = DepthPass;
  puVar5[0x22] = unaff_r28;
  lVar23 = uVar22 - 0xb0;
  *pRVar6->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar6->command[1] = 0xff000000;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar6->command[1] = 0xffffff00;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar6->command[1] = 0xf3;
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 2;
  pRVar3[2] = NV4097_NO_OPERATION_x1;
  pRVar6->command[1] = 0;
  pRVar6->command = pRVar6->command + 2;
  *(undefined4 *)((int)puVar5 + 0x8c) = 0;
  *(undefined4 *)(puVar5 + 0x11) = 0;
  *(undefined4 *)((int)puVar5 + 0x84) = 0;
  *(undefined4 *)(puVar5 + 0x10) = 0;
  sVar2 = Sky->shell_cnt;
  puVar5[0x25] = unaff_r31;
  puVar5[0x23] = unaff_r29;
  if (sVar2 != 0) {
    auVar27 = loadVectorLeftIndexed(uVar22 - 0x30,0x15700c);
    auVar26 = loadVectorLeftIndexed(4,0x15700c);
    auVar28 = loadVectorLeftIndexed(8,0x15700c);
    auVar29 = loadVectorLeftIndexed(0xc,0x15700c);
    auVar30 = loadVectorLeftIndexed(0x10,0x15700c);
    id = 0;
    auVar31 = loadVectorLeftIndexed(0x14,0x15700c);
    auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
    auVar32 = loadVectorLeftIndexed(0x18,0x15700c);
    auVar33 = loadVectorLeftIndexed(0x1c,0x15700c);
    do {
      iVar24 = (int)id;
      if (iVar24 < 2) {
        if (iVar24 < 1) {
LAB_001572ac:
          FastMtx4Identity((float *)&outMatrix);
        }
        else {
          auVar25 = loadVectorLeftIndexed(0x710,0xa10000);
          auVar25 = vectorLogicalAnd(auVar25,auVar31);
          auVar25 = vectorConvertFromSignedFixedPointWord(auVar25,0);
          auVar25 = vectorNegativeMultiplySubtractFloatingPoint(auVar25,auVar26,auVar27);
          auVar25 = (auVar25 ^ auVar30) >> 0x60 & (GPiece<16>)0xffffffff;
          uVar4 = storeVectorElementWordIndexed
                            (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x88,
                             lVar1);
          *(undefined4 *)(puVar5 + 0x11) = uVar4;
          FastEulerToMtx2(&outMatrix,lVar23);
        }
      }
      else if (iVar24 < 3) {
        auVar25 = loadVectorLeftIndexed(0x710,0xa10000);
        auVar25 = vectorLogicalAnd(auVar25,auVar32);
        auVar25 = vectorConvertFromSignedFixedPointWord(auVar25,0);
        auVar25 = vectorNegativeMultiplySubtractFloatingPoint(auVar25,auVar28,auVar27);
        auVar25 = (auVar25 ^ auVar30) >> 0x60 & (GPiece<16>)0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x88,lVar1)
        ;
        *(undefined4 *)(puVar5 + 0x11) = uVar4;
        FastEulerToMtx2(&outMatrix,lVar23);
      }
      else {
        if (3 < iVar24) goto LAB_001572ac;
        auVar25 = loadVectorLeftIndexed(0x710,0xa10000);
        auVar25 = vectorLogicalAnd(auVar25,auVar33);
        auVar25 = vectorConvertFromSignedFixedPointWord(auVar25,0);
        auVar25 = vectorNegativeMultiplySubtractFloatingPoint(auVar25,auVar29,auVar27);
        auVar25 = (auVar25 ^ auVar30) >> 0x60 & (GPiece<16>)0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x88,lVar1)
        ;
        *(undefined4 *)(puVar5 + 0x11) = uVar4;
        FastEulerToMtx2(&outMatrix,lVar23);
      }
      uVar20 = DAT_00a561bc;
      uVar19 = DAT_00a561b8;
      uVar18 = DAT_00a561b4;
      uVar17 = DAT_00a561b0;
      uVar16 = DAT_00a561ac;
      uVar15 = DAT_00a561a8;
      uVar14 = DAT_00a561a4;
      uVar13 = DAT_00a561a0;
      uVar12 = DAT_00a5619c;
      uVar11 = DAT_00a56198;
      uVar10 = DAT_00a56194;
      uVar9 = DAT_00a56190;
      uVar8 = DAT_00a56188;
      uVar7 = DAT_00a56184;
      uVar4 = outMatrix;
      sky = Sky;
      *(undefined4 *)((int)puVar5 + 0x4c) = DAT_00a5618c;
      *(undefined4 *)(puVar5 + 9) = uVar8;
      *(undefined4 *)((int)puVar5 + 0x44) = uVar7;
      *(undefined4 *)(puVar5 + 8) = uVar4;
      *(undefined4 *)((int)puVar5 + 0x5c) = uVar12;
      *(undefined4 *)(puVar5 + 0xb) = uVar11;
      *(undefined4 *)((int)puVar5 + 0x54) = uVar10;
      *(undefined4 *)(puVar5 + 10) = uVar9;
      *(undefined4 *)((int)puVar5 + 0x6c) = uVar16;
      *(undefined4 *)(puVar5 + 0xd) = uVar15;
      *(undefined4 *)((int)puVar5 + 100) = uVar14;
      *(undefined4 *)(puVar5 + 0xc) = uVar13;
      *(undefined4 *)((int)puVar5 + 0x7c) = uVar20;
      *(undefined4 *)(puVar5 + 0xf) = uVar19;
      *(undefined4 *)((int)puVar5 + 0x74) = uVar18;
      *(undefined4 *)(puVar5 + 0xe) = uVar17;
      idol_draw::DrawSkyShell
                (sky,id,puVar5[8],puVar5[9],puVar5[10],puVar5[0xb],puVar5[0xc],puVar5[0xd]);
      id = (longlong)(iVar24 + 1);
    } while (iVar24 + 1 < (int)(uint)(ushort)Sky->shell_cnt);
  }
  return;
}


// 0x01573d0 (0x37c bytes)
void SkyLevel_12(void)

{
  longlong lVar1;
  short sVar2;
  RsxCmd *pRVar3;
  undefined4 uVar4;
  ulonglong *puVar5;
  RenderingStep *pRVar6;
  SKY *sky;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  ulonglong uVar22;
  ulonglong unaff_r28;
  longlong lVar23;
  ulonglong unaff_r29;
  longlong id;
  int iVar24;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar33;
  
  uVar22 = ZEXT48(&stack0x00000000);
  lVar1 = uVar22 - 0x130;
  puVar5 = (ulonglong *)lVar1;
  *puVar5 = uVar22;
  puVar5[0x28] = in_LR;
  puVar21 = (undefined4 *)(uVar22 - 0x30);
  puVar21[3] = in_vr31_32_3;
  puVar21[2] = in_vr31_32_2;
  puVar21[1] = in_vr31_32_1;
  *puVar21 = in_vr31_32_0;
  puVar5[0x24] = unaff_r30;
  pRVar6 = DepthPass;
  puVar5[0x22] = unaff_r28;
  lVar23 = uVar22 - 0xb0;
  *pRVar6->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar6->command[1] = 0xff000000;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar6->command[1] = 0xffffff00;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar6->command[1] = 0xf3;
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 2;
  pRVar3[2] = NV4097_NO_OPERATION_x1;
  pRVar6->command[1] = 0;
  pRVar6->command = pRVar6->command + 2;
  *(undefined4 *)((int)puVar5 + 0x8c) = 0;
  *(undefined4 *)(puVar5 + 0x11) = 0;
  *(undefined4 *)((int)puVar5 + 0x84) = 0;
  *(undefined4 *)(puVar5 + 0x10) = 0;
  sVar2 = Sky->shell_cnt;
  puVar5[0x25] = unaff_r31;
  puVar5[0x23] = unaff_r29;
  if (sVar2 != 0) {
    auVar26 = loadVectorLeftIndexed(uVar22 - 0x30,0x1573ac);
    auVar25 = loadVectorLeftIndexed(4,0x1573ac);
    auVar28 = loadVectorLeftIndexed(8,0x1573ac);
    auVar29 = loadVectorLeftIndexed(0xc,0x1573ac);
    auVar30 = loadVectorLeftIndexed(0x10,0x1573ac);
    id = 0;
    auVar31 = loadVectorLeftIndexed(0x14,0x1573ac);
    auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar27 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar32 = loadVectorLeftIndexed(0x18,0x1573ac);
    auVar33 = loadVectorLeftIndexed(0x1c,0x1573ac);
    auVar26 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar25 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar26 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar28 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar26 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar29 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar26 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar30 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar26 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar31 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar26 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar32 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar26 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    do {
      iVar24 = (int)id;
      if (iVar24 < 2) {
        if (iVar24 < 1) {
LAB_0015764c:
          FastMtx4Identity((float *)&outMatrix);
        }
        else {
          auVar33 = loadVectorLeftIndexed(0x710,0xa10000);
          auVar33 = vectorLogicalAnd(auVar33,auVar31);
          auVar33 = vectorConvertFromSignedFixedPointWord(auVar33,0);
          auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar33,auVar25,auVar27);
          auVar33 = (auVar33 ^ auVar30) >> 0x60 & (GPiece<16>)0xffffffff;
          uVar4 = storeVectorElementWordIndexed
                            (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x88,
                             lVar1);
          *(undefined4 *)(puVar5 + 0x11) = uVar4;
          FastEulerToMtx2(&outMatrix,lVar23);
        }
      }
      else if (iVar24 < 3) {
        auVar33 = loadVectorLeftIndexed(0x710,0xa10000);
        auVar33 = vectorLogicalAnd(auVar33,auVar32);
        auVar33 = vectorConvertFromSignedFixedPointWord(auVar33,0);
        auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar33,auVar28,auVar27);
        auVar33 = (auVar33 ^ auVar30) >> 0x60 & (GPiece<16>)0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x88,lVar1)
        ;
        *(undefined4 *)(puVar5 + 0x11) = uVar4;
        FastEulerToMtx2(&outMatrix,lVar23);
      }
      else {
        if (3 < iVar24) goto LAB_0015764c;
        auVar33 = loadVectorLeftIndexed(0x710,0xa10000);
        auVar33 = vectorLogicalAnd(auVar33,auVar26);
        auVar33 = vectorConvertFromSignedFixedPointWord(auVar33,0);
        auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar33,auVar29,auVar27);
        auVar33 = (auVar33 ^ auVar30) >> 0x60 & (GPiece<16>)0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x88,lVar1)
        ;
        *(undefined4 *)(puVar5 + 0x11) = uVar4;
        FastEulerToMtx2(&outMatrix,lVar23);
      }
      uVar20 = DAT_00a561bc;
      uVar19 = DAT_00a561b8;
      uVar18 = DAT_00a561b4;
      uVar17 = DAT_00a561b0;
      uVar16 = DAT_00a561ac;
      uVar15 = DAT_00a561a8;
      uVar14 = DAT_00a561a4;
      uVar13 = DAT_00a561a0;
      uVar12 = DAT_00a5619c;
      uVar11 = DAT_00a56198;
      uVar10 = DAT_00a56194;
      uVar9 = DAT_00a56190;
      uVar8 = DAT_00a56188;
      uVar7 = DAT_00a56184;
      uVar4 = outMatrix;
      sky = Sky;
      *(undefined4 *)((int)puVar5 + 0x4c) = DAT_00a5618c;
      *(undefined4 *)(puVar5 + 9) = uVar8;
      *(undefined4 *)((int)puVar5 + 0x44) = uVar7;
      *(undefined4 *)(puVar5 + 8) = uVar4;
      *(undefined4 *)((int)puVar5 + 0x5c) = uVar12;
      *(undefined4 *)(puVar5 + 0xb) = uVar11;
      *(undefined4 *)((int)puVar5 + 0x54) = uVar10;
      *(undefined4 *)(puVar5 + 10) = uVar9;
      *(undefined4 *)((int)puVar5 + 0x6c) = uVar16;
      *(undefined4 *)(puVar5 + 0xd) = uVar15;
      *(undefined4 *)((int)puVar5 + 100) = uVar14;
      *(undefined4 *)(puVar5 + 0xc) = uVar13;
      *(undefined4 *)((int)puVar5 + 0x7c) = uVar20;
      *(undefined4 *)(puVar5 + 0xf) = uVar19;
      *(undefined4 *)((int)puVar5 + 0x74) = uVar18;
      *(undefined4 *)(puVar5 + 0xe) = uVar17;
      idol_draw::DrawSkyShell
                (sky,id,puVar5[8],puVar5[9],puVar5[10],puVar5[0xb],puVar5[0xc],puVar5[0xd]);
      id = (longlong)(iVar24 + 1);
    } while (iVar24 + 1 < (int)(uint)(ushort)Sky->shell_cnt);
  }
  return;
}


// 0x015774c (0x2d4 bytes)
void SkyLevel_13(void)

{
  RsxCmd *pRVar1;
  RenderingStep *pRVar2;
  undefined8 uVar3;
  
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar2->command[1] = 0xff000000;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar2->command[1] = 0xffffff00;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar2->command[1] = 0xf3;
  pRVar1 = pRVar2->command;
  pRVar2->command = pRVar1 + 2;
  pRVar1[2] = NV4097_NO_OPERATION_x1;
  pRVar2->command[1] = 0;
  pRVar2->command = pRVar2->command + 2;
  FastMtx4Identity((float *)&outMatrix);
  idol_draw::DrawSkyShell
            (Sky,0,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  idol_draw::DrawSkyShell
            (Sky,1,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  if (Sky->sprite_cnt == 0) {
    SkyInitNightSprites(0x78,8);
  }
  SkyUpdateNightSprites();
  SkySpriteProc();
  uVar3 = idol_draw::PackCmd(0,1,0,1,0x80);
  SetGSReg(3,uVar3);
  idol_draw::DrawSkyShell
            (Sky,2,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  return;
}


// 0x0157a30 (0x350 bytes)
void SkyLevel_14(void)

{
  RsxCmd *pRVar1;
  RenderingStep *pRVar2;
  GPiece<40> auStack_c0;
  
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar2->command[1] = 0xff000000;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar2->command[1] = 0xffffff00;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar2->command[1] = 0xf3;
  pRVar1 = pRVar2->command;
  pRVar2->command = pRVar1 + 2;
  pRVar1[2] = NV4097_NO_OPERATION_x1;
  pRVar2->command[1] = 0;
  pRVar2->command = pRVar2->command + 2;
  FastMtx4Identity((float *)&outMatrix);
  idol_draw::DrawSkyShell
            (Sky,0,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  FastEulerToMtx2(&outMatrix,auStack_c0);
  idol_draw::DrawSkyShell
            (Sky,1,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  FastEulerToMtx2(&outMatrix,auStack_c0);
  idol_draw::DrawSkyShell
            (Sky,2,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  return;
}


// 0x0157d98 (0x2fc bytes)
void SkyLevel_15(void)

{
  RsxCmd *pRVar1;
  undefined4 uVar2;
  RenderingStep *pRVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 in_LR;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  
  pRVar3 = DepthPass;
  auVar8 = ZEXT416(0xffffffff);
  auVar7 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  auVar8 = ZEXT416(0xffffffff);
  auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  auVar7 = vectorShiftLeftIntegerWord(auVar7,auVar7);
  auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
  auVar8 = loadVectorLeftIndexed(in_LR,0x157d80);
  uVar5 = (ulonglong)DAT_00a15f64;
  auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar6 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  auVar8 = ZEXT416(8);
  auVar10 = loadVectorLeftIndexed(0x10,uVar5);
  auVar12 = loadVectorLeftIndexed(0x14,uVar5);
  auVar10 = vectorMultiplyAddFloatingPoint(auVar10,auVar6,auVar7);
  auVar7 = ZEXT416(0xffffffff);
  auVar11 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
  auVar12 = vectorMultiplyAddFloatingPoint(auVar12,auVar6,auVar9);
  auVar13 = loadVectorLeftIndexed(0x18,uVar5);
  auVar7 = ZEXT416(0xfffffff0);
  auVar9 = vectorShiftLeftIntegerWord(auVar11,auVar11);
  auVar9 = vectorMultiplyAddFloatingPoint(auVar13,auVar6,auVar9);
  auVar6 = loadVectorLeftIndexed(4,0x157d80);
  auVar11 = vectorConvertToUnsignedFixedPointWordSaturate(auVar10,0);
  auVar6 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar12 = vectorConvertToUnsignedFixedPointWordSaturate(auVar12,0);
  auVar10 = loadVectorLeftIndexed(8,0x157d80);
  auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar13 = loadVectorLeftIndexed(0xc,0x157d80);
  auVar14 = loadVectorLeftIndexed(0x10,0x157d80);
  auVar9 = vectorConvertToUnsignedFixedPointWordSaturate(auVar9,0);
  auVar11 = vectorRotateLeftIntegerWord
                      (auVar11,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60);
  auVar7 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar12 = vectorRotateLeftIntegerWord
                      (auVar12,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60);
  *DepthPass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  auVar6 = vectorConditionalSelect
                     (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar11,
                      auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60);
  auVar8 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar7 = vectorConditionalSelect
                     (auVar6,auVar12,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60);
  auVar8 = vectorConditionalSelect
                     (auVar7,auVar9,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60);
  auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar2 = storeVectorElementWordIndexed
                    (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,4,
                     ZEXT48(pRVar3->command));
  *(undefined4 *)((uint)(pRVar3->command + 1) & 0xfffffffc) = uVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar3->command[1] = 0xffffff00;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar3->command[1] = 0xf3;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = NV4097_NO_OPERATION_x1;
  pRVar3->command[1] = 0;
  pRVar3->command = pRVar3->command + 2;
  FastMtx4Identity((float *)&outMatrix);
  idol_draw::DrawSkyShell
            (Sky,0,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  if (Sky->sprite_cnt == 0) {
    SkyInitNightSprites(0x78,8);
  }
  SkyUpdateNightSprites();
  SkySpriteProc();
  uVar4 = idol_draw::PackCmd(0,1,0,1,0x80);
  SetGSReg(3,uVar4);
  idol_draw::DrawSkyShell
            (Sky,1,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  return;
}


// 0x01580b8 (0x37c bytes)
void SkyLevel_16(void)

{
  longlong lVar1;
  short sVar2;
  RsxCmd *pRVar3;
  undefined4 uVar4;
  ulonglong *puVar5;
  RenderingStep *pRVar6;
  SKY *sky;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  ulonglong uVar22;
  ulonglong unaff_r28;
  longlong lVar23;
  ulonglong unaff_r29;
  longlong id;
  int iVar24;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar33;
  
  uVar22 = ZEXT48(&stack0x00000000);
  lVar1 = uVar22 - 0x130;
  puVar5 = (ulonglong *)lVar1;
  *puVar5 = uVar22;
  puVar5[0x28] = in_LR;
  puVar21 = (undefined4 *)(uVar22 - 0x30);
  puVar21[3] = in_vr31_32_3;
  puVar21[2] = in_vr31_32_2;
  puVar21[1] = in_vr31_32_1;
  *puVar21 = in_vr31_32_0;
  puVar5[0x24] = unaff_r30;
  pRVar6 = DepthPass;
  puVar5[0x22] = unaff_r28;
  lVar23 = uVar22 - 0xb0;
  *pRVar6->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar6->command[1] = 0xff000000;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar6->command[1] = 0xffffff00;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar6->command[1] = 0xf3;
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 2;
  pRVar3[2] = NV4097_NO_OPERATION_x1;
  pRVar6->command[1] = 0;
  pRVar6->command = pRVar6->command + 2;
  *(undefined4 *)((int)puVar5 + 0x8c) = 0;
  *(undefined4 *)(puVar5 + 0x11) = 0;
  *(undefined4 *)((int)puVar5 + 0x84) = 0;
  *(undefined4 *)(puVar5 + 0x10) = 0;
  sVar2 = Sky->shell_cnt;
  puVar5[0x25] = unaff_r31;
  puVar5[0x23] = unaff_r29;
  if (sVar2 != 0) {
    auVar26 = loadVectorLeftIndexed(uVar22 - 0x30,0x158094);
    auVar25 = loadVectorLeftIndexed(4,0x158094);
    auVar28 = loadVectorLeftIndexed(8,0x158094);
    auVar29 = loadVectorLeftIndexed(0xc,0x158094);
    auVar30 = loadVectorLeftIndexed(0x10,0x158094);
    id = 0;
    auVar31 = loadVectorLeftIndexed(0x14,0x158094);
    auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar27 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar32 = loadVectorLeftIndexed(0x18,0x158094);
    auVar33 = loadVectorLeftIndexed(0x1c,0x158094);
    auVar26 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar25 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar26 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar28 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar26 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar29 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar26 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar30 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar26 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar31 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar26 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar32 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar26 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    do {
      iVar24 = (int)id;
      if (iVar24 < 2) {
        if (iVar24 < 1) {
LAB_00158334:
          FastMtx4Identity((float *)&outMatrix);
        }
        else {
          auVar33 = loadVectorLeftIndexed(0x710,0xa10000);
          auVar33 = vectorLogicalAnd(auVar33,auVar31);
          auVar33 = vectorConvertFromSignedFixedPointWord(auVar33,0);
          auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar33,auVar25,auVar27);
          auVar33 = (auVar33 ^ auVar30) >> 0x60 & (GPiece<16>)0xffffffff;
          uVar4 = storeVectorElementWordIndexed
                            (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x88,
                             lVar1);
          *(undefined4 *)(puVar5 + 0x11) = uVar4;
          FastEulerToMtx2(&outMatrix,lVar23);
        }
      }
      else if (iVar24 < 3) {
        auVar33 = loadVectorLeftIndexed(0x710,0xa10000);
        auVar33 = vectorLogicalAnd(auVar33,auVar32);
        auVar33 = vectorConvertFromSignedFixedPointWord(auVar33,0);
        auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar33,auVar28,auVar27);
        auVar33 = (auVar33 ^ auVar30) >> 0x60 & (GPiece<16>)0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x88,lVar1)
        ;
        *(undefined4 *)(puVar5 + 0x11) = uVar4;
        FastEulerToMtx2(&outMatrix,lVar23);
      }
      else {
        if (3 < iVar24) goto LAB_00158334;
        auVar33 = loadVectorLeftIndexed(0x710,0xa10000);
        auVar33 = vectorLogicalAnd(auVar33,auVar26);
        auVar33 = vectorConvertFromSignedFixedPointWord(auVar33,0);
        auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar33,auVar29,auVar27);
        auVar33 = (auVar33 ^ auVar30) >> 0x60 & (GPiece<16>)0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x88,lVar1)
        ;
        *(undefined4 *)(puVar5 + 0x11) = uVar4;
        FastEulerToMtx2(&outMatrix,lVar23);
      }
      uVar20 = DAT_00a561bc;
      uVar19 = DAT_00a561b8;
      uVar18 = DAT_00a561b4;
      uVar17 = DAT_00a561b0;
      uVar16 = DAT_00a561ac;
      uVar15 = DAT_00a561a8;
      uVar14 = DAT_00a561a4;
      uVar13 = DAT_00a561a0;
      uVar12 = DAT_00a5619c;
      uVar11 = DAT_00a56198;
      uVar10 = DAT_00a56194;
      uVar9 = DAT_00a56190;
      uVar8 = DAT_00a56188;
      uVar7 = DAT_00a56184;
      uVar4 = outMatrix;
      sky = Sky;
      *(undefined4 *)((int)puVar5 + 0x4c) = DAT_00a5618c;
      *(undefined4 *)(puVar5 + 9) = uVar8;
      *(undefined4 *)((int)puVar5 + 0x44) = uVar7;
      *(undefined4 *)(puVar5 + 8) = uVar4;
      *(undefined4 *)((int)puVar5 + 0x5c) = uVar12;
      *(undefined4 *)(puVar5 + 0xb) = uVar11;
      *(undefined4 *)((int)puVar5 + 0x54) = uVar10;
      *(undefined4 *)(puVar5 + 10) = uVar9;
      *(undefined4 *)((int)puVar5 + 0x6c) = uVar16;
      *(undefined4 *)(puVar5 + 0xd) = uVar15;
      *(undefined4 *)((int)puVar5 + 100) = uVar14;
      *(undefined4 *)(puVar5 + 0xc) = uVar13;
      *(undefined4 *)((int)puVar5 + 0x7c) = uVar20;
      *(undefined4 *)(puVar5 + 0xf) = uVar19;
      *(undefined4 *)((int)puVar5 + 0x74) = uVar18;
      *(undefined4 *)(puVar5 + 0xe) = uVar17;
      idol_draw::DrawSkyShell
                (sky,id,puVar5[8],puVar5[9],puVar5[10],puVar5[0xb],puVar5[0xc],puVar5[0xd]);
      id = (longlong)(iVar24 + 1);
    } while (iVar24 + 1 < (int)(uint)(ushort)Sky->shell_cnt);
  }
  return;
}


// 0x0158460 (0x804 bytes)
void SkyLevel_17(void)

{
  float fVar1;
  ushort uVar2;
  RsxCmd *pRVar3;
  int iVar4;
  RenderingStep *pRVar5;
  int iVar9;
  undefined2 uVar12;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar10;
  int iVar11;
  undefined8 uVar8;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
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
  double dVar40;
  
  pRVar5 = DepthPass;
  iVar15 = 0;
  *DepthPass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar5->command[1] = 0xff000000;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar5->command[1] = 0xffffff00;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar5->command[1] = 0xf3;
  pRVar3 = pRVar5->command;
  pRVar5->command = pRVar3 + 2;
  pRVar3[2] = NV4097_NO_OPERATION_x1;
  pRVar5->command[1] = 0;
  pRVar5->command = pRVar5->command + 2;
  FastMtx4Identity((float *)&outMatrix);
  idol_draw::DrawSkyShell
            (Sky,0,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  pcVar14 = (char *)Sky->tex_defs;
  if (Sky->sprite_cnt == 0) {
    Sky->sprite_cnt = 0x100;
    iVar11 = 0;
    dVar32 = 0.00390625;
    dVar33 = 1.570796251296997;
    dVar34 = 3.141592502593994;
    dVar35 = -3.141592502593994;
    dVar36 = -0.16666656732559204;
    dVar37 = 0.008333025500178337;
    dVar38 = -0.0001980741071747616;
    dVar39 = 2.601886990305502e-06;
    dVar40 = 50.0;
    pcVar13 = pcVar14;
    do {
      if (iVar11 < 0xf0) {
        *pcVar13 = '\x01';
        uVar12 = MB_randInt(0x100);
        *(undefined2 *)(pcVar13 + 0xc) = uVar12;
        iVar9 = rand();
        pcVar13[2] = (byte)((uint)iVar9 >> 0x10) & 1;
        pcVar13[3] = 'H';
        dVar16 = (double)MB_randRot();
        *(float *)(pcVar13 + 8) = (float)dVar16;
        iVar9 = MB_randInt(0x30);
        dVar16 = (double)FastIntToDouble(iVar9 + 0x20);
        *(float *)(pcVar13 + 0x1c) = (float)(dVar16 * dVar32);
        dVar17 = (double)MB_randRot();
        dVar18 = (double)MB_randRot();
        dVar25 = (double)(float)(dVar17 + dVar33);
        dVar31 = (double)(float)(dVar18 + dVar33);
        dVar16 = (double)(float)(dVar34 - dVar18);
        if (dVar18 - (double)(float)(dVar34 - dVar18) < 0.0) {
          dVar16 = dVar18;
        }
        dVar19 = (double)(float)(dVar34 - dVar17);
        if (dVar17 - (double)(float)(dVar34 - dVar17) < 0.0) {
          dVar19 = dVar17;
        }
        dVar22 = (double)(float)(dVar34 - dVar25);
        if (dVar25 - (double)(float)(dVar34 - dVar25) < 0.0) {
          dVar22 = dVar25;
        }
        dVar21 = (double)(float)(dVar34 - dVar31);
        if (dVar31 - (double)(float)(dVar34 - dVar31) < 0.0) {
          dVar21 = dVar31;
        }
        dVar23 = (double)(float)(dVar35 - dVar18);
        if ((double)(float)(dVar35 - dVar18) - dVar16 < 0.0) {
          dVar23 = dVar16;
        }
        dVar16 = (double)(float)(dVar35 - dVar17);
        if ((double)(float)(dVar35 - dVar17) - dVar19 < 0.0) {
          dVar16 = dVar19;
        }
        dVar17 = (double)(float)(dVar35 - dVar25);
        if ((double)(float)(dVar35 - dVar25) - dVar22 < 0.0) {
          dVar17 = dVar22;
        }
        dVar25 = (double)(float)(dVar23 * dVar23);
        dVar19 = (double)(float)(dVar16 * dVar16);
        dVar18 = (double)(float)(dVar35 - dVar31);
        if ((double)(float)(dVar35 - dVar31) - dVar21 < 0.0) {
          dVar18 = dVar21;
        }
        dVar31 = (double)(float)(dVar17 * dVar17);
        dVar20 = (double)(float)(dVar18 * dVar18);
        dVar27 = (double)(float)(dVar25 * (double)(float)(dVar25 * dVar23));
        dVar22 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar16));
        dVar29 = (double)(float)(dVar31 * (double)(float)(dVar31 * dVar17));
        dVar24 = (double)(float)(dVar25 * dVar27);
        dVar28 = (double)(float)(dVar19 * dVar22);
        dVar21 = (double)(float)(dVar31 * dVar29);
        dVar26 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar18));
        fVar1 = (float)((double)(float)(dVar25 * dVar24) * dVar39 +
                       (double)(float)(dVar24 * dVar38 +
                                      (double)(float)(dVar27 * dVar37 +
                                                     (double)(float)((double)(float)(dVar25 * dVar23
                                                                                    ) * dVar36 +
                                                                    dVar23))));
        dVar25 = (double)(float)(dVar20 * dVar26);
        *(float *)(pcVar13 + 0x14) =
             (float)((double)((float)((double)(float)(dVar19 * dVar28) * dVar39 +
                                     (double)(float)(dVar28 * dVar38 +
                                                    (double)(float)(dVar22 * dVar37 +
                                                                   (double)(float)((double)(float)(
                                                  dVar19 * dVar16) * dVar36 + dVar16)))) * fVar1) *
                    dVar40);
        *(float *)(pcVar13 + 0x10) =
             (float)((double)((float)((double)(float)(dVar31 * dVar21) * dVar39 +
                                     (double)(float)(dVar21 * dVar38 +
                                                    (double)(float)(dVar29 * dVar37 +
                                                                   (double)(float)((double)(float)(
                                                  dVar31 * dVar17) * dVar36 + dVar17)))) * fVar1) *
                    dVar40);
        *(float *)(pcVar13 + 0x18) =
             (float)((double)(float)((double)(float)(dVar20 * dVar25) * dVar39 +
                                    (double)(float)(dVar25 * dVar38 +
                                                   (double)(float)(dVar26 * dVar37 +
                                                                  (double)(float)((double)(float)(
                                                  dVar20 * dVar18) * dVar36 + dVar18)))) * dVar40);
        uVar6 = MB_randInt(0x18);
        uVar7 = MB_randInt(0x20);
        uVar10 = rand();
        iVar4 = (int)((uVar7 & 0xff) << 0x18);
        iVar9 = iVar4 + (int)((uVar6 & 0xffffffff) << 0x10) + 0x30585050;
        *(uint *)(pcVar13 + 0xc) =
             iVar9 + ((uint)(ZERO_MASK((uVar10 & 0x10000))) &
                     (iVar4 + (int)((uVar6 & 0xffffffff) << 8) + 0x30505850U | (int)uVar6 + 8U) -
                     iVar9);
      }
      else {
        *pcVar13 = '\0';
        iVar9 = rand();
        *(short *)(pcVar13 + 0xc) = (short)((uint)iVar9 >> 0x10);
        iVar9 = rand();
        *(short *)(pcVar13 + 0xe) = (short)((uint)iVar9 >> 0x10);
        pcVar13[2] = '\x01';
        pcVar13[3] = 'H';
        pcVar13[0x1c] = '>';
        pcVar13[0x1d] = '8';
        pcVar13[0x1e] = 'Q';
        pcVar13[0x1f] = -0x14;
        iVar9 = rand();
        *(undefined4 *)(pcVar13 + 4) = *(undefined4 *)(&DAT_00731aec + (iVar9 >> 0x10 & 3U) * 4);
      }
      iVar11 = iVar11 + 1;
      pcVar13 = pcVar13 + 0x20;
    } while (iVar11 < (int)(uint)(ushort)Sky->sprite_cnt);
  }
  if (Sky->sprite_cnt != 0) {
    dVar32 = 0.0015339808305725455;
    dVar33 = 1.570796251296997;
    dVar34 = 3.141592502593994;
    dVar35 = -3.141592502593994;
    dVar36 = -0.16666656732559204;
    dVar37 = 0.008333025500178337;
    dVar38 = -0.0001980741071747616;
    dVar39 = 2.601886990305502e-06;
    dVar40 = 50.0;
    do {
      if (*pcVar14 == '\0') {
        uVar2 = *(ushort *)(pcVar14 + 0xc);
        *(short *)(pcVar14 + 0xc) = (short)((ulonglong)uVar2 + 1);
        *(short *)(pcVar14 + 0xe) = *(short *)(pcVar14 + 0xe) + 1;
        dVar16 = (double)FastIntToDouble(((ulonglong)uVar2 + 1 & 0xfff) - 0x800);
        dVar31 = (double)(float)(dVar16 * dVar32);
        dVar16 = (double)FastIntToDouble
                                   (((ulonglong)*(ushort *)(pcVar14 + 0xe) & 0xfff) - 0x800);
        dVar18 = (double)(float)(dVar31 + dVar33);
        dVar17 = (double)(float)(dVar16 * dVar32);
        dVar25 = (double)(float)(dVar17 + dVar33);
        dVar16 = (double)(float)(dVar34 - dVar31);
        if (dVar31 - (double)(float)(dVar34 - dVar31) < 0.0) {
          dVar16 = dVar31;
        }
        dVar19 = (double)(float)(dVar34 - dVar18);
        if (dVar18 - (double)(float)(dVar34 - dVar18) < 0.0) {
          dVar19 = dVar18;
        }
        dVar22 = (double)(float)(dVar34 - dVar17);
        if (dVar17 - (double)(float)(dVar34 - dVar17) < 0.0) {
          dVar22 = dVar17;
        }
        uVar10 = *(uint *)(pcVar14 + 4) & 0xffffff | 0x24000000;
        dVar21 = (double)(float)(dVar35 - dVar31);
        if ((double)(float)(dVar35 - dVar31) - dVar16 < 0.0) {
          dVar21 = dVar16;
        }
        dVar16 = (double)(float)(dVar34 - dVar25);
        if (dVar25 - (double)(float)(dVar34 - dVar25) < 0.0) {
          dVar16 = dVar25;
        }
        dVar31 = (double)(float)(dVar35 - dVar18);
        if ((double)(float)(dVar35 - dVar18) - dVar19 < 0.0) {
          dVar31 = dVar19;
        }
        dVar18 = (double)(float)(dVar35 - dVar17);
        if ((double)(float)(dVar35 - dVar17) - dVar22 < 0.0) {
          dVar18 = dVar22;
        }
        dVar19 = (double)(float)(dVar21 * dVar21);
        iVar11 = uVar10 + ((uint)((longlong)(((ulonglong)*(ushort *)(pcVar14 + 0xc) & 0x3f) - 8) >>
                                 0x3f) & (*(uint *)(pcVar14 + 4) & 0xffffff | 0x70000000) - uVar10);
        dVar22 = (double)(float)(dVar31 * dVar31);
        dVar23 = (double)(float)(dVar18 * dVar18);
        dVar17 = (double)(float)(dVar35 - dVar25);
        if ((double)(float)(dVar35 - dVar25) - dVar16 < 0.0) {
          dVar17 = dVar16;
        }
        dVar28 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar21));
        dVar30 = (double)(float)(dVar17 * dVar17);
        dVar26 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar31));
        dVar16 = (double)(float)(dVar23 * (double)(float)(dVar23 * dVar18));
        dVar20 = (double)(float)(dVar19 * dVar28);
        dVar29 = (double)(float)(dVar22 * dVar26);
        dVar27 = (double)(float)(dVar23 * dVar16);
        dVar25 = (double)(float)(dVar30 * (double)(float)(dVar30 * dVar17));
        dVar24 = (double)(float)(dVar30 * dVar25);
        fVar1 = (float)((double)(float)(dVar23 * dVar27) * dVar39 +
                       (double)(float)(dVar27 * dVar38 +
                                      (double)(float)(dVar16 * dVar37 +
                                                     (double)(float)((double)(float)(dVar23 * dVar18
                                                                                    ) * dVar36 +
                                                                    dVar18))));
        *(float *)(pcVar14 + 0x10) =
             (float)((double)((float)((double)(float)(dVar22 * dVar29) * dVar39 +
                                     (double)(float)(dVar29 * dVar38 +
                                                    (double)(float)(dVar26 * dVar37 +
                                                                   (double)(float)((double)(float)(
                                                  dVar22 * dVar31) * dVar36 + dVar31)))) * fVar1) *
                    dVar40);
        *(float *)(pcVar14 + 0x14) =
             (float)((double)((float)((double)(float)(dVar19 * dVar20) * dVar39 +
                                     (double)(float)(dVar20 * dVar38 +
                                                    (double)(float)(dVar28 * dVar37 +
                                                                   (double)(float)((double)(float)(
                                                  dVar19 * dVar21) * dVar36 + dVar21)))) * fVar1) *
                    dVar40);
        *(float *)(pcVar14 + 0x18) =
             (float)((double)(float)((double)(float)(dVar30 * dVar24) * dVar39 +
                                    (double)(float)(dVar24 * dVar38 +
                                                   (double)(float)(dVar25 * dVar37 +
                                                                  (double)(float)((double)(float)(
                                                  dVar30 * dVar17) * dVar36 + dVar17)))) * dVar40);
      }
      else {
        iVar11 = rand();
        uVar10 = iVar11 >> 0x10;
        iVar11 = *(int *)(pcVar14 + 0xc) + (uVar10 & 0x1f00) * 0x400 + (uVar10 & 0x1f0) * 0x40 +
                 (uVar10 & 0x1f) * 4 + -0x202020;
      }
      *(int *)(pcVar14 + 4) = iVar11;
      iVar15 = iVar15 + 1;
      pcVar14 = pcVar14 + 0x20;
    } while (iVar15 < (int)(uint)(ushort)Sky->sprite_cnt);
  }
  SkySpriteProc();
  uVar8 = idol_draw::PackCmd(0,1,0,1,0x80);
  SetGSReg(3,uVar8);
  idol_draw::DrawSkyShell
            (Sky,1,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  idol_draw::DrawSkyShell
            (Sky,2,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  return;
}


// 0x0158c70 (0x470 bytes)
void SkyLevel_18(void)

{
  RsxCmd *pRVar1;
  RenderingStep *pRVar2;
  GPiece<32> auStack_b0;
  
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar2->command[1] = 0xff000000;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar2->command[1] = 0xffffff00;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar2->command[1] = 0xf3;
  pRVar1 = pRVar2->command;
  pRVar2->command = pRVar1 + 2;
  pRVar1[2] = NV4097_NO_OPERATION_x1;
  pRVar2->command[1] = 0;
  pRVar2->command = pRVar2->command + 2;
  idol_draw::DrawSkyShell
            (Sky,0,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  idol_draw::DrawSkyShell
            (Sky,1,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  idol_draw::DrawSkyShell
            (Sky,2,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  idol_draw::DrawSkyShell
            (Sky,3,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  FastEulerToMtx2(&outMatrix,auStack_b0);
  idol_draw::DrawSkyShell
            (Sky,4,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  FastEulerToMtx2(&outMatrix,auStack_b0);
  idol_draw::DrawSkyShell
            (Sky,5,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  FastMtx4Identity((float *)&outMatrix);
  idol_draw::DrawSkyShell
            (Sky,6,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  return;
}


// 0x0159118 (0x47c bytes)
// strings: 001590e8: '?333_q@' (raw)

void SkyLevel_19(void)

{
  RsxCmd *pRVar1;
  int iVar2;
  RenderingStep *pRVar3;
  ulonglong id;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  GPiece<40> local_a0;
  
  pRVar3 = DepthPass;
  *DepthPass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar3->command[1] = 0xff000000;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar3->command[1] = 0xffffff00;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar3->command[1] = 0xf3;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = NV4097_NO_OPERATION_x1;
  pRVar3->command[1] = 0;
  pRVar3->command = pRVar3->command + 2;
  FastMtx4Identity(&outMatrix);
  if (Sky->shell_cnt != 0) {
    dVar6 = 0.550000011920929;
    dVar7 = 0.6000000238418579;
    dVar8 = 0.699999988079071;
    id = 0;
    dVar9 = 0.75;
    dVar10 = 0.800000011920929;
    do {
      dVar5 = 1.0;
      iVar4 = (int)id;
      iVar2 = *(int *)((int)Sky->shells + (int)((id & 0xffffffff) << 2));
      if (iVar4 == 5) {
        dVar5 = 1.25;
        *(float *)(iVar2 + 8) =
             (float)((double)DAT_00a56160 * dVar10 + (double)*(float *)(iVar2 + 8));
      }
      else if (iVar4 == 4) {
        dVar5 = 1.5;
        *(float *)(iVar2 + 8) =
             (float)((double)DAT_00a56160 * dVar9 + (double)*(float *)(iVar2 + 8));
      }
      else if (iVar4 == 3) {
        dVar5 = 2.0;
        *(float *)(iVar2 + 8) =
             (float)((double)DAT_00a56160 * dVar8 + (double)*(float *)(iVar2 + 8));
      }
      else if (iVar4 == 2) {
        dVar5 = 2.5;
        *(float *)(iVar2 + 8) =
             (float)((double)DAT_00a56160 * dVar7 + (double)*(float *)(iVar2 + 8));
      }
      else if (iVar4 == 1) {
        dVar5 = 3.0;
        *(float *)(iVar2 + 8) =
             (float)((double)DAT_00a56160 * dVar6 + (double)*(float *)(iVar2 + 8));
      }
      else {
        FastMtx4Identity(&outMatrix);
      }
      if (0 < iVar4) {
        FastEulerToMtx2(&outMatrix,local_a0);
        DAT_00a56184 = (float)((double)DAT_00a56184 * dVar5);
        DAT_00a56188 = (float)((double)DAT_00a56188 * dVar5);
        DAT_00a5618c = (float)((double)DAT_00a5618c * dVar5);
        outMatrix = (float)((double)outMatrix * dVar5);
        DAT_00a56190 = (float)((double)DAT_00a56190 * dVar5);
        DAT_00a56194 = (float)((double)DAT_00a56194 * dVar5);
        DAT_00a56198 = (float)((double)DAT_00a56198 * dVar5);
        DAT_00a5619c = (float)((double)DAT_00a5619c * dVar5);
        DAT_00a561a0 = (float)((double)DAT_00a561a0 * dVar5);
        DAT_00a561a4 = (float)((double)DAT_00a561a4 * dVar5);
        DAT_00a561a8 = (float)((double)DAT_00a561a8 * dVar5);
        DAT_00a561ac = (float)((double)DAT_00a561ac * dVar5);
        DAT_00a561b0 = DAT_00a56150;
        DAT_00a561b4 = DAT_00a56154;
        DAT_00a561b8 = DAT_00a56158;
        DAT_00a561bc = DAT_00a5615c;
      }
      idol_draw::DrawSkyShell
                (Sky,id,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
                 CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
                 CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
      id = (ulonglong)(iVar4 + 1);
    } while (iVar4 + 1 < (int)(uint)(ushort)Sky->shell_cnt);
  }
  return;
}


// 0x01595d0 (0x884 bytes)
void SkyLevelGeneric(void)

{
  float fVar1;
  ushort uVar2;
  RsxCmd *pRVar3;
  int iVar4;
  RenderingStep *pRVar5;
  int iVar9;
  undefined2 uVar12;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar10;
  int iVar11;
  undefined8 uVar8;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
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
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  
  pRVar5 = DepthPass;
  iVar15 = 0;
  *DepthPass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar5->command[1] = 0xff000000;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar5->command[1] = 0xffffff00;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar5->command[1] = 0xf3;
  pRVar3 = pRVar5->command;
  pRVar5->command = pRVar3 + 2;
  pRVar3[2] = NV4097_NO_OPERATION_x1;
  pRVar5->command[1] = 0;
  pRVar5->command = pRVar5->command + 2;
  FastMtx4Identity((float *)&outMatrix);
  idol_draw::DrawSkyShell
            (Sky,0,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  idol_draw::DrawSkyShell
            (Sky,1,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  pcVar14 = (char *)Sky->tex_defs;
  if (Sky->sprite_cnt == 0) {
    Sky->sprite_cnt = 0x100;
    seedRand(0x3039);
    if (Sky->sprite_cnt != 0) {
      iVar11 = 0;
      dVar31 = 0.00390625;
      dVar32 = -3.0;
      dVar33 = 0.20000000298023224;
      dVar34 = 0.09000000357627869;
      dVar36 = 1.2000000476837158;
      dVar37 = 1.570796251296997;
      dVar38 = 3.141592502593994;
      dVar39 = -3.141592502593994;
      dVar40 = -0.16666656732559204;
      dVar41 = 0.008333025500178337;
      dVar42 = -0.0001980741071747616;
      dVar43 = 2.601886990305502e-06;
      dVar44 = 50.0;
      pcVar13 = pcVar14;
      do {
        if (iVar11 < 0xf6) {
          *pcVar13 = '\x01';
          uVar12 = MB_randInt(0x100);
          *(undefined2 *)(pcVar13 + 0xc) = uVar12;
          pcVar13[2] = '\x01';
          pcVar13[3] = 'H';
          dVar35 = (double)MB_randRot();
          *(float *)(pcVar13 + 8) = (float)dVar35;
          iVar9 = MB_randInt(0x18);
          dVar35 = (double)FastIntToDouble(iVar9 + 0x20);
          *(float *)(pcVar13 + 0x1c) = (float)(dVar35 * dVar31);
          dVar35 = (double)MB_randRot();
          dVar20 = (double)FastWrapRot((float)dVar32,(float)(dVar35 * dVar33));
          dVar35 = (double)MB_randRot();
          dVar16 = (double)(float)(dVar20 + dVar37);
          dVar21 = (double)(float)(dVar35 * dVar34 + dVar36);
          dVar22 = (double)(float)(dVar21 + dVar37);
          dVar35 = (double)(float)(dVar38 - dVar20);
          if (dVar20 - (double)(float)(dVar38 - dVar20) < 0.0) {
            dVar35 = dVar20;
          }
          dVar17 = (double)(float)(dVar38 - dVar16);
          if (dVar16 - (double)(float)(dVar38 - dVar16) < 0.0) {
            dVar17 = dVar16;
          }
          dVar18 = (double)(float)(dVar38 - dVar21);
          if (dVar21 - (double)(float)(dVar38 - dVar21) < 0.0) {
            dVar18 = dVar21;
          }
          dVar19 = (double)(float)(dVar39 - dVar20);
          if ((double)(float)(dVar39 - dVar20) - dVar35 < 0.0) {
            dVar19 = dVar35;
          }
          dVar35 = (double)(float)(dVar38 - dVar22);
          if (dVar22 - (double)(float)(dVar38 - dVar22) < 0.0) {
            dVar35 = dVar22;
          }
          dVar20 = (double)(float)(dVar39 - dVar16);
          if ((double)(float)(dVar39 - dVar16) - dVar17 < 0.0) {
            dVar20 = dVar17;
          }
          dVar16 = (double)(float)(dVar39 - dVar21);
          if ((double)(float)(dVar39 - dVar21) - dVar18 < 0.0) {
            dVar16 = dVar18;
          }
          dVar17 = (double)(float)(dVar19 * dVar19);
          dVar18 = (double)(float)(dVar20 * dVar20);
          dVar26 = (double)(float)(dVar16 * dVar16);
          dVar21 = (double)(float)(dVar39 - dVar22);
          if ((double)(float)(dVar39 - dVar22) - dVar35 < 0.0) {
            dVar21 = dVar35;
          }
          dVar24 = (double)(float)(dVar17 * (double)(float)(dVar17 * dVar19));
          dVar27 = (double)(float)(dVar21 * dVar21);
          dVar30 = (double)(float)(dVar18 * (double)(float)(dVar18 * dVar20));
          dVar35 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar16));
          dVar28 = (double)(float)(dVar17 * dVar24);
          dVar25 = (double)(float)(dVar18 * dVar30);
          dVar23 = (double)(float)(dVar26 * dVar35);
          dVar22 = (double)(float)(dVar27 * (double)(float)(dVar27 * dVar21));
          dVar29 = (double)(float)(dVar27 * dVar22);
          fVar1 = (float)((double)(float)(dVar26 * dVar23) * dVar43 +
                         (double)(float)(dVar23 * dVar42 +
                                        (double)(float)(dVar35 * dVar41 +
                                                       (double)(float)((double)(float)(dVar26 * 
                                                  dVar16) * dVar40 + dVar16))));
          *(float *)(pcVar13 + 0x10) =
               (float)((double)((float)((double)(float)(dVar18 * dVar25) * dVar43 +
                                       (double)(float)(dVar25 * dVar42 +
                                                      (double)(float)(dVar30 * dVar41 +
                                                                     (double)(float)((double)(float)
                                                  (dVar18 * dVar20) * dVar40 + dVar20)))) * fVar1) *
                      dVar44);
          *(float *)(pcVar13 + 0x14) =
               (float)((double)((float)((double)(float)(dVar17 * dVar28) * dVar43 +
                                       (double)(float)(dVar28 * dVar42 +
                                                      (double)(float)(dVar24 * dVar41 +
                                                                     (double)(float)((double)(float)
                                                  (dVar17 * dVar19) * dVar40 + dVar19)))) * fVar1) *
                      dVar44);
          *(float *)(pcVar13 + 0x18) =
               (float)((double)(float)((double)(float)(dVar27 * dVar29) * dVar43 +
                                      (double)(float)(dVar29 * dVar42 +
                                                     (double)(float)(dVar22 * dVar41 +
                                                                    (double)(float)((double)(float)(
                                                  dVar27 * dVar21) * dVar40 + dVar21)))) * dVar44);
          uVar6 = MB_randInt(0x18);
          uVar7 = MB_randInt(0x20);
          uVar10 = rand();
          iVar4 = (int)((uVar7 & 0xff) << 0x18);
          iVar9 = iVar4 + (int)((uVar6 & 0xffffffff) << 0x10) + 0x30505050;
          *(uint *)(pcVar13 + 0xc) =
               iVar9 + ((uint)(ZERO_MASK((uVar10 & 0x10000))) &
                       (iVar4 + (int)((uVar6 & 0xffffffff) << 8) + 0x30505050U | (uint)uVar6) -
                       iVar9);
        }
        else {
          *pcVar13 = '\0';
          iVar9 = rand();
          *(short *)(pcVar13 + 0xc) = (short)((uint)iVar9 >> 0x10);
          iVar9 = rand();
          *(short *)(pcVar13 + 0xe) = (short)((uint)iVar9 >> 0x10);
          pcVar13[2] = '\x01';
          pcVar13[3] = 'H';
          pcVar13[0x1c] = '>';
          pcVar13[0x1d] = '#';
          pcVar13[0x1e] = -0x29;
          pcVar13[0x1f] = '\n';
        }
        iVar11 = iVar11 + 1;
        pcVar13 = pcVar13 + 0x20;
      } while (iVar11 < (int)(uint)(ushort)Sky->sprite_cnt);
    }
  }
  if (Sky->sprite_cnt != 0) {
    dVar31 = 0.0015339808305725455;
    dVar32 = 1.570796251296997;
    dVar33 = 3.141592502593994;
    dVar34 = -3.141592502593994;
    dVar36 = -0.16666656732559204;
    dVar37 = 0.008333025500178337;
    dVar38 = -0.0001980741071747616;
    dVar39 = 2.601886990305502e-06;
    dVar40 = 50.0;
    do {
      if (*pcVar14 == '\0') {
        uVar2 = *(ushort *)(pcVar14 + 0xc);
        *(short *)(pcVar14 + 0xc) = (short)((ulonglong)uVar2 + 1);
        *(short *)(pcVar14 + 0xe) = *(short *)(pcVar14 + 0xe) + 1;
        dVar41 = (double)FastIntToDouble(((ulonglong)uVar2 + 1 & 0xfff) - 0x800);
        dVar35 = (double)(float)(dVar41 * dVar31);
        dVar41 = (double)FastIntToDouble
                                   (((ulonglong)*(ushort *)(pcVar14 + 0xe) & 0xfff) - 0x800);
        dVar43 = (double)(float)(dVar35 + dVar32);
        dVar42 = (double)(float)(dVar41 * dVar31);
        dVar44 = (double)(float)(dVar42 + dVar32);
        dVar41 = (double)(float)(dVar33 - dVar35);
        if (dVar35 - (double)(float)(dVar33 - dVar35) < 0.0) {
          dVar41 = dVar35;
        }
        dVar20 = (double)(float)(dVar33 - dVar43);
        if (dVar43 - (double)(float)(dVar33 - dVar43) < 0.0) {
          dVar20 = dVar43;
        }
        dVar21 = (double)(float)(dVar33 - dVar42);
        if (dVar42 - (double)(float)(dVar33 - dVar42) < 0.0) {
          dVar21 = dVar42;
        }
        dVar16 = (double)(float)(dVar33 - dVar44);
        if (dVar44 - (double)(float)(dVar33 - dVar44) < 0.0) {
          dVar16 = dVar44;
        }
        dVar22 = (double)(float)(dVar34 - dVar35);
        if ((double)(float)(dVar34 - dVar35) - dVar41 < 0.0) {
          dVar22 = dVar41;
        }
        dVar41 = (double)(float)(dVar34 - dVar43);
        if ((double)(float)(dVar34 - dVar43) - dVar20 < 0.0) {
          dVar41 = dVar20;
        }
        dVar43 = (double)(float)(dVar34 - dVar42);
        if ((double)(float)(dVar34 - dVar42) - dVar21 < 0.0) {
          dVar43 = dVar21;
        }
        dVar35 = (double)(float)(dVar22 * dVar22);
        iVar11 = ((uint)((longlong)(((ulonglong)*(ushort *)(pcVar14 + 0xc) & 0x3f) - 8) >> 0x3f) &
                 0x50000000) + 0x202020f0;
        dVar20 = (double)(float)(dVar41 * dVar41);
        dVar21 = (double)(float)(dVar43 * dVar43);
        dVar42 = (double)(float)(dVar34 - dVar44);
        if ((double)(float)(dVar34 - dVar44) - dVar16 < 0.0) {
          dVar42 = dVar16;
        }
        dVar26 = (double)(float)(dVar42 * dVar42);
        dVar28 = (double)(float)(dVar35 * (double)(float)(dVar35 * dVar22));
        dVar44 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar41));
        dVar18 = (double)(float)(dVar21 * (double)(float)(dVar21 * dVar43));
        dVar30 = (double)(float)(dVar35 * dVar28);
        dVar29 = (double)(float)(dVar20 * dVar44);
        dVar16 = (double)(float)(dVar21 * dVar18);
        dVar19 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar42));
        dVar17 = (double)(float)(dVar26 * dVar19);
        fVar1 = (float)((double)(float)(dVar21 * dVar16) * dVar39 +
                       (double)(float)(dVar16 * dVar38 +
                                      (double)(float)(dVar18 * dVar37 +
                                                     (double)(float)((double)(float)(dVar21 * dVar43
                                                                                    ) * dVar36 +
                                                                    dVar43))));
        *(float *)(pcVar14 + 0x10) =
             (float)((double)((float)((double)(float)(dVar20 * dVar29) * dVar39 +
                                     (double)(float)(dVar29 * dVar38 +
                                                    (double)(float)(dVar44 * dVar37 +
                                                                   (double)(float)((double)(float)(
                                                  dVar20 * dVar41) * dVar36 + dVar41)))) * fVar1) *
                    dVar40);
        *(float *)(pcVar14 + 0x14) =
             (float)((double)((float)((double)(float)(dVar35 * dVar30) * dVar39 +
                                     (double)(float)(dVar30 * dVar38 +
                                                    (double)(float)(dVar28 * dVar37 +
                                                                   (double)(float)((double)(float)(
                                                  dVar35 * dVar22) * dVar36 + dVar22)))) * fVar1) *
                    dVar40);
        *(float *)(pcVar14 + 0x18) =
             (float)(ABS((double)(float)((double)(float)(dVar26 * dVar17) * dVar39 +
                                        (double)(float)(dVar17 * dVar38 +
                                                       (double)(float)(dVar19 * dVar37 +
                                                                      (double)(float)((double)(float
                                                  )(dVar26 * dVar42) * dVar36 + dVar42))))) * dVar40
                    );
      }
      else {
        iVar11 = rand();
        uVar10 = iVar11 >> 0x10;
        iVar11 = *(int *)(pcVar14 + 0xc) + (uVar10 & 0x1f00) * 0x400 + (uVar10 & 0x1f0) * 0x40 +
                 (uVar10 & 0x1f) * 4 + -0x202020;
      }
      *(int *)(pcVar14 + 4) = iVar11;
      iVar15 = iVar15 + 1;
      pcVar14 = pcVar14 + 0x20;
    } while (iVar15 < (int)(uint)(ushort)Sky->sprite_cnt);
  }
  SkySpriteProc();
  uVar8 = idol_draw::PackCmd(0,1,0,1,0x80);
  SetGSReg(3,uVar8);
  idol_draw::DrawSkyShell
            (Sky,2,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  idol_draw::DrawSkyShell
            (Sky,3,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  return;
}


// 0x0159e54 (0x4 bytes)
void DoSkyGifPaging(void)

{
  return;
}


// 0x0159e58 (0x4 bytes)
void SetupGifPaging(void)

{
  return;
}


// 0x0159e88 (0x46c bytes)
void Space_DrawSkyShell(void)

{
  RsxCmd *pRVar1;
  RenderingStep *pRVar2;
  undefined8 uVar3;
  longlong id;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  GPiece<24> local_80;
  
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar2->command[1] = 0xff000000;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar2->command[1] = 0xffffff00;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar2->command[1] = 0xf3;
  pRVar1 = pRVar2->command;
  pRVar2->command = pRVar1 + 2;
  pRVar1[2] = NV4097_NO_OPERATION_x1;
  pRVar2->command[1] = 0;
  pRVar2->command = pRVar2->command + 2;
  FastMtx4Identity(&outMatrix);
  dVar6 = 0.0;
  if (*(short *)(*(int *)(DAT_00a10920 + 8) + 6) != 0) {
    dVar7 = -0.15000000596046448;
    dVar8 = 0.125;
    dVar9 = 0.10000000149011612;
    id = 0;
    dVar10 = -0.05000000074505806;
    do {
      iVar4 = (int)id;
      dVar5 = 1.0;
      if (iVar4 == 5) {
        FastWrapRot(DAT_00a56164,(float)dVar9);
        dVar5 = 2.0;
      }
      else if (iVar4 == 4) {
        FastWrapRot(DAT_00a56164,(float)dVar10);
        dVar5 = 1.75;
      }
      else if (iVar4 == 3) {
        FastWrapRot(DAT_00a56164,(float)dVar8);
        dVar5 = 1.5;
      }
      else if (iVar4 == 2) {
        FastWrapRot(DAT_00a56164,(float)dVar7);
        dVar5 = 1.25;
      }
      else if ((iVar4 == 1) || (iVar4 == 0)) {
        FastWrapRot(DAT_00a56164,(float)dVar6);
      }
      FastEulerToMtx2(&outMatrix,local_80);
      DAT_00a56184 = (float)((double)DAT_00a56184 * dVar5);
      DAT_00a56188 = (float)((double)DAT_00a56188 * dVar5);
      DAT_00a5618c = (float)((double)DAT_00a5618c * dVar5);
      outMatrix = (float)((double)outMatrix * dVar5);
      DAT_00a56190 = (float)((double)DAT_00a56190 * dVar5);
      DAT_00a56194 = (float)((double)DAT_00a56194 * dVar5);
      DAT_00a56198 = (float)((double)DAT_00a56198 * dVar5);
      DAT_00a5619c = (float)((double)DAT_00a5619c * dVar5);
      DAT_00a561a0 = (float)((double)DAT_00a561a0 * dVar5);
      DAT_00a561a4 = (float)((double)DAT_00a561a4 * dVar5);
      DAT_00a561a8 = (float)((double)DAT_00a561a8 * dVar5);
      DAT_00a561ac = (float)((double)DAT_00a561ac * dVar5);
      DAT_00a561b0 = DAT_00a56150;
      DAT_00a561b4 = DAT_00a56154;
      DAT_00a561b8 = DAT_00a56158;
      DAT_00a561bc = DAT_00a5615c;
      idol_draw::DrawSkyShell
                (*(SKY **)(DAT_00a10920 + 8),id,CONCAT44(outMatrix,DAT_00a56184),
                 CONCAT44(DAT_00a56188,DAT_00a5618c),CONCAT44(DAT_00a56190,DAT_00a56194),
                 CONCAT44(DAT_00a56198,DAT_00a5619c),CONCAT44(DAT_00a561a0,DAT_00a561a4),
                 CONCAT44(DAT_00a561a8,DAT_00a561ac));
      id = (longlong)(iVar4 + 1);
    } while (iVar4 + 1 < (int)(uint)*(ushort *)(*(int *)(DAT_00a10920 + 8) + 6));
  }
  uVar3 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  SetGSReg(0x16,uVar3);
  uVar3 = VU1_addGSregister(GSmem.zbuf >> 0xd,1,0);
  SetGSReg(0x21,uVar3);
  return;
}


// 0x015a2f4 (0x1c bytes)
int GetSkyTex(int idx)

{
  return *(int *)&Sky->tex_cnt + idx;
}


// 0x015a310 (0x2c bytes)
int GetSkyShellTexIndex(int param_1)

{
  return *(int *)&Sky->tex_cnt + (uint)*(byte *)(*(int *)(g_SkyData + 0x18) + param_1);
}


// 0x015a33c (0x334 bytes)
void SkyDrawShellTextured(int *param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  ulonglong *puVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar8;
  int iVar7;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  
  lVar13 = ZEXT48(&stack0x00000000) - 0x100;
  puVar4 = (ulonglong *)lVar13;
  *puVar4 = ZEXT48(&stack0x00000000);
  iVar3 = *param_1;
  lVar10 = -((longlong)iVar3 + 0x7fU & 0xfffffffffffffff0);
  uVar11 = lVar13 + lVar10;
  lVar13 = (uVar11 & 0xffffffff) + 0x70;
  *(ulonglong *)((int)puVar4 + (int)lVar10) = *puVar4;
  if (iVar3 != 0) {
    STUB_0015b564(param_1 + 4,(longlong)iVar3,lVar13);
    *DAT_00e5aa58 = 7;
    DAT_00e5aa58[1] = 0;
    DAT_00e5aa58[2] = 0;
    uVar8 = FUN_0050300c(7,0);
    DAT_00e5aa58[3] = uVar8;
    uVar9 = (ulonglong)DAT_00a56170;
    DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
    DAT_00a56170 = (uint)(1 - uVar9);
    iVar3 = (int)uVar11;
    if (*(char *)(iVar3 + 0x70) == '\x01') {
      STUB_000e9130(param_1[8],*(short *)((int)param_1 + 0x2e) >> 4,
                          *(undefined4 *)(&DAT_00731a90 + (int)((1 - uVar9 & 0xffffffff) << 2)));
    }
    if (0 < *param_1) {
      uVar11 = 0;
      do {
        iVar6 = (int)uVar11;
        iVar5 = iVar6 + iVar3;
        if (*(char *)(iVar5 + 0x70) == '\x01') {
          STUB_000e9134();
        }
        iVar12 = iVar6 + 1;
        uVar9 = 1 - (ulonglong)DAT_00a56170;
        DAT_00a56170 = (uint)uVar9;
        if ((iVar12 < *param_1) && (*(char *)(iVar6 + (int)lVar13 + 1) == '\x01')) {
          iVar6 = (int)((uVar11 & 0xffffffff) << 5);
          STUB_000e9130(*(undefined4 *)((int)param_1 + iVar6 + 0x40),
                              *(short *)((int)param_1 + iVar6 + 0x4e) >> 4,
                              *(undefined4 *)(&DAT_00731a90 + (int)((uVar9 & 0xffffffff) << 2)));
          uVar9 = (ulonglong)DAT_00a56170;
        }
        if (*(char *)(iVar5 + 0x70) == '\x01') {
          iVar6 = (int)((uVar11 & 0x7ffffff) << 5);
          iVar5 = *(int *)(&DAT_00731a90 + (int)(1 - uVar9) * 4);
          sVar1 = *(short *)((int)param_1 + iVar6 + 0x2c);
          sVar2 = *(short *)((int)param_1 + iVar6 + 0x2a);
          iVar7 = STUB_0015b55c(iVar5 + *(short *)((int)param_1 + iVar6 + 0x28),&DAT_70002000,
                                      *(undefined2 *)((int)param_1 + iVar6 + 0x24));
          if (iVar7 == 0) {
            STUB_0015b570(*(undefined2 *)((int)param_1 + iVar6 + 0x26),iVar5 + sVar1,
                                iVar5 + sVar2,&DAT_70002000);
          }
        }
        uVar11 = (ulonglong)iVar12;
      } while (iVar12 < *param_1);
    }
  }
  return;
}


// 0x015a670 (0x39c bytes)
void SkyDrawShellGouraud(int *param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  ulonglong *puVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar9;
  int iVar8;
  undefined8 uVar7;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  
  lVar14 = ZEXT48(&stack0x00000000) - 0x100;
  puVar4 = (ulonglong *)lVar14;
  *puVar4 = ZEXT48(&stack0x00000000);
  iVar3 = *param_1;
  lVar11 = -((longlong)iVar3 + 0x7fU & 0xfffffffffffffff0);
  uVar12 = lVar14 + lVar11;
  lVar14 = (uVar12 & 0xffffffff) + 0x70;
  *(ulonglong *)((int)puVar4 + (int)lVar11) = *puVar4;
  if (iVar3 != 0) {
    STUB_0015b564(param_1 + 4,(longlong)iVar3,lVar14);
    *DAT_00e5aa58 = 7;
    DAT_00e5aa58[1] = 0x90;
    DAT_00e5aa58[2] = 0;
    uVar9 = FUN_0050300c(7,0);
    DAT_00e5aa58[3] = uVar9;
    uVar10 = (ulonglong)DAT_00a56170;
    DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
    DAT_00a56170 = (uint)(1 - uVar10);
    iVar3 = (int)uVar12;
    if (*(char *)(iVar3 + 0x70) == '\x01') {
      STUB_000e9130(param_1[8],*(short *)((int)param_1 + 0x2e) >> 4,
                          *(undefined4 *)(&DAT_00731a90 + (int)((1 - uVar10 & 0xffffffff) << 2)));
    }
    if (0 < *param_1) {
      uVar12 = 0;
      do {
        iVar6 = (int)uVar12;
        iVar5 = iVar6 + iVar3;
        if (*(char *)(iVar5 + 0x70) == '\x01') {
          STUB_000e9134();
        }
        iVar13 = iVar6 + 1;
        uVar10 = 1 - (ulonglong)DAT_00a56170;
        DAT_00a56170 = (uint)uVar10;
        if ((iVar13 < *param_1) && (*(char *)(iVar6 + (int)lVar14 + 1) == '\x01')) {
          iVar6 = (int)((uVar12 & 0xffffffff) << 5);
          STUB_000e9130(*(undefined4 *)((int)param_1 + iVar6 + 0x40),
                              *(short *)((int)param_1 + iVar6 + 0x4e) >> 4,
                              *(undefined4 *)(&DAT_00731a90 + (int)((uVar10 & 0xffffffff) << 2)));
          uVar10 = (ulonglong)DAT_00a56170;
        }
        if (*(char *)(iVar5 + 0x70) == '\x01') {
          iVar6 = (int)((uVar12 & 0x7ffffff) << 5);
          iVar5 = *(int *)(&DAT_00731a90 + (int)(1 - uVar10) * 4);
          sVar1 = *(short *)((int)param_1 + iVar6 + 0x2c);
          sVar2 = *(short *)((int)param_1 + iVar6 + 0x2a);
          iVar8 = STUB_0015b55c(iVar5 + *(short *)((int)param_1 + iVar6 + 0x28),&DAT_70002000,
                                      *(undefined2 *)((int)param_1 + iVar6 + 0x24));
          if (iVar8 == 0) {
            STUB_0015b56c(*(undefined2 *)((int)param_1 + iVar6 + 0x26),iVar5 + sVar1,
                                iVar5 + sVar2,&DAT_70002000);
          }
        }
        uVar12 = (ulonglong)iVar13;
      } while (iVar13 < *param_1);
    }
    uVar7 = idol_draw::Blend(1,5,0x80,1,0,0,1,1);
    SetGSReg(0x16,uVar7);
    uVar7 = VU1_addGSregister(GSmem.zbuf >> 0xd,1,1);
    SetGSReg(0x21,uVar7);
  }
  return;
}


