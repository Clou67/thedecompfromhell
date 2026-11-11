// game/update/moby351.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x242c28-0x2437c0
// shared update function UpdateMoby_{351_1301}; registered for oClasses 351, 1301
#include "game/update/moby351.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/camera0.h"
#include "idol/fastfunc.h"

// shared update function, registered for oClasses 351, 1301
// 0x0242c28 (0xb98 bytes)
// strings: 00242be0: '?333Ap' (raw)

/* Moby 351
   Moby 1301 */

void UpdateMoby_351(MobyInstance *moby)

{
  float fVar1;
  int *piVar2;
  undefined2 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  uint uVar10;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  undefined8 in_LR;
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
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined8 uVar30;
  double dVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  float local_170;
  float local_16c;
  float local_168;
  GPiece<16> local_160;
  GPiece<32> auStack_150;
  GPiece<16> local_130;
  GPiece<16> auStack_120;
  GPiece<40> local_110;
  
  piVar2 = (int *)moby->pVar;
  if (moby->state == '\0') {
    auVar36 = ZEXT416(0xffffffff);
    auVar34 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
    auVar36 = ZEXT416(0xffffffff);
    auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
    auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
    auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
    auVar36 = loadVectorLeftIndexed(0xffffffffffffe174,0x790000);
    DAT_00f155a4 = 0;
    auVar34 = vectorConvertFromSignedFixedPointWord(auVar36,0);
    auVar36 = loadVectorLeftIndexed(in_LR,0x242ba8);
    auVar33 = loadVectorLeftIndexed(0xffffffffffffe170,0x790000);
    auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar32 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
    auVar33 = vectorConvertFromSignedFixedPointWord(auVar33,0);
    auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar36 = vectorAddFloatingPoint(auVar34,auVar32);
    auVar34 = vectorAddFloatingPoint(auVar33,auVar32);
    auVar36 = vectorMultiplyAddFloatingPoint(auVar38,auVar36,auVar35);
    auVar34 = vectorMultiplyAddFloatingPoint(auVar38,auVar34,auVar37);
    auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
    auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
    auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
    DAT_0078e174 = storeVectorElementWordIndexed
                             (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                              0xffffffffffffe174,0x790000);
    auVar36 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
    DAT_0078e170 = storeVectorElementWordIndexed
                             (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                              0xffffffffffffe170,0x790000);
    moby->state = '\x01';
  }
  if (((g_heroType == '\x01') && (*piVar2 != -1)) &&
     (fVar1 = (moby->pos).y - g_heroPosition.y, fVar4 = (moby->pos).x - g_heroPosition.x,
     dVar21 = 0.5, SQRT(fVar4 * fVar4 + fVar1 * fVar1) < 0.5)) {
    iVar14 = 0;
    dVar22 = 0.10000000149011612;
    dVar23 = 1.0;
    dVar24 = 0.0;
    dVar26 = 2.5;
    dVar27 = 5.0;
    dVar28 = 0.07000000029802322;
    dVar29 = 0.699999988079071;
    dVar31 = 15.0;
    do {
      dVar15 = (double)MB_randRangeFloat((float)dVar22,(float)dVar23);
      uVar10 = MB_randRange(0x40,0xff);
      uVar8 = MB_randRange(0x40,0xff);
      uVar9 = MB_randRange(0x40,0xff);
      MB_randRot();
      MB_randRangeFloat((float)dVar24,(float)dVar21);
      MB_randRot();
      MB_randRangeFloat((float)dVar24,(float)dVar21);
      MB_randRangeFloat((float)dVar24,(float)dVar21);
      FastVecAddSelf(auStack_150,local_160,&g_heroPosition);
      dVar16 = (double)MB_randRangeFloat((float)dVar24,g_FrameTime);
      dVar20 = (double)SQRT(local_168 * local_168 + local_170 * local_170 + local_16c * local_16c);
      dVar19 = (double)(local_170 * (float)(dVar16 / dVar20));
      dVar17 = (double)(local_16c * (float)(dVar16 / dVar20));
      dVar16 = dVar24;
      if (dVar24 - dVar20 < 0.0) {
        dVar16 = dVar19;
      }
      dVar18 = dVar24;
      if (dVar24 - dVar20 < 0.0) {
        dVar18 = dVar17;
      }
      if (dVar20 - dVar24 < 0.0) {
        dVar16 = dVar19;
      }
      if (dVar20 - dVar24 < 0.0) {
        dVar18 = dVar17;
      }
      local_170 = (float)dVar16;
      local_16c = (float)dVar18;
      dVar16 = (double)MB_randRangeFloat
                                 ((float)((double)g_FrameTime * dVar26),
                                  (float)((double)g_FrameTime * dVar27));
      local_168 = (float)dVar16;
      iVar11 = MB_randRange(0xf,0x1e);
      dVar16 = (double)(float)(dVar15 * dVar28);
      dVar15 = (double)(float)(dVar15 * dVar29);
      fVar1 = animationSpeed * (float)((double)(longlong)iVar11 + dVar21);
      iVar11 = MB_randInt(2);
      uVar13 = ZERO_MASK(iVar11);
      uVar12 = uVar13 & 0xfffffffffffffffe;
      SpawnPart_53
                (dVar16,dVar15,(double)(float)((double)DAT_0071f418 * dVar31),local_160,(int)fVar1,
                 uVar12,uVar13,
                 (uint)((uVar8 & 0xffffffff) << 8) | uVar10 | (uint)((uVar9 & 0xffffffff) << 0x10) |
                 0x7f000000,0,uVar12 + 1,&local_170);
      iVar14 = iVar14 + 1;
    } while (iVar14 < 10);
    PlayMobySound(0,0,moby);
    Hero_Warp(&g_MobyInstance[*piVar2].pos.x,&g_MobyInstance[*piVar2].rotation.x,0x43,0);
    pvVar7 = GameCamera.pCurrentUpdCam;
    DAT_00f155a4 = DAT_0078e170;
    if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar34 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar32 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar36 = loadVectorLeftIndexed(0x40,0x242ba8);
      auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar32,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                           auVar34);
      auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36 = vectorSplatHalfWord(auVar36,1);
      uVar3 = storeVectorElementHalfWordIndexed
                        (auVar36,0x20,(ulonglong)*(uint *)((int)GameCamera.pCurrentUpdCam + 0x70));
      *(undefined2 *)(*(uint *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x20) = uVar3;
                    /* WARNING: Load size is inaccurate */
      *(undefined4 *)((int)pvVar7 + 0x40) = *pvVar7;
      *(undefined4 *)((int)pvVar7 + 0x44) = *(undefined4 *)((int)pvVar7 + 4);
      *(undefined4 *)((int)pvVar7 + 0x48) = *(undefined4 *)((int)pvVar7 + 8);
      *(undefined4 *)((int)pvVar7 + 0x4c) = *(undefined4 *)((int)pvVar7 + 0xc);
    }
    iVar14 = 0;
    fVar1 = -1.0;
    do {
      dVar16 = (double)fVar1;
      MB_randRangeFloat(fVar1,(float)dVar23);
      fVar1 = (float)dVar16;
      MB_randRangeFloat((float)dVar16,(float)dVar23);
      dVar16 = (double)MB_randRangeFloat((float)dVar22,(float)dVar23);
      MB_randRange(0x40,0xff);
      MB_randRange(0x40,0xff);
      MB_randRange(0x40,0xff);
      MB_randRot();
      MB_randRangeFloat((float)dVar24,(float)dVar21);
      MB_randRot();
      MB_randRangeFloat((float)dVar24,(float)dVar21);
      MB_randRangeFloat((float)dVar24,(float)dVar21);
      FastVecAddSelf(auStack_120,local_130,&g_MobyInstance[*piVar2].pos);
      MB_randRangeFloat((float)dVar24,g_FrameTime);
      MB_randRangeFloat
                ((float)((double)g_FrameTime * dVar26),
                 (float)((double)g_FrameTime * dVar27));
      iVar11 = MB_randRange(0xf,0x1e);
      dVar15 = (double)(float)(dVar16 * dVar28);
      dVar16 = (double)(float)(dVar16 * dVar29);
      fVar4 = animationSpeed * (float)((double)(longlong)iVar11 + dVar21);
      MB_randInt(2);
      SpawnPart_53
                (dVar15,dVar16,(double)(float)((double)DAT_0071f418 * dVar31),local_130,(int)fVar4);
      iVar14 = iVar14 + 1;
    } while (iVar14 < 10);
  }
  if ((worldUpdateTime ==
       (worldUpdateTime / (int)(animationSpeed * 60.5)) * (int)(animationSpeed * 60.5)) &&
     (*piVar2 != -1)) {
    uVar25 = 0x4030000000000000;
    uVar30 = 0;
    dVar21 = 315000.0;
    dVar22 = -1.5;
    for (iVar14 = 0; iVar11 = FastDoubleToInt(uVar25), iVar14 < iVar11;
        iVar14 = iVar14 + 1) {
      FastIntToDouble(iVar14);
      iVar11 = SpawnPart_45
                         (uVar30,(double)(float)((double)g_FrameTime * dVar21),local_110,
                          &DAT_00720000,0,0x1eff7f40);
      if (iVar11 != 0) {
        *(undefined4 *)(iVar11 + 0x20) = 0;
        *(undefined4 *)(iVar11 + 0x24) = 0;
        *(float *)(iVar11 + 0x28) = (float)((double)g_FrameTime * dVar22);
      }
    }
  }
  fVar1 = (float)(longlong)(worldUpdateTime % 0x96) * 0.006666667 * 2.0 * 3.1415927;
  if (3.1415927 - fVar1 < 0.0) {
    fVar1 = fVar1 - 6.2831855;
  }
  fVar4 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar4 = fVar1;
  }
  fVar5 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
    fVar5 = fVar4;
  }
  fVar1 = fVar5 * fVar5;
  fVar4 = fVar1 * fVar1 * fVar5;
  fVar6 = fVar1 * fVar4;
  uVar10 = FastLerpColor
                     ((double)((fVar1 * fVar6 * 2.601887e-06 +
                                fVar6 * -0.0001980741 +
                                fVar4 * 0.0083330255 + fVar1 * fVar5 * -0.16666657 + fVar5 + 1.0) *
                              0.5),0xffffffff80464646,0xffffffff80828282);
  moby->field60_0x90 = uVar10;
  FastDecTimerS32(&DAT_00f155a4);
  if (DAT_00f155a4 != 0) {
    dVar21 = 0.0020000000949949026;
    if (DAT_00f155a4 <= DAT_0078e174) {
      dVar22 = (double)FastIntToDouble(DAT_00f155a4);
      dVar23 = (double)FastIntToDouble(DAT_0078e174);
      dVar21 = (double)(float)((double)(float)(dVar22 / dVar23) * 0.007999999448657036 + dVar21);
    }
    Cam0_SetCPosGainDamp(dVar21,0x3fc99999a0000000);
    Cam0_DisableUserCam();
    Cam0_disableLOS();
    Cam0_SetCamPull(0);
  }
  return;
}


