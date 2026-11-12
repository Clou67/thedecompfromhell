// game/update/moby333.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x345798-0x3486e4
#include "game/update/moby333.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update/moby248.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"

// 0x0345798 (0x568 bytes)
void M333_00345798
               (double param_1,double param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  undefined4 uVar1;
  ulonglong uVar2;
  int iVar4;
  int iVar5;
  ulonglong uVar3;
  int iVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  GPiece<16> local_d0;
  GPiece<32> local_c0;
  
  dVar8 = 1.0;
  uVar9 = 0;
  dVar10 = 0.009999999776482582;
  if (0 < param_8) {
    iVar6 = 0;
    uVar11 = 0x3f747ae140000000;
    dVar12 = 0.10000000149011612;
    dVar14 = (double)(float)(param_1 * 210000.0 +
                            (double)((float)(param_2 - param_1) / (float)(longlong)param_8));
    dVar13 = 1.0199999809265137;
    do {
      FastIntToDouble(iVar6);
      MB_randRangeSigned(uVar9,uVar11);
      MB_randRangeSigned(uVar9,uVar11);
      MB_randRangeFloat((float)((double)DAT_0083fd94 * dVar12),DAT_0083fd94);
      uVar2 = MB_randRange(0x30,0x70);
      MB_randRange(0x30,0x7f);
      uVar7 = MB_randRangeFloat((float)dVar8,(float)dVar13);
      MB_randRange(0xfffffffffffffffe,2);
      iVar4 = SpawnPart_23((double)DAT_0083fd9c,dVar8,uVar7,dVar14,local_d0);
      if (iVar4 != 0) {
        iVar5 = MB_randInt(2);
        if (iVar5 != 0) {
          *(undefined1 *)(iVar4 + 3) = 0x44;
          uVar3 = MB_randRange(0x60,0xe0);
          *(uint *)(iVar4 + 4) =
               (uint)((uVar2 & 0xffffffff) << 0x18) |
               (uint)((uVar3 & 0xffffffff) << 0x10) | (uint)((uVar3 & 0xffffffff) << 8) |
               (uint)uVar3;
        }
        uVar1 = DAT_010c5104;
        *(undefined4 *)(iVar4 + 0x24) = 2;
        *(short *)(iVar4 + 10) = (short)uVar1;
        *(char *)(iVar4 + 0x2a) = (char)uVar2;
        *(char *)(iVar4 + 0x2b) = (char)DAT_010c5104;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_8);
  }
  MB_randRot();
  MB_randRot();
  dVar13 = 0.029999999329447746;
  MB_randRangeFloat((float)dVar10,0.03);
  dVar12 = 10.5;
  uVar9 = 0x40c3880000000000;
  dVar8 = 20.5;
  MB_randRange((int)(animationSpeed * 10.5),(int)(animationSpeed * 20.5));
  SpawnPart_21(uVar9,param_4,local_c0,0x4f007fff,0x1fffffff);
  MB_randRot();
  MB_randRot();
  MB_randRangeFloat((float)dVar10,(float)dVar13);
  uVar9 = 0x40d3880000000000;
  MB_randRange
            ((int)((double)animationSpeed * dVar12),(int)((double)animationSpeed * dVar8));
  SpawnPart_21(uVar9,param_5,local_c0,0x4f007fff,0x1fffffff);
  return;
}


// 0x0345d08 (0x198 bytes)
void M333_00345d08
               (undefined4 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  GPiece<16> local_50;
  GPiece<64> local_40;
  
  iVar1 = (int)(param_3 << 4);
  M333_00345798((double)(*(float *)(&DAT_0083fc1c + (int)(param_2 << 4)) * DAT_0083fd90),
                (double)(*(float *)(&DAT_0083fc1c + iVar1) * DAT_0083fd90),param_1,local_50,local_40
                ,param_4,iVar1 + 0x83fc10,param_4);
  return;
}


// 0x0345ea0 (0x1ac bytes)
void M333_00345ea0(undefined8 param_1)

{
  M333_00345d08(param_1,0,1,DAT_0083fda4);
  M333_00345d08(param_1,2,3,DAT_0083fda8);
  M333_00345d08(param_1,4,5,DAT_0083fdac);
  M333_00345d08(param_1,5,6,DAT_0083fdb0);
  M333_00345d08(param_1,6,7,DAT_0083fdb4);
  M333_00345d08(param_1,8,9,DAT_0083fdac);
  M333_00345d08(param_1,9,10,DAT_0083fdb0);
  M333_00345d08(param_1,10,0xb,DAT_0083fdb4);
  M333_00345d08(param_1,0xc,0xd,DAT_0083fdb8);
  M333_00345d08(param_1,0xe,0xf,DAT_0083fdb8);
  M333_00345d08(param_1,0x10,0x11,DAT_0083fdbc);
  M333_00345d08(param_1,0x14,0x15,DAT_0083fdbc);
  M333_00345d08(param_1,0x12,0x13,DAT_0083fdc0);
  M333_00345d08(param_1,0x16,0x17,DAT_0083fdc0);
  return;
}


// 0x0346060 (0x518 bytes)
// inlined: FastAtan2 @0x3461c4, FastAtan2 @0x346370
MobyInstance * M333_00346060(int param_1)

{
  longlong lVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  ushort *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  float *pfVar18;
  longlong lVar17;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  MobyInstance *pMVar19;
  ulonglong unaff_r29;
  MobyInstance *pMVar20;
  ulonglong unaff_r30;
  ushort *puVar21;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar27;
  double dVar28;
  ulonglong in_f31;
  double dVar29;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar1 = uVar13 - 0x110;
  puVar9 = (ulonglong *)lVar1;
  *puVar9 = uVar13;
  puVar9[0x24] = in_LR;
  puVar9[0x1f] = in_f29;
  puVar9[0x20] = in_f30;
  puVar9[0x21] = in_f31;
  puVar9[0x1e] = unaff_r31;
  puVar9[0x1a] = unaff_r27;
  bVar2 = *(byte *)(param_1 + 0x21);
  puVar9[0x1d] = unaff_r30;
  puVar21 = (ushort *)(&g_MobyGroups)[bVar2];
  puVar9[0x1c] = unaff_r29;
  puVar9[0x1b] = unaff_r28;
  puVar9[0x19] = unaff_r26;
  if (puVar21 == (ushort *)0x0) {
    pMVar19 = (MobyInstance *)0x0;
  }
  else {
    dVar27 = 0.0;
    pMVar19 = (MobyInstance *)0x0;
    fVar3 = *(float *)(param_1 + 0x10);
    pMVar20 = g_MobyInstance + (*puVar21 & 0x7fff);
    fVar4 = *(float *)(param_1 + 0x14);
    dVar28 = dVar27;
    dVar29 = dVar27;
    while( true ) {
      if ((pMVar20->oClass != BLARG_BOMBTHROWER) && (pMVar20->setByGroup == '\0')) {
        fVar8 = (pMVar20->pos).x - fVar3;
        fVar5 = (pMVar20->pos).y - fVar4;
        dVar24 = ABS((double)fVar8);
        dVar25 = ABS((double)fVar5);
        *(float *)((int)puVar9 + 0x7c) = fVar8;
        *(float *)(puVar9 + 0x10) = fVar5;
        *(float *)((int)puVar9 + 0x84) = (float)(dVar24 - dVar25);
        uVar16 = (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1d) & 4;
        dVar23 = ABS((double)*(float *)((int)puVar9 + 0x7c));
        if ((double)*(float *)((int)puVar9 + 0x84) - dVar27 < 0.0) {
          dVar23 = dVar25;
        }
        fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
        dVar25 = ABS((double)*(float *)(puVar9 + 0x10));
        if ((double)*(float *)((int)puVar9 + 0x84) - dVar27 < 0.0) {
          dVar25 = dVar24;
        }
        fVar5 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
        dVar24 = dVar27;
        if (dVar27 < dVar23) {
          lVar14 = uVar13 - 0x100;
          lVar15 = uVar13 - 0x68;
          lVar17 = uVar13 - 0x58;
          lVar22 = 2;
          fVar6 = (float)(dVar25 - dVar23) / (float)(dVar25 + dVar23);
          fVar7 = fVar6 * fVar6;
          *(float *)((int)puVar9 + 0xb4) = fVar6;
          *(float *)((int)puVar9 + 0xac) = fVar6;
          *(float *)(puVar9 + 0x16) = fVar6;
          *(float *)(puVar9 + 0x15) = fVar6;
          fVar6 = fVar7 * fVar7;
          *(float *)((int)puVar9 + 0xac) = *(float *)((int)puVar9 + 0xac) * fVar7;
          *(float *)(puVar9 + 0x16) = *(float *)(puVar9 + 0x16) * fVar6;
          *(float *)((int)puVar9 + 0xb4) = *(float *)((int)puVar9 + 0xb4) * fVar6 * fVar7;
          do {
            *(float *)((int)lVar14 + 0xa8) = *(float *)((int)lVar14 + 0x98) * fVar6 * fVar6;
            iVar10 = (int)lVar15;
            lVar14 = lVar14 + 8;
            lVar15 = lVar15 + 8;
            *(float *)((int)lVar17 + 4) = *(float *)(iVar10 + 4) * fVar6 * fVar6;
            lVar17 = lVar17 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar17 = uVar13 - 0x68;
          pfVar18 = (float *)&DAT_007358e0;
          lVar22 = 4;
          lVar14 = lVar1;
          lVar15 = lVar17;
          do {
            fVar6 = *pfVar18;
            fVar7 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar14 + 0xa8) = *(float *)((int)lVar14 + 0xa8) * fVar6;
            lVar14 = lVar14 + 8;
            *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar7;
            lVar15 = lVar15 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar15 = 2;
          lVar14 = lVar1;
          dVar23 = dVar27;
          do {
            iVar10 = (int)lVar14;
            lVar14 = lVar14 + 0x10;
            iVar11 = (int)lVar17;
            lVar17 = lVar17 + 0x10;
            dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar10 + 0xa8)) +
                              *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                             *(float *)(iVar11 + 0xc));
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          dVar24 = (double)((float)(dVar23 + 0.7853981852531433) * fVar8 + fVar5);
        }
        fVar4 = g_heroPosition.y - fVar4;
        dVar26 = ABS((double)(g_heroPosition.x - fVar3));
        dVar25 = ABS((double)fVar4);
        *(float *)(puVar9 + 0xe) = g_heroPosition.x - fVar3;
        *(float *)((int)puVar9 + 0x74) = fVar4;
        *(float *)(puVar9 + 0xf) = (float)(dVar26 - dVar25);
        uVar16 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
        dVar23 = ABS((double)*(float *)(puVar9 + 0xe));
        if ((double)*(float *)(puVar9 + 0xf) - dVar27 < 0.0) {
          dVar23 = dVar25;
        }
        fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
        dVar25 = ABS((double)*(float *)((int)puVar9 + 0x74));
        if ((double)*(float *)(puVar9 + 0xf) - dVar27 < 0.0) {
          dVar25 = dVar26;
        }
        fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
        dVar26 = dVar27;
        if (dVar27 < dVar23) {
          lVar14 = uVar13 - 0x100;
          lVar17 = uVar13 - 0x78;
          lVar15 = uVar13 - 0x88;
          lVar22 = 2;
          fVar8 = (float)(dVar25 - dVar23) / (float)(dVar25 + dVar23);
          fVar5 = fVar8 * fVar8;
          *(float *)((int)puVar9 + 0x94) = fVar8;
          *(float *)((int)puVar9 + 0x8c) = fVar8;
          *(float *)(puVar9 + 0x12) = fVar8;
          *(float *)(puVar9 + 0x11) = fVar8;
          fVar8 = fVar5 * fVar5;
          *(float *)((int)puVar9 + 0x8c) = *(float *)((int)puVar9 + 0x8c) * fVar5;
          *(float *)(puVar9 + 0x12) = *(float *)(puVar9 + 0x12) * fVar8;
          *(float *)((int)puVar9 + 0x94) = *(float *)((int)puVar9 + 0x94) * fVar8 * fVar5;
          do {
            *(float *)((int)lVar14 + 0x88) = *(float *)((int)lVar14 + 0x78) * fVar8 * fVar8;
            iVar10 = (int)lVar15;
            lVar15 = lVar15 + 8;
            lVar14 = lVar14 + 8;
            *(float *)((int)lVar17 + 4) = *(float *)(iVar10 + 4) * fVar8 * fVar8;
            lVar17 = lVar17 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar22 = 4;
          lVar17 = uVar13 - 0x88;
          pfVar18 = (float *)&DAT_007358e0;
          lVar14 = lVar1;
          lVar15 = lVar17;
          do {
            fVar8 = *pfVar18;
            fVar5 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar14 + 0x88) = *(float *)((int)lVar14 + 0x88) * fVar8;
            lVar14 = lVar14 + 8;
            *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar5;
            lVar15 = lVar15 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar15 = 2;
          lVar14 = lVar1;
          dVar23 = dVar27;
          do {
            iVar10 = (int)lVar14;
            iVar11 = (int)lVar17;
            lVar14 = lVar14 + 0x10;
            lVar17 = lVar17 + 0x10;
            dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar10 + 0x88)) +
                              *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                             *(float *)(iVar11 + 0xc));
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          dVar26 = (double)((float)(dVar23 + 0.7853981852531433) * fVar3 + fVar4);
        }
        dVar23 = (double)FastSubRots((float)dVar24,(float)dVar26);
        fVar4 = *(float *)(param_1 + 0x14);
        fVar3 = *(float *)(param_1 + 0x10);
        fVar5 = fVar4 - (pMVar20->pos).y;
        fVar8 = fVar3 - (pMVar20->pos).x;
        fVar6 = *(float *)(param_1 + 0x18) - (pMVar20->pos).z;
        dVar24 = (double)SQRT(fVar6 * fVar6 + fVar8 * fVar8 + fVar5 * fVar5);
        if (1.5707963705062866 <= dVar23) {
          if (((16.0 <= dVar24) && ((dVar24 < dVar29 || (dVar29 < 16.0)))) ||
             ((16.0 > dVar24 && (dVar29 < dVar24)))) {
            dVar28 = dVar23;
            dVar29 = dVar24;
            pMVar19 = pMVar20;
          }
        }
        else if (dVar28 < dVar23) {
          dVar28 = dVar23;
          dVar29 = dVar24;
          pMVar19 = pMVar20;
        }
      }
      if ((short)*puVar21 < -1) break;
      puVar12 = puVar21 + 1;
      puVar21 = puVar21 + 1;
      pMVar20 = g_MobyInstance + (*puVar12 & 0x7fff);
    }
  }
  return pMVar19;
}


// 0x0346610 (0x20d4 bytes)
// inlined: FastAtan2 @0x346b80, FastAtan2 @0x347020, FastAtan2 @0x347434, FastAtan2 @0x347648, FastAtan2 @0x347868, FastAtan2 @0x347c78, FastAtan2 @0x347f64
/* Moby 333 */

void UpdateMoby_333(MobyInstance *moby)

{
  byte bVar1;
  byte bVar2;
  u8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  f32 fVar9;
  short sVar10;
  void *pvVar11;
  MobyInstance *pMVar12;
  uint uVar13;
  undefined2 uVar14;
  ulonglong *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  MobyInstance *pMVar21;
  longlong lVar22;
  MobyModeBit MVar29;
  s8 sVar30;
  undefined4 uVar25;
  undefined1 uVar31;
  int iVar26;
  longlong lVar23;
  longlong lVar24;
  int iVar27;
  uint uVar28;
  longlong lVar32;
  ulonglong uVar33;
  float *pfVar36;
  ulonglong uVar34;
  longlong lVar35;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar37;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar38;
  double dVar39;
  ulonglong uVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  ulonglong in_f29;
  double dVar44;
  ulonglong in_f30;
  double dVar45;
  ulonglong in_f31;
  double dVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  GPiece<16> auVar49;
  GPiece<16> auVar50;
  GPiece<16> auVar51;
  
  lVar22 = (longlong)(int)moby;
  uVar40 = ZEXT48(&stack0x00000000);
  lVar24 = uVar40 - 0x290;
  puVar15 = (ulonglong *)lVar24;
  *puVar15 = uVar40;
  puVar15[0x54] = in_LR;
  puVar15[0x4f] = in_f29;
  puVar15[0x50] = in_f30;
  puVar15[0x51] = in_f31;
  puVar15[0x4e] = unaff_r31;
  dVar45 = 0.0;
  *(undefined4 *)((int)puVar15 + 0x104) = 0;
  puVar15[0x4d] = unaff_r30;
  iVar26 = DAT_0083fda0;
  dVar44 = 3.0;
  pvVar11 = moby->pVar;
  uVar37 = ZEXT48(pvVar11);
  puVar15[0x4c] = unaff_r29;
  puVar15[0x4b] = unaff_r28;
  puVar15[0x4a] = unaff_r27;
  DoManipulator
            (0x4008000000000000,moby,(longlong)iVar26,(Manipulator *)((int)pvVar11 + 0x160));
  if ((moby->enabled != '\0') &&
     (dVar39 = (double)FUN_005e8548(lVar22 + 0x10,0x951500), dVar39 < 29.0)) {
    MB_SetZBoundsFromGround(lVar22);
    moby->shadow = '\x17';
  }
  if (moby->state == '\x03') {
    MVar29 = moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
  }
  else {
    MVar29 = moby->modeBits | DRAW_SHADOW;
  }
  moby->modeBits = MVar29;
  if (moby->state == 'd') {
    dVar44 = (double)FastIntToDouble(DAT_010c5108);
    puVar15[0x48] = (longlong)(DAT_010c5108 - *(short *)((int)pvVar11 + 0x130));
    sVar10 = *(short *)((int)pvVar11 + 0x132);
    uVar40 = puVar15[0x48];
    puVar15[0x48] = (longlong)(int)sVar10;
    uVar37 = puVar15[0x48];
    puVar15[0x48] = (longlong)-(int)sVar10;
    sVar30 = FastDoubleToInt
                       ((double)((float)(longlong)puVar15[0x48] *
                                 (float)((double)(longlong)uVar40 / dVar44) +
                                (float)(longlong)uVar37));
    moby->alpha = sVar30;
    M333_00345d08(lVar22,0,1,DAT_0083fda4);
    M333_00345d08(lVar22,2,3,DAT_0083fda8);
    M333_00345d08(lVar22,4,5,DAT_0083fdac);
    M333_00345d08(lVar22,5,6,DAT_0083fdb0);
    M333_00345d08(lVar22,6,7,DAT_0083fdb4);
    M333_00345d08(lVar22,8,9,DAT_0083fdac);
    M333_00345d08(lVar22,9,10,DAT_0083fdb0);
    M333_00345d08(lVar22,10,0xb,DAT_0083fdb4);
    M333_00345d08(lVar22,0xc,0xd,DAT_0083fdb8);
    M333_00345d08(lVar22,0xe,0xf,DAT_0083fdb8);
    M333_00345d08(lVar22,0x10,0x11,DAT_0083fdbc);
    M333_00345d08(lVar22,0x14,0x15,DAT_0083fdbc);
    M333_00345d08(lVar22,0x12,0x13,DAT_0083fdc0);
    M333_00345d08(lVar22,0x16,0x17,DAT_0083fdc0);
    return;
  }
  uVar25 = MB_damage(lVar22,0x330000,0);
  MB_HandleDamage(moby,uVar25,uVar37 + 0x20,0,puVar15 + 0x20,(int)puVar15 + 0x104,0,4);
  if ((*(int *)(puVar15 + 0x20) != 1) && (moby->state != 'c')) {
    uVar28 = *(uint *)((int)puVar15 + 0x104);
    uVar13 = (int)uVar28 >> 0x1f;
    fVar4 = *(float *)((int)pvVar11 + 0x20) - *(float *)((int)puVar15 + 0x104);
    moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
    *(float *)((int)pvVar11 + 0x20) = fVar4;
    if ((double)fVar4 <= dVar45) {
      fVar4 = g_FrameTimeSq * 30.0;
      *(undefined4 *)((int)pvVar11 + 0x84) = 0x3a03126f;
      *(float *)((int)pvVar11 + 0x80) = fVar4;
      fVar4 = g_FrameTime;
      *(float *)((int)pvVar11 + 0x88) = DAT_0083fbfc * g_FrameTime;
      fVar5 = DAT_0083fc00;
      *(undefined1 *)((int)pvVar11 + 0xad) = 0;
      *(undefined4 *)((int)pvVar11 + 0x94) = 9;
      *(float *)((int)pvVar11 + 0x8c) = fVar5 * fVar4;
      fVar4 = (moby->pos).x - g_heroPosition.x;
      fVar5 = (moby->pos).y - g_heroPosition.y;
      dVar43 = ABS((double)fVar4);
      dVar46 = ABS((double)fVar5);
      *(float *)((int)puVar15 + 0x154) = fVar4;
      *(float *)(puVar15 + 0x2b) = fVar5;
      *(float *)((int)puVar15 + 0x15c) = (float)(dVar43 - dVar46);
      uVar33 = (ulonglong)(*(uint *)((int)puVar15 + 0x154) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar15 + 0x15c) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar15 + 0x2b) >> 0x1d) & 4;
      uVar34 = uVar33 << 2 | 0x735900;
      dVar39 = ABS((double)*(float *)((int)puVar15 + 0x154));
      if ((double)*(float *)((int)puVar15 + 0x15c) - dVar45 < 0.0) {
        dVar39 = dVar46;
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar33 << 2));
      fVar4 = *(float *)((int)uVar34 + 4);
      dVar46 = ABS((double)*(float *)(puVar15 + 0x2b));
      if ((double)*(float *)((int)puVar15 + 0x15c) - dVar45 < 0.0) {
        dVar46 = dVar43;
      }
      dVar43 = dVar45;
      if (dVar45 < dVar39) {
        lVar23 = uVar40 - 0x280;
        lVar32 = uVar40 - 0x70;
        lVar35 = uVar40 - 0x60;
        lVar38 = 2;
        fVar6 = (float)(dVar46 - dVar39) / (float)(dVar46 + dVar39);
        fVar7 = fVar6 * fVar6;
        *(float *)((int)puVar15 + 0x22c) = fVar6;
        *(float *)((int)puVar15 + 0x224) = fVar6;
        *(float *)(puVar15 + 0x45) = fVar6;
        *(float *)(puVar15 + 0x44) = fVar6;
        fVar6 = fVar7 * fVar7;
        *(float *)((int)puVar15 + 0x224) = *(float *)((int)puVar15 + 0x224) * fVar7;
        *(float *)(puVar15 + 0x45) = *(float *)(puVar15 + 0x45) * fVar6;
        *(float *)((int)puVar15 + 0x22c) = *(float *)((int)puVar15 + 0x22c) * fVar6 * fVar7;
        do {
          *(float *)((int)lVar23 + 0x220) = *(float *)((int)lVar23 + 0x210) * fVar6 * fVar6;
          iVar26 = (int)lVar32;
          lVar23 = lVar23 + 8;
          lVar32 = lVar32 + 8;
          *(float *)((int)lVar35 + 4) = *(float *)(iVar26 + 4) * fVar6 * fVar6;
          lVar35 = lVar35 + 8;
          lVar38 = lVar38 + -1;
        } while (lVar38 != 0);
        lVar38 = 4;
        lVar35 = uVar40 - 0x70;
        uVar34 = ZEXT48(&DAT_007358e0);
        lVar23 = lVar24;
        lVar32 = lVar35;
        do {
          pfVar36 = (float *)uVar34;
          fVar6 = pfVar36[1];
          uVar34 = uVar34 + 8;
          *(float *)((int)lVar23 + 0x220) = *(float *)((int)lVar23 + 0x220) * *pfVar36;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar6;
          lVar32 = lVar32 + 8;
          lVar38 = lVar38 + -1;
        } while (lVar38 != 0);
        lVar32 = 2;
        lVar23 = lVar24;
        dVar39 = dVar45;
        do {
          iVar26 = (int)lVar23;
          lVar23 = lVar23 + 0x10;
          iVar27 = (int)lVar35;
          lVar35 = lVar35 + 0x10;
          dVar39 = (double)((float)(dVar39 + (double)*(float *)(iVar26 + 0x220)) +
                            *(float *)(iVar27 + 4) + *(float *)(iVar27 + 8) +
                           *(float *)(iVar27 + 0xc));
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        dVar43 = (double)((float)(dVar39 + 0.7853981852531433) * fVar5 + fVar4);
      }
      MB_StartKick(dVar43,lVar22,uVar37 + 0x70,uVar34,9,1,0);
      *(undefined4 *)((int)pvVar11 + 0xc0) = 0x40c00000;
      *(undefined4 *)((int)pvVar11 + 0xc4) = 0x41200000;
      MB_SpawnBoltsFromCrate(lVar22,0,0xffffffffffffffff);
      *(undefined1 *)((int)pvVar11 + 0x67) = 0xfa;
      moby->state = 'c';
      iVar26 = *(int *)((int)pvVar11 + 0x120);
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED);
      *(undefined1 *)(iVar26 + 0xbc) = 0;
    }
    else if ((int)((uVar13 >> 1 ^ uVar28) - uVar13) < 0x3f800000) {
      *(undefined1 *)((int)pvVar11 + 0x67) = 100;
    }
    else {
      fVar4 = g_FrameTimeSq * 30.0;
      *(undefined4 *)((int)pvVar11 + 0x84) = 0x3a03126f;
      *(float *)((int)pvVar11 + 0x80) = fVar4;
      fVar4 = g_FrameTime;
      *(float *)((int)pvVar11 + 0x88) = g_FrameTime * 5.0;
      *(undefined1 *)((int)pvVar11 + 0xad) = 0;
      *(undefined4 *)((int)pvVar11 + 0x94) = 9;
      *(float *)((int)pvVar11 + 0x8c) = fVar4 * 7.0;
      FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                   (double)((moby->pos).y - g_heroPosition.y));
      MB_StartKick(lVar22,uVar37 + 0x70);
      *(undefined4 *)((int)pvVar11 + 0xc0) = 0x40c00000;
      *(undefined4 *)((int)pvVar11 + 0xc4) = 0x41200000;
      *(undefined1 *)((int)pvVar11 + 0x67) = 0x78;
      moby->state = 'Z';
    }
    MB_UpdateLightsTransition(lVar22,uVar37 + 0x60);
  }
  moby->damage = -1;
  uVar25 = MB_getTarget(0x4030000000000000,lVar22,0xff,uVar40 - 0x1e0);
  *(undefined4 *)((int)puVar15 + 0xf4) = uVar25;
  pMVar21 = g_heroMobyPtr;
  fVar4 = (moby->pos).x;
  bVar1 = moby->state;
  MVar29 = moby->modeBits;
  fVar5 = (moby->pos).y;
  bVar2 = moby->field43_0x70;
  fVar6 = (moby->rotation).z;
  uVar3 = moby->animationId;
  pMVar12 = *(MobyInstance **)(puVar15 + 0x1e);
  if (*(MobyInstance **)(puVar15 + 0x1e) == (MobyInstance *)0x0) {
    *(MobyInstance **)(puVar15 + 0x1e) = g_heroMobyPtr;
    pMVar12 = pMVar21;
  }
  if (5 < bVar1) {
    if (bVar1 < 0x5e) {
      if (bVar1 < 0x5a) {
        if ((bVar1 < 7) &&
           (MB_UpdateNavMoveTurning
                      (lVar22,uVar37 + 0xd0,(ulonglong)*(uint *)((int)pvVar11 + 0x120) + 0x10,
                       uVar37 + 0x40), (moby->field43_0x70 & 2U) != 0)) {
          uVar25 = *(undefined4 *)((int)pvVar11 + 0x120);
          puVar15[0x48] = (longlong)(int)(animationSpeed * 6.5);
          MB_SetAnimation(uVar25,1,0,*(undefined4 *)((int)puVar15 + 0x244));
          iVar26 = *(int *)((int)pvVar11 + 0x120);
          fVar4 = *(float *)(iVar26 + 0x10);
          (moby->pos).x = fVar4;
          fVar5 = *(float *)(iVar26 + 0x14);
          (moby->pos).y = fVar5;
          fVar6 = *(float *)(iVar26 + 0x18);
          (moby->pos).z = fVar6;
          (moby->pos).w = *(f32 *)(iVar26 + 0x1c);
          uVar3 = moby->animationId;
          (moby->pos).z = fVar6 - 0.1;
          if (uVar3 != '\x01') {
            MB_SetAnimation(lVar22,1,0,10);
            fVar4 = (moby->pos).x;
            fVar5 = (moby->pos).y;
          }
          moby->state = '\x03';
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
          fVar4 = (pMVar12->pos).x - fVar4;
          fVar5 = (pMVar12->pos).y - fVar5;
          dVar39 = ABS((double)fVar4);
          dVar43 = ABS((double)fVar5);
          *(float *)((int)puVar15 + 0x13c) = fVar4;
          *(float *)(puVar15 + 0x28) = fVar5;
          *(float *)((int)puVar15 + 0x144) = (float)(dVar39 - dVar43);
          uVar34 = (ulonglong)(*(uint *)((int)puVar15 + 0x13c) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar15 + 0x144) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar15 + 0x28) >> 0x1d) & 4;
          dVar44 = ABS((double)*(float *)((int)puVar15 + 0x13c));
          if ((double)*(float *)((int)puVar15 + 0x144) - dVar45 < 0.0) {
            dVar44 = dVar43;
          }
          fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar34 << 2));
          dVar43 = ABS((double)*(float *)(puVar15 + 0x28));
          if ((double)*(float *)((int)puVar15 + 0x144) - dVar45 < 0.0) {
            dVar43 = dVar39;
          }
          fVar5 = *(float *)(((uint)(uVar34 << 2) | 0x735900) + 4);
          if (dVar45 < dVar44) {
            lVar23 = uVar40 - 0x280;
            lVar32 = uVar40 - 0xb0;
            lVar35 = uVar40 - 0xa0;
            lVar38 = 2;
            fVar6 = (float)(dVar43 - dVar44) / (float)(dVar43 + dVar44);
            fVar7 = fVar6 * fVar6;
            *(float *)((int)puVar15 + 0x1ec) = fVar6;
            *(float *)((int)puVar15 + 0x1e4) = fVar6;
            *(float *)(puVar15 + 0x3d) = fVar6;
            *(float *)(puVar15 + 0x3c) = fVar6;
            fVar6 = fVar7 * fVar7;
            *(float *)((int)puVar15 + 0x1e4) = *(float *)((int)puVar15 + 0x1e4) * fVar7;
            *(float *)(puVar15 + 0x3d) = *(float *)(puVar15 + 0x3d) * fVar6;
            *(float *)((int)puVar15 + 0x1ec) = *(float *)((int)puVar15 + 0x1ec) * fVar6 * fVar7;
            do {
              *(float *)((int)lVar23 + 0x1e0) = *(float *)((int)lVar23 + 0x1d0) * fVar6 * fVar6;
              iVar26 = (int)lVar32;
              lVar23 = lVar23 + 8;
              lVar32 = lVar32 + 8;
              *(float *)((int)lVar35 + 4) = *(float *)(iVar26 + 4) * fVar6 * fVar6;
              lVar35 = lVar35 + 8;
              lVar38 = lVar38 + -1;
            } while (lVar38 != 0);
            lVar38 = 4;
            lVar35 = uVar40 - 0xb0;
            pfVar36 = (float *)&DAT_007358e0;
            lVar23 = lVar24;
            lVar32 = lVar35;
            do {
              fVar6 = *pfVar36;
              fVar7 = pfVar36[1];
              pfVar36 = pfVar36 + 2;
              *(float *)((int)lVar23 + 0x1e0) = *(float *)((int)lVar23 + 0x1e0) * fVar6;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar7;
              lVar32 = lVar32 + 8;
              lVar38 = lVar38 + -1;
            } while (lVar38 != 0);
            lVar23 = 2;
            do {
              iVar26 = (int)lVar24;
              iVar27 = (int)lVar35;
              lVar24 = lVar24 + 0x10;
              lVar35 = lVar35 + 0x10;
              dVar45 = (double)((float)(dVar45 + (double)*(float *)(iVar26 + 0x1e0)) +
                                *(float *)(iVar27 + 4) + *(float *)(iVar27 + 8) +
                               *(float *)(iVar27 + 0xc));
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            dVar45 = (double)((float)(dVar45 + 0.7853981852531433) * fVar4 + fVar5);
          }
          auVar47 = ZEXT416(0xffffffff);
          auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
          (moby->rotation).z = (float)dVar45;
          auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
          auVar47 = loadVectorLeftIndexed(0x40,0x346578);
          auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar47 = vectorMultiplyAddFloatingPoint
                              (auVar49,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60
                               ,auVar48);
          auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
          auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar25 = storeVectorElementWordIndexed
                             (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x128,
                              uVar37);
          *(undefined4 *)((int)pvVar11 + 0x128U & 0xfffffffc) = uVar25;
          moby->collision = (ushort *)0x0;
        }
      }
      else if (bVar1 == 0x5b) {
        if ((bVar2 & 2) != 0) {
          if (uVar3 != '\a') {
            MB_SetAnimation(lVar22,7,0,3);
          }
          moby->state = ']';
        }
      }
      else {
        uVar28 = MB_UpdateKick(moby,(KickVars *)((int)pvVar11 + 0x70));
        if ((uVar28 & 0x40) != 0) {
          iVar26 = *(int *)((int)pvVar11 + 0x120);
          iVar27 = M333_00346060(lVar22);
          if (iVar27 == 0) {
            *(int *)((int)pvVar11 + 0x120) = iVar26;
          }
          else {
            *(int *)((int)pvVar11 + 0x120) = iVar27;
            *(undefined1 *)(iVar26 + 0xbc) = 0;
            *(undefined1 *)(*(int *)((int)pvVar11 + 0x120) + 0xbc) = 1;
          }
          if (moby->animationId != '\x04') {
            MB_SetAnimation(lVar22,4,0,10);
          }
          auVar47 = ZEXT416(0xffffffff);
          auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
          moby->state = '\x01';
          auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
          auVar47 = loadVectorLeftIndexed(0x2c,0x346578);
          auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar47 = vectorMultiplyAddFloatingPoint
                              (auVar49,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60
                               ,auVar48);
          auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
          auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar25 = storeVectorElementWordIndexed
                             (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x134,
                              uVar37);
          *(undefined4 *)((int)pvVar11 + 0x134U & 0xfffffffc) = uVar25;
        }
        fVar9 = (moby->pos).z;
        uVar28 = (int)fVar9 >> 0x1f;
        if ((int)((uVar28 >> 1 ^ (uint)fVar9) - uVar28) < 0x40a00000) {
          DeleteMoby(moby);
          return;
        }
      }
    }
    else if ((bVar1 == 99) &&
            (uVar28 = MB_UpdateKick(moby,(KickVars *)((int)pvVar11 + 0x70)),
            (uVar28 & 0x40) != 0)) {
      moby->state = 'd';
      moby->unk58 = 0.0;
      moby->collision = (ushort *)0x0;
      iVar26 = DAT_010c5108;
      *(undefined2 *)((int)pvVar11 + 0x132) = 0x28;
      uVar25 = DAT_0083fda4;
      *(short *)((int)pvVar11 + 0x130) = (short)iVar26;
      M333_00345d08(lVar22,0,1,uVar25);
      M333_00345d08(lVar22,2,3,DAT_0083fda8);
      M333_00345d08(lVar22,4,5,DAT_0083fdac);
      M333_00345d08(lVar22,5,6,DAT_0083fdb0);
      M333_00345d08(lVar22,6,7,DAT_0083fdb4);
      M333_00345d08(lVar22,8,9,DAT_0083fdac);
      M333_00345d08(lVar22,9,10,DAT_0083fdb0);
      M333_00345d08(lVar22,10,0xb,DAT_0083fdb4);
      M333_00345d08(lVar22,0xc,0xd,DAT_0083fdb8);
      M333_00345d08(lVar22,0xe,0xf,DAT_0083fdb8);
      M333_00345d08(lVar22,0x10,0x11,DAT_0083fdbc);
      M333_00345d08(lVar22,0x14,0x15,DAT_0083fdbc);
      M333_00345d08(lVar22,0x12,0x13,DAT_0083fdc0);
      M333_00345d08(lVar22,0x16,0x17,DAT_0083fdc0);
      DeleteMoby(moby);
      return;
    }
    goto LAB_0034869c;
  }
  if (bVar1 == 5) {
    fVar4 = (pMVar12->pos).x - fVar4;
    fVar5 = (pMVar12->pos).y - fVar5;
    dVar43 = ABS((double)fVar4);
    dVar46 = ABS((double)fVar5);
    *(float *)((int)puVar15 + 0x10c) = fVar4;
    *(float *)(puVar15 + 0x22) = fVar5;
    *(float *)((int)puVar15 + 0x114) = (float)(dVar43 - dVar46);
    uVar34 = (ulonglong)(*(uint *)((int)puVar15 + 0x10c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar15 + 0x114) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar15 + 0x22) >> 0x1d) & 4;
    dVar39 = ABS((double)*(float *)((int)puVar15 + 0x10c));
    if ((double)*(float *)((int)puVar15 + 0x114) - dVar45 < 0.0) {
      dVar39 = dVar46;
    }
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar34 << 2));
    dVar46 = ABS((double)*(float *)(puVar15 + 0x22));
    if ((double)*(float *)((int)puVar15 + 0x114) - dVar45 < 0.0) {
      dVar46 = dVar43;
    }
    fVar5 = *(float *)(((uint)(uVar34 << 2) | 0x735900) + 4);
    dVar43 = dVar45;
    if (dVar45 < dVar39) {
      lVar23 = uVar40 - 0x280;
      lVar35 = uVar40 - 0x120;
      lVar32 = uVar40 - 0x130;
      lVar38 = 2;
      fVar6 = (float)(dVar46 - dVar39) / (float)(dVar46 + dVar39);
      fVar7 = fVar6 * fVar6;
      *(float *)((int)puVar15 + 0x16c) = fVar6;
      *(float *)((int)puVar15 + 0x164) = fVar6;
      *(float *)(puVar15 + 0x2d) = fVar6;
      *(float *)(puVar15 + 0x2c) = fVar6;
      fVar6 = fVar7 * fVar7;
      *(float *)((int)puVar15 + 0x164) = *(float *)((int)puVar15 + 0x164) * fVar7;
      *(float *)(puVar15 + 0x2d) = *(float *)(puVar15 + 0x2d) * fVar6;
      *(float *)((int)puVar15 + 0x16c) = *(float *)((int)puVar15 + 0x16c) * fVar6 * fVar7;
      do {
        *(float *)((int)lVar23 + 0x160) = *(float *)((int)lVar23 + 0x150) * fVar6 * fVar6;
        iVar26 = (int)lVar32;
        lVar32 = lVar32 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar35 + 4) = *(float *)(iVar26 + 4) * fVar6 * fVar6;
        lVar35 = lVar35 + 8;
        lVar38 = lVar38 + -1;
      } while (lVar38 != 0);
      lVar38 = 4;
      lVar35 = uVar40 - 0x130;
      pfVar36 = (float *)&DAT_007358e0;
      lVar23 = lVar24;
      lVar32 = lVar35;
      do {
        fVar6 = *pfVar36;
        fVar7 = pfVar36[1];
        pfVar36 = pfVar36 + 2;
        *(float *)((int)lVar23 + 0x160) = *(float *)((int)lVar23 + 0x160) * fVar6;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar7;
        lVar32 = lVar32 + 8;
        lVar38 = lVar38 + -1;
      } while (lVar38 != 0);
      lVar23 = 2;
      dVar39 = dVar45;
      do {
        iVar26 = (int)lVar24;
        iVar27 = (int)lVar35;
        lVar24 = lVar24 + 0x10;
        lVar35 = lVar35 + 0x10;
        dVar39 = (double)((float)(dVar39 + (double)*(float *)(iVar26 + 0x160)) +
                          *(float *)(iVar27 + 4) + *(float *)(iVar27 + 8) + *(float *)(iVar27 + 0xc)
                         );
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      dVar43 = (double)((float)(dVar39 + 0.7853981852531433) * fVar4 + fVar5);
    }
    OrganicDeltAngSpeed
              (dVar43,0x3f947ae140000000,0x3fd3333340000000,0x3fc99999a0000000,lVar22,&DAT_00346578,
               uVar37 + 300);
    uVar3 = moby->animationId;
    if (moby->updateId == uVar3) {
      dVar39 = (double)BlendAnimFrame(moby);
      uVar3 = moby->animationId;
      if (dVar39 == 19.0) {
        fVar5 = (pMVar12->pos).x - (moby->pos).x;
        fVar4 = (moby->pos).y;
        *(float *)(puVar15 + 0x14) = fVar5;
        fVar4 = (pMVar12->pos).y - fVar4;
        fVar6 = DAT_0083fbf4 * animationSpeed;
        *(float *)((int)puVar15 + 0xa4) = fVar4;
        fVar4 = SQRT(fVar5 * fVar5 + fVar4 * fVar4);
        dVar43 = (double)DAT_010c5100;
        *(float *)(puVar15 + 0x15) = (pMVar12->pos).z - (moby->pos).z;
        fVar9 = (pMVar12->pos).w;
        *(undefined4 *)(puVar15 + 0x15) = 0;
        *(f32 *)((int)puVar15 + 0xac) = fVar9;
        dVar39 = 10.0;
        dVar46 = (double)(fVar4 / fVar6);
        dVar43 = (double)(fVar4 - (float)(dVar43 * dVar46 + 2.0));
        if ((dVar43 <= 10.0) && (dVar39 = dVar43, dVar43 < dVar44)) {
          dVar39 = dVar44;
        }
        ClampVec3Magnitude(dVar39,(Vec4 *)(uVar40 - 0x1f0));
        lVar24 = uVar40 - 0x210;
        fVar4 = (moby->pos).y;
        fVar5 = (moby->pos).z;
        *(float *)(puVar15 + 0x14) = *(float *)(puVar15 + 0x14) + (moby->pos).x;
        *(float *)((int)puVar15 + 0xa4) = *(float *)((int)puVar15 + 0xa4) + fVar4;
        *(float *)(puVar15 + 0x15) = *(float *)(puVar15 + 0x15) + fVar5;
        GetBonePosition(lVar22,9,lVar24);
        fVar4 = (pMVar12->pos).x - *(float *)(puVar15 + 0x10);
        *(float *)(puVar15 + 0x12) = fVar4;
        fVar5 = (pMVar12->pos).y - *(float *)((int)puVar15 + 0x84);
        *(float *)((int)puVar15 + 0x94) = fVar5;
        fVar6 = g_FrameTimeSq;
        dVar42 = (double)SQRT(fVar4 * fVar4 + fVar5 * fVar5);
        *(float *)(puVar15 + 0x13) = (pMVar12->pos).z - *(float *)(puVar15 + 0x11);
        *(f32 *)((int)puVar15 + 0x9c) = (pMVar12->pos).w;
        dVar39 = (double)(fVar4 * (float)(dVar46 / dVar42));
        dVar43 = (double)(fVar5 * (float)(dVar46 / dVar42));
        dVar44 = dVar45;
        if (dVar45 - dVar42 < 0.0) {
          dVar44 = dVar39;
        }
        dVar41 = dVar45;
        if (dVar45 - dVar42 < 0.0) {
          dVar41 = dVar43;
        }
        if (dVar42 - dVar45 < 0.0) {
          dVar44 = dVar39;
        }
        if (dVar42 - dVar45 < 0.0) {
          dVar41 = dVar43;
        }
        *(float *)(puVar15 + 0x12) = (float)dVar44;
        *(float *)((int)puVar15 + 0x94) = (float)dVar41;
        dVar44 = (double)MB_computeLobVelocity
                                   (dVar46,(double)(fVar6 * -15.0),lVar24,uVar40 - 0x1f0,
                                    &DAT_00346578,&DAT_00720000,uVar40 - 0x188);
        *(float *)(puVar15 + 0x13) = (float)dVar44;
        iVar26 = FUN_00315198(lVar22,lVar24,uVar40 - 0x200);
        *(int *)((int)pvVar11 + 0x124) = iVar26;
        if (iVar26 != 0) {
          auVar47 = ZEXT416(0xffffffff);
          auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
          auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
          auVar47 = loadVectorLeftIndexed(0x28,0x346578);
          auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar49 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
          auVar50 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          uVar28 = *(uint *)(iVar26 + 0x78);
          uVar40 = (ulonglong)uVar28;
          auVar47 = ZEXT416(0xffffffff);
          auVar51 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
          auVar47 = vectorMultiplyAddFloatingPoint(auVar50,auVar49,auVar48);
          auVar48 = vectorShiftLeftIntegerWord(auVar51,auVar51);
          auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
          auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar25 = storeVectorElementWordIndexed
                             (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x20,
                              uVar40);
          *(undefined4 *)(uVar28 + 0x20 & 0xfffffffc) = uVar25;
          auVar47 = loadVectorLeftIndexed(0x90,0x346578);
          auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar48 = vectorMultiplyAddFloatingPoint
                              (auVar50,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60
                               ,auVar48);
          auVar47 = ZEXT416(0xffffffff);
          auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
          auVar50 = vectorShiftLeftIntegerWord(auVar47,auVar47);
          auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar48,0);
          auVar47 = vectorSplatHalfWord(auVar47,1);
          uVar14 = storeVectorElementHalfWordIndexed(auVar47,0xc,uVar40);
          *(undefined2 *)(uVar28 + 0xc) = uVar14;
          uVar14 = storeVectorElementHalfWordIndexed(auVar47,0xe,uVar40);
          *(undefined2 *)(uVar28 + 0xe) = uVar14;
          *(undefined1 *)(*(int *)((int)pvVar11 + 0x124) + 0x20) = 1;
          *(byte *)(*(int *)((int)pvVar11 + 0x124) + 0xbc) =
               *(byte *)(*(int *)((int)pvVar11 + 0x124) + 0xbc) | 3;
          auVar47 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar47 = vectorMultiplyAddFloatingPoint(auVar47,auVar49,auVar50);
          auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
          auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar25 = storeVectorElementWordIndexed
                             (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x128,
                              uVar37);
          *(undefined4 *)((int)pvVar11 + 0x128U & 0xfffffffc) = uVar25;
        }
        goto LAB_0034869c;
      }
    }
    if ((moby->field43_0x70 & 2U) != 0) {
      moby->state = '\x01';
      if (uVar3 != '\x04') {
        MB_SetAnimation(lVar22,4,0,3);
      }
      auVar47 = ZEXT416(0xffffffff);
      auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
      auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
      auVar47 = loadVectorLeftIndexed(0x2c,0x346578);
      auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar47 = vectorMultiplyAddFloatingPoint
                          (auVar49,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,
                           auVar48);
      auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
      auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar25 = storeVectorElementWordIndexed
                         (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x134,uVar37
                         );
      *(undefined4 *)((int)pvVar11 + 0x134U & 0xfffffffc) = uVar25;
    }
    goto LAB_0034869c;
  }
  if (bVar1 == 4) {
    fVar7 = fVar6 + 1.5707963;
    fVar8 = 3.1415925 - fVar6;
    if (fVar6 - (3.1415925 - fVar6) < 0.0) {
      fVar8 = fVar6;
    }
    fVar16 = 3.1415925 - fVar7;
    if (fVar7 - (3.1415925 - fVar7) < 0.0) {
      fVar16 = fVar7;
    }
    fVar17 = -3.1415925 - fVar6;
    if ((-3.1415925 - fVar6) - fVar8 < 0.0) {
      fVar17 = fVar8;
    }
    fVar6 = -3.1415925 - fVar7;
    if ((-3.1415925 - fVar7) - fVar16 < 0.0) {
      fVar6 = fVar16;
    }
    fVar7 = fVar17 * fVar17;
    fVar8 = fVar6 * fVar6;
    fVar19 = fVar7 * fVar7 * fVar17;
    iVar26 = *(int *)((int)pvVar11 + 0x120);
    *(undefined4 *)(puVar15 + 0xf) = 0;
    fVar16 = fVar8 * fVar8 * fVar6;
    fVar20 = fVar7 * fVar19;
    fVar18 = fVar8 * fVar16;
    fVar7 = (fVar7 * fVar20 * 2.601887e-06 +
            fVar20 * -0.0001980741 + fVar19 * 0.0083330255 + fVar7 * fVar17 * -0.16666657 + fVar17)
            * 2.0;
    fVar6 = (fVar8 * fVar18 * 2.601887e-06 +
            fVar18 * -0.0001980741 + fVar16 * 0.0083330255 + fVar8 * fVar6 * -0.16666657 + fVar6) *
            2.0;
    *(float *)((int)puVar15 + 0x74) = fVar7;
    *(float *)(puVar15 + 0xe) = fVar6;
    fVar6 = fVar6 + *(float *)(iVar26 + 0x10);
    *(float *)(puVar15 + 0xe) = fVar6;
    fVar6 = fVar4 - fVar6;
    fVar7 = fVar7 + *(float *)(iVar26 + 0x14);
    fVar8 = fVar5 - fVar7;
    *(float *)((int)puVar15 + 0x74) = fVar7;
    *(undefined4 *)(puVar15 + 0xf) = *(undefined4 *)(iVar26 + 0x18);
    if (0.2 < SQRT(fVar6 * fVar6 + fVar8 * fVar8)) {
      MB_UpdateNavMoveTurning(lVar22,uVar37 + 0xd0,uVar40 - 0x220,uVar37 + 0x40);
      bVar2 = moby->field43_0x70;
      fVar4 = (moby->pos).x;
      fVar5 = (moby->pos).y;
    }
    if ((bVar2 & 2) != 0) {
      fVar7 = fVar5 - (pMVar12->pos).y;
      fVar6 = fVar4 - (pMVar12->pos).x;
      if (6.0 <= SQRT(fVar6 * fVar6 + fVar7 * fVar7)) {
        fVar5 = fVar5 - GameCamera.posY;
        dVar39 = ABS((double)(fVar4 - GameCamera.posX));
        dVar43 = ABS((double)fVar5);
        *(float *)(puVar15 + 0x23) = fVar4 - GameCamera.posX;
        *(float *)((int)puVar15 + 0x11c) = fVar5;
        fVar4 = GameCamera.rot.radius;
        *(float *)(puVar15 + 0x24) = (float)(dVar39 - dVar43);
        uVar34 = (ulonglong)(*(uint *)(puVar15 + 0x23) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar15 + 0x24) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar15 + 0x11c) >> 0x1d) & 4;
        dVar44 = ABS((double)*(float *)(puVar15 + 0x23));
        if ((double)*(float *)(puVar15 + 0x24) - dVar45 < 0.0) {
          dVar44 = dVar43;
        }
        fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar34 << 2));
        fVar5 = *(float *)(((uint)(uVar34 << 2) | 0x735900) + 4);
        dVar43 = ABS((double)*(float *)((int)puVar15 + 0x11c));
        if ((double)*(float *)(puVar15 + 0x24) - dVar45 < 0.0) {
          dVar43 = dVar39;
        }
        if (dVar45 < dVar44) {
          lVar23 = uVar40 - 0x280;
          lVar35 = uVar40 - 0x100;
          lVar32 = uVar40 - 0x110;
          lVar38 = 2;
          fVar7 = (float)(dVar43 - dVar44) / (float)(dVar43 + dVar44);
          fVar8 = fVar7 * fVar7;
          *(float *)((int)puVar15 + 0x18c) = fVar7;
          *(float *)((int)puVar15 + 0x184) = fVar7;
          *(float *)(puVar15 + 0x31) = fVar7;
          *(float *)(puVar15 + 0x30) = fVar7;
          fVar7 = fVar8 * fVar8;
          *(float *)((int)puVar15 + 0x184) = *(float *)((int)puVar15 + 0x184) * fVar8;
          *(float *)(puVar15 + 0x31) = *(float *)(puVar15 + 0x31) * fVar7;
          *(float *)((int)puVar15 + 0x18c) = *(float *)((int)puVar15 + 0x18c) * fVar7 * fVar8;
          do {
            *(float *)((int)lVar23 + 0x180) = *(float *)((int)lVar23 + 0x170) * fVar7 * fVar7;
            iVar26 = (int)lVar32;
            lVar32 = lVar32 + 8;
            lVar23 = lVar23 + 8;
            *(float *)((int)lVar35 + 4) = *(float *)(iVar26 + 4) * fVar7 * fVar7;
            lVar35 = lVar35 + 8;
            lVar38 = lVar38 + -1;
          } while (lVar38 != 0);
          lVar38 = 4;
          lVar35 = uVar40 - 0x110;
          pfVar36 = (float *)&DAT_007358e0;
          lVar23 = lVar24;
          lVar32 = lVar35;
          do {
            fVar7 = *pfVar36;
            fVar8 = pfVar36[1];
            pfVar36 = pfVar36 + 2;
            *(float *)((int)lVar23 + 0x180) = *(float *)((int)lVar23 + 0x180) * fVar7;
            lVar23 = lVar23 + 8;
            *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar8;
            lVar32 = lVar32 + 8;
            lVar38 = lVar38 + -1;
          } while (lVar38 != 0);
          lVar23 = 2;
          do {
            iVar26 = (int)lVar24;
            iVar27 = (int)lVar35;
            lVar24 = lVar24 + 0x10;
            lVar35 = lVar35 + 0x10;
            dVar45 = (double)((float)(dVar45 + (double)*(float *)(iVar26 + 0x180)) +
                              *(float *)(iVar27 + 4) + *(float *)(iVar27 + 8) +
                             *(float *)(iVar27 + 0xc));
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          dVar45 = (double)((float)(dVar45 + 0.7853981852531433) * fVar6 + fVar5);
        }
        dVar44 = (double)FastSubRots(fVar4,(float)dVar45);
        if (dVar44 <= 0.5585053563117981) {
          if (moby->animationId != '\x03') {
            puVar15[0x48] = (longlong)(int)(animationSpeed * 6.5);
            MB_SetAnimation(lVar22,3,0,*(undefined4 *)((int)puVar15 + 0x244));
          }
          moby->state = '\x05';
          goto LAB_0034869c;
        }
      }
      iVar26 = *(int *)((int)pvVar11 + 0x120);
      iVar27 = M333_00346060(lVar22);
      *(int *)((int)pvVar11 + 0x120) = iVar27;
      if (iVar27 == 0) {
        *(int *)((int)pvVar11 + 0x120) = iVar26;
      }
      *(undefined1 *)(iVar26 + 0xbc) = 0;
      *(undefined1 *)(*(int *)((int)pvVar11 + 0x120) + 0xbc) = 1;
      if (moby->animationId != '\x04') {
        puVar15[0x48] = (longlong)(int)(animationSpeed * 7.5);
        MB_SetAnimation(lVar22,4,0,*(undefined4 *)((int)puVar15 + 0x244));
      }
      auVar47 = ZEXT416(0xffffffff);
      auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
      moby->state = '\x01';
      auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
      auVar47 = loadVectorLeftIndexed(0x2c,0x346578);
      auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar47 = vectorMultiplyAddFloatingPoint
                          (auVar49,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,
                           auVar48);
      auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
      auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar25 = storeVectorElementWordIndexed
                         (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x134,uVar37
                         );
      *(undefined4 *)((int)pvVar11 + 0x134U & 0xfffffffc) = uVar25;
    }
    goto LAB_0034869c;
  }
  if (bVar1 != 3) {
    if (bVar1 == 1) {
      MB_UpdateNavMoveTurning
                (lVar22,uVar37 + 0xd0,(ulonglong)*(uint *)((int)pvVar11 + 0x120) + 0x10,
                 uVar37 + 0x40);
      iVar26 = *(int *)((int)pvVar11 + 0x120);
      fVar4 = (moby->pos).y;
      fVar5 = (moby->pos).x;
      fVar7 = fVar4 - *(float *)(iVar26 + 0x14);
      fVar8 = fVar5 - *(float *)(iVar26 + 0x10);
      fVar6 = (moby->pos).z - *(float *)(iVar26 + 0x18);
      if ((double)SQRT(fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7) < dVar44) {
        fVar4 = *(float *)(iVar26 + 0x14) - fVar4;
        fVar5 = *(float *)(iVar26 + 0x10) - fVar5;
        dVar43 = ABS((double)fVar4);
        dVar39 = ABS((double)fVar5);
        *(float *)(puVar15 + 0x29) = fVar5;
        *(float *)((int)puVar15 + 0x14c) = fVar4;
        fVar4 = (moby->rotation).z;
        *(float *)(puVar15 + 0x2a) = (float)(dVar39 - dVar43);
        uVar34 = (ulonglong)(*(uint *)(puVar15 + 0x29) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar15 + 0x2a) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar15 + 0x14c) >> 0x1d) & 4;
        dVar44 = ABS((double)*(float *)(puVar15 + 0x29));
        if ((double)*(float *)(puVar15 + 0x2a) - dVar45 < 0.0) {
          dVar44 = dVar43;
        }
        fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar34 << 2));
        fVar5 = *(float *)(((uint)(uVar34 << 2) | 0x735900) + 4);
        dVar43 = ABS((double)*(float *)((int)puVar15 + 0x14c));
        if ((double)*(float *)(puVar15 + 0x2a) - dVar45 < 0.0) {
          dVar43 = dVar39;
        }
        if (dVar45 < dVar44) {
          lVar23 = uVar40 - 0x280;
          lVar35 = uVar40 - 0x80;
          lVar32 = uVar40 - 0x90;
          lVar38 = 2;
          fVar7 = (float)(dVar43 - dVar44) / (float)(dVar43 + dVar44);
          fVar8 = fVar7 * fVar7;
          *(float *)((int)puVar15 + 0x20c) = fVar7;
          *(float *)((int)puVar15 + 0x204) = fVar7;
          *(float *)(puVar15 + 0x41) = fVar7;
          *(float *)(puVar15 + 0x40) = fVar7;
          fVar7 = fVar8 * fVar8;
          *(float *)((int)puVar15 + 0x204) = *(float *)((int)puVar15 + 0x204) * fVar8;
          *(float *)(puVar15 + 0x41) = *(float *)(puVar15 + 0x41) * fVar7;
          *(float *)((int)puVar15 + 0x20c) = *(float *)((int)puVar15 + 0x20c) * fVar7 * fVar8;
          do {
            *(float *)((int)lVar23 + 0x200) = *(float *)((int)lVar23 + 0x1f0) * fVar7 * fVar7;
            iVar26 = (int)lVar32;
            lVar32 = lVar32 + 8;
            lVar23 = lVar23 + 8;
            *(float *)((int)lVar35 + 4) = *(float *)(iVar26 + 4) * fVar7 * fVar7;
            lVar35 = lVar35 + 8;
            lVar38 = lVar38 + -1;
          } while (lVar38 != 0);
          lVar38 = 4;
          lVar35 = uVar40 - 0x90;
          pfVar36 = (float *)&DAT_007358e0;
          lVar23 = lVar24;
          lVar32 = lVar35;
          do {
            fVar7 = *pfVar36;
            fVar8 = pfVar36[1];
            pfVar36 = pfVar36 + 2;
            *(float *)((int)lVar23 + 0x200) = *(float *)((int)lVar23 + 0x200) * fVar7;
            lVar23 = lVar23 + 8;
            *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar8;
            lVar32 = lVar32 + 8;
            lVar38 = lVar38 + -1;
          } while (lVar38 != 0);
          lVar23 = 2;
          do {
            iVar26 = (int)lVar24;
            iVar27 = (int)lVar35;
            lVar24 = lVar24 + 0x10;
            lVar35 = lVar35 + 0x10;
            dVar45 = (double)((float)(dVar45 + (double)*(float *)(iVar26 + 0x200)) +
                              *(float *)(iVar27 + 4) + *(float *)(iVar27 + 8) +
                             *(float *)(iVar27 + 0xc));
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          dVar45 = (double)((float)(dVar45 + 0.7853981852531433) * fVar6 + fVar5);
        }
        dVar44 = (double)FastSubRots(fVar4,(float)dVar45);
        if (dVar44 < 0.2617993950843811) {
          fVar4 = (moby->pos).y - (pMVar12->pos).y;
          fVar5 = (moby->pos).x - (pMVar12->pos).x;
          if (SQRT(fVar5 * fVar5 + fVar4 * fVar4) <= 6.0) {
            auVar47 = ZEXT416(0xffffffff);
            auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
            auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
            auVar47 = loadVectorLeftIndexed(0x2c,0x346578);
            auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            iVar26 = *(int *)((int)pvVar11 + 0x120);
            auVar47 = vectorMultiplyAddFloatingPoint
                                (auVar49,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 |
                                         auVar47 << 0x60,auVar48);
            auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
            auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar25 = storeVectorElementWordIndexed
                               (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x134,
                                uVar37);
            *(undefined4 *)((int)pvVar11 + 0x134U & 0xfffffffc) = uVar25;
            iVar27 = M333_00346060(lVar22);
            *(int *)((int)pvVar11 + 0x120) = iVar27;
            if (iVar27 == 0) {
              *(int *)((int)pvVar11 + 0x120) = iVar26;
            }
            *(undefined1 *)(iVar26 + 0xbc) = 0;
            *(undefined1 *)(*(int *)((int)pvVar11 + 0x120) + 0xbc) = 1;
          }
          else {
            if (moby->animationId != '\x05') {
              MB_SetAnimation(lVar22,5,0,10);
            }
            moby->state = '\x06';
          }
          goto LAB_0034869c;
        }
      }
      iVar26 = FastDecTimerS32(uVar37 + 0x134);
      if (iVar26 != 0) {
        iVar26 = *(int *)((int)pvVar11 + 0x120);
        iVar27 = M333_00346060(lVar22);
        *(int *)((int)pvVar11 + 0x120) = iVar27;
        if (iVar27 == 0) {
          *(int *)((int)pvVar11 + 0x120) = iVar26;
        }
        auVar47 = ZEXT416(0xffffffff);
        auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
        *(undefined1 *)(iVar26 + 0xbc) = 0;
        auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
        *(undefined1 *)(*(int *)((int)pvVar11 + 0x120) + 0xbc) = 1;
        auVar47 = loadVectorLeftIndexed(0x2c,0x346578);
        auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar47 = vectorMultiplyAddFloatingPoint
                            (auVar49,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,
                             auVar48);
        auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
        auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar25 = storeVectorElementWordIndexed
                           (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x134,
                            uVar37);
        *(undefined4 *)((int)pvVar11 + 0x134U & 0xfffffffc) = uVar25;
      }
    }
    else if (bVar1 == 0) {
      moby->modeBits = MVar29 | CAN_BE_AUTO_TARGETED;
      *(undefined1 *)((int)pvVar11 + 0x29) = 1;
      *(undefined4 *)((int)pvVar11 + 0x20) = 0x40000000;
      MB_InitDefaultParams((float *)((int)pvVar11 + 0xd0));
      *(undefined4 *)((int)pvVar11 + 0x114) = 0x3e800000;
      *(undefined4 *)((int)pvVar11 + 0x10c) = 0x3cf5c28f;
      *(undefined4 *)((int)pvVar11 + 0x110) = 0x3e99999a;
      fVar5 = DAT_0083fbf0;
      fVar4 = g_FrameTime;
      *(undefined4 *)((int)pvVar11 + 0xdc) = 0x40000000;
      *(undefined4 *)((int)pvVar11 + 0xd8) = 0x40000000;
      *(float *)((int)pvVar11 + 0xf4) = fVar5 * fVar4;
      uVar31 = FastDoubleToInt(0x4031000000000000);
      *(undefined1 *)((int)pvVar11 + 0x58) = uVar31;
      uVar31 = FastDoubleToInt(0x4024ccccc0000000);
      *(undefined1 *)((int)pvVar11 + 0x5a) = uVar31;
      *(undefined4 *)((int)pvVar11 + 0x4c) = 0;
      *(undefined4 *)((int)pvVar11 + 0x48) = 0;
      *(undefined4 *)((int)pvVar11 + 0x44) = 0;
      *(undefined4 *)((int)pvVar11 + 0x40) = 0;
      iVar26 = M333_00346060(lVar22);
      *(int *)((int)pvVar11 + 0x120) = iVar26;
      *(undefined1 *)(iVar26 + 0xbc) = 1;
      auVar47 = ZEXT416(0xffffffff);
      auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
      auVar49 = loadVectorLeftIndexed(0x28,0x346578);
      auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
      auVar47 = auVar49 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar47 = vectorMultiplyAddFloatingPoint
                          (auVar49,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,
                           auVar48);
      auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
      auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar25 = storeVectorElementWordIndexed
                         (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x128,uVar37
                         );
      *(undefined4 *)((int)pvVar11 + 0x128U & 0xfffffffc) = uVar25;
      if (moby->animationId != '\x04') {
        MB_SetAnimation(lVar22,4,0,0);
      }
      auVar47 = ZEXT416(0xffffffff);
      auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
      moby->state = '\x01';
      auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
      auVar47 = loadVectorLeftIndexed(0x2c,0x346578);
      auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar47 = vectorMultiplyAddFloatingPoint
                          (auVar49,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,
                           auVar48);
      auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
      auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar25 = storeVectorElementWordIndexed
                         (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x134,uVar37
                         );
      *(undefined4 *)((int)pvVar11 + 0x134U & 0xfffffffc) = uVar25;
    }
    goto LAB_0034869c;
  }
  fVar6 = (pMVar12->pos).x;
  fVar7 = (pMVar12->pos).y;
  fVar8 = fVar6 - fVar4;
  fVar16 = fVar7 - fVar5;
  fVar5 = fVar5 - fVar7;
  fVar4 = fVar4 - fVar6;
  dVar43 = ABS((double)fVar8);
  dVar39 = ABS((double)fVar16);
  *(float *)(puVar15 + 0x26) = fVar8;
  *(float *)((int)puVar15 + 0x134) = fVar16;
  *(float *)(puVar15 + 0x27) = (float)(dVar43 - dVar39);
  uVar33 = (ulonglong)(*(uint *)(puVar15 + 0x26) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar15 + 0x27) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar15 + 0x134) >> 0x1d) & 4;
  dVar46 = (double)SQRT(fVar4 * fVar4 + fVar5 * fVar5);
  uVar34 = uVar33 << 2;
  dVar44 = ABS((double)*(float *)(puVar15 + 0x26));
  if ((double)*(float *)(puVar15 + 0x27) - dVar45 < 0.0) {
    dVar44 = dVar39;
  }
  fVar4 = *(float *)(&g_atanQuadrantTable + (int)uVar34);
  dVar39 = ABS((double)*(float *)((int)puVar15 + 0x134));
  if ((double)*(float *)(puVar15 + 0x27) - dVar45 < 0.0) {
    dVar39 = dVar43;
  }
  fVar5 = *(float *)(((uint)(uVar33 << 2) | 0x735900) + 4);
  dVar43 = dVar45;
  if (dVar45 < dVar44) {
    lVar23 = uVar40 - 0x280;
    lVar35 = uVar40 - 0xc0;
    lVar32 = uVar40 - 0xd0;
    lVar38 = 2;
    fVar6 = (float)(dVar39 - dVar44) / (float)(dVar39 + dVar44);
    fVar7 = fVar6 * fVar6;
    *(float *)((int)puVar15 + 0x1cc) = fVar6;
    *(float *)((int)puVar15 + 0x1c4) = fVar6;
    *(float *)(puVar15 + 0x39) = fVar6;
    *(float *)(puVar15 + 0x38) = fVar6;
    fVar6 = fVar7 * fVar7;
    *(float *)((int)puVar15 + 0x1c4) = *(float *)((int)puVar15 + 0x1c4) * fVar7;
    *(float *)(puVar15 + 0x39) = *(float *)(puVar15 + 0x39) * fVar6;
    *(float *)((int)puVar15 + 0x1cc) = *(float *)((int)puVar15 + 0x1cc) * fVar6 * fVar7;
    do {
      *(float *)((int)lVar23 + 0x1c0) = *(float *)((int)lVar23 + 0x1b0) * fVar6 * fVar6;
      iVar26 = (int)lVar32;
      lVar32 = lVar32 + 8;
      lVar23 = lVar23 + 8;
      *(float *)((int)lVar35 + 4) = *(float *)(iVar26 + 4) * fVar6 * fVar6;
      lVar35 = lVar35 + 8;
      lVar38 = lVar38 + -1;
    } while (lVar38 != 0);
    lVar38 = 4;
    lVar35 = uVar40 - 0xd0;
    uVar34 = ZEXT48(&DAT_007358e0);
    lVar23 = lVar24;
    lVar32 = lVar35;
    do {
      pfVar36 = (float *)uVar34;
      fVar6 = pfVar36[1];
      uVar34 = uVar34 + 8;
      *(float *)((int)lVar23 + 0x1c0) = *(float *)((int)lVar23 + 0x1c0) * *pfVar36;
      lVar23 = lVar23 + 8;
      *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar6;
      lVar32 = lVar32 + 8;
      lVar38 = lVar38 + -1;
    } while (lVar38 != 0);
    lVar32 = 2;
    lVar23 = lVar24;
    dVar44 = dVar45;
    do {
      iVar26 = (int)lVar23;
      iVar27 = (int)lVar35;
      lVar23 = lVar23 + 0x10;
      lVar35 = lVar35 + 0x10;
      dVar44 = (double)((float)(dVar44 + (double)*(float *)(iVar26 + 0x1c0)) +
                        *(float *)(iVar27 + 4) + *(float *)(iVar27 + 8) + *(float *)(iVar27 + 0xc));
      lVar32 = lVar32 + -1;
    } while (lVar32 != 0);
    dVar43 = (double)((float)(dVar44 + 0.7853981852531433) * fVar4 + fVar5);
  }
  OrganicDeltAngSpeed
            (dVar43,0x3f947ae140000000,0x3fd3333340000000,0x3fc99999a0000000,lVar22,uVar34,
             uVar37 + 300);
  if (((20.0 <= dVar46) || (dVar46 <= 8.0)) ||
     (iVar26 = FastDecTimerS32(uVar37 + 0x128), iVar26 == 0)) {
LAB_00347990:
    if ((*(int *)((int)pvVar11 + 0x38) == 0) || (dVar46 <= 0.5)) goto LAB_0034869c;
  }
  else {
    fVar4 = (moby->pos).x - GameCamera.posX;
    fVar5 = (moby->pos).y - GameCamera.posY;
    dVar39 = ABS((double)fVar4);
    dVar43 = ABS((double)fVar5);
    *(float *)((int)puVar15 + 0x124) = fVar4;
    *(float *)(puVar15 + 0x25) = fVar5;
    fVar4 = GameCamera.rot.radius;
    *(float *)((int)puVar15 + 300) = (float)(dVar39 - dVar43);
    uVar34 = (ulonglong)(*(uint *)((int)puVar15 + 0x124) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar15 + 300) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar15 + 0x25) >> 0x1d) & 4;
    dVar44 = ABS((double)*(float *)((int)puVar15 + 0x124));
    if ((double)*(float *)((int)puVar15 + 300) - dVar45 < 0.0) {
      dVar44 = dVar43;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar34 << 2));
    dVar43 = ABS((double)*(float *)(puVar15 + 0x25));
    if ((double)*(float *)((int)puVar15 + 300) - dVar45 < 0.0) {
      dVar43 = dVar39;
    }
    fVar6 = *(float *)(((uint)(uVar34 << 2) | 0x735900) + 4);
    if (dVar45 < dVar44) {
      lVar23 = uVar40 - 0x280;
      lVar35 = uVar40 - 0xe0;
      lVar32 = uVar40 - 0xf0;
      lVar38 = 2;
      fVar7 = (float)(dVar43 - dVar44) / (float)(dVar43 + dVar44);
      fVar8 = fVar7 * fVar7;
      *(float *)((int)puVar15 + 0x1ac) = fVar7;
      *(float *)((int)puVar15 + 0x1a4) = fVar7;
      *(float *)(puVar15 + 0x35) = fVar7;
      *(float *)(puVar15 + 0x34) = fVar7;
      fVar7 = fVar8 * fVar8;
      *(float *)((int)puVar15 + 0x1a4) = *(float *)((int)puVar15 + 0x1a4) * fVar8;
      *(float *)(puVar15 + 0x35) = *(float *)(puVar15 + 0x35) * fVar7;
      *(float *)((int)puVar15 + 0x1ac) = *(float *)((int)puVar15 + 0x1ac) * fVar7 * fVar8;
      do {
        *(float *)((int)lVar23 + 0x1a0) = *(float *)((int)lVar23 + 400) * fVar7 * fVar7;
        iVar26 = (int)lVar32;
        lVar32 = lVar32 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar35 + 4) = *(float *)(iVar26 + 4) * fVar7 * fVar7;
        lVar35 = lVar35 + 8;
        lVar38 = lVar38 + -1;
      } while (lVar38 != 0);
      lVar38 = 4;
      lVar35 = uVar40 - 0xf0;
      pfVar36 = (float *)&DAT_007358e0;
      lVar23 = lVar24;
      lVar32 = lVar35;
      do {
        fVar7 = *pfVar36;
        fVar8 = pfVar36[1];
        pfVar36 = pfVar36 + 2;
        *(float *)((int)lVar23 + 0x1a0) = *(float *)((int)lVar23 + 0x1a0) * fVar7;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar8;
        lVar32 = lVar32 + 8;
        lVar38 = lVar38 + -1;
      } while (lVar38 != 0);
      lVar23 = 2;
      do {
        iVar26 = (int)lVar24;
        iVar27 = (int)lVar35;
        lVar24 = lVar24 + 0x10;
        lVar35 = lVar35 + 0x10;
        dVar45 = (double)((float)(dVar45 + (double)*(float *)(iVar26 + 0x1a0)) +
                          *(float *)(iVar27 + 4) + *(float *)(iVar27 + 8) + *(float *)(iVar27 + 0xc)
                         );
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      dVar45 = (double)((float)(dVar45 + 0.7853981852531433) * fVar5 + fVar6);
    }
    dVar44 = (double)FastSubRots(fVar4,(float)dVar45);
    if (0.5585053563117981 <= dVar44) goto LAB_00347990;
  }
  uVar25 = *(undefined4 *)((int)pvVar11 + 0x120);
  puVar15[0x48] = (longlong)(int)(animationSpeed * 6.5);
  MB_SetAnimation(uVar25,1,0,*(undefined4 *)((int)puVar15 + 0x244));
  if (moby->animationId != '\x02') {
    puVar15[0x48] = (longlong)(int)(animationSpeed * 7.5);
    MB_SetAnimation(lVar22,2,0,*(undefined4 *)((int)puVar15 + 0x244));
  }
  moby->state = '\x04';
  moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
  moby->collision = moby->pClass->collision;
LAB_0034869c:
  MB_ColorDyingMoby(lVar22,uVar37 + 0x60);
  *(undefined4 *)((int)pvVar11 + 0x38) = 0;
  return;
}


