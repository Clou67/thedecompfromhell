// game/update/moby413.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x366940-0x36762c
#include "game/update/moby413.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x0366940 (0x14 bytes)
void M413_00366940(void)

{
  DAT_00840d2c = 0x10000;
  return;
}


// 0x0366968 (0x3d0 bytes)
void M413_00366968(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  float fVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong unaff_r22;
  longlong lVar7;
  ulonglong unaff_r23;
  longlong lVar8;
  ulonglong unaff_r24;
  longlong lVar9;
  ulonglong unaff_r25;
  undefined4 *puVar10;
  ulonglong unaff_r26;
  undefined4 *puVar11;
  ulonglong unaff_r27;
  float *pfVar14;
  longlong lVar12;
  longlong lVar13;
  ulonglong unaff_r28;
  float *pfVar15;
  ulonglong unaff_r29;
  int iVar16;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  longlong lVar17;
  ulonglong in_LR;
  double dVar18;
  double dVar19;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar20;
  
  uVar5 = ZEXT48(&stack0x00000000);
  lVar13 = uVar5 - 0x1b0;
  puVar3 = (ulonglong *)lVar13;
  *puVar3 = uVar5;
  puVar3[0x38] = in_LR;
  puVar3[0x34] = in_f30;
  puVar3[0x35] = in_f31;
  puVar3[0x33] = unaff_r31;
  puVar3[0x30] = unaff_r28;
  puVar3[0x32] = unaff_r30;
  iVar16 = *(int *)(param_1 + 0x78);
  puVar3[0x31] = unaff_r29;
  puVar3[0x2f] = unaff_r27;
  puVar3[0x2e] = unaff_r26;
  puVar3[0x2d] = unaff_r25;
  puVar3[0x2c] = unaff_r24;
  puVar3[0x2b] = unaff_r23;
  puVar3[0x2a] = unaff_r22;
  uVar6 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar3[0x28] = uVar6;
  uVar6 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar3[0x26] = uVar6;
  uVar6 = idol_draw::PackCmd(0,1,0,1,0x80);
  puVar3[0x29] = uVar6;
  uVar6 = GetEffectTex(0xc);
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  puVar3[0x27] = uVar6;
  uVar2 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(puVar3 + 0xe) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)puVar3 + 0x74) = uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(puVar3 + 0xf) = uVar1;
  *(undefined4 *)((int)puVar3 + 0x7c) = uVar2;
  dVar18 = (double)FastWrapRot
                             (*(float *)(iVar16 + 0xc),
                              DAT_00840d58 * 0.017453292 * g_FrameTime);
  *(float *)(iVar16 + 0xc) = (float)dVar18;
  *(float *)(puVar3 + 0xe) = (float)dVar18;
  FastEulerToMtx1(uVar5 - 0x130,uVar5 - 0x140);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar3 + 0x16) = *(undefined4 *)(param_1 + 0x10);
  iVar16 = 0;
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)puVar3 + 0xb4) = uVar1;
  *(undefined4 *)(puVar3 + 0x17) = uVar2;
  *(undefined4 *)((int)puVar3 + 0xbc) = 0x3f800000;
  lVar17 = uVar5 - 0xf0;
  dVar18 = 0.0;
  dVar20 = 0.30000001192092896;
  puVar10 = &DAT_00840df8;
  puVar11 = &DAT_00840dfc;
  pfVar15 = (float *)&DAT_00840d70;
  lVar7 = lVar13;
  lVar8 = lVar13;
  lVar9 = lVar13;
  lVar12 = lVar17;
  do {
    fVar4 = DAT_00840d54;
    pfVar14 = (float *)lVar12;
    if ((iVar16 == 0) || (iVar16 == 2)) {
      *(undefined4 *)((int)lVar7 + 0x100) = DAT_00840df0;
      *pfVar14 = *pfVar15 * fVar4;
      pfVar14[1] = pfVar15[1] * DAT_00840d54;
      pfVar14[2] = pfVar15[2] * DAT_00840d54;
      pfVar14[3] = pfVar15[3];
    }
    else {
      *(undefined4 *)((int)lVar7 + 0x100) = DAT_00840df4;
      *pfVar14 = *pfVar15 * fVar4;
      pfVar14[1] = pfVar15[1] * DAT_00840d54;
      pfVar14[2] = pfVar15[2] * DAT_00840d54;
      pfVar14[3] = pfVar15[3];
      dVar19 = (double)MB_randRangeFloat((float)dVar18,(float)dVar20);
      *(float *)((int)lVar8 + 0xc0) = (float)((double)*(float *)((int)lVar8 + 0xc0) - dVar19);
    }
    iVar16 = iVar16 + 1;
    uVar1 = *puVar11;
    lVar8 = lVar8 + 0x10;
    *(undefined4 *)((int)lVar9 + 0x110) = *puVar10;
    *(undefined4 *)((int)lVar9 + 0x114) = uVar1;
    lVar12 = lVar12 + 0x10;
    pfVar15 = pfVar15 + 4;
    lVar7 = lVar7 + 4;
    puVar10 = puVar10 + 2;
    puVar11 = puVar11 + 2;
    lVar9 = lVar9 + 8;
  } while (iVar16 < 4);
  FastDrawQuad(uVar5 - 0xf0,uVar5 - 0x130,0,EffectTexHeaders,9);
  iVar16 = 0;
  pfVar15 = (float *)&DAT_00840db0;
  do {
    pfVar14 = (float *)lVar17;
    if ((iVar16 == 0) || (iVar16 == 2)) {
      *pfVar14 = *pfVar15 * DAT_00840d54;
      pfVar14[1] = pfVar15[1] * DAT_00840d54;
      pfVar14[2] = pfVar15[2] * DAT_00840d54;
      pfVar14[3] = pfVar15[3];
    }
    else {
      *pfVar14 = *pfVar15 * DAT_00840d54;
      pfVar14[1] = pfVar15[1] * DAT_00840d54;
      pfVar14[2] = pfVar15[2] * DAT_00840d54;
      pfVar14[3] = pfVar15[3];
      dVar19 = (double)MB_randRangeFloat((float)dVar18,(float)dVar20);
      *(float *)((int)lVar13 + 0xc0) = (float)((double)*(float *)((int)lVar13 + 0xc0) - dVar19);
    }
    iVar16 = iVar16 + 1;
    lVar17 = lVar17 + 0x10;
    pfVar15 = pfVar15 + 4;
    lVar13 = lVar13 + 0x10;
  } while (iVar16 < 4);
  FastDrawQuad(uVar5 - 0xf0,uVar5 - 0x130,0,EffectTexHeaders,9);
  return;
}


// 0x0366d48 (0x180 bytes)
MobyInstance * FUN_00366d48(undefined4 *param_1,f32 *param_2,undefined8 param_3,undefined4 param_4)

{
  void *pvVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  MobyInstance *pMVar5;
  MobyInstance *pMVar6;
  undefined4 uVar7;
  undefined8 in_LR;
  double dVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  
  pMVar6 = CreateMoby(0x19d);
  if (pMVar6 != (MobyInstance *)0x0) {
    pMVar6->updateDistance = -1;
    pMVar6->enabled = '\x01';
    pMVar5 = g_heroMobyPtr;
    pMVar6->drawDistance = 0x7e;
    pvVar1 = pMVar6->pVar;
    auVar9 = ZEXT416(0xffffffff);
    auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    uVar3 = pMVar5->color;
    uVar4 = pMVar5->light;
    pMVar6->state = '\x01';
    pMVar6->color = uVar3;
    pMVar6->light = uVar4;
    auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
    (pMVar6->pos).x = *param_2;
    (pMVar6->pos).y = param_2[1];
    (pMVar6->pos).z = param_2[2];
    (pMVar6->pos).w = param_2[3];
    *(undefined4 *)((int)pvVar1 + 0x20) = *param_1;
    *(undefined4 *)((int)pvVar1 + 0x24) = param_1[1];
    *(undefined4 *)((int)pvVar1 + 0x28) = param_1[2];
    *(undefined4 *)((int)pvVar1 + 0x2c) = param_1[3];
    auVar9 = loadVectorLeftIndexed(in_LR,0x366d38);
    auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar9 = vectorMultiplyAddFloatingPoint
                       (auVar11,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar10);
    auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
    auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0,ZEXT48(pvVar1));
    *(undefined4 *)((uint)pvVar1 & 0xfffffffc) = uVar7;
    uVar7 = FastDoubleToInt((double)(DAT_00840d50 * 1024.0));
    *(undefined4 *)((int)pvVar1 + 4) = uVar7;
    *(undefined4 *)((int)pvVar1 + 0x18) = param_4;
    dVar8 = (double)MB_randRot();
    (pMVar6->rotation).x = (float)dVar8;
    fVar2 = DAT_00840d5c * 0.017453292 * g_FrameTime;
    dVar8 = (double)MB_randRangeFloat(-fVar2,fVar2);
    *(int *)((int)pvVar1 + 8) = (int)dVar8;
    UpdateMobyTransform(pMVar6);
  }
  return pMVar6;
}


// 0x0366f00 (0x72c bytes)
// inlined: FastRSqrt @0x367038
/* Moby 413 */

void UpdateMoby_413(MobyInstance *moby)

{
  int iVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  int iVar10;
  longlong lVar9;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  double dVar21;
  double dVar22;
  float local_120;
  float local_11c;
  float local_118;
  undefined4 local_114;
  float local_110;
  float local_10c;
  float local_108;
  undefined4 local_104;
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined4 local_e4;
  GPiece<48> auStack_e0;
  undefined4 local_b0 [12];
  longlong local_80;
  
  lVar11 = (longlong)(int)moby;
  pvVar5 = moby->pVar;
  dVar12 = (double)FastWrapRot((moby->rotation).x,*(float *)((int)pvVar5 + 0xc));
  fVar3 = (moby->pos).y;
  fVar4 = (moby->pos).z;
  bVar2 = moby->state;
  (moby->rotation).x = (float)dVar12;
  (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar5 + 0x20);
  (moby->pos).y = fVar3 + *(float *)((int)pvVar5 + 0x24);
  (moby->pos).z = fVar4 + *(float *)((int)pvVar5 + 0x28);
  if (bVar2 != 0) {
    if (bVar2 < 2) {
      dVar12 = (double)FastWrapRot
                                 ((float)dVar12,DAT_00840d5c * 0.017453292 * g_FrameTime);
      (moby->rotation).x = (float)dVar12;
      local_120 = *(float *)((int)pvVar5 + 0x20);
      fVar3 = *(float *)((int)pvVar5 + 0x28) * *(float *)((int)pvVar5 + 0x28) +
              local_120 * local_120 +
              *(float *)((int)pvVar5 + 0x24) * *(float *)((int)pvVar5 + 0x24);
      if (SQRT(fVar3) == 0.0) {
        local_114 = *(undefined4 *)((int)pvVar5 + 0x2c);
        local_118 = 0.0;
        local_11c = 0.0;
        local_120 = 0.0;
      }
      else {
        local_118 = 1.0 / SQRT(fVar3);
        local_118 = -(fVar3 * local_118 * local_118 - 1.0) * local_118 * 0.5 + local_118;
        local_118 = -(fVar3 * local_118 * local_118 - 1.0) * local_118 * 0.5 + local_118;
        local_118 = -(fVar3 * local_118 * local_118 - 1.0) * local_118 * 0.5 + local_118;
        local_120 = local_120 * local_118;
        local_11c = *(float *)((int)pvVar5 + 0x24) * local_118;
        local_118 = *(float *)((int)pvVar5 + 0x28) * local_118;
        local_114 = *(undefined4 *)((int)pvVar5 + 0x2c);
      }
      SetCollDamIn(auStack_e0,lVar11,0);
      lVar11 = lVar11 + 0x10;
      iVar10 = STUB_00055ac0_RET_0
                         (lVar11,*(undefined4 *)((int)pvVar5 + 4),0,
                          *(undefined4 *)((int)pvVar5 + 0x18),auStack_e0);
      if (iVar10 == 0) {
        local_110 = 0.0;
        local_10c = 0.0;
        local_108 = 0.0;
        local_104 = 0;
        dVar18 = -1.0;
        dVar17 = 1.0;
        dVar12 = (double)MB_randRangeFloat(-1.0,1.0);
        local_110 = (float)(dVar12 * (double)g_FrameTime);
        dVar12 = (double)MB_randRangeFloat((float)dVar18,(float)dVar17);
        local_10c = (float)(dVar12 * (double)g_FrameTime);
        dVar12 = (double)MB_randRangeFloat((float)dVar18,(float)dVar17);
        local_100 = 0.0;
        local_108 = (float)(dVar12 * (double)g_FrameTime);
        local_fc = 0.0;
        local_f8 = 0.0;
        local_f4 = 0;
        dVar12 = (double)MB_randRangeFloat((float)dVar18,(float)dVar17);
        local_100 = (float)(dVar12 * (double)g_FrameTime);
        dVar12 = (double)MB_randRangeFloat((float)dVar18,(float)dVar17);
        local_fc = (float)(dVar12 * (double)g_FrameTime);
        dVar12 = (double)MB_randRangeFloat((float)dVar18,(float)dVar17);
        local_f8 = (float)(dVar12 * (double)g_FrameTime);
        if (((moby->enabled != '\0') &&
            (RegisterFuncForMoby(&PTR_M413_00366968_0070c898,moby),
            fVar3 = g_heroPosition.y - (moby->pos).y, fVar4 = g_heroPosition.x - (moby->pos).x,
            fVar8 = g_heroPosition.z - (moby->pos).z,
            SQRT(fVar8 * fVar8 + fVar4 * fVar4 + fVar3 * fVar3) < 15.0)) &&
           (iVar10 = MB_randInt(2), iVar10 == 0)) {
          dVar12 = (double)animationSpeed;
          uVar20 = 0x40c3880000000000;
          local_80 = (longlong)(int)(dVar12 * 20.5);
          MB_randRange
                    (local_80,dVar12,0x40c3880000000000,(int)(dVar12 * 10.5),(int)(dVar12 * 20.5));
          SpawnPart_21(uVar20,lVar11,&local_100,0x4f007fff,0x1fffffff);
          iVar10 = MB_randRange(10,0x14);
          iVar10 = (int)(animationSpeed * ((float)(longlong)iVar10 + 0.5));
          local_80 = (longlong)iVar10;
          uVar20 = MB_randRange(100,0x96);
          SpawnPart_4(lVar11,&local_110,0x2f4f4f4f,0x4f4f4f,iVar10,0x28,uVar20,0);
        }
        iVar10 = FastDecTimerS32(pvVar5);
        if (iVar10 != 0) {
          moby->state = '\x02';
        }
      }
      else {
        if (g_CollOutput.pMoby != (MobyInstance *)0x0) {
          CollDamageMobyDirect
                    (1.0,g_CollOutput.pMoby,moby,0x10001,0x10000,&g_CollOutput.ip.x,&local_120);
        }
        moby->state = '\x02';
      }
    }
    else if (bVar2 < 3) {
      iVar10 = 0;
      dVar12 = 0.0;
      dVar17 = -1.0;
      dVar18 = 1.0;
      dVar19 = 2.0;
      uVar20 = 0x41086a0000000000;
      dVar21 = 30.5;
      dVar22 = 45.5;
      do {
        local_b0[0] = 0x4f008fff;
        local_b0[1] = 0x4f008fff;
        local_b0[2] = 0x4f007fff;
        local_b0[3] = 0x4f006fff;
        local_b0[4] = 0x2fffffff;
        local_b0[5] = 0x2fffffff;
        local_b0[6] = 0x2f005f7f;
        local_b0[7] = 0x2f004f7f;
        local_b0[8] = 0x2f003f7f;
        local_b0[9] = 0x2f00004f;
        local_b0[10] = 0x2f000000;
        local_b0[0xb] = 0x3f000000;
        local_f0 = 0.0;
        local_ec = 0.0;
        local_e8 = 0.0;
        local_e4 = 0;
        dVar13 = (double)MB_randRangeFloat((float)dVar17,(float)dVar18);
        local_f0 = (float)dVar13;
        dVar13 = (double)MB_randRangeFloat((float)dVar17,(float)dVar18);
        local_ec = (float)dVar13;
        dVar13 = (double)MB_randRangeFloat((float)dVar17,(float)dVar18);
        local_e8 = (float)dVar13;
        dVar13 = (double)MB_randRangeFloat((float)dVar12,(float)dVar19);
        dVar16 = (double)SQRT(local_e8 * local_e8 + local_f0 * local_f0 + local_ec * local_ec);
        fVar3 = (float)((double)(float)(dVar13 * (double)g_FrameTime) / dVar16);
        dVar13 = dVar12;
        if (dVar12 - dVar16 < 0.0) {
          dVar13 = (double)(local_f0 * fVar3);
        }
        dVar15 = dVar12;
        if (dVar12 - dVar16 < 0.0) {
          dVar15 = (double)(local_ec * fVar3);
        }
        dVar14 = dVar12;
        if (dVar12 - dVar16 < 0.0) {
          dVar14 = (double)(local_e8 * fVar3);
        }
        if (dVar16 - dVar12 < 0.0) {
          dVar13 = (double)(local_f0 * fVar3);
        }
        if (dVar16 - dVar12 < 0.0) {
          dVar15 = (double)(local_ec * fVar3);
        }
        if (dVar16 - dVar12 < 0.0) {
          dVar14 = (double)(local_e8 * fVar3);
        }
        local_f0 = (float)dVar13;
        local_ec = (float)dVar15;
        local_e8 = (float)dVar14;
        lVar9 = MB_randInt(6);
        uVar6 = *(undefined4 *)((int)local_b0 + (int)(lVar9 << 2));
        lVar9 = MB_randInt(6);
        uVar7 = *(undefined4 *)((int)local_b0 + (int)(lVar9 << 2) + 0x18);
        iVar1 = (int)((double)animationSpeed * dVar22);
        local_80 = (longlong)iVar1;
        MB_randRange((int)((double)animationSpeed * dVar21),iVar1);
        SpawnPart_8(uVar20,lVar11 + 0x10,&local_f0,uVar6,uVar7);
        iVar10 = iVar10 + 1;
      } while (iVar10 < 4);
      DeleteMoby(moby);
    }
  }
  return;
}


