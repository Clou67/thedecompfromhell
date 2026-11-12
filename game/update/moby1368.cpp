// game/update/moby1368.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x25bcf8-0x25c7ec
#include "game/update/moby1368.h"
#include "game/collproc.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x025bcf8 (0xaf4 bytes)
// inlined: FastAtan2 @0x25bed8
// strings: 00a1000c: 'None'

/* Moby 1368 */

void UpdateMoby_1368(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  f32 fVar7;
  f32 fVar8;
  float *pfVar9;
  uint uVar10;
  undefined4 uVar11;
  ulonglong *puVar12;
  float fVar13;
  short sVar14;
  float fVar15;
  undefined2 uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  float *pfVar23;
  int iVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  longlong lVar27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar28;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar34;
  ulonglong in_f30;
  double dVar35;
  ulonglong in_f31;
  double dVar36;
  undefined8 uVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  
  lVar18 = (longlong)(int)moby;
  uVar17 = ZEXT48(&stack0x00000000);
  lVar27 = uVar17 - 0x180;
  puVar12 = (ulonglong *)lVar27;
  *puVar12 = uVar17;
  puVar12[0x32] = in_LR;
  puVar12[0x2c] = in_f28;
  puVar12[0x2d] = in_f29;
  puVar12[0x2e] = in_f30;
  puVar12[0x2f] = in_f31;
  puVar12[0x2b] = unaff_r31;
  bVar1 = moby->state;
  puVar12[0x2a] = unaff_r30;
  pfVar9 = (float *)moby->pVar;
  uVar28 = ZEXT48(pfVar9);
  puVar12[0x29] = unaff_r29;
  puVar12[0x28] = unaff_r28;
  puVar12[0x27] = unaff_r27;
  puVar12[0x26] = unaff_r26;
  if (bVar1 != 0) {
    if (1 < bVar1) {
      return;
    }
    dVar35 = (double)MB_randRangeFloat
                               (g_FrameTime * 2.0,g_FrameTime * 10.0);
    dVar30 = -3.1415927410125732;
    dVar36 = 3.1415927410125732;
    dVar34 = (double)MB_randRangeFloat(-3.1415927,3.1415927);
    dVar36 = (double)MB_randRangeFloat((float)dVar30,(float)dVar36);
    MB_SphericalToVector
              ((float)dVar35,(float)dVar34,(float)dVar36,(float *)(uVar17 - 0xd0));
    uVar37 = 0x4008000000000000;
    MB_randInt(0x4008000000000000,0xff);
    SpawnPart_60(uVar37,lVar18 + 0x10,uVar17 - 0xd0,0x60ff3020);
    iVar20 = FastDecTimerS32(uVar28 + 0x38);
    if (iVar20 == 0) {
      return;
    }
    DeleteMoby(moby);
    return;
  }
  moby->enabled = '\0';
  fVar15 = DAT_00969db4;
  fVar13 = g_heroCGPos;
  fVar2 = pfVar9[5];
  fVar3 = pfVar9[4];
  fVar4 = DAT_00969db4 - fVar2;
  fVar5 = g_heroCGPos - fVar3;
  moby->drawDistance = 0;
  dVar35 = 0.5;
  fVar6 = DAT_00969db8 - 0.5;
  if (SQRT(fVar5 * fVar5 + fVar4 * fVar4) < 8.0) {
    fVar3 = (fVar3 - fVar13) * 0.99 + fVar13;
    fVar2 = (fVar2 - fVar15) * 0.99 + fVar15;
    pfVar9[4] = fVar3;
    pfVar9[5] = fVar2;
    pfVar9[6] = (pfVar9[6] - fVar6) * 0.99 + fVar6;
  }
  fVar4 = (moby->pos).y;
  fVar5 = (moby->pos).x;
  fVar13 = fVar4 - fVar2;
  fVar6 = fVar5 - fVar3;
  if (4.0 < SQRT(fVar6 * fVar6 + fVar13 * fVar13)) {
    fVar3 = fVar3 - fVar5;
    fVar2 = fVar2 - fVar4;
    fVar5 = ABS(fVar3);
    fVar4 = ABS(fVar2);
    *(float *)(puVar12 + 0x1e) = fVar3;
    *(float *)((int)puVar12 + 0xf4) = fVar2;
    *(float *)(puVar12 + 0x1f) = fVar5 - fVar4;
    dVar34 = 0.0;
    fVar2 = (moby->rotation).z;
    dVar36 = 0.7853981852531433;
    uVar26 = (ulonglong)(*(uint *)(puVar12 + 0x1e) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar12 + 0x1f) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar12 + 0xf4) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)(puVar12 + 0x1e));
    if (*(float *)(puVar12 + 0x1f) - 0.0 < 0.0) {
      fVar3 = fVar4;
    }
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
    fVar6 = ABS(*(float *)((int)puVar12 + 0xf4));
    if (*(float *)(puVar12 + 0x1f) - 0.0 < 0.0) {
      fVar6 = fVar5;
    }
    fVar5 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
    dVar30 = dVar34;
    if (0.0 < fVar3) {
      lVar19 = uVar17 - 0x170;
      lVar25 = uVar17 - 0x74;
      lVar22 = uVar17 - 0x84;
      lVar29 = 2;
      fVar3 = (fVar6 - fVar3) / (fVar6 + fVar3);
      fVar6 = fVar3 * fVar3;
      *(float *)(puVar12 + 0x21) = fVar3;
      *(float *)(puVar12 + 0x20) = fVar3;
      *(float *)((int)puVar12 + 0x104) = fVar3;
      *(float *)((int)puVar12 + 0xfc) = fVar3;
      fVar3 = fVar6 * fVar6;
      *(float *)(puVar12 + 0x20) = *(float *)(puVar12 + 0x20) * fVar6;
      *(float *)((int)puVar12 + 0x104) = *(float *)((int)puVar12 + 0x104) * fVar3;
      *(float *)(puVar12 + 0x21) = *(float *)(puVar12 + 0x21) * fVar3 * fVar6;
      do {
        *(float *)((int)lVar19 + 0xfc) = *(float *)((int)lVar19 + 0xec) * fVar3 * fVar3;
        iVar20 = (int)lVar22;
        lVar22 = lVar22 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar3 * fVar3;
        lVar25 = lVar25 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar29 = 4;
      lVar25 = uVar17 - 0x84;
      pfVar23 = (float *)&DAT_007358e0;
      lVar19 = lVar27;
      lVar22 = lVar25;
      do {
        fVar3 = *pfVar23;
        fVar6 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar19 + 0xfc) = *(float *)((int)lVar19 + 0xfc) * fVar3;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
        lVar22 = lVar22 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar19 = 2;
      do {
        iVar20 = (int)lVar27;
        iVar24 = (int)lVar25;
        lVar27 = lVar27 + 0x10;
        lVar25 = lVar25 + 0x10;
        dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar20 + 0xfc)) +
                          *(float *)(iVar24 + 4) + *(float *)(iVar24 + 8) + *(float *)(iVar24 + 0xc)
                         );
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar4 + fVar5);
    }
    dVar30 = (double)FastSubRots(fVar2,(float)dVar30);
    if (dVar30 < dVar36) {
      fVar3 = pfVar9[5] - (moby->pos).y;
      fVar4 = pfVar9[4] - (moby->pos).x;
      fVar5 = pfVar9[6] - (moby->pos).z;
      pfVar9[3] = pfVar9[7];
      dVar30 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      fVar2 = (float)((double)pfVar9[0x10] / dVar30);
      dVar36 = dVar34;
      if (dVar34 - dVar30 < 0.0) {
        dVar36 = (double)(fVar4 * fVar2);
      }
      dVar31 = dVar34;
      if (dVar34 - dVar30 < 0.0) {
        dVar31 = (double)(fVar3 * fVar2);
      }
      dVar32 = dVar34;
      if (dVar34 - dVar30 < 0.0) {
        dVar32 = (double)(fVar5 * fVar2);
      }
      if (dVar30 - dVar34 < 0.0) {
        dVar36 = (double)(fVar4 * fVar2);
      }
      if (dVar30 - dVar34 < 0.0) {
        dVar31 = (double)(fVar3 * fVar2);
      }
      if (dVar30 - dVar34 < 0.0) {
        dVar32 = (double)(fVar5 * fVar2);
      }
      *pfVar9 = (float)dVar36;
      pfVar9[1] = (float)dVar31;
      pfVar9[2] = (float)dVar32;
    }
  }
  fVar3 = *pfVar9;
  dVar34 = (double)(moby->pos).x;
  fVar2 = (float)(dVar34 + (double)fVar3);
  dVar36 = (double)fVar2;
  fVar4 = pfVar9[1];
  fVar5 = pfVar9[2];
  dVar31 = (double)(moby->pos).y;
  dVar32 = (double)(moby->pos).z;
  *(float *)(puVar12 + 0x10) = fVar2;
  fVar7 = (moby->pos).w;
  dVar33 = (double)(float)(dVar31 + (double)pfVar9[1]);
  lVar27 = uVar17 - 0x100;
  *(float *)((int)puVar12 + 0x84) = (float)(dVar31 + (double)pfVar9[1]);
  fVar2 = pfVar9[2];
  *(f32 *)((int)puVar12 + 0x8c) = fVar7;
  dVar30 = (double)(float)(dVar32 + (double)fVar2);
  *(float *)(puVar12 + 0x12) = (float)((double)fVar3 * -20.0 + dVar34);
  *(float *)((int)puVar12 + 0x94) = (float)((double)fVar4 * -20.0 + dVar31);
  *(float *)(puVar12 + 0x13) = (float)((double)fVar5 * -20.0 + dVar32);
  *(f32 *)((int)puVar12 + 0x9c) = fVar7;
  *(float *)(puVar12 + 0x11) = (float)(dVar32 + (double)fVar2);
  *(f32 *)((int)puVar12 + 0xac) = fVar7;
  *(float *)(puVar12 + 0x14) = (float)((double)(float)(dVar34 - dVar36) * dVar35 + dVar36);
  *(float *)((int)puVar12 + 0xa4) = (float)((double)(float)(dVar31 - dVar33) * dVar35 + dVar33);
  *(float *)(puVar12 + 0x15) = (float)((double)(float)(dVar32 - dVar30) * dVar35 + dVar30);
  uVar26 = (longlong)(int)pfVar9[0xe] + -0x3c >> 0x3f & (longlong)(0x3c - (int)pfVar9[0xe] >> 2);
  SpawnPart_80(lVar27,1,uVar26);
  SpawnPart_80(uVar17 - 0xe0,1,uVar26);
  SpawnPart_80(lVar27,0,uVar26);
  *(float *)(puVar12 + 0x13) = *(float *)(puVar12 + 0x13) + 0.25;
  uVar37 = 0x4018000000000000;
  SetCollDamIn(0x4018000000000000,uVar17 - 0xc0,lVar18,1);
  *(MOBY_OCLASSES *)((int)puVar12 + 0xda) = moby->oClass;
  fVar7 = *(f32 *)((int)puVar12 + 0x84);
  (moby->pos).x = *(f32 *)(puVar12 + 0x10);
  fVar8 = *(f32 *)(puVar12 + 0x11);
  (moby->pos).y = fVar7;
  fVar7 = *(f32 *)((int)puVar12 + 0x8c);
  (moby->pos).z = fVar8;
  (moby->pos).w = fVar7;
  g_CollOutput.pMoby = (MobyInstance *)0x0;
  iVar20 = CollLine(uVar17 - 0xf0,lVar27,0,lVar18,uVar17 - 0xc0);
  if ((iVar20 != 0) || (iVar20 = CollSphere(dVar35,lVar18 + 0x10), iVar20 != 0)) {
    if ((g_CollOutput.pMoby != (MobyInstance *)0x0) &&
       (g_CollOutput.pMoby != (MobyInstance *)pfVar9[0xf])) {
      if (((g_onMagnerail != 0) && (g_CollOutput.pMoby == g_heroMobyPtr)) &&
         (g_HelpFlags.piece<1112,2>() == 0)) {
        g_HelpFlags[0x458] = '\0';
        g_HelpFlags[0x459] = '\x01';
        puVar12[0x24] = (longlong)g_GameFrameCount;
        uVar16 = g_HelpFlags.piece<1114,2>();
        puVar12[0x24] =
             (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar12[0x24] + dVar35));
        iVar20 = *(int *)((int)puVar12 + 0x124);
        if ((int)(uint)(ushort)uVar16 < iVar20 / 600) {
          sVar14 = (short)(iVar20 >> 0x1f);
          g_HelpFlags.piece<1114,2>() =
               ((short)(iVar20 / 600) + sVar14) -
               ((short)((short)(iVar20 / 0x2580000) + sVar14) >> 0xf);
        }
        g_HelpFlags.piece<1116,4>() =
             g_HelpFlags.piece<1116,4>() | 1 << (Level & 0x3f) | 0x80000000;
      }
      (moby->pos).x = g_CollOutput.ip.x;
      (moby->pos).y = g_CollOutput.ip.y;
      (moby->pos).z = g_CollOutput.ip.z;
      (moby->pos).w = g_CollOutput.ip.w;
      puVar12[0xe] = 0;
      DamageSphereAtPos(0x3fe8000000000000,uVar37,0,lVar18,lVar18 + 0x10,&DAT_0025bcb0,1);
      if (((g_onMagnerail != 0) && (g_CollOutput.pMoby == g_heroMobyPtr)) &&
         (g_HelpFlags.piece<1112,2>() == 0)) {
        g_HelpFlags[0x458] = '\0';
        g_HelpFlags[0x459] = '\x01';
        puVar12[0x24] = (longlong)g_GameFrameCount;
        uVar16 = g_HelpFlags.piece<1114,2>();
        puVar12[0x24] =
             (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar12[0x24] + dVar35));
        iVar20 = *(int *)((int)puVar12 + 0x124);
        if ((int)(uint)(ushort)uVar16 < iVar20 / 600) {
          sVar14 = (short)(iVar20 >> 0x1f);
          g_HelpFlags.piece<1114,2>() =
               ((short)(iVar20 / 600) + sVar14) -
               ((short)((short)(iVar20 / 0x2580000) + sVar14) >> 0xf);
        }
        g_HelpFlags.piece<1116,4>() =
             g_HelpFlags.piece<1116,4>() | 1 << (Level & 0x3f) | 0x80000000;
      }
      auVar38 = ZEXT416(0xffffffff);
      auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
      auVar39 = vectorShiftLeftIntegerWord(auVar38,auVar38);
      auVar38 = loadVectorLeftIndexed(0x28,0x25bcb0);
      auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar38 = vectorMultiplyAddFloatingPoint
                          (auVar40,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,
                           auVar39);
      auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
      auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar11 = storeVectorElementWordIndexed
                         (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x38,uVar28)
      ;
      *(undefined4 *)((uint)(pfVar9 + 0xe) & 0xfffffffc) = uVar11;
      moby->state = '\x01';
      return;
    }
    if ((g_CollOutput.pMoby == (MobyInstance *)0x0) &&
       (fVar2 = (moby->pos).y - *(float *)((int)pfVar9[0xf] + 0x14),
       fVar3 = (moby->pos).x - *(float *)((int)pfVar9[0xf] + 0x10),
       10.0 < SQRT(fVar3 * fVar3 + fVar2 * fVar2))) {
      auVar38 = ZEXT416(0xffffffff);
      auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
      (moby->pos).x = g_CollOutput.ip.x;
      (moby->pos).y = g_CollOutput.ip.y;
      auVar39 = vectorShiftLeftIntegerWord(auVar38,auVar38);
      (moby->pos).z = g_CollOutput.ip.z;
      (moby->pos).w = g_CollOutput.ip.w;
      auVar38 = loadVectorLeftIndexed(0x28,0x25bcb0);
      auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar38 = vectorMultiplyAddFloatingPoint
                          (auVar40,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,
                           auVar39);
      auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
      auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar11 = storeVectorElementWordIndexed
                         (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x38,uVar28)
      ;
      *(undefined4 *)((uint)(pfVar9 + 0xe) & 0xfffffffc) = uVar11;
      moby->state = '\x01';
      return;
    }
  }
  auVar38 = ZEXT416(0xffffffff);
  auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
  auVar39 = vectorShiftLeftIntegerWord(auVar38,auVar38);
  auVar38 = loadVectorLeftIndexed(0x30,0x25bcb0);
  auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
  fVar2 = pfVar9[0xe];
  auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar38 = vectorMultiplyAddFloatingPoint
                      (auVar40,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,auVar39
                      );
  auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
  puVar12[0x24] = (longlong)(int)(animationSpeed * 70.5);
  if (*(int *)((int)puVar12 + 0x124) < (int)fVar2) {
    fVar7 = (moby->pos).x;
    uVar10 = (int)fVar7 >> 0x1f;
    iVar20 = (uVar10 >> 1 ^ (uint)fVar7) - uVar10;
    if (((iVar20 < 0x445e8001) &&
        (fVar7 = (moby->pos).y, uVar10 = (int)fVar7 >> 0x1f,
        iVar24 = (uVar10 >> 1 ^ (uint)fVar7) - uVar10, iVar24 < 0x445e8001)) &&
       (fVar7 = (moby->pos).z, uVar10 = (int)fVar7 >> 0x1f,
       iVar21 = (uVar10 >> 1 ^ (uint)fVar7) - uVar10, iVar21 < 0x445e8001)) {
      if (((0x429fffff < iVar20) && (0x429fffff < iVar20)) &&
         ((0x429fffff < iVar24 && (0x429fffff < iVar21)))) goto LAB_0025c634;
    }
    auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar11 = storeVectorElementWordIndexed
                       (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x38,uVar28);
    *(undefined4 *)((uint)(pfVar9 + 0xe) & 0xfffffffc) = uVar11;
  }
LAB_0025c634:
  iVar20 = FastDecTimerS32(uVar28 + 0x38);
  if (((iVar20 == 0) &&
      (fVar7 = (moby->pos).x, uVar10 = (int)fVar7 >> 0x1f,
      iVar20 = (uVar10 >> 1 ^ (uint)fVar7) - uVar10, iVar20 < 0x44720001)) &&
     ((fVar7 = (moby->pos).y, uVar10 = (int)fVar7 >> 0x1f,
      iVar24 = (uVar10 >> 1 ^ (uint)fVar7) - uVar10, iVar24 < 0x44720001 &&
      (fVar7 = (moby->pos).z, uVar10 = (int)fVar7 >> 0x1f,
      iVar21 = (uVar10 >> 1 ^ (uint)fVar7) - uVar10, iVar21 < 0x44720001)))) {
    if ((((0x411fffff < iVar20) && (0x411fffff < iVar20)) && (0x411fffff < iVar24)) &&
       (0x411fffff < iVar21)) {
      return;
    }
  }
  DeleteMoby(moby);
  return;
}


