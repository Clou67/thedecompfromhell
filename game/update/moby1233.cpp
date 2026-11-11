// game/update/moby1233.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x216430-0x217790
#include "game/update/moby1233.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x0216430 (0x468 bytes)
// inlined: FastAtan2 @0x216564, FastAtan2 @0x2166ec
MobyInstance *
M1232_00216430
          (double param_1,float *param_2,float *param_3,float param_4,undefined8 param_5,
          float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  ulonglong *puVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  MobyInstance *pMVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  float *pfVar18;
  longlong lVar17;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  ulonglong in_f31;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar14 = uVar11 - 0xf0;
  puVar7 = (ulonglong *)lVar14;
  *puVar7 = uVar11;
  puVar7[0x20] = in_LR;
  puVar7[0x1d] = in_f31;
  puVar7[0x1c] = unaff_r31;
  puVar7[0x1a] = unaff_r29;
  puVar7[0x19] = unaff_r28;
  puVar7[0x1b] = unaff_r30;
  puVar7[0x18] = unaff_r27;
  pMVar12 = CreateMoby(ROCKET_04D1);
  if (pMVar12 != (MobyInstance *)0x0) {
    pMVar12->updateDistance = -1;
    pMVar12->drawDistance = 0x7f;
    pMVar12->enabled = '\x01';
    pMVar12->state = '\0';
    fVar1 = 0.0;
    (pMVar12->rotation).x = 0.0;
    fVar4 = param_3[2];
    pfVar5 = (float *)pMVar12->pVar;
    fVar6 = ABS(param_3[2]);
    fVar3 = SQRT(*param_3 * *param_3 + param_3[1] * param_3[1]);
    fVar2 = ABS(fVar3);
    *(float *)((int)puVar7 + 0x74) = fVar3;
    *(float *)(puVar7 + 0xf) = fVar2 - fVar6;
    uVar15 = (ulonglong)(*(uint *)((int)puVar7 + 0x74) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar7 + 0xf) >> 0x1e) & 2 | (ulonglong)((uint)fVar4 >> 0x1d) & 4
    ;
    fVar4 = ABS(*(float *)((int)puVar7 + 0x74));
    if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
      fVar4 = fVar6;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
    if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
      fVar6 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    fVar8 = fVar1;
    if (0.0 < fVar4) {
      lVar13 = uVar11 - 0xe0;
      lVar16 = uVar11 - 0x54;
      lVar17 = uVar11 - 0x44;
      lVar19 = 2;
      fVar4 = (fVar6 - fVar4) / (fVar6 + fVar4);
      fVar6 = fVar4 * fVar4;
      *(float *)(puVar7 + 0x15) = fVar4;
      *(float *)(puVar7 + 0x14) = fVar4;
      *(float *)((int)puVar7 + 0xa4) = fVar4;
      *(float *)((int)puVar7 + 0x9c) = fVar4;
      fVar4 = fVar6 * fVar6;
      *(float *)(puVar7 + 0x14) = *(float *)(puVar7 + 0x14) * fVar6;
      *(float *)((int)puVar7 + 0xa4) = *(float *)((int)puVar7 + 0xa4) * fVar4;
      *(float *)(puVar7 + 0x15) = *(float *)(puVar7 + 0x15) * fVar4 * fVar6;
      do {
        *(float *)((int)lVar13 + 0x9c) = *(float *)((int)lVar13 + 0x8c) * fVar4 * fVar4;
        iVar9 = (int)lVar16;
        lVar13 = lVar13 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)(iVar9 + 4) * fVar4 * fVar4;
        lVar17 = lVar17 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar17 = uVar11 - 0x54;
      pfVar18 = (float *)&DAT_007358e0;
      lVar19 = 4;
      lVar13 = lVar14;
      lVar16 = lVar17;
      do {
        fVar4 = *pfVar18;
        fVar6 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar13 + 0x9c) = *(float *)((int)lVar13 + 0x9c) * fVar4;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar6;
        lVar16 = lVar16 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar16 = 2;
      lVar13 = lVar14;
      fVar4 = fVar1;
      do {
        iVar9 = (int)lVar13;
        lVar13 = lVar13 + 0x10;
        iVar10 = (int)lVar17;
        lVar17 = lVar17 + 0x10;
        fVar4 = fVar4 + *(float *)(iVar9 + 0x9c) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                *(float *)(iVar10 + 0xc);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      fVar8 = (fVar4 + 0.7853982) * fVar3 + fVar2;
    }
    (pMVar12->rotation).y = -fVar8;
    fVar4 = *param_3;
    fVar6 = param_3[1];
    fVar3 = ABS(*param_3);
    fVar2 = ABS(param_3[1]);
    *(float *)(puVar7 + 0xe) = fVar3 - fVar2;
    uVar15 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1e) & 2 | (ulonglong)((uint)fVar6 >> 0x1d) & 4
    ;
    fVar4 = fVar3;
    if (*(float *)(puVar7 + 0xe) - 0.0 < 0.0) {
      fVar4 = fVar2;
    }
    fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
    if (*(float *)(puVar7 + 0xe) - 0.0 < 0.0) {
      fVar2 = fVar3;
    }
    fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    if (0.0 < fVar4) {
      lVar13 = uVar11 - 0xe0;
      lVar16 = uVar11 - 0x74;
      lVar17 = uVar11 - 100;
      lVar19 = 2;
      fVar4 = (fVar2 - fVar4) / (fVar2 + fVar4);
      fVar2 = fVar4 * fVar4;
      *(float *)(puVar7 + 0x11) = fVar4;
      *(float *)(puVar7 + 0x10) = fVar4;
      *(float *)((int)puVar7 + 0x84) = fVar4;
      *(float *)((int)puVar7 + 0x7c) = fVar4;
      fVar4 = fVar2 * fVar2;
      *(float *)(puVar7 + 0x10) = *(float *)(puVar7 + 0x10) * fVar2;
      *(float *)((int)puVar7 + 0x84) = *(float *)((int)puVar7 + 0x84) * fVar4;
      *(float *)(puVar7 + 0x11) = *(float *)(puVar7 + 0x11) * fVar4 * fVar2;
      do {
        *(float *)((int)lVar13 + 0x7c) = *(float *)((int)lVar13 + 0x6c) * fVar4 * fVar4;
        iVar9 = (int)lVar16;
        lVar13 = lVar13 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)(iVar9 + 4) * fVar4 * fVar4;
        lVar17 = lVar17 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar17 = uVar11 - 0x74;
      pfVar18 = (float *)&DAT_007358e0;
      lVar19 = 4;
      lVar13 = lVar14;
      lVar16 = lVar17;
      do {
        fVar4 = *pfVar18;
        fVar2 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar13 + 0x7c) = *(float *)((int)lVar13 + 0x7c) * fVar4;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar2;
        lVar16 = lVar16 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar13 = 2;
      do {
        iVar9 = (int)lVar14;
        iVar10 = (int)lVar17;
        lVar14 = lVar14 + 0x10;
        lVar17 = lVar17 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar9 + 0x7c) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                *(float *)(iVar10 + 0xc);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar6 + fVar3;
    }
    (pMVar12->rotation).z = fVar1;
    (pMVar12->pos).x = *param_2;
    (pMVar12->pos).y = param_2[1];
    (pMVar12->pos).z = param_2[2];
    (pMVar12->pos).w = param_2[3];
    pfVar5[4] = *param_2;
    pfVar5[5] = param_2[1];
    pfVar5[6] = param_2[2];
    pfVar5[7] = param_2[3];
    *pfVar5 = *param_3;
    pfVar5[1] = param_3[1];
    pfVar5[2] = param_3[2];
    fVar1 = param_3[3];
    pfVar5[8] = param_4;
    pfVar5[3] = fVar1;
    pfVar5[10] = (float)param_1;
    *(undefined2 *)(pfVar5 + 9) = 1;
    pfVar5[0xb] = param_6;
    UpdateMobyTransform(pMVar12);
  }
  return pMVar12;
}


// 0x0216898 (0x11c bytes)
longlong FUN_00216898(int param_1,undefined2 param_2)

{
  f32 fVar1;
  f32 fVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  MobyInstance *pMVar6;
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
  
  pMVar6 = CreateMoby(ROCKET_04D1);
  if (pMVar6 != (MobyInstance *)0x0) {
    pvVar3 = pMVar6->pVar;
    pMVar6->updateDistance = -1;
    pMVar6->drawDistance = 0x7f;
    pMVar6->enabled = '\x01';
    pMVar6->state = '\x01';
    *(int *)((int)pvVar3 + 0x20) = param_1;
    *(undefined2 *)((int)pvVar3 + 0x24) = 1;
    *(undefined2 *)((int)pvVar3 + 0x26) = param_2;
    GetBonePosition(param_1,param_2,(longlong)(int)pMVar6 + 0x10);
    fVar1 = *(f32 *)(param_1 + 0x44);
    (pMVar6->rotation).x = *(f32 *)(param_1 + 0x40);
    fVar2 = *(f32 *)(param_1 + 0x48);
    (pMVar6->rotation).y = fVar1;
    fVar1 = *(f32 *)(param_1 + 0x4c);
    (pMVar6->rotation).z = fVar2;
    (pMVar6->rotation).w = fVar1;
    puVar4 = (undefined4 *)(param_1 + 0xc0U & 0xfffffff0);
    uVar9 = puVar4[2];
    uVar8 = puVar4[1];
    uVar7 = *puVar4;
    puVar5 = (undefined4 *)(param_1 + 0xd0U & 0xfffffff0);
    uVar13 = puVar5[3];
    uVar12 = puVar5[2];
    uVar11 = puVar5[1];
    uVar10 = *puVar5;
    puVar5 = (undefined4 *)(param_1 + 0xe0U & 0xfffffff0);
    uVar17 = puVar5[3];
    uVar16 = puVar5[2];
    uVar15 = puVar5[1];
    uVar14 = *puVar5;
    puVar5 = (undefined4 *)((uint)&pMVar6->transform & 0xfffffff0);
    puVar5[3] = puVar4[3];
    puVar5[2] = uVar9;
    puVar5[1] = uVar8;
    *puVar5 = uVar7;
    puVar4 = (undefined4 *)((uint)&(pMVar6->transform).v1 & 0xfffffff0);
    puVar4[3] = uVar13;
    puVar4[2] = uVar12;
    puVar4[1] = uVar11;
    *puVar4 = uVar10;
    puVar4 = (undefined4 *)((uint)&(pMVar6->transform).v2 & 0xfffffff0);
    puVar4[3] = uVar17;
    puVar4[2] = uVar16;
    puVar4[1] = uVar15;
    *puVar4 = uVar14;
    *(f32 *)((int)pvVar3 + 0x10) = (pMVar6->pos).x;
    *(f32 *)((int)pvVar3 + 0x14) = (pMVar6->pos).y;
    *(f32 *)((int)pvVar3 + 0x18) = (pMVar6->pos).z;
    *(f32 *)((int)pvVar3 + 0x1c) = (pMVar6->pos).w;
    pMVar6->collision = (ushort *)0x0;
    UpdateMobyTransform(pMVar6);
  }
  return (longlong)(int)pMVar6;
}


// 0x02169b4 (0x128 bytes)
void FUN_002169b4(double param_1,MobyInstance *param_2,undefined4 *param_3,undefined8 param_4,
                 undefined4 param_5)

{
  MobyModeBit MVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
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
  
  puVar2 = (undefined4 *)param_2->pVar;
  iVar3 = puVar2[8];
  puVar2[10] = (float)param_1;
  (param_2->rotation).x = *(f32 *)(iVar3 + 0x40);
  (param_2->rotation).y = *(f32 *)(iVar3 + 0x44);
  (param_2->rotation).z = *(f32 *)(iVar3 + 0x48);
  (param_2->rotation).w = *(f32 *)(iVar3 + 0x4c);
  iVar3 = puVar2[8];
  puVar4 = (undefined4 *)(iVar3 + 0xd0U & 0xfffffff0);
  uVar9 = puVar4[3];
  uVar8 = puVar4[2];
  uVar7 = puVar4[1];
  uVar6 = *puVar4;
  puVar4 = (undefined4 *)(iVar3 + 0xe0U & 0xfffffff0);
  uVar13 = puVar4[3];
  uVar12 = puVar4[2];
  uVar11 = puVar4[1];
  uVar10 = *puVar4;
  puVar4 = (undefined4 *)(iVar3 + 0xc0U & 0xfffffff0);
  uVar16 = puVar4[2];
  uVar15 = puVar4[1];
  uVar14 = *puVar4;
  puVar5 = (undefined4 *)((uint)&param_2->transform & 0xfffffff0);
  puVar5[3] = puVar4[3];
  puVar5[2] = uVar16;
  puVar5[1] = uVar15;
  *puVar5 = uVar14;
  puVar4 = (undefined4 *)((uint)&(param_2->transform).v1 & 0xfffffff0);
  puVar4[3] = uVar9;
  puVar4[2] = uVar8;
  puVar4[1] = uVar7;
  *puVar4 = uVar6;
  puVar4 = (undefined4 *)((uint)&(param_2->transform).v2 & 0xfffffff0);
  puVar4[3] = uVar13;
  puVar4[2] = uVar12;
  puVar4[1] = uVar11;
  *puVar4 = uVar10;
  GetBonePosition(puVar2[8],*(undefined2 *)((int)puVar2 + 0x26),&param_2->pos);
  puVar2[4] = (param_2->pos).x;
  puVar2[5] = (param_2->pos).y;
  puVar2[6] = (param_2->pos).z;
  puVar2[7] = (param_2->pos).w;
  *puVar2 = *param_3;
  puVar2[1] = param_3[1];
  MVar1 = param_2->modeBits;
  puVar2[2] = param_3[2];
  uVar6 = param_3[3];
  puVar2[0xb] = param_5;
  puVar2[3] = uVar6;
  param_2->state = '\0';
  param_2->modeBits =
       MVar1 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
  param_2->collision = param_2->pClass->collision;
  UpdateMobyTransform(param_2);
  return;
}


// 0x0216af0 (0x8c bytes)
void M1233_00216af0(longlong param_1)

{
  GPiece<16> local_10;
  
  MB_genericExplosion
            (0x4000000000000000,0x3ff0000000000000,0x4010000000000000,0x4008000000000000,
             0x3ff0000000000000,0x4000000000000000,0x4034000000000000,param_1,local_10,
             param_1 + 0x10,0,&DAT_00216adc,0xc,4,0x12);
  return;
}


// 0x0216b88 (0x8c bytes)
void M1233_00216b88(longlong param_1)

{
  GPiece<16> local_10;
  
  MB_genericExplosion
            (0,0,0,0,0,0x3ff0000000000000,0,param_1,local_10,param_1 + 0x10,&DAT_00216b7c,0,5,1,5);
  return;
}


// 0x0216c60 (0xb30 bytes)
// inlined: FastRSqrt @0x217024
/* Moby 1233 */

void UpdateMoby_1233(MobyInstance *moby)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  MobyInstance *pMVar4;
  f32 fVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  MobyModeBit MVar14;
  int iVar12;
  char cVar15;
  int iVar13;
  longlong lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  GPiece<16> local_170;
  GPiece<16> local_160;
  GPiece<16> local_150;
  GPiece<16> local_140;
  GPiece<16> local_130;
  undefined4 local_120 [4];
  GPiece<16> local_110;
  GPiece<16> local_100;
  GPiece<16> local_f0;
  GPiece<16> local_e0;
  GPiece<64> auStack_d0;
  
  lVar11 = (longlong)(int)moby;
  pfVar1 = (float *)moby->pVar;
  if (moby->state == '\x01') {
    fVar2 = pfVar1[8];
    if ((((fVar2 == 0.0) || (*(short *)((int)fVar2 + 0xa6) != 0x65)) ||
        (*(char *)((int)fVar2 + 0x20) == -2)) || (*(char *)((int)fVar2 + 0x20) == -3)) {
      DeleteMoby(moby);
      return;
    }
    (moby->rotation).x = *(f32 *)((int)fVar2 + 0x40);
    fVar3 = pfVar1[8];
    (moby->rotation).y = *(f32 *)((int)fVar2 + 0x44);
    (moby->rotation).z = *(f32 *)((int)fVar2 + 0x48);
    (moby->rotation).w = *(f32 *)((int)fVar2 + 0x4c);
    puVar7 = (undefined4 *)((int)fVar3 + 0xc0U & 0xfffffff0);
    uVar30 = puVar7[2];
    uVar29 = puVar7[1];
    uVar28 = *puVar7;
    puVar8 = (undefined4 *)((int)fVar3 + 0xd0U & 0xfffffff0);
    uVar34 = puVar8[3];
    uVar33 = puVar8[2];
    uVar32 = puVar8[1];
    uVar31 = *puVar8;
    puVar8 = (undefined4 *)((int)fVar3 + 0xe0U & 0xfffffff0);
    uVar38 = puVar8[3];
    uVar37 = puVar8[2];
    uVar36 = puVar8[1];
    uVar35 = *puVar8;
    puVar8 = (undefined4 *)((uint)&moby->transform & 0xfffffff0);
    puVar8[3] = puVar7[3];
    puVar8[2] = uVar30;
    puVar8[1] = uVar29;
    *puVar8 = uVar28;
    puVar7 = (undefined4 *)((uint)&(moby->transform).v1 & 0xfffffff0);
    puVar7[3] = uVar34;
    puVar7[2] = uVar33;
    puVar7[1] = uVar32;
    *puVar7 = uVar31;
    puVar7 = (undefined4 *)((uint)&(moby->transform).v2 & 0xfffffff0);
    puVar7[3] = uVar38;
    puVar7[2] = uVar37;
    puVar7[1] = uVar36;
    *puVar7 = uVar35;
    GetBonePosition(pfVar1[8],*(undefined2 *)((int)pfVar1 + 0x26),lVar11 + 0x10);
    pfVar1[4] = (moby->pos).x;
    pfVar1[5] = (moby->pos).y;
    pfVar1[6] = (moby->pos).z;
    MVar14 = moby->modeBits;
    pfVar1[7] = (moby->pos).w;
    fVar2 = pfVar1[8];
    if (((fVar2 == 0.0) ||
        (*(char *)((int)fVar2 + 0x20) == -3 || *(char *)((int)fVar2 + 0x20) == -2)) ||
       ((*(ushort *)((int)fVar2 + 0x34) & 1) == 0)) {
      MVar14 = MVar14 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                         DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|
                         HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
    }
    else {
      MVar14 = MVar14 | DISABLED;
    }
    moby->modeBits = MVar14;
  }
  else {
    iVar13 = MB_damage(lVar11,0x230000,0);
    if (((iVar13 != 0) && (*(int *)(iVar13 + 0x20) != 0)) &&
       (*(short *)(*(int *)(iVar13 + 0x20) + 0xa6) == 0x1df)) {
      MB_genericExplosion
                (0,0,0,0,0,0x3ff0000000000000,0,lVar11,local_e0,lVar11 + 0x10,&DAT_00216c14,0,5,1,5)
      ;
      DeleteMoby(moby);
      return;
    }
    iVar13 = 0;
    (moby->pos).x = (moby->pos).x + *pfVar1;
    (moby->pos).y = (moby->pos).y + pfVar1[1];
    (moby->pos).z = (moby->pos).z + pfVar1[2];
    dVar22 = 25000.0;
    dVar20 = 35000.0;
    dVar27 = 15.5;
    uVar19 = 0x407f400000000000;
    dVar26 = 1.0;
    uVar18 = 0xbf3a36e2e0000000;
    uVar25 = 0;
    dVar24 = 4.0;
    do {
      FastIntToDouble(iVar13);
      uVar17 = MB_randRangeFloat((float)dVar22,(float)dVar20);
      iVar12 = SpawnPart_44
                         (uVar17,uVar19,dVar26,uVar18,uVar25,local_160,&DAT_00a15d30,
                          (int)((double)animationSpeed * dVar27),0x60,0x4040ff,3);
      if (iVar12 != 0) {
        cVar15 = FastDoubleToInt(dVar24);
        *(char *)(iVar12 + 9) = cVar15 + -0x80;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < 4);
    SetCollDamIn(dVar26,auStack_d0,lVar11,0x10001,0x3f800000,local_150);
    fVar2 = (moby->pos).y - pfVar1[5];
    fVar9 = (moby->pos).x - pfVar1[4];
    fVar3 = *(float *)((int)pfVar1[0xb] + 0x14) - pfVar1[5];
    fVar10 = *(float *)((int)pfVar1[0xb] + 0x10) - pfVar1[4];
    fVar2 = SQRT(fVar9 * fVar9 + fVar2 * fVar2);
    if ((pfVar1[10] < fVar2) || (SQRT(fVar10 * fVar10 + fVar3 * fVar3) < fVar2)) {
      if (moby->enabled != '\0') {
        iVar13 = 0;
        dVar22 = -1.0;
        dVar20 = 2.0;
        do {
          MB_randRangeFloat((float)dVar22,(float)dVar26);
          MB_randRangeFloat((float)dVar22,(float)dVar26);
          MB_randRangeFloat((float)dVar22,(float)dVar26);
          MB_randRangeFloat
                    ((float)((double)g_FrameTime * dVar20),
                     (float)((double)g_FrameTime * dVar24));
          SpawnPart_51(lVar11 + 0x10,local_140);
          iVar13 = iVar13 + 1;
        } while (iVar13 < 3);
      }
      MB_genericExplosion
                (0x4000000000000000,dVar26,dVar24,0x4008000000000000,dVar26,0x4000000000000000,
                 0x4034000000000000,lVar11,local_f0,lVar11 + 0x10,0xffffffffffffffff,1,0xc,4,0x12);
      DeleteMoby(moby);
      return;
    }
    lVar16 = lVar11 + 0x10;
    iVar13 = CollLine(local_170,lVar16,
                                (ulonglong)(LZCOUNT((uint)*(ushort *)(pfVar1 + 9)) << 0x20) >> 0x25,
                                lVar11,auStack_d0);
    pMVar4 = g_CollOutput.pMoby;
    cVar15 = moby->enabled;
    if ((iVar13 != 0) &&
       ((g_CollOutput.pMoby == (MobyInstance *)0x0 || (g_CollOutput.pMoby != (MobyInstance *)pfVar1[8]))
       )) {
      (moby->pos).x = g_CollOutput.ip.x;
      (moby->pos).y = g_CollOutput.ip.y;
      (moby->pos).z = g_CollOutput.ip.z;
      (moby->pos).w = g_CollOutput.ip.w;
      if (cVar15 != '\0') {
        iVar13 = 0;
        dVar23 = -1.0;
        dVar21 = 3.0;
        dVar22 = 6.0;
        dVar20 = 10.5;
        uVar18 = 0x40dd4c0000000000;
        do {
          MB_randRangeFloat((float)dVar23,(float)dVar26);
          MB_randRangeFloat((float)dVar23,(float)dVar26);
          MB_randRangeFloat((float)dVar23,(float)dVar26);
          FastVecNormalize(local_120,pfVar1,0xa10980);
          MB_randRangeFloat
                    ((float)((double)g_FrameTime * dVar21),
                     (float)((double)g_FrameTime * dVar22));
          uVar19 = MB_randRange
                             ((int)((double)animationSpeed * dVar20),
                              (int)((double)animationSpeed * dVar27));
          SpawnPart_27(uVar18,lVar16,local_130,0x7f2f4f6f,uVar19);
          iVar13 = iVar13 + 1;
          pMVar4 = g_CollOutput.pMoby;
        } while (iVar13 < 5);
      }
      if ((pMVar4 == (MobyInstance *)0x0) || (pMVar4->oClass != DRONE)) {
        MB_genericExplosion
                  (0x4000000000000000,dVar26,dVar24,0x4008000000000000,dVar26,0x4000000000000000,
                   0x4034000000000000,lVar11,local_110,lVar16,1,0xffffffffffffffff,0xc,4,0x12);
      }
      else {
        MB_genericExplosion
                  (uVar25,uVar25,uVar25,uVar25,uVar25,dVar26,uVar25,lVar11,local_100,lVar16,1,
                   0xffffffffffffffff,5,1,5);
      }
      DeleteMoby(moby);
      return;
    }
  }
  fVar5 = (moby->pos).x;
  uVar6 = (int)fVar5 >> 0x1f;
  iVar13 = (uVar6 >> 1 ^ (uint)fVar5) - uVar6;
  if (((iVar13 < 0x40000000) || (0x447f4000 < iVar13)) ||
     ((fVar5 = (moby->pos).y, uVar6 = (int)fVar5 >> 0x1f,
      iVar13 = (uVar6 >> 1 ^ (uint)fVar5) - uVar6, 0x447f4000 < iVar13 || iVar13 < 0x40000000 ||
      ((fVar5 = (moby->pos).z, uVar6 = (int)fVar5 >> 0x1f,
       iVar13 = (uVar6 >> 1 ^ (uint)fVar5) - uVar6, iVar13 < 0x40000000 || (0x447f4000 < iVar13)))))
     ) {
    DeleteMoby(moby);
  }
  return;
}


