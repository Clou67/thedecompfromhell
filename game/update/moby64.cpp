// game/update/moby64.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 14 functions, 0x447768-0x44a6a8
// shared update function UpdateMoby_a_lot_20; registered for oClasses 64, 75, 115, 116, 117, 118, 119, 120, 132, 795
#include <stdio.h>
#include "game/update/moby64.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mUnk.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/path.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby121.h"
#include "game/update/moby235.h"
#include "game/update/moby849.h"
#include "idol/fastfunc.h"

// 0x0447768 (0x58 bytes)
void M795_00447768(MobyInstance *param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_MB_Sucking(param_1);
  if ((int)uVar1 == 0) {
    if (param_1->state == '\t') {
      param_1->state = '\x05';
    }
  }
  else {
    param_1->state = '\t';
  }
  return;
}


// 0x04477c0 (0x58 bytes)
void M795_004477c0(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\t') {
      *(undefined1 *)(param_1 + 0x20) = 5;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 9;
  }
  return;
}


// 0x0447818 (0x58 bytes)
void M795_00447818(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048acb8();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\t') {
      *(undefined1 *)(param_1 + 0x20) = 5;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 9;
  }
  return;
}


// 0x0447870 (0x38 bytes)
void M795_00447870(int param_1)

{
  M849_0048afe8();
  *(undefined1 *)(param_1 + 0x20) = 9;
  return;
}


// 0x04478a8 (0x40 bytes)
longlong M795_004478a8(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x78) + 0xd0;
    lVar1 = lVar1 + (ZERO_MASK(*(uint *)(param_1 + 0x78)) & -lVar1);
  }
  return lVar1;
}


// 0x04478e8 (0x14 bytes)
void M795_004478e8(void)

{
  DAT_0085a788 = 0x10000;
  return;
}


// 0x0447908 (0xe4 bytes)
void M795_00447908(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_50;
  float local_4c;
  float local_48;
  
  iVar3 = *(int *)(param_1 + 0x78);
  if ((*(int *)(iVar3 + 0x140) != 0) || (*(int *)(iVar3 + 0x144) != 0)) {
    FastEulerToMtx1(&local_50,param_1 + 0x40);
    fVar1 = *(float *)(iVar3 + 0x140);
    fVar5 = local_50 * local_4c - local_4c * local_50;
    fVar4 = (local_48 - 1.0) * local_50 - local_50 * local_48;
    fVar6 = local_4c * local_48 - (local_48 - 1.0) * local_4c;
    fVar2 = *(float *)(iVar3 + 0x144);
    param_2[2] = (fVar6 * local_4c - fVar4 * local_50) * fVar2 + fVar5 * fVar1 + param_2[2];
    *param_2 = (fVar4 * local_48 - fVar5 * local_4c) * fVar2 + fVar6 * fVar1 + *param_2;
    param_2[1] = (fVar5 * local_50 - fVar6 * local_48) * fVar2 + fVar4 * fVar1 + param_2[1];
  }
  return;
}


// 0x04479ec (0x104 bytes)
void M795_004479ec(MobyInstance *param_1)

{
  MOBY_OCLASSES MVar1;
  void *pvVar2;
  int iVar3;
  
  pvVar2 = param_1->pVar;
  if (param_1->state == '\0') {
    *(undefined4 *)((int)pvVar2 + 0x150) = 0xffffffff;
    return;
  }
  if (((worldUpdateTime ^ (int)param_1 >> 8) & 7) != 0) {
    return;
  }
  if (*(short *)((int)pvVar2 + 0x14a) != 0) {
    return;
  }
  if ((-1 < *(int *)((int)pvVar2 + 0x150)) &&
     (iVar3 = IsMobyPlayingSound(param_1,*(int *)((int)pvVar2 + 0x150)), iVar3 != 0)) {
    return;
  }
  MVar1 = param_1->oClass;
  if ((short)MVar1 < 0x73) {
    if (MVar1 != RED_SHIP_1) {
      return;
    }
LAB_00447ac0:
    iVar3 = PlayMobySound(1,4,param_1);
    *(int *)((int)pvVar2 + 0x150) = iVar3;
  }
  else {
    if ((short)MVar1 < 0x78) {
      if (MVar1 != YELLOW_SHIP) goto LAB_00447ac0;
    }
    else if (0x78 < (short)MVar1) {
      return;
    }
    iVar3 = PlayMobySound(0,4,param_1);
    *(int *)((int)pvVar2 + 0x150) = iVar3;
  }
  return;
}


// 0x0447b40 (0x7a0 bytes)
void M795_00447b40
               (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined1 uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  GPiece<16> auStack_f0;
  float local_e0 [4];
  GPiece<16> auStack_d0;
  float local_c0 [4];
  GPiece<16> auStack_b0;
  float local_a0 [14];
  
  uVar3 = *(uint *)(param_1 + 0x78);
  uVar9 = (ulonglong)uVar3;
  fStack00000044 = (float)param_3;
  dVar13 = (double)fStack00000044;
  fStack00000040 = (float)((ulonglong)param_3 >> 0x20);
  dVar11 = (double)fStack00000040;
  fStack00000048 = (float)((ulonglong)param_4 >> 0x20);
  dVar12 = (double)fStack00000048;
  if ((*(ushort *)(param_1 + 0x34) & 1) != 0) {
    return;
  }
  sVar2 = *(short *)(param_1 + 0xa6);
  _fStack00000040 = param_3;
  _fStack00000048 = param_4;
  if (sVar2 != 0x78 && sVar2 != 0x84) {
    if (sVar2 == 0x77) {
LAB_00448098:
      FastDecTimerU8(uVar9 + 0x12f);
      if ((param_5 != 0) && (*(char *)(uVar3 + 0x12f) == '\0')) {
        return;
      }
      FastDecTimerU8(uVar9 + 0x12e);
      cVar1 = *(char *)(uVar3 + 0x12e);
      if ((cVar1 == '\0') || (*(char *)(uVar3 + 0x12f) != '\0')) {
        GetBonePosition(param_1,0,uVar9 + 0xf0);
        cVar1 = *(char *)(uVar3 + 0x12e);
      }
      if (cVar1 != '\0') {
        return;
      }
      if ((SQRT((float)(dVar12 * dVar12 +
                       (double)(float)(dVar11 * dVar11 + (double)(float)(dVar13 * dVar13)))) <
           g_FrameTime * 40.0) &&
         (fVar4 = *(float *)(param_1 + 0x14) - GameCamera.posY,
         fVar5 = *(float *)(param_1 + 0x10) - GameCamera.posX,
         fVar6 = *(float *)(param_1 + 0x18) - GameCamera.posZ,
         SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) < 90.0)) {
        auVar14 = loadVectorLeftIndexed(0x40,0x447af0);
        auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar16 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
        M235_003048c0((double)(g_FrameTime * 2.5),0x3fc3333340000000,param_1,uVar9 + 0xf0,
                      (ZERO_MASK((0x4b - (uint)*(ushort *)(param_1 + 0xa6))) &
                      0xffffffffffff9060U) + 0xa040,
                      (ZERO_MASK((0x4b - (uint)*(ushort *)(param_1 + 0xa6))) &
                      0xfffffffffffff020U) + 0xa080,(int)(animationSpeed * 50.5));
        auVar14 = ZEXT416(0xffffffff);
        auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
        auVar14 = vectorShiftLeftIntegerWord(auVar14,auVar14);
        auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar14 = vectorMultiplyAddFloatingPoint(auVar15,auVar16,auVar14);
        auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
        auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xff;
        uVar8 = storeVectorElementByteIndexed
                          (auVar14 | auVar14 << 8 | auVar14 << 0x10 | auVar14 << 0x18 |
                           auVar14 << 0x20 | auVar14 << 0x28 | auVar14 << 0x30 | auVar14 << 0x38 |
                           auVar14 << 0x40 | auVar14 << 0x48 | auVar14 << 0x50 | auVar14 << 0x58 |
                           auVar14 << 0x60 | auVar14 << 0x68 | auVar14 << 0x70 | auVar14 << 0x78,
                           0x12f,uVar9);
        *(undefined1 *)(uVar3 + 0x12f) = uVar8;
      }
      auVar14 = ZEXT416(0xffffffff);
      auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar15 = vectorShiftLeftIntegerWord(auVar14,auVar14);
      auVar14 = loadVectorLeftIndexed(0x48,0x447af0);
      auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar14 = vectorMultiplyAddFloatingPoint
                          (auVar16,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,
                           auVar15);
      auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
      auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xff;
      uVar8 = storeVectorElementByteIndexed
                        (auVar14 | auVar14 << 8 | auVar14 << 0x10 | auVar14 << 0x18 |
                         auVar14 << 0x20 | auVar14 << 0x28 | auVar14 << 0x30 | auVar14 << 0x38 |
                         auVar14 << 0x40 | auVar14 << 0x48 | auVar14 << 0x50 | auVar14 << 0x58 |
                         auVar14 << 0x60 | auVar14 << 0x68 | auVar14 << 0x70 | auVar14 << 0x78,0x12e
                         ,uVar9);
      *(undefined1 *)(uVar3 + 0x12e) = uVar8;
      return;
    }
    if (sVar2 == 0x76) {
      if (param_5 != 0) {
        return;
      }
      iVar7 = FastDecTimerU8(uVar9 + 0x12e);
      if (iVar7 == 0) {
        return;
      }
      if ((SQRT((float)(dVar12 * dVar12 +
                       (double)(float)(dVar11 * dVar11 + (double)(float)(dVar13 * dVar13)))) <
           g_FrameTime * 40.0) &&
         (fVar4 = *(float *)(param_1 + 0x14) - GameCamera.posY,
         fVar5 = *(float *)(param_1 + 0x10) - GameCamera.posX,
         fVar6 = *(float *)(param_1 + 0x18) - GameCamera.posZ,
         SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) < 90.0)) {
        iVar7 = 0;
        dVar11 = 1.2000000476837158;
        uVar10 = 0x4104820000000000;
        do {
          GetBonePosition(param_1,0,auStack_b0);
          dVar12 = (double)MB_randRot();
          dVar13 = (double)MB_randRot();
          MB_SphericalToVector
                    ((float)((double)g_FrameTime * dVar11),(float)dVar12,(float)dVar13,
                     local_a0);
          SpawnPart_22(uVar10,auStack_b0,local_a0,0xffffffff80808080,&DAT_00808080);
          iVar7 = iVar7 + 1;
        } while (iVar7 < 0xf);
      }
      uVar8 = MB_randRange((int)(animationSpeed * 7.5),(int)(animationSpeed * 20.5));
      *(undefined1 *)(uVar3 + 0x12e) = uVar8;
      return;
    }
    if (sVar2 != 0x75) {
      if (sVar2 == 0x74) {
        if (param_5 != 0) {
          return;
        }
        iVar7 = 0;
        dVar11 = 0.15000000596046448;
        uVar10 = 0x40f4820000000000;
        do {
          GetBonePosition(param_1,iVar7,auStack_f0);
          dVar12 = (double)MB_randRot();
          dVar13 = (double)MB_randRot();
          MB_SphericalToVector
                    ((float)((double)g_FrameTime * dVar11),(float)dVar12,(float)dVar13,
                     local_e0);
          SpawnPart_22(uVar10,auStack_f0,local_e0,0xffffffff8040c0f0,&DAT_00808080);
          iVar7 = iVar7 + 1;
        } while (iVar7 < 2);
        return;
      }
      if (sVar2 != 0x73) {
        if (sVar2 != 0x4b) {
          return;
        }
        goto LAB_00448098;
      }
    }
  }
  if ((param_5 == 0) && (iVar7 = FastDecTimerU8(uVar9 + 0x12e), iVar7 != 0)) {
    if ((SQRT((float)(dVar12 * dVar12 +
                     (double)(float)(dVar11 * dVar11 + (double)(float)(dVar13 * dVar13)))) <
         g_FrameTime * 40.0) &&
       (fVar4 = *(float *)(param_1 + 0x14) - GameCamera.posY,
       fVar5 = *(float *)(param_1 + 0x10) - GameCamera.posX,
       fVar6 = *(float *)(param_1 + 0x18) - GameCamera.posZ,
       SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) < 75.0)) {
      iVar7 = 0;
      dVar11 = 0.6000000238418579;
      uVar10 = 0x40f9a28000000000;
      do {
        GetBonePosition(param_1,0,auStack_d0);
        dVar12 = (double)MB_randRot();
        dVar13 = (double)MB_randRot();
        MB_SphericalToVector
                  ((float)((double)g_FrameTime * dVar11),(float)dVar12,(float)dVar13,
                   local_c0);
        SpawnPart_22(uVar10,auStack_d0,local_c0,0xffffffff80808080,&DAT_00808080);
        iVar7 = iVar7 + 1;
      } while (iVar7 < 10);
    }
    uVar8 = MB_randRange((int)(animationSpeed * 7.5),(int)(animationSpeed * 20.5));
    *(undefined1 *)(uVar3 + 0x12e) = uVar8;
  }
  return;
}


// 0x04482f8 (0x54c bytes)
// inlined: FastAtan2 @0x44842c, FastAtan2 @0x448644
void M795_004482f8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  ulonglong *puVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  float *pfVar15;
  longlong lVar16;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar22;
  ulonglong in_f29;
  double dVar23;
  ulonglong in_f30;
  double dVar24;
  ulonglong in_f31;
  double dVar25;
  double dVar26;
  float fVar27;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar11 = uVar9 - 0x120;
  puVar5 = (ulonglong *)lVar11;
  *puVar5 = uVar9;
  puVar5[0x26] = in_LR;
  puVar5[0x1f] = in_f27;
  puVar5[0x20] = in_f28;
  puVar5[0x21] = in_f29;
  puVar5[0x22] = in_f30;
  puVar5[0x23] = in_f31;
  puVar5[0x1e] = unaff_r31;
  puVar5[0x1b] = unaff_r28;
  puVar5[0x1d] = unaff_r30;
  iVar4 = *(int *)(param_1 + 0x78);
  puVar5[0x19] = (longlong)(int)*(short *)(iVar4 + 0x132);
  dVar23 = 0.01745329238474369;
  fVar27 = *(float *)(param_1 + 0x48);
  dVar25 = (double)(float)((double)(longlong)puVar5[0x19] * 0.01745329238474369);
  puVar5[0x1c] = unaff_r29;
  FastDiffRots((double)fVar27,dVar25);
  fVar27 = *(float *)(iVar4 + 0xd0) - *(float *)(iVar4 + 0xe0);
  fVar2 = *(float *)(iVar4 + 0xd4) - *(float *)(iVar4 + 0xe4);
  fVar1 = ABS(fVar27);
  fVar3 = ABS(fVar2);
  *(float *)((int)puVar5 + 0x7c) = fVar27;
  *(float *)(puVar5 + 0x10) = fVar2;
  *(float *)((int)puVar5 + 0x84) = fVar1 - fVar3;
  dVar22 = 0.0;
  dVar24 = 0.7853981852531433;
  uVar12 = (ulonglong)(*(uint *)((int)puVar5 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar5 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar5 + 0x10) >> 0x1d) & 4;
  fVar27 = ABS(*(float *)((int)puVar5 + 0x7c));
  if (*(float *)((int)puVar5 + 0x84) - 0.0 < 0.0) {
    fVar27 = fVar3;
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar12 << 2));
  fVar3 = ABS(*(float *)(puVar5 + 0x10));
  if (*(float *)((int)puVar5 + 0x84) - 0.0 < 0.0) {
    fVar3 = fVar1;
  }
  fVar1 = *(float *)(((uint)(uVar12 << 2) | 0x735900) + 4);
  dVar19 = dVar22;
  if (0.0 < fVar27) {
    lVar10 = uVar9 - 0x110;
    lVar16 = uVar9 - 0x68;
    lVar14 = uVar9 - 0x78;
    lVar17 = 2;
    fVar27 = (fVar3 - fVar27) / (fVar3 + fVar27);
    fVar3 = fVar27 * fVar27;
    *(float *)((int)puVar5 + 0xb4) = fVar27;
    *(float *)((int)puVar5 + 0xac) = fVar27;
    *(float *)(puVar5 + 0x16) = fVar27;
    *(float *)(puVar5 + 0x15) = fVar27;
    fVar27 = fVar3 * fVar3;
    *(float *)((int)puVar5 + 0xac) = *(float *)((int)puVar5 + 0xac) * fVar3;
    *(float *)(puVar5 + 0x16) = *(float *)(puVar5 + 0x16) * fVar27;
    *(float *)((int)puVar5 + 0xb4) = *(float *)((int)puVar5 + 0xb4) * fVar27 * fVar3;
    do {
      *(float *)((int)lVar10 + 0xa8) = *(float *)((int)lVar10 + 0x98) * fVar27 * fVar27;
      iVar6 = (int)lVar14;
      lVar14 = lVar14 + 8;
      lVar10 = lVar10 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)(iVar6 + 4) * fVar27 * fVar27;
      lVar16 = lVar16 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    lVar17 = 4;
    lVar16 = uVar9 - 0x78;
    pfVar15 = (float *)&DAT_007358e0;
    lVar10 = lVar11;
    lVar14 = lVar16;
    do {
      fVar27 = *pfVar15;
      fVar3 = pfVar15[1];
      pfVar15 = pfVar15 + 2;
      *(float *)((int)lVar10 + 0xa8) = *(float *)((int)lVar10 + 0xa8) * fVar27;
      lVar10 = lVar10 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar3;
      lVar14 = lVar14 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    lVar14 = 2;
    lVar10 = lVar11;
    do {
      iVar6 = (int)lVar10;
      iVar7 = (int)lVar16;
      lVar10 = lVar10 + 0x10;
      lVar16 = lVar16 + 0x10;
      dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar6 + 0xa8)) + *(float *)(iVar7 + 4) +
                        *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    dVar19 = (double)((float)(dVar19 + 0.7853981852531433) * fVar2 + fVar1);
  }
  uVar18 = FastWrapRot((float)dVar19,(float)dVar25);
  dVar25 = (double)FastDiffRots(uVar18,(double)*(float *)(param_1 + 0x48));
  fVar27 = (float)((double)((1.0 / *(float *)(iVar4 + 0x120)) * DAT_0071f408) * dVar25);
  dVar26 = (double)fVar27;
  dVar25 = (double)FastWrapRot(fVar27,*(float *)(param_1 + 0x48));
  *(float *)(param_1 + 0x48) = (float)dVar25;
  fVar2 = *(float *)(iVar4 + 0xd4) - *(float *)(iVar4 + 0xe4);
  fVar3 = *(float *)(iVar4 + 0xd0) - *(float *)(iVar4 + 0xe0);
  fVar27 = *(float *)(param_1 + 0x44);
  fVar1 = *(float *)(iVar4 + 0xd8) - *(float *)(iVar4 + 0xe8);
  fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  *(float *)((int)puVar5 + 0x74) = fVar1;
  dVar21 = ABS((double)fVar1);
  dVar20 = ABS((double)fVar2);
  *(float *)(puVar5 + 0xe) = fVar2;
  *(float *)(puVar5 + 0xf) = (float)(dVar20 - dVar21);
  dVar19 = (double)*(float *)(iVar4 + 0x118);
  uVar12 = (ulonglong)(*(uint *)(puVar5 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar5 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar5 + 0x74) >> 0x1d) & 4;
  uVar13 = uVar12 << 2 | 0x735900;
  dVar25 = ABS((double)*(float *)(puVar5 + 0xe));
  if ((double)*(float *)(puVar5 + 0xf) - dVar22 < 0.0) {
    dVar25 = dVar21;
  }
  fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar12 << 2));
  fVar2 = *(float *)((int)uVar13 + 4);
  dVar21 = ABS((double)*(float *)((int)puVar5 + 0x74));
  if ((double)*(float *)(puVar5 + 0xf) - dVar22 < 0.0) {
    dVar21 = dVar20;
  }
  if (dVar22 < dVar25) {
    lVar10 = uVar9 - 0x110;
    lVar16 = uVar9 - 0x88;
    lVar14 = uVar9 - 0x98;
    lVar17 = 2;
    fVar1 = (float)(dVar21 - dVar25) / (float)(dVar21 + dVar25);
    fVar8 = fVar1 * fVar1;
    *(float *)((int)puVar5 + 0x94) = fVar1;
    *(float *)((int)puVar5 + 0x8c) = fVar1;
    *(float *)(puVar5 + 0x12) = fVar1;
    *(float *)(puVar5 + 0x11) = fVar1;
    fVar1 = fVar8 * fVar8;
    *(float *)((int)puVar5 + 0x8c) = *(float *)((int)puVar5 + 0x8c) * fVar8;
    *(float *)(puVar5 + 0x12) = *(float *)(puVar5 + 0x12) * fVar1;
    *(float *)((int)puVar5 + 0x94) = *(float *)((int)puVar5 + 0x94) * fVar1 * fVar8;
    do {
      *(float *)((int)lVar10 + 0x88) = *(float *)((int)lVar10 + 0x78) * fVar1 * fVar1;
      iVar6 = (int)lVar14;
      lVar14 = lVar14 + 8;
      lVar10 = lVar10 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)(iVar6 + 4) * fVar1 * fVar1;
      lVar16 = lVar16 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    lVar17 = 4;
    lVar16 = uVar9 - 0x98;
    uVar13 = ZEXT48(&DAT_007358e0);
    lVar10 = lVar11;
    lVar14 = lVar16;
    do {
      pfVar15 = (float *)uVar13;
      fVar1 = pfVar15[1];
      uVar13 = uVar13 + 8;
      *(float *)((int)lVar10 + 0x88) = *(float *)((int)lVar10 + 0x88) * *pfVar15;
      lVar10 = lVar10 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar1;
      lVar14 = lVar14 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    lVar10 = 2;
    do {
      iVar6 = (int)lVar11;
      iVar7 = (int)lVar16;
      lVar11 = lVar11 + 0x10;
      lVar16 = lVar16 + 0x10;
      dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar6 + 0x88)) + *(float *)(iVar7 + 4) +
                        *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    dVar22 = (double)((float)(dVar22 + dVar24) * fVar3 + fVar2);
  }
  dVar25 = 10.0;
  dVar24 = 5.0;
  dVar22 = (double)MB_DeltAngSpeed
                             ((double)fVar27,-dVar22,
                              (double)((float)((double)(float)(dVar19 * 10.0) * dVar23) *
                                      DAT_0071f418),
                              (double)((float)((double)(float)(dVar19 * 5.0) * dVar23) *
                                      DAT_0071f418),
                              (double)((float)(dVar19 * dVar23) * g_FrameTime),
                              &DAT_004482e0,uVar13,iVar4 + 0x11c);
  *(float *)(param_1 + 0x44) = (float)dVar22;
  fVar27 = MB_WrapRot((float)(dVar26 * (double)*(float *)(iVar4 + 0x124)));
  dVar22 = (double)FastDiffRots((double)*(float *)(param_1 + 0x40),(double)fVar27);
  fVar27 = MB_WrapRot((float)(dVar22 * (double)*(float *)(iVar4 + 0x128)));
  dVar22 = (double)*(float *)(iVar4 + 0x110);
  dVar22 = (double)MB_DeltAngSpeed
                             ((double)*(float *)(param_1 + 0x40),(double)fVar27,
                              (double)((float)((double)(float)(dVar22 * dVar25) * dVar23) *
                                      DAT_0071f418),
                              (double)((float)((double)(float)(dVar22 * dVar24) * dVar23) *
                                      DAT_0071f418),
                              (double)((float)(dVar22 * dVar23) * g_FrameTime));
  *(float *)(param_1 + 0x40) = (float)dVar22;
  return;
}


// 0x0448858 (0x208 bytes)
void M795_00448858(MobyInstance *param_1)

{
  MOBY_OCLASSES MVar1;
  void *pvVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  
  MVar1 = param_1->oClass;
  pvVar2 = param_1->pVar;
  if ((short)MVar1 < 0x73) {
    if (((MVar1 != RED_SHIP_1) && (MVar1 != 0x40)) && (MVar1 != 0x33)) {
      return;
    }
  }
  else if ((short)MVar1 < 0x76) {
    if (0x74 < (short)MVar1) {
      return;
    }
  }
  else if (0x77 < (short)MVar1) {
    return;
  }
  if (*(short *)((int)pvVar2 + 0x148) == -1) {
    iVar6 = MB_randRange
                      ((longlong)*(short *)((int)pvVar2 + 0x14c),
                       (longlong)*(short *)((int)pvVar2 + 0x14c) +
                       (longlong)*(short *)((int)pvVar2 + 0x14e));
    *(short *)((int)pvVar2 + 0x148) = (short)(int)(animationSpeed * ((float)(longlong)iVar6 + 0.5));
  }
  else {
    iVar6 = FastDecTimerS16((int)pvVar2 + 0x148);
    if (iVar6 != 0) {
      fVar3 = (param_1->pos).y - GameCamera.posY;
      fVar4 = (param_1->pos).x - GameCamera.posX;
      fVar5 = (param_1->pos).z - GameCamera.posZ;
      fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      if ((15.0 < fVar3) && (fVar3 < 90.0)) {
        PlayMobySound(0,0,param_1);
      }
      iVar6 = MB_randRange
                        ((int)(animationSpeed * 2200.5),
                         (int)(animationSpeed * 2200.5) + (int)(animationSpeed * 1000.5));
      *(short *)((int)pvVar2 + 0x148) =
           (short)(int)(animationSpeed * ((float)(longlong)iVar6 + 0.5));
    }
  }
  return;
}


// 0x0448ab0 (0xacc bytes)
void M795_00448ab0(MobyInstance *param_1,undefined8 param_2,int param_3)

{
  MOBY_OCLASSES MVar1;
  MobyModeBit MVar2;
  void *pvVar3;
  u16 *puVar4;
  undefined2 uVar5;
  int iVar6;
  vec4 *pvVar7;
  vec4 *pvVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> local_a0;
  GPiece<56> local_90;
  
  pvVar3 = param_1->pVar;
  iVar6 = MB_damage(param_1,0xa30000,0);
  if ((iVar6 != 0) && ((*(char *)(iVar6 + 0x28) != '\x02' || (*(char *)(iVar6 + 0x29) != '\x01'))))
  {
    uVar10 = 0;
    if ((*(uint *)(iVar6 + 0x24) & 0x800000) == 0) {
      MB_DistributeBolts(param_1,3,5,2,0xffffffffffffffff);
    }
    else {
      MB_DistributeBolts(param_1,10,0x14,2,0xffffffffffffffff);
    }
    auVar12 = ZEXT416(0xffffffff);
    auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
    auVar13 = vectorShiftLeftIntegerWord(auVar12,auVar12);
    auVar12 = loadVectorLeftIndexed(0x28,0x448a60);
    auVar12 = auVar12 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar14 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar12 = vectorMultiplyAddFloatingPoint
                        (auVar14,auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,
                         auVar13);
    auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar12,0);
    auVar12 = vectorSplatHalfWord(auVar12,1);
    uVar5 = storeVectorElementHalfWordIndexed(auVar12,0x14a,ZEXT48(pvVar3));
    *(undefined2 *)((int)pvVar3 + 0x14a) = uVar5;
    MB_genericExplosion
              (uVar10,uVar10,0x4010000000000000,0x4000000000000000,0x40f86a0000000000,
               0x4008000000000000,0x402e000000000000,param_1,local_90,local_a0,0x14a,1,0x14,3,4);
    pvVar8 = &param_1->rotation;
    pvVar7 = &param_1->pos;
    MVar1 = param_1->oClass;
    dVar11 = 12.0;
    dVar9 = 90.5;
    if (MVar1 == PURPLE_SHIP_0084) {
      MB_SpawnDebrisMoby
                ((double)(DAT_0071f418 * 12.0),param_1,0x6bc,pvVar7,pvVar8,
                 (int)(animationSpeed * 90.5),0);
      MB_SpawnDebrisMoby
                ((double)(float)((double)DAT_0071f418 * dVar11),param_1,0x6be,pvVar7,pvVar8,
                 (int)((double)animationSpeed * dVar9),0);
      MB_SpawnDebrisMoby
                ((double)(float)((double)DAT_0071f418 * dVar11),param_1,0x6bf,pvVar7,pvVar8,
                 (int)((double)animationSpeed * dVar9),0);
    }
    else if (MVar1 == BEIGE_SHIP) {
      MB_SpawnDebrisMoby
                ((double)(DAT_0071f418 * 12.0),param_1,0x6b8,pvVar7,pvVar8,
                 (int)(animationSpeed * 90.5),0);
      MB_SpawnDebrisMoby
                ((double)(float)((double)DAT_0071f418 * dVar11),param_1,0x6b9,pvVar7,pvVar8,
                 (int)((double)animationSpeed * dVar9),0);
      MB_SpawnDebrisMoby
                ((double)(float)((double)DAT_0071f418 * dVar11),param_1,0x6ba,pvVar7,pvVar8,
                 (int)((double)animationSpeed * dVar9),0);
    }
    else if (MVar1 == GREEN_SHIP_0077) {
      MB_SpawnDebrisMoby
                ((double)(DAT_0071f418 * 12.0),param_1,0x6b5,pvVar7,pvVar8,
                 (int)(animationSpeed * 90.5),0);
      MB_SpawnDebrisMoby
                ((double)(float)((double)DAT_0071f418 * dVar11),param_1,0x6b6,pvVar7,pvVar8,
                 (int)((double)animationSpeed * dVar9),0);
      MB_SpawnDebrisMoby
                ((double)(float)((double)DAT_0071f418 * dVar11),param_1,0x6b7,pvVar7,pvVar8,
                 (int)((double)animationSpeed * dVar9),0);
    }
    else if (MVar1 == TRUCK_SHIP) {
      MB_SpawnDebrisMoby
                ((double)(DAT_0071f418 * 12.0),param_1,0x6b2,pvVar7,pvVar8,
                 (int)(animationSpeed * 90.5),0);
      MB_SpawnDebrisMoby
                ((double)(float)((double)DAT_0071f418 * dVar11),param_1,0x6b3,pvVar7,pvVar8,
                 (int)((double)animationSpeed * dVar9),0);
      MB_SpawnDebrisMoby
                ((double)(float)((double)DAT_0071f418 * dVar11),param_1,0x6b4,pvVar7,pvVar8,
                 (int)((double)animationSpeed * dVar9),0);
    }
    else if (MVar1 == YELLOW_SHIP) {
      MB_SpawnDebrisMoby
                ((double)(DAT_0071f418 * 12.0),param_1,0x6af,pvVar7,pvVar8,
                 (int)(animationSpeed * 90.5),0);
      MB_SpawnDebrisMoby
                ((double)(float)((double)DAT_0071f418 * dVar11),param_1,0x6b0,pvVar7,pvVar8,
                 (int)((double)animationSpeed * dVar9),0);
      MB_SpawnDebrisMoby
                ((double)(float)((double)DAT_0071f418 * dVar11),param_1,0x6b1,pvVar7,pvVar8,
                 (int)((double)animationSpeed * dVar9),0);
    }
    else if (MVar1 == RED_SHIP_2) {
      MB_SpawnDebrisMoby
                ((double)(DAT_0071f418 * 12.0),param_1,0x6ac,pvVar7,pvVar8,
                 (int)(animationSpeed * 90.5),0);
      MB_SpawnDebrisMoby
                ((double)(float)((double)DAT_0071f418 * dVar11),param_1,0x6ad,pvVar7,pvVar8,
                 (int)((double)animationSpeed * dVar9),0);
      MB_SpawnDebrisMoby
                ((double)(float)((double)DAT_0071f418 * dVar11),param_1,0x6ae,pvVar7,pvVar8,
                 (int)((double)animationSpeed * dVar9),0);
    }
    else if (MVar1 == WHITE_SHIP) {
      MB_SpawnDebrisMoby
                ((double)(DAT_0071f418 * 12.0),param_1,0x6a9,pvVar7,pvVar8,
                 (int)(animationSpeed * 90.5),0);
      MB_SpawnDebrisMoby
                ((double)(float)((double)DAT_0071f418 * dVar11),param_1,0x6aa,pvVar7,pvVar8,
                 (int)((double)animationSpeed * dVar9),0);
      MB_SpawnDebrisMoby
                ((double)(float)((double)DAT_0071f418 * dVar11),param_1,0x6ab,pvVar7,pvVar8,
                 (int)((double)animationSpeed * dVar9),0);
    }
    if (param_1->oClass == BLIMP) {
      MB_UnlockSkillPoint(4);
    }
    sound_LevelPlay(0,0,param_1);
  }
  DAT_00735d00 = &PTR_UpdateMoby_a_lot_20_0070e788;
  param_1->damage = -1;
  if (*(short *)((int)pvVar3 + 0x14a) != 0) {
    iVar6 = FastDecTimerS16(ZEXT48(pvVar3) + 0x14a);
    if ((iVar6 == 0) || (param_3 == 0)) {
      iVar6 = *(int *)((int)pvVar3 + 0x150);
      param_1->collision = (ushort *)0x0;
      param_1->modeBits = param_1->modeBits | (UNK_40|DISABLED);
      if ((iVar6 != -1) &&
         ((g_SoundChannels[iVar6].pMoby == param_1 &&
          (g_SoundChannels[iVar6].state != '\0')))) {
        sound_Kill(iVar6);
      }
      MVar2 = param_1->modeBits;
      *(undefined4 *)((int)pvVar3 + 0x150) = 0xffffffff;
      param_1->modeBits =
           MVar2 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                    DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                    TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
    }
    else {
      puVar4 = param_1->pClass->collision;
      param_1->modeBits =
           param_1->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
      param_1->collision = puVar4;
    }
  }
  return;
}


// shared update function, registered for oClasses 64, 75, 115, 116, 117, 118, 119, 120, 132, 795
// 0x04495b8 (0x10dc bytes)
// inlined: FastAtan2 @0x449b54, FastAtan2 @0x449dc0, FastAtan2 @0x449f54, FastAtan2 @0x44a4b0
// strings: 0065fff0: 'j:/Ratchet/Source/PS3/cell/samples/common/gcmutil/old/texture.cpp:35 p != NULL' | 00658140: 'WARNING moby class %d instance %d has no path!\n'

/* Moby 64
   Moby 75
   Moby 115
   Moby 116
   Moby 117
   Moby 118
   Moby 119
   Moby 120
   Moby 132
   Moby 795 */

void UpdateMoby_64(MobyInstance *moby)

{
  char cVar1;
  byte bVar2;
  f32 fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  MOBY_OCLASSES MVar13;
  void *pvVar14;
  MobyInstance *pMVar15;
  uint uVar16;
  Spline *pSVar17;
  undefined2 uVar18;
  ulonglong *puVar19;
  Vec4 *pVVar20;
  float fVar21;
  int iVar22;
  longlong lVar23;
  undefined4 *puVar24;
  longlong lVar25;
  int iVar27;
  PathFollower *follower;
  uint uVar28;
  int iVar29;
  longlong lVar26;
  ulonglong uVar30;
  ulonglong uVar31;
  longlong lVar32;
  float *pfVar36;
  undefined8 uVar33;
  ulonglong uVar34;
  longlong lVar35;
  double dVar37;
  ulonglong uVar38;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar39;
  ulonglong in_f31;
  double dVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar43;
  MobyInstance *local_110 [68];
  
  lVar25 = (longlong)(int)moby;
  uVar31 = ZEXT48(&stack0x00000000);
  lVar26 = uVar31 - 0x1c0;
  puVar19 = (ulonglong *)lVar26;
  *puVar19 = uVar31;
  puVar19[0x3a] = in_LR;
  puVar19[0x37] = in_f31;
  puVar19[0x34] = unaff_r29;
  lVar23 = uVar31 - 0x50;
  puVar24 = (undefined4 *)lVar23;
  puVar24[3] = in_vr31_32_3;
  puVar24[2] = in_vr31_32_2;
  puVar24[1] = in_vr31_32_1;
  *puVar24 = in_vr31_32_0;
  cVar1 = moby->enabled;
  puVar19[0x35] = unaff_r30;
  iVar29 = 0;
  pvVar14 = moby->pVar;
  puVar19[0x36] = unaff_r31;
  puVar19[0x32] = unaff_r27;
  puVar19[0x33] = unaff_r28;
  puVar19[0x31] = unaff_r26;
  if (cVar1 == '\0') {
    fVar3 = (moby->pos).x;
    puVar19[0x2b] = (longlong)(int)moby->drawDistance;
    *(f32 *)(puVar19 + 0x10) = fVar3;
    *(f32 *)((int)puVar19 + 0x84) = (moby->pos).y;
    fVar3 = (moby->pos).z;
    *(undefined4 *)((int)puVar19 + 0x8c) = 0x40e00000;
    *(f32 *)(puVar19 + 0x11) = fVar3;
    iVar27 = FastCheckBsphereInView((double)(longlong)puVar19[0x2b],uVar31 - 0x140);
    if (iVar27 == -1) {
      iVar29 = 1;
    }
  }
  if (pvVar14 != (void *)0x0) {
    if ((moby->group != 0xff) && (moby->state != '\x03' && moby->state != '\0')) {
      MB_GetFirstMobyInGroup(local_110,(uint)(byte)moby->group,'\0','\0');
      pMVar15 = *(MobyInstance **)(puVar19 + 0x16);
      if (pMVar15 == moby) {
        while (pMVar15 != (MobyInstance *)0x0) {
          FastIntToDouble(pMVar15->drawDistance);
          iVar27 = MB_ScaledVecWrapper(pMVar15);
          if (iVar27 != -1) goto LAB_00449784;
          MB_GetNextMobyInGroup(local_110,*(MobyInstance **)(puVar19 + 0x16),'\0','\0');
          pMVar15 = *(MobyInstance **)(puVar19 + 0x16);
        }
        MB_GetFirstMobyInGroup(local_110,(uint)(byte)moby->group,'\0','\0');
        iVar27 = *(int *)(puVar19 + 0x16);
        if (iVar27 != 0) {
          auVar43 = loadVectorLeftIndexed(lVar23,0x44957c);
          auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
          do {
            auVar41 = ZEXT416(0xffffffff);
            auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
            auVar41 = vectorShiftLeftIntegerWord(auVar41,auVar41);
            *(undefined1 *)(iVar27 + 0x20) = 3;
            auVar42 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar41 = vectorMultiplyAddFloatingPoint(auVar42,auVar43,auVar41);
            auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
            auVar41 = vectorSplatHalfWord(auVar41,1);
            uVar18 = storeVectorElementHalfWordIndexed
                               (auVar41,300,(ulonglong)*(uint *)(iVar27 + 0x78));
            *(undefined2 *)(*(uint *)(iVar27 + 0x78) + 300) = uVar18;
            MB_GetNextMobyInGroup(local_110,*(MobyInstance **)(puVar19 + 0x16),'\0','\0');
            iVar27 = *(int *)(puVar19 + 0x16);
          } while (iVar27 != 0);
        }
      }
    }
LAB_00449784:
    M795_004479ec(lVar25);
    M795_00448858(lVar25);
    bVar2 = moby->state;
    follower = (PathFollower *)((int)pvVar14 + 0x60);
    if (bVar2 < 2) {
      if (bVar2 == 0) {
        moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
        if (*(int *)((int)pvVar14 + 0x74) == -1) {
          MVar13 = moby->oClass;
          uVar28 = (int)moby - (int)g_MobyInstance;
          puVar19[0x2b] =
               (longlong)(int)(((int)uVar28 >> 8) + (uint)((int)uVar28 < 0 && (uVar28 & 0xff) != 0))
          ;
          uVar33 = FastDoubleToInt((double)(longlong)puVar19[0x2b]);
          printf("WARNING moby class %d instance %d has no path!\n",MVar13,uVar33);
        }
        else {
          pSVar17 = Splines[*(int *)((int)pvVar14 + 0x74)];
          pVVar20 = pSVar17->points + pSVar17->cnt + -1;
          fVar8 = pSVar17->points[0].y - pVVar20->y;
          fVar10 = pSVar17->points[0].x - pVVar20->x;
          fVar9 = pSVar17->points[0].z - pVVar20->z;
          if (SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8) < 0.5) {
            pSVar17->cnt = pSVar17->cnt + -1;
          }
        }
        moby->updateDistance = -1;
        *(undefined1 *)((int)pvVar14 + 0x2b) = 1;
        uVar28 = (int)*(uint *)((int)pvVar14 + 0x140) >> 0x1f;
        *(undefined1 *)((int)pvVar14 + 0x2c) = 0x25;
        if (0x43fa0000 < (int)((uVar28 >> 1 ^ *(uint *)((int)pvVar14 + 0x140)) - uVar28)) {
          dVar37 = (double)MB_randRangeFloat(-1.0,1.0);
          *(float *)((int)pvVar14 + 0x140) =
               (float)(dVar37 * (double)*(float *)((int)pvVar14 + 0x140)) * 0.001;
        }
        uVar28 = (int)*(uint *)((int)pvVar14 + 0x144) >> 0x1f;
        if (0x43fa0000 < (int)((uVar28 >> 1 ^ *(uint *)((int)pvVar14 + 0x144)) - uVar28)) {
          dVar37 = (double)MB_randRangeFloat(-1.0,1.0);
          *(float *)((int)pvVar14 + 0x144) =
               (float)(dVar37 * (double)*(float *)((int)pvVar14 + 0x144)) * 0.001;
        }
        if (*(int *)((int)pvVar14 + 0x74) == -1) {
          moby->state = '\x02';
        }
        else {
          uVar28 = (int)moby - (int)g_MobyInstance;
          uVar28 = ((int)uVar28 >> 8) + (uint)((int)uVar28 < 0 && (uVar28 & 0xff) != 0);
          iVar29 = ((int)uVar28 >> 1) + (uint)((int)uVar28 < 0 && (uVar28 & 1) != 0);
          cVar1 = (char)(iVar29 >> 0x1f);
          *(char *)((int)pvVar14 + 0x131) =
               (char)iVar29 +
               (((char)(iVar29 / 7) + cVar1) - ((char)((char)(iVar29 / 0x7000000) + cVar1) >> 7)) *
               -7;
          InitFollower(follower);
          uVar30 = ZEXT48(*(Spline **)((int)pvVar14 + 0x70));
          uVar34 = (ulonglong)*(uint *)((int)pvVar14 + 0x60);
          if (*(char *)((int)pvVar14 + 0x65) == '\0') {
            if ((int)*(uint *)((int)pvVar14 + 0x60) < 1) {
              iVar29 = PathFindClosestPnt
                                 (0.0,(Vec4 *)&moby->pos,*(Spline **)((int)pvVar14 + 0x70));
              uVar34 = (ulonglong)iVar29;
              *(int *)((int)pvVar14 + 0x60) = iVar29;
              uVar30 = ZEXT48(*(int **)((int)pvVar14 + 0x70));
              iVar27 = 0;
              if (-1 < *(char *)((int)pvVar14 + 100)) {
                iVar27 = **(int **)((int)pvVar14 + 0x70) + -1;
              }
              if (iVar29 == iVar27) {
                uVar34 = 0;
                *(undefined4 *)((int)pvVar14 + 0x60) = 0;
              }
            }
            iVar29 = (int)uVar30 + (int)((uVar34 & 0xffffffff) << 4);
            fVar8 = (moby->pos).y - *(float *)(iVar29 + 0x14);
            fVar10 = (moby->pos).x - *(float *)(iVar29 + 0x10);
            fVar9 = (moby->pos).z - *(float *)(iVar29 + 0x18);
            iVar29 = (int)uVar30 + (int)(uVar34 << 4);
            *(float *)((int)pvVar14 + 0x6c) = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8);
            fVar8 = *(float *)(iVar29 + 0x10) - (moby->pos).x;
            fVar10 = *(float *)(iVar29 + 0x14) - (moby->pos).y;
            fVar9 = ABS(fVar8);
            *(float *)((int)puVar19 + 0xcc) = fVar8;
            fVar12 = ABS(fVar10);
            *(float *)(puVar19 + 0x1a) = fVar10;
            *(float *)((int)puVar19 + 0xd4) = fVar9 - fVar12;
            fVar8 = 0.0;
            uVar38 = (ulonglong)(*(uint *)((int)puVar19 + 0xcc) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar19 + 0xd4) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar19 + 0x1a) >> 0x1d) & 4;
            fVar10 = ABS(*(float *)((int)puVar19 + 0xcc));
            if (*(float *)((int)puVar19 + 0xd4) - 0.0 < 0.0) {
              fVar10 = fVar12;
            }
            fVar11 = *(float *)(&g_atanQuadrantTable + (int)(uVar38 << 2));
            fVar12 = *(float *)(((uint)(uVar38 << 2) | 0x735900) + 4);
            fVar21 = ABS(*(float *)(puVar19 + 0x1a));
            if (*(float *)((int)puVar19 + 0xd4) - 0.0 < 0.0) {
              fVar21 = fVar9;
            }
            if (0.0 < fVar10) {
              lVar23 = uVar31 - 0x1b0;
              lVar35 = uVar31 - 0x78;
              lVar32 = uVar31 - 0x88;
              lVar39 = 2;
              fVar10 = (fVar21 - fVar10) / (fVar21 + fVar10);
              fVar9 = fVar10 * fVar10;
              *(float *)((int)puVar19 + 0x144) = fVar10;
              *(float *)((int)puVar19 + 0x13c) = fVar10;
              *(float *)(puVar19 + 0x28) = fVar10;
              *(float *)(puVar19 + 0x27) = fVar10;
              fVar10 = fVar9 * fVar9;
              *(float *)((int)puVar19 + 0x13c) = *(float *)((int)puVar19 + 0x13c) * fVar9;
              *(float *)(puVar19 + 0x28) = *(float *)(puVar19 + 0x28) * fVar10;
              *(float *)((int)puVar19 + 0x144) = *(float *)((int)puVar19 + 0x144) * fVar10 * fVar9;
              do {
                *(float *)((int)lVar23 + 0x138) = *(float *)((int)lVar23 + 0x128) * fVar10 * fVar10;
                iVar29 = (int)lVar32;
                lVar32 = lVar32 + 8;
                lVar23 = lVar23 + 8;
                *(float *)((int)lVar35 + 4) = *(float *)(iVar29 + 4) * fVar10 * fVar10;
                lVar35 = lVar35 + 8;
                lVar39 = lVar39 + -1;
              } while (lVar39 != 0);
              lVar39 = 4;
              lVar35 = uVar31 - 0x88;
              pfVar36 = (float *)&DAT_007358e0;
              lVar23 = lVar26;
              lVar32 = lVar35;
              do {
                fVar10 = *pfVar36;
                fVar9 = pfVar36[1];
                pfVar36 = pfVar36 + 2;
                *(float *)((int)lVar23 + 0x138) = *(float *)((int)lVar23 + 0x138) * fVar10;
                lVar23 = lVar23 + 8;
                *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar9;
                lVar32 = lVar32 + 8;
                lVar39 = lVar39 + -1;
              } while (lVar39 != 0);
              lVar32 = 2;
              lVar23 = lVar26;
              do {
                iVar29 = (int)lVar23;
                lVar23 = lVar23 + 0x10;
                iVar27 = (int)lVar35;
                lVar35 = lVar35 + 0x10;
                fVar8 = fVar8 + *(float *)(iVar29 + 0x138) + *(float *)(iVar27 + 4) +
                        *(float *)(iVar27 + 8) + *(float *)(iVar27 + 0xc);
                lVar32 = lVar32 + -1;
              } while (lVar32 != 0);
              fVar8 = (fVar8 + 0.7853982) * fVar11 + fVar12;
            }
            *(float *)((int)pvVar14 + 0x78) = fVar8;
            *(undefined4 *)((int)pvVar14 + 0x68) = 0;
            *(undefined4 *)((int)pvVar14 + 0x7c) = 0;
            *(undefined1 *)((int)pvVar14 + 0x65) = 2;
          }
          uVar30 = uVar30 + (uVar34 & 0xfffffff) * 0x10;
          iVar29 = (int)uVar30;
          *(undefined4 *)((int)pvVar14 + 0xe0) = *(undefined4 *)(iVar29 + 0x10);
          *(undefined4 *)((int)pvVar14 + 0xe4) = *(undefined4 *)(iVar29 + 0x14);
          *(undefined4 *)((int)pvVar14 + 0xe8) = *(undefined4 *)(iVar29 + 0x18);
          uVar4 = *(undefined4 *)(iVar29 + 0x1c);
          *(undefined4 *)((int)pvVar14 + 0x100) = 0x3f800000;
          *(undefined4 *)((int)pvVar14 + 0xec) = uVar4;
          Spline_CalcTan
                    (*(float *)((int)pvVar14 + 0x104),*(float *)((int)pvVar14 + 0x108),
                     (Vec4 *)((int)pvVar14 + 0xa0),follower,uVar30 & 0xffffffff,0.0,0);
          iVar29 = *(int *)((int)pvVar14 + 0x70) + *(int *)((int)pvVar14 + 0x60) * 0x10;
          uVar4 = *(undefined4 *)(iVar29 + 0x10);
          *(undefined4 *)((int)pvVar14 + 0xc0) = uVar4;
          uVar5 = *(undefined4 *)(iVar29 + 0x14);
          *(undefined4 *)((int)pvVar14 + 0xc4) = uVar5;
          uVar6 = *(undefined4 *)(iVar29 + 0x18);
          *(undefined4 *)((int)pvVar14 + 200) = uVar6;
          uVar7 = *(undefined4 *)(iVar29 + 0x1c);
          *(undefined4 *)((int)pvVar14 + 0xb0) = uVar4;
          *(undefined4 *)((int)pvVar14 + 0xcc) = uVar7;
          *(undefined4 *)((int)pvVar14 + 0xb4) = uVar5;
          *(undefined4 *)((int)pvVar14 + 0xb8) = uVar6;
          *(undefined4 *)((int)pvVar14 + 0xbc) = uVar7;
          fVar10 = 0.0;
          (moby->rotation).x = 0.0;
          uVar28 = *(uint *)((int)pvVar14 + 0xa8);
          fVar9 = ABS(*(float *)((int)pvVar14 + 0xa8));
          fVar8 = SQRT(*(float *)((int)pvVar14 + 0xa0) * *(float *)((int)pvVar14 + 0xa0) +
                       *(float *)((int)pvVar14 + 0xa4) * *(float *)((int)pvVar14 + 0xa4));
          fVar12 = ABS(fVar8);
          *(float *)((int)puVar19 + 0xc4) = fVar8;
          *(float *)(puVar19 + 0x19) = fVar12 - fVar9;
          uVar34 = (ulonglong)(*(uint *)((int)puVar19 + 0xc4) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar19 + 0x19) >> 0x1e) & 2 |
                   (ulonglong)(uVar28 >> 0x1d) & 4;
          fVar8 = ABS(*(float *)((int)puVar19 + 0xc4));
          if (*(float *)(puVar19 + 0x19) - 0.0 < 0.0) {
            fVar8 = fVar9;
          }
          fVar11 = *(float *)(&g_atanQuadrantTable + (int)(uVar34 << 2));
          if (*(float *)(puVar19 + 0x19) - 0.0 < 0.0) {
            fVar9 = fVar12;
          }
          fVar12 = *(float *)(((uint)(uVar34 << 2) | 0x735900) + 4);
          fVar21 = fVar10;
          if (0.0 < fVar8) {
            lVar23 = uVar31 - 0x1b0;
            lVar32 = uVar31 - 0xa8;
            lVar35 = uVar31 - 0x98;
            lVar39 = 2;
            fVar8 = (fVar9 - fVar8) / (fVar9 + fVar8);
            fVar9 = fVar8 * fVar8;
            *(float *)((int)puVar19 + 0x124) = fVar8;
            *(float *)((int)puVar19 + 0x11c) = fVar8;
            *(float *)(puVar19 + 0x24) = fVar8;
            *(float *)(puVar19 + 0x23) = fVar8;
            fVar8 = fVar9 * fVar9;
            *(float *)((int)puVar19 + 0x11c) = *(float *)((int)puVar19 + 0x11c) * fVar9;
            *(float *)(puVar19 + 0x24) = *(float *)(puVar19 + 0x24) * fVar8;
            *(float *)((int)puVar19 + 0x124) = *(float *)((int)puVar19 + 0x124) * fVar8 * fVar9;
            do {
              *(float *)((int)lVar23 + 0x118) = *(float *)((int)lVar23 + 0x108) * fVar8 * fVar8;
              iVar29 = (int)lVar32;
              lVar23 = lVar23 + 8;
              lVar32 = lVar32 + 8;
              *(float *)((int)lVar35 + 4) = *(float *)(iVar29 + 4) * fVar8 * fVar8;
              lVar35 = lVar35 + 8;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
            lVar39 = 4;
            lVar35 = uVar31 - 0xa8;
            pfVar36 = (float *)&DAT_007358e0;
            lVar23 = lVar26;
            lVar32 = lVar35;
            do {
              fVar8 = *pfVar36;
              fVar9 = pfVar36[1];
              pfVar36 = pfVar36 + 2;
              *(float *)((int)lVar23 + 0x118) = *(float *)((int)lVar23 + 0x118) * fVar8;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar9;
              lVar32 = lVar32 + 8;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
            lVar32 = 2;
            lVar23 = lVar26;
            fVar8 = fVar10;
            do {
              iVar29 = (int)lVar23;
              lVar23 = lVar23 + 0x10;
              iVar27 = (int)lVar35;
              lVar35 = lVar35 + 0x10;
              fVar8 = fVar8 + *(float *)(iVar29 + 0x118) + *(float *)(iVar27 + 4) +
                      *(float *)(iVar27 + 8) + *(float *)(iVar27 + 0xc);
              lVar32 = lVar32 + -1;
            } while (lVar32 != 0);
            fVar21 = (fVar8 + 0.7853982) * fVar11 + fVar12;
          }
          (moby->rotation).y = -fVar21;
          uVar28 = *(uint *)((int)pvVar14 + 0xa0);
          uVar16 = *(uint *)((int)pvVar14 + 0xa4);
          fVar12 = ABS(*(float *)((int)pvVar14 + 0xa0));
          fVar9 = ABS(*(float *)((int)pvVar14 + 0xa4));
          *(float *)(puVar19 + 0x18) = fVar12 - fVar9;
          uVar34 = (ulonglong)(uVar28 >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar19 + 0x18) >> 0x1e) & 2 |
                   (ulonglong)(uVar16 >> 0x1d) & 4;
          fVar8 = fVar12;
          if (*(float *)(puVar19 + 0x18) - 0.0 < 0.0) {
            fVar8 = fVar9;
          }
          fVar11 = *(float *)(&g_atanQuadrantTable + (int)(uVar34 << 2));
          if (*(float *)(puVar19 + 0x18) - 0.0 < 0.0) {
            fVar9 = fVar12;
          }
          fVar12 = *(float *)(((uint)(uVar34 << 2) | 0x735900) + 4);
          if (0.0 < fVar8) {
            lVar23 = uVar31 - 0x1b0;
            lVar35 = uVar31 - 0xb8;
            lVar32 = uVar31 - 200;
            lVar39 = 2;
            fVar8 = (fVar9 - fVar8) / (fVar9 + fVar8);
            fVar9 = fVar8 * fVar8;
            *(float *)((int)puVar19 + 0x104) = fVar8;
            *(float *)((int)puVar19 + 0xfc) = fVar8;
            *(float *)(puVar19 + 0x20) = fVar8;
            *(float *)(puVar19 + 0x1f) = fVar8;
            fVar8 = fVar9 * fVar9;
            *(float *)((int)puVar19 + 0xfc) = *(float *)((int)puVar19 + 0xfc) * fVar9;
            *(float *)(puVar19 + 0x20) = *(float *)(puVar19 + 0x20) * fVar8;
            *(float *)((int)puVar19 + 0x104) = *(float *)((int)puVar19 + 0x104) * fVar8 * fVar9;
            do {
              *(float *)((int)lVar23 + 0xf8) = *(float *)((int)lVar23 + 0xe8) * fVar8 * fVar8;
              iVar29 = (int)lVar32;
              lVar32 = lVar32 + 8;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar35 + 4) = *(float *)(iVar29 + 4) * fVar8 * fVar8;
              lVar35 = lVar35 + 8;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
            lVar39 = 4;
            lVar35 = uVar31 - 200;
            pfVar36 = (float *)&DAT_007358e0;
            lVar23 = lVar26;
            lVar32 = lVar35;
            do {
              fVar8 = *pfVar36;
              fVar9 = pfVar36[1];
              pfVar36 = pfVar36 + 2;
              *(float *)((int)lVar23 + 0xf8) = *(float *)((int)lVar23 + 0xf8) * fVar8;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar9;
              lVar32 = lVar32 + 8;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
            lVar23 = 2;
            do {
              iVar29 = (int)lVar26;
              lVar26 = lVar26 + 0x10;
              iVar27 = (int)lVar35;
              lVar35 = lVar35 + 0x10;
              fVar10 = fVar10 + *(float *)(iVar29 + 0xf8) + *(float *)(iVar27 + 4) +
                       *(float *)(iVar27 + 8) + *(float *)(iVar27 + 0xc);
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            fVar10 = (fVar10 + 0.7853982) * fVar11 + fVar12;
          }
          (moby->rotation).z = fVar10;
          *(undefined4 *)((int)pvVar14 + 0x114) = 0;
          *(undefined4 *)((int)pvVar14 + 0x11c) = 0;
          (moby->pos).x = *(f32 *)((int)pvVar14 + 0xe0);
          (moby->pos).y = *(f32 *)((int)pvVar14 + 0xe4);
          (moby->pos).z = *(f32 *)((int)pvVar14 + 0xe8);
          (moby->pos).w = *(f32 *)((int)pvVar14 + 0xec);
          M795_00447908(lVar25,lVar25 + 0x10);
          uVar28 = *(uint *)((int)pvVar14 + 0x13c);
          uVar33 = 7;
          *(undefined1 *)((int)pvVar14 + 0x131) = 7;
          uVar31 = (ulonglong)((uint)((int)uVar28 >> 0x1f) >> 1 ^ uVar28) -
                   (longlong)((int)uVar28 >> 0x1f);
          if ((int)uVar31 < 0x40c90fdc) {
            uVar31 = (ulonglong)*(uint *)((int)pvVar14 + 0x134);
            if ((*(uint *)((int)pvVar14 + 0x134) != 0) &&
               (uVar31 = 0xffffffffbf800000, uVar28 == 0xbf800000)) {
              dVar37 = (double)MB_randRot();
              *(float *)((int)pvVar14 + 0x13c) = (float)dVar37;
            }
          }
          else {
            *(float *)((int)pvVar14 + 0x13c) = *(float *)((int)pvVar14 + 0x13c) * 0.017453292;
          }
          *(undefined4 *)((int)pvVar14 + 0xd0) = *(undefined4 *)((int)pvVar14 + 0xc0);
          *(undefined4 *)((int)pvVar14 + 0xd4) = *(undefined4 *)((int)pvVar14 + 0xc4);
          *(undefined4 *)((int)pvVar14 + 0xd8) = *(undefined4 *)((int)pvVar14 + 200);
          *(undefined4 *)((int)pvVar14 + 0xdc) = *(undefined4 *)((int)pvVar14 + 0xcc);
          Spline_CalcLen
                    ((double)*(float *)((int)pvVar14 + 0x104),
                     (double)*(float *)((int)pvVar14 + 0x108),follower,uVar31,uVar33,0,lVar25);
          if (*(short *)((int)pvVar14 + 300) < 1) {
            *(undefined2 *)((int)pvVar14 + 0x14a) = 0;
            moby->state = '\x01';
          }
          else {
            moby->state = '\x03';
          }
        }
      }
      else {
        *(f32 *)(puVar19 + 0xe) = (moby->pos).x;
        dVar37 = 5.26354424712089e-315;
        *(f32 *)((int)puVar19 + 0x74) = (moby->pos).y;
        *(f32 *)(puVar19 + 0xf) = (moby->pos).z;
        *(f32 *)((int)puVar19 + 0x7c) = (moby->pos).w;
        uVar28 = (int)*(uint *)((int)pvVar14 + 0x100) >> 0x1f;
        lVar23 = (longlong)(int)uVar28;
        if (0x3f7fffff < (int)((uVar28 >> 1 ^ *(uint *)((int)pvVar14 + 0x100)) - uVar28)) {
          *(float *)((int)pvVar14 + 0x100) = *(float *)((int)pvVar14 + 0x100) - 1.0;
          iVar27 = PathFollower_Advance(follower);
          *(undefined4 *)((int)pvVar14 + 0x90) = *(undefined4 *)((int)pvVar14 + 0xa0);
          *(undefined4 *)((int)pvVar14 + 0x94) = *(undefined4 *)((int)pvVar14 + 0xa4);
          *(undefined4 *)((int)pvVar14 + 0x98) = *(undefined4 *)((int)pvVar14 + 0xa8);
          *(undefined4 *)((int)pvVar14 + 0x9c) = *(undefined4 *)((int)pvVar14 + 0xac);
          Spline_CalcTan
                    (*(float *)((int)pvVar14 + 0x104),*(float *)((int)pvVar14 + 0x108),
                     (Vec4 *)((int)pvVar14 + 0xa0),follower,lVar23,(float)dVar37,1);
          *(undefined4 *)((int)pvVar14 + 0xb0) = *(undefined4 *)((int)pvVar14 + 0xc0);
          *(undefined4 *)((int)pvVar14 + 0xb4) = *(undefined4 *)((int)pvVar14 + 0xc4);
          *(undefined4 *)((int)pvVar14 + 0xb8) = *(undefined4 *)((int)pvVar14 + 200);
          *(undefined4 *)((int)pvVar14 + 0xbc) = *(undefined4 *)((int)pvVar14 + 0xcc);
          lVar23 = PathFollower_WrapIdx(follower,iVar27 + 1);
          iVar27 = *(int *)((int)pvVar14 + 0x70) + (int)(lVar23 << 4);
          *(undefined4 *)((int)pvVar14 + 0xc0) = *(undefined4 *)(iVar27 + 0x10);
          *(undefined4 *)((int)pvVar14 + 0xc4) = *(undefined4 *)(iVar27 + 0x14);
          *(undefined4 *)((int)pvVar14 + 200) = *(undefined4 *)(iVar27 + 0x18);
          *(undefined4 *)((int)pvVar14 + 0xcc) = *(undefined4 *)(iVar27 + 0x1c);
        }
        fVar8 = *(float *)((int)pvVar14 + 0x13c);
        fVar10 = 3.1415925 - fVar8;
        if (fVar8 - (3.1415925 - fVar8) < 0.0) {
          fVar10 = fVar8;
        }
        fVar9 = -3.1415925 - fVar8;
        if ((-3.1415925 - fVar8) - fVar10 < 0.0) {
          fVar9 = fVar10;
        }
        fVar10 = fVar9 * fVar9;
        fVar12 = fVar10 * fVar10 * fVar9;
        fVar11 = fVar10 * fVar12;
        dVar40 = (double)((*(float *)((int)pvVar14 + 0x134) *
                           (fVar10 * fVar11 * 2.601887e-06 +
                           fVar11 * -0.0001980741 +
                           fVar12 * 0.0083330255 + fVar10 * fVar9 * -0.16666657 + fVar9) +
                          *(float *)((int)pvVar14 + 0x10c)) / *(float *)((int)pvVar14 + 0xbc));
        dVar37 = (double)FastWrapRot(fVar8,*(float *)((int)pvVar14 + 0x138) * 0.017453292)
        ;
        *(float *)((int)pvVar14 + 0x13c) = (float)dVar37;
        *(undefined4 *)((int)pvVar14 + 0xe0) = *(undefined4 *)((int)pvVar14 + 0xd0);
        *(undefined4 *)((int)pvVar14 + 0xe4) = *(undefined4 *)((int)pvVar14 + 0xd4);
        *(undefined4 *)((int)pvVar14 + 0xe8) = *(undefined4 *)((int)pvVar14 + 0xd8);
        *(undefined4 *)((int)pvVar14 + 0xec) = *(undefined4 *)((int)pvVar14 + 0xdc);
        Spline_Hermite
                  ((float)((double)*(float *)((int)pvVar14 + 0x100) + dVar40),
                   (Vec4 *)((int)pvVar14 + 0xd0),(Vec4 *)((int)pvVar14 + 0xb0),
                   (Vec4 *)((int)pvVar14 + 0xc0),(Vec4 *)((int)pvVar14 + 0x90),
                   (Vec4 *)((int)pvVar14 + 0xa0));
        if (iVar29 == 0) {
          M795_004482f8(lVar25);
        }
        else {
          fVar8 = 0.0;
          (moby->rotation).w = 0.0;
          (moby->rotation).z = 0.0;
          (moby->rotation).y = 0.0;
          (moby->rotation).x = 0.0;
          fVar10 = *(float *)((int)pvVar14 + 0xd0) - *(float *)((int)pvVar14 + 0xe0);
          fVar11 = *(float *)((int)pvVar14 + 0xd4) - *(float *)((int)pvVar14 + 0xe4);
          fVar9 = ABS(fVar10);
          fVar12 = ABS(fVar11);
          *(float *)((int)puVar19 + 0xb4) = fVar10;
          *(float *)(puVar19 + 0x17) = fVar11;
          *(float *)((int)puVar19 + 0xbc) = fVar9 - fVar12;
          uVar34 = (ulonglong)(*(uint *)((int)puVar19 + 0xb4) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar19 + 0xbc) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar19 + 0x17) >> 0x1d) & 4;
          fVar10 = ABS(*(float *)((int)puVar19 + 0xb4));
          if (*(float *)((int)puVar19 + 0xbc) - 0.0 < 0.0) {
            fVar10 = fVar12;
          }
          fVar12 = *(float *)(&g_atanQuadrantTable + (int)(uVar34 << 2));
          fVar11 = ABS(*(float *)(puVar19 + 0x17));
          if (*(float *)((int)puVar19 + 0xbc) - 0.0 < 0.0) {
            fVar11 = fVar9;
          }
          fVar9 = *(float *)(((uint)(uVar34 << 2) | 0x735900) + 4);
          if (0.0 < fVar10) {
            lVar23 = uVar31 - 0x1b0;
            lVar32 = uVar31 - 0xe8;
            lVar35 = uVar31 - 0xd8;
            lVar39 = 2;
            fVar10 = (fVar11 - fVar10) / (fVar11 + fVar10);
            fVar11 = fVar10 * fVar10;
            *(float *)((int)puVar19 + 0xe4) = fVar10;
            *(float *)((int)puVar19 + 0xdc) = fVar10;
            *(float *)(puVar19 + 0x1c) = fVar10;
            *(float *)(puVar19 + 0x1b) = fVar10;
            fVar10 = fVar11 * fVar11;
            *(float *)((int)puVar19 + 0xdc) = *(float *)((int)puVar19 + 0xdc) * fVar11;
            *(float *)(puVar19 + 0x1c) = *(float *)(puVar19 + 0x1c) * fVar10;
            *(float *)((int)puVar19 + 0xe4) = *(float *)((int)puVar19 + 0xe4) * fVar10 * fVar11;
            do {
              *(float *)((int)lVar23 + 0xd8) = *(float *)((int)lVar23 + 200) * fVar10 * fVar10;
              iVar27 = (int)lVar32;
              lVar23 = lVar23 + 8;
              lVar32 = lVar32 + 8;
              *(float *)((int)lVar35 + 4) = *(float *)(iVar27 + 4) * fVar10 * fVar10;
              lVar35 = lVar35 + 8;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
            lVar39 = 4;
            lVar35 = uVar31 - 0xe8;
            pfVar36 = (float *)&DAT_007358e0;
            lVar23 = lVar26;
            lVar32 = lVar35;
            do {
              fVar10 = *pfVar36;
              fVar11 = pfVar36[1];
              pfVar36 = pfVar36 + 2;
              *(float *)((int)lVar23 + 0xd8) = *(float *)((int)lVar23 + 0xd8) * fVar10;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar11;
              lVar32 = lVar32 + 8;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
            lVar23 = 2;
            do {
              iVar27 = (int)lVar26;
              iVar22 = (int)lVar35;
              lVar26 = lVar26 + 0x10;
              lVar35 = lVar35 + 0x10;
              fVar8 = fVar8 + *(float *)(iVar27 + 0xd8) + *(float *)(iVar22 + 4) +
                      *(float *)(iVar22 + 8) + *(float *)(iVar22 + 0xc);
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            fVar8 = (fVar8 + 0.7853982) * fVar12 + fVar9;
          }
          (moby->rotation).z = fVar8;
        }
        *(float *)((int)pvVar14 + 0x100) =
             (float)((double)*(float *)((int)pvVar14 + 0x100) + dVar40);
        (moby->pos).x = *(f32 *)((int)pvVar14 + 0xe0);
        (moby->pos).y = *(f32 *)((int)pvVar14 + 0xe4);
        (moby->pos).z = *(f32 *)((int)pvVar14 + 0xe8);
        (moby->pos).w = *(f32 *)((int)pvVar14 + 0xec);
        if (iVar29 == 0) {
          M795_00447908(lVar25,lVar25 + 0x10);
        }
        FastVecSub(uVar31 - 0x120,lVar25 + 0x10,uVar31 - 0x150);
        *(undefined4 *)(puVar19 + 8) = *(undefined4 *)(puVar19 + 0x14);
        *(undefined4 *)(puVar19 + 9) = *(undefined4 *)(puVar19 + 0x15);
        *(undefined4 *)(puVar19 + 0x12) = *(undefined4 *)(puVar19 + 0x14);
        *(undefined4 *)((int)puVar19 + 0x94) = *(undefined4 *)((int)puVar19 + 0xa4);
        *(undefined4 *)((int)puVar19 + 0x44) = *(undefined4 *)((int)puVar19 + 0xa4);
        *(undefined4 *)(puVar19 + 0x13) = *(undefined4 *)(puVar19 + 0x15);
        *(undefined4 *)((int)puVar19 + 0x4c) = *(undefined4 *)((int)puVar19 + 0xac);
        *(undefined4 *)((int)puVar19 + 0x9c) = *(undefined4 *)((int)puVar19 + 0xac);
        M795_00447b40(lVar25);
        M795_00448ab0(lVar25,uVar31 - 0x130,iVar29);
      }
    }
    else if (bVar2 < 3) {
      if (*(int *)((int)pvVar14 + 0x74) != -1) {
        moby->state = '\0';
      }
      iVar29 = *(int *)((int)pvVar14 + 0x150);
      if (((iVar29 != -1) && (g_SoundChannels[iVar29].pMoby == moby)) &&
         (g_SoundChannels[iVar29].state != '\0')) {
        sound_Kill(iVar29);
      }
      *(undefined4 *)((int)pvVar14 + 0x150) = 0xffffffff;
    }
    else if ((bVar2 < 4) && (iVar29 = FastDecTimerS16((int)pvVar14 + 300), iVar29 != 0)) {
      moby->state = '\x01';
    }
  }
  return;
}


// 0x044a694 (0x14 bytes)
void M795_0044a694(void)

{
  DAT_0085a7f8 = 0x10000;
  return;
}


