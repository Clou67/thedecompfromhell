// game/update/moby1241.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x21b5e8-0x21ccbc
#include <stdlib.h>
#include "game/update/moby1241.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update.h"
#include "game/update/moby1017.h"
#include "game/update/moby1218.h"
#include "idol/fastfunc.h"

// 0x021b5e8 (0x108 bytes)
MobyInstance * FUN_0021b5e8(f32 *param_1,undefined4 *param_2,MOBY_OCLASSES param_3)

{
  f32 fVar1;
  void *pvVar2;
  MobyInstance *pMVar3;
  double dVar4;
  
  pMVar3 = CreateMoby(param_3);
  if (pMVar3 != (MobyInstance *)0x0) {
    pMVar3->updateDistance = -1;
    pMVar3->enabled = '\x01';
    pMVar3->state = '\0';
    pMVar3->setByGroup = '\0';
    pvVar2 = pMVar3->pVar;
    (pMVar3->pos).x = *param_1;
    (pMVar3->pos).y = param_1[1];
    (pMVar3->pos).z = param_1[2];
    fVar1 = param_1[3];
    pMVar3->drawDistance = 0xff;
    (pMVar3->pos).w = fVar1;
    *(undefined4 *)((int)pvVar2 + 0x10) = *param_2;
    *(undefined4 *)((int)pvVar2 + 0x14) = param_2[1];
    *(undefined4 *)((int)pvVar2 + 0x18) = param_2[2];
    *(undefined4 *)((int)pvVar2 + 0x1c) = param_2[3];
    dVar4 = (double)MB_randRot();
    (pMVar3->rotation).z = (float)dVar4;
    (pMVar3->rotation).x = 0.0;
    (pMVar3->rotation).y = 0.7853982;
    *(undefined4 *)((int)pvVar2 + 0x4c) = 0x3f800000;
    UpdateMobyTransform(pMVar3);
    MB_CopyHeroLights(pMVar3);
  }
  return pMVar3;
}


// 0x021b6f0 (0x134 bytes)
undefined8 M1241_0021b6f0(int param_1,float *param_2)

{
  MobyInstance *pMVar1;
  undefined4 *puVar2;
  float fVar4;
  undefined8 uVar3;
  
  fVar4 = param_2[0xd];
  if (fVar4 == 0.0) {
    fVar4 = (float)M1220_0020b6b0(param_1);
    param_2[0xd] = fVar4;
  }
  if ((fVar4 == 0.0) || (*(char *)((int)fVar4 + 0x20) == -3 || *(char *)((int)fVar4 + 0x20) == -2))
  {
    uVar3 = 0;
    *param_2 = *(float *)(param_1 + 0x10);
    param_2[1] = *(float *)(param_1 + 0x14);
    param_2[2] = *(float *)(param_1 + 0x18);
    param_2[3] = *(float *)(param_1 + 0x1c);
    puVar2 = (undefined4 *)((uint)(param_2 + 8) & 0xfffffff0);
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  else {
    GetBonePosition(param_1,6,(int)fVar4 + 0x10);
    pMVar1 = (MobyInstance *)param_2[0xd];
    (pMVar1->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar1->rotation).y = *(f32 *)(param_1 + 0x44);
    (pMVar1->rotation).z = *(f32 *)(param_1 + 0x48);
    (pMVar1->rotation).w = *(f32 *)(param_1 + 0x4c);
    UpdateMobyTransform(pMVar1);
    GetBonePosition(param_2[0xd],0,param_2);
    uVar3 = 1;
    param_2[8] = *(float *)(param_1 + 0x10) - *param_2;
    param_2[9] = *(float *)(param_1 + 0x14) - param_2[1];
    param_2[10] = *(float *)(param_1 + 0x18) - param_2[2];
    param_2[0xb] = *(float *)(param_1 + 0x1c);
  }
  return uVar3;
}


// 0x021b8c0 (0x13fc bytes)
// inlined: FastAtan2 @0x21c1ac, FastAtan2 @0x21c360
/* Moby 1241 */

void UpdateMoby_1241(MobyInstance *moby)

{
  bool bVar1;
  float fVar2;
  u8 uVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  float fVar12;
  f32 fVar13;
  uint uVar14;
  undefined4 uVar15;
  ulonglong *puVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulonglong uVar21;
  int iVar24;
  int iVar25;
  MobyInstance *pMVar26;
  int iVar27;
  longlong lVar22;
  longlong lVar23;
  uint uVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  float *pfVar32;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar33;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  ulonglong in_f16;
  ulonglong in_f17;
  double dVar41;
  ulonglong in_f18;
  double dVar42;
  ulonglong in_f19;
  double dVar43;
  ulonglong in_f20;
  double dVar44;
  ulonglong in_f21;
  double dVar45;
  ulonglong in_f22;
  double dVar46;
  ulonglong in_f23;
  double dVar47;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar48;
  ulonglong in_f31;
  double dVar49;
  double dVar50;
  GPiece<16> auVar51;
  GPiece<16> auVar52;
  GPiece<16> auVar53;
  
  uVar21 = ZEXT48(&stack0x00000000);
  lVar23 = uVar21 - 0x260;
  puVar16 = (ulonglong *)lVar23;
  *puVar16 = uVar21;
  puVar16[0x4e] = in_LR;
  puVar16[0x3c] = in_f16;
  puVar16[0x3d] = in_f17;
  puVar16[0x3e] = in_f18;
  puVar16[0x3f] = in_f19;
  puVar16[0x40] = in_f20;
  puVar16[0x41] = in_f21;
  puVar16[0x42] = in_f22;
  puVar16[0x43] = in_f23;
  puVar16[0x44] = in_f24;
  puVar16[0x45] = in_f25;
  puVar16[0x46] = in_f26;
  puVar16[0x47] = in_f27;
  puVar16[0x48] = in_f28;
  puVar16[0x49] = in_f29;
  puVar16[0x4a] = in_f30;
  puVar16[0x4b] = in_f31;
  puVar16[0x37] = unaff_r27;
  puVar16[0x34] = unaff_r24;
  puVar16[0x3b] = unaff_r31;
  puVar16[0x39] = unaff_r29;
  bVar1 = false;
  puVar16[0x35] = unaff_r25;
  dVar49 = 100000.0;
  puVar16[0x3a] = unaff_r30;
  pfVar11 = (float *)moby->pVar;
  uVar33 = ZEXT48(pfVar11);
  puVar16[0x36] = unaff_r26;
  iVar27 = DAT_0096b2d0;
  puVar16[0x38] = unaff_r28;
  puVar16[0x33] = unaff_r23;
  dVar50 = dVar49;
  iVar24 = MB_damage(moby,0x330000,0);
  GetBonePosition(moby,0,uVar21 - 0x1a0);
  iVar25 = CollSphere(0x3fe19999a0000000,uVar21 - 0x1a0);
  if (iVar25 != 0) {
    if (g_CollOutput.pMoby == (MobyInstance *)0x0) {
      puVar16[0x12] = 0xffffffffffffffff;
      puVar16[0x14] = 0;
      puVar16[0x15] = 1;
      puVar16[0x16] = 0xffffffffffffffff;
      puVar16[0x17] = 0;
      MB_genericExplosion
                (0x4000000000000000,0x3ff0000000000000,0,0,0x4022000000000000,0x3ff0000000000000,0,
                 moby,uVar33 + 0x10,uVar21 - 0x1a0,1,0xffffffffffffffff,3,2,5);
      moby->state = '\x04';
    }
    else if (((g_CollOutput.pMoby)->oClass == JET_FIGHTER) ||
            ((g_CollOutput.pMoby)->oClass == FIGHTER_JET_0045)) {
      bVar1 = true;
    }
    else {
      puVar16[0x12] = 0xffffffffffffffff;
      puVar16[0x14] = 0;
      puVar16[0x15] = 1;
      puVar16[0x16] = 0xffffffffffffffff;
      puVar16[0x17] = 0;
      MB_genericExplosion
                (0x4000000000000000,0x3ff0000000000000,0,0,0x4022000000000000,0x3ff0000000000000,0,
                 moby,uVar33 + 0x10,uVar21 - 0x1a0,1,0xffffffffffffffff,3,2,5);
      moby->state = '\x04';
    }
  }
  if (moby->state < 4) {
    pMVar26 = (MobyInstance *)pfVar11[0xe];
    if (pMVar26 == (MobyInstance *)0x0) {
      pMVar26 = CreateMoby(BLARG_GUN_0158);
      pfVar11[0xe] = (float)pMVar26;
      if (pMVar26 != (MobyInstance *)0x0) {
        pMVar26->drawDistance = 0x40;
        *(undefined1 *)((int)pfVar11[0xe] + 0x30) = 0x40;
        *(undefined1 *)((int)pfVar11[0xe] + 0x31) = 1;
        *(ushort *)((int)pfVar11[0xe] + 0x34) = *(ushort *)((int)pfVar11[0xe] + 0x34) | 0x100;
        pMVar26 = (MobyInstance *)pfVar11[0xe];
      }
    }
    if (pMVar26 != (MobyInstance *)0x0) {
      GetBonePosition(moby,4,uVar21 - 400);
      GetBoneTransformations(moby,4,uVar21 - 0x160);
      FastApplyTransform((Vec4 *)((int)pfVar11[0xe] + 0xc0),(Vec4 *)(uVar21 - 0x160));
      fVar12 = pfVar11[0xe];
      *(undefined4 *)((int)fVar12 + 0x10) = *(undefined4 *)(puVar16 + 0x1a);
      *(undefined4 *)((int)fVar12 + 0x14) = *(undefined4 *)((int)puVar16 + 0xd4);
      *(undefined4 *)((int)fVar12 + 0x18) = *(undefined4 *)(puVar16 + 0x1b);
      *(undefined4 *)((int)fVar12 + 0x1c) = *(undefined4 *)((int)puVar16 + 0xdc);
      UpdateMobyTransform((MobyInstance *)pfVar11[0xe]);
    }
    if ((((g_heroState == TURRET_PLANE_UI) && (iVar27 != 0)) &&
        (*(char *)(iVar27 + 0x20) != -3 && *(char *)(iVar27 + 0x20) != -2)) &&
       ((*(short *)(iVar27 + 0xa6) == 0x4da || (*(short *)(iVar27 + 0xa6) == 0x45)))) {
      fVar12 = (moby->pos).y;
      fVar6 = *(float *)(iVar27 + 0x14) - fVar12;
      fVar5 = (moby->pos).x;
      fVar7 = *(float *)(iVar27 + 0x10) - fVar5;
      fVar2 = -((fVar12 + pfVar11[1]) * 0.5 - *(float *)(iVar27 + 0x14));
      fVar12 = *(float *)(iVar27 + 0x18) - (moby->pos).z;
      fVar5 = -((fVar5 + *pfVar11) * 0.5 - *(float *)(iVar27 + 0x10));
      dVar50 = (double)SQRT(fVar12 * fVar12 + fVar7 * fVar7 + fVar6 * fVar6);
      dVar49 = (double)SQRT(fVar5 * fVar5 + fVar2 * fVar2);
    }
    if (((bVar1) || (dVar50 < 4.0)) || (dVar49 < 4.0)) {
      moby->collision = (ushort *)0x0;
      if (pfVar11[0xd] != 0.0) {
        *(undefined4 *)((int)pfVar11[0xd] + 0x94) = 0;
      }
      moby->state = '\x04';
    }
  }
  if (iVar24 != 0) {
    uVar28 = (int)pfVar11[0x13] >> 0x1f;
    uVar14 = (int)*(uint *)(iVar24 + 0x2c) >> 0x1f;
    if ((int)((uVar14 >> 1 ^ *(uint *)(iVar24 + 0x2c)) - uVar14) <
        (int)((uVar28 >> 1 ^ (uint)pfVar11[0x13]) - uVar28)) {
      pfVar11[0x13] = pfVar11[0x13] - *(float *)(iVar24 + 0x2c);
    }
    else {
      pfVar11[0x13] = 0.0;
      puVar16[0x12] = 0xffffffffffffffff;
      puVar16[0x14] = 1;
      puVar16[0x15] = 1;
      puVar16[0x16] = 0xffffffffffffffff;
      puVar16[0x17] = 0;
      MB_genericExplosion
                (0,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,moby,iVar24 + 0x10,0,&DAT_0021b824,1,10,3,0x10);
      if (pfVar11[0xd] != 0.0) {
        *(undefined1 *)((int)pfVar11[0xd] + 0x20) = 3;
      }
      moby->state = '\x04';
    }
    moby->damage = -1;
  }
  uVar3 = moby->state;
  if (uVar3 == '\x04') {
    if ((MobyInstance *)pfVar11[0xe] != (MobyInstance *)0x0) {
      DeleteMoby((MobyInstance *)pfVar11[0xe]);
      pfVar11[0xe] = 0.0;
    }
    DeleteMoby(moby);
    return;
  }
  if (uVar3 == '\x03') {
    bVar1 = moby->animationId != '\x03';
    if ((bVar1) && (bVar1)) {
      MB_SetAnimation(moby,3,0,6);
    }
    pfVar11[6] = -(DAT_0071f418 * 9.8 - pfVar11[6]);
    (moby->pos).x = (moby->pos).x + pfVar11[4];
    (moby->pos).y = (moby->pos).y + pfVar11[5];
    (moby->pos).z = (moby->pos).z + pfVar11[6];
    goto LAB_0021cb3c;
  }
  if (uVar3 != '\x02') {
    if (uVar3 == '\x01') {
      fVar12 = pfVar11[4];
      fVar5 = pfVar11[5];
      pfVar11[4] = fVar12 * 0.9;
      pfVar11[5] = fVar5 * 0.9;
      fVar6 = *pfVar11 + fVar12 * 0.9;
      fVar12 = DAT_0071f418 * 9.8;
      pfVar11[1] = pfVar11[1] + fVar5 * 0.9;
      *pfVar11 = fVar6;
      fVar12 = pfVar11[6] * 0.9 - fVar12;
      pfVar11[6] = fVar12;
      pfVar11[2] = pfVar11[2] + fVar12;
      (moby->pos).x = fVar6 + pfVar11[8];
      (moby->pos).y = pfVar11[1] + pfVar11[9];
      (moby->pos).z = pfVar11[2] + pfVar11[10];
      (moby->pos).w = pfVar11[3];
      iVar27 = M1241_0021b6f0(moby,uVar33);
      if ((iVar27 != 0) && (*(char *)((int)pfVar11[0xd] + 0x52) == '\x01')) {
        pfVar11[4] = pfVar11[4] * 0.8;
        pfVar11[5] = pfVar11[5] * 0.8;
        pfVar11[6] = pfVar11[6] * 0.8;
        moby->state = '\x02';
      }
    }
    else if (uVar3 == '\0') {
      pfVar11[0xd] = 0.0;
      M1241_0021b6f0(moby,uVar33);
      pfVar11[0xc] = 0.0;
      moby->setByGroup = '\0';
      moby->state = '\x01';
      pfVar11[0x11] = 1.0;
    }
    goto LAB_0021cb3c;
  }
  dVar49 = (double)FastWrapRot((moby->rotation).z,g_FrameTime * 0.034906585);
  (moby->rotation).z = (float)dVar49;
  dVar49 = (double)FastWrapRot(pfVar11[0xc],g_FrameTime * 1.5707964);
  dVar47 = 1.570796251296997;
  dVar46 = 3.141592502593994;
  fVar12 = (float)(dVar49 + 1.570796251296997);
  dVar45 = -3.141592502593994;
  dVar44 = -0.16666656732559204;
  dVar43 = 0.008333025500178337;
  dVar42 = -0.0001980741071747616;
  dVar41 = 2.601886990305502e-06;
  dVar48 = 0.7853981852531433;
  pfVar11[0xc] = (float)dVar49;
  fVar5 = 3.1415925 - fVar12;
  if (fVar12 - (3.1415925 - fVar12) < 0.0) {
    fVar5 = fVar12;
  }
  fVar6 = -3.1415925 - fVar12;
  if ((-3.1415925 - fVar12) - fVar5 < 0.0) {
    fVar6 = fVar5;
  }
  fVar7 = fVar6 * fVar6;
  fVar12 = fVar7 * fVar7 * fVar6;
  fVar5 = fVar7 * fVar12;
  (moby->rotation).y =
       (fVar7 * fVar5 * 2.601887e-06 +
       fVar5 * -0.0001980741 + fVar12 * 0.0083330255 + fVar7 * fVar6 * -0.16666657 + fVar6) *
       0.7853982;
  fVar5 = pfVar11[4] * 0.6;
  fVar6 = pfVar11[5] * 0.6;
  fVar12 = *pfVar11;
  pfVar11[4] = fVar5;
  pfVar11[5] = fVar6;
  fVar7 = DAT_0071f418 * 9.8;
  *pfVar11 = fVar12 + fVar5;
  pfVar11[1] = pfVar11[1] + fVar6;
  fVar7 = pfVar11[6] * 0.6 - fVar7;
  pfVar11[6] = fVar7;
  pfVar11[2] = pfVar11[2] + fVar7;
  if ((dVar50 < 40.0) && (moby->enabled != '\0')) {
    fVar2 = (moby->pos).y - *(float *)(iVar27 + 0x14);
    fVar8 = (moby->pos).x - *(float *)(iVar27 + 0x10);
    fVar10 = (moby->pos).z - *(float *)(iVar27 + 0x18);
    fVar9 = SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar2 * fVar2);
    fVar17 = 0.0;
    fVar20 = (0.8 / (float)SQRT(dVar50)) / fVar9;
    fVar18 = fVar17;
    if (0.0 - fVar9 < 0.0) {
      fVar18 = fVar20 * fVar10;
    }
    fVar19 = fVar17;
    if (0.0 - fVar9 < 0.0) {
      fVar19 = fVar20 * fVar2;
    }
    if (0.0 - fVar9 < 0.0) {
      fVar17 = fVar20 * fVar8;
    }
    if (fVar9 - 0.0 < 0.0) {
      fVar18 = fVar20 * fVar10;
    }
    if (fVar9 - 0.0 < 0.0) {
      fVar19 = fVar20 * fVar2;
    }
    if (fVar9 - 0.0 < 0.0) {
      fVar17 = fVar20 * fVar8;
    }
    pfVar11[6] = fVar7 + fVar18;
    pfVar11[5] = fVar6 + fVar19;
    pfVar11[4] = fVar5 + fVar17;
  }
  (moby->pos).x = fVar12 + fVar5 + pfVar11[8];
  (moby->pos).y = pfVar11[1] + pfVar11[9];
  (moby->pos).z = pfVar11[2] + pfVar11[10];
  (moby->pos).w = pfVar11[3];
  if ((int)pfVar11[0xf] < 0) {
LAB_0021c0d8:
    iVar27 = DAT_0096b2d0;
    if (moby->enabled == '\0') {
      if (moby->animationId != '\x01') {
        MB_SetAnimation(moby,1,0,6);
      }
      auVar51 = ZEXT416(0xffffffff);
      auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
      auVar52 = vectorShiftLeftIntegerWord(auVar51,auVar51);
      auVar51 = loadVectorLeftIndexed(0x8c,0x21b824);
      auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar53 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar51 = vectorMultiplyAddFloatingPoint
                          (auVar53,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,
                           auVar52);
      auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar51,0);
      auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar15 = storeVectorElementWordIndexed
                         (auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,0x3c,uVar33)
      ;
      *(undefined4 *)((uint)(pfVar11 + 0xf) & 0xfffffffc) = uVar15;
      moby->unk58 = 1.0;
      moby->setByGroup = '\0';
    }
    else {
      fVar12 = (moby->pos).x;
      fVar5 = (moby->pos).y;
      fVar6 = *(float *)(DAT_0096b2d0 + 0x10);
      fVar7 = *(float *)(DAT_0096b2d0 + 0x14);
      fVar2 = fVar6 - fVar12;
      fVar8 = fVar7 - fVar5;
      fVar9 = ABS(fVar2);
      fVar10 = ABS(fVar8);
      *(float *)((int)puVar16 + 0x14c) = fVar2;
      *(float *)(puVar16 + 0x2a) = fVar8;
      *(float *)((int)puVar16 + 0x154) = fVar9 - fVar10;
      dVar50 = 0.0;
      uVar30 = (ulonglong)(*(uint *)((int)puVar16 + 0x14c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar16 + 0x154) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar16 + 0x2a) >> 0x1d) & 4;
      fVar2 = ABS(*(float *)((int)puVar16 + 0x14c));
      if (*(float *)((int)puVar16 + 0x154) - 0.0 < 0.0) {
        fVar2 = fVar10;
      }
      fVar10 = *(float *)(&g_atanQuadrantTable + (int)(uVar30 << 2));
      fVar8 = *(float *)(((uint)(uVar30 << 2) | 0x735900) + 4);
      fVar17 = ABS(*(float *)(puVar16 + 0x2a));
      if (*(float *)((int)puVar16 + 0x154) - 0.0 < 0.0) {
        fVar17 = fVar9;
      }
      dVar49 = dVar50;
      if (0.0 < fVar2) {
        lVar22 = uVar21 - 0x250;
        lVar31 = uVar21 - 0xd8;
        lVar29 = uVar21 - 0xe8;
        lVar34 = 2;
        fVar2 = (fVar17 - fVar2) / (fVar17 + fVar2);
        fVar9 = fVar2 * fVar2;
        *(float *)((int)puVar16 + 0x184) = fVar2;
        *(float *)((int)puVar16 + 0x17c) = fVar2;
        *(float *)(puVar16 + 0x30) = fVar2;
        *(float *)(puVar16 + 0x2f) = fVar2;
        fVar2 = fVar9 * fVar9;
        *(float *)((int)puVar16 + 0x17c) = *(float *)((int)puVar16 + 0x17c) * fVar9;
        *(float *)(puVar16 + 0x30) = *(float *)(puVar16 + 0x30) * fVar2;
        *(float *)((int)puVar16 + 0x184) = *(float *)((int)puVar16 + 0x184) * fVar2 * fVar9;
        do {
          *(float *)((int)lVar22 + 0x178) = *(float *)((int)lVar22 + 0x168) * fVar2 * fVar2;
          iVar24 = (int)lVar29;
          lVar29 = lVar29 + 8;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar31 + 4) = *(float *)(iVar24 + 4) * fVar2 * fVar2;
          lVar31 = lVar31 + 8;
          lVar34 = lVar34 + -1;
        } while (lVar34 != 0);
        lVar34 = 4;
        lVar31 = uVar21 - 0xe8;
        pfVar32 = (float *)&DAT_007358e0;
        lVar22 = lVar23;
        lVar29 = lVar31;
        do {
          fVar2 = *pfVar32;
          fVar9 = pfVar32[1];
          pfVar32 = pfVar32 + 2;
          *(float *)((int)lVar22 + 0x178) = *(float *)((int)lVar22 + 0x178) * fVar2;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar9;
          lVar29 = lVar29 + 8;
          lVar34 = lVar34 + -1;
        } while (lVar34 != 0);
        lVar29 = 2;
        lVar22 = lVar23;
        do {
          iVar24 = (int)lVar22;
          iVar25 = (int)lVar31;
          lVar22 = lVar22 + 0x10;
          lVar31 = lVar31 + 0x10;
          dVar49 = (double)((float)(dVar49 + (double)*(float *)(iVar24 + 0x178)) +
                            *(float *)(iVar25 + 4) + *(float *)(iVar25 + 8) +
                           *(float *)(iVar25 + 0xc));
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        dVar49 = (double)((float)(dVar49 + dVar48) * fVar10 + fVar8);
      }
      fVar5 = fVar5 - fVar7;
      fVar12 = fVar12 - fVar6;
      fVar6 = *(float *)(iVar27 + 0x18) - (moby->pos).z;
      fVar12 = SQRT(fVar12 * fVar12 + fVar5 * fVar5);
      *(float *)((int)puVar16 + 0x144) = fVar6;
      fVar6 = ABS(fVar6);
      fVar5 = ABS(fVar12);
      *(float *)(puVar16 + 0x28) = fVar12;
      *(float *)(puVar16 + 0x29) = fVar5 - fVar6;
      uVar30 = (ulonglong)(*(uint *)(puVar16 + 0x28) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar16 + 0x29) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar16 + 0x144) >> 0x1d) & 4;
      fVar12 = ABS(*(float *)(puVar16 + 0x28));
      if (*(float *)(puVar16 + 0x29) - 0.0 < 0.0) {
        fVar12 = fVar6;
      }
      fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar30 << 2));
      fVar7 = ABS(*(float *)((int)puVar16 + 0x144));
      if (*(float *)(puVar16 + 0x29) - 0.0 < 0.0) {
        fVar7 = fVar5;
      }
      fVar5 = *(float *)(((uint)(uVar30 << 2) | 0x735900) + 4);
      dVar35 = dVar50;
      if (0.0 < fVar12) {
        lVar22 = uVar21 - 0x250;
        lVar29 = uVar21 - 0x108;
        lVar31 = uVar21 - 0xf8;
        lVar34 = 2;
        fVar12 = (fVar7 - fVar12) / (fVar7 + fVar12);
        fVar7 = fVar12 * fVar12;
        *(float *)((int)puVar16 + 0x164) = fVar12;
        *(float *)((int)puVar16 + 0x15c) = fVar12;
        *(float *)(puVar16 + 0x2c) = fVar12;
        *(float *)(puVar16 + 0x2b) = fVar12;
        fVar12 = fVar7 * fVar7;
        *(float *)((int)puVar16 + 0x15c) = *(float *)((int)puVar16 + 0x15c) * fVar7;
        *(float *)(puVar16 + 0x2c) = *(float *)(puVar16 + 0x2c) * fVar12;
        *(float *)((int)puVar16 + 0x164) = *(float *)((int)puVar16 + 0x164) * fVar12 * fVar7;
        do {
          *(float *)((int)lVar22 + 0x158) = *(float *)((int)lVar22 + 0x148) * fVar12 * fVar12;
          iVar27 = (int)lVar29;
          lVar22 = lVar22 + 8;
          lVar29 = lVar29 + 8;
          *(float *)((int)lVar31 + 4) = *(float *)(iVar27 + 4) * fVar12 * fVar12;
          lVar31 = lVar31 + 8;
          lVar34 = lVar34 + -1;
        } while (lVar34 != 0);
        lVar34 = 4;
        lVar31 = uVar21 - 0x108;
        pfVar32 = (float *)&DAT_007358e0;
        lVar22 = lVar23;
        lVar29 = lVar31;
        do {
          fVar12 = *pfVar32;
          fVar7 = pfVar32[1];
          pfVar32 = pfVar32 + 2;
          *(float *)((int)lVar22 + 0x158) = *(float *)((int)lVar22 + 0x158) * fVar12;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar7;
          lVar29 = lVar29 + 8;
          lVar34 = lVar34 + -1;
        } while (lVar34 != 0);
        lVar22 = 2;
        do {
          iVar27 = (int)lVar23;
          lVar23 = lVar23 + 0x10;
          iVar24 = (int)lVar31;
          lVar31 = lVar31 + 0x10;
          dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar27 + 0x158)) +
                            *(float *)(iVar24 + 4) + *(float *)(iVar24 + 8) +
                           *(float *)(iVar24 + 0xc));
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        dVar35 = (double)((float)(dVar35 + dVar48) * fVar6 + fVar5);
      }
      dVar48 = (double)FastSubRots((moby->rotation).z,(float)dVar49);
      FastSubRots((moby->rotation).y,(float)dVar35);
      OrganicDeltAngSpeed
                (dVar49,(double)(DAT_0071f40c * 0.005),(double)(DAT_0071f40c * 0.5),
                 (double)(DAT_0071f408 * 0.05),moby,&DAT_00720000,uVar33 + 0x40);
      bVar4 = moby->setByGroup;
      if (bVar4 == 0) {
        if (dVar48 < 1.0471975803375244) {
          if (moby->animationId != '\x02') {
            MB_SetAnimation(moby,2,0,6);
          }
          moby->unk58 = 3.0;
          moby->setByGroup = '\x01';
        }
      }
      else if (bVar4 < 2) {
        dVar48 = 1.0;
        iVar27 = *(int *)(DAT_0096b2d0 + 0x78);
        GetBonePosition(pfVar11[0xe],0,uVar21 - 0x170);
        iVar24 = DAT_0096b2d0;
        fVar12 = *(float *)(iVar27 + 0x10);
        dVar35 = (double)pfVar11[0x12];
        fVar6 = *(float *)(iVar27 + 0x18) * fVar12;
        fVar5 = *(float *)(iVar27 + 0x14);
        fVar7 = fVar5 * *(float *)(iVar27 + 0x18);
        dVar47 = (double)(float)(dVar35 + dVar47);
        fVar2 = -fVar7;
        dVar49 = (double)(float)(dVar46 - dVar35);
        if (dVar35 - (double)(float)(dVar46 - dVar35) < 0.0) {
          dVar49 = dVar35;
        }
        fVar8 = fVar12 * fVar12 - -(fVar5 * fVar5);
        dVar36 = (double)(float)(dVar45 - dVar35);
        if ((double)(float)(dVar45 - dVar35) - dVar49 < 0.0) {
          dVar36 = dVar49;
        }
        dVar49 = (double)(float)(dVar46 - dVar47);
        if (dVar47 - (double)(float)(dVar46 - dVar47) < 0.0) {
          dVar49 = dVar47;
        }
        dVar35 = (double)SQRT(fVar12 * fVar12 + --(fVar5 * fVar5));
        dVar38 = (double)(float)(dVar36 * dVar36);
        dVar37 = (double)SQRT(fVar8 * fVar8 + fVar2 * fVar2 + --(fVar6 * fVar6));
        dVar46 = (double)(float)(dVar45 - dVar47);
        if ((double)(float)(dVar45 - dVar47) - dVar49 < 0.0) {
          dVar46 = dVar49;
        }
        dVar40 = (double)(float)(dVar38 * (double)(float)(dVar38 * dVar36));
        dVar39 = (double)(float)(dVar46 * dVar46);
        dVar49 = (double)(float)(dVar38 * dVar40);
        dVar45 = (double)(float)(dVar39 * (double)(float)(dVar39 * dVar46));
        dVar47 = (double)(float)(dVar39 * dVar45);
        fVar2 = (float)((double)(pfVar11[0x11] * 5.0 *
                                (float)((double)(float)(dVar38 * dVar49) * dVar41 +
                                       (double)(float)(dVar49 * dVar42 +
                                                      (double)(float)(dVar40 * dVar43 +
                                                                     (double)(float)((double)(float)
                                                  (dVar38 * dVar36) * dVar44 + dVar36))))) / dVar37)
        ;
        fVar10 = (float)((double)(pfVar11[0x11] * 5.0 *
                                 (float)((double)(float)(dVar39 * dVar47) * dVar41 +
                                        (double)(float)(dVar47 * dVar42 +
                                                       (double)(float)(dVar45 * dVar43 +
                                                                      (double)(float)((double)(float
                                                  )(dVar39 * dVar46) * dVar44 + dVar46))))) / dVar35
                        );
        dVar41 = -(double)(fVar7 * fVar2);
        dVar49 = dVar50;
        if (dVar50 - dVar37 < 0.0) {
          dVar49 = (double)(fVar8 * fVar2);
        }
        dVar42 = dVar50;
        if (dVar50 - dVar37 < 0.0) {
          dVar42 = -(double)(fVar6 * fVar2);
        }
        dVar43 = dVar50;
        if (dVar50 - dVar37 < 0.0) {
          dVar43 = dVar41;
        }
        if (dVar37 - dVar50 < 0.0) {
          dVar49 = (double)(fVar8 * fVar2);
        }
        if (dVar37 - dVar50 < 0.0) {
          dVar42 = -(double)(fVar6 * fVar2);
        }
        if (dVar37 - dVar50 < 0.0) {
          dVar43 = dVar41;
        }
        dVar44 = (double)(fVar12 * fVar10);
        fVar12 = (float)((double)*(float *)(DAT_0096b2d0 + 0x10) + dVar42);
        dVar42 = -(double)(fVar5 * fVar10);
        dVar41 = dVar50;
        if (dVar50 - dVar35 < 0.0) {
          dVar41 = dVar44;
        }
        *(float *)(puVar16 + 0x1c) = fVar12;
        fVar5 = (float)((double)*(float *)(iVar24 + 0x14) + dVar43);
        dVar43 = dVar50;
        if (dVar50 - dVar35 < 0.0) {
          dVar43 = dVar42;
        }
        if (dVar35 - dVar50 < 0.0) {
          dVar41 = dVar44;
        }
        if (dVar35 - dVar50 < 0.0) {
          dVar43 = dVar42;
        }
        *(float *)((int)puVar16 + 0xe4) = fVar5;
        fVar6 = (float)((double)*(float *)(iVar24 + 0x18) + dVar49);
        *(float *)(puVar16 + 0x1d) = fVar6;
        uVar15 = *(undefined4 *)(iVar24 + 0x1c);
        *(float *)((int)puVar16 + 0xe4) = (float)((double)fVar5 + dVar41);
        *(undefined4 *)((int)puVar16 + 0xec) = uVar15;
        *(float *)(puVar16 + 0x1d) = fVar6;
        *(float *)(puVar16 + 0x1c) = (float)((double)fVar12 + dVar43);
        MB_RandomizeVector(0.3,(float *)(uVar21 - 0x180));
        fVar12 = *(float *)((int)puVar16 + 0xf4) - g_heroPosition.y;
        fVar2 = *(float *)(puVar16 + 0x1e) - g_heroPosition.x;
        fVar5 = *(float *)(iVar27 + 0x14);
        fVar6 = *(float *)(iVar27 + 0x10);
        fVar7 = *(float *)(iVar27 + 0x18);
        dVar41 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
        fVar8 = g_FrameTime * 30.0;
        fVar12 = (float)((double)(*(float *)(iVar27 + 100) *
                                 (SQRT(fVar2 * fVar2 + fVar12 * fVar12) /
                                 (g_FrameTime * 30.0 + *(float *)(iVar27 + 100)))) /
                        dVar41);
        dVar49 = dVar50;
        if (dVar50 - dVar41 < 0.0) {
          dVar49 = (double)(fVar7 * fVar12);
        }
        dVar42 = dVar50;
        if (dVar50 - dVar41 < 0.0) {
          dVar42 = (double)(fVar5 * fVar12);
        }
        dVar43 = dVar50;
        if (dVar50 - dVar41 < 0.0) {
          dVar43 = (double)(fVar6 * fVar12);
        }
        if (dVar41 - dVar50 < 0.0) {
          dVar49 = (double)(fVar7 * fVar12);
        }
        if (dVar41 - dVar50 < 0.0) {
          dVar42 = (double)(fVar5 * fVar12);
        }
        if (dVar41 - dVar50 < 0.0) {
          dVar43 = (double)(fVar6 * fVar12);
        }
        *(float *)(puVar16 + 0x1d) =
             (float)((double)*(float *)(puVar16 + 0x1d) + dVar49) - *(float *)(puVar16 + 0x1f);
        *(float *)((int)puVar16 + 0xe4) =
             (float)((double)*(float *)((int)puVar16 + 0xe4) + dVar42) -
             *(float *)((int)puVar16 + 0xf4);
        *(float *)(puVar16 + 0x1c) =
             (float)((double)*(float *)(puVar16 + 0x1c) + dVar43) - *(float *)(puVar16 + 0x1e);
        FUN_00187e00(0x4051800000000000,(double)fVar8,0x4024000000000000,moby,uVar21 - 0x180,
                     uVar21 - 0x170);
        uVar28 = (int)pfVar11[0x12] >> 0x1f;
        fVar12 = pfVar11[0xf];
        pfVar11[0x11] =
             pfVar11[0x11] * (float)((double)DAT_0071f408 * -0.10000002384185791 + dVar48);
        if ((int)((uVar28 >> 1 ^ (uint)pfVar11[0x12]) - uVar28) < 0x3fc90fdc) {
          fVar5 = g_FrameTime * 0.87266463 + pfVar11[0x12];
        }
        else {
          fVar5 = -(g_FrameTime * 0.87266463 - pfVar11[0x12]);
        }
        pfVar11[0x12] = fVar5;
        pfVar11[0xf] = (float)((int)fVar12 + -1);
        if ((int)fVar12 + -1 < -100) {
          if (moby->animationId != '\x01') {
            MB_SetAnimation(moby,1,0,6);
          }
          auVar51 = ZEXT416(0xffffffff);
          auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
          auVar52 = vectorShiftLeftIntegerWord(auVar51,auVar51);
          auVar51 = loadVectorLeftIndexed(0x88,0x21b824);
          auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar53 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar51 = vectorMultiplyAddFloatingPoint
                              (auVar53,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60
                               ,auVar52);
          auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar51,0);
          auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar15 = storeVectorElementWordIndexed
                             (auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,0x3c,
                              uVar33);
          *(undefined4 *)((uint)(pfVar11 + 0xf) & 0xfffffffc) = uVar15;
          moby->unk58 = 1.0;
          pfVar11[0x11] = 1.0;
          moby->setByGroup = '\0';
        }
        else {
          moby->setByGroup = '\x02';
        }
      }
      else if (bVar4 < 3) {
        if (dVar48 <= 1.0471975803375244) {
          if ((moby->field43_0x70 & 2U) != 0) {
            moby->setByGroup = '\x01';
          }
        }
        else {
          if (moby->animationId != '\x01') {
            MB_SetAnimation(moby,1,0,6);
          }
          auVar51 = ZEXT416(0xffffffff);
          auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
          auVar52 = vectorShiftLeftIntegerWord(auVar51,auVar51);
          auVar51 = loadVectorLeftIndexed(0x8c,0x21b824);
          auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar53 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar51 = vectorMultiplyAddFloatingPoint
                              (auVar53,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60
                               ,auVar52);
          auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar51,0);
          auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar15 = storeVectorElementWordIndexed
                             (auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,0x3c,
                              uVar33);
          *(undefined4 *)((uint)(pfVar11 + 0xf) & 0xfffffffc) = uVar15;
          moby->unk58 = 1.0;
          pfVar11[0x11] = 1.0;
          moby->setByGroup = '\0';
        }
      }
    }
  }
  else {
    iVar27 = FastDecTimerS32(uVar33 + 0x3c);
    bVar4 = moby->animationId;
    if (((iVar27 != 0) && (g_heroState == TURRET_PLANE_UI)) &&
       ((*(short *)(DAT_0096b2d0 + 0xa6) == 0x4da || (*(short *)(DAT_0096b2d0 + 0xa6) == 0x45))))
    goto LAB_0021c0d8;
    if (((moby->field43_0x70 & 2U) != 0) && (uVar28 = rand(), (uint)bVar4 != (uVar28 & 1))) {
      uVar28 = rand();
      MB_SetAnimation(moby,uVar28 & 1,0,6);
    }
  }
  iVar27 = M1241_0021b6f0(moby,uVar33);
  if ((iVar27 != 0) && (*(char *)((int)pfVar11[0xd] + 0x20) == '\x02')) {
    moby->state = '\x02';
  }
LAB_0021cb3c:
  fVar13 = (moby->pos).z;
  uVar28 = (int)fVar13 >> 0x1f;
  fVar12 = 20.0;
  bVar1 = (int)((uVar28 >> 1 ^ (uint)fVar13) - uVar28) < 0x41a00000;
  if (bVar1) {
    DeleteMoby(moby);
  }
  else {
    fVar13 = (moby->pos).x;
    uVar28 = (int)fVar13 >> 0x1f;
    fVar5 = (moby->pos).x;
    if ((int)((uVar28 >> 1 ^ (uint)fVar13) - uVar28) < 0x41a00000) {
      (moby->pos).x = 20.0;
      fVar5 = fVar12;
    }
    if (1003.0 < fVar5) {
      (moby->pos).x = 1003.0;
    }
    fVar13 = (moby->pos).y;
    uVar28 = (int)fVar13 >> 0x1f;
    fVar5 = (moby->pos).y;
    if ((int)((uVar28 >> 1 ^ (uint)fVar13) - uVar28) < 0x41a00000) {
      (moby->pos).y = 20.0;
      fVar5 = fVar12;
    }
    if (1003.0 < fVar5) {
      (moby->pos).y = 1003.0;
    }
    fVar5 = (moby->pos).z;
    if (bVar1) {
      (moby->pos).z = 20.0;
      fVar5 = fVar12;
    }
    if (1003.0 < fVar5) {
      (moby->pos).z = 1003.0;
    }
    MB_RegisterLameShadow(0.5,moby);
  }
  return;
}


