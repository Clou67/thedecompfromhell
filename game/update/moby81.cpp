// game/update/moby81.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x46c660-0x46cf0c
// shared update function UpdateMoby_{81_88}; registered for oClasses 81, 88
#include "game/update/moby81.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/lights.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// shared update function, registered for oClasses 81, 88
// 0x046c660 (0x8ac bytes)
/* Moby 81
   Moby 88 */

void UpdateMoby_81(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  void *pvVar8;
  f32 fVar9;
  uint uVar10;
  undefined1 uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  undefined2 uVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  double dVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  float local_d0;
  float local_cc;
  float local_c8;
  Vec4 local_c0;
  GPiece<16> local_b0;
  GPiece<48> local_a0;
  
  lVar12 = (longlong)(int)moby;
  pfVar7 = (float *)moby->pVar;
  iVar13 = FastDecTimerS16(pfVar7 + 4);
  if (iVar13 == 0) {
    (moby->pos).x = (moby->pos).x + *pfVar7;
    (moby->pos).y = (moby->pos).y + pfVar7[1];
    (moby->pos).z = (moby->pos).z + pfVar7[2];
    fVar3 = DAT_0071f408;
    fVar2 = DAT_0071f408 * DAT_008776b8;
    fVar1 = pfVar7[2];
    if (fVar2 < ABS(*pfVar7)) {
      *pfVar7 = *pfVar7 * ((DAT_008776b4 - 1.0) * DAT_0071f408 + 1.0);
    }
    if (fVar2 < ABS(pfVar7[1])) {
      pfVar7[1] = pfVar7[1] * ((DAT_008776b4 - 1.0) * fVar3 + 1.0);
    }
    uVar23 = 0;
    if (0 < (int)pfVar7[2]) {
      fVar1 = fVar1 * ((DAT_008776b4 - 1.0) * fVar3 + 1.0);
    }
    pvVar8 = moby->pVar;
    pfVar7[2] = -(DAT_0071f40c * DAT_008776b0 - fVar1);
    fVar9 = (moby->pos).x;
    uVar21 = 0x4000000000000000;
    uVar10 = (int)fVar9 >> 0x1f;
    iVar13 = (uVar10 >> 1 ^ (uint)fVar9) - uVar10;
    if ((((iVar13 < 0x40000000) || (0x447f4000 < iVar13)) ||
        (fVar9 = (moby->pos).y, uVar10 = (int)fVar9 >> 0x1f,
        iVar13 = (uVar10 >> 1 ^ (uint)fVar9) - uVar10, 0x447f4000 < iVar13 || iVar13 < 0x40000000))
       || ((fVar9 = (moby->pos).z, uVar10 = (int)fVar9 >> 0x1f,
           iVar13 = (uVar10 >> 1 ^ (uint)fVar9) - uVar10, iVar13 < 0x40000000 ||
           (0x447f4000 < iVar13)))) {
      if (*(short *)((int)pvVar8 + 0x12) != -1) {
        DeletePointLight();
        *(undefined2 *)((int)pvVar8 + 0x12) = 0xffff;
      }
      DeleteMoby(moby);
    }
    else {
      iVar13 = CollSphere(0x3fe8000000000000,lVar12 + 0x10,&DAT_0046c608,0,0);
      if ((iVar13 != 0) ||
         ((ABS((moby->pos).x - g_heroPosition.x) < 10.0 &&
          (ABS((moby->pos).y - g_heroPosition.y) < 10.0)))) {
        sound_MobyPlay_oClass(1,0,moby,(int)*(short *)((int)pfVar7[8] + 0xa6));
        MB_genericExplosion
                  (uVar21,0x4010000000000000,0x3ff0000000000000,0x3fe0000000000000,
                   0x4022000000000000,0x3ff0000000000000,0x4014000000000000,lVar12,local_a0,
                   lVar12 + 0x10,&DAT_0046c608,2,5,2,4);
        pvVar8 = moby->pVar;
        if (*(short *)((int)pvVar8 + 0x12) != -1) {
          DeletePointLight();
          *(undefined2 *)((int)pvVar8 + 0x12) = 0xffff;
        }
        DeleteMoby(moby);
      }
      else {
        dVar16 = (double)FastWrapRot((moby->rotation).x,pfVar7[5]);
        (moby->rotation).x = (float)dVar16;
        dVar16 = (double)FastWrapRot((moby->rotation).y,pfVar7[6]);
        (moby->rotation).y = (float)dVar16;
        dVar16 = (double)FastWrapRot((moby->rotation).z,pfVar7[7]);
        (moby->rotation).z = (float)dVar16;
        GetBonePosition(lVar12,0,&local_d0);
        uVar22 = 0x3f847ae140000000;
        uVar20 = 0x3fe0000000000000;
        MB_randRangeSigned(0x3f847ae140000000,0x3fe0000000000000);
        dVar16 = (double)animationSpeed;
        uVar21 = 0x40e3880000000000;
        MB_randRange
                  ((int)(dVar16 * 20.5),dVar16,0x40e3880000000000,(int)(dVar16 * 10.5),
                   (int)(dVar16 * 20.5));
        SpawnPart_21(uVar21,&local_c0,local_b0,0x4f007fff,0x1fffffff);
        dVar19 = 20000.0;
        dVar16 = 100000.0;
        iVar13 = 0;
        uVar18 = 0x3f999999a0000000;
        uVar21 = 0x3ff0000000000000;
        auVar26 = loadVectorLeftIndexed(0x44,0x46c608);
        auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
        do {
          if (iVar13 != 2) {
            MB_randRangeSigned(uVar22,uVar20);
            MB_randRangeSigned(uVar22,uVar20);
          }
          MB_randInt(6);
          MB_randInt(2);
          uVar17 = MB_randRangeFloat((float)dVar19,(float)dVar16);
          MB_randRange(0x10,0xff);
          uVar17 = SpawnPart_23(uVar18,uVar21,uVar21,uVar17,&local_c0);
          iVar14 = (int)uVar17;
          if (iVar14 != 0) {
            auVar24 = ZEXT416(0xffffffff);
            auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
            auVar24 = vectorShiftLeftIntegerWord(auVar24,auVar24);
            *(undefined1 *)(iVar14 + 3) = 0x44;
            auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar24 = vectorMultiplyAddFloatingPoint(auVar25,auVar26,auVar24);
            auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
            auVar25 = vectorSplatHalfWord(auVar24,1);
            auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xff;
            uVar15 = storeVectorElementHalfWordIndexed(auVar25,10,uVar17);
            *(undefined2 *)(iVar14 + 10) = uVar15;
            *(undefined4 *)(iVar14 + 0x24) = 2;
            *(undefined1 *)(iVar14 + 0x2a) = 0x60;
            uVar11 = storeVectorElementByteIndexed
                               (auVar24 | auVar24 << 8 | auVar24 << 0x10 | auVar24 << 0x18 |
                                auVar24 << 0x20 | auVar24 << 0x28 | auVar24 << 0x30 |
                                auVar24 << 0x38 | auVar24 << 0x40 | auVar24 << 0x48 |
                                auVar24 << 0x50 | auVar24 << 0x58 | auVar24 << 0x60 |
                                auVar24 << 0x68 | auVar24 << 0x70 | auVar24 << 0x78,0x2b,uVar17);
            *(undefined1 *)(iVar14 + 0x2b) = uVar11;
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < 3);
        fVar1 = (moby->pos).x;
        fVar2 = (moby->pos).y;
        fVar3 = (moby->pos).z;
        iVar13 = MB_randInt(2);
        if (iVar13 == 0) {
          fVar4 = (moby->transform).v2.x;
          fVar5 = (moby->transform).v2.y;
          fVar6 = (moby->transform).v2.z;
        }
        else {
          fVar4 = -(moby->transform).v2.x;
          fVar5 = -(moby->transform).v2.y;
          fVar6 = -(moby->transform).v2.z;
        }
        if (*(short *)((int)pfVar7 + 0x12) == -1) {
          uVar15 = CreatePointLight2
                             (3.0,uVar23,uVar21,0x3fe99999a0000000,0x3fc99999a0000000,&local_c0);
          *(undefined2 *)((int)pfVar7 + 0x12) = uVar15;
        }
        else {
          iVar13 = (int)((longlong)*(short *)((int)pfVar7 + 0x12) << 5);
          *(float *)((int)&PointLights[0].pos.x + iVar13) = (local_d0 - fVar1) * 2.5 + fVar1 + fVar4
          ;
          *(float *)((int)&PointLights[0].pos.y + iVar13) = (local_cc - fVar2) * 2.5 + fVar2 + fVar5
          ;
          *(undefined4 *)((int)&PointLights[0].pos.w + iVar13) = 0x40400000;
          *(float *)((int)&PointLights[0].pos.z + iVar13) = (local_c8 - fVar3) * 2.5 + fVar3 + fVar6
          ;
          *(undefined4 *)((int)&PointLights[0].color.x + iVar13) = 0x3f800000;
          *(undefined4 *)((int)&PointLights[0].color.y + iVar13) = 0x3f4ccccd;
          *(undefined4 *)((int)&PointLights[0].color.z + iVar13) = 0x3e4ccccd;
        }
      }
    }
  }
  else {
    pvVar8 = moby->pVar;
    if (*(short *)((int)pvVar8 + 0x12) != -1) {
      DeletePointLight();
      *(undefined2 *)((int)pvVar8 + 0x12) = 0xffff;
    }
    DeleteMoby(moby);
  }
  return;
}


