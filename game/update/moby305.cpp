// game/update/moby305.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x339e00-0x33bf70
#include "game/update/moby305.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partproc.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update/moby31.h"
#include "idol/fastfunc.h"

// 0x0339e00 (0x390 bytes)
void M305_00339e00(int param_1,int param_2)

{
  undefined8 uVar1;
  undefined1 uVar4;
  int iVar2;
  int iVar3;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  GPiece<48> local_b0;
  
  iVar2 = 0;
  iVar5 = *(int *)(param_1 + 0x78);
  do {
    if (*(int *)(iVar5 + 0x2c) != 0) {
      DeletePart();
    }
    iVar2 = iVar2 + 1;
    *(undefined4 *)(iVar5 + 0x2c) = 0;
    iVar5 = iVar5 + 4;
  } while (iVar2 < 0x11);
  if (param_2 != 0) {
    iVar5 = 0;
    dVar6 = -1.0;
    dVar7 = 1.0;
    dVar8 = 3.0;
    dVar9 = 6.0;
    dVar10 = 10.5;
    dVar12 = 15.5;
    uVar14 = 0x40e1170000000000;
    do {
      MB_randRangeFloat((float)dVar6,(float)dVar7);
      MB_randRangeFloat((float)dVar6,(float)dVar7);
      MB_randRangeFloat((float)dVar6,(float)dVar7);
      MB_randRangeFloat
                ((float)((double)g_FrameTime * dVar8),
                 (float)((double)g_FrameTime * dVar9));
      uVar1 = MB_randRange
                        ((int)((double)animationSpeed * dVar10),
                         (int)((double)animationSpeed * dVar12));
      SpawnPart_27(uVar14,param_1 + 0x10,local_b0,0x7f2f4f6f,uVar1);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 5);
  }
  iVar5 = 0;
  uVar14 = 0x3ff0000000000000;
  dVar6 = 0.009999999776482582;
  dVar7 = 0.02500000037252903;
  uVar1 = 0x3fc99999a0000000;
  uVar11 = 0x3ff051eb80000000;
  uVar13 = 0x4101170000000000;
  dVar8 = 0.5;
  do {
    uVar4 = MB_randRange(0x20,0x80);
    MB_randInt(2);
    MB_randRangeFloat((float)dVar6,(float)dVar7);
    iVar2 = SpawnPart_23(uVar1,uVar14,uVar11,uVar13,param_1 + 0x10);
    if (iVar2 != 0) {
      iVar3 = MB_randRange(0x32,0x50);
      iVar3 = (int)(animationSpeed * (float)((double)(longlong)iVar3 + dVar8));
      *(undefined4 *)(iVar2 + 0x24) = 2;
      *(short *)(iVar2 + 10) = (short)iVar3;
      *(undefined1 *)(iVar2 + 0x2a) = uVar4;
      *(char *)(iVar2 + 0x2b) = (char)iVar3;
      iVar3 = MB_randInt(2);
      if (iVar3 != 0) {
        *(undefined1 *)(iVar2 + 3) = 0x44;
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 3);
  return;
}


// 0x033a1d0 (0xa04 bytes)
// inlined: FastAtan2 @0x33a79c, FastAtan2 @0x33a93c
longlong FUN_0033a1d0(double param_1,double param_2,double param_3,double param_4,f32 param_5,
                     undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  f32 *pfVar6;
  f32 fVar7;
  undefined2 uVar8;
  ulonglong *puVar9;
  MobyInstance *moby;
  undefined8 uVar10;
  int iVar14;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar15;
  ulonglong uVar16;
  float *pfVar18;
  longlong lVar17;
  longlong lVar19;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  longlong lVar20;
  ulonglong unaff_r30;
  ulonglong uVar21;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
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
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  double dVar36;
  ulonglong in_f25;
  double dVar37;
  ulonglong in_f26;
  double dVar38;
  ulonglong in_f27;
  double dVar39;
  ulonglong in_f28;
  double dVar40;
  ulonglong in_f29;
  double dVar41;
  ulonglong in_f30;
  double dVar42;
  ulonglong in_f31;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  MobyInstance *in_stack_00000074;
  
  uVar21 = ZEXT48(&stack0x00000000);
  lVar13 = uVar21 - 0x1b0;
  puVar9 = (ulonglong *)lVar13;
  *puVar9 = uVar21;
  puVar9[0x38] = in_LR;
  puVar9[0x2a] = in_f20;
  puVar9[0x2b] = in_f21;
  puVar9[0x2c] = in_f22;
  puVar9[0x2d] = in_f23;
  puVar9[0x2e] = in_f24;
  puVar9[0x2f] = in_f25;
  puVar9[0x30] = in_f26;
  puVar9[0x31] = in_f27;
  puVar9[0x32] = in_f28;
  puVar9[0x33] = in_f29;
  puVar9[0x34] = in_f30;
  puVar9[0x35] = in_f31;
  puVar9[0x28] = unaff_r30;
  puVar9[0x27] = unaff_r29;
  puVar9[0x26] = unaff_r28;
  puVar9[0x25] = unaff_r27;
  puVar9[0x29] = unaff_r31;
  puVar9[0x24] = unaff_r26;
  puVar9[0x23] = unaff_r25;
  puVar9[0x22] = unaff_r24;
  puVar9[0x21] = unaff_r23;
  _fStack00000040 = param_7;
  _fStack00000048 = param_8;
  moby = CreateMoby(0x131);
  lVar12 = (longlong)(int)moby;
  if (moby != (MobyInstance *)0x0) {
    pfVar6 = (f32 *)moby->pVar;
    pfVar6[8] = param_5;
    moby->updateDistance = '\x7f';
    moby->enabled = '\x01';
    fVar7 = DAT_00811d64;
    moby->drawDistance = 0x7f;
    uVar10 = *(undefined8 *)((int)param_5 + 0x38);
    (moby->rotation).x = fVar7;
    moby->color = (int)((ulonglong)uVar10 >> 0x20);
    moby->light = (int)uVar10;
    dVar23 = (double)FastWrapRot((float)param_4,DAT_00811d68);
    (moby->rotation).y = (float)dVar23;
    (moby->rotation).z = (float)param_3;
    (moby->pos).x = fStack00000040;
    (moby->pos).y = fStack00000044;
    (moby->pos).z = fStack00000048;
    (moby->pos).w = fStack0000004c;
    if (in_stack_00000074 == (MobyInstance *)0x0) {
      fVar1 = 0.0;
      pfVar6[3] = 0.0;
      pfVar6[1] = 0.0;
      *pfVar6 = 0.0;
    }
    else {
      *pfVar6 = (in_stack_00000074->pos).x;
      pfVar6[1] = (in_stack_00000074->pos).y;
      pfVar6[2] = (in_stack_00000074->pos).z;
      pfVar6[3] = (in_stack_00000074->pos).w;
      iVar14 = MB_GetPvarsIfMobyHasThem(in_stack_00000074);
      if (iVar14 == 0) {
        fVar1 = pfVar6[2];
        fVar2 = 0.5;
      }
      else {
        fVar1 = pfVar6[2];
        fVar2 = *(float *)(iVar14 + 0x10);
      }
      fVar1 = fVar1 + fVar2;
    }
    pfVar6[2] = fVar1;
    auVar46 = ZEXT416(0xffffffff);
    auVar44 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
    auVar46 = ZEXT416(0xfffffff8);
    auVar45 = vectorShiftLeftIntegerWord(auVar44,auVar44);
    dVar23 = 0.0;
    pfVar6[4] = 0.0;
    pfVar6[5] = 0.0;
    pfVar6[7] = (float)param_2;
    pfVar6[6] = (float)param_1;
    auVar44 = loadVectorLeftIndexed(8,0x33a190);
    auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar44 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar43 = vectorMultiplyAddFloatingPoint
                        (auVar43,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,
                         auVar45);
    auVar45 = loadVectorLeftIndexed(0xf,0x969ca8);
    auVar44 = ZEXT416(10);
    auVar46 = vectorShiftRightWord
                        (auVar45,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60);
    auVar45 = vectorMultiplyOddSignedHalfWord
                        (auVar46,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60);
    auVar46 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
    auVar43.piece<0,4>() = auVar46.piece<0,4>() + auVar45.piece<0,4>();
    auVar43.piece<8,8>() = auVar46.piece<8,8>();
    auVar43.piece<4,4>() = auVar46.piece<4,4>() + auVar45.piece<4,4>();
    auVar44.piece<0,8>() = auVar43.piece<0,8>();
    auVar44.piece<12,4>() = auVar46.piece<12,4>();
    auVar44.piece<8,4>() = auVar46.piece<8,4>() + auVar45.piece<8,4>();
    auVar46.piece<0,12>() = auVar44.piece<0,12>();
    auVar46.piece<12,4>() = auVar44.piece<12,4>() + auVar45.piece<12,4>();
    auVar46 = vectorSplatHalfWord(auVar46,1);
    uVar8 = storeVectorElementHalfWordIndexed(auVar46,0x24,ZEXT48(pfVar6));
    *(undefined2 *)(pfVar6 + 9) = uVar8;
    uVar8 = storeVectorElementHalfWordIndexed(auVar46,0x26,ZEXT48(pfVar6));
    *(undefined2 *)((int)pfVar6 + 0x26) = uVar8;
    pfVar6[10] = 0.0;
    *(undefined4 *)(puVar9 + 0xe) = *(undefined4 *)((int)param_5 + 0x10);
    *(undefined4 *)((int)puVar9 + 0x74) = *(undefined4 *)((int)param_5 + 0x14);
    uVar3 = *(undefined4 *)((int)param_5 + 0x1c);
    *(f32 *)(puVar9 + 0xf) = fStack00000048;
    *(undefined4 *)((int)puVar9 + 0x7c) = uVar3;
    iVar14 = CollLine(uVar21 - 0x140,uVar21 + 0x40 & 0xffffffff,0,param_5,0);
    if (iVar14 == 0) {
      SpawnPart_26
                ((double)DAT_00811d60,lVar12,&DAT_00810000,0x2f4f7f7f,*(undefined2 *)(pfVar6 + 9),
                 0xffffffffffffffff);
      uVar21 = 0;
      uVar11 = 0xbff8000000000000;
      uVar10 = 0x3ff0000000000000;
      dVar37 = -64.0;
      dVar36 = 128.0;
      do {
        iVar15 = SpawnPart_72(dVar23,lVar12 + 0x10,&DAT_00a15d30,1);
        iVar14 = 0;
        if (iVar15 != 0) {
          dVar38 = (double)MB_randRangeFloat(DAT_00811d48,DAT_00811d4c);
          *(float *)(iVar15 + 0xc) = (float)dVar38;
          dVar38 = (double)FastIntToDouble(uVar21);
          dVar39 = (double)FastIntToDouble(0x10);
          dVar38 = (double)MB_catmullRom
                                     (uVar11,dVar23,uVar10,dVar23,(double)(float)(dVar38 / dVar39));
          *(float *)(iVar15 + 0xc) =
               (float)((double)(float)((double)DAT_00811d50 - (double)*(float *)(iVar15 + 0xc)) *
                       dVar38 + (double)*(float *)(iVar15 + 0xc));
          uVar16 = FastDoubleToInt((double)(float)(dVar38 * dVar37 + dVar36));
          *(uint *)(iVar15 + 4) = (uint)((uVar16 & 0xffffffff) << 0x18) | 0xffffff;
          iVar14 = iVar15;
        }
        iVar15 = (int)uVar21 + 1;
        *(int *)((int)pfVar6 + (int)((uVar21 & 0xffffffff) << 2) + 0x2c) = iVar14;
        uVar21 = (ulonglong)iVar15;
      } while (iVar15 < 0x11);
    }
    else {
      lVar20 = uVar21 - 0x130;
      MB_SphericalToVector
                (g_FrameTime * 40.0,(moby->rotation).z,-(moby->rotation).y,(float *)lVar20
                );
      iVar14 = 0;
      (moby->pos).x = g_CollOutput.ip.x;
      (moby->pos).y = g_CollOutput.ip.y;
      (moby->pos).z = g_CollOutput.ip.z;
      (moby->pos).w = g_CollOutput.ip.w;
      dVar42 = -1.0;
      dVar41 = 1.0;
      dVar40 = 0.5;
      dVar39 = 3.0;
      dVar38 = 6.0;
      dVar37 = 10.5;
      dVar36 = 15.5;
      uVar10 = 0x40dd4c0000000000;
      do {
        dVar24 = (double)MB_randRangeFloat((float)dVar42,(float)dVar41);
        dVar25 = (double)MB_randRangeFloat((float)dVar42,(float)dVar41);
        dVar26 = (double)MB_randRangeFloat((float)dVar42,(float)dVar41);
        FastVecReflect(uVar21 - 0x120,lVar20,0xa10980);
        dVar29 = (double)*(float *)((int)puVar9 + 0x94);
        dVar30 = (double)*(float *)(puVar9 + 0x12);
        dVar31 = (double)*(float *)(puVar9 + 0x13);
        dVar32 = (double)SQRT((float)(dVar26 * dVar26 +
                                     (double)(float)(dVar24 * dVar24 +
                                                    (double)(float)(dVar25 * dVar25))));
        dVar28 = (double)g_FrameTime;
        dVar34 = (double)(float)((double)(float)((double)SQRT((float)(dVar31 * dVar31 +
                                                                     (double)(float)(dVar30 * dVar30
                                                                                    + (double)(float
                                                  )(dVar29 * dVar29)))) * dVar40) / dVar32);
        dVar27 = dVar23;
        if (dVar23 - dVar32 < 0.0) {
          dVar27 = (double)(float)(dVar26 * dVar34);
        }
        dVar35 = dVar23;
        if (dVar23 - dVar32 < 0.0) {
          dVar35 = (double)(float)(dVar25 * dVar34);
        }
        dVar33 = dVar23;
        if (dVar23 - dVar32 < 0.0) {
          dVar33 = (double)(float)(dVar24 * dVar34);
        }
        if (dVar32 - dVar23 < 0.0) {
          dVar27 = (double)(float)(dVar26 * dVar34);
        }
        if (dVar32 - dVar23 < 0.0) {
          dVar35 = (double)(float)(dVar25 * dVar34);
        }
        if (dVar32 - dVar23 < 0.0) {
          dVar33 = (double)(float)(dVar24 * dVar34);
        }
        *(float *)(puVar9 + 0x13) = (float)(dVar31 + dVar27);
        *(float *)((int)puVar9 + 0x94) = (float)(dVar29 + dVar35);
        *(float *)(puVar9 + 0x12) = (float)(dVar30 + dVar33);
        dVar27 = (double)MB_randRangeFloat
                                   ((float)(dVar28 * dVar39),(float)(dVar28 * dVar38));
        fVar2 = *(float *)((int)puVar9 + 0x94);
        fVar4 = *(float *)(puVar9 + 0x12);
        fVar5 = *(float *)(puVar9 + 0x13);
        dVar25 = (double)animationSpeed;
        dVar24 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar2 * fVar2);
        puVar9[0x1e] = (longlong)(int)(dVar25 * dVar37);
        puVar9[0x1e] = (longlong)(int)(dVar25 * dVar36);
        fVar1 = (float)(dVar27 / dVar24);
        dVar27 = dVar23;
        if (dVar23 - dVar24 < 0.0) {
          dVar27 = (double)(fVar4 * fVar1);
        }
        dVar25 = dVar23;
        if (dVar23 - dVar24 < 0.0) {
          dVar25 = (double)(fVar2 * fVar1);
        }
        dVar26 = dVar23;
        if (dVar23 - dVar24 < 0.0) {
          dVar26 = (double)(fVar5 * fVar1);
        }
        if (dVar24 - dVar23 < 0.0) {
          dVar27 = (double)(fVar4 * fVar1);
        }
        if (dVar24 - dVar23 < 0.0) {
          dVar25 = (double)(fVar2 * fVar1);
        }
        if (dVar24 - dVar23 < 0.0) {
          dVar26 = (double)(fVar5 * fVar1);
        }
        *(float *)(puVar9 + 0x12) = (float)dVar27;
        *(float *)((int)puVar9 + 0x94) = (float)dVar25;
        *(float *)(puVar9 + 0x13) = (float)dVar26;
        uVar11 = MB_randRange
                           (*(undefined4 *)((int)puVar9 + 0xf4),*(undefined4 *)((int)puVar9 + 0xf4))
        ;
        SpawnPart_27(uVar10,lVar12 + 0x10,uVar21 - 0x120,0x7f2f4f6f,uVar11);
        iVar14 = iVar14 + 1;
      } while (iVar14 < 5);
      if (g_goldWeaponsArray.blaster == '\0') {
        M305_00339e00(lVar12,0);
        DeleteMoby(moby);
        lVar12 = 0;
      }
      else {
        fVar7 = pfVar6[10];
        pfVar6[10] = (f32)((int)fVar7 + 1);
        if ((int)(g_goldWeaponsArray.blaster + 5) < (int)fVar7 + 1) {
          M305_00339e00(lVar12,1);
          DeleteMoby(moby);
          lVar12 = 0;
        }
        else {
          FastVecReflect(lVar20,lVar20,0xa10980);
          dVar38 = ABS((double)*(float *)(puVar9 + 0x10));
          dVar36 = ABS((double)*(float *)((int)puVar9 + 0x84));
          *(float *)(puVar9 + 0x15) = (float)(dVar38 - dVar36);
          uVar16 = (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar9 + 0x15) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1d) & 4;
          dVar37 = dVar38;
          if ((double)*(float *)(puVar9 + 0x15) - dVar23 < 0.0) {
            dVar37 = dVar36;
          }
          fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
          if ((double)*(float *)(puVar9 + 0x15) - dVar23 < 0.0) {
            dVar36 = dVar38;
          }
          fVar2 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
          dVar38 = dVar23;
          if (dVar23 < dVar37) {
            lVar20 = uVar21 - 0x1a0;
            lVar19 = uVar21 - 0xd4;
            lVar17 = uVar21 - 0xe4;
            lVar22 = 2;
            fVar4 = (float)(dVar36 - dVar37) / (float)(dVar36 + dVar37);
            fVar5 = fVar4 * fVar4;
            *(float *)(puVar9 + 0x1b) = fVar4;
            *(float *)(puVar9 + 0x1a) = fVar4;
            *(float *)((int)puVar9 + 0xd4) = fVar4;
            *(float *)((int)puVar9 + 0xcc) = fVar4;
            fVar4 = fVar5 * fVar5;
            *(float *)(puVar9 + 0x1a) = *(float *)(puVar9 + 0x1a) * fVar5;
            *(float *)((int)puVar9 + 0xd4) = *(float *)((int)puVar9 + 0xd4) * fVar4;
            *(float *)(puVar9 + 0x1b) = *(float *)(puVar9 + 0x1b) * fVar4 * fVar5;
            do {
              *(float *)((int)lVar20 + 0xcc) = *(float *)((int)lVar20 + 0xbc) * fVar4 * fVar4;
              iVar14 = (int)lVar17;
              lVar17 = lVar17 + 8;
              lVar20 = lVar20 + 8;
              *(float *)((int)lVar19 + 4) = *(float *)(iVar14 + 4) * fVar4 * fVar4;
              lVar19 = lVar19 + 8;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            lVar22 = 4;
            lVar19 = uVar21 - 0xe4;
            pfVar18 = (float *)&DAT_007358e0;
            lVar20 = lVar13;
            lVar17 = lVar19;
            do {
              fVar4 = *pfVar18;
              fVar5 = pfVar18[1];
              pfVar18 = pfVar18 + 2;
              *(float *)((int)lVar20 + 0xcc) = *(float *)((int)lVar20 + 0xcc) * fVar4;
              lVar20 = lVar20 + 8;
              *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar5;
              lVar17 = lVar17 + 8;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            lVar17 = 2;
            lVar20 = lVar13;
            dVar36 = dVar23;
            do {
              iVar14 = (int)lVar20;
              iVar15 = (int)lVar19;
              lVar20 = lVar20 + 0x10;
              lVar19 = lVar19 + 0x10;
              dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar14 + 0xcc)) +
                                *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                               *(float *)(iVar15 + 0xc));
              lVar17 = lVar17 + -1;
            } while (lVar17 != 0);
            dVar38 = (double)((float)(dVar36 + 0.7853981852531433) * fVar1 + fVar2);
          }
          (moby->rotation).z = (float)dVar38;
          dVar36 = ABS((double)*(float *)(puVar9 + 0x11));
          fVar1 = SQRT(*(float *)(puVar9 + 0x10) * *(float *)(puVar9 + 0x10) +
                       *(float *)((int)puVar9 + 0x84) * *(float *)((int)puVar9 + 0x84));
          dVar38 = ABS((double)fVar1);
          *(float *)(puVar9 + 0x14) = fVar1;
          *(float *)((int)puVar9 + 0xa4) = (float)(dVar38 - dVar36);
          uVar16 = (ulonglong)(*(uint *)(puVar9 + 0x14) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar9 + 0xa4) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1d) & 4;
          dVar37 = ABS((double)*(float *)(puVar9 + 0x14));
          if ((double)*(float *)((int)puVar9 + 0xa4) - dVar23 < 0.0) {
            dVar37 = dVar36;
          }
          fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
          if ((double)*(float *)((int)puVar9 + 0xa4) - dVar23 < 0.0) {
            dVar36 = dVar38;
          }
          fVar2 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
          if (dVar23 < dVar37) {
            lVar20 = uVar21 - 0x1a0;
            lVar19 = uVar21 - 0xf4;
            lVar17 = uVar21 - 0x104;
            lVar22 = 2;
            fVar4 = (float)(dVar36 - dVar37) / (float)(dVar36 + dVar37);
            fVar5 = fVar4 * fVar4;
            *(float *)(puVar9 + 0x17) = fVar4;
            *(float *)(puVar9 + 0x16) = fVar4;
            *(float *)((int)puVar9 + 0xb4) = fVar4;
            *(float *)((int)puVar9 + 0xac) = fVar4;
            fVar4 = fVar5 * fVar5;
            *(float *)(puVar9 + 0x16) = *(float *)(puVar9 + 0x16) * fVar5;
            *(float *)((int)puVar9 + 0xb4) = *(float *)((int)puVar9 + 0xb4) * fVar4;
            *(float *)(puVar9 + 0x17) = *(float *)(puVar9 + 0x17) * fVar4 * fVar5;
            do {
              *(float *)((int)lVar20 + 0xac) = *(float *)((int)lVar20 + 0x9c) * fVar4 * fVar4;
              iVar14 = (int)lVar17;
              lVar17 = lVar17 + 8;
              lVar20 = lVar20 + 8;
              *(float *)((int)lVar19 + 4) = *(float *)(iVar14 + 4) * fVar4 * fVar4;
              lVar19 = lVar19 + 8;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            lVar22 = 4;
            lVar19 = uVar21 - 0x104;
            pfVar18 = (float *)&DAT_007358e0;
            lVar20 = lVar13;
            lVar17 = lVar19;
            do {
              fVar4 = *pfVar18;
              fVar5 = pfVar18[1];
              pfVar18 = pfVar18 + 2;
              *(float *)((int)lVar20 + 0xac) = *(float *)((int)lVar20 + 0xac) * fVar4;
              lVar20 = lVar20 + 8;
              *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar5;
              lVar17 = lVar17 + 8;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            lVar20 = 2;
            do {
              iVar14 = (int)lVar13;
              iVar15 = (int)lVar19;
              lVar13 = lVar13 + 0x10;
              lVar19 = lVar19 + 0x10;
              dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar14 + 0xac)) +
                                *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                               *(float *)(iVar15 + 0xc));
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
            dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar1 + fVar2);
          }
          (moby->rotation).y = (float)-dVar23;
        }
      }
    }
  }
  return lVar12;
}


// 0x033ac30 (0x1340 bytes)
// inlined: FastAtan2 @0x33ae34, FastAtan2 @0x33afe8, FastRSqrt @0x33b31c, FastAtan2 @0x33b7fc, FastAtan2 @0x33b99c
/* Moby 305 */

void UpdateMoby_305(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  f32 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  short sVar12;
  MOBY_OCLASSES MVar13;
  float *pfVar14;
  uint uVar15;
  float fVar16;
  int iVar17;
  undefined2 uVar18;
  ulonglong *puVar19;
  float fVar20;
  MobyInstance *pMoby;
  ulonglong uVar21;
  longlong lVar22;
  int iVar26;
  undefined8 uVar23;
  longlong lVar24;
  undefined8 uVar25;
  float *pfVar29;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  longlong lVar30;
  ulonglong unaff_r26;
  longlong lVar31;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar32;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar33;
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
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar48;
  ulonglong in_f28;
  double dVar49;
  double dVar50;
  ulonglong in_f29;
  double dVar51;
  double dVar52;
  double dVar53;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar54;
  GPiece<16> auVar55;
  GPiece<16> auVar56;
  GPiece<16> auVar57;
  float local_1e0 [120];
  
  lVar24 = (longlong)(int)moby;
  uVar21 = ZEXT48(&stack0x00000000);
  lVar30 = uVar21 - 0x290;
  puVar19 = (ulonglong *)lVar30;
  *puVar19 = uVar21;
  puVar19[0x54] = in_LR;
  puVar19[0x45] = in_f19;
  puVar19[0x46] = in_f20;
  puVar19[0x47] = in_f21;
  puVar19[0x48] = in_f22;
  puVar19[0x49] = in_f23;
  puVar19[0x4a] = in_f24;
  puVar19[0x4b] = in_f25;
  puVar19[0x4c] = in_f26;
  puVar19[0x4d] = in_f27;
  puVar19[0x4e] = in_f28;
  puVar19[0x4f] = in_f29;
  puVar19[0x50] = in_f30;
  puVar19[0x51] = in_f31;
  puVar19[0x44] = unaff_r31;
  puVar19[0x3e] = unaff_r25;
  puVar19[0x42] = unaff_r29;
  puVar19[0x43] = unaff_r30;
  fVar2 = DAT_00811d68;
  fVar1 = (moby->rotation).y;
  pfVar14 = (float *)moby->pVar;
  uVar32 = ZEXT48(pfVar14);
  puVar19[0x41] = unaff_r28;
  puVar19[0x40] = unaff_r27;
  puVar19[0x3f] = unaff_r26;
  puVar19[0x3d] = unaff_r24;
  puVar19[0x3c] = unaff_r23;
  puVar19[0x3b] = unaff_r22;
  puVar19[0x3a] = unaff_r21;
  puVar19[0x39] = unaff_r20;
  puVar19[0x38] = unaff_r19;
  dVar34 = (double)FastWrapRot(fVar1,-fVar2);
  (moby->rotation).y = (float)dVar34;
  fVar8 = animationSpeed;
  fVar1 = pfVar14[1];
  fVar2 = *pfVar14;
  fVar3 = pfVar14[2];
  dVar40 = (double)(moby->rotation).z;
  fVar4 = (moby->pos).z;
  fVar7 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (0.1 <= fVar7) {
    fVar8 = (moby->pos).x;
    fVar9 = (moby->pos).y;
    fVar10 = fVar2 - fVar8;
    fVar16 = fVar1 - fVar9;
    fVar5 = ABS(fVar10);
    fVar11 = ABS(fVar16);
    *(float *)(puVar19 + 0x23) = fVar10;
    *(float *)((int)puVar19 + 0x11c) = fVar16;
    *(float *)(puVar19 + 0x24) = fVar5 - fVar11;
    dVar34 = 0.0;
    uVar27 = (ulonglong)(*(uint *)(puVar19 + 0x23) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar19 + 0x24) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar19 + 0x11c) >> 0x1d) & 4;
    fVar10 = ABS(*(float *)(puVar19 + 0x23));
    if (*(float *)(puVar19 + 0x24) - 0.0 < 0.0) {
      fVar10 = fVar11;
    }
    fVar11 = *(float *)(&g_atanQuadrantTable + (int)(uVar27 << 2));
    fVar16 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
    fVar20 = ABS(*(float *)((int)puVar19 + 0x11c));
    if (*(float *)(puVar19 + 0x24) - 0.0 < 0.0) {
      fVar20 = fVar5;
    }
    dVar52 = dVar34;
    if (0.0 < fVar10) {
      lVar22 = uVar21 - 0x280;
      lVar31 = uVar21 - 0x10c;
      lVar28 = uVar21 - 0xfc;
      lVar33 = 2;
      fVar10 = (fVar20 - fVar10) / (fVar20 + fVar10);
      fVar5 = fVar10 * fVar10;
      *(float *)(puVar19 + 0x32) = fVar10;
      *(float *)(puVar19 + 0x31) = fVar10;
      *(float *)((int)puVar19 + 0x18c) = fVar10;
      *(float *)((int)puVar19 + 0x184) = fVar10;
      fVar10 = fVar5 * fVar5;
      *(float *)(puVar19 + 0x31) = *(float *)(puVar19 + 0x31) * fVar5;
      *(float *)((int)puVar19 + 0x18c) = *(float *)((int)puVar19 + 0x18c) * fVar10;
      *(float *)(puVar19 + 0x32) = *(float *)(puVar19 + 0x32) * fVar10 * fVar5;
      do {
        *(float *)((int)lVar22 + 0x184) = *(float *)((int)lVar22 + 0x174) * fVar10 * fVar10;
        iVar26 = (int)lVar31;
        lVar22 = lVar22 + 8;
        lVar31 = lVar31 + 8;
        *(float *)((int)lVar28 + 4) = *(float *)(iVar26 + 4) * fVar10 * fVar10;
        lVar28 = lVar28 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar33 = 4;
      lVar28 = uVar21 - 0x10c;
      pfVar29 = (float *)&DAT_007358e0;
      lVar22 = lVar30;
      lVar31 = lVar28;
      do {
        fVar10 = *pfVar29;
        fVar5 = pfVar29[1];
        pfVar29 = pfVar29 + 2;
        *(float *)((int)lVar22 + 0x184) = *(float *)((int)lVar22 + 0x184) * fVar10;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar31 + 4) = *(float *)((int)lVar31 + 4) * fVar5;
        lVar31 = lVar31 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar31 = 2;
      lVar22 = lVar30;
      do {
        iVar26 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        iVar17 = (int)lVar28;
        lVar28 = lVar28 + 0x10;
        dVar52 = (double)((float)(dVar52 + (double)*(float *)(iVar26 + 0x184)) +
                          *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc)
                         );
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      dVar52 = (double)((float)(dVar52 + 0.7853981852531433) * fVar11 + fVar16);
    }
    fVar9 = fVar9 - fVar1;
    fVar8 = fVar8 - fVar2;
    fVar3 = fVar3 - fVar4;
    fVar1 = SQRT(fVar8 * fVar8 + fVar9 * fVar9);
    *(float *)(puVar19 + 0x22) = fVar3;
    fVar3 = ABS(fVar3);
    fVar2 = ABS(fVar1);
    *(float *)((int)puVar19 + 0x10c) = fVar1;
    *(float *)((int)puVar19 + 0x114) = fVar2 - fVar3;
    uVar27 = (ulonglong)(*(uint *)((int)puVar19 + 0x10c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar19 + 0x114) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar19 + 0x22) >> 0x1d) & 4;
    fVar1 = ABS(*(float *)((int)puVar19 + 0x10c));
    if (*(float *)((int)puVar19 + 0x114) - 0.0 < 0.0) {
      fVar1 = fVar3;
    }
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar27 << 2));
    fVar3 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
    fVar8 = ABS(*(float *)(puVar19 + 0x22));
    if (*(float *)((int)puVar19 + 0x114) - 0.0 < 0.0) {
      fVar8 = fVar2;
    }
    if (0.0 < fVar1) {
      lVar22 = uVar21 - 0x280;
      lVar28 = uVar21 - 0x11c;
      lVar31 = uVar21 - 300;
      lVar33 = 2;
      fVar1 = (fVar8 - fVar1) / (fVar8 + fVar1);
      fVar2 = fVar1 * fVar1;
      *(float *)(puVar19 + 0x2e) = fVar1;
      *(float *)(puVar19 + 0x2d) = fVar1;
      *(float *)((int)puVar19 + 0x16c) = fVar1;
      *(float *)((int)puVar19 + 0x164) = fVar1;
      fVar1 = fVar2 * fVar2;
      *(float *)(puVar19 + 0x2d) = *(float *)(puVar19 + 0x2d) * fVar2;
      *(float *)((int)puVar19 + 0x16c) = *(float *)((int)puVar19 + 0x16c) * fVar1;
      *(float *)(puVar19 + 0x2e) = *(float *)(puVar19 + 0x2e) * fVar1 * fVar2;
      do {
        *(float *)((int)lVar22 + 0x164) = *(float *)((int)lVar22 + 0x154) * fVar1 * fVar1;
        iVar26 = (int)lVar31;
        lVar31 = lVar31 + 8;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar28 + 4) = *(float *)(iVar26 + 4) * fVar1 * fVar1;
        lVar28 = lVar28 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar33 = 4;
      lVar28 = uVar21 - 300;
      pfVar29 = (float *)&DAT_007358e0;
      lVar22 = lVar30;
      lVar31 = lVar28;
      do {
        fVar1 = *pfVar29;
        fVar2 = pfVar29[1];
        pfVar29 = pfVar29 + 2;
        *(float *)((int)lVar22 + 0x164) = *(float *)((int)lVar22 + 0x164) * fVar1;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar31 + 4) = *(float *)((int)lVar31 + 4) * fVar2;
        lVar31 = lVar31 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar31 = 2;
      lVar22 = lVar30;
      do {
        iVar26 = (int)lVar22;
        iVar17 = (int)lVar28;
        lVar22 = lVar22 + 0x10;
        lVar28 = lVar28 + 0x10;
        dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar26 + 0x164)) +
                          *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc)
                         );
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar4 + fVar3);
    }
    dVar34 = -dVar34;
  }
  else {
    sVar12 = *(short *)(pfVar14 + 9);
    puVar19[0x35] = (longlong)(int)(animationSpeed * 35.5);
    puVar19[0x35] = (longlong)(int)(fVar8 * 1.5);
    dVar52 = dVar40;
    if (((int)sVar12 < *(int *)((int)puVar19 + 0x1ac) - *(int *)((int)puVar19 + 0x1ac)) &&
       (pfVar14[10] == 0.0)) {
      dVar34 = (double)pfVar14[7];
      dVar52 = (double)pfVar14[6];
    }
  }
  lVar22 = uVar32 + 0x10;
  dVar54 = 3.1415927410125732;
  dVar51 = 6.2831854820251465;
  if (0.1 <= fVar7) {
    dVar48 = 4.71238899230957;
    dVar40 = (double)MB_DeltAngSpeed
                               (dVar40,dVar52,(double)(DAT_0071f418 * 6.2831855),
                                (double)(DAT_0071f418 * 3.1415927),
                                (double)(g_FrameTime * 4.712389),lVar22,&DAT_0033abd4,
                                lVar22);
    (moby->rotation).z = (float)dVar40;
    dVar34 = (double)MB_DeltAngSpeed
                               ((double)(moby->rotation).y,dVar34,
                                (double)(float)((double)DAT_0071f418 * dVar51),
                                (double)(float)((double)DAT_0071f418 * dVar54),
                                (double)(float)((double)g_FrameTime * dVar48));
  }
  else {
    dVar40 = (double)MB_DeltAngSpeed
                               (dVar40,dVar52,(double)(DAT_0071f418 * 6.2831855),
                                (double)(DAT_0071f418 * 3.1415927),
                                (double)(g_FrameTime * 6.2831855),lVar22,&DAT_0033abd4,
                                lVar22);
    (moby->rotation).z = (float)dVar40;
    dVar34 = (double)MB_DeltAngSpeed
                               ((double)(moby->rotation).y,dVar34,
                                (double)(float)((double)DAT_0071f418 * dVar51),
                                (double)(float)((double)DAT_0071f418 * dVar54),
                                (double)(float)((double)g_FrameTime * dVar51));
  }
  (moby->rotation).y = (float)dVar34;
  lVar22 = uVar21 - 0x210;
  MB_SphericalToVector
            (g_FrameTime * 40.0,(moby->rotation).z,(float)-dVar34,(float *)lVar22);
  fVar1 = (moby->pos).x;
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).z;
  fVar4 = fVar1 + *(float *)(puVar19 + 0x10);
  fVar7 = fVar2 + *(float *)((int)puVar19 + 0x84);
  *(float *)(puVar19 + 0xe) = fVar1;
  fVar1 = fVar3 + *(float *)(puVar19 + 0x11);
  *(float *)((int)puVar19 + 0x74) = fVar2;
  fVar6 = (moby->pos).w;
  *(float *)(puVar19 + 0xf) = fVar3;
  *(f32 *)((int)puVar19 + 0x7c) = fVar6;
  (moby->pos).x = fVar4;
  (moby->pos).y = fVar7;
  (moby->pos).z = fVar1;
  dVar34 = 0.0;
  if ((((fVar4 < 0.0) || (fVar7 < 0.0)) || (fVar1 < 0.0)) ||
     (64.0 < SQRT((fVar4 - GameCamera.posX) * (fVar4 - GameCamera.posX) +
                  (fVar7 - GameCamera.posY) * (fVar7 - GameCamera.posY)))) {
    M305_00339e00(lVar24,0);
    DeleteMoby(moby);
    return;
  }
  fVar7 = fVar7 - g_heroPosition.y;
  fVar4 = fVar4 - g_heroPosition.x;
  *(MobyInstance **)(puVar19 + 0x1c) = moby;
  *(float *)(puVar19 + 0x1a) = fVar4;
  *(undefined4 *)((int)puVar19 + 0xec) = 0x3e800000;
  *(undefined4 *)((int)puVar19 + 0xe4) = 0x10001;
  *(undefined4 *)(puVar19 + 0x1e) = 1;
  fVar1 = fVar4 * fVar4 + fVar7 * fVar7;
  dVar40 = dVar34;
  dVar52 = dVar34;
  if (SQRT(fVar1) != 0.0) {
    fVar2 = 1.0 / SQRT(fVar1);
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    dVar40 = (double)(fVar4 * fVar2);
    dVar52 = (double)(fVar7 * fVar2);
  }
  *(float *)(puVar19 + 0x1a) = (float)dVar40;
  *(float *)((int)puVar19 + 0xd4) = (float)dVar52;
  dVar40 = 1.0;
  *(undefined4 *)(puVar19 + 0x1b) = 0x3f800000;
  *(undefined4 *)((int)puVar19 + 0xdc) = 0x45afdf66;
  MVar13 = moby->oClass;
  *(undefined1 *)(puVar19 + 0x1d) = 1;
  *(undefined1 *)((int)puVar19 + 0xe9) = 1;
  *(MOBY_OCLASSES *)((int)puVar19 + 0xea) = MVar13;
  iVar26 = FastDecTimerS16(uVar32 + 0x24);
  if (iVar26 != 0) {
    M305_00339e00(lVar24,0);
    DeleteMoby(moby);
    return;
  }
  lVar31 = lVar24 + 0x10;
  iVar26 = CollLine(uVar21 - 0x220,lVar31,0,pfVar14[8],uVar21 - 0x1c0);
  if (iVar26 == 0) goto LAB_0033bb88;
  iVar26 = CollHotspot();
  if (iVar26 == 0) {
    auVar55 = ZEXT416(0xffffffff);
    auVar55 = auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60;
    auVar56 = vectorShiftLeftIntegerWord(auVar55,auVar55);
    auVar55 = loadVectorLeftIndexed(0x30,0x33abd4);
    auVar55 = auVar55 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar57 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    sVar12 = *(short *)(pfVar14 + 9);
    auVar55 = vectorMultiplyAddFloatingPoint
                        (auVar57,auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60,
                         auVar56);
    auVar55 = vectorConvertToSignedFixedPointWordSaturate(auVar55,0);
    puVar19[0x35] = (longlong)(int)(animationSpeed * 3.5);
    if (*(int *)((int)puVar19 + 0x1ac) < (int)sVar12) {
      auVar55 = vectorSplatHalfWord(auVar55,1);
      uVar18 = storeVectorElementHalfWordIndexed(auVar55,0x24,uVar32);
      *(undefined2 *)(pfVar14 + 9) = uVar18;
    }
    goto LAB_0033bb88;
  }
  iVar26 = 0;
  (moby->pos).x = g_CollOutput.ip.x;
  (moby->pos).y = g_CollOutput.ip.y;
  (moby->pos).z = g_CollOutput.ip.z;
  (moby->pos).w = g_CollOutput.ip.w;
  dVar49 = -1.0;
  dVar53 = 0.5;
  dVar50 = 3.0;
  dVar48 = 6.0;
  dVar51 = 10.5;
  dVar52 = 15.5;
  uVar25 = 0x40dd4c0000000000;
  do {
    dVar35 = (double)MB_randRangeFloat((float)dVar49,(float)dVar40);
    dVar36 = (double)MB_randRangeFloat((float)dVar49,(float)dVar40);
    dVar37 = (double)MB_randRangeFloat((float)dVar49,(float)dVar40);
    FastVecReflect(uVar21 - 0x200,lVar22,0xa10980);
    dVar39 = (double)*(float *)((int)puVar19 + 0x94);
    dVar41 = (double)*(float *)(puVar19 + 0x12);
    dVar42 = (double)*(float *)(puVar19 + 0x13);
    dVar43 = (double)g_FrameTime;
    dVar46 = (double)SQRT((float)(dVar37 * dVar37 +
                                 (double)(float)(dVar35 * dVar35 + (double)(float)(dVar36 * dVar36))
                                 ));
    dVar44 = (double)(float)((double)(float)((double)SQRT((float)(dVar42 * dVar42 +
                                                                 (double)(float)(dVar41 * dVar41 +
                                                                                (double)(float)(
                                                  dVar39 * dVar39)))) * dVar53) / dVar46);
    dVar38 = dVar34;
    if (dVar34 - dVar46 < 0.0) {
      dVar38 = (double)(float)(dVar37 * dVar44);
    }
    dVar47 = dVar34;
    if (dVar34 - dVar46 < 0.0) {
      dVar47 = (double)(float)(dVar36 * dVar44);
    }
    dVar45 = dVar34;
    if (dVar34 - dVar46 < 0.0) {
      dVar45 = (double)(float)(dVar35 * dVar44);
    }
    if (dVar46 - dVar34 < 0.0) {
      dVar38 = (double)(float)(dVar37 * dVar44);
    }
    if (dVar46 - dVar34 < 0.0) {
      dVar47 = (double)(float)(dVar36 * dVar44);
    }
    if (dVar46 - dVar34 < 0.0) {
      dVar45 = (double)(float)(dVar35 * dVar44);
    }
    *(float *)(puVar19 + 0x13) = (float)(dVar42 + dVar38);
    *(float *)((int)puVar19 + 0x94) = (float)(dVar39 + dVar47);
    *(float *)(puVar19 + 0x12) = (float)(dVar41 + dVar45);
    dVar38 = (double)MB_randRangeFloat((float)(dVar43 * dVar50),(float)(dVar43 * dVar48));
    fVar2 = *(float *)((int)puVar19 + 0x94);
    fVar3 = *(float *)(puVar19 + 0x12);
    fVar4 = *(float *)(puVar19 + 0x13);
    dVar36 = (double)animationSpeed;
    dVar35 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    puVar19[0x35] = (longlong)(int)(dVar36 * dVar51);
    puVar19[0x35] = (longlong)(int)(dVar36 * dVar52);
    fVar1 = (float)(dVar38 / dVar35);
    dVar38 = dVar34;
    if (dVar34 - dVar35 < 0.0) {
      dVar38 = (double)(fVar3 * fVar1);
    }
    dVar36 = dVar34;
    if (dVar34 - dVar35 < 0.0) {
      dVar36 = (double)(fVar2 * fVar1);
    }
    dVar37 = dVar34;
    if (dVar34 - dVar35 < 0.0) {
      dVar37 = (double)(fVar4 * fVar1);
    }
    if (dVar35 - dVar34 < 0.0) {
      dVar38 = (double)(fVar3 * fVar1);
    }
    if (dVar35 - dVar34 < 0.0) {
      dVar36 = (double)(fVar2 * fVar1);
    }
    if (dVar35 - dVar34 < 0.0) {
      dVar37 = (double)(fVar4 * fVar1);
    }
    *(float *)(puVar19 + 0x12) = (float)dVar38;
    *(float *)((int)puVar19 + 0x94) = (float)dVar36;
    *(float *)(puVar19 + 0x13) = (float)dVar37;
    uVar23 = MB_randRange
                       (*(undefined4 *)((int)puVar19 + 0x1ac),*(undefined4 *)((int)puVar19 + 0x1ac))
    ;
    SpawnPart_27(uVar25,lVar31,uVar21 - 0x200,0x7f2f4f6f,uVar23);
    iVar26 = iVar26 + 1;
  } while (iVar26 < 5);
  if (g_goldWeaponsArray.blaster == '\0') {
    M305_00339e00(lVar24,0);
    DeleteMoby(moby);
    return;
  }
  pfVar14[10] = (float)((int)pfVar14[10] + 1);
  iVar26 = CollHotspot();
  if (iVar26 < 5) {
    if (iVar26 < 2) {
      if (-1 < iVar26) {
LAB_0033b718:
        pfVar14[10] = 1.4013e-42;
      }
    }
    else if (2 < iVar26) goto LAB_0033b718;
  }
  else if (iVar26 < 0xe) {
    if (iVar26 < 0xb) {
      if (iVar26 == 7) goto LAB_0033b718;
    }
    else if (iVar26 != 0xc) goto LAB_0033b718;
  }
  if ((int)(g_goldWeaponsArray.blaster + 5) < (int)pfVar14[10]) {
    M305_00339e00(lVar24,1);
    DeleteMoby(moby);
    return;
  }
  FastVecReflect(uVar21 - 0x1f0,lVar22,0xa10980);
  dVar48 = (double)*(float *)(puVar19 + 0x14);
  dVar50 = (double)*(float *)((int)puVar19 + 0xa4);
  dVar51 = ABS(dVar48);
  dVar40 = ABS(dVar50);
  *(float *)(puVar19 + 0x21) = (float)(dVar51 - dVar40);
  uVar15 = *(uint *)(puVar19 + 0x15);
  fVar1 = *(float *)(puVar19 + 0x15);
  uVar27 = (ulonglong)(*(uint *)(puVar19 + 0x14) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar19 + 0x21) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar19 + 0xa4) >> 0x1d) & 4;
  dVar52 = dVar51;
  if ((double)*(float *)(puVar19 + 0x21) - dVar34 < 0.0) {
    dVar52 = dVar40;
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar27 << 2));
  if ((double)*(float *)(puVar19 + 0x21) - dVar34 < 0.0) {
    dVar40 = dVar51;
  }
  fVar3 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
  dVar51 = dVar34;
  if (dVar34 < dVar52) {
    lVar24 = uVar21 - 0x280;
    lVar22 = uVar21 - 0x14c;
    lVar28 = uVar21 - 0x13c;
    lVar33 = 2;
    fVar4 = (float)(dVar40 - dVar52) / (float)(dVar40 + dVar52);
    fVar7 = fVar4 * fVar4;
    *(float *)(puVar19 + 0x2a) = fVar4;
    *(float *)(puVar19 + 0x29) = fVar4;
    *(float *)((int)puVar19 + 0x14c) = fVar4;
    *(float *)((int)puVar19 + 0x144) = fVar4;
    fVar4 = fVar7 * fVar7;
    *(float *)(puVar19 + 0x29) = *(float *)(puVar19 + 0x29) * fVar7;
    *(float *)((int)puVar19 + 0x14c) = *(float *)((int)puVar19 + 0x14c) * fVar4;
    *(float *)(puVar19 + 0x2a) = *(float *)(puVar19 + 0x2a) * fVar4 * fVar7;
    do {
      *(float *)((int)lVar24 + 0x144) = *(float *)((int)lVar24 + 0x134) * fVar4 * fVar4;
      iVar26 = (int)lVar22;
      lVar24 = lVar24 + 8;
      lVar22 = lVar22 + 8;
      *(float *)((int)lVar28 + 4) = *(float *)(iVar26 + 4) * fVar4 * fVar4;
      lVar28 = lVar28 + 8;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    lVar33 = 4;
    lVar28 = uVar21 - 0x14c;
    pfVar29 = (float *)&DAT_007358e0;
    lVar24 = lVar30;
    lVar22 = lVar28;
    do {
      fVar4 = *pfVar29;
      fVar7 = pfVar29[1];
      pfVar29 = pfVar29 + 2;
      *(float *)((int)lVar24 + 0x144) = *(float *)((int)lVar24 + 0x144) * fVar4;
      lVar24 = lVar24 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar7;
      lVar22 = lVar22 + 8;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    lVar22 = 2;
    lVar24 = lVar30;
    dVar40 = dVar34;
    do {
      iVar26 = (int)lVar24;
      lVar24 = lVar24 + 0x10;
      iVar17 = (int)lVar28;
      lVar28 = lVar28 + 0x10;
      dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar26 + 0x144)) +
                        *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc));
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    dVar51 = (double)((float)(dVar40 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar40 = ABS((double)fVar1);
  (moby->rotation).z = (float)dVar51;
  fVar1 = SQRT((float)(dVar48 * dVar48 + (double)(float)(dVar50 * dVar50)));
  dVar51 = ABS((double)fVar1);
  *(float *)(puVar19 + 0x20) = fVar1;
  *(float *)((int)puVar19 + 0x104) = (float)(dVar51 - dVar40);
  uVar27 = (ulonglong)(*(uint *)(puVar19 + 0x20) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar19 + 0x104) >> 0x1e) & 2 |
           (ulonglong)(uVar15 >> 0x1d) & 4;
  dVar52 = ABS((double)*(float *)(puVar19 + 0x20));
  if ((double)*(float *)((int)puVar19 + 0x104) - dVar34 < 0.0) {
    dVar52 = dVar40;
  }
  fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar27 << 2));
  if ((double)*(float *)((int)puVar19 + 0x104) - dVar34 < 0.0) {
    dVar40 = dVar51;
  }
  fVar2 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
  dVar51 = dVar34;
  if (dVar34 < dVar52) {
    lVar24 = uVar21 - 0x280;
    lVar22 = uVar21 - 0x16c;
    lVar28 = uVar21 - 0x15c;
    lVar33 = 2;
    fVar3 = (float)(dVar40 - dVar52) / (float)(dVar40 + dVar52);
    fVar4 = fVar3 * fVar3;
    *(float *)(puVar19 + 0x26) = fVar3;
    *(float *)(puVar19 + 0x25) = fVar3;
    *(float *)((int)puVar19 + 300) = fVar3;
    *(float *)((int)puVar19 + 0x124) = fVar3;
    fVar3 = fVar4 * fVar4;
    *(float *)(puVar19 + 0x25) = *(float *)(puVar19 + 0x25) * fVar4;
    *(float *)((int)puVar19 + 300) = *(float *)((int)puVar19 + 300) * fVar3;
    *(float *)(puVar19 + 0x26) = *(float *)(puVar19 + 0x26) * fVar3 * fVar4;
    do {
      *(float *)((int)lVar24 + 0x124) = *(float *)((int)lVar24 + 0x114) * fVar3 * fVar3;
      iVar26 = (int)lVar22;
      lVar24 = lVar24 + 8;
      lVar22 = lVar22 + 8;
      *(float *)((int)lVar28 + 4) = *(float *)(iVar26 + 4) * fVar3 * fVar3;
      lVar28 = lVar28 + 8;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    lVar33 = 4;
    lVar28 = uVar21 - 0x16c;
    pfVar29 = (float *)&DAT_007358e0;
    lVar24 = lVar30;
    lVar22 = lVar28;
    do {
      fVar3 = *pfVar29;
      fVar4 = pfVar29[1];
      pfVar29 = pfVar29 + 2;
      *(float *)((int)lVar24 + 0x124) = *(float *)((int)lVar24 + 0x124) * fVar3;
      lVar24 = lVar24 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar4;
      lVar22 = lVar22 + 8;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    lVar24 = 2;
    dVar40 = dVar34;
    do {
      iVar26 = (int)lVar30;
      lVar30 = lVar30 + 0x10;
      iVar17 = (int)lVar28;
      lVar28 = lVar28 + 0x10;
      dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar26 + 0x124)) +
                        *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc));
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    dVar51 = (double)((float)(dVar40 + 0.7853981852531433) * fVar1 + fVar2);
  }
  (moby->rotation).y = (float)-dVar51;
  pfVar14[4] = 0.0;
  pfVar14[5] = 0.0;
  fVar7 = g_CollOutput.normal.z;
  fVar4 = g_CollOutput.normal.y;
  fVar3 = g_CollOutput.normal.x;
  pMoby = g_currentWeaponMoby;
  fVar1 = g_CollOutput.normal.y * g_CollOutput.normal.y;
  dVar51 = (double)g_CollOutput.ip.x;
  dVar48 = (double)g_CollOutput.ip.y;
  fVar2 = g_CollOutput.normal.x * g_CollOutput.normal.x;
  dVar50 = (double)g_CollOutput.ip.z;
  (moby->pos).w = g_CollOutput.ip.w;
  dVar52 = (double)SQRT(fVar7 * fVar7 + fVar2 + fVar1);
  fVar1 = (float)(0.05000000074505806 / dVar52);
  dVar40 = dVar34;
  if (dVar34 - dVar52 < 0.0) {
    dVar40 = (double)(fVar7 * fVar1);
  }
  dVar53 = dVar34;
  if (dVar34 - dVar52 < 0.0) {
    dVar53 = (double)(fVar4 * fVar1);
  }
  dVar49 = dVar34;
  if (dVar34 - dVar52 < 0.0) {
    dVar49 = (double)(fVar3 * fVar1);
  }
  if (dVar52 - dVar34 < 0.0) {
    dVar40 = (double)(fVar7 * fVar1);
  }
  if (dVar52 - dVar34 < 0.0) {
    dVar53 = (double)(fVar4 * fVar1);
  }
  if (dVar52 - dVar34 < 0.0) {
    dVar49 = (double)(fVar3 * fVar1);
  }
  (moby->pos).z = (float)(dVar50 + dVar40);
  (moby->pos).y = (float)(dVar48 + dVar53);
  (moby->pos).x = (float)(dVar51 + dVar49);
  if (((pMoby != (MobyInstance *)0x0) && (pMoby->oClass == BLASTER)) &&
     (pMoby->state != 0xfd && pMoby->state != 0xfe)) {
    PlayMobySound(4,0,pMoby);
  }
LAB_0033bb88:
  dVar40 = (double)FastWrapRot((moby->rotation).y,DAT_00811d68);
  (moby->rotation).y = (float)dVar40;
  dVar40 = 13.5;
  lVar30 = (longlong)*(short *)((int)pfVar14 + 0x26) - (longlong)*(short *)(pfVar14 + 9);
  puVar19[0x35] = (longlong)(int)(animationSpeed * 13.5);
  fVar1 = DAT_00811d58;
  if ((int)lVar30 < *(int *)((int)puVar19 + 0x1ac)) {
    dVar52 = (double)FastIntToDouble(lVar30);
    puVar19[0x35] = (longlong)(int)((double)animationSpeed * dVar40);
    dVar40 = (double)FastIntToDouble(*(undefined4 *)((int)puVar19 + 0x1ac));
    fVar1 = DAT_00811d58 * (float)(dVar52 / dVar40);
  }
  fVar7 = (moby->pos).y;
  dVar48 = (double)fVar7;
  fVar2 = (float)((double)*(float *)((int)puVar19 + 0x74) - dVar48);
  fVar8 = (moby->pos).x;
  dVar50 = (double)fVar8;
  fVar3 = (float)((double)*(float *)(puVar19 + 0xe) - dVar50);
  fVar9 = (moby->pos).z;
  dVar51 = (double)fVar9;
  fVar4 = (float)((double)*(float *)(puVar19 + 0xf) - dVar51);
  *(undefined4 *)((int)puVar19 + 0x8c) = *(undefined4 *)((int)puVar19 + 0x7c);
  dVar52 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  fVar1 = (float)((double)fVar1 / dVar52);
  fVar10 = (moby->pos).w;
  dVar53 = (double)fVar10;
  fVar16 = pfVar14[0xb];
  dVar40 = dVar34;
  if (dVar34 - dVar52 < 0.0) {
    dVar40 = (double)(fVar3 * fVar1);
  }
  dVar49 = dVar34;
  if (dVar34 - dVar52 < 0.0) {
    dVar49 = (double)(fVar2 * fVar1);
  }
  dVar38 = dVar34;
  if (dVar34 - dVar52 < 0.0) {
    dVar38 = (double)(fVar4 * fVar1);
  }
  if (dVar52 - dVar34 < 0.0) {
    dVar40 = (double)(fVar3 * fVar1);
  }
  if (dVar52 - dVar34 < 0.0) {
    dVar49 = (double)(fVar2 * fVar1);
  }
  if (dVar52 - dVar34 < 0.0) {
    dVar38 = (double)(fVar4 * fVar1);
  }
  *(float *)(puVar19 + 0x10) = (float)dVar40;
  *(float *)((int)puVar19 + 0x84) = (float)dVar49;
  *(float *)(puVar19 + 0x11) = (float)dVar38;
  if (fVar16 != 0.0) {
    *(float *)((int)fVar16 + 0x10) = fVar8;
    *(float *)((int)fVar16 + 0x14) = fVar7;
    *(float *)((int)fVar16 + 0x18) = fVar9;
    *(float *)((int)fVar16 + 0x1c) = fVar10;
    dVar40 = (double)*(float *)(puVar19 + 0x10);
  }
  iVar26 = 1;
  do {
    uVar32 = uVar32 + 4;
    iVar17 = *(int *)((int)uVar32 + 0x2c);
    if (iVar17 != 0) {
      dVar40 = dVar50 + dVar40;
      dVar50 = (double)(float)dVar40;
      *(float *)(iVar17 + 0x10) = (float)dVar40;
      fVar1 = (float)(dVar48 + (double)*(float *)((int)puVar19 + 0x84));
      dVar48 = (double)fVar1;
      *(float *)(iVar17 + 0x14) = fVar1;
      fVar1 = *(float *)(puVar19 + 0x11);
      *(float *)(iVar17 + 0x1c) = (float)dVar53;
      dVar40 = dVar51 + (double)fVar1;
      dVar51 = (double)(float)dVar40;
      *(float *)(iVar17 + 0x18) = (float)dVar40;
      dVar40 = (double)MB_randRangeSigned(dVar34,(double)DAT_00811d54);
      *(float *)(iVar17 + 0x10) = (float)((double)*(float *)(iVar17 + 0x10) + dVar40);
      dVar40 = (double)MB_randRangeSigned(dVar34,(double)DAT_00811d54);
      *(float *)(iVar17 + 0x14) = (float)((double)*(float *)(iVar17 + 0x14) + dVar40);
      dVar40 = (double)MB_randRangeSigned(dVar34,(double)DAT_00811d54);
      *(float *)(iVar17 + 0x18) = (float)((double)*(float *)(iVar17 + 0x18) + dVar40);
      dVar40 = (double)(*(float *)(puVar19 + 0x10) * DAT_00811d5c);
      fVar1 = *(float *)((int)puVar19 + 0x84) * DAT_00811d5c;
      fVar2 = *(float *)(puVar19 + 0x11) * DAT_00811d5c;
      *(float *)(puVar19 + 0x10) = *(float *)(puVar19 + 0x10) * DAT_00811d5c;
      *(float *)((int)puVar19 + 0x84) = fVar1;
      *(float *)(puVar19 + 0x11) = fVar2;
    }
    iVar26 = iVar26 + 1;
  } while (iVar26 < 0x11);
  iVar26 = MB_randInt(5);
  fVar3 = GameCamera.orientMtx.up.z;
  fVar2 = GameCamera.orientMtx.up.y;
  fVar1 = GameCamera.orientMtx.up.x;
  if (iVar26 == 0) {
    fVar7 = GameCamera.orientMtx.up.z * *(float *)((int)puVar19 + 0x84);
    fVar4 = GameCamera.orientMtx.up.y * *(float *)(puVar19 + 0x10);
    *(undefined4 *)((int)puVar19 + 0xbc) = 0;
    *(float *)(puVar19 + 0x16) = fVar2 * *(float *)(puVar19 + 0x11) - fVar7;
    *(float *)(puVar19 + 0x17) = fVar1 * *(float *)((int)puVar19 + 0x84) - fVar4;
    *(float *)((int)puVar19 + 0xb4) =
         fVar3 * *(float *)(puVar19 + 0x10) - fVar1 * *(float *)(puVar19 + 0x11);
    dVar40 = (double)MB_randRangeSigned(dVar34,dVar54);
    MB_RotateQuatAxisAngle((float)dVar40,local_1e0,local_1e0);
    dVar40 = (double)SQRT(*(float *)(puVar19 + 0x17) * *(float *)(puVar19 + 0x17) +
                          *(float *)(puVar19 + 0x16) * *(float *)(puVar19 + 0x16) +
                          *(float *)((int)puVar19 + 0xb4) * *(float *)((int)puVar19 + 0xb4));
    if (dVar40 != dVar34) {
      dVar34 = (double)MB_randRangeFloat
                                 (g_FrameTime * 0.5,g_FrameTime * 2.0);
      fVar1 = (float)(dVar34 / dVar40);
      *(undefined4 *)((int)puVar19 + 0xcc) = *(undefined4 *)((int)puVar19 + 0xbc);
      fVar2 = animationSpeed;
      *(float *)(puVar19 + 0x18) = *(float *)(puVar19 + 0x16) * fVar1;
      *(float *)((int)puVar19 + 0xc4) = *(float *)((int)puVar19 + 0xb4) * fVar1;
      *(float *)(puVar19 + 0x19) = *(float *)(puVar19 + 0x17) * fVar1;
      puVar19[0x35] = (longlong)(int)(fVar2 * 10.5);
      puVar19[0x35] = (longlong)(int)(fVar2 * 15.5);
      uVar25 = MB_randRange
                         (*(undefined4 *)((int)puVar19 + 0x1ac),
                          *(undefined4 *)((int)puVar19 + 0x1ac));
      SpawnPart_27(0x40dd4c0000000000,lVar31,uVar21 - 0x1d0,0x7f2f4f6f,uVar25);
    }
  }
  return;
}


