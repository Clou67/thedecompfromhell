// game/update/moby403.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x362e40-0x363a74
#include "game/update/moby403.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x0362e40 (0x60c bytes)
void M403_00362e40(int param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar4;
  undefined8 uVar3;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> local_d0;
  Vec4 local_c0 [3];
  
  uVar11 = 0;
  MB_randVector(0.004999999888241291,0.029999999329447746,local_c0);
  iVar4 = SpawnPart_69(local_d0,local_c0,0x7f,param_1);
  if (iVar4 != 0) {
    dVar7 = (double)MB_randRangeFloat(6000.0,32000.0);
    *(float *)(iVar4 + 0xc) = (float)dVar7;
  }
  dVar7 = 80000.0;
  iVar4 = 0;
  dVar9 = 120000.0;
  dVar10 = 2.5;
  auVar15 = loadVectorLeftIndexed(0x20,0x362dd0);
  dVar12 = 1.0;
  auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
  do {
    uVar3 = SpawnPart_69(local_d0,&DAT_00a15d30,0x7f,param_1);
    iVar6 = (int)uVar3;
    if (iVar6 != 0) {
      if ((iVar4 == 2) && (iVar5 = MB_randInt(8), iVar5 == 0)) {
        dVar8 = 180000.0;
      }
      else {
        dVar8 = (double)MB_randRangeFloat((float)dVar7,(float)dVar9);
      }
      auVar13 = ZEXT416(0xffffffff);
      auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
      *(float *)(iVar6 + 0xc) = (float)dVar8;
      auVar14 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      dVar8 = (double)animationSpeed;
      auVar13 = vectorShiftLeftIntegerWord(auVar13,auVar13);
      auVar13 = vectorMultiplyAddFloatingPoint(auVar14,auVar15,auVar13);
      auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
      auVar13 = vectorSplatHalfWord(auVar13,1);
      uVar2 = storeVectorElementHalfWordIndexed(auVar13,10,uVar3);
      *(undefined2 *)(iVar6 + 10) = uVar2;
      dVar8 = (double)FastIntToDouble((short)(int)(dVar8 * dVar10));
      *(undefined2 *)(iVar6 + 0x36) = 4;
      *(undefined **)(iVar6 + 0x38) = &DAT_007f7f7f;
      *(float *)(iVar6 + 0x30) = (float)(dVar12 / dVar8);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    uVar3 = 0x3fb99999a0000000;
    MB_randRangeSigned(uVar11,0x3fb99999a0000000);
    MB_randRangeSigned(uVar11,uVar3);
  }
  dVar7 = 60000.0;
  MB_randRange((int)(animationSpeed * 10.5),(int)(animationSpeed * 20.5));
  SpawnPart_21(dVar7,local_d0,local_c0,0x4f007fff,0x1fffffff);
  MB_randInt(6);
  MB_randInt(2);
  uVar11 = MB_randRangeFloat((float)dVar7,140000.0);
  MB_randRange(0x30,0xff);
  uVar11 = SpawnPart_23(0x3f999999a0000000,dVar12,dVar12,uVar11,local_d0);
  iVar4 = (int)uVar11;
  if (iVar4 != 0) {
    auVar15 = ZEXT416(0xffffffff);
    auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
    *(undefined1 *)(iVar4 + 3) = 0x44;
    auVar13 = vectorShiftLeftIntegerWord(auVar15,auVar15);
    auVar15 = loadVectorLeftIndexed(0x6c,0x362dd0);
    auVar14 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar15 = vectorMultiplyAddFloatingPoint
                        (auVar14,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,
                         auVar13);
    auVar15 = vectorConvertToSignedFixedPointWordSaturate(auVar15,0);
    auVar13 = vectorSplatHalfWord(auVar15,1);
    auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xff;
    uVar2 = storeVectorElementHalfWordIndexed(auVar13,10,uVar11);
    *(undefined2 *)(iVar4 + 10) = uVar2;
    *(undefined4 *)(iVar4 + 0x24) = 2;
    *(undefined1 *)(iVar4 + 0x2a) = 0x60;
    uVar1 = storeVectorElementByteIndexed
                      (auVar15 | auVar15 << 8 | auVar15 << 0x10 | auVar15 << 0x18 | auVar15 << 0x20
                       | auVar15 << 0x28 | auVar15 << 0x30 | auVar15 << 0x38 | auVar15 << 0x40 |
                       auVar15 << 0x48 | auVar15 << 0x50 | auVar15 << 0x58 | auVar15 << 0x60 |
                       auVar15 << 0x68 | auVar15 << 0x70 | auVar15 << 0x78,0x2b,uVar11);
    *(undefined1 *)(iVar4 + 0x2b) = uVar1;
  }
  return;
}


// 0x0363468 (0x60c bytes)
/* Moby 403 */

void UpdateMoby_403(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  f32 fVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  undefined8 in_r7;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  GPiece<16> local_70;
  GPiece<16> local_60;
  GPiece<24> local_50;
  
  lVar7 = (longlong)(int)moby;
  piVar4 = (int *)moby->pVar;
  if (moby->state == '\0') {
    fVar1 = (moby->pos).x;
    fVar2 = (moby->pos).y;
    MB_PathMoveDist
              ((double)(float)piVar4[2],*(undefined4 *)(g_GrindPaths + piVar4[3] * 0x20 + 0x10),
               lVar7 + 0x10,piVar4 + 4,piVar4 + 5,in_r7,0);
    fVar3 = (moby->pos).y;
    piVar4[6] = (int)((moby->pos).x - fVar1);
    piVar4[7] = (int)(fVar3 - fVar2);
    M403_00362e40(lVar7);
    iVar8 = FastDecTimerS32(piVar4 + 1);
    if (iVar8 != 0) {
      uVar12 = 0x3fe0000000000000;
      uVar11 = 0;
      sound_MobyPlay_oClass(1,0,moby,(int)*(short *)(*piVar4 + 0xa6));
      uVar10 = 0x3ff0000000000000;
      MB_genericExplosion
                (uVar11,uVar11,0x3ff0000000000000,uVar12,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,lVar7,local_60,local_70,0,3,5,2,4);
      CollSphere(uVar10,lVar7 + 0x10,&g_heroMtx,0,g_heroMobyPtr);
      DeleteMoby(moby);
    }
  }
  else {
    (moby->pos).x = (moby->pos).x + (float)piVar4[0xc];
    (moby->pos).y = (moby->pos).y + (float)piVar4[0xd];
    (moby->pos).z = (moby->pos).z + (float)piVar4[0xe];
    fVar3 = DAT_0071f408;
    fVar2 = DAT_0071f408 * DAT_00840a98;
    fVar1 = (float)piVar4[0xe];
    if (fVar2 < ABS((float)piVar4[0xc])) {
      piVar4[0xc] = (int)((float)piVar4[0xc] * ((DAT_00840a94 - 1.0) * DAT_0071f408 + 1.0));
    }
    if (fVar2 < ABS((float)piVar4[0xd])) {
      piVar4[0xd] = (int)((float)piVar4[0xd] * ((DAT_00840a94 - 1.0) * fVar3 + 1.0));
    }
    uVar10 = 0;
    if (0 < piVar4[0xe]) {
      fVar1 = fVar1 * ((DAT_00840a94 - 1.0) * fVar3 + 1.0);
    }
    piVar4[0xe] = (int)-(DAT_0071f40c * DAT_00840a90 - fVar1);
    dVar9 = (double)FastWrapRot((moby->rotation).x,(float)piVar4[8]);
    (moby->rotation).x = (float)dVar9;
    dVar9 = (double)FastWrapRot((moby->rotation).y,(float)piVar4[9]);
    (moby->rotation).y = (float)dVar9;
    dVar9 = (double)FastWrapRot((moby->rotation).z,(float)piVar4[10]);
    fVar5 = (moby->pos).x;
    (moby->rotation).z = (float)dVar9;
    uVar6 = (int)fVar5 >> 0x1f;
    iVar8 = (uVar6 >> 1 ^ (uint)fVar5) - uVar6;
    if ((((iVar8 < 0x40000000) || (0x447f4000 < iVar8)) ||
        (fVar5 = (moby->pos).y, uVar6 = (int)fVar5 >> 0x1f,
        iVar8 = (uVar6 >> 1 ^ (uint)fVar5) - uVar6, 0x447f4000 < iVar8 || iVar8 < 0x40000000)) ||
       ((fVar5 = (moby->pos).z, uVar6 = (int)fVar5 >> 0x1f,
        iVar8 = (uVar6 >> 1 ^ (uint)fVar5) - uVar6, iVar8 < 0x40000000 || (0x447f4000 < iVar8)))) {
      DeleteMoby(moby);
    }
    else {
      iVar8 = FastDecTimerS32(piVar4 + 1);
      if ((iVar8 == 0) &&
         (iVar8 = CollSphere(0x3fe0000000000000,local_50,&DAT_0036344c,0,*piVar4),
         iVar8 == 0)) {
        iVar8 = MB_randInt(2);
        if (iVar8 != 0) {
          M403_00362e40(lVar7);
        }
      }
      else {
        sound_MobyPlay_oClass(0,0,moby,(int)*(short *)(*piVar4 + 0xa6));
        uVar11 = 0x3ff0000000000000;
        MB_genericExplosion
                  (uVar10,uVar10,0x3ff0000000000000,0x3fe0000000000000,0x4022000000000000,
                   0x3ff0000000000000,0x402e000000000000,lVar7,piVar4 + 0xc,lVar7 + 0x10,3,
                   0xffffffffffffffff,5,2,4);
        CollSphere(uVar11,lVar7 + 0x10,&g_heroMtx,0,g_heroMobyPtr);
        DeleteMoby(moby);
      }
    }
  }
  return;
}


