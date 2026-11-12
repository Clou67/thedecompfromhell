// game/update/moby154.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x295968-0x296444
#include "game/update/moby154.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/space.h"
#include "game/update/moby200.h"
#include "idol/fastfunc.h"

// 0x0295968 (0x14 bytes)
void M154_00295968(void)

{
  DAT_007ab57c = 0x10000;
  return;
}


// 0x02959f8 (0xa4c bytes)
/* Moby 154 */

void UpdateMoby_154(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  f32 fVar4;
  float fVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  char cVar8;
  ulonglong uVar9;
  longlong lVar10;
  CollDamageOut *pCVar13;
  longlong lVar11;
  ulonglong uVar12;
  int iVar14;
  CollDamageOut *pCVar15;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  longlong lVar16;
  ulonglong unaff_r27;
  longlong lVar17;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  int iVar18;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  ulonglong in_f14;
  double dVar24;
  ulonglong in_f15;
  double dVar25;
  ulonglong in_f16;
  double dVar26;
  ulonglong in_f17;
  double dVar27;
  ulonglong in_f18;
  double dVar28;
  ulonglong in_f19;
  double dVar29;
  ulonglong in_f20;
  double dVar30;
  ulonglong in_f21;
  double dVar31;
  ulonglong in_f22;
  double dVar32;
  ulonglong in_f23;
  double dVar33;
  ulonglong in_f24;
  double dVar34;
  ulonglong in_f25;
  double dVar35;
  ulonglong in_f26;
  double dVar36;
  ulonglong in_f27;
  double dVar37;
  ulonglong in_f28;
  double dVar38;
  ulonglong in_f29;
  double dVar39;
  ulonglong in_f30;
  double dVar40;
  ulonglong in_f31;
  double dVar41;
  
  lVar10 = (longlong)(int)moby;
  uVar9 = ZEXT48(&stack0x00000000);
  puVar7 = (ulonglong *)(uVar9 - 0x2a0);
  *puVar7 = uVar9;
  puVar7[0x56] = in_LR;
  puVar7[0x42] = in_f14;
  puVar7[0x43] = in_f15;
  puVar7[0x44] = in_f16;
  puVar7[0x45] = in_f17;
  puVar7[0x46] = in_f18;
  puVar7[0x47] = in_f19;
  puVar7[0x48] = in_f20;
  puVar7[0x49] = in_f21;
  puVar7[0x4a] = in_f22;
  puVar7[0x4b] = in_f23;
  puVar7[0x4c] = in_f24;
  puVar7[0x4d] = in_f25;
  puVar7[0x4e] = in_f26;
  puVar7[0x4f] = in_f27;
  puVar7[0x50] = in_f28;
  puVar7[0x51] = in_f29;
  puVar7[0x52] = in_f30;
  puVar7[0x53] = in_f31;
  puVar7[0x41] = unaff_r31;
  cVar8 = g_heroType;
  puVar7[0x40] = unaff_r30;
  puVar7[0x3f] = unaff_r29;
  puVar7[0x3e] = unaff_r28;
  puVar7[0x3d] = unaff_r27;
  puVar7[0x3c] = unaff_r26;
  puVar7[0x3b] = unaff_r25;
  puVar7[0x3a] = unaff_r24;
  puVar7[0x39] = unaff_r23;
  puVar7[0x38] = unaff_r22;
  if ((cVar8 == '\x02') || (moby->state != '\x01')) {
    iVar18 = 0;
    pCVar15 = CollDamage;
    do {
      pCVar13 = pCVar15;
      if ((pCVar13->pVictimMoby == moby) && ((pCVar13->damageFlags & 0x80000) != 0)) break;
      iVar18 = iVar18 + 1;
      pCVar15 = pCVar13 + 1;
      pCVar13 = (CollDamageOut *)0x0;
    } while (iVar18 < 0x40);
    if (pCVar13 == (CollDamageOut *)0x0) {
      moby->damage = -1;
      if (moby->state == '\0') {
        moby->drawDistance = 0x80;
        moby->updateDistance = -1;
        moby->state = '\x01';
        if ((g_SeenPlanets.Kalebo != 0) &&
           ((*(uint *)(&g_LevelObjBits +
                      Level * 0x100 + (int)((longlong)((int)(short)moby->uid >> 5) << 2)) &
            1 << (moby->uid & 0x1f)) != 0)) {
          DeleteMoby(moby);
        }
      }
    }
    else {
      *(undefined4 *)((int)puVar7 + 0x16c) = 200;
      *(undefined4 *)(puVar7 + 0x2e) = 0xcd;
      *(undefined4 *)((int)puVar7 + 0x174) = 0xce;
      *(undefined4 *)(puVar7 + 0x2f) = 0xd2;
      moby->damage = -1;
      fVar5 = g_FrameTime;
      fVar1 = (pCVar13->impact).y;
      fVar2 = (pCVar13->impact).x;
      fVar3 = (pCVar13->impact).z;
      dVar39 = 0.0;
      puVar7[0x33] = 0x4024000000000000;
      fVar1 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      if (fVar1 == 0.0) {
        *(float *)(puVar7 + 0x1a) = fVar2;
        *(float *)((int)puVar7 + 0xd4) = (pCVar13->impact).y;
        *(float *)(puVar7 + 0x1b) = (pCVar13->impact).z;
        fVar1 = (pCVar13->impact).w;
        *(undefined4 *)(puVar7 + 0x1b) = 0;
        *(undefined4 *)((int)puVar7 + 0xd4) = 0;
        *(undefined4 *)(puVar7 + 0x1a) = 0;
        dVar24 = dVar39;
        dVar25 = dVar39;
        dVar26 = dVar39;
      }
      else {
        fVar1 = (fVar5 * 10.0) / fVar1;
        dVar24 = (double)(fVar2 * fVar1);
        *(float *)(puVar7 + 0x1a) = fVar2 * fVar1;
        fVar2 = (pCVar13->impact).y * fVar1;
        dVar25 = (double)fVar2;
        *(float *)((int)puVar7 + 0xd4) = fVar2;
        fVar1 = (pCVar13->impact).z * fVar1;
        dVar26 = (double)fVar1;
        *(float *)(puVar7 + 0x1b) = fVar1;
        fVar1 = (pCVar13->impact).w;
      }
      *(float *)((int)puVar7 + 0xdc) = fVar1;
      *(float *)((int)puVar7 + 0xec) = fVar1;
      *(float *)(puVar7 + 0x1c) = (float)(dVar24 * 2.0);
      *(float *)((int)puVar7 + 0xe4) = (float)(dVar25 * 2.0);
      *(float *)(puVar7 + 0x1d) = (float)(dVar26 * 2.0);
      fVar1 = (pCVar13->ip_).y;
      fVar2 = (pCVar13->ip_).x;
      fVar3 = (pCVar13->ip_).z;
      puVar7[0x31] = 0x4000000000000000;
      if (SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) == 0.0) {
        *(f32 *)(puVar7 + 0x20) = (moby->pos).x;
        *(f32 *)((int)puVar7 + 0x104) = (moby->pos).y;
        fVar4 = (moby->pos).w;
        *(float *)(puVar7 + 0x21) = (moby->pos).z + 6.0;
      }
      else {
        *(float *)(puVar7 + 0x20) = fVar2;
        *(float *)((int)puVar7 + 0x104) = (pCVar13->ip_).y;
        *(float *)(puVar7 + 0x21) = (pCVar13->ip_).z;
        fVar4 = (pCVar13->ip_).w;
      }
      *(f32 *)((int)puVar7 + 0x10c) = fVar4;
      iVar18 = 0;
      lVar17 = uVar9 - 0x1a0;
      lVar16 = uVar9 - 0x1e0;
      dVar30 = 1.5707963705062866;
      dVar31 = 3.141592502593994;
      dVar32 = -3.141592502593994;
      dVar33 = -0.16666656732559204;
      dVar34 = 0.008333025500178337;
      dVar35 = -0.0001980741071747616;
      dVar36 = 2.601886990305502e-06;
      dVar37 = -3.0;
      dVar41 = 3.0;
      dVar38 = 1.0;
      puVar7[0x30] = 0x3ff921fb40000000;
      dVar40 = 7.0;
      dVar26 = 5.0;
      dVar24 = 0.75;
      dVar25 = 1.25;
      dVar27 = 0.10000000149011612;
      dVar28 = 0.30000001192092896;
      dVar29 = 0.15000000596046448;
      do {
        *(float *)(puVar7 + 0x34) = (float)dVar29;
        dVar29 = (double)MB_randRangeFloat((moby->rotation).z,(float)dVar30);
        dVar19 = (double)(float)(dVar29 + (double)puVar7[0x30]);
        dVar29 = (double)(float)(dVar31 - dVar19);
        if (dVar19 - (double)(float)(dVar31 - dVar19) < 0.0) {
          dVar29 = dVar19;
        }
        dVar22 = (double)(float)(dVar32 - dVar19);
        if ((double)(float)(dVar32 - dVar19) - dVar29 < 0.0) {
          dVar22 = dVar29;
        }
        dVar29 = (double)(float)(dVar22 * dVar22);
        dVar23 = (double)(float)(dVar29 * (double)(float)(dVar29 * dVar22));
        dVar19 = (double)(float)(dVar29 * dVar23);
        dVar19 = (double)(float)((double)(float)(dVar29 * dVar19) * dVar36 +
                                (double)(float)(dVar19 * dVar35 +
                                               (double)(float)(dVar23 * dVar34 +
                                                              (double)(float)((double)(float)(dVar29
                                                                                             * 
                                                  dVar22) * dVar33 + dVar22))));
        dVar29 = (double)MB_randRangeFloat((float)dVar37,(float)dVar41);
        fVar1 = (moby->rotation).z;
        *(float *)(puVar7 + 0x1e) = (float)(dVar19 * dVar29);
        dVar19 = (double)MB_randRangeFloat(fVar1,(float)dVar30);
        dVar29 = (double)(float)(dVar31 - dVar19);
        if (dVar19 - (double)(float)(dVar31 - dVar19) < 0.0) {
          dVar29 = dVar19;
        }
        dVar22 = (double)(float)(dVar32 - dVar19);
        if ((double)(float)(dVar32 - dVar19) - dVar29 < 0.0) {
          dVar22 = dVar29;
        }
        dVar29 = (double)(float)(dVar22 * dVar22);
        dVar23 = (double)(float)(dVar29 * (double)(float)(dVar29 * dVar22));
        dVar19 = (double)(float)(dVar29 * dVar23);
        dVar19 = (double)(float)((double)(float)(dVar29 * dVar19) * dVar36 +
                                (double)(float)(dVar19 * dVar35 +
                                               (double)(float)(dVar23 * dVar34 +
                                                              (double)(float)((double)(float)(dVar29
                                                                                             * 
                                                  dVar22) * dVar33 + dVar22))));
        dVar29 = (double)MB_randRangeFloat((float)dVar37,(float)dVar41);
        *(undefined4 *)(puVar7 + 0x1f) = 0;
        *(float *)((int)puVar7 + 0xf4) = (float)(dVar19 * dVar29);
        dVar29 = (double)MB_randRangeFloat((float)dVar38,(float)dVar40);
        *(float *)(puVar7 + 0x1f) = (float)dVar29;
        FastVecAddSelf(uVar9 - 400,uVar9 - 0x1b0,lVar10 + 0x10);
        FastVecSub(uVar9 - 0x180,lVar17,uVar9 - 0x1b0);
        fVar2 = *(float *)((int)puVar7 + 0x124);
        fVar3 = *(float *)(puVar7 + 0x24);
        fVar5 = *(float *)(puVar7 + 0x25);
        dVar29 = (double)g_FrameTime;
        *(float *)(puVar7 + 0x18) = fVar3;
        *(float *)((int)puVar7 + 0xc4) = fVar2;
        *(float *)(puVar7 + 0x19) = fVar5;
        *(undefined4 *)((int)puVar7 + 0xcc) = *(undefined4 *)((int)puVar7 + 300);
        dVar19 = (double)SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2);
        fVar1 = (float)((double)(float)(dVar29 * dVar26) / dVar19);
        dVar29 = dVar39;
        if (dVar39 - dVar19 < 0.0) {
          dVar29 = (double)(fVar3 * fVar1);
        }
        dVar22 = dVar39;
        if (dVar39 - dVar19 < 0.0) {
          dVar22 = (double)(fVar2 * fVar1);
        }
        dVar23 = dVar39;
        if (dVar39 - dVar19 < 0.0) {
          dVar23 = (double)(fVar5 * fVar1);
        }
        if (dVar19 - dVar39 < 0.0) {
          dVar29 = (double)(fVar3 * fVar1);
        }
        if (dVar19 - dVar39 < 0.0) {
          dVar22 = (double)(fVar2 * fVar1);
        }
        if (dVar19 - dVar39 < 0.0) {
          dVar23 = (double)(fVar5 * fVar1);
        }
        *(float *)(puVar7 + 0x18) = (float)dVar29;
        *(float *)((int)puVar7 + 0xc4) = (float)dVar22;
        *(float *)(puVar7 + 0x19) = (float)dVar23;
        FastVecAddSelf(uVar9 - 0x170,lVar16,uVar9 - 0x1c0);
        *(float *)(puVar7 + 0x19) =
             (float)((double)g_FrameTime * dVar41 + (double)*(float *)(puVar7 + 0x19));
        dVar29 = (double)MB_randRangeFloat((float)dVar24,(float)dVar25);
        *(float *)(puVar7 + 0x18) = (float)((double)*(float *)(puVar7 + 0x18) * dVar29);
        *(float *)((int)puVar7 + 0xc4) = (float)((double)*(float *)((int)puVar7 + 0xc4) * dVar29);
        *(float *)(puVar7 + 0x19) = (float)((double)*(float *)(puVar7 + 0x19) * dVar29);
        lVar11 = MB_randInt(4);
        uVar6 = *(undefined4 *)((int)puVar7 + (int)(lVar11 << 2) + 0x16c);
        uVar20 = MB_randRangeFloat((float)dVar27,(float)dVar28);
        MB_randRange(100,0xa0);
        uVar21 = MB_randRangeFloat((float)dVar41,(float)dVar40);
        *(undefined4 *)(puVar7 + 6) = *(undefined4 *)(puVar7 + 0x1e);
        *(undefined4 *)(puVar7 + 7) = *(undefined4 *)(puVar7 + 0x1f);
        *(undefined4 *)(puVar7 + 8) = *(undefined4 *)(puVar7 + 0x18);
        *(undefined4 *)(puVar7 + 9) = *(undefined4 *)(puVar7 + 0x19);
        *(undefined4 *)((int)puVar7 + 0x34) = *(undefined4 *)((int)puVar7 + 0xf4);
        *(undefined4 *)((int)puVar7 + 0x3c) = *(undefined4 *)((int)puVar7 + 0xfc);
        *(undefined4 *)((int)puVar7 + 0x44) = *(undefined4 *)((int)puVar7 + 0xc4);
        *(undefined4 *)((int)puVar7 + 0x4c) = *(undefined4 *)((int)puVar7 + 0xcc);
        dVar29 = (double)*(float *)(puVar7 + 0x34);
        puVar7[0x10] = 1;
        FUN_00425540(uVar20,uVar21,dVar29,puVar7[0x31],puVar7[6],puVar7[7],puVar7[8],puVar7[9],uVar6
                    );
        iVar18 = iVar18 + 1;
      } while (iVar18 < 0x19);
      *(undefined4 *)((int)puVar7 + 0xcc) = 0;
      *(undefined4 *)(puVar7 + 0x19) = 0;
      *(undefined4 *)((int)puVar7 + 0xc4) = 0;
      *(undefined4 *)(puVar7 + 0x18) = 0;
      puVar7[0x12] = 0;
      puVar7[0x14] = 1;
      puVar7[0x15] = 1;
      puVar7[0x16] = 0xffffffffffffffff;
      puVar7[0x17] = 0;
      MB_genericExplosion
                (dVar39,dVar39,puVar7[0x33],dVar26,0x40f86a0000000000,dVar41,0x402e000000000000,
                 lVar10,lVar16,lVar17);
      iVar18 = 0;
      dVar27 = 0.25;
      dVar29 = 0.5;
      fVar1 = 210000.0;
      dVar28 = 180.5;
      puVar7[0x32] = 0x4016000000000000;
      do {
        dVar19 = (double)fVar1;
        *(float *)(puVar7 + 0x37) = fVar1;
        *(float *)(puVar7 + 0x34) = (float)dVar28;
        dVar28 = (double)MB_randRangeFloat((moby->rotation).z,(float)dVar30);
        dVar40 = (double)(float)(dVar28 + (double)puVar7[0x30]);
        dVar28 = (double)(float)(dVar31 - dVar40);
        if (dVar40 - (double)(float)(dVar31 - dVar40) < 0.0) {
          dVar28 = dVar40;
        }
        dVar22 = (double)(float)(dVar32 - dVar40);
        if ((double)(float)(dVar32 - dVar40) - dVar28 < 0.0) {
          dVar22 = dVar28;
        }
        dVar28 = (double)(float)(dVar22 * dVar22);
        dVar23 = (double)(float)(dVar28 * (double)(float)(dVar28 * dVar22));
        dVar40 = (double)(float)(dVar28 * dVar23);
        dVar40 = (double)(float)((double)(float)(dVar28 * dVar40) * dVar36 +
                                (double)(float)(dVar40 * dVar35 +
                                               (double)(float)(dVar23 * dVar34 +
                                                              (double)(float)((double)(float)(dVar28
                                                                                             * 
                                                  dVar22) * dVar33 + dVar22))));
        dVar28 = (double)MB_randRangeFloat((float)dVar37,(float)dVar41);
        fVar1 = (moby->rotation).z;
        *(float *)(puVar7 + 0x1e) = (float)(dVar40 * dVar28);
        dVar40 = (double)MB_randRangeFloat(fVar1,(float)dVar30);
        dVar28 = (double)(float)(dVar31 - dVar40);
        if (dVar40 - (double)(float)(dVar31 - dVar40) < 0.0) {
          dVar28 = dVar40;
        }
        dVar22 = (double)(float)(dVar32 - dVar40);
        if ((double)(float)(dVar32 - dVar40) - dVar28 < 0.0) {
          dVar22 = dVar28;
        }
        dVar28 = (double)(float)(dVar22 * dVar22);
        dVar23 = (double)(float)(dVar28 * (double)(float)(dVar28 * dVar22));
        dVar40 = (double)(float)(dVar28 * dVar23);
        dVar40 = (double)(float)((double)(float)(dVar28 * dVar40) * dVar36 +
                                (double)(float)(dVar40 * dVar35 +
                                               (double)(float)(dVar23 * dVar34 +
                                                              (double)(float)((double)(float)(dVar28
                                                                                             * 
                                                  dVar22) * dVar33 + dVar22))));
        dVar28 = (double)MB_randRangeFloat((float)dVar37,(float)dVar41);
        fVar1 = (moby->pos).x;
        fVar2 = (moby->pos).y;
        *(f32 *)(puVar7 + 0x1f) = (moby->pos).z;
        *(float *)(puVar7 + 0x1e) = *(float *)(puVar7 + 0x1e) + fVar1;
        *(float *)((int)puVar7 + 0xf4) = (float)(dVar40 * dVar28 + (double)fVar2);
        dVar28 = (double)MB_randRangeFloat((float)dVar38,(float)(double)puVar7[0x32]);
        *(float *)(puVar7 + 0x1f) = (float)((double)*(float *)(puVar7 + 0x1f) + dVar28);
        FastVecSub(uVar9 - 0x160,lVar17,uVar9 - 0x1b0);
        fVar2 = *(float *)((int)puVar7 + 0x144);
        fVar3 = *(float *)(puVar7 + 0x28);
        fVar5 = *(float *)(puVar7 + 0x29);
        dVar28 = (double)g_FrameTime;
        *(float *)(puVar7 + 0x18) = fVar3;
        *(float *)((int)puVar7 + 0xc4) = fVar2;
        *(float *)(puVar7 + 0x19) = fVar5;
        *(undefined4 *)((int)puVar7 + 0xcc) = *(undefined4 *)((int)puVar7 + 0x14c);
        dVar40 = (double)SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2);
        fVar1 = (float)((double)(float)(dVar28 * dVar26) / dVar40);
        dVar28 = dVar39;
        if (dVar39 - dVar40 < 0.0) {
          dVar28 = (double)(fVar3 * fVar1);
        }
        dVar22 = dVar39;
        if (dVar39 - dVar40 < 0.0) {
          dVar22 = (double)(fVar2 * fVar1);
        }
        dVar23 = dVar39;
        if (dVar39 - dVar40 < 0.0) {
          dVar23 = (double)(fVar5 * fVar1);
        }
        if (dVar40 - dVar39 < 0.0) {
          dVar28 = (double)(fVar3 * fVar1);
        }
        if (dVar40 - dVar39 < 0.0) {
          dVar22 = (double)(fVar2 * fVar1);
        }
        if (dVar40 - dVar39 < 0.0) {
          dVar23 = (double)(fVar5 * fVar1);
        }
        *(float *)(puVar7 + 0x18) = (float)dVar28;
        *(float *)((int)puVar7 + 0xc4) = (float)dVar22;
        *(float *)(puVar7 + 0x19) = (float)dVar23;
        FastVecAddSelf(uVar9 - 0x150,lVar16,uVar9 - 0x1d0);
        dVar28 = (double)MB_randRangeFloat((float)dVar24,(float)dVar25);
        *(float *)(puVar7 + 0x18) = (float)((double)*(float *)(puVar7 + 0x18) * dVar28);
        *(float *)((int)puVar7 + 0xc4) = (float)((double)*(float *)((int)puVar7 + 0xc4) * dVar28);
        *(float *)(puVar7 + 0x19) = (float)((double)*(float *)(puVar7 + 0x19) * dVar28);
        dVar28 = (double)MB_randRangeFloat((float)dVar27,(float)dVar38);
        uVar20 = 0x7f000000;
        TweenColor((float)dVar28,0x7f000000,0x7f182030);
        dVar28 = (double)MB_randRangeFloat((float)dVar29,(float)dVar38);
        uVar21 = 0;
        TweenColor((float)dVar28,0,0x5f5f5f);
        dVar28 = (double)MB_randRangeFloat((float)dVar38,(float)dVar41);
        dVar40 = (double)(float)(dVar28 * dVar19);
        dVar28 = (double)*(float *)(puVar7 + 0x34);
        puVar7[0x35] = (longlong)(int)((double)animationSpeed * dVar28);
        uVar6 = *(undefined4 *)((int)puVar7 + 0x1ac);
        lVar11 = MB_randInt(3);
        *(undefined4 *)((int)puVar7 + 0x164) = 1;
        *(undefined4 *)(puVar7 + 0x2c) = 0;
        uVar12 = lVar11 * 4 + (uVar9 - 0x2a0);
        *(undefined4 *)(puVar7 + 0x2d) = 2;
        iVar14 = SpawnPart_16
                           (dVar40,uVar9 - 0x1b0,lVar16,uVar20,uVar21,uVar12 & 0xffffffff,uVar6,
                            *(undefined4 *)((int)uVar12 + 0x160));
        fVar1 = *(float *)(puVar7 + 0x37);
        if (iVar14 != 0) {
          *(float *)(iVar14 + 0x2c) = (float)((double)(moby->pos).z - dVar29);
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 < 0x14);
      MB_SpawnBoltsFromCrate(lVar10,0,0xffffffffffffffff);
      DeleteMoby(moby);
    }
  }
  return;
}


