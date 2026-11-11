// game/update/moby658.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x407868-0x407eec
#include <math.h>
#include "game/update/moby658.h"
#include "game/hero.h"
#include "game/lights.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x0407868 (0x684 bytes)
/* Moby 658 */

void UpdateMoby_658(MobyInstance *moby)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  f32 fVar8;
  float *pfVar9;
  float fVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined1 uVar14;
  byte bVar15;
  float *pfVar16;
  ulonglong uVar17;
  undefined8 in_LR;
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
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<32> local_a0;
  
  if (moby != (MobyInstance *)0x0) {
    pfVar9 = (float *)moby->pVar;
    uVar17 = ZEXT48(pfVar9);
    if (pfVar9 != (float *)0x0) {
      if ((*(short *)(pfVar9 + 10) == -1) ||
         (iVar12 = FastDecTimerS16(uVar17 + 0x28), iVar12 == 0)) {
        bVar15 = moby->state;
        if (bVar15 < 2) {
          if (bVar15 == 0) {
            fVar4 = (moby->pos).x;
            auVar30 = ZEXT416(0xfffffff8);
            moby->updateDistance = -1;
            pfVar9[4] = fVar4;
            pfVar9[5] = (moby->pos).y;
            pfVar9[6] = (moby->pos).z;
            fVar4 = (moby->pos).w;
            pfVar9[3] = pfVar9[9];
            pfVar9[7] = fVar4;
            *(undefined1 *)((int)pfVar9 + 0x2e) = 0xff;
            auVar31 = loadVectorLeftIndexed(0x2f,uVar17);
            auVar30 = vectorShiftRightWord
                                (auVar31,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 |
                                         auVar30 << 0x60);
            if (pfVar9[8] != -NAN) {
              pfVar9[0xd] = (float)(g_MobyInstance + (int)pfVar9[8]);
            }
            auVar31 = vectorConvertFromSignedFixedPointWord(auVar30,0);
            auVar30 = ZEXT416(0xffffffff);
            auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
            auVar32 = vectorShiftLeftIntegerWord(auVar30,auVar30);
            auVar30 = loadVectorLeftIndexed(in_LR,0x407850);
            auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar30 = vectorAddFloatingPoint
                                (auVar31,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 |
                                         auVar30 << 0x60);
            auVar30 = vectorMultiplyAddFloatingPoint(auVar33,auVar30,auVar32);
            auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
            auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar11 = storeVectorElementWordIndexed
                               (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0x30,
                                uVar17);
            *(undefined4 *)((uint)(pfVar9 + 0xc) & 0xfffffffc) = uVar11;
            *(undefined1 *)((int)pfVar9 + 0x2d) = 0;
            moby->state = '\x01';
          }
          else {
            iVar12 = FastDecTimerS32(uVar17 + 0x30);
            if (iVar12 != 0) {
              moby->state = '\x02';
            }
          }
        }
        else if (bVar15 < 3) {
          bVar15 = *(byte *)((int)pfVar9 + 0x2d);
          dVar18 = (double)FastIntToDouble
                                     (*(undefined1 *)((int)pfVar9 + (uint)bVar15 * 5 + 0x38));
          dVar26 = 0.009999999776482582;
          dVar29 = (double)(float)(dVar18 * 0.009999999776482582);
          dVar18 = (double)FastIntToDouble
                                     (*(undefined1 *)((int)pfVar9 + (uint)bVar15 * 5 + 0x39));
          dVar28 = (double)(float)(dVar18 * dVar26);
          dVar18 = (double)FastIntToDouble
                                     (*(undefined1 *)((int)pfVar9 + (uint)bVar15 * 5 + 0x3a));
          dVar27 = (double)(float)(dVar18 * dVar26);
          dVar18 = (double)FastIntToDouble
                                     (*(undefined1 *)((int)pfVar9 + (uint)bVar15 * 5 + 0x3b));
          iVar12 = (int)(animationSpeed *
                        ((float)*(byte *)((int)pfVar9 + (uint)bVar15 * 5 + 0x3c) + 0.5));
          dVar19 = (double)FastIntToDouble(pfVar9[0xc]);
          dVar20 = (double)FastIntToDouble(iVar12);
          dVar19 = (double)(float)(dVar19 / dVar20);
          pfVar16 = (float *)((int)pfVar9 + (uint)bVar15 * 5 + 0x3d);
          if (((uint)*(byte *)(pfVar9 + 0xb) < *(byte *)((int)pfVar9 + 0x2d) + 1) &&
             (pfVar16 = (float *)((int)pfVar9 + (uint)bVar15 * 5 + 0x38),
             ((uint)pfVar9[9] & 0x4000) != 0)) {
            pfVar16 = pfVar9 + 0xe;
          }
          dVar20 = (double)FastIntToDouble(*(undefined1 *)pfVar16);
          dVar21 = (double)FastIntToDouble(*(undefined1 *)((int)pfVar16 + 1));
          dVar22 = (double)FastIntToDouble(*(undefined1 *)((int)pfVar16 + 2));
          dVar23 = (double)FastIntToDouble(*(undefined1 *)((int)pfVar16 + 3));
          dVar18 = (double)(float)((double)(float)(dVar23 - dVar18) * dVar19 + dVar18);
          dVar29 = (double)(float)((double)(float)(dVar20 * dVar26 - dVar29) * dVar19 + dVar29);
          dVar20 = (double)(float)((double)(float)(dVar21 * dVar26 - dVar28) * dVar19 + dVar28);
          dVar19 = (double)(float)((double)(float)(dVar22 * dVar26 - dVar27) * dVar19 + dVar27);
          iVar13 = FastCheckBsphereInView(0x406fe00000000000,local_a0);
          if ((iVar13 == -1) ||
             (((fVar4 = pfVar9[9], ((uint)fVar4 & 0x1000000) != 0 && (pfVar9[0xd] != 0.0)) &&
              ((*(ushort *)((int)pfVar9[0xd] + 0x34) & 1) != 0)))) {
            if (*(char *)((int)pfVar9 + 0x2e) != -1) {
              DeletePointLight();
              *(undefined1 *)((int)pfVar9 + 0x2e) = 0xff;
            }
          }
          else {
            fVar10 = pfVar9[0xd];
            if (fVar10 == 0.0) {
              fVar5 = pfVar9[4];
              fVar6 = pfVar9[5];
              fVar7 = pfVar9[6];
              fVar10 = pfVar9[7];
            }
            else {
              fVar5 = *(float *)((int)fVar10 + 0x10);
              fVar6 = *(float *)((int)fVar10 + 0x14);
              fVar7 = *(float *)((int)fVar10 + 0x18);
              fVar10 = *(float *)((int)fVar10 + 0x1c);
            }
            dVar22 = (double)fVar5;
            dVar21 = (double)fVar6;
            dVar28 = (double)fVar7;
            dVar27 = (double)fVar10;
            if (((uint)fVar4 & 0x800000) == 0) {
              if (((uint)fVar4 & 0x100000) == 0) {
                dVar23 = (double)*pfVar9;
                dVar24 = (double)pfVar9[1];
                dVar25 = (double)pfVar9[2];
              }
              else if (((uint)fVar4 & 0x200000) == 0) {
                fVar4 = pfVar9[3];
                pfVar9[3] = 0.0;
                dVar25 = (double)MB_randRangeFloat(0.0,1.0);
                dVar23 = (double)(float)((double)*pfVar9 * dVar25);
                dVar24 = (double)(float)((double)pfVar9[1] * dVar25);
                pfVar9[3] = fVar4;
                dVar25 = (double)(float)((double)pfVar9[2] * dVar25);
              }
              else {
                dVar23 = (double)MB_randRangeFloat(-*pfVar9,*pfVar9);
                dVar24 = (double)MB_randRangeFloat(-pfVar9[1],pfVar9[1]);
                dVar25 = (double)MB_randRangeFloat(-pfVar9[2],pfVar9[2]);
              }
              if ((((uint)pfVar9[9] & 0x400000) != 0) && (fVar4 = pfVar9[0xd], fVar4 != 0.0)) {
                dVar3 = (double)*(float *)((int)fVar4 + 0xd8) * dVar24;
                dVar1 = (double)*(float *)((int)fVar4 + 0xc4) * dVar23;
                dVar2 = (double)*(float *)((int)fVar4 + 200) * dVar23;
                dVar23 = (double)(float)((double)*(float *)((int)fVar4 + 0xe0) * dVar25 +
                                        (double)(float)((double)*(float *)((int)fVar4 + 0xc0) *
                                                        dVar23 + (double)(float)((double)*(float *)(
                                                  (int)fVar4 + 0xd0) * dVar24)));
                dVar24 = (double)(float)((double)*(float *)((int)fVar4 + 0xe4) * dVar25 +
                                        (double)(float)(dVar1 + (double)(float)((double)*(float *)((
                                                  int)fVar4 + 0xd4) * dVar24)));
                dVar25 = (double)(float)((double)*(float *)((int)fVar4 + 0xe8) * dVar25 +
                                        (double)(float)(dVar2 + (double)(float)dVar3));
              }
              dVar22 = (double)(float)(dVar22 + dVar23);
              dVar21 = (double)(float)(dVar21 + dVar24);
              dVar28 = (double)(float)(dVar28 + dVar25);
            }
            (moby->pos).x = (float)dVar22;
            (moby->pos).y = (float)dVar21;
            (moby->pos).z = (float)dVar28;
            (moby->pos).w = (float)dVar27;
            if (*(char *)((int)pfVar9 + 0x2e) == -1) {
              dVar27 = (double)FastIntToDouble(*(undefined1 *)((int)pfVar9 + 0x2a));
              uVar14 = CreatePointLight2
                                 ((float)dVar18,(double)(float)(dVar27 * dVar26),dVar29,dVar20,
                                  dVar19,(Vec4 *)&moby->pos);
              *(undefined1 *)((int)pfVar9 + 0x2e) = uVar14;
            }
            else {
              iVar13 = (int)((longlong)*(char *)((int)pfVar9 + 0x2e) << 5);
              *(float *)((int)&PointLights[0].pos.x + iVar13) = (float)dVar22;
              *(f32 *)((int)&PointLights[0].pos.y + iVar13) = (moby->pos).y;
              fVar8 = (moby->pos).z;
              *(float *)((int)&PointLights[0].pos.w + iVar13) = (float)dVar18;
              *(f32 *)((int)&PointLights[0].pos.z + iVar13) = fVar8;
              *(float *)((int)&PointLights[0].color.x + iVar13) = (float)dVar29;
              *(float *)((int)&PointLights[0].color.y + iVar13) = (float)dVar20;
              *(float *)((int)&PointLights[0].color.z + iVar13) = (float)dVar19;
              dVar18 = (double)FastIntToDouble(*(undefined1 *)((int)pfVar9 + 0x2a));
              *(float *)((int)&PointLights[0].color.w + iVar13) = (float)(dVar18 * dVar26);
            }
          }
          fVar4 = pfVar9[0xc];
          pfVar9[0xc] = (float)((int)fVar4 + 1);
          if (iVar12 <= (int)fVar4 + 1) {
            bVar15 = *(char *)((int)pfVar9 + 0x2d) + 1;
            pfVar9[0xc] = 0.0;
            *(byte *)((int)pfVar9 + 0x2d) = bVar15;
            if (*(byte *)(pfVar9 + 0xb) < bVar15) {
              if (((uint)pfVar9[9] & 0x4000) == 0) {
                moby->state = '\x03';
              }
              else {
                *(undefined1 *)((int)pfVar9 + 0x2d) = 0;
              }
            }
          }
        }
        else if ((bVar15 < 4) && (*(char *)((int)pfVar9 + 0x2e) != -1)) {
          DeletePointLight();
          *(undefined1 *)((int)pfVar9 + 0x2e) = 0xff;
          DeleteMoby(moby);
        }
      }
      else {
        if (*(char *)((int)pfVar9 + 0x2e) != -1) {
          DeletePointLight();
          *(undefined1 *)((int)pfVar9 + 0x2e) = 0xff;
        }
        DeleteMoby(moby);
      }
    }
  }
  return;
}


