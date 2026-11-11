// game/update/moby1523.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0xec2d8-0xed3ac
#include "game/update/moby1523.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/lights.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update.h"
#include "idol/fastfunc.h"
#include "sdk/lUnk.h"

// 0x00ec2d8 (0x13c bytes)
MobyInstance * Spawn_Moby1523_Blueball2(undefined8 param_1,Vec4 *param_2)

{
  void *pvVar1;
  MobyInstance *pMVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  
  pMVar2 = CreateMoby(0x5f3);
  if ((pMVar2 != (MobyInstance *)0x0) && (DAT_00728f74 == (MobyInstance *)0x0)) {
    pMVar2->updateDistance = -1;
    pMVar2->drawDistance = 0xff;
    pMVar2->enabled = '\x01';
    pMVar2->state = '\0';
    pvVar1 = pMVar2->pVar;
    (pMVar2->pos).x = param_2->x;
    (pMVar2->pos).y = param_2->y;
    (pMVar2->pos).z = param_2->z;
    (pMVar2->pos).w = param_2->w;
    DAT_0095cf24 = 0xff;
    DAT_0095cf28 = 0;
    DAT_0095cf20 = 0;
    DAT_0095cf34 = 0xffffff;
    uVar4 = 0;
    DAT_00728f74 = pMVar2;
    DAT_0095cf38 = idol_draw::PackCmd(2,0,0,1,0x1f);
    g_ScreenInsertEffect = 0;
    *(undefined4 *)((int)pvVar1 + 0x10) = 0;
    uVar3 = CreatePointLight3(0,0,param_2,ZEXT48(&DAT_000ec2d0),uVar4,0);
    *(undefined2 *)((int)pvVar1 + 0x2c) = uVar3;
  }
  return pMVar2;
}


// 0x00ec418 (0x1a0 bytes)
void Spawn_Moby1523_GC_Blueball
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  MobyInstance *pMVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  
  _fStack00000040 = param_3;
  _fStack00000048 = param_4;
  if (DAT_00728f74 == (MobyInstance *)0x0) {
    pMVar2 = CreateMoby(0x5f3);
    if ((pMVar2 != (MobyInstance *)0x0) && (DAT_00728f74 == (MobyInstance *)0x0)) {
      pMVar2->updateDistance = -1;
      pMVar2->drawDistance = 0xff;
      pMVar2->enabled = '\x01';
      pMVar2->state = '\0';
      pvVar1 = pMVar2->pVar;
      (pMVar2->pos).x = fStack00000040;
      (pMVar2->pos).y = fStack00000044;
      DAT_00728f74 = pMVar2;
      (pMVar2->pos).z = fStack00000048;
      DAT_0095cf24 = 0xff;
      (pMVar2->pos).w = fStack0000004c;
      DAT_0095cf28 = 0;
      DAT_0095cf20 = 0;
      DAT_0095cf34 = 0xffffff;
      uVar4 = 0;
      DAT_0095cf38 = idol_draw::PackCmd(2,0,0,1,0x1f);
      g_ScreenInsertEffect = 0;
      *(undefined4 *)((int)pvVar1 + 0x10) = 0;
      uVar3 = CreatePointLight3(0,0,(Vec4 *)&stack0x00000040,ZEXT48(&DAT_000ec414),uVar4,0);
      *(undefined2 *)((int)pvVar1 + 0x2c) = uVar3;
    }
  }
  pMVar2 = DAT_00728f74;
  if ((DAT_00728f74 != (MobyInstance *)0x0) &&
     (pvVar1 = DAT_00728f74->pVar, DAT_00728f74->oClass == 0x5f3)) {
    (DAT_00728f74->pos).x = fStack00000040;
    (pMVar2->pos).y = fStack00000044;
    *(undefined2 *)((int)pvVar1 + 0x2e) = 1;
    (pMVar2->pos).z = fStack00000048;
    (pMVar2->pos).w = fStack0000004c;
  }
  return;
}


// 0x00ec5b8 (0xa4 bytes)
void M1523_Blueball_HandleDeletion(void)

{
  short sVar1;
  
  if (DAT_00728f74 != (MobyInstance *)0x0) {
    if (DAT_00728f74->oClass == 0x5f3) {
      if (DAT_00728f74->state == '\0') {
        DAT_0095cf20 = 0;
        g_ScreenInsertEffect = 0;
        sVar1 = *(short *)((int)DAT_00728f74->pVar + 0x2c);
        if (sVar1 != -1) {
          DeletePointLight(sVar1);
        }
        DeleteMoby(DAT_00728f74);
        DAT_00728f74 = (MobyInstance *)0x0;
      }
    }
    else {
      DAT_00728f74 = (MobyInstance *)0x0;
    }
  }
  return;
}


// 0x00ec6f0 (0xcbc bytes)
/* Moby 1523 */

void UpdateMoby_1523_GC_Blueball(MobyInstance *moby)

{
  short sVar1;
  float *pfVar2;
  float fVar3;
  f32 fVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar15;
  longlong lVar12;
  longlong lVar13;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined2 uVar19;
  int iVar16;
  undefined8 uVar14;
  uint uVar17;
  int iVar18;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined8 uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> local_110;
  GPiece<16> auStack_100;
  Vec4 VStack_f0;
  Vec4 VStack_e0;
  GPiece<16> auStack_d0;
  GPiece<48> auStack_c0;
  
  lVar11 = (longlong)(int)moby;
  pfVar2 = (float *)moby->pVar;
  if (moby->state == 0) {
    if ((*(short *)((int)pfVar2 + 0x2e) == 0) || (g_heroType != '\x02')) {
      DAT_0095cf20 = 0;
      pfVar2[4] = 0.0;
      g_ScreenInsertEffect = 0;
      fVar3 = g_heroRotation.z + 1.5707963;
      fVar6 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar6 = fVar3;
      }
      fVar7 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar6 < 0.0) {
        fVar7 = fVar6;
      }
      fVar9 = g_FrameTime * 40.0;
      fVar3 = fVar7 * fVar7;
      fVar6 = fVar3 * fVar3 * fVar7;
      fVar8 = fVar3 * fVar6;
      *pfVar2 = fVar9 * (fVar3 * fVar8 * 2.601887e-06 +
                        fVar8 * -0.0001980741 +
                        fVar6 * 0.0083330255 + fVar3 * fVar7 * -0.16666657 + fVar7);
      fVar7 = g_heroRotation.z;
      fVar3 = 3.1415925 - g_heroRotation.z;
      fVar6 = -3.1415925 - g_heroRotation.z;
      pfVar2[2] = 0.0;
      if (fVar7 - fVar3 < 0.0) {
        fVar3 = fVar7;
      }
      if (fVar6 - fVar3 < 0.0) {
        fVar6 = fVar3;
      }
      fVar3 = fVar6 * fVar6;
      fVar7 = fVar3 * fVar3 * fVar6;
      fVar8 = fVar3 * fVar7;
      pfVar2[1] = fVar9 * (fVar3 * fVar8 * 2.601887e-06 +
                          fVar8 * -0.0001980741 +
                          fVar7 * 0.0083330255 + fVar3 * fVar6 * -0.16666657 + fVar6);
      moby->state = '\x01';
      pfVar2[5] = 0.0;
    }
    else {
      fVar3 = pfVar2[4];
      if (fVar3 == 0.0) {
        g_ScreenInsertEffect = 1;
        DAT_0095cf34 = 0xffff00;
        fVar3 = pfVar2[4];
      }
      pfVar2[4] = (float)((int)fVar3 + 1);
      dVar26 = (double)FastIntToDouble((int)fVar3 + 1);
      dVar37 = 30.0;
      iVar16 = 0;
      dVar36 = 1.0;
      lVar24 = 0;
      dVar35 = 0.0;
      dVar34 = -1.0;
      dVar33 = 20.0;
      dVar32 = 40.0;
      dVar26 = (double)(float)(dVar26 / (double)(animationSpeed * 30.0));
      if (1.0 - dVar26 < 0.0) {
        dVar26 = dVar36;
      }
      dVar26 = (double)((float)(dVar26 * dVar26) * 10.0);
      for (; iVar15 = FastDoubleToInt(dVar26), iVar16 < iVar15; iVar16 = iVar16 + 1) {
        dVar27 = (double)MB_randRangeFloat((float)dVar34,(float)dVar36);
        fVar6 = (float)dVar27;
        dVar27 = (double)MB_randRangeFloat((float)dVar34,(float)dVar36);
        fVar7 = (float)dVar27;
        dVar27 = (double)MB_randRangeFloat((float)dVar34,(float)dVar36);
        fVar8 = (float)dVar27;
        lVar12 = MB_randRange(0x4f,0xaf);
        lVar13 = MB_randRange(0x4f,0xff);
        dVar27 = (double)MB_randRangeFloat((float)dVar33,(float)dVar32);
        dVar31 = (double)SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7);
        fVar3 = (float)(dVar27 / dVar31);
        dVar27 = dVar35;
        if (dVar35 - dVar31 < 0.0) {
          dVar27 = (double)(fVar6 * fVar3);
        }
        dVar30 = dVar35;
        if (dVar35 - dVar31 < 0.0) {
          dVar30 = (double)(fVar7 * fVar3);
        }
        dVar28 = dVar35;
        if (dVar35 - dVar31 < 0.0) {
          dVar28 = (double)(fVar8 * fVar3);
        }
        if (dVar31 - dVar35 < 0.0) {
          dVar27 = (double)(fVar6 * fVar3);
        }
        if (dVar31 - dVar35 < 0.0) {
          dVar30 = (double)(fVar7 * fVar3);
        }
        if (dVar31 - dVar35 < 0.0) {
          dVar28 = (double)(fVar8 * fVar3);
        }
        FastVecAddSelf(auStack_100,local_110,lVar11 + 0x10);
        lVar13 = (lVar13 + (0xff - lVar13 >> 0x3f & 0xffU - lVar13) & 0xffff) << 0x10;
        SpawnPart_31
                  ((uint)((lVar12 + (0xff - lVar12 >> 0x3f & 0xffU - lVar12) & 0xffffffff) << 8) |
                   0x4f | (uint)lVar13 | 0x7f000000,lVar13,CONCAT44((float)dVar27,(float)dVar30),
                   (ulonglong)(uint)(float)dVar28 << 0x20,lVar11);
      }
      if ((int)pfVar2[4] < 0x32) {
        uVar25 = (ulonglong)(DAT_0095cf34 >> 0x18);
        if (DAT_0095cf38 == 0 && DAT_0095cf34 >> 0x18 == 0xff) {
          uVar25 = 0x25;
        }
        DAT_0095cf38 = idol_draw::PackCmd(2,0,0,1,0x1f);
        uVar23 = (longlong)(uVar25 - (longlong)(0x25 - (int)(animationSpeed * 1.5))) >> 0x3f &
                 (uVar25 + (uint)(int)(animationSpeed * 1.5)) - 0x25;
        uVar25 = uVar23 + 0x25;
        DAT_0095cf34 = (uint)((uVar25 & 0xffffffff) << 0x18) | DAT_0095cf34 & 0xffff00;
      }
      else {
        uVar23 = (ulonglong)DAT_0095cf34;
        uVar25 = uVar23 | 0xffffffffff000000;
        DAT_0095cf34 = (uint)uVar25;
      }
      if (*(short *)(pfVar2 + 0xb) == -1) {
        if ((worldUpdateTime & 3) == 0) {
          uVar19 = CreatePointLight3(dVar35,dVar35,(Vec4 *)(lVar11 + 0x10),uVar25,uVar23,0);
          *(undefined2 *)(pfVar2 + 0xb) = uVar19;
        }
      }
      else {
        sVar1 = *(short *)(pfVar2 + 0xb);
        *(f32 *)((int)&PointLights[0].pos.x + (int)((longlong)*(short *)(pfVar2 + 0xb) << 5)) =
             (moby->pos).x;
        fVar3 = pfVar2[4];
        *(f32 *)((int)&PointLights[0].pos.y + (int)((longlong)sVar1 << 5)) = (moby->pos).y;
        *(f32 *)((int)&PointLights[0].pos.z + (int)((longlong)sVar1 << 5)) = (moby->pos).z;
        if ((0x31 < (int)fVar3) || (0 < (int)fVar3)) {
          lVar24 = ((longlong)(int)fVar3 + -0x32 >> 0x3f & (longlong)(int)fVar3 - 0x32U) + 0x32;
        }
        dVar26 = (double)FastIntToDouble(lVar24);
        fVar3 = pfVar2[4];
        *(float *)((int)&PointLights[0].pos.w + (int)((longlong)*(short *)(pfVar2 + 0xb) << 5)) =
             (float)(dVar26 * 7.0) * 0.02;
        dVar26 = (double)FastIntToDouble(fVar3);
        sVar1 = *(short *)(pfVar2 + 0xb);
        dVar26 = (double)(float)(dVar26 / (double)(float)((double)animationSpeed * dVar37));
        if (dVar36 - dVar26 < 0.0) {
          dVar26 = dVar36;
        }
        uVar20 = MB_randRange(0xf,0x2f);
        uVar21 = MB_randRange(0x2f,0x3f);
        uVar22 = MB_randRange(0x3f,0x7f);
        SpawnPart_5
                  ((double)((float)(dVar26 * 4.0) * 210000.0),dVar35,sVar1 * 0x20 + 0xa1df10,uVar20,
                   uVar21,uVar22);
        dVar32 = 0.800000011920929;
        iVar16 = (int)((longlong)*(short *)(pfVar2 + 0xb) << 5);
        dVar26 = (double)MB_randRangeFloat
                                   (*(float *)((int)&PointLights[0].color.x + iVar16) * 0.8,
                                    *(float *)((int)&PointLights[0].pos.w + iVar16) * 2.0 *
                                    0.14285715);
        iVar16 = (int)((longlong)*(short *)(pfVar2 + 0xb) << 5);
        *(float *)((int)&PointLights[0].color.x + (int)((longlong)*(short *)(pfVar2 + 0xb) << 5)) =
             (float)dVar26;
        fVar3 = (float)((double)*(float *)((int)&PointLights[0].color.y + iVar16) * dVar32);
        if (*(float *)((int)&PointLights[0].color.x + iVar16) < fVar3) {
          fVar3 = *(float *)((int)&PointLights[0].color.x + iVar16);
        }
        dVar26 = (double)MB_randRangeFloat
                                   (fVar3,*(float *)((int)&PointLights[0].color.x + iVar16));
        *(float *)((int)&PointLights[0].color.y + (int)((longlong)*(short *)(pfVar2 + 0xb) << 5)) =
             (float)dVar26;
      }
    }
  }
  else if (moby->state < 2) {
    dVar26 = (double)FastIntToDouble(pfVar2[5]);
    dVar32 = 0.5;
    fVar3 = g_FrameTime * 40.0;
    pfVar2[5] = (float)((int)pfVar2[5] + 1);
    dVar26 = (double)((float)((double)fVar3 * dVar26) * 0.5 + 3.0);
    if ((*(short *)(pfVar2 + 0xb) != -1) &&
       (iVar16 = (int)((longlong)*(short *)(pfVar2 + 0xb) << 5), sVar1 = *(short *)(pfVar2 + 0xb),
       *(float *)((int)&PointLights[0].pos.w + iVar16) =
            *(float *)((int)&PointLights[0].pos.w + iVar16) * (DAT_0071f408 * -0.6 + 1.0),
       uVar17 = *(uint *)((int)&PointLights[0].pos.w + (int)((longlong)sVar1 << 5)),
       uVar5 = (int)uVar17 >> 0x1f, (int)((uVar5 >> 1 ^ uVar17) - uVar5) < 0x38d1b717)) {
      DeletePointLight();
      *(undefined2 *)(pfVar2 + 0xb) = 0xffff;
    }
    if (((int)(animationSpeed * 60.5) < (int)pfVar2[5]) || (g_heroType != '\x02')) {
      DeleteMoby(DAT_00728f74);
      DAT_00728f74 = (MobyInstance *)0x0;
      return;
    }
    lVar24 = lVar11 + 0x10;
    FastVecAddSelf(auStack_d0,lVar24,pfVar2);
    fVar4 = (moby->pos).x;
    dVar33 = 2.0;
    uVar17 = (int)fVar4 >> 0x1f;
    iVar16 = (uVar17 >> 1 ^ (uint)fVar4) - uVar17;
    if ((((iVar16 < 0x40000000) || (0x447f4000 < iVar16)) ||
        (fVar4 = (moby->pos).y, uVar17 = (int)fVar4 >> 0x1f,
        iVar16 = (uVar17 >> 1 ^ (uint)fVar4) - uVar17, 0x447f4000 < iVar16 || iVar16 < 0x40000000))
       || ((fVar4 = (moby->pos).z, uVar17 = (int)fVar4 >> 0x1f,
           iVar16 = (uVar17 >> 1 ^ (uint)fVar4) - uVar17, iVar16 < 0x40000000 ||
           (0x447f4000 < iVar16)))) {
      DeleteMoby(DAT_00728f74);
      DAT_00728f74 = (MobyInstance *)0x0;
      return;
    }
    uVar14 = CollMobySphere(dVar26,lVar24,0x40000000,0x10,lVar11,0);
    dVar27 = 1.0;
    uVar29.piece<0,4>() = (moby->pos).x;
    uVar29.piece<4,4>() = (moby->pos).y;
    uVar10.piece<0,4>() = (moby->pos).z;
    uVar10.piece<4,4>() = (moby->pos).w;
    MB_DamageMobyList
              (0x4034000000000000,0x3ff0000000000000,0x3ff0000000000000,lVar11,2,uVar29,uVar10,
               &DAT_00a14a00,uVar14,0,0x8b0000);
    dVar37 = (double)(float)(dVar26 * dVar32);
    uVar29 = 0x4109a28000000000;
    dVar32 = (double)(float)(dVar37 * 210000.0);
    MB_randRange(0x4109a28000000000,0xf,0x2f);
    MB_randRange(0x2f,0x3f);
    MB_randRange(0x3f,0x7f);
    SpawnPart_26(dVar32,lVar11);
    dVar36 = (double)(float)(dVar26 * dVar33);
    MB_randVector
              ((double)(float)((double)g_FrameTime * dVar26),
               (double)(float)(dVar36 * (double)g_FrameTime),&VStack_f0);
    uVar17 = MB_randRange(0xf,0x2f);
    uVar25 = MB_randRange(0x2f,0x3f);
    uVar23 = MB_randRange(0x3f,0x7f);
    SpawnPart_15
              (uVar29,lVar24,&VStack_f0,
               (uint)((uVar25 & 0xffffffff) << 8) | uVar17 | (uint)((uVar23 & 0xffffffff) << 0x10) |
               0x7f000000,0x4f7f4f2f,DAT_00a52830,(int)(animationSpeed * 45.5),1,*DAT_00a52830);
    iVar15 = 0;
    dVar35 = 0.0;
    dVar34 = 6000.0;
    dVar32 = (double)(float)(dVar26 * 0.4000000059604645);
    iVar16 = 0;
    dVar33 = 32000.0;
    do {
      MB_randVector
                ((double)(float)((double)g_FrameTime * dVar26),
                 (double)(float)((double)g_FrameTime * dVar36),&VStack_f0);
      MB_randVector(dVar35,dVar37,&VStack_e0);
      FastVecAddSelf(auStack_c0,&VStack_e0,lVar24);
      iVar18 = SpawnPart_69(&VStack_e0,&VStack_f0,0x7f,lVar11);
      if (iVar18 != 0) {
        dVar31 = (double)MB_randRangeFloat((float)dVar34,(float)dVar33);
        *(float *)(iVar18 + 0xc) = (float)(dVar31 * dVar32);
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < 8);
    dVar34 = 80000.0;
    dVar33 = 120000.0;
    dVar32 = 2.5;
    auVar40 = loadVectorLeftIndexed(0x88,0xec65c);
    auVar40 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar40 = auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60;
    do {
      uVar29 = SpawnPart_69(lVar24,&DAT_00a15d30,0x7f,lVar11);
      iVar15 = (int)uVar29;
      if (iVar15 != 0) {
        if ((iVar16 == 2) && (iVar18 = MB_randInt(8), iVar18 == 0)) {
          dVar35 = 180000.0;
        }
        else {
          dVar35 = (double)MB_randRangeFloat((float)dVar34,(float)dVar33);
        }
        auVar38 = ZEXT416(0xffffffff);
        auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
        auVar38 = vectorShiftLeftIntegerWord(auVar38,auVar38);
        *(float *)(iVar15 + 0xc) = (float)(dVar35 * dVar26);
        auVar39 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        dVar35 = (double)animationSpeed;
        auVar38 = vectorMultiplyAddFloatingPoint(auVar39,auVar40,auVar38);
        auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
        auVar38 = vectorSplatHalfWord(auVar38,1);
        uVar19 = storeVectorElementHalfWordIndexed(auVar38,10,uVar29);
        *(undefined2 *)(iVar15 + 10) = uVar19;
        dVar35 = (double)FastIntToDouble((short)(int)(dVar35 * dVar32));
        *(undefined2 *)(iVar15 + 0x36) = 3;
        *(undefined **)(iVar15 + 0x38) = &DAT_007f7f7f;
        *(float *)(iVar15 + 0x30) = (float)(dVar27 / dVar35);
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < 0xc);
  }
  *(undefined2 *)((int)pfVar2 + 0x2e) = 0;
  return;
}


