// game/update/moby221.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x2f8bf4-0x2f960c
#include "game/update/moby221.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x02f8bf4 (0x14 bytes)
void M221_002f8bf4(void)

{
  DAT_007ff00c = 0x10000;
  return;
}


// 0x02f8c70 (0x99c bytes)
/* Moby 221 */

void UpdateMoby_221(MobyInstance *moby)

{
  byte bVar1;
  ushort uVar2;
  void *pvVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  longlong lVar8;
  int iVar9;
  u8 uVar12;
  undefined2 uVar11;
  ushort *puVar10;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  double dVar16;
  undefined8 uVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  GPiece<16> auStack_90;
  GPiece<16> local_80;
  GPiece<16> local_70;
  GPiece<32> auStack_60;
  
  lVar8 = (longlong)(int)moby;
  uVar12 = moby->state;
  pvVar3 = moby->pVar;
  uVar14 = ZEXT48(pvVar3);
  if (uVar12 == '\x06') {
LAB_002f8cf0:
    if (uVar12 == '\0') goto LAB_002f8d38;
  }
  else {
    iVar9 = MB_damage(lVar8,0x10000,0);
    uVar12 = moby->state;
    if ((iVar9 == 0) || (*(int *)(iVar9 + 0x2c) < 1)) goto LAB_002f8cf0;
    moby->state = '\x06';
  }
  *(undefined4 *)((int)pvVar3 + 0x68) = *(undefined4 *)((int)pvVar3 + 0x84);
  MB_UpdateManipulatorRot
            ((double)(DAT_0071f40c * 0.03),(double)(DAT_0071f40c * 0.3),lVar8,uVar14,0);
  uVar12 = moby->state;
LAB_002f8d38:
  if (uVar12 == '\x06') {
    PlayMobySound(0,0,moby);
    lVar15 = lVar8 + 0x10;
    MB_SpawnExplosionSparks(0x3ff8000000000000,0x402a000000000000,lVar8,lVar15);
    MB_DistributeBoltsNearHero(lVar8);
    uVar17 = 0;
    lVar13 = lVar8 + 0x40;
    MB_SpawnDebrisMoby(0,lVar8,0x74b,lVar15,lVar13,0,0);
    MB_SpawnDebrisMoby(uVar17,lVar8,0x74c,lVar15,lVar13,0,0);
    MB_SpawnDebrisMoby(uVar17,lVar8,0x74d,lVar15,lVar13,0,0);
    DeleteMoby(moby);
  }
  else if (uVar12 == '\x05') {
    if (((uint)moby->animationId == (int)((longlong)*(short *)((int)pvVar3 + 0x82) << 1) + 3U) &&
       ((moby->field43_0x70 & 2U) != 0)) {
      MB_randRangeFloat
                (animationSpeed * DAT_007ff044 * 60.0,animationSpeed * DAT_007ff048 * 60.0);
      uVar11 = FastDoubleToInt();
      *(undefined2 *)((int)pvVar3 + 0x80) = uVar11;
      MB_SetAnimation(lVar8,0,0,(int)(animationSpeed * 6.5));
      moby->state = '\x01';
    }
  }
  else if (uVar12 == '\x04') {
    fVar4 = (moby->pos).y - GameCamera.posY;
    fVar5 = (moby->pos).x - GameCamera.posX;
    fVar6 = (moby->pos).z - GameCamera.posZ;
    if (((SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) < 20.0) &&
        (iVar9 = MB_randInt(2), iVar9 == 0)) && (moby->enabled != '\0')) {
      dVar16 = 0.20000000298023224;
      MB_randRangeFloat(DAT_007ff040 * 0.2,DAT_007ff040);
      MB_randRangeFloat(0.0,(float)((double)DAT_007ff040 * dVar16));
      MB_randRot();
      FastVecAddSelf(auStack_60,local_80,local_70);
      GetBonePosition(lVar8,1,auStack_90);
      uVar7 = DAT_007ff030;
      uVar17 = 0x40e3880000000000;
      MB_randRange
                ((int)(animationSpeed * ((float)(longlong)DAT_007ff038 + 0.5)),
                 (int)(animationSpeed * ((float)(longlong)DAT_007ff03c + 0.5)));
      SpawnPart_21(uVar17,auStack_90,local_80,uVar7,uVar7);
    }
    iVar9 = FastDecTimerS16(uVar14 + 0x80);
    if (iVar9 != 0) {
      MB_SetAnimation
                (lVar8,(longlong)*(short *)((int)pvVar3 + 0x82) * 2 + 3,0,
                 (int)(animationSpeed * 6.5));
      moby->state = '\x05';
    }
  }
  else if (uVar12 == '\x03') {
    if (((uint)moby->animationId == (int)((longlong)*(short *)((int)pvVar3 + 0x82) << 1) + 1U) &&
       ((moby->field43_0x70 & 2U) != 0)) {
      iVar9 = MB_randRange(0xf,0x2d);
      fVar4 = animationSpeed;
      *(short *)((int)pvVar3 + 0x80) = (short)(int)(animationSpeed * ((float)(longlong)iVar9 + 0.5))
      ;
      MB_SetAnimation
                (lVar8,(longlong)*(short *)((int)pvVar3 + 0x82) * 2 + 2,0,(int)(fVar4 * 3.5));
      dVar16 = (double)MB_randRot();
      *(float *)((int)pvVar3 + 0x90) = (float)dVar16;
      moby->state = '\x04';
    }
  }
  else if (uVar12 == '\x02') {
    uVar11 = MB_randRange(0,1);
    *(undefined2 *)((int)pvVar3 + 0x82) = uVar11;
    dVar16 = (double)FastSubRots
                               (*(float *)((int)pvVar3 + 0x84),*(float *)((int)pvVar3 + 0x8c));
    if (dVar16 < 0.008726646192371845) {
      MB_SetAnimation
                (lVar8,(longlong)*(short *)((int)pvVar3 + 0x82) * 2 + 1,0,
                 (int)(animationSpeed * 6.5));
      moby->state = '\x03';
    }
    dVar16 = (double)MB_DeltAngSpeed
                               ((double)*(float *)((int)pvVar3 + 0x84),
                                (double)*(float *)((int)pvVar3 + 0x8c),
                                (double)(DAT_0071f418 * 1.5707964),
                                (double)(DAT_0071f418 * 0.7853982),
                                (double)(g_FrameTime * 0.7853982),&DAT_002f8c08,
                                &DAT_00720000,uVar14 + 0x88);
    *(float *)((int)pvVar3 + 0x84) = (float)dVar16;
  }
  else if (uVar12 == '\x01') {
    iVar9 = FastDecTimerS16(uVar14 + 0x80);
    if ((iVar9 != 0) &&
       (fVar4 = GameCamera.posY - (moby->pos).y, fVar5 = GameCamera.posX - (moby->pos).x,
       fVar6 = GameCamera.posZ - (moby->pos).z,
       SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) < 42.0)) {
      bVar1 = moby->group;
      if (bVar1 != 0xff) {
        if ((&g_MobyGroups)[bVar1] == 0) {
          return;
        }
        puVar10 = (ushort *)(&g_MobyGroups)[bVar1];
        iVar9 = 0;
        do {
          if (((g_MobyInstance[*puVar10 & 0x7fff].state < 0x80) &&
              (g_MobyInstance[*puVar10 & 0x7fff].oClass == moby->oClass)) &&
             (g_MobyInstance[*puVar10 & 0x7fff].state != 1)) {
            iVar9 = iVar9 + 1;
          }
          uVar2 = *puVar10;
          puVar10 = puVar10 + 1;
        } while (-1 < (short)uVar2);
        if (iVar9 != 0) {
          auVar18 = ZEXT416(0xffffffff);
          auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
          auVar19 = vectorShiftLeftIntegerWord(auVar18,auVar18);
          auVar18 = loadVectorLeftIndexed(0x10,0x2f8c08);
          auVar18 = auVar18 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar20 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar18 = vectorMultiplyAddFloatingPoint
                              (auVar20,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60
                               ,auVar19);
          auVar18 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
          auVar18 = vectorSplatHalfWord(auVar18,1);
          uVar11 = storeVectorElementHalfWordIndexed(auVar18,0x80,uVar14);
          *(undefined2 *)((int)pvVar3 + 0x80) = uVar11;
          return;
        }
      }
      dVar16 = (double)MB_randRangeFloat(-0.20943952,0.20943952);
      *(float *)((int)pvVar3 + 0x8c) = (float)dVar16;
      moby->state = '\x02';
    }
  }
  else if (uVar12 == '\0') {
    MB_randRangeFloat
              (animationSpeed * DAT_007ff044 * 60.0,animationSpeed * DAT_007ff048 * 60.0);
    uVar11 = FastDoubleToInt();
    *(undefined2 *)((int)pvVar3 + 0x80) = uVar11;
    *(undefined4 *)((int)pvVar3 + 0x84) = 0;
    *(undefined2 *)((int)pvVar3 + 0x82) = 0;
    *(undefined4 *)((int)pvVar3 + 0x88) = 0;
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  return;
}


