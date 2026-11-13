// game/update/moby671.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x40c2f0-0x40dea4
#include <math.h>
#include <stdio.h>
#include "game/update/moby671.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/lights.h"
#include "game/main.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x040c2f0 (0x14 bytes)
void M671_0040c2f0(void)

{
  DAT_0085514c = 0x10000;
  return;
}


// 0x040c310 (0xc0 bytes)
double M671_0040c310(double param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = (double)(float)(param_1 * 8.0);
  uVar1 = FastDoubleToInt(dVar4);
  dVar3 = (double)FastIntToDouble();
  iVar2 = uVar1 + (((int)uVar1 >> 3) + (uint)((int)uVar1 < 0 && (uVar1 & 7) != 0)) * -8;
  uVar1 = iVar2 + 1;
  return (double)(*(float *)(param_2 + iVar2 * 4 + 0x90) * (1.0 - (float)(dVar4 - dVar3)) +
                 *(float *)(param_2 + (uVar1 + (((int)uVar1 >> 3) +
                                               (uint)((int)uVar1 < 0 && (uVar1 & 7) != 0)) * -8) * 4
                           + 0x90) * (float)(dVar4 - dVar3));
}


// 0x040c3f0 (0x161c bytes)
void M671_0040c3f0(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  byte bVar7;
  byte bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float *pfVar24;
  undefined2 uVar25;
  ulonglong *puVar26;
  undefined8 *puVar27;
  int iVar28;
  ulonglong uVar29;
  undefined8 *puVar30;
  longlong lVar31;
  uint uVar33;
  undefined8 uVar32;
  float *pfVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  uint uVar41;
  int iVar42;
  float *pfVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  int iVar46;
  int iVar47;
  ulonglong uVar48;
  longlong lVar49;
  int iVar51;
  ulonglong uVar50;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double extraout_f1;
  double extraout_f1_00;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  double dVar67;
  double dVar68;
  double dVar69;
  double dVar70;
  GPiece<16> auVar71;
  GPiece<16> auVar72;
  GPiece<16> auVar73;
  float fVar74;
  
  uVar29 = ZEXT48(&stack0x00000000);
  puVar26 = (ulonglong *)(uVar29 - 0x4f0);
  *puVar26 = uVar29;
  if (param_1 != 0) {
    pfVar24 = *(float **)(param_1 + 0x78);
    uVar45 = ZEXT48(pfVar24);
    if (pfVar24 != (float *)0x0) {
      bVar1 = *(byte *)((int)pfVar24 + 9);
      bVar2 = *(byte *)(pfVar24 + 2);
      uVar38 = (ulonglong)bVar2;
      puVar26[0x70] = uVar38;
      *(ulonglong **)(puVar26 + 0x5e) = puVar26;
      puVar26[0x72] = uVar38 + 1;
      lVar31 = -(((longlong)(int)(uint)bVar1 * (longlong)(int)(uint)bVar2 + uVar38 +
                 (ulonglong)bVar1 + 1) * 0x10 + 0x80);
      uVar38 = (uVar29 - 0x4f0) + lVar31;
      *(ulonglong *)((int)puVar26 + (int)lVar31) = *puVar26;
      puVar27 = (undefined8 *)uVar38;
      dVar52 = (double)FastIntToDouble(*(undefined1 *)(pfVar24 + 2));
      dVar56 = 1.0;
      uVar3 = *(undefined1 *)((int)pfVar24 + 9);
      puVar26[100] = (ulonglong)(double)(float)(1.0 / dVar52);
      dVar52 = (double)FastIntToDouble(uVar3);
      lVar31 = -(((ulonglong)*(byte *)(pfVar24 + 2) + 1) * 4 + 0x8f & 0xfffffffffffffff0);
      uVar39 = (uVar38 & 0xffffffff) + lVar31;
      uVar38 = uVar39 & 0xffffffff;
      *(undefined8 *)((int)puVar27 + (int)lVar31) = *puVar27;
      puVar30 = (undefined8 *)uVar39;
      lVar31 = -(((ulonglong)*(byte *)((int)pfVar24 + 9) + 1) * 4 + 0x8f & 0xfffffffffffffff0);
      uVar40 = uVar38 + lVar31;
      uVar39 = uVar40 & 0xffffffff;
      *(undefined8 *)((int)puVar30 + (int)lVar31) = *puVar30;
      iVar51 = g_MainLoopFrames;
      puVar26[99] = (ulonglong)(double)(float)(dVar56 / dVar52);
      dVar52 = (double)FastIntToDouble(iVar51);
      iVar51 = 0;
      *(float *)(puVar26 + 0x62) = (float)dVar52;
      *(undefined8 **)(puVar26 + 0x71) = puVar27;
      uVar48 = uVar45;
      do {
        iVar37 = (int)uVar48;
        uVar33 = (int)*(uint *)(iVar37 + 0x90) >> 0x1f;
        uVar41 = (int)*(uint *)(iVar37 + 0xb0) >> 0x1f;
        if ((int)((uVar33 >> 1 ^ *(uint *)(iVar37 + 0x90)) - uVar33) <
            (int)((uVar41 >> 1 ^ *(uint *)(iVar37 + 0xb0)) - uVar41)) {
          fVar74 = pfVar24[0x22] * pfVar24[0x23] + *(float *)(iVar37 + 0x90);
          *(float *)(iVar37 + 0x90) = fVar74;
          if (*(float *)(iVar37 + 0xb0) <= fVar74) {
            dVar52 = (double)MB_randRangeFloat
                                       ((float)(dVar56 - (double)pfVar24[0x22]),(float)dVar56);
            *(float *)(iVar37 + 0xb0) = (float)dVar52;
          }
        }
        else {
          fVar74 = -(pfVar24[0x22] * pfVar24[0x23] - *(float *)(iVar37 + 0x90));
          *(float *)(iVar37 + 0x90) = fVar74;
          if (fVar74 <= *(float *)(iVar37 + 0xb0)) {
            dVar52 = (double)MB_randRangeFloat
                                       ((float)(dVar56 - (double)pfVar24[0x22]),(float)dVar56);
            *(float *)(iVar37 + 0xb0) = (float)dVar52;
          }
        }
        iVar51 = iVar51 + 1;
        uVar48 = uVar48 + 4;
      } while (iVar51 < 8);
      dVar52 = (double)FastIntToDouble(*(undefined1 *)(param_1 + 0x23));
      dVar53 = (double)FastIntToDouble(*(undefined1 *)((int)pfVar24 + 0x13));
      uVar33 = FastDoubleToInt
                         ((double)((float)((double)(float)((double)pfVar24[0x55] * dVar53) * dVar52)
                                  * 0.0078125));
      bVar1 = *(byte *)((int)pfVar24 + 0xd);
      uVar33 = uVar33 & 0xff;
      if (bVar1 == 0) {
        uVar48 = (ulonglong)*(byte *)(pfVar24 + 3);
      }
      else {
        iVar51 = g_MainLoopFrames / (int)(*(byte *)((int)pfVar24 + 0xe) + 1);
        uVar48 = (ulonglong)*(byte *)(pfVar24 + 3) +
                 ((longlong)iVar51 -
                 (longlong)(iVar51 / (int)(uint)bVar1) * (longlong)(int)(uint)bVar1);
      }
      *(char *)((int)pfVar24 + 0xf) = (char)uVar48;
      if ((*(ushort *)((int)pfVar24 + 10) & 1) == 0) {
        uVar48 = GetEffectTex((uVar48 & 0xff) + 0x28);
      }
      else {
        uVar48 = GetEffectTex(uVar48 & 0xff);
      }
      puVar26[0x6f] = 0;
      puVar26[0x57] = uVar48;
      uVar48 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
      puVar26[0x58] = uVar48;
      uVar48 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
      puVar26[0x56] = uVar48;
      uVar48 = idol_draw::PackCmd(*(undefined1 *)(pfVar24 + 0xf),
                                  *(undefined1 *)((int)pfVar24 + 0x3d),
                                  *(undefined1 *)((int)pfVar24 + 0x3e),
                                  *(undefined1 *)((int)pfVar24 + 0x3f),
                                  *(undefined1 *)((int)pfVar24 + 0x13));
      puVar26[0x59] = uVar48;
      uVar41 = (uint)*(byte *)((int)pfVar24 + 0x11) << 0x10 |
               (uint)*(byte *)((int)pfVar24 + 0x13) << 0x18 |
               (uint)CONCAT11(*(undefined1 *)((int)pfVar24 + 0x12),*(undefined1 *)(pfVar24 + 4));
      *(uint *)(puVar26 + 0x50) = uVar41;
      *(uint *)((int)puVar26 + 0x284) = uVar41;
      *(uint *)(puVar26 + 0x51) = uVar41;
      *(uint *)((int)puVar26 + 0x28c) = uVar41;
      *(undefined4 *)((int)puVar26 + 0xbc) = 0;
      *(undefined4 *)(puVar26 + 0x17) = 0;
      *(undefined4 *)((int)puVar26 + 0xb4) = 0;
      *(undefined4 *)(puVar26 + 0x16) = 0;
      *(undefined4 *)((int)puVar26 + 0xcc) = 0;
      *(undefined4 *)(puVar26 + 0x19) = 0;
      *(undefined4 *)((int)puVar26 + 0xc4) = 0;
      *(undefined4 *)(puVar26 + 0x18) = 0;
      *(undefined4 *)((int)puVar26 + 0xdc) = 0;
      *(undefined4 *)(puVar26 + 0x1b) = 0;
      *(undefined4 *)((int)puVar26 + 0xd4) = 0;
      *(undefined4 *)(puVar26 + 0x1a) = 0;
      *(undefined4 *)((int)puVar26 + 0xec) = 0;
      *(undefined4 *)(puVar26 + 0x1d) = 0;
      *(undefined4 *)((int)puVar26 + 0xe4) = 0;
      *(undefined4 *)(puVar26 + 0x1c) = 0;
      lVar31 = uVar29 - 0x2f0;
      fVar74 = *pfVar24 * 0.5;
      auVar71 = loadVectorLeftIndexed(8,0x40c3d0);
      auVar71 = auVar71 >> 0x60 & (GPiece<16>)0xffffffff;
      *(float *)(puVar26 + 0x1c) = fVar74;
      *(float *)(puVar26 + 0x18) = fVar74;
      *(undefined4 *)(puVar26 + 0x6e) = 0x3f000000;
      *(float *)(puVar26 + 0x1a) = -fVar74;
      *(float *)(puVar26 + 0x16) = -fVar74;
      fVar74 = pfVar24[0x20];
      *(undefined1 (*) [16])(puVar26 + 0x5c) =
           auVar71 | auVar71 << 0x20 | auVar71 << 0x40 | auVar71 << 0x60;
      *(float *)(puVar26 + 0x17) = fVar74 + 0.01;
      *(float *)(puVar26 + 0x19) = pfVar24[0x21] + 0.01;
      FastEulerToMtx1(lVar31,param_1 + 0x40);
      FUN_005e825c(uVar29 - 0x440,uVar29 - 0x440,lVar31);
      FUN_005e825c(uVar29 - 0x430,uVar29 - 0x430,lVar31);
      FUN_005e825c(uVar29 - 0x420,uVar29 - 0x420,lVar31);
      FUN_005e825c(uVar29 - 0x410,uVar29 - 0x410,lVar31);
      dVar52 = (double)puVar26[99];
      *(undefined4 *)((int)puVar26 + 0x10c) = *(undefined4 *)((int)puVar26 + 0xdc);
      lVar49 = uVar29 - 0x3d0;
      lVar31 = uVar29 - 0x3f0;
      *(float *)(puVar26 + 0x20) =
           (float)((double)(*(float *)(puVar26 + 0x1a) - *(float *)(puVar26 + 0x16)) * dVar52);
      *(float *)((int)puVar26 + 0x104) =
           (float)((double)(*(float *)((int)puVar26 + 0xd4) - *(float *)((int)puVar26 + 0xb4)) *
                  dVar52);
      *(float *)(puVar26 + 0x21) =
           (float)((double)(*(float *)(puVar26 + 0x1b) - *(float *)(puVar26 + 0x17)) * dVar52);
      fVar74 = pfVar24[6];
      fVar9 = pfVar24[5];
      fVar10 = pfVar24[9];
      fVar11 = pfVar24[7];
      fVar12 = pfVar24[10];
      fVar13 = pfVar24[8];
      puVar26[0x6d] = (ulonglong)(double)(*(float *)(puVar26 + 0x1c) - *(float *)(puVar26 + 0x18));
      fVar14 = pfVar24[0x1a];
      fVar15 = pfVar24[0x18];
      puVar26[0x6c] =
           (ulonglong)(double)(*(float *)((int)puVar26 + 0xe4) - *(float *)((int)puVar26 + 0xc4));
      fVar16 = pfVar24[0x1b];
      fVar17 = pfVar24[0x19];
      puVar26[0x6b] = (ulonglong)(double)(*(float *)(puVar26 + 0x1d) - *(float *)(puVar26 + 0x19));
      fVar18 = *(float *)(puVar26 + 0x19) - *(float *)(puVar26 + 0x17);
      puVar26[0x6a] = (ulonglong)(double)(fVar74 - fVar9);
      fVar74 = pfVar24[1];
      fVar9 = pfVar24[0x20];
      puVar26[0x69] = (ulonglong)(double)(fVar10 - fVar11);
      fVar10 = pfVar24[0x21];
      puVar26[0x68] = (ulonglong)(double)(fVar12 - fVar13);
      dVar52 = (double)(float)((double)fVar74 - (double)fVar9);
      *(float *)(puVar26 + 0x22) = *(float *)(puVar26 + 0x18) - *(float *)(puVar26 + 0x16);
      dVar53 = (double)(float)((double)fVar74 - (double)fVar10);
      puVar26[0x67] = (ulonglong)(double)(fVar14 - fVar15);
      *(float *)((int)puVar26 + 0x114) =
           *(float *)((int)puVar26 + 0xc4) - *(float *)((int)puVar26 + 0xb4);
      *(float *)(puVar26 + 0x23) = fVar18;
      puVar26[0x66] = (ulonglong)(double)(fVar16 - fVar17);
      *(float *)((int)puVar26 + 0x11c) = *(float *)((int)puVar26 + 0xcc);
      FUN_005e8f4c((double)fVar18,(double)*(float *)((int)puVar26 + 0xcc),(double)fVar10,lVar49,
                   uVar29 - 0x3e0,lVar31);
      FUN_005e7f98(dVar56,lVar49,lVar49);
      iVar51 = 0;
      *(undefined4 *)((int)puVar26 + 0x30c) = *(undefined4 *)(puVar26 + 0x16);
      dVar57 = (double)*(float *)((int)puVar26 + 0xbc);
      *(undefined4 *)(puVar26 + 0x61) = *(undefined4 *)((int)puVar26 + 0xb4);
      fVar11 = pfVar24[5];
      *(undefined4 *)((int)puVar26 + 0x304) = *(undefined4 *)(puVar26 + 0x17);
      puVar26[0x65] = (ulonglong)(double)*(float *)((int)puVar26 + 0xcc);
      *(undefined4 *)(puVar26 + 0x60) = *(undefined4 *)(puVar26 + 0x18);
      *(undefined4 *)((int)puVar26 + 0x2fc) = *(undefined4 *)((int)puVar26 + 0xc4);
      fVar74 = pfVar24[7];
      *(undefined4 *)(puVar26 + 0x5f) = *(undefined4 *)(puVar26 + 0x19);
      fVar9 = pfVar24[8];
      fVar10 = pfVar24[0x18];
      *(float *)((int)puVar26 + 0x2f4) = fVar11;
      fVar11 = pfVar24[0x19];
      dVar58 = (double)pfVar24[0x24];
      do {
        dVar62 = (double)fVar11;
        dVar61 = (double)fVar10;
        dVar60 = (double)fVar9;
        dVar59 = (double)fVar74;
        dVar54 = (double)FastIntToDouble(iVar51);
        dVar55 = (double)FastIntToDouble(*(undefined1 *)((int)pfVar24 + 9));
        dVar70 = (double)(float)(dVar54 / dVar55);
        dVar67 = (double)*(float *)((int)puVar26 + 0x30c);
        dVar68 = (double)*(float *)(puVar26 + 0x61);
        dVar69 = (double)*(float *)((int)puVar26 + 0x304);
        dVar54 = (double)puVar26[100];
        *(float *)((int)puVar26 + 0xfc) = (float)(double)puVar26[0x65];
        *(float *)(puVar26 + 0x1e) =
             (float)((double)(float)((double)*(float *)(puVar26 + 0x60) - dVar67) * dVar54);
        *(float *)((int)puVar26 + 0xf4) =
             (float)((double)(float)((double)*(float *)((int)puVar26 + 0x2fc) - dVar68) * dVar54);
        *(float *)(puVar26 + 0x1f) =
             (float)((double)(float)((double)*(float *)(puVar26 + 0x5f) - dVar69) * dVar54);
        dVar54 = (double)M671_0040c310(dVar70,uVar45);
        uVar48 = puVar26[0x6f];
        iVar42 = iVar51 * (int)puVar26[0x70] + iVar51;
        dVar55 = (double)(float)(dVar56 - dVar70);
        dVar66 = 3.1415927410125732;
        dVar65 = (double)(float)(dVar70 * 3.1415927410125732);
        iVar37 = *(int *)(puVar26 + 0x71);
        fVar74 = *(float *)((int)puVar26 + 0x2f4) * *(float *)(puVar26 + 0x62);
        do {
          dVar63 = (double)fVar74;
          *(float *)(puVar26 + 0x76) = (float)dVar66;
          *(float *)(puVar26 + 0x75) = (float)dVar54;
          *(float *)((int)puVar26 + 0x3a4) = (float)dVar69;
          *(float *)(puVar26 + 0x74) = fVar74;
          *(float *)((int)puVar26 + 0x39c) = (float)dVar57;
          dVar57 = (double)FastIntToDouble(uVar48);
          dVar69 = (double)FastIntToDouble(*(undefined1 *)(pfVar24 + 2));
          dVar69 = (double)(float)(dVar57 / dVar69);
          fVar74 = MB_WrapRot(pfVar24[0x17] * *(float *)(puVar26 + 0x62));
          dVar57 = (double)FUN_005e8128((double)fVar74);
          dVar63 = (double)(float)((double)pfVar24[0x16] * dVar57 + dVar63);
          dVar57 = (double)M671_0040c310(dVar69,uVar45);
          fVar74 = pfVar24[0x34];
          fVar9 = pfVar24[0x36];
          fVar10 = pfVar24[0x35];
          fVar11 = pfVar24[0xb];
          fVar12 = pfVar24[0xd];
          *(float *)((int)puVar26 + 0x3ac) = (float)dVar58;
          *(float *)(puVar26 + 0x77) = (float)dVar61;
          dVar64 = (double)(float)(dVar69 * dVar52 +
                                  (double)(float)((double)(float)(dVar56 - dVar69) * dVar53));
          dVar63 = (double)(float)((double)fVar10 * dVar54 +
                                  (double)(float)((double)fVar9 * dVar58 +
                                                 (double)(float)(dVar57 * (double)fVar74 + dVar63)))
          ;
          fVar74 = MB_WrapRot
                             ((float)((double)fVar12 * dVar70 +
                                     (double)(float)((double)fVar11 * dVar69 +
                                                    (double)(float)(dVar63 + dVar61))));
          dVar58 = (double)fVar74;
          *(float *)((int)puVar26 + 0x3b4) = (float)dVar62;
          fVar74 = MB_WrapRot
                             ((float)((double)pfVar24[0xe] * dVar69 +
                                     (double)(float)((double)pfVar24[0xc] * dVar70 +
                                                    (double)(float)(dVar63 + dVar62))));
          dVar54 = (double)fVar74;
          dVar66 = (double)(float)(dVar69 * dVar66);
          dVar61 = (double)FUN_005e8128(dVar66);
          dVar61 = (double)(float)SQRT(dVar61);
          dVar62 = (double)(float)((double)(float)(dVar61 * dVar64) * dVar55);
          dVar58 = (double)cosf((float)dVar58);
          FUN_005e7f98((double)(float)((double)(float)((double)(float)(dVar58 * dVar59) * dVar61) *
                                      dVar57),uVar29 - 0x3c0,uVar29 - 0x400);
          dVar58 = (double)FUN_005e8128(dVar54);
          FUN_005e7f98((double)(float)((double)(float)((double)(float)(dVar58 * dVar60) * dVar61) *
                                      dVar57),uVar29 - 0x3b0,lVar31);
          dVar57 = (double)FUN_005e8128(dVar65);
          dVar58 = (double)FUN_005e8128(dVar66);
          dVar66 = (double)(float)(dVar57 * dVar58);
          fVar74 = MB_WrapRot((float)((double)pfVar24[0xb] * dVar69 + dVar63));
          dVar57 = (double)FUN_005e8128((double)fVar74);
          dVar54 = (double)pfVar24[0x1e];
          fVar74 = MB_WrapRot((float)((double)pfVar24[0xd] * dVar70 + dVar63));
          dVar58 = (double)FUN_005e8128((double)fVar74);
          FUN_005e7f98((double)(float)(dVar66 * (double)(float)(dVar54 * dVar57 +
                                                               (double)(float)((double)pfVar24[0x1f]
                                                                              * dVar58))),
                       uVar29 - 0x3a0,uVar29 - 0x3d0);
          FUN_005e7f98(dVar62,uVar29 - 0x390,lVar31);
          fVar74 = *(float *)(puVar26 + 0x26);
          fVar9 = *(float *)(puVar26 + 0x28);
          fVar10 = *(float *)((int)puVar26 + 0x134);
          fVar11 = *(float *)((int)puVar26 + 0x144);
          fVar12 = *(float *)(puVar26 + 0x27);
          fVar13 = *(float *)(puVar26 + 0x29);
          fVar14 = *(float *)(puVar26 + 0x2a);
          iVar28 = (int)uVar48;
          fVar15 = *(float *)((int)puVar26 + 0x154);
          fVar16 = *(float *)(puVar26 + 0x2b);
          fVar17 = *(float *)(puVar26 + 0x2c);
          pfVar34 = (float *)(puVar27 + iVar42 * 2 + iVar28 * 2 + 0x10);
          fVar18 = *(float *)((int)puVar26 + 0x164);
          fVar19 = *(float *)(puVar26 + 0x2d);
          fVar20 = *(float *)((int)puVar26 + 0x3a4);
          dVar57 = (double)*(float *)((int)puVar26 + 0x39c);
          pfVar34[3] = *(float *)((int)puVar26 + 0x39c);
          *pfVar34 = (float)(dVar67 + (double)((fVar74 + fVar9 + fVar14) - fVar17));
          pfVar34[1] = (float)(dVar68 + (double)((fVar10 + fVar11 + fVar15) - fVar18));
          pfVar34[2] = fVar20 + ((fVar12 + fVar13 + fVar16) - fVar19);
          uVar48 = (ulonglong)(iVar28 + 1);
          *(float *)(iVar28 * 0x10 + iVar42 * 0x10 + iVar37 + 0x8c) =
               (float)(dVar56 / (double)((float)((double)(float)((double)(float)((double)pfVar24[
                                                  0x56] * dVar61) * dVar61) * dVar61 +
                                                (double)(float)(dVar56 - (double)pfVar24[0x56])) *
                                        (float)((double)pfVar24[0x57] * dVar70 +
                                               (double)(float)(dVar56 - (double)pfVar24[0x57]))));
          dVar67 = (double)(float)(dVar67 + (double)*(float *)(puVar26 + 0x1e));
          dVar68 = (double)(float)(dVar68 + (double)*(float *)((int)puVar26 + 0xf4));
          fVar74 = *(float *)(puVar26 + 0x74);
          dVar54 = (double)*(float *)(puVar26 + 0x75);
          dVar58 = (double)*(float *)((int)puVar26 + 0x3ac);
          dVar69 = (double)(fVar20 + *(float *)(puVar26 + 0x1f));
          dVar66 = (double)*(float *)(puVar26 + 0x76);
          dVar62 = (double)*(float *)((int)puVar26 + 0x3b4);
          dVar61 = (double)*(float *)(puVar26 + 0x77);
        } while (iVar28 + 1 <= (int)(uint)*(byte *)(pfVar24 + 2));
        iVar51 = iVar51 + 1;
        dVar54 = (double)puVar26[99];
        *(float *)((int)puVar26 + 0x30c) =
             *(float *)((int)puVar26 + 0x30c) + *(float *)(puVar26 + 0x20);
        *(float *)(puVar26 + 0x61) = *(float *)(puVar26 + 0x61) + *(float *)((int)puVar26 + 0x104);
        *(float *)((int)puVar26 + 0x304) =
             *(float *)((int)puVar26 + 0x304) + *(float *)(puVar26 + 0x21);
        fVar74 = (float)((double)puVar26[0x69] * dVar54 + dVar59);
        fVar9 = (float)((double)puVar26[0x68] * dVar54 + dVar60);
        *(float *)(puVar26 + 0x60) =
             (float)((double)puVar26[0x6d] * dVar54 + (double)*(float *)(puVar26 + 0x60));
        fVar10 = (float)((double)puVar26[0x67] * (double)puVar26[100] + dVar61);
        bVar1 = *(byte *)((int)pfVar24 + 9);
        *(float *)((int)puVar26 + 0x2fc) =
             (float)((double)puVar26[0x6c] * dVar54 + (double)*(float *)((int)puVar26 + 0x2fc));
        *(float *)(puVar26 + 0x5f) =
             (float)((double)puVar26[0x6b] * dVar54 + (double)*(float *)(puVar26 + 0x5f));
        fVar11 = (float)((double)puVar26[0x66] * dVar54 + dVar62);
        *(float *)((int)puVar26 + 0x2f4) =
             (float)((double)puVar26[0x6a] * dVar54 + (double)*(float *)((int)puVar26 + 0x2f4));
      } while (iVar51 <= (int)(uint)bVar1);
      dVar53 = (double)*(float *)(puVar26 + 0x62);
      *(undefined8 **)(puVar26 + 0x73) = puVar30;
      dVar52 = (double)pfVar24[0x10];
      fVar74 = MB_WrapRot((float)(dVar53 * (double)pfVar24[0x12]));
      uVar32 = FUN_005e8128((double)fVar74);
      dVar52 = (double)FastFrac((double)(float)(dVar53 * dVar52 +
                                                         (double)(float)((double)pfVar24[0x11] *
                                                                        extraout_f1)),uVar32,
                                          uVar29 - 0x220);
      uVar48 = puVar26[0x6f];
      *(undefined8 **)(puVar26 + 0x73) = puVar30;
      do {
        *(float *)((int)uVar38 + 0x80) = (float)dVar52;
        uVar48 = uVar48 + 1;
        uVar38 = uVar38 + 4;
        dVar52 = (double)(float)(dVar52 + (double)(float)((double)puVar26[100] /
                                                         (double)pfVar24[0x1c]));
      } while ((int)uVar48 <= (int)(uint)*(byte *)(pfVar24 + 2));
      dVar52 = (double)pfVar24[0x13];
      fVar74 = MB_WrapRot((float)(dVar53 * (double)pfVar24[0x15]));
      uVar32 = FUN_005e8128((double)fVar74);
      dVar52 = (double)FastFrac((double)(float)(dVar53 * dVar52 +
                                                         (double)(float)((double)pfVar24[0x14] *
                                                                        extraout_f1_00)),uVar32,
                                          uVar29 - 0x220);
      uVar48 = puVar26[0x6f];
      uVar38 = uVar39;
      do {
        *(float *)((int)uVar38 + 0x80) = (float)dVar52;
        uVar48 = uVar48 + 1;
        uVar38 = uVar38 + 4;
        bVar1 = *(byte *)((int)pfVar24 + 9);
        dVar52 = (double)(float)(dVar52 + (double)(float)((double)puVar26[99] /
                                                         (double)pfVar24[0x1d]));
      } while ((int)uVar48 <= (int)(uint)bVar1);
      uVar41 = (uint)bVar1;
      uVar38 = puVar26[0x6f];
      iVar51 = (int)uVar40;
      if (bVar1 != 0) {
        uVar40 = puVar26[0x6f];
        uVar48 = uVar40;
        do {
          uVar44 = puVar26[0x6f];
          if (*(char *)(pfVar24 + 2) != '\0') {
            iVar28 = (int)uVar40 + (int)uVar38;
            iVar37 = *(int *)(puVar26 + 0x73);
            iVar46 = *(int *)(puVar26 + 0x71) + 0x8c;
            iVar42 = iVar28 * 0x10;
            iVar28 = (iVar28 + (int)puVar26[0x72]) * 0x10;
            iVar47 = *(int *)(puVar26 + 0x71) + 0x9c;
            uVar50 = uVar44;
            do {
              uVar21 = *(undefined4 *)(iVar37 + 0x80);
              *(undefined4 *)(puVar26 + 0x52) = uVar21;
              iVar36 = (int)uVar50;
              pfVar34 = (float *)((int)puVar27 + iVar36 + iVar42 + 0x80);
              uVar22 = *(undefined4 *)((int)uVar39 + 0x80);
              *(undefined4 *)((int)puVar26 + 0x294) = uVar22;
              uVar23 = *(undefined4 *)(iVar37 + 0x84);
              *(undefined4 *)((int)puVar26 + 0x29c) = uVar22;
              *(undefined4 *)(puVar26 + 0x53) = uVar23;
              *(undefined4 *)(puVar26 + 0x54) = uVar21;
              uVar21 = *(undefined4 *)((int)uVar48 + iVar51 + 0x84);
              *(undefined4 *)(puVar26 + 0x55) = uVar23;
              *(undefined4 *)((int)puVar26 + 0x2a4) = uVar21;
              *(undefined4 *)((int)puVar26 + 0x2ac) = uVar21;
              fVar74 = *(float *)(param_1 + 0x10);
              fVar9 = *(float *)(param_1 + 0x14);
              fVar10 = *(float *)(param_1 + 0x18);
              pfVar43 = (float *)((int)puVar27 + iVar36 + iVar28 + 0x80);
              *(float *)(puVar26 + 0x48) = *pfVar34 + fVar74;
              *(float *)((int)puVar26 + 0x244) = pfVar34[1] + fVar9;
              *(float *)(puVar26 + 0x49) = pfVar34[2] + fVar10;
              *(float *)((int)puVar26 + 0x24c) = pfVar34[3];
              *(float *)(puVar26 + 0x4a) = pfVar34[4] + fVar74;
              *(float *)((int)puVar26 + 0x254) = pfVar34[5] + fVar9;
              *(float *)(puVar26 + 0x4b) = pfVar34[6] + fVar10;
              *(float *)((int)puVar26 + 0x25c) = pfVar34[7];
              *(float *)(puVar26 + 0x4c) = *pfVar43 + fVar74;
              *(float *)((int)puVar26 + 0x264) = pfVar43[1] + fVar9;
              *(float *)(puVar26 + 0x4d) = pfVar43[2] + fVar10;
              *(float *)((int)puVar26 + 0x26c) = pfVar43[3];
              *(float *)(puVar26 + 0x4e) = pfVar43[4] + fVar74;
              *(float *)((int)puVar26 + 0x274) = pfVar43[5] + fVar9;
              *(float *)(puVar26 + 0x4f) = pfVar43[6] + fVar10;
              *(float *)((int)puVar26 + 0x27c) = pfVar43[7];
              iVar35 = FastDoubleToInt((double)*(float *)(iVar42 + iVar46 + iVar36));
              *(uint *)(puVar26 + 0x50) =
                   (int)uVar33 / iVar35 << 0x18 | (uint)*(byte *)((int)pfVar24 + 0x11) << 0x10 |
                   (uint)CONCAT11(*(undefined1 *)((int)pfVar24 + 0x12),*(undefined1 *)(pfVar24 + 4))
              ;
              iVar35 = FastDoubleToInt((double)*(float *)(iVar42 + iVar47 + iVar36));
              *(uint *)((int)puVar26 + 0x284) =
                   (int)uVar33 / iVar35 << 0x18 | (uint)*(byte *)((int)pfVar24 + 0x11) << 0x10 |
                   (uint)CONCAT11(*(undefined1 *)((int)pfVar24 + 0x12),*(undefined1 *)(pfVar24 + 4))
              ;
              iVar35 = FastDoubleToInt((double)*(float *)(iVar28 + iVar46 + iVar36));
              *(uint *)(puVar26 + 0x51) =
                   (int)uVar33 / iVar35 << 0x18 | (uint)*(byte *)((int)pfVar24 + 0x11) << 0x10 |
                   (uint)CONCAT11(*(undefined1 *)((int)pfVar24 + 0x12),*(undefined1 *)(pfVar24 + 4))
              ;
              iVar36 = FastDoubleToInt((double)*(float *)(iVar28 + iVar47 + iVar36));
              uVar21 = EffectTexHeaders;
              *(uint *)((int)puVar26 + 0x28c) =
                   (int)uVar33 / iVar36 << 0x18 | (uint)*(byte *)((int)pfVar24 + 0x11) << 0x10 |
                   (uint)CONCAT11(*(undefined1 *)((int)pfVar24 + 0x12),*(undefined1 *)(pfVar24 + 4))
              ;
              FastDrawQuad(uVar29 - 0x2b0,0,0,uVar21,9);
              uVar44 = uVar44 + 1;
              uVar50 = uVar50 + 0x10;
              iVar37 = iVar37 + 4;
            } while ((int)uVar44 < (int)(uint)*(byte *)(pfVar24 + 2));
            uVar41 = (uint)*(byte *)((int)pfVar24 + 9);
          }
          uVar38 = uVar38 + 1;
          uVar39 = uVar39 + 4;
          uVar48 = uVar48 + 4;
          uVar40 = uVar40 + puVar26[0x70];
        } while ((int)uVar38 < (int)uVar41);
      }
      if ((*(ushort *)((int)pfVar24 + 10) & 2) != 0) {
        iVar37 = FastDecTimerS32(uVar45 + 0xf8);
        if (iVar37 != 0) {
          auVar71 = ZEXT416(0xfffffff8);
          auVar72 = ZEXT416(0xffffffff);
          auVar73 = auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60;
          auVar72 = loadVectorLeftIndexed(0xf3,uVar45);
          auVar71 = vectorShiftRightWord
                              (auVar72,auVar71 | auVar71 << 0x20 | auVar71 << 0x40 | auVar71 << 0x60
                              );
          auVar72 = vectorShiftLeftIntegerWord(auVar73,auVar73);
          auVar71 = vectorConvertFromSignedFixedPointWord(auVar71,0);
          auVar73 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          uVar38 = puVar26[0x6f];
          auVar71 = vectorAddFloatingPoint(auVar71,*(undefined1 (*) [16])(puVar26 + 0x5c));
          auVar71 = vectorMultiplyAddFloatingPoint(auVar73,auVar71,auVar72);
          auVar71 = vectorConvertToSignedFixedPointWordSaturate(auVar71,0);
          auVar71 = auVar71 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar21 = storeVectorElementWordIndexed
                             (auVar71 | auVar71 << 0x20 | auVar71 << 0x40 | auVar71 << 0x60,0xf8,
                              uVar45);
          *(undefined4 *)((uint)(pfVar24 + 0x3e) & 0xfffffffc) = uVar21;
          if (*(char *)((int)pfVar24 + 0xf2) != '\0') {
            dVar52 = (double)*(float *)(puVar26 + 0x6e);
            dVar58 = -1.0;
            dVar57 = 0.0;
            dVar53 = 3.1415927410125732;
            do {
              dVar59 = (double)(float)((double)*pfVar24 * dVar52);
              dVar54 = (double)MB_randRangeFloat((float)dVar58,(float)dVar56);
              dVar54 = (double)MB_randRangeFloat
                                         ((float)dVar57,(float)(dVar54 * (double)pfVar24[0x3d]));
              dVar55 = (double)cosf((float)(dVar54 * dVar53));
              FUN_005e7f98(-(double)((float)SQRT(dVar55) * pfVar24[0x40] + pfVar24[0x3f]),
                           uVar29 - 0x360,uVar29 - 0x3f0);
              FUN_005e7f98((double)(float)(dVar59 * dVar54),uVar29 - 0x370,uVar29 - 0x400);
              fVar74 = *(float *)(param_1 + 0x14);
              fVar9 = *(float *)(param_1 + 0x18);
              *(float *)(puVar26 + 0x30) =
                   *(float *)(puVar26 + 0x30) + *(float *)(param_1 + 0x10) +
                   *(float *)(puVar26 + 0x32);
              *(float *)((int)puVar26 + 0x184) =
                   *(float *)((int)puVar26 + 0x184) + fVar74 + *(float *)((int)puVar26 + 0x194);
              *(float *)(puVar26 + 0x31) =
                   *(float *)(puVar26 + 0x31) + fVar9 + *(float *)(puVar26 + 0x33);
              dVar55 = (double)MB_randRangeFloat(-pfVar24[0x37],pfVar24[0x37]);
              *(float *)(puVar26 + 0x2e) = (float)(dVar55 * (double)DAT_0071f408);
              dVar55 = (double)MB_randRangeFloat(-pfVar24[0x37],pfVar24[0x37]);
              *(float *)((int)puVar26 + 0x174) = (float)(dVar55 * (double)DAT_0071f408);
              dVar55 = (double)MB_randRangeFloat((float)dVar57,pfVar24[0x38]);
              *(float *)(puVar26 + 0x2f) = (float)(dVar55 * (double)DAT_0071f408);
              uVar32 = MB_randRangeFloat(pfVar24[0x39],pfVar24[0x3a]);
              puVar26[0x78] = (longlong)(int)*(short *)(pfVar24 + 0x3c);
              uVar3 = *(undefined1 *)(pfVar24 + 0x3b);
              uVar4 = *(undefined1 *)((int)pfVar24 + 0xef);
              uVar5 = *(undefined1 *)((int)pfVar24 + 0xed);
              uVar6 = *(undefined1 *)((int)pfVar24 + 0xee);
              puVar26[0x78] =
                   (longlong)
                   (int)(animationSpeed * (float)((double)(longlong)puVar26[0x78] + dVar52));
              uVar21 = *(undefined4 *)((int)puVar26 + 0x3c4);
              dVar55 = (double)FastIntToDouble(uVar4);
              uVar39 = FastDoubleToInt((double)(float)(dVar55 * dVar54));
              *(ulonglong *)(iVar51 + 0x70) = uVar39 & 0xff;
              SpawnPart_43
                        (uVar32,param_1,uVar29 - 0x370,uVar29 - 0x380,uVar39 & 0xff,(short)uVar21,
                         uVar3,uVar5,uVar6);
              uVar38 = uVar38 + 1;
            } while ((int)uVar38 < (int)(uint)*(byte *)((int)pfVar24 + 0xf2));
          }
        }
        iVar51 = FastDecTimerS16(uVar45 + 0x122);
        if (iVar51 != 0) {
          auVar71 = ZEXT416(0xfffffff8);
          auVar72 = ZEXT416(0xffffffff);
          auVar73 = auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60;
          auVar72 = loadVectorLeftIndexed(0x121,uVar45);
          auVar71 = vectorShiftRightWord
                              (auVar72,auVar71 | auVar71 << 0x20 | auVar71 << 0x40 | auVar71 << 0x60
                              );
          auVar72 = vectorShiftLeftIntegerWord(auVar73,auVar73);
          auVar71 = vectorConvertFromSignedFixedPointWord(auVar71,0);
          auVar73 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          uVar38 = puVar26[0x6f];
          auVar71 = vectorAddFloatingPoint(auVar71,*(undefined1 (*) [16])(puVar26 + 0x5c));
          auVar71 = vectorMultiplyAddFloatingPoint(auVar73,auVar71,auVar72);
          auVar71 = vectorConvertToSignedFixedPointWordSaturate(auVar71,0);
          auVar71 = vectorSplatHalfWord(auVar71,1);
          uVar25 = storeVectorElementHalfWordIndexed(auVar71,0x122,uVar45);
          *(undefined2 *)((int)pfVar24 + 0x122) = uVar25;
          if (*(char *)(pfVar24 + 0x48) != '\0') {
            dVar52 = (double)*(float *)(puVar26 + 0x6e);
            dVar58 = -1.0;
            dVar57 = 3.1415927410125732;
            dVar53 = 0.0;
            do {
              bVar1 = *(byte *)((int)pfVar24 + 0x116);
              bVar2 = *(byte *)((int)pfVar24 + 0x117);
              uVar3 = *(undefined1 *)((int)pfVar24 + 0x115);
              uVar4 = *(undefined1 *)(pfVar24 + 0x45);
              bVar7 = *(byte *)((int)pfVar24 + 0x11a);
              dVar60 = (double)(float)((double)*pfVar24 * dVar52);
              bVar8 = *(byte *)((int)pfVar24 + 0x11b);
              uVar5 = *(undefined1 *)((int)pfVar24 + 0x119);
              uVar6 = *(undefined1 *)(pfVar24 + 0x46);
              uVar32 = MB_randRangeFloat(pfVar24[0x43],pfVar24[0x44]);
              iVar51 = MB_randRange
                                 (*(undefined2 *)(pfVar24 + 0x47),
                                  *(undefined2 *)((int)pfVar24 + 0x11e));
              puVar26[0x78] = (longlong)iVar51;
              puVar26[0x78] =
                   (longlong)
                   (int)(animationSpeed * (float)((double)(longlong)puVar26[0x78] + dVar52));
              dVar54 = (double)MB_randRangeFloat((float)dVar58,(float)dVar56);
              dVar54 = (double)MB_randRangeFloat
                                         (-(float)(dVar54 * (double)pfVar24[0x49]),
                                          (float)(dVar54 * (double)pfVar24[0x49]));
              dVar55 = (double)cosf((float)(dVar54 * dVar57));
              dVar59 = (double)(float)SQRT(dVar55);
              FUN_005e7f98(-(double)(float)(dVar59 * (double)pfVar24[0x4c] + (double)pfVar24[0x4b]),
                           uVar29 - 0x330,uVar29 - 0x3f0);
              FUN_005e7f98((double)(float)(dVar60 * dVar54),uVar29 - 0x340,uVar29 - 0x400);
              fVar74 = *(float *)(param_1 + 0x14);
              fVar9 = *(float *)(param_1 + 0x18);
              *(float *)(puVar26 + 0x36) =
                   *(float *)(puVar26 + 0x36) + *(float *)(param_1 + 0x10) +
                   *(float *)(puVar26 + 0x38);
              *(float *)((int)puVar26 + 0x1b4) =
                   *(float *)((int)puVar26 + 0x1b4) + fVar74 + *(float *)((int)puVar26 + 0x1c4);
              *(float *)(puVar26 + 0x37) =
                   *(float *)(puVar26 + 0x37) + fVar9 + *(float *)(puVar26 + 0x39);
              dVar54 = (double)MB_randRangeFloat(-pfVar24[0x41],pfVar24[0x41]);
              *(float *)(puVar26 + 0x34) = (float)(dVar54 * (double)DAT_0071f408);
              dVar54 = (double)MB_randRangeFloat(-pfVar24[0x41],pfVar24[0x41]);
              *(float *)((int)puVar26 + 0x1a4) = (float)(dVar54 * (double)DAT_0071f408);
              dVar54 = (double)MB_randRangeFloat((float)dVar53,pfVar24[0x42]);
              dVar55 = (double)DAT_0071f408;
              *(float *)(puVar26 + 0x35) = (float)(dVar54 * dVar55);
              fVar74 = (float)(dVar59 * (double)pfVar24[0x4a] +
                              (double)(float)(dVar56 - (double)pfVar24[0x4a]));
              *(float *)(puVar26 + 0x34) = *(float *)(puVar26 + 0x34) * fVar74;
              *(float *)((int)puVar26 + 0x1a4) = *(float *)((int)puVar26 + 0x1a4) * fVar74;
              *(float *)(puVar26 + 0x35) = (float)(dVar54 * dVar55) * fVar74;
              SpawnPart_22
                        (uVar32,uVar29 - 0x340,uVar29 - 0x350,
                         (uint)bVar2 << 0x18 | (uint)bVar1 << 0x10 | (uint)CONCAT11(uVar3,uVar4),
                         (uint)bVar8 << 0x18 | (uint)bVar7 << 0x10 | (uint)CONCAT11(uVar5,uVar6));
              uVar38 = uVar38 + 1;
            } while ((int)uVar38 < (int)(uint)*(byte *)(pfVar24 + 0x48));
          }
        }
        dVar52 = (double)*(float *)(puVar26 + 0x6e);
        if (*(char *)((int)pfVar24 + 0x13b) != -1) {
          iVar51 = (int)((longlong)*(char *)((int)pfVar24 + 0x13b) << 5);
          fVar74 = pfVar24[0x51] - *(float *)((int)&PointLights[0].pos.y + iVar51);
          fVar9 = pfVar24[0x50] - *(float *)((int)&PointLights[0].pos.x + iVar51);
          fVar10 = pfVar24[0x52] - *(float *)((int)&PointLights[0].pos.z + iVar51);
          if (pfVar24[0x4f] * DAT_0071f408 <=
              SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar74 * fVar74)) {
            *(float *)(puVar26 + 0x3e) = fVar9;
            fVar74 = DAT_0071f408;
            *(float *)((int)puVar26 + 500) =
                 pfVar24[0x51] - *(float *)((int)&PointLights[0].pos.y + iVar51);
            *(float *)(puVar26 + 0x3f) =
                 pfVar24[0x52] - *(float *)((int)&PointLights[0].pos.z + iVar51);
            *(float *)((int)puVar26 + 0x1fc) = pfVar24[0x53];
            FUN_005e7f98((double)(pfVar24[0x4f] * fVar74),uVar29 - 0x300,uVar29 - 0x300);
            fVar74 = *(float *)((int)&PointLights[0].pos.y + iVar51);
            fVar9 = *(float *)((int)&PointLights[0].pos.z + iVar51);
            *(float *)((int)&PointLights[0].pos.x + iVar51) =
                 *(float *)((int)&PointLights[0].pos.x + iVar51) + *(float *)(puVar26 + 0x3e);
            *(float *)((int)&PointLights[0].pos.y + iVar51) =
                 fVar74 + *(float *)((int)puVar26 + 500);
            *(float *)((int)&PointLights[0].pos.z + iVar51) = fVar9 + *(float *)(puVar26 + 0x3f);
            dVar52 = (double)FastIntToDouble(*(undefined1 *)((int)pfVar24 + 0x137));
            *(float *)((int)&PointLights[0].pos.w + iVar51) = (float)dVar52;
          }
          else {
            bVar1 = *(byte *)((int)pfVar24 + 0x139);
            puVar26[0x78] = (longlong)(int)-(uint)bVar1;
            uVar45 = puVar26[0x78];
            puVar26[0x78] = (ulonglong)bVar1;
            dVar56 = (double)MB_randRangeFloat
                                       ((float)(longlong)uVar45,(float)(longlong)puVar26[0x78]);
            bVar1 = *(byte *)((int)pfVar24 + 0x13a);
            puVar26[0x78] = (longlong)(int)-(uint)bVar1;
            dVar53 = (double)(float)((double)(float)(dVar56 + (double)*pfVar24) * dVar52);
            uVar45 = puVar26[0x78];
            puVar26[0x78] = (ulonglong)bVar1;
            dVar56 = (double)MB_randRangeFloat
                                       ((float)(longlong)uVar45,(float)(longlong)puVar26[0x78]);
            dVar52 = (double)(float)((double)(float)(dVar56 + (double)pfVar24[1]) * dVar52);
            FUN_005e7f98(dVar53,(double)(float)(dVar56 + (double)pfVar24[1]),uVar29 - 800,
                         uVar29 - 0x400);
            FUN_005e7f98(-dVar52,uVar29 - 0x310,uVar29 - 0x3f0);
            fVar74 = *(float *)(puVar26 + 0x3a);
            fVar9 = *(float *)(puVar26 + 0x3c);
            pfVar24[0x50] = fVar74 + fVar9;
            fVar12 = *(float *)((int)puVar26 + 0x1d4) + *(float *)((int)puVar26 + 0x1e4);
            pfVar24[0x51] = fVar12;
            fVar10 = *(float *)(puVar26 + 0x3b);
            fVar11 = *(float *)(puVar26 + 0x3d);
            pfVar24[0x52] = fVar10 + fVar11;
            pfVar24[0x53] = *(float *)((int)puVar26 + 0x1dc);
            fVar74 = fVar74 + fVar9 + *(float *)(puVar26 + 0x16);
            pfVar24[0x50] = fVar74;
            fVar12 = fVar12 + *(float *)((int)puVar26 + 0xb4);
            pfVar24[0x51] = fVar12;
            fVar9 = fVar10 + fVar11 + *(float *)(puVar26 + 0x17);
            pfVar24[0x52] = fVar9;
            pfVar24[0x50] = fVar74 + *(float *)(param_1 + 0x10);
            pfVar24[0x51] = fVar12 + *(float *)(param_1 + 0x14);
            pfVar24[0x52] = fVar9 + *(float *)(param_1 + 0x18);
          }
        }
        *(ushort *)((int)pfVar24 + 10) = *(ushort *)((int)pfVar24 + 10) ^ 2;
      }
    }
  }
  return;
}


// 0x040da20 (0x484 bytes)
// strings: 00657000: 'M671 texture w count = 0.0, correcting to 1.0 \n' | 00657030: 'M671 Warning: texture h count (%f) is greater than max texture tile count (8)\n' | 00657080: 'M671 texture h count = 0.0, correcting to 1.0 \n' | 006570b0: 'M671 Warning: texture w count (%f) is greater than max texture tile count (8)\n'

/* Moby 671 */

void UpdateMoby_671(MobyInstance *moby)

{
  float fVar1;
  float *pfVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  undefined1 uVar8;
  float *pfVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  GPiece<32> local_70;
  
  if (moby != (MobyInstance *)0x0) {
    pfVar2 = (float *)moby->pVar;
    bVar6 = false;
    if (pfVar2 != (float *)0x0) {
      if (moby->state == '\0') {
        *(undefined1 *)((int)pfVar2 + 0x13b) = 0xff;
        pfVar2[0x50] = (moby->pos).x;
        fVar1 = (moby->pos).y;
        pfVar2[0x3e] = (float)(uint)*(byte *)((int)pfVar2 + 0xf3);
        pfVar2[0x51] = fVar1;
        pfVar2[0x52] = (moby->pos).z;
        pfVar2[0x53] = (moby->pos).w;
        if (pfVar2[0x1c] == 0.0) {
          printf("M671 texture w count = 0.0, correcting to 1.0 \n");
          pfVar2[0x1c] = 1.0;
        }
        else {
          uVar3 = (int)pfVar2[0x1d] >> 0x1f;
          if (0x41000000 < (int)((uVar3 >> 1 ^ (uint)pfVar2[0x1d]) - uVar3)) {
            printf("M671 Warning: texture h count (%f) is greater than max texture tile count (8)\n"
                         ,(double)pfVar2[0x1d]);
          }
        }
        if (pfVar2[0x1d] == 0.0) {
          printf("M671 texture h count = 0.0, correcting to 1.0 \n");
          pfVar2[0x1d] = 1.0;
        }
        else {
          uVar3 = (int)pfVar2[0x1c] >> 0x1f;
          if (0x41000000 < (int)((uVar3 >> 1 ^ (uint)pfVar2[0x1c]) - uVar3)) {
            printf("M671 Warning: texture w count (%f) is greater than max texture tile count (8)\n"
                         ,(double)pfVar2[0x1c]);
          }
        }
        iVar7 = 0;
        dVar15 = 1.0;
        pfVar9 = pfVar2;
        do {
          dVar10 = (double)MB_randRangeFloat(pfVar2[0x22],(float)dVar15);
          pfVar9[0x24] = (float)dVar10;
          dVar10 = (double)MB_randRangeFloat(pfVar2[0x22],(float)dVar15);
          iVar7 = iVar7 + 1;
          pfVar9[0x2c] = (float)dVar10;
          pfVar9 = pfVar9 + 1;
        } while (iVar7 < 8);
        moby->state = '\x01';
      }
      fVar1 = pfVar2[1];
      if (pfVar2[1] - *pfVar2 < 0.0) {
        fVar1 = *pfVar2;
      }
      moby->scale = moby->pClass->gScale * fVar1 * 0.25;
      dVar10 = (double)FastIntToDouble(moby->drawDistance);
      fVar1 = (moby->pos).y - GameCamera.posY;
      fVar4 = (moby->pos).x - GameCamera.posX;
      fVar5 = (moby->pos).z - GameCamera.posZ;
      dVar15 = (double)(float)(dVar10 - (double)pfVar2[0x54]);
      dVar11 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar1 * fVar1);
      if (dVar15 - 0.0 < 0.0) {
        dVar15 = 0.0;
      }
      if (dVar11 <= dVar10) {
        dVar10 = 1.0;
        if (dVar15 - dVar11 < 0.0) {
          dVar10 = (double)(1.0 - (float)((double)(float)(dVar11 - dVar15) / (double)pfVar2[0x54]));
        }
      }
      else {
        bVar6 = true;
        dVar10 = 0.0;
      }
      pfVar2[0x55] = (float)dVar10;
      FastIntToDouble(*(undefined1 *)((int)pfVar2 + 0x137));
      if (((moby->enabled == '\0') &&
          (iVar7 = FastCheckBsphereInView(0x406fe00000000000,local_70), iVar7 == -1)) ||
         (bVar6)) {
        if (*(char *)((int)pfVar2 + 0x13b) != -1) {
          DeletePointLight();
          *(undefined1 *)((int)pfVar2 + 0x13b) = 0xff;
        }
      }
      else {
        RegisterMobyDraw(&PTR_M671_0040c3f0_0070dfa0,moby);
        if ((*(ushort *)((int)pfVar2 + 10) & 4) != 0) {
          dVar15 = 0.009999999776482582;
          if (*(char *)((int)pfVar2 + 0x13b) == -1) {
            dVar14 = (double)*(byte *)((int)pfVar2 + 0x137);
            dVar10 = (double)FastIntToDouble(*(undefined1 *)(pfVar2 + 0x4e));
            dVar13 = (double)(float)(dVar10 * dVar15);
            dVar10 = (double)FastIntToDouble(*(undefined1 *)(pfVar2 + 0x4d));
            dVar12 = (double)(float)((double)(float)((double)pfVar2[0x55] * dVar10) * dVar15);
            dVar10 = (double)FastIntToDouble(*(undefined1 *)((int)pfVar2 + 0x135));
            dVar11 = (double)(float)((double)(float)((double)pfVar2[0x55] * dVar10) * dVar15);
            dVar10 = (double)FastIntToDouble(*(undefined1 *)((int)pfVar2 + 0x136));
            uVar8 = CreatePointLight2
                              ((float)dVar14,dVar13,dVar12,dVar11,
                               (double)(float)((double)(float)((double)pfVar2[0x55] * dVar10) *
                                              dVar15),(Vec4 *)(pfVar2 + 0x50));
            *(undefined1 *)((int)pfVar2 + 0x13b) = uVar8;
          }
          else {
            iVar7 = (int)((longlong)*(char *)((int)pfVar2 + 0x13b) << 5);
            dVar10 = (double)FastIntToDouble(*(undefined1 *)(pfVar2 + 0x4d));
            *(float *)((int)&PointLights[0].color.x + iVar7) =
                 (float)((double)(float)((double)pfVar2[0x55] * dVar10) * dVar15);
            dVar10 = (double)FastIntToDouble(*(undefined1 *)((int)pfVar2 + 0x135));
            *(float *)((int)&PointLights[0].color.y + iVar7) =
                 (float)((double)(float)((double)pfVar2[0x55] * dVar10) * dVar15);
            dVar10 = (double)FastIntToDouble(*(undefined1 *)((int)pfVar2 + 0x136));
            *(float *)((int)&PointLights[0].color.z + iVar7) =
                 (float)((double)(float)((double)pfVar2[0x55] * dVar10) * dVar15);
          }
        }
      }
      *(ushort *)((int)pfVar2 + 10) = *(ushort *)((int)pfVar2 + 10) | 2;
    }
  }
  return;
}


