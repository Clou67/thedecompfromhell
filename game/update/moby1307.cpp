// game/update/moby1307.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x2437fc-0x244790
// shared update function UpdateMoby_a_lot_9; registered for oClasses 1307, 1308, 1310, 1311, 1312, 1313, 1314
#include "game/update/moby1307.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update/moby320.h"
#include "idol/fastfunc.h"

// 0x02437fc (0x14 bytes)
void M1314_002437fc(void)

{
  DAT_0078e23c = 0x10000;
  return;
}


// 0x0243810 (0x1c0 bytes)
MobyInstance * FUN_00243810(int param_1,float *param_2,MOBY_OCLASSES param_3)

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
  undefined4 *puVar10;
  undefined4 *puVar11;
  MobyInstance *pMVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float local_30;
  float local_2c;
  float local_28;
  
  pMVar12 = CreateMoby(param_3);
  if (pMVar12 != (MobyInstance *)0x0) {
    pMVar12->updateDistance = -1;
    pMVar12->drawDistance = 0xff;
    pMVar12->enabled = '\x01';
    pMVar12->state = '\x02';
    *(int *)((int)pMVar12->pVar + 0x1c) = param_1;
    pMVar12->scale =
         (pMVar12->pClass->gScale * *(float *)(param_1 + 0x2c)) /
         *(float *)(*(int *)(param_1 + 0x24) + 0x24);
    (pMVar12->pos).x = *param_2;
    (pMVar12->pos).y = param_2[1];
    (pMVar12->pos).z = param_2[2];
    (pMVar12->pos).w = param_2[3];
    UpdateMobyTransform(pMVar12);
    GetBonePosition(pMVar12,0,&local_30);
    fVar7 = *param_2 - local_30;
    fVar8 = param_2[1] - local_2c;
    fVar9 = param_2[2] - local_28;
    fVar1 = *(float *)(param_1 + 0xd4);
    fVar2 = *(float *)(param_1 + 0xc4);
    fVar3 = *(float *)(param_1 + 0xd8);
    fVar4 = *(float *)(param_1 + 0xe4);
    fVar5 = *(float *)(param_1 + 200);
    fVar6 = *(float *)(param_1 + 0xe8);
    (pMVar12->pos).x =
         *(float *)(param_1 + 0xd0) * fVar8 +
         *(float *)(param_1 + 0xe0) * fVar9 + *(float *)(param_1 + 0xc0) * fVar7 + *param_2;
    (pMVar12->pos).y = param_2[1] + fVar4 * fVar9 + fVar2 * fVar7 + fVar1 * fVar8;
    (pMVar12->pos).z = param_2[2] + fVar6 * fVar9 + fVar5 * fVar7 + fVar3 * fVar8;
    (pMVar12->pos).w = param_2[3];
    (pMVar12->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar12->rotation).y = *(f32 *)(param_1 + 0x44);
    (pMVar12->rotation).z = *(f32 *)(param_1 + 0x48);
    (pMVar12->rotation).w = *(f32 *)(param_1 + 0x4c);
    puVar10 = (undefined4 *)(param_1 + 0xc0U & 0xfffffff0);
    uVar15 = puVar10[2];
    uVar14 = puVar10[1];
    uVar13 = *puVar10;
    puVar11 = (undefined4 *)(param_1 + 0xd0U & 0xfffffff0);
    uVar19 = puVar11[3];
    uVar18 = puVar11[2];
    uVar17 = puVar11[1];
    uVar16 = *puVar11;
    puVar11 = (undefined4 *)(param_1 + 0xe0U & 0xfffffff0);
    uVar23 = puVar11[3];
    uVar22 = puVar11[2];
    uVar21 = puVar11[1];
    uVar20 = *puVar11;
    puVar11 = (undefined4 *)((uint)&pMVar12->transform & 0xfffffff0);
    puVar11[3] = puVar10[3];
    puVar11[2] = uVar15;
    puVar11[1] = uVar14;
    *puVar11 = uVar13;
    puVar10 = (undefined4 *)((uint)&(pMVar12->transform).v1 & 0xfffffff0);
    puVar10[3] = uVar19;
    puVar10[2] = uVar18;
    puVar10[1] = uVar17;
    *puVar10 = uVar16;
    puVar10 = (undefined4 *)((uint)&(pMVar12->transform).v2 & 0xfffffff0);
    puVar10[3] = uVar23;
    puVar10[2] = uVar22;
    puVar10[1] = uVar21;
    *puVar10 = uVar20;
    UpdateMobyTransform(pMVar12);
  }
  return pMVar12;
}


// shared update function, registered for oClasses 1307, 1308, 1310, 1311, 1312, 1313, 1314
// 0x0243a70 (0xd0c bytes)
/* Moby 1307
   Moby 1308
   Moby 1310
   Moby 1311
   Moby 1312
   Moby 1313
   Moby 1314 */

void UpdateMoby_1307(MobyInstance *moby)

{
  byte bVar1;
  char cVar2;
  float fVar3;
  float *pfVar4;
  undefined4 uVar5;
  f32 fVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  longlong lVar20;
  longlong lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 in_r5;
  int iVar24;
  double dVar25;
  undefined8 uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  float local_140;
  float local_13c;
  float local_138;
  GPiece<16> local_130;
  GPiece<16> local_120;
  GPiece<16> local_110;
  GPiece<16> local_100;
  GPiece<16> local_f0;
  undefined4 local_e0 [2];
  longlong local_d8;
  
  lVar20 = (longlong)(int)moby;
  bVar1 = moby->state;
  pfVar4 = (float *)moby->pVar;
  if (bVar1 < 4) {
    if (bVar1 < 3) {
      cVar2 = moby->setByGroup;
      if (pfVar4[7] != 0.0) {
        cVar2 = *(char *)((int)pfVar4[7] + 0xbc);
        moby->setByGroup = cVar2;
      }
      if (cVar2 == '\x01') {
        moby->state = '\x03';
      }
    }
    else {
      MB_SpawnExplosionSparks
                (0x4010000000000000,0x402a000000000000,lVar20,lVar20 + 0x10,in_r5,0xffffffffffffffff
                );
      GetBonePosition(lVar20,0,&local_140);
      fVar8 = (moby->pos).x - local_140;
      *pfVar4 = fVar8;
      fVar9 = (moby->pos).y - local_13c;
      pfVar4[1] = fVar9;
      fVar10 = (moby->pos).z - local_138;
      pfVar4[2] = fVar10;
      pfVar4[3] = (moby->pos).w;
      fVar18 = g_FrameTime;
      fVar11 = SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9);
      fVar3 = 0.0;
      fVar12 = (g_FrameTime * 10.0) / fVar11;
      fVar13 = fVar3;
      if (0.0 - fVar11 < 0.0) {
        fVar13 = fVar8 * fVar12;
      }
      fVar15 = fVar3;
      if (0.0 - fVar11 < 0.0) {
        fVar15 = fVar9 * fVar12;
      }
      fVar16 = fVar3;
      if (0.0 - fVar11 < 0.0) {
        fVar16 = fVar10 * fVar12;
      }
      if (fVar11 - 0.0 < 0.0) {
        fVar13 = fVar8 * fVar12;
      }
      if (fVar11 - 0.0 < 0.0) {
        fVar15 = fVar9 * fVar12;
      }
      if (fVar11 - 0.0 < 0.0) {
        fVar16 = fVar10 * fVar12;
      }
      *pfVar4 = fVar13;
      pfVar4[1] = fVar15;
      pfVar4[2] = fVar16;
      fVar10 = local_13c - g_heroPosition.y;
      fVar11 = local_140 - g_heroPosition.x;
      fVar12 = local_138 - g_heroPosition.z;
      fVar17 = SQRT(fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10);
      fVar9 = (fVar18 * 15.0) / fVar17;
      fVar8 = fVar3;
      if (0.0 - fVar17 < 0.0) {
        fVar8 = fVar12 * fVar9;
      }
      fVar14 = fVar3;
      if (0.0 - fVar17 < 0.0) {
        fVar14 = fVar10 * fVar9;
      }
      if (0.0 - fVar17 < 0.0) {
        fVar3 = fVar11 * fVar9;
      }
      if (fVar17 - 0.0 < 0.0) {
        fVar8 = fVar12 * fVar9;
      }
      if (fVar17 - 0.0 < 0.0) {
        fVar14 = fVar10 * fVar9;
      }
      if (fVar17 - 0.0 < 0.0) {
        fVar3 = fVar11 * fVar9;
      }
      pfVar4[2] = fVar16 + fVar8;
      pfVar4[1] = fVar15 + fVar14;
      *pfVar4 = fVar13 + fVar3;
      dVar35 = -1.5707963705062866;
      dVar33 = 1.5707963705062866;
      dVar25 = (double)MB_randRangeFloat(fVar18 * -1.5707964,fVar18 * 1.5707964);
      pfVar4[4] = (float)dVar25;
      dVar25 = (double)MB_randRangeFloat
                                 ((float)((double)g_FrameTime * dVar35),
                                  (float)((double)g_FrameTime * dVar33));
      pfVar4[5] = (float)dVar25;
      dVar25 = (double)MB_randRangeFloat
                                 ((float)(longlong)(animationSpeed * 90.5),
                                  (float)(longlong)(animationSpeed * 150.5));
      pfVar4[6] = (float)(int)dVar25;
      moby->state = '\x04';
    }
  }
  else if (bVar1 < 5) {
    pfVar4[2] = -(g_FrameTimeSq * 10.8 - pfVar4[2]);
    fVar3 = (moby->rotation).x;
    (moby->pos).x = (moby->pos).x + *pfVar4;
    (moby->pos).y = (moby->pos).y + pfVar4[1];
    (moby->pos).z = (moby->pos).z + pfVar4[2];
    dVar25 = (double)FastWrapRot(fVar3,pfVar4[4]);
    (moby->rotation).x = (float)dVar25;
    dVar25 = (double)FastWrapRot((moby->rotation).y,pfVar4[5]);
    fVar6 = (moby->pos).x;
    (moby->rotation).y = (float)dVar25;
    uVar7 = (int)fVar6 >> 0x1f;
    iVar24 = (uVar7 >> 1 ^ (uint)fVar6) - uVar7;
    if ((((iVar24 < 0x41400000) || (0x447cc000 < iVar24)) ||
        (fVar6 = (moby->pos).y, uVar7 = (int)fVar6 >> 0x1f,
        iVar24 = (uVar7 >> 1 ^ (uint)fVar6) - uVar7, 0x447cc000 < iVar24 || iVar24 < 0x41400000)) ||
       ((fVar6 = (moby->pos).z, uVar7 = (int)fVar6 >> 0x1f,
        iVar24 = (uVar7 >> 1 ^ (uint)fVar6) - uVar7, iVar24 < 0x41400000 || (0x447cc000 < iVar24))))
    {
      DeleteMoby(moby);
    }
    else {
      iVar24 = MB_randInt(3);
      if (iVar24 == 0) {
        local_e0[0] = 0x2f000000;
        local_e0[1] = 0x3f000000;
        lVar21 = MB_randInt(2);
        dVar25 = (double)animationSpeed;
        uVar26 = 0x41186a0000000000;
        uVar5 = *(undefined4 *)((int)local_e0 + (int)(lVar21 << 2));
        local_d8 = (longlong)(int)(dVar25 * 20.5);
        MB_randRange
                  (local_d8,dVar25,0x41186a0000000000,(int)(dVar25 * 15.5),(int)(dVar25 * 20.5));
        local_d8 = (longlong)(int)(animationSpeed * 30.5);
        MB_randRange((int)(animationSpeed * 25.5),(int)(animationSpeed * 30.5));
        dVar25 = (double)MB_randRangeFloat(8.0,16.0);
        SpawnPart_11
                  (uVar26,(double)(float)(dVar25 * (double)g_FrameTime),lVar20 + 0x10,
                   local_130,0x2f3f3f7f,uVar5);
      }
      fVar6 = (moby->pos).z;
      uVar7 = (int)fVar6 >> 0x1f;
      if ((int)((uVar7 >> 1 ^ (uint)fVar6) - uVar7) < 0x41c80000) {
        iVar24 = 0;
        if (0 < DAT_0078e260) {
          dVar25 = -3.0;
          dVar33 = 3.0;
          do {
            MB_randRot();
            MB_randRangeFloat((float)dVar25,(float)dVar33);
            MB_randRangeFloat((float)dVar25,(float)dVar33);
            uVar19 = DAT_0078e268;
            uVar5 = DAT_0078e264;
            local_d8 = (longlong)(DAT_0078e27c << 1);
            dVar35 = (double)MB_randRangeFloat
                                       ((float)(longlong)DAT_0078e27c,(float)local_d8);
            uVar26 = FastDoubleToInt((double)(float)(dVar35 * (double)animationSpeed));
            local_d8 = (longlong)(DAT_0078e280 << 1);
            dVar35 = (double)MB_randRangeFloat
                                       ((float)(longlong)DAT_0078e280,(float)local_d8);
            uVar22 = FastDoubleToInt((double)(float)(dVar35 * (double)animationSpeed));
            local_d8 = (longlong)(DAT_0078e284 << 1);
            dVar35 = (double)MB_randRangeFloat
                                       ((float)(longlong)DAT_0078e284,(float)local_d8);
            uVar23 = FastDoubleToInt((double)(float)(dVar35 * (double)animationSpeed));
            SpawnPart_2(local_100,local_120,local_110,uVar5,uVar19,uVar26,uVar22,uVar23);
            iVar24 = iVar24 + 1;
          } while (iVar24 < DAT_0078e260);
        }
        *pfVar4 = *pfVar4 * 0.45;
        pfVar4[1] = pfVar4[1] * 0.45;
        pfVar4[2] = pfVar4[2] * 0.45;
        pfVar4[4] = pfVar4[4] * 0.9;
        pfVar4[5] = pfVar4[5] * 0.9;
        moby->state = '\x05';
      }
      else {
        iVar24 = CollSphere(0x4008000000000000,lVar20 + 0x10,&DAT_002439d0,2,lVar20);
        if ((iVar24 != 0) && (iVar24 = CollHotspot(), iVar24 == -1)) {
          MB_SpawnExplosionSparks
                    (0x4010000000000000,0x402a000000000000,lVar20,lVar20 + 0x10);
          uVar26 = 0;
          iVar24 = 0;
          dVar25 = -1.399999976158142;
          dVar33 = 1.399999976158142;
          dVar35 = -1.600000023841858;
          dVar27 = 1.600000023841858;
          dVar28 = 5.0;
          dVar29 = 9.0;
          dVar30 = 0.5;
          dVar31 = 1.0;
          dVar32 = 2.5;
          dVar34 = 0.30000001192092896;
          dVar36 = 0.6000000238418579;
          do {
            MB_randRangeFloat((float)dVar25,(float)dVar33);
            MB_randRangeFloat((float)dVar35,(float)dVar27);
            MB_randRangeFloat((float)dVar25,(float)dVar33);
            MB_randRangeFloat((float)dVar28,(float)dVar29);
            *pfVar4 = (float)((double)*pfVar4 * dVar30);
            pfVar4[2] = (float)((double)pfVar4[2] * dVar30);
            pfVar4[1] = (float)((double)pfVar4[1] * dVar30);
            MB_randRangeFloat((float)dVar31,(float)dVar32);
            FUN_00341590(lVar20);
            if (iVar24 % 3 == 0) {
              uVar22 = MB_randRangeFloat((float)dVar34,(float)dVar36);
              MB_SpawnExplosionSparks(uVar22,uVar26,lVar20,local_f0);
            }
            iVar24 = iVar24 + 1;
          } while (iVar24 < 0x14);
          DeleteMoby(moby);
        }
      }
    }
  }
  else if (bVar1 < 6) {
    pfVar4[2] = -(g_FrameTimeSq * 10.8 * 0.5 - pfVar4[2]);
    fVar3 = (moby->rotation).x;
    (moby->pos).x = (moby->pos).x + *pfVar4;
    (moby->pos).y = (moby->pos).y + pfVar4[1];
    (moby->pos).z = (moby->pos).z + pfVar4[2];
    dVar25 = (double)FastWrapRot(fVar3,pfVar4[4]);
    (moby->rotation).x = (float)dVar25;
    dVar25 = (double)FastWrapRot((moby->rotation).y,pfVar4[5]);
    fVar6 = (moby->pos).x;
    (moby->rotation).y = (float)dVar25;
    uVar7 = (int)fVar6 >> 0x1f;
    iVar24 = (uVar7 >> 1 ^ (uint)fVar6) - uVar7;
    if ((((iVar24 < 0x41400000) || (0x447cc000 < iVar24)) ||
        (fVar6 = (moby->pos).y, uVar7 = (int)fVar6 >> 0x1f,
        iVar24 = (uVar7 >> 1 ^ (uint)fVar6) - uVar7, 0x447cc000 < iVar24 || iVar24 < 0x41400000)) ||
       ((fVar6 = (moby->pos).z, uVar7 = (int)fVar6 >> 0x1f,
        iVar24 = (uVar7 >> 1 ^ (uint)fVar6) - uVar7, iVar24 < 0x41400000 || (0x447cc000 < iVar24))))
    {
      DeleteMoby(moby);
    }
  }
  return;
}


// 0x024477c (0x14 bytes)
void M1314_0024477c(void)

{
  DAT_0078e2dc = 0x10000;
  return;
}


