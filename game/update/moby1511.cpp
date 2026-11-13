// game/update/moby1511.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x28e510-0x28f3e4
#include "game/update/moby1511.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update/moby1510.h"
#include "game/update/moby1516.h"
#include "game/update/moby31.h"
#include "idol/fastfunc.h"

// 0x028e510 (0x208 bytes)
MobyInstance * FUN_0028e510(double param_1,float param_2,float *param_3)

{
  float fVar1;
  f32 fVar2;
  float *pfVar3;
  undefined4 uVar4;
  MobyInstance *pMVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  
  pMVar5 = CreateMoby(PLANETBUSTER_MAXIMUS_PART_0500|BOMB_00E6);
  if (pMVar5 != (MobyInstance *)0x0) {
    pfVar3 = (float *)pMVar5->pVar;
    pfVar3[9] = param_2;
    (pMVar5->pos).x = *(f32 *)((int)param_2 + 0x10);
    (pMVar5->pos).y = *(f32 *)((int)param_2 + 0x14);
    (pMVar5->pos).z = *(f32 *)((int)param_2 + 0x18);
    (pMVar5->pos).w = *(f32 *)((int)param_2 + 0x1c);
    fVar1 = pMVar5->scale;
    (pMVar5->rotation).x = *(f32 *)((int)param_2 + 0x40);
    (pMVar5->rotation).y = *(f32 *)((int)param_2 + 0x44);
    (pMVar5->rotation).z = *(f32 *)((int)param_2 + 0x48);
    fVar2 = *(f32 *)((int)param_2 + 0x4c);
    pMVar5->updateDistance = -1;
    (pMVar5->rotation).w = fVar2;
    pMVar5->drawDistance = 0xff;
    pMVar5->enabled = '\x01';
    pMVar5->state = '\0';
    pMVar5->scale = (float)((double)fVar1 * param_1);
    dVar6 = (double)MB_randRangeFloat(0.8,1.2);
    uVar8 = 0;
    dVar7 = (double)SQRT(param_3[2] * param_3[2] + *param_3 * *param_3 + param_3[1] * param_3[1]);
    if (dVar7 == 0.0) {
      *pfVar3 = *param_3;
      pfVar3[1] = param_3[1];
      pfVar3[2] = param_3[2];
      fVar1 = param_3[3];
      pfVar3[2] = 0.0;
      pfVar3[1] = 0.0;
      *pfVar3 = 0.0;
    }
    else {
      fVar1 = (float)(dVar6 / dVar7);
      *pfVar3 = *param_3 * fVar1;
      pfVar3[1] = param_3[1] * fVar1;
      pfVar3[2] = param_3[2] * fVar1;
      fVar1 = param_3[3];
    }
    pfVar3[3] = fVar1;
    dVar6 = (double)MB_randRangeSigned(0,0x3f81df46a0000000);
    pfVar3[4] = (float)dVar6;
    dVar6 = (double)MB_randRangeSigned(0x3faaceea00000000,0x3fc1df46a0000000);
    pfVar3[5] = (float)dVar6;
    dVar6 = (double)MB_randRangeSigned(uVar8,0x3f91df46a0000000);
    auVar9 = ZEXT416(0xffffffff);
    auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    pfVar3[6] = (float)dVar6;
    auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
    auVar9 = loadVectorLeftIndexed(0x1c,0x28e4ec);
    auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar9 = vectorMultiplyAddFloatingPoint
                       (auVar11,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar10);
    auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
    auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar4 = storeVectorElementWordIndexed
                      (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x20,ZEXT48(pfVar3)
                      );
    *(undefined4 *)((uint)(pfVar3 + 8) & 0xfffffffc) = uVar4;
    UpdateMobyTransform(pMVar5);
  }
  return pMVar5;
}


// 0x028e730 (0x3d4 bytes)
// inlined: FastRSqrt @0x28e910
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void M1511_0028e730(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float *pfVar17;
  float *pfVar18;
  longlong lVar19;
  float local_130 [16];
  float local_f0 [38];
  
  GetEffectTex(0xb);
  idol_draw::PackCmd(0,2,0,1,0x80);
  SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SCE_GS_SET_CLAMP(1,1,0,0,0,0);
  fVar5 = *(float *)(param_1 + 0xc4) * DAT_007ab1e8 + *(float *)(param_1 + 0xe4) * DAT_007ab1ec +
          *(float *)(param_1 + 0x14);
  fVar6 = *(float *)(param_1 + 0xc0) * DAT_007ab1e8 + *(float *)(param_1 + 0xe0) * DAT_007ab1ec +
          *(float *)(param_1 + 0x10);
  fVar7 = *(float *)(param_1 + 200) * DAT_007ab1e8 + *(float *)(param_1 + 0xe8) * DAT_007ab1ec +
          *(float *)(param_1 + 0x18);
  fVar13 = 0.0;
  fVar11 = GameCamera.posY - fVar5;
  fVar3 = GameCamera.posX - fVar6;
  fVar12 = GameCamera.posZ - fVar7;
  fVar1 = *(float *)(param_1 + 0xcc);
  fVar2 = fVar12 * fVar12 + fVar3 * fVar3 + fVar11 * fVar11;
  fVar9 = fVar13;
  fVar8 = fVar13;
  fVar10 = fVar13;
  if (SQRT(fVar2) != 0.0) {
    fVar10 = 1.0 / SQRT(fVar2);
    fVar10 = -(fVar2 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar10 = -(fVar2 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar10 = -(fVar2 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar9 = fVar3 * fVar10;
    fVar8 = fVar11 * fVar10;
    fVar10 = fVar12 * fVar10;
  }
  fVar15 = g_heroGravityDir.z * fVar9 - g_heroGravityDir.x * fVar10;
  fVar3 = g_heroGravityDir.y * fVar10 - g_heroGravityDir.z * fVar8;
  fVar4 = g_heroGravityDir.x * fVar8 - g_heroGravityDir.y * fVar9;
  pfVar18 = local_f0;
  lVar19 = 4;
  pfVar17 = local_130;
  fVar2 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar15 * fVar15);
  fVar12 = (float)GameCamera.posW * 0.4;
  fVar16 = -1.0 / fVar2;
  fVar11 = fVar13;
  if (0.0 - fVar2 < 0.0) {
    fVar11 = fVar3 * fVar16;
  }
  fVar14 = fVar13;
  if (0.0 - fVar2 < 0.0) {
    fVar14 = fVar15 * fVar16;
  }
  if (0.0 - fVar2 < 0.0) {
    fVar13 = fVar4 * fVar16;
  }
  if (fVar2 - 0.0 < 0.0) {
    fVar11 = fVar3 * fVar16;
  }
  if (fVar2 - 0.0 < 0.0) {
    fVar14 = fVar15 * fVar16;
  }
  if (fVar2 - 0.0 < 0.0) {
    fVar13 = fVar4 * fVar16;
  }
  do {
    fVar2 = *pfVar17;
    fVar3 = pfVar17[1];
    fVar15 = fVar2 * 0.4;
    fVar4 = pfVar17[3];
    fVar16 = pfVar17[2] * 0.4;
    pfVar17 = pfVar17 + 4;
    pfVar18[3] = fVar4 * fVar1 + fVar2 * fVar12;
    *pfVar18 = fVar4 * fVar6 +
               (fVar8 * fVar13 - fVar10 * fVar14) * fVar16 + fVar15 * fVar9 + fVar3 * fVar11 * 0.4;
    pfVar18[1] = fVar4 * fVar5 +
                 (fVar10 * fVar11 - fVar9 * fVar13) * fVar16 + fVar15 * fVar8 + fVar3 * fVar14 * 0.4
    ;
    pfVar18[2] = fVar4 * fVar7 +
                 (fVar9 * fVar14 - fVar8 * fVar11) * fVar16 + fVar15 * fVar10 + fVar3 * fVar13 * 0.4
    ;
    pfVar18 = pfVar18 + 4;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  FastDrawQuad(local_f0,0,0,EffectTexHeaders,9);
  return;
}


// 0x028eb08 (0x34 bytes)
void M1511_0028eb08(void)

{
  DAT_007ab23c = 0x10000;
  DAT_00fada68 = g_FrameTime * 20.0;
  return;
}


// 0x028eba8 (0x83c bytes)
/* Moby 1511 */

void UpdateMoby_1511(MobyInstance *moby)

{
  f32 fVar1;
  void *pvVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  uint uVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 uVar15;
  longlong lVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  double dVar27;
  undefined8 uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  double dVar36;
  double dVar37;
  GPiece<32> local_140;
  float local_120 [4];
  float local_110;
  float local_10c;
  float local_108;
  f32 local_104;
  longlong local_100;
  float local_f0;
  float local_ec;
  float local_e8;
  
  lVar9 = (longlong)(int)moby;
  pvVar2 = moby->pVar;
  if (moby->state == '\0') {
    moby->state = '\x01';
    moby->glowRgba =
         CONCAT12(*(undefined1 *)((int)pvVar2 + 0x66),
                  CONCAT11(*(undefined1 *)((int)pvVar2 + 0x65),*(undefined1 *)((int)pvVar2 + 100)))
         | 0x7f000000;
    *(uint *)((int)pvVar2 + 0x68) =
         (uint)*(byte *)((int)pvVar2 + 0x6e) << 0x10 | (uint)*(byte *)((int)pvVar2 + 0x6d) << 8 |
         (uint)*(byte *)((int)pvVar2 + 0x6c);
  }
  fVar4 = GameCamera.posY - (moby->pos).y;
  fVar5 = GameCamera.posX - (moby->pos).x;
  fVar4 = SQRT(fVar5 * fVar5 + fVar4 * fVar4);
  if (fVar4 < 48.0) {
    if (fVar4 < 32.0) {
      uVar10 = (uint)*(byte *)((int)pvVar2 + 0x6f);
    }
    else {
      dVar36 = (double)(fVar4 - 32.0);
      dVar18 = 0.0625;
      dVar19 = (double)FastIntToDouble
                                 (0x3fb0000000000000,*(undefined1 *)((int)pvVar2 + 0x6f));
      uVar10 = FastDoubleToInt
                         ((double)(float)(dVar19 * -(double)(float)(dVar36 * dVar18 - 1.0)));
    }
    *(uint *)((int)pvVar2 + 0x60) = uVar10;
    RegisterMobyDraw(&PTR_M1512_0028f3f0_0070a8a0,moby);
    pfVar11 = (float *)MB_damage(lVar9,&DAT_00810000,0);
    moby->damage = -1;
    if (pfVar11 != (float *)0x0) {
      fVar4 = (moby->transform).v2.z * DAT_007ab2a0 + (moby->pos).z;
      fVar1 = (moby->pos).w;
      fVar5 = (moby->pos).x + (moby->transform).v2.x * DAT_007ab2a0;
      fVar6 = (moby->pos).y + (moby->transform).v2.y * DAT_007ab2a0;
      if (((((uint)pfVar11[9] & 0x800000) != 0) ||
          (SQRT((fVar4 - pfVar11[2]) * (fVar4 - pfVar11[2]) +
                (fVar5 - *pfVar11) * (fVar5 - *pfVar11) +
                (fVar6 - pfVar11[1]) * (fVar6 - pfVar11[1])) <= 0.8)) ||
         ((fVar3 = pfVar11[8], *(short *)((int)fVar3 + 0xa6) == 0x47 &&
          (fVar8 = fVar6 - *(float *)((int)fVar3 + 0x14),
          fVar7 = fVar5 - *(float *)((int)fVar3 + 0x10),
          fVar3 = fVar4 - *(float *)((int)fVar3 + 0x18),
          SQRT(fVar3 * fVar3 + fVar7 * fVar7 + fVar8 * fVar8) <= 0.8)))) {
        PlayMobySound(0,0,moby);
        FUN_0029125c(lVar9);
        lVar16 = lVar9 + 0x10;
        dVar18 = 90.5;
        lVar17 = lVar9 + 0x40;
        local_100 = (longlong)(int)(animationSpeed * 90.5);
        dVar19 = 12.0;
        iVar12 = MB_SpawnDebrisMoby
                           ((double)(g_FrameTimeSq * 12.0),lVar9,0x5ed,lVar16,lVar17,
                            (int)(animationSpeed * 90.5),0);
        if (iVar12 != 0) {
          *(undefined8 *)(iVar12 + 0x38) = *(undefined8 *)&moby->color;
        }
        MB_DistributeBoltsNearHero(lVar9);
        local_100 = (longlong)(int)((double)animationSpeed * dVar18);
        iVar12 = MB_SpawnDebrisMoby
                           ((double)(float)((double)g_FrameTimeSq * dVar19),lVar9,0x5ee,lVar16,lVar17
                            ,(int)((double)animationSpeed * dVar18),0);
        if (iVar12 != 0) {
          *(undefined8 *)(iVar12 + 0x38) = *(undefined8 *)&moby->color;
        }
        dVar36 = (double)FastWrapRot((moby->rotation).z,3.1415927);
        (moby->rotation).z = (float)dVar36;
        local_100 = (longlong)(int)((double)animationSpeed * dVar18);
        iVar12 = MB_SpawnDebrisMoby
                           ((double)(float)((double)g_FrameTimeSq * dVar19),lVar9,0x5ee,lVar16,lVar17
                            ,(int)((double)animationSpeed * dVar18),0);
        if (iVar12 != 0) {
          *(undefined8 *)(iVar12 + 0x38) = *(undefined8 *)&moby->color;
        }
        iVar12 = 0;
        dVar18 = 0.30000001192092896;
        dVar19 = 4.0;
        dVar36 = 0.3490658402442932;
        dVar22 = 1.535889744758606;
        dVar23 = 0.05000000074505806;
        dVar24 = 0.10000000149011612;
        uVar25 = 0;
        uVar26 = 0x3fc3333340000000;
        dVar27 = 60.5;
        uVar28 = 0x3f689374c0000000;
        dVar29 = 0.07000000029802322;
        dVar30 = 0.699999988079071;
        dVar31 = 0.009999999776482582;
        dVar32 = 60000.0;
        dVar33 = 200000.0;
        uVar34 = 0x3ff0000000000000;
        uVar35 = 0x3ff051eb80000000;
        dVar37 = 0.5;
        do {
          local_f0 = (float)dVar37;
          local_ec = (float)dVar19;
          dVar19 = (double)MB_randRangeFloat((float)dVar18,(float)dVar19);
          MB_randInt(2);
          dVar37 = (double)MB_randRot();
          local_e8 = (float)dVar22;
          dVar22 = (double)MB_randRangeFloat((float)dVar36,(float)dVar22);
          dVar20 = (double)MB_randRangeFloat((float)dVar23,(float)dVar24);
          MB_SphericalToVector
                    ((float)(dVar20 * (double)DAT_0071f408),(float)dVar37,(float)dVar22,local_120);
          local_110 = fVar5;
          local_10c = fVar6;
          local_108 = fVar4;
          local_104 = fVar1;
          dVar22 = (double)MB_randRangeSigned(uVar25,uVar26);
          local_110 = (float)((double)local_110 + dVar22);
          dVar22 = (double)MB_randRangeSigned(uVar25,uVar26);
          local_10c = (float)((double)local_10c + dVar22);
          dVar22 = (double)MB_randRangeSigned(uVar25,uVar26);
          local_108 = (float)((double)local_108 + dVar22);
          local_100 = (longlong)(int)((double)animationSpeed * dVar27);
          SpawnPart_53
                    ((double)(float)(dVar19 * dVar24),dVar19,uVar28,&local_110,
                     (int)((double)animationSpeed * dVar27));
          local_100 = (longlong)(int)((double)animationSpeed * dVar27);
          SpawnPart_53
                    ((double)(float)(dVar19 * dVar29),(double)(float)(dVar19 * dVar30),uVar28,
                     &local_110,(int)((double)animationSpeed * dVar27));
          local_120[1] = 0.0;
          local_120[0] = 0.0;
          dVar19 = (double)MB_randRangeFloat((float)dVar31,(float)dVar23);
          local_120[2] = (float)(dVar19 * (double)DAT_0071f408);
          uVar21 = MB_randRangeFloat((float)dVar32,(float)dVar33);
          MB_randInt(2);
          MB_randInt(2);
          iVar13 = SpawnPart_23(dVar18,uVar34,uVar35,uVar21,local_140);
          dVar37 = (double)local_f0;
          dVar19 = (double)local_ec;
          dVar22 = (double)local_e8;
          if (iVar13 != 0) {
            iVar14 = MB_randRange(0x5a,0x78);
            iVar14 = (int)(animationSpeed * (float)((double)(longlong)iVar14 + dVar37));
            local_100 = (longlong)iVar14;
            *(undefined4 *)(iVar13 + 0x24) = 2;
            *(short *)(iVar13 + 10) = (short)iVar14;
            uVar15 = MB_randRange(0x40,0x60);
            *(undefined1 *)(iVar13 + 0x2a) = uVar15;
            *(char *)(iVar13 + 0x2b) = (char)*(undefined2 *)(iVar13 + 10);
            iVar14 = MB_randInt(2);
            if (iVar14 != 0) {
              *(undefined1 *)(iVar13 + 3) = 0x44;
            }
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < 0x18);
        DeleteMoby(moby);
      }
    }
  }
  return;
}


