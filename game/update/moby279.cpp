// game/update/moby279.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x326338-0x327028
#include "game/update/moby279.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update/moby284.h"
#include "idol/fastfunc.h"

// 0x0326338 (0x41c bytes)
/* Moby 279 */

void UpdateMoby_279(MobyInstance *moby)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  int iVar5;
  undefined8 uVar4;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  GPiece<32> local_b0;
  
  lVar3 = (longlong)(int)moby;
  pfVar1 = (float *)moby->pVar;
  iVar5 = MB_damage(lVar3,0x10000,0);
  if (iVar5 != 0) {
    fVar2 = *pfVar1 - *(float *)(iVar5 + 0x2c);
    *pfVar1 = fVar2;
    if (fVar2 <= 0.0) {
      iVar5 = 0;
      dVar6 = -1.0;
      dVar7 = 1.0;
      dVar8 = 3.0;
      dVar9 = 6.0;
      dVar10 = 5.5;
      dVar11 = 10.5;
      dVar12 = 20000.0;
      dVar13 = 50000.0;
      do {
        MB_randRangeFloat((float)dVar6,(float)dVar7);
        MB_randRangeFloat((float)dVar6,(float)dVar7);
        MB_randRangeFloat((float)dVar6,(float)dVar7);
        MB_randRangeFloat
                  ((float)((double)g_FrameTime * dVar8),
                   (float)((double)g_FrameTime * dVar9));
        uVar4 = MB_randRange
                          ((int)((double)animationSpeed * dVar10),
                           (int)((double)animationSpeed * dVar11));
        MB_randRangeFloat((float)dVar12,(float)dVar13);
        SpawnPart_27(lVar3 + 0x10,local_b0,0x5f7f4f2f,uVar4);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x19);
      FUN_0032dadc((double)(moby->rotation).z,lVar3);
      DeleteMoby(moby);
      return;
    }
    *(undefined1 *)((int)pfVar1 + 0x47) = 0x46;
    MB_UpdateLightsTransition(lVar3,pfVar1 + 0x10);
  }
  moby->damage = -1;
  return;
}


// 0x0326788 (0x3f4 bytes)
void M28_00326788(void *param_1)

{
  float fVar1;
  int iVar2;
  undefined2 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar12;
  undefined8 uVar11;
  int iVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  Vec4 VStack_c0;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  
  iVar2 = *(int *)((int)param_1 + 0x78);
  RegisterPostPreDraw(&PTR_M280_0032aa00_0070bf28,param_1);
  GetBonePosition(param_1,1,&local_d0);
  fVar4 = local_cc - GameCamera.posY;
  fVar5 = local_d0 - GameCamera.posX;
  fVar9 = local_c8 - GameCamera.posZ;
  fVar1 = 0.0;
  fVar10 = SQRT(fVar9 * fVar9 + fVar5 * fVar5 + fVar4 * fVar4);
  fVar8 = -0.5 / fVar10;
  fVar6 = fVar1;
  if (0.0 - fVar10 < 0.0) {
    fVar6 = fVar5 * fVar8;
  }
  fVar7 = fVar1;
  if (0.0 - fVar10 < 0.0) {
    fVar7 = fVar4 * fVar8;
  }
  if (0.0 - fVar10 < 0.0) {
    fVar1 = fVar9 * fVar8;
  }
  if (fVar10 - 0.0 < 0.0) {
    fVar6 = fVar5 * fVar8;
  }
  if (fVar10 - 0.0 < 0.0) {
    fVar7 = fVar4 * fVar8;
  }
  if (fVar10 - 0.0 < 0.0) {
    fVar1 = fVar9 * fVar8;
  }
  *(float *)(iVar2 + 0x1e0) = local_d0 + fVar6;
  *(float *)(iVar2 + 0x1e4) = local_cc + fVar7;
  *(float *)(iVar2 + 0x1e8) = local_c8 + fVar1;
  *(undefined4 *)(iVar2 + 0x1ec) = local_c4;
  MB_randVector(0.004999999888241291,0.029999999329447746,&VStack_c0);
  iVar12 = SpawnPart_69(&local_d0,&VStack_c0,0x7f,param_1);
  if (iVar12 != 0) {
    dVar15 = (double)MB_randRangeFloat(6000.0,32000.0);
    *(float *)(iVar12 + 0xc) = (float)dVar15;
  }
  dVar15 = 80000.0;
  dVar17 = 120000.0;
  iVar12 = 0;
  auVar22 = loadVectorLeftIndexed(0x20,0x326758);
  dVar18 = 2.5;
  auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
  dVar19 = 1.0;
  do {
    uVar11 = SpawnPart_69(&local_d0,&DAT_00a15d30,0x7f,param_1);
    iVar14 = (int)uVar11;
    if (iVar14 != 0) {
      if ((iVar12 == 2) && (iVar13 = MB_randInt(8), iVar13 == 0)) {
        dVar16 = 180000.0;
      }
      else {
        dVar16 = (double)MB_randRangeFloat((float)dVar15,(float)dVar17);
      }
      auVar20 = ZEXT416(0xffffffff);
      auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
      *(float *)(iVar14 + 0xc) = (float)dVar16;
      auVar20 = vectorShiftLeftIntegerWord(auVar20,auVar20);
      auVar21 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      dVar16 = (double)animationSpeed;
      auVar20 = vectorMultiplyAddFloatingPoint(auVar21,auVar22,auVar20);
      auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
      auVar20 = vectorSplatHalfWord(auVar20,1);
      uVar3 = storeVectorElementHalfWordIndexed(auVar20,10,uVar11);
      *(undefined2 *)(iVar14 + 10) = uVar3;
      dVar16 = (double)FastIntToDouble((short)(int)(dVar16 * dVar18));
      *(undefined2 *)(iVar14 + 0x36) = 3;
      *(undefined **)(iVar14 + 0x38) = &DAT_007f7f7f;
      *(float *)(iVar14 + 0x30) = (float)(dVar19 / dVar16);
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 < 3);
  GetBonePosition(param_1,6,iVar2 + 0x200);
  GetBoneTransformations(param_1,7,&local_b0);
  fVar1 = DAT_00800240;
  *(float *)(iVar2 + 0x1f0) = local_b0 * DAT_00800240 + local_80;
  *(float *)(iVar2 + 500) = local_ac * fVar1 + local_7c;
  *(float *)(iVar2 + 0x1f8) = local_a8 * fVar1 + local_78;
  *(undefined4 *)(iVar2 + 0x1fc) = local_74;
  GetBoneTransformations(param_1,2,&local_b0);
  fVar7 = DAT_00800250;
  fVar10 = DAT_00800248;
  fVar1 = local_b0 * DAT_00800248 + local_80;
  fVar5 = local_a0 * DAT_0080024c;
  fVar6 = local_9c * DAT_0080024c;
  fVar8 = local_98 * DAT_0080024c;
  *(float *)(iVar2 + 0x210) = fVar1;
  fVar4 = local_ac * fVar10 + local_7c;
  fVar9 = local_90 * fVar7 + fVar1 + fVar5;
  *(float *)(iVar2 + 0x214) = fVar4;
  fVar1 = local_a8 * fVar10 + local_78;
  fVar4 = local_8c * fVar7 + fVar4 + fVar6;
  *(float *)(iVar2 + 0x218) = fVar1;
  *(float *)(iVar2 + 0x210) = fVar9;
  *(undefined4 *)(iVar2 + 0x21c) = local_74;
  fVar1 = local_88 * fVar7 + fVar1 + fVar8;
  *(float *)(iVar2 + 0x214) = fVar4;
  *(float *)(iVar2 + 0x218) = fVar1;
  *(undefined4 *)(iVar2 + 0x22c) = local_74;
  *(float *)(iVar2 + 0x220) = fVar5 * -2.0 + fVar9;
  *(float *)(iVar2 + 0x224) = fVar6 * -2.0 + fVar4;
  *(float *)(iVar2 + 0x228) = fVar8 * -2.0 + fVar1;
  RegisterPostDraw(&PTR_M280_00329e48_0070bf20,param_1);
  return;
}


// 0x0326b90 (0xe8 bytes)
void M279_00326b90(undefined8 param_1,int param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  iVar1 = *(int *)(param_2 + 0x78);
  dVar3 = -(double)*(float *)(iVar1 + 0x268);
  dVar2 = (double)FastDiffRots(param_1,(double)*(float *)(param_2 + 0x48));
  dVar3 = (double)FastWrapRot((float)dVar3,(float)-dVar2);
  dVar2 = 1.2217304706573486;
  if ((dVar3 <= 1.2217304706573486) && (dVar2 = dVar3, dVar3 < -1.2217304706573486)) {
    dVar2 = -1.2217304706573486;
  }
  OrganicDeltAng
            ((float)dVar2,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
             g_FrameTime * 6.2831855,(float *)(iVar1 + 0x270),0x326b7c,
             (float *)(iVar1 + 0x274));
  FastQuaternionToEuler((double)*(float *)(iVar1 + 0x270),iVar1 + 0x130,2);
  return;
}


// 0x0326c98 (0x390 bytes)
// inlined: FastAtan2 @0x326e90
void M28_00326c98(undefined8 param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  MobyInstance *pMVar7;
  ulonglong *puVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float *unused;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  int iVar17;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  ulonglong in_f29;
  double dVar22;
  ulonglong in_f30;
  double dVar23;
  ulonglong in_f31;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0x100;
  puVar8 = (ulonglong *)lVar13;
  *puVar8 = uVar11;
  puVar8[0x22] = in_LR;
  puVar8[0x1d] = in_f29;
  puVar8[0x1e] = in_f30;
  puVar8[0x1f] = in_f31;
  puVar8[0x1c] = unaff_r31;
  puVar8[0x1b] = unaff_r30;
  puVar8[0x18] = unaff_r27;
  puVar8[0x1a] = unaff_r29;
  iVar6 = *(int *)(param_2 + 0x78);
  puVar8[0x19] = unaff_r28;
  fVar1 = *(float *)(param_2 + 0x48);
  puVar8[0x17] = unaff_r26;
  puVar8[0x16] = unaff_r25;
  pMVar7 = *(MobyInstance **)(iVar6 + 0x110);
  dVar19 = (double)FastDiffRots(param_1,(double)fVar1);
  dVar20 = 1.2217304706573486;
  if ((dVar19 <= 1.2217304706573486) && (dVar20 = dVar19, dVar19 < -1.2217304706573486)) {
    dVar20 = -1.2217304706573486;
  }
  dVar23 = 12.566370964050293;
  dVar22 = 6.2831854820251465;
  OrganicDeltAng
            ((float)dVar20,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
             g_FrameTime * 6.2831855,(float *)(iVar6 + 0x268),param_3,
             (float *)(iVar6 + 0x26c));
  iVar17 = iVar6 + 0x170;
  FastQuaternionToEuler((double)*(float *)(iVar6 + 0x268),iVar17,2);
  dVar19 = (double)g_FrameTime;
  dVar21 = (double)DAT_0071f418;
  if (param_4 != 0) {
    fVar1 = (pMVar7->pos).z;
    if (g_heroMobyPtr == pMVar7) {
      fVar1 = fVar1 - g_heroGroundDist;
    }
    fVar2 = (pMVar7->pos).y - *(float *)(param_2 + 0x14);
    fVar3 = (pMVar7->pos).x - *(float *)(param_2 + 0x10);
    unused = (float *)&g_atanQuadrantTable;
    fVar5 = (fVar1 - *(float *)(param_2 + 0x18)) + 1.5;
    fVar1 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
    *(float *)((int)puVar8 + 0x84) = fVar5;
    fVar5 = ABS(fVar5);
    fVar2 = ABS(fVar1);
    *(float *)(puVar8 + 0x10) = fVar1;
    *(float *)(puVar8 + 0x11) = fVar2 - fVar5;
    fVar1 = 0.0;
    uVar15 = (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0x11) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)(puVar8 + 0x10));
    if (*(float *)(puVar8 + 0x11) - 0.0 < 0.0) {
      fVar3 = fVar5;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
    fVar4 = ABS(*(float *)((int)puVar8 + 0x84));
    if (*(float *)(puVar8 + 0x11) - 0.0 < 0.0) {
      fVar4 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    if (0.0 < fVar3) {
      lVar12 = uVar11 - 0xf0;
      lVar16 = uVar11 - 100;
      lVar14 = uVar11 - 0x74;
      lVar18 = 2;
      fVar3 = (fVar4 - fVar3) / (fVar4 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar8 + 0x13) = fVar3;
      *(float *)(puVar8 + 0x12) = fVar3;
      *(float *)((int)puVar8 + 0x94) = fVar3;
      *(float *)((int)puVar8 + 0x8c) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) * fVar4;
      *(float *)((int)puVar8 + 0x94) = *(float *)((int)puVar8 + 0x94) * fVar3;
      *(float *)(puVar8 + 0x13) = *(float *)(puVar8 + 0x13) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar12 + 0x8c) = *(float *)((int)lVar12 + 0x7c) * fVar3 * fVar3;
        iVar9 = (int)lVar14;
        lVar14 = lVar14 + 8;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar9 + 4) * fVar3 * fVar3;
        lVar16 = lVar16 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar18 = 4;
      lVar16 = uVar11 - 0x74;
      unused = (float *)&DAT_007358e0;
      lVar12 = lVar13;
      lVar14 = lVar16;
      do {
        fVar3 = *unused;
        fVar4 = unused[1];
        unused = unused + 2;
        *(float *)((int)lVar12 + 0x8c) = *(float *)((int)lVar12 + 0x8c) * fVar3;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar4;
        lVar14 = lVar14 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar12 = 2;
      do {
        iVar9 = (int)lVar13;
        lVar13 = lVar13 + 0x10;
        iVar10 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar9 + 0x8c) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                *(float *)(iVar10 + 0xc);
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar2;
    }
    OrganicDeltAng
              (-fVar1,(float)(dVar21 * dVar23),(float)(dVar21 * dVar23),(float)(dVar19 * dVar22),
               (float *)(iVar6 + 0x280),(int)unused,(float *)(iVar6 + 0x284));
    FastQuaternionToEuler((double)*(float *)(iVar6 + 0x280),uVar11 - 0x90,1);
    FastQuaternionMult(iVar17,iVar17,uVar11 - 0x90);
  }
  FastSubRots((float)dVar20,*(float *)(iVar6 + 0x268));
  return;
}


