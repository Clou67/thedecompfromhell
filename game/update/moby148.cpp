// game/update/moby148.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x28bf80-0x28cb80
// shared update function UpdateMoby_{148_255}; registered for oClasses 148, 255
#include "game/update/moby148.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/space.h"
#include "game/update/moby200.h"
#include "idol/fastfunc.h"

// shared update function, registered for oClasses 148, 255
// 0x028bf80 (0xc00 bytes)
/* Moby 148
   Moby 255 */

void UpdateMoby_148(MobyInstance *moby)

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
  CollDamageOut *pCVar12;
  longlong lVar11;
  int iVar13;
  int iVar14;
  CollDamageOut *pCVar16;
  ulonglong uVar15;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  longlong lVar17;
  ulonglong unaff_r25;
  longlong lVar18;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  longlong lVar19;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  ulonglong in_f14;
  double dVar32;
  ulonglong in_f15;
  double dVar33;
  ulonglong in_f16;
  double dVar34;
  ulonglong in_f17;
  double dVar35;
  ulonglong in_f18;
  double dVar36;
  ulonglong in_f19;
  double dVar37;
  ulonglong in_f20;
  undefined8 uVar38;
  ulonglong in_f21;
  double dVar39;
  ulonglong in_f22;
  double dVar40;
  ulonglong in_f23;
  double dVar41;
  ulonglong in_f24;
  double dVar42;
  ulonglong in_f25;
  double dVar43;
  ulonglong in_f26;
  double dVar44;
  ulonglong in_f27;
  double dVar45;
  ulonglong in_f28;
  double dVar46;
  ulonglong in_f29;
  double dVar47;
  ulonglong in_f30;
  double dVar48;
  ulonglong in_f31;
  
  lVar10 = (longlong)(int)moby;
  uVar9 = ZEXT48(&stack0x00000000);
  puVar7 = (ulonglong *)(uVar9 - 0x2b0);
  *puVar7 = uVar9;
  puVar7[0x58] = in_LR;
  puVar7[0x44] = in_f14;
  puVar7[0x45] = in_f15;
  puVar7[0x46] = in_f16;
  puVar7[0x47] = in_f17;
  puVar7[0x48] = in_f18;
  puVar7[0x49] = in_f19;
  puVar7[0x4a] = in_f20;
  puVar7[0x4b] = in_f21;
  puVar7[0x4c] = in_f22;
  puVar7[0x4d] = in_f23;
  puVar7[0x4e] = in_f24;
  puVar7[0x4f] = in_f25;
  puVar7[0x50] = in_f26;
  puVar7[0x51] = in_f27;
  puVar7[0x52] = in_f28;
  puVar7[0x53] = in_f29;
  puVar7[0x54] = in_f30;
  puVar7[0x55] = in_f31;
  puVar7[0x43] = unaff_r31;
  cVar8 = g_heroType;
  puVar7[0x42] = unaff_r30;
  puVar7[0x41] = unaff_r29;
  puVar7[0x40] = unaff_r28;
  puVar7[0x3f] = unaff_r27;
  puVar7[0x3e] = unaff_r26;
  puVar7[0x3d] = unaff_r25;
  puVar7[0x3c] = unaff_r24;
  puVar7[0x3b] = unaff_r23;
  puVar7[0x3a] = unaff_r22;
  puVar7[0x39] = unaff_r21;
  puVar7[0x38] = unaff_r20;
  if ((cVar8 == '\x02') || (moby->state != '\x01')) {
    iVar13 = 0;
    pCVar16 = CollDamage;
    do {
      pCVar12 = pCVar16;
      if ((pCVar12->pVictimMoby == moby) && ((pCVar12->damageFlags & 0x80000) != 0)) break;
      iVar13 = iVar13 + 1;
      pCVar16 = pCVar12 + 1;
      pCVar12 = (CollDamageOut *)0x0;
    } while (iVar13 < 0x40);
    if (pCVar12 == (CollDamageOut *)0x0) {
      moby->damage = -1;
      if (moby->state == '\0') {
        moby->drawDistance = 0x80;
        moby->updateDistance = -1;
        moby->state = '\x01';
        iVar13 = Level * 0x100;
        moby->scale = moby->scale * 2.0;
        if ((*(uint *)(&g_LevelObjBits + iVar13 + (int)((longlong)((int)(short)moby->uid >> 5) << 2))
            & 1 << (moby->uid & 0x1f)) != 0 && g_SeenPlanets.Kalebo != 0) {
          DeleteMoby(moby);
        }
      }
    }
    else {
      *(undefined4 *)((int)puVar7 + 0x18c) = 200;
      *(undefined4 *)(puVar7 + 0x32) = 0xcd;
      *(undefined4 *)((int)puVar7 + 0x194) = 0xce;
      *(undefined4 *)(puVar7 + 0x33) = 0xd2;
      moby->damage = -1;
      fVar1 = (pCVar12->impact).y;
      fVar2 = (pCVar12->impact).x;
      fVar3 = (pCVar12->impact).z;
      dVar48 = 0.0;
      fVar5 = g_FrameTime * 10.0;
      *(undefined4 *)((int)puVar7 + 0x1ac) = 0x41200000;
      fVar1 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      if (fVar1 == 0.0) {
        *(float *)(puVar7 + 0x1a) = fVar2;
        *(float *)((int)puVar7 + 0xd4) = (pCVar12->impact).y;
        *(float *)(puVar7 + 0x1b) = (pCVar12->impact).z;
        fVar1 = (pCVar12->impact).w;
        *(undefined4 *)(puVar7 + 0x1b) = 0;
        *(undefined4 *)((int)puVar7 + 0xd4) = 0;
        *(undefined4 *)(puVar7 + 0x1a) = 0;
        dVar32 = dVar48;
        dVar33 = dVar48;
        dVar34 = dVar48;
      }
      else {
        fVar5 = fVar5 / fVar1;
        dVar32 = (double)(fVar2 * fVar5);
        *(float *)(puVar7 + 0x1a) = fVar2 * fVar5;
        fVar1 = (pCVar12->impact).y * fVar5;
        dVar33 = (double)fVar1;
        *(float *)((int)puVar7 + 0xd4) = fVar1;
        fVar5 = (pCVar12->impact).z * fVar5;
        dVar34 = (double)fVar5;
        *(float *)(puVar7 + 0x1b) = fVar5;
        fVar1 = (pCVar12->impact).w;
      }
      *(float *)((int)puVar7 + 0xdc) = fVar1;
      *(float *)((int)puVar7 + 0xec) = fVar1;
      *(float *)(puVar7 + 0x1c) = (float)(dVar32 * 2.0);
      *(float *)((int)puVar7 + 0xe4) = (float)(dVar33 * 2.0);
      *(float *)(puVar7 + 0x1d) = (float)(dVar34 * 2.0);
      fVar1 = (pCVar12->ip_).y;
      fVar2 = (pCVar12->ip_).x;
      fVar3 = (pCVar12->ip_).z;
      *(undefined4 *)((int)puVar7 + 0x19c) = 0x40000000;
      if (SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) == 0.0) {
        *(f32 *)(puVar7 + 0x20) = (moby->pos).x;
        *(f32 *)((int)puVar7 + 0x104) = (moby->pos).y;
        fVar4 = (moby->pos).w;
        *(float *)(puVar7 + 0x21) = (moby->pos).z + 6.0;
      }
      else {
        *(float *)(puVar7 + 0x20) = fVar2;
        *(float *)((int)puVar7 + 0x104) = (pCVar12->ip_).y;
        *(float *)(puVar7 + 0x21) = (pCVar12->ip_).z;
        fVar4 = (pCVar12->ip_).w;
      }
      *(f32 *)((int)puVar7 + 0x10c) = fVar4;
      iVar13 = 0;
      lVar19 = uVar9 - 0x1c0;
      lVar18 = uVar9 - 0x1b0;
      lVar17 = uVar9 - 0x1f0;
      dVar35 = 0.5;
      dVar45 = 3.0;
      dVar39 = 3.141592502593994;
      dVar40 = -3.141592502593994;
      dVar41 = -0.16666656732559204;
      dVar42 = 0.008333025500178337;
      dVar43 = -0.0001980741071747616;
      dVar44 = 2.601886990305502e-06;
      dVar46 = 1.0;
      *(undefined4 *)(puVar7 + 0x35) = 0x3fc00000;
      puVar7[0x34] = 0x3ff921fb40000000;
      dVar47 = 7.0;
      dVar34 = 5.0;
      dVar32 = 0.75;
      dVar33 = 1.25;
      dVar36 = 0.10000000149011612;
      dVar37 = 0.30000001192092896;
      uVar38 = 0x3fc3333340000000;
      do {
        dVar20 = (double)MB_randRangeFloat((float)dVar35,*(float *)(puVar7 + 0x35));
        dVar21 = (double)MB_randRot();
        if (moby->oClass == 0x94) {
          dVar20 = (double)(float)(dVar20 * dVar45);
        }
        dVar24 = (double)(float)(dVar21 + (double)puVar7[0x34]);
        *(undefined4 *)(puVar7 + 0x1f) = 0;
        dVar25 = (double)(float)(dVar39 - dVar21);
        if (dVar21 - (double)(float)(dVar39 - dVar21) < 0.0) {
          dVar25 = dVar21;
        }
        dVar26 = (double)(float)(dVar39 - dVar24);
        if (dVar24 - (double)(float)(dVar39 - dVar24) < 0.0) {
          dVar26 = dVar24;
        }
        dVar27 = (double)(float)(dVar40 - dVar21);
        if ((double)(float)(dVar40 - dVar21) - dVar25 < 0.0) {
          dVar27 = dVar25;
        }
        dVar25 = (double)(float)(dVar27 * dVar27);
        dVar21 = (double)(float)(dVar40 - dVar24);
        if ((double)(float)(dVar40 - dVar24) - dVar26 < 0.0) {
          dVar21 = dVar26;
        }
        dVar26 = (double)(float)(dVar21 * dVar21);
        dVar28 = (double)(float)(dVar25 * (double)(float)(dVar25 * dVar27));
        dVar30 = (double)(float)(dVar25 * dVar28);
        dVar29 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar21));
        dVar24 = (double)(float)(dVar26 * dVar29);
        *(float *)((int)puVar7 + 0xf4) =
             (float)((double)(float)((double)(float)(dVar25 * dVar30) * dVar44 +
                                    (double)(float)(dVar30 * dVar43 +
                                                   (double)(float)(dVar28 * dVar42 +
                                                                  (double)(float)((double)(float)(
                                                  dVar25 * dVar27) * dVar41 + dVar27)))) * dVar20);
        *(float *)(puVar7 + 0x1e) =
             (float)((double)(float)((double)(float)(dVar26 * dVar24) * dVar44 +
                                    (double)(float)(dVar24 * dVar43 +
                                                   (double)(float)(dVar29 * dVar42 +
                                                                  (double)(float)((double)(float)(
                                                  dVar26 * dVar21) * dVar41 + dVar21)))) * dVar20);
        dVar20 = (double)MB_randRangeFloat((float)dVar46,(float)dVar47);
        *(float *)(puVar7 + 0x1f) = (float)dVar20;
        FastVecAddSelf(uVar9 - 0x1a0,lVar19,lVar10 + 0x10);
        FastVecSub(uVar9 - 400,lVar18,lVar19);
        fVar2 = *(float *)((int)puVar7 + 0x124);
        fVar3 = *(float *)(puVar7 + 0x24);
        fVar5 = *(float *)(puVar7 + 0x25);
        dVar20 = (double)g_FrameTime;
        *(float *)(puVar7 + 0x18) = fVar3;
        *(float *)((int)puVar7 + 0xc4) = fVar2;
        *(float *)(puVar7 + 0x19) = fVar5;
        *(undefined4 *)((int)puVar7 + 0xcc) = *(undefined4 *)((int)puVar7 + 300);
        dVar21 = (double)SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2);
        fVar1 = (float)((double)(float)(dVar20 * dVar34) / dVar21);
        dVar20 = dVar48;
        if (dVar48 - dVar21 < 0.0) {
          dVar20 = (double)(fVar3 * fVar1);
        }
        dVar25 = dVar48;
        if (dVar48 - dVar21 < 0.0) {
          dVar25 = (double)(fVar2 * fVar1);
        }
        dVar24 = dVar48;
        if (dVar48 - dVar21 < 0.0) {
          dVar24 = (double)(fVar5 * fVar1);
        }
        if (dVar21 - dVar48 < 0.0) {
          dVar20 = (double)(fVar3 * fVar1);
        }
        if (dVar21 - dVar48 < 0.0) {
          dVar25 = (double)(fVar2 * fVar1);
        }
        if (dVar21 - dVar48 < 0.0) {
          dVar24 = (double)(fVar5 * fVar1);
        }
        *(float *)(puVar7 + 0x18) = (float)dVar20;
        *(float *)((int)puVar7 + 0xc4) = (float)dVar25;
        *(float *)(puVar7 + 0x19) = (float)dVar24;
        FastVecAddSelf(uVar9 - 0x180,lVar17,uVar9 - 0x1d0);
        *(float *)(puVar7 + 0x19) =
             (float)((double)g_FrameTime * dVar45 + (double)*(float *)(puVar7 + 0x19));
        dVar20 = (double)MB_randRangeFloat((float)dVar32,(float)dVar33);
        *(float *)(puVar7 + 0x18) = (float)((double)*(float *)(puVar7 + 0x18) * dVar20);
        *(float *)((int)puVar7 + 0xc4) = (float)((double)*(float *)((int)puVar7 + 0xc4) * dVar20);
        *(float *)(puVar7 + 0x19) = (float)((double)*(float *)(puVar7 + 0x19) * dVar20);
        lVar11 = MB_randInt(4);
        uVar6 = *(undefined4 *)((int)puVar7 + (int)(lVar11 << 2) + 0x18c);
        uVar22 = MB_randRangeFloat((float)dVar36,(float)dVar37);
        MB_randRange(0x3c,100);
        uVar23 = MB_randRangeFloat((float)dVar45,(float)dVar47);
        *(undefined4 *)(puVar7 + 6) = *(undefined4 *)(puVar7 + 0x1e);
        *(undefined4 *)(puVar7 + 7) = *(undefined4 *)(puVar7 + 0x1f);
        *(undefined4 *)(puVar7 + 8) = *(undefined4 *)(puVar7 + 0x18);
        *(undefined4 *)(puVar7 + 9) = *(undefined4 *)(puVar7 + 0x19);
        *(undefined4 *)((int)puVar7 + 0x34) = *(undefined4 *)((int)puVar7 + 0xf4);
        *(undefined4 *)((int)puVar7 + 0x3c) = *(undefined4 *)((int)puVar7 + 0xfc);
        *(undefined4 *)((int)puVar7 + 0x44) = *(undefined4 *)((int)puVar7 + 0xc4);
        *(undefined4 *)((int)puVar7 + 0x4c) = *(undefined4 *)((int)puVar7 + 0xcc);
        puVar7[0x10] = 1;
        FUN_00425540(uVar22,uVar23,uVar38,(double)*(float *)((int)puVar7 + 0x19c),puVar7[6],
                     puVar7[7],puVar7[8],puVar7[9],uVar6);
        iVar13 = iVar13 + 1;
      } while (iVar13 < 0x19);
      dVar36 = (double)*(float *)((int)puVar7 + 0x1ac);
      if (moby->oClass == 0x94) {
        *(f32 *)(puVar7 + 0x1e) = (moby->pos).x;
        *(f32 *)((int)puVar7 + 0xf4) = (moby->pos).y;
        fVar1 = (moby->pos).z;
        dVar20 = (double)*(float *)((int)puVar7 + 0x19c);
        *(f32 *)((int)puVar7 + 0xfc) = (moby->pos).w;
        *(float *)(puVar7 + 0x1f) = (float)((double)fVar1 + dVar36);
        FastVecSub(uVar9 - 0x170,lVar18,lVar19);
        fVar2 = *(float *)((int)puVar7 + 0x144);
        fVar3 = *(float *)(puVar7 + 0x28);
        fVar5 = *(float *)(puVar7 + 0x29);
        dVar37 = (double)g_FrameTime;
        *(float *)(puVar7 + 0x18) = fVar3;
        *(float *)((int)puVar7 + 0xc4) = fVar2;
        *(float *)(puVar7 + 0x19) = fVar5;
        *(undefined4 *)((int)puVar7 + 0xcc) = *(undefined4 *)((int)puVar7 + 0x14c);
        dVar47 = (double)SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2);
        fVar1 = (float)((double)(float)(dVar37 * dVar34) / dVar47);
        dVar37 = dVar48;
        if (dVar48 - dVar47 < 0.0) {
          dVar37 = (double)(fVar3 * fVar1);
        }
        dVar21 = dVar48;
        if (dVar48 - dVar47 < 0.0) {
          dVar21 = (double)(fVar2 * fVar1);
        }
        dVar25 = dVar48;
        if (dVar48 - dVar47 < 0.0) {
          dVar25 = (double)(fVar5 * fVar1);
        }
        if (dVar47 - dVar48 < 0.0) {
          dVar37 = (double)(fVar3 * fVar1);
        }
        if (dVar47 - dVar48 < 0.0) {
          dVar21 = (double)(fVar2 * fVar1);
        }
        if (dVar47 - dVar48 < 0.0) {
          dVar25 = (double)(fVar5 * fVar1);
        }
        *(float *)(puVar7 + 0x18) = (float)dVar37;
        *(float *)((int)puVar7 + 0xc4) = (float)dVar21;
        *(float *)(puVar7 + 0x19) = (float)dVar25;
        FastVecAddSelf(uVar9 - 0x160,lVar17,uVar9 - 0x1d0);
        *(float *)(puVar7 + 0x19) =
             (float)((double)g_FrameTime * dVar45 + (double)*(float *)(puVar7 + 0x19));
        dVar37 = (double)MB_randRangeFloat((float)dVar32,(float)dVar33);
        *(float *)(puVar7 + 0x18) = (float)((double)*(float *)(puVar7 + 0x18) * dVar37);
        *(float *)((int)puVar7 + 0xc4) = (float)((double)*(float *)((int)puVar7 + 0xc4) * dVar37);
        *(float *)(puVar7 + 0x19) = (float)((double)*(float *)(puVar7 + 0x19) * dVar37);
        MB_randRange(0x3c,100);
        *(undefined4 *)(puVar7 + 6) = *(undefined4 *)(puVar7 + 0x1e);
        *(undefined4 *)(puVar7 + 7) = *(undefined4 *)(puVar7 + 0x1f);
        *(undefined4 *)(puVar7 + 8) = *(undefined4 *)(puVar7 + 0x18);
        *(undefined4 *)(puVar7 + 9) = *(undefined4 *)(puVar7 + 0x19);
        *(undefined4 *)((int)puVar7 + 0x34) = *(undefined4 *)((int)puVar7 + 0xf4);
        *(undefined4 *)((int)puVar7 + 0x3c) = *(undefined4 *)((int)puVar7 + 0xfc);
        *(undefined4 *)((int)puVar7 + 0x44) = *(undefined4 *)((int)puVar7 + 0xc4);
        *(undefined4 *)((int)puVar7 + 0x4c) = *(undefined4 *)((int)puVar7 + 0xcc);
        puVar7[0x10] = 1;
        iVar13 = FUN_00425540(dVar46,dVar34,dVar46,dVar20,puVar7[6],puVar7[7],puVar7[8],puVar7[9],
                              0xc9);
        if (iVar13 != 0) {
          *(float *)(iVar13 + 0x40) = *(float *)(iVar13 + 0x40) * 0.35;
          *(float *)(iVar13 + 0x44) = *(float *)(iVar13 + 0x44) * 0.35;
          *(float *)(iVar13 + 0x48) = *(float *)(iVar13 + 0x48) * 0.35;
        }
      }
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
                (dVar48,dVar48,dVar36,dVar34,0x40f86a0000000000,dVar45,0x402e000000000000,lVar10,
                 lVar17,lVar18);
      dVar36 = 5.5;
      iVar13 = 0;
      dVar37 = 0.25;
      dVar47 = 210000.0;
      dVar20 = 180.5;
      do {
        *(undefined4 *)(puVar7 + 0x30) = 0;
        *(undefined4 *)((int)puVar7 + 0x184) = 1;
        *(undefined4 *)(puVar7 + 0x31) = 2;
        dVar21 = (double)MB_randRangeFloat((float)dVar48,*(float *)(puVar7 + 0x35));
        dVar25 = (double)MB_randRot();
        fVar1 = (moby->pos).x;
        fVar2 = (moby->pos).y;
        if (moby->oClass == 0x94) {
          dVar21 = (double)(float)(dVar21 * dVar45);
        }
        dVar26 = (double)(float)(dVar25 + (double)puVar7[0x34]);
        *(f32 *)(puVar7 + 0x1f) = (moby->pos).z;
        dVar24 = (double)(float)(dVar39 - dVar25);
        if (dVar25 - (double)(float)(dVar39 - dVar25) < 0.0) {
          dVar24 = dVar25;
        }
        dVar27 = (double)(float)(dVar39 - dVar26);
        if (dVar26 - (double)(float)(dVar39 - dVar26) < 0.0) {
          dVar27 = dVar26;
        }
        dVar28 = (double)(float)(dVar40 - dVar25);
        if ((double)(float)(dVar40 - dVar25) - dVar24 < 0.0) {
          dVar28 = dVar24;
        }
        dVar24 = (double)(float)(dVar28 * dVar28);
        dVar25 = (double)(float)(dVar40 - dVar26);
        if ((double)(float)(dVar40 - dVar26) - dVar27 < 0.0) {
          dVar25 = dVar27;
        }
        dVar27 = (double)(float)(dVar25 * dVar25);
        dVar29 = (double)(float)(dVar24 * (double)(float)(dVar24 * dVar28));
        dVar31 = (double)(float)(dVar24 * dVar29);
        dVar30 = (double)(float)(dVar27 * (double)(float)(dVar27 * dVar25));
        dVar26 = (double)(float)(dVar27 * dVar30);
        *(float *)((int)puVar7 + 0xf4) =
             (float)((double)(float)((double)(float)(dVar24 * dVar31) * dVar44 +
                                    (double)(float)(dVar31 * dVar43 +
                                                   (double)(float)(dVar29 * dVar42 +
                                                                  (double)(float)((double)(float)(
                                                  dVar24 * dVar28) * dVar41 + dVar28)))) * dVar21 +
                    (double)fVar2);
        *(float *)(puVar7 + 0x1e) =
             (float)((double)(float)((double)(float)(dVar27 * dVar26) * dVar44 +
                                    (double)(float)(dVar26 * dVar43 +
                                                   (double)(float)(dVar30 * dVar42 +
                                                                  (double)(float)((double)(float)(
                                                  dVar27 * dVar25) * dVar41 + dVar25)))) * dVar21 +
                    (double)fVar1);
        dVar21 = (double)MB_randRangeFloat((float)dVar46,(float)dVar36);
        *(float *)(puVar7 + 0x1f) = (float)((double)*(float *)(puVar7 + 0x1f) + dVar21);
        FastVecSub(uVar9 - 0x150,lVar18,lVar19);
        fVar2 = *(float *)((int)puVar7 + 0x164);
        fVar3 = *(float *)(puVar7 + 0x2c);
        fVar5 = *(float *)(puVar7 + 0x2d);
        dVar21 = (double)g_FrameTime;
        *(float *)(puVar7 + 0x18) = fVar3;
        *(float *)((int)puVar7 + 0xc4) = fVar2;
        *(float *)(puVar7 + 0x19) = fVar5;
        *(undefined4 *)((int)puVar7 + 0xcc) = *(undefined4 *)((int)puVar7 + 0x16c);
        dVar25 = (double)SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2);
        fVar1 = (float)((double)(float)(dVar21 * dVar34) / dVar25);
        dVar21 = dVar48;
        if (dVar48 - dVar25 < 0.0) {
          dVar21 = (double)(fVar3 * fVar1);
        }
        dVar24 = dVar48;
        if (dVar48 - dVar25 < 0.0) {
          dVar24 = (double)(fVar2 * fVar1);
        }
        dVar26 = dVar48;
        if (dVar48 - dVar25 < 0.0) {
          dVar26 = (double)(fVar5 * fVar1);
        }
        if (dVar25 - dVar48 < 0.0) {
          dVar21 = (double)(fVar3 * fVar1);
        }
        if (dVar25 - dVar48 < 0.0) {
          dVar24 = (double)(fVar2 * fVar1);
        }
        if (dVar25 - dVar48 < 0.0) {
          dVar26 = (double)(fVar5 * fVar1);
        }
        *(float *)(puVar7 + 0x18) = (float)dVar21;
        *(float *)((int)puVar7 + 0xc4) = (float)dVar24;
        *(float *)(puVar7 + 0x19) = (float)dVar26;
        FastVecAddSelf(uVar9 - 0x140,lVar17,uVar9 - 0x1e0);
        dVar21 = (double)MB_randRangeFloat((float)dVar32,(float)dVar33);
        *(float *)(puVar7 + 0x18) = (float)((double)*(float *)(puVar7 + 0x18) * dVar21);
        *(float *)((int)puVar7 + 0xc4) = (float)((double)*(float *)((int)puVar7 + 0xc4) * dVar21);
        *(float *)(puVar7 + 0x19) = (float)((double)*(float *)(puVar7 + 0x19) * dVar21);
        dVar21 = (double)MB_randRangeFloat((float)dVar37,(float)dVar46);
        uVar38 = 0x7f000000;
        TweenColor((float)dVar21,0x7f000000,0x7f182030);
        dVar21 = (double)MB_randRangeFloat((float)dVar35,(float)dVar46);
        uVar22 = 0;
        TweenColor((float)dVar21,0,0x5f5f5f);
        dVar21 = (double)MB_randRangeFloat((float)dVar46,(float)dVar45);
        dVar21 = (double)(float)(dVar21 * dVar47);
        puVar7[0x36] = (longlong)(int)((double)animationSpeed * dVar20);
        uVar6 = *(undefined4 *)((int)puVar7 + 0x1b4);
        lVar11 = MB_randInt(3);
        uVar15 = lVar11 * 4 + (uVar9 - 0x2b0);
        iVar14 = SpawnPart_16
                           (dVar21,lVar19,lVar17,uVar38,uVar22,uVar15 & 0xffffffff,uVar6,
                            *(undefined4 *)((int)uVar15 + 0x180));
        if (iVar14 != 0) {
          *(float *)(iVar14 + 0x2c) = (float)((double)(moby->pos).z - dVar35);
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < 0x14);
      MB_SpawnBoltsFromCrate(lVar10,0,0xffffffffffffffff);
      DeleteMoby(moby);
    }
  }
  return;
}


