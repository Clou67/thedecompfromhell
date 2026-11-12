// game/update/moby1193.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x1f1f58-0x1f29dc
#include "game/update/moby1193.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x01f1f58 (0x14 bytes)
void M1193_001f1f58(void)

{
  DAT_007660a8 = 0x10000;
  return;
}


// 0x01f1fc0 (0xa1c bytes)
// strings: 001f1f70: '?&ff' (raw)

/* Moby 1193 */

void UpdateMoby_1193(MobyInstance *moby)

{
  float fVar1;
  byte bVar2;
  u8 uVar3;
  f32 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  longlong lVar15;
  int iVar19;
  undefined8 uVar16;
  int iVar20;
  short sVar22;
  uint uVar21;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> local_b0;
  float afStack_a0 [14];
  
  lVar15 = (longlong)(int)moby;
  lVar23 = lVar15 + 0x10;
  pvVar8 = moby->pVar;
  iVar19 = CollSphere(0x3fe4ccccc0000000,lVar23,&DAT_001f1f70,0,lVar15);
  if (((iVar19 != 0) && (g_CollOutput.pMoby != (MobyInstance *)0x0)) &&
     (g_CollOutput.pMoby != *(MobyInstance **)((int)pvVar8 + 0x24))) {
    moby->state = '\x03';
  }
  iVar19 = FastDecTimerS32((int)pvVar8 + 0x20);
  bVar2 = moby->state;
  fVar4 = (moby->pos).w;
  if (iVar19 == 0) {
    if (bVar2 < 2) {
      fVar5 = (moby->pos).x + *(float *)((int)pvVar8 + 0x10);
      fVar1 = (moby->pos).y + *(float *)((int)pvVar8 + 0x14);
      fVar6 = (moby->pos).z + *(float *)((int)pvVar8 + 0x18);
      fVar11 = *(float *)((int)pvVar8 + 0x18) - *(float *)((int)pvVar8 + 0x1c);
      *(float *)((int)pvVar8 + 0x18) = fVar11;
      if ((moby->state == '\x01') && (fVar11 < 0.0)) {
        moby->state = '\0';
      }
      FastDecTimerS16((int)pvVar8 + 0x28);
      if (*(short *)((int)pvVar8 + 0x28) != 0) {
        iVar19 = 0;
        dVar26 = 0.33329999446868896;
        dVar27 = 0.5;
        dVar28 = 45000.0;
        dVar29 = 5000.0;
        uVar30 = 0x3f999999a0000000;
        uVar31 = 0x3ff0000000000000;
        auVar34 = loadVectorLeftIndexed(0x20,0x1f1f70);
        auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
        do {
          Lerp_vec4((float)((double)(longlong)iVar19 * dVar26),afStack_a0);
          MB_randInt(6);
          MB_randInt(2);
          dVar24 = (double)FastIntToDouble
                                     ((int)(animationSpeed *
                                           (float)((double)(longlong)DAT_007660d0 + dVar27)));
          uVar16 = SpawnPart_23
                             (uVar30,uVar31,uVar31,
                              (double)(float)((double)(float)((double)(longlong)
                                                                      (int)*(short *)((int)pvVar8 +
                                                                                     0x28) / dVar24)
                                              * dVar28 + dVar29),afStack_a0);
          iVar20 = (int)uVar16;
          if (iVar20 != 0) {
            auVar32 = ZEXT416(0xffffffff);
            auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
            auVar32 = vectorShiftLeftIntegerWord(auVar32,auVar32);
            auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar32 = vectorMultiplyAddFloatingPoint(auVar33,auVar34,auVar32);
            auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
            auVar33 = vectorSplatHalfWord(auVar32,1);
            auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xff;
            uVar10 = storeVectorElementHalfWordIndexed(auVar33,10,uVar16);
            *(undefined2 *)(iVar20 + 10) = uVar10;
            *(undefined4 *)(iVar20 + 0x24) = 2;
            *(undefined1 *)(iVar20 + 0x2a) = 0x7f;
            uVar9 = storeVectorElementByteIndexed
                              (auVar32 | auVar32 << 8 | auVar32 << 0x10 | auVar32 << 0x18 |
                               auVar32 << 0x20 | auVar32 << 0x28 | auVar32 << 0x30 | auVar32 << 0x38
                               | auVar32 << 0x40 | auVar32 << 0x48 | auVar32 << 0x50 |
                               auVar32 << 0x58 | auVar32 << 0x60 | auVar32 << 0x68 | auVar32 << 0x70
                               | auVar32 << 0x78,0x2b,uVar16);
            *(undefined1 *)(iVar20 + 0x2b) = uVar9;
          }
          iVar19 = iVar19 + 1;
        } while (iVar19 < 3);
      }
      iVar19 = CollLine(lVar23,local_b0,0,lVar15,0);
      if (iVar19 == 0) {
        (moby->pos).x = fVar5;
        (moby->pos).y = fVar1;
        (moby->pos).z = fVar6;
        (moby->pos).w = fVar4;
      }
      else if ((g_CollOutput.pMoby == (MobyInstance *)0x0) ||
              (g_CollOutput.pMoby != *(MobyInstance **)((int)pvVar8 + 0x24))) {
        (moby->pos).x = g_CollOutput.ip.x;
        (moby->pos).y = g_CollOutput.ip.y;
        (moby->pos).z = g_CollOutput.ip.z;
        (moby->pos).w = g_CollOutput.ip.w;
      }
      else {
        (moby->pos).x = fVar5;
        (moby->pos).y = fVar1;
        (moby->pos).z = fVar6;
        (moby->pos).w = fVar4;
      }
      iVar19 = CollSphere((double)DAT_007660cc,lVar23);
      if (((iVar19 != 0) && ((moby->state == '\0' || ((moby->pos).z - g_CollOutput.ip.z < 0.0)))) &&
         ((g_CollOutput.pMoby == (MobyInstance *)0x0 ||
          (g_CollOutput.pMoby != *(MobyInstance **)((int)pvVar8 + 0x24))))) {
        dVar27 = 0.0;
        fVar1 = SQRT(g_CollOutput.normal.z * g_CollOutput.normal.z +
                     g_CollOutput.normal.x * g_CollOutput.normal.x +
                     g_CollOutput.normal.y * g_CollOutput.normal.y);
        fVar5 = DAT_007660cc / fVar1;
        dVar26 = dVar27;
        if (0.0 - fVar1 < 0.0) {
          dVar26 = (double)(g_CollOutput.normal.x * fVar5);
        }
        dVar28 = dVar27;
        if (0.0 - fVar1 < 0.0) {
          dVar28 = (double)(g_CollOutput.normal.y * fVar5);
        }
        dVar29 = dVar27;
        if (0.0 - fVar1 < 0.0) {
          dVar29 = (double)(g_CollOutput.normal.z * fVar5);
        }
        if (fVar1 - 0.0 < 0.0) {
          dVar26 = (double)(g_CollOutput.normal.x * fVar5);
        }
        if (fVar1 - 0.0 < 0.0) {
          dVar28 = (double)(g_CollOutput.normal.y * fVar5);
        }
        if (fVar1 - 0.0 < 0.0) {
          dVar29 = (double)(g_CollOutput.normal.z * fVar5);
        }
        (moby->pos).x = (float)((double)g_CollOutput.ip.x + dVar26);
        (moby->pos).y = (float)((double)g_CollOutput.ip.y + dVar28);
        (moby->pos).z = (float)((double)g_CollOutput.ip.z + dVar29);
        (moby->pos).w = g_CollOutput.ip.w;
        FastVecReflect((int)pvVar8 + 0x10,(int)pvVar8 + 0x10,0xa10980);
        PlayMobySound(1,0,moby);
        sVar22 = *(short *)((int)pvVar8 + 0x2a);
        if (moby->state == '\0') {
          moby->state = '\x01';
          sVar22 = *(short *)((int)pvVar8 + 0x2a) + 1;
          *(short *)((int)pvVar8 + 0x2a) = sVar22;
          if (sVar22 == 1) {
            fVar5 = *(float *)((int)pvVar8 + 0x14);
            fVar6 = *(float *)((int)pvVar8 + 0x10);
            dVar24 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5);
            fVar1 = (float)((double)(g_FrameTime * DAT_007660e8) / dVar24);
            dVar29 = (double)(fVar6 * fVar1);
            dVar28 = (double)(fVar5 * fVar1);
            dVar26 = dVar27;
            if (dVar27 - dVar24 < 0.0) {
              dVar26 = dVar29;
            }
            dVar25 = dVar27;
            if (dVar27 - dVar24 < 0.0) {
              dVar25 = dVar28;
            }
            if (dVar24 - dVar27 < 0.0) {
              dVar26 = dVar29;
            }
            if (dVar24 - dVar27 < 0.0) {
              dVar25 = dVar28;
            }
            *(float *)((int)pvVar8 + 0x10) = (float)dVar26;
            *(float *)((int)pvVar8 + 0x14) = (float)dVar25;
            *(float *)((int)pvVar8 + 0x18) = *(float *)((int)pvVar8 + 0x18) * DAT_007660e4;
          }
          else {
            fVar1 = *(float *)((int)pvVar8 + 0x14);
            fVar5 = *(float *)((int)pvVar8 + 0x10);
            fVar6 = fVar1 * DAT_007660e4;
            fVar11 = fVar5 * DAT_007660e4;
            fVar12 = g_FrameTime * DAT_007660d4;
            fVar7 = *(float *)((int)pvVar8 + 0x18) * DAT_007660e4;
            if ((double)fVar12 <= (double)SQRT(fVar11 * fVar11 + fVar6 * fVar6)) {
              *(float *)((int)pvVar8 + 0x10) = fVar11;
              *(float *)((int)pvVar8 + 0x14) = fVar6;
              *(float *)((int)pvVar8 + 0x18) = fVar7;
            }
            else {
              *(float *)((int)pvVar8 + 0x18) = fVar7;
              dVar24 = (double)SQRT(fVar5 * fVar5 + fVar1 * fVar1);
              fVar6 = (float)((double)fVar12 / dVar24);
              dVar29 = (double)(fVar5 * fVar6);
              dVar28 = (double)(fVar1 * fVar6);
              dVar26 = dVar27;
              if (dVar27 - dVar24 < 0.0) {
                dVar26 = dVar29;
              }
              dVar25 = dVar27;
              if (dVar27 - dVar24 < 0.0) {
                dVar25 = dVar28;
              }
              if (dVar24 - dVar27 < 0.0) {
                dVar26 = dVar29;
              }
              if (dVar24 - dVar27 < 0.0) {
                dVar25 = dVar28;
              }
              *(float *)((int)pvVar8 + 0x10) = (float)dVar26;
              *(float *)((int)pvVar8 + 0x14) = (float)dVar25;
            }
          }
        }
        if (3 < sVar22) {
          moby->state = '\x02';
          fVar1 = *(float *)((int)pvVar8 + 0x14);
          fVar5 = *(float *)((int)pvVar8 + 0x10);
          dVar29 = (double)SQRT(fVar5 * fVar5 + fVar1 * fVar1);
          dVar26 = (double)(float)(dVar29 * (double)DAT_007660e4);
          *(float *)((int)pvVar8 + 0x1c) = (float)(dVar29 * (double)DAT_007660e4);
          dVar28 = (double)(g_FrameTime * DAT_007660d4);
          if (dVar26 < dVar28) {
            *(float *)((int)pvVar8 + 0x1c) = g_FrameTime * DAT_007660d4;
            dVar26 = dVar28;
          }
          *(undefined4 *)((int)pvVar8 + 0x18) = 0;
          dVar24 = (double)(fVar5 * (float)(dVar26 / dVar29));
          dVar28 = (double)(fVar1 * (float)(dVar26 / dVar29));
          dVar26 = dVar27;
          if (dVar27 - dVar29 < 0.0) {
            dVar26 = dVar24;
          }
          dVar25 = dVar27;
          if (dVar27 - dVar29 < 0.0) {
            dVar25 = dVar28;
          }
          if (dVar29 - dVar27 < 0.0) {
            dVar26 = dVar24;
          }
          if (dVar29 - dVar27 < 0.0) {
            dVar25 = dVar28;
          }
          *(float *)((int)pvVar8 + 0x10) = (float)dVar26;
          *(float *)((int)pvVar8 + 0x14) = (float)dVar25;
          dVar26 = (double)FastIntToDouble(*(undefined4 *)((int)pvVar8 + 0x20));
          *(float *)((int)pvVar8 + 0x2c) = (float)(1.0 / dVar26);
        }
      }
    }
    else if (bVar2 < 3) {
      dVar26 = (double)((float)(longlong)*(int *)((int)pvVar8 + 0x20) *
                       *(float *)((int)pvVar8 + 0x2c));
      uVar21 = FastDoubleToInt((double)(float)(dVar26 * -188.0 + 255.0));
      uVar17 = FastDoubleToInt((double)(float)(dVar26 * 230.0));
      uVar18 = FastDoubleToInt((double)(float)(dVar26 * 132.0));
      moby->glowRgba =
           (uint)((uVar17 & 0xffffffff) << 8) | uVar21 | (uint)((uVar18 & 0xffffffff) << 0x10) |
           0xff000000;
      fVar1 = *(float *)((int)pvVar8 + 0x10);
      fVar5 = *(float *)((int)pvVar8 + 0x14);
      fVar6 = *(float *)((int)pvVar8 + 0x18);
      fVar11 = *(float *)((int)pvVar8 + 0x1c) * ((DAT_007660d8 - 1.0) * DAT_0071f408 + 1.0);
      *(float *)((int)pvVar8 + 0x1c) = fVar11;
      fVar7 = g_FrameTime * DAT_007660d4;
      if (fVar11 < fVar7) {
        *(float *)((int)pvVar8 + 0x1c) = fVar7;
        fVar11 = fVar7;
      }
      fVar7 = 0.0;
      fVar14 = SQRT(fVar6 * fVar6 + fVar1 * fVar1 + fVar5 * fVar5);
      fVar11 = fVar11 / fVar14;
      fVar12 = fVar7;
      if (0.0 - fVar14 < 0.0) {
        fVar12 = fVar5 * fVar11;
      }
      fVar13 = fVar7;
      if (0.0 - fVar14 < 0.0) {
        fVar13 = fVar1 * fVar11;
      }
      if (0.0 - fVar14 < 0.0) {
        fVar7 = fVar6 * fVar11;
      }
      if (fVar14 - 0.0 < 0.0) {
        fVar12 = fVar5 * fVar11;
      }
      if (fVar14 - 0.0 < 0.0) {
        fVar13 = fVar1 * fVar11;
      }
      if (fVar14 - 0.0 < 0.0) {
        fVar7 = fVar6 * fVar11;
      }
      *(float *)((int)pvVar8 + 0x14) = fVar12;
      *(float *)((int)pvVar8 + 0x10) = fVar13;
      *(float *)((int)pvVar8 + 0x18) = fVar7;
      (moby->pos).x = (moby->pos).x + fVar13;
      (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar8 + 0x14);
      (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar8 + 0x18);
    }
    else if (bVar2 < 4) goto LAB_001f2880;
    uVar3 = moby->state;
    if ((uVar3 == '\0') || (uVar3 == '\x01')) {
      fVar1 = SQRT(*(float *)((int)pvVar8 + 0x10) * *(float *)((int)pvVar8 + 0x10) +
                   *(float *)((int)pvVar8 + 0x14) * *(float *)((int)pvVar8 + 0x14));
    }
    else {
      if (uVar3 != '\x02') {
        return;
      }
      fVar1 = *(float *)((int)pvVar8 + 0x1c);
    }
    fVar5 = g_FrameTime * 0.2;
    fVar6 = g_FrameTime * 6.0;
    if (fVar1 - fVar5 < 0.0) {
      fVar1 = fVar5;
    }
    if (fVar6 - fVar1 < 0.0) {
      fVar1 = fVar6;
    }
    dVar26 = (double)FastWrapRot
                               ((((fVar1 - fVar5) / (fVar6 - fVar5)) * 7.0 + 1.0) * 0.017453292,
                                (moby->rotation).y);
    (moby->rotation).y = (float)dVar26;
  }
  else {
    moby->state = '\x03';
LAB_001f2880:
    MB_genericExplosion
              (0x4000000000000000,0x3ff0000000000000,0x4000000000000000,0x3ff0000000000000,
               0x4022000000000000,0x3ff0000000000000,0x402e000000000000,lVar15,(int)pvVar8 + 0x10,
               lVar23,1,0,5,2,4);
    DeleteMoby(moby);
  }
  return;
}


