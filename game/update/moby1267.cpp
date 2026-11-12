// game/update/moby1267.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x14fd0-0x17b40
#include "game/update/moby1267.h"
#include "game/boot.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/memcard.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/partupd.h"
#include "game/pause.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/camera5.h"
#include "game/update/moby458.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"

// 0x0014fd0 (0x130 bytes)
/* [boot] Places the camera behind the turret using its yaw (rot.z + pi/2). */

void Moby1267_UpdateCamera(MobyInstance *moby)

{
  void *pvVar1;
  double dVar2;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  
  pvVar1 = moby->pVar;
  DeactivateMobyDrivenCamAccel();
  local_34 = (moby->transform).v2.w * DAT_0071ceb8 +
             (moby->transform).v0.w * DAT_0071ceb0 + (moby->transform).v1.w * DAT_0071ceb4 +
             DAT_0071cebc;
  local_40 = (moby->transform).v2.x * DAT_0071ceb8 +
             (moby->transform).v0.x * DAT_0071ceb0 + (moby->transform).v1.x * DAT_0071ceb4 +
             (moby->pos).x;
  local_3c = (moby->transform).v2.y * DAT_0071ceb8 +
             (moby->transform).v0.y * DAT_0071ceb0 + (moby->transform).v1.y * DAT_0071ceb4 +
             (moby->pos).y;
  local_38 = (moby->transform).v2.z * DAT_0071ceb8 +
             (moby->transform).v0.z * DAT_0071ceb0 + (moby->transform).v1.z * DAT_0071ceb4 +
             (moby->pos).z;
  Camera_SetMobyDrivenTargetPos(&local_40);
  local_30 = 0.0;
  local_2c = -*(float *)((int)pvVar1 + 0x74);
  dVar2 = (double)FastWrapRot(1.5707964,(moby->rotation).z);
  local_28 = (float)dVar2;
  Camera_SetMobyDrivenTargetRot(&local_30);
  return;
}


// 0x0015120 (0x50c bytes)
// inlined: FastAtan2 @0x15288, FastAtan2 @0x15438
// strings: 0001510c: '=VwP' (raw)

/* [boot] Checks the 10 target mobys in pVars->targetIdx against the camera yaw/pitch cone (Blarg
   helicopter / PlanetBuster part get wider offsets); increments pVars->lockTimer when on target
   else decrements. */

void Moby1267_UpdateTargetLock(MobyInstance *moby)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  void *pvVar11;
  int iVar12;
  undefined4 uVar13;
  ulonglong *puVar14;
  int iVar15;
  bool bVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  float *pfVar22;
  longlong lVar21;
  ulonglong unaff_r26;
  ulonglong uVar23;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar24;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong uVar25;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  double dVar28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar29;
  double dVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  
  uVar17 = ZEXT48(&stack0x00000000);
  lVar1 = uVar17 - 0x120;
  puVar14 = (ulonglong *)lVar1;
  *puVar14 = uVar17;
  puVar14[0x26] = in_LR;
  puVar14[0x21] = in_f29;
  puVar14[0x22] = in_f30;
  puVar14[0x23] = in_f31;
  puVar14[0x1c] = unaff_r27;
  puVar14[0x1e] = unaff_r29;
  puVar14[0x20] = unaff_r31;
  iVar24 = 0;
  pvVar11 = moby->pVar;
  uVar25 = ZEXT48(pvVar11);
  puVar14[0x1f] = unaff_r30;
  puVar14[0x1d] = unaff_r28;
  puVar14[0x1b] = unaff_r26;
  bVar16 = false;
  uVar23 = uVar25;
  do {
    fVar8 = GameCamera.posY;
    fVar9 = GameCamera.posX;
    iVar12 = *(int *)((int)uVar23 + 0x40);
    if (iVar12 != -1) {
      dVar29 = 0.12217304855585098;
      fVar2 = g_MobyInstance[iVar12].pos.z;
      fVar3 = g_MobyInstance[iVar12].pos.x;
      fVar4 = g_MobyInstance[iVar12].pos.y;
      if (g_MobyInstance[iVar12].oClass == BLARG_HELICOPTER_0146) {
        fVar2 = fVar2 + 1.5;
      }
      dVar30 = dVar29;
      if (g_MobyInstance[iVar12].oClass == PLANETBUSTER_MAXIMUS_PART_04FE) {
        dVar30 = 0.03490658476948738;
        dVar29 = 0.05235987901687622;
        fVar2 = fVar2 + 1.5;
      }
      fVar6 = fVar3 - GameCamera.posX;
      fVar10 = fVar4 - GameCamera.posY;
      fVar5 = ABS(fVar6);
      fVar7 = ABS(fVar10);
      *(float *)((int)puVar14 + 0x7c) = fVar6;
      *(float *)(puVar14 + 0x10) = fVar10;
      *(float *)((int)puVar14 + 0x84) = fVar5 - fVar7;
      dVar27 = 0.0;
      uVar20 = (ulonglong)(*(uint *)((int)puVar14 + 0x7c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar14 + 0x84) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar14 + 0x10) >> 0x1d) & 4;
      fVar6 = ABS(*(float *)((int)puVar14 + 0x7c));
      if (*(float *)((int)puVar14 + 0x84) - 0.0 < 0.0) {
        fVar6 = fVar7;
      }
      fVar10 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
      fVar7 = ABS(*(float *)(puVar14 + 0x10));
      if (*(float *)((int)puVar14 + 0x84) - 0.0 < 0.0) {
        fVar7 = fVar5;
      }
      fVar5 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
      dVar28 = dVar27;
      if (0.0 < fVar6) {
        lVar18 = uVar17 - 0x110;
        lVar19 = uVar17 - 0x78;
        lVar21 = uVar17 - 0x68;
        lVar26 = 2;
        fVar6 = (fVar7 - fVar6) / (fVar7 + fVar6);
        fVar7 = fVar6 * fVar6;
        *(float *)((int)puVar14 + 0xb4) = fVar6;
        *(float *)((int)puVar14 + 0xac) = fVar6;
        *(float *)(puVar14 + 0x16) = fVar6;
        *(float *)(puVar14 + 0x15) = fVar6;
        fVar6 = fVar7 * fVar7;
        *(float *)((int)puVar14 + 0xac) = *(float *)((int)puVar14 + 0xac) * fVar7;
        *(float *)(puVar14 + 0x16) = *(float *)(puVar14 + 0x16) * fVar6;
        *(float *)((int)puVar14 + 0xb4) = *(float *)((int)puVar14 + 0xb4) * fVar6 * fVar7;
        do {
          *(float *)((int)lVar18 + 0xa8) = *(float *)((int)lVar18 + 0x98) * fVar6 * fVar6;
          iVar12 = (int)lVar19;
          lVar18 = lVar18 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar12 + 4) * fVar6 * fVar6;
          lVar21 = lVar21 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar26 = 4;
        lVar21 = uVar17 - 0x78;
        pfVar22 = (float *)&DAT_007358e0;
        lVar18 = lVar1;
        lVar19 = lVar21;
        do {
          fVar6 = *pfVar22;
          fVar7 = pfVar22[1];
          pfVar22 = pfVar22 + 2;
          *(float *)((int)lVar18 + 0xa8) = *(float *)((int)lVar18 + 0xa8) * fVar6;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar7;
          lVar19 = lVar19 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar19 = 2;
        lVar18 = lVar1;
        do {
          iVar12 = (int)lVar18;
          lVar18 = lVar18 + 0x10;
          iVar15 = (int)lVar21;
          lVar21 = lVar21 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar12 + 0xa8)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar10 + fVar5);
      }
      fVar8 = fVar8 - fVar4;
      fVar9 = fVar9 - fVar3;
      fVar2 = fVar2 - GameCamera.posZ;
      fVar9 = SQRT(fVar9 * fVar9 + fVar8 * fVar8);
      *(float *)((int)puVar14 + 0x74) = fVar2;
      fVar2 = ABS(fVar2);
      fVar8 = ABS(fVar9);
      *(float *)(puVar14 + 0xe) = fVar9;
      *(float *)(puVar14 + 0xf) = fVar8 - fVar2;
      uVar20 = (ulonglong)(*(uint *)(puVar14 + 0xe) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar14 + 0xf) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar14 + 0x74) >> 0x1d) & 4;
      fVar9 = ABS(*(float *)(puVar14 + 0xe));
      if (*(float *)(puVar14 + 0xf) - 0.0 < 0.0) {
        fVar9 = fVar2;
      }
      fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
      fVar3 = ABS(*(float *)((int)puVar14 + 0x74));
      if (*(float *)(puVar14 + 0xf) - 0.0 < 0.0) {
        fVar3 = fVar8;
      }
      fVar8 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
      if (0.0 < fVar9) {
        lVar18 = uVar17 - 0x110;
        lVar19 = uVar17 - 0x98;
        lVar21 = uVar17 - 0x88;
        lVar26 = 2;
        fVar9 = (fVar3 - fVar9) / (fVar3 + fVar9);
        fVar3 = fVar9 * fVar9;
        *(float *)((int)puVar14 + 0x94) = fVar9;
        *(float *)((int)puVar14 + 0x8c) = fVar9;
        *(float *)(puVar14 + 0x12) = fVar9;
        *(float *)(puVar14 + 0x11) = fVar9;
        fVar9 = fVar3 * fVar3;
        *(float *)((int)puVar14 + 0x8c) = *(float *)((int)puVar14 + 0x8c) * fVar3;
        *(float *)(puVar14 + 0x12) = *(float *)(puVar14 + 0x12) * fVar9;
        *(float *)((int)puVar14 + 0x94) = *(float *)((int)puVar14 + 0x94) * fVar9 * fVar3;
        do {
          *(float *)((int)lVar18 + 0x88) = *(float *)((int)lVar18 + 0x78) * fVar9 * fVar9;
          iVar12 = (int)lVar19;
          lVar18 = lVar18 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar12 + 4) * fVar9 * fVar9;
          lVar21 = lVar21 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar26 = 4;
        lVar21 = uVar17 - 0x98;
        pfVar22 = (float *)&DAT_007358e0;
        lVar18 = lVar1;
        lVar19 = lVar21;
        do {
          fVar9 = *pfVar22;
          fVar3 = pfVar22[1];
          pfVar22 = pfVar22 + 2;
          *(float *)((int)lVar18 + 0x88) = *(float *)((int)lVar18 + 0x88) * fVar9;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar3;
          lVar19 = lVar19 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar19 = 2;
        lVar18 = lVar1;
        do {
          iVar12 = (int)lVar18;
          iVar15 = (int)lVar21;
          lVar18 = lVar18 + 0x10;
          lVar21 = lVar21 + 0x10;
          dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar12 + 0x88)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar2 + fVar8);
      }
      dVar28 = (double)FastSubRots((float)dVar28,GameCamera.rot.radius);
      if ((dVar28 < dVar30) &&
         (dVar30 = (double)FastSubRots((float)dVar27,-GameCamera.rot.elevation),
         dVar30 < dVar29)) {
        bVar16 = true;
      }
    }
    iVar24 = iVar24 + 1;
    uVar23 = uVar23 + 4;
  } while (iVar24 < 10);
  if (bVar16) {
    auVar31 = ZEXT416(0xffffffff);
    auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
    iVar24 = *(int *)((int)pvVar11 + 0x88) + 2;
    auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
    *(int *)((int)pvVar11 + 0x88) = iVar24;
    auVar31 = loadVectorLeftIndexed(0x18,0x15100);
    auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar31 = vectorMultiplyAddFloatingPoint
                        (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                         auVar32);
    auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
    puVar14[0x19] = (longlong)(int)(animationSpeed * 30.5);
    if (*(int *)((int)puVar14 + 0xcc) < iVar24) {
      auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar13 = storeVectorElementWordIndexed
                         (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x88,uVar25)
      ;
      *(undefined4 *)((int)pvVar11 + 0x88U & 0xfffffffc) = uVar13;
    }
  }
  else {
    FastDecTimerS32(uVar25 + 0x88);
  }
  return;
}


// 0x00156a8 (0x1240 bytes)
// inlined: FastAtan2 @0x15980
// strings: 000156a0: '?333`'

/* Moby 1267 */

void UpdateMoby_1267(MobyInstance *moby)

{
  bool bVar1;
  u8 uVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *pManipulator;
  uint uVar9;
  uint uVar10;
  undefined2 uVar11;
  undefined4 uVar12;
  ulonglong *puVar13;
  float fVar14;
  int iVar15;
  float fVar16;
  char acVar17 [4];
  longlong lVar18;
  undefined4 *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar24;
  undefined8 uVar23;
  float *pfVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
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
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  undefined8 uVar45;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar46;
  ulonglong in_f28;
  double dVar47;
  ulonglong in_f29;
  double dVar48;
  double dVar49;
  ulonglong in_f30;
  double dVar50;
  double dVar51;
  ulonglong in_f31;
  GPiece<16> auVar52;
  GPiece<16> auVar53;
  GPiece<16> auVar54;
  GPiece<16> auVar55;
  GPiece<16> auVar56;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  
  lVar21 = (longlong)(int)moby;
  uVar20 = ZEXT48(&stack0x00000000);
  lVar22 = uVar20 - 0x210;
  puVar13 = (ulonglong *)lVar22;
  *puVar13 = uVar20;
  puVar13[0x44] = in_LR;
  puVar13[0x36] = in_f20;
  puVar13[0x37] = in_f21;
  puVar13[0x38] = in_f22;
  puVar13[0x39] = in_f23;
  puVar13[0x3a] = in_f24;
  puVar13[0x3b] = in_f25;
  puVar13[0x3c] = in_f26;
  puVar13[0x3d] = in_f27;
  puVar13[0x3e] = in_f28;
  puVar13[0x3f] = in_f29;
  puVar13[0x40] = in_f30;
  puVar13[0x41] = in_f31;
  puVar13[0x33] = unaff_r29;
  lVar18 = uVar20 - 0xa0;
  puVar19 = (undefined4 *)lVar18;
  puVar19[3] = in_vr31_32_3;
  puVar19[2] = in_vr31_32_2;
  puVar19[1] = in_vr31_32_1;
  *puVar19 = in_vr31_32_0;
  puVar13[0x35] = unaff_r31;
  puVar13[0x34] = unaff_r30;
  pManipulator = moby->pVar;
  uVar28 = ZEXT48(pManipulator);
  uVar2 = moby->state;
  g_SoundCamOfsIgnore = moby;
  puVar13[0x32] = unaff_r28;
  puVar13[0x31] = unaff_r27;
  puVar13[0x30] = unaff_r26;
  if (uVar2 == '\b') {
    if (g_gameMode != GAME_MODE_SCENE) {
      memcard_Save(0,-1);
      moby->state = '\x06';
    }
  }
  else if (uVar2 == '\a') {
    RegisterPostDraw(&PTR_Moby1267_DrawDeathFade_00703810,moby);
    iVar24 = FastDecTimerS16(uVar28 + 0xae);
    if (iVar24 != 0) {
      MB_randRangeFloat(DAT_0071cd88,DAT_0071cd8c);
      uVar23 = 0;
      uVar45 = 0x3fe0c15240000000;
      dVar30 = (double)GameCamera.rot.radius;
      dVar34 = (double)MB_randRangeSigned(0,0x3fe0c15240000000);
      FastWrapRot((float)dVar30,(float)dVar34);
      dVar30 = (double)GameCamera.rot.elevation;
      dVar34 = (double)MB_randRangeSigned(uVar23,uVar45);
      FastWrapRot((float)dVar30,(float)dVar34);
      fVar4 = GameCamera.posY;
      *(float *)(puVar13 + 0x24) = GameCamera.posX;
      fVar5 = GameCamera.posZ;
      *(float *)((int)puVar13 + 0x124) = fVar4;
      acVar17 = GameCamera.field8_0x14c;
      *(float *)(puVar13 + 0x25) = fVar5;
      *(char (*) [4])((int)puVar13 + 300) = acVar17;
      pfVar25 = (float *)(uVar20 - 0xf0);
      MB_AddVectorSphere(pfVar25,pfVar25);
      dVar30 = 0.5;
      dVar34 = (double)MB_randRangeFloat(0.5,1.3);
      puVar13[0x12] = 3;
      puVar13[0x14] = 0;
      puVar13[0x15] = 0;
      puVar13[0x16] = 0xffffffffffffffff;
      puVar13[0x17] = 0;
      MB_genericExplosion
                (uVar23,uVar23,dVar34,(double)(float)(dVar34 * 0.5699999928474426),
                 0x4024000000000000,0x3fe6666660000000,uVar23,lVar21,&DAT_00a15d30,uVar20 - 0xf0,3,0
                 ,7,0xf,0x19);
      iVar24 = MB_randRange(5,0xd);
      puVar13[0x2c] = (longlong)iVar24;
      puVar13[0x2c] =
           (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar13[0x2c] + dVar30));
      *(short *)((int)pManipulator + 0xae) = (short)*(undefined4 *)((int)puVar13 + 0x164);
    }
    iVar24 = FastDecTimerS16(uVar28 + 0xac);
    if (iVar24 != 0) {
      HandleHeroDeath();
    }
  }
  else if (uVar2 == '\x06') {
    if (moby->animationId != '\0') {
      MB_SetAnimationNoBlend(lVar21,0,0);
    }
  }
  else if (uVar2 == '\x05') {
    if (g_gameMode != GAME_MODE_SCENE) {
      mode_sceneInit(1);
      moby->state = '\b';
    }
  }
  else if (uVar2 == '\x04') {
    auVar52 = ZEXT416(0xffffffff);
    auVar52 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
    auVar53 = vectorShiftLeftIntegerWord(auVar52,auVar52);
    DAT_00927118 = 1;
    g_heroInvisible = 1;
    auVar52 = loadVectorLeftIndexed(0x2c,0x1562c);
    auVar52 = auVar52 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar55 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
    auVar52 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar52 = vectorMultiplyAddFloatingPoint(auVar52,auVar55,auVar53);
    auVar52 = vectorConvertToSignedFixedPointWordSaturate(auVar52,0);
    auVar52 = auVar52 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar52 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
    g_heroGhostFrames = storeVectorElementWordIndexed(auVar52,0x1cc,0x969ce0);
    DAT_00969ea0 = storeVectorElementWordIndexed(auVar52,0x1c0,0x969ce0);
    if ((g_gameMode != GAME_MODE_SCENE) && (DAT_009271d0 == 0)) {
      RegisterPostDraw(&PTR_Moby1267_DrawHud_00703808,moby);
    }
    Moby1267_UpdateTargetLock(moby);
    iVar24 = FastDecTimerS32(uVar28 + 0x90);
    if (iVar24 != 0) {
      iVar24 = MB_damage(lVar21,0x10000,0);
      if (iVar24 != 0) {
        auVar52 = ZEXT416(0xffffffff);
        auVar52 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
        auVar53 = vectorShiftLeftIntegerWord(auVar52,auVar52);
        auVar54 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar52 = loadVectorLeftIndexed(0x30,0x1562c);
        auVar52 = auVar52 >> 0x60 & (GPiece<16>)0xffffffff;
        fVar4 = *(float *)((int)pManipulator + 0x8c);
        auVar52 = vectorMultiplyAddFloatingPoint
                            (auVar54,auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,
                             auVar53);
        auVar52 = vectorConvertToSignedFixedPointWordSaturate(auVar52,0);
        auVar52 = auVar52 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar12 = storeVectorElementWordIndexed
                           (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,0x90,
                            uVar28);
        *(undefined4 *)((int)pManipulator + 0x90U & 0xfffffffc) = uVar12;
        *(float *)((int)pManipulator + 0x8c) = fVar4 - *(float *)(iVar24 + 0x2c);
      }
      moby->damage = -1;
    }
    if (DAT_00927134 == 0) {
      if ((DAT_0096b2ef & 1) != 0) {
        uVar10 = (int)*(uint *)((int)pManipulator + 0x8c) >> 0x1f;
        if (0x42c80000 < (int)((uVar10 >> 1 ^ *(uint *)((int)pManipulator + 0x8c)) - uVar10)) {
          DAT_00927130 = DAT_00927130 + -1;
        }
        DAT_0096b2ef = 0;
        HandleHeroDeath();
      }
      if (*(int *)((int)pManipulator + 0x8c) < 1) {
        auVar52 = ZEXT416(0xffffffff);
        auVar52 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
        auVar52 = vectorShiftLeftIntegerWord(auVar52,auVar52);
        auVar53 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar52 = vectorMultiplyAddFloatingPoint(auVar53,auVar55,auVar52);
        DAT_0092711c = 1;
        auVar52 = vectorConvertToSignedFixedPointWordSaturate(auVar52,0);
        auVar52 = vectorSplatHalfWord(auVar52,1);
        uVar11 = storeVectorElementHalfWordIndexed(auVar52,0xac,uVar28);
        *(undefined2 *)((int)pManipulator + 0xac) = uVar11;
        moby->state = '\a';
        return;
      }
    }
    if ((*(int *)((int)pManipulator + 0x94) != -1) &&
       (0x7f < g_MobyInstance[*(int *)((int)pManipulator + 0x94)].state)) {
      if (g_gameMode != GAME_MODE_SCENE) {
        SetLevelFlag(moby->levelFlagIdx);
        PlayInfobotMovie(0xd);
        MB_UnlockLevel(Gemlik);
        *(undefined4 *)(puVar13 + 0x1a) = 0x43a43333;
        *(undefined4 *)((int)puVar13 + 0xdc) = 0;
        *(undefined4 *)((int)puVar13 + 0xd4) = 0x43a9599a;
        *(undefined4 *)(puVar13 + 0x1c) = 0;
        *(undefined4 *)(puVar13 + 0x1b) = 0x4273eb85;
        *(undefined4 *)((int)puVar13 + 0xe4) = 0;
        *(undefined4 *)(puVar13 + 0x1d) = 0xbfd9999a;
        *(undefined4 *)((int)puVar13 + 0xec) = 0;
        DAT_00927118 = 0;
        Hero_Warp((float *)(puVar13 + 0x1a),(float *)(puVar13 + 0x1c),0,1);
        moby->state = '\x05';
        return;
      }
      if (*(char *)((int)pManipulator + 1) != '\0') {
        DetachManipulator(moby,pManipulator);
      }
      if (moby->animationId != '\0') {
        MB_SetAnimationNoBlend(lVar21,0,0);
      }
      fVar3 = *(f32 *)((int)pManipulator + 0xa0);
      (moby->rotation).z = 3.1415927;
      (moby->pos).z = fVar3;
    }
    if (DAT_009271d0 == 0) {
      dVar30 = -1.0;
      dVar34 = dVar30;
      if (g_GameSettings.CameraUpDown != 0) {
        dVar34 = 1.0;
      }
      dVar50 = (double)(float)((double)DAT_0096ba04 * dVar34);
      dVar48 = 0.01745329238474369;
      dVar34 = 0.0;
      fVar4 = -(DAT_0071ce90 * 0.017453292 * g_FrameTime * g_heroPadStick);
      if (((-1 < *(int *)((int)pManipulator + 0x7c)) &&
          (*(float *)((int)pManipulator + 0x7c) < fVar4)) ||
         ((*(int *)((int)pManipulator + 0x7c) < 1 && (fVar4 < *(float *)((int)pManipulator + 0x7c)))
         )) {
        Delt(fVar4,DAT_0071ce98 * 0.017453292 * DAT_0071f418,
                       (float *)((int)pManipulator + 0x7c));
      }
      else {
        Delt(fVar4,DAT_0071cea0 * 0.017453292 * DAT_0071f418,
                       (float *)((int)pManipulator + 0x7c));
      }
      dVar31 = (double)FastWrapRot
                                 ((moby->rotation).z,*(float *)((int)pManipulator + 0x7c));
      (moby->rotation).z = (float)dVar31;
      fVar4 = (float)((double)((float)((double)DAT_0071ce94 * dVar48) * g_FrameTime) *
                     dVar50);
      if (((-1 < *(int *)((int)pManipulator + 0x78)) &&
          (*(float *)((int)pManipulator + 0x78) < fVar4)) ||
         ((*(int *)((int)pManipulator + 0x78) < 1 && (fVar4 < *(float *)((int)pManipulator + 0x78)))
         )) {
        Delt(fVar4,(float)((double)DAT_0071ce9c * dVar48) * DAT_0071f418,
                       (float *)((int)pManipulator + 0x78));
      }
      else {
        Delt(fVar4,(float)((double)DAT_0071cea4 * dVar48) * DAT_0071f418,
                       (float *)((int)pManipulator + 0x78));
      }
      dVar48 = (double)FastWrapRot
                                 (*(float *)((int)pManipulator + 0x74),
                                  *(float *)((int)pManipulator + 0x78));
      *(float *)((int)pManipulator + 0x74) = (float)dVar48;
      dVar50 = (double)DAT_0071ce4c;
      if (dVar50 < dVar48) {
        *(float *)((int)pManipulator + 0x74) = DAT_0071ce4c;
        dVar48 = dVar50;
      }
      dVar50 = (double)DAT_0071ce48;
      if (dVar48 < dVar50) {
        *(float *)((int)pManipulator + 0x74) = DAT_0071ce48;
        dVar48 = dVar50;
      }
      FastQuaternionToEuler(-dVar48,uVar28 + 0x10,1);
      if ((moby->field43_0x70 & 2U) != 0) {
        MB_SetAnimation(lVar21,5,0,1);
      }
      FastDecTimerS16(uVar28 + 0x70);
      if (((g_Pad.downButtons & (SQUARE|CIRCLE)) != 0) && (*(short *)((int)pManipulator + 0x70) == 0)) {
        MB_SetAnimation
                  (lVar21,(ZERO_MASK((1 - *(int *)((int)pManipulator + 0x80))) & 1U) +
                          3,0,1);
        dVar48 = (double)FastWrapRot((moby->rotation).z,1.5707964);
        MB_SphericalToVector
                  (DAT_0071cea8 * g_FrameTime,(float)dVar48,
                   *(float *)((int)pManipulator + 0x74),(float *)(puVar13 + 0x1e));
        lVar22 = uVar20 - 0x110;
        if (*(int *)((int)pManipulator + 0x80) == 1) {
          *(undefined4 *)((int)pManipulator + 0x80) = 0;
          GetBonePosition(lVar21,2,lVar22);
        }
        else {
          GetBonePosition(lVar21,1,lVar22);
          *(undefined4 *)((int)pManipulator + 0x80) = 1;
        }
        fVar4 = *(float *)(puVar13 + 0x1e);
        fVar5 = *(float *)(puVar13 + 0x1f);
        fVar6 = *(float *)((int)puVar13 + 0xf4);
        *(float *)(puVar13 + 10) = fVar4;
        *(float *)(puVar13 + 0xb) = fVar5;
        fVar4 = *(float *)(puVar13 + 0x20) + fVar4 + fVar4 + fVar4;
        fVar5 = *(float *)(puVar13 + 0x21) + fVar5 + fVar5 + fVar5;
        fVar7 = *(float *)((int)puVar13 + 0x104) + fVar6 + fVar6 + fVar6;
        *(undefined4 *)((int)puVar13 + 0x4c) = *(undefined4 *)((int)puVar13 + 0x10c);
        *(float *)(puVar13 + 8) = fVar4;
        *(float *)(puVar13 + 9) = fVar5;
        *(float *)(puVar13 + 0x20) = fVar4;
        *(float *)(puVar13 + 0x21) = fVar5;
        *(float *)((int)puVar13 + 0x44) = fVar7;
        *(float *)((int)puVar13 + 0x104) = fVar7;
        *(float *)((int)puVar13 + 0x54) = fVar6;
        *(undefined4 *)((int)puVar13 + 0x5c) = *(undefined4 *)((int)puVar13 + 0xfc);
        M458_SpawnRocket(lVar21);
        PlayMobySound(0,0,moby);
        auVar52 = ZEXT416(0xffffffff);
        auVar52 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
        auVar53 = vectorShiftLeftIntegerWord(auVar52,auVar52);
        GameCamera.offset0.amp = 0.03;
        auVar52 = loadVectorLeftIndexed(0x40,0x1562c);
        auVar54 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar52 = auVar52 >> 0x60 & (GPiece<16>)0xffffffff;
        dVar51 = 10.5;
        auVar53 = vectorMultiplyAddFloatingPoint
                            (auVar54,auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,
                             auVar53);
        auVar52 = ZEXT416(0xffffffff);
        auVar55 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
        auVar52 = ZEXT416(0xffffffff);
        auVar56 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
        auVar55 = vectorShiftLeftIntegerWord(auVar55,auVar55);
        auVar52 = vectorConvertToSignedFixedPointWordSaturate(auVar53,0);
        auVar52 = auVar52 >> 0x60 & (GPiece<16>)0xffffffff;
        GameCamera.offset0.total =
             storeVectorElementWordIndexed
                       (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,0x168,0x9513c0
                       );
        GameCamera.offset1.amp = 0.03;
        auVar52 = loadVectorLeftIndexed(0x44,0x1562c);
        auVar52 = auVar52 >> 0x60 & (GPiece<16>)0xffffffff;
        dVar49 = 7.5;
        auVar52 = vectorMultiplyAddFloatingPoint
                            (auVar54,auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,
                             auVar55);
        auVar53 = vectorShiftLeftIntegerWord(auVar56,auVar56);
        auVar52 = vectorConvertToSignedFixedPointWordSaturate(auVar52,0);
        auVar52 = auVar52 >> 0x60 & (GPiece<16>)0xffffffff;
        GameCamera.offset1.total =
             storeVectorElementWordIndexed
                       (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,0x178,0x9513c0
                       );
        auVar52 = loadVectorLeftIndexed(0x48,0x1562c);
        auVar52 = auVar52 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar52 = vectorMultiplyAddFloatingPoint
                            (auVar54,auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,
                             auVar53);
        auVar52 = vectorConvertToSignedFixedPointWordSaturate(auVar52,0);
        auVar52 = vectorSplatHalfWord(auVar52,1);
        uVar11 = storeVectorElementHalfWordIndexed(auVar52,0x70,uVar28);
        *(undefined2 *)((int)pManipulator + 0x70) = uVar11;
        dVar47 = 1.0;
        dVar46 = -0.3500000238418579;
        iVar24 = 0;
        dVar31 = 3.0;
        dVar50 = 6.0;
        dVar48 = 5.5;
        uVar45 = 0x40e86a0000000000;
        do {
          *(undefined4 *)(puVar13 + 0x22) = 0;
          *(undefined4 *)((int)puVar13 + 0x114) = 0;
          *(undefined4 *)(puVar13 + 0x23) = 0;
          *(undefined4 *)((int)puVar13 + 0x11c) = 0;
          dVar32 = (double)MB_randRangeFloat((float)dVar30,(float)dVar47);
          *(float *)(puVar13 + 0x22) = (float)dVar32;
          dVar32 = (double)MB_randRangeFloat((float)dVar30,(float)dVar47);
          *(float *)((int)puVar13 + 0x114) = (float)dVar32;
          dVar33 = (double)MB_randRangeFloat((float)dVar30,(float)dVar47);
          dVar35 = (double)*(float *)((int)puVar13 + 0xf4);
          dVar36 = (double)*(float *)(puVar13 + 0x1e);
          dVar37 = (double)*(float *)((int)puVar13 + 0x114);
          dVar39 = (double)*(float *)(puVar13 + 0x1f);
          dVar42 = (double)*(float *)(puVar13 + 0x22);
          dVar32 = (double)DAT_0071f408;
          *(float *)(puVar13 + 0x23) = (float)dVar33;
          dVar44 = (double)g_FrameTime;
          *(undefined4 *)((int)puVar13 + 0x11c) = *(undefined4 *)((int)puVar13 + 0xfc);
          dVar40 = (double)SQRT((float)(dVar33 * dVar33 +
                                       (double)(float)(dVar42 * dVar42 +
                                                      (double)(float)(dVar37 * dVar37))));
          dVar43 = (double)(float)((double)(SQRT((float)(dVar39 * dVar39 +
                                                        (double)(float)(dVar36 * dVar36 +
                                                                       (double)(float)(dVar35 * 
                                                  dVar35)))) * (float)(dVar32 * dVar46 + dVar47)) /
                                  dVar40);
          dVar32 = dVar34;
          if (dVar34 - dVar40 < 0.0) {
            dVar32 = (double)(float)(dVar33 * dVar43);
          }
          dVar38 = dVar34;
          if (dVar34 - dVar40 < 0.0) {
            dVar38 = (double)(float)(dVar37 * dVar43);
          }
          dVar41 = dVar34;
          if (dVar34 - dVar40 < 0.0) {
            dVar41 = (double)(float)(dVar42 * dVar43);
          }
          if (dVar40 - dVar34 < 0.0) {
            dVar32 = (double)(float)(dVar33 * dVar43);
          }
          if (dVar40 - dVar34 < 0.0) {
            dVar38 = (double)(float)(dVar37 * dVar43);
          }
          if (dVar40 - dVar34 < 0.0) {
            dVar41 = (double)(float)(dVar42 * dVar43);
          }
          *(float *)(puVar13 + 0x23) = (float)(dVar39 + dVar32);
          *(float *)((int)puVar13 + 0x114) = (float)(dVar35 + dVar38);
          *(float *)(puVar13 + 0x22) = (float)(dVar36 + dVar41);
          dVar32 = (double)MB_randRangeFloat
                                     ((float)(dVar44 * dVar31),(float)(dVar44 * dVar50));
          fVar5 = *(float *)((int)puVar13 + 0x114);
          fVar6 = *(float *)(puVar13 + 0x22);
          fVar7 = *(float *)(puVar13 + 0x23);
          dVar35 = (double)animationSpeed;
          dVar33 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
          puVar13[0x2c] = (longlong)(int)(dVar35 * dVar48);
          puVar13[0x2c] = (longlong)(int)(dVar35 * dVar51);
          fVar4 = (float)(dVar32 / dVar33);
          dVar32 = dVar34;
          if (dVar34 - dVar33 < 0.0) {
            dVar32 = (double)(fVar6 * fVar4);
          }
          dVar35 = dVar34;
          if (dVar34 - dVar33 < 0.0) {
            dVar35 = (double)(fVar5 * fVar4);
          }
          dVar36 = dVar34;
          if (dVar34 - dVar33 < 0.0) {
            dVar36 = (double)(fVar7 * fVar4);
          }
          if (dVar33 - dVar34 < 0.0) {
            dVar32 = (double)(fVar6 * fVar4);
          }
          if (dVar33 - dVar34 < 0.0) {
            dVar35 = (double)(fVar5 * fVar4);
          }
          if (dVar33 - dVar34 < 0.0) {
            dVar36 = (double)(fVar7 * fVar4);
          }
          *(float *)(puVar13 + 0x22) = (float)dVar32;
          *(float *)((int)puVar13 + 0x114) = (float)dVar35;
          *(float *)(puVar13 + 0x23) = (float)dVar36;
          uVar23 = MB_randRange
                             (*(undefined4 *)((int)puVar13 + 0x164),
                              *(undefined4 *)((int)puVar13 + 0x164));
          SpawnPart_27(uVar45,lVar22,uVar20 - 0x100,0x5f2f4f6f,uVar23);
          iVar24 = iVar24 + 1;
        } while (iVar24 < 5);
        fVar5 = *(float *)((int)puVar13 + 0xf4);
        fVar6 = *(float *)(puVar13 + 0x1e);
        fVar7 = *(float *)(puVar13 + 0x1f);
        dVar50 = (double)animationSpeed;
        dVar48 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
        fVar4 = (float)((double)(g_FrameTime * 0.5) / dVar48);
        dVar30 = dVar34;
        if (dVar34 - dVar48 < 0.0) {
          dVar30 = (double)(fVar6 * fVar4);
        }
        dVar31 = dVar34;
        if (dVar34 - dVar48 < 0.0) {
          dVar31 = (double)(fVar5 * fVar4);
        }
        dVar46 = dVar34;
        if (dVar34 - dVar48 < 0.0) {
          dVar46 = (double)(fVar7 * fVar4);
        }
        if (dVar48 - dVar34 < 0.0) {
          dVar30 = (double)(fVar6 * fVar4);
        }
        if (dVar48 - dVar34 < 0.0) {
          dVar31 = (double)(fVar5 * fVar4);
        }
        if (dVar48 - dVar34 < 0.0) {
          dVar46 = (double)(fVar7 * fVar4);
        }
        *(float *)(puVar13 + 0x1e) = (float)dVar30;
        *(float *)((int)puVar13 + 0xf4) = (float)dVar31;
        *(float *)(puVar13 + 0x1f) = (float)dVar46;
        puVar13[0x2c] = (longlong)(int)(dVar50 * 4.5);
        puVar13[0x2c] = (longlong)(int)(dVar50 * dVar49);
        uVar45 = MB_randRange
                           (*(undefined4 *)((int)puVar13 + 0x164),
                            *(undefined4 *)((int)puVar13 + 0x164));
        SpawnPart_27(0x411e848000000000,lVar22,uVar20 - 0x120,0x2f4f7f7f,uVar45);
      }
      if (DAT_009271d0 == 0) {
        Moby1267_UpdateCamera(moby);
      }
    }
  }
  else if (uVar2 == '\x03') {
    GetBonePosition(lVar21,3,uVar20 - 0x150);
    fVar4 = (moby->pos).y;
    fVar5 = (moby->pos).x;
    fVar8 = fVar4 - g_heroPosition.y;
    fVar14 = fVar5 - g_heroPosition.x;
    fVar6 = (moby->rotation).z;
    fVar3 = (moby->pos).z;
    uVar10 = (int)fVar3 >> 0x1f;
    fVar7 = (moby->pos).z;
    if ((SQRT(fVar14 * fVar14 + fVar8 * fVar8) < 7.0) || (g_standingOnMoby == moby)) {
      fVar5 = g_heroPosition.x - fVar5;
      fVar4 = g_heroPosition.y - fVar4;
      fVar8 = *(float *)((int)pManipulator + 0xa0);
      fVar16 = ABS(fVar5);
      fVar14 = ABS(fVar4);
      *(float *)(puVar13 + 0x26) = fVar5;
      *(float *)((int)puVar13 + 0x134) = fVar4;
      *(float *)(puVar13 + 0x27) = fVar16 - fVar14;
      uVar10 = *(uint *)(puVar13 + 0x26);
      fVar4 = *(float *)(puVar13 + 0x26);
      uVar9 = *(uint *)((int)puVar13 + 0x134);
      (moby->pos).z = ((fVar8 - 1.2) - fVar7) * 0.11 + fVar7;
      dVar34 = 0.0;
      uVar28 = (ulonglong)(uVar10 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0x27) >> 0x1e) & 2 | (ulonglong)(uVar9 >> 0x1d) & 4;
      fVar4 = ABS(fVar4);
      if (*(float *)(puVar13 + 0x27) - 0.0 < 0.0) {
        fVar4 = fVar14;
      }
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar28 << 2));
      fVar5 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
      fVar8 = ABS(*(float *)((int)puVar13 + 0x134));
      if (*(float *)(puVar13 + 0x27) - 0.0 < 0.0) {
        fVar8 = fVar16;
      }
      if (0.0 < fVar4) {
        lVar18 = uVar20 - 0x200;
        lVar27 = uVar20 - 0xc4;
        lVar26 = uVar20 - 0xd4;
        lVar29 = 2;
        fVar4 = (fVar8 - fVar4) / (fVar8 + fVar4);
        fVar8 = fVar4 * fVar4;
        *(float *)(puVar13 + 0x29) = fVar4;
        *(float *)(puVar13 + 0x28) = fVar4;
        *(float *)((int)puVar13 + 0x144) = fVar4;
        *(float *)((int)puVar13 + 0x13c) = fVar4;
        fVar4 = fVar8 * fVar8;
        *(float *)(puVar13 + 0x28) = *(float *)(puVar13 + 0x28) * fVar8;
        *(float *)((int)puVar13 + 0x144) = *(float *)((int)puVar13 + 0x144) * fVar4;
        *(float *)(puVar13 + 0x29) = *(float *)(puVar13 + 0x29) * fVar4 * fVar8;
        do {
          *(float *)((int)lVar18 + 0x13c) = *(float *)((int)lVar18 + 300) * fVar4 * fVar4;
          iVar24 = (int)lVar26;
          lVar26 = lVar26 + 8;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar24 + 4) * fVar4 * fVar4;
          lVar27 = lVar27 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar29 = 4;
        lVar27 = uVar20 - 0xd4;
        pfVar25 = (float *)&DAT_007358e0;
        lVar18 = lVar22;
        lVar26 = lVar27;
        do {
          fVar4 = *pfVar25;
          fVar8 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar18 + 0x13c) = *(float *)((int)lVar18 + 0x13c) * fVar4;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar8;
          lVar26 = lVar26 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar18 = 2;
        do {
          iVar24 = (int)lVar22;
          lVar22 = lVar22 + 0x10;
          iVar15 = (int)lVar27;
          lVar27 = lVar27 + 0x10;
          dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar24 + 0x13c)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar7 + fVar5);
      }
      dVar34 = (double)FastDiffRots(dVar34,(double)fVar6);
      dVar34 = (double)FastWrapRot((float)dVar34,1.5707964);
      dVar34 = (double)FastWrapRot
                                 (*(float *)((int)pManipulator + 0xa4),
                                  (float)(dVar34 * 0.009999999776482582));
      *(float *)((int)pManipulator + 0xa4) = (float)(dVar34 * 0.8999999761581421);
      dVar34 = (double)FastWrapRot
                                 ((moby->rotation).z,(float)(dVar34 * 0.8999999761581421));
      (moby->rotation).z = (float)dVar34;
    }
    else {
      fVar4 = *(float *)((int)pManipulator + 0xa0);
      uVar9 = (int)*(uint *)((int)pManipulator + 0xa0) >> 0x1f;
      if ((int)((uVar10 >> 1 ^ (uint)fVar3) - uVar10) <
          (int)((uVar9 >> 1 ^ *(uint *)((int)pManipulator + 0xa0)) - uVar9)) {
        fVar4 = fVar7 + g_FrameTime;
      }
      bVar1 = g_standingOnMoby != moby;
      (moby->pos).z = fVar4;
      if ((bVar1) && (*(int *)((int)pManipulator + 0x98) != -1)) {
        PlayMobySound(2,0,moby);
      }
    }
    iVar24 = g_framesGroundedCnt;
    fVar4 = (moby->pos).y - (g_heroMobyPtr->pos).y;
    fVar5 = (moby->pos).x - (g_heroMobyPtr->pos).x;
    if ((SQRT(fVar5 * fVar5 + fVar4 * fVar4) < 1.3) &&
       (puVar13[0x2c] = (longlong)(int)(animationSpeed * 15.5),
       *(int *)((int)puVar13 + 0x164) < iVar24)) {
      SetCameraPosition(lVar21 + 0x10,lVar21 + 0x40,1,0,0);
      if (moby->animationId != '\x05') {
        MB_SetAnimationNoBlend(lVar21,5,0);
      }
      TransitionMovement(0x32,1);
      Moby1267_UpdateCamera(moby);
      *(undefined4 *)((int)pManipulator + 0x8c) = 0x43480000;
      moby->damage = -1;
      DAT_00927130 = DAT_00927130 + 1;
      moby->state = '\x04';
    }
  }
  else if (uVar2 == '\0') {
    DAT_00927118 = 0;
    DAT_0092711c = 0;
    if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
      moby->state = '\x06';
    }
    else {
      AttachManipulator(moby,0,pManipulator);
      auVar52 = ZEXT416(0xffffffff);
      auVar52 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
      moby->state = '\x03';
      auVar53 = vectorShiftLeftIntegerWord(auVar52,auVar52);
      *(undefined4 *)((int)pManipulator + 0x84) = 200;
      (moby->rotation).y = 0.0;
      auVar52 = loadVectorLeftIndexed(lVar18,0x1562c);
      auVar52 = auVar52 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar55 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar52 = vectorMultiplyAddFloatingPoint
                          (auVar55,auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,
                           auVar53);
      auVar52 = vectorConvertToSignedFixedPointWordSaturate(auVar52,0);
      auVar52 = vectorSplatHalfWord(auVar52,1);
      uVar11 = storeVectorElementHalfWordIndexed(auVar52,0x70,uVar28);
      *(undefined2 *)((int)pManipulator + 0x70) = uVar11;
      *(undefined4 *)((int)pManipulator + 0x78) = 0;
      *(undefined4 *)((int)pManipulator + 0x7c) = 0;
      fVar3 = (moby->pos).z;
      *(undefined2 *)((int)pManipulator + 0x72) = 0;
      *(f32 *)((int)pManipulator + 0xa0) = fVar3;
      *(undefined4 *)((int)pManipulator + 0x98) = 0xffffffff;
      (moby->rotation).z = 3.1415927;
      g_SoundCamOfsIgnore = moby;
    }
  }
  return;
}


// 0x0016940 (0x117c bytes)
/* [boot] Draw callback (PTR at 0x703808) drawing the turret reticle, health ring (pVars->health
   0..200 red->yellow->green) and lock-on indicator. */

void Moby1267_DrawHud(MobyInstance *moby)

{
  void *pvVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  GPiece<32> local_150;
  GPiece<16> local_130;
  GPiece<40> local_120;
  
  pvVar1 = moby->pVar;
  uVar3 = idol_draw::PackCmd(0,1,0,1,0x80);
  SetGSReg(3,uVar3);
  uVar3 = GetEffectTex(DAT_0071cd84 + 0x28);
  lVar9 = 0;
  dVar26 = 16.0;
  do {
    dVar24 = (double)(longlong)
                     (int)(((uint)(ZERO_MASK(((uint)lVar9 & 1))) & 2) - 1);
    dVar22 = (double)(longlong)(int)(((uint)(1 - lVar9 >> 0x3f) & 0xfffffffe) + 1);
    FastDoubleToInt
              ((double)(float)((double)(float)((double)DAT_0071cd50 * dVar22 + (double)DAT_0071cd48)
                              * dVar26));
    FastDoubleToInt((double)(float)((double)DAT_0071cd4c * dVar24 + (double)DAT_0071cd44))
    ;
    FastDoubleToInt((double)(float)((double)DAT_0071cd48 * dVar26));
    FastDoubleToInt((double)(float)((double)DAT_0071cd4c * dVar24 + (double)DAT_0071cd44))
    ;
    FastDoubleToInt
              ((double)(float)((double)(float)((double)DAT_0071cd50 * dVar22 + (double)DAT_0071cd48)
                              * dVar26));
    FastDoubleToInt((double)DAT_0071cd44);
    FastDoubleToInt((double)(float)((double)DAT_0071cd48 * dVar26));
    FastDoubleToInt((double)DAT_0071cd44);
    DrawTexturedQuadHud(local_150,local_130,local_120,uVar3,1);
    lVar9 = lVar9 + 1;
  } while ((int)lVar9 < 4);
  uVar3 = GetEffectTex(6);
  uVar2 = (int)*(uint *)((int)pvVar1 + 0x8c) >> 0x1f;
  if ((int)((uVar2 >> 1 ^ *(uint *)((int)pvVar1 + 0x8c)) - uVar2) < 0x42c80001) {
    FastLerpColor((double)(*(float *)((int)pvVar1 + 0x8c) * 0.01),0x600000ff,0x6000ffff);
  }
  else {
    FastLerpColor
              ((double)((*(float *)((int)pvVar1 + 0x8c) - 100.0) * 0.01),0x6000ffff,0x6000ff00);
  }
  FastDoubleToInt((double)(-(*(float *)((int)pvVar1 + 0x8c) * 0.005 - 1.0) * 32.0));
  dVar22 = 0.19634954631328583;
  iVar8 = 0;
  dVar24 = 3.141592502593994;
  dVar18 = -3.141592502593994;
  dVar19 = -0.16666656732559204;
  dVar20 = 0.008333025500178337;
  dVar21 = -0.0001980741071747616;
  dVar23 = 2.601886990305502e-06;
  dVar25 = 1.570796251296997;
  do {
    dVar10 = (double)FastAddRots((float)((double)(longlong)iVar8 * dVar22));
    dVar11 = (double)FastWrapRot((float)dVar10,(float)dVar22);
    dVar12 = (double)(float)(dVar24 - dVar10);
    if (dVar10 - (double)(float)(dVar24 - dVar10) < 0.0) {
      dVar12 = dVar10;
    }
    dVar15 = (double)(float)(dVar18 - dVar10);
    if ((double)(float)(dVar18 - dVar10) - dVar12 < 0.0) {
      dVar15 = dVar12;
    }
    dVar12 = (double)(float)(dVar15 * dVar15);
    dVar14 = (double)(float)(dVar12 * (double)(float)(dVar12 * dVar15));
    dVar13 = (double)(float)(dVar12 * dVar14);
    iVar4 = FastDoubleToInt
                      ((double)(DAT_0071cd54 *
                               (float)((double)(float)(dVar12 * dVar13) * dVar23 +
                                      (double)(float)(dVar13 * dVar21 +
                                                     (double)(float)(dVar14 * dVar20 +
                                                                    (double)(float)((double)(float)(
                                                  dVar12 * dVar15) * dVar19 + dVar15))))));
    dVar10 = (double)(float)(dVar10 + dVar25);
    dVar12 = (double)(float)(dVar24 - dVar10);
    if (dVar10 - (double)(float)(dVar24 - dVar10) < 0.0) {
      dVar12 = dVar10;
    }
    dVar15 = (double)(float)(dVar18 - dVar10);
    if ((double)(float)(dVar18 - dVar10) - dVar12 < 0.0) {
      dVar15 = dVar12;
    }
    dVar12 = (double)(float)(dVar15 * dVar15);
    dVar13 = (double)(float)(dVar12 * (double)(float)(dVar12 * dVar15));
    dVar10 = (double)(float)(dVar12 * dVar13);
    iVar5 = FastDoubleToInt
                      (-(double)(DAT_0071cd58 *
                                (float)((double)(float)(dVar12 * dVar10) * dVar23 +
                                       (double)(float)(dVar10 * dVar21 +
                                                      (double)(float)(dVar13 * dVar20 +
                                                                     (double)(float)((double)(float)
                                                  (dVar12 * dVar15) * dVar19 + dVar15))))));
    dVar12 = (double)(float)(dVar24 - dVar11);
    if (dVar11 - (double)(float)(dVar24 - dVar11) < 0.0) {
      dVar12 = dVar11;
    }
    dVar10 = (double)(float)(dVar18 - dVar11);
    if ((double)(float)(dVar18 - dVar11) - dVar12 < 0.0) {
      dVar10 = dVar12;
    }
    dVar12 = (double)(float)(dVar10 * dVar10);
    dVar13 = (double)(float)(dVar12 * (double)(float)(dVar12 * dVar10));
    dVar15 = (double)(float)(dVar12 * dVar13);
    iVar6 = FastDoubleToInt
                      ((double)(DAT_0071cd54 *
                               (float)((double)(float)(dVar12 * dVar15) * dVar23 +
                                      (double)(float)(dVar15 * dVar21 +
                                                     (double)(float)(dVar13 * dVar20 +
                                                                    (double)(float)((double)(float)(
                                                  dVar12 * dVar10) * dVar19 + dVar10))))));
    dVar10 = (double)(float)(dVar11 + dVar25);
    dVar12 = (double)(float)(dVar24 - dVar10);
    if (dVar10 - (double)(float)(dVar24 - dVar10) < 0.0) {
      dVar12 = dVar10;
    }
    dVar11 = (double)(float)(dVar18 - dVar10);
    if ((double)(float)(dVar18 - dVar10) - dVar12 < 0.0) {
      dVar11 = dVar12;
    }
    dVar12 = (double)(float)(dVar11 * dVar11);
    dVar15 = (double)(float)(dVar12 * (double)(float)(dVar12 * dVar11));
    dVar10 = (double)(float)(dVar12 * dVar15);
    iVar7 = FastDoubleToInt
                      (-(double)(DAT_0071cd58 *
                                (float)((double)(float)(dVar12 * dVar10) * dVar23 +
                                       (double)(float)(dVar10 * dVar21 +
                                                      (double)(float)(dVar15 * dVar20 +
                                                                     (double)(float)((double)(float)
                                                  (dVar12 * dVar11) * dVar19 + dVar11))))));
    FastDoubleToInt
              ((double)(float)((double)(DAT_0071cd48 + (float)(longlong)iVar7) * dVar26));
    FastDoubleToInt((double)(DAT_0071cd44 + (float)(longlong)iVar6));
    FastDoubleToInt((double)(float)((double)DAT_0071cd48 * dVar26));
    FastDoubleToInt((double)DAT_0071cd44);
    FastDoubleToInt
              ((double)(float)((double)(DAT_0071cd48 + (float)(longlong)iVar5) * dVar26));
    FastDoubleToInt((double)(DAT_0071cd44 + (float)(longlong)iVar4));
    FastDoubleToInt((double)(float)((double)DAT_0071cd48 * dVar26));
    FastDoubleToInt((double)DAT_0071cd44);
    DrawTexturedQuadHud(local_150,local_130,local_120,uVar3,1);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x20);
  dVar22 = 15.5;
  iVar8 = *(int *)((int)pvVar1 + 0x88);
  if ((int)(animationSpeed * 15.5) < iVar8) {
    dVar12 = (double)FastIntToDouble(iVar8 - (int)(animationSpeed * 15.5));
    FastLerpColor
              ((double)(float)(dVar12 / (double)(longlong)((double)animationSpeed * dVar22)),
               0x5000ffff,0x500000ff);
  }
  else {
    dVar12 = (double)FastIntToDouble(iVar8);
    FastLerpColor
              ((double)(float)(dVar12 / (double)(longlong)((double)animationSpeed * dVar22)),
               0x5000ff00,0x5000ffff);
  }
  dVar11 = 4.0;
  dVar10 = 0.0;
  dVar22 = (double)FastWrapRot((moby->rotation).z * 4.0,0.0);
  dVar12 = (double)FastAddRots((float)dVar22);
  dVar22 = (double)(float)(dVar24 - dVar12);
  if (dVar12 - (double)(float)(dVar24 - dVar12) < 0.0) {
    dVar22 = dVar12;
  }
  dVar15 = (double)(float)(dVar18 - dVar12);
  if ((double)(float)(dVar18 - dVar12) - dVar22 < 0.0) {
    dVar15 = dVar22;
  }
  dVar22 = (double)(float)(dVar15 * dVar15);
  dVar14 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar15));
  dVar13 = (double)(float)(dVar22 * dVar14);
  FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar22 * dVar13) * dVar23 +
                                             (double)(float)(dVar13 * dVar21 +
                                                            (double)(float)(dVar14 * dVar20 +
                                                                           (double)(float)((double)(
                                                  float)(dVar22 * dVar15) * dVar19 + dVar15)))) *
                                     DAT_0071cd74) * dVar26));
  dVar12 = (double)(float)(dVar12 + dVar25);
  dVar22 = (double)(float)(dVar24 - dVar12);
  if (dVar12 - (double)(float)(dVar24 - dVar12) < 0.0) {
    dVar22 = dVar12;
  }
  dVar15 = (double)(float)(dVar18 - dVar12);
  if ((double)(float)(dVar18 - dVar12) - dVar22 < 0.0) {
    dVar15 = dVar22;
  }
  dVar22 = (double)(float)(dVar15 * dVar15);
  dVar13 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar15));
  dVar12 = (double)(float)(dVar22 * dVar13);
  FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar22 * dVar12) * dVar23 +
                                             (double)(float)(dVar12 * dVar21 +
                                                            (double)(float)(dVar13 * dVar20 +
                                                                           (double)(float)((double)(
                                                  float)(dVar22 * dVar15) * dVar19 + dVar15)))) *
                                     DAT_0071cd70) * dVar26));
  dVar15 = 1.5707963705062866;
  dVar22 = (double)FastWrapRot((float)((double)(moby->rotation).z * dVar11),1.5707964);
  dVar12 = (double)FastAddRots((float)dVar22);
  dVar22 = (double)(float)(dVar24 - dVar12);
  if (dVar12 - (double)(float)(dVar24 - dVar12) < 0.0) {
    dVar22 = dVar12;
  }
  dVar13 = (double)(float)(dVar18 - dVar12);
  if ((double)(float)(dVar18 - dVar12) - dVar22 < 0.0) {
    dVar13 = dVar22;
  }
  dVar22 = (double)(float)(dVar13 * dVar13);
  dVar16 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar13));
  dVar14 = (double)(float)(dVar22 * dVar16);
  FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar22 * dVar14) * dVar23 +
                                             (double)(float)(dVar14 * dVar21 +
                                                            (double)(float)(dVar16 * dVar20 +
                                                                           (double)(float)((double)(
                                                  float)(dVar22 * dVar13) * dVar19 + dVar13)))) *
                                     DAT_0071cd74) * dVar26));
  dVar12 = (double)(float)(dVar12 + dVar25);
  dVar22 = (double)(float)(dVar24 - dVar12);
  if (dVar12 - (double)(float)(dVar24 - dVar12) < 0.0) {
    dVar22 = dVar12;
  }
  dVar13 = (double)(float)(dVar18 - dVar12);
  if ((double)(float)(dVar18 - dVar12) - dVar22 < 0.0) {
    dVar13 = dVar22;
  }
  dVar22 = (double)(float)(dVar13 * dVar13);
  dVar14 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar13));
  dVar12 = (double)(float)(dVar22 * dVar14);
  FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar22 * dVar12) * dVar23 +
                                             (double)(float)(dVar12 * dVar21 +
                                                            (double)(float)(dVar14 * dVar20 +
                                                                           (double)(float)((double)(
                                                  float)(dVar22 * dVar13) * dVar19 + dVar13)))) *
                                     DAT_0071cd70) * dVar26));
  dVar13 = -1.5707963705062866;
  dVar22 = (double)FastWrapRot((float)((double)(moby->rotation).z * dVar11),-1.5707964);
  dVar12 = (double)FastAddRots((float)dVar22);
  dVar22 = (double)(float)(dVar24 - dVar12);
  if (dVar12 - (double)(float)(dVar24 - dVar12) < 0.0) {
    dVar22 = dVar12;
  }
  dVar14 = (double)(float)(dVar18 - dVar12);
  if ((double)(float)(dVar18 - dVar12) - dVar22 < 0.0) {
    dVar14 = dVar22;
  }
  dVar22 = (double)(float)(dVar14 * dVar14);
  dVar17 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar14));
  dVar16 = (double)(float)(dVar22 * dVar17);
  FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar22 * dVar16) * dVar23 +
                                             (double)(float)(dVar16 * dVar21 +
                                                            (double)(float)(dVar17 * dVar20 +
                                                                           (double)(float)((double)(
                                                  float)(dVar22 * dVar14) * dVar19 + dVar14)))) *
                                     DAT_0071cd74) * dVar26));
  dVar12 = (double)(float)(dVar12 + dVar25);
  dVar22 = (double)(float)(dVar24 - dVar12);
  if (dVar12 - (double)(float)(dVar24 - dVar12) < 0.0) {
    dVar22 = dVar12;
  }
  dVar14 = (double)(float)(dVar18 - dVar12);
  if ((double)(float)(dVar18 - dVar12) - dVar22 < 0.0) {
    dVar14 = dVar22;
  }
  dVar22 = (double)(float)(dVar14 * dVar14);
  dVar16 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar14));
  dVar12 = (double)(float)(dVar22 * dVar16);
  FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar22 * dVar12) * dVar23 +
                                             (double)(float)(dVar12 * dVar21 +
                                                            (double)(float)(dVar16 * dVar20 +
                                                                           (double)(float)((double)(
                                                  float)(dVar22 * dVar14) * dVar19 + dVar14)))) *
                                     DAT_0071cd70) * dVar26));
  dVar14 = 3.1415927410125732;
  dVar22 = (double)FastWrapRot((float)((double)(moby->rotation).z * dVar11),3.1415927);
  dVar12 = (double)FastAddRots((float)dVar22);
  dVar22 = (double)(float)(dVar24 - dVar12);
  if (dVar12 - (double)(float)(dVar24 - dVar12) < 0.0) {
    dVar22 = dVar12;
  }
  dVar11 = (double)(float)(dVar18 - dVar12);
  if ((double)(float)(dVar18 - dVar12) - dVar22 < 0.0) {
    dVar11 = dVar22;
  }
  dVar22 = (double)(float)(dVar11 * dVar11);
  dVar17 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar11));
  dVar16 = (double)(float)(dVar22 * dVar17);
  FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar22 * dVar16) * dVar23 +
                                             (double)(float)(dVar16 * dVar21 +
                                                            (double)(float)(dVar17 * dVar20 +
                                                                           (double)(float)((double)(
                                                  float)(dVar22 * dVar11) * dVar19 + dVar11)))) *
                                     DAT_0071cd74) * dVar26));
  dVar12 = (double)(float)(dVar12 + dVar25);
  dVar22 = (double)(float)(dVar24 - dVar12);
  if (dVar12 - (double)(float)(dVar24 - dVar12) < 0.0) {
    dVar22 = dVar12;
  }
  dVar11 = (double)(float)(dVar18 - dVar12);
  if ((double)(float)(dVar18 - dVar12) - dVar22 < 0.0) {
    dVar11 = dVar22;
  }
  dVar22 = (double)(float)(dVar11 * dVar11);
  dVar16 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar11));
  dVar12 = (double)(float)(dVar22 * dVar16);
  FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar22 * dVar12) * dVar23 +
                                             (double)(float)(dVar12 * dVar21 +
                                                            (double)(float)(dVar16 * dVar20 +
                                                                           (double)(float)((double)(
                                                  float)(dVar22 * dVar11) * dVar19 + dVar11)))) *
                                     DAT_0071cd70) * dVar26));
  uVar3 = GetEffectTex(DAT_0071cd68);
  DrawTexturedQuadHud(local_150,local_130,local_120,uVar3,1);
  dVar11 = 8.0;
  dVar22 = (double)FastWrapRot(*(float *)((int)pvVar1 + 0x74) * 8.0,(float)dVar10);
  dVar12 = (double)FastAddRots((float)dVar22);
  dVar22 = (double)(float)(dVar24 - dVar12);
  if (dVar12 - (double)(float)(dVar24 - dVar12) < 0.0) {
    dVar22 = dVar12;
  }
  dVar10 = (double)(float)(dVar18 - dVar12);
  if ((double)(float)(dVar18 - dVar12) - dVar22 < 0.0) {
    dVar10 = dVar22;
  }
  dVar22 = (double)(float)(dVar10 * dVar10);
  dVar17 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar10));
  dVar16 = (double)(float)(dVar22 * dVar17);
  FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar22 * dVar16) * dVar23 +
                                             (double)(float)(dVar16 * dVar21 +
                                                            (double)(float)(dVar17 * dVar20 +
                                                                           (double)(float)((double)(
                                                  float)(dVar22 * dVar10) * dVar19 + dVar10)))) *
                                     DAT_0071cd74) * dVar26));
  dVar12 = (double)(float)(dVar12 + dVar25);
  dVar22 = (double)(float)(dVar24 - dVar12);
  if (dVar12 - (double)(float)(dVar24 - dVar12) < 0.0) {
    dVar22 = dVar12;
  }
  dVar10 = (double)(float)(dVar18 - dVar12);
  if ((double)(float)(dVar18 - dVar12) - dVar22 < 0.0) {
    dVar10 = dVar22;
  }
  dVar22 = (double)(float)(dVar10 * dVar10);
  dVar16 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar10));
  dVar12 = (double)(float)(dVar22 * dVar16);
  FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar22 * dVar12) * dVar23 +
                                             (double)(float)(dVar12 * dVar21 +
                                                            (double)(float)(dVar16 * dVar20 +
                                                                           (double)(float)((double)(
                                                  float)(dVar22 * dVar10) * dVar19 + dVar10)))) *
                                     DAT_0071cd70) * dVar26));
  dVar22 = (double)FastWrapRot
                             ((float)((double)*(float *)((int)pvVar1 + 0x74) * dVar11),(float)dVar15
                             );
  dVar12 = (double)FastAddRots((float)dVar22);
  dVar22 = (double)(float)(dVar24 - dVar12);
  if (dVar12 - (double)(float)(dVar24 - dVar12) < 0.0) {
    dVar22 = dVar12;
  }
  dVar10 = (double)(float)(dVar18 - dVar12);
  if ((double)(float)(dVar18 - dVar12) - dVar22 < 0.0) {
    dVar10 = dVar22;
  }
  dVar22 = (double)(float)(dVar10 * dVar10);
  dVar16 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar10));
  dVar15 = (double)(float)(dVar22 * dVar16);
  FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar22 * dVar15) * dVar23 +
                                             (double)(float)(dVar15 * dVar21 +
                                                            (double)(float)(dVar16 * dVar20 +
                                                                           (double)(float)((double)(
                                                  float)(dVar22 * dVar10) * dVar19 + dVar10)))) *
                                     DAT_0071cd74) * dVar26));
  dVar12 = (double)(float)(dVar12 + dVar25);
  dVar22 = (double)(float)(dVar24 - dVar12);
  if (dVar12 - (double)(float)(dVar24 - dVar12) < 0.0) {
    dVar22 = dVar12;
  }
  dVar10 = (double)(float)(dVar18 - dVar12);
  if ((double)(float)(dVar18 - dVar12) - dVar22 < 0.0) {
    dVar10 = dVar22;
  }
  dVar22 = (double)(float)(dVar10 * dVar10);
  dVar15 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar10));
  dVar12 = (double)(float)(dVar22 * dVar15);
  FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar22 * dVar12) * dVar23 +
                                             (double)(float)(dVar12 * dVar21 +
                                                            (double)(float)(dVar15 * dVar20 +
                                                                           (double)(float)((double)(
                                                  float)(dVar22 * dVar10) * dVar19 + dVar10)))) *
                                     DAT_0071cd70) * dVar26));
  dVar22 = (double)FastWrapRot
                             ((float)((double)*(float *)((int)pvVar1 + 0x74) * dVar11),(float)dVar13
                             );
  dVar12 = (double)FastAddRots((float)dVar22);
  dVar22 = (double)(float)(dVar24 - dVar12);
  if (dVar12 - (double)(float)(dVar24 - dVar12) < 0.0) {
    dVar22 = dVar12;
  }
  dVar10 = (double)(float)(dVar18 - dVar12);
  if ((double)(float)(dVar18 - dVar12) - dVar22 < 0.0) {
    dVar10 = dVar22;
  }
  dVar22 = (double)(float)(dVar10 * dVar10);
  dVar13 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar10));
  dVar15 = (double)(float)(dVar22 * dVar13);
  FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar22 * dVar15) * dVar23 +
                                             (double)(float)(dVar15 * dVar21 +
                                                            (double)(float)(dVar13 * dVar20 +
                                                                           (double)(float)((double)(
                                                  float)(dVar22 * dVar10) * dVar19 + dVar10)))) *
                                     DAT_0071cd74) * dVar26));
  dVar12 = (double)(float)(dVar12 + dVar25);
  dVar22 = (double)(float)(dVar24 - dVar12);
  if (dVar12 - (double)(float)(dVar24 - dVar12) < 0.0) {
    dVar22 = dVar12;
  }
  dVar10 = (double)(float)(dVar18 - dVar12);
  if ((double)(float)(dVar18 - dVar12) - dVar22 < 0.0) {
    dVar10 = dVar22;
  }
  dVar22 = (double)(float)(dVar10 * dVar10);
  dVar15 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar10));
  dVar12 = (double)(float)(dVar22 * dVar15);
  FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar22 * dVar12) * dVar23 +
                                             (double)(float)(dVar12 * dVar21 +
                                                            (double)(float)(dVar15 * dVar20 +
                                                                           (double)(float)((double)(
                                                  float)(dVar22 * dVar10) * dVar19 + dVar10)))) *
                                     DAT_0071cd70) * dVar26));
  dVar22 = (double)FastWrapRot
                             ((float)((double)*(float *)((int)pvVar1 + 0x74) * dVar11),(float)dVar14
                             );
  dVar12 = (double)FastAddRots((float)dVar22);
  dVar22 = (double)(float)(dVar24 - dVar12);
  if (dVar12 - (double)(float)(dVar24 - dVar12) < 0.0) {
    dVar22 = dVar12;
  }
  dVar10 = (double)(float)(dVar18 - dVar12);
  if ((double)(float)(dVar18 - dVar12) - dVar22 < 0.0) {
    dVar10 = dVar22;
  }
  dVar22 = (double)(float)(dVar10 * dVar10);
  dVar15 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar10));
  dVar11 = (double)(float)(dVar22 * dVar15);
  FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar22 * dVar11) * dVar23 +
                                             (double)(float)(dVar11 * dVar21 +
                                                            (double)(float)(dVar15 * dVar20 +
                                                                           (double)(float)((double)(
                                                  float)(dVar22 * dVar10) * dVar19 + dVar10)))) *
                                     DAT_0071cd74) * dVar26));
  dVar25 = (double)(float)(dVar12 + dVar25);
  dVar22 = (double)(float)(dVar24 - dVar25);
  if (dVar25 - (double)(float)(dVar24 - dVar25) < 0.0) {
    dVar22 = dVar25;
  }
  dVar24 = (double)(float)(dVar18 - dVar25);
  if ((double)(float)(dVar18 - dVar25) - dVar22 < 0.0) {
    dVar24 = dVar22;
  }
  dVar22 = (double)(float)(dVar24 * dVar24);
  dVar25 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar24));
  dVar18 = (double)(float)(dVar22 * dVar25);
  FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar22 * dVar18) * dVar23 +
                                             (double)(float)(dVar18 * dVar21 +
                                                            (double)(float)(dVar25 * dVar20 +
                                                                           (double)(float)((double)(
                                                  float)(dVar22 * dVar24) * dVar19 + dVar24)))) *
                                     DAT_0071cd70) * dVar26));
  uVar3 = GetEffectTex(DAT_0071cd6c);
  DrawTexturedQuadHud(local_150,local_130,local_120,uVar3,1);
  return;
}


// 0x0017ac0 (0x80 bytes)
/* [boot] Draw callback (PTR at 0x703810): red screen tint fading with pVars->deathTimer. */

void Moby1267_DrawDeathFade(MobyInstance *moby)

{
  int iVar1;
  short sVar2;
  
  sVar2 = *(short *)((int)moby->pVar + 0xac);
  iVar1 = (int)(animationSpeed * 80.5);
  if (sVar2 < iVar1) {
    DrawScreenOverlay(0xaa,0,0,((iVar1 - sVar2) * 0x50) / iVar1);
  }
  return;
}


